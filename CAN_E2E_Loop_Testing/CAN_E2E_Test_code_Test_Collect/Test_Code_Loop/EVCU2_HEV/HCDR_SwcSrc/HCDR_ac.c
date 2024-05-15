/*
 * File: HCDR_ac.c
 *
 * Code generated for Simulink model 'HCDR_ac'.
 *
 * Model version                  : 9.83
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:48:05 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HCDR_ac.h"
#include "look1_iflf_binlca_16a.h"

/* Named constants for Chart: '<S186>/PressSnsr_Diag' */
#if Rte_SysCon_Variant_HCDR_3
#define HCDR_ac_IN_AC_Compresor_Wait   ((uint8)3U)
#endif

#if Rte_SysCon_Variant_HCDR_3
#define HCDR_ac_IN_Diagnostics_Fail    ((uint8)4U)
#endif

#if Rte_SysCon_Variant_HCDR_3
#define HCDR_ac_IN_Diagnostics_Not_Defined ((uint8)5U)
#endif

#if Rte_SysCon_Variant_HCDR_3
#define HCDR_ac_IN_Diagnostics_Pass    ((uint8)6U)
#endif

#if Rte_SysCon_Variant_HCDR_3
#define HCDR_ac_IN_Increase_Diag_Fail_Counter ((uint8)7U)
#endif

#if Rte_SysCon_Variant_HCDR_3
#define HCDR_ac_IN_Increase_Diag_Pass_Counter ((uint8)8U)
#endif

#if Rte_SysCon_Variant_HCDR_3
#define HCDR_ac_IN_Init                ((uint8)1U)
#endif

#if Rte_SysCon_Variant_HCDR_3
#define HCDR_ac_IN_Init1               ((uint8)2U)
#endif

#if Rte_SysCon_Variant_HCDR_3
#define HCDR_ac_IN_Latch_Initial_AC_Pressure ((uint8)9U)
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
#define START_SEC_CALIB_UNSPECIFIED_HCDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, HCDR_VAR_INIT)
    HeHCDR_b_AC_FltState_ACclutchFlt_mHEVEnb = 0;/* Referenced by: '<S22>/Calib' */
static volatile CONST(boolean, HCDR_VAR_INIT)
    HeHCDR_b_AC_FltState_ECVDFlt_mHEVEnb = 0;/* Referenced by: '<S23>/Calib' */
static volatile CONST(boolean, HCDR_VAR_INIT)
    HeHCDR_b_AC_FltState_HghPresSen_FailSts_mHEVEnb = 0;/* Referenced by: '<S24>/Calib' */

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) HeHCDR_b_Htr2CommBus_Slct = 1;/* Referenced by: '<S521>/Calib' */

#endif

#if (!Rte_SysCon_Variant_HCDR_12 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_12 && Rte_SysCon_Variant_HCDR_3)

static volatile CONST(TeHCDR_e_CommBusOff, HCDR_VAR_INIT)
    HeHCDR_e_EAC_BusOff_Slct = CeHCDR_e_LIN3_BusOff;/* Referenced by: '<S181>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_13 && Rte_SysCon_Variant_HCDR_5

static volatile CONST(TeHCDR_e_CommBusOff, HCDR_VAR_INIT)
    HeHCDR_e_Htr1_LINBusOff_Slct = CeHCDR_e_LIN3_BusOff;/* Referenced by: '<S445>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_8

static volatile CONST(float32, HCDR_VAR_INIT) HeHCDR_t_MedTEH = 0.1F;/* Referenced by:
                                                                      * '<S39>/Calib'
                                                                      * '<S313>/Calib'
                                                                      * '<S809>/Calib'
                                                                      * '<S87>/Calib'
                                                                      * '<S375>/Calib'
                                                                      * '<S886>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KaHCDR_b_IUMPR_Htr1_Enbl[10] =
{
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1
} ;                                    /* Referenced by: '<S427>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KaHCDR_b_IUMPR_Htr4_Enbl[11] =
{
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
} ;                                    /* Referenced by: '<S928>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(sint16, HCDR_VAR_INIT) KeHCDR_Cnt_ACComp_ContWait = 300;
                                    /* Referenced by: '<S186>/PressSnsr_Diag' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(sint16, HCDR_VAR_INIT) KeHCDR_Cnt_ACComp_InitWait = 750;
                                    /* Referenced by: '<S186>/PressSnsr_Diag' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(sint16, HCDR_VAR_INIT) KeHCDR_Cnt_ACDiag_ContMaxtm = 750;
                                    /* Referenced by: '<S186>/PressSnsr_Diag' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(sint16, HCDR_VAR_INIT) KeHCDR_Cnt_ACDiag_ContMaxtm_Pass =
    2;                              /* Referenced by: '<S186>/PressSnsr_Diag' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(sint16, HCDR_VAR_INIT) KeHCDR_Cnt_ACDiag_InitMaxtm = 120;
                                    /* Referenced by: '<S186>/PressSnsr_Diag' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(sint16, HCDR_VAR_INIT) KeHCDR_Cnt_ACDiag_InitMaxtm_Pass =
    2;                              /* Referenced by: '<S186>/PressSnsr_Diag' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(sint16, HCDR_VAR_INIT) KeHCDR_Cnt_ContDiagStateWait = 1;
                                    /* Referenced by: '<S186>/PressSnsr_Diag' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_Cnt_DiagRate = 100.0F;/* Referenced by: '<S76>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(uint16, HCDR_VAR_INIT) KeHCDR_Cnt_EACPref_BDEnbl_app2 =
    5000U;                             /* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(uint16, HCDR_VAR_INIT) KeHCDR_Cnt_EACPref_FailCnt = 50U;/* Referenced by: '<S99>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(uint16, HCDR_VAR_INIT) KeHCDR_Cnt_EACPref_SmpCnt = 60U;/* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(uint16, HCDR_VAR_INIT) KeHCDR_Cnt_EAC_ComFault_Lim = 3U;/* Referenced by: '<S56>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(uint16, HCDR_VAR_INIT) KeHCDR_Cnt_EAC_CompOffTime_app2 =
    10U;                               /* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(uint16, HCDR_VAR_INIT) KeHCDR_Cnt_HVC_Heater2_FailCnt =
    1000U;                             /* Referenced by: '<S532>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(uint16, HCDR_VAR_INIT) KeHCDR_Cnt_HVC_Heater2_SmpCnt =
    1200U;                             /* Referenced by: '<S533>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(uint16, HCDR_VAR_INIT) KeHCDR_Cnt_HVC_Heater3_FailCnt =
    1000U;                             /* Referenced by: '<S727>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(uint16, HCDR_VAR_INIT) KeHCDR_Cnt_HVC_Heater3_SmpCnt =
    1200U;                             /* Referenced by: '<S728>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(uint16, HCDR_VAR_INIT) KeHCDR_Cnt_HVC_Heater4_FailCnt =
    1000U;                             /* Referenced by: '<S817>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(uint16, HCDR_VAR_INIT) KeHCDR_Cnt_HVC_Heater4_SmpCnt =
    1200U;                             /* Referenced by: '<S818>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(uint16, HCDR_VAR_INIT) KeHCDR_Cnt_HVC_Heater_FailCnt =
    1000U;                             /* Referenced by: '<S321>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(uint16, HCDR_VAR_INIT) KeHCDR_Cnt_HVC_Heater_SmpCnt =
    1200U;                             /* Referenced by: '<S322>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_Cnt_Htr2DelayTm = 255.0F;/* Referenced by: '<S568>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_Cnt_Htr3DelayTm = 255.0F;/* Referenced by: '<S718>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(sint16, HCDR_VAR_INIT) KeHCDR_Cnt_InitDiagStateWait = 2;
                                    /* Referenced by: '<S186>/PressSnsr_Diag' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(sint16, HCDR_VAR_INIT) KeHCDR_Cnt_InitWaitTh = 300;
                                    /* Referenced by: '<S186>/PressSnsr_Diag' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(sint16, HCDR_VAR_INIT) KeHCDR_Cnt_StateWait_ContFail = 220;
                                    /* Referenced by: '<S186>/PressSnsr_Diag' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(sint16, HCDR_VAR_INIT) KeHCDR_Cnt_StateWait_ContPass = 220;
                                    /* Referenced by: '<S186>/PressSnsr_Diag' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(sint16, HCDR_VAR_INIT) KeHCDR_Cnt_StateWait_InitFail = 30;
                                    /* Referenced by: '<S186>/PressSnsr_Diag' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(sint16, HCDR_VAR_INIT) KeHCDR_Cnt_StateWait_InitPass = 30;
                                    /* Referenced by: '<S186>/PressSnsr_Diag' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_I_HVC_CrntAct_Max = 40.0F;/* Referenced by: '<S492>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_I_Htr2HVC_CrntAct_Max =
    40.0F;                             /* Referenced by: '<S657>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_I_Htr4HVC_CrntAct_Max =
    40.0F;                             /* Referenced by: '<S988>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_T_ECHTrgtTemp = 1.0F;/* Referenced by: '<S376>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_T_HVC_Htr4ClntIn_Temp_Max =
    0.0F;                              /* Referenced by: '<S902>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_T_HVC_HtrClntIn_Temp_Max =
    0.0F;                              /* Referenced by: '<S377>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_T_Htr2TrgtTemp = 1.0F;/* Referenced by: '<S579>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_T_Htr2_CoreTemp_Max = 0.0F;/* Referenced by: '<S580>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_T_Htr2_PCBTemp_Max = 0.0F;/* Referenced by: '<S581>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_T_Htr3TrgtTemp = 1.0F;/* Referenced by: '<S696>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_T_Htr3_BattTmpMin_Mxthrshld
    = 0.0F;                            /* Referenced by: '<S697>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_T_Htr4TrgtTemp = 1.0F;/* Referenced by: '<S887>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_U_Htr1_SysVltg_Max = 16.0F;/* Referenced by: '<S365>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_U_Htr1_SysVltg_Min = 7.0F;/* Referenced by: '<S366>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_U_Htr2_SysVltg_Max = 16.0F;/* Referenced by: '<S582>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_U_Htr2_SysVltg_Min = 7.0F;/* Referenced by: '<S583>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_U_Htr4_SysVltg_Max = 16.0F;/* Referenced by: '<S874>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_U_Htr4_SysVltg_Min = 7.0F;/* Referenced by: '<S875>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_U_SysVltg_D = 0.0F;/* Referenced by: '<S1011>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_W_ActPwr_BCH = 900.0F;/* Referenced by: '<S810>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_W_ActPwr_ECH = 900.0F;/* Referenced by: '<S314>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_W_DelHVHeat1Pwr = 500.0F;/* Referenced by: '<S355>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_W_DelHVHeat2Pwr = 700.0F;/* Referenced by: '<S572>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_W_DelHVHeat3Pwr = 4.0F;/* Referenced by: '<S723>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_W_DelHVHeat4Pwr = 500.0F;/* Referenced by: '<S852>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_W_ECH_PrvPowr = 1023.0F;/* Referenced by: '<S378>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_W_Htr2_PrvPowr = 1023.0F;/* Referenced by: '<S584>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_W_Htr3_PrvPowr = 1023.0F;/* Referenced by: '<S698>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_W_Htr4PwrExpectd_MaxFlt =
    7800.0F;                           /* Referenced by: '<S1007>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_W_Htr4_PrvPowr = 1023.0F;/* Referenced by: '<S888>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_W_HtrPwrExpectd_MaxFlt =
    7800.0F;                           /* Referenced by: '<S511>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_ACComp_Defrost_Mode_EnApp1 = 1;/* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_ACComp_RPM_Const_En = 1;/* Referenced by: '<S232>/Calib' */

#endif

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_AC_Comp_Fault_Dial = 0;/* Referenced by: '<S1043>/Calib' */
static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_AC_Comp_Fault_SelDial = 0;/* Referenced by: '<S1044>/Calib' */
static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_AC_FaultState_CompPerfEnb
    = 1;                               /* Referenced by: '<S26>/Calib' */
static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_AC_FltState_HghPresSen_FA_Enb = 1;/* Referenced by: '<S27>/Calib' */
static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_AC_FltState_HghPresSen_PerfEnb = 0;/* Referenced by: '<S28>/Calib' */

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_BPCM_LINLOC_FA_D = 0;/* Referenced by: '<S1012>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_BPCM_LINLOC_FA_SD = 0;/* Referenced by: '<S1013>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_BPCM_LINLOC_SD = 0;/* Referenced by: '<S1014>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_10 && Rte_SysCon_Variant_HCDR_5) || (Rte_SysCon_Variant_HCDR_10 && Rte_SysCon_Variant_HCDR_8)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_BPCM_RedunCommCheckEnbl =
    1;                                 /* Referenced by: '<S282>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_BattTemp_4SnsrCnfg = 0;/* Referenced by: '<S860>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_BattTemp_MaxEnb = 0;/* Referenced by: '<S861>/Calib' */

#endif

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_BatteryThermalFault_SelDial = 0;/* Referenced by: '<S1045>/Calib' */

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_BussOff_Fault_OV = 0;/* Referenced by: '<S367>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_BussOff_Htr2Fault_OV = 0;/* Referenced by: '<S585>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_ComFault_Counter_En = 1;/* Referenced by: '<S57>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_CommBussOff_Dial = 0;/* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_CompSpdFdbFA_FltCndsEn =
    1;                                 /* Referenced by: '<S96>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_CompSpdFdb_FA_En = 1;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_CoolHeaterAPerf_LtchEnbl =
    0;                                 /* Referenced by: '<S323>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_CoolantHeaterBPerf_LtchEnbl = 0;/* Referenced by: '<S819>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_DCDC_VltgOutofRng_Enb = 0;/* Referenced by: '<S499>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_DCDC_VltgOutofRng_FA_Enb =
    0;                                 /* Referenced by: '<S500>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Degraded_Mode_En = 0;/* Referenced by: '<S77>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_DiagLatch_En = 0;/* Referenced by: '<S324>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_DsblCompTgtSpd_InitCheck =
    0;                                 /* Referenced by: '<S233>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_DsblDiagFailSafe_D = 0;/* Referenced by: '<S1015>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_DsblDiagFailSafe_SD = 0;/* Referenced by: '<S1016>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_EACPerf_LtchEnbl = 0;/* Referenced by: '<S101>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_EACPrefFlt_Dial = 0;/* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_EACPref_Flt = 1;/* Referenced by: '<S102>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_EACPref_XYEnbl = 1;/* Referenced by: '<S103>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_EAC_CompOff_En = 1;/* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_EAC_PerfCndsOV_En = 1;/* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_EAC_SysVltg_OV = 1;/* Referenced by: '<S15>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_ECH_Inlet_Fault_OV = 0;/* Referenced by: '<S407>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_ECH_Outlet_Fault_OV = 0;/* Referenced by: '<S408>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Enbl_LTAPTmp_Htr4Diag = 0;/* Referenced by: '<S862>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Enbl_PPCTIS_Chk = 0;/* Referenced by: '<S863>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_FanFault_DisableDebounceRST = 0;/* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HTR2DAppSel = 1;/* Referenced by: '<S569>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HTR3DAppSel = 1;/* Referenced by: '<S719>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HTSO_CktFA_OV = 0;/* Referenced by: '<S409>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HTSO_CktHiFA_OV = 0;/* Referenced by: '<S410>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HTSO_CktLoFA_OV = 0;/* Referenced by: '<S411>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HTSO_StckClsdFA_OV = 0;/* Referenced by: '<S412>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HTSO_StckOpnFA_OV = 0;/* Referenced by: '<S413>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HTSO_VlvChk_AppSel = 1;/* Referenced by: '<S414>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HTSO_VlvSts_OV = 0;/* Referenced by: '<S415>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HTShtoff_VlvCmd_Chk_OV =
    0;                                 /* Referenced by: '<S416>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_HVC_Heater2_Diag_ThrmlEnbl = 0;/* Referenced by: '<S586>/Calib' */

#endif

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HVC_Heater2_FltDtct_D = 0;/* Referenced by: '<S1066>/Calib' */
static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HVC_Heater2_FltDtct_SD =
    0;                                 /* Referenced by: '<S1067>/Calib' */

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HVC_Heater2_FltEn = 1;/* Referenced by: '<S534>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HVC_Heater2_XYEnbl = 1;/* Referenced by: '<S535>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_HVC_Heater3_Diag_ThrmlEnbl = 0;/* Referenced by: '<S699>/Calib' */

#endif

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HVC_Heater3_FltDtct_D = 0;/* Referenced by: '<S1072>/Calib' */
static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HVC_Heater3_FltDtct_SD =
    0;                                 /* Referenced by: '<S1073>/Calib' */

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HVC_Heater3_FltEn = 1;/* Referenced by: '<S729>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HVC_Heater3_XYEnbl = 1;/* Referenced by: '<S730>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_HVC_Heater4_Diag_ThrmlEnbl = 0;/* Referenced by: '<S876>/Calib' */

#endif

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HVC_Heater4_FltDtct_D = 0;/* Referenced by: '<S1080>/Calib' */
static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HVC_Heater4_FltDtct_SD =
    0;                                 /* Referenced by: '<S1081>/Calib' */

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HVC_Heater4_FltEn = 1;/* Referenced by: '<S820>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HVC_Heater4_XYEnbl = 1;/* Referenced by: '<S821>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HVC_Heater_Diag_ThrmlEnbl
    = 0;                               /* Referenced by: '<S368>/Calib' */

#endif

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HVC_Heater_FltDtct_D = 0;/* Referenced by: '<S1058>/Calib' */
static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HVC_Heater_FltDtct_SD = 0;/* Referenced by: '<S1059>/Calib' */

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HVC_Heater_FltEn = 1;/* Referenced by: '<S325>/Calib' */

#endif

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HVC_Heater_WarningFlag_D =
    0;                                 /* Referenced by: '<S1062>/Calib' */
static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HVC_Heater_WarningFlag_SD
    = 0;                               /* Referenced by: '<S1063>/Calib' */

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HVC_Heater_XYEnbl = 1;/* Referenced by: '<S326>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HV_CrntOutofRng_Enb = 0;/* Referenced by: '<S496>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HV_CrntOutofRng_FA_Enb =
    0;                                 /* Referenced by: '<S497>/Calib' */

#endif

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HV_Heater2_WarningFlag_D =
    0;                                 /* Referenced by: '<S1068>/Calib' */
static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HV_Heater2_WarningFlag_SD
    = 0;                               /* Referenced by: '<S1069>/Calib' */
static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HV_Heater3_WarningFlag_D =
    0;                                 /* Referenced by: '<S1074>/Calib' */
static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HV_Heater3_WarningFlag_SD
    = 0;                               /* Referenced by: '<S1075>/Calib' */
static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HV_Heater4_WarningFlag_D =
    0;                                 /* Referenced by: '<S1082>/Calib' */
static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HV_Heater4_WarningFlag_SD
    = 0;                               /* Referenced by: '<S1083>/Calib' */

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HV_Htr2CrntOutofRng_Enb =
    0;                                 /* Referenced by: '<S661>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_HV_Htr2CrntOutofRng_FA_Enb = 0;/* Referenced by: '<S662>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HV_Htr4CrntOutofRng_Enb =
    0;                                 /* Referenced by: '<S992>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_HV_Htr4CrntOutofRng_FA_Enb = 0;/* Referenced by: '<S993>/Calib' */

#endif

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Heater1_LOC_D = 0;/* Referenced by: '<S1060>/Calib' */
static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Heater1_LOC_SD = 0;/* Referenced by: '<S1061>/Calib' */

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HeatingElmntPerf_LtchEnbl
    = 0;                               /* Referenced by: '<S731>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_HighVolCabinAirHtrperf_LtchEnbl = 0;/* Referenced by: '<S536>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr1FltPwrChkEn = 0;/* Referenced by: '<S351>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr1FltStsChkEn = 1;/* Referenced by: '<S352>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr1HV_BatCntctrStat_OV =
    0;                                 /* Referenced by: '<S369>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr1PwrActFA_Enbl = 1;/* Referenced by: '<S356>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr1_PerfCndsOV_En = 1;/* Referenced by: '<S379>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr1_SysVltg_OV = 0;/* Referenced by: '<S370>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2CoreTemp_SensFlt_Enb =
    0;                                 /* Referenced by: '<S629>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_Htr2CoreTemp_SensFlt_FA_Enb = 0;/* Referenced by: '<S630>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2Core_OvrTmp_Enb = 0;/* Referenced by: '<S668>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2Core_OvrTmp_FA_Enb =
    0;                                 /* Referenced by: '<S669>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2DelayEnable_Sel = 1;/* Referenced by: '<S570>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2DiagLatch_En = 0;/* Referenced by: '<S537>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2DrvFlt_Enb = 0;/* Referenced by: '<S664>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2DrvFlt_FA_Enb = 0;/* Referenced by: '<S665>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2HVCrnt_SnsrFlt_Enb =
    0;                                 /* Referenced by: '<S632>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2HVCrnt_SnsrFlt_FA_Enb
    = 0;                               /* Referenced by: '<S633>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2IntCom_Err_Enb = 0;/* Referenced by: '<S638>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2IntCom_Err_FA_Enb = 0;/* Referenced by: '<S639>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2PCBTmp_SnsrFlt_Enb =
    0;                                 /* Referenced by: '<S670>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2PCBTmp_SnsrFlt_FA_Enb
    = 0;                               /* Referenced by: '<S671>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2ProcesMemory_Flt_Enb =
    0;                                 /* Referenced by: '<S674>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_Htr2ProcesMemory_Flt_FA_Enb = 0;/* Referenced by: '<S675>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2PwrExpectds_Fault_OV =
    0;                                 /* Referenced by: '<S587>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2Resis_PCB_OT_Enb = 0;/* Referenced by: '<S644>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2Resis_PCB_OT_FA_Enb =
    0;                                 /* Referenced by: '<S645>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2SelfProtect_Actv_Enb =
    0;                                 /* Referenced by: '<S647>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_Htr2SelfProtect_Actv_FA_Enb = 0;/* Referenced by: '<S648>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2Status_Fault_En = 0;/* Referenced by: '<S588>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2TempTgt_Fault_OV = 0;/* Referenced by: '<S589>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2ThrmlRlyCtrlCkt_FA_OV
    = 0;                               /* Referenced by: '<S590>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2TmpOvrheatg_Enb = 0;/* Referenced by: '<S650>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2TmpOvrheatg_FA_Enb =
    0;                                 /* Referenced by: '<S651>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2WarningFlagEnb = 0;/* Referenced by: '<S564>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2_CoreTemp_FA_OV = 0;/* Referenced by: '<S591>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2_CoreTemp_OV = 0;/* Referenced by: '<S592>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2_HV_CrntAct_Enb = 0;/* Referenced by: '<S658>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2_HV_CrntAct_FA_Enb =
    0;                                 /* Referenced by: '<S659>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2_HV_OutofRng_Enb = 0;/* Referenced by: '<S635>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2_HV_OutofRng_FA_Enb =
    0;                                 /* Referenced by: '<S636>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2_LIN_ResErr_Enb = 0;/* Referenced by: '<S672>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2_LV_OutofRng_Enb = 0;/* Referenced by: '<S641>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2_LV_OutofRng_FA_Enb =
    0;                                 /* Referenced by: '<S642>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2_PCBTemp_FA_OV = 0;/* Referenced by: '<S593>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2_PCBTemp_OV = 0;/* Referenced by: '<S594>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2_PwrActFA_OV = 0;/* Referenced by: '<S595>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr2_SysVltg_OV = 0;/* Referenced by: '<S596>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr3BattTmpMin_En = 0;/* Referenced by: '<S700>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr3BussOff_Fault_OV = 0;/* Referenced by: '<S701>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_Htr3Cntctr_StckClsdWrn_Enb = 0;/* Referenced by: '<S776>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_Htr3Cntctr_StckClsdWrn_FA_Enb = 0;/* Referenced by: '<S777>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_Htr3Cntctr_StckClsd_Fault_En = 0;/* Referenced by: '<S702>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr3DelayEnable_Sel = 1;/* Referenced by: '<S720>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr3DiagLatch_En = 0;/* Referenced by: '<S732>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr3PwrAct_FA_Enb = 0;/* Referenced by: '<S775>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr3PwrAct_FA_OV = 0;/* Referenced by: '<S703>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr3PwrExpectds_Fault_OV =
    0;                                 /* Referenced by: '<S704>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr3Status_Fault_En = 0;/* Referenced by: '<S705>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr3TempTgt_Fault_OV = 0;/* Referenced by: '<S706>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr3ThrmlRlyCtrlCkt_FA_OV
    = 0;                               /* Referenced by: '<S707>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr3WarningFlagEnb = 0;/* Referenced by: '<S714>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4BotlLvl_BSW_flt_OV =
    0;                                 /* Referenced by: '<S903>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4BotlLvl_Fault_OV = 0;/* Referenced by: '<S904>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4ClntIn_Max_En = 0;/* Referenced by: '<S905>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_Htr4ClntIn_TempSensFlt_Enb = 0;/* Referenced by: '<S964>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_Htr4ClntIn_TempSensFlt_FA_Enb = 0;/* Referenced by: '<S965>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4ClntIn_Temp_FA_Enb =
    0;                                 /* Referenced by: '<S1000>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_Htr4ClntOut_TempSensFlt_Enb = 0;/* Referenced by: '<S973>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_Htr4ClntOut_TempSensFlt_FA_Enb = 0;/* Referenced by: '<S974>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4ClntOut_Temp_FA_Enb =
    0;                                 /* Referenced by: '<S1001>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4ClntTemp_OutofRng_Enb
    = 0;                               /* Referenced by: '<S955>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_Htr4ClntTemp_OutofRng_FA_Enb = 0;/* Referenced by: '<S956>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4CoreTemp_SensFlt_Enb =
    0;                                 /* Referenced by: '<S958>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_Htr4CoreTemp_SensFlt_FA_Enb = 0;/* Referenced by: '<S959>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4DCDC_VltgOutofRng_Enb
    = 0;                               /* Referenced by: '<S995>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_Htr4DCDC_VltgOutofRng_FA_Enb = 0;/* Referenced by: '<S996>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4DiagLatch_En = 0;/* Referenced by: '<S822>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4DrvFlt_Enb = 0;/* Referenced by: '<S998>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4DrvFlt_FA_Enb = 0;/* Referenced by: '<S999>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4FltPwrChkEn = 0;/* Referenced by: '<S847>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4FltStsChkEn = 1;/* Referenced by: '<S848>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4HV_BatCntctrStat_OV =
    0;                                 /* Referenced by: '<S877>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4IntCom_Err_Enb = 0;/* Referenced by: '<S967>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4IntCom_Err_FA_Enb = 0;/* Referenced by: '<S968>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4ProcesMemory_Flt_Enb =
    0;                                 /* Referenced by: '<S1005>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_Htr4ProcesMemory_Flt_FA_Enb = 0;/* Referenced by: '<S1006>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4PwrActFA_Enbl = 1;/* Referenced by: '<S853>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4PwrAct_FA_Enb = 0;/* Referenced by: '<S1002>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4PwrExpectd_Enb = 0;/* Referenced by: '<S1008>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4PwrExpectd_FA_Enb = 0;/* Referenced by: '<S1009>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4PwrExpectds_Fault_OV =
    0;                                 /* Referenced by: '<S889>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4Resis_PCB_OT_Enb = 0;/* Referenced by: '<S976>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4Resis_PCB_OT_FA_Enb =
    0;                                 /* Referenced by: '<S977>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4SelfProtect_Actv_Enb =
    0;                                 /* Referenced by: '<S979>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_Htr4SelfProtect_Actv_FA_Enb = 0;/* Referenced by: '<S980>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4Status_Fault_En = 0;/* Referenced by: '<S890>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4TempOutFA_FltDtct_OV =
    0;                                 /* Referenced by: '<S906>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4TempOut_FltDtct_OV =
    0;                                 /* Referenced by: '<S907>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4TempTgt_Fault_OV = 0;/* Referenced by: '<S891>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4ThrmlRlyCtrlCkt_FA_OV
    = 0;                               /* Referenced by: '<S908>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4WarningFlagEnb = 0;/* Referenced by: '<S849>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_BCPDryRun_OV = 0;/* Referenced by: '<S878>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_BCPPerf_OV = 0;/* Referenced by: '<S879>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_BPCM_LINFA_Fault_OV =
    0;                                 /* Referenced by: '<S909>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_BPCM_LIN_Fault_OV =
    0;                                 /* Referenced by: '<S910>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_HV_CrntAct_Enb = 0;/* Referenced by: '<S989>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_HV_CrntAct_FA_Enb =
    0;                                 /* Referenced by: '<S990>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_HV_OutofRng_Enb = 0;/* Referenced by: '<S961>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_HV_OutofRng_FA_Enb =
    0;                                 /* Referenced by: '<S962>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_Inlet_Fault_OV = 0;/* Referenced by: '<S911>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_LIN_ResErr_Enb = 0;/* Referenced by: '<S1003>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_LOC_BPCM_FA_D = 0;/* Referenced by: '<S1017>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_LOC_BPCM_FA_SD = 0;/* Referenced by: '<S1018>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_LOC_BPCM_SD = 0;/* Referenced by: '<S1019>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_LTAP_LOCFA_OV = 0;/* Referenced by: '<S912>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_LTAP_LOC_OV = 0;/* Referenced by: '<S913>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_LV_OutofRng_Enb = 0;/* Referenced by: '<S970>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_LV_OutofRng_FA_Enb =
    0;                                 /* Referenced by: '<S971>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_LossCommBCH_OV = 0;/* Referenced by: '<S880>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_LossCommBCP_OV = 0;/* Referenced by: '<S881>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_PerfCndsOV_En = 1;/* Referenced by: '<S892>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr4_SysVltg_OV = 0;/* Referenced by: '<S882>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrClntIn_Max_En = 0;/* Referenced by: '<S380>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrClntIn_TempSensFlt_Enb
    = 0;                               /* Referenced by: '<S468>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_HtrClntIn_TempSensFlt_FA_Enb = 0;/* Referenced by: '<S469>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrClntIn_Temp_FA_Enb = 0;/* Referenced by: '<S504>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_HtrClntOut_TempSensFlt_Enb = 0;/* Referenced by: '<S477>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_HtrClntOut_TempSensFlt_FA_Enb = 0;/* Referenced by: '<S478>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrClntOut_Temp_FA_Enb =
    0;                                 /* Referenced by: '<S505>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrClntTemp_OutofRng_Enb =
    0;                                 /* Referenced by: '<S459>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_HtrClntTemp_OutofRng_FA_Enb = 0;/* Referenced by: '<S460>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrCoreTemp_SensFlt_Enb =
    0;                                 /* Referenced by: '<S462>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_HtrCoreTemp_SensFlt_FA_Enb = 0;/* Referenced by: '<S463>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrDrvFlt_Enb = 0;/* Referenced by: '<S502>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrDrvFlt_FA_Enb = 0;/* Referenced by: '<S503>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrIntCom_Err_Enb = 0;/* Referenced by: '<S471>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrIntCom_Err_FA_Enb = 0;/* Referenced by: '<S472>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrProcesMemory_Flt_Enb =
    0;                                 /* Referenced by: '<S509>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_HtrProcesMemory_Flt_FA_Enb = 0;/* Referenced by: '<S510>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrPwrAct_FA_Enb = 0;/* Referenced by: '<S506>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrPwrExpectd_Enb = 0;/* Referenced by: '<S512>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrPwrExpectd_FA_Enb = 0;/* Referenced by: '<S513>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrPwrExpectds_Fault_OV =
    0;                                 /* Referenced by: '<S381>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrResis_PCB_OT_Enb = 0;/* Referenced by: '<S480>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrResis_PCB_OT_FA_Enb =
    0;                                 /* Referenced by: '<S481>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrSelfProtect_Actv_Enb =
    0;                                 /* Referenced by: '<S483>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_HtrSelfProtect_Actv_FA_Enb = 0;/* Referenced by: '<S484>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrStatus_Fault_En = 1;/* Referenced by: '<S382>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_HtrTempTgt_Fault_OV = 0;/* Referenced by: '<S383>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr_HV_CrntAct_Enb = 0;/* Referenced by: '<S493>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr_HV_CrntAct_FA_Enb = 0;/* Referenced by: '<S494>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr_HV_OutofRng_Enb = 0;/* Referenced by: '<S465>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr_HV_OutofRng_FA_Enb =
    0;                                 /* Referenced by: '<S466>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr_LIN_ResErr_Enb = 0;/* Referenced by: '<S507>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr_LV_OutofRng_Enb = 0;/* Referenced by: '<S474>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Htr_LV_OutofRng_FA_Enb =
    0;                                 /* Referenced by: '<S475>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_IUMPR_EACPerf_ChlrVlvShrtHi_Enbl = 0;/* Referenced by: '<S163>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_IUMPR_EACPerf_CompCommErr_Enbl = 1;/* Referenced by: '<S164>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_IUMPR_EACPerf_Enbl = 1;/* Referenced by: '<S165>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_IUMPR_EACPerf_Ovrrd = 0;/* Referenced by: '<S166>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_IUMPR_EACPerf_PressSnsrPerf_Enbl = 1;/* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_IUMPR_EACPerf_PressSnsrShrtHi_Enbl = 1;/* Referenced by: '<S168>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_IUMPR_EACPerf_PressSnsrShrtLow_Enbl = 1;/* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_IUMPR_EACPerf_ThrmlRly_Enbl = 1;/* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_IUMPR_PressSnsrPerf_CompCommErr_Enbl = 1;/* Referenced by: '<S250>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_IUMPR_PressSnsrPerf_EACPerf_Enbl = 1;/* Referenced by: '<S251>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_IUMPR_PressSnsrPerf_Enbl =
    1;                                 /* Referenced by: '<S252>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_IUMPR_PressSnsrPerf_Ovrrd
    = 0;                               /* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_IUMPR_PressSnsrPerf_PressSnsrShrtHi_Enbl = 1;/* Referenced by: '<S254>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_IUMPR_PressSnsrPerf_PressSnsrShrtLow_Enbl = 1;/* Referenced by: '<S255>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(boolean, HCDR_VAR_INIT)
    KeHCDR_b_IUMPR_PressSnsrPerf_ThrmlRly_Enbl = 1;/* Referenced by: '<S256>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_InitDiagOverride = 0;
                                    /* Referenced by: '<S186>/PressSnsr_Diag' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_InitDiag_Bypass_En = 1;/* Referenced by: '<S193>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_LOCBPCMHtr3_Fault_OV = 0;/* Referenced by: '<S708>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_LTAP_LOC_FA_D = 0;/* Referenced by: '<S1020>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_LTAP_LOC_FA_SD = 0;/* Referenced by: '<S1021>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_LTAP_LOC_SD = 0;/* Referenced by: '<S1022>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_LossCommECH_Fault_OV = 0;/* Referenced by: '<S371>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_LossCommHtr2_Fault_OV = 0;/* Referenced by: '<S597>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_LossCommHtr4FA_Fault_OV =
    0;                                 /* Referenced by: '<S914>/Calib' */

#endif

#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_LossCommHtr4_Fault_OV = 0;/* Referenced by: '<S915>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_PowerMode_SelDial = 0;/* Referenced by: '<S1023>/Calib' */

#endif

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_PressSnsr_FltDtctEnOv = 0;/* Referenced by: '<S1047>/Calib' */
static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_PressSnsr_FltDtctOv = 0;/* Referenced by: '<S1048>/Calib' */

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_PropSysActv_D = 0;/* Referenced by: '<S1024>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_PropSysActv_SD = 0;/* Referenced by: '<S1025>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_PstCdeClrDiagDsbl_D = 0;/* Referenced by: '<S1026>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_PstCdeClrDiagDsbl_SD = 0;/* Referenced by: '<S1027>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_RadFanFlt_Ovrd = 0;/* Referenced by: '<S69>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_RealTimeClock_SD = 0;/* Referenced by: '<S1028>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_RealTime_Update_En = 1;/* Referenced by: '<S221>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_RlyCmdEnbl_OV = 0;/* Referenced by:
                                                                      * '<S247>/Calib'
                                                                      * '<S396>/Calib'
                                                                      * '<S896>/Calib'
                                                                      * '<S62>/Calib'
                                                                      */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_SysVltg_SD = 0;/* Referenced by: '<S1029>/Calib' */

#endif

#if (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (!Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5)

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_ThrmlRlyCtrlCkt_FA_OV = 0;/* Referenced by:
                                                                      * '<S397>/Calib'
                                                                      * '<S417>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_Thrmrly_FltDct_Ovrd = 1;/* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(boolean, HCDR_VAR_INIT) KeHCDR_b_WarningFlagEnb = 0;/* Referenced by: '<S353>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(TeBPCR_e_LIN_BusOff, HCDR_VAR_INIT) KeHCDR_e_BPCM_LINLOC_D
    = CeBPCR_e_LIN_BusOff_Disabled;    /* Referenced by: '<S1030>/Calib' */

#endif

static volatile CONST(TeHCDR_e_BatteryThermalFault, HCDR_VAR_INIT)
    KeHCDR_e_BatteryThermalFault_Dial = CeHCDR_e_BattThermalNoFault;/* Referenced by: '<S1046>/Calib' */

#if (Rte_SysCon_Variant_HCDR_12 && Rte_SysCon_Variant_HCDR_2) || (Rte_SysCon_Variant_HCDR_12 && Rte_SysCon_Variant_HCDR_3)

static volatile CONST(TeHCDR_e_CommBusOff, HCDR_VAR_INIT)
    KeHCDR_e_EAC_DifferentBusOff_Slct = CeHCDR_e_LIN2_BusOff;/* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_13 && Rte_SysCon_Variant_HCDR_5

static volatile CONST(TeHCDR_e_CommBusOff, HCDR_VAR_INIT)
    KeHCDR_e_Htr1_DifferentLINBusOff_Slct = CeHCDR_e_LIN3_BusOff;/* Referenced by: '<S446>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static volatile CONST(TeHTIR_e_HVC_HtrSts, HCDR_VAR_INIT)
    KeHCDR_e_Htr2Operational_Status = CeHTIR_e_HtrSts_Operation;/* Referenced by: '<S573>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(TeHTIR_e_HVC_Htr_Warning, HCDR_VAR_INIT)
    KeHCDR_e_Htr3Cntctr_StckClsdActv = CeHTIR_e_Warning_True;/* Referenced by: '<S778>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static volatile CONST(TeHTIR_e_HVC_HtrSts, HCDR_VAR_INIT)
    KeHCDR_e_Htr3Operational_Status = CeHTIR_e_HtrSts_Operation;/* Referenced by: '<S724>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(TeBPCR_e_LOC_BatClntHtr, HCDR_VAR_INIT)
    KeHCDR_e_Htr4_LOC_BPCM_D = CeBPCR_e_LOC_BatClntHtr_False;/* Referenced by: '<S1031>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(TeBPCR_e_LOC_BCP, HCDR_VAR_INIT) KeHCDR_e_LTAP_LOC_D =
    CeBPCR_e_LOC_BCP_False;            /* Referenced by: '<S1032>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(TePMDR_e_PowerMode, HCDR_VAR_INIT) KeHCDR_e_PowerMode_Dial
    = CePMDR_e_PowerMode_Off;          /* Referenced by: '<S1033>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_n_ACComp_RPM_Const_Min =
    5.0F;                              /* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(float32, HCDR_VAR_INIT)
    KeHCDR_n_DisblCompPerf_HugeTgtDelta = 500.0F;/* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(float32, HCDR_VAR_INIT)
    KeHCDR_n_DisblCompPerf_SmallTgtDelta = 250.0F;/* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_n_EAC_CompOff_RPM = 0.0F;/* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_n_EAC_CompOff_RPM_Chk =
    0.0F;                              /* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_n_EAC_CompOn_RPM = 10.0F;/* Referenced by: '<S194>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_n_EAC_CompOn_RPM_Chk =
    800.0F;                            /* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_n_EAC_CompSpdFdb_ON = 0.0F;/* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_n_EAC_RPM_DelChng = 50.0F;/* Referenced by: '<S97>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_n_EAC_RPM_Lim = 960.0F;/* Referenced by: '<S70>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_n_IUMPR_MinRPMmet_Cmd =
    960.0F;                            /* Referenced by: '<S120>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_n_Initial_EAC_RPM = 1000.0F;/* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(float32, HCDR_VAR_INIT)
    KeHCDR_pbar_EAC_Press_ContChgLimMax = 5.0F;
                                    /* Referenced by: '<S186>/PressSnsr_Diag' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(float32, HCDR_VAR_INIT)
    KeHCDR_pbar_EAC_Press_ContChgLimMin = -5.0F;
                                    /* Referenced by: '<S186>/PressSnsr_Diag' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(float32, HCDR_VAR_INIT)
    KeHCDR_pbar_EAC_Press_InitChgLimMax = 5.0F;
                                    /* Referenced by: '<S186>/PressSnsr_Diag' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(float32, HCDR_VAR_INIT)
    KeHCDR_pbar_EAC_Press_InitChgLimMin = -5.0F;
                                    /* Referenced by: '<S186>/PressSnsr_Diag' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_t_CompSpdFdbFA_DbncTime =
    10.0F;                             /* Referenced by: '<S42>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_t_Degraded_Mode = 5.0F;/* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(float32, HCDR_VAR_INIT)
    KeHCDR_t_DisblCompPerf_HugeTgtDelta = 10.0F;/* Referenced by: '<S90>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(float32, HCDR_VAR_INIT)
    KeHCDR_t_DisblCompPerf_SmallTgtDelta = 0.0F;/* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_t_FanFault_DbncTime = 5.0F;/* Referenced by: '<S71>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_t_Htr1AmbTempDelayTmrMax =
    20.0F;                             /* Referenced by: '<S315>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_t_Htr1PwrActFA_WaitTime =
    10.0F;                             /* Referenced by: '<S384>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_t_Htr4AmbTmpDelayTmrMax =
    20.0F;                             /* Referenced by: '<S811>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_t_Htr4PwrActFA_WaitTime =
    10.0F;                             /* Referenced by: '<S893>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_t_IUMPR_LongTimer = 10.0F;/* Referenced by: '<S122>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_t_IUMPR_LoopTime = 0.1F;/* Referenced by:
                                                                      * '<S135>/Calib'
                                                                      * '<S150>/Calib'
                                                                      * '<S156>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HCDR_2

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_t_IUMPR_ShortTimer = 2.0F;/* Referenced by: '<S123>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_t_RPM_ChangChk_Timer = 3.0F;/* Referenced by: '<S239>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_t_RPM_Check = 0.1F;/* Referenced by: '<S240>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(float32, HCDR_VAR_INIT) KeHCDR_t_RPM_NotChang_DisTmr =
    5.0F;                              /* Referenced by: '<S241>/Calib' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static volatile CONST(uint32, HCDR_VAR_INIT) KeHCDR_t_RealTimeClock_D = 0U;/* Referenced by: '<S1034>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static volatile CONST(uint32, HCDR_VAR_INIT) KeHCDR_t_Realtime_CompOff_Timer =
    80U;                               /* Referenced by: '<S230>/Calib' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(float32, HCDR_VAR_INIT) KtHCDR_t_Htr1AmbTmpDelayTmrLUT[5] =
{
    20.0F, 10.0F, 6.0F, 4.0F, 1.0F
} ;                                    /* Referenced by: '<S316>/Vector' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(float32, HCDR_VAR_INIT) KtHCDR_t_Htr4AmbTmpDelayTmrLUT[5] =
{
    20.0F, 10.0F, 6.0F, 4.0F, 1.0F
} ;                                    /* Referenced by: '<S812>/Vector' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static volatile CONST(float32, HCDR_VAR_INIT) KxHCDR_t_Htr1AmbTmpDelayTmrLUT[5] =
{
    -20.0F, -10.0F, 0.0F, 10.0F, 20.0F
} ;                                    /* Referenced by: '<S316>/Vector' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static volatile CONST(float32, HCDR_VAR_INIT) KxHCDR_t_Htr4AmbTmpDelayTmrLUT[5] =
{
    -20.0F, -10.0F, 0.0F, 10.0F, 20.0F
} ;                                    /* Referenced by: '<S812>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_HCDR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HCDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, HCDR_VAR_INIT) EeHCDR_b_InitDiag_Pass_Prev;/* '<Root>/DSM_2' */
static VAR(uint32, HCDR_VAR_INIT) EeHCDR_t_RealTime_Comp_Off;/* '<Root>/DSM_1' */
static VAR(uint32, HCDR_VAR_INIT) EeHCDR_t_RealTime_Comp_On;/* '<Root>/DSM_3' */

#if Rte_SysCon_Variant_HCDR_3

static VAR(sint16, HCDR_VAR_INIT) VeHCDR_Cnt_ACComp_ContWait_AS;/* '<S214>/Gain' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(sint16, HCDR_VAR_INIT) VeHCDR_Cnt_ACComp_InitWait_AS;/* '<S213>/Gain' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(sint16, HCDR_VAR_INIT) VeHCDR_Cnt_ACDiag_ContMaxtm_AS;/* '<S211>/Gain' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(sint16, HCDR_VAR_INIT) VeHCDR_Cnt_ACDiag_ContMaxtm_Pass_AS;/* '<S203>/Gain' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(sint16, HCDR_VAR_INIT) VeHCDR_Cnt_ACDiag_InitMaxtm_AS;/* '<S207>/Gain' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(sint16, HCDR_VAR_INIT) VeHCDR_Cnt_ACDiag_InitMaxtm_Pass_AS;/* '<S204>/Gain' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(sint16, HCDR_VAR_INIT) VeHCDR_Cnt_DiagStateCounter_AS;/* '<S212>/Gain' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(uint16, HCDR_VAR_INIT) VeHCDR_Cnt_EACPref_FailCnt;/* '<S112>/Switch1' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(uint16, HCDR_VAR_INIT) VeHCDR_Cnt_EACPref_SmpCnt;/* '<S113>/Switch1' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(uint16, HCDR_VAR_INIT) VeHCDR_Cnt_EAC_ComFault;/* '<S49>/Switch' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static VAR(uint16, HCDR_VAR_INIT) VeHCDR_Cnt_HVClntHtr2Tm;/* '<S565>/Switch1' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static VAR(uint16, HCDR_VAR_INIT) VeHCDR_Cnt_HVClntHtr3Tm;/* '<S715>/Switch1' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static VAR(uint16, HCDR_VAR_INIT) VeHCDR_Cnt_Htr1_FailCnt;/* '<S341>/Switch1' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static VAR(uint16, HCDR_VAR_INIT) VeHCDR_Cnt_Htr1_SmpCnt;/* '<S342>/Switch1' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static VAR(uint16, HCDR_VAR_INIT) VeHCDR_Cnt_Htr2_FailCnt;/* '<S552>/Switch1' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static VAR(uint16, HCDR_VAR_INIT) VeHCDR_Cnt_Htr2_SmpCnt;/* '<S553>/Switch1' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static VAR(uint16, HCDR_VAR_INIT) VeHCDR_Cnt_Htr3_FailCnt;/* '<S747>/Switch1' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static VAR(uint16, HCDR_VAR_INIT) VeHCDR_Cnt_Htr3_SmpCnt;/* '<S748>/Switch1' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static VAR(uint16, HCDR_VAR_INIT) VeHCDR_Cnt_Htr4_FailCnt;/* '<S837>/Switch1' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static VAR(uint16, HCDR_VAR_INIT) VeHCDR_Cnt_Htr4_SmpCnt;/* '<S838>/Switch1' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(sint16, HCDR_VAR_INIT) VeHCDR_Cnt_InitWait_AS;/* '<S201>/Gain' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(sint16, HCDR_VAR_INIT) VeHCDR_Cnt_StateCounter_AS;/* '<S205>/Gain' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(sint16, HCDR_VAR_INIT) VeHCDR_Cnt_StateWait_AS;/* '<S202>/Gain' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static VAR(float32, HCDR_VAR_INIT) VeHCDR_T_Htr4ClntIn_Tmp;/* '<S856>/Switch1' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static VAR(float32, HCDR_VAR_INIT) VeHCDR_U_SysVltg_AD;/* '<S5>/Switch24' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_ACComp_Defrost_Mode_EnApp1;/* '<S190>/Logical5' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_ACComp_RPM_Chg_Ch;/* '<S191>/Comparison1' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_ACComp_RPM_Chg_Chk;/* '<S191>/Switch' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_ACPress_Latch_AS;/* '<S199>/Gain' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_BPCM_LINLOC_FA_AD;/* '<S5>/Switch27' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_CompPerf_DeltSpdCmdEnbl;/* '<S67>/Logical14' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_CompSpdFdb_ON;/* '<S186>/Comparison2' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_CompSpdFdb_ON_Check;/* '<S186>/Comparison3' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_CompSpdFdb_OffTime;/* '<S189>/Logical10' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_CompStat_NormalOp;/* '<S186>/Comparison1' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_DsblDiagFailSafe_AD;/* '<S5>/Switch9' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_EACPref_BDEnbl_app2;/* '<S35>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_EAC_ComFault_DIs_Stat;/* '<S46>/Switch' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_EAC_ComOff_RPM;/* '<S227>/AND' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_EAC_DiagEnbl;/* '<S35>/Logical Operator4' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_EAC_FltSymptom;/* '<S36>/Logical Operator1' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_FanFault;/* '<S85>/Gain' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_HVBatCltHtr2_FltSymApp1;/* '<S562>/Logical4' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_HVBatCltHtr2_FltSymApp2;/* '<S571>/Gain' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_HVBatCltHtr2_FltSymPre;/* '<S562>/Switch2' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_HVBatCltHtr2_IsDeltaAccept_App;/* '<S562>/Switch' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_HVBatCltHtr3_FltSymApp1;/* '<S712>/Logical4' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_HVBatCltHtr3_FltSymApp2;/* '<S721>/Gain' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_HVBatCltHtr3_FltSymPre;/* '<S712>/Switch2' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_HVBatCltHtr3_IsDeltaAccept_App;/* '<S712>/Switch' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_HVClntHtr2DelayExpire;/* '<S562>/Comparison1' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_HVClntHtr3DelayExpire;/* '<S712>/Comparison1' */

#endif

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Heater1_LOC_B4D;/* synthesized block */

#if Rte_SysCon_Variant_HCDR_5

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr1IsDeltaPwrGreater;/* '<S354>/Comparison2' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr1_DiagEnbl;/* '<S308>/Switch' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr1_DiagEnbl_B4S;/* '<S358>/Logical3' */

#endif

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr1_FltDtct;/* synthesized block */

#if Rte_SysCon_Variant_HCDR_5

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr1_FltSymptom;/* '<S309>/Logical4' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr2IsDeltaAccept_App1;/* '<S559>/Comparison2' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr2IsDeltaAccept_App2;/* '<S560>/Comparison2' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr2IsStatusOperational;/* '<S563>/Comparison4' */

#endif

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr2Warning_Flag;/* synthesized block */

#if Rte_SysCon_Variant_HCDR_6

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr2Warning_Flag_Set_1;/* '<S618>/Logical4' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr2Warning_Flag_Set_2;/* '<S619>/Logical1' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr2_DiagEnbl;/* '<S525>/Switch' */

#endif

#if Rte_SysCon_Variant_HCDR_6

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr2_DiagEnbl_B4S;/* '<S527>/Logical' */

#endif

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr2_FltDtct;/* synthesized block */

#if Rte_SysCon_Variant_HCDR_6

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr2_FltSymptom;/* '<S561>/Logical7' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr3IsDeltaAccept_App1;/* '<S709>/Comparison2' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr3IsDeltaAccept_App2;/* '<S710>/Comparison3' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr3IsStatusOperational;/* '<S713>/Comparison4' */

#endif

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr3Warning_Flag;/* synthesized block */

#if Rte_SysCon_Variant_HCDR_7

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr3_DiagEnbl;/* '<S687>/Switch' */

#endif

#if Rte_SysCon_Variant_HCDR_7

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr3_DiagEnbl_B4S;/* '<S685>/Logical' */

#endif

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr3_FltDtct;/* synthesized block */

#if Rte_SysCon_Variant_HCDR_7

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr3_FltSymptom;/* '<S711>/Logical7' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr4ClntIn_NoFlt;/* '<S857>/Switch1' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr4IsDeltaPwrGreater;/* '<S850>/Comparison2' */

#endif

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr4Warning_Flag;/* synthesized block */

#if Rte_SysCon_Variant_HCDR_8

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr4Warning_Flag_Set_1;/* '<S943>/Logical4' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr4Warning_Flag_Set_2;/* '<S944>/Logical1' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr4_DiagEnbl;/* '<S804>/Switch' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr4_DiagEnbl_B4S;/* '<S865>/Logical9' */

#endif

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr4_FltDtct;/* synthesized block */

#if Rte_SysCon_Variant_HCDR_8

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr4_FltSymptom;/* '<S805>/Logical4' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Htr4_LOC_BPCM_FA_AD;/* '<S5>/Switch1' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_IUMPR_10secCmdOn;/* '<S124>/Logical Operator2' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_IUMPR_10secCmdOn_Ltch;/* '<S133>/OR1' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_IUMPR_2secCmdOn_1stPass;/* '<S129>/Logical Operator2' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_IUMPR_2secCmdOn_1stPass_Ltch;/* '<S132>/OR1' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_IUMPR_2secCmdOn_2ndPass;/* '<S130>/Logical Operator2' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_IUMPR_2secCmdOn_2ndPass_Ltch;/* '<S134>/OR1' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_IUMPR_CompDsbldAfter2sec1stPass_Ltch;/* '<S131>/OR1' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_IUMPR_DeviceCmdOn_MinCondMet_B4PSA;/* '<S33>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_IUMPR_MinCondMet_EnblChck;/* '<S32>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_IUMPR_PSACondMet_EnblTmr;/* '<S33>/Logical Operator10' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_InitDiag_Pass_AS;/* '<S209>/Gain' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_InitDiag_Pass_Prev;/* '<S186>/Signal Conversion' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_LTAP_LOC_FA_AD;/* '<S5>/Switch25' */

#endif

#if Rte_SysCon_Variant_HCDR_8

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_PassiveCoolingEnabled;/* '<S851>/Logical6' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_PresSnsrDiag_Run_AS;/* '<S208>/Gain' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_PresSnsrFail;/* '<S186>/PressSnsr_Diag' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_PresSnsrPass;/* '<S186>/PressSnsr_Diag' */

#endif

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_PressSnsr_FltDtct_AS;/* synthesized block */

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_PropSysActv_AD;/* '<S5>/Switch34' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_PstCdeClrDiagDsbl_AD;/* '<S5>/Switch8' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_RPM_ChangChk_Timer_Sts;/* '<S191>/Logical1' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_RPM_NotChang_DisTmr_Sts;/* '<S191>/Logical3' */

#endif

#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_ResetCnts;/* '<S18>/Gain' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_ResetFOMs;/* '<S19>/Gain' */

#endif

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Warning_Flag;/* synthesized block */

#if Rte_SysCon_Variant_HCDR_5

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Warning_Flag_Set_1;/* '<S447>/Logical4' */

#endif

#if Rte_SysCon_Variant_HCDR_5

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_Warning_Flag_Set_2;/* '<S448>/Logical1' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(boolean, HCDR_VAR_INIT) VeHCDR_b_presSnsr_DiagEnbl;/* '<S190>/Logical' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static VAR(TeBPCR_e_LIN_BusOff, HCDR_VAR_INIT) VeHCDR_e_BPCM_LINLOC_AD;/* '<S5>/Switch28' */

#endif

static VAR(TeHCDR_e_BatteryThermalFault, HCDR_VAR_INIT)
    VeHCDR_e_BatteryThermalFault_B4D;  /* '<S25>/Switch1' */

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static VAR(TeBPCR_e_LOC_BatClntHtr, HCDR_VAR_INIT) VeHCDR_e_Htr4_LOC_BPCM_AD;/* '<S5>/Switch3' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static VAR(TeBPCR_e_LOC_BCP, HCDR_VAR_INIT) VeHCDR_e_LTAP_LOC_AD;/* '<S5>/Switch26' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static VAR(TePMDR_e_PowerMode, HCDR_VAR_INIT) VeHCDR_e_PowerMode_AD;/* '<S5>/Switch2' */

#endif

#if Rte_SysCon_Variant_HCDR_2

static VAR(float32, HCDR_VAR_INIT) VeHCDR_n_EAC_ActualRequest_Diff_RPM;/* '<S36>/Abs' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(float32, HCDR_VAR_INIT) VeHCDR_n_RPM_Diff;/* '<S191>/Abs' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(float32, HCDR_VAR_INIT) VeHCDR_p_HghRfrgtPres_Diff_AS;/* '<S200>/Gain' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(float32, HCDR_VAR_INIT) VeHCDR_p_HghRfrgtPres_Latch_Cont_AS;/* '<S210>/Gain' */

#endif

#if Rte_SysCon_Variant_HCDR_3

static VAR(float32, HCDR_VAR_INIT) VeHCDR_p_HghRfrgtPres_Latch_Init_AS;/* '<S198>/Gain' */

#endif

#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

static VAR(uint32, HCDR_VAR_INIT) VeHCDR_t_RealTimeClock_AD;/* '<S5>/Switch' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HCDR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_HCDR
#include "MemMap.h"

CONST(ConstB_HCDR_ac_T, HCDR_VAR_INIT) HCDR_ac_ConstB =
{
    CeHCDR_e_BattThermalNoFault,       /* '<S1085>/Const5' */
    CeDFIB_e_Init,                     /* '<S1086>/Constant' */
    CeDFIB_e_Init,                     /* '<S1087>/Constant' */
    CeDFIB_e_Init,                     /* '<S1088>/Constant' */
    CeDFIB_e_Init,                     /* '<S1089>/Constant' */
    CeDFIB_e_Init,                     /* '<S1090>/Constant' */
    CeDFIB_e_Init                      /* '<S1091>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_HCDR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HCDR
#include "MemMap.h"

VAR(B_HCDR_ac_T, HCDR_VAR_INIT) HCDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HCDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HCDR
#include "MemMap.h"

VAR(DW_HCDR_ac_T, HCDR_VAR_INIT) HCDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HCDR
#include "MemMap.h"
#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_6 || Rte_SysCon_Variant_HCDR_7 || Rte_SysCon_Variant_HCDR_8

static FUNC(void, HCDR_CODE_LOCAL) HCDR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, HCDR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_6 || Rte_SysCon_Variant_HCDR_7 || Rte_SysCon_Variant_HCDR_8

static FUNC(void, HCDR_CODE_LOCAL) HCDR_ac_Init_p(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, HCDR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_6 || Rte_SysCon_Variant_HCDR_7 || Rte_SysCon_Variant_HCDR_8

static FUNC(void, HCDR_CODE_LOCAL) HCDR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, HCDR_VAR_INIT)
    rty_FaultSts);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_HCDR_3

static void HCDR_ac_AC_Compresor_Wait(void);

#endif

#if Rte_SysCon_Variant_HCDR_3

static void HCDR_ac_Increase_Diag_Fail_Counter(void);

#endif

#if Rte_SysCon_Variant_HCDR_3

static void HCDR_ac_Increase_Diag_Pass_Counter(void);

#endif

/*
 * Output and update for enable system:
 *    '<S104>/Fail'
 *    '<S329>/Fail'
 *    '<S540>/Fail'
 *    '<S735>/Fail'
 *    '<S825>/Fail'
 */
#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_6 || Rte_SysCon_Variant_HCDR_7 || Rte_SysCon_Variant_HCDR_8

static FUNC(void, HCDR_CODE_LOCAL) HCDR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, HCDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S104>/Fail' incorporates:
     *  EnablePort: '<S108>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S108>/FaultSts' incorporates:
         *  Constant: '<S114>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S104>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S104>/Init'
 *    '<S329>/Init'
 *    '<S540>/Init'
 *    '<S735>/Init'
 *    '<S825>/Init'
 */
#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_6 || Rte_SysCon_Variant_HCDR_7 || Rte_SysCon_Variant_HCDR_8

static FUNC(void, HCDR_CODE_LOCAL) HCDR_ac_Init_p(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, HCDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S104>/Init' incorporates:
     *  EnablePort: '<S109>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S109>/FaultSts' incorporates:
         *  Constant: '<S115>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S104>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S104>/Pass'
 *    '<S329>/Pass'
 *    '<S540>/Pass'
 *    '<S735>/Pass'
 *    '<S825>/Pass'
 */
#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_6 || Rte_SysCon_Variant_HCDR_7 || Rte_SysCon_Variant_HCDR_8

static FUNC(void, HCDR_CODE_LOCAL) HCDR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, HCDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S104>/Pass' incorporates:
     *  EnablePort: '<S110>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S110>/FaultSts' incorporates:
         *  Constant: '<S116>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S104>/Pass' */
}

#endif

/* Function for Chart: '<S186>/PressSnsr_Diag' */
#if Rte_SysCon_Variant_HCDR_3

static void HCDR_ac_AC_Compresor_Wait(void)
{
    float32 tmpRead;
    boolean guard1 = false;
    boolean guard2 = false;
    boolean guard3 = false;
    HCDR_ac_B.VeHCDR_Cnt_StateCounter = 7;

    /* Inport: '<Root>/VeTAIR_p_HghRfrgtPres' */
    /* During 'AC_Compresor_Wait': '<S196>:543' */
    (void)Rte_Read_VeTAIR_p_HghRfrgtPres_Value(&tmpRead);
    guard1 = false;
    guard2 = false;
    guard3 = false;
    if ((HCDR_ac_B.VeHCDR_Cnt_ACComp_InitWait <= KeHCDR_Cnt_ACComp_InitWait) &&
            (VeHCDR_b_CompSpdFdb_ON_Check))
    {
        /* Transition: '<S196>:559' */
        /* Transition: '<S196>:586' */
        /* Transition: '<S196>:576' */
        if ((!HCDR_ac_B.VeHCDR_b_PresSnsrDiag_Run) &&
                (!VeHCDR_b_presSnsr_DiagEnbl))
        {
            /* Transition: '<S196>:570' */
            HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_Diagnostics_Not_Defined;

            /* Entry 'Diagnostics_Not_Defined': '<S196>:542' */
            HCDR_ac_B.VeHCDR_Cnt_StateCounter = 8;
            VeHCDR_b_PresSnsrPass = false;
            VeHCDR_b_PresSnsrFail = false;
        }
        else if (VeHCDR_b_presSnsr_DiagEnbl)
        {
            /* Transition: '<S196>:578' */
            if (HCDR_ac_B.VeHCDR_b_ACPress_Latch)
            {
                /* Transition: '<S196>:568' */
                if ((!VeHCDR_b_CompStat_NormalOp) ||
                        (!VeHCDR_b_CompSpdFdb_ON_Check))
                {
                    /* Transition: '<S196>:561' */
                    guard2 = true;
                }
                else if ((VeHCDR_b_CompStat_NormalOp) &&
                         (VeHCDR_b_CompSpdFdb_ON_Check))
                {
                    /* Transition: '<S196>:556' */
                    HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff = tmpRead -
                        HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Latch_Init;
                    if (!VeHCDR_b_CompSpdFdb_ON)
                    {
                        /* Transition: '<S196>:574' */
                        /* Transition: '<S196>:580' */
                        guard2 = true;
                    }
                    else if ((HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff >
                              KeHCDR_pbar_EAC_Press_InitChgLimMin) &&
                             (HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff <
                              KeHCDR_pbar_EAC_Press_InitChgLimMax))
                    {
                        /* Transition: '<S196>:563' */
                        HCDR_ac_DW.is_c36_HCDR_ac =
                            HCDR_ac_IN_Increase_Diag_Fail_Counter;

                        /* Entry 'Increase_Diag_Fail_Counter': '<S196>:549' */
                        HCDR_ac_B.VeHCDR_Cnt_StateCounter = 5;
                        HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm++;
                        HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass++;
                    }
                    else if ((HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff <=
                              KeHCDR_pbar_EAC_Press_InitChgLimMin) ||
                             (HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff >=
                              KeHCDR_pbar_EAC_Press_InitChgLimMax))
                    {
                        /* Transition: '<S196>:565' */
                        HCDR_ac_DW.is_c36_HCDR_ac =
                            HCDR_ac_IN_Increase_Diag_Pass_Counter;

                        /* Entry 'Increase_Diag_Pass_Counter': '<S196>:544' */
                        HCDR_ac_B.VeHCDR_Cnt_StateCounter = 3;
                        HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass++;
                    }
                    else
                    {
                        guard3 = true;
                    }
                }
                else
                {
                    guard3 = true;
                }
            }
            else
            {
                guard3 = true;
            }
        }
        else
        {
            guard1 = true;
        }
    }
    else
    {
        guard1 = true;
    }

    if (guard3)
    {
        if (!HCDR_ac_B.VeHCDR_b_ACPress_Latch)
        {
            /* Transition: '<S196>:577' */
            HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_Latch_Initial_AC_Pressure;

            /* Entry 'Latch_Initial_AC_Pressure': '<S196>:548' */
            HCDR_ac_B.VeHCDR_Cnt_StateCounter = 1;
            HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Latch_Init = tmpRead;
            HCDR_ac_B.VeHCDR_b_ACPress_Latch = true;
            HCDR_ac_B.VeHCDR_Cnt_DiagStateCounter = 0;
        }
        else
        {
            guard1 = true;
        }
    }

    if (guard2)
    {
        HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_AC_Compresor_Wait;

        /* Entry 'AC_Compresor_Wait': '<S196>:543' */
        HCDR_ac_B.VeHCDR_Cnt_StateCounter = 7;
        HCDR_ac_B.VeHCDR_Cnt_ACComp_InitWait = 0;
    }

    if (guard1)
    {
        /* Constant: '<S193>/Calib' */
        if ((((HCDR_ac_B.VeHCDR_Cnt_ACComp_InitWait > KeHCDR_Cnt_ACComp_InitWait)
              && (VeHCDR_b_InitDiag_Pass_Prev)) && (VeHCDR_b_CompSpdFdb_ON)) &&
                (KeHCDR_b_InitDiag_Bypass_En))
        {
            /* Transition: '<S196>:681' */
            HCDR_ac_B.VeHCDR_b_InitDiag_Pass = true;

            /* Transition: '<S196>:453' */
            HCDR_ac_B.VeHCDR_Cnt_ACComp_InitWait++;
        }
        else if ((HCDR_ac_B.VeHCDR_Cnt_ACComp_InitWait >
                  KeHCDR_Cnt_ACComp_InitWait) && (!VeHCDR_b_CompSpdFdb_ON))
        {
            /* Transition: '<S196>:575' */
            /* Transition: '<S196>:592' */
            /* Transition: '<S196>:658' */
            /* Transition: '<S196>:659' */
            HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_Init;

            /* Entry 'Init': '<S196>:335' */
            HCDR_ac_B.VeHCDR_Cnt_InitWait = 0;
            HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm = 0;
            HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass = 0;
            HCDR_ac_B.VeHCDR_Cnt_ACDiag_ContMaxtm_Pass = 0;
            HCDR_ac_B.VeHCDR_Cnt_ACDiag_ContMaxtm = 0;
            HCDR_ac_B.VeHCDR_b_ACPress_Latch = false;
            HCDR_ac_B.VeHCDR_b_InitDiag_Pass = false;
            HCDR_ac_B.VeHCDR_Cnt_StateCounter = 0;
        }
        else
        {
            HCDR_ac_B.VeHCDR_Cnt_ACComp_InitWait++;
        }

        /* End of Constant: '<S193>/Calib' */
    }
}

#endif

/* Function for Chart: '<S186>/PressSnsr_Diag' */
#if Rte_SysCon_Variant_HCDR_3

static void HCDR_ac_Increase_Diag_Fail_Counter(void)
{
    float32 tmpRead;
    boolean guard1 = false;
    boolean guard2 = false;
    boolean guard3 = false;
    HCDR_ac_B.VeHCDR_Cnt_StateCounter = 5;

    /* Inport: '<Root>/VeTAIR_p_HghRfrgtPres' */
    /* During 'Increase_Diag_Fail_Counter': '<S196>:549' */
    (void)Rte_Read_VeTAIR_p_HghRfrgtPres_Value(&tmpRead);
    guard1 = false;
    guard2 = false;
    guard3 = false;
    if (HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm <= KeHCDR_Cnt_ACDiag_InitMaxtm)
    {
        /* Transition: '<S196>:584' */
        /* Transition: '<S196>:576' */
        if ((!HCDR_ac_B.VeHCDR_b_PresSnsrDiag_Run) &&
                (!VeHCDR_b_presSnsr_DiagEnbl))
        {
            /* Transition: '<S196>:570' */
            HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_Diagnostics_Not_Defined;

            /* Entry 'Diagnostics_Not_Defined': '<S196>:542' */
            HCDR_ac_B.VeHCDR_Cnt_StateCounter = 8;
            VeHCDR_b_PresSnsrPass = false;
            VeHCDR_b_PresSnsrFail = false;
        }
        else if (VeHCDR_b_presSnsr_DiagEnbl)
        {
            /* Transition: '<S196>:578' */
            if (HCDR_ac_B.VeHCDR_b_ACPress_Latch)
            {
                /* Transition: '<S196>:568' */
                if ((!VeHCDR_b_CompStat_NormalOp) ||
                        (!VeHCDR_b_CompSpdFdb_ON_Check))
                {
                    /* Transition: '<S196>:561' */
                    guard1 = true;
                }
                else if ((VeHCDR_b_CompStat_NormalOp) &&
                         (VeHCDR_b_CompSpdFdb_ON_Check))
                {
                    /* Transition: '<S196>:556' */
                    HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff = tmpRead -
                        HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Latch_Init;
                    if (!VeHCDR_b_CompSpdFdb_ON)
                    {
                        /* Transition: '<S196>:574' */
                        /* Transition: '<S196>:580' */
                        guard1 = true;
                    }
                    else if ((HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff >
                              KeHCDR_pbar_EAC_Press_InitChgLimMin) &&
                             (HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff <
                              KeHCDR_pbar_EAC_Press_InitChgLimMax))
                    {
                        /* Transition: '<S196>:563' */
                        HCDR_ac_DW.is_c36_HCDR_ac =
                            HCDR_ac_IN_Increase_Diag_Fail_Counter;

                        /* Entry 'Increase_Diag_Fail_Counter': '<S196>:549' */
                        HCDR_ac_B.VeHCDR_Cnt_StateCounter = 5;
                        HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm++;
                        HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass++;
                    }
                    else if ((HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff <=
                              KeHCDR_pbar_EAC_Press_InitChgLimMin) ||
                             (HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff >=
                              KeHCDR_pbar_EAC_Press_InitChgLimMax))
                    {
                        /* Transition: '<S196>:565' */
                        HCDR_ac_DW.is_c36_HCDR_ac =
                            HCDR_ac_IN_Increase_Diag_Pass_Counter;

                        /* Entry 'Increase_Diag_Pass_Counter': '<S196>:544' */
                        HCDR_ac_B.VeHCDR_Cnt_StateCounter = 3;
                        HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass++;
                    }
                    else
                    {
                        guard3 = true;
                    }
                }
                else
                {
                    guard3 = true;
                }
            }
            else
            {
                guard3 = true;
            }
        }
        else
        {
            guard2 = true;
        }
    }
    else
    {
        guard2 = true;
    }

    if (guard3)
    {
        if (!HCDR_ac_B.VeHCDR_b_ACPress_Latch)
        {
            /* Transition: '<S196>:577' */
            HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_Latch_Initial_AC_Pressure;

            /* Entry 'Latch_Initial_AC_Pressure': '<S196>:548' */
            HCDR_ac_B.VeHCDR_Cnt_StateCounter = 1;
            HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Latch_Init = tmpRead;
            HCDR_ac_B.VeHCDR_b_ACPress_Latch = true;
            HCDR_ac_B.VeHCDR_Cnt_DiagStateCounter = 0;
        }
        else
        {
            guard2 = true;
        }
    }

    if (guard2)
    {
        if (!VeHCDR_b_CompSpdFdb_ON)
        {
            /* Transition: '<S196>:562' */
            /* Transition: '<S196>:581' */
            /* Transition: '<S196>:580' */
            guard1 = true;
        }
        else
        {
            if (HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm >
                    KeHCDR_Cnt_ACDiag_InitMaxtm)
            {
                /* Transition: '<S196>:590' */
                HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_Diagnostics_Fail;

                /* Entry 'Diagnostics_Fail': '<S196>:546' */
                HCDR_ac_B.VeHCDR_Cnt_StateCounter = 6;
                VeHCDR_b_PresSnsrFail = true;
                VeHCDR_b_PresSnsrPass = false;
                HCDR_ac_B.VeHCDR_b_PresSnsrDiag_Run = true;
                HCDR_ac_B.VeHCDR_b_InitDiag_Pass = false;
                HCDR_ac_B.VeHCDR_b_PressSnsr_FltDtct_app1 = true;
                HCDR_ac_B.VeHCDR_Cnt_StateWait = 0;
            }
        }
    }

    if (guard1)
    {
        HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_AC_Compresor_Wait;

        /* Entry 'AC_Compresor_Wait': '<S196>:543' */
        HCDR_ac_B.VeHCDR_Cnt_StateCounter = 7;
        HCDR_ac_B.VeHCDR_Cnt_ACComp_InitWait = 0;
    }
}

#endif

/* Function for Chart: '<S186>/PressSnsr_Diag' */
#if Rte_SysCon_Variant_HCDR_3

static void HCDR_ac_Increase_Diag_Pass_Counter(void)
{
    float32 tmpRead;
    boolean guard1 = false;
    boolean guard2 = false;
    HCDR_ac_B.VeHCDR_Cnt_StateCounter = 3;

    /* During 'Increase_Diag_Pass_Counter': '<S196>:544' */
    if (HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass >=
            KeHCDR_Cnt_ACDiag_InitMaxtm_Pass)
    {
        /* Transition: '<S196>:572' */
        HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_Diagnostics_Pass;

        /* Entry 'Diagnostics_Pass': '<S196>:545' */
        HCDR_ac_B.VeHCDR_Cnt_StateCounter = 4;
        VeHCDR_b_PresSnsrPass = true;
        VeHCDR_b_PresSnsrFail = false;
        HCDR_ac_B.VeHCDR_b_PresSnsrDiag_Run = true;
        HCDR_ac_B.VeHCDR_b_PressSnsr_FltDtct_app1 = false;
        HCDR_ac_B.VeHCDR_b_InitDiag_Pass = true;
        HCDR_ac_B.VeHCDR_Cnt_StateWait = 0;
    }
    else
    {
        if (HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass <=
                KeHCDR_Cnt_ACDiag_InitMaxtm_Pass)
        {
            /* Transition: '<S196>:582' */
            /* Transition: '<S196>:564' */
            /* Transition: '<S196>:589' */
            if ((!HCDR_ac_B.VeHCDR_b_PresSnsrDiag_Run) &&
                    (!VeHCDR_b_presSnsr_DiagEnbl))
            {
                /* Transition: '<S196>:570' */
                HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_Diagnostics_Not_Defined;

                /* Entry 'Diagnostics_Not_Defined': '<S196>:542' */
                HCDR_ac_B.VeHCDR_Cnt_StateCounter = 8;
                VeHCDR_b_PresSnsrPass = false;
                VeHCDR_b_PresSnsrFail = false;
            }
            else
            {
                if (VeHCDR_b_presSnsr_DiagEnbl)
                {
                    /* Inport: '<Root>/VeTAIR_p_HghRfrgtPres' */
                    /* Transition: '<S196>:578' */
                    (void)Rte_Read_VeTAIR_p_HghRfrgtPres_Value(&tmpRead);
                    guard1 = false;
                    guard2 = false;
                    if (HCDR_ac_B.VeHCDR_b_ACPress_Latch)
                    {
                        /* Transition: '<S196>:568' */
                        if ((!VeHCDR_b_CompStat_NormalOp) ||
                                (!VeHCDR_b_CompSpdFdb_ON_Check))
                        {
                            /* Transition: '<S196>:561' */
                            guard2 = true;
                        }
                        else if ((VeHCDR_b_CompStat_NormalOp) &&
                                 (VeHCDR_b_CompSpdFdb_ON_Check))
                        {
                            /* Transition: '<S196>:556' */
                            HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff = tmpRead -
                                HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Latch_Init;
                            if (!VeHCDR_b_CompSpdFdb_ON)
                            {
                                /* Transition: '<S196>:574' */
                                /* Transition: '<S196>:580' */
                                guard2 = true;
                            }
                            else if ((HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff >
                                      KeHCDR_pbar_EAC_Press_InitChgLimMin) &&
                                     (HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff <
                                      KeHCDR_pbar_EAC_Press_InitChgLimMax))
                            {
                                /* Transition: '<S196>:563' */
                                HCDR_ac_DW.is_c36_HCDR_ac =
                                    HCDR_ac_IN_Increase_Diag_Fail_Counter;

                                /* Entry 'Increase_Diag_Fail_Counter': '<S196>:549' */
                                HCDR_ac_B.VeHCDR_Cnt_StateCounter = 5;
                                HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm++;
                                HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass++;
                            }
                            else if ((HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff <=
                                      KeHCDR_pbar_EAC_Press_InitChgLimMin) ||
                                     (HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff >=
                                      KeHCDR_pbar_EAC_Press_InitChgLimMax))
                            {
                                /* Transition: '<S196>:565' */
                                HCDR_ac_DW.is_c36_HCDR_ac =
                                    HCDR_ac_IN_Increase_Diag_Pass_Counter;

                                /* Entry 'Increase_Diag_Pass_Counter': '<S196>:544' */
                                HCDR_ac_B.VeHCDR_Cnt_StateCounter = 3;
                                HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass++;
                            }
                            else
                            {
                                guard1 = true;
                            }
                        }
                        else
                        {
                            guard1 = true;
                        }
                    }
                    else
                    {
                        guard1 = true;
                    }

                    if (guard2)
                    {
                        HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_AC_Compresor_Wait;

                        /* Entry 'AC_Compresor_Wait': '<S196>:543' */
                        HCDR_ac_B.VeHCDR_Cnt_StateCounter = 7;
                        HCDR_ac_B.VeHCDR_Cnt_ACComp_InitWait = 0;
                    }

                    if (guard1)
                    {
                        if (!HCDR_ac_B.VeHCDR_b_ACPress_Latch)
                        {
                            /* Transition: '<S196>:577' */
                            HCDR_ac_DW.is_c36_HCDR_ac =
                                HCDR_ac_IN_Latch_Initial_AC_Pressure;

                            /* Entry 'Latch_Initial_AC_Pressure': '<S196>:548' */
                            HCDR_ac_B.VeHCDR_Cnt_StateCounter = 1;
                            HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Latch_Init = tmpRead;
                            HCDR_ac_B.VeHCDR_b_ACPress_Latch = true;
                            HCDR_ac_B.VeHCDR_Cnt_DiagStateCounter = 0;
                        }
                    }
                }
            }
        }
    }
}

#endif

/* Model step function for TID1 */
FUNC(void, HCDR_CODE) HCDR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_HCDR_5

    TeHTIR_e_HVC_Htr_Warning tmpRead;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean tmpRead_0;

#endif

#if Rte_SysCon_Variant_HCDR_5

    TeHTIR_e_HVC_Htr_Warning tmpRead_1;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean tmpRead_2;

#endif

#if Rte_SysCon_Variant_HCDR_5

    TeHTIR_e_HVC_Htr_Warning tmpRead_3;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean tmpRead_4;

#endif

#if Rte_SysCon_Variant_HCDR_5

    TeHTIR_e_HVC_Htr_Warning tmpRead_5;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean tmpRead_6;

#endif

#if Rte_SysCon_Variant_HCDR_5

    TeHTIR_e_HVC_Htr_Warning tmpRead_7;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean tmpRead_8;

#endif

#if Rte_SysCon_Variant_HCDR_5

    TeHTIR_e_HVC_Htr_Warning tmpRead_9;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean tmpRead_a;

#endif

#if Rte_SysCon_Variant_HCDR_5

    TeHTIR_e_HVC_Htr_Warning tmpRead_b;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean tmpRead_c;

#endif

#if Rte_SysCon_Variant_HCDR_5

    TeHTIR_e_HVC_Htr_Warning tmpRead_d;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean tmpRead_e;

#endif

#if Rte_SysCon_Variant_HCDR_5

    TeHTIR_e_HVC_Htr_Warning tmpRead_f;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean tmpRead_g;

#endif

#if Rte_SysCon_Variant_HCDR_5

    TeHTIR_e_HVC_Htr_Warning tmpRead_h;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean tmpRead_i;

#endif

#if Rte_SysCon_Variant_HCDR_5

    TeHTIR_e_HVC_Htr_Warning tmpRead_j;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean tmpRead_k;

#endif

#if Rte_SysCon_Variant_HCDR_5

    TeHTIR_e_HVC_Htr_Warning tmpRead_l;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean tmpRead_m;

#endif

#if Rte_SysCon_Variant_HCDR_5

    TeHTIR_e_HVC_Htr_Warning tmpRead_n;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean tmpRead_o;

#endif

#if Rte_SysCon_Variant_HCDR_5

    float32 tmpRead_p;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean tmpRead_q;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean tmpRead_r;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean tmpRead_s;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean tmpRead_t;

#endif

#if Rte_SysCon_Variant_HCDR_5

    float32 tmpRead_u;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean tmpRead_v;

#endif

#if Rte_SysCon_Variant_HCDR_5

    float32 tmpRead_w;

#endif

#if Rte_SysCon_Variant_HCDR_5

    float32 tmpRead_x;

#endif

#if !Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

    boolean tmpRead_y;

#endif

#if !Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

    TeRCVR_e_Vlv_Stat tmpRead_z;

#endif

#if Rte_SysCon_Variant_HCDR_6

    TeHTIR_e_HVC_Htr_Warning tmpRead_10;

#endif

#if Rte_SysCon_Variant_HCDR_6

    boolean tmpRead_11;

#endif

#if Rte_SysCon_Variant_HCDR_6

    TeHTIR_e_HVC_Htr_Warning tmpRead_12;

#endif

#if Rte_SysCon_Variant_HCDR_6

    boolean tmpRead_13;

#endif

#if Rte_SysCon_Variant_HCDR_6

    TeHTIR_e_HVC_Htr_Warning tmpRead_14;

#endif

#if Rte_SysCon_Variant_HCDR_6

    boolean tmpRead_15;

#endif

#if Rte_SysCon_Variant_HCDR_6

    TeHTIR_e_HVC_Htr_Warning tmpRead_16;

#endif

#if Rte_SysCon_Variant_HCDR_6

    boolean tmpRead_17;

#endif

#if Rte_SysCon_Variant_HCDR_6

    TeHTIR_e_HVC_Htr_Warning tmpRead_18;

#endif

#if Rte_SysCon_Variant_HCDR_6

    boolean tmpRead_19;

#endif

#if Rte_SysCon_Variant_HCDR_6

    TeHTIR_e_HVC_Htr_Warning tmpRead_1a;

#endif

#if Rte_SysCon_Variant_HCDR_6

    boolean tmpRead_1b;

#endif

#if Rte_SysCon_Variant_HCDR_6

    TeHTIR_e_HVC_Htr_Warning tmpRead_1c;

#endif

#if Rte_SysCon_Variant_HCDR_6

    boolean tmpRead_1d;

#endif

#if Rte_SysCon_Variant_HCDR_6

    TeHTIR_e_HVC_Htr_Warning tmpRead_1e;

#endif

#if Rte_SysCon_Variant_HCDR_6

    boolean tmpRead_1f;

#endif

#if Rte_SysCon_Variant_HCDR_6

    float32 tmpRead_1g;

#endif

#if Rte_SysCon_Variant_HCDR_6

    boolean tmpRead_1h;

#endif

#if Rte_SysCon_Variant_HCDR_6

    TeHTIR_e_HVC_Htr_Warning tmpRead_1i;

#endif

#if Rte_SysCon_Variant_HCDR_6

    boolean tmpRead_1j;

#endif

#if Rte_SysCon_Variant_HCDR_6

    TeHTIR_e_HVC_Htr_Warning tmpRead_1k;

#endif

#if Rte_SysCon_Variant_HCDR_6

    boolean tmpRead_1l;

#endif

#if Rte_SysCon_Variant_HCDR_6

    TeHTIR_e_HVC_Htr_Warning tmpRead_1m;

#endif

#if Rte_SysCon_Variant_HCDR_6

    boolean tmpRead_1n;

#endif

#if Rte_SysCon_Variant_HCDR_6

    float32 tmpRead_1o;

#endif

#if Rte_SysCon_Variant_HCDR_6

    boolean tmpRead_1p;

#endif

#if Rte_SysCon_Variant_HCDR_6

    boolean tmpRead_1q;

#endif

#if Rte_SysCon_Variant_HCDR_6

    float32 tmpRead_1r;

#endif

#if Rte_SysCon_Variant_HCDR_6

    TeHTIR_e_HVC_Htr_Warning tmpRead_1s;

#endif

#if Rte_SysCon_Variant_HCDR_6

    TeHTIR_e_HVC_Htr_Warning tmpRead_1t;

#endif

#if Rte_SysCon_Variant_HCDR_6

    float32 tmpRead_1u;

#endif

#if Rte_SysCon_Variant_HCDR_6

    boolean tmpRead_1v;

#endif

#if Rte_SysCon_Variant_HCDR_7

    float32 tmpRead_1w;

#endif

#if Rte_SysCon_Variant_HCDR_7

    float32 tmpRead_1x;

#endif

#if Rte_SysCon_Variant_HCDR_8

    TeHTIR_e_HVC_Htr_Warning tmpRead_1y;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_1z;

#endif

#if Rte_SysCon_Variant_HCDR_8

    TeHTIR_e_HVC_Htr_Warning tmpRead_20;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_21;

#endif

#if Rte_SysCon_Variant_HCDR_8

    TeHTIR_e_HVC_Htr_Warning tmpRead_22;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_23;

#endif

#if Rte_SysCon_Variant_HCDR_8

    TeHTIR_e_HVC_Htr_Warning tmpRead_24;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_25;

#endif

#if Rte_SysCon_Variant_HCDR_8

    TeHTIR_e_HVC_Htr_Warning tmpRead_26;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_27;

#endif

#if Rte_SysCon_Variant_HCDR_8

    TeHTIR_e_HVC_Htr_Warning tmpRead_28;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_29;

#endif

#if Rte_SysCon_Variant_HCDR_8

    TeHTIR_e_HVC_Htr_Warning tmpRead_2a;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_2b;

#endif

#if Rte_SysCon_Variant_HCDR_8

    TeHTIR_e_HVC_Htr_Warning tmpRead_2c;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_2d;

#endif

#if Rte_SysCon_Variant_HCDR_8

    TeHTIR_e_HVC_Htr_Warning tmpRead_2e;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_2f;

#endif

#if Rte_SysCon_Variant_HCDR_8

    TeHTIR_e_HVC_Htr_Warning tmpRead_2g;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_2h;

#endif

#if Rte_SysCon_Variant_HCDR_8

    TeHTIR_e_HVC_Htr_Warning tmpRead_2i;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_2j;

#endif

#if Rte_SysCon_Variant_HCDR_8

    TeHTIR_e_HVC_Htr_Warning tmpRead_2k;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_2l;

#endif

#if Rte_SysCon_Variant_HCDR_8

    TeHTIR_e_HVC_Htr_Warning tmpRead_2m;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_2n;

#endif

#if Rte_SysCon_Variant_HCDR_8

    float32 tmpRead_2o;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_2p;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_2q;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_2r;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_2s;

#endif

#if Rte_SysCon_Variant_HCDR_8

    float32 tmpRead_2t;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_2u;

#endif

#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_2v;

#endif

#if Rte_SysCon_Variant_HCDR_8

    float32 tmpRead_2w;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_2x;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_2y;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_2z;

#endif

#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8

    TeBRDR_e_BatCltLvlLo tmpRead_30;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_31;

#endif

#if Rte_SysCon_Variant_HCDR_8

    TeTHMR_e_BatThrmlSt tmpRead_32;

#endif

#if Rte_SysCon_Variant_HCDR_3

    float32 tmpRead_33;

#endif

#if Rte_SysCon_Variant_HCDR_2

    TeACCR_e_AC_CompEnb tmpRead_34;

#endif

    boolean tmpRead_35;
    boolean tmpRead_36;

#if Rte_SysCon_Variant_HCDR_2

    boolean tmpRead_37;

#endif

#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_38;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_39;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean tmpRead_3a;

#endif

#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3

    boolean rtb_Logical1;

#endif

#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3

    boolean rtb_MultiportSwitch2;

#endif

    boolean rtb_VeHCDR_b_DsblDiagFailSafe_AD;
    boolean rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD;

#if (!Rte_SysCon_Variant_HCDR_6 && !Rte_SysCon_Variant_HCDR_7) || !Rte_SysCon_Variant_HCDR_9 || Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_5 || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || Rte_SysCon_Variant_HCDR_8

    boolean rtb_VeHCDR_b_PropSysActv_AD;

#endif

#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3 || Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_6 || Rte_SysCon_Variant_HCDR_7 || Rte_SysCon_Variant_HCDR_8

    boolean rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

#endif

#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3

    boolean rtb_Logical6;

#endif

#if (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || Rte_SysCon_Variant_HCDR_8

    boolean rtb_LogicalOperator_gvk;

#endif

#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3 || (Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || Rte_SysCon_Variant_HCDR_8

    boolean rtb_VariantMerge_For_Variant_Source_Vari;

#endif

#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3 || (Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || Rte_SysCon_Variant_HCDR_8

    boolean rtb_VariantMerge_For_Variant_Source_Va_l;

#endif

#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3 || (Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || Rte_SysCon_Variant_HCDR_8

    boolean rtb_VariantMerge_For_Variant_Source_Va_a;

#endif

    uint32 rtb_VeHCDR_t_RealTimeClock_AD;
    boolean rtb_TmpSignalConversionAtVeTAIR_b_HghRfr;

#if (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8) || (!Rte_SysCon_Variant_HCDR_2 && !Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_3 && !Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || Rte_SysCon_Variant_HCDR_5

    boolean rtb_VariantMerge_For_Variant_Source_V_dy;

#endif

#if (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8) || (!Rte_SysCon_Variant_HCDR_2 && !Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_3 && !Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || Rte_SysCon_Variant_HCDR_5

    boolean rtb_VariantMerge_For_Variant_Source_Va_p;

#endif

#if (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8) || (!Rte_SysCon_Variant_HCDR_2 && !Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_3 && !Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || Rte_SysCon_Variant_HCDR_5

    boolean rtb_VariantMerge_For_Variant_Source_Va_d;

#endif

#if (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8) || (!Rte_SysCon_Variant_HCDR_2 && !Rte_SysCon_Variant_HCDR_4 && !Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_2 && !Rte_SysCon_Variant_HCDR_5 && !Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_3 && !Rte_SysCon_Variant_HCDR_4 && !Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_3 && !Rte_SysCon_Variant_HCDR_5 && !Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5)

    boolean rtb_VariantMerge_For_Variant_Source_Va_n;

#endif

#if (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8) || (!Rte_SysCon_Variant_HCDR_2 && !Rte_SysCon_Variant_HCDR_4 && !Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_2 && !Rte_SysCon_Variant_HCDR_5 && !Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_3 && !Rte_SysCon_Variant_HCDR_4 && !Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_3 && !Rte_SysCon_Variant_HCDR_5 && !Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5)

    boolean rtb_VariantMerge_For_Variant_Source_Va_e;

#endif

#if (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (!Rte_SysCon_Variant_HCDR_2 && !Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (!Rte_SysCon_Variant_HCDR_2 && !Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_2 && !Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_3 && !Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_3 && !Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || Rte_SysCon_Variant_HCDR_8

    boolean rtb_VariantMerge_For_Variant_Source_Va_c;

#endif

#if (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!(!Rte_SysCon_Variant_HCDR_1) && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8) || (!Rte_SysCon_Variant_HCDR_2 && !Rte_SysCon_Variant_HCDR_4 && !Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_2 && !Rte_SysCon_Variant_HCDR_5 && !Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_3 && !Rte_SysCon_Variant_HCDR_4 && !Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_3 && !Rte_SysCon_Variant_HCDR_5 && !Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5)

    boolean rtb_VariantMerge_For_Variant_Source_Va_f;

#endif

    float32 rtb_VeHCDR_U_SysVltg_AD;
    boolean rtb_VeHCDR_b_Htr4_LOC_BPCM_FA_AD;

#if !(!Rte_SysCon_Variant_HCDR_1) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8) || !Rte_SysCon_Variant_HCDR_8 || !Rte_SysCon_Variant_HCDR_9

    boolean rtb_VeHCDR_b_LTAP_LOC_FA_AD;

#endif

#if !(!Rte_SysCon_Variant_HCDR_1) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8) || !Rte_SysCon_Variant_HCDR_8 || !Rte_SysCon_Variant_HCDR_9

    boolean rtb_VeHCDR_b_BPCM_LINLOC_FA_AD;

#endif

    boolean rtb_TmpSignalConversionAtVeHTRR_b_Heat_c;
    boolean rtb_TmpSignalConversionAtVeHTRR_b_Heat_k;
    boolean rtb_TmpSignalConversionAtVeHTRR_b_Heat_m;
    boolean rtb_TmpSignalConversionAtVeHTRR_b_Heater;

#if (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8) || Rte_SysCon_Variant_HCDR_2

    boolean rtb_AND_hkn;

#endif

#if Rte_SysCon_Variant_HCDR_2

    boolean rtb_UnitDelay_bd;

#endif

#if Rte_SysCon_Variant_HCDR_2

    boolean rtb_TmpSignalConversionAtVeTAIR_b_CompSp;

#endif

#if Rte_SysCon_Variant_HCDR_2

    float32 rtb_SumSub;

#endif

#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3 || Rte_SysCon_Variant_HCDR_5

    float32 rtb_TmpSignalConversionAtVeACCR_n_CompSp;

#endif

#if (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8) || Rte_SysCon_Variant_HCDR_2

    boolean rtb_Comparison1_c;

#endif

#if (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8) || Rte_SysCon_Variant_HCDR_2

    boolean rtb_AND_ca;

#endif

#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3

    float32 rtb_TmpSignalConversionAtVeTAIR_n_CompSp;

#endif

#if (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || Rte_SysCon_Variant_HCDR_8

    boolean rtb_TmpSignalConversionAtVeTMIR_b_MainRl;

#endif

#if Rte_SysCon_Variant_HCDR_3

    boolean rtb_VariantMerge_For_Variant_Source_V_ae;

#endif

#if (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || Rte_SysCon_Variant_HCDR_3 || Rte_SysCon_Variant_HCDR_6 || Rte_SysCon_Variant_HCDR_7

    boolean rtb_TmpSignalConversionAtVePMTR_b_ThrmlS;

#endif

#if Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_8

    boolean rtb_TmpSignalConversionAtVeBPCR_b_HV_Bat;

#endif

#if Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_8

    boolean rtb_VariantMergeForOutportLeHCDR_b_BatCn;

#endif

#if Rte_SysCon_Variant_HCDR_2

    float32 rtb_Product;

#endif

#if Rte_SysCon_Variant_HCDR_5

    float32 rtb_TmpSignalConversionAtVeHTIR_P_HVC__h;

#endif

    boolean rtb_Comparison1_e;

#if Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

    boolean rtb_AND15_p;

#endif

#if Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

    boolean rtb_AND16_d;

#endif

#if Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

    boolean rtb_AND8_o;

#endif

#if Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

    boolean rtb_AND13_b;

#endif

#if Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

    boolean rtb_AND4_h;

#endif

#if Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

    boolean rtb_AND2_h;

#endif

#if Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

    boolean rtb_AND3_e2;

#endif

#if Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5

    boolean rtb_AND6_b;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean rtb_LogicalOperator8_g;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean rtb_LogicalOperator9_g;

#endif

#if Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_6

    boolean rtb_TmpSignalConversionAtVeHTRR_b_HVC_Ht;

#endif

#if Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_6

    float32 rtb_TmpSignalConversionAtVeHTRR_P_HVC_Ht;

#endif

#if Rte_SysCon_Variant_HCDR_5

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht;

#endif

#if Rte_SysCon_Variant_HCDR_6

    float32 rtb_TmpSignalConversionAtVeHTRR_P_HV_Htr;

#endif

#if Rte_SysCon_Variant_HCDR_6 || Rte_SysCon_Variant_HCDR_7

    boolean rtb_TmpSignalConversionAtVeHTRR_b_HV_Htr;

#endif

#if Rte_SysCon_Variant_HCDR_6

    float32 rtb_TmpSignalConversionAtVeHTIR_P_HVC_Ht;

#endif

#if Rte_SysCon_Variant_HCDR_7 || Rte_SysCon_Variant_HCDR_8

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC__k;

#endif

#if Rte_SysCon_Variant_HCDR_7

    float32 rtb_TmpSignalConversionAtVeHTRR_P_HV_H_e;

#endif

#if Rte_SysCon_Variant_HCDR_7

    boolean rtb_TmpSignalConversionAtVeHTRR_b_HV_H_e;

#endif

#if Rte_SysCon_Variant_HCDR_7

    float32 rtb_TmpSignalConversionAtVeHTIR_P_HVC__b;

#endif

#if Rte_SysCon_Variant_HCDR_8

    float32 rtb_TmpSignalConversionAtVeHTIR_P_HVC__n;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean rtb_VariantMergeForOutportNo_BusOff_Err;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean rtb_LogicalOperator10_k;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean rtb_Logical7_ms;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean rtb_Logical11;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean rtb_TmpSignalConversionAtVeHTRR_b_HV__ga;

#endif

#if Rte_SysCon_Variant_HCDR_8

    float32 rtb_TmpSignalConversionAtVeHTRR_P_HV_H_k;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean rtb_TmpSignalConversionAtVeHTIR_b_HVC__e;

#endif

#if Rte_SysCon_Variant_HCDR_8

    boolean rtb_LogicalOperator7_p;

#endif

#if Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_8

    boolean rtb_TmpSignalConversionAtVeAATR_b_EstAmb;

#endif

#if Rte_SysCon_Variant_HCDR_7

    boolean rtb_AND_l5;

#endif

#if Rte_SysCon_Variant_HCDR_6

    boolean rtb_RelationalOperator3_g;

#endif

#if Rte_SysCon_Variant_HCDR_6

    boolean rtb_AND_pt;

#endif

#if Rte_SysCon_Variant_HCDR_6

    boolean rtb_OR1_lw;

#endif

#if Rte_SysCon_Variant_HCDR_8

    float32 rtb_TmpSignalConversionAtVeTRIR_T_HV_B_o;

#endif

#if Rte_SysCon_Variant_HCDR_8

    float32 rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat;

#endif

#if Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_8

    float32 rtb_TmpSignalConversionAtVeAATR_T_EstAmb;

#endif

#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3

    TeHCDR_e_CommBusOff rtb_VariantMerge_For_Variant_Source_Va_b;

#endif

    TePMDR_e_PowerMode rtb_VeHCDR_e_PowerMode_AD;

#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3

    TeTAIR_e_CompStat rtb_TmpSignalConversionAtVeTAIR_e_CompSt;

#endif

    TeBPCR_e_LOC_BatClntHtr rtb_VeHCDR_e_Htr4_LOC_BPCM_AD;

#if Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_6 || Rte_SysCon_Variant_HCDR_7 || Rte_SysCon_Variant_HCDR_8

    TePMTR_e_ThrmlDevisEnbl rtb_TmpSignalConversionAtVePMTR_e_ThrmlD;

#endif

    TeBPCR_e_LIN_BusOff rtb_VeHCDR_e_BPCM_LINLOC_AD;
    TeBPCR_e_LOC_BCP rtb_VeHCDR_e_LTAP_LOC_AD;

#if Rte_SysCon_Variant_HCDR_7

    TeHTIR_e_HVC_Htr_Warning rtb_TmpSignalConversionAtVeHTIR_e_HV_Htr;

#endif

#if Rte_SysCon_Variant_HCDR_5

    TeHCDR_e_CommBusOff rtb_VariantMerge_For_Variant_Source_V_at;

#endif

#if Rte_SysCon_Variant_HCDR_7

    TeHTIR_e_HVC_HtrSts rtb_TmpSignalConversionAtVeHTIR_e_HV_E_e;

#endif

#if Rte_SysCon_Variant_HCDR_6

    TeHTIR_e_HVC_HtrSts rtb_TmpSignalConversionAtVeHTIR_e_HV_E_h;

#endif

#if Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_8

    TeHVTR_e_HV_BatCntctrStat rtb_TmpSignalConversionAtVeBPCR_e_HV_Bat;

#endif

#if Rte_SysCon_Variant_HCDR_8

    TeHTIR_e_HVC_HtrSts rtb_TmpSignalConversionAtVeHTIR_e_HV_E_k;

#endif

#if Rte_SysCon_Variant_HCDR_5

    TeHTIR_e_HVC_HtrSts rtb_TmpSignalConversionAtVeHTIR_e_HV_Ele;

#endif

    TeHCDR_e_BatteryThermalFault tmp;

#if Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_6 || Rte_SysCon_Variant_HCDR_7 || Rte_SysCon_Variant_HCDR_8

    TeDFIB_e_FaultDebounceStatus rtb_RelationalOperator_m_tmp;

#endif

#if Rte_SysCon_Variant_HCDR_5

    sint32 rtb_LogicalOperator_ow_tmp;

#endif

#if Rte_SysCon_Variant_HCDR_3

    boolean guard1 = false;

#endif

#if Rte_SysCon_Variant_HCDR_3

    boolean guard2 = false;

#endif

#if Rte_SysCon_Variant_HCDR_3

    boolean guard3 = false;

#endif

#if Rte_SysCon_Variant_HCDR_3

    boolean guard4 = false;

#endif

#if Rte_SysCon_Variant_HCDR_3

    boolean guard5 = false;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/HCDR_MedTEH'
     */
    /* DataStoreWrite: '<S1>/Data Store Write9' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantHeaterBPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantHeaterBPerf_Value
        (&HCDR_ac_DW.StatusByte_CoolantHeaterBPerf);

    /* DataStoreWrite: '<S1>/Data Store Write8' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HeatingElmntPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HeatingElmntPerf_Value
        (&HCDR_ac_DW.StatusByte_HeatingElmntPerf);

    /* DataStoreWrite: '<S1>/Data Store Write7' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HighVolCabinAirHtrperf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HighVolCabinAirHtrperf_Value
        (&HCDR_ac_DW.StatusByte_HighVolCabinAirHtrperf);

    /* DataStoreWrite: '<S1>/Data Store Write6' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolHeaterAPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolHeaterAPerf_Value
        (&HCDR_ac_DW.StatusByte_CoolHeaterAPerf);

    /* DataStoreWrite: '<S1>/Data Store Write5' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBusPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBusPerf_Value
        (&HCDR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf);

    /* DataStoreWrite: '<S1>/Data Store Write4' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdFD_CAN5CommBusPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdFD_CAN5CommBusPerf_Value
        (&HCDR_ac_DW.StatusByte_HiSpdFD_CAN5CommBusPerf);

    /* DataStoreWrite: '<S1>/Data Store Write3' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdFD_CAN11CommBusPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdFD_CAN11CommBusPerf_Value
        (&HCDR_ac_DW.StatusByte_HiSpdFD_CAN11CommBusPerf);

    /* DataStoreWrite: '<S1>/Data Store Write2' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBus'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBus_Value
        (&HCDR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus);

    /* DataStoreWrite: '<S1>/Data Store Write1' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdFD_CAN5CommBus'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdFD_CAN5CommBus_Value
        (&HCDR_ac_DW.StatusByte_HiSpdFD_CAN5CommBus);

    /* DataStoreWrite: '<S1>/Data Store Write' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdFD_CAN11CommBus'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdFD_CAN11CommBus_Value
        (&HCDR_ac_DW.StatusByte_HiSpdFD_CAN11CommBus);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolPmpHtrBTempSnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpHtrBTempSnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpHtrBTempSnsrPerf_Value
        (&HCDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolLvlLow' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolLvlLow'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolLvlLow_Value
        (&HCDR_ac_DW.StatusByte_BattCoolLvlLow);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LosCommBECM_A_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_CANC11_Value
        (&HCDR_ac_DW.StatusByte_LosCommBECM_A_CANC11);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_InvData_BECM_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BECM_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BECM_CANC11_Value
        (&HCDR_ac_DW.StatusByte_InvData_BECM_CANC11);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CommBus_B_Off' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBus_B_Off'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBus_B_Off_Value
        (&HCDR_ac_DW.StatusByte_CommBus_B_Off);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommHB_CooltHtr4' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommHB_CooltHtr4'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommHB_CooltHtr4_Value
        (&HCDR_ac_DW.StatusByte_LostCommHB_CooltHtr4);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommHB_CoolPmp' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommHB_CoolPmp'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommHB_CoolPmp_Value
        (&HCDR_ac_DW.StatusByte_LostCommHB_CoolPmp);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolPmpPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpPerf_Value
        (&HCDR_ac_DW.StatusByte_BattCoolPmpPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolPmpOveSpd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolPmpOveSpd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolPmpOveSpd_Value
        (&HCDR_ac_DW.StatusByte_BattCoolPmpOveSpd);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommHighVolCabinAirHtr' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommHighVolCabinAirHtr'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommHighVolCabinAirHtr_Value
        (&HCDR_ac_DW.StatusByte_LostCommHighVolCabinAirHtr);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_ECH_TempOut' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ECH_TempOut'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ECH_TempOut_Value
        (&HCDR_ac_DW.StatusByte_ECH_TempOut);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_ECH_TempIn' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ECH_TempIn'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ECH_TempIn_Value
        (&HCDR_ac_DW.StatusByte_ECH_TempIn);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvB_StkOpn' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvB_StkOpn'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvB_StkOpn_Value
        (&HCDR_ac_DW.StatusByte_CoolantVlvB_StkOpn);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvB_StkClsd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvB_StkClsd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvB_StkClsd_Value
        (&HCDR_ac_DW.StatusByte_CoolantVlvB_StkClsd);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvB_Ckt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvB_Ckt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvB_Ckt_Value
        (&HCDR_ac_DW.StatusByte_CoolantVlvB_Ckt);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvB_CktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvB_CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvB_CktLo_Value
        (&HCDR_ac_DW.StatusByte_CoolantVlvB_CktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolantVlvB_CktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvB_CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvB_CktHi_Value
        (&HCDR_ac_DW.StatusByte_CoolantVlvB_CktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommHB_PSCCooCtrlVlvC' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommHB_PSCCooCtrlVlvC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommHB_PSCCooCtrlVlvC_Value
        (&HCDR_ac_DW.StatusByte_LostCommHB_PSCCooCtrlVlvC);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HB_PSC_CtrlValCCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HB_PSC_CtrlValCCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HB_PSC_CtrlValCCktPerf_Value
        (&HCDR_ac_DW.StatusByte_HB_PSC_CtrlValCCktPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_ECT_Snsr4CktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ECT_Snsr4CktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ECT_Snsr4CktPerf_Value
        (&HCDR_ac_DW.StatusByte_ECT_Snsr4CktPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT_SnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT_SnsrPerf_Value
        (&HCDR_ac_DW.StatusByte_CT_SnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT3_SnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT3_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT3_SnsrPerf_Value
        (&HCDR_ac_DW.StatusByte_CT3_SnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT2_SnsrPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT2_SnsrPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT2_SnsrPerf_Value
        (&HCDR_ac_DW.StatusByte_CT2_SnsrPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT2_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT2_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT2_SnsrCktLo_Value
        (&HCDR_ac_DW.StatusByte_CT2_SnsrCktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT2_SnsrCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT2_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT2_SnsrCktHi_Value
        (&HCDR_ac_DW.StatusByte_CT2_SnsrCktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommCoolPmpA' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommCoolPmpA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommCoolPmpA_Value
        (&HCDR_ac_DW.StatusByte_LostCommCoolPmpA);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LosCommBECM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_Value
        (&HCDR_ac_DW.StatusByte_LosCommBECM_A);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_InvData_BECM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BECM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BECM_Value
        (&HCDR_ac_DW.StatusByte_InvData_BECM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolPmpACtrlCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolPmpACtrlCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolPmpACtrlCktPerf_Value
        (&HCDR_ac_DW.StatusByte_CoolPmpACtrlCktPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommCoolHtrA' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommCoolHtrA'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommCoolHtrA_Value
        (&HCDR_ac_DW.StatusByte_LostCommCoolHtrA);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_ECT_Snsr4CktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ECT_Snsr4CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ECT_Snsr4CktLo_Value
        (&HCDR_ac_DW.StatusByte_ECT_Snsr4CktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_ECT_Snsr4CktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ECT_Snsr4CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ECT_Snsr4CktHi_Value
        (&HCDR_ac_DW.StatusByte_ECT_Snsr4CktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CoolCtrlVlv1CktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolCtrlVlv1CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolCtrlVlv1CktHi_Value
        (&HCDR_ac_DW.StatusByte_CoolCtrlVlv1CktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT_SnsrCktLo_Value
        (&HCDR_ac_DW.StatusByte_CT_SnsrCktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT_SnsrCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT_SnsrCktHi_Value
        (&HCDR_ac_DW.StatusByte_CT_SnsrCktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT3_SnsrCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT3_SnsrCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT3_SnsrCktLo_Value
        (&HCDR_ac_DW.StatusByte_CT3_SnsrCktLo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CT3_SnsrCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CT3_SnsrCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CT3_SnsrCktHi_Value
        (&HCDR_ac_DW.StatusByte_CT3_SnsrCktHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolLvlSnsCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BattCoolLvlSnsCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BattCoolLvlSnsCkt_Value
        (&HCDR_ac_DW.StatusByte_BattCoolLvlSnsCkt);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrALo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrALo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrALo_Value
        (&HCDR_ac_DW.StatusByte_AC_RefrigPresSnsrALo);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrAHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrAHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrAHi_Value
        (&HCDR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_EACPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EACPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EACPerf_Value
        (&HCDR_ac_DW.StatusByte_EACPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommEAC' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommEAC'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommEAC_Value
        (&HCDR_ac_DW.StatusByte_LostCommEAC);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN3_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN3_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN3_BusOff_Value
        (&HCDR_ac_DW.StatusByte_LIN3_BusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN2_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN2_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN2_BusOff_Value
        (&HCDR_ac_DW.StatusByte_LIN2_BusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LIN1_BusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LIN1_BusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LIN1_BusOff_Value
        (&HCDR_ac_DW.StatusByte_LIN1_BusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_HiSpdCANCommBusPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdCANCommBusPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdCANCommBusPerf_Value
        (&HCDR_ac_DW.StatusByte_HiSpdCANCommBusPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CommBusOff' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CommBusOff'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CommBusOff_Value
        (&HCDR_ac_DW.StatusByte_CommBusOff);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_AC_RefrigPresSnsrAPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrAPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrAPerf_Value
        (&HCDR_ac_DW.StatusByte_AC_RefrigPresSnsrAPerf);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_ThrmlRlyCtrlCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt_Value
        (&HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt);

    /* SignalConversion generated from: '<S1>/VeHTRR_b_Heater1Slct' incorporates:
     *  Inport: '<Root>/VeHTRR_b_Heater1Slct'
     */
    (void)Rte_Read_VeHTRR_b_Heater1Slct_Value
        (&rtb_TmpSignalConversionAtVeHTRR_b_Heater);

    /* SignalConversion generated from: '<S1>/VeHTRR_b_Heater2Slct' incorporates:
     *  Inport: '<Root>/VeHTRR_b_Heater2Slct'
     */
    (void)Rte_Read_VeHTRR_b_Heater2Slct_Value
        (&rtb_TmpSignalConversionAtVeHTRR_b_Heat_m);

    /* SignalConversion generated from: '<S1>/VeHTRR_b_Heater3Slct' incorporates:
     *  Inport: '<Root>/VeHTRR_b_Heater3Slct'
     */
    (void)Rte_Read_VeHTRR_b_Heater3Slct_Value
        (&rtb_TmpSignalConversionAtVeHTRR_b_Heat_k);

    /* SignalConversion generated from: '<S1>/VeHTRR_b_Heater4Slct' incorporates:
     *  Inport: '<Root>/VeHTRR_b_Heater4Slct'
     */
    (void)Rte_Read_VeHTRR_b_Heater4Slct_Value
        (&rtb_TmpSignalConversionAtVeHTRR_b_Heat_c);

    /* SignalConversion generated from: '<S1>/VeHTIR_b_HVC_HtrPwrAct_FA' */
#if Rte_SysCon_Variant_HCDR_5

    /* SignalConversion generated from: '<S1>/VeHTIR_b_HVC_HtrPwrAct_FA' incorporates:
     *  Inport: '<Root>/VeHTIR_b_HVC_HtrPwrAct_FA'
     */
    (void)Rte_Read_VeHTIR_b_HVC_HtrPwrAct_FA_Value
        (&rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHTIR_b_HVC_HtrPwrAct_FA' */

    /* SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl' */
#if Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_6 || Rte_SysCon_Variant_HCDR_7 || Rte_SysCon_Variant_HCDR_8

    /* SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl' incorporates:
     *  Inport: '<Root>/VePMTR_e_ThrmlDevEnbl'
     */
    (void)Rte_Read_VePMTR_e_ThrmlDevEnbl_Value
        (&rtb_TmpSignalConversionAtVePMTR_e_ThrmlD);

#endif

    /* End of SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl' */

    /* SignalConversion generated from: '<S1>/VeHTRR_b_HVC_HtrReq' incorporates:
     *  SignalConversion generated from: '<S1>/VeHTIR_e_HV_ElecClntHtr_Sts'
     *  SignalConversion generated from: '<S1>/VeHTRR_P_HVC_HtrPwrLimit'
     */
#if Rte_SysCon_Variant_HCDR_5

    /* SignalConversion generated from: '<S1>/VeHTRR_b_HVC_HtrReq' incorporates:
     *  Inport: '<Root>/VeHTRR_b_HVC_HtrReq'
     */
    (void)Rte_Read_VeHTRR_b_HVC_HtrReq_Value
        (&rtb_TmpSignalConversionAtVeHTRR_b_HVC_Ht);

    /* SignalConversion generated from: '<S1>/VeHTRR_P_HVC_HtrPwrLimit' incorporates:
     *  Inport: '<Root>/VeHTRR_P_HVC_HtrPwrLimit'
     */
    (void)Rte_Read_VeHTRR_P_HVC_HtrPwrLimit_Value
        (&rtb_TmpSignalConversionAtVeHTRR_P_HVC_Ht);

    /* SignalConversion generated from: '<S1>/VeHTIR_e_HV_ElecClntHtr_Sts' incorporates:
     *  Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr_Sts'
     */
    (void)Rte_Read_VeHTIR_e_HV_ElecClntHtr_Sts_Value
        (&rtb_TmpSignalConversionAtVeHTIR_e_HV_Ele);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHTRR_b_HVC_HtrReq' */

    /* SignalConversion generated from: '<S1>/VeHTRR_b_HV_Htr2Req' incorporates:
     *  SignalConversion generated from: '<S1>/VeHTIR_P_HVC_Htr2PwrAct'
     *  SignalConversion generated from: '<S1>/VeHTIR_e_HV_ElecClntHtr2_Sts'
     *  SignalConversion generated from: '<S1>/VeHTRR_P_HV_Htr2PwrLimit'
     */
#if Rte_SysCon_Variant_HCDR_6

    /* SignalConversion generated from: '<S1>/VeHTRR_b_HV_Htr2Req' incorporates:
     *  Inport: '<Root>/VeHTRR_b_HV_Htr2Req'
     */
    (void)Rte_Read_VeHTRR_b_HV_Htr2Req_Value
        (&rtb_TmpSignalConversionAtVeHTRR_b_HV_Htr);

    /* SignalConversion generated from: '<S1>/VeHTRR_P_HV_Htr2PwrLimit' incorporates:
     *  Inport: '<Root>/VeHTRR_P_HV_Htr2PwrLimit'
     */
    (void)Rte_Read_VeHTRR_P_HV_Htr2PwrLimit_Value
        (&rtb_TmpSignalConversionAtVeHTRR_P_HV_Htr);

    /* SignalConversion generated from: '<S1>/VeHTIR_e_HV_ElecClntHtr2_Sts' incorporates:
     *  Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr2_Sts'
     */
    (void)Rte_Read_VeHTIR_e_HV_ElecClntHtr2_Sts_Value
        (&rtb_TmpSignalConversionAtVeHTIR_e_HV_E_h);

    /* SignalConversion generated from: '<S1>/VeHTIR_P_HVC_Htr2PwrAct' incorporates:
     *  Inport: '<Root>/VeHTIR_P_HVC_Htr2PwrAct'
     */
    (void)Rte_Read_VeHTIR_P_HVC_Htr2PwrAct_Value
        (&rtb_TmpSignalConversionAtVeHTIR_P_HVC_Ht);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHTRR_b_HV_Htr2Req' */

    /* SignalConversion generated from: '<S1>/VeHTIR_b_HVC_Htr3PwrAct_FA' incorporates:
     *  SignalConversion generated from: '<S1>/VeHTIR_P_HVC_Htr3PwrAct'
     *  SignalConversion generated from: '<S1>/VeHTIR_e_HV_ElecClntHtr3_Sts'
     *  SignalConversion generated from: '<S1>/VeHTIR_e_HV_Htr3Cntctr_StckClsd'
     *  SignalConversion generated from: '<S1>/VeHTRR_P_HV_Htr3PwrLimit'
     *  SignalConversion generated from: '<S1>/VeHTRR_b_HV_Htr3Req'
     */
#if Rte_SysCon_Variant_HCDR_7

    /* SignalConversion generated from: '<S1>/VeHTIR_b_HVC_Htr3PwrAct_FA' incorporates:
     *  Inport: '<Root>/VeHTIR_b_HVC_Htr3PwrAct_FA'
     */
    (void)Rte_Read_VeHTIR_b_HVC_Htr3PwrAct_FA_Value
        (&rtb_TmpSignalConversionAtVeHTIR_b_HVC__k);

    /* SignalConversion generated from: '<S1>/VeHTIR_e_HV_Htr3Cntctr_StckClsd' incorporates:
     *  Inport: '<Root>/VeHTIR_e_HV_Htr3Cntctr_StckClsd'
     */
    (void)Rte_Read_VeHTIR_e_HV_Htr3Cntctr_StckClsd_Value
        (&rtb_TmpSignalConversionAtVeHTIR_e_HV_Htr);

    /* SignalConversion generated from: '<S1>/VeHTRR_b_HV_Htr3Req' incorporates:
     *  Inport: '<Root>/VeHTRR_b_HV_Htr3Req'
     */
    (void)Rte_Read_VeHTRR_b_HV_Htr3Req_Value
        (&rtb_TmpSignalConversionAtVeHTRR_b_HV_H_e);

    /* SignalConversion generated from: '<S1>/VeHTRR_P_HV_Htr3PwrLimit' incorporates:
     *  Inport: '<Root>/VeHTRR_P_HV_Htr3PwrLimit'
     */
    (void)Rte_Read_VeHTRR_P_HV_Htr3PwrLimit_Value
        (&rtb_TmpSignalConversionAtVeHTRR_P_HV_H_e);

    /* SignalConversion generated from: '<S1>/VeHTIR_e_HV_ElecClntHtr3_Sts' incorporates:
     *  Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr3_Sts'
     */
    (void)Rte_Read_VeHTIR_e_HV_ElecClntHtr3_Sts_Value
        (&rtb_TmpSignalConversionAtVeHTIR_e_HV_E_e);

    /* SignalConversion generated from: '<S1>/VeHTIR_P_HVC_Htr3PwrAct' incorporates:
     *  Inport: '<Root>/VeHTIR_P_HVC_Htr3PwrAct'
     */
    (void)Rte_Read_VeHTIR_P_HVC_Htr3PwrAct_Value
        (&rtb_TmpSignalConversionAtVeHTIR_P_HVC__b);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHTIR_b_HVC_Htr3PwrAct_FA' */

    /* SignalConversion generated from: '<S1>/VeHTIR_b_HVC_Htr4PwrAct_FA' incorporates:
     *  SignalConversion generated from: '<S1>/VeHTIR_e_HV_ElecClntHtr4_Sts'
     *  SignalConversion generated from: '<S1>/VeHTRR_P_HV_Htr4PwrLimit'
     *  SignalConversion generated from: '<S1>/VeHTRR_b_HV_Htr4Req'
     *  SignalConversion generated from: '<S1>/VeTRIR_T_HV_BatClntTmpOut2'
     *  SignalConversion generated from: '<S1>/VeTRIR_T_HV_BatClntTmpOut'
     */
#if Rte_SysCon_Variant_HCDR_8

    /* SignalConversion generated from: '<S1>/VeHTIR_b_HVC_Htr4PwrAct_FA' incorporates:
     *  Inport: '<Root>/VeHTIR_b_HVC_Htr4PwrAct_FA'
     */
    (void)Rte_Read_VeHTIR_b_HVC_Htr4PwrAct_FA_Value
        (&rtb_TmpSignalConversionAtVeHTIR_b_HVC__e);

    /* SignalConversion generated from: '<S1>/VeHTRR_b_HV_Htr4Req' incorporates:
     *  Inport: '<Root>/VeHTRR_b_HV_Htr4Req'
     */
    (void)Rte_Read_VeHTRR_b_HV_Htr4Req_Value
        (&rtb_TmpSignalConversionAtVeHTRR_b_HV__ga);

    /* SignalConversion generated from: '<S1>/VeHTRR_P_HV_Htr4PwrLimit' incorporates:
     *  Inport: '<Root>/VeHTRR_P_HV_Htr4PwrLimit'
     */
    (void)Rte_Read_VeHTRR_P_HV_Htr4PwrLimit_Value
        (&rtb_TmpSignalConversionAtVeHTRR_P_HV_H_k);

    /* SignalConversion generated from: '<S1>/VeHTIR_e_HV_ElecClntHtr4_Sts' incorporates:
     *  Inport: '<Root>/VeHTIR_e_HV_ElecClntHtr4_Sts'
     */
    (void)Rte_Read_VeHTIR_e_HV_ElecClntHtr4_Sts_Value
        (&rtb_TmpSignalConversionAtVeHTIR_e_HV_E_k);

    /* SignalConversion generated from: '<S1>/VeTRIR_T_HV_BatClntTmpOut' incorporates:
     *  Inport: '<Root>/VeTRIR_T_HV_BatClntTmpOut'
     */
    (void)Rte_Read_VeTRIR_T_HV_BatClntTmpOut_Value
        (&rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat);

    /* SignalConversion generated from: '<S1>/VeTRIR_T_HV_BatClntTmpOut2' incorporates:
     *  Inport: '<Root>/VeTRIR_T_HV_BatClntTmpOut2'
     */
    (void)Rte_Read_VeTRIR_T_HV_BatClntTmpOut2_Value
        (&rtb_TmpSignalConversionAtVeTRIR_T_HV_B_o);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHTIR_b_HVC_Htr4PwrAct_FA' */

    /* SignalConversion generated from: '<S1>/VeACCR_n_CompSpdTgt' incorporates:
     *  SignalConversion generated from: '<S1>/VeTAIR_n_CompSpdFdb'
     */
#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3

    /* SignalConversion generated from: '<S1>/VeACCR_n_CompSpdTgt' incorporates:
     *  Inport: '<Root>/VeACCR_n_CompSpdTgt'
     */
    (void)Rte_Read_VeACCR_n_CompSpdTgt_Value
        (&rtb_TmpSignalConversionAtVeACCR_n_CompSp);

    /* SignalConversion generated from: '<S1>/VeTAIR_n_CompSpdFdb' incorporates:
     *  Inport: '<Root>/VeTAIR_n_CompSpdFdb'
     */
    (void)Rte_Read_VeTAIR_n_CompSpdFdb_Value
        (&rtb_TmpSignalConversionAtVeTAIR_n_CompSp);

#endif

    /* End of SignalConversion generated from: '<S1>/VeACCR_n_CompSpdTgt' */

    /* SignalConversion generated from: '<S1>/VePMTR_b_ThrmlSystRly_EnblCmnd' */
#if (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3)

    /* SignalConversion generated from: '<S1>/VePMTR_b_ThrmlSystRly_EnblCmnd' incorporates:
     *  Inport: '<Root>/VePMTR_b_ThrmlSystRly_EnblCmnd'
     */
    (void)Rte_Read_VePMTR_b_ThrmlSystRly_EnblCmnd_Value
        (&rtb_TmpSignalConversionAtVePMTR_b_ThrmlS);

#endif

    /* End of SignalConversion generated from: '<S1>/VePMTR_b_ThrmlSystRly_EnblCmnd' */

    /* SignalConversion generated from: '<S1>/VeTAIR_b_HghRfrgtPres_FA' incorporates:
     *  Inport: '<Root>/VeTAIR_b_HghRfrgtPres_FA'
     */
    (void)Rte_Read_VeTAIR_b_HghRfrgtPres_FA_Value
        (&rtb_TmpSignalConversionAtVeTAIR_b_HghRfr);

    /* SignalConversion generated from: '<S1>/VeTAIR_e_CompStat' */
#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3

    /* SignalConversion generated from: '<S1>/VeTAIR_e_CompStat' incorporates:
     *  Inport: '<Root>/VeTAIR_e_CompStat'
     */
    (void)Rte_Read_VeTAIR_e_CompStat_Value
        (&rtb_TmpSignalConversionAtVeTAIR_e_CompSt);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTAIR_e_CompStat' */

    /* SignalConversion generated from: '<S1>/VeTAIR_b_CompSpdFdb_FA' */
#if Rte_SysCon_Variant_HCDR_2

    /* SignalConversion generated from: '<S1>/VeTAIR_b_CompSpdFdb_FA' incorporates:
     *  Inport: '<Root>/VeTAIR_b_CompSpdFdb_FA'
     */
    (void)Rte_Read_VeTAIR_b_CompSpdFdb_FA_Value
        (&rtb_TmpSignalConversionAtVeTAIR_b_CompSp);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTAIR_b_CompSpdFdb_FA' */

    /* SignalConversion generated from: '<S1>/VeHTIR_P_HVC_Htr4PwrAct' */
#if Rte_SysCon_Variant_HCDR_8

    /* SignalConversion generated from: '<S1>/VeHTIR_P_HVC_Htr4PwrAct' incorporates:
     *  Inport: '<Root>/VeHTIR_P_HVC_Htr4PwrAct'
     */
    (void)Rte_Read_VeHTIR_P_HVC_Htr4PwrAct_Value
        (&rtb_TmpSignalConversionAtVeHTIR_P_HVC__n);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHTIR_P_HVC_Htr4PwrAct' */

    /* SignalConversion generated from: '<S1>/VeDFIR_b_IsDiagGlobalConditionsValid' */
#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3 || Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_6 || Rte_SysCon_Variant_HCDR_7 || Rte_SysCon_Variant_HCDR_8

    /* SignalConversion generated from: '<S1>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDFIR_b_IsDiagGlobalConditionsValid' */

    /* SignalConversion generated from: '<S1>/VeTMIR_b_MainRly_CmdReq' */
#if (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8)

    /* SignalConversion generated from: '<S1>/VeTMIR_b_MainRly_CmdReq' incorporates:
     *  Inport: '<Root>/VeTMIR_b_MainRly_CmdReq'
     */
    (void)Rte_Read_VeTMIR_b_MainRly_CmdReq_Value
        (&rtb_TmpSignalConversionAtVeTMIR_b_MainRl);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTMIR_b_MainRly_CmdReq' */

    /* SignalConversion generated from: '<S1>/VeHTIR_P_HVC_HtrPwrAct' */
#if Rte_SysCon_Variant_HCDR_5

    /* SignalConversion generated from: '<S1>/VeHTIR_P_HVC_HtrPwrAct' incorporates:
     *  Inport: '<Root>/VeHTIR_P_HVC_HtrPwrAct'
     */
    (void)Rte_Read_VeHTIR_P_HVC_HtrPwrAct_Value
        (&rtb_TmpSignalConversionAtVeHTIR_P_HVC__h);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHTIR_P_HVC_HtrPwrAct' */

    /* SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp' incorporates:
     *  SignalConversion generated from: '<S1>/VeAATR_b_EstAmbAirTempFA'
     *  SignalConversion generated from: '<S1>/VeBPCR_b_HV_BatCntctrStatFA'
     *  SignalConversion generated from: '<S1>/VeBPCR_e_HV_BatCntctrStat'
     */
#if Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_8

    /* SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp' incorporates:
     *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
     */
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value
        (&rtb_TmpSignalConversionAtVeAATR_T_EstAmb);

    /* SignalConversion generated from: '<S1>/VeAATR_b_EstAmbAirTempFA' incorporates:
     *  Inport: '<Root>/VeAATR_b_EstAmbAirTempFA'
     */
    (void)Rte_Read_VeAATR_b_EstAmbAirTempFA_Value
        (&rtb_TmpSignalConversionAtVeAATR_b_EstAmb);

    /* SignalConversion generated from: '<S1>/VeBPCR_e_HV_BatCntctrStat' incorporates:
     *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
     */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value
        (&rtb_TmpSignalConversionAtVeBPCR_e_HV_Bat);

    /* SignalConversion generated from: '<S1>/VeBPCR_b_HV_BatCntctrStatFA' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HV_BatCntctrStatFA'
     */
    (void)Rte_Read_VeBPCR_b_HV_BatCntctrStatFA_Value
        (&rtb_TmpSignalConversionAtVeBPCR_b_HV_Bat);

#endif

    /* End of SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp' */
#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

    /* S-Function (fcgen): '<S1>/FcnCallGen' */
    /* Inport: '<Root>/VePLTR_t_RTC_CurrentTime' */
    (void)Rte_Read_VePLTR_t_RTC_CurrentTime_Value((&(VeHCDR_t_RealTimeClock_AD)));

    /* Inport: '<Root>/VePMDR_e_PMM_PowerMode' */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value((&(VeHCDR_e_PowerMode_AD)));

    /* Inport: '<Root>/VeHPMR_b_PropSysActv' */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value((&(VeHCDR_b_PropSysActv_AD)));

    /* Inport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_FA' */
    (void)Rte_Read_VeBPCR_b_BPCM_LIN_BusOff_FA_Value
        ((&(VeHCDR_b_BPCM_LINLOC_FA_AD)));

    /* Inport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_FA' */
    (void)Rte_Read_VeBPCR_b_BPCM_LOC_BCP_FA_Value((&(VeHCDR_b_LTAP_LOC_FA_AD)));

    /* Inport: '<Root>/VeBPCR_b_BPCM_LOC_BatClntHtr_FA' */
    (void)Rte_Read_VeBPCR_b_BPCM_LOC_BatClntHtr_FA_Value
        ((&(VeHCDR_b_Htr4_LOC_BPCM_FA_AD)));

    /* Inport: '<Root>/VeBPCR_e_BPCM_LIN_BusOff' */
    (void)Rte_Read_VeBPCR_e_BPCM_LIN_BusOff_Value((&(VeHCDR_e_BPCM_LINLOC_AD)));

    /* Inport: '<Root>/VeBPCR_e_BPCM_LOC_BCP' */
    (void)Rte_Read_VeBPCR_e_BPCM_LOC_BCP_Value((&(VeHCDR_e_LTAP_LOC_AD)));

    /* Inport: '<Root>/VeBPCR_e_BPCM_LOC_BatClntHtr' */
    (void)Rte_Read_VeBPCR_e_BPCM_LOC_BatClntHtr_Value
        ((&(VeHCDR_e_Htr4_LOC_BPCM_AD)));

    /* Inport: '<Root>/VePMDR_U_BF1_SysVolt' */
    (void)Rte_Read_VePMDR_U_BF1_SysVolt_Value((&(VeHCDR_U_SysVltg_AD)));

    /* Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl' */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        ((&(VeHCDR_b_PstCdeClrDiagDsbl_AD)));

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        ((&(VeHCDR_b_DsblDiagFailSafe_AD)));

    /* Outputs for Function Call SubSystem: '<S1>/Input' */
    /* Switch: '<S5>/Switch9' incorporates:
     *  Constant: '<S1016>/Calib'
     */
    if (KeHCDR_b_DsblDiagFailSafe_SD)
    {
        /* Switch: '<S5>/Switch9' incorporates:
         *  Constant: '<S1015>/Calib'
         *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
         */
        VeHCDR_b_DsblDiagFailSafe_AD = KeHCDR_b_DsblDiagFailSafe_D;
    }

    /* End of Switch: '<S5>/Switch9' */

    /* Switch: '<S5>/Switch8' incorporates:
     *  Constant: '<S1027>/Calib'
     */
    if (KeHCDR_b_PstCdeClrDiagDsbl_SD)
    {
        /* Switch: '<S5>/Switch8' incorporates:
         *  Constant: '<S1026>/Calib'
         *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
         */
        VeHCDR_b_PstCdeClrDiagDsbl_AD = KeHCDR_b_PstCdeClrDiagDsbl_D;
    }

    /* End of Switch: '<S5>/Switch8' */

    /* Switch: '<S5>/Switch34' incorporates:
     *  Constant: '<S1025>/Calib'
     */
    if (KeHCDR_b_PropSysActv_SD)
    {
        /* Switch: '<S5>/Switch34' incorporates:
         *  Constant: '<S1024>/Calib'
         *  Inport: '<Root>/VeHPMR_b_PropSysActv'
         */
        VeHCDR_b_PropSysActv_AD = KeHCDR_b_PropSysActv_D;
    }

    /* End of Switch: '<S5>/Switch34' */

    /* Switch: '<S5>/Switch24' incorporates:
     *  Constant: '<S1029>/Calib'
     */
    if (KeHCDR_b_SysVltg_SD)
    {
        /* Switch: '<S5>/Switch24' incorporates:
         *  Constant: '<S1011>/Calib'
         *  Inport: '<Root>/VePMDR_U_BF1_SysVolt'
         */
        VeHCDR_U_SysVltg_AD = KeHCDR_U_SysVltg_D;
    }

    /* End of Switch: '<S5>/Switch24' */

    /* Switch: '<S5>/Switch26' incorporates:
     *  Constant: '<S1022>/Calib'
     */
    if (KeHCDR_b_LTAP_LOC_SD)
    {
        /* Switch: '<S5>/Switch26' incorporates:
         *  Constant: '<S1032>/Calib'
         *  Inport: '<Root>/VeBPCR_e_BPCM_LOC_BCP'
         */
        VeHCDR_e_LTAP_LOC_AD = KeHCDR_e_LTAP_LOC_D;
    }

    /* End of Switch: '<S5>/Switch26' */

    /* Switch: '<S5>/Switch25' incorporates:
     *  Constant: '<S1021>/Calib'
     */
    if (KeHCDR_b_LTAP_LOC_FA_SD)
    {
        /* Switch: '<S5>/Switch25' incorporates:
         *  Constant: '<S1020>/Calib'
         *  Inport: '<Root>/VeBPCR_b_BPCM_LOC_BCP_FA'
         */
        VeHCDR_b_LTAP_LOC_FA_AD = KeHCDR_b_LTAP_LOC_FA_D;
    }

    /* End of Switch: '<S5>/Switch25' */

    /* Switch: '<S5>/Switch28' incorporates:
     *  Constant: '<S1014>/Calib'
     */
    if (KeHCDR_b_BPCM_LINLOC_SD)
    {
        /* Switch: '<S5>/Switch28' incorporates:
         *  Constant: '<S1030>/Calib'
         *  Inport: '<Root>/VeBPCR_e_BPCM_LIN_BusOff'
         */
        VeHCDR_e_BPCM_LINLOC_AD = KeHCDR_e_BPCM_LINLOC_D;
    }

    /* End of Switch: '<S5>/Switch28' */

    /* Switch: '<S5>/Switch27' incorporates:
     *  Constant: '<S1013>/Calib'
     */
    if (KeHCDR_b_BPCM_LINLOC_FA_SD)
    {
        /* Switch: '<S5>/Switch27' incorporates:
         *  Constant: '<S1012>/Calib'
         *  Inport: '<Root>/VeBPCR_b_BPCM_LIN_BusOff_FA'
         */
        VeHCDR_b_BPCM_LINLOC_FA_AD = KeHCDR_b_BPCM_LINLOC_FA_D;
    }

    /* End of Switch: '<S5>/Switch27' */

    /* Switch: '<S5>/Switch3' incorporates:
     *  Constant: '<S1019>/Calib'
     */
    if (KeHCDR_b_Htr4_LOC_BPCM_SD)
    {
        /* Switch: '<S5>/Switch3' incorporates:
         *  Constant: '<S1031>/Calib'
         *  Inport: '<Root>/VeBPCR_e_BPCM_LOC_BatClntHtr'
         */
        VeHCDR_e_Htr4_LOC_BPCM_AD = KeHCDR_e_Htr4_LOC_BPCM_D;
    }

    /* End of Switch: '<S5>/Switch3' */

    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S1018>/Calib'
     */
    if (KeHCDR_b_Htr4_LOC_BPCM_FA_SD)
    {
        /* Switch: '<S5>/Switch1' incorporates:
         *  Constant: '<S1017>/Calib'
         *  Inport: '<Root>/VeBPCR_b_BPCM_LOC_BatClntHtr_FA'
         */
        VeHCDR_b_Htr4_LOC_BPCM_FA_AD = KeHCDR_b_Htr4_LOC_BPCM_FA_D;
    }

    /* End of Switch: '<S5>/Switch1' */

    /* Switch: '<S5>/Switch2' incorporates:
     *  Constant: '<S1023>/Calib'
     */
    if (KeHCDR_b_PowerMode_SelDial)
    {
        /* Switch: '<S5>/Switch2' incorporates:
         *  Constant: '<S1033>/Calib'
         *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
         */
        VeHCDR_e_PowerMode_AD = KeHCDR_e_PowerMode_Dial;
    }

    /* End of Switch: '<S5>/Switch2' */

    /* Switch: '<S5>/Switch' incorporates:
     *  Constant: '<S1028>/Calib'
     */
    if (KeHCDR_b_RealTimeClock_SD)
    {
        /* Switch: '<S5>/Switch' incorporates:
         *  Constant: '<S1034>/Calib'
         *  Inport: '<Root>/VePLTR_t_RTC_CurrentTime'
         */
        VeHCDR_t_RealTimeClock_AD = KeHCDR_t_RealTimeClock_D;
    }

    /* End of Switch: '<S5>/Switch' */
    /* End of Outputs for SubSystem: '<S1>/Input' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnosis'
     */

    /* S-Function (sfix_bitop): '<S173>/Bitwise Operator2' incorporates:
     *  Logic: '<S14>/Logical1'
     *  Logic: '<S173>/Logical Operator'
     *  RelationalOperator: '<S173>/Relational Operator1'
     *  RelationalOperator: '<S173>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S173>/Bitwise Operator1'
     */
#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3

    /* Logic: '<S14>/Logical1' incorporates:
     *  Constant: '<S173>/Constant1'
     *  Constant: '<S173>/Constant2'
     *  Constant: '<S175>/Calib'
     *  DataStoreRead: '<S173>/StatusByte_LostCommEAC'
     */
    rtb_Logical1 = ((((((sint32)HCDR_ac_DW.StatusByte_LostCommEAC) & 1) > 0) &&
                     ((((uint32)HCDR_ac_DW.StatusByte_LostCommEAC) & 64U) == 0U))
                    && (KeHCDR_b_EACPrefFlt_Dial));

#endif

    /* End of S-Function (sfix_bitop): '<S173>/Bitwise Operator2' */

    /* SignalConversion generated from: '<S172>/Variant Source' */
#if (Rte_SysCon_Variant_HCDR_12 && Rte_SysCon_Variant_HCDR_2) || (Rte_SysCon_Variant_HCDR_12 && Rte_SysCon_Variant_HCDR_3)

    /* VariantMerge generated from: '<S172>/Variant Source' incorporates:
     *  Constant: '<S182>/Calib'
     */
    rtb_VariantMerge_For_Variant_Source_Va_b = KeHCDR_e_EAC_DifferentBusOff_Slct;

#elif (!Rte_SysCon_Variant_HCDR_12 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_12 && Rte_SysCon_Variant_HCDR_3)

    /* VariantMerge generated from: '<S172>/Variant Source' incorporates:
     *  Constant: '<S181>/Calib'
     *  SignalConversion generated from: '<S172>/Variant Source'
     */
    rtb_VariantMerge_For_Variant_Source_Va_b = HeHCDR_e_EAC_BusOff_Slct;

#endif

    /* End of SignalConversion generated from: '<S172>/Variant Source' */

    /* MultiPortSwitch: '<S172>/Multiport Switch2' incorporates:
     *  Logic: '<S14>/Logical2'
     *  Logic: '<S14>/Logical4'
     *  VariantMerge generated from: '<S172>/Variant Source'
     */
#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3

    switch (rtb_VariantMerge_For_Variant_Source_Va_b)
    {
      case CeHCDR_e_LIN1_BusOff:
        /* MultiPortSwitch: '<S172>/Multiport Switch2' incorporates:
         *  Constant: '<S178>/Constant1'
         *  Constant: '<S178>/Constant2'
         *  DataStoreRead: '<S178>/StatusByte_LIN1_BusOff'
         *  Logic: '<S178>/Logical Operator'
         *  RelationalOperator: '<S178>/Relational Operator1'
         *  RelationalOperator: '<S178>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S178>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S178>/Bitwise Operator2'
         */
        rtb_MultiportSwitch2 = (((((sint32)HCDR_ac_DW.StatusByte_LIN1_BusOff) &
            1) > 0) && ((((uint32)HCDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) ==
                        0U));
        break;

      case CeHCDR_e_LIN2_BusOff:
        /* MultiPortSwitch: '<S172>/Multiport Switch2' incorporates:
         *  Constant: '<S179>/Constant1'
         *  Constant: '<S179>/Constant2'
         *  DataStoreRead: '<S179>/StatusByte_LIN2_BusOff'
         *  Logic: '<S179>/Logical Operator'
         *  RelationalOperator: '<S179>/Relational Operator1'
         *  RelationalOperator: '<S179>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S179>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S179>/Bitwise Operator2'
         */
        rtb_MultiportSwitch2 = (((((sint32)HCDR_ac_DW.StatusByte_LIN2_BusOff) &
            1) > 0) && ((((uint32)HCDR_ac_DW.StatusByte_LIN2_BusOff) & 64U) ==
                        0U));
        break;

      case CeHCDR_e_LIN3_BusOff:
        /* MultiPortSwitch: '<S172>/Multiport Switch2' incorporates:
         *  Constant: '<S180>/Constant1'
         *  Constant: '<S180>/Constant2'
         *  DataStoreRead: '<S180>/StatusByte_LIN3_BusOff'
         *  Logic: '<S180>/Logical Operator'
         *  RelationalOperator: '<S180>/Relational Operator1'
         *  RelationalOperator: '<S180>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S180>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S180>/Bitwise Operator2'
         */
        rtb_MultiportSwitch2 = (((((sint32)HCDR_ac_DW.StatusByte_LIN3_BusOff) &
            1) > 0) && ((((uint32)HCDR_ac_DW.StatusByte_LIN3_BusOff) & 64U) ==
                        0U));
        break;

      case CeHCDR_e_CANC2_BusOff:
        /* MultiPortSwitch: '<S172>/Multiport Switch2' incorporates:
         *  Constant: '<S177>/Constant1'
         *  Constant: '<S177>/Constant2'
         *  DataStoreRead: '<S177>/StatusByte_HiSpdCANCommBusPerf'
         *  Logic: '<S177>/Logical Operator'
         *  RelationalOperator: '<S177>/Relational Operator1'
         *  RelationalOperator: '<S177>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S177>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S177>/Bitwise Operator2'
         */
        rtb_MultiportSwitch2 = (((((sint32)
            HCDR_ac_DW.StatusByte_HiSpdCANCommBusPerf) & 1) > 0) && ((((uint32)
            HCDR_ac_DW.StatusByte_HiSpdCANCommBusPerf) & 64U) == 0U));
        break;

      default:
        /* MultiPortSwitch: '<S172>/Multiport Switch2' incorporates:
         *  Constant: '<S176>/Constant1'
         *  Constant: '<S176>/Constant2'
         *  DataStoreRead: '<S176>/StatusByte_CommBusOff'
         *  Logic: '<S176>/Logical Operator'
         *  RelationalOperator: '<S176>/Relational Operator1'
         *  RelationalOperator: '<S176>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S176>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S176>/Bitwise Operator2'
         */
        rtb_MultiportSwitch2 = (((((sint32)HCDR_ac_DW.StatusByte_CommBusOff) & 1)
            > 0) && ((((uint32)HCDR_ac_DW.StatusByte_CommBusOff) & 64U) == 0U));
        break;
    }

    /* Logic: '<S14>/Logical2' incorporates:
     *  Constant: '<S174>/Calib'
     *  VariantMerge generated from: '<S172>/Variant Source'
     */
    rtb_MultiportSwitch2 = (rtb_Logical1 || (rtb_MultiportSwitch2 &&
        (KeHCDR_b_CommBussOff_Dial)));

#endif

    /* End of MultiPortSwitch: '<S172>/Multiport Switch2' */

    /* SignalConversion generated from: '<S4>/DsblDiagFailSafe_AD' incorporates:
     *  SignalConversion generated from: '<S4>/PstCdeClrDiagDsbl_AD'
     * */
#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

    /* VariantMerge generated from: '<S4>/DsblDiagFailSafe_AD' */
    rtb_VeHCDR_b_DsblDiagFailSafe_AD = VeHCDR_b_DsblDiagFailSafe_AD;

    /* VariantMerge generated from: '<S4>/PstCdeClrDiagDsbl_AD' */
    rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD = VeHCDR_b_PstCdeClrDiagDsbl_AD;

#elif !Rte_SysCon_Variant_HCDR_9 || (!Rte_SysCon_Variant_HCDR_2 && !Rte_SysCon_Variant_HCDR_3 && !Rte_SysCon_Variant_HCDR_5 && !Rte_SysCon_Variant_HCDR_6 && !Rte_SysCon_Variant_HCDR_7 && !Rte_SysCon_Variant_HCDR_8)

    /* VariantMerge generated from: '<S4>/DsblDiagFailSafe_AD' incorporates:
     *  SignalConversion generated from: '<S4>/DsblDiagFailSafe_AD'
     */
    rtb_VeHCDR_b_DsblDiagFailSafe_AD = false;

    /* VariantMerge generated from: '<S4>/PstCdeClrDiagDsbl_AD' incorporates:
     *  SignalConversion generated from: '<S4>/PstCdeClrDiagDsbl_AD'
     */
    rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD = false;

#endif

    /* End of SignalConversion generated from: '<S4>/DsblDiagFailSafe_AD' */

    /* Logic: '<S16>/NOT4' incorporates:
     *  Gain: '<S18>/Gain'
     */
#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3

    /* Gain: '<S18>/Gain' */
    VeHCDR_b_ResetCnts = (rtb_VeHCDR_b_DsblDiagFailSafe_AD ||
                          rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD);

#endif

    /* End of Logic: '<S16>/NOT4' */

    /* Gain: '<S19>/Gain' */
#if Rte_SysCon_Variant_HCDR_2

    /* Gain: '<S19>/Gain' */
    VeHCDR_b_ResetFOMs = rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD;

#endif

    /* End of Gain: '<S19>/Gain' */

    /* SignalConversion generated from: '<S4>/PowerMode_AD' */
#if Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9

    /* VariantMerge generated from: '<S4>/PowerMode_AD' incorporates:
     *  Switch: '<S5>/Switch2'
     */
    rtb_VeHCDR_e_PowerMode_AD = VeHCDR_e_PowerMode_AD;

#elif !Rte_SysCon_Variant_HCDR_2 || !Rte_SysCon_Variant_HCDR_9

    /* VariantMerge generated from: '<S4>/PowerMode_AD' incorporates:
     *  SignalConversion generated from: '<S4>/PowerMode_AD'
     */
    rtb_VeHCDR_e_PowerMode_AD = CePMDR_e_PowerMode_Off;

#endif

    /* End of SignalConversion generated from: '<S4>/PowerMode_AD' */

    /* SignalConversion generated from: '<S4>/PropSysActv_AD' */
#if (Rte_SysCon_Variant_HCDR_2 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_7 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

    /* VariantMerge generated from: '<S4>/PropSysActv_AD' */
    rtb_VeHCDR_b_PropSysActv_AD = VeHCDR_b_PropSysActv_AD;

#elif !Rte_SysCon_Variant_HCDR_9 || (!Rte_SysCon_Variant_HCDR_2 && !Rte_SysCon_Variant_HCDR_5 && !Rte_SysCon_Variant_HCDR_6 && !Rte_SysCon_Variant_HCDR_7 && !Rte_SysCon_Variant_HCDR_8)

    /* VariantMerge generated from: '<S4>/PropSysActv_AD' incorporates:
     *  SignalConversion generated from: '<S4>/PropSysActv_AD'
     */
    rtb_VeHCDR_b_PropSysActv_AD = false;

#endif

    /* End of SignalConversion generated from: '<S4>/PropSysActv_AD' */

    /* Logic: '<S7>/Logical6' */
#if Rte_SysCon_Variant_HCDR_2 || Rte_SysCon_Variant_HCDR_3

    /* Logic: '<S7>/Logical6' incorporates:
     *  Constant: '<S15>/Calib'
     */
    rtb_Logical6 = (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag ||
                    (KeHCDR_b_EAC_SysVltg_OV));

#endif

    /* End of Logic: '<S7>/Logical6' */

    /* Logic: '<S4>/Logical Operator' incorporates:
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktHi'
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktLo'
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoBatt'
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoGnd'
     */
#if (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8)

    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktShotoBatt_Value
        (&rtb_LogicalOperator_gvk);
    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktShotoGnd_Value(&rtb_AND_hkn);
    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktLo_Value(&rtb_Comparison1_c);
    (void)Rte_Read_VeBSWR_b_VehDynaCMPwrRlyCktHi_Value(&rtb_AND_ca);

    /* Logic: '<S4>/Logical Operator' incorporates:
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktHi'
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktLo'
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoBatt'
     *  Inport: '<Root>/VeBSWR_b_VehDynaCMPwrRlyCktShotoGnd'
     */
    rtb_LogicalOperator_gvk = (((rtb_AND_ca || rtb_Comparison1_c) || rtb_AND_hkn)
        || rtb_LogicalOperator_gvk);

#endif

    /* End of Logic: '<S4>/Logical Operator' */

    /* SignalConversion generated from: '<S9>/Variant1' incorporates:
     *  Logic: '<S292>/Logical Operator'
     *  RelationalOperator: '<S292>/Relational Operator1'
     *  RelationalOperator: '<S292>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S292>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S292>/Bitwise Operator2'
     *  SignalConversion generated from: '<S9>/Variant2'
     */
#if (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8)

    /* VariantMerge generated from: '<S9>/Variant1' incorporates:
     *  Inport: '<Root>/VeBSWR_b_CoolCtrlVlv1CktHi'
     */
    (void)Rte_Read_VeBSWR_b_CoolCtrlVlv1CktHi_Value
        (&rtb_VariantMerge_For_Variant_Source_Vari);

    /* VariantMerge generated from: '<S9>/Variant2' incorporates:
     *  Inport: '<Root>/VeBSWR_b_AC_RefrigPresSnsrALo'
     */
    (void)Rte_Read_VeBSWR_b_AC_RefrigPresSnsrALo_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_l);

#elif (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8)

    /* VariantMerge generated from: '<S9>/Variant1' incorporates:
     *  Constant: '<S292>/Constant1'
     *  Constant: '<S292>/Constant2'
     *  DataStoreRead: '<S292>/StatusByte_CoolCtrlVlv1CktHi'
     *  Logic: '<S292>/Logical Operator'
     *  RelationalOperator: '<S292>/Relational Operator1'
     *  RelationalOperator: '<S292>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S292>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S292>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_Vari = (((((sint32)
        HCDR_ac_DW.StatusByte_CoolCtrlVlv1CktHi) & 1) > 0) && ((((uint32)
        HCDR_ac_DW.StatusByte_CoolCtrlVlv1CktHi) & 64U) == 0U));

#endif

    /* End of SignalConversion generated from: '<S9>/Variant1' */

    /* SignalConversion generated from: '<S9>/Variant3' incorporates:
     *  Logic: '<S285>/Logical Operator'
     *  Logic: '<S286>/Logical Operator'
     *  RelationalOperator: '<S285>/Relational Operator1'
     *  RelationalOperator: '<S285>/Relational Operator2'
     *  RelationalOperator: '<S286>/Relational Operator1'
     *  RelationalOperator: '<S286>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S285>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S285>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S286>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S286>/Bitwise Operator2'
     */
#if (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8)

    /* VariantMerge generated from: '<S9>/Variant3' incorporates:
     *  Inport: '<Root>/VeBSWR_b_AC_RefrigPresSnsrAHi'
     */
    (void)Rte_Read_VeBSWR_b_AC_RefrigPresSnsrAHi_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_a);

#elif (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8)

    /* VariantMerge generated from: '<S9>/Variant2' incorporates:
     *  Constant: '<S286>/Constant1'
     *  Constant: '<S286>/Constant2'
     *  DataStoreRead: '<S286>/StatusByte_AC_RefrigPresSnsrALo'
     *  Logic: '<S286>/Logical Operator'
     *  RelationalOperator: '<S286>/Relational Operator1'
     *  RelationalOperator: '<S286>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S286>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S286>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_l = (((((sint32)
        HCDR_ac_DW.StatusByte_AC_RefrigPresSnsrALo) & 1) > 0) && ((((uint32)
        HCDR_ac_DW.StatusByte_AC_RefrigPresSnsrALo) & 64U) == 0U));

    /* VariantMerge generated from: '<S9>/Variant3' incorporates:
     *  Constant: '<S285>/Constant1'
     *  Constant: '<S285>/Constant2'
     *  DataStoreRead: '<S285>/StatusByte_AC_RefrigPresSnsrAHi'
     *  Logic: '<S285>/Logical Operator'
     *  RelationalOperator: '<S285>/Relational Operator1'
     *  RelationalOperator: '<S285>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S285>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S285>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a = (((((sint32)
        HCDR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi) & 1) > 0) && ((((uint32)
        HCDR_ac_DW.StatusByte_AC_RefrigPresSnsrAHi) & 64U) == 0U));

#endif

    /* End of SignalConversion generated from: '<S9>/Variant3' */

    /* Outputs for Atomic SubSystem: '<S7>/Comp_EAC_Diagnosis' */
#if Rte_SysCon_Variant_HCDR_2

    /* Outputs for Atomic SubSystem: '<S12>/Comp_EAC_Diagnosis' */
    /* Outputs for Atomic SubSystem: '<S46>/EdgeRising' */
    /* Logic: '<S50>/OR1' incorporates:
     *  UnitDelay: '<S50>/Unit Delay'
     */
    rtb_Logical1 = !HCDR_ac_DW.UnitDelay_DSTATE_cf;

    /* Update for UnitDelay: '<S50>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_cf = rtb_MultiportSwitch2;

    /* End of Outputs for SubSystem: '<S46>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S46>/EdgeRising1' */
    /* Logic: '<S51>/AND' incorporates:
     *  Logic: '<S51>/OR1'
     *  UnitDelay: '<S51>/Unit Delay'
     */
    rtb_AND_hkn = !HCDR_ac_DW.UnitDelay_DSTATE_km;

    /* Update for UnitDelay: '<S51>/Unit Delay' incorporates:
     *  Constant: '<S46>/TRUE Constant1'
     */
    HCDR_ac_DW.UnitDelay_DSTATE_km = true;

    /* End of Outputs for SubSystem: '<S46>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S46>/Counter Reset  Enabled 1' */
    /* Switch: '<S49>/Switch' incorporates:
     *  Constant: '<S52>/Constant'
     *  Constant: '<S53>/Constant'
     *  Constant: '<S54>/Constant'
     *  Logic: '<S46>/Logical1'
     *  Logic: '<S46>/Logical2'
     *  Logic: '<S46>/Logical4'
     *  Logic: '<S50>/AND'
     *  RelationalOperator: '<S46>/Comparison1'
     *  RelationalOperator: '<S46>/Comparison2'
     *  RelationalOperator: '<S46>/Comparison3'
     *  Switch: '<S49>/Switch2'
     *  UnitDelay: '<S46>/Unit Delay'
     */
    if (rtb_AND_hkn || ((((((uint32)rtb_VeHCDR_e_PowerMode_AD) ==
                           CePMDR_e_PowerMode_Acc) || (((uint32)
             rtb_VeHCDR_e_PowerMode_AD) == CePMDR_e_PowerMode_Run)) || (((uint32)
            rtb_VeHCDR_e_PowerMode_AD) == CePMDR_e_PowerMode_Crank)) &&
                        (HCDR_ac_DW.UnitDelay_DSTATE_o2)))
    {
        /* Switch: '<S49>/Switch' incorporates:
         *  Constant: '<S49>/Constant Value2'
         */
        VeHCDR_Cnt_EAC_ComFault = 0U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S46>/EdgeRising' */
        if (rtb_MultiportSwitch2 && rtb_Logical1)
        {
            /* Switch: '<S49>/Switch' incorporates:
             *  Constant: '<S49>/Constant Value1'
             *  Sum: '<S49>/Subtraction'
             *  Switch: '<S49>/Switch2'
             *  UnitDelay: '<S49>/Unit Delay'
             */
            VeHCDR_Cnt_EAC_ComFault = (uint16)(((uint32)VeHCDR_Cnt_EAC_ComFault)
                + 1U);
        }

        /* End of Outputs for SubSystem: '<S46>/EdgeRising' */
    }

    /* End of Switch: '<S49>/Switch' */
    /* End of Outputs for SubSystem: '<S46>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S46>/Comparison5' incorporates:
     *  Constant: '<S55>/Constant'
     *  UnitDelay: '<S46>/Unit Delay'
     */
    HCDR_ac_DW.UnitDelay_DSTATE_o2 = (((uint32)rtb_VeHCDR_e_PowerMode_AD) ==
        CePMDR_e_PowerMode_Off);

    /* Switch: '<S46>/Switch' incorporates:
     *  Constant: '<S56>/Calib'
     *  Constant: '<S57>/Calib'
     *  Logic: '<S46>/Logical5'
     *  RelationalOperator: '<S46>/Comparison4'
     */
    if ((VeHCDR_Cnt_EAC_ComFault > KeHCDR_Cnt_EAC_ComFault_Lim) &&
            (KeHCDR_b_ComFault_Counter_En))
    {
        /* Switch: '<S46>/Switch' incorporates:
         *  Constant: '<S46>/TRUE Constant'
         */
        VeHCDR_b_EAC_ComFault_DIs_Stat = true;
    }
    else
    {
        /* Switch: '<S46>/Switch' incorporates:
         *  Logic: '<S46>/Logical3'
         */
        VeHCDR_b_EAC_ComFault_DIs_Stat = !rtb_MultiportSwitch2;
    }

    /* End of Switch: '<S46>/Switch' */

    /* SignalConversion generated from: '<S48>/Variant Source' */
#if Rte_SysCon_Variant_HCDR_1

    /* Outputs for Atomic SubSystem: '<S48>/M182_EnableCond' */
    /* UnitDelay: '<S134>/Unit Delay' incorporates:
     *  Constant: '<S62>/Calib'
     *  Logic: '<S59>/Logical Operator'
     *  Logic: '<S59>/Logical1'
     *  Logic: '<S59>/Logical2'
     */
    rtb_UnitDelay_bd = ((rtb_TmpSignalConversionAtVeTMIR_b_MainRl ||
                         (KeHCDR_b_RlyCmdEnbl_OV)) && (!rtb_LogicalOperator_gvk));

    /* End of Outputs for SubSystem: '<S48>/M182_EnableCond' */
#else

    /* Outputs for Atomic SubSystem: '<S48>/EnableCond' */
    /* UnitDelay: '<S134>/Unit Delay' incorporates:
     *  Constant: '<S60>/Constant1'
     *  Constant: '<S60>/Constant2'
     *  Constant: '<S61>/Calib'
     *  DataStoreRead: '<S60>/StatusByte_ThrmlRlyCtrlCkt'
     *  Logic: '<S58>/Logical1'
     *  Logic: '<S58>/Logical3'
     *  Logic: '<S58>/Logical9'
     *  Logic: '<S60>/Logical Operator'
     *  RelationalOperator: '<S60>/Relational Operator1'
     *  RelationalOperator: '<S60>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S60>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S60>/Bitwise Operator2'
     *  SignalConversion generated from: '<S48>/Variant Source'
     */
    rtb_UnitDelay_bd = (((((((sint32)HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1)
                           <= 0) || ((((uint32)
        HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) != 0U)) ||
                         (KeHCDR_b_Thrmrly_FltDct_Ovrd)) &&
                        rtb_TmpSignalConversionAtVePMTR_b_ThrmlS);

    /* End of Outputs for SubSystem: '<S48>/EnableCond' */
#endif

    /* End of SignalConversion generated from: '<S48>/Variant Source' */

    /* UnitDelay: '<S134>/Unit Delay' incorporates:
     *  Constant: '<S47>/Calib'
     *  Logic: '<S38>/Logical Operator'
     *  Logic: '<S38>/Logical2'
     *  Logic: '<S38>/Logical6'
     */
    rtb_UnitDelay_bd = (((rtb_UnitDelay_bd && (VeHCDR_b_EAC_ComFault_DIs_Stat)) &&
                         ((!rtb_TmpSignalConversionAtVeTAIR_b_CompSp) ||
                          (KeHCDR_b_CompSpdFdb_FA_En))) && rtb_Logical6);

    /* Product: '<S63>/Product' incorporates:
     *  Constant: '<S76>/Calib'
     *  Constant: '<S78>/Calib'
     */
    rtb_Product = KeHCDR_t_Degraded_Mode * KeHCDR_Cnt_DiagRate;

    /* RelationalOperator: '<S63>/Comparison1' incorporates:
     *  Constant: '<S75>/Constant'
     */
    rtb_AND_hkn = (CeTAIR_e_Degraded == ((uint32)
                    rtb_TmpSignalConversionAtVeTAIR_e_CompSt));

    /* Outputs for Atomic SubSystem: '<S63>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S79>/EdgeRising' */
    /* Logic: '<S80>/AND' incorporates:
     *  Logic: '<S80>/OR1'
     *  UnitDelay: '<S80>/Unit Delay'
     */
    rtb_Logical1 = (rtb_AND_hkn && (!HCDR_ac_DW.UnitDelay_DSTATE_o0));

    /* Update for UnitDelay: '<S80>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_o0 = rtb_AND_hkn;

    /* End of Outputs for SubSystem: '<S79>/EdgeRising' */

    /* Switch: '<S79>/Switch1' incorporates:
     *  Constant: '<S79>/Constant Value'
     *  Constant: '<S79>/Constant Value1'
     *  Logic: '<S79>/OR'
     *  Logic: '<S79>/OR1'
     *  MinMax: '<S79>/Minimum'
     *  Sum: '<S79>/Summation'
     *  UnitDelay: '<S79>/Unit Delay'
     */
    if ((!rtb_AND_hkn) || rtb_Logical1)
    {
        HCDR_ac_DW.UnitDelay_DSTATE_jc = 0.0F;
    }
    else
    {
        HCDR_ac_DW.UnitDelay_DSTATE_jc = fminf(rtb_Product,
            HCDR_ac_DW.UnitDelay_DSTATE_jc + 1.0F);
    }

    /* End of Switch: '<S79>/Switch1' */
    /* End of Outputs for SubSystem: '<S63>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S67>/DeltaOneStep1' */
    /* Sum: '<S86>/Sum//Sub' incorporates:
     *  UnitDelay: '<S86>/Unit Delay'
     */
    rtb_SumSub = rtb_TmpSignalConversionAtVeACCR_n_CompSp -
        HCDR_ac_DW.UnitDelay_DSTATE_dq;

    /* Update for UnitDelay: '<S86>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_dq = rtb_TmpSignalConversionAtVeACCR_n_CompSp;

    /* End of Outputs for SubSystem: '<S67>/DeltaOneStep1' */

    /* Sum: '<S36>/Subtract' incorporates:
     *  Abs: '<S67>/Abs'
     */
    rtb_SumSub = fabsf(rtb_SumSub);

    /* Outputs for Atomic SubSystem: '<S67>/Timer Retrigger Reset Enabled2' */
    /* Switch: '<S93>/Switch1' incorporates:
     *  Constant: '<S87>/Calib'
     *  Constant: '<S89>/Calib'
     *  Constant: '<S91>/Calib'
     *  Constant: '<S93>/Constant Value4'
     *  MinMax: '<S93>/Maximum'
     *  RelationalOperator: '<S67>/Greater Than or Equal 3'
     *  Sum: '<S93>/Subtraction'
     *  UnitDelay: '<S93>/Unit Delay'
     */
    if (rtb_SumSub >= KeHCDR_n_DisblCompPerf_SmallTgtDelta)
    {
        HCDR_ac_DW.UnitDelay_DSTATE_ls = KeHCDR_t_DisblCompPerf_SmallTgtDelta;
    }
    else
    {
        HCDR_ac_DW.UnitDelay_DSTATE_ls = fmaxf(HCDR_ac_DW.UnitDelay_DSTATE_ls -
            HeHCDR_t_MedTEH, 0.0F);
    }

    /* End of Switch: '<S93>/Switch1' */
    /* End of Outputs for SubSystem: '<S67>/Timer Retrigger Reset Enabled2' */

    /* Outputs for Atomic SubSystem: '<S67>/Timer Retrigger Reset Enabled' */
    /* Switch: '<S92>/Switch1' incorporates:
     *  Constant: '<S87>/Calib'
     *  Constant: '<S88>/Calib'
     *  Constant: '<S90>/Calib'
     *  Constant: '<S92>/Constant Value4'
     *  MinMax: '<S92>/Maximum'
     *  RelationalOperator: '<S67>/Greater Than or Equal 4'
     *  Sum: '<S92>/Subtraction'
     *  UnitDelay: '<S92>/Unit Delay'
     */
    if (rtb_SumSub >= KeHCDR_n_DisblCompPerf_HugeTgtDelta)
    {
        HCDR_ac_DW.UnitDelay_DSTATE_jd = KeHCDR_t_DisblCompPerf_HugeTgtDelta;
    }
    else
    {
        HCDR_ac_DW.UnitDelay_DSTATE_jd = fmaxf(HCDR_ac_DW.UnitDelay_DSTATE_jd -
            HeHCDR_t_MedTEH, 0.0F);
    }

    /* End of Switch: '<S92>/Switch1' */
    /* End of Outputs for SubSystem: '<S67>/Timer Retrigger Reset Enabled' */

    /* Inport: '<Root>/VeFSCR_b_RadFan_FltDtct' */
    (void)Rte_Read_VeFSCR_b_RadFan_FltDtct_Value(&tmpRead_37);

    /* Outputs for Atomic SubSystem: '<S67>/Timer Retrigger Reset Enabled2' */
    /* Outputs for Atomic SubSystem: '<S67>/Timer Retrigger Reset Enabled' */
    /* Logic: '<S67>/Logical14' incorporates:
     *  Constant: '<S92>/Constant Value2'
     *  Constant: '<S93>/Constant Value2'
     *  Logic: '<S67>/Logical5'
     *  Logic: '<S67>/Logical6'
     *  RelationalOperator: '<S92>/Greater  Than1'
     *  RelationalOperator: '<S93>/Greater  Than1'
     *  UnitDelay: '<S92>/Unit Delay'
     *  UnitDelay: '<S93>/Unit Delay'
     */
    VeHCDR_b_CompPerf_DeltSpdCmdEnbl = ((HCDR_ac_DW.UnitDelay_DSTATE_ls <= 0.0F)
        && (HCDR_ac_DW.UnitDelay_DSTATE_jd <= 0.0F));

    /* End of Outputs for SubSystem: '<S67>/Timer Retrigger Reset Enabled' */
    /* End of Outputs for SubSystem: '<S67>/Timer Retrigger Reset Enabled2' */

    /* Logic: '<S43>/Logical8' incorporates:
     *  Constant: '<S66>/Constant'
     *  RelationalOperator: '<S43>/Comparison1'
     */
    rtb_Logical1 = (tmpRead_37 && (((uint32)
                      rtb_TmpSignalConversionAtVeTAIR_e_CompSt) ==
                     CeTAIR_e_Inoperative));

    /* Outputs for Atomic SubSystem: '<S64>/Counter Reset  Enabled ' */
    /* Switch: '<S81>/Switch2' incorporates:
     *  Constant: '<S81>/Constant Value2'
     *  Logic: '<S64>/Logical2'
     *  RelationalOperator: '<S64>/Comparison4'
     *  Switch: '<S81>/Switch'
     *  UnitDelay: '<S64>/Unit Delay'
     *  UnitDelay: '<S81>/Unit Delay'
     */
    if (rtb_Logical1 != HCDR_ac_DW.UnitDelay_DSTATE_au)
    {
        HCDR_ac_DW.UnitDelay_DSTATE_m0 = 0U;
    }
    else
    {
        /* UnitDelay: '<S81>/Unit Delay' incorporates:
         *  Constant: '<S81>/Constant Value1'
         *  Sum: '<S81>/Subtraction'
         *  Switch: '<S81>/Switch2'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_m0 = (uint16)(((uint32)
            HCDR_ac_DW.UnitDelay_DSTATE_m0) + 1U);
    }

    /* End of Switch: '<S81>/Switch2' */
    /* End of Outputs for SubSystem: '<S64>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S64>/Comparison1' incorporates:
     *  Constant: '<S64>/Constant Value'
     *  Constant: '<S71>/Calib'
     *  Product: '<S64>/Product'
     *  UnitDelay: '<S81>/Unit Delay'
     */
    rtb_Comparison1_c = (((float32)HCDR_ac_DW.UnitDelay_DSTATE_m0) >=
                         (KeHCDR_t_FanFault_DbncTime * 10.0F));

    /* Outputs for Atomic SubSystem: '<S64>/EdgeRising2' */
    /* Logic: '<S82>/AND' incorporates:
     *  Logic: '<S82>/OR1'
     *  UnitDelay: '<S82>/Unit Delay'
     */
    rtb_AND_ca = (rtb_Comparison1_c && (!HCDR_ac_DW.UnitDelay_DSTATE_pk));

    /* Update for UnitDelay: '<S82>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_pk = rtb_Comparison1_c;

    /* End of Outputs for SubSystem: '<S64>/EdgeRising2' */

    /* Outputs for Enabled SubSystem: '<S64>/Set_Debounce' incorporates:
     *  EnablePort: '<S84>/Enable'
     */
    /* Logic: '<S64>/Logical1' incorporates:
     *  Constant: '<S68>/Calib'
     *  Switch: '<S83>/Switch1'
     *  UnitDelay: '<S64>/Unit Delay2'
     */
    if (rtb_AND_ca || ((!KeHCDR_b_FanFault_DisableDebounceRST) &&
                       (HCDR_ac_DW.UnitDelay2_DSTATE_p)))
    {
        /* SignalConversion generated from: '<S84>/Out1' incorporates:
         *  Constant: '<S84>/Constant Value1'
         */
        HCDR_ac_B.OutportBufferForOut1 = false;

        /* Gain: '<S85>/Gain' */
        VeHCDR_b_FanFault = rtb_Logical1;
    }

    /* End of Logic: '<S64>/Logical1' */
    /* End of Outputs for SubSystem: '<S64>/Set_Debounce' */

    /* Outputs for Atomic SubSystem: '<S43>/EdgeRising' */
    /* Logic: '<S65>/OR1' incorporates:
     *  UnitDelay: '<S65>/Unit Delay'
     */
    rtb_Comparison1_c = !HCDR_ac_DW.UnitDelay_DSTATE_jg;

    /* Update for UnitDelay: '<S65>/Unit Delay' incorporates:
     *  Constant: '<S43>/TRUE Constant'
     */
    HCDR_ac_DW.UnitDelay_DSTATE_jg = true;

    /* Outputs for Atomic SubSystem: '<S43>/Signal Latch On With Reset' */
    /* Logic: '<S72>/OR1' incorporates:
     *  Logic: '<S65>/AND'
     *  Logic: '<S72>/OR'
     *  UnitDelay: '<S72>/Unit Delay'
     */
    HCDR_ac_DW.UnitDelay_DSTATE_lj = ((VeHCDR_b_FanFault) ||
        ((!rtb_Comparison1_c) && (HCDR_ac_DW.UnitDelay_DSTATE_lj)));

    /* End of Outputs for SubSystem: '<S43>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S43>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S63>/Turn On Delay Sample1' */
    /* Logic: '<S35>/Logical Operator' incorporates:
     *  Constant: '<S69>/Calib'
     *  Constant: '<S70>/Calib'
     *  Constant: '<S73>/Constant'
     *  Constant: '<S74>/Constant'
     *  Constant: '<S77>/Calib'
     *  Logic: '<S43>/Logical Operator'
     *  Logic: '<S43>/Logical4'
     *  Logic: '<S43>/Logical5'
     *  Logic: '<S43>/Logical7'
     *  Logic: '<S63>/Logical1'
     *  Logic: '<S63>/Logical5'
     *  Logic: '<S79>/AND'
     *  RelationalOperator: '<S43>/Comparison2'
     *  RelationalOperator: '<S63>/Comparison4'
     *  RelationalOperator: '<S63>/Comparison5'
     *  RelationalOperator: '<S79>/Greater  Than'
     *  UnitDelay: '<S79>/Unit Delay'
     */
    VeHCDR_b_EACPref_BDEnbl_app2 = (rtb_UnitDelay_bd &&
        (((((!rtb_TmpSignalConversionAtVeTAIR_b_HghRfr) && (((CeTAIR_e_NormalOp ==
        ((uint32)rtb_TmpSignalConversionAtVeTAIR_e_CompSt)) || (((uint32)
        rtb_TmpSignalConversionAtVeTAIR_e_CompSt) == CeTAIR_e_Inoperative)) ||
        ((rtb_AND_hkn && (HCDR_ac_DW.UnitDelay_DSTATE_jc >= rtb_Product)) &&
         (KeHCDR_b_Degraded_Mode_En)))) && (VeHCDR_b_CompPerf_DeltSpdCmdEnbl)) &&
          (rtb_TmpSignalConversionAtVeACCR_n_CompSp > KeHCDR_n_EAC_RPM_Lim)) &&
         ((!HCDR_ac_DW.UnitDelay_DSTATE_lj) || (KeHCDR_b_RadFanFlt_Ovrd))));

    /* End of Outputs for SubSystem: '<S63>/Turn On Delay Sample1' */

    /* Logic: '<S35>/Logical Operator1' */
    rtb_TmpSignalConversionAtVeTAIR_b_CompSp = (rtb_UnitDelay_bd &&
        rtb_TmpSignalConversionAtVeTAIR_b_CompSp);

    /* Outputs for Atomic SubSystem: '<S35>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S45>/EdgeRising' */
    /* Logic: '<S95>/AND' incorporates:
     *  Logic: '<S95>/OR1'
     *  UnitDelay: '<S95>/Unit Delay'
     */
    rtb_AND_hkn = (rtb_TmpSignalConversionAtVeTAIR_b_CompSp &&
                   (!HCDR_ac_DW.UnitDelay_DSTATE_b3));

    /* Update for UnitDelay: '<S95>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_b3 = rtb_TmpSignalConversionAtVeTAIR_b_CompSp;

    /* End of Outputs for SubSystem: '<S45>/EdgeRising' */

    /* Switch: '<S45>/Switch1' incorporates:
     *  Constant: '<S39>/Calib'
     *  Constant: '<S42>/Calib'
     *  Constant: '<S45>/Constant Value1'
     *  Logic: '<S45>/OR'
     *  Logic: '<S45>/OR1'
     *  MinMax: '<S45>/Minimum'
     *  Sum: '<S45>/Summation'
     *  UnitDelay: '<S45>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeTAIR_b_CompSp) || rtb_AND_hkn)
    {
        HCDR_ac_DW.UnitDelay_DSTATE_jv = 0.0F;
    }
    else
    {
        HCDR_ac_DW.UnitDelay_DSTATE_jv = fminf(KeHCDR_t_CompSpdFdbFA_DbncTime,
            HeHCDR_t_MedTEH + HCDR_ac_DW.UnitDelay_DSTATE_jv);
    }

    /* End of Switch: '<S45>/Switch1' */

    /* Logic: '<S45>/AND' incorporates:
     *  Constant: '<S42>/Calib'
     *  RelationalOperator: '<S45>/Greater  Than'
     *  UnitDelay: '<S45>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTAIR_b_CompSp =
        (rtb_TmpSignalConversionAtVeTAIR_b_CompSp &&
         (HCDR_ac_DW.UnitDelay_DSTATE_jv >= KeHCDR_t_CompSpdFdbFA_DbncTime));

    /* End of Outputs for SubSystem: '<S35>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S35>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S44>/EdgeRising' */
    /* UnitDelay: '<S134>/Unit Delay' incorporates:
     *  UnitDelay: '<S94>/Unit Delay'
     */
    rtb_UnitDelay_bd = HCDR_ac_DW.UnitDelay_DSTATE_fi;

    /* Update for UnitDelay: '<S94>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_fi = VeHCDR_b_EACPref_BDEnbl_app2;

    /* Switch: '<S44>/Switch1' incorporates:
     *  Constant: '<S40>/Calib'
     *  Constant: '<S44>/Constant Value'
     *  Constant: '<S44>/Constant Value1'
     *  Logic: '<S44>/OR'
     *  Logic: '<S44>/OR1'
     *  Logic: '<S94>/AND'
     *  Logic: '<S94>/OR1'
     *  MinMax: '<S44>/Minimum'
     *  Sum: '<S44>/Summation'
     *  UnitDelay: '<S44>/Unit Delay'
     */
    if ((!VeHCDR_b_EACPref_BDEnbl_app2) || ((VeHCDR_b_EACPref_BDEnbl_app2) &&
            (!rtb_UnitDelay_bd)))
    {
        HCDR_ac_DW.UnitDelay_DSTATE_oo = 0U;
    }
    else if (KeHCDR_Cnt_EACPref_BDEnbl_app2 < ((uint16)(((uint32)
                HCDR_ac_DW.UnitDelay_DSTATE_oo) + 1U)))
    {
        /* MinMax: '<S44>/Minimum' incorporates:
         *  Constant: '<S40>/Calib'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_oo = KeHCDR_Cnt_EACPref_BDEnbl_app2;
    }
    else
    {
        /* MinMax: '<S44>/Minimum' incorporates:
         *  Constant: '<S44>/Constant Value'
         *  Sum: '<S44>/Summation'
         *  UnitDelay: '<S44>/Unit Delay'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_oo = (uint16)(((uint32)
            HCDR_ac_DW.UnitDelay_DSTATE_oo) + 1U);
    }

    /* End of Switch: '<S44>/Switch1' */
    /* End of Outputs for SubSystem: '<S44>/EdgeRising' */

    /* Logic: '<S35>/Logical Operator4' incorporates:
     *  Constant: '<S40>/Calib'
     *  Constant: '<S41>/Calib'
     *  Logic: '<S35>/Logical Operator2'
     *  Logic: '<S44>/AND'
     *  RelationalOperator: '<S44>/Greater  Than'
     *  UnitDelay: '<S44>/Unit Delay'
     */
    VeHCDR_b_EAC_DiagEnbl = (((VeHCDR_b_EACPref_BDEnbl_app2) &&
        (HCDR_ac_DW.UnitDelay_DSTATE_oo >= KeHCDR_Cnt_EACPref_BDEnbl_app2)) ||
        ((KeHCDR_b_EAC_PerfCndsOV_En) &&
         rtb_TmpSignalConversionAtVeTAIR_b_CompSp));

    /* End of Outputs for SubSystem: '<S35>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S31>/EAC_Check_Flt' */
    /* Abs: '<S36>/Abs' incorporates:
     *  Sum: '<S36>/Subtract'
     */
    VeHCDR_n_EAC_ActualRequest_Diff_RPM = fabsf
        (rtb_TmpSignalConversionAtVeTAIR_n_CompSp -
         rtb_TmpSignalConversionAtVeACCR_n_CompSp);

    /* Logic: '<S36>/Logical Operator1' incorporates:
     *  Constant: '<S96>/Calib'
     *  Constant: '<S97>/Calib'
     *  Logic: '<S36>/Logical Operator'
     *  RelationalOperator: '<S36>/Comparison2'
     */
    VeHCDR_b_EAC_FltSymptom = ((VeHCDR_n_EAC_ActualRequest_Diff_RPM >
        KeHCDR_n_EAC_RPM_DelChng) || (rtb_TmpSignalConversionAtVeTAIR_b_CompSp &&
        (KeHCDR_b_CompSpdFdbFA_FltCndsEn)));

    /* End of Outputs for SubSystem: '<S31>/EAC_Check_Flt' */

    /* Outputs for Atomic SubSystem: '<S31>/EAC_CompDiagStatus' */
    /* RelationalOperator: '<S104>/Relational Operator3' incorporates:
     *  Constant: '<S104>/Constant3'
     *  DataStoreRead: '<S98>/StatusByte_EACPerf'
     *  S-Function (sfix_bitop): '<S104>/Bitwise Operator2'
     */
    rtb_AND_hkn = ((((uint32)HCDR_ac_DW.StatusByte_EACPerf) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S104>/EdgeFalling1' */
    /* Logic: '<S104>/Logical Operator' incorporates:
     *  Logic: '<S106>/OR1'
     */
    rtb_Comparison1_c = !rtb_AND_hkn;

    /* End of Outputs for SubSystem: '<S104>/EdgeFalling1' */

    /* Logic: '<S104>/Logical1' incorporates:
     *  Constant: '<S101>/Calib'
     *  Constant: '<S103>/Calib'
     *  Constant: '<S104>/Constant1'
     *  DataStoreRead: '<S98>/StatusByte_EACPerf'
     *  Logic: '<S104>/Logical Operator'
     *  Logic: '<S104>/Logical10'
     *  Logic: '<S104>/Logical12'
     *  Logic: '<S37>/AND1'
     *  RelationalOperator: '<S104>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S104>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeTAIR_b_CompSp = (((VeHCDR_b_EAC_DiagEnbl) &&
        (KeHCDR_b_EACPref_XYEnbl)) && ((!KeHCDR_b_EACPerf_LtchEnbl) ||
        (((((uint32)HCDR_ac_DW.StatusByte_EACPerf) & 1U) == 0U) ||
         rtb_Comparison1_c)));

    /* Outputs for Atomic SubSystem: '<S104>/EdgeFalling1' */
    /* Logic: '<S106>/AND' incorporates:
     *  UnitDelay: '<S106>/Unit Delay'
     */
    rtb_Comparison1_c = (rtb_Comparison1_c && (HCDR_ac_DW.UnitDelay_DSTATE_p0));

    /* Update for UnitDelay: '<S106>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_p0 = rtb_AND_hkn;

    /* End of Outputs for SubSystem: '<S104>/EdgeFalling1' */

    /* Logic: '<S104>/Logical5' */
    rtb_AND_hkn = ((VeHCDR_b_ResetCnts) || rtb_Comparison1_c);

    /* Outputs for Atomic SubSystem: '<S105>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S105>/Counter Reset  Enabled ' */
    /* Switch: '<S112>/Switch1' incorporates:
     *  Constant: '<S102>/Calib'
     *  Logic: '<S105>/Fail Counter Reset'
     *  Logic: '<S105>/NOT6'
     *  Logic: '<S37>/AND2'
     *  Switch: '<S112>/Switch2'
     *  Switch: '<S113>/Switch1'
     *  UnitDelay: '<S105>/Unit Delay'
     *  UnitDelay: '<S105>/Unit Delay1'
     */
    if ((rtb_AND_hkn || (HCDR_ac_DW.UnitDelay_DSTATE_lk)) ||
            (HCDR_ac_DW.UnitDelay1_DSTATE_ee))
    {
        /* Switch: '<S112>/Switch1' incorporates:
         *  Constant: '<S112>/Constant Value2'
         */
        VeHCDR_Cnt_EACPref_FailCnt = 0U;

        /* Switch: '<S113>/Switch1' incorporates:
         *  Constant: '<S113>/Constant Value2'
         */
        VeHCDR_Cnt_EACPref_SmpCnt = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeTAIR_b_CompSp &&
                ((VeHCDR_b_EAC_FltSymptom) && (KeHCDR_b_EACPref_Flt)))
        {
            /* Switch: '<S112>/Switch1' incorporates:
             *  Constant: '<S112>/Constant Value1'
             *  Sum: '<S112>/Subtraction'
             *  Switch: '<S112>/Switch2'
             *  UnitDelay: '<S112>/Unit Delay'
             */
            VeHCDR_Cnt_EACPref_FailCnt = (uint16)(((uint32)
                VeHCDR_Cnt_EACPref_FailCnt) + 1U);
        }

        /* Switch: '<S113>/Switch2' */
        if (rtb_TmpSignalConversionAtVeTAIR_b_CompSp)
        {
            /* Switch: '<S113>/Switch1' incorporates:
             *  Constant: '<S113>/Constant Value1'
             *  Sum: '<S113>/Subtraction'
             *  Switch: '<S113>/Switch2'
             *  UnitDelay: '<S113>/Unit Delay'
             */
            VeHCDR_Cnt_EACPref_SmpCnt = (uint16)(((uint32)
                VeHCDR_Cnt_EACPref_SmpCnt) + 1U);
        }

        /* End of Switch: '<S113>/Switch2' */
    }

    /* End of Switch: '<S112>/Switch1' */
    /* End of Outputs for SubSystem: '<S105>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S105>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S105>/Greater Than or Equal ' incorporates:
     *  Constant: '<S99>/Calib'
     */
    HCDR_ac_DW.UnitDelay1_DSTATE_ee = (VeHCDR_Cnt_EACPref_FailCnt >=
        KeHCDR_Cnt_EACPref_FailCnt);

    /* Logic: '<S105>/NOT5' incorporates:
     *  Constant: '<S100>/Calib'
     *  Logic: '<S105>/NOT3'
     *  RelationalOperator: '<S105>/Less Than  or Equal'
     */
    HCDR_ac_DW.UnitDelay_DSTATE_lk = ((VeHCDR_Cnt_EACPref_SmpCnt >=
        KeHCDR_Cnt_EACPref_SmpCnt) && (!HCDR_ac_DW.UnitDelay1_DSTATE_ee));

    /* Switch: '<S118>/Switch1' incorporates:
     *  Constant: '<S111>/Constant Value'
     *  DataStoreWrite: '<S37>/Data Store Write3'
     *  Switch: '<S117>/Switch1'
     */
    if (VeHCDR_b_ResetFOMs)
    {
        HCDR_ac_DW.NeHCDR_Cnt_EACPref_MFOP = 0U;
    }
    else
    {
        if (HCDR_ac_DW.UnitDelay_DSTATE_lk)
        {
            /* MinMax: '<S111>/Minimum2' incorporates:
             *  DataStoreRead: '<S37>/Data Store Read1'
             *  Switch: '<S117>/Switch1'
             */
            if (VeHCDR_Cnt_EACPref_FailCnt > HCDR_ac_DW.NeHCDR_Cnt_EACPref_MFOP)
            {
                /* DataStoreWrite: '<S37>/Data Store Write3' incorporates:
                 *  Switch: '<S117>/Switch1'
                 */
                HCDR_ac_DW.NeHCDR_Cnt_EACPref_MFOP = VeHCDR_Cnt_EACPref_FailCnt;
            }

            /* End of MinMax: '<S111>/Minimum2' */
        }
    }

    /* End of Switch: '<S118>/Switch1' */
    /* End of Outputs for SubSystem: '<S31>/EAC_CompDiagStatus' */

    /* Inport: '<Root>/VeACCR_e_AC_CompEnb' */
    (void)Rte_Read_VeACCR_e_AC_CompEnb_Value(&tmpRead_34);

    /* Outputs for Atomic SubSystem: '<S31>/EAC_CompDiagStatus' */
    /* Outputs for Enabled SubSystem: '<S104>/Fail' */
    HCDR_ac_Fail(HCDR_ac_DW.UnitDelay1_DSTATE_ee,
                 &HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_o);

    /* End of Outputs for SubSystem: '<S104>/Fail' */

    /* Outputs for Enabled SubSystem: '<S104>/Init' */
    HCDR_ac_Init_p(rtb_AND_hkn,
                   &HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_o);

    /* End of Outputs for SubSystem: '<S104>/Init' */

    /* Outputs for Enabled SubSystem: '<S104>/Pass' */
    HCDR_ac_Pass(HCDR_ac_DW.UnitDelay_DSTATE_lk,
                 &HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_o);

    /* End of Outputs for SubSystem: '<S104>/Pass' */

    /* VariantMerge generated from: '<S12>/EACPref_FltDtct' incorporates:
     *  Constant: '<S107>/Constant'
     *  RelationalOperator: '<S104>/Relational Operator'
     *  VariantMerge generated from: '<S12>/VeHCDR_e_FaultSts_EACPerf'
     */
    HCDR_ac_B.VariantMergeForOutportEACPref_FltDtct = (((uint32)
        HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_o) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S31>/EAC_CompDiagStatus' */

    /* Logic: '<S32>/Logical Operator' incorporates:
     *  Constant: '<S119>/Constant'
     *  Constant: '<S120>/Calib'
     *  Inport: '<Root>/VeACCR_e_AC_CompEnb'
     *  RelationalOperator: '<S32>/Relational Operator'
     *  RelationalOperator: '<S32>/Relational Operator1'
     */
    VeHCDR_b_IUMPR_MinCondMet_EnblChck = ((((uint32)tmpRead_34) ==
        CeACCR_e_ACComp_Enable) && (rtb_TmpSignalConversionAtVeACCR_n_CompSp >=
        KeHCDR_n_IUMPR_MinRPMmet_Cmd));

    /* Logic: '<S33>/Logical Operator10' */
    VeHCDR_b_IUMPR_PSACondMet_EnblTmr = ((VeHCDR_b_IUMPR_MinCondMet_EnblChck) &&
        rtb_VeHCDR_b_PropSysActv_AD);

    /* Outputs for Atomic SubSystem: '<S149>/EdgeRising3' */
    /* Logic: '<S153>/OR1' incorporates:
     *  UnitDelay: '<S153>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTAIR_b_CompSp = !HCDR_ac_DW.UnitDelay_DSTATE_l1;

    /* Update for UnitDelay: '<S153>/Unit Delay' incorporates:
     *  Constant: '<S149>/TRUE Constant5'
     */
    HCDR_ac_DW.UnitDelay_DSTATE_l1 = true;

    /* End of Outputs for SubSystem: '<S149>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S149>/EdgeRising1' */
    /* Logic: '<S152>/OR1' incorporates:
     *  UnitDelay: '<S152>/Unit Delay'
     */
    rtb_AND_hkn = !HCDR_ac_DW.UnitDelay_DSTATE_gh;

    /* Update for UnitDelay: '<S152>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_gh = VeHCDR_b_IUMPR_PSACondMet_EnblTmr;

    /* Outputs for Atomic SubSystem: '<S149>/EdgeRising3' */
    /* Logic: '<S149>/Logical Operator4' incorporates:
     *  Logic: '<S152>/AND'
     *  Logic: '<S153>/AND'
     */
    rtb_TmpSignalConversionAtVeTAIR_b_CompSp =
        (rtb_TmpSignalConversionAtVeTAIR_b_CompSp ||
         ((VeHCDR_b_IUMPR_PSACondMet_EnblTmr) && rtb_AND_hkn));

    /* End of Outputs for SubSystem: '<S149>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S149>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S129>/Timer Retrigger Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S151>/EdgeRising_F2T' */
    /* Logic: '<S154>/OR1' incorporates:
     *  UnitDelay: '<S154>/Unit Delay'
     */
    rtb_AND_hkn = !HCDR_ac_DW.UnitDelay_DSTATE_nq;

    /* Update for UnitDelay: '<S154>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_nq = rtb_TmpSignalConversionAtVeTAIR_b_CompSp;

    /* Switch: '<S151>/Switch1' incorporates:
     *  Constant: '<S123>/Calib'
     *  Logic: '<S154>/AND'
     *  Switch: '<S151>/Switch2'
     *  UnitDelay: '<S151>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeTAIR_b_CompSp && rtb_AND_hkn)
    {
        HCDR_ac_DW.UnitDelay_DSTATE_af = KeHCDR_t_IUMPR_ShortTimer;
    }
    else
    {
        if (VeHCDR_b_IUMPR_PSACondMet_EnblTmr)
        {
            /* UnitDelay: '<S151>/Unit Delay' incorporates:
             *  Constant: '<S150>/Calib'
             *  Constant: '<S151>/Constant Value4'
             *  MinMax: '<S151>/Maximum'
             *  Sum: '<S151>/Subtraction'
             *  Switch: '<S151>/Switch2'
             */
            HCDR_ac_DW.UnitDelay_DSTATE_af = fmaxf
                (HCDR_ac_DW.UnitDelay_DSTATE_af - KeHCDR_t_IUMPR_LoopTime, 0.0F);
        }
    }

    /* End of Switch: '<S151>/Switch1' */
    /* End of Outputs for SubSystem: '<S151>/EdgeRising_F2T' */

    /* Logic: '<S129>/Logical Operator2' incorporates:
     *  Constant: '<S151>/Constant Value2'
     *  Logic: '<S129>/Logical Operator1'
     *  RelationalOperator: '<S151>/Greater  Than1'
     *  UnitDelay: '<S151>/Unit Delay'
     */
    VeHCDR_b_IUMPR_2secCmdOn_1stPass = ((VeHCDR_b_IUMPR_PSACondMet_EnblTmr) &&
        (HCDR_ac_DW.UnitDelay_DSTATE_af <= 0.0F));

    /* End of Outputs for SubSystem: '<S129>/Timer Retrigger Reset Trigger Enabled' */

    /* Outputs for Atomic SubSystem: '<S33>/EdgeFalling' */
    /* Logic: '<S121>/AND' incorporates:
     *  Logic: '<S121>/OR1'
     *  UnitDelay: '<S121>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTAIR_b_CompSp =
        ((!VeHCDR_b_IUMPR_2secCmdOn_1stPass) && (HCDR_ac_DW.UnitDelay_DSTATE_fw));

    /* Update for UnitDelay: '<S121>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_fw = VeHCDR_b_IUMPR_2secCmdOn_1stPass;

    /* End of Outputs for SubSystem: '<S33>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S136>/EdgeRising3' */
    /* Logic: '<S139>/OR1' incorporates:
     *  UnitDelay: '<S139>/Unit Delay'
     */
    rtb_AND_hkn = !HCDR_ac_DW.UnitDelay_DSTATE_nc;

    /* Update for UnitDelay: '<S139>/Unit Delay' incorporates:
     *  Constant: '<S136>/TRUE Constant5'
     */
    HCDR_ac_DW.UnitDelay_DSTATE_nc = true;

    /* End of Outputs for SubSystem: '<S136>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S136>/EdgeRising1' */
    /* Logic: '<S138>/OR1' incorporates:
     *  UnitDelay: '<S138>/Unit Delay'
     */
    rtb_Comparison1_c = !HCDR_ac_DW.UnitDelay_DSTATE_nme;

    /* Update for UnitDelay: '<S138>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_nme = rtb_VeHCDR_b_PropSysActv_AD;

    /* Outputs for Atomic SubSystem: '<S136>/EdgeRising3' */
    /* Logic: '<S136>/Logical Operator4' incorporates:
     *  Logic: '<S138>/AND'
     *  Logic: '<S139>/AND'
     */
    rtb_AND_hkn = (rtb_AND_hkn || (rtb_VeHCDR_b_PropSysActv_AD &&
                    rtb_Comparison1_c));

    /* End of Outputs for SubSystem: '<S136>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S136>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S124>/Timer Retrigger Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S137>/EdgeRising_F2T' */
    /* Logic: '<S140>/OR1' incorporates:
     *  UnitDelay: '<S140>/Unit Delay'
     */
    rtb_Comparison1_c = !HCDR_ac_DW.UnitDelay_DSTATE_hew;

    /* Update for UnitDelay: '<S140>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_hew = rtb_AND_hkn;

    /* Switch: '<S137>/Switch1' incorporates:
     *  Constant: '<S122>/Calib'
     *  Logic: '<S140>/AND'
     *  Switch: '<S137>/Switch2'
     *  UnitDelay: '<S137>/Unit Delay'
     */
    if (rtb_AND_hkn && rtb_Comparison1_c)
    {
        HCDR_ac_DW.UnitDelay_DSTATE_e = KeHCDR_t_IUMPR_LongTimer;
    }
    else
    {
        if (VeHCDR_b_IUMPR_PSACondMet_EnblTmr)
        {
            /* UnitDelay: '<S137>/Unit Delay' incorporates:
             *  Constant: '<S135>/Calib'
             *  Constant: '<S137>/Constant Value4'
             *  MinMax: '<S137>/Maximum'
             *  Sum: '<S137>/Subtraction'
             *  Switch: '<S137>/Switch2'
             */
            HCDR_ac_DW.UnitDelay_DSTATE_e = fmaxf(HCDR_ac_DW.UnitDelay_DSTATE_e
                - KeHCDR_t_IUMPR_LoopTime, 0.0F);
        }
    }

    /* End of Switch: '<S137>/Switch1' */
    /* End of Outputs for SubSystem: '<S137>/EdgeRising_F2T' */

    /* Logic: '<S124>/Logical Operator2' incorporates:
     *  Constant: '<S137>/Constant Value2'
     *  Logic: '<S124>/Logical Operator1'
     *  RelationalOperator: '<S137>/Greater  Than1'
     *  UnitDelay: '<S137>/Unit Delay'
     */
    VeHCDR_b_IUMPR_10secCmdOn = ((VeHCDR_b_IUMPR_PSACondMet_EnblTmr) &&
        (HCDR_ac_DW.UnitDelay_DSTATE_e <= 0.0F));

    /* End of Outputs for SubSystem: '<S124>/Timer Retrigger Reset Trigger Enabled' */

    /* Outputs for Atomic SubSystem: '<S126>/EdgeRising3' */
    /* Logic: '<S144>/AND' incorporates:
     *  Logic: '<S144>/OR1'
     *  UnitDelay: '<S144>/Unit Delay'
     */
    rtb_AND_hkn = !HCDR_ac_DW.UnitDelay_DSTATE_jo;

    /* Update for UnitDelay: '<S144>/Unit Delay' incorporates:
     *  Constant: '<S126>/TRUE Constant5'
     */
    HCDR_ac_DW.UnitDelay_DSTATE_jo = true;

    /* End of Outputs for SubSystem: '<S126>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S126>/EdgeRising1' */
    /* Logic: '<S143>/AND' incorporates:
     *  Logic: '<S143>/OR1'
     *  UnitDelay: '<S143>/Unit Delay'
     */
    rtb_Comparison1_c = (rtb_VeHCDR_b_PropSysActv_AD &&
                         (!HCDR_ac_DW.UnitDelay_DSTATE_jip));

    /* Update for UnitDelay: '<S143>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_jip = rtb_VeHCDR_b_PropSysActv_AD;

    /* End of Outputs for SubSystem: '<S126>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S33>/Signal Latch On With Reset2' */
    /* Logic: '<S133>/OR1' incorporates:
     *  Logic: '<S126>/Logical Operator4'
     *  Logic: '<S133>/NOT'
     *  Logic: '<S133>/OR'
     *  UnitDelay: '<S133>/Unit Delay'
     */
    VeHCDR_b_IUMPR_10secCmdOn_Ltch = ((VeHCDR_b_IUMPR_10secCmdOn) ||
        (((!rtb_AND_hkn) && (!rtb_Comparison1_c)) &&
         (HCDR_ac_DW.UnitDelay_DSTATE_pd)));

    /* Update for UnitDelay: '<S133>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_pd = VeHCDR_b_IUMPR_10secCmdOn_Ltch;

    /* End of Outputs for SubSystem: '<S33>/Signal Latch On With Reset2' */

    /* Outputs for Atomic SubSystem: '<S127>/EdgeRising3' */
    /* Logic: '<S146>/AND' incorporates:
     *  Logic: '<S146>/OR1'
     *  UnitDelay: '<S146>/Unit Delay'
     */
    rtb_AND_hkn = !HCDR_ac_DW.UnitDelay_DSTATE_n0;

    /* Update for UnitDelay: '<S146>/Unit Delay' incorporates:
     *  Constant: '<S127>/TRUE Constant5'
     */
    HCDR_ac_DW.UnitDelay_DSTATE_n0 = true;

    /* End of Outputs for SubSystem: '<S127>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S127>/EdgeRising1' */
    /* Logic: '<S145>/AND' incorporates:
     *  Logic: '<S145>/OR1'
     *  UnitDelay: '<S145>/Unit Delay'
     */
    rtb_Comparison1_c = (rtb_VeHCDR_b_PropSysActv_AD &&
                         (!HCDR_ac_DW.UnitDelay_DSTATE_m0p));

    /* Update for UnitDelay: '<S145>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_m0p = rtb_VeHCDR_b_PropSysActv_AD;

    /* End of Outputs for SubSystem: '<S127>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S33>/Signal Latch On With Reset1' */
    /* Logic: '<S132>/OR1' incorporates:
     *  Logic: '<S127>/Logical Operator4'
     *  Logic: '<S132>/NOT'
     *  Logic: '<S132>/OR'
     *  UnitDelay: '<S132>/Unit Delay'
     */
    VeHCDR_b_IUMPR_2secCmdOn_1stPass_Ltch = ((VeHCDR_b_IUMPR_2secCmdOn_1stPass) ||
        (((!rtb_AND_hkn) && (!rtb_Comparison1_c)) &&
         (HCDR_ac_DW.UnitDelay_DSTATE_le)));

    /* Update for UnitDelay: '<S132>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_le = VeHCDR_b_IUMPR_2secCmdOn_1stPass_Ltch;

    /* End of Outputs for SubSystem: '<S33>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S125>/EdgeRising3' */
    /* Logic: '<S142>/AND' incorporates:
     *  Logic: '<S142>/OR1'
     *  UnitDelay: '<S142>/Unit Delay'
     */
    rtb_AND_hkn = !HCDR_ac_DW.UnitDelay_DSTATE_c4m;

    /* Update for UnitDelay: '<S142>/Unit Delay' incorporates:
     *  Constant: '<S125>/TRUE Constant5'
     */
    HCDR_ac_DW.UnitDelay_DSTATE_c4m = true;

    /* End of Outputs for SubSystem: '<S125>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S125>/EdgeRising1' */
    /* Logic: '<S141>/AND' incorporates:
     *  Logic: '<S141>/OR1'
     *  UnitDelay: '<S141>/Unit Delay'
     */
    rtb_Comparison1_c = (rtb_VeHCDR_b_PropSysActv_AD &&
                         (!HCDR_ac_DW.UnitDelay_DSTATE_ff));

    /* Update for UnitDelay: '<S141>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_ff = rtb_VeHCDR_b_PropSysActv_AD;

    /* End of Outputs for SubSystem: '<S125>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S33>/Signal Latch On With Reset' */
    /* Logic: '<S131>/OR1' incorporates:
     *  Logic: '<S125>/Logical Operator4'
     *  Logic: '<S131>/NOT'
     *  Logic: '<S131>/OR'
     *  UnitDelay: '<S131>/Unit Delay'
     */
    VeHCDR_b_IUMPR_CompDsbldAfter2sec1stPass_Ltch =
        (rtb_TmpSignalConversionAtVeTAIR_b_CompSp || (((!rtb_AND_hkn) &&
           (!rtb_Comparison1_c)) && (HCDR_ac_DW.UnitDelay_DSTATE_fbs)));

    /* Update for UnitDelay: '<S131>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_fbs =
        VeHCDR_b_IUMPR_CompDsbldAfter2sec1stPass_Ltch;

    /* End of Outputs for SubSystem: '<S33>/Signal Latch On With Reset' */

    /* Logic: '<S33>/Logical Operator8' */
    rtb_TmpSignalConversionAtVeTAIR_b_CompSp =
        ((VeHCDR_b_IUMPR_CompDsbldAfter2sec1stPass_Ltch) &&
         (VeHCDR_b_IUMPR_PSACondMet_EnblTmr));

    /* Outputs for Atomic SubSystem: '<S155>/EdgeRising3' */
    /* Logic: '<S159>/OR1' incorporates:
     *  UnitDelay: '<S159>/Unit Delay'
     */
    rtb_AND_hkn = !HCDR_ac_DW.UnitDelay_DSTATE_ja;

    /* Update for UnitDelay: '<S159>/Unit Delay' incorporates:
     *  Constant: '<S155>/TRUE Constant5'
     */
    HCDR_ac_DW.UnitDelay_DSTATE_ja = true;

    /* End of Outputs for SubSystem: '<S155>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S155>/EdgeRising1' */
    /* Logic: '<S158>/OR1' incorporates:
     *  UnitDelay: '<S158>/Unit Delay'
     */
    rtb_Comparison1_c = !HCDR_ac_DW.UnitDelay_DSTATE_nh;

    /* Update for UnitDelay: '<S158>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_nh = rtb_TmpSignalConversionAtVeTAIR_b_CompSp;

    /* Outputs for Atomic SubSystem: '<S155>/EdgeRising3' */
    /* Logic: '<S155>/Logical Operator4' incorporates:
     *  Logic: '<S158>/AND'
     *  Logic: '<S159>/AND'
     */
    rtb_AND_hkn = (rtb_AND_hkn || (rtb_TmpSignalConversionAtVeTAIR_b_CompSp &&
                    rtb_Comparison1_c));

    /* End of Outputs for SubSystem: '<S155>/EdgeRising3' */
    /* End of Outputs for SubSystem: '<S155>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S130>/Timer Retrigger Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S157>/EdgeRising_F2T' */
    /* Logic: '<S160>/OR1' incorporates:
     *  UnitDelay: '<S160>/Unit Delay'
     */
    rtb_Comparison1_c = !HCDR_ac_DW.UnitDelay_DSTATE_dp;

    /* Update for UnitDelay: '<S160>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_dp = rtb_AND_hkn;

    /* Switch: '<S157>/Switch1' incorporates:
     *  Constant: '<S123>/Calib'
     *  Logic: '<S160>/AND'
     *  Switch: '<S157>/Switch2'
     *  UnitDelay: '<S157>/Unit Delay'
     */
    if (rtb_AND_hkn && rtb_Comparison1_c)
    {
        HCDR_ac_DW.UnitDelay_DSTATE_j = KeHCDR_t_IUMPR_ShortTimer;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeTAIR_b_CompSp)
        {
            /* UnitDelay: '<S157>/Unit Delay' incorporates:
             *  Constant: '<S156>/Calib'
             *  Constant: '<S157>/Constant Value4'
             *  MinMax: '<S157>/Maximum'
             *  Sum: '<S157>/Subtraction'
             *  Switch: '<S157>/Switch2'
             */
            HCDR_ac_DW.UnitDelay_DSTATE_j = fmaxf(HCDR_ac_DW.UnitDelay_DSTATE_j
                - KeHCDR_t_IUMPR_LoopTime, 0.0F);
        }
    }

    /* End of Switch: '<S157>/Switch1' */
    /* End of Outputs for SubSystem: '<S157>/EdgeRising_F2T' */

    /* Logic: '<S130>/Logical Operator2' incorporates:
     *  Constant: '<S157>/Constant Value2'
     *  Logic: '<S130>/Logical Operator1'
     *  RelationalOperator: '<S157>/Greater  Than1'
     *  UnitDelay: '<S157>/Unit Delay'
     */
    VeHCDR_b_IUMPR_2secCmdOn_2ndPass = (rtb_TmpSignalConversionAtVeTAIR_b_CompSp
        && (HCDR_ac_DW.UnitDelay_DSTATE_j <= 0.0F));

    /* End of Outputs for SubSystem: '<S130>/Timer Retrigger Reset Trigger Enabled' */

    /* Outputs for Atomic SubSystem: '<S128>/EdgeRising3' */
    /* Logic: '<S148>/AND' incorporates:
     *  Logic: '<S148>/OR1'
     *  UnitDelay: '<S148>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTAIR_b_CompSp = !HCDR_ac_DW.UnitDelay_DSTATE_k2;

    /* Update for UnitDelay: '<S148>/Unit Delay' incorporates:
     *  Constant: '<S128>/TRUE Constant5'
     */
    HCDR_ac_DW.UnitDelay_DSTATE_k2 = true;

    /* End of Outputs for SubSystem: '<S128>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S128>/EdgeRising1' */
    /* Logic: '<S147>/AND' incorporates:
     *  Logic: '<S147>/OR1'
     *  UnitDelay: '<S147>/Unit Delay'
     */
    rtb_AND_hkn = (rtb_VeHCDR_b_PropSysActv_AD &&
                   (!HCDR_ac_DW.UnitDelay_DSTATE_pe));

    /* Update for UnitDelay: '<S147>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_pe = rtb_VeHCDR_b_PropSysActv_AD;

    /* End of Outputs for SubSystem: '<S128>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S33>/Signal Latch On With Reset3' */
    /* Logic: '<S134>/OR1' incorporates:
     *  Logic: '<S128>/Logical Operator4'
     *  Logic: '<S134>/NOT'
     *  Logic: '<S134>/OR'
     *  UnitDelay: '<S134>/Unit Delay'
     */
    VeHCDR_b_IUMPR_2secCmdOn_2ndPass_Ltch = ((VeHCDR_b_IUMPR_2secCmdOn_2ndPass) ||
        (((!rtb_TmpSignalConversionAtVeTAIR_b_CompSp) && (!rtb_AND_hkn)) &&
         (HCDR_ac_DW.UnitDelay_DSTATE_odi)));

    /* Update for UnitDelay: '<S134>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_odi = VeHCDR_b_IUMPR_2secCmdOn_2ndPass_Ltch;

    /* End of Outputs for SubSystem: '<S33>/Signal Latch On With Reset3' */

    /* Logic: '<S33>/Logical Operator' incorporates:
     *  Logic: '<S33>/Logical Operator5'
     */
    VeHCDR_b_IUMPR_DeviceCmdOn_MinCondMet_B4PSA =
        ((VeHCDR_b_IUMPR_10secCmdOn_Ltch) ||
         ((VeHCDR_b_IUMPR_2secCmdOn_1stPass_Ltch) &&
          (VeHCDR_b_IUMPR_2secCmdOn_2ndPass_Ltch)));

    /* VariantMerge generated from: '<S12>/IUMPR_Comp_MinCmdThrshld_Met' incorporates:
     *  Logic: '<S33>/Logical Operator9'
     */
    HCDR_ac_B.VariantMergeForOutportIUMPR_Comp_MinCmdT =
        ((VeHCDR_b_IUMPR_DeviceCmdOn_MinCondMet_B4PSA) &&
         rtb_VeHCDR_b_PropSysActv_AD);

    /* VariantMerge generated from: '<S12>/IUMPR_EACPerf' incorporates:
     *  Constant: '<S161>/Constant1'
     *  Constant: '<S161>/Constant2'
     *  Constant: '<S162>/Constant1'
     *  Constant: '<S162>/Constant2'
     *  Constant: '<S163>/Calib'
     *  Constant: '<S164>/Calib'
     *  Constant: '<S165>/Calib'
     *  Constant: '<S166>/Calib'
     *  Constant: '<S167>/Calib'
     *  Constant: '<S168>/Calib'
     *  Constant: '<S169>/Calib'
     *  Constant: '<S170>/Calib'
     *  DataStoreRead: '<S161>/StatusByte_AC_RefrigPresSnsrAPerf'
     *  DataStoreRead: '<S162>/StatusByte_ThrmlRlyCtrlCkt'
     *  Logic: '<S161>/Logical Operator'
     *  Logic: '<S162>/Logical Operator'
     *  Logic: '<S34>/Logical10'
     *  Logic: '<S34>/Logical11'
     *  Logic: '<S34>/Logical12'
     *  Logic: '<S34>/Logical5'
     *  Logic: '<S34>/Logical6'
     *  Logic: '<S34>/Logical7'
     *  Logic: '<S34>/Logical8'
     *  Logic: '<S34>/Logical9'
     *  RelationalOperator: '<S161>/Relational Operator1'
     *  RelationalOperator: '<S161>/Relational Operator2'
     *  RelationalOperator: '<S162>/Relational Operator1'
     *  RelationalOperator: '<S162>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S161>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S161>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S162>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S162>/Bitwise Operator2'
     */
    HCDR_ac_B.VariantMergeForOutportIUMPR_EACPerf = ((((((((rtb_MultiportSwitch2
        && (KeHCDR_b_IUMPR_EACPerf_CompCommErr_Enbl)) || ((((((sint32)
        HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) > 0) && ((((uint32)
        HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) == 0U)) &&
        (KeHCDR_b_IUMPR_EACPerf_ThrmlRly_Enbl))) ||
        (rtb_VariantMerge_For_Variant_Source_Vari &&
         (KeHCDR_b_IUMPR_EACPerf_ChlrVlvShrtHi_Enbl))) || ((((((sint32)
        HCDR_ac_DW.StatusByte_AC_RefrigPresSnsrAPerf) & 1) > 0) && ((((uint32)
        HCDR_ac_DW.StatusByte_AC_RefrigPresSnsrAPerf) & 64U) == 0U)) &&
        (KeHCDR_b_IUMPR_EACPerf_PressSnsrPerf_Enbl))) ||
        (rtb_VariantMerge_For_Variant_Source_Va_l &&
         (KeHCDR_b_IUMPR_EACPerf_PressSnsrShrtLow_Enbl))) ||
        (rtb_VariantMerge_For_Variant_Source_Va_a &&
         (KeHCDR_b_IUMPR_EACPerf_PressSnsrShrtHi_Enbl))) ||
        (KeHCDR_b_IUMPR_EACPerf_Ovrrd)) && (KeHCDR_b_IUMPR_EACPerf_Enbl));

    /* Update for UnitDelay: '<S64>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_au = rtb_Logical1;

    /* Update for UnitDelay: '<S64>/Unit Delay2' */
    HCDR_ac_DW.UnitDelay2_DSTATE_p = HCDR_ac_B.OutportBufferForOut1;

    /* End of Outputs for SubSystem: '<S12>/Comp_EAC_Diagnosis' */
#else

    /* Outputs for Atomic SubSystem: '<S12>/Comp_EAC_Init' */
    /* VariantMerge generated from: '<S12>/EACPref_FltDtct' incorporates:
     *  Constant: '<S30>/Constant'
     */
    HCDR_ac_B.VariantMergeForOutportEACPref_FltDtct = false;

    /* VariantMerge generated from: '<S12>/IUMPR_EACPerf' incorporates:
     *  Constant: '<S30>/Constant1'
     */
    HCDR_ac_B.VariantMergeForOutportIUMPR_EACPerf = false;

    /* VariantMerge generated from: '<S12>/IUMPR_Comp_MinCmdThrshld_Met' incorporates:
     *  Constant: '<S30>/Constant2'
     */
    HCDR_ac_B.VariantMergeForOutportIUMPR_Comp_MinCmdT = false;

    /* VariantMerge generated from: '<S12>/VeHCDR_e_FaultSts_EACPerf' incorporates:
     *  Constant: '<S171>/Constant'
     */
    HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_o = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S12>/Comp_EAC_Init' */
#endif

    /* End of Outputs for SubSystem: '<S7>/Comp_EAC_Diagnosis' */

    /* SignalConversion generated from: '<S4>/RealTimeClock_AD' */
#if Rte_SysCon_Variant_HCDR_3 && Rte_SysCon_Variant_HCDR_9

    /* VariantMerge generated from: '<S4>/RealTimeClock_AD' */
    rtb_VeHCDR_t_RealTimeClock_AD = VeHCDR_t_RealTimeClock_AD;

#elif !Rte_SysCon_Variant_HCDR_3 || !Rte_SysCon_Variant_HCDR_9

    /* VariantMerge generated from: '<S4>/RealTimeClock_AD' incorporates:
     *  SignalConversion generated from: '<S4>/RealTimeClock_AD'
     */
    rtb_VeHCDR_t_RealTimeClock_AD = 0U;

#endif

    /* End of SignalConversion generated from: '<S4>/RealTimeClock_AD' */

    /* Outputs for Atomic SubSystem: '<S7>/PressSnsr_Diagnosis' */
#if Rte_SysCon_Variant_HCDR_3

    /* Outputs for Atomic SubSystem: '<S17>/PressSnsr_Diagnosis' */
    /* RelationalOperator: '<S186>/Comparison1' incorporates:
     *  Constant: '<S192>/Constant'
     *  SignalConversion generated from: '<S1>/VeTAIR_e_CompStat'
     */
    VeHCDR_b_CompStat_NormalOp = (((uint32)
        rtb_TmpSignalConversionAtVeTAIR_e_CompSt) == CeTAIR_e_NormalOp);

    /* RelationalOperator: '<S186>/Comparison2' incorporates:
     *  Constant: '<S195>/Calib'
     */
    VeHCDR_b_CompSpdFdb_ON = (rtb_TmpSignalConversionAtVeTAIR_n_CompSp >
        KeHCDR_n_EAC_CompSpdFdb_ON);

    /* RelationalOperator: '<S186>/Comparison3' incorporates:
     *  Constant: '<S194>/Calib'
     */
    VeHCDR_b_CompSpdFdb_ON_Check = (rtb_TmpSignalConversionAtVeTAIR_n_CompSp >
        KeHCDR_n_EAC_CompOn_RPM);

    /* Logic: '<S197>/Logical6' incorporates:
     *  SignalConversion generated from: '<S197>/Variant Source'
     */
#if Rte_SysCon_Variant_HCDR_1

    /* VariantMerge generated from: '<S197>/Variant Source' incorporates:
     *  Constant: '<S247>/Calib'
     */
    rtb_VariantMerge_For_Variant_Source_V_ae =
        (rtb_TmpSignalConversionAtVeTMIR_b_MainRl || (KeHCDR_b_RlyCmdEnbl_OV));

#else

    /* VariantMerge generated from: '<S197>/Variant Source' incorporates:
     *  SignalConversion generated from: '<S197>/Variant Source'
     */
    rtb_VariantMerge_For_Variant_Source_V_ae =
        rtb_TmpSignalConversionAtVePMTR_b_ThrmlS;

#endif

    /* End of Logic: '<S197>/Logical6' */

    /* Logic: '<S190>/Logical5' incorporates:
     *  Constant: '<S231>/Calib'
     */
    VeHCDR_b_ACComp_Defrost_Mode_EnApp1 = KeHCDR_b_ACComp_Defrost_Mode_EnApp1;

    /* Outputs for Atomic SubSystem: '<S191>/EdgeRising1' */
    /* Logic: '<S236>/AND' incorporates:
     *  Logic: '<S236>/OR1'
     *  UnitDelay: '<S191>/Unit Delay2'
     *  UnitDelay: '<S236>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMTR_b_ThrmlS = ((VeHCDR_b_ACComp_RPM_Chg_Chk) &&
        (!HCDR_ac_DW.UnitDelay_DSTATE_ob));

    /* Update for UnitDelay: '<S236>/Unit Delay' incorporates:
     *  UnitDelay: '<S191>/Unit Delay2'
     */
    HCDR_ac_DW.UnitDelay_DSTATE_ob = VeHCDR_b_ACComp_RPM_Chg_Chk;

    /* End of Outputs for SubSystem: '<S191>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S191>/Timer Retrigger Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S242>/EdgeRising' */
    /* Logic: '<S245>/OR1' incorporates:
     *  UnitDelay: '<S245>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_Vari = !HCDR_ac_DW.UnitDelay_DSTATE_g0;

    /* Update for UnitDelay: '<S245>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_g0 = rtb_TmpSignalConversionAtVePMTR_b_ThrmlS;

    /* Switch: '<S242>/Switch1' incorporates:
     *  Constant: '<S239>/Calib'
     *  Constant: '<S240>/Calib'
     *  Constant: '<S242>/Constant Value4'
     *  Logic: '<S245>/AND'
     *  MinMax: '<S242>/Maximum'
     *  Sum: '<S242>/Subtraction'
     *  UnitDelay: '<S242>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVePMTR_b_ThrmlS &&
            rtb_VariantMerge_For_Variant_Source_Vari)
    {
        HCDR_ac_DW.UnitDelay_DSTATE_g3 = KeHCDR_t_RPM_ChangChk_Timer;
    }
    else
    {
        HCDR_ac_DW.UnitDelay_DSTATE_g3 = fmaxf(HCDR_ac_DW.UnitDelay_DSTATE_g3 -
            KeHCDR_t_RPM_Check, 0.0F);
    }

    /* End of Switch: '<S242>/Switch1' */
    /* End of Outputs for SubSystem: '<S242>/EdgeRising' */

    /* Logic: '<S191>/Logical1' incorporates:
     *  Constant: '<S242>/Constant Value2'
     *  RelationalOperator: '<S242>/Greater  Than1'
     *  UnitDelay: '<S242>/Unit Delay'
     */
    VeHCDR_b_RPM_ChangChk_Timer_Sts = (HCDR_ac_DW.UnitDelay_DSTATE_g3 <= 0.0F);

    /* End of Outputs for SubSystem: '<S191>/Timer Retrigger Reset Trigger Enabled' */

    /* Logic: '<S191>/Logical2' incorporates:
     *  Logic: '<S191>/Logical4'
     *  UnitDelay: '<S191>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVePMTR_b_ThrmlS = ((!VeHCDR_b_ACComp_RPM_Chg_Ch) &&
        (VeHCDR_b_RPM_ChangChk_Timer_Sts));

    /* Outputs for Atomic SubSystem: '<S191>/EdgeRising2' */
    /* Logic: '<S237>/AND' incorporates:
     *  Logic: '<S237>/OR1'
     *  UnitDelay: '<S237>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_Vari =
        (rtb_TmpSignalConversionAtVePMTR_b_ThrmlS &&
         (!HCDR_ac_DW.UnitDelay_DSTATE_b0));

    /* Update for UnitDelay: '<S237>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_b0 = rtb_TmpSignalConversionAtVePMTR_b_ThrmlS;

    /* End of Outputs for SubSystem: '<S191>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S191>/Timer Retrigger Reset Trigger Enabled1' */
    /* Outputs for Atomic SubSystem: '<S243>/EdgeRising' */
    /* Logic: '<S246>/OR1' incorporates:
     *  UnitDelay: '<S246>/Unit Delay'
     */
    rtb_Logical1 = !HCDR_ac_DW.UnitDelay_DSTATE_ga;

    /* Update for UnitDelay: '<S246>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_ga = rtb_VariantMerge_For_Variant_Source_Vari;

    /* Switch: '<S243>/Switch1' incorporates:
     *  Constant: '<S241>/Calib'
     *  Logic: '<S246>/AND'
     *  Switch: '<S243>/Switch2'
     *  UnitDelay: '<S243>/Unit Delay'
     */
    if (rtb_VariantMerge_For_Variant_Source_Vari && rtb_Logical1)
    {
        HCDR_ac_DW.UnitDelay_DSTATE_d = KeHCDR_t_RPM_NotChang_DisTmr;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVePMTR_b_ThrmlS)
        {
            /* UnitDelay: '<S243>/Unit Delay' incorporates:
             *  Constant: '<S240>/Calib'
             *  Constant: '<S243>/Constant Value4'
             *  MinMax: '<S243>/Maximum'
             *  Sum: '<S243>/Subtraction'
             *  Switch: '<S243>/Switch2'
             */
            HCDR_ac_DW.UnitDelay_DSTATE_d = fmaxf(HCDR_ac_DW.UnitDelay_DSTATE_d
                - KeHCDR_t_RPM_Check, 0.0F);
        }
    }

    /* End of Switch: '<S243>/Switch1' */
    /* End of Outputs for SubSystem: '<S243>/EdgeRising' */

    /* Logic: '<S191>/Logical3' incorporates:
     *  Constant: '<S243>/Constant Value2'
     *  RelationalOperator: '<S243>/Greater  Than1'
     *  UnitDelay: '<S243>/Unit Delay'
     */
    VeHCDR_b_RPM_NotChang_DisTmr_Sts = (HCDR_ac_DW.UnitDelay_DSTATE_d <= 0.0F);

    /* End of Outputs for SubSystem: '<S191>/Timer Retrigger Reset Trigger Enabled1' */

    /* Switch: '<S191>/Switch' */
    VeHCDR_b_ACComp_RPM_Chg_Chk = !VeHCDR_b_RPM_NotChang_DisTmr_Sts;

    /* Switch: '<S190>/Switch2' incorporates:
     *  Constant: '<S233>/Calib'
     *  Constant: '<S234>/Calib'
     *  DataStoreRead: '<S190>/Data Store Read1'
     *  Logic: '<S190>/Logical Operator'
     *  RelationalOperator: '<S190>/Comparison5'
     */
    if (KeHCDR_b_DsblCompTgtSpd_InitCheck)
    {
        rtb_TmpSignalConversionAtVePMTR_b_ThrmlS =
            ((((EeHCDR_b_InitDiag_Pass_Prev) || (HCDR_ac_DW.UnitDelay1_DSTATE_f))
              && (rtb_TmpSignalConversionAtVeACCR_n_CompSp >
                  KeHCDR_n_Initial_EAC_RPM)) || ((!EeHCDR_b_InitDiag_Pass_Prev) &&
              (!HCDR_ac_DW.UnitDelay1_DSTATE_f)));
    }
    else
    {
        rtb_TmpSignalConversionAtVePMTR_b_ThrmlS =
            (rtb_TmpSignalConversionAtVeACCR_n_CompSp > KeHCDR_n_Initial_EAC_RPM);
    }

    /* End of Switch: '<S190>/Switch2' */

    /* Logic: '<S190>/Logical' incorporates:
     *  Constant: '<S232>/Calib'
     *  Logic: '<S190>/Logical1'
     *  Logic: '<S190>/Logical2'
     *  Logic: '<S190>/Logical3'
     *  Logic: '<S190>/Logical4'
     *  RelationalOperator: '<S190>/Comparison2'
     *  Switch: '<S190>/Switch'
     */
    VeHCDR_b_presSnsr_DiagEnbl = (((((((rtb_VariantMerge_For_Variant_Source_V_ae
        && (!HCDR_ac_B.VariantMergeForOutportEACPref_FltDtct)) &&
        (!rtb_MultiportSwitch2)) && ((!rtb_VariantMerge_For_Variant_Source_Va_l)
        && (!rtb_VariantMerge_For_Variant_Source_Va_a))) &&
        rtb_TmpSignalConversionAtVePMTR_b_ThrmlS) &&
        (VeHCDR_b_ACComp_Defrost_Mode_EnApp1)) &&
        (((!HCDR_ac_DW.UnitDelay1_DSTATE_f) || (VeHCDR_b_ACComp_RPM_Chg_Chk)) ||
         (KeHCDR_b_ACComp_RPM_Const_En))) && rtb_Logical6);

    /* RelationalOperator: '<S189>/Comparison4' incorporates:
     *  Constant: '<S222>/Calib'
     */
    rtb_Logical6 = (rtb_TmpSignalConversionAtVeTAIR_n_CompSp <=
                    KeHCDR_n_EAC_CompOff_RPM);

    /* Outputs for Atomic SubSystem: '<S189>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S227>/EdgeRising' */
    /* Logic: '<S229>/AND' incorporates:
     *  Logic: '<S229>/OR1'
     *  UnitDelay: '<S229>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMTR_b_ThrmlS = (rtb_Logical6 &&
        (!HCDR_ac_DW.UnitDelay_DSTATE_n4));

    /* Update for UnitDelay: '<S229>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_n4 = rtb_Logical6;

    /* End of Outputs for SubSystem: '<S227>/EdgeRising' */

    /* Switch: '<S227>/Switch1' incorporates:
     *  Constant: '<S219>/Calib'
     *  Constant: '<S227>/Constant Value'
     *  Constant: '<S227>/Constant Value1'
     *  Logic: '<S227>/OR'
     *  Logic: '<S227>/OR1'
     *  MinMax: '<S227>/Minimum'
     *  Sum: '<S227>/Summation'
     *  UnitDelay: '<S227>/Unit Delay'
     */
    if ((!rtb_Logical6) || rtb_TmpSignalConversionAtVePMTR_b_ThrmlS)
    {
        HCDR_ac_DW.UnitDelay_DSTATE_g4 = 0U;
    }
    else if (KeHCDR_Cnt_EAC_CompOffTime_app2 < ((uint16)(((uint32)
                HCDR_ac_DW.UnitDelay_DSTATE_g4) + 1U)))
    {
        /* MinMax: '<S227>/Minimum' incorporates:
         *  Constant: '<S219>/Calib'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_g4 = KeHCDR_Cnt_EAC_CompOffTime_app2;
    }
    else
    {
        /* MinMax: '<S227>/Minimum' incorporates:
         *  Constant: '<S227>/Constant Value'
         *  Sum: '<S227>/Summation'
         *  UnitDelay: '<S227>/Unit Delay'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_g4 = (uint16)(((uint32)
            HCDR_ac_DW.UnitDelay_DSTATE_g4) + 1U);
    }

    /* End of Switch: '<S227>/Switch1' */

    /* Logic: '<S227>/AND' incorporates:
     *  Constant: '<S219>/Calib'
     *  RelationalOperator: '<S227>/Greater  Than'
     *  UnitDelay: '<S227>/Unit Delay'
     */
    VeHCDR_b_EAC_ComOff_RPM = (rtb_Logical6 && (HCDR_ac_DW.UnitDelay_DSTATE_g4 >=
        KeHCDR_Cnt_EAC_CompOffTime_app2));

    /* End of Outputs for SubSystem: '<S189>/Turn On Delay Sample1' */

    /* Logic: '<S189>/Logical10' incorporates:
     *  Constant: '<S220>/Calib'
     */
    VeHCDR_b_CompSpdFdb_OffTime = ((VeHCDR_b_EAC_ComOff_RPM) &&
        (KeHCDR_b_EAC_CompOff_En));

    /* SignalConversion: '<S186>/Signal Conversion' incorporates:
     *  DataStoreRead: '<S186>/Data Store Read1'
     */
    VeHCDR_b_InitDiag_Pass_Prev = EeHCDR_b_InitDiag_Pass_Prev;

    /* Chart: '<S186>/PressSnsr_Diag' incorporates:
     *  Inport: '<Root>/VeTAIR_p_HghRfrgtPres'
     */
    /* Gateway: HCDR_MedTEH/Diagnosis/AC_Comp_Diagnosis/PressSnsr_Diagnosis/PressSnsr_Diagnosis/PressSnsr_Diag/PressSnsr_Diag */
    /* During: HCDR_MedTEH/Diagnosis/AC_Comp_Diagnosis/PressSnsr_Diagnosis/PressSnsr_Diagnosis/PressSnsr_Diag/PressSnsr_Diag */
    if (((uint32)HCDR_ac_DW.is_active_c36_HCDR_ac) == 0U)
    {
        /* Entry: HCDR_MedTEH/Diagnosis/AC_Comp_Diagnosis/PressSnsr_Diagnosis/PressSnsr_Diagnosis/PressSnsr_Diag/PressSnsr_Diag */
        HCDR_ac_DW.is_active_c36_HCDR_ac = 1U;

        /* Entry Internal: HCDR_MedTEH/Diagnosis/AC_Comp_Diagnosis/PressSnsr_Diagnosis/PressSnsr_Diagnosis/PressSnsr_Diag/PressSnsr_Diag */
        /* Transition: '<S196>:338' */
        HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_Init;

        /* Entry 'Init': '<S196>:335' */
        HCDR_ac_B.VeHCDR_Cnt_InitWait = 0;
        HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm = 0;
        HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass = 0;
        HCDR_ac_B.VeHCDR_Cnt_ACDiag_ContMaxtm_Pass = 0;
        HCDR_ac_B.VeHCDR_Cnt_ACDiag_ContMaxtm = 0;
        HCDR_ac_B.VeHCDR_b_ACPress_Latch = false;
        HCDR_ac_B.VeHCDR_b_InitDiag_Pass = false;
        HCDR_ac_B.VeHCDR_Cnt_StateCounter = 0;
    }
    else
    {
        (void)Rte_Read_VeTAIR_p_HghRfrgtPres_Value(&tmpRead_33);
        guard1 = false;
        guard2 = false;
        guard3 = false;
        guard4 = false;
        guard5 = false;
        switch (HCDR_ac_DW.is_c36_HCDR_ac)
        {
          case HCDR_ac_IN_Init:
            HCDR_ac_B.VeHCDR_Cnt_ACDiag_ContMaxtm_Pass = 0;
            HCDR_ac_B.VeHCDR_Cnt_StateCounter = 0;

            /* During 'Init': '<S196>:335' */
            if (((((!VeHCDR_b_CompSpdFdb_OffTime) &&
                    (HCDR_ac_B.VeHCDR_Cnt_InitWait > KeHCDR_Cnt_InitWaitTh)) &&
                    (VeHCDR_b_InitDiag_Pass_Prev)) &&
                    (KeHCDR_b_InitDiag_Bypass_En)) || (KeHCDR_b_InitDiagOverride))
            {
                /* Transition: '<S196>:427' */
                HCDR_ac_B.VeHCDR_b_InitDiag_Pass = true;

                /* Transition: '<S196>:661' */
                HCDR_ac_B.VeHCDR_Cnt_InitWait++;
            }
            else
            {
                rtb_TmpSignalConversionAtVePMTR_b_ThrmlS =
                    !HCDR_ac_B.VeHCDR_b_InitDiag_Pass;
                if (((VeHCDR_b_CompSpdFdb_OffTime) &&
                        rtb_TmpSignalConversionAtVePMTR_b_ThrmlS) &&
                        rtb_TmpSignalConversionAtVePMTR_b_ThrmlS)
                {
                    /* Transition: '<S196>:117' */
                    /* Transition: '<S196>:593' */
                    HCDR_ac_B.VeHCDR_b_ACPress_Latch = false;
                    HCDR_ac_B.VeHCDR_Cnt_ACComp_InitWait = 0;
                    if ((!HCDR_ac_B.VeHCDR_b_PresSnsrDiag_Run) &&
                            (!VeHCDR_b_presSnsr_DiagEnbl))
                    {
                        /* Transition: '<S196>:570' */
                        HCDR_ac_DW.is_c36_HCDR_ac =
                            HCDR_ac_IN_Diagnostics_Not_Defined;

                        /* Entry 'Diagnostics_Not_Defined': '<S196>:542' */
                        HCDR_ac_B.VeHCDR_Cnt_StateCounter = 8;
                        VeHCDR_b_PresSnsrPass = false;
                        VeHCDR_b_PresSnsrFail = false;
                    }
                    else if (VeHCDR_b_presSnsr_DiagEnbl)
                    {
                        /* Transition: '<S196>:578' */
                        if (HCDR_ac_B.VeHCDR_b_ACPress_Latch)
                        {
                            /* Transition: '<S196>:568' */
                            if ((!VeHCDR_b_CompStat_NormalOp) ||
                                    (!VeHCDR_b_CompSpdFdb_ON_Check))
                            {
                                /* Transition: '<S196>:561' */
                                guard3 = true;
                            }
                            else if ((VeHCDR_b_CompStat_NormalOp) &&
                                     (VeHCDR_b_CompSpdFdb_ON_Check))
                            {
                                /* Transition: '<S196>:556' */
                                HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff =
                                    tmpRead_33 -
                                    HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Latch_Init;
                                if (!VeHCDR_b_CompSpdFdb_ON)
                                {
                                    /* Transition: '<S196>:574' */
                                    /* Transition: '<S196>:580' */
                                    guard3 = true;
                                }
                                else if ((HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff >
                                          KeHCDR_pbar_EAC_Press_InitChgLimMin) &&
                                         (HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff <
                                          KeHCDR_pbar_EAC_Press_InitChgLimMax))
                                {
                                    /* Transition: '<S196>:563' */
                                    HCDR_ac_DW.is_c36_HCDR_ac =
                                        HCDR_ac_IN_Increase_Diag_Fail_Counter;

                                    /* Entry 'Increase_Diag_Fail_Counter': '<S196>:549' */
                                    HCDR_ac_B.VeHCDR_Cnt_StateCounter = 5;
                                    HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm++;
                                    HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass++;
                                }
                                else if ((HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff <=
                                          KeHCDR_pbar_EAC_Press_InitChgLimMin) ||
                                         (HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff >=
                                          KeHCDR_pbar_EAC_Press_InitChgLimMax))
                                {
                                    /* Transition: '<S196>:565' */
                                    HCDR_ac_DW.is_c36_HCDR_ac =
                                        HCDR_ac_IN_Increase_Diag_Pass_Counter;

                                    /* Entry 'Increase_Diag_Pass_Counter': '<S196>:544' */
                                    HCDR_ac_B.VeHCDR_Cnt_StateCounter = 3;
                                    HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass++;
                                }
                                else
                                {
                                    guard2 = true;
                                }
                            }
                            else
                            {
                                guard2 = true;
                            }
                        }
                        else
                        {
                            guard2 = true;
                        }
                    }
                    else
                    {
                        HCDR_ac_B.VeHCDR_Cnt_InitWait++;
                    }
                }
                else
                {
                    /* Transition: '<S196>:437' */
                    /* Transition: '<S196>:453' */
                    HCDR_ac_B.VeHCDR_Cnt_InitWait++;
                }
            }
            break;

          case HCDR_ac_IN_Init1:
            HCDR_ac_B.VeHCDR_Cnt_ACDiag_ContMaxtm_Pass = 0;
            HCDR_ac_B.VeHCDR_Cnt_StateCounter = 16;

            /* During 'Init1': '<S196>:416' */
            /* Transition: '<S196>:433' */
            if (HCDR_ac_B.VeHCDR_b_InitDiag_Pass)
            {
                /* Transition: '<S196>:437' */
                /* Transition: '<S196>:453' */
                HCDR_ac_B.VeHCDR_Cnt_InitWait++;
            }
            else
            {
                /* Transition: '<S196>:593' */
                HCDR_ac_B.VeHCDR_b_ACPress_Latch = false;
                HCDR_ac_B.VeHCDR_Cnt_ACComp_InitWait = 0;
                if ((!HCDR_ac_B.VeHCDR_b_PresSnsrDiag_Run) &&
                        (!VeHCDR_b_presSnsr_DiagEnbl))
                {
                    /* Transition: '<S196>:570' */
                    HCDR_ac_DW.is_c36_HCDR_ac =
                        HCDR_ac_IN_Diagnostics_Not_Defined;

                    /* Entry 'Diagnostics_Not_Defined': '<S196>:542' */
                    HCDR_ac_B.VeHCDR_Cnt_StateCounter = 8;
                    VeHCDR_b_PresSnsrPass = false;
                    VeHCDR_b_PresSnsrFail = false;
                }
                else if (VeHCDR_b_presSnsr_DiagEnbl)
                {
                    /* Transition: '<S196>:578' */
                    if (HCDR_ac_B.VeHCDR_b_ACPress_Latch)
                    {
                        /* Transition: '<S196>:568' */
                        if ((!VeHCDR_b_CompStat_NormalOp) ||
                                (!VeHCDR_b_CompSpdFdb_ON_Check))
                        {
                            /* Transition: '<S196>:561' */
                            guard5 = true;
                        }
                        else if ((VeHCDR_b_CompStat_NormalOp) &&
                                 (VeHCDR_b_CompSpdFdb_ON_Check))
                        {
                            /* Transition: '<S196>:556' */
                            HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff = tmpRead_33 -
                                HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Latch_Init;
                            if (!VeHCDR_b_CompSpdFdb_ON)
                            {
                                /* Transition: '<S196>:574' */
                                /* Transition: '<S196>:580' */
                                guard5 = true;
                            }
                            else if ((HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff >
                                      KeHCDR_pbar_EAC_Press_InitChgLimMin) &&
                                     (HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff <
                                      KeHCDR_pbar_EAC_Press_InitChgLimMax))
                            {
                                /* Transition: '<S196>:563' */
                                HCDR_ac_DW.is_c36_HCDR_ac =
                                    HCDR_ac_IN_Increase_Diag_Fail_Counter;

                                /* Entry 'Increase_Diag_Fail_Counter': '<S196>:549' */
                                HCDR_ac_B.VeHCDR_Cnt_StateCounter = 5;
                                HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm++;
                                HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass++;
                            }
                            else if ((HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff <=
                                      KeHCDR_pbar_EAC_Press_InitChgLimMin) ||
                                     (HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff >=
                                      KeHCDR_pbar_EAC_Press_InitChgLimMax))
                            {
                                /* Transition: '<S196>:565' */
                                HCDR_ac_DW.is_c36_HCDR_ac =
                                    HCDR_ac_IN_Increase_Diag_Pass_Counter;

                                /* Entry 'Increase_Diag_Pass_Counter': '<S196>:544' */
                                HCDR_ac_B.VeHCDR_Cnt_StateCounter = 3;
                                HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass++;
                            }
                            else
                            {
                                guard4 = true;
                            }
                        }
                        else
                        {
                            guard4 = true;
                        }
                    }
                    else
                    {
                        guard4 = true;
                    }
                }
                else
                {
                    HCDR_ac_B.VeHCDR_Cnt_InitWait++;
                }
            }
            break;

          case HCDR_ac_IN_AC_Compresor_Wait:
            HCDR_ac_AC_Compresor_Wait();
            break;

          case HCDR_ac_IN_Diagnostics_Fail:
            HCDR_ac_B.VeHCDR_Cnt_StateCounter = 6;
            VeHCDR_b_PresSnsrFail = true;
            VeHCDR_b_PresSnsrPass = false;
            HCDR_ac_B.VeHCDR_b_PresSnsrDiag_Run = true;
            HCDR_ac_B.VeHCDR_b_PressSnsr_FltDtct_app1 = true;

            /* During 'Diagnostics_Fail': '<S196>:546' */
            if (!VeHCDR_b_CompSpdFdb_ON)
            {
                /* Transition: '<S196>:569' */
                /* Transition: '<S196>:585' */
                /* Transition: '<S196>:581' */
                /* Transition: '<S196>:580' */
                HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_AC_Compresor_Wait;

                /* Entry 'AC_Compresor_Wait': '<S196>:543' */
                HCDR_ac_B.VeHCDR_Cnt_StateCounter = 7;
                HCDR_ac_B.VeHCDR_Cnt_ACComp_InitWait = 0;
            }
            else if (HCDR_ac_B.VeHCDR_Cnt_StateWait >
                     KeHCDR_Cnt_StateWait_InitFail)
            {
                /* Transition: '<S196>:566' */
                /* Transition: '<S196>:594' */
                /* Transition: '<S196>:352' */
                /* Transition: '<S196>:417' */
                HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_Init1;

                /* Entry 'Init1': '<S196>:416' */
                HCDR_ac_B.VeHCDR_Cnt_InitWait = 0;
                HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm = 0;
                HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass = 0;
                HCDR_ac_B.VeHCDR_Cnt_ACDiag_ContMaxtm_Pass = 0;
                HCDR_ac_B.VeHCDR_Cnt_ACDiag_ContMaxtm = 0;
                HCDR_ac_B.VeHCDR_b_ACPress_Latch = false;
                HCDR_ac_B.VeHCDR_Cnt_StateCounter = 16;
            }
            else
            {
                HCDR_ac_B.VeHCDR_Cnt_StateWait++;
            }
            break;

          case HCDR_ac_IN_Diagnostics_Not_Defined:
            HCDR_ac_B.VeHCDR_Cnt_StateCounter = 8;
            VeHCDR_b_PresSnsrPass = false;
            VeHCDR_b_PresSnsrFail = false;

            /* During 'Diagnostics_Not_Defined': '<S196>:542' */
            if (!VeHCDR_b_CompSpdFdb_ON)
            {
                /* Transition: '<S196>:555' */
                /* Transition: '<S196>:571' */
                /* Transition: '<S196>:592' */
                /* Transition: '<S196>:658' */
                /* Transition: '<S196>:659' */
                HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_Init;

                /* Entry 'Init': '<S196>:335' */
                HCDR_ac_B.VeHCDR_Cnt_InitWait = 0;
                HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm = 0;
                HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass = 0;
                HCDR_ac_B.VeHCDR_Cnt_ACDiag_ContMaxtm_Pass = 0;
                HCDR_ac_B.VeHCDR_Cnt_ACDiag_ContMaxtm = 0;
                HCDR_ac_B.VeHCDR_b_ACPress_Latch = false;
                HCDR_ac_B.VeHCDR_b_InitDiag_Pass = false;
                HCDR_ac_B.VeHCDR_Cnt_StateCounter = 0;
            }
            break;

          case HCDR_ac_IN_Diagnostics_Pass:
            HCDR_ac_B.VeHCDR_Cnt_StateCounter = 4;
            VeHCDR_b_PresSnsrPass = true;
            VeHCDR_b_PresSnsrFail = false;
            HCDR_ac_B.VeHCDR_b_PresSnsrDiag_Run = true;
            HCDR_ac_B.VeHCDR_b_PressSnsr_FltDtct_app1 = false;

            /* During 'Diagnostics_Pass': '<S196>:545' */
            if (!VeHCDR_b_CompSpdFdb_ON)
            {
                /* Transition: '<S196>:553' */
                /* Transition: '<S196>:591' */
                /* Transition: '<S196>:583' */
                /* Transition: '<S196>:585' */
                /* Transition: '<S196>:581' */
                /* Transition: '<S196>:580' */
                HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_AC_Compresor_Wait;

                /* Entry 'AC_Compresor_Wait': '<S196>:543' */
                HCDR_ac_B.VeHCDR_Cnt_StateCounter = 7;
                HCDR_ac_B.VeHCDR_Cnt_ACComp_InitWait = 0;
            }
            else if (HCDR_ac_B.VeHCDR_Cnt_StateWait >
                     KeHCDR_Cnt_StateWait_InitPass)
            {
                /* Transition: '<S196>:587' */
                /* Transition: '<S196>:594' */
                /* Transition: '<S196>:352' */
                /* Transition: '<S196>:417' */
                HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_Init1;

                /* Entry 'Init1': '<S196>:416' */
                HCDR_ac_B.VeHCDR_Cnt_InitWait = 0;
                HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm = 0;
                HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass = 0;
                HCDR_ac_B.VeHCDR_Cnt_ACDiag_ContMaxtm_Pass = 0;
                HCDR_ac_B.VeHCDR_Cnt_ACDiag_ContMaxtm = 0;
                HCDR_ac_B.VeHCDR_b_ACPress_Latch = false;
                HCDR_ac_B.VeHCDR_Cnt_StateCounter = 16;
            }
            else
            {
                HCDR_ac_B.VeHCDR_Cnt_StateWait++;
            }
            break;

          case HCDR_ac_IN_Increase_Diag_Fail_Counter:
            HCDR_ac_Increase_Diag_Fail_Counter();
            break;

          case HCDR_ac_IN_Increase_Diag_Pass_Counter:
            HCDR_ac_Increase_Diag_Pass_Counter();
            break;

          default:
            HCDR_ac_B.VeHCDR_Cnt_StateCounter = 1;

            /* During 'Latch_Initial_AC_Pressure': '<S196>:548' */
            if (HCDR_ac_B.VeHCDR_Cnt_DiagStateCounter >
                    KeHCDR_Cnt_InitDiagStateWait)
            {
                /* Transition: '<S196>:560' */
                if ((!VeHCDR_b_CompStat_NormalOp) ||
                        (!VeHCDR_b_CompSpdFdb_ON_Check))
                {
                    /* Transition: '<S196>:561' */
                    guard1 = true;
                }
                else if ((VeHCDR_b_CompStat_NormalOp) &&
                         (VeHCDR_b_CompSpdFdb_ON_Check))
                {
                    /* Transition: '<S196>:556' */
                    HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff = tmpRead_33 -
                        HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Latch_Init;
                    if (!VeHCDR_b_CompSpdFdb_ON)
                    {
                        /* Transition: '<S196>:574' */
                        /* Transition: '<S196>:580' */
                        guard1 = true;
                    }
                    else if ((HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff >
                              KeHCDR_pbar_EAC_Press_InitChgLimMin) &&
                             (HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff <
                              KeHCDR_pbar_EAC_Press_InitChgLimMax))
                    {
                        /* Transition: '<S196>:563' */
                        HCDR_ac_DW.is_c36_HCDR_ac =
                            HCDR_ac_IN_Increase_Diag_Fail_Counter;

                        /* Entry 'Increase_Diag_Fail_Counter': '<S196>:549' */
                        HCDR_ac_B.VeHCDR_Cnt_StateCounter = 5;
                        HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm++;
                        HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass++;
                    }
                    else if ((HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff <=
                              KeHCDR_pbar_EAC_Press_InitChgLimMin) ||
                             (HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff >=
                              KeHCDR_pbar_EAC_Press_InitChgLimMax))
                    {
                        /* Transition: '<S196>:565' */
                        HCDR_ac_DW.is_c36_HCDR_ac =
                            HCDR_ac_IN_Increase_Diag_Pass_Counter;

                        /* Entry 'Increase_Diag_Pass_Counter': '<S196>:544' */
                        HCDR_ac_B.VeHCDR_Cnt_StateCounter = 3;
                        HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass++;
                    }
                    else
                    {
                        HCDR_ac_B.VeHCDR_Cnt_DiagStateCounter++;
                    }
                }
                else
                {
                    HCDR_ac_B.VeHCDR_Cnt_DiagStateCounter++;
                }
            }
            else
            {
                HCDR_ac_B.VeHCDR_Cnt_DiagStateCounter++;
            }
            break;
        }

        if (guard5)
        {
            HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_AC_Compresor_Wait;

            /* Entry 'AC_Compresor_Wait': '<S196>:543' */
            HCDR_ac_B.VeHCDR_Cnt_StateCounter = 7;
            HCDR_ac_B.VeHCDR_Cnt_ACComp_InitWait = 0;
        }

        if (guard4)
        {
            if (!HCDR_ac_B.VeHCDR_b_ACPress_Latch)
            {
                /* Transition: '<S196>:577' */
                HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_Latch_Initial_AC_Pressure;

                /* Entry 'Latch_Initial_AC_Pressure': '<S196>:548' */
                HCDR_ac_B.VeHCDR_Cnt_StateCounter = 1;
                HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Latch_Init = tmpRead_33;
                HCDR_ac_B.VeHCDR_b_ACPress_Latch = true;
                HCDR_ac_B.VeHCDR_Cnt_DiagStateCounter = 0;
            }
            else
            {
                HCDR_ac_B.VeHCDR_Cnt_InitWait++;
            }
        }

        if (guard3)
        {
            HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_AC_Compresor_Wait;

            /* Entry 'AC_Compresor_Wait': '<S196>:543' */
            HCDR_ac_B.VeHCDR_Cnt_StateCounter = 7;
            HCDR_ac_B.VeHCDR_Cnt_ACComp_InitWait = 0;
        }

        if (guard2)
        {
            if (!HCDR_ac_B.VeHCDR_b_ACPress_Latch)
            {
                /* Transition: '<S196>:577' */
                HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_Latch_Initial_AC_Pressure;

                /* Entry 'Latch_Initial_AC_Pressure': '<S196>:548' */
                HCDR_ac_B.VeHCDR_Cnt_StateCounter = 1;
                HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Latch_Init = tmpRead_33;
                HCDR_ac_B.VeHCDR_b_ACPress_Latch = true;
                HCDR_ac_B.VeHCDR_Cnt_DiagStateCounter = 0;
            }
            else
            {
                HCDR_ac_B.VeHCDR_Cnt_InitWait++;
            }
        }

        if (guard1)
        {
            HCDR_ac_DW.is_c36_HCDR_ac = HCDR_ac_IN_AC_Compresor_Wait;

            /* Entry 'AC_Compresor_Wait': '<S196>:543' */
            HCDR_ac_B.VeHCDR_Cnt_StateCounter = 7;
            HCDR_ac_B.VeHCDR_Cnt_ACComp_InitWait = 0;
        }
    }

    /* End of Chart: '<S186>/PressSnsr_Diag' */

    /* RelationalOperator: '<S189>/Comparison1' incorporates:
     *  Constant: '<S223>/Calib'
     */
    rtb_Logical6 = (rtb_TmpSignalConversionAtVeTAIR_n_CompSp <=
                    KeHCDR_n_EAC_CompOff_RPM_Chk);

    /* Outputs for Atomic SubSystem: '<S189>/EdgeFalling' */
    /* Logic: '<S215>/AND' incorporates:
     *  Logic: '<S215>/OR1'
     *  UnitDelay: '<S215>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePMTR_b_ThrmlS =
        ((!rtb_VariantMerge_For_Variant_Source_V_ae) &&
         (HCDR_ac_DW.UnitDelay_DSTATE_ct));

    /* Update for UnitDelay: '<S215>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_ct = rtb_VariantMerge_For_Variant_Source_V_ae;

    /* End of Outputs for SubSystem: '<S189>/EdgeFalling' */

    /* Logic: '<S189>/Logical4' incorporates:
     *  Logic: '<S189>/Logical14'
     *  Logic: '<S189>/Logical2'
     *  Logic: '<S189>/Logical3'
     *  UnitDelay: '<S189>/Unit Delay4'
     */
    rtb_Logical6 = (((HCDR_ac_DW.UnitDelay4_DSTATE) && rtb_Logical6) ||
                    ((!rtb_Logical6) && rtb_TmpSignalConversionAtVePMTR_b_ThrmlS));

    /* Outputs for Atomic SubSystem: '<S189>/EdgeRising' */
    /* Logic: '<S216>/OR1' incorporates:
     *  UnitDelay: '<S216>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_V_ae = !HCDR_ac_DW.UnitDelay_DSTATE_c3;

    /* Update for UnitDelay: '<S216>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_c3 = rtb_Logical6;

    /* Outputs for Enabled SubSystem: '<S189>/Latch_RTC_Comp_Off' incorporates:
     *  EnablePort: '<S225>/Enable'
     */
    /* Logic: '<S216>/AND' */
    if (rtb_Logical6 && rtb_VariantMerge_For_Variant_Source_V_ae)
    {
        /* DataStoreWrite: '<S225>/Data Store Write1' */
        EeHCDR_t_RealTime_Comp_Off = rtb_VeHCDR_t_RealTimeClock_AD;

        /* DataStoreWrite: '<S225>/Data Store Write4' */
        EeHCDR_t_RealTime_Comp_On = rtb_VeHCDR_t_RealTimeClock_AD;

        /* DataStoreWrite: '<S225>/Data Store Write2' */
        EeHCDR_b_InitDiag_Pass_Prev = HCDR_ac_B.VeHCDR_b_InitDiag_Pass;
    }

    /* End of Logic: '<S216>/AND' */
    /* End of Outputs for SubSystem: '<S189>/Latch_RTC_Comp_Off' */
    /* End of Outputs for SubSystem: '<S189>/EdgeRising' */

    /* RelationalOperator: '<S189>/Comparison2' incorporates:
     *  Constant: '<S224>/Calib'
     */
    rtb_Logical6 = (rtb_TmpSignalConversionAtVeTAIR_n_CompSp >=
                    KeHCDR_n_EAC_CompOn_RPM_Chk);

    /* Outputs for Atomic SubSystem: '<S189>/EdgeRising1' */
    /* Logic: '<S217>/OR1' incorporates:
     *  UnitDelay: '<S217>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_V_ae = !HCDR_ac_DW.UnitDelay_DSTATE_mk;

    /* Update for UnitDelay: '<S217>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_mk = rtb_Logical6;

    /* Outputs for Enabled SubSystem: '<S189>/Latch_RTC_Comp_On' incorporates:
     *  EnablePort: '<S226>/Enable'
     */
    /* Logic: '<S217>/AND' */
    if (rtb_Logical6 && rtb_VariantMerge_For_Variant_Source_V_ae)
    {
        /* DataStoreWrite: '<S226>/Data Store Write1' */
        EeHCDR_t_RealTime_Comp_On = rtb_VeHCDR_t_RealTimeClock_AD;
    }

    /* End of Logic: '<S217>/AND' */
    /* End of Outputs for SubSystem: '<S189>/Latch_RTC_Comp_On' */
    /* End of Outputs for SubSystem: '<S189>/EdgeRising1' */

    /* Logic: '<S189>/Logical1' incorporates:
     *  Constant: '<S221>/Calib'
     */
    rtb_Logical6 = ((VeHCDR_b_EAC_ComOff_RPM) && (KeHCDR_b_RealTime_Update_En));

    /* Outputs for Atomic SubSystem: '<S189>/EdgeRising2' */
    /* Logic: '<S218>/OR1' incorporates:
     *  UnitDelay: '<S218>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_V_ae = !HCDR_ac_DW.UnitDelay_DSTATE_im;

    /* Update for UnitDelay: '<S218>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_im = rtb_Logical6;

    /* Outputs for Enabled SubSystem: '<S189>/Update_OffOnTimers' incorporates:
     *  EnablePort: '<S228>/Enable'
     */
    /* Logic: '<S218>/AND' */
    if (rtb_Logical6 && rtb_VariantMerge_For_Variant_Source_V_ae)
    {
        /* DataStoreWrite: '<S228>/Data Store Write1' */
        EeHCDR_t_RealTime_Comp_On = rtb_VeHCDR_t_RealTimeClock_AD;

        /* Sum: '<S228>/Sum1' incorporates:
         *  Constant: '<S230>/Calib'
         *  DataStoreWrite: '<S228>/Data Store Write2'
         */
        EeHCDR_t_RealTime_Comp_Off = rtb_VeHCDR_t_RealTimeClock_AD -
            KeHCDR_t_Realtime_CompOff_Timer;
    }

    /* End of Logic: '<S218>/AND' */
    /* End of Outputs for SubSystem: '<S189>/Update_OffOnTimers' */
    /* End of Outputs for SubSystem: '<S189>/EdgeRising2' */

    /* RelationalOperator: '<S189>/Comparison10' incorporates:
     *  Constant: '<S223>/Calib'
     *  UnitDelay: '<S189>/Unit Delay4'
     */
    HCDR_ac_DW.UnitDelay4_DSTATE = (rtb_TmpSignalConversionAtVeTAIR_n_CompSp >
        KeHCDR_n_EAC_CompOff_RPM_Chk);

    /* Outputs for Atomic SubSystem: '<S235>/Signal Latch On With Reset' */
    /* Logic: '<S244>/OR1' incorporates:
     *  Logic: '<S235>/Logical1'
     *  UnitDelay: '<S191>/Unit Delay'
     */
    HCDR_ac_DW.UnitDelay_DSTATE_ji = !HCDR_ac_DW.UnitDelay_DSTATE_ntq;

    /* End of Outputs for SubSystem: '<S235>/Signal Latch On With Reset' */

    /* Switch: '<S235>/Switch1' incorporates:
     *  UnitDelay: '<S191>/Unit Delay3'
     *  UnitDelay: '<S235>/Unit Delay1'
     */
    if (!HCDR_ac_DW.UnitDelay_DSTATE_ji)
    {
        HCDR_ac_DW.UnitDelay1_DSTATE = HCDR_ac_DW.UnitDelay3_DSTATE;
    }

    /* End of Switch: '<S235>/Switch1' */

    /* Sum: '<S191>/Sum' incorporates:
     *  UnitDelay: '<S191>/Unit Delay3'
     *  UnitDelay: '<S235>/Unit Delay1'
     */
    HCDR_ac_DW.UnitDelay3_DSTATE = HCDR_ac_DW.UnitDelay1_DSTATE -
        HCDR_ac_DW.UnitDelay3_DSTATE;

    /* Abs: '<S191>/Abs' incorporates:
     *  UnitDelay: '<S191>/Unit Delay3'
     */
    VeHCDR_n_RPM_Diff = fabsf(HCDR_ac_DW.UnitDelay3_DSTATE);

    /* RelationalOperator: '<S191>/Comparison1' incorporates:
     *  Constant: '<S238>/Calib'
     */
    VeHCDR_b_ACComp_RPM_Chg_Ch = (VeHCDR_n_RPM_Diff >
        KeHCDR_n_ACComp_RPM_Const_Min);

    /* Gain: '<S198>/Gain' */
    VeHCDR_p_HghRfrgtPres_Latch_Init_AS =
        HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Latch_Init;

    /* Gain: '<S199>/Gain' */
    VeHCDR_b_ACPress_Latch_AS = HCDR_ac_B.VeHCDR_b_ACPress_Latch;

    /* Gain: '<S200>/Gain' */
    VeHCDR_p_HghRfrgtPres_Diff_AS = HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Diff;

    /* Gain: '<S201>/Gain' */
    VeHCDR_Cnt_InitWait_AS = HCDR_ac_B.VeHCDR_Cnt_InitWait;

    /* Gain: '<S202>/Gain' */
    VeHCDR_Cnt_StateWait_AS = HCDR_ac_B.VeHCDR_Cnt_StateWait;

    /* Gain: '<S203>/Gain' */
    VeHCDR_Cnt_ACDiag_ContMaxtm_Pass_AS =
        HCDR_ac_B.VeHCDR_Cnt_ACDiag_ContMaxtm_Pass;

    /* Gain: '<S204>/Gain' */
    VeHCDR_Cnt_ACDiag_InitMaxtm_Pass_AS =
        HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm_Pass;

    /* Gain: '<S205>/Gain' */
    VeHCDR_Cnt_StateCounter_AS = HCDR_ac_B.VeHCDR_Cnt_StateCounter;

    /* VariantMerge generated from: '<S17>/PressSnsr_FltDtct' incorporates:
     *  Gain: '<S206>/Gain'
     */
    VeHCDR_b_PressSnsr_FltDtct_AS = HCDR_ac_B.VeHCDR_b_PressSnsr_FltDtct_app1;

    /* Gain: '<S207>/Gain' */
    VeHCDR_Cnt_ACDiag_InitMaxtm_AS = HCDR_ac_B.VeHCDR_Cnt_ACDiag_InitMaxtm;

    /* Gain: '<S208>/Gain' */
    VeHCDR_b_PresSnsrDiag_Run_AS = HCDR_ac_B.VeHCDR_b_PresSnsrDiag_Run;

    /* Gain: '<S209>/Gain' */
    VeHCDR_b_InitDiag_Pass_AS = HCDR_ac_B.VeHCDR_b_InitDiag_Pass;

    /* Gain: '<S210>/Gain' */
    VeHCDR_p_HghRfrgtPres_Latch_Cont_AS =
        HCDR_ac_B.VeHCDR_p_HghRfrgtPres_Latch_Cont;

    /* Gain: '<S211>/Gain' */
    VeHCDR_Cnt_ACDiag_ContMaxtm_AS = HCDR_ac_B.VeHCDR_Cnt_ACDiag_ContMaxtm;

    /* Gain: '<S212>/Gain' */
    VeHCDR_Cnt_DiagStateCounter_AS = HCDR_ac_B.VeHCDR_Cnt_DiagStateCounter;

    /* Gain: '<S213>/Gain' */
    VeHCDR_Cnt_ACComp_InitWait_AS = HCDR_ac_B.VeHCDR_Cnt_ACComp_InitWait;

    /* Gain: '<S214>/Gain' */
    VeHCDR_Cnt_ACComp_ContWait_AS = HCDR_ac_B.VeHCDR_Cnt_ACComp_ContWait;

    /* VariantMerge generated from: '<S17>/IUMPR_PressSnsrPerf' incorporates:
     *  Constant: '<S248>/Constant1'
     *  Constant: '<S248>/Constant2'
     *  Constant: '<S249>/Constant1'
     *  Constant: '<S249>/Constant2'
     *  Constant: '<S250>/Calib'
     *  Constant: '<S251>/Calib'
     *  Constant: '<S252>/Calib'
     *  Constant: '<S253>/Calib'
     *  Constant: '<S254>/Calib'
     *  Constant: '<S255>/Calib'
     *  Constant: '<S256>/Calib'
     *  DataStoreRead: '<S248>/StatusByte_EACPerf'
     *  DataStoreRead: '<S249>/StatusByte_ThrmlRlyCtrlCkt'
     *  Logic: '<S187>/Logical10'
     *  Logic: '<S187>/Logical11'
     *  Logic: '<S187>/Logical12'
     *  Logic: '<S187>/Logical5'
     *  Logic: '<S187>/Logical6'
     *  Logic: '<S187>/Logical8'
     *  Logic: '<S187>/Logical9'
     *  Logic: '<S248>/Logical Operator'
     *  Logic: '<S249>/Logical Operator'
     *  RelationalOperator: '<S248>/Relational Operator1'
     *  RelationalOperator: '<S248>/Relational Operator2'
     *  RelationalOperator: '<S249>/Relational Operator1'
     *  RelationalOperator: '<S249>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S248>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S248>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S249>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S249>/Bitwise Operator2'
     */
    HCDR_ac_B.VariantMergeForOutportIUMPR_PressSnsrPer =
        (((((((rtb_MultiportSwitch2 &&
               (KeHCDR_b_IUMPR_PressSnsrPerf_CompCommErr_Enbl)) || ((((((sint32)
                   HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) > 0) &&
                ((((uint32)HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) == 0U))
               && (KeHCDR_b_IUMPR_PressSnsrPerf_ThrmlRly_Enbl))) || ((((((sint32)
                  HCDR_ac_DW.StatusByte_EACPerf) & 1) > 0) && ((((uint32)
                  HCDR_ac_DW.StatusByte_EACPerf) & 64U) == 0U)) &&
              (KeHCDR_b_IUMPR_PressSnsrPerf_EACPerf_Enbl))) ||
            (rtb_VariantMerge_For_Variant_Source_Va_l &&
             (KeHCDR_b_IUMPR_PressSnsrPerf_PressSnsrShrtLow_Enbl))) ||
           (rtb_VariantMerge_For_Variant_Source_Va_a &&
            (KeHCDR_b_IUMPR_PressSnsrPerf_PressSnsrShrtHi_Enbl))) ||
          (KeHCDR_b_IUMPR_PressSnsrPerf_Ovrrd)) &&
         (KeHCDR_b_IUMPR_PressSnsrPerf_Enbl));

    /* RelationalOperator: '<S188>/Relational Operator3' incorporates:
     *  Constant: '<S188>/Constant3'
     *  DataStoreRead: '<S185>/StatusByte_AC_RefrigPresSnsrAPerf'
     *  S-Function (sfix_bitop): '<S188>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_l = ((((uint32)
        HCDR_ac_DW.StatusByte_AC_RefrigPresSnsrAPerf) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S188>/EdgeFalling1' */
    /* Logic: '<S257>/AND' incorporates:
     *  Logic: '<S257>/OR1'
     *  UnitDelay: '<S257>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a =
        ((!rtb_VariantMerge_For_Variant_Source_Va_l) &&
         (HCDR_ac_DW.UnitDelay_DSTATE_aer));

    /* Update for UnitDelay: '<S257>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_aer = rtb_VariantMerge_For_Variant_Source_Va_l;

    /* End of Outputs for SubSystem: '<S188>/EdgeFalling1' */

    /* If: '<S188>/If' incorporates:
     *  Logic: '<S188>/Logical5'
     */
    if (rtb_VariantMerge_For_Variant_Source_Va_a || (VeHCDR_b_ResetCnts))
    {
        /* Outputs for IfAction SubSystem: '<S188>/Init' incorporates:
         *  ActionPort: '<S259>/Action Port'
         */
        /* VariantMerge generated from: '<S17>/VeHCDR_e_FaultSts_AC_RefrigPresSnsrAPerf' incorporates:
         *  Constant: '<S262>/Constant'
         *  SignalConversion generated from: '<S259>/e_FaultStsInit'
         */
        HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_f = CeDFIB_e_Init;

        /* End of Outputs for SubSystem: '<S188>/Init' */
    }
    else if (VeHCDR_b_PresSnsrPass)
    {
        /* Outputs for IfAction SubSystem: '<S188>/Pass' incorporates:
         *  ActionPort: '<S260>/Action Port'
         */
        /* VariantMerge generated from: '<S17>/VeHCDR_e_FaultSts_AC_RefrigPresSnsrAPerf' incorporates:
         *  Constant: '<S263>/Constant'
         *  SignalConversion generated from: '<S260>/e_FaultStsPass'
         */
        HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_f = CeDFIB_e_Pass;

        /* End of Outputs for SubSystem: '<S188>/Pass' */
    }
    else
    {
        if (VeHCDR_b_PresSnsrFail)
        {
            /* Outputs for IfAction SubSystem: '<S188>/Fail' incorporates:
             *  ActionPort: '<S258>/Action Port'
             */
            /* VariantMerge generated from: '<S17>/VeHCDR_e_FaultSts_AC_RefrigPresSnsrAPerf' incorporates:
             *  Constant: '<S261>/Constant'
             *  SignalConversion generated from: '<S258>/e_FaultStsFail'
             */
            HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_f = CeDFIB_e_Fail;

            /* End of Outputs for SubSystem: '<S188>/Fail' */
        }
    }

    /* End of If: '<S188>/If' */

    /* Update for UnitDelay: '<S190>/Unit Delay1' */
    HCDR_ac_DW.UnitDelay1_DSTATE_f = HCDR_ac_B.VeHCDR_b_InitDiag_Pass;

    /* Update for UnitDelay: '<S191>/Unit Delay' */
    HCDR_ac_DW.UnitDelay_DSTATE_ntq = VeHCDR_b_ACComp_RPM_Chg_Ch;

    /* Update for UnitDelay: '<S191>/Unit Delay3' */
    HCDR_ac_DW.UnitDelay3_DSTATE = rtb_TmpSignalConversionAtVeTAIR_n_CompSp;

    /* End of Outputs for SubSystem: '<S17>/PressSnsr_Diagnosis' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#else

    /* Outputs for Atomic SubSystem: '<S17>/PressSnsr_Init' */
    /* VariantMerge generated from: '<S17>/PressSnsr_FltDtct' incorporates:
     *  Constant: '<S184>/FALSE Constant'
     */
    VeHCDR_b_PressSnsr_FltDtct_AS = false;

    /* VariantMerge generated from: '<S17>/IUMPR_PressSnsrPerf' incorporates:
     *  Constant: '<S184>/FALSE Constant1'
     */
    HCDR_ac_B.VariantMergeForOutportIUMPR_PressSnsrPer = false;

    /* VariantMerge generated from: '<S17>/VeHCDR_e_FaultSts_AC_RefrigPresSnsrAPerf' incorporates:
     *  Constant: '<S264>/Constant'
     */
    HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_f = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S17>/PressSnsr_Init' */
#endif

    /* End of Outputs for SubSystem: '<S7>/PressSnsr_Diagnosis' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeTAIR_b_HVAC_ECVD_CurrentActFA' */
    (void)Rte_Read_VeTAIR_b_HVAC_ECVD_CurrentActFA_Value(&rtb_Comparison1_e);

    /* Inport: '<Root>/VeTAIR_b_ECM_AC_ClutchStsFA' */
    (void)Rte_Read_VeTAIR_b_ECM_AC_ClutchStsFA_Value(&tmpRead_36);

    /* Inport: '<Root>/VeTAIR_b_HghRfrgtPresFailSts' */
    (void)Rte_Read_VeTAIR_b_HghRfrgtPresFailSts_Value(&tmpRead_35);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/HCDR_MedTEH'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnosis'
     */
    /* Switch: '<S25>/Switch1' incorporates:
     *  Constant: '<S22>/Calib'
     *  Constant: '<S23>/Calib'
     *  Constant: '<S24>/Calib'
     *  Constant: '<S26>/Calib'
     *  Constant: '<S27>/Calib'
     *  Constant: '<S28>/Calib'
     *  Logic: '<S11>/Logical1'
     *  Logic: '<S11>/Logical2'
     *  Logic: '<S11>/Logical3'
     *  Logic: '<S11>/Logical4'
     *  Logic: '<S11>/Logical6'
     *  Logic: '<S11>/Logical7'
     *  Logic: '<S11>/Logical8'
     */
    if (((((((HCDR_ac_B.VariantMergeForOutportEACPref_FltDtct) &&
             (KeHCDR_b_AC_FaultState_CompPerfEnb)) ||
            (rtb_TmpSignalConversionAtVeTAIR_b_HghRfr &&
             (KeHCDR_b_AC_FltState_HghPresSen_FA_Enb))) ||
            ((VeHCDR_b_PressSnsr_FltDtct_AS) &&
             (KeHCDR_b_AC_FltState_HghPresSen_PerfEnb))) || (tmpRead_35 &&
            (HeHCDR_b_AC_FltState_HghPresSen_FailSts_mHEVEnb))) || (tmpRead_36 &&
          (HeHCDR_b_AC_FltState_ACclutchFlt_mHEVEnb))) || (rtb_Comparison1_e &&
            (HeHCDR_b_AC_FltState_ECVDFlt_mHEVEnb)))
    {
        /* Switch: '<S25>/Switch1' incorporates:
         *  Constant: '<S20>/Constant'
         */
        VeHCDR_e_BatteryThermalFault_B4D = CeHCDR_e_BattThermalCompFault;
    }
    else
    {
        /* Switch: '<S25>/Switch1' incorporates:
         *  Constant: '<S21>/Constant'
         */
        VeHCDR_e_BatteryThermalFault_B4D = CeHCDR_e_BattThermalNoFault;
    }

    /* End of Switch: '<S25>/Switch1' */
#if Rte_SysCon_Variant_HCDR_5 || Rte_SysCon_Variant_HCDR_8

    /* Outputs for Atomic SubSystem: '<S8>/BatCntctrStat_BPCM_CommCheck' */
#if Rte_SysCon_Variant_HCDR_11

    /* Outputs for Atomic SubSystem: '<S265>/BatCntctrStat_BPCM_CommCheck_P2GEN4_CommCheck' */
    /* VariantMerge generated from: '<S265>/LeHCDR_b_BatCntctrStat_BPCM_NoCommErr' incorporates:
     *  Constant: '<S272>/Constant1'
     *  Constant: '<S272>/Constant2'
     *  Constant: '<S273>/Constant1'
     *  Constant: '<S273>/Constant2'
     *  Constant: '<S274>/Constant1'
     *  Constant: '<S274>/Constant2'
     *  Constant: '<S275>/Constant1'
     *  Constant: '<S275>/Constant2'
     *  DataStoreRead: '<S272>/StatusByte_HiSpdFD_CAN3CommBus'
     *  DataStoreRead: '<S273>/StatusByte_HiSpdFD_CAN3CommBusPerf'
     *  DataStoreRead: '<S274>/StatusByte_InvData_BECM'
     *  DataStoreRead: '<S275>/StatusByte_LosCommBECM_A'
     *  Logic: '<S267>/Logical Operator'
     *  Logic: '<S267>/Logical Operator1'
     *  Logic: '<S267>/Logical Operator2'
     *  Logic: '<S267>/Logical Operator3'
     *  Logic: '<S267>/Logical Operator4'
     *  Logic: '<S267>/Logical Operator5'
     *  Logic: '<S272>/Logical Operator'
     *  Logic: '<S273>/Logical Operator'
     *  Logic: '<S274>/Logical Operator'
     *  Logic: '<S275>/Logical Operator'
     *  RelationalOperator: '<S272>/Relational Operator1'
     *  RelationalOperator: '<S272>/Relational Operator2'
     *  RelationalOperator: '<S273>/Relational Operator1'
     *  RelationalOperator: '<S273>/Relational Operator2'
     *  RelationalOperator: '<S274>/Relational Operator1'
     *  RelationalOperator: '<S274>/Relational Operator2'
     *  RelationalOperator: '<S275>/Relational Operator1'
     *  RelationalOperator: '<S275>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S272>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S272>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S273>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S273>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S274>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S274>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S275>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S275>/Bitwise Operator2'
     */
    rtb_VariantMergeForOutportLeHCDR_b_BatCn = ((((((((sint32)
        HCDR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf) & 1) <= 0) || ((((uint32)
        HCDR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf) & 64U) != 0U)) &&
        (((((sint32)HCDR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus) & 1) <= 0) ||
         ((((uint32)HCDR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus) & 64U) != 0U))) &&
        (((((sint32)HCDR_ac_DW.StatusByte_LosCommBECM_A) & 1) <= 0) ||
         ((((uint32)HCDR_ac_DW.StatusByte_LosCommBECM_A) & 64U) != 0U))) &&
        ((((((sint32)HCDR_ac_DW.StatusByte_InvData_BECM) & 1) <= 0) ||
          ((((uint32)HCDR_ac_DW.StatusByte_InvData_BECM) & 64U) != 0U)) ||
         (!rtb_TmpSignalConversionAtVeBPCR_b_HV_Bat)));

    /* End of Outputs for SubSystem: '<S265>/BatCntctrStat_BPCM_CommCheck_P2GEN4_CommCheck' */
#elif Rte_SysCon_Variant_HCDR_10

    /* Outputs for Atomic SubSystem: '<S265>/BatCntctrStat_BPCM_WithRedundantCAN_Comm_Check' */
    /* Logic: '<S268>/Logical Operator4' incorporates:
     *  Logic: '<S268>/Logical Operator10'
     */
    rtb_VariantMergeForOutportLeHCDR_b_BatCn =
        !rtb_TmpSignalConversionAtVeBPCR_b_HV_Bat;

    /* VariantMerge generated from: '<S265>/LeHCDR_b_BatCntctrStat_BPCM_NoCommErr' incorporates:
     *  Constant: '<S276>/Constant1'
     *  Constant: '<S276>/Constant2'
     *  Constant: '<S277>/Constant1'
     *  Constant: '<S277>/Constant2'
     *  Constant: '<S278>/Constant1'
     *  Constant: '<S278>/Constant2'
     *  Constant: '<S279>/Constant1'
     *  Constant: '<S279>/Constant2'
     *  Constant: '<S280>/Constant1'
     *  Constant: '<S280>/Constant2'
     *  Constant: '<S281>/Constant1'
     *  Constant: '<S281>/Constant2'
     *  Constant: '<S282>/Calib'
     *  Constant: '<S283>/Constant1'
     *  Constant: '<S283>/Constant2'
     *  Constant: '<S284>/Constant1'
     *  Constant: '<S284>/Constant2'
     *  DataStoreRead: '<S276>/StatusByte_HiSpdFD_CAN11CommBus'
     *  DataStoreRead: '<S277>/StatusByte_HiSpdFD_CAN11CommBusPerf'
     *  DataStoreRead: '<S278>/StatusByte_HiSpdFD_CAN5CommBus'
     *  DataStoreRead: '<S279>/StatusByte_HiSpdFD_CAN5CommBusPerf'
     *  DataStoreRead: '<S280>/StatusByte_InvData_BECM'
     *  DataStoreRead: '<S281>/StatusByte_InvData_BECM_CANC11'
     *  DataStoreRead: '<S283>/StatusByte_LosCommBECM_A'
     *  DataStoreRead: '<S284>/StatusByte_LosCommBECM_A_CANC11'
     *  Logic: '<S268>/Logical Operator'
     *  Logic: '<S268>/Logical Operator1'
     *  Logic: '<S268>/Logical Operator10'
     *  Logic: '<S268>/Logical Operator11'
     *  Logic: '<S268>/Logical Operator12'
     *  Logic: '<S268>/Logical Operator2'
     *  Logic: '<S268>/Logical Operator3'
     *  Logic: '<S268>/Logical Operator4'
     *  Logic: '<S268>/Logical Operator5'
     *  Logic: '<S268>/Logical Operator6'
     *  Logic: '<S268>/Logical Operator7'
     *  Logic: '<S268>/Logical Operator8'
     *  Logic: '<S268>/Logical Operator9'
     *  Logic: '<S276>/Logical Operator'
     *  Logic: '<S277>/Logical Operator'
     *  Logic: '<S278>/Logical Operator'
     *  Logic: '<S279>/Logical Operator'
     *  Logic: '<S280>/Logical Operator'
     *  Logic: '<S281>/Logical Operator'
     *  Logic: '<S283>/Logical Operator'
     *  Logic: '<S284>/Logical Operator'
     *  RelationalOperator: '<S276>/Relational Operator1'
     *  RelationalOperator: '<S276>/Relational Operator2'
     *  RelationalOperator: '<S277>/Relational Operator1'
     *  RelationalOperator: '<S277>/Relational Operator2'
     *  RelationalOperator: '<S278>/Relational Operator1'
     *  RelationalOperator: '<S278>/Relational Operator2'
     *  RelationalOperator: '<S279>/Relational Operator1'
     *  RelationalOperator: '<S279>/Relational Operator2'
     *  RelationalOperator: '<S280>/Relational Operator1'
     *  RelationalOperator: '<S280>/Relational Operator2'
     *  RelationalOperator: '<S281>/Relational Operator1'
     *  RelationalOperator: '<S281>/Relational Operator2'
     *  RelationalOperator: '<S283>/Relational Operator1'
     *  RelationalOperator: '<S283>/Relational Operator2'
     *  RelationalOperator: '<S284>/Relational Operator1'
     *  RelationalOperator: '<S284>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S276>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S276>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S277>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S277>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S278>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S278>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S279>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S279>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S280>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S280>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S281>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S281>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S283>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S283>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S284>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S284>/Bitwise Operator2'
     */
    rtb_VariantMergeForOutportLeHCDR_b_BatCn = (((((((((sint32)
        HCDR_ac_DW.StatusByte_HiSpdFD_CAN11CommBusPerf) & 1) <= 0) || ((((uint32)
        HCDR_ac_DW.StatusByte_HiSpdFD_CAN11CommBusPerf) & 64U) != 0U)) &&
        (((((sint32)HCDR_ac_DW.StatusByte_HiSpdFD_CAN11CommBus) & 1) <= 0) ||
         ((((uint32)HCDR_ac_DW.StatusByte_HiSpdFD_CAN11CommBus) & 64U) != 0U))) &&
        (((((sint32)HCDR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 1) <= 0) ||
         ((((uint32)HCDR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 64U) != 0U))) &&
        ((((((sint32)HCDR_ac_DW.StatusByte_InvData_BECM) & 1) <= 0) ||
          ((((uint32)HCDR_ac_DW.StatusByte_InvData_BECM) & 64U) != 0U)) ||
         rtb_VariantMergeForOutportLeHCDR_b_BatCn)) || (((((((((sint32)
        HCDR_ac_DW.StatusByte_HiSpdFD_CAN5CommBusPerf) & 1) <= 0) || ((((uint32)
        HCDR_ac_DW.StatusByte_HiSpdFD_CAN5CommBusPerf) & 64U) != 0U)) &&
        (((((sint32)HCDR_ac_DW.StatusByte_HiSpdFD_CAN5CommBus) & 1) <= 0) ||
         ((((uint32)HCDR_ac_DW.StatusByte_HiSpdFD_CAN5CommBus) & 64U) != 0U))) &&
        (((((sint32)HCDR_ac_DW.StatusByte_LosCommBECM_A) & 1) <= 0) ||
         ((((uint32)HCDR_ac_DW.StatusByte_LosCommBECM_A) & 64U) != 0U))) &&
        ((((((sint32)HCDR_ac_DW.StatusByte_InvData_BECM_CANC11) & 1) <= 0) ||
          ((((uint32)HCDR_ac_DW.StatusByte_InvData_BECM_CANC11) & 64U) != 0U)) ||
         rtb_VariantMergeForOutportLeHCDR_b_BatCn)) &&
        (KeHCDR_b_BPCM_RedunCommCheckEnbl)));

    /* End of Outputs for SubSystem: '<S265>/BatCntctrStat_BPCM_WithRedundantCAN_Comm_Check' */
#else

    /* Outputs for Atomic SubSystem: '<S265>/BatCntctrStat_BPCM_CommCheck_Others_CommCheck' */
    /* VariantMerge generated from: '<S265>/LeHCDR_b_BatCntctrStat_BPCM_NoCommErr' incorporates:
     *  Constant: '<S269>/Constant1'
     *  Constant: '<S269>/Constant2'
     *  Constant: '<S270>/Constant1'
     *  Constant: '<S270>/Constant2'
     *  Constant: '<S271>/Constant1'
     *  Constant: '<S271>/Constant2'
     *  DataStoreRead: '<S269>/StatusByte_CommBusOff'
     *  DataStoreRead: '<S270>/StatusByte_InvData_BECM'
     *  DataStoreRead: '<S271>/StatusByte_LosCommBECM_A'
     *  Logic: '<S266>/Logical Operator'
     *  Logic: '<S266>/Logical Operator1'
     *  Logic: '<S266>/Logical Operator2'
     *  Logic: '<S266>/Logical Operator3'
     *  Logic: '<S266>/Logical Operator4'
     *  Logic: '<S269>/Logical Operator'
     *  Logic: '<S270>/Logical Operator'
     *  Logic: '<S271>/Logical Operator'
     *  RelationalOperator: '<S269>/Relational Operator1'
     *  RelationalOperator: '<S269>/Relational Operator2'
     *  RelationalOperator: '<S270>/Relational Operator1'
     *  RelationalOperator: '<S270>/Relational Operator2'
     *  RelationalOperator: '<S271>/Relational Operator1'
     *  RelationalOperator: '<S271>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S269>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S269>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S270>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S270>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S271>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S271>/Bitwise Operator2'
     */
    rtb_VariantMergeForOutportLeHCDR_b_BatCn = (((((((sint32)
        HCDR_ac_DW.StatusByte_CommBusOff) & 1) <= 0) || ((((uint32)
        HCDR_ac_DW.StatusByte_CommBusOff) & 64U) != 0U)) && (((((sint32)
        HCDR_ac_DW.StatusByte_LosCommBECM_A) & 1) <= 0) || ((((uint32)
        HCDR_ac_DW.StatusByte_LosCommBECM_A) & 64U) != 0U))) && ((((((sint32)
        HCDR_ac_DW.StatusByte_InvData_BECM) & 1) <= 0) || ((((uint32)
        HCDR_ac_DW.StatusByte_InvData_BECM) & 64U) != 0U)) ||
        (!rtb_TmpSignalConversionAtVeBPCR_b_HV_Bat)));

    /* End of Outputs for SubSystem: '<S265>/BatCntctrStat_BPCM_CommCheck_Others_CommCheck' */
#endif

    /* End of Outputs for SubSystem: '<S8>/BatCntctrStat_BPCM_CommCheck' */
#endif

    /* S-Function (sfix_bitop): '<S291>/Bitwise Operator1' incorporates:
     *  Logic: '<S290>/Logical Operator'
     *  Logic: '<S291>/Logical Operator'
     *  RelationalOperator: '<S290>/Relational Operator1'
     *  RelationalOperator: '<S290>/Relational Operator2'
     *  RelationalOperator: '<S291>/Relational Operator1'
     *  RelationalOperator: '<S291>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S290>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S290>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S291>/Bitwise Operator2'
     *  SignalConversion generated from: '<S9>/Variant4'
     *  SignalConversion generated from: '<S9>/Variant5'
     */
#if (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8)

    /* VariantMerge generated from: '<S9>/Variant4' incorporates:
     *  Constant: '<S291>/Constant1'
     *  Constant: '<S291>/Constant2'
     *  DataStoreRead: '<S291>/StatusByte_CT_SnsrCktLo'
     */
    rtb_VariantMerge_For_Variant_Source_V_dy = (((((sint32)
        HCDR_ac_DW.StatusByte_CT_SnsrCktLo) & 1) > 0) && ((((uint32)
        HCDR_ac_DW.StatusByte_CT_SnsrCktLo) & 64U) == 0U));

    /* VariantMerge generated from: '<S9>/Variant5' incorporates:
     *  Constant: '<S290>/Constant1'
     *  Constant: '<S290>/Constant2'
     *  DataStoreRead: '<S290>/StatusByte_CT_SnsrCktHi'
     */
    rtb_VariantMerge_For_Variant_Source_Va_p = (((((sint32)
        HCDR_ac_DW.StatusByte_CT_SnsrCktHi) & 1) > 0) && ((((uint32)
        HCDR_ac_DW.StatusByte_CT_SnsrCktHi) & 64U) == 0U));

#elif (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8)

    /* VariantMerge generated from: '<S9>/Variant4' incorporates:
     *  Inport: '<Root>/VeBSWR_b_CT_SnsrCktLo'
     */
    (void)Rte_Read_VeBSWR_b_CT_SnsrCktLo_Value
        (&rtb_VariantMerge_For_Variant_Source_V_dy);

    /* VariantMerge generated from: '<S9>/Variant5' incorporates:
     *  Inport: '<Root>/VeBSWR_b_CT_SnsrCktHi'
     */
    (void)Rte_Read_VeBSWR_b_CT_SnsrCktHi_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_p);

#endif

    /* End of S-Function (sfix_bitop): '<S291>/Bitwise Operator1' */

    /* S-Function (sfix_bitop): '<S294>/Bitwise Operator1' incorporates:
     *  Logic: '<S293>/Logical Operator'
     *  Logic: '<S294>/Logical Operator'
     *  RelationalOperator: '<S293>/Relational Operator1'
     *  RelationalOperator: '<S293>/Relational Operator2'
     *  RelationalOperator: '<S294>/Relational Operator1'
     *  RelationalOperator: '<S294>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S293>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S293>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S294>/Bitwise Operator2'
     *  SignalConversion generated from: '<S9>/Variant6'
     *  SignalConversion generated from: '<S9>/Variant7'
     */
#if (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8)

    /* VariantMerge generated from: '<S9>/Variant6' incorporates:
     *  Constant: '<S294>/Constant1'
     *  Constant: '<S294>/Constant2'
     *  DataStoreRead: '<S294>/StatusByte_ECT_Snsr4CktLo'
     */
    rtb_VariantMerge_For_Variant_Source_Va_d = (((((sint32)
        HCDR_ac_DW.StatusByte_ECT_Snsr4CktLo) & 1) > 0) && ((((uint32)
        HCDR_ac_DW.StatusByte_ECT_Snsr4CktLo) & 64U) == 0U));

    /* VariantMerge generated from: '<S9>/Variant7' incorporates:
     *  Constant: '<S293>/Constant1'
     *  Constant: '<S293>/Constant2'
     *  DataStoreRead: '<S293>/StatusByte_ECT_Snsr4CktHi'
     */
    rtb_VariantMerge_For_Variant_Source_Va_n = (((((sint32)
        HCDR_ac_DW.StatusByte_ECT_Snsr4CktHi) & 1) > 0) && ((((uint32)
        HCDR_ac_DW.StatusByte_ECT_Snsr4CktHi) & 64U) == 0U));

#elif (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8)

    /* VariantMerge generated from: '<S9>/Variant6' incorporates:
     *  Inport: '<Root>/VeBSWR_b_ECT_Snsr4CktLo'
     */
    (void)Rte_Read_VeBSWR_b_ECT_Snsr4CktLo_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_d);

    /* VariantMerge generated from: '<S9>/Variant7' incorporates:
     *  Inport: '<Root>/VeBSWR_b_ECT_Snsr4CktHi'
     */
    (void)Rte_Read_VeBSWR_b_ECT_Snsr4CktHi_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_n);

#endif

    /* End of S-Function (sfix_bitop): '<S294>/Bitwise Operator1' */

    /* S-Function (sfix_bitop): '<S289>/Bitwise Operator1' incorporates:
     *  Logic: '<S287>/Logical Operator'
     *  Logic: '<S289>/Logical Operator'
     *  RelationalOperator: '<S287>/Relational Operator1'
     *  RelationalOperator: '<S287>/Relational Operator2'
     *  RelationalOperator: '<S289>/Relational Operator1'
     *  RelationalOperator: '<S289>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S287>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S287>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S289>/Bitwise Operator2'
     *  SignalConversion generated from: '<S9>/Variant8'
     *  SignalConversion generated from: '<S9>/Variant9'
     */
#if (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8)

    /* VariantMerge generated from: '<S9>/Variant8' incorporates:
     *  Constant: '<S289>/Constant1'
     *  Constant: '<S289>/Constant2'
     *  DataStoreRead: '<S289>/StatusByte_CT3_SnsrCktLo'
     */
    rtb_VariantMerge_For_Variant_Source_Va_e = (((((sint32)
        HCDR_ac_DW.StatusByte_CT3_SnsrCktLo) & 1) > 0) && ((((uint32)
        HCDR_ac_DW.StatusByte_CT3_SnsrCktLo) & 64U) == 0U));

    /* VariantMerge generated from: '<S9>/Variant9' incorporates:
     *  Constant: '<S287>/Constant1'
     *  Constant: '<S287>/Constant2'
     *  DataStoreRead: '<S287>/StatusByte_BattCoolLvlSnsCkt'
     */
    rtb_VariantMerge_For_Variant_Source_Va_c = (((((sint32)
        HCDR_ac_DW.StatusByte_BattCoolLvlSnsCkt) & 1) > 0) && ((((uint32)
        HCDR_ac_DW.StatusByte_BattCoolLvlSnsCkt) & 64U) == 0U));

#elif (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8)

    /* VariantMerge generated from: '<S9>/Variant8' incorporates:
     *  Inport: '<Root>/VeBSWR_b_CT3_SnsrCktLo'
     */
    (void)Rte_Read_VeBSWR_b_CT3_SnsrCktLo_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_e);

    /* VariantMerge generated from: '<S9>/Variant9' incorporates:
     *  Inport: '<Root>/VeBSWR_b_BattCoolLvlSnsCkt'
     */
    (void)Rte_Read_VeBSWR_b_BattCoolLvlSnsCkt_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_c);

#endif

    /* End of S-Function (sfix_bitop): '<S289>/Bitwise Operator1' */

    /* S-Function (sfix_bitop): '<S288>/Bitwise Operator1' incorporates:
     *  Logic: '<S288>/Logical Operator'
     *  RelationalOperator: '<S288>/Relational Operator1'
     *  RelationalOperator: '<S288>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S288>/Bitwise Operator2'
     *  SignalConversion generated from: '<S9>/Variant10'
     */
#if (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (!Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8)

    /* VariantMerge generated from: '<S9>/Variant10' incorporates:
     *  Constant: '<S288>/Constant1'
     *  Constant: '<S288>/Constant2'
     *  DataStoreRead: '<S288>/StatusByte_CT3_SnsrCktHi'
     */
    rtb_VariantMerge_For_Variant_Source_Va_f = (((((sint32)
        HCDR_ac_DW.StatusByte_CT3_SnsrCktHi) & 1) > 0) && ((((uint32)
        HCDR_ac_DW.StatusByte_CT3_SnsrCktHi) & 64U) == 0U));

#elif (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_2) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_3) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4 && Rte_SysCon_Variant_HCDR_5) || (Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8)

    /* VariantMerge generated from: '<S9>/Variant10' incorporates:
     *  Inport: '<Root>/VeBSWR_b_CT3_SnsrCktHi'
     */
    (void)Rte_Read_VeBSWR_b_CT3_SnsrCktHi_Value
        (&rtb_VariantMerge_For_Variant_Source_Va_f);

#endif

    /* End of S-Function (sfix_bitop): '<S288>/Bitwise Operator1' */

    /* SignalConversion generated from: '<S4>/SysVltg_AD' */
#if (Rte_SysCon_Variant_HCDR_5 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_6 && Rte_SysCon_Variant_HCDR_9) || (Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9)

    /* VariantMerge generated from: '<S4>/SysVltg_AD' */
    rtb_VeHCDR_U_SysVltg_AD = VeHCDR_U_SysVltg_AD;

#elif !Rte_SysCon_Variant_HCDR_9 || (!Rte_SysCon_Variant_HCDR_5 && !Rte_SysCon_Variant_HCDR_6 && !Rte_SysCon_Variant_HCDR_8)

    /* VariantMerge generated from: '<S4>/SysVltg_AD' incorporates:
     *  SignalConversion generated from: '<S4>/SysVltg_AD'
     */
    rtb_VeHCDR_U_SysVltg_AD = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S4>/SysVltg_AD' */

    /* Outputs for Atomic SubSystem: '<S10>/Htr1_ECH_Diagnosis' */
#if Rte_SysCon_Variant_HCDR_5

    /* Outputs for Atomic SubSystem: '<S295>/Htr1_ECH_Diagnosis' */
    /* Outputs for Enabled SubSystem: '<S299>/Htr1_Diagnosis' incorporates:
     *  EnablePort: '<S301>/VeHTRR_b_Heater1Slct'
     */
    if (rtb_TmpSignalConversionAtVeHTRR_b_Heater)
    {
        /* S-Function (sfix_bitop): '<S302>/Bitwise Operator2' incorporates:
         *  DataStoreRead: '<S302>/StatusByte_LostCommCoolHtrA'
         *  S-Function (sfix_bitop): '<S425>/Bitwise Operator2'
         */
        rtb_LogicalOperator_ow_tmp = ((sint32)
            HCDR_ac_DW.StatusByte_LostCommCoolHtrA) & 1;

        /* S-Function (sfix_bitop): '<S302>/Bitwise Operator1' incorporates:
         *  DataStoreRead: '<S302>/StatusByte_LostCommCoolHtrA'
         *  S-Function (sfix_bitop): '<S425>/Bitwise Operator1'
         */
        rtb_VeHCDR_t_RealTimeClock_AD = ((uint32)
            HCDR_ac_DW.StatusByte_LostCommCoolHtrA) & 64U;

        /* Logic: '<S302>/Logical Operator' incorporates:
         *  Constant: '<S302>/Constant1'
         *  Constant: '<S302>/Constant2'
         *  RelationalOperator: '<S302>/Relational Operator1'
         *  RelationalOperator: '<S302>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S302>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S302>/Bitwise Operator2'
         */
        rtb_TmpSignalConversionAtVeBPCR_b_HV_Bat = ((rtb_LogicalOperator_ow_tmp >
            0) && (rtb_VeHCDR_t_RealTimeClock_AD == 0U));

        /* RelationalOperator: '<S307>/Comparison1' incorporates:
         *  Constant: '<S314>/Calib'
         */
        rtb_Comparison1_e = (rtb_TmpSignalConversionAtVeHTIR_P_HVC__h >
                             KeHCDR_W_ActPwr_ECH);

        /* Switch: '<S307>/Switch1' */
        if (rtb_TmpSignalConversionAtVeAATR_b_EstAmb)
        {
            /* Switch: '<S307>/Switch1' incorporates:
             *  Constant: '<S315>/Calib'
             */
            rtb_TmpSignalConversionAtVeACCR_n_CompSp =
                KeHCDR_t_Htr1AmbTempDelayTmrMax;
        }
        else
        {
            /* Switch: '<S307>/Switch1' incorporates:
             *  Lookup_n-D: '<S316>/Vector'
             *  SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp'
             */
            rtb_TmpSignalConversionAtVeACCR_n_CompSp = look1_iflf_binlca_16a
                (rtb_TmpSignalConversionAtVeAATR_T_EstAmb, ((const float32 *)
                  &(KxHCDR_t_Htr1AmbTmpDelayTmrLUT[0])), ((const float32 *)
                  &(KtHCDR_t_Htr1AmbTmpDelayTmrLUT[0])), 4U);
        }

        /* End of Switch: '<S307>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S307>/Turn On Delay Time' */
        /* Outputs for Atomic SubSystem: '<S317>/EdgeRising' */
        /* Logic: '<S318>/AND' incorporates:
         *  Logic: '<S318>/OR1'
         *  UnitDelay: '<S318>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTAIR_b_HghRfr = (rtb_Comparison1_e &&
            (!HCDR_ac_DW.UnitDelay_DSTATE_fy));

        /* Update for UnitDelay: '<S318>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_fy = rtb_Comparison1_e;

        /* End of Outputs for SubSystem: '<S317>/EdgeRising' */

        /* Switch: '<S317>/Switch1' incorporates:
         *  Constant: '<S313>/Calib'
         *  Constant: '<S317>/Constant Value1'
         *  Logic: '<S317>/OR'
         *  Logic: '<S317>/OR1'
         *  MinMax: '<S317>/Minimum'
         *  Sum: '<S317>/Summation'
         *  UnitDelay: '<S317>/Unit Delay'
         */
        if ((!rtb_Comparison1_e) || rtb_TmpSignalConversionAtVeTAIR_b_HghRfr)
        {
            HCDR_ac_DW.UnitDelay_DSTATE_l = 0.0F;
        }
        else
        {
            HCDR_ac_DW.UnitDelay_DSTATE_l = fminf
                (rtb_TmpSignalConversionAtVeACCR_n_CompSp, HeHCDR_t_MedTEH +
                 HCDR_ac_DW.UnitDelay_DSTATE_l);
        }

        /* End of Switch: '<S317>/Switch1' */
        /* End of Outputs for SubSystem: '<S307>/Turn On Delay Time' */

        /* SignalConversion generated from: '<S304>/Variant Source' */
#if Rte_SysCon_Variant_HCDR_13

        /* VariantMerge generated from: '<S304>/Variant Source' incorporates:
         *  Constant: '<S446>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_V_at =
            KeHCDR_e_Htr1_DifferentLINBusOff_Slct;

#else

        /* VariantMerge generated from: '<S304>/Variant Source' incorporates:
         *  Constant: '<S445>/Calib'
         *  SignalConversion generated from: '<S304>/Variant Source'
         */
        rtb_VariantMerge_For_Variant_Source_V_at = HeHCDR_e_Htr1_LINBusOff_Slct;

#endif

        /* End of SignalConversion generated from: '<S304>/Variant Source' */

        /* MultiPortSwitch: '<S304>/Multiport Switch2' incorporates:
         *  VariantMerge generated from: '<S304>/Variant Source'
         */
        switch (rtb_VariantMerge_For_Variant_Source_V_at)
        {
          case CeHCDR_e_LIN1_BusOff:
            /* MultiPortSwitch: '<S304>/Multiport Switch2' incorporates:
             *  Constant: '<S442>/Constant1'
             *  Constant: '<S442>/Constant2'
             *  DataStoreRead: '<S442>/StatusByte_LIN1_BusOff'
             *  Logic: '<S442>/Logical Operator'
             *  RelationalOperator: '<S442>/Relational Operator1'
             *  RelationalOperator: '<S442>/Relational Operator2'
             *  S-Function (sfix_bitop): '<S442>/Bitwise Operator1'
             *  S-Function (sfix_bitop): '<S442>/Bitwise Operator2'
             */
            rtb_TmpSignalConversionAtVeTAIR_b_HghRfr = (((((sint32)
                HCDR_ac_DW.StatusByte_LIN1_BusOff) & 1) > 0) && ((((uint32)
                HCDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) == 0U));
            break;

          case CeHCDR_e_LIN2_BusOff:
            /* MultiPortSwitch: '<S304>/Multiport Switch2' incorporates:
             *  Constant: '<S443>/Constant1'
             *  Constant: '<S443>/Constant2'
             *  DataStoreRead: '<S443>/StatusByte_LIN2_BusOff'
             *  Logic: '<S443>/Logical Operator'
             *  RelationalOperator: '<S443>/Relational Operator1'
             *  RelationalOperator: '<S443>/Relational Operator2'
             *  S-Function (sfix_bitop): '<S443>/Bitwise Operator1'
             *  S-Function (sfix_bitop): '<S443>/Bitwise Operator2'
             */
            rtb_TmpSignalConversionAtVeTAIR_b_HghRfr = (((((sint32)
                HCDR_ac_DW.StatusByte_LIN2_BusOff) & 1) > 0) && ((((uint32)
                HCDR_ac_DW.StatusByte_LIN2_BusOff) & 64U) == 0U));
            break;

          default:
            /* MultiPortSwitch: '<S304>/Multiport Switch2' incorporates:
             *  Constant: '<S444>/Constant1'
             *  Constant: '<S444>/Constant2'
             *  DataStoreRead: '<S444>/StatusByte_LIN3_BusOff'
             *  Logic: '<S444>/Logical Operator'
             *  RelationalOperator: '<S444>/Relational Operator1'
             *  RelationalOperator: '<S444>/Relational Operator2'
             *  S-Function (sfix_bitop): '<S444>/Bitwise Operator1'
             *  S-Function (sfix_bitop): '<S444>/Bitwise Operator2'
             */
            rtb_TmpSignalConversionAtVeTAIR_b_HghRfr = (((((sint32)
                HCDR_ac_DW.StatusByte_LIN3_BusOff) & 1) > 0) && ((((uint32)
                HCDR_ac_DW.StatusByte_LIN3_BusOff) & 64U) == 0U));
            break;
        }

        /* End of MultiPortSwitch: '<S304>/Multiport Switch2' */

        /* S-Function (sfix_bitop): '<S393>/Bitwise Operator2' incorporates:
         *  Logic: '<S359>/AND13'
         *  Logic: '<S359>/AND15'
         *  Logic: '<S359>/AND16'
         *  Logic: '<S359>/AND2'
         *  Logic: '<S359>/AND3'
         *  Logic: '<S359>/AND4'
         *  Logic: '<S359>/AND6'
         *  Logic: '<S359>/AND8'
         *  Logic: '<S390>/Logical Operator'
         *  Logic: '<S391>/Logical Operator'
         *  Logic: '<S393>/Logical Operator'
         *  Logic: '<S394>/Logical Operator'
         *  RelationalOperator: '<S390>/Relational Operator1'
         *  RelationalOperator: '<S390>/Relational Operator2'
         *  RelationalOperator: '<S391>/Relational Operator1'
         *  RelationalOperator: '<S391>/Relational Operator2'
         *  RelationalOperator: '<S393>/Relational Operator1'
         *  RelationalOperator: '<S393>/Relational Operator2'
         *  RelationalOperator: '<S394>/Relational Operator1'
         *  RelationalOperator: '<S394>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S390>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S390>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S391>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S391>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S393>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S394>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S394>/Bitwise Operator2'
         */
#if Rte_SysCon_Variant_HCDR_4

        /* Logic: '<S359>/AND15' incorporates:
         *  Constant: '<S393>/Constant1'
         *  Constant: '<S393>/Constant2'
         *  DataStoreRead: '<S393>/StatusByte_HB_PSC_CtrlValCCktPerf'
         */
        rtb_AND15_p = (((((sint32)HCDR_ac_DW.StatusByte_HB_PSC_CtrlValCCktPerf)
                         & 1) <= 0) || ((((uint32)
                          HCDR_ac_DW.StatusByte_HB_PSC_CtrlValCCktPerf) & 64U)
                        != 0U));

        /* Logic: '<S359>/AND16' incorporates:
         *  Constant: '<S394>/Constant1'
         *  Constant: '<S394>/Constant2'
         *  DataStoreRead: '<S394>/StatusByte_LostCommHB_PSCCooCtrlVlvC'
         */
        rtb_AND16_d = (((((sint32)
                          HCDR_ac_DW.StatusByte_LostCommHB_PSCCooCtrlVlvC) & 1) <=
                        0) || ((((uint32)
                          HCDR_ac_DW.StatusByte_LostCommHB_PSCCooCtrlVlvC) & 64U)
                               != 0U));

        /* Logic: '<S359>/AND8' */
        rtb_AND8_o = !rtb_VariantMerge_For_Variant_Source_V_dy;

        /* Logic: '<S359>/AND13' */
        rtb_AND13_b = !rtb_VariantMerge_For_Variant_Source_Va_p;

        /* Logic: '<S359>/AND4' incorporates:
         *  Constant: '<S391>/Constant1'
         *  Constant: '<S391>/Constant2'
         *  DataStoreRead: '<S391>/StatusByte_CT_SnsrPerf'
         */
        rtb_AND4_h = (((((sint32)HCDR_ac_DW.StatusByte_CT_SnsrPerf) & 1) <= 0) ||
                      ((((uint32)HCDR_ac_DW.StatusByte_CT_SnsrPerf) & 64U) != 0U));

        /* Logic: '<S359>/AND2' */
        rtb_AND2_h = !rtb_VariantMerge_For_Variant_Source_Va_e;

        /* Logic: '<S359>/AND3' */
        rtb_AND3_e2 = !rtb_VariantMerge_For_Variant_Source_Va_f;

        /* Logic: '<S359>/AND6' incorporates:
         *  Constant: '<S390>/Constant1'
         *  Constant: '<S390>/Constant2'
         *  DataStoreRead: '<S390>/StatusByte_CT3_SnsrPerf'
         */
        rtb_AND6_b = (((((sint32)HCDR_ac_DW.StatusByte_CT3_SnsrPerf) & 1) <= 0) ||
                      ((((uint32)HCDR_ac_DW.StatusByte_CT3_SnsrPerf) & 64U) !=
                       0U));

#endif

        /* End of S-Function (sfix_bitop): '<S393>/Bitwise Operator2' */

        /* Logic: '<S359>/AND14' incorporates:
         *  Logic: '<S359>/AND1'
         *  Logic: '<S359>/AND10'
         *  Logic: '<S359>/AND11'
         *  Logic: '<S359>/AND12'
         *  Logic: '<S359>/AND17'
         *  Logic: '<S359>/AND18'
         *  Logic: '<S359>/AND19'
         *  Logic: '<S359>/AND20'
         *  Logic: '<S359>/AND21'
         *  Logic: '<S359>/AND22'
         *  Logic: '<S359>/AND23'
         *  Logic: '<S359>/AND5'
         *  Logic: '<S359>/AND7'
         *  Logic: '<S359>/AND9'
         *  Logic: '<S387>/Logical Operator'
         *  Logic: '<S388>/Logical Operator'
         *  Logic: '<S389>/Logical Operator'
         *  Logic: '<S392>/Logical Operator'
         *  Logic: '<S395>/Logical Operator'
         *  RelationalOperator: '<S387>/Relational Operator1'
         *  RelationalOperator: '<S387>/Relational Operator2'
         *  RelationalOperator: '<S388>/Relational Operator1'
         *  RelationalOperator: '<S388>/Relational Operator2'
         *  RelationalOperator: '<S389>/Relational Operator1'
         *  RelationalOperator: '<S389>/Relational Operator2'
         *  RelationalOperator: '<S392>/Relational Operator1'
         *  RelationalOperator: '<S392>/Relational Operator2'
         *  RelationalOperator: '<S395>/Relational Operator1'
         *  RelationalOperator: '<S395>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S387>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S387>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S388>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S388>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S389>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S389>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S392>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S392>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S395>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S395>/Bitwise Operator2'
         */
#if Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4

        /* Logic: '<S311>/Logical Operator8' incorporates:
         *  Constant: '<S392>/Constant1'
         *  Constant: '<S392>/Constant2'
         *  Constant: '<S396>/Calib'
         *  DataStoreRead: '<S392>/StatusByte_ECT_Snsr4CktPerf'
         */
        rtb_LogicalOperator8_g = ((((!rtb_VariantMerge_For_Variant_Source_Va_d) &&
            (!rtb_VariantMerge_For_Variant_Source_Va_n)) && (((((sint32)
            HCDR_ac_DW.StatusByte_ECT_Snsr4CktPerf) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_ECT_Snsr4CktPerf) & 64U) != 0U))) &&
            ((rtb_TmpSignalConversionAtVeTMIR_b_MainRl ||
              (KeHCDR_b_RlyCmdEnbl_OV)) && (!rtb_LogicalOperator_gvk)));

#elif !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_4

        /* Logic: '<S311>/Logical Operator8' incorporates:
         *  Constant: '<S387>/Constant1'
         *  Constant: '<S387>/Constant2'
         *  Constant: '<S388>/Constant1'
         *  Constant: '<S388>/Constant2'
         *  Constant: '<S389>/Constant1'
         *  Constant: '<S389>/Constant2'
         *  Constant: '<S395>/Constant1'
         *  Constant: '<S395>/Constant2'
         *  Constant: '<S397>/Calib'
         *  DataStoreRead: '<S387>/StatusByte_CT2_SnsrCktHi'
         *  DataStoreRead: '<S388>/StatusByte_CT2_SnsrCktLo'
         *  DataStoreRead: '<S389>/StatusByte_CT2_SnsrPerf'
         *  DataStoreRead: '<S395>/StatusByte_ThrmlRlyCtrlCkt'
         *  Logic: '<S359>/AND17'
         *  Logic: '<S359>/AND18'
         *  Logic: '<S359>/AND19'
         *  Logic: '<S359>/AND20'
         *  Logic: '<S359>/AND21'
         *  Logic: '<S359>/AND22'
         *  Logic: '<S359>/AND23'
         *  Logic: '<S387>/Logical Operator'
         *  Logic: '<S388>/Logical Operator'
         *  Logic: '<S389>/Logical Operator'
         *  Logic: '<S395>/Logical Operator'
         *  RelationalOperator: '<S387>/Relational Operator1'
         *  RelationalOperator: '<S387>/Relational Operator2'
         *  RelationalOperator: '<S388>/Relational Operator1'
         *  RelationalOperator: '<S388>/Relational Operator2'
         *  RelationalOperator: '<S389>/Relational Operator1'
         *  RelationalOperator: '<S389>/Relational Operator2'
         *  RelationalOperator: '<S395>/Relational Operator1'
         *  RelationalOperator: '<S395>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S387>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S387>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S388>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S388>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S389>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S389>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S395>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S395>/Bitwise Operator2'
         */
        rtb_LogicalOperator8_g = (((((((sint32)
            HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) != 0U)) ||
            (KeHCDR_b_ThrmlRlyCtrlCkt_FA_OV)) && (((((((sint32)
            HCDR_ac_DW.StatusByte_CT2_SnsrPerf) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_CT2_SnsrPerf) & 64U) != 0U)) && (((((sint32)
            HCDR_ac_DW.StatusByte_CT2_SnsrCktLo) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_CT2_SnsrCktLo) & 64U) != 0U))) && (((((sint32)
            HCDR_ac_DW.StatusByte_CT2_SnsrCktHi) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_CT2_SnsrCktHi) & 64U) != 0U))));

#endif

        /* End of Logic: '<S359>/AND14' */

        /* Logic: '<S359>/Logical Operator' incorporates:
         *  Logic: '<S360>/AND1'
         *  Logic: '<S360>/AND3'
         *  Logic: '<S360>/AND4'
         *  Logic: '<S360>/Logical Operator'
         *  Logic: '<S360>/Logical13'
         *  Logic: '<S360>/Logical2'
         *  Logic: '<S360>/Logical3'
         *  Logic: '<S404>/Logical Operator'
         *  Logic: '<S405>/Logical Operator'
         *  Logic: '<S406>/Logical Operator'
         *  RelationalOperator: '<S404>/Relational Operator1'
         *  RelationalOperator: '<S404>/Relational Operator2'
         *  RelationalOperator: '<S405>/Relational Operator1'
         *  RelationalOperator: '<S405>/Relational Operator2'
         *  RelationalOperator: '<S406>/Relational Operator1'
         *  RelationalOperator: '<S406>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S404>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S404>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S405>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S405>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S406>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S406>/Bitwise Operator2'
         *  Switch: '<S360>/Switch'
         */
#if Rte_SysCon_Variant_HCDR_4

        /* Logic: '<S311>/Logical Operator9' */
        rtb_LogicalOperator9_g = ((((((((rtb_AND15_p && rtb_AND16_d) &&
            rtb_AND8_o) && rtb_AND13_b) && rtb_AND4_h) && rtb_AND2_h) &&
            rtb_AND3_e2) && rtb_AND6_b) && rtb_LogicalOperator8_g);

#else

        /* Switch: '<S360>/Switch' incorporates:
         *  Constant: '<S414>/Calib'
         *  Inport: '<Root>/VeRCVR_b_HT_Shtoff_VlvCmd'
         *  Inport: '<Root>/VeRCVR_e_HT_Shtoff_VlvSts'
         */
        if (KeHCDR_b_HTSO_VlvChk_AppSel)
        {
            (void)Rte_Read_VeRCVR_b_HT_Shtoff_VlvCmd_Value(&tmpRead_y);

            /* Logic: '<S311>/Logical Operator8' incorporates:
             *  Constant: '<S399>/Constant1'
             *  Constant: '<S399>/Constant2'
             *  Constant: '<S400>/Constant1'
             *  Constant: '<S400>/Constant2'
             *  Constant: '<S401>/Constant1'
             *  Constant: '<S401>/Constant2'
             *  Constant: '<S402>/Constant1'
             *  Constant: '<S402>/Constant2'
             *  Constant: '<S403>/Constant1'
             *  Constant: '<S403>/Constant2'
             *  Constant: '<S409>/Calib'
             *  Constant: '<S410>/Calib'
             *  Constant: '<S411>/Calib'
             *  Constant: '<S412>/Calib'
             *  Constant: '<S413>/Calib'
             *  Constant: '<S416>/Calib'
             *  DataStoreRead: '<S399>/StatusByte_CoolantVlvB_CktHi'
             *  DataStoreRead: '<S400>/StatusByte_CoolantVlvB_CktLo'
             *  DataStoreRead: '<S401>/StatusByte_CoolantVlvB_Ckt'
             *  DataStoreRead: '<S402>/StatusByte_CoolantVlvB_StkClsd'
             *  DataStoreRead: '<S403>/StatusByte_CoolantVlvB_StkOpn'
             *  Inport: '<Root>/VeRCVR_b_HT_Shtoff_VlvCmd'
             *  Logic: '<S360>/AND10'
             *  Logic: '<S360>/AND11'
             *  Logic: '<S360>/AND12'
             *  Logic: '<S360>/AND7'
             *  Logic: '<S360>/AND9'
             *  Logic: '<S360>/Logical14'
             *  Logic: '<S360>/Logical15'
             *  Logic: '<S360>/Logical16'
             *  Logic: '<S360>/Logical18'
             *  Logic: '<S360>/Logical19'
             *  Logic: '<S360>/Logical20'
             *  Logic: '<S360>/Logical21'
             *  Logic: '<S399>/Logical Operator'
             *  Logic: '<S400>/Logical Operator'
             *  Logic: '<S401>/Logical Operator'
             *  Logic: '<S402>/Logical Operator'
             *  Logic: '<S403>/Logical Operator'
             *  RelationalOperator: '<S360>/Comparison9'
             *  RelationalOperator: '<S399>/Relational Operator1'
             *  RelationalOperator: '<S399>/Relational Operator2'
             *  RelationalOperator: '<S400>/Relational Operator1'
             *  RelationalOperator: '<S400>/Relational Operator2'
             *  RelationalOperator: '<S401>/Relational Operator1'
             *  RelationalOperator: '<S401>/Relational Operator2'
             *  RelationalOperator: '<S402>/Relational Operator1'
             *  RelationalOperator: '<S402>/Relational Operator2'
             *  RelationalOperator: '<S403>/Relational Operator1'
             *  RelationalOperator: '<S403>/Relational Operator2'
             *  S-Function (sfix_bitop): '<S399>/Bitwise Operator1'
             *  S-Function (sfix_bitop): '<S399>/Bitwise Operator2'
             *  S-Function (sfix_bitop): '<S400>/Bitwise Operator1'
             *  S-Function (sfix_bitop): '<S400>/Bitwise Operator2'
             *  S-Function (sfix_bitop): '<S401>/Bitwise Operator1'
             *  S-Function (sfix_bitop): '<S401>/Bitwise Operator2'
             *  S-Function (sfix_bitop): '<S402>/Bitwise Operator1'
             *  S-Function (sfix_bitop): '<S402>/Bitwise Operator2'
             *  S-Function (sfix_bitop): '<S403>/Bitwise Operator1'
             *  S-Function (sfix_bitop): '<S403>/Bitwise Operator2'
             */
            rtb_LogicalOperator8_g = ((((((tmpRead_y ||
                (KeHCDR_b_HTShtoff_VlvCmd_Chk_OV)) && ((((((sint32)
                HCDR_ac_DW.StatusByte_CoolantVlvB_StkOpn) & 1) <= 0) ||
                ((((uint32)HCDR_ac_DW.StatusByte_CoolantVlvB_StkOpn) & 64U) !=
                 0U)) || (KeHCDR_b_HTSO_StckOpnFA_OV))) && ((((((sint32)
                HCDR_ac_DW.StatusByte_CoolantVlvB_StkClsd) & 1) <= 0) ||
                ((((uint32)HCDR_ac_DW.StatusByte_CoolantVlvB_StkClsd) & 64U) !=
                 0U)) || (KeHCDR_b_HTSO_StckClsdFA_OV))) && ((((((sint32)
                HCDR_ac_DW.StatusByte_CoolantVlvB_Ckt) & 1) <= 0) || ((((uint32)
                HCDR_ac_DW.StatusByte_CoolantVlvB_Ckt) & 64U) != 0U)) ||
                (KeHCDR_b_HTSO_CktFA_OV))) && ((((((sint32)
                HCDR_ac_DW.StatusByte_CoolantVlvB_CktLo) & 1) <= 0) ||
                ((((uint32)HCDR_ac_DW.StatusByte_CoolantVlvB_CktLo) & 64U) != 0U))
                || (KeHCDR_b_HTSO_CktLoFA_OV))) && ((((((sint32)
                HCDR_ac_DW.StatusByte_CoolantVlvB_CktHi) & 1) <= 0) ||
                ((((uint32)HCDR_ac_DW.StatusByte_CoolantVlvB_CktHi) & 64U) != 0U))
                || (KeHCDR_b_HTSO_CktHiFA_OV)));
        }
        else
        {
            (void)Rte_Read_VeRCVR_e_HT_Shtoff_VlvSts_Value(&tmpRead_z);

            /* Logic: '<S311>/Logical Operator8' incorporates:
             *  Constant: '<S398>/Constant'
             *  Constant: '<S415>/Calib'
             *  Inport: '<Root>/VeRCVR_e_HT_Shtoff_VlvSts'
             *  Logic: '<S360>/Logical17'
             *  RelationalOperator: '<S360>/Comparison10'
             */
            rtb_LogicalOperator8_g = ((((uint32)tmpRead_z) ==
                CeRCVR_e_Vlv_Energize) || (KeHCDR_b_HTSO_VlvSts_OV));
        }

        /* Logic: '<S311>/Logical Operator9' incorporates:
         *  Constant: '<S404>/Constant1'
         *  Constant: '<S404>/Constant2'
         *  Constant: '<S405>/Constant1'
         *  Constant: '<S405>/Constant2'
         *  Constant: '<S406>/Constant1'
         *  Constant: '<S406>/Constant2'
         *  Constant: '<S407>/Calib'
         *  Constant: '<S408>/Calib'
         *  Constant: '<S417>/Calib'
         *  DataStoreRead: '<S404>/StatusByte_ECH_TempIn'
         *  DataStoreRead: '<S405>/StatusByte_ECH_TempOut'
         *  DataStoreRead: '<S406>/StatusByte_ThrmlRlyCtrlCkt'
         *  Logic: '<S360>/AND1'
         *  Logic: '<S360>/AND3'
         *  Logic: '<S360>/AND4'
         *  Logic: '<S360>/Logical Operator'
         *  Logic: '<S360>/Logical13'
         *  Logic: '<S360>/Logical2'
         *  Logic: '<S360>/Logical3'
         *  Logic: '<S404>/Logical Operator'
         *  Logic: '<S405>/Logical Operator'
         *  Logic: '<S406>/Logical Operator'
         *  RelationalOperator: '<S404>/Relational Operator1'
         *  RelationalOperator: '<S404>/Relational Operator2'
         *  RelationalOperator: '<S405>/Relational Operator1'
         *  RelationalOperator: '<S405>/Relational Operator2'
         *  RelationalOperator: '<S406>/Relational Operator1'
         *  RelationalOperator: '<S406>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S404>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S404>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S405>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S405>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S406>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S406>/Bitwise Operator2'
         */
        rtb_LogicalOperator9_g = (((((((((sint32)
            HCDR_ac_DW.StatusByte_ECH_TempOut) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_ECH_TempOut) & 64U) != 0U)) ||
            (KeHCDR_b_ECH_Outlet_Fault_OV)) && ((((((sint32)
            HCDR_ac_DW.StatusByte_ECH_TempIn) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_ECH_TempIn) & 64U) != 0U)) ||
            (KeHCDR_b_ECH_Inlet_Fault_OV))) && rtb_LogicalOperator8_g) &&
            ((KeHCDR_b_ThrmlRlyCtrlCkt_FA_OV) || (((((sint32)
            HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) != 0U))));

#endif

        /* End of Logic: '<S359>/Logical Operator' */

        /* Inport: '<Root>/VeHTIR_T_HVC_HtrClntIn_Temp' */
        (void)Rte_Read_VeHTIR_T_HVC_HtrClntIn_Temp_Value(&tmpRead_x);

        /* Inport: '<Root>/VeHTRR_T_HVC_HtrTempTgt' */
        (void)Rte_Read_VeHTRR_T_HVC_HtrTempTgt_Value(&tmpRead_w);

        /* Logic: '<S311>/Logical Operator9' incorporates:
         *  Constant: '<S361>/Constant'
         *  Constant: '<S362>/Constant'
         *  Constant: '<S363>/Constant1'
         *  Constant: '<S363>/Constant2'
         *  Constant: '<S364>/Constant1'
         *  Constant: '<S364>/Constant2'
         *  Constant: '<S365>/Calib'
         *  Constant: '<S366>/Calib'
         *  Constant: '<S367>/Calib'
         *  Constant: '<S368>/Calib'
         *  Constant: '<S369>/Calib'
         *  Constant: '<S370>/Calib'
         *  Constant: '<S371>/Calib'
         *  DataStoreRead: '<S363>/StatusByte_CoolPmpACtrlCktPerf'
         *  DataStoreRead: '<S364>/StatusByte_LostCommCoolPmpA'
         *  Logic: '<S310>/Logical'
         *  Logic: '<S357>/AND13'
         *  Logic: '<S357>/AND5'
         *  Logic: '<S357>/AND6'
         *  Logic: '<S357>/AND8'
         *  Logic: '<S357>/Logical Operator'
         *  Logic: '<S357>/Logical Operator1'
         *  Logic: '<S357>/Logical Operator2'
         *  Logic: '<S357>/Logical Operator6'
         *  Logic: '<S357>/Logical Operator7'
         *  Logic: '<S357>/Logical2'
         *  Logic: '<S357>/Logical4'
         *  Logic: '<S357>/Logical5'
         *  Logic: '<S363>/Logical Operator'
         *  Logic: '<S364>/Logical Operator'
         *  RelationalOperator: '<S357>/Comparison12'
         *  RelationalOperator: '<S357>/Relational Operator'
         *  RelationalOperator: '<S357>/Relational Operator1'
         *  RelationalOperator: '<S357>/Relational Operator2'
         *  RelationalOperator: '<S363>/Relational Operator1'
         *  RelationalOperator: '<S363>/Relational Operator2'
         *  RelationalOperator: '<S364>/Relational Operator1'
         *  RelationalOperator: '<S364>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S363>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S363>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S364>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S364>/Bitwise Operator2'
         *  SignalConversion generated from: '<S1>/VeBPCR_e_HV_BatCntctrStat'
         *  SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl'
         */
        rtb_LogicalOperator9_g = ((((((((((((uint32)
            rtb_TmpSignalConversionAtVePMTR_e_ThrmlD) !=
            CePMTR_e_DISBL_All_Thrml) || (KeHCDR_b_HVC_Heater_Diag_ThrmlEnbl)) &&
            (((rtb_VeHCDR_U_SysVltg_AD <= KeHCDR_U_Htr1_SysVltg_Max) &&
              (rtb_VeHCDR_U_SysVltg_AD >= KeHCDR_U_Htr1_SysVltg_Min)) ||
             (KeHCDR_b_Htr1_SysVltg_OV))) &&
            rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) &&
            ((!rtb_TmpSignalConversionAtVeBPCR_b_HV_Bat) ||
             (KeHCDR_b_LossCommECH_Fault_OV))) &&
            ((!rtb_TmpSignalConversionAtVeTAIR_b_HghRfr) ||
             (KeHCDR_b_BussOff_Fault_OV))) && (((((sint32)
            HCDR_ac_DW.StatusByte_LostCommCoolPmpA) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_LostCommCoolPmpA) & 64U) != 0U))) &&
            (((((sint32)HCDR_ac_DW.StatusByte_CoolPmpACtrlCktPerf) & 1) <= 0) ||
             ((((uint32)HCDR_ac_DW.StatusByte_CoolPmpACtrlCktPerf) & 64U) != 0U)))
            && (((((uint32)rtb_TmpSignalConversionAtVeBPCR_e_HV_Bat) ==
                  CeHVTR_e_Closed) && rtb_VariantMergeForOutportLeHCDR_b_BatCn) ||
                (KeHCDR_b_Htr1HV_BatCntctrStat_OV))) && rtb_LogicalOperator9_g);

        /* Logic: '<S358>/Logical5' */
        rtb_VariantMerge_For_Variant_Source_V_dy = (rtb_LogicalOperator9_g &&
            rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht);

        /* Outputs for Atomic SubSystem: '<S358>/Turn On Delay Time' */
        /* Outputs for Atomic SubSystem: '<S385>/EdgeRising' */
        /* Logic: '<S386>/AND' incorporates:
         *  Logic: '<S386>/OR1'
         *  UnitDelay: '<S386>/Unit Delay'
         */
        rtb_VariantMerge_For_Variant_Source_Va_p =
            (rtb_VariantMerge_For_Variant_Source_V_dy &&
             (!HCDR_ac_DW.UnitDelay_DSTATE_om));

        /* Update for UnitDelay: '<S386>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_om =
            rtb_VariantMerge_For_Variant_Source_V_dy;

        /* End of Outputs for SubSystem: '<S385>/EdgeRising' */

        /* Switch: '<S385>/Switch1' incorporates:
         *  Constant: '<S375>/Calib'
         *  Constant: '<S384>/Calib'
         *  Constant: '<S385>/Constant Value1'
         *  Logic: '<S385>/OR'
         *  Logic: '<S385>/OR1'
         *  MinMax: '<S385>/Minimum'
         *  Sum: '<S385>/Summation'
         *  UnitDelay: '<S385>/Unit Delay'
         */
        if ((!rtb_VariantMerge_For_Variant_Source_V_dy) ||
                rtb_VariantMerge_For_Variant_Source_Va_p)
        {
            HCDR_ac_DW.UnitDelay_DSTATE_c = 0.0F;
        }
        else
        {
            HCDR_ac_DW.UnitDelay_DSTATE_c = fminf(KeHCDR_t_Htr1PwrActFA_WaitTime,
                HeHCDR_t_MedTEH + HCDR_ac_DW.UnitDelay_DSTATE_c);
        }

        /* End of Switch: '<S385>/Switch1' */
        /* End of Outputs for SubSystem: '<S358>/Turn On Delay Time' */

        /* Inport: '<Root>/VeHTIR_b_HVC_HtrPwrExpectd_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_HtrPwrExpectd_FA_Value(&tmpRead_v);

        /* Inport: '<Root>/VeHTIR_P_HVC_HtrPwrExpectd' */
        (void)Rte_Read_VeHTIR_P_HVC_HtrPwrExpectd_Value(&tmpRead_u);

        /* Inport: '<Root>/VeHTIR_b_HVC_HtrClntIn_Temp_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_HtrClntIn_Temp_FA_Value(&tmpRead_t);

        /* Inport: '<Root>/VeHTIR_b_HVC_HtrClntOut_Temp_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_HtrClntOut_Temp_FA_Value(&tmpRead_s);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr_LIN_ResErr' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr_LIN_ResErr_Value(&tmpRead_r);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr_HV_CrntAct_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr_HV_CrntAct_FA_Value(&tmpRead_q);

        /* Inport: '<Root>/VeHTIR_I_HVC_Htr_HV_CrntAct' */
        (void)Rte_Read_VeHTIR_I_HVC_Htr_HV_CrntAct_Value(&tmpRead_p);

        /* Inport: '<Root>/VeHTIR_b_HVC_HtrProcesMemory_Flt_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_HtrProcesMemory_Flt_FA_Value(&tmpRead_o);

        /* Inport: '<Root>/VeHTIR_e_HVC_HtrProcesMemory_Flt' */
        (void)Rte_Read_VeHTIR_e_HVC_HtrProcesMemory_Flt_Value(&tmpRead_n);

        /* Inport: '<Root>/VeHTIR_b_HVC_HtrDrvFlt_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_HtrDrvFlt_FA_Value(&tmpRead_m);

        /* Inport: '<Root>/VeHTIR_e_HVC_HtrDrvFlt' */
        (void)Rte_Read_VeHTIR_e_HVC_HtrDrvFlt_Value(&tmpRead_l);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr_HV_CrntOutofRng_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr_HV_CrntOutofRng_FA_Value(&tmpRead_k);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr_HV_CrntOutofRng' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr_HV_CrntOutofRng_Value(&tmpRead_j);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr_DCDC_VltgOutofRng_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr_DCDC_VltgOutofRng_FA_Value(&tmpRead_i);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng_Value(&tmpRead_h);

        /* Inport: '<Root>/VeHTIR_b_HVC_HtrCoreTemp_SensFlt_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_HtrCoreTemp_SensFlt_FA_Value(&tmpRead_g);

        /* Inport: '<Root>/VeHTIR_e_HVC_HtrCoreTemp_SensFlt' */
        (void)Rte_Read_VeHTIR_e_HVC_HtrCoreTemp_SensFlt_Value(&tmpRead_f);

        /* Inport: '<Root>/VeHTIR_b_HVC_HtrClntIn_TempSensFlt_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_HtrClntIn_TempSensFlt_FA_Value(&tmpRead_e);

        /* Inport: '<Root>/VeHTIR_e_HVC_HtrClntIn_TempSensFlt' */
        (void)Rte_Read_VeHTIR_e_HVC_HtrClntIn_TempSensFlt_Value(&tmpRead_d);

        /* Inport: '<Root>/VeHTIR_b_HVC_HtrClntOut_TempSensFlt_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_HtrClntOut_TempSensFlt_FA_Value(&tmpRead_c);

        /* Inport: '<Root>/VeHTIR_e_HVC_HtrClntOut_TempSensFlt' */
        (void)Rte_Read_VeHTIR_e_HVC_HtrClntOut_TempSensFlt_Value(&tmpRead_b);

        /* Inport: '<Root>/VeHTIR_b_HVC_HtrSelfProtect_Actv_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_HtrSelfProtect_Actv_FA_Value(&tmpRead_a);

        /* Inport: '<Root>/VeHTIR_e_HVC_HtrSelfProtect_Actv' */
        (void)Rte_Read_VeHTIR_e_HVC_HtrSelfProtect_Actv_Value(&tmpRead_9);

        /* Inport: '<Root>/VeHTIR_b_HVC_HtrResis_PCB_OvrTemp_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_HtrResis_PCB_OvrTemp_FA_Value(&tmpRead_8);

        /* Inport: '<Root>/VeHTIR_e_HVC_HtrResis_PCB_OvrTemp' */
        (void)Rte_Read_VeHTIR_e_HVC_HtrResis_PCB_OvrTemp_Value(&tmpRead_7);

        /* Inport: '<Root>/VeHTIR_b_HVC_HtrIntCom_Err_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_HtrIntCom_Err_FA_Value(&tmpRead_6);

        /* Inport: '<Root>/VeHTIR_e_HVC_HtrIntCom_Err' */
        (void)Rte_Read_VeHTIR_e_HVC_HtrIntCom_Err_Value(&tmpRead_5);

        /* Inport: '<Root>/VeHTIR_b_HVC_HtrClntTemp_OutofRng_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_HtrClntTemp_OutofRng_FA_Value(&tmpRead_4);

        /* Inport: '<Root>/VeHTIR_e_HVC_HtrClntTemp_OutofRng' */
        (void)Rte_Read_VeHTIR_e_HVC_HtrClntTemp_OutofRng_Value(&tmpRead_3);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr_LV_OutofRng_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr_LV_OutofRng_FA_Value(&tmpRead_2);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr_LV_OutofRng' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr_LV_OutofRng_Value(&tmpRead_1);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr_HV_OutofRng_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr_HV_OutofRng_FA_Value(&tmpRead_0);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr_HV_OutofRng' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr_HV_OutofRng_Value(&tmpRead);

        /* Outputs for Atomic SubSystem: '<S358>/Turn On Delay Time' */
        /* Logic: '<S385>/AND' incorporates:
         *  Constant: '<S384>/Calib'
         *  RelationalOperator: '<S385>/Greater  Than'
         *  UnitDelay: '<S385>/Unit Delay'
         */
        rtb_VariantMerge_For_Variant_Source_V_dy =
            (rtb_VariantMerge_For_Variant_Source_V_dy &&
             (HCDR_ac_DW.UnitDelay_DSTATE_c >= KeHCDR_t_Htr1PwrActFA_WaitTime));

        /* End of Outputs for SubSystem: '<S358>/Turn On Delay Time' */

        /* Outputs for Atomic SubSystem: '<S307>/Turn On Delay Time' */
        /* Logic: '<S358>/Logical3' incorporates:
         *  Constant: '<S372>/Constant'
         *  Constant: '<S373>/Constant'
         *  Constant: '<S374>/Constant'
         *  Constant: '<S376>/Calib'
         *  Constant: '<S377>/Calib'
         *  Constant: '<S378>/Calib'
         *  Constant: '<S379>/Calib'
         *  Constant: '<S380>/Calib'
         *  Constant: '<S381>/Calib'
         *  Constant: '<S382>/Calib'
         *  Constant: '<S383>/Calib'
         *  Logic: '<S317>/AND'
         *  Logic: '<S358>/Logical1'
         *  Logic: '<S358>/Logical10'
         *  Logic: '<S358>/Logical11'
         *  Logic: '<S358>/Logical12'
         *  Logic: '<S358>/Logical13'
         *  Logic: '<S358>/Logical2'
         *  Logic: '<S358>/Logical4'
         *  Logic: '<S358>/Logical6'
         *  Logic: '<S358>/Logical7'
         *  Logic: '<S358>/Logical8'
         *  RelationalOperator: '<S317>/Greater  Than'
         *  RelationalOperator: '<S358>/Comparison2'
         *  RelationalOperator: '<S358>/Comparison4'
         *  RelationalOperator: '<S358>/Comparison5'
         *  RelationalOperator: '<S358>/Comparison6'
         *  RelationalOperator: '<S358>/Comparison7'
         *  RelationalOperator: '<S358>/Comparison8'
         *  UnitDelay: '<S317>/Unit Delay'
         */
        VeHCDR_b_Htr1_DiagEnbl_B4S = (((rtb_LogicalOperator9_g && (((((tmpRead_x
            <= KeHCDR_T_HVC_HtrClntIn_Temp_Max) || (KeHCDR_b_HtrClntIn_Max_En)) &&
            ((rtb_Comparison1_e && (HCDR_ac_DW.UnitDelay_DSTATE_l >=
            rtb_TmpSignalConversionAtVeACCR_n_CompSp)) &&
             rtb_TmpSignalConversionAtVeHTRR_b_HVC_Ht)) &&
            ((rtb_TmpSignalConversionAtVeHTRR_P_HVC_Ht > KeHCDR_W_ECH_PrvPowr) ||
             (KeHCDR_b_HtrPwrExpectds_Fault_OV))) && ((tmpRead_w >
            KeHCDR_T_ECHTrgtTemp) || (KeHCDR_b_HtrTempTgt_Fault_OV)))) ||
            (rtb_LogicalOperator9_g && ((((((uint32)
            rtb_TmpSignalConversionAtVeHTIR_e_HV_Ele) ==
            CeHTIR_e_HtrSts_LockedUntilNextStart) || (((uint32)
            rtb_TmpSignalConversionAtVeHTIR_e_HV_Ele) ==
            CeHTIR_e_HtrSts_LockedUntilService)) || (((uint32)
            rtb_TmpSignalConversionAtVeHTIR_e_HV_Ele) ==
            CeHTIR_e_HtrSts_LockedPermanent)) && (KeHCDR_b_HtrStatus_Fault_En))))
            || ((KeHCDR_b_Htr1_PerfCndsOV_En) &&
                rtb_VariantMerge_For_Variant_Source_V_dy));

        /* End of Outputs for SubSystem: '<S307>/Turn On Delay Time' */

        /* RelationalOperator: '<S354>/Comparison2' incorporates:
         *  Abs: '<S354>/Abs'
         *  Constant: '<S355>/Calib'
         *  Sum: '<S354>/Sum'
         */
        VeHCDR_b_Htr1IsDeltaPwrGreater = (fabsf
            (rtb_TmpSignalConversionAtVeHTIR_P_HVC__h -
             rtb_TmpSignalConversionAtVeHTRR_P_HVC_Ht) > KeHCDR_W_DelHVHeat1Pwr);

        /* Logic: '<S447>/Logical4' incorporates:
         *  Constant: '<S458>/Constant'
         *  Constant: '<S459>/Calib'
         *  Constant: '<S460>/Calib'
         *  Constant: '<S461>/Constant'
         *  Constant: '<S462>/Calib'
         *  Constant: '<S463>/Calib'
         *  Constant: '<S464>/Constant'
         *  Constant: '<S465>/Calib'
         *  Constant: '<S466>/Calib'
         *  Constant: '<S467>/Constant'
         *  Constant: '<S468>/Calib'
         *  Constant: '<S469>/Calib'
         *  Constant: '<S470>/Constant'
         *  Constant: '<S471>/Calib'
         *  Constant: '<S472>/Calib'
         *  Constant: '<S473>/Constant'
         *  Constant: '<S474>/Calib'
         *  Constant: '<S475>/Calib'
         *  Constant: '<S476>/Constant'
         *  Constant: '<S477>/Calib'
         *  Constant: '<S478>/Calib'
         *  Constant: '<S479>/Constant'
         *  Constant: '<S480>/Calib'
         *  Constant: '<S481>/Calib'
         *  Constant: '<S482>/Constant'
         *  Constant: '<S483>/Calib'
         *  Constant: '<S484>/Calib'
         *  Inport: '<Root>/VeHTIR_e_HVC_HtrClntIn_TempSensFlt'
         *  Inport: '<Root>/VeHTIR_e_HVC_HtrClntOut_TempSensFlt'
         *  Inport: '<Root>/VeHTIR_e_HVC_HtrClntTemp_OutofRng'
         *  Inport: '<Root>/VeHTIR_e_HVC_HtrCoreTemp_SensFlt'
         *  Inport: '<Root>/VeHTIR_e_HVC_HtrIntCom_Err'
         *  Inport: '<Root>/VeHTIR_e_HVC_HtrResis_PCB_OvrTemp'
         *  Inport: '<Root>/VeHTIR_e_HVC_HtrSelfProtect_Actv'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr_HV_OutofRng'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr_LV_OutofRng'
         *  Logic: '<S449>/Logical10'
         *  Logic: '<S449>/Logical8'
         *  Logic: '<S449>/Logical9'
         *  Logic: '<S450>/Logical26'
         *  Logic: '<S450>/Logical27'
         *  Logic: '<S450>/Logical28'
         *  Logic: '<S451>/Logical1'
         *  Logic: '<S451>/Logical2'
         *  Logic: '<S451>/Logical3'
         *  Logic: '<S452>/Logical23'
         *  Logic: '<S452>/Logical24'
         *  Logic: '<S452>/Logical25'
         *  Logic: '<S453>/Logical11'
         *  Logic: '<S453>/Logical12'
         *  Logic: '<S453>/Logical13'
         *  Logic: '<S454>/Logical5'
         *  Logic: '<S454>/Logical6'
         *  Logic: '<S454>/Logical7'
         *  Logic: '<S455>/Logical20'
         *  Logic: '<S455>/Logical21'
         *  Logic: '<S455>/Logical22'
         *  Logic: '<S456>/Logical14'
         *  Logic: '<S456>/Logical15'
         *  Logic: '<S456>/Logical16'
         *  Logic: '<S457>/Logical17'
         *  Logic: '<S457>/Logical18'
         *  Logic: '<S457>/Logical19'
         *  RelationalOperator: '<S449>/Comparison4'
         *  RelationalOperator: '<S450>/Comparison4'
         *  RelationalOperator: '<S451>/Comparison4'
         *  RelationalOperator: '<S452>/Comparison4'
         *  RelationalOperator: '<S453>/Comparison4'
         *  RelationalOperator: '<S454>/Comparison4'
         *  RelationalOperator: '<S455>/Comparison4'
         *  RelationalOperator: '<S456>/Comparison4'
         *  RelationalOperator: '<S457>/Comparison4'
         */
        VeHCDR_b_Warning_Flag_Set_1 = (((((((((((((uint32)tmpRead) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_Htr_HV_OutofRng_Enb)) ||
            (tmpRead_0 && (KeHCDR_b_Htr_HV_OutofRng_FA_Enb))) || (((((uint32)
            tmpRead_1) == CeHTIR_e_Warning_True) &&
            (KeHCDR_b_Htr_LV_OutofRng_Enb)) || (tmpRead_2 &&
            (KeHCDR_b_Htr_LV_OutofRng_FA_Enb)))) || (((((uint32)tmpRead_3) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_HtrClntTemp_OutofRng_Enb)) ||
            (tmpRead_4 && (KeHCDR_b_HtrClntTemp_OutofRng_FA_Enb)))) ||
            (((((uint32)tmpRead_5) == CeHTIR_e_Warning_True) &&
              (KeHCDR_b_HtrIntCom_Err_Enb)) || (tmpRead_6 &&
            (KeHCDR_b_HtrIntCom_Err_FA_Enb)))) || (((((uint32)tmpRead_7) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_HtrResis_PCB_OT_Enb)) ||
            (tmpRead_8 && (KeHCDR_b_HtrResis_PCB_OT_FA_Enb)))) || (((((uint32)
            tmpRead_9) == CeHTIR_e_Warning_True) &&
            (KeHCDR_b_HtrSelfProtect_Actv_Enb)) || (tmpRead_a &&
            (KeHCDR_b_HtrSelfProtect_Actv_FA_Enb)))) || (((((uint32)tmpRead_b) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_HtrClntOut_TempSensFlt_Enb)) ||
            (tmpRead_c && (KeHCDR_b_HtrClntOut_TempSensFlt_FA_Enb)))) ||
            (((((uint32)tmpRead_d) == CeHTIR_e_Warning_True) &&
              (KeHCDR_b_HtrClntIn_TempSensFlt_Enb)) || (tmpRead_e &&
            (KeHCDR_b_HtrClntIn_TempSensFlt_FA_Enb)))) || (((((uint32)tmpRead_f)
            == CeHTIR_e_Warning_True) && (KeHCDR_b_HtrCoreTemp_SensFlt_Enb)) ||
            (tmpRead_g && (KeHCDR_b_HtrCoreTemp_SensFlt_FA_Enb))));

        /* Logic: '<S448>/Logical1' incorporates:
         *  Constant: '<S492>/Calib'
         *  Constant: '<S493>/Calib'
         *  Constant: '<S494>/Calib'
         *  Constant: '<S495>/Constant'
         *  Constant: '<S496>/Calib'
         *  Constant: '<S497>/Calib'
         *  Constant: '<S498>/Constant'
         *  Constant: '<S499>/Calib'
         *  Constant: '<S500>/Calib'
         *  Constant: '<S501>/Constant'
         *  Constant: '<S502>/Calib'
         *  Constant: '<S503>/Calib'
         *  Constant: '<S504>/Calib'
         *  Constant: '<S505>/Calib'
         *  Constant: '<S506>/Calib'
         *  Constant: '<S507>/Calib'
         *  Constant: '<S508>/Constant'
         *  Constant: '<S509>/Calib'
         *  Constant: '<S510>/Calib'
         *  Constant: '<S511>/Calib'
         *  Constant: '<S512>/Calib'
         *  Constant: '<S513>/Calib'
         *  Inport: '<Root>/VeHTIR_e_HVC_HtrDrvFlt'
         *  Inport: '<Root>/VeHTIR_e_HVC_HtrProcesMemory_Flt'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr_DCDC_VltgOutofRng'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr_HV_CrntOutofRng'
         *  Logic: '<S485>/Logical1'
         *  Logic: '<S485>/Logical2'
         *  Logic: '<S485>/Logical3'
         *  Logic: '<S486>/Logical1'
         *  Logic: '<S486>/Logical2'
         *  Logic: '<S486>/Logical3'
         *  Logic: '<S487>/Logical1'
         *  Logic: '<S487>/Logical2'
         *  Logic: '<S487>/Logical3'
         *  Logic: '<S488>/Logical1'
         *  Logic: '<S488>/Logical2'
         *  Logic: '<S488>/Logical3'
         *  Logic: '<S489>/Logical1'
         *  Logic: '<S489>/Logical2'
         *  Logic: '<S489>/Logical3'
         *  Logic: '<S489>/Logical4'
         *  Logic: '<S489>/Logical5'
         *  Logic: '<S490>/Logical1'
         *  Logic: '<S490>/Logical2'
         *  Logic: '<S490>/Logical3'
         *  Logic: '<S491>/Logical1'
         *  Logic: '<S491>/Logical2'
         *  Logic: '<S491>/Logical3'
         *  RelationalOperator: '<S485>/Comparison4'
         *  RelationalOperator: '<S486>/Comparison4'
         *  RelationalOperator: '<S487>/Comparison4'
         *  RelationalOperator: '<S488>/Comparison4'
         *  RelationalOperator: '<S490>/Comparison4'
         *  RelationalOperator: '<S491>/Comparison'
         */
        VeHCDR_b_Warning_Flag_Set_2 = (((((((((((uint32)tmpRead_h) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_DCDC_VltgOutofRng_Enb)) ||
            (tmpRead_i && (KeHCDR_b_DCDC_VltgOutofRng_FA_Enb))) || (((((uint32)
            tmpRead_j) == CeHTIR_e_Warning_True) &&
            (KeHCDR_b_HV_CrntOutofRng_Enb)) || (tmpRead_k &&
            (KeHCDR_b_HV_CrntOutofRng_FA_Enb)))) || (((((uint32)tmpRead_l) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_HtrDrvFlt_Enb)) || (tmpRead_m &&
            (KeHCDR_b_HtrDrvFlt_FA_Enb)))) || (((((uint32)tmpRead_n) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_HtrProcesMemory_Flt_Enb)) ||
            (tmpRead_o && (KeHCDR_b_HtrProcesMemory_Flt_FA_Enb)))) ||
            (((tmpRead_p >= KeHCDR_I_HVC_CrntAct_Max) &&
              (KeHCDR_b_Htr_HV_CrntAct_Enb)) || (tmpRead_q &&
            (KeHCDR_b_Htr_HV_CrntAct_FA_Enb)))) || (((tmpRead_u >=
            KeHCDR_W_HtrPwrExpectd_MaxFlt) && (KeHCDR_b_HtrPwrExpectd_Enb)) ||
            (tmpRead_v && (KeHCDR_b_HtrPwrExpectd_FA_Enb)))) || ((((tmpRead_t &&
            (KeHCDR_b_HtrClntIn_Temp_FA_Enb)) || (tmpRead_s &&
            (KeHCDR_b_HtrClntOut_Temp_FA_Enb))) || (tmpRead_r &&
            (KeHCDR_b_Htr_LIN_ResErr_Enb))) ||
            (rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht &&
             (KeHCDR_b_HtrPwrAct_FA_Enb))));

        /* VariantMerge generated from: '<S295>/HVC_Heater_WarningFlag' incorporates:
         *  Logic: '<S306>/Logical2'
         */
        VeHCDR_b_Warning_Flag = ((VeHCDR_b_Warning_Flag_Set_1) ||
            (VeHCDR_b_Warning_Flag_Set_2));

        /* Logic: '<S309>/Logical4' incorporates:
         *  Constant: '<S348>/Constant'
         *  Constant: '<S349>/Constant'
         *  Constant: '<S350>/Constant'
         *  Constant: '<S351>/Calib'
         *  Constant: '<S352>/Calib'
         *  Constant: '<S353>/Calib'
         *  Constant: '<S356>/Calib'
         *  Logic: '<S309>/Logical1'
         *  Logic: '<S309>/Logical10'
         *  Logic: '<S309>/Logical3'
         *  Logic: '<S309>/Logical5'
         *  Logic: '<S354>/Logical'
         *  Logic: '<S354>/Logical1'
         *  RelationalOperator: '<S309>/Comparison2'
         *  RelationalOperator: '<S309>/Comparison6'
         *  RelationalOperator: '<S309>/Comparison7'
         */
        VeHCDR_b_Htr1_FltSymptom = (((((VeHCDR_b_Htr1IsDeltaPwrGreater) ||
            (rtb_VariantMerge_For_Variant_Source_V_dy &&
             (KeHCDR_b_Htr1PwrActFA_Enbl))) && (KeHCDR_b_Htr1FltPwrChkEn)) ||
            ((((((uint32)rtb_TmpSignalConversionAtVeHTIR_e_HV_Ele) ==
                CeHTIR_e_HtrSts_LockedUntilNextStart) || (((uint32)
            rtb_TmpSignalConversionAtVeHTIR_e_HV_Ele) ==
            CeHTIR_e_HtrSts_LockedUntilService)) || (((uint32)
            rtb_TmpSignalConversionAtVeHTIR_e_HV_Ele) ==
            CeHTIR_e_HtrSts_LockedPermanent)) && (KeHCDR_b_Htr1FltStsChkEn))) ||
            ((VeHCDR_b_Warning_Flag) && (KeHCDR_b_WarningFlagEnb)));

        /* Outputs for Atomic SubSystem: '<S303>/Htr1_Check_Diag' */
        /* Logic: '<S308>/AND1' incorporates:
         *  Constant: '<S326>/Calib'
         */
        VeHCDR_b_Htr1_DiagEnbl = ((VeHCDR_b_Htr1_DiagEnbl_B4S) &&
            (KeHCDR_b_HVC_Heater_XYEnbl));

        /* Outputs for Atomic SubSystem: '<S308>/EdgeRising' */
        /* Logic: '<S320>/AND' incorporates:
         *  Logic: '<S320>/OR1'
         *  UnitDelay: '<S320>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht = ((VeHCDR_b_Htr1_DiagEnbl) &&
            (!HCDR_ac_DW.UnitDelay_DSTATE_h5));

        /* Update for UnitDelay: '<S320>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_h5 = VeHCDR_b_Htr1_DiagEnbl;

        /* End of Outputs for SubSystem: '<S308>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S308>/Signal Latch On With Reset' */
        /* Logic: '<S327>/OR1' incorporates:
         *  Logic: '<S308>/AND3'
         *  Logic: '<S327>/NOT'
         *  Logic: '<S327>/OR'
         *  UnitDelay: '<S308>/Unit Delay'
         *  UnitDelay: '<S308>/Unit Delay1'
         *  UnitDelay: '<S327>/Unit Delay'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_hj = ((VeHCDR_b_Htr1_DiagEnbl) ||
            ((((!rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht) &&
               (!HCDR_ac_DW.UnitDelay_DSTATE_kq)) &&
              (!HCDR_ac_DW.UnitDelay1_DSTATE_nx)) &&
             (HCDR_ac_DW.UnitDelay_DSTATE_hj)));

        /* End of Outputs for SubSystem: '<S308>/Signal Latch On With Reset' */

        /* Switch: '<S308>/Switch' incorporates:
         *  Constant: '<S324>/Calib'
         */
        if (!KeHCDR_b_DiagLatch_En)
        {
            /* Switch: '<S308>/Switch' */
            VeHCDR_b_Htr1_DiagEnbl = HCDR_ac_DW.UnitDelay_DSTATE_hj;
        }

        /* End of Switch: '<S308>/Switch' */

        /* RelationalOperator: '<S329>/Relational Operator3' incorporates:
         *  Constant: '<S329>/Constant3'
         *  DataStoreRead: '<S319>/StatusByte_CoolHeaterAPerf'
         *  S-Function (sfix_bitop): '<S329>/Bitwise Operator2'
         */
        rtb_VariantMerge_For_Variant_Source_V_dy = ((((uint32)
            HCDR_ac_DW.StatusByte_CoolHeaterAPerf) & 64U) == 0U);

        /* Outputs for Atomic SubSystem: '<S329>/EdgeFalling1' */
        /* Logic: '<S329>/Logical Operator' incorporates:
         *  Logic: '<S335>/OR1'
         */
        rtb_VariantMerge_For_Variant_Source_Va_p =
            !rtb_VariantMerge_For_Variant_Source_V_dy;

        /* End of Outputs for SubSystem: '<S329>/EdgeFalling1' */

        /* Logic: '<S329>/Logical1' incorporates:
         *  Constant: '<S323>/Calib'
         *  Constant: '<S329>/Constant1'
         *  DataStoreRead: '<S319>/StatusByte_CoolHeaterAPerf'
         *  Logic: '<S329>/Logical Operator'
         *  Logic: '<S329>/Logical10'
         *  Logic: '<S329>/Logical12'
         *  RelationalOperator: '<S329>/Relational Operator1'
         *  S-Function (sfix_bitop): '<S329>/Bitwise Operator3'
         */
        rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht = ((VeHCDR_b_Htr1_DiagEnbl) &&
            ((!KeHCDR_b_CoolHeaterAPerf_LtchEnbl) || (((((uint32)
            HCDR_ac_DW.StatusByte_CoolHeaterAPerf) & 1U) == 0U) ||
            rtb_VariantMerge_For_Variant_Source_Va_p)));

        /* Outputs for Atomic SubSystem: '<S329>/EdgeFalling1' */
        /* Logic: '<S335>/AND' incorporates:
         *  UnitDelay: '<S335>/Unit Delay'
         */
        rtb_VariantMerge_For_Variant_Source_Va_p =
            (rtb_VariantMerge_For_Variant_Source_Va_p &&
             (HCDR_ac_DW.UnitDelay_DSTATE_fb));

        /* Update for UnitDelay: '<S335>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_fb =
            rtb_VariantMerge_For_Variant_Source_V_dy;

        /* End of Outputs for SubSystem: '<S329>/EdgeFalling1' */

        /* Logic: '<S329>/Logical5' incorporates:
         *  Logic: '<S305>/NOT4'
         */
        rtb_VariantMerge_For_Variant_Source_V_dy =
            ((rtb_VeHCDR_b_DsblDiagFailSafe_AD ||
              rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD) ||
             rtb_VariantMerge_For_Variant_Source_Va_p);

        /* Outputs for Atomic SubSystem: '<S334>/Counter Reset  Enabled 1' */
        /* Outputs for Atomic SubSystem: '<S334>/Counter Reset  Enabled ' */
        /* Switch: '<S341>/Switch1' incorporates:
         *  Constant: '<S325>/Calib'
         *  Logic: '<S308>/AND2'
         *  Logic: '<S334>/Fail Counter Reset'
         *  Logic: '<S334>/NOT6'
         *  Switch: '<S341>/Switch2'
         *  Switch: '<S342>/Switch1'
         *  UnitDelay: '<S334>/Unit Delay'
         *  UnitDelay: '<S334>/Unit Delay1'
         */
        if ((rtb_VariantMerge_For_Variant_Source_V_dy ||
                (HCDR_ac_DW.UnitDelay_DSTATE_no)) ||
                (HCDR_ac_DW.UnitDelay1_DSTATE_b))
        {
            /* Switch: '<S341>/Switch1' incorporates:
             *  Constant: '<S341>/Constant Value2'
             */
            VeHCDR_Cnt_Htr1_FailCnt = 0U;

            /* Switch: '<S342>/Switch1' incorporates:
             *  Constant: '<S342>/Constant Value2'
             */
            VeHCDR_Cnt_Htr1_SmpCnt = 0U;
        }
        else
        {
            if (rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht &&
                    ((VeHCDR_b_Htr1_FltSymptom) && (KeHCDR_b_HVC_Heater_FltEn)))
            {
                /* Switch: '<S341>/Switch1' incorporates:
                 *  Constant: '<S341>/Constant Value1'
                 *  Sum: '<S341>/Subtraction'
                 *  Switch: '<S341>/Switch2'
                 *  UnitDelay: '<S341>/Unit Delay'
                 */
                VeHCDR_Cnt_Htr1_FailCnt = (uint16)(((uint32)
                    VeHCDR_Cnt_Htr1_FailCnt) + 1U);
            }

            /* Switch: '<S342>/Switch2' */
            if (rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht)
            {
                /* Switch: '<S342>/Switch1' incorporates:
                 *  Constant: '<S342>/Constant Value1'
                 *  Sum: '<S342>/Subtraction'
                 *  Switch: '<S342>/Switch2'
                 *  UnitDelay: '<S342>/Unit Delay'
                 */
                VeHCDR_Cnt_Htr1_SmpCnt = (uint16)(((uint32)
                    VeHCDR_Cnt_Htr1_SmpCnt) + 1U);
            }

            /* End of Switch: '<S342>/Switch2' */
        }

        /* End of Switch: '<S341>/Switch1' */
        /* End of Outputs for SubSystem: '<S334>/Counter Reset  Enabled ' */
        /* End of Outputs for SubSystem: '<S334>/Counter Reset  Enabled 1' */

        /* RelationalOperator: '<S334>/Greater Than or Equal ' incorporates:
         *  Constant: '<S321>/Calib'
         */
        HCDR_ac_DW.UnitDelay1_DSTATE_b = (VeHCDR_Cnt_Htr1_FailCnt >=
            KeHCDR_Cnt_HVC_Heater_FailCnt);

        /* Logic: '<S334>/NOT5' incorporates:
         *  Constant: '<S322>/Calib'
         *  Logic: '<S334>/NOT3'
         *  RelationalOperator: '<S334>/Less Than  or Equal'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_no = ((VeHCDR_Cnt_Htr1_SmpCnt >=
            KeHCDR_Cnt_HVC_Heater_SmpCnt) && (!HCDR_ac_DW.UnitDelay1_DSTATE_b));

        /* Switch: '<S347>/Switch1' incorporates:
         *  Constant: '<S340>/Constant Value'
         *  DataStoreWrite: '<S308>/Data Store Write3'
         *  Switch: '<S346>/Switch1'
         */
        if (rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD)
        {
            HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater_MFOP = 0U;
        }
        else
        {
            if (HCDR_ac_DW.UnitDelay_DSTATE_no)
            {
                /* MinMax: '<S340>/Minimum2' incorporates:
                 *  DataStoreRead: '<S308>/Data Store Read1'
                 *  Switch: '<S346>/Switch1'
                 */
                if (VeHCDR_Cnt_Htr1_FailCnt >
                        HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater_MFOP)
                {
                    /* DataStoreWrite: '<S308>/Data Store Write3' incorporates:
                     *  Switch: '<S346>/Switch1'
                     */
                    HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater_MFOP =
                        VeHCDR_Cnt_Htr1_FailCnt;
                }

                /* End of MinMax: '<S340>/Minimum2' */
            }
        }

        /* End of Switch: '<S347>/Switch1' */

        /* Outputs for Enabled SubSystem: '<S329>/Pass' */
        HCDR_ac_Pass(HCDR_ac_DW.UnitDelay_DSTATE_no,
                     &HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_m);

        /* End of Outputs for SubSystem: '<S329>/Pass' */

        /* Outputs for Enabled SubSystem: '<S329>/Fail' */
        HCDR_ac_Fail(HCDR_ac_DW.UnitDelay1_DSTATE_b,
                     &HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_m);

        /* End of Outputs for SubSystem: '<S329>/Fail' */

        /* Outputs for Enabled SubSystem: '<S329>/Init' */
        HCDR_ac_Init_p(rtb_VariantMerge_For_Variant_Source_V_dy,
                       &HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_m);

        /* End of Outputs for SubSystem: '<S329>/Init' */

        /* RelationalOperator: '<S328>/Relational Operator' incorporates:
         *  RelationalOperator: '<S328>/Relational Operator1'
         *  RelationalOperator: '<S329>/Relational Operator'
         *  VariantMerge generated from: '<S295>/VeHCDR_e_FaultSts_CoolHeaterAPerf'
         */
        rtb_RelationalOperator_m_tmp =
            HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_m;

        /* RelationalOperator: '<S328>/Relational Operator' incorporates:
         *  Constant: '<S333>/Constant'
         */
        rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht = (((uint32)
            rtb_RelationalOperator_m_tmp) == CeDFIB_e_Fail);

        /* Outputs for Atomic SubSystem: '<S328>/EdgeRising' */
        /* Logic: '<S330>/OR1' incorporates:
         *  UnitDelay: '<S330>/Unit Delay'
         */
        rtb_VariantMerge_For_Variant_Source_V_dy =
            !HCDR_ac_DW.UnitDelay_DSTATE_nt;

        /* Update for UnitDelay: '<S330>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_nt =
            rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht;

        /* End of Outputs for SubSystem: '<S328>/EdgeRising' */

        /* RelationalOperator: '<S328>/Relational Operator1' incorporates:
         *  Constant: '<S332>/Constant'
         */
        rtb_VariantMerge_For_Variant_Source_Va_p = (((uint32)
            rtb_RelationalOperator_m_tmp) == CeDFIB_e_Pass);

        /* Outputs for Atomic SubSystem: '<S328>/EdgeRising1' */
        /* Logic: '<S331>/OR1' incorporates:
         *  UnitDelay: '<S331>/Unit Delay'
         */
        rtb_VariantMerge_For_Variant_Source_Va_d =
            !HCDR_ac_DW.UnitDelay_DSTATE_i0;

        /* Update for UnitDelay: '<S331>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_i0 =
            rtb_VariantMerge_For_Variant_Source_Va_p;

        /* End of Outputs for SubSystem: '<S328>/EdgeRising1' */

        /* VariantMerge generated from: '<S295>/HVC_Heater_FltDtct' incorporates:
         *  Constant: '<S336>/Constant'
         *  RelationalOperator: '<S329>/Relational Operator'
         */
        VeHCDR_b_Htr1_FltDtct = (((uint32)rtb_RelationalOperator_m_tmp) ==
            CeDFIB_e_Fail);

        /* Outputs for Atomic SubSystem: '<S328>/EdgeRising1' */
        /* Update for UnitDelay: '<S308>/Unit Delay' incorporates:
         *  Logic: '<S331>/AND'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_kq =
            (rtb_VariantMerge_For_Variant_Source_Va_p &&
             rtb_VariantMerge_For_Variant_Source_Va_d);

        /* End of Outputs for SubSystem: '<S328>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S328>/EdgeRising' */
        /* Update for UnitDelay: '<S308>/Unit Delay1' incorporates:
         *  Logic: '<S330>/AND'
         */
        HCDR_ac_DW.UnitDelay1_DSTATE_nx =
            (rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht &&
             rtb_VariantMerge_For_Variant_Source_V_dy);

        /* End of Outputs for SubSystem: '<S328>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S303>/Htr1_Check_Diag' */

        /* VariantMerge generated from: '<S295>/IUMPR_Htr1_ECH_Perf' incorporates:
         *  Constant: '<S418>/Constant1'
         *  Constant: '<S418>/Constant2'
         *  Constant: '<S419>/Constant1'
         *  Constant: '<S419>/Constant2'
         *  Constant: '<S420>/Constant1'
         *  Constant: '<S420>/Constant2'
         *  Constant: '<S421>/Constant1'
         *  Constant: '<S421>/Constant2'
         *  Constant: '<S422>/Constant1'
         *  Constant: '<S422>/Constant2'
         *  Constant: '<S423>/Constant1'
         *  Constant: '<S423>/Constant2'
         *  Constant: '<S424>/Constant1'
         *  Constant: '<S424>/Constant2'
         *  Constant: '<S425>/Constant1'
         *  Constant: '<S425>/Constant2'
         *  Constant: '<S426>/Constant1'
         *  Constant: '<S426>/Constant2'
         *  Constant: '<S427>/Calib'
         *  DataStoreRead: '<S418>/StatusByte_CoolantVlvB_CktHi'
         *  DataStoreRead: '<S419>/StatusByte_CoolantVlvB_CktLo'
         *  DataStoreRead: '<S420>/StatusByte_CoolantVlvB_Ckt'
         *  DataStoreRead: '<S421>/StatusByte_CoolantVlvB_StkClsd'
         *  DataStoreRead: '<S422>/StatusByte_CoolantVlvB_StkOpn'
         *  DataStoreRead: '<S423>/StatusByte_ECH_TempIn'
         *  DataStoreRead: '<S424>/StatusByte_ECH_TempOut'
         *  DataStoreRead: '<S426>/StatusByte_ThrmlRlyCtrlCkt'
         *  Logic: '<S311>/Logical Operator'
         *  Logic: '<S311>/Logical Operator1'
         *  Logic: '<S311>/Logical Operator10'
         *  Logic: '<S311>/Logical Operator2'
         *  Logic: '<S311>/Logical Operator3'
         *  Logic: '<S311>/Logical Operator4'
         *  Logic: '<S311>/Logical Operator5'
         *  Logic: '<S311>/Logical Operator6'
         *  Logic: '<S311>/Logical Operator7'
         *  Logic: '<S311>/Logical Operator8'
         *  Logic: '<S311>/Logical Operator9'
         *  Logic: '<S418>/Logical Operator'
         *  Logic: '<S419>/Logical Operator'
         *  Logic: '<S420>/Logical Operator'
         *  Logic: '<S421>/Logical Operator'
         *  Logic: '<S422>/Logical Operator'
         *  Logic: '<S423>/Logical Operator'
         *  Logic: '<S424>/Logical Operator'
         *  Logic: '<S425>/Logical Operator'
         *  Logic: '<S426>/Logical Operator'
         *  RelationalOperator: '<S418>/Relational Operator1'
         *  RelationalOperator: '<S418>/Relational Operator2'
         *  RelationalOperator: '<S419>/Relational Operator1'
         *  RelationalOperator: '<S419>/Relational Operator2'
         *  RelationalOperator: '<S420>/Relational Operator1'
         *  RelationalOperator: '<S420>/Relational Operator2'
         *  RelationalOperator: '<S421>/Relational Operator1'
         *  RelationalOperator: '<S421>/Relational Operator2'
         *  RelationalOperator: '<S422>/Relational Operator1'
         *  RelationalOperator: '<S422>/Relational Operator2'
         *  RelationalOperator: '<S423>/Relational Operator1'
         *  RelationalOperator: '<S423>/Relational Operator2'
         *  RelationalOperator: '<S424>/Relational Operator1'
         *  RelationalOperator: '<S424>/Relational Operator2'
         *  RelationalOperator: '<S425>/Relational Operator1'
         *  RelationalOperator: '<S425>/Relational Operator2'
         *  RelationalOperator: '<S426>/Relational Operator1'
         *  RelationalOperator: '<S426>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S418>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S418>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S419>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S419>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S420>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S420>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S421>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S421>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S422>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S422>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S423>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S423>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S424>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S424>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S426>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S426>/Bitwise Operator2'
         */
        HCDR_ac_B.VariantMergeForOutportIUMPR_Htr1_ECH_Per =
            (((((((((((((((sint32)HCDR_ac_DW.StatusByte_ECH_TempOut) & 1) > 0) &&
                       ((((uint32)HCDR_ac_DW.StatusByte_ECH_TempOut) & 64U) ==
                        0U)) && (KaHCDR_b_IUMPR_Htr1_Enbl[0])) || ((((((sint32)
                          HCDR_ac_DW.StatusByte_ECH_TempIn) & 1) > 0) &&
                       ((((uint32)HCDR_ac_DW.StatusByte_ECH_TempIn) & 64U) == 0U))
                      && (KaHCDR_b_IUMPR_Htr1_Enbl[1]))) ||
                    (((rtb_LogicalOperator_ow_tmp > 0) &&
                      (rtb_VeHCDR_t_RealTimeClock_AD == 0U)) &&
                     (KaHCDR_b_IUMPR_Htr1_Enbl[2]))) ||
                   (rtb_TmpSignalConversionAtVeTAIR_b_HghRfr &&
                    (KaHCDR_b_IUMPR_Htr1_Enbl[3]))) || ((((((sint32)
                       HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) > 0) &&
                    ((((uint32)HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) ==
                     0U)) && (KaHCDR_b_IUMPR_Htr1_Enbl[4]))) || ((((((sint32)
                      HCDR_ac_DW.StatusByte_CoolantVlvB_StkOpn) & 1) > 0) &&
                   ((((uint32)HCDR_ac_DW.StatusByte_CoolantVlvB_StkOpn) & 64U) ==
                    0U)) && (KaHCDR_b_IUMPR_Htr1_Enbl[5]))) || ((((((sint32)
                     HCDR_ac_DW.StatusByte_CoolantVlvB_StkClsd) & 1) > 0) &&
                  ((((uint32)HCDR_ac_DW.StatusByte_CoolantVlvB_StkClsd) & 64U) ==
                   0U)) && (KaHCDR_b_IUMPR_Htr1_Enbl[6]))) || ((((((sint32)
                    HCDR_ac_DW.StatusByte_CoolantVlvB_Ckt) & 1) > 0) &&
                 ((((uint32)HCDR_ac_DW.StatusByte_CoolantVlvB_Ckt) & 64U) == 0U))
                && (KaHCDR_b_IUMPR_Htr1_Enbl[7]))) || ((((((sint32)
                   HCDR_ac_DW.StatusByte_CoolantVlvB_CktLo) & 1) > 0) &&
                ((((uint32)HCDR_ac_DW.StatusByte_CoolantVlvB_CktLo) & 64U) == 0U))
               && (KaHCDR_b_IUMPR_Htr1_Enbl[8]))) || ((((((sint32)
                  HCDR_ac_DW.StatusByte_CoolantVlvB_CktHi) & 1) > 0) &&
               ((((uint32)HCDR_ac_DW.StatusByte_CoolantVlvB_CktHi) & 64U) == 0U))
              && (KaHCDR_b_IUMPR_Htr1_Enbl[9])));

        /* Logic: '<S312>/Logical Operator2' */
        rtb_TmpSignalConversionAtVeHTRR_b_HVC_Ht =
            (rtb_TmpSignalConversionAtVeHTRR_b_HVC_Ht &&
             rtb_VeHCDR_b_PropSysActv_AD);

        /* Outputs for Atomic SubSystem: '<S432>/EdgeRising' */
        /* Logic: '<S438>/OR1' incorporates:
         *  UnitDelay: '<S438>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht =
            !HCDR_ac_DW.UnitDelay_DSTATE_hx;

        /* Update for UnitDelay: '<S438>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_hx =
            rtb_TmpSignalConversionAtVeHTRR_b_HVC_Ht;

        /* End of Outputs for SubSystem: '<S432>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S432>/EdgeRising1' */
        /* Logic: '<S439>/OR1' incorporates:
         *  UnitDelay: '<S439>/Unit Delay'
         */
        rtb_VariantMerge_For_Variant_Source_V_dy =
            !HCDR_ac_DW.UnitDelay_DSTATE_lu;

        /* Update for UnitDelay: '<S439>/Unit Delay' incorporates:
         *  Constant: '<S432>/TRUE Constant'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_lu = true;

        /* Outputs for Atomic SubSystem: '<S432>/EdgeRising' */
        /* Logic: '<S432>/Logical Operator' incorporates:
         *  Logic: '<S438>/AND'
         *  Logic: '<S439>/AND'
         */
        rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht =
            ((rtb_TmpSignalConversionAtVeHTRR_b_HVC_Ht &&
              rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht) ||
             rtb_VariantMerge_For_Variant_Source_V_dy);

        /* End of Outputs for SubSystem: '<S432>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S432>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S432>/Timer Retrigger Reset Trigger Enabled' */
        /* Outputs for Atomic SubSystem: '<S440>/EdgeRising_F2T' */
        /* Logic: '<S441>/OR1' incorporates:
         *  UnitDelay: '<S441>/Unit Delay'
         */
        rtb_VariantMerge_For_Variant_Source_V_dy =
            !HCDR_ac_DW.UnitDelay_DSTATE_na;

        /* Update for UnitDelay: '<S441>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_na =
            rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht;

        /* Switch: '<S440>/Switch1' incorporates:
         *  Constant: '<S312>/Constant2'
         *  Logic: '<S441>/AND'
         *  Switch: '<S440>/Switch2'
         *  UnitDelay: '<S440>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht &&
                rtb_VariantMerge_For_Variant_Source_V_dy)
        {
            HCDR_ac_DW.UnitDelay_DSTATE_a = 2.0F;
        }
        else
        {
            if (rtb_TmpSignalConversionAtVeHTRR_b_HVC_Ht)
            {
                /* UnitDelay: '<S440>/Unit Delay' incorporates:
                 *  Constant: '<S432>/Constant1'
                 *  Constant: '<S440>/Constant Value4'
                 *  MinMax: '<S440>/Maximum'
                 *  Sum: '<S440>/Subtraction'
                 *  Switch: '<S440>/Switch2'
                 */
                HCDR_ac_DW.UnitDelay_DSTATE_a = fmaxf
                    (HCDR_ac_DW.UnitDelay_DSTATE_a - 0.1F, 0.0F);
            }
        }

        /* End of Switch: '<S440>/Switch1' */
        /* End of Outputs for SubSystem: '<S440>/EdgeRising_F2T' */

        /* Logic: '<S432>/Logical Operator2' incorporates:
         *  Constant: '<S440>/Constant Value2'
         *  Logic: '<S432>/Logical Operator1'
         *  RelationalOperator: '<S440>/Greater  Than1'
         *  UnitDelay: '<S440>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht =
            (rtb_TmpSignalConversionAtVeHTRR_b_HVC_Ht &&
             (HCDR_ac_DW.UnitDelay_DSTATE_a <= 0.0F));

        /* End of Outputs for SubSystem: '<S432>/Timer Retrigger Reset Trigger Enabled' */

        /* Outputs for Atomic SubSystem: '<S312>/EdgeRising1' */
        /* Logic: '<S428>/AND' incorporates:
         *  Logic: '<S428>/OR1'
         *  UnitDelay: '<S428>/Unit Delay'
         */
        rtb_VariantMerge_For_Variant_Source_V_dy =
            (rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht &&
             (!HCDR_ac_DW.UnitDelay_DSTATE_clp));

        /* Update for UnitDelay: '<S428>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_clp =
            rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht;

        /* End of Outputs for SubSystem: '<S312>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S312>/EdgeRising2' */
        /* Logic: '<S429>/OR1' incorporates:
         *  UnitDelay: '<S429>/Unit Delay'
         */
        rtb_VariantMerge_For_Variant_Source_Va_p =
            !HCDR_ac_DW.UnitDelay_DSTATE_e0;

        /* Update for UnitDelay: '<S429>/Unit Delay' incorporates:
         *  Constant: '<S312>/TRUE Constant'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_e0 = true;

        /* End of Outputs for SubSystem: '<S312>/EdgeRising2' */

        /* Outputs for Atomic SubSystem: '<S312>/EdgeRising3' */
        /* Logic: '<S430>/OR1' incorporates:
         *  UnitDelay: '<S430>/Unit Delay'
         */
        rtb_VariantMerge_For_Variant_Source_Va_d =
            !HCDR_ac_DW.UnitDelay_DSTATE_c4;

        /* Update for UnitDelay: '<S430>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_c4 = rtb_VeHCDR_b_PropSysActv_AD;

        /* Outputs for Atomic SubSystem: '<S312>/EdgeRising2' */
        /* Logic: '<S312>/Logical Operator3' incorporates:
         *  Logic: '<S429>/AND'
         *  Logic: '<S430>/AND'
         */
        rtb_VariantMerge_For_Variant_Source_Va_p =
            (rtb_VariantMerge_For_Variant_Source_Va_p ||
             (rtb_VeHCDR_b_PropSysActv_AD &&
              rtb_VariantMerge_For_Variant_Source_Va_d));

        /* End of Outputs for SubSystem: '<S312>/EdgeRising2' */
        /* End of Outputs for SubSystem: '<S312>/EdgeRising3' */

        /* Outputs for Atomic SubSystem: '<S431>/Timer Retrigger Reset Trigger Enabled' */
        /* Outputs for Atomic SubSystem: '<S436>/EdgeRising_F2T' */
        /* Logic: '<S437>/OR1' incorporates:
         *  UnitDelay: '<S437>/Unit Delay'
         */
        rtb_VariantMerge_For_Variant_Source_Va_d =
            !HCDR_ac_DW.UnitDelay_DSTATE_dr;

        /* Update for UnitDelay: '<S437>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_dr =
            rtb_VariantMerge_For_Variant_Source_Va_p;

        /* Switch: '<S436>/Switch1' incorporates:
         *  Constant: '<S312>/Constant'
         *  Logic: '<S437>/AND'
         *  Switch: '<S436>/Switch2'
         *  UnitDelay: '<S436>/Unit Delay'
         */
        if (rtb_VariantMerge_For_Variant_Source_Va_p &&
                rtb_VariantMerge_For_Variant_Source_Va_d)
        {
            HCDR_ac_DW.UnitDelay_DSTATE_oz = 10.0F;
        }
        else
        {
            if (rtb_TmpSignalConversionAtVeHTRR_b_HVC_Ht)
            {
                /* UnitDelay: '<S436>/Unit Delay' incorporates:
                 *  Constant: '<S431>/Constant1'
                 *  Constant: '<S436>/Constant Value4'
                 *  MinMax: '<S436>/Maximum'
                 *  Sum: '<S436>/Subtraction'
                 *  Switch: '<S436>/Switch2'
                 */
                HCDR_ac_DW.UnitDelay_DSTATE_oz = fmaxf
                    (HCDR_ac_DW.UnitDelay_DSTATE_oz - 0.1F, 0.0F);
            }
        }

        /* End of Switch: '<S436>/Switch1' */
        /* End of Outputs for SubSystem: '<S436>/EdgeRising_F2T' */
        /* End of Outputs for SubSystem: '<S431>/Timer Retrigger Reset Trigger Enabled' */

        /* Outputs for Atomic SubSystem: '<S312>/Signal Latch On With Reset1' */
        /* Outputs for Atomic SubSystem: '<S312>/Signal Latch On With Reset4' */
        /* Outputs for Atomic SubSystem: '<S312>/Signal Latch On With Reset2' */
        /* Logic: '<S434>/NOT' incorporates:
         *  Logic: '<S433>/NOT'
         *  Logic: '<S435>/NOT'
         */
        rtb_VariantMerge_For_Variant_Source_Va_p =
            !rtb_VariantMerge_For_Variant_Source_Va_p;

        /* End of Outputs for SubSystem: '<S312>/Signal Latch On With Reset4' */
        /* End of Outputs for SubSystem: '<S312>/Signal Latch On With Reset1' */

        /* Outputs for Atomic SubSystem: '<S431>/Timer Retrigger Reset Trigger Enabled' */
        /* Logic: '<S434>/OR1' incorporates:
         *  Constant: '<S436>/Constant Value2'
         *  Logic: '<S431>/Logical Operator1'
         *  Logic: '<S431>/Logical Operator2'
         *  Logic: '<S434>/NOT'
         *  Logic: '<S434>/OR'
         *  RelationalOperator: '<S436>/Greater  Than1'
         *  UnitDelay: '<S434>/Unit Delay'
         *  UnitDelay: '<S436>/Unit Delay'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_fg =
            ((rtb_TmpSignalConversionAtVeHTRR_b_HVC_Ht &&
              (HCDR_ac_DW.UnitDelay_DSTATE_oz <= 0.0F)) ||
             (rtb_VariantMerge_For_Variant_Source_Va_p &&
              (HCDR_ac_DW.UnitDelay_DSTATE_fg)));

        /* End of Outputs for SubSystem: '<S431>/Timer Retrigger Reset Trigger Enabled' */
        /* End of Outputs for SubSystem: '<S312>/Signal Latch On With Reset2' */

        /* Outputs for Atomic SubSystem: '<S312>/Signal Latch On With Reset4' */
        /* Logic: '<S435>/OR1' incorporates:
         *  Delay: '<S312>/Delay'
         *  Logic: '<S312>/Logical Operator1'
         *  Logic: '<S435>/OR'
         *  UnitDelay: '<S435>/Unit Delay'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_j4 = (((HCDR_ac_DW.Delay_DSTATE_n) &&
            rtb_VariantMerge_For_Variant_Source_V_dy) ||
            (rtb_VariantMerge_For_Variant_Source_Va_p &&
             (HCDR_ac_DW.UnitDelay_DSTATE_j4)));

        /* End of Outputs for SubSystem: '<S312>/Signal Latch On With Reset4' */

        /* VariantMerge generated from: '<S295>/IUMPR_Htr1_ECH_MinCmdThrshld_Met' incorporates:
         *  Logic: '<S312>/Logical Operator'
         *  Logic: '<S312>/Logical Operator9'
         *  UnitDelay: '<S434>/Unit Delay'
         */
        HCDR_ac_B.VariantMergeForOutportIUMPR_Htr1_ECH_Min =
            (((HCDR_ac_DW.UnitDelay_DSTATE_fg) ||
              (HCDR_ac_DW.UnitDelay_DSTATE_j4)) && rtb_VeHCDR_b_PropSysActv_AD);

        /* Outputs for Atomic SubSystem: '<S312>/Signal Latch On With Reset1' */
        /* Logic: '<S433>/OR1' incorporates:
         *  Logic: '<S433>/OR'
         *  UnitDelay: '<S433>/Unit Delay'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_mf =
            (rtb_TmpSignalConversionAtVeHTIR_b_HVC_Ht ||
             (rtb_VariantMerge_For_Variant_Source_Va_p &&
              (HCDR_ac_DW.UnitDelay_DSTATE_mf)));

        /* End of Outputs for SubSystem: '<S312>/Signal Latch On With Reset1' */

        /* VariantMerge generated from: '<S295>/Heater1_LOC' incorporates:
         *  Logic: '<S301>/Logical2'
         */
        VeHCDR_b_Heater1_LOC_B4D = (rtb_TmpSignalConversionAtVeTAIR_b_HghRfr ||
            rtb_TmpSignalConversionAtVeBPCR_b_HV_Bat);

        /* Update for Delay: '<S312>/Delay' */
        HCDR_ac_DW.Delay_DSTATE_n = HCDR_ac_DW.UnitDelay_DSTATE_mf;
    }

    /* End of Outputs for SubSystem: '<S299>/Htr1_Diagnosis' */
    /* End of Outputs for SubSystem: '<S295>/Htr1_ECH_Diagnosis' */
#else

    /* Outputs for Atomic SubSystem: '<S295>/Htr1_ECH_Init' */
    /* VariantMerge generated from: '<S295>/HVC_Heater_WarningFlag' incorporates:
     *  Constant: '<S300>/FALSE Constant'
     */
    VeHCDR_b_Warning_Flag = false;

    /* VariantMerge generated from: '<S295>/Heater1_LOC' incorporates:
     *  Constant: '<S300>/FALSE Constant1'
     */
    VeHCDR_b_Heater1_LOC_B4D = false;

    /* VariantMerge generated from: '<S295>/IUMPR_Htr1_ECH_Perf' incorporates:
     *  Constant: '<S300>/FALSE Constant2'
     */
    HCDR_ac_B.VariantMergeForOutportIUMPR_Htr1_ECH_Per = false;

    /* VariantMerge generated from: '<S295>/IUMPR_Htr1_ECH_MinCmdThrshld_Met' incorporates:
     *  Constant: '<S300>/FALSE Constant3'
     */
    HCDR_ac_B.VariantMergeForOutportIUMPR_Htr1_ECH_Min = false;

    /* VariantMerge generated from: '<S295>/HVC_Heater_FltDtct' incorporates:
     *  Constant: '<S300>/FALSE Constant4'
     */
    VeHCDR_b_Htr1_FltDtct = false;

    /* VariantMerge generated from: '<S295>/VeHCDR_e_FaultSts_CoolHeaterAPerf' incorporates:
     *  Constant: '<S514>/Constant'
     */
    HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_m = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S295>/Htr1_ECH_Init' */
#endif

    /* End of Outputs for SubSystem: '<S10>/Htr1_ECH_Diagnosis' */

    /* Outputs for Atomic SubSystem: '<S10>/Htr2_EAH_Diagnosis' */
#if Rte_SysCon_Variant_HCDR_6

    /* Outputs for Atomic SubSystem: '<S296>/Htr2_EAH_Diagnosis' */
    /* Outputs for Enabled SubSystem: '<S515>/Htr2_Diagnosis' incorporates:
     *  EnablePort: '<S517>/VeHTRR_b_Heater2Slct'
     */
    if (rtb_TmpSignalConversionAtVeHTRR_b_Heat_m)
    {
        /* Inport: '<Root>/VeHTIR_b_Htr2CoreTemp_FA' */
        (void)Rte_Read_VeHTIR_b_Htr2CoreTemp_FA_Value(&tmpRead_1v);

        /* Inport: '<Root>/VeHTIR_T_Htr2CoreTemp' */
        (void)Rte_Read_VeHTIR_T_Htr2CoreTemp_Value(&tmpRead_1u);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr2PwrAct_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr2PwrAct_FA_Value(&tmpRead_1q);

        /* Inport: '<Root>/VeHTIR_b_Htr2_PCBTemp_FA' */
        (void)Rte_Read_VeHTIR_b_Htr2_PCBTemp_FA_Value(&tmpRead_1h);

        /* Inport: '<Root>/VeHTIR_T_Htr2_PCBTemp' */
        (void)Rte_Read_VeHTIR_T_Htr2_PCBTemp_Value(&tmpRead_1g);

        /* Inport: '<Root>/VeHTRR_T_HV_Htr2TempTgt' */
        (void)Rte_Read_VeHTRR_T_HV_Htr2TempTgt_Value(&tmpRead_1r);

        /* Logic: '<S527>/Logical' incorporates:
         *  Constant: '<S519>/Constant1'
         *  Constant: '<S519>/Constant2'
         *  Constant: '<S520>/Constant1'
         *  Constant: '<S520>/Constant2'
         *  Constant: '<S574>/Constant'
         *  Constant: '<S575>/Constant'
         *  Constant: '<S576>/Constant'
         *  Constant: '<S577>/Constant'
         *  Constant: '<S578>/Constant1'
         *  Constant: '<S578>/Constant2'
         *  Constant: '<S579>/Calib'
         *  Constant: '<S580>/Calib'
         *  Constant: '<S581>/Calib'
         *  Constant: '<S582>/Calib'
         *  Constant: '<S583>/Calib'
         *  Constant: '<S584>/Calib'
         *  Constant: '<S585>/Calib'
         *  Constant: '<S586>/Calib'
         *  Constant: '<S587>/Calib'
         *  Constant: '<S588>/Calib'
         *  Constant: '<S589>/Calib'
         *  Constant: '<S590>/Calib'
         *  Constant: '<S591>/Calib'
         *  Constant: '<S592>/Calib'
         *  Constant: '<S593>/Calib'
         *  Constant: '<S594>/Calib'
         *  Constant: '<S595>/Calib'
         *  Constant: '<S596>/Calib'
         *  Constant: '<S597>/Calib'
         *  DataStoreRead: '<S519>/StatusByte_LIN2_BusOff'
         *  DataStoreRead: '<S520>/StatusByte_LostCommHighVolCabinAirHtr'
         *  DataStoreRead: '<S578>/StatusByte_ThrmlRlyCtrlCkt'
         *  Logic: '<S519>/Logical Operator'
         *  Logic: '<S520>/Logical Operator'
         *  Logic: '<S527>/AND1'
         *  Logic: '<S527>/AND2'
         *  Logic: '<S527>/AND3'
         *  Logic: '<S527>/AND4'
         *  Logic: '<S527>/AND5'
         *  Logic: '<S527>/AND6'
         *  Logic: '<S527>/AND8'
         *  Logic: '<S527>/Logical10'
         *  Logic: '<S527>/Logical11'
         *  Logic: '<S527>/Logical12'
         *  Logic: '<S527>/Logical13'
         *  Logic: '<S527>/Logical2'
         *  Logic: '<S527>/Logical22'
         *  Logic: '<S527>/Logical23'
         *  Logic: '<S527>/Logical24'
         *  Logic: '<S527>/Logical25'
         *  Logic: '<S527>/Logical26'
         *  Logic: '<S527>/Logical27'
         *  Logic: '<S527>/Logical3'
         *  Logic: '<S527>/Logical4'
         *  Logic: '<S527>/Logical5'
         *  Logic: '<S527>/Logical6'
         *  Logic: '<S527>/Logical7'
         *  Logic: '<S527>/Logical8'
         *  Logic: '<S527>/Logical9'
         *  Logic: '<S578>/Logical Operator'
         *  RelationalOperator: '<S519>/Relational Operator1'
         *  RelationalOperator: '<S519>/Relational Operator2'
         *  RelationalOperator: '<S520>/Relational Operator1'
         *  RelationalOperator: '<S520>/Relational Operator2'
         *  RelationalOperator: '<S527>/Comparison1'
         *  RelationalOperator: '<S527>/Comparison11'
         *  RelationalOperator: '<S527>/Comparison12'
         *  RelationalOperator: '<S527>/Comparison2'
         *  RelationalOperator: '<S527>/Comparison3'
         *  RelationalOperator: '<S527>/Comparison4'
         *  RelationalOperator: '<S527>/Comparison5'
         *  RelationalOperator: '<S527>/Comparison6'
         *  RelationalOperator: '<S527>/Comparison7'
         *  RelationalOperator: '<S527>/Comparison8'
         *  RelationalOperator: '<S578>/Relational Operator1'
         *  RelationalOperator: '<S578>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S519>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S519>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S520>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S520>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S578>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S578>/Bitwise Operator2'
         *  SignalConversion generated from: '<S1>/VeHTIR_e_HV_ElecClntHtr2_Sts'
         *  SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl'
         *  Switch: '<S517>/Switch'
         */
        VeHCDR_b_Htr2_DiagEnbl_B4S = ((((((((((((((uint32)
            rtb_TmpSignalConversionAtVePMTR_e_ThrmlD) !=
            CePMTR_e_DISBL_All_Thrml) || (KeHCDR_b_HVC_Heater2_Diag_ThrmlEnbl)) &&
            rtb_TmpSignalConversionAtVeHTRR_b_HV_Htr) && ((!tmpRead_1q) ||
            (KeHCDR_b_Htr2_PwrActFA_OV))) && (((tmpRead_1g <=
            KeHCDR_T_Htr2_PCBTemp_Max) && ((!tmpRead_1h) ||
            (KeHCDR_b_Htr2_PCBTemp_FA_OV))) || (KeHCDR_b_Htr2_PCBTemp_OV))) &&
            (((tmpRead_1u <= KeHCDR_T_Htr2_CoreTemp_Max) && ((!tmpRead_1v) ||
            (KeHCDR_b_Htr2_CoreTemp_FA_OV))) || (KeHCDR_b_Htr2_CoreTemp_OV))) &&
            ((((((sint32)HCDR_ac_DW.StatusByte_LostCommHighVolCabinAirHtr) & 1) <=
               0) || ((((uint32)HCDR_ac_DW.StatusByte_LostCommHighVolCabinAirHtr)
                       & 64U) != 0U)) || (KeHCDR_b_LossCommHtr2_Fault_OV))) &&
            ((((((sint32)HCDR_ac_DW.StatusByte_LIN2_BusOff) & 1) <= 0) ||
              ((((uint32)HCDR_ac_DW.StatusByte_LIN2_BusOff) & 64U) != 0U)) ||
             (KeHCDR_b_BussOff_Htr2Fault_OV))) && (((rtb_VeHCDR_U_SysVltg_AD <=
            KeHCDR_U_Htr2_SysVltg_Max) && (rtb_VeHCDR_U_SysVltg_AD >=
            KeHCDR_U_Htr2_SysVltg_Min)) || (KeHCDR_b_Htr2_SysVltg_OV))) &&
            rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) &&
            ((((rtb_TmpSignalConversionAtVeHTRR_P_HV_Htr > KeHCDR_W_Htr2_PrvPowr)
               || (KeHCDR_b_Htr2PwrExpectds_Fault_OV)) && ((tmpRead_1r >
            KeHCDR_T_Htr2TrgtTemp) || (KeHCDR_b_Htr2TempTgt_Fault_OV))) ||
             ((((((uint32)rtb_TmpSignalConversionAtVeHTIR_e_HV_E_h) ==
                 CeHTIR_e_HtrSts_LockedUntilNextStart) || (((uint32)
            rtb_TmpSignalConversionAtVeHTIR_e_HV_E_h) ==
            CeHTIR_e_HtrSts_LockedUntilService)) || (((uint32)
            rtb_TmpSignalConversionAtVeHTIR_e_HV_E_h) ==
            CeHTIR_e_HtrSts_LockedPermanent)) && (KeHCDR_b_Htr2Status_Fault_En))))
            && ((KeHCDR_b_Htr2ThrmlRlyCtrlCkt_FA_OV) || (((((sint32)
            HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) != 0U))));

        /* Abs: '<S559>/Abs' incorporates:
         *  Abs: '<S560>/Abs'
         *  Sum: '<S559>/Sum'
         */
        rtb_TmpSignalConversionAtVeHTRR_P_HVC_Ht = fabsf
            (rtb_TmpSignalConversionAtVeHTRR_P_HV_Htr -
             rtb_TmpSignalConversionAtVeHTIR_P_HVC_Ht);

        /* RelationalOperator: '<S559>/Comparison2' incorporates:
         *  Abs: '<S559>/Abs'
         *  Constant: '<S572>/Calib'
         */
        VeHCDR_b_Htr2IsDeltaAccept_App1 =
            (rtb_TmpSignalConversionAtVeHTRR_P_HVC_Ht <= KeHCDR_W_DelHVHeat2Pwr);

        /* RelationalOperator: '<S563>/Comparison4' incorporates:
         *  Constant: '<S573>/Calib'
         *  RelationalOperator: '<S527>/Comparison7'
         *  SignalConversion generated from: '<S1>/VeHTIR_e_HV_ElecClntHtr2_Sts'
         */
        VeHCDR_b_Htr2IsStatusOperational =
            (rtb_TmpSignalConversionAtVeHTIR_e_HV_E_h ==
             KeHCDR_e_Htr2Operational_Status);

        /* Outputs for Atomic SubSystem: '<S562>/EdgeRising' */
        /* Logic: '<S566>/AND' incorporates:
         *  Logic: '<S566>/OR1'
         *  UnitDelay: '<S566>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHTRR_b_HV_Htr =
            ((VeHCDR_b_Htr2IsStatusOperational) &&
             (!HCDR_ac_DW.UnitDelay_DSTATE_ae));

        /* Update for UnitDelay: '<S566>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_ae = VeHCDR_b_Htr2IsStatusOperational;

        /* End of Outputs for SubSystem: '<S562>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S562>/EdgeRising1' */
        /* UnitDelay: '<S545>/Unit Delay1' incorporates:
         *  UnitDelay: '<S567>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHTRR_b_HVC_Ht =
            HCDR_ac_DW.UnitDelay_DSTATE_jw;

        /* Update for UnitDelay: '<S567>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_jw = VeHCDR_b_Htr2_DiagEnbl_B4S;

        /* Outputs for Atomic SubSystem: '<S562>/Counter Reset  Enabled ' */
        /* Switch: '<S565>/Switch1' incorporates:
         *  Constant: '<S570>/Calib'
         *  Logic: '<S562>/Logical1'
         *  Logic: '<S567>/AND'
         *  Logic: '<S567>/OR1'
         *  Switch: '<S562>/Switch1'
         */
        if (rtb_TmpSignalConversionAtVeHTRR_b_HV_Htr ||
                ((VeHCDR_b_Htr2_DiagEnbl_B4S) &&
                 (!rtb_TmpSignalConversionAtVeHTRR_b_HVC_Ht)))
        {
            /* Switch: '<S565>/Switch1' incorporates:
             *  Constant: '<S565>/Constant Value2'
             */
            VeHCDR_Cnt_HVClntHtr2Tm = 0U;
        }
        else
        {
            if (KeHCDR_b_Htr2DelayEnable_Sel)
            {
                /* Switch: '<S562>/Switch1' */
                rtb_TmpSignalConversionAtVePMTR_b_ThrmlS =
                    VeHCDR_b_Htr2IsStatusOperational;
            }
            else
            {
                /* Switch: '<S562>/Switch1' */
                rtb_TmpSignalConversionAtVePMTR_b_ThrmlS =
                    VeHCDR_b_Htr2_DiagEnbl_B4S;
            }

            /* Switch: '<S565>/Switch2' */
            if (rtb_TmpSignalConversionAtVePMTR_b_ThrmlS)
            {
                /* Switch: '<S565>/Switch1' incorporates:
                 *  Constant: '<S565>/Constant Value1'
                 *  Sum: '<S565>/Subtraction'
                 *  Switch: '<S565>/Switch2'
                 *  UnitDelay: '<S565>/Unit Delay'
                 */
                VeHCDR_Cnt_HVClntHtr2Tm = (uint16)(((uint32)
                    VeHCDR_Cnt_HVClntHtr2Tm) + 1U);
            }

            /* End of Switch: '<S565>/Switch2' */
        }

        /* End of Switch: '<S565>/Switch1' */
        /* End of Outputs for SubSystem: '<S562>/Counter Reset  Enabled ' */
        /* End of Outputs for SubSystem: '<S562>/EdgeRising1' */

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt_Value(&tmpRead_1t);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr2Core_OvrTmp' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr2Core_OvrTmp_Value(&tmpRead_1s);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr2Core_OvrTmp_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr2Core_OvrTmp_FA_Value
            (&rtb_RelationalOperator3_g);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr2PCBTmp_SnsrFlt_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr2PCBTmp_SnsrFlt_FA_Value(&rtb_AND_pt);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr2_LIN_ResErr' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr2_LIN_ResErr_Value(&rtb_OR1_lw);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr2_HV_CrntAct_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr2_HV_CrntAct_FA_Value(&tmpRead_1p);

        /* Inport: '<Root>/VeHTIR_I_HVC_Htr2_HV_CrntAct' */
        (void)Rte_Read_VeHTIR_I_HVC_Htr2_HV_CrntAct_Value(&tmpRead_1o);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr2ProcesMemory_Flt_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr2ProcesMemory_Flt_FA_Value(&tmpRead_1n);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr2ProcesMemory_Flt' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr2ProcesMemory_Flt_Value(&tmpRead_1m);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr2DrvFlt_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr2DrvFlt_FA_Value(&tmpRead_1l);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr2DrvFlt' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr2DrvFlt_Value(&tmpRead_1k);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr2_HV_CrntOutofRng_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr2_HV_CrntOutofRng_FA_Value(&tmpRead_1j);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr2_HV_CrntOutofRng' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr2_HV_CrntOutofRng_Value(&tmpRead_1i);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr2CoreTemp_SensFlt_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr2CoreTemp_SensFlt_FA_Value(&tmpRead_1f);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr2CoreTemp_SensFlt' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr2CoreTemp_SensFlt_Value(&tmpRead_1e);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr2HVCrnt_SnsrFlt_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr2HVCrnt_SnsrFlt_FA_Value(&tmpRead_1d);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt_Value(&tmpRead_1c);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr2TmpOvrheatg_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr2TmpOvrheatg_FA_Value(&tmpRead_1b);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr2TmpOvrheatg' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr2TmpOvrheatg_Value(&tmpRead_1a);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr2SelfProtect_Actv_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr2SelfProtect_Actv_FA_Value(&tmpRead_19);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr2SelfProtect_Actv' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr2SelfProtect_Actv_Value(&tmpRead_18);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr2Resis_PCB_OvrTemp_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr2Resis_PCB_OvrTemp_FA_Value(&tmpRead_17);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp_Value(&tmpRead_16);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr2IntCom_Err_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr2IntCom_Err_FA_Value(&tmpRead_15);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr2IntCom_Err' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr2IntCom_Err_Value(&tmpRead_14);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr2_LV_OutofRng_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr2_LV_OutofRng_FA_Value(&tmpRead_13);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr2_LV_OutofRng' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr2_LV_OutofRng_Value(&tmpRead_12);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr2_HV_OutofRng_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr2_HV_OutofRng_FA_Value(&tmpRead_11);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr2_HV_OutofRng' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr2_HV_OutofRng_Value(&tmpRead_10);

        /* RelationalOperator: '<S562>/Comparison1' incorporates:
         *  Constant: '<S568>/Calib'
         */
        VeHCDR_b_HVClntHtr2DelayExpire = (((float32)VeHCDR_Cnt_HVClntHtr2Tm) >
            KeHCDR_Cnt_Htr2DelayTm);

        /* Switch: '<S562>/Switch' */
        VeHCDR_b_HVBatCltHtr2_IsDeltaAccept_App =
            ((!VeHCDR_b_HVClntHtr2DelayExpire) ||
             (VeHCDR_b_Htr2IsDeltaAccept_App1));

        /* Logic: '<S562>/Logical4' incorporates:
         *  Logic: '<S562>/Logical2'
         *  Logic: '<S562>/Logical3'
         *  Logic: '<S562>/Logical6'
         */
        VeHCDR_b_HVBatCltHtr2_FltSymApp1 =
            ((!VeHCDR_b_HVBatCltHtr2_IsDeltaAccept_App) ||
             ((!VeHCDR_b_Htr2IsStatusOperational) && (VeHCDR_b_Htr2_DiagEnbl_B4S)));

        /* RelationalOperator: '<S560>/Comparison2' incorporates:
         *  Constant: '<S572>/Calib'
         */
        VeHCDR_b_Htr2IsDeltaAccept_App2 =
            (rtb_TmpSignalConversionAtVeHTRR_P_HVC_Ht > KeHCDR_W_DelHVHeat2Pwr);

        /* Gain: '<S571>/Gain' */
        VeHCDR_b_HVBatCltHtr2_FltSymApp2 = VeHCDR_b_Htr2IsDeltaAccept_App2;

        /* Switch: '<S562>/Switch2' incorporates:
         *  Constant: '<S569>/Calib'
         */
        if (KeHCDR_b_HTR2DAppSel)
        {
            /* Switch: '<S562>/Switch2' */
            VeHCDR_b_HVBatCltHtr2_FltSymPre = VeHCDR_b_HVBatCltHtr2_FltSymApp1;
        }
        else
        {
            /* Switch: '<S562>/Switch2' */
            VeHCDR_b_HVBatCltHtr2_FltSymPre = VeHCDR_b_HVBatCltHtr2_FltSymApp2;
        }

        /* End of Switch: '<S562>/Switch2' */

        /* Logic: '<S618>/Logical4' incorporates:
         *  Constant: '<S628>/Constant'
         *  Constant: '<S629>/Calib'
         *  Constant: '<S630>/Calib'
         *  Constant: '<S631>/Constant'
         *  Constant: '<S632>/Calib'
         *  Constant: '<S633>/Calib'
         *  Constant: '<S634>/Constant'
         *  Constant: '<S635>/Calib'
         *  Constant: '<S636>/Calib'
         *  Constant: '<S637>/Constant'
         *  Constant: '<S638>/Calib'
         *  Constant: '<S639>/Calib'
         *  Constant: '<S640>/Constant'
         *  Constant: '<S641>/Calib'
         *  Constant: '<S642>/Calib'
         *  Constant: '<S643>/Constant'
         *  Constant: '<S644>/Calib'
         *  Constant: '<S645>/Calib'
         *  Constant: '<S646>/Constant'
         *  Constant: '<S647>/Calib'
         *  Constant: '<S648>/Calib'
         *  Constant: '<S649>/Constant'
         *  Constant: '<S650>/Calib'
         *  Constant: '<S651>/Calib'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr2CoreTemp_SensFlt'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr2HVCrnt_SnsrFlt'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr2IntCom_Err'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr2Resis_PCB_OvrTemp'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr2SelfProtect_Actv'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr2TmpOvrheatg'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr2_HV_OutofRng'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr2_LV_OutofRng'
         *  Logic: '<S620>/Logical26'
         *  Logic: '<S620>/Logical27'
         *  Logic: '<S620>/Logical28'
         *  Logic: '<S621>/Logical23'
         *  Logic: '<S621>/Logical24'
         *  Logic: '<S621>/Logical25'
         *  Logic: '<S622>/Logical1'
         *  Logic: '<S622>/Logical2'
         *  Logic: '<S622>/Logical3'
         *  Logic: '<S623>/Logical11'
         *  Logic: '<S623>/Logical12'
         *  Logic: '<S623>/Logical13'
         *  Logic: '<S624>/Logical5'
         *  Logic: '<S624>/Logical6'
         *  Logic: '<S624>/Logical7'
         *  Logic: '<S625>/Logical14'
         *  Logic: '<S625>/Logical15'
         *  Logic: '<S625>/Logical16'
         *  Logic: '<S626>/Logical17'
         *  Logic: '<S626>/Logical18'
         *  Logic: '<S626>/Logical19'
         *  Logic: '<S627>/Logical20'
         *  Logic: '<S627>/Logical21'
         *  Logic: '<S627>/Logical22'
         *  RelationalOperator: '<S620>/Comparison4'
         *  RelationalOperator: '<S621>/Comparison4'
         *  RelationalOperator: '<S622>/Comparison4'
         *  RelationalOperator: '<S623>/Comparison4'
         *  RelationalOperator: '<S624>/Comparison4'
         *  RelationalOperator: '<S625>/Comparison4'
         *  RelationalOperator: '<S626>/Comparison4'
         *  RelationalOperator: '<S627>/Comparison4'
         */
        VeHCDR_b_Htr2Warning_Flag_Set_1 = ((((((((((((uint32)tmpRead_10) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_Htr2_HV_OutofRng_Enb)) ||
            (tmpRead_11 && (KeHCDR_b_Htr2_HV_OutofRng_FA_Enb))) || (((((uint32)
            tmpRead_12) == CeHTIR_e_Warning_True) &&
            (KeHCDR_b_Htr2_LV_OutofRng_Enb)) || (tmpRead_13 &&
            (KeHCDR_b_Htr2_LV_OutofRng_FA_Enb)))) || (((((uint32)tmpRead_14) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_Htr2IntCom_Err_Enb)) ||
            (tmpRead_15 && (KeHCDR_b_Htr2IntCom_Err_FA_Enb)))) || (((((uint32)
            tmpRead_16) == CeHTIR_e_Warning_True) &&
            (KeHCDR_b_Htr2Resis_PCB_OT_Enb)) || (tmpRead_17 &&
            (KeHCDR_b_Htr2Resis_PCB_OT_FA_Enb)))) || (((((uint32)tmpRead_18) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_Htr2SelfProtect_Actv_Enb)) ||
            (tmpRead_19 && (KeHCDR_b_Htr2SelfProtect_Actv_FA_Enb)))) ||
            (((((uint32)tmpRead_1a) == CeHTIR_e_Warning_True) &&
              (KeHCDR_b_Htr2TmpOvrheatg_Enb)) || (tmpRead_1b &&
            (KeHCDR_b_Htr2TmpOvrheatg_FA_Enb)))) || (((((uint32)tmpRead_1c) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_Htr2HVCrnt_SnsrFlt_Enb)) ||
            (tmpRead_1d && (KeHCDR_b_Htr2HVCrnt_SnsrFlt_FA_Enb)))) ||
            (((((uint32)tmpRead_1e) == CeHTIR_e_Warning_True) &&
              (KeHCDR_b_Htr2CoreTemp_SensFlt_Enb)) || (tmpRead_1f &&
            (KeHCDR_b_Htr2CoreTemp_SensFlt_FA_Enb))));

        /* Logic: '<S619>/Logical1' incorporates:
         *  Constant: '<S657>/Calib'
         *  Constant: '<S658>/Calib'
         *  Constant: '<S659>/Calib'
         *  Constant: '<S660>/Constant'
         *  Constant: '<S661>/Calib'
         *  Constant: '<S662>/Calib'
         *  Constant: '<S663>/Constant'
         *  Constant: '<S664>/Calib'
         *  Constant: '<S665>/Calib'
         *  Constant: '<S666>/Constant'
         *  Constant: '<S667>/Constant'
         *  Constant: '<S668>/Calib'
         *  Constant: '<S669>/Calib'
         *  Constant: '<S670>/Calib'
         *  Constant: '<S671>/Calib'
         *  Constant: '<S672>/Calib'
         *  Constant: '<S673>/Constant'
         *  Constant: '<S674>/Calib'
         *  Constant: '<S675>/Calib'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr2Core_OvrTmp'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr2DrvFlt'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr2PCBTmp_SnsrFlt'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr2ProcesMemory_Flt'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr2_HV_CrntOutofRng'
         *  Logic: '<S652>/Logical1'
         *  Logic: '<S652>/Logical2'
         *  Logic: '<S652>/Logical3'
         *  Logic: '<S653>/Logical1'
         *  Logic: '<S653>/Logical2'
         *  Logic: '<S653>/Logical3'
         *  Logic: '<S654>/Logical1'
         *  Logic: '<S654>/Logical2'
         *  Logic: '<S654>/Logical3'
         *  Logic: '<S655>/Logical1'
         *  Logic: '<S655>/Logical2'
         *  Logic: '<S655>/Logical3'
         *  Logic: '<S655>/Logical4'
         *  Logic: '<S655>/Logical5'
         *  Logic: '<S655>/Logical6'
         *  Logic: '<S656>/Logical1'
         *  Logic: '<S656>/Logical2'
         *  Logic: '<S656>/Logical3'
         *  RelationalOperator: '<S652>/Comparison4'
         *  RelationalOperator: '<S653>/Comparison4'
         *  RelationalOperator: '<S654>/Comparison4'
         *  RelationalOperator: '<S655>/Comparison1'
         *  RelationalOperator: '<S655>/Comparison4'
         *  RelationalOperator: '<S656>/Comparison4'
         */
        VeHCDR_b_Htr2Warning_Flag_Set_2 = (((((((((uint32)tmpRead_1i) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_HV_Htr2CrntOutofRng_Enb)) ||
            (tmpRead_1j && (KeHCDR_b_HV_Htr2CrntOutofRng_FA_Enb))) ||
            (((((uint32)tmpRead_1k) == CeHTIR_e_Warning_True) &&
              (KeHCDR_b_Htr2DrvFlt_Enb)) || (tmpRead_1l &&
            (KeHCDR_b_Htr2DrvFlt_FA_Enb)))) || (((((uint32)tmpRead_1m) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_Htr2ProcesMemory_Flt_Enb)) ||
            (tmpRead_1n && (KeHCDR_b_Htr2ProcesMemory_Flt_FA_Enb)))) ||
            (((tmpRead_1o >= KeHCDR_I_Htr2HVC_CrntAct_Max) &&
              (KeHCDR_b_Htr2_HV_CrntAct_Enb)) || (tmpRead_1p &&
            (KeHCDR_b_Htr2_HV_CrntAct_FA_Enb)))) ||
            (((((rtb_RelationalOperator3_g && (KeHCDR_b_Htr2Core_OvrTmp_FA_Enb))
                || (rtb_AND_pt && (KeHCDR_b_Htr2PCBTmp_SnsrFlt_FA_Enb))) ||
               (rtb_OR1_lw && (KeHCDR_b_Htr2_LIN_ResErr_Enb))) || ((((uint32)
            tmpRead_1s) == CeHTIR_e_Warning_True) &&
            (KeHCDR_b_Htr2Core_OvrTmp_Enb))) || ((((uint32)tmpRead_1t) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_Htr2PCBTmp_SnsrFlt_Enb))));

        /* VariantMerge generated from: '<S296>/HV_Heater2_WarningFlag' incorporates:
         *  Logic: '<S524>/Logical2'
         */
        VeHCDR_b_Htr2Warning_Flag = ((VeHCDR_b_Htr2Warning_Flag_Set_1) ||
            (VeHCDR_b_Htr2Warning_Flag_Set_2));

        /* Logic: '<S561>/Logical7' incorporates:
         *  Constant: '<S564>/Calib'
         *  Logic: '<S561>/Logical5'
         */
        VeHCDR_b_Htr2_FltSymptom = ((VeHCDR_b_HVBatCltHtr2_FltSymPre) ||
            ((VeHCDR_b_Htr2Warning_Flag) && (KeHCDR_b_Htr2WarningFlagEnb)));

        /* Outputs for Atomic SubSystem: '<S522>/Htr2_Check_Diag' */
        /* Logic: '<S525>/AND1' incorporates:
         *  Constant: '<S535>/Calib'
         */
        VeHCDR_b_Htr2_DiagEnbl = ((VeHCDR_b_Htr2_DiagEnbl_B4S) &&
            (KeHCDR_b_HVC_Heater2_XYEnbl));

        /* Outputs for Atomic SubSystem: '<S525>/EdgeRising' */
        /* Logic: '<S530>/AND' incorporates:
         *  Logic: '<S530>/OR1'
         *  UnitDelay: '<S530>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHTRR_b_HV_Htr = ((VeHCDR_b_Htr2_DiagEnbl) &&
            (!HCDR_ac_DW.UnitDelay_DSTATE_kw));

        /* Update for UnitDelay: '<S530>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_kw = VeHCDR_b_Htr2_DiagEnbl;

        /* End of Outputs for SubSystem: '<S525>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S525>/Signal Latch On With Reset' */
        /* Logic: '<S538>/OR1' incorporates:
         *  Logic: '<S525>/AND3'
         *  Logic: '<S538>/NOT'
         *  Logic: '<S538>/OR'
         *  UnitDelay: '<S525>/Unit Delay'
         *  UnitDelay: '<S525>/Unit Delay1'
         *  UnitDelay: '<S538>/Unit Delay'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_hca = ((VeHCDR_b_Htr2_DiagEnbl) ||
            ((((!rtb_TmpSignalConversionAtVeHTRR_b_HV_Htr) &&
               (!HCDR_ac_DW.UnitDelay_DSTATE_lz)) &&
              (!HCDR_ac_DW.UnitDelay1_DSTATE_k)) &&
             (HCDR_ac_DW.UnitDelay_DSTATE_hca)));

        /* End of Outputs for SubSystem: '<S525>/Signal Latch On With Reset' */

        /* Switch: '<S525>/Switch' incorporates:
         *  Constant: '<S537>/Calib'
         */
        if (!KeHCDR_b_Htr2DiagLatch_En)
        {
            /* Switch: '<S525>/Switch' */
            VeHCDR_b_Htr2_DiagEnbl = HCDR_ac_DW.UnitDelay_DSTATE_hca;
        }

        /* End of Switch: '<S525>/Switch' */

        /* RelationalOperator: '<S540>/Relational Operator3' incorporates:
         *  Constant: '<S540>/Constant3'
         *  DataStoreRead: '<S531>/StatusByte_HighVolCabinAirHtrperf'
         *  S-Function (sfix_bitop): '<S540>/Bitwise Operator2'
         */
        rtb_RelationalOperator3_g = ((((uint32)
            HCDR_ac_DW.StatusByte_HighVolCabinAirHtrperf) & 64U) == 0U);

        /* Outputs for Atomic SubSystem: '<S540>/EdgeFalling1' */
        /* Logic: '<S540>/Logical Operator' incorporates:
         *  Logic: '<S546>/OR1'
         */
        rtb_AND_pt = !rtb_RelationalOperator3_g;

        /* End of Outputs for SubSystem: '<S540>/EdgeFalling1' */

        /* Logic: '<S540>/Logical1' incorporates:
         *  Constant: '<S536>/Calib'
         *  Constant: '<S540>/Constant1'
         *  DataStoreRead: '<S531>/StatusByte_HighVolCabinAirHtrperf'
         *  Logic: '<S540>/Logical Operator'
         *  Logic: '<S540>/Logical10'
         *  Logic: '<S540>/Logical12'
         *  RelationalOperator: '<S540>/Relational Operator1'
         *  S-Function (sfix_bitop): '<S540>/Bitwise Operator3'
         */
        rtb_TmpSignalConversionAtVeHTRR_b_HV_Htr = ((VeHCDR_b_Htr2_DiagEnbl) &&
            ((!KeHCDR_b_HighVolCabinAirHtrperf_LtchEnbl) || (((((uint32)
            HCDR_ac_DW.StatusByte_HighVolCabinAirHtrperf) & 1U) == 0U) ||
            rtb_AND_pt)));

        /* Outputs for Atomic SubSystem: '<S540>/EdgeFalling1' */
        /* Logic: '<S546>/AND' incorporates:
         *  UnitDelay: '<S546>/Unit Delay'
         */
        rtb_AND_pt = (rtb_AND_pt && (HCDR_ac_DW.UnitDelay_DSTATE_cx));

        /* Update for UnitDelay: '<S546>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_cx = rtb_RelationalOperator3_g;

        /* End of Outputs for SubSystem: '<S540>/EdgeFalling1' */

        /* Logic: '<S540>/Logical5' incorporates:
         *  Logic: '<S523>/NOT4'
         */
        rtb_RelationalOperator3_g = ((rtb_VeHCDR_b_DsblDiagFailSafe_AD ||
            rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD) || rtb_AND_pt);

        /* Outputs for Atomic SubSystem: '<S545>/Counter Reset  Enabled 1' */
        /* Outputs for Atomic SubSystem: '<S545>/Counter Reset  Enabled ' */
        /* Switch: '<S552>/Switch1' incorporates:
         *  Constant: '<S534>/Calib'
         *  Logic: '<S525>/AND2'
         *  Logic: '<S545>/Fail Counter Reset'
         *  Logic: '<S545>/NOT6'
         *  Switch: '<S552>/Switch2'
         *  Switch: '<S553>/Switch1'
         *  UnitDelay: '<S545>/Unit Delay'
         *  UnitDelay: '<S545>/Unit Delay1'
         */
        if ((rtb_RelationalOperator3_g || (HCDR_ac_DW.UnitDelay_DSTATE_i1)) ||
                (HCDR_ac_DW.UnitDelay1_DSTATE_h))
        {
            /* Switch: '<S552>/Switch1' incorporates:
             *  Constant: '<S552>/Constant Value2'
             */
            VeHCDR_Cnt_Htr2_FailCnt = 0U;

            /* Switch: '<S553>/Switch1' incorporates:
             *  Constant: '<S553>/Constant Value2'
             */
            VeHCDR_Cnt_Htr2_SmpCnt = 0U;
        }
        else
        {
            if (rtb_TmpSignalConversionAtVeHTRR_b_HV_Htr &&
                    ((VeHCDR_b_Htr2_FltSymptom) && (KeHCDR_b_HVC_Heater2_FltEn)))
            {
                /* Switch: '<S552>/Switch1' incorporates:
                 *  Constant: '<S552>/Constant Value1'
                 *  Sum: '<S552>/Subtraction'
                 *  Switch: '<S552>/Switch2'
                 *  UnitDelay: '<S552>/Unit Delay'
                 */
                VeHCDR_Cnt_Htr2_FailCnt = (uint16)(((uint32)
                    VeHCDR_Cnt_Htr2_FailCnt) + 1U);
            }

            /* Switch: '<S553>/Switch2' */
            if (rtb_TmpSignalConversionAtVeHTRR_b_HV_Htr)
            {
                /* Switch: '<S553>/Switch1' incorporates:
                 *  Constant: '<S553>/Constant Value1'
                 *  Sum: '<S553>/Subtraction'
                 *  Switch: '<S553>/Switch2'
                 *  UnitDelay: '<S553>/Unit Delay'
                 */
                VeHCDR_Cnt_Htr2_SmpCnt = (uint16)(((uint32)
                    VeHCDR_Cnt_Htr2_SmpCnt) + 1U);
            }

            /* End of Switch: '<S553>/Switch2' */
        }

        /* End of Switch: '<S552>/Switch1' */
        /* End of Outputs for SubSystem: '<S545>/Counter Reset  Enabled ' */
        /* End of Outputs for SubSystem: '<S545>/Counter Reset  Enabled 1' */

        /* RelationalOperator: '<S545>/Greater Than or Equal ' incorporates:
         *  Constant: '<S532>/Calib'
         */
        HCDR_ac_DW.UnitDelay1_DSTATE_h = (VeHCDR_Cnt_Htr2_FailCnt >=
            KeHCDR_Cnt_HVC_Heater2_FailCnt);

        /* Logic: '<S545>/NOT5' incorporates:
         *  Constant: '<S533>/Calib'
         *  Logic: '<S545>/NOT3'
         *  RelationalOperator: '<S545>/Less Than  or Equal'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_i1 = ((VeHCDR_Cnt_Htr2_SmpCnt >=
            KeHCDR_Cnt_HVC_Heater2_SmpCnt) && (!HCDR_ac_DW.UnitDelay1_DSTATE_h));

        /* Switch: '<S558>/Switch1' incorporates:
         *  Constant: '<S551>/Constant Value'
         *  DataStoreWrite: '<S525>/Data Store Write3'
         *  Switch: '<S557>/Switch1'
         */
        if (rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD)
        {
            HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater2_MFOP = 0U;
        }
        else
        {
            if (HCDR_ac_DW.UnitDelay_DSTATE_i1)
            {
                /* MinMax: '<S551>/Minimum2' incorporates:
                 *  DataStoreRead: '<S525>/Data Store Read1'
                 *  Switch: '<S557>/Switch1'
                 */
                if (VeHCDR_Cnt_Htr2_FailCnt >
                        HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater2_MFOP)
                {
                    /* DataStoreWrite: '<S525>/Data Store Write3' incorporates:
                     *  Switch: '<S557>/Switch1'
                     */
                    HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater2_MFOP =
                        VeHCDR_Cnt_Htr2_FailCnt;
                }

                /* End of MinMax: '<S551>/Minimum2' */
            }
        }

        /* End of Switch: '<S558>/Switch1' */

        /* Outputs for Enabled SubSystem: '<S540>/Pass' */
        HCDR_ac_Pass(HCDR_ac_DW.UnitDelay_DSTATE_i1,
                     &HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_j);

        /* End of Outputs for SubSystem: '<S540>/Pass' */

        /* Outputs for Enabled SubSystem: '<S540>/Fail' */
        HCDR_ac_Fail(HCDR_ac_DW.UnitDelay1_DSTATE_h,
                     &HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_j);

        /* End of Outputs for SubSystem: '<S540>/Fail' */

        /* Outputs for Enabled SubSystem: '<S540>/Init' */
        HCDR_ac_Init_p(rtb_RelationalOperator3_g,
                       &HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_j);

        /* End of Outputs for SubSystem: '<S540>/Init' */

        /* RelationalOperator: '<S539>/Relational Operator' incorporates:
         *  RelationalOperator: '<S539>/Relational Operator1'
         *  RelationalOperator: '<S540>/Relational Operator'
         *  VariantMerge generated from: '<S296>/VeHCDR_e_FaultSts_HighVolCabinAirHtrperf'
         */
        rtb_RelationalOperator_m_tmp =
            HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_j;

        /* RelationalOperator: '<S539>/Relational Operator' incorporates:
         *  Constant: '<S544>/Constant'
         */
        rtb_TmpSignalConversionAtVeHTRR_b_HV_Htr = (((uint32)
            rtb_RelationalOperator_m_tmp) == CeDFIB_e_Fail);

        /* Outputs for Atomic SubSystem: '<S539>/EdgeRising' */
        /* Logic: '<S541>/OR1' incorporates:
         *  UnitDelay: '<S541>/Unit Delay'
         */
        rtb_RelationalOperator3_g = !HCDR_ac_DW.UnitDelay_DSTATE_ej;

        /* Update for UnitDelay: '<S541>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_ej =
            rtb_TmpSignalConversionAtVeHTRR_b_HV_Htr;

        /* End of Outputs for SubSystem: '<S539>/EdgeRising' */

        /* RelationalOperator: '<S539>/Relational Operator1' incorporates:
         *  Constant: '<S543>/Constant'
         */
        rtb_AND_pt = (((uint32)rtb_RelationalOperator_m_tmp) == CeDFIB_e_Pass);

        /* Outputs for Atomic SubSystem: '<S539>/EdgeRising1' */
        /* Logic: '<S542>/OR1' incorporates:
         *  UnitDelay: '<S542>/Unit Delay'
         */
        rtb_OR1_lw = !HCDR_ac_DW.UnitDelay_DSTATE_mq;

        /* Update for UnitDelay: '<S542>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_mq = rtb_AND_pt;

        /* End of Outputs for SubSystem: '<S539>/EdgeRising1' */

        /* VariantMerge generated from: '<S296>/HVC_Heater2_FltDtct' incorporates:
         *  Constant: '<S547>/Constant'
         *  RelationalOperator: '<S540>/Relational Operator'
         */
        VeHCDR_b_Htr2_FltDtct = (((uint32)rtb_RelationalOperator_m_tmp) ==
            CeDFIB_e_Fail);

        /* Outputs for Atomic SubSystem: '<S539>/EdgeRising1' */
        /* Update for UnitDelay: '<S525>/Unit Delay' incorporates:
         *  Logic: '<S542>/AND'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_lz = (rtb_AND_pt && rtb_OR1_lw);

        /* End of Outputs for SubSystem: '<S539>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S539>/EdgeRising' */
        /* Update for UnitDelay: '<S525>/Unit Delay1' incorporates:
         *  Logic: '<S541>/AND'
         */
        HCDR_ac_DW.UnitDelay1_DSTATE_k =
            (rtb_TmpSignalConversionAtVeHTRR_b_HV_Htr &&
             rtb_RelationalOperator3_g);

        /* End of Outputs for SubSystem: '<S539>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S522>/Htr2_Check_Diag' */
    }

    /* End of Outputs for SubSystem: '<S515>/Htr2_Diagnosis' */
    /* End of Outputs for SubSystem: '<S296>/Htr2_EAH_Diagnosis' */
#else

    /* Outputs for Atomic SubSystem: '<S296>/Htr2_EAH_Init' */
    /* VariantMerge generated from: '<S296>/HV_Heater2_WarningFlag' incorporates:
     *  Constant: '<S516>/FALSE Constant'
     */
    VeHCDR_b_Htr2Warning_Flag = false;

    /* VariantMerge generated from: '<S296>/HVC_Heater2_FltDtct' incorporates:
     *  Constant: '<S516>/FALSE Constant1'
     */
    VeHCDR_b_Htr2_FltDtct = false;

    /* VariantMerge generated from: '<S296>/VeHCDR_e_FaultSts_HighVolCabinAirHtrperf' incorporates:
     *  Constant: '<S676>/Constant'
     */
    HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_j = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S296>/Htr2_EAH_Init' */
#endif

    /* End of Outputs for SubSystem: '<S10>/Htr2_EAH_Diagnosis' */

    /* Outputs for Atomic SubSystem: '<S10>/Htr3_BHE_Diagnosis' */
#if Rte_SysCon_Variant_HCDR_7

    /* Outputs for Atomic SubSystem: '<S297>/Htr3_BHE_Diagnosis' */
    /* Outputs for Enabled SubSystem: '<S677>/Htr3_Diagnosis' incorporates:
     *  EnablePort: '<S679>/VeHTRR_b_Heater3Slct'
     */
    if (rtb_TmpSignalConversionAtVeHTRR_b_Heat_k)
    {
        /* Inport: '<Root>/VeBTRR_T_CellTempMinUsed' */
        (void)Rte_Read_VeBTRR_T_CellTempMinUsed_Value(&tmpRead_1x);

        /* Inport: '<Root>/VeHTRR_T_HV_Htr3TempTgt' */
        (void)Rte_Read_VeHTRR_T_HV_Htr3TempTgt_Value(&tmpRead_1w);

        /* Inport: '<Root>/VeHTIR_b_Htr3Cntctr_StckClsd_FA' */
        (void)Rte_Read_VeHTIR_b_Htr3Cntctr_StckClsd_FA_Value(&rtb_AND_l5);

        /* Logic: '<S685>/Logical' incorporates:
         *  Constant: '<S680>/Constant1'
         *  Constant: '<S680>/Constant2'
         *  Constant: '<S681>/Constant1'
         *  Constant: '<S681>/Constant2'
         *  Constant: '<S690>/Constant'
         *  Constant: '<S691>/Constant'
         *  Constant: '<S692>/Constant'
         *  Constant: '<S693>/Constant'
         *  Constant: '<S694>/Constant'
         *  Constant: '<S695>/Constant1'
         *  Constant: '<S695>/Constant2'
         *  Constant: '<S696>/Calib'
         *  Constant: '<S697>/Calib'
         *  Constant: '<S698>/Calib'
         *  Constant: '<S699>/Calib'
         *  Constant: '<S700>/Calib'
         *  Constant: '<S701>/Calib'
         *  Constant: '<S702>/Calib'
         *  Constant: '<S703>/Calib'
         *  Constant: '<S704>/Calib'
         *  Constant: '<S705>/Calib'
         *  Constant: '<S706>/Calib'
         *  Constant: '<S707>/Calib'
         *  Constant: '<S708>/Calib'
         *  DataStoreRead: '<S680>/StatusByte_CommBusOff'
         *  DataStoreRead: '<S681>/StatusByte_LosCommBECM_A'
         *  DataStoreRead: '<S695>/StatusByte_ThrmlRlyCtrlCkt'
         *  Logic: '<S680>/Logical Operator'
         *  Logic: '<S681>/Logical Operator'
         *  Logic: '<S685>/AND2'
         *  Logic: '<S685>/AND4'
         *  Logic: '<S685>/AND6'
         *  Logic: '<S685>/AND7'
         *  Logic: '<S685>/AND8'
         *  Logic: '<S685>/Logical1'
         *  Logic: '<S685>/Logical10'
         *  Logic: '<S685>/Logical11'
         *  Logic: '<S685>/Logical12'
         *  Logic: '<S685>/Logical13'
         *  Logic: '<S685>/Logical14'
         *  Logic: '<S685>/Logical15'
         *  Logic: '<S685>/Logical5'
         *  Logic: '<S685>/Logical6'
         *  Logic: '<S685>/Logical7'
         *  Logic: '<S685>/Logical8'
         *  Logic: '<S685>/Logical9'
         *  Logic: '<S695>/Logical Operator'
         *  RelationalOperator: '<S680>/Relational Operator1'
         *  RelationalOperator: '<S680>/Relational Operator2'
         *  RelationalOperator: '<S681>/Relational Operator1'
         *  RelationalOperator: '<S681>/Relational Operator2'
         *  RelationalOperator: '<S685>/Comparison1'
         *  RelationalOperator: '<S685>/Comparison12'
         *  RelationalOperator: '<S685>/Comparison2'
         *  RelationalOperator: '<S685>/Comparison4'
         *  RelationalOperator: '<S685>/Comparison5'
         *  RelationalOperator: '<S685>/Comparison6'
         *  RelationalOperator: '<S685>/Comparison7'
         *  RelationalOperator: '<S685>/Comparison8'
         *  RelationalOperator: '<S695>/Relational Operator1'
         *  RelationalOperator: '<S695>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S680>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S680>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S681>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S681>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S695>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S695>/Bitwise Operator2'
         *  SignalConversion generated from: '<S1>/VeHTIR_e_HV_ElecClntHtr3_Sts'
         *  SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl'
         */
        VeHCDR_b_Htr3_DiagEnbl_B4S = ((((((((((((uint32)
            rtb_TmpSignalConversionAtVePMTR_e_ThrmlD) !=
            CePMTR_e_DISBL_All_Thrml) || (KeHCDR_b_HVC_Heater3_Diag_ThrmlEnbl)) &&
            rtb_TmpSignalConversionAtVeHTRR_b_HV_H_e) && ((((((sint32)
            HCDR_ac_DW.StatusByte_LosCommBECM_A) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_LosCommBECM_A) & 64U) != 0U)) ||
            (KeHCDR_b_LOCBPCMHtr3_Fault_OV))) && ((((((sint32)
            HCDR_ac_DW.StatusByte_CommBusOff) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_CommBusOff) & 64U) != 0U)) ||
            (KeHCDR_b_Htr3BussOff_Fault_OV))) &&
            ((!rtb_TmpSignalConversionAtVeHTIR_b_HVC__k) ||
             (KeHCDR_b_Htr3PwrAct_FA_OV))) && ((tmpRead_1x <=
            KeHCDR_T_Htr3_BattTmpMin_Mxthrshld) || (KeHCDR_b_Htr3BattTmpMin_En)))
            && (((((rtb_TmpSignalConversionAtVeHTRR_P_HV_H_e >=
                    KeHCDR_W_Htr3_PrvPowr) || (KeHCDR_b_Htr3PwrExpectds_Fault_OV))
                  && ((tmpRead_1w >= KeHCDR_T_Htr3TrgtTemp) ||
                      (KeHCDR_b_Htr3TempTgt_Fault_OV))) || ((((((uint32)
            rtb_TmpSignalConversionAtVeHTIR_e_HV_E_e) ==
            CeHTIR_e_HtrSts_LockedUntilNextStart) || (((uint32)
            rtb_TmpSignalConversionAtVeHTIR_e_HV_E_e) ==
            CeHTIR_e_HtrSts_LockedUntilService)) || (((uint32)
            rtb_TmpSignalConversionAtVeHTIR_e_HV_E_e) ==
            CeHTIR_e_HtrSts_LockedPermanent)) && (KeHCDR_b_Htr3Status_Fault_En)))
                || ((((uint32)rtb_TmpSignalConversionAtVeHTIR_e_HV_Htr) ==
                     CeHTIR_e_Warning_True) &&
                    (KeHCDR_b_Htr3Cntctr_StckClsd_Fault_En)))) &&
            ((KeHCDR_b_Htr3ThrmlRlyCtrlCkt_FA_OV) || (((((sint32)
            HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) != 0U)))) &&
            rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

        /* Abs: '<S709>/Abs' incorporates:
         *  Abs: '<S710>/Abs'
         *  Sum: '<S709>/Sum'
         */
        rtb_TmpSignalConversionAtVeHTRR_P_HV_H_e = fabsf
            (rtb_TmpSignalConversionAtVeHTIR_P_HVC__b -
             rtb_TmpSignalConversionAtVeHTRR_P_HV_H_e);

        /* RelationalOperator: '<S709>/Comparison2' incorporates:
         *  Abs: '<S709>/Abs'
         *  Constant: '<S723>/Calib'
         */
        VeHCDR_b_Htr3IsDeltaAccept_App1 =
            (rtb_TmpSignalConversionAtVeHTRR_P_HV_H_e <= KeHCDR_W_DelHVHeat3Pwr);

        /* RelationalOperator: '<S710>/Comparison3' incorporates:
         *  Constant: '<S723>/Calib'
         */
        VeHCDR_b_Htr3IsDeltaAccept_App2 =
            (rtb_TmpSignalConversionAtVeHTRR_P_HV_H_e > KeHCDR_W_DelHVHeat3Pwr);

        /* VariantMerge generated from: '<S297>/HV_Heater3_WarningFlag' incorporates:
         *  Constant: '<S775>/Calib'
         *  Constant: '<S776>/Calib'
         *  Constant: '<S777>/Calib'
         *  Constant: '<S778>/Calib'
         *  Logic: '<S772>/Logical1'
         *  Logic: '<S773>/Logical5'
         *  Logic: '<S774>/Logical1'
         *  Logic: '<S774>/Logical2'
         *  Logic: '<S774>/Logical3'
         *  RelationalOperator: '<S774>/Comparison'
         */
        VeHCDR_b_Htr3Warning_Flag = ((rtb_TmpSignalConversionAtVeHTIR_b_HVC__k &&
            (KeHCDR_b_Htr3PwrAct_FA_Enb)) ||
            (((rtb_TmpSignalConversionAtVeHTIR_e_HV_Htr ==
               KeHCDR_e_Htr3Cntctr_StckClsdActv) &&
              (KeHCDR_b_Htr3Cntctr_StckClsdWrn_Enb)) || (rtb_AND_l5 &&
            (KeHCDR_b_Htr3Cntctr_StckClsdWrn_FA_Enb))));

        /* RelationalOperator: '<S713>/Comparison4' incorporates:
         *  Constant: '<S724>/Calib'
         *  RelationalOperator: '<S685>/Comparison7'
         *  SignalConversion generated from: '<S1>/VeHTIR_e_HV_ElecClntHtr3_Sts'
         */
        VeHCDR_b_Htr3IsStatusOperational =
            (rtb_TmpSignalConversionAtVeHTIR_e_HV_E_e ==
             KeHCDR_e_Htr3Operational_Status);

        /* Outputs for Atomic SubSystem: '<S712>/EdgeRising' */
        /* Logic: '<S716>/AND' incorporates:
         *  Logic: '<S716>/OR1'
         *  UnitDelay: '<S716>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHTIR_b_HVC__k =
            ((VeHCDR_b_Htr3IsStatusOperational) &&
             (!HCDR_ac_DW.UnitDelay_DSTATE_nm));

        /* Update for UnitDelay: '<S716>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_nm = VeHCDR_b_Htr3IsStatusOperational;

        /* End of Outputs for SubSystem: '<S712>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S712>/EdgeRising1' */
        /* UnitDelay: '<S737>/Unit Delay' incorporates:
         *  UnitDelay: '<S717>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHTRR_b_HV_H_e =
            HCDR_ac_DW.UnitDelay_DSTATE_hc;

        /* Update for UnitDelay: '<S717>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_hc = VeHCDR_b_Htr3_DiagEnbl_B4S;

        /* Outputs for Atomic SubSystem: '<S712>/Counter Reset  Enabled ' */
        /* Switch: '<S715>/Switch1' incorporates:
         *  Constant: '<S720>/Calib'
         *  Logic: '<S712>/Logical1'
         *  Logic: '<S717>/AND'
         *  Logic: '<S717>/OR1'
         *  Switch: '<S712>/Switch1'
         */
        if (rtb_TmpSignalConversionAtVeHTIR_b_HVC__k ||
                ((VeHCDR_b_Htr3_DiagEnbl_B4S) &&
                 (!rtb_TmpSignalConversionAtVeHTRR_b_HV_H_e)))
        {
            /* Switch: '<S715>/Switch1' incorporates:
             *  Constant: '<S715>/Constant Value2'
             */
            VeHCDR_Cnt_HVClntHtr3Tm = 0U;
        }
        else
        {
            if (KeHCDR_b_Htr3DelayEnable_Sel)
            {
                /* Switch: '<S712>/Switch1' */
                rtb_TmpSignalConversionAtVePMTR_b_ThrmlS =
                    VeHCDR_b_Htr3IsStatusOperational;
            }
            else
            {
                /* Switch: '<S712>/Switch1' */
                rtb_TmpSignalConversionAtVePMTR_b_ThrmlS =
                    VeHCDR_b_Htr3_DiagEnbl_B4S;
            }

            /* Switch: '<S715>/Switch2' */
            if (rtb_TmpSignalConversionAtVePMTR_b_ThrmlS)
            {
                /* Switch: '<S715>/Switch1' incorporates:
                 *  Constant: '<S715>/Constant Value1'
                 *  Sum: '<S715>/Subtraction'
                 *  Switch: '<S715>/Switch2'
                 *  UnitDelay: '<S715>/Unit Delay'
                 */
                VeHCDR_Cnt_HVClntHtr3Tm = (uint16)(((uint32)
                    VeHCDR_Cnt_HVClntHtr3Tm) + 1U);
            }

            /* End of Switch: '<S715>/Switch2' */
        }

        /* End of Switch: '<S715>/Switch1' */
        /* End of Outputs for SubSystem: '<S712>/Counter Reset  Enabled ' */
        /* End of Outputs for SubSystem: '<S712>/EdgeRising1' */

        /* RelationalOperator: '<S712>/Comparison1' incorporates:
         *  Constant: '<S718>/Calib'
         */
        VeHCDR_b_HVClntHtr3DelayExpire = (((float32)VeHCDR_Cnt_HVClntHtr3Tm) >
            KeHCDR_Cnt_Htr3DelayTm);

        /* Switch: '<S712>/Switch' */
        VeHCDR_b_HVBatCltHtr3_IsDeltaAccept_App =
            ((!VeHCDR_b_HVClntHtr3DelayExpire) ||
             (VeHCDR_b_Htr3IsDeltaAccept_App1));

        /* Logic: '<S712>/Logical4' incorporates:
         *  Constant: '<S722>/Constant'
         *  Logic: '<S712>/Logical2'
         *  Logic: '<S712>/Logical3'
         *  Logic: '<S712>/Logical5'
         *  Logic: '<S712>/Logical6'
         *  RelationalOperator: '<S713>/Comparison1'
         */
        VeHCDR_b_HVBatCltHtr3_FltSymApp1 =
            ((!VeHCDR_b_HVBatCltHtr3_IsDeltaAccept_App) || (((((uint32)
                 rtb_TmpSignalConversionAtVeHTIR_e_HV_Htr) ==
                CeHTIR_e_Warning_True) || (!VeHCDR_b_Htr3IsStatusOperational)) &&
              (VeHCDR_b_Htr3_DiagEnbl_B4S)));

        /* Gain: '<S721>/Gain' */
        VeHCDR_b_HVBatCltHtr3_FltSymApp2 = VeHCDR_b_Htr3IsDeltaAccept_App2;

        /* Switch: '<S712>/Switch2' incorporates:
         *  Constant: '<S719>/Calib'
         */
        if (KeHCDR_b_HTR3DAppSel)
        {
            /* Switch: '<S712>/Switch2' */
            VeHCDR_b_HVBatCltHtr3_FltSymPre = VeHCDR_b_HVBatCltHtr3_FltSymApp1;
        }
        else
        {
            /* Switch: '<S712>/Switch2' */
            VeHCDR_b_HVBatCltHtr3_FltSymPre = VeHCDR_b_HVBatCltHtr3_FltSymApp2;
        }

        /* End of Switch: '<S712>/Switch2' */

        /* Logic: '<S711>/Logical7' incorporates:
         *  Constant: '<S714>/Calib'
         *  Logic: '<S711>/Logical5'
         */
        VeHCDR_b_Htr3_FltSymptom = ((VeHCDR_b_HVBatCltHtr3_FltSymPre) ||
            ((VeHCDR_b_Htr3Warning_Flag) && (KeHCDR_b_Htr3WarningFlagEnb)));

        /* Outputs for Atomic SubSystem: '<S682>/Check_Htr3_Diag' */
        /* Logic: '<S687>/AND1' incorporates:
         *  Constant: '<S730>/Calib'
         */
        VeHCDR_b_Htr3_DiagEnbl = ((VeHCDR_b_Htr3_DiagEnbl_B4S) &&
            (KeHCDR_b_HVC_Heater3_XYEnbl));

        /* Outputs for Atomic SubSystem: '<S687>/EdgeRising' */
        /* Logic: '<S725>/AND' incorporates:
         *  Logic: '<S725>/OR1'
         *  UnitDelay: '<S725>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHTIR_b_HVC__k = ((VeHCDR_b_Htr3_DiagEnbl) &&
            (!HCDR_ac_DW.UnitDelay_DSTATE_j5));

        /* Update for UnitDelay: '<S725>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_j5 = VeHCDR_b_Htr3_DiagEnbl;

        /* End of Outputs for SubSystem: '<S687>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S687>/Signal Latch On With Reset' */
        /* Logic: '<S733>/OR1' incorporates:
         *  Logic: '<S687>/AND3'
         *  Logic: '<S733>/NOT'
         *  Logic: '<S733>/OR'
         *  UnitDelay: '<S687>/Unit Delay'
         *  UnitDelay: '<S687>/Unit Delay1'
         *  UnitDelay: '<S733>/Unit Delay'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_bx = ((VeHCDR_b_Htr3_DiagEnbl) ||
            ((((!rtb_TmpSignalConversionAtVeHTIR_b_HVC__k) &&
               (!HCDR_ac_DW.UnitDelay_DSTATE_a4)) &&
              (!HCDR_ac_DW.UnitDelay1_DSTATE_e)) &&
             (HCDR_ac_DW.UnitDelay_DSTATE_bx)));

        /* End of Outputs for SubSystem: '<S687>/Signal Latch On With Reset' */

        /* Switch: '<S687>/Switch' incorporates:
         *  Constant: '<S732>/Calib'
         */
        if (!KeHCDR_b_Htr3DiagLatch_En)
        {
            /* Switch: '<S687>/Switch' */
            VeHCDR_b_Htr3_DiagEnbl = HCDR_ac_DW.UnitDelay_DSTATE_bx;
        }

        /* End of Switch: '<S687>/Switch' */

        /* RelationalOperator: '<S735>/Relational Operator3' incorporates:
         *  Constant: '<S735>/Constant3'
         *  DataStoreRead: '<S726>/StatusByte_HeatingElmntPerf'
         *  S-Function (sfix_bitop): '<S735>/Bitwise Operator2'
         */
        rtb_TmpSignalConversionAtVeHTRR_b_HV_H_e = ((((uint32)
            HCDR_ac_DW.StatusByte_HeatingElmntPerf) & 64U) == 0U);

        /* Outputs for Atomic SubSystem: '<S735>/EdgeFalling1' */
        /* Logic: '<S735>/Logical Operator' incorporates:
         *  Logic: '<S741>/OR1'
         */
        rtb_AND_l5 = !rtb_TmpSignalConversionAtVeHTRR_b_HV_H_e;

        /* End of Outputs for SubSystem: '<S735>/EdgeFalling1' */

        /* Logic: '<S735>/Logical1' incorporates:
         *  Constant: '<S731>/Calib'
         *  Constant: '<S735>/Constant1'
         *  DataStoreRead: '<S726>/StatusByte_HeatingElmntPerf'
         *  Logic: '<S735>/Logical Operator'
         *  Logic: '<S735>/Logical10'
         *  Logic: '<S735>/Logical12'
         *  RelationalOperator: '<S735>/Relational Operator1'
         *  S-Function (sfix_bitop): '<S735>/Bitwise Operator3'
         */
        rtb_TmpSignalConversionAtVeHTIR_b_HVC__k = ((VeHCDR_b_Htr3_DiagEnbl) &&
            ((!KeHCDR_b_HeatingElmntPerf_LtchEnbl) || (((((uint32)
            HCDR_ac_DW.StatusByte_HeatingElmntPerf) & 1U) == 0U) || rtb_AND_l5)));

        /* Outputs for Atomic SubSystem: '<S735>/EdgeFalling1' */
        /* Logic: '<S741>/AND' incorporates:
         *  UnitDelay: '<S741>/Unit Delay'
         */
        rtb_AND_l5 = (rtb_AND_l5 && (HCDR_ac_DW.UnitDelay_DSTATE_l3));

        /* Update for UnitDelay: '<S741>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_l3 =
            rtb_TmpSignalConversionAtVeHTRR_b_HV_H_e;

        /* End of Outputs for SubSystem: '<S735>/EdgeFalling1' */

        /* Logic: '<S735>/Logical5' incorporates:
         *  Logic: '<S683>/NOT4'
         */
        rtb_TmpSignalConversionAtVeHTRR_b_HV_H_e =
            ((rtb_VeHCDR_b_DsblDiagFailSafe_AD ||
              rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD) || rtb_AND_l5);

        /* UnitDelay: '<S740>/Unit Delay1' incorporates:
         *  UnitDelay: '<S687>/Unit Delay'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_a4 = HCDR_ac_DW.UnitDelay1_DSTATE_d;

        /* Outputs for Atomic SubSystem: '<S740>/Counter Reset  Enabled 1' */
        /* Outputs for Atomic SubSystem: '<S740>/Counter Reset  Enabled ' */
        /* Switch: '<S747>/Switch1' incorporates:
         *  Constant: '<S729>/Calib'
         *  Logic: '<S687>/AND2'
         *  Logic: '<S740>/Fail Counter Reset'
         *  Logic: '<S740>/NOT6'
         *  Switch: '<S747>/Switch2'
         *  Switch: '<S748>/Switch1'
         *  UnitDelay: '<S687>/Unit Delay'
         *  UnitDelay: '<S740>/Unit Delay'
         */
        if ((rtb_TmpSignalConversionAtVeHTRR_b_HV_H_e ||
                (HCDR_ac_DW.UnitDelay_DSTATE_cl)) ||
                (HCDR_ac_DW.UnitDelay_DSTATE_a4))
        {
            /* Switch: '<S747>/Switch1' incorporates:
             *  Constant: '<S747>/Constant Value2'
             */
            VeHCDR_Cnt_Htr3_FailCnt = 0U;

            /* Switch: '<S748>/Switch1' incorporates:
             *  Constant: '<S748>/Constant Value2'
             */
            VeHCDR_Cnt_Htr3_SmpCnt = 0U;
        }
        else
        {
            if (rtb_TmpSignalConversionAtVeHTIR_b_HVC__k &&
                    ((VeHCDR_b_Htr3_FltSymptom) && (KeHCDR_b_HVC_Heater3_FltEn)))
            {
                /* Switch: '<S747>/Switch1' incorporates:
                 *  Constant: '<S747>/Constant Value1'
                 *  Sum: '<S747>/Subtraction'
                 *  Switch: '<S747>/Switch2'
                 *  UnitDelay: '<S747>/Unit Delay'
                 */
                VeHCDR_Cnt_Htr3_FailCnt = (uint16)(((uint32)
                    VeHCDR_Cnt_Htr3_FailCnt) + 1U);
            }

            /* Switch: '<S748>/Switch2' */
            if (rtb_TmpSignalConversionAtVeHTIR_b_HVC__k)
            {
                /* Switch: '<S748>/Switch1' incorporates:
                 *  Constant: '<S748>/Constant Value1'
                 *  Sum: '<S748>/Subtraction'
                 *  Switch: '<S748>/Switch2'
                 *  UnitDelay: '<S748>/Unit Delay'
                 */
                VeHCDR_Cnt_Htr3_SmpCnt = (uint16)(((uint32)
                    VeHCDR_Cnt_Htr3_SmpCnt) + 1U);
            }

            /* End of Switch: '<S748>/Switch2' */
        }

        /* End of Switch: '<S747>/Switch1' */
        /* End of Outputs for SubSystem: '<S740>/Counter Reset  Enabled ' */
        /* End of Outputs for SubSystem: '<S740>/Counter Reset  Enabled 1' */

        /* RelationalOperator: '<S740>/Greater Than or Equal ' incorporates:
         *  Constant: '<S727>/Calib'
         */
        HCDR_ac_DW.UnitDelay1_DSTATE_d = (VeHCDR_Cnt_Htr3_FailCnt >=
            KeHCDR_Cnt_HVC_Heater3_FailCnt);

        /* Logic: '<S740>/NOT5' incorporates:
         *  Constant: '<S728>/Calib'
         *  Logic: '<S740>/NOT3'
         *  RelationalOperator: '<S740>/Less Than  or Equal'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_cl = ((VeHCDR_Cnt_Htr3_SmpCnt >=
            KeHCDR_Cnt_HVC_Heater3_SmpCnt) && (!HCDR_ac_DW.UnitDelay1_DSTATE_d));

        /* Switch: '<S753>/Switch1' incorporates:
         *  Constant: '<S746>/Constant Value'
         *  DataStoreWrite: '<S687>/Data Store Write3'
         *  Switch: '<S752>/Switch1'
         */
        if (rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD)
        {
            HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater3_MFOP = 0U;
        }
        else
        {
            if (HCDR_ac_DW.UnitDelay_DSTATE_cl)
            {
                /* MinMax: '<S746>/Minimum2' incorporates:
                 *  DataStoreRead: '<S687>/Data Store Read1'
                 *  Switch: '<S752>/Switch1'
                 */
                if (VeHCDR_Cnt_Htr3_FailCnt >
                        HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater3_MFOP)
                {
                    /* DataStoreWrite: '<S687>/Data Store Write3' incorporates:
                     *  Switch: '<S752>/Switch1'
                     */
                    HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater3_MFOP =
                        VeHCDR_Cnt_Htr3_FailCnt;
                }

                /* End of MinMax: '<S746>/Minimum2' */
            }
        }

        /* End of Switch: '<S753>/Switch1' */

        /* Outputs for Enabled SubSystem: '<S735>/Pass' */
        HCDR_ac_Pass(HCDR_ac_DW.UnitDelay_DSTATE_cl,
                     &HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_c);

        /* End of Outputs for SubSystem: '<S735>/Pass' */

        /* Outputs for Enabled SubSystem: '<S735>/Fail' */
        HCDR_ac_Fail(HCDR_ac_DW.UnitDelay1_DSTATE_d,
                     &HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_c);

        /* End of Outputs for SubSystem: '<S735>/Fail' */

        /* Outputs for Enabled SubSystem: '<S735>/Init' */
        HCDR_ac_Init_p(rtb_TmpSignalConversionAtVeHTRR_b_HV_H_e,
                       &HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_c);

        /* End of Outputs for SubSystem: '<S735>/Init' */

        /* RelationalOperator: '<S734>/Relational Operator' incorporates:
         *  RelationalOperator: '<S734>/Relational Operator1'
         *  RelationalOperator: '<S735>/Relational Operator'
         *  VariantMerge generated from: '<S297>/VeHCDR_e_FaultSts_HeatingElmntPerf'
         */
        rtb_RelationalOperator_m_tmp =
            HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_c;

        /* RelationalOperator: '<S734>/Relational Operator' incorporates:
         *  Constant: '<S739>/Constant'
         */
        rtb_TmpSignalConversionAtVeHTIR_b_HVC__k = (((uint32)
            rtb_RelationalOperator_m_tmp) == CeDFIB_e_Fail);

        /* Outputs for Atomic SubSystem: '<S734>/EdgeRising' */
        /* Logic: '<S736>/OR1' incorporates:
         *  UnitDelay: '<S736>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHTRR_b_HV_H_e =
            !HCDR_ac_DW.UnitDelay_DSTATE_ie;

        /* Update for UnitDelay: '<S736>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_ie =
            rtb_TmpSignalConversionAtVeHTIR_b_HVC__k;

        /* End of Outputs for SubSystem: '<S734>/EdgeRising' */

        /* RelationalOperator: '<S734>/Relational Operator1' incorporates:
         *  Constant: '<S738>/Constant'
         */
        rtb_AND_l5 = (((uint32)rtb_RelationalOperator_m_tmp) == CeDFIB_e_Pass);

        /* Outputs for Atomic SubSystem: '<S734>/EdgeRising1' */
        /* Logic: '<S737>/OR1' incorporates:
         *  UnitDelay: '<S737>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHTRR_b_HV_Htr =
            !HCDR_ac_DW.UnitDelay_DSTATE_lr;

        /* Update for UnitDelay: '<S737>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_lr = rtb_AND_l5;

        /* End of Outputs for SubSystem: '<S734>/EdgeRising1' */

        /* VariantMerge generated from: '<S297>/HVC_Heater3_FltDtct' incorporates:
         *  Constant: '<S742>/Constant'
         *  RelationalOperator: '<S735>/Relational Operator'
         */
        VeHCDR_b_Htr3_FltDtct = (((uint32)rtb_RelationalOperator_m_tmp) ==
            CeDFIB_e_Fail);

        /* Outputs for Atomic SubSystem: '<S734>/EdgeRising1' */
        /* Update for UnitDelay: '<S687>/Unit Delay' incorporates:
         *  Logic: '<S737>/AND'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_a4 = (rtb_AND_l5 &&
            rtb_TmpSignalConversionAtVeHTRR_b_HV_Htr);

        /* End of Outputs for SubSystem: '<S734>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S734>/EdgeRising' */
        /* Update for UnitDelay: '<S687>/Unit Delay1' incorporates:
         *  Logic: '<S736>/AND'
         */
        HCDR_ac_DW.UnitDelay1_DSTATE_e =
            (rtb_TmpSignalConversionAtVeHTIR_b_HVC__k &&
             rtb_TmpSignalConversionAtVeHTRR_b_HV_H_e);

        /* End of Outputs for SubSystem: '<S734>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S682>/Check_Htr3_Diag' */
    }

    /* End of Outputs for SubSystem: '<S677>/Htr3_Diagnosis' */
    /* End of Outputs for SubSystem: '<S297>/Htr3_BHE_Diagnosis' */
#else

    /* Outputs for Atomic SubSystem: '<S297>/Htr3_BHE_Init' */
    /* VariantMerge generated from: '<S297>/HV_Heater3_WarningFlag' incorporates:
     *  Constant: '<S678>/FALSE Constant'
     */
    VeHCDR_b_Htr3Warning_Flag = false;

    /* VariantMerge generated from: '<S297>/HVC_Heater3_FltDtct' incorporates:
     *  Constant: '<S678>/FALSE Constant1'
     */
    VeHCDR_b_Htr3_FltDtct = false;

    /* VariantMerge generated from: '<S297>/VeHCDR_e_FaultSts_HeatingElmntPerf' incorporates:
     *  Constant: '<S779>/Constant'
     */
    HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_c = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S297>/Htr3_BHE_Init' */
#endif

    /* End of Outputs for SubSystem: '<S10>/Htr3_BHE_Diagnosis' */

    /* SignalConversion generated from: '<S4>/Htr4_LOC_BPCM_AD' incorporates:
     *  SignalConversion generated from: '<S4>/LTAP_LOC_AD'
     */
#if Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9

    /* VariantMerge generated from: '<S4>/Htr4_LOC_BPCM_AD' incorporates:
     *  Switch: '<S5>/Switch3'
     */
    rtb_VeHCDR_e_Htr4_LOC_BPCM_AD = VeHCDR_e_Htr4_LOC_BPCM_AD;

    /* VariantMerge generated from: '<S4>/LTAP_LOC_AD' incorporates:
     *  Switch: '<S5>/Switch26'
     */
    rtb_VeHCDR_e_LTAP_LOC_AD = VeHCDR_e_LTAP_LOC_AD;

#elif !Rte_SysCon_Variant_HCDR_8 || !Rte_SysCon_Variant_HCDR_9

    /* VariantMerge generated from: '<S4>/Htr4_LOC_BPCM_AD' incorporates:
     *  SignalConversion generated from: '<S4>/Htr4_LOC_BPCM_AD'
     */
    rtb_VeHCDR_e_Htr4_LOC_BPCM_AD = CeBPCR_e_LOC_BatClntHtr_False;

#endif

    /* End of SignalConversion generated from: '<S4>/Htr4_LOC_BPCM_AD' */

    /* SignalConversion generated from: '<S4>/BPCM_LINLOC_AD' incorporates:
     *  SignalConversion generated from: '<S4>/LTAP_LOC_AD'
     */
#if Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9

    /* VariantMerge generated from: '<S4>/BPCM_LINLOC_AD' incorporates:
     *  Switch: '<S5>/Switch28'
     */
    rtb_VeHCDR_e_BPCM_LINLOC_AD = VeHCDR_e_BPCM_LINLOC_AD;

#elif !Rte_SysCon_Variant_HCDR_8 || !Rte_SysCon_Variant_HCDR_9

    /* VariantMerge generated from: '<S4>/LTAP_LOC_AD' incorporates:
     *  SignalConversion generated from: '<S4>/LTAP_LOC_AD'
     */
    rtb_VeHCDR_e_LTAP_LOC_AD = CeBPCR_e_LOC_BCP_False;

    /* VariantMerge generated from: '<S4>/BPCM_LINLOC_AD' incorporates:
     *  SignalConversion generated from: '<S4>/BPCM_LINLOC_AD'
     */
    rtb_VeHCDR_e_BPCM_LINLOC_AD = CeBPCR_e_LIN_BusOff_Disabled;

#endif

    /* End of SignalConversion generated from: '<S4>/BPCM_LINLOC_AD' */

    /* SignalConversion generated from: '<S4>/Htr4_LOC_BPCM_FA_AD' incorporates:
     *  SignalConversion generated from: '<S4>/LTAP_LOC_FA_AD'
     */
#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9

    /* VariantMerge generated from: '<S4>/Htr4_LOC_BPCM_FA_AD' */
    rtb_VeHCDR_b_Htr4_LOC_BPCM_FA_AD = VeHCDR_b_Htr4_LOC_BPCM_FA_AD;

    /* VariantMerge generated from: '<S4>/LTAP_LOC_FA_AD' */
    rtb_VeHCDR_b_LTAP_LOC_FA_AD = VeHCDR_b_LTAP_LOC_FA_AD;

#elif !(!Rte_SysCon_Variant_HCDR_1) || !Rte_SysCon_Variant_HCDR_8 || !Rte_SysCon_Variant_HCDR_9

    /* VariantMerge generated from: '<S4>/Htr4_LOC_BPCM_FA_AD' incorporates:
     *  SignalConversion generated from: '<S4>/Htr4_LOC_BPCM_FA_AD'
     */
    rtb_VeHCDR_b_Htr4_LOC_BPCM_FA_AD = false;

#endif

    /* End of SignalConversion generated from: '<S4>/Htr4_LOC_BPCM_FA_AD' */

    /* SignalConversion generated from: '<S4>/BPCM_LINLOC_FA_AD' incorporates:
     *  SignalConversion generated from: '<S4>/LTAP_LOC_FA_AD'
     */
#if !Rte_SysCon_Variant_HCDR_1 && Rte_SysCon_Variant_HCDR_8 && Rte_SysCon_Variant_HCDR_9

    /* VariantMerge generated from: '<S4>/BPCM_LINLOC_FA_AD' */
    rtb_VeHCDR_b_BPCM_LINLOC_FA_AD = VeHCDR_b_BPCM_LINLOC_FA_AD;

#elif !(!Rte_SysCon_Variant_HCDR_1) || !Rte_SysCon_Variant_HCDR_8 || !Rte_SysCon_Variant_HCDR_9

    /* VariantMerge generated from: '<S4>/LTAP_LOC_FA_AD' incorporates:
     *  SignalConversion generated from: '<S4>/LTAP_LOC_FA_AD'
     */
    rtb_VeHCDR_b_LTAP_LOC_FA_AD = false;

    /* VariantMerge generated from: '<S4>/BPCM_LINLOC_FA_AD' incorporates:
     *  SignalConversion generated from: '<S4>/BPCM_LINLOC_FA_AD'
     */
    rtb_VeHCDR_b_BPCM_LINLOC_FA_AD = false;

#endif

    /* End of SignalConversion generated from: '<S4>/BPCM_LINLOC_FA_AD' */

    /* Outputs for Atomic SubSystem: '<S10>/Htr4_BCH_Diagnosis' */
#if Rte_SysCon_Variant_HCDR_8

    /* Outputs for Atomic SubSystem: '<S298>/Htr4_BCH_Diagnosis' */
    /* Outputs for Enabled SubSystem: '<S780>/Htr4_Diagnosis' incorporates:
     *  EnablePort: '<S782>/VeHTRR_b_Heater4Slct'
     */
    if (rtb_TmpSignalConversionAtVeHTRR_b_Heat_c)
    {
        /* Outputs for Atomic SubSystem: '<S783>/Htr4_BusOff_Slct' */
#if Rte_SysCon_Variant_HCDR_1

        /* Outputs for Atomic SubSystem: '<S787>/M182_BusOff_Slct' */
        /* VariantMerge generated from: '<S787>/No_BusOff_Err' incorporates:
         *  Constant: '<S792>/Constant1'
         *  Constant: '<S792>/Constant2'
         *  DataStoreRead: '<S792>/StatusByte_LIN2_BusOff'
         *  Logic: '<S788>/Logical Operator'
         *  Logic: '<S792>/Logical Operator'
         *  RelationalOperator: '<S792>/Relational Operator1'
         *  RelationalOperator: '<S792>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S792>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S792>/Bitwise Operator2'
         */
        rtb_VariantMergeForOutportNo_BusOff_Err = (((((sint32)
            HCDR_ac_DW.StatusByte_LIN2_BusOff) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_LIN2_BusOff) & 64U) != 0U));

        /* End of Outputs for SubSystem: '<S787>/M182_BusOff_Slct' */
#elif Rte_SysCon_Variant_HCDR_11

        /* Outputs for Atomic SubSystem: '<S787>/P2GEN4_BusOff_Slct' */
        /* VariantMerge generated from: '<S787>/No_BusOff_Err' incorporates:
         *  Constant: '<S796>/Constant1'
         *  Constant: '<S796>/Constant2'
         *  DataStoreRead: '<S796>/StatusByte_LIN1_BusOff'
         *  Logic: '<S790>/Logical Operator'
         *  Logic: '<S796>/Logical Operator'
         *  RelationalOperator: '<S796>/Relational Operator1'
         *  RelationalOperator: '<S796>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S796>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S796>/Bitwise Operator2'
         */
        rtb_VariantMergeForOutportNo_BusOff_Err = (((((sint32)
            HCDR_ac_DW.StatusByte_LIN1_BusOff) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_LIN1_BusOff) & 64U) != 0U));

        /* End of Outputs for SubSystem: '<S787>/P2GEN4_BusOff_Slct' */
#elif Rte_SysCon_Variant_HCDR_10

        /* Outputs for Atomic SubSystem: '<S787>/With_RedundantCANBusOff_Slct' */
        /* VariantMerge generated from: '<S787>/No_BusOff_Err' incorporates:
         *  Constant: '<S797>/Constant1'
         *  Constant: '<S797>/Constant2'
         *  Constant: '<S798>/Constant1'
         *  Constant: '<S798>/Constant2'
         *  Constant: '<S799>/Constant1'
         *  Constant: '<S799>/Constant2'
         *  Constant: '<S800>/Constant1'
         *  Constant: '<S800>/Constant2'
         *  Constant: '<S801>/Constant1'
         *  Constant: '<S801>/Constant2'
         *  Constant: '<S802>/Constant1'
         *  Constant: '<S802>/Constant2'
         *  DataStoreRead: '<S797>/StatusByte_CommBusOff'
         *  DataStoreRead: '<S798>/StatusByte_CommBus_B_Off'
         *  DataStoreRead: '<S799>/StatusByte_InvData_BECM'
         *  DataStoreRead: '<S800>/StatusByte_InvData_BECM_CANC11'
         *  DataStoreRead: '<S801>/StatusByte_LosCommBECM_A'
         *  DataStoreRead: '<S802>/StatusByte_LosCommBECM_A_CANC11'
         *  Logic: '<S791>/Logical Operator'
         *  Logic: '<S791>/Logical Operator1'
         *  Logic: '<S791>/Logical Operator10'
         *  Logic: '<S791>/Logical Operator2'
         *  Logic: '<S791>/Logical Operator3'
         *  Logic: '<S791>/Logical Operator6'
         *  Logic: '<S791>/Logical Operator7'
         *  Logic: '<S791>/Logical Operator8'
         *  Logic: '<S791>/Logical Operator9'
         *  Logic: '<S797>/Logical Operator'
         *  Logic: '<S798>/Logical Operator'
         *  Logic: '<S799>/Logical Operator'
         *  Logic: '<S800>/Logical Operator'
         *  Logic: '<S801>/Logical Operator'
         *  Logic: '<S802>/Logical Operator'
         *  RelationalOperator: '<S797>/Relational Operator1'
         *  RelationalOperator: '<S797>/Relational Operator2'
         *  RelationalOperator: '<S798>/Relational Operator1'
         *  RelationalOperator: '<S798>/Relational Operator2'
         *  RelationalOperator: '<S799>/Relational Operator1'
         *  RelationalOperator: '<S799>/Relational Operator2'
         *  RelationalOperator: '<S800>/Relational Operator1'
         *  RelationalOperator: '<S800>/Relational Operator2'
         *  RelationalOperator: '<S801>/Relational Operator1'
         *  RelationalOperator: '<S801>/Relational Operator2'
         *  RelationalOperator: '<S802>/Relational Operator1'
         *  RelationalOperator: '<S802>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S797>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S797>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S798>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S798>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S799>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S799>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S800>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S800>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S801>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S801>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S802>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S802>/Bitwise Operator2'
         */
        rtb_VariantMergeForOutportNo_BusOff_Err = ((((((((sint32)
            HCDR_ac_DW.StatusByte_CommBusOff) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_CommBusOff) & 64U) != 0U)) && (((((sint32)
            HCDR_ac_DW.StatusByte_LosCommBECM_A) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_LosCommBECM_A) & 64U) != 0U))) && (((((sint32)
            HCDR_ac_DW.StatusByte_InvData_BECM) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_InvData_BECM) & 64U) != 0U))) || (((((((sint32)
            HCDR_ac_DW.StatusByte_CommBus_B_Off) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_CommBus_B_Off) & 64U) != 0U)) && (((((sint32)
            HCDR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 64U) != 0U))) &&
            (((((sint32)HCDR_ac_DW.StatusByte_InvData_BECM_CANC11) & 1) <= 0) ||
             ((((uint32)HCDR_ac_DW.StatusByte_InvData_BECM_CANC11) & 64U) != 0U))));

        /* End of Outputs for SubSystem: '<S787>/With_RedundantCANBusOff_Slct' */
#else

        /* Outputs for Atomic SubSystem: '<S787>/Others' */
        /* VariantMerge generated from: '<S787>/No_BusOff_Err' incorporates:
         *  Constant: '<S793>/Constant1'
         *  Constant: '<S793>/Constant2'
         *  Constant: '<S794>/Constant1'
         *  Constant: '<S794>/Constant2'
         *  Constant: '<S795>/Constant1'
         *  Constant: '<S795>/Constant2'
         *  DataStoreRead: '<S793>/StatusByte_CommBusOff'
         *  DataStoreRead: '<S794>/StatusByte_InvData_BECM'
         *  DataStoreRead: '<S795>/StatusByte_LosCommBECM_A'
         *  Logic: '<S789>/Logical Operator'
         *  Logic: '<S789>/Logical Operator10'
         *  Logic: '<S789>/Logical Operator8'
         *  Logic: '<S789>/Logical Operator9'
         *  Logic: '<S793>/Logical Operator'
         *  Logic: '<S794>/Logical Operator'
         *  Logic: '<S795>/Logical Operator'
         *  RelationalOperator: '<S793>/Relational Operator1'
         *  RelationalOperator: '<S793>/Relational Operator2'
         *  RelationalOperator: '<S794>/Relational Operator1'
         *  RelationalOperator: '<S794>/Relational Operator2'
         *  RelationalOperator: '<S795>/Relational Operator1'
         *  RelationalOperator: '<S795>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S793>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S793>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S794>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S794>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S795>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S795>/Bitwise Operator2'
         */
        rtb_VariantMergeForOutportNo_BusOff_Err = (((((((sint32)
            HCDR_ac_DW.StatusByte_CommBusOff) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_CommBusOff) & 64U) != 0U)) && (((((sint32)
            HCDR_ac_DW.StatusByte_LosCommBECM_A) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_LosCommBECM_A) & 64U) != 0U))) && (((((sint32)
            HCDR_ac_DW.StatusByte_InvData_BECM) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_InvData_BECM) & 64U) != 0U)));

        /* End of Outputs for SubSystem: '<S787>/Others' */
#endif

        /* End of Outputs for SubSystem: '<S783>/Htr4_BusOff_Slct' */

        /* RelationalOperator: '<S803>/Comparison1' incorporates:
         *  Constant: '<S810>/Calib'
         */
        rtb_TmpSignalConversionAtVeHTIR_b_HVC__k =
            (rtb_TmpSignalConversionAtVeHTIR_P_HVC__n > KeHCDR_W_ActPwr_BCH);

        /* Switch: '<S803>/Switch1' */
        if (rtb_TmpSignalConversionAtVeAATR_b_EstAmb)
        {
            /* Switch: '<S803>/Switch1' incorporates:
             *  Constant: '<S811>/Calib'
             */
            rtb_TmpSignalConversionAtVeAATR_T_EstAmb =
                KeHCDR_t_Htr4AmbTmpDelayTmrMax;
        }
        else
        {
            /* Switch: '<S803>/Switch1' incorporates:
             *  Lookup_n-D: '<S812>/Vector'
             *  SignalConversion generated from: '<S1>/VeAATR_T_EstAmbAirTemp'
             */
            rtb_TmpSignalConversionAtVeAATR_T_EstAmb = look1_iflf_binlca_16a
                (rtb_TmpSignalConversionAtVeAATR_T_EstAmb, ((const float32 *)
                  &(KxHCDR_t_Htr4AmbTmpDelayTmrLUT[0])), ((const float32 *)
                  &(KtHCDR_t_Htr4AmbTmpDelayTmrLUT[0])), 4U);
        }

        /* End of Switch: '<S803>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S803>/Turn On Delay Time' */
        /* Outputs for Atomic SubSystem: '<S813>/EdgeRising' */
        /* Logic: '<S814>/AND' incorporates:
         *  Logic: '<S814>/OR1'
         *  UnitDelay: '<S814>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeAATR_b_EstAmb =
            (rtb_TmpSignalConversionAtVeHTIR_b_HVC__k &&
             (!HCDR_ac_DW.UnitDelay_DSTATE_kh));

        /* Update for UnitDelay: '<S814>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_kh =
            rtb_TmpSignalConversionAtVeHTIR_b_HVC__k;

        /* End of Outputs for SubSystem: '<S813>/EdgeRising' */

        /* Switch: '<S813>/Switch1' incorporates:
         *  Constant: '<S809>/Calib'
         *  Constant: '<S813>/Constant Value1'
         *  Logic: '<S813>/OR'
         *  Logic: '<S813>/OR1'
         *  MinMax: '<S813>/Minimum'
         *  Sum: '<S813>/Summation'
         *  UnitDelay: '<S813>/Unit Delay'
         */
        if ((!rtb_TmpSignalConversionAtVeHTIR_b_HVC__k) ||
                rtb_TmpSignalConversionAtVeAATR_b_EstAmb)
        {
            HCDR_ac_DW.UnitDelay_DSTATE_i = 0.0F;
        }
        else
        {
            HCDR_ac_DW.UnitDelay_DSTATE_i = fminf
                (rtb_TmpSignalConversionAtVeAATR_T_EstAmb, HeHCDR_t_MedTEH +
                 HCDR_ac_DW.UnitDelay_DSTATE_i);
        }

        /* End of Switch: '<S813>/Switch1' */
        /* End of Outputs for SubSystem: '<S803>/Turn On Delay Time' */

        /* SignalConversion generated from: '<S806>/Variant Source' */
#if Rte_SysCon_Variant_HCDR_1

        /* Outputs for Atomic SubSystem: '<S806>/M182' */
        /* Logic: '<S807>/Logical Operator10' incorporates:
         *  Constant: '<S896>/Calib'
         *  Logic: '<S866>/AND19'
         *  Logic: '<S866>/AND2'
         *  Logic: '<S866>/AND9'
         */
        rtb_LogicalOperator10_k = ((rtb_TmpSignalConversionAtVeTMIR_b_MainRl ||
            (KeHCDR_b_RlyCmdEnbl_OV)) && (!rtb_LogicalOperator_gvk));

        /* End of Outputs for SubSystem: '<S806>/M182' */
#endif

        /* End of SignalConversion generated from: '<S806>/Variant Source' */

        /* Inport: '<Root>/VeTHDR_b_PPCTIS_FltDtct' */
        (void)Rte_Read_VeTHDR_b_PPCTIS_FltDtct_Value(&tmpRead_3a);

        /* Inport: '<Root>/VeBRDR_b_HV_BTOS2_FltDtct' */
        (void)Rte_Read_VeBRDR_b_HV_BTOS2_FltDtct_Value(&rtb_Logical11);

        /* Inport: '<Root>/VeBRDR_b_HV_BTOS_FltDtct' */
        (void)Rte_Read_VeBRDR_b_HV_BTOS_FltDtct_Value(&rtb_Logical7_ms);

        /* Inport: '<Root>/VeBRDR_b_LTAP_TmpFltDtct' */
        (void)Rte_Read_VeBRDR_b_LTAP_TmpFltDtct_Value(&tmpRead_39);

        /* Inport: '<Root>/VeTHMR_e_BatThrmlSt' */
        (void)Rte_Read_VeTHMR_e_BatThrmlSt_Value(&tmpRead_32);

        /* Inport: '<Root>/VeTHDR_b_PPCTIS_RtnltyEnbl' */
        (void)Rte_Read_VeTHDR_b_PPCTIS_RtnltyEnbl_Value(&tmpRead_31);

        /* Inport: '<Root>/VeBRDR_b_BTOS2Diag_Enbl' */
        (void)Rte_Read_VeBRDR_b_BTOS2Diag_Enbl_Value(&tmpRead_2z);

        /* Inport: '<Root>/VeBRDR_b_BTOSDiag_Enbl' */
        (void)Rte_Read_VeBRDR_b_BTOSDiag_Enbl_Value(&tmpRead_2y);

        /* Inport: '<Root>/VeBRDR_b_LTAPDiag_Enbl' */
        (void)Rte_Read_VeBRDR_b_LTAPDiag_Enbl_Value(&tmpRead_2x);

        /* Logic: '<S851>/Logical3' incorporates:
         *  Constant: '<S862>/Calib'
         *  Logic: '<S851>/Logical4'
         */
        rtb_TmpSignalConversionAtVeTMIR_b_MainRl = (((!tmpRead_39) && tmpRead_2x)
            && (KeHCDR_b_Enbl_LTAPTmp_Htr4Diag));

        /* Logic: '<S851>/Logical2' incorporates:
         *  Logic: '<S851>/Logical Operator'
         */
        rtb_TmpSignalConversionAtVeAATR_b_EstAmb = ((!tmpRead_3a) && tmpRead_31);

        /* RelationalOperator: '<S851>/Relational Operator' incorporates:
         *  Constant: '<S854>/Constant'
         *  Inport: '<Root>/VeTHMR_e_BatThrmlSt'
         */
        rtb_LogicalOperator_gvk = (((uint32)tmpRead_32) ==
            CeTHMR_e_PassiveCooling);

        /* Logic: '<S851>/Logical6' incorporates:
         *  Constant: '<S863>/Calib'
         */
        VeHCDR_b_PassiveCoolingEnabled = (rtb_LogicalOperator_gvk &&
            (KeHCDR_b_Enbl_PPCTIS_Chk));

        /* Logic: '<S851>/Logical7' incorporates:
         *  Logic: '<S851>/Logical8'
         */
        rtb_Logical7_ms = ((!rtb_Logical7_ms) && tmpRead_2y);

        /* Logic: '<S851>/Logical11' incorporates:
         *  Constant: '<S860>/Calib'
         *  Logic: '<S851>/Logical13'
         *  Logic: '<S851>/Logical14'
         */
        rtb_Logical11 = ((KeHCDR_b_BattTemp_4SnsrCnfg) && ((!rtb_Logical11) &&
                          tmpRead_2z));

        /* Switch: '<S857>/Switch1' */
        if (VeHCDR_b_PassiveCoolingEnabled)
        {
            /* Switch: '<S857>/Switch1' incorporates:
             *  Logic: '<S851>/Logical9'
             */
            VeHCDR_b_Htr4ClntIn_NoFlt =
                (rtb_TmpSignalConversionAtVeTMIR_b_MainRl ||
                 rtb_TmpSignalConversionAtVeAATR_b_EstAmb);
        }
        else
        {
            /* Switch: '<S857>/Switch1' incorporates:
             *  Logic: '<S851>/Logical Operator1'
             */
            VeHCDR_b_Htr4ClntIn_NoFlt =
                ((rtb_TmpSignalConversionAtVeTMIR_b_MainRl || rtb_Logical7_ms) ||
                 rtb_Logical11);
        }

        /* End of Switch: '<S857>/Switch1' */

        /* Switch: '<S856>/Switch1' incorporates:
         *  Logic: '<S851>/Logical1'
         *  Logic: '<S851>/Logical5'
         *  Switch: '<S855>/Switch1'
         *  Switch: '<S858>/Switch1'
         *  Switch: '<S859>/Switch1'
         */
        if (rtb_TmpSignalConversionAtVeTMIR_b_MainRl)
        {
            /* Switch: '<S856>/Switch1' incorporates:
             *  Inport: '<Root>/VePMIR_T_LTActvPumpTemp'
             */
            (void)Rte_Read_VePMIR_T_LTActvPumpTemp_Value
                ((&(VeHCDR_T_Htr4ClntIn_Tmp)));
        }
        else if (rtb_LogicalOperator_gvk &&
                 rtb_TmpSignalConversionAtVeAATR_b_EstAmb)
        {
            /* Switch: '<S856>/Switch1' incorporates:
             *  Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn'
             *  Switch: '<S855>/Switch1'
             */
            (void)Rte_Read_VeTMIR_T_PsvPmpClnt_TmpIn_Value
                ((&(VeHCDR_T_Htr4ClntIn_Tmp)));
        }
        else if (rtb_Logical7_ms && rtb_Logical11)
        {
            /* Switch: '<S851>/Switch2' incorporates:
             *  Constant: '<S861>/Calib'
             *  Switch: '<S855>/Switch1'
             *  Switch: '<S858>/Switch1'
             */
            if (KeHCDR_b_BattTemp_MaxEnb)
            {
                /* Switch: '<S856>/Switch1' incorporates:
                 *  MinMax: '<S851>/MinMax1'
                 *  Switch: '<S851>/Switch2'
                 */
                VeHCDR_T_Htr4ClntIn_Tmp = fmaxf
                    (rtb_TmpSignalConversionAtVeTRIR_T_HV_B_o,
                     rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat);
            }
            else
            {
                /* Switch: '<S856>/Switch1' incorporates:
                 *  MinMax: '<S851>/MinMax3'
                 *  Switch: '<S851>/Switch2'
                 */
                VeHCDR_T_Htr4ClntIn_Tmp = fminf
                    (rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat,
                     rtb_TmpSignalConversionAtVeTRIR_T_HV_B_o);
            }

            /* End of Switch: '<S851>/Switch2' */
        }
        else if (rtb_Logical11)
        {
            /* Switch: '<S859>/Switch1' incorporates:
             *  Switch: '<S855>/Switch1'
             *  Switch: '<S856>/Switch1'
             *  Switch: '<S858>/Switch1'
             */
            VeHCDR_T_Htr4ClntIn_Tmp = rtb_TmpSignalConversionAtVeTRIR_T_HV_B_o;
        }
        else
        {
            /* Switch: '<S856>/Switch1' incorporates:
             *  Switch: '<S855>/Switch1'
             *  Switch: '<S858>/Switch1'
             *  Switch: '<S859>/Switch1'
             */
            VeHCDR_T_Htr4ClntIn_Tmp = rtb_TmpSignalConversionAtVeTRIR_T_HV_Bat;
        }

        /* End of Switch: '<S856>/Switch1' */

        /* SignalConversion generated from: '<S806>/Variant Source' incorporates:
         *  Inport: '<Root>/VeBRDR_b_BHOSDiag_Enbl'
         *  Inport: '<Root>/VeBRDR_b_HV_BHOS_FltDtct'
         *  Inport: '<Root>/VeBRDR_e_HV_Bat_CltLvlLo'
         */
#if !Rte_SysCon_Variant_HCDR_1

        /* Outputs for Atomic SubSystem: '<S806>/Other' */
        (void)Rte_Read_VeBRDR_b_HV_BHOS_FltDtct_Value(&tmpRead_38);
        (void)Rte_Read_VeBRDR_e_HV_Bat_CltLvlLo_Value(&tmpRead_30);
        (void)Rte_Read_VeBRDR_b_BHOSDiag_Enbl_Value(&tmpRead_2v);

        /* Logic: '<S807>/Logical Operator10' incorporates:
         *  Constant: '<S897>/Constant'
         *  Constant: '<S898>/Constant'
         *  Constant: '<S899>/Constant'
         *  Constant: '<S900>/Constant'
         *  Constant: '<S901>/Constant1'
         *  Constant: '<S901>/Constant2'
         *  Constant: '<S902>/Calib'
         *  Constant: '<S903>/Calib'
         *  Constant: '<S904>/Calib'
         *  Constant: '<S905>/Calib'
         *  Constant: '<S906>/Calib'
         *  Constant: '<S907>/Calib'
         *  Constant: '<S908>/Calib'
         *  Constant: '<S909>/Calib'
         *  Constant: '<S910>/Calib'
         *  Constant: '<S911>/Calib'
         *  Constant: '<S912>/Calib'
         *  Constant: '<S913>/Calib'
         *  Constant: '<S914>/Calib'
         *  Constant: '<S915>/Calib'
         *  DataStoreRead: '<S901>/StatusByte_ThrmlRlyCtrlCkt'
         *  Inport: '<Root>/VeBRDR_b_BHOSDiag_Enbl'
         *  Inport: '<Root>/VeBRDR_b_HV_BHOS_FltDtct'
         *  Inport: '<Root>/VeBRDR_e_HV_Bat_CltLvlLo'
         *  Logic: '<S867>/AND1'
         *  Logic: '<S867>/AND10'
         *  Logic: '<S867>/AND11'
         *  Logic: '<S867>/AND12'
         *  Logic: '<S867>/AND13'
         *  Logic: '<S867>/AND18'
         *  Logic: '<S867>/AND3'
         *  Logic: '<S867>/AND4'
         *  Logic: '<S867>/AND5'
         *  Logic: '<S867>/AND7'
         *  Logic: '<S867>/AND8'
         *  Logic: '<S867>/Logical1'
         *  Logic: '<S867>/Logical12'
         *  Logic: '<S867>/Logical13'
         *  Logic: '<S867>/Logical14'
         *  Logic: '<S867>/Logical15'
         *  Logic: '<S867>/Logical17'
         *  Logic: '<S867>/Logical18'
         *  Logic: '<S867>/Logical19'
         *  Logic: '<S867>/Logical2'
         *  Logic: '<S867>/Logical20'
         *  Logic: '<S867>/Logical21'
         *  Logic: '<S867>/Logical22'
         *  Logic: '<S867>/Logical3'
         *  Logic: '<S867>/Logical4'
         *  Logic: '<S901>/Logical Operator'
         *  RelationalOperator: '<S867>/Comparison1'
         *  RelationalOperator: '<S867>/Comparison10'
         *  RelationalOperator: '<S867>/Comparison3'
         *  RelationalOperator: '<S867>/Comparison8'
         *  RelationalOperator: '<S867>/Comparison9'
         *  RelationalOperator: '<S901>/Relational Operator1'
         *  RelationalOperator: '<S901>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S901>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S901>/Bitwise Operator2'
         *  VariantMerge generated from: '<S4>/BPCM_LINLOC_AD'
         *  VariantMerge generated from: '<S4>/Htr4_LOC_BPCM_AD'
         *  VariantMerge generated from: '<S4>/LTAP_LOC_AD'
         */
        rtb_LogicalOperator10_k = (((((((((VeHCDR_b_Htr4ClntIn_NoFlt) ||
            (KeHCDR_b_Htr4_Inlet_Fault_OV)) && (((((uint32)
            rtb_VeHCDR_e_Htr4_LOC_BPCM_AD) == CeBPCR_e_LOC_BatClntHtr_False) &&
            ((!rtb_VeHCDR_b_Htr4_LOC_BPCM_FA_AD) ||
             (KeHCDR_b_LossCommHtr4FA_Fault_OV))) ||
            (KeHCDR_b_LossCommHtr4_Fault_OV))) && ((VeHCDR_T_Htr4ClntIn_Tmp <=
            KeHCDR_T_HVC_Htr4ClntIn_Temp_Max) || (KeHCDR_b_Htr4ClntIn_Max_En))) &&
            (((((uint32)tmpRead_30) != CeBRDR_e_BatCltLvlLo) ||
              (KeHCDR_b_Htr4BotlLvl_Fault_OV)) &&
             ((!rtb_VariantMerge_For_Variant_Source_Va_c) ||
              (KeHCDR_b_Htr4BotlLvl_BSW_flt_OV)))) && (((((uint32)
            rtb_VeHCDR_e_BPCM_LINLOC_AD) == CeBPCR_e_LIN_BusOff_Disabled) &&
            ((!rtb_VeHCDR_b_BPCM_LINLOC_FA_AD) ||
             (KeHCDR_b_Htr4_BPCM_LINFA_Fault_OV))) ||
            (KeHCDR_b_Htr4_BPCM_LIN_Fault_OV))) && (((((uint32)
            rtb_VeHCDR_e_LTAP_LOC_AD) == CeBPCR_e_LOC_BCP_False) &&
            ((!rtb_VeHCDR_b_LTAP_LOC_FA_AD) || (KeHCDR_b_Htr4_LTAP_LOCFA_OV))) ||
            (KeHCDR_b_Htr4_LTAP_LOC_OV))) && ((tmpRead_2v && ((!tmpRead_38) ||
            (KeHCDR_b_Htr4TempOutFA_FltDtct_OV))) ||
            (KeHCDR_b_Htr4TempOut_FltDtct_OV))) && ((((((sint32)
            HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) != 0U)) ||
            (KeHCDR_b_Htr4ThrmlRlyCtrlCkt_FA_OV)));

        /* End of Outputs for SubSystem: '<S806>/Other' */
#endif

        /* End of SignalConversion generated from: '<S806>/Variant Source' */

        /* Inport: '<Root>/VeHTRR_T_HV_Htr4TempTgt' */
        (void)Rte_Read_VeHTRR_T_HV_Htr4TempTgt_Value(&tmpRead_2w);

        /* Logic: '<S807>/Logical Operator10' incorporates:
         *  Constant: '<S868>/Constant'
         *  Constant: '<S869>/Constant'
         *  Constant: '<S870>/Constant1'
         *  Constant: '<S870>/Constant2'
         *  Constant: '<S871>/Constant1'
         *  Constant: '<S871>/Constant2'
         *  Constant: '<S872>/Constant1'
         *  Constant: '<S872>/Constant2'
         *  Constant: '<S873>/Constant1'
         *  Constant: '<S873>/Constant2'
         *  Constant: '<S874>/Calib'
         *  Constant: '<S875>/Calib'
         *  Constant: '<S876>/Calib'
         *  Constant: '<S877>/Calib'
         *  Constant: '<S878>/Calib'
         *  Constant: '<S879>/Calib'
         *  Constant: '<S880>/Calib'
         *  Constant: '<S881>/Calib'
         *  Constant: '<S882>/Calib'
         *  DataStoreRead: '<S870>/StatusByte_BattCoolPmpOveSpd'
         *  DataStoreRead: '<S871>/StatusByte_BattCoolPmpPerf'
         *  DataStoreRead: '<S872>/StatusByte_LostCommHB_CoolPmp'
         *  DataStoreRead: '<S873>/StatusByte_LostCommHB_CooltHtr4'
         *  Logic: '<S806>/Logical'
         *  Logic: '<S864>/AND14'
         *  Logic: '<S864>/AND15'
         *  Logic: '<S864>/AND16'
         *  Logic: '<S864>/AND17'
         *  Logic: '<S864>/Logical Operator'
         *  Logic: '<S864>/Logical Operator1'
         *  Logic: '<S864>/Logical Operator2'
         *  Logic: '<S864>/Logical Operator3'
         *  Logic: '<S864>/Logical Operator4'
         *  Logic: '<S864>/Logical Operator5'
         *  Logic: '<S864>/Logical Operator6'
         *  Logic: '<S864>/Logical1'
         *  Logic: '<S864>/Logical3'
         *  Logic: '<S864>/Logical5'
         *  Logic: '<S870>/Logical Operator'
         *  Logic: '<S871>/Logical Operator'
         *  Logic: '<S872>/Logical Operator'
         *  Logic: '<S873>/Logical Operator'
         *  RelationalOperator: '<S864>/Comparison12'
         *  RelationalOperator: '<S864>/Relational Operator'
         *  RelationalOperator: '<S864>/Relational Operator1'
         *  RelationalOperator: '<S864>/Relational Operator2'
         *  RelationalOperator: '<S870>/Relational Operator1'
         *  RelationalOperator: '<S870>/Relational Operator2'
         *  RelationalOperator: '<S871>/Relational Operator1'
         *  RelationalOperator: '<S871>/Relational Operator2'
         *  RelationalOperator: '<S872>/Relational Operator1'
         *  RelationalOperator: '<S872>/Relational Operator2'
         *  RelationalOperator: '<S873>/Relational Operator1'
         *  RelationalOperator: '<S873>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S870>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S870>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S871>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S871>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S872>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S872>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S873>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S873>/Bitwise Operator2'
         *  SignalConversion generated from: '<S1>/VeBPCR_e_HV_BatCntctrStat'
         *  SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl'
         */
        rtb_LogicalOperator10_k = (((((((((((((uint32)
            rtb_TmpSignalConversionAtVePMTR_e_ThrmlD) !=
            CePMTR_e_DISBL_All_Thrml) || (KeHCDR_b_HVC_Heater4_Diag_ThrmlEnbl)) &&
            (((rtb_VeHCDR_U_SysVltg_AD <= KeHCDR_U_Htr4_SysVltg_Max) &&
              (rtb_VeHCDR_U_SysVltg_AD >= KeHCDR_U_Htr4_SysVltg_Min)) ||
             (KeHCDR_b_Htr4_SysVltg_OV))) &&
            rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) &&
            rtb_VariantMergeForOutportNo_BusOff_Err) && ((((((sint32)
            HCDR_ac_DW.StatusByte_LostCommHB_CooltHtr4) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_LostCommHB_CooltHtr4) & 64U) != 0U)) ||
            (KeHCDR_b_Htr4_LossCommBCH_OV))) && ((((((sint32)
            HCDR_ac_DW.StatusByte_LostCommHB_CoolPmp) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_LostCommHB_CoolPmp) & 64U) != 0U)) ||
            (KeHCDR_b_Htr4_LossCommBCP_OV))) && ((((((sint32)
            HCDR_ac_DW.StatusByte_BattCoolPmpPerf) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_BattCoolPmpPerf) & 64U) != 0U)) ||
            (KeHCDR_b_Htr4_BCPPerf_OV))) && ((((((sint32)
            HCDR_ac_DW.StatusByte_BattCoolPmpOveSpd) & 1) <= 0) || ((((uint32)
            HCDR_ac_DW.StatusByte_BattCoolPmpOveSpd) & 64U) != 0U)) ||
            (KeHCDR_b_Htr4_BCPDryRun_OV))) && (((((uint32)
            rtb_TmpSignalConversionAtVeBPCR_e_HV_Bat) == CeHVTR_e_Closed) &&
            rtb_VariantMergeForOutportLeHCDR_b_BatCn) ||
            (KeHCDR_b_Htr4HV_BatCntctrStat_OV))) && rtb_LogicalOperator10_k);

        /* Logic: '<S865>/Logical5' */
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = (rtb_LogicalOperator10_k &&
            rtb_TmpSignalConversionAtVeHTIR_b_HVC__e);

        /* Outputs for Atomic SubSystem: '<S865>/Turn On Delay Time' */
        /* Outputs for Atomic SubSystem: '<S894>/EdgeRising' */
        /* Logic: '<S895>/AND' incorporates:
         *  Logic: '<S895>/OR1'
         *  UnitDelay: '<S895>/Unit Delay'
         */
        rtb_VeHCDR_b_Htr4_LOC_BPCM_FA_AD =
            (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
             (!HCDR_ac_DW.UnitDelay_DSTATE_hw));

        /* Update for UnitDelay: '<S895>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_hw =
            rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

        /* End of Outputs for SubSystem: '<S894>/EdgeRising' */

        /* Switch: '<S894>/Switch1' incorporates:
         *  Constant: '<S886>/Calib'
         *  Constant: '<S893>/Calib'
         *  Constant: '<S894>/Constant Value1'
         *  Logic: '<S894>/OR'
         *  Logic: '<S894>/OR1'
         *  MinMax: '<S894>/Minimum'
         *  Sum: '<S894>/Summation'
         *  UnitDelay: '<S894>/Unit Delay'
         */
        if ((!rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) ||
                rtb_VeHCDR_b_Htr4_LOC_BPCM_FA_AD)
        {
            HCDR_ac_DW.UnitDelay_DSTATE_g = 0.0F;
        }
        else
        {
            HCDR_ac_DW.UnitDelay_DSTATE_g = fminf(KeHCDR_t_Htr4PwrActFA_WaitTime,
                HeHCDR_t_MedTEH + HCDR_ac_DW.UnitDelay_DSTATE_g);
        }

        /* End of Switch: '<S894>/Switch1' */
        /* End of Outputs for SubSystem: '<S865>/Turn On Delay Time' */

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr4PwrExpectd_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr4PwrExpectd_FA_Value(&tmpRead_2u);

        /* Inport: '<Root>/VeHTIR_P_HVC_Htr4PwrExpectd' */
        (void)Rte_Read_VeHTIR_P_HVC_Htr4PwrExpectd_Value(&tmpRead_2t);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr4ClntIn_Temp_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr4ClntIn_Temp_FA_Value(&tmpRead_2s);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr4ClntOut_Temp_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr4ClntOut_Temp_FA_Value(&tmpRead_2r);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr4_LIN_ResErr' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr4_LIN_ResErr_Value(&tmpRead_2q);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr4_HV_CrntAct_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr4_HV_CrntAct_FA_Value(&tmpRead_2p);

        /* Inport: '<Root>/VeHTIR_I_HVC_Htr4_HV_CrntAct' */
        (void)Rte_Read_VeHTIR_I_HVC_Htr4_HV_CrntAct_Value(&tmpRead_2o);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr4ProcesMemory_Flt_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr4ProcesMemory_Flt_FA_Value(&tmpRead_2n);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr4ProcesMemory_Flt' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr4ProcesMemory_Flt_Value(&tmpRead_2m);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr4DrvFlt_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr4DrvFlt_FA_Value(&tmpRead_2l);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr4DrvFlt' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr4DrvFlt_Value(&tmpRead_2k);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr4_HV_CrntOutofRng_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr4_HV_CrntOutofRng_FA_Value(&tmpRead_2j);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr4_HV_CrntOutofRng' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr4_HV_CrntOutofRng_Value(&tmpRead_2i);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr4_DCDC_VltgOutofRng_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr4_DCDC_VltgOutofRng_FA_Value(&tmpRead_2h);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng_Value(&tmpRead_2g);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr4CoreTemp_SensFlt_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr4CoreTemp_SensFlt_FA_Value(&tmpRead_2f);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr4CoreTemp_SensFlt' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr4CoreTemp_SensFlt_Value(&tmpRead_2e);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr4ClntIn_TempSensFlt_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr4ClntIn_TempSensFlt_FA_Value(&tmpRead_2d);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt_Value(&tmpRead_2c);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr4ClntOut_TempSensFlt_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr4ClntOut_TempSensFlt_FA_Value(&tmpRead_2b);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt_Value(&tmpRead_2a);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr4SelfProtect_Actv_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr4SelfProtect_Actv_FA_Value(&tmpRead_29);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr4SelfProtect_Actv' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr4SelfProtect_Actv_Value(&tmpRead_28);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr4Resis_PCB_OvrTemp_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr4Resis_PCB_OvrTemp_FA_Value(&tmpRead_27);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp_Value(&tmpRead_26);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr4IntCom_Err_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr4IntCom_Err_FA_Value(&tmpRead_25);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr4IntCom_Err' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr4IntCom_Err_Value(&tmpRead_24);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr4ClntTemp_OutofRng_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr4ClntTemp_OutofRng_FA_Value(&tmpRead_23);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr4ClntTemp_OutofRng' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr4ClntTemp_OutofRng_Value(&tmpRead_22);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr4_LV_OutofRng_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr4_LV_OutofRng_FA_Value(&tmpRead_21);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr4_LV_OutofRng' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr4_LV_OutofRng_Value(&tmpRead_20);

        /* Inport: '<Root>/VeHTIR_b_HVC_Htr4_HV_OutofRng_FA' */
        (void)Rte_Read_VeHTIR_b_HVC_Htr4_HV_OutofRng_FA_Value(&tmpRead_1z);

        /* Inport: '<Root>/VeHTIR_e_HVC_Htr4_HV_OutofRng' */
        (void)Rte_Read_VeHTIR_e_HVC_Htr4_HV_OutofRng_Value(&tmpRead_1y);

        /* Outputs for Atomic SubSystem: '<S865>/Turn On Delay Time' */
        /* Logic: '<S894>/AND' incorporates:
         *  Constant: '<S893>/Calib'
         *  RelationalOperator: '<S894>/Greater  Than'
         *  UnitDelay: '<S894>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
            (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
             (HCDR_ac_DW.UnitDelay_DSTATE_g >= KeHCDR_t_Htr4PwrActFA_WaitTime));

        /* End of Outputs for SubSystem: '<S865>/Turn On Delay Time' */

        /* Outputs for Atomic SubSystem: '<S803>/Turn On Delay Time' */
        /* Logic: '<S865>/Logical9' incorporates:
         *  Constant: '<S883>/Constant'
         *  Constant: '<S884>/Constant'
         *  Constant: '<S885>/Constant'
         *  Constant: '<S887>/Calib'
         *  Constant: '<S888>/Calib'
         *  Constant: '<S889>/Calib'
         *  Constant: '<S890>/Calib'
         *  Constant: '<S891>/Calib'
         *  Constant: '<S892>/Calib'
         *  Logic: '<S813>/AND'
         *  Logic: '<S865>/Logical1'
         *  Logic: '<S865>/Logical10'
         *  Logic: '<S865>/Logical11'
         *  Logic: '<S865>/Logical2'
         *  Logic: '<S865>/Logical3'
         *  Logic: '<S865>/Logical4'
         *  Logic: '<S865>/Logical6'
         *  Logic: '<S865>/Logical7'
         *  Logic: '<S865>/Logical8'
         *  RelationalOperator: '<S813>/Greater  Than'
         *  RelationalOperator: '<S865>/Comparison2'
         *  RelationalOperator: '<S865>/Comparison4'
         *  RelationalOperator: '<S865>/Comparison5'
         *  RelationalOperator: '<S865>/Comparison6'
         *  RelationalOperator: '<S865>/Comparison7'
         *  SignalConversion generated from: '<S1>/VeHTIR_e_HV_ElecClntHtr4_Sts'
         *  UnitDelay: '<S813>/Unit Delay'
         */
        VeHCDR_b_Htr4_DiagEnbl_B4S = (((rtb_LogicalOperator10_k &&
            ((((rtb_TmpSignalConversionAtVeHTIR_b_HVC__k &&
                (HCDR_ac_DW.UnitDelay_DSTATE_i >=
                 rtb_TmpSignalConversionAtVeAATR_T_EstAmb)) &&
               rtb_TmpSignalConversionAtVeHTRR_b_HV__ga) &&
              ((rtb_TmpSignalConversionAtVeHTRR_P_HV_H_k > KeHCDR_W_Htr4_PrvPowr)
               || (KeHCDR_b_Htr4PwrExpectds_Fault_OV))) && ((tmpRead_2w >
            KeHCDR_T_Htr4TrgtTemp) || (KeHCDR_b_Htr4TempTgt_Fault_OV)))) ||
            (rtb_LogicalOperator10_k && ((((((uint32)
            rtb_TmpSignalConversionAtVeHTIR_e_HV_E_k) ==
            CeHTIR_e_HtrSts_LockedUntilNextStart) || (((uint32)
            rtb_TmpSignalConversionAtVeHTIR_e_HV_E_k) ==
            CeHTIR_e_HtrSts_LockedUntilService)) || (((uint32)
            rtb_TmpSignalConversionAtVeHTIR_e_HV_E_k) ==
            CeHTIR_e_HtrSts_LockedPermanent)) && (KeHCDR_b_Htr4Status_Fault_En))))
            || (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
                (KeHCDR_b_Htr4_PerfCndsOV_En)));

        /* End of Outputs for SubSystem: '<S803>/Turn On Delay Time' */

        /* Outputs for Atomic SubSystem: '<S805>/Pwr_Diff_Flt_Mat' */
        /* RelationalOperator: '<S850>/Comparison2' incorporates:
         *  Abs: '<S850>/Abs'
         *  Constant: '<S852>/Calib'
         *  Sum: '<S850>/Sum'
         */
        VeHCDR_b_Htr4IsDeltaPwrGreater = (fabsf
            (rtb_TmpSignalConversionAtVeHTIR_P_HVC__n -
             rtb_TmpSignalConversionAtVeHTRR_P_HV_H_k) > KeHCDR_W_DelHVHeat4Pwr);

        /* End of Outputs for SubSystem: '<S805>/Pwr_Diff_Flt_Mat' */

        /* Logic: '<S943>/Logical4' incorporates:
         *  Constant: '<S954>/Constant'
         *  Constant: '<S955>/Calib'
         *  Constant: '<S956>/Calib'
         *  Constant: '<S957>/Constant'
         *  Constant: '<S958>/Calib'
         *  Constant: '<S959>/Calib'
         *  Constant: '<S960>/Constant'
         *  Constant: '<S961>/Calib'
         *  Constant: '<S962>/Calib'
         *  Constant: '<S963>/Constant'
         *  Constant: '<S964>/Calib'
         *  Constant: '<S965>/Calib'
         *  Constant: '<S966>/Constant'
         *  Constant: '<S967>/Calib'
         *  Constant: '<S968>/Calib'
         *  Constant: '<S969>/Constant'
         *  Constant: '<S970>/Calib'
         *  Constant: '<S971>/Calib'
         *  Constant: '<S972>/Constant'
         *  Constant: '<S973>/Calib'
         *  Constant: '<S974>/Calib'
         *  Constant: '<S975>/Constant'
         *  Constant: '<S976>/Calib'
         *  Constant: '<S977>/Calib'
         *  Constant: '<S978>/Constant'
         *  Constant: '<S979>/Calib'
         *  Constant: '<S980>/Calib'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr4ClntIn_TempSensFlt'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr4ClntOut_TempSensFlt'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr4ClntTemp_OutofRng'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr4CoreTemp_SensFlt'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr4IntCom_Err'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr4Resis_PCB_OvrTemp'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr4SelfProtect_Actv'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr4_HV_OutofRng'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr4_LV_OutofRng'
         *  Logic: '<S945>/Logical10'
         *  Logic: '<S945>/Logical8'
         *  Logic: '<S945>/Logical9'
         *  Logic: '<S946>/Logical26'
         *  Logic: '<S946>/Logical27'
         *  Logic: '<S946>/Logical28'
         *  Logic: '<S947>/Logical1'
         *  Logic: '<S947>/Logical2'
         *  Logic: '<S947>/Logical3'
         *  Logic: '<S948>/Logical23'
         *  Logic: '<S948>/Logical24'
         *  Logic: '<S948>/Logical25'
         *  Logic: '<S949>/Logical11'
         *  Logic: '<S949>/Logical12'
         *  Logic: '<S949>/Logical13'
         *  Logic: '<S950>/Logical5'
         *  Logic: '<S950>/Logical6'
         *  Logic: '<S950>/Logical7'
         *  Logic: '<S951>/Logical20'
         *  Logic: '<S951>/Logical21'
         *  Logic: '<S951>/Logical22'
         *  Logic: '<S952>/Logical14'
         *  Logic: '<S952>/Logical15'
         *  Logic: '<S952>/Logical16'
         *  Logic: '<S953>/Logical17'
         *  Logic: '<S953>/Logical18'
         *  Logic: '<S953>/Logical19'
         *  RelationalOperator: '<S945>/Comparison4'
         *  RelationalOperator: '<S946>/Comparison4'
         *  RelationalOperator: '<S947>/Comparison4'
         *  RelationalOperator: '<S948>/Comparison4'
         *  RelationalOperator: '<S949>/Comparison4'
         *  RelationalOperator: '<S950>/Comparison4'
         *  RelationalOperator: '<S951>/Comparison4'
         *  RelationalOperator: '<S952>/Comparison4'
         *  RelationalOperator: '<S953>/Comparison4'
         */
        VeHCDR_b_Htr4Warning_Flag_Set_1 = (((((((((((((uint32)tmpRead_1y) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_Htr4_HV_OutofRng_Enb)) ||
            (tmpRead_1z && (KeHCDR_b_Htr4_HV_OutofRng_FA_Enb))) || (((((uint32)
            tmpRead_20) == CeHTIR_e_Warning_True) &&
            (KeHCDR_b_Htr4_LV_OutofRng_Enb)) || (tmpRead_21 &&
            (KeHCDR_b_Htr4_LV_OutofRng_FA_Enb)))) || (((((uint32)tmpRead_22) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_Htr4ClntTemp_OutofRng_Enb)) ||
            (tmpRead_23 && (KeHCDR_b_Htr4ClntTemp_OutofRng_FA_Enb)))) ||
            (((((uint32)tmpRead_24) == CeHTIR_e_Warning_True) &&
              (KeHCDR_b_Htr4IntCom_Err_Enb)) || (tmpRead_25 &&
            (KeHCDR_b_Htr4IntCom_Err_FA_Enb)))) || (((((uint32)tmpRead_26) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_Htr4Resis_PCB_OT_Enb)) ||
            (tmpRead_27 && (KeHCDR_b_Htr4Resis_PCB_OT_FA_Enb)))) || (((((uint32)
            tmpRead_28) == CeHTIR_e_Warning_True) &&
            (KeHCDR_b_Htr4SelfProtect_Actv_Enb)) || (tmpRead_29 &&
            (KeHCDR_b_Htr4SelfProtect_Actv_FA_Enb)))) || (((((uint32)tmpRead_2a)
            == CeHTIR_e_Warning_True) && (KeHCDR_b_Htr4ClntOut_TempSensFlt_Enb))
            || (tmpRead_2b && (KeHCDR_b_Htr4ClntOut_TempSensFlt_FA_Enb)))) ||
            (((((uint32)tmpRead_2c) == CeHTIR_e_Warning_True) &&
              (KeHCDR_b_Htr4ClntIn_TempSensFlt_Enb)) || (tmpRead_2d &&
            (KeHCDR_b_Htr4ClntIn_TempSensFlt_FA_Enb)))) || (((((uint32)
            tmpRead_2e) == CeHTIR_e_Warning_True) &&
            (KeHCDR_b_Htr4CoreTemp_SensFlt_Enb)) || (tmpRead_2f &&
            (KeHCDR_b_Htr4CoreTemp_SensFlt_FA_Enb))));

        /* Logic: '<S944>/Logical1' incorporates:
         *  Constant: '<S1000>/Calib'
         *  Constant: '<S1001>/Calib'
         *  Constant: '<S1002>/Calib'
         *  Constant: '<S1003>/Calib'
         *  Constant: '<S1004>/Constant'
         *  Constant: '<S1005>/Calib'
         *  Constant: '<S1006>/Calib'
         *  Constant: '<S1007>/Calib'
         *  Constant: '<S1008>/Calib'
         *  Constant: '<S1009>/Calib'
         *  Constant: '<S988>/Calib'
         *  Constant: '<S989>/Calib'
         *  Constant: '<S990>/Calib'
         *  Constant: '<S991>/Constant'
         *  Constant: '<S992>/Calib'
         *  Constant: '<S993>/Calib'
         *  Constant: '<S994>/Constant'
         *  Constant: '<S995>/Calib'
         *  Constant: '<S996>/Calib'
         *  Constant: '<S997>/Constant'
         *  Constant: '<S998>/Calib'
         *  Constant: '<S999>/Calib'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr4DrvFlt'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr4ProcesMemory_Flt'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr4_DCDC_VltgOutofRng'
         *  Inport: '<Root>/VeHTIR_e_HVC_Htr4_HV_CrntOutofRng'
         *  Logic: '<S981>/Logical1'
         *  Logic: '<S981>/Logical2'
         *  Logic: '<S981>/Logical3'
         *  Logic: '<S982>/Logical1'
         *  Logic: '<S982>/Logical2'
         *  Logic: '<S982>/Logical3'
         *  Logic: '<S983>/Logical1'
         *  Logic: '<S983>/Logical2'
         *  Logic: '<S983>/Logical3'
         *  Logic: '<S984>/Logical1'
         *  Logic: '<S984>/Logical2'
         *  Logic: '<S984>/Logical3'
         *  Logic: '<S985>/Logical1'
         *  Logic: '<S985>/Logical2'
         *  Logic: '<S985>/Logical3'
         *  Logic: '<S985>/Logical4'
         *  Logic: '<S985>/Logical5'
         *  Logic: '<S986>/Logical1'
         *  Logic: '<S986>/Logical2'
         *  Logic: '<S986>/Logical3'
         *  Logic: '<S987>/Logical1'
         *  Logic: '<S987>/Logical2'
         *  Logic: '<S987>/Logical3'
         *  RelationalOperator: '<S981>/Comparison4'
         *  RelationalOperator: '<S982>/Comparison4'
         *  RelationalOperator: '<S983>/Comparison4'
         *  RelationalOperator: '<S984>/Comparison4'
         *  RelationalOperator: '<S986>/Comparison4'
         *  RelationalOperator: '<S987>/Comparison'
         */
        VeHCDR_b_Htr4Warning_Flag_Set_2 = (((((((((((uint32)tmpRead_2g) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_Htr4DCDC_VltgOutofRng_Enb)) ||
            (tmpRead_2h && (KeHCDR_b_Htr4DCDC_VltgOutofRng_FA_Enb))) ||
            (((((uint32)tmpRead_2i) == CeHTIR_e_Warning_True) &&
              (KeHCDR_b_HV_Htr4CrntOutofRng_Enb)) || (tmpRead_2j &&
            (KeHCDR_b_HV_Htr4CrntOutofRng_FA_Enb)))) || (((((uint32)tmpRead_2k) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_Htr4DrvFlt_Enb)) || (tmpRead_2l &&
            (KeHCDR_b_Htr4DrvFlt_FA_Enb)))) || (((((uint32)tmpRead_2m) ==
            CeHTIR_e_Warning_True) && (KeHCDR_b_Htr4ProcesMemory_Flt_Enb)) ||
            (tmpRead_2n && (KeHCDR_b_Htr4ProcesMemory_Flt_FA_Enb)))) ||
            (((tmpRead_2o >= KeHCDR_I_Htr4HVC_CrntAct_Max) &&
              (KeHCDR_b_Htr4_HV_CrntAct_Enb)) || (tmpRead_2p &&
            (KeHCDR_b_Htr4_HV_CrntAct_FA_Enb)))) || (((tmpRead_2t >=
            KeHCDR_W_Htr4PwrExpectd_MaxFlt) && (KeHCDR_b_Htr4PwrExpectd_Enb)) ||
            (tmpRead_2u && (KeHCDR_b_Htr4PwrExpectd_FA_Enb)))) || ((((tmpRead_2s
            && (KeHCDR_b_Htr4ClntIn_Temp_FA_Enb)) || (tmpRead_2r &&
            (KeHCDR_b_Htr4ClntOut_Temp_FA_Enb))) || (tmpRead_2q &&
            (KeHCDR_b_Htr4_LIN_ResErr_Enb))) ||
            (rtb_TmpSignalConversionAtVeHTIR_b_HVC__e &&
             (KeHCDR_b_Htr4PwrAct_FA_Enb))));

        /* VariantMerge generated from: '<S298>/HV_Heater4_WarningFlag' incorporates:
         *  Logic: '<S786>/Logical2'
         */
        VeHCDR_b_Htr4Warning_Flag = ((VeHCDR_b_Htr4Warning_Flag_Set_1) ||
            (VeHCDR_b_Htr4Warning_Flag_Set_2));

        /* Outputs for Atomic SubSystem: '<S805>/Pwr_Diff_Flt_Mat' */
        /* Logic: '<S805>/Logical4' incorporates:
         *  Constant: '<S844>/Constant'
         *  Constant: '<S845>/Constant'
         *  Constant: '<S846>/Constant'
         *  Constant: '<S847>/Calib'
         *  Constant: '<S848>/Calib'
         *  Constant: '<S849>/Calib'
         *  Constant: '<S853>/Calib'
         *  Logic: '<S805>/Logical10'
         *  Logic: '<S805>/Logical2'
         *  Logic: '<S805>/Logical5'
         *  Logic: '<S805>/Logical8'
         *  Logic: '<S850>/Logical'
         *  Logic: '<S850>/Logical1'
         *  RelationalOperator: '<S805>/Comparison2'
         *  RelationalOperator: '<S805>/Comparison6'
         *  RelationalOperator: '<S805>/Comparison7'
         *  RelationalOperator: '<S865>/Comparison7'
         *  SignalConversion generated from: '<S1>/VeHTIR_e_HV_ElecClntHtr4_Sts'
         */
        VeHCDR_b_Htr4_FltSymptom = (((((VeHCDR_b_Htr4IsDeltaPwrGreater) ||
            (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
             (KeHCDR_b_Htr4PwrActFA_Enbl))) && (KeHCDR_b_Htr4FltPwrChkEn)) ||
            ((((((uint32)rtb_TmpSignalConversionAtVeHTIR_e_HV_E_k) ==
                CeHTIR_e_HtrSts_LockedUntilNextStart) || (((uint32)
            rtb_TmpSignalConversionAtVeHTIR_e_HV_E_k) ==
            CeHTIR_e_HtrSts_LockedUntilService)) || (((uint32)
            rtb_TmpSignalConversionAtVeHTIR_e_HV_E_k) ==
            CeHTIR_e_HtrSts_LockedPermanent)) && (KeHCDR_b_Htr4FltStsChkEn))) ||
            ((VeHCDR_b_Htr4Warning_Flag) && (KeHCDR_b_Htr4WarningFlagEnb)));

        /* End of Outputs for SubSystem: '<S805>/Pwr_Diff_Flt_Mat' */

        /* Outputs for Atomic SubSystem: '<S784>/Htr4_Check_Diag' */
        /* Logic: '<S804>/AND1' incorporates:
         *  Constant: '<S821>/Calib'
         */
        VeHCDR_b_Htr4_DiagEnbl = ((VeHCDR_b_Htr4_DiagEnbl_B4S) &&
            (KeHCDR_b_HVC_Heater4_XYEnbl));

        /* Outputs for Atomic SubSystem: '<S804>/EdgeRising' */
        /* Logic: '<S816>/AND' incorporates:
         *  Logic: '<S816>/OR1'
         *  UnitDelay: '<S816>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHTIR_b_HVC__e = ((VeHCDR_b_Htr4_DiagEnbl) &&
            (!HCDR_ac_DW.UnitDelay_DSTATE_fa));

        /* Update for UnitDelay: '<S816>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_fa = VeHCDR_b_Htr4_DiagEnbl;

        /* End of Outputs for SubSystem: '<S804>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S804>/Signal Latch On With Reset' */
        /* Logic: '<S823>/OR1' incorporates:
         *  Logic: '<S804>/AND3'
         *  Logic: '<S823>/NOT'
         *  Logic: '<S823>/OR'
         *  UnitDelay: '<S804>/Unit Delay'
         *  UnitDelay: '<S804>/Unit Delay1'
         *  UnitDelay: '<S823>/Unit Delay'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_gq = ((VeHCDR_b_Htr4_DiagEnbl) ||
            ((((!rtb_TmpSignalConversionAtVeHTIR_b_HVC__e) &&
               (!HCDR_ac_DW.UnitDelay_DSTATE_es)) &&
              (!HCDR_ac_DW.UnitDelay1_DSTATE_l)) &&
             (HCDR_ac_DW.UnitDelay_DSTATE_gq)));

        /* End of Outputs for SubSystem: '<S804>/Signal Latch On With Reset' */

        /* Switch: '<S804>/Switch' incorporates:
         *  Constant: '<S822>/Calib'
         */
        if (!KeHCDR_b_Htr4DiagLatch_En)
        {
            /* Switch: '<S804>/Switch' */
            VeHCDR_b_Htr4_DiagEnbl = HCDR_ac_DW.UnitDelay_DSTATE_gq;
        }

        /* End of Switch: '<S804>/Switch' */

        /* RelationalOperator: '<S825>/Relational Operator3' incorporates:
         *  Constant: '<S825>/Constant3'
         *  DataStoreRead: '<S815>/StatusByte_CoolantHeaterBPerf'
         *  S-Function (sfix_bitop): '<S825>/Bitwise Operator2'
         */
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = ((((uint32)
            HCDR_ac_DW.StatusByte_CoolantHeaterBPerf) & 64U) == 0U);

        /* Outputs for Atomic SubSystem: '<S825>/EdgeFalling1' */
        /* Logic: '<S825>/Logical Operator' incorporates:
         *  Logic: '<S831>/OR1'
         */
        rtb_VeHCDR_b_Htr4_LOC_BPCM_FA_AD =
            !rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

        /* End of Outputs for SubSystem: '<S825>/EdgeFalling1' */

        /* Logic: '<S825>/Logical1' incorporates:
         *  Constant: '<S819>/Calib'
         *  Constant: '<S825>/Constant1'
         *  DataStoreRead: '<S815>/StatusByte_CoolantHeaterBPerf'
         *  Logic: '<S825>/Logical Operator'
         *  Logic: '<S825>/Logical10'
         *  Logic: '<S825>/Logical12'
         *  RelationalOperator: '<S825>/Relational Operator1'
         *  S-Function (sfix_bitop): '<S825>/Bitwise Operator3'
         */
        rtb_TmpSignalConversionAtVeHTIR_b_HVC__e = ((VeHCDR_b_Htr4_DiagEnbl) &&
            ((!KeHCDR_b_CoolantHeaterBPerf_LtchEnbl) || (((((uint32)
            HCDR_ac_DW.StatusByte_CoolantHeaterBPerf) & 1U) == 0U) ||
            rtb_VeHCDR_b_Htr4_LOC_BPCM_FA_AD)));

        /* Outputs for Atomic SubSystem: '<S825>/EdgeFalling1' */
        /* Logic: '<S831>/AND' incorporates:
         *  UnitDelay: '<S831>/Unit Delay'
         */
        rtb_VeHCDR_b_Htr4_LOC_BPCM_FA_AD = (rtb_VeHCDR_b_Htr4_LOC_BPCM_FA_AD &&
            (HCDR_ac_DW.UnitDelay_DSTATE_di));

        /* Update for UnitDelay: '<S831>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_di =
            rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

        /* End of Outputs for SubSystem: '<S825>/EdgeFalling1' */

        /* Logic: '<S825>/Logical5' incorporates:
         *  Logic: '<S785>/NOT4'
         */
        rtb_VeHCDR_b_DsblDiagFailSafe_AD = ((rtb_VeHCDR_b_DsblDiagFailSafe_AD ||
            rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD) ||
            rtb_VeHCDR_b_Htr4_LOC_BPCM_FA_AD);

        /* Outputs for Atomic SubSystem: '<S830>/Counter Reset  Enabled 1' */
        /* Outputs for Atomic SubSystem: '<S830>/Counter Reset  Enabled ' */
        /* Switch: '<S837>/Switch1' incorporates:
         *  Constant: '<S820>/Calib'
         *  Logic: '<S804>/AND2'
         *  Logic: '<S830>/Fail Counter Reset'
         *  Logic: '<S830>/NOT6'
         *  Switch: '<S837>/Switch2'
         *  Switch: '<S838>/Switch1'
         *  UnitDelay: '<S830>/Unit Delay'
         *  UnitDelay: '<S830>/Unit Delay1'
         */
        if ((rtb_VeHCDR_b_DsblDiagFailSafe_AD || (HCDR_ac_DW.UnitDelay_DSTATE_ah))
            || (HCDR_ac_DW.UnitDelay1_DSTATE_n))
        {
            /* Switch: '<S837>/Switch1' incorporates:
             *  Constant: '<S837>/Constant Value2'
             */
            VeHCDR_Cnt_Htr4_FailCnt = 0U;

            /* Switch: '<S838>/Switch1' incorporates:
             *  Constant: '<S838>/Constant Value2'
             */
            VeHCDR_Cnt_Htr4_SmpCnt = 0U;
        }
        else
        {
            if (rtb_TmpSignalConversionAtVeHTIR_b_HVC__e &&
                    ((VeHCDR_b_Htr4_FltSymptom) && (KeHCDR_b_HVC_Heater4_FltEn)))
            {
                /* Switch: '<S837>/Switch1' incorporates:
                 *  Constant: '<S837>/Constant Value1'
                 *  Sum: '<S837>/Subtraction'
                 *  Switch: '<S837>/Switch2'
                 *  UnitDelay: '<S837>/Unit Delay'
                 */
                VeHCDR_Cnt_Htr4_FailCnt = (uint16)(((uint32)
                    VeHCDR_Cnt_Htr4_FailCnt) + 1U);
            }

            /* Switch: '<S838>/Switch2' */
            if (rtb_TmpSignalConversionAtVeHTIR_b_HVC__e)
            {
                /* Switch: '<S838>/Switch1' incorporates:
                 *  Constant: '<S838>/Constant Value1'
                 *  Sum: '<S838>/Subtraction'
                 *  Switch: '<S838>/Switch2'
                 *  UnitDelay: '<S838>/Unit Delay'
                 */
                VeHCDR_Cnt_Htr4_SmpCnt = (uint16)(((uint32)
                    VeHCDR_Cnt_Htr4_SmpCnt) + 1U);
            }

            /* End of Switch: '<S838>/Switch2' */
        }

        /* End of Switch: '<S837>/Switch1' */
        /* End of Outputs for SubSystem: '<S830>/Counter Reset  Enabled ' */
        /* End of Outputs for SubSystem: '<S830>/Counter Reset  Enabled 1' */

        /* RelationalOperator: '<S830>/Greater Than or Equal ' incorporates:
         *  Constant: '<S817>/Calib'
         */
        HCDR_ac_DW.UnitDelay1_DSTATE_n = (VeHCDR_Cnt_Htr4_FailCnt >=
            KeHCDR_Cnt_HVC_Heater4_FailCnt);

        /* Logic: '<S830>/NOT5' incorporates:
         *  Constant: '<S818>/Calib'
         *  Logic: '<S830>/NOT3'
         *  RelationalOperator: '<S830>/Less Than  or Equal'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_ah = ((VeHCDR_Cnt_Htr4_SmpCnt >=
            KeHCDR_Cnt_HVC_Heater4_SmpCnt) && (!HCDR_ac_DW.UnitDelay1_DSTATE_n));

        /* Switch: '<S843>/Switch1' incorporates:
         *  Constant: '<S836>/Constant Value'
         *  DataStoreWrite: '<S804>/Data Store Write3'
         *  Switch: '<S842>/Switch1'
         */
        if (rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD)
        {
            HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater4_MFOP = 0U;
        }
        else
        {
            if (HCDR_ac_DW.UnitDelay_DSTATE_ah)
            {
                /* MinMax: '<S836>/Minimum2' incorporates:
                 *  DataStoreRead: '<S804>/Data Store Read1'
                 *  Switch: '<S842>/Switch1'
                 */
                if (VeHCDR_Cnt_Htr4_FailCnt >
                        HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater4_MFOP)
                {
                    /* DataStoreWrite: '<S804>/Data Store Write3' incorporates:
                     *  Switch: '<S842>/Switch1'
                     */
                    HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater4_MFOP =
                        VeHCDR_Cnt_Htr4_FailCnt;
                }

                /* End of MinMax: '<S836>/Minimum2' */
            }
        }

        /* End of Switch: '<S843>/Switch1' */

        /* Outputs for Enabled SubSystem: '<S825>/Pass' */
        HCDR_ac_Pass(HCDR_ac_DW.UnitDelay_DSTATE_ah,
                     &HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSts_);

        /* End of Outputs for SubSystem: '<S825>/Pass' */

        /* Outputs for Enabled SubSystem: '<S825>/Fail' */
        HCDR_ac_Fail(HCDR_ac_DW.UnitDelay1_DSTATE_n,
                     &HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSts_);

        /* End of Outputs for SubSystem: '<S825>/Fail' */

        /* Outputs for Enabled SubSystem: '<S825>/Init' */
        HCDR_ac_Init_p(rtb_VeHCDR_b_DsblDiagFailSafe_AD,
                       &HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSts_);

        /* End of Outputs for SubSystem: '<S825>/Init' */

        /* RelationalOperator: '<S824>/Relational Operator' incorporates:
         *  RelationalOperator: '<S824>/Relational Operator1'
         *  RelationalOperator: '<S825>/Relational Operator'
         *  VariantMerge generated from: '<S298>/VeHCDR_e_FaultSts_CoolantHeaterBPerf'
         */
        rtb_RelationalOperator_m_tmp =
            HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSts_;

        /* RelationalOperator: '<S824>/Relational Operator' incorporates:
         *  Constant: '<S829>/Constant'
         */
        rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD = (((uint32)
            rtb_RelationalOperator_m_tmp) == CeDFIB_e_Fail);

        /* Outputs for Atomic SubSystem: '<S824>/EdgeRising' */
        /* Logic: '<S826>/OR1' incorporates:
         *  UnitDelay: '<S826>/Unit Delay'
         */
        rtb_VeHCDR_b_DsblDiagFailSafe_AD = !HCDR_ac_DW.UnitDelay_DSTATE_k5;

        /* Update for UnitDelay: '<S826>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_k5 = rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD;

        /* End of Outputs for SubSystem: '<S824>/EdgeRising' */

        /* RelationalOperator: '<S824>/Relational Operator1' incorporates:
         *  Constant: '<S828>/Constant'
         */
        rtb_TmpSignalConversionAtVeHTIR_b_HVC__e = (((uint32)
            rtb_RelationalOperator_m_tmp) == CeDFIB_e_Pass);

        /* Outputs for Atomic SubSystem: '<S824>/EdgeRising1' */
        /* Logic: '<S827>/OR1' incorporates:
         *  UnitDelay: '<S827>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
            !HCDR_ac_DW.UnitDelay_DSTATE_df;

        /* Update for UnitDelay: '<S827>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_df =
            rtb_TmpSignalConversionAtVeHTIR_b_HVC__e;

        /* End of Outputs for SubSystem: '<S824>/EdgeRising1' */

        /* VariantMerge generated from: '<S298>/HVC_Heater4_FltDtct' incorporates:
         *  Constant: '<S832>/Constant'
         *  RelationalOperator: '<S825>/Relational Operator'
         */
        VeHCDR_b_Htr4_FltDtct = (((uint32)rtb_RelationalOperator_m_tmp) ==
            CeDFIB_e_Fail);

        /* Outputs for Atomic SubSystem: '<S824>/EdgeRising1' */
        /* Update for UnitDelay: '<S804>/Unit Delay' incorporates:
         *  Logic: '<S827>/AND'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_es =
            (rtb_TmpSignalConversionAtVeHTIR_b_HVC__e &&
             rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

        /* End of Outputs for SubSystem: '<S824>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S824>/EdgeRising' */
        /* Update for UnitDelay: '<S804>/Unit Delay1' incorporates:
         *  Logic: '<S826>/AND'
         */
        HCDR_ac_DW.UnitDelay1_DSTATE_l = (rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD &&
            rtb_VeHCDR_b_DsblDiagFailSafe_AD);

        /* End of Outputs for SubSystem: '<S824>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S784>/Htr4_Check_Diag' */

        /* SignalConversion generated from: '<S807>/Variant Source' */
#if Rte_SysCon_Variant_HCDR_14

        /* Logic: '<S807>/Logical Operator7' incorporates:
         *  Constant: '<S807>/Constant1'
         */
        rtb_LogicalOperator7_p = false;

#endif

        /* End of SignalConversion generated from: '<S807>/Variant Source' */

        /* SignalConversion generated from: '<S807>/Variant Source' */
#if !Rte_SysCon_Variant_HCDR_14

        /* Logic: '<S807>/Logical Operator7' incorporates:
         *  Constant: '<S807>/Constant'
         */
        rtb_LogicalOperator7_p = true;

#endif

        /* End of SignalConversion generated from: '<S807>/Variant Source' */

        /* VariantMerge generated from: '<S298>/IUMPR_Htr4_ECH_Perf' incorporates:
         *  Constant: '<S916>/Constant'
         *  Constant: '<S917>/Constant'
         *  Constant: '<S918>/Constant'
         *  Constant: '<S919>/Constant1'
         *  Constant: '<S919>/Constant2'
         *  Constant: '<S920>/Constant1'
         *  Constant: '<S920>/Constant2'
         *  Constant: '<S921>/Constant1'
         *  Constant: '<S921>/Constant2'
         *  Constant: '<S922>/Constant1'
         *  Constant: '<S922>/Constant2'
         *  Constant: '<S923>/Constant1'
         *  Constant: '<S923>/Constant2'
         *  Constant: '<S924>/Constant1'
         *  Constant: '<S924>/Constant2'
         *  Constant: '<S925>/Constant1'
         *  Constant: '<S925>/Constant2'
         *  Constant: '<S926>/Constant1'
         *  Constant: '<S926>/Constant2'
         *  Constant: '<S927>/Constant1'
         *  Constant: '<S927>/Constant2'
         *  Constant: '<S928>/Calib'
         *  DataStoreRead: '<S919>/StatusByte_BattCoolLvlLow'
         *  DataStoreRead: '<S920>/StatusByte_BattCoolPmpHtrBTempSnsrPerf'
         *  DataStoreRead: '<S921>/StatusByte_CommBusOff'
         *  DataStoreRead: '<S922>/StatusByte_CommBus_B_Off'
         *  DataStoreRead: '<S923>/StatusByte_InvData_BECM_CANC11'
         *  DataStoreRead: '<S924>/StatusByte_InvData_BECM'
         *  DataStoreRead: '<S925>/StatusByte_LosCommBECM_A_CANC11'
         *  DataStoreRead: '<S926>/StatusByte_LosCommBECM_A'
         *  DataStoreRead: '<S927>/StatusByte_ThrmlRlyCtrlCkt'
         *  Logic: '<S807>/Logical Operator1'
         *  Logic: '<S807>/Logical Operator10'
         *  Logic: '<S807>/Logical Operator11'
         *  Logic: '<S807>/Logical Operator12'
         *  Logic: '<S807>/Logical Operator13'
         *  Logic: '<S807>/Logical Operator14'
         *  Logic: '<S807>/Logical Operator15'
         *  Logic: '<S807>/Logical Operator16'
         *  Logic: '<S807>/Logical Operator17'
         *  Logic: '<S807>/Logical Operator18'
         *  Logic: '<S807>/Logical Operator2'
         *  Logic: '<S807>/Logical Operator3'
         *  Logic: '<S807>/Logical Operator4'
         *  Logic: '<S807>/Logical Operator5'
         *  Logic: '<S807>/Logical Operator6'
         *  Logic: '<S807>/Logical Operator7'
         *  Logic: '<S807>/Logical Operator8'
         *  Logic: '<S807>/Logical Operator9'
         *  Logic: '<S919>/Logical Operator'
         *  Logic: '<S920>/Logical Operator'
         *  Logic: '<S921>/Logical Operator'
         *  Logic: '<S922>/Logical Operator'
         *  Logic: '<S923>/Logical Operator'
         *  Logic: '<S924>/Logical Operator'
         *  Logic: '<S925>/Logical Operator'
         *  Logic: '<S926>/Logical Operator'
         *  Logic: '<S927>/Logical Operator'
         *  RelationalOperator: '<S807>/Relational Operator'
         *  RelationalOperator: '<S807>/Relational Operator2'
         *  RelationalOperator: '<S807>/Relational Operator4'
         *  RelationalOperator: '<S919>/Relational Operator1'
         *  RelationalOperator: '<S919>/Relational Operator2'
         *  RelationalOperator: '<S920>/Relational Operator1'
         *  RelationalOperator: '<S920>/Relational Operator2'
         *  RelationalOperator: '<S921>/Relational Operator1'
         *  RelationalOperator: '<S921>/Relational Operator2'
         *  RelationalOperator: '<S922>/Relational Operator1'
         *  RelationalOperator: '<S922>/Relational Operator2'
         *  RelationalOperator: '<S923>/Relational Operator1'
         *  RelationalOperator: '<S923>/Relational Operator2'
         *  RelationalOperator: '<S924>/Relational Operator1'
         *  RelationalOperator: '<S924>/Relational Operator2'
         *  RelationalOperator: '<S925>/Relational Operator1'
         *  RelationalOperator: '<S925>/Relational Operator2'
         *  RelationalOperator: '<S926>/Relational Operator1'
         *  RelationalOperator: '<S926>/Relational Operator2'
         *  RelationalOperator: '<S927>/Relational Operator1'
         *  RelationalOperator: '<S927>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S919>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S919>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S920>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S920>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S921>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S921>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S922>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S922>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S923>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S923>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S924>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S924>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S925>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S925>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S926>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S926>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S927>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S927>/Bitwise Operator2'
         *  VariantMerge generated from: '<S4>/BPCM_LINLOC_AD'
         *  VariantMerge generated from: '<S4>/Htr4_LOC_BPCM_AD'
         *  VariantMerge generated from: '<S4>/LTAP_LOC_AD'
         */
        HCDR_ac_B.VariantMergeForOutportIUMPR_Htr4_ECH_Per =
            ((((((((((((((((sint32)
                           HCDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf) &
                          1) > 0) && ((((uint32)
                           HCDR_ac_DW.StatusByte_BattCoolPmpHtrBTempSnsrPerf) &
                          64U) == 0U)) && (KaHCDR_b_IUMPR_Htr4_Enbl[0])) ||
                      ((VeHCDR_b_Htr4ClntIn_NoFlt) && (KaHCDR_b_IUMPR_Htr4_Enbl
                        [1]))) || ((((uint32)rtb_VeHCDR_e_Htr4_LOC_BPCM_AD) !=
                       CeBPCR_e_LOC_BatClntHtr_False) &&
                      (KaHCDR_b_IUMPR_Htr4_Enbl[2]))) || (((((((sint32)
                          HCDR_ac_DW.StatusByte_CommBusOff) & 1) > 0) &&
                       ((((uint32)HCDR_ac_DW.StatusByte_CommBusOff) & 64U) == 0U))
                      && ((((((sint32)HCDR_ac_DW.StatusByte_CommBus_B_Off) & 1) >
                            0) && ((((uint32)HCDR_ac_DW.StatusByte_CommBus_B_Off)
                          & 64U) == 0U)) || rtb_LogicalOperator7_p)) &&
                     (KaHCDR_b_IUMPR_Htr4_Enbl[3]))) || (((((((sint32)
                         HCDR_ac_DW.StatusByte_LosCommBECM_A) & 1) > 0) &&
                      ((((uint32)HCDR_ac_DW.StatusByte_LosCommBECM_A) & 64U) ==
                       0U)) && ((((((sint32)
                          HCDR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 1) > 0) &&
                       ((((uint32)HCDR_ac_DW.StatusByte_LosCommBECM_A_CANC11) &
                         64U) == 0U)) || rtb_LogicalOperator7_p)) &&
                    (KaHCDR_b_IUMPR_Htr4_Enbl[4]))) || (((((((sint32)
                        HCDR_ac_DW.StatusByte_InvData_BECM) & 1) > 0) &&
                     ((((uint32)HCDR_ac_DW.StatusByte_InvData_BECM) & 64U) == 0U))
                    && ((((((sint32)HCDR_ac_DW.StatusByte_InvData_BECM_CANC11) &
                           1) > 0) && ((((uint32)
                         HCDR_ac_DW.StatusByte_InvData_BECM_CANC11) & 64U) == 0U))
                        || rtb_LogicalOperator7_p)) &&
                   (KaHCDR_b_IUMPR_Htr4_Enbl[5]))) || ((((((sint32)
                      HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 1) > 0) &&
                   ((((uint32)HCDR_ac_DW.StatusByte_ThrmlRlyCtrlCkt) & 64U) ==
                    0U)) && (KaHCDR_b_IUMPR_Htr4_Enbl[6]))) || ((((((sint32)
                     HCDR_ac_DW.StatusByte_BattCoolLvlLow) & 1) > 0) &&
                  ((((uint32)HCDR_ac_DW.StatusByte_BattCoolLvlLow) & 64U) == 0U))
                 && (KaHCDR_b_IUMPR_Htr4_Enbl[7]))) ||
               (rtb_VariantMerge_For_Variant_Source_Va_c &&
                (KaHCDR_b_IUMPR_Htr4_Enbl[8]))) || ((((uint32)
                 rtb_VeHCDR_e_BPCM_LINLOC_AD) != CeBPCR_e_LIN_BusOff_Disabled) &&
               (KaHCDR_b_IUMPR_Htr4_Enbl[9]))) || ((((uint32)
                rtb_VeHCDR_e_LTAP_LOC_AD) != CeBPCR_e_LOC_BCP_False) &&
              (KaHCDR_b_IUMPR_Htr4_Enbl[10])));

        /* Logic: '<S808>/Logical Operator2' */
        rtb_TmpSignalConversionAtVeHTRR_b_HV__ga =
            (rtb_TmpSignalConversionAtVeHTRR_b_HV__ga &&
             rtb_VeHCDR_b_PropSysActv_AD);

        /* Outputs for Atomic SubSystem: '<S933>/EdgeRising' */
        /* Logic: '<S939>/OR1' incorporates:
         *  UnitDelay: '<S939>/Unit Delay'
         */
        rtb_VariantMerge_For_Variant_Source_Va_c =
            !HCDR_ac_DW.UnitDelay_DSTATE_he;

        /* Update for UnitDelay: '<S939>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_he =
            rtb_TmpSignalConversionAtVeHTRR_b_HV__ga;

        /* End of Outputs for SubSystem: '<S933>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S933>/EdgeRising1' */
        /* Logic: '<S940>/OR1' incorporates:
         *  UnitDelay: '<S940>/Unit Delay'
         */
        rtb_LogicalOperator7_p = !HCDR_ac_DW.UnitDelay_DSTATE_c0;

        /* Update for UnitDelay: '<S940>/Unit Delay' incorporates:
         *  Constant: '<S933>/TRUE Constant'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_c0 = true;

        /* Outputs for Atomic SubSystem: '<S933>/EdgeRising' */
        /* Logic: '<S933>/Logical Operator' incorporates:
         *  Logic: '<S939>/AND'
         *  Logic: '<S940>/AND'
         */
        rtb_VariantMerge_For_Variant_Source_Va_c =
            ((rtb_TmpSignalConversionAtVeHTRR_b_HV__ga &&
              rtb_VariantMerge_For_Variant_Source_Va_c) ||
             rtb_LogicalOperator7_p);

        /* End of Outputs for SubSystem: '<S933>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S933>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S933>/Timer Retrigger Reset Trigger Enabled' */
        /* Outputs for Atomic SubSystem: '<S941>/EdgeRising' */
        /* Logic: '<S942>/OR1' incorporates:
         *  UnitDelay: '<S942>/Unit Delay'
         */
        rtb_LogicalOperator7_p = !HCDR_ac_DW.UnitDelay_DSTATE_ft;

        /* Update for UnitDelay: '<S942>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_ft =
            rtb_VariantMerge_For_Variant_Source_Va_c;

        /* Switch: '<S941>/Switch1' incorporates:
         *  Constant: '<S808>/Constant2'
         *  Logic: '<S942>/AND'
         *  Switch: '<S941>/Switch2'
         *  UnitDelay: '<S941>/Unit Delay'
         */
        if (rtb_VariantMerge_For_Variant_Source_Va_c && rtb_LogicalOperator7_p)
        {
            HCDR_ac_DW.UnitDelay_DSTATE = 2.0F;
        }
        else
        {
            if (rtb_TmpSignalConversionAtVeHTRR_b_HV__ga)
            {
                /* UnitDelay: '<S941>/Unit Delay' incorporates:
                 *  Constant: '<S933>/Constant1'
                 *  Constant: '<S941>/Constant Value4'
                 *  MinMax: '<S941>/Maximum'
                 *  Sum: '<S941>/Subtraction'
                 *  Switch: '<S941>/Switch2'
                 */
                HCDR_ac_DW.UnitDelay_DSTATE = fmaxf(HCDR_ac_DW.UnitDelay_DSTATE
                    - 0.1F, 0.0F);
            }
        }

        /* End of Switch: '<S941>/Switch1' */
        /* End of Outputs for SubSystem: '<S941>/EdgeRising' */

        /* Logic: '<S933>/Logical Operator2' incorporates:
         *  Constant: '<S941>/Constant Value2'
         *  Logic: '<S933>/Logical Operator1'
         *  RelationalOperator: '<S941>/Greater  Than1'
         *  UnitDelay: '<S941>/Unit Delay'
         */
        rtb_VariantMerge_For_Variant_Source_Va_c =
            (rtb_TmpSignalConversionAtVeHTRR_b_HV__ga &&
             (HCDR_ac_DW.UnitDelay_DSTATE <= 0.0F));

        /* End of Outputs for SubSystem: '<S933>/Timer Retrigger Reset Trigger Enabled' */

        /* Outputs for Atomic SubSystem: '<S808>/EdgeRising1' */
        /* Logic: '<S929>/AND' incorporates:
         *  Logic: '<S929>/OR1'
         *  UnitDelay: '<S929>/Unit Delay'
         */
        rtb_LogicalOperator7_p = (rtb_VariantMerge_For_Variant_Source_Va_c &&
            (!HCDR_ac_DW.UnitDelay_DSTATE_mg));

        /* Update for UnitDelay: '<S929>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_mg =
            rtb_VariantMerge_For_Variant_Source_Va_c;

        /* End of Outputs for SubSystem: '<S808>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S808>/EdgeRising2' */
        /* Logic: '<S930>/OR1' incorporates:
         *  UnitDelay: '<S930>/Unit Delay'
         */
        rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD = !HCDR_ac_DW.UnitDelay_DSTATE_dy;

        /* Update for UnitDelay: '<S930>/Unit Delay' incorporates:
         *  Constant: '<S808>/TRUE Constant'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_dy = true;

        /* End of Outputs for SubSystem: '<S808>/EdgeRising2' */

        /* Outputs for Atomic SubSystem: '<S808>/EdgeRising3' */
        /* Logic: '<S931>/OR1' incorporates:
         *  UnitDelay: '<S931>/Unit Delay'
         */
        rtb_VeHCDR_b_DsblDiagFailSafe_AD = !HCDR_ac_DW.UnitDelay_DSTATE_ad;

        /* Update for UnitDelay: '<S931>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_ad = rtb_VeHCDR_b_PropSysActv_AD;

        /* Outputs for Atomic SubSystem: '<S808>/EdgeRising2' */
        /* Logic: '<S808>/Logical Operator3' incorporates:
         *  Logic: '<S930>/AND'
         *  Logic: '<S931>/AND'
         */
        rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD = (rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD ||
            (rtb_VeHCDR_b_PropSysActv_AD && rtb_VeHCDR_b_DsblDiagFailSafe_AD));

        /* End of Outputs for SubSystem: '<S808>/EdgeRising2' */
        /* End of Outputs for SubSystem: '<S808>/EdgeRising3' */

        /* Outputs for Atomic SubSystem: '<S932>/Timer Retrigger Reset Trigger Enabled' */
        /* Outputs for Atomic SubSystem: '<S937>/EdgeRising' */
        /* Logic: '<S938>/OR1' incorporates:
         *  UnitDelay: '<S938>/Unit Delay'
         */
        rtb_VeHCDR_b_DsblDiagFailSafe_AD = !HCDR_ac_DW.UnitDelay_DSTATE_bv;

        /* Update for UnitDelay: '<S938>/Unit Delay' */
        HCDR_ac_DW.UnitDelay_DSTATE_bv = rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD;

        /* Switch: '<S937>/Switch1' incorporates:
         *  Constant: '<S808>/Constant'
         *  Logic: '<S938>/AND'
         *  Switch: '<S937>/Switch2'
         *  UnitDelay: '<S937>/Unit Delay'
         */
        if (rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD &&
                rtb_VeHCDR_b_DsblDiagFailSafe_AD)
        {
            HCDR_ac_DW.UnitDelay_DSTATE_o = 10.0F;
        }
        else
        {
            if (rtb_TmpSignalConversionAtVeHTRR_b_HV__ga)
            {
                /* UnitDelay: '<S937>/Unit Delay' incorporates:
                 *  Constant: '<S932>/Constant1'
                 *  Constant: '<S937>/Constant Value4'
                 *  MinMax: '<S937>/Maximum'
                 *  Sum: '<S937>/Subtraction'
                 *  Switch: '<S937>/Switch2'
                 */
                HCDR_ac_DW.UnitDelay_DSTATE_o = fmaxf
                    (HCDR_ac_DW.UnitDelay_DSTATE_o - 0.1F, 0.0F);
            }
        }

        /* End of Switch: '<S937>/Switch1' */
        /* End of Outputs for SubSystem: '<S937>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S932>/Timer Retrigger Reset Trigger Enabled' */

        /* Outputs for Atomic SubSystem: '<S808>/Signal Latch On With Reset1' */
        /* Outputs for Atomic SubSystem: '<S808>/Signal Latch On With Reset4' */
        /* Outputs for Atomic SubSystem: '<S808>/Signal Latch On With Reset2' */
        /* Logic: '<S935>/NOT' incorporates:
         *  Logic: '<S934>/NOT'
         *  Logic: '<S936>/NOT'
         */
        rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD = !rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD;

        /* End of Outputs for SubSystem: '<S808>/Signal Latch On With Reset4' */
        /* End of Outputs for SubSystem: '<S808>/Signal Latch On With Reset1' */

        /* Outputs for Atomic SubSystem: '<S932>/Timer Retrigger Reset Trigger Enabled' */
        /* Logic: '<S935>/OR1' incorporates:
         *  Constant: '<S937>/Constant Value2'
         *  Logic: '<S932>/Logical Operator1'
         *  Logic: '<S932>/Logical Operator2'
         *  Logic: '<S935>/NOT'
         *  Logic: '<S935>/OR'
         *  RelationalOperator: '<S937>/Greater  Than1'
         *  UnitDelay: '<S935>/Unit Delay'
         *  UnitDelay: '<S937>/Unit Delay'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_nl =
            ((rtb_TmpSignalConversionAtVeHTRR_b_HV__ga &&
              (HCDR_ac_DW.UnitDelay_DSTATE_o <= 0.0F)) ||
             (rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD &&
              (HCDR_ac_DW.UnitDelay_DSTATE_nl)));

        /* End of Outputs for SubSystem: '<S932>/Timer Retrigger Reset Trigger Enabled' */
        /* End of Outputs for SubSystem: '<S808>/Signal Latch On With Reset2' */

        /* Outputs for Atomic SubSystem: '<S808>/Signal Latch On With Reset4' */
        /* Logic: '<S936>/OR1' incorporates:
         *  Delay: '<S808>/Delay'
         *  Logic: '<S808>/Logical Operator1'
         *  Logic: '<S936>/OR'
         *  UnitDelay: '<S936>/Unit Delay'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_b = (((HCDR_ac_DW.Delay_DSTATE) &&
            rtb_LogicalOperator7_p) || (rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD &&
            (HCDR_ac_DW.UnitDelay_DSTATE_b)));

        /* End of Outputs for SubSystem: '<S808>/Signal Latch On With Reset4' */

        /* VariantMerge generated from: '<S298>/IUMPR_Htr4_ECH_MinCmdThrshld_Met' incorporates:
         *  Logic: '<S808>/Logical Operator'
         *  Logic: '<S808>/Logical Operator9'
         *  UnitDelay: '<S935>/Unit Delay'
         */
        HCDR_ac_B.VariantMergeForOutportIUMPR_Htr4_ECH_Min =
            (((HCDR_ac_DW.UnitDelay_DSTATE_nl) || (HCDR_ac_DW.UnitDelay_DSTATE_b))
             && rtb_VeHCDR_b_PropSysActv_AD);

        /* Outputs for Atomic SubSystem: '<S808>/Signal Latch On With Reset1' */
        /* Logic: '<S934>/OR1' incorporates:
         *  Logic: '<S934>/OR'
         *  UnitDelay: '<S934>/Unit Delay'
         */
        HCDR_ac_DW.UnitDelay_DSTATE_h =
            (rtb_VariantMerge_For_Variant_Source_Va_c ||
             (rtb_VeHCDR_b_PstCdeClrDiagDsbl_AD &&
              (HCDR_ac_DW.UnitDelay_DSTATE_h)));

        /* End of Outputs for SubSystem: '<S808>/Signal Latch On With Reset1' */

        /* Update for Delay: '<S808>/Delay' */
        HCDR_ac_DW.Delay_DSTATE = HCDR_ac_DW.UnitDelay_DSTATE_h;
    }

    /* End of Outputs for SubSystem: '<S780>/Htr4_Diagnosis' */
    /* End of Outputs for SubSystem: '<S298>/Htr4_BCH_Diagnosis' */
#else

    /* Outputs for Atomic SubSystem: '<S298>/Htr4_BCH_Init' */
    /* VariantMerge generated from: '<S298>/HV_Heater4_WarningFlag' incorporates:
     *  Constant: '<S781>/FALSE Constant'
     */
    VeHCDR_b_Htr4Warning_Flag = false;

    /* VariantMerge generated from: '<S298>/IUMPR_Htr4_ECH_Perf' incorporates:
     *  Constant: '<S781>/FALSE Constant1'
     */
    HCDR_ac_B.VariantMergeForOutportIUMPR_Htr4_ECH_Per = false;

    /* VariantMerge generated from: '<S298>/IUMPR_Htr4_ECH_MinCmdThrshld_Met' incorporates:
     *  Constant: '<S781>/FALSE Constant2'
     */
    HCDR_ac_B.VariantMergeForOutportIUMPR_Htr4_ECH_Min = false;

    /* VariantMerge generated from: '<S298>/HVC_Heater4_FltDtct' incorporates:
     *  Constant: '<S781>/FALSE Constant3'
     */
    VeHCDR_b_Htr4_FltDtct = false;

    /* VariantMerge generated from: '<S298>/VeHCDR_e_FaultSts_CoolantHeaterBPerf' incorporates:
     *  Constant: '<S1010>/Constant'
     */
    HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSts_ = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S298>/Htr4_BCH_Init' */
#endif

    /* End of Outputs for SubSystem: '<S10>/Htr4_BCH_Diagnosis' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outputs for Enabled SubSystem: '<S1036>/Htr1_ECH' incorporates:
     *  EnablePort: '<S1049>/VeHTRR_b_Heater1Slct'
     */
    if (rtb_TmpSignalConversionAtVeHTRR_b_Heater)
    {
        /* Gain: '<S1057>/Gain' */
        HCDR_ac_B.Gain_n = HCDR_ac_B.VariantMergeForOutportIUMPR_Htr1_ECH_Per;

        /* Gain: '<S1056>/Gain' */
        HCDR_ac_B.Gain_k = HCDR_ac_B.VariantMergeForOutportIUMPR_Htr1_ECH_Min;

        /* Switch: '<S1055>/Switch1' incorporates:
         *  Constant: '<S1063>/Calib'
         */
        if (KeHCDR_b_HVC_Heater_WarningFlag_SD)
        {
            /* Switch: '<S1055>/Switch1' incorporates:
             *  Constant: '<S1062>/Calib'
             */
            HCDR_ac_B.Switch1_m = KeHCDR_b_HVC_Heater_WarningFlag_D;
        }
        else
        {
            /* Switch: '<S1055>/Switch1' */
            HCDR_ac_B.Switch1_m = VeHCDR_b_Warning_Flag;
        }

        /* End of Switch: '<S1055>/Switch1' */

        /* Switch: '<S1054>/Switch1' incorporates:
         *  Constant: '<S1061>/Calib'
         */
        if (KeHCDR_b_Heater1_LOC_SD)
        {
            /* Switch: '<S1054>/Switch1' incorporates:
             *  Constant: '<S1060>/Calib'
             */
            HCDR_ac_B.Switch1_h = KeHCDR_b_Heater1_LOC_D;
        }
        else
        {
            /* Switch: '<S1054>/Switch1' */
            HCDR_ac_B.Switch1_h = VeHCDR_b_Heater1_LOC_B4D;
        }

        /* End of Switch: '<S1054>/Switch1' */

        /* Switch: '<S1053>/Switch1' incorporates:
         *  Constant: '<S1059>/Calib'
         */
        if (KeHCDR_b_HVC_Heater_FltDtct_SD)
        {
            /* Switch: '<S1053>/Switch1' incorporates:
             *  Constant: '<S1058>/Calib'
             */
            HCDR_ac_B.Switch1_l = KeHCDR_b_HVC_Heater_FltDtct_D;
        }
        else
        {
            /* Switch: '<S1053>/Switch1' */
            HCDR_ac_B.Switch1_l = VeHCDR_b_Htr1_FltDtct;
        }

        /* End of Switch: '<S1053>/Switch1' */
    }

    /* End of Outputs for SubSystem: '<S1036>/Htr1_ECH' */

    /* Outputs for Enabled SubSystem: '<S1036>/Htr2_EAH' incorporates:
     *  EnablePort: '<S1050>/VeHTRR_b_Heater2Slct'
     */
    if (rtb_TmpSignalConversionAtVeHTRR_b_Heat_m)
    {
        /* Switch: '<S1065>/Switch1' incorporates:
         *  Constant: '<S1069>/Calib'
         */
        if (KeHCDR_b_HV_Heater2_WarningFlag_SD)
        {
            /* Switch: '<S1065>/Switch1' incorporates:
             *  Constant: '<S1068>/Calib'
             */
            HCDR_ac_B.Switch1_e = KeHCDR_b_HV_Heater2_WarningFlag_D;
        }
        else
        {
            /* Switch: '<S1065>/Switch1' */
            HCDR_ac_B.Switch1_e = VeHCDR_b_Htr2Warning_Flag;
        }

        /* End of Switch: '<S1065>/Switch1' */

        /* Switch: '<S1064>/Switch1' incorporates:
         *  Constant: '<S1067>/Calib'
         */
        if (KeHCDR_b_HVC_Heater2_FltDtct_SD)
        {
            /* Switch: '<S1064>/Switch1' incorporates:
             *  Constant: '<S1066>/Calib'
             */
            HCDR_ac_B.Switch1_g = KeHCDR_b_HVC_Heater2_FltDtct_D;
        }
        else
        {
            /* Switch: '<S1064>/Switch1' */
            HCDR_ac_B.Switch1_g = VeHCDR_b_Htr2_FltDtct;
        }

        /* End of Switch: '<S1064>/Switch1' */
    }

    /* End of Outputs for SubSystem: '<S1036>/Htr2_EAH' */

    /* Outputs for Enabled SubSystem: '<S1036>/Htr3_HtrElmt' incorporates:
     *  EnablePort: '<S1051>/VeHTRR_b_Heater3Slct'
     */
    if (rtb_TmpSignalConversionAtVeHTRR_b_Heat_k)
    {
        /* Switch: '<S1071>/Switch1' incorporates:
         *  Constant: '<S1075>/Calib'
         */
        if (KeHCDR_b_HV_Heater3_WarningFlag_SD)
        {
            /* Switch: '<S1071>/Switch1' incorporates:
             *  Constant: '<S1074>/Calib'
             */
            HCDR_ac_B.Switch1_p = KeHCDR_b_HV_Heater3_WarningFlag_D;
        }
        else
        {
            /* Switch: '<S1071>/Switch1' */
            HCDR_ac_B.Switch1_p = VeHCDR_b_Htr3Warning_Flag;
        }

        /* End of Switch: '<S1071>/Switch1' */

        /* Switch: '<S1070>/Switch1' incorporates:
         *  Constant: '<S1073>/Calib'
         */
        if (KeHCDR_b_HVC_Heater3_FltDtct_SD)
        {
            /* Switch: '<S1070>/Switch1' incorporates:
             *  Constant: '<S1072>/Calib'
             */
            HCDR_ac_B.Switch1_c = KeHCDR_b_HVC_Heater3_FltDtct_D;
        }
        else
        {
            /* Switch: '<S1070>/Switch1' */
            HCDR_ac_B.Switch1_c = VeHCDR_b_Htr3_FltDtct;
        }

        /* End of Switch: '<S1070>/Switch1' */
    }

    /* End of Outputs for SubSystem: '<S1036>/Htr3_HtrElmt' */

    /* Outputs for Enabled SubSystem: '<S1036>/Htr4_ECH' incorporates:
     *  EnablePort: '<S1052>/VeHTRR_b_Heater4Slct'
     */
    if (rtb_TmpSignalConversionAtVeHTRR_b_Heat_c)
    {
        /* Gain: '<S1079>/Gain' */
        HCDR_ac_B.Gain_e = HCDR_ac_B.VariantMergeForOutportIUMPR_Htr4_ECH_Per;

        /* Gain: '<S1078>/Gain' */
        HCDR_ac_B.Gain_o = HCDR_ac_B.VariantMergeForOutportIUMPR_Htr4_ECH_Min;

        /* Switch: '<S1077>/Switch1' incorporates:
         *  Constant: '<S1083>/Calib'
         */
        if (KeHCDR_b_HV_Heater4_WarningFlag_SD)
        {
            /* Switch: '<S1077>/Switch1' incorporates:
             *  Constant: '<S1082>/Calib'
             */
            HCDR_ac_B.Switch1 = KeHCDR_b_HV_Heater4_WarningFlag_D;
        }
        else
        {
            /* Switch: '<S1077>/Switch1' */
            HCDR_ac_B.Switch1 = VeHCDR_b_Htr4Warning_Flag;
        }

        /* End of Switch: '<S1077>/Switch1' */

        /* Switch: '<S1076>/Switch1' incorporates:
         *  Constant: '<S1081>/Calib'
         */
        if (KeHCDR_b_HVC_Heater4_FltDtct_SD)
        {
            /* Switch: '<S1076>/Switch1' incorporates:
             *  Constant: '<S1080>/Calib'
             */
            HCDR_ac_B.Switch1_i = KeHCDR_b_HVC_Heater4_FltDtct_D;
        }
        else
        {
            /* Switch: '<S1076>/Switch1' */
            HCDR_ac_B.Switch1_i = VeHCDR_b_Htr4_FltDtct;
        }

        /* End of Switch: '<S1076>/Switch1' */
    }

    /* End of Outputs for SubSystem: '<S1036>/Htr4_ECH' */

    /* Switch: '<S1037>/Switch' incorporates:
     *  Constant: '<S1044>/Calib'
     */
    if (KeHCDR_b_AC_Comp_Fault_SelDial)
    {
        /* Outport: '<Root>/VeHCDR_b_AC_Comp_Fault' incorporates:
         *  Constant: '<S1043>/Calib'
         *  SignalConversion generated from: '<S1>/VeHCDR_b_AC_Comp_Fault'
         */
        (void)Rte_Write_VeHCDR_b_AC_Comp_Fault_Value(KeHCDR_b_AC_Comp_Fault_Dial);
    }
    else
    {
        /* Outport: '<Root>/VeHCDR_b_AC_Comp_Fault' incorporates:
         *  SignalConversion generated from: '<S1>/VeHCDR_b_AC_Comp_Fault'
         */
        (void)Rte_Write_VeHCDR_b_AC_Comp_Fault_Value
            (HCDR_ac_B.VariantMergeForOutportEACPref_FltDtct);
    }

    /* End of Switch: '<S1037>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeHCDR_b_HVC_Heater_FltDtct' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_b_HVC_Heater_FltDtct'
     */
    (void)Rte_Write_VeHCDR_b_HVC_Heater_FltDtct_Value(HCDR_ac_B.Switch1_l);

    /* Outport: '<Root>/VeHCDR_b_HVC_Heater_WarningFlag' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_b_HVC_Heater_WarningFlag'
     */
    (void)Rte_Write_VeHCDR_b_HVC_Heater_WarningFlag_Value(HCDR_ac_B.Switch1_m);

    /* Outport: '<Root>/VeHCDR_b_HV_Heater2_FltDtct' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_b_HV_Heater2_FltDtct'
     */
    (void)Rte_Write_VeHCDR_b_HV_Heater2_FltDtct_Value(HCDR_ac_B.Switch1_g);

    /* Outport: '<Root>/VeHCDR_b_HV_Heater2_WarningFlag' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_b_HV_Heater2_WarningFlag'
     */
    (void)Rte_Write_VeHCDR_b_HV_Heater2_WarningFlag_Value(HCDR_ac_B.Switch1_e);

    /* Outport: '<Root>/VeHCDR_b_HV_Heater3_FltDtct' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_b_HV_Heater3_FltDtct'
     */
    (void)Rte_Write_VeHCDR_b_HV_Heater3_FltDtct_Value(HCDR_ac_B.Switch1_c);

    /* Outport: '<Root>/VeHCDR_b_HV_Heater3_WarningFlag' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_b_HV_Heater3_WarningFlag'
     */
    (void)Rte_Write_VeHCDR_b_HV_Heater3_WarningFlag_Value(HCDR_ac_B.Switch1_p);

    /* Outport: '<Root>/VeHCDR_b_HV_Heater4_FltDtct' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_b_HV_Heater4_FltDtct'
     */
    (void)Rte_Write_VeHCDR_b_HV_Heater4_FltDtct_Value(HCDR_ac_B.Switch1_i);

    /* Outport: '<Root>/VeHCDR_b_HV_Heater4_WarningFlag' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_b_HV_Heater4_WarningFlag'
     */
    (void)Rte_Write_VeHCDR_b_HV_Heater4_WarningFlag_Value(HCDR_ac_B.Switch1);

    /* Outport: '<Root>/VeHCDR_b_Heater1_LOC' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_b_Heater1_LOC'
     */
    (void)Rte_Write_VeHCDR_b_Heater1_LOC_Value(HCDR_ac_B.Switch1_h);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outport: '<Root>/VeHCDR_b_IUMPR_Comp_MinCmdThrshld_Met' incorporates:
     *  Gain: '<S1042>/Gain'
     *  SignalConversion generated from: '<S1>/VeHCDR_b_IUMPR_Comp_MinCmdThrshld_Met'
     */
    (void)Rte_Write_VeHCDR_b_IUMPR_Comp_MinCmdThrshld_Met_Value
        (HCDR_ac_B.VariantMergeForOutportIUMPR_Comp_MinCmdT);

    /* Outport: '<Root>/VeHCDR_b_IUMPR_EACPerf' incorporates:
     *  Gain: '<S1040>/Gain'
     *  SignalConversion generated from: '<S1>/VeHCDR_b_IUMPR_EACPerf'
     */
    (void)Rte_Write_VeHCDR_b_IUMPR_EACPerf_Value
        (HCDR_ac_B.VariantMergeForOutportIUMPR_EACPerf);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeHCDR_b_IUMPR_Htr1_ECH_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_b_IUMPR_Htr1_ECH_MinCmdThrshld_Met'
     */
    (void)Rte_Write_VeHCDR_b_IUMPR_Htr1_ECH_MinCmdThrshld_Met_Value
        (HCDR_ac_B.Gain_k);

    /* Outport: '<Root>/VeHCDR_b_IUMPR_Htr1_ECH_Perf' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_b_IUMPR_Htr1_ECH_Perf'
     */
    (void)Rte_Write_VeHCDR_b_IUMPR_Htr1_ECH_Perf_Value(HCDR_ac_B.Gain_n);

    /* Outport: '<Root>/VeHCDR_b_IUMPR_Htr4_ECH_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_b_IUMPR_Htr4_ECH_MinCmdThrshld_Met'
     */
    (void)Rte_Write_VeHCDR_b_IUMPR_Htr4_ECH_MinCmdThrshld_Met_Value
        (HCDR_ac_B.Gain_o);

    /* Outport: '<Root>/VeHCDR_b_IUMPR_Htr4_ECH_Perf' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_b_IUMPR_Htr4_ECH_Perf'
     */
    (void)Rte_Write_VeHCDR_b_IUMPR_Htr4_ECH_Perf_Value(HCDR_ac_B.Gain_e);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outport: '<Root>/VeHCDR_b_IUMPR_PressSnsrPerf' incorporates:
     *  Gain: '<S1041>/Gain'
     *  SignalConversion generated from: '<S1>/VeHCDR_b_IUMPR_PressSnsrPerf'
     */
    (void)Rte_Write_VeHCDR_b_IUMPR_PressSnsrPerf_Value
        (HCDR_ac_B.VariantMergeForOutportIUMPR_PressSnsrPer);

    /* Switch: '<S1039>/Switch' incorporates:
     *  Constant: '<S1047>/Calib'
     */
    if (KeHCDR_b_PressSnsr_FltDtctEnOv)
    {
        /* Outport: '<Root>/VeHCDR_b_PressSnsr_FltDtct' incorporates:
         *  Constant: '<S1048>/Calib'
         *  SignalConversion generated from: '<S1>/VeHCDR_b_PressSnsr_FltDtct'
         */
        (void)Rte_Write_VeHCDR_b_PressSnsr_FltDtct_Value
            (KeHCDR_b_PressSnsr_FltDtctOv);
    }
    else
    {
        /* Outport: '<Root>/VeHCDR_b_PressSnsr_FltDtct' incorporates:
         *  SignalConversion generated from: '<S1>/VeHCDR_b_PressSnsr_FltDtct'
         */
        (void)Rte_Write_VeHCDR_b_PressSnsr_FltDtct_Value
            (VeHCDR_b_PressSnsr_FltDtct_AS);
    }

    /* End of Switch: '<S1039>/Switch' */

    /* Switch: '<S1038>/Switch' incorporates:
     *  Constant: '<S1045>/Calib'
     *  Constant: '<S1046>/Calib'
     *  Switch: '<S25>/Switch1'
     */
    if (KeHCDR_b_BatteryThermalFault_SelDial)
    {
        tmp = KeHCDR_e_BatteryThermalFault_Dial;
    }
    else
    {
        tmp = VeHCDR_e_BatteryThermalFault_B4D;
    }

    /* Outport: '<Root>/VeHCDR_e_BatteryThermalFault' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_e_BatteryThermalFault'
     *  Switch: '<S1038>/Switch'
     */
    (void)Rte_Write_VeHCDR_e_BatteryThermalFault_Value(tmp);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeHCDR_e_FaultSts_AC_RefrigPresSnsrAPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_e_FaultSts_AC_RefrigPresSnsrAPerf'
     *  VariantMerge generated from: '<S17>/VeHCDR_e_FaultSts_AC_RefrigPresSnsrAPerf'
     */
    (void)Rte_Write_VeHCDR_e_FaultSts_AC_RefrigPresSnsrAPerf_Value
        (HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_f);

    /* Outport: '<Root>/VeHCDR_e_FaultSts_CoolHeaterAPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_e_FaultSts_CoolHeaterAPerf'
     *  VariantMerge generated from: '<S295>/VeHCDR_e_FaultSts_CoolHeaterAPerf'
     */
    (void)Rte_Write_VeHCDR_e_FaultSts_CoolHeaterAPerf_Value
        (HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_m);

    /* Outport: '<Root>/VeHCDR_e_FaultSts_CoolantHeaterBPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_e_FaultSts_CoolantHeaterBPerf'
     *  VariantMerge generated from: '<S298>/VeHCDR_e_FaultSts_CoolantHeaterBPerf'
     */
    (void)Rte_Write_VeHCDR_e_FaultSts_CoolantHeaterBPerf_Value
        (HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSts_);

    /* Outport: '<Root>/VeHCDR_e_FaultSts_EACPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_e_FaultSts_EACPerf'
     *  VariantMerge generated from: '<S12>/VeHCDR_e_FaultSts_EACPerf'
     */
    (void)Rte_Write_VeHCDR_e_FaultSts_EACPerf_Value
        (HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_o);

    /* Outport: '<Root>/VeHCDR_e_FaultSts_HeatingElmntPerf' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_e_FaultSts_HeatingElmntPerf'
     *  VariantMerge generated from: '<S297>/VeHCDR_e_FaultSts_HeatingElmntPerf'
     */
    (void)Rte_Write_VeHCDR_e_FaultSts_HeatingElmntPerf_Value
        (HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_c);

    /* Outport: '<Root>/VeHCDR_e_FaultSts_HighVolCabinAirHtrperf' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCDR_e_FaultSts_HighVolCabinAirHtrperf'
     *  VariantMerge generated from: '<S296>/VeHCDR_e_FaultSts_HighVolCabinAirHtrperf'
     */
    (void)Rte_Write_VeHCDR_e_FaultSts_HighVolCabinAirHtrperf_Value
        (HCDR_ac_B.VariantMergeForOutportVeHCDR_e_FaultSt_j);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, HCDR_CODE) HCDR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/HCDR_PwrOff'
     */
    /* Outport: '<Root>/EeHCDR_t_RealTime_Comp_Off_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeHCDR_t_RealTime_Comp_Off'
     */
    (void)Rte_Write_EeHCDR_t_RealTime_Comp_Off_EeHCDR_t_RealTime_Comp_Off
        (EeHCDR_t_RealTime_Comp_Off);

    /* Outport: '<Root>/EeHCDR_b_InitDiag_Pass_Prev_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeHCDR_b_InitDiag_Pass_Prev'
     */
    (void)Rte_Write_EeHCDR_b_InitDiag_Pass_Prev_EeHCDR_b_InitDiag_Pass_Prev
        (EeHCDR_b_InitDiag_Pass_Prev);

    /* Outport: '<Root>/EeHCDR_t_RealTime_Comp_On_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeHCDR_t_RealTime_Comp_On'
     */
    (void)Rte_Write_EeHCDR_t_RealTime_Comp_On_EeHCDR_t_RealTime_Comp_On
        (EeHCDR_t_RealTime_Comp_On);

    /* Outport: '<Root>/NeHCDR_Cnt_EACPref_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeHCDR_Cnt_EACPref_MFOP'
     */
    (void)Rte_Write_NeHCDR_Cnt_EACPref_MFOP_NeHCDR_Cnt_EACPref_MFOP
        (HCDR_ac_DW.NeHCDR_Cnt_EACPref_MFOP);

    /* Outport: '<Root>/NeHCDR_Cnt_HVC_Heater2_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeHCDR_Cnt_HVC_Heater2_MFOP'
     */
    (void)Rte_Write_NeHCDR_Cnt_HVC_Heater2_MFOP_NeHCDR_Cnt_HVC_Heater2_MFOP
        (HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater2_MFOP);

    /* Outport: '<Root>/NeHCDR_Cnt_HVC_Heater3_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeHCDR_Cnt_HVC_Heater3_MFOP'
     */
    (void)Rte_Write_NeHCDR_Cnt_HVC_Heater3_MFOP_NeHCDR_Cnt_HVC_Heater3_MFOP
        (HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater3_MFOP);

    /* Outport: '<Root>/NeHCDR_Cnt_HVC_Heater4_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeHCDR_Cnt_HVC_Heater4_MFOP'
     */
    (void)Rte_Write_NeHCDR_Cnt_HVC_Heater4_MFOP_NeHCDR_Cnt_HVC_Heater4_MFOP
        (HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater4_MFOP);

    /* Outport: '<Root>/NeHCDR_Cnt_HVC_Heater_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeHCDR_Cnt_HVC_Heater_MFOP'
     */
    (void)Rte_Write_NeHCDR_Cnt_HVC_Heater_MFOP_NeHCDR_Cnt_HVC_Heater_MFOP
        (HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, HCDR_CODE) HCDR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/HCDR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S1084>/NeHCDR_Cnt_HVC_Heater_MFOP' incorporates:
     *  Inport: '<Root>/NeHCDR_Cnt_HVC_Heater_MFOP_PM_In'
     */
    (void)Rte_Read_NeHCDR_Cnt_HVC_Heater_MFOP_Rx_NeHCDR_Cnt_HVC_Heater_MFOP
        (&HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater_MFOP);

    /* DataStoreWrite: '<S1084>/NeHCDR_Cnt_HVC_Heater4_MFOP' incorporates:
     *  Inport: '<Root>/NeHCDR_Cnt_HVC_Heater4_MFOP_PM_In'
     */
    (void)Rte_Read_NeHCDR_Cnt_HVC_Heater4_MFOP_Rx_NeHCDR_Cnt_HVC_Heater4_MFOP
        (&HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater4_MFOP);

    /* DataStoreWrite: '<S1084>/NeHCDR_Cnt_HVC_Heater3_MFOP' incorporates:
     *  Inport: '<Root>/NeHCDR_Cnt_HVC_Heater3_MFOP_PM_In'
     */
    (void)Rte_Read_NeHCDR_Cnt_HVC_Heater3_MFOP_Rx_NeHCDR_Cnt_HVC_Heater3_MFOP
        (&HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater3_MFOP);

    /* DataStoreWrite: '<S1084>/NeHCDR_Cnt_HVC_Heater2_MFOP' incorporates:
     *  Inport: '<Root>/NeHCDR_Cnt_HVC_Heater2_MFOP_PM_In'
     */
    (void)Rte_Read_NeHCDR_Cnt_HVC_Heater2_MFOP_Rx_NeHCDR_Cnt_HVC_Heater2_MFOP
        (&HCDR_ac_DW.NeHCDR_Cnt_HVC_Heater2_MFOP);

    /* DataStoreWrite: '<S1084>/NeHCDR_Cnt_EACPref_MFOP' incorporates:
     *  Inport: '<Root>/NeHCDR_Cnt_EACPref_MFOP_PM_In'
     */
    (void)Rte_Read_NeHCDR_Cnt_EACPref_MFOP_Rx_NeHCDR_Cnt_EACPref_MFOP
        (&HCDR_ac_DW.NeHCDR_Cnt_EACPref_MFOP);

    /* DataStoreWrite: '<S1084>/EeHCDR_t_RealTime_Comp_On' incorporates:
     *  Inport: '<Root>/EeHCDR_t_RealTime_Comp_On_PM_In'
     */
    (void)Rte_Read_EeHCDR_t_RealTime_Comp_On_Rx_EeHCDR_t_RealTime_Comp_On
        ((&(EeHCDR_t_RealTime_Comp_On)));

    /* DataStoreWrite: '<S1084>/EeHCDR_b_InitDiag_Pass_Prev' incorporates:
     *  Inport: '<Root>/EeHCDR_b_InitDiag_Pass_Prev_PM_In'
     */
    (void)Rte_Read_EeHCDR_b_InitDiag_Pass_Prev_Rx_EeHCDR_b_InitDiag_Pass_Prev
        ((&(EeHCDR_b_InitDiag_Pass_Prev)));

    /* DataStoreWrite: '<S1084>/EeHCDR_t_RealTime_Comp_Off' incorporates:
     *  Inport: '<Root>/EeHCDR_t_RealTime_Comp_Off_PM_In'
     */
    (void)Rte_Read_EeHCDR_t_RealTime_Comp_Off_Rx_EeHCDR_t_RealTime_Comp_Off
        ((&(EeHCDR_t_RealTime_Comp_Off)));

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S1085>/VeHCDR_b_IUMPR_Htr1_ECH_Perf_Out_Init' */
    HCDR_ac_B.OutportBufferForVeHCDR_b_IUMPR_Htr1_ECH_ = false;

    /* SignalConversion generated from: '<S1085>/VeHCDR_b_IUMPR_Htr1_ECH_MinCmdThrshld_Met_Out_Init' */
    HCDR_ac_B.OutportBufferForVeHCDR_b_IUMPR_Htr1_EC_m = false;

    /* SignalConversion generated from: '<S1085>/VeHCDR_b_IUMPR_Htr4_ECH_Perf_Out_Init' */
    HCDR_ac_B.OutportBufferForVeHCDR_b_IUMPR_Htr4_ECH_ = false;

    /* SignalConversion generated from: '<S1085>/VeHCDR_b_IUMPR_Htr4_ECH_MinCmdThrshld_Met_Out_Init' */
    HCDR_ac_B.OutportBufferForVeHCDR_b_IUMPR_Htr4_EC_k = false;

    /* SignalConversion generated from: '<S1085>/VeHCDR_e_BatteryThermalFault_Out_Init' incorporates:
     *  Constant: '<S1085>/Const5'
     */
    HCDR_ac_B.OutportBufferForVeHCDR_e_BatteryThermalF = HCDR_ac_ConstB.Const5;

    /* SignalConversion generated from: '<S1085>/VeHCDR_b_IUMPR_EACPerf_Out_Init' */
    HCDR_ac_B.OutportBufferForVeHCDR_b_IUMPR_EACPerf_O = false;

    /* SignalConversion generated from: '<S1085>/VeHCDR_b_IUMPR_PressSnsrPerf_Out_Init' */
    HCDR_ac_B.OutportBufferForVeHCDR_b_IUMPR_PressSnsr = false;

    /* SignalConversion generated from: '<S1085>/VeHCDR_b_IUMPR_Comp_MinCmdThrshld_Met_Out_Init' */
    HCDR_ac_B.OutportBufferForVeHCDR_b_IUMPR_Comp_MinC = false;

    /* SignalConversion generated from: '<S1085>/VeHCDR_b_HVC_Heater_WarningFlag_Out_Init' */
    HCDR_ac_B.OutportBufferForVeHCDR_b_HVC_Heater_Warn = false;

    /* SignalConversion generated from: '<S1085>/VeHCDR_b_Heater1_LOC_Out_Init' */
    HCDR_ac_B.OutportBufferForVeHCDR_b_Heater1_LOC_Out = false;

    /* SignalConversion generated from: '<S1085>/VeHCDR_b_HV_Heater2_WarningFlag_Out_Init' */
    HCDR_ac_B.OutportBufferForVeHCDR_b_HV_Heater2_Warn = false;

    /* SignalConversion generated from: '<S1085>/VeHCDR_b_HV_Heater3_WarningFlag_Out_Init' */
    HCDR_ac_B.OutportBufferForVeHCDR_b_HV_Heater3_Warn = false;

    /* SignalConversion generated from: '<S1085>/VeHCDR_b_HV_Heater4_WarningFlag_Out_Init' */
    HCDR_ac_B.OutportBufferForVeHCDR_b_HV_Heater4_Warn = false;

    /* SignalConversion generated from: '<S1085>/VeHCDR_b_HVC_Heater_FltDtct_Out_Init' */
    HCDR_ac_B.OutportBufferForVeHCDR_b_HVC_Heater_FltD = false;

    /* SignalConversion generated from: '<S1085>/VeHCDR_b_HV_Heater2_FltDtct_Out_Init' */
    HCDR_ac_B.OutportBufferForVeHCDR_b_HV_Heater2_FltD = false;

    /* SignalConversion generated from: '<S1085>/VeHCDR_b_HV_Heater3_FltDtct_Out_Init' */
    HCDR_ac_B.OutportBufferForVeHCDR_b_HV_Heater3_FltD = false;

    /* SignalConversion generated from: '<S1085>/VeHCDR_b_HV_Heater4_FltDtct_Out_Init' */
    HCDR_ac_B.OutportBufferForVeHCDR_b_HV_Heater4_FltD = false;

    /* SignalConversion generated from: '<S1085>/VeHCDR_b_PressSnsr_FltDtct_Out_Init' */
    HCDR_ac_B.OutportBufferForVeHCDR_b_PressSnsr_FltDt = false;

    /* SignalConversion generated from: '<S1085>/VeHCDR_b_AC_Comp_Fault_Out_Init' */
    HCDR_ac_B.OutportBufferForVeHCDR_b_AC_Comp_Fault_O = false;

    /* SignalConversion generated from: '<S1085>/VeHCDR_e_FaultSts_EACPerf' incorporates:
     *  Constant: '<S1086>/Constant'
     */
    HCDR_ac_B.OutportBufferForVeHCDR_e_FaultSts_EACPer = HCDR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S1085>/VeHCDR_e_FaultSts_AC_RefrigPresSnsrAPerf' incorporates:
     *  Constant: '<S1087>/Constant'
     */
    HCDR_ac_B.OutportBufferForVeHCDR_e_FaultSts_AC_Ref =
        HCDR_ac_ConstB.Constant_e;

    /* SignalConversion generated from: '<S1085>/VeHCDR_e_FaultSts_CoolHeaterAPerf' incorporates:
     *  Constant: '<S1088>/Constant'
     */
    HCDR_ac_B.OutportBufferForVeHCDR_e_FaultSts_CoolHe =
        HCDR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S1085>/VeHCDR_e_FaultSts_HighVolCabinAirHtrperf' incorporates:
     *  Constant: '<S1089>/Constant'
     */
    HCDR_ac_B.OutportBufferForVeHCDR_e_FaultSts_HighVo =
        HCDR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S1085>/VeHCDR_e_FaultSts_HeatingElmntPerf' incorporates:
     *  Constant: '<S1090>/Constant'
     */
    HCDR_ac_B.OutportBufferForVeHCDR_e_FaultSts_Heatin =
        HCDR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S1085>/VeHCDR_e_FaultSts_CoolantHeaterBPerf' incorporates:
     *  Constant: '<S1091>/Constant'
     */
    HCDR_ac_B.OutportBufferForVeHCDR_e_FaultSts_Coolan =
        HCDR_ac_ConstB.Constant_i;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeHCDR_e_FaultSts_AC_RefrigPresSnsrAPerf' incorporates:
     *  SignalConversion generated from: '<S1085>/VeHCDR_e_FaultSts_AC_RefrigPresSnsrAPerf'
     *  SignalConversion generated from: '<S3>/R_VeHCDR_e_FaultSts_AC_RefrigPresSnsrAPerf'
     */
    (void)Rte_Write_VeHCDR_e_FaultSts_AC_RefrigPresSnsrAPerf_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_e_FaultSts_AC_Ref);

    /* Outport: '<Root>/VeHCDR_e_FaultSts_CoolHeaterAPerf' incorporates:
     *  SignalConversion generated from: '<S1085>/VeHCDR_e_FaultSts_CoolHeaterAPerf'
     *  SignalConversion generated from: '<S3>/R_VeHCDR_e_FaultSts_CoolHeaterAPerf'
     */
    (void)Rte_Write_VeHCDR_e_FaultSts_CoolHeaterAPerf_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_e_FaultSts_CoolHe);

    /* Outport: '<Root>/VeHCDR_e_FaultSts_CoolantHeaterBPerf' incorporates:
     *  SignalConversion generated from: '<S1085>/VeHCDR_e_FaultSts_CoolantHeaterBPerf'
     *  SignalConversion generated from: '<S3>/R_VeHCDR_e_FaultSts_CoolantHeaterBPerf'
     */
    (void)Rte_Write_VeHCDR_e_FaultSts_CoolantHeaterBPerf_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_e_FaultSts_Coolan);

    /* Outport: '<Root>/VeHCDR_e_FaultSts_EACPerf' incorporates:
     *  SignalConversion generated from: '<S1085>/VeHCDR_e_FaultSts_EACPerf'
     *  SignalConversion generated from: '<S3>/R_VeHCDR_e_FaultSts_EACPerf'
     */
    (void)Rte_Write_VeHCDR_e_FaultSts_EACPerf_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_e_FaultSts_EACPer);

    /* Outport: '<Root>/VeHCDR_e_FaultSts_HeatingElmntPerf' incorporates:
     *  SignalConversion generated from: '<S1085>/VeHCDR_e_FaultSts_HeatingElmntPerf'
     *  SignalConversion generated from: '<S3>/R_VeHCDR_e_FaultSts_HeatingElmntPerf'
     */
    (void)Rte_Write_VeHCDR_e_FaultSts_HeatingElmntPerf_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_e_FaultSts_Heatin);

    /* Outport: '<Root>/VeHCDR_e_FaultSts_HighVolCabinAirHtrperf' incorporates:
     *  SignalConversion generated from: '<S1085>/VeHCDR_e_FaultSts_HighVolCabinAirHtrperf'
     *  SignalConversion generated from: '<S3>/R_VeHCDR_e_FaultSts_HighVolCabinAirHtrperf'
     */
    (void)Rte_Write_VeHCDR_e_FaultSts_HighVolCabinAirHtrperf_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_e_FaultSts_HighVo);

    /* Outport: '<Root>/VeHCDR_b_AC_Comp_Fault' incorporates:
     *  SignalConversion generated from: '<S3>/VeHCDR_b_AC_Comp_Fault_Out_Init'
     */
    (void)Rte_Write_VeHCDR_b_AC_Comp_Fault_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_b_AC_Comp_Fault_O);

    /* Outport: '<Root>/VeHCDR_b_HVC_Heater_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeHCDR_b_HVC_Heater_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeHCDR_b_HVC_Heater_FltDtct_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_b_HVC_Heater_FltD);

    /* Outport: '<Root>/VeHCDR_b_HVC_Heater_WarningFlag' incorporates:
     *  SignalConversion generated from: '<S3>/VeHCDR_b_HVC_Heater_WarningFlag_Out_Init'
     */
    (void)Rte_Write_VeHCDR_b_HVC_Heater_WarningFlag_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_b_HVC_Heater_Warn);

    /* Outport: '<Root>/VeHCDR_b_HV_Heater2_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeHCDR_b_HV_Heater2_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeHCDR_b_HV_Heater2_FltDtct_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_b_HV_Heater2_FltD);

    /* Outport: '<Root>/VeHCDR_b_HV_Heater2_WarningFlag' incorporates:
     *  SignalConversion generated from: '<S3>/VeHCDR_b_HV_Heater2_WarningFlag_Out_Init'
     */
    (void)Rte_Write_VeHCDR_b_HV_Heater2_WarningFlag_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_b_HV_Heater2_Warn);

    /* Outport: '<Root>/VeHCDR_b_HV_Heater3_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeHCDR_b_HV_Heater3_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeHCDR_b_HV_Heater3_FltDtct_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_b_HV_Heater3_FltD);

    /* Outport: '<Root>/VeHCDR_b_HV_Heater3_WarningFlag' incorporates:
     *  SignalConversion generated from: '<S3>/VeHCDR_b_HV_Heater3_WarningFlag_Out_Init'
     */
    (void)Rte_Write_VeHCDR_b_HV_Heater3_WarningFlag_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_b_HV_Heater3_Warn);

    /* Outport: '<Root>/VeHCDR_b_HV_Heater4_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeHCDR_b_HV_Heater4_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeHCDR_b_HV_Heater4_FltDtct_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_b_HV_Heater4_FltD);

    /* Outport: '<Root>/VeHCDR_b_HV_Heater4_WarningFlag' incorporates:
     *  SignalConversion generated from: '<S3>/VeHCDR_b_HV_Heater4_WarningFlag_Out_Init'
     */
    (void)Rte_Write_VeHCDR_b_HV_Heater4_WarningFlag_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_b_HV_Heater4_Warn);

    /* Outport: '<Root>/VeHCDR_b_Heater1_LOC' incorporates:
     *  SignalConversion generated from: '<S3>/VeHCDR_b_Heater1_LOC_Out_Init'
     */
    (void)Rte_Write_VeHCDR_b_Heater1_LOC_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_b_Heater1_LOC_Out);

    /* Outport: '<Root>/VeHCDR_b_IUMPR_Comp_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S3>/VeHCDR_b_IUMPR_Comp_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeHCDR_b_IUMPR_Comp_MinCmdThrshld_Met_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_b_IUMPR_Comp_MinC);

    /* Outport: '<Root>/VeHCDR_b_IUMPR_EACPerf' incorporates:
     *  SignalConversion generated from: '<S3>/VeHCDR_b_IUMPR_EACPerf_Out_Init'
     */
    (void)Rte_Write_VeHCDR_b_IUMPR_EACPerf_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_b_IUMPR_EACPerf_O);

    /* Outport: '<Root>/VeHCDR_b_IUMPR_Htr1_ECH_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S3>/VeHCDR_b_IUMPR_Htr1_ECH_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeHCDR_b_IUMPR_Htr1_ECH_MinCmdThrshld_Met_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_b_IUMPR_Htr1_EC_m);

    /* Outport: '<Root>/VeHCDR_b_IUMPR_Htr1_ECH_Perf' incorporates:
     *  SignalConversion generated from: '<S3>/VeHCDR_b_IUMPR_Htr1_ECH_Perf_Out_Init'
     */
    (void)Rte_Write_VeHCDR_b_IUMPR_Htr1_ECH_Perf_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_b_IUMPR_Htr1_ECH_);

    /* Outport: '<Root>/VeHCDR_b_IUMPR_Htr4_ECH_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S3>/VeHCDR_b_IUMPR_Htr4_ECH_MinCmdThrshld_Met_Out_Init'
     */
    (void)Rte_Write_VeHCDR_b_IUMPR_Htr4_ECH_MinCmdThrshld_Met_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_b_IUMPR_Htr4_EC_k);

    /* Outport: '<Root>/VeHCDR_b_IUMPR_Htr4_ECH_Perf' incorporates:
     *  SignalConversion generated from: '<S3>/VeHCDR_b_IUMPR_Htr4_ECH_Perf_Out_Init'
     */
    (void)Rte_Write_VeHCDR_b_IUMPR_Htr4_ECH_Perf_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_b_IUMPR_Htr4_ECH_);

    /* Outport: '<Root>/VeHCDR_b_IUMPR_PressSnsrPerf' incorporates:
     *  SignalConversion generated from: '<S3>/VeHCDR_b_IUMPR_PressSnsrPerf_Out_Init'
     */
    (void)Rte_Write_VeHCDR_b_IUMPR_PressSnsrPerf_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_b_IUMPR_PressSnsr);

    /* Outport: '<Root>/VeHCDR_b_PressSnsr_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeHCDR_b_PressSnsr_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeHCDR_b_PressSnsr_FltDtct_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_b_PressSnsr_FltDt);

    /* Outport: '<Root>/VeHCDR_e_BatteryThermalFault' incorporates:
     *  SignalConversion generated from: '<S1085>/VeHCDR_e_BatteryThermalFault_Out_Init'
     *  SignalConversion generated from: '<S3>/VeHCDR_e_BatteryThermalFault_Out_Init'
     */
    (void)Rte_Write_VeHCDR_e_BatteryThermalFault_Value
        (HCDR_ac_B.OutportBufferForVeHCDR_e_BatteryThermalF);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, HCDR_CODE) HCDR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/HCDR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S1085>/VeHCDR_e_BatteryThermalFault_Out_Init' incorporates:
     *  Constant: '<S1085>/Const5'
     */
    HCDR_ac_B.OutportBufferForVeHCDR_e_BatteryThermalF = HCDR_ac_ConstB.Const5;

    /* SystemInitialize for SignalConversion generated from: '<S1085>/VeHCDR_e_FaultSts_EACPerf' incorporates:
     *  Constant: '<S1086>/Constant'
     */
    HCDR_ac_B.OutportBufferForVeHCDR_e_FaultSts_EACPer = HCDR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S1085>/VeHCDR_e_FaultSts_AC_RefrigPresSnsrAPerf' incorporates:
     *  Constant: '<S1087>/Constant'
     */
    HCDR_ac_B.OutportBufferForVeHCDR_e_FaultSts_AC_Ref =
        HCDR_ac_ConstB.Constant_e;

    /* SystemInitialize for SignalConversion generated from: '<S1085>/VeHCDR_e_FaultSts_CoolHeaterAPerf' incorporates:
     *  Constant: '<S1088>/Constant'
     */
    HCDR_ac_B.OutportBufferForVeHCDR_e_FaultSts_CoolHe =
        HCDR_ac_ConstB.Constant_o;

    /* SystemInitialize for SignalConversion generated from: '<S1085>/VeHCDR_e_FaultSts_HighVolCabinAirHtrperf' incorporates:
     *  Constant: '<S1089>/Constant'
     */
    HCDR_ac_B.OutportBufferForVeHCDR_e_FaultSts_HighVo =
        HCDR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S1085>/VeHCDR_e_FaultSts_HeatingElmntPerf' incorporates:
     *  Constant: '<S1090>/Constant'
     */
    HCDR_ac_B.OutportBufferForVeHCDR_e_FaultSts_Heatin =
        HCDR_ac_ConstB.Constant_p;

    /* SystemInitialize for SignalConversion generated from: '<S1085>/VeHCDR_e_FaultSts_CoolantHeaterBPerf' incorporates:
     *  Constant: '<S1091>/Constant'
     */
    HCDR_ac_B.OutportBufferForVeHCDR_e_FaultSts_Coolan =
        HCDR_ac_ConstB.Constant_i;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/HCDR_MedTEH'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnosis'
     */

    /* SystemInitialize for Atomic SubSystem: '<S7>/Comp_EAC_Diagnosis' */
#if Rte_SysCon_Variant_HCDR_2

    /* SystemInitialize for Atomic SubSystem: '<S12>/Comp_EAC_Diagnosis' */
    /* SystemInitialize for Enabled SubSystem: '<S64>/Set_Debounce' */
    /* SystemInitialize for SignalConversion generated from: '<S84>/Out1' incorporates:
     *  Outport: '<S84>/Out1'
     */
    HCDR_ac_B.OutportBufferForOut1 = true;

    /* End of SystemInitialize for SubSystem: '<S64>/Set_Debounce' */
    /* End of SystemInitialize for SubSystem: '<S12>/Comp_EAC_Diagnosis' */
#endif

    /* End of SystemInitialize for SubSystem: '<S7>/Comp_EAC_Diagnosis' */

    /* SystemInitialize for Atomic SubSystem: '<S10>/Htr1_ECH_Diagnosis' */
#if Rte_SysCon_Variant_HCDR_5
#endif

    /* End of SystemInitialize for SubSystem: '<S10>/Htr1_ECH_Diagnosis' */

    /* SystemInitialize for Atomic SubSystem: '<S10>/Htr2_EAH_Diagnosis' */
#if Rte_SysCon_Variant_HCDR_6
#endif

    /* End of SystemInitialize for SubSystem: '<S10>/Htr2_EAH_Diagnosis' */

    /* SystemInitialize for Atomic SubSystem: '<S10>/Htr3_BHE_Diagnosis' */
#if Rte_SysCon_Variant_HCDR_7
#endif

    /* End of SystemInitialize for SubSystem: '<S10>/Htr3_BHE_Diagnosis' */

    /* SystemInitialize for Atomic SubSystem: '<S10>/Htr4_BCH_Diagnosis' */
#if Rte_SysCon_Variant_HCDR_8
#endif

    /* End of SystemInitialize for SubSystem: '<S10>/Htr4_BCH_Diagnosis' */

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* SystemInitialize for Outport: '<Root>/VeHCDR_e_BatteryThermalFault' incorporates:
     *  Merge: '<Root>/Merge_Outport_5'
     */
    (void)Rte_Write_VeHCDR_e_BatteryThermalFault_Value
        (CeHCDR_e_BattThermalNoFault);

    /* SystemInitialize for Outport: '<Root>/VeHCDR_e_FaultSts_EACPerf' incorporates:
     *  Merge: '<Root>/M_VeHCDR_e_FaultSts_EACPerf'
     */
    (void)Rte_Write_VeHCDR_e_FaultSts_EACPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeHCDR_e_FaultSts_AC_RefrigPresSnsrAPerf' incorporates:
     *  Merge: '<Root>/M_VeHCDR_e_FaultSts_AC_RefrigPresSnsrAPerf'
     */
    (void)Rte_Write_VeHCDR_e_FaultSts_AC_RefrigPresSnsrAPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeHCDR_e_FaultSts_CoolHeaterAPerf' incorporates:
     *  Merge: '<Root>/M_VeHCDR_e_FaultSts_CoolHeaterAPerf'
     */
    (void)Rte_Write_VeHCDR_e_FaultSts_CoolHeaterAPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeHCDR_e_FaultSts_HighVolCabinAirHtrperf' incorporates:
     *  Merge: '<Root>/M_VeHCDR_e_FaultSts_HighVolCabinAirHtrperf'
     */
    (void)Rte_Write_VeHCDR_e_FaultSts_HighVolCabinAirHtrperf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeHCDR_e_FaultSts_HeatingElmntPerf' incorporates:
     *  Merge: '<Root>/M_VeHCDR_e_FaultSts_HeatingElmntPerf'
     */
    (void)Rte_Write_VeHCDR_e_FaultSts_HeatingElmntPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeHCDR_e_FaultSts_CoolantHeaterBPerf' incorporates:
     *  Merge: '<Root>/M_VeHCDR_e_FaultSts_CoolantHeaterBPerf'
     */
    (void)Rte_Write_VeHCDR_e_FaultSts_CoolantHeaterBPerf_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
