/*
 * File: SCCR_ac.c
 *
 * Code generated for Simulink model 'SCCR_ac'.
 *
 * Model version                  : 9.183
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:53:49 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SCCR_ac.h"
#include "look1_iflf_binlca_16a.h"
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
#define START_SEC_CALIB_UNSPECIFIED_SCCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) HeSCCR_t_dt = 0.00625F;/* Referenced by: '<S264>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KaSCCR_b_RqFAOvrdEnbl[6] =
{
    0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S168>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KaSCCR_b_RqOvrdEnbl[16] =
{
    0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0
} ;                                    /* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FlyWRqstInit = 0.0F;/* Referenced by: '<S296>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlAdhMax = 10000.0F;/* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlAdhMin = -10000.0F;/* Referenced by: '<S171>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlCLMaxOvrdVal =
    10000.0F;                          /* Referenced by: '<S172>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlCLMaxThrshld =
    8000.0F;                           /* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlCLMinOvrdVal =
    -10000.0F;                         /* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlCLMinThrshld =
    -8000.0F;                          /* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlEffMax = 10000.0F;/* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlEffMin = -10000.0F;/* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlMaxLim = 0.0F;/* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlMaxRqLim =
    100000.0F;                         /* Referenced by: '<S140>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlMaxRqOutInit =
    0.0F;                              /* Referenced by:
                                        * '<S314>/Calib'
                                        * '<S315>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlMinLim = 0.0F;/* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlMinRqLim =
    -100000.0F;                        /* Referenced by: '<S141>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlMinRqOutInit =
    0.0F;                              /* Referenced by:
                                        * '<S316>/Calib'
                                        * '<S317>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlOLMaxOvrdVal =
    10000.0F;                          /* Referenced by: '<S176>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlOLMaxThrshld =
    10000.0F;                          /* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlOLMinOvrdVal =
    -10000.0F;                         /* Referenced by: '<S177>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlOLMinThrshld =
    -10000.0F;                         /* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlRqDflt = 0.0F;/* Referenced by:
                                                                      * '<S2>/FsftSCCR_M_FrntAxlRqChrt'
                                                                      * '<S14>/PokeSCCR_M_FrntAxlRqChrt'
                                                                      */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlRqTorqOvrdVal =
    0.0F;                              /* Referenced by: '<S178>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlRqstInit = 0.0F;/* Referenced by: '<S294>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlStrtgcMax_OL =
    10000.0F;                          /* Referenced by: '<S179>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlStrtgcMin_OL =
    -10000.0F;                         /* Referenced by: '<S180>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlTactFastMax_OL =
    10000.0F;                          /* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlTactFastMin_OL =
    -10000.0F;                         /* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlTactSlowMax_OL =
    10000.0F;                          /* Referenced by: '<S183>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlTactSlowMin_OL =
    -10000.0F;                         /* Referenced by: '<S184>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlTrqEstInit = 0.0F;/* Referenced by: '<S295>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlTrqEstOutInit =
    0.0F;                              /* Referenced by: '<S318>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_FrntAxlTrqEstOvrdVal =
    0.0F;                              /* Referenced by: '<S286>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_Gradient_Dec_DMPI =
    -10.0F;                            /* Referenced by: '<S105>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT)
    KeSCCR_M_Gradient_Dec_Limit_Protection_Max = -10.0F;/* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT)
    KeSCCR_M_Gradient_Dec_Limit_Protection_Min = -10.0F;/* Referenced by: '<S127>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_Gradient_Inc_DMPI = 10.0F;/* Referenced by: '<S106>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT)
    KeSCCR_M_Gradient_Inc_Limit_Protection_Max = 10.0F;/* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT)
    KeSCCR_M_Gradient_Inc_Limit_Protection_Min = 10.0F;/* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlAdhMax = 10000.0F;/* Referenced by: '<S185>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlAdhMin = -10000.0F;/* Referenced by: '<S186>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlCLMaxThrshld =
    8000.0F;                           /* Referenced by: '<S153>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlCLMinOvrdVal =
    -10000.0F;                         /* Referenced by: '<S187>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlCLMinThrshld =
    -8000.0F;                          /* Referenced by: '<S155>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlEffMax = 10000.0F;/* Referenced by: '<S188>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlEffMin = -10000.0F;/* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlMaxLim = 0.0F;/* Referenced by: '<S158>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlMaxRqOutInit = 0.0F;/* Referenced by: '<S319>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlMinLim = 0.0F;/* Referenced by: '<S159>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlMinRqOutInit = 0.0F;/* Referenced by: '<S320>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlOLMaxThrshld =
    10000.0F;                          /* Referenced by: '<S154>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlOLMinOvrdVal =
    -10000.0F;                         /* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlOLMinThrshld =
    -10000.0F;                         /* Referenced by: '<S156>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlRqDflt = 0.0F;/* Referenced by:
                                                                      * '<S3>/FsftSCCR_M_Output_Torque_LimitChrt'
                                                                      * '<S4>/FsftSCCR_M_RrAxlRqChrt'
                                                                      * '<S15>/PokeSCCR_M_Output_Torque_LimitChrt'
                                                                      * '<S18>/PokeSCCR_M_RrAxlRqChrt'
                                                                      */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlRqTorqOvrdVal = 0.0F;/* Referenced by: '<S191>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlRqstInit = 0.0F;/* Referenced by: '<S297>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlStrtgcMax_OL =
    10000.0F;                          /* Referenced by: '<S192>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlStrtgcMin_OL =
    -10000.0F;                         /* Referenced by: '<S193>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlTactFastMax_OL =
    10000.0F;                          /* Referenced by: '<S194>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlTactFastMin_OL =
    -10000.0F;                         /* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlTactSlowMax_OL =
    10000.0F;                          /* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlTactSlowMin_OL =
    -10000.0F;                         /* Referenced by: '<S197>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlTrqEstInit = 0.0F;/* Referenced by: '<S298>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlTrqEstOutInit = 0.0F;/* Referenced by: '<S321>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrAxlTrqEstOvrdVal = 0.0F;/* Referenced by: '<S287>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrtAxlCLMaxOvrdVal =
    10000.0F;                          /* Referenced by: '<S198>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_RrtAxlOLMaxOvrdVal =
    10000.0F;                          /* Referenced by: '<S199>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_M_StandstillThrsh = 1000.0F;/* Referenced by: '<S275>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_AWDDiscnctAllwdOvrdEnbl =
    0;                                 /* Referenced by: '<S200>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_AWDDiscnctAllwdOvrdVal =
    0;                                 /* Referenced by: '<S201>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_AlwEPBActvP4zeroTrq = 0;/* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_AlwEPBCnd = 1;/* Referenced by: '<S276>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_DsblAEMDGainFrntOvrdEnbl =
    0;                                 /* Referenced by: '<S202>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_DsblAEMDGainFrntOvrdVal =
    0;                                 /* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_DsblAEMDGainRrOvrdEnbl =
    0;                                 /* Referenced by: '<S204>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_DsblAEMDGainRrOvrdVal = 0;/* Referenced by: '<S205>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_EPBHoldStsOvrdEnbl = 0;/* Referenced by: '<S206>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_EnblRrAxlLimFilt = 0;/* Referenced by: '<S148>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_EnblSeriesModeCnd = 1;/* Referenced by: '<S277>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FlyWheelDomain = 0;/* Referenced by:
                                                                      * '<S76>/Calib'
                                                                      * '<S77>/Calib'
                                                                      * '<S78>/Calib'
                                                                      * '<S79>/Calib'
                                                                      * '<S246>/Calib'
                                                                      * '<S247>/Calib'
                                                                      * '<S248>/Calib'
                                                                      * '<S249>/Calib'
                                                                      * '<S250>/Calib'
                                                                      * '<S251>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlAdhMax = 1;/* Referenced by: '<S207>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlAdhMin = 1;/* Referenced by: '<S208>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlEffMax = 1;/* Referenced by: '<S209>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlEffMin = 1;/* Referenced by: '<S210>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlMaxRqDflt = 0;/* Referenced by:
                                                                      * '<S7>/FsftSCCR_b_FrntAxlMaxRqChrt'
                                                                      * '<S24>/PokeSCCR_b_FrntAxlMaxRqChrt'
                                                                      */

#endif

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlMaxRqFAInit = 0;/* Referenced by: '<S299>/Calib' */

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlMaxRqFAOvrdVal = 0;/* Referenced by: '<S211>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlMaxRqInit = 0;/* Referenced by: '<S300>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlMaxRqOvrdVal = 0;/* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlMinRqDflt = 0;/* Referenced by:
                                                                      * '<S8>/FsftSCCR_b_FrntAxlMinRqChrt'
                                                                      * '<S25>/PokeSCCR_b_FrntAxlMinRqChrt'
                                                                      */

#endif

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlMinRqFAInit = 0;/* Referenced by: '<S301>/Calib' */

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlMinRqFAOvrdVal = 0;/* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlMinRqInit = 0;/* Referenced by: '<S302>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlMinRqOvrdVal = 0;/* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlStrtgcMax_OL = 1;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlStrtgcMin_OL = 1;/* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlTactFastMax_OL = 1;/* Referenced by: '<S217>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlTactFastMin_OL = 1;/* Referenced by: '<S218>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlTactSlowMax_OL = 1;/* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlTactSlowMin_OL = 1;/* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlTqRqFAInit = 0;/* Referenced by: '<S303>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlTqRqFAOvrdVal = 0;/* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntAxlTrqEstOvrdEnbl = 0;/* Referenced by: '<S288>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntDFOffReqOvrdEnbl = 0;/* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_FrntDFOffReqOvrdVal = 0;/* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_PerfAWDFlagOvrdEnbl = 0;/* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_PerfAWDFlagOvrdVal = 0;/* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RU_or_KM_FWD = 0;/* Referenced by: '<S111>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlAdhMax = 1;/* Referenced by: '<S226>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlAdhMin = 1;/* Referenced by: '<S227>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlEffMax = 1;/* Referenced by: '<S228>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlEffMin = 1;/* Referenced by: '<S229>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlMaxRqDflt = 0;/* Referenced by:
                                                                      * '<S9>/FsftSCCR_b_RrAxlMaxRqChrt'
                                                                      * '<S28>/PokeSCCR_b_RrAxlMaxRqChrt'
                                                                      */

#endif

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlMaxRqFAInit = 0;/* Referenced by: '<S304>/Calib' */

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlMaxRqFAOvrdVal = 0;/* Referenced by: '<S230>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlMaxRqInit = 0;/* Referenced by: '<S305>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlMaxRqOvrdVal = 0;/* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlMinRqDflt = 0;
                          /* Referenced by: '<S29>/PokeSCCR_b_RrAxlMinRqChrt' */

#endif

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlMinRqFAInit = 0;/* Referenced by: '<S306>/Calib' */

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlMinRqFAOvrdVal = 0;/* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlMinRqInit = 0;/* Referenced by: '<S307>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlMinRqOvrdVal = 0;/* Referenced by: '<S233>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlStrtgcMax_OL = 1;/* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlStrtgcMin_OL = 1;/* Referenced by: '<S235>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlTactFastMax_OL = 1;/* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlTactFastMin_OL = 1;/* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlTactSlowMax_OL = 1;/* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlTactSlowMin_OL = 1;/* Referenced by: '<S239>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlTqRqFAInit = 0;/* Referenced by: '<S308>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlTqRqFAOvrdVal = 0;/* Referenced by: '<S240>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrAxlTrqEstOvrdEnbl = 0;/* Referenced by: '<S289>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrDFOffReqOvrdEnbl = 0;/* Referenced by: '<S241>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_RrDFOffReqOvrdVal = 0;/* Referenced by: '<S242>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_TwoDrivingAxles = 0;/* Referenced by:
                                                                      * '<S165>/Calib'
                                                                      * '<S166>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_ZeroTrqAllwdOvrdEnbl = 0;/* Referenced by: '<S243>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(boolean, SCCR_VAR_INIT) KeSCCR_b_ZeroTrqAllwdOvrdVal = 0;/* Referenced by: '<S244>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(TePLTR_e_EPBHoldSts, SCCR_VAR_INIT)
    KeSCCR_e_EPBHoldStsInit = CePLTR_e_EPBHoldSts_APPLIED;/* Referenced by: '<S309>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(TePLTR_e_EPBHoldSts, SCCR_VAR_INIT)
    KeSCCR_e_EPBHoldStsOvrdVal = CePLTR_e_EPBHoldSts_REL;/* Referenced by: '<S245>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(uint8, SCCR_VAR_INIT) KeSCCR_i_WheelDrvProg = 1U;/* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_k_FiltCoeffFrntAxlTrqEst =
    1.0F;                              /* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_k_FiltCoeffRrAxlTrqEst =
    1.0F;                              /* Referenced by: '<S260>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_n_NoStandstillThrsh = 15.0F;/* Referenced by: '<S278>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_r_RipAWDOvrdVal = 0.4F;/* Referenced by: '<S252>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_r_RipRegenOvrdVal = 0.7F;/* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_t_FrntTrqEstBlndIn = 0.5F;/* Referenced by: '<S265>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_t_FrntTrqEstBlndOut = 0.1F;/* Referenced by: '<S266>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_t_RrTrqEstBlndIn = 0.5F;/* Referenced by: '<S267>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_t_RrTrqEstBlndOut = 0.1F;/* Referenced by: '<S268>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KeSCCR_v_VehicleSpeedProtection =
    100.0F;                            /* Referenced by: '<S130>/Calib' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KtSCCR_M_FrntAxlMaxProtection[169]
    =
{
    1200.0F, 1100.0F, 1000.0F, 900.0F, 800.0F, 700.0F, 600.0F, 500.0F, 400.0F,
    300.0F, 250.0F, 200.0F, 100.0F, 1100.0F, 1000.0F, 900.0F, 800.0F, 700.0F,
    600.0F, 500.0F, 400.0F, 300.0F, 200.0F, 100.0F, 100.0F, 90.0F, 1000.0F,
    900.0F, 800.0F, 700.0F, 600.0F, 500.0F, 400.0F, 300.0F, 200.0F, 100.0F,
    90.0F, 90.0F, 80.0F, 900.0F, 800.0F, 700.0F, 600.0F, 500.0F, 400.0F, 300.0F,
    200.0F, 100.0F, 90.0F, 80.0F, 80.0F, 70.0F, 800.0F, 700.0F, 600.0F, 500.0F,
    400.0F, 300.0F, 200.0F, 100.0F, 90.0F, 80.0F, 70.0F, 70.0F, 60.0F, 700.0F,
    600.0F, 500.0F, 400.0F, 300.0F, 200.0F, 100.0F, 90.0F, 80.0F, 70.0F, 60.0F,
    60.0F, 50.0F, 600.0F, 500.0F, 400.0F, 300.0F, 200.0F, 100.0F, 90.0F, 80.0F,
    70.0F, 60.0F, 50.0F, 50.0F, 40.0F, 500.0F, 400.0F, 300.0F, 200.0F, 100.0F,
    90.0F, 80.0F, 70.0F, 60.0F, 50.0F, 40.0F, 40.0F, 30.0F, 400.0F, 300.0F,
    200.0F, 100.0F, 80.0F, 80.0F, 70.0F, 60.0F, 50.0F, 40.0F, 30.0F, 30.0F,
    20.0F, 300.0F, 200.0F, 100.0F, 75.0F, 60.0F, 60.0F, 60.0F, 50.0F, 40.0F,
    30.0F, 15.0F, 15.0F, 10.0F, 200.0F, 100.0F, 75.0F, 50.0F, 40.0F, 35.0F,
    30.0F, 25.0F, 19.0F, 15.0F, 10.0F, 5.0F, 0.0F, 100.0F, 50.0F, 50.0F, 40.0F,
    30.0F, 25.0F, 20.0F, 15.0F, 10.0F, 5.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S131>/Vector' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KtSCCR_M_FrntAxlMinProtection[169]
    =
{
    -1200.0F, -1100.0F, -1000.0F, -900.0F, -800.0F, -700.0F, -600.0F, -500.0F,
    -400.0F, -300.0F, -250.0F, -200.0F, -100.0F, -1100.0F, -1000.0F, -900.0F,
    -800.0F, -700.0F, -600.0F, -500.0F, -400.0F, -300.0F, -200.0F, -100.0F,
    -100.0F, -90.0F, -1000.0F, -900.0F, -800.0F, -700.0F, -600.0F, -500.0F,
    -400.0F, -300.0F, -200.0F, -100.0F, -90.0F, -90.0F, -80.0F, -900.0F, -800.0F,
    -700.0F, -600.0F, -500.0F, -400.0F, -300.0F, -200.0F, -100.0F, -90.0F,
    -80.0F, -80.0F, -70.0F, -800.0F, -700.0F, -600.0F, -500.0F, -400.0F, -300.0F,
    -200.0F, -100.0F, -90.0F, -80.0F, -70.0F, -70.0F, -60.0F, -700.0F, -600.0F,
    -500.0F, -400.0F, -300.0F, -200.0F, -100.0F, -90.0F, -80.0F, -70.0F, -60.0F,
    -60.0F, -50.0F, -600.0F, -500.0F, -400.0F, -300.0F, -200.0F, -100.0F, -90.0F,
    -80.0F, -70.0F, -60.0F, -50.0F, -50.0F, -40.0F, -500.0F, -400.0F, -300.0F,
    -200.0F, -100.0F, -90.0F, -80.0F, -70.0F, -60.0F, -50.0F, -40.0F, -40.0F,
    -30.0F, -400.0F, -300.0F, -200.0F, -100.0F, -80.0F, -80.0F, -70.0F, -60.0F,
    -50.0F, -40.0F, -30.0F, -30.0F, -20.0F, -300.0F, -200.0F, -100.0F, -75.0F,
    -60.0F, -60.0F, -60.0F, -50.0F, -40.0F, -30.0F, -15.0F, -15.0F, -10.0F,
    -200.0F, -100.0F, -75.0F, -50.0F, -40.0F, -35.0F, -30.0F, -25.0F, -20.0F,
    -15.0F, -10.0F, -5.0F, 0.0F, -100.0F, -50.0F, -50.0F, -40.0F, -30.0F, -25.0F,
    -20.0F, -15.0F, -10.0F, -5.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S132>/Vector' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KtSCCR_M_OutputTorqueLimitF[10] =
{
    10000.0F, 9000.0F, 8000.0F, 7000.0F, 6000.0F, 5000.0F, 4000.0F, 3000.0F,
    2000.0F, 1000.0F
} ;                                    /* Referenced by: '<S107>/Vector' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KtSCCR_M_OutputTorqueLimitR[10] =
{
    10000.0F, 9000.0F, 8000.0F, 7000.0F, 6000.0F, 5000.0F, 4000.0F, 3000.0F,
    2000.0F, 1000.0F
} ;                                    /* Referenced by: '<S108>/Vector' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KtSCCR_M_RrAxlMaxRqLim[25] =
{
    0.0F, 0.0F, 1550.0F, 3550.0F, 15050.0F, 0.0F, 0.0F, 1550.0F, 3550.0F,
    15050.0F, 0.0F, 0.0F, 1550.0F, 3550.0F, 15050.0F, 0.0F, 0.0F, 1550.0F,
    3550.0F, 15050.0F, 0.0F, 0.0F, 1550.0F, 3550.0F, 15050.0F
} ;                                    /* Referenced by: '<S149>/Vector' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KtSCCR_M_RrAxlMinRqLim[25] =
{
    -15050.0F, -3550.0F, -1550.0F, 0.0F, 0.0F, -15050.0F, -3550.0F, -1550.0F,
    0.0F, 0.0F, -15050.0F, -3550.0F, -1550.0F, 0.0F, 0.0F, -15050.0F, -3550.0F,
    -1550.0F, 0.0F, 0.0F, -15050.0F, -3550.0F, -1550.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S150>/Vector' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KtSCCR_k_FrntAxlRmpRt[3] =
{
    10.0F, 10.0F, 1.0E+6F
} ;                                    /* Referenced by: '<S120>/Vector' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KtSCCR_k_RrAxlRmpRt[3] =
{
    10.0F, 10.0F, 1.0E+6F
} ;                                    /* Referenced by: '<S160>/Vector' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KxSCCR_M_FrntAxlMaxProtection[13] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    110.0F, 120.0F
} ;                                    /* Referenced by: '<S131>/Vector' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KxSCCR_M_FrntAxlMinProtection[13] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    110.0F, 120.0F
} ;                                    /* Referenced by: '<S132>/Vector' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KxSCCR_M_RrAxlMaxRqLim[5] =
{
    -500.0F, 0.0F, 1500.0F, 3500.0F, 15000.0F
} ;                                    /* Referenced by: '<S149>/Vector' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KxSCCR_M_RrAxlMinRqLim[5] =
{
    -15000.0F, -3500.0F, -1500.0F, 0.0F, 500.0F
} ;                                    /* Referenced by: '<S150>/Vector' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KxSCCR_k_FrntAxlRmpRt[3] =
{
    0.0F, 199.0F, 200.0F
} ;                                    /* Referenced by: '<S120>/Vector' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KxSCCR_k_RrAxlRmpRt[3] =
{
    0.0F, 199.0F, 200.0F
} ;                                    /* Referenced by: '<S160>/Vector' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KxSCCR_n_DiffWhlSpdFront[10] =
{
    0.0F, 100.0F, 200.0F, 300.0F, 400.0F, 500.0F, 600.0F, 700.0F, 800.0F, 900.0F
} ;                                    /* Referenced by: '<S107>/Vector' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KxSCCR_n_DiffWhlSpdRear[10] =
{
    0.0F, 100.0F, 200.0F, 300.0F, 400.0F, 500.0F, 600.0F, 700.0F, 800.0F, 900.0F
} ;                                    /* Referenced by: '<S108>/Vector' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KySCCR_M_FrntAxlMaxProtection[13] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    110.0F, 120.0F
} ;                                    /* Referenced by: '<S131>/Vector' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KySCCR_M_FrntAxlMinProtection[13] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    110.0F, 120.0F
} ;                                    /* Referenced by: '<S132>/Vector' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KySCCR_M_RrAxlMaxRqLim[5] =
{
    0.0F, 1000.0F, 2500.0F, 5000.0F, 10000.0F
} ;                                    /* Referenced by: '<S149>/Vector' */

#endif

#if Rte_SysCon_Variant_SCCR_3

static volatile CONST(float32, SCCR_VAR_INIT) KySCCR_M_RrAxlMinRqLim[5] =
{
    0.0F, 1000.0F, 2500.0F, 5000.0F, 10000.0F
} ;                                    /* Referenced by: '<S150>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_SCCR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_SCCR
#include "MemMap.h"

CONST(ConstB_SCCR_ac_T, SCCR_VAR_INIT) SCCR_ac_ConstB =
{
    0.0F,                              /* '<S292>/Const4' */
    0.0F,                              /* '<S292>/Const6' */
    0.0F,                              /* '<S292>/Const18' */
    0.0F,                              /* '<S292>/Const20' */
    0.0F,                              /* '<S291>/Constant Value45' */
    0.0F,                              /* '<S291>/Constant Value1' */
    0.0F,                              /* '<S291>/Constant Value2' */
    10000.0F,                          /* '<S290>/Constant Value' */
    -10000.0F,                         /* '<S290>/Constant Value1' */
    10000.0F,                          /* '<S290>/Constant Value2' */
    -10000.0F,                         /* '<S290>/Constant Value3' */
    10000.0F,                          /* '<S290>/Constant Value4' */
    -10000.0F,                         /* '<S290>/Constant Value5' */
    10000.0F,                          /* '<S290>/Constant Value6' */
    -10000.0F,                         /* '<S290>/Constant Value7' */
    0.5F,                              /* '<S290>/Constant Value8' */
    0.5F,                              /* '<S290>/Constant Value9' */
    0.0F,                              /* '<S290>/Constant Value15' */
    0.0F,                              /* '<S290>/Constant Value16' */
    0.0F,                              /* '<S290>/Constant Value17' */
    0.0F,                              /* '<S290>/Constant Value18' */
    0.0F,                              /* '<S290>/Constant Value19' */
    0.0F,                              /* '<S290>/Constant Value20' */
    0.0F,                              /* '<S290>/Constant Value21' */
    0.0F,                              /* '<S290>/Constant Value22' */
    0.0F,                              /* '<S290>/Constant Value23' */
    0.0F,                              /* '<S290>/Constant Value24' */
    0.0F,                              /* '<S290>/Constant Value25' */
    0.0F,                              /* '<S290>/Constant Value26' */
    0.0F,                              /* '<S290>/Constant Value27' */
    0.0F,                              /* '<S290>/Constant Value28' */
    0.0F,                              /* '<S290>/Constant Value29' */
    0.0F,                              /* '<S290>/Constant Value30' */
    0.0F,                              /* '<S290>/Constant Value31' */
    0.0F,                              /* '<S290>/Constant Value32' */
    0.0F,                              /* '<S290>/Constant Value33' */
    0.0F,                              /* '<S290>/Constant Value34' */
    0.0F,                              /* '<S290>/Constant Value38' */
    0,                                 /* '<S292>/Const28' */
    0,                                 /* '<S292>/Const29' */
    0,                                 /* '<S292>/Const30' */
    0,                                 /* '<S292>/Const31' */
    0,                                 /* '<S292>/Const33' */
    0,                                 /* '<S291>/FALSE Constant8' */
    0,                                 /* '<S291>/FALSE Constant7' */
    0,                                 /* '<S291>/FALSE Constant1' */
    0,                                 /* '<S291>/FALSE Constant2' */
    0,                                 /* '<S291>/FALSE Constant5' */
    0,                                 /* '<S291>/FALSE Constant6' */
    0,                                 /* '<S291>/FALSE Constant3' */
    0,                                 /* '<S291>/FALSE Constant4' */
    0,                                 /* '<S291>/FALSE Constant9' */
    0,                                 /* '<S290>/Constant Value10' */
    0,                                 /* '<S290>/Constant Value11' */
    0,                                 /* '<S290>/Constant Value12' */

#if Rte_SysCon_Variant_SCCR_3

    0,                                 /* '<S290>/Constant Value13' */

#endif

#if Rte_SysCon_Variant_SCCR_3

    0,                                 /* '<S290>/Constant Value14' */

#endif

    0,                                 /* '<S290>/Constant Value35' */
    0,                                 /* '<S290>/Constant Value36' */
    0,                                 /* '<S290>/Constant Value37' */

#if Rte_SysCon_Variant_SCCR_3

    0,                                 /* '<S290>/Constant Value39' */

#endif

#if Rte_SysCon_Variant_SCCR_3

    0,                                 /* '<S290>/Constant Value43' */

#endif

#if Rte_SysCon_Variant_SCCR_3

    0,                                 /* '<S290>/Constant Value40' */

#endif

#if Rte_SysCon_Variant_SCCR_3

    0,                                 /* '<S290>/Constant Value41' */

#endif

#if Rte_SysCon_Variant_SCCR_3

    0,                                 /* '<S290>/Constant Value42' */

#endif

#if Rte_SysCon_Variant_SCCR_3

    1,                                 /* '<S279>/Logical2' */

#endif

#if Rte_SysCon_Variant_SCCR_3

    1                                  /* '<S282>/Logical2' */
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_SCCR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_SCCR
#include "MemMap.h"

CONST(ConstP_SCCR_ac_T, SCCR_VAR_INIT) SCCR_ac_ConstP =
{

#if Rte_SysCon_Variant_SCCR_3

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S149>/Vector'
     *   '<S150>/Vector'
     */
    {
        4U, 4U
    },

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S131>/Vector'
     *   '<S132>/Vector'
     */
    {
        12U, 12U
    },

#endif

#ifndef CONSTP_SCCR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_SCCR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SCCR
#include "MemMap.h"

VAR(B_SCCR_ac_T, SCCR_VAR_INIT) SCCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SCCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SCCR
#include "MemMap.h"

VAR(DW_SCCR_ac_T, SCCR_VAR_INIT) SCCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SCCR
#include "MemMap.h"
#if Rte_SysCon_Variant_SCCR_3
#if Rte_SysCon_Variant_SCCR_3

static FUNC(void, SCCR_CODE_LOCAL) SCCR_ac_FsftSCCR_b_FlyWMaxRqChrt(P2VAR
    (B_FsftSCCR_b_FlyWMaxRqChrt_SCCR_ac_T, AUTOMATIC, SCCR_VAR_INIT) localB);

#endif
#endif

/*
 * Output and update for atomic system:
 *    '<S5>/FsftSCCR_b_FlyWMaxRqChrt'
 *    '<S6>/FsftSCCR_b_FlyWMinRqChrt'
 */
#if Rte_SysCon_Variant_SCCR_3

static FUNC(void, SCCR_CODE_LOCAL) SCCR_ac_FsftSCCR_b_FlyWMaxRqChrt(P2VAR
    (B_FsftSCCR_b_FlyWMaxRqChrt_SCCR_ac_T, AUTOMATIC, SCCR_VAR_INIT) localB)
{
    /* Chart: '<S5>/FsftSCCR_b_FlyWMaxRqChrt' */
    /* Gateway: FsftSCCR_b_FlyWMaxRq/FsftSCCR_b_FlyWMaxRqChrt */
    /* During: FsftSCCR_b_FlyWMaxRq/FsftSCCR_b_FlyWMaxRqChrt */
    /* Entry Internal: FsftSCCR_b_FlyWMaxRq/FsftSCCR_b_FlyWMaxRqChrt */
    /* Transition: '<S37>:2' */
    localB->LeSCCR_b_FlyWMaxRq_FA_out = true;
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) SCCR_FastTEF1(void) /* Explicit Task: FastTEF1 */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_VeSCCI_M_FrntAxlRq_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_VeSCCI_M_RrAxlRq_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_VeSCCI_M_FrntAxlOLMax_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_VeSCCI_M_FrntAxlOLMin_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_VeSCCI_M_RrAxlOLMax_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_VeSCCI_M_RrAxlOLMin_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_VeSCCI_M_FrntAxlCLMax_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_VeSCCI_M_FrntAxlCLMin_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_VeSCCI_M_RrAxlCLMax_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_VeSCCI_M_RrAxlCLMin_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_VeSCCI_b_FrntAxlMaxRq_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_VeSCCI_b_FrntAxlMinRq_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_VeSCCI_b_FrntAxlMaxRqFA_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_VeSCCI_b_FrntAxlMinRqFA_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_VeSCCI_b_FrntAxlTqRqFA_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_VeSCCI_b_RrAxlMaxRq_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_VeSCCI_b_RrAxlMaxRqFA_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_VeSCCI_b_RrAxlMinRqFA_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_VeSCCI_b_RrAxlTqRqFA_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_VeSCCI_b_RrAxlMinRq_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_1 && Rte_SysCon_Variant_SCCR_3

    boolean rtb_TmpLatchAtVeSCCI_b_DsblAEMDPGainFrnt;

#endif

#if Rte_SysCon_Variant_SCCR_1 && Rte_SysCon_Variant_SCCR_3

    boolean rtb_TmpLatchAtVeSCCI_b_DsblAEMDPGainRr_r;

#endif

#if Rte_SysCon_Variant_SCCR_3

    TePLTR_e_EPBHoldSts rtb_VeSCCI_e_EPBHoldSts_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_Logical1_a;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_Switch1_p;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_Logical_i;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_Logical_ls;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_Switch_m;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_Abs1;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_Sum2_d;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_Gain1[2];

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 Switch3;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 Switch2;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 Switch17;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 Switch18;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 Switch13;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 Switch14_l;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 Switch52;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 Switch19;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 Switch20;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 Switch15;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 Switch16;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean Switch53;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean Switch50;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean Switch54;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean Switch51;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean Switch55;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean Switch9;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean Switch10;

#endif

#if Rte_SysCon_Variant_SCCR_3

    sint32 i;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_l;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 TmpSignalConversionAtTmpVM_FcnCallSub_es;

#endif

#if Rte_SysCon_Variant_SCCR_3

    TePLTR_e_EPBHoldSts tmp;

#endif

    /* Outport: '<Root>/VeSCCR_b_OutputTorqueLimit_CAN_FA' incorporates:
     *  Inport: '<S62>/VeSCCI_b_Output_Torque_Lim_FA'
     *  Merge: '<Root>/VeSCCR_b_Output_Torque_Limit_FA_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
#if Rte_SysCon_Variant_SCCR_3

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF1' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VePLTR_e_EPBHoldSts'
     */
    (void)Rte_Read_VePLTR_e_EPBHoldSts_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ev);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_FrntAxlMax_OL'
     */
    (void)Rte_Read_VeLLDR_M_FrntAxlMax_OL_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_FrntAxlMin_OL'
     */
    (void)Rte_Read_VeLLDR_M_FrntAxlMin_OL_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_g4);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_RrAxlMax_OL'
     */
    (void)Rte_Read_VeLLDR_M_RrAxlMax_OL_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_n3);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_RrAxlMin_OL'
     */
    (void)Rte_Read_VeLLDR_M_RrAxlMin_OL_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_r_RipAWD'
     */
    (void)Rte_Read_VeLLDR_r_RipAWD_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_py);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_r_RipRegen'
     */
    (void)Rte_Read_VeLLDR_r_RipRegen_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fm);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_b_PerfAWDFlag'
     */
    (void)Rte_Read_VeLLDR_b_PerfAWDFlag_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_nwh);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_b_ZeroTrqAllwd'
     */
    (void)Rte_Read_VeLLDR_b_ZeroTrqAllwd_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_io);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_FrntAxlStrtgcMax_OL'
     */
    (void)Rte_Read_VeLLDR_M_FrntAxlStrtgcMax_OL_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gy);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_RrAxlStrtgcMax_OL'
     */
    (void)Rte_Read_VeLLDR_M_RrAxlStrtgcMax_OL_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_FrntAxlStrtgcMin_OL'
     */
    (void)Rte_Read_VeLLDR_M_FrntAxlStrtgcMin_OL_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pl);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_RrAxlStrtgcMin_OL'
     */
    (void)Rte_Read_VeLLDR_M_RrAxlStrtgcMin_OL_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ij);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_FrntAxlTactFastMax_OL'
     */
    (void)Rte_Read_VeLLDR_M_FrntAxlTactFastMax_OL_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_RrAxlTactFastMax_OL'
     */
    (void)Rte_Read_VeLLDR_M_RrAxlTactFastMax_OL_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mw);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_FrntAxlTactFastMin_OL'
     */
    (void)Rte_Read_VeLLDR_M_FrntAxlTactFastMin_OL_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_RrAxlTactFastMin_OL'
     */
    (void)Rte_Read_VeLLDR_M_RrAxlTactFastMin_OL_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_FrntAxlTactSlowMax_OL'
     */
    (void)Rte_Read_VeLLDR_M_FrntAxlTactSlowMax_OL_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mr);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_RrAxlTactSlowMax_OL'
     */
    (void)Rte_Read_VeLLDR_M_RrAxlTactSlowMax_OL_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_p5);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_FrntAxlTactSlowMin_OL'
     */
    (void)Rte_Read_VeLLDR_M_FrntAxlTactSlowMin_OL_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mk);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_RrAxlTactSlowMin_OL'
     */
    (void)Rte_Read_VeLLDR_M_RrAxlTactSlowMin_OL_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_c);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_FrntAxlAdhMax'
     */
    (void)Rte_Read_VeLLDR_M_FrntAxlAdhMax_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_RrAxlAdhMax'
     */
    (void)Rte_Read_VeLLDR_M_RrAxlAdhMax_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nu);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_FrntAxlAdhMin'
     */
    (void)Rte_Read_VeLLDR_M_FrntAxlAdhMin_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mt);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_RrAxlAdhMin'
     */
    (void)Rte_Read_VeLLDR_M_RrAxlAdhMin_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bf);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_FrntAxlEffMax'
     */
    (void)Rte_Read_VeLLDR_M_FrntAxlEffMax_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bd);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_RrAxlEffMax'
     */
    (void)Rte_Read_VeLLDR_M_RrAxlEffMax_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_g2);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_FrntAxlEffMin'
     */
    (void)Rte_Read_VeLLDR_M_FrntAxlEffMin_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeLLDR_M_RrAxlEffMin'
     */
    (void)Rte_Read_VeLLDR_M_RrAxlEffMin_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bb);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    TmpSignalConversionAtTmpVM_FcnCallSubs_l =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_M_FrntAxlTrqEst_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_es =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_M_RrAxlTrqEst_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeATRR_M_OutputTorqReqImmedHTDR'
     */
    (void)Rte_Read_VeATRR_M_OutputTorqReqImmedHTDR_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pd);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ea);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */
#if Rte_SysCon_Variant_SCCR_1 && Rte_SysCon_Variant_SCCR_3

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Merge: '<Root>/Merge_22'
     */
    SCCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_b_DsblAEMDPGainFrnt_write_IRV();

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Merge: '<Root>/Merge_24'
     */
    SCCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_g =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_b_DsblAEMDPGainRr_write_IRV();

#elif !Rte_SysCon_Variant_SCCR_1 && Rte_SysCon_Variant_SCCR_3

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */
    SCCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy = false;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' */
    SCCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_g = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeCSVR_v_CanSigVehSpd'
     */
    (void)Rte_Read_VeCSVR_v_CanSigVehSpd_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_aa);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeCSVR_b_CanSigVehSpd_FA'
     */
    (void)Rte_Read_VeCSVR_b_CanSigVehSpd_FA_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_eu);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VePLTR_phi_LwsAngle'
     */
    (void)Rte_Read_VePLTR_phi_LwsAngle_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_d2);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeCSVR_n_WhlSpdLHF'
     */
    (void)Rte_Read_VeCSVR_n_WhlSpdLHF_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeCSVR_n_WhlSpdLHR'
     */
    (void)Rte_Read_VeCSVR_n_WhlSpdLHR_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gt);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeCSVR_n_WhlSpdRHF'
     */
    (void)Rte_Read_VeCSVR_n_WhlSpdRHF_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c4);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeCSVR_n_WhlSpdRHR'
     */
    (void)Rte_Read_VeCSVR_n_WhlSpdRHR_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ip);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeCSVR_b_WhlSpdLHF_FA'
     */
    (void)Rte_Read_VeCSVR_b_WhlSpdLHF_FA_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeCSVR_b_WhlSpdLHR_FA'
     */
    (void)Rte_Read_VeCSVR_b_WhlSpdLHR_FA_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_i1);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeCSVR_b_WhlSpdRHF_FA'
     */
    (void)Rte_Read_VeCSVR_b_WhlSpdRHF_FA_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dq);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeCSVR_b_WhlSpdRHR_FA'
     */
    (void)Rte_Read_VeCSVR_b_WhlSpdRHR_FA_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cr);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeFWDR_M_FricTrqClutch'
     */
    (void)Rte_Read_VeFWDR_M_FricTrqClutch_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fg);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeAXLR_M_OutTorqReqModHH_Axle'
     */
    (void)Rte_Read_VeAXLR_M_OutTorqReqModHH_Axle_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ow);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100' incorporates:
     *  Inport: '<Root>/VeSRAR_e_LoCHCP_BSM_CANC'
     */
    (void)Rte_Read_VeSRAR_e_LoCHCP_BSM_CANC_Value
        (&SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nx);

    /* Outputs for Function Call SubSystem: '<Root>/SCCR_FastTEF1' */
    /* SignalConversion generated from: '<S30>/VeSCCI_b_FrntAxlMaxRq_read' incorporates:
     *  Merge: '<Root>/Merge_34'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_b_FrntAxlMaxRq_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_b_FrntAxlMaxRq_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_b_FrntAxlMinRq_read' incorporates:
     *  Merge: '<Root>/Merge_49'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_b_FrntAxlMinRq_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_b_FrntAxlMinRq_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlRq_read' incorporates:
     *  Merge: '<Root>/Merge_12'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_M_FrntAxlRq_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_M_FrntAxlRq_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlRq_read' incorporates:
     *  Merge: '<Root>/Merge_1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_M_RrAxlRq_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_M_RrAxlRq_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_b_FrntAxlMaxRqFA_read' incorporates:
     *  Merge: '<Root>/Merge_2_Irv'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_b_FrntAxlMaxRqFA_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_b_FrntAxlMaxRqFA_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_b_FrntAxlMinRqFA_read' incorporates:
     *  Merge: '<Root>/Merge_4_Irv'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_b_FrntAxlMinRqFA_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_b_FrntAxlMinRqFA_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_b_FrntAxlTqRqFA_read' incorporates:
     *  Merge: '<Root>/Merge_51'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_b_FrntAxlTqRqFA_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_b_FrntAxlTqRqFA_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_b_RrAxlMaxRq_read' incorporates:
     *  Merge: '<Root>/Merge_23'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_b_RrAxlMaxRq_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_b_RrAxlMaxRq_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_b_RrAxlMaxRqFA_read' incorporates:
     *  Merge: '<Root>/Merge_52_Irv'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_b_RrAxlMaxRqFA_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_b_RrAxlMaxRqFA_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_b_RrAxlMinRqFA_read' incorporates:
     *  Merge: '<Root>/Merge_3_Irv'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_b_RrAxlMinRqFA_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_b_RrAxlMinRqFA_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_b_RrAxlTqRqFA_read' incorporates:
     *  Merge: '<Root>/Merge_50'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_b_RrAxlTqRqFA_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_b_RrAxlTqRqFA_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_b_RrAxlMinRq_read' incorporates:
     *  Merge: '<Root>/Merge_45'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_b_RrAxlMinRq_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_b_RrAxlMinRq_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_e_EPBHoldSts_read' incorporates:
     *  Merge: '<Root>/Merge_9'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_e_EPBHoldSts_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_e_EPBHoldSts_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlOLMax_read' incorporates:
     *  Merge: '<Root>/Merge_10_Irv'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_M_FrntAxlOLMax_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_M_FrntAxlOLMax_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlOLMin_read' incorporates:
     *  Merge: '<Root>/Merge_11_Irv'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_M_FrntAxlOLMin_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_M_FrntAxlOLMin_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlOLMax_read' incorporates:
     *  Merge: '<Root>/Merge_13_Irv'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_M_RrAxlOLMax_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_M_RrAxlOLMax_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlOLMin_read' incorporates:
     *  Merge: '<Root>/Merge_14_Irv'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_M_RrAxlOLMin_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_M_RrAxlOLMin_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlCLMax_read' incorporates:
     *  Merge: '<Root>/Merge_15_Irv'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_M_FrntAxlCLMax_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_M_FrntAxlCLMax_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlCLMin_read' incorporates:
     *  Merge: '<Root>/Merge_16_Irv'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_M_FrntAxlCLMin_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_M_FrntAxlCLMin_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlCLMax_read' incorporates:
     *  Merge: '<Root>/Merge_17_Irv'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_M_RrAxlCLMax_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_M_RrAxlCLMax_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlCLMin_read' incorporates:
     *  Merge: '<Root>/Merge_18_Irv'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    rtb_VeSCCI_M_RrAxlCLMin_write_IRV =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCI_M_RrAxlCLMin_write_IRV();

    /* SignalConversion generated from: '<S30>/VeSCCI_b_DsblAEMDPGainFrnt_read' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_DsblAEMDPGainRr_read'
     */
#if Rte_SysCon_Variant_SCCR_1

    /* SignalConversion generated from: '<S30>/VeSCCI_b_DsblAEMDPGainFrnt_read' */
    rtb_TmpLatchAtVeSCCI_b_DsblAEMDPGainFrnt =
        SCCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy;

    /* SignalConversion generated from: '<S30>/VeSCCI_b_DsblAEMDPGainRr_read' */
    rtb_TmpLatchAtVeSCCI_b_DsblAEMDPGainRr_r =
        SCCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_g;

#endif

    /* End of SignalConversion generated from: '<S30>/VeSCCI_b_DsblAEMDPGainFrnt_read' */

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCI_OvrrdInputs'
     */
    /* Switch: '<S63>/Switch13' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S63>/Constant Value5'
     *  Selector: '<S63>/Selector5'
     */
    if (KaSCCR_b_RqOvrdEnbl[(6)])
    {
        /* Switch: '<S63>/Switch13' incorporates:
         *  Constant: '<S176>/Calib'
         */
        Switch13 = KeSCCR_M_FrntAxlOLMaxOvrdVal;
    }
    else
    {
        /* Switch: '<S63>/Switch13' */
        Switch13 = SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g;
    }

    /* End of Switch: '<S63>/Switch13' */

    /* Switch: '<S63>/Switch14' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S63>/Constant Value6'
     *  Selector: '<S63>/Selector8'
     */
    if (KaSCCR_b_RqOvrdEnbl[(7)])
    {
        /* Switch: '<S63>/Switch14' incorporates:
         *  Constant: '<S177>/Calib'
         */
        Switch14_l = KeSCCR_M_FrntAxlOLMinOvrdVal;
    }
    else
    {
        /* Switch: '<S63>/Switch14' */
        Switch14_l = SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_g4;
    }

    /* End of Switch: '<S63>/Switch14' */

    /* Switch: '<S63>/Switch15' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S63>/Constant Value9'
     *  Selector: '<S63>/Selector9'
     */
    if (KaSCCR_b_RqOvrdEnbl[(8)])
    {
        /* Switch: '<S63>/Switch15' incorporates:
         *  Constant: '<S199>/Calib'
         */
        Switch15 = KeSCCR_M_RrtAxlOLMaxOvrdVal;
    }
    else
    {
        /* Switch: '<S63>/Switch15' */
        Switch15 = SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_n3;
    }

    /* End of Switch: '<S63>/Switch15' */

    /* Switch: '<S63>/Switch16' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S63>/Constant Value10'
     *  Selector: '<S63>/Selector10'
     */
    if (KaSCCR_b_RqOvrdEnbl[(9)])
    {
        /* Switch: '<S63>/Switch16' incorporates:
         *  Constant: '<S190>/Calib'
         */
        Switch16 = KeSCCR_M_RrAxlOLMinOvrdVal;
    }
    else
    {
        /* Switch: '<S63>/Switch16' */
        Switch16 = SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f;
    }

    /* End of Switch: '<S63>/Switch16' */

    /* Switch: '<S63>/Switch17' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S63>/Constant Value12'
     *  Selector: '<S63>/Selector12'
     */
    if (KaSCCR_b_RqOvrdEnbl[(10)])
    {
        /* Switch: '<S63>/Switch17' incorporates:
         *  Constant: '<S172>/Calib'
         */
        Switch17 = KeSCCR_M_FrntAxlCLMaxOvrdVal;
    }
    else
    {
        /* Switch: '<S63>/Switch17' incorporates:
         *  Merge: '<Root>/VeSCCR_M_FrntAxlMax_CL_IRV_Merge'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
         */
        Switch17 = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_M_FrntAxlMax_CL_write_IRV();
    }

    /* End of Switch: '<S63>/Switch17' */

    /* Switch: '<S63>/Switch18' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S63>/Constant Value13'
     *  Selector: '<S63>/Selector13'
     */
    if (KaSCCR_b_RqOvrdEnbl[(11)])
    {
        /* Switch: '<S63>/Switch18' incorporates:
         *  Constant: '<S173>/Calib'
         */
        Switch18 = KeSCCR_M_FrntAxlCLMinOvrdVal;
    }
    else
    {
        /* Switch: '<S63>/Switch18' incorporates:
         *  Merge: '<Root>/VeSCCR_M_FrntAxlMin_CL_IRV_Merge'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
         */
        Switch18 = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_M_FrntAxlMin_CL_write_IRV();
    }

    /* End of Switch: '<S63>/Switch18' */

    /* Switch: '<S63>/Switch19' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S63>/Constant Value17'
     *  Selector: '<S63>/Selector16'
     */
    if (KaSCCR_b_RqOvrdEnbl[(12)])
    {
        /* Switch: '<S63>/Switch19' incorporates:
         *  Constant: '<S198>/Calib'
         */
        Switch19 = KeSCCR_M_RrtAxlCLMaxOvrdVal;
    }
    else
    {
        /* Switch: '<S63>/Switch19' incorporates:
         *  Merge: '<Root>/VeSCCR_M_RrAxlMax_CL_IRV_Merge'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
         */
        Switch19 = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_M_RrAxlMax_CL_write_IRV();
    }

    /* End of Switch: '<S63>/Switch19' */

    /* Switch: '<S63>/Switch20' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S63>/Constant Value11'
     *  Selector: '<S63>/Selector11'
     */
    if (KaSCCR_b_RqOvrdEnbl[(13)])
    {
        /* Switch: '<S63>/Switch20' incorporates:
         *  Constant: '<S187>/Calib'
         */
        Switch20 = KeSCCR_M_RrAxlCLMinOvrdVal;
    }
    else
    {
        /* Switch: '<S63>/Switch20' incorporates:
         *  Merge: '<Root>/VeSCCR_M_RrAxlMin_CL_IRV_Merge'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
         */
        Switch20 = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_M_RrAxlMin_CL_write_IRV();
    }

    /* End of Switch: '<S63>/Switch20' */

    /* Switch: '<S63>/Switch10' incorporates:
     *  Constant: '<S168>/Calib'
     *  Constant: '<S63>/Constant Value15'
     *  Selector: '<S63>/Selector14'
     */
    if (KaSCCR_b_RqFAOvrdEnbl[(4)])
    {
        /* Switch: '<S63>/Switch10' incorporates:
         *  Constant: '<S232>/Calib'
         */
        Switch10 = KeSCCR_b_RrAxlMinRqFAOvrdVal;
    }
    else
    {
        /* Switch: '<S63>/Switch10' incorporates:
         *  Merge: '<Root>/Merge_62'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
         */
        Switch10 = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_RrAxlMinRqFA_write_IRV();
    }

    /* End of Switch: '<S63>/Switch10' */

    /* Switch: '<S63>/Switch50' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S246>/Calib'
     *  Constant: '<S63>/Constant Value7'
     *  Selector: '<S63>/Selector6'
     *  Switch: '<S63>/Switch'
     *  Switch: '<S63>/Switch51'
     *  Switch: '<S63>/Switch52'
     *  Switch: '<S63>/Switch53'
     *  Switch: '<S63>/Switch54'
     *  Switch: '<S63>/Switch55'
     */
    if (KeSCCR_b_FlyWheelDomain)
    {
        /* Switch: '<S63>/Switch50' incorporates:
         *  Merge: '<Root>/Merge_84'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
         */
        Switch50 = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_FlyWMaxRq_write_IRV();

        /* Switch: '<S63>/Switch51' incorporates:
         *  Merge: '<Root>/Merge_86'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
         */
        Switch51 = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_FlyWMinRq_write_IRV();

        /* Switch: '<S63>/Switch52' incorporates:
         *  Merge: '<Root>/Merge_82'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
         */
        Switch52 = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_M_FlyWRq_write_IRV();

        /* Switch: '<S63>/Switch53' incorporates:
         *  Merge: '<Root>/Merge_85'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
         */
        Switch53 = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_FlyWMaxRq_FA_write_IRV();

        /* Switch: '<S63>/Switch54' incorporates:
         *  Merge: '<Root>/Merge_87'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
         */
        Switch54 = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_FlyWMinRq_FA_write_IRV();

        /* Switch: '<S63>/Switch55' incorporates:
         *  Merge: '<Root>/Merge_83'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
         */
        Switch55 = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_FlyWRq_FA_write_IRV();
    }
    else
    {
        if (KaSCCR_b_RqOvrdEnbl[(0)])
        {
            /* Switch: '<S63>/Switch' incorporates:
             *  Constant: '<S212>/Calib'
             *  Switch: '<S63>/Switch50'
             */
            Switch50 = KeSCCR_b_FrntAxlMaxRqOvrdVal;
        }
        else
        {
            /* Switch: '<S63>/Switch50' incorporates:
             *  Merge: '<Root>/Merge_53'
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
             */
            Switch50 = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_FrntAxlMaxRq_write_IRV
                ();
        }

        /* Switch: '<S63>/Switch1' incorporates:
         *  Constant: '<S169>/Calib'
         *  Constant: '<S63>/Constant Value8'
         *  Selector: '<S63>/Selector7'
         */
        if (KaSCCR_b_RqOvrdEnbl[(1)])
        {
            /* Switch: '<S63>/Switch51' incorporates:
             *  Constant: '<S214>/Calib'
             */
            Switch51 = KeSCCR_b_FrntAxlMinRqOvrdVal;
        }
        else
        {
            /* Switch: '<S63>/Switch51' incorporates:
             *  Merge: '<Root>/Merge_55'
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
             */
            Switch51 = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_FrntAxlMinRq_write_IRV
                ();
        }

        /* End of Switch: '<S63>/Switch1' */

        /* Switch: '<S63>/Switch2' incorporates:
         *  Constant: '<S169>/Calib'
         *  Constant: '<S63>/Constant Value1'
         *  Selector: '<S63>/Selector1'
         */
        if (KaSCCR_b_RqOvrdEnbl[(2)])
        {
            /* Switch: '<S63>/Switch52' incorporates:
             *  Constant: '<S178>/Calib'
             */
            Switch52 = KeSCCR_M_FrntAxlRqTorqOvrdVal;
        }
        else
        {
            /* Switch: '<S63>/Switch52' incorporates:
             *  Merge: '<Root>/Merge_57'
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
             */
            Switch52 = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_M_FrntAxlRq_write_IRV();
        }

        /* End of Switch: '<S63>/Switch2' */

        /* Switch: '<S63>/Switch6' incorporates:
         *  Constant: '<S168>/Calib'
         *  Constant: '<S63>/Constant Value22'
         *  Selector: '<S63>/Selector21'
         */
        if (KaSCCR_b_RqFAOvrdEnbl[(0)])
        {
            /* Switch: '<S63>/Switch53' incorporates:
             *  Constant: '<S211>/Calib'
             */
            Switch53 = KeSCCR_b_FrntAxlMaxRqFAOvrdVal;
        }
        else
        {
            /* Switch: '<S63>/Switch53' incorporates:
             *  Merge: '<Root>/Merge_54'
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
             */
            Switch53 =
                Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_FrntAxlMaxRqFA_write_IRV();
        }

        /* End of Switch: '<S63>/Switch6' */

        /* Switch: '<S63>/Switch7' incorporates:
         *  Constant: '<S168>/Calib'
         *  Constant: '<S63>/Constant Value23'
         *  Selector: '<S63>/Selector22'
         */
        if (KaSCCR_b_RqFAOvrdEnbl[(1)])
        {
            /* Switch: '<S63>/Switch54' incorporates:
             *  Constant: '<S213>/Calib'
             */
            Switch54 = KeSCCR_b_FrntAxlMinRqFAOvrdVal;
        }
        else
        {
            /* Switch: '<S63>/Switch54' incorporates:
             *  Merge: '<Root>/Merge_56'
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
             */
            Switch54 =
                Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_FrntAxlMinRqFA_write_IRV();
        }

        /* End of Switch: '<S63>/Switch7' */

        /* Switch: '<S63>/Switch8' incorporates:
         *  Constant: '<S168>/Calib'
         *  Constant: '<S63>/Constant Value24'
         *  Selector: '<S63>/Selector23'
         */
        if (KaSCCR_b_RqFAOvrdEnbl[(2)])
        {
            /* Switch: '<S63>/Switch55' incorporates:
             *  Constant: '<S221>/Calib'
             */
            Switch55 = KeSCCR_b_FrntAxlTqRqFAOvrdVal;
        }
        else
        {
            /* Switch: '<S63>/Switch55' incorporates:
             *  Merge: '<Root>/Merge_58'
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
             */
            Switch55 = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_FrntAxlRqFA_write_IRV();
        }

        /* End of Switch: '<S63>/Switch8' */
    }

    /* End of Switch: '<S63>/Switch50' */

    /* Switch: '<S63>/Switch9' incorporates:
     *  Constant: '<S168>/Calib'
     *  Constant: '<S63>/Constant Value14'
     *  Selector: '<S63>/Selector24'
     */
    if (KaSCCR_b_RqFAOvrdEnbl[(3)])
    {
        /* Switch: '<S63>/Switch9' incorporates:
         *  Constant: '<S230>/Calib'
         */
        Switch9 = KeSCCR_b_RrAxlMaxRqFAOvrdVal;
    }
    else
    {
        /* Switch: '<S63>/Switch9' incorporates:
         *  Merge: '<Root>/Merge_60'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
         */
        Switch9 = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_RrAxlMaxRqFA_write_IRV();
    }

    /* End of Switch: '<S63>/Switch9' */

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCC_AxlTrqArbtr'
     */
    /* Logic: '<S71>/Logical1' */
    rtb_Logical1_a = ((rtb_VeSCCI_b_FrntAxlMaxRqFA_write_IRV ||
                       rtb_VeSCCI_b_FrntAxlMinRqFA_write_IRV) ||
                      rtb_VeSCCI_b_FrntAxlTqRqFA_write_IRV);

    /* Logic: '<S72>/Logical5' incorporates:
     *  Logic: '<S72>/Logical2'
     */
    rtb_Switch_m = !rtb_Logical1_a;

    /* Switch: '<S101>/Switch1' incorporates:
     *  Logic: '<S72>/Logical'
     *  Logic: '<S72>/Logical5'
     *  Logic: '<S72>/Logical6'
     */
    rtb_Switch1_p = ((rtb_Switch_m && rtb_VeSCCI_b_FrntAxlMaxRq_write_IRV) &&
                     (!rtb_VeSCCI_b_FrntAxlMinRq_write_IRV));

    /* If: '<S72>/If' */
    if (rtb_Switch1_p)
    {
        /* Outputs for IfAction SubSystem: '<S62>/FrontAxle_MaxESC' incorporates:
         *  ActionPort: '<S73>/Action Port'
         */
        /* Merge: '<S62>/Merge5' incorporates:
         *  Constant: '<S73>/FALSE Constant'
         *  SignalConversion generated from: '<S73>/FilterStatus'
         */
        SCCR_ac_B.Merge5 = false;

        /* Merge: '<S62>/Merge1' incorporates:
         *  Inport: '<S73>/FrntAxl_Rq'
         */
        SCCR_ac_B.Merge1 = rtb_VeSCCI_M_FrntAxlRq_write_IRV;

        /* Merge: '<S62>/Merge' incorporates:
         *  Constant: '<S73>/Constant Value'
         *  SignalConversion generated from: '<S73>/FrntAxlMinRq'
         */
        SCCR_ac_B.Merge = (-100000.0F);

        /* Merge: '<S62>/Merge6' incorporates:
         *  Constant: '<S73>/TRUE Constant'
         *  SignalConversion generated from: '<S73>/FrntAxlMax_Rq_Flag'
         */
        SCCR_ac_B.Merge6 = true;

        /* Merge: '<S62>/Merge7' incorporates:
         *  Constant: '<S73>/FALSE Constant2'
         *  SignalConversion generated from: '<S73>/FrntAxlMin_Rq_Flag'
         */
        SCCR_ac_B.Merge7 = false;

        /* End of Outputs for SubSystem: '<S62>/FrontAxle_MaxESC' */
    }

    /* End of If: '<S72>/If' */

    /* Logic: '<S62>/Logical' incorporates:
     *  Logic: '<S72>/Logical1'
     *  Logic: '<S72>/Logical3'
     */
    rtb_Logical_i = ((rtb_Switch_m && (!rtb_VeSCCI_b_FrntAxlMaxRq_write_IRV)) &&
                     rtb_VeSCCI_b_FrntAxlMinRq_write_IRV);

    /* If: '<S72>/If2' */
    if (rtb_Logical_i)
    {
        /* Outputs for IfAction SubSystem: '<S62>/FrontAxle_MinESC' incorporates:
         *  ActionPort: '<S74>/Action Port'
         */
        /* Merge: '<S62>/Merge5' incorporates:
         *  Constant: '<S74>/FALSE Constant'
         *  SignalConversion generated from: '<S74>/FilterStatus'
         */
        SCCR_ac_B.Merge5 = false;

        /* Merge: '<S62>/Merge1' incorporates:
         *  Constant: '<S74>/Constant Value'
         *  SignalConversion generated from: '<S74>/FrntAxlMaxRq'
         */
        SCCR_ac_B.Merge1 = 100000.0F;

        /* Merge: '<S62>/Merge' incorporates:
         *  Inport: '<S74>/FrntAxl_Rq'
         */
        SCCR_ac_B.Merge = rtb_VeSCCI_M_FrntAxlRq_write_IRV;

        /* Merge: '<S62>/Merge6' incorporates:
         *  Constant: '<S74>/FALSE Constant1'
         *  SignalConversion generated from: '<S74>/FrntAxlMax_Rq_Flag'
         */
        SCCR_ac_B.Merge6 = false;

        /* Merge: '<S62>/Merge7' incorporates:
         *  Constant: '<S74>/TRUE Constant'
         *  SignalConversion generated from: '<S74>/FrntAxlMin_Rq_Flag'
         */
        SCCR_ac_B.Merge7 = true;

        /* End of Outputs for SubSystem: '<S62>/FrontAxle_MinESC' */
    }

    /* End of If: '<S72>/If2' */

    /* If: '<S72>/If1' incorporates:
     *  Logic: '<S72>/Logical4'
     */
    if ((!rtb_Switch1_p) && (!rtb_Logical_i))
    {
        /* Outputs for IfAction SubSystem: '<S62>/FrontAxle_NoESC' incorporates:
         *  ActionPort: '<S75>/Action Port'
         */
        /* Merge: '<S62>/Merge5' incorporates:
         *  Constant: '<S75>/TRUE Constant'
         *  SignalConversion generated from: '<S75>/FilterStatus'
         */
        SCCR_ac_B.Merge5 = true;

        /* SignalConversion generated from: '<S75>/FrntAxlFilterTarget' incorporates:
         *  Constant: '<S140>/Calib'
         *  Constant: '<S141>/Calib'
         */
        SCCR_ac_B.OutportBufferForFrntAxlFilterTarget[0] =
            KeSCCR_M_FrntAxlMaxRqLim;
        SCCR_ac_B.OutportBufferForFrntAxlFilterTarget[1] =
            KeSCCR_M_FrntAxlMinRqLim;

        /* Merge: '<S62>/Merge1' incorporates:
         *  Constant: '<S140>/Calib'
         *  Gain: '<S142>/Gain'
         */
        SCCR_ac_B.Merge1 = 1.0F * KeSCCR_M_FrntAxlMaxRqLim;

        /* Merge: '<S62>/Merge' incorporates:
         *  Constant: '<S141>/Calib'
         *  Gain: '<S143>/Gain'
         */
        SCCR_ac_B.Merge = 1.0F * KeSCCR_M_FrntAxlMinRqLim;

        /* Merge: '<S62>/Merge6' incorporates:
         *  Constant: '<S75>/FALSE Constant1'
         *  SignalConversion generated from: '<S75>/FrntAxlMax_Rq_Flag'
         */
        SCCR_ac_B.Merge6 = false;

        /* Merge: '<S62>/Merge7' incorporates:
         *  Constant: '<S75>/FALSE Constant2'
         *  SignalConversion generated from: '<S75>/FrntAxlMin_Rq_Flag'
         */
        SCCR_ac_B.Merge7 = false;

        /* End of Outputs for SubSystem: '<S62>/FrontAxle_NoESC' */
    }

    /* End of If: '<S72>/If1' */

    /* Switch: '<S69>/Switch1' incorporates:
     *  Constant: '<S118>/Calib'
     *  Constant: '<S119>/Calib'
     *  MinMax: '<S69>/MinMax'
     *  MinMax: '<S69>/MinMax1'
     *  RelationalOperator: '<S123>/Relational Operator1'
     *  Sum: '<S117>/Sum3'
     *  UnitDelay: '<S69>/Unit Delay1'
     */
    if (SCCR_ac_B.Merge5)
    {
        /* Outputs for Atomic SubSystem: '<S69>/GradientLimiter1' */
        /* Outputs for Atomic SubSystem: '<S117>/Limiter' */
        for (i = 0; i < 2; i++)
        {
            /* Lookup_n-D: '<S120>/Vector' incorporates:
             *  Abs: '<S69>/Abs1'
             *  Sum: '<S69>/Sum2'
             *  UnitDelay: '<S69>/Unit Delay1'
             */
            Switch2 = look1_iflf_binlca_16a(fabsf(SCCR_ac_DW.UnitDelay1_DSTATE[i]
                - TmpSignalConversionAtTmpVM_FcnCallSubs_l), ((const float32 *)
                &(KxSCCR_k_FrntAxlRmpRt[0])), ((const float32 *)
                &(KtSCCR_k_FrntAxlRmpRt[0])), 2U);

            /* Gain: '<S69>/Gain1' */
            Switch3 = (-1.0F) * Switch2;

            /* Sum: '<S117>/Sum2' incorporates:
             *  UnitDelay: '<S69>/Unit Delay1'
             */
            rtb_Abs1 = SCCR_ac_B.OutportBufferForFrntAxlFilterTarget[i] -
                SCCR_ac_DW.UnitDelay1_DSTATE[i];

            /* Switch: '<S123>/Switch1' incorporates:
             *  RelationalOperator: '<S123>/Relational Operator'
             */
            if (Switch2 < rtb_Abs1)
            {
                /* Switch: '<S123>/Switch1' */
                rtb_Abs1 = Switch2;
            }

            /* End of Switch: '<S123>/Switch1' */

            /* Switch: '<S123>/Switch' incorporates:
             *  RelationalOperator: '<S123>/Relational Operator1'
             */
            if (rtb_Abs1 > Switch3)
            {
                Switch3 = rtb_Abs1;
            }

            /* End of Switch: '<S123>/Switch' */
            SCCR_ac_DW.UnitDelay1_DSTATE[i] += Switch3;
        }

        /* End of Outputs for SubSystem: '<S117>/Limiter' */
        /* End of Outputs for SubSystem: '<S69>/GradientLimiter1' */
    }
    else
    {
        SCCR_ac_DW.UnitDelay1_DSTATE[0] = fmaxf(SCCR_ac_B.Merge1,
            KeSCCR_M_FrntAxlMaxLim);
        SCCR_ac_DW.UnitDelay1_DSTATE[1] = fminf(SCCR_ac_B.Merge,
            KeSCCR_M_FrntAxlMinLim);
    }

    /* End of Switch: '<S69>/Switch1' */

    /* Logic: '<S62>/Logical' incorporates:
     *  Constant: '<S66>/Constant'
     *  Constant: '<S80>/Calib'
     *  RelationalOperator: '<S62>/Comparison5'
     *  SignalConversion generated from: '<S30>/VeSCCI_e_EPBHoldSts_read'
     */
    rtb_Logical_i = ((KeSCCR_b_AlwEPBActvP4zeroTrq) &&
                     (rtb_VeSCCI_e_EPBHoldSts_write_IRV !=
                      CePLTR_e_EPBHoldSts_REL));

    /* Switch: '<S101>/Switch1' incorporates:
     *  Logic: '<S62>/Logical2'
     */
    rtb_Switch1_p = ((rtb_VeSCCI_b_RrAxlMaxRqFA_write_IRV ||
                      rtb_VeSCCI_b_RrAxlMinRqFA_write_IRV) ||
                     rtb_VeSCCI_b_RrAxlTqRqFA_write_IRV);

    /* Logic: '<S62>/Logical3' */
#if !Rte_SysCon_Variant_SCCR_1

    SCCR_ac_B.VariantMerge_For_Variant_Source_Variant_[0] = ((SCCR_ac_B.Merge6) ||
        (SCCR_ac_B.Merge7));

#endif

    /* End of Logic: '<S62>/Logical3' */

    /* If: '<S82>/IfRr' */
    if (rtb_Logical_i)
    {
        /* Outputs for IfAction SubSystem: '<S62>/RearAxle_EPB_Actv' incorporates:
         *  ActionPort: '<S81>/Action Port'
         */
        /* Merge: '<S62>/Merge4' incorporates:
         *  Constant: '<S81>/FALSE Constant'
         *  SignalConversion generated from: '<S81>/FilterStatus'
         */
        SCCR_ac_B.Merge4 = false;

        /* Merge: '<S62>/Merge3' incorporates:
         *  Constant: '<S81>/Constant Value1'
         *  SignalConversion generated from: '<S81>/RrAxlMaxRq'
         */
        SCCR_ac_B.Merge3 = 0.0F;

        /* Merge: '<S62>/Merge2' incorporates:
         *  Constant: '<S81>/Constant Value'
         *  SignalConversion generated from: '<S81>/RrAxlMinRq'
         */
        SCCR_ac_B.Merge2 = 0.0F;

        /* Merge: '<S62>/Merge8' incorporates:
         *  Constant: '<S81>/FALSE Constant1'
         *  SignalConversion generated from: '<S81>/RrAxlMax_Rq_Flag'
         */
        SCCR_ac_B.Merge8 = false;

        /* Merge: '<S62>/Merge9' incorporates:
         *  Constant: '<S81>/FALSE Constant2'
         *  SignalConversion generated from: '<S81>/RrAxlMin_Rq_Flag'
         */
        SCCR_ac_B.Merge9 = false;

        /* End of Outputs for SubSystem: '<S62>/RearAxle_EPB_Actv' */
    }

    /* End of If: '<S82>/IfRr' */

    /* Logic: '<S82>/Logical7' incorporates:
     *  Logic: '<S82>/Logical3'
     */
    rtb_Switch_m = !rtb_Switch1_p;

    /* Logic: '<S82>/Logical' incorporates:
     *  Logic: '<S82>/Logical5'
     *  Logic: '<S82>/Logical6'
     *  Logic: '<S82>/Logical7'
     */
    rtb_Logical_ls = ((((!rtb_Logical_i) && rtb_Switch_m) &&
                       rtb_VeSCCI_b_RrAxlMaxRq_write_IRV) &&
                      (!rtb_VeSCCI_b_RrAxlMinRq_write_IRV));

    /* If: '<S82>/IfelseRr' */
    if (rtb_Logical_ls)
    {
        /* Outputs for IfAction SubSystem: '<S62>/RearAxle_MaxESC' incorporates:
         *  ActionPort: '<S83>/Action Port'
         */
        /* Merge: '<S62>/Merge4' incorporates:
         *  Constant: '<S83>/FALSE Constant'
         *  SignalConversion generated from: '<S83>/FilterStatus'
         */
        SCCR_ac_B.Merge4 = false;

        /* Merge: '<S62>/Merge3' incorporates:
         *  Inport: '<S83>/FrntAxl_Rq'
         */
        SCCR_ac_B.Merge3 = rtb_VeSCCI_M_RrAxlRq_write_IRV;

        /* Merge: '<S62>/Merge2' incorporates:
         *  Constant: '<S83>/Constant Value'
         *  SignalConversion generated from: '<S83>/RrAxlMinRq'
         */
        SCCR_ac_B.Merge2 = (-100000.0F);

        /* Merge: '<S62>/Merge8' incorporates:
         *  Constant: '<S83>/TRUE Constant'
         *  SignalConversion generated from: '<S83>/RrAxlMax_Rq_Flag'
         */
        SCCR_ac_B.Merge8 = true;

        /* Merge: '<S62>/Merge9' incorporates:
         *  Constant: '<S83>/FALSE Constant2'
         *  SignalConversion generated from: '<S83>/RrAxlMin_Rq_Flag'
         */
        SCCR_ac_B.Merge9 = false;

        /* End of Outputs for SubSystem: '<S62>/RearAxle_MaxESC' */
    }

    /* End of If: '<S82>/IfelseRr' */

    /* Switch: '<S101>/Switch' incorporates:
     *  Logic: '<S82>/Logical1'
     *  Logic: '<S82>/Logical2'
     *  Logic: '<S82>/Logical8'
     */
    rtb_Switch_m = ((((!rtb_Logical_i) && rtb_Switch_m) &&
                     (!rtb_VeSCCI_b_RrAxlMaxRq_write_IRV)) &&
                    rtb_VeSCCI_b_RrAxlMinRq_write_IRV);

    /* If: '<S82>/IfelseRr1' */
    if (rtb_Switch_m)
    {
        /* Outputs for IfAction SubSystem: '<S62>/RearAxle_MinESC' incorporates:
         *  ActionPort: '<S84>/Action Port'
         */
        /* Merge: '<S62>/Merge4' incorporates:
         *  Constant: '<S84>/FALSE Constant'
         *  SignalConversion generated from: '<S84>/FilterStatus'
         */
        SCCR_ac_B.Merge4 = false;

        /* Merge: '<S62>/Merge3' incorporates:
         *  Constant: '<S84>/Constant Value'
         *  SignalConversion generated from: '<S84>/RrAxlMaxRq'
         */
        SCCR_ac_B.Merge3 = 100000.0F;

        /* Merge: '<S62>/Merge2' incorporates:
         *  Inport: '<S84>/FrntAxl_Rq'
         */
        SCCR_ac_B.Merge2 = rtb_VeSCCI_M_RrAxlRq_write_IRV;

        /* Merge: '<S62>/Merge8' incorporates:
         *  Constant: '<S84>/FALSE Constant2'
         *  SignalConversion generated from: '<S84>/RrAxlMax_Rq_Flag'
         */
        SCCR_ac_B.Merge8 = false;

        /* Merge: '<S62>/Merge9' incorporates:
         *  Constant: '<S84>/TRUE Constant'
         *  SignalConversion generated from: '<S84>/RrAxlMin_Rq_Flag'
         */
        SCCR_ac_B.Merge9 = true;

        /* End of Outputs for SubSystem: '<S62>/RearAxle_MinESC' */
    }

    /* End of If: '<S82>/IfelseRr1' */

    /* If: '<S82>/elseRr' incorporates:
     *  Logic: '<S82>/Logical4'
     */
    if (((!rtb_Logical_i) && (!rtb_Logical_ls)) && (!rtb_Switch_m))
    {
        /* Outputs for IfAction SubSystem: '<S62>/RearAxle_NoESC' incorporates:
         *  ActionPort: '<S85>/Action Port'
         */
        /* Merge: '<S62>/Merge4' incorporates:
         *  Constant: '<S148>/Calib'
         *  SignalConversion generated from: '<S85>/FilterStatus'
         */
        SCCR_ac_B.Merge4 = KeSCCR_b_EnblRrAxlLimFilt;

        /* Lookup_n-D: '<S149>/Vector' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
         */
        SCCR_ac_B.Vector_i = look2_iflf_binlca_16a
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pd,
             SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ea, ((const float32
               *)&(KxSCCR_M_RrAxlMaxRqLim[0])), ((const float32 *)
              &(KySCCR_M_RrAxlMaxRqLim[0])), ((const float32 *)
              &(KtSCCR_M_RrAxlMaxRqLim[0])), (const uint32*)
             SCCR_ac_ConstP.pooled13, 5U);

        /* Lookup_n-D: '<S150>/Vector' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
         */
        SCCR_ac_B.Vector_c = look2_iflf_binlca_16a
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pd,
             SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ea, ((const float32
               *)&(KxSCCR_M_RrAxlMinRqLim[0])), ((const float32 *)
              &(KySCCR_M_RrAxlMinRqLim[0])), ((const float32 *)
              &(KtSCCR_M_RrAxlMinRqLim[0])), (const uint32*)
             SCCR_ac_ConstP.pooled13, 5U);

        /* Merge: '<S62>/Merge2' incorporates:
         *  Gain: '<S151>/Gain'
         */
        SCCR_ac_B.Merge2 = 1.0F * SCCR_ac_B.Vector_c;

        /* Merge: '<S62>/Merge3' incorporates:
         *  Gain: '<S152>/Gain'
         */
        SCCR_ac_B.Merge3 = 1.0F * SCCR_ac_B.Vector_i;

        /* Merge: '<S62>/Merge8' incorporates:
         *  Constant: '<S85>/FALSE Constant1'
         *  SignalConversion generated from: '<S85>/RrAxlMax_Rq_Flag'
         */
        SCCR_ac_B.Merge8 = false;

        /* Merge: '<S62>/Merge9' incorporates:
         *  Constant: '<S85>/FALSE Constant2'
         *  SignalConversion generated from: '<S85>/RrAxlMin_Rq_Flag'
         */
        SCCR_ac_B.Merge9 = false;

        /* End of Outputs for SubSystem: '<S62>/RearAxle_NoESC' */
    }

    /* End of If: '<S82>/elseRr' */

    /* Logic: '<S62>/Logical4' incorporates:
     *  Inport: '<S62>/VeSCCI_b_DsblAEMDPGainFrnt'
     *  Inport: '<S62>/VeSCCI_b_DsblAEMDPGainRr'
     */
#if !Rte_SysCon_Variant_SCCR_1

    SCCR_ac_B.VariantMerge_For_Variant_Source_Variant_[1] = ((SCCR_ac_B.Merge8) ||
        (SCCR_ac_B.Merge9));

#else

    SCCR_ac_B.VariantMerge_For_Variant_Source_Variant_[0] =
        rtb_TmpLatchAtVeSCCI_b_DsblAEMDPGainFrnt;
    SCCR_ac_B.VariantMerge_For_Variant_Source_Variant_[1] =
        rtb_TmpLatchAtVeSCCI_b_DsblAEMDPGainRr_r;

#endif

    /* End of Logic: '<S62>/Logical4' */

    /* Switch: '<S88>/Switch' incorporates:
     *  Constant: '<S158>/Calib'
     *  Constant: '<S159>/Calib'
     *  MinMax: '<S88>/MinMax2'
     *  MinMax: '<S88>/MinMax3'
     *  RelationalOperator: '<S163>/Relational Operator'
     *  RelationalOperator: '<S163>/Relational Operator1'
     *  Sum: '<S157>/Sum3'
     *  Switch: '<S163>/Switch1'
     *  UnitDelay: '<S88>/Unit Delay'
     */
    if (SCCR_ac_B.Merge4)
    {
        /* Outputs for Atomic SubSystem: '<S88>/GradientLimiter' */
        /* Sum: '<S157>/Sum2' incorporates:
         *  UnitDelay: '<S88>/Unit Delay'
         */
        rtb_Gain1[0] = SCCR_ac_B.Vector_i - SCCR_ac_DW.UnitDelay_DSTATE_b[0];
        rtb_Gain1[1] = SCCR_ac_B.Vector_c - SCCR_ac_DW.UnitDelay_DSTATE_b[1];

        /* Outputs for Atomic SubSystem: '<S157>/Limiter' */
        for (i = 0; i < 2; i++)
        {
            Switch3 = rtb_Gain1[i];

            /* Lookup_n-D: '<S160>/Vector' incorporates:
             *  Abs: '<S88>/Abs'
             *  RelationalOperator: '<S163>/Relational Operator'
             *  Sum: '<S88>/Sum1'
             *  UnitDelay: '<S88>/Unit Delay'
             */
            TmpSignalConversionAtTmpVM_FcnCallSubs_l = look1_iflf_binlca_16a
                (fabsf(SCCR_ac_DW.UnitDelay_DSTATE_b[i] -
                       TmpSignalConversionAtTmpVM_FcnCallSub_es), ((const
                   float32 *)&(KxSCCR_k_RrAxlRmpRt[0])), ((const float32 *)
                  &(KtSCCR_k_RrAxlRmpRt[0])), 2U);

            /* Gain: '<S88>/Gain' */
            Switch2 = (-1.0F) * TmpSignalConversionAtTmpVM_FcnCallSubs_l;

            /* Switch: '<S163>/Switch1' incorporates:
             *  RelationalOperator: '<S163>/Relational Operator'
             */
            if (TmpSignalConversionAtTmpVM_FcnCallSubs_l < Switch3)
            {
                /* Switch: '<S163>/Switch1' */
                Switch3 = TmpSignalConversionAtTmpVM_FcnCallSubs_l;
            }

            /* End of Switch: '<S163>/Switch1' */

            /* Switch: '<S163>/Switch' incorporates:
             *  RelationalOperator: '<S163>/Relational Operator1'
             */
            if (Switch3 > Switch2)
            {
                Switch2 = Switch3;
            }

            /* End of Switch: '<S163>/Switch' */
            SCCR_ac_DW.UnitDelay_DSTATE_b[i] += Switch2;
            rtb_Gain1[i] = Switch3;
        }

        /* End of Outputs for SubSystem: '<S157>/Limiter' */
        /* End of Outputs for SubSystem: '<S88>/GradientLimiter' */
    }
    else
    {
        SCCR_ac_DW.UnitDelay_DSTATE_b[0] = fmaxf(SCCR_ac_B.Merge3,
            KeSCCR_M_RrAxlMaxLim);
        SCCR_ac_DW.UnitDelay_DSTATE_b[1] = fminf(SCCR_ac_B.Merge2,
            KeSCCR_M_RrAxlMinLim);
    }

    /* End of Switch: '<S88>/Switch' */

    /* Gain: '<S100>/Gain' */
    rtb_Logical_i = ((true) && rtb_Switch1_p);

    /* Switch: '<S62>/Switch1' incorporates:
     *  Constant: '<S76>/Calib'
     *  Switch: '<S62>/Switch2'
     *  Switch: '<S62>/Switch3'
     *  Switch: '<S62>/Switch4'
     */
    if (KeSCCR_b_FlyWheelDomain)
    {
        /* Switch: '<S62>/Switch1' incorporates:
         *  Constant: '<S62>/Constant'
         */
        TmpSignalConversionAtTmpVM_FcnCallSub_es = 9999.0F;

        /* Switch: '<S62>/Switch2' incorporates:
         *  Constant: '<S62>/Constant1'
         */
        Switch2 = (-9999.0F);

        /* Switch: '<S62>/Switch3' incorporates:
         *  Gain: '<S122>/Gain'
         *  Gain: '<S90>/Gain'
         *  UnitDelay: '<S69>/Unit Delay1'
         */
        Switch3 = (1.0F * SCCR_ac_DW.UnitDelay1_DSTATE[1]) * 1.0F;

        /* Switch: '<S62>/Switch4' incorporates:
         *  Gain: '<S121>/Gain'
         *  Gain: '<S93>/Gain'
         *  UnitDelay: '<S69>/Unit Delay1'
         */
        TmpSignalConversionAtTmpVM_FcnCallSubs_l = (1.0F *
            SCCR_ac_DW.UnitDelay1_DSTATE[0]) * 1.0F;
    }
    else
    {
        /* Switch: '<S62>/Switch1' incorporates:
         *  Gain: '<S121>/Gain'
         *  Gain: '<S94>/Gain'
         *  UnitDelay: '<S69>/Unit Delay1'
         */
        TmpSignalConversionAtTmpVM_FcnCallSub_es = (1.0F *
            SCCR_ac_DW.UnitDelay1_DSTATE[0]) * 1.0F;

        /* Switch: '<S62>/Switch2' incorporates:
         *  Gain: '<S122>/Gain'
         *  Gain: '<S89>/Gain'
         *  UnitDelay: '<S69>/Unit Delay1'
         */
        Switch2 = (1.0F * SCCR_ac_DW.UnitDelay1_DSTATE[1]) * 1.0F;

        /* Switch: '<S62>/Switch3' incorporates:
         *  Constant: '<S62>/Constant2'
         */
        Switch3 = (-9999.0F);

        /* Switch: '<S62>/Switch4' incorporates:
         *  Constant: '<S62>/Constant3'
         */
        TmpSignalConversionAtTmpVM_FcnCallSubs_l = 9999.0F;
    }

    /* End of Switch: '<S62>/Switch1' */

    /* Switch: '<S101>/Switch' incorporates:
     *  Constant: '<S165>/Calib'
     *  Switch: '<S101>/Switch1'
     */
    if (KeSCCR_b_TwoDrivingAxles)
    {
        /* Switch: '<S101>/Switch' incorporates:
         *  Logic: '<S101>/Logical_Operator2'
         */
        rtb_Switch_m = (rtb_VeSCCI_b_RrAxlMaxRq_write_IRV &&
                        rtb_VeSCCI_b_RrAxlMinRq_write_IRV);
    }
    else
    {
        /* Switch: '<S101>/Switch' incorporates:
         *  Constant: '<S101>/Constant1'
         */
        rtb_Switch_m = false;

        /* Switch: '<S101>/Switch1' incorporates:
         *  Constant: '<S101>/Constant'
         */
        rtb_Switch1_p = false;
    }

    /* End of Switch: '<S101>/Switch' */

    /* Switch: '<S70>/Switch2' */
    if (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_eu)
    {
        /* Abs: '<S64>/Abs1' incorporates:
         *  Constant: '<S130>/Calib'
         */
        rtb_Abs1 = KeSCCR_v_VehicleSpeedProtection;
    }
    else
    {
        /* Abs: '<S64>/Abs1' */
        rtb_Abs1 = SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_aa;
    }

    /* End of Switch: '<S70>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S70>/GradientLimiter' */
    /* Sum: '<S124>/Sum2' incorporates:
     *  Abs: '<S64>/Abs1'
     *  Lookup_n-D: '<S131>/Vector'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     *  UnitDelay: '<S124>/Unit Delay'
     */
    rtb_Sum2_d = look2_iflf_binlca_16a(rtb_Abs1,
        SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_d2, ((const float32 *)
        &(KxSCCR_M_FrntAxlMaxProtection[0])), ((const float32 *)
        &(KySCCR_M_FrntAxlMaxProtection[0])), ((const float32 *)
        &(KtSCCR_M_FrntAxlMaxProtection[0])), (const uint32*)
        SCCR_ac_ConstP.pooled14, 13U) - SCCR_ac_DW.UnitDelay_DSTATE_i;

    /* Outputs for Atomic SubSystem: '<S124>/Limiter' */
    /* Switch: '<S135>/Switch1' incorporates:
     *  Constant: '<S128>/Calib'
     *  RelationalOperator: '<S135>/Relational Operator'
     */
    if (KeSCCR_M_Gradient_Inc_Limit_Protection_Max < rtb_Sum2_d)
    {
        /* UnitDelay: '<S104>/Unit Delay' */
        rtb_Sum2_d = KeSCCR_M_Gradient_Inc_Limit_Protection_Max;
    }

    /* End of Switch: '<S135>/Switch1' */

    /* Switch: '<S135>/Switch' incorporates:
     *  Constant: '<S126>/Calib'
     *  RelationalOperator: '<S135>/Relational Operator1'
     */
    if (rtb_Sum2_d <= KeSCCR_M_Gradient_Dec_Limit_Protection_Max)
    {
        rtb_Sum2_d = KeSCCR_M_Gradient_Dec_Limit_Protection_Max;
    }

    /* End of Switch: '<S135>/Switch' */
    /* End of Outputs for SubSystem: '<S124>/Limiter' */

    /* Sum: '<S124>/Sum3' incorporates:
     *  UnitDelay: '<S124>/Unit Delay'
     */
    SCCR_ac_DW.UnitDelay_DSTATE_i += rtb_Sum2_d;

    /* End of Outputs for SubSystem: '<S70>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S70>/GradientLimiter2' */
    /* Sum: '<S125>/Sum2' incorporates:
     *  Abs: '<S64>/Abs1'
     *  Lookup_n-D: '<S132>/Vector'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     *  UnitDelay: '<S125>/Unit Delay'
     */
    rtb_Abs1 = look2_iflf_binlca_16a(rtb_Abs1,
        SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_d2, ((const float32 *)
        &(KxSCCR_M_FrntAxlMinProtection[0])), ((const float32 *)
        &(KySCCR_M_FrntAxlMinProtection[0])), ((const float32 *)
        &(KtSCCR_M_FrntAxlMinProtection[0])), (const uint32*)
        SCCR_ac_ConstP.pooled14, 13U) - SCCR_ac_DW.UnitDelay_DSTATE_bx;

    /* Outputs for Atomic SubSystem: '<S125>/Limiter' */
    /* Switch: '<S136>/Switch1' incorporates:
     *  Constant: '<S129>/Calib'
     *  RelationalOperator: '<S136>/Relational Operator'
     */
    if (KeSCCR_M_Gradient_Inc_Limit_Protection_Min < rtb_Abs1)
    {
        /* Switch: '<S112>/Switch1' */
        rtb_Abs1 = KeSCCR_M_Gradient_Inc_Limit_Protection_Min;
    }

    /* End of Switch: '<S136>/Switch1' */

    /* Switch: '<S136>/Switch' incorporates:
     *  Constant: '<S127>/Calib'
     *  RelationalOperator: '<S136>/Relational Operator1'
     */
    if (rtb_Abs1 <= KeSCCR_M_Gradient_Dec_Limit_Protection_Min)
    {
        rtb_Abs1 = KeSCCR_M_Gradient_Dec_Limit_Protection_Min;
    }

    /* End of Switch: '<S136>/Switch' */
    /* End of Outputs for SubSystem: '<S125>/Limiter' */

    /* Sum: '<S125>/Sum3' incorporates:
     *  UnitDelay: '<S125>/Unit Delay'
     */
    SCCR_ac_DW.UnitDelay_DSTATE_bx += rtb_Abs1;

    /* End of Outputs for SubSystem: '<S70>/GradientLimiter2' */

    /* SwitchCase: '<S64>/Drv_Prog_Case' incorporates:
     *  Constant: '<S109>/Calib'
     */
    switch (KeSCCR_i_WheelDrvProg)
    {
      case 1:
        /* Outputs for IfAction SubSystem: '<S64>/FWD ' incorporates:
         *  ActionPort: '<S103>/Action Port'
         */
        /* Switch: '<S103>/Switch' incorporates:
         *  Constant: '<S111>/Calib'
         */
        if (KeSCCR_b_RU_or_KM_FWD)
        {
            /* Merge: '<S64>/Merge' incorporates:
             *  Merge: '<Root>/VeSCCR_M_Output_Torque_Limit_IRV_Merge'
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
             */
            SCCR_ac_B.Merge_f =
                Rte_IrvRead_SCCR_FastTEF1_VeSCCR_M_Output_Torque_Limit_write_IRV
                ();
        }
        else
        {
            /* Merge: '<S64>/Merge' incorporates:
             *  Abs: '<S64>/Abs'
             *  Lookup_n-D: '<S107>/Vector'
             *  Sum: '<S64>/Sum1'
             */
            SCCR_ac_B.Merge_f = look1_iflf_binlca_16a(fabsf
                (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pj -
                 SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c4), ((const
                float32 *)&(KxSCCR_n_DiffWhlSpdFront[0])), ((const float32 *)
                &(KtSCCR_M_OutputTorqueLimitF[0])), 9U);
        }

        /* End of Switch: '<S103>/Switch' */
        /* End of Outputs for SubSystem: '<S64>/FWD ' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S64>/AWD_Rear' incorporates:
         *  ActionPort: '<S102>/Action Port'
         */
        /* Abs: '<S102>/Abs' */
        rtb_Abs1 = fabsf(SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ow);

        /* Sum: '<S102>/Sum1' incorporates:
         *  Gain: '<S102>/Gain'
         *  MinMax: '<S102>/MinMax2'
         */
        rtb_Sum2_d = fminf(0.5F * rtb_Abs1,
                           SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fg);

        /* Merge: '<S64>/Merge' incorporates:
         *  Abs: '<S64>/Abs1'
         *  Lookup_n-D: '<S108>/Vector'
         *  Merge: '<Root>/VeSCCR_M_Output_Torque_Limit_IRV_Merge'
         *  MinMax: '<S102>/MinMax'
         *  MinMax: '<S102>/MinMax1'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
         *  Sum: '<S102>/Sum'
         *  Sum: '<S102>/Sum1'
         *  Sum: '<S64>/Sum2'
         */
        SCCR_ac_B.Merge_f = fminf((rtb_Abs1 - rtb_Sum2_d) + fminf(rtb_Sum2_d,
            look1_iflf_binlca_16a(fabsf
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gt -
             SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ip), ((const
            float32 *)&(KxSCCR_n_DiffWhlSpdRear[0])), ((const float32 *)
            &(KtSCCR_M_OutputTorqueLimitR[0])), 9U)),
            Rte_IrvRead_SCCR_FastTEF1_VeSCCR_M_Output_Torque_Limit_write_IRV());

        /* End of Outputs for SubSystem: '<S64>/AWD_Rear' */
        break;

      case 3:
        /* Outputs for IfAction SubSystem: '<S64>/TrailHawk' incorporates:
         *  ActionPort: '<S110>/Action Port'
         */
        /* Sum: '<S110>/Sum1' incorporates:
         *  Abs: '<S110>/Abs'
         */
        rtb_Abs1 = fabsf(SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ow);

        /* MinMax: '<S110>/MinMax' incorporates:
         *  Gain: '<S110>/Gain'
         */
        rtb_Sum2_d = fminf(0.5F * rtb_Abs1,
                           SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fg);

        /* Sum: '<S110>/Sum1' */
        rtb_Abs1 -= rtb_Sum2_d;

        /* Merge: '<S64>/Merge' incorporates:
         *  Abs: '<S64>/Abs'
         *  Abs: '<S64>/Abs1'
         *  Lookup_n-D: '<S107>/Vector'
         *  Lookup_n-D: '<S108>/Vector'
         *  MinMax: '<S110>/MinMax1'
         *  MinMax: '<S110>/MinMax2'
         *  Sum: '<S110>/Sum'
         *  Sum: '<S64>/Sum1'
         *  Sum: '<S64>/Sum2'
         */
        SCCR_ac_B.Merge_f = fminf(rtb_Abs1, look1_iflf_binlca_16a(fabsf
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pj -
             SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c4), ((const
            float32 *)&(KxSCCR_n_DiffWhlSpdFront[0])), ((const float32 *)
            &(KtSCCR_M_OutputTorqueLimitF[0])), 9U)) + fminf(rtb_Sum2_d,
            look1_iflf_binlca_16a(fabsf
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gt -
             SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ip), ((const
            float32 *)&(KxSCCR_n_DiffWhlSpdRear[0])), ((const float32 *)
            &(KtSCCR_M_OutputTorqueLimitR[0])), 9U));

        /* End of Outputs for SubSystem: '<S64>/TrailHawk' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of SwitchCase: '<S64>/Drv_Prog_Case' */

    /* Outputs for Atomic SubSystem: '<S64>/GradientLimiter' */
    /* Sum: '<S104>/Sum2' incorporates:
     *  UnitDelay: '<S104>/Unit Delay'
     */
    rtb_Abs1 = SCCR_ac_B.Merge_f - SCCR_ac_DW.UnitDelay_DSTATE_j;

    /* Outputs for Atomic SubSystem: '<S104>/Limiter' */
    /* Switch: '<S112>/Switch1' incorporates:
     *  Constant: '<S106>/Calib'
     *  RelationalOperator: '<S112>/Relational Operator'
     */
    if (KeSCCR_M_Gradient_Inc_DMPI < rtb_Abs1)
    {
        /* Switch: '<S112>/Switch1' */
        rtb_Abs1 = KeSCCR_M_Gradient_Inc_DMPI;
    }

    /* End of Switch: '<S112>/Switch1' */

    /* Switch: '<S112>/Switch' incorporates:
     *  Constant: '<S105>/Calib'
     *  RelationalOperator: '<S112>/Relational Operator1'
     */
    if (rtb_Abs1 <= KeSCCR_M_Gradient_Dec_DMPI)
    {
        rtb_Abs1 = KeSCCR_M_Gradient_Dec_DMPI;
    }

    /* End of Switch: '<S112>/Switch' */
    /* End of Outputs for SubSystem: '<S104>/Limiter' */

    /* Sum: '<S104>/Sum3' incorporates:
     *  UnitDelay: '<S104>/Unit Delay'
     */
    SCCR_ac_DW.UnitDelay_DSTATE_j += rtb_Abs1;

    /* End of Outputs for SubSystem: '<S64>/GradientLimiter' */
    SCCR_ac_B.VeSCCI_b_Output_Torque_Lim_FA =
        Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_Output_Torque_LimitFA_write_IRV();

    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Outport: '<Root>/VeSCCR_M_ESCSumMax' incorporates:
     *  Inport: '<S62>/VeSCCI_b_Output_Torque_Lim_FA'
     *  Merge: '<Root>/VeSCCR_b_Output_Torque_Limit_FA_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     *  SignalConversion generated from: '<S30>/VeSCCC_M_ESCSumMax'
     */
    (void)Rte_Write_VeSCCR_M_ESCSumMax_Value
        (TmpSignalConversionAtTmpVM_FcnCallSubs_l);

    /* Outport: '<Root>/VeSCCR_M_ESCSumMin' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCC_M_ESCSumMin'
     */
    (void)Rte_Write_VeSCCR_M_ESCSumMin_Value(Switch3);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlMaxRq' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCC_M_FrntAxlMaxRq'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlMaxRq_Value
        (TmpSignalConversionAtTmpVM_FcnCallSub_es);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCC_AxlTrqArbtr'
     */
    /* Outport: '<Root>/VeSCCR_M_FrntAxlMaxRqPrtctd' incorporates:
     *  Gain: '<S134>/Gain'
     *  SignalConversion generated from: '<S30>/VeSCCC_M_FrntAxlMaxRqPrtctd'
     *  UnitDelay: '<S124>/Unit Delay'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlMaxRqPrtctd_Value(1.0F *
        SCCR_ac_DW.UnitDelay_DSTATE_i);

    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Outport: '<Root>/VeSCCR_M_FrntAxlMinRq' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCC_M_FrntAxlMinRq'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlMinRq_Value(Switch2);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCC_AxlTrqArbtr'
     */
    /* Outport: '<Root>/VeSCCR_M_FrntAxlMinRqPrtctd' incorporates:
     *  Gain: '<S133>/Gain'
     *  SignalConversion generated from: '<S30>/VeSCCC_M_FrntAxlMinRqPrtctd'
     *  UnitDelay: '<S125>/Unit Delay'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlMinRqPrtctd_Value(1.0F *
        SCCR_ac_DW.UnitDelay_DSTATE_bx);

    /* Switch: '<S64>/Switch' incorporates:
     *  Logic: '<S64>/Logical Operator'
     */
    if (((((SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nj) ||
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_i1)) ||
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dq)) ||
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cr)) ||
            (SCCR_ac_B.VeSCCI_b_Output_Torque_Lim_FA))
    {
        /* Outport: '<Root>/VeSCCR_M_OutputTorqueLimit' incorporates:
         *  Constant: '<S64>/Constant'
         *  SignalConversion generated from: '<S30>/VeSCCC_M_OutputTorqueLimit'
         */
        (void)Rte_Write_VeSCCR_M_OutputTorqueLimit_Value(9999.0F);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_OutputTorqueLimit' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCC_M_OutputTorqueLimit'
         *  UnitDelay: '<S104>/Unit Delay'
         */
        (void)Rte_Write_VeSCCR_M_OutputTorqueLimit_Value
            (SCCR_ac_DW.UnitDelay_DSTATE_j);
    }

    /* End of Switch: '<S64>/Switch' */

    /* Outport: '<Root>/VeSCCR_M_RrAxlMaxRq' incorporates:
     *  Gain: '<S161>/Gain'
     *  SignalConversion generated from: '<S30>/VeSCCC_M_RrAxlMaxRq'
     *  UnitDelay: '<S88>/Unit Delay'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlMaxRq_Value(1.0F *
        SCCR_ac_DW.UnitDelay_DSTATE_b[0]);

    /* Outport: '<Root>/VeSCCR_M_RrAxlMinRq' incorporates:
     *  Gain: '<S162>/Gain'
     *  SignalConversion generated from: '<S30>/VeSCCC_M_RrAxlMinRq'
     *  UnitDelay: '<S88>/Unit Delay'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlMinRq_Value(1.0F *
        SCCR_ac_DW.UnitDelay_DSTATE_b[1]);

    /* Outport: '<Root>/VeSCCR_b_Rq_ESCSumFA' incorporates:
     *  Gain: '<S91>/Gain'
     *  SignalConversion generated from: '<S30>/VeSCCC_b_ESCSumFA'
     */
    (void)Rte_Write_VeSCCR_b_Rq_ESCSumFA_Value((true) && rtb_Logical1_a);

    /* Outport: '<Root>/VeSCCR_b_FrntAxlMaxRq' incorporates:
     *  Constant: '<S113>/Calib'
     *  Constant: '<S114>/Calib'
     *  Gain: '<S95>/Gain'
     *  Logic: '<S67>/Logical3'
     *  RelationalOperator: '<S67>/Relational_Operator'
     *  RelationalOperator: '<S67>/Relational_Operator1'
     *  SignalConversion generated from: '<S30>/VeSCCC_b_FrntAxlMax_Rq'
     */
    (void)Rte_Write_VeSCCR_b_FrntAxlMaxRq_Value((((true) && (SCCR_ac_B.Merge6)) ||
        (rtb_VeSCCI_M_FrntAxlOLMax_write_IRV <= KeSCCR_M_FrntAxlOLMaxThrshld)) ||
        (rtb_VeSCCI_M_FrntAxlCLMax_write_IRV <= KeSCCR_M_FrntAxlCLMaxThrshld));

    /* Outport: '<Root>/VeSCCR_b_FrntAxlMinRq' incorporates:
     *  Constant: '<S115>/Calib'
     *  Constant: '<S116>/Calib'
     *  Gain: '<S96>/Gain'
     *  Logic: '<S68>/Logical3'
     *  RelationalOperator: '<S68>/Relational_Operator'
     *  RelationalOperator: '<S68>/Relational_Operator1'
     *  SignalConversion generated from: '<S30>/VeSCCC_b_FrntAxlMin_Rq'
     */
    (void)Rte_Write_VeSCCR_b_FrntAxlMinRq_Value((((true) && (SCCR_ac_B.Merge7)) ||
        (rtb_VeSCCI_M_FrntAxlOLMin_write_IRV >= KeSCCR_M_FrntAxlOLMinThrshld)) ||
        (rtb_VeSCCI_M_FrntAxlCLMin_write_IRV >= KeSCCR_M_FrntAxlCLMinThrshld));

    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Outport: '<Root>/VeSCCR_b_FrntAxlRq' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCC_b_FrntAxlRq'
     */
    (void)Rte_Write_VeSCCR_b_FrntAxlRq_Value
        (SCCR_ac_B.VariantMerge_For_Variant_Source_Variant_[0]);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCC_AxlTrqArbtr'
     */
    /* Outport: '<Root>/VeSCCR_b_FrntAxlRqFA' incorporates:
     *  Gain: '<S99>/Gain'
     *  SignalConversion generated from: '<S30>/VeSCCC_b_FrntAxlRqFA'
     */
    (void)Rte_Write_VeSCCR_b_FrntAxlRqFA_Value((true) && rtb_Logical1_a);

    /* Outport: '<Root>/VeSCCR_b_Rq_ESCSum' incorporates:
     *  Gain: '<S92>/Gain'
     *  SignalConversion generated from: '<S30>/VeSCCC_b_Rq_ESCSum'
     */
    (void)Rte_Write_VeSCCR_b_Rq_ESCSum_Value((true) &&
        (SCCR_ac_B.VariantMerge_For_Variant_Source_Variant_[0]));

    /* Outport: '<Root>/VeSCCR_b_RrAxlMaxRq' incorporates:
     *  Constant: '<S153>/Calib'
     *  Constant: '<S154>/Calib'
     *  Gain: '<S97>/Gain'
     *  Logic: '<S86>/Logical3'
     *  RelationalOperator: '<S86>/Relational_Operator'
     *  RelationalOperator: '<S86>/Relational_Operator1'
     *  SignalConversion generated from: '<S30>/VeSCCC_b_RrAxlMax_Rq'
     */
    (void)Rte_Write_VeSCCR_b_RrAxlMaxRq_Value((((true) && (SCCR_ac_B.Merge8)) ||
        (rtb_VeSCCI_M_RrAxlOLMax_write_IRV <= KeSCCR_M_RrAxlOLMaxThrshld)) ||
        (rtb_VeSCCI_M_RrAxlCLMax_write_IRV <= KeSCCR_M_RrAxlCLMaxThrshld));

    /* Outport: '<Root>/VeSCCR_b_RrAxlMinRq' incorporates:
     *  Constant: '<S155>/Calib'
     *  Constant: '<S156>/Calib'
     *  Gain: '<S98>/Gain'
     *  Logic: '<S87>/Logical3'
     *  RelationalOperator: '<S87>/Relational_Operator'
     *  RelationalOperator: '<S87>/Relational_Operator1'
     *  SignalConversion generated from: '<S30>/VeSCCC_b_RrAxlMin_Rq'
     */
    (void)Rte_Write_VeSCCR_b_RrAxlMinRq_Value((((true) && (SCCR_ac_B.Merge9)) ||
        (rtb_VeSCCI_M_RrAxlOLMin_write_IRV >= KeSCCR_M_RrAxlOLMinThrshld)) ||
        (rtb_VeSCCI_M_RrAxlCLMin_write_IRV >= KeSCCR_M_RrAxlCLMinThrshld));

    /* Outport: '<Root>/VeSCCR_b_RrAxlRq' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCC_b_RrAxlRq'
     *  SignalConversion generated from: '<S62>/VeSCCC_b_RrAxlRq'
     */
    (void)Rte_Write_VeSCCR_b_RrAxlRq_Value
        (SCCR_ac_B.VariantMerge_For_Variant_Source_Variant_[1]);

    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Outport: '<Root>/VeSCCR_b_RrAxlRqFA' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCC_b_RrAxlRqFA'
     */
    (void)Rte_Write_VeSCCR_b_RrAxlRqFA_Value(rtb_Logical_i);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCI_OvrrdInputs'
     */
    /* Switch: '<S63>/Switch40' incorporates:
     *  Constant: '<S207>/Calib'
     */
    if (KeSCCR_b_FrntAxlAdhMax)
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlAdhMax' incorporates:
         *  Constant: '<S170>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlAdhMax'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlAdhMax_Value(KeSCCR_M_FrntAxlAdhMax);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlAdhMax' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlAdhMax'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlAdhMax_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d);
    }

    /* End of Switch: '<S63>/Switch40' */

    /* Switch: '<S63>/Switch42' incorporates:
     *  Constant: '<S208>/Calib'
     */
    if (KeSCCR_b_FrntAxlAdhMin)
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlAdhMin' incorporates:
         *  Constant: '<S171>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlAdhMin'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlAdhMin_Value(KeSCCR_M_FrntAxlAdhMin);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlAdhMin' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlAdhMin'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlAdhMin_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mt);
    }

    /* End of Switch: '<S63>/Switch42' */
    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Outport: '<Root>/VeSCCR_M_FrntAxlCLMax' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlCLMax'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlCLMax_Value(Switch17);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlCLMin' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlCLMin'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlCLMin_Value(Switch18);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCI_OvrrdInputs'
     */
    /* Switch: '<S63>/Switch44' incorporates:
     *  Constant: '<S209>/Calib'
     */
    if (KeSCCR_b_FrntAxlEffMax)
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlEffMax' incorporates:
         *  Constant: '<S174>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlEffMax'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlEffMax_Value(KeSCCR_M_FrntAxlEffMax);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlEffMax' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlEffMax'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlEffMax_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bd);
    }

    /* End of Switch: '<S63>/Switch44' */

    /* Switch: '<S63>/Switch46' incorporates:
     *  Constant: '<S210>/Calib'
     */
    if (KeSCCR_b_FrntAxlEffMin)
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlEffMin' incorporates:
         *  Constant: '<S175>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlEffMin'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlEffMin_Value(KeSCCR_M_FrntAxlEffMin);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlEffMin' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlEffMin'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlEffMin_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o);
    }

    /* End of Switch: '<S63>/Switch46' */
    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Outport: '<Root>/VeSCCR_M_FrntAxlOLMax' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlOLMax'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlOLMax_Value(Switch13);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlOLMin' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlOLMin'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlOLMin_Value(Switch14_l);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCI_OvrrdInputs'
     */
    /* Switch: '<S63>/Switch28' incorporates:
     *  Constant: '<S215>/Calib'
     */
    if (KeSCCR_b_FrntAxlStrtgcMax_OL)
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlStrtgcMax_OL' incorporates:
         *  Constant: '<S179>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlStrtgcMax_OL'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlStrtgcMax_OL_Value
            (KeSCCR_M_FrntAxlStrtgcMax_OL);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlStrtgcMax_OL' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlStrtgcMax_OL'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlStrtgcMax_OL_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gy);
    }

    /* End of Switch: '<S63>/Switch28' */

    /* Switch: '<S63>/Switch30' incorporates:
     *  Constant: '<S216>/Calib'
     */
    if (KeSCCR_b_FrntAxlStrtgcMin_OL)
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlStrtgcMin_OL' incorporates:
         *  Constant: '<S180>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlStrtgcMin_OL'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlStrtgcMin_OL_Value
            (KeSCCR_M_FrntAxlStrtgcMin_OL);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlStrtgcMin_OL' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlStrtgcMin_OL'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlStrtgcMin_OL_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pl);
    }

    /* End of Switch: '<S63>/Switch30' */

    /* Switch: '<S63>/Switch32' incorporates:
     *  Constant: '<S217>/Calib'
     */
    if (KeSCCR_b_FrntAxlTactFastMax_OL)
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlTactFastMax_OL' incorporates:
         *  Constant: '<S181>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlTactFastMax_OL'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlTactFastMax_OL_Value
            (KeSCCR_M_FrntAxlTactFastMax_OL);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlTactFastMax_OL' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlTactFastMax_OL'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlTactFastMax_OL_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e);
    }

    /* End of Switch: '<S63>/Switch32' */

    /* Switch: '<S63>/Switch34' incorporates:
     *  Constant: '<S218>/Calib'
     */
    if (KeSCCR_b_FrntAxlTactFastMin_OL)
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlTactFastMin_OL' incorporates:
         *  Constant: '<S182>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlTactFastMin_OL'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlTactFastMin_OL_Value
            (KeSCCR_M_FrntAxlTactFastMin_OL);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlTactFastMin_OL' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlTactFastMin_OL'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlTactFastMin_OL_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b);
    }

    /* End of Switch: '<S63>/Switch34' */

    /* Switch: '<S63>/Switch36' incorporates:
     *  Constant: '<S219>/Calib'
     */
    if (KeSCCR_b_FrntAxlTactSlowMax_OL)
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlTactSlowMax_OL' incorporates:
         *  Constant: '<S183>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlTactSlowMax_OL'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlTactSlowMax_OL_Value
            (KeSCCR_M_FrntAxlTactSlowMax_OL);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlTactSlowMax_OL' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlTactSlowMax_OL'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlTactSlowMax_OL_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mr);
    }

    /* End of Switch: '<S63>/Switch36' */

    /* Switch: '<S63>/Switch38' incorporates:
     *  Constant: '<S220>/Calib'
     */
    if (KeSCCR_b_FrntAxlTactSlowMin_OL)
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlTactSlowMin_OL' incorporates:
         *  Constant: '<S184>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlTactSlowMin_OL'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlTactSlowMin_OL_Value
            (KeSCCR_M_FrntAxlTactSlowMin_OL);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_FrntAxlTactSlowMin_OL' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlTactSlowMin_OL'
         */
        (void)Rte_Write_VeSCCR_M_FrntAxlTactSlowMin_OL_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mk);
    }

    /* End of Switch: '<S63>/Switch38' */

    /* Switch: '<S63>/Switch41' incorporates:
     *  Constant: '<S226>/Calib'
     */
    if (KeSCCR_b_RrAxlAdhMax)
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlAdhMax' incorporates:
         *  Constant: '<S185>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlAdhMax'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlAdhMax_Value(KeSCCR_M_RrAxlAdhMax);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlAdhMax' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlAdhMax'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlAdhMax_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nu);
    }

    /* End of Switch: '<S63>/Switch41' */

    /* Switch: '<S63>/Switch43' incorporates:
     *  Constant: '<S227>/Calib'
     */
    if (KeSCCR_b_RrAxlAdhMin)
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlAdhMin' incorporates:
         *  Constant: '<S186>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlAdhMin'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlAdhMin_Value(KeSCCR_M_RrAxlAdhMin);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlAdhMin' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlAdhMin'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlAdhMin_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bf);
    }

    /* End of Switch: '<S63>/Switch43' */
    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Outport: '<Root>/VeSCCR_M_RrAxlCLMax' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlCLMax'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlCLMax_Value(Switch19);

    /* Outport: '<Root>/VeSCCR_M_RrAxlCLMin' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlCLMin'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlCLMin_Value(Switch20);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCI_OvrrdInputs'
     */
    /* Switch: '<S63>/Switch45' incorporates:
     *  Constant: '<S228>/Calib'
     */
    if (KeSCCR_b_RrAxlEffMax)
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlEffMax' incorporates:
         *  Constant: '<S188>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlEffMax'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlEffMax_Value(KeSCCR_M_RrAxlEffMax);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlEffMax' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlEffMax'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlEffMax_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_g2);
    }

    /* End of Switch: '<S63>/Switch45' */

    /* Switch: '<S63>/Switch47' incorporates:
     *  Constant: '<S229>/Calib'
     */
    if (KeSCCR_b_RrAxlEffMin)
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlEffMin' incorporates:
         *  Constant: '<S189>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlEffMin'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlEffMin_Value(KeSCCR_M_RrAxlEffMin);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlEffMin' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlEffMin'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlEffMin_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bb);
    }

    /* End of Switch: '<S63>/Switch47' */
    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Outport: '<Root>/VeSCCR_M_RrAxlOLMax' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlOLMax'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlOLMax_Value(Switch15);

    /* Outport: '<Root>/VeSCCR_M_RrAxlOLMin' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlOLMin'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlOLMin_Value(Switch16);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCI_OvrrdInputs'
     */
    /* Switch: '<S63>/Switch29' incorporates:
     *  Constant: '<S234>/Calib'
     */
    if (KeSCCR_b_RrAxlStrtgcMax_OL)
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlStrtgcMax_OL' incorporates:
         *  Constant: '<S192>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlStrtgcMax_OL'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlStrtgcMax_OL_Value
            (KeSCCR_M_RrAxlStrtgcMax_OL);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlStrtgcMax_OL' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlStrtgcMax_OL'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlStrtgcMax_OL_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i);
    }

    /* End of Switch: '<S63>/Switch29' */

    /* Switch: '<S63>/Switch31' incorporates:
     *  Constant: '<S235>/Calib'
     */
    if (KeSCCR_b_RrAxlStrtgcMin_OL)
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlStrtgcMin_OL' incorporates:
         *  Constant: '<S193>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlStrtgcMin_OL'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlStrtgcMin_OL_Value
            (KeSCCR_M_RrAxlStrtgcMin_OL);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlStrtgcMin_OL' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlStrtgcMin_OL'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlStrtgcMin_OL_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ij);
    }

    /* End of Switch: '<S63>/Switch31' */

    /* Switch: '<S63>/Switch33' incorporates:
     *  Constant: '<S236>/Calib'
     */
    if (KeSCCR_b_RrAxlTactFastMax_OL)
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlTactFastMax_OL' incorporates:
         *  Constant: '<S194>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlTactFastMax_OL'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlTactFastMax_OL_Value
            (KeSCCR_M_RrAxlTactFastMax_OL);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlTactFastMax_OL' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlTactFastMax_OL'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlTactFastMax_OL_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mw);
    }

    /* End of Switch: '<S63>/Switch33' */

    /* Switch: '<S63>/Switch35' incorporates:
     *  Constant: '<S237>/Calib'
     */
    if (KeSCCR_b_RrAxlTactFastMin_OL)
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlTactFastMin_OL' incorporates:
         *  Constant: '<S195>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlTactFastMin_OL'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlTactFastMin_OL_Value
            (KeSCCR_M_RrAxlTactFastMin_OL);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlTactFastMin_OL' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlTactFastMin_OL'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlTactFastMin_OL_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k);
    }

    /* End of Switch: '<S63>/Switch35' */

    /* Switch: '<S63>/Switch37' incorporates:
     *  Constant: '<S238>/Calib'
     */
    if (KeSCCR_b_RrAxlTactSlowMax_OL)
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlTactSlowMax_OL' incorporates:
         *  Constant: '<S196>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlTactSlowMax_OL'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlTactSlowMax_OL_Value
            (KeSCCR_M_RrAxlTactSlowMax_OL);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlTactSlowMax_OL' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlTactSlowMax_OL'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlTactSlowMax_OL_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_p5);
    }

    /* End of Switch: '<S63>/Switch37' */

    /* Switch: '<S63>/Switch39' incorporates:
     *  Constant: '<S239>/Calib'
     */
    if (KeSCCR_b_RrAxlTactSlowMin_OL)
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlTactSlowMin_OL' incorporates:
         *  Constant: '<S197>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlTactSlowMin_OL'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlTactSlowMin_OL_Value
            (KeSCCR_M_RrAxlTactSlowMin_OL);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_M_RrAxlTactSlowMin_OL' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlTactSlowMin_OL'
         */
        (void)Rte_Write_VeSCCR_M_RrAxlTactSlowMin_OL_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_c);
    }

    /* End of Switch: '<S63>/Switch39' */

    /* Switch: '<S63>/Switch25' incorporates:
     *  Constant: '<S200>/Calib'
     *  Constant: '<S201>/Calib'
     *  Merge: '<Root>/VeSCCR_b_AWDDiscnctAllwd_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    if (KeSCCR_b_AWDDiscnctAllwdOvrdEnbl)
    {
        rtb_Logical_i = KeSCCR_b_AWDDiscnctAllwdOvrdVal;
    }
    else
    {
        rtb_Logical_i =
            Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_AWDDiscnctAllwd_write_IRV();
    }

    /* End of Switch: '<S63>/Switch25' */
    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Outport: '<Root>/VeSCCR_b_AWDDiscnctAllwd' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_AWDDiscnctAllwd'
     */
    (void)Rte_Write_VeSCCR_b_AWDDiscnctAllwd_Value(rtb_Logical_i);

    /* Outport: '<Root>/VeSCCR_b_FrntAxlMaxRqFA' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_FrntAxlMaxRqFA'
     */
    (void)Rte_Write_VeSCCR_b_FrntAxlMaxRqFA_Value(Switch53);

    /* Outport: '<Root>/VeSCCR_b_FrntAxlMinRqFA' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_FrntAxlMinRqFA'
     */
    (void)Rte_Write_VeSCCR_b_FrntAxlMinRqFA_Value(Switch54);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCI_OvrrdInputs'
     */
    /* Switch: '<S63>/Switch48' incorporates:
     *  Constant: '<S222>/Calib'
     *  Constant: '<S223>/Calib'
     *  Merge: '<Root>/VeSCCR_b_FrontDFOffReq_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    if (KeSCCR_b_FrntDFOffReqOvrdEnbl)
    {
        rtb_Logical_i = KeSCCR_b_FrntDFOffReqOvrdVal;
    }
    else
    {
        rtb_Logical_i =
            Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_FrontDFOffReq_write_IRV();
    }

    /* End of Switch: '<S63>/Switch48' */
    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Outport: '<Root>/VeSCCR_b_FrontDFOffReq' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_FrontDFOffReq'
     */
    (void)Rte_Write_VeSCCR_b_FrontDFOffReq_Value(rtb_Logical_i);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCI_OvrrdInputs'
     */
    /* Switch: '<S63>/Switch23' incorporates:
     *  Constant: '<S224>/Calib'
     */
    if (KeSCCR_b_PerfAWDFlagOvrdEnbl)
    {
        /* Outport: '<Root>/VeSCCR_b_PerfAWDFlag' incorporates:
         *  Constant: '<S225>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_b_PerfAWDFlag'
         */
        (void)Rte_Write_VeSCCR_b_PerfAWDFlag_Value(KeSCCR_b_PerfAWDFlagOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_b_PerfAWDFlag' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_b_PerfAWDFlag'
         */
        (void)Rte_Write_VeSCCR_b_PerfAWDFlag_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_nwh);
    }

    /* End of Switch: '<S63>/Switch23' */

    /* Switch: '<S63>/Switch49' incorporates:
     *  Constant: '<S241>/Calib'
     *  Constant: '<S242>/Calib'
     *  Merge: '<Root>/VeSCCR_b_RearDFOffReq_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    if (KeSCCR_b_RrDFOffReqOvrdEnbl)
    {
        rtb_Logical_i = KeSCCR_b_RrDFOffReqOvrdVal;
    }
    else
    {
        rtb_Logical_i =
            Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_RearDFOffReq_write_IRV();
    }

    /* End of Switch: '<S63>/Switch49' */
    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Outport: '<Root>/VeSCCR_b_RearDFOffReq' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_RearDFOffReq'
     */
    (void)Rte_Write_VeSCCR_b_RearDFOffReq_Value(rtb_Logical_i);

    /* Outport: '<Root>/VeSCCR_b_RrAxlMaxRqFA' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_RrAxlMaxRqFA'
     */
    (void)Rte_Write_VeSCCR_b_RrAxlMaxRqFA_Value(Switch9);

    /* Outport: '<Root>/VeSCCR_b_RrAxlMinRqFA' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_RrAxlMinRqFA'
     */
    (void)Rte_Write_VeSCCR_b_RrAxlMinRqFA_Value(Switch10);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCI_OvrrdInputs'
     */
    /* Switch: '<S63>/Switch24' incorporates:
     *  Constant: '<S243>/Calib'
     */
    if (KeSCCR_b_ZeroTrqAllwdOvrdEnbl)
    {
        /* Outport: '<Root>/VeSCCR_b_ZeroTrqAllwd' incorporates:
         *  Constant: '<S244>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_b_ZeroTrqAllwd'
         */
        (void)Rte_Write_VeSCCR_b_ZeroTrqAllwd_Value(KeSCCR_b_ZeroTrqAllwdOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_b_ZeroTrqAllwd' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_b_ZeroTrqAllwd'
         */
        (void)Rte_Write_VeSCCR_b_ZeroTrqAllwd_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_io);
    }

    /* End of Switch: '<S63>/Switch24' */

    /* Switch: '<S63>/Switch21' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S63>/Constant Value18'
     *  Selector: '<S63>/Selector17'
     */
    if (KaSCCR_b_RqOvrdEnbl[(14)])
    {
        /* Outport: '<Root>/VeSCCR_r_RipAWD' incorporates:
         *  Constant: '<S252>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_r_RipAWD'
         */
        (void)Rte_Write_VeSCCR_r_RipAWD_Value(KeSCCR_r_RipAWDOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_r_RipAWD' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_r_RipAWD'
         */
        (void)Rte_Write_VeSCCR_r_RipAWD_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_py);
    }

    /* End of Switch: '<S63>/Switch21' */

    /* Switch: '<S63>/Switch22' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S63>/Constant Value19'
     *  Selector: '<S63>/Selector18'
     */
    if (KaSCCR_b_RqOvrdEnbl[(15)])
    {
        /* Outport: '<Root>/VeSCCR_r_RipRegen' incorporates:
         *  Constant: '<S253>/Calib'
         *  SignalConversion generated from: '<S30>/VeSCCI_r_RipRegen'
         */
        (void)Rte_Write_VeSCCR_r_RipRegen_Value(KeSCCR_r_RipRegenOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeSCCR_r_RipRegen' incorporates:
         *  SignalConversion generated from: '<S30>/VeSCCI_r_RipRegen'
         */
        (void)Rte_Write_VeSCCR_r_RipRegen_Value
            (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_fm);
    }

    /* End of Switch: '<S63>/Switch22' */

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCC_AxlTrqArbtr'
     */
    /* Outport: '<Root>/VeSCCR_b_ESCTrqEnblRq_Allowed' incorporates:
     *  Constant: '<S164>/Constant'
     *  Logic: '<S101>/Logical Operator3'
     *  Logic: '<S101>/Logical_Operator1'
     *  RelationalOperator: '<S101>/Comparison6'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     *  SignalConversion generated from: '<S30>/VeSCCR_b_ESCTrqEnblRq_Allowed'
     */
    (void)Rte_Write_VeSCCR_b_ESCTrqEnblRq_Allowed_Value(((((!rtb_Switch_m) && ((
        !rtb_VeSCCI_b_FrntAxlMaxRq_write_IRV) ||
        (!rtb_VeSCCI_b_FrntAxlMinRq_write_IRV))) &&
        (SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nx ==
         CeSRAR_e_NoFaultHCPBSM_C1)) && (!rtb_Logical1_a)) && (!rtb_Switch1_p));

    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Merge: '<Root>/Merge_15_Irv' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlCLMax_write'
     * */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_M_FrntAxlCLMax_write_IRV(Switch17);

    /* Merge: '<Root>/Merge_16_Irv' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlCLMin_write'
     * */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_M_FrntAxlCLMin_write_IRV(Switch18);

    /* Merge: '<Root>/Merge_10_Irv' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlOLMax_write'
     * */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_M_FrntAxlOLMax_write_IRV(Switch13);

    /* Merge: '<Root>/Merge_11_Irv' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlOLMin_write'
     * */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_M_FrntAxlOLMin_write_IRV(Switch14_l);

    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_M_FrntAxlRq_write'
     * */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_M_FrntAxlRq_write_IRV(Switch52);

    /* Merge: '<Root>/Merge_17_Irv' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlCLMax_write'
     * */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_M_RrAxlCLMax_write_IRV(Switch19);

    /* Merge: '<Root>/Merge_18_Irv' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlCLMin_write'
     * */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_M_RrAxlCLMin_write_IRV(Switch20);

    /* Merge: '<Root>/Merge_13_Irv' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlOLMax_write'
     * */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_M_RrAxlOLMax_write_IRV(Switch15);

    /* Merge: '<Root>/Merge_14_Irv' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlOLMin_write'
     * */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_M_RrAxlOLMin_write_IRV(Switch16);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCI_OvrrdInputs'
     */
    /* Switch: '<S63>/Switch5' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S191>/Calib'
     *  Constant: '<S63>/Constant Value4'
     *  Merge: '<Root>/Merge_63'
     *  Selector: '<S63>/Selector3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    if (KaSCCR_b_RqOvrdEnbl[(5)])
    {
        Switch13 = KeSCCR_M_RrAxlRqTorqOvrdVal;
    }
    else
    {
        Switch13 = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_M_RrAxlRq_write_IRV();
    }

    /* End of Switch: '<S63>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_M_RrAxlRq_write'
     */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_M_RrAxlRq_write_IRV(Switch13);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCI_OvrrdInputs'
     */
    /* Switch: '<S63>/Switch26' incorporates:
     *  Constant: '<S202>/Calib'
     *  Constant: '<S203>/Calib'
     *  Merge: '<Root>/VeSCCR_b_DsblAEMDPGainFrnt_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    if (KeSCCR_b_DsblAEMDGainFrntOvrdEnbl)
    {
        rtb_Logical_i = KeSCCR_b_DsblAEMDGainFrntOvrdVal;
    }
    else
    {
        rtb_Logical_i =
            Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_DsblAEMDPGainFrnt_write_IRV();
    }

    /* End of Switch: '<S63>/Switch26' */
    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Merge: '<Root>/Merge_22' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_DsblAEMDPGainFrnt_write'
     */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_b_DsblAEMDPGainFrnt_write_IRV
        (rtb_Logical_i);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCI_OvrrdInputs'
     */
    /* Switch: '<S63>/Switch27' incorporates:
     *  Constant: '<S204>/Calib'
     *  Constant: '<S205>/Calib'
     *  Merge: '<Root>/VeSCCR_b_DsblAEMDPGainRr_IRV_Merge'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    if (KeSCCR_b_DsblAEMDGainRrOvrdEnbl)
    {
        rtb_Logical_i = KeSCCR_b_DsblAEMDGainRrOvrdVal;
    }
    else
    {
        rtb_Logical_i =
            Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_DsblAEMDPGainRr_write_IRV();
    }

    /* End of Switch: '<S63>/Switch27' */
    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Merge: '<Root>/Merge_24' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_DsblAEMDPGainRr_write'
     */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_b_DsblAEMDPGainRr_write_IRV(rtb_Logical_i);

    /* Merge: '<Root>/Merge_2_Irv' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_FrntAxlMaxRqFA_write'
     * */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_b_FrntAxlMaxRqFA_write_IRV(Switch53);

    /* Merge: '<Root>/Merge_34' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_FrntAxlMaxRq_write'
     * */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_b_FrntAxlMaxRq_write_IRV(Switch50);

    /* Merge: '<Root>/Merge_4_Irv' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_FrntAxlMinRqFA_write'
     * */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_b_FrntAxlMinRqFA_write_IRV(Switch54);

    /* Merge: '<Root>/Merge_49' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_FrntAxlMinRq_write'
     * */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_b_FrntAxlMinRq_write_IRV(Switch51);

    /* Merge: '<Root>/Merge_51' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_FrntAxlTqRqFA_write'
     * */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_b_FrntAxlTqRqFA_write_IRV(Switch55);

    /* Merge: '<Root>/Merge_52_Irv' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_RrAxlMaxRqFA_write'
     * */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_b_RrAxlMaxRqFA_write_IRV(Switch9);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCI_OvrrdInputs'
     */
    /* Switch: '<S63>/Switch3' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S231>/Calib'
     *  Constant: '<S63>/Constant Value2'
     *  Merge: '<Root>/Merge_59'
     *  Selector: '<S63>/Selector4'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    if (KaSCCR_b_RqOvrdEnbl[(3)])
    {
        rtb_Logical_i = KeSCCR_b_RrAxlMaxRqOvrdVal;
    }
    else
    {
        rtb_Logical_i = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_RrAxlMaxRq_write_IRV();
    }

    /* End of Switch: '<S63>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_RrAxlMaxRq_write'
     */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_b_RrAxlMaxRq_write_IRV(rtb_Logical_i);

    /* Merge: '<Root>/Merge_3_Irv' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_RrAxlMinRqFA_write'
     * */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_b_RrAxlMinRqFA_write_IRV(Switch10);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCI_OvrrdInputs'
     */
    /* Switch: '<S63>/Switch4' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S233>/Calib'
     *  Constant: '<S63>/Constant Value3'
     *  Merge: '<Root>/Merge_61'
     *  Selector: '<S63>/Selector2'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    if (KaSCCR_b_RqOvrdEnbl[(4)])
    {
        rtb_Logical_i = KeSCCR_b_RrAxlMinRqOvrdVal;
    }
    else
    {
        rtb_Logical_i = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_RrAxlMinRq_write_IRV();
    }

    /* End of Switch: '<S63>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Merge: '<Root>/Merge_45' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_RrAxlMinRq_write'
     */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_b_RrAxlMinRq_write_IRV(rtb_Logical_i);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCI_OvrrdInputs'
     */
    /* Switch: '<S63>/Switch11' incorporates:
     *  Constant: '<S168>/Calib'
     *  Constant: '<S240>/Calib'
     *  Constant: '<S63>/Constant Value16'
     *  Merge: '<Root>/Merge_64'
     *  Selector: '<S63>/Selector15'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    if (KaSCCR_b_RqFAOvrdEnbl[(5)])
    {
        rtb_Logical_i = KeSCCR_b_RrAxlTqRqFAOvrdVal;
    }
    else
    {
        rtb_Logical_i = Rte_IrvRead_SCCR_FastTEF1_VeSCCR_b_RrAxlRqFA_write_IRV();
    }

    /* End of Switch: '<S63>/Switch11' */
    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */

    /* Merge: '<Root>/Merge_50' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_b_RrAxlTqRqFA_write'
     */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_b_RrAxlTqRqFA_write_IRV(rtb_Logical_i);

    /* S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCI_OvrrdInputs'
     */
    /* Switch: '<S63>/Switch12' incorporates:
     *  Constant: '<S206>/Calib'
     *  Constant: '<S245>/Calib'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtSCCR_FastTEF1Inport100'
     */
    if (KeSCCR_b_EPBHoldStsOvrdEnbl)
    {
        tmp = KeSCCR_e_EPBHoldStsOvrdVal;
    }
    else
    {
        tmp = SCCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ev;
    }

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S30>/VeSCCI_e_EPBHoldSts_write'
     *  Switch: '<S63>/Switch12'
     */
    Rte_IrvWrite_SCCR_FastTEF1_VeSCCI_e_EPBHoldSts_write_IRV(tmp);

    /* End of Outputs for S-Function (fcgen): '<S30>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SCCR_FastTEF1' */
    (void)Rte_Write_VeSCCR_b_OutputTorqueLimit_CAN_FA_Value
        (SCCR_ac_B.VeSCCI_b_Output_Torque_Lim_FA);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF1' */
#endif

    /* End of Outport: '<Root>/VeSCCR_b_OutputTorqueLimit_CAN_FA' */
}

#endif

/* Model step function for TID2 */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) SCCR_FastTEF2(void) /* Explicit Task: FastTEF2 */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_VeSCCI_M_FrntAxlTrqEst_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_VeSCCI_M_RrAxlTrqEst_write_IRV;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_Comparison2_n;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_Comparison2_e;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 tmpRead_0;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 tmpRead_1;

#endif

#if Rte_SysCon_Variant_SCCR_3

    TeTRGR_e_TransRangeState tmpRead_2;

#endif

#if Rte_SysCon_Variant_SCCR_3

    TeHSER_e_RngSt tmpRead_3;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_Logical5;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_Logical3;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_NotEqual_i;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_NotEqual_l;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_Maximum_h;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_TmpSignalConversionAtVeWTAR_r_PRNDL_;

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF2' */
    /* Inport: '<Root>/VeHTDR_M_OptToRear_OptTaTb' */
    (void)Rte_Read_VeHTDR_M_OptToRear_OptTaTb_Value(&tmpRead_0);

    /* Inport: '<Root>/VeHTDR_M_OptToFront_OptTaTb' */
    (void)Rte_Read_VeHTDR_M_OptToFront_OptTaTb_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/SCCR_FastTEF2' */
    /* SignalConversion generated from: '<S31>/VeSCCI_M_FrntAxlTrqEst_read' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    rtb_VeSCCI_M_FrntAxlTrqEst_write_IRV =
        Rte_IrvRead_SCCR_FastTEF2_VeSCCI_M_FrntAxlTrqEst_write_IRV();

    /* SignalConversion generated from: '<S31>/VeSCCI_M_RrAxlTrqEst_read' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    rtb_VeSCCI_M_RrAxlTrqEst_write_IRV =
        Rte_IrvRead_SCCR_FastTEF2_VeSCCI_M_RrAxlTrqEst_write_IRV();

    /* SignalConversion generated from: '<S31>/VeWTAR_r_PRNDL_Coeff' incorporates:
     *  Inport: '<Root>/VeWTAR_r_PRNDL_Coeff'
     */
    (void)Rte_Read_VeWTAR_r_PRNDL_Coeff_Value
        (&rtb_TmpSignalConversionAtVeWTAR_r_PRNDL_);

    /* S-Function (fcgen): '<S31>/FcnCallGen' incorporates:
     *  SubSystem: '<S31>/SCCC_PassThrough'
     */
    /* Outputs for Atomic SubSystem: '<S254>/Digital Lowpass Reset Enabled2' */
    /* Outputs for Atomic SubSystem: '<S254>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S256>/Switch1' incorporates:
     *  Constant: '<S254>/Constant Value'
     *  Constant: '<S254>/Constant Value2'
     *  Constant: '<S254>/FALSE Constant'
     *  Constant: '<S254>/TRUE Constant'
     *  Switch: '<S256>/Switch2'
     *  Switch: '<S257>/Switch1'
     *  Switch: '<S257>/Switch2'
     *  UnitDelay: '<S256>/Unit Delay'
     *  UnitDelay: '<S257>/Unit Delay'
     */
    if (false)
    {
        SCCR_ac_DW.UnitDelay_DSTATE_g = 0.0F;
        SCCR_ac_DW.UnitDelay_DSTATE_p = 0.0F;
    }
    else
    {
        if (true)
        {
            /* UnitDelay: '<S256>/Unit Delay' incorporates:
             *  Constant: '<S259>/Calib'
             *  Product: '<S256>/Multiplication'
             *  Sum: '<S256>/Subtraction'
             *  Sum: '<S256>/Summation'
             *  Switch: '<S256>/Switch2'
             */
            SCCR_ac_DW.UnitDelay_DSTATE_g +=
                (rtb_VeSCCI_M_FrntAxlTrqEst_write_IRV -
                 SCCR_ac_DW.UnitDelay_DSTATE_g) *
                KeSCCR_k_FiltCoeffFrntAxlTrqEst;

            /* UnitDelay: '<S257>/Unit Delay' incorporates:
             *  Constant: '<S260>/Calib'
             *  Product: '<S257>/Multiplication'
             *  Sum: '<S257>/Subtraction'
             *  Sum: '<S257>/Summation'
             *  Switch: '<S257>/Switch2'
             */
            SCCR_ac_DW.UnitDelay_DSTATE_p += (rtb_VeSCCI_M_RrAxlTrqEst_write_IRV
                - SCCR_ac_DW.UnitDelay_DSTATE_p) * KeSCCR_k_FiltCoeffRrAxlTrqEst;
        }
    }

    /* End of Switch: '<S256>/Switch1' */
    /* End of Outputs for SubSystem: '<S254>/Digital Lowpass Reset Enabled' */
    /* End of Outputs for SubSystem: '<S254>/Digital Lowpass Reset Enabled2' */
    /* End of Outputs for S-Function (fcgen): '<S31>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SCCR_FastTEF2' */

    /* Inport: '<Root>/VeHSER_e_RngSt' */
    (void)Rte_Read_VeHSER_e_RngSt_Value(&tmpRead_3);

    /* Inport: '<Root>/VeTRGR_e_VldtdTransRngSt' */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value(&tmpRead_2);

    /* Inport: '<Root>/VeBTQR_M_DrvrIntndedTotBrkTrq' */
    (void)Rte_Read_VeBTQR_M_DrvrIntndedTotBrkTrq_Value(&rtb_Maximum_h);

    /* Inport: '<Root>/VeOSMR_b_SeriesModeAllowed' */
    (void)Rte_Read_VeOSMR_b_SeriesModeAllowed_Value(&rtb_NotEqual_l);

    /* Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd' */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value(&tmpRead_1);

    /* Outputs for Function Call SubSystem: '<Root>/SCCR_FastTEF2' */
    /* S-Function (fcgen): '<S31>/FcnCallGen' incorporates:
     *  SubSystem: '<S31>/SCCC_PassThrough'
     */
    /* Logic: '<S269>/Logical5' incorporates:
     *  Abs: '<S269>/Abs'
     *  Constant: '<S272>/Constant'
     *  Constant: '<S273>/Constant'
     *  Constant: '<S275>/Calib'
     *  Constant: '<S276>/Calib'
     *  Constant: '<S278>/Calib'
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     *  Logic: '<S269>/Logical'
     *  Logic: '<S269>/Logical1'
     *  Logic: '<S269>/Logical2'
     *  Merge: '<Root>/Merge_9'
     *  RelationalOperator: '<S269>/Comparison1'
     *  RelationalOperator: '<S269>/Comparison2'
     *  RelationalOperator: '<S269>/Comparison3'
     *  RelationalOperator: '<S269>/Comparison5'
     *  SignalConversion generated from: '<S31>/VeSCCI_e_EPBHoldSts_read'
     */
    rtb_Logical5 = ((((rtb_Maximum_h >= KeSCCR_M_StandstillThrsh) ||
                      ((Rte_IrvRead_SCCR_FastTEF2_VeSCCI_e_EPBHoldSts_write_IRV()
                        != CePLTR_e_EPBHoldSts_REL) && (KeSCCR_b_AlwEPBCnd))) &&
                     (fabsf(tmpRead_1) <= KeSCCR_n_NoStandstillThrsh)) ||
                    (tmpRead_2 == CeTRGR_e_TransRangePark));

    /* Logic: '<S269>/Logical3' incorporates:
     *  Constant: '<S274>/Constant'
     *  Constant: '<S277>/Calib'
     *  Inport: '<Root>/VeHSER_e_RngSt'
     *  Logic: '<S269>/Logical4'
     *  RelationalOperator: '<S269>/Comparison4'
     */
    rtb_Logical3 = (rtb_Logical5 || (((KeSCCR_b_EnblSeriesModeCnd) && (tmpRead_3
                       == CeHSER_e_Neutral)) && rtb_NotEqual_l));

    /* Outputs for Atomic SubSystem: '<S261>/EdgeBi' */
    /* RelationalOperator: '<S262>/Not Equal' incorporates:
     *  UnitDelay: '<S262>/Unit Delay'
     */
    rtb_NotEqual_i = (rtb_Logical3 != SCCR_ac_DW.UnitDelay_DSTATE_d);

    /* Update for UnitDelay: '<S262>/Unit Delay' */
    SCCR_ac_DW.UnitDelay_DSTATE_d = rtb_Logical3;

    /* End of Outputs for SubSystem: '<S261>/EdgeBi' */

    /* Outputs for Atomic SubSystem: '<S261>/EdgeBi1' */
    /* RelationalOperator: '<S263>/Not Equal' incorporates:
     *  UnitDelay: '<S263>/Unit Delay'
     */
    rtb_NotEqual_l = (rtb_Logical5 != SCCR_ac_DW.UnitDelay_DSTATE_k);

    /* Update for UnitDelay: '<S263>/Unit Delay' */
    SCCR_ac_DW.UnitDelay_DSTATE_k = rtb_Logical5;

    /* End of Outputs for SubSystem: '<S261>/EdgeBi1' */

    /* Switch: '<S279>/Switch3' incorporates:
     *  Switch: '<S270>/Switch1'
     *  Switch: '<S279>/Switch2'
     *  UnitDelay: '<S270>/Unit Delay'
     *  UnitDelay: '<S279>/Unit Delay'
     */
    if (rtb_NotEqual_i)
    {
        /* Switch: '<S279>/Switch1' incorporates:
         *  Constant: '<S279>/Constant Value4'
         *  UnitDelay: '<S279>/Unit Delay3'
         */
        SCCR_ac_DW.UnitDelay3_DSTATE = 0.0F;
        SCCR_ac_DW.UnitDelay_DSTATE_f = SCCR_ac_DW.UnitDelay_DSTATE;
    }
    else
    {
        if (rtb_Logical3)
        {
            /* Switch: '<S270>/Switch1' incorporates:
             *  Constant: '<S265>/Calib'
             */
            rtb_Maximum_h = KeSCCR_t_FrntTrqEstBlndIn;
        }
        else
        {
            /* Switch: '<S270>/Switch1' incorporates:
             *  Constant: '<S266>/Calib'
             */
            rtb_Maximum_h = KeSCCR_t_FrntTrqEstBlndOut;
        }

        /* MinMax: '<S279>/Maximum' incorporates:
         *  Constant: '<S264>/Calib'
         */
        rtb_Maximum_h = fmaxf(HeSCCR_t_dt, rtb_Maximum_h);

        /* Outputs for Atomic SubSystem: '<S279>/Protected Division' */
        /* Switch: '<S281>/Switch1' incorporates:
         *  Constant: '<S264>/Calib'
         *  Constant: '<S281>/Constant Value'
         *  Constant: '<S281>/Constant Value1'
         *  Constant: '<S281>/Constant Value2'
         *  Constant: '<S281>/Constant Value3'
         *  Logic: '<S281>/AND'
         *  RelationalOperator: '<S281>/Greater Than or Equal '
         *  RelationalOperator: '<S281>/Greater Than or Equal 1'
         *  RelationalOperator: '<S281>/Not Equal'
         *  RelationalOperator: '<S281>/Not Equal1'
         *  Switch: '<S281>/Switch2'
         *  Switch: '<S281>/Switch3'
         */
        if ((HeSCCR_t_dt != 0.0F) && (rtb_Maximum_h != 0.0F))
        {
            /* Switch: '<S281>/Switch1' incorporates:
             *  Product: '<S281>/Division'
             */
            rtb_Maximum_h = HeSCCR_t_dt / rtb_Maximum_h;
        }
        else if (HeSCCR_t_dt > 0.0F)
        {
            /* Switch: '<S281>/Switch2' incorporates:
             *  Constant: '<S281>/MAXFLOAT'
             *  Switch: '<S281>/Switch1'
             */
            rtb_Maximum_h = 3.402823466E+38F;
        }
        else if (HeSCCR_t_dt < 0.0F)
        {
            /* Switch: '<S281>/Switch3' incorporates:
             *  Constant: '<S281>/MINFLOAT'
             *  Switch: '<S281>/Switch1'
             *  Switch: '<S281>/Switch2'
             */
            rtb_Maximum_h = (-3.402823466E+38F);
        }
        else
        {
            /* Switch: '<S281>/Switch1' incorporates:
             *  Constant: '<S281>/Constant Value4'
             *  Switch: '<S281>/Switch2'
             *  Switch: '<S281>/Switch3'
             */
            rtb_Maximum_h = 0.0F;
        }

        /* End of Switch: '<S281>/Switch1' */
        /* End of Outputs for SubSystem: '<S279>/Protected Division' */

        /* Switch: '<S279>/Switch1' incorporates:
         *  Constant: '<S279>/Constant Value2'
         *  Constant: '<S279>/Constant Value3'
         *  Logic: '<S279>/Logical'
         *  MinMax: '<S279>/MinMax'
         *  Sum: '<S279>/Summation1'
         *  UnitDelay: '<S279>/Unit Delay1'
         *  UnitDelay: '<S279>/Unit Delay3'
         */
        if ((!SCCR_ac_DW.UnitDelay1_DSTATE_i) || (!SCCR_ac_ConstB.Logical2))
        {
            SCCR_ac_DW.UnitDelay3_DSTATE = 1.0F;
        }

        SCCR_ac_DW.UnitDelay3_DSTATE = fminf(SCCR_ac_DW.UnitDelay3_DSTATE +
            rtb_Maximum_h, 1.0F);
    }

    /* End of Switch: '<S279>/Switch3' */

    /* RelationalOperator: '<S279>/Comparison2' incorporates:
     *  Constant: '<S279>/Constant Value1'
     *  UnitDelay: '<S279>/Unit Delay3'
     */
    rtb_Comparison2_n = (SCCR_ac_DW.UnitDelay3_DSTATE < 1.0F);

    /* Switch: '<S270>/Switch' incorporates:
     *  Constant: '<S261>/Constant Value'
     *  Product: '<S254>/Product'
     *  UnitDelay: '<S256>/Unit Delay'
     */
    if (rtb_Logical3)
    {
        rtb_Maximum_h = 0.0F;
    }
    else
    {
        rtb_Maximum_h = SCCR_ac_DW.UnitDelay_DSTATE_g *
            rtb_TmpSignalConversionAtVeWTAR_r_PRNDL_;
    }

    /* End of Switch: '<S270>/Switch' */

    /* Sum: '<S279>/Summation' incorporates:
     *  Constant: '<S279>/Constant Value'
     *  Product: '<S279>/Multiplication'
     *  Product: '<S279>/Multiplication3'
     *  Sum: '<S279>/Subtraction'
     *  UnitDelay: '<S270>/Unit Delay'
     *  UnitDelay: '<S279>/Unit Delay'
     *  UnitDelay: '<S279>/Unit Delay3'
     */
    SCCR_ac_DW.UnitDelay_DSTATE = ((1.0F - SCCR_ac_DW.UnitDelay3_DSTATE) *
        SCCR_ac_DW.UnitDelay_DSTATE_f) + (SCCR_ac_DW.UnitDelay3_DSTATE *
        rtb_Maximum_h);

    /* Switch: '<S282>/Switch3' incorporates:
     *  Switch: '<S271>/Switch1'
     *  Switch: '<S282>/Switch2'
     *  UnitDelay: '<S271>/Unit Delay'
     *  UnitDelay: '<S282>/Unit Delay'
     */
    if (rtb_NotEqual_l)
    {
        /* Switch: '<S282>/Switch1' incorporates:
         *  Constant: '<S282>/Constant Value4'
         *  UnitDelay: '<S282>/Unit Delay3'
         */
        SCCR_ac_DW.UnitDelay3_DSTATE_e = 0.0F;
        SCCR_ac_DW.UnitDelay_DSTATE_n = SCCR_ac_DW.UnitDelay_DSTATE_m;
    }
    else
    {
        if (rtb_Logical5)
        {
            /* Switch: '<S271>/Switch1' incorporates:
             *  Constant: '<S267>/Calib'
             */
            rtb_Maximum_h = KeSCCR_t_RrTrqEstBlndIn;
        }
        else
        {
            /* Switch: '<S271>/Switch1' incorporates:
             *  Constant: '<S268>/Calib'
             */
            rtb_Maximum_h = KeSCCR_t_RrTrqEstBlndOut;
        }

        /* MinMax: '<S282>/Maximum' incorporates:
         *  Constant: '<S264>/Calib'
         */
        rtb_Maximum_h = fmaxf(HeSCCR_t_dt, rtb_Maximum_h);

        /* Outputs for Atomic SubSystem: '<S282>/Protected Division' */
        /* Switch: '<S284>/Switch1' incorporates:
         *  Constant: '<S264>/Calib'
         *  Constant: '<S284>/Constant Value'
         *  Constant: '<S284>/Constant Value1'
         *  Constant: '<S284>/Constant Value2'
         *  Constant: '<S284>/Constant Value3'
         *  Logic: '<S284>/AND'
         *  RelationalOperator: '<S284>/Greater Than or Equal '
         *  RelationalOperator: '<S284>/Greater Than or Equal 1'
         *  RelationalOperator: '<S284>/Not Equal'
         *  RelationalOperator: '<S284>/Not Equal1'
         *  Switch: '<S284>/Switch2'
         *  Switch: '<S284>/Switch3'
         */
        if ((HeSCCR_t_dt != 0.0F) && (rtb_Maximum_h != 0.0F))
        {
            /* Switch: '<S284>/Switch1' incorporates:
             *  Product: '<S284>/Division'
             */
            rtb_Maximum_h = HeSCCR_t_dt / rtb_Maximum_h;
        }
        else if (HeSCCR_t_dt > 0.0F)
        {
            /* Switch: '<S284>/Switch2' incorporates:
             *  Constant: '<S284>/MAXFLOAT'
             *  Switch: '<S284>/Switch1'
             */
            rtb_Maximum_h = 3.402823466E+38F;
        }
        else if (HeSCCR_t_dt < 0.0F)
        {
            /* Switch: '<S284>/Switch3' incorporates:
             *  Constant: '<S284>/MINFLOAT'
             *  Switch: '<S284>/Switch1'
             *  Switch: '<S284>/Switch2'
             */
            rtb_Maximum_h = (-3.402823466E+38F);
        }
        else
        {
            /* Switch: '<S284>/Switch1' incorporates:
             *  Constant: '<S284>/Constant Value4'
             *  Switch: '<S284>/Switch2'
             *  Switch: '<S284>/Switch3'
             */
            rtb_Maximum_h = 0.0F;
        }

        /* End of Switch: '<S284>/Switch1' */
        /* End of Outputs for SubSystem: '<S282>/Protected Division' */

        /* Switch: '<S282>/Switch1' incorporates:
         *  Constant: '<S282>/Constant Value2'
         *  Constant: '<S282>/Constant Value3'
         *  Logic: '<S282>/Logical'
         *  MinMax: '<S282>/MinMax'
         *  Sum: '<S282>/Summation1'
         *  UnitDelay: '<S282>/Unit Delay1'
         *  UnitDelay: '<S282>/Unit Delay3'
         */
        if ((!SCCR_ac_DW.UnitDelay1_DSTATE_d) || (!SCCR_ac_ConstB.Logical2_n))
        {
            SCCR_ac_DW.UnitDelay3_DSTATE_e = 1.0F;
        }

        SCCR_ac_DW.UnitDelay3_DSTATE_e = fminf(SCCR_ac_DW.UnitDelay3_DSTATE_e +
            rtb_Maximum_h, 1.0F);
    }

    /* End of Switch: '<S282>/Switch3' */

    /* RelationalOperator: '<S282>/Comparison2' incorporates:
     *  Constant: '<S282>/Constant Value1'
     *  UnitDelay: '<S282>/Unit Delay3'
     */
    rtb_Comparison2_e = (SCCR_ac_DW.UnitDelay3_DSTATE_e < 1.0F);

    /* Switch: '<S271>/Switch' incorporates:
     *  Constant: '<S261>/Constant Value1'
     *  Product: '<S254>/Product2'
     *  UnitDelay: '<S257>/Unit Delay'
     */
    if (rtb_Logical5)
    {
        rtb_Maximum_h = 0.0F;
    }
    else
    {
        rtb_Maximum_h = SCCR_ac_DW.UnitDelay_DSTATE_p *
            rtb_TmpSignalConversionAtVeWTAR_r_PRNDL_;
    }

    /* End of Switch: '<S271>/Switch' */

    /* Sum: '<S282>/Summation' incorporates:
     *  Constant: '<S282>/Constant Value'
     *  Product: '<S282>/Multiplication'
     *  Product: '<S282>/Multiplication3'
     *  Sum: '<S282>/Subtraction'
     *  UnitDelay: '<S271>/Unit Delay'
     *  UnitDelay: '<S282>/Unit Delay'
     *  UnitDelay: '<S282>/Unit Delay3'
     */
    SCCR_ac_DW.UnitDelay_DSTATE_m = ((1.0F - SCCR_ac_DW.UnitDelay3_DSTATE_e) *
        SCCR_ac_DW.UnitDelay_DSTATE_n) + (SCCR_ac_DW.UnitDelay3_DSTATE_e *
        rtb_Maximum_h);

    /* Update for UnitDelay: '<S279>/Unit Delay1' incorporates:
     *  Constant: '<S279>/TRUE Constant'
     */
    SCCR_ac_DW.UnitDelay1_DSTATE_i = true;

    /* Update for UnitDelay: '<S282>/Unit Delay1' incorporates:
     *  Constant: '<S282>/TRUE Constant'
     */
    SCCR_ac_DW.UnitDelay1_DSTATE_d = true;

    /* Outport: '<Root>/VeSCCR_M_FrntAxlTrqEstRadio' incorporates:
     *  Gain: '<S280>/Gain'
     *  SignalConversion generated from: '<S31>/VeSCCC_M_FrntAxlTrqEstRadio'
     *  UnitDelay: '<S270>/Unit Delay'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlTrqEstRadio_Value(1.0F *
        SCCR_ac_DW.UnitDelay_DSTATE);

    /* Outport: '<Root>/VeSCCR_M_RrAxlTrqEstRadio' incorporates:
     *  Gain: '<S283>/Gain'
     *  SignalConversion generated from: '<S31>/VeSCCC_M_RrAxlTrqEstRadio'
     *  UnitDelay: '<S271>/Unit Delay'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlTrqEstRadio_Value(1.0F *
        SCCR_ac_DW.UnitDelay_DSTATE_m);

    /* S-Function (fcgen): '<S31>/FcnCallGen' incorporates:
     *  SubSystem: '<S31>/SCCI_OptTrqOvrrd'
     */
    /* Switch: '<S255>/Switch12' incorporates:
     *  Constant: '<S288>/Calib'
     */
    if (KeSCCR_b_FrntAxlTrqEstOvrdEnbl)
    {
        /* Merge: '<Root>/Merge_8' incorporates:
         *  Constant: '<S286>/Calib'
         *  SignalConversion generated from: '<S31>/VeSCCI_M_FrntAxlTrqEst_write'
         */
        Rte_IrvWrite_SCCR_FastTEF2_VeSCCI_M_FrntAxlTrqEst_write_IRV
            (KeSCCR_M_FrntAxlTrqEstOvrdVal);
    }
    else
    {
        /* Merge: '<Root>/Merge_8' incorporates:
         *  SignalConversion generated from: '<S31>/VeSCCI_M_FrntAxlTrqEst_write'
         */
        Rte_IrvWrite_SCCR_FastTEF2_VeSCCI_M_FrntAxlTrqEst_write_IRV(tmpRead);
    }

    /* End of Switch: '<S255>/Switch12' */

    /* Switch: '<S255>/Switch14' incorporates:
     *  Constant: '<S289>/Calib'
     */
    if (KeSCCR_b_RrAxlTrqEstOvrdEnbl)
    {
        /* Merge: '<Root>/Merge_6' incorporates:
         *  Constant: '<S287>/Calib'
         *  SignalConversion generated from: '<S31>/VeSCCI_M_RrAxlTrqEst_write'
         */
        Rte_IrvWrite_SCCR_FastTEF2_VeSCCI_M_RrAxlTrqEst_write_IRV
            (KeSCCR_M_RrAxlTrqEstOvrdVal);
    }
    else
    {
        /* Merge: '<Root>/Merge_6' incorporates:
         *  SignalConversion generated from: '<S31>/VeSCCI_M_RrAxlTrqEst_write'
         */
        Rte_IrvWrite_SCCR_FastTEF2_VeSCCI_M_RrAxlTrqEst_write_IRV(tmpRead_0);
    }

    /* End of Switch: '<S255>/Switch14' */
    /* End of Outputs for S-Function (fcgen): '<S31>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SCCR_FastTEF2' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF2' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) FsftSCCR_M_FlyWRq(void)
{

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftSCCR_M_FlyWRq' */
    /* Merge: '<Root>/Merge_83' incorporates:
     *  Chart: '<S1>/FsftSCCR_M_FlyWRqChrt'
     *  SignalConversion generated from: '<S1>/VeSCCR_b_FlyWRq_FA_write'
     */
    /* Gateway: FsftSCCR_M_FlyWRq/FsftSCCR_M_FlyWRqChrt */
    /* During: FsftSCCR_M_FlyWRq/FsftSCCR_M_FlyWRqChrt */
    /* Entry Internal: FsftSCCR_M_FlyWRq/FsftSCCR_M_FlyWRqChrt */
    /* Transition: '<S33>:2' */
    Rte_IrvWrite_FsftSCCR_M_FlyWRq_VeSCCR_b_FlyWRq_FA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftSCCR_M_FlyWRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) FsftSCCR_M_FrntAxlRq(void)
{

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftSCCR_M_FrntAxlRq' */
    /* Merge: '<Root>/Merge_57' incorporates:
     *  Chart: '<S2>/FsftSCCR_M_FrntAxlRqChrt'
     *  SignalConversion generated from: '<S2>/VeSCCR_M_FrntAxlRq_write'
     */
    /* Gateway: FsftSCCR_M_FrntAxlRq/FsftSCCR_M_FrntAxlRqChrt */
    /* During: FsftSCCR_M_FrntAxlRq/FsftSCCR_M_FrntAxlRqChrt */
    /* Entry Internal: FsftSCCR_M_FrntAxlRq/FsftSCCR_M_FrntAxlRqChrt */
    /* Transition: '<S34>:2' */
    Rte_IrvWrite_FsftSCCR_M_FrntAxlRq_VeSCCR_M_FrntAxlRq_write_IRV
        (KeSCCR_M_FrntAxlRqDflt);

    /* Merge: '<Root>/Merge_58' incorporates:
     *  Chart: '<S2>/FsftSCCR_M_FrntAxlRqChrt'
     *  SignalConversion generated from: '<S2>/VeSCCR_b_FrntAxlRqFA_write'
     */
    Rte_IrvWrite_FsftSCCR_M_FrntAxlRq_VeSCCR_b_FrntAxlRqFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftSCCR_M_FrntAxlRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) FsftSCCR_M_Output_Torque_Limit(void)
{

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftSCCR_M_Output_Torque_Limit' */
    /* Merge: '<Root>/VeSCCR_b_Output_Torque_Limit_FA_IRV_Merge' incorporates:
     *  Chart: '<S3>/FsftSCCR_M_Output_Torque_LimitChrt'
     *  SignalConversion generated from: '<S3>/VeSCCR_b_Output_Torque_LimitFA_write'
     */
    /* Gateway: FsftSCCR_M_Output_Torque_Limit/FsftSCCR_M_Output_Torque_LimitChrt */
    /* During: FsftSCCR_M_Output_Torque_Limit/FsftSCCR_M_Output_Torque_LimitChrt */
    /* Entry Internal: FsftSCCR_M_Output_Torque_Limit/FsftSCCR_M_Output_Torque_LimitChrt */
    /* Transition: '<S35>:2' */
    Rte_IrvWrite_FsftSCCR_M_Output_Torque_Limit_VeSCCR_b_Output_Torque_LimitFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftSCCR_M_Output_Torque_Limit' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) FsftSCCR_M_RrAxlRq(void)
{

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftSCCR_M_RrAxlRq' */
    /* Merge: '<Root>/Merge_63' incorporates:
     *  Chart: '<S4>/FsftSCCR_M_RrAxlRqChrt'
     *  SignalConversion generated from: '<S4>/VeSCCR_M_RrAxlRq_write'
     */
    /* Gateway: FsftSCCR_M_RrAxlRq/FsftSCCR_M_RrAxlRqChrt */
    /* During: FsftSCCR_M_RrAxlRq/FsftSCCR_M_RrAxlRqChrt */
    /* Entry Internal: FsftSCCR_M_RrAxlRq/FsftSCCR_M_RrAxlRqChrt */
    /* Transition: '<S36>:2' */
    Rte_IrvWrite_FsftSCCR_M_RrAxlRq_VeSCCR_M_RrAxlRq_write_IRV
        (KeSCCR_M_RrAxlRqDflt);

    /* Merge: '<Root>/Merge_64' incorporates:
     *  Chart: '<S4>/FsftSCCR_M_RrAxlRqChrt'
     *  SignalConversion generated from: '<S4>/VeSCCR_b_RrAxlRqFA_write'
     */
    Rte_IrvWrite_FsftSCCR_M_RrAxlRq_VeSCCR_b_RrAxlRqFA_write_IRV(true);

    /* End of Outputs for SubSystem: '<Root>/FsftSCCR_M_RrAxlRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) FsftSCCR_b_FlyWMaxRq(void)
{

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftSCCR_b_FlyWMaxRq' */
    /* Chart: '<S5>/FsftSCCR_b_FlyWMaxRqChrt' */
    SCCR_ac_FsftSCCR_b_FlyWMaxRqChrt(&SCCR_ac_B.sf_FsftSCCR_b_FlyWMaxRqChrt);

    /* Merge: '<Root>/Merge_85' incorporates:
     *  SignalConversion generated from: '<S5>/VeSCCR_b_FlyWMaxRq_FA_write'
     * */
    Rte_IrvWrite_FsftSCCR_b_FlyWMaxRq_VeSCCR_b_FlyWMaxRq_FA_write_IRV
        (SCCR_ac_B.sf_FsftSCCR_b_FlyWMaxRqChrt.LeSCCR_b_FlyWMaxRq_FA_out);

    /* End of Outputs for SubSystem: '<Root>/FsftSCCR_b_FlyWMaxRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) FsftSCCR_b_FlyWMinRq(void)
{

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftSCCR_b_FlyWMinRq' */
    /* Chart: '<S6>/FsftSCCR_b_FlyWMinRqChrt' */
    SCCR_ac_FsftSCCR_b_FlyWMaxRqChrt(&SCCR_ac_B.sf_FsftSCCR_b_FlyWMinRqChrt);

    /* Merge: '<Root>/Merge_87' incorporates:
     *  SignalConversion generated from: '<S6>/VeSCCR_b_FlyWMinRq_FA_write'
     * */
    Rte_IrvWrite_FsftSCCR_b_FlyWMinRq_VeSCCR_b_FlyWMinRq_FA_write_IRV
        (SCCR_ac_B.sf_FsftSCCR_b_FlyWMinRqChrt.LeSCCR_b_FlyWMaxRq_FA_out);

    /* End of Outputs for SubSystem: '<Root>/FsftSCCR_b_FlyWMinRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) FsftSCCR_b_FrntAxlMaxRq(void)
{

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftSCCR_b_FrntAxlMaxRq' */
    /* Merge: '<Root>/Merge_54' incorporates:
     *  Chart: '<S7>/FsftSCCR_b_FrntAxlMaxRqChrt'
     *  SignalConversion generated from: '<S7>/VeSCCR_b_FrntAxlMaxRqFA_write'
     */
    /* Gateway: FsftSCCR_b_FrntAxlMaxRq/FsftSCCR_b_FrntAxlMaxRqChrt */
    /* During: FsftSCCR_b_FrntAxlMaxRq/FsftSCCR_b_FrntAxlMaxRqChrt */
    /* Entry Internal: FsftSCCR_b_FrntAxlMaxRq/FsftSCCR_b_FrntAxlMaxRqChrt */
    /* Transition: '<S39>:2' */
    Rte_IrvWrite_FsftSCCR_b_FrntAxlMaxRq_VeSCCR_b_FrntAxlMaxRqFA_write_IRV(true);

    /* Merge: '<Root>/Merge_53' incorporates:
     *  Chart: '<S7>/FsftSCCR_b_FrntAxlMaxRqChrt'
     *  SignalConversion generated from: '<S7>/VeSCCR_b_FrntAxlMaxRq_write'
     */
    Rte_IrvWrite_FsftSCCR_b_FrntAxlMaxRq_VeSCCR_b_FrntAxlMaxRq_write_IRV
        (KeSCCR_b_FrntAxlMaxRqDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftSCCR_b_FrntAxlMaxRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) FsftSCCR_b_FrntAxlMinRq(void)
{

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftSCCR_b_FrntAxlMinRq' */
    /* Merge: '<Root>/Merge_56' incorporates:
     *  Chart: '<S8>/FsftSCCR_b_FrntAxlMinRqChrt'
     *  SignalConversion generated from: '<S8>/VeSCCR_b_FrntAxlMinRqFA_write'
     */
    /* Gateway: FsftSCCR_b_FrntAxlMinRq/FsftSCCR_b_FrntAxlMinRqChrt */
    /* During: FsftSCCR_b_FrntAxlMinRq/FsftSCCR_b_FrntAxlMinRqChrt */
    /* Entry Internal: FsftSCCR_b_FrntAxlMinRq/FsftSCCR_b_FrntAxlMinRqChrt */
    /* Transition: '<S40>:2' */
    Rte_IrvWrite_FsftSCCR_b_FrntAxlMinRq_VeSCCR_b_FrntAxlMinRqFA_write_IRV(true);

    /* Merge: '<Root>/Merge_55' incorporates:
     *  Chart: '<S8>/FsftSCCR_b_FrntAxlMinRqChrt'
     *  SignalConversion generated from: '<S8>/VeSCCR_b_FrntAxlMinRq_write'
     */
    Rte_IrvWrite_FsftSCCR_b_FrntAxlMinRq_VeSCCR_b_FrntAxlMinRq_write_IRV
        (KeSCCR_b_FrntAxlMinRqDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftSCCR_b_FrntAxlMinRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) FsftSCCR_b_RrAxlMaxRq(void)
{

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftSCCR_b_RrAxlMaxRq' */
    /* Merge: '<Root>/Merge_60' incorporates:
     *  Chart: '<S9>/FsftSCCR_b_RrAxlMaxRqChrt'
     *  SignalConversion generated from: '<S9>/VeSCCR_b_RrAxlMaxRqFA_write'
     */
    /* Gateway: FsftSCCR_b_RrAxlMaxRq/FsftSCCR_b_RrAxlMaxRqChrt */
    /* During: FsftSCCR_b_RrAxlMaxRq/FsftSCCR_b_RrAxlMaxRqChrt */
    /* Entry Internal: FsftSCCR_b_RrAxlMaxRq/FsftSCCR_b_RrAxlMaxRqChrt */
    /* Transition: '<S41>:2' */
    Rte_IrvWrite_FsftSCCR_b_RrAxlMaxRq_VeSCCR_b_RrAxlMaxRqFA_write_IRV(true);

    /* Merge: '<Root>/Merge_59' incorporates:
     *  Chart: '<S9>/FsftSCCR_b_RrAxlMaxRqChrt'
     *  SignalConversion generated from: '<S9>/VeSCCR_b_RrAxlMaxRq_write'
     */
    Rte_IrvWrite_FsftSCCR_b_RrAxlMaxRq_VeSCCR_b_RrAxlMaxRq_write_IRV
        (KeSCCR_b_RrAxlMaxRqDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftSCCR_b_RrAxlMaxRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) FsftSCCR_b_RrAxlMinRq(void)
{

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/FsftSCCR_b_RrAxlMinRq' */
    /* Merge: '<Root>/Merge_62' incorporates:
     *  Chart: '<S10>/FsftSCCR_b_RrAxlMinRqChrt'
     *  SignalConversion generated from: '<S10>/VeSCCR_b_RrAxlMinRqFA_write'
     */
    /* Gateway: FsftSCCR_b_RrAxlMinRq/FsftSCCR_b_RrAxlMinRqChrt */
    /* During: FsftSCCR_b_RrAxlMinRq/FsftSCCR_b_RrAxlMinRqChrt */
    /* Entry Internal: FsftSCCR_b_RrAxlMinRq/FsftSCCR_b_RrAxlMinRqChrt */
    /* Transition: '<S42>:2' */
    Rte_IrvWrite_FsftSCCR_b_RrAxlMinRq_VeSCCR_b_RrAxlMinRqFA_write_IRV(true);

    /* Merge: '<Root>/Merge_61' incorporates:
     *  Chart: '<S10>/FsftSCCR_b_RrAxlMinRqChrt'
     *  SignalConversion generated from: '<S10>/VeSCCR_b_RrAxlMinRq_write'
     */
    Rte_IrvWrite_FsftSCCR_b_RrAxlMinRq_VeSCCR_b_RrAxlMinRq_write_IRV(false);

    /* End of Outputs for SubSystem: '<Root>/FsftSCCR_b_RrAxlMinRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) PokeSCCR_M_FlyWRq(VAR(float32, AUTOMATIC) LeSCCR_M_FlyWRq,
    VAR(boolean, AUTOMATIC) LeSCCR_b_FlyWRqFA)
{

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_LeSCCR_b_FlyWRq_FA_out_o;

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_M_FlyWRq);

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_FlyWRqFA);

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeSCCR_M_FlyWRq' */
    /* Chart: '<S11>/PokeSCCR_M_FlyWRqChrt' incorporates:
     *  SignalConversion generated from: '<S11>/LeSCCR_M_RrAxlRq'
     *  SignalConversion generated from: '<S11>/LeSCCR_b_RrAxlRqFA'
     */
    /* Gateway: PokeSCCR_M_FlyWRq/PokeSCCR_M_FlyWRqChrt */
    /* During: PokeSCCR_M_FlyWRq/PokeSCCR_M_FlyWRqChrt */
    /* Entry Internal: PokeSCCR_M_FlyWRq/PokeSCCR_M_FlyWRqChrt */
    /* Transition: '<S43>:2' */
    if (!LeSCCR_b_FlyWRqFA)
    {
        /* Transition: '<S43>:3' */
        /* Transition: '<S43>:15' */
        SCCR_ac_B.LeSCCR_M_FlyWRq_out = LeSCCR_M_FlyWRq;
        rtb_LeSCCR_b_FlyWRq_FA_out_o = false;

        /* Transition: '<S43>:18' */
    }
    else
    {
        /* Transition: '<S43>:4' */
        rtb_LeSCCR_b_FlyWRq_FA_out_o = true;
    }

    /* End of Chart: '<S11>/PokeSCCR_M_FlyWRqChrt' */

    /* Merge: '<Root>/Merge_82' incorporates:
     *  SignalConversion generated from: '<S11>/VeSCCR_M_FlyWRq_write'
     * */
    Rte_IrvWrite_PokeSCCR_M_FlyWRq_VeSCCR_M_FlyWRq_write_IRV
        (SCCR_ac_B.LeSCCR_M_FlyWRq_out);

    /* Merge: '<Root>/Merge_83' incorporates:
     *  SignalConversion generated from: '<S11>/VeSCCR_b_FlyWRq_FA_write'
     * */
    Rte_IrvWrite_PokeSCCR_M_FlyWRq_VeSCCR_b_FlyWRq_FA_write_IRV
        (rtb_LeSCCR_b_FlyWRq_FA_out_o);

    /* End of Outputs for SubSystem: '<Root>/PokeSCCR_M_FlyWRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) PokeSCCR_M_FrntAxlMax_CL(VAR(float32, AUTOMATIC)
    LeSCCR_M_FrntAxlMax_CL)
{

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_M_FrntAxlMax_CL);

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeSCCR_M_FrntAxlMax_CL' */
    /* Merge: '<Root>/VeSCCR_M_FrntAxlMax_CL_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S12>/LeSCCR_M_FrntAxlMax_CL'
     *  SignalConversion generated from: '<S12>/VeSCCR_M_FrntAxlMax_CL_write'
     */
    /* Gateway: PokeSCCR_M_FrntAxlMax_CL/PokeSCCR_M_FrntAxlMax_CLChrt */
    /* During: PokeSCCR_M_FrntAxlMax_CL/PokeSCCR_M_FrntAxlMax_CLChrt */
    /* Entry Internal: PokeSCCR_M_FrntAxlMax_CL/PokeSCCR_M_FrntAxlMax_CLChrt */
    /* Transition: '<S44>:2' */
    Rte_IrvWrite_PokeSCCR_M_FrntAxlMax_CL_VeSCCR_M_FrntAxlMax_CL_write_IRV
        (LeSCCR_M_FrntAxlMax_CL);

    /* End of Outputs for SubSystem: '<Root>/PokeSCCR_M_FrntAxlMax_CL' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) PokeSCCR_M_FrntAxlMin_CL(VAR(float32, AUTOMATIC)
    LeSCCR_M_FrntAxlMin_CL)
{

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_M_FrntAxlMin_CL);

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeSCCR_M_FrntAxlMin_CL' */
    /* Merge: '<Root>/VeSCCR_M_FrntAxlMin_CL_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S13>/LeSCCR_M_FrntAxlMin_CL'
     *  SignalConversion generated from: '<S13>/VeSCCR_M_FrntAxlMin_CL_write'
     */
    /* Gateway: PokeSCCR_M_FrntAxlMin_CL/PokeSCCR_M_FrntAxlMin_CLChrt */
    /* During: PokeSCCR_M_FrntAxlMin_CL/PokeSCCR_M_FrntAxlMin_CLChrt */
    /* Entry Internal: PokeSCCR_M_FrntAxlMin_CL/PokeSCCR_M_FrntAxlMin_CLChrt */
    /* Transition: '<S45>:2' */
    Rte_IrvWrite_PokeSCCR_M_FrntAxlMin_CL_VeSCCR_M_FrntAxlMin_CL_write_IRV
        (LeSCCR_M_FrntAxlMin_CL);

    /* End of Outputs for SubSystem: '<Root>/PokeSCCR_M_FrntAxlMin_CL' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) PokeSCCR_M_FrntAxlRq(VAR(float32, AUTOMATIC)
    LeSCCR_M_FrntAxlRq, VAR(boolean, AUTOMATIC) LeSCCR_b_FrntAxlRqFA)
{

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_LeSCCR_b_FrntAxlRqFA_out_c;

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_M_FrntAxlRq);

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_FrntAxlRqFA);

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeSCCR_M_FrntAxlRq' */
    /* Chart: '<S14>/PokeSCCR_M_FrntAxlRqChrt' incorporates:
     *  SignalConversion generated from: '<S14>/LeSCCR_b_FrntAxlRqFA'
     */
    /* Gateway: PokeSCCR_M_FrntAxlRq/PokeSCCR_M_FrntAxlRqChrt */
    /* During: PokeSCCR_M_FrntAxlRq/PokeSCCR_M_FrntAxlRqChrt */
    /* Entry Internal: PokeSCCR_M_FrntAxlRq/PokeSCCR_M_FrntAxlRqChrt */
    /* Transition: '<S46>:2' */
    if (!LeSCCR_b_FrntAxlRqFA)
    {
        /* SignalConversion generated from: '<S14>/VeSCCR_M_FrntAxlRq_write' incorporates:
         *  Merge: '<Root>/Merge_57'
         *  SignalConversion generated from: '<S14>/LeSCCR_M_FrntAxlRq'
         */
        /* Transition: '<S46>:3' */
        /* Transition: '<S46>:15' */
        Rte_IrvWrite_PokeSCCR_M_FrntAxlRq_VeSCCR_M_FrntAxlRq_write_IRV
            (LeSCCR_M_FrntAxlRq);
        rtb_LeSCCR_b_FrntAxlRqFA_out_c = false;

        /* Transition: '<S46>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S14>/VeSCCR_M_FrntAxlRq_write' incorporates:
         *  Merge: '<Root>/Merge_57'
         */
        /* Transition: '<S46>:4' */
        Rte_IrvWrite_PokeSCCR_M_FrntAxlRq_VeSCCR_M_FrntAxlRq_write_IRV
            (KeSCCR_M_FrntAxlRqDflt);
        rtb_LeSCCR_b_FrntAxlRqFA_out_c = true;
    }

    /* End of Chart: '<S14>/PokeSCCR_M_FrntAxlRqChrt' */

    /* Merge: '<Root>/Merge_58' incorporates:
     *  SignalConversion generated from: '<S14>/VeSCCR_b_FrntAxlRqFA_write'
     * */
    Rte_IrvWrite_PokeSCCR_M_FrntAxlRq_VeSCCR_b_FrntAxlRqFA_write_IRV
        (rtb_LeSCCR_b_FrntAxlRqFA_out_c);

    /* End of Outputs for SubSystem: '<Root>/PokeSCCR_M_FrntAxlRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) PokeSCCR_M_Output_Torque_Limit(VAR(float32, AUTOMATIC)
    LeSCCR_M_Output_Torque_Limit, VAR(boolean, AUTOMATIC)
    LeSCCR_b_Output_Torque_LimitFA)
{

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_LeSCCR_b_Output_Torque_LimitFA_out;

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_M_Output_Torque_Limit);

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_Output_Torque_LimitFA);

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeSCCR_M_Output_Torque_Limit' */
    /* Chart: '<S15>/PokeSCCR_M_Output_Torque_LimitChrt' incorporates:
     *  SignalConversion generated from: '<S15>/LeSCCR_M_RrAxlRq'
     *  SignalConversion generated from: '<S15>/LeSCCR_b_RrAxlRqFA'
     */
    /* Gateway: PokeSCCR_M_Output_Torque_Limit/PokeSCCR_M_Output_Torque_LimitChrt */
    /* During: PokeSCCR_M_Output_Torque_Limit/PokeSCCR_M_Output_Torque_LimitChrt */
    /* Entry Internal: PokeSCCR_M_Output_Torque_Limit/PokeSCCR_M_Output_Torque_LimitChrt */
    /* Transition: '<S47>:2' */
    if (!LeSCCR_b_Output_Torque_LimitFA)
    {
        /* Transition: '<S47>:3' */
        /* Transition: '<S47>:15' */
        SCCR_ac_B.LeSCCR_M_Output_Torque_Limit_out =
            LeSCCR_M_Output_Torque_Limit;
        rtb_LeSCCR_b_Output_Torque_LimitFA_out = false;

        /* Transition: '<S47>:18' */
    }
    else
    {
        /* Transition: '<S47>:4' */
        rtb_LeSCCR_b_Output_Torque_LimitFA_out = true;
    }

    /* End of Chart: '<S15>/PokeSCCR_M_Output_Torque_LimitChrt' */

    /* Merge: '<Root>/VeSCCR_M_Output_Torque_Limit_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S15>/VeSCCR_M_Output_Torque_Limit_write'
     * */
    Rte_IrvWrite_PokeSCCR_M_Output_Torque_Limit_VeSCCR_M_Output_Torque_Limit_write_IRV
        (SCCR_ac_B.LeSCCR_M_Output_Torque_Limit_out);

    /* Merge: '<Root>/VeSCCR_b_Output_Torque_Limit_FA_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S15>/VeSCCR_b_Output_Torque_LimitFA_write'
     * */
    Rte_IrvWrite_PokeSCCR_M_Output_Torque_Limit_VeSCCR_b_Output_Torque_LimitFA_write_IRV
        (rtb_LeSCCR_b_Output_Torque_LimitFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeSCCR_M_Output_Torque_Limit' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) PokeSCCR_M_RrAxlMax_CL(VAR(float32, AUTOMATIC)
    LeSCCR_M_RrAxlMax_CL)
{

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_M_RrAxlMax_CL);

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeSCCR_M_RrAxlMax_CL' */
    /* Merge: '<Root>/VeSCCR_M_RrAxlMax_CL_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S16>/LeSCCR_M_RrAxlMax_CL'
     *  SignalConversion generated from: '<S16>/VeSCCR_M_RrAxlMax_CL_write'
     */
    /* Gateway: PokeSCCR_M_RrAxlMax_CL/PokeSCCR_M_RrAxlMax_CLChrt */
    /* During: PokeSCCR_M_RrAxlMax_CL/PokeSCCR_M_RrAxlMax_CLChrt */
    /* Entry Internal: PokeSCCR_M_RrAxlMax_CL/PokeSCCR_M_RrAxlMax_CLChrt */
    /* Transition: '<S48>:2' */
    Rte_IrvWrite_PokeSCCR_M_RrAxlMax_CL_VeSCCR_M_RrAxlMax_CL_write_IRV
        (LeSCCR_M_RrAxlMax_CL);

    /* End of Outputs for SubSystem: '<Root>/PokeSCCR_M_RrAxlMax_CL' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) PokeSCCR_M_RrAxlMin_CL(VAR(float32, AUTOMATIC)
    LeSCCR_M_RrAxlMin_CL)
{

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_M_RrAxlMin_CL);

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeSCCR_M_RrAxlMin_CL' */
    /* Merge: '<Root>/VeSCCR_M_RrAxlMin_CL_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S17>/LeSCCR_M_RrAxlMin_CL'
     *  SignalConversion generated from: '<S17>/VeSCCR_M_RrAxlMin_CL_write'
     */
    /* Gateway: PokeSCCR_M_RrAxlMin_CL/PokeSCCR_M_RrAxlMin_CLChrt */
    /* During: PokeSCCR_M_RrAxlMin_CL/PokeSCCR_M_RrAxlMin_CLChrt */
    /* Entry Internal: PokeSCCR_M_RrAxlMin_CL/PokeSCCR_M_RrAxlMin_CLChrt */
    /* Transition: '<S49>:2' */
    Rte_IrvWrite_PokeSCCR_M_RrAxlMin_CL_VeSCCR_M_RrAxlMin_CL_write_IRV
        (LeSCCR_M_RrAxlMin_CL);

    /* End of Outputs for SubSystem: '<Root>/PokeSCCR_M_RrAxlMin_CL' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) PokeSCCR_M_RrAxlRq(VAR(float32, AUTOMATIC)
    LeSCCR_M_RrAxlRq, VAR(boolean, AUTOMATIC) LeSCCR_b_RrAxlRqFA)
{

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_LeSCCR_b_RrAxlRqFA_out;

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_M_RrAxlRq);

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_RrAxlRqFA);

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeSCCR_M_RrAxlRq' */
    /* Chart: '<S18>/PokeSCCR_M_RrAxlRqChrt' incorporates:
     *  SignalConversion generated from: '<S18>/LeSCCR_b_RrAxlRqFA'
     */
    /* Gateway: PokeSCCR_M_RrAxlRq/PokeSCCR_M_RrAxlRqChrt */
    /* During: PokeSCCR_M_RrAxlRq/PokeSCCR_M_RrAxlRqChrt */
    /* Entry Internal: PokeSCCR_M_RrAxlRq/PokeSCCR_M_RrAxlRqChrt */
    /* Transition: '<S50>:2' */
    if (!LeSCCR_b_RrAxlRqFA)
    {
        /* SignalConversion generated from: '<S18>/VeSCCR_M_RrAxlRq_write' incorporates:
         *  Merge: '<Root>/Merge_63'
         *  SignalConversion generated from: '<S18>/LeSCCR_M_RrAxlRq'
         */
        /* Transition: '<S50>:3' */
        /* Transition: '<S50>:15' */
        Rte_IrvWrite_PokeSCCR_M_RrAxlRq_VeSCCR_M_RrAxlRq_write_IRV
            (LeSCCR_M_RrAxlRq);
        rtb_LeSCCR_b_RrAxlRqFA_out = false;

        /* Transition: '<S50>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S18>/VeSCCR_M_RrAxlRq_write' incorporates:
         *  Merge: '<Root>/Merge_63'
         */
        /* Transition: '<S50>:4' */
        Rte_IrvWrite_PokeSCCR_M_RrAxlRq_VeSCCR_M_RrAxlRq_write_IRV
            (KeSCCR_M_RrAxlRqDflt);
        rtb_LeSCCR_b_RrAxlRqFA_out = true;
    }

    /* End of Chart: '<S18>/PokeSCCR_M_RrAxlRqChrt' */

    /* Merge: '<Root>/Merge_64' incorporates:
     *  SignalConversion generated from: '<S18>/VeSCCR_b_RrAxlRqFA_write'
     * */
    Rte_IrvWrite_PokeSCCR_M_RrAxlRq_VeSCCR_b_RrAxlRqFA_write_IRV
        (rtb_LeSCCR_b_RrAxlRqFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeSCCR_M_RrAxlRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) PokeSCCR_b_AWDDiscnctAllwd(VAR(boolean, AUTOMATIC)
    LeSCCR_b_AWDDiscnctAllwd)
{

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_AWDDiscnctAllwd);

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeSCCR_b_AWDDiscnctAllwd' */
    /* Merge: '<Root>/VeSCCR_b_AWDDiscnctAllwd_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S19>/LeSCCR_b_AWDDiscnctAllwd'
     *  SignalConversion generated from: '<S19>/VeSCCR_b_AWDDiscnctAllwd_write'
     */
    /* Gateway: PokeSCCR_b_AWDDiscnctAllwd/PokeSCCR_b_AWDDiscnctAllwdChrt */
    /* During: PokeSCCR_b_AWDDiscnctAllwd/PokeSCCR_b_AWDDiscnctAllwdChrt */
    /* Entry Internal: PokeSCCR_b_AWDDiscnctAllwd/PokeSCCR_b_AWDDiscnctAllwdChrt */
    /* Transition: '<S51>:2' */
    Rte_IrvWrite_PokeSCCR_b_AWDDiscnctAllwd_VeSCCR_b_AWDDiscnctAllwd_write_IRV
        (LeSCCR_b_AWDDiscnctAllwd);

    /* End of Outputs for SubSystem: '<Root>/PokeSCCR_b_AWDDiscnctAllwd' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) PokeSCCR_b_DsblAEMDPGainFrnt(VAR(boolean, AUTOMATIC)
    LeSCCR_b_DsblAEMDPGainFrnt)
{

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_DsblAEMDPGainFrnt);

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeSCCR_b_DsblAEMDPGainFrnt' */
    /* Merge: '<Root>/VeSCCR_b_DsblAEMDPGainFrnt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S20>/LeSCCR_b_DsblAEMDPGainFrnt'
     *  SignalConversion generated from: '<S20>/VeSCCR_b_DsblAEMDPGainFrnt_write'
     */
    /* Gateway: PokeSCCR_b_DsblAEMDPGainFrnt/PokeSCCR_b_DsblAEMDPGainFrntChrt */
    /* During: PokeSCCR_b_DsblAEMDPGainFrnt/PokeSCCR_b_DsblAEMDPGainFrntChrt */
    /* Entry Internal: PokeSCCR_b_DsblAEMDPGainFrnt/PokeSCCR_b_DsblAEMDPGainFrntChrt */
    /* Transition: '<S52>:2' */
    Rte_IrvWrite_PokeSCCR_b_DsblAEMDPGainFrnt_VeSCCR_b_DsblAEMDPGainFrnt_write_IRV
        (LeSCCR_b_DsblAEMDPGainFrnt);

    /* End of Outputs for SubSystem: '<Root>/PokeSCCR_b_DsblAEMDPGainFrnt' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) PokeSCCR_b_DsblAEMDPGainRr(VAR(boolean, AUTOMATIC)
    LeSCCR_b_DsblAEMDPGainRr)
{

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_DsblAEMDPGainRr);

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeSCCR_b_DsblAEMDPGainRr' */
    /* Merge: '<Root>/VeSCCR_b_DsblAEMDPGainRr_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S21>/LeSCCR_b_DsblAEMDPGainRr'
     *  SignalConversion generated from: '<S21>/VeSCCR_b_DsblAEMDPGainRr_write'
     */
    /* Gateway: PokeSCCR_b_DsblAEMDPGainRr/PokeSCCR_b_DsblAEMDPGainRrChrt */
    /* During: PokeSCCR_b_DsblAEMDPGainRr/PokeSCCR_b_DsblAEMDPGainRrChrt */
    /* Entry Internal: PokeSCCR_b_DsblAEMDPGainRr/PokeSCCR_b_DsblAEMDPGainRrChrt */
    /* Transition: '<S53>:2' */
    Rte_IrvWrite_PokeSCCR_b_DsblAEMDPGainRr_VeSCCR_b_DsblAEMDPGainRr_write_IRV
        (LeSCCR_b_DsblAEMDPGainRr);

    /* End of Outputs for SubSystem: '<Root>/PokeSCCR_b_DsblAEMDPGainRr' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) PokeSCCR_b_FlyWMaxRq(VAR(boolean, AUTOMATIC)
    LeSCCR_b_FlyWMaxRq, VAR(boolean, AUTOMATIC) LeSCCR_b_FlyWMaxRq_FA)
{

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_LeSCCR_b_FlyWMaxRq_FA_out;

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_FlyWMaxRq);

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_FlyWMaxRq_FA);

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeSCCR_b_FlyWMaxRq' */
    /* Chart: '<S22>/PokeSCCR_b_FlyWMaxRqChrt' incorporates:
     *  SignalConversion generated from: '<S22>/LeSCCR_b_RrAxlMinRqFA'
     *  SignalConversion generated from: '<S22>/LeSCCR_b_RrAxlMinRq'
     */
    /* Gateway: PokeSCCR_b_FlyWMaxRq/PokeSCCR_b_FlyWMaxRqChrt */
    /* During: PokeSCCR_b_FlyWMaxRq/PokeSCCR_b_FlyWMaxRqChrt */
    /* Entry Internal: PokeSCCR_b_FlyWMaxRq/PokeSCCR_b_FlyWMaxRqChrt */
    /* Transition: '<S54>:2' */
    if (!LeSCCR_b_FlyWMaxRq_FA)
    {
        /* Transition: '<S54>:3' */
        /* Transition: '<S54>:15' */
        SCCR_ac_B.LeSCCR_b_FlyWMaxRq_out = LeSCCR_b_FlyWMaxRq;
        rtb_LeSCCR_b_FlyWMaxRq_FA_out = false;

        /* Transition: '<S54>:18' */
    }
    else
    {
        /* Transition: '<S54>:4' */
        rtb_LeSCCR_b_FlyWMaxRq_FA_out = true;
    }

    /* End of Chart: '<S22>/PokeSCCR_b_FlyWMaxRqChrt' */

    /* Merge: '<Root>/Merge_85' incorporates:
     *  SignalConversion generated from: '<S22>/VeSCCR_b_FlyWMaxRq_FA_write'
     * */
    Rte_IrvWrite_PokeSCCR_b_FlyWMaxRq_VeSCCR_b_FlyWMaxRq_FA_write_IRV
        (rtb_LeSCCR_b_FlyWMaxRq_FA_out);

    /* Merge: '<Root>/Merge_84' incorporates:
     *  SignalConversion generated from: '<S22>/VeSCCR_b_FlyWMaxRq_write'
     * */
    Rte_IrvWrite_PokeSCCR_b_FlyWMaxRq_VeSCCR_b_FlyWMaxRq_write_IRV
        (SCCR_ac_B.LeSCCR_b_FlyWMaxRq_out);

    /* End of Outputs for SubSystem: '<Root>/PokeSCCR_b_FlyWMaxRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) PokeSCCR_b_FlyWMinRq(VAR(boolean, AUTOMATIC)
    LeSCCR_b_FlyWMinRq, VAR(boolean, AUTOMATIC) LeSCCR_b_FlyWMinRq_FA)
{

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_LeSCCR_b_FlyWMinRq_FA_out;

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_FlyWMinRq);

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_FlyWMinRq_FA);

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeSCCR_b_FlyWMinRq' */
    /* Chart: '<S23>/PokeSCCR_b_FlyWMinRqChrt' incorporates:
     *  SignalConversion generated from: '<S23>/LeSCCR_b_RrAxlMinRqFA'
     *  SignalConversion generated from: '<S23>/LeSCCR_b_RrAxlMinRq'
     */
    /* Gateway: PokeSCCR_b_FlyWMinRq/PokeSCCR_b_FlyWMinRqChrt */
    /* During: PokeSCCR_b_FlyWMinRq/PokeSCCR_b_FlyWMinRqChrt */
    /* Entry Internal: PokeSCCR_b_FlyWMinRq/PokeSCCR_b_FlyWMinRqChrt */
    /* Transition: '<S55>:2' */
    if (!LeSCCR_b_FlyWMinRq_FA)
    {
        /* Transition: '<S55>:3' */
        /* Transition: '<S55>:15' */
        SCCR_ac_B.LeSCCR_b_FlyWMinRq_out = LeSCCR_b_FlyWMinRq;
        rtb_LeSCCR_b_FlyWMinRq_FA_out = false;

        /* Transition: '<S55>:18' */
    }
    else
    {
        /* Transition: '<S55>:4' */
        rtb_LeSCCR_b_FlyWMinRq_FA_out = true;
    }

    /* End of Chart: '<S23>/PokeSCCR_b_FlyWMinRqChrt' */

    /* Merge: '<Root>/Merge_87' incorporates:
     *  SignalConversion generated from: '<S23>/VeSCCR_b_FlyWMinRq_FA_write'
     * */
    Rte_IrvWrite_PokeSCCR_b_FlyWMinRq_VeSCCR_b_FlyWMinRq_FA_write_IRV
        (rtb_LeSCCR_b_FlyWMinRq_FA_out);

    /* Merge: '<Root>/Merge_86' incorporates:
     *  SignalConversion generated from: '<S23>/VeSCCR_b_FlyWMinRq_write'
     * */
    Rte_IrvWrite_PokeSCCR_b_FlyWMinRq_VeSCCR_b_FlyWMinRq_write_IRV
        (SCCR_ac_B.LeSCCR_b_FlyWMinRq_out);

    /* End of Outputs for SubSystem: '<Root>/PokeSCCR_b_FlyWMinRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) PokeSCCR_b_FrntAxlMaxRq(VAR(boolean, AUTOMATIC)
    LeSCCR_b_FrntAxlMaxRq, VAR(boolean, AUTOMATIC) LeSCCR_b_FrntAxlMaxRqFA)
{

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_LeSCCR_b_FrntAxlMaxRqFA_out;

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_FrntAxlMaxRq);

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_FrntAxlMaxRqFA);

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeSCCR_b_FrntAxlMaxRq' */
    /* Chart: '<S24>/PokeSCCR_b_FrntAxlMaxRqChrt' incorporates:
     *  SignalConversion generated from: '<S24>/LeSCCR_b_FrntAxlMaxRqFA'
     */
    /* Gateway: PokeSCCR_b_FrntAxlMaxRq/PokeSCCR_b_FrntAxlMaxRqChrt */
    /* During: PokeSCCR_b_FrntAxlMaxRq/PokeSCCR_b_FrntAxlMaxRqChrt */
    /* Entry Internal: PokeSCCR_b_FrntAxlMaxRq/PokeSCCR_b_FrntAxlMaxRqChrt */
    /* Transition: '<S56>:2' */
    if (!LeSCCR_b_FrntAxlMaxRqFA)
    {
        /* SignalConversion generated from: '<S24>/VeSCCR_b_FrntAxlMaxRq_write' incorporates:
         *  Merge: '<Root>/Merge_53'
         *  SignalConversion generated from: '<S24>/LeSCCR_b_FrntAxlMaxRq'
         */
        /* Transition: '<S56>:3' */
        /* Transition: '<S56>:15' */
        Rte_IrvWrite_PokeSCCR_b_FrntAxlMaxRq_VeSCCR_b_FrntAxlMaxRq_write_IRV
            (LeSCCR_b_FrntAxlMaxRq);
        rtb_LeSCCR_b_FrntAxlMaxRqFA_out = false;

        /* Transition: '<S56>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S24>/VeSCCR_b_FrntAxlMaxRq_write' incorporates:
         *  Merge: '<Root>/Merge_53'
         */
        /* Transition: '<S56>:4' */
        Rte_IrvWrite_PokeSCCR_b_FrntAxlMaxRq_VeSCCR_b_FrntAxlMaxRq_write_IRV
            (KeSCCR_b_FrntAxlMaxRqDflt);
        rtb_LeSCCR_b_FrntAxlMaxRqFA_out = true;
    }

    /* End of Chart: '<S24>/PokeSCCR_b_FrntAxlMaxRqChrt' */

    /* Merge: '<Root>/Merge_54' incorporates:
     *  SignalConversion generated from: '<S24>/VeSCCR_b_FrntAxlMaxRqFA_write'
     * */
    Rte_IrvWrite_PokeSCCR_b_FrntAxlMaxRq_VeSCCR_b_FrntAxlMaxRqFA_write_IRV
        (rtb_LeSCCR_b_FrntAxlMaxRqFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeSCCR_b_FrntAxlMaxRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) PokeSCCR_b_FrntAxlMinRq(VAR(boolean, AUTOMATIC)
    LeSCCR_b_FrntAxlMinRq, VAR(boolean, AUTOMATIC) LeSCCR_b_FrntAxlMinRqFA)
{

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_LeSCCR_b_FrntAxlMinRqFA_out;

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_FrntAxlMinRq);

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_FrntAxlMinRqFA);

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeSCCR_b_FrntAxlMinRq' */
    /* Chart: '<S25>/PokeSCCR_b_FrntAxlMinRqChrt' incorporates:
     *  SignalConversion generated from: '<S25>/LeSCCR_b_FrntAxlMinRqFA'
     */
    /* Gateway: PokeSCCR_b_FrntAxlMinRq/PokeSCCR_b_FrntAxlMinRqChrt */
    /* During: PokeSCCR_b_FrntAxlMinRq/PokeSCCR_b_FrntAxlMinRqChrt */
    /* Entry Internal: PokeSCCR_b_FrntAxlMinRq/PokeSCCR_b_FrntAxlMinRqChrt */
    /* Transition: '<S57>:2' */
    if (!LeSCCR_b_FrntAxlMinRqFA)
    {
        /* SignalConversion generated from: '<S25>/VeSCCR_b_FrntAxlMinRq_write' incorporates:
         *  Merge: '<Root>/Merge_55'
         *  SignalConversion generated from: '<S25>/LeSCCR_b_FrntAxlMinRq'
         */
        /* Transition: '<S57>:3' */
        /* Transition: '<S57>:15' */
        Rte_IrvWrite_PokeSCCR_b_FrntAxlMinRq_VeSCCR_b_FrntAxlMinRq_write_IRV
            (LeSCCR_b_FrntAxlMinRq);
        rtb_LeSCCR_b_FrntAxlMinRqFA_out = false;

        /* Transition: '<S57>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S25>/VeSCCR_b_FrntAxlMinRq_write' incorporates:
         *  Merge: '<Root>/Merge_55'
         */
        /* Transition: '<S57>:4' */
        Rte_IrvWrite_PokeSCCR_b_FrntAxlMinRq_VeSCCR_b_FrntAxlMinRq_write_IRV
            (KeSCCR_b_FrntAxlMinRqDflt);
        rtb_LeSCCR_b_FrntAxlMinRqFA_out = true;
    }

    /* End of Chart: '<S25>/PokeSCCR_b_FrntAxlMinRqChrt' */

    /* Merge: '<Root>/Merge_56' incorporates:
     *  SignalConversion generated from: '<S25>/VeSCCR_b_FrntAxlMinRqFA_write'
     * */
    Rte_IrvWrite_PokeSCCR_b_FrntAxlMinRq_VeSCCR_b_FrntAxlMinRqFA_write_IRV
        (rtb_LeSCCR_b_FrntAxlMinRqFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeSCCR_b_FrntAxlMinRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) PokeSCCR_b_FrontDFOffReq(VAR(boolean, AUTOMATIC)
    LeSCCR_b_FrontDFOffReq)
{

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_FrontDFOffReq);

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeSCCR_b_FrontDFOffReq' */
    /* Merge: '<Root>/VeSCCR_b_FrontDFOffReq_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S26>/LeSCCR_b_FrontDFOffReq'
     *  SignalConversion generated from: '<S26>/VeSCCR_b_FrontDFOffReq_write'
     */
    /* Gateway: PokeSCCR_b_FrontDFOffReq/PokeSCCR_b_FrontDFOffReqChrt */
    /* During: PokeSCCR_b_FrontDFOffReq/PokeSCCR_b_FrontDFOffReqChrt */
    /* Entry Internal: PokeSCCR_b_FrontDFOffReq/PokeSCCR_b_FrontDFOffReqChrt */
    /* Transition: '<S58>:2' */
    Rte_IrvWrite_PokeSCCR_b_FrontDFOffReq_VeSCCR_b_FrontDFOffReq_write_IRV
        (LeSCCR_b_FrontDFOffReq);

    /* End of Outputs for SubSystem: '<Root>/PokeSCCR_b_FrontDFOffReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) PokeSCCR_b_RearDFOffReq(VAR(boolean, AUTOMATIC)
    LeSCCR_b_RearDFOffReq)
{

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_RearDFOffReq);

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeSCCR_b_RearDFOffReq' */
    /* Merge: '<Root>/VeSCCR_b_RearDFOffReq_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S27>/LeSCCR_b_RearDFOffReq'
     *  SignalConversion generated from: '<S27>/VeSCCR_b_RearDFOffReq_write'
     */
    /* Gateway: PokeSCCR_b_RearDFOffReq/PokeSCCR_b_RearDFOffReqChrt */
    /* During: PokeSCCR_b_RearDFOffReq/PokeSCCR_b_RearDFOffReqChrt */
    /* Entry Internal: PokeSCCR_b_RearDFOffReq/PokeSCCR_b_RearDFOffReqChrt */
    /* Transition: '<S59>:2' */
    Rte_IrvWrite_PokeSCCR_b_RearDFOffReq_VeSCCR_b_RearDFOffReq_write_IRV
        (LeSCCR_b_RearDFOffReq);

    /* End of Outputs for SubSystem: '<Root>/PokeSCCR_b_RearDFOffReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) PokeSCCR_b_RrAxlMaxRq(VAR(boolean, AUTOMATIC)
    LeSCCR_b_RrAxlMaxRq, VAR(boolean, AUTOMATIC) LeSCCR_b_RrAxlMaxRqFA)
{

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_LeSCCR_b_RrAxlMaxRqFA_out;

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_RrAxlMaxRq);

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_RrAxlMaxRqFA);

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeSCCR_b_RrAxlMaxRq' */
    /* Chart: '<S28>/PokeSCCR_b_RrAxlMaxRqChrt' incorporates:
     *  SignalConversion generated from: '<S28>/LeSCCR_b_RrAxlMaxRqFA'
     */
    /* Gateway: PokeSCCR_b_RrAxlMaxRq/PokeSCCR_b_RrAxlMaxRqChrt */
    /* During: PokeSCCR_b_RrAxlMaxRq/PokeSCCR_b_RrAxlMaxRqChrt */
    /* Entry Internal: PokeSCCR_b_RrAxlMaxRq/PokeSCCR_b_RrAxlMaxRqChrt */
    /* Transition: '<S60>:2' */
    if (!LeSCCR_b_RrAxlMaxRqFA)
    {
        /* SignalConversion generated from: '<S28>/VeSCCR_b_RrAxlMaxRq_write' incorporates:
         *  Merge: '<Root>/Merge_59'
         *  SignalConversion generated from: '<S28>/LeSCCR_b_RrAxlMaxRq'
         */
        /* Transition: '<S60>:3' */
        /* Transition: '<S60>:15' */
        Rte_IrvWrite_PokeSCCR_b_RrAxlMaxRq_VeSCCR_b_RrAxlMaxRq_write_IRV
            (LeSCCR_b_RrAxlMaxRq);
        rtb_LeSCCR_b_RrAxlMaxRqFA_out = false;

        /* Transition: '<S60>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S28>/VeSCCR_b_RrAxlMaxRq_write' incorporates:
         *  Merge: '<Root>/Merge_59'
         */
        /* Transition: '<S60>:4' */
        Rte_IrvWrite_PokeSCCR_b_RrAxlMaxRq_VeSCCR_b_RrAxlMaxRq_write_IRV
            (KeSCCR_b_RrAxlMaxRqDflt);
        rtb_LeSCCR_b_RrAxlMaxRqFA_out = true;
    }

    /* End of Chart: '<S28>/PokeSCCR_b_RrAxlMaxRqChrt' */

    /* Merge: '<Root>/Merge_60' incorporates:
     *  SignalConversion generated from: '<S28>/VeSCCR_b_RrAxlMaxRqFA_write'
     * */
    Rte_IrvWrite_PokeSCCR_b_RrAxlMaxRq_VeSCCR_b_RrAxlMaxRqFA_write_IRV
        (rtb_LeSCCR_b_RrAxlMaxRqFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeSCCR_b_RrAxlMaxRq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCCR_3

FUNC(void, SCCR_CODE) PokeSCCR_b_RrAxlMinRq(VAR(boolean, AUTOMATIC)
    LeSCCR_b_RrAxlMinRq, VAR(boolean, AUTOMATIC) LeSCCR_b_RrAxlMinRqFA)
{

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_LeSCCR_b_RrAxlMinRqFA_out;

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_RrAxlMinRq);

#endif

#if !Rte_SysCon_Variant_SCCR_3

    UNUSED_PARAMETER(LeSCCR_b_RrAxlMinRqFA);

#endif

#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Function Call SubSystem: '<Root>/PokeSCCR_b_RrAxlMinRq' */
    /* Chart: '<S29>/PokeSCCR_b_RrAxlMinRqChrt' incorporates:
     *  SignalConversion generated from: '<S29>/LeSCCR_b_RrAxlMinRqFA'
     */
    /* Gateway: PokeSCCR_b_RrAxlMinRq/PokeSCCR_b_RrAxlMinRqChrt */
    /* During: PokeSCCR_b_RrAxlMinRq/PokeSCCR_b_RrAxlMinRqChrt */
    /* Entry Internal: PokeSCCR_b_RrAxlMinRq/PokeSCCR_b_RrAxlMinRqChrt */
    /* Transition: '<S61>:2' */
    if (!LeSCCR_b_RrAxlMinRqFA)
    {
        /* SignalConversion generated from: '<S29>/VeSCCR_b_RrAxlMinRq_write' incorporates:
         *  Merge: '<Root>/Merge_61'
         *  SignalConversion generated from: '<S29>/LeSCCR_b_RrAxlMinRq'
         */
        /* Transition: '<S61>:3' */
        /* Transition: '<S61>:15' */
        Rte_IrvWrite_PokeSCCR_b_RrAxlMinRq_VeSCCR_b_RrAxlMinRq_write_IRV
            (LeSCCR_b_RrAxlMinRq);
        rtb_LeSCCR_b_RrAxlMinRqFA_out = false;

        /* Transition: '<S61>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S29>/VeSCCR_b_RrAxlMinRq_write' incorporates:
         *  Merge: '<Root>/Merge_61'
         */
        /* Transition: '<S61>:4' */
        Rte_IrvWrite_PokeSCCR_b_RrAxlMinRq_VeSCCR_b_RrAxlMinRq_write_IRV
            (KeSCCR_b_RrAxlMinRqDflt);
        rtb_LeSCCR_b_RrAxlMinRqFA_out = true;
    }

    /* End of Chart: '<S29>/PokeSCCR_b_RrAxlMinRqChrt' */

    /* Merge: '<Root>/Merge_62' incorporates:
     *  SignalConversion generated from: '<S29>/VeSCCR_b_RrAxlMinRqFA_write'
     * */
    Rte_IrvWrite_PokeSCCR_b_RrAxlMinRq_VeSCCR_b_RrAxlMinRqFA_write_IRV
        (rtb_LeSCCR_b_RrAxlMinRqFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeSCCR_b_RrAxlMinRq' */
#endif

}

#endif

/* Output function */
FUNC(void, SCCR_CODE) SCCR_PwrOn(void)
{

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_OutportBufferForVeSCCI_M_FlyWRq_Init;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_OutportBufferForVeSCCI_M_FrntAxlRqst;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_OutportBufferForVeSCCI_M_FrntAxlTrqE;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_OutportBufferForVeSCCI_M_RrAxlRqst_w;

#endif

#if Rte_SysCon_Variant_SCCR_3

    float32 rtb_OutportBufferForVeSCCI_M_RrAxlTrqEst;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_OutportBufferForVeSCCI_b_DsblAEMDPGa;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_OutportBufferForVeSCCI_b_DsblAEMDP_k;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_OutportBufferForVeSCCI_b_FrntAxlMa_d;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_OutportBufferForVeSCCI_b_FrntAxlMi_g;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_OutportBufferForVeSCCI_b_FrntAxlTqRq;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_OutportBufferForVeSCCI_b_RrAxlMaxRq_;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_OutportBufferForVeSCCI_b_RrAxlMinRq_;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_OutportBufferForVeSCCI_b_RrAxlTqRqFA;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_OutportBufferForVeSCCR_b_FlyWMaxRq_d;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_OutportBufferForVeSCCR_b_FlyWMaxRq_I;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_OutportBufferForVeSCCR_b_FlyWMinRq_d;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_OutportBufferForVeSCCR_b_FlyWMinRq_I;

#endif

#if Rte_SysCon_Variant_SCCR_3

    boolean rtb_OutportBufferForVeSCCR_b_FlyWRq_FA_I;

#endif

#if Rte_SysCon_Variant_SCCR_3

    TePLTR_e_EPBHoldSts rtb_OutportBufferForVeSCCI_e_EPBHoldSts_;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/SCCR_PwrOn'
     */
    /* S-Function (fcgen): '<S32>/FcnCallGen' incorporates:
     *  SubSystem: '<S32>/SCCI_InitInputs'
     */
    /* SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlTrqEst' incorporates:
     *  Constant: '<S294>/Calib'
     *  Constant: '<S295>/Calib'
     *  Constant: '<S297>/Calib'
     *  Constant: '<S298>/Calib'
     *  Constant: '<S300>/Calib'
     *  Constant: '<S302>/Calib'
     *  Constant: '<S303>/Calib'
     *  Constant: '<S305>/Calib'
     *  Constant: '<S307>/Calib'
     *  SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlRqst'
     *  SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlRqst'
     *  SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlTrqEst'
     *  SignalConversion generated from: '<S290>/VeSCCI_b_FrntAxlMaxRq'
     *  SignalConversion generated from: '<S290>/VeSCCI_b_FrntAxlMinRq'
     *  SignalConversion generated from: '<S290>/VeSCCI_b_FrntAxlTqRqFA'
     *  SignalConversion generated from: '<S290>/VeSCCI_b_RrAxlMaxRq'
     *  SignalConversion generated from: '<S290>/VeSCCI_b_RrAxlMinRq'
     */
#if Rte_SysCon_Variant_SCCR_3

    /* SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlTrqEst' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlTrqEst =
        KeSCCR_M_FrntAxlTrqEstInit;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlTrqEst' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlTrqEst = KeSCCR_M_RrAxlTrqEstInit;

    /* SignalConversion generated from: '<S290>/VeSCCI_b_FrntAxlMaxRq' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_FrntAxlMaxRq = KeSCCR_b_FrntAxlMaxRqInit;

    /* SignalConversion generated from: '<S290>/VeSCCI_b_FrntAxlMinRq' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_FrntAxlMinRq = KeSCCR_b_FrntAxlMinRqInit;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlRqst' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlRqst = KeSCCR_M_FrntAxlRqstInit;

    /* SignalConversion generated from: '<S290>/VeSCCI_b_RrAxlMaxRq' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_RrAxlMaxRq = KeSCCR_b_RrAxlMaxRqInit;

    /* SignalConversion generated from: '<S290>/VeSCCI_b_RrAxlMinRq' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_RrAxlMinRq = KeSCCR_b_RrAxlMinRqInit;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlRqst' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlRqst = KeSCCR_M_RrAxlRqstInit;
    SCCR_ac_B.Calib_ec = KeSCCR_b_FrntAxlTqRqFAInit;

    /* SignalConversion generated from: '<S290>/VeSCCI_b_FrntAxlTqRqFA' incorporates:
     *  Constant: '<S303>/Calib'
     */
    SCCR_ac_B.OutportBufferForVeSCCI_b_FrntAxlTqRqFA = SCCR_ac_B.Calib_ec;

#endif

    /* End of SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlTrqEst' */

    /* SignalConversion generated from: '<S290>/VeSCCI_b_FrntAxlMaxRqFA' incorporates:
     *  Constant: '<S299>/Calib'
     */
    SCCR_ac_B.OutportBufferForVeSCCI_b_FrntAxlMaxRqFA =
        KeSCCR_b_FrntAxlMaxRqFAInit;

    /* SignalConversion generated from: '<S290>/VeSCCI_b_FrntAxlMinRqFA' incorporates:
     *  Constant: '<S301>/Calib'
     */
    SCCR_ac_B.OutportBufferForVeSCCI_b_FrntAxlMinRqFA =
        KeSCCR_b_FrntAxlMinRqFAInit;

    /* SignalConversion generated from: '<S290>/VeSCCI_b_RrAxlMaxRqFA' incorporates:
     *  Constant: '<S304>/Calib'
     */
    SCCR_ac_B.OutportBufferForVeSCCI_b_RrAxlMaxRqFA = KeSCCR_b_RrAxlMaxRqFAInit;

    /* SignalConversion generated from: '<S290>/VeSCCI_b_RrAxlMinRqFA' incorporates:
     *  Constant: '<S306>/Calib'
     */
    SCCR_ac_B.OutportBufferForVeSCCI_b_RrAxlMinRqFA = KeSCCR_b_RrAxlMinRqFAInit;

    /* SignalConversion generated from: '<S290>/VeSCCI_b_RrAxlTqRqFA' incorporates:
     *  Constant: '<S308>/Calib'
     *  Constant: '<S309>/Calib'
     *  SignalConversion generated from: '<S290>/VeSCCI_b_DsblAEMDPGainFrnt'
     *  SignalConversion generated from: '<S290>/VeSCCI_b_DsblAEMDPGainRr'
     *  SignalConversion generated from: '<S290>/VeSCCI_e_EPBHoldSts'
     */
#if Rte_SysCon_Variant_SCCR_3

    SCCR_ac_B.Calib_m = KeSCCR_b_RrAxlTqRqFAInit;

    /* SignalConversion generated from: '<S290>/VeSCCI_b_RrAxlTqRqFA' incorporates:
     *  Constant: '<S308>/Calib'
     */
    SCCR_ac_B.OutportBufferForVeSCCI_b_RrAxlTqRqFA = SCCR_ac_B.Calib_m;
    SCCR_ac_B.Calib_el = KeSCCR_e_EPBHoldStsInit;

    /* SignalConversion generated from: '<S290>/VeSCCI_e_EPBHoldSts' incorporates:
     *  Constant: '<S309>/Calib'
     */
    SCCR_ac_B.OutportBufferForVeSCCI_e_EPBHoldSts = SCCR_ac_B.Calib_el;

    /* SignalConversion generated from: '<S290>/VeSCCI_b_DsblAEMDPGainFrnt' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_DsblAEMDPGainFr =
        SCCR_ac_ConstB.ConstantValue13;

    /* SignalConversion generated from: '<S290>/VeSCCI_b_DsblAEMDPGainRr' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_DsblAEMDPGainRr =
        SCCR_ac_ConstB.ConstantValue14;

#endif

    /* End of SignalConversion generated from: '<S290>/VeSCCI_b_RrAxlTqRqFA' */

    /* SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlOLMax' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlOLMax =
        SCCR_ac_ConstB.ConstantValue;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlOLMin' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlOLMin =
        SCCR_ac_ConstB.ConstantValue1_g;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlOLMax' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlOLMax =
        SCCR_ac_ConstB.ConstantValue2_j;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlOLMin' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlOLMin =
        SCCR_ac_ConstB.ConstantValue3;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlCLMax' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlCLMax =
        SCCR_ac_ConstB.ConstantValue4;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlCLMin' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlCLMin =
        SCCR_ac_ConstB.ConstantValue5;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlCLMax' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlCLMax =
        SCCR_ac_ConstB.ConstantValue6;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlCLMin' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlCLMin =
        SCCR_ac_ConstB.ConstantValue7;

    /* SignalConversion generated from: '<S290>/VeSCCI_r_RipAWD' */
    SCCR_ac_B.OutportBufferForVeSCCI_r_RipAWD = SCCR_ac_ConstB.ConstantValue8;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_RipRegen' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RipRegen = SCCR_ac_ConstB.ConstantValue9;

    /* SignalConversion generated from: '<S290>/VeSCCI_b_PerfAWDFlag' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_PerfAWDFlag =
        SCCR_ac_ConstB.ConstantValue10;

    /* SignalConversion generated from: '<S290>/VeSCCI_b_ZeroTrqAllwd' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_ZeroTrqAllwd =
        SCCR_ac_ConstB.ConstantValue11;

    /* SignalConversion generated from: '<S290>/VeSCCI_b_AWDDiscnctAllwd' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_AWDDiscnctAllwd =
        SCCR_ac_ConstB.ConstantValue12;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlStrtgcMax_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlStrtgcMa =
        SCCR_ac_ConstB.ConstantValue15;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlStrtgcMax_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlStrtgcMax_ =
        SCCR_ac_ConstB.ConstantValue16;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlStrtgcMin_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlStrtgcMi =
        SCCR_ac_ConstB.ConstantValue17;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlStrtgcMin_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlStrtgcMin_ =
        SCCR_ac_ConstB.ConstantValue18;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlTactFastMax_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlTactFast =
        SCCR_ac_ConstB.ConstantValue19;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlTactFastMax_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlTactFastMa =
        SCCR_ac_ConstB.ConstantValue20;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlTactFastMin_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlTactFa_p =
        SCCR_ac_ConstB.ConstantValue21;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlTactFastMin_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlTactFastMi =
        SCCR_ac_ConstB.ConstantValue22;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlTactSlowMax_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlTactSlow =
        SCCR_ac_ConstB.ConstantValue23;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlTactSlowMax_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlTactSlowMa =
        SCCR_ac_ConstB.ConstantValue24;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlTactSlowMin_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlTactSl_n =
        SCCR_ac_ConstB.ConstantValue25;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlTactSlowMin_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlTactSlowMi =
        SCCR_ac_ConstB.ConstantValue26;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlAdhMax' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlAdhMax =
        SCCR_ac_ConstB.ConstantValue27;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlAdhMax' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlAdhMax =
        SCCR_ac_ConstB.ConstantValue28;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlAdhMin' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlAdhMin =
        SCCR_ac_ConstB.ConstantValue29;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlAdhMin' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlAdhMin =
        SCCR_ac_ConstB.ConstantValue30;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlEffMax' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlEffMax =
        SCCR_ac_ConstB.ConstantValue31;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlEffMax' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlEffMax =
        SCCR_ac_ConstB.ConstantValue32;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlEffMin' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlEffMin =
        SCCR_ac_ConstB.ConstantValue33;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlEffMin' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlEffMin =
        SCCR_ac_ConstB.ConstantValue34;

    /* SignalConversion generated from: '<S290>/VeSCCI_b_FrontDFOffReq' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_FrontDFOffReq =
        SCCR_ac_ConstB.ConstantValue35;

    /* SignalConversion generated from: '<S290>/VeSCCI_b_RearDFOffReq' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_RearDFOffReq =
        SCCR_ac_ConstB.ConstantValue36;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_Output_Torque_Limit' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_Output_Torque_L =
        SCCR_ac_ConstB.ConstantValue38;

    /* SignalConversion generated from: '<S290>/VeSCCI_b_Output_Torque_Limit_FA' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_Output_Torque_L =
        SCCR_ac_ConstB.ConstantValue37;

    /* End of Outputs for S-Function (fcgen): '<S32>/FcnCallGen' */

    /* S-Function (fcgen): '<S32>/FcnCallGen' incorporates:
     *  SubSystem: '<S32>/SCCO_Init_Outputs'
     */
    /* Outputs for Atomic SubSystem: '<S291>/Variant Subsystem' */
    /* SignalConversion generated from: '<S290>/VeSCCI_M_FlyWRq_Init' incorporates:
     *  Constant: '<S296>/Calib'
     *  SignalConversion generated from: '<S290>/VeSCCR_b_FlyWMaxRq_FA_Init'
     *  SignalConversion generated from: '<S290>/VeSCCR_b_FlyWMaxRq_Init'
     *  SignalConversion generated from: '<S290>/VeSCCR_b_FlyWMinRq_FA_Init'
     *  SignalConversion generated from: '<S290>/VeSCCR_b_FlyWMinRq_Init'
     *  SignalConversion generated from: '<S290>/VeSCCR_b_FlyWRq_FA_Init'
     */
#if Rte_SysCon_Variant_SCCR_3

    /* Outputs for Atomic SubSystem: '<S311>/SCCO_No_Stub' */
    SCCR_ac_B.Calib_e = KeSCCR_M_FlyWRqstInit;

    /* SignalConversion generated from: '<S290>/VeSCCI_M_FlyWRq_Init' incorporates:
     *  Constant: '<S296>/Calib'
     */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FlyWRq_Init = SCCR_ac_B.Calib_e;

    /* SignalConversion generated from: '<S290>/VeSCCR_b_FlyWRq_FA_Init' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_FlyWRq_FA_Init =
        SCCR_ac_ConstB.ConstantValue39;

    /* SignalConversion generated from: '<S290>/VeSCCR_b_FlyWMaxRq_Init' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_FlyWMaxRq_Init =
        SCCR_ac_ConstB.ConstantValue43;

    /* SignalConversion generated from: '<S290>/VeSCCR_b_FlyWMaxRq_FA_Init' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_FlyWMaxRq_FA_In =
        SCCR_ac_ConstB.ConstantValue40;

    /* SignalConversion generated from: '<S290>/VeSCCR_b_FlyWMinRq_Init' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_FlyWMinRq_Init =
        SCCR_ac_ConstB.ConstantValue41;

    /* SignalConversion generated from: '<S290>/VeSCCR_b_FlyWMinRq_FA_Init' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_FlyWMinRq_FA_In =
        SCCR_ac_ConstB.ConstantValue42;

    /* VariantMerge generated from: '<S311>/VeSCCR_M_FrntAxlTrqEstRadio' incorporates:
     *  Constant: '<S318>/Calib'
     *  Gain: '<S322>/Gain'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_FrntAxlTr = 1.0F *
        KeSCCR_M_FrntAxlTrqEstOutInit;

    /* VariantMerge generated from: '<S311>/VeSCCR_M_RrAxlTrqEstRadio' incorporates:
     *  Constant: '<S321>/Calib'
     *  Gain: '<S323>/Gain'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_RrAxlTrqE = 1.0F *
        KeSCCR_M_RrAxlTrqEstOutInit;

    /* VariantMerge generated from: '<S311>/VeSCCR_M_FrntAxlMaxRq' incorporates:
     *  Constant: '<S314>/Calib'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_FrntAxlMa =
        KeSCCR_M_FrntAxlMaxRqOutInit;

    /* VariantMerge generated from: '<S311>/VeSCCR_M_FrntAxlMinRq' incorporates:
     *  Constant: '<S316>/Calib'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_FrntAxlMi =
        KeSCCR_M_FrntAxlMinRqOutInit;

    /* VariantMerge generated from: '<S311>/VeSCCR_M_RrAxlMaxRq' incorporates:
     *  Constant: '<S319>/Calib'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_RrAxlMaxR =
        KeSCCR_M_RrAxlMaxRqOutInit;

    /* VariantMerge generated from: '<S311>/VeSCCR_M_RrAxlMinRq' incorporates:
     *  Constant: '<S320>/Calib'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_RrAxlMinR =
        KeSCCR_M_RrAxlMinRqOutInit;

    /* VariantMerge generated from: '<S311>/VeSCCR_M_ESCSumMin' incorporates:
     *  Constant: '<S317>/Calib'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_ESCSumMin =
        KeSCCR_M_FrntAxlMinRqOutInit;

    /* VariantMerge generated from: '<S311>/VeSCCR_M_ESCSumMax' incorporates:
     *  Constant: '<S315>/Calib'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_ESCSumMax =
        KeSCCR_M_FrntAxlMaxRqOutInit;

    /* VariantMerge generated from: '<S311>/VeSCCR_b_Rq_ESCSum' incorporates:
     *  Constant: '<S312>/FALSE Constant1'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_b_Rq_ESCSum = false;

    /* VariantMerge generated from: '<S311>/VeSCCR_b_Rq_ESCSumFA' incorporates:
     *  Constant: '<S312>/FALSE Constant2'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_b_Rq_ESCS_f = false;

    /* End of Outputs for SubSystem: '<S311>/SCCO_No_Stub' */
#else

    /* Outputs for Atomic SubSystem: '<S311>/SCCO_Stub' */
    /* VariantMerge generated from: '<S311>/VeSCCR_M_FrntAxlTrqEstRadio' incorporates:
     *  Constant: '<S313>/Constant Value10'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_FrntAxlTr = 0.0F;

    /* VariantMerge generated from: '<S311>/VeSCCR_M_RrAxlTrqEstRadio' incorporates:
     *  Constant: '<S313>/Constant Value11'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_RrAxlTrqE = 0.0F;

    /* VariantMerge generated from: '<S311>/VeSCCR_M_FrntAxlMaxRq' incorporates:
     *  Constant: '<S313>/Constant Value12'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_FrntAxlMa = 10000.0F;

    /* VariantMerge generated from: '<S311>/VeSCCR_M_FrntAxlMinRq' incorporates:
     *  Constant: '<S313>/Constant Value13'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_FrntAxlMi = (-10000.0F);

    /* VariantMerge generated from: '<S311>/VeSCCR_M_RrAxlMaxRq' incorporates:
     *  Constant: '<S313>/Constant Value1'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_RrAxlMaxR = 10000.0F;

    /* VariantMerge generated from: '<S311>/VeSCCR_M_RrAxlMinRq' incorporates:
     *  Constant: '<S313>/Constant Value2'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_RrAxlMinR = (-10000.0F);

    /* VariantMerge generated from: '<S311>/VeSCCR_M_ESCSumMin' incorporates:
     *  Constant: '<S313>/Constant Value4'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_ESCSumMin = (-10000.0F);

    /* VariantMerge generated from: '<S311>/VeSCCR_M_ESCSumMax' incorporates:
     *  Constant: '<S313>/Constant Value3'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_ESCSumMax = 10000.0F;

    /* VariantMerge generated from: '<S311>/VeSCCR_b_Rq_ESCSum' incorporates:
     *  Constant: '<S313>/FALSE Constant1'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_b_Rq_ESCSum = false;

    /* VariantMerge generated from: '<S311>/VeSCCR_b_Rq_ESCSumFA' incorporates:
     *  Constant: '<S313>/FALSE Constant2'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_b_Rq_ESCS_f = false;

    /* End of Outputs for SubSystem: '<S311>/SCCO_Stub' */
#endif

    /* End of SignalConversion generated from: '<S290>/VeSCCI_M_FlyWRq_Init' */
    /* End of Outputs for SubSystem: '<S291>/Variant Subsystem' */

    /* SignalConversion generated from: '<S291>/FrntAxlMax_Rq' */
    SCCR_ac_B.OutportBufferForFrntAxlMax_Rq = SCCR_ac_ConstB.FALSEConstant8;

    /* SignalConversion generated from: '<S291>/FrntAxlMin_Rq' */
    SCCR_ac_B.OutportBufferForFrntAxlMin_Rq = SCCR_ac_ConstB.FALSEConstant7;

    /* SignalConversion generated from: '<S291>/RrAxlMax_Rq' */
    SCCR_ac_B.OutportBufferForRrAxlMax_Rq = SCCR_ac_ConstB.FALSEConstant1;

    /* SignalConversion generated from: '<S291>/RrAxlMin_Rq' */
    SCCR_ac_B.OutportBufferForRrAxlMin_Rq = SCCR_ac_ConstB.FALSEConstant2;

    /* SignalConversion generated from: '<S291>/FrntAxlRqFA' */
    SCCR_ac_B.OutportBufferForFrntAxlRqFA = SCCR_ac_ConstB.FALSEConstant5;

    /* SignalConversion generated from: '<S291>/RrAxlRqFA' */
    SCCR_ac_B.OutportBufferForRrAxlRqFA = SCCR_ac_ConstB.FALSEConstant6;

    /* SignalConversion generated from: '<S291>/FrntAxlRq' */
    SCCR_ac_B.OutportBufferForFrntAxlRq = SCCR_ac_ConstB.FALSEConstant3;

    /* SignalConversion generated from: '<S291>/RrAxlRq' */
    SCCR_ac_B.OutportBufferForRrAxlRq = SCCR_ac_ConstB.FALSEConstant4;

    /* SignalConversion generated from: '<S291>/FrntAxlMaxRqPrtctd' */
    SCCR_ac_B.OutportBufferForFrntAxlMaxRqPrtctd =
        SCCR_ac_ConstB.ConstantValue45;

    /* SignalConversion generated from: '<S291>/FrntAxlMinRqPrtctd' */
    SCCR_ac_B.OutportBufferForFrntAxlMinRqPrtctd = SCCR_ac_ConstB.ConstantValue1;

    /* SignalConversion generated from: '<S291>/OutputTorqueLimit' */
    SCCR_ac_B.OutportBufferForOutputTorqueLimit = SCCR_ac_ConstB.ConstantValue2;

    /* SignalConversion generated from: '<S291>/ESCTrqEnblRq_Allowed' */
    SCCR_ac_B.OutportBufferForESCTrqEnblRq_Allowed =
        SCCR_ac_ConstB.FALSEConstant9;

    /* S-Function (fcgen): '<S32>/FcnCallGen' incorporates:
     *  SubSystem: '<S32>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S292>/VeSCCR_M_FrntAxlMax_CL_write' */
    SCCR_ac_B.OutportBufferForVeSCCR_M_FrntAxlMax_CL_w = SCCR_ac_ConstB.Const4;

    /* SignalConversion generated from: '<S292>/VeSCCR_M_FrntAxlMin_CL_write' */
    SCCR_ac_B.OutportBufferForVeSCCR_M_FrntAxlMin_CL_w = SCCR_ac_ConstB.Const6;

    /* SignalConversion generated from: '<S292>/VeSCCR_M_RrAxlMax_CL_write' */
    SCCR_ac_B.OutportBufferForVeSCCR_M_RrAxlMax_CL_wri = SCCR_ac_ConstB.Const18;

    /* SignalConversion generated from: '<S292>/VeSCCR_M_RrAxlMin_CL_write' */
    SCCR_ac_B.OutportBufferForVeSCCR_M_RrAxlMin_CL_wri = SCCR_ac_ConstB.Const20;

    /* SignalConversion generated from: '<S292>/VeSCCR_b_AWDDiscnctAllwd_write' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_AWDDiscnctAllwd = SCCR_ac_ConstB.Const28;

    /* SignalConversion generated from: '<S292>/VeSCCR_b_DsblAEMDPGainFrnt_write' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_DsblAEMDPGainFr = SCCR_ac_ConstB.Const29;

    /* SignalConversion generated from: '<S292>/VeSCCR_b_DsblAEMDPGainRr_write' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_DsblAEMDPGainRr = SCCR_ac_ConstB.Const30;

    /* SignalConversion generated from: '<S292>/VeSCCR_b_FrontDFOffReq_write' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_FrontDFOffReq_w = SCCR_ac_ConstB.Const31;

    /* SignalConversion generated from: '<S292>/VeSCCR_b_RearDFOffReq_write' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_RearDFOffReq_wr = SCCR_ac_ConstB.Const33;

    /* End of Outputs for S-Function (fcgen): '<S32>/FcnCallGen' */

    /* Outport: '<Root>/VeSCCR_M_ESCSumMax' incorporates:
     *  SignalConversion generated from: '<S32>/ESCSumMax'
     */
    (void)Rte_Write_VeSCCR_M_ESCSumMax_Value
        (SCCR_ac_B.VariantMergeForOutportVeSCCR_M_ESCSumMax);

    /* Outport: '<Root>/VeSCCR_M_ESCSumMin' incorporates:
     *  SignalConversion generated from: '<S32>/ESCSumMin'
     */
    (void)Rte_Write_VeSCCR_M_ESCSumMin_Value
        (SCCR_ac_B.VariantMergeForOutportVeSCCR_M_ESCSumMin);

    /* Outport: '<Root>/VeSCCR_b_ESCTrqEnblRq_Allowed' incorporates:
     *  SignalConversion generated from: '<S32>/ESCTrqEnblRq_Allowed'
     */
    (void)Rte_Write_VeSCCR_b_ESCTrqEnblRq_Allowed_Value
        (SCCR_ac_B.OutportBufferForESCTrqEnblRq_Allowed);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlMaxRqPrtctd' incorporates:
     *  SignalConversion generated from: '<S32>/FrntAxlMaxRqPrtctd'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlMaxRqPrtctd_Value
        (SCCR_ac_B.OutportBufferForFrntAxlMaxRqPrtctd);

    /* Outport: '<Root>/VeSCCR_b_FrntAxlMaxRq' incorporates:
     *  SignalConversion generated from: '<S32>/FrntAxlMax_Rq'
     */
    (void)Rte_Write_VeSCCR_b_FrntAxlMaxRq_Value
        (SCCR_ac_B.OutportBufferForFrntAxlMax_Rq);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlMinRqPrtctd' incorporates:
     *  SignalConversion generated from: '<S32>/FrntAxlMinRqPrtctd'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlMinRqPrtctd_Value
        (SCCR_ac_B.OutportBufferForFrntAxlMinRqPrtctd);

    /* Outport: '<Root>/VeSCCR_b_FrntAxlMinRq' incorporates:
     *  SignalConversion generated from: '<S32>/FrntAxlMin_Rq'
     */
    (void)Rte_Write_VeSCCR_b_FrntAxlMinRq_Value
        (SCCR_ac_B.OutportBufferForFrntAxlMin_Rq);

    /* Outport: '<Root>/VeSCCR_b_FrntAxlRq' incorporates:
     *  SignalConversion generated from: '<S32>/FrntAxlRq'
     */
    (void)Rte_Write_VeSCCR_b_FrntAxlRq_Value(SCCR_ac_B.OutportBufferForFrntAxlRq);

    /* Outport: '<Root>/VeSCCR_b_FrntAxlRqFA' incorporates:
     *  SignalConversion generated from: '<S32>/FrntAxlRqFA'
     */
    (void)Rte_Write_VeSCCR_b_FrntAxlRqFA_Value
        (SCCR_ac_B.OutportBufferForFrntAxlRqFA);

    /* Outport: '<Root>/VeSCCR_M_OutputTorqueLimit' incorporates:
     *  SignalConversion generated from: '<S32>/OutputTorqueLimit'
     */
    (void)Rte_Write_VeSCCR_M_OutputTorqueLimit_Value
        (SCCR_ac_B.OutportBufferForOutputTorqueLimit);

    /* Outport: '<Root>/VeSCCR_b_Rq_ESCSum' incorporates:
     *  SignalConversion generated from: '<S32>/Rq_ESCSum'
     */
    (void)Rte_Write_VeSCCR_b_Rq_ESCSum_Value
        (SCCR_ac_B.VariantMergeForOutportVeSCCR_b_Rq_ESCSum);

    /* Outport: '<Root>/VeSCCR_b_Rq_ESCSumFA' incorporates:
     *  SignalConversion generated from: '<S32>/Rq_ESCSumFA'
     */
    (void)Rte_Write_VeSCCR_b_Rq_ESCSumFA_Value
        (SCCR_ac_B.VariantMergeForOutportVeSCCR_b_Rq_ESCS_f);

    /* Outport: '<Root>/VeSCCR_b_RrAxlMaxRq' incorporates:
     *  SignalConversion generated from: '<S32>/RrAxlMax_Rq'
     */
    (void)Rte_Write_VeSCCR_b_RrAxlMaxRq_Value
        (SCCR_ac_B.OutportBufferForRrAxlMax_Rq);

    /* Outport: '<Root>/VeSCCR_b_RrAxlMinRq' incorporates:
     *  SignalConversion generated from: '<S32>/RrAxlMin_Rq'
     */
    (void)Rte_Write_VeSCCR_b_RrAxlMinRq_Value
        (SCCR_ac_B.OutportBufferForRrAxlMin_Rq);

    /* Outport: '<Root>/VeSCCR_b_RrAxlRq' incorporates:
     *  SignalConversion generated from: '<S32>/RrAxlRq'
     */
    (void)Rte_Write_VeSCCR_b_RrAxlRq_Value(SCCR_ac_B.OutportBufferForRrAxlRq);

    /* Outport: '<Root>/VeSCCR_b_RrAxlRqFA' incorporates:
     *  SignalConversion generated from: '<S32>/RrAxlRqFA'
     */
    (void)Rte_Write_VeSCCR_b_RrAxlRqFA_Value(SCCR_ac_B.OutportBufferForRrAxlRqFA);

    /* SignalConversion generated from: '<S32>/VeSCCI_M_FlyWRq_Init' */
#if Rte_SysCon_Variant_SCCR_3

    /* SignalConversion generated from: '<S32>/VeSCCI_M_FlyWRq_Init' */
    rtb_OutportBufferForVeSCCI_M_FlyWRq_Init =
        SCCR_ac_B.OutportBufferForVeSCCI_M_FlyWRq_Init;

#endif

    /* End of SignalConversion generated from: '<S32>/VeSCCI_M_FlyWRq_Init' */

    /* Outport: '<Root>/VeSCCR_M_FrntAxlAdhMax' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlAdhMax'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlAdhMax_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlAdhMax);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlAdhMin' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlAdhMin'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlAdhMin_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlAdhMin);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlCLMax' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlCLMax'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlCLMax_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlCLMax);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlCLMin' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlCLMin'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlCLMin_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlCLMin);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlEffMax' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlEffMax'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlEffMax_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlEffMax);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlEffMin' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlEffMin'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlEffMin_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlEffMin);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlOLMax' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlOLMax'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlOLMax_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlOLMax);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlOLMin' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlOLMin'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlOLMin_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlOLMin);

    /* SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlRqst_write' */
#if Rte_SysCon_Variant_SCCR_3

    /* SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlRqst_write' */
    rtb_OutportBufferForVeSCCI_M_FrntAxlRqst =
        SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlRqst;

#endif

    /* End of SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlRqst_write' */

    /* Outport: '<Root>/VeSCCR_M_FrntAxlStrtgcMax_OL' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlStrtgcMax_OL'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlStrtgcMax_OL_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlStrtgcMa);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlStrtgcMin_OL' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlStrtgcMin_OL'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlStrtgcMin_OL_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlStrtgcMi);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlTactFastMax_OL' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlTactFastMax_OL'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlTactFastMax_OL_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlTactFast);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlTactFastMin_OL' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlTactFastMin_OL'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlTactFastMin_OL_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlTactFa_p);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlTactSlowMax_OL' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlTactSlowMax_OL'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlTactSlowMax_OL_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlTactSlow);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlTactSlowMin_OL' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlTactSlowMin_OL'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlTactSlowMin_OL_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlTactSl_n);

    /* SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlTrqEst_write' */
#if Rte_SysCon_Variant_SCCR_3

    /* SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlTrqEst_write' */
    rtb_OutportBufferForVeSCCI_M_FrntAxlTrqE =
        SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlTrqEst;

#endif

    /* End of SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlTrqEst_write' */

    /* Outport: '<Root>/VeSCCR_r_RipRegen' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RipRegen'
     */
    (void)Rte_Write_VeSCCR_r_RipRegen_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_RipRegen);

    /* Outport: '<Root>/VeSCCR_M_RrAxlAdhMax' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlAdhMax'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlAdhMax_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlAdhMax);

    /* Outport: '<Root>/VeSCCR_M_RrAxlAdhMin' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlAdhMin'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlAdhMin_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlAdhMin);

    /* Outport: '<Root>/VeSCCR_M_RrAxlCLMax' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlCLMax'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlCLMax_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlCLMax);

    /* Outport: '<Root>/VeSCCR_M_RrAxlCLMin' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlCLMin'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlCLMin_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlCLMin);

    /* Outport: '<Root>/VeSCCR_M_RrAxlEffMax' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlEffMax'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlEffMax_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlEffMax);

    /* Outport: '<Root>/VeSCCR_M_RrAxlEffMin' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlEffMin'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlEffMin_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlEffMin);

    /* Outport: '<Root>/VeSCCR_M_RrAxlOLMax' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlOLMax'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlOLMax_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlOLMax);

    /* Outport: '<Root>/VeSCCR_M_RrAxlOLMin' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlOLMin'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlOLMin_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlOLMin);

    /* SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlRqst_write' */
#if Rte_SysCon_Variant_SCCR_3

    /* SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlRqst_write' */
    rtb_OutportBufferForVeSCCI_M_RrAxlRqst_w =
        SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlRqst;

#endif

    /* End of SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlRqst_write' */

    /* Outport: '<Root>/VeSCCR_M_RrAxlStrtgcMax_OL' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlStrtgcMax_OL'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlStrtgcMax_OL_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlStrtgcMax_);

    /* Outport: '<Root>/VeSCCR_M_RrAxlStrtgcMin_OL' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlStrtgcMin_OL'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlStrtgcMin_OL_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlStrtgcMin_);

    /* Outport: '<Root>/VeSCCR_M_RrAxlTactFastMax_OL' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlTactFastMax_OL'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlTactFastMax_OL_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlTactFastMa);

    /* Outport: '<Root>/VeSCCR_M_RrAxlTactFastMin_OL' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlTactFastMin_OL'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlTactFastMin_OL_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlTactFastMi);

    /* Outport: '<Root>/VeSCCR_M_RrAxlTactSlowMax_OL' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlTactSlowMax_OL'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlTactSlowMax_OL_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlTactSlowMa);

    /* Outport: '<Root>/VeSCCR_M_RrAxlTactSlowMin_OL' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlTactSlowMin_OL'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlTactSlowMin_OL_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlTactSlowMi);

    /* SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlTrqEst_write' */
#if Rte_SysCon_Variant_SCCR_3

    /* SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlTrqEst_write' */
    rtb_OutportBufferForVeSCCI_M_RrAxlTrqEst =
        SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlTrqEst;

#endif

    /* End of SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlTrqEst_write' */

    /* Outport: '<Root>/VeSCCR_b_AWDDiscnctAllwd' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_b_AWDDiscnctAllwd'
     */
    (void)Rte_Write_VeSCCR_b_AWDDiscnctAllwd_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_b_AWDDiscnctAllwd);

    /* SignalConversion generated from: '<S32>/VeSCCI_b_DsblAEMDPGainFrnt_write' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_b_DsblAEMDPGainRr_write'
     */
#if Rte_SysCon_Variant_SCCR_3

    /* SignalConversion generated from: '<S32>/VeSCCI_b_DsblAEMDPGainFrnt_write' */
    rtb_OutportBufferForVeSCCI_b_DsblAEMDPGa =
        SCCR_ac_B.OutportBufferForVeSCCI_b_DsblAEMDPGainFr;

    /* SignalConversion generated from: '<S32>/VeSCCI_b_DsblAEMDPGainRr_write' */
    rtb_OutportBufferForVeSCCI_b_DsblAEMDP_k =
        SCCR_ac_B.OutportBufferForVeSCCI_b_DsblAEMDPGainRr;

#endif

    /* End of SignalConversion generated from: '<S32>/VeSCCI_b_DsblAEMDPGainFrnt_write' */

    /* Outport: '<Root>/VeSCCR_b_FrntAxlMaxRqFA' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_b_FrntAxlMaxRqFA'
     */
    (void)Rte_Write_VeSCCR_b_FrntAxlMaxRqFA_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_b_FrntAxlMaxRqFA);

    /* SignalConversion generated from: '<S32>/VeSCCI_b_FrntAxlMaxRq_write' */
#if Rte_SysCon_Variant_SCCR_3

    /* SignalConversion generated from: '<S32>/VeSCCI_b_FrntAxlMaxRq_write' */
    rtb_OutportBufferForVeSCCI_b_FrntAxlMa_d =
        SCCR_ac_B.OutportBufferForVeSCCI_b_FrntAxlMaxRq;

#endif

    /* End of SignalConversion generated from: '<S32>/VeSCCI_b_FrntAxlMaxRq_write' */

    /* Outport: '<Root>/VeSCCR_b_FrntAxlMinRqFA' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_b_FrntAxlMinRqFA'
     */
    (void)Rte_Write_VeSCCR_b_FrntAxlMinRqFA_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_b_FrntAxlMinRqFA);

    /* SignalConversion generated from: '<S32>/VeSCCI_b_FrntAxlMinRq_write' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_b_FrntAxlTqRqFA_write'
     */
#if Rte_SysCon_Variant_SCCR_3

    /* SignalConversion generated from: '<S32>/VeSCCI_b_FrntAxlMinRq_write' */
    rtb_OutportBufferForVeSCCI_b_FrntAxlMi_g =
        SCCR_ac_B.OutportBufferForVeSCCI_b_FrntAxlMinRq;

    /* SignalConversion generated from: '<S32>/VeSCCI_b_FrntAxlTqRqFA_write' */
    rtb_OutportBufferForVeSCCI_b_FrntAxlTqRq =
        SCCR_ac_B.OutportBufferForVeSCCI_b_FrntAxlTqRqFA;

#endif

    /* End of SignalConversion generated from: '<S32>/VeSCCI_b_FrntAxlMinRq_write' */

    /* Outport: '<Root>/VeSCCR_b_FrontDFOffReq' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_b_FrontDFOffReq'
     */
    (void)Rte_Write_VeSCCR_b_FrontDFOffReq_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_b_FrontDFOffReq);

    /* Outport: '<Root>/VeSCCR_b_PerfAWDFlag' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_b_PerfAWDFlag'
     */
    (void)Rte_Write_VeSCCR_b_PerfAWDFlag_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_b_PerfAWDFlag);

    /* Outport: '<Root>/VeSCCR_b_RearDFOffReq' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_b_RearDFOffReq'
     */
    (void)Rte_Write_VeSCCR_b_RearDFOffReq_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_b_RearDFOffReq);

    /* Outport: '<Root>/VeSCCR_b_RrAxlMaxRqFA' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_b_RrAxlMaxRqFA'
     */
    (void)Rte_Write_VeSCCR_b_RrAxlMaxRqFA_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_b_RrAxlMaxRqFA);

    /* SignalConversion generated from: '<S32>/VeSCCI_b_RrAxlMaxRq_write' */
#if Rte_SysCon_Variant_SCCR_3

    /* SignalConversion generated from: '<S32>/VeSCCI_b_RrAxlMaxRq_write' */
    rtb_OutportBufferForVeSCCI_b_RrAxlMaxRq_ =
        SCCR_ac_B.OutportBufferForVeSCCI_b_RrAxlMaxRq;

#endif

    /* End of SignalConversion generated from: '<S32>/VeSCCI_b_RrAxlMaxRq_write' */

    /* Outport: '<Root>/VeSCCR_b_RrAxlMinRqFA' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_b_RrAxlMinRqFA'
     */
    (void)Rte_Write_VeSCCR_b_RrAxlMinRqFA_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_b_RrAxlMinRqFA);

    /* SignalConversion generated from: '<S32>/VeSCCI_b_RrAxlMinRq_write' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_b_RrAxlTqRqFA_write'
     */
#if Rte_SysCon_Variant_SCCR_3

    /* SignalConversion generated from: '<S32>/VeSCCI_b_RrAxlMinRq_write' */
    rtb_OutportBufferForVeSCCI_b_RrAxlMinRq_ =
        SCCR_ac_B.OutportBufferForVeSCCI_b_RrAxlMinRq;

    /* SignalConversion generated from: '<S32>/VeSCCI_b_RrAxlTqRqFA_write' */
    rtb_OutportBufferForVeSCCI_b_RrAxlTqRqFA =
        SCCR_ac_B.OutportBufferForVeSCCI_b_RrAxlTqRqFA;

#endif

    /* End of SignalConversion generated from: '<S32>/VeSCCI_b_RrAxlMinRq_write' */

    /* Outport: '<Root>/VeSCCR_b_ZeroTrqAllwd' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_b_ZeroTrqAllwd'
     */
    (void)Rte_Write_VeSCCR_b_ZeroTrqAllwd_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_b_ZeroTrqAllwd);

    /* SignalConversion generated from: '<S32>/VeSCCI_e_EPBHoldSts_write' */
#if Rte_SysCon_Variant_SCCR_3

    /* SignalConversion generated from: '<S32>/VeSCCI_e_EPBHoldSts_write' incorporates:
     *  SignalConversion generated from: '<S290>/VeSCCI_e_EPBHoldSts'
     */
    rtb_OutportBufferForVeSCCI_e_EPBHoldSts_ =
        SCCR_ac_B.OutportBufferForVeSCCI_e_EPBHoldSts;

#endif

    /* End of SignalConversion generated from: '<S32>/VeSCCI_e_EPBHoldSts_write' */

    /* Outport: '<Root>/VeSCCR_r_RipAWD' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_r_RipAWD'
     */
    (void)Rte_Write_VeSCCR_r_RipAWD_Value
        (SCCR_ac_B.OutportBufferForVeSCCI_r_RipAWD);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlMaxRq' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCR_M_FrntAxlMaxRq'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlMaxRq_Value
        (SCCR_ac_B.VariantMergeForOutportVeSCCR_M_FrntAxlMa);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlMinRq' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCR_M_FrntAxlMinRq'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlMinRq_Value
        (SCCR_ac_B.VariantMergeForOutportVeSCCR_M_FrntAxlMi);

    /* Outport: '<Root>/VeSCCR_M_FrntAxlTrqEstRadio' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCR_M_FrntAxlTrqEstRadio'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlTrqEstRadio_Value
        (SCCR_ac_B.VariantMergeForOutportVeSCCR_M_FrntAxlTr);

    /* Outport: '<Root>/VeSCCR_M_RrAxlMaxRq' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCR_M_RrAxlMaxRq'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlMaxRq_Value
        (SCCR_ac_B.VariantMergeForOutportVeSCCR_M_RrAxlMaxR);

    /* Outport: '<Root>/VeSCCR_M_RrAxlMinRq' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCR_M_RrAxlMinRq'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlMinRq_Value
        (SCCR_ac_B.VariantMergeForOutportVeSCCR_M_RrAxlMinR);

    /* Outport: '<Root>/VeSCCR_M_RrAxlTrqEstRadio' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCR_M_RrAxlTrqEstRadio'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlTrqEstRadio_Value
        (SCCR_ac_B.VariantMergeForOutportVeSCCR_M_RrAxlTrqE);

    /* SignalConversion generated from: '<S32>/VeSCCR_b_FlyWMaxRq_FA_Init' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCR_b_FlyWMaxRq_Init'
     *  SignalConversion generated from: '<S32>/VeSCCR_b_FlyWMinRq_FA_Init'
     *  SignalConversion generated from: '<S32>/VeSCCR_b_FlyWMinRq_Init'
     *  SignalConversion generated from: '<S32>/VeSCCR_b_FlyWRq_FA_Init'
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FlyWRq_Init'
     */
#if Rte_SysCon_Variant_SCCR_3

    /* SignalConversion generated from: '<S32>/VeSCCR_b_FlyWMaxRq_FA_Init' */
    rtb_OutportBufferForVeSCCR_b_FlyWMaxRq_d =
        SCCR_ac_B.OutportBufferForVeSCCR_b_FlyWMaxRq_FA_In;

    /* SignalConversion generated from: '<S32>/VeSCCR_b_FlyWMaxRq_Init' */
    rtb_OutportBufferForVeSCCR_b_FlyWMaxRq_I =
        SCCR_ac_B.OutportBufferForVeSCCR_b_FlyWMaxRq_Init;

    /* SignalConversion generated from: '<S32>/VeSCCR_b_FlyWMinRq_FA_Init' */
    rtb_OutportBufferForVeSCCR_b_FlyWMinRq_d =
        SCCR_ac_B.OutportBufferForVeSCCR_b_FlyWMinRq_FA_In;

    /* SignalConversion generated from: '<S32>/VeSCCR_b_FlyWMinRq_Init' */
    rtb_OutportBufferForVeSCCR_b_FlyWMinRq_I =
        SCCR_ac_B.OutportBufferForVeSCCR_b_FlyWMinRq_Init;

    /* SignalConversion generated from: '<S32>/VeSCCR_b_FlyWRq_FA_Init' */
    rtb_OutportBufferForVeSCCR_b_FlyWRq_FA_I =
        SCCR_ac_B.OutportBufferForVeSCCR_b_FlyWRq_FA_Init;

    /* Merge: '<Root>/Merge_82' */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCR_M_FlyWRq_write_IRV
        (rtb_OutportBufferForVeSCCI_M_FlyWRq_Init);

#endif

    /* End of SignalConversion generated from: '<S32>/VeSCCR_b_FlyWMaxRq_FA_Init' */

    /* Merge: '<Root>/Merge_15_Irv' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlCLMax_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_M_FrntAxlCLMax_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlCLMax);

    /* Merge: '<Root>/Merge_16_Irv' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlCLMin_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_M_FrntAxlCLMin_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlCLMin);

    /* Merge: '<Root>/Merge_10_Irv' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlOLMax_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_M_FrntAxlOLMax_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlOLMax);

    /* Merge: '<Root>/Merge_11_Irv' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlOLMin_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_M_FrntAxlOLMin_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlOLMin);

    /* SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlRqst_write' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlTrqEst_write'
     */
#if Rte_SysCon_Variant_SCCR_3

    /* Merge: '<Root>/Merge_12' */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_M_FrntAxlRq_write_IRV
        (rtb_OutportBufferForVeSCCI_M_FrntAxlRqst);

    /* Merge: '<Root>/Merge_8' */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_M_FrntAxlTrqEst_write_IRV
        (rtb_OutportBufferForVeSCCI_M_FrntAxlTrqE);

#endif

    /* End of SignalConversion generated from: '<S32>/VeSCCI_M_FrntAxlRqst_write' */

    /* Merge: '<Root>/VeSCCR_M_Output_Torque_Limit_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_Output_Torque_Limit'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCR_M_Output_Torque_Limit_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCI_M_Output_Torque_L);

    /* Merge: '<Root>/Merge_17_Irv' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlCLMax_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_M_RrAxlCLMax_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlCLMax);

    /* Merge: '<Root>/Merge_18_Irv' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlCLMin_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_M_RrAxlCLMin_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlCLMin);

    /* Merge: '<Root>/Merge_13_Irv' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlOLMax_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_M_RrAxlOLMax_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlOLMax);

    /* Merge: '<Root>/Merge_14_Irv' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlOLMin_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_M_RrAxlOLMin_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlOLMin);

    /* SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlRqst_write' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlTrqEst_write'
     *  SignalConversion generated from: '<S32>/VeSCCI_b_DsblAEMDPGainFrnt_write'
     *  SignalConversion generated from: '<S32>/VeSCCI_b_DsblAEMDPGainRr_write'
     */
#if Rte_SysCon_Variant_SCCR_3

    /* Merge: '<Root>/Merge_1' */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_M_RrAxlRq_write_IRV
        (rtb_OutportBufferForVeSCCI_M_RrAxlRqst_w);

    /* Merge: '<Root>/Merge_6' */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_M_RrAxlTrqEst_write_IRV
        (rtb_OutportBufferForVeSCCI_M_RrAxlTrqEst);

    /* Merge: '<Root>/Merge_22' */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_b_DsblAEMDPGainFrnt_write_IRV
        (rtb_OutportBufferForVeSCCI_b_DsblAEMDPGa);

    /* Merge: '<Root>/Merge_24' */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_b_DsblAEMDPGainRr_write_IRV
        (rtb_OutportBufferForVeSCCI_b_DsblAEMDP_k);

#endif

    /* End of SignalConversion generated from: '<S32>/VeSCCI_M_RrAxlRqst_write' */

    /* Merge: '<Root>/Merge_2_Irv' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_b_FrntAxlMaxRqFA_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_b_FrntAxlMaxRqFA_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCI_b_FrntAxlMaxRqFA);

    /* SignalConversion generated from: '<S32>/VeSCCI_b_FrntAxlMaxRq_write' */
#if Rte_SysCon_Variant_SCCR_3

    /* Merge: '<Root>/Merge_34' */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_b_FrntAxlMaxRq_write_IRV
        (rtb_OutportBufferForVeSCCI_b_FrntAxlMa_d);

#endif

    /* End of SignalConversion generated from: '<S32>/VeSCCI_b_FrntAxlMaxRq_write' */

    /* Merge: '<Root>/Merge_4_Irv' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_b_FrntAxlMinRqFA_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_b_FrntAxlMinRqFA_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCI_b_FrntAxlMinRqFA);

    /* SignalConversion generated from: '<S32>/VeSCCI_b_FrntAxlMinRq_write' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_b_FrntAxlTqRqFA_write'
     */
#if Rte_SysCon_Variant_SCCR_3

    /* Merge: '<Root>/Merge_49' */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_b_FrntAxlMinRq_write_IRV
        (rtb_OutportBufferForVeSCCI_b_FrntAxlMi_g);

    /* Merge: '<Root>/Merge_51' */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_b_FrntAxlTqRqFA_write_IRV
        (rtb_OutportBufferForVeSCCI_b_FrntAxlTqRq);

#endif

    /* End of SignalConversion generated from: '<S32>/VeSCCI_b_FrntAxlMinRq_write' */

    /* Merge: '<Root>/VeSCCR_b_Output_Torque_Limit_FA_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_b_Output_Torque_Limit_FA'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCR_b_Output_Torque_LimitFA_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCI_b_Output_Torque_L);

    /* Merge: '<Root>/Merge_52_Irv' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_b_RrAxlMaxRqFA_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_b_RrAxlMaxRqFA_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCI_b_RrAxlMaxRqFA);

    /* SignalConversion generated from: '<S32>/VeSCCI_b_RrAxlMaxRq_write' */
#if Rte_SysCon_Variant_SCCR_3

    /* Merge: '<Root>/Merge_23' */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_b_RrAxlMaxRq_write_IRV
        (rtb_OutportBufferForVeSCCI_b_RrAxlMaxRq_);

#endif

    /* End of SignalConversion generated from: '<S32>/VeSCCI_b_RrAxlMaxRq_write' */

    /* Merge: '<Root>/Merge_3_Irv' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_b_RrAxlMinRqFA_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_b_RrAxlMinRqFA_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCI_b_RrAxlMinRqFA);

    /* SignalConversion generated from: '<S32>/VeSCCI_b_RrAxlMinRq_write' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_b_RrAxlTqRqFA_write'
     *  SignalConversion generated from: '<S32>/VeSCCI_e_EPBHoldSts_write'
     */
#if Rte_SysCon_Variant_SCCR_3

    /* Merge: '<Root>/Merge_45' */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_b_RrAxlMinRq_write_IRV
        (rtb_OutportBufferForVeSCCI_b_RrAxlMinRq_);

    /* Merge: '<Root>/Merge_50' */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_b_RrAxlTqRqFA_write_IRV
        (rtb_OutportBufferForVeSCCI_b_RrAxlTqRqFA);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCI_e_EPBHoldSts_write'
     */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCI_e_EPBHoldSts_write_IRV
        (rtb_OutportBufferForVeSCCI_e_EPBHoldSts_);

#endif

    /* End of SignalConversion generated from: '<S32>/VeSCCI_b_RrAxlMinRq_write' */

    /* Merge: '<Root>/VeSCCR_M_FrntAxlMax_CL_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCR_M_FrntAxlMax_CL_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCR_M_FrntAxlMax_CL_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCR_M_FrntAxlMax_CL_w);

    /* Merge: '<Root>/VeSCCR_M_FrntAxlMin_CL_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCR_M_FrntAxlMin_CL_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCR_M_FrntAxlMin_CL_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCR_M_FrntAxlMin_CL_w);

    /* Merge: '<Root>/VeSCCR_M_RrAxlMax_CL_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCR_M_RrAxlMax_CL_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCR_M_RrAxlMax_CL_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCR_M_RrAxlMax_CL_wri);

    /* Merge: '<Root>/VeSCCR_M_RrAxlMin_CL_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCR_M_RrAxlMin_CL_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCR_M_RrAxlMin_CL_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCR_M_RrAxlMin_CL_wri);

    /* Merge: '<Root>/VeSCCR_b_AWDDiscnctAllwd_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCR_b_AWDDiscnctAllwd_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCR_b_AWDDiscnctAllwd_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCR_b_AWDDiscnctAllwd);

    /* Merge: '<Root>/VeSCCR_b_DsblAEMDPGainFrnt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCR_b_DsblAEMDPGainFrnt_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCR_b_DsblAEMDPGainFrnt_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCR_b_DsblAEMDPGainFr);

    /* Merge: '<Root>/VeSCCR_b_DsblAEMDPGainRr_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCR_b_DsblAEMDPGainRr_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCR_b_DsblAEMDPGainRr_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCR_b_DsblAEMDPGainRr);

    /* SignalConversion generated from: '<S32>/VeSCCR_b_FlyWMaxRq_FA_Init' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCR_b_FlyWMaxRq_Init'
     *  SignalConversion generated from: '<S32>/VeSCCR_b_FlyWMinRq_FA_Init'
     *  SignalConversion generated from: '<S32>/VeSCCR_b_FlyWMinRq_Init'
     *  SignalConversion generated from: '<S32>/VeSCCR_b_FlyWRq_FA_Init'
     */
#if Rte_SysCon_Variant_SCCR_3

    /* Merge: '<Root>/Merge_85' */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCR_b_FlyWMaxRq_FA_write_IRV
        (rtb_OutportBufferForVeSCCR_b_FlyWMaxRq_d);

    /* Merge: '<Root>/Merge_84' */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCR_b_FlyWMaxRq_write_IRV
        (rtb_OutportBufferForVeSCCR_b_FlyWMaxRq_I);

    /* Merge: '<Root>/Merge_87' */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCR_b_FlyWMinRq_FA_write_IRV
        (rtb_OutportBufferForVeSCCR_b_FlyWMinRq_d);

    /* Merge: '<Root>/Merge_86' */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCR_b_FlyWMinRq_write_IRV
        (rtb_OutportBufferForVeSCCR_b_FlyWMinRq_I);

    /* Merge: '<Root>/Merge_83' */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCR_b_FlyWRq_FA_write_IRV
        (rtb_OutportBufferForVeSCCR_b_FlyWRq_FA_I);

#endif

    /* End of SignalConversion generated from: '<S32>/VeSCCR_b_FlyWMaxRq_FA_Init' */

    /* Merge: '<Root>/VeSCCR_b_FrontDFOffReq_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCR_b_FrontDFOffReq_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCR_b_FrontDFOffReq_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCR_b_FrontDFOffReq_w);

    /* Merge: '<Root>/VeSCCR_b_RearDFOffReq_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S32>/VeSCCR_b_RearDFOffReq_write'
     * */
    Rte_IrvWrite_SCCR_PwrOn_VeSCCR_b_RearDFOffReq_write_IRV
        (SCCR_ac_B.OutportBufferForVeSCCR_b_RearDFOffReq_wr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, SCCR_CODE) SCCR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/SCCR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S32>/FcnCallGen' incorporates:
     *  SubSystem: '<S32>/SCCI_InitInputs'
     */
    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlTrqEst' incorporates:
     *  Constant: '<S294>/Calib'
     *  Constant: '<S295>/Calib'
     *  Constant: '<S296>/Calib'
     *  Constant: '<S297>/Calib'
     *  Constant: '<S298>/Calib'
     *  Constant: '<S300>/Calib'
     *  Constant: '<S302>/Calib'
     *  Constant: '<S303>/Calib'
     *  Constant: '<S305>/Calib'
     *  Constant: '<S307>/Calib'
     *  Constant: '<S308>/Calib'
     *  Constant: '<S309>/Calib'
     *  SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlRqst'
     *  SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlRqst'
     *  SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlTrqEst'
     *  SignalConversion generated from: '<S290>/VeSCCI_b_FrntAxlMaxRq'
     *  SignalConversion generated from: '<S290>/VeSCCI_b_FrntAxlMinRq'
     *  SignalConversion generated from: '<S290>/VeSCCI_b_FrntAxlTqRqFA'
     *  SignalConversion generated from: '<S290>/VeSCCI_b_RrAxlMaxRq'
     *  SignalConversion generated from: '<S290>/VeSCCI_b_RrAxlMinRq'
     */
#if Rte_SysCon_Variant_SCCR_3

    SCCR_ac_B.Calib_ec = KeSCCR_b_FrntAxlTqRqFAInit;
    SCCR_ac_B.Calib_m = KeSCCR_b_RrAxlTqRqFAInit;
    SCCR_ac_B.Calib_el = KeSCCR_e_EPBHoldStsInit;
    SCCR_ac_B.Calib_e = KeSCCR_M_FlyWRqstInit;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlTrqEst' incorporates:
     *  Constant: '<S296>/Calib'
     *  Constant: '<S303>/Calib'
     *  Constant: '<S308>/Calib'
     *  Constant: '<S309>/Calib'
     */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlTrqEst =
        KeSCCR_M_FrntAxlTrqEstInit;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlTrqEst' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlTrqEst = KeSCCR_M_RrAxlTrqEstInit;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_FrntAxlMaxRq' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_FrntAxlMaxRq = KeSCCR_b_FrntAxlMaxRqInit;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_FrntAxlMinRq' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_FrntAxlMinRq = KeSCCR_b_FrntAxlMinRqInit;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlRqst' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlRqst = KeSCCR_M_FrntAxlRqstInit;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_RrAxlMaxRq' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_RrAxlMaxRq = KeSCCR_b_RrAxlMaxRqInit;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_RrAxlMinRq' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_RrAxlMinRq = KeSCCR_b_RrAxlMinRqInit;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlRqst' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlRqst = KeSCCR_M_RrAxlRqstInit;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_FrntAxlTqRqFA' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_FrntAxlTqRqFA = SCCR_ac_B.Calib_ec;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlTrqEst' */

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_FrntAxlMaxRqFA' incorporates:
     *  Constant: '<S299>/Calib'
     */
    SCCR_ac_B.OutportBufferForVeSCCI_b_FrntAxlMaxRqFA =
        KeSCCR_b_FrntAxlMaxRqFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_FrntAxlMinRqFA' incorporates:
     *  Constant: '<S301>/Calib'
     */
    SCCR_ac_B.OutportBufferForVeSCCI_b_FrntAxlMinRqFA =
        KeSCCR_b_FrntAxlMinRqFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_RrAxlMaxRqFA' incorporates:
     *  Constant: '<S304>/Calib'
     */
    SCCR_ac_B.OutportBufferForVeSCCI_b_RrAxlMaxRqFA = KeSCCR_b_RrAxlMaxRqFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_RrAxlMinRqFA' incorporates:
     *  Constant: '<S306>/Calib'
     */
    SCCR_ac_B.OutportBufferForVeSCCI_b_RrAxlMinRqFA = KeSCCR_b_RrAxlMinRqFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_RrAxlTqRqFA' incorporates:
     *  SignalConversion generated from: '<S290>/VeSCCI_b_DsblAEMDPGainFrnt'
     *  SignalConversion generated from: '<S290>/VeSCCI_b_DsblAEMDPGainRr'
     *  SignalConversion generated from: '<S290>/VeSCCI_e_EPBHoldSts'
     */
#if Rte_SysCon_Variant_SCCR_3

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_RrAxlTqRqFA' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_RrAxlTqRqFA = SCCR_ac_B.Calib_m;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_e_EPBHoldSts' incorporates:
     *  Constant: '<S309>/Calib'
     */
    SCCR_ac_B.OutportBufferForVeSCCI_e_EPBHoldSts = SCCR_ac_B.Calib_el;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_DsblAEMDPGainFrnt' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_DsblAEMDPGainFr =
        SCCR_ac_ConstB.ConstantValue13;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_DsblAEMDPGainRr' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_DsblAEMDPGainRr =
        SCCR_ac_ConstB.ConstantValue14;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_RrAxlTqRqFA' */

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlOLMax' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlOLMax =
        SCCR_ac_ConstB.ConstantValue;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlOLMin' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlOLMin =
        SCCR_ac_ConstB.ConstantValue1_g;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlOLMax' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlOLMax =
        SCCR_ac_ConstB.ConstantValue2_j;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlOLMin' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlOLMin =
        SCCR_ac_ConstB.ConstantValue3;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlCLMax' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlCLMax =
        SCCR_ac_ConstB.ConstantValue4;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlCLMin' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlCLMin =
        SCCR_ac_ConstB.ConstantValue5;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlCLMax' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlCLMax =
        SCCR_ac_ConstB.ConstantValue6;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlCLMin' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlCLMin =
        SCCR_ac_ConstB.ConstantValue7;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_r_RipAWD' */
    SCCR_ac_B.OutportBufferForVeSCCI_r_RipAWD = SCCR_ac_ConstB.ConstantValue8;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_RipRegen' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RipRegen = SCCR_ac_ConstB.ConstantValue9;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_PerfAWDFlag' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_PerfAWDFlag =
        SCCR_ac_ConstB.ConstantValue10;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_ZeroTrqAllwd' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_ZeroTrqAllwd =
        SCCR_ac_ConstB.ConstantValue11;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_AWDDiscnctAllwd' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_AWDDiscnctAllwd =
        SCCR_ac_ConstB.ConstantValue12;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlStrtgcMax_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlStrtgcMa =
        SCCR_ac_ConstB.ConstantValue15;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlStrtgcMax_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlStrtgcMax_ =
        SCCR_ac_ConstB.ConstantValue16;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlStrtgcMin_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlStrtgcMi =
        SCCR_ac_ConstB.ConstantValue17;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlStrtgcMin_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlStrtgcMin_ =
        SCCR_ac_ConstB.ConstantValue18;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlTactFastMax_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlTactFast =
        SCCR_ac_ConstB.ConstantValue19;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlTactFastMax_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlTactFastMa =
        SCCR_ac_ConstB.ConstantValue20;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlTactFastMin_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlTactFa_p =
        SCCR_ac_ConstB.ConstantValue21;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlTactFastMin_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlTactFastMi =
        SCCR_ac_ConstB.ConstantValue22;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlTactSlowMax_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlTactSlow =
        SCCR_ac_ConstB.ConstantValue23;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlTactSlowMax_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlTactSlowMa =
        SCCR_ac_ConstB.ConstantValue24;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlTactSlowMin_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlTactSl_n =
        SCCR_ac_ConstB.ConstantValue25;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlTactSlowMin_OL' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlTactSlowMi =
        SCCR_ac_ConstB.ConstantValue26;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlAdhMax' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlAdhMax =
        SCCR_ac_ConstB.ConstantValue27;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlAdhMax' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlAdhMax =
        SCCR_ac_ConstB.ConstantValue28;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlAdhMin' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlAdhMin =
        SCCR_ac_ConstB.ConstantValue29;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlAdhMin' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlAdhMin =
        SCCR_ac_ConstB.ConstantValue30;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlEffMax' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlEffMax =
        SCCR_ac_ConstB.ConstantValue31;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlEffMax' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlEffMax =
        SCCR_ac_ConstB.ConstantValue32;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FrntAxlEffMin' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FrntAxlEffMin =
        SCCR_ac_ConstB.ConstantValue33;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_RrAxlEffMin' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_RrAxlEffMin =
        SCCR_ac_ConstB.ConstantValue34;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_FrontDFOffReq' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_FrontDFOffReq =
        SCCR_ac_ConstB.ConstantValue35;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_RearDFOffReq' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_RearDFOffReq =
        SCCR_ac_ConstB.ConstantValue36;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_Output_Torque_Limit' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_Output_Torque_L =
        SCCR_ac_ConstB.ConstantValue38;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_b_Output_Torque_Limit_FA' */
    SCCR_ac_B.OutportBufferForVeSCCI_b_Output_Torque_L =
        SCCR_ac_ConstB.ConstantValue37;

    /* End of SystemInitialize for S-Function (fcgen): '<S32>/FcnCallGen' */

    /* SystemInitialize for S-Function (fcgen): '<S32>/FcnCallGen' incorporates:
     *  SubSystem: '<S32>/SCCO_Init_Outputs'
     */
    /* SystemInitialize for Atomic SubSystem: '<S291>/Variant Subsystem' */
    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FlyWRq_Init' incorporates:
     *  SignalConversion generated from: '<S290>/VeSCCR_b_FlyWMaxRq_FA_Init'
     *  SignalConversion generated from: '<S290>/VeSCCR_b_FlyWMaxRq_Init'
     *  SignalConversion generated from: '<S290>/VeSCCR_b_FlyWMinRq_FA_Init'
     *  SignalConversion generated from: '<S290>/VeSCCR_b_FlyWMinRq_Init'
     *  SignalConversion generated from: '<S290>/VeSCCR_b_FlyWRq_FA_Init'
     */
#if Rte_SysCon_Variant_SCCR_3

    /* SystemInitialize for Atomic SubSystem: '<S311>/SCCO_No_Stub' */
    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FlyWRq_Init' */
    SCCR_ac_B.OutportBufferForVeSCCI_M_FlyWRq_Init = SCCR_ac_B.Calib_e;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCR_b_FlyWRq_FA_Init' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_FlyWRq_FA_Init =
        SCCR_ac_ConstB.ConstantValue39;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCR_b_FlyWMaxRq_Init' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_FlyWMaxRq_Init =
        SCCR_ac_ConstB.ConstantValue43;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCR_b_FlyWMaxRq_FA_Init' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_FlyWMaxRq_FA_In =
        SCCR_ac_ConstB.ConstantValue40;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCR_b_FlyWMinRq_Init' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_FlyWMinRq_Init =
        SCCR_ac_ConstB.ConstantValue41;

    /* SystemInitialize for SignalConversion generated from: '<S290>/VeSCCR_b_FlyWMinRq_FA_Init' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_FlyWMinRq_FA_In =
        SCCR_ac_ConstB.ConstantValue42;

    /* Start for VariantMerge generated from: '<S311>/VeSCCR_M_FrntAxlMaxRq' incorporates:
     *  Constant: '<S314>/Calib'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_FrntAxlMa =
        KeSCCR_M_FrntAxlMaxRqOutInit;

    /* Start for VariantMerge generated from: '<S311>/VeSCCR_M_FrntAxlMinRq' incorporates:
     *  Constant: '<S316>/Calib'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_FrntAxlMi =
        KeSCCR_M_FrntAxlMinRqOutInit;

    /* Start for VariantMerge generated from: '<S311>/VeSCCR_M_RrAxlMaxRq' incorporates:
     *  Constant: '<S319>/Calib'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_RrAxlMaxR =
        KeSCCR_M_RrAxlMaxRqOutInit;

    /* Start for VariantMerge generated from: '<S311>/VeSCCR_M_RrAxlMinRq' incorporates:
     *  Constant: '<S320>/Calib'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_RrAxlMinR =
        KeSCCR_M_RrAxlMinRqOutInit;

    /* Start for VariantMerge generated from: '<S311>/VeSCCR_M_ESCSumMin' incorporates:
     *  Constant: '<S317>/Calib'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_ESCSumMin =
        KeSCCR_M_FrntAxlMinRqOutInit;

    /* Start for VariantMerge generated from: '<S311>/VeSCCR_M_ESCSumMax' incorporates:
     *  Constant: '<S315>/Calib'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_ESCSumMax =
        KeSCCR_M_FrntAxlMaxRqOutInit;

    /* Start for VariantMerge generated from: '<S311>/VeSCCR_b_Rq_ESCSum' incorporates:
     *  Constant: '<S312>/FALSE Constant1'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_b_Rq_ESCSum = false;

    /* Start for VariantMerge generated from: '<S311>/VeSCCR_b_Rq_ESCSumFA' incorporates:
     *  Constant: '<S312>/FALSE Constant2'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_b_Rq_ESCS_f = false;

    /* End of SystemInitialize for SubSystem: '<S311>/SCCO_No_Stub' */
#else

    /* SystemInitialize for Atomic SubSystem: '<S311>/SCCO_Stub' */
    /* Start for VariantMerge generated from: '<S311>/VeSCCR_M_FrntAxlMaxRq' incorporates:
     *  Constant: '<S313>/Constant Value12'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_FrntAxlMa = 10000.0F;

    /* Start for VariantMerge generated from: '<S311>/VeSCCR_M_FrntAxlMinRq' incorporates:
     *  Constant: '<S313>/Constant Value13'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_FrntAxlMi = (-10000.0F);

    /* Start for VariantMerge generated from: '<S311>/VeSCCR_M_RrAxlMaxRq' incorporates:
     *  Constant: '<S313>/Constant Value1'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_RrAxlMaxR = 10000.0F;

    /* Start for VariantMerge generated from: '<S311>/VeSCCR_M_RrAxlMinRq' incorporates:
     *  Constant: '<S313>/Constant Value2'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_RrAxlMinR = (-10000.0F);

    /* Start for VariantMerge generated from: '<S311>/VeSCCR_M_ESCSumMin' incorporates:
     *  Constant: '<S313>/Constant Value4'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_ESCSumMin = (-10000.0F);

    /* Start for VariantMerge generated from: '<S311>/VeSCCR_M_ESCSumMax' incorporates:
     *  Constant: '<S313>/Constant Value3'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_M_ESCSumMax = 10000.0F;

    /* Start for VariantMerge generated from: '<S311>/VeSCCR_b_Rq_ESCSum' incorporates:
     *  Constant: '<S313>/FALSE Constant1'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_b_Rq_ESCSum = false;

    /* Start for VariantMerge generated from: '<S311>/VeSCCR_b_Rq_ESCSumFA' incorporates:
     *  Constant: '<S313>/FALSE Constant2'
     */
    SCCR_ac_B.VariantMergeForOutportVeSCCR_b_Rq_ESCS_f = false;

    /* End of SystemInitialize for SubSystem: '<S311>/SCCO_Stub' */
#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S290>/VeSCCI_M_FlyWRq_Init' */
    /* End of SystemInitialize for SubSystem: '<S291>/Variant Subsystem' */

    /* SystemInitialize for SignalConversion generated from: '<S291>/FrntAxlMax_Rq' */
    SCCR_ac_B.OutportBufferForFrntAxlMax_Rq = SCCR_ac_ConstB.FALSEConstant8;

    /* SystemInitialize for SignalConversion generated from: '<S291>/FrntAxlMin_Rq' */
    SCCR_ac_B.OutportBufferForFrntAxlMin_Rq = SCCR_ac_ConstB.FALSEConstant7;

    /* SystemInitialize for SignalConversion generated from: '<S291>/RrAxlMax_Rq' */
    SCCR_ac_B.OutportBufferForRrAxlMax_Rq = SCCR_ac_ConstB.FALSEConstant1;

    /* SystemInitialize for SignalConversion generated from: '<S291>/RrAxlMin_Rq' */
    SCCR_ac_B.OutportBufferForRrAxlMin_Rq = SCCR_ac_ConstB.FALSEConstant2;

    /* SystemInitialize for SignalConversion generated from: '<S291>/FrntAxlRqFA' */
    SCCR_ac_B.OutportBufferForFrntAxlRqFA = SCCR_ac_ConstB.FALSEConstant5;

    /* SystemInitialize for SignalConversion generated from: '<S291>/RrAxlRqFA' */
    SCCR_ac_B.OutportBufferForRrAxlRqFA = SCCR_ac_ConstB.FALSEConstant6;

    /* SystemInitialize for SignalConversion generated from: '<S291>/FrntAxlRq' */
    SCCR_ac_B.OutportBufferForFrntAxlRq = SCCR_ac_ConstB.FALSEConstant3;

    /* SystemInitialize for SignalConversion generated from: '<S291>/RrAxlRq' */
    SCCR_ac_B.OutportBufferForRrAxlRq = SCCR_ac_ConstB.FALSEConstant4;

    /* SystemInitialize for SignalConversion generated from: '<S291>/FrntAxlMaxRqPrtctd' */
    SCCR_ac_B.OutportBufferForFrntAxlMaxRqPrtctd =
        SCCR_ac_ConstB.ConstantValue45;

    /* SystemInitialize for SignalConversion generated from: '<S291>/FrntAxlMinRqPrtctd' */
    SCCR_ac_B.OutportBufferForFrntAxlMinRqPrtctd = SCCR_ac_ConstB.ConstantValue1;

    /* SystemInitialize for SignalConversion generated from: '<S291>/OutputTorqueLimit' */
    SCCR_ac_B.OutportBufferForOutputTorqueLimit = SCCR_ac_ConstB.ConstantValue2;

    /* SystemInitialize for SignalConversion generated from: '<S291>/ESCTrqEnblRq_Allowed' */
    SCCR_ac_B.OutportBufferForESCTrqEnblRq_Allowed =
        SCCR_ac_ConstB.FALSEConstant9;

    /* SystemInitialize for S-Function (fcgen): '<S32>/FcnCallGen' incorporates:
     *  SubSystem: '<S32>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S292>/VeSCCR_M_FrntAxlMax_CL_write' */
    SCCR_ac_B.OutportBufferForVeSCCR_M_FrntAxlMax_CL_w = SCCR_ac_ConstB.Const4;

    /* SystemInitialize for SignalConversion generated from: '<S292>/VeSCCR_M_FrntAxlMin_CL_write' */
    SCCR_ac_B.OutportBufferForVeSCCR_M_FrntAxlMin_CL_w = SCCR_ac_ConstB.Const6;

    /* SystemInitialize for SignalConversion generated from: '<S292>/VeSCCR_M_RrAxlMax_CL_write' */
    SCCR_ac_B.OutportBufferForVeSCCR_M_RrAxlMax_CL_wri = SCCR_ac_ConstB.Const18;

    /* SystemInitialize for SignalConversion generated from: '<S292>/VeSCCR_M_RrAxlMin_CL_write' */
    SCCR_ac_B.OutportBufferForVeSCCR_M_RrAxlMin_CL_wri = SCCR_ac_ConstB.Const20;

    /* SystemInitialize for SignalConversion generated from: '<S292>/VeSCCR_b_AWDDiscnctAllwd_write' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_AWDDiscnctAllwd = SCCR_ac_ConstB.Const28;

    /* SystemInitialize for SignalConversion generated from: '<S292>/VeSCCR_b_DsblAEMDPGainFrnt_write' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_DsblAEMDPGainFr = SCCR_ac_ConstB.Const29;

    /* SystemInitialize for SignalConversion generated from: '<S292>/VeSCCR_b_DsblAEMDPGainRr_write' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_DsblAEMDPGainRr = SCCR_ac_ConstB.Const30;

    /* SystemInitialize for SignalConversion generated from: '<S292>/VeSCCR_b_FrontDFOffReq_write' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_FrontDFOffReq_w = SCCR_ac_ConstB.Const31;

    /* SystemInitialize for SignalConversion generated from: '<S292>/VeSCCR_b_RearDFOffReq_write' */
    SCCR_ac_B.OutportBufferForVeSCCR_b_RearDFOffReq_wr = SCCR_ac_ConstB.Const33;

    /* End of SystemInitialize for S-Function (fcgen): '<S32>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_FrntAxlTrqEstRadio' incorporates:
     *  Merge: '<Root>/Merge_68'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlTrqEstRadio_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_RrAxlTrqEstRadio' incorporates:
     *  Merge: '<Root>/Merge_67'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlTrqEstRadio_Value(0.0F);

#if Rte_SysCon_Variant_SCCR_3

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF1' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeSCCR_M_FlyWRq' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeSCCR_M_Output_Torque_Limit' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeSCCR_b_FlyWMaxRq' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeSCCR_b_FlyWMinRq' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/SCCR_FastTEF1' */
    /* SystemInitialize for S-Function (fcgen): '<S30>/FcnCallGen' incorporates:
     *  SubSystem: '<S30>/SCCC_AxlTrqArbtr'
     */
    /* SystemInitialize for IfAction SubSystem: '<S62>/FrontAxle_NoESC' */
    /* SystemInitialize for SignalConversion generated from: '<S75>/FrntAxlFilterTarget' incorporates:
     *  Constant: '<S140>/Calib'
     *  Constant: '<S141>/Calib'
     */
    SCCR_ac_B.OutportBufferForFrntAxlFilterTarget[0] = KeSCCR_M_FrntAxlMaxRqLim;
    SCCR_ac_B.OutportBufferForFrntAxlFilterTarget[1] = KeSCCR_M_FrntAxlMinRqLim;

    /* End of SystemInitialize for SubSystem: '<S62>/FrontAxle_NoESC' */

    /* SystemInitialize for Merge: '<S62>/Merge' */
    SCCR_ac_B.Merge = 0.0F;

    /* SystemInitialize for Merge: '<S62>/Merge1' */
    SCCR_ac_B.Merge1 = 0.0F;

    /* SystemInitialize for Merge: '<S62>/Merge2' */
    SCCR_ac_B.Merge2 = 0.0F;

    /* SystemInitialize for Merge: '<S62>/Merge3' */
    SCCR_ac_B.Merge3 = 0.0F;

    /* SystemInitialize for Merge: '<S62>/Merge4' */
    SCCR_ac_B.Merge4 = false;

    /* SystemInitialize for Merge: '<S62>/Merge5' */
    SCCR_ac_B.Merge5 = false;

    /* SystemInitialize for Merge: '<S62>/Merge6' */
    SCCR_ac_B.Merge6 = false;

    /* SystemInitialize for Merge: '<S62>/Merge7' */
    SCCR_ac_B.Merge7 = false;

    /* SystemInitialize for Merge: '<S62>/Merge8' */
    SCCR_ac_B.Merge8 = false;

    /* SystemInitialize for Merge: '<S62>/Merge9' */
    SCCR_ac_B.Merge9 = false;

    /* SystemInitialize for Merge: '<S64>/Merge' */
    SCCR_ac_B.Merge_f = 0.0F;

    /* End of SystemInitialize for S-Function (fcgen): '<S30>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/SCCR_FastTEF1' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeSCCR_b_FlyWMinRq' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeSCCR_b_FlyWMaxRq' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeSCCR_M_Output_Torque_Limit' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeSCCR_M_FlyWRq' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF1' */
#endif

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_FrntAxlMaxRq' incorporates:
     *  Merge: '<Root>/Merge_76'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlMaxRq_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_FrntAxlMinRq' incorporates:
     *  Merge: '<Root>/Merge_77'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlMinRq_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_RrAxlMaxRq' incorporates:
     *  Merge: '<Root>/Merge_78'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlMaxRq_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_RrAxlMinRq' incorporates:
     *  Merge: '<Root>/Merge_79'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlMinRq_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_FrntAxlMaxRq' incorporates:
     *  Merge: '<Root>/Merge_80'
     */
    (void)Rte_Write_VeSCCR_b_FrntAxlMaxRq_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_FrntAxlMinRq' incorporates:
     *  Merge: '<Root>/Merge_66'
     */
    (void)Rte_Write_VeSCCR_b_FrntAxlMinRq_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_RrAxlMaxRq' incorporates:
     *  Merge: '<Root>/Merge_70'
     */
    (void)Rte_Write_VeSCCR_b_RrAxlMaxRq_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_RrAxlMinRq' incorporates:
     *  Merge: '<Root>/Merge_69'
     */
    (void)Rte_Write_VeSCCR_b_RrAxlMinRq_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_FrntAxlMaxRqFA' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    (void)Rte_Write_VeSCCR_b_FrntAxlMaxRqFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_FrntAxlMinRqFA' incorporates:
     *  Merge: '<Root>/Merge_4'
     */
    (void)Rte_Write_VeSCCR_b_FrntAxlMinRqFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_RrAxlMaxRqFA' incorporates:
     *  Merge: '<Root>/Merge_52'
     */
    (void)Rte_Write_VeSCCR_b_RrAxlMaxRqFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_RrAxlMinRqFA' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    (void)Rte_Write_VeSCCR_b_RrAxlMinRqFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_FrntAxlRqFA' incorporates:
     *  Merge: '<Root>/Merge_71'
     */
    (void)Rte_Write_VeSCCR_b_FrntAxlRqFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_RrAxlRqFA' incorporates:
     *  Merge: '<Root>/Merge_72'
     */
    (void)Rte_Write_VeSCCR_b_RrAxlRqFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_FrntAxlRq' incorporates:
     *  Merge: '<Root>/Merge_73'
     */
    (void)Rte_Write_VeSCCR_b_FrntAxlRq_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_RrAxlRq' incorporates:
     *  Merge: '<Root>/Merge_74'
     */
    (void)Rte_Write_VeSCCR_b_RrAxlRq_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_FrntAxlOLMax' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlOLMax_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_FrntAxlOLMin' incorporates:
     *  Merge: '<Root>/Merge_11'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlOLMin_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_RrAxlOLMax' incorporates:
     *  Merge: '<Root>/Merge_13'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlOLMax_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_RrAxlOLMin' incorporates:
     *  Merge: '<Root>/Merge_14'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlOLMin_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_FrntAxlCLMax' incorporates:
     *  Merge: '<Root>/Merge_15'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlCLMax_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_FrntAxlCLMin' incorporates:
     *  Merge: '<Root>/Merge_16'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlCLMin_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_RrAxlCLMax' incorporates:
     *  Merge: '<Root>/Merge_17'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlCLMax_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_RrAxlCLMin' incorporates:
     *  Merge: '<Root>/Merge_18'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlCLMin_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_r_RipAWD' incorporates:
     *  Merge: '<Root>/Merge_19'
     */
    (void)Rte_Write_VeSCCR_r_RipAWD_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_r_RipRegen' incorporates:
     *  Merge: '<Root>/Merge_20'
     */
    (void)Rte_Write_VeSCCR_r_RipRegen_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_PerfAWDFlag' incorporates:
     *  Merge: '<Root>/Merge_21'
     */
    (void)Rte_Write_VeSCCR_b_PerfAWDFlag_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_ZeroTrqAllwd' incorporates:
     *  Merge: '<Root>/Merge_5'
     */
    (void)Rte_Write_VeSCCR_b_ZeroTrqAllwd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_AWDDiscnctAllwd' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    (void)Rte_Write_VeSCCR_b_AWDDiscnctAllwd_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_FrntAxlStrtgcMax_OL' incorporates:
     *  Merge: '<Root>/Merge_25'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlStrtgcMax_OL_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_RrAxlStrtgcMax_OL' incorporates:
     *  Merge: '<Root>/Merge_26'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlStrtgcMax_OL_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_FrntAxlStrtgcMin_OL' incorporates:
     *  Merge: '<Root>/Merge_27'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlStrtgcMin_OL_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_RrAxlStrtgcMin_OL' incorporates:
     *  Merge: '<Root>/Merge_28'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlStrtgcMin_OL_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_FrntAxlTactFastMax_OL' incorporates:
     *  Merge: '<Root>/Merge_29'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlTactFastMax_OL_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_RrAxlTactFastMax_OL' incorporates:
     *  Merge: '<Root>/Merge_30'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlTactFastMax_OL_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_FrntAxlTactFastMin_OL' incorporates:
     *  Merge: '<Root>/Merge_31'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlTactFastMin_OL_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_RrAxlTactFastMin_OL' incorporates:
     *  Merge: '<Root>/Merge_32'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlTactFastMin_OL_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_FrntAxlTactSlowMax_OL' incorporates:
     *  Merge: '<Root>/Merge_33'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlTactSlowMax_OL_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_RrAxlTactSlowMax_OL' incorporates:
     *  Merge: '<Root>/Merge_35'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlTactSlowMax_OL_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_FrntAxlTactSlowMin_OL' incorporates:
     *  Merge: '<Root>/Merge_36'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlTactSlowMin_OL_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_RrAxlTactSlowMin_OL' incorporates:
     *  Merge: '<Root>/Merge_37'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlTactSlowMin_OL_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_FrntAxlAdhMax' incorporates:
     *  Merge: '<Root>/Merge_38'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlAdhMax_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_RrAxlAdhMax' incorporates:
     *  Merge: '<Root>/Merge_39'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlAdhMax_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_FrntAxlAdhMin' incorporates:
     *  Merge: '<Root>/Merge_40'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlAdhMin_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_RrAxlAdhMin' incorporates:
     *  Merge: '<Root>/Merge_41'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlAdhMin_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_FrntAxlEffMax' incorporates:
     *  Merge: '<Root>/Merge_42'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlEffMax_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_RrAxlEffMax' incorporates:
     *  Merge: '<Root>/Merge_43'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlEffMax_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_FrntAxlEffMin' incorporates:
     *  Merge: '<Root>/Merge_44'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlEffMin_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_RrAxlEffMin' incorporates:
     *  Merge: '<Root>/Merge_46'
     */
    (void)Rte_Write_VeSCCR_M_RrAxlEffMin_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_FrntAxlMaxRqPrtctd' incorporates:
     *  Merge: '<Root>/Merge_65'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlMaxRqPrtctd_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_FrntAxlMinRqPrtctd' incorporates:
     *  Merge: '<Root>/Merge_75'
     */
    (void)Rte_Write_VeSCCR_M_FrntAxlMinRqPrtctd_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_FrontDFOffReq' incorporates:
     *  Merge: '<Root>/Merge_47'
     */
    (void)Rte_Write_VeSCCR_b_FrontDFOffReq_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_RearDFOffReq' incorporates:
     *  Merge: '<Root>/Merge_48'
     */
    (void)Rte_Write_VeSCCR_b_RearDFOffReq_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_OutputTorqueLimit' incorporates:
     *  Merge: '<Root>/Merge_81'
     */
    (void)Rte_Write_VeSCCR_M_OutputTorqueLimit_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_Rq_ESCSum' incorporates:
     *  Merge: '<Root>/Merge_88'
     */
    (void)Rte_Write_VeSCCR_b_Rq_ESCSum_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_ESCSumMax' incorporates:
     *  Merge: '<Root>/Merge_90'
     */
    (void)Rte_Write_VeSCCR_M_ESCSumMax_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_M_ESCSumMin' incorporates:
     *  Merge: '<Root>/Merge_89'
     */
    (void)Rte_Write_VeSCCR_M_ESCSumMin_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_ESCTrqEnblRq_Allowed' incorporates:
     *  Merge: '<Root>/Merge_92'
     */
    (void)Rte_Write_VeSCCR_b_ESCTrqEnblRq_Allowed_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_Rq_ESCSumFA' incorporates:
     *  Merge: '<Root>/Merge_91'
     */
    (void)Rte_Write_VeSCCR_b_Rq_ESCSumFA_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeSCCR_b_OutputTorqueLimit_CAN_FA' */
#if Rte_SysCon_Variant_SCCR_3

    (void)Rte_Write_VeSCCR_b_OutputTorqueLimit_CAN_FA_Value
        (SCCR_ac_B.VeSCCI_b_Output_Torque_Lim_FA);

#endif

    /* End of SystemInitialize for Outport: '<Root>/VeSCCR_b_OutputTorqueLimit_CAN_FA' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
