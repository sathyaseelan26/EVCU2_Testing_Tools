/*
 * File: AATR_ac.c
 *
 * Code generated for Simulink model 'AATR_ac'.
 *
 * Model version                  : 9.477
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:02:56 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AATR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_AATR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_AATR_8

static volatile CONST(uint8, AATR_VAR_INIT) HeAATR_i_SCP_LINBusOff_Slct = 3U;/* Referenced by:
                                                                      * '<S590>/Calib'
                                                                      * '<S467>/Calib'
                                                                      * '<S511>/Calib'
                                                                      * '<S923>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) HeAATR_t_MedTEH = 0.1F;/* Referenced by:
                                                                      * '<S374>/Calib'
                                                                      * '<S102>/Calib'
                                                                      * '<S224>/Calib'
                                                                      * '<S286>/Calib'
                                                                      * '<S301>/Calib'
                                                                      * '<S336>/Calib'
                                                                      * '<S57>/Calib'
                                                                      * '<S79>/Calib'
                                                                      * '<S89>/Calib'
                                                                      * '<S857>/Calib'
                                                                      * '<S860>/Calib'
                                                                      * '<S863>/Calib'
                                                                      * '<S866>/Calib'
                                                                      * '<S940>/Calib'
                                                                      * '<S959>/Calib'
                                                                      * '<S1038>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KaAATR_dT_AATRat_Thrslds[7] =
{
    8.0F, 15.0F, 20.0F, 25.0F, 30.0F, 60.0F, 80.0F
} ;                                    /* Referenced by: '<S1044>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(TeAATR_e_Rat_Level, AATR_VAR_INIT)
    KaAATR_e_AATRRat_Level1[10] =
{
    CeAATR_e_Thr1, CeAATR_e_Thr1, CeAATR_e_Thr1, CeAATR_e_Thr1, CeAATR_e_Thr1,
    CeAATR_e_Thr1, CeAATR_e_Thr1, CeAATR_e_Thr1, CeAATR_e_Thr1, CeAATR_e_Thr1
};                                     /* Referenced by: '<S1061>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(TeAATR_e_Rat_Level, AATR_VAR_INIT)
    KaAATR_e_AATRRat_Level2[10] =
{
    CeAATR_e_Thr3, CeAATR_e_Thr3, CeAATR_e_Thr3, CeAATR_e_Thr3, CeAATR_e_Thr2,
    CeAATR_e_Thr2, CeAATR_e_Thr2, CeAATR_e_Thr2, CeAATR_e_Thr2, CeAATR_e_Thr2
};                                     /* Referenced by: '<S1062>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(TeAATR_e_Rat_Level, AATR_VAR_INIT)
    KaAATR_e_AATRRat_Level3[10] =
{
    CeAATR_e_Thr5, CeAATR_e_Thr5, CeAATR_e_Thr5, CeAATR_e_Thr5, CeAATR_e_Thr5,
    CeAATR_e_Thr5, CeAATR_e_Thr5, CeAATR_e_Thr5, CeAATR_e_Thr5, CeAATR_e_Thr5
};                                     /* Referenced by: '<S1063>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(TeAATR_e_AmbSnsr, AATR_VAR_INIT)
    KaAATR_e_SnsrPrrty_TempArbtrtn[4] =
{
    CeAATR_e_CBC, CeAATR_e_SCP_Inlet, CeAATR_e_SCP_Inlet, CeAATR_e_SCP_Inlet
};                                     /* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATI_U_CBC_AmbAirVolt_Max =
    4.86F;                             /* Referenced by: '<S543>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATI_U_CBC_AmbAirVolt_Min =
    0.088F;                            /* Referenced by: '<S544>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_CBCAmbAirTemp_PerfFail =
    10;                                /* Referenced by: '<S1093>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_CBCAmbAirTemp_PerfSmp =
    10;                                /* Referenced by: '<S1094>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_CBCAmbAirVlt_HiFail = 10;/* Referenced by: '<S545>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_CBCAmbAirVlt_HiSmp = 10;/* Referenced by: '<S546>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_CBCAmbAirVlt_LoFail = 10;/* Referenced by: '<S564>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_CBCAmbAirVlt_LoSmp = 10;/* Referenced by: '<S565>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(uint16, AATR_VAR_INIT) KeAATR_Cnt_HoldECMTmp_KeyOff = 0U;/* Referenced by: '<S303>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(uint16, AATR_VAR_INIT) KeAATR_Cnt_HoldInitHeatSoak = 2U;/* Referenced by: '<S38>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_IUMPR_AATPerf_MaxDTCSet =
    3;                                 /* Referenced by:
                                        * '<S403>/Calib'
                                        * '<S434>/Calib'
                                        * '<S478>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_DCNegtvTemp_Fail =
    10;                                /* Referenced by: '<S645>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_DCNegtvTemp_HiFail =
    10;                                /* Referenced by: '<S604>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_DCNegtvTemp_HiSmp =
    10;                                /* Referenced by: '<S605>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_DCNegtvTemp_LoFail =
    10;                                /* Referenced by: '<S623>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_DCNegtvTemp_LoSmp =
    10;                                /* Referenced by: '<S624>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_DCNegtvTemp_PerfFail
    = 10;                              /* Referenced by: '<S1117>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_DCNegtvTemp_PerfSmp =
    10;                                /* Referenced by: '<S1118>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_DCNegtvTemp_Smp = 15;/* Referenced by: '<S646>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_DCPstvTemp_Fail = 10;/* Referenced by: '<S719>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_DCPstvTemp_HiFail =
    10;                                /* Referenced by: '<S678>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_DCPstvTemp_HiSmp =
    10;                                /* Referenced by: '<S679>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_DCPstvTemp_LoFail =
    10;                                /* Referenced by: '<S697>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_DCPstvTemp_LoSmp =
    10;                                /* Referenced by: '<S698>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_DCPstvTemp_PerfFail =
    10;                                /* Referenced by: '<S1141>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_DCPstvTemp_PerfSmp =
    10;                                /* Referenced by: '<S1142>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_DCPstvTemp_Smp = 15;/* Referenced by: '<S720>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_InletTemp_Fail = 10;/* Referenced by: '<S798>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_InletTemp_HiFail =
    10;                                /* Referenced by: '<S756>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_InletTemp_HiSmp = 10;/* Referenced by: '<S757>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_InletTemp_LoFail =
    10;                                /* Referenced by: '<S776>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_InletTemp_LoSmp = 10;/* Referenced by: '<S777>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_InletTemp_PerfFail =
    10;                                /* Referenced by: '<S1165>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_InletTemp_PerfSmp =
    10;                                /* Referenced by: '<S1166>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT) KeAATR_Cnt_SCP_InletTemp_Smp = 15;/* Referenced by: '<S799>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

static volatile CONST(sint16, AATR_VAR_INIT)
    KeAATR_Cnt_SamplEngineRPMIncrease4IntakeValid = 10;/* Referenced by: '<S872>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_Pct_AmbAirTemp_RatPctErr =
    10.0F;                             /* Referenced by: '<S343>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_AmbAirTemp_IV_Dflt =
    25.0F;                             /* Referenced by: '<S111>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_AmbAirTemp_SNA_Dflt =
    25.0F;                             /* Referenced by:
                                        * '<S135>/Calib'
                                        * '<S242>/Calib'
                                        * '<S316>/Calib'
                                        * '<S322>/Calib'
                                        * '<S344>/Calib'
                                        */

#endif

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_CBC_AmbAirTempRaw_Init =
    215.0F;                            /* Referenced by: '<S1283>/Calib' */

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_ClntPumpTempOvrdVal =
    0.0F;                              /* Referenced by: '<S1186>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_CoolantWrmUpTemp = 45.0F;/* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_DCNgtv_Temp = 10.0F;/* Referenced by: '<S941>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_DCPstv_Temp = 10.0F;/* Referenced by: '<S960>/Calib' */

#endif

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_ECM_AmbAirTempInit =
    25.0F;                             /* Referenced by: '<S1261>/Calib' */

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_ECM_AmbTempOvrdVal = 0.0F;/* Referenced by: '<S1224>/Calib' */

#endif

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_ECM_AmbientAirTempDflt =
    25.0F;                             /* Referenced by:
                                        * '<S4>/FsftAATR_T_ECM_AmbientAirTempChrt'
                                        * '<S10>/PokeAATR_T_ECM_AmbientAirTempChrt'
                                        */

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_ECM_IntakeTempOvrdVal =
    99.0F;                             /* Referenced by: '<S1187>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_EstAmbAirTemp_D = 0.0F;/* Referenced by: '<S349>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_EstAmbAirTemp_Init =
    25.0F;                             /* Referenced by: '<S1284>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_LTPsvPumpTemp_Ovrd = 0.0F;/* Referenced by: '<S1188>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_OnBrdChgClntTmpInOvrd =
    0.0F;                              /* Referenced by: '<S1189>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_ResetMdl_OvrdVal = 60.0F;/* Referenced by: '<S124>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCPInlet_Temp = 10.0F;/* Referenced by: '<S1039>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_AmbTemp_NF = 205.0F;/* Referenced by: '<S1285>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_AmbientTempOvrdVal =
    205.0F;                            /* Referenced by: '<S1225>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_AmbientTempSnsrDflt =
    205.0F;       /* Referenced by: '<S5>/FsftAATR_T_SCP_AmbientTempSnsrChrt' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_AmbientTempSnsr_Init =
    25.0F;                             /* Referenced by: '<S1272>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT)
    KeAATR_T_SCP_AmbientTempSnsr_Init_out = 0.0F;/* Referenced by: '<S1286>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_AmbientTemp_D = 0.0F;/* Referenced by: '<S350>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_DCNegtvTempOvrdVal =
    205.0F;                            /* Referenced by: '<S1226>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_DCNegtvTempSnsr_Init =
    25.0F;                             /* Referenced by: '<S1273>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT)
    KeAATR_T_SCP_DCNegtvTempSnsr_Init_out = 205.0F;/* Referenced by: '<S1287>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_DCNegtvTemp_D =
    205.0F;                            /* Referenced by: '<S351>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_DCNegtvTemp_NF =
    205.0F;                            /* Referenced by: '<S1288>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_DCNegtvTemp_ShrtHigh =
    204.0F;                            /* Referenced by: '<S602>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_DCNegtvTemp_ShrtLow =
    203.0F;                            /* Referenced by: '<S603>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_DCNegtvTmpSnsrDflt =
    205.0F;        /* Referenced by: '<S6>/FsftAATR_T_SCP_DCNegtvTmpSnsrChrt' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_DCPstvTempOvrdVal =
    205.0F;                            /* Referenced by: '<S1227>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_DCPstvTempSnsr_Init =
    25.0F;                             /* Referenced by: '<S1274>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT)
    KeAATR_T_SCP_DCPstvTempSnsr_Init_out = 205.0F;/* Referenced by: '<S1289>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_DCPstvTemp_D = 205.0F;/* Referenced by: '<S352>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_DCPstvTemp_NF =
    205.0F;                            /* Referenced by: '<S1290>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_DCPstvTemp_ShrtHigh =
    204.0F;                            /* Referenced by: '<S676>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_DCPstvTemp_ShrtLow =
    203.0F;                            /* Referenced by: '<S677>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_DCPstvTmpSnsrDflt =
    205.0F;         /* Referenced by: '<S7>/FsftAATR_T_SCP_DCPstvTmpSnsrChrt' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_InletTempOvrdVal =
    205.0F;                            /* Referenced by: '<S1228>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_InletTempSnsrDflt =
    205.0F;         /* Referenced by: '<S8>/FsftAATR_T_SCP_InletTempSnsrChrt' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_InletTempSnsr_Init =
    25.0F;                             /* Referenced by: '<S1275>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT)
    KeAATR_T_SCP_InletTempSnsr_Init_out = 0.0F;/* Referenced by: '<S1291>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_InletTemp_D = 0.0F;/* Referenced by: '<S353>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_InletTemp_NF = 205.0F;/* Referenced by: '<S1292>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_InletTemp_ShrtHigh =
    204.0F;                            /* Referenced by: '<S754>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_SCP_InletTemp_ShrtLow =
    203.0F;                            /* Referenced by: '<S755>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_TempChng_High = 0.5F;/* Referenced by: '<S201>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_T_TempChng_Low = -0.5F;/* Referenced by: '<S202>/Calib' */

#endif

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_U_CBC_AmbAirVoltInit = 0.0F;/* Referenced by: '<S1262>/Calib' */
static volatile CONST(float32, AATR_VAR_INIT) KeAATR_U_CBC_AmbAirVoltRaw_Init =
    0.0F;                              /* Referenced by: '<S1293>/Calib' */

#if Rte_SysCon_Variant_AATR_8 || Rte_SysCon_Variant_AATR_9

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_U_CBC_AmbVoltOvrdVal = 0.0F;/* Referenced by:
                                                                      * '<S1229>/Calib'
                                                                      * '<S27>/Calib'
                                                                      */

#endif

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_U_CBC_AmbientAirVoltDflt =
    0.0F;                              /* Referenced by:
                                        * '<S9>/FsftAATR_U_CBC_AmbientAirVoltChrt'
                                        * '<S16>/TmotAATR_U_CBC_AmbientAirVoltChrt'
                                        */
static volatile CONST(float32, AATR_VAR_INIT) KeAATR_U_CBC_AmbientAirVoltSNA =
    5.0F;         /* Referenced by: '<S15>/PokeAATR_U_CBC_AmbientAirVoltChrt' */

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_AAT_SnsrCktHi_LtchEnbl =
    0;                                 /* Referenced by: '<S547>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_AAT_SnsrCktLo_LtchEnbl =
    0;                                 /* Referenced by: '<S566>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_AAT_SnsrPerf_LtchEnbl = 0;/* Referenced by: '<S1095>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_BatChaCouTemSenACirHig_LtchEnbl = 0;/* Referenced by: '<S758>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_BatChaCouTemSenACirLow_LtchEnbl = 0;/* Referenced by: '<S778>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_BatChaCouTemSenACirRan_LtchEnbl = 0;/* Referenced by: '<S1167>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_BatChaCouTemSnsrCkt_LtchEnbl = 0;/* Referenced by: '<S800>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_BattChrgCouTempSnsrBCktHi_LtchEnbl = 0;/* Referenced by: '<S680>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_BattChrgCouTempSnsrBCktLo_Enbl = 0;/* Referenced by: '<S699>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_BattChrgCouTempSnsrBCktPerf_LtchEnbl = 0;/* Referenced by: '<S1143>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_BattChrgCouTempSnsrBCkt_LtchEnbl = 0;/* Referenced by: '<S721>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_BattChrgCouTempSnsrCCktHi_LtchEnbl = 0;/* Referenced by: '<S606>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_BattChrgCouTempSnsrCCktLo_LtchEnbl = 0;/* Referenced by: '<S625>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_BattChrgCouTempSnsrCCktPerf_LtchEnbl = 0;/* Referenced by: '<S1119>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_BattChrgCouTempSnsrCCkt_LtchEnbl = 0;/* Referenced by: '<S647>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_CBCAmbAirVlt_HiFlt_D = 0;/* Referenced by: '<S194>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_CBCAmbAirVlt_HiFlt_SD = 0;/* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_CBCAmbAirVlt_LoFlt_D = 0;/* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_CBCAmbAirVlt_LoFlt_SD = 0;/* Referenced by: '<S197>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_CBC_AATSnsr_FA_EnblCnds =
    1;                                 /* Referenced by: '<S895>/Calib' */

#endif

#if (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_CBC_AATSnsr_FA_FltCndsEnbl = 1;/* Referenced by: '<S1064>/Calib' */

#endif

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_CBC_AmbAirVoltInitFA = 0;/* Referenced by: '<S1263>/Calib' */

#if Rte_SysCon_Variant_AATR_8 || Rte_SysCon_Variant_AATR_9

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_CBC_AmbVoltFAOvrdEnbl = 0;/* Referenced by:
                                                                      * '<S1230>/Calib'
                                                                      * '<S28>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AATR_8 || Rte_SysCon_Variant_AATR_9

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_CBC_AmbVoltFAOvrdVal = 0;/* Referenced by:
                                                                      * '<S1231>/Calib'
                                                                      * '<S29>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AATR_8 || Rte_SysCon_Variant_AATR_9

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_CBC_AmbVoltOvrdEnbl = 0;/* Referenced by:
                                                                      * '<S1232>/Calib'
                                                                      * '<S30>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_CPIM_NotPresent = 0;/* Referenced by: '<S1033>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_ClntPumpTempFAOvrdEnbl =
    0;                                 /* Referenced by: '<S1190>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_ClntPumpTempFAOvrdVal = 0;/* Referenced by: '<S1191>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_ClntPumpTempOvrdEnbl = 0;/* Referenced by: '<S1192>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_DiagGlblCndtnsValid_EnOv =
    0;                                 /* Referenced by: '<S1193>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_DiagGlblCndtnsValid_Ovrd =
    0;                                 /* Referenced by: '<S1194>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_DsblDiagFailSafe_EnOv = 0;/* Referenced by: '<S1195>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_DsblDiagFailSafe_Ovrd = 0;/* Referenced by: '<S1196>/Calib' */

#endif

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_ECM_AmbAirTempInitFA = 0;/* Referenced by: '<S1264>/Calib' */

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_ECM_AmbTempFAOvrdEnbl = 0;/* Referenced by: '<S1233>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_ECM_AmbTempFAOvrdVal = 0;/* Referenced by: '<S1234>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_ECM_AmbTempOvrdEnbl = 0;/* Referenced by: '<S1235>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_ECM_IntakeTempFAOvrdEnbl =
    0;                                 /* Referenced by: '<S1197>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_ECM_IntakeTempFAOvrdVal =
    0;                                 /* Referenced by: '<S1198>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_ECM_IntakeTempOvrdEnbl =
    0;                                 /* Referenced by: '<S1199>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_EnbSCP_DCNegtvTemp = 1;/* Referenced by: '<S648>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_EnbSCP_DCPstvTemp = 1;/* Referenced by: '<S722>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_EnbSCP_InletTemp = 1;/* Referenced by: '<S801>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_EnbSCP_InletTemp_PerfFlt =
    1;                                 /* Referenced by: '<S1168>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_EnbSCP_InletTemp_ShrtLow =
    1;                                 /* Referenced by: '<S779>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_EnblCBC_AmbAirTemp_PerfFlt = 1;/* Referenced by: '<S1096>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_EnblECMTmpFA_4Rat = 0;/* Referenced by: '<S291>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_EnblIntakeFlowOvrrd4InitSoak = 1;/* Referenced by: '<S873>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_EnblOneReadExitHeatSoak =
    1;                                 /* Referenced by: '<S39>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_EnblSCP_DCNegtvTemp_PerfFlt = 0;/* Referenced by: '<S1120>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_EnblSCP_DCPstvTemp_PerfFlt = 0;/* Referenced by: '<S1144>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_EnblSCP_InletTemp_ShrtHigh = 1;/* Referenced by: '<S759>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_EngineSpeedOvrdEnbl = 0;/* Referenced by: '<S1200>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_EngineSpeedStsOvrdEnbl =
    0;                                 /* Referenced by: '<S1201>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_EstAmbAirTempFA_D = 0;/* Referenced by: '<S354>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_EstAmbAirTempFA_Init = 1;/* Referenced by: '<S1294>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_EstAmbAirTempFA_SD = 0;/* Referenced by: '<S355>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_EstAmbAirTemp_SD = 0;/* Referenced by: '<S356>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_ExcldInvDataCPIM4DiagEnbl
    = 1;                               /* Referenced by: '<S586>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_HCPOffTimeFA_EnOv = 0;/* Referenced by: '<S1202>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_HCPOffTimeFA_Ovrd = 0;/* Referenced by: '<S1203>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_HCPOffTime_EnOv = 0;/* Referenced by: '<S1204>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_CBCAATPerf_CANCBusoff_Enbl = 1;/* Referenced by: '<S396>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_CBCAATPerf_CBCShrtHi_Enbl = 1;/* Referenced by: '<S401>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_CBCAATPerf_CBCShrtLow_Enbl = 1;/* Referenced by: '<S402>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_IUMPR_CBCAATPerf_Enbl = 1;/* Referenced by: '<S388>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_CBCAATPerf_InitFA_Enbl = 1;/* Referenced by: '<S404>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_CBCAATPerf_IntakeFA_Enbl = 1;/* Referenced by: '<S405>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_CBCAATPerf_InvBCM_Enbl = 1;/* Referenced by: '<S397>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_CBCAATPerf_LOCwBCM_Enbl = 1;/* Referenced by: '<S398>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_9

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_IUMPR_CBCAATPerf_NF = 0;/* Referenced by: '<S1295>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_IUMPR_CBCAATPerf_Ovrrd =
    0;                                 /* Referenced by: '<S389>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_CBCAATPerf_SCPAATPerf_Enbl = 1;/* Referenced by: '<S415>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_CBCAATPerf_SCPAATShrtHi_Enbl = 1;/* Referenced by: '<S416>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_CBCAATPerf_SCPAATShrtLo_Enbl = 1;/* Referenced by: '<S417>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_CBCAATPerf_SCPInletPerf_Enbl = 1;/* Referenced by: '<S421>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_CBCAATPerf_SCPInletShrtHi_Enbl = 1;/* Referenced by: '<S422>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_CBCAATPerf_SCPInletShrtLo_Enbl = 1;/* Referenced by: '<S423>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPAATPerf_CBCAATPerf_Enbl = 1;/* Referenced by: '<S445>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPAATPerf_CBCAATShrtHi_Enbl = 1;/* Referenced by: '<S446>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPAATPerf_CBCAATShrtLo_Enbl = 1;/* Referenced by: '<S447>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_IUMPR_SCPAATPerf_Enbl = 1;/* Referenced by: '<S428>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPAATPerf_InitFA_Enbl = 1;/* Referenced by: '<S435>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPAATPerf_IntakeFA_Enbl = 1;/* Referenced by: '<S436>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPAATPerf_InvCPIM_Enbl = 1;/* Referenced by: '<S461>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPAATPerf_LINBusOff_Enbl = 1;/* Referenced by: '<S462>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPAATPerf_LOCwCPIM_Enbl = 1;/* Referenced by: '<S463>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_9

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_IUMPR_SCPAATPerf_NF = 0;/* Referenced by: '<S1296>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_IUMPR_SCPAATPerf_Ovrrd =
    0;                                 /* Referenced by: '<S429>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPAATPerf_SCPAATShrtHi_Enbl = 1;/* Referenced by: '<S470>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPAATPerf_SCPAATShrtLow_Enbl = 1;/* Referenced by: '<S471>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPAATPerf_SCPInletPerf_Enbl = 1;/* Referenced by: '<S451>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPAATPerf_SCPInletShrtHi_Enbl = 1;/* Referenced by: '<S452>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPAATPerf_SCPInletShrtLo_Enbl = 1;/* Referenced by: '<S453>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPInletPerf_CBCAATPerf_Enbl = 1;/* Referenced by: '<S489>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPInletPerf_CBCAATShrtHi_Enbl = 1;/* Referenced by: '<S490>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPInletPerf_CBCAATShrtLo_Enbl = 1;/* Referenced by: '<S491>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_IUMPR_SCPInletPerf_Enbl =
    1;                                 /* Referenced by: '<S472>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPInletPerf_InitFA_Enbl = 1;/* Referenced by: '<S479>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPInletPerf_IntakeFA_Enbl = 1;/* Referenced by: '<S480>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPInletPerf_InvCPIM_Enbl = 1;/* Referenced by: '<S505>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPInletPerf_LINBusOff_Enbl = 1;/* Referenced by: '<S506>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPInletPerf_LOCwCPIM_Enbl = 1;/* Referenced by: '<S507>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_9

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_IUMPR_SCPInletPerf_NF = 0;/* Referenced by: '<S1297>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_IUMPR_SCPInletPerf_Ovrrd =
    0;                                 /* Referenced by: '<S473>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPInletPerf_SCPAATPerf_Enbl = 1;/* Referenced by: '<S495>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPInletPerf_SCPAATShrtHi_Enbl = 1;/* Referenced by: '<S496>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPInletPerf_SCPAATShrtLo_Enbl = 1;/* Referenced by: '<S497>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPInletPerf_SCPInletShrtHi_Enbl = 1;/* Referenced by: '<S514>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IUMPR_SCPInletPerf_SCPInletShrtLow_Enbl = 1;/* Referenced by: '<S515>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_IgnrIVCmpltPrd4UseIV = 0;/* Referenced by: '<S304>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_IncldInit4Diag = 1;/* Referenced by: '<S1087>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_InitHeatSoak = 1;/* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_InitInvalid_KeepCBCPrevFltSts = 1;/* Referenced by: '<S271>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IntakeTempSnsr_CAN3CommBusOffPerf_Enbl = 1;/* Referenced by: '<S975>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IntakeTempSnsr_CAN3CommBusOff_Enbl = 1;/* Referenced by: '<S976>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IntakeTempSnsr_CommBusOff_Enbl = 0;/* Referenced by: '<S977>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_IntakeTempSnsr_LostCommECM_PCM_A_Enbl = 1;/* Referenced by: '<S978>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_IntakeTempSnsr_Present =
    1;                                 /* Referenced by: '<S979>/Calib' */

#endif

#if (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_LIN1BusOff4Rat = 0;/* Referenced by: '<S924>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_LTPP2_Check_Ovrd = 0;/* Referenced by:
                                                                      * '<S982>/Calib'
                                                                      * '<S999>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_LTPP2_CommCheck_Ovrd = 0;/* Referenced by: '<S986>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_LTPP2_OffTime_Ovrd = 0;/* Referenced by: '<S987>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_LTPP2_OvrSpd_Ovrd = 0;/* Referenced by: '<S988>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_LTPP2_Perf_Ovrd = 0;/* Referenced by: '<S989>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_LTPP2_RPM_Ovrd = 0;/* Referenced by: '<S990>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_LTPP_Check_Ovrd = 0;/* Referenced by: '<S983>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_LTPP_CommCheck_Ovrd = 0;/* Referenced by: '<S998>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_LTPP_OvrSpd_Ovrd = 0;/* Referenced by: '<S1000>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_LTPP_Perf_Ovrd = 0;/* Referenced by: '<S1001>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_LTPP_RPM_Ovrd = 0;/* Referenced by: '<S1002>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_LTPsvPumpTempFA_EvOv = 0;/* Referenced by: '<S1205>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_LTPsvPumpTempFA_Ovrd = 0;/* Referenced by: '<S1206>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_LTPsvPumpTemp_EvOv = 0;/* Referenced by: '<S1207>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_OBCR_ChargingSystemStsOvrdEnbl = 0;/* Referenced by: '<S1208>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_OldAppSelector = 1;/* Referenced by: '<S207>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_OldApp_KeepPrevOvvrd = 1;/* Referenced by: '<S327>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_OnBrdChgClntTmpInFAOvrd =
    0;                                 /* Referenced by: '<S1209>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_OnBrdChgClntTmpInFA_EvOv =
    0;                                 /* Referenced by: '<S1210>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_OnBrdChgClntTmpIn_EvOv =
    0;                                 /* Referenced by: '<S1211>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_OvrdReduncy = 1;/* Referenced by: '<S909>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_OvrrdCBC_PerfFltAftrInitInvalid_Arbitratn = 0;/* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_OvrrdChrgSysSts = 0;/* Referenced by: '<S1074>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_OvrrdCrank4InitHeatSoak =
    0;                                 /* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_OvrrdInitSNA_wup = 1;/* Referenced by: '<S103>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_OvrrdIntkFlowGood = 0;/* Referenced by: '<S874>/Calib' */

#endif

#if (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_OvrrdInvDatawSCP4Rat = 1;/* Referenced by: '<S918>/Calib' */

#endif

#if (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_OvrrdLOCwSCP4Rat = 0;/* Referenced by: '<S919>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_OvrrdVehSoak4InitHeatSoak
    = 0;                               /* Referenced by: '<S42>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_Ovrrd_HeatSoak4Rat_CBC =
    1;                                 /* Referenced by: '<S896>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_Ovrrd_HeatSoak4Rat_ECMIntk = 1;/* Referenced by: '<S980>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_Ovrrd_HeatSoak4Rat_SCPInlet = 1;/* Referenced by: '<S1022>/Calib' */

#endif

#if (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8)

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_Ovrrd_HeatSoak4Rat_SCP_DCs = 1;/* Referenced by: '<S964>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_Ovrrd_PlugInCalLvl_CBC =
    1;                                 /* Referenced by: '<S897>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_Ovrrd_PlugInCalLvl_ECMIntk = 1;/* Referenced by: '<S981>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_Ovrrd_PlugInCalLvl_SCPInlet = 1;/* Referenced by: '<S1023>/Calib' */

#endif

#if (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8)

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_Ovrrd_PlugInCalLvl_SCP_DCs = 1;/* Referenced by: '<S965>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_PPCTIS_PECTOS_Slct = 0;/* Referenced by:
                                                                      * '<S1084>/Calib'
                                                                      * '<S1089>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_PostClrDiagDsbl_EnOv = 0;/* Referenced by: '<S1212>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_PostClrDiagDsbl_Ovrd = 0;/* Referenced by: '<S1213>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_RatEnblInitTemp = 1;/* Referenced by: '<S125>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_Rationality_Sel = 1;/* Referenced by: '<S345>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_ReplaceSCP_DC4PxPy = 1;/* Referenced by:
                                                                      * '<S1081>/Calib'
                                                                      * '<S1088>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_ResetMdl_OvrdEnbl = 0;/* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_ResetMdl_OvrdVal = 0;/* Referenced by: '<S127>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_RunCrankActvOvrdEnbl = 0;/* Referenced by: '<S1214>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_RunCrankActvOvrdVal = 0;/* Referenced by: '<S1215>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_SCPInletTmpSnsr_FA_EnblCnds = 1;/* Referenced by: '<S1024>/Calib' */

#endif

#if (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_SCPInletTmpSnsr_FA_FltCndsEnbl = 1;/* Referenced by: '<S1065>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCPInletTmpSnsr_Present =
    1;                                 /* Referenced by:
                                        * '<S867>/Calib'
                                        * '<S272>/Calib'
                                        * '<S1025>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_AmbientTempFAOvrdEnbl
    = 0;                               /* Referenced by: '<S1236>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_AmbientTempFAOvrdVal =
    1;                                 /* Referenced by: '<S1237>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_AmbientTempFA_Init =
    0;                                 /* Referenced by: '<S1276>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_AmbientTempOvrdEnbl =
    0;                                 /* Referenced by: '<S1238>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_AmbientTemp_SD = 0;/* Referenced by: '<S357>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCNegtvTempFAOvrdEnbl
    = 1;                               /* Referenced by: '<S1239>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCNegtvTempFAOvrdVal =
    1;                                 /* Referenced by: '<S1240>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCNegtvTempFA_D = 1;/* Referenced by: '<S358>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCNegtvTempFA_NF = 1;/* Referenced by: '<S1298>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCNegtvTempFA_SD = 1;/* Referenced by: '<S359>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCNegtvTempOvrdEnbl =
    1;                                 /* Referenced by: '<S1241>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_SCP_DCNegtvTempSNAOvrdEnbl = 0;/* Referenced by: '<S1242>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCNegtvTempSNAOvrdVal
    = 1;                               /* Referenced by: '<S1243>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_SCP_DCNegtvTempSnsrFA_Init = 0;/* Referenced by: '<S1277>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_SCP_DCNegtvTempSnsrFA_Init_out = 1;/* Referenced by: '<S1299>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCNegtvTemp_SD = 1;/* Referenced by: '<S360>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCNegtv_IncldDiag4FA =
    1;                                 /* Referenced by: '<S159>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCNgtv_FA_EnblCnds =
    1;                                 /* Referenced by: '<S929>/Calib' */

#endif

#if (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCNgtv_FA_FltCndsEnbl
    = 1;                               /* Referenced by: '<S1066>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCPstvTempFAOvrdEnbl =
    1;                                 /* Referenced by: '<S1244>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCPstvTempFAOvrdVal =
    1;                                 /* Referenced by: '<S1245>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCPstvTempFA_D = 1;/* Referenced by: '<S361>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCPstvTempFA_NF = 1;/* Referenced by: '<S1300>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCPstvTempFA_SD = 1;/* Referenced by: '<S362>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCPstvTempOvrdEnbl =
    1;                                 /* Referenced by: '<S1246>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCPstvTempSNAOvrdEnbl
    = 0;                               /* Referenced by: '<S1247>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCPstvTempSNAOvrdVal =
    1;                                 /* Referenced by: '<S1248>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCPstvTempSnsrFA_Init
    = 0;                               /* Referenced by: '<S1278>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_SCP_DCPstvTempSnsrFA_Init_out = 1;/* Referenced by: '<S1301>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCPstvTemp_SD = 1;/* Referenced by: '<S363>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCPstv_FA_EnblCnds =
    1;                                 /* Referenced by: '<S948>/Calib' */

#endif

#if (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCPstv_FA_FltCndsEnbl
    = 1;                               /* Referenced by: '<S1067>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCPstv_IncldDiag4FA =
    1;                                 /* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_DCTmpSnsrs_Present =
    0;                                 /* Referenced by:
                                        * '<S226>/Calib'
                                        * '<S868>/Calib'
                                        * '<S930>/Calib'
                                        * '<S949>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_InletTempFAOvrdEnbl =
    0;                                 /* Referenced by: '<S1249>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_InletTempFAOvrdVal =
    1;                                 /* Referenced by: '<S1250>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_InletTempFA_D = 0;/* Referenced by: '<S364>/Calib' */

#endif

#if !Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_InletTempFA_NF = 1;/* Referenced by: '<S1302>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_InletTempFA_SD = 0;/* Referenced by: '<S365>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_InletTempOvrdEnbl = 0;/* Referenced by: '<S1251>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_InletTempSNAOvrdEnbl =
    0;                                 /* Referenced by: '<S1252>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_InletTempSNAOvrdVal =
    1;                                 /* Referenced by: '<S1253>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_InletTempSnsrFA_Init =
    0;                                 /* Referenced by: '<S1279>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT)
    KeAATR_b_SCP_InletTempSnsrFA_Init_out = 0;/* Referenced by: '<S1303>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_InletTemp_SD = 0;/* Referenced by: '<S366>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_SCP_Inlet_IncldDiag4FA =
    1;                                 /* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(boolean, AATR_VAR_INIT) KeAATR_b_VehSpdOvrdEnbl = 0;/* Referenced by: '<S1216>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_dT_AmbAirTemp_RatErr = 5.0F;/* Referenced by: '<S346>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_dT_CityMode = 0.2F;/* Referenced by: '<S69>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_dT_GarageExitHugeDelta =
    12.0F;                             /* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_dT_HwyMode = 0.4F;/* Referenced by: '<S70>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_dT_NoDecrmnt = 0.0F;/* Referenced by: '<S71>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_dT_ParkMode = 0.1F;/* Referenced by: '<S72>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8

static volatile CONST(uint16, AATR_VAR_INIT) KeAATR_dTt_DCNgtv_MaxTempDeriv =
    10U;                               /* Referenced by: '<S942>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8

static volatile CONST(uint16, AATR_VAR_INIT) KeAATR_dTt_DCPstv_MaxTempDeriv =
    10U;                               /* Referenced by: '<S961>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8

static volatile CONST(uint16, AATR_VAR_INIT) KeAATR_dTt_SCPInlet_MaxTempDeriv =
    10U;                               /* Referenced by: '<S1040>/Calib' */

#endif

static volatile CONST(TeAATR_e_CBC_AmbientAirVoltSrc, AATR_VAR_INIT)
    KeAATR_e_CBC_AmbientAirVoltSrc_Init = CeAATR_e_CBC_AmbVoltSrc_Dflt;/* Referenced by: '<S1265>/Calib' */

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(TeESPR_e_EngSpdStatus, AATR_VAR_INIT)
    KeAATR_e_EngineSpeedStsOvrdVal = CeESPR_e_EngSpdNormal;/* Referenced by: '<S1217>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(TeAATR_e_AmbAirTempSource, AATR_VAR_INIT)
    KeAATR_e_EstAmbAirTempSource_Init = CeAATR_e_AmbAirTemp_Dflt;/* Referenced by: '<S1304>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(TeOBCR_e_ChargingSystemSts, AATR_VAR_INIT)
    KeAATR_e_OBCR_ChargingSystemStsOvrdVal = CeOBCR_e_ChargingSts_Charging;/* Referenced by: '<S1218>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_k_CBC_AmbAirTemp_Coef =
    0.05078F;                          /* Referenced by: '<S145>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_k_SCP_DCNegtvTemp_Coef =
    0.05078F;                          /* Referenced by: '<S160>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_k_SCP_DCPstvTemp_Coef =
    0.05078F;                          /* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_k_SCP_InletTemp_Coef =
    0.05078F;                          /* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_n_EngineRPMIntakeTempValid =
    1000.0F;                           /* Referenced by: '<S875>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_n_EngineSpeedOvrdVal =
    1000.0F;                           /* Referenced by: '<S1219>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_n_LTPP2_Max_RPM = 1000.0F;/* Referenced by: '<S991>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_n_LTPP_Max_RPM = 1000.0F;/* Referenced by: '<S1003>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT)
    KeAATR_n_RateEngineRPMIncrease4IntakeValid = 1.1F;/* Referenced by: '<S876>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_AmbAirTemp_RatFreq =
    1800.0F;                           /* Referenced by: '<S287>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_CBC_AATSnsr_FA_DbncTime =
    10.0F;                             /* Referenced by: '<S898>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_DCNgtv_FilterDeriv_CutOff
    = 0.1F;                            /* Referenced by: '<S943>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_DCPstv_FilterDeriv_CutOff
    = 0.1F;                            /* Referenced by: '<S962>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_EnterSoakLowSpeed = 15.0F;/* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(uint32, AATR_VAR_INIT) KeAATR_t_HCPOffTime_Ovrd = 0U;/* Referenced by: '<S1220>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_IV_AmbAirTempTimer =
    7200.0F;                           /* Referenced by: '<S305>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_IV_ValidTimer_App2 =
    14400.0F;                          /* Referenced by: '<S104>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_InitValue_Period = 1.0F;/* Referenced by: '<S105>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_LTPP2_OffTime = 10.0F;/* Referenced by: '<S992>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_LTPP_OffTime = 10.0F;/* Referenced by: '<S1004>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_OneReadTmrExitSoak =
    250.0F;                            /* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT)
    KeAATR_t_PluggedIn_Cal4Rat_BacktoBase = 1200.0F;/* Referenced by: '<S826>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT)
    KeAATR_t_PluggedIn_Cal4Rat_BacktoLv1 = 900.0F;/* Referenced by: '<S827>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_PluggedIn_Cal4Rat_Lv1 =
    10.0F;                             /* Referenced by: '<S828>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_PluggedIn_Cal4Rat_Lv2 =
    30.0F;                             /* Referenced by: '<S829>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_Prev_AmbAirTempTimer =
    7200.0F;                           /* Referenced by:
                                        * '<S306>/Calib'
                                        * '<S274>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_RtnltyPassResetDly = 0.5F;/* Referenced by: '<S337>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_RtnltyTimePeriod = 2.0F;/* Referenced by: '<S338>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT)
    KeAATR_t_SCPInletTmpSnsr_FA_DbncTime = 10.0F;/* Referenced by: '<S1026>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT)
    KeAATR_t_SCPInlet_FilterDeriv_CutOff = 0.1F;/* Referenced by: '<S1041>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_SCP_DCNgtv_FA_DbncTime =
    10.0F;                             /* Referenced by: '<S931>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_SCP_DCPstv_FA_DbncTime =
    10.0F;                             /* Referenced by: '<S950>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_StrtTimerExitSoak = 0.0F;/* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_TimeSignal_Period = 1.1F;/* Referenced by: '<S106>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_TmrExitSoak = 300.0F;/* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_t_VehSoakTimeValid = 270.0F;/* Referenced by: '<S132>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(uint32, AATR_VAR_INIT) KeAATR_t_VehicleOFFTime_1 = 3600U;/* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(uint32, AATR_VAR_INIT) KeAATR_t_VehicleSoakTime = 21600U;/* Referenced by: '<S131>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_v_CitySpeed = 20.0F;/* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_v_EntrHeatSoakSpd = 5.0F;/* Referenced by:
                                                                      * '<S45>/Calib'
                                                                      * '<S62>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_v_HwySpeed = 45.0F;/* Referenced by: '<S63>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_v_OneReadExitHeatSoakSpd =
    5.0F;                              /* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_v_OneReadMax = 9999.0F;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8

static volatile CONST(float32, AATR_VAR_INIT) KeAATR_v_VehSpdOvrdVal = 75.0F;/* Referenced by: '<S1221>/Calib' */

#endif

#if Rte_SysCon_Variant_AATR_8 || Rte_SysCon_Variant_AATR_9

static volatile CONST(float32, AATR_VAR_INIT) KtAATR_T_CBC_AmbAirTemp[13] =
{
    215.0F, 215.0F, 130.0F, 80.0F, 50.0F, 40.0F, 30.0F, 10.0F, 0.0F, -10.0F,
    -20.0F, -40.0F, -40.0F
} ;                                    /* Referenced by:
                                        * '<S31>/Vector'
                                        * '<S146>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_AATR_8 || Rte_SysCon_Variant_AATR_9

static volatile CONST(float32, AATR_VAR_INIT) KxAATR_T_CBC_AmbAirTemp[13] =
{
    0.0F, 0.32F, 0.325F, 1.127F, 2.265F, 2.746F, 3.235F, 4.086F, 4.397F, 4.622F,
    4.776F, 4.931F, 5.0F
} ;                                    /* Referenced by:
                                        * '<S31>/Vector'
                                        * '<S146>/Vector'
                                        */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_AATR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AATR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_AATR_8

static VAR(TeAATR_e_Rat_Level, AATR_VAR_INIT) VaAATD_e_SensorTempThrshldLvl[10];/* '<S831>/Merge' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_Pct_CBC_Rationality_PctErr;/* '<S339>/Product' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_AmbAirTempPred;/* '<S198>/Switch19' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_AmbAirTempPredPrev_App1;/* '<S280>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_AmbAirTemp_AG;/* '<S192>/Switch' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_AmbAirTemp_IV;/* '<S92>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_AmbAirTemp_InRunIV;/* '<S91>/Merge' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_AmbAirTemp_Pred_App1;/* '<S278>/Merge' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_AmbAirTemp_Pred_App2;/* '<S208>/Merge' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_AmbAirTemp_PrevPred_App2;/* '<S211>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_AmbAirTemp_Saved;/* '<S1254>/Data Store Read' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_AmbAirTemp_Sig4Rat;/* '<S277>/Switch2' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_AmdAir_RatSig_BD;/* '<S339>/Switch3' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_CBC_AmbAirTempFlt_FUNC;/* '<S142>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_CBC_AmbAirTempRaw;/* '<S146>/Vector' */

#endif

#if !Rte_SysCon_Variant_AATR_8 && Rte_SysCon_Variant_AATR_9

static VAR(float32, AATR_VAR_INIT) VeAATC_T_CBC_AmbAirTempRaw_MSG;/* '<S31>/Vector' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_SCP_DCNegtvTempFlt;
                               /* '<S139>/SigConvForSigProp_Variant_Source_0' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_SCP_DCPstvTempFlt;
                               /* '<S140>/SigConvForSigProp_Variant_Source_0' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_SCP_InletTempFlt;
                               /* '<S141>/SigConvForSigProp_Variant_Source_0' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_TempPriortySnsr1;/* '<S267>/Gain' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_TempPriortySnsr2;/* '<S268>/Gain' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_TempPriortySnsr3;/* '<S269>/Gain' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATC_T_TempPriortySnsr4;/* '<S270>/Gain' */

#endif

#if !Rte_SysCon_Variant_AATR_8 && Rte_SysCon_Variant_AATR_9

static VAR(float32, AATR_VAR_INIT) VeAATC_U_CBC_AmbAirVolt_Dial;/* '<S23>/Switch17' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_AmbAirTempFA_Saved;/* '<S1254>/Data Store Read2' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_AmbAirTempPredFA;/* '<S198>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_AmbAirTemp_FA_App1;/* '<S278>/Merge1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_AmbAirTemp_IVPrd;/* '<S107>/Greater  Than1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_AmbAirTemp_IVPrdCmpt;/* '<S33>/Logical2' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_AmbAirTemp_IV_FA;/* '<S93>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_AmbAirTemp_PredFA_App2;/* '<S208>/Merge1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_AmbAirTemp_PrevPredFA_App2;/* '<S212>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_AmbAirTemp_Reset;/* '<S33>/Merge' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_AmbAirTemp_RtnlPass;/* '<S340>/OR1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_AmbAirTemp_RtnlReset;/* '<S288>/OR1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_AmbAirTemp_RtnlTimerPass;/* '<S279>/Logical4' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_CBCAmbAirVlt_HiFltDtct;/* '<S18>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_CBCAmbAirVlt_LoFltDtct;/* '<S18>/Switch' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_CBC_Rationality_StsChk;/* '<S339>/Switch' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_Enbl_IVTemp;/* '<S278>/Logical10' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_SCPDCNegtvTemp_Flty;
                              /* '<S139>/SigConvForSigProp_Variant_Source1_0' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_SCP_DCPstvTemp_Flty;
                              /* '<S140>/SigConvForSigProp_Variant_Source1_0' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_SCP_InletTemp_Flty;
                              /* '<S141>/SigConvForSigProp_Variant_Source1_0' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_Switch2ActValue;/* '<S108>/Greater  Than1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_UseCBCTemp;/* '<S278>/Logical5' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_UseECMTemp;/* '<S278>/Logical' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_UseIVTemp;/* '<S278>/Logical9' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_UsePrevPred_AmbUpdatdOnce;/* '<S249>/OR1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_UsePrevPred_B4Tmr;/* '<S233>/Logical Operator21' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_UsePrevTemp;/* '<S307>/Greater  Than1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_UsePrevTemp_BT;/* '<S297>/Logical4' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_UsePriortySnsr1;/* '<S255>/AND' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_UsePriortySnsr2;/* '<S256>/AND' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_UsePriortySnsr3;/* '<S257>/AND' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_UsePriortySnsr4;/* '<S258>/AND' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATC_b_VehicleSoaked;/* '<S91>/Logical Operator1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(TeAATR_e_AmbAirTempSource, AATR_VAR_INIT)
    VeAATC_e_AmbAirTempSource_App1;    /* '<S278>/Merge2' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(TeAATR_e_AmbAirTempSource, AATR_VAR_INIT)
    VeAATC_e_AmbAirTempSource_App2;    /* '<S208>/Merge2' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(TeAATR_e_AmbAirTempSource, AATR_VAR_INIT) VeAATC_e_SourcePriortySnsr1;/* '<S262>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(TeAATR_e_AmbAirTempSource, AATR_VAR_INIT) VeAATC_e_SourcePriortySnsr2;/* '<S259>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(TeAATR_e_AmbAirTempSource, AATR_VAR_INIT) VeAATC_e_SourcePriortySnsr3;/* '<S260>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(TeAATR_e_AmbAirTempSource, AATR_VAR_INIT) VeAATC_e_SourcePriortySnsr4;/* '<S261>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_CBCAmbAirTemp_PerfFailCnt;/* '<S1106>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_CBCAmbAirTemp_PerfSmpCnt;/* '<S1107>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_CBCAmbAirVlt_HiFailCnt;/* '<S557>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_CBCAmbAirVlt_HiSmpCnt;/* '<S558>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_CBCAmbAirVlt_LoFailCnt;/* '<S576>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_CBCAmbAirVlt_LoSmpCnt;/* '<S577>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_DCNegtvTemp_FailCnt;/* '<S658>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_DCNegtvTemp_HiFailCnt;/* '<S616>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_DCNegtvTemp_HiSmpCnt;/* '<S617>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_DCNegtvTemp_LoFailCnt;/* '<S635>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_DCNegtvTemp_LoSmpCnt;/* '<S636>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_DCNegtvTemp_PerfFailCnt;/* '<S1130>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_DCNegtvTemp_PerfSmpCnt;/* '<S1131>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_DCNegtvTemp_SmpCnt;/* '<S659>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_DCPstvTemp_FailCnt;/* '<S732>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_DCPstvTemp_HiFailCnt;/* '<S690>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_DCPstvTemp_HiSmpCnt;/* '<S691>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_DCPstvTemp_LoFailCnt;/* '<S709>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_DCPstvTemp_LoSmpCnt;/* '<S710>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_DCPstvTemp_PerfFailCnt;/* '<S1154>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_DCPstvTemp_PerfSmpCnt;/* '<S1155>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_DCPstvTemp_SmpCnt;/* '<S733>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_InletTemp_FailCnt;/* '<S811>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_InletTemp_HiFailCnt;/* '<S769>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_InletTemp_HiSmpCnt;/* '<S770>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_InletTemp_LoFailCnt;/* '<S789>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_InletTemp_LoSmpCnt;/* '<S790>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_InletTemp_PerfFailCnt;/* '<S1178>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_InletTemp_PerfSmpCnt;/* '<S1179>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8

static VAR(uint16, AATR_VAR_INIT) VeAATD_Cnt_SCP_InletTemp_SmpCnt;/* '<S812>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATD_T_InitorDCNegtvTemp;/* synthesized block */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATD_T_IntakeorDCPstvTemp;/* synthesized block */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_AmbAirTemp_PredFA;/* '<S376>/FALSE Constant' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_CBCAmbAirTemp_PerfFltDtct;/* synthesized block */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_CBCAmbAirVlt_HiFltDtct;/* '<S519>/AND' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_CBCAmbAirVlt_LoFltDtct;/* '<S516>/AND' */

#endif

#if (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_CBCFaulty;/* '<S832>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_CBCFaulty4mRat;/* '<S833>/Relational Operator4' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_CBCFaulty_AftrSnsrChk;/* '<S869>/Gain' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_CBC_AmbAirShrtHi_FltSymptm;/* '<S539>/Comparison1' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_CBC_AmbAirShrtLo_FltSymptm;/* '<S540>/Comparison2' */

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_CBC_AmbAirVolt_OOR_Enbl;/* '<S536>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_CBC_EnblRatnlty;/* synthesized block */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_CBC_NoDecision;/* '<S833>/Relational Operator5' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_DsblDiagFailSafeOrCdeClr;/* '<S533>/NOT4' */

#endif

#if Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_EnblSCPInletTemp_ShrtHi;/* '<S745>/Logical Operator4' */

#endif

#if Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_EnblSCPInletTemp_ShrtLo;/* '<S746>/Logical Operator3' */

#endif

#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_EngineAccIntakeFlowGood;/* '<S877>/Relational Operator3' */

#endif

#if (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_InitorSCPDCNgtvFaulty;/* '<S832>/Logical Operator8' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_InitorSCPDCNgtvFaulty4mRat;/* '<S833>/Relational Operator24' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_InitorSCPDCNgtv_NoDecision;/* '<S833>/Relational Operator25' */

#endif

#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_IntakeFlowGood;
                              /* '<S825>/SigConvForSigProp_Variant_Source4_0' */

#endif

#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_IntakeFlowGood_B4Ovrrd;/* '<S870>/Logical Operator1' */

#endif

#if (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_IntakeorSCPDCPstvFaulty;/* '<S832>/Logical Operator5' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_IntakeorSCPDCPstvFaulty4mRat;/* '<S833>/Relational Operator18' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_IntakeorSCPDCPstv_NoDecision;/* '<S833>/Relational Operator19' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_Lv1CalSet_PluggedIn;/* '<S849>/Gain' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_Lv2CalSet_PluggedIn;/* '<S848>/Gain' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_NoCommIssueCPIM;/* '<S529>/Logical Operator3' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCPDCNegtv_EnblRatnlty;/* '<S890>/Gain' */

#endif

#if Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCPDCNgtvFaulty_AftrSnsrChk;/* '<S824>/Switch13' */

#endif

#if Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCPDCPstvFaulty_AftrSnsrChk;/* '<S824>/Switch9' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCPDCPstv_EnblRatnlty;/* '<S889>/Gain' */

#endif

#if (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCPInletFaulty;/* '<S832>/Logical Operator1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCPInletFaulty4mRat;/* '<S833>/Relational Operator10' */

#endif

#if Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCPInletFaulty_AftrSnsrChk;/* '<S824>/Switch5' */

#endif

#if Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCPInletTemp_ShrtHi_FltSymptm;/* '<S747>/Relational Operator1' */

#endif

#if Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCPInletTemp_ShrtLo_FltSymptm;/* '<S748>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCPInlet_EnblRatnlty;/* '<S888>/Gain' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCPInlet_NoDecision;/* '<S833>/Relational Operator11' */

#endif

#if (!Rte_SysCon_Variant_AATR_13 && !Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8)

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCP_DCNegtvTemp_FltDtct;/* '<S518>/AND' */

#endif

#if (!Rte_SysCon_Variant_AATR_13 && !Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8)

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCP_DCNegtvTemp_HiFltDtct;/* '<S526>/AND' */

#endif

#if (!Rte_SysCon_Variant_AATR_13 && !Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8)

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCP_DCNegtvTemp_LoFltDtct;/* '<S525>/AND' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCP_DCNegtvTemp_PerfFltDtct;/* synthesized block */

#endif

#if (!Rte_SysCon_Variant_AATR_16 && !Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8)

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCP_DCPstvTemp_FltDtct;/* '<S517>/AND' */

#endif

#if (!Rte_SysCon_Variant_AATR_16 && !Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8)

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCP_DCPstvTemp_HiFltDtct;/* '<S524>/AND' */

#endif

#if (!Rte_SysCon_Variant_AATR_16 && !Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8)

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCP_DCPstvTemp_LoFltDtct;/* '<S523>/AND' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCP_DCPstvTemp_PerfFltDtct;/* synthesized block */

#endif

#if (!Rte_SysCon_Variant_AATR_10 && !Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8)

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCP_InletTemp_FltDtct;/* '<S527>/AND' */

#endif

#if (!Rte_SysCon_Variant_AATR_10 && !Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8)

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCP_InletTemp_HiFltDtct;/* '<S522>/AND' */

#endif

#if (!Rte_SysCon_Variant_AATR_10 && !Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8)

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCP_InletTemp_LoFltDtct;/* '<S521>/AND' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATD_b_SCP_InletTemp_PerfFltDtct;/* synthesized block */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATD_dT_TempSnsrRat_s1s2;/* '<S1048>/Gain' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATD_dT_TempSnsrRat_s1s3;/* '<S1049>/Gain' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATD_dT_TempSnsrRat_s1s4;/* '<S1050>/Gain' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATD_dT_TempSnsrRat_s1s5;/* '<S1051>/Gain' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATD_dT_TempSnsrRat_s2s3;/* '<S1052>/Gain' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATD_dT_TempSnsrRat_s2s4;/* '<S1053>/Gain' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATD_dT_TempSnsrRat_s2s5;/* '<S1054>/Gain' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATD_dT_TempSnsrRat_s3s4;/* '<S1055>/Gain' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATD_dT_TempSnsrRat_s3s5;/* '<S1056>/Gain' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATD_dT_TempSnsrRat_s4s5;/* '<S1057>/Gain' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(TeAATR_e_PlgInTimer_CalSet, AATR_VAR_INIT)
    VeAATD_e_CalSetLvl_PluggedIn;      /* '<S823>/Merge' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATI_T_ClntPumpTemp_Dial;/* '<S21>/Switch36' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATI_T_ECM_AmbAirTemp_Dial;/* '<S22>/Switch18' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATI_T_ECM_IntakeTemp_Dial;/* '<S21>/Switch16' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATI_T_LTPsvPumpTemp_Dial;/* '<S21>/Switch7' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATI_T_OnBrdChrg_ClntTmpIn_Dial;/* '<S21>/Switch3' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATI_T_SCP_AmbientTemp_Dial;/* '<S22>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATI_b_CBC_AmbAirVoltFA_Dial;/* '<S22>/Switch19' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATI_b_ClntPumpTempFA_Dial;/* '<S21>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATI_b_DiagGlblCndtnsValid_OvrdVal_Dial;/* '<S21>/Switch13' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATI_b_DsblDiagFailSafe_OvrdVal_Dial;/* '<S21>/Switch5' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATI_b_ECM_AmbAirTempFA_Dial;/* '<S22>/Switch20' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATI_b_ECM_IntakeTempFA_Dial;/* '<S21>/Switch15' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATI_b_HCPOffTimeFA_OvrdVal_Dial;/* '<S1223>/Switch' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATI_b_LTPsvPumpTemp_FA_Dial;/* '<S21>/Switch9' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATI_b_OnBrdChrg_ClntTmpIn_FA_Dial;/* '<S21>/Switch4' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATI_b_PostCodeClrDiagDsbl_OvrdVal_Dial;/* '<S21>/Switch6' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATI_b_RunCrankActive_Dial;/* '<S21>/Switch2' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATI_b_SCP_AmbientTempFA_Dial;/* '<S22>/Switch2' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATI_b_SCP_DCNegtvTempSNA_Dial;/* '<S22>/Switch11' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATI_b_SCP_DCPstvTempSNA_Dial;/* '<S22>/Switch10' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATI_b_SCP_InletTempSNA_Dial;/* '<S22>/Switch9' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(TeOBCR_e_ChargingSystemSts, AATR_VAR_INIT)
    VeAATI_e_ChargingSystemSts_Dial;   /* '<S21>/Switch18' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(TeESPR_e_EngSpdStatus, AATR_VAR_INIT) VeAATI_e_EngineSpeedStatus_Dial;/* '<S21>/Switch17' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATI_n_EngineSpeed_Dial;/* '<S21>/Switch14' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(uint32, AATR_VAR_INIT) VeAATI_t_HCPOffTime_OvrdVal_Dial;/* '<S1222>/Switch' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATI_v_VehSpd_Dial;/* '<S21>/Switch12' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATR_b_CBCPassedPrev;/* '<S221>/Logical Operator12' */

#endif

#if !Rte_SysCon_Variant_AATR_8 && Rte_SysCon_Variant_AATR_9

static VAR(boolean, AATR_VAR_INIT) VeAATR_b_CBC_AmbAirVoltFA;/* '<S23>/Switch19' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATR_b_EntrHeatSoak_TimeExprd;/* '<S51>/Logical Operator2' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATR_b_ExitHeatSoak_TimerExpired;/* '<S52>/Logical Operator2' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATR_b_HeatSoakExitTimerEnabled;/* '<S54>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATR_b_InitHeatSoak_OneRead;/* '<S84>/AND' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATR_b_InitHeatSoak_VehSoaked;/* '<S82>/AND' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATR_b_InitTemp_Valid;/* '<S109>/Greater  Than1' */

#endif

#if (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

static VAR(boolean, AATR_VAR_INIT) VeAATR_b_NoCommIssuewCPIM;/* '<S879>/Logical Operator2' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATR_b_SensorsVentilated;/* '<S53>/OR1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATR_b_SensorsVentilated_AftrInit;/* '<S37>/Switch1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATR_b_SensorsVentilated_B4Init;/* '<S32>/Logical Operator1' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATR_b_SpdLow_EnblHeatSoak;/* '<S32>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATR_b_UseCBC_App2;/* '<S229>/Logical Operator2' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATR_b_UsePrevPred_App2;/* '<S233>/Logical Operator25' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATR_b_UseSCPDCNegTemp;/* '<S230>/Logical' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATR_b_UseSCPDCPosTemp;/* '<S231>/Logical Operator6' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(boolean, AATR_VAR_INIT) VeAATR_b_UseSCPInlet_App2;/* '<S232>/Logical Operator14' */

#endif

#if Rte_SysCon_Variant_AATR_8

static VAR(float32, AATR_VAR_INIT) VeAATR_dT_TmrFactr4ExitSoak;/* '<S59>/Merge' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AATR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_AATR
#include "MemMap.h"

CONST(ConstB_AATR_ac_T, AATR_VAR_INIT) AATR_ac_ConstB =
{
    CeDFIB_e_Init,                     /* '<S1305>/Constant' */
    CeDFIB_e_Init,                     /* '<S1306>/Constant' */
    CeDFIB_e_Init,                     /* '<S1312>/Constant' */
    CeDFIB_e_Init,                     /* '<S1313>/Constant' */
    CeDFIB_e_Init,                     /* '<S1314>/Constant' */
    CeDFIB_e_Init,                     /* '<S1315>/Constant' */
    CeDFIB_e_Init,                     /* '<S1316>/Constant' */
    CeDFIB_e_Init,                     /* '<S1317>/Constant' */
    CeDFIB_e_Init,                     /* '<S1318>/Constant' */
    CeDFIB_e_Init,                     /* '<S1319>/Constant' */
    CeDFIB_e_Init,                     /* '<S1307>/Constant' */
    CeDFIB_e_Init,                     /* '<S1308>/Constant' */
    CeDFIB_e_Init,                     /* '<S1309>/Constant' */
    CeDFIB_e_Init,                     /* '<S1310>/Constant' */
    CeDFIB_e_Init,                     /* '<S1311>/Constant' */

#if Rte_SysCon_Variant_AATR_8

    {
        CeAATR_e_AmbAirTemp_CBC, CeAATR_e_AmbAirTemp_SCP_Inlet,
        CeAATR_e_AmbAirTemp_SCP_DCPstvTemp, CeAATR_e_AmbAirTemp_SCP_DCNegtvTemp
    }                                  /* synthesized block */
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_AATR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AATR
#include "MemMap.h"

VAR(B_AATR_ac_T, AATR_VAR_INIT) AATR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AATR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_AATR
#include "MemMap.h"

VAR(DW_AATR_ac_T, AATR_VAR_INIT) AATR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_AATR
#include "MemMap.h"
#if Rte_SysCon_Variant_AATR_8

static FUNC(void, AATR_CODE_LOCAL) AATR_ac_AmbAirTemp_PPCTIS_InitDflt(VAR
    (float32, AUTOMATIC) rtu_ClntPumpTemp, P2VAR(float32, AUTOMATIC,
    AATR_VAR_INIT) rty_ClntPump_Temp, P2VAR(boolean, AUTOMATIC, AATR_VAR_INIT)
    rty_ClntPump_TempFA);

#endif

#if (Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

static FUNC(void, AATR_CODE_LOCAL) AATR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, AATR_VAR_INIT)
    rty_FaultSts);

#endif

#if (Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

static FUNC(void, AATR_CODE_LOCAL) AATR_ac_Init_a(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, AATR_VAR_INIT)
    rty_FaultSts);

#endif

#if (Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

static FUNC(void, AATR_CODE_LOCAL) AATR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, AATR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_AATR_8

static FUNC(void, AATR_CODE_LOCAL) AATR_ac_AmbAirTemp_SNADflt(P2VAR(float32,
    AUTOMATIC, AATR_VAR_INIT) rty_AmbAirTemp_IV_RunDflt, P2VAR(boolean,
    AUTOMATIC, AATR_VAR_INIT) rty_AmbAirTemp_FA, P2VAR(TeAATR_e_AmbAirTempSource,
    AUTOMATIC, AATR_VAR_INIT) rty_Source_DfltSNA);

#endif

#if Rte_SysCon_Variant_AATR_8

static FUNC(void, AATR_CODE_LOCAL) AATR_ac_SnsrRat_V02(void);

#endif

/*
 * Output and update for action system:
 *    '<S91>/AmbAirTemp_PPCTIS_InitDflt'
 *    '<S91>/AmbAirTemp_PECTOS_InitDflt'
 *    '<S91>/AmbAirTemp_PsvPump_InitDflt'
 */
#if Rte_SysCon_Variant_AATR_8

static FUNC(void, AATR_CODE_LOCAL) AATR_ac_AmbAirTemp_PPCTIS_InitDflt(VAR
    (float32, AUTOMATIC) rtu_ClntPumpTemp, P2VAR(float32, AUTOMATIC,
    AATR_VAR_INIT) rty_ClntPump_Temp, P2VAR(boolean, AUTOMATIC, AATR_VAR_INIT)
    rty_ClntPump_TempFA)
{
    /* Inport: '<S114>/ClntPumpTemp' */
    *rty_ClntPump_Temp = rtu_ClntPumpTemp;

    /* SignalConversion generated from: '<S114>/ClntPump_TempFA' incorporates:
     *  Constant: '<S114>/FALSE Constant'
     */
    *rty_ClntPump_TempFA = false;
}

#endif

/*
 * Output and update for enable system:
 *    '<S548>/Fail'
 *    '<S567>/Fail'
 *    '<S607>/Fail'
 *    '<S626>/Fail'
 *    '<S649>/Fail'
 *    '<S681>/Fail'
 *    '<S700>/Fail'
 *    '<S723>/Fail'
 *    '<S760>/Fail'
 *    '<S780>/Fail'
 *    ...
 */
#if (Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

static FUNC(void, AATR_CODE_LOCAL) AATR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, AATR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S548>/Fail' incorporates:
     *  EnablePort: '<S553>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S553>/FaultSts' incorporates:
         *  Constant: '<S559>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S548>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S548>/Init'
 *    '<S567>/Init'
 *    '<S607>/Init'
 *    '<S626>/Init'
 *    '<S649>/Init'
 *    '<S681>/Init'
 *    '<S700>/Init'
 *    '<S723>/Init'
 *    '<S760>/Init'
 *    '<S780>/Init'
 *    ...
 */
#if (Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

static FUNC(void, AATR_CODE_LOCAL) AATR_ac_Init_a(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, AATR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S548>/Init' incorporates:
     *  EnablePort: '<S554>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S554>/FaultSts' incorporates:
         *  Constant: '<S560>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S548>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S548>/Pass'
 *    '<S567>/Pass'
 *    '<S607>/Pass'
 *    '<S626>/Pass'
 *    '<S649>/Pass'
 *    '<S681>/Pass'
 *    '<S700>/Pass'
 *    '<S723>/Pass'
 *    '<S760>/Pass'
 *    '<S780>/Pass'
 *    ...
 */
#if (Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

static FUNC(void, AATR_CODE_LOCAL) AATR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, AATR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S548>/Pass' incorporates:
     *  EnablePort: '<S555>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S555>/FaultSts' incorporates:
         *  Constant: '<S561>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S548>/Pass' */
}

#endif

/* Output and update for atomic system: '<S818>/SnsrRat_V02' */
#if Rte_SysCon_Variant_AATR_8

static FUNC(void, AATR_CODE_LOCAL) AATR_ac_SnsrRat_V02(void)
{
    uint32 VeAATD_b_IntakeorSCPDCPstv_NoDecision_tm;
    boolean VeAATD_b_IntakeorSCPDCPstvFaulty4mRat_tm;
    boolean VeAATD_b_SCPInletFaulty4mRat_tmp;
    boolean VeAATD_b_SCPInletFaulty4mRat_tmp_0;
    boolean VeAATD_b_SCPInletFaulty4mRat_tmp_1;
    boolean VeAATD_b_SCPInletFaulty4mRat_tmp_2;

    /* Logic: '<S833>/Logical Operator12' incorporates:
     *  Logic: '<S833>/Logical Operator26'
     *  Logic: '<S833>/Logical Operator34'
     */
    VeAATD_b_SCPInletFaulty4mRat_tmp =
        !AATR_ac_B.VariantMergeForOutportb_Sensor1_Disbl;

    /* Logic: '<S833>/Logical Operator13' incorporates:
     *  Logic: '<S833>/Logical Operator28'
     *  Logic: '<S833>/Logical Operator36'
     *  Logic: '<S833>/Logical Operator5'
     */
    VeAATD_b_SCPInletFaulty4mRat_tmp_0 =
        !AATR_ac_B.VariantMergeForOutportb_Sensor3_Disbl;

    /* Logic: '<S833>/Logical Operator15' incorporates:
     *  Logic: '<S833>/Logical Operator29'
     *  Logic: '<S833>/Logical Operator7'
     */
    VeAATD_b_SCPInletFaulty4mRat_tmp_1 =
        !AATR_ac_B.VariantMergeForOutportb_Sensor5_Disbl;

    /* Logic: '<S833>/Logical Operator14' incorporates:
     *  Logic: '<S833>/Logical Operator37'
     *  Logic: '<S833>/Logical Operator6'
     */
    VeAATD_b_SCPInletFaulty4mRat_tmp_2 =
        !AATR_ac_B.VariantMergeForOutportb_Sensor4_Disbl;

    /* RelationalOperator: '<S833>/Relational Operator10' incorporates:
     *  Abs: '<S833>/Abs4'
     *  Abs: '<S833>/Abs5'
     *  Abs: '<S833>/Abs6'
     *  Abs: '<S833>/Abs7'
     *  Constant: '<S833>/Constant Value'
     *  Logic: '<S833>/Logical Operator10'
     *  Logic: '<S833>/Logical Operator11'
     *  Logic: '<S833>/Logical Operator12'
     *  Logic: '<S833>/Logical Operator13'
     *  Logic: '<S833>/Logical Operator14'
     *  Logic: '<S833>/Logical Operator15'
     *  Logic: '<S833>/Logical Operator8'
     *  Logic: '<S833>/Logical Operator9'
     *  RelationalOperator: '<S833>/Relational Operator6'
     *  RelationalOperator: '<S833>/Relational Operator7'
     *  RelationalOperator: '<S833>/Relational Operator8'
     *  RelationalOperator: '<S833>/Relational Operator9'
     *  Sum: '<S833>/Subtract2'
     *  Sum: '<S833>/Sum4'
     *  Sum: '<S833>/Sum5'
     *  Sum: '<S833>/Sum6'
     *  Sum: '<S833>/Sum7'
     */
    VeAATD_b_SCPInletFaulty4mRat = (((sint32)((uint32)(((((uint32)(((fabsf
        (AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS -
         AATR_ac_B.VariantMergeForOutportSensor1) >= VeAATD_dT_TempSnsrRat_s1s2)
        && VeAATD_b_SCPInletFaulty4mRat_tmp) ? 1 : 0)) + ((uint32)(((fabsf
        (AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS -
         AATR_ac_B.VariantMergeForOutportSensor3) >= VeAATD_dT_TempSnsrRat_s2s3)
        && VeAATD_b_SCPInletFaulty4mRat_tmp_0) ? 1 : 0))) + ((uint32)(((fabsf
        (AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS - VeAATD_T_IntakeorDCPstvTemp)
        >= VeAATD_dT_TempSnsrRat_s2s4) && VeAATD_b_SCPInletFaulty4mRat_tmp_2) ?
        1 : 0))) + ((uint32)(((fabsf(AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS -
        VeAATD_T_InitorDCNegtvTemp) >= VeAATD_dT_TempSnsrRat_s2s5) &&
        VeAATD_b_SCPInletFaulty4mRat_tmp_1) ? 1 : 0))))) >= 2);

    /* RelationalOperator: '<S833>/Relational Operator11' incorporates:
     *  Constant: '<S833>/Constant Value'
     *  DataTypeConversion: '<S833>/Data Type Conversion28'
     *  DataTypeConversion: '<S833>/Data Type Conversion29'
     *  DataTypeConversion: '<S833>/Data Type Conversion30'
     *  DataTypeConversion: '<S833>/Data Type Conversion31'
     *  Sum: '<S833>/Subtract3'
     */
    VeAATD_b_SCPInlet_NoDecision = (((sint32)((uint32)(((((uint32)
        (AATR_ac_B.VariantMergeForOutportb_Sensor1_Disbl ? 1U : 0U)) +
        (AATR_ac_B.VariantMergeForOutportb_Sensor3_Disbl ? 1U : 0U)) +
        (AATR_ac_B.VariantMergeForOutportb_Sensor4_Disbl ? 1U : 0U)) +
        (AATR_ac_B.VariantMergeForOutportb_Sensor5_Disbl ? 1U : 0U)))) > 2);

    /* Logic: '<S833>/Logical Operator27' incorporates:
     *  Logic: '<S833>/Logical Operator35'
     *  Logic: '<S833>/Logical Operator4'
     */
    VeAATD_b_IntakeorSCPDCPstvFaulty4mRat_tm =
        !AATR_ac_B.VariantMergeForOutportb_Sensor2_Disbl;

    /* RelationalOperator: '<S833>/Relational Operator18' incorporates:
     *  Abs: '<S833>/Abs12'
     *  Abs: '<S833>/Abs13'
     *  Abs: '<S833>/Abs14'
     *  Abs: '<S833>/Abs15'
     *  Constant: '<S833>/Constant Value'
     *  Logic: '<S833>/Logical Operator24'
     *  Logic: '<S833>/Logical Operator25'
     *  Logic: '<S833>/Logical Operator27'
     *  Logic: '<S833>/Logical Operator30'
     *  Logic: '<S833>/Logical Operator31'
     *  RelationalOperator: '<S833>/Relational Operator20'
     *  RelationalOperator: '<S833>/Relational Operator21'
     *  RelationalOperator: '<S833>/Relational Operator22'
     *  RelationalOperator: '<S833>/Relational Operator23'
     *  Sum: '<S833>/Subtract6'
     *  Sum: '<S833>/Sum12'
     *  Sum: '<S833>/Sum13'
     *  Sum: '<S833>/Sum14'
     *  Sum: '<S833>/Sum15'
     */
    VeAATD_b_IntakeorSCPDCPstvFaulty4mRat = (((sint32)((uint32)(((((uint32)
        (((fabsf(VeAATD_T_IntakeorDCPstvTemp -
                 AATR_ac_B.VariantMergeForOutportSensor1) >=
           VeAATD_dT_TempSnsrRat_s1s4) && VeAATD_b_SCPInletFaulty4mRat_tmp) ? 1 :
         0)) + ((uint32)(((fabsf(VeAATD_T_IntakeorDCPstvTemp -
        AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS) >= VeAATD_dT_TempSnsrRat_s2s4)
                          && VeAATD_b_IntakeorSCPDCPstvFaulty4mRat_tm) ? 1 : 0)))
        + ((uint32)(((fabsf(VeAATD_T_IntakeorDCPstvTemp -
                            AATR_ac_B.VariantMergeForOutportSensor3) >=
                      VeAATD_dT_TempSnsrRat_s3s4) &&
                     VeAATD_b_SCPInletFaulty4mRat_tmp_0) ? 1 : 0))) + ((uint32)
        (((fabsf(VeAATD_T_IntakeorDCPstvTemp - VeAATD_T_InitorDCNegtvTemp) >=
           VeAATD_dT_TempSnsrRat_s4s5) && VeAATD_b_SCPInletFaulty4mRat_tmp_1) ?
         1 : 0))))) >= 2);

    /* Sum: '<S833>/Subtract7' incorporates:
     *  DataTypeConversion: '<S833>/Data Type Conversion12'
     *  DataTypeConversion: '<S833>/Data Type Conversion13'
     *  DataTypeConversion: '<S833>/Data Type Conversion14'
     *  Sum: '<S833>/Subtract9'
     */
    VeAATD_b_IntakeorSCPDCPstv_NoDecision_tm = (((uint32)
        (AATR_ac_B.VariantMergeForOutportb_Sensor1_Disbl ? 1U : 0U)) +
        (AATR_ac_B.VariantMergeForOutportb_Sensor2_Disbl ? 1U : 0U)) +
        (AATR_ac_B.VariantMergeForOutportb_Sensor3_Disbl ? 1U : 0U);

    /* RelationalOperator: '<S833>/Relational Operator19' incorporates:
     *  Constant: '<S833>/Constant Value'
     *  DataTypeConversion: '<S833>/Data Type Conversion15'
     *  Sum: '<S833>/Subtract7'
     */
    VeAATD_b_IntakeorSCPDCPstv_NoDecision = (((sint32)((uint32)
        (VeAATD_b_IntakeorSCPDCPstv_NoDecision_tm +
         (AATR_ac_B.VariantMergeForOutportb_Sensor5_Disbl ? 1U : 0U)))) > 2);

    /* RelationalOperator: '<S833>/Relational Operator24' incorporates:
     *  Abs: '<S833>/Abs16'
     *  Abs: '<S833>/Abs17'
     *  Abs: '<S833>/Abs18'
     *  Abs: '<S833>/Abs19'
     *  Constant: '<S833>/Constant Value'
     *  Logic: '<S833>/Logical Operator32'
     *  Logic: '<S833>/Logical Operator33'
     *  Logic: '<S833>/Logical Operator38'
     *  Logic: '<S833>/Logical Operator39'
     *  RelationalOperator: '<S833>/Relational Operator26'
     *  RelationalOperator: '<S833>/Relational Operator27'
     *  RelationalOperator: '<S833>/Relational Operator28'
     *  RelationalOperator: '<S833>/Relational Operator29'
     *  Sum: '<S833>/Subtract8'
     *  Sum: '<S833>/Sum16'
     *  Sum: '<S833>/Sum17'
     *  Sum: '<S833>/Sum18'
     *  Sum: '<S833>/Sum19'
     */
    VeAATD_b_InitorSCPDCNgtvFaulty4mRat = (((sint32)((uint32)(((((uint32)
        (((fabsf(VeAATD_T_InitorDCNegtvTemp -
                 AATR_ac_B.VariantMergeForOutportSensor1) >=
           VeAATD_dT_TempSnsrRat_s1s5) && VeAATD_b_SCPInletFaulty4mRat_tmp) ? 1 :
         0)) + ((uint32)(((fabsf(VeAATD_T_InitorDCNegtvTemp -
        AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS) >= VeAATD_dT_TempSnsrRat_s2s5)
                          && VeAATD_b_IntakeorSCPDCPstvFaulty4mRat_tm) ? 1 : 0)))
        + ((uint32)(((fabsf(VeAATD_T_InitorDCNegtvTemp -
                            AATR_ac_B.VariantMergeForOutportSensor3) >=
                      VeAATD_dT_TempSnsrRat_s3s5) &&
                     VeAATD_b_SCPInletFaulty4mRat_tmp_0) ? 1 : 0))) + ((uint32)
        (((fabsf(VeAATD_T_InitorDCNegtvTemp - VeAATD_T_IntakeorDCPstvTemp) >=
           VeAATD_dT_TempSnsrRat_s4s5) && VeAATD_b_SCPInletFaulty4mRat_tmp_2) ?
         1 : 0))))) >= 2);

    /* RelationalOperator: '<S833>/Relational Operator25' incorporates:
     *  Constant: '<S833>/Constant Value'
     *  DataTypeConversion: '<S833>/Data Type Conversion7'
     *  Sum: '<S833>/Subtract9'
     */
    VeAATD_b_InitorSCPDCNgtv_NoDecision = (((sint32)((uint32)
        (VeAATD_b_IntakeorSCPDCPstv_NoDecision_tm +
         (AATR_ac_B.VariantMergeForOutportb_Sensor4_Disbl ? 1U : 0U)))) > 2);

    /* RelationalOperator: '<S833>/Relational Operator4' incorporates:
     *  Abs: '<S833>/Abs'
     *  Abs: '<S833>/Abs1'
     *  Abs: '<S833>/Abs2'
     *  Abs: '<S833>/Abs3'
     *  Constant: '<S833>/Constant Value'
     *  Logic: '<S833>/Logical Operator'
     *  Logic: '<S833>/Logical Operator1'
     *  Logic: '<S833>/Logical Operator2'
     *  Logic: '<S833>/Logical Operator3'
     *  RelationalOperator: '<S833>/Relational Operator'
     *  RelationalOperator: '<S833>/Relational Operator1'
     *  RelationalOperator: '<S833>/Relational Operator2'
     *  RelationalOperator: '<S833>/Relational Operator3'
     *  Sum: '<S833>/Subtract'
     *  Sum: '<S833>/Sum'
     *  Sum: '<S833>/Sum1'
     *  Sum: '<S833>/Sum2'
     *  Sum: '<S833>/Sum3'
     */
    VeAATD_b_CBCFaulty4mRat = (((sint32)((uint32)(((((uint32)(((fabsf
        (AATR_ac_B.VariantMergeForOutportSensor1 -
         AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS) >= VeAATD_dT_TempSnsrRat_s1s2)
        && VeAATD_b_IntakeorSCPDCPstvFaulty4mRat_tm) ? 1 : 0)) + ((uint32)
        (((fabsf(AATR_ac_B.VariantMergeForOutportSensor1 -
                 AATR_ac_B.VariantMergeForOutportSensor3) >=
           VeAATD_dT_TempSnsrRat_s1s3) && VeAATD_b_SCPInletFaulty4mRat_tmp_0) ?
         1 : 0))) + ((uint32)(((fabsf(AATR_ac_B.VariantMergeForOutportSensor1 -
        VeAATD_T_IntakeorDCPstvTemp) >= VeAATD_dT_TempSnsrRat_s1s4) &&
        VeAATD_b_SCPInletFaulty4mRat_tmp_2) ? 1 : 0))) + ((uint32)(((fabsf
        (AATR_ac_B.VariantMergeForOutportSensor1 - VeAATD_T_InitorDCNegtvTemp) >=
        VeAATD_dT_TempSnsrRat_s1s5) && VeAATD_b_SCPInletFaulty4mRat_tmp_1) ? 1 :
        0))))) >= 2);

    /* RelationalOperator: '<S833>/Relational Operator5' incorporates:
     *  Constant: '<S833>/Constant Value'
     *  DataTypeConversion: '<S833>/Data Type Conversion36'
     *  DataTypeConversion: '<S833>/Data Type Conversion37'
     *  DataTypeConversion: '<S833>/Data Type Conversion38'
     *  DataTypeConversion: '<S833>/Data Type Conversion39'
     *  Sum: '<S833>/Subtract1'
     */
    VeAATD_b_CBC_NoDecision = (((sint32)((uint32)(((((uint32)
        (AATR_ac_B.VariantMergeForOutportb_Sensor2_Disbl ? 1U : 0U)) +
        (AATR_ac_B.VariantMergeForOutportb_Sensor3_Disbl ? 1U : 0U)) +
        (AATR_ac_B.VariantMergeForOutportb_Sensor4_Disbl ? 1U : 0U)) +
        (AATR_ac_B.VariantMergeForOutportb_Sensor5_Disbl ? 1U : 0U)))) > 2);
}

#endif

/*
 * Output and update for action system:
 *    '<S208>/AmbAirTemp_SNADflt'
 *    '<S278>/AmbAirTemp_SNADflt'
 */
#if Rte_SysCon_Variant_AATR_8

static FUNC(void, AATR_CODE_LOCAL) AATR_ac_AmbAirTemp_SNADflt(P2VAR(float32,
    AUTOMATIC, AATR_VAR_INIT) rty_AmbAirTemp_IV_RunDflt, P2VAR(boolean,
    AUTOMATIC, AATR_VAR_INIT) rty_AmbAirTemp_FA, P2VAR(TeAATR_e_AmbAirTempSource,
    AUTOMATIC, AATR_VAR_INIT) rty_Source_DfltSNA)
{
    /* SignalConversion generated from: '<S219>/AmbAirTemp_IV_RunDflt' incorporates:
     *  Constant: '<S242>/Calib'
     */
    *rty_AmbAirTemp_IV_RunDflt = KeAATR_T_AmbAirTemp_SNA_Dflt;

    /* SignalConversion generated from: '<S219>/AmbAirTemp_FA' incorporates:
     *  Constant: '<S219>/TRUE Constant1'
     */
    *rty_AmbAirTemp_FA = true;

    /* DataTypeConversion: '<S240>/DataTypeConversion' incorporates:
     *  Constant: '<S241>/Constant'
     */
    *rty_Source_DfltSNA = CeAATR_e_AmbAirTemp_Dflt;
}

#endif

/* Model step function for TID1 */
FUNC(void, AATR_CODE) AATR_MedTEH(void) /* Explicit Task: MedTEH */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_AATR_8

    float32 rtb_VeAATI_n_EngineSpeed_Dial;

#endif

    float32 rtb_TmpSignalConversionAtVeAATR_T_ECM_Am;
    float32 rtb_TmpSignalConversionAtVeAATR_U_CBC_Am;
    boolean rtb_TmpSignalConversionAtVeAATR_b_ECM_Am;

#if Rte_SysCon_Variant_AATR_8 || Rte_SysCon_Variant_AATR_9

    boolean rtb_TmpSignalConversionAtVeAATR_b_CBC_Am;

#endif

#if Rte_SysCon_Variant_AATR_8

    float32 rtb_TmpSignalConversionAtAmbAirTemp_Save;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_TmpSignalConversionAtAmbAirTempFA_Sa;

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    boolean rtb_LogicalOperator2;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_LogicalOperator15_d;

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    boolean rtb_LogicalOperator9_g;

#endif

#if (!Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8)

    sint16 rtb_Switch1_on;

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    sint16 rtb_Switch1_c0;

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    sint16 rtb_Switch1_a;

#endif

#if Rte_SysCon_Variant_AATR_8

    float32 rtb_VeAATI_U_CBC_AmbAirVolt_Dial;

#endif

#if (!(!Rte_SysCon_Variant_AATR_22) && !Rte_SysCon_Variant_AATR_16 && !Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (!Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8)

    float32 rtb_VeAATI_T_SCP_DCPstvTemp_Dial;

#endif

#if (!(!Rte_SysCon_Variant_AATR_22) && !Rte_SysCon_Variant_AATR_16 && !Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (!Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8)

    boolean rtb_VeAATI_b_SCP_DCPstvTempFA_Dial;

#endif

#if (!(!Rte_SysCon_Variant_AATR_22) && !Rte_SysCon_Variant_AATR_13 && !Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (!Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8)

    float32 rtb_VeAATI_T_SCP_DCNegtvTemp_Dial;

#endif

#if (!(!Rte_SysCon_Variant_AATR_22) && !Rte_SysCon_Variant_AATR_13 && !Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (!Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8)

    boolean rtb_VeAATI_b_SCP_DCNegtvTempFA_Dial;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_VeAATI_b_SCP_InletTempSNA_Dial;

#endif

#if (!Rte_SysCon_Variant_AATR_10 && !Rte_SysCon_Variant_AATR_11 && !Rte_SysCon_Variant_AATR_13 && !Rte_SysCon_Variant_AATR_14 && !Rte_SysCon_Variant_AATR_16 && !Rte_SysCon_Variant_AATR_17 && !Rte_SysCon_Variant_AATR_19 && !Rte_SysCon_Variant_AATR_2 && !Rte_SysCon_Variant_AATR_21 && !Rte_SysCon_Variant_AATR_4 && !Rte_SysCon_Variant_AATR_6 && (!(Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8)) && Rte_SysCon_Variant_AATR_8) || (!Rte_SysCon_Variant_AATR_8 && (!(Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8) && !(Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8)) && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

    boolean rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial;

#endif

#if (!(!Rte_SysCon_Variant_AATR_22) && Rte_SysCon_Variant_AATR_8) || (!Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8)

    float32 rtb_VeAATC_T_AmbAirTemp_IV;

#endif

#if Rte_SysCon_Variant_AATR_8

    float32 rtb_VeAATI_T_ClntPumpTemp_Dial;

#endif

#if Rte_SysCon_Variant_AATR_8

    float32 rtb_VeAATI_T_OnBrdChrg_ClntTmpIn_Dial;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_VeAATI_b_ClntPumpTempFA_Dial;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_VeAATI_b_OnBrdChrg_ClntTmpIn_FA_Dial;

#endif

#if Rte_SysCon_Variant_AATR_8

    uint8 rtb_DataTypeConversion_i[10];

#endif

#if (Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

    boolean rtb_RelationalOperator_hv;

#endif

#if (!Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8) || (!Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8)

    boolean rtb_VM_Conditional_Signal_VeDFIR_b_CANER;

#endif

#if (!Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8) || (!Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8)

    boolean rtb_VM_Conditional_Signal_VeDFIR_b_CAN_l;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_LeAATD_b_CBC_Enbl_FA;

#endif

#if (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8)

    boolean rtb_LogicalOperator18_i;

#endif

#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

    boolean rtb_RelationalOperator1_ne;

#endif

#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

    boolean rtb_RelationalOperator2_cb;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_VeAATI_b_RunCrankActive_Dial;

#endif

#if Rte_SysCon_Variant_AATR_8

    float32 rtb_VM_Conditional_Signal_VePMIR_n_LTPsv;

#endif

#if (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

    boolean rtb_RelationalOperator_gb;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_RelationalOperator_jb;

#endif

    float32 rtb_VM_Conditional_Signal_AmbAirTemp_Raw;

#if (!(!Rte_SysCon_Variant_AATR_4) && Rte_SysCon_Variant_AATR_8) || (!Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

    boolean rtb_SCP_InletTempFA;

#endif

#if !Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8

    float32 rtb_SCP_InletTemp;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_SCP_DCPstvTempFA;

#endif

#if !Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8

    float32 rtb_SCP_DCPstvTemp;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_SCP_DCNegtvTempFA;

#endif

#if Rte_SysCon_Variant_AATR_8

    float32 rtb_SCP_DCNegtvTemp;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_AND_fy;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_TmpSignalConversionAtSelector1Inport[4];

#endif

#if Rte_SysCon_Variant_AATR_8

    uint8 rtb_DataTypeConversion_g[4];

#endif

#if Rte_SysCon_Variant_AATR_8

    float32 rtb_TmpSignalConversionAtSelector3Inport[4];

#endif

#if Rte_SysCon_Variant_AATR_8

    TeAATR_e_AmbAirTempSource rtb_Selector2[4];

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_NotEqual_d;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_NotEqual_e;

#endif

#if Rte_SysCon_Variant_AATR_8

    float32 rtb_Switch1_p3;

#endif

#if !(!Rte_SysCon_Variant_AATR_6) && Rte_SysCon_Variant_AATR_8

    boolean rtb_VariantMerge_For_Variant_Source_Va_n;

#endif

#if (!(!Rte_SysCon_Variant_AATR_4) && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8)

    boolean rtb_VariantMerge_For_Variant_Source_Va_d;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_VariantMerge_For_Variant_Source_Va_a;

#endif

#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

    boolean rtb_UnitDelay_io;

#endif

#if Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8

    boolean rtb_RelationalOperator1_cc;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_LeAATD_b_SCPInlet_Enbl_FA_l;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_RelationalOperator1_g2;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_RelationalOperator1_pel;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_AND_b0;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_AND_jx;

#endif

#if Rte_SysCon_Variant_AATR_8

    TeESPR_e_EngSpdStatus rtb_VeAATI_e_EngineSpeedStatus_Dial;

#endif

#if Rte_SysCon_Variant_AATR_8

    sint32 i;

#endif

#if (!Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8)

    uint32 rtb_VariantMerge_For_Variant_Source_Va_0;

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    sint32 rtb_VariantMerge_For_Variant_Source_Va_1;

#endif

#if (!Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8)

    uint32 rtb_VariantMerge_For_Variant_Source_Va_2;

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    sint32 rtb_VariantMerge_For_Variant_Source_Va_3;

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    uint32 rtb_VariantMerge_For_Variant_Source_Va_4;

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    sint32 rtb_VariantMerge_For_Variant_Source_Va_5;

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    uint32 rtb_VariantMerge_For_Variant_Source_Va_6;

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    sint32 rtb_VariantMerge_For_Variant_Source_Va_7;

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    uint32 rtb_VariantMerge_For_Variant_Source_Va_8;

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    sint32 rtb_VariantMerge_For_Variant_Source_Va_9;

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    uint32 rtb_VariantMerge_For_Variant_Source_Va_b;

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    sint32 rtb_VariantMerge_For_Variant_Source_Va_c;

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    uint32 rtb_VariantMerge_For_Variant_Source_Va_e;

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    sint32 rtb_VariantMerge_For_Variant_Source_Va_f;

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    uint32 rtb_VariantMerge_For_Variant_Source_Va_i;

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    sint32 rtb_VariantMerge_For_Variant_Source_Va_j;

#endif

#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    uint32 rtb_VariantMerge_For_Variant_Source_Va_k;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/AATR_MedTEH'
     */
    /* DataStoreWrite: '<S1>/Data Store Write8' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CooPumBOvrSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CooPumBOvrSpd_Value
        (&AATR_ac_DW.StatusByte_MtrElect_CooPumBOvrSpd);

    /* DataStoreWrite: '<S1>/Data Store Write7' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CoolPumBCtrlPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CoolPumBCtrlPerf_Value
        (&AATR_ac_DW.StatusByte_MtrElect_CoolPumBCtrlPerf);

    /* DataStoreWrite: '<S1>/Data Store Write6' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CoolPumAOvrSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CoolPumAOvrSpd_Value
        (&AATR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd);

    /* DataStoreWrite: '<S1>/Data Store Write5' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrElecPmpPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrElecPmpPerf_Value
        (&AATR_ac_DW.StatusByte_PwrElecPmpPerf);

    /* DataStoreWrite: '<S1>/Data Store Write4' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT_SnsrCktHi_Value
        (&AATR_ac_DW.StatusByte_CT_SnsrCktHi);

    /* DataStoreWrite: '<S1>/Data Store Write3' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT_SnsrCktLo_Value
        (&AATR_ac_DW.StatusByte_CT_SnsrCktLo);

    /* DataStoreWrite: '<S1>/Data Store Write2' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktHi_Value
        (&AATR_ac_DW.StatusByte_MtrElect_CT_SnsrCktHi);

    /* DataStoreWrite: '<S1>/Data Store Write1' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CT_SnsrCktLo_Value
        (&AATR_ac_DW.StatusByte_MtrElect_CT_SnsrCktLo);

    /* DataStoreWrite: '<S1>/Data Store Write' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBusPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBusPerf_Value
        (&AATR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT_SnsrPerf1' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBus'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBus_Value
        (&AATR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommECM_PCM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommECM_PCM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommECM_PCM_A_Value
        (&AATR_ac_DW.StatusByte_LostCommECM_PCM_A);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CommBusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBusOff_Value
        (&AATR_ac_DW.StatusByte_CommBusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostComm_CANC2_BCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostComm_CANC2_BCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostComm_CANC2_BCM_Value
        (&AATR_ac_DW.StatusByte_LostComm_CANC2_BCM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommCPIM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommCPIM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommCPIM_Value
        (&AATR_ac_DW.StatusByte_LostCommCPIM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_InvData_CPIMGen2' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_CPIMGen2'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_CPIMGen2_Value
        (&AATR_ac_DW.StatusByte_InvData_CPIMGen2);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN3_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN3_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN3_BusOff_Value
        (&AATR_ac_DW.StatusByte_LIN3_BusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN2_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN2_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN2_BusOff_Value
        (&AATR_ac_DW.StatusByte_LIN2_BusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN1_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN1_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN1_BusOff_Value
        (&AATR_ac_DW.StatusByte_LIN1_BusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AAT_SnsrCkt_B_Perf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AAT_SnsrCkt_B_Perf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AAT_SnsrCkt_B_Perf_Value
        (&AATR_ac_DW.StatusByte_AAT_SnsrCkt_B_Perf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AAT_SnsrCkt_B_Lo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AAT_SnsrCkt_B_Lo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AAT_SnsrCkt_B_Lo_Value
        (&AATR_ac_DW.StatusByte_AAT_SnsrCkt_B_Lo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AAT_SnsrCkt_B_Hi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AAT_SnsrCkt_B_Hi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AAT_SnsrCkt_B_Hi_Value
        (&AATR_ac_DW.StatusByte_AAT_SnsrCkt_B_Hi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommBCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommBCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommBCM_Value
        (&AATR_ac_DW.StatusByte_LostCommBCM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_InvData_BCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BCM_Value
        (&AATR_ac_DW.StatusByte_InvData_BCM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HiSpdCANCommBus' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdCANCommBus'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdCANCommBus_Value
        (&AATR_ac_DW.StatusByte_HiSpdCANCommBus);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BatChaCouTemSnsrCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BatChaCouTemSnsrCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BatChaCouTemSnsrCkt_Value
        (&AATR_ac_DW.StatusByte_BatChaCouTemSnsrCkt);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BatChaCouTemSenACirLow' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BatChaCouTemSenACirLow'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BatChaCouTemSenACirLow_Value
        (&AATR_ac_DW.StatusByte_BatChaCouTemSenACirLow);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BatChaCouTemSenACirHig' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BatChaCouTemSenACirHig'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BatChaCouTemSenACirHig_Value
        (&AATR_ac_DW.StatusByte_BatChaCouTemSenACirHig);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BatChaCouTemSenACirRan' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BatChaCouTemSenACirRan'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BatChaCouTemSenACirRan_Value
        (&AATR_ac_DW.StatusByte_BatChaCouTemSenACirRan);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattChrgCouTempSnsrBCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattChrgCouTempSnsrBCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattChrgCouTempSnsrBCkt_Value
        (&AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCkt);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattChrgCouTempSnsrBCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattChrgCouTempSnsrBCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattChrgCouTempSnsrBCktLo_Value
        (&AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattChrgCouTempSnsrBCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattChrgCouTempSnsrBCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattChrgCouTempSnsrBCktHi_Value
        (&AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattChrgCouTempSnsrBCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattChrgCouTempSnsrBCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattChrgCouTempSnsrBCktPerf_Value
        (&AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattChrgCouTempSnsrCCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattChrgCouTempSnsrCCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattChrgCouTempSnsrCCkt_Value
        (&AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCkt);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattChrgCouTempSnsrCCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattChrgCouTempSnsrCCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattChrgCouTempSnsrCCktLo_Value
        (&AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattChrgCouTempSnsrCCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattChrgCouTempSnsrCCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattChrgCouTempSnsrCCktHi_Value
        (&AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattChrgCouTempSnsrCCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattChrgCouTempSnsrCCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattChrgCouTempSnsrCCktPerf_Value
        (&AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AAT_SnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AAT_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AAT_SnsrPerf_Value
        (&AATR_ac_DW.StatusByte_AAT_SnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AAT_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AAT_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AAT_SnsrCktLo_Value
        (&AATR_ac_DW.StatusByte_AAT_SnsrCktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AAT_SnsrCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AAT_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AAT_SnsrCktHi_Value
        (&AATR_ac_DW.StatusByte_AAT_SnsrCktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CoolPmpATempSnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CoolPmpATempSnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CoolPmpATempSnsrPerf_Value
        (&AATR_ac_DW.StatusByte_MtrElect_CoolPmpATempSnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_MtrElect_CT_SnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_MtrElect_CT_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_MtrElect_CT_SnsrPerf_Value
        (&AATR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT_SnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT_SnsrPerf_Value
        (&AATR_ac_DW.StatusByte_CT_SnsrPerf);

    /* SignalConversion generated from: '<S1>/VeAATR_T_ECM_AmbientAirTemp_read' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    rtb_TmpSignalConversionAtVeAATR_T_ECM_Am =
        Rte_IrvRead_AATR_MedTEH_ECM_AmbAirTemp_Init_write_IRV();

    /* SignalConversion generated from: '<S1>/VeAATR_b_ECM_AmbientAirTempFA_read' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    rtb_TmpSignalConversionAtVeAATR_b_ECM_Am =
        Rte_IrvRead_AATR_MedTEH_ECM_AmbAirTemp_InitFA_write_IRV();

    /* SignalConversion generated from: '<S1>/VeAATR_U_CBC_AmbientAirVolt_read' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    rtb_TmpSignalConversionAtVeAATR_U_CBC_Am =
        Rte_IrvRead_AATR_MedTEH_CBC_AmbAirTemp_Init_write_IRV();

    /* SignalConversion generated from: '<S1>/VeAATR_b_CBC_AmbientAirVoltFA_read' */
#if Rte_SysCon_Variant_AATR_8 || Rte_SysCon_Variant_AATR_9

    /* SignalConversion generated from: '<S1>/VeAATR_b_CBC_AmbientAirVoltFA_read' incorporates:
     *  Merge: '<Root>/Merge_9'
     */
    rtb_TmpSignalConversionAtVeAATR_b_CBC_Am =
        Rte_IrvRead_AATR_MedTEH_CBC_AmbAirTemp_InitFA_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S1>/VeAATR_b_CBC_AmbientAirVoltFA_read' */

    /* SignalConversion generated from: '<S1>/VeAATR_T_SCP_AmbientTempSnsr_read' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpd'
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  Inport: '<Root>/VeENGR_T_InductionAirTemp'
     *  Inport: '<Root>/VeENGR_b_IAT_SnsrFA'
     *  Inport: '<Root>/VeESPR_e_EngineSpeedStatus'
     *  Inport: '<Root>/VeESPR_n_EngineSpeed'
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
     *  Inport: '<Root>/VePLTR_b_HCPOffTimeFA'
     *  Inport: '<Root>/VePLTR_t_HCPOffTime'
     *  Inport: '<Root>/VePMDR_b_RunCrankActive'
     *  Inport: '<Root>/VePMIR_T_LTPsvPumpTemp'
     *  Inport: '<Root>/VePMIR_b_LTPsvPumpTemp_FA'
     *  Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn'
     *  Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn'
     *  Inport: '<Root>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA'
     *  Inport: '<Root>/VeTMIR_b_PsvPmpClnt_TmpIn_FA'
     *  Inport: '<S21>/VeOBCR_e_ChargingLevel'
     *  SignalConversion generated from: '<S1>/AmbAirTempFA_Saved_Read'
     *  SignalConversion generated from: '<S1>/AmbAirTemp_Saved_Read'
     *  SignalConversion generated from: '<S1>/VeAATR_T_SCP_DCNegtvTmpSnsr_read'
     *  SignalConversion generated from: '<S1>/VeAATR_T_SCP_DCPstvTmpSnsr_read'
     *  SignalConversion generated from: '<S1>/VeAATR_T_SCP_InletTempSnsr_read'
     *  SignalConversion generated from: '<S1>/VeAATR_b_SCP_AmbientTempSnsrFA_read'
     *  SignalConversion generated from: '<S1>/VeAATR_b_SCP_DCNegtvTmpSnsrFA_read'
     *  SignalConversion generated from: '<S1>/VeAATR_b_SCP_DCNegtvTmpSnsrSNA_read'
     *  SignalConversion generated from: '<S1>/VeAATR_b_SCP_DCPstvTmpSnsrFA_read'
     *  SignalConversion generated from: '<S1>/VeAATR_b_SCP_DCPstvTmpSnsrSNA_read'
     *  SignalConversion generated from: '<S1>/VeAATR_b_SCP_InletTempSnsrFA_read'
     *  SignalConversion generated from: '<S1>/VeAATR_b_SCP_InletTempSnsrSNA_read'
     */
#if Rte_SysCon_Variant_AATR_8

    /* S-Function (fcgen): '<S1>/FcnCallGen' */
    /* SignalConversion generated from: '<S1>/AmbAirTemp_Saved_Read' incorporates:
     *  SignalConversion generated from: '<S3>/AmbAirTemp_Saved_write'
     */
    rtb_TmpSignalConversionAtAmbAirTemp_Save =
        Rte_IrvRead_AATR_MedTEH_AmbAirTemp_Saved_write_IRV();

    /* SignalConversion generated from: '<S1>/AmbAirTempFA_Saved_Read' incorporates:
     *  SignalConversion generated from: '<S3>/AmbAirTempFA_Saved_write'
     */
    rtb_TmpSignalConversionAtAmbAirTempFA_Sa =
        Rte_IrvRead_AATR_MedTEH_AmbAirTempFA_Saved_write_IRV();
    (void)Rte_Read_VePLTR_b_HCPOffTimeFA_Value
        ((&(VeAATI_b_HCPOffTimeFA_OvrdVal_Dial)));
    (void)Rte_Read_VePLTR_t_HCPOffTime_Value((&(VeAATI_t_HCPOffTime_OvrdVal_Dial)));
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        ((&(VeAATI_b_DiagGlblCndtnsValid_OvrdVal_Dial)));
    (void)Rte_Read_VeOBCR_e_ChargingSystemSts_Value
        ((&(VeAATI_e_ChargingSystemSts_Dial)));
    (void)Rte_Read_VeOBCR_e_ChargingLevel_Value
        (&AATR_ac_B.VeOBCR_e_ChargingLevel);
    (void)Rte_Read_VeENGR_b_IAT_SnsrFA_Value((&(VeAATI_b_ECM_IntakeTempFA_Dial)));
    (void)Rte_Read_VeENGR_T_InductionAirTemp_Value
        ((&(VeAATI_T_ECM_IntakeTemp_Dial)));
    (void)Rte_Read_VeESPR_e_EngineSpeedStatus_Value
        ((&(VeAATI_e_EngineSpeedStatus_Dial)));
    (void)Rte_Read_VeESPR_n_EngineSpeed_Value((&(VeAATI_n_EngineSpeed_Dial)));
    (void)Rte_Read_VeCSVR_v_VehSpd_Value((&(VeAATI_v_VehSpd_Dial)));
    (void)Rte_Read_VePMIR_b_LTPsvPumpTemp_FA_Value
        ((&(VeAATI_b_LTPsvPumpTemp_FA_Dial)));
    (void)Rte_Read_VePMIR_T_LTPsvPumpTemp_Value((&(VeAATI_T_LTPsvPumpTemp_Dial)));
    (void)Rte_Read_VeTMIR_b_OnBrdChrg_ClntTmpIn_FA_Value
        ((&(VeAATI_b_OnBrdChrg_ClntTmpIn_FA_Dial)));
    (void)Rte_Read_VeTMIR_T_OnBrdChrg_ClntTmpIn_Value
        ((&(VeAATI_T_OnBrdChrg_ClntTmpIn_Dial)));
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        ((&(VeAATI_b_PostCodeClrDiagDsbl_OvrdVal_Dial)));
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        ((&(VeAATI_b_DsblDiagFailSafe_OvrdVal_Dial)));
    (void)Rte_Read_VeTMIR_b_PsvPmpClnt_TmpIn_FA_Value
        ((&(VeAATI_b_ClntPumpTempFA_Dial)));
    (void)Rte_Read_VeTMIR_T_PsvPmpClnt_TmpIn_Value((&(VeAATI_T_ClntPumpTemp_Dial)));
    (void)Rte_Read_VePMDR_b_RunCrankActive_Value((&(VeAATI_b_RunCrankActive_Dial)));

    /* Outputs for Function Call SubSystem: '<S1>/InternalInputs' */
    /* Switch: '<S21>/Switch2' incorporates:
     *  Constant: '<S1214>/Calib'
     *  Inport: '<Root>/VeCSVR_v_VehSpd'
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  Inport: '<Root>/VeENGR_T_InductionAirTemp'
     *  Inport: '<Root>/VeENGR_b_IAT_SnsrFA'
     *  Inport: '<Root>/VeESPR_e_EngineSpeedStatus'
     *  Inport: '<Root>/VeESPR_n_EngineSpeed'
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
     *  Inport: '<Root>/VePLTR_b_HCPOffTimeFA'
     *  Inport: '<Root>/VePLTR_t_HCPOffTime'
     *  Inport: '<Root>/VePMDR_b_RunCrankActive'
     *  Inport: '<Root>/VePMIR_T_LTPsvPumpTemp'
     *  Inport: '<Root>/VePMIR_b_LTPsvPumpTemp_FA'
     *  Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn'
     *  Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn'
     *  Inport: '<Root>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA'
     *  Inport: '<Root>/VeTMIR_b_PsvPmpClnt_TmpIn_FA'
     *  Inport: '<S21>/VeOBCR_e_ChargingLevel'
     */
    if (KeAATR_b_RunCrankActvOvrdEnbl)
    {
        /* Switch: '<S21>/Switch2' incorporates:
         *  Constant: '<S1215>/Calib'
         */
        VeAATI_b_RunCrankActive_Dial = KeAATR_b_RunCrankActvOvrdVal;
    }

    /* End of Switch: '<S21>/Switch2' */

    /* Switch: '<S21>/Switch36' incorporates:
     *  Constant: '<S1192>/Calib'
     */
    if (KeAATR_b_ClntPumpTempOvrdEnbl)
    {
        /* Switch: '<S21>/Switch36' incorporates:
         *  Constant: '<S1186>/Calib'
         *  Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn'
         */
        VeAATI_T_ClntPumpTemp_Dial = KeAATR_T_ClntPumpTempOvrdVal;
    }

    /* End of Switch: '<S21>/Switch36' */

    /* Switch: '<S21>/Switch1' incorporates:
     *  Constant: '<S1190>/Calib'
     */
    if (KeAATR_b_ClntPumpTempFAOvrdEnbl)
    {
        /* Switch: '<S21>/Switch1' incorporates:
         *  Constant: '<S1191>/Calib'
         *  Inport: '<Root>/VeTMIR_b_PsvPmpClnt_TmpIn_FA'
         */
        VeAATI_b_ClntPumpTempFA_Dial = KeAATR_b_ClntPumpTempFAOvrdVal;
    }

    /* End of Switch: '<S21>/Switch1' */

    /* Switch: '<S21>/Switch5' incorporates:
     *  Constant: '<S1195>/Calib'
     */
    if (KeAATR_b_DsblDiagFailSafe_EnOv)
    {
        /* Switch: '<S21>/Switch5' incorporates:
         *  Constant: '<S1196>/Calib'
         *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
         */
        VeAATI_b_DsblDiagFailSafe_OvrdVal_Dial = KeAATR_b_DsblDiagFailSafe_Ovrd;
    }

    /* End of Switch: '<S21>/Switch5' */

    /* Switch: '<S21>/Switch6' incorporates:
     *  Constant: '<S1212>/Calib'
     */
    if (KeAATR_b_PostClrDiagDsbl_EnOv)
    {
        /* Switch: '<S21>/Switch6' incorporates:
         *  Constant: '<S1213>/Calib'
         *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
         */
        VeAATI_b_PostCodeClrDiagDsbl_OvrdVal_Dial =
            KeAATR_b_PostClrDiagDsbl_Ovrd;
    }

    /* End of Switch: '<S21>/Switch6' */

    /* Switch: '<S21>/Switch3' incorporates:
     *  Constant: '<S1211>/Calib'
     */
    if (KeAATR_b_OnBrdChgClntTmpIn_EvOv)
    {
        /* Switch: '<S21>/Switch3' incorporates:
         *  Constant: '<S1189>/Calib'
         *  Inport: '<Root>/VeTMIR_T_OnBrdChrg_ClntTmpIn'
         */
        VeAATI_T_OnBrdChrg_ClntTmpIn_Dial = KeAATR_T_OnBrdChgClntTmpInOvrd;
    }

    /* End of Switch: '<S21>/Switch3' */

    /* Switch: '<S21>/Switch4' incorporates:
     *  Constant: '<S1210>/Calib'
     */
    if (KeAATR_b_OnBrdChgClntTmpInFA_EvOv)
    {
        /* Switch: '<S21>/Switch4' incorporates:
         *  Constant: '<S1209>/Calib'
         *  Inport: '<Root>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA'
         */
        VeAATI_b_OnBrdChrg_ClntTmpIn_FA_Dial = KeAATR_b_OnBrdChgClntTmpInFAOvrd;
    }

    /* End of Switch: '<S21>/Switch4' */

    /* Switch: '<S21>/Switch7' incorporates:
     *  Constant: '<S1207>/Calib'
     */
    if (KeAATR_b_LTPsvPumpTemp_EvOv)
    {
        /* Switch: '<S21>/Switch7' incorporates:
         *  Constant: '<S1188>/Calib'
         *  Inport: '<Root>/VePMIR_T_LTPsvPumpTemp'
         */
        VeAATI_T_LTPsvPumpTemp_Dial = KeAATR_T_LTPsvPumpTemp_Ovrd;
    }

    /* End of Switch: '<S21>/Switch7' */

    /* Switch: '<S21>/Switch9' incorporates:
     *  Constant: '<S1205>/Calib'
     */
    if (KeAATR_b_LTPsvPumpTempFA_EvOv)
    {
        /* Switch: '<S21>/Switch9' incorporates:
         *  Constant: '<S1206>/Calib'
         *  Inport: '<Root>/VePMIR_b_LTPsvPumpTemp_FA'
         */
        VeAATI_b_LTPsvPumpTemp_FA_Dial = KeAATR_b_LTPsvPumpTempFA_Ovrd;
    }

    /* End of Switch: '<S21>/Switch9' */

    /* Switch: '<S21>/Switch12' incorporates:
     *  Constant: '<S1216>/Calib'
     */
    if (KeAATR_b_VehSpdOvrdEnbl)
    {
        /* Switch: '<S21>/Switch12' incorporates:
         *  Constant: '<S1221>/Calib'
         *  Inport: '<Root>/VeCSVR_v_VehSpd'
         */
        VeAATI_v_VehSpd_Dial = KeAATR_v_VehSpdOvrdVal;
    }

    /* End of Switch: '<S21>/Switch12' */

    /* Switch: '<S21>/Switch14' incorporates:
     *  Constant: '<S1200>/Calib'
     */
    if (KeAATR_b_EngineSpeedOvrdEnbl)
    {
        /* Switch: '<S21>/Switch14' incorporates:
         *  Constant: '<S1219>/Calib'
         *  Inport: '<Root>/VeESPR_n_EngineSpeed'
         */
        VeAATI_n_EngineSpeed_Dial = KeAATR_n_EngineSpeedOvrdVal;
    }

    /* End of Switch: '<S21>/Switch14' */

    /* Switch: '<S21>/Switch17' incorporates:
     *  Constant: '<S1201>/Calib'
     */
    if (KeAATR_b_EngineSpeedStsOvrdEnbl)
    {
        /* Switch: '<S21>/Switch17' incorporates:
         *  Constant: '<S1217>/Calib'
         *  Inport: '<Root>/VeESPR_e_EngineSpeedStatus'
         */
        VeAATI_e_EngineSpeedStatus_Dial = KeAATR_e_EngineSpeedStsOvrdVal;
    }

    /* End of Switch: '<S21>/Switch17' */

    /* Switch: '<S21>/Switch16' incorporates:
     *  Constant: '<S1199>/Calib'
     */
    if (KeAATR_b_ECM_IntakeTempOvrdEnbl)
    {
        /* Switch: '<S21>/Switch16' incorporates:
         *  Constant: '<S1187>/Calib'
         *  Inport: '<Root>/VeENGR_T_InductionAirTemp'
         */
        VeAATI_T_ECM_IntakeTemp_Dial = KeAATR_T_ECM_IntakeTempOvrdVal;
    }

    /* End of Switch: '<S21>/Switch16' */

    /* Switch: '<S21>/Switch15' incorporates:
     *  Constant: '<S1197>/Calib'
     */
    if (KeAATR_b_ECM_IntakeTempFAOvrdEnbl)
    {
        /* Switch: '<S21>/Switch15' incorporates:
         *  Constant: '<S1198>/Calib'
         *  Inport: '<Root>/VeENGR_b_IAT_SnsrFA'
         */
        VeAATI_b_ECM_IntakeTempFA_Dial = KeAATR_b_ECM_IntakeTempFAOvrdVal;
    }

    /* End of Switch: '<S21>/Switch15' */

    /* Switch: '<S21>/Switch18' incorporates:
     *  Constant: '<S1208>/Calib'
     */
    if (KeAATR_b_OBCR_ChargingSystemStsOvrdEnbl)
    {
        /* Switch: '<S21>/Switch18' incorporates:
         *  Constant: '<S1218>/Calib'
         *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
         */
        VeAATI_e_ChargingSystemSts_Dial = KeAATR_e_OBCR_ChargingSystemStsOvrdVal;
    }

    /* End of Switch: '<S21>/Switch18' */

    /* Switch: '<S21>/Switch13' incorporates:
     *  Constant: '<S1193>/Calib'
     */
    if (KeAATR_b_DiagGlblCndtnsValid_EnOv)
    {
        /* Switch: '<S21>/Switch13' incorporates:
         *  Constant: '<S1194>/Calib'
         *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
         */
        VeAATI_b_DiagGlblCndtnsValid_OvrdVal_Dial =
            KeAATR_b_DiagGlblCndtnsValid_Ovrd;
    }

    /* End of Switch: '<S21>/Switch13' */

    /* Switch: '<S1222>/Switch' incorporates:
     *  Constant: '<S1204>/Calib'
     */
    if (KeAATR_b_HCPOffTime_EnOv)
    {
        /* Switch: '<S1222>/Switch' incorporates:
         *  Constant: '<S1220>/Calib'
         *  Inport: '<Root>/VePLTR_t_HCPOffTime'
         */
        VeAATI_t_HCPOffTime_OvrdVal_Dial = KeAATR_t_HCPOffTime_Ovrd;
    }

    /* End of Switch: '<S1222>/Switch' */

    /* Switch: '<S1223>/Switch' incorporates:
     *  Constant: '<S1202>/Calib'
     */
    if (KeAATR_b_HCPOffTimeFA_EnOv)
    {
        /* Switch: '<S1223>/Switch' incorporates:
         *  Constant: '<S1203>/Calib'
         *  Inport: '<Root>/VePLTR_b_HCPOffTimeFA'
         */
        VeAATI_b_HCPOffTimeFA_OvrdVal_Dial = KeAATR_b_HCPOffTimeFA_Ovrd;
    }

    /* End of Switch: '<S1223>/Switch' */
    /* End of Outputs for SubSystem: '<S1>/InternalInputs' */

    /* Outputs for Function Call SubSystem: '<S1>/Overrides' */
    /* Switch: '<S22>/Switch18' incorporates:
     *  Constant: '<S1235>/Calib'
     */
    if (KeAATR_b_ECM_AmbTempOvrdEnbl)
    {
        /* Switch: '<S22>/Switch18' incorporates:
         *  Constant: '<S1224>/Calib'
         */
        VeAATI_T_ECM_AmbAirTemp_Dial = KeAATR_T_ECM_AmbTempOvrdVal;
    }
    else
    {
        /* Switch: '<S22>/Switch18' */
        VeAATI_T_ECM_AmbAirTemp_Dial = rtb_TmpSignalConversionAtVeAATR_T_ECM_Am;
    }

    /* End of Switch: '<S22>/Switch18' */

    /* Switch: '<S22>/Switch20' incorporates:
     *  Constant: '<S1233>/Calib'
     */
    if (KeAATR_b_ECM_AmbTempFAOvrdEnbl)
    {
        /* Switch: '<S22>/Switch20' incorporates:
         *  Constant: '<S1234>/Calib'
         */
        VeAATI_b_ECM_AmbAirTempFA_Dial = KeAATR_b_ECM_AmbTempFAOvrdVal;
    }
    else
    {
        /* Switch: '<S22>/Switch20' */
        VeAATI_b_ECM_AmbAirTempFA_Dial =
            rtb_TmpSignalConversionAtVeAATR_b_ECM_Am;
    }

    /* End of Switch: '<S22>/Switch20' */

    /* Switch: '<S22>/Switch17' incorporates:
     *  Constant: '<S1232>/Calib'
     */
    if (KeAATR_b_CBC_AmbVoltOvrdEnbl)
    {
        /* Switch: '<S22>/Switch17' incorporates:
         *  Constant: '<S1229>/Calib'
         */
        AATR_ac_B.VeAATI_U_CBC_AmbAirVolt_Dial = KeAATR_U_CBC_AmbVoltOvrdVal;
    }
    else
    {
        /* Switch: '<S22>/Switch17' */
        AATR_ac_B.VeAATI_U_CBC_AmbAirVolt_Dial =
            rtb_TmpSignalConversionAtVeAATR_U_CBC_Am;
    }

    /* End of Switch: '<S22>/Switch17' */

    /* Switch: '<S22>/Switch19' incorporates:
     *  Constant: '<S1230>/Calib'
     */
    if (KeAATR_b_CBC_AmbVoltFAOvrdEnbl)
    {
        /* Switch: '<S22>/Switch19' incorporates:
         *  Constant: '<S1231>/Calib'
         */
        VeAATI_b_CBC_AmbAirVoltFA_Dial = KeAATR_b_CBC_AmbVoltFAOvrdVal;
    }
    else
    {
        /* Switch: '<S22>/Switch19' */
        VeAATI_b_CBC_AmbAirVoltFA_Dial =
            rtb_TmpSignalConversionAtVeAATR_b_CBC_Am;
    }

    /* End of Switch: '<S22>/Switch19' */

    /* Switch: '<S22>/Switch1' incorporates:
     *  Constant: '<S1238>/Calib'
     */
    if (KeAATR_b_SCP_AmbientTempOvrdEnbl)
    {
        /* Switch: '<S22>/Switch1' incorporates:
         *  Constant: '<S1225>/Calib'
         */
        VeAATI_T_SCP_AmbientTemp_Dial = KeAATR_T_SCP_AmbientTempOvrdVal;
    }
    else
    {
        /* Switch: '<S22>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_5'
         *  SignalConversion generated from: '<S1>/VeAATR_T_SCP_AmbientTempSnsr_read'
         */
        VeAATI_T_SCP_AmbientTemp_Dial =
            Rte_IrvRead_AATR_MedTEH_SCP_AmbientTemp_Init_write_IRV();
    }

    /* End of Switch: '<S22>/Switch1' */

    /* Switch: '<S22>/Switch3' incorporates:
     *  Constant: '<S1251>/Calib'
     */
    if (KeAATR_b_SCP_InletTempOvrdEnbl)
    {
        /* Switch: '<S22>/Switch3' incorporates:
         *  Constant: '<S1228>/Calib'
         */
        AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS_k =
            KeAATR_T_SCP_InletTempOvrdVal;
    }
    else
    {
        /* Switch: '<S22>/Switch3' incorporates:
         *  Merge: '<Root>/Merge_11'
         *  SignalConversion generated from: '<S1>/VeAATR_T_SCP_InletTempSnsr_read'
         */
        AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS_k =
            Rte_IrvRead_AATR_MedTEH_SCP_InletTempSnsr_Init_write_IRV();
    }

    /* End of Switch: '<S22>/Switch3' */

    /* Switch: '<S22>/Switch4' incorporates:
     *  Constant: '<S1249>/Calib'
     */
    if (KeAATR_b_SCP_InletTempFAOvrdEnbl)
    {
        /* Switch: '<S22>/Switch4' incorporates:
         *  Constant: '<S1250>/Calib'
         */
        AATR_ac_B.VeAATI_b_SCP_InletTempFA_Dial_AS =
            KeAATR_b_SCP_InletTempFAOvrdVal;
    }
    else
    {
        /* Switch: '<S22>/Switch4' incorporates:
         *  Merge: '<Root>/Merge_12'
         *  SignalConversion generated from: '<S1>/VeAATR_b_SCP_InletTempSnsrFA_read'
         */
        AATR_ac_B.VeAATI_b_SCP_InletTempFA_Dial_AS =
            Rte_IrvRead_AATR_MedTEH_SCP_InletTempSnsrFA_Init_write_IRV();
    }

    /* End of Switch: '<S22>/Switch4' */

    /* Switch: '<S22>/Switch5' incorporates:
     *  Constant: '<S1246>/Calib'
     */
    if (KeAATR_b_SCP_DCPstvTempOvrdEnbl)
    {
        /* Switch: '<S22>/Switch5' incorporates:
         *  Constant: '<S1227>/Calib'
         */
        AATR_ac_B.VeAATI_T_SCP_DCPstvTemp_Dial = KeAATR_T_SCP_DCPstvTempOvrdVal;
    }
    else
    {
        /* Switch: '<S22>/Switch5' incorporates:
         *  Merge: '<Root>/Merge_13'
         *  SignalConversion generated from: '<S1>/VeAATR_T_SCP_DCPstvTmpSnsr_read'
         */
        AATR_ac_B.VeAATI_T_SCP_DCPstvTemp_Dial =
            Rte_IrvRead_AATR_MedTEH_SCP_DCPstvTemp_Init_write_IRV();
    }

    /* End of Switch: '<S22>/Switch5' */

    /* Switch: '<S22>/Switch6' incorporates:
     *  Constant: '<S1244>/Calib'
     */
    if (KeAATR_b_SCP_DCPstvTempFAOvrdEnbl)
    {
        /* Switch: '<S22>/Switch6' incorporates:
         *  Constant: '<S1245>/Calib'
         */
        AATR_ac_B.VeAATI_b_SCP_DCPstvTempFA_Dial =
            KeAATR_b_SCP_DCPstvTempFAOvrdVal;
    }
    else
    {
        /* Switch: '<S22>/Switch6' incorporates:
         *  Merge: '<Root>/Merge_14'
         *  SignalConversion generated from: '<S1>/VeAATR_b_SCP_DCPstvTmpSnsrFA_read'
         */
        AATR_ac_B.VeAATI_b_SCP_DCPstvTempFA_Dial =
            Rte_IrvRead_AATR_MedTEH_SCP_DCPstvTempFA_Init_write_IRV();
    }

    /* End of Switch: '<S22>/Switch6' */

    /* Switch: '<S22>/Switch7' incorporates:
     *  Constant: '<S1241>/Calib'
     */
    if (KeAATR_b_SCP_DCNegtvTempOvrdEnbl)
    {
        /* Switch: '<S22>/Switch7' incorporates:
         *  Constant: '<S1226>/Calib'
         */
        AATR_ac_B.VeAATI_T_SCP_DCNegtvTemp_Dial =
            KeAATR_T_SCP_DCNegtvTempOvrdVal;
    }
    else
    {
        /* Switch: '<S22>/Switch7' incorporates:
         *  Merge: '<Root>/Merge_15'
         *  SignalConversion generated from: '<S1>/VeAATR_T_SCP_DCNegtvTmpSnsr_read'
         */
        AATR_ac_B.VeAATI_T_SCP_DCNegtvTemp_Dial =
            Rte_IrvRead_AATR_MedTEH_SCP_DCNegtvTemp_Init_write_IRV();
    }

    /* End of Switch: '<S22>/Switch7' */

    /* Switch: '<S22>/Switch8' incorporates:
     *  Constant: '<S1239>/Calib'
     */
    if (KeAATR_b_SCP_DCNegtvTempFAOvrdEnbl)
    {
        /* Switch: '<S22>/Switch8' incorporates:
         *  Constant: '<S1240>/Calib'
         */
        AATR_ac_B.VeAATI_b_SCP_DCNegtvTempFA_Dial =
            KeAATR_b_SCP_DCNegtvTempFAOvrdVal;
    }
    else
    {
        /* Switch: '<S22>/Switch8' incorporates:
         *  Merge: '<Root>/Merge_16'
         *  SignalConversion generated from: '<S1>/VeAATR_b_SCP_DCNegtvTmpSnsrFA_read'
         */
        AATR_ac_B.VeAATI_b_SCP_DCNegtvTempFA_Dial =
            Rte_IrvRead_AATR_MedTEH_SCP_DCNegtvTempFA_Init_write_IRV();
    }

    /* End of Switch: '<S22>/Switch8' */

    /* Switch: '<S22>/Switch9' incorporates:
     *  Constant: '<S1252>/Calib'
     */
    if (KeAATR_b_SCP_InletTempSNAOvrdEnbl)
    {
        /* Switch: '<S22>/Switch9' incorporates:
         *  Constant: '<S1253>/Calib'
         */
        VeAATI_b_SCP_InletTempSNA_Dial = KeAATR_b_SCP_InletTempSNAOvrdVal;
    }
    else
    {
        /* Switch: '<S22>/Switch9' incorporates:
         *  Merge: '<Root>/Merge_2'
         *  SignalConversion generated from: '<S1>/VeAATR_b_SCP_InletTempSnsrSNA_read'
         */
        VeAATI_b_SCP_InletTempSNA_Dial =
            Rte_IrvRead_AATR_MedTEH_SCP_InletTempSnsrSNA_Init_write_IRV();
    }

    /* End of Switch: '<S22>/Switch9' */

    /* Switch: '<S22>/Switch10' incorporates:
     *  Constant: '<S1247>/Calib'
     */
    if (KeAATR_b_SCP_DCPstvTempSNAOvrdEnbl)
    {
        /* Switch: '<S22>/Switch10' incorporates:
         *  Constant: '<S1248>/Calib'
         */
        VeAATI_b_SCP_DCPstvTempSNA_Dial = KeAATR_b_SCP_DCPstvTempSNAOvrdVal;
    }
    else
    {
        /* Switch: '<S22>/Switch10' incorporates:
         *  Merge: '<Root>/Merge_3'
         *  SignalConversion generated from: '<S1>/VeAATR_b_SCP_DCPstvTmpSnsrSNA_read'
         */
        VeAATI_b_SCP_DCPstvTempSNA_Dial =
            Rte_IrvRead_AATR_MedTEH_SCP_DCPstvTempSNA_Init_write_IRV();
    }

    /* End of Switch: '<S22>/Switch10' */

    /* Switch: '<S22>/Switch11' incorporates:
     *  Constant: '<S1242>/Calib'
     */
    if (KeAATR_b_SCP_DCNegtvTempSNAOvrdEnbl)
    {
        /* Switch: '<S22>/Switch11' incorporates:
         *  Constant: '<S1243>/Calib'
         */
        VeAATI_b_SCP_DCNegtvTempSNA_Dial = KeAATR_b_SCP_DCNegtvTempSNAOvrdVal;
    }
    else
    {
        /* Switch: '<S22>/Switch11' incorporates:
         *  Merge: '<Root>/Merge_4'
         *  SignalConversion generated from: '<S1>/VeAATR_b_SCP_DCNegtvTmpSnsrSNA_read'
         */
        VeAATI_b_SCP_DCNegtvTempSNA_Dial =
            Rte_IrvRead_AATR_MedTEH_SCP_DCNegtvTempSNA_Init_write_IRV();
    }

    /* End of Switch: '<S22>/Switch11' */

    /* Switch: '<S22>/Switch2' incorporates:
     *  Constant: '<S1236>/Calib'
     */
    if (KeAATR_b_SCP_AmbientTempFAOvrdEnbl)
    {
        /* Switch: '<S22>/Switch2' incorporates:
         *  Constant: '<S1237>/Calib'
         */
        VeAATI_b_SCP_AmbientTempFA_Dial = KeAATR_b_SCP_AmbientTempFAOvrdVal;
    }
    else
    {
        /* Switch: '<S22>/Switch2' incorporates:
         *  Merge: '<Root>/Merge_10'
         *  SignalConversion generated from: '<S1>/VeAATR_b_SCP_AmbientTempSnsrFA_read'
         */
        VeAATI_b_SCP_AmbientTempFA_Dial =
            Rte_IrvRead_AATR_MedTEH_SCP_AmbientTempFA_Init_write_IRV();
    }

    /* End of Switch: '<S22>/Switch2' */
    /* End of Outputs for SubSystem: '<S1>/Overrides' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#elif !Rte_SysCon_Variant_AATR_8 && Rte_SysCon_Variant_AATR_9

    /* Outputs for Function Call SubSystem: '<S1>/AATC_Process_1' */
    /* Outputs for Enabled SubSystem: '<S17>/AATC_MSG' */
    /* Outputs for Enabled SubSystem: '<S17>/AATC_MSG' incorporates:
     *  EnablePort: '<S23>/Enable'
     */
    /* Switch: '<S23>/Switch17' incorporates:
     *  Constant: '<S30>/Calib'
     */
    if (KeAATR_b_CBC_AmbVoltOvrdEnbl)
    {
        /* Switch: '<S23>/Switch17' incorporates:
         *  Constant: '<S27>/Calib'
         */
        VeAATC_U_CBC_AmbAirVolt_Dial = KeAATR_U_CBC_AmbVoltOvrdVal;
    }
    else
    {
        /* Switch: '<S23>/Switch17' */
        VeAATC_U_CBC_AmbAirVolt_Dial = rtb_TmpSignalConversionAtVeAATR_U_CBC_Am;
    }

    /* End of Switch: '<S23>/Switch17' */

    /* Lookup_n-D: '<S31>/Vector' incorporates:
     *  Switch: '<S23>/Switch17'
     */
    VeAATC_T_CBC_AmbAirTempRaw_MSG = look1_iflf_binlca_16a
        (VeAATC_U_CBC_AmbAirVolt_Dial, ((const float32 *)
          &(KxAATR_T_CBC_AmbAirTemp[0])), ((const float32 *)
          &(KtAATR_T_CBC_AmbAirTemp[0])), 12U);

    /* Switch: '<S23>/Switch19' incorporates:
     *  Constant: '<S28>/Calib'
     */
    if (KeAATR_b_CBC_AmbVoltFAOvrdEnbl)
    {
        /* Switch: '<S23>/Switch19' incorporates:
         *  Constant: '<S29>/Calib'
         */
        VeAATR_b_CBC_AmbAirVoltFA = KeAATR_b_CBC_AmbVoltFAOvrdVal;
    }
    else
    {
        /* Switch: '<S23>/Switch19' */
        VeAATR_b_CBC_AmbAirVoltFA = rtb_TmpSignalConversionAtVeAATR_b_CBC_Am;
    }

    /* End of Switch: '<S23>/Switch19' */
    /* End of Outputs for SubSystem: '<S17>/AATC_MSG' */
#endif

    /* End of SignalConversion generated from: '<S1>/VeAATR_T_SCP_AmbientTempSnsr_read' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AATC_Process_1'
     */
    /* SignalConversion generated from: '<S17>/Variant Source2' */
#if Rte_SysCon_Variant_AATR_8

    /* Outputs for Enabled SubSystem: '<S17>/AATC_Proc_and_Init' */
    /* Outputs for Enabled SubSystem: '<S17>/AATC_Proc_and_Init' incorporates:
     *  EnablePort: '<S24>/Enable'
     */
    /* RelationalOperator: '<S32>/Relational Operator' incorporates:
     *  Constant: '<S45>/Calib'
     */
    VeAATR_b_SpdLow_EnblHeatSoak = (VeAATI_v_VehSpd_Dial <
        KeAATR_v_EntrHeatSoakSpd);

    /* Logic: '<S35>/Logical1' */
    rtb_TmpSignalConversionAtVeAATR_b_CBC_Am = !VeAATR_b_SpdLow_EnblHeatSoak;

    /* Outputs for Atomic SubSystem: '<S54>/EdgeBi1' */
    /* RelationalOperator: '<S78>/Not Equal' incorporates:
     *  UnitDelay: '<S78>/Unit Delay'
     */
    rtb_NotEqual_d = (rtb_TmpSignalConversionAtVeAATR_b_CBC_Am !=
                      AATR_ac_DW.UnitDelay_DSTATE_jwl);

    /* Update for UnitDelay: '<S78>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_jwl = rtb_TmpSignalConversionAtVeAATR_b_CBC_Am;

    /* End of Outputs for SubSystem: '<S54>/EdgeBi1' */

    /* Outputs for Atomic SubSystem: '<S54>/Counter Reset Enabled ' */
    /* Switch: '<S77>/Switch' incorporates:
     *  Constant: '<S77>/Constant Value2'
     *  Switch: '<S77>/Switch2'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    if (rtb_NotEqual_d)
    {
        AATR_ac_DW.UnitDelay_DSTATE_oc = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeAATR_b_CBC_Am)
        {
            /* UnitDelay: '<S77>/Unit Delay' incorporates:
             *  Constant: '<S77>/Constant Value1'
             *  Sum: '<S77>/Subtraction'
             *  Switch: '<S77>/Switch2'
             */
            AATR_ac_DW.UnitDelay_DSTATE_oc = (uint16)(((uint32)
                AATR_ac_DW.UnitDelay_DSTATE_oc) + 1U);
        }
    }

    /* End of Switch: '<S77>/Switch' */
    /* End of Outputs for SubSystem: '<S54>/Counter Reset Enabled ' */

    /* Logic: '<S54>/Logical Operator' incorporates:
     *  Constant: '<S79>/Calib'
     *  Constant: '<S80>/Calib'
     *  Product: '<S54>/Product1'
     *  RelationalOperator: '<S54>/Relational Operator1'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    VeAATR_b_HeatSoakExitTimerEnabled =
        (rtb_TmpSignalConversionAtVeAATR_b_CBC_Am && (((float32)
           AATR_ac_DW.UnitDelay_DSTATE_oc) > (KeAATR_t_StrtTimerExitSoak /
           HeAATR_t_MedTEH)));

    /* Logic: '<S52>/Logical Operator1' incorporates:
     *  Constant: '<S62>/Calib'
     *  RelationalOperator: '<S52>/Relational Operator2'
     */
    rtb_TmpSignalConversionAtVeAATR_b_CBC_Am = ((VeAATI_v_VehSpd_Dial >=
        KeAATR_v_EntrHeatSoakSpd) && (VeAATR_b_HeatSoakExitTimerEnabled));

    /* If: '<S59>/If' incorporates:
     *  Constant: '<S61>/Calib'
     *  Constant: '<S63>/Calib'
     *  Logic: '<S52>/Logical Operator4'
     *  Logic: '<S52>/Logical Operator5'
     *  RelationalOperator: '<S52>/Relational Operator'
     *  RelationalOperator: '<S52>/Relational Operator1'
     */
    if ((VeAATI_v_VehSpd_Dial >= KeAATR_v_HwySpeed) &&
            (VeAATR_b_HeatSoakExitTimerEnabled))
    {
        /* Outputs for IfAction SubSystem: '<S59>/HwyMode_dT' incorporates:
         *  ActionPort: '<S66>/Action Port'
         */
        /* Merge: '<S59>/Merge' incorporates:
         *  Constant: '<S70>/Calib'
         *  SignalConversion generated from: '<S66>/dT'
         */
        VeAATR_dT_TmrFactr4ExitSoak = KeAATR_dT_HwyMode;

        /* End of Outputs for SubSystem: '<S59>/HwyMode_dT' */
    }
    else if ((VeAATI_v_VehSpd_Dial >= KeAATR_v_CitySpeed) &&
             (VeAATR_b_HeatSoakExitTimerEnabled))
    {
        /* Outputs for IfAction SubSystem: '<S59>/CityMode_dT' incorporates:
         *  ActionPort: '<S65>/Action Port'
         */
        /* Merge: '<S59>/Merge' incorporates:
         *  Constant: '<S69>/Calib'
         *  SignalConversion generated from: '<S65>/dT'
         */
        VeAATR_dT_TmrFactr4ExitSoak = KeAATR_dT_CityMode;

        /* End of Outputs for SubSystem: '<S59>/CityMode_dT' */
    }
    else if (rtb_TmpSignalConversionAtVeAATR_b_CBC_Am)
    {
        /* Outputs for IfAction SubSystem: '<S59>/ParkMode_dT' incorporates:
         *  ActionPort: '<S68>/Action Port'
         */
        /* Merge: '<S59>/Merge' incorporates:
         *  Constant: '<S72>/Calib'
         *  SignalConversion generated from: '<S68>/dT'
         */
        VeAATR_dT_TmrFactr4ExitSoak = KeAATR_dT_ParkMode;

        /* End of Outputs for SubSystem: '<S59>/ParkMode_dT' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S59>/NoTimer_dT' incorporates:
         *  ActionPort: '<S67>/Action Port'
         */
        /* Merge: '<S59>/Merge' incorporates:
         *  Constant: '<S71>/Calib'
         *  SignalConversion generated from: '<S67>/dT'
         */
        VeAATR_dT_TmrFactr4ExitSoak = KeAATR_dT_NoDecrmnt;

        /* End of Outputs for SubSystem: '<S59>/NoTimer_dT' */
    }

    /* End of If: '<S59>/If' */

    /* Outputs for Atomic SubSystem: '<S51>/EdgeBi1' */
    /* UnitDelay: '<S95>/Unit Delay' incorporates:
     *  UnitDelay: '<S56>/Unit Delay'
     */
    rtb_NotEqual_d = AATR_ac_DW.UnitDelay_DSTATE_kc;

    /* Update for UnitDelay: '<S56>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_kc = VeAATR_b_SpdLow_EnblHeatSoak;

    /* Outputs for Atomic SubSystem: '<S51>/Counter Reset Enabled ' */
    /* Switch: '<S55>/Switch' incorporates:
     *  Constant: '<S55>/Constant Value2'
     *  RelationalOperator: '<S56>/Not Equal'
     *  Switch: '<S55>/Switch2'
     *  UnitDelay: '<S55>/Unit Delay'
     */
    if (VeAATR_b_SpdLow_EnblHeatSoak != rtb_NotEqual_d)
    {
        AATR_ac_DW.UnitDelay_DSTATE_mo = 0U;
    }
    else
    {
        if (VeAATR_b_SpdLow_EnblHeatSoak)
        {
            /* UnitDelay: '<S55>/Unit Delay' incorporates:
             *  Constant: '<S55>/Constant Value1'
             *  Sum: '<S55>/Subtraction'
             *  Switch: '<S55>/Switch2'
             */
            AATR_ac_DW.UnitDelay_DSTATE_mo = (uint16)(((uint32)
                AATR_ac_DW.UnitDelay_DSTATE_mo) + 1U);
        }
    }

    /* End of Switch: '<S55>/Switch' */
    /* End of Outputs for SubSystem: '<S51>/Counter Reset Enabled ' */
    /* End of Outputs for SubSystem: '<S51>/EdgeBi1' */

    /* Logic: '<S51>/Logical Operator2' incorporates:
     *  Constant: '<S57>/Calib'
     *  Constant: '<S58>/Calib'
     *  Product: '<S51>/Product1'
     *  RelationalOperator: '<S51>/Relational Operator2'
     *  UnitDelay: '<S55>/Unit Delay'
     */
    VeAATR_b_EntrHeatSoak_TimeExprd = ((VeAATR_b_SpdLow_EnblHeatSoak) &&
        (((float32)AATR_ac_DW.UnitDelay_DSTATE_mo) > (KeAATR_t_EnterSoakLowSpeed
        / HeAATR_t_MedTEH)));

    /* Outputs for Atomic SubSystem: '<S52>/SoakTimerExpired' */
    /* Outputs for Atomic SubSystem: '<S64>/EdgeBi' */
    /* RelationalOperator: '<S74>/Not Equal' incorporates:
     *  UnitDelay: '<S74>/Unit Delay'
     */
    rtb_NotEqual_e = (rtb_TmpSignalConversionAtVeAATR_b_CBC_Am !=
                      AATR_ac_DW.UnitDelay_DSTATE_i0);

    /* Update for UnitDelay: '<S74>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_i0 = rtb_TmpSignalConversionAtVeAATR_b_CBC_Am;

    /* End of Outputs for SubSystem: '<S64>/EdgeBi' */

    /* Outputs for Atomic SubSystem: '<S64>/EdgeRising' */
    /* UnitDelay: '<S95>/Unit Delay' incorporates:
     *  UnitDelay: '<S75>/Unit Delay'
     */
    rtb_NotEqual_d = AATR_ac_DW.UnitDelay_DSTATE_gs;

    /* Update for UnitDelay: '<S75>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_gs = VeAATR_b_EntrHeatSoak_TimeExprd;

    /* Outputs for Atomic SubSystem: '<S64>/Counter Reset Enabled ' */
    /* Switch: '<S73>/Switch' incorporates:
     *  Constant: '<S73>/Constant Value2'
     *  Logic: '<S64>/Logical Operator1'
     *  Logic: '<S75>/AND'
     *  Logic: '<S75>/OR1'
     *  Switch: '<S73>/Switch2'
     *  UnitDelay: '<S73>/Unit Delay'
     */
    if (rtb_NotEqual_e || ((VeAATR_b_EntrHeatSoak_TimeExprd) && (!rtb_NotEqual_d)))
    {
        AATR_ac_DW.UnitDelay_DSTATE_i5 = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeAATR_b_CBC_Am)
        {
            /* UnitDelay: '<S73>/Unit Delay' incorporates:
             *  Constant: '<S73>/Constant Value1'
             *  Sum: '<S73>/Subtraction'
             *  Switch: '<S73>/Switch2'
             */
            AATR_ac_DW.UnitDelay_DSTATE_i5 = (uint16)(((uint32)
                AATR_ac_DW.UnitDelay_DSTATE_i5) + 1U);
        }
    }

    /* End of Switch: '<S73>/Switch' */
    /* End of Outputs for SubSystem: '<S64>/Counter Reset Enabled ' */
    /* End of Outputs for SubSystem: '<S64>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S64>/Protected Division1' */
    /* Switch: '<S76>/Switch1' incorporates:
     *  Constant: '<S60>/Calib'
     *  Constant: '<S76>/Constant Value'
     *  Constant: '<S76>/Constant Value1'
     *  Constant: '<S76>/Constant Value2'
     *  Constant: '<S76>/Constant Value3'
     *  Logic: '<S76>/AND'
     *  RelationalOperator: '<S76>/Greater Than or Equal '
     *  RelationalOperator: '<S76>/Greater Than or Equal 1'
     *  RelationalOperator: '<S76>/Not Equal'
     *  RelationalOperator: '<S76>/Not Equal1'
     *  Switch: '<S76>/Switch2'
     *  Switch: '<S76>/Switch3'
     */
    if ((KeAATR_t_TmrExitSoak != 0.0F) && (VeAATR_dT_TmrFactr4ExitSoak != 0.0F))
    {
        /* Switch: '<S76>/Switch1' incorporates:
         *  Product: '<S76>/Division'
         */
        rtb_Switch1_p3 = KeAATR_t_TmrExitSoak / VeAATR_dT_TmrFactr4ExitSoak;
    }
    else if (KeAATR_t_TmrExitSoak > 0.0F)
    {
        /* Switch: '<S76>/Switch2' incorporates:
         *  Constant: '<S76>/MAXFLOAT'
         *  Switch: '<S76>/Switch1'
         */
        rtb_Switch1_p3 = 3.402823466E+38F;
    }
    else if (KeAATR_t_TmrExitSoak < 0.0F)
    {
        /* Switch: '<S76>/Switch3' incorporates:
         *  Constant: '<S76>/MINFLOAT'
         *  Switch: '<S76>/Switch1'
         *  Switch: '<S76>/Switch2'
         */
        rtb_Switch1_p3 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S76>/Switch1' incorporates:
         *  Constant: '<S76>/Constant Value4'
         *  Switch: '<S76>/Switch2'
         *  Switch: '<S76>/Switch3'
         */
        rtb_Switch1_p3 = 0.0F;
    }

    /* End of Switch: '<S76>/Switch1' */
    /* End of Outputs for SubSystem: '<S64>/Protected Division1' */

    /* Logic: '<S52>/Logical Operator2' incorporates:
     *  Logic: '<S64>/Logical Operator'
     *  RelationalOperator: '<S64>/Relational Operator1'
     *  UnitDelay: '<S73>/Unit Delay'
     */
    VeAATR_b_ExitHeatSoak_TimerExpired =
        ((rtb_TmpSignalConversionAtVeAATR_b_CBC_Am && (((float32)
            AATR_ac_DW.UnitDelay_DSTATE_i5) > rtb_Switch1_p3)) &&
         (VeAATR_b_HeatSoakExitTimerEnabled));

    /* End of Outputs for SubSystem: '<S52>/SoakTimerExpired' */

    /* Outputs for Atomic SubSystem: '<S35>/EdgeRising' */
    /* Logic: '<S49>/AND' incorporates:
     *  Logic: '<S49>/OR1'
     *  UnitDelay: '<S49>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeAATR_b_CBC_Am =
        ((VeAATR_b_ExitHeatSoak_TimerExpired) &&
         (!AATR_ac_DW.UnitDelay_DSTATE_fa));

    /* Update for UnitDelay: '<S49>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_fa = VeAATR_b_ExitHeatSoak_TimerExpired;

    /* End of Outputs for SubSystem: '<S35>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S35>/EdgeRising1' */
    /* Logic: '<S50>/AND' incorporates:
     *  Logic: '<S50>/OR1'
     *  UnitDelay: '<S50>/Unit Delay'
     */
    rtb_NotEqual_d = ((VeAATR_b_EntrHeatSoak_TimeExprd) &&
                      (!AATR_ac_DW.UnitDelay_DSTATE_e3d));

    /* Update for UnitDelay: '<S50>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_e3d = VeAATR_b_EntrHeatSoak_TimeExprd;

    /* End of Outputs for SubSystem: '<S35>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S35>/Signal Latch On With Reset' */
    /* Logic: '<S53>/OR1' incorporates:
     *  Logic: '<S35>/Logical Operator1'
     *  Logic: '<S53>/NOT'
     *  Logic: '<S53>/OR'
     *  UnitDelay: '<S53>/Unit Delay'
     */
    VeAATR_b_SensorsVentilated = ((VeAATR_b_ExitHeatSoak_TimerExpired) ||
        (((!rtb_TmpSignalConversionAtVeAATR_b_CBC_Am) && (!rtb_NotEqual_d)) &&
         (AATR_ac_DW.UnitDelay_DSTATE_ad)));

    /* Update for UnitDelay: '<S53>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_ad = VeAATR_b_SensorsVentilated;

    /* End of Outputs for SubSystem: '<S35>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S33>/EdgeRising1' */
    /* Logic: '<S96>/OR1' incorporates:
     *  UnitDelay: '<S96>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeAATR_b_CBC_Am = !AATR_ac_DW.UnitDelay_DSTATE_fij;

    /* Update for UnitDelay: '<S96>/Unit Delay' incorporates:
     *  Constant: '<S33>/TRUE Constant1'
     */
    AATR_ac_DW.UnitDelay_DSTATE_fij = true;

    /* Outputs for Atomic SubSystem: '<S33>/Timer Retrigger Reset Enabled1' */
    /* Switch: '<S108>/Switch1' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S106>/Calib'
     *  Constant: '<S108>/Constant Value4'
     *  Logic: '<S96>/AND'
     *  MinMax: '<S108>/Maximum'
     *  Sum: '<S108>/Subtraction'
     *  UnitDelay: '<S108>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeAATR_b_CBC_Am)
    {
        AATR_ac_DW.UnitDelay_DSTATE_gex = KeAATR_t_TimeSignal_Period;
    }
    else
    {
        AATR_ac_DW.UnitDelay_DSTATE_gex = fmaxf(AATR_ac_DW.UnitDelay_DSTATE_gex
            - HeAATR_t_MedTEH, 0.0F);
    }

    /* End of Switch: '<S108>/Switch1' */
    /* End of Outputs for SubSystem: '<S33>/EdgeRising1' */

    /* RelationalOperator: '<S108>/Greater  Than1' incorporates:
     *  Constant: '<S108>/Constant Value2'
     *  UnitDelay: '<S108>/Unit Delay'
     */
    VeAATC_b_Switch2ActValue = (AATR_ac_DW.UnitDelay_DSTATE_gex > 0.0F);

    /* End of Outputs for SubSystem: '<S33>/Timer Retrigger Reset Enabled1' */

    /* Logic: '<S33>/Logical1' */
    rtb_TmpSignalConversionAtVeAATR_b_CBC_Am = !VeAATC_b_Switch2ActValue;

    /* If: '<S33>/If' incorporates:
     *  Constant: '<S103>/Calib'
     *  Logic: '<S33>/Logical Operator'
     */
    if (rtb_TmpSignalConversionAtVeAATR_b_CBC_Am || (KeAATR_b_OvrrdInitSNA_wup))
    {
        /* Outputs for IfAction SubSystem: '<S33>/AmbAirTempMdl_InRun' incorporates:
         *  ActionPort: '<S91>/Action Port'
         */
        /* Logic: '<S134>/Logical Operator1' incorporates:
         *  Logic: '<S91>/Logical Operator'
         */
        rtb_NotEqual_d = !VeAATI_b_HCPOffTimeFA_OvrdVal_Dial;

        /* If: '<S91>/If' incorporates:
         *  Constant: '<S121>/Constant1'
         *  Constant: '<S121>/Constant2'
         *  Constant: '<S122>/Constant1'
         *  Constant: '<S122>/Constant2'
         *  Constant: '<S123>/Constant1'
         *  Constant: '<S123>/Constant2'
         *  Constant: '<S128>/Calib'
         *  DataStoreRead: '<S121>/StatusByte_CT_SnsrPerf'
         *  DataStoreRead: '<S122>/StatusByte_MtrElect_CT_SnsrPerf'
         *  DataStoreRead: '<S123>/StatusByte_MtrElect_CoolPmpATempSnsrPerf'
         *  Logic: '<S117>/Logical11'
         *  Logic: '<S117>/Logical3'
         *  Logic: '<S117>/Logical8'
         *  Logic: '<S121>/Logical Operator'
         *  Logic: '<S122>/Logical Operator'
         *  Logic: '<S123>/Logical Operator'
         *  Logic: '<S129>/Logical10'
         *  Logic: '<S129>/Logical13'
         *  Logic: '<S129>/Logical4'
         *  Logic: '<S130>/Logical12'
         *  Logic: '<S130>/Logical2'
         *  Logic: '<S130>/Logical9'
         *  Logic: '<S134>/Logical Operator'
         *  Logic: '<S134>/Logical Operator1'
         *  Logic: '<S134>/Logical Operator2'
         *  RelationalOperator: '<S121>/Relational Operator1'
         *  RelationalOperator: '<S121>/Relational Operator2'
         *  RelationalOperator: '<S122>/Relational Operator1'
         *  RelationalOperator: '<S122>/Relational Operator2'
         *  RelationalOperator: '<S123>/Relational Operator1'
         *  RelationalOperator: '<S123>/Relational Operator2'
         *  RelationalOperator: '<S134>/Comparison2'
         *  S-Function (sfix_bitop): '<S121>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S121>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S122>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S122>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S123>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S123>/Bitwise Operator2'
         */
        if (((VeAATI_t_HCPOffTime_OvrdVal_Dial <= KeAATR_t_VehicleOFFTime_1) &&
                rtb_NotEqual_d) && (!rtb_TmpSignalConversionAtAmbAirTempFA_Sa))
        {
            /* Outputs for IfAction SubSystem: '<S91>/AmbAirTemp_InitSaved' incorporates:
             *  ActionPort: '<S112>/Action Port'
             */
            /* Merge: '<S91>/Merge' incorporates:
             *  Inport: '<S112>/AmbAirTempSaved'
             */
            VeAATC_T_AmbAirTemp_InRunIV =
                rtb_TmpSignalConversionAtAmbAirTemp_Save;

            /* Merge: '<S91>/Merge1' incorporates:
             *  Constant: '<S112>/FALSE Constant'
             *  SignalConversion generated from: '<S112>/AmbAirTemp_Saved_FA'
             */
            VeAATC_b_SCPDCNegtvTemp_Flty = false;

            /* End of Outputs for SubSystem: '<S91>/AmbAirTemp_InitSaved' */
        }
        else
        {
            /* Logic: '<S117>/Logical11' incorporates:
             *  Constant: '<S125>/Calib'
             *  Logic: '<S129>/Logical13'
             *  Logic: '<S130>/Logical12'
             */
            rtb_TmpSignalConversionAtAmbAirTempFA_Sa = !KeAATR_b_RatEnblInitTemp;
            if ((!VeAATI_b_ClntPumpTempFA_Dial) && ((((((sint32)
                     AATR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 1) <= 0) ||
                    ((((uint32)AATR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 64U)
                     != 0U)) || rtb_TmpSignalConversionAtAmbAirTempFA_Sa))
            {
                /* Outputs for IfAction SubSystem: '<S91>/AmbAirTemp_PPCTIS_InitDflt' incorporates:
                 *  ActionPort: '<S114>/Resets'
                 */
                AATR_ac_AmbAirTemp_PPCTIS_InitDflt(VeAATI_T_ClntPumpTemp_Dial, (
                    &(VeAATC_T_AmbAirTemp_InRunIV)),
                    (&(VeAATC_b_SCPDCNegtvTemp_Flty)));

                /* End of Outputs for SubSystem: '<S91>/AmbAirTemp_PPCTIS_InitDflt' */
            }
            else if ((!VeAATI_b_OnBrdChrg_ClntTmpIn_FA_Dial) && ((((((sint32)
                          AATR_ac_DW.StatusByte_CT_SnsrPerf) & 1) <= 0) ||
                       ((((uint32)AATR_ac_DW.StatusByte_CT_SnsrPerf) & 64U) !=
                        0U)) || rtb_TmpSignalConversionAtAmbAirTempFA_Sa))
            {
                /* Outputs for IfAction SubSystem: '<S91>/AmbAirTemp_PECTOS_InitDflt' incorporates:
                 *  ActionPort: '<S113>/Resets'
                 */
                AATR_ac_AmbAirTemp_PPCTIS_InitDflt
                    (VeAATI_T_OnBrdChrg_ClntTmpIn_Dial,
                     (&(VeAATC_T_AmbAirTemp_InRunIV)),
                     (&(VeAATC_b_SCPDCNegtvTemp_Flty)));

                /* End of Outputs for SubSystem: '<S91>/AmbAirTemp_PECTOS_InitDflt' */
            }
            else if ((!VeAATI_b_LTPsvPumpTemp_FA_Dial) && ((((((sint32)
                          AATR_ac_DW.StatusByte_MtrElect_CoolPmpATempSnsrPerf) &
                         1) <= 0) || ((((uint32)
                                        AATR_ac_DW.StatusByte_MtrElect_CoolPmpATempSnsrPerf)
                         & 64U) != 0U)) ||
                      rtb_TmpSignalConversionAtAmbAirTempFA_Sa))
            {
                /* Outputs for IfAction SubSystem: '<S91>/AmbAirTemp_PsvPump_InitDflt' incorporates:
                 *  ActionPort: '<S115>/Resets'
                 */
                AATR_ac_AmbAirTemp_PPCTIS_InitDflt(VeAATI_T_LTPsvPumpTemp_Dial,
                    (&(VeAATC_T_AmbAirTemp_InRunIV)),
                    (&(VeAATC_b_SCPDCNegtvTemp_Flty)));

                /* End of Outputs for SubSystem: '<S91>/AmbAirTemp_PsvPump_InitDflt' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S91>/AmbAirTemp_SNADflt' incorporates:
                 *  ActionPort: '<S116>/Resets'
                 */
                /* Merge: '<S91>/Merge' incorporates:
                 *  Constant: '<S135>/Calib'
                 *  SignalConversion generated from: '<S116>/AmbAirTemp_IV_RunDflt'
                 */
                VeAATC_T_AmbAirTemp_InRunIV = KeAATR_T_AmbAirTemp_SNA_Dflt;

                /* Merge: '<S91>/Merge1' incorporates:
                 *  Constant: '<S116>/TRUE Constant'
                 *  SignalConversion generated from: '<S116>/AmbAirTemp_IV_RunDfltFA'
                 */
                VeAATC_b_SCPDCNegtvTemp_Flty = true;

                /* End of Outputs for SubSystem: '<S91>/AmbAirTemp_SNADflt' */
            }
        }

        /* End of If: '<S91>/If' */

        /* Outputs for Atomic SubSystem: '<S91>/EdgeFalling' */
        /* Logic: '<S119>/AND' incorporates:
         *  UnitDelay: '<S119>/Unit Delay'
         */
        rtb_TmpSignalConversionAtAmbAirTempFA_Sa =
            AATR_ac_DW.UnitDelay_DSTATE_d0l;

        /* Update for UnitDelay: '<S119>/Unit Delay' incorporates:
         *  Constant: '<S91>/FALSE Constant'
         */
        AATR_ac_DW.UnitDelay_DSTATE_d0l = false;

        /* End of Outputs for SubSystem: '<S91>/EdgeFalling' */

        /* Outputs for Atomic SubSystem: '<S91>/EdgeRising' */
        /* Logic: '<S120>/OR1' incorporates:
         *  UnitDelay: '<S120>/Unit Delay'
         */
        rtb_NotEqual_e = !AATR_ac_DW.UnitDelay_DSTATE_pxi;

        /* Update for UnitDelay: '<S120>/Unit Delay' incorporates:
         *  Constant: '<S91>/Constant'
         */
        AATR_ac_DW.UnitDelay_DSTATE_pxi = true;

        /* Outputs for Atomic SubSystem: '<S91>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S133>/Switch1' incorporates:
         *  Constant: '<S102>/Calib'
         *  Constant: '<S132>/Calib'
         *  Constant: '<S133>/Constant Value4'
         *  Logic: '<S120>/AND'
         *  MinMax: '<S133>/Maximum'
         *  Sum: '<S133>/Subtraction'
         *  UnitDelay: '<S133>/Unit Delay'
         */
        if (rtb_NotEqual_e)
        {
            AATR_ac_DW.UnitDelay_DSTATE_nw = KeAATR_t_VehSoakTimeValid;
        }
        else
        {
            AATR_ac_DW.UnitDelay_DSTATE_nw = fmaxf
                (AATR_ac_DW.UnitDelay_DSTATE_nw - HeAATR_t_MedTEH, 0.0F);
        }

        /* End of Switch: '<S133>/Switch1' */
        /* End of Outputs for SubSystem: '<S91>/EdgeRising' */

        /* Logic: '<S91>/Logical Operator1' incorporates:
         *  Constant: '<S131>/Calib'
         *  Constant: '<S133>/Constant Value2'
         *  RelationalOperator: '<S133>/Greater  Than1'
         *  RelationalOperator: '<S91>/Relational Operator'
         *  UnitDelay: '<S133>/Unit Delay'
         */
        VeAATC_b_VehicleSoaked = (((VeAATI_t_HCPOffTime_OvrdVal_Dial >=
            KeAATR_t_VehicleSoakTime) && rtb_NotEqual_d) &&
            (AATR_ac_DW.UnitDelay_DSTATE_nw > 0.0F));

        /* End of Outputs for SubSystem: '<S91>/Timer Retrigger Reset Enabled' */

        /* Merge: '<S33>/Merge' incorporates:
         *  Constant: '<S126>/Calib'
         *  Logic: '<S91>/Logical1'
         */
        VeAATC_b_AmbAirTemp_Reset = ((KeAATR_b_ResetMdl_OvrdEnbl) ||
            rtb_TmpSignalConversionAtAmbAirTempFA_Sa);

        /* Switch: '<S91>/Switch' incorporates:
         *  Constant: '<S126>/Calib'
         *  Switch: '<S91>/Switch1'
         */
        if (KeAATR_b_ResetMdl_OvrdEnbl)
        {
            /* Product: '<S86>/Product1' incorporates:
             *  Constant: '<S124>/Calib'
             */
            rtb_TmpSignalConversionAtAmbAirTemp_Save = KeAATR_T_ResetMdl_OvrdVal;

            /* VariantMerge generated from: '<S139>/Variant Source1' incorporates:
             *  Constant: '<S127>/Calib'
             */
            VeAATC_b_SCPDCNegtvTemp_Flty = KeAATR_b_ResetMdl_OvrdVal;
        }
        else
        {
            /* Product: '<S86>/Product1' */
            rtb_TmpSignalConversionAtAmbAirTemp_Save =
                VeAATC_T_AmbAirTemp_InRunIV;
        }

        /* End of Switch: '<S91>/Switch' */
        /* End of Outputs for SubSystem: '<S33>/AmbAirTempMdl_InRun' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S33>/AmbAirTempMdl_HoldInReset' incorporates:
         *  ActionPort: '<S90>/Action Port'
         */
        /* Product: '<S86>/Product1' incorporates:
         *  Constant: '<S111>/Calib'
         *  SignalConversion generated from: '<S90>/AmbAirTemp_IV'
         */
        rtb_TmpSignalConversionAtAmbAirTemp_Save = KeAATR_T_AmbAirTemp_IV_Dflt;

        /* Merge: '<S33>/Merge' incorporates:
         *  Constant: '<S90>/TRUE Constant'
         *  SignalConversion generated from: '<S90>/AmbAirTemp_Reset'
         */
        VeAATC_b_AmbAirTemp_Reset = true;

        /* VariantMerge generated from: '<S139>/Variant Source1' incorporates:
         *  Constant: '<S90>/TRUE Constant1'
         *  SignalConversion generated from: '<S90>/AmbAirTemp_IV_FA'
         */
        VeAATC_b_SCPDCNegtvTemp_Flty = true;

        /* End of Outputs for SubSystem: '<S33>/AmbAirTempMdl_HoldInReset' */
    }

    /* End of If: '<S33>/If' */

    /* Logic: '<S36>/Logical Operator2' incorporates:
     *  Constant: '<S40>/Calib'
     *  Constant: '<S41>/Calib'
     *  Constant: '<S42>/Calib'
     *  Logic: '<S36>/Logical Operator3'
     *  Logic: '<S36>/Logical Operator4'
     */
    rtb_TmpSignalConversionAtAmbAirTempFA_Sa = ((((VeAATI_b_RunCrankActive_Dial)
        || (KeAATR_b_OvrrdCrank4InitHeatSoak)) && (KeAATR_b_InitHeatSoak)) &&
        ((VeAATC_b_VehicleSoaked) || (KeAATR_b_OvrrdVehSoak4InitHeatSoak)));

    /* Outputs for Atomic SubSystem: '<S36>/EdgeRising' */
    /* Logic: '<S81>/AND' incorporates:
     *  Logic: '<S81>/OR1'
     *  UnitDelay: '<S81>/Unit Delay'
     */
    rtb_NotEqual_d = (rtb_TmpSignalConversionAtAmbAirTempFA_Sa &&
                      (!AATR_ac_DW.UnitDelay_DSTATE_cyu));

    /* Update for UnitDelay: '<S81>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_cyu = rtb_TmpSignalConversionAtAmbAirTempFA_Sa;

    /* End of Outputs for SubSystem: '<S36>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S36>/Turn Off Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S82>/EdgeFalling' */
    /* Logic: '<S83>/AND' incorporates:
     *  Logic: '<S83>/OR1'
     *  UnitDelay: '<S83>/Unit Delay'
     */
    rtb_TmpSignalConversionAtAmbAirTempFA_Sa = ((!rtb_NotEqual_d) &&
        (AATR_ac_DW.UnitDelay_DSTATE_k2));

    /* Update for UnitDelay: '<S83>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_k2 = rtb_NotEqual_d;

    /* End of Outputs for SubSystem: '<S82>/EdgeFalling' */

    /* Switch: '<S82>/Switch' incorporates:
     *  Constant: '<S38>/Calib'
     *  Sum: '<S82>/Summation'
     *  UnitDelay: '<S82>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtAmbAirTempFA_Sa)
    {
        AATR_ac_DW.UnitDelay_DSTATE_ak = KeAATR_Cnt_HoldInitHeatSoak;
    }
    else
    {
        /* Sum: '<S82>/Summation' incorporates:
         *  Constant: '<S82>/Constant Value'
         *  UnitDelay: '<S82>/Unit Delay'
         */
        i = ((sint32)AATR_ac_DW.UnitDelay_DSTATE_ak) - 1;
        if ((((sint32)AATR_ac_DW.UnitDelay_DSTATE_ak) - 1) < 0)
        {
            i = 0;
        }

        AATR_ac_DW.UnitDelay_DSTATE_ak = (uint16)i;
    }

    /* End of Switch: '<S82>/Switch' */

    /* Logic: '<S82>/AND' incorporates:
     *  Constant: '<S82>/Constant Value2'
     *  RelationalOperator: '<S82>/Greater  Than'
     *  UnitDelay: '<S82>/Unit Delay'
     */
    VeAATR_b_InitHeatSoak_VehSoaked = (rtb_NotEqual_d || (((sint32)
        AATR_ac_DW.UnitDelay_DSTATE_ak) > 0));

    /* End of Outputs for SubSystem: '<S36>/Turn Off Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S34>/CBC_AmbTemp_Fltr' */
    /* Lookup_n-D: '<S146>/Vector' incorporates:
     *  Switch: '<S22>/Switch17'
     */
    VeAATC_T_CBC_AmbAirTempRaw = look1_iflf_binlca_16a
        (AATR_ac_B.VeAATI_U_CBC_AmbAirVolt_Dial, ((const float32 *)
          &(KxAATR_T_CBC_AmbAirTemp[0])), ((const float32 *)
          &(KtAATR_T_CBC_AmbAirTemp[0])), 12U);

    /* Outputs for Atomic SubSystem: '<S138>/EdgeRising' */
    /* Logic: '<S144>/OR1' incorporates:
     *  UnitDelay: '<S144>/Unit Delay'
     */
    rtb_NotEqual_d = !AATR_ac_DW.UnitDelay_DSTATE_as;

    /* Update for UnitDelay: '<S144>/Unit Delay' incorporates:
     *  Constant: '<S138>/TRUE Constant'
     */
    AATR_ac_DW.UnitDelay_DSTATE_as = true;

    /* Outputs for Atomic SubSystem: '<S138>/Digital Lowpass Reset Enabled1' */
    /* Switch: '<S142>/Switch1' incorporates:
     *  Logic: '<S144>/AND'
     */
    if (rtb_NotEqual_d)
    {
        /* Switch: '<S142>/Switch1' */
        VeAATC_T_CBC_AmbAirTempFlt_FUNC = VeAATC_T_CBC_AmbAirTempRaw;
    }
    else
    {
        /* Switch: '<S142>/Switch1' incorporates:
         *  Constant: '<S145>/Calib'
         *  Product: '<S142>/Multiplication'
         *  Sum: '<S142>/Subtraction'
         *  Sum: '<S142>/Summation'
         *  UnitDelay: '<S142>/Unit Delay'
         */
        VeAATC_T_CBC_AmbAirTempFlt_FUNC = ((VeAATC_T_CBC_AmbAirTempRaw -
            VeAATC_T_CBC_AmbAirTempFlt_FUNC) * KeAATR_k_CBC_AmbAirTemp_Coef) +
            VeAATC_T_CBC_AmbAirTempFlt_FUNC;
    }

    /* End of Switch: '<S142>/Switch1' */
    /* End of Outputs for SubSystem: '<S138>/Digital Lowpass Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S138>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S34>/CBC_AmbTemp_Fltr' */

    /* Outputs for Atomic SubSystem: '<S33>/EdgeRising7' */
    /* Logic: '<S101>/OR1' incorporates:
     *  UnitDelay: '<S101>/Unit Delay'
     */
    rtb_NotEqual_d = !AATR_ac_DW.UnitDelay_DSTATE_ps;

    /* Update for UnitDelay: '<S101>/Unit Delay' incorporates:
     *  Constant: '<S33>/TRUE Constant'
     */
    AATR_ac_DW.UnitDelay_DSTATE_ps = true;

    /* Outputs for Atomic SubSystem: '<S33>/Timer Retrigger Reset Enabled' */
    /* Switch: '<S107>/Switch1' incorporates:
     *  Constant: '<S105>/Calib'
     *  Logic: '<S101>/AND'
     *  Switch: '<S107>/Switch2'
     *  UnitDelay: '<S107>/Unit Delay'
     *  UnitDelay: '<S33>/Unit Delay'
     */
    if (rtb_NotEqual_d)
    {
        AATR_ac_DW.UnitDelay_DSTATE_h = KeAATR_t_InitValue_Period;
    }
    else
    {
        if (AATR_ac_DW.UnitDelay_DSTATE_g3)
        {
            /* UnitDelay: '<S107>/Unit Delay' incorporates:
             *  Constant: '<S102>/Calib'
             *  Constant: '<S107>/Constant Value4'
             *  MinMax: '<S107>/Maximum'
             *  Sum: '<S107>/Subtraction'
             *  Switch: '<S107>/Switch2'
             */
            AATR_ac_DW.UnitDelay_DSTATE_h = fmaxf(AATR_ac_DW.UnitDelay_DSTATE_h
                - HeAATR_t_MedTEH, 0.0F);
        }
    }

    /* End of Switch: '<S107>/Switch1' */
    /* End of Outputs for SubSystem: '<S33>/EdgeRising7' */

    /* RelationalOperator: '<S107>/Greater  Than1' incorporates:
     *  Constant: '<S107>/Constant Value2'
     *  UnitDelay: '<S107>/Unit Delay'
     */
    VeAATC_b_AmbAirTemp_IVPrd = (AATR_ac_DW.UnitDelay_DSTATE_h > 0.0F);

    /* End of Outputs for SubSystem: '<S33>/Timer Retrigger Reset Enabled' */

    /* Logic: '<S33>/Logical2' */
    VeAATC_b_AmbAirTemp_IVPrdCmpt = !VeAATC_b_AmbAirTemp_IVPrd;

    /* Outputs for Atomic SubSystem: '<S33>/EdgeRising2' */
    /* Logic: '<S97>/OR1' incorporates:
     *  UnitDelay: '<S97>/Unit Delay'
     */
    rtb_NotEqual_d = !AATR_ac_DW.UnitDelay_DSTATE_b5;

    /* Update for UnitDelay: '<S97>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_b5 = VeAATC_b_AmbAirTemp_IVPrdCmpt;

    /* End of Outputs for SubSystem: '<S33>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S33>/EdgeRising4' */
    /* Logic: '<S99>/OR1' incorporates:
     *  UnitDelay: '<S99>/Unit Delay'
     */
    rtb_TmpSignalConversionAtAmbAirTempFA_Sa = !AATR_ac_DW.UnitDelay_DSTATE_mx;

    /* Update for UnitDelay: '<S99>/Unit Delay' incorporates:
     *  Constant: '<S33>/TRUE Constant3'
     */
    AATR_ac_DW.UnitDelay_DSTATE_mx = true;

    /* Outputs for Atomic SubSystem: '<S92>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S33>/EdgeRising2' */
    /* Logic: '<S136>/OR1' incorporates:
     *  Logic: '<S136>/OR'
     *  Logic: '<S97>/AND'
     *  Logic: '<S99>/AND'
     *  UnitDelay: '<S136>/Unit Delay'
     */
    AATR_ac_DW.UnitDelay_DSTATE_my = (((VeAATC_b_AmbAirTemp_IVPrdCmpt) &&
        rtb_NotEqual_d) || ((!rtb_TmpSignalConversionAtAmbAirTempFA_Sa) &&
                            (AATR_ac_DW.UnitDelay_DSTATE_my)));

    /* End of Outputs for SubSystem: '<S33>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S92>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S33>/EdgeRising4' */

    /* Switch: '<S92>/Switch1' */
    if (!AATR_ac_DW.UnitDelay_DSTATE_my)
    {
        /* Switch: '<S92>/Switch1' */
        VeAATC_T_AmbAirTemp_IV = rtb_TmpSignalConversionAtAmbAirTemp_Save;
    }

    /* End of Switch: '<S92>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S33>/EdgeRising3' */
    /* Logic: '<S98>/OR1' incorporates:
     *  UnitDelay: '<S98>/Unit Delay'
     */
    rtb_NotEqual_d = !AATR_ac_DW.UnitDelay_DSTATE_fb;

    /* Update for UnitDelay: '<S98>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_fb = VeAATC_b_AmbAirTemp_IVPrdCmpt;

    /* End of Outputs for SubSystem: '<S33>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S33>/EdgeRising5' */
    /* Logic: '<S100>/OR1' incorporates:
     *  UnitDelay: '<S100>/Unit Delay'
     */
    rtb_TmpSignalConversionAtAmbAirTempFA_Sa = !AATR_ac_DW.UnitDelay_DSTATE_kaj;

    /* Update for UnitDelay: '<S100>/Unit Delay' incorporates:
     *  Constant: '<S33>/TRUE Constant2'
     */
    AATR_ac_DW.UnitDelay_DSTATE_kaj = true;

    /* Outputs for Atomic SubSystem: '<S93>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S33>/EdgeRising3' */
    /* Logic: '<S137>/OR1' incorporates:
     *  Logic: '<S100>/AND'
     *  Logic: '<S137>/OR'
     *  Logic: '<S98>/AND'
     *  UnitDelay: '<S137>/Unit Delay'
     */
    AATR_ac_DW.UnitDelay_DSTATE_gt = (((VeAATC_b_AmbAirTemp_IVPrdCmpt) &&
        rtb_NotEqual_d) || ((!rtb_TmpSignalConversionAtAmbAirTempFA_Sa) &&
                            (AATR_ac_DW.UnitDelay_DSTATE_gt)));

    /* End of Outputs for SubSystem: '<S33>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S93>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S33>/EdgeRising5' */

    /* Switch: '<S93>/Switch1' */
    if (!AATR_ac_DW.UnitDelay_DSTATE_gt)
    {
        /* Switch: '<S93>/Switch1' */
        VeAATC_b_AmbAirTemp_IV_FA = VeAATC_b_SCPDCNegtvTemp_Flty;
    }

    /* End of Switch: '<S93>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S48>/OneRead' */
    /* Outputs for Atomic SubSystem: '<S86>/EdgeRising' */
    /* Logic: '<S88>/OR1' incorporates:
     *  UnitDelay: '<S88>/Unit Delay'
     */
    rtb_NotEqual_d = !AATR_ac_DW.UnitDelay_DSTATE_cx;

    /* Update for UnitDelay: '<S88>/Unit Delay' incorporates:
     *  Constant: '<S48>/TRUE Constant1'
     */
    AATR_ac_DW.UnitDelay_DSTATE_cx = true;

    /* Outputs for Atomic SubSystem: '<S86>/Counter Reset Enabled ' */
    /* Switch: '<S87>/Switch' incorporates:
     *  Abs: '<S48>/Abs'
     *  Constant: '<S39>/Calib'
     *  Constant: '<S43>/Calib'
     *  Constant: '<S46>/Calib'
     *  Constant: '<S47>/Calib'
     *  Constant: '<S85>/Calib'
     *  Constant: '<S87>/Constant Value2'
     *  Logic: '<S48>/Logical Operator'
     *  Logic: '<S48>/Logical Operator2'
     *  Logic: '<S48>/Logical Operator3'
     *  Logic: '<S48>/Logical Operator4'
     *  Logic: '<S88>/AND'
     *  RelationalOperator: '<S48>/Relational Operator1'
     *  RelationalOperator: '<S48>/Relational Operator2'
     *  RelationalOperator: '<S48>/Relational Operator3'
     *  RelationalOperator: '<S48>/RelationalOperator'
     *  Sum: '<S48>/Add'
     *  Switch: '<S87>/Switch2'
     *  UnitDelay: '<S87>/Unit Delay'
     */
    if (rtb_NotEqual_d)
    {
        AATR_ac_DW.UnitDelay_DSTATE_hy = 0U;
    }
    else
    {
        if ((((((((KeAATR_v_OneReadMax >= VeAATI_v_VehSpd_Dial) &&
                  (VeAATI_v_VehSpd_Dial >= KeAATR_v_OneReadExitHeatSoakSpd)) &&
                 (VeAATC_b_VehicleSoaked)) && (VeAATI_b_RunCrankActive_Dial)) &&
               (KeAATR_b_EnblOneReadExitHeatSoak)) && (fabsf
                (VeAATC_T_CBC_AmbAirTempFlt_FUNC - VeAATC_T_AmbAirTemp_IV) >=
                KeAATR_dT_GarageExitHugeDelta)) && (VeAATC_T_AmbAirTemp_IV <=
                KeAATR_T_CoolantWrmUpTemp)) && ((!VeAATC_b_AmbAirTemp_IV_FA) &&
                (!VeAATI_b_CBC_AmbAirVoltFA_Dial)))
        {
            /* UnitDelay: '<S87>/Unit Delay' incorporates:
             *  Constant: '<S87>/Constant Value1'
             *  Sum: '<S87>/Subtraction'
             *  Switch: '<S87>/Switch2'
             */
            AATR_ac_DW.UnitDelay_DSTATE_hy = (uint16)(((uint32)
                AATR_ac_DW.UnitDelay_DSTATE_hy) + 1U);
        }
    }

    /* End of Switch: '<S87>/Switch' */
    /* End of Outputs for SubSystem: '<S86>/Counter Reset Enabled ' */
    /* End of Outputs for SubSystem: '<S86>/EdgeRising' */

    /* RelationalOperator: '<S86>/Relational Operator1' incorporates:
     *  Constant: '<S44>/Calib'
     *  Constant: '<S89>/Calib'
     *  Product: '<S86>/Product1'
     *  UnitDelay: '<S87>/Unit Delay'
     */
    rtb_NotEqual_d = (((float32)AATR_ac_DW.UnitDelay_DSTATE_hy) >
                      (KeAATR_t_OneReadTmrExitSoak / HeAATR_t_MedTEH));

    /* End of Outputs for SubSystem: '<S48>/OneRead' */

    /* Outputs for Atomic SubSystem: '<S48>/EdgeRising' */
    /* Logic: '<S84>/AND' incorporates:
     *  Logic: '<S84>/OR1'
     *  UnitDelay: '<S84>/Unit Delay'
     */
    VeAATR_b_InitHeatSoak_OneRead = (rtb_NotEqual_d &&
        (!AATR_ac_DW.UnitDelay_DSTATE_gq));

    /* Update for UnitDelay: '<S84>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_gq = rtb_NotEqual_d;

    /* End of Outputs for SubSystem: '<S48>/EdgeRising' */

    /* Logic: '<S32>/Logical Operator1' */
    VeAATR_b_SensorsVentilated_B4Init = ((VeAATR_b_SensorsVentilated) &&
        (VeAATI_b_RunCrankActive_Dial));

    /* Switch: '<S37>/Switch1' incorporates:
     *  Logic: '<S32>/Logical Operator2'
     */
    VeAATR_b_SensorsVentilated_AftrInit = (((VeAATR_b_InitHeatSoak_OneRead) ||
        (VeAATR_b_InitHeatSoak_VehSoaked)) || (VeAATR_b_SensorsVentilated_B4Init));

    /* Outputs for Atomic SubSystem: '<S33>/EdgeRising' */
    /* Logic: '<S95>/OR1' incorporates:
     *  UnitDelay: '<S95>/Unit Delay'
     */
    rtb_NotEqual_d = !AATR_ac_DW.UnitDelay_DSTATE_m55;

    /* Update for UnitDelay: '<S95>/Unit Delay' incorporates:
     *  Constant: '<S33>/TRUE Constant4'
     */
    AATR_ac_DW.UnitDelay_DSTATE_m55 = true;

    /* Outputs for Atomic SubSystem: '<S33>/Timer Retrigger Reset Enabled2' */
    /* Switch: '<S109>/Switch1' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S104>/Calib'
     *  Constant: '<S109>/Constant Value4'
     *  Logic: '<S95>/AND'
     *  MinMax: '<S109>/Maximum'
     *  Sum: '<S109>/Subtraction'
     *  UnitDelay: '<S109>/Unit Delay'
     */
    if (rtb_NotEqual_d)
    {
        AATR_ac_DW.UnitDelay_DSTATE_a = KeAATR_t_IV_ValidTimer_App2;
    }
    else
    {
        AATR_ac_DW.UnitDelay_DSTATE_a = fmaxf(AATR_ac_DW.UnitDelay_DSTATE_a -
            HeAATR_t_MedTEH, 0.0F);
    }

    /* End of Switch: '<S109>/Switch1' */
    /* End of Outputs for SubSystem: '<S33>/EdgeRising' */

    /* RelationalOperator: '<S109>/Greater  Than1' incorporates:
     *  Constant: '<S109>/Constant Value2'
     *  UnitDelay: '<S109>/Unit Delay'
     */
    VeAATR_b_InitTemp_Valid = (AATR_ac_DW.UnitDelay_DSTATE_a > 0.0F);

    /* End of Outputs for SubSystem: '<S33>/Timer Retrigger Reset Enabled2' */

    /* Logic: '<S33>/Logical Operator1' incorporates:
     *  Logic: '<S33>/Logical Operator2'
     */
    AATR_ac_B.LogicalOperator1 = ((!VeAATC_b_AmbAirTemp_IV_FA) &&
        (VeAATR_b_InitTemp_Valid));

#if !Rte_SysCon_Variant_AATR_6

    /* Outputs for Atomic SubSystem: '<S141>/Else_SCP_InletTemp' */
    rtb_SCP_InletTemp = AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS_k;
    rtb_SCP_InletTempFA = AATR_ac_B.VeAATI_b_SCP_InletTempFA_Dial_AS;

    /* End of Outputs for SubSystem: '<S141>/Else_SCP_InletTemp' */
#else

    /* Outputs for Atomic SubSystem: '<S141>/If_SCP_InletTemp' */
    /* DataStoreRead: '<S183>/StatusByte_BatChaCouTemSenACirHig' incorporates:
     *  DataStoreRead: '<S184>/StatusByte_BatChaCouTemSenACirLow'
     *  DataStoreRead: '<S185>/StatusByte_BatChaCouTemSnsrCkt'
     *  Logic: '<S180>/Logical Operator'
     *  Logic: '<S183>/Logical Operator'
     *  Logic: '<S184>/Logical Operator'
     *  Logic: '<S185>/Logical Operator'
     *  RelationalOperator: '<S183>/Relational Operator1'
     *  RelationalOperator: '<S183>/Relational Operator2'
     *  RelationalOperator: '<S184>/Relational Operator1'
     *  RelationalOperator: '<S184>/Relational Operator2'
     *  RelationalOperator: '<S185>/Relational Operator1'
     *  RelationalOperator: '<S185>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S183>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S183>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S184>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S184>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S185>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S185>/Bitwise Operator2'
     */
#if !Rte_SysCon_Variant_AATR_1

    /* VariantMerge generated from: '<S178>/VariantSource' incorporates:
     *  Constant: '<S183>/Constant1'
     *  Constant: '<S183>/Constant2'
     *  Constant: '<S184>/Constant1'
     *  Constant: '<S184>/Constant2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_n = ((((((sint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirLow) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirLow) & 64U) == 0U)) ||
        (((((sint32)AATR_ac_DW.StatusByte_BatChaCouTemSenACirHig) & 1) > 0) &&
         ((((uint32)AATR_ac_DW.StatusByte_BatChaCouTemSenACirHig) & 64U) == 0U)));

#else

    /* VariantMerge generated from: '<S178>/VariantSource' incorporates:
     *  Constant: '<S185>/Constant1'
     *  Constant: '<S185>/Constant2'
     *  DataStoreRead: '<S185>/StatusByte_BatChaCouTemSnsrCkt'
     *  Logic: '<S185>/Logical Operator'
     *  RelationalOperator: '<S185>/Relational Operator1'
     *  RelationalOperator: '<S185>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S185>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S185>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_n = (((((sint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSnsrCkt) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSnsrCkt) & 64U) == 0U));

#endif

    /* End of DataStoreRead: '<S183>/StatusByte_BatChaCouTemSenACirHig' */

    /* Outputs for Atomic SubSystem: '<S178>/SCP_InletTemp_Fltr' */
    /* Outputs for Atomic SubSystem: '<S182>/EdgeRising' */
    /* Logic: '<S188>/OR1' incorporates:
     *  UnitDelay: '<S188>/Unit Delay'
     */
    rtb_NotEqual_d = !AATR_ac_DW.UnitDelay_DSTATE_gai;

    /* Update for UnitDelay: '<S188>/Unit Delay' incorporates:
     *  Constant: '<S182>/TRUE Constant'
     */
    AATR_ac_DW.UnitDelay_DSTATE_gai = true;

    /* Outputs for Atomic SubSystem: '<S182>/Digital Lowpass Reset Enabled1' */
    /* Switch: '<S186>/Switch1' incorporates:
     *  Constant: '<S190>/Calib'
     *  Logic: '<S188>/AND'
     *  Product: '<S186>/Multiplication'
     *  Sum: '<S186>/Subtraction'
     *  Sum: '<S186>/Summation'
     *  UnitDelay: '<S186>/Unit Delay'
     */
    if (rtb_NotEqual_d)
    {
        AATR_ac_DW.UnitDelay_DSTATE_ge =
            AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS_k;
    }
    else
    {
        AATR_ac_DW.UnitDelay_DSTATE_ge +=
            (AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS_k -
             AATR_ac_DW.UnitDelay_DSTATE_ge) * KeAATR_k_SCP_InletTemp_Coef;
    }

    /* End of Switch: '<S186>/Switch1' */
    /* End of Outputs for SubSystem: '<S182>/Digital Lowpass Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S182>/EdgeRising' */

    /* VariantMerge generated from: '<S139>/Variant Source1' incorporates:
     *  Constant: '<S179>/Constant1'
     *  Constant: '<S179>/Constant2'
     *  Constant: '<S189>/Calib'
     *  DataStoreRead: '<S179>/StatusByte_BatChaCouTemSenACirRan'
     *  Logic: '<S179>/Logical Operator'
     *  Logic: '<S182>/Logical Operator'
     *  Logic: '<S182>/Logical Operator1'
     *  RelationalOperator: '<S179>/Relational Operator1'
     *  RelationalOperator: '<S179>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S179>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S179>/Bitwise Operator2'
     *  SignalConversion generated from: '<S141>/Variant Source1'
     *  Switch: '<S182>/Switch'
     */
    VeAATC_b_SCPDCNegtvTemp_Flty = (((KeAATR_b_SCP_Inlet_IncldDiag4FA) &&
        (rtb_VariantMerge_For_Variant_Source_Va_n || (((((sint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirRan) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirRan) & 64U) == 0U)))) ||
        (AATR_ac_B.VeAATI_b_SCP_InletTempFA_Dial_AS));

    /* End of Outputs for SubSystem: '<S178>/SCP_InletTemp_Fltr' */
    /* End of Outputs for SubSystem: '<S141>/If_SCP_InletTemp' */
#endif

    /* SignalConversion generated from: '<S141>/Variant Source1' incorporates:
     *  Inport: '<S177>/SCP_InletTemp'
     *  Inport: '<S177>/SCP_InletTempFA'
     */
#if !Rte_SysCon_Variant_AATR_6

    /* VariantMerge generated from: '<S139>/Variant Source1' */
    VeAATC_b_SCPDCNegtvTemp_Flty = rtb_SCP_InletTempFA;

#endif

    /* End of SignalConversion generated from: '<S141>/Variant Source1' */

    /* SignalConversion generated from: '<S141>/Variant Source1' */
    VeAATC_b_SCP_InletTemp_Flty = VeAATC_b_SCPDCNegtvTemp_Flty;

    /* SignalConversion generated from: '<S141>/Variant Source' */
#if Rte_SysCon_Variant_AATR_6

    /* VariantMerge generated from: '<S139>/Variant Source' */
    VeAATC_T_SCP_DCNegtvTempFlt = AATR_ac_DW.UnitDelay_DSTATE_ge;

#else

    /* VariantMerge generated from: '<S139>/Variant Source' incorporates:
     *  SignalConversion generated from: '<S141>/Variant Source'
     */
    VeAATC_T_SCP_DCNegtvTempFlt = rtb_SCP_InletTemp;

#endif

    /* End of SignalConversion generated from: '<S141>/Variant Source' */

    /* SignalConversion generated from: '<S141>/Variant Source' */
    VeAATC_T_SCP_InletTempFlt = VeAATC_T_SCP_DCNegtvTempFlt;

#if !Rte_SysCon_Variant_AATR_4

    /* Outputs for Atomic SubSystem: '<S140>/Else_SCP_DCPstvTmp' */
    rtb_SCP_DCPstvTemp = AATR_ac_B.VeAATI_T_SCP_DCPstvTemp_Dial;
    rtb_SCP_DCPstvTempFA = AATR_ac_B.VeAATI_b_SCP_DCPstvTempFA_Dial;

    /* End of Outputs for SubSystem: '<S140>/Else_SCP_DCPstvTmp' */
#else

    /* Outputs for Atomic SubSystem: '<S140>/If_SCP_DCPstvTmp' */
    /* DataStoreRead: '<S168>/StatusByte_BattChrgCouTempSnsrBCktHi' incorporates:
     *  DataStoreRead: '<S169>/StatusByte_BattChrgCouTempSnsrBCktLo'
     *  DataStoreRead: '<S170>/StatusByte_BattChrgCouTempSnsrBCkt'
     *  Logic: '<S165>/Logical Operator'
     *  Logic: '<S168>/Logical Operator'
     *  Logic: '<S169>/Logical Operator'
     *  Logic: '<S170>/Logical Operator'
     *  RelationalOperator: '<S168>/Relational Operator1'
     *  RelationalOperator: '<S168>/Relational Operator2'
     *  RelationalOperator: '<S169>/Relational Operator1'
     *  RelationalOperator: '<S169>/Relational Operator2'
     *  RelationalOperator: '<S170>/Relational Operator1'
     *  RelationalOperator: '<S170>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S168>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S168>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S169>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S169>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S170>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S170>/Bitwise Operator2'
     */
#if !Rte_SysCon_Variant_AATR_1

    /* VariantMerge generated from: '<S163>/VariantSource' incorporates:
     *  Constant: '<S168>/Constant1'
     *  Constant: '<S168>/Constant2'
     *  Constant: '<S169>/Constant1'
     *  Constant: '<S169>/Constant2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_d = ((((((sint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktLo) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktLo) & 64U) == 0U)) ||
        (((((sint32)AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktHi) & 1) > 0) &&
         ((((uint32)AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktHi) & 64U) ==
          0U)));

#else

    /* VariantMerge generated from: '<S163>/VariantSource' incorporates:
     *  Constant: '<S170>/Constant1'
     *  Constant: '<S170>/Constant2'
     *  DataStoreRead: '<S170>/StatusByte_BattChrgCouTempSnsrBCkt'
     *  Logic: '<S170>/Logical Operator'
     *  RelationalOperator: '<S170>/Relational Operator1'
     *  RelationalOperator: '<S170>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S170>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S170>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_d = (((((sint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCkt) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCkt) & 64U) == 0U));

#endif

    /* End of DataStoreRead: '<S168>/StatusByte_BattChrgCouTempSnsrBCktHi' */

    /* Outputs for Atomic SubSystem: '<S163>/SCP_DCPosTemp_Fltr' */
    /* Outputs for Atomic SubSystem: '<S167>/EdgeRising' */
    /* Logic: '<S173>/OR1' incorporates:
     *  UnitDelay: '<S173>/Unit Delay'
     */
    rtb_SCP_InletTempFA = !AATR_ac_DW.UnitDelay_DSTATE_kag;

    /* Update for UnitDelay: '<S173>/Unit Delay' incorporates:
     *  Constant: '<S167>/TRUE Constant'
     */
    AATR_ac_DW.UnitDelay_DSTATE_kag = true;

    /* Outputs for Atomic SubSystem: '<S167>/Digital Lowpass Reset Enabled1' */
    /* Switch: '<S171>/Switch1' incorporates:
     *  Constant: '<S175>/Calib'
     *  Logic: '<S173>/AND'
     *  Product: '<S171>/Multiplication'
     *  Sum: '<S171>/Subtraction'
     *  Sum: '<S171>/Summation'
     *  UnitDelay: '<S171>/Unit Delay'
     */
    if (rtb_SCP_InletTempFA)
    {
        AATR_ac_DW.UnitDelay_DSTATE_b = AATR_ac_B.VeAATI_T_SCP_DCPstvTemp_Dial;
    }
    else
    {
        AATR_ac_DW.UnitDelay_DSTATE_b += (AATR_ac_B.VeAATI_T_SCP_DCPstvTemp_Dial
            - AATR_ac_DW.UnitDelay_DSTATE_b) * KeAATR_k_SCP_DCPstvTemp_Coef;
    }

    /* End of Switch: '<S171>/Switch1' */
    /* End of Outputs for SubSystem: '<S167>/Digital Lowpass Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S167>/EdgeRising' */

    /* VariantMerge generated from: '<S139>/Variant Source1' incorporates:
     *  Constant: '<S164>/Constant1'
     *  Constant: '<S164>/Constant2'
     *  Constant: '<S174>/Calib'
     *  DataStoreRead: '<S164>/StatusByte_BattChrgCouTempSnsrBCktPerf'
     *  Logic: '<S164>/Logical Operator'
     *  Logic: '<S167>/Logical Operator'
     *  Logic: '<S167>/Logical Operator1'
     *  RelationalOperator: '<S164>/Relational Operator1'
     *  RelationalOperator: '<S164>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S164>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S164>/Bitwise Operator2'
     *  SignalConversion generated from: '<S140>/Variant Source1'
     *  Switch: '<S167>/Switch'
     */
    VeAATC_b_SCPDCNegtvTemp_Flty = (((KeAATR_b_SCP_DCPstv_IncldDiag4FA) &&
        (rtb_VariantMerge_For_Variant_Source_Va_d || (((((sint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktPerf) & 1) > 0) &&
        ((((uint32)AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktPerf) & 64U) ==
         0U)))) || (AATR_ac_B.VeAATI_b_SCP_DCPstvTempFA_Dial));

    /* End of Outputs for SubSystem: '<S163>/SCP_DCPosTemp_Fltr' */
    /* End of Outputs for SubSystem: '<S140>/If_SCP_DCPstvTmp' */
#endif

    /* SignalConversion generated from: '<S140>/Variant Source1' incorporates:
     *  Inport: '<S162>/SCP_DCPstvTemp'
     *  Inport: '<S162>/SCP_DCPstvTempFA'
     */
#if !Rte_SysCon_Variant_AATR_4

    /* VariantMerge generated from: '<S139>/Variant Source1' */
    VeAATC_b_SCPDCNegtvTemp_Flty = rtb_SCP_DCPstvTempFA;

#endif

    /* End of SignalConversion generated from: '<S140>/Variant Source1' */

    /* SignalConversion generated from: '<S140>/Variant Source1' */
    VeAATC_b_SCP_DCPstvTemp_Flty = VeAATC_b_SCPDCNegtvTemp_Flty;

    /* SignalConversion generated from: '<S140>/Variant Source' */
#if Rte_SysCon_Variant_AATR_4

    /* VariantMerge generated from: '<S139>/Variant Source' */
    VeAATC_T_SCP_DCNegtvTempFlt = AATR_ac_DW.UnitDelay_DSTATE_b;

#else

    /* VariantMerge generated from: '<S139>/Variant Source' incorporates:
     *  SignalConversion generated from: '<S140>/Variant Source'
     */
    VeAATC_T_SCP_DCNegtvTempFlt = rtb_SCP_DCPstvTemp;

#endif

    /* End of SignalConversion generated from: '<S140>/Variant Source' */

    /* SignalConversion generated from: '<S140>/Variant Source' */
    VeAATC_T_SCP_DCPstvTempFlt = VeAATC_T_SCP_DCNegtvTempFlt;

#if !Rte_SysCon_Variant_AATR_2

    /* Outputs for Atomic SubSystem: '<S139>/Else_SCP_DCNgtvTmp' */
    rtb_SCP_DCNegtvTemp = AATR_ac_B.VeAATI_T_SCP_DCNegtvTemp_Dial;
    rtb_SCP_DCNegtvTempFA = AATR_ac_B.VeAATI_b_SCP_DCNegtvTempFA_Dial;

    /* End of Outputs for SubSystem: '<S139>/Else_SCP_DCNgtvTmp' */
#else

    /* Outputs for Atomic SubSystem: '<S139>/If_SCP_DCPNgtvTmp' */
    /* DataStoreRead: '<S153>/StatusByte_BattChrgCouTempSnsrCCktHi' incorporates:
     *  DataStoreRead: '<S154>/StatusByte_BattChrgCouTempSnsrCCktLo'
     *  DataStoreRead: '<S155>/StatusByte_BattChrgCouTempSnsrCCkt'
     *  Logic: '<S150>/Logical Operator'
     *  Logic: '<S153>/Logical Operator'
     *  Logic: '<S154>/Logical Operator'
     *  Logic: '<S155>/Logical Operator'
     *  RelationalOperator: '<S153>/Relational Operator1'
     *  RelationalOperator: '<S153>/Relational Operator2'
     *  RelationalOperator: '<S154>/Relational Operator1'
     *  RelationalOperator: '<S154>/Relational Operator2'
     *  RelationalOperator: '<S155>/Relational Operator1'
     *  RelationalOperator: '<S155>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S153>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S154>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S154>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S155>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S155>/Bitwise Operator2'
     */
#if !Rte_SysCon_Variant_AATR_1

    /* VariantMerge generated from: '<S148>/VariantSource' incorporates:
     *  Constant: '<S153>/Constant1'
     *  Constant: '<S153>/Constant2'
     *  Constant: '<S154>/Constant1'
     *  Constant: '<S154>/Constant2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a = ((((((sint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktHi) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktHi) & 64U) == 0U)) ||
        (((((sint32)AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktLo) & 1) > 0) &&
         ((((uint32)AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktLo) & 64U) ==
          0U)));

#else

    /* VariantMerge generated from: '<S148>/VariantSource' incorporates:
     *  Constant: '<S155>/Constant1'
     *  Constant: '<S155>/Constant2'
     *  DataStoreRead: '<S155>/StatusByte_BattChrgCouTempSnsrCCkt'
     *  Logic: '<S155>/Logical Operator'
     *  RelationalOperator: '<S155>/Relational Operator1'
     *  RelationalOperator: '<S155>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S155>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S155>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a = (((((sint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCkt) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCkt) & 64U) == 0U));

#endif

    /* End of DataStoreRead: '<S153>/StatusByte_BattChrgCouTempSnsrCCktHi' */

    /* Outputs for Atomic SubSystem: '<S148>/SCP_DCNegTemp_Fltr' */
    /* Outputs for Atomic SubSystem: '<S152>/EdgeRising' */
    /* Logic: '<S158>/OR1' incorporates:
     *  UnitDelay: '<S158>/Unit Delay'
     */
    rtb_SCP_DCPstvTempFA = !AATR_ac_DW.UnitDelay_DSTATE_ei;

    /* Update for UnitDelay: '<S158>/Unit Delay' incorporates:
     *  Constant: '<S152>/TRUE Constant'
     */
    AATR_ac_DW.UnitDelay_DSTATE_ei = true;

    /* Outputs for Atomic SubSystem: '<S152>/Digital Lowpass Reset Enabled1' */
    /* Switch: '<S156>/Switch1' incorporates:
     *  Constant: '<S160>/Calib'
     *  Logic: '<S158>/AND'
     *  Product: '<S156>/Multiplication'
     *  Sum: '<S156>/Subtraction'
     *  Sum: '<S156>/Summation'
     *  UnitDelay: '<S156>/Unit Delay'
     */
    if (rtb_SCP_DCPstvTempFA)
    {
        AATR_ac_DW.UnitDelay_DSTATE_dd = AATR_ac_B.VeAATI_T_SCP_DCNegtvTemp_Dial;
    }
    else
    {
        AATR_ac_DW.UnitDelay_DSTATE_dd +=
            (AATR_ac_B.VeAATI_T_SCP_DCNegtvTemp_Dial -
             AATR_ac_DW.UnitDelay_DSTATE_dd) * KeAATR_k_SCP_DCNegtvTemp_Coef;
    }

    /* End of Switch: '<S156>/Switch1' */
    /* End of Outputs for SubSystem: '<S152>/Digital Lowpass Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S152>/EdgeRising' */

    /* VariantMerge generated from: '<S139>/Variant Source1' incorporates:
     *  Constant: '<S149>/Constant1'
     *  Constant: '<S149>/Constant2'
     *  Constant: '<S159>/Calib'
     *  DataStoreRead: '<S149>/StatusByte_BattChrgCouTempSnsrCCktPerf'
     *  Logic: '<S149>/Logical Operator'
     *  Logic: '<S152>/Logical Operator'
     *  Logic: '<S152>/Logical Operator1'
     *  RelationalOperator: '<S149>/Relational Operator1'
     *  RelationalOperator: '<S149>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S149>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S149>/Bitwise Operator2'
     *  SignalConversion generated from: '<S139>/Variant Source1'
     *  Switch: '<S152>/Switch'
     */
    VeAATC_b_SCPDCNegtvTemp_Flty = (((KeAATR_b_SCP_DCNegtv_IncldDiag4FA) &&
        (rtb_VariantMerge_For_Variant_Source_Va_a || (((((sint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktPerf) & 1) > 0) &&
        ((((uint32)AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktPerf) & 64U) ==
         0U)))) || (AATR_ac_B.VeAATI_b_SCP_DCNegtvTempFA_Dial));

    /* End of Outputs for SubSystem: '<S148>/SCP_DCNegTemp_Fltr' */

    /* VariantMerge generated from: '<S139>/Variant Source' incorporates:
     *  SignalConversion generated from: '<S139>/Variant Source'
     */
    VeAATC_T_SCP_DCNegtvTempFlt = AATR_ac_DW.UnitDelay_DSTATE_dd;

    /* End of Outputs for SubSystem: '<S139>/If_SCP_DCPNgtvTmp' */
#endif

    /* SignalConversion generated from: '<S139>/Variant Source1' incorporates:
     *  Inport: '<S147>/SCP_DCNegtvTemp'
     *  Inport: '<S147>/SCP_DCNegtvTempFA'
     *  SignalConversion generated from: '<S139>/Variant Source'
     * */
#if !Rte_SysCon_Variant_AATR_2

    /* VariantMerge generated from: '<S139>/Variant Source1' */
    VeAATC_b_SCPDCNegtvTemp_Flty = rtb_SCP_DCNegtvTempFA;

    /* VariantMerge generated from: '<S139>/Variant Source' */
    VeAATC_T_SCP_DCNegtvTempFlt = rtb_SCP_DCNegtvTemp;

#endif

    /* End of SignalConversion generated from: '<S139>/Variant Source1' */

    /* Update for UnitDelay: '<S33>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_g3 = rtb_TmpSignalConversionAtVeAATR_b_CBC_Am;

    /* VariantMerge generated from: '<S17>/Variant Source2' */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varia_ij =
        VeAATC_T_CBC_AmbAirTempRaw;

    /* End of Outputs for SubSystem: '<S17>/AATC_Proc_and_Init' */
#elif !Rte_SysCon_Variant_AATR_8 && Rte_SysCon_Variant_AATR_9

    /* VariantMerge generated from: '<S17>/Variant Source2' incorporates:
     *  SignalConversion generated from: '<S17>/Variant Source2'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varia_ij =
        VeAATC_T_CBC_AmbAirTempRaw_MSG;

#endif

    /* End of SignalConversion generated from: '<S17>/Variant Source2' */
#if Rte_SysCon_Variant_AATR_8

    /* Outputs for Function Call SubSystem: '<S1>/Diagnostics1' */
    /* DataStoreRead: '<S400>/StatusByte_AAT_SnsrCktLo' incorporates:
     *  DataStoreRead: '<S399>/StatusByte_AAT_SnsrCktHi'
     *  Logic: '<S387>/Logical Operator'
     *  Logic: '<S387>/Logical Operator1'
     *  Logic: '<S387>/Logical Operator2'
     *  Logic: '<S399>/Logical Operator'
     *  Logic: '<S400>/Logical Operator'
     *  RelationalOperator: '<S399>/Relational Operator1'
     *  RelationalOperator: '<S399>/Relational Operator2'
     *  RelationalOperator: '<S400>/Relational Operator1'
     *  RelationalOperator: '<S400>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S399>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S399>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S400>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S400>/Bitwise Operator2'
     */
#if !Rte_SysCon_Variant_AATR_1

    /* Logic: '<S387>/Logical Operator2' incorporates:
     *  Constant: '<S399>/Constant1'
     *  Constant: '<S399>/Constant2'
     *  Constant: '<S400>/Constant1'
     *  Constant: '<S400>/Constant2'
     *  Constant: '<S401>/Calib'
     *  Constant: '<S402>/Calib'
     */
    rtb_LogicalOperator2 = (((((((sint32)AATR_ac_DW.StatusByte_AAT_SnsrCktLo) &
        1) > 0) && ((((uint32)AATR_ac_DW.StatusByte_AAT_SnsrCktLo) & 64U) == 0U))
        && (KeAATR_b_IUMPR_CBCAATPerf_CBCShrtLow_Enbl)) || ((((((sint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCktHi) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCktHi) & 64U) == 0U)) &&
        (KeAATR_b_IUMPR_CBCAATPerf_CBCShrtHi_Enbl)));

#endif

    /* End of DataStoreRead: '<S400>/StatusByte_AAT_SnsrCktLo' */

    /* DataStoreRead: '<S395>/StatusByte_HiSpdFD_CAN3CommBusPerf' incorporates:
     *  DataStoreRead: '<S391>/StatusByte_HiSpdCANCommBus'
     *  DataStoreRead: '<S394>/StatusByte_HiSpdFD_CAN3CommBus'
     *  Logic: '<S386>/Logical Operator1'
     *  Logic: '<S391>/Logical Operator'
     *  Logic: '<S394>/Logical Operator'
     *  Logic: '<S395>/Logical Operator'
     *  RelationalOperator: '<S391>/Relational Operator1'
     *  RelationalOperator: '<S391>/Relational Operator2'
     *  RelationalOperator: '<S394>/Relational Operator1'
     *  RelationalOperator: '<S394>/Relational Operator2'
     *  RelationalOperator: '<S395>/Relational Operator1'
     *  RelationalOperator: '<S395>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S391>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S391>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S394>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S394>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S395>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S395>/Bitwise Operator2'
     */
#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_20

    /* Logic: '<S1043>/Logical Operator15' incorporates:
     *  Constant: '<S394>/Constant1'
     *  Constant: '<S394>/Constant2'
     *  Constant: '<S395>/Constant1'
     *  Constant: '<S395>/Constant2'
     */
    rtb_LogicalOperator15_d = ((((((sint32)
        AATR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf) & 64U) == 0U)) &&
        (((((sint32)AATR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus) & 1) > 0) &&
         ((((uint32)AATR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus) & 64U) == 0U)));

#elif !Rte_SysCon_Variant_AATR_1 && !Rte_SysCon_Variant_AATR_20

    /* Logic: '<S1043>/Logical Operator15' incorporates:
     *  Constant: '<S391>/Constant1'
     *  Constant: '<S391>/Constant2'
     *  DataStoreRead: '<S391>/StatusByte_HiSpdCANCommBus'
     *  Logic: '<S391>/Logical Operator'
     *  RelationalOperator: '<S391>/Relational Operator1'
     *  RelationalOperator: '<S391>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S391>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S391>/Bitwise Operator2'
     */
    rtb_LogicalOperator15_d = (((((sint32)AATR_ac_DW.StatusByte_HiSpdCANCommBus)
        & 1) > 0) && ((((uint32)AATR_ac_DW.StatusByte_HiSpdCANCommBus) & 64U) ==
                      0U));

#endif

    /* End of DataStoreRead: '<S395>/StatusByte_HiSpdFD_CAN3CommBusPerf' */

    /* Logic: '<S386>/Logical Operator2' incorporates:
     *  DataStoreRead: '<S392>/StatusByte_InvData_BCM'
     *  DataStoreRead: '<S393>/StatusByte_LostCommBCM'
     *  DataStoreRead: '<S412>/StatusByte_AAT_SnsrCkt_B_Hi'
     *  DataStoreRead: '<S413>/StatusByte_AAT_SnsrCkt_B_Lo'
     *  DataStoreRead: '<S414>/StatusByte_AAT_SnsrCkt_B_Perf'
     *  DataStoreRead: '<S418>/StatusByte_BatChaCouTemSenACirHig'
     *  DataStoreRead: '<S419>/StatusByte_BatChaCouTemSenACirLow'
     *  DataStoreRead: '<S420>/StatusByte_BatChaCouTemSenACirRan'
     *  Logic: '<S386>/Logical Operator3'
     *  Logic: '<S386>/Logical Operator4'
     *  Logic: '<S386>/Logical Operator9'
     *  Logic: '<S390>/Logical Operator5'
     *  Logic: '<S392>/Logical Operator'
     *  Logic: '<S393>/Logical Operator'
     *  Logic: '<S406>/Logical Operator10'
     *  Logic: '<S406>/Logical Operator11'
     *  Logic: '<S406>/Logical Operator5'
     *  Logic: '<S406>/Logical Operator9'
     *  Logic: '<S407>/Logical Operator11'
     *  Logic: '<S407>/Logical Operator5'
     *  Logic: '<S407>/Logical Operator6'
     *  Logic: '<S407>/Logical Operator9'
     *  Logic: '<S412>/Logical Operator'
     *  Logic: '<S413>/Logical Operator'
     *  Logic: '<S414>/Logical Operator'
     *  Logic: '<S418>/Logical Operator'
     *  Logic: '<S419>/Logical Operator'
     *  Logic: '<S420>/Logical Operator'
     *  RelationalOperator: '<S392>/Relational Operator1'
     *  RelationalOperator: '<S392>/Relational Operator2'
     *  RelationalOperator: '<S393>/Relational Operator1'
     *  RelationalOperator: '<S393>/Relational Operator2'
     *  RelationalOperator: '<S412>/Relational Operator1'
     *  RelationalOperator: '<S412>/Relational Operator2'
     *  RelationalOperator: '<S413>/Relational Operator1'
     *  RelationalOperator: '<S413>/Relational Operator2'
     *  RelationalOperator: '<S414>/Relational Operator1'
     *  RelationalOperator: '<S414>/Relational Operator2'
     *  RelationalOperator: '<S418>/Relational Operator1'
     *  RelationalOperator: '<S418>/Relational Operator2'
     *  RelationalOperator: '<S419>/Relational Operator1'
     *  RelationalOperator: '<S419>/Relational Operator2'
     *  RelationalOperator: '<S420>/Relational Operator1'
     *  RelationalOperator: '<S420>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S392>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S392>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S393>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S393>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S412>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S412>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S413>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S413>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S414>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S414>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S418>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S418>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S419>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S419>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S420>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S420>/Bitwise Operator2'
     *  Switch: '<S424>/Switch1'
     *  Switch: '<S425>/Switch1'
     *  Switch: '<S426>/Switch1'
     */
#if !Rte_SysCon_Variant_AATR_1

    /* Logic: '<S386>/Logical Operator9' incorporates:
     *  Constant: '<S392>/Constant1'
     *  Constant: '<S392>/Constant2'
     *  Constant: '<S393>/Constant1'
     *  Constant: '<S393>/Constant2'
     *  Constant: '<S396>/Calib'
     *  Constant: '<S397>/Calib'
     *  Constant: '<S398>/Calib'
     */
    rtb_LogicalOperator9_g = (((rtb_LogicalOperator15_d &&
        (KeAATR_b_IUMPR_CBCAATPerf_CANCBusoff_Enbl)) || ((((((sint32)
        AATR_ac_DW.StatusByte_LostCommBCM) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_LostCommBCM) & 64U) == 0U)) &&
        (KeAATR_b_IUMPR_CBCAATPerf_LOCwBCM_Enbl))) || ((((((sint32)
        AATR_ac_DW.StatusByte_InvData_BCM) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_InvData_BCM) & 64U) == 0U)) &&
        (KeAATR_b_IUMPR_CBCAATPerf_InvBCM_Enbl)));

    /* Switch: '<S501>/Switch1' incorporates:
     *  Constant: '<S412>/Constant1'
     *  Constant: '<S412>/Constant2'
     *  Constant: '<S413>/Constant1'
     *  Constant: '<S413>/Constant2'
     *  Constant: '<S414>/Constant1'
     *  Constant: '<S414>/Constant2'
     *  Constant: '<S415>/Calib'
     *  Constant: '<S416>/Calib'
     *  Constant: '<S417>/Calib'
     */
    rtb_Switch1_on = (sint16)(((((((((sint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCkt_B_Perf) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCkt_B_Perf) & 64U) == 0U)) &&
        (KeAATR_b_IUMPR_CBCAATPerf_SCPAATPerf_Enbl)) || ((((((sint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCkt_B_Lo) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCkt_B_Lo) & 64U) == 0U)) &&
        (KeAATR_b_IUMPR_CBCAATPerf_SCPAATShrtLo_Enbl))) || ((((((sint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCkt_B_Hi) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCkt_B_Hi) & 64U) == 0U)) &&
        (KeAATR_b_IUMPR_CBCAATPerf_SCPAATShrtHi_Enbl))) ? 1 : 0);

    /* Switch: '<S500>/Switch1' incorporates:
     *  Constant: '<S418>/Constant1'
     *  Constant: '<S418>/Constant2'
     *  Constant: '<S419>/Constant1'
     *  Constant: '<S419>/Constant2'
     *  Constant: '<S420>/Constant1'
     *  Constant: '<S420>/Constant2'
     *  Constant: '<S421>/Calib'
     *  Constant: '<S422>/Calib'
     *  Constant: '<S423>/Calib'
     */
    rtb_Switch1_c0 = (sint16)(((((((((sint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirRan) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirRan) & 64U) == 0U)) &&
        (KeAATR_b_IUMPR_CBCAATPerf_SCPInletPerf_Enbl)) || ((((((sint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirLow) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirLow) & 64U) == 0U)) &&
        (KeAATR_b_IUMPR_CBCAATPerf_SCPInletShrtLo_Enbl))) || ((((((sint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirHig) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirHig) & 64U) == 0U)) &&
        (KeAATR_b_IUMPR_CBCAATPerf_SCPInletShrtHi_Enbl))) ? 1 : 0);

    /* Switch: '<S499>/Switch1' incorporates:
     *  Constant: '<S405>/Calib'
     */
    rtb_Switch1_a = (sint16)(((VeAATI_b_ECM_IntakeTempFA_Dial) &&
        (KeAATR_b_IUMPR_CBCAATPerf_IntakeFA_Enbl)) ? 1 : 0);

#endif

    /* End of Logic: '<S386>/Logical Operator2' */

    /* SignalConversion generated from: '<S20>/Init_Valid' */
#if !Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_8

    /* Logic: '<S1043>/Logical Operator15' */
    rtb_LogicalOperator15_d = AATR_ac_B.LogicalOperator1;

#elif !(!Rte_SysCon_Variant_AATR_1) || !Rte_SysCon_Variant_AATR_8

    /* Logic: '<S1043>/Logical Operator15' incorporates:
     *  SignalConversion generated from: '<S20>/Init_Valid'
     */
    rtb_LogicalOperator15_d = false;

#endif

    /* End of SignalConversion generated from: '<S20>/Init_Valid' */

    /* Logic: '<S382>/Logical Operator' incorporates:
     *  Constant: '<S467>/Calib'
     *  Constant: '<S511>/Calib'
     *  DataStoreRead: '<S442>/StatusByte_AAT_SnsrCktHi'
     *  DataStoreRead: '<S443>/StatusByte_AAT_SnsrCktLo'
     *  DataStoreRead: '<S444>/StatusByte_AAT_SnsrPerf'
     *  DataStoreRead: '<S448>/StatusByte_BatChaCouTemSenACirHig'
     *  DataStoreRead: '<S449>/StatusByte_BatChaCouTemSenACirLow'
     *  DataStoreRead: '<S450>/StatusByte_BatChaCouTemSenACirRan'
     *  DataStoreRead: '<S459>/StatusByte_InvData_CPIMGen2'
     *  DataStoreRead: '<S460>/StatusByte_LostCommCPIM'
     *  DataStoreRead: '<S468>/StatusByte_AAT_SnsrCkt_B_Hi'
     *  DataStoreRead: '<S469>/StatusByte_AAT_SnsrCkt_B_Lo'
     *  DataStoreRead: '<S486>/StatusByte_AAT_SnsrCktHi'
     *  DataStoreRead: '<S487>/StatusByte_AAT_SnsrCktLo'
     *  DataStoreRead: '<S488>/StatusByte_AAT_SnsrPerf'
     *  DataStoreRead: '<S492>/StatusByte_AAT_SnsrCkt_B_Hi'
     *  DataStoreRead: '<S493>/StatusByte_AAT_SnsrCkt_B_Lo'
     *  DataStoreRead: '<S494>/StatusByte_AAT_SnsrCkt_B_Perf'
     *  DataStoreRead: '<S503>/StatusByte_InvData_CPIMGen2'
     *  DataStoreRead: '<S504>/StatusByte_LostCommCPIM'
     *  DataStoreRead: '<S512>/StatusByte_BatChaCouTemSenACirHig'
     *  DataStoreRead: '<S513>/StatusByte_BatChaCouTemSenACirLow'
     *  Logic: '<S383>/Logical Operator7'
     *  Logic: '<S383>/Logical Operator8'
     *  Logic: '<S384>/Logical Operator7'
     *  Logic: '<S384>/Logical Operator8'
     *  Logic: '<S385>/Logical Operator7'
     *  Logic: '<S385>/Logical Operator8'
     *  Logic: '<S390>/Logical Operator6'
     *  Logic: '<S430>/Logical Operator5'
     *  Logic: '<S430>/Logical Operator6'
     *  Logic: '<S431>/Logical Operator2'
     *  Logic: '<S431>/Logical Operator3'
     *  Logic: '<S431>/Logical Operator4'
     *  Logic: '<S431>/Logical Operator9'
     *  Logic: '<S432>/Logical Operator'
     *  Logic: '<S432>/Logical Operator1'
     *  Logic: '<S432>/Logical Operator2'
     *  Logic: '<S433>/Logical Operator10'
     *  Logic: '<S433>/Logical Operator11'
     *  Logic: '<S433>/Logical Operator5'
     *  Logic: '<S433>/Logical Operator9'
     *  Logic: '<S437>/Logical Operator11'
     *  Logic: '<S437>/Logical Operator5'
     *  Logic: '<S437>/Logical Operator6'
     *  Logic: '<S437>/Logical Operator9'
     *  Logic: '<S442>/Logical Operator'
     *  Logic: '<S443>/Logical Operator'
     *  Logic: '<S444>/Logical Operator'
     *  Logic: '<S448>/Logical Operator'
     *  Logic: '<S449>/Logical Operator'
     *  Logic: '<S450>/Logical Operator'
     *  Logic: '<S459>/Logical Operator'
     *  Logic: '<S460>/Logical Operator'
     *  Logic: '<S468>/Logical Operator'
     *  Logic: '<S469>/Logical Operator'
     *  Logic: '<S474>/Logical Operator12'
     *  Logic: '<S474>/Logical Operator5'
     *  Logic: '<S475>/Logical Operator2'
     *  Logic: '<S475>/Logical Operator3'
     *  Logic: '<S475>/Logical Operator4'
     *  Logic: '<S475>/Logical Operator9'
     *  Logic: '<S476>/Logical Operator'
     *  Logic: '<S476>/Logical Operator1'
     *  Logic: '<S476>/Logical Operator2'
     *  Logic: '<S477>/Logical Operator10'
     *  Logic: '<S477>/Logical Operator13'
     *  Logic: '<S477>/Logical Operator5'
     *  Logic: '<S477>/Logical Operator9'
     *  Logic: '<S481>/Logical Operator11'
     *  Logic: '<S481>/Logical Operator12'
     *  Logic: '<S481>/Logical Operator13'
     *  Logic: '<S481>/Logical Operator6'
     *  Logic: '<S486>/Logical Operator'
     *  Logic: '<S487>/Logical Operator'
     *  Logic: '<S488>/Logical Operator'
     *  Logic: '<S492>/Logical Operator'
     *  Logic: '<S493>/Logical Operator'
     *  Logic: '<S494>/Logical Operator'
     *  Logic: '<S503>/Logical Operator'
     *  Logic: '<S504>/Logical Operator'
     *  Logic: '<S512>/Logical Operator'
     *  Logic: '<S513>/Logical Operator'
     *  MultiPortSwitch: '<S458>/Multiport Switch'
     *  MultiPortSwitch: '<S502>/Multiport Switch'
     *  RelationalOperator: '<S390>/Relational Operator'
     *  RelationalOperator: '<S430>/Relational Operator'
     *  RelationalOperator: '<S442>/Relational Operator1'
     *  RelationalOperator: '<S442>/Relational Operator2'
     *  RelationalOperator: '<S443>/Relational Operator1'
     *  RelationalOperator: '<S443>/Relational Operator2'
     *  RelationalOperator: '<S444>/Relational Operator1'
     *  RelationalOperator: '<S444>/Relational Operator2'
     *  RelationalOperator: '<S448>/Relational Operator1'
     *  RelationalOperator: '<S448>/Relational Operator2'
     *  RelationalOperator: '<S449>/Relational Operator1'
     *  RelationalOperator: '<S449>/Relational Operator2'
     *  RelationalOperator: '<S450>/Relational Operator1'
     *  RelationalOperator: '<S450>/Relational Operator2'
     *  RelationalOperator: '<S459>/Relational Operator1'
     *  RelationalOperator: '<S459>/Relational Operator2'
     *  RelationalOperator: '<S460>/Relational Operator1'
     *  RelationalOperator: '<S460>/Relational Operator2'
     *  RelationalOperator: '<S468>/Relational Operator1'
     *  RelationalOperator: '<S468>/Relational Operator2'
     *  RelationalOperator: '<S469>/Relational Operator1'
     *  RelationalOperator: '<S469>/Relational Operator2'
     *  RelationalOperator: '<S474>/Relational Operator'
     *  RelationalOperator: '<S486>/Relational Operator1'
     *  RelationalOperator: '<S486>/Relational Operator2'
     *  RelationalOperator: '<S487>/Relational Operator1'
     *  RelationalOperator: '<S487>/Relational Operator2'
     *  RelationalOperator: '<S488>/Relational Operator1'
     *  RelationalOperator: '<S488>/Relational Operator2'
     *  RelationalOperator: '<S492>/Relational Operator1'
     *  RelationalOperator: '<S492>/Relational Operator2'
     *  RelationalOperator: '<S493>/Relational Operator1'
     *  RelationalOperator: '<S493>/Relational Operator2'
     *  RelationalOperator: '<S494>/Relational Operator1'
     *  RelationalOperator: '<S494>/Relational Operator2'
     *  RelationalOperator: '<S503>/Relational Operator1'
     *  RelationalOperator: '<S503>/Relational Operator2'
     *  RelationalOperator: '<S504>/Relational Operator1'
     *  RelationalOperator: '<S504>/Relational Operator2'
     *  RelationalOperator: '<S512>/Relational Operator1'
     *  RelationalOperator: '<S512>/Relational Operator2'
     *  RelationalOperator: '<S513>/Relational Operator1'
     *  RelationalOperator: '<S513>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S442>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S442>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S443>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S443>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S444>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S444>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S448>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S448>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S449>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S449>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S450>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S450>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S459>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S459>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S460>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S460>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S468>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S468>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S469>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S469>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S486>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S486>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S487>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S487>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S488>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S488>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S492>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S492>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S493>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S493>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S494>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S494>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S503>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S503>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S504>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S504>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S512>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S512>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S513>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S513>/Bitwise Operator2'
     *  SignalConversion generated from: '<S375>/Variant Source'
     *  Sum: '<S390>/Add'
     *  Sum: '<S430>/Add'
     *  Sum: '<S474>/Add'
     *  Switch: '<S427>/Switch1'
     *  Switch: '<S454>/Switch1'
     *  Switch: '<S455>/Switch1'
     *  Switch: '<S456>/Switch1'
     *  Switch: '<S457>/Switch1'
     *  Switch: '<S498>/Switch1'
     *  Switch: '<S499>/Switch1'
     *  Switch: '<S500>/Switch1'
     *  Switch: '<S501>/Switch1'
     */
#if !Rte_SysCon_Variant_AATR_1

    /* Logic: '<S1043>/Logical Operator15' */
    rtb_LogicalOperator15_d = !rtb_LogicalOperator15_d;

    /* Logic: '<S378>/AND' incorporates:
     *  Constant: '<S388>/Calib'
     *  Constant: '<S389>/Calib'
     *  Constant: '<S403>/Calib'
     *  Constant: '<S404>/Calib'
     */
    AATR_ac_B.AND_f = ((((rtb_LogicalOperator2 || rtb_LogicalOperator9_g) ||
                         ((((((sint32)rtb_Switch1_on) + ((sint32)rtb_Switch1_c0))
                            + ((sint32)rtb_Switch1_a)) + ((sint32)
                            ((rtb_LogicalOperator15_d &&
        (KeAATR_b_IUMPR_CBCAATPerf_InitFA_Enbl)) ? 1 : 0))) >= ((sint32)
                           KeAATR_Cnt_IUMPR_AATPerf_MaxDTCSet))) ||
                        (KeAATR_b_IUMPR_CBCAATPerf_Ovrrd)) &&
                       (KeAATR_b_IUMPR_CBCAATPerf_Enbl));
    switch (HeAATR_i_SCP_LINBusOff_Slct)
    {
      case 1:
        /* Logic: '<S1043>/Logical Operator13' incorporates:
         *  Constant: '<S464>/Constant1'
         *  Constant: '<S464>/Constant2'
         *  DataStoreRead: '<S464>/StatusByte_LIN1_BusOff'
         *  Logic: '<S464>/Logical Operator'
         *  RelationalOperator: '<S464>/Relational Operator1'
         *  RelationalOperator: '<S464>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S464>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S464>/Bitwise Operator2'
         */
        rtb_VariantMerge_For_Variant_Source_Va_a = (((((sint32)
            AATR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0) && ((((uint32)
            AATR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U));
        break;

      case 2:
        /* Logic: '<S1043>/Logical Operator13' incorporates:
         *  Constant: '<S465>/Constant1'
         *  Constant: '<S465>/Constant2'
         *  DataStoreRead: '<S465>/StatusByte_LIN2_BusOff'
         *  Logic: '<S465>/Logical Operator'
         *  RelationalOperator: '<S465>/Relational Operator1'
         *  RelationalOperator: '<S465>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S465>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S465>/Bitwise Operator2'
         */
        rtb_VariantMerge_For_Variant_Source_Va_a = (((((sint32)
            AATR_ac_DW.StatusByte_LIN2_BusOff) & 1) > 0) && ((((uint32)
            AATR_ac_DW.StatusByte_LIN2_BusOff) & 64U) == 0U));
        break;

      case 3:
        /* Logic: '<S1043>/Logical Operator13' incorporates:
         *  Constant: '<S466>/Constant1'
         *  Constant: '<S466>/Constant2'
         *  DataStoreRead: '<S466>/StatusByte_LIN3_BusOff'
         *  Logic: '<S466>/Logical Operator'
         *  RelationalOperator: '<S466>/Relational Operator1'
         *  RelationalOperator: '<S466>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S466>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S466>/Bitwise Operator2'
         */
        rtb_VariantMerge_For_Variant_Source_Va_a = (((((sint32)
            AATR_ac_DW.StatusByte_LIN3_BusOff) & 1) > 0) && ((((uint32)
            AATR_ac_DW.StatusByte_LIN3_BusOff) & 64U) == 0U));
        break;

      default:
        /* Logic: '<S1043>/Logical Operator13' incorporates:
         *  Constant: '<S458>/FALSE Constant1'
         */
        rtb_VariantMerge_For_Variant_Source_Va_a = false;
        break;
    }

    i = ((sint32)AATR_ac_DW.StatusByte_BatChaCouTemSenACirLow) & 1;
    rtb_VariantMerge_For_Variant_Source_Va_0 = ((uint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirLow) & 64U;
    rtb_VariantMerge_For_Variant_Source_Va_1 = ((sint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirHig) & 1;
    rtb_VariantMerge_For_Variant_Source_Va_2 = ((uint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirHig) & 64U;
    rtb_VariantMerge_For_Variant_Source_Va_3 = ((sint32)
        AATR_ac_DW.StatusByte_InvData_CPIMGen2) & 1;
    rtb_VariantMerge_For_Variant_Source_Va_4 = ((uint32)
        AATR_ac_DW.StatusByte_InvData_CPIMGen2) & 64U;
    rtb_VariantMerge_For_Variant_Source_Va_5 = ((sint32)
        AATR_ac_DW.StatusByte_LostCommCPIM) & 1;
    rtb_VariantMerge_For_Variant_Source_Va_6 = ((uint32)
        AATR_ac_DW.StatusByte_LostCommCPIM) & 64U;
    rtb_VariantMerge_For_Variant_Source_Va_7 = ((sint32)
        AATR_ac_DW.StatusByte_AAT_SnsrPerf) & 1;
    rtb_VariantMerge_For_Variant_Source_Va_8 = ((uint32)
        AATR_ac_DW.StatusByte_AAT_SnsrPerf) & 64U;
    rtb_VariantMerge_For_Variant_Source_Va_9 = ((sint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCktLo) & 1;
    rtb_VariantMerge_For_Variant_Source_Va_b = ((uint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCktLo) & 64U;
    rtb_VariantMerge_For_Variant_Source_Va_c = ((sint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCktHi) & 1;
    rtb_VariantMerge_For_Variant_Source_Va_e = ((uint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCktHi) & 64U;
    rtb_VariantMerge_For_Variant_Source_Va_f = ((sint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCkt_B_Lo) & 1;
    rtb_VariantMerge_For_Variant_Source_Va_i = ((uint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCkt_B_Lo) & 64U;
    rtb_VariantMerge_For_Variant_Source_Va_j = ((sint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCkt_B_Hi) & 1;
    rtb_VariantMerge_For_Variant_Source_Va_k = ((uint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCkt_B_Hi) & 64U;

    /* Logic: '<S379>/AND' incorporates:
     *  Constant: '<S428>/Calib'
     *  Constant: '<S429>/Calib'
     *  Constant: '<S434>/Calib'
     *  Constant: '<S435>/Calib'
     *  Constant: '<S436>/Calib'
     *  Constant: '<S442>/Constant1'
     *  Constant: '<S442>/Constant2'
     *  Constant: '<S443>/Constant1'
     *  Constant: '<S443>/Constant2'
     *  Constant: '<S444>/Constant1'
     *  Constant: '<S444>/Constant2'
     *  Constant: '<S445>/Calib'
     *  Constant: '<S446>/Calib'
     *  Constant: '<S447>/Calib'
     *  Constant: '<S448>/Constant1'
     *  Constant: '<S448>/Constant2'
     *  Constant: '<S449>/Constant1'
     *  Constant: '<S449>/Constant2'
     *  Constant: '<S450>/Constant1'
     *  Constant: '<S450>/Constant2'
     *  Constant: '<S451>/Calib'
     *  Constant: '<S452>/Calib'
     *  Constant: '<S453>/Calib'
     *  Constant: '<S459>/Constant1'
     *  Constant: '<S459>/Constant2'
     *  Constant: '<S460>/Constant1'
     *  Constant: '<S460>/Constant2'
     *  Constant: '<S461>/Calib'
     *  Constant: '<S462>/Calib'
     *  Constant: '<S463>/Calib'
     *  Constant: '<S467>/Calib'
     *  Constant: '<S468>/Constant1'
     *  Constant: '<S468>/Constant2'
     *  Constant: '<S469>/Constant1'
     *  Constant: '<S469>/Constant2'
     *  Constant: '<S470>/Calib'
     *  Constant: '<S471>/Calib'
     */
    AATR_ac_B.AND_p3 = ((((((((rtb_VariantMerge_For_Variant_Source_Va_f > 0) &&
        (rtb_VariantMerge_For_Variant_Source_Va_i == 0U)) &&
        (KeAATR_b_IUMPR_SCPAATPerf_SCPAATShrtLow_Enbl)) ||
                            (((rtb_VariantMerge_For_Variant_Source_Va_j > 0) &&
        (rtb_VariantMerge_For_Variant_Source_Va_k == 0U)) &&
        (KeAATR_b_IUMPR_SCPAATPerf_SCPAATShrtHi_Enbl))) ||
                           (((((rtb_VariantMerge_For_Variant_Source_Va_3 > 0) &&
        (rtb_VariantMerge_For_Variant_Source_Va_4 == 0U)) &&
        (KeAATR_b_IUMPR_SCPAATPerf_InvCPIM_Enbl)) ||
        (((rtb_VariantMerge_For_Variant_Source_Va_5 > 0) &&
          (rtb_VariantMerge_For_Variant_Source_Va_6 == 0U)) &&
         (KeAATR_b_IUMPR_SCPAATPerf_LOCwCPIM_Enbl))) ||
                            (rtb_VariantMerge_For_Variant_Source_Va_a &&
        (KeAATR_b_IUMPR_SCPAATPerf_LINBusOff_Enbl)))) || ((((((sint32)
        ((((((rtb_VariantMerge_For_Variant_Source_Va_7 > 0) &&
             (rtb_VariantMerge_For_Variant_Source_Va_8 == 0U)) &&
            (KeAATR_b_IUMPR_SCPAATPerf_CBCAATPerf_Enbl)) ||
           (((rtb_VariantMerge_For_Variant_Source_Va_9 > 0) &&
             (rtb_VariantMerge_For_Variant_Source_Va_b == 0U)) &&
            (KeAATR_b_IUMPR_SCPAATPerf_CBCAATShrtLo_Enbl))) ||
          (((rtb_VariantMerge_For_Variant_Source_Va_c > 0) &&
            (rtb_VariantMerge_For_Variant_Source_Va_e == 0U)) &&
           (KeAATR_b_IUMPR_SCPAATPerf_CBCAATShrtHi_Enbl))) ? 1 : 0)) + ((sint32)
        (((((((((sint32)AATR_ac_DW.StatusByte_BatChaCouTemSenACirRan) & 1) > 0) &&
             ((((uint32)AATR_ac_DW.StatusByte_BatChaCouTemSenACirRan) & 64U) ==
              0U)) && (KeAATR_b_IUMPR_SCPAATPerf_SCPInletPerf_Enbl)) || (((i > 0)
        && (rtb_VariantMerge_For_Variant_Source_Va_0 == 0U)) &&
        (KeAATR_b_IUMPR_SCPAATPerf_SCPInletShrtLo_Enbl))) ||
          (((rtb_VariantMerge_For_Variant_Source_Va_1 > 0) &&
            (rtb_VariantMerge_For_Variant_Source_Va_2 == 0U)) &&
           (KeAATR_b_IUMPR_SCPAATPerf_SCPInletShrtHi_Enbl))) ? 1 : 0))) +
        ((sint32)(((VeAATI_b_ECM_IntakeTempFA_Dial) &&
                   (KeAATR_b_IUMPR_SCPAATPerf_IntakeFA_Enbl)) ? 1 : 0))) +
                            ((sint32)((rtb_LogicalOperator15_d &&
        (KeAATR_b_IUMPR_SCPAATPerf_InitFA_Enbl)) ? 1 : 0))) >= ((sint32)
                            KeAATR_Cnt_IUMPR_AATPerf_MaxDTCSet))) ||
                         (KeAATR_b_IUMPR_SCPAATPerf_Ovrrd)) &&
                        (KeAATR_b_IUMPR_SCPAATPerf_Enbl));
    switch (HeAATR_i_SCP_LINBusOff_Slct)
    {
      case 1:
        /* Logic: '<S1043>/Logical Operator13' incorporates:
         *  Constant: '<S508>/Constant1'
         *  Constant: '<S508>/Constant2'
         *  DataStoreRead: '<S508>/StatusByte_LIN1_BusOff'
         *  Logic: '<S508>/Logical Operator'
         *  RelationalOperator: '<S508>/Relational Operator1'
         *  RelationalOperator: '<S508>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S508>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S508>/Bitwise Operator2'
         */
        rtb_VariantMerge_For_Variant_Source_Va_a = (((((sint32)
            AATR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0) && ((((uint32)
            AATR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U));
        break;

      case 2:
        /* Logic: '<S1043>/Logical Operator13' incorporates:
         *  Constant: '<S509>/Constant1'
         *  Constant: '<S509>/Constant2'
         *  DataStoreRead: '<S509>/StatusByte_LIN2_BusOff'
         *  Logic: '<S509>/Logical Operator'
         *  RelationalOperator: '<S509>/Relational Operator1'
         *  RelationalOperator: '<S509>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S509>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S509>/Bitwise Operator2'
         */
        rtb_VariantMerge_For_Variant_Source_Va_a = (((((sint32)
            AATR_ac_DW.StatusByte_LIN2_BusOff) & 1) > 0) && ((((uint32)
            AATR_ac_DW.StatusByte_LIN2_BusOff) & 64U) == 0U));
        break;

      case 3:
        /* Logic: '<S1043>/Logical Operator13' incorporates:
         *  Constant: '<S510>/Constant1'
         *  Constant: '<S510>/Constant2'
         *  DataStoreRead: '<S510>/StatusByte_LIN3_BusOff'
         *  Logic: '<S510>/Logical Operator'
         *  RelationalOperator: '<S510>/Relational Operator1'
         *  RelationalOperator: '<S510>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S510>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S510>/Bitwise Operator2'
         */
        rtb_VariantMerge_For_Variant_Source_Va_a = (((((sint32)
            AATR_ac_DW.StatusByte_LIN3_BusOff) & 1) > 0) && ((((uint32)
            AATR_ac_DW.StatusByte_LIN3_BusOff) & 64U) == 0U));
        break;

      default:
        /* Logic: '<S1043>/Logical Operator13' incorporates:
         *  Constant: '<S502>/FALSE Constant1'
         */
        rtb_VariantMerge_For_Variant_Source_Va_a = false;
        break;
    }

    /* Logic: '<S380>/AND' incorporates:
     *  Constant: '<S472>/Calib'
     *  Constant: '<S473>/Calib'
     *  Constant: '<S478>/Calib'
     *  Constant: '<S479>/Calib'
     *  Constant: '<S480>/Calib'
     *  Constant: '<S486>/Constant1'
     *  Constant: '<S486>/Constant2'
     *  Constant: '<S487>/Constant1'
     *  Constant: '<S487>/Constant2'
     *  Constant: '<S488>/Constant1'
     *  Constant: '<S488>/Constant2'
     *  Constant: '<S489>/Calib'
     *  Constant: '<S490>/Calib'
     *  Constant: '<S491>/Calib'
     *  Constant: '<S492>/Constant1'
     *  Constant: '<S492>/Constant2'
     *  Constant: '<S493>/Constant1'
     *  Constant: '<S493>/Constant2'
     *  Constant: '<S494>/Constant1'
     *  Constant: '<S494>/Constant2'
     *  Constant: '<S495>/Calib'
     *  Constant: '<S496>/Calib'
     *  Constant: '<S497>/Calib'
     *  Constant: '<S503>/Constant1'
     *  Constant: '<S503>/Constant2'
     *  Constant: '<S504>/Constant1'
     *  Constant: '<S504>/Constant2'
     *  Constant: '<S505>/Calib'
     *  Constant: '<S506>/Calib'
     *  Constant: '<S507>/Calib'
     *  Constant: '<S511>/Calib'
     *  Constant: '<S512>/Constant1'
     *  Constant: '<S512>/Constant2'
     *  Constant: '<S513>/Constant1'
     *  Constant: '<S513>/Constant2'
     *  Constant: '<S514>/Calib'
     *  Constant: '<S515>/Calib'
     */
    AATR_ac_B.AND_o = ((((((((i > 0) &&
        (rtb_VariantMerge_For_Variant_Source_Va_0 == 0U)) &&
                            (KeAATR_b_IUMPR_SCPInletPerf_SCPInletShrtLow_Enbl)) ||
                           (((rtb_VariantMerge_For_Variant_Source_Va_1 > 0) &&
        (rtb_VariantMerge_For_Variant_Source_Va_2 == 0U)) &&
                            (KeAATR_b_IUMPR_SCPInletPerf_SCPInletShrtHi_Enbl))) ||
                          (((((rtb_VariantMerge_For_Variant_Source_Va_3 > 0) &&
        (rtb_VariantMerge_For_Variant_Source_Va_4 == 0U)) &&
        (KeAATR_b_IUMPR_SCPInletPerf_InvCPIM_Enbl)) ||
                            (((rtb_VariantMerge_For_Variant_Source_Va_5 > 0) &&
        (rtb_VariantMerge_For_Variant_Source_Va_6 == 0U)) &&
        (KeAATR_b_IUMPR_SCPInletPerf_LOCwCPIM_Enbl))) ||
                           (rtb_VariantMerge_For_Variant_Source_Va_a &&
                            (KeAATR_b_IUMPR_SCPInletPerf_LINBusOff_Enbl)))) ||
                         ((((((sint32)
        ((((((rtb_VariantMerge_For_Variant_Source_Va_7 > 0) &&
             (rtb_VariantMerge_For_Variant_Source_Va_8 == 0U)) &&
            (KeAATR_b_IUMPR_SCPInletPerf_CBCAATPerf_Enbl)) ||
           (((rtb_VariantMerge_For_Variant_Source_Va_9 > 0) &&
             (rtb_VariantMerge_For_Variant_Source_Va_b == 0U)) &&
            (KeAATR_b_IUMPR_SCPInletPerf_CBCAATShrtLo_Enbl))) ||
          (((rtb_VariantMerge_For_Variant_Source_Va_c > 0) &&
            (rtb_VariantMerge_For_Variant_Source_Va_e == 0U)) &&
           (KeAATR_b_IUMPR_SCPInletPerf_CBCAATShrtHi_Enbl))) ? 1 : 0)) +
        ((sint32)(((((((((sint32)AATR_ac_DW.StatusByte_AAT_SnsrCkt_B_Perf) & 1) >
                       0) && ((((uint32)AATR_ac_DW.StatusByte_AAT_SnsrCkt_B_Perf)
        & 64U) == 0U)) && (KeAATR_b_IUMPR_SCPInletPerf_SCPAATPerf_Enbl)) ||
                    (((rtb_VariantMerge_For_Variant_Source_Va_f > 0) &&
                      (rtb_VariantMerge_For_Variant_Source_Va_i == 0U)) &&
                     (KeAATR_b_IUMPR_SCPInletPerf_SCPAATShrtLo_Enbl))) ||
                   (((rtb_VariantMerge_For_Variant_Source_Va_j > 0) &&
                     (rtb_VariantMerge_For_Variant_Source_Va_k == 0U)) &&
                    (KeAATR_b_IUMPR_SCPInletPerf_SCPAATShrtHi_Enbl))) ? 1 : 0)))
                            + ((sint32)(((VeAATI_b_ECM_IntakeTempFA_Dial) &&
        (KeAATR_b_IUMPR_SCPInletPerf_IntakeFA_Enbl)) ? 1 : 0))) + ((sint32)
                            ((rtb_LogicalOperator15_d &&
        (KeAATR_b_IUMPR_SCPInletPerf_InitFA_Enbl)) ? 1 : 0))) >= ((sint32)
                           KeAATR_Cnt_IUMPR_AATPerf_MaxDTCSet))) ||
                        (KeAATR_b_IUMPR_SCPInletPerf_Ovrrd)) &&
                       (KeAATR_b_IUMPR_SCPInletPerf_Enbl));

#else

    /* Logic: '<S378>/AND' incorporates:
     *  Constant: '<S381>/FALSE Constant'
     *  SignalConversion generated from: '<S375>/Variant Source'
     *  VariantMerge generated from: '<S375>/Variant Source'
     */
    AATR_ac_B.AND_f = false;

    /* Logic: '<S379>/AND' incorporates:
     *  Constant: '<S381>/FALSE Constant'
     *  SignalConversion generated from: '<S375>/Variant Source'
     *  VariantMerge generated from: '<S375>/Variant Source'
     */
    AATR_ac_B.AND_p3 = false;

    /* Logic: '<S380>/AND' incorporates:
     *  Constant: '<S381>/FALSE Constant'
     *  SignalConversion generated from: '<S375>/Variant Source'
     *  VariantMerge generated from: '<S375>/Variant Source'
     */
    AATR_ac_B.AND_o = false;

#endif

    /* End of Logic: '<S382>/Logical Operator' */

    /* SignalConversion generated from: '<S20>/CBC_AmbAirVolt' */
#if Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/CBC_AmbAirVolt' */
    rtb_VeAATI_U_CBC_AmbAirVolt_Dial = AATR_ac_B.VeAATI_U_CBC_AmbAirVolt_Dial;

#elif !Rte_SysCon_Variant_AATR_21 || !Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/CBC_AmbAirVolt' incorporates:
     *  SignalConversion generated from: '<S20>/CBC_AmbAirVolt'
     */
    rtb_VeAATI_U_CBC_AmbAirVolt_Dial = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S20>/CBC_AmbAirVolt' */

    /* SignalConversion generated from: '<S20>/SCP_DCPstvTemp' incorporates:
     *  SignalConversion generated from: '<S20>/SCP_DCPstvTempFA'
     * */
#if (!Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8)

    /* VariantMerge generated from: '<S20>/SCP_DCPstvTemp' */
    rtb_VeAATI_T_SCP_DCPstvTemp_Dial = AATR_ac_B.VeAATI_T_SCP_DCPstvTemp_Dial;

    /* VariantMerge generated from: '<S20>/SCP_DCPstvTempFA' */
    rtb_VeAATI_b_SCP_DCPstvTempFA_Dial =
        AATR_ac_B.VeAATI_b_SCP_DCPstvTempFA_Dial;

#elif !Rte_SysCon_Variant_AATR_8 || (!(!Rte_SysCon_Variant_AATR_22) && !Rte_SysCon_Variant_AATR_16 && !Rte_SysCon_Variant_AATR_4)

    /* VariantMerge generated from: '<S20>/SCP_DCPstvTemp' incorporates:
     *  SignalConversion generated from: '<S20>/SCP_DCPstvTemp'
     */
    rtb_VeAATI_T_SCP_DCPstvTemp_Dial = 0.0F;

    /* VariantMerge generated from: '<S20>/SCP_DCPstvTempFA' incorporates:
     *  SignalConversion generated from: '<S20>/SCP_DCPstvTempFA'
     */
    rtb_VeAATI_b_SCP_DCPstvTempFA_Dial = false;

#endif

    /* End of SignalConversion generated from: '<S20>/SCP_DCPstvTemp' */

    /* SignalConversion generated from: '<S20>/SCP_DCNegtvTemp' incorporates:
     *  SignalConversion generated from: '<S20>/SCP_DCNegtvTempFA'
     * */
#if (!Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8)

    /* VariantMerge generated from: '<S20>/SCP_DCNegtvTemp' */
    rtb_VeAATI_T_SCP_DCNegtvTemp_Dial = AATR_ac_B.VeAATI_T_SCP_DCNegtvTemp_Dial;

    /* VariantMerge generated from: '<S20>/SCP_DCNegtvTempFA' */
    rtb_VeAATI_b_SCP_DCNegtvTempFA_Dial =
        AATR_ac_B.VeAATI_b_SCP_DCNegtvTempFA_Dial;

#elif !Rte_SysCon_Variant_AATR_8 || (!(!Rte_SysCon_Variant_AATR_22) && !Rte_SysCon_Variant_AATR_13 && !Rte_SysCon_Variant_AATR_2)

    /* VariantMerge generated from: '<S20>/SCP_DCNegtvTemp' incorporates:
     *  SignalConversion generated from: '<S20>/SCP_DCNegtvTemp'
     */
    rtb_VeAATI_T_SCP_DCNegtvTemp_Dial = 0.0F;

    /* VariantMerge generated from: '<S20>/SCP_DCNegtvTempFA' incorporates:
     *  SignalConversion generated from: '<S20>/SCP_DCNegtvTempFA'
     */
    rtb_VeAATI_b_SCP_DCNegtvTempFA_Dial = false;

#endif

    /* End of SignalConversion generated from: '<S20>/SCP_DCNegtvTemp' */

    /* SignalConversion generated from: '<S20>/SCP_InletTempSNA' */
#if Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/SCP_InletTempSNA' */
    rtb_VeAATI_b_SCP_InletTempSNA_Dial = VeAATI_b_SCP_InletTempSNA_Dial;

#elif !Rte_SysCon_Variant_AATR_11 || !Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/SCP_InletTempSNA' incorporates:
     *  SignalConversion generated from: '<S20>/SCP_InletTempSNA'
     */
    rtb_VeAATI_b_SCP_InletTempSNA_Dial = false;

#endif

    /* End of SignalConversion generated from: '<S20>/SCP_InletTempSNA' */

    /* SignalConversion generated from: '<S20>/DiagGlblCndtnsValid' */
#if (Rte_SysCon_Variant_AATR_10 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_13 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_16 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_2 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_4 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_6 && Rte_SysCon_Variant_AATR_8)

    /* VariantMerge generated from: '<S20>/DiagGlblCndtnsValid' */
    rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal =
        VeAATI_b_DiagGlblCndtnsValid_OvrdVal_Dial;

#elif !Rte_SysCon_Variant_AATR_8 || (!Rte_SysCon_Variant_AATR_10 && !Rte_SysCon_Variant_AATR_11 && !Rte_SysCon_Variant_AATR_13 && !Rte_SysCon_Variant_AATR_14 && !Rte_SysCon_Variant_AATR_16 && !Rte_SysCon_Variant_AATR_17 && !Rte_SysCon_Variant_AATR_19 && !Rte_SysCon_Variant_AATR_2 && !Rte_SysCon_Variant_AATR_21 && !Rte_SysCon_Variant_AATR_4 && !Rte_SysCon_Variant_AATR_6)

    /* VariantMerge generated from: '<S20>/DiagGlblCndtnsValid' incorporates:
     *  SignalConversion generated from: '<S20>/DiagGlblCndtnsValid'
     */
    rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal = false;

#endif

    /* End of SignalConversion generated from: '<S20>/DiagGlblCndtnsValid' */

    /* SignalConversion generated from: '<S20>/SCP_DCPstvTempSNA' */
#if Rte_SysCon_Variant_AATR_17 && Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/SCP_DCPstvTempSNA' */
    rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial = VeAATI_b_SCP_DCPstvTempSNA_Dial;

#elif !Rte_SysCon_Variant_AATR_17 || !Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/SCP_DCPstvTempSNA' incorporates:
     *  SignalConversion generated from: '<S20>/SCP_DCPstvTempSNA'
     */
    rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial = false;

#endif

    /* End of SignalConversion generated from: '<S20>/SCP_DCPstvTempSNA' */

    /* SignalConversion generated from: '<S20>/SCP_DCNegtvTempSNA' */
#if Rte_SysCon_Variant_AATR_14 && Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/SCP_DCNegtvTempSNA' */
    rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial = VeAATI_b_SCP_DCNegtvTempSNA_Dial;

#elif !Rte_SysCon_Variant_AATR_14 || !Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/SCP_DCNegtvTempSNA' incorporates:
     *  SignalConversion generated from: '<S20>/SCP_DCNegtvTempSNA'
     */
    rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial = false;

#endif

    /* End of SignalConversion generated from: '<S20>/SCP_DCNegtvTempSNA' */

    /* Outputs for Atomic SubSystem: '<S20>/OutOfRangeDiag' */

    /* Logic: '<S533>/NOT4' */
    VeAATD_b_DsblDiagFailSafeOrCdeClr = ((VeAATI_b_DsblDiagFailSafe_OvrdVal_Dial)
        || (VeAATI_b_PostCodeClrDiagDsbl_OvrdVal_Dial));

    /* Outputs for Atomic SubSystem: '<S376>/CBC_Sensor_RangeDiagnostics' */
#if Rte_SysCon_Variant_AATR_21

    /* Outputs for Atomic SubSystem: '<S528>/If_CBC_Sensor_RangeDiagnostics' */
    /* Logic: '<S536>/Logical Operator' incorporates:
     *  Logic: '<S536>/Logical2'
     */
    VeAATD_b_CBC_AmbAirVolt_OOR_Enbl = ((!VeAATI_b_CBC_AmbAirVoltFA_Dial) &&
        rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal);

    /* RelationalOperator: '<S548>/Relational Operator3' incorporates:
     *  Constant: '<S548>/Constant3'
     *  DataStoreRead: '<S549>/StatusByte_AAT_SnsrCktHi'
     *  S-Function (sfix_bitop): '<S548>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a = ((((uint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCktHi) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S548>/EdgeFalling1' */
    /* Logic: '<S548>/Logical Operator' incorporates:
     *  Logic: '<S551>/OR1'
     */
    rtb_SCP_DCPstvTempFA = !rtb_VariantMerge_For_Variant_Source_Va_a;

    /* End of Outputs for SubSystem: '<S548>/EdgeFalling1' */

    /* Logic: '<S548>/Logical1' incorporates:
     *  Constant: '<S547>/Calib'
     *  Constant: '<S548>/Constant1'
     *  DataStoreRead: '<S549>/StatusByte_AAT_SnsrCktHi'
     *  Logic: '<S548>/Logical Operator'
     *  Logic: '<S548>/Logical10'
     *  Logic: '<S548>/Logical12'
     *  RelationalOperator: '<S548>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S548>/Bitwise Operator3'
     */
    rtb_SCP_DCNegtvTempFA = ((VeAATD_b_CBC_AmbAirVolt_OOR_Enbl) &&
        ((!KeAATR_b_AAT_SnsrCktHi_LtchEnbl) || (((((uint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCktHi) & 1U) == 0U) ||
        rtb_SCP_DCPstvTempFA)));

    /* RelationalOperator: '<S539>/Comparison1' incorporates:
     *  Constant: '<S543>/Calib'
     */
    VeAATD_b_CBC_AmbAirShrtHi_FltSymptm = (rtb_VeAATI_U_CBC_AmbAirVolt_Dial >=
        KeAATI_U_CBC_AmbAirVolt_Max);

    /* Outputs for Atomic SubSystem: '<S548>/EdgeFalling1' */
    /* Logic: '<S551>/AND' incorporates:
     *  UnitDelay: '<S551>/Unit Delay'
     */
    rtb_SCP_DCPstvTempFA = (rtb_SCP_DCPstvTempFA &&
                            (AATR_ac_DW.UnitDelay_DSTATE_ezb));

    /* Update for UnitDelay: '<S551>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_ezb = rtb_VariantMerge_For_Variant_Source_Va_a;

    /* End of Outputs for SubSystem: '<S548>/EdgeFalling1' */

    /* Logic: '<S548>/Logical5' */
    rtb_VariantMerge_For_Variant_Source_Va_a =
        ((VeAATD_b_DsblDiagFailSafeOrCdeClr) || rtb_SCP_DCPstvTempFA);

    /* Outputs for Atomic SubSystem: '<S550>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S550>/Counter Reset  Enabled ' */
    /* Switch: '<S557>/Switch1' incorporates:
     *  Logic: '<S550>/Fail Counter Reset'
     *  Logic: '<S550>/NOT6'
     *  Switch: '<S557>/Switch2'
     *  Switch: '<S558>/Switch1'
     *  UnitDelay: '<S550>/Unit Delay'
     *  UnitDelay: '<S550>/Unit Delay1'
     */
    if ((rtb_VariantMerge_For_Variant_Source_Va_a ||
            (AATR_ac_DW.UnitDelay_DSTATE_pcj)) ||
            (AATR_ac_DW.UnitDelay1_DSTATE_as))
    {
        /* Switch: '<S557>/Switch1' incorporates:
         *  Constant: '<S557>/Constant Value2'
         */
        VeAATD_Cnt_CBCAmbAirVlt_HiFailCnt = 0U;

        /* Switch: '<S558>/Switch1' incorporates:
         *  Constant: '<S558>/Constant Value2'
         */
        VeAATD_Cnt_CBCAmbAirVlt_HiSmpCnt = 0U;
    }
    else
    {
        if (rtb_SCP_DCNegtvTempFA && (VeAATD_b_CBC_AmbAirShrtHi_FltSymptm))
        {
            /* Switch: '<S557>/Switch1' incorporates:
             *  Constant: '<S557>/Constant Value1'
             *  Sum: '<S557>/Subtraction'
             *  Switch: '<S557>/Switch2'
             *  UnitDelay: '<S557>/Unit Delay'
             */
            VeAATD_Cnt_CBCAmbAirVlt_HiFailCnt = (uint16)(((uint32)
                VeAATD_Cnt_CBCAmbAirVlt_HiFailCnt) + 1U);
        }

        /* Switch: '<S558>/Switch2' */
        if (rtb_SCP_DCNegtvTempFA)
        {
            /* Switch: '<S558>/Switch1' incorporates:
             *  Constant: '<S558>/Constant Value1'
             *  Sum: '<S558>/Subtraction'
             *  Switch: '<S558>/Switch2'
             *  UnitDelay: '<S558>/Unit Delay'
             */
            VeAATD_Cnt_CBCAmbAirVlt_HiSmpCnt = (uint16)(((uint32)
                VeAATD_Cnt_CBCAmbAirVlt_HiSmpCnt) + 1U);
        }

        /* End of Switch: '<S558>/Switch2' */
    }

    /* End of Switch: '<S557>/Switch1' */
    /* End of Outputs for SubSystem: '<S550>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S550>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S550>/Greater Than or Equal ' incorporates:
     *  Constant: '<S545>/Calib'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_as = (((sint32)
        VeAATD_Cnt_CBCAmbAirVlt_HiFailCnt) >= ((sint32)
        KeAATR_Cnt_CBCAmbAirVlt_HiFail));

    /* Logic: '<S550>/NOT5' incorporates:
     *  Constant: '<S546>/Calib'
     *  Logic: '<S550>/NOT3'
     *  RelationalOperator: '<S550>/Less Than  or Equal'
     */
    rtb_SCP_DCNegtvTempFA = ((((sint32)VeAATD_Cnt_CBCAmbAirVlt_HiSmpCnt) >=
        ((sint32)KeAATR_Cnt_CBCAmbAirVlt_HiSmp)) &&
        (!AATR_ac_DW.UnitDelay1_DSTATE_as));

    /* Switch: '<S563>/Switch1' incorporates:
     *  Constant: '<S556>/Constant Value'
     *  DataStoreWrite: '<S541>/Data Store Write4'
     *  Switch: '<S562>/Switch1'
     */
    if (VeAATI_b_PostCodeClrDiagDsbl_OvrdVal_Dial)
    {
        AATR_ac_DW.NeAATR_Cnt_AmbAirVolt_HiFlt_MFOP = 0U;
    }
    else
    {
        if (rtb_SCP_DCNegtvTempFA)
        {
            /* MinMax: '<S556>/Minimum2' incorporates:
             *  DataStoreRead: '<S541>/Data Store Read3'
             *  Switch: '<S562>/Switch1'
             */
            if (VeAATD_Cnt_CBCAmbAirVlt_HiFailCnt >
                    AATR_ac_DW.NeAATR_Cnt_AmbAirVolt_HiFlt_MFOP)
            {
                /* DataStoreWrite: '<S541>/Data Store Write4' incorporates:
                 *  Switch: '<S562>/Switch1'
                 */
                AATR_ac_DW.NeAATR_Cnt_AmbAirVolt_HiFlt_MFOP =
                    VeAATD_Cnt_CBCAmbAirVlt_HiFailCnt;
            }

            /* End of MinMax: '<S556>/Minimum2' */
        }
    }

    /* End of Switch: '<S563>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S548>/Fail' */
    AATR_ac_Fail(AATR_ac_DW.UnitDelay1_DSTATE_as,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_hr);

    /* End of Outputs for SubSystem: '<S548>/Fail' */

    /* Outputs for Enabled SubSystem: '<S548>/Init' */
    AATR_ac_Init_a(rtb_VariantMerge_For_Variant_Source_Va_a,
                   &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_hr);

    /* End of Outputs for SubSystem: '<S548>/Init' */

    /* Outputs for Enabled SubSystem: '<S548>/Pass' */
    AATR_ac_Pass(rtb_SCP_DCNegtvTempFA,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_hr);

    /* End of Outputs for SubSystem: '<S548>/Pass' */

    /* VariantMerge generated from: '<S528>/VeAATD_b_CBC_AmbAirVolt_HiFltDtct' incorporates:
     *  Constant: '<S552>/Constant'
     *  RelationalOperator: '<S548>/Relational Operator'
     *  VariantMerge generated from: '<S528>/VeAATR_e_FaultSts_AAT_SnsrCktHi'
     */
    VeAATD_b_CBCAmbAirVlt_HiFltDtct = (((uint32)
        AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_hr) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S567>/Relational Operator3' incorporates:
     *  Constant: '<S567>/Constant3'
     *  DataStoreRead: '<S568>/StatusByte_AAT_SnsrCktLo'
     *  S-Function (sfix_bitop): '<S567>/Bitwise Operator2'
     */
    rtb_SCP_DCPstvTempFA = ((((uint32)AATR_ac_DW.StatusByte_AAT_SnsrCktLo) & 64U)
                            == 0U);

    /* Outputs for Atomic SubSystem: '<S567>/EdgeFalling1' */
    /* Logic: '<S567>/Logical Operator' incorporates:
     *  Logic: '<S570>/OR1'
     */
    rtb_VariantMerge_For_Variant_Source_Va_d = !rtb_SCP_DCPstvTempFA;

    /* End of Outputs for SubSystem: '<S567>/EdgeFalling1' */

    /* Logic: '<S567>/Logical1' incorporates:
     *  Constant: '<S566>/Calib'
     *  Constant: '<S567>/Constant1'
     *  DataStoreRead: '<S568>/StatusByte_AAT_SnsrCktLo'
     *  Logic: '<S567>/Logical Operator'
     *  Logic: '<S567>/Logical10'
     *  Logic: '<S567>/Logical12'
     *  RelationalOperator: '<S567>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S567>/Bitwise Operator3'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a =
        ((VeAATD_b_CBC_AmbAirVolt_OOR_Enbl) &&
         ((!KeAATR_b_AAT_SnsrCktLo_LtchEnbl) || (((((uint32)
              AATR_ac_DW.StatusByte_AAT_SnsrCktLo) & 1U) == 0U) ||
           rtb_VariantMerge_For_Variant_Source_Va_d)));

    /* RelationalOperator: '<S540>/Comparison2' incorporates:
     *  Constant: '<S544>/Calib'
     */
    VeAATD_b_CBC_AmbAirShrtLo_FltSymptm = (rtb_VeAATI_U_CBC_AmbAirVolt_Dial <=
        KeAATI_U_CBC_AmbAirVolt_Min);

    /* Outputs for Atomic SubSystem: '<S567>/EdgeFalling1' */
    /* Logic: '<S570>/AND' incorporates:
     *  UnitDelay: '<S570>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_Va_d =
        (rtb_VariantMerge_For_Variant_Source_Va_d &&
         (AATR_ac_DW.UnitDelay_DSTATE_op));

    /* Update for UnitDelay: '<S570>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_op = rtb_SCP_DCPstvTempFA;

    /* End of Outputs for SubSystem: '<S567>/EdgeFalling1' */

    /* Logic: '<S567>/Logical5' */
    rtb_SCP_DCPstvTempFA = ((VeAATD_b_DsblDiagFailSafeOrCdeClr) ||
                            rtb_VariantMerge_For_Variant_Source_Va_d);

    /* UnitDelay: '<S569>/Unit Delay1' incorporates:
     *  UnitDelay: '<S550>/Unit Delay'
     */
    AATR_ac_DW.UnitDelay_DSTATE_pcj = AATR_ac_DW.UnitDelay1_DSTATE_l;

    /* Outputs for Atomic SubSystem: '<S569>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S569>/Counter Reset  Enabled ' */
    /* Switch: '<S576>/Switch1' incorporates:
     *  Logic: '<S569>/Fail Counter Reset'
     *  Logic: '<S569>/NOT6'
     *  Switch: '<S576>/Switch2'
     *  Switch: '<S577>/Switch1'
     *  UnitDelay: '<S550>/Unit Delay'
     *  UnitDelay: '<S569>/Unit Delay'
     */
    if ((rtb_SCP_DCPstvTempFA || (AATR_ac_DW.UnitDelay_DSTATE_c2)) ||
            (AATR_ac_DW.UnitDelay_DSTATE_pcj))
    {
        /* Switch: '<S576>/Switch1' incorporates:
         *  Constant: '<S576>/Constant Value2'
         */
        VeAATD_Cnt_CBCAmbAirVlt_LoFailCnt = 0U;

        /* Switch: '<S577>/Switch1' incorporates:
         *  Constant: '<S577>/Constant Value2'
         */
        VeAATD_Cnt_CBCAmbAirVlt_LoSmpCnt = 0U;
    }
    else
    {
        if (rtb_VariantMerge_For_Variant_Source_Va_a &&
                (VeAATD_b_CBC_AmbAirShrtLo_FltSymptm))
        {
            /* Switch: '<S576>/Switch1' incorporates:
             *  Constant: '<S576>/Constant Value1'
             *  Sum: '<S576>/Subtraction'
             *  Switch: '<S576>/Switch2'
             *  UnitDelay: '<S576>/Unit Delay'
             */
            VeAATD_Cnt_CBCAmbAirVlt_LoFailCnt = (uint16)(((uint32)
                VeAATD_Cnt_CBCAmbAirVlt_LoFailCnt) + 1U);
        }

        /* Switch: '<S577>/Switch2' */
        if (rtb_VariantMerge_For_Variant_Source_Va_a)
        {
            /* Switch: '<S577>/Switch1' incorporates:
             *  Constant: '<S577>/Constant Value1'
             *  Sum: '<S577>/Subtraction'
             *  Switch: '<S577>/Switch2'
             *  UnitDelay: '<S577>/Unit Delay'
             */
            VeAATD_Cnt_CBCAmbAirVlt_LoSmpCnt = (uint16)(((uint32)
                VeAATD_Cnt_CBCAmbAirVlt_LoSmpCnt) + 1U);
        }

        /* End of Switch: '<S577>/Switch2' */
    }

    /* End of Switch: '<S576>/Switch1' */
    /* End of Outputs for SubSystem: '<S569>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S569>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S569>/Greater Than or Equal ' incorporates:
     *  Constant: '<S564>/Calib'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_l = (((sint32)VeAATD_Cnt_CBCAmbAirVlt_LoFailCnt)
        >= ((sint32)KeAATR_Cnt_CBCAmbAirVlt_LoFail));

    /* Logic: '<S569>/NOT5' incorporates:
     *  Constant: '<S565>/Calib'
     *  Logic: '<S569>/NOT3'
     *  RelationalOperator: '<S569>/Less Than  or Equal'
     */
    AATR_ac_DW.UnitDelay_DSTATE_c2 = ((((sint32)VeAATD_Cnt_CBCAmbAirVlt_LoSmpCnt)
        >= ((sint32)KeAATR_Cnt_CBCAmbAirVlt_LoSmp)) &&
        (!AATR_ac_DW.UnitDelay1_DSTATE_l));

    /* Switch: '<S582>/Switch1' incorporates:
     *  Constant: '<S575>/Constant Value'
     *  DataStoreWrite: '<S542>/Data Store Write3'
     *  Switch: '<S581>/Switch1'
     */
    if (VeAATI_b_PostCodeClrDiagDsbl_OvrdVal_Dial)
    {
        AATR_ac_DW.NeAATR_Cnt_AmbAirVolt_LoFlt_MFOP = 0U;
    }
    else
    {
        if (AATR_ac_DW.UnitDelay_DSTATE_c2)
        {
            /* MinMax: '<S575>/Minimum2' incorporates:
             *  DataStoreRead: '<S542>/Data Store Read1'
             *  Switch: '<S581>/Switch1'
             */
            if (VeAATD_Cnt_CBCAmbAirVlt_LoFailCnt >
                    AATR_ac_DW.NeAATR_Cnt_AmbAirVolt_LoFlt_MFOP)
            {
                /* DataStoreWrite: '<S542>/Data Store Write3' incorporates:
                 *  Switch: '<S581>/Switch1'
                 */
                AATR_ac_DW.NeAATR_Cnt_AmbAirVolt_LoFlt_MFOP =
                    VeAATD_Cnt_CBCAmbAirVlt_LoFailCnt;
            }

            /* End of MinMax: '<S575>/Minimum2' */
        }
    }

    /* End of Switch: '<S582>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S567>/Fail' */
    AATR_ac_Fail(AATR_ac_DW.UnitDelay1_DSTATE_l,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_l);

    /* End of Outputs for SubSystem: '<S567>/Fail' */

    /* Outputs for Enabled SubSystem: '<S567>/Init' */
    AATR_ac_Init_a(rtb_SCP_DCPstvTempFA,
                   &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_l);

    /* End of Outputs for SubSystem: '<S567>/Init' */

    /* Outputs for Enabled SubSystem: '<S567>/Pass' */
    AATR_ac_Pass(AATR_ac_DW.UnitDelay_DSTATE_c2,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_l);

    /* End of Outputs for SubSystem: '<S567>/Pass' */

    /* VariantMerge generated from: '<S528>/VeAATD_b_CBC_AmbAirVolt_LoFltDtct' incorporates:
     *  Constant: '<S571>/Constant'
     *  RelationalOperator: '<S567>/Relational Operator'
     *  VariantMerge generated from: '<S528>/VeAATR_e_FaultSts_AAT_SnsrCktLo'
     */
    VeAATD_b_CBCAmbAirVlt_LoFltDtct = (((uint32)
        AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_l) == CeDFIB_e_Fail);

    /* Update for UnitDelay: '<S550>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_pcj = rtb_SCP_DCNegtvTempFA;

    /* End of Outputs for SubSystem: '<S528>/If_CBC_Sensor_RangeDiagnostics' */
#else

    /* Outputs for Atomic SubSystem: '<S528>/Else_CBC_Sensor_RangeDiagnostics' */
    /* VariantMerge generated from: '<S528>/VeAATR_e_FaultSts_AAT_SnsrCktLo' incorporates:
     *  Constant: '<S538>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_l = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S528>/VeAATD_b_CBC_AmbAirVolt_LoFltDtct' incorporates:
     *  Constant: '<S535>/FALSE Constant'
     */
    VeAATD_b_CBCAmbAirVlt_LoFltDtct = false;

    /* VariantMerge generated from: '<S528>/VeAATR_e_FaultSts_AAT_SnsrCktHi' incorporates:
     *  Constant: '<S537>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_hr = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S528>/VeAATD_b_CBC_AmbAirVolt_HiFltDtct' incorporates:
     *  Constant: '<S535>/FALSE Constant1'
     */
    VeAATD_b_CBCAmbAirVlt_HiFltDtct = false;

    /* End of Outputs for SubSystem: '<S528>/Else_CBC_Sensor_RangeDiagnostics' */
#endif

    /* End of Outputs for SubSystem: '<S376>/CBC_Sensor_RangeDiagnostics' */

    /* MultiPortSwitch: '<S583>/Multiport Switch' incorporates:
     *  Constant: '<S590>/Calib'
     */
    switch (HeAATR_i_SCP_LINBusOff_Slct)
    {
      case 1:
        /* UnitDelay: '<S1009>/Unit Delay' incorporates:
         *  Constant: '<S587>/Constant1'
         *  Constant: '<S587>/Constant2'
         *  DataStoreRead: '<S587>/StatusByte_LIN1_BusOff'
         *  Logic: '<S583>/Logical Operator3'
         *  Logic: '<S587>/Logical Operator'
         *  RelationalOperator: '<S587>/Relational Operator1'
         *  RelationalOperator: '<S587>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S587>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S587>/Bitwise Operator2'
         */
        rtb_SCP_DCNegtvTempFA = (((((sint32)AATR_ac_DW.StatusByte_LIN1_BusOff) &
            1) <= 0) || ((((uint32)AATR_ac_DW.StatusByte_LIN1_BusOff) & 64U) !=
                         0U));
        break;

      case 2:
        /* UnitDelay: '<S1009>/Unit Delay' incorporates:
         *  Constant: '<S588>/Constant1'
         *  Constant: '<S588>/Constant2'
         *  DataStoreRead: '<S588>/StatusByte_LIN2_BusOff'
         *  Logic: '<S583>/Logical Operator8'
         *  Logic: '<S588>/Logical Operator'
         *  RelationalOperator: '<S588>/Relational Operator1'
         *  RelationalOperator: '<S588>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S588>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S588>/Bitwise Operator2'
         */
        rtb_SCP_DCNegtvTempFA = (((((sint32)AATR_ac_DW.StatusByte_LIN2_BusOff) &
            1) <= 0) || ((((uint32)AATR_ac_DW.StatusByte_LIN2_BusOff) & 64U) !=
                         0U));
        break;

      case 3:
        /* UnitDelay: '<S1009>/Unit Delay' incorporates:
         *  Constant: '<S589>/Constant1'
         *  Constant: '<S589>/Constant2'
         *  DataStoreRead: '<S589>/StatusByte_LIN3_BusOff'
         *  Logic: '<S583>/Logical Operator7'
         *  Logic: '<S589>/Logical Operator'
         *  RelationalOperator: '<S589>/Relational Operator1'
         *  RelationalOperator: '<S589>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S589>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S589>/Bitwise Operator2'
         */
        rtb_SCP_DCNegtvTempFA = (((((sint32)AATR_ac_DW.StatusByte_LIN3_BusOff) &
            1) <= 0) || ((((uint32)AATR_ac_DW.StatusByte_LIN3_BusOff) & 64U) !=
                         0U));
        break;

      default:
        /* UnitDelay: '<S1009>/Unit Delay' incorporates:
         *  Constant: '<S583>/FALSE Constant1'
         */
        rtb_SCP_DCNegtvTempFA = false;
        break;
    }

    /* End of MultiPortSwitch: '<S583>/Multiport Switch' */

    /* Logic: '<S529>/Logical Operator3' incorporates:
     *  Constant: '<S584>/Constant1'
     *  Constant: '<S584>/Constant2'
     *  Constant: '<S585>/Constant1'
     *  Constant: '<S585>/Constant2'
     *  Constant: '<S586>/Calib'
     *  DataStoreRead: '<S584>/StatusByte_InvData_CPIMGen2'
     *  DataStoreRead: '<S585>/StatusByte_LostCommCPIM'
     *  Logic: '<S529>/Logical Operator'
     *  Logic: '<S529>/Logical Operator1'
     *  Logic: '<S529>/Logical Operator4'
     *  Logic: '<S584>/Logical Operator'
     *  Logic: '<S585>/Logical Operator'
     *  RelationalOperator: '<S584>/Relational Operator1'
     *  RelationalOperator: '<S584>/Relational Operator2'
     *  RelationalOperator: '<S585>/Relational Operator1'
     *  RelationalOperator: '<S585>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S584>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S584>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S585>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S585>/Bitwise Operator2'
     */
    VeAATD_b_NoCommIssueCPIM = ((((KeAATR_b_ExcldInvDataCPIM4DiagEnbl) ||
        (((((sint32)AATR_ac_DW.StatusByte_InvData_CPIMGen2) & 1) <= 0) ||
         ((((uint32)AATR_ac_DW.StatusByte_InvData_CPIMGen2) & 64U) != 0U))) &&
        (((((sint32)AATR_ac_DW.StatusByte_LostCommCPIM) & 1) <= 0) || ((((uint32)
        AATR_ac_DW.StatusByte_LostCommCPIM) & 64U) != 0U))) &&
        rtb_SCP_DCNegtvTempFA);

    /* Outputs for Atomic SubSystem: '<S376>/DCPstvSnsr_Diag' */
#if Rte_SysCon_Variant_AATR_16

    /* Outputs for Atomic SubSystem: '<S531>/If_DCPstvSnsr_Diag' */
    /* Logic: '<S666>/Logical1' incorporates:
     *  Logic: '<S666>/Logical2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a =
        (((!rtb_VeAATI_b_SCP_DCPstvTempFA_Dial) && (VeAATD_b_NoCommIssueCPIM)) &&
         rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal);

    /* RelationalOperator: '<S681>/Relational Operator3' incorporates:
     *  Constant: '<S681>/Constant3'
     *  DataStoreRead: '<S682>/StatusByte_BattChrgCouTempSnsrBCktHi'
     *  S-Function (sfix_bitop): '<S681>/Bitwise Operator2'
     */
    rtb_SCP_DCPstvTempFA = ((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktHi) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S681>/EdgeFalling1' */
    /* Logic: '<S681>/Logical Operator' incorporates:
     *  Logic: '<S684>/OR1'
     */
    rtb_VariantMerge_For_Variant_Source_Va_d = !rtb_SCP_DCPstvTempFA;

    /* End of Outputs for SubSystem: '<S681>/EdgeFalling1' */

    /* Logic: '<S681>/Logical1' incorporates:
     *  Constant: '<S680>/Calib'
     *  Constant: '<S681>/Constant1'
     *  DataStoreRead: '<S682>/StatusByte_BattChrgCouTempSnsrBCktHi'
     *  Logic: '<S681>/Logical Operator'
     *  Logic: '<S681>/Logical10'
     *  Logic: '<S681>/Logical12'
     *  RelationalOperator: '<S681>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S681>/Bitwise Operator3'
     */
    rtb_SCP_DCNegtvTempFA = (rtb_VariantMerge_For_Variant_Source_Va_a &&
        ((!KeAATR_b_BattChrgCouTempSnsrBCktHi_LtchEnbl) || (((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktHi) & 1U) == 0U) ||
        rtb_VariantMerge_For_Variant_Source_Va_d)));

    /* Outputs for Atomic SubSystem: '<S681>/EdgeFalling1' */
    /* Logic: '<S684>/AND' incorporates:
     *  UnitDelay: '<S684>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_Va_d =
        (rtb_VariantMerge_For_Variant_Source_Va_d &&
         (AATR_ac_DW.UnitDelay_DSTATE_jo));

    /* Update for UnitDelay: '<S684>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_jo = rtb_SCP_DCPstvTempFA;

    /* End of Outputs for SubSystem: '<S681>/EdgeFalling1' */

    /* Logic: '<S681>/Logical5' */
    rtb_SCP_DCPstvTempFA = ((VeAATD_b_DsblDiagFailSafeOrCdeClr) ||
                            rtb_VariantMerge_For_Variant_Source_Va_d);

    /* Outputs for Atomic SubSystem: '<S683>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S683>/Counter Reset  Enabled ' */
    /* Switch: '<S690>/Switch1' incorporates:
     *  Constant: '<S676>/Calib'
     *  Logic: '<S683>/Fail Counter Reset'
     *  Logic: '<S683>/NOT6'
     *  RelationalOperator: '<S671>/Relational Operator1'
     *  Switch: '<S690>/Switch2'
     *  Switch: '<S691>/Switch1'
     *  UnitDelay: '<S683>/Unit Delay'
     *  UnitDelay: '<S683>/Unit Delay1'
     */
    if ((rtb_SCP_DCPstvTempFA || (AATR_ac_DW.UnitDelay_DSTATE_g4n)) ||
            (AATR_ac_DW.UnitDelay1_DSTATE_kt))
    {
        /* Switch: '<S690>/Switch1' incorporates:
         *  Constant: '<S690>/Constant Value2'
         */
        VeAATD_Cnt_SCP_DCPstvTemp_HiFailCnt = 0U;

        /* Switch: '<S691>/Switch1' incorporates:
         *  Constant: '<S691>/Constant Value2'
         */
        VeAATD_Cnt_SCP_DCPstvTemp_HiSmpCnt = 0U;
    }
    else
    {
        if (rtb_SCP_DCNegtvTempFA && (rtb_VeAATI_T_SCP_DCPstvTemp_Dial ==
                KeAATR_T_SCP_DCPstvTemp_ShrtHigh))
        {
            /* Switch: '<S690>/Switch1' incorporates:
             *  Constant: '<S690>/Constant Value1'
             *  Sum: '<S690>/Subtraction'
             *  Switch: '<S690>/Switch2'
             *  UnitDelay: '<S690>/Unit Delay'
             */
            VeAATD_Cnt_SCP_DCPstvTemp_HiFailCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_DCPstvTemp_HiFailCnt) + 1U);
        }

        /* Switch: '<S691>/Switch2' */
        if (rtb_SCP_DCNegtvTempFA)
        {
            /* Switch: '<S691>/Switch1' incorporates:
             *  Constant: '<S691>/Constant Value1'
             *  Sum: '<S691>/Subtraction'
             *  Switch: '<S691>/Switch2'
             *  UnitDelay: '<S691>/Unit Delay'
             */
            VeAATD_Cnt_SCP_DCPstvTemp_HiSmpCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_DCPstvTemp_HiSmpCnt) + 1U);
        }

        /* End of Switch: '<S691>/Switch2' */
    }

    /* End of Switch: '<S690>/Switch1' */
    /* End of Outputs for SubSystem: '<S683>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S683>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S683>/Greater Than or Equal ' incorporates:
     *  Constant: '<S678>/Calib'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_kt = (((sint32)
        VeAATD_Cnt_SCP_DCPstvTemp_HiFailCnt) >= ((sint32)
        KeAATR_Cnt_SCP_DCPstvTemp_HiFail));

    /* Logic: '<S683>/NOT5' incorporates:
     *  Constant: '<S679>/Calib'
     *  Logic: '<S683>/NOT3'
     *  RelationalOperator: '<S683>/Less Than  or Equal'
     */
    rtb_SCP_DCNegtvTempFA = ((((sint32)VeAATD_Cnt_SCP_DCPstvTemp_HiSmpCnt) >=
        ((sint32)KeAATR_Cnt_SCP_DCPstvTemp_HiSmp)) &&
        (!AATR_ac_DW.UnitDelay1_DSTATE_kt));

    /* Switch: '<S696>/Switch1' incorporates:
     *  Constant: '<S689>/Constant Value'
     *  DataStoreWrite: '<S673>/Data Store Write'
     *  Switch: '<S695>/Switch1'
     */
    if (VeAATI_b_PostCodeClrDiagDsbl_OvrdVal_Dial)
    {
        AATR_ac_DW.NeAATR_Cnt_DCPstvTemp_HiFlt_MFOP = 0U;
    }
    else
    {
        if (rtb_SCP_DCNegtvTempFA)
        {
            /* MinMax: '<S689>/Minimum2' incorporates:
             *  DataStoreRead: '<S673>/Data Store Read3'
             *  Switch: '<S695>/Switch1'
             */
            if (VeAATD_Cnt_SCP_DCPstvTemp_HiFailCnt >
                    AATR_ac_DW.NeAATR_Cnt_DCPstvTemp_HiFlt_MFOP)
            {
                /* DataStoreWrite: '<S673>/Data Store Write' incorporates:
                 *  Switch: '<S695>/Switch1'
                 */
                AATR_ac_DW.NeAATR_Cnt_DCPstvTemp_HiFlt_MFOP =
                    VeAATD_Cnt_SCP_DCPstvTemp_HiFailCnt;
            }

            /* End of MinMax: '<S689>/Minimum2' */
        }
    }

    /* End of Switch: '<S696>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S681>/Fail' */
    AATR_ac_Fail(AATR_ac_DW.UnitDelay1_DSTATE_kt,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_n0);

    /* End of Outputs for SubSystem: '<S681>/Fail' */

    /* Outputs for Enabled SubSystem: '<S681>/Init' */
    AATR_ac_Init_a(rtb_SCP_DCPstvTempFA,
                   &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_n0);

    /* End of Outputs for SubSystem: '<S681>/Init' */

    /* Outputs for Enabled SubSystem: '<S681>/Pass' */
    AATR_ac_Pass(rtb_SCP_DCNegtvTempFA,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_n0);

    /* End of Outputs for SubSystem: '<S681>/Pass' */

    /* VariantMerge generated from: '<S531>/VeAATD_b_SCP_DCPstvTemp_HiFltDtct' incorporates:
     *  Constant: '<S685>/Constant'
     *  RelationalOperator: '<S681>/Relational Operator'
     *  VariantMerge generated from: '<S531>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktHi'
     */
    VeAATD_b_SCP_DCPstvTemp_HiFltDtct = (((uint32)
        AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_n0) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S700>/Relational Operator3' incorporates:
     *  Constant: '<S700>/Constant3'
     *  DataStoreRead: '<S701>/StatusByte_BattChrgCouTempSnsrBCktLo'
     *  S-Function (sfix_bitop): '<S700>/Bitwise Operator2'
     */
    rtb_SCP_DCPstvTempFA = ((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktLo) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S700>/EdgeFalling1' */
    /* Logic: '<S700>/Logical Operator' incorporates:
     *  Logic: '<S703>/OR1'
     */
    rtb_VariantMerge_For_Variant_Source_Va_d = !rtb_SCP_DCPstvTempFA;

    /* End of Outputs for SubSystem: '<S700>/EdgeFalling1' */

    /* Logic: '<S700>/Logical1' incorporates:
     *  Constant: '<S699>/Calib'
     *  Constant: '<S700>/Constant1'
     *  DataStoreRead: '<S701>/StatusByte_BattChrgCouTempSnsrBCktLo'
     *  Logic: '<S700>/Logical Operator'
     *  Logic: '<S700>/Logical10'
     *  Logic: '<S700>/Logical12'
     *  RelationalOperator: '<S700>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S700>/Bitwise Operator3'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a =
        (rtb_VariantMerge_For_Variant_Source_Va_a &&
         ((!KeAATR_b_BattChrgCouTempSnsrBCktLo_Enbl) || (((((uint32)
              AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktLo) & 1U) == 0U) ||
           rtb_VariantMerge_For_Variant_Source_Va_d)));

    /* Outputs for Atomic SubSystem: '<S700>/EdgeFalling1' */
    /* Logic: '<S703>/AND' incorporates:
     *  UnitDelay: '<S703>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_Va_d =
        (rtb_VariantMerge_For_Variant_Source_Va_d &&
         (AATR_ac_DW.UnitDelay_DSTATE_brv));

    /* Update for UnitDelay: '<S703>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_brv = rtb_SCP_DCPstvTempFA;

    /* End of Outputs for SubSystem: '<S700>/EdgeFalling1' */

    /* Logic: '<S700>/Logical5' */
    rtb_SCP_DCPstvTempFA = ((VeAATD_b_DsblDiagFailSafeOrCdeClr) ||
                            rtb_VariantMerge_For_Variant_Source_Va_d);

    /* UnitDelay: '<S702>/Unit Delay1' incorporates:
     *  UnitDelay: '<S683>/Unit Delay'
     */
    AATR_ac_DW.UnitDelay_DSTATE_g4n = AATR_ac_DW.UnitDelay1_DSTATE_o;

    /* Outputs for Atomic SubSystem: '<S702>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S702>/Counter Reset  Enabled ' */
    /* Switch: '<S709>/Switch1' incorporates:
     *  Constant: '<S677>/Calib'
     *  Logic: '<S702>/Fail Counter Reset'
     *  Logic: '<S702>/NOT6'
     *  RelationalOperator: '<S672>/Relational Operator'
     *  Switch: '<S709>/Switch2'
     *  Switch: '<S710>/Switch1'
     *  UnitDelay: '<S683>/Unit Delay'
     *  UnitDelay: '<S702>/Unit Delay'
     */
    if ((rtb_SCP_DCPstvTempFA || (AATR_ac_DW.UnitDelay_DSTATE_kw)) ||
            (AATR_ac_DW.UnitDelay_DSTATE_g4n))
    {
        /* Switch: '<S709>/Switch1' incorporates:
         *  Constant: '<S709>/Constant Value2'
         */
        VeAATD_Cnt_SCP_DCPstvTemp_LoFailCnt = 0U;

        /* Switch: '<S710>/Switch1' incorporates:
         *  Constant: '<S710>/Constant Value2'
         */
        VeAATD_Cnt_SCP_DCPstvTemp_LoSmpCnt = 0U;
    }
    else
    {
        if (rtb_VariantMerge_For_Variant_Source_Va_a &&
                (rtb_VeAATI_T_SCP_DCPstvTemp_Dial ==
                 KeAATR_T_SCP_DCPstvTemp_ShrtLow))
        {
            /* Switch: '<S709>/Switch1' incorporates:
             *  Constant: '<S709>/Constant Value1'
             *  Sum: '<S709>/Subtraction'
             *  Switch: '<S709>/Switch2'
             *  UnitDelay: '<S709>/Unit Delay'
             */
            VeAATD_Cnt_SCP_DCPstvTemp_LoFailCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_DCPstvTemp_LoFailCnt) + 1U);
        }

        /* Switch: '<S710>/Switch2' */
        if (rtb_VariantMerge_For_Variant_Source_Va_a)
        {
            /* Switch: '<S710>/Switch1' incorporates:
             *  Constant: '<S710>/Constant Value1'
             *  Sum: '<S710>/Subtraction'
             *  Switch: '<S710>/Switch2'
             *  UnitDelay: '<S710>/Unit Delay'
             */
            VeAATD_Cnt_SCP_DCPstvTemp_LoSmpCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_DCPstvTemp_LoSmpCnt) + 1U);
        }

        /* End of Switch: '<S710>/Switch2' */
    }

    /* End of Switch: '<S709>/Switch1' */
    /* End of Outputs for SubSystem: '<S702>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S702>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S702>/Greater Than or Equal ' incorporates:
     *  Constant: '<S697>/Calib'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_o = (((sint32)
        VeAATD_Cnt_SCP_DCPstvTemp_LoFailCnt) >= ((sint32)
        KeAATR_Cnt_SCP_DCPstvTemp_LoFail));

    /* Logic: '<S702>/NOT5' incorporates:
     *  Constant: '<S698>/Calib'
     *  Logic: '<S702>/NOT3'
     *  RelationalOperator: '<S702>/Less Than  or Equal'
     */
    AATR_ac_DW.UnitDelay_DSTATE_kw = ((((sint32)
        VeAATD_Cnt_SCP_DCPstvTemp_LoSmpCnt) >= ((sint32)
        KeAATR_Cnt_SCP_DCPstvTemp_LoSmp)) && (!AATR_ac_DW.UnitDelay1_DSTATE_o));

    /* Switch: '<S715>/Switch1' incorporates:
     *  Constant: '<S708>/Constant Value'
     *  DataStoreWrite: '<S674>/Data Store Write'
     *  Switch: '<S714>/Switch1'
     */
    if (VeAATI_b_PostCodeClrDiagDsbl_OvrdVal_Dial)
    {
        AATR_ac_DW.NeAATR_Cnt_SCP_DCPstvTemp_LoFlt_MFOP = 0U;
    }
    else
    {
        if (AATR_ac_DW.UnitDelay_DSTATE_kw)
        {
            /* MinMax: '<S708>/Minimum2' incorporates:
             *  DataStoreRead: '<S674>/Data Store Read1'
             *  Switch: '<S714>/Switch1'
             */
            if (VeAATD_Cnt_SCP_DCPstvTemp_LoFailCnt >
                    AATR_ac_DW.NeAATR_Cnt_SCP_DCPstvTemp_LoFlt_MFOP)
            {
                /* DataStoreWrite: '<S674>/Data Store Write' incorporates:
                 *  Switch: '<S714>/Switch1'
                 */
                AATR_ac_DW.NeAATR_Cnt_SCP_DCPstvTemp_LoFlt_MFOP =
                    VeAATD_Cnt_SCP_DCPstvTemp_LoFailCnt;
            }

            /* End of MinMax: '<S708>/Minimum2' */
        }
    }

    /* End of Switch: '<S715>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S700>/Fail' */
    AATR_ac_Fail(AATR_ac_DW.UnitDelay1_DSTATE_o,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_f);

    /* End of Outputs for SubSystem: '<S700>/Fail' */

    /* Outputs for Enabled SubSystem: '<S700>/Init' */
    AATR_ac_Init_a(rtb_SCP_DCPstvTempFA,
                   &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_f);

    /* End of Outputs for SubSystem: '<S700>/Init' */

    /* Outputs for Enabled SubSystem: '<S700>/Pass' */
    AATR_ac_Pass(AATR_ac_DW.UnitDelay_DSTATE_kw,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_f);

    /* End of Outputs for SubSystem: '<S700>/Pass' */

    /* VariantMerge generated from: '<S531>/VeAATD_b_SCP_DCPstvTemp_LoFltDtct' incorporates:
     *  Constant: '<S704>/Constant'
     *  RelationalOperator: '<S700>/Relational Operator'
     *  VariantMerge generated from: '<S531>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktLo'
     */
    VeAATD_b_SCP_DCPstvTemp_LoFltDtct = (((uint32)
        AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_f) == CeDFIB_e_Fail);

    /* VariantMerge generated from: '<S531>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCkt' incorporates:
     *  Constant: '<S716>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_bh = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S531>/VeAATD_b_SCP_DCPstvTemp_FltDtct' incorporates:
     *  Constant: '<S675>/FALSE Constant'
     */
    VeAATD_b_SCP_DCPstvTemp_FltDtct = false;

    /* Update for UnitDelay: '<S683>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_g4n = rtb_SCP_DCNegtvTempFA;

    /* End of Outputs for SubSystem: '<S531>/If_DCPstvSnsr_Diag' */
#elif Rte_SysCon_Variant_AATR_17

    /* Outputs for Atomic SubSystem: '<S531>/If_DCPstvSnsr_M182' */
    /* RelationalOperator: '<S723>/Relational Operator3' incorporates:
     *  Constant: '<S723>/Constant3'
     *  DataStoreRead: '<S724>/StatusByte_BattChrgCouTempSnsrBCkt'
     *  S-Function (sfix_bitop): '<S723>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a = ((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCkt) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S723>/EdgeFalling1' */
    /* Logic: '<S723>/Logical Operator' incorporates:
     *  Logic: '<S726>/OR1'
     */
    rtb_SCP_DCPstvTempFA = !rtb_VariantMerge_For_Variant_Source_Va_a;

    /* End of Outputs for SubSystem: '<S723>/EdgeFalling1' */

    /* Logic: '<S723>/Logical1' incorporates:
     *  Constant: '<S721>/Calib'
     *  Constant: '<S722>/Calib'
     *  Constant: '<S723>/Constant1'
     *  DataStoreRead: '<S724>/StatusByte_BattChrgCouTempSnsrBCkt'
     *  Logic: '<S667>/Logical Operator'
     *  Logic: '<S667>/Logical Operator1'
     *  Logic: '<S723>/Logical Operator'
     *  Logic: '<S723>/Logical10'
     *  Logic: '<S723>/Logical12'
     *  RelationalOperator: '<S723>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S723>/Bitwise Operator3'
     */
    rtb_SCP_DCNegtvTempFA = (((KeAATR_b_EnbSCP_DCPstvTemp) &&
        (rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal && (VeAATD_b_NoCommIssueCPIM)))
        && ((!KeAATR_b_BattChrgCouTempSnsrBCkt_LtchEnbl) || (((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCkt) & 1U) == 0U) ||
        rtb_SCP_DCPstvTempFA)));

    /* Outputs for Atomic SubSystem: '<S723>/EdgeFalling1' */
    /* Logic: '<S726>/AND' incorporates:
     *  UnitDelay: '<S726>/Unit Delay'
     */
    rtb_SCP_DCPstvTempFA = (rtb_SCP_DCPstvTempFA &&
                            (AATR_ac_DW.UnitDelay_DSTATE_gb));

    /* Update for UnitDelay: '<S726>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_gb = rtb_VariantMerge_For_Variant_Source_Va_a;

    /* End of Outputs for SubSystem: '<S723>/EdgeFalling1' */

    /* Logic: '<S723>/Logical5' */
    rtb_VariantMerge_For_Variant_Source_Va_a =
        ((VeAATD_b_DsblDiagFailSafeOrCdeClr) || rtb_SCP_DCPstvTempFA);

    /* Outputs for Atomic SubSystem: '<S725>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S725>/Counter Reset  Enabled ' */
    /* Switch: '<S732>/Switch1' incorporates:
     *  Logic: '<S725>/Fail Counter Reset'
     *  Logic: '<S725>/NOT6'
     *  Switch: '<S732>/Switch2'
     *  Switch: '<S733>/Switch1'
     *  UnitDelay: '<S725>/Unit Delay'
     *  UnitDelay: '<S725>/Unit Delay1'
     */
    if ((rtb_VariantMerge_For_Variant_Source_Va_a ||
            (AATR_ac_DW.UnitDelay_DSTATE_ih)) ||
            (AATR_ac_DW.UnitDelay1_DSTATE_ew))
    {
        /* Switch: '<S732>/Switch1' incorporates:
         *  Constant: '<S732>/Constant Value2'
         */
        VeAATD_Cnt_SCP_DCPstvTemp_FailCnt = 0U;

        /* Switch: '<S733>/Switch1' incorporates:
         *  Constant: '<S733>/Constant Value2'
         */
        VeAATD_Cnt_SCP_DCPstvTemp_SmpCnt = 0U;
    }
    else
    {
        if (rtb_SCP_DCNegtvTempFA && rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial)
        {
            /* Switch: '<S732>/Switch1' incorporates:
             *  Constant: '<S732>/Constant Value1'
             *  Sum: '<S732>/Subtraction'
             *  Switch: '<S732>/Switch2'
             *  UnitDelay: '<S732>/Unit Delay'
             */
            VeAATD_Cnt_SCP_DCPstvTemp_FailCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_DCPstvTemp_FailCnt) + 1U);
        }

        /* Switch: '<S733>/Switch2' */
        if (rtb_SCP_DCNegtvTempFA)
        {
            /* Switch: '<S733>/Switch1' incorporates:
             *  Constant: '<S733>/Constant Value1'
             *  Sum: '<S733>/Subtraction'
             *  Switch: '<S733>/Switch2'
             *  UnitDelay: '<S733>/Unit Delay'
             */
            VeAATD_Cnt_SCP_DCPstvTemp_SmpCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_DCPstvTemp_SmpCnt) + 1U);
        }

        /* End of Switch: '<S733>/Switch2' */
    }

    /* End of Switch: '<S732>/Switch1' */
    /* End of Outputs for SubSystem: '<S725>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S725>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S725>/Greater Than or Equal ' incorporates:
     *  Constant: '<S719>/Calib'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_ew = (((sint32)
        VeAATD_Cnt_SCP_DCPstvTemp_FailCnt) >= ((sint32)
        KeAATR_Cnt_SCP_DCPstvTemp_Fail));

    /* Logic: '<S725>/NOT5' incorporates:
     *  Constant: '<S720>/Calib'
     *  Logic: '<S725>/NOT3'
     *  RelationalOperator: '<S725>/Less Than  or Equal'
     */
    AATR_ac_DW.UnitDelay_DSTATE_ih = ((((sint32)VeAATD_Cnt_SCP_DCPstvTemp_SmpCnt)
        >= ((sint32)KeAATR_Cnt_SCP_DCPstvTemp_Smp)) &&
        (!AATR_ac_DW.UnitDelay1_DSTATE_ew));

    /* Switch: '<S738>/Switch1' incorporates:
     *  Constant: '<S731>/Constant Value'
     *  DataStoreWrite: '<S667>/Data Store Write'
     *  Switch: '<S737>/Switch1'
     */
    if (VeAATI_b_PostCodeClrDiagDsbl_OvrdVal_Dial)
    {
        AATR_ac_DW.NeAATR_Cnt_SCP_DCPstvTemp_Flt_MFOP = 0U;
    }
    else
    {
        if (AATR_ac_DW.UnitDelay_DSTATE_ih)
        {
            /* MinMax: '<S731>/Minimum2' incorporates:
             *  DataStoreRead: '<S667>/Data Store Read1'
             *  Switch: '<S737>/Switch1'
             */
            if (VeAATD_Cnt_SCP_DCPstvTemp_FailCnt >
                    AATR_ac_DW.NeAATR_Cnt_SCP_DCPstvTemp_Flt_MFOP)
            {
                /* DataStoreWrite: '<S667>/Data Store Write' incorporates:
                 *  Switch: '<S737>/Switch1'
                 */
                AATR_ac_DW.NeAATR_Cnt_SCP_DCPstvTemp_Flt_MFOP =
                    VeAATD_Cnt_SCP_DCPstvTemp_FailCnt;
            }

            /* End of MinMax: '<S731>/Minimum2' */
        }
    }

    /* End of Switch: '<S738>/Switch1' */

    /* VariantMerge generated from: '<S531>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktLo' incorporates:
     *  Constant: '<S718>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_f = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S531>/VeAATD_b_SCP_DCPstvTemp_LoFltDtct' incorporates:
     *  Constant: '<S667>/FALSE Constant'
     */
    VeAATD_b_SCP_DCPstvTemp_LoFltDtct = false;

    /* VariantMerge generated from: '<S531>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktHi' incorporates:
     *  Constant: '<S717>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_n0 = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S531>/VeAATD_b_SCP_DCPstvTemp_HiFltDtct' incorporates:
     *  Constant: '<S667>/FALSE Constant1'
     */
    VeAATD_b_SCP_DCPstvTemp_HiFltDtct = false;

    /* Outputs for Enabled SubSystem: '<S723>/Fail' */
    AATR_ac_Fail(AATR_ac_DW.UnitDelay1_DSTATE_ew,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_bh);

    /* End of Outputs for SubSystem: '<S723>/Fail' */

    /* Outputs for Enabled SubSystem: '<S723>/Init' */
    AATR_ac_Init_a(rtb_VariantMerge_For_Variant_Source_Va_a,
                   &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_bh);

    /* End of Outputs for SubSystem: '<S723>/Init' */

    /* Outputs for Enabled SubSystem: '<S723>/Pass' */
    AATR_ac_Pass(AATR_ac_DW.UnitDelay_DSTATE_ih,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_bh);

    /* End of Outputs for SubSystem: '<S723>/Pass' */

    /* VariantMerge generated from: '<S531>/VeAATD_b_SCP_DCPstvTemp_FltDtct' incorporates:
     *  Constant: '<S727>/Constant'
     *  RelationalOperator: '<S723>/Relational Operator'
     *  VariantMerge generated from: '<S531>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCkt'
     */
    VeAATD_b_SCP_DCPstvTemp_FltDtct = (((uint32)
        AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_bh) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S531>/If_DCPstvSnsr_M182' */
#else

    /* Outputs for Atomic SubSystem: '<S531>/Else_DCPstvSnsr_Diag' */
    /* VariantMerge generated from: '<S531>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktLo' incorporates:
     *  Constant: '<S669>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_f = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S531>/VeAATD_b_SCP_DCPstvTemp_LoFltDtct' incorporates:
     *  Constant: '<S665>/FALSE Constant'
     */
    VeAATD_b_SCP_DCPstvTemp_LoFltDtct = false;

    /* VariantMerge generated from: '<S531>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktHi' incorporates:
     *  Constant: '<S668>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_n0 = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S531>/VeAATD_b_SCP_DCPstvTemp_HiFltDtct' incorporates:
     *  Constant: '<S665>/FALSE Constant1'
     */
    VeAATD_b_SCP_DCPstvTemp_HiFltDtct = false;

    /* VariantMerge generated from: '<S531>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCkt' incorporates:
     *  Constant: '<S670>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_bh = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S531>/VeAATD_b_SCP_DCPstvTemp_FltDtct' incorporates:
     *  Constant: '<S665>/FALSE Constant2'
     */
    VeAATD_b_SCP_DCPstvTemp_FltDtct = false;

    /* End of Outputs for SubSystem: '<S531>/Else_DCPstvSnsr_Diag' */
#endif

    /* End of Outputs for SubSystem: '<S376>/DCPstvSnsr_Diag' */

    /* Outputs for Atomic SubSystem: '<S376>/DCNgtvSnsr_Diag' */
#if Rte_SysCon_Variant_AATR_13

    /* Outputs for Atomic SubSystem: '<S530>/If_DCNgtvSnsr_Diag' */
    /* Logic: '<S592>/Logical1' incorporates:
     *  Logic: '<S592>/Logical2'
     */
    rtb_SCP_DCNegtvTempFA = (((!rtb_VeAATI_b_SCP_DCNegtvTempFA_Dial) &&
        (VeAATD_b_NoCommIssueCPIM)) && rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal);

    /* RelationalOperator: '<S607>/Relational Operator3' incorporates:
     *  Constant: '<S607>/Constant3'
     *  DataStoreRead: '<S608>/StatusByte_BattChrgCouTempSnsrCCktHi'
     *  S-Function (sfix_bitop): '<S607>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a = ((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktHi) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S607>/EdgeFalling1' */
    /* Logic: '<S607>/Logical Operator' incorporates:
     *  Logic: '<S610>/OR1'
     */
    rtb_SCP_DCPstvTempFA = !rtb_VariantMerge_For_Variant_Source_Va_a;

    /* End of Outputs for SubSystem: '<S607>/EdgeFalling1' */

    /* Logic: '<S607>/Logical1' incorporates:
     *  Constant: '<S606>/Calib'
     *  Constant: '<S607>/Constant1'
     *  DataStoreRead: '<S608>/StatusByte_BattChrgCouTempSnsrCCktHi'
     *  Logic: '<S607>/Logical Operator'
     *  Logic: '<S607>/Logical10'
     *  Logic: '<S607>/Logical12'
     *  RelationalOperator: '<S607>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S607>/Bitwise Operator3'
     */
    rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial = (rtb_SCP_DCNegtvTempFA &&
        ((!KeAATR_b_BattChrgCouTempSnsrCCktHi_LtchEnbl) || (((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktHi) & 1U) == 0U) ||
        rtb_SCP_DCPstvTempFA)));

    /* Outputs for Atomic SubSystem: '<S607>/EdgeFalling1' */
    /* Logic: '<S610>/AND' incorporates:
     *  UnitDelay: '<S610>/Unit Delay'
     */
    rtb_SCP_DCPstvTempFA = (rtb_SCP_DCPstvTempFA &&
                            (AATR_ac_DW.UnitDelay_DSTATE_bl));

    /* Update for UnitDelay: '<S610>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_bl = rtb_VariantMerge_For_Variant_Source_Va_a;

    /* End of Outputs for SubSystem: '<S607>/EdgeFalling1' */

    /* Logic: '<S607>/Logical5' */
    rtb_VariantMerge_For_Variant_Source_Va_a =
        ((VeAATD_b_DsblDiagFailSafeOrCdeClr) || rtb_SCP_DCPstvTempFA);

    /* Outputs for Atomic SubSystem: '<S609>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S609>/Counter Reset  Enabled ' */
    /* Switch: '<S616>/Switch1' incorporates:
     *  Constant: '<S602>/Calib'
     *  Logic: '<S609>/Fail Counter Reset'
     *  Logic: '<S609>/NOT6'
     *  RelationalOperator: '<S597>/Relational Operator1'
     *  Switch: '<S616>/Switch2'
     *  Switch: '<S617>/Switch1'
     *  UnitDelay: '<S609>/Unit Delay'
     *  UnitDelay: '<S609>/Unit Delay1'
     */
    if ((rtb_VariantMerge_For_Variant_Source_Va_a ||
            (AATR_ac_DW.UnitDelay_DSTATE_lk)) || (AATR_ac_DW.UnitDelay1_DSTATE_j))
    {
        /* Switch: '<S616>/Switch1' incorporates:
         *  Constant: '<S616>/Constant Value2'
         */
        VeAATD_Cnt_SCP_DCNegtvTemp_HiFailCnt = 0U;

        /* Switch: '<S617>/Switch1' incorporates:
         *  Constant: '<S617>/Constant Value2'
         */
        VeAATD_Cnt_SCP_DCNegtvTemp_HiSmpCnt = 0U;
    }
    else
    {
        if (rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial &&
                (rtb_VeAATI_T_SCP_DCNegtvTemp_Dial ==
                 KeAATR_T_SCP_DCNegtvTemp_ShrtHigh))
        {
            /* Switch: '<S616>/Switch1' incorporates:
             *  Constant: '<S616>/Constant Value1'
             *  Sum: '<S616>/Subtraction'
             *  Switch: '<S616>/Switch2'
             *  UnitDelay: '<S616>/Unit Delay'
             */
            VeAATD_Cnt_SCP_DCNegtvTemp_HiFailCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_DCNegtvTemp_HiFailCnt) + 1U);
        }

        /* Switch: '<S617>/Switch2' */
        if (rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial)
        {
            /* Switch: '<S617>/Switch1' incorporates:
             *  Constant: '<S617>/Constant Value1'
             *  Sum: '<S617>/Subtraction'
             *  Switch: '<S617>/Switch2'
             *  UnitDelay: '<S617>/Unit Delay'
             */
            VeAATD_Cnt_SCP_DCNegtvTemp_HiSmpCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_DCNegtvTemp_HiSmpCnt) + 1U);
        }

        /* End of Switch: '<S617>/Switch2' */
    }

    /* End of Switch: '<S616>/Switch1' */
    /* End of Outputs for SubSystem: '<S609>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S609>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S609>/Greater Than or Equal ' incorporates:
     *  Constant: '<S604>/Calib'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_j = (((sint32)
        VeAATD_Cnt_SCP_DCNegtvTemp_HiFailCnt) >= ((sint32)
        KeAATR_Cnt_SCP_DCNegtvTemp_HiFail));

    /* Logic: '<S609>/NOT5' incorporates:
     *  Constant: '<S605>/Calib'
     *  Logic: '<S609>/NOT3'
     *  RelationalOperator: '<S609>/Less Than  or Equal'
     */
    rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial = ((((sint32)
        VeAATD_Cnt_SCP_DCNegtvTemp_HiSmpCnt) >= ((sint32)
        KeAATR_Cnt_SCP_DCNegtvTemp_HiSmp)) && (!AATR_ac_DW.UnitDelay1_DSTATE_j));

    /* Switch: '<S622>/Switch1' incorporates:
     *  Constant: '<S615>/Constant Value'
     *  DataStoreWrite: '<S599>/Data Store Write4'
     *  Switch: '<S621>/Switch1'
     */
    if (VeAATI_b_PostCodeClrDiagDsbl_OvrdVal_Dial)
    {
        AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_HiFlt_MFOP = 0U;
    }
    else
    {
        if (rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial)
        {
            /* MinMax: '<S615>/Minimum2' incorporates:
             *  DataStoreRead: '<S599>/Data Store Read3'
             *  Switch: '<S621>/Switch1'
             */
            if (VeAATD_Cnt_SCP_DCNegtvTemp_HiFailCnt >
                    AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_HiFlt_MFOP)
            {
                /* DataStoreWrite: '<S599>/Data Store Write4' incorporates:
                 *  Switch: '<S621>/Switch1'
                 */
                AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_HiFlt_MFOP =
                    VeAATD_Cnt_SCP_DCNegtvTemp_HiFailCnt;
            }

            /* End of MinMax: '<S615>/Minimum2' */
        }
    }

    /* End of Switch: '<S622>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S607>/Fail' */
    AATR_ac_Fail(AATR_ac_DW.UnitDelay1_DSTATE_j,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_i);

    /* End of Outputs for SubSystem: '<S607>/Fail' */

    /* Outputs for Enabled SubSystem: '<S607>/Init' */
    AATR_ac_Init_a(rtb_VariantMerge_For_Variant_Source_Va_a,
                   &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_i);

    /* End of Outputs for SubSystem: '<S607>/Init' */

    /* Outputs for Enabled SubSystem: '<S607>/Pass' */
    AATR_ac_Pass(rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_i);

    /* End of Outputs for SubSystem: '<S607>/Pass' */

    /* VariantMerge generated from: '<S530>/VeAATD_b_SCP_DCNegtvTemp_HiFltDtct' incorporates:
     *  Constant: '<S611>/Constant'
     *  RelationalOperator: '<S607>/Relational Operator'
     *  VariantMerge generated from: '<S530>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktHi'
     */
    VeAATD_b_SCP_DCNegtvTemp_HiFltDtct = (((uint32)
        AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_i) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S626>/Relational Operator3' incorporates:
     *  Constant: '<S626>/Constant3'
     *  DataStoreRead: '<S627>/StatusByte_BattChrgCouTempSnsrCCktLo'
     *  S-Function (sfix_bitop): '<S626>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a = ((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktLo) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S626>/EdgeFalling1' */
    /* Logic: '<S626>/Logical Operator' incorporates:
     *  Logic: '<S629>/OR1'
     */
    rtb_SCP_DCPstvTempFA = !rtb_VariantMerge_For_Variant_Source_Va_a;

    /* End of Outputs for SubSystem: '<S626>/EdgeFalling1' */

    /* Logic: '<S626>/Logical1' incorporates:
     *  Constant: '<S625>/Calib'
     *  Constant: '<S626>/Constant1'
     *  DataStoreRead: '<S627>/StatusByte_BattChrgCouTempSnsrCCktLo'
     *  Logic: '<S626>/Logical Operator'
     *  Logic: '<S626>/Logical10'
     *  Logic: '<S626>/Logical12'
     *  RelationalOperator: '<S626>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S626>/Bitwise Operator3'
     */
    rtb_SCP_DCNegtvTempFA = (rtb_SCP_DCNegtvTempFA &&
        ((!KeAATR_b_BattChrgCouTempSnsrCCktLo_LtchEnbl) || (((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktLo) & 1U) == 0U) ||
        rtb_SCP_DCPstvTempFA)));

    /* Outputs for Atomic SubSystem: '<S626>/EdgeFalling1' */
    /* Logic: '<S629>/AND' incorporates:
     *  UnitDelay: '<S629>/Unit Delay'
     */
    rtb_SCP_DCPstvTempFA = (rtb_SCP_DCPstvTempFA &&
                            (AATR_ac_DW.UnitDelay_DSTATE_ab));

    /* Update for UnitDelay: '<S629>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_ab = rtb_VariantMerge_For_Variant_Source_Va_a;

    /* End of Outputs for SubSystem: '<S626>/EdgeFalling1' */

    /* Logic: '<S626>/Logical5' */
    rtb_VariantMerge_For_Variant_Source_Va_a =
        ((VeAATD_b_DsblDiagFailSafeOrCdeClr) || rtb_SCP_DCPstvTempFA);

    /* UnitDelay: '<S628>/Unit Delay1' incorporates:
     *  UnitDelay: '<S609>/Unit Delay'
     */
    AATR_ac_DW.UnitDelay_DSTATE_lk = AATR_ac_DW.UnitDelay1_DSTATE_fs;

    /* Outputs for Atomic SubSystem: '<S628>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S628>/Counter Reset  Enabled ' */
    /* Switch: '<S635>/Switch1' incorporates:
     *  Constant: '<S603>/Calib'
     *  Logic: '<S628>/Fail Counter Reset'
     *  Logic: '<S628>/NOT6'
     *  RelationalOperator: '<S598>/Relational Operator'
     *  Switch: '<S635>/Switch2'
     *  Switch: '<S636>/Switch1'
     *  UnitDelay: '<S609>/Unit Delay'
     *  UnitDelay: '<S628>/Unit Delay'
     */
    if ((rtb_VariantMerge_For_Variant_Source_Va_a ||
            (AATR_ac_DW.UnitDelay_DSTATE_de)) || (AATR_ac_DW.UnitDelay_DSTATE_lk))
    {
        /* Switch: '<S635>/Switch1' incorporates:
         *  Constant: '<S635>/Constant Value2'
         */
        VeAATD_Cnt_SCP_DCNegtvTemp_LoFailCnt = 0U;

        /* Switch: '<S636>/Switch1' incorporates:
         *  Constant: '<S636>/Constant Value2'
         */
        VeAATD_Cnt_SCP_DCNegtvTemp_LoSmpCnt = 0U;
    }
    else
    {
        if (rtb_SCP_DCNegtvTempFA && (rtb_VeAATI_T_SCP_DCNegtvTemp_Dial ==
                KeAATR_T_SCP_DCNegtvTemp_ShrtLow))
        {
            /* Switch: '<S635>/Switch1' incorporates:
             *  Constant: '<S635>/Constant Value1'
             *  Sum: '<S635>/Subtraction'
             *  Switch: '<S635>/Switch2'
             *  UnitDelay: '<S635>/Unit Delay'
             */
            VeAATD_Cnt_SCP_DCNegtvTemp_LoFailCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_DCNegtvTemp_LoFailCnt) + 1U);
        }

        /* Switch: '<S636>/Switch2' */
        if (rtb_SCP_DCNegtvTempFA)
        {
            /* Switch: '<S636>/Switch1' incorporates:
             *  Constant: '<S636>/Constant Value1'
             *  Sum: '<S636>/Subtraction'
             *  Switch: '<S636>/Switch2'
             *  UnitDelay: '<S636>/Unit Delay'
             */
            VeAATD_Cnt_SCP_DCNegtvTemp_LoSmpCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_DCNegtvTemp_LoSmpCnt) + 1U);
        }

        /* End of Switch: '<S636>/Switch2' */
    }

    /* End of Switch: '<S635>/Switch1' */
    /* End of Outputs for SubSystem: '<S628>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S628>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S628>/Greater Than or Equal ' incorporates:
     *  Constant: '<S623>/Calib'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_fs = (((sint32)
        VeAATD_Cnt_SCP_DCNegtvTemp_LoFailCnt) >= ((sint32)
        KeAATR_Cnt_SCP_DCNegtvTemp_LoFail));

    /* Logic: '<S628>/NOT5' incorporates:
     *  Constant: '<S624>/Calib'
     *  Logic: '<S628>/NOT3'
     *  RelationalOperator: '<S628>/Less Than  or Equal'
     */
    AATR_ac_DW.UnitDelay_DSTATE_de = ((((sint32)
        VeAATD_Cnt_SCP_DCNegtvTemp_LoSmpCnt) >= ((sint32)
        KeAATR_Cnt_SCP_DCNegtvTemp_LoSmp)) && (!AATR_ac_DW.UnitDelay1_DSTATE_fs));

    /* Switch: '<S641>/Switch1' incorporates:
     *  Constant: '<S634>/Constant Value'
     *  DataStoreWrite: '<S600>/Data Store Write3'
     *  Switch: '<S640>/Switch1'
     */
    if (VeAATI_b_PostCodeClrDiagDsbl_OvrdVal_Dial)
    {
        AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_LoFlt_MFOP = 0U;
    }
    else
    {
        if (AATR_ac_DW.UnitDelay_DSTATE_de)
        {
            /* MinMax: '<S634>/Minimum2' incorporates:
             *  DataStoreRead: '<S600>/Data Store Read1'
             *  Switch: '<S640>/Switch1'
             */
            if (VeAATD_Cnt_SCP_DCNegtvTemp_LoFailCnt >
                    AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_LoFlt_MFOP)
            {
                /* DataStoreWrite: '<S600>/Data Store Write3' incorporates:
                 *  Switch: '<S640>/Switch1'
                 */
                AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_LoFlt_MFOP =
                    VeAATD_Cnt_SCP_DCNegtvTemp_LoFailCnt;
            }

            /* End of MinMax: '<S634>/Minimum2' */
        }
    }

    /* End of Switch: '<S641>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S626>/Fail' */
    AATR_ac_Fail(AATR_ac_DW.UnitDelay1_DSTATE_fs,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_d);

    /* End of Outputs for SubSystem: '<S626>/Fail' */

    /* Outputs for Enabled SubSystem: '<S626>/Init' */
    AATR_ac_Init_a(rtb_VariantMerge_For_Variant_Source_Va_a,
                   &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_d);

    /* End of Outputs for SubSystem: '<S626>/Init' */

    /* Outputs for Enabled SubSystem: '<S626>/Pass' */
    AATR_ac_Pass(AATR_ac_DW.UnitDelay_DSTATE_de,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_d);

    /* End of Outputs for SubSystem: '<S626>/Pass' */

    /* VariantMerge generated from: '<S530>/VeAATD_b_SCP_DCNegtvTemp_LoFltDtct' incorporates:
     *  Constant: '<S630>/Constant'
     *  RelationalOperator: '<S626>/Relational Operator'
     *  VariantMerge generated from: '<S530>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktLo'
     */
    VeAATD_b_SCP_DCNegtvTemp_LoFltDtct = (((uint32)
        AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_d) == CeDFIB_e_Fail);

    /* VariantMerge generated from: '<S530>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCkt' incorporates:
     *  Constant: '<S642>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_a = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S530>/VeAATD_b_SCP_DCNegtvTemp_FltDtct' incorporates:
     *  Constant: '<S601>/FALSE Constant'
     */
    VeAATD_b_SCP_DCNegtvTemp_FltDtct = false;

    /* Update for UnitDelay: '<S609>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_lk = rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial;

    /* End of Outputs for SubSystem: '<S530>/If_DCNgtvSnsr_Diag' */
#elif Rte_SysCon_Variant_AATR_14

    /* Outputs for Atomic SubSystem: '<S530>/If_DCNgtvSnsr_M182' */
    /* RelationalOperator: '<S649>/Relational Operator3' incorporates:
     *  Constant: '<S649>/Constant3'
     *  DataStoreRead: '<S650>/StatusByte_BattChrgCouTempSnsrCCkt'
     *  S-Function (sfix_bitop): '<S649>/Bitwise Operator2'
     */
    rtb_SCP_DCNegtvTempFA = ((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCkt) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S649>/EdgeFalling1' */
    /* Logic: '<S649>/Logical Operator' incorporates:
     *  Logic: '<S652>/OR1'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a = !rtb_SCP_DCNegtvTempFA;

    /* End of Outputs for SubSystem: '<S649>/EdgeFalling1' */

    /* Logic: '<S649>/Logical1' incorporates:
     *  Constant: '<S647>/Calib'
     *  Constant: '<S648>/Calib'
     *  Constant: '<S649>/Constant1'
     *  DataStoreRead: '<S650>/StatusByte_BattChrgCouTempSnsrCCkt'
     *  Logic: '<S593>/Logical Operator'
     *  Logic: '<S593>/Logical Operator1'
     *  Logic: '<S649>/Logical Operator'
     *  Logic: '<S649>/Logical10'
     *  Logic: '<S649>/Logical12'
     *  RelationalOperator: '<S649>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S649>/Bitwise Operator3'
     */
    rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial = (((KeAATR_b_EnbSCP_DCNegtvTemp) &&
        (rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal && (VeAATD_b_NoCommIssueCPIM)))
        && ((!KeAATR_b_BattChrgCouTempSnsrCCkt_LtchEnbl) || (((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCkt) & 1U) == 0U) ||
        rtb_VariantMerge_For_Variant_Source_Va_a)));

    /* Outputs for Atomic SubSystem: '<S649>/EdgeFalling1' */
    /* Logic: '<S652>/AND' incorporates:
     *  UnitDelay: '<S652>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a =
        (rtb_VariantMerge_For_Variant_Source_Va_a &&
         (AATR_ac_DW.UnitDelay_DSTATE_dz));

    /* Update for UnitDelay: '<S652>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_dz = rtb_SCP_DCNegtvTempFA;

    /* End of Outputs for SubSystem: '<S649>/EdgeFalling1' */

    /* Logic: '<S649>/Logical5' */
    rtb_SCP_DCNegtvTempFA = ((VeAATD_b_DsblDiagFailSafeOrCdeClr) ||
        rtb_VariantMerge_For_Variant_Source_Va_a);

    /* Outputs for Atomic SubSystem: '<S651>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S651>/Counter Reset  Enabled ' */
    /* Switch: '<S658>/Switch1' incorporates:
     *  Logic: '<S651>/Fail Counter Reset'
     *  Logic: '<S651>/NOT6'
     *  Switch: '<S658>/Switch2'
     *  Switch: '<S659>/Switch1'
     *  UnitDelay: '<S651>/Unit Delay'
     *  UnitDelay: '<S651>/Unit Delay1'
     */
    if ((rtb_SCP_DCNegtvTempFA || (AATR_ac_DW.UnitDelay_DSTATE_jx)) ||
            (AATR_ac_DW.UnitDelay1_DSTATE_h))
    {
        /* Switch: '<S658>/Switch1' incorporates:
         *  Constant: '<S658>/Constant Value2'
         */
        VeAATD_Cnt_SCP_DCNegtvTemp_FailCnt = 0U;

        /* Switch: '<S659>/Switch1' incorporates:
         *  Constant: '<S659>/Constant Value2'
         */
        VeAATD_Cnt_SCP_DCNegtvTemp_SmpCnt = 0U;
    }
    else
    {
        if (rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial &&
                rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial)
        {
            /* Switch: '<S658>/Switch1' incorporates:
             *  Constant: '<S658>/Constant Value1'
             *  Sum: '<S658>/Subtraction'
             *  Switch: '<S658>/Switch2'
             *  UnitDelay: '<S658>/Unit Delay'
             */
            VeAATD_Cnt_SCP_DCNegtvTemp_FailCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_DCNegtvTemp_FailCnt) + 1U);
        }

        /* Switch: '<S659>/Switch2' */
        if (rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial)
        {
            /* Switch: '<S659>/Switch1' incorporates:
             *  Constant: '<S659>/Constant Value1'
             *  Sum: '<S659>/Subtraction'
             *  Switch: '<S659>/Switch2'
             *  UnitDelay: '<S659>/Unit Delay'
             */
            VeAATD_Cnt_SCP_DCNegtvTemp_SmpCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_DCNegtvTemp_SmpCnt) + 1U);
        }

        /* End of Switch: '<S659>/Switch2' */
    }

    /* End of Switch: '<S658>/Switch1' */
    /* End of Outputs for SubSystem: '<S651>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S651>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S651>/Greater Than or Equal ' incorporates:
     *  Constant: '<S645>/Calib'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_h = (((sint32)
        VeAATD_Cnt_SCP_DCNegtvTemp_FailCnt) >= ((sint32)
        KeAATR_Cnt_SCP_DCNegtvTemp_Fail));

    /* Logic: '<S651>/NOT5' incorporates:
     *  Constant: '<S646>/Calib'
     *  Logic: '<S651>/NOT3'
     *  RelationalOperator: '<S651>/Less Than  or Equal'
     */
    AATR_ac_DW.UnitDelay_DSTATE_jx = ((((sint32)
        VeAATD_Cnt_SCP_DCNegtvTemp_SmpCnt) >= ((sint32)
        KeAATR_Cnt_SCP_DCNegtvTemp_Smp)) && (!AATR_ac_DW.UnitDelay1_DSTATE_h));

    /* Switch: '<S664>/Switch1' incorporates:
     *  Constant: '<S657>/Constant Value'
     *  DataStoreWrite: '<S593>/Data Store Write'
     *  Switch: '<S663>/Switch1'
     */
    if (VeAATI_b_PostCodeClrDiagDsbl_OvrdVal_Dial)
    {
        AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_Flt_MFOP = 0U;
    }
    else
    {
        if (AATR_ac_DW.UnitDelay_DSTATE_jx)
        {
            /* MinMax: '<S657>/Minimum2' incorporates:
             *  DataStoreRead: '<S593>/Data Store Read1'
             *  Switch: '<S663>/Switch1'
             */
            if (VeAATD_Cnt_SCP_DCNegtvTemp_FailCnt >
                    AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_Flt_MFOP)
            {
                /* DataStoreWrite: '<S593>/Data Store Write' incorporates:
                 *  Switch: '<S663>/Switch1'
                 */
                AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_Flt_MFOP =
                    VeAATD_Cnt_SCP_DCNegtvTemp_FailCnt;
            }

            /* End of MinMax: '<S657>/Minimum2' */
        }
    }

    /* End of Switch: '<S664>/Switch1' */

    /* VariantMerge generated from: '<S530>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktLo' incorporates:
     *  Constant: '<S644>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_d = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S530>/VeAATD_b_SCP_DCNegtvTemp_LoFltDtct' incorporates:
     *  Constant: '<S593>/FALSE Constant'
     */
    VeAATD_b_SCP_DCNegtvTemp_LoFltDtct = false;

    /* VariantMerge generated from: '<S530>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktHi' incorporates:
     *  Constant: '<S643>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_i = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S530>/VeAATD_b_SCP_DCNegtvTemp_HiFltDtct' incorporates:
     *  Constant: '<S593>/FALSE Constant1'
     */
    VeAATD_b_SCP_DCNegtvTemp_HiFltDtct = false;

    /* Outputs for Enabled SubSystem: '<S649>/Fail' */
    AATR_ac_Fail(AATR_ac_DW.UnitDelay1_DSTATE_h,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_a);

    /* End of Outputs for SubSystem: '<S649>/Fail' */

    /* Outputs for Enabled SubSystem: '<S649>/Init' */
    AATR_ac_Init_a(rtb_SCP_DCNegtvTempFA,
                   &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_a);

    /* End of Outputs for SubSystem: '<S649>/Init' */

    /* Outputs for Enabled SubSystem: '<S649>/Pass' */
    AATR_ac_Pass(AATR_ac_DW.UnitDelay_DSTATE_jx,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_a);

    /* End of Outputs for SubSystem: '<S649>/Pass' */

    /* VariantMerge generated from: '<S530>/VeAATD_b_SCP_DCNegtvTemp_FltDtct' incorporates:
     *  Constant: '<S653>/Constant'
     *  RelationalOperator: '<S649>/Relational Operator'
     *  VariantMerge generated from: '<S530>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCkt'
     */
    VeAATD_b_SCP_DCNegtvTemp_FltDtct = (((uint32)
        AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_a) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S530>/If_DCNgtvSnsr_M182' */
#else

    /* Outputs for Atomic SubSystem: '<S530>/Else_DCNgtvSnsr_Diag' */
    /* VariantMerge generated from: '<S530>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktLo' incorporates:
     *  Constant: '<S595>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_d = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S530>/VeAATD_b_SCP_DCNegtvTemp_LoFltDtct' incorporates:
     *  Constant: '<S591>/FALSE Constant'
     */
    VeAATD_b_SCP_DCNegtvTemp_LoFltDtct = false;

    /* VariantMerge generated from: '<S530>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktHi' incorporates:
     *  Constant: '<S594>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_i = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S530>/VeAATD_b_SCP_DCNegtvTemp_HiFltDtct' incorporates:
     *  Constant: '<S591>/FALSE Constant1'
     */
    VeAATD_b_SCP_DCNegtvTemp_HiFltDtct = false;

    /* VariantMerge generated from: '<S530>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCkt' incorporates:
     *  Constant: '<S596>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_a = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S530>/VeAATD_b_SCP_DCNegtvTemp_FltDtct' incorporates:
     *  Constant: '<S591>/FALSE Constant2'
     */
    VeAATD_b_SCP_DCNegtvTemp_FltDtct = false;

    /* End of Outputs for SubSystem: '<S530>/Else_DCNgtvSnsr_Diag' */
#endif

    /* End of Outputs for SubSystem: '<S376>/DCNgtvSnsr_Diag' */

    /* Outputs for Atomic SubSystem: '<S376>/SCPInletSnsrDiag' */
#if Rte_SysCon_Variant_AATR_10

    /* Outputs for Atomic SubSystem: '<S534>/IfSCPInletSnsrDiag' */
    /* Logic: '<S740>/Logical Operator2' incorporates:
     *  Logic: '<S740>/Logical2'
     */
    rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial =
        (((!AATR_ac_B.VeAATI_b_SCP_InletTempFA_Dial_AS) &&
          (VeAATD_b_NoCommIssueCPIM)) &&
         rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal);

    /* S-Function (sfix_bitop): '<S752>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S752>/StatusByte_BatChaCouTemSenACirLow'
     *  S-Function (sfix_bitop): '<S780>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_0 = ((uint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirLow) & 64U;

    /* Logic: '<S745>/Logical Operator4' incorporates:
     *  Constant: '<S752>/Constant1'
     *  Constant: '<S752>/Constant2'
     *  DataStoreRead: '<S752>/StatusByte_BatChaCouTemSenACirLow'
     *  Logic: '<S745>/Logical1'
     *  Logic: '<S752>/Logical Operator'
     *  RelationalOperator: '<S752>/Relational Operator1'
     *  RelationalOperator: '<S752>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S752>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S752>/Bitwise Operator2'
     */
    VeAATD_b_EnblSCPInletTemp_ShrtHi = (rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial &&
        (((((sint32)AATR_ac_DW.StatusByte_BatChaCouTemSenACirLow) & 1) <= 0) ||
         (rtb_VariantMerge_For_Variant_Source_Va_0 != 0U)));

    /* S-Function (sfix_bitop): '<S760>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S761>/StatusByte_BatChaCouTemSenACirHig'
     *  S-Function (sfix_bitop): '<S753>/Bitwise Operator1'
     */
    rtb_VariantMerge_For_Variant_Source_Va_2 = ((uint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirHig) & 64U;

    /* RelationalOperator: '<S760>/Relational Operator3' incorporates:
     *  Constant: '<S760>/Constant3'
     *  S-Function (sfix_bitop): '<S760>/Bitwise Operator2'
     */
    rtb_SCP_DCNegtvTempFA = (rtb_VariantMerge_For_Variant_Source_Va_2 == 0U);

    /* Outputs for Atomic SubSystem: '<S760>/EdgeFalling1' */
    /* Logic: '<S760>/Logical Operator' incorporates:
     *  Logic: '<S763>/OR1'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a = !rtb_SCP_DCNegtvTempFA;

    /* End of Outputs for SubSystem: '<S760>/EdgeFalling1' */

    /* Logic: '<S760>/Logical1' incorporates:
     *  Constant: '<S758>/Calib'
     *  Constant: '<S759>/Calib'
     *  Constant: '<S760>/Constant1'
     *  DataStoreRead: '<S761>/StatusByte_BatChaCouTemSenACirHig'
     *  Logic: '<S749>/Logical Operator1'
     *  Logic: '<S760>/Logical Operator'
     *  Logic: '<S760>/Logical10'
     *  Logic: '<S760>/Logical12'
     *  RelationalOperator: '<S760>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S760>/Bitwise Operator3'
     */
    rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial =
        (((KeAATR_b_EnblSCP_InletTemp_ShrtHigh) &&
          (VeAATD_b_EnblSCPInletTemp_ShrtHi)) &&
         ((!KeAATR_b_BatChaCouTemSenACirHig_LtchEnbl) || (((((uint32)
              AATR_ac_DW.StatusByte_BatChaCouTemSenACirHig) & 1U) == 0U) ||
           rtb_VariantMerge_For_Variant_Source_Va_a)));

    /* RelationalOperator: '<S747>/Relational Operator1' incorporates:
     *  Constant: '<S754>/Calib'
     */
    VeAATD_b_SCPInletTemp_ShrtHi_FltSymptm =
        (AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS_k ==
         KeAATR_T_SCP_InletTemp_ShrtHigh);

    /* Outputs for Atomic SubSystem: '<S760>/EdgeFalling1' */
    /* Logic: '<S763>/AND' incorporates:
     *  UnitDelay: '<S763>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a =
        (rtb_VariantMerge_For_Variant_Source_Va_a &&
         (AATR_ac_DW.UnitDelay_DSTATE_bk));

    /* Update for UnitDelay: '<S763>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_bk = rtb_SCP_DCNegtvTempFA;

    /* End of Outputs for SubSystem: '<S760>/EdgeFalling1' */

    /* Logic: '<S760>/Logical5' */
    rtb_SCP_DCNegtvTempFA = ((VeAATD_b_DsblDiagFailSafeOrCdeClr) ||
        rtb_VariantMerge_For_Variant_Source_Va_a);

    /* Outputs for Atomic SubSystem: '<S762>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S762>/Counter Reset  Enabled ' */
    /* Switch: '<S769>/Switch1' incorporates:
     *  Logic: '<S762>/Fail Counter Reset'
     *  Logic: '<S762>/NOT6'
     *  Switch: '<S769>/Switch2'
     *  Switch: '<S770>/Switch1'
     *  UnitDelay: '<S762>/Unit Delay'
     *  UnitDelay: '<S762>/Unit Delay1'
     */
    if ((rtb_SCP_DCNegtvTempFA || (AATR_ac_DW.UnitDelay_DSTATE_mf)) ||
            (AATR_ac_DW.UnitDelay1_DSTATE_m))
    {
        /* Switch: '<S769>/Switch1' incorporates:
         *  Constant: '<S769>/Constant Value2'
         */
        VeAATD_Cnt_SCP_InletTemp_HiFailCnt = 0U;

        /* Switch: '<S770>/Switch1' incorporates:
         *  Constant: '<S770>/Constant Value2'
         */
        VeAATD_Cnt_SCP_InletTemp_HiSmpCnt = 0U;
    }
    else
    {
        if (rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial &&
                (VeAATD_b_SCPInletTemp_ShrtHi_FltSymptm))
        {
            /* Switch: '<S769>/Switch1' incorporates:
             *  Constant: '<S769>/Constant Value1'
             *  Sum: '<S769>/Subtraction'
             *  Switch: '<S769>/Switch2'
             *  UnitDelay: '<S769>/Unit Delay'
             */
            VeAATD_Cnt_SCP_InletTemp_HiFailCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_InletTemp_HiFailCnt) + 1U);
        }

        /* Switch: '<S770>/Switch2' */
        if (rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial)
        {
            /* Switch: '<S770>/Switch1' incorporates:
             *  Constant: '<S770>/Constant Value1'
             *  Sum: '<S770>/Subtraction'
             *  Switch: '<S770>/Switch2'
             *  UnitDelay: '<S770>/Unit Delay'
             */
            VeAATD_Cnt_SCP_InletTemp_HiSmpCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_InletTemp_HiSmpCnt) + 1U);
        }

        /* End of Switch: '<S770>/Switch2' */
    }

    /* End of Switch: '<S769>/Switch1' */
    /* End of Outputs for SubSystem: '<S762>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S762>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S762>/Greater Than or Equal ' incorporates:
     *  Constant: '<S756>/Calib'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_m = (((sint32)
        VeAATD_Cnt_SCP_InletTemp_HiFailCnt) >= ((sint32)
        KeAATR_Cnt_SCP_InletTemp_HiFail));

    /* Logic: '<S762>/NOT5' incorporates:
     *  Constant: '<S757>/Calib'
     *  Logic: '<S762>/NOT3'
     *  RelationalOperator: '<S762>/Less Than  or Equal'
     */
    rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial = ((((sint32)
        VeAATD_Cnt_SCP_InletTemp_HiSmpCnt) >= ((sint32)
        KeAATR_Cnt_SCP_InletTemp_HiSmp)) && (!AATR_ac_DW.UnitDelay1_DSTATE_m));

    /* Switch: '<S775>/Switch1' incorporates:
     *  Constant: '<S768>/Constant Value'
     *  DataStoreWrite: '<S749>/Data Store Write'
     *  Switch: '<S774>/Switch1'
     */
    if (VeAATI_b_PostCodeClrDiagDsbl_OvrdVal_Dial)
    {
        AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_HiFlt_MFOP = 0U;
    }
    else
    {
        if (rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial)
        {
            /* MinMax: '<S768>/Minimum2' incorporates:
             *  DataStoreRead: '<S749>/Data Store Read3'
             *  Switch: '<S774>/Switch1'
             */
            if (VeAATD_Cnt_SCP_InletTemp_HiFailCnt >
                    AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_HiFlt_MFOP)
            {
                /* DataStoreWrite: '<S749>/Data Store Write' incorporates:
                 *  Switch: '<S774>/Switch1'
                 */
                AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_HiFlt_MFOP =
                    VeAATD_Cnt_SCP_InletTemp_HiFailCnt;
            }

            /* End of MinMax: '<S768>/Minimum2' */
        }
    }

    /* End of Switch: '<S775>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S760>/Fail' */
    AATR_ac_Fail(AATR_ac_DW.UnitDelay1_DSTATE_m,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_h);

    /* End of Outputs for SubSystem: '<S760>/Fail' */

    /* Outputs for Enabled SubSystem: '<S760>/Init' */
    AATR_ac_Init_a(rtb_SCP_DCNegtvTempFA,
                   &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_h);

    /* End of Outputs for SubSystem: '<S760>/Init' */

    /* Outputs for Enabled SubSystem: '<S760>/Pass' */
    AATR_ac_Pass(rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_h);

    /* End of Outputs for SubSystem: '<S760>/Pass' */

    /* VariantMerge generated from: '<S534>/VeAATD_b_SCP_InletTemp_HiFltDtct' incorporates:
     *  Constant: '<S764>/Constant'
     *  RelationalOperator: '<S760>/Relational Operator'
     *  VariantMerge generated from: '<S534>/VeAATR_e_FaultSts_BatChaCouTemSenACirHig'
     */
    VeAATD_b_SCP_InletTemp_HiFltDtct = (((uint32)
        AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_h) == CeDFIB_e_Fail);

    /* Logic: '<S746>/Logical Operator3' incorporates:
     *  Constant: '<S753>/Constant1'
     *  Constant: '<S753>/Constant2'
     *  DataStoreRead: '<S753>/StatusByte_BatChaCouTemSenACirHig'
     *  Logic: '<S746>/Logical3'
     *  Logic: '<S753>/Logical Operator'
     *  RelationalOperator: '<S753>/Relational Operator1'
     *  RelationalOperator: '<S753>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S753>/Bitwise Operator2'
     */
    VeAATD_b_EnblSCPInletTemp_ShrtLo = (rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial &&
        (((((sint32)AATR_ac_DW.StatusByte_BatChaCouTemSenACirHig) & 1) <= 0) ||
         (rtb_VariantMerge_For_Variant_Source_Va_2 != 0U)));

    /* RelationalOperator: '<S780>/Relational Operator3' incorporates:
     *  Constant: '<S780>/Constant3'
     */
    rtb_SCP_DCNegtvTempFA = (rtb_VariantMerge_For_Variant_Source_Va_0 == 0U);

    /* Outputs for Atomic SubSystem: '<S780>/EdgeFalling1' */
    /* Logic: '<S780>/Logical Operator' incorporates:
     *  Logic: '<S783>/OR1'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a = !rtb_SCP_DCNegtvTempFA;

    /* End of Outputs for SubSystem: '<S780>/EdgeFalling1' */

    /* Logic: '<S780>/Logical1' incorporates:
     *  Constant: '<S778>/Calib'
     *  Constant: '<S779>/Calib'
     *  Constant: '<S780>/Constant1'
     *  DataStoreRead: '<S781>/StatusByte_BatChaCouTemSenACirLow'
     *  Logic: '<S750>/Logical Operator'
     *  Logic: '<S780>/Logical Operator'
     *  Logic: '<S780>/Logical10'
     *  Logic: '<S780>/Logical12'
     *  RelationalOperator: '<S780>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S780>/Bitwise Operator3'
     */
    rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial = (((KeAATR_b_EnbSCP_InletTemp_ShrtLow) &&
        (VeAATD_b_EnblSCPInletTemp_ShrtLo)) &&
        ((!KeAATR_b_BatChaCouTemSenACirLow_LtchEnbl) || (((((uint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirLow) & 1U) == 0U) ||
        rtb_VariantMerge_For_Variant_Source_Va_a)));

    /* RelationalOperator: '<S748>/Relational Operator' incorporates:
     *  Constant: '<S755>/Calib'
     */
    VeAATD_b_SCPInletTemp_ShrtLo_FltSymptm =
        (AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS_k ==
         KeAATR_T_SCP_InletTemp_ShrtLow);

    /* Outputs for Atomic SubSystem: '<S780>/EdgeFalling1' */
    /* Logic: '<S783>/AND' incorporates:
     *  UnitDelay: '<S783>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a =
        (rtb_VariantMerge_For_Variant_Source_Va_a &&
         (AATR_ac_DW.UnitDelay_DSTATE_au));

    /* Update for UnitDelay: '<S783>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_au = rtb_SCP_DCNegtvTempFA;

    /* End of Outputs for SubSystem: '<S780>/EdgeFalling1' */

    /* Logic: '<S780>/Logical5' */
    rtb_SCP_DCNegtvTempFA = ((VeAATD_b_DsblDiagFailSafeOrCdeClr) ||
        rtb_VariantMerge_For_Variant_Source_Va_a);

    /* UnitDelay: '<S782>/Unit Delay1' incorporates:
     *  UnitDelay: '<S762>/Unit Delay'
     */
    AATR_ac_DW.UnitDelay_DSTATE_mf = AATR_ac_DW.UnitDelay1_DSTATE_fi;

    /* Outputs for Atomic SubSystem: '<S782>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S782>/Counter Reset  Enabled ' */
    /* Switch: '<S789>/Switch1' incorporates:
     *  Logic: '<S782>/Fail Counter Reset'
     *  Logic: '<S782>/NOT6'
     *  Switch: '<S789>/Switch2'
     *  Switch: '<S790>/Switch1'
     *  UnitDelay: '<S762>/Unit Delay'
     *  UnitDelay: '<S782>/Unit Delay'
     */
    if ((rtb_SCP_DCNegtvTempFA || (AATR_ac_DW.UnitDelay_DSTATE_iq)) ||
            (AATR_ac_DW.UnitDelay_DSTATE_mf))
    {
        /* Switch: '<S789>/Switch1' incorporates:
         *  Constant: '<S789>/Constant Value2'
         */
        VeAATD_Cnt_SCP_InletTemp_LoFailCnt = 0U;

        /* Switch: '<S790>/Switch1' incorporates:
         *  Constant: '<S790>/Constant Value2'
         */
        VeAATD_Cnt_SCP_InletTemp_LoSmpCnt = 0U;
    }
    else
    {
        if (rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial &&
                (VeAATD_b_SCPInletTemp_ShrtLo_FltSymptm))
        {
            /* Switch: '<S789>/Switch1' incorporates:
             *  Constant: '<S789>/Constant Value1'
             *  Sum: '<S789>/Subtraction'
             *  Switch: '<S789>/Switch2'
             *  UnitDelay: '<S789>/Unit Delay'
             */
            VeAATD_Cnt_SCP_InletTemp_LoFailCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_InletTemp_LoFailCnt) + 1U);
        }

        /* Switch: '<S790>/Switch2' */
        if (rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial)
        {
            /* Switch: '<S790>/Switch1' incorporates:
             *  Constant: '<S790>/Constant Value1'
             *  Sum: '<S790>/Subtraction'
             *  Switch: '<S790>/Switch2'
             *  UnitDelay: '<S790>/Unit Delay'
             */
            VeAATD_Cnt_SCP_InletTemp_LoSmpCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_InletTemp_LoSmpCnt) + 1U);
        }

        /* End of Switch: '<S790>/Switch2' */
    }

    /* End of Switch: '<S789>/Switch1' */
    /* End of Outputs for SubSystem: '<S782>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S782>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S782>/Greater Than or Equal ' incorporates:
     *  Constant: '<S776>/Calib'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_fi = (((sint32)
        VeAATD_Cnt_SCP_InletTemp_LoFailCnt) >= ((sint32)
        KeAATR_Cnt_SCP_InletTemp_LoFail));

    /* Logic: '<S782>/NOT5' incorporates:
     *  Constant: '<S777>/Calib'
     *  Logic: '<S782>/NOT3'
     *  RelationalOperator: '<S782>/Less Than  or Equal'
     */
    AATR_ac_DW.UnitDelay_DSTATE_iq = ((((sint32)
        VeAATD_Cnt_SCP_InletTemp_LoSmpCnt) >= ((sint32)
        KeAATR_Cnt_SCP_InletTemp_LoSmp)) && (!AATR_ac_DW.UnitDelay1_DSTATE_fi));

    /* Switch: '<S795>/Switch1' incorporates:
     *  Constant: '<S788>/Constant Value'
     *  DataStoreWrite: '<S750>/Data Store Write'
     *  Switch: '<S794>/Switch1'
     */
    if (VeAATI_b_PostCodeClrDiagDsbl_OvrdVal_Dial)
    {
        AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_LoFlt_MFOP = 0U;
    }
    else
    {
        if (AATR_ac_DW.UnitDelay_DSTATE_iq)
        {
            /* MinMax: '<S788>/Minimum2' incorporates:
             *  DataStoreRead: '<S750>/Data Store Read1'
             *  Switch: '<S794>/Switch1'
             */
            if (VeAATD_Cnt_SCP_InletTemp_LoFailCnt >
                    AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_LoFlt_MFOP)
            {
                /* DataStoreWrite: '<S750>/Data Store Write' incorporates:
                 *  Switch: '<S794>/Switch1'
                 */
                AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_LoFlt_MFOP =
                    VeAATD_Cnt_SCP_InletTemp_LoFailCnt;
            }

            /* End of MinMax: '<S788>/Minimum2' */
        }
    }

    /* End of Switch: '<S795>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S780>/Fail' */
    AATR_ac_Fail(AATR_ac_DW.UnitDelay1_DSTATE_fi,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_n);

    /* End of Outputs for SubSystem: '<S780>/Fail' */

    /* Outputs for Enabled SubSystem: '<S780>/Init' */
    AATR_ac_Init_a(rtb_SCP_DCNegtvTempFA,
                   &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_n);

    /* End of Outputs for SubSystem: '<S780>/Init' */

    /* Outputs for Enabled SubSystem: '<S780>/Pass' */
    AATR_ac_Pass(AATR_ac_DW.UnitDelay_DSTATE_iq,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_n);

    /* End of Outputs for SubSystem: '<S780>/Pass' */

    /* VariantMerge generated from: '<S534>/VeAATD_b_SCP_InletTemp_LoFltDtct' incorporates:
     *  Constant: '<S784>/Constant'
     *  RelationalOperator: '<S780>/Relational Operator'
     *  VariantMerge generated from: '<S534>/VeAATR_e_FaultSts_BatChaCouTemSenACirLow'
     */
    VeAATD_b_SCP_InletTemp_LoFltDtct = (((uint32)
        AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_n) == CeDFIB_e_Fail);

    /* VariantMerge generated from: '<S534>/VeAATD_b_SCP_InletTemp_FltDtct' incorporates:
     *  Constant: '<S751>/FALSE Constant'
     */
    VeAATD_b_SCP_InletTemp_FltDtct = false;

    /* Update for UnitDelay: '<S762>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_mf = rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial;

    /* End of Outputs for SubSystem: '<S534>/IfSCPInletSnsrDiag' */
#elif Rte_SysCon_Variant_AATR_11

    /* Outputs for Atomic SubSystem: '<S534>/IfSCPInletSnsrM182' */
    /* RelationalOperator: '<S802>/Relational Operator3' incorporates:
     *  Constant: '<S802>/Constant3'
     *  DataStoreRead: '<S803>/StatusByte_BatChaCouTemSnsrCkt'
     *  S-Function (sfix_bitop): '<S802>/Bitwise Operator2'
     */
    rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial = ((((uint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSnsrCkt) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S802>/EdgeFalling1' */
    /* Logic: '<S802>/Logical Operator' incorporates:
     *  Logic: '<S805>/OR1'
     */
    rtb_SCP_DCNegtvTempFA = !rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial;

    /* End of Outputs for SubSystem: '<S802>/EdgeFalling1' */

    /* Logic: '<S802>/Logical1' incorporates:
     *  Constant: '<S800>/Calib'
     *  Constant: '<S801>/Calib'
     *  Constant: '<S802>/Constant1'
     *  DataStoreRead: '<S803>/StatusByte_BatChaCouTemSnsrCkt'
     *  Logic: '<S741>/Logical Operator'
     *  Logic: '<S741>/Logical Operator1'
     *  Logic: '<S802>/Logical Operator'
     *  Logic: '<S802>/Logical10'
     *  Logic: '<S802>/Logical12'
     *  RelationalOperator: '<S802>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S802>/Bitwise Operator3'
     */
    rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial = (((KeAATR_b_EnbSCP_InletTemp) &&
        (rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal && (VeAATD_b_NoCommIssueCPIM)))
        && ((!KeAATR_b_BatChaCouTemSnsrCkt_LtchEnbl) || (((((uint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSnsrCkt) & 1U) == 0U) ||
        rtb_SCP_DCNegtvTempFA)));

    /* Outputs for Atomic SubSystem: '<S802>/EdgeFalling1' */
    /* Logic: '<S805>/AND' incorporates:
     *  UnitDelay: '<S805>/Unit Delay'
     */
    rtb_SCP_DCNegtvTempFA = (rtb_SCP_DCNegtvTempFA &&
        (AATR_ac_DW.UnitDelay_DSTATE_hu));

    /* Update for UnitDelay: '<S805>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_hu = rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial;

    /* End of Outputs for SubSystem: '<S802>/EdgeFalling1' */

    /* Logic: '<S802>/Logical5' */
    rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial = ((VeAATD_b_DsblDiagFailSafeOrCdeClr) ||
        rtb_SCP_DCNegtvTempFA);

    /* Outputs for Atomic SubSystem: '<S804>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S804>/Counter Reset  Enabled ' */
    /* Switch: '<S811>/Switch1' incorporates:
     *  Logic: '<S804>/Fail Counter Reset'
     *  Logic: '<S804>/NOT6'
     *  Switch: '<S811>/Switch2'
     *  Switch: '<S812>/Switch1'
     *  UnitDelay: '<S804>/Unit Delay'
     *  UnitDelay: '<S804>/Unit Delay1'
     */
    if ((rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial || (AATR_ac_DW.UnitDelay_DSTATE_k4))
        || (AATR_ac_DW.UnitDelay1_DSTATE_f))
    {
        /* Switch: '<S811>/Switch1' incorporates:
         *  Constant: '<S811>/Constant Value2'
         */
        VeAATD_Cnt_SCP_InletTemp_FailCnt = 0U;

        /* Switch: '<S812>/Switch1' incorporates:
         *  Constant: '<S812>/Constant Value2'
         */
        VeAATD_Cnt_SCP_InletTemp_SmpCnt = 0U;
    }
    else
    {
        if (rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial &&
                rtb_VeAATI_b_SCP_InletTempSNA_Dial)
        {
            /* Switch: '<S811>/Switch1' incorporates:
             *  Constant: '<S811>/Constant Value1'
             *  Sum: '<S811>/Subtraction'
             *  Switch: '<S811>/Switch2'
             *  UnitDelay: '<S811>/Unit Delay'
             */
            VeAATD_Cnt_SCP_InletTemp_FailCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_InletTemp_FailCnt) + 1U);
        }

        /* Switch: '<S812>/Switch2' */
        if (rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial)
        {
            /* Switch: '<S812>/Switch1' incorporates:
             *  Constant: '<S812>/Constant Value1'
             *  Sum: '<S812>/Subtraction'
             *  Switch: '<S812>/Switch2'
             *  UnitDelay: '<S812>/Unit Delay'
             */
            VeAATD_Cnt_SCP_InletTemp_SmpCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_InletTemp_SmpCnt) + 1U);
        }

        /* End of Switch: '<S812>/Switch2' */
    }

    /* End of Switch: '<S811>/Switch1' */
    /* End of Outputs for SubSystem: '<S804>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S804>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S804>/Greater Than or Equal ' incorporates:
     *  Constant: '<S798>/Calib'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_f = (((sint32)VeAATD_Cnt_SCP_InletTemp_FailCnt)
        >= ((sint32)KeAATR_Cnt_SCP_InletTemp_Fail));

    /* Logic: '<S804>/NOT5' incorporates:
     *  Constant: '<S799>/Calib'
     *  Logic: '<S804>/NOT3'
     *  RelationalOperator: '<S804>/Less Than  or Equal'
     */
    AATR_ac_DW.UnitDelay_DSTATE_k4 = ((((sint32)VeAATD_Cnt_SCP_InletTemp_SmpCnt)
        >= ((sint32)KeAATR_Cnt_SCP_InletTemp_Smp)) &&
        (!AATR_ac_DW.UnitDelay1_DSTATE_f));

    /* Switch: '<S817>/Switch1' incorporates:
     *  Constant: '<S810>/Constant Value'
     *  DataStoreWrite: '<S741>/Data Store Write'
     *  Switch: '<S816>/Switch1'
     */
    if (VeAATI_b_PostCodeClrDiagDsbl_OvrdVal_Dial)
    {
        AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_Flt_MFOP = 0U;
    }
    else
    {
        if (AATR_ac_DW.UnitDelay_DSTATE_k4)
        {
            /* MinMax: '<S810>/Minimum2' incorporates:
             *  DataStoreRead: '<S741>/Data Store Read1'
             *  Switch: '<S816>/Switch1'
             */
            if (VeAATD_Cnt_SCP_InletTemp_FailCnt >
                    AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_Flt_MFOP)
            {
                /* DataStoreWrite: '<S741>/Data Store Write' incorporates:
                 *  Switch: '<S816>/Switch1'
                 */
                AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_Flt_MFOP =
                    VeAATD_Cnt_SCP_InletTemp_FailCnt;
            }

            /* End of MinMax: '<S810>/Minimum2' */
        }
    }

    /* End of Switch: '<S817>/Switch1' */

    /* VariantMerge generated from: '<S534>/VeAATR_e_FaultSts_BatChaCouTemSenACirLow' incorporates:
     *  Constant: '<S797>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_n = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S534>/VeAATD_b_SCP_InletTemp_LoFltDtct' incorporates:
     *  Constant: '<S741>/FALSE Constant'
     */
    VeAATD_b_SCP_InletTemp_LoFltDtct = false;

    /* VariantMerge generated from: '<S534>/VeAATR_e_FaultSts_BatChaCouTemSenACirHig' incorporates:
     *  Constant: '<S796>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_h = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S534>/VeAATD_b_SCP_InletTemp_HiFltDtct' incorporates:
     *  Constant: '<S741>/FALSE Constant1'
     */
    VeAATD_b_SCP_InletTemp_HiFltDtct = false;

    /* Outputs for Enabled SubSystem: '<S802>/Fail' */
    AATR_ac_Fail(AATR_ac_DW.UnitDelay1_DSTATE_f,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_k);

    /* End of Outputs for SubSystem: '<S802>/Fail' */

    /* Outputs for Enabled SubSystem: '<S802>/Init' */
    AATR_ac_Init_a(rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial,
                   &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_k);

    /* End of Outputs for SubSystem: '<S802>/Init' */

    /* Outputs for Enabled SubSystem: '<S802>/Pass' */
    AATR_ac_Pass(AATR_ac_DW.UnitDelay_DSTATE_k4,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_k);

    /* End of Outputs for SubSystem: '<S802>/Pass' */

    /* VariantMerge generated from: '<S534>/VeAATD_b_SCP_InletTemp_FltDtct' incorporates:
     *  Constant: '<S806>/Constant'
     *  RelationalOperator: '<S802>/Relational Operator'
     *  VariantMerge generated from: '<S534>/VeAATR_e_FaultSts_BatChaCouTemSnsrCkt'
     */
    VeAATD_b_SCP_InletTemp_FltDtct = (((uint32)
        AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_k) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S534>/IfSCPInletSnsrM182' */
#else

    /* Outputs for Atomic SubSystem: '<S534>/Else_InletSnsrDiag' */
    /* VariantMerge generated from: '<S534>/VeAATR_e_FaultSts_BatChaCouTemSenACirLow' incorporates:
     *  Constant: '<S743>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_n = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S534>/VeAATD_b_SCP_InletTemp_LoFltDtct' incorporates:
     *  Constant: '<S739>/FALSE Constant'
     */
    VeAATD_b_SCP_InletTemp_LoFltDtct = false;

    /* VariantMerge generated from: '<S534>/VeAATR_e_FaultSts_BatChaCouTemSenACirHig' incorporates:
     *  Constant: '<S742>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_h = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S534>/VeAATD_b_SCP_InletTemp_HiFltDtct' incorporates:
     *  Constant: '<S739>/FALSE Constant1'
     */
    VeAATD_b_SCP_InletTemp_HiFltDtct = false;

    /* VariantMerge generated from: '<S534>/VeAATR_e_FaultSts_BatChaCouTemSnsrCkt' incorporates:
     *  Constant: '<S744>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_k = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S534>/VeAATD_b_SCP_InletTemp_FltDtct' incorporates:
     *  Constant: '<S739>/FALSE Constant2'
     */
    VeAATD_b_SCP_InletTemp_FltDtct = false;

    /* End of Outputs for SubSystem: '<S534>/Else_InletSnsrDiag' */
#endif

    /* End of Outputs for SubSystem: '<S376>/SCPInletSnsrDiag' */

    /* End of Outputs for SubSystem: '<S20>/OutOfRangeDiag' */

    /* Logic: '<S834>/Logical Operator14' incorporates:
     *  Constant: '<S1068>/Constant'
     *  Constant: '<S1069>/Constant'
     *  Constant: '<S1070>/Constant'
     *  Constant: '<S1071>/Constant'
     *  Constant: '<S1072>/Constant'
     *  Constant: '<S1073>/Constant'
     *  Constant: '<S1074>/Calib'
     *  Logic: '<S834>/Logical Operator1'
     *  Logic: '<S834>/Logical Operator2'
     *  RelationalOperator: '<S834>/Relational Operator1'
     *  RelationalOperator: '<S834>/Relational Operator2'
     *  RelationalOperator: '<S834>/Relational Operator3'
     *  RelationalOperator: '<S834>/Relational Operator4'
     *  RelationalOperator: '<S834>/Relational Operator5'
     *  RelationalOperator: '<S834>/Relational Operator6'
     *  Switch: '<S21>/Switch18'
     */
    rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial = (((KeAATR_b_OvrrdChrgSysSts) ||
        (((uint32)VeAATI_e_ChargingSystemSts_Dial) ==
         CeOBCR_e_ChargingSts_Charging)) && (((((((uint32)
        AATR_ac_B.VeOBCR_e_ChargingLevel) == CeOBCR_e_ChargingLvlAC1) ||
        (((uint32)AATR_ac_B.VeOBCR_e_ChargingLevel) == CeOBCR_e_ChargingLvlAC2))
        || (((uint32)AATR_ac_B.VeOBCR_e_ChargingLevel) ==
            CeOBCR_e_ChargingLvlAC3)) || (((uint32)
        AATR_ac_B.VeOBCR_e_ChargingLevel) == CeOBCR_e_ChargingLvlDC1)) ||
        (((uint32)AATR_ac_B.VeOBCR_e_ChargingLevel) == CeOBCR_e_ChargingLvlDC2)));

    /* Outputs for Atomic SubSystem: '<S847>/EdgeBi' */
    /* RelationalOperator: '<S865>/Not Equal' incorporates:
     *  UnitDelay: '<S865>/Unit Delay'
     */
    rtb_VeAATI_b_SCP_InletTempSNA_Dial = (rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial
        != AATR_ac_DW.UnitDelay_DSTATE_d0);

    /* Update for UnitDelay: '<S865>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_d0 = rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial;

    /* End of Outputs for SubSystem: '<S847>/EdgeBi' */

    /* Outputs for Atomic SubSystem: '<S847>/Counter Reset  Enabled ' */
    /* Switch: '<S864>/Switch1' incorporates:
     *  Constant: '<S864>/Constant Value2'
     *  Switch: '<S864>/Switch2'
     *  UnitDelay: '<S864>/Unit Delay'
     */
    if (rtb_VeAATI_b_SCP_InletTempSNA_Dial)
    {
        AATR_ac_DW.UnitDelay_DSTATE_g1 = 0U;
    }
    else
    {
        if (rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial)
        {
            /* UnitDelay: '<S864>/Unit Delay' incorporates:
             *  Constant: '<S864>/Constant Value1'
             *  Sum: '<S864>/Subtraction'
             *  Switch: '<S864>/Switch2'
             */
            AATR_ac_DW.UnitDelay_DSTATE_g1 = (uint16)(((uint32)
                AATR_ac_DW.UnitDelay_DSTATE_g1) + 1U);
        }
    }

    /* End of Switch: '<S864>/Switch1' */
    /* End of Outputs for SubSystem: '<S847>/Counter Reset  Enabled ' */

    /* Logic: '<S847>/Logical Operator' incorporates:
     *  Constant: '<S829>/Calib'
     *  Constant: '<S866>/Calib'
     *  Product: '<S847>/Product1'
     *  RelationalOperator: '<S847>/Relational Operator1'
     *  UnitDelay: '<S864>/Unit Delay'
     */
    rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial = (rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial &&
        (((float32)AATR_ac_DW.UnitDelay_DSTATE_g1) >
         (KeAATR_t_PluggedIn_Cal4Rat_Lv2 / HeAATR_t_MedTEH)));

    /* Outputs for Atomic SubSystem: '<S823>/EdgeRising2' */
    /* Logic: '<S839>/AND' incorporates:
     *  Logic: '<S839>/OR1'
     *  UnitDelay: '<S839>/Unit Delay'
     */
    rtb_SCP_DCNegtvTempFA = (rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial &&
        (!AATR_ac_DW.UnitDelay_DSTATE_gu));

    /* Update for UnitDelay: '<S839>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_gu = rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial;

    /* End of Outputs for SubSystem: '<S823>/EdgeRising2' */

    /* Logic: '<S845>/Logical Operator1' incorporates:
     *  Logic: '<S844>/Logical Operator1'
     */
    rtb_VeAATI_b_SCP_InletTempSNA_Dial = !rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial;

    /* Outputs for Atomic SubSystem: '<S845>/EdgeFalling' */
    /* Logic: '<S859>/AND' incorporates:
     *  Logic: '<S845>/Logical Operator1'
     *  Logic: '<S859>/OR1'
     *  UnitDelay: '<S859>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a =
        ((!rtb_VeAATI_b_SCP_InletTempSNA_Dial) &&
         (AATR_ac_DW.UnitDelay_DSTATE_hg));

    /* Update for UnitDelay: '<S859>/Unit Delay' incorporates:
     *  Logic: '<S845>/Logical Operator1'
     */
    AATR_ac_DW.UnitDelay_DSTATE_hg = rtb_VeAATI_b_SCP_InletTempSNA_Dial;

    /* End of Outputs for SubSystem: '<S845>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S845>/Counter Reset  Enabled ' */
    /* Switch: '<S858>/Switch1' incorporates:
     *  Constant: '<S858>/Constant Value2'
     *  Logic: '<S845>/Logical Operator1'
     *  Switch: '<S858>/Switch2'
     *  UnitDelay: '<S858>/Unit Delay'
     */
    if (rtb_VariantMerge_For_Variant_Source_Va_a)
    {
        AATR_ac_DW.UnitDelay_DSTATE_i = 0U;
    }
    else
    {
        if (rtb_VeAATI_b_SCP_InletTempSNA_Dial)
        {
            /* UnitDelay: '<S858>/Unit Delay' incorporates:
             *  Constant: '<S858>/Constant Value1'
             *  Sum: '<S858>/Subtraction'
             *  Switch: '<S858>/Switch2'
             */
            AATR_ac_DW.UnitDelay_DSTATE_i = (uint16)(((uint32)
                AATR_ac_DW.UnitDelay_DSTATE_i) + 1U);
        }
    }

    /* End of Switch: '<S858>/Switch1' */
    /* End of Outputs for SubSystem: '<S845>/Counter Reset  Enabled ' */

    /* Logic: '<S845>/Logical Operator' incorporates:
     *  Constant: '<S827>/Calib'
     *  Constant: '<S860>/Calib'
     *  Logic: '<S845>/Logical Operator1'
     *  Product: '<S845>/Product1'
     *  RelationalOperator: '<S845>/Relational Operator1'
     *  UnitDelay: '<S858>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a =
        (rtb_VeAATI_b_SCP_InletTempSNA_Dial && (((float32)
           AATR_ac_DW.UnitDelay_DSTATE_i) >
          (KeAATR_t_PluggedIn_Cal4Rat_BacktoLv1 / HeAATR_t_MedTEH)));

    /* Outputs for Atomic SubSystem: '<S823>/EdgeRising3' */
    /* Logic: '<S840>/AND' incorporates:
     *  Logic: '<S840>/OR1'
     *  UnitDelay: '<S840>/Unit Delay'
     */
    rtb_SCP_DCPstvTempFA = (rtb_VariantMerge_For_Variant_Source_Va_a &&
                            (!AATR_ac_DW.UnitDelay_DSTATE_i3));

    /* Update for UnitDelay: '<S840>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_i3 = rtb_VariantMerge_For_Variant_Source_Va_a;

    /* End of Outputs for SubSystem: '<S823>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S823>/Signal Latch On With Reset3' */
    /* Logic: '<S851>/OR1' incorporates:
     *  Logic: '<S823>/Logical Operator7'
     *  Logic: '<S851>/NOT'
     *  Logic: '<S851>/OR'
     *  UnitDelay: '<S851>/Unit Delay'
     */
    AATR_ac_DW.UnitDelay_DSTATE_m1 = (rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial || (((
        !rtb_SCP_DCNegtvTempFA) && (!rtb_SCP_DCPstvTempFA)) &&
        (AATR_ac_DW.UnitDelay_DSTATE_m1)));

    /* End of Outputs for SubSystem: '<S823>/Signal Latch On With Reset3' */

    /* Gain: '<S848>/Gain' */
    VeAATD_b_Lv2CalSet_PluggedIn = AATR_ac_DW.UnitDelay_DSTATE_m1;

    /* Outputs for Atomic SubSystem: '<S846>/EdgeBi' */
    /* RelationalOperator: '<S862>/Not Equal' incorporates:
     *  UnitDelay: '<S862>/Unit Delay'
     */
    rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial = (rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial
        != AATR_ac_DW.UnitDelay_DSTATE_jb);

    /* Update for UnitDelay: '<S862>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_jb = rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial;

    /* End of Outputs for SubSystem: '<S846>/EdgeBi' */

    /* Outputs for Atomic SubSystem: '<S846>/Counter Reset  Enabled ' */
    /* Switch: '<S861>/Switch1' incorporates:
     *  Constant: '<S861>/Constant Value2'
     *  Switch: '<S861>/Switch2'
     *  UnitDelay: '<S861>/Unit Delay'
     */
    if (rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial)
    {
        AATR_ac_DW.UnitDelay_DSTATE_nc = 0U;
    }
    else
    {
        if (rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial)
        {
            /* UnitDelay: '<S861>/Unit Delay' incorporates:
             *  Constant: '<S861>/Constant Value1'
             *  Sum: '<S861>/Subtraction'
             *  Switch: '<S861>/Switch2'
             */
            AATR_ac_DW.UnitDelay_DSTATE_nc = (uint16)(((uint32)
                AATR_ac_DW.UnitDelay_DSTATE_nc) + 1U);
        }
    }

    /* End of Switch: '<S861>/Switch1' */
    /* End of Outputs for SubSystem: '<S846>/Counter Reset  Enabled ' */

    /* Logic: '<S846>/Logical Operator' incorporates:
     *  Constant: '<S828>/Calib'
     *  Constant: '<S863>/Calib'
     *  Product: '<S846>/Product1'
     *  RelationalOperator: '<S846>/Relational Operator1'
     *  UnitDelay: '<S861>/Unit Delay'
     */
    rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial = (rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial
        && (((float32)AATR_ac_DW.UnitDelay_DSTATE_nc) >
            (KeAATR_t_PluggedIn_Cal4Rat_Lv1 / HeAATR_t_MedTEH)));

    /* Outputs for Atomic SubSystem: '<S823>/EdgeRising1' */
    /* Logic: '<S838>/AND' incorporates:
     *  Logic: '<S838>/OR1'
     *  UnitDelay: '<S838>/Unit Delay'
     */
    rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial = (rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial &&
        (!AATR_ac_DW.UnitDelay_DSTATE_gg));

    /* Update for UnitDelay: '<S838>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_gg = rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial;

    /* End of Outputs for SubSystem: '<S823>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S844>/EdgeFalling' */
    /* Logic: '<S856>/AND' incorporates:
     *  Logic: '<S856>/OR1'
     *  UnitDelay: '<S856>/Unit Delay'
     */
    rtb_SCP_DCNegtvTempFA = ((!rtb_VeAATI_b_SCP_InletTempSNA_Dial) &&
        (AATR_ac_DW.UnitDelay_DSTATE_m2));

    /* Update for UnitDelay: '<S856>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_m2 = rtb_VeAATI_b_SCP_InletTempSNA_Dial;

    /* End of Outputs for SubSystem: '<S844>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S844>/Counter Reset  Enabled ' */
    /* Switch: '<S855>/Switch1' incorporates:
     *  Constant: '<S855>/Constant Value2'
     *  Switch: '<S855>/Switch2'
     *  UnitDelay: '<S855>/Unit Delay'
     */
    if (rtb_SCP_DCNegtvTempFA)
    {
        AATR_ac_DW.UnitDelay_DSTATE_ar = 0U;
    }
    else
    {
        if (rtb_VeAATI_b_SCP_InletTempSNA_Dial)
        {
            /* UnitDelay: '<S855>/Unit Delay' incorporates:
             *  Constant: '<S855>/Constant Value1'
             *  Sum: '<S855>/Subtraction'
             *  Switch: '<S855>/Switch2'
             */
            AATR_ac_DW.UnitDelay_DSTATE_ar = (uint16)(((uint32)
                AATR_ac_DW.UnitDelay_DSTATE_ar) + 1U);
        }
    }

    /* End of Switch: '<S855>/Switch1' */
    /* End of Outputs for SubSystem: '<S844>/Counter Reset  Enabled ' */

    /* Logic: '<S844>/Logical Operator' incorporates:
     *  Constant: '<S826>/Calib'
     *  Constant: '<S857>/Calib'
     *  Product: '<S844>/Product1'
     *  RelationalOperator: '<S844>/Relational Operator1'
     *  UnitDelay: '<S855>/Unit Delay'
     */
    rtb_VeAATI_b_SCP_InletTempSNA_Dial = (rtb_VeAATI_b_SCP_InletTempSNA_Dial &&
        (((float32)AATR_ac_DW.UnitDelay_DSTATE_ar) >
         (KeAATR_t_PluggedIn_Cal4Rat_BacktoBase / HeAATR_t_MedTEH)));

    /* Outputs for Atomic SubSystem: '<S823>/EdgeRising4' */
    /* Logic: '<S841>/AND' incorporates:
     *  Logic: '<S841>/OR1'
     *  UnitDelay: '<S841>/Unit Delay'
     */
    rtb_SCP_DCNegtvTempFA = (rtb_VeAATI_b_SCP_InletTempSNA_Dial &&
        (!AATR_ac_DW.UnitDelay_DSTATE_ci));

    /* Update for UnitDelay: '<S841>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_ci = rtb_VeAATI_b_SCP_InletTempSNA_Dial;

    /* End of Outputs for SubSystem: '<S823>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S823>/Signal Latch On With Reset' */
    /* Logic: '<S850>/OR1' incorporates:
     *  Logic: '<S823>/Logical Operator6'
     *  Logic: '<S850>/NOT'
     *  Logic: '<S850>/OR'
     *  UnitDelay: '<S850>/Unit Delay'
     */
    AATR_ac_DW.UnitDelay_DSTATE_ehk = (rtb_VeAATI_b_SCP_DCNegtvTempSNA_Dial ||
        (((!rtb_VeAATI_b_SCP_DCPstvTempSNA_Dial) && (!rtb_SCP_DCNegtvTempFA)) &&
         (AATR_ac_DW.UnitDelay_DSTATE_ehk)));

    /* End of Outputs for SubSystem: '<S823>/Signal Latch On With Reset' */

    /* Gain: '<S849>/Gain' */
    VeAATD_b_Lv1CalSet_PluggedIn = AATR_ac_DW.UnitDelay_DSTATE_ehk;

    /* If: '<S823>/If' */
    if (VeAATD_b_Lv2CalSet_PluggedIn)
    {
        /* Outputs for IfAction SubSystem: '<S823>/Lv2Calset_PluggedInCharging' incorporates:
         *  ActionPort: '<S843>/Action Port'
         */
        /* RelationalOperator: '<S1043>/Relational Operator4' incorporates:
         *  Constant: '<S854>/Constant'
         *  Merge: '<S823>/Merge'
         *  SignalConversion generated from: '<S843>/Lv2CalSet4Charging'
         */
        VeAATD_e_CalSetLvl_PluggedIn = CeAATR_e_LongTime;

        /* End of Outputs for SubSystem: '<S823>/Lv2Calset_PluggedInCharging' */
    }
    else if (VeAATD_b_Lv1CalSet_PluggedIn)
    {
        /* Outputs for IfAction SubSystem: '<S823>/Lv1Calset_PluggedInCharging' incorporates:
         *  ActionPort: '<S842>/Action Port'
         */
        /* RelationalOperator: '<S1043>/Relational Operator4' incorporates:
         *  Constant: '<S853>/Constant'
         *  Merge: '<S823>/Merge'
         *  SignalConversion generated from: '<S842>/Lv2CalSet4Charging'
         */
        VeAATD_e_CalSetLvl_PluggedIn = CeAATR_e_ShrtTime;

        /* End of Outputs for SubSystem: '<S823>/Lv1Calset_PluggedInCharging' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S823>/BaseCalset_PluggedInCharging' incorporates:
         *  ActionPort: '<S837>/Action Port'
         */
        /* RelationalOperator: '<S1043>/Relational Operator4' incorporates:
         *  Constant: '<S852>/Constant'
         *  Merge: '<S823>/Merge'
         *  SignalConversion generated from: '<S837>/Lv2CalSet4Charging'
         */
        VeAATD_e_CalSetLvl_PluggedIn = CeAATR_e_InitTime;

        /* End of Outputs for SubSystem: '<S823>/BaseCalset_PluggedInCharging' */
    }

    /* End of If: '<S823>/If' */

    /* SignalConversion generated from: '<S20>/Init_Temp' */
#if !Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/Init_Temp' */
    rtb_VeAATC_T_AmbAirTemp_IV = VeAATC_T_AmbAirTemp_IV;

#endif

    /* End of SignalConversion generated from: '<S20>/Init_Temp' */

    /* SignalConversion generated from: '<S20>/Init_Temp' */
#if !(!Rte_SysCon_Variant_AATR_22) || !Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/Init_Temp' */
    rtb_VeAATC_T_AmbAirTemp_IV = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S20>/Init_Temp' */

    /* SignalConversion generated from: '<S20>/PsvPmpClnt_TmpIn' incorporates:
     *  SignalConversion generated from: '<S20>/OnBrdChrg_ClntTmpIn'
     */
#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/PsvPmpClnt_TmpIn' */
    rtb_VeAATI_T_ClntPumpTemp_Dial = VeAATI_T_ClntPumpTemp_Dial;

    /* VariantMerge generated from: '<S20>/OnBrdChrg_ClntTmpIn' */
    rtb_VeAATI_T_OnBrdChrg_ClntTmpIn_Dial = VeAATI_T_OnBrdChrg_ClntTmpIn_Dial;

#endif

    /* End of SignalConversion generated from: '<S20>/PsvPmpClnt_TmpIn' */

    /* SignalConversion generated from: '<S20>/PsvPmpClnt_TmpIn' incorporates:
     *  SignalConversion generated from: '<S20>/OnBrdChrg_ClntTmpIn'
     */
#if !Rte_SysCon_Variant_AATR_22 || !Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/PsvPmpClnt_TmpIn' */
    rtb_VeAATI_T_ClntPumpTemp_Dial = 0.0F;

    /* VariantMerge generated from: '<S20>/OnBrdChrg_ClntTmpIn' */
    rtb_VeAATI_T_OnBrdChrg_ClntTmpIn_Dial = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S20>/PsvPmpClnt_TmpIn' */

    /* Outputs for Atomic SubSystem: '<S818>/TempSelection 1' */
#if Rte_SysCon_Variant_AATR_22

    /* Outputs for Atomic SubSystem: '<S836>/TempSelection_P2GEN4' */
    /* Inport: '<S1086>/CBCTemp' */
    AATR_ac_B.VariantMergeForOutportSensor1 =
        AATR_ac_B.VariantMerge_For_Variant_Source_Varia_ij;

    /* Inport: '<S1086>/SCP_InletTemp' */
    AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS =
        AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS_k;

    /* Constant: '<S1086>/Constant Value' */
    AATR_ac_B.VariantMergeForOutportSensor3 = 25.0F;

    /* Inport: '<S1086>/Intake_Temp' */
    VeAATD_T_IntakeorDCPstvTemp = VeAATI_T_ECM_IntakeTemp_Dial;

    /* Switch: '<S1086>/Switch5' incorporates:
     *  Constant: '<S1089>/Calib'
     */
    if (KeAATR_b_PPCTIS_PECTOS_Slct)
    {
        VeAATD_T_InitorDCNegtvTemp = rtb_VeAATI_T_ClntPumpTemp_Dial;
    }
    else
    {
        VeAATD_T_InitorDCNegtvTemp = rtb_VeAATI_T_OnBrdChrg_ClntTmpIn_Dial;
    }

    /* End of Switch: '<S1086>/Switch5' */
    /* End of Outputs for SubSystem: '<S836>/TempSelection_P2GEN4' */
#else

    /* Outputs for Atomic SubSystem: '<S836>/TempSelection_Other' */
    /* Inport: '<S1085>/CBCTemp' */
    AATR_ac_B.VariantMergeForOutportSensor1 =
        AATR_ac_B.VariantMerge_For_Variant_Source_Varia_ij;

    /* Inport: '<S1085>/SCP_InletTemp' */
    AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS =
        AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS_k;

    /* Constant: '<S1085>/Constant Value' */
    AATR_ac_B.VariantMergeForOutportSensor3 = 25.0F;

    /* Switch: '<S1085>/Switch1' incorporates:
     *  Constant: '<S1087>/Calib'
     *  Constant: '<S1088>/Calib'
     *  Logic: '<S1085>/Logical Operator7'
     */
    if ((KeAATR_b_ReplaceSCP_DC4PxPy) && (KeAATR_b_IncldInit4Diag))
    {
        VeAATD_T_InitorDCNegtvTemp = rtb_VeAATC_T_AmbAirTemp_IV;
    }
    else
    {
        VeAATD_T_InitorDCNegtvTemp = rtb_VeAATI_T_SCP_DCNegtvTemp_Dial;
    }

    /* End of Switch: '<S1085>/Switch1' */

    /* Switch: '<S1085>/Switch5' incorporates:
     *  Constant: '<S1088>/Calib'
     */
    if (KeAATR_b_ReplaceSCP_DC4PxPy)
    {
        VeAATD_T_IntakeorDCPstvTemp = VeAATI_T_ECM_IntakeTemp_Dial;
    }
    else
    {
        VeAATD_T_IntakeorDCPstvTemp = rtb_VeAATI_T_SCP_DCPstvTemp_Dial;
    }

    /* End of Switch: '<S1085>/Switch5' */
    /* End of Outputs for SubSystem: '<S836>/TempSelection_Other' */
#endif

    /* End of Outputs for SubSystem: '<S818>/TempSelection 1' */

    /* SignalConversion generated from: '<S20>/VeTMIR_b_PsvPmpClnt_TmpIn_FA' incorporates:
     *  SignalConversion generated from: '<S20>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA'
     */
#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/VeTMIR_b_PsvPmpClnt_TmpIn_FA' */
    rtb_VeAATI_b_ClntPumpTempFA_Dial = VeAATI_b_ClntPumpTempFA_Dial;

    /* VariantMerge generated from: '<S20>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA' */
    rtb_VeAATI_b_OnBrdChrg_ClntTmpIn_FA_Dial =
        VeAATI_b_OnBrdChrg_ClntTmpIn_FA_Dial;

#endif

    /* End of SignalConversion generated from: '<S20>/VeTMIR_b_PsvPmpClnt_TmpIn_FA' */

    /* SignalConversion generated from: '<S20>/VeTMIR_b_PsvPmpClnt_TmpIn_FA' incorporates:
     *  SignalConversion generated from: '<S20>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA'
     */
#if !Rte_SysCon_Variant_AATR_22 || !Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/VeTMIR_b_PsvPmpClnt_TmpIn_FA' */
    rtb_VeAATI_b_ClntPumpTempFA_Dial = false;

    /* VariantMerge generated from: '<S20>/VeTMIR_b_OnBrdChrg_ClntTmpIn_FA' */
    rtb_VeAATI_b_OnBrdChrg_ClntTmpIn_FA_Dial = false;

#endif

    /* End of SignalConversion generated from: '<S20>/VeTMIR_b_PsvPmpClnt_TmpIn_FA' */

    /* Outputs for Atomic SubSystem: '<S818>/TempRat_SnsrDisbl_Rationality' */
    /* UnitDelay: '<S818>/Unit Delay5' incorporates:
     *  Constant: '<S1075>/TRUE Constant'
     *  Constant: '<S1076>/TRUE Constant'
     *  UnitDelay: '<S818>/Unit Delay6'
     */
#if Rte_SysCon_Variant_AATR_22

    /* Outputs for Atomic SubSystem: '<S835>/TempRat_SnsrDisbl_Rationality_P2GEN4' */
    /* Logic: '<S1076>/Logical Operator3' incorporates:
     *  Constant: '<S1082>/Constant1'
     *  Constant: '<S1082>/Constant2'
     *  DataStoreRead: '<S1082>/StatusByte_AAT_SnsrPerf'
     *  Logic: '<S1076>/Logical Operator6'
     *  Logic: '<S1082>/Logical Operator'
     *  RelationalOperator: '<S1082>/Relational Operator1'
     *  RelationalOperator: '<S1082>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1082>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1082>/Bitwise Operator2'
     *  UnitDelay: '<S818>/Unit Delay'
     */
    AATR_ac_B.VariantMergeForOutportb_Sensor1_Disbl =
        (((!AATR_ac_DW.UnitDelay_DSTATE_oz) || (((((sint32)
              AATR_ac_DW.StatusByte_AAT_SnsrPerf) & 1) > 0) && ((((uint32)
              AATR_ac_DW.StatusByte_AAT_SnsrPerf) & 64U) == 0U))) ||
         (VeAATI_b_CBC_AmbAirVoltFA_Dial));

    /* Logic: '<S1076>/Logical Operator1' incorporates:
     *  Constant: '<S1083>/Constant1'
     *  Constant: '<S1083>/Constant2'
     *  DataStoreRead: '<S1083>/StatusByte_BatChaCouTemSenACirRan'
     *  Logic: '<S1076>/Logical Operator11'
     *  Logic: '<S1083>/Logical Operator'
     *  RelationalOperator: '<S1083>/Relational Operator1'
     *  RelationalOperator: '<S1083>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1083>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1083>/Bitwise Operator2'
     *  UnitDelay: '<S818>/Unit Delay1'
     */
    AATR_ac_B.VariantMergeForOutportb_Sensor2_Disbl =
        (((!AATR_ac_DW.UnitDelay1_DSTATE_nc) || (((((sint32)
              AATR_ac_DW.StatusByte_BatChaCouTemSenACirRan) & 1) > 0) &&
           ((((uint32)AATR_ac_DW.StatusByte_BatChaCouTemSenACirRan) & 64U) == 0U)))
         || (AATR_ac_B.VeAATI_b_SCP_InletTempFA_Dial_AS));
    AATR_ac_B.VariantMergeForOutportb_Sensor3_Disbl = true;

    /* Logic: '<S1076>/Logical Operator4' incorporates:
     *  Constant: '<S1076>/TRUE Constant'
     *  Logic: '<S1076>/Logical Operator12'
     *  UnitDelay: '<S818>/Unit Delay2'
     */
    AATR_ac_B.VariantMergeForOutportb_Sensor4_Disbl =
        ((!AATR_ac_DW.UnitDelay2_DSTATE_m) || (VeAATI_b_ECM_IntakeTempFA_Dial));

    /* Switch: '<S1076>/Switch5' incorporates:
     *  Constant: '<S1084>/Calib'
     *  Logic: '<S1076>/Logical Operator2'
     *  Logic: '<S1076>/Logical Operator5'
     *  Logic: '<S1076>/Logical Operator7'
     *  Logic: '<S1076>/Logical Operator8'
     */
    if (KeAATR_b_PPCTIS_PECTOS_Slct)
    {
        AATR_ac_B.VariantMergeForOutportb_Sensor5_Disbl =
            ((!AATR_ac_DW.UnitDelay5_DSTATE) || rtb_VeAATI_b_ClntPumpTempFA_Dial);
    }
    else
    {
        AATR_ac_B.VariantMergeForOutportb_Sensor5_Disbl =
            ((!AATR_ac_DW.UnitDelay6_DSTATE) ||
             rtb_VeAATI_b_OnBrdChrg_ClntTmpIn_FA_Dial);
    }

    /* End of Switch: '<S1076>/Switch5' */
    /* End of Outputs for SubSystem: '<S835>/TempRat_SnsrDisbl_Rationality_P2GEN4' */
#else

    /* Outputs for Atomic SubSystem: '<S835>/TempRat_SnsrDisbl_Rationality_Other' */
    /* Logic: '<S1075>/Logical Operator3' incorporates:
     *  Constant: '<S1077>/Constant1'
     *  Constant: '<S1077>/Constant2'
     *  DataStoreRead: '<S1077>/StatusByte_AAT_SnsrPerf'
     *  Logic: '<S1075>/Logical Operator6'
     *  Logic: '<S1077>/Logical Operator'
     *  RelationalOperator: '<S1077>/Relational Operator1'
     *  RelationalOperator: '<S1077>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1077>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1077>/Bitwise Operator2'
     *  UnitDelay: '<S818>/Unit Delay'
     */
    AATR_ac_B.VariantMergeForOutportb_Sensor1_Disbl =
        (((!AATR_ac_DW.UnitDelay_DSTATE_oz) || (((((sint32)
              AATR_ac_DW.StatusByte_AAT_SnsrPerf) & 1) > 0) && ((((uint32)
              AATR_ac_DW.StatusByte_AAT_SnsrPerf) & 64U) == 0U))) ||
         (VeAATI_b_CBC_AmbAirVoltFA_Dial));

    /* Logic: '<S1075>/Logical Operator1' incorporates:
     *  Constant: '<S1078>/Constant1'
     *  Constant: '<S1078>/Constant2'
     *  DataStoreRead: '<S1078>/StatusByte_BatChaCouTemSenACirRan'
     *  Logic: '<S1075>/Logical Operator11'
     *  Logic: '<S1078>/Logical Operator'
     *  RelationalOperator: '<S1078>/Relational Operator1'
     *  RelationalOperator: '<S1078>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1078>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1078>/Bitwise Operator2'
     *  UnitDelay: '<S818>/Unit Delay1'
     */
    AATR_ac_B.VariantMergeForOutportb_Sensor2_Disbl =
        (((!AATR_ac_DW.UnitDelay1_DSTATE_nc) || (((((sint32)
              AATR_ac_DW.StatusByte_BatChaCouTemSenACirRan) & 1) > 0) &&
           ((((uint32)AATR_ac_DW.StatusByte_BatChaCouTemSenACirRan) & 64U) == 0U)))
         || (AATR_ac_B.VeAATI_b_SCP_InletTempFA_Dial_AS));
    AATR_ac_B.VariantMergeForOutportb_Sensor3_Disbl = true;

    /* Switch: '<S1075>/Switch5' incorporates:
     *  Constant: '<S1075>/TRUE Constant'
     *  Constant: '<S1079>/Constant1'
     *  Constant: '<S1079>/Constant2'
     *  Constant: '<S1081>/Calib'
     *  DataStoreRead: '<S1079>/StatusByte_BattChrgCouTempSnsrBCktPerf'
     *  Logic: '<S1075>/Logical Operator12'
     *  Logic: '<S1075>/Logical Operator13'
     *  Logic: '<S1075>/Logical Operator2'
     *  Logic: '<S1075>/Logical Operator4'
     *  Logic: '<S1079>/Logical Operator'
     *  RelationalOperator: '<S1079>/Relational Operator1'
     *  RelationalOperator: '<S1079>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1079>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1079>/Bitwise Operator2'
     *  UnitDelay: '<S818>/Unit Delay2'
     */
    if (KeAATR_b_ReplaceSCP_DC4PxPy)
    {
        AATR_ac_B.VariantMergeForOutportb_Sensor4_Disbl =
            ((!AATR_ac_DW.UnitDelay2_DSTATE_m) ||
             (VeAATI_b_ECM_IntakeTempFA_Dial));
    }
    else
    {
        AATR_ac_B.VariantMergeForOutportb_Sensor4_Disbl =
            (((!AATR_ac_DW.UnitDelay3_DSTATE) || (((((sint32)
                  AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktPerf) & 1) > 0) &&
               ((((uint32)AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktPerf) &
                 64U) == 0U))) || rtb_VeAATI_b_SCP_DCPstvTempFA_Dial);
    }

    /* End of Switch: '<S1075>/Switch5' */

    /* Logic: '<S1075>/Logical Operator5' incorporates:
     *  Constant: '<S1080>/Constant1'
     *  Constant: '<S1080>/Constant2'
     *  DataStoreRead: '<S1080>/StatusByte_BattChrgCouTempSnsrCCktPerf'
     *  Logic: '<S1075>/Logical Operator14'
     *  Logic: '<S1080>/Logical Operator'
     *  RelationalOperator: '<S1080>/Relational Operator1'
     *  RelationalOperator: '<S1080>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1080>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1080>/Bitwise Operator2'
     */
    AATR_ac_B.VariantMergeForOutportb_Sensor5_Disbl =
        (((!AATR_ac_DW.UnitDelay4_DSTATE) || (((((sint32)
              AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktPerf) & 1) > 0) &&
           ((((uint32)AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktPerf) & 64U) ==
            0U))) || rtb_VeAATI_b_SCP_DCNegtvTempFA_Dial);

    /* End of Outputs for SubSystem: '<S835>/TempRat_SnsrDisbl_Rationality_Other' */
#endif

    /* End of UnitDelay: '<S818>/Unit Delay5' */
    /* End of Outputs for SubSystem: '<S818>/TempRat_SnsrDisbl_Rationality' */

    /* Logic: '<S1043>/Logical Operator13' incorporates:
     *  Constant: '<S1058>/Constant'
     *  RelationalOperator: '<S1043>/Relational Operator4'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a = (((uint32)
        VeAATD_e_CalSetLvl_PluggedIn) == CeAATR_e_InitTime);

    /* Logic: '<S1043>/Logical Operator15' incorporates:
     *  RelationalOperator: '<S1043>/Relational Operator6'
     */
    rtb_LogicalOperator15_d = ((VeAATR_b_SensorsVentilated_AftrInit) &&
        rtb_VariantMerge_For_Variant_Source_Va_a);

    /* Logic: '<S1043>/Logical Operator13' incorporates:
     *  Constant: '<S1059>/Constant'
     *  Logic: '<S1043>/Logical Operator14'
     *  RelationalOperator: '<S1043>/Relational Operator3'
     *  RelationalOperator: '<S1043>/Relational Operator5'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a =
        ((rtb_VariantMerge_For_Variant_Source_Va_a &&
          (!VeAATR_b_SensorsVentilated_AftrInit)) || (((uint32)
           VeAATD_e_CalSetLvl_PluggedIn) == CeAATR_e_ShrtTime));

    /* UnitDelay: '<S1009>/Unit Delay' incorporates:
     *  Constant: '<S1060>/Constant'
     *  RelationalOperator: '<S1043>/Relational Operator'
     */
    rtb_SCP_DCNegtvTempFA = (((uint32)VeAATD_e_CalSetLvl_PluggedIn) ==
        CeAATR_e_LongTime);

    /* If: '<S831>/If' incorporates:
     *  Logic: '<S831>/Logical1'
     *  Logic: '<S831>/Logical2'
     *  Logic: '<S831>/Logical3'
     */
    if (rtb_LogicalOperator15_d)
    {
        /* Outputs for IfAction SubSystem: '<S831>/Lv1Calset_AATRat' incorporates:
         *  ActionPort: '<S1045>/Action Port'
         */
        for (i = 0; i < 10; i++)
        {
            /* Merge: '<S831>/Merge' incorporates:
             *  Constant: '<S1061>/Calib'
             *  SignalConversion generated from: '<S1045>/Lv1CalSet4Charging'
             */
            VaAATD_e_SensorTempThrshldLvl[(i)] = KaAATR_e_AATRRat_Level1[(i)];
        }

        /* End of Outputs for SubSystem: '<S831>/Lv1Calset_AATRat' */
    }
    else if (rtb_VariantMerge_For_Variant_Source_Va_a ||
             ((!rtb_VariantMerge_For_Variant_Source_Va_a) &&
              (!rtb_SCP_DCNegtvTempFA)))
    {
        /* Outputs for IfAction SubSystem: '<S831>/Lv2Calset_AATRat' incorporates:
         *  ActionPort: '<S1046>/Action Port'
         */
        for (i = 0; i < 10; i++)
        {
            /* Merge: '<S831>/Merge' incorporates:
             *  Constant: '<S1062>/Calib'
             *  SignalConversion generated from: '<S1046>/Lv2CalSet4Charging'
             */
            VaAATD_e_SensorTempThrshldLvl[(i)] = KaAATR_e_AATRRat_Level2[(i)];
        }

        /* End of Outputs for SubSystem: '<S831>/Lv2Calset_AATRat' */
    }
    else
    {
        if (rtb_SCP_DCNegtvTempFA)
        {
            /* Outputs for IfAction SubSystem: '<S831>/Lv3Calset_AATRat' incorporates:
             *  ActionPort: '<S1047>/Action Port'
             */
            for (i = 0; i < 10; i++)
            {
                /* Merge: '<S831>/Merge' incorporates:
                 *  Constant: '<S1063>/Calib'
                 *  SignalConversion generated from: '<S1047>/Lv3CalSet4Charging'
                 */
                VaAATD_e_SensorTempThrshldLvl[(i)] = KaAATR_e_AATRRat_Level3[(i)];
            }

            /* End of Outputs for SubSystem: '<S831>/Lv3Calset_AATRat' */
        }
    }

    /* End of If: '<S831>/If' */
    for (i = 0; i < 10; i++)
    {
        /* DataTypeConversion: '<S831>/Data Type Conversion' incorporates:
         *  Merge: '<S831>/Merge'
         */
        rtb_DataTypeConversion_i[i] = (uint8)VaAATD_e_SensorTempThrshldLvl[(i)];
    }

    /* Gain: '<S1048>/Gain' incorporates:
     *  Constant: '<S1044>/Calib'
     *  Selector: '<S831>/TempSelector'
     */
    VeAATD_dT_TempSnsrRat_s1s2 = KaAATR_dT_AATRat_Thrslds[((sint32)
        rtb_DataTypeConversion_i[0]) - 1];

    /* Gain: '<S1049>/Gain' incorporates:
     *  Constant: '<S1044>/Calib'
     *  Selector: '<S831>/TempSelector'
     */
    VeAATD_dT_TempSnsrRat_s1s3 = KaAATR_dT_AATRat_Thrslds[((sint32)
        rtb_DataTypeConversion_i[1]) - 1];

    /* Gain: '<S1050>/Gain' incorporates:
     *  Constant: '<S1044>/Calib'
     *  Selector: '<S831>/TempSelector'
     */
    VeAATD_dT_TempSnsrRat_s1s4 = KaAATR_dT_AATRat_Thrslds[((sint32)
        rtb_DataTypeConversion_i[2]) - 1];

    /* Gain: '<S1051>/Gain' incorporates:
     *  Constant: '<S1044>/Calib'
     *  Selector: '<S831>/TempSelector'
     */
    VeAATD_dT_TempSnsrRat_s1s5 = KaAATR_dT_AATRat_Thrslds[((sint32)
        rtb_DataTypeConversion_i[3]) - 1];

    /* Gain: '<S1052>/Gain' incorporates:
     *  Constant: '<S1044>/Calib'
     *  Selector: '<S831>/TempSelector'
     */
    VeAATD_dT_TempSnsrRat_s2s3 = KaAATR_dT_AATRat_Thrslds[((sint32)
        rtb_DataTypeConversion_i[4]) - 1];

    /* Gain: '<S1053>/Gain' incorporates:
     *  Constant: '<S1044>/Calib'
     *  Selector: '<S831>/TempSelector'
     */
    VeAATD_dT_TempSnsrRat_s2s4 = KaAATR_dT_AATRat_Thrslds[((sint32)
        rtb_DataTypeConversion_i[5]) - 1];

    /* Gain: '<S1054>/Gain' incorporates:
     *  Constant: '<S1044>/Calib'
     *  Selector: '<S831>/TempSelector'
     */
    VeAATD_dT_TempSnsrRat_s2s5 = KaAATR_dT_AATRat_Thrslds[((sint32)
        rtb_DataTypeConversion_i[6]) - 1];

    /* Gain: '<S1055>/Gain' incorporates:
     *  Constant: '<S1044>/Calib'
     *  Selector: '<S831>/TempSelector'
     */
    VeAATD_dT_TempSnsrRat_s3s4 = KaAATR_dT_AATRat_Thrslds[((sint32)
        rtb_DataTypeConversion_i[7]) - 1];

    /* Gain: '<S1056>/Gain' incorporates:
     *  Constant: '<S1044>/Calib'
     *  Selector: '<S831>/TempSelector'
     */
    VeAATD_dT_TempSnsrRat_s3s5 = KaAATR_dT_AATRat_Thrslds[((sint32)
        rtb_DataTypeConversion_i[8]) - 1];

    /* Gain: '<S1057>/Gain' incorporates:
     *  Constant: '<S1044>/Calib'
     *  Selector: '<S831>/TempSelector'
     */
    VeAATD_dT_TempSnsrRat_s4s5 = KaAATR_dT_AATRat_Thrslds[((sint32)
        rtb_DataTypeConversion_i[9]) - 1];

    /* Outputs for Atomic SubSystem: '<S818>/SnsrRat_V02' */
    AATR_ac_SnsrRat_V02();

    /* End of Outputs for SubSystem: '<S818>/SnsrRat_V02' */

    /* RelationalOperator: '<S880>/Relational Operator' */
#if Rte_SysCon_Variant_AATR_19 || Rte_SysCon_Variant_AATR_2 || Rte_SysCon_Variant_AATR_21 || Rte_SysCon_Variant_AATR_4 || Rte_SysCon_Variant_AATR_6

    /* RelationalOperator: '<S880>/Relational Operator' incorporates:
     *  Constant: '<S925>/Constant'
     */
    rtb_RelationalOperator_hv = (((uint32)VeAATD_e_CalSetLvl_PluggedIn) ==
        CeAATR_e_InitTime);

#endif

    /* End of RelationalOperator: '<S880>/Relational Operator' */

    /* SignalConversion generated from: '<S20>/VeDFIR_b_CANERRSTS_CANFD_3' incorporates:
     *  SignalConversion generated from: '<S20>/VeDFIR_b_CANERRSTS_CANFD_1'
     */
#if Rte_SysCon_Variant_AATR_1 && Rte_SysCon_Variant_AATR_21 && Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/VeDFIR_b_CANERRSTS_CANFD_3' incorporates:
     *  Inport: '<Root>/VeDFIR_b_CANERRSTS_CANFD_3'
     */
    (void)Rte_Read_VeDFIR_b_CANERRSTS_CANFD_3_Value
        (&rtb_VM_Conditional_Signal_VeDFIR_b_CANER);

    /* VariantMerge generated from: '<S20>/VeDFIR_b_CANERRSTS_CANFD_1' incorporates:
     *  Inport: '<Root>/VeDFIR_b_CANERRSTS_CANFD_1'
     */
    (void)Rte_Read_VeDFIR_b_CANERRSTS_CANFD_1_Value
        (&rtb_VM_Conditional_Signal_VeDFIR_b_CAN_l);

#endif

    /* End of SignalConversion generated from: '<S20>/VeDFIR_b_CANERRSTS_CANFD_3' */

    /* SignalConversion generated from: '<S20>/VeDFIR_b_CANERRSTS_CANFD_3' incorporates:
     *  SignalConversion generated from: '<S20>/VeDFIR_b_CANERRSTS_CANFD_1'
     */
#if !Rte_SysCon_Variant_AATR_1 || !Rte_SysCon_Variant_AATR_21 || !Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/VeDFIR_b_CANERRSTS_CANFD_3' */
    rtb_VM_Conditional_Signal_VeDFIR_b_CANER = false;

    /* VariantMerge generated from: '<S20>/VeDFIR_b_CANERRSTS_CANFD_1' */
    rtb_VM_Conditional_Signal_VeDFIR_b_CAN_l = false;

#endif

    /* End of SignalConversion generated from: '<S20>/VeDFIR_b_CANERRSTS_CANFD_3' */

    /* Outputs for Atomic SubSystem: '<S830>/CBC_AATSnsr_Enable' */
#if Rte_SysCon_Variant_AATR_21

    /* Outputs for Atomic SubSystem: '<S878>/If_CBC_AATSnsr_Enable' */
    /* DataStoreRead: '<S904>/StatusByte_HiSpdFD_CAN3CommBus' incorporates:
     *  DataStoreRead: '<S905>/StatusByte_LostCommBCM'
     *  DataStoreRead: '<S906>/StatusByte_HiSpdFD_CAN3CommBusPerf'
     *  Logic: '<S900>/Logical Operator'
     *  Logic: '<S900>/Logical Operator2'
     *  Logic: '<S900>/Logical Operator3'
     *  Logic: '<S900>/Logical Operator7'
     *  Logic: '<S904>/Logical Operator'
     *  Logic: '<S905>/Logical Operator'
     *  Logic: '<S906>/Logical Operator'
     *  RelationalOperator: '<S904>/Relational Operator1'
     *  RelationalOperator: '<S904>/Relational Operator2'
     *  RelationalOperator: '<S905>/Relational Operator1'
     *  RelationalOperator: '<S905>/Relational Operator2'
     *  RelationalOperator: '<S906>/Relational Operator1'
     *  RelationalOperator: '<S906>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S904>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S904>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S905>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S905>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S906>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S906>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_AATR_20

    /* UnitDelay: '<S914>/Unit Delay' incorporates:
     *  Constant: '<S904>/Constant1'
     *  Constant: '<S904>/Constant2'
     *  Constant: '<S905>/Constant1'
     *  Constant: '<S905>/Constant2'
     *  Constant: '<S906>/Constant1'
     *  Constant: '<S906>/Constant2'
     */
    rtb_UnitDelay_io = (((((((sint32)AATR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus)
                            & 1) <= 0) || ((((uint32)
        AATR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus) & 64U) != 0U)) && (((((sint32)
        AATR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf) & 1) <= 0) || ((((uint32)
        AATR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf) & 64U) != 0U))) &&
                        (((((sint32)AATR_ac_DW.StatusByte_LostCommBCM) & 1) <= 0)
                         || ((((uint32)AATR_ac_DW.StatusByte_LostCommBCM) & 64U)
                          != 0U)));

#endif

    /* End of DataStoreRead: '<S904>/StatusByte_HiSpdFD_CAN3CommBus' */

    /* DataStoreRead: '<S907>/StatusByte_HiSpdCANCommBus' incorporates:
     *  DataStoreRead: '<S908>/StatusByte_LostCommBCM'
     *  Logic: '<S902>/Logical Operator2'
     *  Logic: '<S902>/Logical Operator3'
     *  Logic: '<S902>/Logical Operator7'
     *  Logic: '<S907>/Logical Operator'
     *  Logic: '<S908>/Logical Operator'
     *  RelationalOperator: '<S907>/Relational Operator1'
     *  RelationalOperator: '<S907>/Relational Operator2'
     *  RelationalOperator: '<S908>/Relational Operator1'
     *  RelationalOperator: '<S908>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S907>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S907>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S908>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S908>/Bitwise Operator2'
     */
#if !Rte_SysCon_Variant_AATR_1 && !Rte_SysCon_Variant_AATR_20

    /* UnitDelay: '<S914>/Unit Delay' incorporates:
     *  Constant: '<S907>/Constant1'
     *  Constant: '<S907>/Constant2'
     *  Constant: '<S908>/Constant1'
     *  Constant: '<S908>/Constant2'
     */
    rtb_UnitDelay_io = ((((((sint32)AATR_ac_DW.StatusByte_HiSpdCANCommBus) & 1) <=
                          0) || ((((uint32)AATR_ac_DW.StatusByte_HiSpdCANCommBus)
                           & 64U) != 0U)) && (((((sint32)
                            AATR_ac_DW.StatusByte_LostCommBCM) & 1) <= 0) ||
                         ((((uint32)AATR_ac_DW.StatusByte_LostCommBCM) & 64U) !=
                          0U)));

#endif

    /* End of DataStoreRead: '<S907>/StatusByte_HiSpdCANCommBus' */

    /* Logic: '<S903>/Logical Operator2' incorporates:
     *  DataStoreRead: '<S910>/StatusByte_LostCommBCM'
     *  DataStoreRead: '<S911>/StatusByte_LostComm_CANC2_BCM'
     *  Logic: '<S903>/Logical Operator'
     *  Logic: '<S903>/Logical Operator1'
     *  Logic: '<S903>/Logical Operator3'
     *  Logic: '<S903>/Logical Operator4'
     *  Logic: '<S903>/Logical Operator5'
     *  Logic: '<S903>/Logical Operator6'
     *  Logic: '<S903>/Logical Operator7'
     *  Logic: '<S910>/Logical Operator'
     *  Logic: '<S911>/Logical Operator'
     *  RelationalOperator: '<S910>/Relational Operator1'
     *  RelationalOperator: '<S910>/Relational Operator2'
     *  RelationalOperator: '<S911>/Relational Operator1'
     *  RelationalOperator: '<S911>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S910>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S910>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S911>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S911>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_AATR_1

    /* UnitDelay: '<S914>/Unit Delay' incorporates:
     *  Constant: '<S909>/Calib'
     *  Constant: '<S910>/Constant1'
     *  Constant: '<S910>/Constant2'
     *  Constant: '<S911>/Constant1'
     *  Constant: '<S911>/Constant2'
     */
    rtb_UnitDelay_io = (((!rtb_VM_Conditional_Signal_VeDFIR_b_CANER) &&
                         (((((sint32)AATR_ac_DW.StatusByte_LostCommBCM) & 1) <=
                           0) || ((((uint32)AATR_ac_DW.StatusByte_LostCommBCM) &
                            64U) != 0U))) ||
                        (((!rtb_VM_Conditional_Signal_VeDFIR_b_CAN_l) &&
                          (((((sint32)AATR_ac_DW.StatusByte_LostComm_CANC2_BCM)
        & 1) <= 0) || ((((uint32)AATR_ac_DW.StatusByte_LostComm_CANC2_BCM) & 64U)
                       != 0U))) && (!KeAATR_b_OvrdReduncy)));

#endif

    /* End of Logic: '<S903>/Logical Operator2' */

    /* UnitDelay: '<S914>/Unit Delay' incorporates:
     *  Constant: '<S901>/Constant1'
     *  Constant: '<S901>/Constant2'
     *  DataStoreRead: '<S901>/StatusByte_InvData_BCM'
     *  Logic: '<S893>/Logical Operator'
     *  Logic: '<S893>/Logical Operator1'
     *  Logic: '<S901>/Logical Operator'
     *  RelationalOperator: '<S901>/Relational Operator1'
     *  RelationalOperator: '<S901>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S901>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S901>/Bitwise Operator2'
     */
    rtb_UnitDelay_io = ((((((sint32)AATR_ac_DW.StatusByte_InvData_BCM) & 1) <= 0)
                         || ((((uint32)AATR_ac_DW.StatusByte_InvData_BCM) & 64U)
                          != 0U)) && rtb_UnitDelay_io);

    /* Logic: '<S892>/Logical Operator1' */
    rtb_VeAATI_b_ClntPumpTempFA_Dial =
        ((rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal && rtb_UnitDelay_io) &&
         (VeAATI_b_CBC_AmbAirVoltFA_Dial));

    /* Outputs for Atomic SubSystem: '<S892>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S899>/EdgeRising' */
    /* Logic: '<S914>/AND' incorporates:
     *  Logic: '<S914>/OR1'
     *  UnitDelay: '<S914>/Unit Delay'
     */
    rtb_VeAATI_b_OnBrdChrg_ClntTmpIn_FA_Dial = (rtb_VeAATI_b_ClntPumpTempFA_Dial
        && (!AATR_ac_DW.UnitDelay_DSTATE_ga));

    /* Update for UnitDelay: '<S914>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_ga = rtb_VeAATI_b_ClntPumpTempFA_Dial;

    /* End of Outputs for SubSystem: '<S899>/EdgeRising' */

    /* Switch: '<S899>/Switch1' incorporates:
     *  Constant: '<S374>/Calib'
     *  Constant: '<S898>/Calib'
     *  Constant: '<S899>/Constant Value1'
     *  Logic: '<S899>/OR'
     *  Logic: '<S899>/OR1'
     *  MinMax: '<S899>/Minimum'
     *  Sum: '<S899>/Summation'
     *  UnitDelay: '<S899>/Unit Delay'
     */
    if ((!rtb_VeAATI_b_ClntPumpTempFA_Dial) ||
            rtb_VeAATI_b_OnBrdChrg_ClntTmpIn_FA_Dial)
    {
        AATR_ac_DW.UnitDelay_DSTATE_ez = 0.0F;
    }
    else
    {
        AATR_ac_DW.UnitDelay_DSTATE_ez = fminf(KeAATR_t_CBC_AATSnsr_FA_DbncTime,
            HeAATR_t_MedTEH + AATR_ac_DW.UnitDelay_DSTATE_ez);
    }

    /* End of Switch: '<S899>/Switch1' */

    /* VariantMerge generated from: '<S878>/b_CBC_FA_Cnfrm' incorporates:
     *  Constant: '<S898>/Calib'
     *  Logic: '<S899>/AND'
     *  RelationalOperator: '<S899>/Greater  Than'
     *  UnitDelay: '<S899>/Unit Delay'
     */
    rtb_LeAATD_b_CBC_Enbl_FA = (rtb_VeAATI_b_ClntPumpTempFA_Dial &&
        (AATR_ac_DW.UnitDelay_DSTATE_ez >= KeAATR_t_CBC_AATSnsr_FA_DbncTime));

    /* End of Outputs for SubSystem: '<S892>/Turn On Delay Time' */

    /* VariantMerge generated from: '<S878>/b_CBC_Enbl_SnsrRatAlgo' incorporates:
     *  Constant: '<S896>/Calib'
     *  Constant: '<S897>/Calib'
     *  Constant: '<S912>/Constant1'
     *  Constant: '<S912>/Constant2'
     *  Constant: '<S913>/Constant1'
     *  Constant: '<S913>/Constant2'
     *  DataStoreRead: '<S912>/StatusByte_AAT_SnsrCktHi'
     *  DataStoreRead: '<S913>/StatusByte_AAT_SnsrCktLo'
     *  Logic: '<S892>/Logical Operator32'
     *  Logic: '<S892>/Logical Operator33'
     *  Logic: '<S892>/Logical Operator4'
     *  Logic: '<S892>/Logical Operator6'
     *  Logic: '<S894>/Logical Operator1'
     *  Logic: '<S894>/Logical Operator5'
     *  Logic: '<S894>/Logical Operator7'
     *  Logic: '<S912>/Logical Operator'
     *  Logic: '<S913>/Logical Operator'
     *  RelationalOperator: '<S912>/Relational Operator1'
     *  RelationalOperator: '<S912>/Relational Operator2'
     *  RelationalOperator: '<S913>/Relational Operator1'
     *  RelationalOperator: '<S913>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S912>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S912>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S913>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S913>/Bitwise Operator2'
     */
    AATR_ac_DW.UnitDelay_DSTATE_oz = (((rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal
        && ((VeAATR_b_SensorsVentilated_AftrInit) ||
            (KeAATR_b_Ovrrd_HeatSoak4Rat_CBC))) && (rtb_RelationalOperator_hv ||
        (KeAATR_b_Ovrrd_PlugInCalLvl_CBC))) && (((((((sint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCktLo) & 1) <= 0) || ((((uint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCktLo) & 64U) != 0U)) && (((((sint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCktHi) & 1) <= 0) || ((((uint32)
        AATR_ac_DW.StatusByte_AAT_SnsrCktHi) & 64U) != 0U))) && rtb_UnitDelay_io));

    /* VariantMerge generated from: '<S878>/b_CBC_EnblRat' incorporates:
     *  Constant: '<S895>/Calib'
     *  Logic: '<S892>/Logical Operator'
     *  Logic: '<S892>/Logical Operator2'
     *  Logic: '<S892>/Logical Operator3'
     *  Logic: '<S892>/Logical Operator5'
     */
    VeAATD_b_CBC_EnblRatnlty = ((rtb_LeAATD_b_CBC_Enbl_FA &&
        (KeAATR_b_CBC_AATSnsr_FA_EnblCnds)) || ((!VeAATD_b_CBC_NoDecision) &&
        (AATR_ac_DW.UnitDelay_DSTATE_oz)));

    /* End of Outputs for SubSystem: '<S878>/If_CBC_AATSnsr_Enable' */
#else

    /* Outputs for Atomic SubSystem: '<S878>/Else_CBC_AATSnsr_Enable' */
    /* VariantMerge generated from: '<S878>/b_CBC_EnblRat' incorporates:
     *  Constant: '<S891>/Constant'
     */
    VeAATD_b_CBC_EnblRatnlty = false;

    /* VariantMerge generated from: '<S878>/b_CBC_Enbl_SnsrRatAlgo' incorporates:
     *  Constant: '<S891>/Constant1'
     */
    AATR_ac_DW.UnitDelay_DSTATE_oz = false;

    /* VariantMerge generated from: '<S878>/b_CBC_FA_Cnfrm' incorporates:
     *  Constant: '<S891>/Constant2'
     */
    rtb_LeAATD_b_CBC_Enbl_FA = false;

    /* End of Outputs for SubSystem: '<S878>/Else_CBC_AATSnsr_Enable' */
#endif

    /* End of Outputs for SubSystem: '<S830>/CBC_AATSnsr_Enable' */

    /* Logic: '<S832>/Logical Operator4' incorporates:
     *  Logic: '<S832>/Logical Operator'
     */
#if Rte_SysCon_Variant_AATR_2 || Rte_SysCon_Variant_AATR_21 || Rte_SysCon_Variant_AATR_4 || Rte_SysCon_Variant_AATR_6

    /* Logic: '<S832>/Logical Operator' incorporates:
     *  Constant: '<S1064>/Calib'
     */
    VeAATD_b_CBCFaulty = ((VeAATD_b_CBCFaulty4mRat) || (rtb_LeAATD_b_CBC_Enbl_FA
                           && (KeAATR_b_CBC_AATSnsr_FA_FltCndsEnbl)));

#endif

    /* End of Logic: '<S832>/Logical Operator4' */

    /* Gain: '<S869>/Gain' */
#if Rte_SysCon_Variant_AATR_21

    /* Gain: '<S869>/Gain' */
    VeAATD_b_CBCFaulty_AftrSnsrChk = VeAATD_b_CBCFaulty;

#endif

    /* End of Gain: '<S869>/Gain' */

    /* DataStoreRead: '<S917>/StatusByte_LostCommCPIM' incorporates:
     *  Constant: '<S923>/Calib'
     *  DataStoreRead: '<S916>/StatusByte_InvData_CPIMGen2'
     *  Logic: '<S879>/Logical Operator'
     *  Logic: '<S879>/Logical Operator1'
     *  Logic: '<S879>/Logical Operator2'
     *  Logic: '<S879>/Logical Operator4'
     *  Logic: '<S879>/Logical Operator5'
     *  Logic: '<S916>/Logical Operator'
     *  Logic: '<S917>/Logical Operator'
     *  MultiPortSwitch: '<S915>/Multiport Switch'
     *  RelationalOperator: '<S916>/Relational Operator1'
     *  RelationalOperator: '<S916>/Relational Operator2'
     *  RelationalOperator: '<S917>/Relational Operator1'
     *  RelationalOperator: '<S917>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S916>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S916>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S917>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S917>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_AATR_2 || Rte_SysCon_Variant_AATR_4 || Rte_SysCon_Variant_AATR_6

    switch (HeAATR_i_SCP_LINBusOff_Slct)
    {
      case 1:
        /* UnitDelay: '<S1009>/Unit Delay' incorporates:
         *  Constant: '<S920>/Constant1'
         *  Constant: '<S920>/Constant2'
         *  Constant: '<S924>/Calib'
         *  DataStoreRead: '<S920>/StatusByte_LIN1_BusOff'
         *  Logic: '<S915>/Logical Operator3'
         *  Logic: '<S915>/Logical Operator6'
         *  Logic: '<S920>/Logical Operator'
         *  RelationalOperator: '<S920>/Relational Operator1'
         *  RelationalOperator: '<S920>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S920>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S920>/Bitwise Operator2'
         */
        rtb_SCP_DCNegtvTempFA = ((KeAATR_b_LIN1BusOff4Rat) || (((((sint32)
            AATR_ac_DW.StatusByte_LIN1_BusOff) & 1) <= 0) || ((((uint32)
            AATR_ac_DW.StatusByte_LIN1_BusOff) & 64U) != 0U)));
        break;

      case 2:
        /* UnitDelay: '<S1009>/Unit Delay' incorporates:
         *  Constant: '<S921>/Constant1'
         *  Constant: '<S921>/Constant2'
         *  DataStoreRead: '<S921>/StatusByte_LIN2_BusOff'
         *  Logic: '<S915>/Logical Operator8'
         *  Logic: '<S921>/Logical Operator'
         *  RelationalOperator: '<S921>/Relational Operator1'
         *  RelationalOperator: '<S921>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S921>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S921>/Bitwise Operator2'
         */
        rtb_SCP_DCNegtvTempFA = (((((sint32)AATR_ac_DW.StatusByte_LIN2_BusOff) &
            1) <= 0) || ((((uint32)AATR_ac_DW.StatusByte_LIN2_BusOff) & 64U) !=
                         0U));
        break;

      case 3:
        /* UnitDelay: '<S1009>/Unit Delay' incorporates:
         *  Constant: '<S922>/Constant1'
         *  Constant: '<S922>/Constant2'
         *  DataStoreRead: '<S922>/StatusByte_LIN3_BusOff'
         *  Logic: '<S915>/Logical Operator7'
         *  Logic: '<S922>/Logical Operator'
         *  RelationalOperator: '<S922>/Relational Operator1'
         *  RelationalOperator: '<S922>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S922>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S922>/Bitwise Operator2'
         */
        rtb_SCP_DCNegtvTempFA = (((((sint32)AATR_ac_DW.StatusByte_LIN3_BusOff) &
            1) <= 0) || ((((uint32)AATR_ac_DW.StatusByte_LIN3_BusOff) & 64U) !=
                         0U));
        break;

      default:
        /* UnitDelay: '<S1009>/Unit Delay' incorporates:
         *  Constant: '<S915>/FALSE Constant1'
         */
        rtb_SCP_DCNegtvTempFA = false;
        break;
    }

    /* Logic: '<S879>/Logical Operator2' incorporates:
     *  Constant: '<S916>/Constant1'
     *  Constant: '<S916>/Constant2'
     *  Constant: '<S917>/Constant1'
     *  Constant: '<S917>/Constant2'
     *  Constant: '<S918>/Calib'
     *  Constant: '<S919>/Calib'
     *  Constant: '<S923>/Calib'
     */
    VeAATR_b_NoCommIssuewCPIM = ((((KeAATR_b_OvrrdLOCwSCP4Rat) || (((((sint32)
        AATR_ac_DW.StatusByte_LostCommCPIM) & 1) <= 0) || ((((uint32)
        AATR_ac_DW.StatusByte_LostCommCPIM) & 64U) != 0U))) &&
        ((KeAATR_b_OvrrdInvDatawSCP4Rat) || (((((sint32)
        AATR_ac_DW.StatusByte_InvData_CPIMGen2) & 1) <= 0) || ((((uint32)
        AATR_ac_DW.StatusByte_InvData_CPIMGen2) & 64U) != 0U)))) &&
        rtb_SCP_DCNegtvTempFA);

#endif

    /* End of DataStoreRead: '<S917>/StatusByte_LostCommCPIM' */

    /* Outputs for Atomic SubSystem: '<S830>/SCPInletTmpSnsr' */
#if Rte_SysCon_Variant_AATR_6

    /* Outputs for Atomic SubSystem: '<S887>/If_SCPInletTmpSnsr' */
    /* DataStoreRead: '<S1034>/StatusByte_BatChaCouTemSenACirHig' incorporates:
     *  DataStoreRead: '<S1035>/StatusByte_BatChaCouTemSenACirLow'
     *  Logic: '<S1031>/Logical Operator1'
     *  Logic: '<S1034>/Logical Operator'
     *  Logic: '<S1035>/Logical Operator'
     *  RelationalOperator: '<S1034>/Relational Operator1'
     *  RelationalOperator: '<S1034>/Relational Operator2'
     *  RelationalOperator: '<S1035>/Relational Operator1'
     *  RelationalOperator: '<S1035>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1034>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1034>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1035>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1035>/Bitwise Operator2'
     */
#if !Rte_SysCon_Variant_AATR_1

    /* RelationalOperator: '<S1027>/Relational Operator1' incorporates:
     *  Constant: '<S1034>/Constant1'
     *  Constant: '<S1034>/Constant2'
     *  Constant: '<S1035>/Constant1'
     *  Constant: '<S1035>/Constant2'
     */
    rtb_RelationalOperator1_cc = ((((((sint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirLow) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirLow) & 64U) == 0U)) ||
        (((((sint32)AATR_ac_DW.StatusByte_BatChaCouTemSenACirHig) & 1) > 0) &&
         ((((uint32)AATR_ac_DW.StatusByte_BatChaCouTemSenACirHig) & 64U) == 0U)));

#endif

    /* End of DataStoreRead: '<S1034>/StatusByte_BatChaCouTemSenACirHig' */

    /* DataStoreRead: '<S1036>/StatusByte_BatChaCouTemSnsrCkt' incorporates:
     *  Logic: '<S1036>/Logical Operator'
     *  RelationalOperator: '<S1036>/Relational Operator1'
     *  RelationalOperator: '<S1036>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1036>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1036>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_AATR_1

    /* RelationalOperator: '<S1027>/Relational Operator1' incorporates:
     *  Constant: '<S1036>/Constant1'
     *  Constant: '<S1036>/Constant2'
     */
    rtb_RelationalOperator1_cc = (((((sint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSnsrCkt) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSnsrCkt) & 64U) == 0U));

#endif

    /* End of DataStoreRead: '<S1036>/StatusByte_BatChaCouTemSnsrCkt' */

    /* Logic: '<S1019>/Logical Operator13' */
    rtb_LeAATD_b_SCPInlet_Enbl_FA_l = ((rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal
        && (VeAATR_b_NoCommIssuewCPIM)) &&
        (AATR_ac_B.VeAATI_b_SCP_InletTempFA_Dial_AS));

    /* Outputs for Atomic SubSystem: '<S1019>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S1028>/EdgeRising' */
    /* Logic: '<S1042>/AND' incorporates:
     *  Logic: '<S1042>/OR1'
     *  UnitDelay: '<S1042>/Unit Delay'
     */
    rtb_VeAATI_b_ClntPumpTempFA_Dial = (rtb_LeAATD_b_SCPInlet_Enbl_FA_l &&
        (!AATR_ac_DW.UnitDelay_DSTATE_bn));

    /* Update for UnitDelay: '<S1042>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_bn = rtb_LeAATD_b_SCPInlet_Enbl_FA_l;

    /* End of Outputs for SubSystem: '<S1028>/EdgeRising' */

    /* Switch: '<S1028>/Switch1' incorporates:
     *  Constant: '<S1026>/Calib'
     *  Constant: '<S1028>/Constant Value1'
     *  Constant: '<S374>/Calib'
     *  Logic: '<S1028>/OR'
     *  Logic: '<S1028>/OR1'
     *  MinMax: '<S1028>/Minimum'
     *  Sum: '<S1028>/Summation'
     *  UnitDelay: '<S1028>/Unit Delay'
     */
    if ((!rtb_LeAATD_b_SCPInlet_Enbl_FA_l) || rtb_VeAATI_b_ClntPumpTempFA_Dial)
    {
        AATR_ac_DW.UnitDelay_DSTATE_n = 0.0F;
    }
    else
    {
        AATR_ac_DW.UnitDelay_DSTATE_n = fminf
            (KeAATR_t_SCPInletTmpSnsr_FA_DbncTime, HeAATR_t_MedTEH +
             AATR_ac_DW.UnitDelay_DSTATE_n);
    }

    /* End of Switch: '<S1028>/Switch1' */

    /* VariantMerge generated from: '<S887>/b_SCP_Inlet_FA_Cnfrm' incorporates:
     *  Constant: '<S1026>/Calib'
     *  Logic: '<S1028>/AND'
     *  RelationalOperator: '<S1028>/Greater  Than'
     *  UnitDelay: '<S1028>/Unit Delay'
     */
    rtb_LeAATD_b_SCPInlet_Enbl_FA_l = (rtb_LeAATD_b_SCPInlet_Enbl_FA_l &&
        (AATR_ac_DW.UnitDelay_DSTATE_n >= KeAATR_t_SCPInletTmpSnsr_FA_DbncTime));

    /* End of Outputs for SubSystem: '<S1019>/Turn On Delay Time' */

    /* Product: '<S1037>/Multiplication3' incorporates:
     *  Constant: '<S1037>/Constant Value1'
     *  Constant: '<S1038>/Calib'
     */
    rtb_TmpSignalConversionAtAmbAirTemp_Save = HeAATR_t_MedTEH / 2.0F;

    /* Product: '<S1037>/Multiplication4' incorporates:
     *  Constant: '<S1041>/Calib'
     *  Sum: '<S1037>/Summation2'
     *  UnitDelay: '<S1037>/Unit Delay1'
     */
    rtb_SCP_DCNegtvTemp = (rtb_TmpSignalConversionAtAmbAirTemp_Save -
                           KeAATR_t_SCPInlet_FilterDeriv_CutOff) *
        AATR_ac_DW.UnitDelay1_DSTATE;

    /* UnitDelay: '<S1037>/Unit Delay' incorporates:
     *  UnitDelay: '<S1037>/Unit Delay1'
     */
    AATR_ac_DW.UnitDelay1_DSTATE = AATR_ac_DW.UnitDelay_DSTATE_ds;

    /* Product: '<S1037>/Multiplication2' incorporates:
     *  Constant: '<S1041>/Calib'
     *  Sum: '<S1037>/Summation'
     *  Sum: '<S1037>/Summation1'
     *  UnitDelay: '<S1037>/Unit Delay1'
     */
    AATR_ac_DW.UnitDelay1_DSTATE = ((AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS_k
        - rtb_SCP_DCNegtvTemp) - AATR_ac_DW.UnitDelay1_DSTATE) /
        (rtb_TmpSignalConversionAtAmbAirTemp_Save +
         KeAATR_t_SCPInlet_FilterDeriv_CutOff);

    /* Switch: '<S1021>/Switch10' incorporates:
     *  Constant: '<S1033>/Calib'
     *  Logic: '<S1021>/Logical Operator1'
     */
    if (KeAATR_b_CPIM_NotPresent)
    {
        rtb_NotEqual_d = !AATR_ac_B.VeAATI_b_SCP_InletTempFA_Dial_AS;
    }
    else
    {
        rtb_NotEqual_d = VeAATR_b_NoCommIssuewCPIM;
    }

    /* End of Switch: '<S1021>/Switch10' */

    /* VariantMerge generated from: '<S887>/b_SCP_Inlet_Enbl_SnsrRatAlgo' incorporates:
     *  Constant: '<S1022>/Calib'
     *  Constant: '<S1023>/Calib'
     *  Constant: '<S1025>/Calib'
     *  Constant: '<S1029>/Constant'
     *  Constant: '<S1030>/Constant'
     *  Constant: '<S1039>/Calib'
     *  Constant: '<S1040>/Calib'
     *  Logic: '<S1019>/Logical Operator16'
     *  Logic: '<S1019>/Logical Operator26'
     *  Logic: '<S1019>/Logical Operator35'
     *  Logic: '<S1019>/Logical Operator36'
     *  Logic: '<S1020>/Logical Operator1'
     *  Logic: '<S1020>/Logical Operator21'
     *  Logic: '<S1020>/Logical Operator31'
     *  Logic: '<S1021>/Logical Operator22'
     *  Logic: '<S1021>/Logical Operator23'
     *  Logic: '<S1027>/Logical Operator1'
     *  RelationalOperator: '<S1020>/Relational Operator1'
     *  RelationalOperator: '<S1020>/Relational Operator2'
     *  RelationalOperator: '<S1027>/Relational Operator'
     *  RelationalOperator: '<S1027>/Relational Operator1'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_nc =
        (((((rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal &&
             ((VeAATR_b_SensorsVentilated_AftrInit) ||
              (KeAATR_b_Ovrrd_HeatSoak4Rat_SCPInlet))) &&
            ((rtb_RelationalOperator_hv && ((((uint32)
                 AATR_ac_B.VeOBCR_e_ChargingLevel) != CeOBCR_e_ChargingLvlAC1) &&
               (((uint32)AATR_ac_B.VeOBCR_e_ChargingLevel) !=
                CeOBCR_e_ChargingLvlAC2))) ||
             (KeAATR_b_Ovrrd_PlugInCalLvl_SCPInlet))) &&
           (KeAATR_b_SCPInletTmpSnsr_Present)) && ((!rtb_RelationalOperator1_cc)
           && rtb_NotEqual_d)) && ((AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS_k >
           KeAATR_T_SCPInlet_Temp) && (AATR_ac_DW.UnitDelay1_DSTATE < ((float32)
            KeAATR_dTt_SCPInlet_MaxTempDeriv))));

    /* VariantMerge generated from: '<S887>/b_SCP_Inlet_EnblRat' incorporates:
     *  Constant: '<S1024>/Calib'
     *  Logic: '<S1019>/Logical Operator'
     *  Logic: '<S1019>/Logical Operator1'
     *  Logic: '<S1019>/Logical Operator2'
     *  Logic: '<S1019>/Logical Operator3'
     */
    VeAATD_b_SCPInlet_EnblRatnlty = ((rtb_LeAATD_b_SCPInlet_Enbl_FA_l &&
        (KeAATR_b_SCPInletTmpSnsr_FA_EnblCnds)) ||
        ((!VeAATD_b_SCPInlet_NoDecision) && (AATR_ac_DW.UnitDelay1_DSTATE_nc)));

    /* Update for UnitDelay: '<S1037>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_ds = AATR_ac_B.VeAATI_T_SCP_InletTemp_Dial_AS_k;

    /* End of Outputs for SubSystem: '<S887>/If_SCPInletTmpSnsr' */
#else

    /* Outputs for Atomic SubSystem: '<S887>/ElsSCPInletTmpSnsr' */
    /* VariantMerge generated from: '<S887>/b_SCP_Inlet_EnblRat' incorporates:
     *  Constant: '<S1018>/FALSE Constant'
     */
    VeAATD_b_SCPInlet_EnblRatnlty = false;

    /* VariantMerge generated from: '<S887>/b_SCP_Inlet_Enbl_SnsrRatAlgo' incorporates:
     *  Constant: '<S1018>/FALSE Constant1'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_nc = false;

    /* VariantMerge generated from: '<S887>/b_SCP_Inlet_FA_Cnfrm' incorporates:
     *  Constant: '<S1018>/FALSE Constant2'
     */
    rtb_LeAATD_b_SCPInlet_Enbl_FA_l = false;

    /* End of Outputs for SubSystem: '<S887>/ElsSCPInletTmpSnsr' */
#endif

    /* End of Outputs for SubSystem: '<S830>/SCPInletTmpSnsr' */

    /* Logic: '<S832>/Logical Operator2' incorporates:
     *  Logic: '<S832>/Logical Operator1'
     */
#if Rte_SysCon_Variant_AATR_2 || Rte_SysCon_Variant_AATR_21 || Rte_SysCon_Variant_AATR_4 || Rte_SysCon_Variant_AATR_6

    /* Logic: '<S832>/Logical Operator1' incorporates:
     *  Constant: '<S1065>/Calib'
     */
    VeAATD_b_SCPInletFaulty = ((VeAATD_b_SCPInletFaulty4mRat) ||
        (rtb_LeAATD_b_SCPInlet_Enbl_FA_l &&
         (KeAATR_b_SCPInletTmpSnsr_FA_FltCndsEnbl)));

#endif

    /* End of Logic: '<S832>/Logical Operator2' */

    /* Switch: '<S824>/Switch5' */
#if Rte_SysCon_Variant_AATR_6

    /* Switch: '<S824>/Switch5' incorporates:
     *  Constant: '<S867>/Calib'
     */
    VeAATD_b_SCPInletFaulty_AftrSnsrChk = ((KeAATR_b_SCPInletTmpSnsr_Present) &&
        (VeAATD_b_SCPInletFaulty));

#endif

    /* End of Switch: '<S824>/Switch5' */

    /* Logic: '<S883>/Logical Operator38' incorporates:
     *  Logic: '<S883>/Logical Operator18'
     *  Logic: '<S883>/Logical Operator39'
     *  Logic: '<S966>/Logical Operator1'
     *  Logic: '<S966>/Logical Operator21'
     *  Logic: '<S966>/Logical Operator31'
     *  RelationalOperator: '<S966>/Relational Operator1'
     *  RelationalOperator: '<S966>/Relational Operator2'
     */
#if Rte_SysCon_Variant_AATR_2 || Rte_SysCon_Variant_AATR_4

    /* Logic: '<S883>/Logical Operator18' incorporates:
     *  Constant: '<S964>/Calib'
     *  Constant: '<S965>/Calib'
     *  Constant: '<S967>/Constant'
     *  Constant: '<S968>/Constant'
     */
    rtb_LogicalOperator18_i = (((VeAATR_b_SensorsVentilated_AftrInit) ||
        (KeAATR_b_Ovrrd_HeatSoak4Rat_SCP_DCs)) && ((rtb_RelationalOperator_hv &&
        ((((uint32)AATR_ac_B.VeOBCR_e_ChargingLevel) != CeOBCR_e_ChargingLvlDC1)
         && (((uint32)AATR_ac_B.VeOBCR_e_ChargingLevel) !=
             CeOBCR_e_ChargingLvlDC2))) || (KeAATR_b_Ovrrd_PlugInCalLvl_SCP_DCs)));

#endif

    /* End of Logic: '<S883>/Logical Operator38' */

    /* Outputs for Atomic SubSystem: '<S830>/DCNgtvTmpSnsr' */
#if Rte_SysCon_Variant_AATR_2

    /* Outputs for Atomic SubSystem: '<S881>/If_DCNgtvTmpSnsr' */
    /* DataStoreRead: '<S936>/StatusByte_BattChrgCouTempSnsrCCktHi' incorporates:
     *  DataStoreRead: '<S937>/StatusByte_BattChrgCouTempSnsrCCktLo'
     *  Logic: '<S934>/Logical Operator1'
     *  Logic: '<S936>/Logical Operator'
     *  Logic: '<S937>/Logical Operator'
     *  RelationalOperator: '<S936>/Relational Operator1'
     *  RelationalOperator: '<S936>/Relational Operator2'
     *  RelationalOperator: '<S937>/Relational Operator1'
     *  RelationalOperator: '<S937>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S936>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S936>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S937>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S937>/Bitwise Operator2'
     */
#if !Rte_SysCon_Variant_AATR_1

    /* RelationalOperator: '<S932>/Relational Operator1' incorporates:
     *  Constant: '<S936>/Constant1'
     *  Constant: '<S936>/Constant2'
     *  Constant: '<S937>/Constant1'
     *  Constant: '<S937>/Constant2'
     */
    rtb_RelationalOperator1_g2 = ((((((sint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktLo) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktLo) & 64U) == 0U)) ||
        (((((sint32)AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktHi) & 1) > 0) &&
         ((((uint32)AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktHi) & 64U) ==
          0U)));

#endif

    /* End of DataStoreRead: '<S936>/StatusByte_BattChrgCouTempSnsrCCktHi' */

    /* DataStoreRead: '<S938>/StatusByte_BattChrgCouTempSnsrCCkt' incorporates:
     *  Logic: '<S938>/Logical Operator'
     *  RelationalOperator: '<S938>/Relational Operator1'
     *  RelationalOperator: '<S938>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S938>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S938>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_AATR_1

    /* RelationalOperator: '<S932>/Relational Operator1' incorporates:
     *  Constant: '<S938>/Constant1'
     *  Constant: '<S938>/Constant2'
     */
    rtb_RelationalOperator1_g2 = (((((sint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCkt) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCkt) & 64U) == 0U));

#endif

    /* End of DataStoreRead: '<S938>/StatusByte_BattChrgCouTempSnsrCCkt' */

    /* Logic: '<S927>/Logical Operator1' */
    rtb_VeAATI_b_SCP_DCNegtvTempFA_Dial =
        ((rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal && (VeAATR_b_NoCommIssuewCPIM))
         && rtb_VeAATI_b_SCP_DCNegtvTempFA_Dial);

    /* Outputs for Atomic SubSystem: '<S927>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S933>/EdgeRising' */
    /* Logic: '<S944>/AND' incorporates:
     *  Logic: '<S944>/OR1'
     *  UnitDelay: '<S944>/Unit Delay'
     */
    rtb_AND_b0 = (rtb_VeAATI_b_SCP_DCNegtvTempFA_Dial &&
                  (!AATR_ac_DW.UnitDelay_DSTATE_p1));

    /* Update for UnitDelay: '<S944>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_p1 = rtb_VeAATI_b_SCP_DCNegtvTempFA_Dial;

    /* End of Outputs for SubSystem: '<S933>/EdgeRising' */

    /* Switch: '<S933>/Switch1' incorporates:
     *  Constant: '<S374>/Calib'
     *  Constant: '<S931>/Calib'
     *  Constant: '<S933>/Constant Value1'
     *  Logic: '<S933>/OR'
     *  Logic: '<S933>/OR1'
     *  MinMax: '<S933>/Minimum'
     *  Sum: '<S933>/Summation'
     *  UnitDelay: '<S933>/Unit Delay'
     */
    if ((!rtb_VeAATI_b_SCP_DCNegtvTempFA_Dial) || rtb_AND_b0)
    {
        AATR_ac_DW.UnitDelay_DSTATE_l1 = 0.0F;
    }
    else
    {
        AATR_ac_DW.UnitDelay_DSTATE_l1 = fminf(KeAATR_t_SCP_DCNgtv_FA_DbncTime,
            HeAATR_t_MedTEH + AATR_ac_DW.UnitDelay_DSTATE_l1);
    }

    /* End of Switch: '<S933>/Switch1' */

    /* VariantMerge generated from: '<S881>/b_SCP_DCNgtv_FA_Cnfrm' incorporates:
     *  Constant: '<S931>/Calib'
     *  Logic: '<S933>/AND'
     *  RelationalOperator: '<S933>/Greater  Than'
     *  UnitDelay: '<S933>/Unit Delay'
     */
    rtb_AND_b0 = (rtb_VeAATI_b_SCP_DCNegtvTempFA_Dial &&
                  (AATR_ac_DW.UnitDelay_DSTATE_l1 >=
                   KeAATR_t_SCP_DCNgtv_FA_DbncTime));

    /* End of Outputs for SubSystem: '<S927>/Turn On Delay Time' */

    /* Product: '<S939>/Multiplication3' incorporates:
     *  Constant: '<S939>/Constant Value1'
     *  Constant: '<S940>/Calib'
     */
    rtb_TmpSignalConversionAtAmbAirTemp_Save = HeAATR_t_MedTEH / 2.0F;

    /* Product: '<S939>/Multiplication4' incorporates:
     *  Constant: '<S943>/Calib'
     *  Sum: '<S939>/Summation2'
     *  UnitDelay: '<S939>/Unit Delay1'
     */
    rtb_SCP_DCNegtvTemp = (rtb_TmpSignalConversionAtAmbAirTemp_Save -
                           KeAATR_t_DCNgtv_FilterDeriv_CutOff) *
        AATR_ac_DW.UnitDelay1_DSTATE_k;

    /* UnitDelay: '<S939>/Unit Delay' incorporates:
     *  UnitDelay: '<S939>/Unit Delay1'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_k = AATR_ac_DW.UnitDelay_DSTATE_ky;

    /* Product: '<S939>/Multiplication2' incorporates:
     *  Constant: '<S943>/Calib'
     *  Sum: '<S939>/Summation'
     *  Sum: '<S939>/Summation1'
     *  UnitDelay: '<S939>/Unit Delay1'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_k = ((rtb_VeAATI_T_SCP_DCNegtvTemp_Dial -
        rtb_SCP_DCNegtvTemp) - AATR_ac_DW.UnitDelay1_DSTATE_k) /
        (rtb_TmpSignalConversionAtAmbAirTemp_Save +
         KeAATR_t_DCNgtv_FilterDeriv_CutOff);

    /* VariantMerge generated from: '<S881>/b_SCP_DCNgtv_Enbl_SnsrRatAlgo' incorporates:
     *  Constant: '<S930>/Calib'
     *  Constant: '<S941>/Calib'
     *  Constant: '<S942>/Calib'
     *  Logic: '<S927>/Logical Operator2'
     *  Logic: '<S927>/Logical Operator4'
     *  Logic: '<S928>/Logical Operator3'
     *  Logic: '<S928>/Logical Operator4'
     *  Logic: '<S932>/Logical Operator1'
     *  RelationalOperator: '<S932>/Relational Operator'
     *  RelationalOperator: '<S932>/Relational Operator1'
     */
    rtb_RelationalOperator1_g2 = ((((rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal &&
        rtb_LogicalOperator18_i) && (KeAATR_b_SCP_DCTmpSnsrs_Present)) &&
        ((!rtb_RelationalOperator1_g2) && (VeAATR_b_NoCommIssuewCPIM))) &&
        ((rtb_VeAATI_T_SCP_DCNegtvTemp_Dial > KeAATR_T_DCNgtv_Temp) &&
         (AATR_ac_DW.UnitDelay1_DSTATE_k < ((float32)
        KeAATR_dTt_DCNgtv_MaxTempDeriv))));

    /* VariantMerge generated from: '<S881>/b_SCP_DCNgtv_EnblRat' incorporates:
     *  Constant: '<S929>/Calib'
     *  Logic: '<S927>/Logical Operator'
     *  Logic: '<S927>/Logical Operator3'
     *  Logic: '<S927>/Logical Operator5'
     *  Logic: '<S927>/Logical Operator6'
     */
    VeAATD_b_SCPDCNegtv_EnblRatnlty = ((rtb_AND_b0 &&
        (KeAATR_b_SCP_DCNgtv_FA_EnblCnds)) ||
        ((!VeAATD_b_InitorSCPDCNgtv_NoDecision) && rtb_RelationalOperator1_g2));

    /* Update for UnitDelay: '<S939>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_ky = rtb_VeAATI_T_SCP_DCNegtvTemp_Dial;

    /* End of Outputs for SubSystem: '<S881>/If_DCNgtvTmpSnsr' */
#else

    /* Outputs for Atomic SubSystem: '<S881>/ElseDCNgtvTmpSnsr' */
    /* VariantMerge generated from: '<S881>/b_SCP_DCNgtv_EnblRat' incorporates:
     *  Constant: '<S926>/FALSE Constant'
     */
    VeAATD_b_SCPDCNegtv_EnblRatnlty = false;

    /* VariantMerge generated from: '<S881>/b_SCP_DCNgtv_Enbl_SnsrRatAlgo' incorporates:
     *  Constant: '<S926>/FALSE Constant1'
     */
    rtb_RelationalOperator1_g2 = false;

    /* VariantMerge generated from: '<S881>/b_SCP_DCNgtv_FA_Cnfrm' incorporates:
     *  Constant: '<S926>/FALSE Constant2'
     */
    rtb_AND_b0 = false;

    /* End of Outputs for SubSystem: '<S881>/ElseDCNgtvTmpSnsr' */
#endif

    /* End of Outputs for SubSystem: '<S830>/DCNgtvTmpSnsr' */

    /* Logic: '<S832>/Logical Operator9' incorporates:
     *  Logic: '<S832>/Logical Operator8'
     */
#if Rte_SysCon_Variant_AATR_2 || Rte_SysCon_Variant_AATR_21 || Rte_SysCon_Variant_AATR_4 || Rte_SysCon_Variant_AATR_6

    /* Logic: '<S832>/Logical Operator8' incorporates:
     *  Constant: '<S1066>/Calib'
     */
    VeAATD_b_InitorSCPDCNgtvFaulty = ((VeAATD_b_InitorSCPDCNgtvFaulty4mRat) ||
        (rtb_AND_b0 && (KeAATR_b_SCP_DCNgtv_FA_FltCndsEnbl)));

#endif

    /* End of Logic: '<S832>/Logical Operator9' */

    /* Switch: '<S824>/Switch13' */
#if Rte_SysCon_Variant_AATR_2

    /* Switch: '<S824>/Switch13' incorporates:
     *  Constant: '<S868>/Calib'
     */
    VeAATD_b_SCPDCNgtvFaulty_AftrSnsrChk = ((KeAATR_b_SCP_DCTmpSnsrs_Present) &&
        (VeAATD_b_InitorSCPDCNgtvFaulty));

#endif

    /* End of Switch: '<S824>/Switch13' */

    /* Outputs for Atomic SubSystem: '<S830>/DCPstvTmpSnsr' */
#if Rte_SysCon_Variant_AATR_4

    /* Outputs for Atomic SubSystem: '<S882>/If_DCPstvTmpSnsr' */
    /* DataStoreRead: '<S955>/StatusByte_BattChrgCouTempSnsrBCktHi' incorporates:
     *  DataStoreRead: '<S956>/StatusByte_BattChrgCouTempSnsrBCktLo'
     *  Logic: '<S953>/Logical Operator3'
     *  Logic: '<S955>/Logical Operator'
     *  Logic: '<S956>/Logical Operator'
     *  RelationalOperator: '<S955>/Relational Operator1'
     *  RelationalOperator: '<S955>/Relational Operator2'
     *  RelationalOperator: '<S956>/Relational Operator1'
     *  RelationalOperator: '<S956>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S955>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S955>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S956>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S956>/Bitwise Operator2'
     */
#if !Rte_SysCon_Variant_AATR_1

    /* RelationalOperator: '<S951>/Relational Operator1' incorporates:
     *  Constant: '<S955>/Constant1'
     *  Constant: '<S955>/Constant2'
     *  Constant: '<S956>/Constant1'
     *  Constant: '<S956>/Constant2'
     */
    rtb_RelationalOperator1_pel = ((((((sint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktLo) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktLo) & 64U) == 0U)) ||
        (((((sint32)AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktHi) & 1) > 0) &&
         ((((uint32)AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktHi) & 64U) ==
          0U)));

#endif

    /* End of DataStoreRead: '<S955>/StatusByte_BattChrgCouTempSnsrBCktHi' */

    /* DataStoreRead: '<S957>/StatusByte_BattChrgCouTempSnsrBCkt' incorporates:
     *  Logic: '<S957>/Logical Operator'
     *  RelationalOperator: '<S957>/Relational Operator1'
     *  RelationalOperator: '<S957>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S957>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S957>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_AATR_1

    /* RelationalOperator: '<S951>/Relational Operator1' incorporates:
     *  Constant: '<S957>/Constant1'
     *  Constant: '<S957>/Constant2'
     */
    rtb_RelationalOperator1_pel = (((((sint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCkt) & 1) > 0) && ((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCkt) & 64U) == 0U));

#endif

    /* End of DataStoreRead: '<S957>/StatusByte_BattChrgCouTempSnsrBCkt' */

    /* Logic: '<S946>/Logical Operator3' */
    rtb_VeAATI_b_SCP_DCPstvTempFA_Dial =
        ((rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal && (VeAATR_b_NoCommIssuewCPIM))
         && rtb_VeAATI_b_SCP_DCPstvTempFA_Dial);

    /* Outputs for Atomic SubSystem: '<S946>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S952>/EdgeRising' */
    /* Logic: '<S963>/AND' incorporates:
     *  Logic: '<S963>/OR1'
     *  UnitDelay: '<S963>/Unit Delay'
     */
    rtb_AND_jx = (rtb_VeAATI_b_SCP_DCPstvTempFA_Dial &&
                  (!AATR_ac_DW.UnitDelay_DSTATE_m5));

    /* Update for UnitDelay: '<S963>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_m5 = rtb_VeAATI_b_SCP_DCPstvTempFA_Dial;

    /* End of Outputs for SubSystem: '<S952>/EdgeRising' */

    /* Switch: '<S952>/Switch1' incorporates:
     *  Constant: '<S374>/Calib'
     *  Constant: '<S950>/Calib'
     *  Constant: '<S952>/Constant Value1'
     *  Logic: '<S952>/OR'
     *  Logic: '<S952>/OR1'
     *  MinMax: '<S952>/Minimum'
     *  Sum: '<S952>/Summation'
     *  UnitDelay: '<S952>/Unit Delay'
     */
    if ((!rtb_VeAATI_b_SCP_DCPstvTempFA_Dial) || rtb_AND_jx)
    {
        AATR_ac_DW.UnitDelay_DSTATE_kn = 0.0F;
    }
    else
    {
        AATR_ac_DW.UnitDelay_DSTATE_kn = fminf(KeAATR_t_SCP_DCPstv_FA_DbncTime,
            HeAATR_t_MedTEH + AATR_ac_DW.UnitDelay_DSTATE_kn);
    }

    /* End of Switch: '<S952>/Switch1' */

    /* VariantMerge generated from: '<S882>/b_SCP_DCPstv_FA_Cnfrm' incorporates:
     *  Constant: '<S950>/Calib'
     *  Logic: '<S952>/AND'
     *  RelationalOperator: '<S952>/Greater  Than'
     *  UnitDelay: '<S952>/Unit Delay'
     */
    rtb_AND_jx = (rtb_VeAATI_b_SCP_DCPstvTempFA_Dial &&
                  (AATR_ac_DW.UnitDelay_DSTATE_kn >=
                   KeAATR_t_SCP_DCPstv_FA_DbncTime));

    /* End of Outputs for SubSystem: '<S946>/Turn On Delay Time' */

    /* Product: '<S958>/Multiplication3' incorporates:
     *  Constant: '<S958>/Constant Value1'
     *  Constant: '<S959>/Calib'
     */
    rtb_TmpSignalConversionAtAmbAirTemp_Save = HeAATR_t_MedTEH / 2.0F;

    /* Product: '<S958>/Multiplication4' incorporates:
     *  Constant: '<S962>/Calib'
     *  Sum: '<S958>/Summation2'
     *  UnitDelay: '<S958>/Unit Delay1'
     */
    rtb_SCP_DCNegtvTemp = (rtb_TmpSignalConversionAtAmbAirTemp_Save -
                           KeAATR_t_DCPstv_FilterDeriv_CutOff) *
        AATR_ac_DW.UnitDelay1_DSTATE_a;

    /* UnitDelay: '<S958>/Unit Delay' incorporates:
     *  UnitDelay: '<S958>/Unit Delay1'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_a = AATR_ac_DW.UnitDelay_DSTATE_e3;

    /* Product: '<S958>/Multiplication2' incorporates:
     *  Constant: '<S962>/Calib'
     *  Sum: '<S958>/Summation'
     *  Sum: '<S958>/Summation1'
     *  UnitDelay: '<S958>/Unit Delay1'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_a = ((rtb_VeAATI_T_SCP_DCPstvTemp_Dial -
        rtb_SCP_DCNegtvTemp) - AATR_ac_DW.UnitDelay1_DSTATE_a) /
        (rtb_TmpSignalConversionAtAmbAirTemp_Save +
         KeAATR_t_DCPstv_FilterDeriv_CutOff);

    /* VariantMerge generated from: '<S882>/b_SCP_DCPstv_Enbl_SnsrRatAlgo' incorporates:
     *  Constant: '<S949>/Calib'
     *  Constant: '<S960>/Calib'
     *  Constant: '<S961>/Calib'
     *  Logic: '<S946>/Logical Operator2'
     *  Logic: '<S946>/Logical Operator4'
     *  Logic: '<S947>/Logical Operator4'
     *  Logic: '<S947>/Logical Operator6'
     *  Logic: '<S951>/Logical Operator1'
     *  RelationalOperator: '<S951>/Relational Operator'
     *  RelationalOperator: '<S951>/Relational Operator1'
     */
    rtb_RelationalOperator1_pel = ((((rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal &&
        rtb_LogicalOperator18_i) && (KeAATR_b_SCP_DCTmpSnsrs_Present)) &&
        ((!rtb_RelationalOperator1_pel) && (VeAATR_b_NoCommIssuewCPIM))) &&
        ((rtb_VeAATI_T_SCP_DCPstvTemp_Dial > KeAATR_T_DCPstv_Temp) &&
         (AATR_ac_DW.UnitDelay1_DSTATE_a < ((float32)
        KeAATR_dTt_DCPstv_MaxTempDeriv))));

    /* VariantMerge generated from: '<S882>/b_SCP_DCPstv_EnblRat' incorporates:
     *  Constant: '<S948>/Calib'
     *  Logic: '<S946>/Logical Operator'
     *  Logic: '<S946>/Logical Operator1'
     *  Logic: '<S946>/Logical Operator5'
     *  Logic: '<S946>/Logical Operator7'
     */
    VeAATD_b_SCPDCPstv_EnblRatnlty = ((rtb_AND_jx &&
        (KeAATR_b_SCP_DCPstv_FA_EnblCnds)) ||
        ((!VeAATD_b_IntakeorSCPDCPstv_NoDecision) && rtb_RelationalOperator1_pel));

    /* Update for UnitDelay: '<S958>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_e3 = rtb_VeAATI_T_SCP_DCPstvTemp_Dial;

    /* End of Outputs for SubSystem: '<S882>/If_DCPstvTmpSnsr' */
#else

    /* Outputs for Atomic SubSystem: '<S882>/ElseDCPstvTmpSnsr' */
    /* VariantMerge generated from: '<S882>/b_SCP_DCPstv_EnblRat' incorporates:
     *  Constant: '<S945>/FALSE Constant'
     */
    VeAATD_b_SCPDCPstv_EnblRatnlty = false;

    /* VariantMerge generated from: '<S882>/b_SCP_DCPstv_Enbl_SnsrRatAlgo' incorporates:
     *  Constant: '<S945>/FALSE Constant1'
     */
    rtb_RelationalOperator1_pel = false;

    /* VariantMerge generated from: '<S882>/b_SCP_DCPstv_FA_Cnfrm' incorporates:
     *  Constant: '<S945>/FALSE Constant2'
     */
    rtb_AND_jx = false;

    /* End of Outputs for SubSystem: '<S882>/ElseDCPstvTmpSnsr' */
#endif

    /* End of Outputs for SubSystem: '<S830>/DCPstvTmpSnsr' */

    /* Logic: '<S832>/Logical Operator3' incorporates:
     *  Logic: '<S832>/Logical Operator5'
     */
#if Rte_SysCon_Variant_AATR_2 || Rte_SysCon_Variant_AATR_21 || Rte_SysCon_Variant_AATR_4 || Rte_SysCon_Variant_AATR_6

    /* Logic: '<S832>/Logical Operator5' incorporates:
     *  Constant: '<S1067>/Calib'
     */
    VeAATD_b_IntakeorSCPDCPstvFaulty = ((VeAATD_b_IntakeorSCPDCPstvFaulty4mRat) ||
        (rtb_AND_jx && (KeAATR_b_SCP_DCPstv_FA_FltCndsEnbl)));

#endif

    /* End of Logic: '<S832>/Logical Operator3' */

    /* Switch: '<S824>/Switch9' */
#if Rte_SysCon_Variant_AATR_4

    /* Switch: '<S824>/Switch9' incorporates:
     *  Constant: '<S868>/Calib'
     */
    VeAATD_b_SCPDCPstvFaulty_AftrSnsrChk = ((KeAATR_b_SCP_DCTmpSnsrs_Present) &&
        (VeAATD_b_IntakeorSCPDCPstvFaulty));

#endif

    /* End of Switch: '<S824>/Switch9' */

    /* SignalConversion generated from: '<S20>/EngineSpeed' */
#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/EngineSpeed' */
    rtb_VeAATI_n_EngineSpeed_Dial = VeAATI_n_EngineSpeed_Dial;

#endif

    /* End of SignalConversion generated from: '<S20>/EngineSpeed' */

    /* SignalConversion generated from: '<S20>/EngineSpeed' */
#if !Rte_SysCon_Variant_AATR_19 || !Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/EngineSpeed' */
    rtb_VeAATI_n_EngineSpeed_Dial = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S20>/EngineSpeed' */

    /* RelationalOperator: '<S870>/Relational Operator1' incorporates:
     *  Constant: '<S872>/Calib'
     *  Delay: '<S877>/Delay'
     *  RelationalOperator: '<S877>/Relational Operator3'
     *  Sum: '<S877>/Add'
     */
#if Rte_SysCon_Variant_AATR_19

    /* RelationalOperator: '<S870>/Relational Operator1' incorporates:
     *  Constant: '<S875>/Calib'
     */
    rtb_RelationalOperator1_ne = (rtb_VeAATI_n_EngineSpeed_Dial >=
        KeAATR_n_EngineRPMIntakeTempValid);
    if (KeAATR_Cnt_SamplEngineRPMIncrease4IntakeValid <= 0)
    {
        /* Delay: '<S877>/Delay' */
        rtb_TmpSignalConversionAtAmbAirTemp_Save = rtb_VeAATI_n_EngineSpeed_Dial;
    }
    else
    {
        if (KeAATR_Cnt_SamplEngineRPMIncrease4IntakeValid > 20)
        {
            rtb_Switch1_on = 20;
        }
        else
        {
            rtb_Switch1_on = KeAATR_Cnt_SamplEngineRPMIncrease4IntakeValid;
        }

        if (rtb_Switch1_on <= AATR_ac_DW.CircBufIdx)
        {
            rtb_Switch1_on = (sint16)(AATR_ac_DW.CircBufIdx - rtb_Switch1_on);
        }
        else
        {
            rtb_Switch1_on = (sint16)(((sint16)(AATR_ac_DW.CircBufIdx -
                rtb_Switch1_on)) + 20);
        }

        /* Delay: '<S877>/Delay' */
        rtb_TmpSignalConversionAtAmbAirTemp_Save =
            AATR_ac_DW.Delay_DSTATE[rtb_Switch1_on];
    }

    /* RelationalOperator: '<S877>/Relational Operator3' incorporates:
     *  Constant: '<S872>/Calib'
     *  Constant: '<S876>/Calib'
     */
    VeAATD_b_EngineAccIntakeFlowGood = ((rtb_VeAATI_n_EngineSpeed_Dial -
        rtb_TmpSignalConversionAtAmbAirTemp_Save) >
        KeAATR_n_RateEngineRPMIncrease4IntakeValid);

#endif

    /* End of RelationalOperator: '<S870>/Relational Operator1' */

    /* SignalConversion generated from: '<S20>/EngineSpeedSts' */
#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/EngineSpeedSts' incorporates:
     *  Switch: '<S21>/Switch17'
     */
    rtb_VeAATI_e_EngineSpeedStatus_Dial = VeAATI_e_EngineSpeedStatus_Dial;

#endif

    /* End of SignalConversion generated from: '<S20>/EngineSpeedSts' */

    /* SignalConversion generated from: '<S20>/EngineSpeedSts' */
#if !Rte_SysCon_Variant_AATR_19 || !Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/EngineSpeedSts' */
    rtb_VeAATI_e_EngineSpeedStatus_Dial = CeESPR_e_EngSpdNormal;

#endif

    /* End of SignalConversion generated from: '<S20>/EngineSpeedSts' */

    /* RelationalOperator: '<S870>/Relational Operator2' */
#if Rte_SysCon_Variant_AATR_19

    /* RelationalOperator: '<S870>/Relational Operator2' incorporates:
     *  Constant: '<S871>/Constant'
     *  VariantMerge generated from: '<S20>/EngineSpeedSts'
     */
    rtb_RelationalOperator2_cb = (((uint32)rtb_VeAATI_e_EngineSpeedStatus_Dial) ==
        CeESPR_e_EngSpdNormal);

#endif

    /* End of RelationalOperator: '<S870>/Relational Operator2' */

    /* SignalConversion generated from: '<S20>/RunCrankActv' */
#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/RunCrankActv' */
    rtb_VeAATI_b_RunCrankActive_Dial = VeAATI_b_RunCrankActive_Dial;

#endif

    /* End of SignalConversion generated from: '<S20>/RunCrankActv' */

    /* SignalConversion generated from: '<S20>/RunCrankActv' */
#if !Rte_SysCon_Variant_AATR_19 || !Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/RunCrankActv' */
    rtb_VeAATI_b_RunCrankActive_Dial = false;

#endif

    /* End of SignalConversion generated from: '<S20>/RunCrankActv' */

    /* Logic: '<S870>/Logical Operator1' */
#if Rte_SysCon_Variant_AATR_19

    /* Logic: '<S870>/Logical Operator1' */
    VeAATD_b_IntakeFlowGood_B4Ovrrd = (((rtb_RelationalOperator1_ne &&
        (VeAATD_b_EngineAccIntakeFlowGood)) && rtb_RelationalOperator2_cb) &&
        rtb_VeAATI_b_RunCrankActive_Dial);

#endif

    /* End of Logic: '<S870>/Logical Operator1' */

    /* SignalConversion generated from: '<S20>/InitHeatSoak_WupCrnk' */
#if Rte_SysCon_Variant_AATR_19 && Rte_SysCon_Variant_AATR_8

    /* UnitDelay: '<S1009>/Unit Delay' */
    rtb_SCP_DCNegtvTempFA = VeAATR_b_InitHeatSoak_VehSoaked;

#endif

    /* End of SignalConversion generated from: '<S20>/InitHeatSoak_WupCrnk' */

    /* SignalConversion generated from: '<S20>/InitHeatSoak_WupCrnk' */
#if !Rte_SysCon_Variant_AATR_19 || !Rte_SysCon_Variant_AATR_8

    /* UnitDelay: '<S1009>/Unit Delay' */
    rtb_SCP_DCNegtvTempFA = false;

#endif

    /* End of SignalConversion generated from: '<S20>/InitHeatSoak_WupCrnk' */

    /* Outputs for Atomic SubSystem: '<S830>/IntakeTmpSnsrEn' */
    /* Logic: '<S870>/Logical Operator3' incorporates:
     *  Logic: '<S870>/Logical Operator2'
     *  SignalConversion generated from: '<S825>/Variant Source4'
     *  Switch: '<S870>/Switch1'
     */
#if Rte_SysCon_Variant_AATR_19

    /* Outputs for Atomic SubSystem: '<S884>/If_IntakeTmpSnsrEn' */
    /* VariantMerge generated from: '<S825>/Variant Source4' incorporates:
     *  Constant: '<S873>/Calib'
     *  Constant: '<S874>/Calib'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varian_k =
        ((KeAATR_b_OvrrdIntkFlowGood) ||
         (((KeAATR_b_EnblIntakeFlowOvrrd4InitSoak) && rtb_SCP_DCNegtvTempFA) ||
          (VeAATD_b_IntakeFlowGood_B4Ovrrd)));

    /* SignalConversion generated from: '<S825>/Variant Source4' */
    VeAATD_b_IntakeFlowGood = AATR_ac_B.VariantMerge_For_Variant_Source_Varian_k;

    /* VariantMerge generated from: '<S884>/b_Intake_Enbl_SnsrRatAlgo' incorporates:
     *  Constant: '<S971>/Constant1'
     *  Constant: '<S971>/Constant2'
     *  Constant: '<S972>/Constant1'
     *  Constant: '<S972>/Constant2'
     *  Constant: '<S973>/Constant1'
     *  Constant: '<S973>/Constant2'
     *  Constant: '<S974>/Constant1'
     *  Constant: '<S974>/Constant2'
     *  Constant: '<S975>/Calib'
     *  Constant: '<S976>/Calib'
     *  Constant: '<S977>/Calib'
     *  Constant: '<S978>/Calib'
     *  Constant: '<S979>/Calib'
     *  Constant: '<S980>/Calib'
     *  Constant: '<S981>/Calib'
     *  DataStoreRead: '<S971>/StatusByte_CommBusOff'
     *  DataStoreRead: '<S972>/StatusByte_LostCommECM_PCM_A'
     *  DataStoreRead: '<S973>/StatusByte_HiSpdFD_CAN3CommBus'
     *  DataStoreRead: '<S974>/StatusByte_HiSpdFD_CAN3CommBusPerf'
     *  Logic: '<S970>/Logical Operator10'
     *  Logic: '<S970>/Logical Operator11'
     *  Logic: '<S970>/Logical Operator12'
     *  Logic: '<S970>/Logical Operator13'
     *  Logic: '<S970>/Logical Operator14'
     *  Logic: '<S970>/Logical Operator24'
     *  Logic: '<S970>/Logical Operator41'
     *  Logic: '<S970>/Logical Operator42'
     *  Logic: '<S970>/Logical Operator5'
     *  Logic: '<S970>/Logical Operator6'
     *  Logic: '<S970>/Logical Operator7'
     *  Logic: '<S970>/Logical Operator8'
     *  Logic: '<S970>/Logical Operator9'
     *  Logic: '<S971>/Logical Operator'
     *  Logic: '<S972>/Logical Operator'
     *  Logic: '<S973>/Logical Operator'
     *  Logic: '<S974>/Logical Operator'
     *  RelationalOperator: '<S971>/Relational Operator1'
     *  RelationalOperator: '<S971>/Relational Operator2'
     *  RelationalOperator: '<S972>/Relational Operator1'
     *  RelationalOperator: '<S972>/Relational Operator2'
     *  RelationalOperator: '<S973>/Relational Operator1'
     *  RelationalOperator: '<S973>/Relational Operator2'
     *  RelationalOperator: '<S974>/Relational Operator1'
     *  RelationalOperator: '<S974>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S971>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S971>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S972>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S972>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S973>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S973>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S974>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S974>/Bitwise Operator2'
     */
    AATR_ac_DW.UnitDelay2_DSTATE_m =
        ((((((rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal &&
              ((VeAATR_b_SensorsVentilated_AftrInit) ||
               (KeAATR_b_Ovrrd_HeatSoak4Rat_ECMIntk))) &&
             (rtb_RelationalOperator_hv || (KeAATR_b_Ovrrd_PlugInCalLvl_ECMIntk)))
            && (VeAATD_b_IntakeFlowGood)) && (KeAATR_b_IntakeTempSnsr_Present)) &&
          (((((((((sint32)AATR_ac_DW.StatusByte_LostCommECM_PCM_A) & 1) <= 0) ||
               ((((uint32)AATR_ac_DW.StatusByte_LostCommECM_PCM_A) & 64U) != 0U))
              || (!KeAATR_b_IntakeTempSnsr_LostCommECM_PCM_A_Enbl)) &&
             ((((((sint32)AATR_ac_DW.StatusByte_CommBusOff) & 1) <= 0) ||
               ((((uint32)AATR_ac_DW.StatusByte_CommBusOff) & 64U) != 0U)) ||
              (!KeAATR_b_IntakeTempSnsr_CommBusOff_Enbl))) && ((((((sint32)
                 AATR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus) & 1) <= 0) ||
              ((((uint32)AATR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus) & 64U) != 0U))
             || (!KeAATR_b_IntakeTempSnsr_CAN3CommBusOff_Enbl))) && ((((((sint32)
                AATR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf) & 1) <= 0) ||
             ((((uint32)AATR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf) & 64U) !=
              0U)) || (!KeAATR_b_IntakeTempSnsr_CAN3CommBusOffPerf_Enbl)))) &&
         rtb_VeAATI_b_RunCrankActive_Dial);

    /* End of Outputs for SubSystem: '<S884>/If_IntakeTmpSnsrEn' */
#else

    /* Outputs for Atomic SubSystem: '<S884>/ElsIntakeTmpSnsrEn' */
    /* VariantMerge generated from: '<S884>/b_Intake_Enbl_SnsrRatAlgo' incorporates:
     *  Constant: '<S969>/FALSE Constant1'
     */
    AATR_ac_DW.UnitDelay2_DSTATE_m = false;

    /* End of Outputs for SubSystem: '<S884>/ElsIntakeTmpSnsrEn' */
#endif

    /* End of Logic: '<S870>/Logical Operator3' */
    /* End of Outputs for SubSystem: '<S830>/IntakeTmpSnsrEn' */

    /* SignalConversion generated from: '<S20>/VePMIR_n_LTPsvPump2RPMAct' */
#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/VePMIR_n_LTPsvPump_RPMAct' incorporates:
     *  Inport: '<Root>/VePMIR_n_LTPsvPump2RPMAct'
     */
    (void)Rte_Read_VePMIR_n_LTPsvPump2RPMAct_Value
        (&rtb_VM_Conditional_Signal_VePMIR_n_LTPsv);

#endif

    /* End of SignalConversion generated from: '<S20>/VePMIR_n_LTPsvPump2RPMAct' */

    /* SignalConversion generated from: '<S20>/VePMIR_n_LTPsvPump2RPMAct' */
#if !Rte_SysCon_Variant_AATR_22 || !Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/VePMIR_n_LTPsvPump_RPMAct' */
    rtb_VM_Conditional_Signal_VePMIR_n_LTPsv = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S20>/VePMIR_n_LTPsvPump2RPMAct' */

    /* RelationalOperator: '<S984>/Relational Operator' incorporates:
     *  DataStoreRead: '<S994>/StatusByte_LIN1_BusOff'
     *  DataStoreRead: '<S995>/StatusByte_MtrElect_CooPumBOvrSpd'
     *  DataStoreRead: '<S996>/StatusByte_MtrElect_CoolPumBCtrlPerf'
     *  Logic: '<S984>/Logical'
     *  Logic: '<S984>/Logical Operator'
     *  Logic: '<S984>/Logical Operator1'
     *  Logic: '<S984>/Logical Operator2'
     *  Logic: '<S984>/Logical1'
     *  Logic: '<S984>/Logical2'
     *  Logic: '<S984>/Logical3'
     *  Logic: '<S984>/Logical4'
     *  Logic: '<S984>/Logical5'
     *  Logic: '<S994>/Logical Operator'
     *  Logic: '<S995>/Logical Operator'
     *  Logic: '<S996>/Logical Operator'
     *  RelationalOperator: '<S994>/Relational Operator1'
     *  RelationalOperator: '<S994>/Relational Operator2'
     *  RelationalOperator: '<S995>/Relational Operator1'
     *  RelationalOperator: '<S995>/Relational Operator2'
     *  RelationalOperator: '<S996>/Relational Operator1'
     *  RelationalOperator: '<S996>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S994>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S994>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S995>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S995>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S996>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S996>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_AATR_22

    /* Outputs for Atomic SubSystem: '<S984>/Turn On Delay Time' */
    /* RelationalOperator: '<S984>/Relational Operator' incorporates:
     *  Constant: '<S991>/Calib'
     */
    rtb_RelationalOperator_gb = (rtb_VM_Conditional_Signal_VePMIR_n_LTPsv <=
        KeAATR_n_LTPP2_Max_RPM);

    /* Outputs for Atomic SubSystem: '<S993>/EdgeRising' */
    /* Logic: '<S997>/AND' incorporates:
     *  Logic: '<S997>/OR1'
     *  UnitDelay: '<S997>/Unit Delay'
     */
    rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal = (rtb_RelationalOperator_gb &&
        (!AATR_ac_DW.UnitDelay_DSTATE_fi));

    /* Update for UnitDelay: '<S997>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_fi = rtb_RelationalOperator_gb;

    /* End of Outputs for SubSystem: '<S993>/EdgeRising' */

    /* Switch: '<S993>/Switch1' incorporates:
     *  Constant: '<S374>/Calib'
     *  Constant: '<S992>/Calib'
     *  Constant: '<S993>/Constant Value1'
     *  Logic: '<S993>/OR'
     *  Logic: '<S993>/OR1'
     *  MinMax: '<S993>/Minimum'
     *  Sum: '<S993>/Summation'
     *  UnitDelay: '<S993>/Unit Delay'
     */
    if ((!rtb_RelationalOperator_gb) || rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal)
    {
        AATR_ac_DW.UnitDelay_DSTATE_e = 0.0F;
    }
    else
    {
        AATR_ac_DW.UnitDelay_DSTATE_e = fminf(KeAATR_t_LTPP2_OffTime,
            HeAATR_t_MedTEH + AATR_ac_DW.UnitDelay_DSTATE_e);
    }

    /* End of Switch: '<S993>/Switch1' */

    /* Logic: '<S984>/Logical' incorporates:
     *  Constant: '<S986>/Calib'
     *  Constant: '<S987>/Calib'
     *  Constant: '<S988>/Calib'
     *  Constant: '<S989>/Calib'
     *  Constant: '<S990>/Calib'
     *  Constant: '<S992>/Calib'
     *  Constant: '<S994>/Constant1'
     *  Constant: '<S994>/Constant2'
     *  Constant: '<S995>/Constant1'
     *  Constant: '<S995>/Constant2'
     *  Constant: '<S996>/Constant1'
     *  Constant: '<S996>/Constant2'
     *  Logic: '<S993>/AND'
     *  RelationalOperator: '<S993>/Greater  Than'
     *  UnitDelay: '<S993>/Unit Delay'
     */
    rtb_RelationalOperator_gb = (((((rtb_RelationalOperator_gb ||
        (KeAATR_b_LTPP2_RPM_Ovrd)) && ((rtb_RelationalOperator_gb &&
        (AATR_ac_DW.UnitDelay_DSTATE_e >= KeAATR_t_LTPP2_OffTime)) ||
        (KeAATR_b_LTPP2_OffTime_Ovrd))) && ((((((sint32)
        AATR_ac_DW.StatusByte_MtrElect_CoolPumBCtrlPerf) & 1) <= 0) ||
        ((((uint32)AATR_ac_DW.StatusByte_MtrElect_CoolPumBCtrlPerf) & 64U) != 0U))
        || (KeAATR_b_LTPP2_Perf_Ovrd))) && ((((((sint32)
        AATR_ac_DW.StatusByte_MtrElect_CooPumBOvrSpd) & 1) <= 0) || ((((uint32)
        AATR_ac_DW.StatusByte_MtrElect_CooPumBOvrSpd) & 64U) != 0U)) ||
        (KeAATR_b_LTPP2_OvrSpd_Ovrd))) && ((((((sint32)
        AATR_ac_DW.StatusByte_LIN1_BusOff) & 1) <= 0) || ((((uint32)
        AATR_ac_DW.StatusByte_LIN1_BusOff) & 64U) != 0U)) ||
        (KeAATR_b_LTPP2_CommCheck_Ovrd)));

    /* End of Outputs for SubSystem: '<S984>/Turn On Delay Time' */
#endif

    /* End of RelationalOperator: '<S984>/Relational Operator' */

    /* SignalConversion generated from: '<S20>/VePMIR_n_LTPsvPump_RPMAct' */
#if Rte_SysCon_Variant_AATR_22 && Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/VePMIR_n_LTPsvPump_RPMAct' incorporates:
     *  Inport: '<Root>/VePMIR_n_LTPsvPump_RPMAct'
     */
    (void)Rte_Read_VePMIR_n_LTPsvPump_RPMAct_Value
        (&rtb_VM_Conditional_Signal_VePMIR_n_LTPsv);

#endif

    /* End of SignalConversion generated from: '<S20>/VePMIR_n_LTPsvPump_RPMAct' */

    /* SignalConversion generated from: '<S20>/VePMIR_n_LTPsvPump_RPMAct' */
#if !Rte_SysCon_Variant_AATR_22 || !Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S20>/VePMIR_n_LTPsvPump_RPMAct' */
    rtb_VM_Conditional_Signal_VePMIR_n_LTPsv = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S20>/VePMIR_n_LTPsvPump_RPMAct' */

    /* Outputs for Atomic SubSystem: '<S830>/PPCTIS_PECTOS_Enbl' */
    /* RelationalOperator: '<S985>/Relational Operator' incorporates:
     *  DataStoreRead: '<S1006>/StatusByte_LIN2_BusOff'
     *  DataStoreRead: '<S1007>/StatusByte_MtrElect_CoolPumAOvrSpd'
     *  DataStoreRead: '<S1008>/StatusByte_PwrElecPmpPerf'
     *  Logic: '<S1006>/Logical Operator'
     *  Logic: '<S1007>/Logical Operator'
     *  Logic: '<S1008>/Logical Operator'
     *  Logic: '<S885>/Logical Operator'
     *  Logic: '<S885>/Logical Operator1'
     *  Logic: '<S885>/Logical Operator2'
     *  Logic: '<S985>/Logical'
     *  Logic: '<S985>/Logical Operator'
     *  Logic: '<S985>/Logical Operator1'
     *  Logic: '<S985>/Logical Operator2'
     *  Logic: '<S985>/Logical1'
     *  Logic: '<S985>/Logical2'
     *  Logic: '<S985>/Logical3'
     *  Logic: '<S985>/Logical4'
     *  Logic: '<S985>/Logical5'
     *  RelationalOperator: '<S1006>/Relational Operator1'
     *  RelationalOperator: '<S1006>/Relational Operator2'
     *  RelationalOperator: '<S1007>/Relational Operator1'
     *  RelationalOperator: '<S1007>/Relational Operator2'
     *  RelationalOperator: '<S1008>/Relational Operator1'
     *  RelationalOperator: '<S1008>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1006>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1006>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1007>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1007>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1008>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1008>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_AATR_22

    /* Outputs for Atomic SubSystem: '<S886>/If_PPCTIS_PECTOS_Enbl' */
    /* Outputs for Atomic SubSystem: '<S985>/Turn On Delay Time' */
    /* RelationalOperator: '<S985>/Relational Operator' incorporates:
     *  Constant: '<S1003>/Calib'
     */
    rtb_RelationalOperator_jb = (rtb_VM_Conditional_Signal_VePMIR_n_LTPsv <=
        KeAATR_n_LTPP_Max_RPM);

    /* Outputs for Atomic SubSystem: '<S1005>/EdgeRising' */
    /* Logic: '<S1009>/AND' incorporates:
     *  Logic: '<S1009>/OR1'
     *  UnitDelay: '<S1009>/Unit Delay'
     */
    rtb_AND_fy = (rtb_RelationalOperator_jb && (!AATR_ac_DW.UnitDelay_DSTATE_br));

    /* Update for UnitDelay: '<S1009>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_br = rtb_RelationalOperator_jb;

    /* End of Outputs for SubSystem: '<S1005>/EdgeRising' */

    /* Switch: '<S1005>/Switch1' incorporates:
     *  Constant: '<S1004>/Calib'
     *  Constant: '<S1005>/Constant Value1'
     *  Constant: '<S374>/Calib'
     *  Logic: '<S1005>/OR'
     *  Logic: '<S1005>/OR1'
     *  MinMax: '<S1005>/Minimum'
     *  Sum: '<S1005>/Summation'
     *  UnitDelay: '<S1005>/Unit Delay'
     */
    if ((!rtb_RelationalOperator_jb) || rtb_AND_fy)
    {
        AATR_ac_DW.UnitDelay_DSTATE_d2 = 0.0F;
    }
    else
    {
        AATR_ac_DW.UnitDelay_DSTATE_d2 = fminf(KeAATR_t_LTPP_OffTime,
            HeAATR_t_MedTEH + AATR_ac_DW.UnitDelay_DSTATE_d2);
    }

    /* End of Switch: '<S1005>/Switch1' */

    /* Logic: '<S885>/Logical Operator' incorporates:
     *  Constant: '<S1000>/Calib'
     *  Constant: '<S1001>/Calib'
     *  Constant: '<S1002>/Calib'
     *  Constant: '<S1004>/Calib'
     *  Constant: '<S1006>/Constant1'
     *  Constant: '<S1006>/Constant2'
     *  Constant: '<S1007>/Constant1'
     *  Constant: '<S1007>/Constant2'
     *  Constant: '<S1008>/Constant1'
     *  Constant: '<S1008>/Constant2'
     *  Constant: '<S982>/Calib'
     *  Constant: '<S983>/Calib'
     *  Constant: '<S998>/Calib'
     *  Constant: '<S999>/Calib'
     *  Logic: '<S1005>/AND'
     *  RelationalOperator: '<S1005>/Greater  Than'
     *  UnitDelay: '<S1005>/Unit Delay'
     */
    rtb_AND_fy = (((((((rtb_RelationalOperator_jb || (KeAATR_b_LTPP_RPM_Ovrd)) &&
                       ((rtb_RelationalOperator_jb &&
                         (AATR_ac_DW.UnitDelay_DSTATE_d2 >=
                          KeAATR_t_LTPP_OffTime)) || (KeAATR_b_LTPP2_Check_Ovrd)))
                      && ((((((sint32)AATR_ac_DW.StatusByte_PwrElecPmpPerf) & 1)
                            <= 0) || ((((uint32)
                           AATR_ac_DW.StatusByte_PwrElecPmpPerf) & 64U) != 0U)) ||
                          (KeAATR_b_LTPP_Perf_Ovrd))) && ((((((sint32)
                          AATR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd) & 1) <=
                        0) || ((((uint32)
                          AATR_ac_DW.StatusByte_MtrElect_CoolPumAOvrSpd) & 64U)
                        != 0U)) || (KeAATR_b_LTPP_OvrSpd_Ovrd))) && ((((((sint32)
                         AATR_ac_DW.StatusByte_LIN2_BusOff) & 1) <= 0) ||
                      ((((uint32)AATR_ac_DW.StatusByte_LIN2_BusOff) & 64U) != 0U))
                     || (KeAATR_b_LTPP_CommCheck_Ovrd))) ||
                   (KeAATR_b_LTPP_Check_Ovrd)) && (rtb_RelationalOperator_gb ||
                   (KeAATR_b_LTPP2_Check_Ovrd)));

    /* VariantMerge generated from: '<S886>/b_PPCTIS_Enbl_SnsrRatAlgo' incorporates:
     *  Constant: '<S1015>/Constant1'
     *  Constant: '<S1015>/Constant2'
     *  Constant: '<S1016>/Constant1'
     *  Constant: '<S1016>/Constant2'
     *  Constant: '<S1017>/Constant1'
     *  Constant: '<S1017>/Constant2'
     *  DataStoreRead: '<S1015>/StatusByte_MtrElect_CT_SnsrCktHi'
     *  DataStoreRead: '<S1016>/StatusByte_MtrElect_CT_SnsrCktLo'
     *  DataStoreRead: '<S1017>/StatusByte_MtrElect_CT_SnsrPerf'
     *  Logic: '<S1011>/Logical Operator'
     *  Logic: '<S1011>/Logical Operator1'
     *  Logic: '<S1011>/Logical Operator2'
     *  Logic: '<S1011>/Logical Operator3'
     *  Logic: '<S1015>/Logical Operator'
     *  Logic: '<S1016>/Logical Operator'
     *  Logic: '<S1017>/Logical Operator'
     *  RelationalOperator: '<S1015>/Relational Operator1'
     *  RelationalOperator: '<S1015>/Relational Operator2'
     *  RelationalOperator: '<S1016>/Relational Operator1'
     *  RelationalOperator: '<S1016>/Relational Operator2'
     *  RelationalOperator: '<S1017>/Relational Operator1'
     *  RelationalOperator: '<S1017>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1015>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1015>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1016>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1016>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1017>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1017>/Bitwise Operator2'
     */
    rtb_RelationalOperator_jb = (((rtb_AND_fy && (((((sint32)
        AATR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 1) <= 0) || ((((uint32)
        AATR_ac_DW.StatusByte_MtrElect_CT_SnsrPerf) & 64U) != 0U))) &&
        (((((sint32)AATR_ac_DW.StatusByte_MtrElect_CT_SnsrCktLo) & 1) <= 0) ||
         ((((uint32)AATR_ac_DW.StatusByte_MtrElect_CT_SnsrCktLo) & 64U) != 0U)))
        && (((((sint32)AATR_ac_DW.StatusByte_MtrElect_CT_SnsrCktHi) & 1) <= 0) ||
            ((((uint32)AATR_ac_DW.StatusByte_MtrElect_CT_SnsrCktHi) & 64U) != 0U)));

    /* VariantMerge generated from: '<S886>/b_PECTOS_Enbl_SnsrRatAlgo' incorporates:
     *  Constant: '<S1012>/Constant1'
     *  Constant: '<S1012>/Constant2'
     *  Constant: '<S1013>/Constant1'
     *  Constant: '<S1013>/Constant2'
     *  Constant: '<S1014>/Constant1'
     *  Constant: '<S1014>/Constant2'
     *  DataStoreRead: '<S1012>/StatusByte_CT_SnsrCktHi'
     *  DataStoreRead: '<S1013>/StatusByte_CT_SnsrCktLo'
     *  DataStoreRead: '<S1014>/StatusByte_CT_SnsrPerf'
     *  Logic: '<S1011>/Logical Operator4'
     *  Logic: '<S1011>/Logical Operator5'
     *  Logic: '<S1011>/Logical Operator6'
     *  Logic: '<S1011>/Logical Operator7'
     *  Logic: '<S1012>/Logical Operator'
     *  Logic: '<S1013>/Logical Operator'
     *  Logic: '<S1014>/Logical Operator'
     *  RelationalOperator: '<S1012>/Relational Operator1'
     *  RelationalOperator: '<S1012>/Relational Operator2'
     *  RelationalOperator: '<S1013>/Relational Operator1'
     *  RelationalOperator: '<S1013>/Relational Operator2'
     *  RelationalOperator: '<S1014>/Relational Operator1'
     *  RelationalOperator: '<S1014>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S1012>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1012>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1013>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1013>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S1014>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S1014>/Bitwise Operator2'
     */
    rtb_AND_fy = (((rtb_AND_fy && (((((sint32)AATR_ac_DW.StatusByte_CT_SnsrPerf)
                       & 1) <= 0) || ((((uint32)
                        AATR_ac_DW.StatusByte_CT_SnsrPerf) & 64U) != 0U))) &&
                   (((((sint32)AATR_ac_DW.StatusByte_CT_SnsrCktLo) & 1) <= 0) ||
                    ((((uint32)AATR_ac_DW.StatusByte_CT_SnsrCktLo) & 64U) != 0U)))
                  && (((((sint32)AATR_ac_DW.StatusByte_CT_SnsrCktHi) & 1) <= 0) ||
                      ((((uint32)AATR_ac_DW.StatusByte_CT_SnsrCktHi) & 64U) !=
                       0U)));

    /* End of Outputs for SubSystem: '<S985>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S886>/If_PPCTIS_PECTOS_Enbl' */
#else

    /* Outputs for Atomic SubSystem: '<S886>/Else_PPCTIS_PECTOS_Enbl' */
    /* VariantMerge generated from: '<S886>/b_PPCTIS_Enbl_SnsrRatAlgo' incorporates:
     *  Constant: '<S1010>/FALSE Constant1'
     */
    rtb_RelationalOperator_jb = false;

    /* VariantMerge generated from: '<S886>/b_PECTOS_Enbl_SnsrRatAlgo' incorporates:
     *  Constant: '<S1010>/FALSE Constant2'
     */
    rtb_AND_fy = false;

    /* End of Outputs for SubSystem: '<S886>/Else_PPCTIS_PECTOS_Enbl' */
#endif

    /* End of RelationalOperator: '<S985>/Relational Operator' */
    /* End of Outputs for SubSystem: '<S830>/PPCTIS_PECTOS_Enbl' */

    /* Outputs for Atomic SubSystem: '<S377>/CBC_Sensor_PerformanceDiagnostics' */
#if Rte_SysCon_Variant_AATR_21

    /* Outputs for Atomic SubSystem: '<S819>/If_CBC_Sensor_PerformanceDiagnostics' */
    /* RelationalOperator: '<S1097>/Relational Operator3' incorporates:
     *  Constant: '<S1097>/Constant3'
     *  DataStoreRead: '<S1098>/StatusByte_AAT_SnsrPerf'
     *  S-Function (sfix_bitop): '<S1097>/Bitwise Operator2'
     */
    rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal = ((((uint32)
        AATR_ac_DW.StatusByte_AAT_SnsrPerf) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S1097>/EdgeFalling1' */
    /* Logic: '<S1097>/Logical Operator' incorporates:
     *  Logic: '<S1100>/OR1'
     */
    rtb_RelationalOperator_hv = !rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal;

    /* End of Outputs for SubSystem: '<S1097>/EdgeFalling1' */

    /* Logic: '<S1097>/Logical1' incorporates:
     *  Constant: '<S1095>/Calib'
     *  Constant: '<S1096>/Calib'
     *  Constant: '<S1097>/Constant1'
     *  DataStoreRead: '<S1098>/StatusByte_AAT_SnsrPerf'
     *  Logic: '<S1091>/Logical Operator'
     *  Logic: '<S1097>/Logical Operator'
     *  Logic: '<S1097>/Logical10'
     *  Logic: '<S1097>/Logical12'
     *  RelationalOperator: '<S1097>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S1097>/Bitwise Operator3'
     */
    rtb_RelationalOperator_gb = (((KeAATR_b_EnblCBC_AmbAirTemp_PerfFlt) &&
        (VeAATD_b_CBC_EnblRatnlty)) && ((!KeAATR_b_AAT_SnsrPerf_LtchEnbl) ||
        (((((uint32)AATR_ac_DW.StatusByte_AAT_SnsrPerf) & 1U) == 0U) ||
         rtb_RelationalOperator_hv)));

    /* Outputs for Atomic SubSystem: '<S1097>/EdgeFalling1' */
    /* Logic: '<S1100>/AND' incorporates:
     *  UnitDelay: '<S1100>/Unit Delay'
     */
    rtb_RelationalOperator_hv = (rtb_RelationalOperator_hv &&
        (AATR_ac_DW.UnitDelay_DSTATE_pr));

    /* Update for UnitDelay: '<S1100>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_pr = rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal;

    /* End of Outputs for SubSystem: '<S1097>/EdgeFalling1' */

    /* Logic: '<S1097>/Logical5' */
    rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal =
        ((VeAATD_b_DsblDiagFailSafeOrCdeClr) || rtb_RelationalOperator_hv);

    /* Outputs for Atomic SubSystem: '<S1099>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S1099>/Counter Reset  Enabled ' */
    /* Switch: '<S1106>/Switch1' incorporates:
     *  Logic: '<S1099>/Fail Counter Reset'
     *  Logic: '<S1099>/NOT6'
     *  Switch: '<S1106>/Switch2'
     *  Switch: '<S1107>/Switch1'
     *  UnitDelay: '<S1099>/Unit Delay'
     *  UnitDelay: '<S1099>/Unit Delay1'
     */
    if ((rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal ||
            (AATR_ac_DW.UnitDelay_DSTATE_db)) ||
            (AATR_ac_DW.UnitDelay1_DSTATE_ka))
    {
        /* Switch: '<S1106>/Switch1' incorporates:
         *  Constant: '<S1106>/Constant Value2'
         */
        VeAATD_Cnt_CBCAmbAirTemp_PerfFailCnt = 0U;

        /* Switch: '<S1107>/Switch1' incorporates:
         *  Constant: '<S1107>/Constant Value2'
         */
        VeAATD_Cnt_CBCAmbAirTemp_PerfSmpCnt = 0U;
    }
    else
    {
        if (rtb_RelationalOperator_gb && (VeAATD_b_CBCFaulty_AftrSnsrChk))
        {
            /* Switch: '<S1106>/Switch1' incorporates:
             *  Constant: '<S1106>/Constant Value1'
             *  Sum: '<S1106>/Subtraction'
             *  Switch: '<S1106>/Switch2'
             *  UnitDelay: '<S1106>/Unit Delay'
             */
            VeAATD_Cnt_CBCAmbAirTemp_PerfFailCnt = (uint16)(((uint32)
                VeAATD_Cnt_CBCAmbAirTemp_PerfFailCnt) + 1U);
        }

        /* Switch: '<S1107>/Switch2' */
        if (rtb_RelationalOperator_gb)
        {
            /* Switch: '<S1107>/Switch1' incorporates:
             *  Constant: '<S1107>/Constant Value1'
             *  Sum: '<S1107>/Subtraction'
             *  Switch: '<S1107>/Switch2'
             *  UnitDelay: '<S1107>/Unit Delay'
             */
            VeAATD_Cnt_CBCAmbAirTemp_PerfSmpCnt = (uint16)(((uint32)
                VeAATD_Cnt_CBCAmbAirTemp_PerfSmpCnt) + 1U);
        }

        /* End of Switch: '<S1107>/Switch2' */
    }

    /* End of Switch: '<S1106>/Switch1' */
    /* End of Outputs for SubSystem: '<S1099>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S1099>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S1099>/Greater Than or Equal ' incorporates:
     *  Constant: '<S1093>/Calib'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_ka = (((sint32)
        VeAATD_Cnt_CBCAmbAirTemp_PerfFailCnt) >= ((sint32)
        KeAATR_Cnt_CBCAmbAirTemp_PerfFail));

    /* Logic: '<S1099>/NOT5' incorporates:
     *  Constant: '<S1094>/Calib'
     *  Logic: '<S1099>/NOT3'
     *  RelationalOperator: '<S1099>/Less Than  or Equal'
     */
    AATR_ac_DW.UnitDelay_DSTATE_db = ((((sint32)
        VeAATD_Cnt_CBCAmbAirTemp_PerfSmpCnt) >= ((sint32)
        KeAATR_Cnt_CBCAmbAirTemp_PerfSmp)) && (!AATR_ac_DW.UnitDelay1_DSTATE_ka));

    /* Switch: '<S1112>/Switch1' incorporates:
     *  Constant: '<S1105>/Constant Value'
     *  DataStoreWrite: '<S1091>/Data Store Write3'
     *  Switch: '<S1111>/Switch1'
     */
    if (VeAATI_b_PostCodeClrDiagDsbl_OvrdVal_Dial)
    {
        AATR_ac_DW.NeAATR_Cnt_AmbAirTemp_PerfFlt_MFOP = 0U;
    }
    else
    {
        if (AATR_ac_DW.UnitDelay_DSTATE_db)
        {
            /* MinMax: '<S1105>/Minimum2' incorporates:
             *  DataStoreRead: '<S1091>/Data Store Read1'
             *  Switch: '<S1111>/Switch1'
             */
            if (VeAATD_Cnt_CBCAmbAirTemp_PerfFailCnt >
                    AATR_ac_DW.NeAATR_Cnt_AmbAirTemp_PerfFlt_MFOP)
            {
                /* DataStoreWrite: '<S1091>/Data Store Write3' incorporates:
                 *  Switch: '<S1111>/Switch1'
                 */
                AATR_ac_DW.NeAATR_Cnt_AmbAirTemp_PerfFlt_MFOP =
                    VeAATD_Cnt_CBCAmbAirTemp_PerfFailCnt;
            }

            /* End of MinMax: '<S1105>/Minimum2' */
        }
    }

    /* End of Switch: '<S1112>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S1097>/Fail' */
    AATR_ac_Fail(AATR_ac_DW.UnitDelay1_DSTATE_ka,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_p);

    /* End of Outputs for SubSystem: '<S1097>/Fail' */

    /* Outputs for Enabled SubSystem: '<S1097>/Init' */
    AATR_ac_Init_a(rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal,
                   &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_p);

    /* End of Outputs for SubSystem: '<S1097>/Init' */

    /* Outputs for Enabled SubSystem: '<S1097>/Pass' */
    AATR_ac_Pass(AATR_ac_DW.UnitDelay_DSTATE_db,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_p);

    /* End of Outputs for SubSystem: '<S1097>/Pass' */

    /* VariantMerge generated from: '<S819>/VeAATD_b_CBCAmbAirTemp_PerfFltDtct' incorporates:
     *  Constant: '<S1101>/Constant'
     *  RelationalOperator: '<S1097>/Relational Operator'
     *  VariantMerge generated from: '<S819>/VeAATR_e_FaultSts_AAT_SnsrPerf'
     */
    VeAATD_b_CBCAmbAirTemp_PerfFltDtct = (((uint32)
        AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_p) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S819>/If_CBC_Sensor_PerformanceDiagnostics' */
#else

    /* Outputs for Atomic SubSystem: '<S819>/Else_CBC_Sensor_PerformanceDiagnostics' */
    /* VariantMerge generated from: '<S819>/VeAATR_e_FaultSts_AAT_SnsrPerf' incorporates:
     *  Constant: '<S1092>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_p = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S819>/VeAATD_b_CBCAmbAirTemp_PerfFltDtct' incorporates:
     *  Constant: '<S1090>/FALSE Constant'
     */
    VeAATD_b_CBCAmbAirTemp_PerfFltDtct = false;

    /* End of Outputs for SubSystem: '<S819>/Else_CBC_Sensor_PerformanceDiagnostics' */
#endif

    /* End of Outputs for SubSystem: '<S377>/CBC_Sensor_PerformanceDiagnostics' */

    /* Outputs for Atomic SubSystem: '<S377>/DCNgtvPerfDiag' */
#if Rte_SysCon_Variant_AATR_2

    /* Outputs for Atomic SubSystem: '<S820>/If_DCNgtvPerfDiag' */
    /* RelationalOperator: '<S1121>/Relational Operator3' incorporates:
     *  Constant: '<S1121>/Constant3'
     *  DataStoreRead: '<S1122>/StatusByte_BattChrgCouTempSnsrCCktPerf'
     *  S-Function (sfix_bitop): '<S1121>/Bitwise Operator2'
     */
    rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal = ((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktPerf) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S1121>/EdgeFalling1' */
    /* Logic: '<S1121>/Logical Operator' incorporates:
     *  Logic: '<S1124>/OR1'
     */
    rtb_RelationalOperator_hv = !rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal;

    /* End of Outputs for SubSystem: '<S1121>/EdgeFalling1' */

    /* Logic: '<S1121>/Logical1' incorporates:
     *  Constant: '<S1119>/Calib'
     *  Constant: '<S1120>/Calib'
     *  Constant: '<S1121>/Constant1'
     *  DataStoreRead: '<S1122>/StatusByte_BattChrgCouTempSnsrCCktPerf'
     *  Logic: '<S1114>/Logical Operator'
     *  Logic: '<S1121>/Logical Operator'
     *  Logic: '<S1121>/Logical10'
     *  Logic: '<S1121>/Logical12'
     *  RelationalOperator: '<S1121>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S1121>/Bitwise Operator3'
     */
    rtb_RelationalOperator_gb = (((KeAATR_b_EnblSCP_DCNegtvTemp_PerfFlt) &&
        (VeAATD_b_SCPDCNegtv_EnblRatnlty)) &&
        ((!KeAATR_b_BattChrgCouTempSnsrCCktPerf_LtchEnbl) || (((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrCCktPerf) & 1U) == 0U) ||
        rtb_RelationalOperator_hv)));

    /* Outputs for Atomic SubSystem: '<S1121>/EdgeFalling1' */
    /* Logic: '<S1124>/AND' incorporates:
     *  UnitDelay: '<S1124>/Unit Delay'
     */
    rtb_RelationalOperator_hv = (rtb_RelationalOperator_hv &&
        (AATR_ac_DW.UnitDelay_DSTATE_lf));

    /* Update for UnitDelay: '<S1124>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_lf = rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal;

    /* End of Outputs for SubSystem: '<S1121>/EdgeFalling1' */

    /* Logic: '<S1121>/Logical5' */
    rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal =
        ((VeAATD_b_DsblDiagFailSafeOrCdeClr) || rtb_RelationalOperator_hv);

    /* Outputs for Atomic SubSystem: '<S1123>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S1123>/Counter Reset  Enabled ' */
    /* Switch: '<S1130>/Switch1' incorporates:
     *  Logic: '<S1123>/Fail Counter Reset'
     *  Logic: '<S1123>/NOT6'
     *  Switch: '<S1130>/Switch2'
     *  Switch: '<S1131>/Switch1'
     *  UnitDelay: '<S1123>/Unit Delay'
     *  UnitDelay: '<S1123>/Unit Delay1'
     */
    if ((rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal ||
            (AATR_ac_DW.UnitDelay_DSTATE_ck)) ||
            (AATR_ac_DW.UnitDelay1_DSTATE_e2))
    {
        /* Switch: '<S1130>/Switch1' incorporates:
         *  Constant: '<S1130>/Constant Value2'
         */
        VeAATD_Cnt_SCP_DCNegtvTemp_PerfFailCnt = 0U;

        /* Switch: '<S1131>/Switch1' incorporates:
         *  Constant: '<S1131>/Constant Value2'
         */
        VeAATD_Cnt_SCP_DCNegtvTemp_PerfSmpCnt = 0U;
    }
    else
    {
        if (rtb_RelationalOperator_gb && (VeAATD_b_SCPDCNgtvFaulty_AftrSnsrChk))
        {
            /* Switch: '<S1130>/Switch1' incorporates:
             *  Constant: '<S1130>/Constant Value1'
             *  Sum: '<S1130>/Subtraction'
             *  Switch: '<S1130>/Switch2'
             *  UnitDelay: '<S1130>/Unit Delay'
             */
            VeAATD_Cnt_SCP_DCNegtvTemp_PerfFailCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_DCNegtvTemp_PerfFailCnt) + 1U);
        }

        /* Switch: '<S1131>/Switch2' */
        if (rtb_RelationalOperator_gb)
        {
            /* Switch: '<S1131>/Switch1' incorporates:
             *  Constant: '<S1131>/Constant Value1'
             *  Sum: '<S1131>/Subtraction'
             *  Switch: '<S1131>/Switch2'
             *  UnitDelay: '<S1131>/Unit Delay'
             */
            VeAATD_Cnt_SCP_DCNegtvTemp_PerfSmpCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_DCNegtvTemp_PerfSmpCnt) + 1U);
        }

        /* End of Switch: '<S1131>/Switch2' */
    }

    /* End of Switch: '<S1130>/Switch1' */
    /* End of Outputs for SubSystem: '<S1123>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S1123>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S1123>/Greater Than or Equal ' incorporates:
     *  Constant: '<S1117>/Calib'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_e2 = (((sint32)
        VeAATD_Cnt_SCP_DCNegtvTemp_PerfFailCnt) >= ((sint32)
        KeAATR_Cnt_SCP_DCNegtvTemp_PerfFail));

    /* Logic: '<S1123>/NOT5' incorporates:
     *  Constant: '<S1118>/Calib'
     *  Logic: '<S1123>/NOT3'
     *  RelationalOperator: '<S1123>/Less Than  or Equal'
     */
    AATR_ac_DW.UnitDelay_DSTATE_ck = ((((sint32)
        VeAATD_Cnt_SCP_DCNegtvTemp_PerfSmpCnt) >= ((sint32)
        KeAATR_Cnt_SCP_DCNegtvTemp_PerfSmp)) &&
        (!AATR_ac_DW.UnitDelay1_DSTATE_e2));

    /* Switch: '<S1136>/Switch1' incorporates:
     *  Constant: '<S1129>/Constant Value'
     *  DataStoreWrite: '<S1114>/Data Store Write3'
     *  Switch: '<S1135>/Switch1'
     */
    if (VeAATI_b_PostCodeClrDiagDsbl_OvrdVal_Dial)
    {
        AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_PerfFlt_MFOP = 0U;
    }
    else
    {
        if (AATR_ac_DW.UnitDelay_DSTATE_ck)
        {
            /* MinMax: '<S1129>/Minimum2' incorporates:
             *  DataStoreRead: '<S1114>/Data Store Read1'
             *  Switch: '<S1135>/Switch1'
             */
            if (VeAATD_Cnt_SCP_DCNegtvTemp_PerfFailCnt >
                    AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_PerfFlt_MFOP)
            {
                /* DataStoreWrite: '<S1114>/Data Store Write3' incorporates:
                 *  Switch: '<S1135>/Switch1'
                 */
                AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_PerfFlt_MFOP =
                    VeAATD_Cnt_SCP_DCNegtvTemp_PerfFailCnt;
            }

            /* End of MinMax: '<S1129>/Minimum2' */
        }
    }

    /* End of Switch: '<S1136>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S1121>/Pass' */
    AATR_ac_Pass(AATR_ac_DW.UnitDelay_DSTATE_ck,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_o);

    /* End of Outputs for SubSystem: '<S1121>/Pass' */

    /* Outputs for Enabled SubSystem: '<S1121>/Fail' */
    AATR_ac_Fail(AATR_ac_DW.UnitDelay1_DSTATE_e2,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_o);

    /* End of Outputs for SubSystem: '<S1121>/Fail' */

    /* Outputs for Enabled SubSystem: '<S1121>/Init' */
    AATR_ac_Init_a(rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal,
                   &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_o);

    /* End of Outputs for SubSystem: '<S1121>/Init' */

    /* VariantMerge generated from: '<S820>/VeAATD_b_SCP_DCNegtvTemp_PerfFltDtct' incorporates:
     *  Constant: '<S1125>/Constant'
     *  Logic: '<S1116>/AND'
     *  RelationalOperator: '<S1121>/Relational Operator'
     *  VariantMerge generated from: '<S820>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktPerf'
     */
    VeAATD_b_SCP_DCNegtvTemp_PerfFltDtct = (((uint32)
        AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_o) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S820>/If_DCNgtvPerfDiag' */
#else

    /* Outputs for Atomic SubSystem: '<S820>/Else_DCNgtvPerfDiag' */
    /* VariantMerge generated from: '<S820>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktPerf' incorporates:
     *  Constant: '<S1115>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_o = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S820>/VeAATD_b_SCP_DCNegtvTemp_PerfFltDtct' incorporates:
     *  Constant: '<S1113>/FALSE Constant'
     */
    VeAATD_b_SCP_DCNegtvTemp_PerfFltDtct = false;

    /* End of Outputs for SubSystem: '<S820>/Else_DCNgtvPerfDiag' */
#endif

    /* End of Outputs for SubSystem: '<S377>/DCNgtvPerfDiag' */

    /* Outputs for Atomic SubSystem: '<S377>/DCPstvPerfDiag' */
#if Rte_SysCon_Variant_AATR_4

    /* Outputs for Atomic SubSystem: '<S821>/If_DCPstvPerfDiag' */
    /* RelationalOperator: '<S1145>/Relational Operator3' incorporates:
     *  Constant: '<S1145>/Constant3'
     *  DataStoreRead: '<S1146>/StatusByte_BattChrgCouTempSnsrBCktPerf'
     *  S-Function (sfix_bitop): '<S1145>/Bitwise Operator2'
     */
    rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal = ((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktPerf) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S1145>/EdgeFalling1' */
    /* Logic: '<S1145>/Logical Operator' incorporates:
     *  Logic: '<S1148>/OR1'
     */
    rtb_RelationalOperator_hv = !rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal;

    /* End of Outputs for SubSystem: '<S1145>/EdgeFalling1' */

    /* Logic: '<S1145>/Logical1' incorporates:
     *  Constant: '<S1143>/Calib'
     *  Constant: '<S1144>/Calib'
     *  Constant: '<S1145>/Constant1'
     *  DataStoreRead: '<S1146>/StatusByte_BattChrgCouTempSnsrBCktPerf'
     *  Logic: '<S1138>/Logical Operator'
     *  Logic: '<S1145>/Logical Operator'
     *  Logic: '<S1145>/Logical10'
     *  Logic: '<S1145>/Logical12'
     *  RelationalOperator: '<S1145>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S1145>/Bitwise Operator3'
     */
    rtb_RelationalOperator_gb = (((KeAATR_b_EnblSCP_DCPstvTemp_PerfFlt) &&
        (VeAATD_b_SCPDCPstv_EnblRatnlty)) &&
        ((!KeAATR_b_BattChrgCouTempSnsrBCktPerf_LtchEnbl) || (((((uint32)
        AATR_ac_DW.StatusByte_BattChrgCouTempSnsrBCktPerf) & 1U) == 0U) ||
        rtb_RelationalOperator_hv)));

    /* Outputs for Atomic SubSystem: '<S1145>/EdgeFalling1' */
    /* Logic: '<S1148>/AND' incorporates:
     *  UnitDelay: '<S1148>/Unit Delay'
     */
    rtb_RelationalOperator_hv = (rtb_RelationalOperator_hv &&
        (AATR_ac_DW.UnitDelay_DSTATE_dg));

    /* Update for UnitDelay: '<S1148>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_dg = rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal;

    /* End of Outputs for SubSystem: '<S1145>/EdgeFalling1' */

    /* Logic: '<S1145>/Logical5' */
    rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal =
        ((VeAATD_b_DsblDiagFailSafeOrCdeClr) || rtb_RelationalOperator_hv);

    /* Outputs for Atomic SubSystem: '<S1147>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S1147>/Counter Reset  Enabled ' */
    /* Switch: '<S1154>/Switch1' incorporates:
     *  Logic: '<S1147>/Fail Counter Reset'
     *  Logic: '<S1147>/NOT6'
     *  Switch: '<S1154>/Switch2'
     *  Switch: '<S1155>/Switch1'
     *  UnitDelay: '<S1147>/Unit Delay'
     *  UnitDelay: '<S1147>/Unit Delay1'
     */
    if ((rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal ||
            (AATR_ac_DW.UnitDelay_DSTATE_el)) || (AATR_ac_DW.UnitDelay1_DSTATE_b))
    {
        /* Switch: '<S1154>/Switch1' incorporates:
         *  Constant: '<S1154>/Constant Value2'
         */
        VeAATD_Cnt_SCP_DCPstvTemp_PerfFailCnt = 0U;

        /* Switch: '<S1155>/Switch1' incorporates:
         *  Constant: '<S1155>/Constant Value2'
         */
        VeAATD_Cnt_SCP_DCPstvTemp_PerfSmpCnt = 0U;
    }
    else
    {
        if (rtb_RelationalOperator_gb && (VeAATD_b_SCPDCPstvFaulty_AftrSnsrChk))
        {
            /* Switch: '<S1154>/Switch1' incorporates:
             *  Constant: '<S1154>/Constant Value1'
             *  Sum: '<S1154>/Subtraction'
             *  Switch: '<S1154>/Switch2'
             *  UnitDelay: '<S1154>/Unit Delay'
             */
            VeAATD_Cnt_SCP_DCPstvTemp_PerfFailCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_DCPstvTemp_PerfFailCnt) + 1U);
        }

        /* Switch: '<S1155>/Switch2' */
        if (rtb_RelationalOperator_gb)
        {
            /* Switch: '<S1155>/Switch1' incorporates:
             *  Constant: '<S1155>/Constant Value1'
             *  Sum: '<S1155>/Subtraction'
             *  Switch: '<S1155>/Switch2'
             *  UnitDelay: '<S1155>/Unit Delay'
             */
            VeAATD_Cnt_SCP_DCPstvTemp_PerfSmpCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_DCPstvTemp_PerfSmpCnt) + 1U);
        }

        /* End of Switch: '<S1155>/Switch2' */
    }

    /* End of Switch: '<S1154>/Switch1' */
    /* End of Outputs for SubSystem: '<S1147>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S1147>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S1147>/Greater Than or Equal ' incorporates:
     *  Constant: '<S1141>/Calib'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_b = (((sint32)
        VeAATD_Cnt_SCP_DCPstvTemp_PerfFailCnt) >= ((sint32)
        KeAATR_Cnt_SCP_DCPstvTemp_PerfFail));

    /* Logic: '<S1147>/NOT5' incorporates:
     *  Constant: '<S1142>/Calib'
     *  Logic: '<S1147>/NOT3'
     *  RelationalOperator: '<S1147>/Less Than  or Equal'
     */
    AATR_ac_DW.UnitDelay_DSTATE_el = ((((sint32)
        VeAATD_Cnt_SCP_DCPstvTemp_PerfSmpCnt) >= ((sint32)
        KeAATR_Cnt_SCP_DCPstvTemp_PerfSmp)) && (!AATR_ac_DW.UnitDelay1_DSTATE_b));

    /* Switch: '<S1160>/Switch1' incorporates:
     *  Constant: '<S1153>/Constant Value'
     *  DataStoreWrite: '<S1138>/Data Store Write3'
     *  Switch: '<S1159>/Switch1'
     */
    if (VeAATI_b_PostCodeClrDiagDsbl_OvrdVal_Dial)
    {
        AATR_ac_DW.NeAATR_Cnt_SCP_DCPstvTemp_PerfFlt_MFOP = 0U;
    }
    else
    {
        if (AATR_ac_DW.UnitDelay_DSTATE_el)
        {
            /* MinMax: '<S1153>/Minimum2' incorporates:
             *  DataStoreRead: '<S1138>/Data Store Read1'
             *  Switch: '<S1159>/Switch1'
             */
            if (VeAATD_Cnt_SCP_DCPstvTemp_PerfFailCnt >
                    AATR_ac_DW.NeAATR_Cnt_SCP_DCPstvTemp_PerfFlt_MFOP)
            {
                /* DataStoreWrite: '<S1138>/Data Store Write3' incorporates:
                 *  Switch: '<S1159>/Switch1'
                 */
                AATR_ac_DW.NeAATR_Cnt_SCP_DCPstvTemp_PerfFlt_MFOP =
                    VeAATD_Cnt_SCP_DCPstvTemp_PerfFailCnt;
            }

            /* End of MinMax: '<S1153>/Minimum2' */
        }
    }

    /* End of Switch: '<S1160>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S1145>/Pass' */
    AATR_ac_Pass(AATR_ac_DW.UnitDelay_DSTATE_el,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_b);

    /* End of Outputs for SubSystem: '<S1145>/Pass' */

    /* Outputs for Enabled SubSystem: '<S1145>/Fail' */
    AATR_ac_Fail(AATR_ac_DW.UnitDelay1_DSTATE_b,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_b);

    /* End of Outputs for SubSystem: '<S1145>/Fail' */

    /* Outputs for Enabled SubSystem: '<S1145>/Init' */
    AATR_ac_Init_a(rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal,
                   &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_b);

    /* End of Outputs for SubSystem: '<S1145>/Init' */

    /* VariantMerge generated from: '<S821>/VeAATD_b_SCP_DCPstvTemp_PerfFltDtct' incorporates:
     *  Constant: '<S1149>/Constant'
     *  Logic: '<S1140>/AND'
     *  RelationalOperator: '<S1145>/Relational Operator'
     *  VariantMerge generated from: '<S821>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktPerf'
     */
    VeAATD_b_SCP_DCPstvTemp_PerfFltDtct = (((uint32)
        AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_b) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S821>/If_DCPstvPerfDiag' */
#else

    /* Outputs for Atomic SubSystem: '<S821>/Else_DCPstvPerfDiag' */
    /* VariantMerge generated from: '<S821>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktPerf' incorporates:
     *  Constant: '<S1139>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_b = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S821>/VeAATD_b_SCP_DCPstvTemp_PerfFltDtct' incorporates:
     *  Constant: '<S1137>/FALSE Constant'
     */
    VeAATD_b_SCP_DCPstvTemp_PerfFltDtct = false;

    /* End of Outputs for SubSystem: '<S821>/Else_DCPstvPerfDiag' */
#endif

    /* End of Outputs for SubSystem: '<S377>/DCPstvPerfDiag' */

    /* Outputs for Atomic SubSystem: '<S377>/InletSnsPerfDiag' */
#if Rte_SysCon_Variant_AATR_6

    /* Outputs for Atomic SubSystem: '<S822>/If_InletSnsPerfDiag' */
    /* RelationalOperator: '<S1169>/Relational Operator3' incorporates:
     *  Constant: '<S1169>/Constant3'
     *  DataStoreRead: '<S1170>/StatusByte_BatChaCouTemSenACirRan'
     *  S-Function (sfix_bitop): '<S1169>/Bitwise Operator2'
     */
    rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal = ((((uint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirRan) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S1169>/EdgeFalling1' */
    /* Logic: '<S1169>/Logical Operator' incorporates:
     *  Logic: '<S1172>/OR1'
     */
    rtb_RelationalOperator_hv = !rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal;

    /* End of Outputs for SubSystem: '<S1169>/EdgeFalling1' */

    /* Logic: '<S1169>/Logical1' incorporates:
     *  Constant: '<S1167>/Calib'
     *  Constant: '<S1168>/Calib'
     *  Constant: '<S1169>/Constant1'
     *  DataStoreRead: '<S1170>/StatusByte_BatChaCouTemSenACirRan'
     *  Logic: '<S1162>/Logical Operator'
     *  Logic: '<S1169>/Logical Operator'
     *  Logic: '<S1169>/Logical10'
     *  Logic: '<S1169>/Logical12'
     *  RelationalOperator: '<S1169>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S1169>/Bitwise Operator3'
     */
    rtb_RelationalOperator_gb = (((KeAATR_b_EnbSCP_InletTemp_PerfFlt) &&
        (VeAATD_b_SCPInlet_EnblRatnlty)) &&
        ((!KeAATR_b_BatChaCouTemSenACirRan_LtchEnbl) || (((((uint32)
        AATR_ac_DW.StatusByte_BatChaCouTemSenACirRan) & 1U) == 0U) ||
        rtb_RelationalOperator_hv)));

    /* Outputs for Atomic SubSystem: '<S1169>/EdgeFalling1' */
    /* Logic: '<S1172>/AND' incorporates:
     *  UnitDelay: '<S1172>/Unit Delay'
     */
    rtb_RelationalOperator_hv = (rtb_RelationalOperator_hv &&
        (AATR_ac_DW.UnitDelay_DSTATE_kh));

    /* Update for UnitDelay: '<S1172>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_kh = rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal;

    /* End of Outputs for SubSystem: '<S1169>/EdgeFalling1' */

    /* Logic: '<S1169>/Logical5' */
    rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal =
        ((VeAATD_b_DsblDiagFailSafeOrCdeClr) || rtb_RelationalOperator_hv);

    /* Outputs for Atomic SubSystem: '<S1171>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S1171>/Counter Reset  Enabled ' */
    /* Switch: '<S1178>/Switch1' incorporates:
     *  Logic: '<S1171>/Fail Counter Reset'
     *  Logic: '<S1171>/NOT6'
     *  Switch: '<S1178>/Switch2'
     *  Switch: '<S1179>/Switch1'
     *  UnitDelay: '<S1171>/Unit Delay'
     *  UnitDelay: '<S1171>/Unit Delay1'
     */
    if ((rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal ||
            (AATR_ac_DW.UnitDelay_DSTATE_o3)) || (AATR_ac_DW.UnitDelay1_DSTATE_e))
    {
        /* Switch: '<S1178>/Switch1' incorporates:
         *  Constant: '<S1178>/Constant Value2'
         */
        VeAATD_Cnt_SCP_InletTemp_PerfFailCnt = 0U;

        /* Switch: '<S1179>/Switch1' incorporates:
         *  Constant: '<S1179>/Constant Value2'
         */
        VeAATD_Cnt_SCP_InletTemp_PerfSmpCnt = 0U;
    }
    else
    {
        if (rtb_RelationalOperator_gb && (VeAATD_b_SCPInletFaulty_AftrSnsrChk))
        {
            /* Switch: '<S1178>/Switch1' incorporates:
             *  Constant: '<S1178>/Constant Value1'
             *  Sum: '<S1178>/Subtraction'
             *  Switch: '<S1178>/Switch2'
             *  UnitDelay: '<S1178>/Unit Delay'
             */
            VeAATD_Cnt_SCP_InletTemp_PerfFailCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_InletTemp_PerfFailCnt) + 1U);
        }

        /* Switch: '<S1179>/Switch2' */
        if (rtb_RelationalOperator_gb)
        {
            /* Switch: '<S1179>/Switch1' incorporates:
             *  Constant: '<S1179>/Constant Value1'
             *  Sum: '<S1179>/Subtraction'
             *  Switch: '<S1179>/Switch2'
             *  UnitDelay: '<S1179>/Unit Delay'
             */
            VeAATD_Cnt_SCP_InletTemp_PerfSmpCnt = (uint16)(((uint32)
                VeAATD_Cnt_SCP_InletTemp_PerfSmpCnt) + 1U);
        }

        /* End of Switch: '<S1179>/Switch2' */
    }

    /* End of Switch: '<S1178>/Switch1' */
    /* End of Outputs for SubSystem: '<S1171>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S1171>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S1171>/Greater Than or Equal ' incorporates:
     *  Constant: '<S1165>/Calib'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_e = (((sint32)
        VeAATD_Cnt_SCP_InletTemp_PerfFailCnt) >= ((sint32)
        KeAATR_Cnt_SCP_InletTemp_PerfFail));

    /* Logic: '<S1171>/NOT5' incorporates:
     *  Constant: '<S1166>/Calib'
     *  Logic: '<S1171>/NOT3'
     *  RelationalOperator: '<S1171>/Less Than  or Equal'
     */
    AATR_ac_DW.UnitDelay_DSTATE_o3 = ((((sint32)
        VeAATD_Cnt_SCP_InletTemp_PerfSmpCnt) >= ((sint32)
        KeAATR_Cnt_SCP_InletTemp_PerfSmp)) && (!AATR_ac_DW.UnitDelay1_DSTATE_e));

    /* Switch: '<S1184>/Switch1' incorporates:
     *  Constant: '<S1177>/Constant Value'
     *  DataStoreWrite: '<S1162>/Data Store Write3'
     *  Switch: '<S1183>/Switch1'
     */
    if (VeAATI_b_PostCodeClrDiagDsbl_OvrdVal_Dial)
    {
        AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_PerfFlt_MFOP = 0U;
    }
    else
    {
        if (AATR_ac_DW.UnitDelay_DSTATE_o3)
        {
            /* MinMax: '<S1177>/Minimum2' incorporates:
             *  DataStoreRead: '<S1162>/Data Store Read1'
             *  Switch: '<S1183>/Switch1'
             */
            if (VeAATD_Cnt_SCP_InletTemp_PerfFailCnt >
                    AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_PerfFlt_MFOP)
            {
                /* DataStoreWrite: '<S1162>/Data Store Write3' incorporates:
                 *  Switch: '<S1183>/Switch1'
                 */
                AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_PerfFlt_MFOP =
                    VeAATD_Cnt_SCP_InletTemp_PerfFailCnt;
            }

            /* End of MinMax: '<S1177>/Minimum2' */
        }
    }

    /* End of Switch: '<S1184>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S1169>/Pass' */
    AATR_ac_Pass(AATR_ac_DW.UnitDelay_DSTATE_o3,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSts_);

    /* End of Outputs for SubSystem: '<S1169>/Pass' */

    /* Outputs for Enabled SubSystem: '<S1169>/Fail' */
    AATR_ac_Fail(AATR_ac_DW.UnitDelay1_DSTATE_e,
                 &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSts_);

    /* End of Outputs for SubSystem: '<S1169>/Fail' */

    /* Outputs for Enabled SubSystem: '<S1169>/Init' */
    AATR_ac_Init_a(rtb_VeAATI_b_DiagGlblCndtnsValid_OvrdVal,
                   &AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSts_);

    /* End of Outputs for SubSystem: '<S1169>/Init' */

    /* VariantMerge generated from: '<S822>/VeAATD_b_SCP_InletTemp_PerfFltDtct' incorporates:
     *  Constant: '<S1173>/Constant'
     *  Logic: '<S1164>/AND'
     *  RelationalOperator: '<S1169>/Relational Operator'
     *  VariantMerge generated from: '<S822>/VeAATR_e_FaultSts_BatChaCouTemSenACirRan'
     */
    VeAATD_b_SCP_InletTemp_PerfFltDtct = (((uint32)
        AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSts_) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S822>/If_InletSnsPerfDiag' */
#else

    /* Outputs for Atomic SubSystem: '<S822>/Else_InletSnsPerfDiag' */
    /* VariantMerge generated from: '<S822>/VeAATR_e_FaultSts_BatChaCouTemSenACirRan' incorporates:
     *  Constant: '<S1163>/Constant'
     */
    AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSts_ = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S822>/VeAATD_b_SCP_InletTemp_PerfFltDtct' incorporates:
     *  Constant: '<S1161>/FALSE Constant'
     */
    VeAATD_b_SCP_InletTemp_PerfFltDtct = false;

    /* End of Outputs for SubSystem: '<S822>/Else_InletSnsPerfDiag' */
#endif

    /* End of Outputs for SubSystem: '<S377>/InletSnsPerfDiag' */

    /* Update for UnitDelay: '<S818>/Unit Delay3' incorporates:
     *  UnitDelay: '<S818>/Unit Delay4'
     */
#if !Rte_SysCon_Variant_AATR_22

    AATR_ac_DW.UnitDelay3_DSTATE = rtb_RelationalOperator1_pel;
    AATR_ac_DW.UnitDelay4_DSTATE = rtb_RelationalOperator1_g2;

#endif

    /* End of Update for UnitDelay: '<S818>/Unit Delay3' */

    /* Update for UnitDelay: '<S818>/Unit Delay5' incorporates:
     *  UnitDelay: '<S818>/Unit Delay6'
     */
#if Rte_SysCon_Variant_AATR_22

    AATR_ac_DW.UnitDelay5_DSTATE = rtb_RelationalOperator_jb;
    AATR_ac_DW.UnitDelay6_DSTATE = rtb_AND_fy;

#endif

    /* End of Update for UnitDelay: '<S818>/Unit Delay5' */

    /* Update for Delay: '<S877>/Delay' */
#if Rte_SysCon_Variant_AATR_19

    AATR_ac_DW.Delay_DSTATE[AATR_ac_DW.CircBufIdx] =
        rtb_VeAATI_n_EngineSpeed_Dial;
    if (AATR_ac_DW.CircBufIdx < 19)
    {
        AATR_ac_DW.CircBufIdx++;
    }
    else
    {
        AATR_ac_DW.CircBufIdx = 0;
    }

#endif

    /* End of Update for Delay: '<S877>/Delay' */
    /* End of Outputs for SubSystem: '<S1>/Diagnostics1' */

    /* Outputs for Function Call SubSystem: '<S1>/AATC_Process_2' */
    /* Switch: '<S18>/Switch' incorporates:
     *  Constant: '<S197>/Calib'
     */
    if (KeAATR_b_CBCAmbAirVlt_LoFlt_SD)
    {
        /* Switch: '<S18>/Switch' incorporates:
         *  Constant: '<S196>/Calib'
         */
        VeAATC_b_CBCAmbAirVlt_LoFltDtct = KeAATR_b_CBCAmbAirVlt_LoFlt_D;
    }
    else
    {
        /* Switch: '<S18>/Switch' */
        VeAATC_b_CBCAmbAirVlt_LoFltDtct = VeAATD_b_CBCAmbAirVlt_LoFltDtct;
    }

    /* End of Switch: '<S18>/Switch' */

    /* Switch: '<S18>/Switch1' incorporates:
     *  Constant: '<S195>/Calib'
     */
    if (KeAATR_b_CBCAmbAirVlt_HiFlt_SD)
    {
        /* Switch: '<S18>/Switch1' incorporates:
         *  Constant: '<S194>/Calib'
         */
        VeAATC_b_CBCAmbAirVlt_HiFltDtct = KeAATR_b_CBCAmbAirVlt_HiFlt_D;
    }
    else
    {
        /* Switch: '<S18>/Switch1' */
        VeAATC_b_CBCAmbAirVlt_HiFltDtct = VeAATD_b_CBCAmbAirVlt_HiFltDtct;
    }

    /* End of Switch: '<S18>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S18>/Process_Stored' */
    /* Switch: '<S280>/Switch1' */
    if (VeAATC_b_AmbAirTemp_Reset)
    {
        /* Switch: '<S280>/Switch1' */
        VeAATC_T_AmbAirTempPredPrev_App1 = VeAATC_T_AmbAirTemp_IV;
    }
    else
    {
        /* Switch: '<S280>/Switch1' incorporates:
         *  UnitDelay: '<S280>/Unit Delay'
         */
        VeAATC_T_AmbAirTempPredPrev_App1 = AATR_ac_DW.UnitDelay_DSTATE;
    }

    /* End of Switch: '<S280>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S205>/AmbAirTemp_Prd' */
    /* Logic: '<S277>/Logical5' incorporates:
     *  Logic: '<S276>/Logical5'
     *  Logic: '<S278>/Logical1'
     */
    rtb_NotEqual_d = !VeAATI_b_ECM_AmbAirTempFA_Dial;

    /* End of Outputs for SubSystem: '<S205>/AmbAirTemp_Prd' */

    /* Switch: '<S277>/Switch2' incorporates:
     *  Constant: '<S291>/Calib'
     *  Logic: '<S277>/Logical1'
     *  Logic: '<S277>/Logical3'
     *  Logic: '<S277>/Logical5'
     *  RelationalOperator: '<S277>/Comparison1'
     *  Switch: '<S277>/Switch1'
     *  Switch: '<S277>/Switch3'
     */
    if (rtb_NotEqual_d && (VeAATI_b_RunCrankActive_Dial))
    {
        /* Switch: '<S277>/Switch2' */
        VeAATC_T_AmbAirTemp_Sig4Rat = VeAATI_T_ECM_AmbAirTemp_Dial;
    }
    else if (((!KeAATR_b_EnblECMTmpFA_4Rat) || (VeAATI_b_ECM_AmbAirTempFA_Dial))
             && (VeAATC_b_AmbAirTemp_IVPrdCmpt))
    {
        /* Switch: '<S277>/Switch3' incorporates:
         *  Switch: '<S277>/Switch2'
         */
        VeAATC_T_AmbAirTemp_Sig4Rat = VeAATC_T_AmbAirTempPredPrev_App1;
    }
    else
    {
        /* Switch: '<S277>/Switch2' incorporates:
         *  Switch: '<S277>/Switch3'
         */
        VeAATC_T_AmbAirTemp_Sig4Rat = VeAATC_T_AmbAirTemp_IV;
    }

    /* End of Switch: '<S277>/Switch2' */

    /* Logic: '<S276>/Logical3' incorporates:
     *  RelationalOperator: '<S276>/Comparison2'
     */
    rtb_RelationalOperator1_g2 = (rtb_NotEqual_d &&
        (VeAATI_b_RunCrankActive_Dial));

    /* Outputs for Atomic SubSystem: '<S276>/EdgeFalling' */
    /* Logic: '<S282>/AND' incorporates:
     *  Logic: '<S282>/OR1'
     *  UnitDelay: '<S282>/Unit Delay'
     */
    rtb_RelationalOperator_jb = ((!rtb_RelationalOperator1_g2) &&
        (AATR_ac_DW.UnitDelay_DSTATE_kd));

    /* Update for UnitDelay: '<S282>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_kd = rtb_RelationalOperator1_g2;

    /* End of Outputs for SubSystem: '<S276>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S276>/EdgeRising3' */
    /* Logic: '<S285>/OR1' incorporates:
     *  UnitDelay: '<S285>/Unit Delay'
     */
    rtb_RelationalOperator1_pel = !AATR_ac_DW.UnitDelay_DSTATE_ig;

    /* Update for UnitDelay: '<S285>/Unit Delay' incorporates:
     *  UnitDelay: '<S276>/Unit Delay1'
     */
    AATR_ac_DW.UnitDelay_DSTATE_ig = AATR_ac_DW.UnitDelay1_DSTATE_n;

    /* Outputs for Atomic SubSystem: '<S276>/Stop Watch Reset Enabled' */
    /* Switch: '<S289>/Switch1' incorporates:
     *  Constant: '<S289>/Constant Value2'
     *  Logic: '<S285>/AND'
     *  Switch: '<S289>/Switch2'
     *  UnitDelay: '<S276>/Unit Delay1'
     *  UnitDelay: '<S289>/Unit Delay'
     */
    if ((AATR_ac_DW.UnitDelay1_DSTATE_n) && rtb_RelationalOperator1_pel)
    {
        AATR_ac_DW.UnitDelay_DSTATE_k = 0.0F;
    }
    else
    {
        if (rtb_RelationalOperator1_g2)
        {
            /* UnitDelay: '<S289>/Unit Delay' incorporates:
             *  Constant: '<S286>/Calib'
             *  Sum: '<S289>/Subtraction'
             *  Switch: '<S289>/Switch2'
             */
            AATR_ac_DW.UnitDelay_DSTATE_k += HeAATR_t_MedTEH;
        }
    }

    /* End of Switch: '<S289>/Switch1' */
    /* End of Outputs for SubSystem: '<S276>/Stop Watch Reset Enabled' */
    /* End of Outputs for SubSystem: '<S276>/EdgeRising3' */

    /* RelationalOperator: '<S276>/Comparison3' incorporates:
     *  Constant: '<S287>/Calib'
     *  UnitDelay: '<S276>/Unit Delay1'
     *  UnitDelay: '<S289>/Unit Delay'
     */
    AATR_ac_DW.UnitDelay1_DSTATE_n = (AATR_ac_DW.UnitDelay_DSTATE_k >=
        KeAATR_t_AmbAirTemp_RatFreq);

    /* Outputs for Atomic SubSystem: '<S276>/EdgeRising' */
    /* Logic: '<S283>/AND' incorporates:
     *  Logic: '<S283>/OR1'
     *  UnitDelay: '<S283>/Unit Delay'
     */
    rtb_RelationalOperator1_g2 = !AATR_ac_DW.UnitDelay_DSTATE_mj;

    /* Update for UnitDelay: '<S283>/Unit Delay' incorporates:
     *  Constant: '<S276>/TRUE Constant2'
     */
    AATR_ac_DW.UnitDelay_DSTATE_mj = true;

    /* End of Outputs for SubSystem: '<S276>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S276>/EdgeRising2' */
    /* Logic: '<S284>/OR1' incorporates:
     *  UnitDelay: '<S284>/Unit Delay'
     */
    rtb_RelationalOperator1_pel = !AATR_ac_DW.UnitDelay_DSTATE_pa;

    /* Update for UnitDelay: '<S284>/Unit Delay' incorporates:
     *  UnitDelay: '<S276>/Unit Delay'
     */
    AATR_ac_DW.UnitDelay_DSTATE_pa = VeAATC_b_AmbAirTemp_RtnlTimerPass;

    /* Outputs for Atomic SubSystem: '<S276>/Signal Latch On With Reset' */
    /* Logic: '<S288>/OR1' incorporates:
     *  Logic: '<S276>/Logical2'
     *  Logic: '<S284>/AND'
     *  Logic: '<S288>/NOT'
     *  Logic: '<S288>/OR'
     *  UnitDelay: '<S276>/Unit Delay'
     *  UnitDelay: '<S276>/Unit Delay1'
     *  UnitDelay: '<S288>/Unit Delay'
     */
    VeAATC_b_AmbAirTemp_RtnlReset = (((rtb_RelationalOperator_jb ||
        (AATR_ac_DW.UnitDelay1_DSTATE_n)) || rtb_RelationalOperator1_g2) ||
        (((!VeAATC_b_AmbAirTemp_RtnlTimerPass) || (!rtb_RelationalOperator1_pel))
         && (AATR_ac_DW.UnitDelay_DSTATE_ct)));

    /* End of Outputs for SubSystem: '<S276>/EdgeRising2' */

    /* Update for UnitDelay: '<S288>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_ct = VeAATC_b_AmbAirTemp_RtnlReset;

    /* End of Outputs for SubSystem: '<S276>/Signal Latch On With Reset' */

    /* Outputs for Enabled SubSystem: '<S205>/AmbAirTemp_Rat' incorporates:
     *  EnablePort: '<S279>/Enable'
     */
    if (VeAATC_b_AmbAirTemp_RtnlReset)
    {
        /* Switch: '<S339>/Switch3' incorporates:
         *  Constant: '<S344>/Calib'
         *  RelationalOperator: '<S339>/Comparison2'
         */
        if (VeAATC_T_AmbAirTemp_Sig4Rat == KeAATR_T_AmbAirTemp_SNA_Dflt)
        {
            /* Switch: '<S339>/Switch3' */
            VeAATC_T_AmdAir_RatSig_BD = VeAATC_T_CBC_AmbAirTempFlt_FUNC;
        }
        else
        {
            /* Switch: '<S339>/Switch3' */
            VeAATC_T_AmdAir_RatSig_BD = VeAATC_T_AmbAirTemp_Sig4Rat;
        }

        /* End of Switch: '<S339>/Switch3' */

        /* Abs: '<S339>/Abs' incorporates:
         *  Abs: '<S339>/Abs1'
         *  Sum: '<S339>/Sum1'
         *  Switch: '<S339>/Switch'
         */
        rtb_TmpSignalConversionAtAmbAirTemp_Save = fabsf
            (VeAATC_T_CBC_AmbAirTempFlt_FUNC - VeAATC_T_AmdAir_RatSig_BD);

        /* Product: '<S339>/Product' incorporates:
         *  Abs: '<S339>/Abs'
         *  Constant: '<S339>/Constant Value1'
         */
        VeAATC_Pct_CBC_Rationality_PctErr =
            rtb_TmpSignalConversionAtAmbAirTemp_Save * 100.0F;

        /* Switch: '<S339>/Switch' incorporates:
         *  Constant: '<S345>/Calib'
         */
        if (KeAATR_b_Rationality_Sel)
        {
            /* Switch: '<S339>/Switch1' incorporates:
             *  Constant: '<S344>/Calib'
             *  RelationalOperator: '<S339>/Comparison4'
             */
            if (VeAATC_T_AmbAirTemp_Sig4Rat == KeAATR_T_AmbAirTemp_SNA_Dflt)
            {
                /* Switch: '<S339>/Switch' incorporates:
                 *  Constant: '<S339>/TRUE Constant'
                 *  Switch: '<S339>/Switch1'
                 */
                VeAATC_b_CBC_Rationality_StsChk = true;
            }
            else
            {
                /* Switch: '<S339>/Switch' incorporates:
                 *  Abs: '<S339>/Abs2'
                 *  Constant: '<S343>/Calib'
                 *  Product: '<S339>/Product1'
                 *  RelationalOperator: '<S339>/Comparison3'
                 *  Switch: '<S339>/Switch1'
                 */
                VeAATC_b_CBC_Rationality_StsChk =
                    (VeAATC_Pct_CBC_Rationality_PctErr <=
                     (KeAATR_Pct_AmbAirTemp_RatPctErr * fabsf
                      (VeAATC_T_AmdAir_RatSig_BD)));
            }

            /* End of Switch: '<S339>/Switch1' */
        }
        else
        {
            /* Switch: '<S339>/Switch' incorporates:
             *  Constant: '<S346>/Calib'
             *  RelationalOperator: '<S339>/Comparison1'
             */
            VeAATC_b_CBC_Rationality_StsChk =
                (rtb_TmpSignalConversionAtAmbAirTemp_Save <=
                 KeAATR_dT_AmbAirTemp_RatErr);
        }

        /* Logic: '<S279>/Logical2' */
        rtb_RelationalOperator_jb = !VeAATC_b_CBC_Rationality_StsChk;

        /* Outputs for Atomic SubSystem: '<S279>/EdgeRising5' */
        /* Logic: '<S335>/AND' incorporates:
         *  Logic: '<S335>/OR1'
         *  UnitDelay: '<S335>/Unit Delay'
         */
        rtb_RelationalOperator1_g2 = (rtb_RelationalOperator_jb &&
            (!AATR_ac_DW.UnitDelay_DSTATE_ey));

        /* Update for UnitDelay: '<S335>/Unit Delay' */
        AATR_ac_DW.UnitDelay_DSTATE_ey = rtb_RelationalOperator_jb;

        /* End of Outputs for SubSystem: '<S279>/EdgeRising5' */

        /* Outputs for Atomic SubSystem: '<S279>/Timer Reset Enabled1' */
        /* Switch: '<S342>/Switch1' incorporates:
         *  Constant: '<S337>/Calib'
         *  Constant: '<S342>/Constant Value3'
         *  Logic: '<S342>/AND1'
         *  RelationalOperator: '<S342>/Greater  Than2'
         *  Switch: '<S342>/Switch2'
         *  UnitDelay: '<S342>/Unit Delay'
         */
        if (rtb_RelationalOperator1_g2 && (AATR_ac_DW.UnitDelay_DSTATE_d <= 0.0F))
        {
            AATR_ac_DW.UnitDelay_DSTATE_d = KeAATR_t_RtnltyPassResetDly;
        }
        else
        {
            if (rtb_RelationalOperator_jb)
            {
                /* Switch: '<S342>/Switch2' incorporates:
                 *  Constant: '<S336>/Calib'
                 *  Constant: '<S342>/Constant Value4'
                 *  MinMax: '<S342>/Maximum'
                 *  Sum: '<S342>/Subtraction'
                 */
                AATR_ac_DW.UnitDelay_DSTATE_d = fmaxf
                    (AATR_ac_DW.UnitDelay_DSTATE_d - HeAATR_t_MedTEH, 0.0F);
            }
        }

        /* End of Switch: '<S342>/Switch1' */

        /* RelationalOperator: '<S342>/Greater  Than1' incorporates:
         *  Constant: '<S342>/Constant Value2'
         *  UnitDelay: '<S342>/Unit Delay'
         */
        rtb_RelationalOperator1_g2 = (AATR_ac_DW.UnitDelay_DSTATE_d > 0.0F);

        /* End of Outputs for SubSystem: '<S279>/Timer Reset Enabled1' */

        /* Outputs for Atomic SubSystem: '<S279>/EdgeFalling' */
        /* Logic: '<S331>/AND' incorporates:
         *  Logic: '<S331>/OR1'
         *  UnitDelay: '<S331>/Unit Delay'
         */
        rtb_RelationalOperator_jb = ((!rtb_RelationalOperator1_g2) &&
            (AATR_ac_DW.UnitDelay_DSTATE_om));

        /* Update for UnitDelay: '<S331>/Unit Delay' */
        AATR_ac_DW.UnitDelay_DSTATE_om = rtb_RelationalOperator1_g2;

        /* End of Outputs for SubSystem: '<S279>/EdgeFalling' */

        /* Outputs for Atomic SubSystem: '<S279>/EdgeRising' */
        /* Logic: '<S332>/OR1' incorporates:
         *  UnitDelay: '<S332>/Unit Delay'
         */
        rtb_RelationalOperator1_g2 = !AATR_ac_DW.UnitDelay_DSTATE_buw;

        /* Update for UnitDelay: '<S332>/Unit Delay' incorporates:
         *  Constant: '<S279>/TRUE Constant2'
         */
        AATR_ac_DW.UnitDelay_DSTATE_buw = true;

        /* End of Outputs for SubSystem: '<S279>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S279>/EdgeRising3' */
        /* Logic: '<S333>/OR1' incorporates:
         *  UnitDelay: '<S333>/Unit Delay'
         */
        rtb_RelationalOperator1_pel = !AATR_ac_DW.UnitDelay_DSTATE_bm;

        /* Update for UnitDelay: '<S333>/Unit Delay' */
        AATR_ac_DW.UnitDelay_DSTATE_bm = AATR_ac_DW.UnitDelay2_DSTATE;

        /* Outputs for Atomic SubSystem: '<S279>/Timer Reset Enabled' */
        /* Outputs for Atomic SubSystem: '<S279>/EdgeRising' */
        /* Switch: '<S341>/Switch1' incorporates:
         *  Constant: '<S338>/Calib'
         *  Constant: '<S341>/Constant Value3'
         *  Logic: '<S279>/Logical1'
         *  Logic: '<S332>/AND'
         *  Logic: '<S333>/AND'
         *  Logic: '<S341>/AND1'
         *  RelationalOperator: '<S341>/Greater  Than2'
         *  Switch: '<S341>/Switch2'
         *  UnitDelay: '<S341>/Unit Delay'
         */
        if ((((AATR_ac_DW.UnitDelay2_DSTATE) && rtb_RelationalOperator1_pel) ||
                rtb_RelationalOperator1_g2) && (AATR_ac_DW.UnitDelay_DSTATE_dm <=
             0.0F))
        {
            AATR_ac_DW.UnitDelay_DSTATE_dm = KeAATR_t_RtnltyTimePeriod;
        }
        else
        {
            if (VeAATC_b_CBC_Rationality_StsChk)
            {
                /* Switch: '<S341>/Switch2' incorporates:
                 *  Constant: '<S336>/Calib'
                 *  Constant: '<S341>/Constant Value4'
                 *  MinMax: '<S341>/Maximum'
                 *  Sum: '<S341>/Subtraction'
                 */
                AATR_ac_DW.UnitDelay_DSTATE_dm = fmaxf
                    (AATR_ac_DW.UnitDelay_DSTATE_dm - HeAATR_t_MedTEH, 0.0F);
            }
        }

        /* End of Switch: '<S341>/Switch1' */
        /* End of Outputs for SubSystem: '<S279>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S279>/EdgeRising3' */

        /* Logic: '<S279>/Logical4' incorporates:
         *  Constant: '<S341>/Constant Value2'
         *  RelationalOperator: '<S341>/Greater  Than1'
         *  UnitDelay: '<S341>/Unit Delay'
         */
        VeAATC_b_AmbAirTemp_RtnlTimerPass = (AATR_ac_DW.UnitDelay_DSTATE_dm <=
            0.0F);

        /* End of Outputs for SubSystem: '<S279>/Timer Reset Enabled' */

        /* Outputs for Atomic SubSystem: '<S279>/EdgeRising4' */
        /* Logic: '<S334>/OR1' incorporates:
         *  UnitDelay: '<S334>/Unit Delay'
         */
        rtb_RelationalOperator1_g2 = !AATR_ac_DW.UnitDelay_DSTATE_oa;

        /* Update for UnitDelay: '<S334>/Unit Delay' */
        AATR_ac_DW.UnitDelay_DSTATE_oa = VeAATC_b_AmbAirTemp_RtnlTimerPass;

        /* Outputs for Atomic SubSystem: '<S279>/Signal Latch On With Reset1' */
        /* Logic: '<S340>/OR1' incorporates:
         *  Logic: '<S334>/AND'
         *  Logic: '<S340>/NOT'
         *  Logic: '<S340>/OR'
         *  UnitDelay: '<S340>/Unit Delay'
         */
        VeAATC_b_AmbAirTemp_RtnlPass = (((VeAATC_b_AmbAirTemp_RtnlTimerPass) &&
            rtb_RelationalOperator1_g2) || ((!rtb_RelationalOperator_jb) &&
            (VeAATC_b_AmbAirTemp_RtnlPass)));

        /* End of Outputs for SubSystem: '<S279>/Signal Latch On With Reset1' */
        /* End of Outputs for SubSystem: '<S279>/EdgeRising4' */

        /* Update for UnitDelay: '<S279>/Unit Delay2' */
        AATR_ac_DW.UnitDelay2_DSTATE = VeAATC_b_AmbAirTemp_RtnlReset;
    }

    /* End of Outputs for SubSystem: '<S205>/AmbAirTemp_Rat' */

    /* Outputs for Atomic SubSystem: '<S205>/AmbAirTemp_Prd' */
    /* Outputs for Atomic SubSystem: '<S278>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S309>/EdgeFalling1' */
    /* Logic: '<S329>/AND' incorporates:
     *  Logic: '<S329>/OR1'
     *  RelationalOperator: '<S278>/Comparison4'
     *  UnitDelay: '<S329>/Unit Delay'
     */
    rtb_RelationalOperator_jb = ((!VeAATI_b_RunCrankActive_Dial) &&
        (AATR_ac_DW.UnitDelay_DSTATE_i1));

    /* Update for UnitDelay: '<S329>/Unit Delay' incorporates:
     *  RelationalOperator: '<S278>/Comparison4'
     */
    AATR_ac_DW.UnitDelay_DSTATE_i1 = VeAATI_b_RunCrankActive_Dial;

    /* End of Outputs for SubSystem: '<S309>/EdgeFalling1' */

    /* Switch: '<S309>/Switch' incorporates:
     *  Constant: '<S303>/Calib'
     *  Sum: '<S309>/Summation'
     *  UnitDelay: '<S309>/Unit Delay'
     */
    if (rtb_RelationalOperator_jb)
    {
        AATR_ac_DW.UnitDelay_DSTATE_nj = KeAATR_Cnt_HoldECMTmp_KeyOff;
    }
    else
    {
        /* Sum: '<S309>/Summation' incorporates:
         *  Constant: '<S309>/Constant Value'
         *  UnitDelay: '<S309>/Unit Delay'
         */
        i = ((sint32)AATR_ac_DW.UnitDelay_DSTATE_nj) - 1;
        if ((((sint32)AATR_ac_DW.UnitDelay_DSTATE_nj) - 1) < 0)
        {
            i = 0;
        }

        AATR_ac_DW.UnitDelay_DSTATE_nj = (uint16)i;
    }

    /* End of Switch: '<S309>/Switch' */

    /* Logic: '<S278>/Logical' incorporates:
     *  Constant: '<S309>/Constant Value2'
     *  Logic: '<S309>/AND'
     *  RelationalOperator: '<S278>/Comparison4'
     *  RelationalOperator: '<S309>/Greater  Than'
     *  UnitDelay: '<S309>/Unit Delay'
     */
    VeAATC_b_UseECMTemp = (rtb_NotEqual_d && ((VeAATI_b_RunCrankActive_Dial) ||
                            (((sint32)AATR_ac_DW.UnitDelay_DSTATE_nj) > 0)));

    /* End of Outputs for SubSystem: '<S278>/Turn Off Delay Sample' */

    /* Logic: '<S278>/Logical4' incorporates:
     *  Logic: '<S229>/Logical Operator4'
     */
    rtb_RelationalOperator_jb = !VeAATI_b_CBC_AmbAirVoltFA_Dial;

    /* Logic: '<S278>/Logical5' incorporates:
     *  Logic: '<S278>/Logical2'
     *  Logic: '<S278>/Logical4'
     */
    VeAATC_b_UseCBCTemp = ((((rtb_RelationalOperator_jb &&
        (!VeAATC_b_CBCAmbAirVlt_HiFltDtct)) && (!VeAATC_b_CBCAmbAirVlt_LoFltDtct))
                            && (VeAATC_b_AmbAirTemp_IVPrdCmpt)) &&
                           (VeAATC_b_AmbAirTemp_RtnlPass));

    /* Logic: '<S297>/Logical6' incorporates:
     *  Constant: '<S325>/Constant'
     *  Constant: '<S326>/Constant'
     *  RelationalOperator: '<S297>/Comparison1'
     *  RelationalOperator: '<S297>/Comparison2'
     */
    rtb_RelationalOperator1_g2 = ((CeAATR_e_AmbAirTemp_CBC == ((uint32)
        AATR_ac_DW.UnitDelay_DSTATE_i2)) || (((uint32)
        AATR_ac_DW.UnitDelay_DSTATE_i2) == CeAATR_e_AmbAirTemp_ECM));

    /* Outputs for Atomic SubSystem: '<S297>/EdgeRising3' */
    /* Logic: '<S323>/OR1' incorporates:
     *  UnitDelay: '<S323>/Unit Delay'
     */
    rtb_RelationalOperator1_pel = !AATR_ac_DW.UnitDelay_DSTATE_f2;

    /* Update for UnitDelay: '<S323>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_f2 = rtb_RelationalOperator1_g2;

    /* End of Outputs for SubSystem: '<S297>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S297>/EdgeRising4' */
    /* Logic: '<S324>/OR1' incorporates:
     *  UnitDelay: '<S324>/Unit Delay'
     */
    rtb_AND_fy = !AATR_ac_DW.UnitDelay_DSTATE_pc;

    /* Update for UnitDelay: '<S324>/Unit Delay' incorporates:
     *  Constant: '<S297>/TRUE Constant1'
     */
    AATR_ac_DW.UnitDelay_DSTATE_pc = true;

    /* Outputs for Atomic SubSystem: '<S297>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S297>/EdgeRising3' */
    /* Logic: '<S328>/OR1' incorporates:
     *  Logic: '<S323>/AND'
     *  Logic: '<S324>/AND'
     *  Logic: '<S328>/OR'
     *  UnitDelay: '<S328>/Unit Delay'
     */
    AATR_ac_DW.UnitDelay_DSTATE_n3 = ((rtb_RelationalOperator1_g2 &&
        rtb_RelationalOperator1_pel) || ((!rtb_AND_fy) &&
        (AATR_ac_DW.UnitDelay_DSTATE_n3)));

    /* End of Outputs for SubSystem: '<S297>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S297>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S297>/EdgeRising4' */

    /* Logic: '<S297>/Logical4' incorporates:
     *  Constant: '<S327>/Calib'
     *  Logic: '<S297>/Logical1'
     *  Logic: '<S297>/Logical2'
     *  UnitDelay: '<S328>/Unit Delay'
     */
    VeAATC_b_UsePrevTemp_BT = ((((KeAATR_b_OldApp_KeepPrevOvvrd) ||
        ((VeAATI_b_ECM_AmbAirTempFA_Dial) && (VeAATI_b_CBC_AmbAirVoltFA_Dial))) &&
        (VeAATC_b_AmbAirTemp_IVPrdCmpt)) && (AATR_ac_DW.UnitDelay_DSTATE_n3));

    /* Outputs for Atomic SubSystem: '<S278>/EdgeRising2' */
    /* Logic: '<S299>/OR1' incorporates:
     *  UnitDelay: '<S299>/Unit Delay'
     */
    rtb_RelationalOperator1_g2 = !AATR_ac_DW.UnitDelay_DSTATE_ir;

    /* Update for UnitDelay: '<S299>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_ir = VeAATC_b_UsePrevTemp_BT;

    /* Outputs for Atomic SubSystem: '<S278>/PrevTemp_Timer' */
    /* Switch: '<S307>/Switch1' incorporates:
     *  Constant: '<S306>/Calib'
     *  Logic: '<S299>/AND'
     *  Switch: '<S307>/Switch2'
     *  UnitDelay: '<S307>/Unit Delay'
     */
    if ((VeAATC_b_UsePrevTemp_BT) && rtb_RelationalOperator1_g2)
    {
        AATR_ac_DW.UnitDelay_DSTATE_f = KeAATR_t_Prev_AmbAirTempTimer;
    }
    else
    {
        if (VeAATC_b_UsePrevTemp_BT)
        {
            /* UnitDelay: '<S307>/Unit Delay' incorporates:
             *  Constant: '<S301>/Calib'
             *  Constant: '<S307>/Constant Value4'
             *  MinMax: '<S307>/Maximum'
             *  Sum: '<S307>/Subtraction'
             *  Switch: '<S307>/Switch2'
             */
            AATR_ac_DW.UnitDelay_DSTATE_f = fmaxf(AATR_ac_DW.UnitDelay_DSTATE_f
                - HeAATR_t_MedTEH, 0.0F);
        }
    }

    /* End of Switch: '<S307>/Switch1' */
    /* End of Outputs for SubSystem: '<S278>/EdgeRising2' */

    /* RelationalOperator: '<S307>/Greater  Than1' incorporates:
     *  Constant: '<S307>/Constant Value2'
     *  UnitDelay: '<S307>/Unit Delay'
     */
    VeAATC_b_UsePrevTemp = (AATR_ac_DW.UnitDelay_DSTATE_f > 0.0F);

    /* End of Outputs for SubSystem: '<S278>/PrevTemp_Timer' */

    /* Logic: '<S278>/Logical10' incorporates:
     *  Constant: '<S304>/Calib'
     */
    VeAATC_b_Enbl_IVTemp = ((KeAATR_b_IgnrIVCmpltPrd4UseIV) ||
                            (VeAATC_b_AmbAirTemp_IVPrdCmpt));

    /* Outputs for Atomic SubSystem: '<S278>/EdgeRising5' */
    /* Logic: '<S300>/OR1' incorporates:
     *  UnitDelay: '<S300>/Unit Delay'
     */
    rtb_RelationalOperator1_g2 = !AATR_ac_DW.UnitDelay_DSTATE_h5;

    /* Update for UnitDelay: '<S300>/Unit Delay' incorporates:
     *  Constant: '<S278>/TRUE Constant'
     */
    AATR_ac_DW.UnitDelay_DSTATE_h5 = true;

    /* Outputs for Atomic SubSystem: '<S278>/IV_Timer' */
    /* Switch: '<S302>/Switch1' incorporates:
     *  Constant: '<S305>/Calib'
     *  Logic: '<S300>/AND'
     *  Switch: '<S302>/Switch2'
     *  UnitDelay: '<S302>/Unit Delay'
     */
    if (rtb_RelationalOperator1_g2)
    {
        AATR_ac_DW.UnitDelay_DSTATE_g = KeAATR_t_IV_AmbAirTempTimer;
    }
    else
    {
        if (VeAATC_b_Enbl_IVTemp)
        {
            /* UnitDelay: '<S302>/Unit Delay' incorporates:
             *  Constant: '<S301>/Calib'
             *  Constant: '<S302>/Constant Value4'
             *  MinMax: '<S302>/Maximum'
             *  Sum: '<S302>/Subtraction'
             *  Switch: '<S302>/Switch2'
             */
            AATR_ac_DW.UnitDelay_DSTATE_g = fmaxf(AATR_ac_DW.UnitDelay_DSTATE_g
                - HeAATR_t_MedTEH, 0.0F);
        }
    }

    /* End of Switch: '<S302>/Switch1' */
    /* End of Outputs for SubSystem: '<S278>/EdgeRising5' */

    /* Logic: '<S278>/Logical9' incorporates:
     *  Constant: '<S302>/Constant Value2'
     *  RelationalOperator: '<S302>/Greater  Than1'
     *  UnitDelay: '<S302>/Unit Delay'
     */
    VeAATC_b_UseIVTemp = ((VeAATC_b_Enbl_IVTemp) &&
                          (AATR_ac_DW.UnitDelay_DSTATE_g > 0.0F));

    /* End of Outputs for SubSystem: '<S278>/IV_Timer' */

    /* If: '<S278>/If' */
    if (VeAATC_b_UseECMTemp)
    {
        /* Outputs for IfAction SubSystem: '<S278>/AmbAirTemp_ECM' incorporates:
         *  ActionPort: '<S293>/Action Port'
         */
        /* Merge: '<S278>/Merge' incorporates:
         *  Inport: '<S293>/ECM_AmbAirTemp'
         */
        VeAATC_T_AmbAirTemp_Pred_App1 = VeAATI_T_ECM_AmbAirTemp_Dial;

        /* Merge: '<S278>/Merge1' incorporates:
         *  Constant: '<S293>/FALSE Constant'
         *  SignalConversion generated from: '<S293>/AmbAirTemp_FA'
         */
        VeAATC_b_AmbAirTemp_FA_App1 = false;

        /* Merge: '<S278>/Merge2' incorporates:
         *  Constant: '<S313>/Constant'
         *  DataTypeConversion: '<S312>/DataTypeConversion'
         */
        VeAATC_e_AmbAirTempSource_App1 = CeAATR_e_AmbAirTemp_ECM;

        /* End of Outputs for SubSystem: '<S278>/AmbAirTemp_ECM' */
    }
    else if (VeAATC_b_UseCBCTemp)
    {
        /* Outputs for IfAction SubSystem: '<S278>/AmbAirTemp_RtnlCBC' incorporates:
         *  ActionPort: '<S295>/Action Port'
         */
        /* Merge: '<S278>/Merge' incorporates:
         *  Inport: '<S295>/CBC_AmbAirTempRtnl'
         */
        VeAATC_T_AmbAirTemp_Pred_App1 = VeAATC_T_CBC_AmbAirTempFlt_FUNC;

        /* Merge: '<S278>/Merge1' incorporates:
         *  Constant: '<S295>/FALSE Constant'
         *  SignalConversion generated from: '<S295>/AmbAirTemp_FA'
         */
        VeAATC_b_AmbAirTemp_FA_App1 = false;

        /* Merge: '<S278>/Merge2' incorporates:
         *  Constant: '<S319>/Constant'
         *  DataTypeConversion: '<S318>/DataTypeConversion'
         */
        VeAATC_e_AmbAirTempSource_App1 = CeAATR_e_AmbAirTemp_CBC;

        /* End of Outputs for SubSystem: '<S278>/AmbAirTemp_RtnlCBC' */
    }
    else if (VeAATC_b_UsePrevTemp)
    {
        /* Outputs for IfAction SubSystem: '<S278>/AmbAirTempPred_Prev' incorporates:
         *  ActionPort: '<S292>/Resets'
         */
        /* Merge: '<S278>/Merge' incorporates:
         *  Inport: '<S292>/AmbAirTempPredPrev'
         */
        VeAATC_T_AmbAirTemp_Pred_App1 = VeAATC_T_AmbAirTempPredPrev_App1;

        /* Merge: '<S278>/Merge1' incorporates:
         *  Constant: '<S292>/FALSE Constant'
         *  SignalConversion generated from: '<S292>/AmbAirTemp_FA'
         */
        VeAATC_b_AmbAirTemp_FA_App1 = false;

        /* Merge: '<S278>/Merge2' incorporates:
         *  Constant: '<S311>/Constant'
         *  DataTypeConversion: '<S310>/DataTypeConversion'
         */
        VeAATC_e_AmbAirTempSource_App1 = CeAATR_e_AmbAirTemp_Dflt;

        /* End of Outputs for SubSystem: '<S278>/AmbAirTempPred_Prev' */
    }
    else if (VeAATC_b_UseIVTemp)
    {
        /* Outputs for IfAction SubSystem: '<S278>/AmbAirTemp_InitDflt' incorporates:
         *  ActionPort: '<S294>/Resets'
         */
        /* Merge: '<S278>/Merge' incorporates:
         *  Gain: '<S317>/Gain'
         */
        VeAATC_T_AmbAirTemp_Pred_App1 = VeAATC_T_AmbAirTemp_IV;

        /* Merge: '<S278>/Merge1' incorporates:
         *  Constant: '<S316>/Calib'
         *  RelationalOperator: '<S294>/Comparison4'
         *  Switch: '<S294>/Switch'
         */
        VeAATC_b_AmbAirTemp_FA_App1 = (VeAATC_T_AmbAirTemp_IV ==
            KeAATR_T_AmbAirTemp_SNA_Dflt);

        /* Merge: '<S278>/Merge2' incorporates:
         *  Constant: '<S315>/Constant'
         *  DataTypeConversion: '<S314>/DataTypeConversion'
         */
        VeAATC_e_AmbAirTempSource_App1 = CeAATR_e_AmbAirTemp_Dflt;

        /* End of Outputs for SubSystem: '<S278>/AmbAirTemp_InitDflt' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S278>/AmbAirTemp_SNADflt' incorporates:
         *  ActionPort: '<S296>/Resets'
         */
        AATR_ac_AmbAirTemp_SNADflt((&(VeAATC_T_AmbAirTemp_Pred_App1)),
            (&(VeAATC_b_AmbAirTemp_FA_App1)), (&(VeAATC_e_AmbAirTempSource_App1)));

        /* End of Outputs for SubSystem: '<S278>/AmbAirTemp_SNADflt' */
    }

    /* End of If: '<S278>/If' */
    /* End of Outputs for SubSystem: '<S205>/AmbAirTemp_Prd' */

    /* Logic: '<S221>/Logical Operator12' incorporates:
     *  Constant: '<S250>/Constant1'
     *  Constant: '<S250>/Constant2'
     *  Constant: '<S251>/Constant1'
     *  Constant: '<S251>/Constant2'
     *  Constant: '<S252>/Constant'
     *  Constant: '<S252>/Constant1'
     *  Constant: '<S253>/Calib'
     *  DataStoreRead: '<S250>/StatusByte_AAT_SnsrCktHi'
     *  DataStoreRead: '<S251>/StatusByte_AAT_SnsrCktLo'
     *  DataStoreRead: '<S252>/StatusByte_AAT_SnsrPerf'
     *  Logic: '<S221>/Logical Operator1'
     *  Logic: '<S221>/Logical Operator13'
     *  Logic: '<S221>/Logical Operator3'
     *  Logic: '<S250>/Logical Operator'
     *  Logic: '<S251>/Logical Operator'
     *  Logic: '<S252>/Logical Operator'
     *  RelationalOperator: '<S250>/Relational Operator1'
     *  RelationalOperator: '<S250>/Relational Operator2'
     *  RelationalOperator: '<S251>/Relational Operator1'
     *  RelationalOperator: '<S251>/Relational Operator2'
     *  RelationalOperator: '<S252>/Relational Operator'
     *  RelationalOperator: '<S252>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S250>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S250>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S251>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S251>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S252>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S252>/Bitwise Operator7'
     */
    VeAATR_b_CBCPassedPrev = (((((((sint32)AATR_ac_DW.StatusByte_AAT_SnsrCktLo)
        & 1) <= 0) || ((((uint32)AATR_ac_DW.StatusByte_AAT_SnsrCktLo) & 64U) !=
                       0U)) && (((((sint32)AATR_ac_DW.StatusByte_AAT_SnsrCktHi)
        & 1) <= 0) || ((((uint32)AATR_ac_DW.StatusByte_AAT_SnsrCktHi) & 64U) !=
                       0U))) && ((((((uint32)AATR_ac_DW.StatusByte_AAT_SnsrPerf)
        & 64U) == 0U) && ((((uint32)AATR_ac_DW.StatusByte_AAT_SnsrPerf) & 2U) ==
                          0U)) ||
        (KeAATR_b_OvrrdCBC_PerfFltAftrInitInvalid_Arbitratn)));

    /* Switch: '<S229>/Switch4' incorporates:
     *  Constant: '<S271>/Calib'
     *  Logic: '<S229>/Logical Operator11'
     *  Logic: '<S229>/Logical Operator12'
     *  Logic: '<S229>/Logical Operator13'
     *  Logic: '<S229>/Logical Operator3'
     */
    if ((KeAATR_b_InitInvalid_KeepCBCPrevFltSts) && (!VeAATR_b_InitTemp_Valid))
    {
        rtb_NotEqual_d = VeAATR_b_CBCPassedPrev;
    }
    else
    {
        rtb_NotEqual_d = ((!VeAATD_b_CBCAmbAirTemp_PerfFltDtct) &&
                          (VeAATD_b_CBC_EnblRatnlty));
    }

    /* End of Switch: '<S229>/Switch4' */

    /* Logic: '<S229>/Logical Operator2' */
    VeAATR_b_UseCBC_App2 = ((rtb_NotEqual_d && rtb_RelationalOperator_jb) &&
                            (VeAATR_b_SensorsVentilated_AftrInit));

    /* UnitDelay: '<S209>/Unit Delay' incorporates:
     *  Constant: '<S254>/Constant'
     *  RelationalOperator: '<S227>/Relational Operator'
     */
    rtb_RelationalOperator_jb = (((uint32)VeAATD_e_CalSetLvl_PluggedIn) ==
        CeAATR_e_InitTime);

    /* Logic: '<S232>/Logical Operator14' incorporates:
     *  Constant: '<S272>/Calib'
     *  Logic: '<S232>/Logical Operator16'
     *  Logic: '<S232>/Logical Operator17'
     */
    VeAATR_b_UseSCPInlet_App2 = ((((((!VeAATD_b_SCP_InletTemp_PerfFltDtct) &&
        (VeAATD_b_SCPInlet_EnblRatnlty)) &&
        (!AATR_ac_B.VeAATI_b_SCP_InletTempFA_Dial_AS)) &&
        (VeAATR_b_SensorsVentilated_AftrInit)) && rtb_RelationalOperator_jb) &&
        (KeAATR_b_SCPInletTmpSnsr_Present));

    /* Logic: '<S231>/Logical Operator6' incorporates:
     *  Constant: '<S226>/Calib'
     *  Logic: '<S231>/Logical Operator10'
     *  Logic: '<S231>/Logical Operator9'
     */
    VeAATR_b_UseSCPDCPosTemp = ((((((!VeAATD_b_SCP_DCPstvTemp_PerfFltDtct) &&
        (VeAATD_b_SCPDCPstv_EnblRatnlty)) &&
        (!AATR_ac_B.VeAATI_b_SCP_DCPstvTempFA_Dial)) &&
        (VeAATR_b_SensorsVentilated_AftrInit)) && rtb_RelationalOperator_jb) &&
        (KeAATR_b_SCP_DCTmpSnsrs_Present));

    /* Logic: '<S230>/Logical' incorporates:
     *  Constant: '<S226>/Calib'
     *  Logic: '<S230>/Logical Operator15'
     *  Logic: '<S230>/Logical Operator18'
     */
    VeAATR_b_UseSCPDCNegTemp = ((((((!VeAATD_b_SCP_DCNegtvTemp_PerfFltDtct) &&
        (VeAATD_b_SCPDCNegtv_EnblRatnlty)) &&
        (!AATR_ac_B.VeAATI_b_SCP_DCNegtvTempFA_Dial)) &&
        (VeAATR_b_SensorsVentilated_AftrInit)) && rtb_RelationalOperator_jb) &&
        (KeAATR_b_SCP_DCTmpSnsrs_Present));

    /* SignalConversion generated from: '<S228>/Selector1' */
    rtb_TmpSignalConversionAtSelector1Inport[0] = VeAATR_b_UseCBC_App2;
    rtb_TmpSignalConversionAtSelector1Inport[1] = VeAATR_b_UseSCPInlet_App2;
    rtb_TmpSignalConversionAtSelector1Inport[2] = VeAATR_b_UseSCPDCPosTemp;
    rtb_TmpSignalConversionAtSelector1Inport[3] = VeAATR_b_UseSCPDCNegTemp;
    for (i = 0; i < 4; i++)
    {
        /* DataTypeConversion: '<S228>/Data Type Conversion' incorporates:
         *  Constant: '<S225>/Calib'
         */
        rtb_DataTypeConversion_g[i] = (uint8)KaAATR_e_SnsrPrrty_TempArbtrtn[(i)];
    }

    /* Logic: '<S255>/AND' incorporates:
     *  Selector: '<S228>/Selector1'
     */
    VeAATC_b_UsePriortySnsr1 = rtb_TmpSignalConversionAtSelector1Inport[((sint32)
        rtb_DataTypeConversion_g[0]) - 1];

    /* Logic: '<S256>/AND' incorporates:
     *  Selector: '<S228>/Selector1'
     */
    VeAATC_b_UsePriortySnsr2 = rtb_TmpSignalConversionAtSelector1Inport[((sint32)
        rtb_DataTypeConversion_g[1]) - 1];

    /* Logic: '<S257>/AND' incorporates:
     *  Selector: '<S228>/Selector1'
     */
    VeAATC_b_UsePriortySnsr3 = rtb_TmpSignalConversionAtSelector1Inport[((sint32)
        rtb_DataTypeConversion_g[2]) - 1];

    /* Logic: '<S258>/AND' incorporates:
     *  Selector: '<S228>/Selector1'
     */
    VeAATC_b_UsePriortySnsr4 = rtb_TmpSignalConversionAtSelector1Inport[((sint32)
        rtb_DataTypeConversion_g[3]) - 1];

    /* Outputs for Atomic SubSystem: '<S204>/EdgeRising2' */
    /* Logic: '<S210>/AND' incorporates:
     *  Logic: '<S210>/OR1'
     *  UnitDelay: '<S210>/Unit Delay'
     */
    rtb_RelationalOperator_jb = !AATR_ac_DW.UnitDelay_DSTATE_nq;

    /* Update for UnitDelay: '<S210>/Unit Delay' incorporates:
     *  Constant: '<S204>/TRUE Constant1'
     */
    AATR_ac_DW.UnitDelay_DSTATE_nq = true;

    /* End of Outputs for SubSystem: '<S204>/EdgeRising2' */

    /* Switch: '<S212>/Switch1' */
    if (rtb_RelationalOperator_jb)
    {
        /* Switch: '<S212>/Switch1' */
        VeAATC_b_AmbAirTemp_PrevPredFA_App2 = VeAATC_b_AmbAirTemp_IV_FA;
    }
    else
    {
        /* Switch: '<S212>/Switch1' incorporates:
         *  UnitDelay: '<S212>/Unit Delay'
         */
        VeAATC_b_AmbAirTemp_PrevPredFA_App2 = AATR_ac_DW.UnitDelay_DSTATE_a2;
    }

    /* End of Switch: '<S212>/Switch1' */

    /* Logic: '<S220>/Logical6' incorporates:
     *  Constant: '<S245>/Constant'
     *  Constant: '<S246>/Constant'
     *  Constant: '<S247>/Constant'
     *  Constant: '<S248>/Constant'
     *  RelationalOperator: '<S220>/Comparison1'
     *  RelationalOperator: '<S220>/Comparison3'
     *  RelationalOperator: '<S220>/Comparison4'
     *  RelationalOperator: '<S220>/Comparison5'
     */
    rtb_RelationalOperator1_g2 = ((((((uint32)AATR_ac_DW.UnitDelay_DSTATE_i2) ==
        CeAATR_e_AmbAirTemp_CBC) || (((uint32)AATR_ac_DW.UnitDelay_DSTATE_i2) ==
        CeAATR_e_AmbAirTemp_SCP_Inlet)) || (((uint32)
        AATR_ac_DW.UnitDelay_DSTATE_i2) == CeAATR_e_AmbAirTemp_SCP_DCPstvTemp)) ||
        (((uint32)AATR_ac_DW.UnitDelay_DSTATE_i2) ==
         CeAATR_e_AmbAirTemp_SCP_DCNegtvTemp));

    /* Outputs for Atomic SubSystem: '<S220>/EdgeRising3' */
    /* Logic: '<S243>/OR1' incorporates:
     *  UnitDelay: '<S243>/Unit Delay'
     */
    rtb_RelationalOperator1_pel = !AATR_ac_DW.UnitDelay_DSTATE_ky5;

    /* Update for UnitDelay: '<S243>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_ky5 = rtb_RelationalOperator1_g2;

    /* End of Outputs for SubSystem: '<S220>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S220>/EdgeRising4' */
    /* Logic: '<S244>/OR1' incorporates:
     *  UnitDelay: '<S244>/Unit Delay'
     */
    rtb_AND_fy = !AATR_ac_DW.UnitDelay_DSTATE_a5;

    /* Update for UnitDelay: '<S244>/Unit Delay' incorporates:
     *  Constant: '<S220>/TRUE Constant'
     */
    AATR_ac_DW.UnitDelay_DSTATE_a5 = true;

    /* Outputs for Atomic SubSystem: '<S220>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S220>/EdgeRising3' */
    /* Logic: '<S249>/OR1' incorporates:
     *  Logic: '<S243>/AND'
     *  Logic: '<S244>/AND'
     *  Logic: '<S249>/OR'
     *  UnitDelay: '<S249>/Unit Delay'
     */
    VeAATC_b_UsePrevPred_AmbUpdatdOnce = ((rtb_RelationalOperator1_g2 &&
        rtb_RelationalOperator1_pel) || ((!rtb_AND_fy) &&
        (AATR_ac_DW.UnitDelay_DSTATE_ap)));

    /* End of Outputs for SubSystem: '<S220>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S220>/EdgeRising4' */

    /* Update for UnitDelay: '<S249>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_ap = VeAATC_b_UsePrevPred_AmbUpdatdOnce;

    /* End of Outputs for SubSystem: '<S220>/Signal Latch On With Reset' */

    /* Logic: '<S233>/Logical Operator21' incorporates:
     *  Logic: '<S233>/Logical Operator19'
     *  Logic: '<S233>/Logical Operator26'
     *  Logic: '<S233>/Logical Operator27'
     *  Logic: '<S233>/Logical Operator29'
     *  Logic: '<S233>/Logical Operator30'
     */
    VeAATC_b_UsePrevPred_B4Tmr = ((((((!VeAATR_b_UseCBC_App2) &&
        (!VeAATR_b_UseSCPInlet_App2)) && (!VeAATR_b_UseSCPDCNegTemp)) &&
        (!VeAATR_b_UseSCPDCPosTemp)) && (!VeAATC_b_AmbAirTemp_PrevPredFA_App2)) &&
        (VeAATC_b_UsePrevPred_AmbUpdatdOnce));

    /* Outputs for Atomic SubSystem: '<S233>/EdgeRising2' */
    /* Logic: '<S273>/OR1' incorporates:
     *  UnitDelay: '<S273>/Unit Delay'
     */
    rtb_RelationalOperator1_g2 = !AATR_ac_DW.UnitDelay_DSTATE_ni;

    /* Update for UnitDelay: '<S273>/Unit Delay' */
    AATR_ac_DW.UnitDelay_DSTATE_ni = VeAATC_b_UsePrevPred_B4Tmr;

    /* Outputs for Atomic SubSystem: '<S233>/PrevTemp_Timer' */
    /* Switch: '<S275>/Switch1' incorporates:
     *  Constant: '<S274>/Calib'
     *  Logic: '<S273>/AND'
     *  Switch: '<S275>/Switch2'
     *  UnitDelay: '<S275>/Unit Delay'
     */
    if ((VeAATC_b_UsePrevPred_B4Tmr) && rtb_RelationalOperator1_g2)
    {
        AATR_ac_DW.UnitDelay_DSTATE_l = KeAATR_t_Prev_AmbAirTempTimer;
    }
    else
    {
        if (VeAATC_b_UsePrevPred_B4Tmr)
        {
            /* UnitDelay: '<S275>/Unit Delay' incorporates:
             *  Constant: '<S224>/Calib'
             *  Constant: '<S275>/Constant Value4'
             *  MinMax: '<S275>/Maximum'
             *  Sum: '<S275>/Subtraction'
             *  Switch: '<S275>/Switch2'
             */
            AATR_ac_DW.UnitDelay_DSTATE_l = fmaxf(AATR_ac_DW.UnitDelay_DSTATE_l
                - HeAATR_t_MedTEH, 0.0F);
        }
    }

    /* End of Switch: '<S275>/Switch1' */
    /* End of Outputs for SubSystem: '<S233>/EdgeRising2' */

    /* Logic: '<S233>/Logical Operator25' incorporates:
     *  Constant: '<S275>/Constant Value2'
     *  RelationalOperator: '<S275>/Greater  Than1'
     *  UnitDelay: '<S275>/Unit Delay'
     */
    VeAATR_b_UsePrevPred_App2 = ((VeAATC_b_UsePrevPred_B4Tmr) &&
        (AATR_ac_DW.UnitDelay_DSTATE_l > 0.0F));

    /* End of Outputs for SubSystem: '<S233>/PrevTemp_Timer' */

    /* SignalConversion generated from: '<S228>/Selector3' */
    rtb_TmpSignalConversionAtSelector3Inport[0] =
        VeAATC_T_CBC_AmbAirTempFlt_FUNC;
    rtb_TmpSignalConversionAtSelector3Inport[1] = VeAATC_T_SCP_InletTempFlt;
    rtb_TmpSignalConversionAtSelector3Inport[2] = VeAATC_T_SCP_DCPstvTempFlt;
    rtb_TmpSignalConversionAtSelector3Inport[3] = VeAATC_T_SCP_DCNegtvTempFlt;

    /* Gain: '<S270>/Gain' incorporates:
     *  Selector: '<S228>/Selector1'
     *  Selector: '<S228>/Selector3'
     */
    VeAATC_T_TempPriortySnsr4 = rtb_TmpSignalConversionAtSelector3Inport
        [((sint32)rtb_DataTypeConversion_g[3]) - 1];
    for (i = 0; i < 4; i++)
    {
        /* Selector: '<S228>/Selector2' incorporates:
         *  SignalConversion generated from: '<S228>/Selector2'
         */
        rtb_Selector2[i] = AATR_ac_ConstB.TmpSignalConversionAtSelector2Inport
            [((sint32)rtb_DataTypeConversion_g[i]) - 1];
    }

    /* DataTypeConversion: '<S261>/DataTypeConversion' */
    VeAATC_e_SourcePriortySnsr4 = rtb_Selector2[3];

    /* Gain: '<S269>/Gain' incorporates:
     *  Selector: '<S228>/Selector1'
     *  Selector: '<S228>/Selector3'
     */
    VeAATC_T_TempPriortySnsr3 = rtb_TmpSignalConversionAtSelector3Inport
        [((sint32)rtb_DataTypeConversion_g[2]) - 1];

    /* DataTypeConversion: '<S260>/DataTypeConversion' */
    VeAATC_e_SourcePriortySnsr3 = rtb_Selector2[2];

    /* Gain: '<S268>/Gain' incorporates:
     *  Selector: '<S228>/Selector1'
     *  Selector: '<S228>/Selector3'
     */
    VeAATC_T_TempPriortySnsr2 = rtb_TmpSignalConversionAtSelector3Inport
        [((sint32)rtb_DataTypeConversion_g[1]) - 1];

    /* DataTypeConversion: '<S259>/DataTypeConversion' */
    VeAATC_e_SourcePriortySnsr2 = rtb_Selector2[1];

    /* Gain: '<S267>/Gain' incorporates:
     *  Selector: '<S228>/Selector1'
     *  Selector: '<S228>/Selector3'
     */
    VeAATC_T_TempPriortySnsr1 = rtb_TmpSignalConversionAtSelector3Inport
        [((sint32)rtb_DataTypeConversion_g[0]) - 1];

    /* DataTypeConversion: '<S262>/DataTypeConversion' */
    VeAATC_e_SourcePriortySnsr1 = rtb_Selector2[0];

    /* Outputs for Atomic SubSystem: '<S204>/EdgeRising1' */
    /* Logic: '<S209>/AND' incorporates:
     *  Logic: '<S209>/OR1'
     *  UnitDelay: '<S209>/Unit Delay'
     */
    rtb_RelationalOperator1_g2 = !AATR_ac_DW.UnitDelay_DSTATE_iee;

    /* Update for UnitDelay: '<S209>/Unit Delay' incorporates:
     *  Constant: '<S204>/TRUE Constant'
     */
    AATR_ac_DW.UnitDelay_DSTATE_iee = true;

    /* End of Outputs for SubSystem: '<S204>/EdgeRising1' */

    /* Switch: '<S211>/Switch1' */
    if (rtb_RelationalOperator1_g2)
    {
        /* Switch: '<S211>/Switch1' */
        VeAATC_T_AmbAirTemp_PrevPred_App2 = VeAATC_T_AmbAirTemp_IV;
    }
    else
    {
        /* Switch: '<S211>/Switch1' incorporates:
         *  UnitDelay: '<S211>/Unit Delay'
         */
        VeAATC_T_AmbAirTemp_PrevPred_App2 = AATR_ac_DW.UnitDelay_DSTATE_j;
    }

    /* End of Switch: '<S211>/Switch1' */

    /* If: '<S208>/If' */
    if (VeAATC_b_UsePriortySnsr1)
    {
        /* Outputs for IfAction SubSystem: '<S208>/AmbAirTemp_RtnlPrioritySensor1' incorporates:
         *  ActionPort: '<S215>/Action Port'
         */
        /* Merge: '<S208>/Merge' incorporates:
         *  Inport: '<S215>/Temp'
         */
        VeAATC_T_AmbAirTemp_Pred_App2 = VeAATC_T_TempPriortySnsr1;

        /* Merge: '<S208>/Merge1' incorporates:
         *  Constant: '<S215>/FALSE Constant'
         *  SignalConversion generated from: '<S215>/AmbAirTemp_FA'
         */
        VeAATC_b_AmbAirTemp_PredFA_App2 = false;

        /* Merge: '<S208>/Merge2' incorporates:
         *  DataTypeConversion: '<S236>/DataTypeConversion'
         *  DataTypeConversion: '<S262>/DataTypeConversion'
         */
        VeAATC_e_AmbAirTempSource_App2 = VeAATC_e_SourcePriortySnsr1;

        /* End of Outputs for SubSystem: '<S208>/AmbAirTemp_RtnlPrioritySensor1' */
    }
    else if (VeAATC_b_UsePriortySnsr2)
    {
        /* Outputs for IfAction SubSystem: '<S208>/AmbAirTemp_RtnlPrioritySensor2' incorporates:
         *  ActionPort: '<S216>/Action Port'
         */
        /* Merge: '<S208>/Merge' incorporates:
         *  Inport: '<S216>/Temp'
         */
        VeAATC_T_AmbAirTemp_Pred_App2 = VeAATC_T_TempPriortySnsr2;

        /* Merge: '<S208>/Merge1' incorporates:
         *  Constant: '<S216>/FALSE Constant'
         *  SignalConversion generated from: '<S216>/AmbAirTemp_FA'
         */
        VeAATC_b_AmbAirTemp_PredFA_App2 = false;

        /* Merge: '<S208>/Merge2' incorporates:
         *  DataTypeConversion: '<S237>/DataTypeConversion'
         *  DataTypeConversion: '<S259>/DataTypeConversion'
         */
        VeAATC_e_AmbAirTempSource_App2 = VeAATC_e_SourcePriortySnsr2;

        /* End of Outputs for SubSystem: '<S208>/AmbAirTemp_RtnlPrioritySensor2' */
    }
    else if (VeAATC_b_UsePriortySnsr3)
    {
        /* Outputs for IfAction SubSystem: '<S208>/AmbAirTemp_RtnlPrioritySensor3' incorporates:
         *  ActionPort: '<S217>/Action Port'
         */
        /* Merge: '<S208>/Merge' incorporates:
         *  Inport: '<S217>/Temp'
         */
        VeAATC_T_AmbAirTemp_Pred_App2 = VeAATC_T_TempPriortySnsr3;

        /* Merge: '<S208>/Merge1' incorporates:
         *  Constant: '<S217>/FALSE Constant'
         *  SignalConversion generated from: '<S217>/AmbAirTemp_FA'
         */
        VeAATC_b_AmbAirTemp_PredFA_App2 = false;

        /* Merge: '<S208>/Merge2' incorporates:
         *  DataTypeConversion: '<S238>/DataTypeConversion'
         *  DataTypeConversion: '<S260>/DataTypeConversion'
         */
        VeAATC_e_AmbAirTempSource_App2 = VeAATC_e_SourcePriortySnsr3;

        /* End of Outputs for SubSystem: '<S208>/AmbAirTemp_RtnlPrioritySensor3' */
    }
    else if (VeAATC_b_UsePriortySnsr4)
    {
        /* Outputs for IfAction SubSystem: '<S208>/AmbAirTemp_RtnlPrioritySensor4' incorporates:
         *  ActionPort: '<S218>/Action Port'
         */
        /* Merge: '<S208>/Merge' incorporates:
         *  Inport: '<S218>/Temp'
         */
        VeAATC_T_AmbAirTemp_Pred_App2 = VeAATC_T_TempPriortySnsr4;

        /* Merge: '<S208>/Merge1' incorporates:
         *  Constant: '<S218>/FALSE Constant'
         *  SignalConversion generated from: '<S218>/AmbAirTemp_FA'
         */
        VeAATC_b_AmbAirTemp_PredFA_App2 = false;

        /* Merge: '<S208>/Merge2' incorporates:
         *  DataTypeConversion: '<S239>/DataTypeConversion'
         *  DataTypeConversion: '<S261>/DataTypeConversion'
         */
        VeAATC_e_AmbAirTempSource_App2 = VeAATC_e_SourcePriortySnsr4;

        /* End of Outputs for SubSystem: '<S208>/AmbAirTemp_RtnlPrioritySensor4' */
    }
    else if (VeAATR_b_UsePrevPred_App2)
    {
        /* Outputs for IfAction SubSystem: '<S208>/AmbAirTemp_PrevPred' incorporates:
         *  ActionPort: '<S214>/Action Port'
         */
        /* Merge: '<S208>/Merge' incorporates:
         *  Inport: '<S214>/Prev_PredTemp'
         */
        VeAATC_T_AmbAirTemp_Pred_App2 = VeAATC_T_AmbAirTemp_PrevPred_App2;

        /* Merge: '<S208>/Merge1' incorporates:
         *  Constant: '<S214>/FALSE Constant'
         *  SignalConversion generated from: '<S214>/AmbAirTemp_FA'
         */
        VeAATC_b_AmbAirTemp_PredFA_App2 = false;

        /* Merge: '<S208>/Merge2' incorporates:
         *  Constant: '<S222>/Constant'
         *  DataTypeConversion: '<S235>/DataTypeConversion'
         */
        VeAATC_e_AmbAirTempSource_App2 = CeAATR_e_AmbAirTemp_Dflt;

        /* End of Outputs for SubSystem: '<S208>/AmbAirTemp_PrevPred' */
    }
    else if (AATR_ac_B.LogicalOperator1)
    {
        /* Outputs for IfAction SubSystem: '<S208>/AmbAirTemp_InitDflt' incorporates:
         *  ActionPort: '<S213>/Resets'
         */
        /* Merge: '<S208>/Merge' incorporates:
         *  Inport: '<S213>/AmbAirTemp_IV'
         */
        VeAATC_T_AmbAirTemp_Pred_App2 = VeAATC_T_AmbAirTemp_IV;

        /* Merge: '<S208>/Merge1' incorporates:
         *  Constant: '<S213>/FALSE Constant'
         *  SignalConversion generated from: '<S213>/AmbAirTemp_FA'
         */
        VeAATC_b_AmbAirTemp_PredFA_App2 = false;

        /* Merge: '<S208>/Merge2' incorporates:
         *  Constant: '<S223>/Constant'
         *  DataTypeConversion: '<S234>/DataTypeConversion'
         */
        VeAATC_e_AmbAirTempSource_App2 = CeAATR_e_AmbAirTemp_Dflt;

        /* End of Outputs for SubSystem: '<S208>/AmbAirTemp_InitDflt' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S208>/AmbAirTemp_SNADflt' incorporates:
         *  ActionPort: '<S219>/Resets'
         */
        AATR_ac_AmbAirTemp_SNADflt((&(VeAATC_T_AmbAirTemp_Pred_App2)),
            (&(VeAATC_b_AmbAirTemp_PredFA_App2)),
            (&(VeAATC_e_AmbAirTempSource_App2)));

        /* End of Outputs for SubSystem: '<S208>/AmbAirTemp_SNADflt' */
    }

    /* End of If: '<S208>/If' */

    /* Switch: '<S198>/Switch19' incorporates:
     *  Constant: '<S207>/Calib'
     *  Switch: '<S198>/Switch1'
     */
    if (KeAATR_b_OldAppSelector)
    {
        /* Switch: '<S198>/Switch19' */
        VeAATC_T_AmbAirTempPred = VeAATC_T_AmbAirTemp_Pred_App1;

        /* Switch: '<S198>/Switch1' */
        VeAATC_b_AmbAirTempPredFA = VeAATC_b_AmbAirTemp_FA_App1;
    }
    else
    {
        /* Switch: '<S198>/Switch19' */
        VeAATC_T_AmbAirTempPred = VeAATC_T_AmbAirTemp_Pred_App2;

        /* Switch: '<S198>/Switch1' */
        VeAATC_b_AmbAirTempPredFA = VeAATC_b_AmbAirTemp_PredFA_App2;
    }

    /* End of Switch: '<S198>/Switch19' */

    /* DataStoreWrite: '<S198>/Data Store Write1' */
    AATR_ac_DW.NeAATR_T_AmbAirTempPred_Prev = VeAATC_T_AmbAirTempPred;

    /* DataStoreWrite: '<S198>/Data Store Write2' */
    AATR_ac_DW.NeAATR_b_AmbAirTempPred_PrevFA = VeAATC_b_AmbAirTempPredFA;

    /* Switch: '<S211>/Switch3' incorporates:
     *  UnitDelay: '<S211>/Unit Delay'
     */
    if (rtb_RelationalOperator1_g2)
    {
        AATR_ac_DW.UnitDelay_DSTATE_j = VeAATC_T_AmbAirTemp_IV;
    }
    else
    {
        AATR_ac_DW.UnitDelay_DSTATE_j = VeAATC_T_AmbAirTemp_Pred_App2;
    }

    /* End of Switch: '<S211>/Switch3' */

    /* Switch: '<S212>/Switch3' incorporates:
     *  UnitDelay: '<S212>/Unit Delay'
     */
    if (rtb_RelationalOperator_jb)
    {
        AATR_ac_DW.UnitDelay_DSTATE_a2 = VeAATC_b_AmbAirTemp_IV_FA;
    }
    else
    {
        AATR_ac_DW.UnitDelay_DSTATE_a2 = VeAATC_b_AmbAirTemp_PredFA_App2;
    }

    /* End of Switch: '<S212>/Switch3' */

    /* Switch: '<S280>/Switch3' incorporates:
     *  UnitDelay: '<S280>/Unit Delay'
     */
    if (VeAATC_b_AmbAirTemp_Reset)
    {
        AATR_ac_DW.UnitDelay_DSTATE = VeAATC_T_AmbAirTemp_IV;
    }
    else
    {
        AATR_ac_DW.UnitDelay_DSTATE = VeAATC_T_AmbAirTemp_Pred_App1;
    }

    /* End of Switch: '<S280>/Switch3' */

    /* Switch: '<S198>/Switch2' incorporates:
     *  Constant: '<S207>/Calib'
     */
    if (KeAATR_b_OldAppSelector)
    {
        /* Switch: '<S198>/Switch2' incorporates:
         *  Merge: '<S278>/Merge2'
         */
        AATR_ac_B.VeAATC_e_AmbAirTempSource = VeAATC_e_AmbAirTempSource_App1;
    }
    else
    {
        /* Switch: '<S198>/Switch2' incorporates:
         *  Merge: '<S208>/Merge2'
         */
        AATR_ac_B.VeAATC_e_AmbAirTempSource = VeAATC_e_AmbAirTempSource_App2;
    }

    /* End of Switch: '<S198>/Switch2' */

    /* Update for RelationalOperator: '<S297>/Comparison1' incorporates:
     *  Switch: '<S198>/Switch2'
     *  UnitDelay: '<S198>/Unit Delay'
     */
    AATR_ac_DW.UnitDelay_DSTATE_i2 = AATR_ac_B.VeAATC_e_AmbAirTempSource;

    /* End of Outputs for SubSystem: '<S18>/Process_Stored' */

    /* Outputs for Atomic SubSystem: '<S192>/GradientLimiter' */
    /* Sum: '<S200>/Sum2' incorporates:
     *  UnitDelay: '<S200>/Unit Delay'
     */
    rtb_TmpSignalConversionAtAmbAirTemp_Save = VeAATC_T_AmbAirTempPred -
        AATR_ac_DW.UnitDelay_DSTATE_o;

    /* Outputs for Atomic SubSystem: '<S200>/Limiter' */
    /* Switch: '<S203>/Switch1' incorporates:
     *  Constant: '<S201>/Calib'
     *  RelationalOperator: '<S203>/Relational Operator'
     */
    if (KeAATR_T_TempChng_High < rtb_TmpSignalConversionAtAmbAirTemp_Save)
    {
        /* Switch: '<S203>/Switch1' */
        rtb_TmpSignalConversionAtAmbAirTemp_Save = KeAATR_T_TempChng_High;
    }

    /* End of Switch: '<S203>/Switch1' */

    /* Switch: '<S203>/Switch' incorporates:
     *  Constant: '<S202>/Calib'
     *  RelationalOperator: '<S203>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtAmbAirTemp_Save <= KeAATR_T_TempChng_Low)
    {
        rtb_TmpSignalConversionAtAmbAirTemp_Save = KeAATR_T_TempChng_Low;
    }

    /* End of Switch: '<S203>/Switch' */
    /* End of Outputs for SubSystem: '<S200>/Limiter' */

    /* Sum: '<S200>/Sum3' incorporates:
     *  UnitDelay: '<S200>/Unit Delay'
     */
    AATR_ac_DW.UnitDelay_DSTATE_o += rtb_TmpSignalConversionAtAmbAirTemp_Save;

    /* End of Outputs for SubSystem: '<S192>/GradientLimiter' */

    /* Switch: '<S192>/Switch' */
    if (VeAATC_b_AmbAirTempPredFA)
    {
        /* Switch: '<S192>/Switch' */
        VeAATC_T_AmbAirTemp_AG = VeAATC_T_AmbAirTempPred;
    }
    else
    {
        /* Switch: '<S192>/Switch' incorporates:
         *  UnitDelay: '<S200>/Unit Delay'
         */
        VeAATC_T_AmbAirTemp_AG = AATR_ac_DW.UnitDelay_DSTATE_o;
    }

    /* End of Switch: '<S192>/Switch' */
    /* End of Outputs for SubSystem: '<S1>/AATC_Process_2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#else

    /* Outputs for Function Call SubSystem: '<S1>/AATO_ProcessOut' */
    /* VariantMerge generated from: '<S19>/Variant Source' incorporates:
     *  Inport: '<S19>/ECM_AmbAirTemp_MSG'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varia_hy =
        rtb_TmpSignalConversionAtVeAATR_T_ECM_Am;

#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AATO_ProcessOut'
     */
    /* Switch: '<S19>/Switch19' incorporates:
     *  Constant: '<S355>/Calib'
     *  Constant: '<S356>/Calib'
     *  Gain: '<S367>/Gain'
     *  Inport: '<S19>/AmbAirTempSource'
     *  Inport: '<S19>/ECM_AmbAirTempFA_MSG'
     *  Inport: '<S19>/ECM_AmbAirTemp_MSG'
     *  Logic: '<S347>/AND'
     *  Switch: '<S198>/Switch2'
     *  Switch: '<S19>/Switch1'
     */
#if Rte_SysCon_Variant_AATR_8

    if (KeAATR_b_EstAmbAirTemp_SD)
    {
        /* VariantMerge generated from: '<S19>/AmbAirTemp_Raw' incorporates:
         *  Constant: '<S349>/Calib'
         */
        rtb_VM_Conditional_Signal_AmbAirTemp_Raw = KeAATR_T_EstAmbAirTemp_D;
    }
    else
    {
        /* VariantMerge generated from: '<S19>/AmbAirTemp_Raw' */
        rtb_VM_Conditional_Signal_AmbAirTemp_Raw = VeAATC_T_AmbAirTemp_AG;
    }

    /* VariantMerge generated from: '<S19>/Variant Source' incorporates:
     *  Constant: '<S356>/Calib'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varia_hy =
        rtb_VM_Conditional_Signal_AmbAirTemp_Raw;
    if (KeAATR_b_EstAmbAirTempFA_SD)
    {
        /* VariantMerge generated from: '<S19>/Variant Source1' incorporates:
         *  Constant: '<S354>/Calib'
         */
        AATR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
            KeAATR_b_EstAmbAirTempFA_D;
    }
    else
    {
        /* VariantMerge generated from: '<S19>/Variant Source1' */
        AATR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
            VeAATC_b_AmbAirTempPredFA;
    }

    AATR_ac_B.AmbAirTempSource = AATR_ac_B.VeAATC_e_AmbAirTempSource;

#else

    /* VariantMerge generated from: '<S19>/Variant Source1' incorporates:
     *  Inport: '<S19>/ECM_AmbAirTempFA_MSG'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
        rtb_TmpSignalConversionAtVeAATR_b_ECM_Am;

#endif

    /* End of Switch: '<S19>/Switch19' */

    /* SignalConversion generated from: '<S19>/AmbAirTemp_Raw' */
#if Rte_SysCon_Variant_AATR_8 || Rte_SysCon_Variant_AATR_9

    /* VariantMerge generated from: '<S19>/AmbAirTemp_Raw' */
    rtb_VM_Conditional_Signal_AmbAirTemp_Raw =
        AATR_ac_B.VariantMerge_For_Variant_Source_Varia_ij;

#else

    /* VariantMerge generated from: '<S19>/AmbAirTemp_Raw' incorporates:
     *  SignalConversion generated from: '<S19>/AmbAirTemp_Raw'
     */
    rtb_VM_Conditional_Signal_AmbAirTemp_Raw = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S19>/AmbAirTemp_Raw' */

    /* Inport: '<S19>/AmbAirVolt_Raw_MSG' incorporates:
     *  Gain: '<S369>/Gain'
     *  Gain: '<S370>/Gain'
     *  Gain: '<S371>/Gain'
     *  Gain: '<S372>/Gain'
     *  SignalConversion generated from: '<S1>/AATO_ProcessOut__SCP_AmbientTemp_out'
     *  SignalConversion generated from: '<S1>/AATO_ProcessOut__SCP_DCNegtvTemp_out'
     *  SignalConversion generated from: '<S1>/AATO_ProcessOut__SCP_DCPstvTemp_out'
     *  SignalConversion generated from: '<S1>/AATO_ProcessOut__SCP_InletTemp_out'
     *  SignalConversion generated from: '<S1>/AATO_ProcessOut__VeAATR_b_IUMPR_CBCAmbAirTemp_Perf'
     *  SignalConversion generated from: '<S1>/AATO_ProcessOut__VeAATR_b_IUMPR_SCP_AmbTemp_Perf'
     *  SignalConversion generated from: '<S1>/AATO_ProcessOut__VeAATR_b_IUMPR_SCP_InletTemp_Perf'
     *  Switch: '<S19>/Switch2'
     *  Switch: '<S19>/Switch4'
     *  Switch: '<S19>/Switch5'
     *  Switch: '<S19>/Switch6'
     *  Switch: '<S19>/Switch7'
     *  Switch: '<S19>/Switch8'
     *  Switch: '<S19>/Switch9'
     */
#if !Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S19>/Variant Source2' */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varian_i =
        rtb_TmpSignalConversionAtVeAATR_U_CBC_Am;

#else

    /* VariantMerge generated from: '<S19>/Variant Source2' incorporates:
     *  Gain: '<S369>/Gain'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varian_i =
        AATR_ac_B.VeAATI_U_CBC_AmbAirVolt_Dial;

    /* Switch: '<S19>/Switch5' incorporates:
     *  Constant: '<S365>/Calib'
     */
    if (KeAATR_b_SCP_InletTempFA_SD)
    {
        /* Switch: '<S19>/Switch5' incorporates:
         *  Constant: '<S364>/Calib'
         */
        AATR_ac_B.Switch5 = KeAATR_b_SCP_InletTempFA_D;
    }
    else
    {
        /* Switch: '<S19>/Switch5' */
        AATR_ac_B.Switch5 = VeAATC_b_SCP_InletTemp_Flty;
    }

    /* Switch: '<S19>/Switch7' incorporates:
     *  Constant: '<S362>/Calib'
     */
    if (KeAATR_b_SCP_DCPstvTempFA_SD)
    {
        /* Switch: '<S19>/Switch7' incorporates:
         *  Constant: '<S361>/Calib'
         */
        AATR_ac_B.Switch7 = KeAATR_b_SCP_DCPstvTempFA_D;
    }
    else
    {
        /* Switch: '<S19>/Switch7' */
        AATR_ac_B.Switch7 = VeAATC_b_SCP_DCPstvTemp_Flty;
    }

    /* Switch: '<S19>/Switch9' incorporates:
     *  Constant: '<S359>/Calib'
     */
    if (KeAATR_b_SCP_DCNegtvTempFA_SD)
    {
        /* Switch: '<S19>/Switch9' incorporates:
         *  Constant: '<S358>/Calib'
         */
        AATR_ac_B.Switch9 = KeAATR_b_SCP_DCNegtvTempFA_D;
    }
    else
    {
        /* Switch: '<S19>/Switch9' */
        AATR_ac_B.Switch9 = VeAATC_b_SCPDCNegtvTemp_Flty;
    }

    /* Switch: '<S19>/Switch2' incorporates:
     *  Constant: '<S357>/Calib'
     */
    if (KeAATR_b_SCP_AmbientTemp_SD)
    {
        /* Outport: '<Root>/VeAATR_T_SCP_AmbientTemp' incorporates:
         *  Constant: '<S350>/Calib'
         *  SignalConversion generated from: '<S1>/AATO_ProcessOut__SCP_AmbientTemp_out'
         */
        (void)Rte_Write_VeAATR_T_SCP_AmbientTemp_Value
            (KeAATR_T_SCP_AmbientTemp_D);
    }
    else
    {
        /* Outport: '<Root>/VeAATR_T_SCP_AmbientTemp' incorporates:
         *  SignalConversion generated from: '<S1>/AATO_ProcessOut__SCP_AmbientTemp_out'
         */
        (void)Rte_Write_VeAATR_T_SCP_AmbientTemp_Value
            (VeAATI_T_SCP_AmbientTemp_Dial);
    }

    /* Switch: '<S19>/Switch8' incorporates:
     *  Constant: '<S360>/Calib'
     */
    if (KeAATR_b_SCP_DCNegtvTemp_SD)
    {
        /* Outport: '<Root>/VeAATR_T_SCP_DCNegtvTemp' incorporates:
         *  Constant: '<S351>/Calib'
         *  SignalConversion generated from: '<S1>/AATO_ProcessOut__SCP_DCNegtvTemp_out'
         */
        (void)Rte_Write_VeAATR_T_SCP_DCNegtvTemp_Value
            (KeAATR_T_SCP_DCNegtvTemp_D);
    }
    else
    {
        /* Outport: '<Root>/VeAATR_T_SCP_DCNegtvTemp' incorporates:
         *  SignalConversion generated from: '<S1>/AATO_ProcessOut__SCP_DCNegtvTemp_out'
         */
        (void)Rte_Write_VeAATR_T_SCP_DCNegtvTemp_Value
            (VeAATC_T_SCP_DCNegtvTempFlt);
    }

    /* Switch: '<S19>/Switch6' incorporates:
     *  Constant: '<S363>/Calib'
     */
    if (KeAATR_b_SCP_DCPstvTemp_SD)
    {
        /* Outport: '<Root>/VeAATR_T_SCP_DCPstvTemp' incorporates:
         *  Constant: '<S352>/Calib'
         *  SignalConversion generated from: '<S1>/AATO_ProcessOut__SCP_DCPstvTemp_out'
         */
        (void)Rte_Write_VeAATR_T_SCP_DCPstvTemp_Value(KeAATR_T_SCP_DCPstvTemp_D);
    }
    else
    {
        /* Outport: '<Root>/VeAATR_T_SCP_DCPstvTemp' incorporates:
         *  SignalConversion generated from: '<S1>/AATO_ProcessOut__SCP_DCPstvTemp_out'
         */
        (void)Rte_Write_VeAATR_T_SCP_DCPstvTemp_Value(VeAATC_T_SCP_DCPstvTempFlt);
    }

    /* Switch: '<S19>/Switch4' incorporates:
     *  Constant: '<S366>/Calib'
     */
    if (KeAATR_b_SCP_InletTemp_SD)
    {
        /* Outport: '<Root>/VeAATR_T_SCP_InletTemp' incorporates:
         *  Constant: '<S353>/Calib'
         *  SignalConversion generated from: '<S1>/AATO_ProcessOut__SCP_InletTemp_out'
         */
        (void)Rte_Write_VeAATR_T_SCP_InletTemp_Value(KeAATR_T_SCP_InletTemp_D);
    }
    else
    {
        /* Outport: '<Root>/VeAATR_T_SCP_InletTemp' incorporates:
         *  SignalConversion generated from: '<S1>/AATO_ProcessOut__SCP_InletTemp_out'
         */
        (void)Rte_Write_VeAATR_T_SCP_InletTemp_Value(VeAATC_T_SCP_InletTempFlt);
    }

    /* Outport: '<Root>/VeAATR_b_IUMPR_CBCAmbAirTemp_Perf' incorporates:
     *  Gain: '<S370>/Gain'
     *  SignalConversion generated from: '<S1>/AATO_ProcessOut__VeAATR_b_IUMPR_CBCAmbAirTemp_Perf'
     */
    (void)Rte_Write_VeAATR_b_IUMPR_CBCAmbAirTemp_Perf_Value(AATR_ac_B.AND_f);

    /* Outport: '<Root>/VeAATR_b_IUMPR_SCP_AmbTemp_Perf' incorporates:
     *  Gain: '<S371>/Gain'
     *  SignalConversion generated from: '<S1>/AATO_ProcessOut__VeAATR_b_IUMPR_SCP_AmbTemp_Perf'
     */
    (void)Rte_Write_VeAATR_b_IUMPR_SCP_AmbTemp_Perf_Value(AATR_ac_B.AND_p3);

    /* Outport: '<Root>/VeAATR_b_IUMPR_SCP_InletTemp_Perf' incorporates:
     *  Gain: '<S372>/Gain'
     *  SignalConversion generated from: '<S1>/AATO_ProcessOut__VeAATR_b_IUMPR_SCP_InletTemp_Perf'
     */
    (void)Rte_Write_VeAATR_b_IUMPR_SCP_InletTemp_Perf_Value(AATR_ac_B.AND_o);

#endif

    /* End of Inport: '<S19>/AmbAirVolt_Raw_MSG' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeAATR_T_EstAmbAirTemp' incorporates:
     *  SignalConversion generated from: '<S1>/EstAmbAirTemp'
     */
    (void)Rte_Write_VeAATR_T_EstAmbAirTemp_Value
        (AATR_ac_B.VariantMerge_For_Variant_Source_Varia_hy);

    /* Outport: '<Root>/VeAATR_b_EstAmbAirTempFA' incorporates:
     *  SignalConversion generated from: '<S1>/EstAmbAirTempFA'
     */
    (void)Rte_Write_VeAATR_b_EstAmbAirTempFA_Value
        (AATR_ac_B.VariantMerge_For_Variant_Source_Varian_g);

    /* SignalConversion generated from: '<S1>/EstAmbAirTempSource' incorporates:
     *  SignalConversion generated from: '<S1>/SCP_DCNegtvTempFADiag_out'
     *  SignalConversion generated from: '<S1>/SCP_DCPstvTempFADiag_out'
     *  SignalConversion generated from: '<S1>/SCP_InletTempFADiag_out'
     */
#if Rte_SysCon_Variant_AATR_8

    /* Outport: '<Root>/VeAATR_e_EstAmbAirTempSource' incorporates:
     *  Inport: '<S19>/AmbAirTempSource'
     */
    (void)Rte_Write_VeAATR_e_EstAmbAirTempSource_Value
        (AATR_ac_B.AmbAirTempSource);

    /* Outport: '<Root>/VeAATR_b_SCP_DCNegtvTemp_FA' */
    (void)Rte_Write_VeAATR_b_SCP_DCNegtvTemp_FA_Value(AATR_ac_B.Switch9);

    /* Outport: '<Root>/VeAATR_b_SCP_DCPstvTemp_FA' */
    (void)Rte_Write_VeAATR_b_SCP_DCPstvTemp_FA_Value(AATR_ac_B.Switch7);

    /* Outport: '<Root>/VeAATR_b_SCP_InletTemp_FA' */
    (void)Rte_Write_VeAATR_b_SCP_InletTemp_FA_Value(AATR_ac_B.Switch5);

#endif

    /* End of SignalConversion generated from: '<S1>/EstAmbAirTempSource' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/AATO_ProcessOut'
     */
    /* Outport: '<Root>/VeAATR_T_CBC_AmbAirTempRaw' incorporates:
     *  Gain: '<S368>/Gain'
     *  SignalConversion generated from: '<S1>/VeAATR_T_CBC_AmbTempRaw'
     */
    (void)Rte_Write_VeAATR_T_CBC_AmbAirTempRaw_Value
        (rtb_VM_Conditional_Signal_AmbAirTemp_Raw);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeAATR_U_CBC_AmbAirVoltRaw' incorporates:
     *  SignalConversion generated from: '<S1>/VeAATR_T_CBC_AmbVoltRaw'
     */
    (void)Rte_Write_VeAATR_U_CBC_AmbAirVoltRaw_Value
        (AATR_ac_B.VariantMerge_For_Variant_Source_Varian_i);

    /* SignalConversion generated from: '<S1>/VeAATR_e_FaultSts_AAT_SnsrCktHi' incorporates:
     *  SignalConversion generated from: '<S1>/VeAATR_e_FaultSts_AAT_SnsrCktLo'
     *  SignalConversion generated from: '<S1>/VeAATR_e_FaultSts_AAT_SnsrPerf'
     *  SignalConversion generated from: '<S1>/VeAATR_e_FaultSts_BatChaCouTemSenACirHig'
     *  SignalConversion generated from: '<S1>/VeAATR_e_FaultSts_BatChaCouTemSenACirLow'
     *  SignalConversion generated from: '<S1>/VeAATR_e_FaultSts_BatChaCouTemSenACirRan'
     */
#if Rte_SysCon_Variant_AATR_8

    /* Outport: '<Root>/VeAATR_e_FaultSts_AAT_SnsrCktHi' incorporates:
     *  VariantMerge generated from: '<S528>/VeAATR_e_FaultSts_AAT_SnsrCktHi'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_AAT_SnsrCktHi_Value
        (AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_hr);

    /* Outport: '<Root>/VeAATR_e_FaultSts_AAT_SnsrCktLo' incorporates:
     *  VariantMerge generated from: '<S528>/VeAATR_e_FaultSts_AAT_SnsrCktLo'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_AAT_SnsrCktLo_Value
        (AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_l);

    /* Outport: '<Root>/VeAATR_e_FaultSts_AAT_SnsrPerf' incorporates:
     *  VariantMerge generated from: '<S819>/VeAATR_e_FaultSts_AAT_SnsrPerf'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_AAT_SnsrPerf_Value
        (AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_p);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BatChaCouTemSenACirHig' incorporates:
     *  VariantMerge generated from: '<S534>/VeAATR_e_FaultSts_BatChaCouTemSenACirHig'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BatChaCouTemSenACirHig_Value
        (AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_h);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BatChaCouTemSenACirLow' incorporates:
     *  VariantMerge generated from: '<S534>/VeAATR_e_FaultSts_BatChaCouTemSenACirLow'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BatChaCouTemSenACirLow_Value
        (AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_n);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BatChaCouTemSenACirRan' incorporates:
     *  VariantMerge generated from: '<S822>/VeAATR_e_FaultSts_BatChaCouTemSenACirRan'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BatChaCouTemSenACirRan_Value
        (AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSts_);

#endif

    /* End of SignalConversion generated from: '<S1>/VeAATR_e_FaultSts_AAT_SnsrCktHi' */

    /* SignalConversion generated from: '<S1>/VeAATR_e_FaultSts_BatChaCouTemSnsrCkt' */
#if (!Rte_SysCon_Variant_AATR_10 && !Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8) || (Rte_SysCon_Variant_AATR_11 && Rte_SysCon_Variant_AATR_8)

    /* Outport: '<Root>/VeAATR_e_FaultSts_BatChaCouTemSnsrCkt' incorporates:
     *  VariantMerge generated from: '<S534>/VeAATR_e_FaultSts_BatChaCouTemSnsrCkt'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BatChaCouTemSnsrCkt_Value
        (AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_k);

#endif

    /* End of SignalConversion generated from: '<S1>/VeAATR_e_FaultSts_BatChaCouTemSnsrCkt' */

    /* SignalConversion generated from: '<S1>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCkt' incorporates:
     *  SignalConversion generated from: '<S1>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktHi'
     *  SignalConversion generated from: '<S1>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktLo'
     *  SignalConversion generated from: '<S1>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktPerf'
     *  SignalConversion generated from: '<S1>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCkt'
     *  SignalConversion generated from: '<S1>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktHi'
     *  SignalConversion generated from: '<S1>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktLo'
     *  SignalConversion generated from: '<S1>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktPerf'
     */
#if Rte_SysCon_Variant_AATR_8

    /* Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCkt' incorporates:
     *  VariantMerge generated from: '<S531>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCkt'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCkt_Value
        (AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_bh);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktHi' incorporates:
     *  VariantMerge generated from: '<S531>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktHi'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktHi_Value
        (AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultS_n0);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktLo' incorporates:
     *  VariantMerge generated from: '<S531>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktLo'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktLo_Value
        (AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_f);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktPerf' incorporates:
     *  VariantMerge generated from: '<S821>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktPerf'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktPerf_Value
        (AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_b);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCkt' incorporates:
     *  VariantMerge generated from: '<S530>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCkt'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCkt_Value
        (AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_a);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktHi' incorporates:
     *  VariantMerge generated from: '<S530>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktHi'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktHi_Value
        (AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_i);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktLo' incorporates:
     *  VariantMerge generated from: '<S530>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktLo'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktLo_Value
        (AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_d);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktPerf' incorporates:
     *  VariantMerge generated from: '<S820>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktPerf'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktPerf_Value
        (AATR_ac_B.VariantMergeForOutportVeAATR_e_FaultSt_o);

#endif

    /* End of SignalConversion generated from: '<S1>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCkt' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, AATR_CODE) FsftAATR_T_ECM_AmbientAirTemp(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftAATR_T_ECM_AmbientAirTemp' */
    /* Merge: '<Root>/Merge_6' incorporates:
     *  Chart: '<S4>/FsftAATR_T_ECM_AmbientAirTempChrt'
     *  SignalConversion generated from: '<S4>/VeAATR_T_ECM_AmbientAirTemp_write'
     */
    /* Gateway: FsftAATR_T_ECM_AmbientAirTemp/FsftAATR_T_ECM_AmbientAirTempChrt */
    /* During: FsftAATR_T_ECM_AmbientAirTemp/FsftAATR_T_ECM_AmbientAirTempChrt */
    /* Entry Internal: FsftAATR_T_ECM_AmbientAirTemp/FsftAATR_T_ECM_AmbientAirTempChrt */
    /* Transition: '<S1320>:2' */
    Rte_IrvWrite_FsftAATR_T_ECM_AmbientAirTemp_ECM_AmbAirTemp_Init_write_IRV
        (KeAATR_T_ECM_AmbientAirTempDflt);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  Chart: '<S4>/FsftAATR_T_ECM_AmbientAirTempChrt'
     *  SignalConversion generated from: '<S4>/VeAATR_b_ECM_AmbientAirTempFA_write'
     */
    Rte_IrvWrite_FsftAATR_T_ECM_AmbientAirTemp_ECM_AmbAirTemp_InitFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftAATR_T_ECM_AmbientAirTemp' */
}

/* Output function */
#if Rte_SysCon_Variant_AATR_8

FUNC(void, AATR_CODE) FsftAATR_T_SCP_AmbientTempSnsr(void)
{

#if Rte_SysCon_Variant_AATR_8

    /* Outputs for Function Call SubSystem: '<Root>/FsftAATR_T_SCP_AmbientTempSnsr' */
    /* Merge: '<Root>/Merge_5' incorporates:
     *  Chart: '<S5>/FsftAATR_T_SCP_AmbientTempSnsrChrt'
     *  SignalConversion generated from: '<S5>/VeAATR_T_SCP_AmbientTempSnsr_write'
     */
    /* Gateway: FsftAATR_T_SCP_AmbientTempSnsr/FsftAATR_T_SCP_AmbientTempSnsrChrt */
    /* During: FsftAATR_T_SCP_AmbientTempSnsr/FsftAATR_T_SCP_AmbientTempSnsrChrt */
    /* Entry Internal: FsftAATR_T_SCP_AmbientTempSnsr/FsftAATR_T_SCP_AmbientTempSnsrChrt */
    /* Transition: '<S1321>:2' */
    Rte_IrvWrite_FsftAATR_T_SCP_AmbientTempSnsr_SCP_AmbientTemp_Init_write_IRV
        (KeAATR_T_SCP_AmbientTempSnsrDflt);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  Chart: '<S5>/FsftAATR_T_SCP_AmbientTempSnsrChrt'
     *  SignalConversion generated from: '<S5>/VeAATR_b_SCP_AmbientTempSnsrFA_write'
     */
    Rte_IrvWrite_FsftAATR_T_SCP_AmbientTempSnsr_SCP_AmbientTempFA_Init_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftAATR_T_SCP_AmbientTempSnsr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_AATR_8

FUNC(void, AATR_CODE) FsftAATR_T_SCP_DCNegtvTmpSnsr(void)
{

#if Rte_SysCon_Variant_AATR_8

    /* Outputs for Function Call SubSystem: '<Root>/FsftAATR_T_SCP_DCNegtvTmpSnsr' */
    /* Merge: '<Root>/Merge_15' incorporates:
     *  Chart: '<S6>/FsftAATR_T_SCP_DCNegtvTmpSnsrChrt'
     *  SignalConversion generated from: '<S6>/VeAATR_T_SCP_DCNegtvTmpSnsr_write'
     */
    /* Gateway: FsftAATR_T_SCP_DCNegtvTmpSnsr/FsftAATR_T_SCP_DCNegtvTmpSnsrChrt */
    /* During: FsftAATR_T_SCP_DCNegtvTmpSnsr/FsftAATR_T_SCP_DCNegtvTmpSnsrChrt */
    /* Entry Internal: FsftAATR_T_SCP_DCNegtvTmpSnsr/FsftAATR_T_SCP_DCNegtvTmpSnsrChrt */
    /* Transition: '<S1322>:2' */
    Rte_IrvWrite_FsftAATR_T_SCP_DCNegtvTmpSnsr_SCP_DCNegtvTemp_Init_write_IRV
        (KeAATR_T_SCP_DCNegtvTmpSnsrDflt);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  Chart: '<S6>/FsftAATR_T_SCP_DCNegtvTmpSnsrChrt'
     *  SignalConversion generated from: '<S6>/VeAATR_b_SCP_DCNegtvTmpSnsrFA_write'
     */
    Rte_IrvWrite_FsftAATR_T_SCP_DCNegtvTmpSnsr_SCP_DCNegtvTempFA_Init_write_IRV
        (true);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  Chart: '<S6>/FsftAATR_T_SCP_DCNegtvTmpSnsrChrt'
     *  SignalConversion generated from: '<S6>/VeAATR_b_SCP_DCNegtvTmpSnsrSNA_write'
     */
    Rte_IrvWrite_FsftAATR_T_SCP_DCNegtvTmpSnsr_SCP_DCNegtvTempSNA_Init_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftAATR_T_SCP_DCNegtvTmpSnsr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_AATR_8

FUNC(void, AATR_CODE) FsftAATR_T_SCP_DCPstvTmpSnsr(void)
{

#if Rte_SysCon_Variant_AATR_8

    /* Outputs for Function Call SubSystem: '<Root>/FsftAATR_T_SCP_DCPstvTmpSnsr' */
    /* Merge: '<Root>/Merge_13' incorporates:
     *  Chart: '<S7>/FsftAATR_T_SCP_DCPstvTmpSnsrChrt'
     *  SignalConversion generated from: '<S7>/VeAATR_T_SCP_DCPstvTmpSnsr_write'
     */
    /* Gateway: FsftAATR_T_SCP_DCPstvTmpSnsr/FsftAATR_T_SCP_DCPstvTmpSnsrChrt */
    /* During: FsftAATR_T_SCP_DCPstvTmpSnsr/FsftAATR_T_SCP_DCPstvTmpSnsrChrt */
    /* Entry Internal: FsftAATR_T_SCP_DCPstvTmpSnsr/FsftAATR_T_SCP_DCPstvTmpSnsrChrt */
    /* Transition: '<S1323>:2' */
    Rte_IrvWrite_FsftAATR_T_SCP_DCPstvTmpSnsr_SCP_DCPstvTemp_Init_write_IRV
        (KeAATR_T_SCP_DCPstvTmpSnsrDflt);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  Chart: '<S7>/FsftAATR_T_SCP_DCPstvTmpSnsrChrt'
     *  SignalConversion generated from: '<S7>/VeAATR_b_SCP_DCPstvTmpSnsrFA_write'
     */
    Rte_IrvWrite_FsftAATR_T_SCP_DCPstvTmpSnsr_SCP_DCPstvTempFA_Init_write_IRV
        (true);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  Chart: '<S7>/FsftAATR_T_SCP_DCPstvTmpSnsrChrt'
     *  SignalConversion generated from: '<S7>/VeAATR_b_SCP_DCPstvTmpSnsrSNA_write'
     */
    Rte_IrvWrite_FsftAATR_T_SCP_DCPstvTmpSnsr_SCP_DCPstvTempSNA_Init_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftAATR_T_SCP_DCPstvTmpSnsr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_AATR_8

FUNC(void, AATR_CODE) FsftAATR_T_SCP_InletTempSnsr(void)
{

#if Rte_SysCon_Variant_AATR_8

    /* Outputs for Function Call SubSystem: '<Root>/FsftAATR_T_SCP_InletTempSnsr' */
    /* Merge: '<Root>/Merge_11' incorporates:
     *  Chart: '<S8>/FsftAATR_T_SCP_InletTempSnsrChrt'
     *  SignalConversion generated from: '<S8>/VeAATR_T_SCP_InletTempSnsr_write'
     */
    /* Gateway: FsftAATR_T_SCP_InletTempSnsr/FsftAATR_T_SCP_InletTempSnsrChrt */
    /* During: FsftAATR_T_SCP_InletTempSnsr/FsftAATR_T_SCP_InletTempSnsrChrt */
    /* Entry Internal: FsftAATR_T_SCP_InletTempSnsr/FsftAATR_T_SCP_InletTempSnsrChrt */
    /* Transition: '<S1324>:2' */
    Rte_IrvWrite_FsftAATR_T_SCP_InletTempSnsr_SCP_InletTempSnsr_Init_write_IRV
        (KeAATR_T_SCP_InletTempSnsrDflt);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  Chart: '<S8>/FsftAATR_T_SCP_InletTempSnsrChrt'
     *  SignalConversion generated from: '<S8>/VeAATR_b_SCP_InletTempSnsrFA_write'
     */
    Rte_IrvWrite_FsftAATR_T_SCP_InletTempSnsr_SCP_InletTempSnsrFA_Init_write_IRV
        (true);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  Chart: '<S8>/FsftAATR_T_SCP_InletTempSnsrChrt'
     *  SignalConversion generated from: '<S8>/VeAATR_b_SCP_InletTempSnsrSNA_write'
     */
    Rte_IrvWrite_FsftAATR_T_SCP_InletTempSnsr_SCP_InletTempSnsrSNA_Init_write_IRV
        (false);

    /* End of Outputs for SubSystem: '<Root>/FsftAATR_T_SCP_InletTempSnsr' */
#endif

}

#endif

/* Output function */
FUNC(void, AATR_CODE) FsftAATR_U_CBC_AmbientAirVolt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftAATR_U_CBC_AmbientAirVolt' */
    /* Merge: '<Root>/Merge_8' incorporates:
     *  Chart: '<S9>/FsftAATR_U_CBC_AmbientAirVoltChrt'
     *  SignalConversion generated from: '<S9>/VeAATR_U_CBC_AmbientAirVolt_write'
     */
    /* Gateway: FsftAATR_U_CBC_AmbientAirVolt/FsftAATR_U_CBC_AmbientAirVoltChrt */
    /* During: FsftAATR_U_CBC_AmbientAirVolt/FsftAATR_U_CBC_AmbientAirVoltChrt */
    /* Entry Internal: FsftAATR_U_CBC_AmbientAirVolt/FsftAATR_U_CBC_AmbientAirVoltChrt */
    /* Transition: '<S1325>:2' */
    Rte_IrvWrite_FsftAATR_U_CBC_AmbientAirVolt_CBC_AmbAirTemp_Init_write_IRV
        (KeAATR_U_CBC_AmbientAirVoltDflt);

    /* SignalConversion generated from: '<S9>/VeAATR_b_CBC_AmbientAirVoltFA_write' incorporates:
     *  SignalConversion generated from: '<S9>/VeAATR_e_CBC_AmbientAirVoltSrc_write'
     */
#if Rte_SysCon_Variant_AATR_8 || Rte_SysCon_Variant_AATR_9

    /* Merge: '<Root>/Merge_9' */
    Rte_IrvWrite_FsftAATR_U_CBC_AmbientAirVolt_CBC_AmbAirTemp_InitFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S9>/FsftAATR_U_CBC_AmbientAirVoltChrt'
     */
    Rte_IrvWrite_FsftAATR_U_CBC_AmbientAirVolt_CBC_AmbAirTempSrc_Init_write_IRV
        ((TeAATR_e_CBC_AmbientAirVoltSrc)3U);

#endif

    /* End of SignalConversion generated from: '<S9>/VeAATR_b_CBC_AmbientAirVoltFA_write' */
    /* End of Outputs for SubSystem: '<Root>/FsftAATR_U_CBC_AmbientAirVolt' */
}

/* Output function */
FUNC(void, AATR_CODE) PokeAATR_T_ECM_AmbientAirTemp(VAR(float32, AUTOMATIC)
    LeAATR_T_ECM_AmbientAirTemp, VAR(boolean, AUTOMATIC)
    LeAATR_b_ECM_AmbientAirTempFA)
{
    boolean rtb_LeAATR_b_ECM_AmbientAirTempFA_out_a;

    /* Outputs for Function Call SubSystem: '<Root>/PokeAATR_T_ECM_AmbientAirTemp' */
    /* Chart: '<S10>/PokeAATR_T_ECM_AmbientAirTempChrt' incorporates:
     *  SignalConversion generated from: '<S10>/LeAATR_b_ECM_AmbientAirTempFA'
     */
    /* Gateway: PokeAATR_T_ECM_AmbientAirTemp/PokeAATR_T_ECM_AmbientAirTempChrt */
    /* During: PokeAATR_T_ECM_AmbientAirTemp/PokeAATR_T_ECM_AmbientAirTempChrt */
    /* Entry Internal: PokeAATR_T_ECM_AmbientAirTemp/PokeAATR_T_ECM_AmbientAirTempChrt */
    /* Transition: '<S1326>:2' */
    if (!LeAATR_b_ECM_AmbientAirTempFA)
    {
        /* SignalConversion generated from: '<S10>/VeAATR_T_ECM_AmbientAirTemp_write' incorporates:
         *  Merge: '<Root>/Merge_6'
         *  SignalConversion generated from: '<S10>/LeAATR_T_ECM_AmbientAirTemp'
         */
        /* Transition: '<S1326>:3' */
        /* Transition: '<S1326>:15' */
        Rte_IrvWrite_PokeAATR_T_ECM_AmbientAirTemp_ECM_AmbAirTemp_Init_write_IRV
            (LeAATR_T_ECM_AmbientAirTemp);
        rtb_LeAATR_b_ECM_AmbientAirTempFA_out_a = false;

        /* Transition: '<S1326>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S10>/VeAATR_T_ECM_AmbientAirTemp_write' incorporates:
         *  Merge: '<Root>/Merge_6'
         */
        /* Transition: '<S1326>:4' */
        Rte_IrvWrite_PokeAATR_T_ECM_AmbientAirTemp_ECM_AmbAirTemp_Init_write_IRV
            (KeAATR_T_ECM_AmbientAirTempDflt);
        rtb_LeAATR_b_ECM_AmbientAirTempFA_out_a = true;
    }

    /* End of Chart: '<S10>/PokeAATR_T_ECM_AmbientAirTempChrt' */

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S10>/VeAATR_b_ECM_AmbientAirTempFA_write'
     * */
    Rte_IrvWrite_PokeAATR_T_ECM_AmbientAirTemp_ECM_AmbAirTemp_InitFA_write_IRV
        (rtb_LeAATR_b_ECM_AmbientAirTempFA_out_a);

    /* End of Outputs for SubSystem: '<Root>/PokeAATR_T_ECM_AmbientAirTemp' */
}

/* Output function */
#if Rte_SysCon_Variant_AATR_8

FUNC(void, AATR_CODE) PokeAATR_T_SCP_AmbientTempSnsr(VAR(float32, AUTOMATIC)
    LeAATR_T_SCP_AmbientTempSnsr, VAR(boolean, AUTOMATIC)
    LeAATR_b_SCP_AmbientTempSnsrFA)
{

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_LeAATR_b_SCP_AmbientTempSnsrFA_out_i;

#endif

#if !Rte_SysCon_Variant_AATR_8

    UNUSED_PARAMETER(LeAATR_T_SCP_AmbientTempSnsr);

#endif

#if !Rte_SysCon_Variant_AATR_8

    UNUSED_PARAMETER(LeAATR_b_SCP_AmbientTempSnsrFA);

#endif

#if Rte_SysCon_Variant_AATR_8

    /* Outputs for Function Call SubSystem: '<Root>/PokeAATR_T_SCP_AmbientTempSnsr' */
    /* Chart: '<S11>/PokeAATR_T_SCP_AmbientTempSnsrChrt' incorporates:
     *  SignalConversion generated from: '<S11>/LeAATR_T_SCP_AmbientTempSnsr'
     *  SignalConversion generated from: '<S11>/LeAATR_b_SCP_AmbientTempSnsrFA'
     */
    /* Gateway: PokeAATR_T_SCP_AmbientTempSnsr/PokeAATR_T_SCP_AmbientTempSnsrChrt */
    /* During: PokeAATR_T_SCP_AmbientTempSnsr/PokeAATR_T_SCP_AmbientTempSnsrChrt */
    /* Entry Internal: PokeAATR_T_SCP_AmbientTempSnsr/PokeAATR_T_SCP_AmbientTempSnsrChrt */
    /* Transition: '<S1327>:2' */
    if (!LeAATR_b_SCP_AmbientTempSnsrFA)
    {
        /* Transition: '<S1327>:3' */
        /* Transition: '<S1327>:15' */
        AATR_ac_B.LeAATR_T_SCP_AmbientTempSnsr_out =
            LeAATR_T_SCP_AmbientTempSnsr;
        rtb_LeAATR_b_SCP_AmbientTempSnsrFA_out_i = false;

        /* Transition: '<S1327>:18' */
    }
    else
    {
        /* Transition: '<S1327>:4' */
        rtb_LeAATR_b_SCP_AmbientTempSnsrFA_out_i = true;
    }

    /* End of Chart: '<S11>/PokeAATR_T_SCP_AmbientTempSnsrChrt' */

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S11>/VeAATR_T_SCP_AmbientTempSnsr_write'
     * */
    Rte_IrvWrite_PokeAATR_T_SCP_AmbientTempSnsr_SCP_AmbientTemp_Init_write_IRV
        (AATR_ac_B.LeAATR_T_SCP_AmbientTempSnsr_out);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S11>/VeAATR_b_SCP_AmbientTempSnsrFA_write'
     * */
    Rte_IrvWrite_PokeAATR_T_SCP_AmbientTempSnsr_SCP_AmbientTempFA_Init_write_IRV
        (rtb_LeAATR_b_SCP_AmbientTempSnsrFA_out_i);

    /* End of Outputs for SubSystem: '<Root>/PokeAATR_T_SCP_AmbientTempSnsr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_AATR_8

FUNC(void, AATR_CODE) PokeAATR_T_SCP_DCNegtvTmpSnsr(VAR(float32, AUTOMATIC)
    LeAATR_T_SCP_DCNegtvTmpSnsr, VAR(boolean, AUTOMATIC)
    LeAATR_b_SCP_DCNegtvTmpSnsrFA)
{

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_LeAATR_b_SCP_DCNegtvTmpSnsrFA_out_h;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_LeAATR_b_SCP_DCNegtvTmpSnsrSNA_out_c;

#endif

#if !Rte_SysCon_Variant_AATR_8

    UNUSED_PARAMETER(LeAATR_T_SCP_DCNegtvTmpSnsr);

#endif

#if !Rte_SysCon_Variant_AATR_8

    UNUSED_PARAMETER(LeAATR_b_SCP_DCNegtvTmpSnsrFA);

#endif

#if Rte_SysCon_Variant_AATR_8

    /* Outputs for Function Call SubSystem: '<Root>/PokeAATR_T_SCP_DCNegtvTmpSnsr' */
    /* Chart: '<S12>/PokeAATR_T_SCP_DCNegtvTmpSnsrChrt' incorporates:
     *  SignalConversion generated from: '<S12>/LeAATR_T_SCP_DCNegtvTmpSnsr'
     *  SignalConversion generated from: '<S12>/LeAATR_b_SCP_DCNegtvTmpSnsrFA'
     */
    /* Gateway: PokeAATR_T_SCP_DCNegtvTmpSnsr/PokeAATR_T_SCP_DCNegtvTmpSnsrChrt */
    /* During: PokeAATR_T_SCP_DCNegtvTmpSnsr/PokeAATR_T_SCP_DCNegtvTmpSnsrChrt */
    /* Entry Internal: PokeAATR_T_SCP_DCNegtvTmpSnsr/PokeAATR_T_SCP_DCNegtvTmpSnsrChrt */
    /* Transition: '<S1328>:2' */
    if (!LeAATR_b_SCP_DCNegtvTmpSnsrFA)
    {
        /* Transition: '<S1328>:3' */
        /* Transition: '<S1328>:15' */
        AATR_ac_B.LeAATR_T_SCP_DCNegtvTmpSnsr_out = LeAATR_T_SCP_DCNegtvTmpSnsr;
        rtb_LeAATR_b_SCP_DCNegtvTmpSnsrFA_out_h = false;
        rtb_LeAATR_b_SCP_DCNegtvTmpSnsrSNA_out_c = false;

        /* Transition: '<S1328>:18' */
    }
    else
    {
        /* Transition: '<S1328>:4' */
        rtb_LeAATR_b_SCP_DCNegtvTmpSnsrFA_out_h = true;
        rtb_LeAATR_b_SCP_DCNegtvTmpSnsrSNA_out_c = true;
    }

    /* End of Chart: '<S12>/PokeAATR_T_SCP_DCNegtvTmpSnsrChrt' */

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S12>/VeAATR_T_SCP_DCNegtvTmpSnsr_write'
     * */
    Rte_IrvWrite_PokeAATR_T_SCP_DCNegtvTmpSnsr_SCP_DCNegtvTemp_Init_write_IRV
        (AATR_ac_B.LeAATR_T_SCP_DCNegtvTmpSnsr_out);

    /* Merge: '<Root>/Merge_16' incorporates:
     *  SignalConversion generated from: '<S12>/VeAATR_b_SCP_DCNegtvTmpSnsrFA_write'
     * */
    Rte_IrvWrite_PokeAATR_T_SCP_DCNegtvTmpSnsr_SCP_DCNegtvTempFA_Init_write_IRV
        (rtb_LeAATR_b_SCP_DCNegtvTmpSnsrFA_out_h);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S12>/VeAATR_b_SCP_DCNegtvTmpSnsrSNA_write'
     * */
    Rte_IrvWrite_PokeAATR_T_SCP_DCNegtvTmpSnsr_SCP_DCNegtvTempSNA_Init_write_IRV
        (rtb_LeAATR_b_SCP_DCNegtvTmpSnsrSNA_out_c);

    /* End of Outputs for SubSystem: '<Root>/PokeAATR_T_SCP_DCNegtvTmpSnsr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_AATR_8

FUNC(void, AATR_CODE) PokeAATR_T_SCP_DCPstvTmpSnsr(VAR(float32, AUTOMATIC)
    LeAATR_T_SCP_DCPstvTmpSnsr, VAR(boolean, AUTOMATIC)
    LeAATR_b_SCP_DCPstvTmpSnsrFA)
{

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_LeAATR_b_SCP_DCPstvTmpSnsrFA_out_d;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_LeAATR_b_SCP_DCPstvTmpSnsrSNA_out_f;

#endif

#if !Rte_SysCon_Variant_AATR_8

    UNUSED_PARAMETER(LeAATR_T_SCP_DCPstvTmpSnsr);

#endif

#if !Rte_SysCon_Variant_AATR_8

    UNUSED_PARAMETER(LeAATR_b_SCP_DCPstvTmpSnsrFA);

#endif

#if Rte_SysCon_Variant_AATR_8

    /* Outputs for Function Call SubSystem: '<Root>/PokeAATR_T_SCP_DCPstvTmpSnsr' */
    /* Chart: '<S13>/PokeAATR_T_SCP_DCPstvTmpSnsrChrt' incorporates:
     *  SignalConversion generated from: '<S13>/LeAATR_T_SCP_DCPstvTmpSnsr'
     *  SignalConversion generated from: '<S13>/LeAATR_b_SCP_DCPstvTmpSnsrFA'
     */
    /* Gateway: PokeAATR_T_SCP_DCPstvTmpSnsr/PokeAATR_T_SCP_DCPstvTmpSnsrChrt */
    /* During: PokeAATR_T_SCP_DCPstvTmpSnsr/PokeAATR_T_SCP_DCPstvTmpSnsrChrt */
    /* Entry Internal: PokeAATR_T_SCP_DCPstvTmpSnsr/PokeAATR_T_SCP_DCPstvTmpSnsrChrt */
    /* Transition: '<S1329>:2' */
    if (!LeAATR_b_SCP_DCPstvTmpSnsrFA)
    {
        /* Transition: '<S1329>:3' */
        /* Transition: '<S1329>:15' */
        AATR_ac_B.LeAATR_T_SCP_DCPstvTmpSnsr_out = LeAATR_T_SCP_DCPstvTmpSnsr;
        rtb_LeAATR_b_SCP_DCPstvTmpSnsrFA_out_d = false;
        rtb_LeAATR_b_SCP_DCPstvTmpSnsrSNA_out_f = false;

        /* Transition: '<S1329>:18' */
    }
    else
    {
        /* Transition: '<S1329>:4' */
        rtb_LeAATR_b_SCP_DCPstvTmpSnsrFA_out_d = true;
        rtb_LeAATR_b_SCP_DCPstvTmpSnsrSNA_out_f = true;
    }

    /* End of Chart: '<S13>/PokeAATR_T_SCP_DCPstvTmpSnsrChrt' */

    /* Merge: '<Root>/Merge_13' incorporates:
     *  SignalConversion generated from: '<S13>/VeAATR_T_SCP_DCPstvTmpSnsr_write'
     * */
    Rte_IrvWrite_PokeAATR_T_SCP_DCPstvTmpSnsr_SCP_DCPstvTemp_Init_write_IRV
        (AATR_ac_B.LeAATR_T_SCP_DCPstvTmpSnsr_out);

    /* Merge: '<Root>/Merge_14' incorporates:
     *  SignalConversion generated from: '<S13>/VeAATR_b_SCP_DCPstvTmpSnsrFA_write'
     * */
    Rte_IrvWrite_PokeAATR_T_SCP_DCPstvTmpSnsr_SCP_DCPstvTempFA_Init_write_IRV
        (rtb_LeAATR_b_SCP_DCPstvTmpSnsrFA_out_d);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S13>/VeAATR_b_SCP_DCPstvTmpSnsrSNA_write'
     * */
    Rte_IrvWrite_PokeAATR_T_SCP_DCPstvTmpSnsr_SCP_DCPstvTempSNA_Init_write_IRV
        (rtb_LeAATR_b_SCP_DCPstvTmpSnsrSNA_out_f);

    /* End of Outputs for SubSystem: '<Root>/PokeAATR_T_SCP_DCPstvTmpSnsr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_AATR_8

FUNC(void, AATR_CODE) PokeAATR_T_SCP_InletTempSnsr(VAR(float32, AUTOMATIC)
    LeAATR_T_SCP_InletTempSnsr, VAR(boolean, AUTOMATIC)
    LeAATR_b_SCP_InletTempSnsrFA)
{

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_LeAATR_b_SCP_InletTempSnsrFA_out;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_LeAATR_b_SCP_InletTempSnsrSNA_out;

#endif

#if !Rte_SysCon_Variant_AATR_8

    UNUSED_PARAMETER(LeAATR_T_SCP_InletTempSnsr);

#endif

#if !Rte_SysCon_Variant_AATR_8

    UNUSED_PARAMETER(LeAATR_b_SCP_InletTempSnsrFA);

#endif

#if Rte_SysCon_Variant_AATR_8

    /* Outputs for Function Call SubSystem: '<Root>/PokeAATR_T_SCP_InletTempSnsr' */
    /* Chart: '<S14>/PokeAATR_T_SCP_InletTempSnsrChrt' incorporates:
     *  SignalConversion generated from: '<S14>/LeAATR_T_SCP_InletTempSnsr'
     *  SignalConversion generated from: '<S14>/LeAATR_b_SCP_InletTempSnsrFA'
     */
    /* Gateway: PokeAATR_T_SCP_InletTempSnsr/PokeAATR_T_SCP_InletTempSnsrChrt */
    /* During: PokeAATR_T_SCP_InletTempSnsr/PokeAATR_T_SCP_InletTempSnsrChrt */
    /* Entry Internal: PokeAATR_T_SCP_InletTempSnsr/PokeAATR_T_SCP_InletTempSnsrChrt */
    /* Transition: '<S1330>:2' */
    if (!LeAATR_b_SCP_InletTempSnsrFA)
    {
        /* Transition: '<S1330>:3' */
        /* Transition: '<S1330>:15' */
        AATR_ac_B.LeAATR_T_SCP_InletTempSnsr_out = LeAATR_T_SCP_InletTempSnsr;
        rtb_LeAATR_b_SCP_InletTempSnsrFA_out = false;
        rtb_LeAATR_b_SCP_InletTempSnsrSNA_out = false;

        /* Transition: '<S1330>:18' */
    }
    else
    {
        /* Transition: '<S1330>:4' */
        rtb_LeAATR_b_SCP_InletTempSnsrFA_out = true;
        rtb_LeAATR_b_SCP_InletTempSnsrSNA_out = true;
    }

    /* End of Chart: '<S14>/PokeAATR_T_SCP_InletTempSnsrChrt' */

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S14>/VeAATR_T_SCP_InletTempSnsr_write'
     * */
    Rte_IrvWrite_PokeAATR_T_SCP_InletTempSnsr_SCP_InletTempSnsr_Init_write_IRV
        (AATR_ac_B.LeAATR_T_SCP_InletTempSnsr_out);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S14>/VeAATR_b_SCP_InletTempSnsrFA_write'
     * */
    Rte_IrvWrite_PokeAATR_T_SCP_InletTempSnsr_SCP_InletTempSnsrFA_Init_write_IRV
        (rtb_LeAATR_b_SCP_InletTempSnsrFA_out);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S14>/VeAATR_b_SCP_InletTempSnsrSNA_write'
     * */
    Rte_IrvWrite_PokeAATR_T_SCP_InletTempSnsr_SCP_InletTempSnsrSNA_Init_write_IRV
        (rtb_LeAATR_b_SCP_InletTempSnsrSNA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeAATR_T_SCP_InletTempSnsr' */
#endif

}

#endif

/* Output function */
FUNC(void, AATR_CODE) PokeAATR_U_CBC_AmbientAirVolt(VAR(float32, AUTOMATIC)
    LeAATR_U_CBC_AmbientAirVolt, VAR(boolean, AUTOMATIC)
    LeAATR_b_CBC_AmbientAirVoltFA)
{
    boolean rtb_LeAATR_b_CBC_AmbientAirVoltFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeAATR_U_CBC_AmbientAirVolt' */
    /* Chart: '<S15>/PokeAATR_U_CBC_AmbientAirVoltChrt' incorporates:
     *  SignalConversion generated from: '<S15>/LeAATR_b_CBC_AmbientAirVoltFA'
     */
    /* Gateway: PokeAATR_U_CBC_AmbientAirVolt/PokeAATR_U_CBC_AmbientAirVoltChrt */
    /* During: PokeAATR_U_CBC_AmbientAirVolt/PokeAATR_U_CBC_AmbientAirVoltChrt */
    /* Entry Internal: PokeAATR_U_CBC_AmbientAirVolt/PokeAATR_U_CBC_AmbientAirVoltChrt */
    /* Transition: '<S1331>:2' */
    if (!LeAATR_b_CBC_AmbientAirVoltFA)
    {
        /* SignalConversion generated from: '<S15>/VeAATR_U_CBC_AmbientAirVolt_write' incorporates:
         *  Merge: '<Root>/Merge_8'
         *  SignalConversion generated from: '<S15>/LeAATR_U_CBC_AmbientAirVolt'
         */
        /* Transition: '<S1331>:3' */
        /* Transition: '<S1331>:15' */
        Rte_IrvWrite_PokeAATR_U_CBC_AmbientAirVolt_CBC_AmbAirTemp_Init_write_IRV
            (LeAATR_U_CBC_AmbientAirVolt);
        rtb_LeAATR_b_CBC_AmbientAirVoltFA_out = false;

        /* Transition: '<S1331>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S15>/VeAATR_U_CBC_AmbientAirVolt_write' incorporates:
         *  Merge: '<Root>/Merge_8'
         */
        /* Transition: '<S1331>:4' */
        Rte_IrvWrite_PokeAATR_U_CBC_AmbientAirVolt_CBC_AmbAirTemp_Init_write_IRV
            (KeAATR_U_CBC_AmbientAirVoltSNA);
        rtb_LeAATR_b_CBC_AmbientAirVoltFA_out = true;
    }

    /* End of Chart: '<S15>/PokeAATR_U_CBC_AmbientAirVoltChrt' */

    /* SignalConversion generated from: '<S15>/PokeAATR_U_CBC_AmbientAirVoltChrt' incorporates:
     *  SignalConversion generated from: '<S15>/VeAATR_b_CBC_AmbientAirVoltFA_write'
     *  SignalConversion generated from: '<S15>/VeAATR_e_CBC_AmbientAirVoltSrc_write'
     */
#if Rte_SysCon_Variant_AATR_8 || Rte_SysCon_Variant_AATR_9

    /* Merge: '<Root>/Merge_9' */
    Rte_IrvWrite_PokeAATR_U_CBC_AmbientAirVolt_CBC_AmbAirTemp_InitFA_write_IRV
        (rtb_LeAATR_b_CBC_AmbientAirVoltFA_out);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S15>/PokeAATR_U_CBC_AmbientAirVoltChrt'
     */
    Rte_IrvWrite_PokeAATR_U_CBC_AmbientAirVolt_CBC_AmbAirTempSrc_Init_write_IRV
        ((TeAATR_e_CBC_AmbientAirVoltSrc)2U);

#endif

    /* End of SignalConversion generated from: '<S15>/PokeAATR_U_CBC_AmbientAirVoltChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeAATR_U_CBC_AmbientAirVolt' */
}

/* Output function */
FUNC(void, AATR_CODE) AATR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/AATR_PwrOff'
     */
    /* Outport: '<Root>/NeAATR_T_AmbAirTempPred_Prev_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeAATR_T_AmbAirTempPred_Prev'
     */
    (void)Rte_Write_NeAATR_T_AmbAirTempPred_Prev_NeAATR_T_AmbAirTempPred_Prev
        (AATR_ac_DW.NeAATR_T_AmbAirTempPred_Prev);

    /* Outport: '<Root>/NeAATR_b_AmbAirTempPred_PrevFA_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeAATR_b_AmbAirTempPred_PrevFA'
     */
    (void)
        Rte_Write_NeAATR_b_AmbAirTempPred_PrevFA_NeAATR_b_AmbAirTempPred_PrevFA
        (AATR_ac_DW.NeAATR_b_AmbAirTempPred_PrevFA);

    /* Outport: '<Root>/NeAATR_Cnt_AmbAirTemp_PerfFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeAATR_Cnt_AmbAirTemp_PerfFlt_MFOP'
     */
    (void)
        Rte_Write_NeAATR_Cnt_AmbAirTemp_PerfFlt_MFOP_NeAATR_Cnt_AmbAirTemp_PerfFlt_MFOP
        (AATR_ac_DW.NeAATR_Cnt_AmbAirTemp_PerfFlt_MFOP);

    /* Outport: '<Root>/NeAATR_Cnt_AmbAirVolt_HiFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeAATR_Cnt_AmbAirVolt_HiFlt_MFOP'
     */
    (void)
        Rte_Write_NeAATR_Cnt_AmbAirVolt_HiFlt_MFOP_NeAATR_Cnt_AmbAirVolt_HiFlt_MFOP
        (AATR_ac_DW.NeAATR_Cnt_AmbAirVolt_HiFlt_MFOP);

    /* Outport: '<Root>/NeAATR_Cnt_AmbAirVolt_LoFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeAATR_Cnt_AmbAirVolt_LoFlt_MFOP'
     */
    (void)
        Rte_Write_NeAATR_Cnt_AmbAirVolt_LoFlt_MFOP_NeAATR_Cnt_AmbAirVolt_LoFlt_MFOP
        (AATR_ac_DW.NeAATR_Cnt_AmbAirVolt_LoFlt_MFOP);

    /* Outport: '<Root>/NeAATR_Cnt_DCPstvTemp_HiFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read'
     */
    (void)
        Rte_Write_NeAATR_Cnt_DCPstvTemp_HiFlt_MFOP_NeAATR_Cnt_DCPstvTemp_HiFlt_MFOP
        (AATR_ac_DW.NeAATR_Cnt_DCPstvTemp_HiFlt_MFOP);

    /* Outport: '<Root>/NeAATR_Cnt_ECM_IntakeTemp_PerfFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read1'
     */
    (void)
        Rte_Write_NeAATR_Cnt_ECM_IntakeTemp_PerfFlt_MFOP_NeAATR_Cnt_ECM_IntakeTemp_PerfFlt_MFOP
        (AATR_ac_DW.NeAATR_Cnt_ECM_IntakeTemp_PerfFlt_MFOP);

    /* Outport: '<Root>/NeAATR_Cnt_SCP_DCNegtvTemp_Flt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read2'
     */
    (void)
        Rte_Write_NeAATR_Cnt_SCP_DCNegtvTemp_Flt_MFOP_NeAATR_Cnt_SCP_DCNegtvTemp_Flt_MFOP
        (AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_Flt_MFOP);

    /* Outport: '<Root>/NeAATR_Cnt_SCP_DCNegtvTemp_HiFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read3'
     */
    (void)
        Rte_Write_NeAATR_Cnt_SCP_DCNegtvTemp_HiFlt_MFOP_NeAATR_Cnt_SCP_DCNegtvTemp_HiFlt_MFOP
        (AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_HiFlt_MFOP);

    /* Outport: '<Root>/NeAATR_Cnt_SCP_DCNegtvTemp_LoFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read4'
     */
    (void)
        Rte_Write_NeAATR_Cnt_SCP_DCNegtvTemp_LoFlt_MFOP_NeAATR_Cnt_SCP_DCNegtvTemp_LoFlt_MFOP
        (AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_LoFlt_MFOP);

    /* Outport: '<Root>/NeAATR_Cnt_SCP_DCNegtvTemp_PerfFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read5'
     */
    (void)
        Rte_Write_NeAATR_Cnt_SCP_DCNegtvTemp_PerfFlt_MFOP_NeAATR_Cnt_SCP_DCNegtvTemp_PerfFlt_MFOP
        (AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_PerfFlt_MFOP);

    /* Outport: '<Root>/NeAATR_Cnt_SCP_DCPstvTemp_Flt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read6'
     */
    (void)
        Rte_Write_NeAATR_Cnt_SCP_DCPstvTemp_Flt_MFOP_NeAATR_Cnt_SCP_DCPstvTemp_Flt_MFOP
        (AATR_ac_DW.NeAATR_Cnt_SCP_DCPstvTemp_Flt_MFOP);

    /* Outport: '<Root>/NeAATR_Cnt_SCP_DCPstvTemp_LoFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read7'
     */
    (void)
        Rte_Write_NeAATR_Cnt_SCP_DCPstvTemp_LoFlt_MFOP_NeAATR_Cnt_SCP_DCPstvTemp_LoFlt_MFOP
        (AATR_ac_DW.NeAATR_Cnt_SCP_DCPstvTemp_LoFlt_MFOP);

    /* Outport: '<Root>/NeAATR_Cnt_SCP_DCPstvTemp_PerfFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read8'
     */
    (void)
        Rte_Write_NeAATR_Cnt_SCP_DCPstvTemp_PerfFlt_MFOP_NeAATR_Cnt_SCP_DCPstvTemp_PerfFlt_MFOP
        (AATR_ac_DW.NeAATR_Cnt_SCP_DCPstvTemp_PerfFlt_MFOP);

    /* Outport: '<Root>/NeAATR_Cnt_SCP_InletTemp_Flt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read9'
     */
    (void)
        Rte_Write_NeAATR_Cnt_SCP_InletTemp_Flt_MFOP_NeAATR_Cnt_SCP_InletTemp_Flt_MFOP
        (AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_Flt_MFOP);

    /* Outport: '<Root>/NeAATR_Cnt_SCP_InletTemp_HiFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read10'
     */
    (void)
        Rte_Write_NeAATR_Cnt_SCP_InletTemp_HiFlt_MFOP_NeAATR_Cnt_SCP_InletTemp_HiFlt_MFOP
        (AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_HiFlt_MFOP);

    /* Outport: '<Root>/NeAATR_Cnt_SCP_InletTemp_LoFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read11'
     */
    (void)
        Rte_Write_NeAATR_Cnt_SCP_InletTemp_LoFlt_MFOP_NeAATR_Cnt_SCP_InletTemp_LoFlt_MFOP
        (AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_LoFlt_MFOP);

    /* Outport: '<Root>/NeAATR_Cnt_SCP_InletTemp_PerfFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read12'
     */
    (void)
        Rte_Write_NeAATR_Cnt_SCP_InletTemp_PerfFlt_MFOP_NeAATR_Cnt_SCP_InletTemp_PerfFlt_MFOP
        (AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_PerfFlt_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, AATR_CODE) AATR_PwrOn(void)
{

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_OutportBufferForSCP_AmbientTempFA_In;

#endif

#if Rte_SysCon_Variant_AATR_8

    float32 rtb_OutportBufferForSCP_AmbientTemp_Init;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_OutportBufferForSCP_DCNegtvTempFA_In;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_OutportBufferForSCP_DCNegtvTempSNA_I;

#endif

#if Rte_SysCon_Variant_AATR_8

    float32 rtb_OutportBufferForSCP_DCNegtvTemp_Init;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_OutportBufferForSCP_DCPstvTempFA_Ini;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_OutportBufferForSCP_DCPstvTempSNA_In;

#endif

#if Rte_SysCon_Variant_AATR_8

    float32 rtb_OutportBufferForSCP_DCPstvTemp_Init_;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_OutportBufferForSCP_InletTempSnsrFA_;

#endif

#if Rte_SysCon_Variant_AATR_8

    boolean rtb_OutportBufferForSCP_InletTempSnsrSNA;

#endif

#if Rte_SysCon_Variant_AATR_8

    float32 rtb_OutportBufferForSCP_InletTempSnsr_In;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/AATR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S1257>/NeAATR_Cnt_SCP_InletTemp_PerfFlt_MSOP' incorporates:
     *  Inport: '<Root>/NeAATR_Cnt_SCP_InletTemp_PerfFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeAATR_Cnt_SCP_InletTemp_PerfFlt_MFOP_Rx_NeAATR_Cnt_SCP_InletTemp_PerfFlt_MFOP
        (&AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_PerfFlt_MFOP);

    /* DataStoreWrite: '<S1257>/NeAATR_Cnt_SCP_InletTemp_LoFlt_MSOP' incorporates:
     *  Inport: '<Root>/NeAATR_Cnt_SCP_InletTemp_LoFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeAATR_Cnt_SCP_InletTemp_LoFlt_MFOP_Rx_NeAATR_Cnt_SCP_InletTemp_LoFlt_MFOP
        (&AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_LoFlt_MFOP);

    /* DataStoreWrite: '<S1257>/NeAATR_Cnt_SCP_InletTemp_HiFlt_MSOP' incorporates:
     *  Inport: '<Root>/NeAATR_Cnt_SCP_InletTemp_HiFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeAATR_Cnt_SCP_InletTemp_HiFlt_MFOP_Rx_NeAATR_Cnt_SCP_InletTemp_HiFlt_MFOP
        (&AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_HiFlt_MFOP);

    /* DataStoreWrite: '<S1257>/NeAATR_Cnt_SCP_InletTemp_Flt_MSOP' incorporates:
     *  Inport: '<Root>/NeAATR_Cnt_SCP_InletTemp_Flt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeAATR_Cnt_SCP_InletTemp_Flt_MFOP_Rx_NeAATR_Cnt_SCP_InletTemp_Flt_MFOP
        (&AATR_ac_DW.NeAATR_Cnt_SCP_InletTemp_Flt_MFOP);

    /* DataStoreWrite: '<S1257>/NeAATR_Cnt_SCP_DCPstvTemp_PerfFlt_MSOP' incorporates:
     *  Inport: '<Root>/NeAATR_Cnt_SCP_DCPstvTemp_PerfFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeAATR_Cnt_SCP_DCPstvTemp_PerfFlt_MFOP_Rx_NeAATR_Cnt_SCP_DCPstvTemp_PerfFlt_MFOP
        (&AATR_ac_DW.NeAATR_Cnt_SCP_DCPstvTemp_PerfFlt_MFOP);

    /* DataStoreWrite: '<S1257>/NeAATR_Cnt_SCP_DCPstvTemp_LoFlt_MSOP' incorporates:
     *  Inport: '<Root>/NeAATR_Cnt_SCP_DCPstvTemp_LoFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeAATR_Cnt_SCP_DCPstvTemp_LoFlt_MFOP_Rx_NeAATR_Cnt_SCP_DCPstvTemp_LoFlt_MFOP
        (&AATR_ac_DW.NeAATR_Cnt_SCP_DCPstvTemp_LoFlt_MFOP);

    /* DataStoreWrite: '<S1257>/NeAATR_Cnt_SCP_DCPstvTemp_Flt_MSOP' incorporates:
     *  Inport: '<Root>/NeAATR_Cnt_SCP_DCPstvTemp_Flt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeAATR_Cnt_SCP_DCPstvTemp_Flt_MFOP_Rx_NeAATR_Cnt_SCP_DCPstvTemp_Flt_MFOP
        (&AATR_ac_DW.NeAATR_Cnt_SCP_DCPstvTemp_Flt_MFOP);

    /* DataStoreWrite: '<S1257>/NeAATR_Cnt_SCP_DCNegtvTemp_PerfFlt_MSOP' incorporates:
     *  Inport: '<Root>/NeAATR_Cnt_SCP_DCNegtvTemp_PerfFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeAATR_Cnt_SCP_DCNegtvTemp_PerfFlt_MFOP_Rx_NeAATR_Cnt_SCP_DCNegtvTemp_PerfFlt_MFOP
        (&AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_PerfFlt_MFOP);

    /* DataStoreWrite: '<S1257>/NeAATR_Cnt_SCP_DCNegtvTemp_LoFlt_MSOP' incorporates:
     *  Inport: '<Root>/NeAATR_Cnt_SCP_DCNegtvTemp_LoFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeAATR_Cnt_SCP_DCNegtvTemp_LoFlt_MFOP_Rx_NeAATR_Cnt_SCP_DCNegtvTemp_LoFlt_MFOP
        (&AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_LoFlt_MFOP);

    /* DataStoreWrite: '<S1257>/NeAATR_Cnt_SCP_DCNegtvTemp_HiFlt_MSOP' incorporates:
     *  Inport: '<Root>/NeAATR_Cnt_SCP_DCNegtvTemp_HiFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeAATR_Cnt_SCP_DCNegtvTemp_HiFlt_MFOP_Rx_NeAATR_Cnt_SCP_DCNegtvTemp_HiFlt_MFOP
        (&AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_HiFlt_MFOP);

    /* DataStoreWrite: '<S1257>/NeAATR_Cnt_SCP_DCNegtvTemp_Flt_MSOP' incorporates:
     *  Inport: '<Root>/NeAATR_Cnt_SCP_DCNegtvTemp_Flt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeAATR_Cnt_SCP_DCNegtvTemp_Flt_MFOP_Rx_NeAATR_Cnt_SCP_DCNegtvTemp_Flt_MFOP
        (&AATR_ac_DW.NeAATR_Cnt_SCP_DCNegtvTemp_Flt_MFOP);

    /* DataStoreWrite: '<S1257>/NeAATR_Cnt_ECM_IntakeTemp_PerfFlt_MSOP' incorporates:
     *  Inport: '<Root>/NeAATR_Cnt_ECM_IntakeTemp_PerfFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeAATR_Cnt_ECM_IntakeTemp_PerfFlt_MFOP_Rx_NeAATR_Cnt_ECM_IntakeTemp_PerfFlt_MFOP
        (&AATR_ac_DW.NeAATR_Cnt_ECM_IntakeTemp_PerfFlt_MFOP);

    /* DataStoreWrite: '<S1257>/NeAATR_Cnt_DCPstvTemp_HiFlt_MSOP' incorporates:
     *  Inport: '<Root>/NeAATR_Cnt_DCPstvTemp_HiFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeAATR_Cnt_DCPstvTemp_HiFlt_MFOP_Rx_NeAATR_Cnt_DCPstvTemp_HiFlt_MFOP
        (&AATR_ac_DW.NeAATR_Cnt_DCPstvTemp_HiFlt_MFOP);

    /* DataStoreWrite: '<S1257>/NeAATR_Cnt_AmbAirVolt_LoFlt_MFOP' incorporates:
     *  Inport: '<Root>/NeAATR_Cnt_AmbAirVolt_LoFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeAATR_Cnt_AmbAirVolt_LoFlt_MFOP_Rx_NeAATR_Cnt_AmbAirVolt_LoFlt_MFOP
        (&AATR_ac_DW.NeAATR_Cnt_AmbAirVolt_LoFlt_MFOP);

    /* DataStoreWrite: '<S1257>/NeAATR_Cnt_AmbAirVolt_HiFlt_MFOP' incorporates:
     *  Inport: '<Root>/NeAATR_Cnt_AmbAirVolt_HiFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeAATR_Cnt_AmbAirVolt_HiFlt_MFOP_Rx_NeAATR_Cnt_AmbAirVolt_HiFlt_MFOP
        (&AATR_ac_DW.NeAATR_Cnt_AmbAirVolt_HiFlt_MFOP);

    /* DataStoreWrite: '<S1257>/NeAATR_Cnt_AmbAirTemp_PerfFlt_MFOP' incorporates:
     *  Inport: '<Root>/NeAATR_Cnt_AmbAirTemp_PerfFlt_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeAATR_Cnt_AmbAirTemp_PerfFlt_MFOP_Rx_NeAATR_Cnt_AmbAirTemp_PerfFlt_MFOP
        (&AATR_ac_DW.NeAATR_Cnt_AmbAirTemp_PerfFlt_MFOP);

    /* DataStoreWrite: '<S1257>/NeAATR_b_AmbAirTempPred_PrevFA' incorporates:
     *  Inport: '<Root>/NeAATR_b_AmbAirTempPred_PrevFA_PM_In'
     */
    (void)
        Rte_Read_NeAATR_b_AmbAirTempPred_PrevFA_Rx_NeAATR_b_AmbAirTempPred_PrevFA
        (&AATR_ac_DW.NeAATR_b_AmbAirTempPred_PrevFA);

    /* DataStoreWrite: '<S1257>/NeAATR_T_AmbAirTempPred_Prev' incorporates:
     *  Inport: '<Root>/NeAATR_T_AmbAirTempPred_Prev_PM_In'
     */
    (void)Rte_Read_NeAATR_T_AmbAirTempPred_Prev_Rx_NeAATR_T_AmbAirTempPred_Prev(
        &AATR_ac_DW.NeAATR_T_AmbAirTempPred_Prev);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/ProcessOut_Init'
     */
    /* SignalConversion generated from: '<S1258>/EstAmbAirTemp_Init' incorporates:
     *  Constant: '<S1284>/Calib'
     *  Constant: '<S1294>/Calib'
     *  DataTypeConversion: '<S1281>/DataTypeConversion'
     *  SignalConversion generated from: '<S1258>/EstAmbAirTempFA_Init'
     */
#if Rte_SysCon_Variant_AATR_8

    /* Outputs for Function Call SubSystem: '<S3>/AATI_AmbTemp_InitFUNC' */
    /* SignalConversion generated from: '<S1256>/SCP_AmbientTemp_Init' incorporates:
     *  Constant: '<S1272>/Calib'
     */
    AATR_ac_B.OutportBufferForSCP_AmbientTemp_Init =
        KeAATR_T_SCP_AmbientTempSnsr_Init;

    /* SignalConversion generated from: '<S1256>/SCP_AmbientTempFA_Init' incorporates:
     *  Constant: '<S1276>/Calib'
     */
    AATR_ac_B.OutportBufferForSCP_AmbientTempFA_Init =
        KeAATR_b_SCP_AmbientTempFA_Init;

    /* SignalConversion generated from: '<S1256>/SCP_InletTempSnsr_Init' incorporates:
     *  Constant: '<S1275>/Calib'
     */
    AATR_ac_B.OutportBufferForSCP_InletTempSnsr_Init =
        KeAATR_T_SCP_InletTempSnsr_Init;

    /* Logic: '<S1266>/AND' incorporates:
     *  Constant: '<S1279>/Calib'
     */
    AATR_ac_B.AND_n = KeAATR_b_SCP_InletTempSnsrFA_Init;

    /* Logic: '<S1267>/AND' incorporates:
     *  Constant: '<S1279>/Calib'
     */
    AATR_ac_B.AND_b = KeAATR_b_SCP_InletTempSnsrFA_Init;

    /* SignalConversion generated from: '<S1256>/SCP_DCPstvTemp_Init' incorporates:
     *  Constant: '<S1274>/Calib'
     */
    AATR_ac_B.OutportBufferForSCP_DCPstvTemp_Init =
        KeAATR_T_SCP_DCPstvTempSnsr_Init;

    /* Logic: '<S1268>/AND' incorporates:
     *  Constant: '<S1278>/Calib'
     */
    AATR_ac_B.AND_p = KeAATR_b_SCP_DCPstvTempSnsrFA_Init;

    /* Logic: '<S1269>/AND' incorporates:
     *  Constant: '<S1278>/Calib'
     */
    AATR_ac_B.AND_g = KeAATR_b_SCP_DCPstvTempSnsrFA_Init;

    /* SignalConversion generated from: '<S1256>/SCP_DCNegtvTemp_Init' incorporates:
     *  Constant: '<S1273>/Calib'
     */
    AATR_ac_B.OutportBufferForSCP_DCNegtvTemp_Init =
        KeAATR_T_SCP_DCNegtvTempSnsr_Init;

    /* Logic: '<S1270>/AND' incorporates:
     *  Constant: '<S1277>/Calib'
     */
    AATR_ac_B.AND_d = KeAATR_b_SCP_DCNegtvTempSnsrFA_Init;

    /* Logic: '<S1271>/AND' incorporates:
     *  Constant: '<S1277>/Calib'
     */
    AATR_ac_B.AND_p5 = KeAATR_b_SCP_DCNegtvTempSnsrFA_Init;

    /* End of Outputs for SubSystem: '<S3>/AATI_AmbTemp_InitFUNC' */

    /* Outputs for Function Call SubSystem: '<S3>/AATC_Init_Data' */
    /* DataStoreRead: '<S1254>/Data Store Read' */
    VeAATC_T_AmbAirTemp_Saved = AATR_ac_DW.NeAATR_T_AmbAirTempPred_Prev;

    /* DataStoreRead: '<S1254>/Data Store Read2' */
    VeAATC_b_AmbAirTempFA_Saved = AATR_ac_DW.NeAATR_b_AmbAirTempPred_PrevFA;

    /* End of Outputs for SubSystem: '<S3>/AATC_Init_Data' */
    AATR_ac_B.Calib = KeAATR_T_EstAmbAirTemp_Init;

    /* SignalConversion generated from: '<S1258>/EstAmbAirTemp_Init' incorporates:
     *  Constant: '<S1284>/Calib'
     */
    AATR_ac_B.OutportBufferForEstAmbAirTemp_Init = AATR_ac_B.Calib;
    AATR_ac_B.Calib_a = KeAATR_b_EstAmbAirTempFA_Init;

    /* SignalConversion generated from: '<S1258>/EstAmbAirTempFA_Init' incorporates:
     *  Constant: '<S1294>/Calib'
     */
    AATR_ac_B.OutportBufferForEstAmbAirTempFA_Init = AATR_ac_B.Calib_a;

    /* VariantMerge generated from: '<S1258>/Variant Source2' incorporates:
     *  Constant: '<S1304>/Calib'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Vari_ijv =
        KeAATR_e_EstAmbAirTempSource_Init;

#endif

    /* End of SignalConversion generated from: '<S1258>/EstAmbAirTemp_Init' */

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/AATI_AmbTemp_Init'
     */
    /* SignalConversion generated from: '<S1255>/ECM_AmbAirTemp_Init' incorporates:
     *  Constant: '<S1261>/Calib'
     */
    AATR_ac_B.OutportBufferForECM_AmbAirTemp_Init = KeAATR_T_ECM_AmbAirTempInit;

    /* SignalConversion generated from: '<S1255>/ECM_AmbAirTemp_InitFA' incorporates:
     *  Constant: '<S1264>/Calib'
     */
    AATR_ac_B.OutportBufferForECM_AmbAirTemp_InitFA =
        KeAATR_b_ECM_AmbAirTempInitFA;

    /* SignalConversion generated from: '<S1255>/CBC_AmbAirTemp_Init' incorporates:
     *  Constant: '<S1262>/Calib'
     */
    AATR_ac_B.OutportBufferForCBC_AmbAirTemp_Init = KeAATR_U_CBC_AmbAirVoltInit;

    /* SignalConversion generated from: '<S1255>/CBC_AmbAirTemp_InitFA' incorporates:
     *  Constant: '<S1263>/Calib'
     */
    AATR_ac_B.OutportBufferForCBC_AmbAirTemp_InitFA =
        KeAATR_b_CBC_AmbAirVoltInitFA;

    /* SignalConversion generated from: '<S1255>/CBC_AmbAirTempSrc_Init' incorporates:
     *  Constant: '<S1265>/Calib'
     */
    AATR_ac_B.OutportBufferForCBC_AmbAirTempSrc_Init =
        KeAATR_e_CBC_AmbientAirVoltSrc_Init;

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/ProcessOut_Init'
     */
    /* SignalConversion generated from: '<S1258>/Variant Source2' incorporates:
     *  Constant: '<S1285>/Calib'
     *  Constant: '<S1288>/Calib'
     */
#if !Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S1258>/Variant Source2' incorporates:
     *  Constant: '<S1282>/Constant'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Vari_ijv = CeAATR_e_AmbAirTemp_ECM;
    AATR_ac_B.Calib_b = KeAATR_T_SCP_AmbTemp_NF;

#endif

    /* End of SignalConversion generated from: '<S1258>/Variant Source2' */

    /* SignalConversion generated from: '<S1258>/CBC_AmbAirTempRaw_Init' incorporates:
     *  Constant: '<S1283>/Calib'
     */
    AATR_ac_B.OutportBufferForCBC_AmbAirTempRaw_Init =
        KeAATR_T_CBC_AmbAirTempRaw_Init;

    /* SignalConversion generated from: '<S1258>/CBC_AmbAirVoltRaw_Init' incorporates:
     *  Constant: '<S1293>/Calib'
     */
    AATR_ac_B.OutportBufferForCBC_AmbAirVoltRaw_Init =
        KeAATR_U_CBC_AmbAirVoltRaw_Init;

    /* SignalConversion generated from: '<S1258>/Variant Source4' incorporates:
     *  Constant: '<S1286>/Calib'
     *  Constant: '<S1287>/Calib'
     *  Constant: '<S1291>/Calib'
     */
#if Rte_SysCon_Variant_AATR_8

    AATR_ac_B.Calib_ne = KeAATR_T_SCP_AmbientTempSnsr_Init_out;

    /* VariantMerge generated from: '<S1258>/Variant Source4' incorporates:
     *  Constant: '<S1287>/Calib'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Variant_ = AATR_ac_B.Calib_ne;
    AATR_ac_B.Calib_ne = KeAATR_T_SCP_InletTempSnsr_Init_out;

#else

    /* VariantMerge generated from: '<S1258>/Variant Source4' incorporates:
     *  SignalConversion generated from: '<S1258>/Variant Source4'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Variant_ = AATR_ac_B.Calib_b;

#endif

    /* End of SignalConversion generated from: '<S1258>/Variant Source4' */

    /* SignalConversion generated from: '<S1258>/Variant Source5' incorporates:
     *  Constant: '<S1288>/Calib'
     *  Constant: '<S1292>/Calib'
     */
#if Rte_SysCon_Variant_AATR_8

    /* VariantMerge generated from: '<S1258>/Variant Source5' */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varian_h = AATR_ac_B.Calib_ne;

#else

    AATR_ac_B.Calib_b = KeAATR_T_SCP_InletTemp_NF;

#endif

    /* End of SignalConversion generated from: '<S1258>/Variant Source5' */

    /* SignalConversion generated from: '<S1258>/Variant Source6' incorporates:
     *  Constant: '<S1288>/Calib'
     *  Constant: '<S1290>/Calib'
     *  Constant: '<S1298>/Calib'
     *  Constant: '<S1299>/Calib'
     *  Constant: '<S1302>/Calib'
     *  Constant: '<S1303>/Calib'
     *  SignalConversion generated from: '<S1258>/Variant Source5'
     */
#if Rte_SysCon_Variant_AATR_8

    AATR_ac_B.Calib_p4 = KeAATR_b_SCP_InletTempSnsrFA_Init_out;

    /* VariantMerge generated from: '<S1258>/Variant Source6' incorporates:
     *  Constant: '<S1298>/Calib'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varian_j = AATR_ac_B.Calib_p4;

#else

    /* VariantMerge generated from: '<S1258>/Variant Source5' incorporates:
     *  SignalConversion generated from: '<S1258>/Variant Source5'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varian_h = AATR_ac_B.Calib_b;
    AATR_ac_B.Calib_nb = KeAATR_b_SCP_InletTempFA_NF;

    /* VariantMerge generated from: '<S1258>/Variant Source6' incorporates:
     *  Constant: '<S1299>/Calib'
     *  Constant: '<S1302>/Calib'
     *  SignalConversion generated from: '<S1258>/Variant Source6'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varian_j = AATR_ac_B.Calib_nb;
    AATR_ac_B.Calib_b = KeAATR_T_SCP_DCPstvTemp_NF;

#endif

    /* End of SignalConversion generated from: '<S1258>/Variant Source6' */

    /* SignalConversion generated from: '<S1258>/Variant Source7' incorporates:
     *  Constant: '<S1287>/Calib'
     *  Constant: '<S1288>/Calib'
     *  Constant: '<S1289>/Calib'
     *  Constant: '<S1298>/Calib'
     *  Constant: '<S1299>/Calib'
     *  Constant: '<S1300>/Calib'
     *  Constant: '<S1301>/Calib'
     *  SignalConversion generated from: '<S1258>/Variant Source8'
     * */
#if Rte_SysCon_Variant_AATR_8

    AATR_ac_B.Calib_ne = KeAATR_T_SCP_DCPstvTempSnsr_Init_out;

    /* VariantMerge generated from: '<S1258>/Variant Source7' incorporates:
     *  Constant: '<S1287>/Calib'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varian_p = AATR_ac_B.Calib_ne;
    AATR_ac_B.Calib_nb = KeAATR_b_SCP_DCPstvTempSnsrFA_Init_out;

    /* VariantMerge generated from: '<S1258>/Variant Source8' incorporates:
     *  Constant: '<S1299>/Calib'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varian_o = AATR_ac_B.Calib_nb;

#else

    /* VariantMerge generated from: '<S1258>/Variant Source7' incorporates:
     *  SignalConversion generated from: '<S1258>/Variant Source7'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varian_p = AATR_ac_B.Calib_b;
    AATR_ac_B.Calib_p4 = KeAATR_b_SCP_DCPstvTempFA_NF;

    /* VariantMerge generated from: '<S1258>/Variant Source8' incorporates:
     *  Constant: '<S1298>/Calib'
     *  Constant: '<S1300>/Calib'
     *  SignalConversion generated from: '<S1258>/Variant Source8'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varian_o = AATR_ac_B.Calib_p4;
    AATR_ac_B.Calib_b = KeAATR_T_SCP_DCNegtvTemp_NF;

#endif

    /* End of SignalConversion generated from: '<S1258>/Variant Source7' */

    /* SignalConversion generated from: '<S1258>/Variant Source9' incorporates:
     *  Constant: '<S1287>/Calib'
     *  Constant: '<S1298>/Calib'
     *  Constant: '<S1299>/Calib'
     *  SignalConversion generated from: '<S1258>/Variant Source10'
     * */
#if Rte_SysCon_Variant_AATR_8

    AATR_ac_B.Calib_ne = KeAATR_T_SCP_DCNegtvTempSnsr_Init_out;

    /* VariantMerge generated from: '<S1258>/Variant Source9' incorporates:
     *  Constant: '<S1287>/Calib'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varian_m = AATR_ac_B.Calib_ne;
    AATR_ac_B.Calib_nb = KeAATR_b_SCP_DCNegtvTempSnsrFA_Init_out;

    /* VariantMerge generated from: '<S1258>/Variant Source10' incorporates:
     *  Constant: '<S1299>/Calib'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varian_e = AATR_ac_B.Calib_nb;

#else

    /* VariantMerge generated from: '<S1258>/Variant Source9' incorporates:
     *  SignalConversion generated from: '<S1258>/Variant Source9'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varian_m = AATR_ac_B.Calib_b;
    AATR_ac_B.Calib_p4 = KeAATR_b_SCP_DCNegtvTempFA_NF;

    /* VariantMerge generated from: '<S1258>/Variant Source10' incorporates:
     *  Constant: '<S1298>/Calib'
     *  SignalConversion generated from: '<S1258>/Variant Source10'
     */
    AATR_ac_B.VariantMerge_For_Variant_Source_Varian_e = AATR_ac_B.Calib_p4;

#endif

    /* End of SignalConversion generated from: '<S1258>/Variant Source9' */

    /* SignalConversion generated from: '<S1258>/VeAATR_b_IUMPR_CBCAmbAirTemp_Perf_Init' incorporates:
     *  Constant: '<S1295>/Calib'
     *  Constant: '<S1296>/Calib'
     *  Constant: '<S1297>/Calib'
     *  SignalConversion generated from: '<S1258>/VeAATR_b_IUMPR_SCP_AmbTemp_Perf_Init'
     *  SignalConversion generated from: '<S1258>/VeAATR_b_IUMPR_SCP_InletTemp_Perf_Init'
     */
#if Rte_SysCon_Variant_AATR_9

    AATR_ac_B.Calib_n1 = KeAATR_b_IUMPR_CBCAATPerf_NF;

    /* SignalConversion generated from: '<S1258>/VeAATR_b_IUMPR_CBCAmbAirTemp_Perf_Init' incorporates:
     *  Constant: '<S1295>/Calib'
     */
    AATR_ac_B.OutportBufferForVeAATR_b_IUMPR_CBCAmbAir = AATR_ac_B.Calib_n1;
    AATR_ac_B.Calib_c = KeAATR_b_IUMPR_SCPAATPerf_NF;

    /* SignalConversion generated from: '<S1258>/VeAATR_b_IUMPR_SCP_AmbTemp_Perf_Init' incorporates:
     *  Constant: '<S1296>/Calib'
     */
    AATR_ac_B.OutportBufferForVeAATR_b_IUMPR_SCP_AmbTe = AATR_ac_B.Calib_c;
    AATR_ac_B.Calib_g = KeAATR_b_IUMPR_SCPInletPerf_NF;

    /* SignalConversion generated from: '<S1258>/VeAATR_b_IUMPR_SCP_InletTemp_Perf_Init' incorporates:
     *  Constant: '<S1297>/Calib'
     */
    AATR_ac_B.OutportBufferForVeAATR_b_IUMPR_SCP_Inlet = AATR_ac_B.Calib_g;

#endif

    /* End of SignalConversion generated from: '<S1258>/VeAATR_b_IUMPR_CBCAmbAirTemp_Perf_Init' */

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_AAT_SnsrCktHi' incorporates:
     *  Constant: '<S1305>/Constant'
     */
    AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_AAT_Sn = AATR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_AAT_SnsrCktLo' incorporates:
     *  Constant: '<S1306>/Constant'
     */
    AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_AAT__o =
        AATR_ac_ConstB.Constant_f;

    /* SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BatChaCouTemSenACirHig' incorporates:
     *  Constant: '<S1312>/Constant'
     */
    AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_BatCha =
        AATR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BatChaCouTemSenACirLow' incorporates:
     *  Constant: '<S1313>/Constant'
     */
    AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_BatC_e =
        AATR_ac_ConstB.Constant_m;

    /* SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BatChaCouTemSnsrCkt' incorporates:
     *  Constant: '<S1314>/Constant'
     */
    AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_BatC_m =
        AATR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktHi' incorporates:
     *  Constant: '<S1315>/Constant'
     */
    AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_BattCh =
        AATR_ac_ConstB.Constant_i;

    /* SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktLo' incorporates:
     *  Constant: '<S1316>/Constant'
     */
    AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_n =
        AATR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCkt' incorporates:
     *  Constant: '<S1317>/Constant'
     */
    AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_c =
        AATR_ac_ConstB.Constant_df;

    /* SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktHi' incorporates:
     *  Constant: '<S1318>/Constant'
     */
    AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_i =
        AATR_ac_ConstB.Constant_b;

    /* SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktLo' incorporates:
     *  Constant: '<S1319>/Constant'
     */
    AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_j =
        AATR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCkt' incorporates:
     *  Constant: '<S1307>/Constant'
     */
    AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_l =
        AATR_ac_ConstB.Constant_e;

    /* SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_AAT_SnsrPerf' incorporates:
     *  Constant: '<S1308>/Constant'
     */
    AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_AAT__n =
        AATR_ac_ConstB.Constant_md;

    /* SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BatChaCouTemSenACirRan' incorporates:
     *  Constant: '<S1309>/Constant'
     */
    AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_BatC_c =
        AATR_ac_ConstB.Constant_c;

    /* SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktPerf' incorporates:
     *  Constant: '<S1310>/Constant'
     */
    AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_f =
        AATR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktPerf' incorporates:
     *  Constant: '<S1311>/Constant'
     */
    AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_a =
        AATR_ac_ConstB.Constant_kl;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeAATR_T_CBC_AmbAirTempRaw' incorporates:
     *  SignalConversion generated from: '<S3>/CBC_AmbAirTempRaw_Init'
     */
    (void)Rte_Write_VeAATR_T_CBC_AmbAirTempRaw_Value
        (AATR_ac_B.OutportBufferForCBC_AmbAirTempRaw_Init);

    /* Outport: '<Root>/VeAATR_U_CBC_AmbAirVoltRaw' incorporates:
     *  SignalConversion generated from: '<S3>/CBC_AmbAirVoltRaw_Init'
     */
    (void)Rte_Write_VeAATR_U_CBC_AmbAirVoltRaw_Value
        (AATR_ac_B.OutportBufferForCBC_AmbAirVoltRaw_Init);

    /* SignalConversion generated from: '<S3>/EstAmbAirTempFA_Init' */
#if Rte_SysCon_Variant_AATR_8

    /* Outport: '<Root>/VeAATR_b_EstAmbAirTempFA' */
    (void)Rte_Write_VeAATR_b_EstAmbAirTempFA_Value
        (AATR_ac_B.OutportBufferForEstAmbAirTempFA_Init);

#endif

    /* End of SignalConversion generated from: '<S3>/EstAmbAirTempFA_Init' */

    /* Outport: '<Root>/VeAATR_e_EstAmbAirTempSource' incorporates:
     *  SignalConversion generated from: '<S3>/EstAmbAirTempSource_Init'
     *  VariantMerge generated from: '<S1258>/Variant Source2'
     */
    (void)Rte_Write_VeAATR_e_EstAmbAirTempSource_Value
        (AATR_ac_B.VariantMerge_For_Variant_Source_Vari_ijv);

    /* SignalConversion generated from: '<S3>/EstAmbAirTemp_Init' */
#if Rte_SysCon_Variant_AATR_8

    /* Outport: '<Root>/VeAATR_T_EstAmbAirTemp' */
    (void)Rte_Write_VeAATR_T_EstAmbAirTemp_Value
        (AATR_ac_B.OutportBufferForEstAmbAirTemp_Init);

#endif

    /* End of SignalConversion generated from: '<S3>/EstAmbAirTemp_Init' */

    /* Outport: '<Root>/VeAATR_T_SCP_AmbientTemp' incorporates:
     *  SignalConversion generated from: '<S3>/ProcessOut_Init__SCP_AmbientTemp_Init'
     */
    (void)Rte_Write_VeAATR_T_SCP_AmbientTemp_Value
        (AATR_ac_B.VariantMerge_For_Variant_Source_Variant_);

    /* Outport: '<Root>/VeAATR_b_SCP_DCNegtvTemp_FA' incorporates:
     *  SignalConversion generated from: '<S3>/ProcessOut_Init__SCP_DCNegtvTempFA_Init'
     */
    (void)Rte_Write_VeAATR_b_SCP_DCNegtvTemp_FA_Value
        (AATR_ac_B.VariantMerge_For_Variant_Source_Varian_e);

    /* Outport: '<Root>/VeAATR_T_SCP_DCNegtvTemp' incorporates:
     *  SignalConversion generated from: '<S3>/ProcessOut_Init__SCP_DCNegtvTemp_Init'
     */
    (void)Rte_Write_VeAATR_T_SCP_DCNegtvTemp_Value
        (AATR_ac_B.VariantMerge_For_Variant_Source_Varian_m);

    /* Outport: '<Root>/VeAATR_b_SCP_DCPstvTemp_FA' incorporates:
     *  SignalConversion generated from: '<S3>/ProcessOut_Init__SCP_DCPstvTempFA_Init'
     */
    (void)Rte_Write_VeAATR_b_SCP_DCPstvTemp_FA_Value
        (AATR_ac_B.VariantMerge_For_Variant_Source_Varian_o);

    /* Outport: '<Root>/VeAATR_T_SCP_DCPstvTemp' incorporates:
     *  SignalConversion generated from: '<S3>/ProcessOut_Init__SCP_DCPstvTemp_Init'
     */
    (void)Rte_Write_VeAATR_T_SCP_DCPstvTemp_Value
        (AATR_ac_B.VariantMerge_For_Variant_Source_Varian_p);

    /* Outport: '<Root>/VeAATR_b_SCP_InletTemp_FA' incorporates:
     *  SignalConversion generated from: '<S3>/ProcessOut_Init__SCP_InletTempSnsrFA_Init'
     */
    (void)Rte_Write_VeAATR_b_SCP_InletTemp_FA_Value
        (AATR_ac_B.VariantMerge_For_Variant_Source_Varian_j);

    /* Outport: '<Root>/VeAATR_T_SCP_InletTemp' incorporates:
     *  SignalConversion generated from: '<S3>/ProcessOut_Init__SCP_InletTempSnsr_Init'
     */
    (void)Rte_Write_VeAATR_T_SCP_InletTemp_Value
        (AATR_ac_B.VariantMerge_For_Variant_Source_Varian_h);

    /* Outport: '<Root>/VeAATR_e_FaultSts_AAT_SnsrCktHi' incorporates:
     *  SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_AAT_SnsrCktHi'
     *  SignalConversion generated from: '<S3>/R_VeAATR_e_FaultSts_AAT_SnsrCktHi'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_AAT_SnsrCktHi_Value
        (AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_AAT_Sn);

    /* Outport: '<Root>/VeAATR_e_FaultSts_AAT_SnsrCktLo' incorporates:
     *  SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_AAT_SnsrCktLo'
     *  SignalConversion generated from: '<S3>/R_VeAATR_e_FaultSts_AAT_SnsrCktLo'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_AAT_SnsrCktLo_Value
        (AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_AAT__o);

    /* Outport: '<Root>/VeAATR_e_FaultSts_AAT_SnsrPerf' incorporates:
     *  SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_AAT_SnsrPerf'
     *  SignalConversion generated from: '<S3>/R_VeAATR_e_FaultSts_AAT_SnsrPerf'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_AAT_SnsrPerf_Value
        (AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_AAT__n);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BatChaCouTemSenACirHig' incorporates:
     *  SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BatChaCouTemSenACirHig'
     *  SignalConversion generated from: '<S3>/R_VeAATR_e_FaultSts_BatChaCouTemSenACirHig'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BatChaCouTemSenACirHig_Value
        (AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_BatCha);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BatChaCouTemSenACirLow' incorporates:
     *  SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BatChaCouTemSenACirLow'
     *  SignalConversion generated from: '<S3>/R_VeAATR_e_FaultSts_BatChaCouTemSenACirLow'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BatChaCouTemSenACirLow_Value
        (AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_BatC_e);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BatChaCouTemSenACirRan' incorporates:
     *  SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BatChaCouTemSenACirRan'
     *  SignalConversion generated from: '<S3>/R_VeAATR_e_FaultSts_BatChaCouTemSenACirRan'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BatChaCouTemSenACirRan_Value
        (AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_BatC_c);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BatChaCouTemSnsrCkt' incorporates:
     *  SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BatChaCouTemSnsrCkt'
     *  SignalConversion generated from: '<S3>/R_VeAATR_e_FaultSts_BatChaCouTemSnsrCkt'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BatChaCouTemSnsrCkt_Value
        (AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_BatC_m);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCkt' incorporates:
     *  SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCkt'
     *  SignalConversion generated from: '<S3>/R_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCkt'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCkt_Value
        (AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_l);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktHi' incorporates:
     *  SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktHi'
     *  SignalConversion generated from: '<S3>/R_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktHi'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktHi_Value
        (AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_i);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktLo' incorporates:
     *  SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktLo'
     *  SignalConversion generated from: '<S3>/R_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktLo'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktLo_Value
        (AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_j);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktPerf' incorporates:
     *  SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktPerf'
     *  SignalConversion generated from: '<S3>/R_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktPerf'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktPerf_Value
        (AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_a);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCkt' incorporates:
     *  SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCkt'
     *  SignalConversion generated from: '<S3>/R_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCkt'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCkt_Value
        (AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_c);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktHi' incorporates:
     *  SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktHi'
     *  SignalConversion generated from: '<S3>/R_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktHi'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktHi_Value
        (AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_BattCh);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktLo' incorporates:
     *  SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktLo'
     *  SignalConversion generated from: '<S3>/R_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktLo'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktLo_Value
        (AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_n);

    /* Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktPerf' incorporates:
     *  SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktPerf'
     *  SignalConversion generated from: '<S3>/R_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktPerf'
     */
    (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktPerf_Value
        (AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_f);

    /* SignalConversion generated from: '<S3>/SCP_AmbientTempFA_Init_write' incorporates:
     *  SignalConversion generated from: '<S3>/SCP_AmbientTemp_Init_write'
     *  SignalConversion generated from: '<S3>/SCP_DCNegtvTempFA_Init_write'
     *  SignalConversion generated from: '<S3>/SCP_DCNegtvTempSNA_Init_write'
     *  SignalConversion generated from: '<S3>/SCP_DCNegtvTemp_Init_write'
     *  SignalConversion generated from: '<S3>/SCP_DCPstvTempFA_Init_write'
     *  SignalConversion generated from: '<S3>/SCP_DCPstvTempSNA_Init_write'
     *  SignalConversion generated from: '<S3>/SCP_DCPstvTemp_Init_write'
     *  SignalConversion generated from: '<S3>/SCP_InletTempSnsrFA_Init_write'
     *  SignalConversion generated from: '<S3>/SCP_InletTempSnsrSNA_Init_write'
     *  SignalConversion generated from: '<S3>/SCP_InletTempSnsr_Init_write'
     */
#if Rte_SysCon_Variant_AATR_8

    /* SignalConversion generated from: '<S3>/SCP_AmbientTempFA_Init_write' */
    rtb_OutportBufferForSCP_AmbientTempFA_In =
        AATR_ac_B.OutportBufferForSCP_AmbientTempFA_Init;

    /* SignalConversion generated from: '<S3>/SCP_AmbientTemp_Init_write' */
    rtb_OutportBufferForSCP_AmbientTemp_Init =
        AATR_ac_B.OutportBufferForSCP_AmbientTemp_Init;

    /* SignalConversion generated from: '<S3>/SCP_DCNegtvTempFA_Init_write' */
    rtb_OutportBufferForSCP_DCNegtvTempFA_In = AATR_ac_B.AND_d;

    /* SignalConversion generated from: '<S3>/SCP_DCNegtvTempSNA_Init_write' */
    rtb_OutportBufferForSCP_DCNegtvTempSNA_I = AATR_ac_B.AND_p5;

    /* SignalConversion generated from: '<S3>/SCP_DCNegtvTemp_Init_write' */
    rtb_OutportBufferForSCP_DCNegtvTemp_Init =
        AATR_ac_B.OutportBufferForSCP_DCNegtvTemp_Init;

    /* SignalConversion generated from: '<S3>/SCP_DCPstvTempFA_Init_write' */
    rtb_OutportBufferForSCP_DCPstvTempFA_Ini = AATR_ac_B.AND_p;

    /* SignalConversion generated from: '<S3>/SCP_DCPstvTempSNA_Init_write' */
    rtb_OutportBufferForSCP_DCPstvTempSNA_In = AATR_ac_B.AND_g;

    /* SignalConversion generated from: '<S3>/SCP_DCPstvTemp_Init_write' */
    rtb_OutportBufferForSCP_DCPstvTemp_Init_ =
        AATR_ac_B.OutportBufferForSCP_DCPstvTemp_Init;

    /* SignalConversion generated from: '<S3>/SCP_InletTempSnsrFA_Init_write' */
    rtb_OutportBufferForSCP_InletTempSnsrFA_ = AATR_ac_B.AND_b;

    /* SignalConversion generated from: '<S3>/SCP_InletTempSnsrSNA_Init_write' */
    rtb_OutportBufferForSCP_InletTempSnsrSNA = AATR_ac_B.AND_n;

    /* SignalConversion generated from: '<S3>/SCP_InletTempSnsr_Init_write' */
    rtb_OutportBufferForSCP_InletTempSnsr_In =
        AATR_ac_B.OutportBufferForSCP_InletTempSnsr_Init;

#endif

    /* End of SignalConversion generated from: '<S3>/SCP_AmbientTempFA_Init_write' */

    /* SignalConversion generated from: '<S3>/VeAATR_b_IUMPR_CBCAmbAirTemp_Perf_Init' incorporates:
     *  SignalConversion generated from: '<S3>/VeAATR_b_IUMPR_SCP_AmbTemp_Perf_Init'
     *  SignalConversion generated from: '<S3>/VeAATR_b_IUMPR_SCP_InletTemp_Perf_Init'
     */
#if Rte_SysCon_Variant_AATR_9

    /* Outport: '<Root>/VeAATR_b_IUMPR_CBCAmbAirTemp_Perf' */
    (void)Rte_Write_VeAATR_b_IUMPR_CBCAmbAirTemp_Perf_Value
        (AATR_ac_B.OutportBufferForVeAATR_b_IUMPR_CBCAmbAir);

    /* Outport: '<Root>/VeAATR_b_IUMPR_SCP_AmbTemp_Perf' */
    (void)Rte_Write_VeAATR_b_IUMPR_SCP_AmbTemp_Perf_Value
        (AATR_ac_B.OutportBufferForVeAATR_b_IUMPR_SCP_AmbTe);

    /* Outport: '<Root>/VeAATR_b_IUMPR_SCP_InletTemp_Perf' */
    (void)Rte_Write_VeAATR_b_IUMPR_SCP_InletTemp_Perf_Value
        (AATR_ac_B.OutportBufferForVeAATR_b_IUMPR_SCP_Inlet);

#endif

    /* End of SignalConversion generated from: '<S3>/VeAATR_b_IUMPR_CBCAmbAirTemp_Perf_Init' */

    /* SignalConversion generated from: '<S3>/AmbAirTempFA_Saved_write' incorporates:
     *  SignalConversion generated from: '<S3>/AmbAirTemp_Saved_write'
     */
#if Rte_SysCon_Variant_AATR_8

    /* SignalConversion generated from: '<S3>/AmbAirTempFA_Saved_write' */
    Rte_IrvWrite_AATR_PwrOn_AmbAirTempFA_Saved_write_IRV
        (VeAATC_b_AmbAirTempFA_Saved);

    /* SignalConversion generated from: '<S3>/AmbAirTemp_Saved_write' */
    Rte_IrvWrite_AATR_PwrOn_AmbAirTemp_Saved_write_IRV(VeAATC_T_AmbAirTemp_Saved);

#endif

    /* End of SignalConversion generated from: '<S3>/AmbAirTempFA_Saved_write' */

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S1255>/CBC_AmbAirTempSrc_Init'
     *  SignalConversion generated from: '<S3>/CBC_AmbAirTempSrc_Init_write'
     * */
    Rte_IrvWrite_AATR_PwrOn_CBC_AmbAirTempSrc_Init_write_IRV
        (AATR_ac_B.OutportBufferForCBC_AmbAirTempSrc_Init);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S3>/CBC_AmbAirTemp_InitFA_write'
     * */
    Rte_IrvWrite_AATR_PwrOn_CBC_AmbAirTemp_InitFA_write_IRV
        (AATR_ac_B.OutportBufferForCBC_AmbAirTemp_InitFA);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S3>/CBC_AmbAirTemp_Init_write'
     * */
    Rte_IrvWrite_AATR_PwrOn_CBC_AmbAirTemp_Init_write_IRV
        (AATR_ac_B.OutportBufferForCBC_AmbAirTemp_Init);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S3>/ECM_AmbAirTemp_InitFA_write'
     * */
    Rte_IrvWrite_AATR_PwrOn_ECM_AmbAirTemp_InitFA_write_IRV
        (AATR_ac_B.OutportBufferForECM_AmbAirTemp_InitFA);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S3>/ECM_AmbAirTemp_Init_write'
     * */
    Rte_IrvWrite_AATR_PwrOn_ECM_AmbAirTemp_Init_write_IRV
        (AATR_ac_B.OutportBufferForECM_AmbAirTemp_Init);

    /* SignalConversion generated from: '<S3>/SCP_AmbientTempFA_Init_write' incorporates:
     *  SignalConversion generated from: '<S3>/SCP_AmbientTemp_Init_write'
     *  SignalConversion generated from: '<S3>/SCP_DCNegtvTempFA_Init_write'
     *  SignalConversion generated from: '<S3>/SCP_DCNegtvTempSNA_Init_write'
     *  SignalConversion generated from: '<S3>/SCP_DCNegtvTemp_Init_write'
     *  SignalConversion generated from: '<S3>/SCP_DCPstvTempFA_Init_write'
     *  SignalConversion generated from: '<S3>/SCP_DCPstvTempSNA_Init_write'
     *  SignalConversion generated from: '<S3>/SCP_DCPstvTemp_Init_write'
     *  SignalConversion generated from: '<S3>/SCP_InletTempSnsrFA_Init_write'
     *  SignalConversion generated from: '<S3>/SCP_InletTempSnsrSNA_Init_write'
     *  SignalConversion generated from: '<S3>/SCP_InletTempSnsr_Init_write'
     */
#if Rte_SysCon_Variant_AATR_8

    /* Merge: '<Root>/Merge_10' */
    Rte_IrvWrite_AATR_PwrOn_SCP_AmbientTempFA_Init_write_IRV
        (rtb_OutportBufferForSCP_AmbientTempFA_In);

    /* Merge: '<Root>/Merge_5' */
    Rte_IrvWrite_AATR_PwrOn_SCP_AmbientTemp_Init_write_IRV
        (rtb_OutportBufferForSCP_AmbientTemp_Init);

    /* Merge: '<Root>/Merge_16' */
    Rte_IrvWrite_AATR_PwrOn_SCP_DCNegtvTempFA_Init_write_IRV
        (rtb_OutportBufferForSCP_DCNegtvTempFA_In);

    /* Merge: '<Root>/Merge_4' */
    Rte_IrvWrite_AATR_PwrOn_SCP_DCNegtvTempSNA_Init_write_IRV
        (rtb_OutportBufferForSCP_DCNegtvTempSNA_I);

    /* Merge: '<Root>/Merge_15' */
    Rte_IrvWrite_AATR_PwrOn_SCP_DCNegtvTemp_Init_write_IRV
        (rtb_OutportBufferForSCP_DCNegtvTemp_Init);

    /* Merge: '<Root>/Merge_14' */
    Rte_IrvWrite_AATR_PwrOn_SCP_DCPstvTempFA_Init_write_IRV
        (rtb_OutportBufferForSCP_DCPstvTempFA_Ini);

    /* Merge: '<Root>/Merge_3' */
    Rte_IrvWrite_AATR_PwrOn_SCP_DCPstvTempSNA_Init_write_IRV
        (rtb_OutportBufferForSCP_DCPstvTempSNA_In);

    /* Merge: '<Root>/Merge_13' */
    Rte_IrvWrite_AATR_PwrOn_SCP_DCPstvTemp_Init_write_IRV
        (rtb_OutportBufferForSCP_DCPstvTemp_Init_);

    /* Merge: '<Root>/Merge_12' */
    Rte_IrvWrite_AATR_PwrOn_SCP_InletTempSnsrFA_Init_write_IRV
        (rtb_OutportBufferForSCP_InletTempSnsrFA_);

    /* Merge: '<Root>/Merge_2' */
    Rte_IrvWrite_AATR_PwrOn_SCP_InletTempSnsrSNA_Init_write_IRV
        (rtb_OutportBufferForSCP_InletTempSnsrSNA);

    /* Merge: '<Root>/Merge_11' */
    Rte_IrvWrite_AATR_PwrOn_SCP_InletTempSnsr_Init_write_IRV
        (rtb_OutportBufferForSCP_InletTempSnsr_In);

#endif

    /* End of SignalConversion generated from: '<S3>/SCP_AmbientTempFA_Init_write' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
FUNC(void, AATR_CODE) TmotAATR_U_CBC_AmbientAirVolt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/TmotAATR_U_CBC_AmbientAirVolt' */
    /* Merge: '<Root>/Merge_8' incorporates:
     *  Chart: '<S16>/TmotAATR_U_CBC_AmbientAirVoltChrt'
     *  SignalConversion generated from: '<S16>/VeAATR_U_CBC_AmbientAirVolt_write'
     */
    /* Gateway: TmotAATR_U_CBC_AmbientAirVolt/TmotAATR_U_CBC_AmbientAirVoltChrt */
    /* During: TmotAATR_U_CBC_AmbientAirVolt/TmotAATR_U_CBC_AmbientAirVoltChrt */
    /* Entry Internal: TmotAATR_U_CBC_AmbientAirVolt/TmotAATR_U_CBC_AmbientAirVoltChrt */
    /* Transition: '<S1332>:2' */
    Rte_IrvWrite_TmotAATR_U_CBC_AmbientAirVolt_CBC_AmbAirTemp_Init_write_IRV
        (KeAATR_U_CBC_AmbientAirVoltDflt);

    /* SignalConversion generated from: '<S16>/VeAATR_b_CBC_AmbientAirVoltFA_write' incorporates:
     *  SignalConversion generated from: '<S16>/VeAATR_e_CBC_AmbientAirVoltSrc_write'
     */
#if Rte_SysCon_Variant_AATR_8 || Rte_SysCon_Variant_AATR_9

    /* Merge: '<Root>/Merge_9' */
    Rte_IrvWrite_TmotAATR_U_CBC_AmbientAirVolt_CBC_AmbAirTemp_InitFA_write_IRV
        (true);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S16>/TmotAATR_U_CBC_AmbientAirVoltChrt'
     */
    Rte_IrvWrite_TmotAATR_U_CBC_AmbientAirVolt_CBC_AmbAirTempSrc_Init_write_IRV
        ((TeAATR_e_CBC_AmbientAirVoltSrc)4U);

#endif

    /* End of SignalConversion generated from: '<S16>/VeAATR_b_CBC_AmbientAirVoltFA_write' */
    /* End of Outputs for SubSystem: '<Root>/TmotAATR_U_CBC_AmbientAirVolt' */
}

/* Model initialize function */
FUNC(void, AATR_CODE) AATR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        AATR_ac_B.OutportBufferForCBC_AmbAirTempSrc_Init =
            CeAATR_e_CBC_AmbVoltSrc_Dflt;
    }

    /* custom signals */
#if Rte_SysCon_Variant_AATR_8

    {
        sint32 i;
        for (i = 0; i < 10; i++)
        {
            VaAATD_e_SensorTempThrshldLvl[i] = CeAATR_e_Thr1;
        }
    }

#endif

    {

#if Rte_SysCon_Variant_AATR_8

        sint32 i;

#endif

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
         *  SubSystem: '<Root>/AATR_PwrOn'
         */
        /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
         *  SubSystem: '<S3>/ProcessOut_Init'
         */
        /* Start for Constant: '<S1284>/Calib' incorporates:
         *  Constant: '<S1294>/Calib'
         */
#if Rte_SysCon_Variant_AATR_8

        /* SystemInitialize for Function Call SubSystem: '<S3>/AATI_AmbTemp_InitFUNC' */
        /* SystemInitialize for SignalConversion generated from: '<S1256>/SCP_AmbientTemp_Init' incorporates:
         *  Constant: '<S1272>/Calib'
         */
        AATR_ac_B.OutportBufferForSCP_AmbientTemp_Init =
            KeAATR_T_SCP_AmbientTempSnsr_Init;

        /* SystemInitialize for SignalConversion generated from: '<S1256>/SCP_AmbientTempFA_Init' incorporates:
         *  Constant: '<S1276>/Calib'
         */
        AATR_ac_B.OutportBufferForSCP_AmbientTempFA_Init =
            KeAATR_b_SCP_AmbientTempFA_Init;

        /* SystemInitialize for SignalConversion generated from: '<S1256>/SCP_InletTempSnsr_Init' incorporates:
         *  Constant: '<S1275>/Calib'
         */
        AATR_ac_B.OutportBufferForSCP_InletTempSnsr_Init =
            KeAATR_T_SCP_InletTempSnsr_Init;

        /* SystemInitialize for SignalConversion generated from: '<S1256>/SCP_DCPstvTemp_Init' incorporates:
         *  Constant: '<S1274>/Calib'
         */
        AATR_ac_B.OutportBufferForSCP_DCPstvTemp_Init =
            KeAATR_T_SCP_DCPstvTempSnsr_Init;

        /* SystemInitialize for SignalConversion generated from: '<S1256>/SCP_DCNegtvTemp_Init' incorporates:
         *  Constant: '<S1273>/Calib'
         */
        AATR_ac_B.OutportBufferForSCP_DCNegtvTemp_Init =
            KeAATR_T_SCP_DCNegtvTempSnsr_Init;

        /* End of SystemInitialize for SubSystem: '<S3>/AATI_AmbTemp_InitFUNC' */

        /* Start for Constant: '<S1284>/Calib' */
        AATR_ac_B.Calib = KeAATR_T_EstAmbAirTemp_Init;

        /* Start for Constant: '<S1294>/Calib' */
        AATR_ac_B.Calib_a = KeAATR_b_EstAmbAirTempFA_Init;

#endif

        /* End of Start for Constant: '<S1284>/Calib' */

        /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
         *  SubSystem: '<S3>/AATI_AmbTemp_Init'
         */
        /* SystemInitialize for SignalConversion generated from: '<S1255>/ECM_AmbAirTemp_Init' incorporates:
         *  Constant: '<S1261>/Calib'
         */
        AATR_ac_B.OutportBufferForECM_AmbAirTemp_Init =
            KeAATR_T_ECM_AmbAirTempInit;

        /* SystemInitialize for SignalConversion generated from: '<S1255>/ECM_AmbAirTemp_InitFA' incorporates:
         *  Constant: '<S1264>/Calib'
         */
        AATR_ac_B.OutportBufferForECM_AmbAirTemp_InitFA =
            KeAATR_b_ECM_AmbAirTempInitFA;

        /* SystemInitialize for SignalConversion generated from: '<S1255>/CBC_AmbAirTemp_Init' incorporates:
         *  Constant: '<S1262>/Calib'
         */
        AATR_ac_B.OutportBufferForCBC_AmbAirTemp_Init =
            KeAATR_U_CBC_AmbAirVoltInit;

        /* SystemInitialize for SignalConversion generated from: '<S1255>/CBC_AmbAirTemp_InitFA' incorporates:
         *  Constant: '<S1263>/Calib'
         */
        AATR_ac_B.OutportBufferForCBC_AmbAirTemp_InitFA =
            KeAATR_b_CBC_AmbAirVoltInitFA;

        /* SystemInitialize for SignalConversion generated from: '<S1255>/CBC_AmbAirTempSrc_Init' incorporates:
         *  Constant: '<S1265>/Calib'
         */
        AATR_ac_B.OutportBufferForCBC_AmbAirTempSrc_Init =
            KeAATR_e_CBC_AmbientAirVoltSrc_Init;

        /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
         *  SubSystem: '<S3>/ProcessOut_Init'
         */
        /* Start for Constant: '<S1285>/Calib' incorporates:
         *  Constant: '<S1286>/Calib'
         *  Constant: '<S1287>/Calib'
         *  Constant: '<S1289>/Calib'
         *  Constant: '<S1291>/Calib'
         *  Constant: '<S1292>/Calib'
         *  Constant: '<S1301>/Calib'
         *  Constant: '<S1302>/Calib'
         *  Constant: '<S1303>/Calib'
         */
#if !Rte_SysCon_Variant_AATR_8

        /* Start for Constant: '<S1288>/Calib' */
        AATR_ac_B.Calib_b = KeAATR_T_SCP_InletTemp_NF;

        /* Start for Constant: '<S1299>/Calib' */
        AATR_ac_B.Calib_nb = KeAATR_b_SCP_InletTempFA_NF;

#else

        /* Start for Constant: '<S1298>/Calib' incorporates:
         *  Constant: '<S1303>/Calib'
         */
        AATR_ac_B.Calib_p4 = KeAATR_b_SCP_InletTempSnsrFA_Init_out;

        /* Start for Constant: '<S1299>/Calib' incorporates:
         *  Constant: '<S1301>/Calib'
         */
        AATR_ac_B.Calib_nb = KeAATR_b_SCP_DCPstvTempSnsrFA_Init_out;

        /* Start for Constant: '<S1287>/Calib' */
        AATR_ac_B.Calib_ne = KeAATR_T_SCP_DCNegtvTempSnsr_Init_out;

#endif

        /* End of Start for Constant: '<S1285>/Calib' */

        /* Start for Constant: '<S1290>/Calib' incorporates:
         *  Constant: '<S1288>/Calib'
         *  Constant: '<S1298>/Calib'
         *  Constant: '<S1299>/Calib'
         *  Constant: '<S1300>/Calib'
         *  SignalConversion generated from: '<S1258>/EstAmbAirTempFA_Init'
         *  SignalConversion generated from: '<S1258>/EstAmbAirTemp_Init'
         */
#if !Rte_SysCon_Variant_AATR_8

        /* Start for Constant: '<S1288>/Calib' */
        AATR_ac_B.Calib_b = KeAATR_T_SCP_DCNegtvTemp_NF;

        /* Start for Constant: '<S1298>/Calib' */
        AATR_ac_B.Calib_p4 = KeAATR_b_SCP_DCNegtvTempFA_NF;

#else

        /* Start for Constant: '<S1299>/Calib' */
        AATR_ac_B.Calib_nb = KeAATR_b_SCP_DCNegtvTempSnsrFA_Init_out;

        /* SystemInitialize for SignalConversion generated from: '<S1258>/EstAmbAirTemp_Init' */
        AATR_ac_B.OutportBufferForEstAmbAirTemp_Init = AATR_ac_B.Calib;

        /* SystemInitialize for SignalConversion generated from: '<S1258>/EstAmbAirTempFA_Init' */
        AATR_ac_B.OutportBufferForEstAmbAirTempFA_Init = AATR_ac_B.Calib_a;

#endif

        /* End of Start for Constant: '<S1290>/Calib' */

        /* Start for Constant: '<S1295>/Calib' incorporates:
         *  Constant: '<S1296>/Calib'
         *  Constant: '<S1297>/Calib'
         */
#if Rte_SysCon_Variant_AATR_9

        /* Start for Constant: '<S1295>/Calib' */
        AATR_ac_B.Calib_n1 = KeAATR_b_IUMPR_CBCAATPerf_NF;

        /* Start for Constant: '<S1296>/Calib' */
        AATR_ac_B.Calib_c = KeAATR_b_IUMPR_SCPAATPerf_NF;

        /* Start for Constant: '<S1297>/Calib' */
        AATR_ac_B.Calib_g = KeAATR_b_IUMPR_SCPInletPerf_NF;

#endif

        /* End of Start for Constant: '<S1295>/Calib' */

        /* SystemInitialize for SignalConversion generated from: '<S1258>/CBC_AmbAirTempRaw_Init' incorporates:
         *  Constant: '<S1283>/Calib'
         */
        AATR_ac_B.OutportBufferForCBC_AmbAirTempRaw_Init =
            KeAATR_T_CBC_AmbAirTempRaw_Init;

        /* SystemInitialize for SignalConversion generated from: '<S1258>/CBC_AmbAirVoltRaw_Init' incorporates:
         *  Constant: '<S1293>/Calib'
         */
        AATR_ac_B.OutportBufferForCBC_AmbAirVoltRaw_Init =
            KeAATR_U_CBC_AmbAirVoltRaw_Init;

        /* SystemInitialize for SignalConversion generated from: '<S1258>/Variant Source4' incorporates:
         *  SignalConversion generated from: '<S1258>/Variant Source5'
         */
#if Rte_SysCon_Variant_AATR_8

        /* SystemInitialize for VariantMerge generated from: '<S1258>/Variant Source4' */
        AATR_ac_B.VariantMerge_For_Variant_Source_Variant_ = AATR_ac_B.Calib_ne;

        /* SystemInitialize for VariantMerge generated from: '<S1258>/Variant Source5' */
        AATR_ac_B.VariantMerge_For_Variant_Source_Varian_h = AATR_ac_B.Calib_ne;

#else

        /* SystemInitialize for VariantMerge generated from: '<S1258>/Variant Source4' incorporates:
         *  SignalConversion generated from: '<S1258>/Variant Source4'
         */
        AATR_ac_B.VariantMerge_For_Variant_Source_Variant_ = AATR_ac_B.Calib_b;

#endif

        /* End of SystemInitialize for SignalConversion generated from: '<S1258>/Variant Source4' */

        /* SystemInitialize for SignalConversion generated from: '<S1258>/Variant Source6' incorporates:
         *  SignalConversion generated from: '<S1258>/Variant Source5'
         */
#if Rte_SysCon_Variant_AATR_8

        /* SystemInitialize for VariantMerge generated from: '<S1258>/Variant Source6' */
        AATR_ac_B.VariantMerge_For_Variant_Source_Varian_j = AATR_ac_B.Calib_p4;

#else

        /* SystemInitialize for VariantMerge generated from: '<S1258>/Variant Source5' incorporates:
         *  SignalConversion generated from: '<S1258>/Variant Source5'
         */
        AATR_ac_B.VariantMerge_For_Variant_Source_Varian_h = AATR_ac_B.Calib_b;

#endif

        /* End of SystemInitialize for SignalConversion generated from: '<S1258>/Variant Source6' */

        /* SystemInitialize for SignalConversion generated from: '<S1258>/Variant Source7' incorporates:
         *  SignalConversion generated from: '<S1258>/Variant Source6'
         */
#if Rte_SysCon_Variant_AATR_8

        /* SystemInitialize for VariantMerge generated from: '<S1258>/Variant Source7' */
        AATR_ac_B.VariantMerge_For_Variant_Source_Varian_p = AATR_ac_B.Calib_ne;

#else

        /* SystemInitialize for VariantMerge generated from: '<S1258>/Variant Source6' incorporates:
         *  SignalConversion generated from: '<S1258>/Variant Source6'
         */
        AATR_ac_B.VariantMerge_For_Variant_Source_Varian_j = AATR_ac_B.Calib_nb;

#endif

        /* End of SystemInitialize for SignalConversion generated from: '<S1258>/Variant Source7' */

        /* SystemInitialize for SignalConversion generated from: '<S1258>/Variant Source8' incorporates:
         *  SignalConversion generated from: '<S1258>/Variant Source7'
         */
#if Rte_SysCon_Variant_AATR_8

        /* SystemInitialize for VariantMerge generated from: '<S1258>/Variant Source8' */
        AATR_ac_B.VariantMerge_For_Variant_Source_Varian_o = AATR_ac_B.Calib_nb;

#else

        /* SystemInitialize for VariantMerge generated from: '<S1258>/Variant Source7' incorporates:
         *  SignalConversion generated from: '<S1258>/Variant Source7'
         */
        AATR_ac_B.VariantMerge_For_Variant_Source_Varian_p = AATR_ac_B.Calib_b;

#endif

        /* End of SystemInitialize for SignalConversion generated from: '<S1258>/Variant Source8' */

        /* SystemInitialize for SignalConversion generated from: '<S1258>/Variant Source9' incorporates:
         *  SignalConversion generated from: '<S1258>/Variant Source8'
         */
#if Rte_SysCon_Variant_AATR_8

        /* SystemInitialize for VariantMerge generated from: '<S1258>/Variant Source9' */
        AATR_ac_B.VariantMerge_For_Variant_Source_Varian_m = AATR_ac_B.Calib_ne;

#else

        /* SystemInitialize for VariantMerge generated from: '<S1258>/Variant Source8' incorporates:
         *  SignalConversion generated from: '<S1258>/Variant Source8'
         */
        AATR_ac_B.VariantMerge_For_Variant_Source_Varian_o = AATR_ac_B.Calib_p4;

#endif

        /* End of SystemInitialize for SignalConversion generated from: '<S1258>/Variant Source9' */

        /* SystemInitialize for SignalConversion generated from: '<S1258>/Variant Source10' incorporates:
         *  SignalConversion generated from: '<S1258>/Variant Source9'
         */
#if Rte_SysCon_Variant_AATR_8

        /* SystemInitialize for VariantMerge generated from: '<S1258>/Variant Source10' */
        AATR_ac_B.VariantMerge_For_Variant_Source_Varian_e = AATR_ac_B.Calib_nb;

#else

        /* SystemInitialize for VariantMerge generated from: '<S1258>/Variant Source9' incorporates:
         *  SignalConversion generated from: '<S1258>/Variant Source9'
         */
        AATR_ac_B.VariantMerge_For_Variant_Source_Varian_m = AATR_ac_B.Calib_b;

        /* SystemInitialize for VariantMerge generated from: '<S1258>/Variant Source10' incorporates:
         *  SignalConversion generated from: '<S1258>/Variant Source10'
         */
        AATR_ac_B.VariantMerge_For_Variant_Source_Varian_e = AATR_ac_B.Calib_p4;

#endif

        /* End of SystemInitialize for SignalConversion generated from: '<S1258>/Variant Source10' */

        /* SystemInitialize for SignalConversion generated from: '<S1258>/VeAATR_b_IUMPR_CBCAmbAirTemp_Perf_Init' incorporates:
         *  SignalConversion generated from: '<S1258>/VeAATR_b_IUMPR_SCP_AmbTemp_Perf_Init'
         *  SignalConversion generated from: '<S1258>/VeAATR_b_IUMPR_SCP_InletTemp_Perf_Init'
         */
#if Rte_SysCon_Variant_AATR_9

        /* SystemInitialize for SignalConversion generated from: '<S1258>/VeAATR_b_IUMPR_CBCAmbAirTemp_Perf_Init' */
        AATR_ac_B.OutportBufferForVeAATR_b_IUMPR_CBCAmbAir = AATR_ac_B.Calib_n1;

        /* SystemInitialize for SignalConversion generated from: '<S1258>/VeAATR_b_IUMPR_SCP_AmbTemp_Perf_Init' */
        AATR_ac_B.OutportBufferForVeAATR_b_IUMPR_SCP_AmbTe = AATR_ac_B.Calib_c;

        /* SystemInitialize for SignalConversion generated from: '<S1258>/VeAATR_b_IUMPR_SCP_InletTemp_Perf_Init' */
        AATR_ac_B.OutportBufferForVeAATR_b_IUMPR_SCP_Inlet = AATR_ac_B.Calib_g;

#endif

        /* End of SystemInitialize for SignalConversion generated from: '<S1258>/VeAATR_b_IUMPR_CBCAmbAirTemp_Perf_Init' */

        /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
         *  SubSystem: '<S3>/Sub_Out_Init'
         */
        /* SystemInitialize for SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_AAT_SnsrCktHi' incorporates:
         *  Constant: '<S1305>/Constant'
         */
        AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_AAT_Sn =
            AATR_ac_ConstB.Constant;

        /* SystemInitialize for SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_AAT_SnsrCktLo' incorporates:
         *  Constant: '<S1306>/Constant'
         */
        AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_AAT__o =
            AATR_ac_ConstB.Constant_f;

        /* SystemInitialize for SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BatChaCouTemSenACirHig' incorporates:
         *  Constant: '<S1312>/Constant'
         */
        AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_BatCha =
            AATR_ac_ConstB.Constant_h;

        /* SystemInitialize for SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BatChaCouTemSenACirLow' incorporates:
         *  Constant: '<S1313>/Constant'
         */
        AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_BatC_e =
            AATR_ac_ConstB.Constant_m;

        /* SystemInitialize for SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BatChaCouTemSnsrCkt' incorporates:
         *  Constant: '<S1314>/Constant'
         */
        AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_BatC_m =
            AATR_ac_ConstB.Constant_d;

        /* SystemInitialize for SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktHi' incorporates:
         *  Constant: '<S1315>/Constant'
         */
        AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_BattCh =
            AATR_ac_ConstB.Constant_i;

        /* SystemInitialize for SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktLo' incorporates:
         *  Constant: '<S1316>/Constant'
         */
        AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_n =
            AATR_ac_ConstB.Constant_k;

        /* SystemInitialize for SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCkt' incorporates:
         *  Constant: '<S1317>/Constant'
         */
        AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_c =
            AATR_ac_ConstB.Constant_df;

        /* SystemInitialize for SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktHi' incorporates:
         *  Constant: '<S1318>/Constant'
         */
        AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_i =
            AATR_ac_ConstB.Constant_b;

        /* SystemInitialize for SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktLo' incorporates:
         *  Constant: '<S1319>/Constant'
         */
        AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_j =
            AATR_ac_ConstB.Constant_n;

        /* SystemInitialize for SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCkt' incorporates:
         *  Constant: '<S1307>/Constant'
         */
        AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_l =
            AATR_ac_ConstB.Constant_e;

        /* SystemInitialize for SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_AAT_SnsrPerf' incorporates:
         *  Constant: '<S1308>/Constant'
         */
        AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_AAT__n =
            AATR_ac_ConstB.Constant_md;

        /* SystemInitialize for SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BatChaCouTemSenACirRan' incorporates:
         *  Constant: '<S1309>/Constant'
         */
        AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_BatC_c =
            AATR_ac_ConstB.Constant_c;

        /* SystemInitialize for SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktPerf' incorporates:
         *  Constant: '<S1310>/Constant'
         */
        AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_f =
            AATR_ac_ConstB.Constant_a;

        /* SystemInitialize for SignalConversion generated from: '<S1259>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktPerf' incorporates:
         *  Constant: '<S1311>/Constant'
         */
        AATR_ac_B.OutportBufferForVeAATR_e_FaultSts_Batt_a =
            AATR_ac_ConstB.Constant_kl;

        /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
         *  SubSystem: '<Root>/AATR_MedTEH'
         */
        /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
         *  SubSystem: '<S1>/AATC_Process_1'
         */
        /* SystemInitialize for SignalConversion generated from: '<S3>/AmbAirTempFA_Saved_write' incorporates:
         *  SignalConversion generated from: '<S17>/Variant Source2'
         *  SignalConversion generated from: '<S3>/AmbAirTemp_Saved_write'
         * */
#if Rte_SysCon_Variant_AATR_8

        /* SystemInitialize for Enabled SubSystem: '<S17>/AATC_Proc_and_Init' */
        /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeAATR_T_SCP_InletTempSnsr' */
        /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeAATR_T_SCP_AmbientTempSnsr' */
        /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeAATR_T_SCP_DCNegtvTmpSnsr' */
        /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeAATR_T_SCP_DCPstvTmpSnsr' */
        /* SystemInitialize for SignalConversion generated from: '<S3>/AmbAirTempFA_Saved_write' */
        Rte_IrvWrite_AATR_ac_Init_AmbAirTempFA_Saved_write_IRV
            (VeAATC_b_AmbAirTempFA_Saved);

        /* SystemInitialize for SignalConversion generated from: '<S3>/AmbAirTemp_Saved_write' */
        Rte_IrvWrite_AATR_ac_Init_AmbAirTemp_Saved_write_IRV
            (VeAATC_T_AmbAirTemp_Saved);

        /* SystemInitialize for VariantMerge generated from: '<S17>/Variant Source2' */
        AATR_ac_B.VariantMerge_For_Variant_Source_Varia_ij =
            VeAATC_T_CBC_AmbAirTempRaw;

        /* End of SystemInitialize for SubSystem: '<S17>/AATC_Proc_and_Init' */
#elif !Rte_SysCon_Variant_AATR_8 && Rte_SysCon_Variant_AATR_9

        /* SystemInitialize for VariantMerge generated from: '<S17>/Variant Source2' incorporates:
         *  SignalConversion generated from: '<S17>/Variant Source2'
         */
        AATR_ac_B.VariantMerge_For_Variant_Source_Varia_ij =
            VeAATC_T_CBC_AmbAirTempRaw_MSG;

#endif

        /* End of SystemInitialize for SignalConversion generated from: '<S3>/AmbAirTempFA_Saved_write' */
        /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeAATR_T_SCP_DCPstvTmpSnsr' */
        /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeAATR_T_SCP_DCNegtvTmpSnsr' */
        /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeAATR_T_SCP_AmbientTempSnsr' */
        /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeAATR_T_SCP_InletTempSnsr' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#if Rte_SysCon_Variant_AATR_8

        /* SystemInitialize for Function Call SubSystem: '<S1>/Diagnostics1' */
        for (i = 0; i < 10; i++)
        {
            /* SystemInitialize for Merge: '<S831>/Merge' */
            VaAATD_e_SensorTempThrshldLvl[(i)] = CeAATR_e_Thr1;
        }

        /* End of SystemInitialize for SubSystem: '<S1>/Diagnostics1' */
        /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

        /* SystemInitialize for Outport: '<Root>/VeAATR_e_EstAmbAirTempSource' incorporates:
         *  Merge: '<Root>/Merge_25'
         */
        (void)Rte_Write_VeAATR_e_EstAmbAirTempSource_Value
            (CeAATR_e_AmbAirTemp_Dflt);

        /* SystemInitialize for Outport: '<Root>/VeAATR_e_FaultSts_AAT_SnsrCktHi' incorporates:
         *  Merge: '<Root>/M_VeAATR_e_FaultSts_AAT_SnsrCktHi'
         */
        (void)Rte_Write_VeAATR_e_FaultSts_AAT_SnsrCktHi_Value(CeDFIB_e_Init);

        /* SystemInitialize for Outport: '<Root>/VeAATR_e_FaultSts_AAT_SnsrCktLo' incorporates:
         *  Merge: '<Root>/M_VeAATR_e_FaultSts_AAT_SnsrCktLo'
         */
        (void)Rte_Write_VeAATR_e_FaultSts_AAT_SnsrCktLo_Value(CeDFIB_e_Init);

        /* SystemInitialize for Outport: '<Root>/VeAATR_e_FaultSts_BatChaCouTemSenACirHig' incorporates:
         *  Merge: '<Root>/M_VeAATR_e_FaultSts_BatChaCouTemSenACirHig'
         */
        (void)Rte_Write_VeAATR_e_FaultSts_BatChaCouTemSenACirHig_Value
            (CeDFIB_e_Init);

        /* SystemInitialize for Outport: '<Root>/VeAATR_e_FaultSts_BatChaCouTemSenACirLow' incorporates:
         *  Merge: '<Root>/M_VeAATR_e_FaultSts_BatChaCouTemSenACirLow'
         */
        (void)Rte_Write_VeAATR_e_FaultSts_BatChaCouTemSenACirLow_Value
            (CeDFIB_e_Init);

        /* SystemInitialize for Outport: '<Root>/VeAATR_e_FaultSts_BatChaCouTemSnsrCkt' incorporates:
         *  Merge: '<Root>/M_VeAATR_e_FaultSts_BatChaCouTemSnsrCkt'
         */
        (void)Rte_Write_VeAATR_e_FaultSts_BatChaCouTemSnsrCkt_Value
            (CeDFIB_e_Init);

        /* SystemInitialize for Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktHi' incorporates:
         *  Merge: '<Root>/M_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktHi'
         */
        (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktHi_Value
            (CeDFIB_e_Init);

        /* SystemInitialize for Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktLo' incorporates:
         *  Merge: '<Root>/M_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktLo'
         */
        (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktLo_Value
            (CeDFIB_e_Init);

        /* SystemInitialize for Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCkt' incorporates:
         *  Merge: '<Root>/M_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCkt'
         */
        (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCkt_Value
            (CeDFIB_e_Init);

        /* SystemInitialize for Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktHi' incorporates:
         *  Merge: '<Root>/M_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktHi'
         */
        (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktHi_Value
            (CeDFIB_e_Init);

        /* SystemInitialize for Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktLo' incorporates:
         *  Merge: '<Root>/M_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktLo'
         */
        (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktLo_Value
            (CeDFIB_e_Init);

        /* SystemInitialize for Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCkt' incorporates:
         *  Merge: '<Root>/M_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCkt'
         */
        (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCkt_Value
            (CeDFIB_e_Init);

        /* SystemInitialize for Outport: '<Root>/VeAATR_e_FaultSts_AAT_SnsrPerf' incorporates:
         *  Merge: '<Root>/M_VeAATR_e_FaultSts_AAT_SnsrPerf'
         */
        (void)Rte_Write_VeAATR_e_FaultSts_AAT_SnsrPerf_Value(CeDFIB_e_Init);

        /* SystemInitialize for Outport: '<Root>/VeAATR_e_FaultSts_BatChaCouTemSenACirRan' incorporates:
         *  Merge: '<Root>/M_VeAATR_e_FaultSts_BatChaCouTemSenACirRan'
         */
        (void)Rte_Write_VeAATR_e_FaultSts_BatChaCouTemSenACirRan_Value
            (CeDFIB_e_Init);

        /* SystemInitialize for Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktPerf' incorporates:
         *  Merge: '<Root>/M_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktPerf'
         */
        (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrCCktPerf_Value
            (CeDFIB_e_Init);

        /* SystemInitialize for Outport: '<Root>/VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktPerf' incorporates:
         *  Merge: '<Root>/M_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktPerf'
         */
        (void)Rte_Write_VeAATR_e_FaultSts_BattChrgCouTempSnsrBCktPerf_Value
            (CeDFIB_e_Init);
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
