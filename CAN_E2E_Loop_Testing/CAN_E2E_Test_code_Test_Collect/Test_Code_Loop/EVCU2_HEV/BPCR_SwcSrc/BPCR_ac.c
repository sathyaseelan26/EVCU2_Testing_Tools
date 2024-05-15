/*
 * File: BPCR_ac.c
 *
 * Code generated for Simulink model 'BPCR_ac'.
 *
 * Model version                  : 9.246
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:11:26 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BPCR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_BPCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(TeBPCR_e_HVBatCntrWeld_ImpdOpn, BPCR_VAR_INIT)
    HaBPCR_e_HVBatCntrWeld_ImpOpn_Map[8] =
{
    CeBPCR_e_Normal, CeBPCR_e_Normal, CeBPCR_e_SNA, CeBPCR_e_StuckOpen,
    CeBPCR_e_StuckClosed, CeBPCR_e_SNA, CeBPCR_e_SNA, CeBPCR_e_SNA
};                                     /* Referenced by: '<S782>/Calib' */

static volatile CONST(TeBPCR_e_DCCntctrSts, BPCR_VAR_INIT)
    HaBPCR_e_HVBat_DC_CntctrStat_Map[6] =
{
    CeBPCR_e_DCCntctrSts_Open, CeBPCR_e_DCCntctrSts_Closed,
    CeBPCR_e_DCCntctrSts_Open, CeBPCR_e_DCCntctrSts_Faulted,
    CeBPCR_e_DCCntctrSts_Faulted, CeBPCR_e_DCCntctrSts_SNA
};                                     /* Referenced by: '<S786>/Calib' */

static volatile CONST(TeHVTR_e_HV_IsolStat, BPCR_VAR_INIT)
    HaBPCR_e_HV_BatIsolStat_Map[5] =
{
    CeHVTR_e_IsolUndetermined, CeHVTR_e_IsolPassed, CeHVTR_e_IsolFailed,
    CeHVTR_e_IsolFailed, CeHVTR_e_IsolUndetermined
};                                     /* Referenced by: '<S791>/Calib' */

static volatile CONST(TeHVTR_e_HV_BatCntctrStat, BPCR_VAR_INIT)
    HaBPCR_e_HV_CntctrStat_Map[6] =
{
    CeHVTR_e_Open, CeHVTR_e_Closed, CeHVTR_e_PrechrgActv, CeHVTR_e_PrechrgFailed,
    CeHVTR_e_PrechrgInhibited, CeHVTR_e_BatCntctrSts_SNA
};                                     /* Referenced by: '<S788>/Calib' */

static volatile CONST(TeBPCR_e_ThrmlRnawy_WarnSts, BPCR_VAR_INIT)
    HaBPCR_e_ThrmlRnawy_Warn_Map[4] =
{
    CeBPCR_e_NoThrmlRnawy, CeBPCR_e_DetectThrmlRnawy, CeBPCR_e_ThrmlRnawy_SNA,
    CeBPCR_e_ThrmlRnawy_SNA
};                                     /* Referenced by: '<S797>/Calib' */

static volatile CONST(TeSRAR_e_CommFail, BPCR_VAR_INIT)
    KaBPCR_e_BPCM_Comm_Fail_Map[15] =
{
    CeSRAR_e_CommFail_NoFault, CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC,
    CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC,
    CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC, CeSRAR_e_LOC_VDCM,
    CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC,
    CeSRAR_e_undefinedLoC, CeSRAR_e_undefinedLoC, CeSRAR_e_Bus_Failure_CAN
};                                     /* Referenced by: '<S775>/Calib' */

static volatile CONST(TeOBCR_e_ChargingStat_BPCM, BPCR_VAR_INIT)
    KaBPCR_e_ChargingStat_BPCM_Map[9] =
{
    CeOBCR_e_BattNotReady, CeOBCR_e_ReadyForCommand, CeOBCR_e_Chrg_CurntAllow,
    CeOBCR_e_Chrg_CurntDisAllow, CeOBCR_e_Dischrg_CurntAllow,
    CeOBCR_e_Dischrg_CurntDisAllow, CeOBCR_e_Complete, CeOBCR_e_SNA,
    CeOBCR_e_ChargingStat_Pass
};                /* Referenced by: '<S142>/PokeBPCR_e_ChargingStat_BPCMChrt' */

static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCI_Cnt_HV_BatModTempAvgWaitTme =
    0U;                                /* Referenced by: '<S348>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCI_Cnt_HV_BatModTempMaxWaitTme =
    0U;                                /* Referenced by: '<S352>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT)
    KeBPCI_Cnt_HV_BatModTempMaxWaitTme100ms = 1U;/* Referenced by: '<S463>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCI_Cnt_HV_BatModTempMinWaitTme =
    0U;                                /* Referenced by: '<S356>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT)
    KeBPCI_Cnt_HV_BatModTempMinWaitTme100ms = 1U;/* Referenced by: '<S464>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCI_Cnt_HV_BatRdyWaitTme = 16U;/* Referenced by: '<S360>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCI_I_HV_BatCurrDflt = 0.0F;/* Referenced by:
                                                                      * '<S6>/FsftBPCR_I_HV_BatCurrChrt'
                                                                      * '<S613>/Calib'
                                                                      */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCI_R_HV_BatImpedDflt = 0.0F;
                          /* Referenced by: '<S9>/FsftBPCR_R_HV_BatImpedChrt' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCI_T_HV_BatModTempAvgDflt =
    20.0F;                             /* Referenced by: '<S349>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCI_T_HV_BatModTempMaxDflt =
    0.0F;                              /* Referenced by: '<S353>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCI_T_HV_BatModTempMinDflt =
    0.0F;                              /* Referenced by: '<S357>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCI_U_CellVoltHighThrshDflt =
    0.0F;                              /* Referenced by:
                                        * '<S10>/FsftBPCR_U_CellVoltHighThrshChrt'
                                        * '<S614>/Calib'
                                        */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCI_U_CellVoltLowThrshDflt =
    0.0F;                              /* Referenced by:
                                        * '<S11>/FsftBPCR_U_CellVoltLowThrshChrt'
                                        * '<S615>/Calib'
                                        */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCI_U_HV_BatModVoltAvgDflt =
    3.7F;                              /* Referenced by:
                                        * '<S12>/FsftBPCR_U_HV_BatModVoltAvgChrt'
                                        * '<S616>/Calib'
                                        */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCI_U_HV_BatModVoltMaxDflt =
    0.0F;                              /* Referenced by:
                                        * '<S13>/FsftBPCR_U_HV_BatModVoltMaxChrt'
                                        * '<S617>/Calib'
                                        */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCI_U_HV_BatModVoltMinDflt =
    0.0F;                              /* Referenced by:
                                        * '<S14>/FsftBPCR_U_HV_BatModVoltMinChrt'
                                        * '<S618>/Calib'
                                        */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCI_U_HV_BatVoltDflt = 0.0F;/* Referenced by:
                                                                      * '<S15>/FsftBPCR_U_HV_BatVoltChrt'
                                                                      * '<S619>/Calib'
                                                                      */
static volatile CONST(float32, BPCR_VAR_INIT)
    KeBPCI_U_MaxCellDschargeImpedanceDflt = 0.0F;/* Referenced by: '<S620>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT)
    KeBPCI_U_MinCellDschargeImpedanceDflt = 0.0F;/* Referenced by: '<S621>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCI_U_OCVAvgCellVoltageDflt =
    0.0F;                              /* Referenced by: '<S622>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCI_U_OCVMaxCellVoltageDflt =
    0.0F;                              /* Referenced by: '<S623>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCI_U_OCVMinCellVoltageDflt =
    0.0F;                              /* Referenced by: '<S624>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCI_b_BatModTempStrgAlwysEn = 1;/* Referenced by: '<S465>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCR_Cnt_BatMaxModTmpFA_Dur = 20U;/* Referenced by: '<S439>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCR_Cnt_BatPackSOC_FA_Dur = 20U;/* Referenced by: '<S440>/Calib' */

#if Rte_SysCon_Variant_BPCR_5

static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCR_Cnt_BatShtOffFlg_Debounce =
    5U;                                /* Referenced by: '<S327>/Calib' */

#endif

static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCR_Cnt_BatVoltModMaxFA_Dur =
    20U;                               /* Referenced by: '<S441>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCR_Cnt_HEVOnReqBPCM_OffDebounce
    = 5U;                              /* Referenced by: '<S330>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCR_Cnt_HEVOnReqBPCM_OnDebounce =
    5U;                                /* Referenced by: '<S331>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCR_Cnt_HVBatCntrWeld_ImpdOpn =
    40U;                               /* Referenced by: '<S365>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCR_Cnt_HVBatRdyDebounce = 10U;/* Referenced by: '<S250>/Calib' */
static volatile CONST(sint16, BPCR_VAR_INIT) KeBPCR_Cnt_HVBat_ModNumMaxTmp = 0;/* Referenced by:
                                                                      * '<S50>/FsftBPCR_cnt_HVBatt_ModNumMaxTmpChrt'
                                                                      * '<S625>/Calib'
                                                                      */
static volatile CONST(sint16, BPCR_VAR_INIT) KeBPCR_Cnt_HVBat_ModNumMinTmp = 0;/* Referenced by:
                                                                      * '<S51>/FsftBPCR_cnt_HVBatt_ModNumMinTmpChrt'
                                                                      * '<S626>/Calib'
                                                                      */
static volatile CONST(sint16, BPCR_VAR_INIT) KeBPCR_Cnt_HVBat_NumMaxVlt = 0;/* Referenced by: '<S627>/Calib' */
static volatile CONST(sint16, BPCR_VAR_INIT) KeBPCR_Cnt_HVBat_NumMinVlt = 0;/* Referenced by: '<S628>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT)
    KeBPCR_Cnt_HV_BatChrgPwrET_SgnlWaitTme = 5U;/* Referenced by: '<S411>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT)
    KeBPCR_Cnt_HV_BatChrgPwrLT_SgnlWaitTme = 5U;/* Referenced by: '<S412>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT)
    KeBPCR_Cnt_HV_BatChrgPwrST_SgnlWaitTme = 5U;/* Referenced by: '<S413>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCR_Cnt_HV_BatCurrFA_Dur = 20U;/* Referenced by: '<S442>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT)
    KeBPCR_Cnt_HV_BatDschrgPwrET_SgnlWaitTme = 5U;/* Referenced by: '<S414>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT)
    KeBPCR_Cnt_HV_BatDschrgPwrLT_SgnlWaitTme = 5U;/* Referenced by: '<S415>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT)
    KeBPCR_Cnt_HV_BatDschrgPwrST_SgnlWaitTme = 5U;/* Referenced by: '<S416>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT)
    KeBPCR_Cnt_HV_BatPackSOC_SgnlWaitTme = 5U;/* Referenced by: '<S460>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCR_Cnt_MILOnReqBPCM_OffDebounce
    = 5U;                              /* Referenced by: '<S332>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCR_Cnt_MILOnReqBPCM_OnDebounce =
    5U;                                /* Referenced by: '<S333>/Calib' */
static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCR_Cnt_OVDebounce = 2U;/* Referenced by: '<S251>/Calib' */

#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCR_Cnt_PWMBlnkngDeactTime =
    160U;                              /* Referenced by: '<S191>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCR_Cnt_PWMBlnkngPeriod = 50U;/* Referenced by: '<S192>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(uint32, BPCR_VAR_INIT) KeBPCR_Cnt_PWM_TLow1Max = 60U;/* Referenced by: '<S217>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(uint32, BPCR_VAR_INIT) KeBPCR_Cnt_PWM_TLow1Min = 40U;/* Referenced by: '<S218>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(uint32, BPCR_VAR_INIT) KeBPCR_Cnt_PWM_TLow2Max = 110U;/* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(uint32, BPCR_VAR_INIT) KeBPCR_Cnt_PWM_TLow2Min = 90U;/* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(uint32, BPCR_VAR_INIT) KeBPCR_Cnt_PWM_TLow3Max = 160U;/* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(uint32, BPCR_VAR_INIT) KeBPCR_Cnt_PWM_TLow3Min = 140U;/* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(uint32, BPCR_VAR_INIT) KeBPCR_Cnt_PWM_TLow4Max = 210U;/* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(uint32, BPCR_VAR_INIT) KeBPCR_Cnt_PWM_TLow4Min = 190U;/* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCR_Cnt_PWMdetSmpLim = 401U;/* Referenced by: '<S272>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCR_Cnt_PWMdetectFailLim = 400U;/* Referenced by: '<S273>/Calib' */

#endif

static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCR_Cnt_UVDebounce = 2U;/* Referenced by: '<S252>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_DC_CntctrCntrl_PWM = 1.0F;/* Referenced by: '<S576>/Calib' */

#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_DC_PWMCmdThrshForBlnkng =
    0.0F;                              /* Referenced by: '<S193>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_DC_PWMDecoded_DutyCycle =
    1.0F;                              /* Referenced by: '<S235>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_DC_PWMOffset = 0.0F;/* Referenced by: '<S274>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_DC_PWMtollerance = 5.0F;/* Referenced by: '<S275>/Calib' */

#endif

static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_I_CurrHiSOC = -11.0F;/* Referenced by: '<S521>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_I_CurrLoSOC = 11.0F;/* Referenced by: '<S522>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_I_HV_BatCurrArbOvrd = 0.0F;/* Referenced by: '<S396>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_I_HV_BatCurrString2_Init =
    0.0F;                              /* Referenced by: '<S641>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_K_CapFactor_Slope =
    1.39189F;                          /* Referenced by: '<S503>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_K_Default309h_Value = 0.0F;
                      /* Referenced by: '<S68>/PokeBPCR_I_MaxChgCurrAlwdChrt' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_HV_BatChrgPwrET_Dflt =
    0.0F;                              /* Referenced by: '<S550>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_HV_BatChrgPwrET_Init =
    0.0F;                              /* Referenced by: '<S563>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_HV_BatChrgPwrLT_Dflt =
    0.0F;                              /* Referenced by: '<S551>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_HV_BatChrgPwrLT_Init =
    0.0F;                              /* Referenced by: '<S564>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_HV_BatChrgPwrST_Dflt =
    0.0F;                              /* Referenced by: '<S552>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_HV_BatChrgPwrST_Init =
    0.0F;                              /* Referenced by: '<S565>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_HV_BatDschrgPwrET_Dflt =
    0.0F;                              /* Referenced by: '<S553>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_HV_BatDschrgPwrET_Init =
    0.0F;                              /* Referenced by: '<S566>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_HV_BatDschrgPwrLT_Dflt =
    0.0F;                              /* Referenced by: '<S554>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_HV_BatDschrgPwrLT_Init =
    0.0F;                              /* Referenced by: '<S567>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_HV_BatDschrgPwrST_Dflt =
    0.0F;                              /* Referenced by: '<S555>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_HV_BatDschrgPwrST_Init =
    0.0F;                              /* Referenced by: '<S568>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_HybBatDefMaxChrgPwrET =
    1.0F;                              /* Referenced by: '<S417>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_HybBatDefMaxChrgPwrLT =
    -30.0F;                            /* Referenced by: '<S418>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_HybBatDefMaxChrgPwrST =
    -36.0F;                            /* Referenced by: '<S419>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_HybBatDefMaxDschrgPwrET =
    1.0F;                              /* Referenced by: '<S420>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_HybBatDefMaxDschrgPwrLT =
    30.0F;                             /* Referenced by: '<S421>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_HybBatDefMaxDschrgPwrST =
    36.0F;                             /* Referenced by: '<S422>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_TracBat_EChrgPowLong =
    0.0F;                              /* Referenced by: '<S577>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT)
    KeBPCR_P_TracBat_EChrgPowLongMod_Val = 0.0F;/* Referenced by: '<S423>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_P_TracBat_EChrgPowLongVal =
    0.0F;                              /* Referenced by: '<S424>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_Pct_BatPackSOCOvrd = 60.0F;/* Referenced by: '<S452>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_Pct_CATL_CS_SOC = 24.0F;/* Referenced by: '<S504>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_Pct_CATL_Ct_SOC = 50.0F;/* Referenced by: '<S505>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_Pct_CATL_Top_SOC = 91.0F;/* Referenced by: '<S506>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_Pct_ExtrmHiSOC = 80.0F;/* Referenced by: '<S523>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_Pct_ExtrmLoSOC = 20.0F;/* Referenced by: '<S524>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_Pct_HVBatSOHLow_Init =
    100.0F;                            /* Referenced by: '<S578>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_Pct_HV_BatPackSOC_Dflt =
    0.0F;                              /* Referenced by: '<S556>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_Pct_HV_BatPackSOC_Init =
    0.0F;                              /* Referenced by: '<S569>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_Pct_HV_BatSOC_Max = 99.9F;/* Referenced by: '<S507>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_Pct_HV_BatSOC_Min = 0.1F;/* Referenced by: '<S508>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_Pct_HiSOCThsld = 80.0F;/* Referenced by: '<S525>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_Pct_LG_MaxSOC = 100.0F;/* Referenced by: '<S509>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_Pct_LG_MinSOC = 0.0F;/* Referenced by: '<S510>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_Pct_LoSOCThsld = 20.0F;/* Referenced by: '<S526>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_Pct_SOCMaxStepChg = 1.0F;/* Referenced by: '<S511>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_Pct_SOC_Default = 60.0F;/* Referenced by:
                                                                      * '<S571>/Calib'
                                                                      * '<S516>/Calib'
                                                                      */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_Pct_SOC_Offset = 0.0F;/* Referenced by: '<S453>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_T_BDUBusBarTempInit = 30.0F;/* Referenced by: '<S629>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_T_BatModTmp_Dflt = 0.0F;/* Referenced by: '<S557>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_T_BusBarTempInit = 30.0F;/* Referenced by: '<S630>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_T_DefBatModTmp = 20.0F;/* Referenced by: '<S466>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_T_HVBatClgOutlet_Init =
    0.0F;                              /* Referenced by: '<S631>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_T_HVBatDefMaxModTmp = 45.0F;/* Referenced by: '<S467>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_T_HVBatDefMinModTmp =
    -15.0F;                            /* Referenced by: '<S468>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_T_Temp_Filter = 0.05F;/* Referenced by: '<S481>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT)
    KeBPCR_U_BPCM_HV_InternalVoltage_Init = 0.0F;/* Referenced by: '<S632>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_U_BatVoltModMaxArbOvrd =
    14.8F;                             /* Referenced by: '<S373>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_U_BatVoltModMinArbOvrd =
    12.6F;                             /* Referenced by: '<S374>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT)
    KeBPCR_U_HV_InternalStringVolt1_Init = 0.0F;/* Referenced by: '<S633>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT)
    KeBPCR_U_HV_InternalStringVolt2_Init = 0.0F;/* Referenced by: '<S634>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_U_HV_SeriesVolt_Init = 0.0F;/* Referenced by: '<S635>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_U_MaxCellVltAlldDflt = 1.5F;/* Referenced by:
                                                                      * '<S16>/FsftBPCR_U_MaxCellVltAlldChrt'
                                                                      * '<S636>/Calib'
                                                                      */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_U_MaxPkVltAlldDflt = 175.0F;/* Referenced by:
                                                                      * '<S17>/FsftBPCR_U_MaxPkVltAlldChrt'
                                                                      * '<S637>/Calib'
                                                                      */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_U_MinCellVltAlldDflt = 1.5F;/* Referenced by:
                                                                      * '<S18>/FsftBPCR_U_MinCellVltAlldChrt'
                                                                      * '<S638>/Calib'
                                                                      */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_U_MinPkVltAlldDflt = 175.0F;/* Referenced by:
                                                                      * '<S19>/FsftBPCR_U_MinPkVltAlldChrt'
                                                                      * '<S639>/Calib'
                                                                      */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_U_OVThrshMinLim = 4.0F;/* Referenced by: '<S485>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_U_UVThrshMaxLim = 2.8F;/* Referenced by: '<S486>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_BPCMRedundantCAN = 0;/* Referenced by:
                                                                      * '<S305>/Calib'
                                                                      * '<S380>/Calib'
                                                                      */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_BatCntctrOpnRq_Cal = 0;/* Referenced by: '<S317>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_BatCntctrOpnRq_Ovrd = 0;/* Referenced by: '<S306>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_BatCntctrOpnRq_Val = 0;/* Referenced by: '<S307>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_BatCntctrStat_FA_Cal = 0;/* Referenced by: '<S318>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_BatPackSOCAndFAOvrd = 0;/* Referenced by: '<S454>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_BatPackSOCOvrd = 0;/* Referenced by: '<S455>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_BatPackSOC_Test = 0;/* Referenced by: '<S443>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_BatVolt_Use12p5 = 1;/* Referenced by: '<S375>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_CheckOV = 1;/* Referenced by: '<S253>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_CheckUV = 1;/* Referenced by: '<S254>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_CntctrCntrl_PWM_FA = 0;/* Referenced by: '<S579>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_CurrFAOvrd = 0;/* Referenced by: '<S397>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_CurrOvrd = 0;/* Referenced by: '<S398>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_DevCalUseOVCal = 0;/* Referenced by: '<S487>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_DevCalUseUVCal = 0;/* Referenced by: '<S488>/Calib' */

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_EnblP0ADA_Diag = 1;/* Referenced by: '<S276>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_EnblPWMCntctrCtrlDTC = 0;/* Referenced by: '<S277>/Calib' */

#endif

static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HEVOnRqBPCM_Init = 0;/* Referenced by: '<S580>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HVBatClgOutletTempFA_Init
    = 0;                               /* Referenced by: '<S640>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HVBatCntctr_OpnPndgOvrd =
    0;                                 /* Referenced by: '<S255>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HVBatCntctr_OpnPndgVal =
    0;                                 /* Referenced by: '<S256>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT)
    KeBPCR_b_HVBatDefMaxModTmpAndFAOvrd = 0;/* Referenced by: '<S469>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HVBatDefMaxModTmpOvrd = 0;/* Referenced by: '<S470>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT)
    KeBPCR_b_HVBatDefMinModTmpAndFAOvrd = 0;/* Referenced by: '<S471>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HVBatDefMinModTmpOvrd = 0;/* Referenced by: '<S472>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT)
    KeBPCR_b_HVBatIntrlkIntrnlStatFA_Init = 0;/* Referenced by: '<S581>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HVBatPerWUThermal = 0;/* Referenced by: '<S582>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HVBatPerWakeUp = 0;/* Referenced by: '<S583>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HVBat_RTC_V_Init = 0;/* Referenced by: '<S584>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HV_AuxLoadOffReq_Init = 0;/* Referenced by: '<S585>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HV_BatCntctrOpenPending =
    0;                                 /* Referenced by: '<S586>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HV_BatCntctrOpenReq = 0;/* Referenced by: '<S587>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HV_BatCntctrStatFA = 1;/* Referenced by: '<S588>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HV_BatInrlkStatFA = 1;/* Referenced by: '<S589>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HV_BatRdySgnl_Rcvd = 0;/* Referenced by: '<S590>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HV_BatRdy_Init = 0;/* Referenced by: '<S591>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HV_BatRdy_NVRAM_Init = 0;/* Referenced by: '<S592>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HV_BatVoltModMaxFAOvrd =
    0;                                 /* Referenced by: '<S491>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT)
    KeBPCR_b_HV_BatVoltModMaxFAOvrdEnbl = 0;/* Referenced by: '<S492>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT)
    KeBPCR_b_HybBatDefMaxChrgPwrETAndFAOvrd = 0;/* Referenced by: '<S425>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HybBatDefMaxChrgPwrETOvrd
    = 0;                               /* Referenced by: '<S426>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT)
    KeBPCR_b_HybBatDefMaxChrgPwrLTAndFAOvrd = 0;/* Referenced by: '<S427>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HybBatDefMaxChrgPwrLTOvrd
    = 0;                               /* Referenced by: '<S428>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT)
    KeBPCR_b_HybBatDefMaxChrgPwrSTAndFAOvrd = 0;/* Referenced by: '<S429>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_HybBatDefMaxChrgPwrSTOvrd
    = 0;                               /* Referenced by: '<S430>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT)
    KeBPCR_b_HybBatDefMaxDschrgPwrETAndFAOvrd = 0;/* Referenced by: '<S431>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT)
    KeBPCR_b_HybBatDefMaxDschrgPwrETOvrd = 0;/* Referenced by: '<S432>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT)
    KeBPCR_b_HybBatDefMaxDschrgPwrLTAndFAOvrd = 0;/* Referenced by: '<S433>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT)
    KeBPCR_b_HybBatDefMaxDschrgPwrLTOvrd = 0;/* Referenced by: '<S434>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT)
    KeBPCR_b_HybBatDefMaxDschrgPwrSTAndFAOvrd = 0;/* Referenced by: '<S435>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT)
    KeBPCR_b_HybBatDefMaxDschrgPwrSTOvrd = 0;/* Referenced by: '<S436>/Calib' */

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(boolean, BPCR_VAR_INIT)
    KeBPCR_b_HybBatPosConConCirPer_LtchEnbl = 0;/* Referenced by: '<S278>/Calib' */

#endif

static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_PWMThrmlRnawyEn = 1;/* Referenced by: '<S381>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_PwrLimON = 0;/* Referenced by: '<S593>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_PwrLimOnOvrdEnbl = 0;/* Referenced by: '<S344>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_PwrLimOnOvrdVal = 0;/* Referenced by: '<S345>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_SDCmptPrev = 0;/* Referenced by: '<S517>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_SOCExtrmEnbl = 1;/* Referenced by: '<S527>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_SOCInitOvrd = 0;/* Referenced by: '<S572>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_ThrmlRnawyFlg_NoSrc = 0;/* Referenced by: '<S386>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT)
    KeBPCR_b_TracBat_EChrgPowLongMod_Ovrd = 0;/* Referenced by: '<S437>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_TracBat_EChrgPowLongOvrd =
    0;                                 /* Referenced by: '<S438>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_TracBat_EChrgPowLongV = 0;/* Referenced by: '<S594>/Calib' */

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_UseBSWPWMTimer = 1;/* Referenced by: '<S186>/Calib' */

#endif

static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_UseCANCntctrSts = 1;/* Referenced by: '<S308>/Calib' */
static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_UseCATLSOC = 0;/* Referenced by: '<S512>/Calib' */

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(boolean, BPCR_VAR_INIT) KeBPCR_b_UseOORforDTC = 1;/* Referenced by: '<S279>/Calib' */

#endif

static volatile CONST(uint16, BPCR_VAR_INIT) KeBPCR_d_InputOvrdEnbl_OVUV = 0U;/* Referenced by: '<S376>/Calib' */
static volatile CONST(TeBPCR_e_BPCMShtDwnRdy, BPCR_VAR_INIT)
    KeBPCR_e_BPCMShtDwnRdy = CeBPCR_e_Not_Ready_for_Shutdown;/* Referenced by: '<S595>/Calib' */
static volatile CONST(TeBPCR_e_LIN_BusOff, BPCR_VAR_INIT)
    KeBPCR_e_BPCM_LIN_BusOff_Init = CeBPCR_e_LIN_BusOff_Disabled;/* Referenced by: '<S596>/Calib' */
static volatile CONST(TeBPCR_e_LOC_BCP, BPCR_VAR_INIT)
    KeBPCR_e_BPCM_LOC_BCP_Init = CeBPCR_e_LOC_BCP_False;/* Referenced by: '<S597>/Calib' */
static volatile CONST(TeBPCR_e_LOC_BatClntHtr, BPCR_VAR_INIT)
    KeBPCR_e_BPCM_LOC_BatClntHtr_Init = CeBPCR_e_LOC_BatClntHtr_False;/* Referenced by: '<S598>/Calib' */
static volatile CONST(TeOBCR_e_ChargingStat_BPCM, BPCR_VAR_INIT)
    KeBPCR_e_ChargingStat_BPCM = CeOBCR_e_BattNotReady;
                  /* Referenced by: '<S142>/PokeBPCR_e_ChargingStat_BPCMChrt' */
static volatile CONST(TeBPCR_e_HVBatCntrWeld_ImpdOpn, BPCR_VAR_INIT)
    KeBPCR_e_HVBatCntrWeld_ImpdOpn = CeBPCR_e_Normal;/* Referenced by: '<S366>/Calib' */
static volatile CONST(TeBPCR_e_HVBatIntrlk_InternalStat, BPCR_VAR_INIT)
    KeBPCR_e_HVBatIntrlkIntrnlStat_Init = CeBPCR_e_HVBatIntrlkPass;/* Referenced by: '<S599>/Calib' */
static volatile CONST(TeBPCR_e_HVDcChargeTypeStat, BPCR_VAR_INIT)
    KeBPCR_e_HVDcChargeTypeStat_Init = CeBPCR_e_HVDcChargeStat_400V;/* Referenced by: '<S601>/Calib' */
static volatile CONST(TeBPCR_e_HVTracBatCntctrConfig, BPCR_VAR_INIT)
    KeBPCR_e_HVTracBatCntctrConfig_Init =
    CeBPCR_e_HVTracBatConfig_Closed_Parallel;/* Referenced by: '<S602>/Calib' */
static volatile CONST(TeHVTR_e_HV_BatCntctrStat, BPCR_VAR_INIT)
    KeBPCR_e_HV_BatCntctrStat = CeHVTR_e_Open;/* Referenced by: '<S603>/Calib' */
static volatile CONST(TeHVTR_e_HV_IntrlkStat, BPCR_VAR_INIT)
    KeBPCR_e_HV_BatInrlkStat = CeHVTR_e_IntrlkNotSourced;/* Referenced by: '<S604>/Calib' */
static volatile CONST(TeHVTR_e_HV_IsolStat, BPCR_VAR_INIT)
    KeBPCR_e_HV_BatIsolStat = CeHVTR_e_IsolUndetermined;/* Referenced by: '<S605>/Calib' */
static volatile CONST(TeBPCR_e_HV_IsolStat_raw, BPCR_VAR_INIT)
    KeBPCR_e_HV_BatIsolStat_raw_INIT = CeBPCR_e_GFD_NotPerformed;/* Referenced by: '<S600>/Calib' */
static volatile CONST(TeBPCR_e_HVBatCntrWeld_ImpdOpn, BPCR_VAR_INIT)
    KeBPCR_e_Init_HVBatCntrWeld_ImpdOpn = CeBPCR_e_Normal;/* Referenced by: '<S606>/Calib' */
static volatile CONST(TeBPCR_e_PWMDecoded_CntctrSts, BPCR_VAR_INIT)
    KeBPCR_e_PWMCntctrSts_Init = CeBPCR_e_DefaultCntctrSts;/* Referenced by:
                                                            * '<S560>/Calib'
                                                            * '<S239>/Calib'
                                                            */

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(TeBPCR_e_PWMDecoded_CntctrSts, BPCR_VAR_INIT)
    KeBPCR_e_PWMDecodedCntctrSts1 = CeBPCR_e_OpenCntctrReq;/* Referenced by:
                                                            * '<S214>/Calib'
                                                            * '<S231>/Calib'
                                                            */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(TeBPCR_e_PWMDecoded_CntctrSts, BPCR_VAR_INIT)
    KeBPCR_e_PWMDecodedCntctrSts2 = CeBPCR_e_OpenedCntctrSts;/* Referenced by:
                                                              * '<S213>/Calib'
                                                              * '<S230>/Calib'
                                                              */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(TeBPCR_e_PWMDecoded_CntctrSts, BPCR_VAR_INIT)
    KeBPCR_e_PWMDecodedCntctrSts3 = CeBPCR_e_ClosedCntctrSts;/* Referenced by:
                                                              * '<S211>/Calib'
                                                              * '<S228>/Calib'
                                                              */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(TeBPCR_e_PWMDecoded_CntctrSts, BPCR_VAR_INIT)
    KeBPCR_e_PWMDecodedCntctrSts4 = CeBPCR_e_ThrmlRnawy_Warn;/* Referenced by:
                                                              * '<S212>/Calib'
                                                              * '<S229>/Calib'
                                                              */

#endif

static volatile CONST(TeHMIR_e_PwrtrnHV_IsolStat, BPCR_VAR_INIT)
    KeBPCR_e_PwrtrnHV_IsolStat = CeHMIR_e_IsolUndetermined;/* Referenced by: '<S607>/Calib' */
static volatile CONST(sint16, BPCR_VAR_INIT) KeBPCR_i_DC_IsolationStsDis = 4;/* Referenced by: '<S799>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_q_BatPackCap = 8.8F;/* Referenced by: '<S533>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_q_FullAmpHrCap_Init = 0.0F;/* Referenced by:
                                                                      * '<S59>/FsftBPCR_q_FullAmpHrCapChrt'
                                                                      * '<S570>/Calib'
                                                                      */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_t_BaseTime = 0.1F;/* Referenced by:
                                                                      * '<S528>/Calib'
                                                                      * '<S534>/Calib'
                                                                      */

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_t_DecodePWM_Tmr = 0.00625F;/* Referenced by: '<S236>/Calib' */

#endif

static volatile CONST(uint32, BPCR_VAR_INIT) KeBPCR_t_HVBatRealTimeClock_Init =
    0U;                                /* Referenced by: '<S608>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_t_HVBatSleepTime = 0.0F;/* Referenced by: '<S609>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_t_HVBattCntctrOpnTm = 0.0F;/* Referenced by:
                                                                      * '<S62>/FsftBPCR_t_HVBattCntctrOpnTmChrt'
                                                                      * '<S610>/Calib'
                                                                      */

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_t_PWM_TLow1Max = 0.06F;/* Referenced by: '<S200>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_t_PWM_TLow1Min = 0.04F;/* Referenced by: '<S201>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_t_PWM_TLow2Max = 0.11F;/* Referenced by: '<S202>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_t_PWM_TLow2Min = 0.09F;/* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_t_PWM_TLow3Max = 0.16F;/* Referenced by: '<S204>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_t_PWM_TLow3Min = 0.14F;/* Referenced by: '<S205>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_t_PWM_TLow4Max = 0.21F;/* Referenced by: '<S206>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_t_PWM_TLow4Min = 0.19F;/* Referenced by: '<S207>/Calib' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_t_PWMmaxWaitTime = 0.26F;/* Referenced by: '<S280>/Calib' */

#endif

static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_t_PrechrgPnltyTimer = 0.0F;/* Referenced by: '<S611>/Calib' */
static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_t_SOCExtrmDebounce = 10.0F;/* Referenced by: '<S529>/Calib' */

#if Rte_SysCon_Variant_BPCR_3

static volatile CONST(float32, BPCR_VAR_INIT) KeBPCR_t_dtRaster = 0.0125F;/* Referenced by: '<S281>/Calib' */

#endif

static volatile CONST(float32, BPCR_VAR_INIT) KtBPCR_Cnt_HVCntctrOpReqCntr[5] =
{
    2.0F, 2.0F, 10.0F, 20.0F, 20.0F
} ;                                    /* Referenced by: '<S321>/Vector' */

static volatile CONST(float32, BPCR_VAR_INIT) KtBPCR_U_OVThrshCal[9] =
{
    4.15F, 4.15F, 4.15F, 4.15F, 4.15F, 4.15F, 4.15F, 4.15F, 4.15F
} ;                                    /* Referenced by: '<S489>/Vector' */

static volatile CONST(float32, BPCR_VAR_INIT) KtBPCR_U_UVThrshCal[9] =
{
    2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F, 2.5F
} ;                                    /* Referenced by: '<S490>/Vector' */

static volatile CONST(float32, BPCR_VAR_INIT) KtBPCR_U_VMaxThsld[9] =
{
    15.1F, 15.1F, 14.9F, 14.8F, 14.7F, 14.5F, 14.5F, 14.5F, 14.5F
} ;                                    /* Referenced by: '<S530>/Vector' */

static volatile CONST(float32, BPCR_VAR_INIT) KtBPCR_U_VMinThsld[9] =
{
    9.5F, 10.0F, 11.5F, 11.8F, 12.2F, 12.3F, 12.3F, 12.3F, 12.3F
} ;                                    /* Referenced by: '<S531>/Vector' */

static volatile CONST(float32, BPCR_VAR_INIT) KxBPCR_Cnt_HVCntctrOpReqCntr[5] =
{
    0.0F, 2.0F, 5.0F, 10.0F, 300.0F
} ;                                    /* Referenced by: '<S321>/Vector' */

static volatile CONST(float32, BPCR_VAR_INIT) KxBPCR_U_OVThrshCal[9] =
{
    -35.0F, -25.0F, -20.0F, -10.0F, 0.0F, 20.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S489>/Vector' */

static volatile CONST(float32, BPCR_VAR_INIT) KxBPCR_U_UVThrshCal[9] =
{
    -35.0F, -25.0F, -20.0F, -10.0F, 0.0F, 20.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S490>/Vector' */

static volatile CONST(float32, BPCR_VAR_INIT) KxBPCR_U_VMaxThsld[9] =
{
    -30.0F, -20.0F, -10.0F, 0.0F, 11.0F, 20.0F, 30.0F, 40.0F, 50.0F
} ;                                    /* Referenced by: '<S530>/Vector' */

static volatile CONST(float32, BPCR_VAR_INIT) KxBPCR_U_VMinThsld[9] =
{
    -30.0F, -20.0F, -10.0F, 0.0F, 11.0F, 20.0F, 30.0F, 40.0F, 50.0F
} ;                                    /* Referenced by: '<S531>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_BPCR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BPCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, BPCR_VAR_INIT) VeBPCC_Pct_BatSOC_CATL;/* '<S514>/Switch' */
static VAR(float32, BPCR_VAR_INIT) VeBPCC_Pct_HV_BatSOC_DS;/* '<S496>/Switch' */
static VAR(float32, BPCR_VAR_INIT) VeBPCC_Pct_HV_BatSOC_LG;/* '<S501>/Switch1' */
static VAR(float32, BPCR_VAR_INIT) VeBPCC_Pct_HV_BatSOC_Unfilt;/* '<S388>/Unit Delay4' */
static VAR(boolean, BPCR_VAR_INIT) VeBPCC_b_CATL_Cond1;/* '<S495>/Logical1' */
static VAR(boolean, BPCR_VAR_INIT) VeBPCC_b_CATL_Cond2;/* '<S495>/Logical2' */
static VAR(boolean, BPCR_VAR_INIT) VeBPCC_b_CATL_Cond3;/* '<S495>/Comparison5' */
static VAR(boolean, BPCR_VAR_INIT) VeBPCC_b_CATL_Cond4;/* '<S495>/Comparison6' */

#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

static VAR(boolean, BPCR_VAR_INIT) VeBPCC_b_PWMBlankActRaw;/* '<S189>/Greater  Than1' */

#endif

#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

static VAR(boolean, BPCR_VAR_INIT) VeBPCC_b_PWMBlankDeactRaw;/* '<S190>/AND' */

#endif

static VAR(boolean, BPCR_VAR_INIT) VeBPCC_b_SOCExtrmTrig;/* '<S520>/AND' */
static VAR(sint8, BPCR_VAR_INIT) VeBPCC_b_ThrmlRnawy_DebugSgnl;/* '<S246>/Merge1' */
static VAR(float32, BPCR_VAR_INIT) VeBPCI_I_HV_BatCurrArb;/* '<S389>/Switch10' */
static VAR(float32, BPCR_VAR_INIT) VeBPCI_U_BatVoltModMaxArb;/* '<S245>/Switch' */
static VAR(float32, BPCR_VAR_INIT) VeBPCI_U_BatVoltModMaxArb_Init;/* '<S558>/Gain' */
static VAR(float32, BPCR_VAR_INIT) VeBPCI_U_BatVoltModMinArb;/* '<S245>/Switch1' */
static VAR(float32, BPCR_VAR_INIT) VeBPCI_U_BatVoltModMinArb_Init;/* '<S559>/Gain' */
static VAR(boolean, BPCR_VAR_INIT) VeBPCI_b_HV_BatPackSOC_FA_Ovrd;/* '<S392>/Logical Operator4' */
static VAR(boolean, BPCR_VAR_INIT) VeBPCI_b_HV_BatRdy_Init_NVRAM;/* '<S612>/Gain' */

#if Rte_SysCon_Variant_BPCR_3

static VAR(uint8, BPCR_VAR_INIT) VeBPCR_Cnt_PWMBSW_Dbg;/* '<S184>/Merge2' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static VAR(uint16, BPCR_VAR_INIT) VeBPCR_Cnt_PWMCntctrCtrl_FailCntr;/* '<S294>/Switch1' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static VAR(uint16, BPCR_VAR_INIT) VeBPCR_Cnt_PWMCntctrCtrl_SmpCntr;/* '<S295>/Switch1' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static VAR(boolean, BPCR_VAR_INIT) VeBPCR_b_BSWPWMTimerOOR;/* '<S184>/Merge1' */

#endif

static VAR(boolean, BPCR_VAR_INIT) VeBPCR_b_BSWTmrPokeCall;/* '<S179>/Comparison5' */

#if Rte_SysCon_Variant_BPCR_3

static VAR(boolean, BPCR_VAR_INIT) VeBPCR_b_EnblCntctrCtrlPerfDTC;/* '<S269>/NOT4' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static VAR(boolean, BPCR_VAR_INIT) VeBPCR_b_EnblPWMTimer;/* '<S187>/Logical2' */

#endif

static VAR(boolean, BPCR_VAR_INIT) VeBPCR_b_HV_BatCntctrOpenReq_Test;/* '<S242>/Merge2' */
static VAR(boolean, BPCR_VAR_INIT) VeBPCR_b_HV_BatRdy_Tmot;/* '<S338>/Switch' */

#if Rte_SysCon_Variant_BPCR_3

static VAR(boolean, BPCR_VAR_INIT) VeBPCR_b_PWMBlankAct;/* '<S187>/Logical3' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static VAR(boolean, BPCR_VAR_INIT) VeBPCR_b_PWMCntctrFailCondDbnc;/* '<S284>/AND' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static VAR(boolean, BPCR_VAR_INIT) VeBPCR_b_PWMTimerOOR_Out;/* '<S183>/Merge1' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static VAR(boolean, BPCR_VAR_INIT) VeBPCR_b_PWM_CntctrCntrl_Fail;/* '<S285>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static VAR(TeBPCR_e_PWMDecoded_CntctrSts, BPCR_VAR_INIT)
    VeBPCR_e_BSWPWMCntctrSts;          /* '<S184>/Merge' */

#endif

#if Rte_SysCon_Variant_BPCR_3

static VAR(TeBPCR_e_PWMDecoded_CntctrSts, BPCR_VAR_INIT)
    VeBPCR_e_PWMDecodedCntctrStsO;     /* '<S183>/Merge' */

#endif

static VAR(sint8, BPCR_VAR_INIT) VeBPCR_k_BatCntctr_DebugSgnl;/* '<S242>/Merge3' */

#if Rte_SysCon_Variant_BPCR_3

static VAR(float32, BPCR_VAR_INIT) VeBPCR_t_PWM_Timer;/* '<S237>/Switch' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BPCR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_BPCR
#include "MemMap.h"

CONST(ConstB_BPCR_ac_T, BPCR_VAR_INIT) BPCR_ac_ConstB =
{
    0U,                                /* '<S546>/Constant Value' */
    0.0F,                              /* '<S549>/Const1' */
    0.0F,                              /* '<S549>/Const2' */
    0.0F,                              /* '<S549>/Const3' */
    0.0F,                              /* '<S549>/Const27' */
    0.0F,                              /* '<S549>/Const28' */
    0.0F,                              /* '<S549>/Const30' */
    0.0F,                              /* '<S549>/Const32' */
    0.0F,                              /* '<S549>/Const34' */
    0.0F,                              /* '<S549>/Const36' */
    0.0F,                              /* '<S549>/Const38' */
    0.0F,                              /* '<S549>/Const40' */
    0.0F,                              /* '<S549>/Const41' */
    0.0F,                              /* '<S549>/Const42' */
    0.0F,                              /* '<S549>/Const48' */
    0.0F,                              /* '<S549>/Const51' */
    0.0F,                              /* '<S549>/Const53' */
    0.0F,                              /* '<S549>/Const54' */
    0.0F,                              /* '<S549>/Const55' */
    0.0F,                              /* '<S549>/Const56' */
    0.0F,                              /* '<S546>/Constant Value7' */
    0.0F,                              /* '<S546>/Constant Value4' */
    0.0F,                              /* '<S547>/Constant Value7' */
    1U,                                /* '<S546>/Constant Value2' */
    0U,                                /* '<S546>/Constant Value3' */
    0,                                 /* '<S549>/Const5' */
    0,                                 /* '<S549>/Const6' */
    0,                                 /* '<S549>/Const7' */
    0,                                 /* '<S549>/Const8' */
    0,                                 /* '<S549>/Const9' */
    0,                                 /* '<S549>/Const10' */
    0,                                 /* '<S549>/Const11' */
    0,                                 /* '<S549>/Const12' */
    0,                                 /* '<S549>/Const13' */
    0,                                 /* '<S549>/Const14' */
    0,                                 /* '<S549>/Const15' */
    0,                                 /* '<S549>/Const16' */
    0,                                 /* '<S549>/Const17' */
    0,                                 /* '<S549>/Const18' */
    0,                                 /* '<S549>/Const19' */
    0,                                 /* '<S549>/Const20' */
    0,                                 /* '<S549>/Const21' */
    0,                                 /* '<S549>/Const22' */
    0,                                 /* '<S549>/Const23' */
    0,                                 /* '<S549>/Const24' */
    0,                                 /* '<S549>/Const25' */
    0,                                 /* '<S549>/Const26' */
    0,                                 /* '<S549>/Const29' */
    0,                                 /* '<S549>/Const31' */
    0,                                 /* '<S549>/Const33' */
    0,                                 /* '<S549>/Const35' */
    0,                                 /* '<S549>/Const37' */
    0,                                 /* '<S549>/Const39' */
    0,                                 /* '<S549>/Const43' */
    0,                                 /* '<S549>/Const44' */
    0,                                 /* '<S549>/Const45' */
    0,                                 /* '<S549>/Const46' */
    0,                                 /* '<S549>/Const47' */
    0,                                 /* '<S549>/Const49' */
    0,                                 /* '<S549>/Const50' */
    0,                                 /* '<S549>/Const52' */
    0,                                 /* '<S549>/Const' */
    0,                                 /* '<S543>/Constant Value' */
    0,                                 /* '<S543>/Constant Value1' */
    0,                                 /* '<S543>/Constant Value2' */
    0,                                 /* '<S543>/Constant Value3' */
    0,                                 /* '<S543>/Constant Value4' */
    0,                                 /* '<S543>/Constant Value5' */
    0,                                 /* '<S544>/FALSE Constant' */
    0,                                 /* '<S544>/FALSE Constant1' */
    0,                                 /* '<S544>/FALSE Constant2' */
    0,                                 /* '<S544>/FALSE Constant3' */
    0,                                 /* '<S544>/FALSE Constant4' */
    0,                                 /* '<S544>/FALSE Constant5' */
    0,                                 /* '<S544>/FALSE Constant6' */
    0,                                 /* '<S542>/FALSE Constant2' */
    0,                                 /* '<S546>/FALSE Constant1' */
    0,                                 /* '<S546>/FALSE Constant' */
    0,                                 /* '<S546>/FALSE Constant2' */
    0,                                 /* '<S546>/FALSE Constant3' */
    0,                                 /* '<S546>/FALSE Constant4' */
    0,                                 /* '<S546>/FALSE Constant5' */
    0,                                 /* '<S546>/FALSE Constant6' */
    0,                                 /* '<S546>/FALSE Constant7' */
    0,                                 /* '<S546>/FALSE Constant14' */
    0,                                 /* '<S547>/FALSE Constant2' */
    0,                                 /* '<S547>/FALSE Constant1' */
    0,                                 /* '<S547>/FALSE Constant3' */
    0,                                 /* '<S547>/FALSE Constant4' */
    0,                                 /* '<S547>/FALSE Constant8' */
    0,                                 /* '<S547>/FALSE Constant5' */
    0,                                 /* '<S547>/FALSE Constant6' */
    0,                                 /* '<S547>/FALSE Constant9' */
    0,                                 /* '<S547>/FALSE Constant23' */
    0,                                 /* '<S547>/FALSE Constant24' */
    0,                                 /* '<S547>/FALSE Constant11' */
    0,                                 /* '<S547>/FALSE Constant12' */
    0,                                 /* '<S547>/FALSE Constant13' */
    0,                                 /* '<S547>/FALSE Constant16' */
    0,                                 /* '<S547>/FALSE Constant17' */
    0,                                 /* '<S547>/FALSE Constant19' */
    0,                                 /* '<S547>/FALSE Constant20' */
    0,                                 /* '<S547>/FALSE Constant21' */
    0,                                 /* '<S547>/FALSE Constant22' */
    0,                                 /* '<S547>/FALSE Constant' */
    0,                                 /* '<S547>/FALSE Constant7' */
    0,                                 /* '<S547>/FALSE Constant10' */
    0,                                 /* '<S547>/FALSE Constant15' */
    0,                                 /* '<S547>/FALSE Constant14' */
    0,                                 /* '<S547>/FALSE Constant18' */
    CeSRAR_e_CommFail_NoFault,         /* '<S575>/Constant' */
    CeOBCR_e_BattNotReady,             /* '<S574>/Constant' */
    CeHVTR_e_Open,                     /* '<S549>/Const4' */
    CeDFIB_e_Init,                     /* '<S642>/Constant' */
    CeBPCR_e_DefaultThrmlRnawy,        /* '<S573>/Constant' */
    CeBPCR_e_DCIsolSts_NotPerformed,   /* '<S562>/Constant' */
    CeBPCR_e_DCCntctrSts_Open          /* '<S561>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_BPCR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BPCR
#include "MemMap.h"

VAR(B_BPCR_ac_T, BPCR_VAR_INIT) BPCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BPCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BPCR
#include "MemMap.h"

VAR(DW_BPCR_ac_T, BPCR_VAR_INIT) BPCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BPCR
#include "MemMap.h"

static FUNC(void, BPCR_CODE_LOCAL) BPCR_ac_FsftBPCR_b_HV_BatCurrString2Chrt
    (P2VAR(B_FsftBPCR_b_HV_BatCurrString2Chrt_BPC_T, AUTOMATIC, BPCR_VAR_INIT)
     localB);

/* Forward declaration for local functions */
static uint8 BP_safe_cast_to_TeBPCR_e_HV_IsolStat_raw(uint8 input);

/*
 * Output and update for atomic system:
 *    '<S35>/FsftBPCR_b_HV_BatCurrString2Chrt'
 *    '<S46>/FsftBPCR_b_HV_InternalVoltChrt'
 */
static FUNC(void, BPCR_CODE_LOCAL) BPCR_ac_FsftBPCR_b_HV_BatCurrString2Chrt
    (P2VAR(B_FsftBPCR_b_HV_BatCurrString2Chrt_BPC_T, AUTOMATIC, BPCR_VAR_INIT)
     localB)
{
    /* Chart: '<S35>/FsftBPCR_b_HV_BatCurrString2Chrt' */
    /* Gateway: FsftBPCR_b_HV_BatCurrString2/FsftBPCR_b_HV_BatCurrString2Chrt */
    /* During: FsftBPCR_b_HV_BatCurrString2/FsftBPCR_b_HV_BatCurrString2Chrt */
    /* Entry Internal: FsftBPCR_b_HV_BatCurrString2/FsftBPCR_b_HV_BatCurrString2Chrt */
    /* Transition: '<S672>:2' */
    localB->LeBPCR_b_HV_Current_String2_FA_out = true;
}

static uint8 BP_safe_cast_to_TeBPCR_e_HV_IsolStat_raw(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TeBPCR_e_HV_IsolStat_raw (CeBPCR_e_GFD_NotPerformed) */
    y = 0U;
    if (((sint32)input) <= 4)
    {
        /* Set output value to input value if it is a member of TeBPCR_e_HV_IsolStat_raw */
        y = input;
    }

    return y;
}

/* Model step function for TID1 */
FUNC(void, BPCR_CODE) BPCR_FastTEF(void) /* Explicit Task: FastTEF */
{

#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_BPCR_3

    float32 rtb_TmpSignalConversionAtVeBPCR_DC_Cnt_o;

#endif

#if Rte_SysCon_Variant_BPCR_3

    uint32 rtb_TmpSignalConversionAtVeBPCR_t_BSW_PW;

#endif

    uint8 rtb_TmpSignalConversionAtVeBPCR_Cnt_BSW_;

#if Rte_SysCon_Variant_BPCR_3

    boolean rtb_LeBPCR_b_EnblPWMTimer_Raw;

#endif

#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

    boolean rtb_AND_km;

#endif

#if Rte_SysCon_Variant_BPCR_3

    boolean rtb_UnitDelay_mq;

#endif

#if Rte_SysCon_Variant_BPCR_3

    boolean rtb_Logical1_o5;

#endif

#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

    boolean rtb_GreaterThan1_ox;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/BPCR_FastTEF'
     */
    /* SignalConversion generated from: '<S1>/VeBPCR_DC_CntctrCntrl_PWM_read' incorporates:
     *  SignalConversion generated from: '<S1>/VeBPCR_t_BSW_PWMCntctrTmr_read'
     */
#if Rte_SysCon_Variant_BPCR_3

    /* SignalConversion generated from: '<S1>/VeBPCR_DC_CntctrCntrl_PWM_read' incorporates:
     *  Merge: '<Root>/Merge_69'
     */
    rtb_TmpSignalConversionAtVeBPCR_DC_Cnt_o =
        Rte_IrvRead_BPCR_FastTEF_CntctrCntrl_PWM_write_IRV();

    /* SignalConversion generated from: '<S1>/VeBPCR_t_BSW_PWMCntctrTmr_read' incorporates:
     *  Merge: '<Root>/Merge_81'
     */
    rtb_TmpSignalConversionAtVeBPCR_t_BSW_PW =
        Rte_IrvRead_BPCR_FastTEF_BSW_PWMCntctrTmr_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S1>/VeBPCR_DC_CntctrCntrl_PWM_read' */

    /* SignalConversion generated from: '<S1>/VeBPCR_Cnt_BSW_PWMTmrRcvd_read' incorporates:
     *  Merge: '<Root>/Merge_66'
     */
    rtb_TmpSignalConversionAtVeBPCR_Cnt_BSW_ =
        Rte_IrvRead_BPCR_FastTEF_BSW_PWMTmrRcvd_write_IRV();

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BPCC_DecodePWM'
     */
    /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeHPMR_DC_BattPackCntctrCmd'
     *  Logic: '<S187>/Logical5'
     */
#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

    /* Outputs for Atomic SubSystem: '<S187>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S180>/BPCC_PWMBlanking' */
    (void)Rte_Read_VeHPMR_DC_BattPackCntctrCmd_Value(&tmpRead);

    /* Switch: '<S182>/Switch' incorporates:
     *  Inport: '<Root>/VeHPMR_DC_BattPackCntctrCmd'
     *  UnitDelay: '<S182>/Unit Delay2'
     */
    if (BPCR_ac_DW.UnitDelay2_DSTATE_b)
    {
        /* UnitDelay: '<S232>/Unit Delay' incorporates:
         *  Constant: '<S182>/FALSE Constant'
         */
        rtb_UnitDelay_mq = false;
    }
    else
    {
        /* UnitDelay: '<S232>/Unit Delay' incorporates:
         *  Constant: '<S182>/TRUE Constant2'
         */
        rtb_UnitDelay_mq = true;
    }

    /* End of Switch: '<S182>/Switch' */

    /* Logic: '<S182>/Logical1' incorporates:
     *  Constant: '<S193>/Calib'
     *  RelationalOperator: '<S182>/Comparison2'
     *  RelationalOperator: '<S182>/Comparison3'
     *  UnitDelay: '<S182>/Unit Delay'
     */
    rtb_Logical1_o5 = (((tmpRead >= KeBPCR_DC_PWMCmdThrshForBlnkng) &&
                        (BPCR_ac_DW.UnitDelay_DSTATE_m0 <
                         KeBPCR_DC_PWMCmdThrshForBlnkng)) && rtb_UnitDelay_mq);

    /* Outputs for Atomic SubSystem: '<S182>/Count Down  Reset Enabled' */
    /* Switch: '<S188>/Switch1' incorporates:
     *  Constant: '<S182>/TRUE Constant3'
     *  Constant: '<S188>/Constant Value'
     *  Constant: '<S191>/Calib'
     *  Logic: '<S188>/AND'
     *  RelationalOperator: '<S188>/Greater  Than'
     *  Switch: '<S188>/Switch2'
     *  UnitDelay: '<S188>/Unit Delay'
     */
    if (rtb_Logical1_o5)
    {
        BPCR_ac_DW.UnitDelay_DSTATE_fds = KeBPCR_Cnt_PWMBlnkngDeactTime;
    }
    else
    {
        if ((true) && (BPCR_ac_DW.UnitDelay_DSTATE_fds > ((uint16)0U)))
        {
            /* UnitDelay: '<S188>/Unit Delay' incorporates:
             *  Constant: '<S188>/Constant Value1'
             *  Sum: '<S188>/Subtraction'
             *  Switch: '<S188>/Switch2'
             */
            BPCR_ac_DW.UnitDelay_DSTATE_fds -= ((uint16)1U);
        }
    }

    /* End of Switch: '<S188>/Switch1' */

    /* RelationalOperator: '<S188>/Greater  Than1' incorporates:
     *  Constant: '<S188>/Constant Value2'
     *  UnitDelay: '<S188>/Unit Delay'
     */
    rtb_GreaterThan1_ox = (BPCR_ac_DW.UnitDelay_DSTATE_fds > ((uint16)0U));

    /* End of Outputs for SubSystem: '<S182>/Count Down  Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S182>/Count Down  Reset Enabled1' */
    /* Switch: '<S189>/Switch1' incorporates:
     *  Constant: '<S182>/TRUE Constant'
     *  Constant: '<S189>/Constant Value'
     *  Constant: '<S192>/Calib'
     *  Logic: '<S189>/AND'
     *  RelationalOperator: '<S189>/Greater  Than'
     *  Switch: '<S189>/Switch2'
     *  UnitDelay: '<S189>/Unit Delay'
     */
    if (rtb_Logical1_o5)
    {
        BPCR_ac_DW.UnitDelay_DSTATE_ol = KeBPCR_Cnt_PWMBlnkngPeriod;
    }
    else
    {
        if ((true) && (BPCR_ac_DW.UnitDelay_DSTATE_ol > ((uint16)0U)))
        {
            /* UnitDelay: '<S189>/Unit Delay' incorporates:
             *  Constant: '<S189>/Constant Value1'
             *  Sum: '<S189>/Subtraction'
             *  Switch: '<S189>/Switch2'
             */
            BPCR_ac_DW.UnitDelay_DSTATE_ol -= ((uint16)1U);
        }
    }

    /* End of Switch: '<S189>/Switch1' */

    /* RelationalOperator: '<S189>/Greater  Than1' incorporates:
     *  Constant: '<S189>/Constant Value2'
     *  UnitDelay: '<S189>/Unit Delay'
     */
    VeBPCC_b_PWMBlankActRaw = (BPCR_ac_DW.UnitDelay_DSTATE_ol > ((uint16)0U));

    /* End of Outputs for SubSystem: '<S182>/Count Down  Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S182>/EdgeFalling' */
    /* Logic: '<S190>/AND' incorporates:
     *  Logic: '<S190>/OR1'
     *  UnitDelay: '<S190>/Unit Delay'
     */
    VeBPCC_b_PWMBlankDeactRaw = ((!rtb_GreaterThan1_ox) &&
        (BPCR_ac_DW.UnitDelay_DSTATE_ie));

    /* Update for UnitDelay: '<S190>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_ie = rtb_GreaterThan1_ox;

    /* End of Outputs for SubSystem: '<S182>/EdgeFalling' */

    /* Logic: '<S182>/Logical3' incorporates:
     *  Logic: '<S182>/Logical2'
     *  UnitDelay: '<S182>/Unit Delay2'
     */
    BPCR_ac_DW.UnitDelay2_DSTATE_b = ((!rtb_UnitDelay_mq) || rtb_Logical1_o5);

    /* Update for UnitDelay: '<S182>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_m0 = tmpRead;

    /* Logic: '<S187>/Logical5' */
    rtb_UnitDelay_mq = !VeBPCC_b_PWMBlankActRaw;

    /* VariantMerge generated from: '<S187>/XeBPCR_b_PWMBlank' incorporates:
     *  UnitDelay: '<S234>/Unit Delay'
     */
    rtb_Logical1_o5 = BPCR_ac_DW.UnitDelay_DSTATE_fq;

    /* Logic: '<S234>/AND' incorporates:
     *  Constant: '<S187>/TRUE Constant'
     *  Logic: '<S234>/OR1'
     *  UnitDelay: '<S234>/Unit Delay'
     */
    rtb_GreaterThan1_ox = ((true) && (!BPCR_ac_DW.UnitDelay_DSTATE_fq));

    /* Update for UnitDelay: '<S234>/Unit Delay' incorporates:
     *  Constant: '<S187>/TRUE Constant'
     */
    BPCR_ac_DW.UnitDelay_DSTATE_fq = true;

    /* End of Outputs for SubSystem: '<S187>/EdgeRising' */
#endif

    /* End of DataTypeConversion: '<S1>/Data Type Conversion' */
    /* End of Outputs for SubSystem: '<S180>/BPCC_PWMBlanking' */

    /* RelationalOperator: '<S187>/Comparison2' */
#if Rte_SysCon_Variant_BPCR_3

    /* RelationalOperator: '<S187>/Comparison2' incorporates:
     *  Constant: '<S235>/Calib'
     */
    rtb_LeBPCR_b_EnblPWMTimer_Raw = (rtb_TmpSignalConversionAtVeBPCR_DC_Cnt_o <
        KeBPCR_DC_PWMDecoded_DutyCycle);

#endif

    /* End of RelationalOperator: '<S187>/Comparison2' */

    /* Logic: '<S187>/Logical8' incorporates:
     *  Constant: '<S187>/TRUE Constant1'
     *  Constant: '<S187>/TRUE Constant2'
     *  Logic: '<S187>/Logical'
     *  SignalConversion generated from: '<S187>/XeBPCR_b_PWMBlank'
     *  Switch: '<S238>/Switch1'
     *  Switch: '<S238>/Switch2'
     *  UnitDelay: '<S238>/Unit Delay'
     *  UnitDelay: '<S238>/Unit Delay1'
     */
#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

    /* Outputs for Atomic SubSystem: '<S187>/EdgeFalling2' */
    /* Logic: '<S233>/AND' incorporates:
     *  Logic: '<S233>/OR1'
     *  UnitDelay: '<S233>/Unit Delay'
     */
    rtb_AND_km = ((!rtb_LeBPCR_b_EnblPWMTimer_Raw) &&
                  (BPCR_ac_DW.UnitDelay_DSTATE_oh));

    /* Update for UnitDelay: '<S233>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_oh = rtb_LeBPCR_b_EnblPWMTimer_Raw;

    /* Logic: '<S187>/Logical8' */
    rtb_AND_km = (((VeBPCC_b_PWMBlankDeactRaw) || rtb_GreaterThan1_ox) ||
                  rtb_AND_km);
    if (rtb_AND_km)
    {
        BPCR_ac_DW.UnitDelay1_DSTATE_d = true;
    }
    else
    {
        if (true)
        {
            /* Switch: '<S238>/Switch2' */
            BPCR_ac_DW.UnitDelay1_DSTATE_d = BPCR_ac_DW.UnitDelay_DSTATE_gr;
        }
    }

    /* VariantMerge generated from: '<S187>/XeBPCR_b_PWMBlank' incorporates:
     *  Constant: '<S187>/TRUE Constant1'
     *  Constant: '<S187>/TRUE Constant2'
     *  Switch: '<S238>/Switch2'
     */
    rtb_Logical1_o5 = (rtb_UnitDelay_mq && (BPCR_ac_DW.UnitDelay1_DSTATE_d));

    /* End of Outputs for SubSystem: '<S187>/EdgeFalling2' */
#elif !Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

    /* VariantMerge generated from: '<S187>/XeBPCR_b_PWMBlank' incorporates:
     *  Constant: '<S187>/TRUE Constant4'
     *  SignalConversion generated from: '<S187>/XeBPCR_b_PWMBlank'
     */
    rtb_Logical1_o5 = true;

#endif

    /* End of Logic: '<S187>/Logical8' */

    /* If: '<S180>/If' incorporates:
     *  Constant: '<S186>/Calib'
     *  DataTypeConversion: '<S185>/DataTypeConversion'
     *  Logic: '<S180>/Logical4'
     *  Logic: '<S187>/Logical1'
     *  Logic: '<S187>/Logical2'
     *  Logic: '<S187>/Logical3'
     *  Merge: '<S183>/Merge'
     *  Merge: '<S184>/Merge'
     *  Switch: '<S180>/Switch'
     *  Switch: '<S180>/Switch1'
     *  UnitDelay: '<S180>/Unit Delay1'
     *  UnitDelay: '<S187>/Unit Delay2'
     */
#if Rte_SysCon_Variant_BPCR_3

    /* Outputs for Atomic SubSystem: '<S180>/DecodeTmr1' */
    /* Outputs for Atomic SubSystem: '<S187>/Stop Watch Reset Enabled' */
    /* Outputs for Atomic SubSystem: '<S187>/EdgeFalling' */
    /* Logic: '<S187>/Logical2' */
    VeBPCR_b_EnblPWMTimer = (rtb_Logical1_o5 && rtb_LeBPCR_b_EnblPWMTimer_Raw);

    /* Logic: '<S232>/AND' incorporates:
     *  Logic: '<S232>/OR1'
     *  UnitDelay: '<S232>/Unit Delay'
     */
    rtb_UnitDelay_mq = ((!VeBPCR_b_EnblPWMTimer) &&
                        (BPCR_ac_DW.UnitDelay_DSTATE_b4));

    /* Update for UnitDelay: '<S232>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_b4 = VeBPCR_b_EnblPWMTimer;

    /* Switch: '<S237>/Switch' incorporates:
     *  Switch: '<S237>/Switch2'
     */
    if (!BPCR_ac_DW.UnitDelay2_DSTATE_e)
    {
        /* Switch: '<S237>/Switch' incorporates:
         *  Constant: '<S237>/Constant Value2'
         */
        VeBPCR_t_PWM_Timer = 0.0F;
    }
    else
    {
        if (VeBPCR_b_EnblPWMTimer)
        {
            /* Switch: '<S237>/Switch' incorporates:
             *  Constant: '<S236>/Calib'
             *  Sum: '<S237>/Subtraction'
             *  Switch: '<S237>/Switch2'
             *  UnitDelay: '<S237>/Unit Delay'
             */
            VeBPCR_t_PWM_Timer = KeBPCR_t_DecodePWM_Tmr + VeBPCR_t_PWM_Timer;
        }
    }

    /* End of Switch: '<S237>/Switch' */
    if (rtb_UnitDelay_mq && rtb_Logical1_o5)
    {
        /* Outputs for IfAction SubSystem: '<S180>/DecodeTmr' incorporates:
         *  ActionPort: '<S183>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S183>/ClosedInterval' */
        /* If: '<S183>/If' incorporates:
         *  Constant: '<S200>/Calib'
         *  Constant: '<S201>/Calib'
         *  Constant: '<S202>/Calib'
         *  Constant: '<S203>/Calib'
         *  Constant: '<S204>/Calib'
         *  Constant: '<S205>/Calib'
         *  Constant: '<S206>/Calib'
         *  Constant: '<S207>/Calib'
         *  Logic: '<S194>/Logical Operator'
         *  Logic: '<S195>/Logical Operator'
         *  Logic: '<S196>/Logical Operator'
         *  Logic: '<S197>/Logical Operator'
         *  RelationalOperator: '<S194>/Relatonal Operator'
         *  RelationalOperator: '<S194>/Relatonal Operator1'
         *  RelationalOperator: '<S195>/Relatonal Operator'
         *  RelationalOperator: '<S195>/Relatonal Operator1'
         *  RelationalOperator: '<S196>/Relatonal Operator'
         *  RelationalOperator: '<S196>/Relatonal Operator1'
         *  RelationalOperator: '<S197>/Relatonal Operator'
         *  RelationalOperator: '<S197>/Relatonal Operator1'
         */
        if ((VeBPCR_t_PWM_Timer >= KeBPCR_t_PWM_TLow1Min) && (VeBPCR_t_PWM_Timer
             <= KeBPCR_t_PWM_TLow1Max))
        {
            /* Outputs for IfAction SubSystem: '<S183>/OpnReq' incorporates:
             *  ActionPort: '<S210>/Action Port'
             */
            /* Merge: '<S183>/Merge' incorporates:
             *  Constant: '<S214>/Calib'
             *  SignalConversion generated from: '<S210>/CntctrSts1'
             */
            VeBPCR_e_PWMDecodedCntctrStsO = KeBPCR_e_PWMDecodedCntctrSts1;

            /* Merge: '<S183>/Merge1' incorporates:
             *  Constant: '<S210>/FALSE Constant'
             *  SignalConversion generated from: '<S210>/Timer_OOR'
             */
            VeBPCR_b_PWMTimerOOR_Out = false;

            /* End of Outputs for SubSystem: '<S183>/OpnReq' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S183>/ClosedInterval1' */
            if ((VeBPCR_t_PWM_Timer >= KeBPCR_t_PWM_TLow2Min) &&
                    (VeBPCR_t_PWM_Timer <= KeBPCR_t_PWM_TLow2Max))
            {
                /* Outputs for IfAction SubSystem: '<S183>/OpenStatus' incorporates:
                 *  ActionPort: '<S209>/Action Port'
                 */
                /* Merge: '<S183>/Merge' incorporates:
                 *  Constant: '<S213>/Calib'
                 *  SignalConversion generated from: '<S209>/CntctrSts2'
                 */
                VeBPCR_e_PWMDecodedCntctrStsO = KeBPCR_e_PWMDecodedCntctrSts2;

                /* Merge: '<S183>/Merge1' incorporates:
                 *  Constant: '<S209>/FALSE Constant'
                 *  SignalConversion generated from: '<S209>/Timer_OOR'
                 */
                VeBPCR_b_PWMTimerOOR_Out = false;

                /* End of Outputs for SubSystem: '<S183>/OpenStatus' */
            }
            else
            {
                /* Outputs for Atomic SubSystem: '<S183>/ClosedInterval2' */
                if ((VeBPCR_t_PWM_Timer >= KeBPCR_t_PWM_TLow3Min) &&
                        (VeBPCR_t_PWM_Timer <= KeBPCR_t_PWM_TLow3Max))
                {
                    /* Outputs for IfAction SubSystem: '<S183>/ClosedStatus' incorporates:
                     *  ActionPort: '<S198>/Action Port'
                     */
                    /* Merge: '<S183>/Merge' incorporates:
                     *  Constant: '<S211>/Calib'
                     *  SignalConversion generated from: '<S198>/CntctrSts3'
                     */
                    VeBPCR_e_PWMDecodedCntctrStsO =
                        KeBPCR_e_PWMDecodedCntctrSts3;

                    /* Merge: '<S183>/Merge1' incorporates:
                     *  Constant: '<S198>/FALSE Constant'
                     *  SignalConversion generated from: '<S198>/Timer_OOR'
                     */
                    VeBPCR_b_PWMTimerOOR_Out = false;

                    /* End of Outputs for SubSystem: '<S183>/ClosedStatus' */
                }
                else
                {
                    /* Outputs for Atomic SubSystem: '<S183>/ClosedInterval3' */
                    if ((VeBPCR_t_PWM_Timer >= KeBPCR_t_PWM_TLow4Min) &&
                            (VeBPCR_t_PWM_Timer <= KeBPCR_t_PWM_TLow4Max))
                    {
                        /* Outputs for IfAction SubSystem: '<S183>/Ok2Close' incorporates:
                         *  ActionPort: '<S208>/Action Port'
                         */
                        /* Merge: '<S183>/Merge' incorporates:
                         *  Constant: '<S212>/Calib'
                         *  SignalConversion generated from: '<S208>/CntctrSts4'
                         */
                        VeBPCR_e_PWMDecodedCntctrStsO =
                            KeBPCR_e_PWMDecodedCntctrSts4;

                        /* Merge: '<S183>/Merge1' incorporates:
                         *  Constant: '<S208>/FALSE Constant'
                         *  SignalConversion generated from: '<S208>/Timer_OOR'
                         */
                        VeBPCR_b_PWMTimerOOR_Out = false;

                        /* End of Outputs for SubSystem: '<S183>/Ok2Close' */
                    }
                    else
                    {
                        /* Outputs for IfAction SubSystem: '<S183>/Default' incorporates:
                         *  ActionPort: '<S199>/Action Port'
                         */
                        /* Merge: '<S183>/Merge' incorporates:
                         *  Inport: '<S199>/PWMDecodedCntctrSts'
                         *  UnitDelay: '<S180>/Unit Delay1'
                         */
                        VeBPCR_e_PWMDecodedCntctrStsO =
                            BPCR_ac_DW.UnitDelay1_DSTATE_i;

                        /* Merge: '<S183>/Merge1' incorporates:
                         *  Constant: '<S199>/TRUE Constant'
                         *  SignalConversion generated from: '<S199>/Timer_OOR'
                         */
                        VeBPCR_b_PWMTimerOOR_Out = true;

                        /* End of Outputs for SubSystem: '<S183>/Default' */
                    }

                    /* End of Outputs for SubSystem: '<S183>/ClosedInterval3' */
                }

                /* End of Outputs for SubSystem: '<S183>/ClosedInterval2' */
            }

            /* End of Outputs for SubSystem: '<S183>/ClosedInterval1' */
        }

        /* End of If: '<S183>/If' */
        /* End of Outputs for SubSystem: '<S183>/ClosedInterval' */
        /* End of Outputs for SubSystem: '<S180>/DecodeTmr' */
    }

    /* If: '<S184>/If' incorporates:
     *  Constant: '<S217>/Calib'
     *  Constant: '<S218>/Calib'
     *  Constant: '<S219>/Calib'
     *  Constant: '<S220>/Calib'
     *  Constant: '<S221>/Calib'
     *  Constant: '<S222>/Calib'
     *  Constant: '<S223>/Calib'
     *  Constant: '<S224>/Calib'
     *  Logic: '<S184>/Logical Operator'
     *  Logic: '<S184>/Logical Operator1'
     *  Logic: '<S184>/Logical Operator2'
     *  Logic: '<S184>/Logical Operator3'
     *  RelationalOperator: '<S184>/Relatonal Operator'
     *  RelationalOperator: '<S184>/Relatonal Operator1'
     *  RelationalOperator: '<S184>/Relatonal Operator2'
     *  RelationalOperator: '<S184>/Relatonal Operator3'
     *  RelationalOperator: '<S184>/Relatonal Operator4'
     *  RelationalOperator: '<S184>/Relatonal Operator5'
     *  RelationalOperator: '<S184>/Relatonal Operator6'
     *  RelationalOperator: '<S184>/Relatonal Operator7'
     */
    if ((rtb_TmpSignalConversionAtVeBPCR_t_BSW_PW >= KeBPCR_Cnt_PWM_TLow1Min) &&
        (rtb_TmpSignalConversionAtVeBPCR_t_BSW_PW <= KeBPCR_Cnt_PWM_TLow1Max))
    {
        /* Outputs for IfAction SubSystem: '<S184>/OpnReq' incorporates:
         *  ActionPort: '<S227>/Action Port'
         */
        /* Merge: '<S184>/Merge' incorporates:
         *  Constant: '<S231>/Calib'
         *  SignalConversion generated from: '<S227>/CntctrSts1'
         */
        VeBPCR_e_BSWPWMCntctrSts = KeBPCR_e_PWMDecodedCntctrSts1;

        /* Merge: '<S184>/Merge1' incorporates:
         *  Constant: '<S227>/FALSE Constant'
         *  SignalConversion generated from: '<S227>/Timer_OOR'
         */
        VeBPCR_b_BSWPWMTimerOOR = false;

        /* Merge: '<S184>/Merge2' incorporates:
         *  Constant: '<S227>/Constant Value1'
         *  SignalConversion generated from: '<S227>/Dbg'
         */
        VeBPCR_Cnt_PWMBSW_Dbg = ((uint8)1U);

        /* End of Outputs for SubSystem: '<S184>/OpnReq' */
    }
    else if ((rtb_TmpSignalConversionAtVeBPCR_t_BSW_PW >=
              KeBPCR_Cnt_PWM_TLow2Min) &&
             (rtb_TmpSignalConversionAtVeBPCR_t_BSW_PW <=
              KeBPCR_Cnt_PWM_TLow2Max))
    {
        /* Outputs for IfAction SubSystem: '<S184>/OpenStatus' incorporates:
         *  ActionPort: '<S226>/Action Port'
         */
        /* Merge: '<S184>/Merge' incorporates:
         *  Constant: '<S230>/Calib'
         *  SignalConversion generated from: '<S226>/CntctrSts2'
         */
        VeBPCR_e_BSWPWMCntctrSts = KeBPCR_e_PWMDecodedCntctrSts2;

        /* Merge: '<S184>/Merge1' incorporates:
         *  Constant: '<S226>/FALSE Constant'
         *  SignalConversion generated from: '<S226>/Timer_OOR'
         */
        VeBPCR_b_BSWPWMTimerOOR = false;

        /* Merge: '<S184>/Merge2' incorporates:
         *  Constant: '<S226>/Constant Value1'
         *  SignalConversion generated from: '<S226>/Dbg'
         */
        VeBPCR_Cnt_PWMBSW_Dbg = ((uint8)2U);

        /* End of Outputs for SubSystem: '<S184>/OpenStatus' */
    }
    else if ((rtb_TmpSignalConversionAtVeBPCR_t_BSW_PW >=
              KeBPCR_Cnt_PWM_TLow3Min) &&
             (rtb_TmpSignalConversionAtVeBPCR_t_BSW_PW <=
              KeBPCR_Cnt_PWM_TLow3Max))
    {
        /* Outputs for IfAction SubSystem: '<S184>/ClosedStatus' incorporates:
         *  ActionPort: '<S215>/Action Port'
         */
        /* Merge: '<S184>/Merge' incorporates:
         *  Constant: '<S228>/Calib'
         *  SignalConversion generated from: '<S215>/CntctrSts3'
         */
        VeBPCR_e_BSWPWMCntctrSts = KeBPCR_e_PWMDecodedCntctrSts3;

        /* Merge: '<S184>/Merge1' incorporates:
         *  Constant: '<S215>/FALSE Constant'
         *  SignalConversion generated from: '<S215>/Timer_OOR'
         */
        VeBPCR_b_BSWPWMTimerOOR = false;

        /* Merge: '<S184>/Merge2' incorporates:
         *  Constant: '<S215>/Constant Value1'
         *  SignalConversion generated from: '<S215>/Dbg'
         */
        VeBPCR_Cnt_PWMBSW_Dbg = ((uint8)3U);

        /* End of Outputs for SubSystem: '<S184>/ClosedStatus' */
    }
    else if ((rtb_TmpSignalConversionAtVeBPCR_t_BSW_PW >=
              KeBPCR_Cnt_PWM_TLow4Min) &&
             (rtb_TmpSignalConversionAtVeBPCR_t_BSW_PW <=
              KeBPCR_Cnt_PWM_TLow4Max))
    {
        /* Outputs for IfAction SubSystem: '<S184>/Ok2Close' incorporates:
         *  ActionPort: '<S225>/Action Port'
         */
        /* Merge: '<S184>/Merge' incorporates:
         *  Constant: '<S229>/Calib'
         *  SignalConversion generated from: '<S225>/CntctrSts4'
         */
        VeBPCR_e_BSWPWMCntctrSts = KeBPCR_e_PWMDecodedCntctrSts4;

        /* Merge: '<S184>/Merge1' incorporates:
         *  Constant: '<S225>/FALSE Constant'
         *  SignalConversion generated from: '<S225>/Timer_OOR'
         */
        VeBPCR_b_BSWPWMTimerOOR = false;

        /* Merge: '<S184>/Merge2' incorporates:
         *  Constant: '<S225>/Constant Value1'
         *  SignalConversion generated from: '<S225>/Dbg'
         */
        VeBPCR_Cnt_PWMBSW_Dbg = ((uint8)4U);

        /* End of Outputs for SubSystem: '<S184>/Ok2Close' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S184>/Default' incorporates:
         *  ActionPort: '<S216>/Action Port'
         */
        /* Merge: '<S184>/Merge' incorporates:
         *  Inport: '<S216>/PWMDecodedCntctrSts'
         *  UnitDelay: '<S180>/Unit Delay1'
         */
        VeBPCR_e_BSWPWMCntctrSts = BPCR_ac_DW.UnitDelay1_DSTATE_i;

        /* Merge: '<S184>/Merge1' incorporates:
         *  Constant: '<S216>/TRUE Constant'
         *  SignalConversion generated from: '<S216>/Timer_OOR'
         */
        VeBPCR_b_BSWPWMTimerOOR = true;

        /* Merge: '<S184>/Merge2' incorporates:
         *  Constant: '<S216>/Constant Value1'
         *  SignalConversion generated from: '<S216>/Dbg'
         */
        VeBPCR_Cnt_PWMBSW_Dbg = ((uint8)5U);

        /* End of Outputs for SubSystem: '<S184>/Default' */
    }

    /* End of If: '<S184>/If' */
    if (KeBPCR_b_UseBSWPWMTimer)
    {
        BPCR_ac_DW.UnitDelay1_DSTATE_i = VeBPCR_e_BSWPWMCntctrSts;
    }
    else
    {
        BPCR_ac_DW.UnitDelay1_DSTATE_i = VeBPCR_e_PWMDecodedCntctrStsO;
    }

    /* VariantMerge generated from: '<S179>/Variant Source' incorporates:
     *  Constant: '<S186>/Calib'
     *  Merge: '<S183>/Merge'
     *  Merge: '<S184>/Merge'
     *  Switch: '<S180>/Switch'
     *  UnitDelay: '<S180>/Unit Delay1'
     */
    BPCR_ac_B.VariantMerge_For_Variant_Source_Varian_h =
        BPCR_ac_DW.UnitDelay1_DSTATE_i;

    /* Logic: '<S187>/Logical3' */
    VeBPCR_b_PWMBlankAct = !rtb_Logical1_o5;
    if (KeBPCR_b_UseBSWPWMTimer)
    {
        /* VariantMerge generated from: '<S179>/Variant Source1' */
        BPCR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
            VeBPCR_b_BSWPWMTimerOOR;
    }
    else
    {
        /* VariantMerge generated from: '<S179>/Variant Source1' */
        BPCR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
            VeBPCR_b_PWMTimerOOR_Out;
    }

    /* End of Outputs for SubSystem: '<S187>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S187>/Stop Watch Reset Enabled' */
    /* End of Outputs for SubSystem: '<S180>/DecodeTmr1' */
#endif

    /* End of If: '<S180>/If' */

    /* Switch: '<S238>/Switch3' incorporates:
     *  Constant: '<S187>/TRUE Constant1'
     *  Logic: '<S187>/Logical6'
     *  Logic: '<S187>/Logical7'
     *  Switch: '<S187>/Switch'
     *  UnitDelay: '<S238>/Unit Delay'
     */
#if Rte_SysCon_Variant_BPCR_1 && Rte_SysCon_Variant_BPCR_3

    if (rtb_AND_km)
    {
        BPCR_ac_DW.UnitDelay_DSTATE_gr = true;
    }
    else
    {
        BPCR_ac_DW.UnitDelay_DSTATE_gr = ((!rtb_LeBPCR_b_EnblPWMTimer_Raw) ||
            (!VeBPCR_b_PWMBlankAct));
    }

#endif

    /* End of Switch: '<S238>/Switch3' */

    /* SignalConversion generated from: '<S179>/Variant Source2' incorporates:
     *  SignalConversion generated from: '<S179>/Variant Source1'
     *  SignalConversion generated from: '<S179>/Variant Source'
     */
#if Rte_SysCon_Variant_BPCR_3

    /* VariantMerge generated from: '<S179>/Variant Source2' */
    BPCR_ac_B.VariantMerge_For_Variant_Source_Varian_i = VeBPCR_b_PWMBlankAct;

#else

    /* VariantMerge generated from: '<S179>/Variant Source1' incorporates:
     *  Constant: '<S181>/FALSE Constant2'
     *  SignalConversion generated from: '<S179>/Variant Source1'
     */
    BPCR_ac_B.VariantMerge_For_Variant_Source_Varian_g = false;

    /* VariantMerge generated from: '<S179>/Variant Source2' incorporates:
     *  Constant: '<S181>/FALSE Constant1'
     *  SignalConversion generated from: '<S179>/Variant Source2'
     */
    BPCR_ac_B.VariantMerge_For_Variant_Source_Varian_i = false;

    /* VariantMerge generated from: '<S179>/Variant Source' incorporates:
     *  Constant: '<S239>/Calib'
     *  SignalConversion generated from: '<S179>/Variant Source'
     */
    BPCR_ac_B.VariantMerge_For_Variant_Source_Varian_h =
        KeBPCR_e_PWMCntctrSts_Init;

#endif

    /* End of SignalConversion generated from: '<S179>/Variant Source2' */

    /* RelationalOperator: '<S179>/Comparison5' incorporates:
     *  UnitDelay: '<S179>/Unit Delay'
     */
    VeBPCR_b_BSWTmrPokeCall = (rtb_TmpSignalConversionAtVeBPCR_Cnt_BSW_ !=
        BPCR_ac_DW.UnitDelay_DSTATE_nv);

    /* Update for UnitDelay: '<S187>/Unit Delay2' */
#if Rte_SysCon_Variant_BPCR_3

    BPCR_ac_DW.UnitDelay2_DSTATE_e = VeBPCR_b_EnblPWMTimer;

#endif

    /* End of Update for UnitDelay: '<S187>/Unit Delay2' */

    /* Update for UnitDelay: '<S179>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_nv = rtb_TmpSignalConversionAtVeBPCR_Cnt_BSW_;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeBPCR_b_PWMTimerOOR' incorporates:
     *  SignalConversion generated from: '<S1>/VeBPCR_b_PWMTimerOOR'
     */
    (void)Rte_Write_VeBPCR_b_PWMTimerOOR_Value
        (BPCR_ac_B.VariantMerge_For_Variant_Source_Varian_g);

    /* Outport: '<Root>/VeBPCR_e_PWMDecodedCntctrSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeBPCR_e_PWMDecodedCntctrSts'
     *  VariantMerge generated from: '<S179>/Variant Source'
     */
    (void)Rte_Write_VeBPCR_e_PWMDecodedCntctrSts_Value
        (BPCR_ac_B.VariantMerge_For_Variant_Source_Varian_h);

    /* Merge: '<Root>/VeBPCR_b_PWMBlankAct_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/VeBPCR_b_PWMBlankAct_write'
     * */
    Rte_IrvWrite_BPCR_FastTEF_VeBPCR_b_PWMBlankAct_write_IRV
        (BPCR_ac_B.VariantMerge_For_Variant_Source_Varian_i);

    /* Merge: '<Root>/Merge_2_Irv' incorporates:
     *  SignalConversion generated from: '<S1>/VeBPCR_b_PWMTimerOOR_write'
     * */
    Rte_IrvWrite_BPCR_FastTEF_VeBPCR_b_PWMTimerOOR_write_IRV
        (BPCR_ac_B.VariantMerge_For_Variant_Source_Varian_g);

    /* Merge: '<Root>/Merge_1_Irv' incorporates:
     *  SignalConversion generated from: '<S1>/VeBPCR_e_PWMDecodedCntctrSts_write'
     *  VariantMerge generated from: '<S179>/Variant Source'
     * */
    Rte_IrvWrite_BPCR_FastTEF_VeBPCR_e_PWMDecodedCntctrSts_write_IRV
        (BPCR_ac_B.VariantMerge_For_Variant_Source_Varian_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model step function for TID2 */
FUNC(void, BPCR_CODE) BPCR_MedTEB(void) /* Explicit Task: MedTEB */
{
    float32 tmpRead;
    boolean rtb_TmpSignalConversionAtVeBPCR_b_HEVOnR;
    boolean rtb_TmpSignalConversionAtVeBPCR_b_HVBatC;
    boolean rtb_TmpSignalConversionAtVeBPCR_b_HVBatR;
    boolean rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o;
    boolean rtb_TmpSignalConversionAtVeBPCR_b_HV__e2;
    boolean rtb_TmpSignalConversionAtVeBPCR_b_HV__m2;
    boolean rtb_TmpSignalConversionAtVeBPCR_b_HV__os;
    boolean rtb_TmpSignalConversionAtVeBPCR_b_MIL_On;

#if Rte_SysCon_Variant_BPCR_3

    float32 rtb_TmpSignalConversionAtVeBPCR_DC_Cntct;

#endif

#if Rte_SysCon_Variant_BPCR_3

    float32 rtb_DataTypeConversion;

#endif

#if Rte_SysCon_Variant_BPCR_3

    boolean rtb_TmpSignalConversionAtVeBPCR_b_PWMTim;

#endif

#if Rte_SysCon_Variant_BPCR_3

    boolean rtb_TmpSignalConversionAtVeBPCR_b_PWMBla;

#endif

    boolean rtb_VariantMerge_For_Variant_Source_XeBP;
    boolean rtb_VariantMerge_For_Variant_Source_Xe_p;

#if Rte_SysCon_Variant_BPCR_3

    boolean rtb_Logical2_a;

#endif

#if Rte_SysCon_Variant_BPCR_3

    boolean rtb_TmpSignalConversionAtVeDFIR_b_PostCo;

#endif

#if Rte_SysCon_Variant_BPCR_3

    boolean rtb_Logical5_k;

#endif

    boolean rtb_OR1_lu;
    boolean rtb_Switch_bs;

#if Rte_SysCon_Variant_BPCR_3

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;

#endif

    TeBPCR_e_HVBatCntrWeld_ImpdOpn rtb_Switch2_mq;
    TeBPCR_e_PWMDecoded_CntctrSts rtb_TmpSignalConversionAtVeBPCR_e_PWMDec;
    TeHVTR_e_HV_BatCntctrStat rtb_TmpSignalConversionAtVeBPCR_e_HV_Bat;

#if Rte_SysCon_Variant_BPCR_3

    TePMDR_e_PowerMode rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

#endif

    sint32 tmp;
    float32 VeBPCR_T_HV_BatModTempAvg;
    float32 VeBPCR_T_HV_BatModTempMax;
    float32 VeBPCR_T_HV_BatModTempMin;
    uint16 rtb_OR1_mx_0;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/BPCR_MedTEB'
     */
    /* DataStoreWrite: '<S2>/DSW_StatusByte_LosCommBECM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_Value
        (&BPCR_ac_DW.StatusByte_LosCommBECM_A);

    /* DataStoreWrite: '<S2>/DSW_StatusByte_LosCommBECM_A_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_CANC11_Value
        (&BPCR_ac_DW.StatusByte_LosCommBECM_A_CANC11);

    /* SignalConversion generated from: '<S2>/VeBPCR_e_PWMDecodedCntctrSts_read' incorporates:
     *  Merge: '<Root>/Merge_1_Irv'
     */
    rtb_TmpSignalConversionAtVeBPCR_e_PWMDec =
        Rte_IrvRead_BPCR_MedTEB_VeBPCR_e_PWMDecodedCntctrSts_write_IRV();

    /* SignalConversion generated from: '<S2>/VeBPCR_b_HEVOnRqBPCM_read' incorporates:
     *  Merge: '<Root>/Merge_61_Irv'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HEVOnR =
        Rte_IrvRead_BPCR_MedTEB_HEVOnRqBPCM_write_IRV();

    /* SignalConversion generated from: '<S2>/VeBPCR_b_HV_BatModTempAvgSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_186'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__m2 =
        Rte_IrvRead_BPCR_MedTEB_VeBPCR_b_HV_BatModTempAvgSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S2>/VeBPCR_b_HV_BatModTempMinSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_185'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__e2 =
        Rte_IrvRead_BPCR_MedTEB_VeBPCR_b_HV_BatModTempMinSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S2>/VeBPCR_b_HV_BatModTempMaxSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_184'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o =
        Rte_IrvRead_BPCR_MedTEB_VeBPCR_b_HV_BatModTempMaxSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S2>/VeBPCR_b_HVBatRdySgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_62'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HVBatR =
        Rte_IrvRead_BPCR_MedTEB_HV_BatRdySgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S2>/VeBPCR_b_HVBatCntrWeld_ImpdOpnSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_95'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HVBatC =
        Rte_IrvRead_BPCR_MedTEB_VeBPCR_b_HVBatCntrWeld_ImpdOpnSgnl_Rcvd_write_IRV
        ();

    /* SignalConversion generated from: '<S2>/VeBPCR_b_MIL_OnRq_BPCM_read' incorporates:
     *  Merge: '<Root>/Merge_74'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_MIL_On =
        Rte_IrvRead_BPCR_MedTEB_MILOnRqBPCM_Init_write_IRV();

    /* SignalConversion generated from: '<S2>/VeBPCR_e_HV_BatCntctrStat_read' incorporates:
     *  Merge: '<Root>/Merge_57'
     */
    rtb_TmpSignalConversionAtVeBPCR_e_HV_Bat =
        Rte_IrvRead_BPCR_MedTEB_HV_BatCntctrStat_write_IRV();

    /* SignalConversion generated from: '<S2>/VeBPCR_b_HV_BatCntctrStatFA_read' incorporates:
     *  Merge: '<Root>/Merge_85'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__os =
        Rte_IrvRead_BPCR_MedTEB_HV_BatCntctrStatFA_write_IRV();

    /* SignalConversion generated from: '<S2>/VeBPCR_b_HV_BatCntctrOpenReq_read' incorporates:
     *  Merge: '<Root>/Merge_67'
     */
    VeBPCR_b_HV_BatCntctrOpenReq_Test =
        Rte_IrvRead_BPCR_MedTEB_HV_BatCntctrOpenReq_write_IRV();

    /* SignalConversion generated from: '<S2>/VeBPCR_DC_CntctrCntrl_PWM_read' incorporates:
     *  DataTypeConversion: '<S2>/Data Type Conversion'
     *  SignalConversion generated from: '<S2>/VeBPCR_b_PWMBlankAct_Read'
     *  SignalConversion generated from: '<S2>/VeBPCR_b_PWMTimerOOR_read'
     *  SignalConversion generated from: '<S2>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_HybBatPosConConCirPer'
     *  SignalConversion generated from: '<S2>/VePMDR_e_PMM_PowerMode'
     */
#if Rte_SysCon_Variant_BPCR_3

    /* SignalConversion generated from: '<S2>/VeBPCR_DC_CntctrCntrl_PWM_read' incorporates:
     *  Merge: '<Root>/Merge_69'
     */
    rtb_TmpSignalConversionAtVeBPCR_DC_Cntct =
        Rte_IrvRead_BPCR_MedTEB_CntctrCntrl_PWM_write_IRV();

    /* SignalConversion generated from: '<S2>/VePMDR_e_PMM_PowerMode' incorporates:
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value
        (&rtb_TmpSignalConversionAtVePMDR_e_PMM_Po);

    /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeHPMR_DC_BattPackCntctrCmd'
     */
    (void)Rte_Read_VeHPMR_DC_BattPackCntctrCmd_Value(&rtb_DataTypeConversion);

    /* SignalConversion generated from: '<S2>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* SignalConversion generated from: '<S2>/VeBPCR_b_PWMTimerOOR_read' incorporates:
     *  Merge: '<Root>/Merge_2_Irv'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_PWMTim =
        Rte_IrvRead_BPCR_MedTEB_VeBPCR_b_PWMTimerOOR_write_IRV();

    /* SignalConversion generated from: '<S2>/VeBPCR_b_PWMBlankAct_Read' incorporates:
     *  Merge: '<Root>/VeBPCR_b_PWMBlankAct_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_PWMBla =
        Rte_IrvRead_BPCR_MedTEB_VeBPCR_b_PWMBlankAct_write_IRV();

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_HybBatPosConConCirPer' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybBatPosConConCirPer'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybBatPosConConCirPer_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

#endif

    /* End of SignalConversion generated from: '<S2>/VeBPCR_DC_CntctrCntrl_PWM_read' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Debounce_TimeOutprocess'
     */
    /* Outputs for Atomic SubSystem: '<S338>/EdgeRising' */
    /* Logic: '<S359>/OR1' incorporates:
     *  UnitDelay: '<S359>/Unit Delay'
     */
    rtb_OR1_lu = !BPCR_ac_DW.UnitDelay_DSTATE_gp;

    /* Update for UnitDelay: '<S359>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_gp = rtb_TmpSignalConversionAtVeBPCR_b_HVBatR;

    /* Outputs for Atomic SubSystem: '<S338>/Count Down  Reset Enabled2' */
    /* Switch: '<S358>/Switch1' incorporates:
     *  Constant: '<S338>/TRUE Constant2'
     *  Constant: '<S358>/Constant Value'
     *  Constant: '<S360>/Calib'
     *  Logic: '<S358>/AND'
     *  Logic: '<S359>/AND'
     *  RelationalOperator: '<S358>/Greater  Than'
     *  Switch: '<S358>/Switch2'
     *  UnitDelay: '<S358>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HVBatR && rtb_OR1_lu)
    {
        BPCR_ac_DW.UnitDelay_DSTATE_ii = KeBPCI_Cnt_HV_BatRdyWaitTme;
    }
    else
    {
        if ((true) && (BPCR_ac_DW.UnitDelay_DSTATE_ii > ((uint16)0U)))
        {
            /* UnitDelay: '<S358>/Unit Delay' incorporates:
             *  Constant: '<S358>/Constant Value1'
             *  Sum: '<S358>/Subtraction'
             *  Switch: '<S358>/Switch2'
             */
            BPCR_ac_DW.UnitDelay_DSTATE_ii -= ((uint16)1U);
        }
    }

    /* End of Switch: '<S358>/Switch1' */
    /* End of Outputs for SubSystem: '<S338>/EdgeRising' */

    /* Switch: '<S338>/Switch' incorporates:
     *  Constant: '<S358>/Constant Value2'
     *  RelationalOperator: '<S358>/Greater  Than1'
     *  UnitDelay: '<S358>/Unit Delay'
     */
    if (BPCR_ac_DW.UnitDelay_DSTATE_ii > ((uint16)0U))
    {
        /* Switch: '<S338>/Switch' incorporates:
         *  DataStoreRead: '<S338>/Data Store Read'
         */
        VeBPCR_b_HV_BatRdy_Tmot = BPCR_ac_DW.NeBPCR_b_HV_BatRdy;
    }
    else
    {
        /* Switch: '<S338>/Switch' incorporates:
         *  Merge: '<Root>/Merge_78'
         *  SignalConversion generated from: '<S2>/VeBPCR_b_HVBatRdy_read'
         */
        VeBPCR_b_HV_BatRdy_Tmot =
            Rte_IrvRead_BPCR_MedTEB_HVBatRdy_Init_write_IRV();
    }

    /* End of Switch: '<S338>/Switch' */
    /* End of Outputs for SubSystem: '<S338>/Count Down  Reset Enabled2' */

    /* DataStoreWrite: '<S338>/Data Store Write1' */
    BPCR_ac_DW.NeBPCR_b_HV_BatRdy = VeBPCR_b_HV_BatRdy_Tmot;

    /* Outputs for Atomic SubSystem: '<S244>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S342>/EdgeRising' */
    /* Logic: '<S369>/AND' incorporates:
     *  Logic: '<S369>/OR1'
     *  UnitDelay: '<S369>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HVBatR =
        (rtb_TmpSignalConversionAtVeBPCR_b_HEVOnR &&
         (!BPCR_ac_DW.UnitDelay_DSTATE_hg));

    /* Update for UnitDelay: '<S369>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_hg = rtb_TmpSignalConversionAtVeBPCR_b_HEVOnR;

    /* End of Outputs for SubSystem: '<S342>/EdgeRising' */

    /* Switch: '<S342>/Switch1' incorporates:
     *  Logic: '<S342>/OR'
     *  Logic: '<S342>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeBPCR_b_HEVOnR) ||
            rtb_TmpSignalConversionAtVeBPCR_b_HVBatR)
    {
        /* Sum: '<S342>/Summation' incorporates:
         *  Constant: '<S342>/Constant Value1'
         *  UnitDelay: '<S342>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_md = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S342>/Summation' incorporates:
         *  Constant: '<S342>/Constant Value'
         *  UnitDelay: '<S342>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_md = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)BPCR_ac_DW.UnitDelay_DSTATE_md));

        /* MinMax: '<S342>/Minimum' incorporates:
         *  Constant: '<S331>/Calib'
         */
        if (KeBPCR_Cnt_HEVOnReqBPCM_OnDebounce < BPCR_ac_DW.UnitDelay_DSTATE_md)
        {
            /* Sum: '<S342>/Summation' */
            BPCR_ac_DW.UnitDelay_DSTATE_md = KeBPCR_Cnt_HEVOnReqBPCM_OnDebounce;
        }

        /* End of MinMax: '<S342>/Minimum' */
    }

    /* End of Switch: '<S342>/Switch1' */

    /* Logic: '<S342>/AND' incorporates:
     *  Constant: '<S331>/Calib'
     *  RelationalOperator: '<S342>/Greater  Than'
     *  UnitDelay: '<S342>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HEVOnR =
        (rtb_TmpSignalConversionAtVeBPCR_b_HEVOnR &&
         (BPCR_ac_DW.UnitDelay_DSTATE_md >= KeBPCR_Cnt_HEVOnReqBPCM_OnDebounce));

    /* End of Outputs for SubSystem: '<S244>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S244>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S340>/EdgeFalling1' */
    /* Logic: '<S367>/AND' incorporates:
     *  Logic: '<S367>/OR1'
     *  UnitDelay: '<S367>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HVBatR =
        ((!rtb_TmpSignalConversionAtVeBPCR_b_HEVOnR) &&
         (BPCR_ac_DW.UnitDelay_DSTATE_i4));

    /* Update for UnitDelay: '<S367>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_i4 = rtb_TmpSignalConversionAtVeBPCR_b_HEVOnR;

    /* End of Outputs for SubSystem: '<S340>/EdgeFalling1' */

    /* Switch: '<S340>/Switch' incorporates:
     *  Constant: '<S330>/Calib'
     *  UnitDelay: '<S340>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HVBatR)
    {
        BPCR_ac_DW.UnitDelay_DSTATE_ok = KeBPCR_Cnt_HEVOnReqBPCM_OffDebounce;
    }
    else
    {
        /* Sum: '<S340>/Summation' incorporates:
         *  Constant: '<S340>/Constant Value'
         *  UnitDelay: '<S340>/Unit Delay'
         */
        tmp = ((sint32)BPCR_ac_DW.UnitDelay_DSTATE_ok) - ((sint32)((uint16)1U));
        if (tmp < 0)
        {
            tmp = 0;
        }

        /* MinMax: '<S340>/Minimum' incorporates:
         *  Constant: '<S340>/Constant Value1'
         *  Sum: '<S340>/Summation'
         */
        if (((uint16)tmp) > ((uint16)0U))
        {
            BPCR_ac_DW.UnitDelay_DSTATE_ok = (uint16)tmp;
        }
        else
        {
            BPCR_ac_DW.UnitDelay_DSTATE_ok = ((uint16)0U);
        }

        /* End of MinMax: '<S340>/Minimum' */
    }

    /* End of Switch: '<S340>/Switch' */

    /* Logic: '<S340>/AND' incorporates:
     *  Constant: '<S340>/Constant Value2'
     *  RelationalOperator: '<S340>/Greater  Than'
     *  UnitDelay: '<S340>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HEVOnR =
        (rtb_TmpSignalConversionAtVeBPCR_b_HEVOnR ||
         (BPCR_ac_DW.UnitDelay_DSTATE_ok > ((uint16)0U)));

    /* End of Outputs for SubSystem: '<S244>/Turn Off Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S335>/EdgeRising2' */
    /* Logic: '<S347>/OR1' incorporates:
     *  UnitDelay: '<S347>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HVBatR = !BPCR_ac_DW.UnitDelay_DSTATE_mo;

    /* Update for UnitDelay: '<S347>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_mo = rtb_TmpSignalConversionAtVeBPCR_b_HV__m2;

    /* Outputs for Atomic SubSystem: '<S335>/Count Down  Reset Enabled2' */
    /* Switch: '<S346>/Switch1' incorporates:
     *  Constant: '<S335>/TRUE Constant2'
     *  Constant: '<S346>/Constant Value'
     *  Constant: '<S348>/Calib'
     *  Logic: '<S346>/AND'
     *  Logic: '<S347>/AND'
     *  RelationalOperator: '<S346>/Greater  Than'
     *  Switch: '<S346>/Switch2'
     *  UnitDelay: '<S346>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__m2 &&
            rtb_TmpSignalConversionAtVeBPCR_b_HVBatR)
    {
        BPCR_ac_DW.UnitDelay_DSTATE_io = KeBPCI_Cnt_HV_BatModTempAvgWaitTme;
    }
    else
    {
        if ((true) && (BPCR_ac_DW.UnitDelay_DSTATE_io > ((uint16)0U)))
        {
            /* UnitDelay: '<S346>/Unit Delay' incorporates:
             *  Constant: '<S346>/Constant Value1'
             *  Sum: '<S346>/Subtraction'
             *  Switch: '<S346>/Switch2'
             */
            BPCR_ac_DW.UnitDelay_DSTATE_io -= ((uint16)1U);
        }
    }

    /* End of Switch: '<S346>/Switch1' */
    /* End of Outputs for SubSystem: '<S335>/Count Down  Reset Enabled2' */
    /* End of Outputs for SubSystem: '<S335>/EdgeRising2' */

    /* Switch: '<S335>/Switch5' incorporates:
     *  Constant: '<S346>/Constant Value2'
     *  Merge: '<Root>/Merge_113_Irv'
     *  RelationalOperator: '<S346>/Greater  Than1'
     *  SignalConversion generated from: '<S2>/VeBPCR_b_HV_BatModTempAvgFA_read'
     *  Switch: '<S335>/Switch4'
     *  UnitDelay: '<S346>/Unit Delay'
     */
    if (Rte_IrvRead_BPCR_MedTEB_HV_BatModTempAvgFA_write_IRV())
    {
        /* Switch: '<S335>/Switch5' incorporates:
         *  Constant: '<S349>/Calib'
         */
        VeBPCR_T_HV_BatModTempAvg = KeBPCI_T_HV_BatModTempAvgDflt;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S335>/Count Down  Reset Enabled2' */
        if (BPCR_ac_DW.UnitDelay_DSTATE_io > ((uint16)0U))
        {
            /* Switch: '<S335>/Switch4' incorporates:
             *  DataStoreRead: '<S335>/Data Store Read'
             *  Switch: '<S335>/Switch5'
             */
            VeBPCR_T_HV_BatModTempAvg = BPCR_ac_DW.NeBPCR_T_BatModTmp;
        }
        else
        {
            /* Switch: '<S335>/Switch5' incorporates:
             *  Merge: '<Root>/Merge_114'
             *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempAvg_read'
             *  Switch: '<S335>/Switch4'
             */
            VeBPCR_T_HV_BatModTempAvg =
                Rte_IrvRead_BPCR_MedTEB_HV_BatModTempAvg_write_IRV();
        }

        /* End of Outputs for SubSystem: '<S335>/Count Down  Reset Enabled2' */
    }

    /* End of Switch: '<S335>/Switch5' */

    /* Outputs for Atomic SubSystem: '<S337>/EdgeRising1' */
    /* Logic: '<S355>/OR1' incorporates:
     *  UnitDelay: '<S355>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__m2 = !BPCR_ac_DW.UnitDelay_DSTATE_au;

    /* Update for UnitDelay: '<S355>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_au = rtb_TmpSignalConversionAtVeBPCR_b_HV__e2;

    /* Outputs for Atomic SubSystem: '<S337>/Count Down  Reset Enabled1' */
    /* Switch: '<S354>/Switch1' incorporates:
     *  Constant: '<S337>/TRUE Constant1'
     *  Constant: '<S354>/Constant Value'
     *  Constant: '<S356>/Calib'
     *  Logic: '<S354>/AND'
     *  Logic: '<S355>/AND'
     *  RelationalOperator: '<S354>/Greater  Than'
     *  Switch: '<S354>/Switch2'
     *  UnitDelay: '<S354>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__e2 &&
            rtb_TmpSignalConversionAtVeBPCR_b_HV__m2)
    {
        BPCR_ac_DW.UnitDelay_DSTATE_mc = KeBPCI_Cnt_HV_BatModTempMinWaitTme;
    }
    else
    {
        if ((true) && (BPCR_ac_DW.UnitDelay_DSTATE_mc > ((uint16)0U)))
        {
            /* UnitDelay: '<S354>/Unit Delay' incorporates:
             *  Constant: '<S354>/Constant Value1'
             *  Sum: '<S354>/Subtraction'
             *  Switch: '<S354>/Switch2'
             */
            BPCR_ac_DW.UnitDelay_DSTATE_mc -= ((uint16)1U);
        }
    }

    /* End of Switch: '<S354>/Switch1' */
    /* End of Outputs for SubSystem: '<S337>/Count Down  Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S337>/EdgeRising1' */

    /* Switch: '<S337>/Switch3' incorporates:
     *  Constant: '<S354>/Constant Value2'
     *  Merge: '<Root>/Merge_108_Irv'
     *  RelationalOperator: '<S354>/Greater  Than1'
     *  SignalConversion generated from: '<S2>/VeBPCR_b_HV_BatModTempMinFA_read'
     *  Switch: '<S337>/Switch2'
     *  UnitDelay: '<S354>/Unit Delay'
     */
    if (Rte_IrvRead_BPCR_MedTEB_HV_BatModTempMinFA_write_IRV())
    {
        /* Switch: '<S337>/Switch3' incorporates:
         *  Constant: '<S357>/Calib'
         */
        VeBPCR_T_HV_BatModTempMin = KeBPCI_T_HV_BatModTempMinDflt;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S337>/Count Down  Reset Enabled1' */
        if (BPCR_ac_DW.UnitDelay_DSTATE_mc > ((uint16)0U))
        {
            /* Switch: '<S337>/Switch2' incorporates:
             *  DataStoreRead: '<S337>/Data Store Read'
             *  Switch: '<S337>/Switch3'
             */
            VeBPCR_T_HV_BatModTempMin = BPCR_ac_DW.NeBPCR_T_BatModTmp;
        }
        else
        {
            /* Switch: '<S337>/Switch3' incorporates:
             *  Merge: '<Root>/Merge_109'
             *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMin_read'
             *  Switch: '<S337>/Switch2'
             */
            VeBPCR_T_HV_BatModTempMin =
                Rte_IrvRead_BPCR_MedTEB_HV_BatModTempMin_write_IRV();
        }

        /* End of Outputs for SubSystem: '<S337>/Count Down  Reset Enabled1' */
    }

    /* End of Switch: '<S337>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S336>/EdgeRising1' */
    /* Logic: '<S351>/OR1' incorporates:
     *  UnitDelay: '<S351>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__e2 = !BPCR_ac_DW.UnitDelay_DSTATE_fe;

    /* Update for UnitDelay: '<S351>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_fe = rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o;

    /* Outputs for Atomic SubSystem: '<S336>/Count Down  Reset Enabled1' */
    /* Switch: '<S350>/Switch1' incorporates:
     *  Constant: '<S336>/TRUE Constant1'
     *  Constant: '<S350>/Constant Value'
     *  Constant: '<S352>/Calib'
     *  Logic: '<S350>/AND'
     *  Logic: '<S351>/AND'
     *  RelationalOperator: '<S350>/Greater  Than'
     *  Switch: '<S350>/Switch2'
     *  UnitDelay: '<S350>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o &&
            rtb_TmpSignalConversionAtVeBPCR_b_HV__e2)
    {
        BPCR_ac_DW.UnitDelay_DSTATE_a = KeBPCI_Cnt_HV_BatModTempMaxWaitTme;
    }
    else
    {
        if ((true) && (BPCR_ac_DW.UnitDelay_DSTATE_a > ((uint16)0U)))
        {
            /* UnitDelay: '<S350>/Unit Delay' incorporates:
             *  Constant: '<S350>/Constant Value1'
             *  Sum: '<S350>/Subtraction'
             *  Switch: '<S350>/Switch2'
             */
            BPCR_ac_DW.UnitDelay_DSTATE_a -= ((uint16)1U);
        }
    }

    /* End of Switch: '<S350>/Switch1' */
    /* End of Outputs for SubSystem: '<S336>/Count Down  Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S336>/EdgeRising1' */

    /* Switch: '<S336>/Switch3' incorporates:
     *  Constant: '<S350>/Constant Value2'
     *  Merge: '<Root>/Merge_153_Irv'
     *  RelationalOperator: '<S350>/Greater  Than1'
     *  SignalConversion generated from: '<S2>/VeBPCR_b_HV_BatModTempMaxFA_read'
     *  Switch: '<S336>/Switch2'
     *  UnitDelay: '<S350>/Unit Delay'
     */
    if (Rte_IrvRead_BPCR_MedTEB_HV_BatModTempMaxFA_write_IRV())
    {
        /* Switch: '<S336>/Switch3' incorporates:
         *  Constant: '<S353>/Calib'
         */
        VeBPCR_T_HV_BatModTempMax = KeBPCI_T_HV_BatModTempMaxDflt;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S336>/Count Down  Reset Enabled1' */
        if (BPCR_ac_DW.UnitDelay_DSTATE_a > ((uint16)0U))
        {
            /* Switch: '<S336>/Switch2' incorporates:
             *  DataStoreRead: '<S336>/Data Store Read'
             *  Switch: '<S336>/Switch3'
             */
            VeBPCR_T_HV_BatModTempMax = BPCR_ac_DW.NeBPCR_T_BatModTmp;
        }
        else
        {
            /* Switch: '<S336>/Switch3' incorporates:
             *  Merge: '<Root>/Merge_154'
             *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMax_read'
             *  Switch: '<S336>/Switch2'
             */
            VeBPCR_T_HV_BatModTempMax =
                Rte_IrvRead_BPCR_MedTEB_HV_BatModTempMax_write_IRV();
        }

        /* End of Outputs for SubSystem: '<S336>/Count Down  Reset Enabled1' */
    }

    /* End of Switch: '<S336>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S339>/EdgeRising1' */
    /* Logic: '<S362>/OR1' incorporates:
     *  UnitDelay: '<S362>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o = !BPCR_ac_DW.UnitDelay_DSTATE_ex;

    /* Update for UnitDelay: '<S362>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_ex = rtb_TmpSignalConversionAtVeBPCR_b_HVBatC;

    /* Outputs for Atomic SubSystem: '<S339>/Count Down  Reset Enabled1' */
    /* Switch: '<S361>/Switch1' incorporates:
     *  Constant: '<S339>/TRUE Constant1'
     *  Constant: '<S361>/Constant Value'
     *  Constant: '<S365>/Calib'
     *  Logic: '<S361>/AND'
     *  Logic: '<S362>/AND'
     *  RelationalOperator: '<S361>/Greater  Than'
     *  Switch: '<S361>/Switch2'
     *  UnitDelay: '<S361>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HVBatC &&
            rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o)
    {
        BPCR_ac_DW.UnitDelay_DSTATE_di = KeBPCR_Cnt_HVBatCntrWeld_ImpdOpn;
    }
    else
    {
        if ((true) && (BPCR_ac_DW.UnitDelay_DSTATE_di > ((uint16)0U)))
        {
            /* UnitDelay: '<S361>/Unit Delay' incorporates:
             *  Constant: '<S361>/Constant Value1'
             *  Sum: '<S361>/Subtraction'
             *  Switch: '<S361>/Switch2'
             */
            BPCR_ac_DW.UnitDelay_DSTATE_di -= ((uint16)1U);
        }
    }

    /* End of Switch: '<S361>/Switch1' */
    /* End of Outputs for SubSystem: '<S339>/EdgeRising1' */

    /* Switch: '<S339>/Switch2' incorporates:
     *  Constant: '<S361>/Constant Value2'
     *  RelationalOperator: '<S361>/Greater  Than1'
     *  UnitDelay: '<S361>/Unit Delay'
     */
    if (BPCR_ac_DW.UnitDelay_DSTATE_di > ((uint16)0U))
    {
        /* Switch: '<S339>/Switch2' incorporates:
         *  Constant: '<S366>/Calib'
         */
        rtb_Switch2_mq = KeBPCR_e_HVBatCntrWeld_ImpdOpn;
    }
    else
    {
        /* Switch: '<S339>/Switch2' incorporates:
         *  Merge: '<Root>/Merge_64'
         *  SignalConversion generated from: '<S2>/VeBPCR_e_HVBatCntrWeld_ImpdOpn_read'
         */
        rtb_Switch2_mq = Rte_IrvRead_BPCR_MedTEB_HVBatCntrWeld_ImpdOpn_write_IRV
            ();
    }

    /* End of Switch: '<S339>/Switch2' */
    /* End of Outputs for SubSystem: '<S339>/Count Down  Reset Enabled1' */

    /* Logic: '<S339>/Logical2' incorporates:
     *  Constant: '<S363>/Constant'
     *  Constant: '<S364>/Constant'
     *  RelationalOperator: '<S339>/Comparison2'
     *  RelationalOperator: '<S339>/Comparison3'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HVBatC = ((rtb_Switch2_mq ==
        CeBPCR_e_StuckClosed) || (rtb_Switch2_mq == CeBPCR_e_SNA));

    /* Outputs for Atomic SubSystem: '<S244>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S343>/EdgeRising' */
    /* Logic: '<S370>/AND' incorporates:
     *  Logic: '<S370>/OR1'
     *  UnitDelay: '<S370>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o =
        (rtb_TmpSignalConversionAtVeBPCR_b_MIL_On &&
         (!BPCR_ac_DW.UnitDelay_DSTATE_p));

    /* Update for UnitDelay: '<S370>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_p = rtb_TmpSignalConversionAtVeBPCR_b_MIL_On;

    /* End of Outputs for SubSystem: '<S343>/EdgeRising' */

    /* Switch: '<S343>/Switch1' incorporates:
     *  Logic: '<S343>/OR'
     *  Logic: '<S343>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeBPCR_b_MIL_On) ||
            rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o)
    {
        /* Sum: '<S343>/Summation' incorporates:
         *  Constant: '<S343>/Constant Value1'
         *  UnitDelay: '<S343>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_fy = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S343>/Summation' incorporates:
         *  Constant: '<S343>/Constant Value'
         *  UnitDelay: '<S343>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_fy = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)BPCR_ac_DW.UnitDelay_DSTATE_fy));

        /* MinMax: '<S343>/Minimum' incorporates:
         *  Constant: '<S333>/Calib'
         */
        if (KeBPCR_Cnt_MILOnReqBPCM_OnDebounce < BPCR_ac_DW.UnitDelay_DSTATE_fy)
        {
            /* Sum: '<S343>/Summation' */
            BPCR_ac_DW.UnitDelay_DSTATE_fy = KeBPCR_Cnt_MILOnReqBPCM_OnDebounce;
        }

        /* End of MinMax: '<S343>/Minimum' */
    }

    /* End of Switch: '<S343>/Switch1' */

    /* Logic: '<S343>/AND' incorporates:
     *  Constant: '<S333>/Calib'
     *  RelationalOperator: '<S343>/Greater  Than'
     *  UnitDelay: '<S343>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_MIL_On =
        (rtb_TmpSignalConversionAtVeBPCR_b_MIL_On &&
         (BPCR_ac_DW.UnitDelay_DSTATE_fy >= KeBPCR_Cnt_MILOnReqBPCM_OnDebounce));

    /* End of Outputs for SubSystem: '<S244>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S244>/Turn Off Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S341>/EdgeFalling1' */
    /* Logic: '<S368>/AND' incorporates:
     *  Logic: '<S368>/OR1'
     *  UnitDelay: '<S368>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o =
        ((!rtb_TmpSignalConversionAtVeBPCR_b_MIL_On) &&
         (BPCR_ac_DW.UnitDelay_DSTATE_o2));

    /* Update for UnitDelay: '<S368>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_o2 = rtb_TmpSignalConversionAtVeBPCR_b_MIL_On;

    /* End of Outputs for SubSystem: '<S341>/EdgeFalling1' */

    /* Switch: '<S341>/Switch' incorporates:
     *  Constant: '<S332>/Calib'
     *  UnitDelay: '<S341>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o)
    {
        BPCR_ac_DW.UnitDelay_DSTATE_ib = KeBPCR_Cnt_MILOnReqBPCM_OffDebounce;
    }
    else
    {
        /* Sum: '<S341>/Summation' incorporates:
         *  Constant: '<S341>/Constant Value'
         *  UnitDelay: '<S341>/Unit Delay'
         */
        tmp = ((sint32)BPCR_ac_DW.UnitDelay_DSTATE_ib) - ((sint32)((uint16)1U));
        if (tmp < 0)
        {
            tmp = 0;
        }

        /* MinMax: '<S341>/Minimum' incorporates:
         *  Constant: '<S341>/Constant Value1'
         *  Sum: '<S341>/Summation'
         */
        if (((uint16)tmp) > ((uint16)0U))
        {
            BPCR_ac_DW.UnitDelay_DSTATE_ib = (uint16)tmp;
        }
        else
        {
            BPCR_ac_DW.UnitDelay_DSTATE_ib = ((uint16)0U);
        }

        /* End of MinMax: '<S341>/Minimum' */
    }

    /* End of Switch: '<S341>/Switch' */

    /* Logic: '<S341>/AND' incorporates:
     *  Constant: '<S341>/Constant Value2'
     *  RelationalOperator: '<S341>/Greater  Than'
     *  UnitDelay: '<S341>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_MIL_On =
        (rtb_TmpSignalConversionAtVeBPCR_b_MIL_On ||
         (BPCR_ac_DW.UnitDelay_DSTATE_ib > ((uint16)0U)));

    /* End of Outputs for SubSystem: '<S244>/Turn Off Delay Sample1' */

    /* Switch: '<S334>/Switch11' incorporates:
     *  Constant: '<S344>/Calib'
     *  Constant: '<S345>/Calib'
     *  Merge: '<Root>/Merge_54'
     *  SignalConversion generated from: '<S2>/VeBPCR_b_PwrLimON'
     */
    if (KeBPCR_b_PwrLimOnOvrdEnbl)
    {
        rtb_TmpSignalConversionAtVeBPCR_b_HV__e2 = KeBPCR_b_PwrLimOnOvrdVal;
    }
    else
    {
        rtb_TmpSignalConversionAtVeBPCR_b_HV__e2 =
            Rte_IrvRead_BPCR_MedTEB_PwrLimON_IRV();
    }

    /* Outport: '<Root>/VeBPCR_b_PwrLimON' incorporates:
     *  Switch: '<S334>/Switch11'
     */
    (void)Rte_Write_VeBPCR_b_PwrLimON_Value
        (rtb_TmpSignalConversionAtVeBPCR_b_HV__e2);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Process_12p5ms_InputTask'
     */
    /* Switch: '<S245>/Switch1' incorporates:
     *  Constant: '<S375>/Calib'
     *  Inport: '<Root>/VeHVTR_U_HV_BatVoltModMaxArb'
     *  Inport: '<Root>/VeHVTR_U_HV_BatVoltModMinArb'
     *  Switch: '<S245>/Switch'
     */
    if (KeBPCR_b_BatVolt_Use12p5)
    {
        (void)Rte_Read_VeHVTR_U_HV_BatVoltModMinArb_Value
            ((&(VeBPCI_U_BatVoltModMinArb)));

        /* Outputs for Atomic SubSystem: '<S245>/Bit Selector14' */
        /* Switch: '<S245>/Switch21' incorporates:
         *  Constant: '<S371>/Constant Value'
         *  Constant: '<S376>/Calib'
         *  Inport: '<Root>/VeHVTR_U_HV_BatVoltModMinArb'
         *  RelationalOperator: '<S371>/Greater  Than'
         *  S-Function (sfix_bitop): '<S371>/Bitwise Logical Operator'
         */
        if ((KeBPCR_d_InputOvrdEnbl_OVUV & ((uint16)4U)) > ((uint16)0U))
        {
            /* Switch: '<S245>/Switch1' incorporates:
             *  Constant: '<S374>/Calib'
             */
            VeBPCI_U_BatVoltModMinArb = KeBPCR_U_BatVoltModMinArbOvrd;
        }

        /* End of Switch: '<S245>/Switch21' */
        /* End of Outputs for SubSystem: '<S245>/Bit Selector14' */
        (void)Rte_Read_VeHVTR_U_HV_BatVoltModMaxArb_Value
            ((&(VeBPCI_U_BatVoltModMaxArb)));

        /* Outputs for Atomic SubSystem: '<S245>/Bit Selector3' */
        /* Switch: '<S245>/Switch22' incorporates:
         *  Constant: '<S372>/Constant Value'
         *  Constant: '<S376>/Calib'
         *  Inport: '<Root>/VeHVTR_U_HV_BatVoltModMaxArb'
         *  RelationalOperator: '<S372>/Greater  Than'
         *  S-Function (sfix_bitop): '<S372>/Bitwise Logical Operator'
         */
        if ((KeBPCR_d_InputOvrdEnbl_OVUV & ((uint16)2U)) > ((uint16)0U))
        {
            /* Switch: '<S245>/Switch' incorporates:
             *  Constant: '<S373>/Calib'
             */
            VeBPCI_U_BatVoltModMaxArb = KeBPCR_U_BatVoltModMaxArbOvrd;
        }

        /* End of Switch: '<S245>/Switch22' */
        /* End of Outputs for SubSystem: '<S245>/Bit Selector3' */
    }
    else
    {
        /* Switch: '<S245>/Switch1' incorporates:
         *  Inport: '<Root>/VeHVTR_U_HV_BatVoltModMinArb'
         *  SignalConversion generated from: '<S2>/VeBPCI_U_BatVoltModMinArb_Init_Read'
         *  SignalConversion generated from: '<S5>/VeBPCI_U_BatVoltModMinArb_Init_write'
         */
        VeBPCI_U_BatVoltModMinArb =
            Rte_IrvRead_BPCR_MedTEB_VeBPCI_U_BatVoltModMinArb_Init_write_IRV();

        /* Switch: '<S245>/Switch' incorporates:
         *  Inport: '<Root>/VeHVTR_U_HV_BatVoltModMaxArb'
         *  SignalConversion generated from: '<S2>/VeBPCI_U_BatVoltModMaxArb_Init_Read'
         *  SignalConversion generated from: '<S5>/VeBPCI_U_BatVoltModMaxArb_Init_write'
         */
        VeBPCI_U_BatVoltModMaxArb =
            Rte_IrvRead_BPCR_MedTEB_VeBPCI_U_BatVoltModMaxArb_Init_write_IRV();
    }

    /* End of Switch: '<S245>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeTHMR_b_HVBR_OvrdReq' */
    (void)Rte_Read_VeTHMR_b_HVBR_OvrdReq_Value(&rtb_Switch_bs);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/BPCR_MedTEB'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/BPCC_HVBatRdy'
     */
    /* Logic: '<S240>/Logical3' incorporates:
     *  Constant: '<S253>/Calib'
     *  Logic: '<S240>/Logical1'
     *  Merge: '<Root>/Merge_107_Irv'
     *  Merge: '<Root>/Merge_118_Irv'
     *  Merge: '<Root>/Merge_143_Irv'
     *  RelationalOperator: '<S240>/Comparison'
     *  SignalConversion generated from: '<S2>/VeBPCR_U_CellVoltHighThrsh_read'
     *  SignalConversion generated from: '<S2>/VeBPCR_U_HV_BatModVoltMax_read'
     *  SignalConversion generated from: '<S2>/VeBPCR_b_HV_BatModVoltMaxFA_read'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o =
        (((Rte_IrvRead_BPCR_MedTEB_HV_BatModVoltMax_write_IRV() >
           Rte_IrvRead_BPCR_MedTEB_CellVoltHighThrsh_write_IRV()) &&
          (!Rte_IrvRead_BPCR_MedTEB_HV_BatModVoltMaxFA_write_IRV())) &&
         (KeBPCR_b_CheckOV));

    /* Outputs for Atomic SubSystem: '<S240>/Debounce3' */
    /* Outputs for Atomic SubSystem: '<S249>/EdgeBi' */
    /* RelationalOperator: '<S265>/Not Equal' incorporates:
     *  UnitDelay: '<S265>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__e2 =
        (rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o !=
         BPCR_ac_DW.UnitDelay_DSTATE_mg);

    /* Update for UnitDelay: '<S265>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_mg = rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o;

    /* End of Outputs for SubSystem: '<S249>/EdgeBi' */

    /* Logic: '<S249>/Logical1' incorporates:
     *  UnitDelay: '<S249>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__m2 =
        (rtb_TmpSignalConversionAtVeBPCR_b_HV__e2 ||
         (BPCR_ac_DW.UnitDelay1_DSTATE_bx));

    /* Outputs for Atomic SubSystem: '<S249>/Signal Latch On With Reset' */
    /* Logic: '<S266>/OR1' incorporates:
     *  Logic: '<S266>/NOT'
     *  Logic: '<S266>/OR'
     *  UnitDelay: '<S249>/Unit Delay3'
     *  UnitDelay: '<S266>/Unit Delay'
     */
    BPCR_ac_DW.UnitDelay_DSTATE_ar = ((BPCR_ac_DW.UnitDelay3_DSTATE) ||
        ((!rtb_TmpSignalConversionAtVeBPCR_b_HV__m2) &&
         (BPCR_ac_DW.UnitDelay_DSTATE_ar)));

    /* End of Outputs for SubSystem: '<S249>/Signal Latch On With Reset' */

    /* Switch: '<S249>/Switch2' incorporates:
     *  Constant: '<S249>/Constant Value2'
     *  Constant: '<S249>/Constant Value3'
     */
    if (BPCR_ac_DW.UnitDelay_DSTATE_ar)
    {
        rtb_OR1_mx_0 = ((uint16)1U);
    }
    else
    {
        rtb_OR1_mx_0 = ((uint16)0U);
    }

    /* End of Switch: '<S249>/Switch2' */

    /* Switch: '<S268>/Init' incorporates:
     *  Constant: '<S268>/Initial Condition'
     *  Logic: '<S268>/FixPt Logical Operator'
     *  Logic: '<S268>/Logical2'
     *  Sum: '<S249>/Sum1'
     *  UnitDelay: '<S268>/FixPt Unit Delay2'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__m2 || (((sint32)
            BPCR_ac_DW.FixPtUnitDelay2_DSTATE) == 0))
    {
        BPCR_ac_DW.FixPtUnitDelay1_DSTATE = ((uint16)0U);
    }

    BPCR_ac_DW.FixPtUnitDelay1_DSTATE = (uint16)(((uint32)rtb_OR1_mx_0) +
        ((uint32)BPCR_ac_DW.FixPtUnitDelay1_DSTATE));

    /* RelationalOperator: '<S249>/Equal1' incorporates:
     *  Constant: '<S251>/Calib'
     *  UnitDelay: '<S249>/Unit Delay1'
     */
    BPCR_ac_DW.UnitDelay1_DSTATE_bx = (BPCR_ac_DW.FixPtUnitDelay1_DSTATE >=
        KeBPCR_Cnt_OVDebounce);

    /* Switch: '<S249>/Switch' incorporates:
     *  Logic: '<S267>/Logical2'
     *  Switch: '<S267>/Init'
     *  UnitDelay: '<S249>/Unit Delay1'
     *  UnitDelay: '<S267>/FixPt Unit Delay1'
     *  UnitDelay: '<S267>/FixPt Unit Delay2'
     */
    if (BPCR_ac_DW.UnitDelay1_DSTATE_bx)
    {
        BPCR_ac_DW.FixPtUnitDelay1_DSTATE_j =
            rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o;
    }
    else
    {
        if (((sint32)BPCR_ac_DW.FixPtUnitDelay2_DSTATE_g) == 0)
        {
            /* Switch: '<S267>/Init' incorporates:
             *  UnitDelay: '<S267>/FixPt Unit Delay1'
             */
            BPCR_ac_DW.FixPtUnitDelay1_DSTATE_j =
                rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o;
        }
    }

    /* End of Switch: '<S249>/Switch' */

    /* Update for UnitDelay: '<S249>/Unit Delay3' */
    BPCR_ac_DW.UnitDelay3_DSTATE = rtb_TmpSignalConversionAtVeBPCR_b_HV__e2;

    /* Update for UnitDelay: '<S268>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S268>/FixPt Constant'
     */
    BPCR_ac_DW.FixPtUnitDelay2_DSTATE = ((uint8)1U);

    /* Switch: '<S268>/Reset' */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__m2)
    {
        /* Switch: '<S268>/Init' incorporates:
         *  Constant: '<S268>/Initial Condition'
         *  UnitDelay: '<S268>/FixPt Unit Delay1'
         */
        BPCR_ac_DW.FixPtUnitDelay1_DSTATE = ((uint16)0U);
    }

    /* End of Switch: '<S268>/Reset' */

    /* Update for UnitDelay: '<S267>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S267>/FixPt Constant'
     */
    BPCR_ac_DW.FixPtUnitDelay2_DSTATE_g = ((uint8)1U);

    /* End of Outputs for SubSystem: '<S240>/Debounce3' */

    /* Logic: '<S240>/Logical' incorporates:
     *  Constant: '<S254>/Calib'
     *  Logic: '<S240>/Logical2'
     *  Merge: '<Root>/Merge_115_Irv'
     *  Merge: '<Root>/Merge_151_Irv'
     *  Merge: '<Root>/Merge_152_Irv'
     *  RelationalOperator: '<S240>/Comparison3'
     *  SignalConversion generated from: '<S2>/VeBPCR_U_CellVoltLowThrsh_read'
     *  SignalConversion generated from: '<S2>/VeBPCR_U_HV_BatModVoltMin_read'
     *  SignalConversion generated from: '<S2>/VeBPCR_b_HV_BatModVoltMinFA_read'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o =
        (((Rte_IrvRead_BPCR_MedTEB_HV_BatModVoltMin_write_IRV() <
           Rte_IrvRead_BPCR_MedTEB_CellVoltLowThrsh_write_IRV()) &&
          (!Rte_IrvRead_BPCR_MedTEB_HV_BatModVoltMinFA_write_IRV())) &&
         (KeBPCR_b_CheckUV));

    /* Outputs for Atomic SubSystem: '<S240>/Debounce2' */
    /* Outputs for Atomic SubSystem: '<S248>/EdgeBi' */
    /* RelationalOperator: '<S261>/Not Equal' incorporates:
     *  UnitDelay: '<S261>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__e2 =
        (rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o !=
         BPCR_ac_DW.UnitDelay_DSTATE_jl);

    /* Update for UnitDelay: '<S261>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_jl = rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o;

    /* End of Outputs for SubSystem: '<S248>/EdgeBi' */

    /* Logic: '<S248>/Logical1' incorporates:
     *  UnitDelay: '<S248>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__m2 =
        (rtb_TmpSignalConversionAtVeBPCR_b_HV__e2 ||
         (BPCR_ac_DW.UnitDelay1_DSTATE_f));

    /* Outputs for Atomic SubSystem: '<S248>/Signal Latch On With Reset' */
    /* Logic: '<S262>/OR1' incorporates:
     *  Logic: '<S262>/NOT'
     *  Logic: '<S262>/OR'
     *  UnitDelay: '<S248>/Unit Delay3'
     *  UnitDelay: '<S262>/Unit Delay'
     */
    BPCR_ac_DW.UnitDelay_DSTATE_ef = ((BPCR_ac_DW.UnitDelay3_DSTATE_j) ||
        ((!rtb_TmpSignalConversionAtVeBPCR_b_HV__m2) &&
         (BPCR_ac_DW.UnitDelay_DSTATE_ef)));

    /* End of Outputs for SubSystem: '<S248>/Signal Latch On With Reset' */

    /* Switch: '<S248>/Switch2' incorporates:
     *  Constant: '<S248>/Constant Value2'
     *  Constant: '<S248>/Constant Value3'
     */
    if (BPCR_ac_DW.UnitDelay_DSTATE_ef)
    {
        rtb_OR1_mx_0 = ((uint16)1U);
    }
    else
    {
        rtb_OR1_mx_0 = ((uint16)0U);
    }

    /* End of Switch: '<S248>/Switch2' */

    /* Switch: '<S264>/Init' incorporates:
     *  Constant: '<S264>/Initial Condition'
     *  Logic: '<S264>/FixPt Logical Operator'
     *  Logic: '<S264>/Logical2'
     *  Sum: '<S248>/Sum1'
     *  UnitDelay: '<S264>/FixPt Unit Delay2'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__m2 || (((sint32)
            BPCR_ac_DW.FixPtUnitDelay2_DSTATE_d) == 0))
    {
        BPCR_ac_DW.FixPtUnitDelay1_DSTATE_c = ((uint16)0U);
    }

    BPCR_ac_DW.FixPtUnitDelay1_DSTATE_c = (uint16)(((uint32)rtb_OR1_mx_0) +
        ((uint32)BPCR_ac_DW.FixPtUnitDelay1_DSTATE_c));

    /* RelationalOperator: '<S248>/Equal1' incorporates:
     *  Constant: '<S252>/Calib'
     *  UnitDelay: '<S248>/Unit Delay1'
     */
    BPCR_ac_DW.UnitDelay1_DSTATE_f = (BPCR_ac_DW.FixPtUnitDelay1_DSTATE_c >=
        KeBPCR_Cnt_UVDebounce);

    /* Switch: '<S248>/Switch' incorporates:
     *  Logic: '<S263>/Logical2'
     *  Switch: '<S263>/Init'
     *  UnitDelay: '<S248>/Unit Delay1'
     *  UnitDelay: '<S263>/FixPt Unit Delay1'
     *  UnitDelay: '<S263>/FixPt Unit Delay2'
     */
    if (BPCR_ac_DW.UnitDelay1_DSTATE_f)
    {
        BPCR_ac_DW.FixPtUnitDelay1_DSTATE_l =
            rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o;
    }
    else
    {
        if (((sint32)BPCR_ac_DW.FixPtUnitDelay2_DSTATE_p) == 0)
        {
            /* Switch: '<S263>/Init' incorporates:
             *  UnitDelay: '<S263>/FixPt Unit Delay1'
             */
            BPCR_ac_DW.FixPtUnitDelay1_DSTATE_l =
                rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o;
        }
    }

    /* End of Switch: '<S248>/Switch' */

    /* Update for UnitDelay: '<S248>/Unit Delay3' */
    BPCR_ac_DW.UnitDelay3_DSTATE_j = rtb_TmpSignalConversionAtVeBPCR_b_HV__e2;

    /* Update for UnitDelay: '<S264>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S264>/FixPt Constant'
     */
    BPCR_ac_DW.FixPtUnitDelay2_DSTATE_d = ((uint8)1U);

    /* Switch: '<S264>/Reset' */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__m2)
    {
        /* Switch: '<S264>/Init' incorporates:
         *  Constant: '<S264>/Initial Condition'
         *  UnitDelay: '<S264>/FixPt Unit Delay1'
         */
        BPCR_ac_DW.FixPtUnitDelay1_DSTATE_c = ((uint16)0U);
    }

    /* End of Switch: '<S264>/Reset' */

    /* Update for UnitDelay: '<S263>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S263>/FixPt Constant'
     */
    BPCR_ac_DW.FixPtUnitDelay2_DSTATE_p = ((uint8)1U);

    /* End of Outputs for SubSystem: '<S240>/Debounce2' */

    /* Switch: '<S240>/Switch' */
    if (rtb_Switch_bs)
    {
        /* Switch: '<S240>/Switch' incorporates:
         *  Constant: '<S240>/FALSE Constant'
         */
        rtb_Switch_bs = false;
    }
    else
    {
        /* Switch: '<S240>/Switch' */
        rtb_Switch_bs = VeBPCR_b_HV_BatRdy_Tmot;
    }

    /* End of Switch: '<S240>/Switch' */

    /* Outputs for Atomic SubSystem: '<S240>/Debounce1' */
    /* Outputs for Atomic SubSystem: '<S247>/EdgeBi' */
    /* RelationalOperator: '<S257>/Not Equal' incorporates:
     *  UnitDelay: '<S257>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o = (rtb_Switch_bs !=
        BPCR_ac_DW.UnitDelay_DSTATE_gq);

    /* Update for UnitDelay: '<S257>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_gq = rtb_Switch_bs;

    /* End of Outputs for SubSystem: '<S247>/EdgeBi' */

    /* Logic: '<S247>/Logical1' incorporates:
     *  UnitDelay: '<S247>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__e2 =
        (rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o ||
         (BPCR_ac_DW.UnitDelay1_DSTATE_n));

    /* Outputs for Atomic SubSystem: '<S247>/Signal Latch On With Reset' */
    /* Logic: '<S258>/OR1' incorporates:
     *  Logic: '<S258>/NOT'
     *  Logic: '<S258>/OR'
     *  UnitDelay: '<S247>/Unit Delay3'
     *  UnitDelay: '<S258>/Unit Delay'
     */
    BPCR_ac_DW.UnitDelay_DSTATE_f2 = ((BPCR_ac_DW.UnitDelay3_DSTATE_f) ||
        ((!rtb_TmpSignalConversionAtVeBPCR_b_HV__e2) &&
         (BPCR_ac_DW.UnitDelay_DSTATE_f2)));

    /* End of Outputs for SubSystem: '<S247>/Signal Latch On With Reset' */

    /* Switch: '<S247>/Switch2' incorporates:
     *  Constant: '<S247>/Constant Value2'
     *  Constant: '<S247>/Constant Value3'
     */
    if (BPCR_ac_DW.UnitDelay_DSTATE_f2)
    {
        rtb_OR1_mx_0 = ((uint16)1U);
    }
    else
    {
        rtb_OR1_mx_0 = ((uint16)0U);
    }

    /* End of Switch: '<S247>/Switch2' */

    /* Switch: '<S260>/Init' incorporates:
     *  Constant: '<S260>/Initial Condition'
     *  Logic: '<S260>/FixPt Logical Operator'
     *  Logic: '<S260>/Logical2'
     *  Sum: '<S247>/Sum1'
     *  UnitDelay: '<S260>/FixPt Unit Delay2'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__e2 || (((sint32)
            BPCR_ac_DW.FixPtUnitDelay2_DSTATE_dd) == 0))
    {
        BPCR_ac_DW.FixPtUnitDelay1_DSTATE_e = ((uint16)0U);
    }

    BPCR_ac_DW.FixPtUnitDelay1_DSTATE_e = (uint16)(((uint32)rtb_OR1_mx_0) +
        ((uint32)BPCR_ac_DW.FixPtUnitDelay1_DSTATE_e));

    /* RelationalOperator: '<S247>/Equal1' incorporates:
     *  Constant: '<S250>/Calib'
     *  UnitDelay: '<S247>/Unit Delay1'
     */
    BPCR_ac_DW.UnitDelay1_DSTATE_n = (BPCR_ac_DW.FixPtUnitDelay1_DSTATE_e >=
        KeBPCR_Cnt_HVBatRdyDebounce);

    /* Switch: '<S247>/Switch' incorporates:
     *  Logic: '<S259>/Logical2'
     *  Switch: '<S259>/Init'
     *  UnitDelay: '<S247>/Unit Delay1'
     *  UnitDelay: '<S259>/FixPt Unit Delay1'
     *  UnitDelay: '<S259>/FixPt Unit Delay2'
     */
    if (BPCR_ac_DW.UnitDelay1_DSTATE_n)
    {
        BPCR_ac_DW.FixPtUnitDelay1_DSTATE_m = rtb_Switch_bs;
    }
    else
    {
        if (((sint32)BPCR_ac_DW.FixPtUnitDelay2_DSTATE_a) == 0)
        {
            /* Switch: '<S259>/Init' incorporates:
             *  UnitDelay: '<S259>/FixPt Unit Delay1'
             */
            BPCR_ac_DW.FixPtUnitDelay1_DSTATE_m = rtb_Switch_bs;
        }
    }

    /* End of Switch: '<S247>/Switch' */

    /* Update for UnitDelay: '<S247>/Unit Delay3' */
    BPCR_ac_DW.UnitDelay3_DSTATE_f = rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o;

    /* Update for UnitDelay: '<S260>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S260>/FixPt Constant'
     */
    BPCR_ac_DW.FixPtUnitDelay2_DSTATE_dd = ((uint8)1U);

    /* Switch: '<S260>/Reset' */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__e2)
    {
        /* Switch: '<S260>/Init' incorporates:
         *  Constant: '<S260>/Initial Condition'
         *  UnitDelay: '<S260>/FixPt Unit Delay1'
         */
        BPCR_ac_DW.FixPtUnitDelay1_DSTATE_e = ((uint16)0U);
    }

    /* End of Switch: '<S260>/Reset' */

    /* Update for UnitDelay: '<S259>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S259>/FixPt Constant'
     */
    BPCR_ac_DW.FixPtUnitDelay2_DSTATE_a = ((uint8)1U);

    /* End of Outputs for SubSystem: '<S240>/Debounce1' */

    /* Switch: '<S240>/Switch1' incorporates:
     *  Constant: '<S255>/Calib'
     */
    if (KeBPCR_b_HVBatCntctr_OpnPndgOvrd)
    {
        /* Switch: '<S240>/Switch1' incorporates:
         *  Constant: '<S256>/Calib'
         */
        rtb_Switch_bs = KeBPCR_b_HVBatCntctr_OpnPndgVal;
    }
    else
    {
        /* Switch: '<S240>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_84'
         *  SignalConversion generated from: '<S2>/VeBPCR_b_HV_BatCntctrOpenPending_read'
         */
        rtb_Switch_bs =
            Rte_IrvRead_BPCR_MedTEB_HV_BatCntctrOpenPending_write_IRV();
    }

    /* End of Switch: '<S240>/Switch1' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/BatCntctr_Arb'
     */
    /* Switch: '<S242>/Switch1' incorporates:
     *  Constant: '<S305>/Calib'
     */
    if (KeBPCR_b_BPCMRedundantCAN)
    {
        /* Switch: '<S242>/Switch1' incorporates:
         *  Constant: '<S309>/Constant1'
         *  Constant: '<S309>/Constant2'
         *  Constant: '<S310>/Constant1'
         *  Constant: '<S310>/Constant2'
         *  DataStoreRead: '<S309>/StatusByte_LosCommBECM_A_CANC11'
         *  DataStoreRead: '<S310>/StatusByte_LosCommBECM_A'
         *  Logic: '<S242>/Logical1'
         *  Logic: '<S309>/Logical Operator'
         *  Logic: '<S310>/Logical Operator'
         *  RelationalOperator: '<S309>/Relational Operator1'
         *  RelationalOperator: '<S309>/Relational Operator2'
         *  RelationalOperator: '<S310>/Relational Operator1'
         *  RelationalOperator: '<S310>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S309>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S309>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S310>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S310>/Bitwise Operator2'
         */
        rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o =
            ((((BPCR_ac_DW.StatusByte_LosCommBECM_A_CANC11 & ((uint8)1U)) >
               ((uint8)0U)) && ((BPCR_ac_DW.StatusByte_LosCommBECM_A_CANC11 &
                ((uint8)64U)) == ((uint8)0U))) &&
             (((BPCR_ac_DW.StatusByte_LosCommBECM_A & ((uint8)1U)) > ((uint8)0U))
              && ((BPCR_ac_DW.StatusByte_LosCommBECM_A & ((uint8)64U)) ==
                  ((uint8)0U))));
    }
    else
    {
        /* Switch: '<S242>/Switch1' incorporates:
         *  Constant: '<S310>/Constant1'
         *  Constant: '<S310>/Constant2'
         *  DataStoreRead: '<S310>/StatusByte_LosCommBECM_A'
         *  Logic: '<S310>/Logical Operator'
         *  RelationalOperator: '<S310>/Relational Operator1'
         *  RelationalOperator: '<S310>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S310>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S310>/Bitwise Operator2'
         */
        rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o =
            (((BPCR_ac_DW.StatusByte_LosCommBECM_A & ((uint8)1U)) > ((uint8)0U))
             && ((BPCR_ac_DW.StatusByte_LosCommBECM_A & ((uint8)64U)) == ((uint8)
               0U)));
    }

    /* End of Switch: '<S242>/Switch1' */

    /* UnitDelay: '<S242>/Unit Delay1' incorporates:
     *  SignalConversion generated from: '<S242>/XeBPCR_b_PWM_Present1'
     */
#if Rte_SysCon_Variant_BPCR_3

    /* VariantMerge generated from: '<S242>/XeBPCR_b_PWM_Present1' */
    rtb_VariantMerge_For_Variant_Source_Xe_p = BPCR_ac_DW.UnitDelay1_DSTATE_b;

#else

    /* VariantMerge generated from: '<S242>/XeBPCR_b_PWM_Present1' incorporates:
     *  Constant: '<S242>/TRUE Constant'
     *  SignalConversion generated from: '<S242>/XeBPCR_b_PWM_Present1'
     */
    rtb_VariantMerge_For_Variant_Source_Xe_p = true;

#endif

    /* End of UnitDelay: '<S242>/Unit Delay1' */

    /* If: '<S242>/If' incorporates:
     *  Constant: '<S308>/Calib'
     *  Constant: '<S313>/Constant'
     *  Constant: '<S314>/Constant'
     *  Inport: '<Root>/VeCSVR_v_VehSpd'
     *  Logic: '<S242>/Logical'
     *  Logic: '<S242>/Logical2'
     *  RelationalOperator: '<S302>/Comparison1'
     *  RelationalOperator: '<S302>/Comparison5'
     *  Switch: '<S316>/Switch1'
     *  Switch: '<S316>/Switch2'
     */
    if (KeBPCR_b_UseCANCntctrSts)
    {
        /* Outputs for IfAction SubSystem: '<S242>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S304>/Action Port'
         */
        /* Merge: '<S242>/Merge' incorporates:
         *  Inport: '<S304>/BatCntctrStat'
         *  SignalConversion generated from: '<S2>/VeBPCR_e_HV_BatCntctrStat_read'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_dd =
            rtb_TmpSignalConversionAtVeBPCR_e_HV_Bat;

        /* Merge: '<S242>/Merge1' incorporates:
         *  Inport: '<S304>/BatCntctrStat_FA'
         */
        rtb_VariantMerge_For_Variant_Source_Xe_p =
            rtb_TmpSignalConversionAtVeBPCR_b_HV__os;

        /* RelationalOperator: '<S304>/Comparison4' incorporates:
         *  Constant: '<S304>/TRUE Constant'
         */
        rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o =
            (rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o == true);

        /* Outputs for Atomic SubSystem: '<S304>/EdgeFalling' */
        /* Logic: '<S320>/AND' incorporates:
         *  Logic: '<S320>/OR1'
         *  UnitDelay: '<S320>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeBPCR_b_HV__e2 =
            ((!rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o) &&
             (BPCR_ac_DW.UnitDelay_DSTATE_b));

        /* Update for UnitDelay: '<S320>/Unit Delay' */
        BPCR_ac_DW.UnitDelay_DSTATE_b = rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o;

        /* End of Outputs for SubSystem: '<S304>/EdgeFalling' */

        /* Outputs for Atomic SubSystem: '<S304>/Counter Reset  Enabled ' */
        /* Switch: '<S319>/Switch' incorporates:
         *  Constant: '<S319>/Constant Value2'
         *  Logic: '<S304>/Logical1'
         *  Switch: '<S319>/Switch2'
         *  UnitDelay: '<S304>/Unit Delay'
         *  UnitDelay: '<S319>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVeBPCR_b_HV__e2 ||
                (BPCR_ac_DW.UnitDelay_DSTATE_h3))
        {
            BPCR_ac_DW.UnitDelay_DSTATE_l = ((uint16)0U);
        }
        else
        {
            if (rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o)
            {
                /* UnitDelay: '<S319>/Unit Delay' incorporates:
                 *  Constant: '<S319>/Constant Value1'
                 *  Sum: '<S319>/Subtraction'
                 *  Switch: '<S319>/Switch2'
                 */
                BPCR_ac_DW.UnitDelay_DSTATE_l = (uint16)(((uint32)((uint16)1U))
                    + ((uint32)BPCR_ac_DW.UnitDelay_DSTATE_l));
            }
        }

        /* End of Switch: '<S319>/Switch' */
        /* End of Outputs for SubSystem: '<S304>/Counter Reset  Enabled ' */
        /* End of Outputs for SubSystem: '<S242>/If Action Subsystem3' */
        (void)Rte_Read_VeCSVR_v_VehSpd_Value(&tmpRead);

        /* Outputs for IfAction SubSystem: '<S242>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S304>/Action Port'
         */
        /* RelationalOperator: '<S304>/Comparison' incorporates:
         *  Inport: '<Root>/VeCSVR_v_VehSpd'
         *  Lookup_n-D: '<S321>/Vector'
         *  UnitDelay: '<S304>/Unit Delay'
         *  UnitDelay: '<S319>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_h3 = (((float32)
            BPCR_ac_DW.UnitDelay_DSTATE_l) >= look1_iflf_binlca_16a(tmpRead, ((
            const float32 *)&(KxBPCR_Cnt_HVCntctrOpReqCntr[0])), ((const float32
            *)&(KtBPCR_Cnt_HVCntctrOpReqCntr[0])), 4U));

        /* Outputs for Atomic SubSystem: '<S304>/Signal Latch On With Reset' */
        /* Logic: '<S322>/OR1' incorporates:
         *  Logic: '<S322>/NOT'
         *  Logic: '<S322>/OR'
         *  UnitDelay: '<S304>/Unit Delay'
         *  UnitDelay: '<S322>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_nt = ((BPCR_ac_DW.UnitDelay_DSTATE_h3) || ((
            !rtb_TmpSignalConversionAtVeBPCR_b_HV__e2) &&
            (BPCR_ac_DW.UnitDelay_DSTATE_nt)));

        /* End of Outputs for SubSystem: '<S304>/Signal Latch On With Reset' */

        /* Switch: '<S304>/Switch' */
        if (rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o)
        {
            /* Merge: '<S242>/Merge2' */
            VeBPCR_b_HV_BatCntctrOpenReq_Test = BPCR_ac_DW.UnitDelay_DSTATE_nt;
        }

        /* End of Switch: '<S304>/Switch' */

        /* Merge: '<S242>/Merge3' incorporates:
         *  Constant: '<S304>/Constant Value1'
         *  SignalConversion generated from: '<S304>/BatCntctr_DebugSgnl'
         */
        VeBPCR_k_BatCntctr_DebugSgnl = 0;

        /* End of Outputs for SubSystem: '<S242>/If Action Subsystem3' */
    }
    else if (rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o &&
             rtb_VariantMerge_For_Variant_Source_Xe_p)
    {
        /* Outputs for IfAction SubSystem: '<S242>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S303>/Action Port'
         */
        /* Merge: '<S242>/Merge1' incorporates:
         *  Constant: '<S318>/Calib'
         *  SignalConversion generated from: '<S303>/BatCntctrStat_FA_Out'
         */
        rtb_VariantMerge_For_Variant_Source_Xe_p = KeBPCR_b_BatCntctrStat_FA_Cal;

        /* Merge: '<S242>/Merge2' incorporates:
         *  Constant: '<S317>/Calib'
         *  SignalConversion generated from: '<S303>/BatCntctrOpenReq'
         */
        VeBPCR_b_HV_BatCntctrOpenReq_Test = KeBPCR_b_BatCntctrOpnRq_Cal;

        /* Merge: '<S242>/Merge3' incorporates:
         *  Constant: '<S303>/Constant Value1'
         *  SignalConversion generated from: '<S303>/BatCntctr_DebugSgnl'
         */
        VeBPCR_k_BatCntctr_DebugSgnl = 1;

        /* End of Outputs for SubSystem: '<S242>/If Action Subsystem2' */
    }
    else if (!rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o)
    {
        /* Outputs for IfAction SubSystem: '<S242>/If Action Subsystem' incorporates:
         *  ActionPort: '<S301>/Action Port'
         */
        /* Merge: '<S242>/Merge' incorporates:
         *  Inport: '<S301>/BatCntctrStat'
         *  SignalConversion generated from: '<S2>/VeBPCR_e_HV_BatCntctrStat_read'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_dd =
            rtb_TmpSignalConversionAtVeBPCR_e_HV_Bat;

        /* Merge: '<S242>/Merge1' incorporates:
         *  Inport: '<S301>/BatCntctrStat_FA'
         */
        rtb_VariantMerge_For_Variant_Source_Xe_p =
            rtb_TmpSignalConversionAtVeBPCR_b_HV__os;

        /* Merge: '<S242>/Merge3' incorporates:
         *  Constant: '<S301>/Constant Value1'
         *  SignalConversion generated from: '<S301>/BatCntctr_DebugSgnl'
         */
        VeBPCR_k_BatCntctr_DebugSgnl = 2;

        /* End of Outputs for SubSystem: '<S242>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S242>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S302>/Action Port'
         */
        if (rtb_TmpSignalConversionAtVeBPCR_e_PWMDec == CeBPCR_e_ClosedCntctrSts)
        {
            /* Switch: '<S316>/Switch1' incorporates:
             *  Constant: '<S311>/Constant'
             *  Merge: '<S242>/Merge'
             */
            BPCR_ac_DW.UnitDelay_DSTATE_dd = CeHVTR_e_Closed;
        }
        else
        {
            if (rtb_TmpSignalConversionAtVeBPCR_e_PWMDec ==
                    CeBPCR_e_OpenedCntctrSts)
            {
                /* Switch: '<S316>/Switch2' incorporates:
                 *  Constant: '<S312>/Constant'
                 *  Merge: '<S242>/Merge'
                 *  Switch: '<S316>/Switch1'
                 */
                BPCR_ac_DW.UnitDelay_DSTATE_dd = CeHVTR_e_Open;
            }
        }

        /* Switch: '<S302>/Switch' incorporates:
         *  Constant: '<S314>/Constant'
         *  Constant: '<S315>/Constant'
         *  RelationalOperator: '<S302>/Comparison1'
         *  RelationalOperator: '<S302>/Comparison2'
         *  Switch: '<S316>/Switch1'
         *  Switch: '<S316>/Switch2'
         */
        if (rtb_TmpSignalConversionAtVeBPCR_e_PWMDec == CeBPCR_e_OpenCntctrReq)
        {
            /* Merge: '<S242>/Merge2' incorporates:
             *  Constant: '<S302>/TRUE Constant'
             */
            VeBPCR_b_HV_BatCntctrOpenReq_Test = true;
        }
        else
        {
            /* Merge: '<S242>/Merge2' incorporates:
             *  UnitDelay: '<S242>/Unit Delay2'
             */
            VeBPCR_b_HV_BatCntctrOpenReq_Test = BPCR_ac_DW.UnitDelay2_DSTATE_h;
        }

        /* End of Switch: '<S302>/Switch' */

        /* Merge: '<S242>/Merge1' incorporates:
         *  Constant: '<S302>/FALSE Constant1'
         *  SignalConversion generated from: '<S302>/BatCntctrStat_FA_Out'
         */
        rtb_VariantMerge_For_Variant_Source_Xe_p = false;

        /* Merge: '<S242>/Merge3' incorporates:
         *  Constant: '<S302>/Constant Value1'
         *  SignalConversion generated from: '<S302>/BatCntctr_DebugSgnl'
         */
        VeBPCR_k_BatCntctr_DebugSgnl = 3;

        /* End of Outputs for SubSystem: '<S242>/If Action Subsystem1' */
    }

    /* End of If: '<S242>/If' */

    /* Switch: '<S242>/Switch' incorporates:
     *  Constant: '<S306>/Calib'
     */
    if (KeBPCR_b_BatCntctrOpnRq_Ovrd)
    {
        /* Switch: '<S242>/Switch' incorporates:
         *  Constant: '<S307>/Calib'
         */
        rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o = KeBPCR_b_BatCntctrOpnRq_Val;
    }
    else
    {
        /* Switch: '<S242>/Switch' */
        rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o =
            VeBPCR_b_HV_BatCntctrOpenReq_Test;
    }

    /* End of Switch: '<S242>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ThrmlRnawyWarn_Arb'
     */
    /* Update for UnitDelay: '<S242>/Unit Delay1' incorporates:
     *  Logic: '<S246>/Logical3'
     */
#if Rte_SysCon_Variant_BPCR_3

    BPCR_ac_DW.UnitDelay1_DSTATE_b = VeBPCR_b_PWM_CntctrCntrl_Fail;

    /* VariantMerge generated from: '<S246>/XeBPCR_b_PWM_Present' */
    rtb_VariantMerge_For_Variant_Source_XeBP = !VeBPCR_b_PWM_CntctrCntrl_Fail;

#endif

    /* End of Update for UnitDelay: '<S242>/Unit Delay1' */

    /* Update for UnitDelay: '<S242>/Unit Delay2' */
    BPCR_ac_DW.UnitDelay2_DSTATE_h = VeBPCR_b_HV_BatCntctrOpenReq_Test;

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ThrmlRnawyWarn_Arb'
     */
    /* SignalConversion generated from: '<S246>/XeBPCR_b_PWM_Present' */
#if !Rte_SysCon_Variant_BPCR_3

    /* VariantMerge generated from: '<S246>/XeBPCR_b_PWM_Present' incorporates:
     *  Constant: '<S246>/FALSE Constant'
     */
    rtb_VariantMerge_For_Variant_Source_XeBP = false;

#endif

    /* End of SignalConversion generated from: '<S246>/XeBPCR_b_PWM_Present' */

    /* Switch: '<S246>/Switch1' incorporates:
     *  Constant: '<S380>/Calib'
     *  Constant: '<S382>/Constant1'
     *  Constant: '<S382>/Constant2'
     *  Constant: '<S383>/Constant1'
     *  Constant: '<S383>/Constant2'
     *  DataStoreRead: '<S382>/StatusByte_LosCommBECM_A_CANC11'
     *  DataStoreRead: '<S383>/StatusByte_LosCommBECM_A'
     *  Logic: '<S246>/Logical4'
     *  Logic: '<S382>/Logical Operator'
     *  Logic: '<S383>/Logical Operator'
     *  RelationalOperator: '<S382>/Relational Operator1'
     *  RelationalOperator: '<S382>/Relational Operator2'
     *  RelationalOperator: '<S383>/Relational Operator1'
     *  RelationalOperator: '<S383>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S382>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S382>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S383>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S383>/Bitwise Operator2'
     */
    if (KeBPCR_b_BPCMRedundantCAN)
    {
        rtb_TmpSignalConversionAtVeBPCR_b_HV__e2 =
            ((((BPCR_ac_DW.StatusByte_LosCommBECM_A_CANC11 & ((uint8)1U)) >
               ((uint8)0U)) && ((BPCR_ac_DW.StatusByte_LosCommBECM_A_CANC11 &
                ((uint8)64U)) == ((uint8)0U))) &&
             (((BPCR_ac_DW.StatusByte_LosCommBECM_A & ((uint8)1U)) > ((uint8)0U))
              && ((BPCR_ac_DW.StatusByte_LosCommBECM_A & ((uint8)64U)) ==
                  ((uint8)0U))));
    }
    else
    {
        rtb_TmpSignalConversionAtVeBPCR_b_HV__e2 =
            (((BPCR_ac_DW.StatusByte_LosCommBECM_A & ((uint8)1U)) > ((uint8)0U))
             && ((BPCR_ac_DW.StatusByte_LosCommBECM_A & ((uint8)64U)) == ((uint8)
               0U)));
    }

    /* End of Switch: '<S246>/Switch1' */

    /* If: '<S246>/If' incorporates:
     *  Constant: '<S381>/Calib'
     *  Logic: '<S246>/Logical1'
     *  Logic: '<S246>/Logical2'
     *  Logic: '<S246>/Logical5'
     *  Merge: '<Root>/Merge_77'
     *  SignalConversion generated from: '<S2>/VeBPCR_b_ThrmlRnawy_WarnFA_read'
     */
    if ((!rtb_TmpSignalConversionAtVeBPCR_b_HV__e2) &&
            (!Rte_IrvRead_BPCR_MedTEB_HVBat_ThrmlRnawy_WarnFA_Init_write_IRV()))
    {
        /* Outputs for IfAction SubSystem: '<S246>/If Action Subsystem' incorporates:
         *  ActionPort: '<S377>/Action Port'
         */
        /* Merge: '<S246>/Merge2' incorporates:
         *  Constant: '<S384>/Constant'
         *  Merge: '<Root>/Merge_76'
         *  RelationalOperator: '<S377>/Comparison4'
         *  SignalConversion generated from: '<S2>/VeBPCR_e_ThrmlRnawy_Warn_read'
         */
        rtb_VariantMerge_For_Variant_Source_XeBP =
            (Rte_IrvRead_BPCR_MedTEB_HVBat_ThrmlRnawy_Warn_Init_write_IRV() ==
             CeBPCR_e_DetectThrmlRnawy);

        /* Merge: '<S246>/Merge1' incorporates:
         *  Constant: '<S377>/Constant Value'
         *  SignalConversion generated from: '<S377>/ThrmlRnawy_DebugSgnl_CAN'
         */
        VeBPCC_b_ThrmlRnawy_DebugSgnl = 0;

        /* End of Outputs for SubSystem: '<S246>/If Action Subsystem' */
    }
    else if (rtb_VariantMerge_For_Variant_Source_XeBP &&
             (KeBPCR_b_PWMThrmlRnawyEn))
    {
        /* Outputs for IfAction SubSystem: '<S246>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S378>/Action Port'
         */
        /* Merge: '<S246>/Merge2' incorporates:
         *  Constant: '<S385>/Constant'
         *  RelationalOperator: '<S378>/Comparison4'
         *  SignalConversion generated from: '<S2>/VeBPCR_e_PWMDecodedCntctrSts_read'
         */
        rtb_VariantMerge_For_Variant_Source_XeBP =
            (rtb_TmpSignalConversionAtVeBPCR_e_PWMDec ==
             CeBPCR_e_ThrmlRnawy_Warn);

        /* Merge: '<S246>/Merge1' incorporates:
         *  Constant: '<S378>/Constant Value'
         *  SignalConversion generated from: '<S378>/ThrmlRnawy_DebugSgnl_LOC'
         */
        VeBPCC_b_ThrmlRnawy_DebugSgnl = 1;

        /* End of Outputs for SubSystem: '<S246>/If Action Subsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S246>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S379>/Action Port'
         */
        /* Merge: '<S246>/Merge2' incorporates:
         *  Constant: '<S386>/Calib'
         *  SignalConversion generated from: '<S379>/VeBPCR_b_ThrmlRnawyFlg_NoSrc'
         */
        rtb_VariantMerge_For_Variant_Source_XeBP = KeBPCR_b_ThrmlRnawyFlg_NoSrc;

        /* Merge: '<S246>/Merge1' incorporates:
         *  Constant: '<S379>/Constant Value'
         *  SignalConversion generated from: '<S379>/ThrmlRnawy_DebugSgnl_NoSrc'
         */
        VeBPCC_b_ThrmlRnawy_DebugSgnl = 2;

        /* End of Outputs for SubSystem: '<S246>/If Action Subsystem2' */
    }

    /* End of If: '<S246>/If' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/BatShtOff'
     */
    /* SignalConversion generated from: '<S243>/Variant Source2' */
#if Rte_SysCon_Variant_BPCR_5

    /* Outputs for Atomic SubSystem: '<S243>/If Action Subsystem' */
    /* Logic: '<S323>/Logical1' incorporates:
     *  Constant: '<S324>/Constant'
     *  Constant: '<S325>/Constant'
     *  Constant: '<S326>/Constant'
     *  RelationalOperator: '<S323>/Comparison1'
     *  RelationalOperator: '<S323>/Comparison2'
     *  RelationalOperator: '<S323>/Comparison4'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__os =
        ((((rtb_TmpSignalConversionAtVeBPCR_e_HV_Bat == CeHVTR_e_Open) ||
           (rtb_TmpSignalConversionAtVeBPCR_e_HV_Bat == CeHVTR_e_PrechrgFailed))
          || (rtb_TmpSignalConversionAtVeBPCR_e_HV_Bat ==
              CeHVTR_e_PrechrgInhibited)) ||
         rtb_TmpSignalConversionAtVeBPCR_b_HV__os);

    /* Outputs for Atomic SubSystem: '<S323>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S328>/EdgeRising' */
    /* Logic: '<S329>/AND' incorporates:
     *  Logic: '<S329>/OR1'
     *  UnitDelay: '<S329>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__e2 =
        (rtb_TmpSignalConversionAtVeBPCR_b_HV__os &&
         (!BPCR_ac_DW.UnitDelay_DSTATE_in));

    /* Update for UnitDelay: '<S329>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_in = rtb_TmpSignalConversionAtVeBPCR_b_HV__os;

    /* End of Outputs for SubSystem: '<S328>/EdgeRising' */

    /* Switch: '<S328>/Switch1' incorporates:
     *  Logic: '<S328>/OR'
     *  Logic: '<S328>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeBPCR_b_HV__os) ||
            rtb_TmpSignalConversionAtVeBPCR_b_HV__e2)
    {
        /* Sum: '<S328>/Summation' incorporates:
         *  Constant: '<S328>/Constant Value1'
         *  UnitDelay: '<S328>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_iz = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S328>/Summation' incorporates:
         *  Constant: '<S328>/Constant Value'
         *  UnitDelay: '<S328>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_iz = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)BPCR_ac_DW.UnitDelay_DSTATE_iz));

        /* MinMax: '<S328>/Minimum' incorporates:
         *  Constant: '<S327>/Calib'
         */
        if (KeBPCR_Cnt_BatShtOffFlg_Debounce < BPCR_ac_DW.UnitDelay_DSTATE_iz)
        {
            /* Sum: '<S328>/Summation' */
            BPCR_ac_DW.UnitDelay_DSTATE_iz = KeBPCR_Cnt_BatShtOffFlg_Debounce;
        }

        /* End of MinMax: '<S328>/Minimum' */
    }

    /* End of Switch: '<S328>/Switch1' */

    /* VariantMerge generated from: '<S243>/Variant Source2' incorporates:
     *  Constant: '<S327>/Calib'
     *  Logic: '<S328>/AND'
     *  RelationalOperator: '<S328>/Greater  Than'
     *  UnitDelay: '<S328>/Unit Delay'
     */
    BPCR_ac_B.VariantMerge_For_Variant_Source_Variant_ =
        (rtb_TmpSignalConversionAtVeBPCR_b_HV__os &&
         (BPCR_ac_DW.UnitDelay_DSTATE_iz >= KeBPCR_Cnt_BatShtOffFlg_Debounce));

    /* End of Outputs for SubSystem: '<S323>/Turn On Delay Sample1' */
    /* End of Outputs for SubSystem: '<S243>/If Action Subsystem' */
#else

    /* VariantMerge generated from: '<S243>/Variant Source2' incorporates:
     *  Constant: '<S243>/Constant Value'
     *  SignalConversion generated from: '<S243>/Variant Source2'
     */
    BPCR_ac_B.VariantMerge_For_Variant_Source_Variant_ = false;

#endif

    /* End of SignalConversion generated from: '<S243>/Variant Source2' */
#if Rte_SysCon_Variant_BPCR_3

    /* Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid' */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value(&rtb_Logical2_a);

    /* Outputs for Function Call SubSystem: '<S2>/BPCD' */

    /* Logic: '<S269>/NOT4' incorporates:
     *  Constant: '<S270>/Constant'
     *  Constant: '<S271>/Constant'
     *  Constant: '<S277>/Calib'
     *  RelationalOperator: '<S269>/Greater  Than'
     *  RelationalOperator: '<S269>/Greater  Than1'
     */
    VeBPCR_b_EnblCntctrCtrlPerfDTC = (((rtb_TmpSignalConversionAtVePMDR_e_PMM_Po
        == CePMDR_e_PowerMode_Acc) || (rtb_TmpSignalConversionAtVePMDR_e_PMM_Po ==
        CePMDR_e_PowerMode_Run)) || (KeBPCR_b_EnblPWMCntctrCtrlDTC));

    /* RelationalOperator: '<S285>/Relational Operator3' incorporates:
     *  Constant: '<S285>/Constant3'
     *  S-Function (sfix_bitop): '<S285>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__os =
        ((rtb_TmpSignalConversionAtVeDMAB_y_Status & ((uint8)64U)) == ((uint8)0U));

    /* Outputs for Atomic SubSystem: '<S285>/EdgeFalling1' */
    /* Logic: '<S285>/Logical Operator' incorporates:
     *  Logic: '<S288>/OR1'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__e2 =
        !rtb_TmpSignalConversionAtVeBPCR_b_HV__os;

    /* End of Outputs for SubSystem: '<S285>/EdgeFalling1' */

    /* Logic: '<S285>/Logical1' incorporates:
     *  Constant: '<S276>/Calib'
     *  Constant: '<S278>/Calib'
     *  Constant: '<S285>/Constant1'
     *  Logic: '<S269>/Logical1'
     *  Logic: '<S269>/NOT2'
     *  Logic: '<S285>/Logical Operator'
     *  Logic: '<S285>/Logical10'
     *  Logic: '<S285>/Logical12'
     *  RelationalOperator: '<S285>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S285>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_PWMBla = (((((KeBPCR_b_EnblP0ADA_Diag) &&
        (VeBPCR_b_EnblCntctrCtrlPerfDTC)) &&
        (!rtb_TmpSignalConversionAtVeBPCR_b_PWMBla)) && rtb_Logical2_a) &&
        ((!KeBPCR_b_HybBatPosConConCirPer_LtchEnbl) ||
         (((rtb_TmpSignalConversionAtVeDMAB_y_Status & ((uint8)1U)) == ((uint8)
        0U)) || rtb_TmpSignalConversionAtVeBPCR_b_HV__e2)));

    /* Abs: '<S269>/Abs' incorporates:
     *  Constant: '<S274>/Calib'
     *  Sum: '<S269>/Sum'
     */
    rtb_TmpSignalConversionAtVeBPCR_DC_Cntct = fabsf(KeBPCR_DC_PWMOffset -
        rtb_TmpSignalConversionAtVeBPCR_DC_Cntct);

    /* Logic: '<S269>/Logical2' incorporates:
     *  Constant: '<S275>/Calib'
     *  Logic: '<S283>/Logical Operator'
     *  RelationalOperator: '<S283>/Relatonal Operator'
     *  RelationalOperator: '<S283>/Relatonal Operator1'
     *  Sum: '<S283>/Sum1'
     *  Sum: '<S283>/Sum2'
     */
    rtb_Logical2_a = ((rtb_TmpSignalConversionAtVeBPCR_DC_Cntct <=
                       (rtb_DataTypeConversion - KeBPCR_DC_PWMtollerance)) ||
                      (rtb_TmpSignalConversionAtVeBPCR_DC_Cntct >=
                       (rtb_DataTypeConversion + KeBPCR_DC_PWMtollerance)));

    /* Outputs for Atomic SubSystem: '<S269>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S284>/EdgeRising' */
    /* Logic: '<S286>/AND' incorporates:
     *  Logic: '<S286>/OR1'
     *  UnitDelay: '<S286>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__m2 = (rtb_Logical2_a &&
        (!BPCR_ac_DW.UnitDelay_DSTATE_j3));

    /* Update for UnitDelay: '<S286>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_j3 = rtb_Logical2_a;

    /* End of Outputs for SubSystem: '<S284>/EdgeRising' */

    /* Switch: '<S284>/Switch1' incorporates:
     *  Constant: '<S280>/Calib'
     *  Constant: '<S281>/Calib'
     *  Constant: '<S284>/Constant Value1'
     *  Logic: '<S284>/OR'
     *  Logic: '<S284>/OR1'
     *  MinMax: '<S284>/Minimum'
     *  Sum: '<S284>/Summation'
     *  UnitDelay: '<S284>/Unit Delay'
     */
    if ((!rtb_Logical2_a) || rtb_TmpSignalConversionAtVeBPCR_b_HV__m2)
    {
        BPCR_ac_DW.UnitDelay_DSTATE_j = 0.0F;
    }
    else
    {
        BPCR_ac_DW.UnitDelay_DSTATE_j = fminf(KeBPCR_t_PWMmaxWaitTime,
            KeBPCR_t_dtRaster + BPCR_ac_DW.UnitDelay_DSTATE_j);
    }

    /* End of Switch: '<S284>/Switch1' */
    /* End of Outputs for SubSystem: '<S269>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S2>/BPCD' */

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&rtb_Logical5_k);

    /* Outputs for Function Call SubSystem: '<S2>/BPCD' */
    /* Outputs for Atomic SubSystem: '<S269>/Turn On Delay Time' */
    /* Logic: '<S284>/AND' incorporates:
     *  Constant: '<S280>/Calib'
     *  RelationalOperator: '<S284>/Greater  Than'
     *  UnitDelay: '<S284>/Unit Delay'
     */
    VeBPCR_b_PWMCntctrFailCondDbnc = (rtb_Logical2_a &&
        (BPCR_ac_DW.UnitDelay_DSTATE_j >= KeBPCR_t_PWMmaxWaitTime));

    /* End of Outputs for SubSystem: '<S269>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S285>/EdgeFalling1' */
    /* Logic: '<S288>/AND' incorporates:
     *  UnitDelay: '<S288>/Unit Delay'
     */
    rtb_Logical2_a = (rtb_TmpSignalConversionAtVeBPCR_b_HV__e2 &&
                      (BPCR_ac_DW.UnitDelay_DSTATE_hu));

    /* Update for UnitDelay: '<S288>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_hu = rtb_TmpSignalConversionAtVeBPCR_b_HV__os;

    /* End of Outputs for SubSystem: '<S285>/EdgeFalling1' */

    /* Logic: '<S285>/Logical5' incorporates:
     *  Logic: '<S282>/NOT4'
     */
    rtb_Logical5_k = ((rtb_Logical5_k ||
                       rtb_TmpSignalConversionAtVeDFIR_b_PostCo) ||
                      rtb_Logical2_a);

    /* Outputs for Atomic SubSystem: '<S287>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S287>/Counter Reset  Enabled ' */
    /* Switch: '<S294>/Switch1' incorporates:
     *  Constant: '<S279>/Calib'
     *  Logic: '<S269>/Logical'
     *  Logic: '<S269>/NOT3'
     *  Logic: '<S287>/Fail Counter Reset'
     *  Logic: '<S287>/NOT6'
     *  Switch: '<S294>/Switch2'
     *  Switch: '<S295>/Switch1'
     *  UnitDelay: '<S287>/Unit Delay'
     *  UnitDelay: '<S287>/Unit Delay1'
     */
    if ((rtb_Logical5_k || (BPCR_ac_DW.UnitDelay_DSTATE_kv)) ||
            (BPCR_ac_DW.UnitDelay1_DSTATE_a))
    {
        /* Switch: '<S294>/Switch1' incorporates:
         *  Constant: '<S294>/Constant Value2'
         */
        VeBPCR_Cnt_PWMCntctrCtrl_FailCntr = ((uint16)0U);

        /* Switch: '<S295>/Switch1' incorporates:
         *  Constant: '<S295>/Constant Value2'
         */
        VeBPCR_Cnt_PWMCntctrCtrl_SmpCntr = ((uint16)0U);
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeBPCR_b_PWMBla &&
                ((VeBPCR_b_PWMCntctrFailCondDbnc) ||
                 (rtb_TmpSignalConversionAtVeBPCR_b_PWMTim &&
                  (KeBPCR_b_UseOORforDTC))))
        {
            /* Switch: '<S294>/Switch1' incorporates:
             *  Constant: '<S294>/Constant Value1'
             *  Sum: '<S294>/Subtraction'
             *  Switch: '<S294>/Switch2'
             *  UnitDelay: '<S294>/Unit Delay'
             */
            VeBPCR_Cnt_PWMCntctrCtrl_FailCntr = (uint16)(((uint32)((uint16)1U))
                + ((uint32)VeBPCR_Cnt_PWMCntctrCtrl_FailCntr));
        }

        /* Switch: '<S295>/Switch2' */
        if (rtb_TmpSignalConversionAtVeBPCR_b_PWMBla)
        {
            /* Switch: '<S295>/Switch1' incorporates:
             *  Constant: '<S295>/Constant Value1'
             *  Sum: '<S295>/Subtraction'
             *  Switch: '<S295>/Switch2'
             *  UnitDelay: '<S295>/Unit Delay'
             */
            VeBPCR_Cnt_PWMCntctrCtrl_SmpCntr = (uint16)(((uint32)((uint16)1U)) +
                ((uint32)VeBPCR_Cnt_PWMCntctrCtrl_SmpCntr));
        }

        /* End of Switch: '<S295>/Switch2' */
    }

    /* End of Switch: '<S294>/Switch1' */
    /* End of Outputs for SubSystem: '<S287>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S287>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S287>/Greater Than or Equal ' incorporates:
     *  Constant: '<S273>/Calib'
     */
    BPCR_ac_DW.UnitDelay1_DSTATE_a = (VeBPCR_Cnt_PWMCntctrCtrl_FailCntr >=
        KeBPCR_Cnt_PWMdetectFailLim);

    /* Logic: '<S287>/NOT5' incorporates:
     *  Constant: '<S272>/Calib'
     *  Logic: '<S287>/NOT3'
     *  RelationalOperator: '<S287>/Less Than  or Equal'
     */
    BPCR_ac_DW.UnitDelay_DSTATE_kv = ((VeBPCR_Cnt_PWMCntctrCtrl_SmpCntr >=
        KeBPCR_Cnt_PWMdetSmpLim) && (!BPCR_ac_DW.UnitDelay1_DSTATE_a));

    /* Switch: '<S300>/Switch1' incorporates:
     *  Constant: '<S293>/Constant Value'
     *  DataStoreWrite: '<S269>/Data Store Write1'
     *  Switch: '<S299>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        BPCR_ac_DW.NeBPCR_Cnt_PWMCntctrStMFOP = ((uint16)0U);
    }
    else
    {
        if (BPCR_ac_DW.UnitDelay_DSTATE_kv)
        {
            /* MinMax: '<S293>/Minimum2' incorporates:
             *  DataStoreRead: '<S269>/Data Store Read3'
             *  Switch: '<S299>/Switch1'
             */
            if (VeBPCR_Cnt_PWMCntctrCtrl_FailCntr >
                    BPCR_ac_DW.NeBPCR_Cnt_PWMCntctrStMFOP)
            {
                /* DataStoreWrite: '<S269>/Data Store Write1' incorporates:
                 *  Switch: '<S299>/Switch1'
                 */
                BPCR_ac_DW.NeBPCR_Cnt_PWMCntctrStMFOP =
                    VeBPCR_Cnt_PWMCntctrCtrl_FailCntr;
            }

            /* End of MinMax: '<S293>/Minimum2' */
        }
    }

    /* End of Switch: '<S300>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S285>/Fail' incorporates:
     *  EnablePort: '<S290>/Enable'
     */
    if (BPCR_ac_DW.UnitDelay1_DSTATE_a)
    {
        /* Merge: '<S285>/Merge' incorporates:
         *  Constant: '<S296>/Constant'
         *  SignalConversion generated from: '<S290>/FaultSts'
         */
        BPCR_ac_B.Merge_d = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S285>/Fail' */

    /* Outputs for Enabled SubSystem: '<S285>/Init' incorporates:
     *  EnablePort: '<S291>/Enable'
     */
    if (rtb_Logical5_k)
    {
        /* Merge: '<S285>/Merge' incorporates:
         *  Constant: '<S297>/Constant'
         *  SignalConversion generated from: '<S291>/FaultSts'
         */
        BPCR_ac_B.Merge_d = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S285>/Init' */

    /* Outputs for Enabled SubSystem: '<S285>/Pass' incorporates:
     *  EnablePort: '<S292>/Enable'
     */
    if (BPCR_ac_DW.UnitDelay_DSTATE_kv)
    {
        /* Merge: '<S285>/Merge' incorporates:
         *  Constant: '<S298>/Constant'
         *  SignalConversion generated from: '<S292>/FaultSts'
         */
        BPCR_ac_B.Merge_d = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S285>/Pass' */

    /* RelationalOperator: '<S285>/Relational Operator' incorporates:
     *  Constant: '<S289>/Constant'
     *  Merge: '<S285>/Merge'
     */
    VeBPCR_b_PWM_CntctrCntrl_Fail = (BPCR_ac_B.Merge_d == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S2>/BPCD' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* Outport: '<Root>/VeBPCR_b_HV_BatCntctrOpenReq' incorporates:
     *  SignalConversion generated from: '<S2>/BatCntctrOpenReq'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatCntctrOpenReq_Value
        (rtb_TmpSignalConversionAtVeBPCR_b_HV_B_o);

    /* Outport: '<Root>/VeBPCR_e_HV_BatCntctrStat' incorporates:
     *  Merge: '<S242>/Merge'
     *  SignalConversion generated from: '<S2>/BatCntctrStat'
     */
    (void)Rte_Write_VeBPCR_e_HV_BatCntctrStat_Value
        (BPCR_ac_DW.UnitDelay_DSTATE_dd);

    /* Outport: '<Root>/VeBPCR_b_HV_BatCntctrStatFA' incorporates:
     *  SignalConversion generated from: '<S2>/BatCntctrStat_FA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatCntctrStatFA_Value
        (rtb_VariantMerge_For_Variant_Source_Xe_p);

    /* Outport: '<Root>/VeBPCR_b_HVBatCntrWeld_ImpdOpn' incorporates:
     *  SignalConversion generated from: '<S2>/HVBatCntrWeld_ImpdOpnO'
     */
    (void)Rte_Write_VeBPCR_b_HVBatCntrWeld_ImpdOpn_Value
        (rtb_TmpSignalConversionAtVeBPCR_b_HVBatC);

    /* Outport: '<Root>/VeBPCR_b_HV_BatCntctrOpenPending' incorporates:
     *  SignalConversion generated from: '<S2>/HV_BatCntctrOpenPending_Out'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatCntctrOpenPending_Value(rtb_Switch_bs);

    /* Outport: '<Root>/VeBPCR_b_BPCM_OVActv' incorporates:
     *  SignalConversion generated from: '<S2>/Out1'
     *  UnitDelay: '<S267>/FixPt Unit Delay1'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_OVActv_Value
        (BPCR_ac_DW.FixPtUnitDelay1_DSTATE_j);

    /* Outport: '<Root>/VeBPCR_b_BPCM_UVActv' incorporates:
     *  SignalConversion generated from: '<S2>/Out2'
     *  UnitDelay: '<S263>/FixPt Unit Delay1'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_UVActv_Value
        (BPCR_ac_DW.FixPtUnitDelay1_DSTATE_l);

    /* Outport: '<Root>/VeBPCR_b_HVBatRdy' incorporates:
     *  SignalConversion generated from: '<S2>/Out3'
     *  UnitDelay: '<S259>/FixPt Unit Delay1'
     */
    (void)Rte_Write_VeBPCR_b_HVBatRdy_Value(BPCR_ac_DW.FixPtUnitDelay1_DSTATE_m);

    /* Outport: '<Root>/VeBPCR_T_HV_BatModTempAvg' incorporates:
     *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempAvg'
     */
    (void)Rte_Write_VeBPCR_T_HV_BatModTempAvg_Value(VeBPCR_T_HV_BatModTempAvg);

    /* Outport: '<Root>/VeBPCR_T_HV_BatModTempMax' incorporates:
     *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMax'
     */
    (void)Rte_Write_VeBPCR_T_HV_BatModTempMax_Value(VeBPCR_T_HV_BatModTempMax);

    /* Outport: '<Root>/VeBPCR_T_HV_BatModTempMin' incorporates:
     *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMin'
     */
    (void)Rte_Write_VeBPCR_T_HV_BatModTempMin_Value(VeBPCR_T_HV_BatModTempMin);

    /* Outport: '<Root>/VeBPCR_b_BatShtOffFlg' incorporates:
     *  SignalConversion generated from: '<S2>/VeBPCR_b_BatShtOffFlg'
     */
    (void)Rte_Write_VeBPCR_b_BatShtOffFlg_Value
        (BPCR_ac_B.VariantMerge_For_Variant_Source_Variant_);

    /* Outport: '<Root>/VeBPCR_b_HEVOnRqBPCM_Debounced' incorporates:
     *  SignalConversion generated from: '<S2>/VeBPCR_b_HEVOnRqBPCM_Debounced'
     */
    (void)Rte_Write_VeBPCR_b_HEVOnRqBPCM_Debounced_Value
        (rtb_TmpSignalConversionAtVeBPCR_b_HEVOnR);

    /* Outport: '<Root>/VeBPCR_b_MIL_OnRq_BPCM_Debounced' incorporates:
     *  SignalConversion generated from: '<S2>/VeBPCR_b_MIL_OnRq_BPCM_Debounced'
     */
    (void)Rte_Write_VeBPCR_b_MIL_OnRq_BPCM_Debounced_Value
        (rtb_TmpSignalConversionAtVeBPCR_b_MIL_On);

    /* Outport: '<Root>/VeBPCR_b_ThrmlRnawyFlg' incorporates:
     *  SignalConversion generated from: '<S2>/VeBPCR_b_ThrmlRnawyFlg'
     */
    (void)Rte_Write_VeBPCR_b_ThrmlRnawyFlg_Value
        (rtb_VariantMerge_For_Variant_Source_XeBP);

    /* SignalConversion generated from: '<S2>/VeBPCR_e_FaultSts_HybBatPosConConCirPer' */
#if Rte_SysCon_Variant_BPCR_3

    /* Outport: '<Root>/VeBPCR_e_FaultSts_HybBatPosConConCirPer' incorporates:
     *  Merge: '<S285>/Merge'
     */
    (void)Rte_Write_VeBPCR_e_FaultSts_HybBatPosConConCirPer_Value
        (BPCR_ac_B.Merge_d);

#endif

    /* End of SignalConversion generated from: '<S2>/VeBPCR_e_FaultSts_HybBatPosConConCirPer' */

    /* Merge: '<Root>/VeBPCI_U_BatVoltModMaxArb_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VeBPCI_U_BatVoltModMaxArb_write'
     * */
    Rte_IrvWrite_BPCR_MedTEB_VeBPCI_U_BatVoltModMaxArb_write_IRV
        (VeBPCI_U_BatVoltModMaxArb);

    /* Merge: '<Root>/VeBPCI_U_BatVoltModMinArb_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VeBPCI_U_BatVoltModMinArb_write'
     * */
    Rte_IrvWrite_BPCR_MedTEB_VeBPCI_U_BatVoltModMinArb_write_IRV
        (VeBPCI_U_BatVoltModMinArb);

    /* Merge: '<Root>/VeBPCR_T_HV_BatModTempMax_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMax_write'
     * */
    Rte_IrvWrite_BPCR_MedTEB_VeBPCR_T_HV_BatModTempMax_write_IRV
        (VeBPCR_T_HV_BatModTempMax);

    /* Merge: '<Root>/VeBPCR_T_HV_BatModTempMin_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMin_write'
     * */
    Rte_IrvWrite_BPCR_MedTEB_VeBPCR_T_HV_BatModTempMin_write_IRV
        (VeBPCR_T_HV_BatModTempMin);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model step function for TID3 */
FUNC(void, BPCR_CODE) BPCR_MedTEH(void) /* Explicit Task: MedTEH */
{
    /* local block i/o variables */
    float32 rtb_VeBPCR_T_BatModTmp_write_IRV;
    float32 VeBPCR_P_HV_BatChrgPwrET_Arb;
    float32 VeBPCR_P_HV_BatChrgPwrLT_Arb;
    float32 VeBPCR_P_HV_BatChrgPwrST_Arb;
    float32 VeBPCR_P_HV_BatDschrgPwrET_Arb;
    float32 VeBPCR_P_HV_BatDschrgPwrLT_Arb;
    float32 VeBPCR_P_HV_BatDschrgPwrST_Arb;
    float32 VeBPCR_P_TracBat_EChrgPowLongMod;
    float32 VeBPCR_Pct_HV_BatPackSOC_Ovrd;
    float32 VeBPCR_T_HV_BatModTempMax_Arb;
    float32 VeBPCR_T_HV_BatModTempMin_Arb;
    float32 VeBPCR_U_CellVoltOVThrsh;
    float32 VeBPCR_U_CellVoltUVThrsh;
    float32 rtb_Sum4;
    float32 rtb_Switch1_jo;
    float32 rtb_TmpSignalConversionAtVeBPCI_U_BatV_h;
    float32 rtb_TmpSignalConversionAtVeBPCI_U_BatVol;
    boolean VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd;
    boolean rtb_AND_kj;
    boolean rtb_AND_mu;
    boolean rtb_LogicalOperator6_a;
    boolean rtb_OR1_au;
    boolean rtb_RelationalOperator5_i;
    boolean rtb_Switch18;
    boolean rtb_TmpSignalConversionAtVeBPCR_b_HV_B_e;
    boolean rtb_TmpSignalConversionAtVeBPCR_b_HV_B_p;
    boolean rtb_TmpSignalConversionAtVeBPCR_b_HV__bm;
    boolean rtb_TmpSignalConversionAtVeBPCR_b_HV__d5;
    boolean rtb_TmpSignalConversionAtVeBPCR_b_HV__jn;
    boolean rtb_TmpSignalConversionAtVeBPCR_b_HV__ju;
    boolean rtb_TmpSignalConversionAtVeBPCR_b_HV__mk;
    boolean rtb_TmpSignalConversionAtVeBPCR_b_HV__p5;
    boolean rtb_TmpSignalConversionAtVeBPCR_b_HV__po;
    boolean rtb_UnitDelay_f1;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/BPCR_MedTEH'
     */
    /* SignalConversion generated from: '<S3>/VeBPCR_T_BatModTmp_read' incorporates:
     *  Merge: '<Root>/Merge_11_Irv'
     */
    rtb_VeBPCR_T_BatModTmp_write_IRV =
        Rte_IrvRead_BPCR_MedTEH_VeBPCR_T_BatModTmp_write_IRV();

    /* SignalConversion generated from: '<S3>/VeBPCI_U_BatVoltModMinArb_Read' incorporates:
     *  Merge: '<Root>/VeBPCI_U_BatVoltModMinArb_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeBPCI_U_BatVol =
        Rte_IrvRead_BPCR_MedTEH_VeBPCI_U_BatVoltModMinArb_write_IRV();

    /* SignalConversion generated from: '<S3>/VeBPCI_U_BatVoltModMaxArb_Read' incorporates:
     *  Merge: '<Root>/VeBPCI_U_BatVoltModMaxArb_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeBPCI_U_BatV_h =
        Rte_IrvRead_BPCR_MedTEH_VeBPCI_U_BatVoltModMaxArb_write_IRV();

    /* SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatModTempMinSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_185'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__jn =
        Rte_IrvRead_BPCR_MedTEH_VeBPCR_b_HV_BatModTempMinSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatModTempMaxSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_184'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__po =
        Rte_IrvRead_BPCR_MedTEH_VeBPCR_b_HV_BatModTempMaxSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_36_Irv'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__p5 =
        Rte_IrvRead_BPCR_MedTEH_VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_42_Irv'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__d5 =
        Rte_IrvRead_BPCR_MedTEH_VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_35_Irv'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__mk =
        Rte_IrvRead_BPCR_MedTEH_VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_40_Irv'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV_B_e =
        Rte_IrvRead_BPCR_MedTEH_VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_37_Irv'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__bm =
        Rte_IrvRead_BPCR_MedTEH_VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_30_Irv'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__ju =
        Rte_IrvRead_BPCR_MedTEH_VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd_write_IRV();

    /* SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatPackSOCSgnl_Rcvd_read' incorporates:
     *  Merge: '<Root>/Merge_32_Irv'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV_B_p =
        Rte_IrvRead_BPCR_MedTEH_VeBPCR_b_HV_BatPackSOCSgnl_Rcvd_write_IRV();

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Arbitration'
     */
    /* Logic: '<S390>/Logical Operator2' incorporates:
     *  Constant: '<S433>/Calib'
     *  Merge: '<Root>/Merge_20_Irv'
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatDschrgPwrLTFA_read'
     */
    VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd =
        ((KeBPCR_b_HybBatDefMaxDschrgPwrLTAndFAOvrd) ||
         (Rte_IrvRead_BPCR_MedTEH_HVBatDschrgPowLT_FA_Init_write_IRV()));

    /* Outputs for Atomic SubSystem: '<S390>/EdgeRising1' */
    /* Logic: '<S405>/OR1' incorporates:
     *  UnitDelay: '<S405>/Unit Delay'
     */
    rtb_OR1_au = !BPCR_ac_DW.UnitDelay_DSTATE_jo;

    /* Update for UnitDelay: '<S405>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_jo = rtb_TmpSignalConversionAtVeBPCR_b_HV__p5;

    /* Outputs for Atomic SubSystem: '<S390>/Count Down  Reset Enabled' */
    /* Switch: '<S399>/Switch1' incorporates:
     *  Constant: '<S390>/TRUE Constant'
     *  Constant: '<S399>/Constant Value'
     *  Constant: '<S415>/Calib'
     *  Logic: '<S399>/AND'
     *  Logic: '<S405>/AND'
     *  RelationalOperator: '<S399>/Greater  Than'
     *  Switch: '<S399>/Switch2'
     *  UnitDelay: '<S399>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__p5 && rtb_OR1_au)
    {
        BPCR_ac_DW.UnitDelay_DSTATE_oo =
            KeBPCR_Cnt_HV_BatDschrgPwrLT_SgnlWaitTme;
    }
    else
    {
        if ((true) && (BPCR_ac_DW.UnitDelay_DSTATE_oo > ((uint16)0U)))
        {
            /* UnitDelay: '<S399>/Unit Delay' incorporates:
             *  Constant: '<S399>/Constant Value1'
             *  Sum: '<S399>/Subtraction'
             *  Switch: '<S399>/Switch2'
             */
            BPCR_ac_DW.UnitDelay_DSTATE_oo -= ((uint16)1U);
        }
    }

    /* End of Switch: '<S399>/Switch1' */
    /* End of Outputs for SubSystem: '<S390>/Count Down  Reset Enabled' */
    /* End of Outputs for SubSystem: '<S390>/EdgeRising1' */

    /* Switch: '<S390>/Switch4' incorporates:
     *  Constant: '<S399>/Constant Value2'
     *  Constant: '<S434>/Calib'
     *  Logic: '<S390>/Logical Operator1'
     *  RelationalOperator: '<S399>/Greater  Than1'
     *  Switch: '<S390>/Switch20'
     *  UnitDelay: '<S399>/Unit Delay'
     */
    if (VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd ||
            (KeBPCR_b_HybBatDefMaxDschrgPwrLTOvrd))
    {
        /* Switch: '<S390>/Switch4' incorporates:
         *  Constant: '<S421>/Calib'
         */
        VeBPCR_P_HV_BatDschrgPwrLT_Arb = KeBPCR_P_HybBatDefMaxDschrgPwrLT;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S390>/Count Down  Reset Enabled' */
        if (BPCR_ac_DW.UnitDelay_DSTATE_oo > ((uint16)0U))
        {
            /* Switch: '<S390>/Switch20' incorporates:
             *  DataStoreRead: '<S390>/Data Store Read1'
             *  Switch: '<S390>/Switch4'
             */
            VeBPCR_P_HV_BatDschrgPwrLT_Arb =
                BPCR_ac_DW.DeBPCR_P_HV_BatDschrgPwrLT;
        }
        else
        {
            /* Switch: '<S390>/Switch4' incorporates:
             *  Merge: '<Root>/Merge_21_Irv'
             *  SignalConversion generated from: '<S3>/VeBPCR_P_HV_BatDschrgPwrLT_read'
             *  Switch: '<S390>/Switch20'
             */
            VeBPCR_P_HV_BatDschrgPwrLT_Arb =
                Rte_IrvRead_BPCR_MedTEH_HVBatDschrgPowLT_Init_write_IRV();
        }

        /* End of Outputs for SubSystem: '<S390>/Count Down  Reset Enabled' */
    }

    /* End of Switch: '<S390>/Switch4' */

    /* DataStoreWrite: '<S390>/Data Store Write2' */
    BPCR_ac_DW.DeBPCR_P_HV_BatDschrgPwrLT = VeBPCR_P_HV_BatDschrgPwrLT_Arb;

    /* Logic: '<S390>/Logical Operator3' incorporates:
     *  Constant: '<S427>/Calib'
     *  Merge: '<Root>/Merge_27_Irv'
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatChrgPwrLTFA_read'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__p5 =
        ((KeBPCR_b_HybBatDefMaxChrgPwrLTAndFAOvrd) ||
         (Rte_IrvRead_BPCR_MedTEH_HVBatChrgPowLT_FA_Init_write_IRV()));

    /* Outputs for Atomic SubSystem: '<S390>/EdgeRising2' */
    /* Logic: '<S406>/OR1' incorporates:
     *  UnitDelay: '<S406>/Unit Delay'
     */
    rtb_OR1_au = !BPCR_ac_DW.UnitDelay_DSTATE_e0;

    /* Update for UnitDelay: '<S406>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_e0 = rtb_TmpSignalConversionAtVeBPCR_b_HV__d5;

    /* Outputs for Atomic SubSystem: '<S390>/Count Down  Reset Enabled1' */
    /* Switch: '<S400>/Switch1' incorporates:
     *  Constant: '<S390>/TRUE Constant1'
     *  Constant: '<S400>/Constant Value'
     *  Constant: '<S412>/Calib'
     *  Logic: '<S400>/AND'
     *  Logic: '<S406>/AND'
     *  RelationalOperator: '<S400>/Greater  Than'
     *  Switch: '<S400>/Switch2'
     *  UnitDelay: '<S400>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__d5 && rtb_OR1_au)
    {
        BPCR_ac_DW.UnitDelay_DSTATE_n = KeBPCR_Cnt_HV_BatChrgPwrLT_SgnlWaitTme;
    }
    else
    {
        if ((true) && (BPCR_ac_DW.UnitDelay_DSTATE_n > ((uint16)0U)))
        {
            /* UnitDelay: '<S400>/Unit Delay' incorporates:
             *  Constant: '<S400>/Constant Value1'
             *  Sum: '<S400>/Subtraction'
             *  Switch: '<S400>/Switch2'
             */
            BPCR_ac_DW.UnitDelay_DSTATE_n -= ((uint16)1U);
        }
    }

    /* End of Switch: '<S400>/Switch1' */
    /* End of Outputs for SubSystem: '<S390>/Count Down  Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S390>/EdgeRising2' */

    /* Switch: '<S390>/Switch5' incorporates:
     *  Constant: '<S400>/Constant Value2'
     *  Constant: '<S428>/Calib'
     *  Logic: '<S390>/Logical Operator5'
     *  RelationalOperator: '<S400>/Greater  Than1'
     *  Switch: '<S390>/Switch9'
     *  UnitDelay: '<S400>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__p5 ||
            (KeBPCR_b_HybBatDefMaxChrgPwrLTOvrd))
    {
        /* Switch: '<S390>/Switch5' incorporates:
         *  Constant: '<S418>/Calib'
         */
        VeBPCR_P_HV_BatChrgPwrLT_Arb = KeBPCR_P_HybBatDefMaxChrgPwrLT;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S390>/Count Down  Reset Enabled1' */
        if (BPCR_ac_DW.UnitDelay_DSTATE_n > ((uint16)0U))
        {
            /* Switch: '<S390>/Switch9' incorporates:
             *  DataStoreRead: '<S390>/Data Store Read2'
             *  Gain: '<S390>/Negation5'
             */
            VeBPCR_U_CellVoltUVThrsh = (-1.0F) *
                BPCR_ac_DW.DeBPCR_P_HV_BatChrgPwrLT;
        }
        else
        {
            /* Switch: '<S390>/Switch9' incorporates:
             *  Merge: '<Root>/Merge_26_Irv'
             *  SignalConversion generated from: '<S3>/VeBPCR_P_HV_BatChrgPwrLT_read'
             */
            VeBPCR_U_CellVoltUVThrsh =
                Rte_IrvRead_BPCR_MedTEH_HVBatChrgPowLT_Init_write_IRV();
        }

        /* End of Outputs for SubSystem: '<S390>/Count Down  Reset Enabled1' */

        /* Switch: '<S390>/Switch5' incorporates:
         *  Gain: '<S390>/Negation2'
         */
        VeBPCR_P_HV_BatChrgPwrLT_Arb = (-1.0F) * VeBPCR_U_CellVoltUVThrsh;
    }

    /* End of Switch: '<S390>/Switch5' */

    /* DataStoreWrite: '<S390>/Data Store Write3' */
    BPCR_ac_DW.DeBPCR_P_HV_BatChrgPwrLT = VeBPCR_P_HV_BatChrgPwrLT_Arb;

    /* Logic: '<S390>/Logical Operator9' incorporates:
     *  Constant: '<S431>/Calib'
     *  Merge: '<Root>/Merge_13_Irv'
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatDschrgPwrETFA_read'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__d5 =
        ((KeBPCR_b_HybBatDefMaxDschrgPwrETAndFAOvrd) ||
         (Rte_IrvRead_BPCR_MedTEH_HVBatDschrgPowET_FA_Init_write_IRV()));

    /* Outputs for Atomic SubSystem: '<S390>/EdgeRising3' */
    /* Logic: '<S407>/OR1' incorporates:
     *  UnitDelay: '<S407>/Unit Delay'
     */
    rtb_OR1_au = !BPCR_ac_DW.UnitDelay_DSTATE_f4;

    /* Update for UnitDelay: '<S407>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_f4 = rtb_TmpSignalConversionAtVeBPCR_b_HV__mk;

    /* Outputs for Atomic SubSystem: '<S390>/Count Down  Reset Enabled2' */
    /* Switch: '<S401>/Switch1' incorporates:
     *  Constant: '<S390>/TRUE Constant2'
     *  Constant: '<S401>/Constant Value'
     *  Constant: '<S414>/Calib'
     *  Logic: '<S401>/AND'
     *  Logic: '<S407>/AND'
     *  RelationalOperator: '<S401>/Greater  Than'
     *  Switch: '<S401>/Switch2'
     *  UnitDelay: '<S401>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__mk && rtb_OR1_au)
    {
        BPCR_ac_DW.UnitDelay_DSTATE_eo =
            KeBPCR_Cnt_HV_BatDschrgPwrET_SgnlWaitTme;
    }
    else
    {
        if ((true) && (BPCR_ac_DW.UnitDelay_DSTATE_eo > ((uint16)0U)))
        {
            /* UnitDelay: '<S401>/Unit Delay' incorporates:
             *  Constant: '<S401>/Constant Value1'
             *  Sum: '<S401>/Subtraction'
             *  Switch: '<S401>/Switch2'
             */
            BPCR_ac_DW.UnitDelay_DSTATE_eo -= ((uint16)1U);
        }
    }

    /* End of Switch: '<S401>/Switch1' */
    /* End of Outputs for SubSystem: '<S390>/Count Down  Reset Enabled2' */
    /* End of Outputs for SubSystem: '<S390>/EdgeRising3' */

    /* Switch: '<S390>/Switch1' incorporates:
     *  Constant: '<S401>/Constant Value2'
     *  Constant: '<S432>/Calib'
     *  Logic: '<S390>/Logical Operator6'
     *  RelationalOperator: '<S401>/Greater  Than1'
     *  Switch: '<S390>/Switch10'
     *  UnitDelay: '<S401>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__d5 ||
            (KeBPCR_b_HybBatDefMaxDschrgPwrETOvrd))
    {
        /* Switch: '<S390>/Switch1' incorporates:
         *  Constant: '<S420>/Calib'
         */
        VeBPCR_P_HV_BatDschrgPwrET_Arb = KeBPCR_P_HybBatDefMaxDschrgPwrET;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S390>/Count Down  Reset Enabled2' */
        if (BPCR_ac_DW.UnitDelay_DSTATE_eo > ((uint16)0U))
        {
            /* Switch: '<S390>/Switch10' incorporates:
             *  DataStoreRead: '<S390>/Data Store Read3'
             *  Switch: '<S390>/Switch1'
             */
            VeBPCR_P_HV_BatDschrgPwrET_Arb =
                BPCR_ac_DW.DeBPCR_P_HV_BatDschrgPwrET;
        }
        else
        {
            /* Switch: '<S390>/Switch1' incorporates:
             *  Merge: '<Root>/Merge_18_Irv'
             *  SignalConversion generated from: '<S3>/VeBPCR_P_HV_BatDschrgPwrET_read'
             *  Switch: '<S390>/Switch10'
             */
            VeBPCR_P_HV_BatDschrgPwrET_Arb =
                Rte_IrvRead_BPCR_MedTEH_HVBatDschrgPowET_Init_write_IRV();
        }

        /* End of Outputs for SubSystem: '<S390>/Count Down  Reset Enabled2' */
    }

    /* End of Switch: '<S390>/Switch1' */

    /* DataStoreWrite: '<S390>/Data Store Write' */
    BPCR_ac_DW.DeBPCR_P_HV_BatDschrgPwrET = VeBPCR_P_HV_BatDschrgPwrET_Arb;

    /* Logic: '<S390>/Logical Operator13' incorporates:
     *  Constant: '<S425>/Calib'
     *  Merge: '<Root>/Merge_24_Irv'
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatChrgPwrETFA_read'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__mk =
        ((KeBPCR_b_HybBatDefMaxChrgPwrETAndFAOvrd) ||
         (Rte_IrvRead_BPCR_MedTEH_HVBatChrgPowET_FA_Init_write_IRV()));

    /* Outputs for Atomic SubSystem: '<S390>/EdgeRising4' */
    /* Logic: '<S408>/OR1' incorporates:
     *  UnitDelay: '<S408>/Unit Delay'
     */
    rtb_OR1_au = !BPCR_ac_DW.UnitDelay_DSTATE_nh;

    /* Update for UnitDelay: '<S408>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_nh = rtb_TmpSignalConversionAtVeBPCR_b_HV_B_e;

    /* Outputs for Atomic SubSystem: '<S390>/Count Down  Reset Enabled3' */
    /* Switch: '<S402>/Switch1' incorporates:
     *  Constant: '<S390>/TRUE Constant3'
     *  Constant: '<S402>/Constant Value'
     *  Constant: '<S411>/Calib'
     *  Logic: '<S402>/AND'
     *  Logic: '<S408>/AND'
     *  RelationalOperator: '<S402>/Greater  Than'
     *  Switch: '<S402>/Switch2'
     *  UnitDelay: '<S402>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV_B_e && rtb_OR1_au)
    {
        BPCR_ac_DW.UnitDelay_DSTATE_k0 = KeBPCR_Cnt_HV_BatChrgPwrET_SgnlWaitTme;
    }
    else
    {
        if ((true) && (BPCR_ac_DW.UnitDelay_DSTATE_k0 > ((uint16)0U)))
        {
            /* UnitDelay: '<S402>/Unit Delay' incorporates:
             *  Constant: '<S402>/Constant Value1'
             *  Sum: '<S402>/Subtraction'
             *  Switch: '<S402>/Switch2'
             */
            BPCR_ac_DW.UnitDelay_DSTATE_k0 -= ((uint16)1U);
        }
    }

    /* End of Switch: '<S402>/Switch1' */
    /* End of Outputs for SubSystem: '<S390>/Count Down  Reset Enabled3' */
    /* End of Outputs for SubSystem: '<S390>/EdgeRising4' */

    /* Switch: '<S390>/Switch2' incorporates:
     *  Constant: '<S402>/Constant Value2'
     *  Constant: '<S426>/Calib'
     *  Logic: '<S390>/Logical Operator7'
     *  RelationalOperator: '<S402>/Greater  Than1'
     *  Switch: '<S390>/Switch11'
     *  UnitDelay: '<S402>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__mk ||
            (KeBPCR_b_HybBatDefMaxChrgPwrETOvrd))
    {
        /* Switch: '<S390>/Switch2' incorporates:
         *  Constant: '<S417>/Calib'
         */
        VeBPCR_P_HV_BatChrgPwrET_Arb = KeBPCR_P_HybBatDefMaxChrgPwrET;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S390>/Count Down  Reset Enabled3' */
        if (BPCR_ac_DW.UnitDelay_DSTATE_k0 > ((uint16)0U))
        {
            /* Switch: '<S390>/Switch11' incorporates:
             *  DataStoreRead: '<S390>/Data Store Read4'
             *  Gain: '<S390>/Negation6'
             */
            VeBPCR_U_CellVoltUVThrsh = (-1.0F) *
                BPCR_ac_DW.DeBPCR_P_HV_BatChrgPwrET;
        }
        else
        {
            /* Switch: '<S390>/Switch11' incorporates:
             *  Merge: '<Root>/Merge_25_Irv'
             *  SignalConversion generated from: '<S3>/VeBPCR_P_HV_BatChrgPwrET_read'
             */
            VeBPCR_U_CellVoltUVThrsh =
                Rte_IrvRead_BPCR_MedTEH_HVBatChrgPowET_Init_write_IRV();
        }

        /* End of Outputs for SubSystem: '<S390>/Count Down  Reset Enabled3' */

        /* Switch: '<S390>/Switch2' incorporates:
         *  Gain: '<S390>/Negation1'
         */
        VeBPCR_P_HV_BatChrgPwrET_Arb = (-1.0F) * VeBPCR_U_CellVoltUVThrsh;
    }

    /* End of Switch: '<S390>/Switch2' */

    /* DataStoreWrite: '<S390>/Data Store Write1' */
    BPCR_ac_DW.DeBPCR_P_HV_BatChrgPwrET = VeBPCR_P_HV_BatChrgPwrET_Arb;

    /* Logic: '<S390>/Logical Operator20' incorporates:
     *  Constant: '<S435>/Calib'
     *  Merge: '<Root>/Merge_22_Irv'
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatDschrgPwrSTFA_read'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV_B_e =
        ((KeBPCR_b_HybBatDefMaxDschrgPwrSTAndFAOvrd) ||
         (Rte_IrvRead_BPCR_MedTEH_HVBatDschrgPowST_FA_Init_write_IRV()));

    /* Outputs for Atomic SubSystem: '<S390>/EdgeRising5' */
    /* Logic: '<S409>/OR1' incorporates:
     *  UnitDelay: '<S409>/Unit Delay'
     */
    rtb_OR1_au = !BPCR_ac_DW.UnitDelay_DSTATE_jq;

    /* Update for UnitDelay: '<S409>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_jq = rtb_TmpSignalConversionAtVeBPCR_b_HV__bm;

    /* Outputs for Atomic SubSystem: '<S390>/Count Down  Reset Enabled4' */
    /* Switch: '<S403>/Switch1' incorporates:
     *  Constant: '<S390>/TRUE Constant4'
     *  Constant: '<S403>/Constant Value'
     *  Constant: '<S416>/Calib'
     *  Logic: '<S403>/AND'
     *  Logic: '<S409>/AND'
     *  RelationalOperator: '<S403>/Greater  Than'
     *  Switch: '<S403>/Switch2'
     *  UnitDelay: '<S403>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__bm && rtb_OR1_au)
    {
        BPCR_ac_DW.UnitDelay_DSTATE_e = KeBPCR_Cnt_HV_BatDschrgPwrST_SgnlWaitTme;
    }
    else
    {
        if ((true) && (BPCR_ac_DW.UnitDelay_DSTATE_e > ((uint16)0U)))
        {
            /* UnitDelay: '<S403>/Unit Delay' incorporates:
             *  Constant: '<S403>/Constant Value1'
             *  Sum: '<S403>/Subtraction'
             *  Switch: '<S403>/Switch2'
             */
            BPCR_ac_DW.UnitDelay_DSTATE_e -= ((uint16)1U);
        }
    }

    /* End of Switch: '<S403>/Switch1' */
    /* End of Outputs for SubSystem: '<S390>/Count Down  Reset Enabled4' */
    /* End of Outputs for SubSystem: '<S390>/EdgeRising5' */

    /* Switch: '<S390>/Switch3' incorporates:
     *  Constant: '<S403>/Constant Value2'
     *  Constant: '<S436>/Calib'
     *  Logic: '<S390>/Logical Operator10'
     *  RelationalOperator: '<S403>/Greater  Than1'
     *  Switch: '<S390>/Switch12'
     *  UnitDelay: '<S403>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV_B_e ||
            (KeBPCR_b_HybBatDefMaxDschrgPwrSTOvrd))
    {
        /* Switch: '<S390>/Switch3' incorporates:
         *  Constant: '<S422>/Calib'
         */
        VeBPCR_P_HV_BatDschrgPwrST_Arb = KeBPCR_P_HybBatDefMaxDschrgPwrST;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S390>/Count Down  Reset Enabled4' */
        if (BPCR_ac_DW.UnitDelay_DSTATE_e > ((uint16)0U))
        {
            /* Switch: '<S390>/Switch12' incorporates:
             *  DataStoreRead: '<S390>/Data Store Read5'
             *  Switch: '<S390>/Switch3'
             */
            VeBPCR_P_HV_BatDschrgPwrST_Arb =
                BPCR_ac_DW.DeBPCR_P_HV_BatDschrgPwrST;
        }
        else
        {
            /* Switch: '<S390>/Switch3' incorporates:
             *  Merge: '<Root>/Merge_23_Irv'
             *  SignalConversion generated from: '<S3>/VeBPCR_P_HV_BatDschrgPwrST_read'
             *  Switch: '<S390>/Switch12'
             */
            VeBPCR_P_HV_BatDschrgPwrST_Arb =
                Rte_IrvRead_BPCR_MedTEH_HVBatDschrgPowST_Init_write_IRV();
        }

        /* End of Outputs for SubSystem: '<S390>/Count Down  Reset Enabled4' */
    }

    /* End of Switch: '<S390>/Switch3' */

    /* DataStoreWrite: '<S390>/Data Store Write5' */
    BPCR_ac_DW.DeBPCR_P_HV_BatDschrgPwrST = VeBPCR_P_HV_BatDschrgPwrST_Arb;

    /* Logic: '<S390>/Logical Operator16' incorporates:
     *  Constant: '<S429>/Calib'
     *  Merge: '<Root>/Merge_14_Irv'
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatChrgPwrSTFA_read'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__bm =
        ((KeBPCR_b_HybBatDefMaxChrgPwrSTAndFAOvrd) ||
         (Rte_IrvRead_BPCR_MedTEH_HVBatChrgPowST_FA_Init_write_IRV()));

    /* Outputs for Atomic SubSystem: '<S390>/EdgeRising6' */
    /* Logic: '<S410>/OR1' incorporates:
     *  UnitDelay: '<S410>/Unit Delay'
     */
    rtb_OR1_au = !BPCR_ac_DW.UnitDelay_DSTATE_ce;

    /* Update for UnitDelay: '<S410>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_ce = rtb_TmpSignalConversionAtVeBPCR_b_HV__ju;

    /* Outputs for Atomic SubSystem: '<S390>/Count Down  Reset Enabled5' */
    /* Switch: '<S404>/Switch1' incorporates:
     *  Constant: '<S390>/TRUE Constant5'
     *  Constant: '<S404>/Constant Value'
     *  Constant: '<S413>/Calib'
     *  Logic: '<S404>/AND'
     *  Logic: '<S410>/AND'
     *  RelationalOperator: '<S404>/Greater  Than'
     *  Switch: '<S404>/Switch2'
     *  UnitDelay: '<S404>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__ju && rtb_OR1_au)
    {
        BPCR_ac_DW.UnitDelay_DSTATE_gx = KeBPCR_Cnt_HV_BatChrgPwrST_SgnlWaitTme;
    }
    else
    {
        if ((true) && (BPCR_ac_DW.UnitDelay_DSTATE_gx > ((uint16)0U)))
        {
            /* UnitDelay: '<S404>/Unit Delay' incorporates:
             *  Constant: '<S404>/Constant Value1'
             *  Sum: '<S404>/Subtraction'
             *  Switch: '<S404>/Switch2'
             */
            BPCR_ac_DW.UnitDelay_DSTATE_gx -= ((uint16)1U);
        }
    }

    /* End of Switch: '<S404>/Switch1' */
    /* End of Outputs for SubSystem: '<S390>/Count Down  Reset Enabled5' */
    /* End of Outputs for SubSystem: '<S390>/EdgeRising6' */

    /* Switch: '<S390>/Switch8' incorporates:
     *  Constant: '<S404>/Constant Value2'
     *  Constant: '<S430>/Calib'
     *  Logic: '<S390>/Logical Operator8'
     *  RelationalOperator: '<S404>/Greater  Than1'
     *  Switch: '<S390>/Switch13'
     *  UnitDelay: '<S404>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__bm ||
            (KeBPCR_b_HybBatDefMaxChrgPwrSTOvrd))
    {
        /* Switch: '<S390>/Switch8' incorporates:
         *  Constant: '<S419>/Calib'
         */
        VeBPCR_P_HV_BatChrgPwrST_Arb = KeBPCR_P_HybBatDefMaxChrgPwrST;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S390>/Count Down  Reset Enabled5' */
        if (BPCR_ac_DW.UnitDelay_DSTATE_gx > ((uint16)0U))
        {
            /* Switch: '<S390>/Switch13' incorporates:
             *  DataStoreRead: '<S390>/Data Store Read6'
             *  Gain: '<S390>/Negation7'
             */
            VeBPCR_U_CellVoltUVThrsh = (-1.0F) *
                BPCR_ac_DW.DeBPCR_P_HV_BatChrgPwrST;
        }
        else
        {
            /* Switch: '<S390>/Switch13' incorporates:
             *  Merge: '<Root>/Merge_15_Irv'
             *  SignalConversion generated from: '<S3>/VeBPCR_P_HV_BatChrgPwrST_read'
             */
            VeBPCR_U_CellVoltUVThrsh =
                Rte_IrvRead_BPCR_MedTEH_HVBatChrgPowST_Init_write_IRV();
        }

        /* End of Outputs for SubSystem: '<S390>/Count Down  Reset Enabled5' */

        /* Switch: '<S390>/Switch8' incorporates:
         *  Gain: '<S390>/Negation3'
         */
        VeBPCR_P_HV_BatChrgPwrST_Arb = (-1.0F) * VeBPCR_U_CellVoltUVThrsh;
    }

    /* End of Switch: '<S390>/Switch8' */

    /* DataStoreWrite: '<S390>/Data Store Write4' */
    BPCR_ac_DW.DeBPCR_P_HV_BatChrgPwrST = VeBPCR_P_HV_BatChrgPwrST_Arb;

    /* Switch: '<S390>/Switch7' incorporates:
     *  Constant: '<S437>/Calib'
     *  Constant: '<S438>/Calib'
     *  Logic: '<S390>/Logical Operator4'
     *  Merge: '<Root>/Merge_71_Irv'
     *  SignalConversion generated from: '<S3>/VeBPCR_b_TracBat_EChrgPowLongFA_read'
     *  Switch: '<S390>/Switch6'
     */
    if (KeBPCR_b_TracBat_EChrgPowLongMod_Ovrd)
    {
        /* Switch: '<S390>/Switch7' incorporates:
         *  Constant: '<S423>/Calib'
         */
        VeBPCR_P_TracBat_EChrgPowLongMod = KeBPCR_P_TracBat_EChrgPowLongMod_Val;
    }
    else if ((KeBPCR_b_TracBat_EChrgPowLongOvrd) ||
             (Rte_IrvRead_BPCR_MedTEH_TracBat_EChrgPowLongV_write_IRV()))
    {
        /* Switch: '<S390>/Switch6' incorporates:
         *  Constant: '<S424>/Calib'
         *  Switch: '<S390>/Switch7'
         */
        VeBPCR_P_TracBat_EChrgPowLongMod = KeBPCR_P_TracBat_EChrgPowLongVal;
    }
    else
    {
        /* Switch: '<S390>/Switch7' incorporates:
         *  Gain: '<S390>/Negation4'
         *  Merge: '<Root>/Merge_70_Irv'
         *  SignalConversion generated from: '<S3>/VeBPCR_P_TracBat_EChrgPowLong_read'
         *  Switch: '<S390>/Switch6'
         */
        VeBPCR_P_TracBat_EChrgPowLongMod = (-1.0F) *
            Rte_IrvRead_BPCR_MedTEH_TracBat_EChrgPowLong_write_IRV();
    }

    /* End of Switch: '<S390>/Switch7' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeHVTR_I_HV_BatCurrArb' */
    (void)Rte_Read_VeHVTR_I_HV_BatCurrArb_Value((&(VeBPCI_I_HV_BatCurrArb)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/BPCR_MedTEH'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Arbitration'
     */
    /* Logic: '<S389>/Logical Operator15' incorporates:
     *  Constant: '<S397>/Calib'
     *  Merge: '<Root>/Merge_120_Irv'
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatCurrFA_read'
     */
    rtb_OR1_au = ((Rte_IrvRead_BPCR_MedTEH_HV_BatCurrFA_write_IRV()) ||
                  (KeBPCR_b_CurrFAOvrd));

    /* Switch: '<S389>/Switch10' incorporates:
     *  Constant: '<S398>/Calib'
     */
    if (KeBPCR_b_CurrOvrd)
    {
        /* Switch: '<S389>/Switch10' incorporates:
         *  Constant: '<S396>/Calib'
         *  Inport: '<Root>/VeHVTR_I_HV_BatCurrArb'
         */
        VeBPCI_I_HV_BatCurrArb = KeBPCR_I_HV_BatCurrArbOvrd;
    }

    /* End of Switch: '<S389>/Switch10' */

    /* Logic: '<S393>/Logical Operator6' incorporates:
     *  Constant: '<S469>/Calib'
     *  Merge: '<Root>/Merge_153_Irv'
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatModTempMaxFA_read'
     */
    rtb_LogicalOperator6_a = ((KeBPCR_b_HVBatDefMaxModTmpAndFAOvrd) ||
        (Rte_IrvRead_BPCR_MedTEH_HV_BatModTempMaxFA_write_IRV()));

    /* Outputs for Atomic SubSystem: '<S391>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S444>/EdgeRising' */
    /* Logic: '<S448>/AND' incorporates:
     *  Logic: '<S448>/OR1'
     *  UnitDelay: '<S448>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__ju = (rtb_LogicalOperator6_a &&
        (!BPCR_ac_DW.UnitDelay_DSTATE_fc));

    /* Update for UnitDelay: '<S448>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_fc = rtb_LogicalOperator6_a;

    /* End of Outputs for SubSystem: '<S444>/EdgeRising' */

    /* Logic: '<S444>/OR1' incorporates:
     *  Logic: '<S393>/Logical1'
     */
    rtb_RelationalOperator5_i = !rtb_LogicalOperator6_a;

    /* Switch: '<S444>/Switch1' incorporates:
     *  Logic: '<S444>/OR'
     *  Logic: '<S444>/OR1'
     */
    if (rtb_RelationalOperator5_i || rtb_TmpSignalConversionAtVeBPCR_b_HV__ju)
    {
        /* Sum: '<S444>/Summation' incorporates:
         *  Constant: '<S444>/Constant Value1'
         *  UnitDelay: '<S444>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_h = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S444>/Summation' incorporates:
         *  Constant: '<S444>/Constant Value'
         *  UnitDelay: '<S444>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_h = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)BPCR_ac_DW.UnitDelay_DSTATE_h));

        /* MinMax: '<S444>/Minimum' incorporates:
         *  Constant: '<S439>/Calib'
         */
        if (KeBPCR_Cnt_BatMaxModTmpFA_Dur < BPCR_ac_DW.UnitDelay_DSTATE_h)
        {
            /* Sum: '<S444>/Summation' */
            BPCR_ac_DW.UnitDelay_DSTATE_h = KeBPCR_Cnt_BatMaxModTmpFA_Dur;
        }

        /* End of MinMax: '<S444>/Minimum' */
    }

    /* End of Switch: '<S444>/Switch1' */

    /* Logic: '<S444>/AND' incorporates:
     *  Constant: '<S439>/Calib'
     *  RelationalOperator: '<S444>/Greater  Than'
     *  UnitDelay: '<S444>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__ju = (rtb_LogicalOperator6_a &&
        (BPCR_ac_DW.UnitDelay_DSTATE_h >= KeBPCR_Cnt_BatMaxModTmpFA_Dur));

    /* End of Outputs for SubSystem: '<S391>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S391>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S445>/EdgeRising' */
    /* Logic: '<S449>/AND' incorporates:
     *  Logic: '<S449>/OR1'
     *  UnitDelay: '<S449>/Unit Delay'
     */
    rtb_AND_mu = (rtb_OR1_au && (!BPCR_ac_DW.UnitDelay_DSTATE_nd));

    /* Update for UnitDelay: '<S449>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_nd = rtb_OR1_au;

    /* End of Outputs for SubSystem: '<S445>/EdgeRising' */

    /* Switch: '<S445>/Switch1' incorporates:
     *  Logic: '<S445>/OR'
     *  Logic: '<S445>/OR1'
     */
    if ((!rtb_OR1_au) || rtb_AND_mu)
    {
        /* Sum: '<S445>/Summation' incorporates:
         *  Constant: '<S445>/Constant Value1'
         *  UnitDelay: '<S445>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_dj = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S445>/Summation' incorporates:
         *  Constant: '<S445>/Constant Value'
         *  UnitDelay: '<S445>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_dj = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)BPCR_ac_DW.UnitDelay_DSTATE_dj));

        /* MinMax: '<S445>/Minimum' incorporates:
         *  Constant: '<S442>/Calib'
         */
        if (KeBPCR_Cnt_HV_BatCurrFA_Dur < BPCR_ac_DW.UnitDelay_DSTATE_dj)
        {
            /* Sum: '<S445>/Summation' */
            BPCR_ac_DW.UnitDelay_DSTATE_dj = KeBPCR_Cnt_HV_BatCurrFA_Dur;
        }

        /* End of MinMax: '<S445>/Minimum' */
    }

    /* End of Switch: '<S445>/Switch1' */

    /* Logic: '<S445>/AND' incorporates:
     *  Constant: '<S442>/Calib'
     *  RelationalOperator: '<S445>/Greater  Than'
     *  UnitDelay: '<S445>/Unit Delay'
     */
    rtb_OR1_au = (rtb_OR1_au && (BPCR_ac_DW.UnitDelay_DSTATE_dj >=
                   KeBPCR_Cnt_HV_BatCurrFA_Dur));

    /* End of Outputs for SubSystem: '<S391>/Turn On Delay Sample1' */

    /* Logic: '<S392>/Logical Operator4' incorporates:
     *  Constant: '<S454>/Calib'
     *  Merge: '<Root>/Merge_17_Irv'
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatPackSOCFA_read'
     */
    VeBPCI_b_HV_BatPackSOC_FA_Ovrd = ((KeBPCR_b_BatPackSOCAndFAOvrd) ||
        (Rte_IrvRead_BPCR_MedTEH_HVBatPackSOC_FA_Init_write_IRV()));

    /* Outputs for Atomic SubSystem: '<S391>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S446>/EdgeRising' */
    /* UnitDelay: '<S478>/Unit Delay' incorporates:
     *  UnitDelay: '<S450>/Unit Delay'
     */
    rtb_UnitDelay_f1 = BPCR_ac_DW.UnitDelay_DSTATE_iy;

    /* Update for UnitDelay: '<S450>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_iy = VeBPCI_b_HV_BatPackSOC_FA_Ovrd;

    /* Switch: '<S446>/Switch1' incorporates:
     *  Logic: '<S446>/OR'
     *  Logic: '<S446>/OR1'
     *  Logic: '<S450>/AND'
     *  Logic: '<S450>/OR1'
     */
    if ((!VeBPCI_b_HV_BatPackSOC_FA_Ovrd) || ((VeBPCI_b_HV_BatPackSOC_FA_Ovrd) &&
         (!rtb_UnitDelay_f1)))
    {
        /* Sum: '<S446>/Summation' incorporates:
         *  Constant: '<S446>/Constant Value1'
         *  UnitDelay: '<S446>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_g = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S446>/Summation' incorporates:
         *  Constant: '<S446>/Constant Value'
         *  UnitDelay: '<S446>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_g = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)BPCR_ac_DW.UnitDelay_DSTATE_g));

        /* MinMax: '<S446>/Minimum' incorporates:
         *  Constant: '<S440>/Calib'
         */
        if (KeBPCR_Cnt_BatPackSOC_FA_Dur < BPCR_ac_DW.UnitDelay_DSTATE_g)
        {
            /* Sum: '<S446>/Summation' */
            BPCR_ac_DW.UnitDelay_DSTATE_g = KeBPCR_Cnt_BatPackSOC_FA_Dur;
        }

        /* End of MinMax: '<S446>/Minimum' */
    }

    /* End of Switch: '<S446>/Switch1' */
    /* End of Outputs for SubSystem: '<S446>/EdgeRising' */

    /* Logic: '<S391>/Logical2' incorporates:
     *  Constant: '<S440>/Calib'
     *  Constant: '<S443>/Calib'
     *  Logic: '<S446>/AND'
     *  RelationalOperator: '<S446>/Greater  Than'
     *  UnitDelay: '<S446>/Unit Delay'
     */
    rtb_AND_mu = ((KeBPCR_b_BatPackSOC_Test) || ((VeBPCI_b_HV_BatPackSOC_FA_Ovrd)
                   && (BPCR_ac_DW.UnitDelay_DSTATE_g >=
                       KeBPCR_Cnt_BatPackSOC_FA_Dur)));

    /* End of Outputs for SubSystem: '<S391>/Turn On Delay Sample2' */

    /* Switch: '<S395>/Switch18' incorporates:
     *  Constant: '<S492>/Calib'
     */
    if (KeBPCR_b_HV_BatVoltModMaxFAOvrdEnbl)
    {
        /* Switch: '<S395>/Switch18' incorporates:
         *  Constant: '<S491>/Calib'
         */
        rtb_Switch18 = KeBPCR_b_HV_BatVoltModMaxFAOvrd;
    }
    else
    {
        /* Switch: '<S395>/Switch18' incorporates:
         *  Merge: '<Root>/Merge_107_Irv'
         *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatModVoltMaxFA_read'
         */
        rtb_Switch18 = Rte_IrvRead_BPCR_MedTEH_HV_BatModVoltMaxFA_write_IRV();
    }

    /* End of Switch: '<S395>/Switch18' */

    /* Outputs for Atomic SubSystem: '<S391>/Turn On Delay Sample3' */
    /* Outputs for Atomic SubSystem: '<S447>/EdgeRising' */
    /* Logic: '<S451>/AND' incorporates:
     *  Logic: '<S451>/OR1'
     *  UnitDelay: '<S451>/Unit Delay'
     */
    rtb_AND_kj = (rtb_Switch18 && (!BPCR_ac_DW.UnitDelay_DSTATE_oz));

    /* Update for UnitDelay: '<S451>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_oz = rtb_Switch18;

    /* End of Outputs for SubSystem: '<S447>/EdgeRising' */

    /* Switch: '<S447>/Switch1' incorporates:
     *  Logic: '<S447>/OR'
     *  Logic: '<S447>/OR1'
     */
    if ((!rtb_Switch18) || rtb_AND_kj)
    {
        /* Sum: '<S447>/Summation' incorporates:
         *  Constant: '<S447>/Constant Value1'
         *  UnitDelay: '<S447>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_o = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S447>/Summation' incorporates:
         *  Constant: '<S447>/Constant Value'
         *  UnitDelay: '<S447>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_o = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)BPCR_ac_DW.UnitDelay_DSTATE_o));

        /* MinMax: '<S447>/Minimum' incorporates:
         *  Constant: '<S441>/Calib'
         */
        if (KeBPCR_Cnt_BatVoltModMaxFA_Dur < BPCR_ac_DW.UnitDelay_DSTATE_o)
        {
            /* Sum: '<S447>/Summation' */
            BPCR_ac_DW.UnitDelay_DSTATE_o = KeBPCR_Cnt_BatVoltModMaxFA_Dur;
        }

        /* End of MinMax: '<S447>/Minimum' */
    }

    /* End of Switch: '<S447>/Switch1' */

    /* Logic: '<S447>/AND' incorporates:
     *  Constant: '<S441>/Calib'
     *  RelationalOperator: '<S447>/Greater  Than'
     *  UnitDelay: '<S447>/Unit Delay'
     */
    rtb_Switch18 = (rtb_Switch18 && (BPCR_ac_DW.UnitDelay_DSTATE_o >=
                     KeBPCR_Cnt_BatVoltModMaxFA_Dur));

    /* End of Outputs for SubSystem: '<S391>/Turn On Delay Sample3' */

    /* Logic: '<S391>/Logical1' */
    rtb_AND_kj = (((rtb_TmpSignalConversionAtVeBPCR_b_HV__ju || rtb_OR1_au) ||
                   rtb_AND_mu) || rtb_Switch18);

#if Rte_SysCon_Variant_BPCR_BatPckSOCFAInit

    /* Outputs for Enabled SubSystem: '<S392>/SOC_FA_Ovrd_WrtEn' */
    /* Outputs for Enabled SubSystem: '<S392>/SOC_FA_Ovrd_WrtEn' incorporates:
     *  EnablePort: '<S456>/Enable'
     */
    /* Constant: '<S392>/FALSE Constant15' */
    if (true)
    {
        /* DataStoreWrite: '<S456>/Data Store Write1' */
        BPCR_ac_DW.NeBPCR_b_HV_BatPackSOC_FA_Ovrd =
            VeBPCI_b_HV_BatPackSOC_FA_Ovrd;
    }

    /* End of Constant: '<S392>/FALSE Constant15' */
    /* End of Outputs for SubSystem: '<S392>/SOC_FA_Ovrd_WrtEn' */
#endif

    /* Outputs for Atomic SubSystem: '<S457>/EdgeRising1' */
    /* Logic: '<S459>/OR1' incorporates:
     *  UnitDelay: '<S459>/Unit Delay'
     */
    rtb_UnitDelay_f1 = !BPCR_ac_DW.UnitDelay_DSTATE_hc;

    /* Update for UnitDelay: '<S459>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_hc = rtb_TmpSignalConversionAtVeBPCR_b_HV_B_p;

    /* Outputs for Atomic SubSystem: '<S457>/Count Down  Reset Enabled' */
    /* Switch: '<S458>/Switch1' incorporates:
     *  Constant: '<S457>/TRUE Constant'
     *  Constant: '<S458>/Constant Value'
     *  Constant: '<S460>/Calib'
     *  Logic: '<S458>/AND'
     *  Logic: '<S459>/AND'
     *  RelationalOperator: '<S458>/Greater  Than'
     *  Switch: '<S458>/Switch2'
     *  UnitDelay: '<S458>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV_B_p && rtb_UnitDelay_f1)
    {
        BPCR_ac_DW.UnitDelay_DSTATE_m3 = KeBPCR_Cnt_HV_BatPackSOC_SgnlWaitTme;
    }
    else
    {
        if ((true) && (BPCR_ac_DW.UnitDelay_DSTATE_m3 > ((uint16)0U)))
        {
            /* UnitDelay: '<S458>/Unit Delay' incorporates:
             *  Constant: '<S458>/Constant Value1'
             *  Sum: '<S458>/Subtraction'
             *  Switch: '<S458>/Switch2'
             */
            BPCR_ac_DW.UnitDelay_DSTATE_m3 -= ((uint16)1U);
        }
    }

    /* End of Switch: '<S458>/Switch1' */
    /* End of Outputs for SubSystem: '<S457>/Count Down  Reset Enabled' */
    /* End of Outputs for SubSystem: '<S457>/EdgeRising1' */

    /* Switch: '<S392>/Switch11' incorporates:
     *  Constant: '<S452>/Calib'
     *  Constant: '<S455>/Calib'
     *  Constant: '<S458>/Constant Value2'
     *  Logic: '<S392>/Logical Operator1'
     *  Logic: '<S457>/Logical Operator4'
     *  Logic: '<S457>/Logical2'
     *  Merge: '<Root>/Merge_16_Irv'
     *  RelationalOperator: '<S458>/Greater  Than1'
     *  SignalConversion generated from: '<S3>/VeBPCR_Pct_HV_BatPackSOC_read'
     *  Switch: '<S457>/Switch20'
     *  UnitDelay: '<S458>/Unit Delay'
     */
    if ((VeBPCI_b_HV_BatPackSOC_FA_Ovrd) || (KeBPCR_b_BatPackSOCOvrd))
    {
        VeBPCR_U_CellVoltUVThrsh = KeBPCR_Pct_BatPackSOCOvrd;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S457>/Count Down  Reset Enabled' */
        if ((BPCR_ac_DW.UnitDelay_DSTATE_m3 > ((uint16)0U)) ||
                (!rtb_TmpSignalConversionAtVeBPCR_b_HV_B_p))
        {
            /* Switch: '<S457>/Switch20' incorporates:
             *  DataStoreRead: '<S457>/Data Store Read1'
             */
            VeBPCR_U_CellVoltUVThrsh = BPCR_ac_DW.DeBPCR_Pct_HV_BatSOC_DS;
        }
        else
        {
            VeBPCR_U_CellVoltUVThrsh =
                Rte_IrvRead_BPCR_MedTEH_HVBatPackSOC_Init_write_IRV();
        }

        /* End of Outputs for SubSystem: '<S457>/Count Down  Reset Enabled' */
    }

    /* End of Switch: '<S392>/Switch11' */

    /* Sum: '<S392>/Add1' incorporates:
     *  Constant: '<S453>/Calib'
     */
    VeBPCR_Pct_HV_BatPackSOC_Ovrd = KeBPCR_Pct_SOC_Offset +
        VeBPCR_U_CellVoltUVThrsh;

    /* Switch: '<S393>/Switch6' incorporates:
     *  Constant: '<S470>/Calib'
     *  Logic: '<S393>/Logical Operator5'
     */
    if (rtb_LogicalOperator6_a || (KeBPCR_b_HVBatDefMaxModTmpOvrd))
    {
        /* Switch: '<S393>/Switch6' incorporates:
         *  Constant: '<S467>/Calib'
         */
        VeBPCR_T_HV_BatModTempMax_Arb = KeBPCR_T_HVBatDefMaxModTmp;
    }
    else
    {
        /* Switch: '<S393>/Switch6' incorporates:
         *  Merge: '<Root>/VeBPCR_T_HV_BatModTempMax_IRV_Merge'
         *  SignalConversion generated from: '<S3>/VeBPCR_T_HV_BatModTempMax_Read'
         */
        VeBPCR_T_HV_BatModTempMax_Arb =
            Rte_IrvRead_BPCR_MedTEH_VeBPCR_T_HV_BatModTempMax_write_IRV();
    }

    /* End of Switch: '<S393>/Switch6' */

    /* UnitDelay: '<S478>/Unit Delay' incorporates:
     *  Constant: '<S471>/Calib'
     *  Logic: '<S393>/Logical Operator7'
     *  Merge: '<Root>/Merge_108_Irv'
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatModTempMinFA_read'
     */
    rtb_UnitDelay_f1 = ((KeBPCR_b_HVBatDefMinModTmpAndFAOvrd) ||
                        (Rte_IrvRead_BPCR_MedTEH_HV_BatModTempMinFA_write_IRV()));

    /* Switch: '<S393>/Switch7' incorporates:
     *  Constant: '<S472>/Calib'
     *  Logic: '<S393>/Logical Operator1'
     */
    if (rtb_UnitDelay_f1 || (KeBPCR_b_HVBatDefMinModTmpOvrd))
    {
        /* Switch: '<S393>/Switch7' incorporates:
         *  Constant: '<S468>/Calib'
         */
        VeBPCR_T_HV_BatModTempMin_Arb = KeBPCR_T_HVBatDefMinModTmp;
    }
    else
    {
        /* Switch: '<S393>/Switch7' incorporates:
         *  Merge: '<Root>/VeBPCR_T_HV_BatModTempMin_IRV_Merge'
         *  SignalConversion generated from: '<S3>/VeBPCR_T_HV_BatModTempMin_Read'
         */
        VeBPCR_T_HV_BatModTempMin_Arb =
            Rte_IrvRead_BPCR_MedTEH_VeBPCR_T_HV_BatModTempMin_write_IRV();
    }

    /* End of Switch: '<S393>/Switch7' */

    /* Switch: '<S462>/Switch1' incorporates:
     *  Constant: '<S466>/Calib'
     *  RelationalOperator: '<S393>/Equal6'
     */
    if (VeBPCR_T_HV_BatModTempMax_Arb >= KeBPCR_T_DefBatModTmp)
    {
        /* Switch: '<S462>/Switch1' */
        rtb_Switch1_jo = VeBPCR_T_HV_BatModTempMax_Arb;
    }
    else
    {
        /* Switch: '<S462>/Switch1' */
        rtb_Switch1_jo = VeBPCR_T_HV_BatModTempMin_Arb;
    }

    /* End of Switch: '<S462>/Switch1' */

    /* If: '<S473>/If' incorporates:
     *  UnitDelay: '<S473>/Unit Delay4'
     */
    if (BPCR_ac_DW.UnitDelay4_DSTATE_k)
    {
        /* Outputs for IfAction SubSystem: '<S473>/If Action Subsystem' incorporates:
         *  ActionPort: '<S476>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S476>/EdgeRising' */
        /* Logic: '<S480>/OR1' incorporates:
         *  UnitDelay: '<S480>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeBPCR_b_HV_B_p =
            !BPCR_ac_DW.UnitDelay_DSTATE_gb;

        /* Update for UnitDelay: '<S480>/Unit Delay' incorporates:
         *  Constant: '<S476>/TRUE Constant'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_gb = true;

        /* Outputs for Atomic SubSystem: '<S476>/Digital Lowpass Reset Enabled' */
        /* Switch: '<S479>/Switch1' incorporates:
         *  Constant: '<S476>/TRUE Constant'
         *  Logic: '<S480>/AND'
         *  Switch: '<S479>/Switch2'
         *  UnitDelay: '<S479>/Unit Delay'
         */
        if ((true) && rtb_TmpSignalConversionAtVeBPCR_b_HV_B_p)
        {
            BPCR_ac_DW.UnitDelay_DSTATE_fd = rtb_Switch1_jo;
        }
        else
        {
            if (true)
            {
                /* UnitDelay: '<S479>/Unit Delay' incorporates:
                 *  Constant: '<S481>/Calib'
                 *  Product: '<S479>/Multiplication'
                 *  Sum: '<S479>/Subtraction'
                 *  Sum: '<S479>/Summation'
                 *  Switch: '<S479>/Switch2'
                 */
                BPCR_ac_DW.UnitDelay_DSTATE_fd += (rtb_Switch1_jo -
                    BPCR_ac_DW.UnitDelay_DSTATE_fd) * KeBPCR_T_Temp_Filter;
            }
        }

        /* End of Switch: '<S479>/Switch1' */
        /* End of Outputs for SubSystem: '<S476>/Digital Lowpass Reset Enabled' */
        /* End of Outputs for SubSystem: '<S476>/EdgeRising' */

        /* Merge: '<S473>/Merge' incorporates:
         *  Gain: '<S482>/Gain'
         *  UnitDelay: '<S479>/Unit Delay'
         */
        BPCR_ac_B.SignalConversion_h = 1.0F * BPCR_ac_DW.UnitDelay_DSTATE_fd;

        /* End of Outputs for SubSystem: '<S473>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S473>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S477>/Action Port'
         */
        /* Merge: '<S473>/Merge' incorporates:
         *  Inport: '<S477>/In1'
         */
        BPCR_ac_B.SignalConversion_h = rtb_Switch1_jo;

        /* End of Outputs for SubSystem: '<S473>/If Action Subsystem1' */
    }

    /* End of If: '<S473>/If' */

    /* Outputs for Atomic SubSystem: '<S393>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S474>/EdgeRising' */
    /* Logic: '<S483>/AND' incorporates:
     *  Logic: '<S483>/OR1'
     *  UnitDelay: '<S483>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV_B_p =
        (rtb_TmpSignalConversionAtVeBPCR_b_HV__jn &&
         (!BPCR_ac_DW.UnitDelay_DSTATE_ma));

    /* Update for UnitDelay: '<S483>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_ma = rtb_TmpSignalConversionAtVeBPCR_b_HV__jn;

    /* End of Outputs for SubSystem: '<S474>/EdgeRising' */

    /* Switch: '<S474>/Switch1' incorporates:
     *  Logic: '<S474>/OR'
     *  Logic: '<S474>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeBPCR_b_HV__jn) ||
            rtb_TmpSignalConversionAtVeBPCR_b_HV_B_p)
    {
        /* Sum: '<S474>/Summation' incorporates:
         *  Constant: '<S474>/Constant Value1'
         *  UnitDelay: '<S474>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_c = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S474>/Summation' incorporates:
         *  Constant: '<S474>/Constant Value'
         *  UnitDelay: '<S474>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_c = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)BPCR_ac_DW.UnitDelay_DSTATE_c));

        /* MinMax: '<S474>/Minimum' incorporates:
         *  Constant: '<S464>/Calib'
         */
        if (KeBPCI_Cnt_HV_BatModTempMinWaitTme100ms <
                BPCR_ac_DW.UnitDelay_DSTATE_c)
        {
            /* Sum: '<S474>/Summation' */
            BPCR_ac_DW.UnitDelay_DSTATE_c =
                KeBPCI_Cnt_HV_BatModTempMinWaitTme100ms;
        }

        /* End of MinMax: '<S474>/Minimum' */
    }

    /* End of Switch: '<S474>/Switch1' */
    /* End of Outputs for SubSystem: '<S393>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S393>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S475>/EdgeRising' */
    /* Logic: '<S484>/AND' incorporates:
     *  Logic: '<S484>/OR1'
     *  UnitDelay: '<S484>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV_B_p =
        (rtb_TmpSignalConversionAtVeBPCR_b_HV__po &&
         (!BPCR_ac_DW.UnitDelay_DSTATE_ku));

    /* Update for UnitDelay: '<S484>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_ku = rtb_TmpSignalConversionAtVeBPCR_b_HV__po;

    /* End of Outputs for SubSystem: '<S475>/EdgeRising' */

    /* Switch: '<S475>/Switch1' incorporates:
     *  Logic: '<S475>/OR'
     *  Logic: '<S475>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeBPCR_b_HV__po) ||
            rtb_TmpSignalConversionAtVeBPCR_b_HV_B_p)
    {
        /* Sum: '<S475>/Summation' incorporates:
         *  Constant: '<S475>/Constant Value1'
         *  UnitDelay: '<S475>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_k = ((uint16)0U);
    }
    else
    {
        /* Sum: '<S475>/Summation' incorporates:
         *  Constant: '<S475>/Constant Value'
         *  UnitDelay: '<S475>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay_DSTATE_k = (uint16)(((uint32)((uint16)1U)) +
            ((uint32)BPCR_ac_DW.UnitDelay_DSTATE_k));

        /* MinMax: '<S475>/Minimum' incorporates:
         *  Constant: '<S463>/Calib'
         */
        if (KeBPCI_Cnt_HV_BatModTempMaxWaitTme100ms <
                BPCR_ac_DW.UnitDelay_DSTATE_k)
        {
            /* Sum: '<S475>/Summation' */
            BPCR_ac_DW.UnitDelay_DSTATE_k =
                KeBPCI_Cnt_HV_BatModTempMaxWaitTme100ms;
        }

        /* End of MinMax: '<S475>/Minimum' */
    }

    /* End of Switch: '<S475>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S393>/BatModTempWrtngEn' incorporates:
     *  EnablePort: '<S461>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S393>/Turn On Delay Sample' */
    /* Logic: '<S393>/Logical3' incorporates:
     *  Constant: '<S463>/Calib'
     *  Constant: '<S464>/Calib'
     *  Constant: '<S465>/Calib'
     *  Logic: '<S393>/Logical'
     *  Logic: '<S393>/Logical1'
     *  Logic: '<S393>/Logical2'
     *  Logic: '<S474>/AND'
     *  Logic: '<S475>/AND'
     *  RelationalOperator: '<S474>/Greater  Than'
     *  RelationalOperator: '<S475>/Greater  Than'
     *  UnitDelay: '<S474>/Unit Delay'
     *  UnitDelay: '<S475>/Unit Delay'
     */
    if ((((rtb_RelationalOperator5_i && (!rtb_UnitDelay_f1)) &&
            (rtb_TmpSignalConversionAtVeBPCR_b_HV__jn &&
             (BPCR_ac_DW.UnitDelay_DSTATE_c >=
              KeBPCI_Cnt_HV_BatModTempMinWaitTme100ms))) &&
            (rtb_TmpSignalConversionAtVeBPCR_b_HV__po &&
             (BPCR_ac_DW.UnitDelay_DSTATE_k >=
              KeBPCI_Cnt_HV_BatModTempMaxWaitTme100ms))) ||
            (KeBPCI_b_BatModTempStrgAlwysEn))
    {
        /* DataStoreWrite: '<S461>/Data Store Write' */
        BPCR_ac_DW.NeBPCR_T_BatModTmp = BPCR_ac_B.SignalConversion_h;
    }

    /* End of Logic: '<S393>/Logical3' */
    /* End of Outputs for SubSystem: '<S393>/Turn On Delay Sample' */
    /* End of Outputs for SubSystem: '<S393>/BatModTempWrtngEn' */
    /* End of Outputs for SubSystem: '<S393>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S473>/Signal Latch On' */
    /* Logic: '<S478>/OR2' incorporates:
     *  RelationalOperator: '<S473>/Comparison2'
     *  UnitDelay: '<S473>/Unit Delay2'
     *  UnitDelay: '<S478>/Unit Delay'
     */
    BPCR_ac_DW.UnitDelay_DSTATE_hl = ((rtb_Switch1_jo !=
        BPCR_ac_DW.UnitDelay2_DSTATE) || (BPCR_ac_DW.UnitDelay_DSTATE_hl));

    /* End of Outputs for SubSystem: '<S473>/Signal Latch On' */

    /* Switch: '<S394>/Switch' incorporates:
     *  Constant: '<S487>/Calib'
     *  Logic: '<S394>/Logical5'
     *  Lookup_n-D: '<S489>/Vector'
     *  Merge: '<Root>/Merge_118_Irv'
     *  Merge: '<Root>/Merge_145_Irv'
     *  Merge: '<S473>/Merge'
     *  SignalConversion generated from: '<S3>/VeBPCR_U_CellVoltHighThrsh_read'
     *  SignalConversion generated from: '<S3>/VeBPCR_b_CellVoltHighThrshFA_read'
     */
    if ((KeBPCR_b_DevCalUseOVCal) ||
            (Rte_IrvRead_BPCR_MedTEH_CellVoltHighThrshFAInit_write_IRV()))
    {
        VeBPCR_U_CellVoltUVThrsh = look1_iflf_binlca_16a
            (BPCR_ac_B.SignalConversion_h, ((const float32 *)
              &(KxBPCR_U_OVThrshCal[0])), ((const float32 *)
              &(KtBPCR_U_OVThrshCal[0])), 8U);
    }
    else
    {
        VeBPCR_U_CellVoltUVThrsh =
            Rte_IrvRead_BPCR_MedTEH_CellVoltHighThrsh_write_IRV();
    }

    /* End of Switch: '<S394>/Switch' */

    /* MinMax: '<S394>/MinMax' incorporates:
     *  Constant: '<S485>/Calib'
     */
    VeBPCR_U_CellVoltOVThrsh = fmaxf(KeBPCR_U_OVThrshMinLim,
        VeBPCR_U_CellVoltUVThrsh);

    /* Switch: '<S394>/Switch12' incorporates:
     *  Constant: '<S488>/Calib'
     *  Logic: '<S394>/Logical4'
     *  Lookup_n-D: '<S490>/Vector'
     *  Merge: '<Root>/Merge_115_Irv'
     *  Merge: '<Root>/Merge_146_Irv'
     *  Merge: '<S473>/Merge'
     *  SignalConversion generated from: '<S3>/VeBPCR_U_CellVoltLowThrsh_read'
     *  SignalConversion generated from: '<S3>/VeBPCR_b_CellVoltLowThrshFA_read'
     */
    if ((KeBPCR_b_DevCalUseUVCal) ||
            (Rte_IrvRead_BPCR_MedTEH_CellVoltLowThrshFAInit_write_IRV()))
    {
        VeBPCR_U_CellVoltUVThrsh = look1_iflf_binlca_16a
            (BPCR_ac_B.SignalConversion_h, ((const float32 *)
              &(KxBPCR_U_UVThrshCal[0])), ((const float32 *)
              &(KtBPCR_U_UVThrshCal[0])), 8U);
    }
    else
    {
        VeBPCR_U_CellVoltUVThrsh =
            Rte_IrvRead_BPCR_MedTEH_CellVoltLowThrsh_write_IRV();
    }

    /* End of Switch: '<S394>/Switch12' */

    /* MinMax: '<S394>/MinMax1' incorporates:
     *  Constant: '<S486>/Calib'
     */
    VeBPCR_U_CellVoltUVThrsh = fminf(KeBPCR_U_UVThrshMaxLim,
        VeBPCR_U_CellVoltUVThrsh);

    /* Update for UnitDelay: '<S473>/Unit Delay4' */
    BPCR_ac_DW.UnitDelay4_DSTATE_k = BPCR_ac_DW.UnitDelay_DSTATE_hl;

    /* Update for UnitDelay: '<S473>/Unit Delay2' */
    BPCR_ac_DW.UnitDelay2_DSTATE = rtb_Switch1_jo;

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/ProcBatPackSOC'
     */

    /* Outputs for Atomic SubSystem: '<S388>/EdgeRising1' */
    /* Logic: '<S494>/AND' incorporates:
     *  Constant: '<S388>/TRUE Constant'
     *  Logic: '<S494>/OR1'
     *  UnitDelay: '<S494>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__jn = ((true) &&
        (!BPCR_ac_DW.UnitDelay_DSTATE_fh));

    /* Update for UnitDelay: '<S494>/Unit Delay' incorporates:
     *  Constant: '<S388>/TRUE Constant'
     */
    BPCR_ac_DW.UnitDelay_DSTATE_fh = true;

    /* End of Outputs for SubSystem: '<S388>/EdgeRising1' */

    /* If: '<S388>/If1' */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__jn)
    {
        /* Outputs for IfAction SubSystem: '<S388>/Initial_SOC' incorporates:
         *  ActionPort: '<S496>/Action Port'
         */
        /* Switch: '<S496>/Switch' incorporates:
         *  Constant: '<S517>/Calib'
         */
        if (KeBPCR_b_SDCmptPrev)
        {
            /* Switch: '<S496>/Switch' incorporates:
             *  DataStoreRead: '<S388>/Data Store Read3'
             */
            VeBPCC_Pct_HV_BatSOC_DS = BPCR_ac_DW.DeBPCR_Pct_HV_BatSOC_DS;
        }
        else
        {
            /* Switch: '<S496>/Switch' incorporates:
             *  Constant: '<S516>/Calib'
             */
            VeBPCC_Pct_HV_BatSOC_DS = KeBPCR_Pct_SOC_Default;
        }

        /* End of Switch: '<S496>/Switch' */
        /* End of Outputs for SubSystem: '<S388>/Initial_SOC' */
    }

    /* End of If: '<S388>/If1' */

    /* Outputs for Atomic SubSystem: '<S495>/EdgeRising' */
    /* Logic: '<S500>/OR1' incorporates:
     *  UnitDelay: '<S500>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__po = !BPCR_ac_DW.UnitDelay_DSTATE_m2;

    /* Update for UnitDelay: '<S500>/Unit Delay' incorporates:
     *  Constant: '<S495>/TRUE Constant'
     */
    BPCR_ac_DW.UnitDelay_DSTATE_m2 = true;

    /* End of Outputs for SubSystem: '<S495>/EdgeRising' */

    /* UnitDelay: '<S388>/Unit Delay4' */
    VeBPCC_Pct_HV_BatSOC_Unfilt = BPCR_ac_DW.UnitDelay4_DSTATE;

    /* Outputs for Atomic SubSystem: '<S495>/EdgeRising' */
    /* Switch: '<S501>/Switch1' incorporates:
     *  Constant: '<S495>/TRUE Constant'
     *  Logic: '<S500>/AND'
     */
    if ((true) && rtb_TmpSignalConversionAtVeBPCR_b_HV__po)
    {
        /* Switch: '<S501>/Switch1' */
        VeBPCC_Pct_HV_BatSOC_LG = VeBPCC_Pct_HV_BatSOC_DS;
    }
    else
    {
        /* Gain: '<S495>/Gain' incorporates:
         *  Constant: '<S511>/Calib'
         */
        rtb_Switch1_jo = (-1.0F) * KeBPCR_Pct_SOCMaxStepChg;

        /* Outputs for Atomic SubSystem: '<S495>/Limiter' */
        /* Switch: '<S513>/Switch1' incorporates:
         *  Constant: '<S507>/Calib'
         *  RelationalOperator: '<S513>/Relational Operator'
         */
        if (KeBPCR_Pct_HV_BatSOC_Max < VeBPCC_Pct_HV_BatSOC_Unfilt)
        {
            /* Switch: '<S515>/Switch1' */
            rtb_Sum4 = KeBPCR_Pct_HV_BatSOC_Max;
        }
        else
        {
            /* Switch: '<S515>/Switch1' */
            rtb_Sum4 = VeBPCC_Pct_HV_BatSOC_Unfilt;
        }

        /* End of Switch: '<S513>/Switch1' */

        /* Switch: '<S513>/Switch' incorporates:
         *  Constant: '<S508>/Calib'
         *  RelationalOperator: '<S513>/Relational Operator1'
         */
        if (rtb_Sum4 <= KeBPCR_Pct_HV_BatSOC_Min)
        {
            rtb_Sum4 = KeBPCR_Pct_HV_BatSOC_Min;
        }

        /* End of Switch: '<S513>/Switch' */
        /* End of Outputs for SubSystem: '<S495>/Limiter' */

        /* Sum: '<S495>/Sum4' incorporates:
         *  UnitDelay: '<S495>/Unit Delay'
         */
        rtb_Sum4 -= VeBPCC_Pct_HV_BatSOC_LG;

        /* Outputs for Atomic SubSystem: '<S495>/Limiter2' */
        /* Switch: '<S515>/Switch1' incorporates:
         *  Constant: '<S511>/Calib'
         *  RelationalOperator: '<S515>/Relational Operator'
         */
        if (KeBPCR_Pct_SOCMaxStepChg < rtb_Sum4)
        {
            /* Switch: '<S515>/Switch1' */
            rtb_Sum4 = KeBPCR_Pct_SOCMaxStepChg;
        }

        /* End of Switch: '<S515>/Switch1' */

        /* Switch: '<S515>/Switch' incorporates:
         *  RelationalOperator: '<S515>/Relational Operator1'
         */
        if (rtb_Sum4 > rtb_Switch1_jo)
        {
            rtb_Switch1_jo = rtb_Sum4;
        }

        /* End of Switch: '<S515>/Switch' */
        /* End of Outputs for SubSystem: '<S495>/Limiter2' */

        /* Switch: '<S501>/Switch1' incorporates:
         *  Sum: '<S495>/Sum5'
         *  UnitDelay: '<S495>/Unit Delay'
         */
        VeBPCC_Pct_HV_BatSOC_LG = rtb_Switch1_jo + VeBPCC_Pct_HV_BatSOC_LG;
    }

    /* End of Switch: '<S501>/Switch1' */
    /* End of Outputs for SubSystem: '<S495>/EdgeRising' */

    /* Logic: '<S495>/Logical1' incorporates:
     *  Constant: '<S509>/Calib'
     *  Constant: '<S510>/Calib'
     *  RelationalOperator: '<S495>/Comparison1'
     *  RelationalOperator: '<S495>/Comparison2'
     */
    VeBPCC_b_CATL_Cond1 = ((VeBPCC_Pct_HV_BatSOC_LG <= KeBPCR_Pct_LG_MinSOC) ||
                           (VeBPCC_Pct_HV_BatSOC_LG >= KeBPCR_Pct_LG_MaxSOC));

    /* Product: '<S495>/Product1' incorporates:
     *  Constant: '<S503>/Calib'
     *  Product: '<S495>/Product3'
     */
    rtb_Sum4 = KeBPCR_K_CapFactor_Slope * VeBPCC_Pct_HV_BatSOC_LG;

    /* Sum: '<S495>/Sum' incorporates:
     *  Constant: '<S503>/Calib'
     *  Constant: '<S504>/Calib'
     *  Product: '<S495>/Product'
     *  Product: '<S495>/Product1'
     *  Sum: '<S495>/Sum1'
     */
    rtb_Switch1_jo = (KeBPCR_Pct_CATL_CS_SOC - (KeBPCR_K_CapFactor_Slope *
                       KeBPCR_Pct_CATL_CS_SOC)) + rtb_Sum4;

    /* Sum: '<S495>/Sum2' incorporates:
     *  Constant: '<S503>/Calib'
     *  Constant: '<S506>/Calib'
     *  Product: '<S495>/Product2'
     *  Sum: '<S495>/Sum3'
     */
    VeBPCC_Pct_BatSOC_CATL = (KeBPCR_Pct_CATL_Top_SOC -
        (KeBPCR_K_CapFactor_Slope * KeBPCR_Pct_CATL_Top_SOC)) + rtb_Sum4;

    /* Logic: '<S495>/Logical2' incorporates:
     *  Constant: '<S505>/Calib'
     *  RelationalOperator: '<S495>/Comparison3'
     *  RelationalOperator: '<S495>/Comparison4'
     */
    VeBPCC_b_CATL_Cond2 = ((rtb_Switch1_jo >= KeBPCR_Pct_CATL_Ct_SOC) &&
                           (VeBPCC_Pct_BatSOC_CATL <= KeBPCR_Pct_CATL_Ct_SOC));

    /* RelationalOperator: '<S495>/Comparison5' incorporates:
     *  Constant: '<S505>/Calib'
     */
    VeBPCC_b_CATL_Cond3 = (rtb_Switch1_jo < KeBPCR_Pct_CATL_Ct_SOC);

    /* RelationalOperator: '<S495>/Comparison6' incorporates:
     *  Constant: '<S505>/Calib'
     */
    VeBPCC_b_CATL_Cond4 = (VeBPCC_Pct_BatSOC_CATL > KeBPCR_Pct_CATL_Ct_SOC);

    /* Switch: '<S502>/Switch1' incorporates:
     *  Switch: '<S502>/Switch2'
     *  Switch: '<S502>/Switch3'
     *  Switch: '<S502>/Switch5'
     */
    if (VeBPCC_b_CATL_Cond1)
    {
        /* Switch: '<S502>/Switch1' */
        VeBPCC_Pct_BatSOC_CATL = VeBPCC_Pct_HV_BatSOC_LG;
    }
    else if (VeBPCC_b_CATL_Cond2)
    {
        /* Switch: '<S502>/Switch2' incorporates:
         *  Constant: '<S505>/Calib'
         *  Switch: '<S502>/Switch1'
         */
        VeBPCC_Pct_BatSOC_CATL = KeBPCR_Pct_CATL_Ct_SOC;
    }
    else if (VeBPCC_b_CATL_Cond3)
    {
        /* Switch: '<S502>/Switch3' incorporates:
         *  Switch: '<S502>/Switch1'
         *  Switch: '<S502>/Switch2'
         */
        VeBPCC_Pct_BatSOC_CATL = rtb_Switch1_jo;
    }
    else
    {
        if (!VeBPCC_b_CATL_Cond4)
        {
            /* Switch: '<S502>/Switch1' incorporates:
             *  Switch: '<S502>/Switch2'
             *  Switch: '<S502>/Switch3'
             *  Switch: '<S502>/Switch5'
             */
            VeBPCC_Pct_BatSOC_CATL = VeBPCC_Pct_HV_BatSOC_LG;
        }
    }

    /* End of Switch: '<S502>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S495>/Limiter1' */
    /* Switch: '<S514>/Switch1' incorporates:
     *  Constant: '<S495>/Constant Value'
     *  RelationalOperator: '<S514>/Relational Operator'
     */
    if (100.0F < VeBPCC_Pct_BatSOC_CATL)
    {
        /* Switch: '<S514>/Switch1' */
        VeBPCC_Pct_BatSOC_CATL = 100.0F;
    }

    /* End of Switch: '<S514>/Switch1' */

    /* Switch: '<S514>/Switch' incorporates:
     *  Constant: '<S495>/Constant Value1'
     *  RelationalOperator: '<S514>/Relational Operator1'
     */
    if (VeBPCC_Pct_BatSOC_CATL <= 0.0F)
    {
        /* Switch: '<S514>/Switch' */
        VeBPCC_Pct_BatSOC_CATL = 0.0F;
    }

    /* End of Switch: '<S514>/Switch' */
    /* End of Outputs for SubSystem: '<S495>/Limiter1' */

    /* Switch: '<S495>/Switch1' incorporates:
     *  Constant: '<S512>/Calib'
     *  DataStoreWrite: '<S495>/Data Store Write'
     */
    if (KeBPCR_b_UseCATLSOC)
    {
        BPCR_ac_DW.DeBPCR_Pct_HV_BatSOC_DS = VeBPCC_Pct_BatSOC_CATL;
    }
    else
    {
        BPCR_ac_DW.DeBPCR_Pct_HV_BatSOC_DS = VeBPCC_Pct_HV_BatSOC_LG;
    }

    /* End of Switch: '<S495>/Switch1' */

    /* SignalConversion: '<S495>/Signal Conversion' incorporates:
     *  DataStoreWrite: '<S495>/Data Store Write'
     */
    rtb_Switch1_jo = BPCR_ac_DW.DeBPCR_Pct_HV_BatSOC_DS;

    /* Logic: '<S493>/Logical Operator2' incorporates:
     *  Constant: '<S493>/Constant Value'
     *  RelationalOperator: '<S493>/Comparison2'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV__po = ((VeBPCI_b_HV_BatPackSOC_FA_Ovrd)
        || (VeBPCR_Pct_HV_BatPackSOC_Ovrd < 0.05F));

    /* Outputs for Atomic SubSystem: '<S493>/EdgeRising3' */
    /* Logic: '<S499>/OR1' incorporates:
     *  UnitDelay: '<S499>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV_B_p = !BPCR_ac_DW.UnitDelay_DSTATE_k3;

    /* Update for UnitDelay: '<S499>/Unit Delay' */
    BPCR_ac_DW.UnitDelay_DSTATE_k3 = rtb_TmpSignalConversionAtVeBPCR_b_HV__po;

    /* End of Outputs for SubSystem: '<S493>/EdgeRising3' */

    /* Switch: '<S388>/Switch' */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__jn)
    {
        /* Switch: '<S388>/Switch' */
        rtb_Sum4 = VeBPCC_Pct_HV_BatSOC_DS;
    }
    else
    {
        /* Switch: '<S388>/Switch' */
        rtb_Sum4 = VeBPCC_Pct_HV_BatSOC_Unfilt;
    }

    /* End of Switch: '<S388>/Switch' */

    /* If: '<S493>/If' incorporates:
     *  Logic: '<S493>/Logical Operator1'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV__jn ||
            rtb_TmpSignalConversionAtVeBPCR_b_HV__po)
    {
        /* Outputs for IfAction SubSystem: '<S388>/SOC_at_FA' incorporates:
         *  ActionPort: '<S497>/Action Port'
         */
        /* Switch: '<S518>/Switch4' incorporates:
         *  Constant: '<S518>/Constant'
         *  Constant: '<S518>/Constant2'
         *  Constant: '<S522>/Calib'
         *  Constant: '<S526>/Calib'
         *  Constant: '<S528>/Calib'
         *  Logic: '<S518>/Logical Operator'
         *  Lookup_n-D: '<S531>/Vector'
         *  RelationalOperator: '<S518>/Relational Operator1'
         *  RelationalOperator: '<S518>/Relational Operator6'
         *  RelationalOperator: '<S518>/Relational Operator7'
         *  RelationalOperator: '<S518>/Relational Operator8'
         *  SignalConversion generated from: '<S3>/VeBPCR_T_BatModTmp_read'
         *  Sum: '<S518>/Sum5'
         *  UnitDelay: '<S518>/Unit Delay1'
         */
        if ((((rtb_TmpSignalConversionAtVeBPCI_U_BatVol >= look1_iflf_binlca_16a
                (rtb_VeBPCR_T_BatModTmp_write_IRV, ((const float32 *)
                 &(KxBPCR_U_VMinThsld[0])), ((const float32 *)
                 &(KtBPCR_U_VMinThsld[0])), 8U)) || (VeBPCI_I_HV_BatCurrArb >=
                KeBPCR_I_CurrLoSOC)) || (VeBPCI_I_HV_BatCurrArb <= 0.0F)) ||
                (rtb_Sum4 <= KeBPCR_Pct_LoSOCThsld))
        {
            BPCR_ac_DW.UnitDelay1_DSTATE = 0.0F;
        }

        BPCR_ac_DW.UnitDelay1_DSTATE += KeBPCR_t_BaseTime;

        /* End of Switch: '<S518>/Switch4' */

        /* RelationalOperator: '<S518>/Relational Operator5' incorporates:
         *  Constant: '<S529>/Calib'
         *  UnitDelay: '<S518>/Unit Delay1'
         */
        rtb_RelationalOperator5_i = (BPCR_ac_DW.UnitDelay1_DSTATE >=
            KeBPCR_t_SOCExtrmDebounce);

        /* Switch: '<S518>/Switch3' incorporates:
         *  Constant: '<S518>/Constant1'
         *  Constant: '<S518>/Constant3'
         *  Constant: '<S521>/Calib'
         *  Constant: '<S525>/Calib'
         *  Constant: '<S528>/Calib'
         *  Logic: '<S518>/Logical Operator1'
         *  Lookup_n-D: '<S530>/Vector'
         *  RelationalOperator: '<S518>/Relational Operator10'
         *  RelationalOperator: '<S518>/Relational Operator2'
         *  RelationalOperator: '<S518>/Relational Operator3'
         *  RelationalOperator: '<S518>/Relational Operator9'
         *  SignalConversion generated from: '<S3>/VeBPCR_T_BatModTmp_read'
         *  Sum: '<S518>/Sum1'
         */
        if ((((rtb_TmpSignalConversionAtVeBPCI_U_BatV_h <= look1_iflf_binlca_16a
                (rtb_VeBPCR_T_BatModTmp_write_IRV, ((const float32 *)
                 &(KxBPCR_U_VMaxThsld[0])), ((const float32 *)
                 &(KtBPCR_U_VMaxThsld[0])), 8U)) || (VeBPCI_I_HV_BatCurrArb <=
                KeBPCR_I_CurrHiSOC)) || (VeBPCI_I_HV_BatCurrArb >= 0.0F)) ||
                (rtb_Sum4 >= KeBPCR_Pct_HiSOCThsld))
        {
            BPCR_ac_DW.UnitDelay_DSTATE_f = 0.0F;
        }

        BPCR_ac_DW.UnitDelay_DSTATE_f += KeBPCR_t_BaseTime;

        /* End of Switch: '<S518>/Switch3' */

        /* RelationalOperator: '<S518>/Relational Operator4' incorporates:
         *  Constant: '<S529>/Calib'
         */
        rtb_LogicalOperator6_a = (BPCR_ac_DW.UnitDelay_DSTATE_f >=
            KeBPCR_t_SOCExtrmDebounce);

        /* Switch: '<S518>/Switch6' incorporates:
         *  Constant: '<S527>/Calib'
         */
        if (KeBPCR_b_SOCExtrmEnbl)
        {
            /* Switch: '<S518>/Switch6' incorporates:
             *  Logic: '<S518>/Logical Operator2'
             */
            rtb_UnitDelay_f1 = (rtb_RelationalOperator5_i ||
                                rtb_LogicalOperator6_a);
        }
        else
        {
            /* Switch: '<S518>/Switch6' incorporates:
             *  Constant: '<S518>/FALSE Constant'
             */
            rtb_UnitDelay_f1 = false;
        }

        /* End of Switch: '<S518>/Switch6' */

        /* Outputs for Atomic SubSystem: '<S518>/EdgeRising1' */
        /* Logic: '<S520>/AND' incorporates:
         *  Logic: '<S520>/OR1'
         *  UnitDelay: '<S520>/Unit Delay'
         */
        VeBPCC_b_SOCExtrmTrig = (rtb_UnitDelay_f1 &&
            (!BPCR_ac_DW.UnitDelay_DSTATE_cy));

        /* Update for UnitDelay: '<S520>/Unit Delay' */
        BPCR_ac_DW.UnitDelay_DSTATE_cy = rtb_UnitDelay_f1;

        /* End of Outputs for SubSystem: '<S518>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S519>/Accumulator Reset Enabled Limited' */
        /* Outputs for Atomic SubSystem: '<S493>/EdgeRising3' */
        /* Switch: '<S532>/Switch1' incorporates:
         *  Constant: '<S519>/TRUE Constant'
         *  Logic: '<S493>/Logical1'
         *  Logic: '<S497>/Logical1'
         *  Logic: '<S499>/AND'
         *  Switch: '<S532>/Switch2'
         */
        if ((VeBPCC_b_SOCExtrmTrig) ||
                ((rtb_TmpSignalConversionAtVeBPCR_b_HV__po &&
                  rtb_TmpSignalConversionAtVeBPCR_b_HV_B_p) ||
                 rtb_TmpSignalConversionAtVeBPCR_b_HV__jn))
        {
            /* Switch: '<S518>/Switch5' incorporates:
             *  Constant: '<S527>/Calib'
             */
            if (KeBPCR_b_SOCExtrmEnbl)
            {
                /* Switch: '<S518>/Switch2' incorporates:
                 *  Switch: '<S518>/Switch1'
                 */
                if (rtb_LogicalOperator6_a)
                {
                    /* UnitDelay: '<S532>/Unit Delay' incorporates:
                     *  Constant: '<S523>/Calib'
                     *  Switch: '<S518>/Switch2'
                     */
                    BPCR_ac_DW.UnitDelay_DSTATE_d = KeBPCR_Pct_ExtrmHiSOC;
                }
                else if (rtb_RelationalOperator5_i)
                {
                    /* Switch: '<S518>/Switch1' incorporates:
                     *  Constant: '<S524>/Calib'
                     *  Switch: '<S518>/Switch2'
                     *  UnitDelay: '<S532>/Unit Delay'
                     */
                    BPCR_ac_DW.UnitDelay_DSTATE_d = KeBPCR_Pct_ExtrmLoSOC;
                }
                else
                {
                    /* UnitDelay: '<S532>/Unit Delay' incorporates:
                     *  Switch: '<S518>/Switch1'
                     *  Switch: '<S518>/Switch2'
                     */
                    BPCR_ac_DW.UnitDelay_DSTATE_d = rtb_Sum4;
                }

                /* End of Switch: '<S518>/Switch2' */
            }
            else
            {
                /* UnitDelay: '<S532>/Unit Delay' incorporates:
                 *  Switch: '<S518>/Switch5'
                 */
                BPCR_ac_DW.UnitDelay_DSTATE_d = rtb_Sum4;
            }

            /* End of Switch: '<S518>/Switch5' */
        }
        else
        {
            if (true)
            {
                /* Product: '<S519>/Product1' incorporates:
                 *  Constant: '<S519>/Constant Value'
                 *  Constant: '<S534>/Calib'
                 *  Switch: '<S532>/Switch2'
                 */
                rtb_TmpSignalConversionAtVeBPCI_U_BatVol =
                    (VeBPCI_I_HV_BatCurrArb * KeBPCR_t_BaseTime) *
                    (-0.027777778F);

                /* Outputs for Atomic SubSystem: '<S519>/Protected Division' */
                /* Switch: '<S535>/Switch1' incorporates:
                 *  Constant: '<S533>/Calib'
                 *  Constant: '<S535>/Constant Value'
                 *  Constant: '<S535>/Constant Value1'
                 *  Constant: '<S535>/Constant Value2'
                 *  Constant: '<S535>/Constant Value3'
                 *  Logic: '<S535>/AND'
                 *  RelationalOperator: '<S535>/Greater Than or Equal '
                 *  RelationalOperator: '<S535>/Greater Than or Equal 1'
                 *  RelationalOperator: '<S535>/Not Equal'
                 *  RelationalOperator: '<S535>/Not Equal1'
                 *  Switch: '<S532>/Switch2'
                 *  Switch: '<S535>/Switch2'
                 *  Switch: '<S535>/Switch3'
                 */
                if ((rtb_TmpSignalConversionAtVeBPCI_U_BatVol != 0.0F) &&
                        (KeBPCR_q_BatPackCap != 0.0F))
                {
                    /* Switch: '<S535>/Switch1' incorporates:
                     *  Product: '<S535>/Division'
                     */
                    rtb_TmpSignalConversionAtVeBPCI_U_BatVol /=
                        KeBPCR_q_BatPackCap;
                }
                else if (rtb_TmpSignalConversionAtVeBPCI_U_BatVol > 0.0F)
                {
                    /* Switch: '<S535>/Switch2' incorporates:
                     *  Constant: '<S535>/MAXFLOAT'
                     *  Switch: '<S535>/Switch1'
                     */
                    rtb_TmpSignalConversionAtVeBPCI_U_BatVol = 3.402823466E+38F;
                }
                else if (rtb_TmpSignalConversionAtVeBPCI_U_BatVol < 0.0F)
                {
                    /* Switch: '<S535>/Switch3' incorporates:
                     *  Constant: '<S535>/MINFLOAT'
                     *  Switch: '<S535>/Switch1'
                     *  Switch: '<S535>/Switch2'
                     */
                    rtb_TmpSignalConversionAtVeBPCI_U_BatVol =
                        (-3.402823466E+38F);
                }
                else
                {
                    /* Switch: '<S535>/Switch1' incorporates:
                     *  Constant: '<S535>/Constant Value4'
                     *  Switch: '<S535>/Switch2'
                     *  Switch: '<S535>/Switch3'
                     */
                    rtb_TmpSignalConversionAtVeBPCI_U_BatVol = 0.0F;
                }

                /* End of Switch: '<S535>/Switch1' */
                /* End of Outputs for SubSystem: '<S519>/Protected Division' */

                /* Sum: '<S532>/Summation' incorporates:
                 *  Switch: '<S532>/Switch2'
                 *  UnitDelay: '<S532>/Unit Delay'
                 */
                BPCR_ac_DW.UnitDelay_DSTATE_d +=
                    rtb_TmpSignalConversionAtVeBPCI_U_BatVol;

                /* Outputs for Atomic SubSystem: '<S532>/Limiter' */
                /* Switch: '<S537>/Switch1' incorporates:
                 *  Constant: '<S519>/Constant Value2'
                 *  RelationalOperator: '<S537>/Relational Operator'
                 *  Switch: '<S532>/Switch2'
                 */
                if (100.0F < BPCR_ac_DW.UnitDelay_DSTATE_d)
                {
                    /* Switch: '<S537>/Switch1' */
                    BPCR_ac_DW.UnitDelay_DSTATE_d = 100.0F;
                }

                /* End of Switch: '<S537>/Switch1' */

                /* Switch: '<S537>/Switch' incorporates:
                 *  Constant: '<S519>/Constant Value1'
                 *  RelationalOperator: '<S537>/Relational Operator1'
                 *  Switch: '<S532>/Switch2'
                 */
                if (BPCR_ac_DW.UnitDelay_DSTATE_d <= 0.0F)
                {
                    /* Switch: '<S532>/Switch2' */
                    BPCR_ac_DW.UnitDelay_DSTATE_d = 0.0F;
                }

                /* End of Switch: '<S537>/Switch' */
                /* End of Outputs for SubSystem: '<S532>/Limiter' */
            }
        }

        /* End of Switch: '<S532>/Switch1' */
        /* End of Outputs for SubSystem: '<S493>/EdgeRising3' */
        /* End of Outputs for SubSystem: '<S519>/Accumulator Reset Enabled Limited' */

        /* Gain: '<S536>/Gain' incorporates:
         *  UnitDelay: '<S388>/Unit Delay4'
         *  UnitDelay: '<S532>/Unit Delay'
         */
        BPCR_ac_DW.UnitDelay4_DSTATE = 1.0F * BPCR_ac_DW.UnitDelay_DSTATE_d;

        /* End of Outputs for SubSystem: '<S388>/SOC_at_FA' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S388>/SOC_from_BPCM' incorporates:
         *  ActionPort: '<S498>/Action Port'
         */
        /* Gain: '<S538>/Gain' incorporates:
         *  UnitDelay: '<S388>/Unit Delay4'
         */
        BPCR_ac_DW.UnitDelay4_DSTATE = 1.0F * VeBPCR_Pct_HV_BatPackSOC_Ovrd;

        /* End of Outputs for SubSystem: '<S388>/SOC_from_BPCM' */
    }

    /* End of If: '<S493>/If' */

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeBPCR_P_HV_BatChrgPwrET_Arb' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_P_HV_BatChrgPwrET_Arb'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatChrgPwrET_Arb_Value
        (VeBPCR_P_HV_BatChrgPwrET_Arb);

    /* Outport: '<Root>/VeBPCR_P_HV_BatChrgPwrLT_Arb' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_P_HV_BatChrgPwrLT_Arb'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatChrgPwrLT_Arb_Value
        (VeBPCR_P_HV_BatChrgPwrLT_Arb);

    /* Outport: '<Root>/VeBPCR_P_HV_BatChrgPwrST_Arb' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_P_HV_BatChrgPwrST_Arb'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatChrgPwrST_Arb_Value
        (VeBPCR_P_HV_BatChrgPwrST_Arb);

    /* Outport: '<Root>/VeBPCR_P_HV_BatDschrgPwrET_Arb' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_P_HV_BatDschrgPwrET_Arb'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatDschrgPwrET_Arb_Value
        (VeBPCR_P_HV_BatDschrgPwrET_Arb);

    /* Outport: '<Root>/VeBPCR_P_HV_BatDschrgPwrLT_Arb' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_P_HV_BatDschrgPwrLT_Arb'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatDschrgPwrLT_Arb_Value
        (VeBPCR_P_HV_BatDschrgPwrLT_Arb);

    /* Outport: '<Root>/VeBPCR_P_HV_BatDschrgPwrST_Arb' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_P_HV_BatDschrgPwrST_Arb'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatDschrgPwrST_Arb_Value
        (VeBPCR_P_HV_BatDschrgPwrST_Arb);

    /* Outport: '<Root>/VeBPCR_P_TracBat_EChrgPowLongMod' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_P_TracBat_EChrgPowLongMod'
     */
    (void)Rte_Write_VeBPCR_P_TracBat_EChrgPowLongMod_Value
        (VeBPCR_P_TracBat_EChrgPowLongMod);

    /* Outport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Write_VeBPCR_Pct_HV_BatPackSOC_Arb_Value(rtb_Switch1_jo);

    /* Outport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Ovrd' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_Pct_HV_BatPackSOC_Ovrd'
     */
    (void)Rte_Write_VeBPCR_Pct_HV_BatPackSOC_Ovrd_Value
        (VeBPCR_Pct_HV_BatPackSOC_Ovrd);

    /* Outport: '<Root>/VeBPCR_T_BatModTmp' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_T_BatModTmp'
     */
    (void)Rte_Write_VeBPCR_T_BatModTmp_Value(BPCR_ac_B.SignalConversion_h);

    /* Outport: '<Root>/VeBPCR_T_HV_BatModTempMax_Arb' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_T_HV_BatModTempMax_Arb'
     */
    (void)Rte_Write_VeBPCR_T_HV_BatModTempMax_Arb_Value
        (VeBPCR_T_HV_BatModTempMax_Arb);

    /* Outport: '<Root>/VeBPCR_T_HV_BatModTempMin_Arb' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_T_HV_BatModTempMin_Arb'
     */
    (void)Rte_Write_VeBPCR_T_HV_BatModTempMin_Arb_Value
        (VeBPCR_T_HV_BatModTempMin_Arb);

    /* Outport: '<Root>/VeBPCR_U_CellVoltOVThrsh' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_U_CellVoltOVThrsh'
     */
    (void)Rte_Write_VeBPCR_U_CellVoltOVThrsh_Value(VeBPCR_U_CellVoltOVThrsh);

    /* Outport: '<Root>/VeBPCR_U_CellVoltUVThrsh' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_U_CellVoltUVThrsh'
     */
    (void)Rte_Write_VeBPCR_U_CellVoltUVThrsh_Value(VeBPCR_U_CellVoltUVThrsh);

    /* Outport: '<Root>/VeBPCR_b_CmdBatPwrLimSFA_Enbl' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_b_CmdBatPwrLimSFA_Enbl'
     */
    (void)Rte_Write_VeBPCR_b_CmdBatPwrLimSFA_Enbl_Value(rtb_AND_kj);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrET_FA_Ovrd' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatChrgPwrET_FA_Ovrd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrET_FA_Ovrd_Value
        (rtb_TmpSignalConversionAtVeBPCR_b_HV__mk);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrLT_FA_Ovrd' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatChrgPwrLT_FA_Ovrd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrLT_FA_Ovrd_Value
        (rtb_TmpSignalConversionAtVeBPCR_b_HV__p5);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrST_FA_Ovrd' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatChrgPwrST_FA_Ovrd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrST_FA_Ovrd_Value
        (rtb_TmpSignalConversionAtVeBPCR_b_HV__bm);

    /* Outport: '<Root>/VeBPCR_b_HV_BatCurrSFA' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatCurrSFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatCurrSFA_Value(rtb_OR1_au);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrET_FA_Ovrd' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatDschrgPwrET_FA_Ovrd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrET_FA_Ovrd_Value
        (rtb_TmpSignalConversionAtVeBPCR_b_HV__d5);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd_Value
        (VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrST_FA_Ovrd' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatDschrgPwrST_FA_Ovrd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrST_FA_Ovrd_Value
        (rtb_TmpSignalConversionAtVeBPCR_b_HV_B_e);

    /* Outport: '<Root>/VeBPCR_b_HV_BatMaxModTmpSFA' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatMaxModTmpSFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatMaxModTmpSFA_Value
        (rtb_TmpSignalConversionAtVeBPCR_b_HV__ju);

    /* Outport: '<Root>/VeBPCR_b_HV_BatPackSOC_FA_Ovrd' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatPackSOC_FA_Ovrd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatPackSOC_FA_Ovrd_Value
        (VeBPCI_b_HV_BatPackSOC_FA_Ovrd);

    /* Outport: '<Root>/VeBPCR_b_HV_BatPackSOC_SFA' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatPackSOC_SFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatPackSOC_SFA_Value(rtb_AND_mu);

    /* Outport: '<Root>/VeBPCR_b_HV_BatVoltModMaxSFA' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_b_HV_BatVoltModMaxSFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatVoltModMaxSFA_Value(rtb_Switch18);

    /* Merge: '<Root>/Merge_11_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPCR_T_BatModTmp_write'
     * */
    Rte_IrvWrite_BPCR_MedTEH_VeBPCR_T_BatModTmp_write_IRV
        (BPCR_ac_B.SignalConversion_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_I_HV_BatCurr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_I_HV_BatCurr' */
    /* Outport: '<Root>/VeBPCR_I_HV_BatCurr' incorporates:
     *  Chart: '<S6>/FsftBPCR_I_HV_BatCurrChrt'
     *  SignalConversion generated from: '<S6>/VeBPCR_I_HV_BatCurr'
     */
    /* Gateway: FsftBPCR_I_HV_BatCurr/FsftBPCR_I_HV_BatCurrChrt */
    /* During: FsftBPCR_I_HV_BatCurr/FsftBPCR_I_HV_BatCurrChrt */
    /* Entry Internal: FsftBPCR_I_HV_BatCurr/FsftBPCR_I_HV_BatCurrChrt */
    /* Transition: '<S643>:2' */
    (void)Rte_Write_VeBPCR_I_HV_BatCurr_Value(KeBPCI_I_HV_BatCurrDflt);

    /* Outport: '<Root>/VeBPCR_b_HV_BatCurrFA' incorporates:
     *  Chart: '<S6>/FsftBPCR_I_HV_BatCurrChrt'
     *  SignalConversion generated from: '<S6>/VeBPCR_b_HV_BatCurrFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatCurrFA_Value(true);

    /* Merge: '<Root>/Merge_120_Irv' incorporates:
     *  Chart: '<S6>/FsftBPCR_I_HV_BatCurrChrt'
     *  SignalConversion generated from: '<S6>/VeBPCR_b_HV_BatCurrFA_write'
     */
    Rte_IrvWrite_FsftBPCR_I_HV_BatCurr_HV_BatCurrFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_I_HV_BatCurr' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_I_MaxChgCurrAlwd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_I_MaxChgCurrAlwd' */
    /* Outport: '<Root>/VeBPCR_b_MaxChgCurrAlwdFA' incorporates:
     *  Chart: '<S7>/FsftBPCR_I_MaxChgCurrAlwdChrt'
     *  SignalConversion generated from: '<S7>/VeBPCR_b_MaxChgCurrAlwdFA'
     */
    /* Gateway: FsftBPCR_I_MaxChgCurrAlwd/FsftBPCR_I_MaxChgCurrAlwdChrt */
    /* During: FsftBPCR_I_MaxChgCurrAlwd/FsftBPCR_I_MaxChgCurrAlwdChrt */
    /* Entry Internal: FsftBPCR_I_MaxChgCurrAlwd/FsftBPCR_I_MaxChgCurrAlwdChrt */
    /* Transition: '<S644>:2' */
    (void)Rte_Write_VeBPCR_b_MaxChgCurrAlwdFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_I_MaxChgCurrAlwd' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_P_TracBat_EChrgPowLong(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_P_TracBat_EChrgPowLong' */
    /* Outport: '<Root>/VeBPCR_b_TracBat_EChrgPowLongFA' incorporates:
     *  Chart: '<S8>/FsftBPCR_P_TracBat_EChrgPowLongChrt'
     *  SignalConversion generated from: '<S8>/VeBPCR_b_TracBat_EChrgPowLongFA'
     */
    /* Gateway: FsftBPCR_P_TracBat_EChrgPowLong/FsftBPCR_P_TracBat_EChrgPowLongChrt */
    /* During: FsftBPCR_P_TracBat_EChrgPowLong/FsftBPCR_P_TracBat_EChrgPowLongChrt */
    /* Entry Internal: FsftBPCR_P_TracBat_EChrgPowLong/FsftBPCR_P_TracBat_EChrgPowLongChrt */
    /* Transition: '<S645>:2' */
    (void)Rte_Write_VeBPCR_b_TracBat_EChrgPowLongFA_Value(true);

    /* Merge: '<Root>/Merge_71_Irv' incorporates:
     *  Chart: '<S8>/FsftBPCR_P_TracBat_EChrgPowLongChrt'
     *  SignalConversion generated from: '<S8>/VeBPCR_b_TracBat_EChrgPowLongFA_write'
     */
    Rte_IrvWrite_FsftBPCR_P_TracBat_EChrgPowLong_TracBat_EChrgPowLongV_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_P_TracBat_EChrgPowLong' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_R_HV_BatImped(void)
{
    /* local block i/o variables */
    float32 rtb_LeBPCR_R_HV_BatImped_out;
    boolean rtb_LeBPCR_b_HV_BatImpedFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_R_HV_BatImped' */
    /* Chart: '<S9>/FsftBPCR_R_HV_BatImpedChrt' */
    /* Gateway: FsftBPCR_R_HV_BatImped/FsftBPCR_R_HV_BatImpedChrt */
    /* During: FsftBPCR_R_HV_BatImped/FsftBPCR_R_HV_BatImpedChrt */
    /* Entry Internal: FsftBPCR_R_HV_BatImped/FsftBPCR_R_HV_BatImpedChrt */
    /* Transition: '<S646>:2' */
    rtb_LeBPCR_R_HV_BatImped_out = KeBPCI_R_HV_BatImpedDflt;
    rtb_LeBPCR_b_HV_BatImpedFA_out = true;

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_R_HV_BatImped' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_U_CellVoltHighThrsh(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_U_CellVoltHighThrsh' */
    /* Outport: '<Root>/VeBPCR_U_CellVoltHighThrsh' incorporates:
     *  Chart: '<S10>/FsftBPCR_U_CellVoltHighThrshChrt'
     *  SignalConversion generated from: '<S10>/VeBPCR_U_CellVoltHighThrsh'
     */
    /* Gateway: FsftBPCR_U_CellVoltHighThrsh/FsftBPCR_U_CellVoltHighThrshChrt */
    /* During: FsftBPCR_U_CellVoltHighThrsh/FsftBPCR_U_CellVoltHighThrshChrt */
    /* Entry Internal: FsftBPCR_U_CellVoltHighThrsh/FsftBPCR_U_CellVoltHighThrshChrt */
    /* Transition: '<S647>:2' */
    (void)Rte_Write_VeBPCR_U_CellVoltHighThrsh_Value
        (KeBPCI_U_CellVoltHighThrshDflt);

    /* Outport: '<Root>/VeBPCR_b_CellVoltHighThrshFA' incorporates:
     *  Chart: '<S10>/FsftBPCR_U_CellVoltHighThrshChrt'
     *  SignalConversion generated from: '<S10>/VeBPCR_b_CellVoltHighThrshFA'
     */
    (void)Rte_Write_VeBPCR_b_CellVoltHighThrshFA_Value(true);

    /* Merge: '<Root>/Merge_118_Irv' incorporates:
     *  Chart: '<S10>/FsftBPCR_U_CellVoltHighThrshChrt'
     *  SignalConversion generated from: '<S10>/VeBPCR_U_CellVoltHighThrsh_write'
     */
    Rte_IrvWrite_FsftBPCR_U_CellVoltHighThrsh_CellVoltHighThrsh_write_IRV
        (KeBPCI_U_CellVoltHighThrshDflt);

    /* Merge: '<Root>/Merge_145_Irv' incorporates:
     *  Chart: '<S10>/FsftBPCR_U_CellVoltHighThrshChrt'
     *  SignalConversion generated from: '<S10>/VeBPCR_b_CellVoltHighThrshFA_write'
     */
    Rte_IrvWrite_FsftBPCR_U_CellVoltHighThrsh_CellVoltHighThrshFAInit_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_U_CellVoltHighThrsh' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_U_CellVoltLowThrsh(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_U_CellVoltLowThrsh' */
    /* Outport: '<Root>/VeBPCR_U_CellVoltLowThrsh' incorporates:
     *  Chart: '<S11>/FsftBPCR_U_CellVoltLowThrshChrt'
     *  SignalConversion generated from: '<S11>/VeBPCR_U_CellVoltLowThrsh'
     */
    /* Gateway: FsftBPCR_U_CellVoltLowThrsh/FsftBPCR_U_CellVoltLowThrshChrt */
    /* During: FsftBPCR_U_CellVoltLowThrsh/FsftBPCR_U_CellVoltLowThrshChrt */
    /* Entry Internal: FsftBPCR_U_CellVoltLowThrsh/FsftBPCR_U_CellVoltLowThrshChrt */
    /* Transition: '<S648>:2' */
    (void)Rte_Write_VeBPCR_U_CellVoltLowThrsh_Value
        (KeBPCI_U_CellVoltLowThrshDflt);

    /* Outport: '<Root>/VeBPCR_b_CellVoltLowThrshFA' incorporates:
     *  Chart: '<S11>/FsftBPCR_U_CellVoltLowThrshChrt'
     *  SignalConversion generated from: '<S11>/VeBPCR_b_CellVoltLowThrshFA'
     */
    (void)Rte_Write_VeBPCR_b_CellVoltLowThrshFA_Value(true);

    /* Merge: '<Root>/Merge_115_Irv' incorporates:
     *  Chart: '<S11>/FsftBPCR_U_CellVoltLowThrshChrt'
     *  SignalConversion generated from: '<S11>/VeBPCR_U_CellVoltLowThrsh_write'
     */
    Rte_IrvWrite_FsftBPCR_U_CellVoltLowThrsh_CellVoltLowThrsh_write_IRV
        (KeBPCI_U_CellVoltLowThrshDflt);

    /* Merge: '<Root>/Merge_146_Irv' incorporates:
     *  Chart: '<S11>/FsftBPCR_U_CellVoltLowThrshChrt'
     *  SignalConversion generated from: '<S11>/VeBPCR_b_CellVoltLowThrshFA_write'
     */
    Rte_IrvWrite_FsftBPCR_U_CellVoltLowThrsh_CellVoltLowThrshFAInit_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_U_CellVoltLowThrsh' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_U_HV_BatModVoltAvg(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_U_HV_BatModVoltAvg' */
    /* Outport: '<Root>/VeBPCR_U_HV_BatModVoltAvg' incorporates:
     *  Chart: '<S12>/FsftBPCR_U_HV_BatModVoltAvgChrt'
     *  SignalConversion generated from: '<S12>/VeBPCR_U_HV_BatModVoltAvg'
     */
    /* Gateway: FsftBPCR_U_HV_BatModVoltAvg/FsftBPCR_U_HV_BatModVoltAvgChrt */
    /* During: FsftBPCR_U_HV_BatModVoltAvg/FsftBPCR_U_HV_BatModVoltAvgChrt */
    /* Entry Internal: FsftBPCR_U_HV_BatModVoltAvg/FsftBPCR_U_HV_BatModVoltAvgChrt */
    /* Transition: '<S649>:2' */
    (void)Rte_Write_VeBPCR_U_HV_BatModVoltAvg_Value
        (KeBPCI_U_HV_BatModVoltAvgDflt);

    /* Outport: '<Root>/VeBPCR_b_HV_BatModVoltAvgFA' incorporates:
     *  Chart: '<S12>/FsftBPCR_U_HV_BatModVoltAvgChrt'
     *  SignalConversion generated from: '<S12>/VeBPCR_b_HV_BatModVoltAvgFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModVoltAvgFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_U_HV_BatModVoltAvg' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_U_HV_BatModVoltMax(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_U_HV_BatModVoltMax' */
    /* Outport: '<Root>/VeBPCR_U_HV_BatModVoltMax' incorporates:
     *  Chart: '<S13>/FsftBPCR_U_HV_BatModVoltMaxChrt'
     *  SignalConversion generated from: '<S13>/VeBPCR_U_HV_BatModVoltMax'
     */
    /* Gateway: FsftBPCR_U_HV_BatModVoltMax/FsftBPCR_U_HV_BatModVoltMaxChrt */
    /* During: FsftBPCR_U_HV_BatModVoltMax/FsftBPCR_U_HV_BatModVoltMaxChrt */
    /* Entry Internal: FsftBPCR_U_HV_BatModVoltMax/FsftBPCR_U_HV_BatModVoltMaxChrt */
    /* Transition: '<S650>:2' */
    (void)Rte_Write_VeBPCR_U_HV_BatModVoltMax_Value
        (KeBPCI_U_HV_BatModVoltMaxDflt);

    /* Outport: '<Root>/VeBPCR_b_HV_BatModVoltMaxFA' incorporates:
     *  Chart: '<S13>/FsftBPCR_U_HV_BatModVoltMaxChrt'
     *  SignalConversion generated from: '<S13>/VeBPCR_b_HV_BatModVoltMaxFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModVoltMaxFA_Value(true);

    /* Merge: '<Root>/Merge_143_Irv' incorporates:
     *  Chart: '<S13>/FsftBPCR_U_HV_BatModVoltMaxChrt'
     *  SignalConversion generated from: '<S13>/VeBPCR_U_HV_BatModVoltMax_write'
     */
    Rte_IrvWrite_FsftBPCR_U_HV_BatModVoltMax_HV_BatModVoltMax_write_IRV
        (KeBPCI_U_HV_BatModVoltMaxDflt);

    /* Merge: '<Root>/Merge_107_Irv' incorporates:
     *  Chart: '<S13>/FsftBPCR_U_HV_BatModVoltMaxChrt'
     *  SignalConversion generated from: '<S13>/VeBPCR_b_HV_BatModVoltMaxFA_write'
     */
    Rte_IrvWrite_FsftBPCR_U_HV_BatModVoltMax_HV_BatModVoltMaxFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_U_HV_BatModVoltMax' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_U_HV_BatModVoltMin(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_U_HV_BatModVoltMin' */
    /* Outport: '<Root>/VeBPCR_U_HV_BatModVoltMin' incorporates:
     *  Chart: '<S14>/FsftBPCR_U_HV_BatModVoltMinChrt'
     *  SignalConversion generated from: '<S14>/VeBPCR_U_HV_BatModVoltMin'
     */
    /* Gateway: FsftBPCR_U_HV_BatModVoltMin/FsftBPCR_U_HV_BatModVoltMinChrt */
    /* During: FsftBPCR_U_HV_BatModVoltMin/FsftBPCR_U_HV_BatModVoltMinChrt */
    /* Entry Internal: FsftBPCR_U_HV_BatModVoltMin/FsftBPCR_U_HV_BatModVoltMinChrt */
    /* Transition: '<S651>:2' */
    (void)Rte_Write_VeBPCR_U_HV_BatModVoltMin_Value
        (KeBPCI_U_HV_BatModVoltMinDflt);

    /* Outport: '<Root>/VeBPCR_b_HV_BatModVoltMinFA' incorporates:
     *  Chart: '<S14>/FsftBPCR_U_HV_BatModVoltMinChrt'
     *  SignalConversion generated from: '<S14>/VeBPCR_b_HV_BatModVoltMinFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModVoltMinFA_Value(true);

    /* Merge: '<Root>/Merge_152_Irv' incorporates:
     *  Chart: '<S14>/FsftBPCR_U_HV_BatModVoltMinChrt'
     *  SignalConversion generated from: '<S14>/VeBPCR_U_HV_BatModVoltMin_write'
     */
    Rte_IrvWrite_FsftBPCR_U_HV_BatModVoltMin_HV_BatModVoltMin_write_IRV
        (KeBPCI_U_HV_BatModVoltMinDflt);

    /* Merge: '<Root>/Merge_151_Irv' incorporates:
     *  Chart: '<S14>/FsftBPCR_U_HV_BatModVoltMinChrt'
     *  SignalConversion generated from: '<S14>/VeBPCR_b_HV_BatModVoltMinFA_write'
     */
    Rte_IrvWrite_FsftBPCR_U_HV_BatModVoltMin_HV_BatModVoltMinFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_U_HV_BatModVoltMin' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_U_HV_BatVolt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_U_HV_BatVolt' */
    /* Outport: '<Root>/VeBPCR_U_HV_BatVolt' incorporates:
     *  Chart: '<S15>/FsftBPCR_U_HV_BatVoltChrt'
     *  SignalConversion generated from: '<S15>/VeBPCR_U_HV_BatVolt'
     */
    /* Gateway: FsftBPCR_U_HV_BatVolt/FsftBPCR_U_HV_BatVoltChrt */
    /* During: FsftBPCR_U_HV_BatVolt/FsftBPCR_U_HV_BatVoltChrt */
    /* Entry Internal: FsftBPCR_U_HV_BatVolt/FsftBPCR_U_HV_BatVoltChrt */
    /* Transition: '<S652>:2' */
    (void)Rte_Write_VeBPCR_U_HV_BatVolt_Value(KeBPCI_U_HV_BatVoltDflt);

    /* Outport: '<Root>/VeBPCR_b_HV_BatVoltFA' incorporates:
     *  Chart: '<S15>/FsftBPCR_U_HV_BatVoltChrt'
     *  SignalConversion generated from: '<S15>/VeBPCR_b_HV_BatVoltFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatVoltFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_U_HV_BatVolt' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_U_MaxCellVltAlld(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_U_MaxCellVltAlld' */
    /* Outport: '<Root>/VeBPCR_U_MaxCellVltAlld' incorporates:
     *  Chart: '<S16>/FsftBPCR_U_MaxCellVltAlldChrt'
     *  SignalConversion generated from: '<S16>/VeBPCR_U_MaxCellVltAlld'
     */
    /* Gateway: FsftBPCR_U_MaxCellVltAlld/FsftBPCR_U_MaxCellVltAlldChrt */
    /* During: FsftBPCR_U_MaxCellVltAlld/FsftBPCR_U_MaxCellVltAlldChrt */
    /* Entry Internal: FsftBPCR_U_MaxCellVltAlld/FsftBPCR_U_MaxCellVltAlldChrt */
    /* Transition: '<S653>:2' */
    (void)Rte_Write_VeBPCR_U_MaxCellVltAlld_Value(KeBPCR_U_MaxCellVltAlldDflt);

    /* Outport: '<Root>/VeBPCR_b_MaxCellVltAlld_FA' incorporates:
     *  Chart: '<S16>/FsftBPCR_U_MaxCellVltAlldChrt'
     *  SignalConversion generated from: '<S16>/VeBPCR_b_MaxCellVltAlldFA'
     */
    (void)Rte_Write_VeBPCR_b_MaxCellVltAlld_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_U_MaxCellVltAlld' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_U_MaxPkVltAlld(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_U_MaxPkVltAlld' */
    /* Outport: '<Root>/VeBPCR_U_MaxPkVltAlld' incorporates:
     *  Chart: '<S17>/FsftBPCR_U_MaxPkVltAlldChrt'
     *  SignalConversion generated from: '<S17>/VeBPCR_U_MaxPkVltAlld'
     */
    /* Gateway: FsftBPCR_U_MaxPkVltAlld/FsftBPCR_U_MaxPkVltAlldChrt */
    /* During: FsftBPCR_U_MaxPkVltAlld/FsftBPCR_U_MaxPkVltAlldChrt */
    /* Entry Internal: FsftBPCR_U_MaxPkVltAlld/FsftBPCR_U_MaxPkVltAlldChrt */
    /* Transition: '<S654>:2' */
    (void)Rte_Write_VeBPCR_U_MaxPkVltAlld_Value(KeBPCR_U_MaxPkVltAlldDflt);

    /* Outport: '<Root>/VeBPCR_b_MaxPkVltAlld_FA' incorporates:
     *  Chart: '<S17>/FsftBPCR_U_MaxPkVltAlldChrt'
     *  SignalConversion generated from: '<S17>/VeBPCR_b_MaxPkVltAlldFA'
     */
    (void)Rte_Write_VeBPCR_b_MaxPkVltAlld_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_U_MaxPkVltAlld' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_U_MinCellVltAlld(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_U_MinCellVltAlld' */
    /* Outport: '<Root>/VeBPCR_U_MinCellVltAlld' incorporates:
     *  Chart: '<S18>/FsftBPCR_U_MinCellVltAlldChrt'
     *  SignalConversion generated from: '<S18>/VeBPCR_U_MinCellVltAlld'
     */
    /* Gateway: FsftBPCR_U_MinCellVltAlld/FsftBPCR_U_MinCellVltAlldChrt */
    /* During: FsftBPCR_U_MinCellVltAlld/FsftBPCR_U_MinCellVltAlldChrt */
    /* Entry Internal: FsftBPCR_U_MinCellVltAlld/FsftBPCR_U_MinCellVltAlldChrt */
    /* Transition: '<S655>:2' */
    (void)Rte_Write_VeBPCR_U_MinCellVltAlld_Value(KeBPCR_U_MinCellVltAlldDflt);

    /* Outport: '<Root>/VeBPCR_b_MinCellVltAlld_FA' incorporates:
     *  Chart: '<S18>/FsftBPCR_U_MinCellVltAlldChrt'
     *  SignalConversion generated from: '<S18>/VeBPCR_b_MinCellVltAlldFA'
     */
    (void)Rte_Write_VeBPCR_b_MinCellVltAlld_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_U_MinCellVltAlld' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_U_MinPkVltAlld(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_U_MinPkVltAlld' */
    /* Outport: '<Root>/VeBPCR_U_MinPkVltAlld' incorporates:
     *  Chart: '<S19>/FsftBPCR_U_MinPkVltAlldChrt'
     *  SignalConversion generated from: '<S19>/VeBPCR_U_MinPkVltAlld'
     */
    /* Gateway: FsftBPCR_U_MinPkVltAlld/FsftBPCR_U_MinPkVltAlldChrt */
    /* During: FsftBPCR_U_MinPkVltAlld/FsftBPCR_U_MinPkVltAlldChrt */
    /* Entry Internal: FsftBPCR_U_MinPkVltAlld/FsftBPCR_U_MinPkVltAlldChrt */
    /* Transition: '<S656>:2' */
    (void)Rte_Write_VeBPCR_U_MinPkVltAlld_Value(KeBPCR_U_MinPkVltAlldDflt);

    /* Outport: '<Root>/VeBPCR_b_MinPkVltAlld_FA' incorporates:
     *  Chart: '<S19>/FsftBPCR_U_MinPkVltAlldChrt'
     *  SignalConversion generated from: '<S19>/VeBPCR_b_MinPkVltAlldFA'
     */
    (void)Rte_Write_VeBPCR_b_MinPkVltAlld_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_U_MinPkVltAlld' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_U_OCVAveCellVoltage(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_U_OCVAveCellVoltage' */
    /* Outport: '<Root>/VeBPCR_b_OCVAvgCellVoltage_FA' incorporates:
     *  Chart: '<S20>/FsftBPCR_U_OCVAveCellVoltageChrt'
     *  SignalConversion generated from: '<S20>/VeBPCR_b_OCVAveCellVoltageFA'
     */
    /* Gateway: FsftBPCR_U_OCVAveCellVoltage/FsftBPCR_U_OCVAveCellVoltageChrt */
    /* During: FsftBPCR_U_OCVAveCellVoltage/FsftBPCR_U_OCVAveCellVoltageChrt */
    /* Entry Internal: FsftBPCR_U_OCVAveCellVoltage/FsftBPCR_U_OCVAveCellVoltageChrt */
    /* Transition: '<S657>:2' */
    (void)Rte_Write_VeBPCR_b_OCVAvgCellVoltage_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_U_OCVAveCellVoltage' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_U_OCVMaxCellVoltage(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_U_OCVMaxCellVoltage' */
    /* Outport: '<Root>/VeBPCR_b_OCVMaxCellVoltage_FA' incorporates:
     *  Chart: '<S21>/FsftBPCR_U_OCVMaxCellVoltageChrt'
     *  SignalConversion generated from: '<S21>/VeBPCR_b_OCVMaxCellVoltageFA'
     */
    /* Gateway: FsftBPCR_U_OCVMaxCellVoltage/FsftBPCR_U_OCVMaxCellVoltageChrt */
    /* During: FsftBPCR_U_OCVMaxCellVoltage/FsftBPCR_U_OCVMaxCellVoltageChrt */
    /* Entry Internal: FsftBPCR_U_OCVMaxCellVoltage/FsftBPCR_U_OCVMaxCellVoltageChrt */
    /* Transition: '<S658>:2' */
    (void)Rte_Write_VeBPCR_b_OCVMaxCellVoltage_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_U_OCVMaxCellVoltage' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_U_OCVMinCellVoltage(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_U_OCVMinCellVoltage' */
    /* Outport: '<Root>/VeBPCR_b_OCVMinCellVoltage_FA' incorporates:
     *  Chart: '<S22>/FsftBPCR_U_OCVMinCellVoltageChrt'
     *  SignalConversion generated from: '<S22>/VeBPCR_b_OCVMinCellVoltageFA'
     */
    /* Gateway: FsftBPCR_U_OCVMinCellVoltage/FsftBPCR_U_OCVMinCellVoltageChrt */
    /* During: FsftBPCR_U_OCVMinCellVoltage/FsftBPCR_U_OCVMinCellVoltageChrt */
    /* Entry Internal: FsftBPCR_U_OCVMinCellVoltage/FsftBPCR_U_OCVMinCellVoltageChrt */
    /* Transition: '<S659>:2' */
    (void)Rte_Write_VeBPCR_b_OCVMinCellVoltage_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_U_OCVMinCellVoltage' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_Z_MaxCellDischargeImpedance(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_Z_MaxCellDischargeImpedance' */
    /* Outport: '<Root>/VeBPCR_b_MaxCellDschargeImpedance_FA' incorporates:
     *  Chart: '<S23>/FsftBPCR_Z_MaxCellDischargeImpedanceChrt'
     *  SignalConversion generated from: '<S23>/VeBPCR_b_MaxCellDischargeImpedanceFA'
     */
    /* Gateway: FsftBPCR_Z_MaxCellDischargeImpedance/FsftBPCR_Z_MaxCellDischargeImpedanceChrt */
    /* During: FsftBPCR_Z_MaxCellDischargeImpedance/FsftBPCR_Z_MaxCellDischargeImpedanceChrt */
    /* Entry Internal: FsftBPCR_Z_MaxCellDischargeImpedance/FsftBPCR_Z_MaxCellDischargeImpedanceChrt */
    /* Transition: '<S660>:2' */
    (void)Rte_Write_VeBPCR_b_MaxCellDschargeImpedance_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_Z_MaxCellDischargeImpedance' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_Z_MinCellDischargeImpedance(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_Z_MinCellDischargeImpedance' */
    /* Outport: '<Root>/VeBPCR_b_MinCellDschargeImpedance_FA' incorporates:
     *  Chart: '<S24>/FsftBPCR_Z_MinCellDischargeImpedanceChrt'
     *  SignalConversion generated from: '<S24>/VeBPCR_b_MinCellDischargeImpedanceFA'
     */
    /* Gateway: FsftBPCR_Z_MinCellDischargeImpedance/FsftBPCR_Z_MinCellDischargeImpedanceChrt */
    /* During: FsftBPCR_Z_MinCellDischargeImpedance/FsftBPCR_Z_MinCellDischargeImpedanceChrt */
    /* Entry Internal: FsftBPCR_Z_MinCellDischargeImpedance/FsftBPCR_Z_MinCellDischargeImpedanceChrt */
    /* Transition: '<S661>:2' */
    (void)Rte_Write_VeBPCR_b_MinCellDschargeImpedance_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_Z_MinCellDischargeImpedance' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_BPCM_LIN_BusOff(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_BPCM_LIN_BusOff' */
    /* Outport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_FA' incorporates:
     *  Chart: '<S25>/FsftBPCR_b_BPCM_LIN_BusOffChrt'
     *  SignalConversion generated from: '<S25>/VeBPCR_b_BPCM_LIN_BusOffFA'
     */
    /* Gateway: FsftBPCR_b_BPCM_LIN_BusOff/FsftBPCR_b_BPCM_LIN_BusOffChrt */
    /* During: FsftBPCR_b_BPCM_LIN_BusOff/FsftBPCR_b_BPCM_LIN_BusOffChrt */
    /* Entry Internal: FsftBPCR_b_BPCM_LIN_BusOff/FsftBPCR_b_BPCM_LIN_BusOffChrt */
    /* Transition: '<S662>:2' */
    (void)Rte_Write_VeBPCR_b_BPCM_LIN_BusOff_FA_Value(true);

    /* Outport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_SgnlRcvd' incorporates:
     *  Chart: '<S25>/FsftBPCR_b_BPCM_LIN_BusOffChrt'
     *  SignalConversion generated from: '<S25>/VeBPCR_b_BPCM_LIN_BusOffSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LIN_BusOff_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_BPCM_LIN_BusOff' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_BPCM_LOC_BCP(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_BPCM_LOC_BCP' */
    /* Outport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_FA' incorporates:
     *  Chart: '<S26>/FsftBPCR_b_BPCM_LOC_BCPChrt'
     *  SignalConversion generated from: '<S26>/VeBPCR_b_BPCM_LOC_BCPFA'
     */
    /* Gateway: FsftBPCR_b_BPCM_LOC_BCP/FsftBPCR_b_BPCM_LOC_BCPChrt */
    /* During: FsftBPCR_b_BPCM_LOC_BCP/FsftBPCR_b_BPCM_LOC_BCPChrt */
    /* Entry Internal: FsftBPCR_b_BPCM_LOC_BCP/FsftBPCR_b_BPCM_LOC_BCPChrt */
    /* Transition: '<S663>:2' */
    (void)Rte_Write_VeBPCR_b_BPCM_LOC_BCP_FA_Value(true);

    /* Outport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_SgnlRcvd' incorporates:
     *  Chart: '<S26>/FsftBPCR_b_BPCM_LOC_BCPChrt'
     *  SignalConversion generated from: '<S26>/VeBPCR_b_BPCM_LOC_BCPSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LOC_BCP_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_BPCM_LOC_BCP' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_BPCM_LOC_BatClntHtr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_BPCM_LOC_BatClntHtr' */
    /* Outport: '<Root>/VeBPCR_b_BPCM_LOC_BatClntHtr_FA' incorporates:
     *  Chart: '<S27>/FsftBPCR_b_BPCM_LOC_BatClntHtrChrt'
     *  SignalConversion generated from: '<S27>/VeBPCR_b_BPCM_LOC_BatClntHtrFA'
     */
    /* Gateway: FsftBPCR_b_BPCM_LOC_BatClntHtr/FsftBPCR_b_BPCM_LOC_BatClntHtrChrt */
    /* During: FsftBPCR_b_BPCM_LOC_BatClntHtr/FsftBPCR_b_BPCM_LOC_BatClntHtrChrt */
    /* Entry Internal: FsftBPCR_b_BPCM_LOC_BatClntHtr/FsftBPCR_b_BPCM_LOC_BatClntHtrChrt */
    /* Transition: '<S664>:2' */
    (void)Rte_Write_VeBPCR_b_BPCM_LOC_BatClntHtr_FA_Value(true);

    /* Outport: '<Root>/VeBPCR_b_BPCM_LOC_BatClntHtr_SgnlRcvd' incorporates:
     *  Chart: '<S27>/FsftBPCR_b_BPCM_LOC_BatClntHtrChrt'
     *  SignalConversion generated from: '<S27>/VeBPCR_b_BPCM_LOC_BatClntHtrSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LOC_BatClntHtr_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_BPCM_LOC_BatClntHtr' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HVBatCntrWeld_ImpdOpn(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HVBatCntrWeld_ImpdOpn' */
    /* Outport: '<Root>/VeBPCR_b_Flst_HVBatCntrWeld_ImpdOpn' incorporates:
     *  Chart: '<S28>/FsftBPCR_b_HVBatCntrWeld_ImpdOpnChrt'
     *  SignalConversion generated from: '<S28>/VeBPCR_b_HVBatCntrWeld_ImpdOpnFA'
     */
    /* Gateway: FsftBPCR_b_HVBatCntrWeld_ImpdOpn/FsftBPCR_b_HVBatCntrWeld_ImpdOpnChrt */
    /* During: FsftBPCR_b_HVBatCntrWeld_ImpdOpn/FsftBPCR_b_HVBatCntrWeld_ImpdOpnChrt */
    /* Entry Internal: FsftBPCR_b_HVBatCntrWeld_ImpdOpn/FsftBPCR_b_HVBatCntrWeld_ImpdOpnChrt */
    /* Transition: '<S665>:2' */
    (void)Rte_Write_VeBPCR_b_Flst_HVBatCntrWeld_ImpdOpn_Value(true);

    /* Merge: '<Root>/Merge_95' incorporates:
     *  Chart: '<S28>/FsftBPCR_b_HVBatCntrWeld_ImpdOpnChrt'
     *  SignalConversion generated from: '<S28>/VeBPCR_b_HVBatCntrWeld_ImpdOpnSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HVBatCntrWeld_ImpdOpn_VeBPCR_b_HVBatCntrWeld_ImpdOpnSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HVBatCntrWeld_ImpdOpn' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HVBatRdy(void)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_HVBatRdyFA_out_k;

    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HVBatRdy' */
    /* Chart: '<S29>/FsftBPCR_b_HVBatRdyChrt' */
    /* Gateway: FsftBPCR_b_HVBatRdy/FsftBPCR_b_HVBatRdyChrt */
    /* During: FsftBPCR_b_HVBatRdy/FsftBPCR_b_HVBatRdyChrt */
    /* Entry Internal: FsftBPCR_b_HVBatRdy/FsftBPCR_b_HVBatRdyChrt */
    /* Transition: '<S666>:2' */
    rtb_LeBPCR_b_HVBatRdyFA_out_k = true;

    /* Outport: '<Root>/VeBPCR_e_HVBatRdy' incorporates:
     *  Chart: '<S29>/FsftBPCR_b_HVBatRdyChrt'
     *  SignalConversion generated from: '<S29>/VeBPCR_e_HVBatRdy'
     */
    (void)Rte_Write_VeBPCR_e_HVBatRdy_Value((uint8)3U);

    /* Merge: '<Root>/Merge_62' incorporates:
     *  Chart: '<S29>/FsftBPCR_b_HVBatRdyChrt'
     *  SignalConversion generated from: '<S29>/VeBPCR_b_HVBatRdySgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HVBatRdy_HV_BatRdySgnl_Rcvd_write_IRV(false);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HVBatRdy' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HVBat_DC_CntctrStat(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HVBat_DC_CntctrStat' */
    /* Outport: '<Root>/VeBPCR_b_HVBat_DC_CntctrStat_FA' incorporates:
     *  Chart: '<S30>/FsftBPCR_b_HVBat_DC_CntctrStatChrt'
     *  SignalConversion generated from: '<S30>/VeBPCR_b_HVBat_DC_CntctrStatFA'
     */
    /* Gateway: FsftBPCR_b_HVBat_DC_CntctrStat/FsftBPCR_b_HVBat_DC_CntctrStatChrt */
    /* During: FsftBPCR_b_HVBat_DC_CntctrStat/FsftBPCR_b_HVBat_DC_CntctrStatChrt */
    /* Entry Internal: FsftBPCR_b_HVBat_DC_CntctrStat/FsftBPCR_b_HVBat_DC_CntctrStatChrt */
    /* Transition: '<S667>:2' */
    (void)Rte_Write_VeBPCR_b_HVBat_DC_CntctrStat_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HVBat_DC_CntctrStat' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HV_AuxLoadOffReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HV_AuxLoadOffReq' */
    /* Outport: '<Root>/VeBPCR_b_HV_AuxLoadOffReqFA' incorporates:
     *  Chart: '<S31>/FsftBPCR_b_HV_AuxLoadOffReqChrt'
     *  SignalConversion generated from: '<S31>/VeBPCR_b_HV_AuxLoadOffReqFA'
     */
    /* Gateway: FsftBPCR_b_HV_AuxLoadOffReq/FsftBPCR_b_HV_AuxLoadOffReqChrt */
    /* During: FsftBPCR_b_HV_AuxLoadOffReq/FsftBPCR_b_HV_AuxLoadOffReqChrt */
    /* Entry Internal: FsftBPCR_b_HV_AuxLoadOffReq/FsftBPCR_b_HV_AuxLoadOffReqChrt */
    /* Transition: '<S668>:2' */
    (void)Rte_Write_VeBPCR_b_HV_AuxLoadOffReqFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HV_AuxLoadOffReq' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HV_BatChrgPwrET(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HV_BatChrgPwrET' */
    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrET_FA' incorporates:
     *  Chart: '<S32>/FsftBPCR_b_HV_BatChrgPwrETChrt'
     *  SignalConversion generated from: '<S32>/VeBPCR_b_HV_BatChrgPwrETFA'
     */
    /* Gateway: FsftBPCR_b_HV_BatChrgPwrET/FsftBPCR_b_HV_BatChrgPwrETChrt */
    /* During: FsftBPCR_b_HV_BatChrgPwrET/FsftBPCR_b_HV_BatChrgPwrETChrt */
    /* Entry Internal: FsftBPCR_b_HV_BatChrgPwrET/FsftBPCR_b_HV_BatChrgPwrETChrt */
    /* Transition: '<S669>:2' */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrET_FA_Value(true);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd' incorporates:
     *  Chart: '<S32>/FsftBPCR_b_HV_BatChrgPwrETChrt'
     *  SignalConversion generated from: '<S32>/VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd_Value(false);

    /* Merge: '<Root>/Merge_24_Irv' incorporates:
     *  Chart: '<S32>/FsftBPCR_b_HV_BatChrgPwrETChrt'
     *  SignalConversion generated from: '<S32>/VeBPCR_b_HV_BatChrgPwrETFA_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatChrgPwrET_HVBatChrgPowET_FA_Init_write_IRV
        (true);

    /* Merge: '<Root>/Merge_40_Irv' incorporates:
     *  Chart: '<S32>/FsftBPCR_b_HV_BatChrgPwrETChrt'
     *  SignalConversion generated from: '<S32>/VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatChrgPwrET_VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HV_BatChrgPwrET' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HV_BatChrgPwrLT(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HV_BatChrgPwrLT' */
    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrLT_FA' incorporates:
     *  Chart: '<S33>/FsftBPCR_b_HV_BatChrgPwrLTChrt'
     *  SignalConversion generated from: '<S33>/VeBPCR_b_HV_BatChrgPwrLTFA'
     */
    /* Gateway: FsftBPCR_b_HV_BatChrgPwrLT/FsftBPCR_b_HV_BatChrgPwrLTChrt */
    /* During: FsftBPCR_b_HV_BatChrgPwrLT/FsftBPCR_b_HV_BatChrgPwrLTChrt */
    /* Entry Internal: FsftBPCR_b_HV_BatChrgPwrLT/FsftBPCR_b_HV_BatChrgPwrLTChrt */
    /* Transition: '<S670>:2' */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrLT_FA_Value(true);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd' incorporates:
     *  Chart: '<S33>/FsftBPCR_b_HV_BatChrgPwrLTChrt'
     *  SignalConversion generated from: '<S33>/VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd_Value(false);

    /* Merge: '<Root>/Merge_27_Irv' incorporates:
     *  Chart: '<S33>/FsftBPCR_b_HV_BatChrgPwrLTChrt'
     *  SignalConversion generated from: '<S33>/VeBPCR_b_HV_BatChrgPwrLTFA_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatChrgPwrLT_HVBatChrgPowLT_FA_Init_write_IRV
        (true);

    /* Merge: '<Root>/Merge_42_Irv' incorporates:
     *  Chart: '<S33>/FsftBPCR_b_HV_BatChrgPwrLTChrt'
     *  SignalConversion generated from: '<S33>/VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatChrgPwrLT_VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HV_BatChrgPwrLT' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HV_BatChrgPwrST(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HV_BatChrgPwrST' */
    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrST_FA' incorporates:
     *  Chart: '<S34>/FsftBPCR_b_HV_BatChrgPwrSTChrt'
     *  SignalConversion generated from: '<S34>/VeBPCR_b_HV_BatChrgPwrSTFA'
     */
    /* Gateway: FsftBPCR_b_HV_BatChrgPwrST/FsftBPCR_b_HV_BatChrgPwrSTChrt */
    /* During: FsftBPCR_b_HV_BatChrgPwrST/FsftBPCR_b_HV_BatChrgPwrSTChrt */
    /* Entry Internal: FsftBPCR_b_HV_BatChrgPwrST/FsftBPCR_b_HV_BatChrgPwrSTChrt */
    /* Transition: '<S671>:2' */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrST_FA_Value(true);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd' incorporates:
     *  Chart: '<S34>/FsftBPCR_b_HV_BatChrgPwrSTChrt'
     *  SignalConversion generated from: '<S34>/VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd_Value(false);

    /* Merge: '<Root>/Merge_14_Irv' incorporates:
     *  Chart: '<S34>/FsftBPCR_b_HV_BatChrgPwrSTChrt'
     *  SignalConversion generated from: '<S34>/VeBPCR_b_HV_BatChrgPwrSTFA_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatChrgPwrST_HVBatChrgPowST_FA_Init_write_IRV
        (true);

    /* Merge: '<Root>/Merge_30_Irv' incorporates:
     *  Chart: '<S34>/FsftBPCR_b_HV_BatChrgPwrSTChrt'
     *  SignalConversion generated from: '<S34>/VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatChrgPwrST_VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HV_BatChrgPwrST' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HV_BatCurrString2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HV_BatCurrString2' */
    /* Chart: '<S35>/FsftBPCR_b_HV_BatCurrString2Chrt' */
    BPCR_ac_FsftBPCR_b_HV_BatCurrString2Chrt
        (&BPCR_ac_B.sf_FsftBPCR_b_HV_BatCurrString2Chrt);

    /* Outport: '<Root>/VeBPCR_b_HV_Current_String2_FA' incorporates:
     *  SignalConversion generated from: '<S35>/VeBPCR_b_HV_Current_String2_FA'
     */
    (void)Rte_Write_VeBPCR_b_HV_Current_String2_FA_Value
        (BPCR_ac_B.sf_FsftBPCR_b_HV_BatCurrString2Chrt.LeBPCR_b_HV_Current_String2_FA_out);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HV_BatCurrString2' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HV_BatDschrgPwrET(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HV_BatDschrgPwrET' */
    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrET_FA' incorporates:
     *  Chart: '<S36>/FsftBPCR_b_HV_BatDschrgPwrETChrt'
     *  SignalConversion generated from: '<S36>/VeBPCR_b_HV_BatDschrgPwrETFA'
     */
    /* Gateway: FsftBPCR_b_HV_BatDschrgPwrET/FsftBPCR_b_HV_BatDschrgPwrETChrt */
    /* During: FsftBPCR_b_HV_BatDschrgPwrET/FsftBPCR_b_HV_BatDschrgPwrETChrt */
    /* Entry Internal: FsftBPCR_b_HV_BatDschrgPwrET/FsftBPCR_b_HV_BatDschrgPwrETChrt */
    /* Transition: '<S673>:2' */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrET_FA_Value(true);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd' incorporates:
     *  Chart: '<S36>/FsftBPCR_b_HV_BatDschrgPwrETChrt'
     *  SignalConversion generated from: '<S36>/VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd_Value(false);

    /* Merge: '<Root>/Merge_13_Irv' incorporates:
     *  Chart: '<S36>/FsftBPCR_b_HV_BatDschrgPwrETChrt'
     *  SignalConversion generated from: '<S36>/VeBPCR_b_HV_BatDschrgPwrETFA_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatDschrgPwrET_HVBatDschrgPowET_FA_Init_write_IRV
        (true);

    /* Merge: '<Root>/Merge_35_Irv' incorporates:
     *  Chart: '<S36>/FsftBPCR_b_HV_BatDschrgPwrETChrt'
     *  SignalConversion generated from: '<S36>/VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatDschrgPwrET_VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HV_BatDschrgPwrET' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HV_BatDschrgPwrLT(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HV_BatDschrgPwrLT' */
    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrLT_FA' incorporates:
     *  Chart: '<S37>/FsftBPCR_b_HV_BatDschrgPwrLTChrt'
     *  SignalConversion generated from: '<S37>/VeBPCR_b_HV_BatDschrgPwrLTFA'
     */
    /* Gateway: FsftBPCR_b_HV_BatDschrgPwrLT/FsftBPCR_b_HV_BatDschrgPwrLTChrt */
    /* During: FsftBPCR_b_HV_BatDschrgPwrLT/FsftBPCR_b_HV_BatDschrgPwrLTChrt */
    /* Entry Internal: FsftBPCR_b_HV_BatDschrgPwrLT/FsftBPCR_b_HV_BatDschrgPwrLTChrt */
    /* Transition: '<S674>:2' */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrLT_FA_Value(true);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd' incorporates:
     *  Chart: '<S37>/FsftBPCR_b_HV_BatDschrgPwrLTChrt'
     *  SignalConversion generated from: '<S37>/VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd_Value(false);

    /* Merge: '<Root>/Merge_20_Irv' incorporates:
     *  Chart: '<S37>/FsftBPCR_b_HV_BatDschrgPwrLTChrt'
     *  SignalConversion generated from: '<S37>/VeBPCR_b_HV_BatDschrgPwrLTFA_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatDschrgPwrLT_HVBatDschrgPowLT_FA_Init_write_IRV
        (true);

    /* Merge: '<Root>/Merge_36_Irv' incorporates:
     *  Chart: '<S37>/FsftBPCR_b_HV_BatDschrgPwrLTChrt'
     *  SignalConversion generated from: '<S37>/VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatDschrgPwrLT_VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HV_BatDschrgPwrLT' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HV_BatDschrgPwrST(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HV_BatDschrgPwrST' */
    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrST_FA' incorporates:
     *  Chart: '<S38>/FsftBPCR_b_HV_BatDschrgPwrSTChrt'
     *  SignalConversion generated from: '<S38>/VeBPCR_b_HV_BatDschrgPwrSTFA'
     */
    /* Gateway: FsftBPCR_b_HV_BatDschrgPwrST/FsftBPCR_b_HV_BatDschrgPwrSTChrt */
    /* During: FsftBPCR_b_HV_BatDschrgPwrST/FsftBPCR_b_HV_BatDschrgPwrSTChrt */
    /* Entry Internal: FsftBPCR_b_HV_BatDschrgPwrST/FsftBPCR_b_HV_BatDschrgPwrSTChrt */
    /* Transition: '<S675>:2' */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrST_FA_Value(true);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd' incorporates:
     *  Chart: '<S38>/FsftBPCR_b_HV_BatDschrgPwrSTChrt'
     *  SignalConversion generated from: '<S38>/VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd_Value(false);

    /* Merge: '<Root>/Merge_22_Irv' incorporates:
     *  Chart: '<S38>/FsftBPCR_b_HV_BatDschrgPwrSTChrt'
     *  SignalConversion generated from: '<S38>/VeBPCR_b_HV_BatDschrgPwrSTFA_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatDschrgPwrST_HVBatDschrgPowST_FA_Init_write_IRV
        (true);

    /* Merge: '<Root>/Merge_37_Irv' incorporates:
     *  Chart: '<S38>/FsftBPCR_b_HV_BatDschrgPwrSTChrt'
     *  SignalConversion generated from: '<S38>/VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatDschrgPwrST_VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HV_BatDschrgPwrST' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HV_BatModTempAvg(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HV_BatModTempAvg' */
    /* Outport: '<Root>/VeBPCR_b_HV_BatModTempAvgFA' incorporates:
     *  Chart: '<S39>/FsftBPCR_b_HV_BatModTempAvgChrt'
     *  SignalConversion generated from: '<S39>/VeBPCR_b_HV_BatModTempAvgFA'
     */
    /* Gateway: FsftBPCR_b_HV_BatModTempAvg/FsftBPCR_b_HV_BatModTempAvgChrt */
    /* During: FsftBPCR_b_HV_BatModTempAvg/FsftBPCR_b_HV_BatModTempAvgChrt */
    /* Entry Internal: FsftBPCR_b_HV_BatModTempAvg/FsftBPCR_b_HV_BatModTempAvgChrt */
    /* Transition: '<S676>:2' */
    (void)Rte_Write_VeBPCR_b_HV_BatModTempAvgFA_Value(true);

    /* Merge: '<Root>/Merge_113_Irv' incorporates:
     *  Chart: '<S39>/FsftBPCR_b_HV_BatModTempAvgChrt'
     *  SignalConversion generated from: '<S39>/VeBPCR_b_HV_BatModTempAvgFA_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatModTempAvg_HV_BatModTempAvgFA_write_IRV(true);

    /* Merge: '<Root>/Merge_186' incorporates:
     *  Chart: '<S39>/FsftBPCR_b_HV_BatModTempAvgChrt'
     *  SignalConversion generated from: '<S39>/VeBPCR_b_HV_BatModTempAvgSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatModTempAvg_VeBPCR_b_HV_BatModTempAvgSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HV_BatModTempAvg' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HV_BatModTempMax(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HV_BatModTempMax' */
    /* Outport: '<Root>/VeBPCR_b_HV_BatModTempMaxFA' incorporates:
     *  Chart: '<S40>/FsftBPCR_b_HV_BatModTempMaxChrt'
     *  SignalConversion generated from: '<S40>/VeBPCR_b_HV_BatModTempMaxFA'
     */
    /* Gateway: FsftBPCR_b_HV_BatModTempMax/FsftBPCR_b_HV_BatModTempMaxChrt */
    /* During: FsftBPCR_b_HV_BatModTempMax/FsftBPCR_b_HV_BatModTempMaxChrt */
    /* Entry Internal: FsftBPCR_b_HV_BatModTempMax/FsftBPCR_b_HV_BatModTempMaxChrt */
    /* Transition: '<S677>:2' */
    (void)Rte_Write_VeBPCR_b_HV_BatModTempMaxFA_Value(true);

    /* Merge: '<Root>/Merge_153_Irv' incorporates:
     *  Chart: '<S40>/FsftBPCR_b_HV_BatModTempMaxChrt'
     *  SignalConversion generated from: '<S40>/VeBPCR_b_HV_BatModTempMaxFA_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatModTempMax_HV_BatModTempMaxFA_write_IRV(true);

    /* Merge: '<Root>/Merge_184' incorporates:
     *  Chart: '<S40>/FsftBPCR_b_HV_BatModTempMaxChrt'
     *  SignalConversion generated from: '<S40>/VeBPCR_b_HV_BatModTempMaxSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatModTempMax_VeBPCR_b_HV_BatModTempMaxSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HV_BatModTempMax' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HV_BatModTempMin(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HV_BatModTempMin' */
    /* Outport: '<Root>/VeBPCR_b_HV_BatModTempMinFA' incorporates:
     *  Chart: '<S41>/FsftBPCR_b_HV_BatModTempMinChrt'
     *  SignalConversion generated from: '<S41>/VeBPCR_b_HV_BatModTempMinFA'
     */
    /* Gateway: FsftBPCR_b_HV_BatModTempMin/FsftBPCR_b_HV_BatModTempMinChrt */
    /* During: FsftBPCR_b_HV_BatModTempMin/FsftBPCR_b_HV_BatModTempMinChrt */
    /* Entry Internal: FsftBPCR_b_HV_BatModTempMin/FsftBPCR_b_HV_BatModTempMinChrt */
    /* Transition: '<S678>:2' */
    (void)Rte_Write_VeBPCR_b_HV_BatModTempMinFA_Value(true);

    /* Merge: '<Root>/Merge_108_Irv' incorporates:
     *  Chart: '<S41>/FsftBPCR_b_HV_BatModTempMinChrt'
     *  SignalConversion generated from: '<S41>/VeBPCR_b_HV_BatModTempMinFA_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatModTempMin_HV_BatModTempMinFA_write_IRV(true);

    /* Merge: '<Root>/Merge_185' incorporates:
     *  Chart: '<S41>/FsftBPCR_b_HV_BatModTempMinChrt'
     *  SignalConversion generated from: '<S41>/VeBPCR_b_HV_BatModTempMinSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatModTempMin_VeBPCR_b_HV_BatModTempMinSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HV_BatModTempMin' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HV_BatPackSOC(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HV_BatPackSOC' */
    /* Outport: '<Root>/VeBPCR_b_HV_BatPackSOC_FA' incorporates:
     *  Chart: '<S42>/FsftBPCR_b_HV_BatPackSOCChrt'
     *  SignalConversion generated from: '<S42>/VeBPCR_b_HV_BatPackSOCFA'
     */
    /* Gateway: FsftBPCR_b_HV_BatPackSOC/FsftBPCR_b_HV_BatPackSOCChrt */
    /* During: FsftBPCR_b_HV_BatPackSOC/FsftBPCR_b_HV_BatPackSOCChrt */
    /* Entry Internal: FsftBPCR_b_HV_BatPackSOC/FsftBPCR_b_HV_BatPackSOCChrt */
    /* Transition: '<S679>:2' */
    (void)Rte_Write_VeBPCR_b_HV_BatPackSOC_FA_Value(true);

    /* Outport: '<Root>/VeBPCR_b_HV_BatPackSOC_SgnlRcvd' incorporates:
     *  Chart: '<S42>/FsftBPCR_b_HV_BatPackSOCChrt'
     *  SignalConversion generated from: '<S42>/VeBPCR_b_HV_BatPackSOCSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatPackSOC_SgnlRcvd_Value(false);

    /* Merge: '<Root>/Merge_17_Irv' incorporates:
     *  Chart: '<S42>/FsftBPCR_b_HV_BatPackSOCChrt'
     *  SignalConversion generated from: '<S42>/VeBPCR_b_HV_BatPackSOCFA_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatPackSOC_HVBatPackSOC_FA_Init_write_IRV(true);

    /* Merge: '<Root>/Merge_32_Irv' incorporates:
     *  Chart: '<S42>/FsftBPCR_b_HV_BatPackSOCChrt'
     *  SignalConversion generated from: '<S42>/VeBPCR_b_HV_BatPackSOCSgnl_Rcvd_write'
     */
    Rte_IrvWrite_FsftBPCR_b_HV_BatPackSOC_VeBPCR_b_HV_BatPackSOCSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HV_BatPackSOC' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HV_DcChargeTypeStat(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HV_DcChargeTypeStat' */
    /* Outport: '<Root>/VeBPCR_b_HVDcChargeTypeStatFA' incorporates:
     *  Chart: '<S43>/FsftBPCR_b_HV_DcChargeTypeStatChrt'
     *  SignalConversion generated from: '<S43>/VeBPCR_b_HVDcChargeTypeStatFA'
     */
    /* Gateway: FsftBPCR_b_HV_DcChargeTypeStat/FsftBPCR_b_HV_DcChargeTypeStatChrt */
    /* During: FsftBPCR_b_HV_DcChargeTypeStat/FsftBPCR_b_HV_DcChargeTypeStatChrt */
    /* Entry Internal: FsftBPCR_b_HV_DcChargeTypeStat/FsftBPCR_b_HV_DcChargeTypeStatChrt */
    /* Transition: '<S680>:2' */
    (void)Rte_Write_VeBPCR_b_HVDcChargeTypeStatFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HV_DcChargeTypeStat' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HV_InternalStringVolt1(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HV_InternalStringVolt1' */
    /* Outport: '<Root>/VeBPCR_b_HV_InternalStringVolt1FA' incorporates:
     *  Chart: '<S44>/FsftBPCR_b_HV_InternalStringVolt1chrt'
     *  SignalConversion generated from: '<S44>/VeBPCR_b_HV_InternalStringVolt1FA'
     */
    /* Gateway: FsftBPCR_b_HV_InternalStringVolt1/FsftBPCR_b_HV_InternalStringVolt1chrt */
    /* During: FsftBPCR_b_HV_InternalStringVolt1/FsftBPCR_b_HV_InternalStringVolt1chrt */
    /* Entry Internal: FsftBPCR_b_HV_InternalStringVolt1/FsftBPCR_b_HV_InternalStringVolt1chrt */
    /* Transition: '<S681>:2' */
    (void)Rte_Write_VeBPCR_b_HV_InternalStringVolt1FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HV_InternalStringVolt1' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HV_InternalStringVolt2(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HV_InternalStringVolt2' */
    /* Outport: '<Root>/VeBPCR_b_HV_InternalStringVolt2FA' incorporates:
     *  Chart: '<S45>/FsftBPCR_b_HV_InternalStringVolt2Chrt'
     *  SignalConversion generated from: '<S45>/VeBPCR_b_HV_InternalStringVolt2FA'
     */
    /* Gateway: FsftBPCR_b_HV_InternalStringVolt2/FsftBPCR_b_HV_InternalStringVolt2Chrt */
    /* During: FsftBPCR_b_HV_InternalStringVolt2/FsftBPCR_b_HV_InternalStringVolt2Chrt */
    /* Entry Internal: FsftBPCR_b_HV_InternalStringVolt2/FsftBPCR_b_HV_InternalStringVolt2Chrt */
    /* Transition: '<S682>:2' */
    (void)Rte_Write_VeBPCR_b_HV_InternalStringVolt2FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HV_InternalStringVolt2' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HV_InternalVolt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HV_InternalVolt' */
    /* Chart: '<S46>/FsftBPCR_b_HV_InternalVoltChrt' */
    BPCR_ac_FsftBPCR_b_HV_BatCurrString2Chrt
        (&BPCR_ac_B.sf_FsftBPCR_b_HV_InternalVoltChrt);

    /* Outport: '<Root>/VeBPCR_b_BPCM_HV_InternalVoltage_FA' incorporates:
     *  SignalConversion generated from: '<S46>/VeBPCR_b_BPCM_HV_InternalVoltage_FA'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_HV_InternalVoltage_FA_Value
        (BPCR_ac_B.sf_FsftBPCR_b_HV_InternalVoltChrt.LeBPCR_b_HV_Current_String2_FA_out);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HV_InternalVolt' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HV_SeriesVolt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HV_SeriesVolt' */
    /* Outport: '<Root>/VeBPCR_b_HV_SeriesVoltFA' incorporates:
     *  Chart: '<S47>/FsftBPCR_b_HV_SeriesVoltChrt'
     *  SignalConversion generated from: '<S47>/VeBPCR_b_HV_SeriesVoltFA'
     */
    /* Gateway: FsftBPCR_b_HV_SeriesVolt/FsftBPCR_b_HV_SeriesVoltChrt */
    /* During: FsftBPCR_b_HV_SeriesVolt/FsftBPCR_b_HV_SeriesVoltChrt */
    /* Entry Internal: FsftBPCR_b_HV_SeriesVolt/FsftBPCR_b_HV_SeriesVoltChrt */
    /* Transition: '<S684>:2' */
    (void)Rte_Write_VeBPCR_b_HV_SeriesVoltFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HV_SeriesVolt' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_HV_TracBatCntctrConfig(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_HV_TracBatCntctrConfig' */
    /* Outport: '<Root>/VeBPCR_b_HVTracBatCntctrConfigFA' incorporates:
     *  Chart: '<S48>/FsftBPCR_b_HV_TracBatCntctrConfigChrt'
     *  SignalConversion generated from: '<S48>/VeBPCR_b_HVTracBatCntctrConfigFA'
     */
    /* Gateway: FsftBPCR_b_HV_TracBatCntctrConfig/FsftBPCR_b_HV_TracBatCntctrConfigChrt */
    /* During: FsftBPCR_b_HV_TracBatCntctrConfig/FsftBPCR_b_HV_TracBatCntctrConfigChrt */
    /* Entry Internal: FsftBPCR_b_HV_TracBatCntctrConfig/FsftBPCR_b_HV_TracBatCntctrConfigChrt */
    /* Transition: '<S685>:2' */
    (void)Rte_Write_VeBPCR_b_HVTracBatCntctrConfigFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_HV_TracBatCntctrConfig' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_b_ThrmlRnawy_Warn(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_b_ThrmlRnawy_Warn' */
    /* Merge: '<Root>/Merge_77' incorporates:
     *  Chart: '<S49>/FsftBPCR_b_ThrmlRnawy_WarnChrt'
     *  SignalConversion generated from: '<S49>/VeBPCR_b_ThrmlRnawy_WarnFA_write'
     */
    /* Gateway: FsftBPCR_b_ThrmlRnawy_Warn/FsftBPCR_b_ThrmlRnawy_WarnChrt */
    /* During: FsftBPCR_b_ThrmlRnawy_Warn/FsftBPCR_b_ThrmlRnawy_WarnChrt */
    /* Entry Internal: FsftBPCR_b_ThrmlRnawy_Warn/FsftBPCR_b_ThrmlRnawy_WarnChrt */
    /* Transition: '<S686>:2' */
    Rte_IrvWrite_FsftBPCR_b_ThrmlRnawy_Warn_HVBat_ThrmlRnawy_WarnFA_Init_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_b_ThrmlRnawy_Warn' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_cnt_HVBatt_ModNumMaxTmp(void)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_HVBatt_ModNumMaxTmpFA_out_g;

    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_cnt_HVBatt_ModNumMaxTmp' */
    /* Chart: '<S50>/FsftBPCR_cnt_HVBatt_ModNumMaxTmpChrt' */
    /* Gateway: FsftBPCR_cnt_HVBatt_ModNumMaxTmp/FsftBPCR_cnt_HVBatt_ModNumMaxTmpChrt */
    /* During: FsftBPCR_cnt_HVBatt_ModNumMaxTmp/FsftBPCR_cnt_HVBatt_ModNumMaxTmpChrt */
    /* Entry Internal: FsftBPCR_cnt_HVBatt_ModNumMaxTmp/FsftBPCR_cnt_HVBatt_ModNumMaxTmpChrt */
    /* Transition: '<S687>:2' */
    rtb_LeBPCR_b_HVBatt_ModNumMaxTmpFA_out_g = true;

    /* Outport: '<Root>/VeBPCR_Cnt_HVBat_ModNumMaxTmp' incorporates:
     *  Chart: '<S50>/FsftBPCR_cnt_HVBatt_ModNumMaxTmpChrt'
     *  SignalConversion generated from: '<S50>/VeBPCR_cnt_HVBatt_ModNumMaxTmp'
     */
    (void)Rte_Write_VeBPCR_Cnt_HVBat_ModNumMaxTmp_Value
        (KeBPCR_Cnt_HVBat_ModNumMaxTmp);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_cnt_HVBatt_ModNumMaxTmp' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_cnt_HVBatt_ModNumMinTmp(void)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_HVBatt_ModNumMinTmpFA_out_n;

    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_cnt_HVBatt_ModNumMinTmp' */
    /* Chart: '<S51>/FsftBPCR_cnt_HVBatt_ModNumMinTmpChrt' */
    /* Gateway: FsftBPCR_cnt_HVBatt_ModNumMinTmp/FsftBPCR_cnt_HVBatt_ModNumMinTmpChrt */
    /* During: FsftBPCR_cnt_HVBatt_ModNumMinTmp/FsftBPCR_cnt_HVBatt_ModNumMinTmpChrt */
    /* Entry Internal: FsftBPCR_cnt_HVBatt_ModNumMinTmp/FsftBPCR_cnt_HVBatt_ModNumMinTmpChrt */
    /* Transition: '<S688>:2' */
    rtb_LeBPCR_b_HVBatt_ModNumMinTmpFA_out_n = true;

    /* Outport: '<Root>/VeBPCR_Cnt_HVBat_ModNumMinTmp' incorporates:
     *  Chart: '<S51>/FsftBPCR_cnt_HVBatt_ModNumMinTmpChrt'
     *  SignalConversion generated from: '<S51>/VeBPCR_cnt_HVBatt_ModNumMinTmp'
     */
    (void)Rte_Write_VeBPCR_Cnt_HVBat_ModNumMinTmp_Value
        (KeBPCR_Cnt_HVBat_ModNumMinTmp);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_cnt_HVBatt_ModNumMinTmp' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_e_BPCM_Comm_Fail(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_e_BPCM_Comm_Fail' */
    /* Outport: '<Root>/VeBPCR_b_BPCM_CommFailFA' incorporates:
     *  Chart: '<S52>/FsftBPCR_e_BPCM_Comm_FailChrt'
     *  SignalConversion generated from: '<S52>/VeBPCR_b_BPCM_Comm_FailFA'
     */
    /* Gateway: FsftBPCR_e_BPCM_Comm_Fail/FsftBPCR_e_BPCM_Comm_FailChrt */
    /* During: FsftBPCR_e_BPCM_Comm_Fail/FsftBPCR_e_BPCM_Comm_FailChrt */
    /* Entry Internal: FsftBPCR_e_BPCM_Comm_Fail/FsftBPCR_e_BPCM_Comm_FailChrt */
    /* Transition: '<S689>:2' */
    (void)Rte_Write_VeBPCR_b_BPCM_CommFailFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_e_BPCM_Comm_Fail' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_e_ChargingStat_BPCM(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_e_ChargingStat_BPCM' */
    /* Outport: '<Root>/VeBPCR_b_ChargingStat_BPCMFA' incorporates:
     *  Chart: '<S53>/FsftBPCR_e_ChargingStat_BPCMChrt'
     *  SignalConversion generated from: '<S53>/VeBPCR_b_ChargingStat_BPCMFA'
     */
    /* Gateway: FsftBPCR_e_ChargingStat_BPCM/FsftBPCR_e_ChargingStat_BPCMChrt */
    /* During: FsftBPCR_e_ChargingStat_BPCM/FsftBPCR_e_ChargingStat_BPCMChrt */
    /* Entry Internal: FsftBPCR_e_ChargingStat_BPCM/FsftBPCR_e_ChargingStat_BPCMChrt */
    /* Transition: '<S690>:2' */
    (void)Rte_Write_VeBPCR_b_ChargingStat_BPCMFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_e_ChargingStat_BPCM' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_e_DCIsolSts(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_e_DCIsolSts' */
    /* Outport: '<Root>/VeBPCR_b_DCIsolStsFA' incorporates:
     *  Chart: '<S54>/FsftBPCR_e_DCIsolStsChrt'
     *  SignalConversion generated from: '<S54>/VeBPCR_b_DCIsolStsFA'
     */
    /* Gateway: FsftBPCR_e_DCIsolSts/FsftBPCR_e_DCIsolStsChrt */
    /* During: FsftBPCR_e_DCIsolSts/FsftBPCR_e_DCIsolStsChrt */
    /* Entry Internal: FsftBPCR_e_DCIsolSts/FsftBPCR_e_DCIsolStsChrt */
    /* Transition: '<S691>:2' */
    (void)Rte_Write_VeBPCR_b_DCIsolStsFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_e_DCIsolSts' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_e_HVBatIntrlkIntrnlStat(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_e_HVBatIntrlkIntrnlStat' */
    /* Outport: '<Root>/VeBPCR_b_HVBatIntrlkIntrnlStatFA' incorporates:
     *  Chart: '<S55>/FsftBPCR_e_HVBatIntrlkIntrnlStatChrt'
     *  SignalConversion generated from: '<S55>/VeBPCR_b_HVBatIntrlkIntrnlStatFA'
     */
    /* Gateway: FsftBPCR_e_HVBatIntrlkIntrnlStat/FsftBPCR_e_HVBatIntrlkIntrnlStatChrt */
    /* During: FsftBPCR_e_HVBatIntrlkIntrnlStat/FsftBPCR_e_HVBatIntrlkIntrnlStatChrt */
    /* Entry Internal: FsftBPCR_e_HVBatIntrlkIntrnlStat/FsftBPCR_e_HVBatIntrlkIntrnlStatChrt */
    /* Transition: '<S692>:2' */
    (void)Rte_Write_VeBPCR_b_HVBatIntrlkIntrnlStatFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_e_HVBatIntrlkIntrnlStat' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_e_HV_BatCntctrStat(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_e_HV_BatCntctrStat' */
    /* Merge: '<Root>/Merge_85' incorporates:
     *  Chart: '<S56>/FsftBPCR_e_HV_BatCntctrStatChrt'
     *  SignalConversion generated from: '<S56>/VeBPCR_b_HV_BatCntctrStatFA_write'
     */
    /* Gateway: FsftBPCR_e_HV_BatCntctrStat/FsftBPCR_e_HV_BatCntctrStatChrt */
    /* During: FsftBPCR_e_HV_BatCntctrStat/FsftBPCR_e_HV_BatCntctrStatChrt */
    /* Entry Internal: FsftBPCR_e_HV_BatCntctrStat/FsftBPCR_e_HV_BatCntctrStatChrt */
    /* Transition: '<S693>:2' */
    Rte_IrvWrite_FsftBPCR_e_HV_BatCntctrStat_HV_BatCntctrStatFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_e_HV_BatCntctrStat' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_e_HV_BatInrlkStat(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_e_HV_BatInrlkStat' */
    /* Outport: '<Root>/VeBPCR_b_HV_BatInrlkStatFA' incorporates:
     *  Chart: '<S57>/FsftBPCR_e_HV_BatInrlkStatChrt'
     *  SignalConversion generated from: '<S57>/VeBPCR_b_HV_BatInrlkStatFA'
     */
    /* Gateway: FsftBPCR_e_HV_BatInrlkStat/FsftBPCR_e_HV_BatInrlkStatChrt */
    /* During: FsftBPCR_e_HV_BatInrlkStat/FsftBPCR_e_HV_BatInrlkStatChrt */
    /* Entry Internal: FsftBPCR_e_HV_BatInrlkStat/FsftBPCR_e_HV_BatInrlkStatChrt */
    /* Transition: '<S694>:2' */
    (void)Rte_Write_VeBPCR_b_HV_BatInrlkStatFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_e_HV_BatInrlkStat' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_e_HV_BatIsolStat(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_e_HV_BatIsolStat' */
    /* Outport: '<Root>/VeBPCR_e_HV_BatIsolStat' incorporates:
     *  Chart: '<S58>/FsftBPCR_e_HV_BatIsolStatChrt'
     *  SignalConversion generated from: '<S58>/VeBPCR_e_HV_BatIsolStat'
     */
    /* Gateway: FsftBPCR_e_HV_BatIsolStat/FsftBPCR_e_HV_BatIsolStatChrt */
    /* During: FsftBPCR_e_HV_BatIsolStat/FsftBPCR_e_HV_BatIsolStatChrt */
    /* Entry Internal: FsftBPCR_e_HV_BatIsolStat/FsftBPCR_e_HV_BatIsolStatChrt */
    /* Transition: '<S695>:2' */
    (void)Rte_Write_VeBPCR_e_HV_BatIsolStat_Value(CeHVTR_e_IsolUndetermined);

    /* Outport: '<Root>/VeBPCR_e_HV_BatIsolStat_raw' incorporates:
     *  Chart: '<S58>/FsftBPCR_e_HV_BatIsolStatChrt'
     *  SignalConversion generated from: '<S58>/VeBPCR_e_HV_BatIsolStat_raw'
     */
    (void)Rte_Write_VeBPCR_e_HV_BatIsolStat_raw_Value(CeBPCR_e_GFD_NotPerformed);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_e_HV_BatIsolStat' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_q_FullAmpHrCap(void)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_FullAmpHrCapFA_out_i;

    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_q_FullAmpHrCap' */
    /* Chart: '<S59>/FsftBPCR_q_FullAmpHrCapChrt' */
    /* Gateway: FsftBPCR_q_FullAmpHrCap/FsftBPCR_q_FullAmpHrCapChrt */
    /* During: FsftBPCR_q_FullAmpHrCap/FsftBPCR_q_FullAmpHrCapChrt */
    /* Entry Internal: FsftBPCR_q_FullAmpHrCap/FsftBPCR_q_FullAmpHrCapChrt */
    /* Transition: '<S696>:2' */
    rtb_LeBPCR_b_FullAmpHrCapFA_out_i = true;

    /* Outport: '<Root>/VeBPCR_q_FullAmpHrCap' incorporates:
     *  Chart: '<S59>/FsftBPCR_q_FullAmpHrCapChrt'
     *  SignalConversion generated from: '<S59>/VeBPCR_q_FullAmpHrCap'
     */
    (void)Rte_Write_VeBPCR_q_FullAmpHrCap_Value(KeBPCR_q_FullAmpHrCap_Init);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_q_FullAmpHrCap' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_q_RemainingAmpHrCap(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_q_RemainingAmpHrCap' */
    /* Outport: '<Root>/VeBPCR_b_RemainingAmpHrCapFA' incorporates:
     *  Chart: '<S60>/FsftBPCR_q_RemainingAmpHrCapChrt'
     *  SignalConversion generated from: '<S60>/VeBPCR_b_RemainingAmpHrCapFA'
     */
    /* Gateway: FsftBPCR_q_RemainingAmpHrCap/FsftBPCR_q_RemainingAmpHrCapChrt */
    /* During: FsftBPCR_q_RemainingAmpHrCap/FsftBPCR_q_RemainingAmpHrCapChrt */
    /* Entry Internal: FsftBPCR_q_RemainingAmpHrCap/FsftBPCR_q_RemainingAmpHrCapChrt */
    /* Transition: '<S697>:2' */
    (void)Rte_Write_VeBPCR_b_RemainingAmpHrCapFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_q_RemainingAmpHrCap' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_t_HVBatRealTimeClock(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_t_HVBatRealTimeClock' */
    /* Outport: '<Root>/VeBPCR_b_HVBatRealTimeClock_FA' incorporates:
     *  Chart: '<S61>/FsftBPCR_t_HVBatRealTimeClockChrt'
     *  SignalConversion generated from: '<S61>/VeBPCR_b_HVBatRealTimeClockFA'
     */
    /* Gateway: FsftBPCR_t_HVBatRealTimeClock/FsftBPCR_t_HVBatRealTimeClockChrt */
    /* During: FsftBPCR_t_HVBatRealTimeClock/FsftBPCR_t_HVBatRealTimeClockChrt */
    /* Entry Internal: FsftBPCR_t_HVBatRealTimeClock/FsftBPCR_t_HVBatRealTimeClockChrt */
    /* Transition: '<S698>:2' */
    (void)Rte_Write_VeBPCR_b_HVBatRealTimeClock_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_t_HVBatRealTimeClock' */
}

/* Output function */
FUNC(void, BPCR_CODE) FsftBPCR_t_HVBattCntctrOpnTm(void)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_HVBattCntctrOpnTmFA_out_l;

    /* Outputs for Function Call SubSystem: '<Root>/FsftBPCR_t_HVBattCntctrOpnTm' */
    /* Chart: '<S62>/FsftBPCR_t_HVBattCntctrOpnTmChrt' */
    /* Gateway: FsftBPCR_t_HVBattCntctrOpnTm/FsftBPCR_t_HVBattCntctrOpnTmChrt */
    /* During: FsftBPCR_t_HVBattCntctrOpnTm/FsftBPCR_t_HVBattCntctrOpnTmChrt */
    /* Entry Internal: FsftBPCR_t_HVBattCntctrOpnTm/FsftBPCR_t_HVBattCntctrOpnTmChrt */
    /* Transition: '<S699>:2' */
    rtb_LeBPCR_b_HVBattCntctrOpnTmFA_out_l = true;

    /* Outport: '<Root>/VeBPCR_t_HVBattCntctrOpnTm' incorporates:
     *  Chart: '<S62>/FsftBPCR_t_HVBattCntctrOpnTmChrt'
     *  SignalConversion generated from: '<S62>/VeBPCR_t_HVBattCntctrOpnTm'
     */
    (void)Rte_Write_VeBPCR_t_HVBattCntctrOpnTm_Value(KeBPCR_t_HVBattCntctrOpnTm);

    /* End of Outputs for SubSystem: '<Root>/FsftBPCR_t_HVBattCntctrOpnTm' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_Cnt_HVBatt_NumMaxVlt(VAR(sint16, AUTOMATIC)
    LeBPCR_Cnt_HVBatt_NumMaxVlt)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_Cnt_HVBatt_NumMaxVlt' */
    /* Outport: '<Root>/VeBPCR_Cnt_HVBat_NumMaxVlt' incorporates:
     *  SignalConversion generated from: '<S63>/VeBPCR_Cnt_HVBatt_NumMaxVlt'
     *  SignalConversion generated from: '<S63>/LeBPCR_Cnt_HVBatt_NumMaxVlt'
     */
    /* Gateway: PokeBPCR_Cnt_HVBatt_NumMaxVlt/PokeBPCR_Cnt_HVBatt_NumMaxVltChrt */
    /* During: PokeBPCR_Cnt_HVBatt_NumMaxVlt/PokeBPCR_Cnt_HVBatt_NumMaxVltChrt */
    /* Entry Internal: PokeBPCR_Cnt_HVBatt_NumMaxVlt/PokeBPCR_Cnt_HVBatt_NumMaxVltChrt */
    /* Transition: '<S700>:2' */
    (void)Rte_Write_VeBPCR_Cnt_HVBat_NumMaxVlt_Value(LeBPCR_Cnt_HVBatt_NumMaxVlt);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_Cnt_HVBatt_NumMaxVlt' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_Cnt_HVBatt_NumMinVlt(VAR(sint16, AUTOMATIC)
    LeBPCR_Cnt_HVBatt_NumMinVlt)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_Cnt_HVBatt_NumMinVlt' */
    /* Outport: '<Root>/VeBPCR_Cnt_HVBat_NumMinVlt' incorporates:
     *  SignalConversion generated from: '<S64>/VeBPCR_Cnt_HVBatt_NumMinVlt'
     *  SignalConversion generated from: '<S64>/LeBPCR_Cnt_HVBatt_NumMinVlt'
     */
    /* Gateway: PokeBPCR_Cnt_HVBatt_NumMinVlt/PokeBPCR_Cnt_HVBatt_NumMinVltChrt */
    /* During: PokeBPCR_Cnt_HVBatt_NumMinVlt/PokeBPCR_Cnt_HVBatt_NumMinVltChrt */
    /* Entry Internal: PokeBPCR_Cnt_HVBatt_NumMinVlt/PokeBPCR_Cnt_HVBatt_NumMinVltChrt */
    /* Transition: '<S701>:2' */
    (void)Rte_Write_VeBPCR_Cnt_HVBat_NumMinVlt_Value(LeBPCR_Cnt_HVBatt_NumMinVlt);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_Cnt_HVBatt_NumMinVlt' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_DC_CntctrCntrl_PWM(VAR(float32, AUTOMATIC)
    LeBPCR_DC_CntctrCntrl_PWM, VAR(boolean, AUTOMATIC)
    LeBPCR_b_CntctrCntrl_PWMFA)
{
    boolean rtb_LeBPCR_b_CntctrCntrl_PWMFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_DC_CntctrCntrl_PWM' */
    /* Chart: '<S65>/PokeBPCR_DC_CntctrCntrl_PWMChrt' incorporates:
     *  SignalConversion generated from: '<S65>/LeBPCR_DC_CntctrCntrl_PWM'
     *  SignalConversion generated from: '<S65>/LeBPCR_b_CntctrCntrl_PWMFA'
     */
    /* Gateway: PokeBPCR_DC_CntctrCntrl_PWM/PokeBPCR_DC_CntctrCntrl_PWMChrt */
    /* During: PokeBPCR_DC_CntctrCntrl_PWM/PokeBPCR_DC_CntctrCntrl_PWMChrt */
    /* Entry Internal: PokeBPCR_DC_CntctrCntrl_PWM/PokeBPCR_DC_CntctrCntrl_PWMChrt */
    /* Transition: '<S702>:2' */
    if (!LeBPCR_b_CntctrCntrl_PWMFA)
    {
        /* Transition: '<S702>:3' */
        /* Transition: '<S702>:15' */
        BPCR_ac_B.LeBPCR_DC_CntctrCntrl_PWM_out = LeBPCR_DC_CntctrCntrl_PWM;
        rtb_LeBPCR_b_CntctrCntrl_PWMFA_out = false;

        /* Transition: '<S702>:18' */
    }
    else
    {
        /* Transition: '<S702>:4' */
        rtb_LeBPCR_b_CntctrCntrl_PWMFA_out = true;
    }

    /* End of Chart: '<S65>/PokeBPCR_DC_CntctrCntrl_PWMChrt' */

    /* Outport: '<Root>/VeBPCR_b_CntctrCntrl_PWM_FA' incorporates:
     *  SignalConversion generated from: '<S65>/VeBPCR_b_CntctrCntrl_PWMFA'
     */
    (void)Rte_Write_VeBPCR_b_CntctrCntrl_PWM_FA_Value
        (rtb_LeBPCR_b_CntctrCntrl_PWMFA_out);

    /* SignalConversion generated from: '<S65>/PokeBPCR_DC_CntctrCntrl_PWMChrt' incorporates:
     *  SignalConversion generated from: '<S65>/VeBPCR_DC_CntctrCntrl_PWM_write'
     */
#if Rte_SysCon_Variant_BPCR_3

    /* Merge: '<Root>/Merge_69' */
    Rte_IrvWrite_PokeBPCR_DC_CntctrCntrl_PWM_CntctrCntrl_PWM_write_IRV
        (BPCR_ac_B.LeBPCR_DC_CntctrCntrl_PWM_out);

#endif

    /* End of SignalConversion generated from: '<S65>/PokeBPCR_DC_CntctrCntrl_PWMChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_DC_CntctrCntrl_PWM' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_I_HV_BatCurr(VAR(float32, AUTOMATIC)
    LeBPCR_I_HV_BatCurr, VAR(boolean, AUTOMATIC) LeBPCR_b_HV_BatCurrFA)
{
    boolean rtb_LeBPCR_b_HV_BatCurrFA_out_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_I_HV_BatCurr' */
    /* Chart: '<S66>/PokeBPCR_I_HV_BatCurrChrt' incorporates:
     *  SignalConversion generated from: '<S66>/LeBPCR_I_HV_BatCurr'
     *  SignalConversion generated from: '<S66>/LeBPCR_b_HV_BatCurrFA'
     */
    /* Gateway: PokeBPCR_I_HV_BatCurr/PokeBPCR_I_HV_BatCurrChrt */
    /* During: PokeBPCR_I_HV_BatCurr/PokeBPCR_I_HV_BatCurrChrt */
    /* Entry Internal: PokeBPCR_I_HV_BatCurr/PokeBPCR_I_HV_BatCurrChrt */
    /* Transition: '<S703>:2' */
    if (!LeBPCR_b_HV_BatCurrFA)
    {
        /* Transition: '<S703>:3' */
        /* Transition: '<S703>:15' */
        BPCR_ac_B.LeBPCR_I_HV_BatCurr_out = LeBPCR_I_HV_BatCurr;
        rtb_LeBPCR_b_HV_BatCurrFA_out_o = false;

        /* Transition: '<S703>:18' */
    }
    else
    {
        /* Transition: '<S703>:4' */
        rtb_LeBPCR_b_HV_BatCurrFA_out_o = true;
    }

    /* End of Chart: '<S66>/PokeBPCR_I_HV_BatCurrChrt' */

    /* Outport: '<Root>/VeBPCR_I_HV_BatCurr' incorporates:
     *  SignalConversion generated from: '<S66>/VeBPCR_I_HV_BatCurr'
     */
    (void)Rte_Write_VeBPCR_I_HV_BatCurr_Value(BPCR_ac_B.LeBPCR_I_HV_BatCurr_out);

    /* Outport: '<Root>/VeBPCR_b_HV_BatCurrFA' incorporates:
     *  SignalConversion generated from: '<S66>/VeBPCR_b_HV_BatCurrFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatCurrFA_Value(rtb_LeBPCR_b_HV_BatCurrFA_out_o);

    /* Merge: '<Root>/Merge_120_Irv' incorporates:
     *  SignalConversion generated from: '<S66>/VeBPCR_b_HV_BatCurrFA_write'
     * */
    Rte_IrvWrite_PokeBPCR_I_HV_BatCurr_HV_BatCurrFA_write_IRV
        (rtb_LeBPCR_b_HV_BatCurrFA_out_o);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_I_HV_BatCurr' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_I_HV_BatCurrString2(VAR(float32, AUTOMATIC)
    LeBPCR_I_HV_Current_String2, VAR(boolean, AUTOMATIC)
    LeBPCR_b_HV_Current_String2_FA)
{
    boolean rtb_LeBPCR_b_HV_Current_String2_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_I_HV_BatCurrString2' */
    /* Chart: '<S67>/PokeBPCR_I_HV_BatCurrString2Chrt' incorporates:
     *  SignalConversion generated from: '<S67>/LeBPCR_I_HV_Current_String2'
     *  SignalConversion generated from: '<S67>/LeBPCR_b_HV_Current_String2_FA'
     */
    /* Gateway: PokeBPCR_I_HV_BatCurrString2/PokeBPCR_I_HV_BatCurrString2Chrt */
    /* During: PokeBPCR_I_HV_BatCurrString2/PokeBPCR_I_HV_BatCurrString2Chrt */
    /* Entry Internal: PokeBPCR_I_HV_BatCurrString2/PokeBPCR_I_HV_BatCurrString2Chrt */
    /* Transition: '<S704>:2' */
    if (!LeBPCR_b_HV_Current_String2_FA)
    {
        /* Transition: '<S704>:27' */
        /* Transition: '<S704>:28' */
        BPCR_ac_B.LeBPCR_I_HV_Current_String2_out = LeBPCR_I_HV_Current_String2;
        rtb_LeBPCR_b_HV_Current_String2_FA_out = false;

        /* Transition: '<S704>:30' */
    }
    else
    {
        /* Transition: '<S704>:29' */
        rtb_LeBPCR_b_HV_Current_String2_FA_out = true;
    }

    /* End of Chart: '<S67>/PokeBPCR_I_HV_BatCurrString2Chrt' */

    /* Outport: '<Root>/VeBPCR_I_HV_Current_String2' incorporates:
     *  SignalConversion generated from: '<S67>/VeBPCR_I_HV_Current_String2'
     */
    (void)Rte_Write_VeBPCR_I_HV_Current_String2_Value
        (BPCR_ac_B.LeBPCR_I_HV_Current_String2_out);

    /* Outport: '<Root>/VeBPCR_b_HV_Current_String2_FA' incorporates:
     *  SignalConversion generated from: '<S67>/VeBPCR_b_HV_Current_String2_FA'
     */
    (void)Rte_Write_VeBPCR_b_HV_Current_String2_FA_Value
        (rtb_LeBPCR_b_HV_Current_String2_FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_I_HV_BatCurrString2' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_I_MaxChgCurrAlwd(VAR(float32, AUTOMATIC)
    LeBPCR_I_MaxChgCurrAlwd, VAR(boolean, AUTOMATIC) LeBPCR_b_MaxChgCurrAlwdFA)
{
    boolean rtb_LeBPCR_b_MaxChgCurrAlwdFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_I_MaxChgCurrAlwd' */
    /* Chart: '<S68>/PokeBPCR_I_MaxChgCurrAlwdChrt' incorporates:
     *  SignalConversion generated from: '<S68>/LeBPCR_b_MaxChgCurrAlwdFA'
     */
    /* Gateway: PokeBPCR_I_MaxChgCurrAlwd/PokeBPCR_I_MaxChgCurrAlwdChrt */
    /* During: PokeBPCR_I_MaxChgCurrAlwd/PokeBPCR_I_MaxChgCurrAlwdChrt */
    /* Entry Internal: PokeBPCR_I_MaxChgCurrAlwd/PokeBPCR_I_MaxChgCurrAlwdChrt */
    /* Transition: '<S705>:2' */
    if (!LeBPCR_b_MaxChgCurrAlwdFA)
    {
        /* SignalConversion generated from: '<S68>/VeBPCR_I_MaxChgCurrAlwd' incorporates:
         *  Outport: '<Root>/VeBPCR_I_MaxChrgCurrAlwd'
         *  SignalConversion generated from: '<S68>/LeBPCR_I_MaxChgCurrAlwd'
         */
        /* Transition: '<S705>:3' */
        /* Transition: '<S705>:15' */
        (void)Rte_Write_VeBPCR_I_MaxChrgCurrAlwd_Value(LeBPCR_I_MaxChgCurrAlwd);
        rtb_LeBPCR_b_MaxChgCurrAlwdFA_out_b = false;

        /* Transition: '<S705>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S68>/VeBPCR_I_MaxChgCurrAlwd' incorporates:
         *  Outport: '<Root>/VeBPCR_I_MaxChrgCurrAlwd'
         */
        /* Transition: '<S705>:4' */
        (void)Rte_Write_VeBPCR_I_MaxChrgCurrAlwd_Value
            (KeBPCR_K_Default309h_Value);
        rtb_LeBPCR_b_MaxChgCurrAlwdFA_out_b = true;
    }

    /* End of Chart: '<S68>/PokeBPCR_I_MaxChgCurrAlwdChrt' */

    /* Outport: '<Root>/VeBPCR_b_MaxChgCurrAlwdFA' incorporates:
     *  SignalConversion generated from: '<S68>/VeBPCR_b_MaxChgCurrAlwdFA'
     */
    (void)Rte_Write_VeBPCR_b_MaxChgCurrAlwdFA_Value
        (rtb_LeBPCR_b_MaxChgCurrAlwdFA_out_b);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_I_MaxChgCurrAlwd' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_I_MaxDisChgCurrAlwd(VAR(float32, AUTOMATIC)
    LeBPCR_I_MaxDisChgCurrAlwd, VAR(boolean, AUTOMATIC)
    LeBPCR_b_MaxDisChgCurrAlwdFA)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_MaxDisChgCurrAlwdFA_out;
    UNUSED_PARAMETER(LeBPCR_I_MaxDisChgCurrAlwd);

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_I_MaxDisChgCurrAlwd' */
    /* Chart: '<S69>/PokeBPCR_I_MaxDisChgCurrAlwdChrt' incorporates:
     *  SignalConversion generated from: '<S69>/LeBPCR_b_MaxDisChgCurrAlwdFA'
     */
    /* Gateway: PokeBPCR_I_MaxDisChgCurrAlwd/PokeBPCR_I_MaxDisChgCurrAlwdChrt */
    /* During: PokeBPCR_I_MaxDisChgCurrAlwd/PokeBPCR_I_MaxDisChgCurrAlwdChrt */
    /* Entry Internal: PokeBPCR_I_MaxDisChgCurrAlwd/PokeBPCR_I_MaxDisChgCurrAlwdChrt */
    /* Transition: '<S706>:2' */
    if (!LeBPCR_b_MaxDisChgCurrAlwdFA)
    {
        /* Transition: '<S706>:3' */
        /* Transition: '<S706>:15' */
        rtb_LeBPCR_b_MaxDisChgCurrAlwdFA_out = false;

        /* Transition: '<S706>:18' */
    }
    else
    {
        /* Transition: '<S706>:4' */
        rtb_LeBPCR_b_MaxDisChgCurrAlwdFA_out = true;
    }

    /* End of Chart: '<S69>/PokeBPCR_I_MaxDisChgCurrAlwdChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_I_MaxDisChgCurrAlwd' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_P_HV_BatChrgPwrET(VAR(float32, AUTOMATIC)
    LeBPCR_P_HV_BatChrgPwrET, VAR(boolean, AUTOMATIC) LeBPCR_b_HV_BatChrgPwrETFA)
{
    boolean rtb_LeBPCR_b_HV_BatChrgPwrETFA_out_f;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_P_HV_BatChrgPwrET' */
    /* Chart: '<S70>/PokeBPCR_P_HV_BatChrgPwrETChrt' incorporates:
     *  SignalConversion generated from: '<S70>/LeBPCR_P_HV_BatChrgPwrET'
     *  SignalConversion generated from: '<S70>/LeBPCR_b_HV_BatChrgPwrETFA'
     */
    /* Gateway: PokeBPCR_P_HV_BatChrgPwrET/PokeBPCR_P_HV_BatChrgPwrETChrt */
    /* During: PokeBPCR_P_HV_BatChrgPwrET/PokeBPCR_P_HV_BatChrgPwrETChrt */
    /* Entry Internal: PokeBPCR_P_HV_BatChrgPwrET/PokeBPCR_P_HV_BatChrgPwrETChrt */
    /* Transition: '<S707>:2' */
    if (!LeBPCR_b_HV_BatChrgPwrETFA)
    {
        /* Transition: '<S707>:3' */
        /* Transition: '<S707>:15' */
        BPCR_ac_B.LeBPCR_P_HV_BatChrgPwrET_out = LeBPCR_P_HV_BatChrgPwrET;
        rtb_LeBPCR_b_HV_BatChrgPwrETFA_out_f = false;
        BPCR_ac_B.LeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd = true;

        /* Transition: '<S707>:18' */
    }
    else
    {
        /* Transition: '<S707>:4' */
        rtb_LeBPCR_b_HV_BatChrgPwrETFA_out_f = true;
    }

    /* End of Chart: '<S70>/PokeBPCR_P_HV_BatChrgPwrETChrt' */

    /* Outport: '<Root>/VeBPCR_P_HV_BatChrgPwrET' incorporates:
     *  SignalConversion generated from: '<S70>/VeBPCR_P_HV_BatChrgPwrET'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatChrgPwrET_Value
        (BPCR_ac_B.LeBPCR_P_HV_BatChrgPwrET_out);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrET_FA' incorporates:
     *  SignalConversion generated from: '<S70>/VeBPCR_b_HV_BatChrgPwrETFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrET_FA_Value
        (rtb_LeBPCR_b_HV_BatChrgPwrETFA_out_f);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd' incorporates:
     *  SignalConversion generated from: '<S70>/VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd_Value
        (BPCR_ac_B.LeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd);

    /* Merge: '<Root>/Merge_25_Irv' incorporates:
     *  SignalConversion generated from: '<S70>/VeBPCR_P_HV_BatChrgPwrET_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_HV_BatChrgPwrET_HVBatChrgPowET_Init_write_IRV
        (BPCR_ac_B.LeBPCR_P_HV_BatChrgPwrET_out);

    /* Merge: '<Root>/Merge_24_Irv' incorporates:
     *  SignalConversion generated from: '<S70>/VeBPCR_b_HV_BatChrgPwrETFA_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_HV_BatChrgPwrET_HVBatChrgPowET_FA_Init_write_IRV
        (rtb_LeBPCR_b_HV_BatChrgPwrETFA_out_f);

    /* Merge: '<Root>/Merge_40_Irv' incorporates:
     *  SignalConversion generated from: '<S70>/VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_HV_BatChrgPwrET_VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd_write_IRV
        (BPCR_ac_B.LeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_P_HV_BatChrgPwrET' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_P_HV_BatChrgPwrLT(VAR(float32, AUTOMATIC)
    LeBPCR_P_HV_BatChrgPwrLT, VAR(boolean, AUTOMATIC) LeBPCR_b_HV_BatChrgPwrLTFA)
{
    boolean rtb_LeBPCR_b_HV_BatChrgPwrLTFA_out_n;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_P_HV_BatChrgPwrLT' */
    /* Chart: '<S71>/PokeBPCR_P_HV_BatChrgPwrLTChrt' incorporates:
     *  SignalConversion generated from: '<S71>/LeBPCR_P_HV_BatChrgPwrLT'
     *  SignalConversion generated from: '<S71>/LeBPCR_b_HV_BatChrgPwrLTFA'
     */
    /* Gateway: PokeBPCR_P_HV_BatChrgPwrLT/PokeBPCR_P_HV_BatChrgPwrLTChrt */
    /* During: PokeBPCR_P_HV_BatChrgPwrLT/PokeBPCR_P_HV_BatChrgPwrLTChrt */
    /* Entry Internal: PokeBPCR_P_HV_BatChrgPwrLT/PokeBPCR_P_HV_BatChrgPwrLTChrt */
    /* Transition: '<S708>:2' */
    if (!LeBPCR_b_HV_BatChrgPwrLTFA)
    {
        /* Transition: '<S708>:3' */
        /* Transition: '<S708>:15' */
        BPCR_ac_B.LeBPCR_P_HV_BatChrgPwrLT_out = LeBPCR_P_HV_BatChrgPwrLT;
        rtb_LeBPCR_b_HV_BatChrgPwrLTFA_out_n = false;
        BPCR_ac_B.LeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd = true;

        /* Transition: '<S708>:18' */
    }
    else
    {
        /* Transition: '<S708>:4' */
        rtb_LeBPCR_b_HV_BatChrgPwrLTFA_out_n = true;
    }

    /* End of Chart: '<S71>/PokeBPCR_P_HV_BatChrgPwrLTChrt' */

    /* Outport: '<Root>/VeBPCR_P_HV_BatChrgPwrLT' incorporates:
     *  SignalConversion generated from: '<S71>/VeBPCR_P_HV_BatChrgPwrLT'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatChrgPwrLT_Value
        (BPCR_ac_B.LeBPCR_P_HV_BatChrgPwrLT_out);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrLT_FA' incorporates:
     *  SignalConversion generated from: '<S71>/VeBPCR_b_HV_BatChrgPwrLTFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrLT_FA_Value
        (rtb_LeBPCR_b_HV_BatChrgPwrLTFA_out_n);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd' incorporates:
     *  SignalConversion generated from: '<S71>/VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd_Value
        (BPCR_ac_B.LeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd);

    /* Merge: '<Root>/Merge_26_Irv' incorporates:
     *  SignalConversion generated from: '<S71>/VeBPCR_P_HV_BatChrgPwrLT_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_HV_BatChrgPwrLT_HVBatChrgPowLT_Init_write_IRV
        (BPCR_ac_B.LeBPCR_P_HV_BatChrgPwrLT_out);

    /* Merge: '<Root>/Merge_27_Irv' incorporates:
     *  SignalConversion generated from: '<S71>/VeBPCR_b_HV_BatChrgPwrLTFA_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_HV_BatChrgPwrLT_HVBatChrgPowLT_FA_Init_write_IRV
        (rtb_LeBPCR_b_HV_BatChrgPwrLTFA_out_n);

    /* Merge: '<Root>/Merge_42_Irv' incorporates:
     *  SignalConversion generated from: '<S71>/VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_HV_BatChrgPwrLT_VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd_write_IRV
        (BPCR_ac_B.LeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_P_HV_BatChrgPwrLT' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_P_HV_BatChrgPwrST(VAR(float32, AUTOMATIC)
    LeBPCR_P_HV_BatChrgPwrST, VAR(boolean, AUTOMATIC) LeBPCR_b_HV_BatChrgPwrSTFA)
{
    boolean rtb_LeBPCR_b_HV_BatChrgPwrSTFA_out_a;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_P_HV_BatChrgPwrST' */
    /* Chart: '<S72>/PokeBPCR_P_HV_BatChrgPwrSTChrt' incorporates:
     *  SignalConversion generated from: '<S72>/LeBPCR_P_HV_BatChrgPwrST'
     *  SignalConversion generated from: '<S72>/LeBPCR_b_HV_BatChrgPwrSTFA'
     */
    /* Gateway: PokeBPCR_P_HV_BatChrgPwrST/PokeBPCR_P_HV_BatChrgPwrSTChrt */
    /* During: PokeBPCR_P_HV_BatChrgPwrST/PokeBPCR_P_HV_BatChrgPwrSTChrt */
    /* Entry Internal: PokeBPCR_P_HV_BatChrgPwrST/PokeBPCR_P_HV_BatChrgPwrSTChrt */
    /* Transition: '<S709>:2' */
    if (!LeBPCR_b_HV_BatChrgPwrSTFA)
    {
        /* Transition: '<S709>:3' */
        /* Transition: '<S709>:15' */
        BPCR_ac_B.LeBPCR_P_HV_BatChrgPwrST_out = LeBPCR_P_HV_BatChrgPwrST;
        rtb_LeBPCR_b_HV_BatChrgPwrSTFA_out_a = false;
        BPCR_ac_B.LeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd = true;

        /* Transition: '<S709>:18' */
    }
    else
    {
        /* Transition: '<S709>:4' */
        rtb_LeBPCR_b_HV_BatChrgPwrSTFA_out_a = true;
    }

    /* End of Chart: '<S72>/PokeBPCR_P_HV_BatChrgPwrSTChrt' */

    /* Outport: '<Root>/VeBPCR_P_HV_BatChrgPwrST' incorporates:
     *  SignalConversion generated from: '<S72>/VeBPCR_P_HV_BatChrgPwrST'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatChrgPwrST_Value
        (BPCR_ac_B.LeBPCR_P_HV_BatChrgPwrST_out);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrST_FA' incorporates:
     *  SignalConversion generated from: '<S72>/VeBPCR_b_HV_BatChrgPwrSTFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrST_FA_Value
        (rtb_LeBPCR_b_HV_BatChrgPwrSTFA_out_a);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd' incorporates:
     *  SignalConversion generated from: '<S72>/VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd_Value
        (BPCR_ac_B.LeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd);

    /* Merge: '<Root>/Merge_15_Irv' incorporates:
     *  SignalConversion generated from: '<S72>/VeBPCR_P_HV_BatChrgPwrST_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_HV_BatChrgPwrST_HVBatChrgPowST_Init_write_IRV
        (BPCR_ac_B.LeBPCR_P_HV_BatChrgPwrST_out);

    /* Merge: '<Root>/Merge_14_Irv' incorporates:
     *  SignalConversion generated from: '<S72>/VeBPCR_b_HV_BatChrgPwrSTFA_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_HV_BatChrgPwrST_HVBatChrgPowST_FA_Init_write_IRV
        (rtb_LeBPCR_b_HV_BatChrgPwrSTFA_out_a);

    /* Merge: '<Root>/Merge_30_Irv' incorporates:
     *  SignalConversion generated from: '<S72>/VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_HV_BatChrgPwrST_VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd_write_IRV
        (BPCR_ac_B.LeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_P_HV_BatChrgPwrST' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_P_HV_BatDschrgPwrET(VAR(float32, AUTOMATIC)
    LeBPCR_P_HV_BatDschrgPwrET, VAR(boolean, AUTOMATIC)
    LeBPCR_b_HV_BatDschrgPwrETFA)
{
    boolean rtb_LeBPCR_b_HV_BatDschrgPwrETFA_out_g;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_P_HV_BatDschrgPwrET' */
    /* Chart: '<S73>/PokeBPCR_P_HV_BatDschrgPwrETChrt' incorporates:
     *  SignalConversion generated from: '<S73>/LeBPCR_P_HV_BatDschrgPwrET'
     *  SignalConversion generated from: '<S73>/LeBPCR_b_HV_BatDschrgPwrETFA'
     */
    /* Gateway: PokeBPCR_P_HV_BatDschrgPwrET/PokeBPCR_P_HV_BatDschrgPwrETChrt */
    /* During: PokeBPCR_P_HV_BatDschrgPwrET/PokeBPCR_P_HV_BatDschrgPwrETChrt */
    /* Entry Internal: PokeBPCR_P_HV_BatDschrgPwrET/PokeBPCR_P_HV_BatDschrgPwrETChrt */
    /* Transition: '<S710>:2' */
    if (!LeBPCR_b_HV_BatDschrgPwrETFA)
    {
        /* Transition: '<S710>:3' */
        /* Transition: '<S710>:15' */
        BPCR_ac_B.LeBPCR_P_HV_BatDschrgPwrET_out = LeBPCR_P_HV_BatDschrgPwrET;
        rtb_LeBPCR_b_HV_BatDschrgPwrETFA_out_g = false;
        BPCR_ac_B.LeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd = true;

        /* Transition: '<S710>:18' */
    }
    else
    {
        /* Transition: '<S710>:4' */
        rtb_LeBPCR_b_HV_BatDschrgPwrETFA_out_g = true;
    }

    /* End of Chart: '<S73>/PokeBPCR_P_HV_BatDschrgPwrETChrt' */

    /* Outport: '<Root>/VeBPCR_P_HV_BatDschrgPwrET' incorporates:
     *  SignalConversion generated from: '<S73>/VeBPCR_P_HV_BatDschrgPwrET'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatDschrgPwrET_Value
        (BPCR_ac_B.LeBPCR_P_HV_BatDschrgPwrET_out);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrET_FA' incorporates:
     *  SignalConversion generated from: '<S73>/VeBPCR_b_HV_BatDschrgPwrETFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrET_FA_Value
        (rtb_LeBPCR_b_HV_BatDschrgPwrETFA_out_g);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd' incorporates:
     *  SignalConversion generated from: '<S73>/VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd_Value
        (BPCR_ac_B.LeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd);

    /* Merge: '<Root>/Merge_18_Irv' incorporates:
     *  SignalConversion generated from: '<S73>/VeBPCR_P_HV_BatDschrgPwrET_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_HV_BatDschrgPwrET_HVBatDschrgPowET_Init_write_IRV
        (BPCR_ac_B.LeBPCR_P_HV_BatDschrgPwrET_out);

    /* Merge: '<Root>/Merge_13_Irv' incorporates:
     *  SignalConversion generated from: '<S73>/VeBPCR_b_HV_BatDschrgPwrETFA_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_HV_BatDschrgPwrET_HVBatDschrgPowET_FA_Init_write_IRV
        (rtb_LeBPCR_b_HV_BatDschrgPwrETFA_out_g);

    /* Merge: '<Root>/Merge_35_Irv' incorporates:
     *  SignalConversion generated from: '<S73>/VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_HV_BatDschrgPwrET_VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd_write_IRV
        (BPCR_ac_B.LeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_P_HV_BatDschrgPwrET' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_P_HV_BatDschrgPwrLT(VAR(float32, AUTOMATIC)
    LeBPCR_P_HV_BatDschrgPwrLT, VAR(boolean, AUTOMATIC)
    LeBPCR_b_HV_BatDschrgPwrLTFA)
{
    boolean rtb_LeBPCR_b_HV_BatDschrgPwrLTFA_out_j;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_P_HV_BatDschrgPwrLT' */
    /* Chart: '<S74>/PokeBPCR_P_HV_BatDschrgPwrLTChrt' incorporates:
     *  SignalConversion generated from: '<S74>/LeBPCR_P_HV_BatDschrgPwrLT'
     *  SignalConversion generated from: '<S74>/LeBPCR_b_HV_BatDschrgPwrLTFA'
     */
    /* Gateway: PokeBPCR_P_HV_BatDschrgPwrLT/PokeBPCR_P_HV_BatDschrgPwrLTChrt */
    /* During: PokeBPCR_P_HV_BatDschrgPwrLT/PokeBPCR_P_HV_BatDschrgPwrLTChrt */
    /* Entry Internal: PokeBPCR_P_HV_BatDschrgPwrLT/PokeBPCR_P_HV_BatDschrgPwrLTChrt */
    /* Transition: '<S711>:2' */
    if (!LeBPCR_b_HV_BatDschrgPwrLTFA)
    {
        /* Transition: '<S711>:3' */
        /* Transition: '<S711>:15' */
        BPCR_ac_B.LeBPCR_P_HV_BatDschrgPwrLT_out = LeBPCR_P_HV_BatDschrgPwrLT;
        rtb_LeBPCR_b_HV_BatDschrgPwrLTFA_out_j = false;
        BPCR_ac_B.LeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd = true;

        /* Transition: '<S711>:18' */
    }
    else
    {
        /* Transition: '<S711>:4' */
        rtb_LeBPCR_b_HV_BatDschrgPwrLTFA_out_j = true;
    }

    /* End of Chart: '<S74>/PokeBPCR_P_HV_BatDschrgPwrLTChrt' */

    /* Outport: '<Root>/VeBPCR_P_HV_BatDschrgPwrLT' incorporates:
     *  SignalConversion generated from: '<S74>/VeBPCR_P_HV_BatDschrgPwrLT'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatDschrgPwrLT_Value
        (BPCR_ac_B.LeBPCR_P_HV_BatDschrgPwrLT_out);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrLT_FA' incorporates:
     *  SignalConversion generated from: '<S74>/VeBPCR_b_HV_BatDschrgPwrLTFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrLT_FA_Value
        (rtb_LeBPCR_b_HV_BatDschrgPwrLTFA_out_j);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd' incorporates:
     *  SignalConversion generated from: '<S74>/VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd_Value
        (BPCR_ac_B.LeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd);

    /* Merge: '<Root>/Merge_21_Irv' incorporates:
     *  SignalConversion generated from: '<S74>/VeBPCR_P_HV_BatDschrgPwrLT_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_HV_BatDschrgPwrLT_HVBatDschrgPowLT_Init_write_IRV
        (BPCR_ac_B.LeBPCR_P_HV_BatDschrgPwrLT_out);

    /* Merge: '<Root>/Merge_20_Irv' incorporates:
     *  SignalConversion generated from: '<S74>/VeBPCR_b_HV_BatDschrgPwrLTFA_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_HV_BatDschrgPwrLT_HVBatDschrgPowLT_FA_Init_write_IRV
        (rtb_LeBPCR_b_HV_BatDschrgPwrLTFA_out_j);

    /* Merge: '<Root>/Merge_36_Irv' incorporates:
     *  SignalConversion generated from: '<S74>/VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_HV_BatDschrgPwrLT_VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd_write_IRV
        (BPCR_ac_B.LeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_P_HV_BatDschrgPwrLT' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_P_HV_BatDschrgPwrST(VAR(float32, AUTOMATIC)
    LeBPCR_P_HV_BatDschrgPwrST, VAR(boolean, AUTOMATIC)
    LeBPCR_b_HV_BatDschrgPwrSTFA)
{
    boolean rtb_LeBPCR_b_HV_BatDschrgPwrSTFA_out_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_P_HV_BatDschrgPwrST' */
    /* Chart: '<S75>/PokeBPCR_P_HV_BatDschrgPwrSTChrt' incorporates:
     *  SignalConversion generated from: '<S75>/LeBPCR_P_HV_BatDschrgPwrST'
     *  SignalConversion generated from: '<S75>/LeBPCR_b_HV_BatDschrgPwrSTFA'
     */
    /* Gateway: PokeBPCR_P_HV_BatDschrgPwrST/PokeBPCR_P_HV_BatDschrgPwrSTChrt */
    /* During: PokeBPCR_P_HV_BatDschrgPwrST/PokeBPCR_P_HV_BatDschrgPwrSTChrt */
    /* Entry Internal: PokeBPCR_P_HV_BatDschrgPwrST/PokeBPCR_P_HV_BatDschrgPwrSTChrt */
    /* Transition: '<S712>:2' */
    if (!LeBPCR_b_HV_BatDschrgPwrSTFA)
    {
        /* Transition: '<S712>:3' */
        /* Transition: '<S712>:15' */
        BPCR_ac_B.LeBPCR_P_HV_BatDschrgPwrST_out = LeBPCR_P_HV_BatDschrgPwrST;
        rtb_LeBPCR_b_HV_BatDschrgPwrSTFA_out_o = false;
        BPCR_ac_B.LeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd = true;

        /* Transition: '<S712>:18' */
    }
    else
    {
        /* Transition: '<S712>:4' */
        rtb_LeBPCR_b_HV_BatDschrgPwrSTFA_out_o = true;
    }

    /* End of Chart: '<S75>/PokeBPCR_P_HV_BatDschrgPwrSTChrt' */

    /* Outport: '<Root>/VeBPCR_P_HV_BatDschrgPwrST' incorporates:
     *  SignalConversion generated from: '<S75>/VeBPCR_P_HV_BatDschrgPwrST'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatDschrgPwrST_Value
        (BPCR_ac_B.LeBPCR_P_HV_BatDschrgPwrST_out);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrST_FA' incorporates:
     *  SignalConversion generated from: '<S75>/VeBPCR_b_HV_BatDschrgPwrSTFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrST_FA_Value
        (rtb_LeBPCR_b_HV_BatDschrgPwrSTFA_out_o);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd' incorporates:
     *  SignalConversion generated from: '<S75>/VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd_Value
        (BPCR_ac_B.LeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd);

    /* Merge: '<Root>/Merge_23_Irv' incorporates:
     *  SignalConversion generated from: '<S75>/VeBPCR_P_HV_BatDschrgPwrST_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_HV_BatDschrgPwrST_HVBatDschrgPowST_Init_write_IRV
        (BPCR_ac_B.LeBPCR_P_HV_BatDschrgPwrST_out);

    /* Merge: '<Root>/Merge_22_Irv' incorporates:
     *  SignalConversion generated from: '<S75>/VeBPCR_b_HV_BatDschrgPwrSTFA_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_HV_BatDschrgPwrST_HVBatDschrgPowST_FA_Init_write_IRV
        (rtb_LeBPCR_b_HV_BatDschrgPwrSTFA_out_o);

    /* Merge: '<Root>/Merge_37_Irv' incorporates:
     *  SignalConversion generated from: '<S75>/VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_HV_BatDschrgPwrST_VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd_write_IRV
        (BPCR_ac_B.LeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_P_HV_BatDschrgPwrST' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_P_TracBat_EChrgPowLong(VAR(float32, AUTOMATIC)
    LeBPCR_P_TracBat_EChrgPowLong, VAR(boolean, AUTOMATIC)
    LeBPCR_b_TracBat_EChrgPowLongFA)
{
    boolean rtb_LeBPCR_b_TracBat_EChrgPowLongFA_ou_m;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_P_TracBat_EChrgPowLong' */
    /* Chart: '<S76>/PokeBPCR_P_TracBat_EChrgPowLongChrt' incorporates:
     *  SignalConversion generated from: '<S76>/LeBPCR_P_TracBat_EChrgPowLong'
     *  SignalConversion generated from: '<S76>/LeBPCR_b_TracBat_EChrgPowLongFA'
     */
    /* Gateway: PokeBPCR_P_TracBat_EChrgPowLong/PokeBPCR_P_TracBat_EChrgPowLongChrt */
    /* During: PokeBPCR_P_TracBat_EChrgPowLong/PokeBPCR_P_TracBat_EChrgPowLongChrt */
    /* Entry Internal: PokeBPCR_P_TracBat_EChrgPowLong/PokeBPCR_P_TracBat_EChrgPowLongChrt */
    /* Transition: '<S713>:2' */
    if (!LeBPCR_b_TracBat_EChrgPowLongFA)
    {
        /* Transition: '<S713>:3' */
        /* Transition: '<S713>:15' */
        BPCR_ac_B.LeBPCR_P_TracBat_EChrgPowLong_out =
            LeBPCR_P_TracBat_EChrgPowLong;
        rtb_LeBPCR_b_TracBat_EChrgPowLongFA_ou_m = false;

        /* Transition: '<S713>:18' */
    }
    else
    {
        /* Transition: '<S713>:4' */
        rtb_LeBPCR_b_TracBat_EChrgPowLongFA_ou_m = true;
    }

    /* End of Chart: '<S76>/PokeBPCR_P_TracBat_EChrgPowLongChrt' */

    /* Outport: '<Root>/VeBPCR_P_TracBat_EChrgPowLong' incorporates:
     *  SignalConversion generated from: '<S76>/VeBPCR_P_TracBat_EChrgPowLong'
     */
    (void)Rte_Write_VeBPCR_P_TracBat_EChrgPowLong_Value
        (BPCR_ac_B.LeBPCR_P_TracBat_EChrgPowLong_out);

    /* Outport: '<Root>/VeBPCR_b_TracBat_EChrgPowLongFA' incorporates:
     *  SignalConversion generated from: '<S76>/VeBPCR_b_TracBat_EChrgPowLongFA'
     */
    (void)Rte_Write_VeBPCR_b_TracBat_EChrgPowLongFA_Value
        (rtb_LeBPCR_b_TracBat_EChrgPowLongFA_ou_m);

    /* Merge: '<Root>/Merge_70_Irv' incorporates:
     *  SignalConversion generated from: '<S76>/VeBPCR_P_TracBat_EChrgPowLong_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_TracBat_EChrgPowLong_TracBat_EChrgPowLong_write_IRV
        (BPCR_ac_B.LeBPCR_P_TracBat_EChrgPowLong_out);

    /* Merge: '<Root>/Merge_71_Irv' incorporates:
     *  SignalConversion generated from: '<S76>/VeBPCR_b_TracBat_EChrgPowLongFA_write'
     * */
    Rte_IrvWrite_PokeBPCR_P_TracBat_EChrgPowLong_TracBat_EChrgPowLongV_write_IRV
        (rtb_LeBPCR_b_TracBat_EChrgPowLongFA_ou_m);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_P_TracBat_EChrgPowLong' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_Pct_ContctCntrlVerif(VAR(float32, AUTOMATIC)
    LeBPCR_Pct_ContctCntrlVerif, VAR(boolean, AUTOMATIC)
    LeBPCR_b_ContctCntrlVerifFA)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_ContctCntrlVerifFA_out;
    UNUSED_PARAMETER(LeBPCR_Pct_ContctCntrlVerif);

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_Pct_ContctCntrlVerif' */
    /* Chart: '<S77>/PokeBPCR_Pct_ContctCntrlVerifChrt' incorporates:
     *  SignalConversion generated from: '<S77>/LeBPCR_b_ContctCntrlVerifFA'
     */
    /* Gateway: PokeBPCR_Pct_ContctCntrlVerif/PokeBPCR_Pct_ContctCntrlVerifChrt */
    /* During: PokeBPCR_Pct_ContctCntrlVerif/PokeBPCR_Pct_ContctCntrlVerifChrt */
    /* Entry Internal: PokeBPCR_Pct_ContctCntrlVerif/PokeBPCR_Pct_ContctCntrlVerifChrt */
    /* Transition: '<S714>:2' */
    if (!LeBPCR_b_ContctCntrlVerifFA)
    {
        /* Transition: '<S714>:3' */
        /* Transition: '<S714>:15' */
        rtb_LeBPCR_b_ContctCntrlVerifFA_out = false;

        /* Transition: '<S714>:18' */
    }
    else
    {
        /* Transition: '<S714>:4' */
        rtb_LeBPCR_b_ContctCntrlVerifFA_out = true;
    }

    /* End of Chart: '<S77>/PokeBPCR_Pct_ContctCntrlVerifChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_Pct_ContctCntrlVerif' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_Pct_HVBatSOH(VAR(float32, AUTOMATIC)
    LeBPCR_Pct_HVBatSOH)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_Pct_HVBatSOH' */
    /* Outport: '<Root>/VeBPCR_Pct_HVBatSOH' incorporates:
     *  SignalConversion generated from: '<S78>/VeBPCR_Pct_HVBatSOH'
     *  SignalConversion generated from: '<S78>/LeBPCR_Pct_HVBatSOH'
     */
    /* Gateway: PokeBPCR_Pct_HVBatSOH/PokeBPCR_Pct_HVBatSOHChrt */
    /* During: PokeBPCR_Pct_HVBatSOH/PokeBPCR_Pct_HVBatSOHChrt */
    /* Entry Internal: PokeBPCR_Pct_HVBatSOH/PokeBPCR_Pct_HVBatSOHChrt */
    /* Transition: '<S715>:2' */
    (void)Rte_Write_VeBPCR_Pct_HVBatSOH_Value(LeBPCR_Pct_HVBatSOH);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_Pct_HVBatSOH' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_Pct_HVBatSOHLow(VAR(float32, AUTOMATIC)
    LeBPCR_Pct_HVBatSOHLow)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_Pct_HVBatSOHLow' */
    /* Outport: '<Root>/VeBPCR_Pct_HVBatSOHLow' incorporates:
     *  SignalConversion generated from: '<S79>/VeBPCR_Pct_HVBatSOHLow'
     *  SignalConversion generated from: '<S79>/LeBPCR_Pct_HVBatSOHLow'
     */
    /* Gateway: PokeBPCR_Pct_HVBatSOHLow/PokeBPCR_Pct_HVBatSOHLowChrt */
    /* During: PokeBPCR_Pct_HVBatSOHLow/PokeBPCR_Pct_HVBatSOHLowChrt */
    /* Entry Internal: PokeBPCR_Pct_HVBatSOHLow/PokeBPCR_Pct_HVBatSOHLowChrt */
    /* Transition: '<S716>:2' */
    (void)Rte_Write_VeBPCR_Pct_HVBatSOHLow_Value(LeBPCR_Pct_HVBatSOHLow);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_Pct_HVBatSOHLow' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_Pct_HV_BatPackSOC(VAR(float32, AUTOMATIC)
    LeBPCR_Pct_HV_BatPackSOC, VAR(boolean, AUTOMATIC) LeBPCR_b_HV_BatPackSOCFA)
{
    boolean rtb_LeBPCR_b_HV_BatPackSOCFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_Pct_HV_BatPackSOC' */
    /* Chart: '<S80>/PokeBPCR_Pct_HV_BatPackSOCChrt' incorporates:
     *  SignalConversion generated from: '<S80>/LeBPCR_Pct_HV_BatPackSOC'
     *  SignalConversion generated from: '<S80>/LeBPCR_b_HV_BatPackSOCFA'
     */
    /* Gateway: PokeBPCR_Pct_HV_BatPackSOC/PokeBPCR_Pct_HV_BatPackSOCChrt */
    /* During: PokeBPCR_Pct_HV_BatPackSOC/PokeBPCR_Pct_HV_BatPackSOCChrt */
    /* Entry Internal: PokeBPCR_Pct_HV_BatPackSOC/PokeBPCR_Pct_HV_BatPackSOCChrt */
    /* Transition: '<S717>:2' */
    if (!LeBPCR_b_HV_BatPackSOCFA)
    {
        /* Transition: '<S717>:3' */
        /* Transition: '<S717>:15' */
        BPCR_ac_B.LeBPCR_Pct_HV_BatPackSOC_out = LeBPCR_Pct_HV_BatPackSOC;
        rtb_LeBPCR_b_HV_BatPackSOCFA_out_b = false;
        BPCR_ac_B.LeBPCR_b_HV_BatPackSOCSgnl_Rcvd = true;

        /* Transition: '<S717>:18' */
    }
    else
    {
        /* Transition: '<S717>:4' */
        rtb_LeBPCR_b_HV_BatPackSOCFA_out_b = true;
    }

    /* End of Chart: '<S80>/PokeBPCR_Pct_HV_BatPackSOCChrt' */

    /* Outport: '<Root>/VeBPCR_Pct_HV_BatPackSOC' incorporates:
     *  SignalConversion generated from: '<S80>/VeBPCR_Pct_HV_BatPackSOC'
     */
    (void)Rte_Write_VeBPCR_Pct_HV_BatPackSOC_Value
        (BPCR_ac_B.LeBPCR_Pct_HV_BatPackSOC_out);

    /* Outport: '<Root>/VeBPCR_b_HV_BatPackSOC_FA' incorporates:
     *  SignalConversion generated from: '<S80>/VeBPCR_b_HV_BatPackSOCFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatPackSOC_FA_Value
        (rtb_LeBPCR_b_HV_BatPackSOCFA_out_b);

    /* Outport: '<Root>/VeBPCR_b_HV_BatPackSOC_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S80>/VeBPCR_b_HV_BatPackSOCSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatPackSOC_SgnlRcvd_Value
        (BPCR_ac_B.LeBPCR_b_HV_BatPackSOCSgnl_Rcvd);

    /* Merge: '<Root>/Merge_16_Irv' incorporates:
     *  SignalConversion generated from: '<S80>/VeBPCR_Pct_HV_BatPackSOC_write'
     * */
    Rte_IrvWrite_PokeBPCR_Pct_HV_BatPackSOC_HVBatPackSOC_Init_write_IRV
        (BPCR_ac_B.LeBPCR_Pct_HV_BatPackSOC_out);

    /* Merge: '<Root>/Merge_17_Irv' incorporates:
     *  SignalConversion generated from: '<S80>/VeBPCR_b_HV_BatPackSOCFA_write'
     * */
    Rte_IrvWrite_PokeBPCR_Pct_HV_BatPackSOC_HVBatPackSOC_FA_Init_write_IRV
        (rtb_LeBPCR_b_HV_BatPackSOCFA_out_b);

    /* Merge: '<Root>/Merge_32_Irv' incorporates:
     *  SignalConversion generated from: '<S80>/VeBPCR_b_HV_BatPackSOCSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeBPCR_Pct_HV_BatPackSOC_VeBPCR_b_HV_BatPackSOCSgnl_Rcvd_write_IRV
        (BPCR_ac_B.LeBPCR_b_HV_BatPackSOCSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_Pct_HV_BatPackSOC' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_R_HV_BatImped(VAR(float32, AUTOMATIC)
    LeBPCR_R_HV_BatImped, VAR(boolean, AUTOMATIC) LeBPCR_b_HV_BatImpedFA)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_HV_BatImpedFA_out_j;
    UNUSED_PARAMETER(LeBPCR_R_HV_BatImped);

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_R_HV_BatImped' */
    /* Chart: '<S81>/PokeBPCR_R_HV_BatImpedChrt' incorporates:
     *  SignalConversion generated from: '<S81>/LeBPCR_b_HV_BatImpedFA'
     */
    /* Gateway: PokeBPCR_R_HV_BatImped/PokeBPCR_R_HV_BatImpedChrt */
    /* During: PokeBPCR_R_HV_BatImped/PokeBPCR_R_HV_BatImpedChrt */
    /* Entry Internal: PokeBPCR_R_HV_BatImped/PokeBPCR_R_HV_BatImpedChrt */
    /* Transition: '<S718>:2' */
    if (!LeBPCR_b_HV_BatImpedFA)
    {
        /* Transition: '<S718>:3' */
        /* Transition: '<S718>:15' */
        rtb_LeBPCR_b_HV_BatImpedFA_out_j = false;

        /* Transition: '<S718>:18' */
    }
    else
    {
        /* Transition: '<S718>:4' */
        rtb_LeBPCR_b_HV_BatImpedFA_out_j = true;
    }

    /* End of Chart: '<S81>/PokeBPCR_R_HV_BatImpedChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_R_HV_BatImped' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_T_BDUBusBarTemp(VAR(float32, AUTOMATIC)
    LeBPCR_T_BDUBusBarTemp)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_T_BDUBusBarTemp' */
    /* Outport: '<Root>/VeBPCR_T_BDUBusBarTemp' incorporates:
     *  SignalConversion generated from: '<S82>/VeBPCR_T_BDUBusBarTemp'
     *  SignalConversion generated from: '<S82>/LeBPCR_T_BDUBusBarTemp'
     */
    /* Gateway: PokeBPCR_T_BDUBusBarTemp/PokeBPCR_T_BDUBusBarTempChrt */
    /* During: PokeBPCR_T_BDUBusBarTemp/PokeBPCR_T_BDUBusBarTempChrt */
    /* Entry Internal: PokeBPCR_T_BDUBusBarTemp/PokeBPCR_T_BDUBusBarTempChrt */
    /* Transition: '<S719>:2' */
    (void)Rte_Write_VeBPCR_T_BDUBusBarTemp_Value(LeBPCR_T_BDUBusBarTemp);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_T_BDUBusBarTemp' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_T_BusBarTemp(VAR(float32, AUTOMATIC)
    LeBPCR_T_BusBarTemp)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_T_BusBarTemp' */
    /* Outport: '<Root>/VeBPCR_T_BusBarTemp' incorporates:
     *  SignalConversion generated from: '<S83>/VeBPCR_T_BusBarTemp'
     *  SignalConversion generated from: '<S83>/LeBPCR_T_BusBarTemp'
     */
    /* Gateway: PokeBPCR_T_BusBarTemp/PokeBPCR_T_BusBarTempChrt */
    /* During: PokeBPCR_T_BusBarTemp/PokeBPCR_T_BusBarTempChrt */
    /* Entry Internal: PokeBPCR_T_BusBarTemp/PokeBPCR_T_BusBarTempChrt */
    /* Transition: '<S720>:2' */
    (void)Rte_Write_VeBPCR_T_BusBarTemp_Value(LeBPCR_T_BusBarTemp);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_T_BusBarTemp' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_T_HVBatClgOutletTemp(VAR(float32, AUTOMATIC)
    LeBPCR_T_HVBatClgOutletTemp, VAR(boolean, AUTOMATIC)
    LeBPCR_b_HVBatClgOutletTempFA)
{
    boolean rtb_LeBPCR_b_HVBatClgOutletTempFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_T_HVBatClgOutletTemp' */
    /* Chart: '<S84>/PokeBPCR_T_HVBatClgOutletTempChrt' incorporates:
     *  SignalConversion generated from: '<S84>/LeBPCR_T_HVBatClgOutletTemp'
     *  SignalConversion generated from: '<S84>/LeBPCR_b_HVBatClgOutletTempFA'
     */
    /* Gateway: PokeBPCR_T_HVBatClgOutletTemp/PokeBPCR_T_HVBatClgOutletTempChrt */
    /* During: PokeBPCR_T_HVBatClgOutletTemp/PokeBPCR_T_HVBatClgOutletTempChrt */
    /* Entry Internal: PokeBPCR_T_HVBatClgOutletTemp/PokeBPCR_T_HVBatClgOutletTempChrt */
    /* Transition: '<S721>:2' */
    if (!LeBPCR_b_HVBatClgOutletTempFA)
    {
        /* Transition: '<S721>:3' */
        /* Transition: '<S721>:15' */
        BPCR_ac_B.LeBPCR_T_HVBatClgOutletTemp_out = LeBPCR_T_HVBatClgOutletTemp;
        rtb_LeBPCR_b_HVBatClgOutletTempFA_out = false;

        /* Transition: '<S721>:18' */
    }
    else
    {
        /* Transition: '<S721>:4' */
        rtb_LeBPCR_b_HVBatClgOutletTempFA_out = true;
    }

    /* End of Chart: '<S84>/PokeBPCR_T_HVBatClgOutletTempChrt' */

    /* Outport: '<Root>/VeBPCR_T_HVBatClgOutletTemp' incorporates:
     *  SignalConversion generated from: '<S84>/VeBPCR_T_HVBatClgOutletTemp'
     */
    (void)Rte_Write_VeBPCR_T_HVBatClgOutletTemp_Value
        (BPCR_ac_B.LeBPCR_T_HVBatClgOutletTemp_out);

    /* Outport: '<Root>/VeBPCR_b_HVBatClgOutletTempFA' incorporates:
     *  SignalConversion generated from: '<S84>/VeBPCR_b_HVBatClgOutletTempFA'
     */
    (void)Rte_Write_VeBPCR_b_HVBatClgOutletTempFA_Value
        (rtb_LeBPCR_b_HVBatClgOutletTempFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_T_HVBatClgOutletTemp' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_T_HV_BatModTempAvg(VAR(float32, AUTOMATIC)
    LeBPCR_T_HV_BatModTempAvg, VAR(boolean, AUTOMATIC)
    LeBPCR_b_HV_BatModTempAvgFA)
{
    boolean rtb_LeBPCR_b_HV_BatModTempAvgFA_out_l;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_T_HV_BatModTempAvg' */
    /* Chart: '<S85>/PokeBPCR_T_HV_BatModTempAvgChrt' incorporates:
     *  SignalConversion generated from: '<S85>/LeBPCR_T_HV_BatModTempAvg'
     *  SignalConversion generated from: '<S85>/LeBPCR_b_HV_BatModTempAvgFA'
     */
    /* Gateway: PokeBPCR_T_HV_BatModTempAvg/PokeBPCR_T_HV_BatModTempAvgChrt */
    /* During: PokeBPCR_T_HV_BatModTempAvg/PokeBPCR_T_HV_BatModTempAvgChrt */
    /* Entry Internal: PokeBPCR_T_HV_BatModTempAvg/PokeBPCR_T_HV_BatModTempAvgChrt */
    /* Transition: '<S722>:2' */
    if (!LeBPCR_b_HV_BatModTempAvgFA)
    {
        /* Transition: '<S722>:3' */
        /* Transition: '<S722>:15' */
        BPCR_ac_B.LeBPCR_T_HV_BatModTempAvg_out = LeBPCR_T_HV_BatModTempAvg;
        rtb_LeBPCR_b_HV_BatModTempAvgFA_out_l = false;
        BPCR_ac_B.LeBPCR_b_HV_BatModTempAvgSgnl_Rcvd = true;

        /* Transition: '<S722>:18' */
    }
    else
    {
        /* Transition: '<S722>:4' */
        rtb_LeBPCR_b_HV_BatModTempAvgFA_out_l = true;
    }

    /* End of Chart: '<S85>/PokeBPCR_T_HV_BatModTempAvgChrt' */

    /* Outport: '<Root>/VeBPCR_b_HV_BatModTempAvgFA' incorporates:
     *  SignalConversion generated from: '<S85>/VeBPCR_b_HV_BatModTempAvgFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModTempAvgFA_Value
        (rtb_LeBPCR_b_HV_BatModTempAvgFA_out_l);

    /* Merge: '<Root>/Merge_114' incorporates:
     *  SignalConversion generated from: '<S85>/VeBPCR_T_HV_BatModTempAvg_write'
     * */
    Rte_IrvWrite_PokeBPCR_T_HV_BatModTempAvg_HV_BatModTempAvg_write_IRV
        (BPCR_ac_B.LeBPCR_T_HV_BatModTempAvg_out);

    /* Merge: '<Root>/Merge_113_Irv' incorporates:
     *  SignalConversion generated from: '<S85>/VeBPCR_b_HV_BatModTempAvgFA_write'
     * */
    Rte_IrvWrite_PokeBPCR_T_HV_BatModTempAvg_HV_BatModTempAvgFA_write_IRV
        (rtb_LeBPCR_b_HV_BatModTempAvgFA_out_l);

    /* Merge: '<Root>/Merge_186' incorporates:
     *  SignalConversion generated from: '<S85>/VeBPCR_b_HV_BatModTempAvgSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeBPCR_T_HV_BatModTempAvg_VeBPCR_b_HV_BatModTempAvgSgnl_Rcvd_write_IRV
        (BPCR_ac_B.LeBPCR_b_HV_BatModTempAvgSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_T_HV_BatModTempAvg' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_T_HV_BatModTempMax(VAR(float32, AUTOMATIC)
    LeBPCR_T_HV_BatModTempMax, VAR(boolean, AUTOMATIC)
    LeBPCR_b_HV_BatModTempMaxFA)
{
    boolean rtb_LeBPCR_b_HV_BatModTempMaxFA_out_p;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_T_HV_BatModTempMax' */
    /* Chart: '<S86>/PokeBPCR_T_HV_BatModTempMaxChrt' incorporates:
     *  SignalConversion generated from: '<S86>/LeBPCR_T_HV_BatModTempMax'
     *  SignalConversion generated from: '<S86>/LeBPCR_b_HV_BatModTempMaxFA'
     */
    /* Gateway: PokeBPCR_T_HV_BatModTempMax/PokeBPCR_T_HV_BatModTempMaxChrt */
    /* During: PokeBPCR_T_HV_BatModTempMax/PokeBPCR_T_HV_BatModTempMaxChrt */
    /* Entry Internal: PokeBPCR_T_HV_BatModTempMax/PokeBPCR_T_HV_BatModTempMaxChrt */
    /* Transition: '<S723>:2' */
    if (!LeBPCR_b_HV_BatModTempMaxFA)
    {
        /* Transition: '<S723>:3' */
        /* Transition: '<S723>:15' */
        BPCR_ac_B.LeBPCR_T_HV_BatModTempMax_out = LeBPCR_T_HV_BatModTempMax;
        rtb_LeBPCR_b_HV_BatModTempMaxFA_out_p = false;
        BPCR_ac_B.LeBPCR_b_HV_BatModTempMaxSgnl_Rcvd = true;

        /* Transition: '<S723>:18' */
    }
    else
    {
        /* Transition: '<S723>:4' */
        rtb_LeBPCR_b_HV_BatModTempMaxFA_out_p = true;
    }

    /* End of Chart: '<S86>/PokeBPCR_T_HV_BatModTempMaxChrt' */

    /* Outport: '<Root>/VeBPCR_b_HV_BatModTempMaxFA' incorporates:
     *  SignalConversion generated from: '<S86>/VeBPCR_b_HV_BatModTempMaxFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModTempMaxFA_Value
        (rtb_LeBPCR_b_HV_BatModTempMaxFA_out_p);

    /* Merge: '<Root>/Merge_154' incorporates:
     *  SignalConversion generated from: '<S86>/VeBPCR_T_HV_BatModTempMax_write'
     * */
    Rte_IrvWrite_PokeBPCR_T_HV_BatModTempMax_HV_BatModTempMax_write_IRV
        (BPCR_ac_B.LeBPCR_T_HV_BatModTempMax_out);

    /* Merge: '<Root>/Merge_153_Irv' incorporates:
     *  SignalConversion generated from: '<S86>/VeBPCR_b_HV_BatModTempMaxFA_write'
     * */
    Rte_IrvWrite_PokeBPCR_T_HV_BatModTempMax_HV_BatModTempMaxFA_write_IRV
        (rtb_LeBPCR_b_HV_BatModTempMaxFA_out_p);

    /* Merge: '<Root>/Merge_184' incorporates:
     *  SignalConversion generated from: '<S86>/VeBPCR_b_HV_BatModTempMaxSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeBPCR_T_HV_BatModTempMax_VeBPCR_b_HV_BatModTempMaxSgnl_Rcvd_write_IRV
        (BPCR_ac_B.LeBPCR_b_HV_BatModTempMaxSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_T_HV_BatModTempMax' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_T_HV_BatModTempMin(VAR(float32, AUTOMATIC)
    LeBPCR_T_HV_BatModTempMin, VAR(boolean, AUTOMATIC)
    LeBPCR_b_HV_BatModTempMinFA)
{
    boolean rtb_LeBPCR_b_HV_BatModTempMinFA_out_p;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_T_HV_BatModTempMin' */
    /* Chart: '<S87>/PokeBPCR_T_HV_BatModTempMinChrt' incorporates:
     *  SignalConversion generated from: '<S87>/LeBPCR_T_HV_BatModTempMin'
     *  SignalConversion generated from: '<S87>/LeBPCR_b_HV_BatModTempMinFA'
     */
    /* Gateway: PokeBPCR_T_HV_BatModTempMin/PokeBPCR_T_HV_BatModTempMinChrt */
    /* During: PokeBPCR_T_HV_BatModTempMin/PokeBPCR_T_HV_BatModTempMinChrt */
    /* Entry Internal: PokeBPCR_T_HV_BatModTempMin/PokeBPCR_T_HV_BatModTempMinChrt */
    /* Transition: '<S724>:2' */
    if (!LeBPCR_b_HV_BatModTempMinFA)
    {
        /* Transition: '<S724>:3' */
        /* Transition: '<S724>:15' */
        BPCR_ac_B.LeBPCR_T_HV_BatModTempMin_out = LeBPCR_T_HV_BatModTempMin;
        rtb_LeBPCR_b_HV_BatModTempMinFA_out_p = false;
        BPCR_ac_B.LeBPCR_b_HV_BatModTempMinSgnl_Rcvd = true;

        /* Transition: '<S724>:18' */
    }
    else
    {
        /* Transition: '<S724>:4' */
        rtb_LeBPCR_b_HV_BatModTempMinFA_out_p = true;
    }

    /* End of Chart: '<S87>/PokeBPCR_T_HV_BatModTempMinChrt' */

    /* Outport: '<Root>/VeBPCR_b_HV_BatModTempMinFA' incorporates:
     *  SignalConversion generated from: '<S87>/VeBPCR_b_HV_BatModTempMinFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModTempMinFA_Value
        (rtb_LeBPCR_b_HV_BatModTempMinFA_out_p);

    /* Merge: '<Root>/Merge_109' incorporates:
     *  SignalConversion generated from: '<S87>/VeBPCR_T_HV_BatModTempMin_write'
     * */
    Rte_IrvWrite_PokeBPCR_T_HV_BatModTempMin_HV_BatModTempMin_write_IRV
        (BPCR_ac_B.LeBPCR_T_HV_BatModTempMin_out);

    /* Merge: '<Root>/Merge_108_Irv' incorporates:
     *  SignalConversion generated from: '<S87>/VeBPCR_b_HV_BatModTempMinFA_write'
     * */
    Rte_IrvWrite_PokeBPCR_T_HV_BatModTempMin_HV_BatModTempMinFA_write_IRV
        (rtb_LeBPCR_b_HV_BatModTempMinFA_out_p);

    /* Merge: '<Root>/Merge_185' incorporates:
     *  SignalConversion generated from: '<S87>/VeBPCR_b_HV_BatModTempMinSgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeBPCR_T_HV_BatModTempMin_VeBPCR_b_HV_BatModTempMinSgnl_Rcvd_write_IRV
        (BPCR_ac_B.LeBPCR_b_HV_BatModTempMinSgnl_Rcvd);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_T_HV_BatModTempMin' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_U_CellVoltHighThrsh(VAR(float32, AUTOMATIC)
    LeBPCR_U_CellVoltHighThrsh, VAR(boolean, AUTOMATIC)
    LeBPCR_b_CellVoltHighThrshFA)
{
    boolean rtb_LeBPCR_b_CellVoltHighThrshFA_out_g;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_U_CellVoltHighThrsh' */
    /* Chart: '<S88>/PokeBPCR_U_CellVoltHighThrshChrt' incorporates:
     *  SignalConversion generated from: '<S88>/LeBPCR_U_CellVoltHighThrsh'
     *  SignalConversion generated from: '<S88>/LeBPCR_b_CellVoltHighThrshFA'
     */
    /* Gateway: PokeBPCR_U_CellVoltHighThrsh/PokeBPCR_U_CellVoltHighThrshChrt */
    /* During: PokeBPCR_U_CellVoltHighThrsh/PokeBPCR_U_CellVoltHighThrshChrt */
    /* Entry Internal: PokeBPCR_U_CellVoltHighThrsh/PokeBPCR_U_CellVoltHighThrshChrt */
    /* Transition: '<S725>:2' */
    if (!LeBPCR_b_CellVoltHighThrshFA)
    {
        /* Transition: '<S725>:3' */
        /* Transition: '<S725>:15' */
        BPCR_ac_B.LeBPCR_U_CellVoltHighThrsh_out = LeBPCR_U_CellVoltHighThrsh;
        rtb_LeBPCR_b_CellVoltHighThrshFA_out_g = false;

        /* Transition: '<S725>:18' */
    }
    else
    {
        /* Transition: '<S725>:4' */
        rtb_LeBPCR_b_CellVoltHighThrshFA_out_g = true;
    }

    /* End of Chart: '<S88>/PokeBPCR_U_CellVoltHighThrshChrt' */

    /* Outport: '<Root>/VeBPCR_U_CellVoltHighThrsh' incorporates:
     *  SignalConversion generated from: '<S88>/VeBPCR_U_CellVoltHighThrsh'
     */
    (void)Rte_Write_VeBPCR_U_CellVoltHighThrsh_Value
        (BPCR_ac_B.LeBPCR_U_CellVoltHighThrsh_out);

    /* Outport: '<Root>/VeBPCR_b_CellVoltHighThrshFA' incorporates:
     *  SignalConversion generated from: '<S88>/VeBPCR_b_CellVoltHighThrshFA'
     */
    (void)Rte_Write_VeBPCR_b_CellVoltHighThrshFA_Value
        (rtb_LeBPCR_b_CellVoltHighThrshFA_out_g);

    /* Merge: '<Root>/Merge_118_Irv' incorporates:
     *  SignalConversion generated from: '<S88>/VeBPCR_U_CellVoltHighThrsh_write'
     * */
    Rte_IrvWrite_PokeBPCR_U_CellVoltHighThrsh_CellVoltHighThrsh_write_IRV
        (BPCR_ac_B.LeBPCR_U_CellVoltHighThrsh_out);

    /* Merge: '<Root>/Merge_145_Irv' incorporates:
     *  SignalConversion generated from: '<S88>/VeBPCR_b_CellVoltHighThrshFA_write'
     * */
    Rte_IrvWrite_PokeBPCR_U_CellVoltHighThrsh_CellVoltHighThrshFAInit_write_IRV
        (rtb_LeBPCR_b_CellVoltHighThrshFA_out_g);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_U_CellVoltHighThrsh' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_U_CellVoltLowThrsh(VAR(float32, AUTOMATIC)
    LeBPCR_U_CellVoltLowThrsh, VAR(boolean, AUTOMATIC)
    LeBPCR_b_CellVoltLowThrshFA)
{
    boolean rtb_LeBPCR_b_CellVoltLowThrshFA_out_b;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_U_CellVoltLowThrsh' */
    /* Chart: '<S89>/PokeBPCR_U_CellVoltLowThrshChrt' incorporates:
     *  SignalConversion generated from: '<S89>/LeBPCR_U_CellVoltLowThrsh'
     *  SignalConversion generated from: '<S89>/LeBPCR_b_CellVoltLowThrshFA'
     */
    /* Gateway: PokeBPCR_U_CellVoltLowThrsh/PokeBPCR_U_CellVoltLowThrshChrt */
    /* During: PokeBPCR_U_CellVoltLowThrsh/PokeBPCR_U_CellVoltLowThrshChrt */
    /* Entry Internal: PokeBPCR_U_CellVoltLowThrsh/PokeBPCR_U_CellVoltLowThrshChrt */
    /* Transition: '<S726>:2' */
    if (!LeBPCR_b_CellVoltLowThrshFA)
    {
        /* Transition: '<S726>:3' */
        /* Transition: '<S726>:15' */
        BPCR_ac_B.LeBPCR_U_CellVoltLowThrsh_out = LeBPCR_U_CellVoltLowThrsh;
        rtb_LeBPCR_b_CellVoltLowThrshFA_out_b = false;

        /* Transition: '<S726>:18' */
    }
    else
    {
        /* Transition: '<S726>:4' */
        rtb_LeBPCR_b_CellVoltLowThrshFA_out_b = true;
    }

    /* End of Chart: '<S89>/PokeBPCR_U_CellVoltLowThrshChrt' */

    /* Outport: '<Root>/VeBPCR_U_CellVoltLowThrsh' incorporates:
     *  SignalConversion generated from: '<S89>/VeBPCR_U_CellVoltLowThrsh'
     */
    (void)Rte_Write_VeBPCR_U_CellVoltLowThrsh_Value
        (BPCR_ac_B.LeBPCR_U_CellVoltLowThrsh_out);

    /* Outport: '<Root>/VeBPCR_b_CellVoltLowThrshFA' incorporates:
     *  SignalConversion generated from: '<S89>/VeBPCR_b_CellVoltLowThrshFA'
     */
    (void)Rte_Write_VeBPCR_b_CellVoltLowThrshFA_Value
        (rtb_LeBPCR_b_CellVoltLowThrshFA_out_b);

    /* Merge: '<Root>/Merge_115_Irv' incorporates:
     *  SignalConversion generated from: '<S89>/VeBPCR_U_CellVoltLowThrsh_write'
     * */
    Rte_IrvWrite_PokeBPCR_U_CellVoltLowThrsh_CellVoltLowThrsh_write_IRV
        (BPCR_ac_B.LeBPCR_U_CellVoltLowThrsh_out);

    /* Merge: '<Root>/Merge_146_Irv' incorporates:
     *  SignalConversion generated from: '<S89>/VeBPCR_b_CellVoltLowThrshFA_write'
     * */
    Rte_IrvWrite_PokeBPCR_U_CellVoltLowThrsh_CellVoltLowThrshFAInit_write_IRV
        (rtb_LeBPCR_b_CellVoltLowThrshFA_out_b);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_U_CellVoltLowThrsh' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_U_HV_BatModVoltAvg(VAR(float32, AUTOMATIC)
    LeBPCR_U_HV_BatModVoltAvg, VAR(boolean, AUTOMATIC)
    LeBPCR_b_HV_BatModVoltAvgFA)
{
    boolean rtb_LeBPCR_b_HV_BatModVoltAvgFA_out_f;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_U_HV_BatModVoltAvg' */
    /* Chart: '<S90>/PokeBPCR_U_HV_BatModVoltAvgChrt' incorporates:
     *  SignalConversion generated from: '<S90>/LeBPCR_U_HV_BatModVoltAvg'
     *  SignalConversion generated from: '<S90>/LeBPCR_b_HV_BatModVoltAvgFA'
     */
    /* Gateway: PokeBPCR_U_HV_BatModVoltAvg/PokeBPCR_U_HV_BatModVoltAvgChrt */
    /* During: PokeBPCR_U_HV_BatModVoltAvg/PokeBPCR_U_HV_BatModVoltAvgChrt */
    /* Entry Internal: PokeBPCR_U_HV_BatModVoltAvg/PokeBPCR_U_HV_BatModVoltAvgChrt */
    /* Transition: '<S727>:2' */
    if (!LeBPCR_b_HV_BatModVoltAvgFA)
    {
        /* Transition: '<S727>:3' */
        /* Transition: '<S727>:15' */
        BPCR_ac_B.LeBPCR_U_HV_BatModVoltAvg_out = LeBPCR_U_HV_BatModVoltAvg;
        rtb_LeBPCR_b_HV_BatModVoltAvgFA_out_f = false;

        /* Transition: '<S727>:18' */
    }
    else
    {
        /* Transition: '<S727>:4' */
        rtb_LeBPCR_b_HV_BatModVoltAvgFA_out_f = true;
    }

    /* End of Chart: '<S90>/PokeBPCR_U_HV_BatModVoltAvgChrt' */

    /* Outport: '<Root>/VeBPCR_U_HV_BatModVoltAvg' incorporates:
     *  SignalConversion generated from: '<S90>/VeBPCR_U_HV_BatModVoltAvg'
     */
    (void)Rte_Write_VeBPCR_U_HV_BatModVoltAvg_Value
        (BPCR_ac_B.LeBPCR_U_HV_BatModVoltAvg_out);

    /* Outport: '<Root>/VeBPCR_b_HV_BatModVoltAvgFA' incorporates:
     *  SignalConversion generated from: '<S90>/VeBPCR_b_HV_BatModVoltAvgFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModVoltAvgFA_Value
        (rtb_LeBPCR_b_HV_BatModVoltAvgFA_out_f);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_U_HV_BatModVoltAvg' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_U_HV_BatModVoltMax(VAR(float32, AUTOMATIC)
    LeBPCR_U_HV_BatModVoltMax, VAR(boolean, AUTOMATIC)
    LeBPCR_b_HV_BatModVoltMaxFA)
{
    boolean rtb_LeBPCR_b_HV_BatModVoltMaxFA_out_a;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_U_HV_BatModVoltMax' */
    /* Chart: '<S91>/PokeBPCR_U_HV_BatModVoltMaxChrt' incorporates:
     *  SignalConversion generated from: '<S91>/LeBPCR_U_HV_BatModVoltMax'
     *  SignalConversion generated from: '<S91>/LeBPCR_b_HV_BatModVoltMaxFA'
     */
    /* Gateway: PokeBPCR_U_HV_BatModVoltMax/PokeBPCR_U_HV_BatModVoltMaxChrt */
    /* During: PokeBPCR_U_HV_BatModVoltMax/PokeBPCR_U_HV_BatModVoltMaxChrt */
    /* Entry Internal: PokeBPCR_U_HV_BatModVoltMax/PokeBPCR_U_HV_BatModVoltMaxChrt */
    /* Transition: '<S728>:2' */
    if (!LeBPCR_b_HV_BatModVoltMaxFA)
    {
        /* Transition: '<S728>:3' */
        /* Transition: '<S728>:15' */
        BPCR_ac_B.LeBPCR_U_HV_BatModVoltMax_out = LeBPCR_U_HV_BatModVoltMax;
        rtb_LeBPCR_b_HV_BatModVoltMaxFA_out_a = false;

        /* Transition: '<S728>:18' */
    }
    else
    {
        /* Transition: '<S728>:4' */
        rtb_LeBPCR_b_HV_BatModVoltMaxFA_out_a = true;
    }

    /* End of Chart: '<S91>/PokeBPCR_U_HV_BatModVoltMaxChrt' */

    /* Outport: '<Root>/VeBPCR_U_HV_BatModVoltMax' incorporates:
     *  SignalConversion generated from: '<S91>/VeBPCR_U_HV_BatModVoltMax'
     */
    (void)Rte_Write_VeBPCR_U_HV_BatModVoltMax_Value
        (BPCR_ac_B.LeBPCR_U_HV_BatModVoltMax_out);

    /* Outport: '<Root>/VeBPCR_b_HV_BatModVoltMaxFA' incorporates:
     *  SignalConversion generated from: '<S91>/VeBPCR_b_HV_BatModVoltMaxFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModVoltMaxFA_Value
        (rtb_LeBPCR_b_HV_BatModVoltMaxFA_out_a);

    /* Merge: '<Root>/Merge_143_Irv' incorporates:
     *  SignalConversion generated from: '<S91>/VeBPCR_U_HV_BatModVoltMax_write'
     * */
    Rte_IrvWrite_PokeBPCR_U_HV_BatModVoltMax_HV_BatModVoltMax_write_IRV
        (BPCR_ac_B.LeBPCR_U_HV_BatModVoltMax_out);

    /* Merge: '<Root>/Merge_107_Irv' incorporates:
     *  SignalConversion generated from: '<S91>/VeBPCR_b_HV_BatModVoltMaxFA_write'
     * */
    Rte_IrvWrite_PokeBPCR_U_HV_BatModVoltMax_HV_BatModVoltMaxFA_write_IRV
        (rtb_LeBPCR_b_HV_BatModVoltMaxFA_out_a);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_U_HV_BatModVoltMax' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_U_HV_BatModVoltMin(VAR(float32, AUTOMATIC)
    LeBPCR_U_HV_BatModVoltMin, VAR(boolean, AUTOMATIC)
    LeBPCR_b_HV_BatModVoltMinFA)
{
    boolean rtb_LeBPCR_b_HV_BatModVoltMinFA_out_c;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_U_HV_BatModVoltMin' */
    /* Chart: '<S92>/PokeBPCR_U_HV_BatModVoltMinChrt' incorporates:
     *  SignalConversion generated from: '<S92>/LeBPCR_U_HV_BatModVoltMin'
     *  SignalConversion generated from: '<S92>/LeBPCR_b_HV_BatModVoltMinFA'
     */
    /* Gateway: PokeBPCR_U_HV_BatModVoltMin/PokeBPCR_U_HV_BatModVoltMinChrt */
    /* During: PokeBPCR_U_HV_BatModVoltMin/PokeBPCR_U_HV_BatModVoltMinChrt */
    /* Entry Internal: PokeBPCR_U_HV_BatModVoltMin/PokeBPCR_U_HV_BatModVoltMinChrt */
    /* Transition: '<S729>:2' */
    if (!LeBPCR_b_HV_BatModVoltMinFA)
    {
        /* Transition: '<S729>:3' */
        /* Transition: '<S729>:15' */
        BPCR_ac_B.LeBPCR_U_HV_BatModVoltMin_out = LeBPCR_U_HV_BatModVoltMin;
        rtb_LeBPCR_b_HV_BatModVoltMinFA_out_c = false;

        /* Transition: '<S729>:18' */
    }
    else
    {
        /* Transition: '<S729>:4' */
        rtb_LeBPCR_b_HV_BatModVoltMinFA_out_c = true;
    }

    /* End of Chart: '<S92>/PokeBPCR_U_HV_BatModVoltMinChrt' */

    /* Outport: '<Root>/VeBPCR_U_HV_BatModVoltMin' incorporates:
     *  SignalConversion generated from: '<S92>/VeBPCR_U_HV_BatModVoltMin'
     */
    (void)Rte_Write_VeBPCR_U_HV_BatModVoltMin_Value
        (BPCR_ac_B.LeBPCR_U_HV_BatModVoltMin_out);

    /* Outport: '<Root>/VeBPCR_b_HV_BatModVoltMinFA' incorporates:
     *  SignalConversion generated from: '<S92>/VeBPCR_b_HV_BatModVoltMinFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModVoltMinFA_Value
        (rtb_LeBPCR_b_HV_BatModVoltMinFA_out_c);

    /* Merge: '<Root>/Merge_152_Irv' incorporates:
     *  SignalConversion generated from: '<S92>/VeBPCR_U_HV_BatModVoltMin_write'
     * */
    Rte_IrvWrite_PokeBPCR_U_HV_BatModVoltMin_HV_BatModVoltMin_write_IRV
        (BPCR_ac_B.LeBPCR_U_HV_BatModVoltMin_out);

    /* Merge: '<Root>/Merge_151_Irv' incorporates:
     *  SignalConversion generated from: '<S92>/VeBPCR_b_HV_BatModVoltMinFA_write'
     * */
    Rte_IrvWrite_PokeBPCR_U_HV_BatModVoltMin_HV_BatModVoltMinFA_write_IRV
        (rtb_LeBPCR_b_HV_BatModVoltMinFA_out_c);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_U_HV_BatModVoltMin' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_U_HV_BatVolt(VAR(float32, AUTOMATIC)
    LeBPCR_U_HV_BatVolt, VAR(boolean, AUTOMATIC) LeBPCR_b_HV_BatVoltFA)
{
    boolean rtb_LeBPCR_b_HV_BatVoltFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_U_HV_BatVolt' */
    /* Chart: '<S93>/PokeBPCR_U_HV_BatVoltChrt' incorporates:
     *  SignalConversion generated from: '<S93>/LeBPCR_U_HV_BatVolt'
     *  SignalConversion generated from: '<S93>/LeBPCR_b_HV_BatVoltFA'
     */
    /* Gateway: PokeBPCR_U_HV_BatVolt/PokeBPCR_U_HV_BatVoltChrt */
    /* During: PokeBPCR_U_HV_BatVolt/PokeBPCR_U_HV_BatVoltChrt */
    /* Entry Internal: PokeBPCR_U_HV_BatVolt/PokeBPCR_U_HV_BatVoltChrt */
    /* Transition: '<S730>:2' */
    if (!LeBPCR_b_HV_BatVoltFA)
    {
        /* Transition: '<S730>:3' */
        /* Transition: '<S730>:15' */
        BPCR_ac_B.LeBPCR_U_HV_BatVolt_out = LeBPCR_U_HV_BatVolt;
        rtb_LeBPCR_b_HV_BatVoltFA_out = false;

        /* Transition: '<S730>:18' */
    }
    else
    {
        /* Transition: '<S730>:4' */
        rtb_LeBPCR_b_HV_BatVoltFA_out = true;
    }

    /* End of Chart: '<S93>/PokeBPCR_U_HV_BatVoltChrt' */

    /* Outport: '<Root>/VeBPCR_U_HV_BatVolt' incorporates:
     *  SignalConversion generated from: '<S93>/VeBPCR_U_HV_BatVolt'
     */
    (void)Rte_Write_VeBPCR_U_HV_BatVolt_Value(BPCR_ac_B.LeBPCR_U_HV_BatVolt_out);

    /* Outport: '<Root>/VeBPCR_b_HV_BatVoltFA' incorporates:
     *  SignalConversion generated from: '<S93>/VeBPCR_b_HV_BatVoltFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatVoltFA_Value(rtb_LeBPCR_b_HV_BatVoltFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_U_HV_BatVolt' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_U_HV_InternalStringVolt1(VAR(float32, AUTOMATIC)
    LeBPCR_U_HV_InternalStringVolt1)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_U_HV_InternalStringVolt1' */
    /* Outport: '<Root>/VeBPCR_U_HV_InternalStringVolt1' incorporates:
     *  SignalConversion generated from: '<S94>/VeBPCR_U_HV_InternalStringVolt1'
     *  SignalConversion generated from: '<S94>/LeBPCR_U_HV_InternalStringVolt1'
     */
    /* Gateway: PokeBPCR_U_HV_InternalStringVolt1/PokeBPCR_U_HV_InternalStringVolt1Chrt */
    /* During: PokeBPCR_U_HV_InternalStringVolt1/PokeBPCR_U_HV_InternalStringVolt1Chrt */
    /* Entry Internal: PokeBPCR_U_HV_InternalStringVolt1/PokeBPCR_U_HV_InternalStringVolt1Chrt */
    /* Transition: '<S731>:2' */
    (void)Rte_Write_VeBPCR_U_HV_InternalStringVolt1_Value
        (LeBPCR_U_HV_InternalStringVolt1);

    /* Outport: '<Root>/VeBPCR_b_HV_InternalStringVolt1FA' incorporates:
     *  Chart: '<S94>/PokeBPCR_U_HV_InternalStringVolt1Chrt'
     *  SignalConversion generated from: '<S94>/VeBPCR_b_HV_InternalStringVolt1FA'
     */
    (void)Rte_Write_VeBPCR_b_HV_InternalStringVolt1FA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_U_HV_InternalStringVolt1' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_U_HV_InternalStringVolt2(VAR(float32, AUTOMATIC)
    LeBPCR_U_HV_InternalStringVolt2)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_U_HV_InternalStringVolt2' */
    /* Outport: '<Root>/VeBPCR_U_HV_InternalStringVolt2' incorporates:
     *  SignalConversion generated from: '<S95>/VeBPCR_U_HV_InternalStringVolt2'
     *  SignalConversion generated from: '<S95>/LeBPCR_U_HV_InternalStringVolt2'
     */
    /* Gateway: PokeBPCR_U_HV_InternalStringVolt2/PokeBPCR_U_HV_InternalStringVolt2Chrt */
    /* During: PokeBPCR_U_HV_InternalStringVolt2/PokeBPCR_U_HV_InternalStringVolt2Chrt */
    /* Entry Internal: PokeBPCR_U_HV_InternalStringVolt2/PokeBPCR_U_HV_InternalStringVolt2Chrt */
    /* Transition: '<S732>:2' */
    (void)Rte_Write_VeBPCR_U_HV_InternalStringVolt2_Value
        (LeBPCR_U_HV_InternalStringVolt2);

    /* Outport: '<Root>/VeBPCR_b_HV_InternalStringVolt2FA' incorporates:
     *  Chart: '<S95>/PokeBPCR_U_HV_InternalStringVolt2Chrt'
     *  SignalConversion generated from: '<S95>/VeBPCR_b_HV_InternalStringVolt2FA'
     */
    (void)Rte_Write_VeBPCR_b_HV_InternalStringVolt2FA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_U_HV_InternalStringVolt2' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_U_HV_InternalVolt(VAR(float32, AUTOMATIC)
    LeBPCR_U_HV_InternalVoltage, VAR(boolean, AUTOMATIC)
    LeBPCR_b_HV_InternalVoltage_FA)
{
    boolean rtb_LeBPCR_b_HV_InternalVoltage_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_U_HV_InternalVolt' */
    /* Chart: '<S96>/PokeBPCR_U_HV_InternalVoltChrt' incorporates:
     *  SignalConversion generated from: '<S96>/LeBPCR_U_HV_InternalVoltage'
     *  SignalConversion generated from: '<S96>/LeBPCR_b_HV_InternalVoltage_FA'
     */
    /* Gateway: PokeBPCR_U_HV_InternalVolt/PokeBPCR_U_HV_InternalVoltChrt */
    /* During: PokeBPCR_U_HV_InternalVolt/PokeBPCR_U_HV_InternalVoltChrt */
    /* Entry Internal: PokeBPCR_U_HV_InternalVolt/PokeBPCR_U_HV_InternalVoltChrt */
    /* Transition: '<S733>:2' */
    if (!LeBPCR_b_HV_InternalVoltage_FA)
    {
        /* Transition: '<S733>:27' */
        /* Transition: '<S733>:28' */
        BPCR_ac_B.LeBPCR_U_HV_InternalVoltage_out = LeBPCR_U_HV_InternalVoltage;
        rtb_LeBPCR_b_HV_InternalVoltage_FA_out = false;

        /* Transition: '<S733>:30' */
    }
    else
    {
        /* Transition: '<S733>:29' */
        rtb_LeBPCR_b_HV_InternalVoltage_FA_out = true;
    }

    /* End of Chart: '<S96>/PokeBPCR_U_HV_InternalVoltChrt' */

    /* Outport: '<Root>/VeBPCR_U_BPCM_HV_InternalVoltage' incorporates:
     *  SignalConversion generated from: '<S96>/VeBPCR_U_BPCM_HV_InternalVoltage'
     */
    (void)Rte_Write_VeBPCR_U_BPCM_HV_InternalVoltage_Value
        (BPCR_ac_B.LeBPCR_U_HV_InternalVoltage_out);

    /* Outport: '<Root>/VeBPCR_b_BPCM_HV_InternalVoltage_FA' incorporates:
     *  SignalConversion generated from: '<S96>/VeBPCR_b_BPCM_HV_InternalVoltage_FA'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_HV_InternalVoltage_FA_Value
        (rtb_LeBPCR_b_HV_InternalVoltage_FA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_U_HV_InternalVolt' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_U_HV_SeriesVolt(VAR(float32, AUTOMATIC)
    LeBPCR_U_HV_SeriesVolt)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_U_HV_SeriesVolt' */
    /* Outport: '<Root>/VeBPCR_U_HV_SeriesVolt' incorporates:
     *  SignalConversion generated from: '<S97>/VeBPCR_U_HV_SeriesVolt'
     *  SignalConversion generated from: '<S97>/LeBPCR_U_HV_SeriesVolt'
     */
    /* Gateway: PokeBPCR_U_HV_SeriesVolt/PokeBPCR_U_HV_SeriesVoltChrt */
    /* During: PokeBPCR_U_HV_SeriesVolt/PokeBPCR_U_HV_SeriesVoltChrt */
    /* Entry Internal: PokeBPCR_U_HV_SeriesVolt/PokeBPCR_U_HV_SeriesVoltChrt */
    /* Transition: '<S734>:2' */
    (void)Rte_Write_VeBPCR_U_HV_SeriesVolt_Value(LeBPCR_U_HV_SeriesVolt);

    /* Outport: '<Root>/VeBPCR_b_HV_SeriesVoltFA' incorporates:
     *  Chart: '<S97>/PokeBPCR_U_HV_SeriesVoltChrt'
     *  SignalConversion generated from: '<S97>/VeBPCR_b_HV_SeriesVoltFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_SeriesVoltFA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_U_HV_SeriesVolt' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_U_MaxCellVltAlld(VAR(float32, AUTOMATIC)
    LeBPCR_U_MaxCellVltAlld, VAR(boolean, AUTOMATIC) LeBPCR_b_MaxCellVltAlldFA)
{
    boolean rtb_LeBPCR_b_MaxCellVltAlldFA_out_e;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_U_MaxCellVltAlld' */
    /* Chart: '<S98>/PokeBPCR_U_MaxCellVltAlldChrt' incorporates:
     *  SignalConversion generated from: '<S98>/LeBPCR_U_MaxCellVltAlld'
     *  SignalConversion generated from: '<S98>/LeBPCR_b_MaxCellVltAlldFA'
     */
    /* Gateway: PokeBPCR_U_MaxCellVltAlld/PokeBPCR_U_MaxCellVltAlldChrt */
    /* During: PokeBPCR_U_MaxCellVltAlld/PokeBPCR_U_MaxCellVltAlldChrt */
    /* Entry Internal: PokeBPCR_U_MaxCellVltAlld/PokeBPCR_U_MaxCellVltAlldChrt */
    /* Transition: '<S735>:2' */
    if (!LeBPCR_b_MaxCellVltAlldFA)
    {
        /* Transition: '<S735>:3' */
        /* Transition: '<S735>:15' */
        BPCR_ac_B.LeBPCR_U_MaxCellVltAlld_out = LeBPCR_U_MaxCellVltAlld;
        rtb_LeBPCR_b_MaxCellVltAlldFA_out_e = false;

        /* Transition: '<S735>:18' */
    }
    else
    {
        /* Transition: '<S735>:4' */
        rtb_LeBPCR_b_MaxCellVltAlldFA_out_e = true;
    }

    /* End of Chart: '<S98>/PokeBPCR_U_MaxCellVltAlldChrt' */

    /* Outport: '<Root>/VeBPCR_U_MaxCellVltAlld' incorporates:
     *  SignalConversion generated from: '<S98>/VeBPCR_U_MaxCellVltAlld'
     */
    (void)Rte_Write_VeBPCR_U_MaxCellVltAlld_Value
        (BPCR_ac_B.LeBPCR_U_MaxCellVltAlld_out);

    /* Outport: '<Root>/VeBPCR_b_MaxCellVltAlld_FA' incorporates:
     *  SignalConversion generated from: '<S98>/VeBPCR_b_MaxCellVltAlldFA'
     */
    (void)Rte_Write_VeBPCR_b_MaxCellVltAlld_FA_Value
        (rtb_LeBPCR_b_MaxCellVltAlldFA_out_e);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_U_MaxCellVltAlld' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_U_MaxPkVltAlld(VAR(float32, AUTOMATIC)
    LeBPCR_U_MaxPkVltAlld, VAR(boolean, AUTOMATIC) LeBPCR_b_MaxPkVltAlldFA)
{
    boolean rtb_LeBPCR_b_MaxPkVltAlldFA_out_l;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_U_MaxPkVltAlld' */
    /* Chart: '<S99>/PokeBPCR_U_MaxPkVltAlldChrt' incorporates:
     *  SignalConversion generated from: '<S99>/LeBPCR_U_MaxPkVltAlld'
     *  SignalConversion generated from: '<S99>/LeBPCR_b_MaxPkVltAlldFA'
     */
    /* Gateway: PokeBPCR_U_MaxPkVltAlld/PokeBPCR_U_MaxPkVltAlldChrt */
    /* During: PokeBPCR_U_MaxPkVltAlld/PokeBPCR_U_MaxPkVltAlldChrt */
    /* Entry Internal: PokeBPCR_U_MaxPkVltAlld/PokeBPCR_U_MaxPkVltAlldChrt */
    /* Transition: '<S736>:2' */
    if (!LeBPCR_b_MaxPkVltAlldFA)
    {
        /* Transition: '<S736>:3' */
        /* Transition: '<S736>:15' */
        BPCR_ac_B.LeBPCR_U_MaxPkVltAlld_out = LeBPCR_U_MaxPkVltAlld;
        rtb_LeBPCR_b_MaxPkVltAlldFA_out_l = false;

        /* Transition: '<S736>:18' */
    }
    else
    {
        /* Transition: '<S736>:4' */
        rtb_LeBPCR_b_MaxPkVltAlldFA_out_l = true;
    }

    /* End of Chart: '<S99>/PokeBPCR_U_MaxPkVltAlldChrt' */

    /* Outport: '<Root>/VeBPCR_U_MaxPkVltAlld' incorporates:
     *  SignalConversion generated from: '<S99>/VeBPCR_U_MaxPkVltAlld'
     */
    (void)Rte_Write_VeBPCR_U_MaxPkVltAlld_Value
        (BPCR_ac_B.LeBPCR_U_MaxPkVltAlld_out);

    /* Outport: '<Root>/VeBPCR_b_MaxPkVltAlld_FA' incorporates:
     *  SignalConversion generated from: '<S99>/VeBPCR_b_MaxPkVltAlldFA'
     */
    (void)Rte_Write_VeBPCR_b_MaxPkVltAlld_FA_Value
        (rtb_LeBPCR_b_MaxPkVltAlldFA_out_l);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_U_MaxPkVltAlld' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_U_MinCellVltAlld(VAR(float32, AUTOMATIC)
    LeBPCR_U_MinCellVltAlld, VAR(boolean, AUTOMATIC) LeBPCR_b_MinCellVltAlldFA)
{
    boolean rtb_LeBPCR_b_MinCellVltAlldFA_out_m;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_U_MinCellVltAlld' */
    /* Chart: '<S100>/PokeBPCR_U_MinCellVltAlldChrt' incorporates:
     *  SignalConversion generated from: '<S100>/LeBPCR_U_MinCellVltAlld'
     *  SignalConversion generated from: '<S100>/LeBPCR_b_MinCellVltAlldFA'
     */
    /* Gateway: PokeBPCR_U_MinCellVltAlld/PokeBPCR_U_MinCellVltAlldChrt */
    /* During: PokeBPCR_U_MinCellVltAlld/PokeBPCR_U_MinCellVltAlldChrt */
    /* Entry Internal: PokeBPCR_U_MinCellVltAlld/PokeBPCR_U_MinCellVltAlldChrt */
    /* Transition: '<S737>:2' */
    if (!LeBPCR_b_MinCellVltAlldFA)
    {
        /* Transition: '<S737>:3' */
        /* Transition: '<S737>:15' */
        BPCR_ac_B.LeBPCR_U_MinCellVltAlld_out = LeBPCR_U_MinCellVltAlld;
        rtb_LeBPCR_b_MinCellVltAlldFA_out_m = false;

        /* Transition: '<S737>:18' */
    }
    else
    {
        /* Transition: '<S737>:4' */
        rtb_LeBPCR_b_MinCellVltAlldFA_out_m = true;
    }

    /* End of Chart: '<S100>/PokeBPCR_U_MinCellVltAlldChrt' */

    /* Outport: '<Root>/VeBPCR_U_MinCellVltAlld' incorporates:
     *  SignalConversion generated from: '<S100>/VeBPCR_U_MinCellVltAlld'
     */
    (void)Rte_Write_VeBPCR_U_MinCellVltAlld_Value
        (BPCR_ac_B.LeBPCR_U_MinCellVltAlld_out);

    /* Outport: '<Root>/VeBPCR_b_MinCellVltAlld_FA' incorporates:
     *  SignalConversion generated from: '<S100>/VeBPCR_b_MinCellVltAlldFA'
     */
    (void)Rte_Write_VeBPCR_b_MinCellVltAlld_FA_Value
        (rtb_LeBPCR_b_MinCellVltAlldFA_out_m);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_U_MinCellVltAlld' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_U_MinPkVltAlld(VAR(float32, AUTOMATIC)
    LeBPCR_U_MinPkVltAlld, VAR(boolean, AUTOMATIC) LeBPCR_b_MinPkVltAlldFA)
{
    boolean rtb_LeBPCR_b_MinPkVltAlldFA_out_j;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_U_MinPkVltAlld' */
    /* Chart: '<S101>/PokeBPCR_U_MinPkVltAlldChrt' incorporates:
     *  SignalConversion generated from: '<S101>/LeBPCR_U_MinPkVltAlld'
     *  SignalConversion generated from: '<S101>/LeBPCR_b_MinPkVltAlldFA'
     */
    /* Gateway: PokeBPCR_U_MinPkVltAlld/PokeBPCR_U_MinPkVltAlldChrt */
    /* During: PokeBPCR_U_MinPkVltAlld/PokeBPCR_U_MinPkVltAlldChrt */
    /* Entry Internal: PokeBPCR_U_MinPkVltAlld/PokeBPCR_U_MinPkVltAlldChrt */
    /* Transition: '<S738>:2' */
    if (!LeBPCR_b_MinPkVltAlldFA)
    {
        /* Transition: '<S738>:3' */
        /* Transition: '<S738>:15' */
        BPCR_ac_B.LeBPCR_U_MinPkVltAlld_out = LeBPCR_U_MinPkVltAlld;
        rtb_LeBPCR_b_MinPkVltAlldFA_out_j = false;

        /* Transition: '<S738>:18' */
    }
    else
    {
        /* Transition: '<S738>:4' */
        rtb_LeBPCR_b_MinPkVltAlldFA_out_j = true;
    }

    /* End of Chart: '<S101>/PokeBPCR_U_MinPkVltAlldChrt' */

    /* Outport: '<Root>/VeBPCR_U_MinPkVltAlld' incorporates:
     *  SignalConversion generated from: '<S101>/VeBPCR_U_MinPkVltAlld'
     */
    (void)Rte_Write_VeBPCR_U_MinPkVltAlld_Value
        (BPCR_ac_B.LeBPCR_U_MinPkVltAlld_out);

    /* Outport: '<Root>/VeBPCR_b_MinPkVltAlld_FA' incorporates:
     *  SignalConversion generated from: '<S101>/VeBPCR_b_MinPkVltAlldFA'
     */
    (void)Rte_Write_VeBPCR_b_MinPkVltAlld_FA_Value
        (rtb_LeBPCR_b_MinPkVltAlldFA_out_j);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_U_MinPkVltAlld' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_U_OCVAveCellVoltage(VAR(float32, AUTOMATIC)
    LeBPCR_U_OCVAveCellVoltage, VAR(boolean, AUTOMATIC)
    LeBPCR_b_OCVAveCellVoltageFA)
{
    boolean rtb_LeBPCR_b_OCVAveCellVoltageFA_out_n;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_U_OCVAveCellVoltage' */
    /* Chart: '<S102>/PokeBPCR_U_OCVAveCellVoltageChrt' incorporates:
     *  SignalConversion generated from: '<S102>/LeBPCR_U_OCVAveCellVoltage'
     *  SignalConversion generated from: '<S102>/LeBPCR_b_OCVAveCellVoltageFA'
     */
    /* Gateway: PokeBPCR_U_OCVAveCellVoltage/PokeBPCR_U_OCVAveCellVoltageChrt */
    /* During: PokeBPCR_U_OCVAveCellVoltage/PokeBPCR_U_OCVAveCellVoltageChrt */
    /* Entry Internal: PokeBPCR_U_OCVAveCellVoltage/PokeBPCR_U_OCVAveCellVoltageChrt */
    /* Transition: '<S739>:2' */
    if (!LeBPCR_b_OCVAveCellVoltageFA)
    {
        /* Transition: '<S739>:3' */
        /* Transition: '<S739>:15' */
        BPCR_ac_B.LeBPCR_U_OCVAveCellVoltage_out = LeBPCR_U_OCVAveCellVoltage;
        rtb_LeBPCR_b_OCVAveCellVoltageFA_out_n = false;

        /* Transition: '<S739>:18' */
    }
    else
    {
        /* Transition: '<S739>:4' */
        rtb_LeBPCR_b_OCVAveCellVoltageFA_out_n = true;
    }

    /* End of Chart: '<S102>/PokeBPCR_U_OCVAveCellVoltageChrt' */

    /* Outport: '<Root>/VeBPCR_U_OCVAvgCellVoltage' incorporates:
     *  SignalConversion generated from: '<S102>/VeBPCR_U_OCVAveCellVoltage'
     */
    (void)Rte_Write_VeBPCR_U_OCVAvgCellVoltage_Value
        (BPCR_ac_B.LeBPCR_U_OCVAveCellVoltage_out);

    /* Outport: '<Root>/VeBPCR_b_OCVAvgCellVoltage_FA' incorporates:
     *  SignalConversion generated from: '<S102>/VeBPCR_b_OCVAveCellVoltageFA'
     */
    (void)Rte_Write_VeBPCR_b_OCVAvgCellVoltage_FA_Value
        (rtb_LeBPCR_b_OCVAveCellVoltageFA_out_n);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_U_OCVAveCellVoltage' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_U_OCVMaxCellVoltage(VAR(float32, AUTOMATIC)
    LeBPCR_U_OCVMaxCellVoltage, VAR(boolean, AUTOMATIC)
    LeBPCR_b_OCVMaxCellVoltageFA)
{
    boolean rtb_LeBPCR_b_OCVMaxCellVoltageFA_out_l;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_U_OCVMaxCellVoltage' */
    /* Chart: '<S103>/PokeBPCR_U_OCVMaxCellVoltageChrt' incorporates:
     *  SignalConversion generated from: '<S103>/LeBPCR_U_OCVMaxCellVoltage'
     *  SignalConversion generated from: '<S103>/LeBPCR_b_OCVMaxCellVoltageFA'
     */
    /* Gateway: PokeBPCR_U_OCVMaxCellVoltage/PokeBPCR_U_OCVMaxCellVoltageChrt */
    /* During: PokeBPCR_U_OCVMaxCellVoltage/PokeBPCR_U_OCVMaxCellVoltageChrt */
    /* Entry Internal: PokeBPCR_U_OCVMaxCellVoltage/PokeBPCR_U_OCVMaxCellVoltageChrt */
    /* Transition: '<S740>:2' */
    if (!LeBPCR_b_OCVMaxCellVoltageFA)
    {
        /* Transition: '<S740>:3' */
        /* Transition: '<S740>:15' */
        BPCR_ac_B.LeBPCR_U_OCVMaxCellVoltage_out = LeBPCR_U_OCVMaxCellVoltage;
        rtb_LeBPCR_b_OCVMaxCellVoltageFA_out_l = false;

        /* Transition: '<S740>:18' */
    }
    else
    {
        /* Transition: '<S740>:4' */
        rtb_LeBPCR_b_OCVMaxCellVoltageFA_out_l = true;
    }

    /* End of Chart: '<S103>/PokeBPCR_U_OCVMaxCellVoltageChrt' */

    /* Outport: '<Root>/VeBPCR_U_OCVMaxCellVoltage' incorporates:
     *  SignalConversion generated from: '<S103>/VeBPCR_U_OCVMaxCellVoltage'
     */
    (void)Rte_Write_VeBPCR_U_OCVMaxCellVoltage_Value
        (BPCR_ac_B.LeBPCR_U_OCVMaxCellVoltage_out);

    /* Outport: '<Root>/VeBPCR_b_OCVMaxCellVoltage_FA' incorporates:
     *  SignalConversion generated from: '<S103>/VeBPCR_b_OCVMaxCellVoltageFA'
     */
    (void)Rte_Write_VeBPCR_b_OCVMaxCellVoltage_FA_Value
        (rtb_LeBPCR_b_OCVMaxCellVoltageFA_out_l);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_U_OCVMaxCellVoltage' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_U_OCVMinCellVoltage(VAR(float32, AUTOMATIC)
    LeBPCR_U_OCVMinCellVoltage, VAR(boolean, AUTOMATIC)
    LeBPCR_b_OCVMinCellVoltageFA)
{
    boolean rtb_LeBPCR_b_OCVMinCellVoltageFA_out_j;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_U_OCVMinCellVoltage' */
    /* Chart: '<S104>/PokeBPCR_U_OCVMinCellVoltageChrt' incorporates:
     *  SignalConversion generated from: '<S104>/LeBPCR_U_OCVMinCellVoltage'
     *  SignalConversion generated from: '<S104>/LeBPCR_b_OCVMinCellVoltageFA'
     */
    /* Gateway: PokeBPCR_U_OCVMinCellVoltage/PokeBPCR_U_OCVMinCellVoltageChrt */
    /* During: PokeBPCR_U_OCVMinCellVoltage/PokeBPCR_U_OCVMinCellVoltageChrt */
    /* Entry Internal: PokeBPCR_U_OCVMinCellVoltage/PokeBPCR_U_OCVMinCellVoltageChrt */
    /* Transition: '<S741>:2' */
    if (!LeBPCR_b_OCVMinCellVoltageFA)
    {
        /* Transition: '<S741>:3' */
        /* Transition: '<S741>:15' */
        BPCR_ac_B.LeBPCR_U_OCVMinCellVoltage_out = LeBPCR_U_OCVMinCellVoltage;
        rtb_LeBPCR_b_OCVMinCellVoltageFA_out_j = false;

        /* Transition: '<S741>:18' */
    }
    else
    {
        /* Transition: '<S741>:4' */
        rtb_LeBPCR_b_OCVMinCellVoltageFA_out_j = true;
    }

    /* End of Chart: '<S104>/PokeBPCR_U_OCVMinCellVoltageChrt' */

    /* Outport: '<Root>/VeBPCR_U_OCVMinCellVoltage' incorporates:
     *  SignalConversion generated from: '<S104>/VeBPCR_U_OCVMinCellVoltage'
     */
    (void)Rte_Write_VeBPCR_U_OCVMinCellVoltage_Value
        (BPCR_ac_B.LeBPCR_U_OCVMinCellVoltage_out);

    /* Outport: '<Root>/VeBPCR_b_OCVMinCellVoltage_FA' incorporates:
     *  SignalConversion generated from: '<S104>/VeBPCR_b_OCVMinCellVoltageFA'
     */
    (void)Rte_Write_VeBPCR_b_OCVMinCellVoltage_FA_Value
        (rtb_LeBPCR_b_OCVMinCellVoltageFA_out_j);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_U_OCVMinCellVoltage' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_U_OCVPckVoltage(VAR(float32, AUTOMATIC)
    LeBPCR_U_OCVPckVoltage, VAR(boolean, AUTOMATIC) LeBPCR_b_OCVPckVoltageFA)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_OCVPckVoltageFA_out;
    UNUSED_PARAMETER(LeBPCR_U_OCVPckVoltage);

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_U_OCVPckVoltage' */
    /* Chart: '<S105>/PokeBPCR_U_OCVPckVoltageChrt' incorporates:
     *  SignalConversion generated from: '<S105>/LeBPCR_b_OCVPckVoltageFA'
     */
    /* Gateway: PokeBPCR_U_OCVPckVoltage/PokeBPCR_U_OCVPckVoltageChrt */
    /* During: PokeBPCR_U_OCVPckVoltage/PokeBPCR_U_OCVPckVoltageChrt */
    /* Entry Internal: PokeBPCR_U_OCVPckVoltage/PokeBPCR_U_OCVPckVoltageChrt */
    /* Transition: '<S742>:2' */
    if (!LeBPCR_b_OCVPckVoltageFA)
    {
        /* Transition: '<S742>:3' */
        /* Transition: '<S742>:15' */
        rtb_LeBPCR_b_OCVPckVoltageFA_out = false;

        /* Transition: '<S742>:18' */
    }
    else
    {
        /* Transition: '<S742>:4' */
        rtb_LeBPCR_b_OCVPckVoltageFA_out = true;
    }

    /* End of Chart: '<S105>/PokeBPCR_U_OCVPckVoltageChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_U_OCVPckVoltage' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_Z_MaxCellChargeImpedance(VAR(float32, AUTOMATIC)
    LeBPCR_Z_MaxCellChargeImpedance, VAR(boolean, AUTOMATIC)
    LeBPCR_b_MaxCellChargeImpedanceFA)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_MaxCellChargeImpedanceFA_ou;
    UNUSED_PARAMETER(LeBPCR_Z_MaxCellChargeImpedance);

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_Z_MaxCellChargeImpedance' */
    /* Chart: '<S106>/PokeBPCR_Z_MaxCellChargeImpedanceChrt' incorporates:
     *  SignalConversion generated from: '<S106>/LeBPCR_b_MaxCellChargeImpedanceFA'
     */
    /* Gateway: PokeBPCR_Z_MaxCellChargeImpedance/PokeBPCR_Z_MaxCellChargeImpedanceChrt */
    /* During: PokeBPCR_Z_MaxCellChargeImpedance/PokeBPCR_Z_MaxCellChargeImpedanceChrt */
    /* Entry Internal: PokeBPCR_Z_MaxCellChargeImpedance/PokeBPCR_Z_MaxCellChargeImpedanceChrt */
    /* Transition: '<S743>:2' */
    if (!LeBPCR_b_MaxCellChargeImpedanceFA)
    {
        /* Transition: '<S743>:3' */
        /* Transition: '<S743>:15' */
        rtb_LeBPCR_b_MaxCellChargeImpedanceFA_ou = false;

        /* Transition: '<S743>:18' */
    }
    else
    {
        /* Transition: '<S743>:4' */
        rtb_LeBPCR_b_MaxCellChargeImpedanceFA_ou = true;
    }

    /* End of Chart: '<S106>/PokeBPCR_Z_MaxCellChargeImpedanceChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_Z_MaxCellChargeImpedance' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_Z_MaxCellDischargeImpedance(VAR(float32,
    AUTOMATIC) LeBPCR_Z_MaxCellDischargeImpedance, VAR(boolean, AUTOMATIC)
    LeBPCR_b_MaxCellDischargeImpedanceFA)
{
    boolean rtb_LeBPCR_b_MaxCellDischargeImpedance_h;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_Z_MaxCellDischargeImpedance' */
    /* Chart: '<S107>/PokeBPCR_Z_MaxCellDischargeImpedanceChrt' incorporates:
     *  SignalConversion generated from: '<S107>/LeBPCR_Z_MaxCellDischargeImpedance'
     *  SignalConversion generated from: '<S107>/LeBPCR_b_MaxCellDischargeImpedanceFA'
     */
    /* Gateway: PokeBPCR_Z_MaxCellDischargeImpedance/PokeBPCR_Z_MaxCellDischargeImpedanceChrt */
    /* During: PokeBPCR_Z_MaxCellDischargeImpedance/PokeBPCR_Z_MaxCellDischargeImpedanceChrt */
    /* Entry Internal: PokeBPCR_Z_MaxCellDischargeImpedance/PokeBPCR_Z_MaxCellDischargeImpedanceChrt */
    /* Transition: '<S744>:2' */
    if (!LeBPCR_b_MaxCellDischargeImpedanceFA)
    {
        /* Transition: '<S744>:3' */
        /* Transition: '<S744>:15' */
        BPCR_ac_B.LeBPCR_Z_MaxCellDischargeImpedance_out =
            LeBPCR_Z_MaxCellDischargeImpedance;
        rtb_LeBPCR_b_MaxCellDischargeImpedance_h = false;

        /* Transition: '<S744>:18' */
    }
    else
    {
        /* Transition: '<S744>:4' */
        rtb_LeBPCR_b_MaxCellDischargeImpedance_h = true;
    }

    /* End of Chart: '<S107>/PokeBPCR_Z_MaxCellDischargeImpedanceChrt' */

    /* Outport: '<Root>/VeBPCR_Z_MaxCellDschargeImpedance' incorporates:
     *  SignalConversion generated from: '<S107>/VeBPCR_Z_MaxCellDischargeImpedance'
     */
    (void)Rte_Write_VeBPCR_Z_MaxCellDschargeImpedance_Value
        (BPCR_ac_B.LeBPCR_Z_MaxCellDischargeImpedance_out);

    /* Outport: '<Root>/VeBPCR_b_MaxCellDschargeImpedance_FA' incorporates:
     *  SignalConversion generated from: '<S107>/VeBPCR_b_MaxCellDischargeImpedanceFA'
     */
    (void)Rte_Write_VeBPCR_b_MaxCellDschargeImpedance_FA_Value
        (rtb_LeBPCR_b_MaxCellDischargeImpedance_h);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_Z_MaxCellDischargeImpedance' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_Z_MinCellChargeImpedance(VAR(float32, AUTOMATIC)
    LeBPCR_Z_MinCellChargeImpedance, VAR(boolean, AUTOMATIC)
    LeBPCR_b_MinCellChargeImpedanceFA)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_MinCellChargeImpedanceFA_ou;
    UNUSED_PARAMETER(LeBPCR_Z_MinCellChargeImpedance);

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_Z_MinCellChargeImpedance' */
    /* Chart: '<S108>/PokeBPCR_Z_MinCellChargeImpedanceChrt' incorporates:
     *  SignalConversion generated from: '<S108>/LeBPCR_b_MinCellChargeImpedanceFA'
     */
    /* Gateway: PokeBPCR_Z_MinCellChargeImpedance/PokeBPCR_Z_MinCellChargeImpedanceChrt */
    /* During: PokeBPCR_Z_MinCellChargeImpedance/PokeBPCR_Z_MinCellChargeImpedanceChrt */
    /* Entry Internal: PokeBPCR_Z_MinCellChargeImpedance/PokeBPCR_Z_MinCellChargeImpedanceChrt */
    /* Transition: '<S745>:2' */
    if (!LeBPCR_b_MinCellChargeImpedanceFA)
    {
        /* Transition: '<S745>:3' */
        /* Transition: '<S745>:15' */
        rtb_LeBPCR_b_MinCellChargeImpedanceFA_ou = false;

        /* Transition: '<S745>:18' */
    }
    else
    {
        /* Transition: '<S745>:4' */
        rtb_LeBPCR_b_MinCellChargeImpedanceFA_ou = true;
    }

    /* End of Chart: '<S108>/PokeBPCR_Z_MinCellChargeImpedanceChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_Z_MinCellChargeImpedance' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_Z_MinCellDischargeImpedance(VAR(float32,
    AUTOMATIC) LeBPCR_Z_MinCellDischargeImpedance, VAR(boolean, AUTOMATIC)
    LeBPCR_b_MinCellDischargeImpedanceFA)
{
    boolean rtb_LeBPCR_b_MinCellDischargeImpedance_a;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_Z_MinCellDischargeImpedance' */
    /* Chart: '<S109>/PokeBPCR_Z_MinCellDischargeImpedanceChrt' incorporates:
     *  SignalConversion generated from: '<S109>/LeBPCR_Z_MinCellDischargeImpedance'
     *  SignalConversion generated from: '<S109>/LeBPCR_b_MinCellDischargeImpedanceFA'
     */
    /* Gateway: PokeBPCR_Z_MinCellDischargeImpedance/PokeBPCR_Z_MinCellDischargeImpedanceChrt */
    /* During: PokeBPCR_Z_MinCellDischargeImpedance/PokeBPCR_Z_MinCellDischargeImpedanceChrt */
    /* Entry Internal: PokeBPCR_Z_MinCellDischargeImpedance/PokeBPCR_Z_MinCellDischargeImpedanceChrt */
    /* Transition: '<S746>:2' */
    if (!LeBPCR_b_MinCellDischargeImpedanceFA)
    {
        /* Transition: '<S746>:3' */
        /* Transition: '<S746>:15' */
        BPCR_ac_B.LeBPCR_Z_MinCellDischargeImpedance_out =
            LeBPCR_Z_MinCellDischargeImpedance;
        rtb_LeBPCR_b_MinCellDischargeImpedance_a = false;

        /* Transition: '<S746>:18' */
    }
    else
    {
        /* Transition: '<S746>:4' */
        rtb_LeBPCR_b_MinCellDischargeImpedance_a = true;
    }

    /* End of Chart: '<S109>/PokeBPCR_Z_MinCellDischargeImpedanceChrt' */

    /* Outport: '<Root>/VeBPCR_Z_MinCellDschargeImpedance' incorporates:
     *  SignalConversion generated from: '<S109>/VeBPCR_Z_MinCellDischargeImpedance'
     */
    (void)Rte_Write_VeBPCR_Z_MinCellDschargeImpedance_Value
        (BPCR_ac_B.LeBPCR_Z_MinCellDischargeImpedance_out);

    /* Outport: '<Root>/VeBPCR_b_MinCellDschargeImpedance_FA' incorporates:
     *  SignalConversion generated from: '<S109>/VeBPCR_b_MinCellDischargeImpedanceFA'
     */
    (void)Rte_Write_VeBPCR_b_MinCellDschargeImpedance_FA_Value
        (rtb_LeBPCR_b_MinCellDischargeImpedance_a);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_Z_MinCellDischargeImpedance' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_BalMd(VAR(boolean, AUTOMATIC) LeBPCR_b_BalMd)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_BalMd_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_BalMd' */
    /* Chart: '<S110>/PokeBPCR_b_BalMdChrt' incorporates:
     *  SignalConversion generated from: '<S110>/LeBPCR_b_BalMd'
     */
    /* Gateway: PokeBPCR_b_BalMd/PokeBPCR_b_BalMdChrt */
    /* During: PokeBPCR_b_BalMd/PokeBPCR_b_BalMdChrt */
    /* Entry Internal: PokeBPCR_b_BalMd/PokeBPCR_b_BalMdChrt */
    /* Transition: '<S747>:2' */
    rtb_LeBPCR_b_BalMd_out = LeBPCR_b_BalMd;

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_BalMd' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_CellVoltImbalance(VAR(boolean, AUTOMATIC)
    LeBPCR_b_CellVoltImbalance)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_CellVoltImbalance_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_CellVoltImbalance' */
    /* Chart: '<S111>/PokeBPCR_b_CellVoltImbalanceChrt' incorporates:
     *  SignalConversion generated from: '<S111>/LeBPCR_b_CellVoltImbalance'
     */
    /* Gateway: PokeBPCR_b_CellVoltImbalance/PokeBPCR_b_CellVoltImbalanceChrt */
    /* During: PokeBPCR_b_CellVoltImbalance/PokeBPCR_b_CellVoltImbalanceChrt */
    /* Entry Internal: PokeBPCR_b_CellVoltImbalance/PokeBPCR_b_CellVoltImbalanceChrt */
    /* Transition: '<S748>:2' */
    rtb_LeBPCR_b_CellVoltImbalance_out = LeBPCR_b_CellVoltImbalance;

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_CellVoltImbalance' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_ChrgFail_On_BPCM(VAR(boolean, AUTOMATIC)
    LeBPCR_b_ChrgFail_On_BPCM)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_ChrgFail_On_BPCM_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_ChrgFail_On_BPCM' */
    /* Chart: '<S112>/PokeBPCR_b_ChrgFail_On_BPCMChrt' incorporates:
     *  SignalConversion generated from: '<S112>/LeBPCR_b_ChrgFail_On_BPCM'
     */
    /* Gateway: PokeBPCR_b_ChrgFail_On_BPCM/PokeBPCR_b_ChrgFail_On_BPCMChrt */
    /* During: PokeBPCR_b_ChrgFail_On_BPCM/PokeBPCR_b_ChrgFail_On_BPCMChrt */
    /* Entry Internal: PokeBPCR_b_ChrgFail_On_BPCM/PokeBPCR_b_ChrgFail_On_BPCMChrt */
    /* Transition: '<S749>:2' */
    rtb_LeBPCR_b_ChrgFail_On_BPCM_out = LeBPCR_b_ChrgFail_On_BPCM;

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_ChrgFail_On_BPCM' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_DC_Isolation_Sts(VAR(boolean, AUTOMATIC)
    LeBPCR_b_DC_Isolation_Sts)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_DC_Isolation_Sts' */
    /* Outport: '<Root>/VeBPCR_b_DC_Isolation_Sts' incorporates:
     *  SignalConversion generated from: '<S113>/VeBPCR_b_DC_Isolation_Sts'
     *  SignalConversion generated from: '<S113>/LeBPCR_b_DC_Isolation_Sts'
     */
    /* Gateway: PokeBPCR_b_DC_Isolation_Sts/PokeBPCR_b_DC_Isolation_StsChrt */
    /* During: PokeBPCR_b_DC_Isolation_Sts/PokeBPCR_b_DC_Isolation_StsChrt */
    /* Entry Internal: PokeBPCR_b_DC_Isolation_Sts/PokeBPCR_b_DC_Isolation_StsChrt */
    /* Transition: '<S750>:2' */
    (void)Rte_Write_VeBPCR_b_DC_Isolation_Sts_Value(LeBPCR_b_DC_Isolation_Sts);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_DC_Isolation_Sts' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_EVSer_On_BPCM(VAR(boolean, AUTOMATIC)
    LeBPCR_b_EVSer_On_BPCM)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_EVSer_On_BPCM_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_EVSer_On_BPCM' */
    /* Chart: '<S114>/PokeBPCR_b_EVSer_On_BPCMChrt' incorporates:
     *  SignalConversion generated from: '<S114>/LeBPCR_b_EVSer_On_BPCM'
     */
    /* Gateway: PokeBPCR_b_EVSer_On_BPCM/PokeBPCR_b_EVSer_On_BPCMChrt */
    /* During: PokeBPCR_b_EVSer_On_BPCM/PokeBPCR_b_EVSer_On_BPCMChrt */
    /* Entry Internal: PokeBPCR_b_EVSer_On_BPCM/PokeBPCR_b_EVSer_On_BPCMChrt */
    /* Transition: '<S751>:2' */
    rtb_LeBPCR_b_EVSer_On_BPCM_out = LeBPCR_b_EVSer_On_BPCM;

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_EVSer_On_BPCM' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_HBCNC_LV_LO(VAR(boolean, AUTOMATIC)
    LeBPCR_b_HBCNC_LV_LO)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_HBCNC_LV_LO_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_HBCNC_LV_LO' */
    /* Chart: '<S115>/PokeBPCR_b_HBCNC_LV_LOChrt' incorporates:
     *  SignalConversion generated from: '<S115>/LeBPCR_b_HBCNC_LV_LO'
     */
    /* Gateway: PokeBPCR_b_HBCNC_LV_LO/PokeBPCR_b_HBCNC_LV_LOChrt */
    /* During: PokeBPCR_b_HBCNC_LV_LO/PokeBPCR_b_HBCNC_LV_LOChrt */
    /* Entry Internal: PokeBPCR_b_HBCNC_LV_LO/PokeBPCR_b_HBCNC_LV_LOChrt */
    /* Transition: '<S752>:2' */
    rtb_LeBPCR_b_HBCNC_LV_LO_out = LeBPCR_b_HBCNC_LV_LO;

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_HBCNC_LV_LO' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_HEVOnRqBPCM(VAR(boolean, AUTOMATIC)
    LeBPCR_b_HEVOnRqBPCM)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_HEVOnRqBPCM' */
    /* Outport: '<Root>/VeBPCR_b_HEVOnRqBPCM' incorporates:
     *  SignalConversion generated from: '<S116>/VeBPCR_b_HEVOnRqBPCM'
     *  SignalConversion generated from: '<S116>/LeBPCR_b_HEVOnRqBPCM'
     */
    /* Gateway: PokeBPCR_b_HEVOnRqBPCM/PokeBPCR_b_HEVOnRqBPCMChrt */
    /* During: PokeBPCR_b_HEVOnRqBPCM/PokeBPCR_b_HEVOnRqBPCMChrt */
    /* Entry Internal: PokeBPCR_b_HEVOnRqBPCM/PokeBPCR_b_HEVOnRqBPCMChrt */
    /* Transition: '<S753>:2' */
    (void)Rte_Write_VeBPCR_b_HEVOnRqBPCM_Value(LeBPCR_b_HEVOnRqBPCM);

    /* Merge: '<Root>/Merge_61_Irv' incorporates:
     *  SignalConversion generated from: '<S116>/LeBPCR_b_HEVOnRqBPCM'
     *  SignalConversion generated from: '<S116>/VeBPCR_b_HEVOnRqBPCM_write'
     */
    Rte_IrvWrite_PokeBPCR_b_HEVOnRqBPCM_HEVOnRqBPCM_write_IRV
        (LeBPCR_b_HEVOnRqBPCM);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_HEVOnRqBPCM' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_HVBatPerWU12VChrg(VAR(boolean, AUTOMATIC)
    LeBPCR_b_HVBatPerWU12VChrg)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_HVBatPerWU12VChrg' */
    /* Outport: '<Root>/VeBPCR_b_HVBatPerWU12VChrg' incorporates:
     *  SignalConversion generated from: '<S117>/VeBPCR_b_HVBatPerWU12VChrg'
     *  SignalConversion generated from: '<S117>/LeBPCR_b_HVBatPerWU12VChrg'
     */
    /* Gateway: PokeBPCR_b_HVBatPerWU12VChrg/PokeBPCR_b_HVBatPerWU12VChrgChrt */
    /* During: PokeBPCR_b_HVBatPerWU12VChrg/PokeBPCR_b_HVBatPerWU12VChrgChrt */
    /* Entry Internal: PokeBPCR_b_HVBatPerWU12VChrg/PokeBPCR_b_HVBatPerWU12VChrgChrt */
    /* Transition: '<S754>:2' */
    (void)Rte_Write_VeBPCR_b_HVBatPerWU12VChrg_Value(LeBPCR_b_HVBatPerWU12VChrg);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_HVBatPerWU12VChrg' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_HVBatPerWUBal(VAR(boolean, AUTOMATIC)
    LeBPCR_b_HVBatPerWUBal)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_HVBatPerWUBal_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_HVBatPerWUBal' */
    /* Chart: '<S118>/PokeBPCR_b_HVBatPerWUBalChrt' incorporates:
     *  SignalConversion generated from: '<S118>/LeBPCR_b_HVBatPerWUBal'
     */
    /* Gateway: PokeBPCR_b_HVBatPerWUBal/PokeBPCR_b_HVBatPerWUBalChrt */
    /* During: PokeBPCR_b_HVBatPerWUBal/PokeBPCR_b_HVBatPerWUBalChrt */
    /* Entry Internal: PokeBPCR_b_HVBatPerWUBal/PokeBPCR_b_HVBatPerWUBalChrt */
    /* Transition: '<S755>:2' */
    rtb_LeBPCR_b_HVBatPerWUBal_out = LeBPCR_b_HVBatPerWUBal;

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_HVBatPerWUBal' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_HVBatPerWUCharge(VAR(boolean, AUTOMATIC)
    LeBPCR_b_HVBatPerWUCharge)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_HVBatPerWUCharge_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_HVBatPerWUCharge' */
    /* Chart: '<S119>/PokeBPCR_b_HVBatPerWUChargeChrt' incorporates:
     *  SignalConversion generated from: '<S119>/LeBPCR_b_HVBatPerWUCharge'
     */
    /* Gateway: PokeBPCR_b_HVBatPerWUCharge/PokeBPCR_b_HVBatPerWUChargeChrt */
    /* During: PokeBPCR_b_HVBatPerWUCharge/PokeBPCR_b_HVBatPerWUChargeChrt */
    /* Entry Internal: PokeBPCR_b_HVBatPerWUCharge/PokeBPCR_b_HVBatPerWUChargeChrt */
    /* Transition: '<S756>:2' */
    rtb_LeBPCR_b_HVBatPerWUCharge_out = LeBPCR_b_HVBatPerWUCharge;

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_HVBatPerWUCharge' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_HVBatPerWUThermal(VAR(boolean, AUTOMATIC)
    LeBPCR_b_HVBatPerWUThermal)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_HVBatPerWUThermal' */
    /* Outport: '<Root>/VeBPCR_b_HVBatPerWUThermal' incorporates:
     *  SignalConversion generated from: '<S120>/VeBPCR_b_HVBatPerWUThermal'
     *  SignalConversion generated from: '<S120>/LeBPCR_b_HVBatPerWUThermal'
     */
    /* Gateway: PokeBPCR_b_HVBatPerWUThermal/PokeBPCR_b_HVBatPerWUThermalChrt */
    /* During: PokeBPCR_b_HVBatPerWUThermal/PokeBPCR_b_HVBatPerWUThermalChrt */
    /* Entry Internal: PokeBPCR_b_HVBatPerWUThermal/PokeBPCR_b_HVBatPerWUThermalChrt */
    /* Transition: '<S757>:2' */
    (void)Rte_Write_VeBPCR_b_HVBatPerWUThermal_Value(LeBPCR_b_HVBatPerWUThermal);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_HVBatPerWUThermal' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_HVBatRdy(VAR(boolean, AUTOMATIC)
    LeBPCR_b_HVBatRdy, VAR(boolean, AUTOMATIC) LeBPCR_b_HVBatRdyFA)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_HVBatRdyFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_HVBatRdy' */
    /* Chart: '<S121>/PokeBPCR_b_HVBatRdyChrt' incorporates:
     *  SignalConversion generated from: '<S121>/LeBPCR_b_HVBatRdyFA'
     *  SignalConversion generated from: '<S121>/LeBPCR_b_HVBatRdy'
     */
    /* Gateway: PokeBPCR_b_HVBatRdy/PokeBPCR_b_HVBatRdyChrt */
    /* During: PokeBPCR_b_HVBatRdy/PokeBPCR_b_HVBatRdyChrt */
    /* Entry Internal: PokeBPCR_b_HVBatRdy/PokeBPCR_b_HVBatRdyChrt */
    /* Transition: '<S758>:2' */
    if (!LeBPCR_b_HVBatRdyFA)
    {
        /* Transition: '<S758>:3' */
        /* Transition: '<S758>:15' */
        BPCR_ac_B.LeBPCR_b_HVBatRdy_out = LeBPCR_b_HVBatRdy;
        rtb_LeBPCR_b_HVBatRdyFA_out = false;
        BPCR_ac_B.LeBPCR_b_HVBatRdySgnl_Rcvd = true;
        BPCR_ac_B.LeBPCR_e_HVBatRdy = 2U;

        /* Transition: '<S758>:18' */
    }
    else
    {
        /* Transition: '<S758>:4' */
        rtb_LeBPCR_b_HVBatRdyFA_out = true;
    }

    /* End of Chart: '<S121>/PokeBPCR_b_HVBatRdyChrt' */

    /* Outport: '<Root>/VeBPCR_e_HVBatRdy' incorporates:
     *  SignalConversion generated from: '<S121>/VeBPCR_e_HVBatRdy'
     */
    (void)Rte_Write_VeBPCR_e_HVBatRdy_Value(BPCR_ac_B.LeBPCR_e_HVBatRdy);

    /* Merge: '<Root>/Merge_62' incorporates:
     *  SignalConversion generated from: '<S121>/VeBPCR_b_HVBatRdySgnl_Rcvd_write'
     * */
    Rte_IrvWrite_PokeBPCR_b_HVBatRdy_HV_BatRdySgnl_Rcvd_write_IRV
        (BPCR_ac_B.LeBPCR_b_HVBatRdySgnl_Rcvd);

    /* Merge: '<Root>/Merge_78' incorporates:
     *  SignalConversion generated from: '<S121>/VeBPCR_b_HVBatRdy_write'
     * */
    Rte_IrvWrite_PokeBPCR_b_HVBatRdy_HVBatRdy_Init_write_IRV
        (BPCR_ac_B.LeBPCR_b_HVBatRdy_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_HVBatRdy' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_HVBatRdyForChrg(VAR(boolean, AUTOMATIC)
    LeBPCR_b_HVBatRdyForChrg)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_HVBatRdyForChrg_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_HVBatRdyForChrg' */
    /* Chart: '<S122>/PokeBPCR_b_HVBatRdyForChrgChrt' incorporates:
     *  SignalConversion generated from: '<S122>/LeBPCR_b_HVBatRdyForChrg'
     */
    /* Gateway: PokeBPCR_b_HVBatRdyForChrg/PokeBPCR_b_HVBatRdyForChrgChrt */
    /* During: PokeBPCR_b_HVBatRdyForChrg/PokeBPCR_b_HVBatRdyForChrgChrt */
    /* Entry Internal: PokeBPCR_b_HVBatRdyForChrg/PokeBPCR_b_HVBatRdyForChrgChrt */
    /* Transition: '<S759>:2' */
    rtb_LeBPCR_b_HVBatRdyForChrg_out = LeBPCR_b_HVBatRdyForChrg;

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_HVBatRdyForChrg' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_HVBat_DC_CntctrOpn(VAR(boolean, AUTOMATIC)
    LeBPCR_b_HVBat_DC_CntctrOpn)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_HVBat_DC_CntctrOpn' */
    /* Outport: '<Root>/VeBPCR_b_HVBat_DC_CntctrOpn' incorporates:
     *  SignalConversion generated from: '<S123>/VeBPCR_b_HVBat_DC_CntctrOpn'
     *  SignalConversion generated from: '<S123>/LeBPCR_b_HVBat_DC_CntctrOpn'
     */
    /* Gateway: PokeBPCR_b_HVBat_DC_CntctrOpn/PokeBPCR_b_HVBat_DC_CntctrOpnChrt */
    /* During: PokeBPCR_b_HVBat_DC_CntctrOpn/PokeBPCR_b_HVBat_DC_CntctrOpnChrt */
    /* Entry Internal: PokeBPCR_b_HVBat_DC_CntctrOpn/PokeBPCR_b_HVBat_DC_CntctrOpnChrt */
    /* Transition: '<S760>:2' */
    (void)Rte_Write_VeBPCR_b_HVBat_DC_CntctrOpn_Value
        (LeBPCR_b_HVBat_DC_CntctrOpn);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_HVBat_DC_CntctrOpn' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_HVBat_DC_CntctrReq(VAR(boolean, AUTOMATIC)
    LeBPCR_b_HVBat_DC_CntctrReq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_HVBat_DC_CntctrReq' */
    /* Outport: '<Root>/VeBPCR_b_HVBat_DC_CntctrReq' incorporates:
     *  SignalConversion generated from: '<S124>/VeBPCR_b_HVBat_DC_CntctrReq'
     *  SignalConversion generated from: '<S124>/LeBPCR_b_HVBat_DC_CntctrReq'
     */
    /* Gateway: PokeBPCR_b_HVBat_DC_CntctrReq/PokeBPCR_b_HVBat_DC_CntctrReqChrt */
    /* During: PokeBPCR_b_HVBat_DC_CntctrReq/PokeBPCR_b_HVBat_DC_CntctrReqChrt */
    /* Entry Internal: PokeBPCR_b_HVBat_DC_CntctrReq/PokeBPCR_b_HVBat_DC_CntctrReqChrt */
    /* Transition: '<S761>:2' */
    (void)Rte_Write_VeBPCR_b_HVBat_DC_CntctrReq_Value
        (LeBPCR_b_HVBat_DC_CntctrReq);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_HVBat_DC_CntctrReq' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_HVBat_Real_Time_Clock_V(VAR(boolean, AUTOMATIC)
    LeBPCR_b_HVBat_Real_Time_Clock_V)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_HVBat_Real_Time_Clock_V_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_HVBat_Real_Time_Clock_V' */
    /* Chart: '<S125>/PokeBPCR_b_HVBat_Real_Time_Clock_VChrt' incorporates:
     *  SignalConversion generated from: '<S125>/LeBPCR_b_HVBat_Real_Time_Clock_V'
     */
    /* Gateway: PokeBPCR_b_HVBat_Real_Time_Clock_V/PokeBPCR_b_HVBat_Real_Time_Clock_VChrt */
    /* During: PokeBPCR_b_HVBat_Real_Time_Clock_V/PokeBPCR_b_HVBat_Real_Time_Clock_VChrt */
    /* Entry Internal: PokeBPCR_b_HVBat_Real_Time_Clock_V/PokeBPCR_b_HVBat_Real_Time_Clock_VChrt */
    /* Transition: '<S762>:2' */
    rtb_LeBPCR_b_HVBat_Real_Time_Clock_V_out = LeBPCR_b_HVBat_Real_Time_Clock_V;

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_HVBat_Real_Time_Clock_V' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_HVBattPerWakeUp(VAR(boolean, AUTOMATIC)
    LeBPCR_b_HVBattPerWakeUp)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_HVBattPerWakeUp' */
    /* Outport: '<Root>/VeBPCR_b_HVBatPerWakeUp' incorporates:
     *  SignalConversion generated from: '<S126>/VeBPCR_b_HVBattPerWakeUp'
     *  SignalConversion generated from: '<S126>/LeBPCR_b_HVBattPerWakeUp'
     */
    /* Gateway: PokeBPCR_b_HVBattPerWakeUp/PokeBPCR_b_HVBattPerWakeUpChrt */
    /* During: PokeBPCR_b_HVBattPerWakeUp/PokeBPCR_b_HVBattPerWakeUpChrt */
    /* Entry Internal: PokeBPCR_b_HVBattPerWakeUp/PokeBPCR_b_HVBattPerWakeUpChrt */
    /* Transition: '<S763>:2' */
    (void)Rte_Write_VeBPCR_b_HVBatPerWakeUp_Value(LeBPCR_b_HVBattPerWakeUp);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_HVBattPerWakeUp' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_HV_AuxLoadOffReq(VAR(boolean, AUTOMATIC)
    LeBPCR_b_HV_AuxLoadOffReq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_HV_AuxLoadOffReq' */
    /* Outport: '<Root>/VeBPCR_b_HV_AuxLoadOffReq' incorporates:
     *  SignalConversion generated from: '<S127>/VeBPCR_b_HV_AuxLoadOffReq'
     *  SignalConversion generated from: '<S127>/LeBPCR_b_HV_AuxLoadOffReq'
     */
    /* Gateway: PokeBPCR_b_HV_AuxLoadOffReq/PokeBPCR_b_HV_AuxLoadOffReqChrt */
    /* During: PokeBPCR_b_HV_AuxLoadOffReq/PokeBPCR_b_HV_AuxLoadOffReqChrt */
    /* Entry Internal: PokeBPCR_b_HV_AuxLoadOffReq/PokeBPCR_b_HV_AuxLoadOffReqChrt */
    /* Transition: '<S764>:2' */
    (void)Rte_Write_VeBPCR_b_HV_AuxLoadOffReq_Value(LeBPCR_b_HV_AuxLoadOffReq);

    /* Outport: '<Root>/VeBPCR_b_HV_AuxLoadOffReqFA' incorporates:
     *  Chart: '<S127>/PokeBPCR_b_HV_AuxLoadOffReqChrt'
     *  SignalConversion generated from: '<S127>/VeBPCR_b_HV_AuxLoadOffReqFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_AuxLoadOffReqFA_Value(false);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_HV_AuxLoadOffReq' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_HV_BatCntctrOpenPending(VAR(boolean, AUTOMATIC)
    LeBPCR_b_HV_BatCntctrOpenPending)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_HV_BatCntctrOpenPending' */
    /* Merge: '<Root>/Merge_84' incorporates:
     *  SignalConversion generated from: '<S128>/LeBPCR_b_HV_BatCntctrOpenPending'
     *  SignalConversion generated from: '<S128>/VeBPCR_b_HV_BatCntctrOpenPending_write'
     */
    /* Gateway: PokeBPCR_b_HV_BatCntctrOpenPending/PokeBPCR_b_HV_BatCntctrOpenPendingChrt */
    /* During: PokeBPCR_b_HV_BatCntctrOpenPending/PokeBPCR_b_HV_BatCntctrOpenPendingChrt */
    /* Entry Internal: PokeBPCR_b_HV_BatCntctrOpenPending/PokeBPCR_b_HV_BatCntctrOpenPendingChrt */
    /* Transition: '<S765>:2' */
    Rte_IrvWrite_PokeBPCR_b_HV_BatCntctrOpenPending_HV_BatCntctrOpenPending_write_IRV
        (LeBPCR_b_HV_BatCntctrOpenPending);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_HV_BatCntctrOpenPending' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_HV_BatCntctrOpenReq(VAR(boolean, AUTOMATIC)
    LeBPCR_b_HV_BatCntctrOpenReq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_HV_BatCntctrOpenReq' */
    /* Merge: '<Root>/Merge_67' incorporates:
     *  SignalConversion generated from: '<S129>/LeBPCR_b_HV_BatCntctrOpenReq'
     *  SignalConversion generated from: '<S129>/VeBPCR_b_HV_BatCntctrOpenReq_write'
     */
    /* Gateway: PokeBPCR_b_HV_BatCntctrOpenReq/PokeBPCR_b_HV_BatCntctrOpenReqChrt */
    /* During: PokeBPCR_b_HV_BatCntctrOpenReq/PokeBPCR_b_HV_BatCntctrOpenReqChrt */
    /* Entry Internal: PokeBPCR_b_HV_BatCntctrOpenReq/PokeBPCR_b_HV_BatCntctrOpenReqChrt */
    /* Transition: '<S766>:2' */
    Rte_IrvWrite_PokeBPCR_b_HV_BatCntctrOpenReq_HV_BatCntctrOpenReq_write_IRV
        (LeBPCR_b_HV_BatCntctrOpenReq);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_HV_BatCntctrOpenReq' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_HV_BatDriveRdy(VAR(boolean, AUTOMATIC)
    LeBPCR_b_HV_BatDriveRdy)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_HV_BatDriveRdy_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_HV_BatDriveRdy' */
    /* Chart: '<S130>/PokeBPCR_b_HV_BatDriveRdyChrt' incorporates:
     *  SignalConversion generated from: '<S130>/LeBPCR_b_HV_BatDriveRdy'
     */
    /* Gateway: PokeBPCR_b_HV_BatDriveRdy/PokeBPCR_b_HV_BatDriveRdyChrt */
    /* During: PokeBPCR_b_HV_BatDriveRdy/PokeBPCR_b_HV_BatDriveRdyChrt */
    /* Entry Internal: PokeBPCR_b_HV_BatDriveRdy/PokeBPCR_b_HV_BatDriveRdyChrt */
    /* Transition: '<S767>:2' */
    rtb_LeBPCR_b_HV_BatDriveRdy_out = LeBPCR_b_HV_BatDriveRdy;

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_HV_BatDriveRdy' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_MIL_OnRq_BPCM(VAR(boolean, AUTOMATIC)
    LeBPCR_b_MIL_OnRq_BPCM)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_MIL_OnRq_BPCM' */
    /* Merge: '<Root>/Merge_74' incorporates:
     *  SignalConversion generated from: '<S131>/LeBPCR_b_MIL_OnRq_BPCM'
     *  SignalConversion generated from: '<S131>/VeBPCR_b_MIL_OnRq_BPCM_write'
     */
    /* Gateway: PokeBPCR_b_MIL_OnRq_BPCM/PokeBPCR_b_MIL_OnRq_BPCMChrt */
    /* During: PokeBPCR_b_MIL_OnRq_BPCM/PokeBPCR_b_MIL_OnRq_BPCMChrt */
    /* Entry Internal: PokeBPCR_b_MIL_OnRq_BPCM/PokeBPCR_b_MIL_OnRq_BPCMChrt */
    /* Transition: '<S768>:2' */
    Rte_IrvWrite_PokeBPCR_b_MIL_OnRq_BPCM_MILOnRqBPCM_Init_write_IRV
        (LeBPCR_b_MIL_OnRq_BPCM);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_MIL_OnRq_BPCM' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_PwrLimON(VAR(boolean, AUTOMATIC)
    LeBPCR_b_PwrLimON)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_PwrLimON' */
    /* Merge: '<Root>/Merge_54' incorporates:
     *  SignalConversion generated from: '<S132>/LeBPCR_b_PwrLimON'
     *  SignalConversion generated from: '<S132>/VeBPCR_b_PwrLimON'
     */
    /* Gateway: PokeBPCR_b_PwrLimON/PokeBPCR_b_PwrLimONChrt */
    /* During: PokeBPCR_b_PwrLimON/PokeBPCR_b_PwrLimONChrt */
    /* Entry Internal: PokeBPCR_b_PwrLimON/PokeBPCR_b_PwrLimONChrt */
    /* Transition: '<S769>:2' */
    Rte_IrvWrite_PokeBPCR_b_PwrLimON_PwrLimON_IRV(LeBPCR_b_PwrLimON);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_PwrLimON' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_b_StkOpnChkCmpl(VAR(boolean, AUTOMATIC)
    LeBPCR_b_StkOpnChkCmpl)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_b_StkOpnChkCmpl' */
    /* Outport: '<Root>/VeBPCR_b_StkOpnChkCmpl' incorporates:
     *  SignalConversion generated from: '<S133>/VeBPCR_b_StkOpnChkCmpl'
     *  SignalConversion generated from: '<S133>/LeBPCR_b_StkOpnChkCmpl'
     */
    /* Gateway: PokeBPCR_b_StkOpnChkCmpl/PokeBPCR_b_StkOpnChkCmplChrt */
    /* During: PokeBPCR_b_StkOpnChkCmpl/PokeBPCR_b_StkOpnChkCmplChrt */
    /* Entry Internal: PokeBPCR_b_StkOpnChkCmpl/PokeBPCR_b_StkOpnChkCmplChrt */
    /* Transition: '<S770>:2' */
    (void)Rte_Write_VeBPCR_b_StkOpnChkCmpl_Value(LeBPCR_b_StkOpnChkCmpl);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_b_StkOpnChkCmpl' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_cnt_BatteryModel(VAR(sint16, AUTOMATIC)
    LeBPCR_cnt_BatteryModel)
{
    /* local block i/o variables */
    sint16 rtb_LeBPCR_cnt_BatteryModel_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_cnt_BatteryModel' */
    /* Chart: '<S134>/PokeBPCR_cnt_BatteryModelChrt' incorporates:
     *  SignalConversion generated from: '<S134>/LeBPCR_cnt_BatteryModel'
     */
    /* Gateway: PokeBPCR_cnt_BatteryModel/PokeBPCR_cnt_BatteryModelChrt */
    /* During: PokeBPCR_cnt_BatteryModel/PokeBPCR_cnt_BatteryModelChrt */
    /* Entry Internal: PokeBPCR_cnt_BatteryModel/PokeBPCR_cnt_BatteryModelChrt */
    /* Transition: '<S771>:2' */
    rtb_LeBPCR_cnt_BatteryModel_out = LeBPCR_cnt_BatteryModel;

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_cnt_BatteryModel' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_cnt_HVBatt_ModNumMaxTmp(VAR(sint16, AUTOMATIC)
    LeBPCR_cnt_HVBatt_ModNumMaxTmp, VAR(boolean, AUTOMATIC)
    LeBPCR_b_HVBatt_ModNumMaxTmpFA)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_HVBatt_ModNumMaxTmpFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_cnt_HVBatt_ModNumMaxTmp' */
    /* Chart: '<S135>/PokeBPCR_cnt_HVBatt_ModNumMaxTmpChrt' incorporates:
     *  SignalConversion generated from: '<S135>/LeBPCR_b_HVBatt_ModNumMaxTmpFA'
     *  SignalConversion generated from: '<S135>/LeBPCR_cnt_HVBatt_ModNumMaxTmp'
     */
    /* Gateway: PokeBPCR_cnt_HVBatt_ModNumMaxTmp/PokeBPCR_cnt_HVBatt_ModNumMaxTmpChrt */
    /* During: PokeBPCR_cnt_HVBatt_ModNumMaxTmp/PokeBPCR_cnt_HVBatt_ModNumMaxTmpChrt */
    /* Entry Internal: PokeBPCR_cnt_HVBatt_ModNumMaxTmp/PokeBPCR_cnt_HVBatt_ModNumMaxTmpChrt */
    /* Transition: '<S772>:2' */
    if (!LeBPCR_b_HVBatt_ModNumMaxTmpFA)
    {
        /* Transition: '<S772>:3' */
        /* Transition: '<S772>:15' */
        BPCR_ac_B.LeBPCR_cnt_HVBatt_ModNumMaxTmp_out =
            LeBPCR_cnt_HVBatt_ModNumMaxTmp;
        rtb_LeBPCR_b_HVBatt_ModNumMaxTmpFA_out = false;

        /* Transition: '<S772>:18' */
    }
    else
    {
        /* Transition: '<S772>:4' */
        rtb_LeBPCR_b_HVBatt_ModNumMaxTmpFA_out = true;
    }

    /* End of Chart: '<S135>/PokeBPCR_cnt_HVBatt_ModNumMaxTmpChrt' */

    /* Outport: '<Root>/VeBPCR_Cnt_HVBat_ModNumMaxTmp' incorporates:
     *  SignalConversion generated from: '<S135>/VeBPCR_cnt_HVBatt_ModNumMaxTmp'
     */
    (void)Rte_Write_VeBPCR_Cnt_HVBat_ModNumMaxTmp_Value
        (BPCR_ac_B.LeBPCR_cnt_HVBatt_ModNumMaxTmp_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_cnt_HVBatt_ModNumMaxTmp' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_cnt_HVBatt_ModNumMinTmp(VAR(sint16, AUTOMATIC)
    LeBPCR_cnt_HVBatt_ModNumMinTmp, VAR(boolean, AUTOMATIC)
    LeBPCR_b_HVBatt_ModNumMinTmpFA)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_HVBatt_ModNumMinTmpFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_cnt_HVBatt_ModNumMinTmp' */
    /* Chart: '<S136>/PokeBPCR_cnt_HVBatt_ModNumMinTmpChrt' incorporates:
     *  SignalConversion generated from: '<S136>/LeBPCR_b_HVBatt_ModNumMinTmpFA'
     *  SignalConversion generated from: '<S136>/LeBPCR_cnt_HVBatt_ModNumMinTmp'
     */
    /* Gateway: PokeBPCR_cnt_HVBatt_ModNumMinTmp/PokeBPCR_cnt_HVBatt_ModNumMinTmpChrt */
    /* During: PokeBPCR_cnt_HVBatt_ModNumMinTmp/PokeBPCR_cnt_HVBatt_ModNumMinTmpChrt */
    /* Entry Internal: PokeBPCR_cnt_HVBatt_ModNumMinTmp/PokeBPCR_cnt_HVBatt_ModNumMinTmpChrt */
    /* Transition: '<S773>:2' */
    if (!LeBPCR_b_HVBatt_ModNumMinTmpFA)
    {
        /* Transition: '<S773>:3' */
        /* Transition: '<S773>:15' */
        BPCR_ac_B.LeBPCR_cnt_HVBatt_ModNumMinTmp_out =
            LeBPCR_cnt_HVBatt_ModNumMinTmp;
        rtb_LeBPCR_b_HVBatt_ModNumMinTmpFA_out = false;

        /* Transition: '<S773>:18' */
    }
    else
    {
        /* Transition: '<S773>:4' */
        rtb_LeBPCR_b_HVBatt_ModNumMinTmpFA_out = true;
    }

    /* End of Chart: '<S136>/PokeBPCR_cnt_HVBatt_ModNumMinTmpChrt' */

    /* Outport: '<Root>/VeBPCR_Cnt_HVBat_ModNumMinTmp' incorporates:
     *  SignalConversion generated from: '<S136>/VeBPCR_cnt_HVBatt_ModNumMinTmp'
     */
    (void)Rte_Write_VeBPCR_Cnt_HVBat_ModNumMinTmp_Value
        (BPCR_ac_B.LeBPCR_cnt_HVBatt_ModNumMinTmp_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_cnt_HVBatt_ModNumMinTmp' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_e_BPCMShtDwnRdy(VAR(TeBPCR_e_BPCMShtDwnRdy,
    AUTOMATIC) LeBPCR_e_BPCMShtDwnRdy)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_e_BPCMShtDwnRdy' */
    /* Outport: '<Root>/VeBPCR_e_BPCMShtDwnRdy' incorporates:
     *  SignalConversion generated from: '<S137>/VeBPCR_e_BPCMShtDwnRdy'
     *  SignalConversion generated from: '<S137>/LeBPCR_e_BPCMShtDwnRdy'
     */
    /* Gateway: PokeBPCR_e_BPCMShtDwnRdy/PokeBPCR_e_BPCMShtDwnRdyChrt */
    /* During: PokeBPCR_e_BPCMShtDwnRdy/PokeBPCR_e_BPCMShtDwnRdyChrt */
    /* Entry Internal: PokeBPCR_e_BPCMShtDwnRdy/PokeBPCR_e_BPCMShtDwnRdyChrt */
    /* Transition: '<S774>:2' */
    (void)Rte_Write_VeBPCR_e_BPCMShtDwnRdy_Value(LeBPCR_e_BPCMShtDwnRdy);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_e_BPCMShtDwnRdy' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_e_BPCM_Comm_Fail(VAR(uint8, AUTOMATIC)
    LeBPCR_e_BPCM_Comm_Fail, VAR(boolean, AUTOMATIC) LeBPCR_b_BPCM_Comm_Fail_FA)
{
    boolean rtb_LeBPCR_b_BPCM_Comm_Fail_FA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_e_BPCM_Comm_Fail' */
    /* Chart: '<S138>/PokeBPCR_e_BPCM_Comm_FailChrt' incorporates:
     *  Constant: '<S775>/Calib'
     *  SignalConversion generated from: '<S138>/LeBPCR_b_BPCM_Comm_Fail_FA'
     *  SignalConversion generated from: '<S138>/LeBPCR_e_BPCM_Comm_Fail'
     */
    /* Gateway: PokeBPCR_e_BPCM_Comm_Fail/PokeBPCR_e_BPCM_Comm_FailChrt */
    /* During: PokeBPCR_e_BPCM_Comm_Fail/PokeBPCR_e_BPCM_Comm_FailChrt */
    /* Entry Internal: PokeBPCR_e_BPCM_Comm_Fail/PokeBPCR_e_BPCM_Comm_FailChrt */
    /* Transition: '<S776>:2' */
    if (!LeBPCR_b_BPCM_Comm_Fail_FA)
    {
        /* Transition: '<S776>:3' */
        /* Transition: '<S776>:15' */
        BPCR_ac_B.LeBPCR_e_BPCM_Comm_Fail_out = KaBPCR_e_BPCM_Comm_Fail_Map
            [(LeBPCR_e_BPCM_Comm_Fail)];
        rtb_LeBPCR_b_BPCM_Comm_Fail_FA_out = false;

        /* Transition: '<S776>:18' */
    }
    else
    {
        /* Transition: '<S776>:4' */
        rtb_LeBPCR_b_BPCM_Comm_Fail_FA_out = true;
    }

    /* End of Chart: '<S138>/PokeBPCR_e_BPCM_Comm_FailChrt' */

    /* Outport: '<Root>/VeBPCR_b_BPCM_CommFailFA' incorporates:
     *  SignalConversion generated from: '<S138>/VeBPCR_b_BPCM_Comm_Fail_FA'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_CommFailFA_Value
        (rtb_LeBPCR_b_BPCM_Comm_Fail_FA_out);

    /* Outport: '<Root>/VeBPCR_e_BPCM_CommFail' incorporates:
     *  SignalConversion generated from: '<S138>/VeBPCR_e_BPCM_Comm_Fail'
     */
    (void)Rte_Write_VeBPCR_e_BPCM_CommFail_Value
        (BPCR_ac_B.LeBPCR_e_BPCM_Comm_Fail_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_e_BPCM_Comm_Fail' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_e_BPCM_LIN_BusOff(VAR(TeBPCR_e_LIN_BusOff,
    AUTOMATIC) LeBPCR_e_BPCM_LIN_BusOff, VAR(boolean, AUTOMATIC)
    LeBPCR_b_BPCM_LIN_BusOffFA)
{
    boolean rtb_LeBPCR_b_BPCM_LIN_BusOffFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_e_BPCM_LIN_BusOff' */
    /* Chart: '<S139>/PokeBPCR_e_BPCM_LIN_BusOffChrt' incorporates:
     *  SignalConversion generated from: '<S139>/LeBPCR_b_BPCM_LIN_BusOffFA'
     *  SignalConversion generated from: '<S139>/LeBPCR_e_BPCM_LIN_BusOff'
     */
    /* Gateway: PokeBPCR_e_BPCM_LIN_BusOff/PokeBPCR_e_BPCM_LIN_BusOffChrt */
    /* During: PokeBPCR_e_BPCM_LIN_BusOff/PokeBPCR_e_BPCM_LIN_BusOffChrt */
    /* Entry Internal: PokeBPCR_e_BPCM_LIN_BusOff/PokeBPCR_e_BPCM_LIN_BusOffChrt */
    /* Transition: '<S777>:2' */
    if (!LeBPCR_b_BPCM_LIN_BusOffFA)
    {
        /* Transition: '<S777>:3' */
        /* Transition: '<S777>:15' */
        BPCR_ac_B.LeBPCR_e_BPCM_LIN_BusOff_out = LeBPCR_e_BPCM_LIN_BusOff;
        rtb_LeBPCR_b_BPCM_LIN_BusOffFA_out = false;
        BPCR_ac_B.LeBPCR_b_BPCM_LIN_BusOffSgnl_Rcvd = true;

        /* Transition: '<S777>:18' */
    }
    else
    {
        /* Transition: '<S777>:4' */
        rtb_LeBPCR_b_BPCM_LIN_BusOffFA_out = true;
    }

    /* End of Chart: '<S139>/PokeBPCR_e_BPCM_LIN_BusOffChrt' */

    /* Outport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_FA' incorporates:
     *  SignalConversion generated from: '<S139>/VeBPCR_b_BPCM_LIN_BusOffFA'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LIN_BusOff_FA_Value
        (rtb_LeBPCR_b_BPCM_LIN_BusOffFA_out);

    /* Outport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S139>/VeBPCR_b_BPCM_LIN_BusOffSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LIN_BusOff_SgnlRcvd_Value
        (BPCR_ac_B.LeBPCR_b_BPCM_LIN_BusOffSgnl_Rcvd);

    /* Outport: '<Root>/VeBPCR_e_BPCM_LIN_BusOff' incorporates:
     *  SignalConversion generated from: '<S139>/VeBPCR_e_BPCM_LIN_BusOff'
     */
    (void)Rte_Write_VeBPCR_e_BPCM_LIN_BusOff_Value
        (BPCR_ac_B.LeBPCR_e_BPCM_LIN_BusOff_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_e_BPCM_LIN_BusOff' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_e_BPCM_LOC_BCP(VAR(TeBPCR_e_LOC_BCP, AUTOMATIC)
    LeBPCR_e_BPCM_LOC_BCP, VAR(boolean, AUTOMATIC) LeBPCR_b_BPCM_LOC_BCPFA)
{
    boolean rtb_LeBPCR_b_BPCM_LOC_BCPFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_e_BPCM_LOC_BCP' */
    /* Chart: '<S140>/PokeBPCR_e_BPCM_LOC_BCPChrt' incorporates:
     *  SignalConversion generated from: '<S140>/LeBPCR_b_BPCM_LOC_BCPFA'
     *  SignalConversion generated from: '<S140>/LeBPCR_e_BPCM_LOC_BCP'
     */
    /* Gateway: PokeBPCR_e_BPCM_LOC_BCP/PokeBPCR_e_BPCM_LOC_BCPChrt */
    /* During: PokeBPCR_e_BPCM_LOC_BCP/PokeBPCR_e_BPCM_LOC_BCPChrt */
    /* Entry Internal: PokeBPCR_e_BPCM_LOC_BCP/PokeBPCR_e_BPCM_LOC_BCPChrt */
    /* Transition: '<S778>:2' */
    if (!LeBPCR_b_BPCM_LOC_BCPFA)
    {
        /* Transition: '<S778>:3' */
        /* Transition: '<S778>:15' */
        BPCR_ac_B.LeBPCR_e_BPCM_LOC_BCP_out = LeBPCR_e_BPCM_LOC_BCP;
        rtb_LeBPCR_b_BPCM_LOC_BCPFA_out = false;
        BPCR_ac_B.LeBPCR_b_BPCM_LOC_BCPSgnl_Rcvd = true;

        /* Transition: '<S778>:18' */
    }
    else
    {
        /* Transition: '<S778>:4' */
        rtb_LeBPCR_b_BPCM_LOC_BCPFA_out = true;
    }

    /* End of Chart: '<S140>/PokeBPCR_e_BPCM_LOC_BCPChrt' */

    /* Outport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_FA' incorporates:
     *  SignalConversion generated from: '<S140>/VeBPCR_b_BPCM_LOC_BCPFA'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LOC_BCP_FA_Value
        (rtb_LeBPCR_b_BPCM_LOC_BCPFA_out);

    /* Outport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S140>/VeBPCR_b_BPCM_LOC_BCPSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LOC_BCP_SgnlRcvd_Value
        (BPCR_ac_B.LeBPCR_b_BPCM_LOC_BCPSgnl_Rcvd);

    /* Outport: '<Root>/VeBPCR_e_BPCM_LOC_BCP' incorporates:
     *  SignalConversion generated from: '<S140>/VeBPCR_e_BPCM_LOC_BCP'
     */
    (void)Rte_Write_VeBPCR_e_BPCM_LOC_BCP_Value
        (BPCR_ac_B.LeBPCR_e_BPCM_LOC_BCP_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_e_BPCM_LOC_BCP' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_e_BPCM_LOC_BatClntHtr(VAR(TeBPCR_e_LOC_BatClntHtr,
    AUTOMATIC) LeBPCR_e_BPCM_LOC_BatClntHtr, VAR(boolean, AUTOMATIC)
    LeBPCR_b_BPCM_LOC_BatClntHtrFA)
{
    boolean rtb_LeBPCR_b_BPCM_LOC_BatClntHtrFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_e_BPCM_LOC_BatClntHtr' */
    /* Chart: '<S141>/PokeBPCR_e_BPCM_LOC_BatClntHtrChrt' incorporates:
     *  SignalConversion generated from: '<S141>/LeBPCR_b_BPCM_LOC_BatClntHtrFA'
     *  SignalConversion generated from: '<S141>/LeBPCR_e_BPCM_LOC_BatClntHtr'
     */
    /* Gateway: PokeBPCR_e_BPCM_LOC_BatClntHtr/PokeBPCR_e_BPCM_LOC_BatClntHtrChrt */
    /* During: PokeBPCR_e_BPCM_LOC_BatClntHtr/PokeBPCR_e_BPCM_LOC_BatClntHtrChrt */
    /* Entry Internal: PokeBPCR_e_BPCM_LOC_BatClntHtr/PokeBPCR_e_BPCM_LOC_BatClntHtrChrt */
    /* Transition: '<S779>:2' */
    if (!LeBPCR_b_BPCM_LOC_BatClntHtrFA)
    {
        /* Transition: '<S779>:3' */
        /* Transition: '<S779>:15' */
        BPCR_ac_B.LeBPCR_e_BPCM_LOC_BatClntHtr_out =
            LeBPCR_e_BPCM_LOC_BatClntHtr;
        rtb_LeBPCR_b_BPCM_LOC_BatClntHtrFA_out = false;
        BPCR_ac_B.LeBPCR_b_BPCM_LOC_BatClntHtrSgnl_Rcvd = true;

        /* Transition: '<S779>:18' */
    }
    else
    {
        /* Transition: '<S779>:4' */
        rtb_LeBPCR_b_BPCM_LOC_BatClntHtrFA_out = true;
    }

    /* End of Chart: '<S141>/PokeBPCR_e_BPCM_LOC_BatClntHtrChrt' */

    /* Outport: '<Root>/VeBPCR_b_BPCM_LOC_BatClntHtr_FA' incorporates:
     *  SignalConversion generated from: '<S141>/VeBPCR_b_BPCM_LOC_BatClntHtrFA'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LOC_BatClntHtr_FA_Value
        (rtb_LeBPCR_b_BPCM_LOC_BatClntHtrFA_out);

    /* Outport: '<Root>/VeBPCR_b_BPCM_LOC_BatClntHtr_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S141>/VeBPCR_b_BPCM_LOC_BatClntHtrSgnl_Rcvd'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LOC_BatClntHtr_SgnlRcvd_Value
        (BPCR_ac_B.LeBPCR_b_BPCM_LOC_BatClntHtrSgnl_Rcvd);

    /* Outport: '<Root>/VeBPCR_e_BPCM_LOC_BatClntHtr' incorporates:
     *  SignalConversion generated from: '<S141>/VeBPCR_e_BPCM_LOC_BatClntHtr'
     */
    (void)Rte_Write_VeBPCR_e_BPCM_LOC_BatClntHtr_Value
        (BPCR_ac_B.LeBPCR_e_BPCM_LOC_BatClntHtr_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_e_BPCM_LOC_BatClntHtr' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_e_ChargingStat_BPCM(VAR
    (TeOBCR_e_ChargingStat_BPCM, AUTOMATIC) LeBPCR_e_ChargingStat_BPCM, VAR
    (boolean, AUTOMATIC) LeBPCR_b_ChargingStat_BPCMFA)
{
    TeOBCR_e_ChargingStat_BPCM rtb_LeBPCR_e_ChargingStat_BPCM_out;
    boolean rtb_LeBPCR_b_ChargingStat_BPCMFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_e_ChargingStat_BPCM' */
    /* Chart: '<S142>/PokeBPCR_e_ChargingStat_BPCMChrt' incorporates:
     *  SignalConversion generated from: '<S142>/LeBPCR_b_ChargingStat_BPCMFA'
     *  SignalConversion generated from: '<S142>/LeBPCR_e_ChargingStat_BPCM'
     */
    /* Gateway: PokeBPCR_e_ChargingStat_BPCM/PokeBPCR_e_ChargingStat_BPCMChrt */
    /* During: PokeBPCR_e_ChargingStat_BPCM/PokeBPCR_e_ChargingStat_BPCMChrt */
    /* Entry Internal: PokeBPCR_e_ChargingStat_BPCM/PokeBPCR_e_ChargingStat_BPCMChrt */
    /* Transition: '<S780>:2' */
    if (!LeBPCR_b_ChargingStat_BPCMFA)
    {
        /* Transition: '<S780>:3' */
        /* Transition: '<S780>:15' */
        rtb_LeBPCR_e_ChargingStat_BPCM_out = KaBPCR_e_ChargingStat_BPCM_Map
            [(LeBPCR_e_ChargingStat_BPCM)];
        rtb_LeBPCR_b_ChargingStat_BPCMFA_out = false;

        /* Transition: '<S780>:18' */
    }
    else
    {
        /* Transition: '<S780>:4' */
        rtb_LeBPCR_e_ChargingStat_BPCM_out = KeBPCR_e_ChargingStat_BPCM;
        rtb_LeBPCR_b_ChargingStat_BPCMFA_out = true;
    }

    /* End of Chart: '<S142>/PokeBPCR_e_ChargingStat_BPCMChrt' */

    /* Outport: '<Root>/VeBPCR_b_ChargingStat_BPCMFA' incorporates:
     *  SignalConversion generated from: '<S142>/VeBPCR_b_ChargingStat_BPCMFA'
     */
    (void)Rte_Write_VeBPCR_b_ChargingStat_BPCMFA_Value
        (rtb_LeBPCR_b_ChargingStat_BPCMFA_out);

    /* Outport: '<Root>/VeBPCR_e_ChargingStat_BPCM' incorporates:
     *  SignalConversion generated from: '<S142>/VeBPCR_e_ChargingStat_BPCM'
     */
    (void)Rte_Write_VeBPCR_e_ChargingStat_BPCM_Value
        (rtb_LeBPCR_e_ChargingStat_BPCM_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_e_ChargingStat_BPCM' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_e_DCIsolSts(VAR(TeBPCR_e_DCIsolSts, AUTOMATIC)
    LeBPCR_e_DCIsolSts)
{
    boolean rtb_LeBPCR_b_DCIsolStsFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_e_DCIsolSts' */
    /* Chart: '<S143>/PokeBPCR_e_DCIsolStsChrt' incorporates:
     *  SignalConversion generated from: '<S143>/LeBPCR_e_DCIsolSts'
     */
    /* Gateway: PokeBPCR_e_DCIsolSts/PokeBPCR_e_DCIsolStsChrt */
    /* During: PokeBPCR_e_DCIsolSts/PokeBPCR_e_DCIsolStsChrt */
    /* Entry Internal: PokeBPCR_e_DCIsolSts/PokeBPCR_e_DCIsolStsChrt */
    /* Transition: '<S781>:2' */
    if (((uint32)LeBPCR_e_DCIsolSts) == CeBPCR_e_DCIsolSts_SNA)
    {
        /* SignalConversion generated from: '<S143>/VeBPCR_e_DCIsolSts' incorporates:
         *  Outport: '<Root>/VeBPCR_e_DCIsolSts'
         */
        /* Transition: '<S781>:20' */
        /* Transition: '<S781>:27' */
        (void)Rte_Write_VeBPCR_e_DCIsolSts_Value(LeBPCR_e_DCIsolSts);
        rtb_LeBPCR_b_DCIsolStsFA_out = true;

        /* Transition: '<S781>:28' */
    }
    else
    {
        /* SignalConversion generated from: '<S143>/VeBPCR_e_DCIsolSts' incorporates:
         *  Outport: '<Root>/VeBPCR_e_DCIsolSts'
         */
        /* Transition: '<S781>:25' */
        (void)Rte_Write_VeBPCR_e_DCIsolSts_Value(LeBPCR_e_DCIsolSts);
        rtb_LeBPCR_b_DCIsolStsFA_out = false;
    }

    /* End of Chart: '<S143>/PokeBPCR_e_DCIsolStsChrt' */

    /* Outport: '<Root>/VeBPCR_b_DCIsolStsFA' incorporates:
     *  SignalConversion generated from: '<S143>/VeBPCR_b_DCIsolStsFA'
     */
    (void)Rte_Write_VeBPCR_b_DCIsolStsFA_Value(rtb_LeBPCR_b_DCIsolStsFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_e_DCIsolSts' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_e_HVBatCntrWeld_ImpdOpn(VAR(sint16, AUTOMATIC)
    LeBPCR_e_HVBatCntrWeld_ImpdOpn)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_e_HVBatCntrWeld_ImpdOpn' */
    /* Outport: '<Root>/VeBPCR_b_Flst_HVBatCntrWeld_ImpdOpn' incorporates:
     *  Chart: '<S144>/PokeBPCR_e_HVBatCntrWeld_ImpdOpnChrt'
     *  SignalConversion generated from: '<S144>/VeBPCR_b_HVBatCntrWeld_ImpdOpnFA'
     */
    /* Gateway: PokeBPCR_e_HVBatCntrWeld_ImpdOpn/PokeBPCR_e_HVBatCntrWeld_ImpdOpnChrt */
    /* During: PokeBPCR_e_HVBatCntrWeld_ImpdOpn/PokeBPCR_e_HVBatCntrWeld_ImpdOpnChrt */
    /* Entry Internal: PokeBPCR_e_HVBatCntrWeld_ImpdOpn/PokeBPCR_e_HVBatCntrWeld_ImpdOpnChrt */
    /* Transition: '<S783>:15' */
    (void)Rte_Write_VeBPCR_b_Flst_HVBatCntrWeld_ImpdOpn_Value(false);

    /* Merge: '<Root>/Merge_95' incorporates:
     *  Chart: '<S144>/PokeBPCR_e_HVBatCntrWeld_ImpdOpnChrt'
     *  SignalConversion generated from: '<S144>/VeBPCR_b_HVBatCntrWeld_ImpdOpnSgnl_Rcvd_write'
     */
    Rte_IrvWrite_PokeBPCR_e_HVBatCntrWeld_ImpdOpn_VeBPCR_b_HVBatCntrWeld_ImpdOpnSgnl_Rcvd_write_IRV
        (true);

    /* Merge: '<Root>/Merge_64' incorporates:
     *  Chart: '<S144>/PokeBPCR_e_HVBatCntrWeld_ImpdOpnChrt'
     *  Constant: '<S782>/Calib'
     *  SignalConversion generated from: '<S144>/LeBPCR_e_HVBatCntrWeld_ImpdOpn'
     *  SignalConversion generated from: '<S144>/VeBPCR_e_HVBatCntrWeld_ImpdOpn_write'
     */
    Rte_IrvWrite_PokeBPCR_e_HVBatCntrWeld_ImpdOpn_HVBatCntrWeld_ImpdOpn_write_IRV
        (HaBPCR_e_HVBatCntrWeld_ImpOpn_Map[(LeBPCR_e_HVBatCntrWeld_ImpdOpn)]);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_e_HVBatCntrWeld_ImpdOpn' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_e_HVBatIntrlkIntrnlStat(VAR
    (TeBPCR_e_HVBatIntrlk_InternalStat, AUTOMATIC)
    LeBPCR_e_HVBatIntrlkIntrnlStat)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_e_HVBatIntrlkIntrnlStat' */
    /* Outport: '<Root>/VeBPCR_b_HVBatIntrlkIntrnlStatFA' incorporates:
     *  Chart: '<S145>/PokeBPCR_e_HVBatIntrlkIntrnlStatChrt'
     *  SignalConversion generated from: '<S145>/VeBPCR_b_HVBatIntrlkIntrnlStatFA'
     */
    /* Gateway: PokeBPCR_e_HVBatIntrlkIntrnlStat/PokeBPCR_e_HVBatIntrlkIntrnlStatChrt */
    /* During: PokeBPCR_e_HVBatIntrlkIntrnlStat/PokeBPCR_e_HVBatIntrlkIntrnlStatChrt */
    /* Entry Internal: PokeBPCR_e_HVBatIntrlkIntrnlStat/PokeBPCR_e_HVBatIntrlkIntrnlStatChrt */
    /* Transition: '<S784>:2' */
    (void)Rte_Write_VeBPCR_b_HVBatIntrlkIntrnlStatFA_Value(false);

    /* Outport: '<Root>/VeBPCR_e_HVBatIntrlkIntrnlStat' incorporates:
     *  SignalConversion generated from: '<S145>/VeBPCR_e_HVBatIntrlkIntrnlStat'
     *  SignalConversion generated from: '<S145>/LeBPCR_e_HVBatIntrlkIntrnlStat'
     */
    (void)Rte_Write_VeBPCR_e_HVBatIntrlkIntrnlStat_Value
        (LeBPCR_e_HVBatIntrlkIntrnlStat);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_e_HVBatIntrlkIntrnlStat' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_e_HVBatPerWU_Rsn(VAR(sint16, AUTOMATIC)
    LeBPCR_e_HVBatPerWU_Rsn, VAR(boolean, AUTOMATIC) LeBPCR_b_HVBatPerWU_RsnFA)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_HVBatPerWU_RsnFA_out;
    UNUSED_PARAMETER(LeBPCR_e_HVBatPerWU_Rsn);

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_e_HVBatPerWU_Rsn' */
    /* Chart: '<S146>/PokeBPCR_e_HVBatPerWU_RsnChrt' incorporates:
     *  SignalConversion generated from: '<S146>/LeBPCR_b_HVBatPerWU_RsnFA'
     */
    /* Gateway: PokeBPCR_e_HVBatPerWU_Rsn/PokeBPCR_e_HVBatPerWU_RsnChrt */
    /* During: PokeBPCR_e_HVBatPerWU_Rsn/PokeBPCR_e_HVBatPerWU_RsnChrt */
    /* Entry Internal: PokeBPCR_e_HVBatPerWU_Rsn/PokeBPCR_e_HVBatPerWU_RsnChrt */
    /* Transition: '<S785>:2' */
    if (!LeBPCR_b_HVBatPerWU_RsnFA)
    {
        /* Transition: '<S785>:3' */
        /* Transition: '<S785>:15' */
        rtb_LeBPCR_b_HVBatPerWU_RsnFA_out = false;

        /* Transition: '<S785>:18' */
    }
    else
    {
        /* Transition: '<S785>:4' */
        rtb_LeBPCR_b_HVBatPerWU_RsnFA_out = true;
    }

    /* End of Chart: '<S146>/PokeBPCR_e_HVBatPerWU_RsnChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_e_HVBatPerWU_Rsn' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_e_HVBat_DC_CntctrStat(VAR(sint16, AUTOMATIC)
    LeBPCR_e_HVBat_DC_CntctrStat, VAR(boolean, AUTOMATIC)
    LeBPCR_b_HVBat_DC_CntctrStatFA)
{
    boolean rtb_LeBPCR_b_HVBat_DC_CntctrStatFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_e_HVBat_DC_CntctrStat' */
    /* Chart: '<S147>/PokeBPCR_e_HVBat_DC_CntctrStatChrt' incorporates:
     *  Constant: '<S786>/Calib'
     *  SignalConversion generated from: '<S147>/LeBPCR_b_HVBat_DC_CntctrStatFA'
     *  SignalConversion generated from: '<S147>/LeBPCR_e_HVBat_DC_CntctrStat'
     */
    /* Gateway: PokeBPCR_e_HVBat_DC_CntctrStat/PokeBPCR_e_HVBat_DC_CntctrStatChrt */
    /* During: PokeBPCR_e_HVBat_DC_CntctrStat/PokeBPCR_e_HVBat_DC_CntctrStatChrt */
    /* Entry Internal: PokeBPCR_e_HVBat_DC_CntctrStat/PokeBPCR_e_HVBat_DC_CntctrStatChrt */
    /* Transition: '<S787>:2' */
    if (!LeBPCR_b_HVBat_DC_CntctrStatFA)
    {
        /* Transition: '<S787>:3' */
        /* Transition: '<S787>:15' */
        BPCR_ac_B.LeBPCR_e_HVBat_DC_CntctrStat_out =
            HaBPCR_e_HVBat_DC_CntctrStat_Map[(LeBPCR_e_HVBat_DC_CntctrStat)];
        rtb_LeBPCR_b_HVBat_DC_CntctrStatFA_out = false;

        /* Transition: '<S787>:18' */
    }
    else
    {
        /* Transition: '<S787>:4' */
        rtb_LeBPCR_b_HVBat_DC_CntctrStatFA_out = true;
    }

    /* End of Chart: '<S147>/PokeBPCR_e_HVBat_DC_CntctrStatChrt' */

    /* Outport: '<Root>/VeBPCR_b_HVBat_DC_CntctrStat_FA' incorporates:
     *  SignalConversion generated from: '<S147>/VeBPCR_b_HVBat_DC_CntctrStatFA'
     */
    (void)Rte_Write_VeBPCR_b_HVBat_DC_CntctrStat_FA_Value
        (rtb_LeBPCR_b_HVBat_DC_CntctrStatFA_out);

    /* Outport: '<Root>/VeBPCR_e_HVBat_DC_CntctrStat' incorporates:
     *  SignalConversion generated from: '<S147>/VeBPCR_e_HVBat_DC_CntctrStat'
     */
    (void)Rte_Write_VeBPCR_e_HVBat_DC_CntctrStat_Value
        (BPCR_ac_B.LeBPCR_e_HVBat_DC_CntctrStat_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_e_HVBat_DC_CntctrStat' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_e_HV_BatCntctrStat(VAR(sint16, AUTOMATIC)
    LeBPCR_e_HV_BatCntctrStat, VAR(boolean, AUTOMATIC)
    LeBPCR_b_HV_BatCntctrStatFA)
{
    boolean rtb_LeBPCR_b_HV_BatCntctrStatFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_e_HV_BatCntctrStat' */
    /* Chart: '<S148>/PokeBPCR_e_HV_BatCntctrStatChrt' incorporates:
     *  Constant: '<S788>/Calib'
     *  SignalConversion generated from: '<S148>/LeBPCR_b_HV_BatCntctrStatFA'
     *  SignalConversion generated from: '<S148>/LeBPCR_e_HV_BatCntctrStat'
     */
    /* Gateway: PokeBPCR_e_HV_BatCntctrStat/PokeBPCR_e_HV_BatCntctrStatChrt */
    /* During: PokeBPCR_e_HV_BatCntctrStat/PokeBPCR_e_HV_BatCntctrStatChrt */
    /* Entry Internal: PokeBPCR_e_HV_BatCntctrStat/PokeBPCR_e_HV_BatCntctrStatChrt */
    /* Transition: '<S789>:2' */
    if (!LeBPCR_b_HV_BatCntctrStatFA)
    {
        /* Transition: '<S789>:3' */
        /* Transition: '<S789>:15' */
        BPCR_ac_B.LeBPCR_e_HV_BatCntctrStat_out = HaBPCR_e_HV_CntctrStat_Map
            [(LeBPCR_e_HV_BatCntctrStat)];
        rtb_LeBPCR_b_HV_BatCntctrStatFA_out = false;

        /* Transition: '<S789>:18' */
    }
    else
    {
        /* Transition: '<S789>:4' */
        rtb_LeBPCR_b_HV_BatCntctrStatFA_out = true;
    }

    /* End of Chart: '<S148>/PokeBPCR_e_HV_BatCntctrStatChrt' */

    /* Merge: '<Root>/Merge_85' incorporates:
     *  SignalConversion generated from: '<S148>/VeBPCR_b_HV_BatCntctrStatFA_write'
     * */
    Rte_IrvWrite_PokeBPCR_e_HV_BatCntctrStat_HV_BatCntctrStatFA_write_IRV
        (rtb_LeBPCR_b_HV_BatCntctrStatFA_out);

    /* Merge: '<Root>/Merge_57' incorporates:
     *  SignalConversion generated from: '<S148>/VeBPCR_e_HV_BatCntctrStat_write'
     * */
    Rte_IrvWrite_PokeBPCR_e_HV_BatCntctrStat_HV_BatCntctrStat_write_IRV
        (BPCR_ac_B.LeBPCR_e_HV_BatCntctrStat_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_e_HV_BatCntctrStat' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_e_HV_BatInrlkStat(VAR(TeHVTR_e_HV_IntrlkStat,
    AUTOMATIC) LeBPCR_e_HV_BatInrlkStat)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_e_HV_BatInrlkStat' */
    /* Outport: '<Root>/VeBPCR_b_HV_BatInrlkStatFA' incorporates:
     *  Chart: '<S149>/PokeBPCR_e_HV_BatInrlkStatChrt'
     *  SignalConversion generated from: '<S149>/VeBPCR_b_HV_BatInrlkStatFA'
     */
    /* Gateway: PokeBPCR_e_HV_BatInrlkStat/PokeBPCR_e_HV_BatInrlkStatChrt */
    /* During: PokeBPCR_e_HV_BatInrlkStat/PokeBPCR_e_HV_BatInrlkStatChrt */
    /* Entry Internal: PokeBPCR_e_HV_BatInrlkStat/PokeBPCR_e_HV_BatInrlkStatChrt */
    /* Transition: '<S790>:2' */
    (void)Rte_Write_VeBPCR_b_HV_BatInrlkStatFA_Value(false);

    /* Outport: '<Root>/VeBPCR_e_HV_BatInrlkStat' incorporates:
     *  SignalConversion generated from: '<S149>/VeBPCR_e_HV_BatInrlkStat'
     *  SignalConversion generated from: '<S149>/LeBPCR_e_HV_BatInrlkStat'
     */
    (void)Rte_Write_VeBPCR_e_HV_BatInrlkStat_Value(LeBPCR_e_HV_BatInrlkStat);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_e_HV_BatInrlkStat' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_e_HV_BatIsolStat(VAR(sint16, AUTOMATIC)
    LeBPCR_e_HV_BatIsolStat)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_e_HV_BatIsolStat' */
    /* Outport: '<Root>/VeBPCR_e_HV_BatIsolStat' incorporates:
     *  Chart: '<S150>/PokeBPCR_e_HV_BatIsolStatChrt'
     *  Constant: '<S791>/Calib'
     *  SignalConversion generated from: '<S150>/VeBPCR_e_HV_BatIsolStat'
     *  SignalConversion generated from: '<S150>/LeBPCR_e_HV_BatIsolStat'
     */
    /* Gateway: PokeBPCR_e_HV_BatIsolStat/PokeBPCR_e_HV_BatIsolStatChrt */
    /* During: PokeBPCR_e_HV_BatIsolStat/PokeBPCR_e_HV_BatIsolStatChrt */
    /* Entry Internal: PokeBPCR_e_HV_BatIsolStat/PokeBPCR_e_HV_BatIsolStatChrt */
    /* Transition: '<S792>:2' */
    (void)Rte_Write_VeBPCR_e_HV_BatIsolStat_Value(HaBPCR_e_HV_BatIsolStat_Map
        [(LeBPCR_e_HV_BatIsolStat)]);

    /* Outport: '<Root>/VeBPCR_e_HV_BatIsolStat_raw' incorporates:
     *  Chart: '<S150>/PokeBPCR_e_HV_BatIsolStatChrt'
     *  SignalConversion generated from: '<S150>/VeBPCR_e_HV_BatIsolStat_raw'
     *  SignalConversion generated from: '<S150>/LeBPCR_e_HV_BatIsolStat'
     */
    (void)Rte_Write_VeBPCR_e_HV_BatIsolStat_raw_Value((TeBPCR_e_HV_IsolStat_raw)
        BP_safe_cast_to_TeBPCR_e_HV_IsolStat_raw((uint8)LeBPCR_e_HV_BatIsolStat));

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_e_HV_BatIsolStat' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_e_HV_DcChargeTypeStat(VAR
    (TeBPCR_e_HVDcChargeTypeStat, AUTOMATIC) LeBPCR_e_HVDcChargeTypeStat, VAR
    (boolean, AUTOMATIC) BPCR_b_HVDcChargeTypeStatFA)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_HVDcChargeTypeStatFA_out;
    TeBPCR_e_HVDcChargeTypeStat rtb_LeBPCR_e_HVDcChargeTypeStat_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_e_HV_DcChargeTypeStat' */
    /* Chart: '<S151>/PokeBPCR_e_HV_DcChargeTypeStatChrt' incorporates:
     *  SignalConversion generated from: '<S151>/BPCR_b_HVDcChargeTypeStatFA'
     *  SignalConversion generated from: '<S151>/LeBPCR_e_HVDcChargeTypeStat'
     */
    /* Gateway: PokeBPCR_e_HV_DcChargeTypeStat/PokeBPCR_e_HV_DcChargeTypeStatChrt */
    /* During: PokeBPCR_e_HV_DcChargeTypeStat/PokeBPCR_e_HV_DcChargeTypeStatChrt */
    /* Entry Internal: PokeBPCR_e_HV_DcChargeTypeStat/PokeBPCR_e_HV_DcChargeTypeStatChrt */
    /* Transition: '<S793>:2' */
    if (!BPCR_b_HVDcChargeTypeStatFA)
    {
        /* Transition: '<S793>:3' */
        /* Transition: '<S793>:15' */
        rtb_LeBPCR_e_HVDcChargeTypeStat_out = LeBPCR_e_HVDcChargeTypeStat;
        rtb_LeBPCR_b_HVDcChargeTypeStatFA_out = false;

        /* Transition: '<S793>:18' */
    }
    else
    {
        /* Transition: '<S793>:4' */
        rtb_LeBPCR_e_HVDcChargeTypeStat_out = CeBPCR_e_HVDcChargeStat_SNA;
        rtb_LeBPCR_b_HVDcChargeTypeStatFA_out = true;
    }

    /* End of Chart: '<S151>/PokeBPCR_e_HV_DcChargeTypeStatChrt' */

    /* Outport: '<Root>/VeBPCR_e_HVDcChargeTypeStat' incorporates:
     *  SignalConversion generated from: '<S151>/VeBPCR_e_HVDcChargeTypeStat'
     */
    (void)Rte_Write_VeBPCR_e_HVDcChargeTypeStat_Value
        (rtb_LeBPCR_e_HVDcChargeTypeStat_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_e_HV_DcChargeTypeStat' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_e_HV_TracBatCntctrConfig(VAR
    (TeBPCR_e_HVTracBatCntctrConfig, AUTOMATIC) LeBPCR_e_HVTracBatCntctrConfig,
    VAR(boolean, AUTOMATIC) LeBPCR_b_HVTracBatCntctrConfigFA)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_HVTracBatCntctrConfigFA_out;
    TeBPCR_e_HVTracBatCntctrConfig rtb_LeBPCR_e_HVTracBatCntctrConfig_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_e_HV_TracBatCntctrConfig' */
    /* Chart: '<S152>/PokeBPCR_e_HV_TracBatCntctrConfigChrt' incorporates:
     *  SignalConversion generated from: '<S152>/LeBPCR_b_HVTracBatCntctrConfigFA'
     *  SignalConversion generated from: '<S152>/LeBPCR_e_HVTracBatCntctrConfig'
     */
    /* Gateway: PokeBPCR_e_HV_TracBatCntctrConfig/PokeBPCR_e_HV_TracBatCntctrConfigChrt */
    /* During: PokeBPCR_e_HV_TracBatCntctrConfig/PokeBPCR_e_HV_TracBatCntctrConfigChrt */
    /* Entry Internal: PokeBPCR_e_HV_TracBatCntctrConfig/PokeBPCR_e_HV_TracBatCntctrConfigChrt */
    /* Transition: '<S794>:2' */
    if (!LeBPCR_b_HVTracBatCntctrConfigFA)
    {
        /* Transition: '<S794>:3' */
        /* Transition: '<S794>:15' */
        rtb_LeBPCR_e_HVTracBatCntctrConfig_out = LeBPCR_e_HVTracBatCntctrConfig;
        rtb_LeBPCR_b_HVTracBatCntctrConfigFA_out = false;

        /* Transition: '<S794>:18' */
    }
    else
    {
        /* Transition: '<S794>:4' */
        rtb_LeBPCR_e_HVTracBatCntctrConfig_out =
            CeBPCR_e_HVTracBatConfig_Closed_SNA;
        rtb_LeBPCR_b_HVTracBatCntctrConfigFA_out = true;
    }

    /* End of Chart: '<S152>/PokeBPCR_e_HV_TracBatCntctrConfigChrt' */

    /* Outport: '<Root>/VeBPCR_e_HVTracBatCntctrConfig' incorporates:
     *  SignalConversion generated from: '<S152>/VeBPCR_e_HVTracBatCntctrConfig'
     */
    (void)Rte_Write_VeBPCR_e_HVTracBatCntctrConfig_Value
        (rtb_LeBPCR_e_HVTracBatCntctrConfig_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_e_HV_TracBatCntctrConfig' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_e_PowerModeState(VAR(sint16, AUTOMATIC)
    LeBPCR_e_PowerModeState)
{
    /* local block i/o variables */
    sint16 rtb_LeBPCR_e_PowerModeState_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_e_PowerModeState' */
    /* Chart: '<S153>/PokeBPCR_e_PowerModeStateChrt' incorporates:
     *  SignalConversion generated from: '<S153>/LeBPCR_e_PowerModeState'
     */
    /* Gateway: PokeBPCR_e_PowerModeState/PokeBPCR_e_PowerModeStateChrt */
    /* During: PokeBPCR_e_PowerModeState/PokeBPCR_e_PowerModeStateChrt */
    /* Entry Internal: PokeBPCR_e_PowerModeState/PokeBPCR_e_PowerModeStateChrt */
    /* Transition: '<S795>:2' */
    rtb_LeBPCR_e_PowerModeState_out = LeBPCR_e_PowerModeState;

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_e_PowerModeState' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_e_PwrtrnHV_IsolStat(VAR
    (TeHMIR_e_PwrtrnHV_IsolStat, AUTOMATIC) LeBPCR_e_PwrtrnHV_IsolStat)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_e_PwrtrnHV_IsolStat' */
    /* Outport: '<Root>/VeBPCR_e_PwrtrnHV_IsolStat' incorporates:
     *  SignalConversion generated from: '<S154>/VeBPCR_e_PwrtrnHV_IsolStat'
     *  SignalConversion generated from: '<S154>/LeBPCR_e_PwrtrnHV_IsolStat'
     */
    /* Gateway: PokeBPCR_e_PwrtrnHV_IsolStat/PokeBPCR_e_PwrtrnHV_IsolStatChrt */
    /* During: PokeBPCR_e_PwrtrnHV_IsolStat/PokeBPCR_e_PwrtrnHV_IsolStatChrt */
    /* Entry Internal: PokeBPCR_e_PwrtrnHV_IsolStat/PokeBPCR_e_PwrtrnHV_IsolStatChrt */
    /* Transition: '<S796>:2' */
    (void)Rte_Write_VeBPCR_e_PwrtrnHV_IsolStat_Value(LeBPCR_e_PwrtrnHV_IsolStat);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_e_PwrtrnHV_IsolStat' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_e_ThrmlRnawy_Warn(VAR(sint16, AUTOMATIC)
    LeBPCR_e_ThrmlRnawy_Warn, VAR(boolean, AUTOMATIC) LeBPCR_b_ThrmlRnawy_WarnFA)
{
    boolean rtb_LeBPCR_b_ThrmlRnawy_WarnFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_e_ThrmlRnawy_Warn' */
    /* Chart: '<S155>/PokeBPCR_e_ThrmlRnawy_WarnChrt' incorporates:
     *  Constant: '<S797>/Calib'
     *  SignalConversion generated from: '<S155>/LeBPCR_b_ThrmlRnawy_WarnFA'
     *  SignalConversion generated from: '<S155>/LeBPCR_e_ThrmlRnawy_Warn'
     */
    /* Gateway: PokeBPCR_e_ThrmlRnawy_Warn/PokeBPCR_e_ThrmlRnawy_WarnChrt */
    /* During: PokeBPCR_e_ThrmlRnawy_Warn/PokeBPCR_e_ThrmlRnawy_WarnChrt */
    /* Entry Internal: PokeBPCR_e_ThrmlRnawy_Warn/PokeBPCR_e_ThrmlRnawy_WarnChrt */
    /* Transition: '<S798>:2' */
    if (!LeBPCR_b_ThrmlRnawy_WarnFA)
    {
        /* Transition: '<S798>:3' */
        /* Transition: '<S798>:15' */
        BPCR_ac_B.LeBPCR_e_ThrmlRnawy_Warn_out = HaBPCR_e_ThrmlRnawy_Warn_Map
            [(LeBPCR_e_ThrmlRnawy_Warn)];
        rtb_LeBPCR_b_ThrmlRnawy_WarnFA_out = false;

        /* Transition: '<S798>:18' */
    }
    else
    {
        /* Transition: '<S798>:4' */
        rtb_LeBPCR_b_ThrmlRnawy_WarnFA_out = true;
    }

    /* End of Chart: '<S155>/PokeBPCR_e_ThrmlRnawy_WarnChrt' */

    /* Merge: '<Root>/Merge_77' incorporates:
     *  SignalConversion generated from: '<S155>/VeBPCR_b_ThrmlRnawy_WarnFA_write'
     * */
    Rte_IrvWrite_PokeBPCR_e_ThrmlRnawy_Warn_HVBat_ThrmlRnawy_WarnFA_Init_write_IRV
        (rtb_LeBPCR_b_ThrmlRnawy_WarnFA_out);

    /* Merge: '<Root>/Merge_76' incorporates:
     *  SignalConversion generated from: '<S155>/VeBPCR_e_ThrmlRnawy_Warn_write'
     * */
    Rte_IrvWrite_PokeBPCR_e_ThrmlRnawy_Warn_HVBat_ThrmlRnawy_Warn_Init_write_IRV
        (BPCR_ac_B.LeBPCR_e_ThrmlRnawy_Warn_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_e_ThrmlRnawy_Warn' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_i_DC_Isolation_Sts_M182(VAR(sint16, AUTOMATIC)
    LeBPCR_i_DC_Isolation_Sts_M182)
{
    boolean rtb_LeBPCR_b_DC_Isolation_Sts_M182_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_i_DC_Isolation_Sts_M182' */
    /* Chart: '<S156>/PokeBPCR_i_DC_Isolation_Sts_M182Chrt' incorporates:
     *  Constant: '<S799>/Calib'
     *  SignalConversion generated from: '<S156>/LeBPCR_i_DC_Isolation_Sts_M182'
     */
    /* Gateway: PokeBPCR_i_DC_Isolation_Sts_M182/PokeBPCR_i_DC_Isolation_Sts_M182Chrt */
    /* During: PokeBPCR_i_DC_Isolation_Sts_M182/PokeBPCR_i_DC_Isolation_Sts_M182Chrt */
    /* Entry Internal: PokeBPCR_i_DC_Isolation_Sts_M182/PokeBPCR_i_DC_Isolation_Sts_M182Chrt */
    /* Transition: '<S800>:2' */
    if (LeBPCR_i_DC_Isolation_Sts_M182 == KeBPCR_i_DC_IsolationStsDis)
    {
        /* Transition: '<S800>:24' */
        /* Transition: '<S800>:22' */
        rtb_LeBPCR_b_DC_Isolation_Sts_M182_out = true;
    }
    else
    {
        /* Transition: '<S800>:23' */
        rtb_LeBPCR_b_DC_Isolation_Sts_M182_out = false;

        /* Transition: '<S800>:21' */
    }

    /* End of Chart: '<S156>/PokeBPCR_i_DC_Isolation_Sts_M182Chrt' */

    /* Outport: '<Root>/VeBPCR_b_DC_Isolation_Sts' incorporates:
     *  SignalConversion generated from: '<S156>/VeBPCR_b_DC_Isolation_Sts_M182'
     */
    (void)Rte_Write_VeBPCR_b_DC_Isolation_Sts_Value
        (rtb_LeBPCR_b_DC_Isolation_Sts_M182_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_i_DC_Isolation_Sts_M182' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_q_FullAmpHrCap(VAR(float32, AUTOMATIC)
    LeBPCR_q_FullAmpHrCap, VAR(boolean, AUTOMATIC) LeBPCR_b_FullAmpHrCapFA)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_FullAmpHrCapFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_q_FullAmpHrCap' */
    /* Chart: '<S157>/PokeBPCR_q_FullAmpHrCapChrt' incorporates:
     *  SignalConversion generated from: '<S157>/LeBPCR_b_FullAmpHrCapFA'
     *  SignalConversion generated from: '<S157>/LeBPCR_q_FullAmpHrCap'
     */
    /* Gateway: PokeBPCR_q_FullAmpHrCap/PokeBPCR_q_FullAmpHrCapChrt */
    /* During: PokeBPCR_q_FullAmpHrCap/PokeBPCR_q_FullAmpHrCapChrt */
    /* Entry Internal: PokeBPCR_q_FullAmpHrCap/PokeBPCR_q_FullAmpHrCapChrt */
    /* Transition: '<S801>:2' */
    if (!LeBPCR_b_FullAmpHrCapFA)
    {
        /* Transition: '<S801>:3' */
        /* Transition: '<S801>:15' */
        BPCR_ac_B.LeBPCR_q_FullAmpHrCap_out = LeBPCR_q_FullAmpHrCap;
        rtb_LeBPCR_b_FullAmpHrCapFA_out = false;

        /* Transition: '<S801>:18' */
    }
    else
    {
        /* Transition: '<S801>:4' */
        rtb_LeBPCR_b_FullAmpHrCapFA_out = true;
    }

    /* End of Chart: '<S157>/PokeBPCR_q_FullAmpHrCapChrt' */

    /* Outport: '<Root>/VeBPCR_q_FullAmpHrCap' incorporates:
     *  SignalConversion generated from: '<S157>/VeBPCR_q_FullAmpHrCap'
     */
    (void)Rte_Write_VeBPCR_q_FullAmpHrCap_Value
        (BPCR_ac_B.LeBPCR_q_FullAmpHrCap_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_q_FullAmpHrCap' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_q_RemainingAmpHrCap(VAR(float32, AUTOMATIC)
    LeBPCR_q_RemainingAmpHrCap, VAR(boolean, AUTOMATIC)
    LeBPCR_b_RemainingAmpHrCapFA)
{
    boolean rtb_LeBPCR_b_RemainingAmpHrCapFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_q_RemainingAmpHrCap' */
    /* Chart: '<S158>/PokeBPCR_q_RemainingAmpHrCapChrt' incorporates:
     *  SignalConversion generated from: '<S158>/LeBPCR_b_RemainingAmpHrCapFA'
     *  SignalConversion generated from: '<S158>/LeBPCR_q_RemainingAmpHrCap'
     */
    /* Gateway: PokeBPCR_q_RemainingAmpHrCap/PokeBPCR_q_RemainingAmpHrCapChrt */
    /* During: PokeBPCR_q_RemainingAmpHrCap/PokeBPCR_q_RemainingAmpHrCapChrt */
    /* Entry Internal: PokeBPCR_q_RemainingAmpHrCap/PokeBPCR_q_RemainingAmpHrCapChrt */
    /* Transition: '<S802>:2' */
    if (!LeBPCR_b_RemainingAmpHrCapFA)
    {
        /* Transition: '<S802>:3' */
        /* Transition: '<S802>:15' */
        BPCR_ac_B.LeBPCR_q_RemainingAmpHrCap_out = LeBPCR_q_RemainingAmpHrCap;
        rtb_LeBPCR_b_RemainingAmpHrCapFA_out = false;

        /* Transition: '<S802>:18' */
    }
    else
    {
        /* Transition: '<S802>:4' */
        rtb_LeBPCR_b_RemainingAmpHrCapFA_out = true;
    }

    /* End of Chart: '<S158>/PokeBPCR_q_RemainingAmpHrCapChrt' */

    /* Outport: '<Root>/VeBPCR_b_RemainingAmpHrCapFA' incorporates:
     *  SignalConversion generated from: '<S158>/VeBPCR_b_RemainingAmpHrCapFA'
     */
    (void)Rte_Write_VeBPCR_b_RemainingAmpHrCapFA_Value
        (rtb_LeBPCR_b_RemainingAmpHrCapFA_out);

    /* Outport: '<Root>/VeBPCR_q_RemainingAmpHrCap' incorporates:
     *  SignalConversion generated from: '<S158>/VeBPCR_q_RemainingAmpHrCap'
     */
    (void)Rte_Write_VeBPCR_q_RemainingAmpHrCap_Value
        (BPCR_ac_B.LeBPCR_q_RemainingAmpHrCap_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_q_RemainingAmpHrCap' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_t_BSW_PWMCntctrTmr(VAR(uint32, AUTOMATIC)
    LeBPCR_t_BSW_PWMCntctrTmr)
{

#if !Rte_SysCon_Variant_BPCR_3

    UNUSED_PARAMETER(LeBPCR_t_BSW_PWMCntctrTmr);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_t_BSW_PWMCntctrTmr' */
    /* Chart: '<S159>/PokeBPCR_t_BSW_PWMCntctrTmrChrt' */
    /* Gateway: PokeBPCR_t_BSW_PWMCntctrTmr/PokeBPCR_t_BSW_PWMCntctrTmrChrt */
    /* During: PokeBPCR_t_BSW_PWMCntctrTmr/PokeBPCR_t_BSW_PWMCntctrTmrChrt */
    /* Entry Internal: PokeBPCR_t_BSW_PWMCntctrTmr/PokeBPCR_t_BSW_PWMCntctrTmrChrt */
    /* Transition: '<S803>:2' */
    /* Transition: '<S803>:21' */
    if (((sint32)BPCR_ac_B.LeBPCR_Cnt_BSW_PWMTmrRcvd) > 5)
    {
        /* Transition: '<S803>:23' */
        /* Transition: '<S803>:25' */
        BPCR_ac_B.LeBPCR_Cnt_BSW_PWMTmrRcvd = 0U;

        /* Transition: '<S803>:27' */
    }
    else
    {
        /* Transition: '<S803>:31' */
        BPCR_ac_B.LeBPCR_Cnt_BSW_PWMTmrRcvd = (uint8)((sint32)(((sint32)
            BPCR_ac_B.LeBPCR_Cnt_BSW_PWMTmrRcvd) + 1));
    }

    /* End of Chart: '<S159>/PokeBPCR_t_BSW_PWMCntctrTmrChrt' */

    /* Merge: '<Root>/Merge_66' incorporates:
     *  SignalConversion generated from: '<S159>/VeBPCR_Cnt_BSW_PWMTmrRcvd_write'
     * */
    /* Transition: '<S803>:32' */
    Rte_IrvWrite_PokeBPCR_t_BSW_PWMCntctrTmr_BSW_PWMTmrRcvd_write_IRV
        (BPCR_ac_B.LeBPCR_Cnt_BSW_PWMTmrRcvd);

    /* SignalConversion generated from: '<S159>/VeBPCR_t_BSW_PWMCntctrTmr_write' */
#if Rte_SysCon_Variant_BPCR_3

    /* Merge: '<Root>/Merge_81' */
    Rte_IrvWrite_PokeBPCR_t_BSW_PWMCntctrTmr_BSW_PWMCntctrTmr_write_IRV
        (LeBPCR_t_BSW_PWMCntctrTmr);

#endif

    /* End of SignalConversion generated from: '<S159>/VeBPCR_t_BSW_PWMCntctrTmr_write' */
    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_t_BSW_PWMCntctrTmr' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_t_HVBatRealTimeClock(VAR(uint32, AUTOMATIC)
    LeBPCR_t_HVBatRealTimeClock, VAR(boolean, AUTOMATIC)
    LeBPCR_b_HVBatRealTimeClockFA)
{
    boolean rtb_LeBPCR_b_HVBatRealTimeClockFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_t_HVBatRealTimeClock' */
    /* Chart: '<S160>/PokeBPCR_t_HVBatRealTimeClockChrt' incorporates:
     *  SignalConversion generated from: '<S160>/LeBPCR_b_HVBatRealTimeClockFA'
     *  SignalConversion generated from: '<S160>/LeBPCR_t_HVBatRealTimeClock'
     */
    /* Gateway: PokeBPCR_t_HVBatRealTimeClock/PokeBPCR_t_HVBatRealTimeClockChrt */
    /* During: PokeBPCR_t_HVBatRealTimeClock/PokeBPCR_t_HVBatRealTimeClockChrt */
    /* Entry Internal: PokeBPCR_t_HVBatRealTimeClock/PokeBPCR_t_HVBatRealTimeClockChrt */
    /* Transition: '<S804>:2' */
    if (!LeBPCR_b_HVBatRealTimeClockFA)
    {
        /* Transition: '<S804>:3' */
        /* Transition: '<S804>:15' */
        BPCR_ac_B.LeBPCR_t_HVBatRealTimeClock_out = LeBPCR_t_HVBatRealTimeClock;
        rtb_LeBPCR_b_HVBatRealTimeClockFA_out = false;

        /* Transition: '<S804>:18' */
    }
    else
    {
        /* Transition: '<S804>:4' */
        rtb_LeBPCR_b_HVBatRealTimeClockFA_out = true;
    }

    /* End of Chart: '<S160>/PokeBPCR_t_HVBatRealTimeClockChrt' */

    /* Outport: '<Root>/VeBPCR_b_HVBatRealTimeClock_FA' incorporates:
     *  SignalConversion generated from: '<S160>/VeBPCR_b_HVBatRealTimeClockFA'
     */
    (void)Rte_Write_VeBPCR_b_HVBatRealTimeClock_FA_Value
        (rtb_LeBPCR_b_HVBatRealTimeClockFA_out);

    /* Outport: '<Root>/VeBPCR_t_HVBatRealTimeClock' incorporates:
     *  SignalConversion generated from: '<S160>/VeBPCR_t_HVBatRealTimeClock'
     */
    (void)Rte_Write_VeBPCR_t_HVBatRealTimeClock_Value
        (BPCR_ac_B.LeBPCR_t_HVBatRealTimeClock_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_t_HVBatRealTimeClock' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_t_HVBatSleepTime(VAR(float32, AUTOMATIC)
    LeBPCR_t_HVBatSleepTime)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_t_HVBatSleepTime' */
    /* Outport: '<Root>/VeBPCR_t_HVBatSleepTime' incorporates:
     *  SignalConversion generated from: '<S161>/VeBPCR_t_HVBatSleepTime'
     *  SignalConversion generated from: '<S161>/LeBPCR_t_HVBatSleepTime'
     */
    /* Gateway: PokeBPCR_t_HVBatSleepTime/PokeBPCR_t_HVBatSleepTimeChrt */
    /* During: PokeBPCR_t_HVBatSleepTime/PokeBPCR_t_HVBatSleepTimeChrt */
    /* Entry Internal: PokeBPCR_t_HVBatSleepTime/PokeBPCR_t_HVBatSleepTimeChrt */
    /* Transition: '<S805>:2' */
    (void)Rte_Write_VeBPCR_t_HVBatSleepTime_Value(LeBPCR_t_HVBatSleepTime);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_t_HVBatSleepTime' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_t_HVBattCntctrOpnTm(VAR(float32, AUTOMATIC)
    LeBPCR_t_HVBattCntctrOpnTm, VAR(boolean, AUTOMATIC)
    LeBPCR_b_HVBattCntctrOpnTmFA)
{
    /* local block i/o variables */
    boolean rtb_LeBPCR_b_HVBattCntctrOpnTmFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_t_HVBattCntctrOpnTm' */
    /* Chart: '<S162>/PokeBPCR_t_HVBattCntctrOpnTmChrt' incorporates:
     *  SignalConversion generated from: '<S162>/LeBPCR_b_HVBattCntctrOpnTmFA'
     *  SignalConversion generated from: '<S162>/LeBPCR_t_HVBattCntctrOpnTm'
     */
    /* Gateway: PokeBPCR_t_HVBattCntctrOpnTm/PokeBPCR_t_HVBattCntctrOpnTmChrt */
    /* During: PokeBPCR_t_HVBattCntctrOpnTm/PokeBPCR_t_HVBattCntctrOpnTmChrt */
    /* Entry Internal: PokeBPCR_t_HVBattCntctrOpnTm/PokeBPCR_t_HVBattCntctrOpnTmChrt */
    /* Transition: '<S806>:2' */
    if (!LeBPCR_b_HVBattCntctrOpnTmFA)
    {
        /* Transition: '<S806>:3' */
        /* Transition: '<S806>:15' */
        BPCR_ac_B.LeBPCR_t_HVBattCntctrOpnTm_out = LeBPCR_t_HVBattCntctrOpnTm;
        rtb_LeBPCR_b_HVBattCntctrOpnTmFA_out = false;

        /* Transition: '<S806>:18' */
    }
    else
    {
        /* Transition: '<S806>:4' */
        rtb_LeBPCR_b_HVBattCntctrOpnTmFA_out = true;
    }

    /* End of Chart: '<S162>/PokeBPCR_t_HVBattCntctrOpnTmChrt' */

    /* Outport: '<Root>/VeBPCR_t_HVBattCntctrOpnTm' incorporates:
     *  SignalConversion generated from: '<S162>/VeBPCR_t_HVBattCntctrOpnTm'
     */
    (void)Rte_Write_VeBPCR_t_HVBattCntctrOpnTm_Value
        (BPCR_ac_B.LeBPCR_t_HVBattCntctrOpnTm_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_t_HVBattCntctrOpnTm' */
}

/* Output function */
FUNC(void, BPCR_CODE) PokeBPCR_t_PrechrgPnltyTimer(VAR(float32, AUTOMATIC)
    LeBPCR_t_PrechrgPnltyTimer)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPCR_t_PrechrgPnltyTimer' */
    /* Outport: '<Root>/VeBPCR_t_PrechrgPnltyTimer' incorporates:
     *  SignalConversion generated from: '<S163>/VeBPCR_t_PrechrgPnltyTimer'
     *  SignalConversion generated from: '<S163>/LeBPCR_t_PrechrgPnltyTimer'
     */
    /* Gateway: PokeBPCR_t_PrechrgPnltyTimer/PokeBPCR_t_PrechrgPnltyTimerChrt */
    /* During: PokeBPCR_t_PrechrgPnltyTimer/PokeBPCR_t_PrechrgPnltyTimerChrt */
    /* Entry Internal: PokeBPCR_t_PrechrgPnltyTimer/PokeBPCR_t_PrechrgPnltyTimerChrt */
    /* Transition: '<S807>:2' */
    (void)Rte_Write_VeBPCR_t_PrechrgPnltyTimer_Value(LeBPCR_t_PrechrgPnltyTimer);

    /* End of Outputs for SubSystem: '<Root>/PokeBPCR_t_PrechrgPnltyTimer' */
}

/* Output function */
FUNC(void, BPCR_CODE) BPCR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/BPCR_PwrOff'
     */
    /* Outport: '<Root>/NeBPCR_T_BatModTmp_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NeBPCR_T_BatModTmp'
     */
    (void)Rte_Write_NeBPCR_T_BatModTmp_NeBPCR_T_BatModTmp
        (BPCR_ac_DW.NeBPCR_T_BatModTmp);

    /* Outport: '<Root>/DeBPCR_P_HV_BatDschrgPwrST_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/DeBPCR_P_HV_BatDschrgPwrST'
     */
    (void)Rte_Write_DeBPCR_P_HV_BatDschrgPwrST_DeBPCR_P_HV_BatDschrgPwrST
        (BPCR_ac_DW.DeBPCR_P_HV_BatDschrgPwrST);

    /* Outport: '<Root>/NeBPCR_b_HV_BatRdy_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NeBPCR_b_HV_BatRdy'
     */
    (void)Rte_Write_NeBPCR_b_HV_BatRdy_NeBPCR_b_HV_BatRdy
        (BPCR_ac_DW.NeBPCR_b_HV_BatRdy);

    /* Outport: '<Root>/NeBPCR_b_HV_BatPackSOC_FA_Ovrd_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NeBPCR_b_HV_BatPackSOC_FA_Ovrd'
     */
    (void)
        Rte_Write_NeBPCR_b_HV_BatPackSOC_FA_Ovrd_NeBPCR_b_HV_BatPackSOC_FA_Ovrd
        (BPCR_ac_DW.NeBPCR_b_HV_BatPackSOC_FA_Ovrd);

    /* Outport: '<Root>/DeBPCR_Pct_HV_BatSOC_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/DeBPCR_Pct_HV_BatSOC_DS'
     */
    (void)Rte_Write_DeBPCR_Pct_HV_BatSOC_DS_DeBPCR_Pct_HV_BatSOC_DS
        (BPCR_ac_DW.DeBPCR_Pct_HV_BatSOC_DS);

    /* Outport: '<Root>/DeBPCR_P_HV_BatChrgPwrST_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/DeBPCR_P_HV_BatChrgPwrST'
     */
    (void)Rte_Write_DeBPCR_P_HV_BatChrgPwrST_DeBPCR_P_HV_BatChrgPwrST
        (BPCR_ac_DW.DeBPCR_P_HV_BatChrgPwrST);

    /* Outport: '<Root>/DeBPCR_P_HV_BatChrgPwrET_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/DeBPCR_P_HV_BatChrgPwrET'
     */
    (void)Rte_Write_DeBPCR_P_HV_BatChrgPwrET_DeBPCR_P_HV_BatChrgPwrET
        (BPCR_ac_DW.DeBPCR_P_HV_BatChrgPwrET);

    /* Outport: '<Root>/DeBPCR_P_HV_BatChrgPwrLT_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/DeBPCR_P_HV_BatChrgPwrLT'
     */
    (void)Rte_Write_DeBPCR_P_HV_BatChrgPwrLT_DeBPCR_P_HV_BatChrgPwrLT
        (BPCR_ac_DW.DeBPCR_P_HV_BatChrgPwrLT);

    /* Outport: '<Root>/DeBPCR_P_HV_BatDschrgPwrLT_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/DeBPCR_P_HV_BatDschrgPwrLT'
     */
    (void)Rte_Write_DeBPCR_P_HV_BatDschrgPwrLT_DeBPCR_P_HV_BatDschrgPwrLT
        (BPCR_ac_DW.DeBPCR_P_HV_BatDschrgPwrLT);

    /* Outport: '<Root>/DeBPCR_P_HV_BatDschrgPwrET_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/DeBPCR_P_HV_BatDschrgPwrET'
     */
    (void)Rte_Write_DeBPCR_P_HV_BatDschrgPwrET_DeBPCR_P_HV_BatDschrgPwrET
        (BPCR_ac_DW.DeBPCR_P_HV_BatDschrgPwrET);

    /* Outport: '<Root>/NeBPCR_Cnt_PWMCntctrStMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NeBPCR_Cnt_PWMCntctrStMFOP'
     */
    (void)Rte_Write_NeBPCR_Cnt_PWMCntctrStMFOP_NeBPCR_Cnt_PWMCntctrStMFOP
        (BPCR_ac_DW.NeBPCR_Cnt_PWMCntctrStMFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, BPCR_CODE) BPCR_PwrOn(void)
{
    float32 rtb_TmpSignalConversionAtDeBPCR_P_HV_B_a;
    float32 rtb_TmpSignalConversionAtDeBPCR_P_HV_B_b;
    float32 rtb_TmpSignalConversionAtDeBPCR_P_HV_B_j;
    float32 rtb_TmpSignalConversionAtDeBPCR_P_HV_B_n;
    float32 rtb_TmpSignalConversionAtDeBPCR_P_HV_Bat;
    float32 rtb_TmpSignalConversionAtDeBPCR_P_HV__ou;
    float32 rtb_TmpSignalConversionAtDeBPCR_Pct_HV_B;
    float32 rtb_TmpSignalConversionAtNeBPCR_T_BatMod;
    float32 tmpRead;
    float32 tmpRead_0;

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/BPCR_PwrOn'
     */
    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/DSM_Init'
     */
    /* DataStoreWrite: '<S540>/NeBPCR_Cnt_PWMCntctrStMFOP' incorporates:
     *  Inport: '<Root>/NeBPCR_Cnt_PWMCntctrStMFOP_PM_In'
     */
    (void)Rte_Read_NeBPCR_Cnt_PWMCntctrStMFOP_Rx_NeBPCR_Cnt_PWMCntctrStMFOP
        (&BPCR_ac_DW.NeBPCR_Cnt_PWMCntctrStMFOP);

    /* DataStoreWrite: '<S540>/NeBPCR_b_HV_BatPackSOC_FA_Ovrd' incorporates:
     *  Inport: '<Root>/NeBPCR_b_HV_BatPackSOC_FA_Ovrd_PM_In'
     */
    (void)
        Rte_Read_NeBPCR_b_HV_BatPackSOC_FA_Ovrd_Rx_NeBPCR_b_HV_BatPackSOC_FA_Ovrd
        (&BPCR_ac_DW.NeBPCR_b_HV_BatPackSOC_FA_Ovrd);

    /* DataStoreWrite: '<S540>/NeBPCR_b_HV_BatRdy' incorporates:
     *  Inport: '<Root>/NeBPCR_b_HV_BatRdy_PM_In'
     */
    (void)Rte_Read_NeBPCR_b_HV_BatRdy_Rx_NeBPCR_b_HV_BatRdy
        (&BPCR_ac_DW.NeBPCR_b_HV_BatRdy);

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* Inport: '<Root>/VeHVTR_U_HV_BatVoltModMinArb' */
    (void)Rte_Read_VeHVTR_U_HV_BatVoltModMinArb_Value(&tmpRead_0);

    /* Inport: '<Root>/VeHVTR_U_HV_BatVoltModMaxArb' */
    (void)Rte_Read_VeHVTR_U_HV_BatVoltModMaxArb_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/BPCR_PwrOn'
     */
    /* SignalConversion generated from: '<S5>/DeBPCR_P_HV_BatDschrgPwrST_PM_In' incorporates:
     *  Inport: '<Root>/DeBPCR_P_HV_BatDschrgPwrST_PM_In'
     */
    (void)Rte_Read_DeBPCR_P_HV_BatDschrgPwrST_Rx_DeBPCR_P_HV_BatDschrgPwrST
        (&rtb_TmpSignalConversionAtDeBPCR_P_HV_Bat);

    /* SignalConversion generated from: '<S5>/DeBPCR_P_HV_BatChrgPwrST_PM_In' incorporates:
     *  Inport: '<Root>/DeBPCR_P_HV_BatChrgPwrST_PM_In'
     */
    (void)Rte_Read_DeBPCR_P_HV_BatChrgPwrST_Rx_DeBPCR_P_HV_BatChrgPwrST
        (&rtb_TmpSignalConversionAtDeBPCR_P_HV_B_j);

    /* SignalConversion generated from: '<S5>/DeBPCR_P_HV_BatChrgPwrET_PM_In' incorporates:
     *  Inport: '<Root>/DeBPCR_P_HV_BatChrgPwrET_PM_In'
     */
    (void)Rte_Read_DeBPCR_P_HV_BatChrgPwrET_Rx_DeBPCR_P_HV_BatChrgPwrET
        (&rtb_TmpSignalConversionAtDeBPCR_P_HV_B_n);

    /* SignalConversion generated from: '<S5>/DeBPCR_P_HV_BatChrgPwrLT_PM_In' incorporates:
     *  Inport: '<Root>/DeBPCR_P_HV_BatChrgPwrLT_PM_In'
     */
    (void)Rte_Read_DeBPCR_P_HV_BatChrgPwrLT_Rx_DeBPCR_P_HV_BatChrgPwrLT
        (&rtb_TmpSignalConversionAtDeBPCR_P_HV_B_b);

    /* SignalConversion generated from: '<S5>/DeBPCR_P_HV_BatDschrgPwrLT_PM_In' incorporates:
     *  Inport: '<Root>/DeBPCR_P_HV_BatDschrgPwrLT_PM_In'
     */
    (void)Rte_Read_DeBPCR_P_HV_BatDschrgPwrLT_Rx_DeBPCR_P_HV_BatDschrgPwrLT
        (&rtb_TmpSignalConversionAtDeBPCR_P_HV__ou);

    /* SignalConversion generated from: '<S5>/DeBPCR_P_HV_BatDschrgPwrET_PM_In' incorporates:
     *  Inport: '<Root>/DeBPCR_P_HV_BatDschrgPwrET_PM_In'
     */
    (void)Rte_Read_DeBPCR_P_HV_BatDschrgPwrET_Rx_DeBPCR_P_HV_BatDschrgPwrET
        (&rtb_TmpSignalConversionAtDeBPCR_P_HV_B_a);

    /* SignalConversion generated from: '<S5>/DeBPCR_Pct_HV_BatSOC_DS_PM_In' incorporates:
     *  Inport: '<Root>/DeBPCR_Pct_HV_BatSOC_DS_PM_In'
     */
    (void)Rte_Read_DeBPCR_Pct_HV_BatSOC_DS_Rx_DeBPCR_Pct_HV_BatSOC_DS
        (&rtb_TmpSignalConversionAtDeBPCR_Pct_HV_B);

    /* SignalConversion generated from: '<S5>/NeBPCR_T_BatModTmp_PM_In' incorporates:
     *  Inport: '<Root>/NeBPCR_T_BatModTmp_PM_In'
     */
    (void)Rte_Read_NeBPCR_T_BatModTmp_Rx_NeBPCR_T_BatModTmp
        (&rtb_TmpSignalConversionAtNeBPCR_T_BatMod);

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/DSM_Init'
     */
    /* Switch: '<S540>/Switch2' incorporates:
     *  Constant: '<S540>/Constant2'
     *  Constant: '<S555>/Calib'
     *  DataStoreWrite: '<S540>/DeBPCR_P_HV_BatDschrgPwrST'
     *  RelationalOperator: '<S540>/Relational Operator2'
     */
    if (rtb_TmpSignalConversionAtDeBPCR_P_HV_Bat > (-99.0F))
    {
        BPCR_ac_DW.DeBPCR_P_HV_BatDschrgPwrST =
            rtb_TmpSignalConversionAtDeBPCR_P_HV_Bat;
    }
    else
    {
        BPCR_ac_DW.DeBPCR_P_HV_BatDschrgPwrST = KeBPCR_P_HV_BatDschrgPwrST_Dflt;
    }

    /* End of Switch: '<S540>/Switch2' */

    /* Switch: '<S540>/Switch3' incorporates:
     *  Constant: '<S540>/Constant3'
     *  Constant: '<S552>/Calib'
     *  DataStoreWrite: '<S540>/DeBPCR_P_HV_BatChrgPwrST'
     *  RelationalOperator: '<S540>/Relational Operator3'
     */
    if (rtb_TmpSignalConversionAtDeBPCR_P_HV_B_j > (-99.0F))
    {
        BPCR_ac_DW.DeBPCR_P_HV_BatChrgPwrST =
            rtb_TmpSignalConversionAtDeBPCR_P_HV_B_j;
    }
    else
    {
        BPCR_ac_DW.DeBPCR_P_HV_BatChrgPwrST = KeBPCR_P_HV_BatChrgPwrST_Dflt;
    }

    /* End of Switch: '<S540>/Switch3' */

    /* Switch: '<S540>/Switch5' incorporates:
     *  Constant: '<S540>/Constant5'
     *  Constant: '<S550>/Calib'
     *  DataStoreWrite: '<S540>/DeBPCR_P_HV_BatChrgPwrET'
     *  RelationalOperator: '<S540>/Relational Operator5'
     */
    if (rtb_TmpSignalConversionAtDeBPCR_P_HV_B_n > (-99.0F))
    {
        BPCR_ac_DW.DeBPCR_P_HV_BatChrgPwrET =
            rtb_TmpSignalConversionAtDeBPCR_P_HV_B_n;
    }
    else
    {
        BPCR_ac_DW.DeBPCR_P_HV_BatChrgPwrET = KeBPCR_P_HV_BatChrgPwrET_Dflt;
    }

    /* End of Switch: '<S540>/Switch5' */

    /* Switch: '<S540>/Switch4' incorporates:
     *  Constant: '<S540>/Constant4'
     *  Constant: '<S551>/Calib'
     *  DataStoreWrite: '<S540>/DeBPCR_P_HV_BatChrgPwrLT'
     *  RelationalOperator: '<S540>/Relational Operator4'
     */
    if (rtb_TmpSignalConversionAtDeBPCR_P_HV_B_b > (-99.0F))
    {
        BPCR_ac_DW.DeBPCR_P_HV_BatChrgPwrLT =
            rtb_TmpSignalConversionAtDeBPCR_P_HV_B_b;
    }
    else
    {
        BPCR_ac_DW.DeBPCR_P_HV_BatChrgPwrLT = KeBPCR_P_HV_BatChrgPwrLT_Dflt;
    }

    /* End of Switch: '<S540>/Switch4' */

    /* Switch: '<S540>/Switch1' incorporates:
     *  Constant: '<S540>/Constant1'
     *  Constant: '<S554>/Calib'
     *  DataStoreWrite: '<S540>/DeBPCR_P_HV_BatDschrgPwrLT'
     *  RelationalOperator: '<S540>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtDeBPCR_P_HV__ou > (-99.0F))
    {
        BPCR_ac_DW.DeBPCR_P_HV_BatDschrgPwrLT =
            rtb_TmpSignalConversionAtDeBPCR_P_HV__ou;
    }
    else
    {
        BPCR_ac_DW.DeBPCR_P_HV_BatDschrgPwrLT = KeBPCR_P_HV_BatDschrgPwrLT_Dflt;
    }

    /* End of Switch: '<S540>/Switch1' */

    /* Switch: '<S540>/Switch' incorporates:
     *  Constant: '<S540>/Constant'
     *  Constant: '<S553>/Calib'
     *  DataStoreWrite: '<S540>/DeBPCR_P_HV_BatDschrgPwrET'
     *  RelationalOperator: '<S540>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtDeBPCR_P_HV_B_a > (-99.0F))
    {
        BPCR_ac_DW.DeBPCR_P_HV_BatDschrgPwrET =
            rtb_TmpSignalConversionAtDeBPCR_P_HV_B_a;
    }
    else
    {
        BPCR_ac_DW.DeBPCR_P_HV_BatDschrgPwrET = KeBPCR_P_HV_BatDschrgPwrET_Dflt;
    }

    /* End of Switch: '<S540>/Switch' */

    /* Switch: '<S540>/Switch6' incorporates:
     *  Constant: '<S540>/Constant6'
     *  Constant: '<S556>/Calib'
     *  DataStoreWrite: '<S540>/DeBPCR_Pct_HV_BatSOC_DS'
     *  RelationalOperator: '<S540>/Relational Operator6'
     */
    if (rtb_TmpSignalConversionAtDeBPCR_Pct_HV_B > (-99.0F))
    {
        BPCR_ac_DW.DeBPCR_Pct_HV_BatSOC_DS =
            rtb_TmpSignalConversionAtDeBPCR_Pct_HV_B;
    }
    else
    {
        BPCR_ac_DW.DeBPCR_Pct_HV_BatSOC_DS = KeBPCR_Pct_HV_BatPackSOC_Dflt;
    }

    /* End of Switch: '<S540>/Switch6' */

    /* Switch: '<S540>/Switch7' incorporates:
     *  Constant: '<S540>/Constant7'
     *  Constant: '<S557>/Calib'
     *  DataStoreWrite: '<S540>/NeBPCR_T_BatModTmp'
     *  RelationalOperator: '<S540>/Relational Operator7'
     */
    if (rtb_TmpSignalConversionAtNeBPCR_T_BatMod > (-99.0F))
    {
        BPCR_ac_DW.NeBPCR_T_BatModTmp = rtb_TmpSignalConversionAtNeBPCR_T_BatMod;
    }
    else
    {
        BPCR_ac_DW.NeBPCR_T_BatModTmp = KeBPCR_T_BatModTmp_Dflt;
    }

    /* End of Switch: '<S540>/Switch7' */

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Init_VoltageCurrentTemp'
     */
    /* SignalConversion generated from: '<S547>/HV_BatCurr' incorporates:
     *  Constant: '<S613>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatCurr = KeBPCI_I_HV_BatCurrDflt;

    /* SignalConversion generated from: '<S547>/HV_BatCurrFA' */
    BPCR_ac_B.OutportBufferForHV_BatCurrFA = BPCR_ac_ConstB.FALSEConstant2_g;

    /* SignalConversion generated from: '<S547>/HV_BatVolt' incorporates:
     *  Constant: '<S619>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatVolt = KeBPCI_U_HV_BatVoltDflt;

    /* SignalConversion generated from: '<S547>/HV_BatVoltFA' */
    BPCR_ac_B.OutportBufferForHV_BatVoltFA = BPCR_ac_ConstB.FALSEConstant1_h;

    /* SignalConversion generated from: '<S547>/HV_BatModVoltMax' incorporates:
     *  Constant: '<S617>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatModVoltMax = KeBPCI_U_HV_BatModVoltMaxDflt;

    /* SignalConversion generated from: '<S547>/HV_BatModVoltMaxFA' */
    BPCR_ac_B.OutportBufferForHV_BatModVoltMaxFA =
        BPCR_ac_ConstB.FALSEConstant3_mp;

    /* SignalConversion generated from: '<S547>/HV_BatModVoltMin' incorporates:
     *  Constant: '<S618>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatModVoltMin = KeBPCI_U_HV_BatModVoltMinDflt;

    /* SignalConversion generated from: '<S547>/HV_BatModVoltMinFA' */
    BPCR_ac_B.OutportBufferForHV_BatModVoltMinFA =
        BPCR_ac_ConstB.FALSEConstant4_e;

    /* SignalConversion generated from: '<S547>/HV_BatModVoltAvg' incorporates:
     *  Constant: '<S616>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatModVoltAvg = KeBPCI_U_HV_BatModVoltAvgDflt;

    /* SignalConversion generated from: '<S547>/HV_BatModVoltAvgFA' */
    BPCR_ac_B.OutportBufferForHV_BatModVoltAvgFA = BPCR_ac_ConstB.FALSEConstant8;

    /* SignalConversion generated from: '<S547>/HV_BatModTempMaxFA' */
    BPCR_ac_B.OutportBufferForHV_BatModTempMaxFA =
        BPCR_ac_ConstB.FALSEConstant5_a;

    /* SignalConversion generated from: '<S547>/HV_BatModTempMinFA' */
    BPCR_ac_B.OutportBufferForHV_BatModTempMinFA =
        BPCR_ac_ConstB.FALSEConstant6_k;

    /* SignalConversion generated from: '<S547>/HV_BatModTempAvgFA' */
    BPCR_ac_B.OutportBufferForHV_BatModTempAvgFA = BPCR_ac_ConstB.FALSEConstant9;

    /* SignalConversion generated from: '<S547>/CellVoltLowThrsh' incorporates:
     *  Constant: '<S615>/Calib'
     */
    BPCR_ac_B.OutportBufferForCellVoltLowThrsh = KeBPCI_U_CellVoltLowThrshDflt;

    /* SignalConversion generated from: '<S547>/CellVoltLowThrshFAInit' */
    BPCR_ac_B.OutportBufferForCellVoltLowThrshFAInit =
        BPCR_ac_ConstB.FALSEConstant23;

    /* SignalConversion generated from: '<S547>/CellVoltHighThrsh' incorporates:
     *  Constant: '<S614>/Calib'
     */
    BPCR_ac_B.OutportBufferForCellVoltHighThrsh = KeBPCI_U_CellVoltHighThrshDflt;

    /* SignalConversion generated from: '<S547>/CellVoltHighThrshFAInit' */
    BPCR_ac_B.OutportBufferForCellVoltHighThrshFAInit =
        BPCR_ac_ConstB.FALSEConstant24;

    /* SignalConversion generated from: '<S547>/HVBat_NumMaxVlt' incorporates:
     *  Constant: '<S627>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBat_NumMaxVlt = KeBPCR_Cnt_HVBat_NumMaxVlt;

    /* SignalConversion generated from: '<S547>/HVBat_NumMinVlt' incorporates:
     *  Constant: '<S628>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBat_NumMinVlt = KeBPCR_Cnt_HVBat_NumMinVlt;

    /* SignalConversion generated from: '<S547>/HVBat_ModNumMinTmp' incorporates:
     *  Constant: '<S626>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBat_ModNumMinTmp = KeBPCR_Cnt_HVBat_ModNumMinTmp;

    /* SignalConversion generated from: '<S547>/HVBat_ModNumMaxTmp' incorporates:
     *  Constant: '<S625>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBat_ModNumMaxTmp = KeBPCR_Cnt_HVBat_ModNumMaxTmp;

    /* SignalConversion generated from: '<S547>/OCVMinCellVoltage' incorporates:
     *  Constant: '<S624>/Calib'
     */
    BPCR_ac_B.OutportBufferForOCVMinCellVoltage = KeBPCI_U_OCVMinCellVoltageDflt;

    /* SignalConversion generated from: '<S547>/OCVMinCellVoltage_FA' */
    BPCR_ac_B.OutportBufferForOCVMinCellVoltage_FA =
        BPCR_ac_ConstB.FALSEConstant11;

    /* SignalConversion generated from: '<S547>/OCVMaxCellVoltage' incorporates:
     *  Constant: '<S623>/Calib'
     */
    BPCR_ac_B.OutportBufferForOCVMaxCellVoltage = KeBPCI_U_OCVMaxCellVoltageDflt;

    /* SignalConversion generated from: '<S547>/OCVMaxCellVoltage_FA' */
    BPCR_ac_B.OutportBufferForOCVMaxCellVoltage_FA =
        BPCR_ac_ConstB.FALSEConstant12;

    /* SignalConversion generated from: '<S547>/OCVAvgCellVoltage' incorporates:
     *  Constant: '<S622>/Calib'
     */
    BPCR_ac_B.OutportBufferForOCVAvgCellVoltage = KeBPCI_U_OCVAvgCellVoltageDflt;

    /* SignalConversion generated from: '<S547>/OCVAvgCellVoltage_FA' */
    BPCR_ac_B.OutportBufferForOCVAvgCellVoltage_FA =
        BPCR_ac_ConstB.FALSEConstant13;

    /* SignalConversion generated from: '<S547>/MaxCellDschargeImpedance' incorporates:
     *  Constant: '<S620>/Calib'
     */
    BPCR_ac_B.OutportBufferForMaxCellDschargeImpedance =
        KeBPCI_U_MaxCellDschargeImpedanceDflt;

    /* SignalConversion generated from: '<S547>/MaxCellDschargeImpedance_FA' */
    BPCR_ac_B.OutportBufferForMaxCellDschargeImpedan_b =
        BPCR_ac_ConstB.FALSEConstant16;

    /* SignalConversion generated from: '<S547>/MinCellDschargeImpedance' incorporates:
     *  Constant: '<S621>/Calib'
     */
    BPCR_ac_B.OutportBufferForMinCellDschargeImpedance =
        KeBPCI_U_MinCellDschargeImpedanceDflt;

    /* SignalConversion generated from: '<S547>/MinCellDschargeImpedance_FA' */
    BPCR_ac_B.OutportBufferForMinCellDschargeImpedan_o =
        BPCR_ac_ConstB.FALSEConstant17;

    /* SignalConversion generated from: '<S547>/MaxCellVltAlldDflt' incorporates:
     *  Constant: '<S636>/Calib'
     */
    BPCR_ac_B.OutportBufferForMaxCellVltAlldDflt = KeBPCR_U_MaxCellVltAlldDflt;

    /* SignalConversion generated from: '<S547>/MaxCellVltAlldDflt_FA' */
    BPCR_ac_B.OutportBufferForMaxCellVltAlldDflt_FA =
        BPCR_ac_ConstB.FALSEConstant19;

    /* SignalConversion generated from: '<S547>/MinCellVltAlldDflt' incorporates:
     *  Constant: '<S638>/Calib'
     */
    BPCR_ac_B.OutportBufferForMinCellVltAlldDflt = KeBPCR_U_MinCellVltAlldDflt;

    /* SignalConversion generated from: '<S547>/MinCellVltAlldDflt_FA' */
    BPCR_ac_B.OutportBufferForMinCellVltAlldDflt_FA =
        BPCR_ac_ConstB.FALSEConstant20;

    /* SignalConversion generated from: '<S547>/MaxPkVltAlldDflt' incorporates:
     *  Constant: '<S637>/Calib'
     */
    BPCR_ac_B.OutportBufferForMaxPkVltAlldDflt = KeBPCR_U_MaxPkVltAlldDflt;

    /* SignalConversion generated from: '<S547>/MaxPkVltAlldDflt_FA' */
    BPCR_ac_B.OutportBufferForMaxPkVltAlldDflt_FA =
        BPCR_ac_ConstB.FALSEConstant21;

    /* SignalConversion generated from: '<S547>/MinPkVltAlldDflt' incorporates:
     *  Constant: '<S639>/Calib'
     */
    BPCR_ac_B.OutportBufferForMinPkVltAlldDflt = KeBPCR_U_MinPkVltAlldDflt;

    /* SignalConversion generated from: '<S547>/MinPkVltAlldDflt_FA' */
    BPCR_ac_B.OutportBufferForMinPkVltAlldDflt_FA =
        BPCR_ac_ConstB.FALSEConstant22;

    /* SignalConversion generated from: '<S547>/HVBatClgOutletTemp' incorporates:
     *  Constant: '<S631>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatClgOutletTemp = KeBPCR_T_HVBatClgOutlet_Init;

    /* SignalConversion generated from: '<S547>/HVBatClgOutletTempFA' incorporates:
     *  Constant: '<S640>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatClgOutletTempFA =
        KeBPCR_b_HVBatClgOutletTempFA_Init;

    /* SignalConversion generated from: '<S547>/MaxChrgCurrAlwd' */
    BPCR_ac_B.OutportBufferForMaxChrgCurrAlwd = BPCR_ac_ConstB.ConstantValue7_g;

    /* SignalConversion generated from: '<S547>/MaxChgCurrAlwdFA' */
    BPCR_ac_B.OutportBufferForMaxChgCurrAlwdFA = BPCR_ac_ConstB.FALSEConstant_e;

    /* SignalConversion generated from: '<S547>/BusBarTempInit' incorporates:
     *  Constant: '<S630>/Calib'
     */
    BPCR_ac_B.OutportBufferForBusBarTempInit = KeBPCR_T_BusBarTempInit;

    /* SignalConversion generated from: '<S547>/BDUBusBarTempInit' incorporates:
     *  Constant: '<S629>/Calib'
     */
    BPCR_ac_B.OutportBufferForBDUBusBarTempInit = KeBPCR_T_BDUBusBarTempInit;

    /* SignalConversion generated from: '<S547>/HV_InternalStringVolt1' incorporates:
     *  Constant: '<S633>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_InternalStringVolt1 =
        KeBPCR_U_HV_InternalStringVolt1_Init;

    /* SignalConversion generated from: '<S547>/HV_InternalStringVolt1FA' */
    BPCR_ac_B.OutportBufferForHV_InternalStringVolt1FA =
        BPCR_ac_ConstB.FALSEConstant7_k;

    /* SignalConversion generated from: '<S547>/HV_InternalStringVolt2' incorporates:
     *  Constant: '<S634>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_InternalStringVolt2 =
        KeBPCR_U_HV_InternalStringVolt2_Init;

    /* SignalConversion generated from: '<S547>/HV_InternalStringVolt2FA' */
    BPCR_ac_B.OutportBufferForHV_InternalStringVolt2FA =
        BPCR_ac_ConstB.FALSEConstant10;

    /* SignalConversion generated from: '<S547>/HV_SeriesVolt' incorporates:
     *  Constant: '<S635>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_SeriesVolt = KeBPCR_U_HV_SeriesVolt_Init;

    /* SignalConversion generated from: '<S547>/HV_SeriesVoltFA' */
    BPCR_ac_B.OutportBufferForHV_SeriesVoltFA = BPCR_ac_ConstB.FALSEConstant15;

    /* SignalConversion generated from: '<S547>/HV_Current_String2' incorporates:
     *  Constant: '<S641>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_Current_String2 =
        KeBPCR_I_HV_BatCurrString2_Init;

    /* SignalConversion generated from: '<S547>/HV_Current_String2_FA' */
    BPCR_ac_B.OutportBufferForHV_Current_String2_FA =
        BPCR_ac_ConstB.FALSEConstant14_i;

    /* SignalConversion generated from: '<S547>/HV_InternalVoltage' incorporates:
     *  Constant: '<S632>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_InternalVoltage =
        KeBPCR_U_BPCM_HV_InternalVoltage_Init;

    /* SignalConversion generated from: '<S547>/HV_InternalVoltage_FA' */
    BPCR_ac_B.OutportBufferForHV_InternalVoltage_FA =
        BPCR_ac_ConstB.FALSEConstant18;

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Init_SystemState'
     */
    /* Gain: '<S612>/Gain' incorporates:
     *  Constant: '<S592>/Calib'
     */
    VeBPCI_b_HV_BatRdy_Init_NVRAM = ((true) && (KeBPCR_b_HV_BatRdy_NVRAM_Init));

    /* DataStoreWrite: '<S546>/Data Store Write' */
    BPCR_ac_DW.NeBPCR_b_HV_BatRdy = VeBPCI_b_HV_BatRdy_Init_NVRAM;

    /* SignalConversion generated from: '<S546>/HV_BatCntctrStat' incorporates:
     *  Constant: '<S603>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatCntctrStat = KeBPCR_e_HV_BatCntctrStat;

    /* SignalConversion generated from: '<S546>/HV_BatCntctrStatFA' incorporates:
     *  Constant: '<S588>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatCntctrStatFA = KeBPCR_b_HV_BatCntctrStatFA;

    /* SignalConversion generated from: '<S546>/HV_BatInrlkStat' incorporates:
     *  Constant: '<S604>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatInrlkStat = KeBPCR_e_HV_BatInrlkStat;

    /* SignalConversion generated from: '<S546>/HV_BatInrlkStatFA' incorporates:
     *  Constant: '<S589>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatInrlkStatFA = KeBPCR_b_HV_BatInrlkStatFA;

    /* SignalConversion generated from: '<S546>/HV_BatIsolStat' incorporates:
     *  Constant: '<S605>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatIsolStat = KeBPCR_e_HV_BatIsolStat;

    /* SignalConversion generated from: '<S546>/HV_BatCntctrOpenReq' incorporates:
     *  Constant: '<S587>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatCntctrOpenReq = KeBPCR_b_HV_BatCntctrOpenReq;

    /* SignalConversion generated from: '<S546>/HV_BatCntctrOpenPending' incorporates:
     *  Constant: '<S586>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatCntctrOpenPending =
        KeBPCR_b_HV_BatCntctrOpenPending;

    /* SignalConversion generated from: '<S546>/HVBattCntctrOpnTm' incorporates:
     *  Constant: '<S610>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBattCntctrOpnTm = KeBPCR_t_HVBattCntctrOpnTm;

    /* SignalConversion generated from: '<S546>/PrechrgPnltyTimer' incorporates:
     *  Constant: '<S611>/Calib'
     */
    BPCR_ac_B.OutportBufferForPrechrgPnltyTimer = KeBPCR_t_PrechrgPnltyTimer;

    /* SignalConversion generated from: '<S546>/HVBatPerWUThermal' incorporates:
     *  Constant: '<S582>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatPerWUThermal = KeBPCR_b_HVBatPerWUThermal;

    /* SignalConversion generated from: '<S546>/HVBatPerWakeUp' incorporates:
     *  Constant: '<S583>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatPerWakeUp = KeBPCR_b_HVBatPerWakeUp;

    /* SignalConversion generated from: '<S546>/HVBatSleepTime' incorporates:
     *  Constant: '<S609>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatSleepTime = KeBPCR_t_HVBatSleepTime;

    /* SignalConversion generated from: '<S546>/BPCMShtDwnRdy' incorporates:
     *  Constant: '<S595>/Calib'
     */
    BPCR_ac_B.OutportBufferForBPCMShtDwnRdy = KeBPCR_e_BPCMShtDwnRdy;

    /* SignalConversion generated from: '<S546>/PwrtrnHV_IsolStat' incorporates:
     *  Constant: '<S607>/Calib'
     */
    BPCR_ac_B.OutportBufferForPwrtrnHV_IsolStat = KeBPCR_e_PwrtrnHV_IsolStat;

    /* SignalConversion generated from: '<S546>/PwrLimON' incorporates:
     *  Constant: '<S593>/Calib'
     */
    BPCR_ac_B.OutportBufferForPwrLimON = KeBPCR_b_PwrLimON;

    /* SignalConversion generated from: '<S546>/HVBatSOH_Init' */
    BPCR_ac_B.OutportBufferForHVBatSOH_Init = BPCR_ac_ConstB.ConstantValue7;

    /* SignalConversion generated from: '<S546>/HVBatSOHLow' incorporates:
     *  Constant: '<S578>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatSOHLow = KeBPCR_Pct_HVBatSOHLow_Init;

    /* SignalConversion generated from: '<S546>/HVBatRealTimeClock' incorporates:
     *  Constant: '<S608>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatRealTimeClock =
        KeBPCR_t_HVBatRealTimeClock_Init;

    /* SignalConversion generated from: '<S546>/HVBat_RTC_FA' incorporates:
     *  Constant: '<S584>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBat_RTC_FA = KeBPCR_b_HVBat_RTC_V_Init;

    /* SignalConversion generated from: '<S546>/HVBatIntrlkIntrnlStat' incorporates:
     *  Constant: '<S599>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatIntrlkIntrnlStat =
        KeBPCR_e_HVBatIntrlkIntrnlStat_Init;

    /* SignalConversion generated from: '<S546>/HVBatIntrlkIntrnlStatFA' incorporates:
     *  Constant: '<S581>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatIntrlkIntrnlStatFA =
        KeBPCR_b_HVBatIntrlkIntrnlStatFA_Init;

    /* SignalConversion generated from: '<S546>/HEVOnRqBPCM' incorporates:
     *  Constant: '<S580>/Calib'
     */
    BPCR_ac_B.OutportBufferForHEVOnRqBPCM = KeBPCR_b_HEVOnRqBPCM_Init;

    /* SignalConversion generated from: '<S546>/HVBatRdy' */
    BPCR_ac_B.OutportBufferForHVBatRdy = BPCR_ac_ConstB.ConstantValue2;

    /* SignalConversion generated from: '<S546>/HVBatRdy_Init' incorporates:
     *  Constant: '<S591>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatRdy_Init = KeBPCR_b_HV_BatRdy_Init;

    /* SignalConversion generated from: '<S546>/HV_BatRdySgnl_Rcvd' incorporates:
     *  Constant: '<S590>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatRdySgnl_Rcvd = KeBPCR_b_HV_BatRdySgnl_Rcvd;

    /* SignalConversion generated from: '<S546>/HVBatCntrWeld_ImpdOpn' incorporates:
     *  Constant: '<S606>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatCntrWeld_ImpdOpn =
        KeBPCR_e_Init_HVBatCntrWeld_ImpdOpn;

    /* SignalConversion generated from: '<S546>/CntctrCntrl_PWM' incorporates:
     *  Constant: '<S576>/Calib'
     */
    BPCR_ac_B.OutportBufferForCntctrCntrl_PWM = KeBPCR_DC_CntctrCntrl_PWM;

    /* SignalConversion generated from: '<S546>/CntctrCntrl_PWM_FA' incorporates:
     *  Constant: '<S579>/Calib'
     */
    BPCR_ac_B.OutportBufferForCntctrCntrl_PWM_FA = KeBPCR_b_CntctrCntrl_PWM_FA;

    /* SignalConversion generated from: '<S546>/TracBat_EChrgPowLong' incorporates:
     *  Constant: '<S577>/Calib'
     */
    BPCR_ac_B.OutportBufferForTracBat_EChrgPowLong =
        KeBPCR_P_TracBat_EChrgPowLong;

    /* SignalConversion generated from: '<S546>/TracBat_EChrgPowLongV' incorporates:
     *  Constant: '<S594>/Calib'
     */
    BPCR_ac_B.OutportBufferForTracBat_EChrgPowLongV =
        KeBPCR_b_TracBat_EChrgPowLongV;

    /* SignalConversion generated from: '<S546>/BPCM_LIN_BusOff' incorporates:
     *  Constant: '<S596>/Calib'
     */
    BPCR_ac_B.OutportBufferForBPCM_LIN_BusOff = KeBPCR_e_BPCM_LIN_BusOff_Init;

    /* SignalConversion generated from: '<S546>/BPCM_LOC_BCP' incorporates:
     *  Constant: '<S597>/Calib'
     */
    BPCR_ac_B.OutportBufferForBPCM_LOC_BCP = KeBPCR_e_BPCM_LOC_BCP_Init;

    /* SignalConversion generated from: '<S546>/BPCM_LOC_BatClntHtr' incorporates:
     *  Constant: '<S598>/Calib'
     */
    BPCR_ac_B.OutportBufferForBPCM_LOC_BatClntHtr =
        KeBPCR_e_BPCM_LOC_BatClntHtr_Init;

    /* SignalConversion generated from: '<S546>/ChargingStat_BPCM' incorporates:
     *  Constant: '<S574>/Constant'
     */
    BPCR_ac_B.OutportBufferForChargingStat_BPCM = BPCR_ac_ConstB.Constant_c;

    /* SignalConversion generated from: '<S546>/HVBatPerWU12VChrg' */
    BPCR_ac_B.OutportBufferForHVBatPerWU12VChrg =
        BPCR_ac_ConstB.FALSEConstant1_l;

    /* SignalConversion generated from: '<S546>/ChargingStat_BPCMFA' */
    BPCR_ac_B.OutportBufferForChargingStat_BPCMFA =
        BPCR_ac_ConstB.FALSEConstant_n;

    /* SignalConversion generated from: '<S546>/BSW_PWMCntctrTmr' */
    BPCR_ac_B.OutportBufferForBSW_PWMCntctrTmr = BPCR_ac_ConstB.ConstantValue;

    /* SignalConversion generated from: '<S546>/BSW_PWMTmrRcvd' */
    BPCR_ac_B.OutportBufferForBSW_PWMTmrRcvd = BPCR_ac_ConstB.ConstantValue3;

    /* SignalConversion generated from: '<S546>/RemAmpHrCap_Init' */
    BPCR_ac_B.OutportBufferForRemAmpHrCap_Init = BPCR_ac_ConstB.ConstantValue4;

    /* SignalConversion generated from: '<S546>/RemAmpHrCapFA_Init' */
    BPCR_ac_B.OutportBufferForRemAmpHrCapFA_Init =
        BPCR_ac_ConstB.FALSEConstant2_p;

    /* SignalConversion generated from: '<S546>/MILOnRqBPCM_Init' */
    BPCR_ac_B.OutportBufferForMILOnRqBPCM_Init = BPCR_ac_ConstB.FALSEConstant3_m;

    /* SignalConversion generated from: '<S546>/HVBat_ThrmlRnawy_Warn_Init' incorporates:
     *  Constant: '<S573>/Constant'
     */
    BPCR_ac_B.OutportBufferForHVBat_ThrmlRnawy_Warn_In =
        BPCR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S546>/HVBat_ThrmlRnawy_WarnFA_Init' */
    BPCR_ac_B.OutportBufferForHVBat_ThrmlRnawy_WarnFA_ =
        BPCR_ac_ConstB.FALSEConstant4_i;

    /* SignalConversion generated from: '<S546>/BPCM_Comm_Fail_Init' incorporates:
     *  Constant: '<S575>/Constant'
     */
    BPCR_ac_B.OutportBufferForBPCM_Comm_Fail_Init = BPCR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S546>/BPCM_Comm_Fail_FA_Init' */
    BPCR_ac_B.OutportBufferForBPCM_Comm_Fail_FA_Init =
        BPCR_ac_ConstB.FALSEConstant5_b;

    /* SignalConversion generated from: '<S546>/HVTracBatCntctrConfig' incorporates:
     *  Constant: '<S602>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVTracBatCntctrConfig =
        KeBPCR_e_HVTracBatCntctrConfig_Init;

    /* SignalConversion generated from: '<S546>/HVTracBatCntctrConfigFA' */
    BPCR_ac_B.OutportBufferForHVTracBatCntctrConfigFA =
        BPCR_ac_ConstB.FALSEConstant6_l;

    /* SignalConversion generated from: '<S546>/HVDcChargeTypeStat' incorporates:
     *  Constant: '<S601>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVDcChargeTypeStat =
        KeBPCR_e_HVDcChargeTypeStat_Init;

    /* SignalConversion generated from: '<S546>/HVDcChargeTypeStatFA' */
    BPCR_ac_B.OutportBufferForHVDcChargeTypeStatFA =
        BPCR_ac_ConstB.FALSEConstant7;

    /* SignalConversion generated from: '<S546>/HV_AuxLoadOffReq' incorporates:
     *  Constant: '<S585>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_AuxLoadOffReq = KeBPCR_b_HV_AuxLoadOffReq_Init;

    /* SignalConversion generated from: '<S546>/HV_AuxLoadOffReqFA' */
    BPCR_ac_B.OutportBufferForHV_AuxLoadOffReqFA =
        BPCR_ac_ConstB.FALSEConstant14;

    /* SignalConversion generated from: '<S546>/HV_BatIsolStat_raw' incorporates:
     *  Constant: '<S600>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatIsolStat_raw =
        KeBPCR_e_HV_BatIsolStat_raw_INIT;

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Init_BPCC_DecodePWM'
     */
    /* SignalConversion generated from: '<S542>/VeBPCR_e_PWMDecodedCntctrSts_Init' incorporates:
     *  Constant: '<S560>/Calib'
     */
    BPCR_ac_B.OutportBufferForVeBPCR_e_PWMDecodedCntct =
        KeBPCR_e_PWMCntctrSts_Init;

    /* SignalConversion generated from: '<S542>/VeBPCR_b_PWMTimerOOR_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_PWMTimerOOR_Ini =
        BPCR_ac_ConstB.FALSEConstant2_b;

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Init_PowerLimits'
     */
    /* SignalConversion generated from: '<S544>/HVBatDschrgPowET_Init' incorporates:
     *  Constant: '<S566>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatDschrgPowET_Init =
        KeBPCR_P_HV_BatDschrgPwrET_Init;

    /* SignalConversion generated from: '<S544>/HVBatDschrgPowET_FA_Init' */
    BPCR_ac_B.OutportBufferForHVBatDschrgPowET_FA_Init =
        BPCR_ac_ConstB.FALSEConstant;

    /* SignalConversion generated from: '<S544>/HVBatDschrgPowLT_Init' incorporates:
     *  Constant: '<S567>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatDschrgPowLT_Init =
        KeBPCR_P_HV_BatDschrgPwrLT_Init;

    /* SignalConversion generated from: '<S544>/HVBatDschrgPowLT_FA_Init' */
    BPCR_ac_B.OutportBufferForHVBatDschrgPowLT_FA_Init =
        BPCR_ac_ConstB.FALSEConstant1;

    /* SignalConversion generated from: '<S544>/HVBatDschrgPowST_Init' incorporates:
     *  Constant: '<S568>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatDschrgPowST_Init =
        KeBPCR_P_HV_BatDschrgPwrST_Init;

    /* SignalConversion generated from: '<S544>/HVBatDschrgPowST_FA_Init' */
    BPCR_ac_B.OutportBufferForHVBatDschrgPowST_FA_Init =
        BPCR_ac_ConstB.FALSEConstant2;

    /* SignalConversion generated from: '<S544>/HVBatChrgPowET_Init' incorporates:
     *  Constant: '<S563>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatChrgPowET_Init =
        KeBPCR_P_HV_BatChrgPwrET_Init;

    /* SignalConversion generated from: '<S544>/HVBatChrgPowET_FA_Init' */
    BPCR_ac_B.OutportBufferForHVBatChrgPowET_FA_Init =
        BPCR_ac_ConstB.FALSEConstant3;

    /* SignalConversion generated from: '<S544>/HVBatChrgPowLT_Init' incorporates:
     *  Constant: '<S564>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatChrgPowLT_Init =
        KeBPCR_P_HV_BatChrgPwrLT_Init;

    /* SignalConversion generated from: '<S544>/HVBatChrgPowLT_FA_Init' */
    BPCR_ac_B.OutportBufferForHVBatChrgPowLT_FA_Init =
        BPCR_ac_ConstB.FALSEConstant4;

    /* SignalConversion generated from: '<S544>/HVBatChrgPowST_Init' incorporates:
     *  Constant: '<S565>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatChrgPowST_Init =
        KeBPCR_P_HV_BatChrgPwrST_Init;

    /* SignalConversion generated from: '<S544>/HVBatChrgPowST_FA_Init' */
    BPCR_ac_B.OutportBufferForHVBatChrgPowST_FA_Init =
        BPCR_ac_ConstB.FALSEConstant5;

    /* SignalConversion generated from: '<S544>/HVBatPackSOC_Init' incorporates:
     *  Constant: '<S569>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatPackSOC_Init = KeBPCR_Pct_HV_BatPackSOC_Init;

    /* SignalConversion generated from: '<S544>/HVBatPackSOC_FA_Init' */
    BPCR_ac_B.OutportBufferForHVBatPackSOC_FA_Init =
        BPCR_ac_ConstB.FALSEConstant6;

    /* SignalConversion generated from: '<S544>/FullAmpHrCap_Init' incorporates:
     *  Constant: '<S570>/Calib'
     */
    BPCR_ac_B.OutportBufferForFullAmpHrCap_Init = KeBPCR_q_FullAmpHrCap_Init;

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Init_DCCntctr'
     */
    /* SignalConversion generated from: '<S543>/HVBat_DC_CntctrOpn' */
    BPCR_ac_B.OutportBufferForHVBat_DC_CntctrOpn =
        BPCR_ac_ConstB.ConstantValue_o;

    /* SignalConversion generated from: '<S543>/HVBat_DC_CntctrReq' */
    BPCR_ac_B.OutportBufferForHVBat_DC_CntctrReq = BPCR_ac_ConstB.ConstantValue1;

    /* SignalConversion generated from: '<S543>/DC_IsolSts' */
    BPCR_ac_B.OutportBufferForDC_IsolSts = BPCR_ac_ConstB.ConstantValue2_p;

    /* SignalConversion generated from: '<S543>/HVBat_DC_CntctrStat' incorporates:
     *  Constant: '<S561>/Constant'
     */
    BPCR_ac_B.OutportBufferForHVBat_DC_CntctrStat = BPCR_ac_ConstB.Constant_i;

    /* SignalConversion generated from: '<S543>/HVBat_DC_CntctrStat_FA' */
    BPCR_ac_B.OutportBufferForHVBat_DC_CntctrStat_FA =
        BPCR_ac_ConstB.ConstantValue3_k;

    /* SignalConversion generated from: '<S543>/StkOpnChkCmpl' */
    BPCR_ac_B.OutportBufferForStkOpnChkCmpl = BPCR_ac_ConstB.ConstantValue4_e;

    /* SignalConversion generated from: '<S543>/DCIsolSts' incorporates:
     *  Constant: '<S562>/Constant'
     */
    BPCR_ac_B.OutportBufferForDCIsolSts = BPCR_ac_ConstB.Constant_hi;

    /* SignalConversion generated from: '<S543>/DCIsolStsFA' */
    BPCR_ac_B.OutportBufferForDCIsolStsFA = BPCR_ac_ConstB.ConstantValue5;

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Init_12p5ms_InputTask'
     */
    /* Gain: '<S558>/Gain' */
    VeBPCI_U_BatVoltModMaxArb_Init = 1.0F * tmpRead;

    /* Gain: '<S559>/Gain' */
    VeBPCI_U_BatVoltModMinArb_Init = 1.0F * tmpRead_0;

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/SOC_FA_Ovrd_Init'
     */
    /* DataStoreRead: '<S548>/Data Store Read' incorporates:
     *  SignalConversion generated from: '<S548>/Variant'
     */
#if Rte_SysCon_Variant_BPCR_BatPckSOCFAInit

    /* VariantMerge generated from: '<S548>/Variant' */
    BPCR_ac_B.VariantMerge_For_Variant_Source_Variant =
        BPCR_ac_DW.NeBPCR_b_HV_BatPackSOC_FA_Ovrd;

#else

    /* VariantMerge generated from: '<S548>/Variant' incorporates:
     *  Constant: '<S548>/FALSE Constant6'
     *  SignalConversion generated from: '<S548>/Variant'
     */
    BPCR_ac_B.VariantMerge_For_Variant_Source_Variant = false;

#endif

    /* End of DataStoreRead: '<S548>/Data Store Read' */

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Init_SOC'
     */
    /* Switch: '<S545>/Switch' incorporates:
     *  Constant: '<S572>/Calib'
     */
    if (KeBPCR_b_SOCInitOvrd)
    {
        /* SignalConversion generated from: '<S5>/VeBPCC_Pct_HV_BatSOC_Init' incorporates:
         *  Constant: '<S571>/Calib'
         *  Outport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         */
        (void)Rte_Write_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
            (KeBPCR_Pct_SOC_Default);
    }
    else
    {
        /* SignalConversion generated from: '<S5>/VeBPCC_Pct_HV_BatSOC_Init' incorporates:
         *  DataStoreRead: '<S545>/Data Store Read3'
         *  Outport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         */
        (void)Rte_Write_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
            (BPCR_ac_DW.DeBPCR_Pct_HV_BatSOC_DS);
    }

    /* End of Switch: '<S545>/Switch' */

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S549>/VeBPCR_T_HV_BatModTempMax_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTempMa = BPCR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S549>/VeBPCR_T_HV_BatModTempMin_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTempMi = BPCR_ac_ConstB.Const2;

    /* SignalConversion generated from: '<S549>/VeBPCR_T_HV_BatModTempAvg_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTempAv = BPCR_ac_ConstB.Const3;

    /* SignalConversion generated from: '<S549>/VeBPCR_e_HV_BatCntctrStat_Out_Init' incorporates:
     *  Constant: '<S549>/Const4'
     */
    BPCR_ac_B.OutportBufferForVeBPCR_e_HV_BatCntctrSta = BPCR_ac_ConstB.Const4;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatCntctrStatFA_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatCntctrSta = BPCR_ac_ConstB.Const5;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatCntctrOpenReq_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatCntctrOpe = BPCR_ac_ConstB.Const6;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatCntctrOpenPending_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatCntctrO_m = BPCR_ac_ConstB.Const7;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HVBatRdy_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HVBatRdy_Out_In = BPCR_ac_ConstB.Const8;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HEVOnRqBPCM_Debounced_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HEVOnRqBPCM_Deb = BPCR_ac_ConstB.Const9;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_BPCM_OVActv_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_OVActv_Out = BPCR_ac_ConstB.Const10;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_BPCM_UVActv_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_UVActv_Out = BPCR_ac_ConstB.Const11;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_Flst_HVBatCntrWeld_ImpdOpn_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_Flst_HVBatCntrW = BPCR_ac_ConstB.Const12;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HVBatCntrWeld_ImpdOpn_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HVBatCntrWeld_I = BPCR_ac_ConstB.Const13;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_BPCM_LIN_BusOff_FA_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_LIN_BusOff = BPCR_ac_ConstB.Const14;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_BPCM_LIN_BusOff_SgnlRcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_LIN_BusO_f = BPCR_ac_ConstB.Const15;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_BPCM_LOC_BCP_FA_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_LOC_BCP_FA = BPCR_ac_ConstB.Const16;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_BPCM_LOC_BCP_SgnlRcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_LOC_BCP_Sg = BPCR_ac_ConstB.Const17;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_BPCM_LOC_BatClntHtr_FA_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_LOC_BatCln = BPCR_ac_ConstB.Const18;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_BPCM_LOC_BatClntHtr_SgnlRcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_LOC_BatC_e = BPCR_ac_ConstB.Const19;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatDschrgPwr = BPCR_ac_ConstB.Const20;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatDschrgP_m = BPCR_ac_ConstB.Const21;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatDschrgP_l = BPCR_ac_ConstB.Const22;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatChrgPwrET = BPCR_ac_ConstB.Const23;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatChrgPwrLT = BPCR_ac_ConstB.Const24;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatChrgPwrST = BPCR_ac_ConstB.Const25;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatPackSOC_SgnlRcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatPackSOC_S = BPCR_ac_ConstB.Const26;

    /* SignalConversion generated from: '<S549>/VeBPCR_T_HV_BatModTempMax_Arb_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTemp_j = BPCR_ac_ConstB.Const27;

    /* SignalConversion generated from: '<S549>/VeBPCR_T_HV_BatModTempMin_Arb_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTemp_p = BPCR_ac_ConstB.Const28;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatDschrg_mg = BPCR_ac_ConstB.Const29;

    /* SignalConversion generated from: '<S549>/VeBPCR_P_HV_BatDschrgPwrLT_Arb_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_P_HV_BatDschrgPwr = BPCR_ac_ConstB.Const30;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatChrgPwrLT_FA_Ovrd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatChrgPwr_h = BPCR_ac_ConstB.Const31;

    /* SignalConversion generated from: '<S549>/VeBPCR_P_HV_BatChrgPwrLT_Arb_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_P_HV_BatChrgPwrLT = BPCR_ac_ConstB.Const32;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatDschrgPwrET_FA_Ovrd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatDschrg_mw = BPCR_ac_ConstB.Const33;

    /* SignalConversion generated from: '<S549>/VeBPCR_P_HV_BatDschrgPwrET_Arb_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_P_HV_BatDschrgP_f = BPCR_ac_ConstB.Const34;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatChrgPwrET_FA_Ovrd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatChrgPw_hc = BPCR_ac_ConstB.Const35;

    /* SignalConversion generated from: '<S549>/VeBPCR_P_HV_BatChrgPwrET_Arb_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_P_HV_BatChrgPwrET = BPCR_ac_ConstB.Const36;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatDschrgPwrST_FA_Ovrd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatDschrgP_c = BPCR_ac_ConstB.Const37;

    /* SignalConversion generated from: '<S549>/VeBPCR_P_HV_BatDschrgPwrST_Arb_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_P_HV_BatDschrgP_j = BPCR_ac_ConstB.Const38;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatChrgPwrST_FA_Ovrd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatChrgPwr_g = BPCR_ac_ConstB.Const39;

    /* SignalConversion generated from: '<S549>/VeBPCR_P_HV_BatChrgPwrST_Arb_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_P_HV_BatChrgPwrST = BPCR_ac_ConstB.Const40;

    /* SignalConversion generated from: '<S549>/VeBPCR_U_CellVoltOVThrsh_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_U_CellVoltOVThrsh = BPCR_ac_ConstB.Const41;

    /* SignalConversion generated from: '<S549>/VeBPCR_U_CellVoltUVThrsh_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_U_CellVoltUVThrsh = BPCR_ac_ConstB.Const42;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatCurrSFA_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatCurrSFA_O = BPCR_ac_ConstB.Const43;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatPackSOC_SFA_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatPackSOC_j = BPCR_ac_ConstB.Const44;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatVoltModMaxSFA_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatVoltModMa = BPCR_ac_ConstB.Const45;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_CmdBatPwrLimSFA_Enbl_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_CmdBatPwrLimSFA = BPCR_ac_ConstB.Const46;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatMaxModTmpSFA_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatMaxModTmp = BPCR_ac_ConstB.Const47;

    /* SignalConversion generated from: '<S549>/VeBPCR_Pct_HV_BatPackSOC_Ovrd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_Pct_HV_BatPackSOC = BPCR_ac_ConstB.Const48;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_MIL_OnRq_BPCM_Debounced_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_MIL_OnRq_BPCM_D = BPCR_ac_ConstB.Const49;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_ThrmlRnawyFlg_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_ThrmlRnawyFlg_O = BPCR_ac_ConstB.Const50;

    /* SignalConversion generated from: '<S549>/VeBPCR_P_TracBat_EChrgPowLongMod_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_P_TracBat_EChrgPo = BPCR_ac_ConstB.Const51;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_BatShtOffFlg_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_BatShtOffFlg_Ou = BPCR_ac_ConstB.Const52;

    /* SignalConversion generated from: '<S549>/VeBPCR_b_PWMBlankAct_write' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_PWMBlankAct_wri = BPCR_ac_ConstB.Const;

    /* SignalConversion generated from: '<S549>/VeBPCI_U_BatVoltModMinArb_write' */
    BPCR_ac_B.OutportBufferForVeBPCI_U_BatVoltModMinAr = BPCR_ac_ConstB.Const53;

    /* SignalConversion generated from: '<S549>/VeBPCI_U_BatVoltModMaxArb_write' */
    BPCR_ac_B.OutportBufferForVeBPCI_U_BatVoltModMaxAr = BPCR_ac_ConstB.Const54;

    /* SignalConversion generated from: '<S549>/VeBPCR_T_HV_BatModTempMax_write' */
    BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTemp_f = BPCR_ac_ConstB.Const55;

    /* SignalConversion generated from: '<S549>/VeBPCR_T_HV_BatModTempMin_write' */
    BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTemp_i = BPCR_ac_ConstB.Const56;

    /* SignalConversion generated from: '<S549>/VeBPCR_e_FaultSts_HybBatPosConConCirPer' incorporates:
     *  Constant: '<S642>/Constant'
     */
    BPCR_ac_B.OutportBufferForVeBPCR_e_FaultSts_HybBat =
        BPCR_ac_ConstB.Constant_co;

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* Outport: '<Root>/VeBPCR_T_BDUBusBarTemp' incorporates:
     *  SignalConversion generated from: '<S5>/BDUBusBarTempInit'
     */
    (void)Rte_Write_VeBPCR_T_BDUBusBarTemp_Value
        (BPCR_ac_B.OutportBufferForBDUBusBarTempInit);

    /* Outport: '<Root>/VeBPCR_e_BPCMShtDwnRdy' incorporates:
     *  SignalConversion generated from: '<S546>/BPCMShtDwnRdy'
     *  SignalConversion generated from: '<S5>/BPCMShtDwnRdy'
     */
    (void)Rte_Write_VeBPCR_e_BPCMShtDwnRdy_Value
        (BPCR_ac_B.OutportBufferForBPCMShtDwnRdy);

    /* Outport: '<Root>/VeBPCR_b_BPCM_CommFailFA' incorporates:
     *  SignalConversion generated from: '<S5>/BPCM_Comm_Fail_FA_Init'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_CommFailFA_Value
        (BPCR_ac_B.OutportBufferForBPCM_Comm_Fail_FA_Init);

    /* Outport: '<Root>/VeBPCR_e_BPCM_CommFail' incorporates:
     *  SignalConversion generated from: '<S546>/BPCM_Comm_Fail_Init'
     *  SignalConversion generated from: '<S5>/BPCM_Comm_Fail_Init'
     */
    (void)Rte_Write_VeBPCR_e_BPCM_CommFail_Value
        (BPCR_ac_B.OutportBufferForBPCM_Comm_Fail_Init);

    /* Outport: '<Root>/VeBPCR_e_BPCM_LIN_BusOff' incorporates:
     *  SignalConversion generated from: '<S546>/BPCM_LIN_BusOff'
     *  SignalConversion generated from: '<S5>/BPCM_LIN_BusOff'
     */
    (void)Rte_Write_VeBPCR_e_BPCM_LIN_BusOff_Value
        (BPCR_ac_B.OutportBufferForBPCM_LIN_BusOff);

    /* Outport: '<Root>/VeBPCR_e_BPCM_LOC_BCP' incorporates:
     *  SignalConversion generated from: '<S546>/BPCM_LOC_BCP'
     *  SignalConversion generated from: '<S5>/BPCM_LOC_BCP'
     */
    (void)Rte_Write_VeBPCR_e_BPCM_LOC_BCP_Value
        (BPCR_ac_B.OutportBufferForBPCM_LOC_BCP);

    /* Outport: '<Root>/VeBPCR_e_BPCM_LOC_BatClntHtr' incorporates:
     *  SignalConversion generated from: '<S546>/BPCM_LOC_BatClntHtr'
     *  SignalConversion generated from: '<S5>/BPCM_LOC_BatClntHtr'
     */
    (void)Rte_Write_VeBPCR_e_BPCM_LOC_BatClntHtr_Value
        (BPCR_ac_B.OutportBufferForBPCM_LOC_BatClntHtr);

    /* Outport: '<Root>/VeBPCR_T_BusBarTemp' incorporates:
     *  SignalConversion generated from: '<S5>/BusBarTempInit'
     */
    (void)Rte_Write_VeBPCR_T_BusBarTemp_Value
        (BPCR_ac_B.OutportBufferForBusBarTempInit);

    /* Outport: '<Root>/VeBPCR_U_CellVoltHighThrsh' incorporates:
     *  SignalConversion generated from: '<S5>/CellVoltHighThrsh'
     */
    (void)Rte_Write_VeBPCR_U_CellVoltHighThrsh_Value
        (BPCR_ac_B.OutportBufferForCellVoltHighThrsh);

    /* Outport: '<Root>/VeBPCR_b_CellVoltHighThrshFA' incorporates:
     *  SignalConversion generated from: '<S5>/CellVoltHighThrshFAInit'
     */
    (void)Rte_Write_VeBPCR_b_CellVoltHighThrshFA_Value
        (BPCR_ac_B.OutportBufferForCellVoltHighThrshFAInit);

    /* Outport: '<Root>/VeBPCR_U_CellVoltLowThrsh' incorporates:
     *  SignalConversion generated from: '<S5>/CellVoltLowThrsh'
     */
    (void)Rte_Write_VeBPCR_U_CellVoltLowThrsh_Value
        (BPCR_ac_B.OutportBufferForCellVoltLowThrsh);

    /* Outport: '<Root>/VeBPCR_b_CellVoltLowThrshFA' incorporates:
     *  SignalConversion generated from: '<S5>/CellVoltLowThrshFAInit'
     */
    (void)Rte_Write_VeBPCR_b_CellVoltLowThrshFA_Value
        (BPCR_ac_B.OutportBufferForCellVoltLowThrshFAInit);

    /* Outport: '<Root>/VeBPCR_e_ChargingStat_BPCM' incorporates:
     *  SignalConversion generated from: '<S546>/ChargingStat_BPCM'
     *  SignalConversion generated from: '<S5>/ChargingStat_BPCM'
     */
    (void)Rte_Write_VeBPCR_e_ChargingStat_BPCM_Value
        (BPCR_ac_B.OutportBufferForChargingStat_BPCM);

    /* Outport: '<Root>/VeBPCR_b_ChargingStat_BPCMFA' incorporates:
     *  SignalConversion generated from: '<S5>/ChargingStat_BPCMFA'
     */
    (void)Rte_Write_VeBPCR_b_ChargingStat_BPCMFA_Value
        (BPCR_ac_B.OutportBufferForChargingStat_BPCMFA);

    /* Outport: '<Root>/VeBPCR_b_CntctrCntrl_PWM_FA' incorporates:
     *  SignalConversion generated from: '<S5>/CntctrCntrl_PWM_FA'
     */
    (void)Rte_Write_VeBPCR_b_CntctrCntrl_PWM_FA_Value
        (BPCR_ac_B.OutportBufferForCntctrCntrl_PWM_FA);

    /* Outport: '<Root>/VeBPCR_e_DCIsolSts' incorporates:
     *  SignalConversion generated from: '<S543>/DCIsolSts'
     *  SignalConversion generated from: '<S5>/DCIsolSts'
     */
    (void)Rte_Write_VeBPCR_e_DCIsolSts_Value(BPCR_ac_B.OutportBufferForDCIsolSts);

    /* Outport: '<Root>/VeBPCR_b_DCIsolStsFA' incorporates:
     *  SignalConversion generated from: '<S5>/DCIsolStsFA'
     */
    (void)Rte_Write_VeBPCR_b_DCIsolStsFA_Value
        (BPCR_ac_B.OutportBufferForDCIsolStsFA);

    /* Outport: '<Root>/VeBPCR_b_DC_Isolation_Sts' incorporates:
     *  SignalConversion generated from: '<S5>/DC_IsolSts'
     */
    (void)Rte_Write_VeBPCR_b_DC_Isolation_Sts_Value
        (BPCR_ac_B.OutportBufferForDC_IsolSts);

    /* Outport: '<Root>/VeBPCR_q_FullAmpHrCap' incorporates:
     *  SignalConversion generated from: '<S5>/FullAmpHrCap_Init'
     */
    (void)Rte_Write_VeBPCR_q_FullAmpHrCap_Value
        (BPCR_ac_B.OutportBufferForFullAmpHrCap_Init);

    /* Outport: '<Root>/VeBPCR_b_HEVOnRqBPCM' incorporates:
     *  SignalConversion generated from: '<S5>/HEVOnRqBPCM'
     */
    (void)Rte_Write_VeBPCR_b_HEVOnRqBPCM_Value
        (BPCR_ac_B.OutportBufferForHEVOnRqBPCM);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrET_FA' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatChrgPowET_FA_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrET_FA_Value
        (BPCR_ac_B.OutportBufferForHVBatChrgPowET_FA_Init);

    /* Outport: '<Root>/VeBPCR_P_HV_BatChrgPwrET' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatChrgPowET_Init'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatChrgPwrET_Value
        (BPCR_ac_B.OutportBufferForHVBatChrgPowET_Init);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrLT_FA' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatChrgPowLT_FA_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrLT_FA_Value
        (BPCR_ac_B.OutportBufferForHVBatChrgPowLT_FA_Init);

    /* Outport: '<Root>/VeBPCR_P_HV_BatChrgPwrLT' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatChrgPowLT_Init'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatChrgPwrLT_Value
        (BPCR_ac_B.OutportBufferForHVBatChrgPowLT_Init);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrST_FA' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatChrgPowST_FA_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrST_FA_Value
        (BPCR_ac_B.OutportBufferForHVBatChrgPowST_FA_Init);

    /* Outport: '<Root>/VeBPCR_P_HV_BatChrgPwrST' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatChrgPowST_Init'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatChrgPwrST_Value
        (BPCR_ac_B.OutportBufferForHVBatChrgPowST_Init);

    /* Outport: '<Root>/VeBPCR_T_HVBatClgOutletTemp' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatClgOutletTemp'
     */
    (void)Rte_Write_VeBPCR_T_HVBatClgOutletTemp_Value
        (BPCR_ac_B.OutportBufferForHVBatClgOutletTemp);

    /* Outport: '<Root>/VeBPCR_b_HVBatClgOutletTempFA' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatClgOutletTempFA'
     */
    (void)Rte_Write_VeBPCR_b_HVBatClgOutletTempFA_Value
        (BPCR_ac_B.OutportBufferForHVBatClgOutletTempFA);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrET_FA' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatDschrgPowET_FA_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrET_FA_Value
        (BPCR_ac_B.OutportBufferForHVBatDschrgPowET_FA_Init);

    /* Outport: '<Root>/VeBPCR_P_HV_BatDschrgPwrET' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatDschrgPowET_Init'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatDschrgPwrET_Value
        (BPCR_ac_B.OutportBufferForHVBatDschrgPowET_Init);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrLT_FA' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatDschrgPowLT_FA_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrLT_FA_Value
        (BPCR_ac_B.OutportBufferForHVBatDschrgPowLT_FA_Init);

    /* Outport: '<Root>/VeBPCR_P_HV_BatDschrgPwrLT' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatDschrgPowLT_Init'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatDschrgPwrLT_Value
        (BPCR_ac_B.OutportBufferForHVBatDschrgPowLT_Init);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrST_FA' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatDschrgPowST_FA_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrST_FA_Value
        (BPCR_ac_B.OutportBufferForHVBatDschrgPowST_FA_Init);

    /* Outport: '<Root>/VeBPCR_P_HV_BatDschrgPwrST' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatDschrgPowST_Init'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatDschrgPwrST_Value
        (BPCR_ac_B.OutportBufferForHVBatDschrgPowST_Init);

    /* Outport: '<Root>/VeBPCR_e_HVBatIntrlkIntrnlStat' incorporates:
     *  SignalConversion generated from: '<S546>/HVBatIntrlkIntrnlStat'
     *  SignalConversion generated from: '<S5>/HVBatIntrlkIntrnlStat'
     */
    (void)Rte_Write_VeBPCR_e_HVBatIntrlkIntrnlStat_Value
        (BPCR_ac_B.OutportBufferForHVBatIntrlkIntrnlStat);

    /* Outport: '<Root>/VeBPCR_b_HVBatIntrlkIntrnlStatFA' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatIntrlkIntrnlStatFA'
     */
    (void)Rte_Write_VeBPCR_b_HVBatIntrlkIntrnlStatFA_Value
        (BPCR_ac_B.OutportBufferForHVBatIntrlkIntrnlStatFA);

    /* Outport: '<Root>/VeBPCR_b_HV_BatPackSOC_FA' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatPackSOC_FA_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatPackSOC_FA_Value
        (BPCR_ac_B.OutportBufferForHVBatPackSOC_FA_Init);

    /* Outport: '<Root>/VeBPCR_Pct_HV_BatPackSOC' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatPackSOC_Init'
     */
    (void)Rte_Write_VeBPCR_Pct_HV_BatPackSOC_Value
        (BPCR_ac_B.OutportBufferForHVBatPackSOC_Init);

    /* Outport: '<Root>/VeBPCR_b_HVBatPerWU12VChrg' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatPerWU12VChrg'
     */
    (void)Rte_Write_VeBPCR_b_HVBatPerWU12VChrg_Value
        (BPCR_ac_B.OutportBufferForHVBatPerWU12VChrg);

    /* Outport: '<Root>/VeBPCR_b_HVBatPerWUThermal' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatPerWUThermal'
     */
    (void)Rte_Write_VeBPCR_b_HVBatPerWUThermal_Value
        (BPCR_ac_B.OutportBufferForHVBatPerWUThermal);

    /* Outport: '<Root>/VeBPCR_b_HVBatPerWakeUp' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatPerWakeUp'
     */
    (void)Rte_Write_VeBPCR_b_HVBatPerWakeUp_Value
        (BPCR_ac_B.OutportBufferForHVBatPerWakeUp);

    /* Outport: '<Root>/VeBPCR_e_HVBatRdy' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatRdy'
     */
    (void)Rte_Write_VeBPCR_e_HVBatRdy_Value(BPCR_ac_B.OutportBufferForHVBatRdy);

    /* Outport: '<Root>/VeBPCR_t_HVBatRealTimeClock' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatRealTimeClock'
     */
    (void)Rte_Write_VeBPCR_t_HVBatRealTimeClock_Value
        (BPCR_ac_B.OutportBufferForHVBatRealTimeClock);

    /* Outport: '<Root>/VeBPCR_Pct_HVBatSOHLow' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatSOHLow'
     */
    (void)Rte_Write_VeBPCR_Pct_HVBatSOHLow_Value
        (BPCR_ac_B.OutportBufferForHVBatSOHLow);

    /* Outport: '<Root>/VeBPCR_Pct_HVBatSOH' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatSOH_Init'
     */
    (void)Rte_Write_VeBPCR_Pct_HVBatSOH_Value
        (BPCR_ac_B.OutportBufferForHVBatSOH_Init);

    /* Outport: '<Root>/VeBPCR_t_HVBatSleepTime' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatSleepTime'
     */
    (void)Rte_Write_VeBPCR_t_HVBatSleepTime_Value
        (BPCR_ac_B.OutportBufferForHVBatSleepTime);

    /* Outport: '<Root>/VeBPCR_b_HVBat_DC_CntctrOpn' incorporates:
     *  SignalConversion generated from: '<S5>/HVBat_DC_CntctrOpn'
     */
    (void)Rte_Write_VeBPCR_b_HVBat_DC_CntctrOpn_Value
        (BPCR_ac_B.OutportBufferForHVBat_DC_CntctrOpn);

    /* Outport: '<Root>/VeBPCR_b_HVBat_DC_CntctrReq' incorporates:
     *  SignalConversion generated from: '<S5>/HVBat_DC_CntctrReq'
     */
    (void)Rte_Write_VeBPCR_b_HVBat_DC_CntctrReq_Value
        (BPCR_ac_B.OutportBufferForHVBat_DC_CntctrReq);

    /* Outport: '<Root>/VeBPCR_e_HVBat_DC_CntctrStat' incorporates:
     *  SignalConversion generated from: '<S543>/HVBat_DC_CntctrStat'
     *  SignalConversion generated from: '<S5>/HVBat_DC_CntctrStat'
     */
    (void)Rte_Write_VeBPCR_e_HVBat_DC_CntctrStat_Value
        (BPCR_ac_B.OutportBufferForHVBat_DC_CntctrStat);

    /* Outport: '<Root>/VeBPCR_b_HVBat_DC_CntctrStat_FA' incorporates:
     *  SignalConversion generated from: '<S5>/HVBat_DC_CntctrStat_FA'
     */
    (void)Rte_Write_VeBPCR_b_HVBat_DC_CntctrStat_FA_Value
        (BPCR_ac_B.OutportBufferForHVBat_DC_CntctrStat_FA);

    /* Outport: '<Root>/VeBPCR_Cnt_HVBat_ModNumMaxTmp' incorporates:
     *  SignalConversion generated from: '<S5>/HVBat_ModNumMaxTmp'
     */
    (void)Rte_Write_VeBPCR_Cnt_HVBat_ModNumMaxTmp_Value
        (BPCR_ac_B.OutportBufferForHVBat_ModNumMaxTmp);

    /* Outport: '<Root>/VeBPCR_Cnt_HVBat_ModNumMinTmp' incorporates:
     *  SignalConversion generated from: '<S5>/HVBat_ModNumMinTmp'
     */
    (void)Rte_Write_VeBPCR_Cnt_HVBat_ModNumMinTmp_Value
        (BPCR_ac_B.OutportBufferForHVBat_ModNumMinTmp);

    /* Outport: '<Root>/VeBPCR_Cnt_HVBat_NumMaxVlt' incorporates:
     *  SignalConversion generated from: '<S5>/HVBat_NumMaxVlt'
     */
    (void)Rte_Write_VeBPCR_Cnt_HVBat_NumMaxVlt_Value
        (BPCR_ac_B.OutportBufferForHVBat_NumMaxVlt);

    /* Outport: '<Root>/VeBPCR_Cnt_HVBat_NumMinVlt' incorporates:
     *  SignalConversion generated from: '<S5>/HVBat_NumMinVlt'
     */
    (void)Rte_Write_VeBPCR_Cnt_HVBat_NumMinVlt_Value
        (BPCR_ac_B.OutportBufferForHVBat_NumMinVlt);

    /* Outport: '<Root>/VeBPCR_b_HVBatRealTimeClock_FA' incorporates:
     *  SignalConversion generated from: '<S5>/HVBat_RTC_FA'
     */
    (void)Rte_Write_VeBPCR_b_HVBatRealTimeClock_FA_Value
        (BPCR_ac_B.OutportBufferForHVBat_RTC_FA);

    /* Outport: '<Root>/VeBPCR_t_HVBattCntctrOpnTm' incorporates:
     *  SignalConversion generated from: '<S5>/HVBattCntctrOpnTm'
     */
    (void)Rte_Write_VeBPCR_t_HVBattCntctrOpnTm_Value
        (BPCR_ac_B.OutportBufferForHVBattCntctrOpnTm);

    /* Outport: '<Root>/VeBPCR_e_HVDcChargeTypeStat' incorporates:
     *  SignalConversion generated from: '<S546>/HVDcChargeTypeStat'
     *  SignalConversion generated from: '<S5>/HVDcChargeTypeStat'
     */
    (void)Rte_Write_VeBPCR_e_HVDcChargeTypeStat_Value
        (BPCR_ac_B.OutportBufferForHVDcChargeTypeStat);

    /* Outport: '<Root>/VeBPCR_b_HVDcChargeTypeStatFA' incorporates:
     *  SignalConversion generated from: '<S5>/HVDcChargeTypeStatFA'
     */
    (void)Rte_Write_VeBPCR_b_HVDcChargeTypeStatFA_Value
        (BPCR_ac_B.OutportBufferForHVDcChargeTypeStatFA);

    /* Outport: '<Root>/VeBPCR_e_HVTracBatCntctrConfig' incorporates:
     *  SignalConversion generated from: '<S546>/HVTracBatCntctrConfig'
     *  SignalConversion generated from: '<S5>/HVTracBatCntctrConfig'
     */
    (void)Rte_Write_VeBPCR_e_HVTracBatCntctrConfig_Value
        (BPCR_ac_B.OutportBufferForHVTracBatCntctrConfig);

    /* Outport: '<Root>/VeBPCR_b_HVTracBatCntctrConfigFA' incorporates:
     *  SignalConversion generated from: '<S5>/HVTracBatCntctrConfigFA'
     */
    (void)Rte_Write_VeBPCR_b_HVTracBatCntctrConfigFA_Value
        (BPCR_ac_B.OutportBufferForHVTracBatCntctrConfigFA);

    /* Outport: '<Root>/VeBPCR_b_HV_AuxLoadOffReq' incorporates:
     *  SignalConversion generated from: '<S5>/HV_AuxLoadOffReq'
     */
    (void)Rte_Write_VeBPCR_b_HV_AuxLoadOffReq_Value
        (BPCR_ac_B.OutportBufferForHV_AuxLoadOffReq);

    /* Outport: '<Root>/VeBPCR_b_HV_AuxLoadOffReqFA' incorporates:
     *  SignalConversion generated from: '<S5>/HV_AuxLoadOffReqFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_AuxLoadOffReqFA_Value
        (BPCR_ac_B.OutportBufferForHV_AuxLoadOffReqFA);

    /* Outport: '<Root>/VeBPCR_I_HV_BatCurr' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatCurr'
     */
    (void)Rte_Write_VeBPCR_I_HV_BatCurr_Value
        (BPCR_ac_B.OutportBufferForHV_BatCurr);

    /* Outport: '<Root>/VeBPCR_b_HV_BatCurrFA' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatCurrFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatCurrFA_Value
        (BPCR_ac_B.OutportBufferForHV_BatCurrFA);

    /* Outport: '<Root>/VeBPCR_e_HV_BatInrlkStat' incorporates:
     *  SignalConversion generated from: '<S546>/HV_BatInrlkStat'
     *  SignalConversion generated from: '<S5>/HV_BatInrlkStat'
     */
    (void)Rte_Write_VeBPCR_e_HV_BatInrlkStat_Value
        (BPCR_ac_B.OutportBufferForHV_BatInrlkStat);

    /* Outport: '<Root>/VeBPCR_b_HV_BatInrlkStatFA' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatInrlkStatFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatInrlkStatFA_Value
        (BPCR_ac_B.OutportBufferForHV_BatInrlkStatFA);

    /* Outport: '<Root>/VeBPCR_e_HV_BatIsolStat' incorporates:
     *  SignalConversion generated from: '<S546>/HV_BatIsolStat'
     *  SignalConversion generated from: '<S5>/HV_BatIsolStat'
     */
    (void)Rte_Write_VeBPCR_e_HV_BatIsolStat_Value
        (BPCR_ac_B.OutportBufferForHV_BatIsolStat);

    /* Outport: '<Root>/VeBPCR_e_HV_BatIsolStat_raw' incorporates:
     *  SignalConversion generated from: '<S546>/HV_BatIsolStat_raw'
     *  SignalConversion generated from: '<S5>/HV_BatIsolStat_raw'
     */
    (void)Rte_Write_VeBPCR_e_HV_BatIsolStat_raw_Value
        (BPCR_ac_B.OutportBufferForHV_BatIsolStat_raw);

    /* Outport: '<Root>/VeBPCR_b_HV_BatModTempAvgFA' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatModTempAvgFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModTempAvgFA_Value
        (BPCR_ac_B.OutportBufferForHV_BatModTempAvgFA);

    /* Outport: '<Root>/VeBPCR_b_HV_BatModTempMaxFA' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatModTempMaxFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModTempMaxFA_Value
        (BPCR_ac_B.OutportBufferForHV_BatModTempMaxFA);

    /* Outport: '<Root>/VeBPCR_b_HV_BatModTempMinFA' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatModTempMinFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModTempMinFA_Value
        (BPCR_ac_B.OutportBufferForHV_BatModTempMinFA);

    /* Outport: '<Root>/VeBPCR_U_HV_BatModVoltAvg' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatModVoltAvg'
     */
    (void)Rte_Write_VeBPCR_U_HV_BatModVoltAvg_Value
        (BPCR_ac_B.OutportBufferForHV_BatModVoltAvg);

    /* Outport: '<Root>/VeBPCR_b_HV_BatModVoltAvgFA' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatModVoltAvgFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModVoltAvgFA_Value
        (BPCR_ac_B.OutportBufferForHV_BatModVoltAvgFA);

    /* Outport: '<Root>/VeBPCR_U_HV_BatModVoltMax' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatModVoltMax'
     */
    (void)Rte_Write_VeBPCR_U_HV_BatModVoltMax_Value
        (BPCR_ac_B.OutportBufferForHV_BatModVoltMax);

    /* Outport: '<Root>/VeBPCR_b_HV_BatModVoltMaxFA' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatModVoltMaxFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModVoltMaxFA_Value
        (BPCR_ac_B.OutportBufferForHV_BatModVoltMaxFA);

    /* Outport: '<Root>/VeBPCR_U_HV_BatModVoltMin' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatModVoltMin'
     */
    (void)Rte_Write_VeBPCR_U_HV_BatModVoltMin_Value
        (BPCR_ac_B.OutportBufferForHV_BatModVoltMin);

    /* Outport: '<Root>/VeBPCR_b_HV_BatModVoltMinFA' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatModVoltMinFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModVoltMinFA_Value
        (BPCR_ac_B.OutportBufferForHV_BatModVoltMinFA);

    /* Outport: '<Root>/VeBPCR_U_HV_BatVolt' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatVolt'
     */
    (void)Rte_Write_VeBPCR_U_HV_BatVolt_Value
        (BPCR_ac_B.OutportBufferForHV_BatVolt);

    /* Outport: '<Root>/VeBPCR_b_HV_BatVoltFA' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatVoltFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatVoltFA_Value
        (BPCR_ac_B.OutportBufferForHV_BatVoltFA);

    /* Outport: '<Root>/VeBPCR_I_HV_Current_String2' incorporates:
     *  SignalConversion generated from: '<S5>/HV_Current_String2'
     */
    (void)Rte_Write_VeBPCR_I_HV_Current_String2_Value
        (BPCR_ac_B.OutportBufferForHV_Current_String2);

    /* Outport: '<Root>/VeBPCR_b_HV_Current_String2_FA' incorporates:
     *  SignalConversion generated from: '<S5>/HV_Current_String2_FA'
     */
    (void)Rte_Write_VeBPCR_b_HV_Current_String2_FA_Value
        (BPCR_ac_B.OutportBufferForHV_Current_String2_FA);

    /* Outport: '<Root>/VeBPCR_U_HV_InternalStringVolt1' incorporates:
     *  SignalConversion generated from: '<S5>/HV_InternalStringVolt1'
     */
    (void)Rte_Write_VeBPCR_U_HV_InternalStringVolt1_Value
        (BPCR_ac_B.OutportBufferForHV_InternalStringVolt1);

    /* Outport: '<Root>/VeBPCR_b_HV_InternalStringVolt1FA' incorporates:
     *  SignalConversion generated from: '<S5>/HV_InternalStringVolt1FA'
     */
    (void)Rte_Write_VeBPCR_b_HV_InternalStringVolt1FA_Value
        (BPCR_ac_B.OutportBufferForHV_InternalStringVolt1FA);

    /* Outport: '<Root>/VeBPCR_U_HV_InternalStringVolt2' incorporates:
     *  SignalConversion generated from: '<S5>/HV_InternalStringVolt2'
     */
    (void)Rte_Write_VeBPCR_U_HV_InternalStringVolt2_Value
        (BPCR_ac_B.OutportBufferForHV_InternalStringVolt2);

    /* Outport: '<Root>/VeBPCR_b_HV_InternalStringVolt2FA' incorporates:
     *  SignalConversion generated from: '<S5>/HV_InternalStringVolt2FA'
     */
    (void)Rte_Write_VeBPCR_b_HV_InternalStringVolt2FA_Value
        (BPCR_ac_B.OutportBufferForHV_InternalStringVolt2FA);

    /* Outport: '<Root>/VeBPCR_U_BPCM_HV_InternalVoltage' incorporates:
     *  SignalConversion generated from: '<S5>/HV_InternalVoltage'
     */
    (void)Rte_Write_VeBPCR_U_BPCM_HV_InternalVoltage_Value
        (BPCR_ac_B.OutportBufferForHV_InternalVoltage);

    /* Outport: '<Root>/VeBPCR_b_BPCM_HV_InternalVoltage_FA' incorporates:
     *  SignalConversion generated from: '<S5>/HV_InternalVoltage_FA'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_HV_InternalVoltage_FA_Value
        (BPCR_ac_B.OutportBufferForHV_InternalVoltage_FA);

    /* Outport: '<Root>/VeBPCR_U_HV_SeriesVolt' incorporates:
     *  SignalConversion generated from: '<S5>/HV_SeriesVolt'
     */
    (void)Rte_Write_VeBPCR_U_HV_SeriesVolt_Value
        (BPCR_ac_B.OutportBufferForHV_SeriesVolt);

    /* Outport: '<Root>/VeBPCR_b_HV_SeriesVoltFA' incorporates:
     *  SignalConversion generated from: '<S5>/HV_SeriesVoltFA'
     */
    (void)Rte_Write_VeBPCR_b_HV_SeriesVoltFA_Value
        (BPCR_ac_B.OutportBufferForHV_SeriesVoltFA);

    /* Outport: '<Root>/VeBPCR_Z_MaxCellDschargeImpedance' incorporates:
     *  SignalConversion generated from: '<S5>/MaxCellDschargeImpedance'
     */
    (void)Rte_Write_VeBPCR_Z_MaxCellDschargeImpedance_Value
        (BPCR_ac_B.OutportBufferForMaxCellDschargeImpedance);

    /* Outport: '<Root>/VeBPCR_b_MaxCellDschargeImpedance_FA' incorporates:
     *  SignalConversion generated from: '<S5>/MaxCellDschargeImpedance_FA'
     */
    (void)Rte_Write_VeBPCR_b_MaxCellDschargeImpedance_FA_Value
        (BPCR_ac_B.OutportBufferForMaxCellDschargeImpedan_b);

    /* Outport: '<Root>/VeBPCR_U_MaxCellVltAlld' incorporates:
     *  SignalConversion generated from: '<S5>/MaxCellVltAlldDflt'
     */
    (void)Rte_Write_VeBPCR_U_MaxCellVltAlld_Value
        (BPCR_ac_B.OutportBufferForMaxCellVltAlldDflt);

    /* Outport: '<Root>/VeBPCR_b_MaxCellVltAlld_FA' incorporates:
     *  SignalConversion generated from: '<S5>/MaxCellVltAlldDflt_FA'
     */
    (void)Rte_Write_VeBPCR_b_MaxCellVltAlld_FA_Value
        (BPCR_ac_B.OutportBufferForMaxCellVltAlldDflt_FA);

    /* Outport: '<Root>/VeBPCR_b_MaxChgCurrAlwdFA' incorporates:
     *  SignalConversion generated from: '<S5>/MaxChgCurrAlwdFA'
     */
    (void)Rte_Write_VeBPCR_b_MaxChgCurrAlwdFA_Value
        (BPCR_ac_B.OutportBufferForMaxChgCurrAlwdFA);

    /* Outport: '<Root>/VeBPCR_I_MaxChrgCurrAlwd' incorporates:
     *  SignalConversion generated from: '<S5>/MaxChrgCurrAlwd'
     */
    (void)Rte_Write_VeBPCR_I_MaxChrgCurrAlwd_Value
        (BPCR_ac_B.OutportBufferForMaxChrgCurrAlwd);

    /* Outport: '<Root>/VeBPCR_U_MaxPkVltAlld' incorporates:
     *  SignalConversion generated from: '<S5>/MaxPkVltAlldDflt'
     */
    (void)Rte_Write_VeBPCR_U_MaxPkVltAlld_Value
        (BPCR_ac_B.OutportBufferForMaxPkVltAlldDflt);

    /* Outport: '<Root>/VeBPCR_b_MaxPkVltAlld_FA' incorporates:
     *  SignalConversion generated from: '<S5>/MaxPkVltAlldDflt_FA'
     */
    (void)Rte_Write_VeBPCR_b_MaxPkVltAlld_FA_Value
        (BPCR_ac_B.OutportBufferForMaxPkVltAlldDflt_FA);

    /* Outport: '<Root>/VeBPCR_Z_MinCellDschargeImpedance' incorporates:
     *  SignalConversion generated from: '<S5>/MinCellDschargeImpedance'
     */
    (void)Rte_Write_VeBPCR_Z_MinCellDschargeImpedance_Value
        (BPCR_ac_B.OutportBufferForMinCellDschargeImpedance);

    /* Outport: '<Root>/VeBPCR_b_MinCellDschargeImpedance_FA' incorporates:
     *  SignalConversion generated from: '<S5>/MinCellDschargeImpedance_FA'
     */
    (void)Rte_Write_VeBPCR_b_MinCellDschargeImpedance_FA_Value
        (BPCR_ac_B.OutportBufferForMinCellDschargeImpedan_o);

    /* Outport: '<Root>/VeBPCR_U_MinCellVltAlld' incorporates:
     *  SignalConversion generated from: '<S5>/MinCellVltAlldDflt'
     */
    (void)Rte_Write_VeBPCR_U_MinCellVltAlld_Value
        (BPCR_ac_B.OutportBufferForMinCellVltAlldDflt);

    /* Outport: '<Root>/VeBPCR_b_MinCellVltAlld_FA' incorporates:
     *  SignalConversion generated from: '<S5>/MinCellVltAlldDflt_FA'
     */
    (void)Rte_Write_VeBPCR_b_MinCellVltAlld_FA_Value
        (BPCR_ac_B.OutportBufferForMinCellVltAlldDflt_FA);

    /* Outport: '<Root>/VeBPCR_U_MinPkVltAlld' incorporates:
     *  SignalConversion generated from: '<S5>/MinPkVltAlldDflt'
     */
    (void)Rte_Write_VeBPCR_U_MinPkVltAlld_Value
        (BPCR_ac_B.OutportBufferForMinPkVltAlldDflt);

    /* Outport: '<Root>/VeBPCR_b_MinPkVltAlld_FA' incorporates:
     *  SignalConversion generated from: '<S5>/MinPkVltAlldDflt_FA'
     */
    (void)Rte_Write_VeBPCR_b_MinPkVltAlld_FA_Value
        (BPCR_ac_B.OutportBufferForMinPkVltAlldDflt_FA);

    /* Outport: '<Root>/VeBPCR_U_OCVAvgCellVoltage' incorporates:
     *  SignalConversion generated from: '<S5>/OCVAvgCellVoltage'
     */
    (void)Rte_Write_VeBPCR_U_OCVAvgCellVoltage_Value
        (BPCR_ac_B.OutportBufferForOCVAvgCellVoltage);

    /* Outport: '<Root>/VeBPCR_b_OCVAvgCellVoltage_FA' incorporates:
     *  SignalConversion generated from: '<S5>/OCVAvgCellVoltage_FA'
     */
    (void)Rte_Write_VeBPCR_b_OCVAvgCellVoltage_FA_Value
        (BPCR_ac_B.OutportBufferForOCVAvgCellVoltage_FA);

    /* Outport: '<Root>/VeBPCR_U_OCVMaxCellVoltage' incorporates:
     *  SignalConversion generated from: '<S5>/OCVMaxCellVoltage'
     */
    (void)Rte_Write_VeBPCR_U_OCVMaxCellVoltage_Value
        (BPCR_ac_B.OutportBufferForOCVMaxCellVoltage);

    /* Outport: '<Root>/VeBPCR_b_OCVMaxCellVoltage_FA' incorporates:
     *  SignalConversion generated from: '<S5>/OCVMaxCellVoltage_FA'
     */
    (void)Rte_Write_VeBPCR_b_OCVMaxCellVoltage_FA_Value
        (BPCR_ac_B.OutportBufferForOCVMaxCellVoltage_FA);

    /* Outport: '<Root>/VeBPCR_U_OCVMinCellVoltage' incorporates:
     *  SignalConversion generated from: '<S5>/OCVMinCellVoltage'
     */
    (void)Rte_Write_VeBPCR_U_OCVMinCellVoltage_Value
        (BPCR_ac_B.OutportBufferForOCVMinCellVoltage);

    /* Outport: '<Root>/VeBPCR_b_OCVMinCellVoltage_FA' incorporates:
     *  SignalConversion generated from: '<S5>/OCVMinCellVoltage_FA'
     */
    (void)Rte_Write_VeBPCR_b_OCVMinCellVoltage_FA_Value
        (BPCR_ac_B.OutportBufferForOCVMinCellVoltage_FA);

    /* Outport: '<Root>/VeBPCR_t_PrechrgPnltyTimer' incorporates:
     *  SignalConversion generated from: '<S5>/PrechrgPnltyTimer'
     */
    (void)Rte_Write_VeBPCR_t_PrechrgPnltyTimer_Value
        (BPCR_ac_B.OutportBufferForPrechrgPnltyTimer);

    /* Outport: '<Root>/VeBPCR_e_PwrtrnHV_IsolStat' incorporates:
     *  SignalConversion generated from: '<S546>/PwrtrnHV_IsolStat'
     *  SignalConversion generated from: '<S5>/PwrtrnHV_IsolStat'
     */
    (void)Rte_Write_VeBPCR_e_PwrtrnHV_IsolStat_Value
        (BPCR_ac_B.OutportBufferForPwrtrnHV_IsolStat);

    /* Outport: '<Root>/VeBPCR_e_FaultSts_HybBatPosConConCirPer' incorporates:
     *  SignalConversion generated from: '<S549>/VeBPCR_e_FaultSts_HybBatPosConConCirPer'
     *  SignalConversion generated from: '<S5>/R_VeBPCR_e_FaultSts_HybBatPosConConCirPer'
     */
    (void)Rte_Write_VeBPCR_e_FaultSts_HybBatPosConConCirPer_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_e_FaultSts_HybBat);

    /* Outport: '<Root>/VeBPCR_b_RemainingAmpHrCapFA' incorporates:
     *  SignalConversion generated from: '<S5>/RemAmpHrCapFA_Init'
     */
    (void)Rte_Write_VeBPCR_b_RemainingAmpHrCapFA_Value
        (BPCR_ac_B.OutportBufferForRemAmpHrCapFA_Init);

    /* Outport: '<Root>/VeBPCR_q_RemainingAmpHrCap' incorporates:
     *  SignalConversion generated from: '<S5>/RemAmpHrCap_Init'
     */
    (void)Rte_Write_VeBPCR_q_RemainingAmpHrCap_Value
        (BPCR_ac_B.OutportBufferForRemAmpHrCap_Init);

    /* Outport: '<Root>/VeBPCR_b_StkOpnChkCmpl' incorporates:
     *  SignalConversion generated from: '<S5>/StkOpnChkCmpl'
     */
    (void)Rte_Write_VeBPCR_b_StkOpnChkCmpl_Value
        (BPCR_ac_B.OutportBufferForStkOpnChkCmpl);

    /* Outport: '<Root>/VeBPCR_P_TracBat_EChrgPowLong' incorporates:
     *  SignalConversion generated from: '<S5>/TracBat_EChrgPowLong'
     */
    (void)Rte_Write_VeBPCR_P_TracBat_EChrgPowLong_Value
        (BPCR_ac_B.OutportBufferForTracBat_EChrgPowLong);

    /* Outport: '<Root>/VeBPCR_b_TracBat_EChrgPowLongFA' incorporates:
     *  SignalConversion generated from: '<S5>/TracBat_EChrgPowLongV'
     */
    (void)Rte_Write_VeBPCR_b_TracBat_EChrgPowLongFA_Value
        (BPCR_ac_B.OutportBufferForTracBat_EChrgPowLongV);

    /* Outport: '<Root>/VeBPCR_P_HV_BatChrgPwrET_Arb' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_P_HV_BatChrgPwrET_Arb_Out_Init'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatChrgPwrET_Arb_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_P_HV_BatChrgPwrET);

    /* Outport: '<Root>/VeBPCR_P_HV_BatChrgPwrLT_Arb' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_P_HV_BatChrgPwrLT_Arb_Out_Init'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatChrgPwrLT_Arb_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_P_HV_BatChrgPwrLT);

    /* Outport: '<Root>/VeBPCR_P_HV_BatChrgPwrST_Arb' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_P_HV_BatChrgPwrST_Arb_Out_Init'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatChrgPwrST_Arb_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_P_HV_BatChrgPwrST);

    /* Outport: '<Root>/VeBPCR_P_HV_BatDschrgPwrET_Arb' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_P_HV_BatDschrgPwrET_Arb_Out_Init'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatDschrgPwrET_Arb_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_P_HV_BatDschrgP_f);

    /* Outport: '<Root>/VeBPCR_P_HV_BatDschrgPwrLT_Arb' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_P_HV_BatDschrgPwrLT_Arb_Out_Init'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatDschrgPwrLT_Arb_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_P_HV_BatDschrgPwr);

    /* Outport: '<Root>/VeBPCR_P_HV_BatDschrgPwrST_Arb' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_P_HV_BatDschrgPwrST_Arb_Out_Init'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatDschrgPwrST_Arb_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_P_HV_BatDschrgP_j);

    /* Outport: '<Root>/VeBPCR_P_TracBat_EChrgPowLongMod' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_P_TracBat_EChrgPowLongMod_Out_Init'
     */
    (void)Rte_Write_VeBPCR_P_TracBat_EChrgPowLongMod_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_P_TracBat_EChrgPo);

    /* Outport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Ovrd' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_Pct_HV_BatPackSOC_Ovrd_Out_Init'
     */
    (void)Rte_Write_VeBPCR_Pct_HV_BatPackSOC_Ovrd_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_Pct_HV_BatPackSOC);

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/BatModTempInit'
     */
    /* Outport: '<Root>/VeBPCR_T_BatModTmp' incorporates:
     *  DataStoreRead: '<S539>/Data Store Read'
     *  SignalConversion generated from: '<S5>/VeBPCR_T_BatModTmp'
     */
    (void)Rte_Write_VeBPCR_T_BatModTmp_Value(BPCR_ac_DW.NeBPCR_T_BatModTmp);

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* Outport: '<Root>/VeBPCR_T_HV_BatModTempAvg' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_T_HV_BatModTempAvg_Out_Init'
     */
    (void)Rte_Write_VeBPCR_T_HV_BatModTempAvg_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTempAv);

    /* Outport: '<Root>/VeBPCR_T_HV_BatModTempMax_Arb' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_T_HV_BatModTempMax_Arb_Out_Init'
     */
    (void)Rte_Write_VeBPCR_T_HV_BatModTempMax_Arb_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTemp_j);

    /* Outport: '<Root>/VeBPCR_T_HV_BatModTempMax' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_T_HV_BatModTempMax_Out_Init'
     */
    (void)Rte_Write_VeBPCR_T_HV_BatModTempMax_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTempMa);

    /* Outport: '<Root>/VeBPCR_T_HV_BatModTempMin_Arb' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_T_HV_BatModTempMin_Arb_Out_Init'
     */
    (void)Rte_Write_VeBPCR_T_HV_BatModTempMin_Arb_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTemp_p);

    /* Outport: '<Root>/VeBPCR_T_HV_BatModTempMin' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_T_HV_BatModTempMin_Out_Init'
     */
    (void)Rte_Write_VeBPCR_T_HV_BatModTempMin_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTempMi);

    /* Outport: '<Root>/VeBPCR_U_CellVoltOVThrsh' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_U_CellVoltOVThrsh_Out_Init'
     */
    (void)Rte_Write_VeBPCR_U_CellVoltOVThrsh_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_U_CellVoltOVThrsh);

    /* Outport: '<Root>/VeBPCR_U_CellVoltUVThrsh' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_U_CellVoltUVThrsh_Out_Init'
     */
    (void)Rte_Write_VeBPCR_U_CellVoltUVThrsh_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_U_CellVoltUVThrsh);

    /* Outport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_FA' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_BPCM_LIN_BusOff_FA_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LIN_BusOff_FA_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_LIN_BusOff);

    /* Outport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_BPCM_LIN_BusOff_SgnlRcvd_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LIN_BusOff_SgnlRcvd_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_LIN_BusO_f);

    /* Outport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_FA' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_BPCM_LOC_BCP_FA_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LOC_BCP_FA_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_LOC_BCP_FA);

    /* Outport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_BPCM_LOC_BCP_SgnlRcvd_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LOC_BCP_SgnlRcvd_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_LOC_BCP_Sg);

    /* Outport: '<Root>/VeBPCR_b_BPCM_LOC_BatClntHtr_FA' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_BPCM_LOC_BatClntHtr_FA_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LOC_BatClntHtr_FA_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_LOC_BatCln);

    /* Outport: '<Root>/VeBPCR_b_BPCM_LOC_BatClntHtr_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_BPCM_LOC_BatClntHtr_SgnlRcvd_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LOC_BatClntHtr_SgnlRcvd_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_LOC_BatC_e);

    /* Outport: '<Root>/VeBPCR_b_BPCM_OVActv' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_BPCM_OVActv_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_OVActv_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_OVActv_Out);

    /* Outport: '<Root>/VeBPCR_b_BPCM_UVActv' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_BPCM_UVActv_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_UVActv_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_UVActv_Out);

    /* Outport: '<Root>/VeBPCR_b_BatShtOffFlg' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_BatShtOffFlg_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_BatShtOffFlg_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_BatShtOffFlg_Ou);

    /* Outport: '<Root>/VeBPCR_b_CmdBatPwrLimSFA_Enbl' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_CmdBatPwrLimSFA_Enbl_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_CmdBatPwrLimSFA_Enbl_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_CmdBatPwrLimSFA);

    /* Outport: '<Root>/VeBPCR_b_Flst_HVBatCntrWeld_ImpdOpn' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_Flst_HVBatCntrWeld_ImpdOpn_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_Flst_HVBatCntrWeld_ImpdOpn_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_Flst_HVBatCntrW);

    /* Outport: '<Root>/VeBPCR_b_HEVOnRqBPCM_Debounced' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HEVOnRqBPCM_Debounced_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HEVOnRqBPCM_Debounced_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HEVOnRqBPCM_Deb);

    /* Outport: '<Root>/VeBPCR_b_HVBatCntrWeld_ImpdOpn' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HVBatCntrWeld_ImpdOpn_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HVBatCntrWeld_ImpdOpn_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HVBatCntrWeld_I);

    /* Outport: '<Root>/VeBPCR_b_HVBatRdy' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HVBatRdy_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HVBatRdy_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HVBatRdy_Out_In);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatChrgPwrET);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrET_FA_Ovrd' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatChrgPwrET_FA_Ovrd_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrET_FA_Ovrd_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatChrgPw_hc);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatChrgPwrLT);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrLT_FA_Ovrd' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatChrgPwrLT_FA_Ovrd_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrLT_FA_Ovrd_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatChrgPwr_h);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatChrgPwrST);

    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrST_FA_Ovrd' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatChrgPwrST_FA_Ovrd_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrST_FA_Ovrd_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatChrgPwr_g);

    /* Outport: '<Root>/VeBPCR_b_HV_BatCntctrOpenPending' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatCntctrOpenPending_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatCntctrOpenPending_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatCntctrO_m);

    /* Outport: '<Root>/VeBPCR_b_HV_BatCntctrOpenReq' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatCntctrOpenReq_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatCntctrOpenReq_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatCntctrOpe);

    /* Outport: '<Root>/VeBPCR_b_HV_BatCntctrStatFA' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatCntctrStatFA_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatCntctrStatFA_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatCntctrSta);

    /* Outport: '<Root>/VeBPCR_b_HV_BatCurrSFA' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatCurrSFA_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatCurrSFA_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatCurrSFA_O);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatDschrgPwr);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrET_FA_Ovrd' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatDschrgPwrET_FA_Ovrd_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrET_FA_Ovrd_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatDschrg_mw);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatDschrgP_m);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatDschrg_mg);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatDschrgP_l);

    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrST_FA_Ovrd' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatDschrgPwrST_FA_Ovrd_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrST_FA_Ovrd_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatDschrgP_c);

    /* Outport: '<Root>/VeBPCR_b_HV_BatMaxModTmpSFA' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatMaxModTmpSFA_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatMaxModTmpSFA_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatMaxModTmp);

    /* Outport: '<Root>/VeBPCR_b_HV_BatPackSOC_FA_Ovrd' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatPackSOC_FA_Ovrd'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatPackSOC_FA_Ovrd_Value
        (BPCR_ac_B.VariantMerge_For_Variant_Source_Variant);

    /* Outport: '<Root>/VeBPCR_b_HV_BatPackSOC_SFA' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatPackSOC_SFA_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatPackSOC_SFA_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatPackSOC_j);

    /* Outport: '<Root>/VeBPCR_b_HV_BatPackSOC_SgnlRcvd' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatPackSOC_SgnlRcvd_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatPackSOC_SgnlRcvd_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatPackSOC_S);

    /* Outport: '<Root>/VeBPCR_b_HV_BatVoltModMaxSFA' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_HV_BatVoltModMaxSFA_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatVoltModMaxSFA_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatVoltModMa);

    /* Outport: '<Root>/VeBPCR_b_MIL_OnRq_BPCM_Debounced' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_MIL_OnRq_BPCM_Debounced_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_MIL_OnRq_BPCM_Debounced_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_MIL_OnRq_BPCM_D);

    /* Outport: '<Root>/VeBPCR_b_PWMTimerOOR' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_PWMTimerOOR_Init'
     */
    (void)Rte_Write_VeBPCR_b_PWMTimerOOR_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_PWMTimerOOR_Ini);

    /* Outport: '<Root>/VeBPCR_b_ThrmlRnawyFlg' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_ThrmlRnawyFlg_Out_Init'
     */
    (void)Rte_Write_VeBPCR_b_ThrmlRnawyFlg_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_b_ThrmlRnawyFlg_O);

    /* Outport: '<Root>/VeBPCR_e_HV_BatCntctrStat' incorporates:
     *  SignalConversion generated from: '<S549>/VeBPCR_e_HV_BatCntctrStat_Out_Init'
     *  SignalConversion generated from: '<S5>/VeBPCR_e_HV_BatCntctrStat_Out_Init'
     */
    (void)Rte_Write_VeBPCR_e_HV_BatCntctrStat_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_e_HV_BatCntctrSta);

    /* Outport: '<Root>/VeBPCR_e_PWMDecodedCntctrSts' incorporates:
     *  SignalConversion generated from: '<S542>/VeBPCR_e_PWMDecodedCntctrSts_Init'
     *  SignalConversion generated from: '<S5>/VeBPCR_e_PWMDecodedCntctrSts_Init'
     */
    (void)Rte_Write_VeBPCR_e_PWMDecodedCntctrSts_Value
        (BPCR_ac_B.OutportBufferForVeBPCR_e_PWMDecodedCntct);

    /* Merge: '<Root>/Merge_81' incorporates:
     *  SignalConversion generated from: '<S5>/BSW_PWMCntctrTmr_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_BSW_PWMCntctrTmr_write_IRV
        (BPCR_ac_B.OutportBufferForBSW_PWMCntctrTmr);

    /* Merge: '<Root>/Merge_66' incorporates:
     *  SignalConversion generated from: '<S5>/BSW_PWMTmrRcvd_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_BSW_PWMTmrRcvd_write_IRV
        (BPCR_ac_B.OutportBufferForBSW_PWMTmrRcvd);

    /* Merge: '<Root>/Merge_145_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/CellVoltHighThrshFAInit_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_CellVoltHighThrshFAInit_write_IRV
        (BPCR_ac_B.OutportBufferForCellVoltHighThrshFAInit);

    /* Merge: '<Root>/Merge_118_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/CellVoltHighThrsh_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_CellVoltHighThrsh_write_IRV
        (BPCR_ac_B.OutportBufferForCellVoltHighThrsh);

    /* Merge: '<Root>/Merge_146_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/CellVoltLowThrshFAInit_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_CellVoltLowThrshFAInit_write_IRV
        (BPCR_ac_B.OutportBufferForCellVoltLowThrshFAInit);

    /* Merge: '<Root>/Merge_115_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/CellVoltLowThrsh_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_CellVoltLowThrsh_write_IRV
        (BPCR_ac_B.OutportBufferForCellVoltLowThrsh);

    /* Merge: '<Root>/Merge_69' incorporates:
     *  SignalConversion generated from: '<S5>/CntctrCntrl_PWM_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_CntctrCntrl_PWM_write_IRV
        (BPCR_ac_B.OutportBufferForCntctrCntrl_PWM);

    /* Merge: '<Root>/Merge_61_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HEVOnRqBPCM_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HEVOnRqBPCM_write_IRV
        (BPCR_ac_B.OutportBufferForHEVOnRqBPCM);

    /* Merge: '<Root>/Merge_24_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatChrgPowET_FA_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HVBatChrgPowET_FA_Init_write_IRV
        (BPCR_ac_B.OutportBufferForHVBatChrgPowET_FA_Init);

    /* Merge: '<Root>/Merge_25_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatChrgPowET_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HVBatChrgPowET_Init_write_IRV
        (BPCR_ac_B.OutportBufferForHVBatChrgPowET_Init);

    /* Merge: '<Root>/Merge_27_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatChrgPowLT_FA_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HVBatChrgPowLT_FA_Init_write_IRV
        (BPCR_ac_B.OutportBufferForHVBatChrgPowLT_FA_Init);

    /* Merge: '<Root>/Merge_26_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatChrgPowLT_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HVBatChrgPowLT_Init_write_IRV
        (BPCR_ac_B.OutportBufferForHVBatChrgPowLT_Init);

    /* Merge: '<Root>/Merge_14_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatChrgPowST_FA_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HVBatChrgPowST_FA_Init_write_IRV
        (BPCR_ac_B.OutportBufferForHVBatChrgPowST_FA_Init);

    /* Merge: '<Root>/Merge_15_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatChrgPowST_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HVBatChrgPowST_Init_write_IRV
        (BPCR_ac_B.OutportBufferForHVBatChrgPowST_Init);

    /* Merge: '<Root>/Merge_64' incorporates:
     *  SignalConversion generated from: '<S546>/HVBatCntrWeld_ImpdOpn'
     *  SignalConversion generated from: '<S5>/HVBatCntrWeld_ImpdOpn_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HVBatCntrWeld_ImpdOpn_write_IRV
        (BPCR_ac_B.OutportBufferForHVBatCntrWeld_ImpdOpn);

    /* Merge: '<Root>/Merge_13_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatDschrgPowET_FA_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HVBatDschrgPowET_FA_Init_write_IRV
        (BPCR_ac_B.OutportBufferForHVBatDschrgPowET_FA_Init);

    /* Merge: '<Root>/Merge_18_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatDschrgPowET_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HVBatDschrgPowET_Init_write_IRV
        (BPCR_ac_B.OutportBufferForHVBatDschrgPowET_Init);

    /* Merge: '<Root>/Merge_20_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatDschrgPowLT_FA_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HVBatDschrgPowLT_FA_Init_write_IRV
        (BPCR_ac_B.OutportBufferForHVBatDschrgPowLT_FA_Init);

    /* Merge: '<Root>/Merge_21_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatDschrgPowLT_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HVBatDschrgPowLT_Init_write_IRV
        (BPCR_ac_B.OutportBufferForHVBatDschrgPowLT_Init);

    /* Merge: '<Root>/Merge_22_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatDschrgPowST_FA_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HVBatDschrgPowST_FA_Init_write_IRV
        (BPCR_ac_B.OutportBufferForHVBatDschrgPowST_FA_Init);

    /* Merge: '<Root>/Merge_23_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatDschrgPowST_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HVBatDschrgPowST_Init_write_IRV
        (BPCR_ac_B.OutportBufferForHVBatDschrgPowST_Init);

    /* Merge: '<Root>/Merge_17_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatPackSOC_FA_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HVBatPackSOC_FA_Init_write_IRV
        (BPCR_ac_B.OutportBufferForHVBatPackSOC_FA_Init);

    /* Merge: '<Root>/Merge_16_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatPackSOC_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HVBatPackSOC_Init_write_IRV
        (BPCR_ac_B.OutportBufferForHVBatPackSOC_Init);

    /* Merge: '<Root>/Merge_78' incorporates:
     *  SignalConversion generated from: '<S5>/HVBatRdy_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HVBatRdy_Init_write_IRV
        (BPCR_ac_B.OutportBufferForHVBatRdy_Init);

    /* Merge: '<Root>/Merge_77' incorporates:
     *  SignalConversion generated from: '<S5>/HVBat_ThrmlRnawy_WarnFA_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HVBat_ThrmlRnawy_WarnFA_Init_write_IRV
        (BPCR_ac_B.OutportBufferForHVBat_ThrmlRnawy_WarnFA_);

    /* Merge: '<Root>/Merge_76' incorporates:
     *  SignalConversion generated from: '<S546>/HVBat_ThrmlRnawy_Warn_Init'
     *  SignalConversion generated from: '<S5>/HVBat_ThrmlRnawy_Warn_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HVBat_ThrmlRnawy_Warn_Init_write_IRV
        (BPCR_ac_B.OutportBufferForHVBat_ThrmlRnawy_Warn_In);

    /* Merge: '<Root>/Merge_84' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatCntctrOpenPending_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HV_BatCntctrOpenPending_write_IRV
        (BPCR_ac_B.OutportBufferForHV_BatCntctrOpenPending);

    /* Merge: '<Root>/Merge_67' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatCntctrOpenReq_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HV_BatCntctrOpenReq_write_IRV
        (BPCR_ac_B.OutportBufferForHV_BatCntctrOpenReq);

    /* Merge: '<Root>/Merge_85' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatCntctrStatFA_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HV_BatCntctrStatFA_write_IRV
        (BPCR_ac_B.OutportBufferForHV_BatCntctrStatFA);

    /* Merge: '<Root>/Merge_57' incorporates:
     *  SignalConversion generated from: '<S546>/HV_BatCntctrStat'
     *  SignalConversion generated from: '<S5>/HV_BatCntctrStat_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HV_BatCntctrStat_write_IRV
        (BPCR_ac_B.OutportBufferForHV_BatCntctrStat);

    /* Merge: '<Root>/Merge_120_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatCurrFA_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HV_BatCurrFA_write_IRV
        (BPCR_ac_B.OutportBufferForHV_BatCurrFA);

    /* Merge: '<Root>/Merge_113_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatModTempAvgFA_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HV_BatModTempAvgFA_write_IRV
        (BPCR_ac_B.OutportBufferForHV_BatModTempAvgFA);

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Init_VoltageCurrentTemp'
     */
    /* Merge: '<Root>/Merge_114' incorporates:
     *  DataStoreRead: '<S547>/Data Store Read2'
     *  SignalConversion generated from: '<S5>/HV_BatModTempAvg_write'
     */
    Rte_IrvWrite_BPCR_PwrOn_HV_BatModTempAvg_write_IRV
        (BPCR_ac_DW.NeBPCR_T_BatModTmp);

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* Merge: '<Root>/Merge_153_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatModTempMaxFA_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HV_BatModTempMaxFA_write_IRV
        (BPCR_ac_B.OutportBufferForHV_BatModTempMaxFA);

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Init_VoltageCurrentTemp'
     */
    /* Merge: '<Root>/Merge_154' incorporates:
     *  DataStoreRead: '<S547>/Data Store Read'
     *  SignalConversion generated from: '<S5>/HV_BatModTempMax_write'
     */
    Rte_IrvWrite_BPCR_PwrOn_HV_BatModTempMax_write_IRV
        (BPCR_ac_DW.NeBPCR_T_BatModTmp);

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* Merge: '<Root>/Merge_108_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatModTempMinFA_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HV_BatModTempMinFA_write_IRV
        (BPCR_ac_B.OutportBufferForHV_BatModTempMinFA);

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Init_VoltageCurrentTemp'
     */
    /* Merge: '<Root>/Merge_109' incorporates:
     *  DataStoreRead: '<S547>/Data Store Read1'
     *  SignalConversion generated from: '<S5>/HV_BatModTempMin_write'
     */
    Rte_IrvWrite_BPCR_PwrOn_HV_BatModTempMin_write_IRV
        (BPCR_ac_DW.NeBPCR_T_BatModTmp);

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* Merge: '<Root>/Merge_107_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatModVoltMaxFA_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HV_BatModVoltMaxFA_write_IRV
        (BPCR_ac_B.OutportBufferForHV_BatModVoltMaxFA);

    /* Merge: '<Root>/Merge_143_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatModVoltMax_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HV_BatModVoltMax_write_IRV
        (BPCR_ac_B.OutportBufferForHV_BatModVoltMax);

    /* Merge: '<Root>/Merge_151_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatModVoltMinFA_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HV_BatModVoltMinFA_write_IRV
        (BPCR_ac_B.OutportBufferForHV_BatModVoltMinFA);

    /* Merge: '<Root>/Merge_152_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatModVoltMin_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HV_BatModVoltMin_write_IRV
        (BPCR_ac_B.OutportBufferForHV_BatModVoltMin);

    /* Merge: '<Root>/Merge_62' incorporates:
     *  SignalConversion generated from: '<S5>/HV_BatRdySgnl_Rcvd_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_HV_BatRdySgnl_Rcvd_write_IRV
        (BPCR_ac_B.OutportBufferForHV_BatRdySgnl_Rcvd);

    /* Merge: '<Root>/Merge_74' incorporates:
     *  SignalConversion generated from: '<S5>/MILOnRqBPCM_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_MILOnRqBPCM_Init_write_IRV
        (BPCR_ac_B.OutportBufferForMILOnRqBPCM_Init);

    /* Merge: '<Root>/Merge_54' incorporates:
     *  SignalConversion generated from: '<S5>/PwrLimON'
     * */
    Rte_IrvWrite_BPCR_PwrOn_PwrLimON_IRV(BPCR_ac_B.OutportBufferForPwrLimON);

    /* Merge: '<Root>/Merge_71_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/TracBat_EChrgPowLongV_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_TracBat_EChrgPowLongV_write_IRV
        (BPCR_ac_B.OutportBufferForTracBat_EChrgPowLongV);

    /* Merge: '<Root>/Merge_70_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/TracBat_EChrgPowLong_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_TracBat_EChrgPowLong_write_IRV
        (BPCR_ac_B.OutportBufferForTracBat_EChrgPowLong);

    /* SignalConversion generated from: '<S5>/VeBPCI_U_BatVoltModMaxArb_Init_write' */
    Rte_IrvWrite_BPCR_PwrOn_VeBPCI_U_BatVoltModMaxArb_Init_write_IRV
        (VeBPCI_U_BatVoltModMaxArb_Init);

    /* Merge: '<Root>/VeBPCI_U_BatVoltModMaxArb_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCI_U_BatVoltModMaxArb_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_VeBPCI_U_BatVoltModMaxArb_write_IRV
        (BPCR_ac_B.OutportBufferForVeBPCI_U_BatVoltModMaxAr);

    /* SignalConversion generated from: '<S5>/VeBPCI_U_BatVoltModMinArb_Init_write' */
    Rte_IrvWrite_BPCR_PwrOn_VeBPCI_U_BatVoltModMinArb_Init_write_IRV
        (VeBPCI_U_BatVoltModMinArb_Init);

    /* Merge: '<Root>/VeBPCI_U_BatVoltModMinArb_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCI_U_BatVoltModMinArb_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_VeBPCI_U_BatVoltModMinArb_write_IRV
        (BPCR_ac_B.OutportBufferForVeBPCI_U_BatVoltModMinAr);

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/BatModTempInit'
     */
    /* Merge: '<Root>/Merge_11_Irv' incorporates:
     *  DataStoreRead: '<S539>/Data Store Read'
     *  SignalConversion generated from: '<S5>/VeBPCR_T_BatModTmp_write'
     */
    Rte_IrvWrite_BPCR_PwrOn_VeBPCR_T_BatModTmp_write_IRV
        (BPCR_ac_DW.NeBPCR_T_BatModTmp);

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* Merge: '<Root>/VeBPCR_T_HV_BatModTempMax_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_T_HV_BatModTempMax_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_VeBPCR_T_HV_BatModTempMax_write_IRV
        (BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTemp_f);

    /* Merge: '<Root>/VeBPCR_T_HV_BatModTempMin_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_T_HV_BatModTempMin_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_VeBPCR_T_HV_BatModTempMin_write_IRV
        (BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTemp_i);

    /* Merge: '<Root>/VeBPCR_b_PWMBlankAct_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_PWMBlankAct_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_VeBPCR_b_PWMBlankAct_write_IRV
        (BPCR_ac_B.OutportBufferForVeBPCR_b_PWMBlankAct_wri);

    /* Merge: '<Root>/Merge_2_Irv' incorporates:
     *  SignalConversion generated from: '<S5>/VeBPCR_b_PWMTimerOOR_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_VeBPCR_b_PWMTimerOOR_write_IRV
        (BPCR_ac_B.OutportBufferForVeBPCR_b_PWMTimerOOR_Ini);

    /* Merge: '<Root>/Merge_1_Irv' incorporates:
     *  SignalConversion generated from: '<S542>/VeBPCR_e_PWMDecodedCntctrSts_Init'
     *  SignalConversion generated from: '<S5>/VeBPCR_e_PWMDecodedCntctrSts_Init_write'
     * */
    Rte_IrvWrite_BPCR_PwrOn_VeBPCR_e_PWMDecodedCntctrSts_write_IRV
        (BPCR_ac_B.OutportBufferForVeBPCR_e_PWMDecodedCntct);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
FUNC(void, BPCR_CODE) TmotBPCR_b_HVBatCntrWeld_ImpdOpn(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotBPCR_b_HVBatCntrWeld_ImpdOpn' */
    /* Merge: '<Root>/Merge_95' incorporates:
     *  Chart: '<S164>/TmotBPCR_b_HVBatCntrWeld_ImpdOpnChrt'
     *  SignalConversion generated from: '<S164>/VeBPCR_b_HVBatCntrWeld_ImpdOpnSgnl_Rcvd_write'
     */
    /* Gateway: TmotBPCR_b_HVBatCntrWeld_ImpdOpn/TmotBPCR_b_HVBatCntrWeld_ImpdOpnChrt */
    /* During: TmotBPCR_b_HVBatCntrWeld_ImpdOpn/TmotBPCR_b_HVBatCntrWeld_ImpdOpnChrt */
    /* Entry Internal: TmotBPCR_b_HVBatCntrWeld_ImpdOpn/TmotBPCR_b_HVBatCntrWeld_ImpdOpnChrt */
    /* Transition: '<S808>:2' */
    Rte_IrvWrite_TmotBPCR_b_HVBatCntrWeld_ImpdOpn_VeBPCR_b_HVBatCntrWeld_ImpdOpnSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotBPCR_b_HVBatCntrWeld_ImpdOpn' */
}

/* Output function */
FUNC(void, BPCR_CODE) TmotBPCR_b_HVBatRdy(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotBPCR_b_HVBatRdy' */
    /* Outport: '<Root>/VeBPCR_e_HVBatRdy' incorporates:
     *  Chart: '<S165>/TmotBPCR_b_HVBatRdyChrt'
     *  SignalConversion generated from: '<S165>/VeBPCR_e_HVBatRdy'
     */
    /* Gateway: TmotBPCR_b_HVBatRdy/TmotBPCR_b_HVBatRdyChrt */
    /* During: TmotBPCR_b_HVBatRdy/TmotBPCR_b_HVBatRdyChrt */
    /* Entry Internal: TmotBPCR_b_HVBatRdy/TmotBPCR_b_HVBatRdyChrt */
    /* Transition: '<S809>:2' */
    (void)Rte_Write_VeBPCR_e_HVBatRdy_Value((uint8)4U);

    /* Merge: '<Root>/Merge_62' incorporates:
     *  Chart: '<S165>/TmotBPCR_b_HVBatRdyChrt'
     *  SignalConversion generated from: '<S165>/VeBPCR_b_HVBatRdySgnl_Rcvd_write'
     */
    Rte_IrvWrite_TmotBPCR_b_HVBatRdy_HV_BatRdySgnl_Rcvd_write_IRV(false);

    /* End of Outputs for SubSystem: '<Root>/TmotBPCR_b_HVBatRdy' */
}

/* Output function */
FUNC(void, BPCR_CODE) TmotBPCR_b_HV_BatChrgPwrET(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotBPCR_b_HV_BatChrgPwrET' */
    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd' incorporates:
     *  Chart: '<S166>/TmotBPCR_b_HV_BatChrgPwrETChrt'
     *  SignalConversion generated from: '<S166>/VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd'
     */
    /* Gateway: TmotBPCR_b_HV_BatChrgPwrET/TmotBPCR_b_HV_BatChrgPwrETChrt */
    /* During: TmotBPCR_b_HV_BatChrgPwrET/TmotBPCR_b_HV_BatChrgPwrETChrt */
    /* Entry Internal: TmotBPCR_b_HV_BatChrgPwrET/TmotBPCR_b_HV_BatChrgPwrETChrt */
    /* Transition: '<S810>:2' */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd_Value(false);

    /* Merge: '<Root>/Merge_40_Irv' incorporates:
     *  Chart: '<S166>/TmotBPCR_b_HV_BatChrgPwrETChrt'
     *  SignalConversion generated from: '<S166>/VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd_write'
     */
    Rte_IrvWrite_TmotBPCR_b_HV_BatChrgPwrET_VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotBPCR_b_HV_BatChrgPwrET' */
}

/* Output function */
FUNC(void, BPCR_CODE) TmotBPCR_b_HV_BatChrgPwrLT(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotBPCR_b_HV_BatChrgPwrLT' */
    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd' incorporates:
     *  Chart: '<S167>/TmotBPCR_b_HV_BatChrgPwrLTChrt'
     *  SignalConversion generated from: '<S167>/VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd'
     */
    /* Gateway: TmotBPCR_b_HV_BatChrgPwrLT/TmotBPCR_b_HV_BatChrgPwrLTChrt */
    /* During: TmotBPCR_b_HV_BatChrgPwrLT/TmotBPCR_b_HV_BatChrgPwrLTChrt */
    /* Entry Internal: TmotBPCR_b_HV_BatChrgPwrLT/TmotBPCR_b_HV_BatChrgPwrLTChrt */
    /* Transition: '<S811>:2' */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd_Value(false);

    /* Merge: '<Root>/Merge_42_Irv' incorporates:
     *  Chart: '<S167>/TmotBPCR_b_HV_BatChrgPwrLTChrt'
     *  SignalConversion generated from: '<S167>/VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd_write'
     */
    Rte_IrvWrite_TmotBPCR_b_HV_BatChrgPwrLT_VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotBPCR_b_HV_BatChrgPwrLT' */
}

/* Output function */
FUNC(void, BPCR_CODE) TmotBPCR_b_HV_BatChrgPwrST(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotBPCR_b_HV_BatChrgPwrST' */
    /* Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd' incorporates:
     *  Chart: '<S168>/TmotBPCR_b_HV_BatChrgPwrSTChrt'
     *  SignalConversion generated from: '<S168>/VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd'
     */
    /* Gateway: TmotBPCR_b_HV_BatChrgPwrST/TmotBPCR_b_HV_BatChrgPwrSTChrt */
    /* During: TmotBPCR_b_HV_BatChrgPwrST/TmotBPCR_b_HV_BatChrgPwrSTChrt */
    /* Entry Internal: TmotBPCR_b_HV_BatChrgPwrST/TmotBPCR_b_HV_BatChrgPwrSTChrt */
    /* Transition: '<S812>:2' */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd_Value(false);

    /* Merge: '<Root>/Merge_30_Irv' incorporates:
     *  Chart: '<S168>/TmotBPCR_b_HV_BatChrgPwrSTChrt'
     *  SignalConversion generated from: '<S168>/VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd_write'
     */
    Rte_IrvWrite_TmotBPCR_b_HV_BatChrgPwrST_VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotBPCR_b_HV_BatChrgPwrST' */
}

/* Output function */
FUNC(void, BPCR_CODE) TmotBPCR_b_HV_BatDschrgPwrET(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotBPCR_b_HV_BatDschrgPwrET' */
    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd' incorporates:
     *  Chart: '<S169>/TmotBPCR_b_HV_BatDschrgPwrETChrt'
     *  SignalConversion generated from: '<S169>/VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd'
     */
    /* Gateway: TmotBPCR_b_HV_BatDschrgPwrET/TmotBPCR_b_HV_BatDschrgPwrETChrt */
    /* During: TmotBPCR_b_HV_BatDschrgPwrET/TmotBPCR_b_HV_BatDschrgPwrETChrt */
    /* Entry Internal: TmotBPCR_b_HV_BatDschrgPwrET/TmotBPCR_b_HV_BatDschrgPwrETChrt */
    /* Transition: '<S813>:2' */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd_Value(false);

    /* Merge: '<Root>/Merge_35_Irv' incorporates:
     *  Chart: '<S169>/TmotBPCR_b_HV_BatDschrgPwrETChrt'
     *  SignalConversion generated from: '<S169>/VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd_write'
     */
    Rte_IrvWrite_TmotBPCR_b_HV_BatDschrgPwrET_VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotBPCR_b_HV_BatDschrgPwrET' */
}

/* Output function */
FUNC(void, BPCR_CODE) TmotBPCR_b_HV_BatDschrgPwrLT(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotBPCR_b_HV_BatDschrgPwrLT' */
    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd' incorporates:
     *  Chart: '<S170>/TmotBPCR_b_HV_BatDschrgPwrLTChrt'
     *  SignalConversion generated from: '<S170>/VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd'
     */
    /* Gateway: TmotBPCR_b_HV_BatDschrgPwrLT/TmotBPCR_b_HV_BatDschrgPwrLTChrt */
    /* During: TmotBPCR_b_HV_BatDschrgPwrLT/TmotBPCR_b_HV_BatDschrgPwrLTChrt */
    /* Entry Internal: TmotBPCR_b_HV_BatDschrgPwrLT/TmotBPCR_b_HV_BatDschrgPwrLTChrt */
    /* Transition: '<S814>:2' */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd_Value(false);

    /* Merge: '<Root>/Merge_36_Irv' incorporates:
     *  Chart: '<S170>/TmotBPCR_b_HV_BatDschrgPwrLTChrt'
     *  SignalConversion generated from: '<S170>/VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd_write'
     */
    Rte_IrvWrite_TmotBPCR_b_HV_BatDschrgPwrLT_VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotBPCR_b_HV_BatDschrgPwrLT' */
}

/* Output function */
FUNC(void, BPCR_CODE) TmotBPCR_b_HV_BatDschrgPwrST(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotBPCR_b_HV_BatDschrgPwrST' */
    /* Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd' incorporates:
     *  Chart: '<S171>/TmotBPCR_b_HV_BatDschrgPwrSTChrt'
     *  SignalConversion generated from: '<S171>/VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd'
     */
    /* Gateway: TmotBPCR_b_HV_BatDschrgPwrST/TmotBPCR_b_HV_BatDschrgPwrSTChrt */
    /* During: TmotBPCR_b_HV_BatDschrgPwrST/TmotBPCR_b_HV_BatDschrgPwrSTChrt */
    /* Entry Internal: TmotBPCR_b_HV_BatDschrgPwrST/TmotBPCR_b_HV_BatDschrgPwrSTChrt */
    /* Transition: '<S815>:2' */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd_Value(false);

    /* Merge: '<Root>/Merge_37_Irv' incorporates:
     *  Chart: '<S171>/TmotBPCR_b_HV_BatDschrgPwrSTChrt'
     *  SignalConversion generated from: '<S171>/VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd_write'
     */
    Rte_IrvWrite_TmotBPCR_b_HV_BatDschrgPwrST_VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotBPCR_b_HV_BatDschrgPwrST' */
}

/* Output function */
FUNC(void, BPCR_CODE) TmotBPCR_b_HV_BatModTempAvg(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotBPCR_b_HV_BatModTempAvg' */
    /* Merge: '<Root>/Merge_186' incorporates:
     *  Chart: '<S172>/TmotBPCR_b_HV_BatModTempAvgChrt'
     *  SignalConversion generated from: '<S172>/VeBPCR_b_HV_BatModTempAvgSgnl_Rcvd_write'
     */
    /* Gateway: TmotBPCR_b_HV_BatModTempAvg/TmotBPCR_b_HV_BatModTempAvgChrt */
    /* During: TmotBPCR_b_HV_BatModTempAvg/TmotBPCR_b_HV_BatModTempAvgChrt */
    /* Entry Internal: TmotBPCR_b_HV_BatModTempAvg/TmotBPCR_b_HV_BatModTempAvgChrt */
    /* Transition: '<S816>:2' */
    Rte_IrvWrite_TmotBPCR_b_HV_BatModTempAvg_VeBPCR_b_HV_BatModTempAvgSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotBPCR_b_HV_BatModTempAvg' */
}

/* Output function */
FUNC(void, BPCR_CODE) TmotBPCR_b_HV_BatModTempMax(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotBPCR_b_HV_BatModTempMax' */
    /* Merge: '<Root>/Merge_184' incorporates:
     *  Chart: '<S173>/TmotBPCR_b_HV_BatModTempMaxChrt'
     *  SignalConversion generated from: '<S173>/VeBPCR_b_HV_BatModTempMaxSgnl_Rcvd_write'
     */
    /* Gateway: TmotBPCR_b_HV_BatModTempMax/TmotBPCR_b_HV_BatModTempMaxChrt */
    /* During: TmotBPCR_b_HV_BatModTempMax/TmotBPCR_b_HV_BatModTempMaxChrt */
    /* Entry Internal: TmotBPCR_b_HV_BatModTempMax/TmotBPCR_b_HV_BatModTempMaxChrt */
    /* Transition: '<S817>:2' */
    Rte_IrvWrite_TmotBPCR_b_HV_BatModTempMax_VeBPCR_b_HV_BatModTempMaxSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotBPCR_b_HV_BatModTempMax' */
}

/* Output function */
FUNC(void, BPCR_CODE) TmotBPCR_b_HV_BatModTempMin(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotBPCR_b_HV_BatModTempMin' */
    /* Merge: '<Root>/Merge_185' incorporates:
     *  Chart: '<S174>/TmotBPCR_b_HV_BatModTempMinChrt'
     *  SignalConversion generated from: '<S174>/VeBPCR_b_HV_BatModTempMinSgnl_Rcvd_write'
     */
    /* Gateway: TmotBPCR_b_HV_BatModTempMin/TmotBPCR_b_HV_BatModTempMinChrt */
    /* During: TmotBPCR_b_HV_BatModTempMin/TmotBPCR_b_HV_BatModTempMinChrt */
    /* Entry Internal: TmotBPCR_b_HV_BatModTempMin/TmotBPCR_b_HV_BatModTempMinChrt */
    /* Transition: '<S818>:2' */
    Rte_IrvWrite_TmotBPCR_b_HV_BatModTempMin_VeBPCR_b_HV_BatModTempMinSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotBPCR_b_HV_BatModTempMin' */
}

/* Output function */
FUNC(void, BPCR_CODE) TmotBPCR_b_HV_BatPackSOC(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotBPCR_b_HV_BatPackSOC' */
    /* Outport: '<Root>/VeBPCR_b_HV_BatPackSOC_SgnlRcvd' incorporates:
     *  Chart: '<S175>/TmotBPCR_b_HV_BatPackSOCChrt'
     *  SignalConversion generated from: '<S175>/VeBPCR_b_HV_BatPackSOCSgnl_Rcvd'
     */
    /* Gateway: TmotBPCR_b_HV_BatPackSOC/TmotBPCR_b_HV_BatPackSOCChrt */
    /* During: TmotBPCR_b_HV_BatPackSOC/TmotBPCR_b_HV_BatPackSOCChrt */
    /* Entry Internal: TmotBPCR_b_HV_BatPackSOC/TmotBPCR_b_HV_BatPackSOCChrt */
    /* Transition: '<S819>:2' */
    (void)Rte_Write_VeBPCR_b_HV_BatPackSOC_SgnlRcvd_Value(false);

    /* Merge: '<Root>/Merge_32_Irv' incorporates:
     *  Chart: '<S175>/TmotBPCR_b_HV_BatPackSOCChrt'
     *  SignalConversion generated from: '<S175>/VeBPCR_b_HV_BatPackSOCSgnl_Rcvd_write'
     */
    Rte_IrvWrite_TmotBPCR_b_HV_BatPackSOC_VeBPCR_b_HV_BatPackSOCSgnl_Rcvd_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/TmotBPCR_b_HV_BatPackSOC' */
}

/* Output function */
FUNC(void, BPCR_CODE) TmotBPCR_e_BPCM_LIN_BusOff(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotBPCR_e_BPCM_LIN_BusOff' */
    /* Outport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_SgnlRcvd' incorporates:
     *  Chart: '<S176>/TmotBPCR_e_BPCM_LIN_BusOffChrt'
     *  SignalConversion generated from: '<S176>/VeBPCR_e_BPCM_LIN_BusOffSgnl_Rcvd'
     */
    /* Gateway: TmotBPCR_e_BPCM_LIN_BusOff/TmotBPCR_e_BPCM_LIN_BusOffChrt */
    /* During: TmotBPCR_e_BPCM_LIN_BusOff/TmotBPCR_e_BPCM_LIN_BusOffChrt */
    /* Entry Internal: TmotBPCR_e_BPCM_LIN_BusOff/TmotBPCR_e_BPCM_LIN_BusOffChrt */
    /* Transition: '<S820>:2' */
    (void)Rte_Write_VeBPCR_b_BPCM_LIN_BusOff_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotBPCR_e_BPCM_LIN_BusOff' */
}

/* Output function */
FUNC(void, BPCR_CODE) TmotBPCR_e_BPCM_LOC_BCP(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotBPCR_e_BPCM_LOC_BCP' */
    /* Outport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_SgnlRcvd' incorporates:
     *  Chart: '<S177>/TmotBPCR_e_BPCM_LOC_BCPChrt'
     *  SignalConversion generated from: '<S177>/VeBPCR_e_BPCM_LOC_BCPSgnl_Rcvd'
     */
    /* Gateway: TmotBPCR_e_BPCM_LOC_BCP/TmotBPCR_e_BPCM_LOC_BCPChrt */
    /* During: TmotBPCR_e_BPCM_LOC_BCP/TmotBPCR_e_BPCM_LOC_BCPChrt */
    /* Entry Internal: TmotBPCR_e_BPCM_LOC_BCP/TmotBPCR_e_BPCM_LOC_BCPChrt */
    /* Transition: '<S821>:2' */
    (void)Rte_Write_VeBPCR_b_BPCM_LOC_BCP_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotBPCR_e_BPCM_LOC_BCP' */
}

/* Output function */
FUNC(void, BPCR_CODE) TmotBPCR_e_BPCM_LOC_BatClntHtr(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotBPCR_e_BPCM_LOC_BatClntHtr' */
    /* Outport: '<Root>/VeBPCR_b_BPCM_LOC_BatClntHtr_SgnlRcvd' incorporates:
     *  Chart: '<S178>/TmotBPCR_e_BPCM_LOC_BatClntHtrChrt'
     *  SignalConversion generated from: '<S178>/VeBPCR_e_BPCM_LOC_BatClntHtrSgnl_Rcvd'
     */
    /* Gateway: TmotBPCR_e_BPCM_LOC_BatClntHtr/TmotBPCR_e_BPCM_LOC_BatClntHtrChrt */
    /* During: TmotBPCR_e_BPCM_LOC_BatClntHtr/TmotBPCR_e_BPCM_LOC_BatClntHtrChrt */
    /* Entry Internal: TmotBPCR_e_BPCM_LOC_BatClntHtr/TmotBPCR_e_BPCM_LOC_BatClntHtrChrt */
    /* Transition: '<S822>:2' */
    (void)Rte_Write_VeBPCR_b_BPCM_LOC_BatClntHtr_SgnlRcvd_Value(false);

    /* End of Outputs for SubSystem: '<Root>/TmotBPCR_e_BPCM_LOC_BatClntHtr' */
}

/* Model initialize function */
FUNC(void, BPCR_CODE) BPCR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        BPCR_ac_B.OutportBufferForHVTracBatCntctrConfig =
            CeBPCR_e_HVTracBatConfig_Closed_Parallel;
        BPCR_ac_B.OutportBufferForHVDcChargeTypeStat =
            CeBPCR_e_HVDcChargeStat_400V;
    }

    /* Start for DataStoreMemory: '<Root>/DSM_1' */
    BPCR_ac_DW.NeBPCR_T_BatModTmp = (-100.0F);

    /* Start for DataStoreMemory: '<Root>/DSM_10' */
    BPCR_ac_DW.DeBPCR_P_HV_BatDschrgPwrST = (-100.0F);

    /* Start for DataStoreMemory: '<Root>/DSM_4' */
    BPCR_ac_DW.DeBPCR_Pct_HV_BatSOC_DS = (-100.0F);

    /* Start for DataStoreMemory: '<Root>/DSM_5' */
    BPCR_ac_DW.DeBPCR_P_HV_BatChrgPwrST = (-100.0F);

    /* Start for DataStoreMemory: '<Root>/DSM_6' */
    BPCR_ac_DW.DeBPCR_P_HV_BatChrgPwrET = (-100.0F);

    /* Start for DataStoreMemory: '<Root>/DSM_7' */
    BPCR_ac_DW.DeBPCR_P_HV_BatChrgPwrLT = (-100.0F);

    /* Start for DataStoreMemory: '<Root>/DSM_8' */
    BPCR_ac_DW.DeBPCR_P_HV_BatDschrgPwrLT = (-100.0F);

    /* Start for DataStoreMemory: '<Root>/DSM_9' */
    BPCR_ac_DW.DeBPCR_P_HV_BatDschrgPwrET = (-100.0F);

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/BPCR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Init_VoltageCurrentTemp'
     */
    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_BatCurr' incorporates:
     *  Constant: '<S613>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatCurr = KeBPCI_I_HV_BatCurrDflt;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_BatCurrFA' */
    BPCR_ac_B.OutportBufferForHV_BatCurrFA = BPCR_ac_ConstB.FALSEConstant2_g;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_BatVolt' incorporates:
     *  Constant: '<S619>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatVolt = KeBPCI_U_HV_BatVoltDflt;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_BatVoltFA' */
    BPCR_ac_B.OutportBufferForHV_BatVoltFA = BPCR_ac_ConstB.FALSEConstant1_h;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_BatModVoltMax' incorporates:
     *  Constant: '<S617>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatModVoltMax = KeBPCI_U_HV_BatModVoltMaxDflt;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_BatModVoltMaxFA' */
    BPCR_ac_B.OutportBufferForHV_BatModVoltMaxFA =
        BPCR_ac_ConstB.FALSEConstant3_mp;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_BatModVoltMin' incorporates:
     *  Constant: '<S618>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatModVoltMin = KeBPCI_U_HV_BatModVoltMinDflt;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_BatModVoltMinFA' */
    BPCR_ac_B.OutportBufferForHV_BatModVoltMinFA =
        BPCR_ac_ConstB.FALSEConstant4_e;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_BatModVoltAvg' incorporates:
     *  Constant: '<S616>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatModVoltAvg = KeBPCI_U_HV_BatModVoltAvgDflt;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_BatModVoltAvgFA' */
    BPCR_ac_B.OutportBufferForHV_BatModVoltAvgFA = BPCR_ac_ConstB.FALSEConstant8;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_BatModTempMaxFA' */
    BPCR_ac_B.OutportBufferForHV_BatModTempMaxFA =
        BPCR_ac_ConstB.FALSEConstant5_a;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_BatModTempMinFA' */
    BPCR_ac_B.OutportBufferForHV_BatModTempMinFA =
        BPCR_ac_ConstB.FALSEConstant6_k;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_BatModTempAvgFA' */
    BPCR_ac_B.OutportBufferForHV_BatModTempAvgFA = BPCR_ac_ConstB.FALSEConstant9;

    /* SystemInitialize for SignalConversion generated from: '<S547>/CellVoltLowThrsh' incorporates:
     *  Constant: '<S615>/Calib'
     */
    BPCR_ac_B.OutportBufferForCellVoltLowThrsh = KeBPCI_U_CellVoltLowThrshDflt;

    /* SystemInitialize for SignalConversion generated from: '<S547>/CellVoltLowThrshFAInit' */
    BPCR_ac_B.OutportBufferForCellVoltLowThrshFAInit =
        BPCR_ac_ConstB.FALSEConstant23;

    /* SystemInitialize for SignalConversion generated from: '<S547>/CellVoltHighThrsh' incorporates:
     *  Constant: '<S614>/Calib'
     */
    BPCR_ac_B.OutportBufferForCellVoltHighThrsh = KeBPCI_U_CellVoltHighThrshDflt;

    /* SystemInitialize for SignalConversion generated from: '<S547>/CellVoltHighThrshFAInit' */
    BPCR_ac_B.OutportBufferForCellVoltHighThrshFAInit =
        BPCR_ac_ConstB.FALSEConstant24;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HVBat_NumMaxVlt' incorporates:
     *  Constant: '<S627>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBat_NumMaxVlt = KeBPCR_Cnt_HVBat_NumMaxVlt;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HVBat_NumMinVlt' incorporates:
     *  Constant: '<S628>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBat_NumMinVlt = KeBPCR_Cnt_HVBat_NumMinVlt;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HVBat_ModNumMinTmp' incorporates:
     *  Constant: '<S626>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBat_ModNumMinTmp = KeBPCR_Cnt_HVBat_ModNumMinTmp;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HVBat_ModNumMaxTmp' incorporates:
     *  Constant: '<S625>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBat_ModNumMaxTmp = KeBPCR_Cnt_HVBat_ModNumMaxTmp;

    /* SystemInitialize for SignalConversion generated from: '<S547>/OCVMinCellVoltage' incorporates:
     *  Constant: '<S624>/Calib'
     */
    BPCR_ac_B.OutportBufferForOCVMinCellVoltage = KeBPCI_U_OCVMinCellVoltageDflt;

    /* SystemInitialize for SignalConversion generated from: '<S547>/OCVMinCellVoltage_FA' */
    BPCR_ac_B.OutportBufferForOCVMinCellVoltage_FA =
        BPCR_ac_ConstB.FALSEConstant11;

    /* SystemInitialize for SignalConversion generated from: '<S547>/OCVMaxCellVoltage' incorporates:
     *  Constant: '<S623>/Calib'
     */
    BPCR_ac_B.OutportBufferForOCVMaxCellVoltage = KeBPCI_U_OCVMaxCellVoltageDflt;

    /* SystemInitialize for SignalConversion generated from: '<S547>/OCVMaxCellVoltage_FA' */
    BPCR_ac_B.OutportBufferForOCVMaxCellVoltage_FA =
        BPCR_ac_ConstB.FALSEConstant12;

    /* SystemInitialize for SignalConversion generated from: '<S547>/OCVAvgCellVoltage' incorporates:
     *  Constant: '<S622>/Calib'
     */
    BPCR_ac_B.OutportBufferForOCVAvgCellVoltage = KeBPCI_U_OCVAvgCellVoltageDflt;

    /* SystemInitialize for SignalConversion generated from: '<S547>/OCVAvgCellVoltage_FA' */
    BPCR_ac_B.OutportBufferForOCVAvgCellVoltage_FA =
        BPCR_ac_ConstB.FALSEConstant13;

    /* SystemInitialize for SignalConversion generated from: '<S547>/MaxCellDschargeImpedance' incorporates:
     *  Constant: '<S620>/Calib'
     */
    BPCR_ac_B.OutportBufferForMaxCellDschargeImpedance =
        KeBPCI_U_MaxCellDschargeImpedanceDflt;

    /* SystemInitialize for SignalConversion generated from: '<S547>/MaxCellDschargeImpedance_FA' */
    BPCR_ac_B.OutportBufferForMaxCellDschargeImpedan_b =
        BPCR_ac_ConstB.FALSEConstant16;

    /* SystemInitialize for SignalConversion generated from: '<S547>/MinCellDschargeImpedance' incorporates:
     *  Constant: '<S621>/Calib'
     */
    BPCR_ac_B.OutportBufferForMinCellDschargeImpedance =
        KeBPCI_U_MinCellDschargeImpedanceDflt;

    /* SystemInitialize for SignalConversion generated from: '<S547>/MinCellDschargeImpedance_FA' */
    BPCR_ac_B.OutportBufferForMinCellDschargeImpedan_o =
        BPCR_ac_ConstB.FALSEConstant17;

    /* SystemInitialize for SignalConversion generated from: '<S547>/MaxCellVltAlldDflt' incorporates:
     *  Constant: '<S636>/Calib'
     */
    BPCR_ac_B.OutportBufferForMaxCellVltAlldDflt = KeBPCR_U_MaxCellVltAlldDflt;

    /* SystemInitialize for SignalConversion generated from: '<S547>/MaxCellVltAlldDflt_FA' */
    BPCR_ac_B.OutportBufferForMaxCellVltAlldDflt_FA =
        BPCR_ac_ConstB.FALSEConstant19;

    /* SystemInitialize for SignalConversion generated from: '<S547>/MinCellVltAlldDflt' incorporates:
     *  Constant: '<S638>/Calib'
     */
    BPCR_ac_B.OutportBufferForMinCellVltAlldDflt = KeBPCR_U_MinCellVltAlldDflt;

    /* SystemInitialize for SignalConversion generated from: '<S547>/MinCellVltAlldDflt_FA' */
    BPCR_ac_B.OutportBufferForMinCellVltAlldDflt_FA =
        BPCR_ac_ConstB.FALSEConstant20;

    /* SystemInitialize for SignalConversion generated from: '<S547>/MaxPkVltAlldDflt' incorporates:
     *  Constant: '<S637>/Calib'
     */
    BPCR_ac_B.OutportBufferForMaxPkVltAlldDflt = KeBPCR_U_MaxPkVltAlldDflt;

    /* SystemInitialize for SignalConversion generated from: '<S547>/MaxPkVltAlldDflt_FA' */
    BPCR_ac_B.OutportBufferForMaxPkVltAlldDflt_FA =
        BPCR_ac_ConstB.FALSEConstant21;

    /* SystemInitialize for SignalConversion generated from: '<S547>/MinPkVltAlldDflt' incorporates:
     *  Constant: '<S639>/Calib'
     */
    BPCR_ac_B.OutportBufferForMinPkVltAlldDflt = KeBPCR_U_MinPkVltAlldDflt;

    /* SystemInitialize for SignalConversion generated from: '<S547>/MinPkVltAlldDflt_FA' */
    BPCR_ac_B.OutportBufferForMinPkVltAlldDflt_FA =
        BPCR_ac_ConstB.FALSEConstant22;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HVBatClgOutletTemp' incorporates:
     *  Constant: '<S631>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatClgOutletTemp = KeBPCR_T_HVBatClgOutlet_Init;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HVBatClgOutletTempFA' incorporates:
     *  Constant: '<S640>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatClgOutletTempFA =
        KeBPCR_b_HVBatClgOutletTempFA_Init;

    /* SystemInitialize for SignalConversion generated from: '<S547>/MaxChrgCurrAlwd' */
    BPCR_ac_B.OutportBufferForMaxChrgCurrAlwd = BPCR_ac_ConstB.ConstantValue7_g;

    /* SystemInitialize for SignalConversion generated from: '<S547>/MaxChgCurrAlwdFA' */
    BPCR_ac_B.OutportBufferForMaxChgCurrAlwdFA = BPCR_ac_ConstB.FALSEConstant_e;

    /* SystemInitialize for SignalConversion generated from: '<S547>/BusBarTempInit' incorporates:
     *  Constant: '<S630>/Calib'
     */
    BPCR_ac_B.OutportBufferForBusBarTempInit = KeBPCR_T_BusBarTempInit;

    /* SystemInitialize for SignalConversion generated from: '<S547>/BDUBusBarTempInit' incorporates:
     *  Constant: '<S629>/Calib'
     */
    BPCR_ac_B.OutportBufferForBDUBusBarTempInit = KeBPCR_T_BDUBusBarTempInit;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_InternalStringVolt1' incorporates:
     *  Constant: '<S633>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_InternalStringVolt1 =
        KeBPCR_U_HV_InternalStringVolt1_Init;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_InternalStringVolt1FA' */
    BPCR_ac_B.OutportBufferForHV_InternalStringVolt1FA =
        BPCR_ac_ConstB.FALSEConstant7_k;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_InternalStringVolt2' incorporates:
     *  Constant: '<S634>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_InternalStringVolt2 =
        KeBPCR_U_HV_InternalStringVolt2_Init;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_InternalStringVolt2FA' */
    BPCR_ac_B.OutportBufferForHV_InternalStringVolt2FA =
        BPCR_ac_ConstB.FALSEConstant10;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_SeriesVolt' incorporates:
     *  Constant: '<S635>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_SeriesVolt = KeBPCR_U_HV_SeriesVolt_Init;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_SeriesVoltFA' */
    BPCR_ac_B.OutportBufferForHV_SeriesVoltFA = BPCR_ac_ConstB.FALSEConstant15;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_Current_String2' incorporates:
     *  Constant: '<S641>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_Current_String2 =
        KeBPCR_I_HV_BatCurrString2_Init;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_Current_String2_FA' */
    BPCR_ac_B.OutportBufferForHV_Current_String2_FA =
        BPCR_ac_ConstB.FALSEConstant14_i;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_InternalVoltage' incorporates:
     *  Constant: '<S632>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_InternalVoltage =
        KeBPCR_U_BPCM_HV_InternalVoltage_Init;

    /* SystemInitialize for SignalConversion generated from: '<S547>/HV_InternalVoltage_FA' */
    BPCR_ac_B.OutportBufferForHV_InternalVoltage_FA =
        BPCR_ac_ConstB.FALSEConstant18;

    /* SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Init_SystemState'
     */
    /* SystemInitialize for SignalConversion generated from: '<S546>/HV_BatCntctrStat' incorporates:
     *  Constant: '<S603>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatCntctrStat = KeBPCR_e_HV_BatCntctrStat;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HV_BatCntctrStatFA' incorporates:
     *  Constant: '<S588>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatCntctrStatFA = KeBPCR_b_HV_BatCntctrStatFA;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HV_BatInrlkStat' incorporates:
     *  Constant: '<S604>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatInrlkStat = KeBPCR_e_HV_BatInrlkStat;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HV_BatInrlkStatFA' incorporates:
     *  Constant: '<S589>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatInrlkStatFA = KeBPCR_b_HV_BatInrlkStatFA;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HV_BatIsolStat' incorporates:
     *  Constant: '<S605>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatIsolStat = KeBPCR_e_HV_BatIsolStat;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HV_BatCntctrOpenReq' incorporates:
     *  Constant: '<S587>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatCntctrOpenReq = KeBPCR_b_HV_BatCntctrOpenReq;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HV_BatCntctrOpenPending' incorporates:
     *  Constant: '<S586>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatCntctrOpenPending =
        KeBPCR_b_HV_BatCntctrOpenPending;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVBattCntctrOpnTm' incorporates:
     *  Constant: '<S610>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBattCntctrOpnTm = KeBPCR_t_HVBattCntctrOpnTm;

    /* SystemInitialize for SignalConversion generated from: '<S546>/PrechrgPnltyTimer' incorporates:
     *  Constant: '<S611>/Calib'
     */
    BPCR_ac_B.OutportBufferForPrechrgPnltyTimer = KeBPCR_t_PrechrgPnltyTimer;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVBatPerWUThermal' incorporates:
     *  Constant: '<S582>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatPerWUThermal = KeBPCR_b_HVBatPerWUThermal;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVBatPerWakeUp' incorporates:
     *  Constant: '<S583>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatPerWakeUp = KeBPCR_b_HVBatPerWakeUp;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVBatSleepTime' incorporates:
     *  Constant: '<S609>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatSleepTime = KeBPCR_t_HVBatSleepTime;

    /* SystemInitialize for SignalConversion generated from: '<S546>/BPCMShtDwnRdy' incorporates:
     *  Constant: '<S595>/Calib'
     */
    BPCR_ac_B.OutportBufferForBPCMShtDwnRdy = KeBPCR_e_BPCMShtDwnRdy;

    /* SystemInitialize for SignalConversion generated from: '<S546>/PwrtrnHV_IsolStat' incorporates:
     *  Constant: '<S607>/Calib'
     */
    BPCR_ac_B.OutportBufferForPwrtrnHV_IsolStat = KeBPCR_e_PwrtrnHV_IsolStat;

    /* SystemInitialize for SignalConversion generated from: '<S546>/PwrLimON' incorporates:
     *  Constant: '<S593>/Calib'
     */
    BPCR_ac_B.OutportBufferForPwrLimON = KeBPCR_b_PwrLimON;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVBatSOH_Init' */
    BPCR_ac_B.OutportBufferForHVBatSOH_Init = BPCR_ac_ConstB.ConstantValue7;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVBatSOHLow' incorporates:
     *  Constant: '<S578>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatSOHLow = KeBPCR_Pct_HVBatSOHLow_Init;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVBatRealTimeClock' incorporates:
     *  Constant: '<S608>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatRealTimeClock =
        KeBPCR_t_HVBatRealTimeClock_Init;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVBat_RTC_FA' incorporates:
     *  Constant: '<S584>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBat_RTC_FA = KeBPCR_b_HVBat_RTC_V_Init;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVBatIntrlkIntrnlStat' incorporates:
     *  Constant: '<S599>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatIntrlkIntrnlStat =
        KeBPCR_e_HVBatIntrlkIntrnlStat_Init;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVBatIntrlkIntrnlStatFA' incorporates:
     *  Constant: '<S581>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatIntrlkIntrnlStatFA =
        KeBPCR_b_HVBatIntrlkIntrnlStatFA_Init;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HEVOnRqBPCM' incorporates:
     *  Constant: '<S580>/Calib'
     */
    BPCR_ac_B.OutportBufferForHEVOnRqBPCM = KeBPCR_b_HEVOnRqBPCM_Init;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVBatRdy' */
    BPCR_ac_B.OutportBufferForHVBatRdy = BPCR_ac_ConstB.ConstantValue2;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVBatRdy_Init' incorporates:
     *  Constant: '<S591>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatRdy_Init = KeBPCR_b_HV_BatRdy_Init;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HV_BatRdySgnl_Rcvd' incorporates:
     *  Constant: '<S590>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatRdySgnl_Rcvd = KeBPCR_b_HV_BatRdySgnl_Rcvd;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVBatCntrWeld_ImpdOpn' incorporates:
     *  Constant: '<S606>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatCntrWeld_ImpdOpn =
        KeBPCR_e_Init_HVBatCntrWeld_ImpdOpn;

    /* SystemInitialize for SignalConversion generated from: '<S546>/CntctrCntrl_PWM' incorporates:
     *  Constant: '<S576>/Calib'
     */
    BPCR_ac_B.OutportBufferForCntctrCntrl_PWM = KeBPCR_DC_CntctrCntrl_PWM;

    /* SystemInitialize for SignalConversion generated from: '<S546>/CntctrCntrl_PWM_FA' incorporates:
     *  Constant: '<S579>/Calib'
     */
    BPCR_ac_B.OutportBufferForCntctrCntrl_PWM_FA = KeBPCR_b_CntctrCntrl_PWM_FA;

    /* SystemInitialize for SignalConversion generated from: '<S546>/TracBat_EChrgPowLong' incorporates:
     *  Constant: '<S577>/Calib'
     */
    BPCR_ac_B.OutportBufferForTracBat_EChrgPowLong =
        KeBPCR_P_TracBat_EChrgPowLong;

    /* SystemInitialize for SignalConversion generated from: '<S546>/TracBat_EChrgPowLongV' incorporates:
     *  Constant: '<S594>/Calib'
     */
    BPCR_ac_B.OutportBufferForTracBat_EChrgPowLongV =
        KeBPCR_b_TracBat_EChrgPowLongV;

    /* SystemInitialize for SignalConversion generated from: '<S546>/BPCM_LIN_BusOff' incorporates:
     *  Constant: '<S596>/Calib'
     */
    BPCR_ac_B.OutportBufferForBPCM_LIN_BusOff = KeBPCR_e_BPCM_LIN_BusOff_Init;

    /* SystemInitialize for SignalConversion generated from: '<S546>/BPCM_LOC_BCP' incorporates:
     *  Constant: '<S597>/Calib'
     */
    BPCR_ac_B.OutportBufferForBPCM_LOC_BCP = KeBPCR_e_BPCM_LOC_BCP_Init;

    /* SystemInitialize for SignalConversion generated from: '<S546>/BPCM_LOC_BatClntHtr' incorporates:
     *  Constant: '<S598>/Calib'
     */
    BPCR_ac_B.OutportBufferForBPCM_LOC_BatClntHtr =
        KeBPCR_e_BPCM_LOC_BatClntHtr_Init;

    /* SystemInitialize for SignalConversion generated from: '<S546>/ChargingStat_BPCM' incorporates:
     *  Constant: '<S574>/Constant'
     */
    BPCR_ac_B.OutportBufferForChargingStat_BPCM = BPCR_ac_ConstB.Constant_c;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVBatPerWU12VChrg' */
    BPCR_ac_B.OutportBufferForHVBatPerWU12VChrg =
        BPCR_ac_ConstB.FALSEConstant1_l;

    /* SystemInitialize for SignalConversion generated from: '<S546>/ChargingStat_BPCMFA' */
    BPCR_ac_B.OutportBufferForChargingStat_BPCMFA =
        BPCR_ac_ConstB.FALSEConstant_n;

    /* SystemInitialize for SignalConversion generated from: '<S546>/BSW_PWMCntctrTmr' */
    BPCR_ac_B.OutportBufferForBSW_PWMCntctrTmr = BPCR_ac_ConstB.ConstantValue;

    /* SystemInitialize for SignalConversion generated from: '<S546>/BSW_PWMTmrRcvd' */
    BPCR_ac_B.OutportBufferForBSW_PWMTmrRcvd = BPCR_ac_ConstB.ConstantValue3;

    /* SystemInitialize for SignalConversion generated from: '<S546>/RemAmpHrCap_Init' */
    BPCR_ac_B.OutportBufferForRemAmpHrCap_Init = BPCR_ac_ConstB.ConstantValue4;

    /* SystemInitialize for SignalConversion generated from: '<S546>/RemAmpHrCapFA_Init' */
    BPCR_ac_B.OutportBufferForRemAmpHrCapFA_Init =
        BPCR_ac_ConstB.FALSEConstant2_p;

    /* SystemInitialize for SignalConversion generated from: '<S546>/MILOnRqBPCM_Init' */
    BPCR_ac_B.OutportBufferForMILOnRqBPCM_Init = BPCR_ac_ConstB.FALSEConstant3_m;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVBat_ThrmlRnawy_Warn_Init' incorporates:
     *  Constant: '<S573>/Constant'
     */
    BPCR_ac_B.OutportBufferForHVBat_ThrmlRnawy_Warn_In =
        BPCR_ac_ConstB.Constant_h;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVBat_ThrmlRnawy_WarnFA_Init' */
    BPCR_ac_B.OutportBufferForHVBat_ThrmlRnawy_WarnFA_ =
        BPCR_ac_ConstB.FALSEConstant4_i;

    /* SystemInitialize for SignalConversion generated from: '<S546>/BPCM_Comm_Fail_Init' incorporates:
     *  Constant: '<S575>/Constant'
     */
    BPCR_ac_B.OutportBufferForBPCM_Comm_Fail_Init = BPCR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S546>/BPCM_Comm_Fail_FA_Init' */
    BPCR_ac_B.OutportBufferForBPCM_Comm_Fail_FA_Init =
        BPCR_ac_ConstB.FALSEConstant5_b;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVTracBatCntctrConfig' incorporates:
     *  Constant: '<S602>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVTracBatCntctrConfig =
        KeBPCR_e_HVTracBatCntctrConfig_Init;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVTracBatCntctrConfigFA' */
    BPCR_ac_B.OutportBufferForHVTracBatCntctrConfigFA =
        BPCR_ac_ConstB.FALSEConstant6_l;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVDcChargeTypeStat' incorporates:
     *  Constant: '<S601>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVDcChargeTypeStat =
        KeBPCR_e_HVDcChargeTypeStat_Init;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HVDcChargeTypeStatFA' */
    BPCR_ac_B.OutportBufferForHVDcChargeTypeStatFA =
        BPCR_ac_ConstB.FALSEConstant7;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HV_AuxLoadOffReq' incorporates:
     *  Constant: '<S585>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_AuxLoadOffReq = KeBPCR_b_HV_AuxLoadOffReq_Init;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HV_AuxLoadOffReqFA' */
    BPCR_ac_B.OutportBufferForHV_AuxLoadOffReqFA =
        BPCR_ac_ConstB.FALSEConstant14;

    /* SystemInitialize for SignalConversion generated from: '<S546>/HV_BatIsolStat_raw' incorporates:
     *  Constant: '<S600>/Calib'
     */
    BPCR_ac_B.OutportBufferForHV_BatIsolStat_raw =
        KeBPCR_e_HV_BatIsolStat_raw_INIT;

    /* SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Init_BPCC_DecodePWM'
     */
    /* SystemInitialize for SignalConversion generated from: '<S542>/VeBPCR_e_PWMDecodedCntctrSts_Init' incorporates:
     *  Constant: '<S560>/Calib'
     */
    BPCR_ac_B.OutportBufferForVeBPCR_e_PWMDecodedCntct =
        KeBPCR_e_PWMCntctrSts_Init;

    /* SystemInitialize for SignalConversion generated from: '<S542>/VeBPCR_b_PWMTimerOOR_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_PWMTimerOOR_Ini =
        BPCR_ac_ConstB.FALSEConstant2_b;

    /* SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Init_PowerLimits'
     */
    /* SystemInitialize for SignalConversion generated from: '<S544>/HVBatDschrgPowET_Init' incorporates:
     *  Constant: '<S566>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatDschrgPowET_Init =
        KeBPCR_P_HV_BatDschrgPwrET_Init;

    /* SystemInitialize for SignalConversion generated from: '<S544>/HVBatDschrgPowET_FA_Init' */
    BPCR_ac_B.OutportBufferForHVBatDschrgPowET_FA_Init =
        BPCR_ac_ConstB.FALSEConstant;

    /* SystemInitialize for SignalConversion generated from: '<S544>/HVBatDschrgPowLT_Init' incorporates:
     *  Constant: '<S567>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatDschrgPowLT_Init =
        KeBPCR_P_HV_BatDschrgPwrLT_Init;

    /* SystemInitialize for SignalConversion generated from: '<S544>/HVBatDschrgPowLT_FA_Init' */
    BPCR_ac_B.OutportBufferForHVBatDschrgPowLT_FA_Init =
        BPCR_ac_ConstB.FALSEConstant1;

    /* SystemInitialize for SignalConversion generated from: '<S544>/HVBatDschrgPowST_Init' incorporates:
     *  Constant: '<S568>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatDschrgPowST_Init =
        KeBPCR_P_HV_BatDschrgPwrST_Init;

    /* SystemInitialize for SignalConversion generated from: '<S544>/HVBatDschrgPowST_FA_Init' */
    BPCR_ac_B.OutportBufferForHVBatDschrgPowST_FA_Init =
        BPCR_ac_ConstB.FALSEConstant2;

    /* SystemInitialize for SignalConversion generated from: '<S544>/HVBatChrgPowET_Init' incorporates:
     *  Constant: '<S563>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatChrgPowET_Init =
        KeBPCR_P_HV_BatChrgPwrET_Init;

    /* SystemInitialize for SignalConversion generated from: '<S544>/HVBatChrgPowET_FA_Init' */
    BPCR_ac_B.OutportBufferForHVBatChrgPowET_FA_Init =
        BPCR_ac_ConstB.FALSEConstant3;

    /* SystemInitialize for SignalConversion generated from: '<S544>/HVBatChrgPowLT_Init' incorporates:
     *  Constant: '<S564>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatChrgPowLT_Init =
        KeBPCR_P_HV_BatChrgPwrLT_Init;

    /* SystemInitialize for SignalConversion generated from: '<S544>/HVBatChrgPowLT_FA_Init' */
    BPCR_ac_B.OutportBufferForHVBatChrgPowLT_FA_Init =
        BPCR_ac_ConstB.FALSEConstant4;

    /* SystemInitialize for SignalConversion generated from: '<S544>/HVBatChrgPowST_Init' incorporates:
     *  Constant: '<S565>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatChrgPowST_Init =
        KeBPCR_P_HV_BatChrgPwrST_Init;

    /* SystemInitialize for SignalConversion generated from: '<S544>/HVBatChrgPowST_FA_Init' */
    BPCR_ac_B.OutportBufferForHVBatChrgPowST_FA_Init =
        BPCR_ac_ConstB.FALSEConstant5;

    /* SystemInitialize for SignalConversion generated from: '<S544>/HVBatPackSOC_Init' incorporates:
     *  Constant: '<S569>/Calib'
     */
    BPCR_ac_B.OutportBufferForHVBatPackSOC_Init = KeBPCR_Pct_HV_BatPackSOC_Init;

    /* SystemInitialize for SignalConversion generated from: '<S544>/HVBatPackSOC_FA_Init' */
    BPCR_ac_B.OutportBufferForHVBatPackSOC_FA_Init =
        BPCR_ac_ConstB.FALSEConstant6;

    /* SystemInitialize for SignalConversion generated from: '<S544>/FullAmpHrCap_Init' incorporates:
     *  Constant: '<S570>/Calib'
     */
    BPCR_ac_B.OutportBufferForFullAmpHrCap_Init = KeBPCR_q_FullAmpHrCap_Init;

    /* SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Init_DCCntctr'
     */
    /* SystemInitialize for SignalConversion generated from: '<S543>/HVBat_DC_CntctrOpn' */
    BPCR_ac_B.OutportBufferForHVBat_DC_CntctrOpn =
        BPCR_ac_ConstB.ConstantValue_o;

    /* SystemInitialize for SignalConversion generated from: '<S543>/HVBat_DC_CntctrReq' */
    BPCR_ac_B.OutportBufferForHVBat_DC_CntctrReq = BPCR_ac_ConstB.ConstantValue1;

    /* SystemInitialize for SignalConversion generated from: '<S543>/DC_IsolSts' */
    BPCR_ac_B.OutportBufferForDC_IsolSts = BPCR_ac_ConstB.ConstantValue2_p;

    /* SystemInitialize for SignalConversion generated from: '<S543>/HVBat_DC_CntctrStat' incorporates:
     *  Constant: '<S561>/Constant'
     */
    BPCR_ac_B.OutportBufferForHVBat_DC_CntctrStat = BPCR_ac_ConstB.Constant_i;

    /* SystemInitialize for SignalConversion generated from: '<S543>/HVBat_DC_CntctrStat_FA' */
    BPCR_ac_B.OutportBufferForHVBat_DC_CntctrStat_FA =
        BPCR_ac_ConstB.ConstantValue3_k;

    /* SystemInitialize for SignalConversion generated from: '<S543>/StkOpnChkCmpl' */
    BPCR_ac_B.OutportBufferForStkOpnChkCmpl = BPCR_ac_ConstB.ConstantValue4_e;

    /* SystemInitialize for SignalConversion generated from: '<S543>/DCIsolSts' incorporates:
     *  Constant: '<S562>/Constant'
     */
    BPCR_ac_B.OutportBufferForDCIsolSts = BPCR_ac_ConstB.Constant_hi;

    /* SystemInitialize for SignalConversion generated from: '<S543>/DCIsolStsFA' */
    BPCR_ac_B.OutportBufferForDCIsolStsFA = BPCR_ac_ConstB.ConstantValue5;

    /* SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_T_HV_BatModTempMax_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTempMa = BPCR_ac_ConstB.Const1;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_T_HV_BatModTempMin_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTempMi = BPCR_ac_ConstB.Const2;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_T_HV_BatModTempAvg_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTempAv = BPCR_ac_ConstB.Const3;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_e_HV_BatCntctrStat_Out_Init' incorporates:
     *  Constant: '<S549>/Const4'
     */
    BPCR_ac_B.OutportBufferForVeBPCR_e_HV_BatCntctrSta = BPCR_ac_ConstB.Const4;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatCntctrStatFA_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatCntctrSta = BPCR_ac_ConstB.Const5;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatCntctrOpenReq_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatCntctrOpe = BPCR_ac_ConstB.Const6;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatCntctrOpenPending_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatCntctrO_m = BPCR_ac_ConstB.Const7;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HVBatRdy_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HVBatRdy_Out_In = BPCR_ac_ConstB.Const8;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HEVOnRqBPCM_Debounced_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HEVOnRqBPCM_Deb = BPCR_ac_ConstB.Const9;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_BPCM_OVActv_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_OVActv_Out = BPCR_ac_ConstB.Const10;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_BPCM_UVActv_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_UVActv_Out = BPCR_ac_ConstB.Const11;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_Flst_HVBatCntrWeld_ImpdOpn_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_Flst_HVBatCntrW = BPCR_ac_ConstB.Const12;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HVBatCntrWeld_ImpdOpn_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HVBatCntrWeld_I = BPCR_ac_ConstB.Const13;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_BPCM_LIN_BusOff_FA_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_LIN_BusOff = BPCR_ac_ConstB.Const14;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_BPCM_LIN_BusOff_SgnlRcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_LIN_BusO_f = BPCR_ac_ConstB.Const15;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_BPCM_LOC_BCP_FA_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_LOC_BCP_FA = BPCR_ac_ConstB.Const16;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_BPCM_LOC_BCP_SgnlRcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_LOC_BCP_Sg = BPCR_ac_ConstB.Const17;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_BPCM_LOC_BatClntHtr_FA_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_LOC_BatCln = BPCR_ac_ConstB.Const18;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_BPCM_LOC_BatClntHtr_SgnlRcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_BPCM_LOC_BatC_e = BPCR_ac_ConstB.Const19;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatDschrgPwr = BPCR_ac_ConstB.Const20;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatDschrgP_m = BPCR_ac_ConstB.Const21;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatDschrgP_l = BPCR_ac_ConstB.Const22;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatChrgPwrET = BPCR_ac_ConstB.Const23;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatChrgPwrLT = BPCR_ac_ConstB.Const24;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatChrgPwrST = BPCR_ac_ConstB.Const25;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatPackSOC_SgnlRcvd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatPackSOC_S = BPCR_ac_ConstB.Const26;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_T_HV_BatModTempMax_Arb_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTemp_j = BPCR_ac_ConstB.Const27;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_T_HV_BatModTempMin_Arb_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTemp_p = BPCR_ac_ConstB.Const28;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatDschrg_mg = BPCR_ac_ConstB.Const29;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_P_HV_BatDschrgPwrLT_Arb_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_P_HV_BatDschrgPwr = BPCR_ac_ConstB.Const30;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatChrgPwrLT_FA_Ovrd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatChrgPwr_h = BPCR_ac_ConstB.Const31;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_P_HV_BatChrgPwrLT_Arb_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_P_HV_BatChrgPwrLT = BPCR_ac_ConstB.Const32;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatDschrgPwrET_FA_Ovrd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatDschrg_mw = BPCR_ac_ConstB.Const33;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_P_HV_BatDschrgPwrET_Arb_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_P_HV_BatDschrgP_f = BPCR_ac_ConstB.Const34;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatChrgPwrET_FA_Ovrd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatChrgPw_hc = BPCR_ac_ConstB.Const35;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_P_HV_BatChrgPwrET_Arb_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_P_HV_BatChrgPwrET = BPCR_ac_ConstB.Const36;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatDschrgPwrST_FA_Ovrd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatDschrgP_c = BPCR_ac_ConstB.Const37;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_P_HV_BatDschrgPwrST_Arb_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_P_HV_BatDschrgP_j = BPCR_ac_ConstB.Const38;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatChrgPwrST_FA_Ovrd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatChrgPwr_g = BPCR_ac_ConstB.Const39;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_P_HV_BatChrgPwrST_Arb_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_P_HV_BatChrgPwrST = BPCR_ac_ConstB.Const40;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_U_CellVoltOVThrsh_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_U_CellVoltOVThrsh = BPCR_ac_ConstB.Const41;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_U_CellVoltUVThrsh_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_U_CellVoltUVThrsh = BPCR_ac_ConstB.Const42;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatCurrSFA_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatCurrSFA_O = BPCR_ac_ConstB.Const43;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatPackSOC_SFA_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatPackSOC_j = BPCR_ac_ConstB.Const44;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatVoltModMaxSFA_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatVoltModMa = BPCR_ac_ConstB.Const45;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_CmdBatPwrLimSFA_Enbl_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_CmdBatPwrLimSFA = BPCR_ac_ConstB.Const46;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_HV_BatMaxModTmpSFA_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_HV_BatMaxModTmp = BPCR_ac_ConstB.Const47;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_Pct_HV_BatPackSOC_Ovrd_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_Pct_HV_BatPackSOC = BPCR_ac_ConstB.Const48;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_MIL_OnRq_BPCM_Debounced_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_MIL_OnRq_BPCM_D = BPCR_ac_ConstB.Const49;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_ThrmlRnawyFlg_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_ThrmlRnawyFlg_O = BPCR_ac_ConstB.Const50;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_P_TracBat_EChrgPowLongMod_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_P_TracBat_EChrgPo = BPCR_ac_ConstB.Const51;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_BatShtOffFlg_Out_Init' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_BatShtOffFlg_Ou = BPCR_ac_ConstB.Const52;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_b_PWMBlankAct_write' */
    BPCR_ac_B.OutportBufferForVeBPCR_b_PWMBlankAct_wri = BPCR_ac_ConstB.Const;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCI_U_BatVoltModMinArb_write' */
    BPCR_ac_B.OutportBufferForVeBPCI_U_BatVoltModMinAr = BPCR_ac_ConstB.Const53;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCI_U_BatVoltModMaxArb_write' */
    BPCR_ac_B.OutportBufferForVeBPCI_U_BatVoltModMaxAr = BPCR_ac_ConstB.Const54;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_T_HV_BatModTempMax_write' */
    BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTemp_f = BPCR_ac_ConstB.Const55;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_T_HV_BatModTempMin_write' */
    BPCR_ac_B.OutportBufferForVeBPCR_T_HV_BatModTemp_i = BPCR_ac_ConstB.Const56;

    /* SystemInitialize for SignalConversion generated from: '<S549>/VeBPCR_e_FaultSts_HybBatPosConConCirPer' incorporates:
     *  Constant: '<S642>/Constant'
     */
    BPCR_ac_B.OutportBufferForVeBPCR_e_FaultSts_HybBat =
        BPCR_ac_ConstB.Constant_co;

    /* End of SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* SystemInitialize for SignalConversion generated from: '<S5>/VeBPCI_U_BatVoltModMaxArb_Init_write' */
    Rte_IrvWrite_BPCR_ac_Init_VeBPCI_U_BatVoltModMaxArb_Init_write_IRV
        (VeBPCI_U_BatVoltModMaxArb_Init);

    /* SystemInitialize for SignalConversion generated from: '<S5>/VeBPCI_U_BatVoltModMinArb_Init_write' */
    Rte_IrvWrite_BPCR_ac_Init_VeBPCI_U_BatVoltModMinArb_Init_write_IRV
        (VeBPCI_U_BatVoltModMinArb_Init);

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeBPCR_I_HV_BatCurr' incorporates:
     *  Merge: '<Root>/Merge_126'
     */
    (void)Rte_Write_VeBPCR_I_HV_BatCurr_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatCurrFA' incorporates:
     *  Merge: '<Root>/Merge_120'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatCurrFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_U_HV_BatVolt' incorporates:
     *  Merge: '<Root>/Merge_133'
     */
    (void)Rte_Write_VeBPCR_U_HV_BatVolt_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatVoltFA' incorporates:
     *  Merge: '<Root>/Merge_117'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatVoltFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_U_HV_BatModVoltMax' incorporates:
     *  Merge: '<Root>/Merge_143'
     */
    (void)Rte_Write_VeBPCR_U_HV_BatModVoltMax_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatModVoltMaxFA' incorporates:
     *  Merge: '<Root>/Merge_107'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModVoltMaxFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_U_HV_BatModVoltMin' incorporates:
     *  Merge: '<Root>/Merge_152'
     */
    (void)Rte_Write_VeBPCR_U_HV_BatModVoltMin_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatModVoltMinFA' incorporates:
     *  Merge: '<Root>/Merge_151'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModVoltMinFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_U_HV_BatModVoltAvg' incorporates:
     *  Merge: '<Root>/Merge_112'
     */
    (void)Rte_Write_VeBPCR_U_HV_BatModVoltAvg_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatModVoltAvgFA' incorporates:
     *  Merge: '<Root>/Merge_111'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModVoltAvgFA_Value(false);

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/BPCR_FastTEF'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/BPCC_DecodePWM'
     */
#if Rte_SysCon_Variant_BPCR_3

    /* SystemInitialize for IfAction SubSystem: '<S180>/DecodeTmr' */
    /* SystemInitialize for Merge: '<S183>/Merge' */
    VeBPCR_e_PWMDecodedCntctrStsO = CeBPCR_e_CloseCntctrCmd;

    /* SystemInitialize for Merge: '<S183>/Merge1' */
    VeBPCR_b_PWMTimerOOR_Out = false;

    /* End of SystemInitialize for SubSystem: '<S180>/DecodeTmr' */
#endif

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/BPCR_MedTEB'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/BatCntctr_Arb'
     */
    /* SystemInitialize for Merge: '<S242>/Merge2' */
    VeBPCR_b_HV_BatCntctrOpenReq_Test = false;

    /* SystemInitialize for Merge: '<S242>/Merge3' */
    VeBPCR_k_BatCntctr_DebugSgnl = 0;

    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ThrmlRnawyWarn_Arb'
     */
    /* SystemInitialize for Merge: '<S246>/Merge1' */
    VeBPCC_b_ThrmlRnawy_DebugSgnl = 0;

#if Rte_SysCon_Variant_BPCR_3

    /* SystemInitialize for Function Call SubSystem: '<S2>/BPCD' */

    /* SystemInitialize for Merge: '<S285>/Merge' */
    BPCR_ac_B.Merge_d = CeDFIB_e_Init;

    /* End of SystemInitialize for SubSystem: '<S2>/BPCD' */
    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* SystemInitialize for Outport: '<Root>/VeBPCR_T_HV_BatModTempMax' incorporates:
     *  Merge: '<Root>/Merge_Outport_11'
     */
    (void)Rte_Write_VeBPCR_T_HV_BatModTempMax_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatModTempMaxFA' incorporates:
     *  Merge: '<Root>/Merge_153'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModTempMaxFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_T_HV_BatModTempMin' incorporates:
     *  Merge: '<Root>/Merge_Outport_13'
     */
    (void)Rte_Write_VeBPCR_T_HV_BatModTempMin_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatModTempMinFA' incorporates:
     *  Merge: '<Root>/Merge_108'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModTempMinFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_T_HV_BatModTempAvg' incorporates:
     *  Merge: '<Root>/Merge_Outport_15'
     */
    (void)Rte_Write_VeBPCR_T_HV_BatModTempAvg_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatModTempAvgFA' incorporates:
     *  Merge: '<Root>/Merge_113'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatModTempAvgFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_e_HV_BatCntctrStat' incorporates:
     *  Merge: '<Root>/Merge_Outport_17'
     */
    (void)Rte_Write_VeBPCR_e_HV_BatCntctrStat_Value(CeHVTR_e_Open);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatCntctrStatFA' incorporates:
     *  Merge: '<Root>/Merge_Outport_18'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatCntctrStatFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_e_HV_BatInrlkStat' incorporates:
     *  Merge: '<Root>/Merge_44'
     */
    (void)Rte_Write_VeBPCR_e_HV_BatInrlkStat_Value(CeHVTR_e_IntrlkNotSourced);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatCntctrOpenReq' incorporates:
     *  Merge: '<Root>/Merge_Outport_21'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatCntctrOpenReq_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatCntctrOpenPending' incorporates:
     *  Merge: '<Root>/Merge_Outport_22'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatCntctrOpenPending_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatInrlkStatFA' incorporates:
     *  Merge: '<Root>/Merge_86'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatInrlkStatFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_U_CellVoltLowThrsh' incorporates:
     *  Merge: '<Root>/Merge_115'
     */
    (void)Rte_Write_VeBPCR_U_CellVoltLowThrsh_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_CellVoltLowThrshFA' incorporates:
     *  Merge: '<Root>/Merge_146'
     */
    (void)Rte_Write_VeBPCR_b_CellVoltLowThrshFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_U_CellVoltHighThrsh' incorporates:
     *  Merge: '<Root>/Merge_118'
     */
    (void)Rte_Write_VeBPCR_U_CellVoltHighThrsh_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_CellVoltHighThrshFA' incorporates:
     *  Merge: '<Root>/Merge_145'
     */
    (void)Rte_Write_VeBPCR_b_CellVoltHighThrshFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_Cnt_HVBat_NumMaxVlt' incorporates:
     *  Merge: '<Root>/Merge_121'
     */
    (void)Rte_Write_VeBPCR_Cnt_HVBat_NumMaxVlt_Value(0);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_Cnt_HVBat_NumMinVlt' incorporates:
     *  Merge: '<Root>/Merge_122'
     */
    (void)Rte_Write_VeBPCR_Cnt_HVBat_NumMinVlt_Value(0);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_Cnt_HVBat_ModNumMinTmp' incorporates:
     *  Merge: '<Root>/Merge_123'
     */
    (void)Rte_Write_VeBPCR_Cnt_HVBat_ModNumMinTmp_Value(0);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_Cnt_HVBat_ModNumMaxTmp' incorporates:
     *  Merge: '<Root>/Merge_124'
     */
    (void)Rte_Write_VeBPCR_Cnt_HVBat_ModNumMaxTmp_Value(0);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_U_OCVMinCellVoltage' incorporates:
     *  Merge: '<Root>/Merge_125'
     */
    (void)Rte_Write_VeBPCR_U_OCVMinCellVoltage_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_OCVMinCellVoltage_FA' incorporates:
     *  Merge: '<Root>/Merge_127'
     */
    (void)Rte_Write_VeBPCR_b_OCVMinCellVoltage_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_U_OCVMaxCellVoltage' incorporates:
     *  Merge: '<Root>/Merge_116'
     */
    (void)Rte_Write_VeBPCR_U_OCVMaxCellVoltage_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_OCVMaxCellVoltage_FA' incorporates:
     *  Merge: '<Root>/Merge_128'
     */
    (void)Rte_Write_VeBPCR_b_OCVMaxCellVoltage_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_U_OCVAvgCellVoltage' incorporates:
     *  Merge: '<Root>/Merge_129'
     */
    (void)Rte_Write_VeBPCR_U_OCVAvgCellVoltage_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_OCVAvgCellVoltage_FA' incorporates:
     *  Merge: '<Root>/Merge_130'
     */
    (void)Rte_Write_VeBPCR_b_OCVAvgCellVoltage_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_Z_MaxCellDschargeImpedance' incorporates:
     *  Merge: '<Root>/Merge_131'
     */
    (void)Rte_Write_VeBPCR_Z_MaxCellDschargeImpedance_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_MaxCellDschargeImpedance_FA' incorporates:
     *  Merge: '<Root>/Merge_132'
     */
    (void)Rte_Write_VeBPCR_b_MaxCellDschargeImpedance_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_Z_MinCellDschargeImpedance' incorporates:
     *  Merge: '<Root>/Merge_134'
     */
    (void)Rte_Write_VeBPCR_Z_MinCellDschargeImpedance_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_MinCellDschargeImpedance_FA' incorporates:
     *  Merge: '<Root>/Merge_135'
     */
    (void)Rte_Write_VeBPCR_b_MinCellDschargeImpedance_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_t_HVBattCntctrOpnTm' incorporates:
     *  Merge: '<Root>/Merge_52'
     */
    (void)Rte_Write_VeBPCR_t_HVBattCntctrOpnTm_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_t_PrechrgPnltyTimer' incorporates:
     *  Merge: '<Root>/Merge_45'
     */
    (void)Rte_Write_VeBPCR_t_PrechrgPnltyTimer_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HVBatPerWUThermal' incorporates:
     *  Merge: '<Root>/Merge_46'
     */
    (void)Rte_Write_VeBPCR_b_HVBatPerWUThermal_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HVBatPerWakeUp' incorporates:
     *  Merge: '<Root>/Merge_48'
     */
    (void)Rte_Write_VeBPCR_b_HVBatPerWakeUp_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_t_HVBatSleepTime' incorporates:
     *  Merge: '<Root>/Merge_49'
     */
    (void)Rte_Write_VeBPCR_t_HVBatSleepTime_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_e_BPCMShtDwnRdy' incorporates:
     *  Merge: '<Root>/Merge_50'
     */
    (void)Rte_Write_VeBPCR_e_BPCMShtDwnRdy_Value(CeBPCR_e_Not_Ready_for_Shutdown);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_e_PwrtrnHV_IsolStat' incorporates:
     *  Merge: '<Root>/Merge_51'
     */
    (void)Rte_Write_VeBPCR_e_PwrtrnHV_IsolStat_Value(CeHMIR_e_IsolUndetermined);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_Pct_HVBatSOH' incorporates:
     *  Merge: '<Root>/Merge_55'
     */
    (void)Rte_Write_VeBPCR_Pct_HVBatSOH_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_U_MaxCellVltAlld' incorporates:
     *  Merge: '<Root>/Merge_136'
     */
    (void)Rte_Write_VeBPCR_U_MaxCellVltAlld_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_MaxCellVltAlld_FA' incorporates:
     *  Merge: '<Root>/Merge_137'
     */
    (void)Rte_Write_VeBPCR_b_MaxCellVltAlld_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_U_MinCellVltAlld' incorporates:
     *  Merge: '<Root>/Merge_138'
     */
    (void)Rte_Write_VeBPCR_U_MinCellVltAlld_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_MinCellVltAlld_FA' incorporates:
     *  Merge: '<Root>/Merge_139'
     */
    (void)Rte_Write_VeBPCR_b_MinCellVltAlld_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_U_MaxPkVltAlld' incorporates:
     *  Merge: '<Root>/Merge_140'
     */
    (void)Rte_Write_VeBPCR_U_MaxPkVltAlld_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_MaxPkVltAlld_FA' incorporates:
     *  Merge: '<Root>/Merge_141'
     */
    (void)Rte_Write_VeBPCR_b_MaxPkVltAlld_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_U_MinPkVltAlld' incorporates:
     *  Merge: '<Root>/Merge_142'
     */
    (void)Rte_Write_VeBPCR_U_MinPkVltAlld_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_MinPkVltAlld_FA' incorporates:
     *  Merge: '<Root>/Merge_144'
     */
    (void)Rte_Write_VeBPCR_b_MinPkVltAlld_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HVBatRdy' incorporates:
     *  Merge: '<Root>/Merge_Outport_59'
     */
    (void)Rte_Write_VeBPCR_b_HVBatRdy_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_Pct_HVBatSOHLow' incorporates:
     *  Merge: '<Root>/Merge_56'
     */
    (void)Rte_Write_VeBPCR_Pct_HVBatSOHLow_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_t_HVBatRealTimeClock' incorporates:
     *  Merge: '<Root>/Merge_58'
     */
    (void)Rte_Write_VeBPCR_t_HVBatRealTimeClock_Value(0U);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_e_HVBatIntrlkIntrnlStat' incorporates:
     *  Merge: '<Root>/Merge_59'
     */
    (void)Rte_Write_VeBPCR_e_HVBatIntrlkIntrnlStat_Value(CeBPCR_e_HVBatIntrlkSNA);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HVBatIntrlkIntrnlStatFA' incorporates:
     *  Merge: '<Root>/Merge_60'
     */
    (void)Rte_Write_VeBPCR_b_HVBatIntrlkIntrnlStatFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HEVOnRqBPCM' incorporates:
     *  Merge: '<Root>/Merge_61'
     */
    (void)Rte_Write_VeBPCR_b_HEVOnRqBPCM_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HEVOnRqBPCM_Debounced' incorporates:
     *  Merge: '<Root>/Merge_Outport_65'
     */
    (void)Rte_Write_VeBPCR_b_HEVOnRqBPCM_Debounced_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_BPCM_OVActv' incorporates:
     *  Merge: '<Root>/Merge_Outport_66'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_OVActv_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_BPCM_UVActv' incorporates:
     *  Merge: '<Root>/Merge_Outport_67'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_UVActv_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_e_HVBatRdy' incorporates:
     *  Merge: '<Root>/Merge_63'
     */
    (void)Rte_Write_VeBPCR_e_HVBatRdy_Value(((uint8)0U));

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HVBatRealTimeClock_FA' incorporates:
     *  Merge: '<Root>/Merge_68'
     */
    (void)Rte_Write_VeBPCR_b_HVBatRealTimeClock_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_e_PWMDecodedCntctrSts' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    (void)Rte_Write_VeBPCR_e_PWMDecodedCntctrSts_Value(CeBPCR_e_CloseCntctrCmd);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_P_TracBat_EChrgPowLong' incorporates:
     *  Merge: '<Root>/Merge_70'
     */
    (void)Rte_Write_VeBPCR_P_TracBat_EChrgPowLong_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_TracBat_EChrgPowLongFA' incorporates:
     *  Merge: '<Root>/Merge_71'
     */
    (void)Rte_Write_VeBPCR_b_TracBat_EChrgPowLongFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_PWMTimerOOR' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    (void)Rte_Write_VeBPCR_b_PWMTimerOOR_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_CntctrCntrl_PWM_FA' incorporates:
     *  Merge: '<Root>/Merge_72'
     */
    (void)Rte_Write_VeBPCR_b_CntctrCntrl_PWM_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_T_HVBatClgOutletTemp' incorporates:
     *  Merge: '<Root>/Merge_148'
     */
    (void)Rte_Write_VeBPCR_T_HVBatClgOutletTemp_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HVBatClgOutletTempFA' incorporates:
     *  Merge: '<Root>/Merge_149'
     */
    (void)Rte_Write_VeBPCR_b_HVBatClgOutletTempFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_e_BPCM_LIN_BusOff' incorporates:
     *  Merge: '<Root>/Merge_75'
     */
    (void)Rte_Write_VeBPCR_e_BPCM_LIN_BusOff_Value(CeBPCR_e_LIN_BusOff_Disabled);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_FA' incorporates:
     *  Merge: '<Root>/Merge_99'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LIN_BusOff_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_SgnlRcvd' incorporates:
     *  Merge: '<Root>/Merge_98'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LIN_BusOff_SgnlRcvd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_e_BPCM_LOC_BCP' incorporates:
     *  Merge: '<Root>/Merge_79'
     */
    (void)Rte_Write_VeBPCR_e_BPCM_LOC_BCP_Value(CeBPCR_e_LOC_BCP_False);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_FA' incorporates:
     *  Merge: '<Root>/Merge_101'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LOC_BCP_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_SgnlRcvd' incorporates:
     *  Merge: '<Root>/Merge_100'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LOC_BCP_SgnlRcvd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_e_BPCM_LOC_BatClntHtr' incorporates:
     *  Merge: '<Root>/Merge_80'
     */
    (void)Rte_Write_VeBPCR_e_BPCM_LOC_BatClntHtr_Value
        (CeBPCR_e_LOC_BatClntHtr_False);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_BPCM_LOC_BatClntHtr_FA' incorporates:
     *  Merge: '<Root>/Merge_104'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LOC_BatClntHtr_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_BPCM_LOC_BatClntHtr_SgnlRcvd' incorporates:
     *  Merge: '<Root>/Merge_103'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_LOC_BatClntHtr_SgnlRcvd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_I_MaxChrgCurrAlwd' incorporates:
     *  Merge: '<Root>/Merge_150'
     */
    (void)Rte_Write_VeBPCR_I_MaxChrgCurrAlwd_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_e_ChargingStat_BPCM' incorporates:
     *  Merge: '<Root>/Merge_82'
     */
    (void)Rte_Write_VeBPCR_e_ChargingStat_BPCM_Value(CeOBCR_e_BattNotReady);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_P_HV_BatDschrgPwrET' incorporates:
     *  Merge: '<Root>/Merge_18'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatDschrgPwrET_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrET_FA' incorporates:
     *  Merge: '<Root>/Merge_13'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrET_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd' incorporates:
     *  Merge: '<Root>/Merge_35'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrETSgnl_Rcvd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_P_HV_BatDschrgPwrLT' incorporates:
     *  Merge: '<Root>/Merge_21'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatDschrgPwrLT_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrLT_FA' incorporates:
     *  Merge: '<Root>/Merge_20'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrLT_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd' incorporates:
     *  Merge: '<Root>/Merge_36'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrLTSgnl_Rcvd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_P_HV_BatDschrgPwrST' incorporates:
     *  Merge: '<Root>/Merge_23'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatDschrgPwrST_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrST_FA' incorporates:
     *  Merge: '<Root>/Merge_22'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrST_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd' incorporates:
     *  Merge: '<Root>/Merge_37'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrSTSgnl_Rcvd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_P_HV_BatChrgPwrET' incorporates:
     *  Merge: '<Root>/Merge_25'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatChrgPwrET_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrET_FA' incorporates:
     *  Merge: '<Root>/Merge_24'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrET_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd' incorporates:
     *  Merge: '<Root>/Merge_40'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrETSgnl_Rcvd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_P_HV_BatChrgPwrLT' incorporates:
     *  Merge: '<Root>/Merge_26'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatChrgPwrLT_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrLT_FA' incorporates:
     *  Merge: '<Root>/Merge_27'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrLT_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd' incorporates:
     *  Merge: '<Root>/Merge_42'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrLTSgnl_Rcvd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_P_HV_BatChrgPwrST' incorporates:
     *  Merge: '<Root>/Merge_15'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatChrgPwrST_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrST_FA' incorporates:
     *  Merge: '<Root>/Merge_14'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrST_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd' incorporates:
     *  Merge: '<Root>/Merge_30'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrSTSgnl_Rcvd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_Pct_HV_BatPackSOC' incorporates:
     *  Merge: '<Root>/Merge_16'
     */
    (void)Rte_Write_VeBPCR_Pct_HV_BatPackSOC_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatPackSOC_FA' incorporates:
     *  Merge: '<Root>/Merge_17'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatPackSOC_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatPackSOC_SgnlRcvd' incorporates:
     *  Merge: '<Root>/Merge_32'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatPackSOC_SgnlRcvd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_q_FullAmpHrCap' incorporates:
     *  Merge: '<Root>/Merge_19'
     */
    (void)Rte_Write_VeBPCR_q_FullAmpHrCap_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HVBatPerWU12VChrg' incorporates:
     *  Merge: '<Root>/Merge_83'
     */
    (void)Rte_Write_VeBPCR_b_HVBatPerWU12VChrg_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HVBat_DC_CntctrOpn' incorporates:
     *  Merge: '<Root>/Merge_5'
     */
    (void)Rte_Write_VeBPCR_b_HVBat_DC_CntctrOpn_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HVBat_DC_CntctrReq' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    (void)Rte_Write_VeBPCR_b_HVBat_DC_CntctrReq_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_DC_Isolation_Sts' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    (void)Rte_Write_VeBPCR_b_DC_Isolation_Sts_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_e_HVBat_DC_CntctrStat' incorporates:
     *  Merge: '<Root>/Merge_9'
     */
    (void)Rte_Write_VeBPCR_e_HVBat_DC_CntctrStat_Value(CeBPCR_e_DCCntctrSts_Open);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HVBat_DC_CntctrStat_FA' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    (void)Rte_Write_VeBPCR_b_HVBat_DC_CntctrStat_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_ChargingStat_BPCMFA' incorporates:
     *  Merge: '<Root>/Merge_65'
     */
    (void)Rte_Write_VeBPCR_b_ChargingStat_BPCMFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_MaxChgCurrAlwdFA' incorporates:
     *  Merge: '<Root>/Merge_147'
     */
    (void)Rte_Write_VeBPCR_b_MaxChgCurrAlwdFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_q_RemainingAmpHrCap' incorporates:
     *  Merge: '<Root>/Merge_73'
     */
    (void)Rte_Write_VeBPCR_q_RemainingAmpHrCap_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_RemainingAmpHrCapFA' incorporates:
     *  Merge: '<Root>/Merge_43'
     */
    (void)Rte_Write_VeBPCR_b_RemainingAmpHrCapFA_Value(false);

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/BPCR_MedTEH'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Arbitration'
     */
    /* SystemInitialize for SignalConversion: '<S387>/Signal Conversion' incorporates:
     *  Merge: '<S473>/Merge'
     */
    BPCR_ac_B.SignalConversion_h = 0.0F;

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* SystemInitialize for Outport: '<Root>/VeBPCR_T_BatModTmp' incorporates:
     *  Merge: '<Root>/Merge_11'
     */
    (void)Rte_Write_VeBPCR_T_BatModTmp_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_T_HV_BatModTempMax_Arb' incorporates:
     *  Merge: '<Root>/Merge_Outport_123'
     */
    (void)Rte_Write_VeBPCR_T_HV_BatModTempMax_Arb_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_T_HV_BatModTempMin_Arb' incorporates:
     *  Merge: '<Root>/Merge_Outport_124'
     */
    (void)Rte_Write_VeBPCR_T_HV_BatModTempMin_Arb_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd' incorporates:
     *  Merge: '<Root>/Merge_Outport_125'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_P_HV_BatDschrgPwrLT_Arb' incorporates:
     *  Merge: '<Root>/Merge_Outport_126'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatDschrgPwrLT_Arb_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrLT_FA_Ovrd' incorporates:
     *  Merge: '<Root>/Merge_Outport_127'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrLT_FA_Ovrd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_P_HV_BatChrgPwrLT_Arb' incorporates:
     *  Merge: '<Root>/Merge_Outport_128'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatChrgPwrLT_Arb_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrET_FA_Ovrd' incorporates:
     *  Merge: '<Root>/Merge_Outport_129'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrET_FA_Ovrd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_P_HV_BatDschrgPwrET_Arb' incorporates:
     *  Merge: '<Root>/Merge_Outport_130'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatDschrgPwrET_Arb_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrET_FA_Ovrd' incorporates:
     *  Merge: '<Root>/Merge_Outport_131'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrET_FA_Ovrd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_P_HV_BatChrgPwrET_Arb' incorporates:
     *  Merge: '<Root>/Merge_Outport_132'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatChrgPwrET_Arb_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatDschrgPwrST_FA_Ovrd' incorporates:
     *  Merge: '<Root>/Merge_Outport_133'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatDschrgPwrST_FA_Ovrd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_P_HV_BatDschrgPwrST_Arb' incorporates:
     *  Merge: '<Root>/Merge_Outport_134'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatDschrgPwrST_Arb_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatChrgPwrST_FA_Ovrd' incorporates:
     *  Merge: '<Root>/Merge_Outport_135'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatChrgPwrST_FA_Ovrd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_P_HV_BatChrgPwrST_Arb' incorporates:
     *  Merge: '<Root>/Merge_Outport_136'
     */
    (void)Rte_Write_VeBPCR_P_HV_BatChrgPwrST_Arb_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatPackSOC_FA_Ovrd' incorporates:
     *  Merge: '<Root>/Merge_12'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatPackSOC_FA_Ovrd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_U_CellVoltOVThrsh' incorporates:
     *  Merge: '<Root>/Merge_Outport_138'
     */
    (void)Rte_Write_VeBPCR_U_CellVoltOVThrsh_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_U_CellVoltUVThrsh' incorporates:
     *  Merge: '<Root>/Merge_Outport_139'
     */
    (void)Rte_Write_VeBPCR_U_CellVoltUVThrsh_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatCurrSFA' incorporates:
     *  Merge: '<Root>/Merge_Outport_140'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatCurrSFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatPackSOC_SFA' incorporates:
     *  Merge: '<Root>/Merge_Outport_141'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatPackSOC_SFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatVoltModMaxSFA' incorporates:
     *  Merge: '<Root>/Merge_Outport_142'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatVoltModMaxSFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_CmdBatPwrLimSFA_Enbl' incorporates:
     *  Merge: '<Root>/Merge_Outport_143'
     */
    (void)Rte_Write_VeBPCR_b_CmdBatPwrLimSFA_Enbl_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_BatMaxModTmpSFA' incorporates:
     *  Merge: '<Root>/Merge_Outport_144'
     */
    (void)Rte_Write_VeBPCR_b_HV_BatMaxModTmpSFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    (void)Rte_Write_VeBPCR_Pct_HV_BatPackSOC_Arb_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Ovrd' incorporates:
     *  Merge: '<Root>/Merge_Outport_146'
     */
    (void)Rte_Write_VeBPCR_Pct_HV_BatPackSOC_Ovrd_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_MIL_OnRq_BPCM_Debounced' incorporates:
     *  Merge: '<Root>/Merge_Outport_147'
     */
    (void)Rte_Write_VeBPCR_b_MIL_OnRq_BPCM_Debounced_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_ThrmlRnawyFlg' incorporates:
     *  Merge: '<Root>/Merge_Outport_148'
     */
    (void)Rte_Write_VeBPCR_b_ThrmlRnawyFlg_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_P_TracBat_EChrgPowLongMod' incorporates:
     *  Merge: '<Root>/Merge_Outport_149'
     */
    (void)Rte_Write_VeBPCR_P_TracBat_EChrgPowLongMod_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_StkOpnChkCmpl' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    (void)Rte_Write_VeBPCR_b_StkOpnChkCmpl_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_BatShtOffFlg' incorporates:
     *  Merge: '<Root>/Merge_Outport_151'
     */
    (void)Rte_Write_VeBPCR_b_BatShtOffFlg_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_e_BPCM_CommFail' incorporates:
     *  Merge: '<Root>/Merge_87'
     */
    (void)Rte_Write_VeBPCR_e_BPCM_CommFail_Value(CeSRAR_e_CommFail_NoFault);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_BPCM_CommFailFA' incorporates:
     *  Merge: '<Root>/Merge_47'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_CommFailFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_T_BusBarTemp' incorporates:
     *  Merge: '<Root>/Merge_110'
     */
    (void)Rte_Write_VeBPCR_T_BusBarTemp_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_T_BDUBusBarTemp' incorporates:
     *  Merge: '<Root>/Merge_119'
     */
    (void)Rte_Write_VeBPCR_T_BDUBusBarTemp_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_e_FaultSts_HybBatPosConConCirPer' incorporates:
     *  Merge: '<Root>/M_VeBPCR_e_FaultSts_HybBatPosConConCirPer'
     */
    (void)Rte_Write_VeBPCR_e_FaultSts_HybBatPosConConCirPer_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_e_DCIsolSts' incorporates:
     *  Merge: '<Root>/Merge_28'
     */
    (void)Rte_Write_VeBPCR_e_DCIsolSts_Value(CeBPCR_e_DCIsolSts_NotPerformed);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_DCIsolStsFA' incorporates:
     *  Merge: '<Root>/Merge_4'
     */
    (void)Rte_Write_VeBPCR_b_DCIsolStsFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_U_HV_InternalStringVolt1' incorporates:
     *  Merge: '<Root>/Merge_34'
     */
    (void)Rte_Write_VeBPCR_U_HV_InternalStringVolt1_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_InternalStringVolt1FA' incorporates:
     *  Merge: '<Root>/Merge_33'
     */
    (void)Rte_Write_VeBPCR_b_HV_InternalStringVolt1FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_U_HV_InternalStringVolt2' incorporates:
     *  Merge: '<Root>/Merge_39'
     */
    (void)Rte_Write_VeBPCR_U_HV_InternalStringVolt2_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_InternalStringVolt2FA' incorporates:
     *  Merge: '<Root>/Merge_38'
     */
    (void)Rte_Write_VeBPCR_b_HV_InternalStringVolt2FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_U_HV_SeriesVolt' incorporates:
     *  Merge: '<Root>/Merge_88'
     */
    (void)Rte_Write_VeBPCR_U_HV_SeriesVolt_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_SeriesVoltFA' incorporates:
     *  Merge: '<Root>/Merge_41'
     */
    (void)Rte_Write_VeBPCR_b_HV_SeriesVoltFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_AuxLoadOffReq' incorporates:
     *  Merge: '<Root>/Merge_90'
     */
    (void)Rte_Write_VeBPCR_b_HV_AuxLoadOffReq_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_AuxLoadOffReqFA' incorporates:
     *  Merge: '<Root>/Merge_89'
     */
    (void)Rte_Write_VeBPCR_b_HV_AuxLoadOffReqFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_I_HV_Current_String2' incorporates:
     *  Merge: '<Root>/Merge_93'
     */
    (void)Rte_Write_VeBPCR_I_HV_Current_String2_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HV_Current_String2_FA' incorporates:
     *  Merge: '<Root>/Merge_96'
     */
    (void)Rte_Write_VeBPCR_b_HV_Current_String2_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_U_BPCM_HV_InternalVoltage' incorporates:
     *  Merge: '<Root>/Merge_97'
     */
    (void)Rte_Write_VeBPCR_U_BPCM_HV_InternalVoltage_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_BPCM_HV_InternalVoltage_FA' incorporates:
     *  Merge: '<Root>/Merge_102'
     */
    (void)Rte_Write_VeBPCR_b_BPCM_HV_InternalVoltage_FA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_e_HV_BatIsolStat' incorporates:
     *  Merge: '<Root>/Merge_53'
     */
    (void)Rte_Write_VeBPCR_e_HV_BatIsolStat_Value(CeHVTR_e_IsolUndetermined);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_e_HV_BatIsolStat_raw' incorporates:
     *  Merge: '<Root>/Merge_105'
     */
    (void)Rte_Write_VeBPCR_e_HV_BatIsolStat_raw_Value(CeBPCR_e_GFD_NotPerformed);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_e_HVTracBatCntctrConfig' incorporates:
     *  Merge: '<Root>/Merge_31'
     */
    (void)Rte_Write_VeBPCR_e_HVTracBatCntctrConfig_Value
        (CeBPCR_e_HVTracBatConfig_Closed_Parallel);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HVTracBatCntctrConfigFA' incorporates:
     *  Merge: '<Root>/Merge_29'
     */
    (void)Rte_Write_VeBPCR_b_HVTracBatCntctrConfigFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_e_HVDcChargeTypeStat' incorporates:
     *  Merge: '<Root>/Merge_92'
     */
    (void)Rte_Write_VeBPCR_e_HVDcChargeTypeStat_Value
        (CeBPCR_e_HVDcChargeStat_400V);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HVDcChargeTypeStatFA' incorporates:
     *  Merge: '<Root>/Merge_91'
     */
    (void)Rte_Write_VeBPCR_b_HVDcChargeTypeStatFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_HVBatCntrWeld_ImpdOpn' incorporates:
     *  Merge: '<Root>/Merge_Outport_70'
     */
    (void)Rte_Write_VeBPCR_b_HVBatCntrWeld_ImpdOpn_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeBPCR_b_Flst_HVBatCntrWeld_ImpdOpn' incorporates:
     *  Merge: '<Root>/Merge_94'
     */
    (void)Rte_Write_VeBPCR_b_Flst_HVBatCntrWeld_ImpdOpn_Value(false);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
