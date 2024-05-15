/*
 * File: HSWR_ac.c
 *
 * Code generated for Simulink model 'HSWR_ac'.
 *
 * Model version                  : 9.167
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:50:22 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HSWR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_HSWR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(TeHSWR_e_ECMHoodStatus, HSWR_VAR_INIT)
    KaHSWR_e_ECMHoodAjar_Map[4] =
{
    CeHSWR_e_Closed_ECMHdAjar, CeHSWR_e_Ajar_ECMHdAjar,
    CeHSWR_e_Faulted_ECMHdAjar, CeHSWR_e_SNA_ECMHdAjar
};                                     /* Referenced by: '<S405>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(TeHSWR_e_HoodStatus, HSWR_VAR_INIT)
    KaHSWR_e_HdSwtch_St_Map[3] =
{
    CeHSWR_e_HoodClosed, CeHSWR_e_HoodAjar, CeHSWR_e_HoodOpen
};                                     /* Referenced by: '<S407>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(sint16, HSWR_VAR_INIT) KaHSWR_i_CBC_BntAjrRwVlSts_Map[16] =
{
    0, 1, 2, 3, 4, 5, 8, 9, 6, 7, 10, 11, 12, 13, 14, 15
} ;                                    /* Referenced by: '<S403>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWD_Cnt_CBCSec_CcFail = 11.0F;/* Referenced by: '<S342>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWD_Cnt_CBCSec_CcSmp = 11.0F;/* Referenced by: '<S343>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWD_Cnt_CBC_HdAjar_HiFail =
    10.0F;                             /* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWD_Cnt_CBC_HdAjar_HiSmp =
    10.0F;                             /* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWD_Cnt_CBC_HdAjar_LoFail =
    10.0F;                             /* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWD_Cnt_CBC_HdAjar_LoSmp =
    10.0F;                             /* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWD_Cnt_CBC_HdAjar_PerFail =
    10.0F;                             /* Referenced by: '<S135>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWD_Cnt_CBC_HdAjar_PerSmp =
    10.0F;                             /* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWD_Cnt_SecBnt_HiFail = 10.0F;/* Referenced by: '<S305>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWD_Cnt_SecBnt_HiSmp = 10.0F;/* Referenced by: '<S306>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWD_Cnt_SecBnt_LoFail = 10.0F;/* Referenced by: '<S278>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWD_Cnt_SecBnt_LoSmp = 10.0F;/* Referenced by: '<S279>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWD_Cnt_SecBnt_PrfFail = 10.0F;/* Referenced by: '<S251>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWD_Cnt_SecBnt_PrfSmp = 10.0F;/* Referenced by: '<S252>/Calib' */

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWD_U_SysVolt_Max = 16.0F;/* Referenced by: '<S361>/Calib' */

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWD_U_SysVolt_Min = 9.0F;/* Referenced by: '<S362>/Calib' */

#endif

#if !Rte_SysCon_Variant_HSWR_7 && Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWD_b_CktRng_SNAEnbl = 0;/* Referenced by: '<S134>/Calib' */

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWD_b_EnblNewBusOffChck = 1;/* Referenced by:
                                                                      * '<S126>/Calib'
                                                                      * '<S162>/Calib'
                                                                      * '<S201>/Calib'
                                                                      * '<S336>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT)
    KeHSWD_b_EnblOvrd_CBCSec_Correlation_Check = 0;/* Referenced by: '<S337>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT)
    KeHSWD_b_EnblOvrd_SecBnt_Circuit_High = 0;/* Referenced by: '<S301>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT)
    KeHSWD_b_EnblOvrd_SecBnt_Circuit_Low = 0;/* Referenced by: '<S274>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT)
    KeHSWD_b_EnblOvrd_SecBnt_Circuit_Perf = 0;/* Referenced by: '<S247>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT)
    KeHSWD_b_Enbl_CBCSec_Correlation_Check = 1;/* Referenced by: '<S338>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWD_b_Enbl_CBC_Fault_High = 0;/* Referenced by: '<S202>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWD_b_Enbl_CBC_Fault_Low = 0;/* Referenced by: '<S163>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWD_b_Enbl_CBC_Range = 0;/* Referenced by: '<S127>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWD_b_Enbl_P257D_Check = 1;/* Referenced by:
                                                                      * '<S164>/Calib'
                                                                      * '<S203>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWD_b_Enbl_SecBnt_Circuit_High =
    1;                                 /* Referenced by: '<S302>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWD_b_Enbl_SecBnt_Circuit_Low =
    1;                                 /* Referenced by: '<S275>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWD_b_Enbl_SecBnt_Circuit_Perf =
    1;                                 /* Referenced by: '<S248>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWD_b_EngHoodSw2AjDrv_LtchEnbl =
    0;                                 /* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWD_b_EngHoodSw2CktHi_LtchEnbl =
    0;                                 /* Referenced by: '<S307>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWD_b_EngHoodSw2CktLo_LtchEnbl =
    0;                                 /* Referenced by: '<S280>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWD_b_EngHoodSwCktHi_LtchEnbl =
    0;                                 /* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWD_b_EngHoodSwCktLo_LtchEnbl =
    0;                                 /* Referenced by: '<S176>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT)
    KeHSWD_b_EngHoodSwCktRngPerf_LtchEnbl = 0;/* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWD_b_EngHoodSwCorr_LtchEnbl =
    0;                                 /* Referenced by: '<S344>/Calib' */

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWD_b_SysVoltEnbl = 0;/* Referenced by: '<S363>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_BntAjrRwVlStsVolt_Init =
    0.0F;                              /* Referenced by: '<S398>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_HoodClosed_Max = 3.69F;/* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_HoodClosed_Min = 2.11F;/* Referenced by: '<S69>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_HoodOpen_Max = 2.11F;/* Referenced by: '<S70>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_HoodOpen_Min = 0.43F;/* Referenced by: '<S71>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_OpenCircuit_Max = 5.0F;/* Referenced by: '<S72>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_OpenCircuit_Min = 3.69F;/* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_Performance_Max = 6.0F;/* Referenced by: '<S74>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_Performance_Min = 5.0F;/* Referenced by: '<S75>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_SecBntClosedMax = 3.69F;/* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_SecBntClosedMin = 2.11F;/* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_SecBntOpenedMax = 2.11F;/* Referenced by: '<S90>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_SecBntOpenedMin = 0.43F;/* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_SecBnt_Performance_Max =
    10.0F;                             /* Referenced by: '<S249>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_SecBnt_Performance_Min =
    5.0F;                              /* Referenced by: '<S250>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_SecBnt_ShortedHigh_Max =
    5.0F;                              /* Referenced by: '<S303>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_SecBnt_ShortedHigh_Min =
    3.69F;                             /* Referenced by: '<S304>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_SecBnt_ShortedLow_Max =
    0.43F;                             /* Referenced by: '<S276>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_SecBnt_ShortedLow_Min =
    0.0F;                              /* Referenced by: '<S277>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_ShortToGround_Max = 0.43F;/* Referenced by: '<S76>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_ShortToGround_Min = 0.0F;/* Referenced by: '<S77>/Calib' */

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_U_SysVolt_D = 0.0F;/* Referenced by: '<S364>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWR_b_CBCHdStOvrdEnbl = 0;/* Referenced by: '<S47>/Calib' */

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWR_b_DsblFailSafe_D = 0;/* Referenced by: '<S365>/Calib' */

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWR_b_DsblFailSafe_SD = 0;/* Referenced by: '<S366>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWR_b_ECMHdAjarOvrdEnbl = 0;/* Referenced by: '<S30>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWR_b_ECMHdAjarOvrdVal = 0;/* Referenced by: '<S31>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWR_b_ECMHdStatSaved_Fsft = 1;/* Referenced by: '<S32>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWR_b_EnableDbncBntAjrVISts = 1;/* Referenced by: '<S93>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWR_b_Enbl_K8_Pgrm = 0;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWR_b_Enbl_Old_Impl = 0;/* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWR_b_Enbl_RU_Pgrm = 1;/* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWR_b_Enbl_Volt_Impl = 0;/* Referenced by: '<S51>/Calib' */

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static volatile CONST(boolean, HSWR_VAR_INIT)
    KeHSWR_b_IsDiagGlobalConditionsValid_D = 0;/* Referenced by: '<S367>/Calib' */

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static volatile CONST(boolean, HSWR_VAR_INIT)
    KeHSWR_b_IsDiagGlobalConditionsValid_SD = 0;/* Referenced by: '<S368>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWR_b_New_Poke_Sel = 1;/* Referenced by: '<S52>/Calib' */

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWR_b_PostCodeClrDiagDsbl_D = 0;/* Referenced by: '<S369>/Calib' */

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWR_b_PostCodeClrDiagDsbl_SD =
    0;                                 /* Referenced by: '<S370>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT)
    KeHSWR_b_SingleSwitchECMAsleepOvrdEnbl = 1;/* Referenced by: '<S33>/Calib' */

#endif

#if !Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWR_b_SingleSwitchECMClosedVal =
    1;                                 /* Referenced by: '<S34>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWR_b_SingleSwitchECMOpen_D = 1;/* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWR_b_SingleSwitchECMOpen_SD =
    1;                                 /* Referenced by: '<S101>/Calib' */

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static volatile CONST(boolean, HSWR_VAR_INIT) KeHSWR_b_SysVolt_SD = 0;/* Referenced by: '<S371>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(TeHSWR_e_ECMHoodStatus, HSWR_VAR_INIT)
    KeHSWR_e_ECMHoodAjar_Init = CeHSWR_e_Ajar_ECMHdAjar;/* Referenced by: '<S399>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(TeHSWR_e_HoodStatus, HSWR_VAR_INIT)
    KeHSWR_e_RedntHdStat_Init = CeHSWR_e_HoodClosed;/* Referenced by: '<S400>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(TeHSWR_e_Dbg_Status, HSWR_VAR_INIT)
    KeHSWR_e_SingleSwitchECMAsleepOvrdVal = CeHSWR_e_Dbg_Timeout;/* Referenced by: '<S35>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(uint16, HSWR_VAR_INIT) KeHSWR_i_CBCHdStOvrdVal = 0U;/* Referenced by: '<S53>/Calib' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(sint16, HSWR_VAR_INIT) KeHSWR_i_CBC_BntAjrRwVlSts_Init = 1;/* Referenced by: '<S401>/Calib' */

#endif

static volatile CONST(sint16, HSWR_VAR_INIT) KeHSWR_i_CBC_BntAjrRwVlSts_NF_Dial =
    8;                                 /* Referenced by: '<S384>/Calib' */

#if Rte_SysCon_Variant_HSWR_4

static volatile CONST(float32, HSWR_VAR_INIT) KeHSWR_t_DbncTimeBntAjrVISts =
    0.1F;                              /* Referenced by: '<S96>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_HSWR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HSWR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWC_b_HoodOpen;/* '<S18>/Switch5' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static VAR(uint16, HSWR_VAR_INIT) VeHSWD_Cnt_CBC_FaultHigh_FailCnt;/* '<S225>/Switch1' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static VAR(uint16, HSWR_VAR_INIT) VeHSWD_Cnt_CBC_FaultHigh_SmpCnt;/* '<S226>/Switch1' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static VAR(uint16, HSWR_VAR_INIT) VeHSWD_Cnt_CBC_FaultLow_FailCnt;/* '<S186>/Switch1' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static VAR(uint16, HSWR_VAR_INIT) VeHSWD_Cnt_CBC_FaultLow_SmpCnt;/* '<S187>/Switch1' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static VAR(uint16, HSWR_VAR_INIT) VeHSWD_Cnt_CBC_Range_FailCnt;/* '<S147>/Switch1' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static VAR(uint16, HSWR_VAR_INIT) VeHSWD_Cnt_CBC_Range_SmpCnt;/* '<S148>/Switch1' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(uint16, HSWR_VAR_INIT) VeHSWD_Cnt_SecBnt_CircuitHigh_FailCnt;/* '<S317>/Switch1' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(uint16, HSWR_VAR_INIT) VeHSWD_Cnt_SecBnt_CircuitHigh_SmpCnt;/* '<S318>/Switch1' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(uint16, HSWR_VAR_INIT) VeHSWD_Cnt_SecBnt_CircuitLow_FailCnt;/* '<S290>/Switch1' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(uint16, HSWR_VAR_INIT) VeHSWD_Cnt_SecBnt_CircuitLow_SmpCnt;/* '<S291>/Switch1' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(uint16, HSWR_VAR_INIT) VeHSWD_Cnt_SecBnt_Correlation_FailCnt;/* '<S354>/Switch1' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(uint16, HSWR_VAR_INIT) VeHSWD_Cnt_SecBnt_Correlation_SmpCnt;/* '<S355>/Switch1' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(uint16, HSWR_VAR_INIT) VeHSWD_Cnt_SecBnt_Performance_FailCnt;/* '<S263>/Switch1' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(uint16, HSWR_VAR_INIT) VeHSWD_Cnt_SecBnt_Performance_SmpCnt;/* '<S264>/Switch1' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWD_b_PrimaryHighFault;/* '<S216>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWD_b_PrimaryHoodFault;/* synthesized block */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWD_b_PrimaryLowFault;/* '<S177>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWD_b_PrimaryRangeFault;/* '<S138>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWD_b_SecondaryCorrFault;/* '<S345>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWD_b_SecondaryHighFault;/* '<S308>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWD_b_SecondaryHoodFault;/* synthesized block */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWD_b_SecondaryLowFault;/* '<S281>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWD_b_SecondaryPerfFault;/* '<S254>/Relational Operator' */

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static VAR(float32, HSWR_VAR_INIT) VeHSWR_U_SysVolt;/* '<S104>/Switch2' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_CBC_FaultHigh_EnableCheck;/* '<S193>/LogicalOperator' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_CBC_FaultHigh_FaultCheck;
                               /* '<S194>/SigConvForSigProp_Variant_Source_0' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_CBC_FaultLow_EnableCheck;/* '<S154>/Logicalperator' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_CBC_FaultLow_FaultCheck;
                               /* '<S155>/SigConvForSigProp_Variant_Source_0' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_CBC_HdStCls;/* '<S21>/LogicalOperator2' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_CBC_Range_EnableCheck;/* '<S118>/LogicalOperator' */

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_CBC_Range_FaultCheck;
                               /* '<S119>/SigConvForSigProp_Variant_Source_0' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_Dbg_ECMHoodAjar_Switch;/* '<S18>/RelationalOperator3' */

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_DsblDiagFailSafe;/* '<S104>/Switch5' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_ECMHoodOpen_delay;/* '<S18>/Unit Delay2' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_ECMSleep_CBC_HdStat;/* '<S18>/LogicalOperator' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_EnableDataStore;/* '<S18>/Logical' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_HdStat_K8;/* '<S21>/LogicalOperator1' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_HdStat_RU;/* '<S21>/LogicalOperator' */

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_IsDiagGlobalConditionsValid;/* '<S104>/Switch3' */

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_PostCodeClrDiagDsbl;/* '<S104>/Switch1' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_SecBnt_CircuitHigh_EnableCheck;/* '<S297>/Logical1' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_SecBnt_CircuitHigh_FaultCheck;/* '<S298>/Logical2' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_SecBnt_CircuitLow_EnableCheck;/* '<S270>/Logical1' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_SecBnt_CircuitLow_FaultCheck;/* '<S271>/Logical2' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_SecBnt_Correlation_EnableCheck;/* '<S324>/Logical1' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_SecBnt_Correlation_FaultCheck;/* '<S325>/Logical1' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_SecBnt_Performance_EnableCheck;/* '<S242>/Logical1' */

#endif

#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_SecBnt_Performance_FaultCheck;/* '<S243>/Logical2' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static VAR(boolean, HSWR_VAR_INIT) VeHSWR_b_Sec_HdStCls;/* '<S18>/RelationalOperator6' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static VAR(TeHSWR_e_HoodStatusVolt, HSWR_VAR_INIT) VeHSWR_e_BntAjrRwVlStsVoltRng;/* '<S66>/Switch1' */

#endif

#if Rte_SysCon_Variant_HSWR_4

static VAR(TeHSWR_e_SecHoodStatus, HSWR_VAR_INIT)
    VeHSWR_e_SecBntAjrRwVlStsVoltRng;  /* '<S86>/Switch1' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HSWR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_HSWR
#include "MemMap.h"

CONST(ConstB_HSWR_ac_T, HSWR_VAR_INIT) HSWR_ac_ConstB =
{

#if Rte_SysCon_Variant_HSWR_4

    CeHSWR_e_VoltShortToGround,        /* '<S394>/Constant' */

#define CONSTB_HSWR_AC_T_VARIANT_EXISTS
#endif

    CeHSWR_e_HCPHoodAjar,              /* '<S382>/Constant' */

#if Rte_SysCon_Variant_HSWR_4

    CeHSWR_e_Dbg_Init,                 /* '<S396>/Constant' */

#endif

#if Rte_SysCon_Variant_HSWR_4

    CeHSWR_e_Dbg_Init,                 /* '<S397>/Constant' */

#endif

    CeDFIB_e_Init,                     /* '<S375>/Constant' */
    CeDFIB_e_Init,                     /* '<S376>/Constant' */
    CeDFIB_e_Init,                     /* '<S377>/Constant' */
    CeDFIB_e_Init,                     /* '<S378>/Constant' */
    CeDFIB_e_Init,                     /* '<S379>/Constant' */
    CeDFIB_e_Init,                     /* '<S380>/Constant' */
    CeDFIB_e_Init                      /* '<S381>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_HSWR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HSWR
#include "MemMap.h"

VAR(B_HSWR_ac_T, HSWR_VAR_INIT) HSWR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HSWR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HSWR
#include "MemMap.h"

VAR(DW_HSWR_ac_T, HSWR_VAR_INIT) HSWR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HSWR
#include "MemMap.h"
#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static FUNC(void, HSWR_CODE_LOCAL) HSWR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, HSWR_VAR_INIT)
    rty_FaultSts);

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static FUNC(void, HSWR_CODE_LOCAL) HSWR_ac_Init_e(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, HSWR_VAR_INIT)
    rty_FaultSts);

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static FUNC(void, HSWR_CODE_LOCAL) HSWR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, HSWR_VAR_INIT)
    rty_FaultSts);

#endif

/*
 * Output and update for enable system:
 *    '<S138>/Fail'
 *    '<S177>/Fail'
 *    '<S216>/Fail'
 *    '<S254>/Fail'
 *    '<S281>/Fail'
 *    '<S308>/Fail'
 *    '<S345>/Fail'
 */
#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static FUNC(void, HSWR_CODE_LOCAL) HSWR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, HSWR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S138>/Fail' incorporates:
     *  EnablePort: '<S143>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S143>/FaultSts' incorporates:
         *  Constant: '<S149>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S138>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S138>/Init'
 *    '<S177>/Init'
 *    '<S216>/Init'
 *    '<S254>/Init'
 *    '<S281>/Init'
 *    '<S308>/Init'
 *    '<S345>/Init'
 */
#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static FUNC(void, HSWR_CODE_LOCAL) HSWR_ac_Init_e(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, HSWR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S138>/Init' incorporates:
     *  EnablePort: '<S144>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S144>/FaultSts' incorporates:
         *  Constant: '<S150>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S138>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S138>/Pass'
 *    '<S177>/Pass'
 *    '<S216>/Pass'
 *    '<S254>/Pass'
 *    '<S281>/Pass'
 *    '<S308>/Pass'
 *    '<S345>/Pass'
 */
#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

static FUNC(void, HSWR_CODE_LOCAL) HSWR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, HSWR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S138>/Pass' incorporates:
     *  EnablePort: '<S145>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S145>/FaultSts' incorporates:
         *  Constant: '<S151>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S138>/Pass' */
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_HSWR_4

FUNC(void, HSWR_CODE) HSWR_MedTEB(void) /* Explicit Task: MedTEB */
{

#if Rte_SysCon_Variant_HSWR_4

    sint16 rtb_TmpSignalConversionAtVeHSWR_e_CBC_Bn;

#endif

#if Rte_SysCon_Variant_HSWR_4

    float32 rtb_TmpSignalConversionAtVeHSWR_U_CBC_Bn;

#endif

#if Rte_SysCon_Variant_HSWR_4

    uint16 rtb_Switch1_nc;

#endif

#if Rte_SysCon_Variant_HSWR_4

    float32 rtb_TmpSignalConversionAtVeHSWB_U_HoodAj;

#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean rtb_VariantMerge_For_Variant_Source_Vari;

#endif

#if Rte_SysCon_Variant_HSWR_4

    TeHSWR_e_Dbg_Status rtb_Switch1_i;

#endif

#if Rte_SysCon_Variant_HSWR_4

    TeHSWR_e_HCPHoodAjarSts tmp;

#endif

#if Rte_SysCon_Variant_HSWR_4

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* Outputs for Function Call SubSystem: '<Root>/HSWR_MedTEB' */
    /* SignalConversion generated from: '<S5>/VeHSWR_e_CBC_BntAjrRwVlSts_read' incorporates:
     *  Merge: '<Root>/Merge_9'
     */
    rtb_TmpSignalConversionAtVeHSWR_e_CBC_Bn =
        Rte_IrvRead_HSWR_MedTEB_VeHSWR_e_CBC_BntAjrRwVlSts_write_IRV();

    /* SignalConversion generated from: '<S5>/VeHSWR_U_CBC_BntAjrRwVlStsVolt_read' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    rtb_TmpSignalConversionAtVeHSWR_U_CBC_Bn =
        Rte_IrvRead_HSWR_MedTEB_VeHSWR_U_BntAjrRwVlStsVolt_write_IRV();

    /* SignalConversion generated from: '<S5>/VeHSWB_U_HoodAjarSns' incorporates:
     *  Inport: '<Root>/VeHSWB_U_HoodAjarSns'
     */
    (void)Rte_Read_VeHSWB_U_HoodAjarSns_Value
        (&rtb_TmpSignalConversionAtVeHSWB_U_HoodAj);

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/HdSwStat_Arb'
     */
    /* UnitDelay: '<S18>/Unit Delay2' */
    VeHSWR_b_ECMHoodOpen_delay = HSWR_ac_DW.UnitDelay2_DSTATE_o;

    /* Switch: '<S18>/Switch1' incorporates:
     *  Constant: '<S33>/Calib'
     */
    if (KeHSWR_b_SingleSwitchECMAsleepOvrdEnbl)
    {
        /* Switch: '<S18>/Switch1' incorporates:
         *  Constant: '<S35>/Calib'
         */
        rtb_Switch1_i = KeHSWR_e_SingleSwitchECMAsleepOvrdVal;
    }
    else
    {
        /* Switch: '<S18>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_8'
         *  SignalConversion generated from: '<S5>/VeHSWR_e_Dbg_ECMHoodAjar_read'
         */
        rtb_Switch1_i =
            Rte_IrvRead_HSWR_MedTEB_VeHSWR_e_Dbg_ECMHoodAjar_write_IRV();
    }

    /* End of Switch: '<S18>/Switch1' */

    /* Logic: '<S18>/Logical' incorporates:
     *  Constant: '<S26>/Constant'
     *  Constant: '<S32>/Calib'
     *  Logic: '<S18>/Logical1'
     *  Logic: '<S18>/Logical2'
     *  RelationalOperator: '<S18>/RelationalOperator4'
     *  UnitDelay: '<S18>/UnitDelay'
     *  UnitDelay: '<S18>/UnitDelay1'
     */
    VeHSWR_b_EnableDataStore = ((((KeHSWR_b_ECMHdStatSaved_Fsft) &&
        (HSWR_ac_DW.UnitDelay1_DSTATE_nm)) || (HSWR_ac_DW.UnitDelay_DSTATE_ft)) &&
        (((uint32)rtb_Switch1_i) == CeHSWR_e_Dbg_Timeout));

    /* Outputs for Enabled SubSystem: '<S18>/EnabledSubsystem' incorporates:
     *  EnablePort: '<S22>/Enable'
     */
    if (VeHSWR_b_EnableDataStore)
    {
        /* DataStoreWrite: '<S22>/DataStoreWrite' */
        HSWR_ac_DW.BeHSWR_b_ECMHdStatSaved = VeHSWR_b_ECMHoodOpen_delay;
    }

    /* End of Outputs for SubSystem: '<S18>/EnabledSubsystem' */

    /* Switch: '<S21>/Switch1' incorporates:
     *  Constant: '<S47>/Calib'
     *  Constant: '<S52>/Calib'
     *  Switch: '<S21>/Switch'
     */
    if (KeHSWR_b_CBCHdStOvrdEnbl)
    {
        /* Switch: '<S21>/Switch1' incorporates:
         *  Constant: '<S53>/Calib'
         */
        rtb_Switch1_nc = KeHSWR_i_CBCHdStOvrdVal;
    }
    else if (KeHSWR_b_New_Poke_Sel)
    {
        /* Switch: '<S21>/Switch' incorporates:
         *  Switch: '<S21>/Switch1'
         */
        rtb_Switch1_nc = (uint16)rtb_TmpSignalConversionAtVeHSWR_e_CBC_Bn;
    }
    else
    {
        /* Switch: '<S21>/Switch1' incorporates:
         *  Merge: '<Root>/Merge_6'
         *  SignalConversion generated from: '<S5>/VeHSWR_e_RedntHdSwStat_read'
         *  Switch: '<S21>/Switch'
         */
        rtb_Switch1_nc = (uint16)
            Rte_IrvRead_HSWR_MedTEB_VeHSWR_e_RedntHdSwStat_write_IRV();
    }

    /* End of Switch: '<S21>/Switch1' */

    /* Logic: '<S21>/LogicalOperator' incorporates:
     *  RelationalOperator: '<S21>/RelationalOperator'
     *  RelationalOperator: '<S21>/RelationalOperator1'
     */
    VeHSWR_b_HdStat_RU = ((((sint32)rtb_Switch1_nc) == 8) || (((sint32)
                            rtb_Switch1_nc) == 9));

    /* Logic: '<S21>/LogicalOperator1' incorporates:
     *  RelationalOperator: '<S21>/RelationalOperator2'
     *  RelationalOperator: '<S21>/RelationalOperator3'
     *  RelationalOperator: '<S21>/RelationalOperator4'
     *  RelationalOperator: '<S21>/RelationalOperator5'
     *  RelationalOperator: '<S21>/RelationalOperator6'
     */
    VeHSWR_b_HdStat_K8 = (((((((sint32)rtb_Switch1_nc) == 6) || (((sint32)
        rtb_Switch1_nc) == 7)) || (((sint32)rtb_Switch1_nc) == 8)) || (((sint32)
        rtb_Switch1_nc) == 9)) || (((sint32)rtb_Switch1_nc) == 10));

    /* Switch: '<S66>/Switch1' incorporates:
     *  Constant: '<S68>/Calib'
     *  Constant: '<S69>/Calib'
     *  Constant: '<S70>/Calib'
     *  Constant: '<S71>/Calib'
     *  Constant: '<S72>/Calib'
     *  Constant: '<S73>/Calib'
     *  Constant: '<S74>/Calib'
     *  Constant: '<S75>/Calib'
     *  Constant: '<S76>/Calib'
     *  Constant: '<S77>/Calib'
     *  Logic: '<S54>/Logical'
     *  Logic: '<S54>/Logical1'
     *  Logic: '<S54>/Logical2'
     *  Logic: '<S54>/Logical3'
     *  Logic: '<S54>/Logical4'
     *  Merge: '<Root>/Merge_4'
     *  RelationalOperator: '<S54>/Comparison'
     *  RelationalOperator: '<S54>/Comparison1'
     *  RelationalOperator: '<S54>/Comparison2'
     *  RelationalOperator: '<S54>/Comparison3'
     *  RelationalOperator: '<S54>/Comparison4'
     *  RelationalOperator: '<S54>/Comparison5'
     *  RelationalOperator: '<S54>/Comparison6'
     *  RelationalOperator: '<S54>/Comparison7'
     *  RelationalOperator: '<S54>/Comparison8'
     *  RelationalOperator: '<S54>/Comparison9'
     *  SignalConversion generated from: '<S5>/VeHSWR_b_CBC_BntAjrRwVlStsVoltFA_read'
     *  Switch: '<S62>/Switch1'
     *  Switch: '<S63>/Switch1'
     *  Switch: '<S64>/Switch1'
     *  Switch: '<S65>/Switch1'
     *  Switch: '<S67>/Switch1'
     */
    if (Rte_IrvRead_HSWR_MedTEB_VeHSWR_b_CBC_BntAjrRwVlStsVoltFA_write_IRV())
    {
        /* Switch: '<S66>/Switch1' incorporates:
         *  Constant: '<S60>/Constant'
         */
        VeHSWR_e_BntAjrRwVlStsVoltRng = CeHSWR_e_VoltHoodAjar;
    }
    else if ((KeHSWR_U_Performance_Max >
              rtb_TmpSignalConversionAtVeHSWR_U_CBC_Bn) &&
             (rtb_TmpSignalConversionAtVeHSWR_U_CBC_Bn >=
              KeHSWR_U_Performance_Min))
    {
        /* Switch: '<S67>/Switch1' incorporates:
         *  Constant: '<S61>/Constant'
         *  Switch: '<S66>/Switch1'
         */
        VeHSWR_e_BntAjrRwVlStsVoltRng = CeHSWR_e_VoltHoodDefault;
    }
    else if ((KeHSWR_U_OpenCircuit_Max >
              rtb_TmpSignalConversionAtVeHSWR_U_CBC_Bn) &&
             (rtb_TmpSignalConversionAtVeHSWR_U_CBC_Bn >=
              KeHSWR_U_OpenCircuit_Min))
    {
        /* Switch: '<S64>/Switch1' incorporates:
         *  Constant: '<S55>/Constant'
         *  Switch: '<S66>/Switch1'
         *  Switch: '<S67>/Switch1'
         */
        VeHSWR_e_BntAjrRwVlStsVoltRng = CeHSWR_e_VoltOpenCircuit;
    }
    else if ((KeHSWR_U_HoodClosed_Max > rtb_TmpSignalConversionAtVeHSWR_U_CBC_Bn)
             && (rtb_TmpSignalConversionAtVeHSWR_U_CBC_Bn >=
                 KeHSWR_U_HoodClosed_Min))
    {
        /* Switch: '<S62>/Switch1' incorporates:
         *  Constant: '<S56>/Constant'
         *  Switch: '<S64>/Switch1'
         *  Switch: '<S66>/Switch1'
         *  Switch: '<S67>/Switch1'
         */
        VeHSWR_e_BntAjrRwVlStsVoltRng = CeHSWR_e_VoltHoodClosed;
    }
    else if ((KeHSWR_U_HoodOpen_Max > rtb_TmpSignalConversionAtVeHSWR_U_CBC_Bn) &&
             (rtb_TmpSignalConversionAtVeHSWR_U_CBC_Bn >= KeHSWR_U_HoodOpen_Min))
    {
        /* Switch: '<S63>/Switch1' incorporates:
         *  Constant: '<S57>/Constant'
         *  Switch: '<S62>/Switch1'
         *  Switch: '<S64>/Switch1'
         *  Switch: '<S66>/Switch1'
         *  Switch: '<S67>/Switch1'
         */
        VeHSWR_e_BntAjrRwVlStsVoltRng = CeHSWR_e_VoltHoodAjar;
    }
    else if ((KeHSWR_U_ShortToGround_Max >
              rtb_TmpSignalConversionAtVeHSWR_U_CBC_Bn) &&
             (rtb_TmpSignalConversionAtVeHSWR_U_CBC_Bn >=
              KeHSWR_U_ShortToGround_Min))
    {
        /* Switch: '<S65>/Switch1' incorporates:
         *  Constant: '<S58>/Constant'
         *  Switch: '<S62>/Switch1'
         *  Switch: '<S63>/Switch1'
         *  Switch: '<S64>/Switch1'
         *  Switch: '<S66>/Switch1'
         *  Switch: '<S67>/Switch1'
         */
        VeHSWR_e_BntAjrRwVlStsVoltRng = CeHSWR_e_VoltShortToGround;
    }
    else
    {
        /* Switch: '<S66>/Switch1' incorporates:
         *  Constant: '<S59>/Constant'
         *  Switch: '<S62>/Switch1'
         *  Switch: '<S63>/Switch1'
         *  Switch: '<S64>/Switch1'
         *  Switch: '<S65>/Switch1'
         *  Switch: '<S67>/Switch1'
         */
        VeHSWR_e_BntAjrRwVlStsVoltRng = CeHSWR_e_VoltHoodAjar;
    }

    /* End of Switch: '<S66>/Switch1' */

    /* Logic: '<S21>/LogicalOperator2' incorporates:
     *  Constant: '<S46>/Constant'
     *  Constant: '<S48>/Calib'
     *  Constant: '<S49>/Calib'
     *  Constant: '<S50>/Calib'
     *  Constant: '<S51>/Calib'
     *  Logic: '<S21>/LogicalOperator3'
     *  Logic: '<S21>/LogicalOperator4'
     *  Logic: '<S21>/LogicalOperator5'
     *  Logic: '<S21>/LogicalOperator6'
     *  RelationalOperator: '<S21>/RelationalOperator7'
     *  RelationalOperator: '<S21>/RelationalOperator8'
     *  Switch: '<S66>/Switch1'
     */
    VeHSWR_b_CBC_HdStCls = (((((KeHSWR_b_Enbl_RU_Pgrm) && (VeHSWR_b_HdStat_RU)) ||
        ((KeHSWR_b_Enbl_K8_Pgrm) && (VeHSWR_b_HdStat_K8))) ||
        ((KeHSWR_b_Enbl_Old_Impl) && (((sint32)rtb_Switch1_nc) == 0))) ||
                            ((KeHSWR_b_Enbl_Volt_Impl) && (((uint32)
        VeHSWR_e_BntAjrRwVlStsVoltRng) == CeHSWR_e_VoltHoodClosed)));

    /* Switch: '<S86>/Switch1' incorporates:
     *  Constant: '<S88>/Calib'
     *  Constant: '<S89>/Calib'
     *  Constant: '<S90>/Calib'
     *  Constant: '<S91>/Calib'
     *  Logic: '<S37>/Logical1'
     *  Logic: '<S37>/Logical2'
     *  RelationalOperator: '<S37>/Comparison2'
     *  RelationalOperator: '<S37>/Comparison3'
     *  RelationalOperator: '<S37>/Comparison4'
     *  RelationalOperator: '<S37>/Comparison5'
     *  Switch: '<S87>/Switch1'
     */
    if ((KeHSWR_U_SecBntOpenedMax > rtb_TmpSignalConversionAtVeHSWB_U_HoodAj) &&
        (rtb_TmpSignalConversionAtVeHSWB_U_HoodAj >= KeHSWR_U_SecBntOpenedMin))
    {
        /* Switch: '<S86>/Switch1' incorporates:
         *  Constant: '<S85>/Constant'
         */
        VeHSWR_e_SecBntAjrRwVlStsVoltRng = CeHSWR_e_SecHoodAjar;
    }
    else if ((KeHSWR_U_SecBntClosedMax >
              rtb_TmpSignalConversionAtVeHSWB_U_HoodAj) &&
             (rtb_TmpSignalConversionAtVeHSWB_U_HoodAj >=
              KeHSWR_U_SecBntClosedMin))
    {
        /* Switch: '<S87>/Switch1' incorporates:
         *  Constant: '<S83>/Constant'
         *  Switch: '<S86>/Switch1'
         */
        VeHSWR_e_SecBntAjrRwVlStsVoltRng = CeHSWR_e_SecHoodClosed;
    }
    else
    {
        /* Switch: '<S86>/Switch1' incorporates:
         *  Constant: '<S84>/Constant'
         *  Switch: '<S87>/Switch1'
         */
        VeHSWR_e_SecBntAjrRwVlStsVoltRng = CeHSWR_e_SecHoodOutRange;
    }

    /* End of Switch: '<S86>/Switch1' */

    /* RelationalOperator: '<S18>/RelationalOperator6' incorporates:
     *  Constant: '<S28>/Constant'
     *  Switch: '<S86>/Switch1'
     */
    VeHSWR_b_Sec_HdStCls = (((uint32)VeHSWR_e_SecBntAjrRwVlStsVoltRng) ==
                            CeHSWR_e_SecHoodClosed);

    /* SignalConversion generated from: '<S18>/Variant Source' incorporates:
     *  Switch: '<S18>/Switch2'
     */
#if Rte_SysCon_Variant_HSWR_3

    /* VariantMerge generated from: '<S18>/Variant Source' incorporates:
     *  SignalConversion: '<S18>/SignalConversion'
     */
    rtb_VariantMerge_For_Variant_Source_Vari = VeHSWR_b_Sec_HdStCls;

#else

    /* Switch: '<S18>/Switch2' incorporates:
     *  Constant: '<S33>/Calib'
     */
    if (KeHSWR_b_SingleSwitchECMAsleepOvrdEnbl)
    {
        /* VariantMerge generated from: '<S18>/Variant Source' incorporates:
         *  Constant: '<S34>/Calib'
         */
        rtb_VariantMerge_For_Variant_Source_Vari =
            KeHSWR_b_SingleSwitchECMClosedVal;
    }
    else
    {
        /* VariantMerge generated from: '<S18>/Variant Source' incorporates:
         *  DataStoreRead: '<S18>/DataStoreRead'
         *  RelationalOperator: '<S18>/RelationalOperator1'
         */
        rtb_VariantMerge_For_Variant_Source_Vari =
            !HSWR_ac_DW.BeHSWR_b_ECMHdStatSaved;
    }

#endif

    /* End of SignalConversion generated from: '<S18>/Variant Source' */

    /* Logic: '<S18>/LogicalOperator' incorporates:
     *  SignalConversion: '<S21>/SignalConversion'
     */
    VeHSWR_b_ECMSleep_CBC_HdStat = ((!VeHSWR_b_CBC_HdStCls) ||
        (!rtb_VariantMerge_For_Variant_Source_Vari));

    /* RelationalOperator: '<S18>/RelationalOperator2' incorporates:
     *  Constant: '<S25>/Constant'
     *  UnitDelay: '<S18>/UnitDelay'
     */
    HSWR_ac_DW.UnitDelay_DSTATE_ft = (((uint32)rtb_Switch1_i) ==
        CeHSWR_e_Dbg_Poke);

    /* RelationalOperator: '<S18>/RelationalOperator3' incorporates:
     *  Constant: '<S27>/Constant'
     */
    VeHSWR_b_Dbg_ECMHoodAjar_Switch = (((uint32)rtb_Switch1_i) !=
        CeHSWR_e_Dbg_Timeout);

    /* RelationalOperator: '<S18>/RelationalOperator5' incorporates:
     *  Constant: '<S24>/Constant'
     *  UnitDelay: '<S18>/UnitDelay1'
     */
    HSWR_ac_DW.UnitDelay1_DSTATE_nm = (((uint32)rtb_Switch1_i) ==
        CeHSWR_e_Dbg_Failsoft);

    /* Switch: '<S18>/Switch' incorporates:
     *  Constant: '<S23>/Constant'
     *  Constant: '<S30>/Calib'
     *  Constant: '<S31>/Calib'
     *  Logic: '<S18>/LogicalOperator1'
     *  Merge: '<Root>/Merge_5'
     *  Merge: '<Root>/Merge_7'
     *  RelationalOperator: '<S18>/RelationalOperator'
     *  SignalConversion generated from: '<S5>/VeHSWR_b_ECMHoodAjarFA_read'
     *  SignalConversion generated from: '<S5>/VeHSWR_e_ECMHoodAjar_read'
     *  UnitDelay: '<S18>/Unit Delay2'
     */
    if (KeHSWR_b_ECMHdAjarOvrdEnbl)
    {
        HSWR_ac_DW.UnitDelay2_DSTATE_o = KeHSWR_b_ECMHdAjarOvrdVal;
    }
    else
    {
        HSWR_ac_DW.UnitDelay2_DSTATE_o = ((((uint32)
            Rte_IrvRead_HSWR_MedTEB_VeHSWR_e_ECMHoodAjar_write_IRV()) !=
            CeHSWR_e_Closed_ECMHdAjar) ||
            (Rte_IrvRead_HSWR_MedTEB_VeHSWR_b_ECMHoodAjarFA_write_IRV()));
    }

    /* End of Switch: '<S18>/Switch' */

    /* Switch: '<S18>/Switch5' */
    if (VeHSWR_b_Dbg_ECMHoodAjar_Switch)
    {
        /* Switch: '<S18>/Switch5' incorporates:
         *  UnitDelay: '<S18>/Unit Delay2'
         */
        VeHSWC_b_HoodOpen = HSWR_ac_DW.UnitDelay2_DSTATE_o;
    }
    else
    {
        /* Switch: '<S18>/Switch5' */
        VeHSWC_b_HoodOpen = VeHSWR_b_ECMSleep_CBC_HdStat;
    }

    /* End of Switch: '<S18>/Switch5' */

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Input_Debounced'
     */
    /* If: '<S19>/If' incorporates:
     *  Constant: '<S93>/Calib'
     *  Inport: '<S99>/In1'
     *  Logic: '<S98>/AND'
     */
    if (KeHSWR_b_EnableDbncBntAjrVISts)
    {
        /* Outputs for IfAction SubSystem: '<S19>/Debounce' incorporates:
         *  ActionPort: '<S92>/dbnc'
         */
        /* Outputs for Atomic SubSystem: '<S92>/IfActionSubsystem' */
        /* Outputs for Atomic SubSystem: '<S95>/CounterResetEnabled' */
        /* Switch: '<S97>/Switch' incorporates:
         *  Constant: '<S97>/Constant Value2'
         *  Logic: '<S95>/Logical2'
         *  Logic: '<S95>/Logical4'
         *  RelationalOperator: '<S95>/Comparison4'
         *  Switch: '<S97>/Switch2'
         *  UnitDelay: '<S95>/Unit Delay'
         *  UnitDelay: '<S95>/Unit Delay2'
         *  UnitDelay: '<S97>/Unit Delay'
         */
        if (VeHSWC_b_HoodOpen != HSWR_ac_DW.UnitDelay_DSTATE_ed)
        {
            HSWR_ac_DW.UnitDelay_DSTATE_b = 0U;
        }
        else
        {
            if (!HSWR_ac_DW.UnitDelay2_DSTATE)
            {
                /* UnitDelay: '<S97>/Unit Delay' incorporates:
                 *  Constant: '<S97>/Constant Value1'
                 *  Sum: '<S97>/Subtraction'
                 *  Switch: '<S97>/Switch2'
                 */
                HSWR_ac_DW.UnitDelay_DSTATE_b = (uint16)(((uint32)
                    HSWR_ac_DW.UnitDelay_DSTATE_b) + 1U);
            }
        }

        /* End of Switch: '<S97>/Switch' */
        /* End of Outputs for SubSystem: '<S95>/CounterResetEnabled' */

        /* RelationalOperator: '<S95>/Comparison1' incorporates:
         *  Constant: '<S92>/Constant'
         *  Constant: '<S95>/Constant Value'
         *  Constant: '<S96>/Calib'
         *  MinMax: '<S92>/MinMax'
         *  Product: '<S95>/Product'
         *  UnitDelay: '<S97>/Unit Delay'
         */
        HSWR_ac_DW.UnitDelay2_DSTATE = (((float32)HSWR_ac_DW.UnitDelay_DSTATE_b)
            >= (fminf(KeHSWR_t_DbncTimeBntAjrVISts, 1.0F) * 100.0F));

        /* Outputs for Atomic SubSystem: '<S95>/EdgeRising2' */
        /* Logic: '<S98>/OR1' incorporates:
         *  UnitDelay: '<S98>/Unit Delay'
         */
        rtb_VariantMerge_For_Variant_Source_Vari =
            !HSWR_ac_DW.UnitDelay_DSTATE_pq;

        /* Update for UnitDelay: '<S98>/Unit Delay' */
        HSWR_ac_DW.UnitDelay_DSTATE_pq = HSWR_ac_DW.UnitDelay2_DSTATE;

        /* Outputs for Enabled SubSystem: '<S95>/Subsystem2' incorporates:
         *  EnablePort: '<S99>/Enable'
         */
        if ((HSWR_ac_DW.UnitDelay2_DSTATE) &&
                rtb_VariantMerge_For_Variant_Source_Vari)
        {
            HSWR_ac_B.In1 = VeHSWC_b_HoodOpen;
        }

        /* End of Outputs for SubSystem: '<S95>/Subsystem2' */
        /* End of Outputs for SubSystem: '<S95>/EdgeRising2' */

        /* Update for UnitDelay: '<S95>/Unit Delay' incorporates:
         *  Inport: '<S99>/In1'
         *  Logic: '<S98>/AND'
         */
        HSWR_ac_DW.UnitDelay_DSTATE_ed = VeHSWC_b_HoodOpen;

        /* End of Outputs for SubSystem: '<S92>/IfActionSubsystem' */

        /* SignalConversion generated from: '<S5>/Hood_Open_Out' incorporates:
         *  Outport: '<Root>/VeHSWR_b_HoodOpen'
         *  SignalConversion generated from: '<S92>/Hood_Open_Dbncd'
         */
        (void)Rte_Write_VeHSWR_b_HoodOpen_Value(HSWR_ac_B.In1);

        /* End of Outputs for SubSystem: '<S19>/Debounce' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S19>/No_Debounce' incorporates:
         *  ActionPort: '<S94>/ActionPort'
         */
        /* SignalConversion generated from: '<S5>/Hood_Open_Out' incorporates:
         *  Inport: '<S94>/Hood_Open'
         *  Outport: '<Root>/VeHSWR_b_HoodOpen'
         */
        (void)Rte_Write_VeHSWR_b_HoodOpen_Value(VeHSWC_b_HoodOpen);

        /* End of Outputs for SubSystem: '<S19>/No_Debounce' */
    }

    /* End of If: '<S19>/If' */

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Trigger'
     */
    /* Outport: '<Root>/VeHSWR_e_CBC_BntAjrRwVlSts' incorporates:
     *  Gain: '<S102>/Gain'
     *  SignalConversion generated from: '<S5>/BonnetAjar_RawValStat_Out'
     */
    (void)Rte_Write_VeHSWR_e_CBC_BntAjrRwVlSts_Value
        (rtb_TmpSignalConversionAtVeHSWR_e_CBC_Bn);

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/HdSwStat_Arb'
     */
    /* Switch: '<S81>/Switch1' incorporates:
     *  Constant: '<S78>/Constant'
     *  Constant: '<S79>/Constant'
     *  Logic: '<S29>/Logical3'
     *  Merge: '<Root>/PrimaryHoodFault_IRV_Merge'
     *  Merge: '<Root>/SecondaryHoodFault_IRV_Merge'
     *  SignalConversion generated from: '<S5>/PrimaryHoodFault_Read'
     *  SignalConversion generated from: '<S5>/SecondaryHoodFault_Read'
     *  Switch: '<S82>/Switch1'
     */
    if ((Rte_IrvRead_HSWR_MedTEB_PrimaryHoodFault_write_IRV()) ||
            (Rte_IrvRead_HSWR_MedTEB_SecondaryHoodFault_write_IRV()))
    {
        tmp = CeHSWR_e_HCPHoodFaulted;
    }
    else if (VeHSWR_b_ECMSleep_CBC_HdStat)
    {
        /* Switch: '<S82>/Switch1' incorporates:
         *  Constant: '<S80>/Constant'
         */
        tmp = CeHSWR_e_HCPHoodAjar;
    }
    else
    {
        tmp = CeHSWR_e_HCPHoodClosed;
    }

    /* End of Switch: '<S81>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* Outport: '<Root>/VeHSWR_e_HCPHoodAjarSts' incorporates:
     *  SignalConversion generated from: '<S5>/HCPHoodAjarSts'
     */
    (void)Rte_Write_VeHSWR_e_HCPHoodAjarSts_Value(tmp);

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/HdSwStat_Arb'
     */
    /* Outport: '<Root>/VeHSWR_b_SecHoodSts' incorporates:
     *  SignalConversion: '<S18>/SignalConversion'
     *  SignalConversion generated from: '<S5>/Sec_Hood_Sts_outwrite'
     */
    (void)Rte_Write_VeHSWR_b_SecHoodSts_Value(VeHSWR_b_Sec_HdStCls);

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Trigger'
     */
    /* Switch: '<S20>/Switch' incorporates:
     *  Constant: '<S101>/Calib'
     */
    if (KeHSWR_b_SingleSwitchECMOpen_SD)
    {
        /* Outport: '<Root>/VeHSWR_b_ECMHoodOpen' incorporates:
         *  Constant: '<S100>/Calib'
         *  SignalConversion generated from: '<S5>/VeHSWR_b_ECMHoodOpen'
         */
        (void)Rte_Write_VeHSWR_b_ECMHoodOpen_Value
            (KeHSWR_b_SingleSwitchECMOpen_D);
    }
    else
    {
        /* Outport: '<Root>/VeHSWR_b_ECMHoodOpen' incorporates:
         *  SignalConversion generated from: '<S5>/VeHSWR_b_ECMHoodOpen'
         *  UnitDelay: '<S18>/Unit Delay2'
         */
        (void)Rte_Write_VeHSWR_b_ECMHoodOpen_Value
            (HSWR_ac_DW.UnitDelay2_DSTATE_o);
    }

    /* End of Switch: '<S20>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* Merge: '<Root>/BntAjrRwVlStsVoltRng_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S5>/BntAjrRwVlStsVoltRng_write'
     *  Switch: '<S66>/Switch1'
     * */
    Rte_IrvWrite_HSWR_MedTEB_BntAjrRwVlStsVoltRng_write_IRV
        (VeHSWR_e_BntAjrRwVlStsVoltRng);

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/HdSwStat_Arb'
     */
    /* Merge: '<Root>/CBC_Hood_Sts_IRV_Merge' incorporates:
     *  SignalConversion: '<S21>/SignalConversion'
     *  SignalConversion generated from: '<S5>/CBC_Hood_Sts_write'
     */
    Rte_IrvWrite_HSWR_MedTEB_CBC_Hood_Sts_write_IRV(VeHSWR_b_CBC_HdStCls);

    /* Merge: '<Root>/Sec_Hood_Sts_IRV_Merge' incorporates:
     *  SignalConversion: '<S18>/SignalConversion'
     *  SignalConversion generated from: '<S5>/Sec_Hood_Sts_write'
     */
    Rte_IrvWrite_HSWR_MedTEB_Sec_Hood_Sts_write_IRV(VeHSWR_b_Sec_HdStCls);

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/HSWR_MedTEB' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
#endif

}

#endif

/* Model step function for TID2 */
#if Rte_SysCon_Variant_HSWR_4

FUNC(void, HSWR_CODE) HSWR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

    boolean rtb_NOT4;

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

    boolean rtb_Logical12;

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

    boolean rtb_LessThanorEqual_a;

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

    boolean rtb_RelationalOperator3_h;

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    boolean rtb_AND_k;

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

    boolean rtb_Comparison4_k4;

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    uint32 rtb_RelationalOperator3_e_tmp;

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

    sint32 VeHSWR_b_CBC_Range_EnableCheck_tmp;

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

    uint32 VeHSWR_b_CBC_Range_EnableCheck_tmp_0;

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

    sint32 VeHSWR_b_CBC_Range_EnableCheck_tmp_1;

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

    uint32 VeHSWR_b_CBC_Range_EnableCheck_tmp_2;

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    sint32 VeHSWR_b_CBC_Range_EnableCheck_tmp_3;

#endif

#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

    uint32 VeHSWR_b_CBC_Range_EnableCheck_tmp_4;

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    uint32 VeHSWR_b_CBC_Range_EnableCheck_tmp_5;

#endif

#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    sint32 VeHSWR_b_CBC_Range_EnableCheck_tmp_6;

#endif

#if Rte_SysCon_Variant_HSWR_4

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
#if !Rte_SysCon_Variant_HSWR_7 && Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Merge: '<Root>/Merge_9'
     */
    HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o =
        Rte_IrvRead_HSWR_MedTEH_VeHSWR_e_CBC_BntAjrRwVlSts_write_IRV();

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j =
        Rte_IrvRead_HSWR_MedTEH_VeHSWR_b_CBC_BntAjrRwVlStsFA_write_IRV();

#elif (!(!Rte_SysCon_Variant_HSWR_7) && Rte_SysCon_Variant_HSWR_4) || (!Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4)

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
    HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o = 0;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
#if !Rte_SysCon_Variant_HSWR_7 && Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e =
        Rte_IrvRead_HSWR_MedTEH_VeHSWR_e_Dbg_CBC_BntAjrRwVlSts_write_IRV();

#elif (!(!Rte_SysCon_Variant_HSWR_7) && Rte_SysCon_Variant_HSWR_4) || (!Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4)

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
    HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j = false;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
    HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e = CeHSWR_e_Dbg_Init;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Inport: '<Root>/VeHSWB_U_HoodAjarSns'
     */
    (void)Rte_Read_VeHSWB_U_HoodAjarSns_Value
        (&HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Merge: '<Root>/CBC_Hood_Sts_IRV_Merge'
     */
    HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_l =
        Rte_IrvRead_HSWR_MedTEH_CBC_Hood_Sts_write_IRV();

#elif !Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
    HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
#if Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Merge: '<Root>/Sec_Hood_Sts_IRV_Merge'
     */
    HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_oe =
        Rte_IrvRead_HSWR_MedTEH_Sec_Hood_Sts_write_IRV();

#elif !Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
    HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_l = false;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
    HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_oe = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
#if Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4 && Rte_SysCon_Variant_HSWR_7

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Merge: '<Root>/BntAjrRwVlStsVoltRng_IRV_Merge'
     */
    HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_k =
        Rte_IrvRead_HSWR_MedTEH_BntAjrRwVlStsVoltRng_write_IRV();

#elif (!Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (!Rte_SysCon_Variant_HSWR_7 && Rte_SysCon_Variant_HSWR_4)

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
    HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_k =
        CeHSWR_e_VoltShortToGround;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
#if Rte_SysCon_Variant_HSWR_1 && Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Inport: '<Root>/VeDFIR_b_CANERRSTS_CANFD_3'
     */
    (void)Rte_Read_VeDFIR_b_CANERRSTS_CANFD_3_Value
        (&HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jp);

#elif (!Rte_SysCon_Variant_HSWR_1 && Rte_SysCon_Variant_HSWR_4) || (!Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4)

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
    HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jp = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        (&HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_o5);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_p);

#elif !Rte_SysCon_Variant_HSWR_2 && !Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
    HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_o5 = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Inport: '<Root>/VePMDR_U_BF1_SysVolt'
     */
    (void)Rte_Read_VePMDR_U_BF1_SysVolt_Value
        (&HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f);

#elif !Rte_SysCon_Variant_HSWR_2 && !Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
    HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_p = false;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
    HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BCM_Value
        (&HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EngHoodSwCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EngHoodSwCktHi_Value
        (&HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EngHoodSwCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EngHoodSwCktLo_Value
        (&HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_c);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EngHoodSwCktRngPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EngHoodSwCktRngPerf_Value
        (&HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cr);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdCANCommBus'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdCANCommBus_Value
        (&HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommBCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommBCM_Value
        (&HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_m);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EngHoodSw2CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EngHoodSw2CktHi_Value
        (&HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EngHoodSw2CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EngHoodSw2CktLo_Value
        (&HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_p3);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EngHoodSw2AjDrv'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EngHoodSw2AjDrv_Value
        (&HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_el);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EngHoodSwCorr'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EngHoodSwCorr_Value
        (&HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_m1);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBus'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBus_Value
        (&HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mt);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBusPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBusPerf_Value
        (&HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_em);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
#if (Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4)

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ob);

#elif !Rte_SysCon_Variant_HSWR_2 && !Rte_SysCon_Variant_HSWR_3 && Rte_SysCon_Variant_HSWR_4

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25' */
    HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ob = false;

#endif

    /* Outputs for Function Call SubSystem: '<Root>/HSWR_MedTEH' */
    /* DataStoreWrite: '<S6>/DSW_StatusByte_AAT_SnsrPerf' */
    HSWR_ac_DW.StatusByte_InvData_BCM =
        HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys;

    /* DataStoreWrite: '<S6>/DSW_StatusByte_EngHoodSwCktHi' */
    HSWR_ac_DW.StatusByte_EngHoodSwCktHi =
        HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e;

    /* DataStoreWrite: '<S6>/DSW_StatusByte_EngHoodSwCktLo' */
    HSWR_ac_DW.StatusByte_EngHoodSwCktLo =
        HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_c;

    /* DataStoreWrite: '<S6>/DSW_StatusByte_EngHoodSwCktRngPerf' */
    HSWR_ac_DW.StatusByte_EngHoodSwCktRngPerf =
        HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cr;

    /* DataStoreWrite: '<S6>/DSW_StatusByte_HiSpdCANCommBus' */
    HSWR_ac_DW.StatusByte_HiSpdCANCommBus =
        HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i;

    /* DataStoreWrite: '<S6>/DSW_StatusByte_LostCommBCM' */
    HSWR_ac_DW.StatusByte_LostCommBCM =
        HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_m;

    /* DataStoreWrite: '<S6>/DSW_StatusByte_EngHoodSw2CktHi' */
    HSWR_ac_DW.StatusByte_EngHoodSw2CktHi =
        HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p;

    /* DataStoreWrite: '<S6>/DSW_StatusByte_EngHoodSw2CktLo' */
    HSWR_ac_DW.StatusByte_EngHoodSw2CktLo =
        HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_p3;

    /* DataStoreWrite: '<S6>/DSW_StatusByte_EngHoodSw2AjDrv' */
    HSWR_ac_DW.StatusByte_EngHoodSw2AjDrv =
        HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_el;

    /* DataStoreWrite: '<S6>/DataStoreWrite' */
    HSWR_ac_DW.StatusByte_EngHoodSwCorr =
        HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_m1;

    /* DataStoreWrite: '<S6>/DataStoreWrite1' */
    HSWR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus =
        HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mt;

    /* DataStoreWrite: '<S6>/DataStoreWrite2' */
    HSWR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf =
        HSWR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_em;

#if Rte_SysCon_Variant_HSWR_2 || Rte_SysCon_Variant_HSWR_3

    /* S-Function (fcgen): '<S6>/FcnCallGen' */
    /* Outputs for Function Call SubSystem: '<S6>/Input_Overrides' */
    /* Switch: '<S104>/Switch5' incorporates:
     *  Constant: '<S366>/Calib'
     */
    if (KeHSWR_b_DsblFailSafe_SD)
    {
        /* Switch: '<S104>/Switch5' incorporates:
         *  Constant: '<S365>/Calib'
         */
        VeHSWR_b_DsblDiagFailSafe = KeHSWR_b_DsblFailSafe_D;
    }
    else
    {
        /* Switch: '<S104>/Switch5' */
        VeHSWR_b_DsblDiagFailSafe =
            HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_o5;
    }

    /* End of Switch: '<S104>/Switch5' */

    /* Switch: '<S104>/Switch1' incorporates:
     *  Constant: '<S370>/Calib'
     */
    if (KeHSWR_b_PostCodeClrDiagDsbl_SD)
    {
        /* Switch: '<S104>/Switch1' incorporates:
         *  Constant: '<S369>/Calib'
         */
        VeHSWR_b_PostCodeClrDiagDsbl = KeHSWR_b_PostCodeClrDiagDsbl_D;
    }
    else
    {
        /* Switch: '<S104>/Switch1' */
        VeHSWR_b_PostCodeClrDiagDsbl =
            HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_p;
    }

    /* End of Switch: '<S104>/Switch1' */

    /* Switch: '<S104>/Switch2' incorporates:
     *  Constant: '<S371>/Calib'
     */
    if (KeHSWR_b_SysVolt_SD)
    {
        /* Switch: '<S104>/Switch2' incorporates:
         *  Constant: '<S364>/Calib'
         */
        VeHSWR_U_SysVolt = KeHSWR_U_SysVolt_D;
    }
    else
    {
        /* Switch: '<S104>/Switch2' */
        VeHSWR_U_SysVolt = HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f;
    }

    /* End of Switch: '<S104>/Switch2' */

    /* Switch: '<S104>/Switch3' incorporates:
     *  Constant: '<S368>/Calib'
     */
    if (KeHSWR_b_IsDiagGlobalConditionsValid_SD)
    {
        /* Switch: '<S104>/Switch3' incorporates:
         *  Constant: '<S367>/Calib'
         */
        VeHSWR_b_IsDiagGlobalConditionsValid =
            KeHSWR_b_IsDiagGlobalConditionsValid_D;
    }
    else
    {
        /* Switch: '<S104>/Switch3' */
        VeHSWR_b_IsDiagGlobalConditionsValid =
            HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ob;
    }

    /* End of Switch: '<S104>/Switch3' */
    /* End of Outputs for SubSystem: '<S6>/Input_Overrides' */
    /* End of Outputs for S-Function (fcgen): '<S6>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S6>/FcnCallGen' incorporates:
     *  SubSystem: '<S6>/HSWD'
     */

    /* Logic: '<S106>/NOT4' */
#if Rte_SysCon_Variant_HSWR_2 || Rte_SysCon_Variant_HSWR_3

    /* Outputs for Atomic SubSystem: '<S103>/Voltage_In_Range' */
    /* Logic: '<S106>/NOT4' */
    rtb_NOT4 = ((VeHSWR_b_DsblDiagFailSafe) || (VeHSWR_b_PostCodeClrDiagDsbl));

    /* Logic: '<S109>/Logical12' incorporates:
     *  Constant: '<S361>/Calib'
     *  Constant: '<S362>/Calib'
     *  Constant: '<S363>/Calib'
     *  Logic: '<S109>/Logical26'
     *  RelationalOperator: '<S109>/Comparison11'
     *  RelationalOperator: '<S109>/Comparison8'
     */
    rtb_Logical12 = (((VeHSWR_U_SysVolt <= KeHSWD_U_SysVolt_Max) &&
                      (VeHSWR_U_SysVolt >= KeHSWD_U_SysVolt_Min)) ||
                     (KeHSWD_b_SysVoltEnbl));

    /* End of Outputs for SubSystem: '<S103>/Voltage_In_Range' */
#endif

    /* End of Logic: '<S106>/NOT4' */

    /* Outputs for Atomic SubSystem: '<S103>/PrimaryHoodSwitch' */
#if Rte_SysCon_Variant_HSWR_2

    /* Outputs for Atomic SubSystem: '<S107>/PrimaryHoodSwitch' */
    /* Outputs for Atomic SubSystem: '<S111>/P257D_CBC_Cir_Rng' */
    /* SignalConversion generated from: '<S118>/VariantSource' incorporates:
     *  DataStoreRead: '<S123>/StatusByte_HiSpdCANCommBus'
     *  Logic: '<S123>/Logical Operator'
     *  RelationalOperator: '<S123>/Relational Operator1'
     *  RelationalOperator: '<S123>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S123>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S123>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_HSWR_1

    /* RelationalOperator: '<S179>/Less Than  or Equal' */
    rtb_LessThanorEqual_a = HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jp;

#else

    /* RelationalOperator: '<S179>/Less Than  or Equal' incorporates:
     *  Constant: '<S123>/Constant1'
     *  Constant: '<S123>/Constant2'
     *  DataStoreRead: '<S123>/StatusByte_HiSpdCANCommBus'
     *  Logic: '<S123>/Logical Operator'
     *  RelationalOperator: '<S123>/Relational Operator1'
     *  RelationalOperator: '<S123>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S123>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S123>/Bitwise Operator2'
     */
    rtb_LessThanorEqual_a = (((((sint32)HSWR_ac_DW.StatusByte_HiSpdCANCommBus) &
        1) > 0) && ((((uint32)HSWR_ac_DW.StatusByte_HiSpdCANCommBus) & 64U) ==
                    0U));

#endif

    /* End of SignalConversion generated from: '<S118>/VariantSource' */

    /* Switch: '<S128>/Switch' incorporates:
     *  Constant: '<S126>/Calib'
     */
    if (KeHSWD_b_EnblNewBusOffChck)
    {
        /* RelationalOperator: '<S179>/Less Than  or Equal' incorporates:
         *  Constant: '<S129>/Constant1'
         *  Constant: '<S129>/Constant2'
         *  Constant: '<S130>/Constant1'
         *  Constant: '<S130>/Constant2'
         *  DataStoreRead: '<S129>/StatusByte_HiSpdFD_CAN3CommBus'
         *  DataStoreRead: '<S130>/StatusByte_HiSpdFD_CAN3CommBusPerf'
         *  Logic: '<S118>/AND'
         *  Logic: '<S129>/Logical Operator'
         *  Logic: '<S130>/Logical Operator'
         *  RelationalOperator: '<S129>/Relational Operator1'
         *  RelationalOperator: '<S129>/Relational Operator2'
         *  RelationalOperator: '<S130>/Relational Operator1'
         *  RelationalOperator: '<S130>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S129>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S129>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S130>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S130>/Bitwise Operator2'
         */
        rtb_LessThanorEqual_a = ((((((uint32)
            HSWR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus) & 1U) != 0U) &&
            ((((uint32)HSWR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus) & 64U) == 0U))
            && (((((uint32)HSWR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf) & 1U)
                 != 0U) && ((((uint32)
                              HSWR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf) &
                             64U) == 0U)));
    }

    /* End of Switch: '<S128>/Switch' */

    /* Outputs for Atomic SubSystem: '<S111>/P257F_CBC_Flt_High' */
    /* Outputs for Atomic SubSystem: '<S111>/P257E_CBC_Flt_Low' */
    /* S-Function (sfix_bitop): '<S125>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S125>/StatusByte_LostCommBCM'
     *  S-Function (sfix_bitop): '<S161>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S200>/Bitwise Operator2'
     */
    VeHSWR_b_CBC_Range_EnableCheck_tmp = ((sint32)
        HSWR_ac_DW.StatusByte_LostCommBCM) & 1;

    /* S-Function (sfix_bitop): '<S125>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S125>/StatusByte_LostCommBCM'
     *  S-Function (sfix_bitop): '<S161>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S200>/Bitwise Operator1'
     */
    VeHSWR_b_CBC_Range_EnableCheck_tmp_0 = ((uint32)
        HSWR_ac_DW.StatusByte_LostCommBCM) & 64U;

    /* End of Outputs for SubSystem: '<S111>/P257F_CBC_Flt_High' */

    /* S-Function (sfix_bitop): '<S121>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S121>/StatusByte_EngHoodSwCktHi'
     *  S-Function (sfix_bitop): '<S157>/Bitwise Operator2'
     */
    VeHSWR_b_CBC_Range_EnableCheck_tmp_1 = ((sint32)
        HSWR_ac_DW.StatusByte_EngHoodSwCktHi) & 1;

    /* Outputs for Atomic SubSystem: '<S111>/P257F_CBC_Flt_High' */
    /* S-Function (sfix_bitop): '<S121>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S121>/StatusByte_EngHoodSwCktHi'
     *  S-Function (sfix_bitop): '<S157>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S216>/Bitwise Operator2'
     */
    VeHSWR_b_CBC_Range_EnableCheck_tmp_2 = ((uint32)
        HSWR_ac_DW.StatusByte_EngHoodSwCktHi) & 64U;

    /* S-Function (sfix_bitop): '<S124>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S124>/StatusByte_InvData_BCM'
     *  S-Function (sfix_bitop): '<S160>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S199>/Bitwise Operator2'
     */
    VeHSWR_b_CBC_Range_EnableCheck_tmp_3 = ((sint32)
        HSWR_ac_DW.StatusByte_InvData_BCM) & 1;

    /* S-Function (sfix_bitop): '<S124>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S124>/StatusByte_InvData_BCM'
     *  S-Function (sfix_bitop): '<S160>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S199>/Bitwise Operator1'
     */
    VeHSWR_b_CBC_Range_EnableCheck_tmp_4 = ((uint32)
        HSWR_ac_DW.StatusByte_InvData_BCM) & 64U;

    /* S-Function (sfix_bitop): '<S122>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S122>/StatusByte_EngHoodSwCktLo'
     *  S-Function (sfix_bitop): '<S177>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S196>/Bitwise Operator1'
     */
    VeHSWR_b_CBC_Range_EnableCheck_tmp_5 = ((uint32)
        HSWR_ac_DW.StatusByte_EngHoodSwCktLo) & 64U;

    /* End of Outputs for SubSystem: '<S111>/P257E_CBC_Flt_Low' */

    /* S-Function (sfix_bitop): '<S122>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S122>/StatusByte_EngHoodSwCktLo'
     *  S-Function (sfix_bitop): '<S196>/Bitwise Operator2'
     */
    VeHSWR_b_CBC_Range_EnableCheck_tmp_6 = ((sint32)
        HSWR_ac_DW.StatusByte_EngHoodSwCktLo) & 1;

    /* End of Outputs for SubSystem: '<S111>/P257F_CBC_Flt_High' */

    /* Logic: '<S118>/LogicalOperator' incorporates:
     *  Constant: '<S121>/Constant1'
     *  Constant: '<S121>/Constant2'
     *  Constant: '<S122>/Constant1'
     *  Constant: '<S122>/Constant2'
     *  Constant: '<S124>/Constant1'
     *  Constant: '<S124>/Constant2'
     *  Constant: '<S125>/Constant1'
     *  Constant: '<S125>/Constant2'
     *  Constant: '<S127>/Calib'
     *  Logic: '<S118>/LogicalOperator2'
     *  Logic: '<S118>/LogicalOperator3'
     *  Logic: '<S121>/Logical Operator'
     *  Logic: '<S122>/Logical Operator'
     *  Logic: '<S124>/Logical Operator'
     *  Logic: '<S125>/Logical Operator'
     *  RelationalOperator: '<S121>/Relational Operator1'
     *  RelationalOperator: '<S121>/Relational Operator2'
     *  RelationalOperator: '<S122>/Relational Operator1'
     *  RelationalOperator: '<S122>/Relational Operator2'
     *  RelationalOperator: '<S124>/Relational Operator1'
     *  RelationalOperator: '<S124>/Relational Operator2'
     *  RelationalOperator: '<S125>/Relational Operator1'
     *  RelationalOperator: '<S125>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S121>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S121>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S122>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S122>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S124>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S124>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S125>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S125>/Bitwise Operator2'
     */
    VeHSWR_b_CBC_Range_EnableCheck = ((((KeHSWD_b_Enbl_CBC_Range) &&
        rtb_Logical12) && ((((((VeHSWR_b_CBC_Range_EnableCheck_tmp <= 0) ||
        (VeHSWR_b_CBC_Range_EnableCheck_tmp_0 != 0U)) && (!rtb_LessThanorEqual_a))
        && ((VeHSWR_b_CBC_Range_EnableCheck_tmp_1 <= 0) ||
            (VeHSWR_b_CBC_Range_EnableCheck_tmp_2 != 0U))) &&
                            ((VeHSWR_b_CBC_Range_EnableCheck_tmp_6 <= 0) ||
        (VeHSWR_b_CBC_Range_EnableCheck_tmp_5 != 0U))) &&
                           ((VeHSWR_b_CBC_Range_EnableCheck_tmp_3 <= 0) ||
                            (VeHSWR_b_CBC_Range_EnableCheck_tmp_4 != 0U)))) &&
        (VeHSWR_b_IsDiagGlobalConditionsValid));

    /* Outputs for Atomic SubSystem: '<S111>/P257F_CBC_Flt_High' */
    /* Outputs for Atomic SubSystem: '<S111>/P257E_CBC_Flt_Low' */
    /* S-Function (sfix_bitop): '<S138>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S139>/StatusByte_EngHoodSwCktRngPerf'
     *  S-Function (sfix_bitop): '<S158>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S197>/Bitwise Operator1'
     *  Switch: '<S154>/switch'
     *  Switch: '<S193>/switch'
     */
    rtb_RelationalOperator3_e_tmp = ((uint32)
        HSWR_ac_DW.StatusByte_EngHoodSwCktRngPerf) & 64U;

    /* End of Outputs for SubSystem: '<S111>/P257E_CBC_Flt_Low' */
    /* End of Outputs for SubSystem: '<S111>/P257F_CBC_Flt_High' */

    /* RelationalOperator: '<S138>/Relational Operator3' incorporates:
     *  Constant: '<S138>/Constant3'
     *  S-Function (sfix_bitop): '<S138>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_h = (rtb_RelationalOperator3_e_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S138>/EdgeFalling1' */
    /* Logic: '<S138>/Logical Operator' incorporates:
     *  Logic: '<S141>/OR1'
     */
    rtb_AND_k = !rtb_RelationalOperator3_h;

    /* End of Outputs for SubSystem: '<S138>/EdgeFalling1' */

    /* Logic: '<S138>/Logical1' incorporates:
     *  Constant: '<S137>/Calib'
     *  Constant: '<S138>/Constant1'
     *  DataStoreRead: '<S139>/StatusByte_EngHoodSwCktRngPerf'
     *  Logic: '<S138>/Logical Operator'
     *  Logic: '<S138>/Logical10'
     *  Logic: '<S138>/Logical12'
     *  RelationalOperator: '<S138>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S138>/Bitwise Operator3'
     */
    rtb_LessThanorEqual_a = ((VeHSWR_b_CBC_Range_EnableCheck) &&
        ((!KeHSWD_b_EngHoodSwCktRngPerf_LtchEnbl) || (((((uint32)
        HSWR_ac_DW.StatusByte_EngHoodSwCktRngPerf) & 1U) == 0U) || rtb_AND_k)));

    /* RelationalOperator: '<S119>/Comparison2' incorporates:
     *  Logic: '<S119>/LogicalOperator'
     *  Logic: '<S119>/LogicalOperator1'
     *  RelationalOperator: '<S119>/Comparison1'
     *  RelationalOperator: '<S119>/Comparison4'
     */
#if Rte_SysCon_Variant_HSWR_7

    /* RelationalOperator: '<S218>/Less Than  or Equal' incorporates:
     *  Constant: '<S133>/Constant'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25'
     */
    VeHSWR_b_CBC_FaultHigh_FaultCheck = (((uint32)
        HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_k) ==
        CeHSWR_e_VoltHoodDefault);

#else

    /* RelationalOperator: '<S218>/Less Than  or Equal' incorporates:
     *  Constant: '<S132>/Constant'
     *  Constant: '<S134>/Calib'
     *  Logic: '<S119>/LogicalOperator'
     *  Logic: '<S119>/LogicalOperator1'
     *  RelationalOperator: '<S119>/Comparison1'
     *  RelationalOperator: '<S119>/Comparison4'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25'
     */
    VeHSWR_b_CBC_FaultHigh_FaultCheck =
        ((HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o == 0) ||
         (((((uint32)HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e) ==
            CeHSWR_e_Dbg_Poke) &&
           (HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j)) &&
          (KeHSWD_b_CktRng_SNAEnbl)));

#endif

    /* End of RelationalOperator: '<S119>/Comparison2' */

    /* SignalConversion generated from: '<S119>/Variant Source' */
    VeHSWR_b_CBC_Range_FaultCheck = VeHSWR_b_CBC_FaultHigh_FaultCheck;

    /* Outputs for Atomic SubSystem: '<S138>/EdgeFalling1' */
    /* Logic: '<S141>/AND' incorporates:
     *  UnitDelay: '<S141>/Unit Delay'
     */
    rtb_AND_k = (rtb_AND_k && (HSWR_ac_DW.UnitDelay_DSTATE_gt));

    /* Update for UnitDelay: '<S141>/Unit Delay' */
    HSWR_ac_DW.UnitDelay_DSTATE_gt = rtb_RelationalOperator3_h;

    /* End of Outputs for SubSystem: '<S138>/EdgeFalling1' */

    /* Logic: '<S138>/Logical5' */
    rtb_RelationalOperator3_h = (rtb_NOT4 || rtb_AND_k);

    /* Outputs for Atomic SubSystem: '<S140>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S140>/Counter Reset  Enabled ' */
    /* Switch: '<S147>/Switch1' incorporates:
     *  Logic: '<S140>/Fail Counter Reset'
     *  Logic: '<S140>/NOT6'
     *  Switch: '<S147>/Switch2'
     *  Switch: '<S148>/Switch1'
     *  UnitDelay: '<S140>/Unit Delay'
     *  UnitDelay: '<S140>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3_h || (HSWR_ac_DW.UnitDelay_DSTATE_nm)) ||
            (HSWR_ac_DW.UnitDelay1_DSTATE_h))
    {
        /* Switch: '<S147>/Switch1' incorporates:
         *  Constant: '<S147>/Constant Value2'
         */
        VeHSWD_Cnt_CBC_Range_FailCnt = 0U;

        /* Switch: '<S148>/Switch1' incorporates:
         *  Constant: '<S148>/Constant Value2'
         */
        VeHSWD_Cnt_CBC_Range_SmpCnt = 0U;
    }
    else
    {
        if (rtb_LessThanorEqual_a && (VeHSWR_b_CBC_Range_FaultCheck))
        {
            /* Switch: '<S147>/Switch1' incorporates:
             *  Constant: '<S147>/Constant Value1'
             *  Sum: '<S147>/Subtraction'
             *  Switch: '<S147>/Switch2'
             *  UnitDelay: '<S147>/Unit Delay'
             */
            VeHSWD_Cnt_CBC_Range_FailCnt = (uint16)(((uint32)
                VeHSWD_Cnt_CBC_Range_FailCnt) + 1U);
        }

        /* Switch: '<S148>/Switch2' */
        if (rtb_LessThanorEqual_a)
        {
            /* Switch: '<S148>/Switch1' incorporates:
             *  Constant: '<S148>/Constant Value1'
             *  Sum: '<S148>/Subtraction'
             *  Switch: '<S148>/Switch2'
             *  UnitDelay: '<S148>/Unit Delay'
             */
            VeHSWD_Cnt_CBC_Range_SmpCnt = (uint16)(((uint32)
                VeHSWD_Cnt_CBC_Range_SmpCnt) + 1U);
        }

        /* End of Switch: '<S148>/Switch2' */
    }

    /* End of Switch: '<S147>/Switch1' */
    /* End of Outputs for SubSystem: '<S140>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S140>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S140>/Greater Than or Equal ' incorporates:
     *  Constant: '<S135>/Calib'
     */
    HSWR_ac_DW.UnitDelay1_DSTATE_h = (((float32)VeHSWD_Cnt_CBC_Range_FailCnt) >=
        KeHSWD_Cnt_CBC_HdAjar_PerFail);

    /* Logic: '<S140>/NOT5' incorporates:
     *  Constant: '<S136>/Calib'
     *  Logic: '<S140>/NOT3'
     *  RelationalOperator: '<S140>/Less Than  or Equal'
     */
    HSWR_ac_DW.UnitDelay_DSTATE_nm = ((((float32)VeHSWD_Cnt_CBC_Range_SmpCnt) >=
        KeHSWD_Cnt_CBC_HdAjar_PerSmp) && (!HSWR_ac_DW.UnitDelay1_DSTATE_h));

    /* Switch: '<S153>/Switch1' incorporates:
     *  Constant: '<S146>/Constant Value'
     *  DataStoreWrite: '<S120>/DataStoreWrite4'
     *  Switch: '<S152>/Switch1'
     */
    if (VeHSWR_b_PostCodeClrDiagDsbl)
    {
        HSWR_ac_DW.NeHSWD_Cnt_CBC_Range_MFOP = 0U;
    }
    else
    {
        if (HSWR_ac_DW.UnitDelay_DSTATE_nm)
        {
            /* MinMax: '<S146>/Minimum2' incorporates:
             *  DataStoreRead: '<S120>/DataStoreRead3'
             *  Switch: '<S152>/Switch1'
             */
            if (VeHSWD_Cnt_CBC_Range_FailCnt >
                    HSWR_ac_DW.NeHSWD_Cnt_CBC_Range_MFOP)
            {
                /* DataStoreWrite: '<S120>/DataStoreWrite4' incorporates:
                 *  Switch: '<S152>/Switch1'
                 */
                HSWR_ac_DW.NeHSWD_Cnt_CBC_Range_MFOP =
                    VeHSWD_Cnt_CBC_Range_FailCnt;
            }

            /* End of MinMax: '<S146>/Minimum2' */
        }
    }

    /* End of Switch: '<S153>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S138>/Fail' */
    HSWR_ac_Fail(HSWR_ac_DW.UnitDelay1_DSTATE_h,
                 &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHoo_f1);

    /* End of Outputs for SubSystem: '<S138>/Fail' */

    /* Outputs for Enabled SubSystem: '<S138>/Init' */
    HSWR_ac_Init_e(rtb_RelationalOperator3_h,
                   &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHoo_f1);

    /* End of Outputs for SubSystem: '<S138>/Init' */

    /* Outputs for Enabled SubSystem: '<S138>/Pass' */
    HSWR_ac_Pass(HSWR_ac_DW.UnitDelay_DSTATE_nm,
                 &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHoo_f1);

    /* End of Outputs for SubSystem: '<S138>/Pass' */

    /* RelationalOperator: '<S138>/Relational Operator' incorporates:
     *  Constant: '<S142>/Constant'
     *  VariantMerge generated from: '<S107>/FaultSts_EngHoodSwCktRngPerf'
     */
    VeHSWD_b_PrimaryRangeFault = (((uint32)
        HSWR_ac_B.VariantMergeForOutportFaultSts_EngHoo_f1) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S111>/P257D_CBC_Cir_Rng' */

    /* Outputs for Atomic SubSystem: '<S111>/P257E_CBC_Flt_Low' */
    /* SignalConversion generated from: '<S154>/VariantSource' incorporates:
     *  DataStoreRead: '<S159>/StatusByte_HiSpdCANCommBus'
     *  Logic: '<S159>/Logical Operator'
     *  RelationalOperator: '<S159>/Relational Operator1'
     *  RelationalOperator: '<S159>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S159>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S159>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_HSWR_1

    /* RelationalOperator: '<S218>/Less Than  or Equal' */
    VeHSWR_b_CBC_FaultHigh_FaultCheck =
        HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jp;

#else

    /* RelationalOperator: '<S218>/Less Than  or Equal' incorporates:
     *  Constant: '<S159>/Constant1'
     *  Constant: '<S159>/Constant2'
     *  DataStoreRead: '<S159>/StatusByte_HiSpdCANCommBus'
     *  Logic: '<S159>/Logical Operator'
     *  RelationalOperator: '<S159>/Relational Operator1'
     *  RelationalOperator: '<S159>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S159>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S159>/Bitwise Operator2'
     */
    VeHSWR_b_CBC_FaultHigh_FaultCheck = (((((sint32)
        HSWR_ac_DW.StatusByte_HiSpdCANCommBus) & 1) > 0) && ((((uint32)
        HSWR_ac_DW.StatusByte_HiSpdCANCommBus) & 64U) == 0U));

#endif

    /* End of SignalConversion generated from: '<S154>/VariantSource' */

    /* Switch: '<S154>/switch' incorporates:
     *  Constant: '<S154>/FALSEConstant'
     *  Constant: '<S158>/Constant1'
     *  Constant: '<S158>/Constant2'
     *  Constant: '<S164>/Calib'
     *  DataStoreRead: '<S158>/StatusByte_EngHoodSwCktRngPerf'
     *  Logic: '<S158>/Logical Operator'
     *  RelationalOperator: '<S158>/Relational Operator1'
     *  RelationalOperator: '<S158>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S158>/Bitwise Operator2'
     */
    if (KeHSWD_b_Enbl_P257D_Check)
    {
        rtb_LessThanorEqual_a = (((((sint32)
            HSWR_ac_DW.StatusByte_EngHoodSwCktRngPerf) & 1) > 0) &&
            (rtb_RelationalOperator3_e_tmp == 0U));
    }
    else
    {
        rtb_LessThanorEqual_a = false;
    }

    /* Switch: '<S165>/Switch' incorporates:
     *  Constant: '<S162>/Calib'
     *  Constant: '<S166>/Constant1'
     *  Constant: '<S166>/Constant2'
     *  Constant: '<S167>/Constant1'
     *  Constant: '<S167>/Constant2'
     *  DataStoreRead: '<S166>/StatusByte_HiSpdFD_CAN3CommBus'
     *  DataStoreRead: '<S167>/StatusByte_HiSpdFD_CAN3CommBusPerf'
     *  Logic: '<S154>/AND'
     *  Logic: '<S166>/Logical Operator'
     *  Logic: '<S167>/Logical Operator'
     *  RelationalOperator: '<S166>/Relational Operator1'
     *  RelationalOperator: '<S166>/Relational Operator2'
     *  RelationalOperator: '<S167>/Relational Operator1'
     *  RelationalOperator: '<S167>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S166>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S166>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S167>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S167>/Bitwise Operator2'
     */
    if (KeHSWD_b_EnblNewBusOffChck)
    {
        rtb_RelationalOperator3_h = ((((((uint32)
            HSWR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus) & 1U) != 0U) &&
            ((((uint32)HSWR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus) & 64U) == 0U))
            && (((((uint32)HSWR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf) & 1U)
                 != 0U) && ((((uint32)
                              HSWR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf) &
                             64U) == 0U)));
    }
    else
    {
        rtb_RelationalOperator3_h = VeHSWR_b_CBC_FaultHigh_FaultCheck;
    }

    /* End of Switch: '<S165>/Switch' */

    /* Logic: '<S154>/Logicalperator' incorporates:
     *  Constant: '<S157>/Constant1'
     *  Constant: '<S157>/Constant2'
     *  Constant: '<S160>/Constant1'
     *  Constant: '<S160>/Constant2'
     *  Constant: '<S161>/Constant1'
     *  Constant: '<S161>/Constant2'
     *  Constant: '<S163>/Calib'
     *  Logic: '<S154>/LogicalOperator2'
     *  Logic: '<S154>/LogicalOperator3'
     *  Logic: '<S157>/Logical Operator'
     *  Logic: '<S160>/Logical Operator'
     *  Logic: '<S161>/Logical Operator'
     *  RelationalOperator: '<S157>/Relational Operator1'
     *  RelationalOperator: '<S157>/Relational Operator2'
     *  RelationalOperator: '<S160>/Relational Operator1'
     *  RelationalOperator: '<S160>/Relational Operator2'
     *  RelationalOperator: '<S161>/Relational Operator1'
     *  RelationalOperator: '<S161>/Relational Operator2'
     */
    VeHSWR_b_CBC_FaultLow_EnableCheck = ((((KeHSWD_b_Enbl_CBC_Fault_Low) &&
        rtb_Logical12) && (((((!rtb_LessThanorEqual_a) &&
        ((VeHSWR_b_CBC_Range_EnableCheck_tmp <= 0) ||
         (VeHSWR_b_CBC_Range_EnableCheck_tmp_0 != 0U))) &&
        ((VeHSWR_b_CBC_Range_EnableCheck_tmp_1 <= 0) ||
         (VeHSWR_b_CBC_Range_EnableCheck_tmp_2 != 0U))) &&
                            ((VeHSWR_b_CBC_Range_EnableCheck_tmp_3 <= 0) ||
        (VeHSWR_b_CBC_Range_EnableCheck_tmp_4 != 0U))) &&
                           (!rtb_RelationalOperator3_h))) &&
        (VeHSWR_b_IsDiagGlobalConditionsValid));

    /* RelationalOperator: '<S177>/Relational Operator3' incorporates:
     *  Constant: '<S177>/Constant3'
     */
    rtb_RelationalOperator3_h = (VeHSWR_b_CBC_Range_EnableCheck_tmp_5 == 0U);

    /* Outputs for Atomic SubSystem: '<S177>/EdgeFalling1' */
    /* Logic: '<S177>/Logical Operator' incorporates:
     *  Logic: '<S180>/OR1'
     */
    rtb_AND_k = !rtb_RelationalOperator3_h;

    /* End of Outputs for SubSystem: '<S177>/EdgeFalling1' */

    /* Logic: '<S177>/Logical1' incorporates:
     *  Constant: '<S176>/Calib'
     *  Constant: '<S177>/Constant1'
     *  DataStoreRead: '<S178>/StatusByte_EngHoodSwCktLo'
     *  Logic: '<S177>/Logical Operator'
     *  Logic: '<S177>/Logical10'
     *  Logic: '<S177>/Logical12'
     *  RelationalOperator: '<S177>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S177>/Bitwise Operator3'
     */
    rtb_LessThanorEqual_a = ((VeHSWR_b_CBC_FaultLow_EnableCheck) &&
        ((!KeHSWD_b_EngHoodSwCktLo_LtchEnbl) || (((((uint32)
        HSWR_ac_DW.StatusByte_EngHoodSwCktLo) & 1U) == 0U) || rtb_AND_k)));

    /* RelationalOperator: '<S155>/Comparison6' incorporates:
     *  Logic: '<S155>/LogicalOperator1'
     *  RelationalOperator: '<S155>/Comparison1'
     *  RelationalOperator: '<S155>/Comparison2'
     *  RelationalOperator: '<S155>/Comparison3'
     *  RelationalOperator: '<S155>/Comparison4'
     *  RelationalOperator: '<S155>/Comparison5'
     */
#if Rte_SysCon_Variant_HSWR_7

    /* RelationalOperator: '<S218>/Less Than  or Equal' incorporates:
     *  Constant: '<S173>/Constant'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25'
     */
    VeHSWR_b_CBC_FaultHigh_FaultCheck = (((uint32)
        HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_k) ==
        CeHSWR_e_VoltShortToGround);

#else

    /* RelationalOperator: '<S218>/Less Than  or Equal' incorporates:
     *  Logic: '<S155>/LogicalOperator1'
     *  RelationalOperator: '<S155>/Comparison1'
     *  RelationalOperator: '<S155>/Comparison2'
     *  RelationalOperator: '<S155>/Comparison3'
     *  RelationalOperator: '<S155>/Comparison4'
     *  RelationalOperator: '<S155>/Comparison5'
     */
    VeHSWR_b_CBC_FaultHigh_FaultCheck =
        (((((HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o == 1) ||
            (HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o == 2)) ||
           (HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o == 3)) ||
          (HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o == 4)) ||
         (HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o == 5));

#endif

    /* End of RelationalOperator: '<S155>/Comparison6' */

    /* SignalConversion generated from: '<S155>/Variant Source' */
    VeHSWR_b_CBC_FaultLow_FaultCheck = VeHSWR_b_CBC_FaultHigh_FaultCheck;

    /* Outputs for Atomic SubSystem: '<S177>/EdgeFalling1' */
    /* Logic: '<S180>/AND' incorporates:
     *  UnitDelay: '<S180>/Unit Delay'
     */
    rtb_AND_k = (rtb_AND_k && (HSWR_ac_DW.UnitDelay_DSTATE_pj));

    /* Update for UnitDelay: '<S180>/Unit Delay' */
    HSWR_ac_DW.UnitDelay_DSTATE_pj = rtb_RelationalOperator3_h;

    /* End of Outputs for SubSystem: '<S177>/EdgeFalling1' */

    /* Logic: '<S177>/Logical5' */
    rtb_RelationalOperator3_h = (rtb_NOT4 || rtb_AND_k);

    /* Outputs for Atomic SubSystem: '<S179>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S179>/Counter Reset  Enabled ' */
    /* Switch: '<S186>/Switch1' incorporates:
     *  Logic: '<S179>/Fail Counter Reset'
     *  Logic: '<S179>/NOT6'
     *  Switch: '<S186>/Switch2'
     *  Switch: '<S187>/Switch1'
     *  UnitDelay: '<S179>/Unit Delay'
     *  UnitDelay: '<S179>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3_h || (HSWR_ac_DW.UnitDelay_DSTATE_ec)) ||
            (HSWR_ac_DW.UnitDelay1_DSTATE_p))
    {
        /* Switch: '<S186>/Switch1' incorporates:
         *  Constant: '<S186>/Constant Value2'
         */
        VeHSWD_Cnt_CBC_FaultLow_FailCnt = 0U;

        /* Switch: '<S187>/Switch1' incorporates:
         *  Constant: '<S187>/Constant Value2'
         */
        VeHSWD_Cnt_CBC_FaultLow_SmpCnt = 0U;
    }
    else
    {
        if (rtb_LessThanorEqual_a && (VeHSWR_b_CBC_FaultLow_FaultCheck))
        {
            /* Switch: '<S186>/Switch1' incorporates:
             *  Constant: '<S186>/Constant Value1'
             *  Sum: '<S186>/Subtraction'
             *  Switch: '<S186>/Switch2'
             *  UnitDelay: '<S186>/Unit Delay'
             */
            VeHSWD_Cnt_CBC_FaultLow_FailCnt = (uint16)(((uint32)
                VeHSWD_Cnt_CBC_FaultLow_FailCnt) + 1U);
        }

        /* Switch: '<S187>/Switch2' */
        if (rtb_LessThanorEqual_a)
        {
            /* Switch: '<S187>/Switch1' incorporates:
             *  Constant: '<S187>/Constant Value1'
             *  Sum: '<S187>/Subtraction'
             *  Switch: '<S187>/Switch2'
             *  UnitDelay: '<S187>/Unit Delay'
             */
            VeHSWD_Cnt_CBC_FaultLow_SmpCnt = (uint16)(((uint32)
                VeHSWD_Cnt_CBC_FaultLow_SmpCnt) + 1U);
        }

        /* End of Switch: '<S187>/Switch2' */
    }

    /* End of Switch: '<S186>/Switch1' */
    /* End of Outputs for SubSystem: '<S179>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S179>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S179>/Greater Than or Equal ' incorporates:
     *  Constant: '<S174>/Calib'
     */
    HSWR_ac_DW.UnitDelay1_DSTATE_p = (((float32)VeHSWD_Cnt_CBC_FaultLow_FailCnt)
        >= KeHSWD_Cnt_CBC_HdAjar_LoFail);

    /* Logic: '<S179>/NOT5' incorporates:
     *  Constant: '<S175>/Calib'
     *  Logic: '<S179>/NOT3'
     *  RelationalOperator: '<S179>/Less Than  or Equal'
     */
    HSWR_ac_DW.UnitDelay_DSTATE_ec = ((((float32)VeHSWD_Cnt_CBC_FaultLow_SmpCnt)
        >= KeHSWD_Cnt_CBC_HdAjar_LoSmp) && (!HSWR_ac_DW.UnitDelay1_DSTATE_p));

    /* Switch: '<S192>/Switch1' incorporates:
     *  Constant: '<S185>/Constant Value'
     *  DataStoreWrite: '<S156>/DataStoreWrite4'
     *  Switch: '<S191>/Switch1'
     */
    if (VeHSWR_b_PostCodeClrDiagDsbl)
    {
        HSWR_ac_DW.NeHSWD_Cnt_CBC_FaultLow_MFOP = 0U;
    }
    else
    {
        if (HSWR_ac_DW.UnitDelay_DSTATE_ec)
        {
            /* MinMax: '<S185>/Minimum2' incorporates:
             *  DataStoreRead: '<S156>/DataStoreRead3'
             *  Switch: '<S191>/Switch1'
             */
            if (VeHSWD_Cnt_CBC_FaultLow_FailCnt >
                    HSWR_ac_DW.NeHSWD_Cnt_CBC_FaultLow_MFOP)
            {
                /* DataStoreWrite: '<S156>/DataStoreWrite4' incorporates:
                 *  Switch: '<S191>/Switch1'
                 */
                HSWR_ac_DW.NeHSWD_Cnt_CBC_FaultLow_MFOP =
                    VeHSWD_Cnt_CBC_FaultLow_FailCnt;
            }

            /* End of MinMax: '<S185>/Minimum2' */
        }
    }

    /* End of Switch: '<S192>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S177>/Fail' */
    HSWR_ac_Fail(HSWR_ac_DW.UnitDelay1_DSTATE_p,
                 &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_b);

    /* End of Outputs for SubSystem: '<S177>/Fail' */

    /* Outputs for Enabled SubSystem: '<S177>/Init' */
    HSWR_ac_Init_e(rtb_RelationalOperator3_h,
                   &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_b);

    /* End of Outputs for SubSystem: '<S177>/Init' */

    /* Outputs for Enabled SubSystem: '<S177>/Pass' */
    HSWR_ac_Pass(HSWR_ac_DW.UnitDelay_DSTATE_ec,
                 &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_b);

    /* End of Outputs for SubSystem: '<S177>/Pass' */

    /* RelationalOperator: '<S177>/Relational Operator' incorporates:
     *  Constant: '<S181>/Constant'
     *  VariantMerge generated from: '<S107>/FaultSts_EngHoodSwCktLo'
     */
    VeHSWD_b_PrimaryLowFault = (((uint32)
        HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_b) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S111>/P257E_CBC_Flt_Low' */

    /* Outputs for Atomic SubSystem: '<S111>/P257F_CBC_Flt_High' */
    /* SignalConversion generated from: '<S193>/VariantSource' incorporates:
     *  DataStoreRead: '<S198>/StatusByte_HiSpdCANCommBus'
     *  Logic: '<S198>/Logical Operator'
     *  RelationalOperator: '<S198>/Relational Operator1'
     *  RelationalOperator: '<S198>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S198>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S198>/Bitwise Operator2'
     */
#if Rte_SysCon_Variant_HSWR_1

    /* RelationalOperator: '<S194>/Comparison4' */
    rtb_Comparison4_k4 = HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jp;

#else

    /* RelationalOperator: '<S194>/Comparison4' incorporates:
     *  Constant: '<S198>/Constant1'
     *  Constant: '<S198>/Constant2'
     *  DataStoreRead: '<S198>/StatusByte_HiSpdCANCommBus'
     *  Logic: '<S198>/Logical Operator'
     *  RelationalOperator: '<S198>/Relational Operator1'
     *  RelationalOperator: '<S198>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S198>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S198>/Bitwise Operator2'
     */
    rtb_Comparison4_k4 = (((((sint32)HSWR_ac_DW.StatusByte_HiSpdCANCommBus) & 1)
                           > 0) && ((((uint32)
        HSWR_ac_DW.StatusByte_HiSpdCANCommBus) & 64U) == 0U));

#endif

    /* End of SignalConversion generated from: '<S193>/VariantSource' */

    /* Switch: '<S204>/Switch' incorporates:
     *  Constant: '<S201>/Calib'
     */
    if (KeHSWD_b_EnblNewBusOffChck)
    {
        /* RelationalOperator: '<S194>/Comparison4' incorporates:
         *  Constant: '<S205>/Constant1'
         *  Constant: '<S205>/Constant2'
         *  Constant: '<S206>/Constant1'
         *  Constant: '<S206>/Constant2'
         *  DataStoreRead: '<S205>/StatusByte_HiSpdFD_CAN3CommBus'
         *  DataStoreRead: '<S206>/StatusByte_HiSpdFD_CAN3CommBusPerf'
         *  Logic: '<S193>/LogicalOperator1'
         *  Logic: '<S205>/Logical Operator'
         *  Logic: '<S206>/Logical Operator'
         *  RelationalOperator: '<S205>/Relational Operator1'
         *  RelationalOperator: '<S205>/Relational Operator2'
         *  RelationalOperator: '<S206>/Relational Operator1'
         *  RelationalOperator: '<S206>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S205>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S205>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S206>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S206>/Bitwise Operator2'
         */
        rtb_Comparison4_k4 = ((((((uint32)
            HSWR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus) & 1U) != 0U) &&
                               ((((uint32)
            HSWR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus) & 64U) == 0U)) &&
                              (((((uint32)
            HSWR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf) & 1U) != 0U) &&
                               ((((uint32)
            HSWR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf) & 64U) == 0U)));
    }

    /* End of Switch: '<S204>/Switch' */

    /* Switch: '<S193>/switch' incorporates:
     *  Constant: '<S193>/FALSEConstant'
     *  Constant: '<S197>/Constant1'
     *  Constant: '<S197>/Constant2'
     *  Constant: '<S203>/Calib'
     *  DataStoreRead: '<S197>/StatusByte_EngHoodSwCktRngPerf'
     *  Logic: '<S197>/Logical Operator'
     *  RelationalOperator: '<S197>/Relational Operator1'
     *  RelationalOperator: '<S197>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S197>/Bitwise Operator2'
     */
    if (KeHSWD_b_Enbl_P257D_Check)
    {
        rtb_LessThanorEqual_a = (((((sint32)
            HSWR_ac_DW.StatusByte_EngHoodSwCktRngPerf) & 1) > 0) &&
            (rtb_RelationalOperator3_e_tmp == 0U));
    }
    else
    {
        rtb_LessThanorEqual_a = false;
    }

    /* Logic: '<S193>/LogicalOperator' incorporates:
     *  Constant: '<S196>/Constant1'
     *  Constant: '<S196>/Constant2'
     *  Constant: '<S199>/Constant1'
     *  Constant: '<S199>/Constant2'
     *  Constant: '<S200>/Constant1'
     *  Constant: '<S200>/Constant2'
     *  Constant: '<S202>/Calib'
     *  Logic: '<S193>/LogicalOperator2'
     *  Logic: '<S193>/LogicalOperator3'
     *  Logic: '<S196>/Logical Operator'
     *  Logic: '<S199>/Logical Operator'
     *  Logic: '<S200>/Logical Operator'
     *  RelationalOperator: '<S196>/Relational Operator1'
     *  RelationalOperator: '<S196>/Relational Operator2'
     *  RelationalOperator: '<S199>/Relational Operator1'
     *  RelationalOperator: '<S199>/Relational Operator2'
     *  RelationalOperator: '<S200>/Relational Operator1'
     *  RelationalOperator: '<S200>/Relational Operator2'
     */
    VeHSWR_b_CBC_FaultHigh_EnableCheck = ((((KeHSWD_b_Enbl_CBC_Fault_High) &&
        rtb_Logical12) && (((((!rtb_LessThanorEqual_a) &&
        ((VeHSWR_b_CBC_Range_EnableCheck_tmp <= 0) ||
         (VeHSWR_b_CBC_Range_EnableCheck_tmp_0 != 0U))) &&
        ((VeHSWR_b_CBC_Range_EnableCheck_tmp_6 <= 0) ||
         (VeHSWR_b_CBC_Range_EnableCheck_tmp_5 != 0U))) &&
                            ((VeHSWR_b_CBC_Range_EnableCheck_tmp_3 <= 0) ||
        (VeHSWR_b_CBC_Range_EnableCheck_tmp_4 != 0U))) && (!rtb_Comparison4_k4)))
        && (VeHSWR_b_IsDiagGlobalConditionsValid));

    /* RelationalOperator: '<S216>/Relational Operator3' incorporates:
     *  Constant: '<S216>/Constant3'
     */
    rtb_LessThanorEqual_a = (VeHSWR_b_CBC_Range_EnableCheck_tmp_2 == 0U);

    /* Outputs for Atomic SubSystem: '<S216>/EdgeFalling1' */
    /* Logic: '<S216>/Logical Operator' incorporates:
     *  Logic: '<S219>/OR1'
     */
    rtb_RelationalOperator3_h = !rtb_LessThanorEqual_a;

    /* End of Outputs for SubSystem: '<S216>/EdgeFalling1' */

    /* Logic: '<S216>/Logical1' incorporates:
     *  Constant: '<S215>/Calib'
     *  Constant: '<S216>/Constant1'
     *  DataStoreRead: '<S217>/StatusByte_EngHoodSwCktHi'
     *  Logic: '<S216>/Logical Operator'
     *  Logic: '<S216>/Logical10'
     *  Logic: '<S216>/Logical12'
     *  RelationalOperator: '<S216>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S216>/Bitwise Operator3'
     */
    rtb_Comparison4_k4 = ((VeHSWR_b_CBC_FaultHigh_EnableCheck) &&
                          ((!KeHSWD_b_EngHoodSwCktHi_LtchEnbl) || (((((uint32)
        HSWR_ac_DW.StatusByte_EngHoodSwCktHi) & 1U) == 0U) ||
                            rtb_RelationalOperator3_h)));

    /* RelationalOperator: '<S194>/Comparison6' incorporates:
     *  Logic: '<S194>/LogicalOperator1'
     *  RelationalOperator: '<S194>/Comparison1'
     *  RelationalOperator: '<S194>/Comparison2'
     *  RelationalOperator: '<S194>/Comparison3'
     *  RelationalOperator: '<S194>/Comparison4'
     *  RelationalOperator: '<S194>/Comparison5'
     */
#if Rte_SysCon_Variant_HSWR_7

    /* RelationalOperator: '<S218>/Less Than  or Equal' incorporates:
     *  Constant: '<S212>/Constant'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtHSWR_MedTEHInport25'
     */
    VeHSWR_b_CBC_FaultHigh_FaultCheck = (((uint32)
        HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_k) ==
        CeHSWR_e_VoltOpenCircuit);

#else

    /* RelationalOperator: '<S218>/Less Than  or Equal' incorporates:
     *  Logic: '<S194>/LogicalOperator1'
     *  RelationalOperator: '<S194>/Comparison1'
     *  RelationalOperator: '<S194>/Comparison2'
     *  RelationalOperator: '<S194>/Comparison3'
     *  RelationalOperator: '<S194>/Comparison4'
     *  RelationalOperator: '<S194>/Comparison5'
     */
    VeHSWR_b_CBC_FaultHigh_FaultCheck =
        (((((HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o == 10) ||
            (HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o == 11)) ||
           (HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o == 12)) ||
          (HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o == 13)) ||
         (HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_o == 14));

#endif

    /* End of RelationalOperator: '<S194>/Comparison6' */

    /* Outputs for Atomic SubSystem: '<S216>/EdgeFalling1' */
    /* Logic: '<S219>/AND' incorporates:
     *  UnitDelay: '<S219>/Unit Delay'
     */
    rtb_RelationalOperator3_h = (rtb_RelationalOperator3_h &&
        (HSWR_ac_DW.UnitDelay_DSTATE_e));

    /* Update for UnitDelay: '<S219>/Unit Delay' */
    HSWR_ac_DW.UnitDelay_DSTATE_e = rtb_LessThanorEqual_a;

    /* End of Outputs for SubSystem: '<S216>/EdgeFalling1' */

    /* Logic: '<S216>/Logical5' */
    rtb_LessThanorEqual_a = (rtb_NOT4 || rtb_RelationalOperator3_h);

    /* Outputs for Atomic SubSystem: '<S218>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S218>/Counter Reset  Enabled ' */
    /* Switch: '<S225>/Switch1' incorporates:
     *  Logic: '<S218>/Fail Counter Reset'
     *  Logic: '<S218>/NOT6'
     *  Switch: '<S225>/Switch2'
     *  Switch: '<S226>/Switch1'
     *  UnitDelay: '<S218>/Unit Delay'
     *  UnitDelay: '<S218>/Unit Delay1'
     */
    if ((rtb_LessThanorEqual_a || (HSWR_ac_DW.UnitDelay_DSTATE_i)) ||
            (HSWR_ac_DW.UnitDelay1_DSTATE_na))
    {
        /* Switch: '<S225>/Switch1' incorporates:
         *  Constant: '<S225>/Constant Value2'
         */
        VeHSWD_Cnt_CBC_FaultHigh_FailCnt = 0U;

        /* Switch: '<S226>/Switch1' incorporates:
         *  Constant: '<S226>/Constant Value2'
         */
        VeHSWD_Cnt_CBC_FaultHigh_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Comparison4_k4 && (VeHSWR_b_CBC_FaultHigh_FaultCheck))
        {
            /* Switch: '<S225>/Switch1' incorporates:
             *  Constant: '<S225>/Constant Value1'
             *  Sum: '<S225>/Subtraction'
             *  Switch: '<S225>/Switch2'
             *  UnitDelay: '<S225>/Unit Delay'
             */
            VeHSWD_Cnt_CBC_FaultHigh_FailCnt = (uint16)(((uint32)
                VeHSWD_Cnt_CBC_FaultHigh_FailCnt) + 1U);
        }

        /* Switch: '<S226>/Switch2' */
        if (rtb_Comparison4_k4)
        {
            /* Switch: '<S226>/Switch1' incorporates:
             *  Constant: '<S226>/Constant Value1'
             *  Sum: '<S226>/Subtraction'
             *  Switch: '<S226>/Switch2'
             *  UnitDelay: '<S226>/Unit Delay'
             */
            VeHSWD_Cnt_CBC_FaultHigh_SmpCnt = (uint16)(((uint32)
                VeHSWD_Cnt_CBC_FaultHigh_SmpCnt) + 1U);
        }

        /* End of Switch: '<S226>/Switch2' */
    }

    /* End of Switch: '<S225>/Switch1' */
    /* End of Outputs for SubSystem: '<S218>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S218>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S218>/Greater Than or Equal ' incorporates:
     *  Constant: '<S213>/Calib'
     */
    HSWR_ac_DW.UnitDelay1_DSTATE_na = (((float32)
        VeHSWD_Cnt_CBC_FaultHigh_FailCnt) >= KeHSWD_Cnt_CBC_HdAjar_HiFail);

    /* Logic: '<S218>/NOT5' incorporates:
     *  Constant: '<S214>/Calib'
     *  Logic: '<S218>/NOT3'
     *  RelationalOperator: '<S218>/Less Than  or Equal'
     */
    HSWR_ac_DW.UnitDelay_DSTATE_i = ((((float32)VeHSWD_Cnt_CBC_FaultHigh_SmpCnt)
        >= KeHSWD_Cnt_CBC_HdAjar_HiSmp) && (!HSWR_ac_DW.UnitDelay1_DSTATE_na));

    /* Switch: '<S231>/Switch1' incorporates:
     *  Constant: '<S224>/Constant Value'
     *  DataStoreWrite: '<S195>/DataStoreWrite4'
     *  Switch: '<S230>/Switch1'
     */
    if (VeHSWR_b_PostCodeClrDiagDsbl)
    {
        HSWR_ac_DW.NeHSWD_Cnt_CBC_FaultHigh_MFOP = 0U;
    }
    else
    {
        if (HSWR_ac_DW.UnitDelay_DSTATE_i)
        {
            /* MinMax: '<S224>/Minimum2' incorporates:
             *  DataStoreRead: '<S195>/DataStoreRead3'
             *  Switch: '<S230>/Switch1'
             */
            if (VeHSWD_Cnt_CBC_FaultHigh_FailCnt >
                    HSWR_ac_DW.NeHSWD_Cnt_CBC_FaultHigh_MFOP)
            {
                /* DataStoreWrite: '<S195>/DataStoreWrite4' incorporates:
                 *  Switch: '<S230>/Switch1'
                 */
                HSWR_ac_DW.NeHSWD_Cnt_CBC_FaultHigh_MFOP =
                    VeHSWD_Cnt_CBC_FaultHigh_FailCnt;
            }

            /* End of MinMax: '<S224>/Minimum2' */
        }
    }

    /* End of Switch: '<S231>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S216>/Fail' */
    HSWR_ac_Fail(HSWR_ac_DW.UnitDelay1_DSTATE_na,
                 &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHoo_os);

    /* End of Outputs for SubSystem: '<S216>/Fail' */

    /* Outputs for Enabled SubSystem: '<S216>/Init' */
    HSWR_ac_Init_e(rtb_LessThanorEqual_a,
                   &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHoo_os);

    /* End of Outputs for SubSystem: '<S216>/Init' */

    /* Outputs for Enabled SubSystem: '<S216>/Pass' */
    HSWR_ac_Pass(HSWR_ac_DW.UnitDelay_DSTATE_i,
                 &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHoo_os);

    /* End of Outputs for SubSystem: '<S216>/Pass' */

    /* RelationalOperator: '<S216>/Relational Operator' incorporates:
     *  Constant: '<S220>/Constant'
     *  VariantMerge generated from: '<S107>/FaultSts_EngHoodSwCktHi'
     */
    VeHSWD_b_PrimaryHighFault = (((uint32)
        HSWR_ac_B.VariantMergeForOutportFaultSts_EngHoo_os) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S111>/P257F_CBC_Flt_High' */

    /* VariantMerge generated from: '<S107>/PrimaryHoodFault' incorporates:
     *  Logic: '<S111>/LogicalOperator'
     */
    VeHSWD_b_PrimaryHoodFault = (((VeHSWD_b_PrimaryRangeFault) ||
        (VeHSWD_b_PrimaryLowFault)) || (VeHSWD_b_PrimaryHighFault));

    /* End of Outputs for SubSystem: '<S107>/PrimaryHoodSwitch' */
#else

    /* Outputs for Atomic SubSystem: '<S107>/PriHoodFltStub' */
    /* VariantMerge generated from: '<S107>/PrimaryHoodFault' incorporates:
     *  Constant: '<S110>/FALSE Constant'
     */
    VeHSWD_b_PrimaryHoodFault = false;

    /* VariantMerge generated from: '<S107>/FaultSts_EngHoodSwCktRngPerf' incorporates:
     *  Constant: '<S113>/Constant'
     */
    HSWR_ac_B.VariantMergeForOutportFaultSts_EngHoo_f1 = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S107>/FaultSts_EngHoodSwCktLo' incorporates:
     *  Constant: '<S112>/Constant'
     */
    HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_b = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S107>/FaultSts_EngHoodSwCktHi' incorporates:
     *  Constant: '<S114>/Constant'
     */
    HSWR_ac_B.VariantMergeForOutportFaultSts_EngHoo_os = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S107>/PriHoodFltStub' */
#endif

    /* End of Outputs for SubSystem: '<S103>/PrimaryHoodSwitch' */

    /* Outputs for Atomic SubSystem: '<S103>/SecodaryHoodSwitch' */
#if Rte_SysCon_Variant_HSWR_3

    /* Outputs for Atomic SubSystem: '<S108>/SecodaryHoodSwitch' */
    /* Outputs for Atomic SubSystem: '<S233>/P152F_Corr_Check' */
    /* Outputs for Atomic SubSystem: '<S233>/P152D_SecHood_Low' */
    /* Outputs for Atomic SubSystem: '<S233>/P152C_SecHood_Perf' */
    /* S-Function (sfix_bitop): '<S245>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S245>/StatusByte_EngHoodSw2CktHi'
     *  S-Function (sfix_bitop): '<S273>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S328>/Bitwise Operator2'
     */
    VeHSWR_b_CBC_Range_EnableCheck_tmp = ((sint32)
        HSWR_ac_DW.StatusByte_EngHoodSw2CktHi) & 1;

    /* Outputs for Atomic SubSystem: '<S233>/P152E_SecHood_High' */
    /* S-Function (sfix_bitop): '<S245>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S245>/StatusByte_EngHoodSw2CktHi'
     *  S-Function (sfix_bitop): '<S273>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S308>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S328>/Bitwise Operator1'
     */
    VeHSWR_b_CBC_Range_EnableCheck_tmp_0 = ((uint32)
        HSWR_ac_DW.StatusByte_EngHoodSw2CktHi) & 64U;

    /* S-Function (sfix_bitop): '<S246>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S246>/StatusByte_EngHoodSw2CktLo'
     *  S-Function (sfix_bitop): '<S281>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S300>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S329>/Bitwise Operator1'
     */
    VeHSWR_b_CBC_Range_EnableCheck_tmp_2 = ((uint32)
        HSWR_ac_DW.StatusByte_EngHoodSw2CktLo) & 64U;

    /* End of Outputs for SubSystem: '<S233>/P152D_SecHood_Low' */

    /* S-Function (sfix_bitop): '<S246>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S246>/StatusByte_EngHoodSw2CktLo'
     *  S-Function (sfix_bitop): '<S300>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S329>/Bitwise Operator2'
     */
    VeHSWR_b_CBC_Range_EnableCheck_tmp_1 = ((sint32)
        HSWR_ac_DW.StatusByte_EngHoodSw2CktLo) & 1;

    /* End of Outputs for SubSystem: '<S233>/P152E_SecHood_High' */
    /* End of Outputs for SubSystem: '<S233>/P152F_Corr_Check' */

    /* Logic: '<S242>/Logical1' incorporates:
     *  Constant: '<S245>/Constant1'
     *  Constant: '<S245>/Constant2'
     *  Constant: '<S246>/Constant1'
     *  Constant: '<S246>/Constant2'
     *  Constant: '<S247>/Calib'
     *  Constant: '<S248>/Calib'
     *  Logic: '<S242>/LogicalOperator'
     *  Logic: '<S242>/LogicalOperator1'
     *  Logic: '<S242>/LogicalOperator2'
     *  Logic: '<S245>/Logical Operator'
     *  Logic: '<S246>/Logical Operator'
     *  RelationalOperator: '<S245>/Relational Operator1'
     *  RelationalOperator: '<S245>/Relational Operator2'
     *  RelationalOperator: '<S246>/Relational Operator1'
     *  RelationalOperator: '<S246>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S245>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S245>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S246>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S246>/Bitwise Operator2'
     */
    VeHSWR_b_SecBnt_Performance_EnableCheck =
        ((((((KeHSWD_b_Enbl_SecBnt_Circuit_Perf) && rtb_Logical12) &&
            ((VeHSWR_b_CBC_Range_EnableCheck_tmp_1 <= 0) ||
             (VeHSWR_b_CBC_Range_EnableCheck_tmp_2 != 0U))) &&
           ((VeHSWR_b_CBC_Range_EnableCheck_tmp <= 0) ||
            (VeHSWR_b_CBC_Range_EnableCheck_tmp_0 != 0U))) &&
          (VeHSWR_b_IsDiagGlobalConditionsValid)) ||
         (KeHSWD_b_EnblOvrd_SecBnt_Circuit_Perf));

    /* Outputs for Atomic SubSystem: '<S233>/P152F_Corr_Check' */
    /* S-Function (sfix_bitop): '<S254>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S255>/StatusByte_EngHoodSw2AjDrv'
     *  S-Function (sfix_bitop): '<S327>/Bitwise Operator1'
     */
    VeHSWR_b_CBC_Range_EnableCheck_tmp_4 = ((uint32)
        HSWR_ac_DW.StatusByte_EngHoodSw2AjDrv) & 64U;

    /* End of Outputs for SubSystem: '<S233>/P152F_Corr_Check' */

    /* RelationalOperator: '<S254>/Relational Operator3' incorporates:
     *  Constant: '<S254>/Constant3'
     *  S-Function (sfix_bitop): '<S254>/Bitwise Operator2'
     */
    rtb_LessThanorEqual_a = (VeHSWR_b_CBC_Range_EnableCheck_tmp_4 == 0U);

    /* Outputs for Atomic SubSystem: '<S254>/EdgeFalling1' */
    /* Logic: '<S254>/Logical Operator' incorporates:
     *  Logic: '<S257>/OR1'
     */
    rtb_RelationalOperator3_h = !rtb_LessThanorEqual_a;

    /* End of Outputs for SubSystem: '<S254>/EdgeFalling1' */

    /* Logic: '<S254>/Logical1' incorporates:
     *  Constant: '<S253>/Calib'
     *  Constant: '<S254>/Constant1'
     *  DataStoreRead: '<S255>/StatusByte_EngHoodSw2AjDrv'
     *  Logic: '<S254>/Logical Operator'
     *  Logic: '<S254>/Logical10'
     *  Logic: '<S254>/Logical12'
     *  RelationalOperator: '<S254>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S254>/Bitwise Operator3'
     */
    rtb_Comparison4_k4 = ((VeHSWR_b_SecBnt_Performance_EnableCheck) &&
                          ((!KeHSWD_b_EngHoodSw2AjDrv_LtchEnbl) || (((((uint32)
        HSWR_ac_DW.StatusByte_EngHoodSw2AjDrv) & 1U) == 0U) ||
                            rtb_RelationalOperator3_h)));

    /* Logic: '<S243>/Logical2' incorporates:
     *  Constant: '<S249>/Calib'
     *  Constant: '<S250>/Calib'
     *  RelationalOperator: '<S243>/Comparison4'
     *  RelationalOperator: '<S243>/Comparison5'
     */
    VeHSWR_b_SecBnt_Performance_FaultCheck = ((KeHSWR_U_SecBnt_Performance_Max >
        HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy) &&
        (HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy >=
         KeHSWR_U_SecBnt_Performance_Min));

    /* Outputs for Atomic SubSystem: '<S254>/EdgeFalling1' */
    /* Logic: '<S257>/AND' incorporates:
     *  UnitDelay: '<S257>/Unit Delay'
     */
    rtb_RelationalOperator3_h = (rtb_RelationalOperator3_h &&
        (HSWR_ac_DW.UnitDelay_DSTATE_ow));

    /* Update for UnitDelay: '<S257>/Unit Delay' */
    HSWR_ac_DW.UnitDelay_DSTATE_ow = rtb_LessThanorEqual_a;

    /* End of Outputs for SubSystem: '<S254>/EdgeFalling1' */

    /* Logic: '<S254>/Logical5' */
    rtb_LessThanorEqual_a = (rtb_NOT4 || rtb_RelationalOperator3_h);

    /* Outputs for Atomic SubSystem: '<S256>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S256>/Counter Reset  Enabled ' */
    /* Switch: '<S263>/Switch1' incorporates:
     *  Logic: '<S256>/Fail Counter Reset'
     *  Logic: '<S256>/NOT6'
     *  Switch: '<S263>/Switch2'
     *  Switch: '<S264>/Switch1'
     *  UnitDelay: '<S256>/Unit Delay'
     *  UnitDelay: '<S256>/Unit Delay1'
     */
    if ((rtb_LessThanorEqual_a || (HSWR_ac_DW.UnitDelay_DSTATE_ag)) ||
            (HSWR_ac_DW.UnitDelay1_DSTATE_j))
    {
        /* Switch: '<S263>/Switch1' incorporates:
         *  Constant: '<S263>/Constant Value2'
         */
        VeHSWD_Cnt_SecBnt_Performance_FailCnt = 0U;

        /* Switch: '<S264>/Switch1' incorporates:
         *  Constant: '<S264>/Constant Value2'
         */
        VeHSWD_Cnt_SecBnt_Performance_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Comparison4_k4 && (VeHSWR_b_SecBnt_Performance_FaultCheck))
        {
            /* Switch: '<S263>/Switch1' incorporates:
             *  Constant: '<S263>/Constant Value1'
             *  Sum: '<S263>/Subtraction'
             *  Switch: '<S263>/Switch2'
             *  UnitDelay: '<S263>/Unit Delay'
             */
            VeHSWD_Cnt_SecBnt_Performance_FailCnt = (uint16)(((uint32)
                VeHSWD_Cnt_SecBnt_Performance_FailCnt) + 1U);
        }

        /* Switch: '<S264>/Switch2' */
        if (rtb_Comparison4_k4)
        {
            /* Switch: '<S264>/Switch1' incorporates:
             *  Constant: '<S264>/Constant Value1'
             *  Sum: '<S264>/Subtraction'
             *  Switch: '<S264>/Switch2'
             *  UnitDelay: '<S264>/Unit Delay'
             */
            VeHSWD_Cnt_SecBnt_Performance_SmpCnt = (uint16)(((uint32)
                VeHSWD_Cnt_SecBnt_Performance_SmpCnt) + 1U);
        }

        /* End of Switch: '<S264>/Switch2' */
    }

    /* End of Switch: '<S263>/Switch1' */
    /* End of Outputs for SubSystem: '<S256>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S256>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S256>/Greater Than or Equal ' incorporates:
     *  Constant: '<S251>/Calib'
     */
    HSWR_ac_DW.UnitDelay1_DSTATE_j = (((float32)
        VeHSWD_Cnt_SecBnt_Performance_FailCnt) >= KeHSWD_Cnt_SecBnt_PrfFail);

    /* Logic: '<S256>/NOT5' incorporates:
     *  Constant: '<S252>/Calib'
     *  Logic: '<S256>/NOT3'
     *  RelationalOperator: '<S256>/Less Than  or Equal'
     */
    HSWR_ac_DW.UnitDelay_DSTATE_ag = ((((float32)
        VeHSWD_Cnt_SecBnt_Performance_SmpCnt) >= KeHSWD_Cnt_SecBnt_PrfSmp) &&
        (!HSWR_ac_DW.UnitDelay1_DSTATE_j));

    /* Switch: '<S269>/Switch1' incorporates:
     *  Constant: '<S262>/Constant Value'
     *  DataStoreWrite: '<S244>/DataStoreWrite4'
     *  Switch: '<S268>/Switch1'
     */
    if (VeHSWR_b_PostCodeClrDiagDsbl)
    {
        HSWR_ac_DW.NeHSWD_Cnt_SecBnt_CircuitPerf_MFOP = 0U;
    }
    else
    {
        if (HSWR_ac_DW.UnitDelay_DSTATE_ag)
        {
            /* MinMax: '<S262>/Minimum2' incorporates:
             *  DataStoreRead: '<S244>/DataStoreRead3'
             *  Switch: '<S268>/Switch1'
             */
            if (VeHSWD_Cnt_SecBnt_Performance_FailCnt >
                    HSWR_ac_DW.NeHSWD_Cnt_SecBnt_CircuitPerf_MFOP)
            {
                /* DataStoreWrite: '<S244>/DataStoreWrite4' incorporates:
                 *  Switch: '<S268>/Switch1'
                 */
                HSWR_ac_DW.NeHSWD_Cnt_SecBnt_CircuitPerf_MFOP =
                    VeHSWD_Cnt_SecBnt_Performance_FailCnt;
            }

            /* End of MinMax: '<S262>/Minimum2' */
        }
    }

    /* End of Switch: '<S269>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S254>/Fail' */
    HSWR_ac_Fail(HSWR_ac_DW.UnitDelay1_DSTATE_j,
                 &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHoodSw);

    /* End of Outputs for SubSystem: '<S254>/Fail' */

    /* Outputs for Enabled SubSystem: '<S254>/Init' */
    HSWR_ac_Init_e(rtb_LessThanorEqual_a,
                   &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHoodSw);

    /* End of Outputs for SubSystem: '<S254>/Init' */

    /* Outputs for Enabled SubSystem: '<S254>/Pass' */
    HSWR_ac_Pass(HSWR_ac_DW.UnitDelay_DSTATE_ag,
                 &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHoodSw);

    /* End of Outputs for SubSystem: '<S254>/Pass' */

    /* RelationalOperator: '<S254>/Relational Operator' incorporates:
     *  Constant: '<S258>/Constant'
     *  VariantMerge generated from: '<S108>/FaultSts_EngHoodSw2AjDrv'
     */
    VeHSWD_b_SecondaryPerfFault = (((uint32)
        HSWR_ac_B.VariantMergeForOutportFaultSts_EngHoodSw) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S233>/P152C_SecHood_Perf' */

    /* Outputs for Atomic SubSystem: '<S233>/P152D_SecHood_Low' */
    /* Logic: '<S270>/Logical1' incorporates:
     *  Constant: '<S273>/Constant1'
     *  Constant: '<S273>/Constant2'
     *  Constant: '<S274>/Calib'
     *  Constant: '<S275>/Calib'
     *  Logic: '<S270>/LogicalOperator'
     *  Logic: '<S270>/LogicalOperator2'
     *  Logic: '<S273>/Logical Operator'
     *  RelationalOperator: '<S273>/Relational Operator1'
     *  RelationalOperator: '<S273>/Relational Operator2'
     */
    VeHSWR_b_SecBnt_CircuitLow_EnableCheck =
        (((((KeHSWD_b_Enbl_SecBnt_Circuit_Low) && rtb_Logical12) &&
           ((VeHSWR_b_CBC_Range_EnableCheck_tmp <= 0) ||
            (VeHSWR_b_CBC_Range_EnableCheck_tmp_0 != 0U))) &&
          (VeHSWR_b_IsDiagGlobalConditionsValid)) ||
         (KeHSWD_b_EnblOvrd_SecBnt_Circuit_Low));

    /* RelationalOperator: '<S281>/Relational Operator3' incorporates:
     *  Constant: '<S281>/Constant3'
     */
    rtb_LessThanorEqual_a = (VeHSWR_b_CBC_Range_EnableCheck_tmp_2 == 0U);

    /* Outputs for Atomic SubSystem: '<S281>/EdgeFalling1' */
    /* Logic: '<S281>/Logical Operator' incorporates:
     *  Logic: '<S284>/OR1'
     */
    rtb_RelationalOperator3_h = !rtb_LessThanorEqual_a;

    /* End of Outputs for SubSystem: '<S281>/EdgeFalling1' */

    /* Logic: '<S281>/Logical1' incorporates:
     *  Constant: '<S280>/Calib'
     *  Constant: '<S281>/Constant1'
     *  DataStoreRead: '<S282>/StatusByte_EngHoodSw2CktLo'
     *  Logic: '<S281>/Logical Operator'
     *  Logic: '<S281>/Logical10'
     *  Logic: '<S281>/Logical12'
     *  RelationalOperator: '<S281>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S281>/Bitwise Operator3'
     */
    rtb_Comparison4_k4 = ((VeHSWR_b_SecBnt_CircuitLow_EnableCheck) &&
                          ((!KeHSWD_b_EngHoodSw2CktLo_LtchEnbl) || (((((uint32)
        HSWR_ac_DW.StatusByte_EngHoodSw2CktLo) & 1U) == 0U) ||
                            rtb_RelationalOperator3_h)));

    /* Logic: '<S271>/Logical2' incorporates:
     *  Constant: '<S276>/Calib'
     *  Constant: '<S277>/Calib'
     *  RelationalOperator: '<S271>/Comparison4'
     *  RelationalOperator: '<S271>/Comparison5'
     */
    VeHSWR_b_SecBnt_CircuitLow_FaultCheck = ((KeHSWR_U_SecBnt_ShortedLow_Max >
        HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy) &&
        (HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy >=
         KeHSWR_U_SecBnt_ShortedLow_Min));

    /* Outputs for Atomic SubSystem: '<S281>/EdgeFalling1' */
    /* Logic: '<S284>/AND' incorporates:
     *  UnitDelay: '<S284>/Unit Delay'
     */
    rtb_RelationalOperator3_h = (rtb_RelationalOperator3_h &&
        (HSWR_ac_DW.UnitDelay_DSTATE_gk));

    /* Update for UnitDelay: '<S284>/Unit Delay' */
    HSWR_ac_DW.UnitDelay_DSTATE_gk = rtb_LessThanorEqual_a;

    /* End of Outputs for SubSystem: '<S281>/EdgeFalling1' */

    /* Logic: '<S281>/Logical5' */
    rtb_LessThanorEqual_a = (rtb_NOT4 || rtb_RelationalOperator3_h);

    /* Outputs for Atomic SubSystem: '<S283>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S283>/Counter Reset  Enabled ' */
    /* Switch: '<S290>/Switch1' incorporates:
     *  Logic: '<S283>/Fail Counter Reset'
     *  Logic: '<S283>/NOT6'
     *  Switch: '<S290>/Switch2'
     *  Switch: '<S291>/Switch1'
     *  UnitDelay: '<S283>/Unit Delay'
     *  UnitDelay: '<S283>/Unit Delay1'
     */
    if ((rtb_LessThanorEqual_a || (HSWR_ac_DW.UnitDelay_DSTATE_hj)) ||
            (HSWR_ac_DW.UnitDelay1_DSTATE_n))
    {
        /* Switch: '<S290>/Switch1' incorporates:
         *  Constant: '<S290>/Constant Value2'
         */
        VeHSWD_Cnt_SecBnt_CircuitLow_FailCnt = 0U;

        /* Switch: '<S291>/Switch1' incorporates:
         *  Constant: '<S291>/Constant Value2'
         */
        VeHSWD_Cnt_SecBnt_CircuitLow_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Comparison4_k4 && (VeHSWR_b_SecBnt_CircuitLow_FaultCheck))
        {
            /* Switch: '<S290>/Switch1' incorporates:
             *  Constant: '<S290>/Constant Value1'
             *  Sum: '<S290>/Subtraction'
             *  Switch: '<S290>/Switch2'
             *  UnitDelay: '<S290>/Unit Delay'
             */
            VeHSWD_Cnt_SecBnt_CircuitLow_FailCnt = (uint16)(((uint32)
                VeHSWD_Cnt_SecBnt_CircuitLow_FailCnt) + 1U);
        }

        /* Switch: '<S291>/Switch2' */
        if (rtb_Comparison4_k4)
        {
            /* Switch: '<S291>/Switch1' incorporates:
             *  Constant: '<S291>/Constant Value1'
             *  Sum: '<S291>/Subtraction'
             *  Switch: '<S291>/Switch2'
             *  UnitDelay: '<S291>/Unit Delay'
             */
            VeHSWD_Cnt_SecBnt_CircuitLow_SmpCnt = (uint16)(((uint32)
                VeHSWD_Cnt_SecBnt_CircuitLow_SmpCnt) + 1U);
        }

        /* End of Switch: '<S291>/Switch2' */
    }

    /* End of Switch: '<S290>/Switch1' */
    /* End of Outputs for SubSystem: '<S283>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S283>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S283>/Greater Than or Equal ' incorporates:
     *  Constant: '<S278>/Calib'
     */
    HSWR_ac_DW.UnitDelay1_DSTATE_n = (((float32)
        VeHSWD_Cnt_SecBnt_CircuitLow_FailCnt) >= KeHSWD_Cnt_SecBnt_LoFail);

    /* Logic: '<S283>/NOT5' incorporates:
     *  Constant: '<S279>/Calib'
     *  Logic: '<S283>/NOT3'
     *  RelationalOperator: '<S283>/Less Than  or Equal'
     */
    HSWR_ac_DW.UnitDelay_DSTATE_hj = ((((float32)
        VeHSWD_Cnt_SecBnt_CircuitLow_SmpCnt) >= KeHSWD_Cnt_SecBnt_LoSmp) &&
        (!HSWR_ac_DW.UnitDelay1_DSTATE_n));

    /* Switch: '<S296>/Switch1' incorporates:
     *  Constant: '<S289>/Constant Value'
     *  DataStoreWrite: '<S272>/DataStoreWrite4'
     *  Switch: '<S295>/Switch1'
     */
    if (VeHSWR_b_PostCodeClrDiagDsbl)
    {
        HSWR_ac_DW.NeHSWD_Cnt_SecBnt_CircuitLow_MFOP = 0U;
    }
    else
    {
        if (HSWR_ac_DW.UnitDelay_DSTATE_hj)
        {
            /* MinMax: '<S289>/Minimum2' incorporates:
             *  DataStoreRead: '<S272>/DataStoreRead3'
             *  Switch: '<S295>/Switch1'
             */
            if (VeHSWD_Cnt_SecBnt_CircuitLow_FailCnt >
                    HSWR_ac_DW.NeHSWD_Cnt_SecBnt_CircuitLow_MFOP)
            {
                /* DataStoreWrite: '<S272>/DataStoreWrite4' incorporates:
                 *  Switch: '<S295>/Switch1'
                 */
                HSWR_ac_DW.NeHSWD_Cnt_SecBnt_CircuitLow_MFOP =
                    VeHSWD_Cnt_SecBnt_CircuitLow_FailCnt;
            }

            /* End of MinMax: '<S289>/Minimum2' */
        }
    }

    /* End of Switch: '<S296>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S281>/Fail' */
    HSWR_ac_Fail(HSWR_ac_DW.UnitDelay1_DSTATE_n,
                 &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_f);

    /* End of Outputs for SubSystem: '<S281>/Fail' */

    /* Outputs for Enabled SubSystem: '<S281>/Init' */
    HSWR_ac_Init_e(rtb_LessThanorEqual_a,
                   &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_f);

    /* End of Outputs for SubSystem: '<S281>/Init' */

    /* Outputs for Enabled SubSystem: '<S281>/Pass' */
    HSWR_ac_Pass(HSWR_ac_DW.UnitDelay_DSTATE_hj,
                 &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_f);

    /* End of Outputs for SubSystem: '<S281>/Pass' */

    /* RelationalOperator: '<S281>/Relational Operator' incorporates:
     *  Constant: '<S285>/Constant'
     *  VariantMerge generated from: '<S108>/FaultSts_EngHoodSw2CktLo'
     */
    VeHSWD_b_SecondaryLowFault = (((uint32)
        HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_f) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S233>/P152D_SecHood_Low' */

    /* Outputs for Atomic SubSystem: '<S233>/P152E_SecHood_High' */
    /* Logic: '<S297>/Logical1' incorporates:
     *  Constant: '<S300>/Constant1'
     *  Constant: '<S300>/Constant2'
     *  Constant: '<S301>/Calib'
     *  Constant: '<S302>/Calib'
     *  Logic: '<S297>/LogicalOperator'
     *  Logic: '<S297>/LogicalOperator2'
     *  Logic: '<S300>/Logical Operator'
     *  RelationalOperator: '<S300>/Relational Operator1'
     *  RelationalOperator: '<S300>/Relational Operator2'
     */
    VeHSWR_b_SecBnt_CircuitHigh_EnableCheck =
        (((((KeHSWD_b_Enbl_SecBnt_Circuit_High) && rtb_Logical12) &&
           ((VeHSWR_b_CBC_Range_EnableCheck_tmp_1 <= 0) ||
            (VeHSWR_b_CBC_Range_EnableCheck_tmp_2 != 0U))) &&
          (VeHSWR_b_IsDiagGlobalConditionsValid)) ||
         (KeHSWD_b_EnblOvrd_SecBnt_Circuit_High));

    /* RelationalOperator: '<S308>/Relational Operator3' incorporates:
     *  Constant: '<S308>/Constant3'
     */
    rtb_LessThanorEqual_a = (VeHSWR_b_CBC_Range_EnableCheck_tmp_0 == 0U);

    /* Outputs for Atomic SubSystem: '<S308>/EdgeFalling1' */
    /* Logic: '<S308>/Logical Operator' incorporates:
     *  Logic: '<S311>/OR1'
     */
    rtb_RelationalOperator3_h = !rtb_LessThanorEqual_a;

    /* End of Outputs for SubSystem: '<S308>/EdgeFalling1' */

    /* Logic: '<S308>/Logical1' incorporates:
     *  Constant: '<S307>/Calib'
     *  Constant: '<S308>/Constant1'
     *  DataStoreRead: '<S309>/StatusByte_EngHoodSw2CktHi'
     *  Logic: '<S308>/Logical Operator'
     *  Logic: '<S308>/Logical10'
     *  Logic: '<S308>/Logical12'
     *  RelationalOperator: '<S308>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S308>/Bitwise Operator3'
     */
    rtb_Comparison4_k4 = ((VeHSWR_b_SecBnt_CircuitHigh_EnableCheck) &&
                          ((!KeHSWD_b_EngHoodSw2CktHi_LtchEnbl) || (((((uint32)
        HSWR_ac_DW.StatusByte_EngHoodSw2CktHi) & 1U) == 0U) ||
                            rtb_RelationalOperator3_h)));

    /* Logic: '<S298>/Logical2' incorporates:
     *  Constant: '<S303>/Calib'
     *  Constant: '<S304>/Calib'
     *  RelationalOperator: '<S298>/Comparison4'
     *  RelationalOperator: '<S298>/Comparison5'
     */
    VeHSWR_b_SecBnt_CircuitHigh_FaultCheck = ((KeHSWR_U_SecBnt_ShortedHigh_Max >
        HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy) &&
        (HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy >=
         KeHSWR_U_SecBnt_ShortedHigh_Min));

    /* Outputs for Atomic SubSystem: '<S308>/EdgeFalling1' */
    /* Logic: '<S311>/AND' incorporates:
     *  UnitDelay: '<S311>/Unit Delay'
     */
    rtb_RelationalOperator3_h = (rtb_RelationalOperator3_h &&
        (HSWR_ac_DW.UnitDelay_DSTATE_fz));

    /* Update for UnitDelay: '<S311>/Unit Delay' */
    HSWR_ac_DW.UnitDelay_DSTATE_fz = rtb_LessThanorEqual_a;

    /* End of Outputs for SubSystem: '<S308>/EdgeFalling1' */

    /* Logic: '<S308>/Logical5' */
    rtb_LessThanorEqual_a = (rtb_NOT4 || rtb_RelationalOperator3_h);

    /* Outputs for Atomic SubSystem: '<S310>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S310>/Counter Reset  Enabled ' */
    /* Switch: '<S317>/Switch1' incorporates:
     *  Logic: '<S310>/Fail Counter Reset'
     *  Logic: '<S310>/NOT6'
     *  Switch: '<S317>/Switch2'
     *  Switch: '<S318>/Switch1'
     *  UnitDelay: '<S310>/Unit Delay'
     *  UnitDelay: '<S310>/Unit Delay1'
     */
    if ((rtb_LessThanorEqual_a || (HSWR_ac_DW.UnitDelay_DSTATE_g)) ||
            (HSWR_ac_DW.UnitDelay1_DSTATE_a))
    {
        /* Switch: '<S317>/Switch1' incorporates:
         *  Constant: '<S317>/Constant Value2'
         */
        VeHSWD_Cnt_SecBnt_CircuitHigh_FailCnt = 0U;

        /* Switch: '<S318>/Switch1' incorporates:
         *  Constant: '<S318>/Constant Value2'
         */
        VeHSWD_Cnt_SecBnt_CircuitHigh_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Comparison4_k4 && (VeHSWR_b_SecBnt_CircuitHigh_FaultCheck))
        {
            /* Switch: '<S317>/Switch1' incorporates:
             *  Constant: '<S317>/Constant Value1'
             *  Sum: '<S317>/Subtraction'
             *  Switch: '<S317>/Switch2'
             *  UnitDelay: '<S317>/Unit Delay'
             */
            VeHSWD_Cnt_SecBnt_CircuitHigh_FailCnt = (uint16)(((uint32)
                VeHSWD_Cnt_SecBnt_CircuitHigh_FailCnt) + 1U);
        }

        /* Switch: '<S318>/Switch2' */
        if (rtb_Comparison4_k4)
        {
            /* Switch: '<S318>/Switch1' incorporates:
             *  Constant: '<S318>/Constant Value1'
             *  Sum: '<S318>/Subtraction'
             *  Switch: '<S318>/Switch2'
             *  UnitDelay: '<S318>/Unit Delay'
             */
            VeHSWD_Cnt_SecBnt_CircuitHigh_SmpCnt = (uint16)(((uint32)
                VeHSWD_Cnt_SecBnt_CircuitHigh_SmpCnt) + 1U);
        }

        /* End of Switch: '<S318>/Switch2' */
    }

    /* End of Switch: '<S317>/Switch1' */
    /* End of Outputs for SubSystem: '<S310>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S310>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S310>/Greater Than or Equal ' incorporates:
     *  Constant: '<S305>/Calib'
     */
    HSWR_ac_DW.UnitDelay1_DSTATE_a = (((float32)
        VeHSWD_Cnt_SecBnt_CircuitHigh_FailCnt) >= KeHSWD_Cnt_SecBnt_HiFail);

    /* Logic: '<S310>/NOT5' incorporates:
     *  Constant: '<S306>/Calib'
     *  Logic: '<S310>/NOT3'
     *  RelationalOperator: '<S310>/Less Than  or Equal'
     */
    HSWR_ac_DW.UnitDelay_DSTATE_g = ((((float32)
        VeHSWD_Cnt_SecBnt_CircuitHigh_SmpCnt) >= KeHSWD_Cnt_SecBnt_HiSmp) &&
        (!HSWR_ac_DW.UnitDelay1_DSTATE_a));

    /* Switch: '<S323>/Switch1' incorporates:
     *  Constant: '<S316>/Constant Value'
     *  DataStoreWrite: '<S299>/DataStoreWrite4'
     *  Switch: '<S322>/Switch1'
     */
    if (VeHSWR_b_PostCodeClrDiagDsbl)
    {
        HSWR_ac_DW.NeHSWD_Cnt_SecBnt_CircuitHigh_MFOP = 0U;
    }
    else
    {
        if (HSWR_ac_DW.UnitDelay_DSTATE_g)
        {
            /* MinMax: '<S316>/Minimum2' incorporates:
             *  DataStoreRead: '<S299>/DataStoreRead3'
             *  Switch: '<S322>/Switch1'
             */
            if (VeHSWD_Cnt_SecBnt_CircuitHigh_FailCnt >
                    HSWR_ac_DW.NeHSWD_Cnt_SecBnt_CircuitHigh_MFOP)
            {
                /* DataStoreWrite: '<S299>/DataStoreWrite4' incorporates:
                 *  Switch: '<S322>/Switch1'
                 */
                HSWR_ac_DW.NeHSWD_Cnt_SecBnt_CircuitHigh_MFOP =
                    VeHSWD_Cnt_SecBnt_CircuitHigh_FailCnt;
            }

            /* End of MinMax: '<S316>/Minimum2' */
        }
    }

    /* End of Switch: '<S323>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S308>/Fail' */
    HSWR_ac_Fail(HSWR_ac_DW.UnitDelay1_DSTATE_a,
                 &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_j);

    /* End of Outputs for SubSystem: '<S308>/Fail' */

    /* Outputs for Enabled SubSystem: '<S308>/Init' */
    HSWR_ac_Init_e(rtb_LessThanorEqual_a,
                   &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_j);

    /* End of Outputs for SubSystem: '<S308>/Init' */

    /* Outputs for Enabled SubSystem: '<S308>/Pass' */
    HSWR_ac_Pass(HSWR_ac_DW.UnitDelay_DSTATE_g,
                 &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_j);

    /* End of Outputs for SubSystem: '<S308>/Pass' */

    /* RelationalOperator: '<S308>/Relational Operator' incorporates:
     *  Constant: '<S312>/Constant'
     *  VariantMerge generated from: '<S108>/FaultSts_EngHoodSw2CktHi'
     */
    VeHSWD_b_SecondaryHighFault = (((uint32)
        HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_j) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S233>/P152E_SecHood_High' */

    /* Outputs for Atomic SubSystem: '<S233>/P152F_Corr_Check' */
    /* Switch: '<S339>/Switch' incorporates:
     *  Constant: '<S333>/Constant1'
     *  Constant: '<S333>/Constant2'
     *  Constant: '<S336>/Calib'
     *  Constant: '<S340>/Constant1'
     *  Constant: '<S340>/Constant2'
     *  Constant: '<S341>/Constant1'
     *  Constant: '<S341>/Constant2'
     *  DataStoreRead: '<S333>/StatusByte_HiSpdCANCommBus'
     *  DataStoreRead: '<S340>/StatusByte_HiSpdFD_CAN3CommBus'
     *  DataStoreRead: '<S341>/StatusByte_HiSpdFD_CAN3CommBusPerf'
     *  Logic: '<S324>/AND'
     *  Logic: '<S333>/Logical Operator'
     *  Logic: '<S340>/Logical Operator'
     *  Logic: '<S341>/Logical Operator'
     *  RelationalOperator: '<S333>/Relational Operator1'
     *  RelationalOperator: '<S333>/Relational Operator2'
     *  RelationalOperator: '<S340>/Relational Operator1'
     *  RelationalOperator: '<S340>/Relational Operator2'
     *  RelationalOperator: '<S341>/Relational Operator1'
     *  RelationalOperator: '<S341>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S333>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S333>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S340>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S340>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S341>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S341>/Bitwise Operator2'
     */
    if (KeHSWD_b_EnblNewBusOffChck)
    {
        rtb_LessThanorEqual_a = ((((((uint32)
            HSWR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus) & 1U) != 0U) &&
            ((((uint32)HSWR_ac_DW.StatusByte_HiSpdFD_CAN3CommBus) & 64U) == 0U))
            && (((((uint32)HSWR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf) & 1U)
                 != 0U) && ((((uint32)
                              HSWR_ac_DW.StatusByte_HiSpdFD_CAN3CommBusPerf) &
                             64U) == 0U)));
    }
    else
    {
        rtb_LessThanorEqual_a = (((((sint32)
            HSWR_ac_DW.StatusByte_HiSpdCANCommBus) & 1) > 0) && ((((uint32)
            HSWR_ac_DW.StatusByte_HiSpdCANCommBus) & 64U) == 0U));
    }

    /* End of Switch: '<S339>/Switch' */

    /* Logic: '<S324>/Logical1' incorporates:
     *  Constant: '<S327>/Constant1'
     *  Constant: '<S327>/Constant2'
     *  Constant: '<S328>/Constant1'
     *  Constant: '<S328>/Constant2'
     *  Constant: '<S329>/Constant1'
     *  Constant: '<S329>/Constant2'
     *  Constant: '<S330>/Constant1'
     *  Constant: '<S330>/Constant2'
     *  Constant: '<S331>/Constant1'
     *  Constant: '<S331>/Constant2'
     *  Constant: '<S332>/Constant1'
     *  Constant: '<S332>/Constant2'
     *  Constant: '<S334>/Constant1'
     *  Constant: '<S334>/Constant2'
     *  Constant: '<S335>/Constant1'
     *  Constant: '<S335>/Constant2'
     *  Constant: '<S337>/Calib'
     *  Constant: '<S338>/Calib'
     *  DataStoreRead: '<S327>/StatusByte_EngHoodSw2AjDrv'
     *  DataStoreRead: '<S330>/StatusByte_EngHoodSwCktHi'
     *  DataStoreRead: '<S331>/StatusByte_EngHoodSwCktLo'
     *  DataStoreRead: '<S332>/StatusByte_EngHoodSwCktRngPerf'
     *  DataStoreRead: '<S334>/StatusByte_InvData_BCM'
     *  DataStoreRead: '<S335>/StatusByte_LostCommBCM'
     *  Logic: '<S324>/LogicalOperator'
     *  Logic: '<S324>/LogicalOperator1'
     *  Logic: '<S324>/LogicalOperator2'
     *  Logic: '<S327>/Logical Operator'
     *  Logic: '<S328>/Logical Operator'
     *  Logic: '<S329>/Logical Operator'
     *  Logic: '<S330>/Logical Operator'
     *  Logic: '<S331>/Logical Operator'
     *  Logic: '<S332>/Logical Operator'
     *  Logic: '<S334>/Logical Operator'
     *  Logic: '<S335>/Logical Operator'
     *  RelationalOperator: '<S327>/Relational Operator1'
     *  RelationalOperator: '<S327>/Relational Operator2'
     *  RelationalOperator: '<S328>/Relational Operator1'
     *  RelationalOperator: '<S328>/Relational Operator2'
     *  RelationalOperator: '<S329>/Relational Operator1'
     *  RelationalOperator: '<S329>/Relational Operator2'
     *  RelationalOperator: '<S330>/Relational Operator1'
     *  RelationalOperator: '<S330>/Relational Operator2'
     *  RelationalOperator: '<S331>/Relational Operator1'
     *  RelationalOperator: '<S331>/Relational Operator2'
     *  RelationalOperator: '<S332>/Relational Operator1'
     *  RelationalOperator: '<S332>/Relational Operator2'
     *  RelationalOperator: '<S334>/Relational Operator1'
     *  RelationalOperator: '<S334>/Relational Operator2'
     *  RelationalOperator: '<S335>/Relational Operator1'
     *  RelationalOperator: '<S335>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S327>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S330>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S330>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S331>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S331>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S332>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S332>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S334>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S334>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S335>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S335>/Bitwise Operator2'
     */
    VeHSWR_b_SecBnt_Correlation_EnableCheck =
        (((((KeHSWD_b_Enbl_CBCSec_Correlation_Check) && rtb_Logical12) &&
           (((((((((((((sint32)HSWR_ac_DW.StatusByte_InvData_BCM) & 1) <= 0) ||
                    ((((uint32)HSWR_ac_DW.StatusByte_InvData_BCM) & 64U) != 0U))
                   && (((((sint32)HSWR_ac_DW.StatusByte_LostCommBCM) & 1) <= 0) ||
                       ((((uint32)HSWR_ac_DW.StatusByte_LostCommBCM) & 64U) !=
                        0U))) && (!rtb_LessThanorEqual_a)) && (((((sint32)
                     HSWR_ac_DW.StatusByte_EngHoodSwCktRngPerf) & 1) <= 0) ||
                  ((((uint32)HSWR_ac_DW.StatusByte_EngHoodSwCktRngPerf) & 64U)
                   != 0U))) && (((((sint32)HSWR_ac_DW.StatusByte_EngHoodSwCktLo)
                   & 1) <= 0) || ((((uint32)HSWR_ac_DW.StatusByte_EngHoodSwCktLo)
                   & 64U) != 0U))) && (((((sint32)
                   HSWR_ac_DW.StatusByte_EngHoodSwCktHi) & 1) <= 0) ||
                ((((uint32)HSWR_ac_DW.StatusByte_EngHoodSwCktHi) & 64U) != 0U)))
              && (((((sint32)HSWR_ac_DW.StatusByte_EngHoodSw2AjDrv) & 1) <= 0) ||
                  (VeHSWR_b_CBC_Range_EnableCheck_tmp_4 != 0U))) &&
             ((VeHSWR_b_CBC_Range_EnableCheck_tmp_1 <= 0) ||
              (VeHSWR_b_CBC_Range_EnableCheck_tmp_2 != 0U))) &&
            ((VeHSWR_b_CBC_Range_EnableCheck_tmp <= 0) ||
             (VeHSWR_b_CBC_Range_EnableCheck_tmp_0 != 0U)))) &&
          (VeHSWR_b_IsDiagGlobalConditionsValid)) ||
         (KeHSWD_b_EnblOvrd_CBCSec_Correlation_Check));

    /* RelationalOperator: '<S345>/Relational Operator3' incorporates:
     *  Constant: '<S345>/Constant3'
     *  DataStoreRead: '<S346>/StatusByte_EngHoodSwCorr'
     *  S-Function (sfix_bitop): '<S345>/Bitwise Operator2'
     */
    rtb_Comparison4_k4 = ((((uint32)HSWR_ac_DW.StatusByte_EngHoodSwCorr) & 64U) ==
                          0U);

    /* Outputs for Atomic SubSystem: '<S345>/EdgeFalling1' */
    /* Logic: '<S345>/Logical Operator' incorporates:
     *  Logic: '<S348>/OR1'
     */
    rtb_LessThanorEqual_a = !rtb_Comparison4_k4;

    /* End of Outputs for SubSystem: '<S345>/EdgeFalling1' */

    /* Logic: '<S345>/Logical1' incorporates:
     *  Constant: '<S344>/Calib'
     *  Constant: '<S345>/Constant1'
     *  DataStoreRead: '<S346>/StatusByte_EngHoodSwCorr'
     *  Logic: '<S345>/Logical Operator'
     *  Logic: '<S345>/Logical10'
     *  Logic: '<S345>/Logical12'
     *  RelationalOperator: '<S345>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S345>/Bitwise Operator3'
     */
    rtb_Logical12 = ((VeHSWR_b_SecBnt_Correlation_EnableCheck) &&
                     ((!KeHSWD_b_EngHoodSwCorr_LtchEnbl) || (((((uint32)
                          HSWR_ac_DW.StatusByte_EngHoodSwCorr) & 1U) == 0U) ||
                       rtb_LessThanorEqual_a)));

    /* Logic: '<S325>/Logical1' incorporates:
     *  Logic: '<S325>/Logical'
     *  Logic: '<S325>/Logical2'
     *  Logic: '<S325>/Logical3'
     *  Logic: '<S325>/Logical5'
     */
    VeHSWR_b_SecBnt_Correlation_FaultCheck =
        (((!HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_l) &&
          (HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_oe)) ||
         ((HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_l) &&
          (!HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_oe)));

    /* Outputs for Atomic SubSystem: '<S345>/EdgeFalling1' */
    /* Logic: '<S348>/AND' incorporates:
     *  UnitDelay: '<S348>/Unit Delay'
     */
    rtb_LessThanorEqual_a = (rtb_LessThanorEqual_a &&
        (HSWR_ac_DW.UnitDelay_DSTATE_la));

    /* Update for UnitDelay: '<S348>/Unit Delay' */
    HSWR_ac_DW.UnitDelay_DSTATE_la = rtb_Comparison4_k4;

    /* End of Outputs for SubSystem: '<S345>/EdgeFalling1' */

    /* Logic: '<S345>/Logical5' */
    rtb_NOT4 = (rtb_NOT4 || rtb_LessThanorEqual_a);

    /* Outputs for Atomic SubSystem: '<S347>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S347>/Counter Reset  Enabled ' */
    /* Switch: '<S354>/Switch1' incorporates:
     *  Logic: '<S347>/Fail Counter Reset'
     *  Logic: '<S347>/NOT6'
     *  Switch: '<S354>/Switch2'
     *  Switch: '<S355>/Switch1'
     *  UnitDelay: '<S347>/Unit Delay'
     *  UnitDelay: '<S347>/Unit Delay1'
     */
    if ((rtb_NOT4 || (HSWR_ac_DW.UnitDelay_DSTATE_a)) ||
            (HSWR_ac_DW.UnitDelay1_DSTATE))
    {
        /* Switch: '<S354>/Switch1' incorporates:
         *  Constant: '<S354>/Constant Value2'
         */
        VeHSWD_Cnt_SecBnt_Correlation_FailCnt = 0U;

        /* Switch: '<S355>/Switch1' incorporates:
         *  Constant: '<S355>/Constant Value2'
         */
        VeHSWD_Cnt_SecBnt_Correlation_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical12 && (VeHSWR_b_SecBnt_Correlation_FaultCheck))
        {
            /* Switch: '<S354>/Switch1' incorporates:
             *  Constant: '<S354>/Constant Value1'
             *  Sum: '<S354>/Subtraction'
             *  Switch: '<S354>/Switch2'
             *  UnitDelay: '<S354>/Unit Delay'
             */
            VeHSWD_Cnt_SecBnt_Correlation_FailCnt = (uint16)(((uint32)
                VeHSWD_Cnt_SecBnt_Correlation_FailCnt) + 1U);
        }

        /* Switch: '<S355>/Switch2' */
        if (rtb_Logical12)
        {
            /* Switch: '<S355>/Switch1' incorporates:
             *  Constant: '<S355>/Constant Value1'
             *  Sum: '<S355>/Subtraction'
             *  Switch: '<S355>/Switch2'
             *  UnitDelay: '<S355>/Unit Delay'
             */
            VeHSWD_Cnt_SecBnt_Correlation_SmpCnt = (uint16)(((uint32)
                VeHSWD_Cnt_SecBnt_Correlation_SmpCnt) + 1U);
        }

        /* End of Switch: '<S355>/Switch2' */
    }

    /* End of Switch: '<S354>/Switch1' */
    /* End of Outputs for SubSystem: '<S347>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S347>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S347>/Greater Than or Equal ' incorporates:
     *  Constant: '<S342>/Calib'
     */
    HSWR_ac_DW.UnitDelay1_DSTATE = (((float32)
        VeHSWD_Cnt_SecBnt_Correlation_FailCnt) >= KeHSWD_Cnt_CBCSec_CcFail);

    /* Logic: '<S347>/NOT5' incorporates:
     *  Constant: '<S343>/Calib'
     *  Logic: '<S347>/NOT3'
     *  RelationalOperator: '<S347>/Less Than  or Equal'
     */
    HSWR_ac_DW.UnitDelay_DSTATE_a = ((((float32)
        VeHSWD_Cnt_SecBnt_Correlation_SmpCnt) >= KeHSWD_Cnt_CBCSec_CcSmp) &&
        (!HSWR_ac_DW.UnitDelay1_DSTATE));

    /* Switch: '<S360>/Switch1' incorporates:
     *  Constant: '<S353>/Constant Value'
     *  DataStoreWrite: '<S326>/DataStoreWrite4'
     *  Switch: '<S359>/Switch1'
     */
    if (VeHSWR_b_PostCodeClrDiagDsbl)
    {
        HSWR_ac_DW.NeHSWD_Cnt_SecBnt_Correlation_MFOP = 0U;
    }
    else
    {
        if (HSWR_ac_DW.UnitDelay_DSTATE_a)
        {
            /* MinMax: '<S353>/Minimum2' incorporates:
             *  DataStoreRead: '<S326>/DataStoreRead3'
             *  Switch: '<S359>/Switch1'
             */
            if (VeHSWD_Cnt_SecBnt_Correlation_FailCnt >
                    HSWR_ac_DW.NeHSWD_Cnt_SecBnt_Correlation_MFOP)
            {
                /* DataStoreWrite: '<S326>/DataStoreWrite4' incorporates:
                 *  Switch: '<S359>/Switch1'
                 */
                HSWR_ac_DW.NeHSWD_Cnt_SecBnt_Correlation_MFOP =
                    VeHSWD_Cnt_SecBnt_Correlation_FailCnt;
            }

            /* End of MinMax: '<S353>/Minimum2' */
        }
    }

    /* End of Switch: '<S360>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S345>/Fail' */
    HSWR_ac_Fail(HSWR_ac_DW.UnitDelay1_DSTATE,
                 &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_o);

    /* End of Outputs for SubSystem: '<S345>/Fail' */

    /* Outputs for Enabled SubSystem: '<S345>/Init' */
    HSWR_ac_Init_e(rtb_NOT4, &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_o);

    /* End of Outputs for SubSystem: '<S345>/Init' */

    /* Outputs for Enabled SubSystem: '<S345>/Pass' */
    HSWR_ac_Pass(HSWR_ac_DW.UnitDelay_DSTATE_a,
                 &HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_o);

    /* End of Outputs for SubSystem: '<S345>/Pass' */

    /* RelationalOperator: '<S345>/Relational Operator' incorporates:
     *  Constant: '<S349>/Constant'
     *  VariantMerge generated from: '<S108>/FaultSts_EngHoodSwCorr'
     */
    VeHSWD_b_SecondaryCorrFault = (((uint32)
        HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_o) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S233>/P152F_Corr_Check' */

    /* VariantMerge generated from: '<S108>/SecondaryHoodFault' incorporates:
     *  Logic: '<S233>/LogicalOperator'
     */
    VeHSWD_b_SecondaryHoodFault = ((((VeHSWD_b_SecondaryPerfFault) ||
        (VeHSWD_b_SecondaryLowFault)) || (VeHSWD_b_SecondaryHighFault)) ||
        (VeHSWD_b_SecondaryCorrFault));

    /* End of Outputs for SubSystem: '<S108>/SecodaryHoodSwitch' */
#else

    /* Outputs for Atomic SubSystem: '<S108>/SecHoodFltStub' */
    /* VariantMerge generated from: '<S108>/SecondaryHoodFault' incorporates:
     *  Constant: '<S232>/FALSE Constant'
     */
    VeHSWD_b_SecondaryHoodFault = false;

    /* VariantMerge generated from: '<S108>/FaultSts_EngHoodSw2AjDrv' incorporates:
     *  Constant: '<S234>/Constant'
     */
    HSWR_ac_B.VariantMergeForOutportFaultSts_EngHoodSw = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S108>/FaultSts_EngHoodSw2CktLo' incorporates:
     *  Constant: '<S235>/Constant'
     */
    HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_f = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S108>/FaultSts_EngHoodSw2CktHi' incorporates:
     *  Constant: '<S236>/Constant'
     */
    HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_j = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S108>/FaultSts_EngHoodSwCorr' incorporates:
     *  Constant: '<S237>/Constant'
     */
    HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_o = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S108>/SecHoodFltStub' */
#endif

    /* End of Outputs for SubSystem: '<S103>/SecodaryHoodSwitch' */

    /* End of Outputs for S-Function (fcgen): '<S6>/FcnCallGen' */

    /* Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSw2AjDrv' incorporates:
     *  SignalConversion generated from: '<S6>/VeHSWR_e_FaultSts_EngHoodSw2AjDrv'
     *  VariantMerge generated from: '<S108>/FaultSts_EngHoodSw2AjDrv'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSw2AjDrv_Value
        (HSWR_ac_B.VariantMergeForOutportFaultSts_EngHoodSw);

    /* Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSw2CktHi' incorporates:
     *  SignalConversion generated from: '<S6>/VeHSWR_e_FaultSts_EngHoodSw2CktHi'
     *  VariantMerge generated from: '<S108>/FaultSts_EngHoodSw2CktHi'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSw2CktHi_Value
        (HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_j);

    /* Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSw2CktLo' incorporates:
     *  SignalConversion generated from: '<S6>/VeHSWR_e_FaultSts_EngHoodSw2CktLo'
     *  VariantMerge generated from: '<S108>/FaultSts_EngHoodSw2CktLo'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSw2CktLo_Value
        (HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_f);

    /* Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSwCktHi' incorporates:
     *  SignalConversion generated from: '<S6>/VeHSWR_e_FaultSts_EngHoodSwCktHi'
     *  VariantMerge generated from: '<S107>/FaultSts_EngHoodSwCktHi'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSwCktHi_Value
        (HSWR_ac_B.VariantMergeForOutportFaultSts_EngHoo_os);

    /* Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSwCktLo' incorporates:
     *  SignalConversion generated from: '<S6>/VeHSWR_e_FaultSts_EngHoodSwCktLo'
     *  VariantMerge generated from: '<S107>/FaultSts_EngHoodSwCktLo'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSwCktLo_Value
        (HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_b);

    /* Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSwCktRngPerf' incorporates:
     *  SignalConversion generated from: '<S6>/VeHSWR_e_FaultSts_EngHoodSwCktRngPerf'
     *  VariantMerge generated from: '<S107>/FaultSts_EngHoodSwCktRngPerf'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSwCktRngPerf_Value
        (HSWR_ac_B.VariantMergeForOutportFaultSts_EngHoo_f1);

    /* Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSwCorr' incorporates:
     *  SignalConversion generated from: '<S6>/VeHSWR_e_FaultSts_EngHoodSwCorr'
     *  VariantMerge generated from: '<S108>/FaultSts_EngHoodSwCorr'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSwCorr_Value
        (HSWR_ac_B.VariantMergeForOutportFaultSts_EngHood_o);

    /* Merge: '<Root>/PrimaryHoodFault_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S6>/PrimaryHoodFault_write'
     * */
    Rte_IrvWrite_HSWR_MedTEH_PrimaryHoodFault_write_IRV
        (VeHSWD_b_PrimaryHoodFault);

    /* Merge: '<Root>/SecondaryHoodFault_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S6>/SecondaryHoodFault_write'
     * */
    Rte_IrvWrite_HSWR_MedTEH_SecondaryHoodFault_write_IRV
        (VeHSWD_b_SecondaryHoodFault);

    /* End of Outputs for SubSystem: '<Root>/HSWR_MedTEH' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HSWR_4

FUNC(void, HSWR_CODE) FsftHSWR_b_CBC_BntAjrRwVlStsVolt(void)
{

#if Rte_SysCon_Variant_HSWR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHSWR_b_CBC_BntAjrRwVlStsVolt' */
    /* Merge: '<Root>/Merge_4' incorporates:
     *  Chart: '<S1>/FsftHSWR_b_CBC_BntAjrRwVlStsVoltChrt'
     *  SignalConversion generated from: '<S1>/VeHSWR_b_CBC_BntAjrRwVlStsVoltFA_write'
     */
    /* Gateway: FsftHSWR_b_CBC_BntAjrRwVlStsVolt/FsftHSWR_b_CBC_BntAjrRwVlStsVoltChrt */
    /* During: FsftHSWR_b_CBC_BntAjrRwVlStsVolt/FsftHSWR_b_CBC_BntAjrRwVlStsVoltChrt */
    /* Entry Internal: FsftHSWR_b_CBC_BntAjrRwVlStsVolt/FsftHSWR_b_CBC_BntAjrRwVlStsVoltChrt */
    /* Transition: '<S14>:2' */
    Rte_IrvWrite_FsftHSWR_b_CBC_BntAjrRwVlStsVolt_VeHSWR_b_CBC_BntAjrRwVlStsVoltFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftHSWR_b_CBC_BntAjrRwVlStsVolt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HSWR_4

FUNC(void, HSWR_CODE) FsftHSWR_e_CBC_BntAjrRwVlSts(void)
{

#if Rte_SysCon_Variant_HSWR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHSWR_e_CBC_BntAjrRwVlSts' */
    /* SignalConversion generated from: '<S2>/FsftHSWR_e_CBC_BntAjrRwVlStsChrt' incorporates:
     *  SignalConversion generated from: '<S2>/VeHSWR_b_CBC_BntAjrRwVlStsFA_write'
     */
    /* Gateway: FsftHSWR_e_CBC_BntAjrRwVlSts/FsftHSWR_e_CBC_BntAjrRwVlStsChrt */
    /* During: FsftHSWR_e_CBC_BntAjrRwVlSts/FsftHSWR_e_CBC_BntAjrRwVlStsChrt */
    /* Entry Internal: FsftHSWR_e_CBC_BntAjrRwVlSts/FsftHSWR_e_CBC_BntAjrRwVlStsChrt */
    /* Transition: '<S15>:2' */
#if !Rte_SysCon_Variant_HSWR_7 && Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    /* Merge: '<Root>/Merge_10' incorporates:
     *  Chart: '<S2>/FsftHSWR_e_CBC_BntAjrRwVlStsChrt'
     */
    Rte_IrvWrite_FsftHSWR_e_CBC_BntAjrRwVlSts_VeHSWR_b_CBC_BntAjrRwVlStsFA_write_IRV
        (true);

#endif

    /* End of SignalConversion generated from: '<S2>/FsftHSWR_e_CBC_BntAjrRwVlStsChrt' */

    /* Merge: '<Root>/Merge_9' incorporates:
     *  Chart: '<S2>/FsftHSWR_e_CBC_BntAjrRwVlStsChrt'
     *  SignalConversion generated from: '<S2>/VeHSWR_e_CBC_BntAjrRwVlSts_write'
     */
    Rte_IrvWrite_FsftHSWR_e_CBC_BntAjrRwVlSts_VeHSWR_e_CBC_BntAjrRwVlSts_write_IRV
        (CeHSWR_e_BntSts_Lvl_15);

    /* SignalConversion generated from: '<S2>/VeHSWR_e_Dbg_CBC_BntAjrRwVlSts_write' */
#if !Rte_SysCon_Variant_HSWR_7 && Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S2>/FsftHSWR_e_CBC_BntAjrRwVlStsChrt'
     */
    Rte_IrvWrite_FsftHSWR_e_CBC_BntAjrRwVlSts_VeHSWR_e_Dbg_CBC_BntAjrRwVlSts_write_IRV
        ((TeHSWR_e_Dbg_Status)3U);

#endif

    /* End of SignalConversion generated from: '<S2>/VeHSWR_e_Dbg_CBC_BntAjrRwVlSts_write' */
    /* End of Outputs for SubSystem: '<Root>/FsftHSWR_e_CBC_BntAjrRwVlSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HSWR_4

FUNC(void, HSWR_CODE) FsftHSWR_e_ECMHoodAjar(void)
{

#if Rte_SysCon_Variant_HSWR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHSWR_e_ECMHoodAjar' */
    /* Merge: '<Root>/Merge_7' incorporates:
     *  Chart: '<S3>/FsftHSWR_e_ECMHoodAjarChrt'
     *  SignalConversion generated from: '<S3>/VeHSWR_b_ECMHoodAjarFA_write'
     */
    /* Gateway: FsftHSWR_e_ECMHoodAjar/FsftHSWR_e_ECMHoodAjarChrt */
    /* During: FsftHSWR_e_ECMHoodAjar/FsftHSWR_e_ECMHoodAjarChrt */
    /* Entry Internal: FsftHSWR_e_ECMHoodAjar/FsftHSWR_e_ECMHoodAjarChrt */
    /* Transition: '<S16>:2' */
    Rte_IrvWrite_FsftHSWR_e_ECMHoodAjar_VeHSWR_b_ECMHoodAjarFA_write_IRV(true);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  Chart: '<S3>/FsftHSWR_e_ECMHoodAjarChrt'
     *  SignalConversion generated from: '<S3>/VeHSWR_e_Dbg_ECMHoodAjar_write'
     */
    Rte_IrvWrite_FsftHSWR_e_ECMHoodAjar_VeHSWR_e_Dbg_ECMHoodAjar_write_IRV
        (CeHSWR_e_Dbg_Failsoft);

    /* End of Outputs for SubSystem: '<Root>/FsftHSWR_e_ECMHoodAjar' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HSWR_4

FUNC(void, HSWR_CODE) FsftHSWR_e_RedntHdSwStat(void)
{

#if Rte_SysCon_Variant_HSWR_4

    /* Outputs for Function Call SubSystem: '<Root>/FsftHSWR_e_RedntHdSwStat' */
    /* Merge: '<Root>/Merge_6' incorporates:
     *  Chart: '<S4>/FsftHSWR_e_RedntHdSwStatChrt'
     *  SignalConversion generated from: '<S4>/VeHSWR_e_RedntHdSwStat_write'
     */
    /* Gateway: FsftHSWR_e_RedntHdSwStat/FsftHSWR_e_RedntHdSwStatChrt */
    /* During: FsftHSWR_e_RedntHdSwStat/FsftHSWR_e_RedntHdSwStatChrt */
    /* Entry Internal: FsftHSWR_e_RedntHdSwStat/FsftHSWR_e_RedntHdSwStatChrt */
    /* Transition: '<S17>:2' */
    Rte_IrvWrite_FsftHSWR_e_RedntHdSwStat_VeHSWR_e_RedntHdSwStat_write_IRV
        (CeHSWR_e_HoodOpen);

    /* End of Outputs for SubSystem: '<Root>/FsftHSWR_e_RedntHdSwStat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HSWR_4

FUNC(void, HSWR_CODE) PokeHSWR_U_CBC_BntAjrRwVlStsVolt(VAR(float32, AUTOMATIC)
    LeHSWR_U_CBC_BntAjrRwVlStsVolt, VAR(boolean, AUTOMATIC)
    LeHSWR_b_CBC_BntAjrRwVlStsVoltFA)
{

#if Rte_SysCon_Variant_HSWR_4

    float32 rtb_LeHSWR_U_CBC_BntAjrRwVlStsVolt_out;

#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean rtb_LeHSWR_b_CBC_BntAjrRwVlStsVoltFA_o_c;

#endif

#if !Rte_SysCon_Variant_HSWR_4

    UNUSED_PARAMETER(LeHSWR_U_CBC_BntAjrRwVlStsVolt);

#endif

#if !Rte_SysCon_Variant_HSWR_4

    UNUSED_PARAMETER(LeHSWR_b_CBC_BntAjrRwVlStsVoltFA);

#endif

#if Rte_SysCon_Variant_HSWR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHSWR_U_CBC_BntAjrRwVlStsVolt' */
    /* Chart: '<S9>/PokeHSWR_U_CBC_BntAjrRwVlStsVoltChrt' incorporates:
     *  SignalConversion generated from: '<S9>/LeHSWR_U_CBC_BntAjrRwVlStsVolt'
     *  SignalConversion generated from: '<S9>/LeHSWR_b_CBC_BntAjrRwVlStsVoltFA'
     */
    /* Gateway: PokeHSWR_U_CBC_BntAjrRwVlStsVolt/PokeHSWR_U_CBC_BntAjrRwVlStsVoltChrt */
    /* During: PokeHSWR_U_CBC_BntAjrRwVlStsVolt/PokeHSWR_U_CBC_BntAjrRwVlStsVoltChrt */
    /* Entry Internal: PokeHSWR_U_CBC_BntAjrRwVlStsVolt/PokeHSWR_U_CBC_BntAjrRwVlStsVoltChrt */
    /* Transition: '<S402>:2' */
    if (!LeHSWR_b_CBC_BntAjrRwVlStsVoltFA)
    {
        /* Transition: '<S402>:3' */
        /* Transition: '<S402>:15' */
        rtb_LeHSWR_U_CBC_BntAjrRwVlStsVolt_out = LeHSWR_U_CBC_BntAjrRwVlStsVolt;
        rtb_LeHSWR_b_CBC_BntAjrRwVlStsVoltFA_o_c = false;

        /* Transition: '<S402>:18' */
    }
    else
    {
        /* Transition: '<S402>:4' */
        rtb_LeHSWR_U_CBC_BntAjrRwVlStsVolt_out = 2.0F;
        rtb_LeHSWR_b_CBC_BntAjrRwVlStsVoltFA_o_c = true;
    }

    /* End of Chart: '<S9>/PokeHSWR_U_CBC_BntAjrRwVlStsVoltChrt' */

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S9>/VeHSWR_U_CBC_BntAjrRwVlStsVolt_write'
     * */
    Rte_IrvWrite_PokeHSWR_U_CBC_BntAjrRwVlStsVolt_VeHSWR_U_BntAjrRwVlStsVolt_write_IRV
        (rtb_LeHSWR_U_CBC_BntAjrRwVlStsVolt_out);

    /* Merge: '<Root>/Merge_4' incorporates:
     *  SignalConversion generated from: '<S9>/VeHSWR_b_CBC_BntAjrRwVlStsVoltFA_write'
     * */
    Rte_IrvWrite_PokeHSWR_U_CBC_BntAjrRwVlStsVolt_VeHSWR_b_CBC_BntAjrRwVlStsVoltFA_write_IRV
        (rtb_LeHSWR_b_CBC_BntAjrRwVlStsVoltFA_o_c);

    /* End of Outputs for SubSystem: '<Root>/PokeHSWR_U_CBC_BntAjrRwVlStsVolt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HSWR_4

FUNC(void, HSWR_CODE) PokeHSWR_e_CBC_BntAjrRwVlSts(VAR(sint16, AUTOMATIC)
    LeHSWR_e_CBC_BntAjrRwVlSts, VAR(boolean, AUTOMATIC)
    LeHSWR_b_CBC_BntAjrRwVlStsFA)
{

#if Rte_SysCon_Variant_HSWR_4

    sint16 rtb_LeHSWR_e_CBC_BntAjrRwVlSts_out_e;

#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean rtb_LeHSWR_b_CBC_BntAjrRwVlStsFA_out_c;

#endif

#if !Rte_SysCon_Variant_HSWR_4

    UNUSED_PARAMETER(LeHSWR_e_CBC_BntAjrRwVlSts);

#endif

#if !Rte_SysCon_Variant_HSWR_4

    UNUSED_PARAMETER(LeHSWR_b_CBC_BntAjrRwVlStsFA);

#endif

#if Rte_SysCon_Variant_HSWR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHSWR_e_CBC_BntAjrRwVlSts' */
    /* Chart: '<S10>/PokeHSWR_e_CBC_BntAjrRwVlStsChrt' incorporates:
     *  Constant: '<S403>/Calib'
     *  SignalConversion generated from: '<S10>/LeHSWR_b_CBC_BntAjrRwVlStsFA'
     *  SignalConversion generated from: '<S10>/LeHSWR_e_CBC_BntAjrRwVlSts'
     */
    /* Gateway: PokeHSWR_e_CBC_BntAjrRwVlSts/PokeHSWR_e_CBC_BntAjrRwVlStsChrt */
    /* During: PokeHSWR_e_CBC_BntAjrRwVlSts/PokeHSWR_e_CBC_BntAjrRwVlStsChrt */
    /* Entry Internal: PokeHSWR_e_CBC_BntAjrRwVlSts/PokeHSWR_e_CBC_BntAjrRwVlStsChrt */
    /* Transition: '<S404>:2' */
    if (!LeHSWR_b_CBC_BntAjrRwVlStsFA)
    {
        /* Transition: '<S404>:3' */
        /* Transition: '<S404>:15' */
        rtb_LeHSWR_e_CBC_BntAjrRwVlSts_out_e = KaHSWR_i_CBC_BntAjrRwVlSts_Map
            [(LeHSWR_e_CBC_BntAjrRwVlSts)];
        rtb_LeHSWR_b_CBC_BntAjrRwVlStsFA_out_c = false;

        /* Transition: '<S404>:18' */
    }
    else
    {
        /* Transition: '<S404>:4' */
        rtb_LeHSWR_e_CBC_BntAjrRwVlSts_out_e = CeHSWR_e_BntSts_Lvl_15;
        rtb_LeHSWR_b_CBC_BntAjrRwVlStsFA_out_c = true;
    }

    /* End of Chart: '<S10>/PokeHSWR_e_CBC_BntAjrRwVlStsChrt' */

    /* SignalConversion generated from: '<S10>/PokeHSWR_e_CBC_BntAjrRwVlStsChrt' incorporates:
     *  SignalConversion generated from: '<S10>/VeHSWR_b_CBC_BntAjrRwVlStsFA_write'
     */
#if !Rte_SysCon_Variant_HSWR_7 && Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    /* Merge: '<Root>/Merge_10' */
    Rte_IrvWrite_PokeHSWR_e_CBC_BntAjrRwVlSts_VeHSWR_b_CBC_BntAjrRwVlStsFA_write_IRV
        (rtb_LeHSWR_b_CBC_BntAjrRwVlStsFA_out_c);

#endif

    /* End of SignalConversion generated from: '<S10>/PokeHSWR_e_CBC_BntAjrRwVlStsChrt' */

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S10>/VeHSWR_e_CBC_BntAjrRwVlSts_write'
     * */
    Rte_IrvWrite_PokeHSWR_e_CBC_BntAjrRwVlSts_VeHSWR_e_CBC_BntAjrRwVlSts_write_IRV
        (rtb_LeHSWR_e_CBC_BntAjrRwVlSts_out_e);

    /* SignalConversion generated from: '<S10>/VeHSWR_e_Dbg_CBC_BntAjrRwVlSts_write' */
#if !Rte_SysCon_Variant_HSWR_7 && Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S10>/PokeHSWR_e_CBC_BntAjrRwVlStsChrt'
     */
    Rte_IrvWrite_PokeHSWR_e_CBC_BntAjrRwVlSts_VeHSWR_e_Dbg_CBC_BntAjrRwVlSts_write_IRV
        ((TeHSWR_e_Dbg_Status)2U);

#endif

    /* End of SignalConversion generated from: '<S10>/VeHSWR_e_Dbg_CBC_BntAjrRwVlSts_write' */
    /* End of Outputs for SubSystem: '<Root>/PokeHSWR_e_CBC_BntAjrRwVlSts' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HSWR_4

FUNC(void, HSWR_CODE) PokeHSWR_e_ECMHoodAjar(VAR(sint16, AUTOMATIC)
    LeHSWR_e_ECMHoodAjar, VAR(boolean, AUTOMATIC) LeHSWR_b_ECMHoodAjarFA)
{

#if Rte_SysCon_Variant_HSWR_4

    boolean rtb_LeHSWR_b_ECMHoodAjarFA_out_l;

#endif

#if !Rte_SysCon_Variant_HSWR_4

    UNUSED_PARAMETER(LeHSWR_e_ECMHoodAjar);

#endif

#if !Rte_SysCon_Variant_HSWR_4

    UNUSED_PARAMETER(LeHSWR_b_ECMHoodAjarFA);

#endif

#if Rte_SysCon_Variant_HSWR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHSWR_e_ECMHoodAjar' */
    /* Chart: '<S11>/PokeHSWR_e_ECMHoodAjarChrt' incorporates:
     *  Constant: '<S405>/Calib'
     *  SignalConversion generated from: '<S11>/LeHSWR_b_ECMHoodAjarFA'
     *  SignalConversion generated from: '<S11>/LeHSWR_e_ECMHoodAjar'
     */
    /* Gateway: PokeHSWR_e_ECMHoodAjar/PokeHSWR_e_ECMHoodAjarChrt */
    /* During: PokeHSWR_e_ECMHoodAjar/PokeHSWR_e_ECMHoodAjarChrt */
    /* Entry Internal: PokeHSWR_e_ECMHoodAjar/PokeHSWR_e_ECMHoodAjarChrt */
    /* Transition: '<S406>:2' */
    /* Transition: '<S406>:48' */
    if (!LeHSWR_b_ECMHoodAjarFA)
    {
        /* Transition: '<S406>:3' */
        /* Transition: '<S406>:15' */
        HSWR_ac_B.LeHSWR_e_ECMHoodAjar_out = KaHSWR_e_ECMHoodAjar_Map
            [(LeHSWR_e_ECMHoodAjar)];
        rtb_LeHSWR_b_ECMHoodAjarFA_out_l = false;

        /* Transition: '<S406>:52' */
    }
    else
    {
        /* Transition: '<S406>:4' */
        rtb_LeHSWR_b_ECMHoodAjarFA_out_l = true;
    }

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S11>/VeHSWR_b_ECMHoodAjarFA_write'
     * */
    Rte_IrvWrite_PokeHSWR_e_ECMHoodAjar_VeHSWR_b_ECMHoodAjarFA_write_IRV
        (rtb_LeHSWR_b_ECMHoodAjarFA_out_l);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  Chart: '<S11>/PokeHSWR_e_ECMHoodAjarChrt'
     *  SignalConversion generated from: '<S11>/VeHSWR_e_Dbg_ECMHoodAjar_write'
     */
    Rte_IrvWrite_PokeHSWR_e_ECMHoodAjar_VeHSWR_e_Dbg_ECMHoodAjar_write_IRV
        (CeHSWR_e_Dbg_Poke);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S11>/VeHSWR_e_ECMHoodAjar_write'
     * */
    Rte_IrvWrite_PokeHSWR_e_ECMHoodAjar_VeHSWR_e_ECMHoodAjar_write_IRV
        (HSWR_ac_B.LeHSWR_e_ECMHoodAjar_out);

    /* End of Outputs for SubSystem: '<Root>/PokeHSWR_e_ECMHoodAjar' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HSWR_4

FUNC(void, HSWR_CODE) PokeHSWR_e_RedntHdSwStat(VAR(sint16, AUTOMATIC)
    LeHSWR_e_RedntHdSwStat, VAR(boolean, AUTOMATIC) LeHSWR_b_RedntHdSwStatFA)
{

#if Rte_SysCon_Variant_HSWR_4

    TeHSWR_e_HoodStatus rtb_LeHSWR_e_RedntHdSwStat_out_e;

#endif

#if !Rte_SysCon_Variant_HSWR_4

    UNUSED_PARAMETER(LeHSWR_e_RedntHdSwStat);

#endif

#if !Rte_SysCon_Variant_HSWR_4

    UNUSED_PARAMETER(LeHSWR_b_RedntHdSwStatFA);

#endif

#if Rte_SysCon_Variant_HSWR_4

    /* Outputs for Function Call SubSystem: '<Root>/PokeHSWR_e_RedntHdSwStat' */
    /* Chart: '<S12>/PokeHSWR_e_RedntHdSwStatChrt' incorporates:
     *  Constant: '<S407>/Calib'
     *  SignalConversion generated from: '<S12>/LeHSWR_b_RedntHdSwStatFA'
     *  SignalConversion generated from: '<S12>/LeHSWR_e_RedntHdSwStat'
     */
    /* Gateway: PokeHSWR_e_RedntHdSwStat/PokeHSWR_e_RedntHdSwStatChrt */
    /* During: PokeHSWR_e_RedntHdSwStat/PokeHSWR_e_RedntHdSwStatChrt */
    /* Entry Internal: PokeHSWR_e_RedntHdSwStat/PokeHSWR_e_RedntHdSwStatChrt */
    /* Transition: '<S408>:2' */
    if (!LeHSWR_b_RedntHdSwStatFA)
    {
        /* Transition: '<S408>:3' */
        /* Transition: '<S408>:15' */
        rtb_LeHSWR_e_RedntHdSwStat_out_e = KaHSWR_e_HdSwtch_St_Map
            [(LeHSWR_e_RedntHdSwStat)];

        /* Transition: '<S408>:18' */
    }
    else
    {
        /* Transition: '<S408>:4' */
        rtb_LeHSWR_e_RedntHdSwStat_out_e = CeHSWR_e_HoodOpen;
    }

    /* End of Chart: '<S12>/PokeHSWR_e_RedntHdSwStatChrt' */

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S12>/VeHSWR_e_RedntHdSwStat_write'
     * */
    Rte_IrvWrite_PokeHSWR_e_RedntHdSwStat_VeHSWR_e_RedntHdSwStat_write_IRV
        (rtb_LeHSWR_e_RedntHdSwStat_out_e);

    /* End of Outputs for SubSystem: '<Root>/PokeHSWR_e_RedntHdSwStat' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_HSWR_4

FUNC(void, HSWR_CODE) HSWR_PwrOff(void)
{

#if Rte_SysCon_Variant_HSWR_4

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
    /* Outputs for Function Call SubSystem: '<Root>/HSWR_PwrOff' */
    /* Outport: '<Root>/BeHSWR_b_ECMHdStatSaved_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/BeHSWR_b_ECMHdStatSaved'
     */
    (void)Rte_Write_BeHSWR_b_ECMHdStatSaved_BeHSWR_b_ECMHdStatSaved
        (HSWR_ac_DW.BeHSWR_b_ECMHdStatSaved);

    /* Outport: '<Root>/NeHSWD_Cnt_CBC_FaultHigh_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/NeHSWD_Cnt_CBC_FaultHigh_MFOP'
     */
    (void)Rte_Write_NeHSWD_Cnt_CBC_FaultHigh_MFOP_NeHSWD_Cnt_CBC_FaultHigh_MFOP
        (HSWR_ac_DW.NeHSWD_Cnt_CBC_FaultHigh_MFOP);

    /* Outport: '<Root>/NeHSWD_Cnt_CBC_FaultLow_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/NeHSWD_Cnt_CBC_FaultLow_MFOP'
     */
    (void)Rte_Write_NeHSWD_Cnt_CBC_FaultLow_MFOP_NeHSWD_Cnt_CBC_FaultLow_MFOP
        (HSWR_ac_DW.NeHSWD_Cnt_CBC_FaultLow_MFOP);

    /* Outport: '<Root>/NeHSWD_Cnt_CBC_Range_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/NeHSWD_Cnt_CBC_Range_MFOP'
     */
    (void)Rte_Write_NeHSWD_Cnt_CBC_Range_MFOP_NeHSWD_Cnt_CBC_Range_MFOP
        (HSWR_ac_DW.NeHSWD_Cnt_CBC_Range_MFOP);

    /* Outport: '<Root>/NeHSWD_Cnt_SecBnt_CircuitHigh_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/NeHSWD_Cnt_SecBnt_CircuitHigh_MFOP'
     */
    (void)
        Rte_Write_NeHSWD_Cnt_SecBnt_CircuitHigh_MFOP_NeHSWD_Cnt_SecBnt_CircuitHigh_MFOP
        (HSWR_ac_DW.NeHSWD_Cnt_SecBnt_CircuitHigh_MFOP);

    /* Outport: '<Root>/NeHSWD_Cnt_SecBnt_CircuitLow_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/NeHSWD_Cnt_SecBnt_CircuitLow_MFOP'
     */
    (void)
        Rte_Write_NeHSWD_Cnt_SecBnt_CircuitLow_MFOP_NeHSWD_Cnt_SecBnt_CircuitLow_MFOP
        (HSWR_ac_DW.NeHSWD_Cnt_SecBnt_CircuitLow_MFOP);

    /* Outport: '<Root>/NeHSWD_Cnt_SecBnt_CircuitPerf_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/NeHSWD_Cnt_SecBnt_CircuitPerf_MFOP'
     */
    (void)
        Rte_Write_NeHSWD_Cnt_SecBnt_CircuitPerf_MFOP_NeHSWD_Cnt_SecBnt_CircuitPerf_MFOP
        (HSWR_ac_DW.NeHSWD_Cnt_SecBnt_CircuitPerf_MFOP);

    /* Outport: '<Root>/NeHSWD_Cnt_SecBnt_Correlation_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S7>/NeHSWD_Cnt_SecBnt_Correlation_MFOP'
     */
    (void)
        Rte_Write_NeHSWD_Cnt_SecBnt_Correlation_MFOP_NeHSWD_Cnt_SecBnt_Correlation_MFOP
        (HSWR_ac_DW.NeHSWD_Cnt_SecBnt_Correlation_MFOP);

    /* End of Outputs for SubSystem: '<Root>/HSWR_PwrOff' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
#endif

}

#endif

/* Output function */
FUNC(void, HSWR_CODE) HSWR_PwrOn(void)
{

#if Rte_SysCon_Variant_HSWR_4

    boolean rtb_OutportBufferForCBC_Hood_Sts_write;

#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean rtb_OutportBufferForPrimaryHoodFault_wri;

#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean rtb_OutportBufferForSec_Hood_Sts_write;

#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean rtb_OutportBufferForSecondaryHoodFault_w;

#endif

#if Rte_SysCon_Variant_HSWR_4

    float32 rtb_OutportBufferForVeHSWR_U_BntAjrRwVlS;

#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean rtb_OutportBufferForVeHSWR_b_BntAjrRwVlS;

#endif

#if Rte_SysCon_Variant_HSWR_4

    boolean rtb_OutportBufferForVeHSWR_b_CBC_BntAj_g;

#endif

#if Rte_SysCon_Variant_HSWR_4

    TeHSWR_e_HoodStatusVolt rtb_OutportBufferForBntAjrRwVlStsVoltRng;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/HSWR_PwrOn'
     */
#if Rte_SysCon_Variant_HSWR_4

    /* S-Function (fcgen): '<S8>/FcnCallGen' */
    /* Outputs for Function Call SubSystem: '<S8>/DSM_Init' */
    /* DataStoreWrite: '<S372>/NeHSWD_Cnt_SecBnt_Correlation_MFOP' incorporates:
     *  Inport: '<Root>/NeHSWD_Cnt_SecBnt_Correlation_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeHSWD_Cnt_SecBnt_Correlation_MFOP_Rx_NeHSWD_Cnt_SecBnt_Correlation_MFOP
        (&HSWR_ac_DW.NeHSWD_Cnt_SecBnt_Correlation_MFOP);

    /* DataStoreWrite: '<S372>/NeHSWD_Cnt_SecBnt_CircuitPerf_MFOP' incorporates:
     *  Inport: '<Root>/NeHSWD_Cnt_SecBnt_CircuitPerf_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeHSWD_Cnt_SecBnt_CircuitPerf_MFOP_Rx_NeHSWD_Cnt_SecBnt_CircuitPerf_MFOP
        (&HSWR_ac_DW.NeHSWD_Cnt_SecBnt_CircuitPerf_MFOP);

    /* DataStoreWrite: '<S372>/NeHSWD_Cnt_SecBnt_CircuitLow_MFOP' incorporates:
     *  Inport: '<Root>/NeHSWD_Cnt_SecBnt_CircuitLow_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeHSWD_Cnt_SecBnt_CircuitLow_MFOP_Rx_NeHSWD_Cnt_SecBnt_CircuitLow_MFOP
        (&HSWR_ac_DW.NeHSWD_Cnt_SecBnt_CircuitLow_MFOP);

    /* DataStoreWrite: '<S372>/NeHSWD_Cnt_SecBnt_CircuitHigh_MFOP' incorporates:
     *  Inport: '<Root>/NeHSWD_Cnt_SecBnt_CircuitHigh_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeHSWD_Cnt_SecBnt_CircuitHigh_MFOP_Rx_NeHSWD_Cnt_SecBnt_CircuitHigh_MFOP
        (&HSWR_ac_DW.NeHSWD_Cnt_SecBnt_CircuitHigh_MFOP);

    /* DataStoreWrite: '<S372>/NeHSWD_Cnt_CBC_Range_MFOP' incorporates:
     *  Inport: '<Root>/NeHSWD_Cnt_CBC_Range_MFOP_PM_In'
     */
    (void)Rte_Read_NeHSWD_Cnt_CBC_Range_MFOP_Rx_NeHSWD_Cnt_CBC_Range_MFOP
        (&HSWR_ac_DW.NeHSWD_Cnt_CBC_Range_MFOP);

    /* DataStoreWrite: '<S372>/NeHSWD_Cnt_CBC_FaultLow_MFOP' incorporates:
     *  Inport: '<Root>/NeHSWD_Cnt_CBC_FaultLow_MFOP_PM_In'
     */
    (void)Rte_Read_NeHSWD_Cnt_CBC_FaultLow_MFOP_Rx_NeHSWD_Cnt_CBC_FaultLow_MFOP(
        &HSWR_ac_DW.NeHSWD_Cnt_CBC_FaultLow_MFOP);

    /* DataStoreWrite: '<S372>/NeHSWD_Cnt_CBC_FaultHigh_MFOP' incorporates:
     *  Inport: '<Root>/NeHSWD_Cnt_CBC_FaultHigh_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeHSWD_Cnt_CBC_FaultHigh_MFOP_Rx_NeHSWD_Cnt_CBC_FaultHigh_MFOP(
        &HSWR_ac_DW.NeHSWD_Cnt_CBC_FaultHigh_MFOP);

    /* DataStoreWrite: '<S372>/BeHSWR_b_ECMHdStatSaved' incorporates:
     *  Inport: '<Root>/BeHSWR_b_ECMHdStatSaved_PM_In'
     */
    (void)Rte_Read_BeHSWR_b_ECMHdStatSaved_Rx_BeHSWR_b_ECMHdStatSaved
        (&HSWR_ac_DW.BeHSWR_b_ECMHdStatSaved);

    /* End of Outputs for SubSystem: '<S8>/DSM_Init' */

    /* Outputs for Function Call SubSystem: '<S8>/Initialize_HSWI_IRVs' */
    /* SignalConversion generated from: '<S374>/VeHSWR_e_RedntHdStat' incorporates:
     *  Constant: '<S400>/Calib'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_RedntHdStat = KeHSWR_e_RedntHdStat_Init;

    /* SignalConversion generated from: '<S374>/VeHSWR_e_CBC_BntAjrRwVlSts' incorporates:
     *  Constant: '<S401>/Calib'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_CBC_BntAjrRwV_d =
        KeHSWR_i_CBC_BntAjrRwVlSts_Init;

    /* SignalConversion generated from: '<S374>/VeHSWR_b_CBC_BntAjrRwVlStsFA' */
    HSWR_ac_B.OutportBufferForVeHSWR_b_CBC_BntAjrRwVlS = false;

    /* SignalConversion generated from: '<S374>/VeHSWR_e_Dbg_CBC_BntAjrRwVlSts' incorporates:
     *  Constant: '<S396>/Constant'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_Dbg_CBC_BntAjrR =
        HSWR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S374>/VeHSWR_e_ECMHoodAjar' incorporates:
     *  Constant: '<S399>/Calib'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_ECMHoodAjar = KeHSWR_e_ECMHoodAjar_Init;

    /* SignalConversion generated from: '<S374>/VeHSWR_e_Dbg_ECMHoodAjar' incorporates:
     *  Constant: '<S397>/Constant'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_Dbg_ECMHoodAjar =
        HSWR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S374>/VeHSWR_U_BntAjrRwVlStsVolt' incorporates:
     *  Constant: '<S398>/Calib'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_U_BntAjrRwVlStsVo =
        KeHSWR_U_BntAjrRwVlStsVolt_Init;

    /* SignalConversion generated from: '<S374>/VeHSWR_b_BntAjrRwVlStsVolt_FA' */
    HSWR_ac_B.OutportBufferForVeHSWR_b_BntAjrRwVlStsVo = false;

    /* SignalConversion generated from: '<S374>/PrimaryHoodFault_write' */
    HSWR_ac_B.OutportBufferForPrimaryHoodFault_write = false;

    /* SignalConversion generated from: '<S374>/SecondaryHoodFault_write' */
    HSWR_ac_B.OutportBufferForSecondaryHoodFault_write = false;

    /* SignalConversion generated from: '<S374>/CBC_Hood_Sts_write' */
    HSWR_ac_B.OutportBufferForCBC_Hood_Sts_write = false;

    /* SignalConversion generated from: '<S374>/Sec_Hood_Sts_write' */
    HSWR_ac_B.OutportBufferForSec_Hood_Sts_write = false;

    /* SignalConversion generated from: '<S374>/BntAjrRwVlStsVoltRng_write' incorporates:
     *  Constant: '<S394>/Constant'
     */
    HSWR_ac_B.OutportBufferForBntAjrRwVlStsVoltRng_wri = HSWR_ac_ConstB.Constant;

    /* End of Outputs for SubSystem: '<S8>/Initialize_HSWI_IRVs' */
    /* End of Outputs for S-Function (fcgen): '<S8>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/InitOutput'
     */
    /* SignalConversion generated from: '<S373>/VeHSWR_b_ECMHoodOpen_Out_Init' */
    HSWR_ac_B.OutportBufferForVeHSWR_b_ECMHoodOpen_Out = false;

    /* SignalConversion generated from: '<S373>/VeHSWR_e_CBC_BntAjrRwVlSts_Out_Init' incorporates:
     *  Constant: '<S384>/Calib'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_CBC_BntAjrRwVlS =
        KeHSWR_i_CBC_BntAjrRwVlSts_NF_Dial;

    /* Outputs for Atomic SubSystem: '<S373>/HSWR_NF_Output' */
    /* Outport: '<Root>/VeHSWR_e_RedntHdStat' incorporates:
     *  Constant: '<S392>/Constant'
     *  DataTypeConversion: '<S390>/DataTypeConversion'
     */
    (void)Rte_Write_VeHSWR_e_RedntHdStat_Value(CeHSWR_e_HoodClosed);

    /* Outport: '<Root>/VeHSWR_b_RedntHdStatFA' incorporates:
     *  Constant: '<S383>/FALSEConstant'
     *  Logic: '<S385>/AND'
     */
    (void)Rte_Write_VeHSWR_b_RedntHdStatFA_Value(false);

    /* Outport: '<Root>/VeHSWR_e_ECMHoodAjar' incorporates:
     *  Constant: '<S393>/Constant'
     *  DataTypeConversion: '<S391>/DataTypeConversion'
     */
    (void)Rte_Write_VeHSWR_e_ECMHoodAjar_Value(CeHSWR_e_Closed_ECMHdAjar);

    /* Outport: '<Root>/VeHSWR_b_ECMHoodAjarFA' incorporates:
     *  Constant: '<S383>/FALSEConstant2'
     *  Logic: '<S386>/AND'
     */
    (void)Rte_Write_VeHSWR_b_ECMHoodAjarFA_Value(false);

    /* Outport: '<Root>/VeHSWR_b_CBC_Range_Performance' incorporates:
     *  Constant: '<S383>/FALSEConstant4'
     *  Logic: '<S387>/AND'
     */
    (void)Rte_Write_VeHSWR_b_CBC_Range_Performance_Value(false);

    /* Outport: '<Root>/VeHSWR_b_CBC_FaultLow' incorporates:
     *  Constant: '<S383>/FALSEConstant5'
     *  Logic: '<S388>/AND'
     */
    (void)Rte_Write_VeHSWR_b_CBC_FaultLow_Value(false);

    /* Outport: '<Root>/VeHSWR_b_CBC_FaultHigh' incorporates:
     *  Constant: '<S383>/FALSEConstant6'
     *  Logic: '<S389>/AND'
     */
    (void)Rte_Write_VeHSWR_b_CBC_FaultHigh_Value(false);

    /* End of Outputs for SubSystem: '<S373>/HSWR_NF_Output' */

    /* SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSwCktRngPerf' incorporates:
     *  Constant: '<S375>/Constant'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngHoo =
        HSWR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSwCktLo' incorporates:
     *  Constant: '<S376>/Constant'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngH_k =
        HSWR_ac_ConstB.Constant_ok;

    /* SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSwCktHi' incorporates:
     *  Constant: '<S377>/Constant'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngH_i =
        HSWR_ac_ConstB.Constant_e;

    /* SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSw2AjDrv' incorporates:
     *  Constant: '<S378>/Constant'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngH_e =
        HSWR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSw2CktLo' incorporates:
     *  Constant: '<S379>/Constant'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngH_g =
        HSWR_ac_ConstB.Constant_f;

    /* SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSw2CktHi' incorporates:
     *  Constant: '<S380>/Constant'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngH_l =
        HSWR_ac_ConstB.Constant_i;

    /* SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSwCorr' incorporates:
     *  Constant: '<S381>/Constant'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngH_d =
        HSWR_ac_ConstB.Constant_de;

    /* SignalConversion generated from: '<S373>/Sec_Hood_Sts_outwrite' */
    HSWR_ac_B.OutportBufferForSec_Hood_Sts_outwrite = false;

    /* SignalConversion generated from: '<S373>/LeHSWC_b_InitHoodStatus' */
    HSWR_ac_B.OutportBufferForLeHSWC_b_InitHoodStatus = false;

    /* SignalConversion generated from: '<S373>/LeHSWC_e_InitHCPHoodAjarSts' incorporates:
     *  Constant: '<S382>/Constant'
     */
    HSWR_ac_B.OutportBufferForLeHSWC_e_InitHCPHoodAjar =
        HSWR_ac_ConstB.Constant_k;

    /* End of Outputs for S-Function (fcgen): '<S8>/FcnCallGen' */

    /* SignalConversion generated from: '<S8>/BntAjrRwVlStsVoltRng_write' incorporates:
     *  SignalConversion generated from: '<S8>/CBC_Hood_Sts_write'
     */
#if Rte_SysCon_Variant_HSWR_4

    /* SignalConversion generated from: '<S8>/BntAjrRwVlStsVoltRng_write' incorporates:
     *  SignalConversion generated from: '<S374>/BntAjrRwVlStsVoltRng_write'
     */
    rtb_OutportBufferForBntAjrRwVlStsVoltRng =
        HSWR_ac_B.OutportBufferForBntAjrRwVlStsVoltRng_wri;

    /* SignalConversion generated from: '<S8>/CBC_Hood_Sts_write' */
    rtb_OutportBufferForCBC_Hood_Sts_write =
        HSWR_ac_B.OutportBufferForCBC_Hood_Sts_write;

#endif

    /* End of SignalConversion generated from: '<S8>/BntAjrRwVlStsVoltRng_write' */

    /* Outport: '<Root>/VeHSWR_b_HoodOpen' incorporates:
     *  SignalConversion generated from: '<S8>/LeHSWC_b_InitHoodStatus'
     */
    (void)Rte_Write_VeHSWR_b_HoodOpen_Value
        (HSWR_ac_B.OutportBufferForLeHSWC_b_InitHoodStatus);

    /* Outport: '<Root>/VeHSWR_e_HCPHoodAjarSts' incorporates:
     *  SignalConversion generated from: '<S373>/LeHSWC_e_InitHCPHoodAjarSts'
     *  SignalConversion generated from: '<S8>/LeHSWC_e_InitHCPHoodAjarSts'
     */
    (void)Rte_Write_VeHSWR_e_HCPHoodAjarSts_Value
        (HSWR_ac_B.OutportBufferForLeHSWC_e_InitHCPHoodAjar);

    /* SignalConversion generated from: '<S8>/PrimaryHoodFault_write' */
#if Rte_SysCon_Variant_HSWR_4

    /* SignalConversion generated from: '<S8>/PrimaryHoodFault_write' */
    rtb_OutportBufferForPrimaryHoodFault_wri =
        HSWR_ac_B.OutportBufferForPrimaryHoodFault_write;

#endif

    /* End of SignalConversion generated from: '<S8>/PrimaryHoodFault_write' */

    /* Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSw2AjDrv' incorporates:
     *  SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSw2AjDrv'
     *  SignalConversion generated from: '<S8>/R_VeHSWR_e_FaultSts_EngHoodSw2AjDrv'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSw2AjDrv_Value
        (HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngH_e);

    /* Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSw2CktHi' incorporates:
     *  SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSw2CktHi'
     *  SignalConversion generated from: '<S8>/R_VeHSWR_e_FaultSts_EngHoodSw2CktHi'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSw2CktHi_Value
        (HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngH_l);

    /* Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSw2CktLo' incorporates:
     *  SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSw2CktLo'
     *  SignalConversion generated from: '<S8>/R_VeHSWR_e_FaultSts_EngHoodSw2CktLo'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSw2CktLo_Value
        (HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngH_g);

    /* Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSwCktHi' incorporates:
     *  SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSwCktHi'
     *  SignalConversion generated from: '<S8>/R_VeHSWR_e_FaultSts_EngHoodSwCktHi'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSwCktHi_Value
        (HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngH_i);

    /* Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSwCktLo' incorporates:
     *  SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSwCktLo'
     *  SignalConversion generated from: '<S8>/R_VeHSWR_e_FaultSts_EngHoodSwCktLo'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSwCktLo_Value
        (HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngH_k);

    /* Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSwCktRngPerf' incorporates:
     *  SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSwCktRngPerf'
     *  SignalConversion generated from: '<S8>/R_VeHSWR_e_FaultSts_EngHoodSwCktRngPerf'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSwCktRngPerf_Value
        (HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngHoo);

    /* Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSwCorr' incorporates:
     *  SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSwCorr'
     *  SignalConversion generated from: '<S8>/R_VeHSWR_e_FaultSts_EngHoodSwCorr'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSwCorr_Value
        (HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngH_d);

    /* Outport: '<Root>/VeHSWR_b_SecHoodSts' incorporates:
     *  SignalConversion generated from: '<S8>/Sec_Hood_Sts_outwrite'
     */
    (void)Rte_Write_VeHSWR_b_SecHoodSts_Value
        (HSWR_ac_B.OutportBufferForSec_Hood_Sts_outwrite);

    /* SignalConversion generated from: '<S8>/Sec_Hood_Sts_write' incorporates:
     *  SignalConversion generated from: '<S8>/SecondaryHoodFault_write'
     *  SignalConversion generated from: '<S8>/VeHSWR_U_BntAjrRwVlStsVolt_write'
     *  SignalConversion generated from: '<S8>/VeHSWR_b_BntAjrRwVlStsVolt_FA_write'
     *  SignalConversion generated from: '<S8>/VeHSWR_b_CBC_BntAjrRwVlStsFA_write'
     */
#if Rte_SysCon_Variant_HSWR_4

    /* SignalConversion generated from: '<S8>/Sec_Hood_Sts_write' */
    rtb_OutportBufferForSec_Hood_Sts_write =
        HSWR_ac_B.OutportBufferForSec_Hood_Sts_write;

    /* SignalConversion generated from: '<S8>/SecondaryHoodFault_write' */
    rtb_OutportBufferForSecondaryHoodFault_w =
        HSWR_ac_B.OutportBufferForSecondaryHoodFault_write;

    /* SignalConversion generated from: '<S8>/VeHSWR_U_BntAjrRwVlStsVolt_write' */
    rtb_OutportBufferForVeHSWR_U_BntAjrRwVlS =
        HSWR_ac_B.OutportBufferForVeHSWR_U_BntAjrRwVlStsVo;

    /* SignalConversion generated from: '<S8>/VeHSWR_b_BntAjrRwVlStsVolt_FA_write' */
    rtb_OutportBufferForVeHSWR_b_BntAjrRwVlS =
        HSWR_ac_B.OutportBufferForVeHSWR_b_BntAjrRwVlStsVo;

    /* SignalConversion generated from: '<S8>/VeHSWR_b_CBC_BntAjrRwVlStsFA_write' */
    rtb_OutportBufferForVeHSWR_b_CBC_BntAj_g =
        HSWR_ac_B.OutportBufferForVeHSWR_b_CBC_BntAjrRwVlS;

#endif

    /* End of SignalConversion generated from: '<S8>/Sec_Hood_Sts_write' */

    /* Outport: '<Root>/VeHSWR_b_ECMHoodOpen' incorporates:
     *  SignalConversion generated from: '<S8>/VeHSWR_b_ECMHoodOpen_Out_Init'
     */
    (void)Rte_Write_VeHSWR_b_ECMHoodOpen_Value
        (HSWR_ac_B.OutportBufferForVeHSWR_b_ECMHoodOpen_Out);

    /* Outport: '<Root>/VeHSWR_e_CBC_BntAjrRwVlSts' incorporates:
     *  SignalConversion generated from: '<S8>/VeHSWR_e_CBC_BntAjrRwVlSts_Out_Init'
     */
    (void)Rte_Write_VeHSWR_e_CBC_BntAjrRwVlSts_Value
        (HSWR_ac_B.OutportBufferForVeHSWR_e_CBC_BntAjrRwVlS);

    /* SignalConversion generated from: '<S8>/VeHSWR_e_CBC_BntAjrRwVlSts_write' incorporates:
     *  SignalConversion generated from: '<S8>/VeHSWR_e_Dbg_CBC_BntAjrRwVlSts_write'
     *  SignalConversion generated from: '<S8>/VeHSWR_e_Dbg_ECMHoodAjar_write'
     *  SignalConversion generated from: '<S8>/VeHSWR_e_ECMHoodAjar_write'
     *  SignalConversion generated from: '<S8>/VeHSWR_e_RedntHdStat_write'
     *  SignalConversion generated from: '<S8>/BntAjrRwVlStsVoltRng_write'
     *  SignalConversion generated from: '<S8>/CBC_Hood_Sts_write'
     *  SignalConversion generated from: '<S8>/PrimaryHoodFault_write'
     *  SignalConversion generated from: '<S8>/Sec_Hood_Sts_write'
     *  SignalConversion generated from: '<S8>/SecondaryHoodFault_write'
     *  SignalConversion generated from: '<S8>/VeHSWR_U_BntAjrRwVlStsVolt_write'
     *  SignalConversion generated from: '<S8>/VeHSWR_b_BntAjrRwVlStsVolt_FA_write'
     *  SignalConversion generated from: '<S8>/VeHSWR_b_CBC_BntAjrRwVlStsFA_write'
     * */
#if Rte_SysCon_Variant_HSWR_4

    /* Merge: '<Root>/BntAjrRwVlStsVoltRng_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/BntAjrRwVlStsVoltRng_write'
     */
    Rte_IrvWrite_HSWR_PwrOn_BntAjrRwVlStsVoltRng_write_IRV
        (rtb_OutportBufferForBntAjrRwVlStsVoltRng);

    /* Merge: '<Root>/CBC_Hood_Sts_IRV_Merge' */
    Rte_IrvWrite_HSWR_PwrOn_CBC_Hood_Sts_write_IRV
        (rtb_OutportBufferForCBC_Hood_Sts_write);

    /* Merge: '<Root>/PrimaryHoodFault_IRV_Merge' */
    Rte_IrvWrite_HSWR_PwrOn_PrimaryHoodFault_write_IRV
        (rtb_OutportBufferForPrimaryHoodFault_wri);

    /* Merge: '<Root>/Sec_Hood_Sts_IRV_Merge' */
    Rte_IrvWrite_HSWR_PwrOn_Sec_Hood_Sts_write_IRV
        (rtb_OutportBufferForSec_Hood_Sts_write);

    /* Merge: '<Root>/SecondaryHoodFault_IRV_Merge' */
    Rte_IrvWrite_HSWR_PwrOn_SecondaryHoodFault_write_IRV
        (rtb_OutportBufferForSecondaryHoodFault_w);

    /* Merge: '<Root>/Merge_2' */
    Rte_IrvWrite_HSWR_PwrOn_VeHSWR_U_BntAjrRwVlStsVolt_write_IRV
        (rtb_OutportBufferForVeHSWR_U_BntAjrRwVlS);

    /* Merge: '<Root>/Merge_4' */
    Rte_IrvWrite_HSWR_PwrOn_VeHSWR_b_CBC_BntAjrRwVlStsVoltFA_write_IRV
        (rtb_OutportBufferForVeHSWR_b_BntAjrRwVlS);

    /* Merge: '<Root>/Merge_10' */
    Rte_IrvWrite_HSWR_PwrOn_VeHSWR_b_CBC_BntAjrRwVlStsFA_write_IRV
        (rtb_OutportBufferForVeHSWR_b_CBC_BntAj_g);

    /* Merge: '<Root>/Merge_9' */
    Rte_IrvWrite_HSWR_PwrOn_VeHSWR_e_CBC_BntAjrRwVlSts_write_IRV
        (HSWR_ac_B.OutportBufferForVeHSWR_e_CBC_BntAjrRwV_d);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S374>/VeHSWR_e_Dbg_CBC_BntAjrRwVlSts'
     */
    Rte_IrvWrite_HSWR_PwrOn_VeHSWR_e_Dbg_CBC_BntAjrRwVlSts_write_IRV
        (HSWR_ac_B.OutportBufferForVeHSWR_e_Dbg_CBC_BntAjrR);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S374>/VeHSWR_e_Dbg_ECMHoodAjar'
     */
    Rte_IrvWrite_HSWR_PwrOn_VeHSWR_e_Dbg_ECMHoodAjar_write_IRV
        (HSWR_ac_B.OutportBufferForVeHSWR_e_Dbg_ECMHoodAjar);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S374>/VeHSWR_e_ECMHoodAjar'
     */
    Rte_IrvWrite_HSWR_PwrOn_VeHSWR_e_ECMHoodAjar_write_IRV
        (HSWR_ac_B.OutportBufferForVeHSWR_e_ECMHoodAjar);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S374>/VeHSWR_e_RedntHdStat'
     */
    Rte_IrvWrite_HSWR_PwrOn_VeHSWR_e_RedntHdSwStat_write_IRV
        (HSWR_ac_B.OutportBufferForVeHSWR_e_RedntHdStat);

#endif

    /* End of SignalConversion generated from: '<S8>/VeHSWR_e_CBC_BntAjrRwVlSts_write' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
#if Rte_SysCon_Variant_HSWR_4

FUNC(void, HSWR_CODE) TmotHSWR_b_ECMHoodAjar(void)
{

#if Rte_SysCon_Variant_HSWR_4

    /* Outputs for Function Call SubSystem: '<Root>/TmotHSWR_b_ECMHoodAjar' */
    /* Merge: '<Root>/Merge_7' incorporates:
     *  Chart: '<S13>/TmotHSWR_b_ECMHoodAjarChrt'
     *  SignalConversion generated from: '<S13>/VeHSWR_b_ECMHoodAjarFA_write'
     */
    /* Gateway: TmotHSWR_b_ECMHoodAjar/TmotHSWR_b_ECMHoodAjarChrt */
    /* During: TmotHSWR_b_ECMHoodAjar/TmotHSWR_b_ECMHoodAjarChrt */
    /* Entry Internal: TmotHSWR_b_ECMHoodAjar/TmotHSWR_b_ECMHoodAjarChrt */
    /* Transition: '<S409>:2' */
    Rte_IrvWrite_TmotHSWR_b_ECMHoodAjar_VeHSWR_b_ECMHoodAjarFA_write_IRV(true);

    /* Merge: '<Root>/Merge_8' incorporates:
     *  Chart: '<S13>/TmotHSWR_b_ECMHoodAjarChrt'
     *  SignalConversion generated from: '<S13>/VeHSWR_e_Dbg_ECMHoodAjar_write'
     */
    Rte_IrvWrite_TmotHSWR_b_ECMHoodAjar_VeHSWR_e_Dbg_ECMHoodAjar_write_IRV
        (CeHSWR_e_Dbg_Timeout);

    /* End of Outputs for SubSystem: '<Root>/TmotHSWR_b_ECMHoodAjar' */
#endif

}

#endif

/* Model initialize function */
FUNC(void, HSWR_CODE) HSWR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        HSWR_ac_B.OutportBufferForLeHSWC_e_InitHCPHoodAjar = CeHSWR_e_HCPHoodSNA;

#if Rte_SysCon_Variant_HSWR_4

        HSWR_ac_B.OutportBufferForVeHSWR_e_Dbg_CBC_BntAjrR = CeHSWR_e_Dbg_Init;

#endif

#if Rte_SysCon_Variant_HSWR_4

        HSWR_ac_B.OutportBufferForVeHSWR_e_Dbg_ECMHoodAjar = CeHSWR_e_Dbg_Init;

#endif

#if (!(!Rte_SysCon_Variant_HSWR_7) && Rte_SysCon_Variant_HSWR_4) || (!Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4) || (!Rte_SysCon_Variant_HSWR_7 && Rte_SysCon_Variant_HSWR_2 && Rte_SysCon_Variant_HSWR_4)

        HSWR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e = CeHSWR_e_Dbg_Init;

#endif

    }

    /* custom signals */
#if Rte_SysCon_Variant_HSWR_4

    VeHSWR_e_SecBntAjrRwVlStsVoltRng = CeHSWR_e_SecHoodAjar;

#endif

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/HSWR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/InitOutput'
     */
    /* SystemInitialize for SignalConversion generated from: '<S373>/VeHSWR_e_CBC_BntAjrRwVlSts_Out_Init' incorporates:
     *  Constant: '<S384>/Calib'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_CBC_BntAjrRwVlS =
        KeHSWR_i_CBC_BntAjrRwVlSts_NF_Dial;

    /* SystemInitialize for SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSwCktRngPerf' incorporates:
     *  Constant: '<S375>/Constant'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngHoo =
        HSWR_ac_ConstB.Constant_o;

    /* SystemInitialize for SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSwCktLo' incorporates:
     *  Constant: '<S376>/Constant'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngH_k =
        HSWR_ac_ConstB.Constant_ok;

    /* SystemInitialize for SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSwCktHi' incorporates:
     *  Constant: '<S377>/Constant'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngH_i =
        HSWR_ac_ConstB.Constant_e;

    /* SystemInitialize for SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSw2AjDrv' incorporates:
     *  Constant: '<S378>/Constant'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngH_e =
        HSWR_ac_ConstB.Constant_h;

    /* SystemInitialize for SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSw2CktLo' incorporates:
     *  Constant: '<S379>/Constant'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngH_g =
        HSWR_ac_ConstB.Constant_f;

    /* SystemInitialize for SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSw2CktHi' incorporates:
     *  Constant: '<S380>/Constant'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngH_l =
        HSWR_ac_ConstB.Constant_i;

    /* SystemInitialize for SignalConversion generated from: '<S373>/VeHSWR_e_FaultSts_EngHoodSwCorr' incorporates:
     *  Constant: '<S381>/Constant'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_FaultSts_EngH_d =
        HSWR_ac_ConstB.Constant_de;

    /* SystemInitialize for SignalConversion generated from: '<S373>/LeHSWC_e_InitHCPHoodAjarSts' incorporates:
     *  Constant: '<S382>/Constant'
     */
    HSWR_ac_B.OutportBufferForLeHSWC_e_InitHCPHoodAjar =
        HSWR_ac_ConstB.Constant_k;

#if Rte_SysCon_Variant_HSWR_4

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeHSWR_e_ECMHoodAjar' */
    /* SystemInitialize for Function Call SubSystem: '<S8>/Initialize_HSWI_IRVs' */
    /* SystemInitialize for SignalConversion generated from: '<S374>/VeHSWR_e_RedntHdStat' incorporates:
     *  Constant: '<S400>/Calib'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_RedntHdStat = KeHSWR_e_RedntHdStat_Init;

    /* SystemInitialize for SignalConversion generated from: '<S374>/VeHSWR_e_CBC_BntAjrRwVlSts' incorporates:
     *  Constant: '<S401>/Calib'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_CBC_BntAjrRwV_d =
        KeHSWR_i_CBC_BntAjrRwVlSts_Init;

    /* SystemInitialize for SignalConversion generated from: '<S374>/VeHSWR_e_Dbg_CBC_BntAjrRwVlSts' incorporates:
     *  Constant: '<S396>/Constant'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_Dbg_CBC_BntAjrR =
        HSWR_ac_ConstB.Constant_d;

    /* SystemInitialize for SignalConversion generated from: '<S374>/VeHSWR_e_ECMHoodAjar' incorporates:
     *  Constant: '<S399>/Calib'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_ECMHoodAjar = KeHSWR_e_ECMHoodAjar_Init;

    /* SystemInitialize for SignalConversion generated from: '<S374>/VeHSWR_e_Dbg_ECMHoodAjar' incorporates:
     *  Constant: '<S397>/Constant'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_e_Dbg_ECMHoodAjar =
        HSWR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S374>/VeHSWR_U_BntAjrRwVlStsVolt' incorporates:
     *  Constant: '<S398>/Calib'
     */
    HSWR_ac_B.OutportBufferForVeHSWR_U_BntAjrRwVlStsVo =
        KeHSWR_U_BntAjrRwVlStsVolt_Init;

    /* SystemInitialize for SignalConversion generated from: '<S374>/BntAjrRwVlStsVoltRng_write' incorporates:
     *  Constant: '<S394>/Constant'
     */
    HSWR_ac_B.OutportBufferForBntAjrRwVlStsVoltRng_wri = HSWR_ac_ConstB.Constant;

    /* End of SystemInitialize for SubSystem: '<S8>/Initialize_HSWI_IRVs' */

    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeHSWR_e_ECMHoodAjar' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* End of SystemInitialize for S-Function (fcgen): '<S8>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#endif

    /* SystemInitialize for Outport: '<Root>/VeHSWR_e_HCPHoodAjarSts' incorporates:
     *  Merge: '<Root>/Merge_12'
     */
    (void)Rte_Write_VeHSWR_e_HCPHoodAjarSts_Value(CeHSWR_e_HCPHoodSNA);

    /* SystemInitialize for Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSwCktRngPerf' incorporates:
     *  Merge: '<Root>/M_VeHSWR_e_FaultSts_EngHoodSwCktRngPerf'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSwCktRngPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSwCktLo' incorporates:
     *  Merge: '<Root>/M_VeHSWR_e_FaultSts_EngHoodSwCktLo'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSwCktLo_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSwCktHi' incorporates:
     *  Merge: '<Root>/M_VeHSWR_e_FaultSts_EngHoodSwCktHi'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSwCktHi_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSw2AjDrv' incorporates:
     *  Merge: '<Root>/M_VeHSWR_e_FaultSts_EngHoodSw2AjDrv'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSw2AjDrv_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSw2CktLo' incorporates:
     *  Merge: '<Root>/M_VeHSWR_e_FaultSts_EngHoodSw2CktLo'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSw2CktLo_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSw2CktHi' incorporates:
     *  Merge: '<Root>/M_VeHSWR_e_FaultSts_EngHoodSw2CktHi'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSw2CktHi_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeHSWR_e_FaultSts_EngHoodSwCorr' incorporates:
     *  Merge: '<Root>/M_VeHSWR_e_FaultSts_EngHoodSwCorr'
     */
    (void)Rte_Write_VeHSWR_e_FaultSts_EngHoodSwCorr_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
