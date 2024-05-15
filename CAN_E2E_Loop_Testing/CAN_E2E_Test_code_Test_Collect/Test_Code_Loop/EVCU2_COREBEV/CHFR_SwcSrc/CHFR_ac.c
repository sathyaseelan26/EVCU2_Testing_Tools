/*
 * File: CHFR_ac.c
 *
 * Code generated for Simulink model 'CHFR_ac'.
 *
 * Model version                  : 1.77
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:15:30 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CHFR_ac.h"
#include "look1_iflf_binlcapw.h"

/* Named constants for Chart: '<S131>/Stateflow Chart' */
#if Rte_SysCon_Variant_CHFR_1
#define CHFR_a_IN_ChargingFailure0_Init ((uint8)2U)
#endif

#if Rte_SysCon_Variant_CHFR_1
#define CHFR_ac_IN_ChargingFailure0    ((uint8)1U)
#endif

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_CHFR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) HeCHFR_b_LOCBPCMSecBus = 0;/* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(float32, CHFR_VAR_INIT) HeCHFR_t_dT = 0.02F;
                                   /* Referenced by: '<S131>/Stateflow Chart' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(uint16, CHFR_VAR_INIT) KaCHFR_K_NbrRetries[255] =
{
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 0U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 0U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 0U, 0U, 5U, 5U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 5U, 5U, 5U, 0U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 0U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 0U, 5U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U
} ;                                    /* Referenced by:
                                        * '<S136>/Stateflow_Chart'
                                        * '<S168>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KaCHFR_b_ChrgFault[253] =
{
    0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1,
    1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by:
                                        * '<S136>/Stateflow_Chart'
                                        * '<S115>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KaCHFR_b_ChrgFaultnotPI[253] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by:
                                        * '<S136>/Stateflow_Chart'
                                        * '<S116>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KaCHFR_b_MSG6[253] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0,
    0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S123>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KaCHFR_k_HPMRDefaultError[15] =
{
    21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S158>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(uint16, CHFR_VAR_INIT) KeCHFR_Cnt_12VFault = 200U;/* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(uint16, CHFR_VAR_INIT) KeCHFR_Cnt_DbncAC_PresFlt = 120U;/* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(uint16, CHFR_VAR_INIT) KeCHFR_Cnt_DbncChrgPortFlt = 20U;/* Referenced by: '<S42>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(uint16, CHFR_VAR_INIT) KeCHFR_Cnt_DbncChrgSysFault = 60U;/* Referenced by: '<S117>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(uint16, CHFR_VAR_INIT) KeCHFR_Cnt_DbncFA = 20U;/* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(uint16, CHFR_VAR_INIT) KeCHFR_Cnt_DbncFA_DFIR = 20U;/* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(uint16, CHFR_VAR_INIT) KeCHFR_Cnt_DbncMSG6 = 60U;/* Referenced by: '<S124>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(uint16, CHFR_VAR_INIT) KeCHFR_Cnt_DbncOBCMSig2 = 100U;/* Referenced by:
                                                                      * '<S43>/Calib'
                                                                      * '<S54>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(uint16, CHFR_VAR_INIT) KeCHFR_Cnt_DbncStopChrg = 10U;/* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_Cnt_KR1 = 15;/* Referenced by: '<S139>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_Cnt_KR10 = 1;/* Referenced by: '<S140>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_Cnt_KR11 = 1;/* Referenced by: '<S141>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_Cnt_KR12 = 1;/* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_Cnt_KR13 = 5;/* Referenced by: '<S143>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_Cnt_KR14 = 5;/* Referenced by: '<S144>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_Cnt_KR15 = 5;/* Referenced by: '<S145>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_Cnt_KR16 = 30;/* Referenced by: '<S146>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_Cnt_KR2 = 15;/* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_Cnt_KR3 = 15;/* Referenced by: '<S148>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_Cnt_KR4 = 20;/* Referenced by: '<S149>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_Cnt_KR5 = 5;/* Referenced by: '<S150>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_Cnt_KR6 = 8;/* Referenced by: '<S151>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_Cnt_KR7 = 2;/* Referenced by: '<S152>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_Cnt_KR8 = 3;/* Referenced by: '<S153>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_Cnt_KR9 = 3;/* Referenced by: '<S154>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(uint16, CHFR_VAR_INIT) KeCHFR_Cnt_UnplugDbncCnt = 4U;/* Referenced by: '<S17>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(float32, CHFR_VAR_INIT) KeCHFR_I_AC_SideCrntUpperLim =
    60.0F;                             /* Referenced by: '<S77>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(float32, CHFR_VAR_INIT) KeCHFR_I_BattMaxCurrAlwd = 48.0F;/* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(uint16, CHFR_VAR_INIT) KeCHFR_K_NCVSize = 80U;/* Referenced by: '<S159>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(float32, CHFR_VAR_INIT) KeCHFR_U_AC_VoltLowerLim = 50.0F;/* Referenced by: '<S106>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(float32, CHFR_VAR_INIT) KeCHFR_U_AC_VoltUpperLim = 270.0F;/* Referenced by: '<S107>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(float32, CHFR_VAR_INIT) KeCHFR_U_Bat_VoltUpperLim = 500.0F;/* Referenced by: '<S108>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ACSideVolt_L2FAOvrd = 0;/* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ACSideVolt_L2FAVal = 0;/* Referenced by: '<S171>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ACSideVolt_L3FAOvrd = 0;/* Referenced by: '<S172>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ACSideVolt_L3FAVal = 0;/* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_AC_InputVltOBCMFAOvrd = 0;/* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_AC_InputVltOBCMFAVal = 0;/* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_Active = 0;/* Referenced by: '<S18>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_Allow12VFault = 0;/* Referenced by: '<S45>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_AllowAC_DCFA = 1;/* Referenced by: '<S90>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_AllowDC_ACFA = 1;/* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_AllowDischrg_FA = 0;/* Referenced by: '<S92>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_BattSide_CurrFAOvrd = 0;/* Referenced by: '<S176>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_BattSide_CurrFAVal = 0;/* Referenced by: '<S177>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_BattSide_VoltFAOvrd = 0;/* Referenced by: '<S178>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_BattSide_VoltFAVal = 0;/* Referenced by: '<S179>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ChargeFaultOvrd1 = 0;/* Referenced by: '<S70>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ChargeFaultOvrd2 = 0;/* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ChargeFaultOvrd3 = 0;/* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ChargeFaultOvrd5 = 0;/* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ChargeFaultOvrdVal1 = 0;/* Referenced by: '<S71>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ChargeFaultOvrdVal2 = 0;/* Referenced by: '<S110>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ChargeFaultOvrdVal3 = 0;/* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ChargeFaultOvrdVal5 = 0;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ChargeReqOvrd = 0;/* Referenced by: '<S180>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ChargeReqOvrdVal = 0;/* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ChargingStat_BPCMFAOvrd =
    0;                                 /* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ChargingStat_BPCMFAVal =
    0;                                 /* Referenced by: '<S183>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ChrgFailStsFAOvrd = 0;/* Referenced by: '<S184>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ChrgFailStsFAVal = 0;/* Referenced by: '<S185>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ChrgFailStsOvrd = 0;/* Referenced by: '<S186>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_ChrgFaultSelector = 1;/* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_DCIsolStsFAOvrd = 0;/* Referenced by: '<S187>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_DCIsolStsFAVal = 0;/* Referenced by: '<S188>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_DschrgFAOvrd = 0;/* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_DschrgFAVal = 0;/* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_Dschrg_FailureOvrd = 0;/* Referenced by: '<S191>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_EVSEIsolSts_FAOvrd = 0;/* Referenced by: '<S192>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_EVSEIsolSts_FAVal = 0;/* Referenced by: '<S193>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_EVSEOutputCurr_FAOvrd = 0;/* Referenced by: '<S194>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_EVSEOutputCurr_FAVal = 0;/* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_EVSEOutputVolt_FAOvrd = 0;/* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_EVSEOutputVolt_FAVal = 0;/* Referenced by: '<S197>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_EVSE_ProxStat_Ovrd = 0;/* Referenced by: '<S198>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_EnblChrgFailSts1 = 0;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_EnblChrgFailSts2 = 1;/* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_EnblChrgFailSts3 = 1;/* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_EnblChrgFailSts4 = 1;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_EnblCyclicNCR = 0;/* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HVBat_DC_CntctrStatFAOvrd
    = 0;                               /* Referenced by: '<S199>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HVBat_DC_CntctrStatFAVal =
    0;                                 /* Referenced by: '<S200>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HV_AuxLoadOffReqFAovrd =
    0;                                 /* Referenced by: '<S201>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HV_AuxLoadOffReqFAovrdVal
    = 0;                               /* Referenced by: '<S202>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HV_BatCntctrStatFAOvrd =
    0;                                 /* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HV_BatCntctrStatFAVal = 0;/* Referenced by: '<S204>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HV_BatCurrFAOvrd = 0;/* Referenced by: '<S205>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HV_BatCurrFAVal = 0;/* Referenced by: '<S206>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HV_BatModTempMaxFAOvrd =
    0;                                 /* Referenced by: '<S207>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HV_BatModTempMaxFAVal = 0;/* Referenced by: '<S208>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HV_BatModTempMinFAOvrd =
    0;                                 /* Referenced by: '<S209>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HV_BatModTempMinFAVal = 0;/* Referenced by: '<S210>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HV_BatModVoltMaxFAOvrd =
    0;                                 /* Referenced by: '<S211>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HV_BatModVoltMaxFAVal = 0;/* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HV_BatModVoltMinFAOvrd =
    0;                                 /* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HV_BatModVoltMinFAVal = 0;/* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HV_BatVoltFAOvrd = 0;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HV_BatVoltFAVal = 0;/* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HV_SeriesVoltFAovrd = 0;/* Referenced by: '<S217>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_HV_SeriesVoltFAovrdVal =
    0;                                 /* Referenced by: '<S218>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_IDCM_DCCAOvrd = 0;/* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_IDCM_DCCAOvrdVal = 0;/* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_IgnoreChrgFailStsDC = 0;/* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_J1772ICAFAOvrd = 0;/* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_J1772ICAFAVal = 0;/* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_LOC_BPCM = 1;/* Referenced by: '<S93>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_MSG5_Ovrd = 0;/* Referenced by: '<S235>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_MSG5_Val = 0;/* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_MSG6Selector = 0;/* Referenced by: '<S125>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_MSG6_Ovrd = 0;/* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_MSG6_Val = 0;/* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_MSG8_Ovrd = 0;/* Referenced by: '<S239>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_MSG8_Val = 0;/* Referenced by: '<S240>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_MaxChgCurrAlwdFAOvrd = 0;/* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_MaxChgCurrAlwdFAVal = 0;/* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_OFCRThrmSnsStopChrgOvrd =
    0;                                 /* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_OFCRThrmSnsStopChrgVal =
    0;                                 /* Referenced by: '<S226>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_Resp_Code_FAOvrd = 0;/* Referenced by: '<S227>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_Resp_Code_FAVal = 0;/* Referenced by: '<S228>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_RetrySelector = 0;/* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_SwtchblBttryPckEnbl = 0;/* Referenced by: '<S94>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_TxMsgSelector = 1;/* Referenced by: '<S229>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_TxMsgStatFAOvrd = 0;/* Referenced by: '<S230>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(boolean, CHFR_VAR_INIT) KeCHFR_b_TxMsgStatFAVal = 0;/* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(TeOBCR_e_ChrgFailSts, CHFR_VAR_INIT)
    KeCHFR_e_ChrgFailStsOvrdVal = CeOBCR_e_No_FLT;/* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(TeVTLR_e_DisChrgFailSts, CHFR_VAR_INIT)
    KeCHFR_e_Dschrg_FailureVal = CeVTLR_e_No_Fault;/* Referenced by: '<S233>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(TeOBCR_e_ProxStat_OBCM, CHFR_VAR_INIT)
    KeCHFR_e_EVSE_ProxStat_Val = CeOBCR_e_ProxLo_OBCM;/* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(TeOBCR_e_InterMarkets, CHFR_VAR_INIT)
    KeCHFR_e_InterMarketsSelection = CeOBCR_e_NorthAmerica;/* Referenced by: '<S53>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_k_ChrgFailCANCWU1 = 200;
                                   /* Referenced by: '<S136>/Stateflow_Chart' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_k_ChrgFailCANCWU2 = 200;
                                   /* Referenced by: '<S136>/Stateflow_Chart' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_k_ChrgFailCANCWU3 = 200;
                                   /* Referenced by: '<S136>/Stateflow_Chart' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_k_ChrgFailCANCWU4 = 200;
                                   /* Referenced by: '<S136>/Stateflow_Chart' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_k_ChrgFailCANCWU5 = 200;
                                   /* Referenced by: '<S136>/Stateflow_Chart' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_k_SizeChrgFault = 252;
                                   /* Referenced by: '<S136>/Stateflow_Chart' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_k_SizeChrgFaultnotPI = 252;
                                   /* Referenced by: '<S136>/Stateflow_Chart' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(sint16, CHFR_VAR_INIT) KeCHFR_k_SizeNbrRetries = 254;
                                   /* Referenced by: '<S136>/Stateflow_Chart' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(uint16, CHFR_VAR_INIT) KeCHFR_t_DbncChargingErrors = 30U;/* Referenced by:
                                                                      * '<S72>/Calib'
                                                                      * '<S81>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(uint16, CHFR_VAR_INIT) KeCHFR_t_DbncChargingErrorsV = 640U;/* Referenced by: '<S111>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(float32, CHFR_VAR_INIT) KeCHFR_t_NCRRefreshRate = 0.5F;
                                   /* Referenced by: '<S131>/Stateflow Chart' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(float32, CHFR_VAR_INIT) KeCHFR_v_SpeedThreshold = 1.0F;/* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(float32, CHFR_VAR_INIT) KtCHFR_k_ThrmalBudEncod[10] =
{
    0.0F, 0.1F, 0.2F, 0.3F, 0.4F, 0.5F, 0.6F, 0.7F, 0.8F, 0.9F
} ;                                    /* Referenced by: '<S128>/Vector' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static volatile CONST(float32, CHFR_VAR_INIT) KxCHFR_k_ThrmalBudEncod[10] =
{
    0.0F, 300.0F, 800.0F, 1500.0F, 2000.0F, 3000.0F, 4000.0F, 5000.0F, 6000.0F,
    7000.0F
} ;                                    /* Referenced by: '<S128>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_CHFR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CHFR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, CHFR_VAR_INIT) EeCHFR_b_ChrgSysFault;/* '<Root>/DSM_7' */

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VaCHFR_K_C1[15];/* '<S155>/Switch2' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VaCHFR_K_C16[15];/* '<S155>/Switch19' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VaCHFR_K_C3[15];/* '<S155>/Switch4' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VaCHFR_K_C4[15];/* '<S155>/Switch5' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VaCHFR_K_C6[7];/* '<S155>/Switch7' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VaCHFR_k_NbrRsn[5];/* '<S136>/Stateflow_Chart' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(uint16, CHFR_VAR_INIT) VeCHFR_Cnt_EStopCount;/* '<S161>/Switch1' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VeCHFR_K_C10;/* '<S155>/Switch11' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VeCHFR_K_C11;/* '<S155>/Switch12' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VeCHFR_K_C12;/* '<S155>/Switch13' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VeCHFR_K_C13;/* '<S155>/Switch14' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VeCHFR_K_C14;/* '<S155>/Switch15' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VeCHFR_K_C15;/* '<S155>/Switch16' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VeCHFR_K_C2;/* '<S155>/Switch3' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VeCHFR_K_C5;/* '<S155>/Switch6' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VeCHFR_K_C7;/* '<S155>/Switch8' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VeCHFR_K_C8;/* '<S155>/Switch9' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VeCHFR_K_C9;/* '<S155>/Switch10' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VeCHFR_K_DCRsn;/* '<S155>/Switch1' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VeCHFR_K_MainSFRsn;/* '<S155>/Switch' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(uint16, CHFR_VAR_INIT) VeCHFR_K_NCV_Size_adjSF;/* '<S136>/Stateflow_Chart' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VeCHFR_K_NCV_adjSF[79];/* '<S136>/Stateflow_Chart' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(uint16, CHFR_VAR_INIT) VeCHFR_K_NR;/* '<S136>/Stateflow_Chart' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(uint16, CHFR_VAR_INIT) VeCHFR_K_NumRetries;/* '<S137>/Switch' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_ACSideVolt_L2FA;/* '<S5>/Switch2' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_ACSideVolt_L3FA;/* '<S5>/Switch3' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_AC_FAs;/* '<S19>/Logical10' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_AC_InputVltOBCMFA;/* '<S5>/Switch64' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_BPCMFA_Active;/* '<S97>/AND' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_BattSide_CurrFA;/* '<S5>/Switch62' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_BattSide_VoltFA;/* '<S5>/Switch63' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_CANC_WU_NCVSF;/* '<S136>/Stateflow_Chart' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_ChargeReq;/* '<S5>/Switch1' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_ChargingStat_BPCMFA;/* '<S5>/Switch75' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_ChrgCrntFault;/* '<S9>/Merge1' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_ChrgFailStsFA;/* '<S5>/Switch61' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_ChrgFaultComb;/* '<S136>/Stateflow_Chart' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_ChrgFaultNCR;/* '<S10>/Switch1' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_ChrgPortOT_StopChrg;/* '<S5>/Switch19' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_ChrgSysFault5;/* '<S13>/Switch4' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_ChrgVoltageFault;/* '<S9>/Merge' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_ChrgVoltageFault3;/* '<S21>/Logical2' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_ConnectionFault;/* '<S14>/Switch1' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_DC_CntctrStatFA;/* '<S5>/Switch78' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_DC_FAs;/* '<S19>/Logical3' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_DschrgFA;/* '<S5>/Switch90' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_EVSEIsolSts_FA;/* '<S5>/Switch67' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_EVSEOutputCurr_FA;/* '<S5>/Switch79' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_EVSEOutputVolt_FA;/* '<S5>/Switch80' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_Fault_ChrgPort;/* '<S61>/AND' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_Fault_OBCM;/* '<S56>/AND' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_HMIR_MSG5_Test;/* '<S119>/Comparison2' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_HMIR_MSG6_Test;/* '<S119>/Logical3' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_HV_AuxLoadOffReqFA;/* '<S5>/Switch111' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_HV_BatCntctrStatFA;/* '<S5>/Switch81' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_HV_BatCurrFA;/* '<S5>/Switch70' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_HV_BatModTempMaxFA;/* '<S5>/Switch68' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_HV_BatModTempMinFA;/* '<S5>/Switch69' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_HV_BatModVoltMaxFA;/* '<S5>/Switch72' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_HV_BatModVoltMinFA;/* '<S5>/Switch73' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_HV_BatVoltFA;/* '<S5>/Switch71' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_HV_SeriesVoltFA;/* '<S5>/Switch110' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_IDCM_DCCA;/* '<S5>/Switch37' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_J1772ICAFA;/* '<S5>/Switch18' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_LOCBPCM;/* '<S19>/Logical9' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_LOC_FA;/* '<S19>/Logical1' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_MSG6_IndxSel;/* '<S119>/Selector1' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_MaxChgCurrAlwdFA;/* '<S5>/Switch74' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_OBCMFA_Active;/* '<S95>/AND' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_Resp_Code_FA;/* '<S5>/Switch65' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_SWBP_FA;/* '<S19>/Logical15' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_b_TxMsgStat_FA;/* '<S5>/Switch66' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(TeOBCR_e_ChrgFailSts, CHFR_VAR_INIT) VeCHFR_e_ChrgFailSts;/* '<S5>/Switch10' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VeCHFR_e_ChrgFault_Reason;/* '<S23>/Switch1' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(boolean, CHFR_VAR_INIT) VeCHFR_e_DCIsolStsFA;/* '<S5>/Switch93' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(TeVTLR_e_DisChrgFailSts, CHFR_VAR_INIT) VeCHFR_e_Dschrg_Failure;/* '<S5>/Switch77' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(TeOBCR_e_ProxStat_OBCM, CHFR_VAR_INIT) VeCHFR_e_EVSE_ProxStat_In;/* '<S5>/Switch59' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(sint16, CHFR_VAR_INIT) VeCHFR_k_ChrgSysFault_ReasonSF;/* '<S8>/NCR_SF' */

#endif

#if Rte_SysCon_Variant_CHFR_1

static VAR(float32, CHFR_VAR_INIT) VeCHFR_t_ChrgFailStTimer;/* '<S131>/Stateflow Chart' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CHFR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_CHFR
#include "MemMap.h"

CONST(ConstB_CHFR_ac_T, CHFR_VAR_INIT) CHFR_ac_ConstB =
{

#if Rte_SysCon_Variant_CHFR_1

    0,                                 /* '<S24>/Switch13' */

#define CONSTB_CHFR_AC_T_VARIANT_EXISTS
#endif

#if Rte_SysCon_Variant_CHFR_1

    0                                  /* '<S24>/Switch14' */
#define CONSTB_CHFR_AC_T_VARIANT_EXISTS
#endif
#ifndef CONSTB_CHFR_AC_T_VARIANT_EXISTS
    0
#endif                           /* CONSTB_CHFR_AC_T_VARIANT_EXISTS undefined */
};

#define STOP_SEC_CONST_UNSPECIFIED_CHFR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CHFR
#include "MemMap.h"

VAR(B_CHFR_ac_T, CHFR_VAR_INIT) CHFR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CHFR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CHFR
#include "MemMap.h"

VAR(DW_CHFR_ac_T, CHFR_VAR_INIT) CHFR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CHFR
#include "MemMap.h"

/* Model step function for TID1 */
#if Rte_SysCon_Variant_CHFR_1

FUNC(void, CHFR_CODE) CHFR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_CHFR_1

    uint16 j;

#endif

#if Rte_SysCon_Variant_CHFR_1

    uint16 k;

#endif

#if Rte_SysCon_Variant_CHFR_1

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_0;

#endif

#if Rte_SysCon_Variant_CHFR_1

    TeOBCR_e_ProxStat_OBCM tmpRead_1;

#endif

#if Rte_SysCon_Variant_CHFR_1

    float32 tmpRead_2;

#endif

#if Rte_SysCon_Variant_CHFR_1

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_4;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_5;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_6;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_7;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_8;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_9;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_a;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_b;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_c;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_d;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_e;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_f;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_g;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_h;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_i;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_j;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_k;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_l;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_m;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_n;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_o;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_p;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_q;

#endif

#if Rte_SysCon_Variant_CHFR_1

    TeVTLR_e_DisChrgFailSts tmpRead_r;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_s;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_t;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_u;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_v;

#endif

#if Rte_SysCon_Variant_CHFR_1

    TeHPMR_e_RsnForUnintndShtDwn tmpRead_w;

#endif

#if Rte_SysCon_Variant_CHFR_1

    TeOBCR_e_ChrgSysStat tmpRead_x;

#endif

#if Rte_SysCon_Variant_CHFR_1

    float32 tmpRead_y;

#endif

#if Rte_SysCon_Variant_CHFR_1

    float32 tmpRead_z;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead_10;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_Switch1_ja;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean rtb_Switch1_n;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean rtb_Comparison11;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean rtb_UnitDelay_hz;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean rtb_Logical5;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean rtb_TmpSignalConversionAtVeID_m;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean rtb_Logical17;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean rtb_TmpSignalConversionAtVeOB_o;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean rtb_Logical2_by;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean rtb_Logical2_kq;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_TmpSignalConversionAtVeOBCR;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean rtb_TmpSignalConversionAtVaOB_i[15];

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_Sum20;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_Sum21;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_Sum22;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_Sum23;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_Sum24;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_Sum25;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_Sum26;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_Sum1;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_Sum2;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_Sum3;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_Sum4;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_Sum5;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_TmpSignalConversionAtVaOBCR[15];

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_TmpSignalConversionAtVaO_lc[7];

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean rtb_TmpSignalConversionAtVeCPLR;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean rtb_TmpSignalConversionAtVeOB_i;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean rtb_TmpSignalConversionAtVeO_b2;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean rtb_TmpSignalConversionAtVeGE_p;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_MinMax1;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean rtb_AND_hk;

#endif

#if Rte_SysCon_Variant_CHFR_1

    uint16 rtb_Switch1_e;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean rtb_TmpSignalConversionAtVeGENR;

#endif

#if Rte_SysCon_Variant_CHFR_1

    float32 rtb_TmpSignalConversionAtVeIDCR;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_MinMax6;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_TmpSignalConversionAtVaHPMR[15];

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_TmpSignalConversionAtVaHP_m[15];

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_TmpSignalConversionAtSFunct[80];

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean rtb_TmpSignalConversionAtVeO_mt;

#endif

#if Rte_SysCon_Variant_CHFR_1

    boolean rtb_TmpSignalConversionAtVeCCCR;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_TmpSignalConversionAtVeDCCR;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_Sum6;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_Sum7_f;

#endif

#if Rte_SysCon_Variant_CHFR_1

    TeOBCR_e_ChargeType rtb_TmpSignalConversionAtVeOB_p;

#endif

#if Rte_SysCon_Variant_CHFR_1

    TeOBCR_e_ChargingLevel rtb_TmpSignalConversionAtVeOB_n;

#endif

#if Rte_SysCon_Variant_CHFR_1

    TeOBCR_e_ChrgFailSts rtb_Switch_j;

#endif

#if Rte_SysCon_Variant_CHFR_1

    TePMDR_e_PowerMode rtb_TmpSignalConversionAtVePMDR;

#endif

#if Rte_SysCon_Variant_CHFR_1

    float32 Switch;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint32 i;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint16 rtb_TmpSignalConversionAtVaHP_i;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint32 exitg1;

#endif

#if Rte_SysCon_Variant_CHFR_1

    sint32 exitg2;

#endif

#if Rte_SysCon_Variant_CHFR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* Outputs for Function Call SubSystem: '<Root>/CHFR_MedTED' */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_LosCommBECM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_Value
        (&CHFR_ac_DW.StatusByte_LosCommBECM_A);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LosCommBECM_A_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_CANC11_Value
        (&CHFR_ac_DW.StatusByte_LosCommBECM_A_CANC11);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_CtrlPilotCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CtrlPilotCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CtrlPilotCkt_Value
        (&CHFR_ac_DW.StatusByte_CtrlPilotCkt);

    /* End of Outputs for SubSystem: '<Root>/CHFR_MedTED' */

    /* Inport: '<Root>/VeIDCR_b_Response_Code_FA' */
    (void)Rte_Read_VeIDCR_b_Response_Code_FA_Value(&rtb_UnitDelay_hz);

    /* Inport: '<Root>/VeIDCR_b_AC_InputVltOBCMFA' */
    (void)Rte_Read_VeIDCR_b_AC_InputVltOBCMFA_Value(&rtb_Switch1_n);

    /* Inport: '<Root>/VeIDCR_b_BattSide_VoltFA' */
    (void)Rte_Read_VeIDCR_b_BattSide_VoltFA_Value(&rtb_Comparison11);

    /* Inport: '<Root>/VeIDCR_b_BattSide_CurrFA' */
    (void)Rte_Read_VeIDCR_b_BattSide_CurrFA_Value(&tmpRead_9);

    /* Inport: '<Root>/VeIDCR_b_ChrgFailStsFA' */
    (void)Rte_Read_VeIDCR_b_ChrgFailStsFA_Value(&tmpRead_8);

    /* Inport: '<Root>/VeIDCR_b_J1772InputCrntAvalFA' */
    (void)Rte_Read_VeIDCR_b_J1772InputCrntAvalFA_Value(&tmpRead_7);

    /* Inport: '<Root>/VeIDCR_b_IDCM_DCCA' */
    (void)Rte_Read_VeIDCR_b_IDCM_DCCA_Value(&tmpRead_6);

    /* Inport: '<Root>/VeOFCR_b_ChrgPortOT_StopChrg' */
    (void)Rte_Read_VeOFCR_b_ChrgPortOT_StopChrg_Value(&tmpRead_5);

    /* Inport: '<Root>/VeSCPR_b_ChargeReq' */
    (void)Rte_Read_VeSCPR_b_ChargeReq_Value(&tmpRead_4);

    /* Inport: '<Root>/VeIDCR_e_ProxStat' */
    (void)Rte_Read_VeIDCR_e_ProxStat_Value(&tmpRead_1);

    /* Inport: '<Root>/VeIDCR_e_ChrgFailSts' */
    (void)Rte_Read_VeIDCR_e_ChrgFailSts_Value(&rtb_Switch_j);

    /* Outputs for Function Call SubSystem: '<Root>/CHFR_MedTED' */
    /* SignalConversion generated from: '<S1>/VeIDCR_b_J1772_S2_Status' incorporates:
     *  Inport: '<Root>/VeIDCR_b_J1772_S2_Status'
     */
    (void)Rte_Read_VeIDCR_b_J1772_S2_Status_Value
        (&rtb_TmpSignalConversionAtVeID_m);

    /* SignalConversion generated from: '<S1>/VeIDCR_U_AC_InputVltOBCM' incorporates:
     *  Inport: '<Root>/VeIDCR_U_AC_InputVltOBCM'
     */
    (void)Rte_Read_VeIDCR_U_AC_InputVltOBCM_Value
        (&rtb_TmpSignalConversionAtVeIDCR);

    /* SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode' incorporates:
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value(&rtb_TmpSignalConversionAtVePMDR);

    /* SignalConversion generated from: '<S1>/VeGENR_b_LowVoltSysFld' incorporates:
     *  Inport: '<Root>/VeGENR_b_LowVoltSysFld'
     */
    (void)Rte_Read_VeGENR_b_LowVoltSysFld_Value(&rtb_TmpSignalConversionAtVeGENR);

    /* SignalConversion generated from: '<S1>/VaHPMR_K_RsnForUnintndShtDwn1' incorporates:
     *  Inport: '<Root>/VaHPMR_K_RsnForUnintndShtDwn1'
     */
    (void)Rte_Read_VaHPMR_K_RsnForUnintndShtDwn1_Value
        (rtb_TmpSignalConversionAtVaHPMR);

    /* SignalConversion generated from: '<S1>/VaHPMR_K_RsnForUnintndShtDwn2' incorporates:
     *  Inport: '<Root>/VaHPMR_K_RsnForUnintndShtDwn2'
     */
    (void)Rte_Read_VaHPMR_K_RsnForUnintndShtDwn2_Value
        (rtb_TmpSignalConversionAtVaHP_m);

    /* SignalConversion generated from: '<S1>/VaOBCR_b_NCR_Signals' incorporates:
     *  Inport: '<Root>/VaOBCR_b_NCR_Signals'
     */
    (void)Rte_Read_VaOBCR_b_NCR_Signals_Value(rtb_TmpSignalConversionAtVaOB_i);

    /* SignalConversion generated from: '<S1>/VeOBCR_Cnt_NCR' incorporates:
     *  Inport: '<Root>/VeOBCR_Cnt_NCR'
     */
    (void)Rte_Read_VeOBCR_Cnt_NCR_Value(&rtb_TmpSignalConversionAtVeOBCR);

    /* SignalConversion generated from: '<S1>/VeOBCR_b_EnablePowerTransfer' incorporates:
     *  Inport: '<Root>/VeOBCR_b_EnablePowerTransfer'
     */
    (void)Rte_Read_VeOBCR_b_EnablePowerTransfer_Value
        (&rtb_TmpSignalConversionAtVeO_mt);

    /* SignalConversion generated from: '<S1>/VeDCCR_K_DCExitRsn_SF' incorporates:
     *  Inport: '<Root>/VeDCCR_k_DCExitRsn_SF'
     */
    (void)Rte_Read_VeDCCR_k_DCExitRsn_SF_Value(&rtb_TmpSignalConversionAtVeDCCR);

    /* SignalConversion generated from: '<S1>/VaOBCR_Cnt_PlugIn_Vector' incorporates:
     *  Inport: '<Root>/VaOBCR_Cnt_PlugIn_Vector'
     */
    (void)Rte_Read_VaOBCR_Cnt_PlugIn_Vector_Value
        (rtb_TmpSignalConversionAtVaOBCR);

    /* SignalConversion generated from: '<S1>/VaOBCR_k_InitChecks_Vector' incorporates:
     *  Inport: '<Root>/VaOBCR_k_InitChecks_Vector'
     */
    (void)Rte_Read_VaOBCR_k_InitChecks_Vector_Value
        (rtb_TmpSignalConversionAtVaO_lc);

    /* SignalConversion generated from: '<S1>/VeOBCR_b_PluggedIn' incorporates:
     *  Inport: '<Root>/VeOBCR_b_PluggedIn'
     */
    (void)Rte_Read_VeOBCR_b_PluggedIn_Value(&rtb_TmpSignalConversionAtVeOB_i);

    /* SignalConversion generated from: '<S1>/VeCCCR_b_ChrgCmplteCondtnMet' incorporates:
     *  Inport: '<Root>/VeCCCR_b_ChrgCmplteCondtnMet'
     */
    (void)Rte_Read_VeCCCR_b_ChrgCmplteCondtnMet_Value
        (&rtb_TmpSignalConversionAtVeCCCR);

    /* SignalConversion generated from: '<S1>/VeOBCR_e_ChargingLevel' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     */
    (void)Rte_Read_VeOBCR_e_ChargingLevel_Value(&rtb_TmpSignalConversionAtVeOB_n);

    /* SignalConversion generated from: '<S1>/VeCPLR_b_RelockTimerActive' incorporates:
     *  Inport: '<Root>/VeCPLR_b_RelockTimerActive'
     */
    (void)Rte_Read_VeCPLR_b_RelockTimerActive_Value
        (&rtb_TmpSignalConversionAtVeCPLR);

    /* SignalConversion generated from: '<S1>/VeOBCR_e_ChargeType' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargeType'
     */
    (void)Rte_Read_VeOBCR_e_ChargeType_Value(&rtb_TmpSignalConversionAtVeOB_p);

    /* SignalConversion generated from: '<S1>/VeOBCR_b_ChrgrLOC' incorporates:
     *  Inport: '<Root>/VeOBCR_b_ChrgrLOC'
     */
    (void)Rte_Read_VeOBCR_b_ChrgrLOC_Value(&rtb_TmpSignalConversionAtVeO_b2);

    /* SignalConversion generated from: '<S1>/VeOBCR_b_SecureConnV2L' incorporates:
     *  Inport: '<Root>/VeOBCR_b_SecureConnV2L'
     */
    (void)Rte_Read_VeOBCR_b_SecureConnV2L_Value(&rtb_TmpSignalConversionAtVeOB_o);

    /* SignalConversion generated from: '<S1>/VeGENR_b_IDCMThrmlRunAway' incorporates:
     *  Inport: '<Root>/VeGENR_b_IDCMThrmlRunAway'
     */
    (void)Rte_Read_VeGENR_b_IDCMThrmlRunAway_Value
        (&rtb_TmpSignalConversionAtVeGE_p);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHFI'
     */
    /* Switch: '<S5>/Switch10' incorporates:
     *  Constant: '<S186>/Calib'
     */
    if (KeCHFR_b_ChrgFailStsOvrd)
    {
        /* Switch: '<S5>/Switch10' incorporates:
         *  Constant: '<S232>/Calib'
         */
        VeCHFR_e_ChrgFailSts = KeCHFR_e_ChrgFailStsOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch10' incorporates:
         *  Inport: '<Root>/VeIDCR_e_ChrgFailSts'
         */
        VeCHFR_e_ChrgFailSts = rtb_Switch_j;
    }

    /* End of Switch: '<S5>/Switch10' */

    /* Switch: '<S5>/Switch59' incorporates:
     *  Constant: '<S198>/Calib'
     */
    if (KeCHFR_b_EVSE_ProxStat_Ovrd)
    {
        /* Switch: '<S5>/Switch59' incorporates:
         *  Constant: '<S234>/Calib'
         */
        VeCHFR_e_EVSE_ProxStat_In = KeCHFR_e_EVSE_ProxStat_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch59' incorporates:
         *  Inport: '<Root>/VeIDCR_e_ProxStat'
         */
        VeCHFR_e_EVSE_ProxStat_In = tmpRead_1;
    }

    /* End of Switch: '<S5>/Switch59' */

    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S180>/Calib'
     */
    if (KeCHFR_b_ChargeReqOvrd)
    {
        /* Switch: '<S5>/Switch1' incorporates:
         *  Constant: '<S181>/Calib'
         */
        VeCHFR_b_ChargeReq = KeCHFR_b_ChargeReqOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch1' */
        VeCHFR_b_ChargeReq = tmpRead_4;
    }

    /* End of Switch: '<S5>/Switch1' */

    /* Switch: '<S5>/Switch19' incorporates:
     *  Constant: '<S225>/Calib'
     */
    if (KeCHFR_b_OFCRThrmSnsStopChrgOvrd)
    {
        /* Switch: '<S5>/Switch19' incorporates:
         *  Constant: '<S226>/Calib'
         */
        VeCHFR_b_ChrgPortOT_StopChrg = KeCHFR_b_OFCRThrmSnsStopChrgVal;
    }
    else
    {
        /* Switch: '<S5>/Switch19' */
        VeCHFR_b_ChrgPortOT_StopChrg = tmpRead_5;
    }

    /* End of Switch: '<S5>/Switch19' */

    /* Switch: '<S5>/Switch37' incorporates:
     *  Constant: '<S219>/Calib'
     */
    if (KeCHFR_b_IDCM_DCCAOvrd)
    {
        /* Switch: '<S5>/Switch37' incorporates:
         *  Constant: '<S220>/Calib'
         */
        VeCHFR_b_IDCM_DCCA = KeCHFR_b_IDCM_DCCAOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch37' */
        VeCHFR_b_IDCM_DCCA = tmpRead_6;
    }

    /* End of Switch: '<S5>/Switch37' */

    /* Switch: '<S5>/Switch18' incorporates:
     *  Constant: '<S221>/Calib'
     */
    if (KeCHFR_b_J1772ICAFAOvrd)
    {
        /* Switch: '<S5>/Switch18' incorporates:
         *  Constant: '<S222>/Calib'
         */
        VeCHFR_b_J1772ICAFA = KeCHFR_b_J1772ICAFAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch18' */
        VeCHFR_b_J1772ICAFA = tmpRead_7;
    }

    /* End of Switch: '<S5>/Switch18' */

    /* Switch: '<S5>/Switch61' incorporates:
     *  Constant: '<S184>/Calib'
     */
    if (KeCHFR_b_ChrgFailStsFAOvrd)
    {
        /* Switch: '<S5>/Switch61' incorporates:
         *  Constant: '<S185>/Calib'
         */
        VeCHFR_b_ChrgFailStsFA = KeCHFR_b_ChrgFailStsFAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch61' */
        VeCHFR_b_ChrgFailStsFA = tmpRead_8;
    }

    /* End of Switch: '<S5>/Switch61' */

    /* Switch: '<S5>/Switch62' incorporates:
     *  Constant: '<S176>/Calib'
     */
    if (KeCHFR_b_BattSide_CurrFAOvrd)
    {
        /* Switch: '<S5>/Switch62' incorporates:
         *  Constant: '<S177>/Calib'
         */
        VeCHFR_b_BattSide_CurrFA = KeCHFR_b_BattSide_CurrFAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch62' */
        VeCHFR_b_BattSide_CurrFA = tmpRead_9;
    }

    /* End of Switch: '<S5>/Switch62' */

    /* Switch: '<S5>/Switch63' incorporates:
     *  Constant: '<S178>/Calib'
     */
    if (KeCHFR_b_BattSide_VoltFAOvrd)
    {
        /* Switch: '<S5>/Switch63' incorporates:
         *  Constant: '<S179>/Calib'
         */
        VeCHFR_b_BattSide_VoltFA = KeCHFR_b_BattSide_VoltFAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch63' */
        VeCHFR_b_BattSide_VoltFA = rtb_Comparison11;
    }

    /* End of Switch: '<S5>/Switch63' */

    /* Switch: '<S5>/Switch64' incorporates:
     *  Constant: '<S174>/Calib'
     */
    if (KeCHFR_b_AC_InputVltOBCMFAOvrd)
    {
        /* Switch: '<S5>/Switch64' incorporates:
         *  Constant: '<S175>/Calib'
         */
        VeCHFR_b_AC_InputVltOBCMFA = KeCHFR_b_AC_InputVltOBCMFAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch64' */
        VeCHFR_b_AC_InputVltOBCMFA = rtb_Switch1_n;
    }

    /* End of Switch: '<S5>/Switch64' */

    /* Switch: '<S5>/Switch65' incorporates:
     *  Constant: '<S227>/Calib'
     */
    if (KeCHFR_b_Resp_Code_FAOvrd)
    {
        /* Switch: '<S5>/Switch65' incorporates:
         *  Constant: '<S228>/Calib'
         */
        VeCHFR_b_Resp_Code_FA = KeCHFR_b_Resp_Code_FAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch65' */
        VeCHFR_b_Resp_Code_FA = rtb_UnitDelay_hz;
    }

    /* End of Switch: '<S5>/Switch65' */

    /* Switch: '<S5>/Switch66' incorporates:
     *  Constant: '<S230>/Calib'
     *  Inport: '<Root>/VeIDCR_b_TxMsgRequest_FA'
     *  Inport: '<Root>/VeIDCR_b_TxMsgResponse_FA'
     */
    if (KeCHFR_b_TxMsgStatFAOvrd)
    {
        /* Switch: '<S5>/Switch66' incorporates:
         *  Constant: '<S231>/Calib'
         */
        VeCHFR_b_TxMsgStat_FA = KeCHFR_b_TxMsgStatFAVal;
    }
    else
    {
        (void)Rte_Read_VeIDCR_b_TxMsgResponse_FA_Value(&tmpRead_o);
        (void)Rte_Read_VeIDCR_b_TxMsgRequest_FA_Value(&tmpRead_a);

        /* Switch: '<S5>/Switch83' incorporates:
         *  Constant: '<S229>/Calib'
         *  Inport: '<Root>/VeIDCR_b_TxMsgRequest_FA'
         *  Inport: '<Root>/VeIDCR_b_TxMsgResponse_FA'
         */
        if (KeCHFR_b_TxMsgSelector)
        {
            /* Switch: '<S5>/Switch66' */
            VeCHFR_b_TxMsgStat_FA = tmpRead_a;
        }
        else
        {
            /* Switch: '<S5>/Switch66' */
            VeCHFR_b_TxMsgStat_FA = tmpRead_o;
        }

        /* End of Switch: '<S5>/Switch83' */
    }

    /* End of Switch: '<S5>/Switch66' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CHFR_MedTED' */

    /* Inport: '<Root>/VeOBCR_Cnt_PlugIn_Reason' */
    (void)Rte_Read_VeOBCR_Cnt_PlugIn_Reason_Value(&rtb_Switch1_ja);

    /* Inport: '<Root>/VeHPMR_e_RsnForUnintndShtDwn' */
    (void)Rte_Read_VeHPMR_e_RsnForUnintndShtDwn_Value(&tmpRead_w);

    /* Inport: '<Root>/VeSRAR_k_ReasonStopCharging' */
    (void)Rte_Read_VeSRAR_k_ReasonStopCharging_Value(&rtb_MinMax1);

    /* Inport: '<Root>/VeBPCR_b_HV_AuxLoadOffReqFA' */
    (void)Rte_Read_VeBPCR_b_HV_AuxLoadOffReqFA_Value(&tmpRead_v);

    /* Inport: '<Root>/VeBPCR_b_HV_SeriesVoltFA' */
    (void)Rte_Read_VeBPCR_b_HV_SeriesVoltFA_Value(&tmpRead_u);

    /* Inport: '<Root>/VeBPCR_b_DCIsolStsFA' */
    (void)Rte_Read_VeBPCR_b_DCIsolStsFA_Value(&tmpRead_t);

    /* Inport: '<Root>/VeIDCR_b_V2L_DischargeFailStsFA' */
    (void)Rte_Read_VeIDCR_b_V2L_DischargeFailStsFA_Value(&tmpRead_s);

    /* Inport: '<Root>/VeIDCR_e_V2L_DischargeFailSts' */
    (void)Rte_Read_VeIDCR_e_V2L_DischargeFailSts_Value(&tmpRead_r);

    /* Inport: '<Root>/VeIDCR_b_ACSideVolt_L3FA' */
    (void)Rte_Read_VeIDCR_b_ACSideVolt_L3FA_Value(&tmpRead_q);

    /* Inport: '<Root>/VeIDCR_b_ACSideVolt_L2FA' */
    (void)Rte_Read_VeIDCR_b_ACSideVolt_L2FA_Value(&tmpRead_p);

    /* Inport: '<Root>/VeIDCR_b_EVSEOutputVolt_FA' */
    (void)Rte_Read_VeIDCR_b_EVSEOutputVolt_FA_Value(&tmpRead_n);

    /* Inport: '<Root>/VeIDCR_b_EVSEOutputCurr_FA' */
    (void)Rte_Read_VeIDCR_b_EVSEOutputCurr_FA_Value(&tmpRead_m);

    /* Inport: '<Root>/VeBPCR_b_HV_BatCntctrStatFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatCntctrStatFA_Value(&tmpRead_l);

    /* Inport: '<Root>/VeBPCR_b_HVBat_DC_CntctrStat_FA' */
    (void)Rte_Read_VeBPCR_b_HVBat_DC_CntctrStat_FA_Value(&tmpRead_k);

    /* Inport: '<Root>/VeBPCR_b_ChargingStat_BPCMFA' */
    (void)Rte_Read_VeBPCR_b_ChargingStat_BPCMFA_Value(&tmpRead_j);

    /* Inport: '<Root>/VeBPCR_b_MaxChgCurrAlwdFA' */
    (void)Rte_Read_VeBPCR_b_MaxChgCurrAlwdFA_Value(&tmpRead_i);

    /* Inport: '<Root>/VeBPCR_b_HV_BatModVoltMinFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatModVoltMinFA_Value(&tmpRead_h);

    /* Inport: '<Root>/VeBPCR_b_HV_BatModVoltMaxFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatModVoltMaxFA_Value(&tmpRead_g);

    /* Inport: '<Root>/VeBPCR_b_HV_BatVoltFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatVoltFA_Value(&tmpRead_f);

    /* Inport: '<Root>/VeBPCR_b_HV_BatCurrFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatCurrFA_Value(&tmpRead_e);

    /* Inport: '<Root>/VeBPCR_b_HV_BatModTempMinFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatModTempMinFA_Value(&tmpRead_d);

    /* Inport: '<Root>/VeBPCR_b_HV_BatModTempMaxFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatModTempMaxFA_Value(&tmpRead_c);

    /* Inport: '<Root>/VeIDCR_b_EVSEIsolSts_FA' */
    (void)Rte_Read_VeIDCR_b_EVSEIsolSts_FA_Value(&tmpRead_b);

    /* Inport: '<Root>/VeIDCR_b_ChrgCrntAvailFA' */
    (void)Rte_Read_VeIDCR_b_ChrgCrntAvailFA_Value(&tmpRead_0);

    /* Outputs for Function Call SubSystem: '<Root>/CHFR_MedTED' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHFI'
     */
    /* Switch: '<S5>/Switch67' incorporates:
     *  Constant: '<S192>/Calib'
     */
    if (KeCHFR_b_EVSEIsolSts_FAOvrd)
    {
        /* Switch: '<S5>/Switch67' incorporates:
         *  Constant: '<S193>/Calib'
         */
        VeCHFR_b_EVSEIsolSts_FA = KeCHFR_b_EVSEIsolSts_FAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch67' */
        VeCHFR_b_EVSEIsolSts_FA = tmpRead_b;
    }

    /* End of Switch: '<S5>/Switch67' */

    /* Switch: '<S5>/Switch68' incorporates:
     *  Constant: '<S207>/Calib'
     */
    if (KeCHFR_b_HV_BatModTempMaxFAOvrd)
    {
        /* Switch: '<S5>/Switch68' incorporates:
         *  Constant: '<S208>/Calib'
         */
        VeCHFR_b_HV_BatModTempMaxFA = KeCHFR_b_HV_BatModTempMaxFAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch68' */
        VeCHFR_b_HV_BatModTempMaxFA = tmpRead_c;
    }

    /* End of Switch: '<S5>/Switch68' */

    /* Switch: '<S5>/Switch69' incorporates:
     *  Constant: '<S209>/Calib'
     */
    if (KeCHFR_b_HV_BatModTempMinFAOvrd)
    {
        /* Switch: '<S5>/Switch69' incorporates:
         *  Constant: '<S210>/Calib'
         */
        VeCHFR_b_HV_BatModTempMinFA = KeCHFR_b_HV_BatModTempMinFAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch69' */
        VeCHFR_b_HV_BatModTempMinFA = tmpRead_d;
    }

    /* End of Switch: '<S5>/Switch69' */

    /* Switch: '<S5>/Switch70' incorporates:
     *  Constant: '<S205>/Calib'
     */
    if (KeCHFR_b_HV_BatCurrFAOvrd)
    {
        /* Switch: '<S5>/Switch70' incorporates:
         *  Constant: '<S206>/Calib'
         */
        VeCHFR_b_HV_BatCurrFA = KeCHFR_b_HV_BatCurrFAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch70' */
        VeCHFR_b_HV_BatCurrFA = tmpRead_e;
    }

    /* End of Switch: '<S5>/Switch70' */

    /* Switch: '<S5>/Switch71' incorporates:
     *  Constant: '<S215>/Calib'
     */
    if (KeCHFR_b_HV_BatVoltFAOvrd)
    {
        /* Switch: '<S5>/Switch71' incorporates:
         *  Constant: '<S216>/Calib'
         */
        VeCHFR_b_HV_BatVoltFA = KeCHFR_b_HV_BatVoltFAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch71' */
        VeCHFR_b_HV_BatVoltFA = tmpRead_f;
    }

    /* End of Switch: '<S5>/Switch71' */

    /* Switch: '<S5>/Switch72' incorporates:
     *  Constant: '<S211>/Calib'
     */
    if (KeCHFR_b_HV_BatModVoltMaxFAOvrd)
    {
        /* Switch: '<S5>/Switch72' incorporates:
         *  Constant: '<S212>/Calib'
         */
        VeCHFR_b_HV_BatModVoltMaxFA = KeCHFR_b_HV_BatModVoltMaxFAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch72' */
        VeCHFR_b_HV_BatModVoltMaxFA = tmpRead_g;
    }

    /* End of Switch: '<S5>/Switch72' */

    /* Switch: '<S5>/Switch73' incorporates:
     *  Constant: '<S213>/Calib'
     */
    if (KeCHFR_b_HV_BatModVoltMinFAOvrd)
    {
        /* Switch: '<S5>/Switch73' incorporates:
         *  Constant: '<S214>/Calib'
         */
        VeCHFR_b_HV_BatModVoltMinFA = KeCHFR_b_HV_BatModVoltMinFAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch73' */
        VeCHFR_b_HV_BatModVoltMinFA = tmpRead_h;
    }

    /* End of Switch: '<S5>/Switch73' */

    /* Switch: '<S5>/Switch74' incorporates:
     *  Constant: '<S223>/Calib'
     */
    if (KeCHFR_b_MaxChgCurrAlwdFAOvrd)
    {
        /* Switch: '<S5>/Switch74' incorporates:
         *  Constant: '<S224>/Calib'
         */
        VeCHFR_b_MaxChgCurrAlwdFA = KeCHFR_b_MaxChgCurrAlwdFAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch74' */
        VeCHFR_b_MaxChgCurrAlwdFA = tmpRead_i;
    }

    /* End of Switch: '<S5>/Switch74' */

    /* Switch: '<S5>/Switch75' incorporates:
     *  Constant: '<S182>/Calib'
     */
    if (KeCHFR_b_ChargingStat_BPCMFAOvrd)
    {
        /* Switch: '<S5>/Switch75' incorporates:
         *  Constant: '<S183>/Calib'
         */
        VeCHFR_b_ChargingStat_BPCMFA = KeCHFR_b_ChargingStat_BPCMFAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch75' */
        VeCHFR_b_ChargingStat_BPCMFA = tmpRead_j;
    }

    /* End of Switch: '<S5>/Switch75' */

    /* Switch: '<S5>/Switch78' incorporates:
     *  Constant: '<S199>/Calib'
     */
    if (KeCHFR_b_HVBat_DC_CntctrStatFAOvrd)
    {
        /* Switch: '<S5>/Switch78' incorporates:
         *  Constant: '<S200>/Calib'
         */
        VeCHFR_b_DC_CntctrStatFA = KeCHFR_b_HVBat_DC_CntctrStatFAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch78' */
        VeCHFR_b_DC_CntctrStatFA = tmpRead_k;
    }

    /* End of Switch: '<S5>/Switch78' */

    /* Switch: '<S5>/Switch81' incorporates:
     *  Constant: '<S203>/Calib'
     */
    if (KeCHFR_b_HV_BatCntctrStatFAOvrd)
    {
        /* Switch: '<S5>/Switch81' incorporates:
         *  Constant: '<S204>/Calib'
         */
        VeCHFR_b_HV_BatCntctrStatFA = KeCHFR_b_HV_BatCntctrStatFAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch81' */
        VeCHFR_b_HV_BatCntctrStatFA = tmpRead_l;
    }

    /* End of Switch: '<S5>/Switch81' */

    /* Switch: '<S5>/Switch79' incorporates:
     *  Constant: '<S194>/Calib'
     */
    if (KeCHFR_b_EVSEOutputCurr_FAOvrd)
    {
        /* Switch: '<S5>/Switch79' incorporates:
         *  Constant: '<S195>/Calib'
         */
        VeCHFR_b_EVSEOutputCurr_FA = KeCHFR_b_EVSEOutputCurr_FAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch79' */
        VeCHFR_b_EVSEOutputCurr_FA = tmpRead_m;
    }

    /* End of Switch: '<S5>/Switch79' */

    /* Switch: '<S5>/Switch80' incorporates:
     *  Constant: '<S196>/Calib'
     */
    if (KeCHFR_b_EVSEOutputVolt_FAOvrd)
    {
        /* Switch: '<S5>/Switch80' incorporates:
         *  Constant: '<S197>/Calib'
         */
        VeCHFR_b_EVSEOutputVolt_FA = KeCHFR_b_EVSEOutputVolt_FAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch80' */
        VeCHFR_b_EVSEOutputVolt_FA = tmpRead_n;
    }

    /* End of Switch: '<S5>/Switch80' */

    /* Switch: '<S5>/Switch77' incorporates:
     *  Constant: '<S191>/Calib'
     */
    if (KeCHFR_b_Dschrg_FailureOvrd)
    {
        /* Switch: '<S5>/Switch77' incorporates:
         *  Constant: '<S233>/Calib'
         */
        VeCHFR_e_Dschrg_Failure = KeCHFR_e_Dschrg_FailureVal;
    }
    else
    {
        /* Switch: '<S5>/Switch77' incorporates:
         *  Inport: '<Root>/VeIDCR_e_V2L_DischargeFailSts'
         */
        VeCHFR_e_Dschrg_Failure = tmpRead_r;
    }

    /* End of Switch: '<S5>/Switch77' */

    /* Switch: '<S5>/Switch90' incorporates:
     *  Constant: '<S189>/Calib'
     */
    if (KeCHFR_b_DschrgFAOvrd)
    {
        /* Switch: '<S5>/Switch90' incorporates:
         *  Constant: '<S190>/Calib'
         */
        VeCHFR_b_DschrgFA = KeCHFR_b_DschrgFAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch90' */
        VeCHFR_b_DschrgFA = tmpRead_s;
    }

    /* End of Switch: '<S5>/Switch90' */

    /* Switch: '<S5>/Switch93' incorporates:
     *  Constant: '<S187>/Calib'
     */
    if (KeCHFR_b_DCIsolStsFAOvrd)
    {
        /* Switch: '<S5>/Switch93' incorporates:
         *  Constant: '<S188>/Calib'
         */
        VeCHFR_e_DCIsolStsFA = KeCHFR_b_DCIsolStsFAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch93' */
        VeCHFR_e_DCIsolStsFA = tmpRead_t;
    }

    /* End of Switch: '<S5>/Switch93' */

    /* Switch: '<S5>/Switch110' incorporates:
     *  Constant: '<S217>/Calib'
     */
    if (KeCHFR_b_HV_SeriesVoltFAovrd)
    {
        /* Switch: '<S5>/Switch110' incorporates:
         *  Constant: '<S218>/Calib'
         */
        VeCHFR_b_HV_SeriesVoltFA = KeCHFR_b_HV_SeriesVoltFAovrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch110' */
        VeCHFR_b_HV_SeriesVoltFA = tmpRead_u;
    }

    /* End of Switch: '<S5>/Switch110' */

    /* Switch: '<S5>/Switch111' incorporates:
     *  Constant: '<S201>/Calib'
     */
    if (KeCHFR_b_HV_AuxLoadOffReqFAovrd)
    {
        /* Switch: '<S5>/Switch111' incorporates:
         *  Constant: '<S202>/Calib'
         */
        VeCHFR_b_HV_AuxLoadOffReqFA = KeCHFR_b_HV_AuxLoadOffReqFAovrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch111' */
        VeCHFR_b_HV_AuxLoadOffReqFA = tmpRead_v;
    }

    /* End of Switch: '<S5>/Switch111' */

    /* Switch: '<S5>/Switch2' incorporates:
     *  Constant: '<S170>/Calib'
     */
    if (KeCHFR_b_ACSideVolt_L2FAOvrd)
    {
        /* Switch: '<S5>/Switch2' incorporates:
         *  Constant: '<S171>/Calib'
         */
        VeCHFR_b_ACSideVolt_L2FA = KeCHFR_b_ACSideVolt_L2FAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch2' */
        VeCHFR_b_ACSideVolt_L2FA = tmpRead_p;
    }

    /* End of Switch: '<S5>/Switch2' */

    /* Switch: '<S5>/Switch3' incorporates:
     *  Constant: '<S172>/Calib'
     */
    if (KeCHFR_b_ACSideVolt_L3FAOvrd)
    {
        /* Switch: '<S5>/Switch3' incorporates:
         *  Constant: '<S173>/Calib'
         */
        VeCHFR_b_ACSideVolt_L3FA = KeCHFR_b_ACSideVolt_L3FAVal;
    }
    else
    {
        /* Switch: '<S5>/Switch3' */
        VeCHFR_b_ACSideVolt_L3FA = tmpRead_q;
    }

    /* End of Switch: '<S5>/Switch3' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHFC'
     */
    /* MinMax: '<S157>/MinMax1' incorporates:
     *  Constant: '<S147>/Calib'
     */
    if (rtb_MinMax1 >= KeCHFR_Cnt_KR2)
    {
        /* MinMax: '<S157>/MinMax1' */
        rtb_MinMax1 = KeCHFR_Cnt_KR2;
    }

    /* End of MinMax: '<S157>/MinMax1' */

    /* Logic: '<S19>/Logical9' incorporates:
     *  Constant: '<S87>/Calib'
     *  Constant: '<S93>/Calib'
     *  Constant: '<S98>/Constant1'
     *  Constant: '<S98>/Constant2'
     *  Constant: '<S99>/Constant1'
     *  Constant: '<S99>/Constant2'
     *  DataStoreRead: '<S98>/StatusByte_LosCommBECM_A_CANC11'
     *  DataStoreRead: '<S99>/StatusByte_LosCommBECM_A'
     *  Logic: '<S19>/Logical'
     *  Logic: '<S19>/Logical4'
     *  Logic: '<S98>/Logical Operator'
     *  Logic: '<S99>/Logical Operator'
     *  RelationalOperator: '<S98>/Relational Operator1'
     *  RelationalOperator: '<S98>/Relational Operator2'
     *  RelationalOperator: '<S99>/Relational Operator1'
     *  RelationalOperator: '<S99>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S98>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S98>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S99>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S99>/Bitwise Operator2'
     */
    VeCHFR_b_LOCBPCM = (((((((sint32)CHFR_ac_DW.StatusByte_LosCommBECM_A) & 1) >
                           0) && ((((uint32)CHFR_ac_DW.StatusByte_LosCommBECM_A)
                            & 64U) == 0U)) && (KeCHFR_b_LOC_BPCM)) &&
                        ((((((sint32)CHFR_ac_DW.StatusByte_LosCommBECM_A_CANC11)
                            & 1) > 0) && ((((uint32)
        CHFR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 64U) == 0U)) !=
                         HeCHFR_b_LOCBPCMSecBus));

    /* Logic: '<S19>/Logical10' */
    VeCHFR_b_AC_FAs = (((((((tmpRead_0 || (VeCHFR_b_J1772ICAFA)) ||
                            (VeCHFR_b_BattSide_CurrFA)) ||
                           (VeCHFR_b_BattSide_VoltFA)) ||
                          (VeCHFR_b_AC_InputVltOBCMFA)) ||
                         (VeCHFR_b_ChrgFailStsFA)) || (VeCHFR_b_ACSideVolt_L2FA))
                       || (VeCHFR_b_ACSideVolt_L3FA));

    /* Logic: '<S19>/Logical3' */
    VeCHFR_b_DC_FAs = (((((VeCHFR_b_Resp_Code_FA) || (VeCHFR_b_TxMsgStat_FA)) ||
                         (VeCHFR_b_EVSEIsolSts_FA)) ||
                        (VeCHFR_b_EVSEOutputCurr_FA)) ||
                       (VeCHFR_b_EVSEOutputVolt_FA));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CHFR_MedTED' */

    /* Inport: '<Root>/VeIDCR_b_ProxStatFA' */
    (void)Rte_Read_VeIDCR_b_ProxStatFA_Value(&rtb_Logical5);

    /* Inport: '<Root>/VeIDCR_b_J1772_S2_StatusFA' */
    (void)Rte_Read_VeIDCR_b_J1772_S2_StatusFA_Value(&rtb_AND_hk);

    /* Outputs for Function Call SubSystem: '<Root>/CHFR_MedTED' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHFC'
     */
    /* Switch: '<S19>/Switch1' incorporates:
     *  Constant: '<S85>/Constant'
     *  Constant: '<S91>/Calib'
     *  Logic: '<S19>/Logical11'
     *  RelationalOperator: '<S19>/Comparison1'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_ChargeType'
     */
    if (KeCHFR_b_AllowDC_ACFA)
    {
        rtb_UnitDelay_hz = ((VeCHFR_b_AC_FAs) && (((uint32)
                              rtb_TmpSignalConversionAtVeOB_p) == CeOBCR_e_AC));
    }
    else
    {
        rtb_UnitDelay_hz = VeCHFR_b_AC_FAs;
    }

    /* End of Switch: '<S19>/Switch1' */

    /* Switch: '<S19>/Switch' incorporates:
     *  Constant: '<S84>/Constant'
     *  Constant: '<S90>/Calib'
     *  Logic: '<S19>/Logical7'
     *  RelationalOperator: '<S19>/Comparison4'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_ChargeType'
     */
    if (KeCHFR_b_AllowAC_DCFA)
    {
        rtb_Switch1_n = ((VeCHFR_b_DC_FAs) && (((uint32)
                           rtb_TmpSignalConversionAtVeOB_p) == CeOBCR_e_DC));
    }
    else
    {
        rtb_Switch1_n = VeCHFR_b_DC_FAs;
    }

    /* End of Switch: '<S19>/Switch' */

    /* Switch: '<S19>/Switch2' incorporates:
     *  Constant: '<S86>/Constant'
     *  Constant: '<S92>/Calib'
     *  Logic: '<S19>/Logical13'
     *  Logic: '<S19>/Logical8'
     *  RelationalOperator: '<S19>/Comparison2'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_ChargeType'
     */
    if (KeCHFR_b_AllowDischrg_FA)
    {
        rtb_Comparison11 = ((((VeCHFR_b_DschrgFA) || (VeCHFR_b_BattSide_CurrFA))
                             || (VeCHFR_b_BattSide_VoltFA)) && (((uint32)
                              rtb_TmpSignalConversionAtVeOB_p) ==
                             CeOBCR_e_Discharge));
    }
    else
    {
        rtb_Comparison11 = (((VeCHFR_b_DschrgFA) || (VeCHFR_b_BattSide_CurrFA)) ||
                            (VeCHFR_b_BattSide_VoltFA));
    }

    /* End of Switch: '<S19>/Switch2' */

    /* Logic: '<S19>/Logical5' */
    rtb_Logical5 = ((((rtb_AND_hk || rtb_Logical5) || rtb_UnitDelay_hz) ||
                     rtb_Switch1_n) || rtb_Comparison11);

    /* Outputs for Atomic SubSystem: '<S19>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S95>/EdgeRising' */
    /* Logic: '<S100>/AND' incorporates:
     *  Logic: '<S100>/OR1'
     *  UnitDelay: '<S100>/Unit Delay'
     */
    rtb_AND_hk = (rtb_Logical5 && (!CHFR_ac_DW.UnitDelay_DSTATE_gd));

    /* Update for UnitDelay: '<S100>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_gd = rtb_Logical5;

    /* End of Outputs for SubSystem: '<S95>/EdgeRising' */

    /* Switch: '<S95>/Switch1' incorporates:
     *  Constant: '<S88>/Calib'
     *  Constant: '<S95>/Constant Value'
     *  Logic: '<S95>/OR'
     *  Logic: '<S95>/OR1'
     *  MinMax: '<S95>/Minimum'
     *  Sum: '<S95>/Summation'
     *  UnitDelay: '<S95>/Unit Delay'
     */
    if ((!rtb_Logical5) || rtb_AND_hk)
    {
        /* Switch: '<S95>/Switch1' incorporates:
         *  Constant: '<S95>/Constant Value1'
         */
        rtb_Switch1_e = 0U;
    }
    else if (KeCHFR_Cnt_DbncFA < ((uint16)(((uint32)
                CHFR_ac_DW.UnitDelay_DSTATE_f) + 1U)))
    {
        /* MinMax: '<S95>/Minimum' incorporates:
         *  Constant: '<S88>/Calib'
         *  Switch: '<S95>/Switch1'
         */
        rtb_Switch1_e = KeCHFR_Cnt_DbncFA;
    }
    else
    {
        /* Switch: '<S95>/Switch1' incorporates:
         *  Constant: '<S95>/Constant Value'
         *  MinMax: '<S95>/Minimum'
         *  Sum: '<S95>/Summation'
         *  UnitDelay: '<S95>/Unit Delay'
         */
        rtb_Switch1_e = (uint16)(((uint32)CHFR_ac_DW.UnitDelay_DSTATE_f) + 1U);
    }

    /* End of Switch: '<S95>/Switch1' */

    /* Logic: '<S95>/AND' incorporates:
     *  Constant: '<S88>/Calib'
     *  RelationalOperator: '<S95>/Greater  Than'
     */
    VeCHFR_b_OBCMFA_Active = (rtb_Logical5 && (rtb_Switch1_e >=
        KeCHFR_Cnt_DbncFA));

    /* Update for UnitDelay: '<S95>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_f = rtb_Switch1_e;

    /* End of Outputs for SubSystem: '<S19>/Turn On Delay Sample' */

    /* Logic: '<S19>/Logical15' incorporates:
     *  Constant: '<S94>/Calib'
     *  Logic: '<S19>/Logical14'
     */
    VeCHFR_b_SWBP_FA = (((VeCHFR_b_HV_SeriesVoltFA) ||
                         (VeCHFR_b_HV_AuxLoadOffReqFA)) &&
                        (KeCHFR_b_SwtchblBttryPckEnbl));

    /* Logic: '<S19>/Logical12' */
    rtb_Logical5 = ((((((((((((VeCHFR_b_HV_BatModTempMaxFA) ||
        (VeCHFR_b_HV_BatModTempMinFA)) || (VeCHFR_b_HV_BatCurrFA)) ||
                            (VeCHFR_b_HV_BatVoltFA)) ||
                           (VeCHFR_b_HV_BatModVoltMaxFA)) ||
                          (VeCHFR_b_HV_BatModVoltMinFA)) ||
                         (VeCHFR_b_MaxChgCurrAlwdFA)) ||
                        (VeCHFR_b_ChargingStat_BPCMFA)) ||
                       (VeCHFR_b_DC_CntctrStatFA)) ||
                      (VeCHFR_b_HV_BatCntctrStatFA)) || (VeCHFR_e_DCIsolStsFA)) ||
                    (VeCHFR_b_SWBP_FA));

    /* Outputs for Atomic SubSystem: '<S19>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S97>/EdgeRising' */
    /* Logic: '<S102>/AND' incorporates:
     *  Logic: '<S102>/OR1'
     *  UnitDelay: '<S102>/Unit Delay'
     */
    rtb_AND_hk = (rtb_Logical5 && (!CHFR_ac_DW.UnitDelay_DSTATE_mk));

    /* Update for UnitDelay: '<S102>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_mk = rtb_Logical5;

    /* End of Outputs for SubSystem: '<S97>/EdgeRising' */

    /* Switch: '<S97>/Switch1' incorporates:
     *  Constant: '<S88>/Calib'
     *  Constant: '<S97>/Constant Value'
     *  Logic: '<S97>/OR'
     *  Logic: '<S97>/OR1'
     *  MinMax: '<S97>/Minimum'
     *  Sum: '<S97>/Summation'
     *  UnitDelay: '<S97>/Unit Delay'
     */
    if ((!rtb_Logical5) || rtb_AND_hk)
    {
        /* Switch: '<S97>/Switch1' incorporates:
         *  Constant: '<S97>/Constant Value1'
         */
        rtb_Switch1_e = 0U;
    }
    else if (KeCHFR_Cnt_DbncFA < ((uint16)(((uint32)
                CHFR_ac_DW.UnitDelay_DSTATE_le) + 1U)))
    {
        /* MinMax: '<S97>/Minimum' incorporates:
         *  Constant: '<S88>/Calib'
         *  Switch: '<S97>/Switch1'
         */
        rtb_Switch1_e = KeCHFR_Cnt_DbncFA;
    }
    else
    {
        /* Switch: '<S97>/Switch1' incorporates:
         *  Constant: '<S97>/Constant Value'
         *  MinMax: '<S97>/Minimum'
         *  Sum: '<S97>/Summation'
         *  UnitDelay: '<S97>/Unit Delay'
         */
        rtb_Switch1_e = (uint16)(((uint32)CHFR_ac_DW.UnitDelay_DSTATE_le) + 1U);
    }

    /* End of Switch: '<S97>/Switch1' */

    /* Logic: '<S97>/AND' incorporates:
     *  Constant: '<S88>/Calib'
     *  RelationalOperator: '<S97>/Greater  Than'
     */
    VeCHFR_b_BPCMFA_Active = (rtb_Logical5 && (rtb_Switch1_e >=
        KeCHFR_Cnt_DbncFA));

    /* Update for UnitDelay: '<S97>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_le = rtb_Switch1_e;

    /* End of Outputs for SubSystem: '<S19>/Turn On Delay Sample2' */

    /* Logic: '<S19>/Logical2' */
    rtb_Logical5 = ((VeCHFR_b_OBCMFA_Active) || (VeCHFR_b_BPCMFA_Active));

    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S52>/Calib'
     *  Logic: '<S13>/Logical3'
     */
    if ((VeCHFR_b_IDCM_DCCA) && (KeCHFR_b_IgnoreChrgFailStsDC))
    {
        /* Switch: '<S13>/Switch' incorporates:
         *  Constant: '<S37>/Constant'
         */
        rtb_Switch_j = CeOBCR_e_No_FLT;
    }
    else
    {
        /* Switch: '<S13>/Switch' incorporates:
         *  Switch: '<S5>/Switch10'
         */
        rtb_Switch_j = VeCHFR_e_ChrgFailSts;
    }

    /* End of Switch: '<S13>/Switch' */

    /* Switch: '<S13>/Switch2' incorporates:
     *  Constant: '<S31>/Constant'
     *  Constant: '<S32>/Constant'
     *  Constant: '<S33>/Constant'
     *  Constant: '<S34>/Constant'
     *  Constant: '<S53>/Calib'
     *  Constant: '<S62>/Constant1'
     *  Constant: '<S62>/Constant2'
     *  DataStoreRead: '<S62>/StatusByte_CtrlPilotCkt'
     *  Logic: '<S13>/Logical20'
     *  Logic: '<S13>/Logical21'
     *  Logic: '<S62>/Logical Operator'
     *  RelationalOperator: '<S13>/Comparison19'
     *  RelationalOperator: '<S13>/Comparison20'
     *  RelationalOperator: '<S13>/Comparison21'
     *  RelationalOperator: '<S13>/Comparison22'
     *  RelationalOperator: '<S62>/Relational Operator1'
     *  RelationalOperator: '<S62>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S62>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S62>/Bitwise Operator2'
     */
    if ((((((((sint32)CHFR_ac_DW.StatusByte_CtrlPilotCkt) & 1) > 0) &&
            ((((uint32)CHFR_ac_DW.StatusByte_CtrlPilotCkt) & 64U) == 0U)) &&
            (((uint32)rtb_TmpSignalConversionAtVeOB_n) ==
             CeOBCR_e_ChargingLvlDefault)) && ((((uint32)rtb_Switch_j) ==
            CeOBCR_e_Flt_ChrgNotAlwd) || (((uint32)rtb_Switch_j) ==
            CeOBCR_e_Flt_ChrgTerm))) && (((uint32)KeCHFR_e_InterMarketsSelection)
         == CeOBCR_e_China))
    {
        /* Switch: '<S13>/Switch2' incorporates:
         *  Constant: '<S13>/FALSE Constant2'
         */
        rtb_AND_hk = false;
    }
    else
    {
        /* Switch: '<S13>/Switch2' incorporates:
         *  Constant: '<S26>/Constant'
         *  Constant: '<S27>/Constant'
         *  Constant: '<S35>/Constant'
         *  Constant: '<S36>/Constant'
         *  Constant: '<S48>/Calib'
         *  Constant: '<S49>/Calib'
         *  Constant: '<S50>/Calib'
         *  Constant: '<S51>/Calib'
         *  Logic: '<S13>/Logical'
         *  Logic: '<S13>/Logical12'
         *  Logic: '<S13>/Logical13'
         *  Logic: '<S13>/Logical2'
         *  Logic: '<S13>/Logical8'
         *  RelationalOperator: '<S13>/Comparison1'
         *  RelationalOperator: '<S13>/Comparison3'
         *  RelationalOperator: '<S13>/Comparison4'
         *  RelationalOperator: '<S13>/Comparison6'
         */
        rtb_AND_hk = (((((CeOBCR_e_Flt_ChrgAlwd == ((uint32)rtb_Switch_j)) &&
                         (KeCHFR_b_EnblChrgFailSts1)) ||
                        ((CeOBCR_e_Flt_ChrgNotAlwd == ((uint32)rtb_Switch_j)) &&
                         (KeCHFR_b_EnblChrgFailSts2))) ||
                       ((CeOBCR_e_Flt_ChrgTerm == ((uint32)rtb_Switch_j)) &&
                        (KeCHFR_b_EnblChrgFailSts3))) || ((CeOBCR_e_Flt_SNA ==
                        ((uint32)rtb_Switch_j)) && (KeCHFR_b_EnblChrgFailSts4)));
    }

    /* End of Switch: '<S13>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S13>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S56>/EdgeRising' */
    /* Logic: '<S63>/AND' incorporates:
     *  Logic: '<S63>/OR1'
     *  UnitDelay: '<S63>/Unit Delay'
     */
    rtb_UnitDelay_hz = (rtb_AND_hk && (!CHFR_ac_DW.UnitDelay_DSTATE_mi));

    /* Update for UnitDelay: '<S63>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_mi = rtb_AND_hk;

    /* End of Outputs for SubSystem: '<S56>/EdgeRising' */

    /* Switch: '<S56>/Switch1' incorporates:
     *  Constant: '<S43>/Calib'
     *  Constant: '<S56>/Constant Value'
     *  Logic: '<S56>/OR'
     *  Logic: '<S56>/OR1'
     *  MinMax: '<S56>/Minimum'
     *  Sum: '<S56>/Summation'
     *  UnitDelay: '<S56>/Unit Delay'
     */
    if ((!rtb_AND_hk) || rtb_UnitDelay_hz)
    {
        /* Switch: '<S56>/Switch1' incorporates:
         *  Constant: '<S56>/Constant Value1'
         */
        rtb_Switch1_e = 0U;
    }
    else if (KeCHFR_Cnt_DbncOBCMSig2 < ((uint16)(((uint32)
                CHFR_ac_DW.UnitDelay_DSTATE_a) + 1U)))
    {
        /* MinMax: '<S56>/Minimum' incorporates:
         *  Constant: '<S43>/Calib'
         *  Switch: '<S56>/Switch1'
         */
        rtb_Switch1_e = KeCHFR_Cnt_DbncOBCMSig2;
    }
    else
    {
        /* Switch: '<S56>/Switch1' incorporates:
         *  Constant: '<S56>/Constant Value'
         *  MinMax: '<S56>/Minimum'
         *  Sum: '<S56>/Summation'
         *  UnitDelay: '<S56>/Unit Delay'
         */
        rtb_Switch1_e = (uint16)(((uint32)CHFR_ac_DW.UnitDelay_DSTATE_a) + 1U);
    }

    /* End of Switch: '<S56>/Switch1' */
    /* End of Outputs for SubSystem: '<S13>/Turn On Delay Sample1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CHFR_MedTED' */

    /* Inport: '<Root>/VeIDCR_b_StatusACPresent' */
    (void)Rte_Read_VeIDCR_b_StatusACPresent_Value(&rtb_Logical17);

    /* Outputs for Function Call SubSystem: '<Root>/CHFR_MedTED' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHFC'
     */
    /* Outputs for Atomic SubSystem: '<S13>/Turn On Delay Sample1' */
    /* Logic: '<S56>/AND' incorporates:
     *  Constant: '<S43>/Calib'
     *  RelationalOperator: '<S56>/Greater  Than'
     */
    VeCHFR_b_Fault_OBCM = (rtb_AND_hk && (rtb_Switch1_e >=
                            KeCHFR_Cnt_DbncOBCMSig2));

    /* Update for UnitDelay: '<S56>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_a = rtb_Switch1_e;

    /* End of Outputs for SubSystem: '<S13>/Turn On Delay Sample1' */

    /* Logic: '<S13>/Logical17' incorporates:
     *  Constant: '<S28>/Constant'
     *  Logic: '<S13>/Logical18'
     *  RelationalOperator: '<S13>/Comparison17'
     *  Switch: '<S5>/Switch59'
     */
    rtb_Logical17 = ((rtb_Logical17 && (!rtb_TmpSignalConversionAtVeID_m)) &&
                     (((uint32)VeCHFR_e_EVSE_ProxStat_In) ==
                      CeOBCR_e_ProxIn_OBCM));

    /* Outputs for Atomic SubSystem: '<S13>/Turn On Delay Sample3' */
    /* Outputs for Atomic SubSystem: '<S58>/EdgeRising' */
    /* Logic: '<S65>/AND' incorporates:
     *  Logic: '<S65>/OR1'
     *  UnitDelay: '<S65>/Unit Delay'
     */
    rtb_AND_hk = (rtb_Logical17 && (!CHFR_ac_DW.UnitDelay_DSTATE_ds));

    /* Update for UnitDelay: '<S65>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_ds = rtb_Logical17;

    /* End of Outputs for SubSystem: '<S58>/EdgeRising' */

    /* Switch: '<S58>/Switch1' incorporates:
     *  Constant: '<S41>/Calib'
     *  Constant: '<S58>/Constant Value'
     *  Logic: '<S58>/OR'
     *  Logic: '<S58>/OR1'
     *  MinMax: '<S58>/Minimum'
     *  Sum: '<S58>/Summation'
     *  UnitDelay: '<S58>/Unit Delay'
     */
    if ((!rtb_Logical17) || rtb_AND_hk)
    {
        /* Switch: '<S58>/Switch1' incorporates:
         *  Constant: '<S58>/Constant Value1'
         */
        rtb_Switch1_e = 0U;
    }
    else if (KeCHFR_Cnt_DbncAC_PresFlt < ((uint16)(((uint32)
                CHFR_ac_DW.UnitDelay_DSTATE_nc) + 1U)))
    {
        /* MinMax: '<S58>/Minimum' incorporates:
         *  Constant: '<S41>/Calib'
         *  Switch: '<S58>/Switch1'
         */
        rtb_Switch1_e = KeCHFR_Cnt_DbncAC_PresFlt;
    }
    else
    {
        /* Switch: '<S58>/Switch1' incorporates:
         *  Constant: '<S58>/Constant Value'
         *  MinMax: '<S58>/Minimum'
         *  Sum: '<S58>/Summation'
         *  UnitDelay: '<S58>/Unit Delay'
         */
        rtb_Switch1_e = (uint16)(((uint32)CHFR_ac_DW.UnitDelay_DSTATE_nc) + 1U);
    }

    /* End of Switch: '<S58>/Switch1' */

    /* Update for UnitDelay: '<S58>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_nc = rtb_Switch1_e;

    /* End of Outputs for SubSystem: '<S13>/Turn On Delay Sample3' */

    /* RelationalOperator: '<S13>/Comparison2' incorporates:
     *  Constant: '<S29>/Constant'
     *  RelationalOperator: '<S13>/Comparison17'
     *  Switch: '<S5>/Switch59'
     */
    rtb_AND_hk = (((uint32)VeCHFR_e_EVSE_ProxStat_In) != CeOBCR_e_ProxIn_OBCM);

    /* Outputs for Atomic SubSystem: '<S13>/EdgeRising1' */
    /* Logic: '<S25>/OR1' incorporates:
     *  UnitDelay: '<S25>/Unit Delay'
     */
    rtb_UnitDelay_hz = !CHFR_ac_DW.UnitDelay_DSTATE_ir;

    /* Update for UnitDelay: '<S25>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_ir = rtb_AND_hk;

    /* Outputs for Atomic SubSystem: '<S13>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S13>/Turn On Delay Sample3' */
    /* Logic: '<S55>/OR1' incorporates:
     *  Constant: '<S41>/Calib'
     *  Logic: '<S25>/AND'
     *  Logic: '<S55>/NOT'
     *  Logic: '<S55>/OR'
     *  Logic: '<S58>/AND'
     *  RelationalOperator: '<S58>/Greater  Than'
     *  UnitDelay: '<S55>/Unit Delay'
     */
    rtb_Logical17 = ((rtb_Logical17 && (rtb_Switch1_e >=
                       KeCHFR_Cnt_DbncAC_PresFlt)) || (((!rtb_AND_hk) ||
                       (!rtb_UnitDelay_hz)) && (CHFR_ac_DW.UnitDelay_DSTATE_mg)));

    /* End of Outputs for SubSystem: '<S13>/Turn On Delay Sample3' */
    /* End of Outputs for SubSystem: '<S13>/EdgeRising1' */

    /* Update for UnitDelay: '<S55>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_mg = rtb_Logical17;

    /* End of Outputs for SubSystem: '<S13>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S13>/Turn On Delay Sample5' */
    /* Outputs for Atomic SubSystem: '<S60>/EdgeRising' */
    /* Logic: '<S67>/AND' incorporates:
     *  Logic: '<S67>/OR1'
     *  UnitDelay: '<S67>/Unit Delay'
     */
    rtb_AND_hk = (rtb_TmpSignalConversionAtVeGENR &&
                  (!CHFR_ac_DW.UnitDelay_DSTATE_e1));

    /* Update for UnitDelay: '<S67>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_e1 = rtb_TmpSignalConversionAtVeGENR;

    /* End of Outputs for SubSystem: '<S60>/EdgeRising' */

    /* Switch: '<S60>/Switch1' incorporates:
     *  Constant: '<S40>/Calib'
     *  Constant: '<S60>/Constant Value'
     *  Logic: '<S60>/OR'
     *  Logic: '<S60>/OR1'
     *  MinMax: '<S60>/Minimum'
     *  Sum: '<S60>/Summation'
     *  UnitDelay: '<S60>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeGENR) || rtb_AND_hk)
    {
        /* Switch: '<S60>/Switch1' incorporates:
         *  Constant: '<S60>/Constant Value1'
         */
        rtb_Switch1_e = 0U;
    }
    else if (KeCHFR_Cnt_12VFault < ((uint16)(((uint32)
                CHFR_ac_DW.UnitDelay_DSTATE_k) + 1U)))
    {
        /* MinMax: '<S60>/Minimum' incorporates:
         *  Constant: '<S40>/Calib'
         *  Switch: '<S60>/Switch1'
         */
        rtb_Switch1_e = KeCHFR_Cnt_12VFault;
    }
    else
    {
        /* Switch: '<S60>/Switch1' incorporates:
         *  Constant: '<S60>/Constant Value'
         *  MinMax: '<S60>/Minimum'
         *  Sum: '<S60>/Summation'
         *  UnitDelay: '<S60>/Unit Delay'
         */
        rtb_Switch1_e = (uint16)(((uint32)CHFR_ac_DW.UnitDelay_DSTATE_k) + 1U);
    }

    /* End of Switch: '<S60>/Switch1' */

    /* Update for UnitDelay: '<S60>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_k = rtb_Switch1_e;

    /* Logic: '<S13>/Logical19' incorporates:
     *  Constant: '<S30>/Constant'
     *  Constant: '<S40>/Calib'
     *  Constant: '<S45>/Calib'
     *  Logic: '<S13>/Logical4'
     *  Logic: '<S60>/AND'
     *  RelationalOperator: '<S13>/Comparison18'
     *  RelationalOperator: '<S60>/Greater  Than'
     */
    rtb_TmpSignalConversionAtVeGENR = (((rtb_TmpSignalConversionAtVeGENR &&
        (rtb_Switch1_e >= KeCHFR_Cnt_12VFault)) && (KeCHFR_b_Allow12VFault)) &&
        ((((uint32)rtb_TmpSignalConversionAtVeOB_n) !=
          CeOBCR_e_ChargingLvlDefault) || rtb_TmpSignalConversionAtVeOB_o));

    /* End of Outputs for SubSystem: '<S13>/Turn On Delay Sample5' */

    /* Outputs for Atomic SubSystem: '<S13>/Turn On Delay Sample6' */
    /* Outputs for Atomic SubSystem: '<S61>/EdgeRising' */
    /* Logic: '<S68>/AND' incorporates:
     *  Logic: '<S68>/OR1'
     *  UnitDelay: '<S13>/Unit Delay'
     *  UnitDelay: '<S68>/Unit Delay'
     */
    rtb_AND_hk = ((CHFR_ac_DW.UnitDelay_DSTATE_nt) &&
                  (!CHFR_ac_DW.UnitDelay_DSTATE_ew));

    /* Update for UnitDelay: '<S68>/Unit Delay' incorporates:
     *  UnitDelay: '<S13>/Unit Delay'
     */
    CHFR_ac_DW.UnitDelay_DSTATE_ew = CHFR_ac_DW.UnitDelay_DSTATE_nt;

    /* End of Outputs for SubSystem: '<S61>/EdgeRising' */

    /* Switch: '<S61>/Switch1' incorporates:
     *  Constant: '<S42>/Calib'
     *  Constant: '<S61>/Constant Value'
     *  Logic: '<S61>/OR'
     *  Logic: '<S61>/OR1'
     *  MinMax: '<S61>/Minimum'
     *  Sum: '<S61>/Summation'
     *  UnitDelay: '<S13>/Unit Delay'
     *  UnitDelay: '<S61>/Unit Delay'
     */
    if ((!CHFR_ac_DW.UnitDelay_DSTATE_nt) || rtb_AND_hk)
    {
        /* Switch: '<S61>/Switch1' incorporates:
         *  Constant: '<S61>/Constant Value1'
         */
        rtb_Switch1_e = 0U;
    }
    else if (KeCHFR_Cnt_DbncChrgPortFlt < ((uint16)(((uint32)
                CHFR_ac_DW.UnitDelay_DSTATE_h) + 1U)))
    {
        /* MinMax: '<S61>/Minimum' incorporates:
         *  Constant: '<S42>/Calib'
         *  Switch: '<S61>/Switch1'
         */
        rtb_Switch1_e = KeCHFR_Cnt_DbncChrgPortFlt;
    }
    else
    {
        /* Switch: '<S61>/Switch1' incorporates:
         *  Constant: '<S61>/Constant Value'
         *  MinMax: '<S61>/Minimum'
         *  Sum: '<S61>/Summation'
         *  UnitDelay: '<S61>/Unit Delay'
         */
        rtb_Switch1_e = (uint16)(((uint32)CHFR_ac_DW.UnitDelay_DSTATE_h) + 1U);
    }

    /* End of Switch: '<S61>/Switch1' */

    /* Logic: '<S61>/AND' incorporates:
     *  Constant: '<S42>/Calib'
     *  RelationalOperator: '<S61>/Greater  Than'
     *  UnitDelay: '<S13>/Unit Delay'
     */
    VeCHFR_b_Fault_ChrgPort = ((CHFR_ac_DW.UnitDelay_DSTATE_nt) &&
        (rtb_Switch1_e >= KeCHFR_Cnt_DbncChrgPortFlt));

    /* Update for UnitDelay: '<S61>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_h = rtb_Switch1_e;

    /* End of Outputs for SubSystem: '<S13>/Turn On Delay Sample6' */

    /* UnitDelay: '<S13>/Unit Delay1' */
    rtb_AND_hk = CHFR_ac_DW.UnitDelay1_DSTATE;

    /* Outputs for Atomic SubSystem: '<S13>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S57>/EdgeRising' */
    /* Logic: '<S64>/AND' incorporates:
     *  Logic: '<S64>/OR1'
     *  UnitDelay: '<S64>/Unit Delay'
     */
    rtb_UnitDelay_hz = (rtb_AND_hk && (!CHFR_ac_DW.UnitDelay_DSTATE_ka));

    /* Update for UnitDelay: '<S64>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_ka = rtb_AND_hk;

    /* End of Outputs for SubSystem: '<S57>/EdgeRising' */

    /* Switch: '<S57>/Switch1' incorporates:
     *  Constant: '<S44>/Calib'
     *  Constant: '<S57>/Constant Value'
     *  Logic: '<S57>/OR'
     *  Logic: '<S57>/OR1'
     *  MinMax: '<S57>/Minimum'
     *  Sum: '<S57>/Summation'
     *  UnitDelay: '<S57>/Unit Delay'
     */
    if ((!rtb_AND_hk) || rtb_UnitDelay_hz)
    {
        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S57>/Constant Value1'
         */
        rtb_Switch1_e = 0U;
    }
    else if (KeCHFR_Cnt_DbncStopChrg < ((uint16)(((uint32)
                CHFR_ac_DW.UnitDelay_DSTATE_my) + 1U)))
    {
        /* MinMax: '<S57>/Minimum' incorporates:
         *  Constant: '<S44>/Calib'
         *  Switch: '<S57>/Switch1'
         */
        rtb_Switch1_e = KeCHFR_Cnt_DbncStopChrg;
    }
    else
    {
        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S57>/Constant Value'
         *  MinMax: '<S57>/Minimum'
         *  Sum: '<S57>/Summation'
         *  UnitDelay: '<S57>/Unit Delay'
         */
        rtb_Switch1_e = (uint16)(((uint32)CHFR_ac_DW.UnitDelay_DSTATE_my) + 1U);
    }

    /* End of Switch: '<S57>/Switch1' */

    /* Logic: '<S57>/AND' incorporates:
     *  Constant: '<S44>/Calib'
     *  RelationalOperator: '<S57>/Greater  Than'
     */
    rtb_AND_hk = (rtb_AND_hk && (rtb_Switch1_e >= KeCHFR_Cnt_DbncStopChrg));

    /* Update for UnitDelay: '<S57>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_my = rtb_Switch1_e;

    /* End of Outputs for SubSystem: '<S13>/Turn On Delay Sample2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CHFR_MedTED' */

    /* Inport: '<Root>/VeCSVR_b_VehSpdFA' */
    (void)Rte_Read_VeCSVR_b_VehSpdFA_Value(&rtb_Logical2_by);

    /* Outputs for Function Call SubSystem: '<Root>/CHFR_MedTED' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHFC'
     */
    /* Switch: '<S14>/Switch' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
     */
    if (rtb_Logical2_by)
    {
        /* Switch: '<S14>/Switch' incorporates:
         *  Constant: '<S14>/Constant Value1'
         */
        Switch = 0.0F;
    }
    else
    {
        (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value(&Switch);

        /* Switch: '<S14>/Switch' incorporates:
         *  Abs: '<S14>/Abs'
         *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
         */
        Switch = fabsf(Switch);
    }

    /* End of Switch: '<S14>/Switch' */

    /* Logic: '<S14>/Logical2' incorporates:
     *  Constant: '<S69>/Constant'
     *  Constant: '<S73>/Calib'
     *  Logic: '<S14>/Logical Operator'
     *  RelationalOperator: '<S14>/Comparison1'
     *  RelationalOperator: '<S14>/Comparison5'
     */
    rtb_Logical2_by = ((Switch >= KeCHFR_v_SpeedThreshold) && ((((uint32)
                          rtb_TmpSignalConversionAtVeOB_n) !=
                         CeOBCR_e_ChargingLvlDefault) ||
                        rtb_TmpSignalConversionAtVeOB_o));

    /* Outputs for Atomic SubSystem: '<S14>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S74>/EdgeRising' */
    /* Logic: '<S75>/AND' incorporates:
     *  Logic: '<S75>/OR1'
     *  UnitDelay: '<S75>/Unit Delay'
     */
    rtb_UnitDelay_hz = (rtb_Logical2_by && (!CHFR_ac_DW.UnitDelay_DSTATE_p));

    /* Update for UnitDelay: '<S75>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_p = rtb_Logical2_by;

    /* End of Outputs for SubSystem: '<S74>/EdgeRising' */

    /* Switch: '<S74>/Switch1' incorporates:
     *  Constant: '<S72>/Calib'
     *  Constant: '<S74>/Constant Value'
     *  Logic: '<S74>/OR'
     *  Logic: '<S74>/OR1'
     *  MinMax: '<S74>/Minimum'
     *  Sum: '<S74>/Summation'
     *  UnitDelay: '<S74>/Unit Delay'
     */
    if ((!rtb_Logical2_by) || rtb_UnitDelay_hz)
    {
        /* Switch: '<S74>/Switch1' incorporates:
         *  Constant: '<S74>/Constant Value1'
         */
        rtb_Switch1_e = 0U;
    }
    else if (KeCHFR_t_DbncChargingErrors < ((uint16)(((uint32)
                CHFR_ac_DW.UnitDelay_DSTATE_g) + 1U)))
    {
        /* MinMax: '<S74>/Minimum' incorporates:
         *  Constant: '<S72>/Calib'
         *  Switch: '<S74>/Switch1'
         */
        rtb_Switch1_e = KeCHFR_t_DbncChargingErrors;
    }
    else
    {
        /* Switch: '<S74>/Switch1' incorporates:
         *  Constant: '<S74>/Constant Value'
         *  MinMax: '<S74>/Minimum'
         *  Sum: '<S74>/Summation'
         *  UnitDelay: '<S74>/Unit Delay'
         */
        rtb_Switch1_e = (uint16)(((uint32)CHFR_ac_DW.UnitDelay_DSTATE_g) + 1U);
    }

    /* End of Switch: '<S74>/Switch1' */
    /* End of Outputs for SubSystem: '<S14>/Turn On Delay Sample' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CHFR_MedTED' */

    /* Inport: '<Root>/VeOBCR_b_EnblDsblProxPlg' */
    (void)Rte_Read_VeOBCR_b_EnblDsblProxPlg_Value(&rtb_Logical2_kq);

    /* Outputs for Function Call SubSystem: '<Root>/CHFR_MedTED' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHFC'
     */
    /* Outputs for Atomic SubSystem: '<S14>/Turn On Delay Sample' */
    /* Update for UnitDelay: '<S74>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_g = rtb_Switch1_e;

    /* End of Outputs for SubSystem: '<S14>/Turn On Delay Sample' */

    /* Switch: '<S14>/Switch1' incorporates:
     *  Constant: '<S70>/Calib'
     */
    if (KeCHFR_b_ChargeFaultOvrd1)
    {
        /* Switch: '<S14>/Switch1' incorporates:
         *  Constant: '<S71>/Calib'
         */
        VeCHFR_b_ConnectionFault = KeCHFR_b_ChargeFaultOvrdVal1;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S14>/Turn On Delay Sample' */
        /* Switch: '<S14>/Switch1' incorporates:
         *  Constant: '<S72>/Calib'
         *  Logic: '<S74>/AND'
         *  RelationalOperator: '<S74>/Greater  Than'
         */
        VeCHFR_b_ConnectionFault = (rtb_Logical2_by && (rtb_Switch1_e >=
            KeCHFR_t_DbncChargingErrors));

        /* End of Outputs for SubSystem: '<S14>/Turn On Delay Sample' */
    }

    /* End of Switch: '<S14>/Switch1' */

    /* Logic: '<S9>/Logical2' incorporates:
     *  Constant: '<S18>/Calib'
     */
    rtb_Logical2_kq = (rtb_Logical2_kq || (KeCHFR_b_Active));

    /* Outputs for Atomic SubSystem: '<S9>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S20>/EdgeFalling' */
    /* Logic: '<S103>/AND' incorporates:
     *  Logic: '<S103>/OR1'
     *  UnitDelay: '<S103>/Unit Delay'
     */
    rtb_Logical2_by = ((!rtb_Logical2_kq) && (CHFR_ac_DW.UnitDelay_DSTATE_d3));

    /* Update for UnitDelay: '<S103>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_d3 = rtb_Logical2_kq;

    /* End of Outputs for SubSystem: '<S20>/EdgeFalling' */

    /* Switch: '<S20>/Switch' */
    if (rtb_Logical2_by)
    {
        /* Switch: '<S20>/Switch' incorporates:
         *  Constant: '<S17>/Calib'
         */
        rtb_Switch1_e = KeCHFR_Cnt_UnplugDbncCnt;
    }
    else
    {
        /* Sum: '<S20>/Summation' incorporates:
         *  Constant: '<S20>/Constant Value'
         *  UnitDelay: '<S20>/Unit Delay'
         */
        i = ((sint32)CHFR_ac_DW.UnitDelay_DSTATE_j) - 1;
        if ((((sint32)CHFR_ac_DW.UnitDelay_DSTATE_j) - 1) < 0)
        {
            i = 0;
        }

        /* Switch: '<S20>/Switch' incorporates:
         *  Sum: '<S20>/Summation'
         */
        rtb_Switch1_e = (uint16)i;
    }

    /* End of Switch: '<S20>/Switch' */

    /* Logic: '<S20>/AND' incorporates:
     *  Constant: '<S20>/Constant Value2'
     *  RelationalOperator: '<S20>/Greater  Than'
     */
    rtb_Logical2_kq = (rtb_Logical2_kq || (((sint32)rtb_Switch1_e) > 0));

    /* Update for UnitDelay: '<S20>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_j = rtb_Switch1_e;

    /* End of Outputs for SubSystem: '<S9>/Turn Off Delay Sample' */

    /* If: '<S9>/If1' incorporates:
     *  Inport: '<Root>/VeBPCR_U_HV_BatVolt'
     */
    if (rtb_Logical2_kq)
    {
        (void)Rte_Read_VeBPCR_U_HV_BatVolt_Value(&tmpRead_3);

        /* Outputs for IfAction SubSystem: '<S9>/VoltageFault' incorporates:
         *  ActionPort: '<S21>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S21>/EdgeFalling' */
        /* Logic: '<S104>/AND' incorporates:
         *  Inport: '<Root>/VeBPCR_U_HV_BatVolt'
         *  Logic: '<S104>/OR1'
         *  UnitDelay: '<S104>/Unit Delay'
         */
        rtb_Logical2_by = ((!rtb_TmpSignalConversionAtVeOB_i) &&
                           (CHFR_ac_DW.UnitDelay_DSTATE_gv));

        /* Update for UnitDelay: '<S104>/Unit Delay' */
        CHFR_ac_DW.UnitDelay_DSTATE_gv = rtb_TmpSignalConversionAtVeOB_i;

        /* End of Outputs for SubSystem: '<S21>/EdgeFalling' */

        /* Logic: '<S21>/Logical2' incorporates:
         *  Constant: '<S106>/Calib'
         *  Constant: '<S107>/Calib'
         *  Constant: '<S108>/Calib'
         *  RelationalOperator: '<S21>/Comparison1'
         *  RelationalOperator: '<S21>/Comparison2'
         *  RelationalOperator: '<S21>/Comparison4'
         */
        VeCHFR_b_ChrgVoltageFault3 = (((rtb_TmpSignalConversionAtVeIDCR <
            KeCHFR_U_AC_VoltLowerLim) || (rtb_TmpSignalConversionAtVeIDCR >
            KeCHFR_U_AC_VoltUpperLim)) || (tmpRead_3 > KeCHFR_U_Bat_VoltUpperLim));

        /* Logic: '<S21>/Logical1' */
        rtb_UnitDelay_hz = ((VeCHFR_b_ChrgVoltageFault3) &&
                            rtb_TmpSignalConversionAtVeID_m);

        /* Outputs for Atomic SubSystem: '<S21>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S113>/EdgeRising' */
        /* Logic: '<S114>/AND' incorporates:
         *  Logic: '<S114>/OR1'
         *  UnitDelay: '<S114>/Unit Delay'
         */
        rtb_Switch1_n = (rtb_UnitDelay_hz && (!CHFR_ac_DW.UnitDelay_DSTATE_hz));

        /* Update for UnitDelay: '<S114>/Unit Delay' */
        CHFR_ac_DW.UnitDelay_DSTATE_hz = rtb_UnitDelay_hz;

        /* End of Outputs for SubSystem: '<S113>/EdgeRising' */

        /* Switch: '<S113>/Switch1' incorporates:
         *  Constant: '<S111>/Calib'
         *  Constant: '<S113>/Constant Value'
         *  Logic: '<S113>/OR'
         *  Logic: '<S113>/OR1'
         *  MinMax: '<S113>/Minimum'
         *  Sum: '<S113>/Summation'
         *  UnitDelay: '<S113>/Unit Delay'
         */
        if ((!rtb_UnitDelay_hz) || rtb_Switch1_n)
        {
            /* Switch: '<S113>/Switch1' incorporates:
             *  Constant: '<S113>/Constant Value1'
             */
            rtb_Switch1_e = 0U;
        }
        else if (KeCHFR_t_DbncChargingErrorsV < ((uint16)(((uint32)
                    CHFR_ac_DW.UnitDelay_DSTATE_mm) + 1U)))
        {
            /* MinMax: '<S113>/Minimum' incorporates:
             *  Constant: '<S111>/Calib'
             *  Switch: '<S113>/Switch1'
             */
            rtb_Switch1_e = KeCHFR_t_DbncChargingErrorsV;
        }
        else
        {
            /* Switch: '<S113>/Switch1' incorporates:
             *  Constant: '<S113>/Constant Value'
             *  MinMax: '<S113>/Minimum'
             *  Sum: '<S113>/Summation'
             *  UnitDelay: '<S113>/Unit Delay'
             */
            rtb_Switch1_e = (uint16)(((uint32)CHFR_ac_DW.UnitDelay_DSTATE_mm) +
                1U);
        }

        /* End of Switch: '<S113>/Switch1' */

        /* Update for UnitDelay: '<S113>/Unit Delay' */
        CHFR_ac_DW.UnitDelay_DSTATE_mm = rtb_Switch1_e;

        /* Outputs for Atomic SubSystem: '<S21>/Signal Latch On With Reset' */
        /* Logic: '<S112>/OR1' incorporates:
         *  Constant: '<S111>/Calib'
         *  Logic: '<S112>/NOT'
         *  Logic: '<S112>/OR'
         *  Logic: '<S113>/AND'
         *  RelationalOperator: '<S113>/Greater  Than'
         *  UnitDelay: '<S112>/Unit Delay'
         */
        rtb_Logical2_by = ((rtb_UnitDelay_hz && (rtb_Switch1_e >=
                             KeCHFR_t_DbncChargingErrorsV)) ||
                           ((!rtb_Logical2_by) &&
                            (CHFR_ac_DW.UnitDelay_DSTATE_c3)));

        /* End of Outputs for SubSystem: '<S21>/Turn On Delay Sample' */

        /* Update for UnitDelay: '<S112>/Unit Delay' */
        CHFR_ac_DW.UnitDelay_DSTATE_c3 = rtb_Logical2_by;

        /* End of Outputs for SubSystem: '<S21>/Signal Latch On With Reset' */

        /* Switch: '<S21>/Switch1' incorporates:
         *  Constant: '<S109>/Calib'
         *  Constant: '<S110>/Calib'
         */
        if (KeCHFR_b_ChargeFaultOvrd2)
        {
            rtb_Logical2_by = KeCHFR_b_ChargeFaultOvrdVal2;
        }

        /* End of Switch: '<S21>/Switch1' */

        /* Merge: '<S9>/Merge' incorporates:
         *  Constant: '<S105>/Constant'
         *  Logic: '<S21>/Logical'
         *  RelationalOperator: '<S21>/Comparison7'
         *  SignalConversion generated from: '<S1>/VeOBCR_e_ChargeType'
         */
        VeCHFR_b_ChrgVoltageFault = ((((uint32)rtb_TmpSignalConversionAtVeOB_p) ==
            CeOBCR_e_AC) && rtb_Logical2_by);

        /* End of Outputs for SubSystem: '<S9>/VoltageFault' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S9>/VoltageFaultNF' incorporates:
         *  ActionPort: '<S22>/Action Port'
         */
        /* Merge: '<S9>/Merge' incorporates:
         *  Constant: '<S22>/Constant'
         *  SignalConversion generated from: '<S22>/VeCHFR_b_ChrgVoltageFault'
         */
        VeCHFR_b_ChrgVoltageFault = false;

        /* End of Outputs for SubSystem: '<S9>/VoltageFaultNF' */
    }

    /* End of If: '<S9>/If1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CHFR_MedTED' */

    /* Inport: '<Root>/VeIDCR_I_BattSide_Curr' */
    (void)Rte_Read_VeIDCR_I_BattSide_Curr_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/CHFR_MedTED' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHFC'
     */
    /* If: '<S9>/If2' incorporates:
     *  Inport: '<Root>/VeIDCR_I_AC_Side_Curr'
     */
    if (rtb_Logical2_kq)
    {
        (void)Rte_Read_VeIDCR_I_AC_Side_Curr_Value(&tmpRead_2);

        /* Outputs for IfAction SubSystem: '<S9>/CurrentFault' incorporates:
         *  ActionPort: '<S15>/Action Port'
         */
        /* Logic: '<S15>/Logical1' incorporates:
         *  Abs: '<S15>/Abs'
         *  Constant: '<S76>/Constant'
         *  Constant: '<S77>/Calib'
         *  Constant: '<S78>/Calib'
         *  Inport: '<Root>/VeIDCR_I_AC_Side_Curr'
         *  Inport: '<S4>/BattSideCurr'
         *  Logic: '<S15>/Logical6'
         *  RelationalOperator: '<S15>/Comparison1'
         *  RelationalOperator: '<S15>/Comparison2'
         *  RelationalOperator: '<S15>/Comparison5'
         */
        rtb_TmpSignalConversionAtVeID_m = ((rtb_TmpSignalConversionAtVeID_m &&
            ((tmpRead_2 >= KeCHFR_I_AC_SideCrntUpperLim) || (fabsf(tmpRead) >=
            KeCHFR_I_BattMaxCurrAlwd))) && (((uint32)
            rtb_TmpSignalConversionAtVeOB_n) != CeOBCR_e_ChargingLvlDefault));

        /* Outputs for Atomic SubSystem: '<S15>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S82>/EdgeRising' */
        /* Logic: '<S83>/AND' incorporates:
         *  Logic: '<S83>/OR1'
         *  UnitDelay: '<S83>/Unit Delay'
         */
        rtb_Logical2_kq = (rtb_TmpSignalConversionAtVeID_m &&
                           (!CHFR_ac_DW.UnitDelay_DSTATE_c1));

        /* Update for UnitDelay: '<S83>/Unit Delay' */
        CHFR_ac_DW.UnitDelay_DSTATE_c1 = rtb_TmpSignalConversionAtVeID_m;

        /* End of Outputs for SubSystem: '<S82>/EdgeRising' */

        /* Switch: '<S82>/Switch1' incorporates:
         *  Constant: '<S81>/Calib'
         *  Constant: '<S82>/Constant Value'
         *  Logic: '<S82>/OR'
         *  Logic: '<S82>/OR1'
         *  MinMax: '<S82>/Minimum'
         *  Sum: '<S82>/Summation'
         *  UnitDelay: '<S82>/Unit Delay'
         */
        if ((!rtb_TmpSignalConversionAtVeID_m) || rtb_Logical2_kq)
        {
            /* Switch: '<S82>/Switch1' incorporates:
             *  Constant: '<S82>/Constant Value1'
             */
            rtb_Switch1_e = 0U;
        }
        else if (KeCHFR_t_DbncChargingErrors < ((uint16)(((uint32)
                    CHFR_ac_DW.UnitDelay_DSTATE_m) + 1U)))
        {
            /* MinMax: '<S82>/Minimum' incorporates:
             *  Constant: '<S81>/Calib'
             *  Switch: '<S82>/Switch1'
             */
            rtb_Switch1_e = KeCHFR_t_DbncChargingErrors;
        }
        else
        {
            /* Switch: '<S82>/Switch1' incorporates:
             *  Constant: '<S82>/Constant Value'
             *  MinMax: '<S82>/Minimum'
             *  Sum: '<S82>/Summation'
             *  UnitDelay: '<S82>/Unit Delay'
             */
            rtb_Switch1_e = (uint16)(((uint32)CHFR_ac_DW.UnitDelay_DSTATE_m) +
                1U);
        }

        /* End of Switch: '<S82>/Switch1' */

        /* Update for UnitDelay: '<S82>/Unit Delay' */
        CHFR_ac_DW.UnitDelay_DSTATE_m = rtb_Switch1_e;

        /* End of Outputs for SubSystem: '<S15>/Turn On Delay Sample' */

        /* Switch: '<S15>/Switch2' incorporates:
         *  Constant: '<S79>/Calib'
         */
        if (KeCHFR_b_ChargeFaultOvrd3)
        {
            /* Merge: '<S9>/Merge1' incorporates:
             *  Constant: '<S80>/Calib'
             */
            VeCHFR_b_ChrgCrntFault = KeCHFR_b_ChargeFaultOvrdVal3;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S15>/Turn On Delay Sample' */
            /* Merge: '<S9>/Merge1' incorporates:
             *  Constant: '<S81>/Calib'
             *  Logic: '<S82>/AND'
             *  RelationalOperator: '<S82>/Greater  Than'
             */
            VeCHFR_b_ChrgCrntFault = (rtb_TmpSignalConversionAtVeID_m &&
                (rtb_Switch1_e >= KeCHFR_t_DbncChargingErrors));

            /* End of Outputs for SubSystem: '<S15>/Turn On Delay Sample' */
        }

        /* End of Switch: '<S15>/Switch2' */
        /* End of Outputs for SubSystem: '<S9>/CurrentFault' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S9>/CurrentFaultNF' incorporates:
         *  ActionPort: '<S16>/Action Port'
         */
        /* Merge: '<S9>/Merge1' incorporates:
         *  Constant: '<S16>/Constant'
         *  SignalConversion generated from: '<S16>/VeCHFR_b_ChrgCrntFault'
         */
        VeCHFR_b_ChrgCrntFault = false;

        /* End of Outputs for SubSystem: '<S9>/CurrentFaultNF' */
    }

    /* End of If: '<S9>/If2' */

    /* Switch: '<S23>/Switch1' incorporates:
     *  Switch: '<S23>/Switch11'
     *  Switch: '<S23>/Switch12'
     *  Switch: '<S23>/Switch15'
     *  Switch: '<S23>/Switch2'
     *  Switch: '<S23>/Switch3'
     *  Switch: '<S23>/Switch4'
     *  Switch: '<S23>/Switch5'
     *  Switch: '<S23>/Switch6'
     *  Switch: '<S23>/Switch7'
     *  Switch: '<S23>/Switch8'
     *  Switch: '<S23>/Switch9'
     */
    if (VeCHFR_b_LOCBPCM)
    {
        /* Switch: '<S23>/Switch1' incorporates:
         *  Constant: '<S23>/Constant Value'
         */
        VeCHFR_e_ChrgFault_Reason = 1;
    }
    else if (rtb_TmpSignalConversionAtVeO_b2)
    {
        /* Switch: '<S23>/Switch2' incorporates:
         *  Constant: '<S23>/Constant Value1'
         *  Switch: '<S23>/Switch1'
         */
        VeCHFR_e_ChrgFault_Reason = 2;
    }
    else if (rtb_Logical5)
    {
        /* Switch: '<S23>/Switch3' incorporates:
         *  Constant: '<S23>/Constant Value2'
         *  Switch: '<S23>/Switch1'
         *  Switch: '<S23>/Switch2'
         */
        VeCHFR_e_ChrgFault_Reason = 3;
    }
    else if (VeCHFR_b_Fault_OBCM)
    {
        /* Switch: '<S23>/Switch5' incorporates:
         *  Constant: '<S23>/Constant Value3'
         *  Switch: '<S23>/Switch1'
         *  Switch: '<S23>/Switch2'
         *  Switch: '<S23>/Switch3'
         */
        VeCHFR_e_ChrgFault_Reason = 4;
    }
    else if (rtb_Logical17)
    {
        /* Switch: '<S23>/Switch6' incorporates:
         *  Constant: '<S23>/Constant Value4'
         *  Switch: '<S23>/Switch1'
         *  Switch: '<S23>/Switch2'
         *  Switch: '<S23>/Switch3'
         *  Switch: '<S23>/Switch5'
         */
        VeCHFR_e_ChrgFault_Reason = 5;
    }
    else if (rtb_TmpSignalConversionAtVeGENR)
    {
        /* Switch: '<S23>/Switch4' incorporates:
         *  Constant: '<S23>/Constant Value5'
         *  Switch: '<S23>/Switch1'
         *  Switch: '<S23>/Switch2'
         *  Switch: '<S23>/Switch3'
         *  Switch: '<S23>/Switch5'
         *  Switch: '<S23>/Switch6'
         */
        VeCHFR_e_ChrgFault_Reason = 6;
    }
    else if (VeCHFR_b_Fault_ChrgPort)
    {
        /* Switch: '<S23>/Switch7' incorporates:
         *  Constant: '<S23>/Constant Value6'
         *  Switch: '<S23>/Switch1'
         *  Switch: '<S23>/Switch2'
         *  Switch: '<S23>/Switch3'
         *  Switch: '<S23>/Switch4'
         *  Switch: '<S23>/Switch5'
         *  Switch: '<S23>/Switch6'
         */
        VeCHFR_e_ChrgFault_Reason = 7;
    }
    else if (rtb_AND_hk)
    {
        /* Switch: '<S23>/Switch8' incorporates:
         *  Constant: '<S23>/Constant Value7'
         *  Switch: '<S23>/Switch1'
         *  Switch: '<S23>/Switch2'
         *  Switch: '<S23>/Switch3'
         *  Switch: '<S23>/Switch4'
         *  Switch: '<S23>/Switch5'
         *  Switch: '<S23>/Switch6'
         *  Switch: '<S23>/Switch7'
         */
        VeCHFR_e_ChrgFault_Reason = 8;
    }
    else if (VeCHFR_b_ConnectionFault)
    {
        /* Switch: '<S23>/Switch9' incorporates:
         *  Constant: '<S23>/Constant Value9'
         *  Switch: '<S23>/Switch1'
         *  Switch: '<S23>/Switch2'
         *  Switch: '<S23>/Switch3'
         *  Switch: '<S23>/Switch4'
         *  Switch: '<S23>/Switch5'
         *  Switch: '<S23>/Switch6'
         *  Switch: '<S23>/Switch7'
         *  Switch: '<S23>/Switch8'
         */
        VeCHFR_e_ChrgFault_Reason = 10;
    }
    else if (VeCHFR_b_ChrgVoltageFault)
    {
        /* Switch: '<S23>/Switch11' incorporates:
         *  Constant: '<S23>/Constant Value10'
         *  Switch: '<S23>/Switch1'
         *  Switch: '<S23>/Switch2'
         *  Switch: '<S23>/Switch3'
         *  Switch: '<S23>/Switch4'
         *  Switch: '<S23>/Switch5'
         *  Switch: '<S23>/Switch6'
         *  Switch: '<S23>/Switch7'
         *  Switch: '<S23>/Switch8'
         *  Switch: '<S23>/Switch9'
         */
        VeCHFR_e_ChrgFault_Reason = 11;
    }
    else if (VeCHFR_b_ChrgCrntFault)
    {
        /* Switch: '<S23>/Switch12' incorporates:
         *  Constant: '<S23>/Constant Value11'
         *  Switch: '<S23>/Switch1'
         *  Switch: '<S23>/Switch11'
         *  Switch: '<S23>/Switch2'
         *  Switch: '<S23>/Switch3'
         *  Switch: '<S23>/Switch4'
         *  Switch: '<S23>/Switch5'
         *  Switch: '<S23>/Switch6'
         *  Switch: '<S23>/Switch7'
         *  Switch: '<S23>/Switch8'
         *  Switch: '<S23>/Switch9'
         */
        VeCHFR_e_ChrgFault_Reason = 12;
    }
    else if (rtb_TmpSignalConversionAtVeGE_p)
    {
        /* Switch: '<S23>/Switch15' incorporates:
         *  Constant: '<S23>/Constant Value14'
         *  Switch: '<S23>/Switch1'
         *  Switch: '<S23>/Switch11'
         *  Switch: '<S23>/Switch12'
         *  Switch: '<S23>/Switch2'
         *  Switch: '<S23>/Switch3'
         *  Switch: '<S23>/Switch4'
         *  Switch: '<S23>/Switch5'
         *  Switch: '<S23>/Switch6'
         *  Switch: '<S23>/Switch7'
         *  Switch: '<S23>/Switch8'
         *  Switch: '<S23>/Switch9'
         */
        VeCHFR_e_ChrgFault_Reason = 13;
    }
    else
    {
        /* Switch: '<S23>/Switch1' incorporates:
         *  Switch: '<S23>/Switch11'
         *  Switch: '<S23>/Switch12'
         *  Switch: '<S23>/Switch15'
         *  Switch: '<S23>/Switch2'
         *  Switch: '<S23>/Switch3'
         *  Switch: '<S23>/Switch4'
         *  Switch: '<S23>/Switch5'
         *  Switch: '<S23>/Switch6'
         *  Switch: '<S23>/Switch7'
         *  Switch: '<S23>/Switch8'
         *  Switch: '<S23>/Switch9'
         */
        VeCHFR_e_ChrgFault_Reason = 0;
    }

    /* End of Switch: '<S23>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CHFR_MedTED' */

    /* Inport: '<Root>/VeOBCR_Cnt_InitChecks_Reason' */
    (void)Rte_Read_VeOBCR_Cnt_InitChecks_Reason_Value(&rtb_Sum20);

    /* Inport: '<Root>/VeOFCR_k_ChargeReq_Reason' */
    (void)Rte_Read_VeOFCR_k_ChargeReq_Reason_Value(&rtb_MinMax6);

    /* Outputs for Function Call SubSystem: '<Root>/CHFR_MedTED' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHFC'
     */
    /* MinMax: '<S157>/MinMax6' incorporates:
     *  Constant: '<S152>/Calib'
     */
    if (rtb_MinMax6 >= KeCHFR_Cnt_KR7)
    {
        /* MinMax: '<S157>/MinMax6' */
        rtb_MinMax6 = KeCHFR_Cnt_KR7;
    }

    /* End of MinMax: '<S157>/MinMax6' */

    /* Chart: '<S8>/NCR_SF' incorporates:
     *  Constant: '<S139>/Calib'
     *  Constant: '<S140>/Calib'
     *  Constant: '<S141>/Calib'
     *  Constant: '<S142>/Calib'
     *  Constant: '<S143>/Calib'
     *  Constant: '<S144>/Calib'
     *  Constant: '<S145>/Calib'
     *  Constant: '<S147>/Calib'
     *  Constant: '<S148>/Calib'
     *  Constant: '<S149>/Calib'
     *  Constant: '<S150>/Calib'
     *  Constant: '<S151>/Calib'
     *  Constant: '<S152>/Calib'
     *  Constant: '<S153>/Calib'
     *  Constant: '<S154>/Calib'
     */
    /* Gateway: CHFR_MedTED/CHFC/NCR_Retry/NCR_SF */
    /* During: CHFR_MedTED/CHFC/NCR_Retry/NCR_SF */
    /* Entry Internal: CHFR_MedTED/CHFC/NCR_Retry/NCR_SF */
    /* Transition: '<S135>:1' */
    VeCHFR_k_ChrgSysFault_ReasonSF = 0;
    switch (rtb_TmpSignalConversionAtVeOBCR)
    {
      case 19:
        /* Transition: '<S135>:347' */
        /* Transition: '<S135>:353' */
        VeCHFR_k_ChrgSysFault_ReasonSF = (sint16)((((((((((((((((KeCHFR_Cnt_KR1
            + KeCHFR_Cnt_KR2) + KeCHFR_Cnt_KR3) + KeCHFR_Cnt_KR4) +
            KeCHFR_Cnt_KR5) + KeCHFR_Cnt_KR6) + KeCHFR_Cnt_KR7) + KeCHFR_Cnt_KR8)
            + KeCHFR_Cnt_KR9) + KeCHFR_Cnt_KR10) + KeCHFR_Cnt_KR11) +
            KeCHFR_Cnt_KR12) + KeCHFR_Cnt_KR13) + KeCHFR_Cnt_KR14) +
            KeCHFR_Cnt_KR15) + rtb_TmpSignalConversionAtVeDCCR) + 36);
        break;

      case 20:
        /* Transition: '<S135>:14' */
        /* Transition: '<S135>:224' */
        VeCHFR_k_ChrgSysFault_ReasonSF = 20;

        /* Transition: '<S135>:227' */
        if (rtb_TmpSignalConversionAtVaOB_i[14])
        {
            /* MinMax: '<S157>/MinMax14' incorporates:
             *  Constant: '<S145>/Calib'
             */
            /* Transition: '<S135>:229' */
            /* Transition: '<S135>:233' */
            if (1 < KeCHFR_Cnt_KR15)
            {
                rtb_Sum22 = 1;
            }
            else
            {
                rtb_Sum22 = KeCHFR_Cnt_KR15;
            }

            /* End of MinMax: '<S157>/MinMax14' */
            VeCHFR_k_ChrgSysFault_ReasonSF = (sint16)
                (((((((((((((((KeCHFR_Cnt_KR1 + KeCHFR_Cnt_KR2) + KeCHFR_Cnt_KR3)
                             + KeCHFR_Cnt_KR4) + KeCHFR_Cnt_KR5) +
                           KeCHFR_Cnt_KR6) + KeCHFR_Cnt_KR7) + KeCHFR_Cnt_KR8) +
                        KeCHFR_Cnt_KR9) + KeCHFR_Cnt_KR10) + KeCHFR_Cnt_KR11) +
                     KeCHFR_Cnt_KR12) + KeCHFR_Cnt_KR13) + KeCHFR_Cnt_KR14) +
                  rtb_Sum22) + 35);
        }
        else
        {
            /* Transition: '<S135>:231' */
        }

        if (rtb_TmpSignalConversionAtVaOB_i[13])
        {
            /* MinMax: '<S157>/MinMax13' incorporates:
             *  Constant: '<S144>/Calib'
             */
            /* Transition: '<S135>:242' */
            /* Transition: '<S135>:243' */
            if (1 < KeCHFR_Cnt_KR14)
            {
                rtb_Sum22 = 1;
            }
            else
            {
                rtb_Sum22 = KeCHFR_Cnt_KR14;
            }

            /* End of MinMax: '<S157>/MinMax13' */
            VeCHFR_k_ChrgSysFault_ReasonSF = (sint16)
                ((((((((((((((KeCHFR_Cnt_KR1 + KeCHFR_Cnt_KR2) + KeCHFR_Cnt_KR3)
                            + KeCHFR_Cnt_KR4) + KeCHFR_Cnt_KR5) + KeCHFR_Cnt_KR6)
                         + KeCHFR_Cnt_KR7) + KeCHFR_Cnt_KR8) + KeCHFR_Cnt_KR9) +
                      KeCHFR_Cnt_KR10) + KeCHFR_Cnt_KR11) + KeCHFR_Cnt_KR12) +
                   KeCHFR_Cnt_KR13) + rtb_Sum22) + 34);
        }
        else
        {
            /* Transition: '<S135>:235' */
        }

        if (rtb_TmpSignalConversionAtVaOB_i[12])
        {
            /* MinMax: '<S157>/MinMax12' incorporates:
             *  Constant: '<S143>/Calib'
             */
            /* Transition: '<S135>:237' */
            /* Transition: '<S135>:240' */
            if (1 < KeCHFR_Cnt_KR13)
            {
                rtb_Sum22 = 1;
            }
            else
            {
                rtb_Sum22 = KeCHFR_Cnt_KR13;
            }

            /* End of MinMax: '<S157>/MinMax12' */
            VeCHFR_k_ChrgSysFault_ReasonSF = (sint16)(((((((((((((KeCHFR_Cnt_KR1
                + KeCHFR_Cnt_KR2) + KeCHFR_Cnt_KR3) + KeCHFR_Cnt_KR4) +
                KeCHFR_Cnt_KR5) + KeCHFR_Cnt_KR6) + KeCHFR_Cnt_KR7) +
                KeCHFR_Cnt_KR8) + KeCHFR_Cnt_KR9) + KeCHFR_Cnt_KR10) +
                KeCHFR_Cnt_KR11) + KeCHFR_Cnt_KR12) + rtb_Sum22) + 33);
        }
        else
        {
            /* Transition: '<S135>:238' */
        }

        if (rtb_TmpSignalConversionAtVaOB_i[11])
        {
            /* MinMax: '<S157>/MinMax11' incorporates:
             *  Constant: '<S142>/Calib'
             */
            /* Transition: '<S135>:253' */
            /* Transition: '<S135>:254' */
            if (1 < KeCHFR_Cnt_KR12)
            {
                rtb_Sum22 = 1;
            }
            else
            {
                rtb_Sum22 = KeCHFR_Cnt_KR12;
            }

            /* End of MinMax: '<S157>/MinMax11' */
            VeCHFR_k_ChrgSysFault_ReasonSF = (sint16)((((((((((((KeCHFR_Cnt_KR1
                + KeCHFR_Cnt_KR2) + KeCHFR_Cnt_KR3) + KeCHFR_Cnt_KR4) +
                KeCHFR_Cnt_KR5) + KeCHFR_Cnt_KR6) + KeCHFR_Cnt_KR7) +
                KeCHFR_Cnt_KR8) + KeCHFR_Cnt_KR9) + KeCHFR_Cnt_KR10) +
                KeCHFR_Cnt_KR11) + rtb_Sum22) + 32);
        }
        else
        {
            /* Transition: '<S135>:246' */
        }

        if (rtb_TmpSignalConversionAtVaOB_i[10])
        {
            /* MinMax: '<S157>/MinMax10' incorporates:
             *  Constant: '<S141>/Calib'
             */
            /* Transition: '<S135>:248' */
            /* Transition: '<S135>:251' */
            if (1 < KeCHFR_Cnt_KR11)
            {
                rtb_Sum22 = 1;
            }
            else
            {
                rtb_Sum22 = KeCHFR_Cnt_KR11;
            }

            /* End of MinMax: '<S157>/MinMax10' */
            VeCHFR_k_ChrgSysFault_ReasonSF = (sint16)(((((((((((KeCHFR_Cnt_KR1 +
                KeCHFR_Cnt_KR2) + KeCHFR_Cnt_KR3) + KeCHFR_Cnt_KR4) +
                KeCHFR_Cnt_KR5) + KeCHFR_Cnt_KR6) + KeCHFR_Cnt_KR7) +
                KeCHFR_Cnt_KR8) + KeCHFR_Cnt_KR9) + KeCHFR_Cnt_KR10) + rtb_Sum22)
                + 31);
        }
        else
        {
            /* Transition: '<S135>:249' */
        }

        if (rtb_TmpSignalConversionAtVaOB_i[9])
        {
            /* MinMax: '<S157>/MinMax9' incorporates:
             *  Constant: '<S140>/Calib'
             */
            /* Transition: '<S135>:266' */
            /* Transition: '<S135>:267' */
            if (1 < KeCHFR_Cnt_KR10)
            {
                rtb_Sum22 = 1;
            }
            else
            {
                rtb_Sum22 = KeCHFR_Cnt_KR10;
            }

            /* End of MinMax: '<S157>/MinMax9' */
            VeCHFR_k_ChrgSysFault_ReasonSF = (sint16)((((((((((KeCHFR_Cnt_KR1 +
                KeCHFR_Cnt_KR2) + KeCHFR_Cnt_KR3) + KeCHFR_Cnt_KR4) +
                KeCHFR_Cnt_KR5) + KeCHFR_Cnt_KR6) + KeCHFR_Cnt_KR7) +
                KeCHFR_Cnt_KR8) + KeCHFR_Cnt_KR9) + rtb_Sum22) + 30);
        }
        else
        {
            /* Transition: '<S135>:259' */
        }

        if (rtb_TmpSignalConversionAtVaOB_i[8])
        {
            /* MinMax: '<S157>/MinMax8' incorporates:
             *  Constant: '<S154>/Calib'
             */
            /* Transition: '<S135>:261' */
            /* Transition: '<S135>:264' */
            if (1 < KeCHFR_Cnt_KR9)
            {
                rtb_Sum22 = 1;
            }
            else
            {
                rtb_Sum22 = KeCHFR_Cnt_KR9;
            }

            /* End of MinMax: '<S157>/MinMax8' */
            VeCHFR_k_ChrgSysFault_ReasonSF = (sint16)(((((((((KeCHFR_Cnt_KR1 +
                KeCHFR_Cnt_KR2) + KeCHFR_Cnt_KR3) + KeCHFR_Cnt_KR4) +
                KeCHFR_Cnt_KR5) + KeCHFR_Cnt_KR6) + KeCHFR_Cnt_KR7) +
                KeCHFR_Cnt_KR8) + rtb_Sum22) + 29);
        }
        else
        {
            /* Transition: '<S135>:262' */
        }

        if (rtb_TmpSignalConversionAtVaOB_i[7])
        {
            /* MinMax: '<S157>/MinMax7' incorporates:
             *  Constant: '<S153>/Calib'
             */
            /* Transition: '<S135>:276' */
            /* Transition: '<S135>:277' */
            if (1 < KeCHFR_Cnt_KR8)
            {
                rtb_Sum22 = 1;
            }
            else
            {
                rtb_Sum22 = KeCHFR_Cnt_KR8;
            }

            /* End of MinMax: '<S157>/MinMax7' */
            VeCHFR_k_ChrgSysFault_ReasonSF = (sint16)((((((((KeCHFR_Cnt_KR1 +
                KeCHFR_Cnt_KR2) + KeCHFR_Cnt_KR3) + KeCHFR_Cnt_KR4) +
                KeCHFR_Cnt_KR5) + KeCHFR_Cnt_KR6) + KeCHFR_Cnt_KR7) + rtb_Sum22)
                + 28);
        }
        else
        {
            /* Transition: '<S135>:269' */
        }

        if (rtb_TmpSignalConversionAtVaOB_i[6])
        {
            /* Transition: '<S135>:271' */
            /* Transition: '<S135>:274' */
            VeCHFR_k_ChrgSysFault_ReasonSF = (sint16)(((((((KeCHFR_Cnt_KR1 +
                KeCHFR_Cnt_KR2) + KeCHFR_Cnt_KR3) + KeCHFR_Cnt_KR4) +
                KeCHFR_Cnt_KR5) + KeCHFR_Cnt_KR6) + rtb_MinMax6) + 27);
        }
        else
        {
            /* Transition: '<S135>:272' */
        }

        if (rtb_TmpSignalConversionAtVaOB_i[5])
        {
            /* MinMax: '<S157>/MinMax5' incorporates:
             *  Constant: '<S151>/Calib'
             */
            /* Transition: '<S135>:319' */
            /* Transition: '<S135>:320' */
            if (rtb_Sum20 >= KeCHFR_Cnt_KR6)
            {
                rtb_Sum20 = KeCHFR_Cnt_KR6;
            }

            /* End of MinMax: '<S157>/MinMax5' */
            VeCHFR_k_ChrgSysFault_ReasonSF = (sint16)((((((KeCHFR_Cnt_KR1 +
                KeCHFR_Cnt_KR2) + KeCHFR_Cnt_KR3) + KeCHFR_Cnt_KR4) +
                KeCHFR_Cnt_KR5) + rtb_Sum20) + 26);
        }
        else
        {
            /* Transition: '<S135>:312' */
        }

        if (rtb_TmpSignalConversionAtVaOB_i[4])
        {
            /* MinMax: '<S157>/MinMax4' incorporates:
             *  Constant: '<S150>/Calib'
             */
            /* Transition: '<S135>:314' */
            /* Transition: '<S135>:317' */
            if (1 < KeCHFR_Cnt_KR5)
            {
                rtb_Sum22 = 1;
            }
            else
            {
                rtb_Sum22 = KeCHFR_Cnt_KR5;
            }

            /* End of MinMax: '<S157>/MinMax4' */
            VeCHFR_k_ChrgSysFault_ReasonSF = (sint16)(((((KeCHFR_Cnt_KR1 +
                KeCHFR_Cnt_KR2) + KeCHFR_Cnt_KR3) + KeCHFR_Cnt_KR4) + rtb_Sum22)
                + 25);
        }
        else
        {
            /* Transition: '<S135>:315' */
        }

        if (rtb_TmpSignalConversionAtVaOB_i[3])
        {
            /* MinMax: '<S157>/MinMax3' incorporates:
             *  Constant: '<S149>/Calib'
             */
            /* Transition: '<S135>:329' */
            /* Transition: '<S135>:330' */
            if (VeCHFR_e_ChrgFault_Reason < KeCHFR_Cnt_KR4)
            {
                rtb_Sum22 = VeCHFR_e_ChrgFault_Reason;
            }
            else
            {
                rtb_Sum22 = KeCHFR_Cnt_KR4;
            }

            /* End of MinMax: '<S157>/MinMax3' */
            VeCHFR_k_ChrgSysFault_ReasonSF = (sint16)((((KeCHFR_Cnt_KR1 +
                KeCHFR_Cnt_KR2) + KeCHFR_Cnt_KR3) + rtb_Sum22) + 24);
        }
        else
        {
            /* Transition: '<S135>:322' */
        }

        if (rtb_TmpSignalConversionAtVaOB_i[2])
        {
            /* MinMax: '<S157>/MinMax2' incorporates:
             *  Constant: '<S148>/Calib'
             */
            /* Transition: '<S135>:324' */
            /* Transition: '<S135>:327' */
            if (rtb_Switch1_ja >= KeCHFR_Cnt_KR3)
            {
                rtb_Switch1_ja = KeCHFR_Cnt_KR3;
            }

            /* End of MinMax: '<S157>/MinMax2' */
            VeCHFR_k_ChrgSysFault_ReasonSF = (sint16)(((KeCHFR_Cnt_KR1 +
                KeCHFR_Cnt_KR2) + rtb_Switch1_ja) + 23);
        }
        else
        {
            /* Transition: '<S135>:325' */
        }

        if (rtb_TmpSignalConversionAtVaOB_i[1])
        {
            /* Transition: '<S135>:339' */
            /* Transition: '<S135>:340' */
            VeCHFR_k_ChrgSysFault_ReasonSF = (sint16)((KeCHFR_Cnt_KR1 +
                rtb_MinMax1) + 22);
        }
        else
        {
            /* Transition: '<S135>:332' */
        }

        if (rtb_TmpSignalConversionAtVaOB_i[0])
        {
            /* DataTypeConversion: '<S157>/Data Type Conversion' incorporates:
             *  Inport: '<Root>/VeHPMR_e_RsnForUnintndShtDwn'
             */
            /* Transition: '<S135>:334' */
            /* Transition: '<S135>:337' */
            rtb_Switch1_ja = (sint16)tmpRead_w;

            /* MinMax: '<S157>/MinMax' incorporates:
             *  Constant: '<S139>/Calib'
             *  DataTypeConversion: '<S157>/Data Type Conversion'
             *  Inport: '<Root>/VeHPMR_e_RsnForUnintndShtDwn'
             */
            if (((sint32)tmpRead_w) >= ((sint32)KeCHFR_Cnt_KR1))
            {
                rtb_Switch1_ja = KeCHFR_Cnt_KR1;
            }

            /* End of MinMax: '<S157>/MinMax' */
            VeCHFR_k_ChrgSysFault_ReasonSF = (sint16)(rtb_Switch1_ja + 21);
        }
        else
        {
            /* Transition: '<S135>:335' */
        }
        break;

      default:
        if (rtb_TmpSignalConversionAtVeOBCR != 20)
        {
            /* Transition: '<S135>:17' */
            /* Transition: '<S135>:351' */
            VeCHFR_k_ChrgSysFault_ReasonSF = rtb_TmpSignalConversionAtVeOBCR;
        }
        break;
    }

    /* End of Chart: '<S8>/NCR_SF' */

    /* Switch: '<S10>/Switch1' */
    if (rtb_TmpSignalConversionAtVeOB_i)
    {
        /* Switch: '<S10>/Switch1' incorporates:
         *  Constant: '<S115>/Calib'
         *  Selector: '<S10>/Selector'
         */
        VeCHFR_b_ChrgFaultNCR = KaCHFR_b_ChrgFault
            [(VeCHFR_k_ChrgSysFault_ReasonSF)];
    }
    else
    {
        /* Switch: '<S10>/Switch1' incorporates:
         *  Constant: '<S116>/Calib'
         *  Selector: '<S10>/Selector1'
         */
        VeCHFR_b_ChrgFaultNCR = KaCHFR_b_ChrgFaultnotPI
            [(VeCHFR_k_ChrgSysFault_ReasonSF)];
    }

    /* End of Switch: '<S10>/Switch1' */

    /* Switch: '<S155>/Switch' incorporates:
     *  Constant: '<S155>/Constant Value31'
     *  Constant: '<S155>/Constant Value32'
     *  Logic: '<S155>/Logical1'
     *  RelationalOperator: '<S155>/Comparison4'
     *  RelationalOperator: '<S155>/Comparison5'
     */
    if ((rtb_TmpSignalConversionAtVeOBCR == 20) ||
            (rtb_TmpSignalConversionAtVeOBCR == 19))
    {
        /* Switch: '<S155>/Switch' incorporates:
         *  Constant: '<S155>/Constant Value33'
         */
        VeCHFR_K_MainSFRsn = 0;
    }
    else
    {
        /* Switch: '<S155>/Switch' */
        VeCHFR_K_MainSFRsn = rtb_TmpSignalConversionAtVeOBCR;
    }

    /* End of Switch: '<S155>/Switch' */

    /* MinMax: '<S155>/MinMax1' */
    rtb_Switch1_ja = rtb_TmpSignalConversionAtVaHPMR[0];

    /* MinMax: '<S155>/MinMax2' */
    rtb_Sum20 = rtb_TmpSignalConversionAtVaHP_m[0];
    for (i = 0; i < 14; i++)
    {
        /* MinMax: '<S155>/MinMax1' */
        rtb_Sum22 = rtb_TmpSignalConversionAtVaHPMR[i + 1];
        if (rtb_Switch1_ja <= rtb_Sum22)
        {
            rtb_Switch1_ja = rtb_Sum22;
        }

        /* MinMax: '<S155>/MinMax2' */
        rtb_Sum22 = rtb_TmpSignalConversionAtVaHP_m[i + 1];
        if (rtb_Sum20 <= rtb_Sum22)
        {
            rtb_Sum20 = rtb_Sum22;
        }
    }

    /* Switch: '<S155>/Switch2' incorporates:
     *  Constant: '<S155>/Constant Value42'
     *  Constant: '<S155>/Constant Value6'
     *  Logic: '<S155>/Logical3'
     *  MinMax: '<S155>/MinMax1'
     *  MinMax: '<S155>/MinMax2'
     *  RelationalOperator: '<S155>/Comparison10'
     *  RelationalOperator: '<S155>/Comparison11'
     *  RelationalOperator: '<S155>/Comparison8'
     *  Switch: '<S155>/Switch17'
     */
    if (((rtb_Switch1_ja == 0) && (rtb_TmpSignalConversionAtVaOB_i[0])) &&
            (rtb_Sum20 == 0))
    {
        /* Switch: '<S155>/Switch2' incorporates:
         *  Constant: '<S158>/Calib'
         */
        for (i = 0; i < 15; i++)
        {
            VaCHFR_K_C1[(i)] = KaCHFR_k_HPMRDefaultError[(i)];
        }
    }
    else if (rtb_TmpSignalConversionAtVaOB_i[0])
    {
        for (i = 0; i < 15; i++)
        {
            rtb_Sum7_f = rtb_TmpSignalConversionAtVaHPMR[i];

            /* Switch: '<S155>/Switch18' incorporates:
             *  Constant: '<S155>/Constant Value50'
             *  RelationalOperator: '<S155>/Comparison8'
             *  Switch: '<S155>/Switch17'
             */
            if (rtb_Sum7_f > 0)
            {
                /* Switch: '<S155>/Switch2' incorporates:
                 *  Constant: '<S155>/Constant Value41'
                 *  Sum: '<S155>/Sum1'
                 *  Switch: '<S155>/Switch17'
                 */
                VaCHFR_K_C1[(i)] = (sint16)(rtb_Sum7_f + 21);
            }
            else
            {
                /* Switch: '<S155>/Switch2' incorporates:
                 *  Constant: '<S155>/Constant Value40'
                 *  Switch: '<S155>/Switch17'
                 */
                VaCHFR_K_C1[(i)] = 0;
            }

            /* End of Switch: '<S155>/Switch18' */
        }
    }
    else
    {
        for (i = 0; i < 15; i++)
        {
            /* Switch: '<S155>/Switch2' incorporates:
             *  Constant: '<S155>/Constant Value12'
             *  Switch: '<S155>/Switch17'
             */
            VaCHFR_K_C1[(i)] = 0;
        }
    }

    /* End of Switch: '<S155>/Switch2' */

    /* Switch: '<S24>/Switch1' incorporates:
     *  Constant: '<S139>/Calib'
     *  Constant: '<S147>/Calib'
     *  Sum: '<S156>/Sum19'
     */
    rtb_Switch1_ja = (sint16)(KeCHFR_Cnt_KR1 + KeCHFR_Cnt_KR2);

    /* Sum: '<S156>/Sum20' incorporates:
     *  Constant: '<S148>/Calib'
     */
    rtb_Sum20 = (sint16)(rtb_Switch1_ja + KeCHFR_Cnt_KR3);

    /* Sum: '<S156>/Sum21' incorporates:
     *  Constant: '<S149>/Calib'
     */
    rtb_Sum21 = (sint16)(rtb_Sum20 + KeCHFR_Cnt_KR4);

    /* Sum: '<S156>/Sum22' incorporates:
     *  Constant: '<S150>/Calib'
     */
    rtb_Sum22 = (sint16)(rtb_Sum21 + KeCHFR_Cnt_KR5);

    /* Sum: '<S156>/Sum23' incorporates:
     *  Constant: '<S151>/Calib'
     */
    rtb_Sum23 = (sint16)(rtb_Sum22 + KeCHFR_Cnt_KR6);

    /* Sum: '<S156>/Sum24' incorporates:
     *  Constant: '<S152>/Calib'
     */
    rtb_Sum24 = (sint16)(rtb_Sum23 + KeCHFR_Cnt_KR7);

    /* Sum: '<S156>/Sum25' incorporates:
     *  Constant: '<S153>/Calib'
     */
    rtb_Sum25 = (sint16)(rtb_Sum24 + KeCHFR_Cnt_KR8);

    /* Sum: '<S156>/Sum26' incorporates:
     *  Constant: '<S154>/Calib'
     */
    rtb_Sum26 = (sint16)(rtb_Sum25 + KeCHFR_Cnt_KR9);

    /* Sum: '<S156>/Sum1' incorporates:
     *  Constant: '<S140>/Calib'
     */
    rtb_Sum1 = (sint16)(rtb_Sum26 + KeCHFR_Cnt_KR10);

    /* Sum: '<S156>/Sum2' incorporates:
     *  Constant: '<S141>/Calib'
     */
    rtb_Sum2 = (sint16)(rtb_Sum1 + KeCHFR_Cnt_KR11);

    /* Sum: '<S156>/Sum3' incorporates:
     *  Constant: '<S142>/Calib'
     */
    rtb_Sum3 = (sint16)(rtb_Sum2 + KeCHFR_Cnt_KR12);

    /* Sum: '<S156>/Sum4' incorporates:
     *  Constant: '<S143>/Calib'
     */
    rtb_Sum4 = (sint16)(rtb_Sum3 + KeCHFR_Cnt_KR13);

    /* Sum: '<S156>/Sum5' incorporates:
     *  Constant: '<S144>/Calib'
     */
    rtb_Sum5 = (sint16)(rtb_Sum4 + KeCHFR_Cnt_KR14);

    /* Sum: '<S156>/Sum6' incorporates:
     *  Constant: '<S145>/Calib'
     */
    rtb_Sum6 = (sint16)(rtb_Sum5 + KeCHFR_Cnt_KR15);

    /* Switch: '<S155>/Switch19' */
    if (rtb_TmpSignalConversionAtVaOB_i[0])
    {
        /* Sum: '<S156>/Sum7' incorporates:
         *  Constant: '<S146>/Calib'
         *  Constant: '<S155>/Constant Value47'
         *  Sum: '<S155>/Sum3'
         */
        rtb_Sum7_f = (sint16)(((sint16)(rtb_Sum6 + KeCHFR_Cnt_KR16)) + 37);

        /* Switch: '<S155>/Switch19' incorporates:
         *  RelationalOperator: '<S155>/Comparison9'
         */
        for (i = 0; i < 15; i++)
        {
            rtb_TmpSignalConversionAtVaHP_i = rtb_TmpSignalConversionAtVaHP_m[i];

            /* Switch: '<S155>/Switch20' incorporates:
             *  Constant: '<S155>/Constant Value43'
             *  Constant: '<S155>/Constant Value49'
             *  RelationalOperator: '<S155>/Comparison9'
             *  Sum: '<S155>/Sum3'
             */
            if (rtb_TmpSignalConversionAtVaHP_i > 0)
            {
                VaCHFR_K_C16[(i)] = (sint16)(rtb_TmpSignalConversionAtVaHP_i +
                    rtb_Sum7_f);
            }
            else
            {
                VaCHFR_K_C16[(i)] = 0;
            }

            /* End of Switch: '<S155>/Switch20' */
        }
    }
    else
    {
        /* Switch: '<S155>/Switch19' incorporates:
         *  Constant: '<S155>/Constant Value44'
         */
        for (i = 0; i < 15; i++)
        {
            VaCHFR_K_C16[(i)] = 0;
        }
    }

    /* End of Switch: '<S155>/Switch19' */

    /* Switch: '<S155>/Switch3' */
    if (rtb_TmpSignalConversionAtVaOB_i[1])
    {
        /* Switch: '<S155>/Switch3' incorporates:
         *  Constant: '<S139>/Calib'
         *  Constant: '<S155>/Constant Value7'
         *  Sum: '<S155>/Sum7'
         */
        VeCHFR_K_C2 = (sint16)(((sint16)(KeCHFR_Cnt_KR1 + rtb_MinMax1)) + 22);
    }
    else
    {
        /* Switch: '<S155>/Switch3' incorporates:
         *  Constant: '<S155>/Constant Value13'
         */
        VeCHFR_K_C2 = 0;
    }

    /* End of Switch: '<S155>/Switch3' */

    /* SignalConversion generated from: '<S155>/Sum' incorporates:
     *  Switch: '<S24>/Switch1'
     */
    rtb_TmpSignalConversionAtVaHPMR[0] = VeCHFR_b_LOCBPCM ? 1 : 0;

    /* Switch: '<S24>/Switch2' */
    if (rtb_TmpSignalConversionAtVeO_b2)
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVaHPMR[1] = 2;
    }
    else
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value17'
         */
        rtb_TmpSignalConversionAtVaHPMR[1] = 0;
    }

    /* End of Switch: '<S24>/Switch2' */

    /* Switch: '<S24>/Switch3' */
    if (rtb_Logical5)
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value2'
         */
        rtb_TmpSignalConversionAtVaHPMR[2] = 3;
    }
    else
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value18'
         */
        rtb_TmpSignalConversionAtVaHPMR[2] = 0;
    }

    /* End of Switch: '<S24>/Switch3' */

    /* Switch: '<S24>/Switch5' */
    if (VeCHFR_b_Fault_OBCM)
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value3'
         */
        rtb_TmpSignalConversionAtVaHPMR[3] = 4;
    }
    else
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value19'
         */
        rtb_TmpSignalConversionAtVaHPMR[3] = 0;
    }

    /* End of Switch: '<S24>/Switch5' */

    /* Switch: '<S24>/Switch6' */
    if (rtb_Logical17)
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value4'
         */
        rtb_TmpSignalConversionAtVaHPMR[4] = 5;
    }
    else
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value20'
         */
        rtb_TmpSignalConversionAtVaHPMR[4] = 0;
    }

    /* End of Switch: '<S24>/Switch6' */

    /* Switch: '<S24>/Switch4' */
    if (rtb_TmpSignalConversionAtVeGENR)
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value5'
         */
        rtb_TmpSignalConversionAtVaHPMR[5] = 6;
    }
    else
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value21'
         */
        rtb_TmpSignalConversionAtVaHPMR[5] = 0;
    }

    /* End of Switch: '<S24>/Switch4' */

    /* Switch: '<S24>/Switch7' */
    if (VeCHFR_b_Fault_ChrgPort)
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value6'
         */
        rtb_TmpSignalConversionAtVaHPMR[6] = 7;
    }
    else
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value22'
         */
        rtb_TmpSignalConversionAtVaHPMR[6] = 0;
    }

    /* End of Switch: '<S24>/Switch7' */

    /* Switch: '<S24>/Switch16' */
    if (rtb_AND_hk)
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value23'
         */
        rtb_TmpSignalConversionAtVaHPMR[7] = 8;
    }
    else
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value7'
         */
        rtb_TmpSignalConversionAtVaHPMR[7] = 0;
    }

    /* End of Switch: '<S24>/Switch16' */

    /* SignalConversion generated from: '<S155>/Sum' incorporates:
     *  Constant: '<S24>/Constant Value24'
     *  Switch: '<S24>/Switch10'
     */
    rtb_TmpSignalConversionAtVaHPMR[8] = 0;

    /* Switch: '<S24>/Switch9' */
    if (VeCHFR_b_ConnectionFault)
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value9'
         */
        rtb_TmpSignalConversionAtVaHPMR[9] = 10;
    }
    else
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value25'
         */
        rtb_TmpSignalConversionAtVaHPMR[9] = 0;
    }

    /* End of Switch: '<S24>/Switch9' */

    /* Switch: '<S24>/Switch8' */
    if (VeCHFR_b_ChrgVoltageFault)
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value26'
         */
        rtb_TmpSignalConversionAtVaHPMR[10] = 11;
    }
    else
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value27'
         */
        rtb_TmpSignalConversionAtVaHPMR[10] = 0;
    }

    /* End of Switch: '<S24>/Switch8' */

    /* Switch: '<S24>/Switch12' */
    if (VeCHFR_b_ChrgCrntFault)
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value11'
         */
        rtb_TmpSignalConversionAtVaHPMR[11] = 12;
    }
    else
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value10'
         */
        rtb_TmpSignalConversionAtVaHPMR[11] = 0;
    }

    /* End of Switch: '<S24>/Switch12' */

    /* Switch: '<S24>/Switch15' */
    if (rtb_TmpSignalConversionAtVeGE_p)
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value14'
         */
        rtb_TmpSignalConversionAtVaHPMR[12] = 13;
    }
    else
    {
        /* SignalConversion generated from: '<S155>/Sum' incorporates:
         *  Constant: '<S24>/Constant Value28'
         */
        rtb_TmpSignalConversionAtVaHPMR[12] = 0;
    }

    /* End of Switch: '<S24>/Switch15' */

    /* SignalConversion generated from: '<S155>/Sum' */
    rtb_TmpSignalConversionAtVaHPMR[13] = CHFR_ac_ConstB.Switch13_i;
    rtb_TmpSignalConversionAtVaHPMR[14] = CHFR_ac_ConstB.Switch14_b;
    for (i = 0; i < 15; i++)
    {
        /* RelationalOperator: '<S155>/Comparison1' */
        rtb_Sum7_f = rtb_TmpSignalConversionAtVaHPMR[i];

        /* RelationalOperator: '<S155>/Comparison2' */
        rtb_MinMax1 = rtb_TmpSignalConversionAtVaOBCR[i];

        /* Switch: '<S155>/Switch4' incorporates:
         *  Constant: '<S155>/Constant Value2'
         *  RelationalOperator: '<S155>/Comparison2'
         */
        if (rtb_MinMax1 > 0)
        {
            /* Switch: '<S155>/Switch4' incorporates:
             *  Constant: '<S155>/Constant Value3'
             *  Sum: '<S155>/Sum2'
             */
            VaCHFR_K_C3[(i)] = (sint16)(((sint16)(rtb_MinMax1 + rtb_Switch1_ja))
                + 23);
        }
        else
        {
            /* Switch: '<S155>/Switch4' incorporates:
             *  Constant: '<S155>/Constant Value36'
             */
            VaCHFR_K_C3[(i)] = 0;
        }

        /* End of Switch: '<S155>/Switch4' */

        /* Switch: '<S155>/Switch5' incorporates:
         *  Constant: '<S155>/Constant Value1'
         *  RelationalOperator: '<S155>/Comparison1'
         */
        if (rtb_Sum7_f > 0)
        {
            /* Switch: '<S155>/Switch5' incorporates:
             *  Constant: '<S155>/Constant Value'
             *  Sum: '<S155>/Sum'
             */
            VaCHFR_K_C4[(i)] = (sint16)(((sint16)(rtb_Sum7_f + rtb_Sum20)) + 24);
        }
        else
        {
            /* Switch: '<S155>/Switch5' incorporates:
             *  Constant: '<S155>/Constant Value37'
             */
            VaCHFR_K_C4[(i)] = 0;
        }

        /* End of Switch: '<S155>/Switch5' */
    }

    /* Switch: '<S155>/Switch6' */
    if (rtb_TmpSignalConversionAtVaOB_i[4])
    {
        /* Switch: '<S155>/Switch6' incorporates:
         *  Constant: '<S155>/Constant Value9'
         *  Constant: '<S155>/Thermal_Reason1'
         *  Sum: '<S155>/Sum8'
         */
        VeCHFR_K_C5 = (sint16)(rtb_Sum21 + 26);
    }
    else
    {
        /* Switch: '<S155>/Switch6' incorporates:
         *  Constant: '<S155>/Constant Value8'
         */
        VeCHFR_K_C5 = 0;
    }

    /* End of Switch: '<S155>/Switch6' */
    for (i = 0; i < 7; i++)
    {
        /* RelationalOperator: '<S155>/Comparison3' */
        rtb_Switch1_ja = rtb_TmpSignalConversionAtVaO_lc[i];

        /* Switch: '<S155>/Switch7' incorporates:
         *  Constant: '<S155>/Constant Value4'
         *  RelationalOperator: '<S155>/Comparison3'
         */
        if (rtb_Switch1_ja > 0)
        {
            /* Switch: '<S155>/Switch7' incorporates:
             *  Constant: '<S155>/Constant Value5'
             *  Sum: '<S155>/Sum4'
             */
            VaCHFR_K_C6[(i)] = (sint16)(((sint16)(rtb_Switch1_ja + rtb_Sum22)) +
                26);
        }
        else
        {
            /* Switch: '<S155>/Switch7' incorporates:
             *  Constant: '<S155>/Constant Value38'
             */
            VaCHFR_K_C6[(i)] = 0;
        }

        /* End of Switch: '<S155>/Switch7' */
    }

    /* Switch: '<S155>/Switch8' */
    if (rtb_TmpSignalConversionAtVaOB_i[6])
    {
        /* Switch: '<S155>/Switch8' incorporates:
         *  Constant: '<S155>/Constant Value11'
         *  Sum: '<S155>/Sum9'
         */
        VeCHFR_K_C7 = (sint16)(((sint16)(rtb_MinMax6 + rtb_Sum23)) + 27);
    }
    else
    {
        /* Switch: '<S155>/Switch8' incorporates:
         *  Constant: '<S155>/Constant Value10'
         */
        VeCHFR_K_C7 = 0;
    }

    /* End of Switch: '<S155>/Switch8' */

    /* Switch: '<S155>/Switch9' */
    if (rtb_TmpSignalConversionAtVaOB_i[7])
    {
        /* Switch: '<S155>/Switch9' incorporates:
         *  Constant: '<S155>/Constant Value14'
         *  Constant: '<S155>/HoodAjar_Reason1'
         *  Sum: '<S155>/Sum10'
         */
        VeCHFR_K_C8 = (sint16)(rtb_Sum24 + 29);
    }
    else
    {
        /* Switch: '<S155>/Switch9' incorporates:
         *  Constant: '<S155>/Constant Value15'
         */
        VeCHFR_K_C8 = 0;
    }

    /* End of Switch: '<S155>/Switch9' */

    /* Switch: '<S155>/Switch10' */
    if (rtb_TmpSignalConversionAtVaOB_i[8])
    {
        /* Switch: '<S155>/Switch10' incorporates:
         *  Constant: '<S155>/Constant Value16'
         *  Constant: '<S155>/FTP_Reason1'
         *  Sum: '<S155>/Sum11'
         */
        VeCHFR_K_C9 = (sint16)(rtb_Sum25 + 30);
    }
    else
    {
        /* Switch: '<S155>/Switch10' incorporates:
         *  Constant: '<S155>/Constant Value17'
         */
        VeCHFR_K_C9 = 0;
    }

    /* End of Switch: '<S155>/Switch10' */

    /* Switch: '<S155>/Switch11' */
    if (rtb_TmpSignalConversionAtVaOB_i[9])
    {
        /* Switch: '<S155>/Switch11' incorporates:
         *  Constant: '<S155>/Constant Value18'
         *  Constant: '<S155>/DC_Reason1'
         *  Sum: '<S155>/Sum12'
         */
        VeCHFR_K_C10 = (sint16)(rtb_Sum26 + 31);
    }
    else
    {
        /* Switch: '<S155>/Switch11' incorporates:
         *  Constant: '<S155>/Constant Value19'
         */
        VeCHFR_K_C10 = 0;
    }

    /* End of Switch: '<S155>/Switch11' */

    /* Switch: '<S155>/Switch12' */
    if (rtb_TmpSignalConversionAtVaOB_i[10])
    {
        /* Switch: '<S155>/Switch12' incorporates:
         *  Constant: '<S155>/Constant Value20'
         *  Constant: '<S155>/WPT_Reason1'
         *  Sum: '<S155>/Sum13'
         */
        VeCHFR_K_C11 = (sint16)(rtb_Sum1 + 32);
    }
    else
    {
        /* Switch: '<S155>/Switch12' incorporates:
         *  Constant: '<S155>/Constant Value21'
         */
        VeCHFR_K_C11 = 0;
    }

    /* End of Switch: '<S155>/Switch12' */

    /* Switch: '<S155>/Switch13' */
    if (rtb_TmpSignalConversionAtVaOB_i[11])
    {
        /* Switch: '<S155>/Switch13' incorporates:
         *  Constant: '<S155>/Constant Value22'
         *  Constant: '<S155>/Reserved1_Reason1'
         *  Sum: '<S155>/Sum14'
         */
        VeCHFR_K_C12 = (sint16)(rtb_Sum2 + 33);
    }
    else
    {
        /* Switch: '<S155>/Switch13' incorporates:
         *  Constant: '<S155>/Constant Value23'
         */
        VeCHFR_K_C12 = 0;
    }

    /* End of Switch: '<S155>/Switch13' */

    /* Switch: '<S155>/Switch14' */
    if (rtb_TmpSignalConversionAtVaOB_i[12])
    {
        /* Switch: '<S155>/Switch14' incorporates:
         *  Constant: '<S155>/Constant Value24'
         *  Constant: '<S155>/Reserved2_Reason1'
         *  Sum: '<S155>/Sum15'
         */
        VeCHFR_K_C13 = (sint16)(rtb_Sum3 + 34);
    }
    else
    {
        /* Switch: '<S155>/Switch14' incorporates:
         *  Constant: '<S155>/Constant Value25'
         */
        VeCHFR_K_C13 = 0;
    }

    /* End of Switch: '<S155>/Switch14' */

    /* Switch: '<S155>/Switch15' */
    if (rtb_TmpSignalConversionAtVaOB_i[13])
    {
        /* Switch: '<S155>/Switch15' incorporates:
         *  Constant: '<S155>/Constant Value26'
         *  Constant: '<S155>/Reserved3_Reason1'
         *  Sum: '<S155>/Sum16'
         */
        VeCHFR_K_C14 = (sint16)(rtb_Sum4 + 35);
    }
    else
    {
        /* Switch: '<S155>/Switch15' incorporates:
         *  Constant: '<S155>/Constant Value27'
         */
        VeCHFR_K_C14 = 0;
    }

    /* End of Switch: '<S155>/Switch15' */

    /* Switch: '<S155>/Switch16' */
    if (rtb_TmpSignalConversionAtVaOB_i[14])
    {
        /* Switch: '<S155>/Switch16' incorporates:
         *  Constant: '<S155>/Constant Value28'
         *  Constant: '<S155>/Reserved4_Reason1'
         *  Sum: '<S155>/Sum17'
         */
        VeCHFR_K_C15 = (sint16)(rtb_Sum5 + 36);
    }
    else
    {
        /* Switch: '<S155>/Switch16' incorporates:
         *  Constant: '<S155>/Constant Value29'
         */
        VeCHFR_K_C15 = 0;
    }

    /* End of Switch: '<S155>/Switch16' */

    /* Switch: '<S155>/Switch1' incorporates:
     *  Constant: '<S155>/Constant Value34'
     *  RelationalOperator: '<S155>/Comparison6'
     */
    if (rtb_TmpSignalConversionAtVeOBCR == 19)
    {
        /* Switch: '<S155>/Switch1' incorporates:
         *  Constant: '<S155>/Constant Value30'
         *  Sum: '<S155>/Sum18'
         */
        VeCHFR_K_DCRsn = (sint16)(((sint16)(rtb_TmpSignalConversionAtVeDCCR +
            rtb_Sum6)) + 36);
    }
    else
    {
        /* Switch: '<S155>/Switch1' incorporates:
         *  Constant: '<S155>/Constant Value35'
         */
        VeCHFR_K_DCRsn = 0;
    }

    /* End of Switch: '<S155>/Switch1' */

    /* SignalConversion generated from: '<S160>/ SFunction ' incorporates:
     *  Chart: '<S136>/Stateflow_Chart'
     */
    rtb_TmpSignalConversionAtSFunct[0] = VeCHFR_K_MainSFRsn;
    rtb_TmpSignalConversionAtSFunct[31] = VeCHFR_K_C2;
    for (i = 0; i < 15; i++)
    {
        rtb_TmpSignalConversionAtSFunct[i + 1] = VaCHFR_K_C1[(i)];
        rtb_TmpSignalConversionAtSFunct[i + 16] = VaCHFR_K_C16[(i)];
        rtb_TmpSignalConversionAtSFunct[i + 32] = VaCHFR_K_C3[(i)];
        rtb_TmpSignalConversionAtSFunct[i + 47] = VaCHFR_K_C4[(i)];
    }

    rtb_TmpSignalConversionAtSFunct[62] = VeCHFR_K_C5;
    for (i = 0; i < 7; i++)
    {
        rtb_TmpSignalConversionAtSFunct[i + 63] = VaCHFR_K_C6[(i)];
    }

    rtb_TmpSignalConversionAtSFunct[70] = VeCHFR_K_C7;
    rtb_TmpSignalConversionAtSFunct[71] = VeCHFR_K_C8;
    rtb_TmpSignalConversionAtSFunct[72] = VeCHFR_K_C9;
    rtb_TmpSignalConversionAtSFunct[73] = VeCHFR_K_C10;
    rtb_TmpSignalConversionAtSFunct[74] = VeCHFR_K_C11;
    rtb_TmpSignalConversionAtSFunct[75] = VeCHFR_K_C12;
    rtb_TmpSignalConversionAtSFunct[76] = VeCHFR_K_C13;
    rtb_TmpSignalConversionAtSFunct[77] = VeCHFR_K_C14;
    rtb_TmpSignalConversionAtSFunct[78] = VeCHFR_K_C15;
    rtb_TmpSignalConversionAtSFunct[79] = VeCHFR_K_DCRsn;

    /* End of SignalConversion generated from: '<S160>/ SFunction ' */

    /* Chart: '<S136>/Stateflow_Chart' incorporates:
     *  Constant: '<S159>/Calib'
     */
    /* Gateway: CHFR_MedTED/CHFC/NCR_Retry/NCV_Loops/Stateflow_Chart */
    /* During: CHFR_MedTED/CHFC/NCR_Retry/NCV_Loops/Stateflow_Chart */
    /* Entry Internal: CHFR_MedTED/CHFC/NCR_Retry/NCV_Loops/Stateflow_Chart */
    /* Transition: '<S160>:2' */
    rtb_Switch1_e = 0U;
    VeCHFR_b_ChrgFaultComb = false;
    j = 0U;
    for (i = 0; i < 5; i++)
    {
        VaCHFR_k_NbrRsn[(i)] = 0;
    }

    VeCHFR_K_NR = 50U;
    VeCHFR_b_CANC_WU_NCVSF = false;
    memset((&(VeCHFR_K_NCV_adjSF[0])), 0, 79U * (sizeof(sint16)));
    k = 0U;
    VeCHFR_K_NCV_Size_adjSF = KeCHFR_K_NCVSize;
    while (rtb_Switch1_e < KeCHFR_K_NCVSize)
    {
        /* Transition: '<S160>:178' */
        if (!VeCHFR_b_ChrgFaultComb)
        {
            /* Transition: '<S160>:4' */
            if (!rtb_TmpSignalConversionAtVeOB_i)
            {
                /* Transition: '<S160>:43' */
                /* Transition: '<S160>:47' */
                rtb_TmpSignalConversionAtVeOBCR =
                    rtb_TmpSignalConversionAtSFunct[rtb_Switch1_e];
                if (rtb_TmpSignalConversionAtSFunct[rtb_Switch1_e] >
                        KeCHFR_k_SizeChrgFaultnotPI)
                {
                    /* Transition: '<S160>:54' */
                    /* Transition: '<S160>:51' */
                    rtb_TmpSignalConversionAtVeOBCR =
                        KeCHFR_k_SizeChrgFaultnotPI;

                    /* Transition: '<S160>:55' */
                }
                else
                {
                    /* Transition: '<S160>:50' */
                }

                /* Transition: '<S160>:52' */
                if (KaCHFR_b_ChrgFaultnotPI[(rtb_TmpSignalConversionAtVeOBCR)])
                {
                    /* Transition: '<S160>:60' */
                    /* Transition: '<S160>:57' */
                    VeCHFR_b_ChrgFaultComb = true;

                    /* Transition: '<S160>:63' */
                }
                else
                {
                    /* Transition: '<S160>:62' */
                }

                /* Transition: '<S160>:64' */
                /* Transition: '<S160>:25' */
            }
            else
            {
                /* Transition: '<S160>:19' */
                rtb_TmpSignalConversionAtVeOBCR =
                    rtb_TmpSignalConversionAtSFunct[rtb_Switch1_e];
                if (rtb_TmpSignalConversionAtSFunct[rtb_Switch1_e] >
                        KeCHFR_k_SizeChrgFault)
                {
                    /* Transition: '<S160>:35' */
                    /* Transition: '<S160>:37' */
                    rtb_TmpSignalConversionAtVeOBCR = KeCHFR_k_SizeChrgFault;

                    /* Transition: '<S160>:39' */
                }
                else
                {
                    /* Transition: '<S160>:40' */
                }

                /* Transition: '<S160>:41' */
                if (KaCHFR_b_ChrgFault[(rtb_TmpSignalConversionAtVeOBCR)])
                {
                    /* Transition: '<S160>:23' */
                    /* Transition: '<S160>:16' */
                    VeCHFR_b_ChrgFaultComb = true;

                    /* Transition: '<S160>:25' */
                }
                else
                {
                    /* Transition: '<S160>:24' */
                }
            }
        }
        else
        {
            /* Transition: '<S160>:180' */
        }

        /* Transition: '<S160>:183' */
        if (rtb_TmpSignalConversionAtSFunct[rtb_Switch1_e] > 0)
        {
            /* Transition: '<S160>:148' */
            if (((sint32)j) < 5)
            {
                /* Transition: '<S160>:146' */
                /* Transition: '<S160>:142' */
                VaCHFR_k_NbrRsn[(j)] =
                    rtb_TmpSignalConversionAtSFunct[rtb_Switch1_e];
                j = (uint16)((sint32)(((sint32)j) + 1));

                /* Transition: '<S160>:126' */
            }
            else
            {
                /* Transition: '<S160>:125' */
            }

            /* Transition: '<S160>:135' */
            rtb_TmpSignalConversionAtVeOBCR =
                rtb_TmpSignalConversionAtSFunct[rtb_Switch1_e];
            if (rtb_TmpSignalConversionAtSFunct[rtb_Switch1_e] >
                    KeCHFR_k_SizeNbrRetries)
            {
                /* Transition: '<S160>:132' */
                /* Transition: '<S160>:143' */
                rtb_TmpSignalConversionAtVeOBCR = KeCHFR_k_SizeNbrRetries;

                /* Transition: '<S160>:123' */
            }
            else
            {
                /* Transition: '<S160>:145' */
            }

            /* Transition: '<S160>:150' */
            if (KaCHFR_K_NbrRetries[(rtb_TmpSignalConversionAtVeOBCR)] <
                    VeCHFR_K_NR)
            {
                /* Transition: '<S160>:137' */
                /* Transition: '<S160>:149' */
                VeCHFR_K_NR = KaCHFR_K_NbrRetries
                    [(rtb_TmpSignalConversionAtVeOBCR)];

                /* Transition: '<S160>:138' */
                /* Transition: '<S160>:131' */
            }
            else
            {
                /* Transition: '<S160>:130' */
            }

            /* Transition: '<S160>:134' */
            /* Transition: '<S160>:182' */
        }
        else
        {
            /* Transition: '<S160>:136' */
        }

        /* Transition: '<S160>:184' */
        if (rtb_TmpSignalConversionAtSFunct[rtb_Switch1_e] > 0)
        {
            /* Transition: '<S160>:159' */
            /* Transition: '<S160>:163' */
            if (((((rtb_TmpSignalConversionAtSFunct[rtb_Switch1_e] ==
                    KeCHFR_k_ChrgFailCANCWU1) ||
                    (rtb_TmpSignalConversionAtSFunct[rtb_Switch1_e] ==
                     KeCHFR_k_ChrgFailCANCWU2)) ||
                    (rtb_TmpSignalConversionAtSFunct[rtb_Switch1_e] ==
                     KeCHFR_k_ChrgFailCANCWU3)) ||
                    (rtb_TmpSignalConversionAtSFunct[rtb_Switch1_e] ==
                     KeCHFR_k_ChrgFailCANCWU4)) ||
                    (rtb_TmpSignalConversionAtSFunct[rtb_Switch1_e] ==
                     KeCHFR_k_ChrgFailCANCWU5))
            {
                /* Transition: '<S160>:175' */
                /* Transition: '<S160>:170' */
                VeCHFR_b_CANC_WU_NCVSF = true;

                /* Transition: '<S160>:176' */
                /* Transition: '<S160>:156' */
            }
            else
            {
                /* Transition: '<S160>:172' */
            }

            /* Transition: '<S160>:165' */
        }
        else
        {
            /* Transition: '<S160>:169' */
        }

        /* Transition: '<S160>:190' */
        if (rtb_TmpSignalConversionAtSFunct[rtb_Switch1_e] > 0)
        {
            /* Transition: '<S160>:191' */
            /* Transition: '<S160>:192' */
            VeCHFR_K_NCV_adjSF[(k)] =
                rtb_TmpSignalConversionAtSFunct[rtb_Switch1_e];
            k = (uint16)((sint32)(((sint32)k) + 1));
            VeCHFR_K_NCV_Size_adjSF = k;

            /* Transition: '<S160>:193' */
        }
        else
        {
            /* Transition: '<S160>:195' */
        }

        /* Transition: '<S160>:194' */
        /* Transition: '<S160>:10' */
        rtb_Switch1_e = (uint16)((sint32)(((sint32)rtb_Switch1_e) + 1));
    }

    /* Switch: '<S10>/Switch' incorporates:
     *  Constant: '<S118>/Calib'
     */
    /* Transition: '<S160>:12' */
    if (KeCHFR_b_ChrgFaultSelector)
    {
        /* Switch: '<S10>/Switch' */
        rtb_TmpSignalConversionAtVeID_m = VeCHFR_b_ChrgFaultNCR;
    }
    else
    {
        /* Switch: '<S10>/Switch' */
        rtb_TmpSignalConversionAtVeID_m = VeCHFR_b_ChrgFaultComb;
    }

    /* End of Switch: '<S10>/Switch' */

    /* Outputs for Atomic SubSystem: '<S10>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S121>/EdgeRising' */
    /* Logic: '<S130>/AND' incorporates:
     *  Logic: '<S130>/OR1'
     *  UnitDelay: '<S130>/Unit Delay'
     */
    rtb_Logical2_kq = (rtb_TmpSignalConversionAtVeID_m &&
                       (!CHFR_ac_DW.UnitDelay_DSTATE_of));

    /* Update for UnitDelay: '<S130>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_of = rtb_TmpSignalConversionAtVeID_m;

    /* End of Outputs for SubSystem: '<S121>/EdgeRising' */

    /* Switch: '<S121>/Switch1' incorporates:
     *  Constant: '<S117>/Calib'
     *  Constant: '<S121>/Constant Value'
     *  Logic: '<S121>/OR'
     *  Logic: '<S121>/OR1'
     *  MinMax: '<S121>/Minimum'
     *  Sum: '<S121>/Summation'
     *  UnitDelay: '<S121>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeID_m) || rtb_Logical2_kq)
    {
        /* Switch: '<S121>/Switch1' incorporates:
         *  Constant: '<S121>/Constant Value1'
         */
        rtb_Switch1_e = 0U;
    }
    else if (KeCHFR_Cnt_DbncChrgSysFault < ((uint16)(((uint32)
                CHFR_ac_DW.UnitDelay_DSTATE_l) + 1U)))
    {
        /* MinMax: '<S121>/Minimum' incorporates:
         *  Constant: '<S117>/Calib'
         *  Switch: '<S121>/Switch1'
         */
        rtb_Switch1_e = KeCHFR_Cnt_DbncChrgSysFault;
    }
    else
    {
        /* Switch: '<S121>/Switch1' incorporates:
         *  Constant: '<S121>/Constant Value'
         *  MinMax: '<S121>/Minimum'
         *  Sum: '<S121>/Summation'
         *  UnitDelay: '<S121>/Unit Delay'
         */
        rtb_Switch1_e = (uint16)(((uint32)CHFR_ac_DW.UnitDelay_DSTATE_l) + 1U);
    }

    /* End of Switch: '<S121>/Switch1' */
    /* End of Outputs for SubSystem: '<S10>/Turn On Delay Sample' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CHFR_MedTED' */

    /* Inport: '<Root>/VeCCCR_U_VoltRq' */
    (void)Rte_Read_VeCCCR_U_VoltRq_Value(&tmpRead_z);

    /* Inport: '<Root>/VeOBCR_P_AvalPwrForThmr' */
    (void)Rte_Read_VeOBCR_P_AvalPwrForThmr_Value(&tmpRead_y);

    /* Outputs for Function Call SubSystem: '<Root>/CHFR_MedTED' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHFC'
     */
    /* Outputs for Atomic SubSystem: '<S10>/Turn On Delay Sample' */
    /* Logic: '<S121>/AND' incorporates:
     *  Constant: '<S117>/Calib'
     *  RelationalOperator: '<S121>/Greater  Than'
     */
    rtb_TmpSignalConversionAtVeID_m = (rtb_TmpSignalConversionAtVeID_m &&
        (rtb_Switch1_e >= KeCHFR_Cnt_DbncChrgSysFault));

    /* Update for UnitDelay: '<S121>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_l = rtb_Switch1_e;

    /* End of Outputs for SubSystem: '<S10>/Turn On Delay Sample' */

    /* DataStoreWrite: '<S10>/Data Store Write' */
    EeCHFR_b_ChrgSysFault = rtb_TmpSignalConversionAtVeID_m;

    /* Rounding: '<S120>/Rounding1' incorporates:
     *  Constant: '<S120>/Constant Value1'
     *  Inport: '<Root>/VeOBCR_P_AvalPwrForThmr'
     *  Lookup_n-D: '<S128>/Vector'
     *  Product: '<S120>/Product'
     *  Rounding: '<S120>/Rounding3'
     *  Sum: '<S120>/Sum'
     */
    rtb_TmpSignalConversionAtVeIDCR = truncf((look1_iflf_binlcapw(tmpRead_y, ((
        const float32 *)&(KxCHFR_k_ThrmalBudEncod[0])), ((const float32 *)
        &(KtCHFR_k_ThrmalBudEncod[0])), 9U) + truncf(tmpRead_z)) * 10.0F);

    /* Outputs for Atomic SubSystem: '<S120>/Protected Division' */
    /* Switch: '<S129>/Switch1' incorporates:
     *  Constant: '<S129>/Constant Value'
     *  RelationalOperator: '<S129>/Not Equal'
     */
    if (rtb_TmpSignalConversionAtVeIDCR != 0.0F)
    {
        /* Switch: '<S129>/Switch1' incorporates:
         *  Constant: '<S120>/Constant Value2'
         *  Product: '<S129>/Division'
         */
        rtb_TmpSignalConversionAtVeIDCR /= 10.0F;
    }
    else
    {
        /* Switch: '<S129>/Switch1' incorporates:
         *  Constant: '<S129>/Constant Value4'
         *  Switch: '<S129>/Switch2'
         *  Switch: '<S129>/Switch3'
         */
        rtb_TmpSignalConversionAtVeIDCR = 0.0F;
    }

    /* End of Switch: '<S129>/Switch1' */
    /* End of Outputs for SubSystem: '<S120>/Protected Division' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CHFR_MedTED' */

    /* Inport: '<Root>/VeOBCR_b_SmartEvse_Dtctd' */
    (void)Rte_Read_VeOBCR_b_SmartEvse_Dtctd_Value(&tmpRead_10);

    /* Outputs for Function Call SubSystem: '<Root>/CHFR_MedTED' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHFC'
     */
    /* RelationalOperator: '<S119>/Comparison2' incorporates:
     *  Constant: '<S122>/Constant'
     */
    VeCHFR_b_HMIR_MSG5_Test = (((uint32)rtb_TmpSignalConversionAtVeOB_n) ==
        CeOBCR_e_PartialPlugDrvAlwd);

    /* Selector: '<S119>/Selector1' incorporates:
     *  Constant: '<S125>/Calib'
     *  Switch: '<S119>/Switch'
     */
    if (KeCHFR_b_MSG6Selector)
    {
        rtb_Sum22 = VeCHFR_k_ChrgSysFault_ReasonSF;
    }
    else
    {
        rtb_Sum22 = VaCHFR_k_NbrRsn[0];
    }

    /* Selector: '<S119>/Selector1' incorporates:
     *  Constant: '<S123>/Calib'
     */
    VeCHFR_b_MSG6_IndxSel = KaCHFR_b_MSG6[(rtb_Sum22)];

    /* Outputs for Atomic SubSystem: '<S119>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S126>/EdgeRising' */
    /* UnitDelay: '<S166>/Unit Delay' incorporates:
     *  UnitDelay: '<S127>/Unit Delay'
     */
    rtb_UnitDelay_hz = CHFR_ac_DW.UnitDelay_DSTATE_ik;

    /* Update for UnitDelay: '<S127>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_ik = VeCHFR_b_MSG6_IndxSel;

    /* Switch: '<S126>/Switch1' incorporates:
     *  Constant: '<S124>/Calib'
     *  Constant: '<S126>/Constant Value'
     *  Logic: '<S126>/OR'
     *  Logic: '<S126>/OR1'
     *  Logic: '<S127>/AND'
     *  Logic: '<S127>/OR1'
     *  MinMax: '<S126>/Minimum'
     *  Sum: '<S126>/Summation'
     *  UnitDelay: '<S126>/Unit Delay'
     */
    if ((!VeCHFR_b_MSG6_IndxSel) || ((VeCHFR_b_MSG6_IndxSel) &&
            (!rtb_UnitDelay_hz)))
    {
        /* Switch: '<S126>/Switch1' incorporates:
         *  Constant: '<S126>/Constant Value1'
         */
        rtb_Switch1_e = 0U;
    }
    else if (KeCHFR_Cnt_DbncMSG6 < ((uint16)(((uint32)
                CHFR_ac_DW.UnitDelay_DSTATE_d) + 1U)))
    {
        /* MinMax: '<S126>/Minimum' incorporates:
         *  Constant: '<S124>/Calib'
         *  Switch: '<S126>/Switch1'
         */
        rtb_Switch1_e = KeCHFR_Cnt_DbncMSG6;
    }
    else
    {
        /* Switch: '<S126>/Switch1' incorporates:
         *  Constant: '<S126>/Constant Value'
         *  MinMax: '<S126>/Minimum'
         *  Sum: '<S126>/Summation'
         *  UnitDelay: '<S126>/Unit Delay'
         */
        rtb_Switch1_e = (uint16)(((uint32)CHFR_ac_DW.UnitDelay_DSTATE_d) + 1U);
    }

    /* End of Switch: '<S126>/Switch1' */
    /* End of Outputs for SubSystem: '<S126>/EdgeRising' */

    /* Update for UnitDelay: '<S126>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_d = rtb_Switch1_e;

    /* Logic: '<S119>/Logical3' incorporates:
     *  Constant: '<S124>/Calib'
     *  Logic: '<S119>/Logical2'
     *  Logic: '<S126>/AND'
     *  RelationalOperator: '<S126>/Greater  Than'
     */
    VeCHFR_b_HMIR_MSG6_Test = (((VeCHFR_b_MSG6_IndxSel) && (rtb_Switch1_e >=
        KeCHFR_Cnt_DbncMSG6)) && (!VeCHFR_b_HMIR_MSG5_Test));

    /* End of Outputs for SubSystem: '<S119>/Turn On Delay Sample' */

    /* Logic: '<S13>/Logical5' incorporates:
     *  Constant: '<S38>/Constant'
     *  Constant: '<S39>/Constant'
     *  Logic: '<S13>/Logical10'
     *  RelationalOperator: '<S13>/Comparison5'
     *  RelationalOperator: '<S13>/Comparison7'
     *  Switch: '<S5>/Switch77'
     */
    rtb_TmpSignalConversionAtVeOB_o = (((((uint32)VeCHFR_e_Dschrg_Failure) ==
        CeVTLR_e_Discharge_Inhibited) || (((uint32)VeCHFR_e_Dschrg_Failure) ==
        CeVTLR_e_Discharge_Terminated)) && rtb_TmpSignalConversionAtVeOB_o);

    /* Outputs for Atomic SubSystem: '<S13>/Turn On Delay Sample4' */
    /* Outputs for Atomic SubSystem: '<S59>/EdgeRising' */
    /* Logic: '<S66>/AND' incorporates:
     *  Logic: '<S66>/OR1'
     *  UnitDelay: '<S66>/Unit Delay'
     */
    rtb_Logical2_kq = (rtb_TmpSignalConversionAtVeOB_o &&
                       (!CHFR_ac_DW.UnitDelay_DSTATE_gdc));

    /* Update for UnitDelay: '<S66>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_gdc = rtb_TmpSignalConversionAtVeOB_o;

    /* End of Outputs for SubSystem: '<S59>/EdgeRising' */

    /* Switch: '<S59>/Switch1' incorporates:
     *  Constant: '<S54>/Calib'
     *  Constant: '<S59>/Constant Value'
     *  Logic: '<S59>/OR'
     *  Logic: '<S59>/OR1'
     *  MinMax: '<S59>/Minimum'
     *  Sum: '<S59>/Summation'
     *  UnitDelay: '<S59>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeOB_o) || rtb_Logical2_kq)
    {
        /* Switch: '<S59>/Switch1' incorporates:
         *  Constant: '<S59>/Constant Value1'
         */
        rtb_Switch1_e = 0U;
    }
    else if (KeCHFR_Cnt_DbncOBCMSig2 < ((uint16)(((uint32)
                CHFR_ac_DW.UnitDelay_DSTATE_n) + 1U)))
    {
        /* MinMax: '<S59>/Minimum' incorporates:
         *  Constant: '<S54>/Calib'
         *  Switch: '<S59>/Switch1'
         */
        rtb_Switch1_e = KeCHFR_Cnt_DbncOBCMSig2;
    }
    else
    {
        /* Switch: '<S59>/Switch1' incorporates:
         *  Constant: '<S59>/Constant Value'
         *  MinMax: '<S59>/Minimum'
         *  Sum: '<S59>/Summation'
         *  UnitDelay: '<S59>/Unit Delay'
         */
        rtb_Switch1_e = (uint16)(((uint32)CHFR_ac_DW.UnitDelay_DSTATE_n) + 1U);
    }

    /* End of Switch: '<S59>/Switch1' */

    /* Update for UnitDelay: '<S59>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_n = rtb_Switch1_e;

    /* End of Outputs for SubSystem: '<S13>/Turn On Delay Sample4' */

    /* Switch: '<S13>/Switch4' incorporates:
     *  Constant: '<S46>/Calib'
     */
    if (KeCHFR_b_ChargeFaultOvrd5)
    {
        /* Switch: '<S13>/Switch4' incorporates:
         *  Constant: '<S47>/Calib'
         */
        VeCHFR_b_ChrgSysFault5 = KeCHFR_b_ChargeFaultOvrdVal5;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S13>/Turn On Delay Sample4' */
        /* Switch: '<S13>/Switch4' incorporates:
         *  Constant: '<S54>/Calib'
         *  Logic: '<S13>/Logical1'
         *  Logic: '<S59>/AND'
         *  RelationalOperator: '<S59>/Greater  Than'
         */
        VeCHFR_b_ChrgSysFault5 = ((((((VeCHFR_b_Fault_OBCM) || rtb_Logical17) ||
            rtb_TmpSignalConversionAtVeGENR) || (VeCHFR_b_Fault_ChrgPort)) ||
            rtb_AND_hk) || (rtb_TmpSignalConversionAtVeOB_o && (rtb_Switch1_e >=
            KeCHFR_Cnt_DbncOBCMSig2)));

        /* End of Outputs for SubSystem: '<S13>/Turn On Delay Sample4' */
    }

    /* End of Switch: '<S13>/Switch4' */

    /* Logic: '<S19>/Logical6' */
    rtb_TmpSignalConversionAtVeO_b2 = ((VeCHFR_b_LOCBPCM) ||
        rtb_TmpSignalConversionAtVeO_b2);

    /* Outputs for Atomic SubSystem: '<S19>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S96>/EdgeRising' */
    /* Logic: '<S101>/AND' incorporates:
     *  Logic: '<S101>/OR1'
     *  UnitDelay: '<S101>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeOB_o = (rtb_TmpSignalConversionAtVeO_b2 &&
        (!CHFR_ac_DW.UnitDelay_DSTATE_ei));

    /* Update for UnitDelay: '<S101>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_ei = rtb_TmpSignalConversionAtVeO_b2;

    /* End of Outputs for SubSystem: '<S96>/EdgeRising' */

    /* Switch: '<S96>/Switch1' incorporates:
     *  Constant: '<S89>/Calib'
     *  Constant: '<S96>/Constant Value'
     *  Logic: '<S96>/OR'
     *  Logic: '<S96>/OR1'
     *  MinMax: '<S96>/Minimum'
     *  Sum: '<S96>/Summation'
     *  UnitDelay: '<S96>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeO_b2) || rtb_TmpSignalConversionAtVeOB_o)
    {
        /* Switch: '<S96>/Switch1' incorporates:
         *  Constant: '<S96>/Constant Value1'
         */
        rtb_Switch1_e = 0U;
    }
    else if (KeCHFR_Cnt_DbncFA_DFIR < ((uint16)(((uint32)
                CHFR_ac_DW.UnitDelay_DSTATE_jq) + 1U)))
    {
        /* MinMax: '<S96>/Minimum' incorporates:
         *  Constant: '<S89>/Calib'
         *  Switch: '<S96>/Switch1'
         */
        rtb_Switch1_e = KeCHFR_Cnt_DbncFA_DFIR;
    }
    else
    {
        /* Switch: '<S96>/Switch1' incorporates:
         *  Constant: '<S96>/Constant Value'
         *  MinMax: '<S96>/Minimum'
         *  Sum: '<S96>/Summation'
         *  UnitDelay: '<S96>/Unit Delay'
         */
        rtb_Switch1_e = (uint16)(((uint32)CHFR_ac_DW.UnitDelay_DSTATE_jq) + 1U);
    }

    /* End of Switch: '<S96>/Switch1' */

    /* Update for UnitDelay: '<S96>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_jq = rtb_Switch1_e;

    /* Logic: '<S19>/Logical1' incorporates:
     *  Constant: '<S89>/Calib'
     *  Logic: '<S96>/AND'
     *  RelationalOperator: '<S96>/Greater  Than'
     */
    VeCHFR_b_LOC_FA = (((rtb_TmpSignalConversionAtVeO_b2 && (rtb_Switch1_e >=
                          KeCHFR_Cnt_DbncFA_DFIR)) || (VeCHFR_b_OBCMFA_Active)) ||
                       (VeCHFR_b_BPCMFA_Active));

    /* End of Outputs for SubSystem: '<S19>/Turn On Delay Sample1' */

    /* MinMax: '<S8>/MinMax15' */
    rtb_TmpSignalConversionAtSFunct[0] = VeCHFR_K_MainSFRsn;
    rtb_TmpSignalConversionAtSFunct[31] = VeCHFR_K_C2;
    for (i = 0; i < 15; i++)
    {
        rtb_TmpSignalConversionAtSFunct[i + 1] = VaCHFR_K_C1[(i)];
        rtb_TmpSignalConversionAtSFunct[i + 16] = VaCHFR_K_C16[(i)];
        rtb_TmpSignalConversionAtSFunct[i + 32] = VaCHFR_K_C3[(i)];
        rtb_TmpSignalConversionAtSFunct[i + 47] = VaCHFR_K_C4[(i)];
    }

    rtb_TmpSignalConversionAtSFunct[62] = VeCHFR_K_C5;
    for (i = 0; i < 7; i++)
    {
        rtb_TmpSignalConversionAtSFunct[i + 63] = VaCHFR_K_C6[(i)];
    }

    rtb_TmpSignalConversionAtSFunct[70] = VeCHFR_K_C7;
    rtb_TmpSignalConversionAtSFunct[71] = VeCHFR_K_C8;
    rtb_TmpSignalConversionAtSFunct[72] = VeCHFR_K_C9;
    rtb_TmpSignalConversionAtSFunct[73] = VeCHFR_K_C10;
    rtb_TmpSignalConversionAtSFunct[74] = VeCHFR_K_C11;
    rtb_TmpSignalConversionAtSFunct[75] = VeCHFR_K_C12;
    rtb_TmpSignalConversionAtSFunct[76] = VeCHFR_K_C13;
    rtb_TmpSignalConversionAtSFunct[77] = VeCHFR_K_C14;
    rtb_TmpSignalConversionAtSFunct[78] = VeCHFR_K_C15;
    rtb_TmpSignalConversionAtSFunct[79] = VeCHFR_K_DCRsn;
    rtb_Switch1_ja = rtb_TmpSignalConversionAtSFunct[0];
    for (i = 0; i < 79; i++)
    {
        rtb_Sum22 = rtb_TmpSignalConversionAtSFunct[i + 1];
        if (rtb_Switch1_ja <= rtb_Sum22)
        {
            rtb_Switch1_ja = rtb_Sum22;
        }
    }

    /* If: '<S8>/If' incorporates:
     *  MinMax: '<S8>/MinMax15'
     */
    if (rtb_Switch1_ja == 0)
    {
        /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem' incorporates:
         *  ActionPort: '<S132>/Action Port'
         */
        /* Merge: '<S8>/Merge' incorporates:
         *  Constant: '<S132>/Constant Value'
         *  SignalConversion generated from: '<S132>/ChargingFailure0'
         */
        rtb_TmpSignalConversionAtVeOBCR = 0;

        /* End of Outputs for SubSystem: '<S8>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S8>/Else' incorporates:
         *  ActionPort: '<S131>/Action Port'
         */
        /* Chart: '<S131>/Stateflow Chart' */
        /* Gateway: CHFR_MedTED/CHFC/NCR_Retry/Else/Stateflow
           Chart */
        /* During: CHFR_MedTED/CHFC/NCR_Retry/Else/Stateflow
           Chart */
        if (((uint32)CHFR_ac_DW.is_active_c8_CHFR_ac) == 0U)
        {
            /* Entry: CHFR_MedTED/CHFC/NCR_Retry/Else/Stateflow
               Chart */
            CHFR_ac_DW.is_active_c8_CHFR_ac = 1U;

            /* Entry Internal: CHFR_MedTED/CHFC/NCR_Retry/Else/Stateflow
               Chart */
            /* Transition: '<S138>:65' */
            CHFR_ac_B.ChargingFailure0 = 0;
            CHFR_ac_DW.is_c8_CHFR_ac = CHFR_a_IN_ChargingFailure0_Init;

            /* Entry 'ChargingFailure0_Init': '<S138>:71' */
            CHFR_ac_DW.i = 0;
        }
        else if (((sint32)CHFR_ac_DW.is_c8_CHFR_ac) == 1)
        {
            /* During 'ChargingFailure0': '<S138>:57' */
            if (VeCHFR_t_ChrgFailStTimer > KeCHFR_t_NCRRefreshRate)
            {
                /* Transition: '<S138>:58' */
                do
                {
                    exitg2 = 0;

                    /* Transition: '<S138>:9' */
                    CHFR_ac_DW.i++;
                    if (((sint32)CHFR_ac_DW.i) < ((sint32)
                            VeCHFR_K_NCV_Size_adjSF))
                    {
                        /* Transition: '<S138>:4' */
                        if (VeCHFR_K_NCV_adjSF[(CHFR_ac_DW.i)] > 0)
                        {
                            /* Transition: '<S138>:6' */
                            CHFR_ac_DW.is_c8_CHFR_ac =
                                CHFR_ac_IN_ChargingFailure0;

                            /* Entry 'ChargingFailure0': '<S138>:57' */
                            VeCHFR_t_ChrgFailStTimer = 0.0F;
                            CHFR_ac_B.ChargingFailure0 = VeCHFR_K_NCV_adjSF
                                [(CHFR_ac_DW.i)];
                            exitg2 = 1;
                        }
                        else
                        {
                            /* Transition: '<S138>:11' */
                        }
                    }
                    else
                    {
                        if (((sint32)CHFR_ac_DW.i) >= ((sint32)
                                VeCHFR_K_NCV_Size_adjSF))
                        {
                            /* Transition: '<S138>:66' */
                            CHFR_ac_DW.is_c8_CHFR_ac =
                                CHFR_a_IN_ChargingFailure0_Init;

                            /* Entry 'ChargingFailure0_Init': '<S138>:71' */
                            CHFR_ac_DW.i = 0;
                        }
                        else
                        {
                            /* Transition: '<S138>:68' */
                            VeCHFR_t_ChrgFailStTimer = VeCHFR_t_ChrgFailStTimer
                                + HeCHFR_t_dT;
                        }

                        exitg2 = 1;
                    }
                }
                while (exitg2 == 0);
            }
            else
            {
                VeCHFR_t_ChrgFailStTimer = VeCHFR_t_ChrgFailStTimer +
                    HeCHFR_t_dT;
            }
        }
        else
        {
            /* During 'ChargingFailure0_Init': '<S138>:71' */
            /* Transition: '<S138>:2' */
            do
            {
                exitg1 = 0;
                if (((sint32)CHFR_ac_DW.i) < ((sint32)VeCHFR_K_NCV_Size_adjSF))
                {
                    /* Transition: '<S138>:4' */
                    if (VeCHFR_K_NCV_adjSF[(CHFR_ac_DW.i)] > 0)
                    {
                        /* Transition: '<S138>:6' */
                        CHFR_ac_DW.is_c8_CHFR_ac = CHFR_ac_IN_ChargingFailure0;

                        /* Entry 'ChargingFailure0': '<S138>:57' */
                        VeCHFR_t_ChrgFailStTimer = 0.0F;
                        CHFR_ac_B.ChargingFailure0 = VeCHFR_K_NCV_adjSF
                            [(CHFR_ac_DW.i)];
                        exitg1 = 1;
                    }
                    else
                    {
                        /* Transition: '<S138>:11' */
                        /* Transition: '<S138>:9' */
                        CHFR_ac_DW.i++;
                    }
                }
                else
                {
                    if (((sint32)CHFR_ac_DW.i) >= ((sint32)
                            VeCHFR_K_NCV_Size_adjSF))
                    {
                        /* Transition: '<S138>:66' */
                        CHFR_ac_DW.is_c8_CHFR_ac =
                            CHFR_a_IN_ChargingFailure0_Init;

                        /* Entry 'ChargingFailure0_Init': '<S138>:71' */
                        CHFR_ac_DW.i = 0;
                    }
                    else
                    {
                        /* Transition: '<S138>:68' */
                    }

                    exitg1 = 1;
                }
            }
            while (exitg1 == 0);
        }

        /* End of Chart: '<S131>/Stateflow Chart' */

        /* Merge: '<S8>/Merge' incorporates:
         *  SignalConversion generated from: '<S131>/ChargingFailure0'
         */
        rtb_TmpSignalConversionAtVeOBCR = CHFR_ac_B.ChargingFailure0;

        /* End of Outputs for SubSystem: '<S8>/Else' */
    }

    /* End of If: '<S8>/If' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CHFR_MedTED' */

    /* Inport: '<Root>/VeOBCR_e_ChrgSysStat_SF' */
    (void)Rte_Read_VeOBCR_e_ChrgSysStat_SF_Value(&tmpRead_x);

    /* Outputs for Function Call SubSystem: '<Root>/CHFR_MedTED' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHFC'
     */
    /* RelationalOperator: '<S137>/Not Equal' incorporates:
     *  Constant: '<S167>/Constant'
     *  Inport: '<Root>/VeOBCR_e_ChrgSysStat_SF'
     */
    rtb_TmpSignalConversionAtVeOB_o = (((uint32)tmpRead_x) == CeOBCR_e_EStop);

    /* Outputs for Atomic SubSystem: '<S137>/EdgeRising' */
    /* Logic: '<S163>/OR1' incorporates:
     *  UnitDelay: '<S163>/Unit Delay'
     */
    rtb_Logical2_kq = !CHFR_ac_DW.UnitDelay_DSTATE_o;

    /* Update for UnitDelay: '<S163>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_o = rtb_TmpSignalConversionAtVeOB_o;

    /* End of Outputs for SubSystem: '<S137>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S137>/EdgeRising1' */
    /* Logic: '<S164>/AND' incorporates:
     *  Logic: '<S164>/OR1'
     *  UnitDelay: '<S164>/Unit Delay'
     */
    rtb_Logical2_by = !CHFR_ac_DW.UnitDelay_DSTATE_bi;

    /* Update for UnitDelay: '<S164>/Unit Delay' incorporates:
     *  Constant: '<S137>/TRUE Constant'
     */
    CHFR_ac_DW.UnitDelay_DSTATE_bi = true;

    /* End of Outputs for SubSystem: '<S137>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S137>/EdgeRising2' */
    /* Logic: '<S165>/AND' incorporates:
     *  Logic: '<S165>/OR1'
     *  UnitDelay: '<S165>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeO_b2 = (rtb_TmpSignalConversionAtVeO_mt &&
        (!CHFR_ac_DW.UnitDelay_DSTATE_c));

    /* Update for UnitDelay: '<S165>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_c = rtb_TmpSignalConversionAtVeO_mt;

    /* End of Outputs for SubSystem: '<S137>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S137>/Counter Reset  Enabled ' */
    /* Switch: '<S161>/Switch1' incorporates:
     *  Logic: '<S137>/Logical1'
     *  Logic: '<S163>/AND'
     *  Switch: '<S161>/Switch2'
     */
    if (rtb_Logical2_by || rtb_TmpSignalConversionAtVeO_b2)
    {
        /* Switch: '<S161>/Switch1' incorporates:
         *  Constant: '<S161>/Constant Value2'
         */
        VeCHFR_Cnt_EStopCount = 0U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S137>/EdgeRising' */
        if (rtb_TmpSignalConversionAtVeOB_o && rtb_Logical2_kq)
        {
            /* Switch: '<S161>/Switch2' incorporates:
             *  Constant: '<S161>/Constant Value1'
             *  Sum: '<S161>/Subtraction'
             *  Switch: '<S161>/Switch1'
             *  UnitDelay: '<S161>/Unit Delay'
             */
            VeCHFR_Cnt_EStopCount = (uint16)(((uint32)
                CHFR_ac_DW.UnitDelay_DSTATE_i) + 1U);
        }
        else
        {
            /* Switch: '<S161>/Switch1' incorporates:
             *  Switch: '<S161>/Switch2'
             *  UnitDelay: '<S161>/Unit Delay'
             */
            VeCHFR_Cnt_EStopCount = CHFR_ac_DW.UnitDelay_DSTATE_i;
        }

        /* End of Outputs for SubSystem: '<S137>/EdgeRising' */
    }

    /* End of Switch: '<S161>/Switch1' */

    /* Update for UnitDelay: '<S161>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_i = VeCHFR_Cnt_EStopCount;

    /* End of Outputs for SubSystem: '<S137>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S137>/EdgeFalling' */
    /* Logic: '<S162>/AND' incorporates:
     *  Logic: '<S162>/OR1'
     *  UnitDelay: '<S162>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeO_mt = ((!rtb_TmpSignalConversionAtVeCCCR) &&
        (CHFR_ac_DW.UnitDelay_DSTATE_e));

    /* Update for UnitDelay: '<S162>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_e = rtb_TmpSignalConversionAtVeCCCR;

    /* End of Outputs for SubSystem: '<S137>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S137>/EdgeRising3' */
    /* Logic: '<S166>/OR1' incorporates:
     *  UnitDelay: '<S166>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCCCR = !CHFR_ac_DW.UnitDelay_DSTATE_b;

    /* Update for UnitDelay: '<S166>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE_b = rtb_TmpSignalConversionAtVeOB_i;

    /* Logic: '<S137>/Logical3' incorporates:
     *  Logic: '<S166>/AND'
     *  RelationalOperator: '<S137>/Not Equal2'
     *  SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode'
     *  UnitDelay: '<S137>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCCCR = ((((CHFR_ac_DW.UnitDelay_DSTATE_p0 !=
        rtb_TmpSignalConversionAtVePMDR) || rtb_TmpSignalConversionAtVeO_b2) ||
        (rtb_TmpSignalConversionAtVeOB_i && rtb_TmpSignalConversionAtVeCCCR)) ||
        rtb_TmpSignalConversionAtVeO_mt);

    /* End of Outputs for SubSystem: '<S137>/EdgeRising3' */

    /* Switch: '<S137>/Switch' incorporates:
     *  Constant: '<S169>/Calib'
     */
    if (KeCHFR_b_RetrySelector)
    {
        /* Switch: '<S137>/Switch' incorporates:
         *  Constant: '<S168>/Calib'
         *  Selector: '<S137>/Selector'
         *  UnitDelay: '<S8>/Unit Delay'
         */
        VeCHFR_K_NumRetries = KaCHFR_K_NbrRetries[(CHFR_ac_DW.UnitDelay_DSTATE)];
    }
    else
    {
        /* Switch: '<S137>/Switch' */
        VeCHFR_K_NumRetries = VeCHFR_K_NR;
    }

    /* End of Switch: '<S137>/Switch' */

    /* Update for UnitDelay: '<S13>/Unit Delay' incorporates:
     *  Inport: '<Root>/VeCPLR_b_ChargPortFault'
     */
    (void)Rte_Read_VeCPLR_b_ChargPortFault_Value(&CHFR_ac_DW.UnitDelay_DSTATE_nt);

    /* Update for UnitDelay: '<S13>/Unit Delay1' */
    CHFR_ac_DW.UnitDelay1_DSTATE = VeCHFR_b_ChrgPortOT_StopChrg;

    /* Update for UnitDelay: '<S137>/Unit Delay' incorporates:
     *  SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode'
     */
    CHFR_ac_DW.UnitDelay_DSTATE_p0 = rtb_TmpSignalConversionAtVePMDR;

    /* Update for UnitDelay: '<S8>/Unit Delay' */
    CHFR_ac_DW.UnitDelay_DSTATE = VeCHFR_k_ChrgSysFault_ReasonSF;

    /* Outport: '<Root>/VeCHFR_I_BattSideCurr' incorporates:
     *  Inport: '<S4>/BattSideCurr'
     *  SignalConversion generated from: '<S1>/VeCHFR_I_BattSideCurr'
     */
    (void)Rte_Write_VeCHFR_I_BattSideCurr_Value(tmpRead);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeCHFR_K_ChargingFailure1' incorporates:
     *  Gain: '<S243>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHFR_K_ChargingFailure1'
     */
    (void)Rte_Write_VeCHFR_K_ChargingFailure1_Value(VaCHFR_k_NbrRsn[0]);

    /* Outport: '<Root>/VeCHFR_K_ChargingFailure2' incorporates:
     *  Gain: '<S244>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHFR_K_ChargingFailure2'
     */
    (void)Rte_Write_VeCHFR_K_ChargingFailure2_Value(VaCHFR_k_NbrRsn[1]);

    /* Outport: '<Root>/VeCHFR_K_ChargingFailure3' incorporates:
     *  Gain: '<S245>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHFR_K_ChargingFailure3'
     */
    (void)Rte_Write_VeCHFR_K_ChargingFailure3_Value(VaCHFR_k_NbrRsn[2]);

    /* Outport: '<Root>/VeCHFR_K_ChargingFailure4' incorporates:
     *  Gain: '<S246>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHFR_K_ChargingFailure4'
     */
    (void)Rte_Write_VeCHFR_K_ChargingFailure4_Value(VaCHFR_k_NbrRsn[3]);

    /* Outport: '<Root>/VeCHFR_K_ChargingFailure5' incorporates:
     *  Gain: '<S247>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHFR_K_ChargingFailure5'
     */
    (void)Rte_Write_VeCHFR_K_ChargingFailure5_Value(VaCHFR_k_NbrRsn[4]);

    /* Outport: '<Root>/VeCHFR_U_ChrgVltReqDelta' incorporates:
     *  Gain: '<S248>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHFR_U_ChrgVltReqDelta'
     */
    (void)Rte_Write_VeCHFR_U_ChrgVltReqDelta_Value
        (rtb_TmpSignalConversionAtVeIDCR);

    /* Outport: '<Root>/VeCHFR_b_ACPrnt_S2Open' incorporates:
     *  Inport: '<S6>/AC_Present_Fault'
     *  SignalConversion generated from: '<S1>/VeCHFR_b_ACPrnt_S2Open'
     */
    (void)Rte_Write_VeCHFR_b_ACPrnt_S2Open_Value(rtb_Logical17);

    /* Outport: '<Root>/VeCHFR_b_CANC_WU_NCV' incorporates:
     *  Inport: '<S6>/CANC_WU_NCV'
     *  SignalConversion generated from: '<S1>/VeCHFR_b_CANC_WU_NCV'
     */
    (void)Rte_Write_VeCHFR_b_CANC_WU_NCV_Value(VeCHFR_b_CANC_WU_NCVSF);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHFC'
     */
    /* Outport: '<Root>/VeCHFR_b_ChargeReq_ToBPCM' incorporates:
     *  Logic: '<S10>/Logical2'
     *  Logic: '<S10>/Logical4'
     *  Logic: '<S10>/Logical5'
     *  Logic: '<S10>/Logical8'
     *  SignalConversion generated from: '<S1>/VeCHFR_b_ChargeReq_ToBPCM'
     */
    (void)Rte_Write_VeCHFR_b_ChargeReq_ToBPCM_Value(((!tmpRead_10) &&
        (VeCHFR_b_ChargeReq)) && (!rtb_TmpSignalConversionAtVeCPLR));

    /* Outport: '<Root>/VeCHFR_b_ChargingFault' incorporates:
     *  Logic: '<S9>/Logical1'
     *  SignalConversion generated from: '<S1>/VeCHFR_b_ChargingFault'
     */
    (void)Rte_Write_VeCHFR_b_ChargingFault_Value((((((VeCHFR_b_ConnectionFault) ||
        (VeCHFR_b_ChrgVoltageFault)) || (VeCHFR_b_ChrgCrntFault)) ||
        rtb_TmpSignalConversionAtVeGE_p) || (VeCHFR_b_ChrgSysFault5)) ||
        (VeCHFR_b_LOC_FA));

    /* Outport: '<Root>/VeCHFR_b_ChrgSysFaultBPCM' incorporates:
     *  Logic: '<S10>/Logical3'
     *  SignalConversion generated from: '<S1>/VeCHFR_b_ChrgSysFaultBPCM'
     */
    (void)Rte_Write_VeCHFR_b_ChrgSysFaultBPCM_Value
        (rtb_TmpSignalConversionAtVeID_m && rtb_TmpSignalConversionAtVeOB_i);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeCHFR_b_ChrgSysFault' incorporates:
     *  Inport: '<S6>/ChrgSysFault'
     *  SignalConversion generated from: '<S1>/VeCHFR_b_ChrgSysFault_Out'
     */
    (void)Rte_Write_VeCHFR_b_ChrgSysFault_Value(rtb_TmpSignalConversionAtVeID_m);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHFC'
     */
    /* Outport: '<Root>/VeCHFR_b_GiveUp' incorporates:
     *  RelationalOperator: '<S137>/Not Equal1'
     *  SignalConversion generated from: '<S1>/VeCHFR_b_GiveUp'
     */
    (void)Rte_Write_VeCHFR_b_GiveUp_Value(VeCHFR_Cnt_EStopCount >
        VeCHFR_K_NumRetries);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S235>/Calib'
     */
    if (KeCHFR_b_MSG5_Ovrd)
    {
        /* Outport: '<Root>/VeCHFR_b_HMIR_MSG5' incorporates:
         *  Constant: '<S236>/Calib'
         *  SignalConversion generated from: '<S1>/VeCHFR_b_HMIR_MSG5'
         */
        (void)Rte_Write_VeCHFR_b_HMIR_MSG5_Value(KeCHFR_b_MSG5_Val);
    }
    else
    {
        /* Outport: '<Root>/VeCHFR_b_HMIR_MSG5' incorporates:
         *  SignalConversion generated from: '<S1>/VeCHFR_b_HMIR_MSG5'
         */
        (void)Rte_Write_VeCHFR_b_HMIR_MSG5_Value(VeCHFR_b_HMIR_MSG5_Test);
    }

    /* End of Switch: '<S6>/Switch1' */

    /* Switch: '<S6>/Switch2' incorporates:
     *  Constant: '<S237>/Calib'
     */
    if (KeCHFR_b_MSG6_Ovrd)
    {
        /* Outport: '<Root>/VeCHFR_b_HMIR_MSG6' incorporates:
         *  Constant: '<S238>/Calib'
         *  SignalConversion generated from: '<S1>/VeCHFR_b_HMIR_MSG6'
         */
        (void)Rte_Write_VeCHFR_b_HMIR_MSG6_Value(KeCHFR_b_MSG6_Val);
    }
    else
    {
        /* Outport: '<Root>/VeCHFR_b_HMIR_MSG6' incorporates:
         *  SignalConversion generated from: '<S1>/VeCHFR_b_HMIR_MSG6'
         */
        (void)Rte_Write_VeCHFR_b_HMIR_MSG6_Value(VeCHFR_b_HMIR_MSG6_Test);
    }

    /* End of Switch: '<S6>/Switch2' */

    /* Switch: '<S6>/Switch3' incorporates:
     *  Constant: '<S239>/Calib'
     *  Constant: '<S240>/Calib'
     *  Logic: '<S10>/Logical6'
     *  Logic: '<S10>/Logical7'
     */
    if (KeCHFR_b_MSG8_Ovrd)
    {
        rtb_UnitDelay_hz = KeCHFR_b_MSG8_Val;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/CHFC' */
        rtb_UnitDelay_hz = (rtb_TmpSignalConversionAtVeCPLR &&
                            (!rtb_TmpSignalConversionAtVeID_m));

        /* End of Outputs for SubSystem: '<S1>/CHFC' */
    }

    /* End of Switch: '<S6>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeCHFR_b_HMIR_MSG8' incorporates:
     *  SignalConversion generated from: '<S1>/VeCHFR_b_HMIR_MSG8'
     */
    (void)Rte_Write_VeCHFR_b_HMIR_MSG8_Value(rtb_UnitDelay_hz);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeCHFR_b_Reset_Charging' incorporates:
     *  Inport: '<S6>/Reset_Charging'
     *  SignalConversion generated from: '<S1>/VeCHFR_b_Reset_Charging'
     */
    (void)Rte_Write_VeCHFR_b_Reset_Charging_Value
        (rtb_TmpSignalConversionAtVeCCCR);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CHFC'
     */
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S134>/Calib'
     */
    if (KeCHFR_b_EnblCyclicNCR)
    {
        /* Outport: '<Root>/VeCHFR_k_ChrgSysFault_Reason' incorporates:
         *  SignalConversion generated from: '<S1>/VeCHFR_k_ChrgSysFault_Reason'
         */
        (void)Rte_Write_VeCHFR_k_ChrgSysFault_Reason_Value
            (rtb_TmpSignalConversionAtVeOBCR);
    }
    else
    {
        /* Outport: '<Root>/VeCHFR_k_ChrgSysFault_Reason' incorporates:
         *  SignalConversion generated from: '<S1>/VeCHFR_k_ChrgSysFault_Reason'
         */
        (void)Rte_Write_VeCHFR_k_ChrgSysFault_Reason_Value
            (VeCHFR_k_ChrgSysFault_ReasonSF);
    }

    /* End of Switch: '<S8>/Switch' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeCHFR_v_ModifiedVehSpeed' incorporates:
     *  Gain: '<S249>/Gain'
     *  SignalConversion generated from: '<S1>/VeCHFR_v_ModifiedVehSpeed'
     */
    (void)Rte_Write_VeCHFR_v_ModifiedVehSpeed_Value(Switch);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CHFR_MedTED' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_CHFR_1

FUNC(void, CHFR_CODE) CHFR_PwrOff(void)
{

#if Rte_SysCon_Variant_CHFR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
    /* Outputs for Function Call SubSystem: '<Root>/CHFR_PwrOff' */
    /* Outport: '<Root>/EeCHFR_b_ChrgSysFault_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeOBCR_b_ChrgSysFault'
     */
    (void)Rte_Write_EeCHFR_b_ChrgSysFault_EeCHFR_b_ChrgSysFault
        (EeCHFR_b_ChrgSysFault);

    /* End of Outputs for SubSystem: '<Root>/CHFR_PwrOff' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
#endif

}

#endif

/* Output function */
FUNC(void, CHFR_CODE) CHFR_PwrOn(void)
{

#if Rte_SysCon_Variant_CHFR_1

    boolean tmpRead;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CHFR_PwrOn'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Variant Subsystem' */
#if Rte_SysCon_Variant_CHFR_1

    /* Outputs for Atomic SubSystem: '<S250>/CHFO_FUNC' */
    /* Inport: '<Root>/EeCHFR_b_ChrgSysFault_PM_In' */
    (void)Rte_Read_EeCHFR_b_ChrgSysFault_Rx_EeCHFR_b_ChrgSysFault(&tmpRead);

    /* Outport: '<Root>/VeCHFR_U_ChrgVltReqDelta' incorporates:
     *  Constant: '<S251>/Const8'
     */
    (void)Rte_Write_VeCHFR_U_ChrgVltReqDelta_Value(0.0F);

    /* Outport: '<Root>/VeCHFR_k_ChrgSysFault_Reason' incorporates:
     *  Constant: '<S251>/Const16'
     */
    (void)Rte_Write_VeCHFR_k_ChrgSysFault_Reason_Value((sint16)0);

    /* Outport: '<Root>/VeCHFR_I_BattSideCurr' incorporates:
     *  Constant: '<S251>/Const18'
     */
    (void)Rte_Write_VeCHFR_I_BattSideCurr_Value(0.0F);

    /* Outport: '<Root>/VeCHFR_b_ChargeReq_ToBPCM' incorporates:
     *  Constant: '<S251>/Const19'
     */
    (void)Rte_Write_VeCHFR_b_ChargeReq_ToBPCM_Value(false);

    /* Outport: '<Root>/VeCHFR_b_HMIR_MSG5' incorporates:
     *  Constant: '<S251>/Const20'
     */
    (void)Rte_Write_VeCHFR_b_HMIR_MSG5_Value(false);

    /* Outport: '<Root>/VeCHFR_b_HMIR_MSG6' incorporates:
     *  Constant: '<S251>/Const21'
     */
    (void)Rte_Write_VeCHFR_b_HMIR_MSG6_Value(false);

    /* Outport: '<Root>/VeCHFR_b_HMIR_MSG8' incorporates:
     *  Constant: '<S251>/Const24'
     */
    (void)Rte_Write_VeCHFR_b_HMIR_MSG8_Value(false);

    /* Outport: '<Root>/VeCHFR_b_ChrgSysFaultBPCM' incorporates:
     *  Constant: '<S251>/Const31'
     */
    (void)Rte_Write_VeCHFR_b_ChrgSysFaultBPCM_Value(false);

    /* Outport: '<Root>/VeCHFR_K_ChargingFailure1' incorporates:
     *  Constant: '<S251>/Const57'
     */
    (void)Rte_Write_VeCHFR_K_ChargingFailure1_Value((sint16)0);

    /* Outport: '<Root>/VeCHFR_K_ChargingFailure2' incorporates:
     *  Constant: '<S251>/Const58'
     */
    (void)Rte_Write_VeCHFR_K_ChargingFailure2_Value((sint16)0);

    /* Outport: '<Root>/VeCHFR_K_ChargingFailure3' incorporates:
     *  Constant: '<S251>/Const59'
     */
    (void)Rte_Write_VeCHFR_K_ChargingFailure3_Value((sint16)0);

    /* Outport: '<Root>/VeCHFR_K_ChargingFailure4' incorporates:
     *  Constant: '<S251>/Const60'
     */
    (void)Rte_Write_VeCHFR_K_ChargingFailure4_Value((sint16)0);

    /* Outport: '<Root>/VeCHFR_K_ChargingFailure5' incorporates:
     *  Constant: '<S251>/Const61'
     */
    (void)Rte_Write_VeCHFR_K_ChargingFailure5_Value((sint16)0);

    /* Outport: '<Root>/VeCHFR_b_ChargingFault' incorporates:
     *  Constant: '<S251>/Const1'
     */
    (void)Rte_Write_VeCHFR_b_ChargingFault_Value(false);

    /* Outport: '<Root>/VeCHFR_b_ACPrnt_S2Open' incorporates:
     *  Constant: '<S251>/Const2'
     */
    (void)Rte_Write_VeCHFR_b_ACPrnt_S2Open_Value(false);

    /* Outport: '<Root>/VeCHFR_v_ModifiedVehSpeed' incorporates:
     *  Constant: '<S251>/Const3'
     */
    (void)Rte_Write_VeCHFR_v_ModifiedVehSpeed_Value(0.0F);

    /* Outport: '<Root>/VeCHFR_b_CANC_WU_NCV' incorporates:
     *  Constant: '<S251>/Const4'
     */
    (void)Rte_Write_VeCHFR_b_CANC_WU_NCV_Value(false);

    /* Outport: '<Root>/VeCHFR_b_Reset_Charging' incorporates:
     *  Constant: '<S251>/Const5'
     */
    (void)Rte_Write_VeCHFR_b_Reset_Charging_Value(false);

    /* Outport: '<Root>/VeCHFR_b_GiveUp' incorporates:
     *  Constant: '<S251>/Const6'
     */
    (void)Rte_Write_VeCHFR_b_GiveUp_Value(false);

    /* Outport: '<Root>/VeCHFR_b_ChrgSysFault' incorporates:
     *  DataStoreRead: '<S251>/Data Store Read1'
     */
    (void)Rte_Write_VeCHFR_b_ChrgSysFault_Value(EeCHFR_b_ChrgSysFault);

    /* Outputs for Atomic SubSystem: '<S251>/DSM_Init' */
    /* DataStoreWrite: '<S253>/EeOBCR_b_ChrgSysFault' */
    EeCHFR_b_ChrgSysFault = tmpRead;

    /* End of Outputs for SubSystem: '<S251>/DSM_Init' */
    /* End of Outputs for SubSystem: '<S250>/CHFO_FUNC' */
#else

    /* Outputs for Atomic SubSystem: '<S250>/CHFO_NF' */
    /* Outport: '<Root>/VeCHFR_U_ChrgVltReqDelta' incorporates:
     *  Constant: '<S252>/Const8'
     */
    (void)Rte_Write_VeCHFR_U_ChrgVltReqDelta_Value(0.0F);

    /* Outport: '<Root>/VeCHFR_k_ChrgSysFault_Reason' incorporates:
     *  Constant: '<S252>/Const16'
     */
    (void)Rte_Write_VeCHFR_k_ChrgSysFault_Reason_Value((sint16)0);

    /* Outport: '<Root>/VeCHFR_I_BattSideCurr' incorporates:
     *  Constant: '<S252>/Const18'
     */
    (void)Rte_Write_VeCHFR_I_BattSideCurr_Value(0.0F);

    /* Outport: '<Root>/VeCHFR_b_ChargeReq_ToBPCM' incorporates:
     *  Constant: '<S252>/Const19'
     */
    (void)Rte_Write_VeCHFR_b_ChargeReq_ToBPCM_Value(false);

    /* Outport: '<Root>/VeCHFR_b_HMIR_MSG5' incorporates:
     *  Constant: '<S252>/Const20'
     */
    (void)Rte_Write_VeCHFR_b_HMIR_MSG5_Value(false);

    /* Outport: '<Root>/VeCHFR_b_HMIR_MSG6' incorporates:
     *  Constant: '<S252>/Const21'
     */
    (void)Rte_Write_VeCHFR_b_HMIR_MSG6_Value(false);

    /* Outport: '<Root>/VeCHFR_b_HMIR_MSG8' incorporates:
     *  Constant: '<S252>/Const24'
     */
    (void)Rte_Write_VeCHFR_b_HMIR_MSG8_Value(false);

    /* Outport: '<Root>/VeCHFR_b_ChrgSysFaultBPCM' incorporates:
     *  Constant: '<S252>/Const31'
     */
    (void)Rte_Write_VeCHFR_b_ChrgSysFaultBPCM_Value(false);

    /* Outport: '<Root>/VeCHFR_K_ChargingFailure1' incorporates:
     *  Constant: '<S252>/Const57'
     */
    (void)Rte_Write_VeCHFR_K_ChargingFailure1_Value((sint16)0);

    /* Outport: '<Root>/VeCHFR_K_ChargingFailure2' incorporates:
     *  Constant: '<S252>/Const58'
     */
    (void)Rte_Write_VeCHFR_K_ChargingFailure2_Value((sint16)0);

    /* Outport: '<Root>/VeCHFR_K_ChargingFailure3' incorporates:
     *  Constant: '<S252>/Const59'
     */
    (void)Rte_Write_VeCHFR_K_ChargingFailure3_Value((sint16)0);

    /* Outport: '<Root>/VeCHFR_K_ChargingFailure4' incorporates:
     *  Constant: '<S252>/Const60'
     */
    (void)Rte_Write_VeCHFR_K_ChargingFailure4_Value((sint16)0);

    /* Outport: '<Root>/VeCHFR_K_ChargingFailure5' incorporates:
     *  Constant: '<S252>/Const61'
     */
    (void)Rte_Write_VeCHFR_K_ChargingFailure5_Value((sint16)0);

    /* Outport: '<Root>/VeCHFR_b_ChargingFault' incorporates:
     *  Constant: '<S252>/Const1'
     */
    (void)Rte_Write_VeCHFR_b_ChargingFault_Value(false);

    /* Outport: '<Root>/VeCHFR_b_ACPrnt_S2Open' incorporates:
     *  Constant: '<S252>/Const2'
     */
    (void)Rte_Write_VeCHFR_b_ACPrnt_S2Open_Value(false);

    /* Outport: '<Root>/VeCHFR_v_ModifiedVehSpeed' incorporates:
     *  Constant: '<S252>/Const3'
     */
    (void)Rte_Write_VeCHFR_v_ModifiedVehSpeed_Value(0.0F);

    /* Outport: '<Root>/VeCHFR_b_CANC_WU_NCV' incorporates:
     *  Constant: '<S252>/Const4'
     */
    (void)Rte_Write_VeCHFR_b_CANC_WU_NCV_Value(false);

    /* Outport: '<Root>/VeCHFR_b_Reset_Charging' incorporates:
     *  Constant: '<S252>/Const5'
     */
    (void)Rte_Write_VeCHFR_b_Reset_Charging_Value(false);

    /* Outport: '<Root>/VeCHFR_b_GiveUp' incorporates:
     *  Constant: '<S252>/Const6'
     */
    (void)Rte_Write_VeCHFR_b_GiveUp_Value(false);

    /* Outport: '<Root>/VeCHFR_b_ChrgSysFault' incorporates:
     *  DataStoreRead: '<S252>/Data Store Read1'
     */
    (void)Rte_Write_VeCHFR_b_ChrgSysFault_Value(EeCHFR_b_ChrgSysFault);

    /* End of Outputs for SubSystem: '<S250>/CHFO_NF' */
#endif

    /* End of Outputs for SubSystem: '<S3>/Variant Subsystem' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, CHFR_CODE) CHFR_ac_Init(void)
{
    /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
