/*
 * File: TMMR_ac.c
 *
 * Code generated for Simulink model 'TMMR_ac'.
 *
 * Model version                  : 9.255
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:46:46 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TMMR_ac.h"
#include "look1_iflf_binlca_16a.h"
#include "look2_iflf_binlca_16a.h"

/* Named constants for Chart: '<S232>/TMCC_ShiftStatMgr' */
#if Rte_SysCon_Variant_TMMR_FUNC_Enable
#define TMMR_ac_IN_SpeedPhase          ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable
#define TMMR_ac_IN_SteadyState         ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable
#define TMMR_ac_IN_TorqPhase           ((uint8)3U)
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
#define START_SEC_CALIB_UNSPECIFIED_TMMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(TeTRNR_e_TCMShftType, TMMR_VAR_INIT) HaTMMR_e_ShftType4GS
    [13] =
{
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState
};                                     /* Referenced by: '<S7>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(TeTRNR_e_TCMShftType, TMMR_VAR_INIT)
    HaTMMR_e_ShftType4STN[13] =
{
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState
};                                     /* Referenced by: '<S8>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(boolean, TMMR_VAR_INIT) HeTMMR_b_EnblEngInert = 1;/* Referenced by: '<S154>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(boolean, TMMR_VAR_INIT) HeTMMR_b_UseILE4C1TorqEst = 0;/* Referenced by: '<S495>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(boolean, TMMR_VAR_INIT) HeTMMR_b_UseTransShiftStat = 1;/* Referenced by:
                                                                      * '<S171>/Calib'
                                                                      * '<S112>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable || Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) HeTMMR_t_MedTED_dT = 0.02F;/* Referenced by:
                                                                      * '<S36>/Calib'
                                                                      * '<S207>/Calib'
                                                                      * '<S172>/Calib'
                                                                      * '<S507>/Calib'
                                                                      * '<S541>/Calib'
                                                                      * '<S556>/Calib'
                                                                      * '<S297>/Calib'
                                                                      * '<S101>/Calib'
                                                                      * '<S118>/Calib'
                                                                      * '<S307>/Calib'
                                                                      * '<S135>/Calib'
                                                                      * '<S254>/Calib'
                                                                      * '<S269>/Calib'
                                                                      * '<S276>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KaTMMR_M_ClchDogTorqLock[6] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KaTMMR_M_ClchDogTorqLockOffg[6] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S191>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(TeHSER_e_ClutchID, TMMR_VAR_INIT)
    KaTMMR_e_ClchOncAssgnShftType[89] =
{
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_Cl3, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_Cl1, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone, CeHSER_e_ClNone,
    CeHSER_e_ClNone
};                                     /* Referenced by: '<S447>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(TeTMMR_e_ClchTypeDef, TMMR_VAR_INIT) KaTMMR_e_ClchTypeDef
    [7] =
{
    CeTMMR_e_ClchFrict, CeTMMR_e_ClchFrict, CeTMMR_e_ClchFrict, CeTMMR_e_ClchBrk,
    CeTMMR_e_ClchBrk, CeTMMR_e_ClchOneWay, CeTMMR_e_ClchZeroTorq
};                                     /* Referenced by:
                                        * '<S9>/Calib'
                                        * '<S393>/Calib'
                                        * '<S429>/Calib'
                                        * '<S438>/Calib'
                                        * '<S448>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(TeHSER_e_ShftInPrgs, TMMR_VAR_INIT) KaTMMR_e_ShiftTypeIdx
    [89] =
{
    CeHSER_e_StdyState, CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs,
    CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs,
    CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs,
    CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs,
    CeHSER_e_GarageSIP, CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs,
    CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs,
    CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs,
    CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs,
    CeHSER_e_StdyState, CeHSER_e_StdyState, CeHSER_e_StdyState,
    CeHSER_e_StdyState, CeHSER_e_StdyState, CeHSER_e_StdyState,
    CeHSER_e_StdyState, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_GarageSIP, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_GarageSIP, CeHSER_e_GarageSIP, CeHSER_e_NeutDsrd, CeHSER_e_NeutDsrd,
    CeHSER_e_NeutDsrd, CeHSER_e_NeutDsrd, CeHSER_e_NeutDsrd, CeHSER_e_NeutDsrd,
    CeHSER_e_NeutDsrd, CeHSER_e_StdyState, CeHSER_e_StdyState,
    CeHSER_e_StdyState, CeHSER_e_StdyState, CeHSER_e_StdyState,
    CeHSER_e_StdyState, CeHSER_e_StdyState, CeHSER_e_StdyState,
    CeHSER_e_StdyState, CeHSER_e_StdyState, CeHSER_e_StdyState,
    CeHSER_e_StdyState, CeHSER_e_StdyState, CeHSER_e_StdyState,
    CeHSER_e_StdyState, CeHSER_e_NeutDsrd, CeHSER_e_NeutDsrd, CeHSER_e_NeutDsrd,
    CeHSER_e_NeutDsrd, CeHSER_e_NeutDsrd, CeHSER_e_NeutDsrd, CeHSER_e_NeutDsrd,
    CeHSER_e_GarageSIP, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_GarageSIP, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_GarageSIP, CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs,
    CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs,
    CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs,
    CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs, CeHSER_e_ShftInPrgs,
    CeHSER_e_ShftInPrgs, CeHSER_e_StdyState, CeHSER_e_StdyState,
    CeHSER_e_GarageSIP
};                                     /* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(TeHSER_e_ShftInPrgs, TMMR_VAR_INIT)
    KaTMMR_e_ShiftTypeIdxHTDRNeut[89] =
{
    CeHSER_e_StdyState, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_GarageSIP, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_GarageSIP, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_GarageSIP, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_GarageSIP, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_GarageSIP, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_GarageSIP, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_GarageSIP, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_StdyState, CeHSER_e_StdyState, CeHSER_e_StdyState,
    CeHSER_e_StdyState, CeHSER_e_StdyState, CeHSER_e_StdyState,
    CeHSER_e_StdyState, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_GarageSIP, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_GarageSIP, CeHSER_e_GarageSIP, CeHSER_e_NeutDsrd, CeHSER_e_NeutDsrd,
    CeHSER_e_NeutDsrd, CeHSER_e_NeutDsrd, CeHSER_e_NeutDsrd, CeHSER_e_NeutDsrd,
    CeHSER_e_NeutDsrd, CeHSER_e_StdyState, CeHSER_e_StdyState,
    CeHSER_e_StdyState, CeHSER_e_StdyState, CeHSER_e_StdyState,
    CeHSER_e_StdyState, CeHSER_e_StdyState, CeHSER_e_StdyState,
    CeHSER_e_StdyState, CeHSER_e_StdyState, CeHSER_e_StdyState,
    CeHSER_e_StdyState, CeHSER_e_StdyState, CeHSER_e_StdyState,
    CeHSER_e_StdyState, CeHSER_e_NeutDsrd, CeHSER_e_NeutDsrd, CeHSER_e_NeutDsrd,
    CeHSER_e_NeutDsrd, CeHSER_e_NeutDsrd, CeHSER_e_NeutDsrd, CeHSER_e_NeutDsrd,
    CeHSER_e_GarageSIP, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_GarageSIP, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_GarageSIP, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_GarageSIP, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_GarageSIP, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_GarageSIP, CeHSER_e_GarageSIP, CeHSER_e_GarageSIP,
    CeHSER_e_GarageSIP, CeHSER_e_StdyState, CeHSER_e_StdyState,
    CeHSER_e_GarageSIP
};                                     /* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(sint16, TMMR_VAR_INIT) KaTMMR_i_ClchIdx2ndOffgShftType[89]
    =
{
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 3, 3, 2,
    2, 2, 2, 1, 1, 1, 1, 1, 2, -1, -1, -1
} ;                                    /* Referenced by:
                                        * '<S10>/Calib'
                                        * '<S387>/Calib'
                                        * '<S409>/Calib'
                                        * '<S394>/Calib'
                                        * '<S439>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(sint16, TMMR_VAR_INIT) KaTMMR_i_ClchIdxOffgShftType[89] =
{
    0, 6, 5, 5, 3, 3, 0, 2, 0, 0, 0, 2, -1, 3, 3, 2, 2, 1, 1, 1, 1, 2, 3, 3, 6,
    6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 0, 3, 2, 1, 2, 3, 2, 2, 2, 2, 2, 2, 5,
    5, 5, 5, 5, 5, 5, 5, 5, 5, 2, 0, 3, 2, 1, 2, 3, 6, 6, 6, 6, 6, 6, 6, 2, 1, 1,
    1, 1, 1, 2, 3, 3, 3, 3, 3, 6, 6, 6
} ;                                    /* Referenced by:
                                        * '<S410>/Calib'
                                        * '<S430>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(sint16, TMMR_VAR_INIT) KaTMMR_i_ClchIdxOncShftType[89] =
{
    5, 5, 3, 2, 2, 1, 1, 1, 1, 2, 3, 3, 4, 4, 5, 5, 3, 3, 0, 2, 0, 0, 0, 2, 6, 6,
    6, 6, 6, 6, 6, 0, 0, 0, 0, 1, 1, 2, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 6, 6, 6, 6, 2, 0, 3, 2, 0, 2, 3, 5, 5, 5, 3,
    5, 3, 3, 2, 3, 2, 0, 0, 6, 6, 5
} ;                                    /* Referenced by:
                                        * '<S411>/Calib'
                                        * '<S449>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(sint16, TMMR_VAR_INIT) KaTMMR_i_EngStartStopIndex[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S550>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KaTMMR_k_ClchTorqFiltCnst[6] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S199>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KaTMMR_k_ClchTorqFiltCnstOffg[89] =
{
    0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F,
    0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F,
    0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F,
    0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F,
    0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F,
    0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F,
    0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F, 0.6F
} ;                                    /* Referenced by: '<S201>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KaTMMR_k_ClchTorqFiltCnstOnc[89] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KaTMMR_p_RetSpringPres[6] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S194>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KaTMMR_r_ClchFrictCoeffComb[6] =
{
    1.0E-5F, 1.0E-5F, 1.0E-5F, 1.0E-5F, 1.0E-5F, 1.0E-5F
} ;                                    /* Referenced by: '<S200>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KaTMMR_r_ClchFrictCoeffCombOffg[6]
    =
{
    1.0E-5F, 1.0E-5F, 1.0E-5F, 1.0E-5F, 1.0E-5F, 1.0E-5F
} ;                                    /* Referenced by: '<S202>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KaTMMR_r_ClchFrictCoeffCombOnc[6] =
{
    1.0E-5F, 1.0E-5F, 1.0E-5F, 1.0E-5F, 1.0E-5F, 1.0E-5F
} ;                                    /* Referenced by: '<S204>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KaTMMR_r_CoeffDampTransInShftType
    [89] =
{
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F
} ;                                    /* Referenced by: '<S412>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT)
    KaTMMR_r_CoeffDampTransOutShftType[89] =
{
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F, 0.0001F,
    0.0001F
} ;                                    /* Referenced by: '<S413>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT)
    KaTMMR_r_CoeffGrRatClch2ndOffgPostShftType[89] =
{
    0.02F, 1.53571427F, 1.53571427F, 1.53571427F, 2.632653F, 2.632653F, 1.6125F,
    2.632653F, 1.6125F, 2.86666656F, 2.86666656F, -2.0476191F, 1.53571427F,
    2.632653F, 2.632653F, 2.632653F, 2.632653F, 1.53571427F, 0.671875F,
    1.53571427F, 0.671875F, -2.0476191F, -2.0476191F, -2.0476191F, 0.02F, 0.02F,
    0.02F, 0.02F, 0.02F, 0.02F, 0.02F, 0.671875F, 0.671875F, 0.671875F,
    -2.0476191F, -2.0476191F, 0.671875F, 0.671875F, 2.86666656F, 1.6125F,
    1.6125F, 2.86666656F, 0.671875F, 0.671875F, -2.0476191F, -2.0476191F,
    -2.0476191F, -2.0476191F, -2.0476191F, -2.0476191F, 0.02F, 0.02F, 0.02F,
    0.02F, 0.02F, 0.02F, 0.02F, 0.02F, 0.02F, 0.02F, -2.0476191F, 2.86666656F,
    2.632653F, 2.632653F, 2.86666656F, -2.0476191F, -2.0476191F, 0.671875F,
    0.671875F, 0.671875F, 0.671875F, -2.0476191F, -2.0476191F, 0.671875F,
    2.632653F, 2.632653F, 2.632653F, 2.632653F, 2.632653F, 2.632653F,
    1.53571427F, 1.53571427F, 1.53571427F, 1.53571427F, 0.671875F, -2.0476191F,
    0.2F, 0.4F, 0.671875F
} ;                                    /* Referenced by:
                                        * '<S395>/Calib'
                                        * '<S440>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT)
    KaTMMR_r_CoeffGrRatClch2ndOffgPreShftType[89] =
{
    0.01F, 2.90370369F, 2.90370369F, 2.90370369F, 0.952777803F, 0.952777803F,
    1.55555558F, 0.590869963F, 0.964685619F, 0.398481965F, 0.398481965F,
    -0.415841579F, 2.90370369F, 0.952777803F, 0.952777803F, 0.590869963F,
    0.590869963F, 0.743833F, 1.0F, 0.743833F, 1.26732671F, -0.415841579F,
    -0.328125F, -0.328125F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F,
    1.0F, 1.0F, 1.0F, -0.328125F, -0.328125F, 1.0F, 1.0F, 1.55555558F,
    1.55555558F, 0.964685619F, 0.398481965F, 1.26732671F, 1.0F, 1.55555558F,
    1.55555558F, 1.55555558F, 1.55555558F, 1.55555558F, 1.55555558F, 0.01F,
    0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 1.55555558F,
    1.55555558F, 0.952777803F, 0.590869963F, 0.398481965F, -0.415841579F,
    -0.328125F, 1.0F, 1.0F, 1.0F, 1.0F, -0.328125F, -0.328125F, 1.0F,
    0.952777803F, 0.952777803F, 0.590869963F, 0.590869963F, 0.590869963F,
    0.590869963F, 0.743833F, 0.743833F, 0.743833F, 0.743833F, 1.26732671F,
    -0.415841579F, 0.1F, 0.3F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S396>/Calib'
                                        * '<S441>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KaTMMR_r_CoeffInrtTransInShftType
    [89] =
{
    0.008937F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008F,
    0.008F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008F,
    0.008F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008937F, 0.008937F,
    0.008937F, 0.008937F, 0.008937F, 0.008937F, 0.008937F, 0.008F, 0.008F,
    0.008F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008F,
    0.008F, 0.008F, 0.008937F, 0.008937F, 0.008937F, 0.008937F, 0.008937F,
    0.008937F, 0.008937F, 0.008937F, 0.008937F, 0.008937F, 0.008937F, 0.008937F,
    0.008937F, 0.008937F, 0.008937F, 0.008937F, 0.008937F, 0.008937F, 0.008937F,
    0.008937F, 0.008937F, 0.008937F, 0.008937F, 0.008F, 0.008F, 0.008F, 0.008F,
    0.008F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008F,
    0.008F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008F, 0.008937F, 0.008937F, 0.008F
} ;                                    /* Referenced by: '<S414>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT)
    KaTMMR_r_CoeffInrtTransOutShftType[89] =
{
    0.0F, 0.007795F, 0.00548F, 0.0171F, 0.0171F, 0.044283F, 0.064265F, 0.044283F,
    0.04123F, 0.04123F, 0.064265F, 0.064265F, 0.007795F, 0.007795F, 0.007795F,
    0.007795F, 0.00548F, 0.00548F, 0.00548F, 0.0171F, 0.0171F, 0.044283F,
    0.044283F, 0.04123F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.007795F,
    0.00548F, 0.0171F, 0.044283F, 0.04123F, 0.064265F, 0.01438F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.01438F, 0.007795F, 0.00548F, 0.0171F, 0.044283F, 0.04123F, 0.064265F,
    0.007795F, 0.007795F, 0.007795F, 0.00548F, 0.007795F, 0.00548F, 0.00548F,
    0.0171F, 0.00548F, 0.0171F, 0.0171F, 0.044283F, 0.0F, 0.0F, 0.007795F
} ;                                    /* Referenced by: '<S415>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KaTMMR_r_NC2ndOffgSgnShftType[89] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, -1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S397>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KaTMMR_r_NCOffgSgnShftType[89] =
{
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F,
    1.0F, -1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, -1.0F, -1.0F,
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, 1.0F, 1.0F, 1.0F,
    -1.0F, -1.0F, 1.0F, 1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, 1.0F, -1.0F,
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F,
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, 1.0F, -1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, -1.0F, -1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, 1.0F
} ;                                    /* Referenced by: '<S433>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KaTMMR_r_NCOncSgnShftType[89] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, -1.0F, -1.0F, -1.0F,
    1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, -1.0F, -1.0F, -1.0F, -1.0F,
    -1.0F, -1.0F, -1.0F, 1.0F, 1.0F, 1.0F, -1.0F, -1.0F, -1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F,
    -1.0F, 1.0F, 1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F,
    -1.0F, -1.0F, -1.0F, -1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S452>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_COnc_C2C_ClmpTorq = 50.0F;/* Referenced by: '<S245>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_COnc_MaxTorq = 2000.0F;/* Referenced by: '<S246>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_COnc_MinTorqCapacity =
    10.0F;                             /* Referenced by: '<S247>/Calib' */

#endif

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_Clch1TorqEstInit = 0.0F;/* Referenced by: '<S576>/Calib' */
static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_Clch2TorqEstInit = 0.0F;/* Referenced by: '<S577>/Calib' */
static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_Clch3TorqEstInit = 0.0F;/* Referenced by: '<S578>/Calib' */

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_ClchATrqHighActv = 100.0F;/* Referenced by: '<S209>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_ClchATrqLowActv = 9.0F;/* Referenced by: '<S210>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_ClchTorqOffRawThrsh =
    0.0F;                              /* Referenced by: '<S173>/Calib' */

#endif

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_ClchTorqOffgInit = 0.0F;/* Referenced by: '<S579>/Calib' */

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_ClchTorqOffgSB4TMinPrtct =
    9.999999E+6F;                      /* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_ClchTorqOffgSB4TPrtct =
    9.1F;                              /* Referenced by: '<S120>/Calib' */

#endif

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_ClchTorqOncInit = 0.0F;/* Referenced by: '<S580>/Calib' */
static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_ClchTorqOncInitRaw = 0.0F;/* Referenced by: '<S581>/Calib' */

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_ClchTorqZeroThrsh =
    1.0E-6F;                           /* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_ClchTrqOffgSpdPhsThrsh =
    5.0F;                              /* Referenced by: '<S255>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_Coffg_ClmpTorq = 9.0F;/* Referenced by: '<S11>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_DwnGradTorqOnc = -2.5F;/* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_InertCompActThrs = -5.0F;/* Referenced by:
                                                                      * '<S289>/Calib'
                                                                      * '<S292>/Calib'
                                                                      * '<S337>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_Lch2CrpClchTgtInAct =
    -100.0F;                           /* Referenced by:
                                        * '<S515>/Calib'
                                        * '<S516>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_MaxILETorqEstCreep =
    500.0F;                            /* Referenced by: '<S508>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_MinILETorqEstCreep =
    -500.0F;                           /* Referenced by: '<S509>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_MinOncClchTrq = 9.0F;/* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_Offg_MaxTorq = 2000.0F;/* Referenced by: '<S323>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_OneWayClchLockedTrq =
    21.0F;                             /* Referenced by: '<S211>/Calib' */

#endif

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_SSOffgLeadTCROvrdMax =
    2000.0F;                           /* Referenced by:
                                        * '<S582>/Calib'
                                        * '<S293>/Calib'
                                        */
static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_SSOffgTCROvrdMax =
    2000.0F;                           /* Referenced by:
                                        * '<S583>/Calib'
                                        * '<S294>/Calib'
                                        */
static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_SSOffgTCROvrdMin =
    -2000.0F;                          /* Referenced by:
                                        * '<S584>/Calib'
                                        * '<S295>/Calib'
                                        */
static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_SSOncTCROvrdMax = 2000.0F;/* Referenced by:
                                                                      * '<S585>/Calib'
                                                                      * '<S296>/Calib'
                                                                      */
static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_SSOncTCROvrdMin =
    -2000.0F;                          /* Referenced by:
                                        * '<S586>/Calib'
                                        * '<S25>/Calib'
                                        */

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_TcOncMin4TBS = 0.5F;/* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_ThrshTrqTrnfrCmpltd =
    1.0F;                              /* Referenced by: '<S176>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_ThrshldTrqOnc = 0.15F;/* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_M_offg_MinTcRThresh = 20.0F;/* Referenced by: '<S324>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(boolean, TMMR_VAR_INIT)
    KeTMMR_b_C2C_SetCoff2ZeroOnClmpAply = 0;/* Referenced by: '<S277>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(boolean, TMMR_VAR_INIT) KeTMMR_b_C2TrqRstEnbl = 1;/* Referenced by: '<S563>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(boolean, TMMR_VAR_INIT) KeTMMR_b_CLOvrd = 1;/* Referenced by: '<S316>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(boolean, TMMR_VAR_INIT) KeTMMR_b_CLOvrdVal = 1;/* Referenced by: '<S317>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(boolean, TMMR_VAR_INIT) KeTMMR_b_DisblTCMTrqDecApplyClamp =
    0;                                 /* Referenced by: '<S270>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(boolean, TMMR_VAR_INIT) KeTMMR_b_DsblClchTrqOffgSpdPhsExit
    = 0;                               /* Referenced by: '<S256>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(boolean, TMMR_VAR_INIT) KeTMMR_b_Enable2ndClchChk = 1;/* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(boolean, TMMR_VAR_INIT) KeTMMR_b_K0ClchTrqClipEnable = 1;/* Referenced by: '<S542>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(boolean, TMMR_VAR_INIT) KeTMMR_b_UseClch1SlipSpeed = 1;/* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(boolean, TMMR_VAR_INIT) KeTMMR_b_UseOutTorq4ILEEst = 1;/* Referenced by: '<S498>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_dM_COnc_C2C_ClmpTqRmpRt =
    2000.0F;                           /* Referenced by: '<S248>/Calib' */

#endif

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_dM_Clch1OfldRtInit =
    1000.0F;                           /* Referenced by: '<S587>/Calib' */
static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_dM_Clch2OfldRtInit =
    1000.0F;                           /* Referenced by: '<S588>/Calib' */

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_dM_G2M1TCRRmpRate = 1000.0F;/* Referenced by: '<S514>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_dM_OffgTcR_RmpRt = 50.0F;/* Referenced by:
                                                                      * '<S378>/Calib'
                                                                      * '<S325>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_dM_Onc_TugClchRmpRt =
    1000.0F;                           /* Referenced by: '<S326>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_dM_offg_TcOffFastRmpRt =
    6000.0F;                           /* Referenced by: '<S327>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(TeHSER_e_ClutchID, TMMR_VAR_INIT)
    KeTMMR_e_ClchOncAssgnShftTypeInit = CeHSER_e_Cl1;/* Referenced by: '<S468>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(TeTMMR_e_ClchTypeDef, TMMR_VAR_INIT)
    KeTMMR_e_ClchTypeDefOffgInit = CeTMMR_e_ClchOneWay;/* Referenced by: '<S470>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(TeTMMR_e_ClchTypeDef, TMMR_VAR_INIT)
    KeTMMR_e_ClchTypeDefOncInit = CeTMMR_e_ClchFrict;/* Referenced by: '<S469>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(TeHCCR_e_ClutchStatus, TMMR_VAR_INIT)
    KeTMMR_e_OffgAddlClchStat = CeHCCR_e_ClSynched;/* Referenced by: '<S338>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(TeTRNR_e_TCMGearStat, TMMR_VAR_INIT)
    KeTMMR_e_OneWayClchOffgActGear = CeTRNR_e_D1;/* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(TeTRNR_e_TCMGearStat, TMMR_VAR_INIT)
    KeTMMR_e_OneWayClchOffgTgtGear = CeTRNR_e_D1;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(TeTMMR_e_NCSgnExpctd, TMMR_VAR_INIT)
    KeTMMR_e_SSNCOffgSgnInit = CeTMMR_e_NegativeNCSign;/* Referenced by: '<S471>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(TeTMMR_e_NCSgnExpctd, TMMR_VAR_INIT)
    KeTMMR_e_SSNCOncSgnInit = CeTMMR_e_PositiveNCSign;/* Referenced by: '<S472>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(TeHCCR_e_ClutchStatus, TMMR_VAR_INIT)
    KeTMMR_e_TorqCANStK0LockedThresh = CeHCCR_e_ClSynched;/* Referenced by: '<S533>/Calib' */

#endif

static volatile CONST(sint16, TMMR_VAR_INIT) KeTMMR_i_SSClchIdxOffgInit = 5;/* Referenced by:
                                                                      * '<S589>/Calib'
                                                                      * '<S473>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(sint16, TMMR_VAR_INIT) KeTMMR_i_SSClchIdxOncInit = 0;/* Referenced by: '<S474>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_k_FiltCoeff_K0Clip = 0.1F;/* Referenced by: '<S534>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_k_ILETorqFilt_M1G2 = 0.5F;/* Referenced by: '<S529>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_k_ILETorqFilt_NeutM2 =
    0.001F;                            /* Referenced by: '<S530>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_k_ILETorqFilt_NoFilt = 1.0F;/* Referenced by: '<S531>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_k_ILETransLossFilt = 1.0F;/* Referenced by: '<S499>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_k_NiDotFiltCoeff = 0.3F;/* Referenced by: '<S37>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_n_NCOncSgnLSP = -100.0F;/* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_n_NCOncSgnRSP = 100.0F;/* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_n_NbLim4TC2Clip = 1.0F;/* Referenced by: '<S551>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_n_NiLim4TC2Clip = 1.0F;/* Referenced by: '<S552>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_n_OneWayClchDfltLSP = 75.0F;/* Referenced by: '<S228>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_n_OneWayClchDfltRSP =
    100.0F;                            /* Referenced by: '<S229>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_n_OneWayClchOffgLSP = 75.0F;/* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_n_OneWayClchOffgRSP =
    100.0F;                            /* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_n_OneWayClchOncLSP = 20.0F;/* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_n_OneWayClchOncRSP = 30.0F;/* Referenced by: '<S226>/Calib' */

#endif

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_r_CoeffDampTransInInit =
    0.0001F;                           /* Referenced by:
                                        * '<S590>/Calib'
                                        * '<S475>/Calib'
                                        */
static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_r_CoeffDampTransOutInit =
    0.0001F;                           /* Referenced by:
                                        * '<S591>/Calib'
                                        * '<S476>/Calib'
                                        */
static volatile CONST(float32, TMMR_VAR_INIT)
    KeTMMR_r_CoeffGrRatClchOffgPostInit = 1.38181806F;/* Referenced by:
                                                       * '<S592>/Calib'
                                                       * '<S477>/Calib'
                                                       */
static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_r_CoeffGrRatClchOffgPreInit
    = 1.0F;                            /* Referenced by:
                                        * '<S593>/Calib'
                                        * '<S478>/Calib'
                                        */
static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_r_CoeffGrRatClchOncPostInit
    = 4.45925903F;                     /* Referenced by:
                                        * '<S594>/Calib'
                                        * '<S479>/Calib'
                                        */
static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_r_CoeffGrRatClchOncPreInit =
    1.0F;                              /* Referenced by:
                                        * '<S595>/Calib'
                                        * '<S480>/Calib'
                                        */
static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_r_CoeffInrtTransInInit =
    0.001F;                            /* Referenced by:
                                        * '<S596>/Calib'
                                        * '<S481>/Calib'
                                        */
static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_r_CoeffInrtTransOutInit =
    0.001F;                            /* Referenced by:
                                        * '<S597>/Calib'
                                        * '<S482>/Calib'
                                        */
static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_r_GR1ratioInit = 1.0F;/* Referenced by: '<S598>/Calib' */
static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_r_GR2ratioInit = 1.0F;/* Referenced by: '<S599>/Calib' */
static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_r_GR3ratioInit = 1.0F;/* Referenced by: '<S600>/Calib' */

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_r_SSNCOffgSgnInit = 1.0F;/* Referenced by: '<S483>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_r_SSNCOncSgnInit = -1.0F;/* Referenced by: '<S484>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_r_ShiftTypeAbortGrRatThrsh =
    0.1F;                              /* Referenced by: '<S82>/Calib' */

#endif

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_r_TSXRGrTLFInit = 0.0F;/* Referenced by: '<S601>/Calib' */

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_r_ThrshldSpdPhs2ndOffLSP =
    0.05F;                             /* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_r_ThrshldSpdPhs2ndOffRSP =
    0.1F;                              /* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_r_ThrshldSpdPhsMddl = 0.5F;/* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_t_2ndClchTrqOffgBlnd =
    0.075F;                            /* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_t_COnc_C2C_LockedDelay =
    0.5F;                              /* Referenced by: '<S249>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_t_ClchTorqOffgBlnd = 0.075F;/* Referenced by: '<S102>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_t_ClchTorqOffgSB4TBlnd =
    0.2F;                              /* Referenced by: '<S121>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_t_ClchTorqOncBlnd = 0.075F;/* Referenced by: '<S177>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_t_ClchTrqOffgBlnd = 0.075F;/* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_t_ClmpLatchOnTm = 0.1F;/* Referenced by: '<S271>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_t_GRRamping4VTVR = 0.075F;/* Referenced by: '<S303>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_t_ILENeutM1TimeToZero =
    1.0F;                              /* Referenced by: '<S517>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_t_LeadProfTm = 0.075F;/* Referenced by: '<S308>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_t_MaxTmAftrTcR0 = 0.1F;/* Referenced by: '<S339>/Calib' */

#endif

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_t_MtrBOfldHldTmInit = 0.1F;/* Referenced by: '<S602>/Calib' */
static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_t_MtrBOfldMaxTmInit = 4.0F;/* Referenced by: '<S603>/Calib' */

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_t_OneWayClchSlipSpdDly =
    0.2F;                              /* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KeTMMR_t_TiDebounceSet = 0.25F;/* Referenced by: '<S543>/Calib' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT)
    KtTMMR_M_ClchTorqOncNCSlipLimtPrtct[4] =
{
    9.1F, 9.1F, 9.1F, 0.0F
} ;                                    /* Referenced by: '<S148>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KtTMMR_M_GrgShftInPrgrssTOncMax[4]
    =
{
    9.0F, 9.0F, 9.0F, 0.0F
} ;                                    /* Referenced by: '<S71>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KtTMMR_M_HASTrqK0ClipThresh[7] =
{
    45.0F, 41.629F, 38.384F, 35.076F, 31.769F, 21.846F, 2.0F
} ;                                    /* Referenced by: '<S553>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KtTMMR_M_offg_OfgTcEstThresh[4] =
{
    0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S328>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KtTMMR_k_C2TrqRstFilt[25] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.285714298F, 0.3375F, 0.441071421F, 0.7F, 0.5F, 0.591836751F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S557>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KtTMMR_k_DogClchTorqFiltCnst[7] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S190>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KtTMMR_k_K0_FiltCoeff[7] =
{
    1.0F, 1.0F, 1.0F, 0.75F, 0.5F, 0.25F, 0.1F
} ;                                    /* Referenced by: '<S535>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KtTMMR_k_OneWayClchTorqFiltCnst[7]
    =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.0105F, 0.0105F
} ;                                    /* Referenced by: '<S218>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KtTMMR_k_TransIntrFactor[8] =
{
    0.0F, 0.5F, 0.6F, 0.8F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S108>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KtTMMR_t_offg_OfgPresLag[4] =
{
    0.05F, 0.05F, 0.05F, 0.05F
} ;                                    /* Referenced by: '<S329>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KtTMMR_t_offg_OfgPresLag_TempDep[4]
    =
{
    0.0F, 25.0F, 50.0F, 100.0F
} ;                                    /* Referenced by: '<S330>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT)
    KxTMMR_M_ClchTorqOncNCSlipLimtPrtct[4] =
{
    0.0F, 25.0F, 150.0F, 200.0F
} ;                                    /* Referenced by: '<S148>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KxTMMR_M_GrgShftInPrgrssTOncMax[4]
    =
{
    0.0F, 25.0F, 50.0F, 100.0F
} ;                                    /* Referenced by: '<S71>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KxTMMR_M_HASTrqK0ClipThresh[7] =
{
    -40.0F, -30.0F, -20.0F, -10.0F, 0.0F, 30.0F, 90.0F
} ;                                    /* Referenced by: '<S553>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KxTMMR_M_offg_OfgTcEstThresh[4] =
{
    0.0F, 25.0F, 50.0F, 100.0F
} ;                                    /* Referenced by: '<S328>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KxTMMR_k_C2TrqRstFilt[5] =
{
    0.0F, 50.0F, 100.0F, 200.0F, 450.0F
} ;                                    /* Referenced by: '<S557>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KxTMMR_k_DogClchTorqFiltCnst[7] =
{
    0.0F, 500.0F, 1000.0F, 1800.0F, 1979.0F, 1980.0F, 2000.0F
} ;                                    /* Referenced by: '<S190>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KxTMMR_k_K0_FiltCoeff[7] =
{
    -300.0F, 0.0F, 40.0F, 50.0F, 100.0F, 150.0F, 300.0F
} ;                                    /* Referenced by: '<S535>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KxTMMR_k_OneWayClchTorqFiltCnst[7]
    =
{
    0.0F, 500.0F, 1000.0F, 1800.0F, 1979.0F, 1980.0F, 2000.0F
} ;                                    /* Referenced by: '<S218>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KxTMMR_k_TransIntrFactor[8] =
{
    0.0F, 0.1F, 0.2F, 0.4F, 0.5F, 0.6F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S108>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KxTMMR_t_offg_OfgPresLag[4] =
{
    0.0F, 25.0F, 50.0F, 100.0F
} ;                                    /* Referenced by: '<S329>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static volatile CONST(float32, TMMR_VAR_INIT) KxTMMR_t_offg_OfgPresLag_TempDep[4]
    =
{
    0.0F, 25.0F, 50.0F, 100.0F
} ;                                    /* Referenced by: '<S330>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static volatile CONST(float32, TMMR_VAR_INIT) KyTMMR_k_C2TrqRstFilt[5] =
{
    0.0F, 0.05F, 0.15F, 0.3F, 0.5F
} ;                                    /* Referenced by: '<S557>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_TMMR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TMMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VaTMMR_M_ClchTorq[6];/* '<S19>/Array Assignment' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(boolean, TMMR_VAR_INIT) VaTMMR_b_OneWayClchEdgeRise[6];/* '<S19>/Array Assignment3' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(boolean, TMMR_VAR_INIT) VaTMMR_b_OneWayHyst[6];/* '<S19>/Array Assignment1' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VaTMMR_t_OneWayClchTCnt[6];/* '<S19>/Array Assignment2' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static VAR(float32, TMMR_VAR_INIT) VeTMMC_M_Clch2TorqClipLim;/* '<S537>/Switch6' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMC_M_ClchTorqOncRaw;/* '<S49>/Merge4' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMC_n_OneWayCltchSl;/* '<S16>/Switch2' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static VAR(boolean, TMMR_VAR_INIT) VeTMMC_t_TiDebounce;/* '<S546>/AND' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_COnc_TorqCmnd_DS;/* '<Root>/ConcTroqCmnd' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ClchDogDeltaTorq;/* '<S14>/Sum1' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ClchTorq2ndOffgRaw;/* '<S131>/Merge' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ClchTorqOffgCalc_TB4S;/* '<S57>/Product3' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ClchTorqOffgMultiShift;/* '<S99>/Merge' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ClchTorqOffgRaw;/* '<S48>/Merge' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ClchTorqOffgSB4TMinPrtct;/* '<S98>/Abs' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ClchTorqOffgSB4TPrePrtct;/* '<S89>/MinMax2' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ClchTorqOffgTgtFinal_SB4T;/* '<S89>/Switch' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ClchTorqOffgTgtRaw;/* '<S96>/Product2' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ClchTorqOffgTgtSpdPhs_SB4T;/* '<S95>/Abs3' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ClchTorqOffgTgtTrqPhs_SB4T;/* '<S103>/Summation' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ClchTorqOncLimAtTorqPhs_TB4S;/* '<S181>/Summation' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ClchTorqOncLim_TB4S;/* '<S57>/MinMax' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ClchTorqOncNCSlipLimt;/* '<S71>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ClchTorqOncNCSlipLimtPrtct;/* '<S148>/Vector' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ClchTorqOncTgtFilt_TB4S;/* '<S170>/Switch' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ClchTorqOncTgtGSIP;/* '<S50>/Product' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ClchTorqOncTgtRaw;/* '<S57>/Product' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ClchTorqOncTgt_SB4T;/* '<S90>/MinMax1' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_HASTrqK0_dt;/* '<S490>/Sum1' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ILECreepTorqFilt;/* '<S492>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ILELaunch2CrpAftRamp;/* '<S511>/Switch' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ILETorqPreFilt;/* '<S489>/Switch3' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ILETransClchRmpRt;/* '<S496>/Merge1' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ILETransClchTgt;/* '<S496>/Merge' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ILETrqArb;/* '<S489>/MinMax1' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_ILE_Torq_PostFilt;/* '<S491>/Switch1' */

#endif

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_OffgTCROvrdMax_DS;/* '<Root>/TCROvrdMax' */
static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_OffgTCROvrdMin_DS;/* '<Root>/TCROvrdMin' */

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_OneWayClchDeltaTorq;/* '<S16>/Sum1' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_M_Tti_w_Inertia;/* '<S96>/Sum5' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(boolean, TMMR_VAR_INIT) VeTMMR_b_ClampApplied_DS;/* '<Root>/ClampApplied' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(boolean, TMMR_VAR_INIT) VeTMMR_b_EndOfRatioChg_SB4T;/* '<S97>/Logical2' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(boolean, TMMR_VAR_INIT) VeTMMR_b_EndOfSpdPhs_DS;/* '<Root>/EndOfSpdPhs' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(boolean, TMMR_VAR_INIT) VeTMMR_b_EndOfTorqPhsPrdt_TB4S;/* '<S57>/Comparison1' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(boolean, TMMR_VAR_INIT) VeTMMR_b_EndOfTorqPhs_DS;/* '<Root>/EndofTorqPhs' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(boolean, TMMR_VAR_INIT) VeTMMR_b_GarageShiftActv;/* '<S13>/Comparison1' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(boolean, TMMR_VAR_INIT) VeTMMR_b_InertiaTorqActive_DS;/* '<Root>/InertiaTorqActive' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(boolean, TMMR_VAR_INIT) VeTMMR_b_NeutDsrdActv;/* '<S13>/Logical1' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(boolean, TMMR_VAR_INIT) VeTMMR_b_ScndOffgMergStarts;/* '<S127>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(boolean, TMMR_VAR_INIT) VeTMMR_b_ShiftInPrgsActv;/* '<S54>/Comparison1' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(boolean, TMMR_VAR_INIT) VeTMMR_b_ShiftTypeAbort;/* '<S54>/Logical' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(boolean, TMMR_VAR_INIT) VeTMMR_b_SpdB4TrqPhsActv;/* '<S13>/Logical4' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static VAR(boolean, TMMR_VAR_INIT) VeTMMR_b_TC2ClipActive;/* '<S545>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(boolean, TMMR_VAR_INIT) VeTMMR_b_TrqB4SpdLatched;/* '<S51>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(boolean, TMMR_VAR_INIT) VeTMMR_b_TrqB4SpdPhsActv;/* '<S13>/Logical' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(boolean, TMMR_VAR_INIT) VeTMMR_b_TrqB4SpdRaw;/* '<S51>/Comparison' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_dn_NturbDot;/* '<S26>/Multiplication2' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(TeHSER_e_ClutchID, TMMR_VAR_INIT) VeTMMR_e_ClchOncAssgn;/* '<S3>/Merge16' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(TeTMMR_e_ClchTypeDef, TMMR_VAR_INIT) VeTMMR_e_ClchTypeOffg;/* '<S3>/Merge9' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(TeTMMR_e_ClchTypeDef, TMMR_VAR_INIT) VeTMMR_e_ClchTypeOnc;/* '<S3>/Merge10' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(TeHSER_e_ClutchStatCntrl, TMMR_VAR_INIT) VeTMMR_e_OffgStatControl_DS;/* '<Root>/OffgStatControl' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(TeHSER_e_ClutchStatCntrl, TMMR_VAR_INIT) VeTMMR_e_OncStatControl_DS;/* '<Root>/OncStatControl' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(TeTMMR_e_TransShiftStat, TMMR_VAR_INIT)
    VeTMMR_e_PrevTransShiftStat_DS;    /* '<Root>/Trans_shift_state_Pre' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(TeTRNR_e_TCMShftType, TMMR_VAR_INIT) VeTMMR_e_ShftTypeArb;/* '<S18>/TMMC_Stateflow' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(TeTRNR_e_TCMShftType, TMMR_VAR_INIT) VeTMMR_e_ShftTypeOld;/* '<S18>/Unit Delay' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(TeHSER_e_ShftInPrgs, TMMR_VAR_INIT) VeTMMR_e_ShiftTypeIdx;/* '<S83>/Merge' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(TeTMMR_e_TransShiftStat, TMMR_VAR_INIT) VeTMMR_e_TransShiftStat_DS;/* '<Root>/Trans_shift_state' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(sint16, TMMR_VAR_INIT) VeTMMR_i_ClchIdxOnc;/* '<S3>/Merge15' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static VAR(float32, TMMR_VAR_INIT) VeTMMR_k_K0_FiltCoeff;/* '<S490>/Switch' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static VAR(float32, TMMR_VAR_INIT) VeTMMR_n_C2SlSpdRst;/* '<S538>/MinMax1' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_n_NCOffgSgn;/* '<S3>/Merge13' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_n_NCOncSgn;/* '<S3>/Merge12' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_n_NCOncSgnCalc;/* '<S47>/Switch' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_n_NCOncSlipSpd;/* '<S47>/Sum1' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_r_ShftPctRatio_SB4T;/* '<S151>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_r_ShftPctRatio_SB4T2ndOff;/* '<S142>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_t_Prof_LeadTorqXfrTm_DS;/* '<Root>/Lead_Torque_Transfer_Timer' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_t_Prof_MaxTorqXfrTm_DS;
                                     /* '<Root>/Maximum_Torque_Transfer_Time' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static VAR(float32, TMMR_VAR_INIT) VeTMMR_t_Prof_TorqXfrTm_DS;/* '<Root>/Torque_Transfer_Timer' */

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

static VAR(float32, TMMR_VAR_INIT) VeTMMR_t_TmSinceC2Rst;/* '<S555>/Switch1' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TMMR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TMMR
#include "MemMap.h"

CONST(ConstB_TMMR_ac_T, TMMR_VAR_INIT) TMMR_ac_ConstB =
{
    CeTMMR_e_SteadyState,              /* '<S573>/Constant' */
    CeTMMR_e_InactiveShiftInProgress,  /* '<S570>/Constant' */
    CeTMMR_e_UnknownNCSign,            /* '<S568>/Constant' */
    CeTMMR_e_UnknownNCSign,            /* '<S569>/Constant' */
    CeTMMR_e_UnknownNCSign,            /* '<S571>/Constant' */
    CeTMMR_e_UnknownNCSign,            /* '<S572>/Constant' */
    CeHSER_e_PropModeSNA,              /* '<S566>/Constant' */
    CeHSER_e_ClchStatCntrl_Else,       /* '<S574>/Constant' */
    CeHSER_e_ClchStatCntrl_Else        /* '<S575>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_TMMR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TMMR
#include "MemMap.h"

CONST(ConstP_TMMR_ac_T, TMMR_VAR_INIT) TMMR_ac_ConstP =
{

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S557>/Vector'
     */
    {
        4U, 4U
    },

#endif

#ifndef CONSTP_TMMR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_TMMR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TMMR
#include "MemMap.h"

VAR(B_TMMR_ac_T, TMMR_VAR_INIT) TMMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TMMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TMMR
#include "MemMap.h"

VAR(DW_TMMR_ac_T, TMMR_VAR_INIT) TMMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TMMR
#include "MemMap.h"
#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static FUNC(void, TMMR_CODE_LOCAL) TMMR_ac_TMMC_StoreClchTorq(VAR(sint16,
    AUTOMATIC) rtu_VeTMMR_Cnt_ClchNumIdx, P2CONST(float32, AUTOMATIC,
    TMMR_VAR_INIT) rtu_VeTMMR_M_ClchTorq, VAR(boolean, AUTOMATIC)
    rtu_VeTMMR_b_OneWayClchHyst, VAR(float32, AUTOMATIC)
    rtu_VeTMMR_t_OneWayClchTCnt, VAR(boolean, AUTOMATIC)
    rtu_VeTMMR_b_OneWayClchEdgeRise);

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static FUNC(void, TMMR_CODE_LOCAL) TMMR_ac_ClchTrqOffg_Zero(P2VAR(float32,
    AUTOMATIC, TMMR_VAR_INIT) rty_ClchTorqOffg);

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static FUNC(void, TMMR_CODE_LOCAL) TMMR_ac_TMMC_NCSgnNeg(P2VAR
    (TeTMMR_e_NCSgnExpctd, AUTOMATIC, TMMR_VAR_INIT) rty_NCSgnNeg);

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static FUNC(void, TMMR_CODE_LOCAL) TMMR_ac_TMMC_NCSgnPos(P2VAR
    (TeTMMR_e_NCSgnExpctd, AUTOMATIC, TMMR_VAR_INIT) rty_NCSgnPos);

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static FUNC(void, TMMR_CODE_LOCAL) TMMR_ac_TMMC_NCSgnUnknown(P2VAR
    (TeTMMR_e_NCSgnExpctd, AUTOMATIC, TMMR_VAR_INIT) rty_NCsgnUnknwn);

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static FUNC(void, TMMR_CODE_LOCAL) TMMR_ac_TMMC_TrnsCoeffShft(VAR
    (TeTRNR_e_TCMShftType, AUTOMATIC) rtu_ShiftType, P2VAR(float32, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_r_CoeffGrRatClchOffgPre, P2VAR(float32, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_r_CoeffGrRatClchOffgPost, P2VAR(float32, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_r_CoeffGrRatClchOncPre, P2VAR(float32, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_r_CoeffGrRatClchOncPost, P2VAR(float32, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_r_CoeffInrtTransIn, P2VAR(float32, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_r_CoeffInrtTransOut, P2VAR(float32, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_r_CoeffDampTransIn, P2VAR(float32, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_r_CoeffDampTransOut, P2VAR(TeTMMR_e_ClchTypeDef,
    AUTOMATIC, TMMR_VAR_INIT) rty_TMMC_e_ClchTypeOffg, P2VAR
    (TeTMMR_e_ClchTypeDef, AUTOMATIC, TMMR_VAR_INIT) rty_TMMC_e_ClchTypeOnc,
    P2VAR(float32, AUTOMATIC, TMMR_VAR_INIT) rty_TMMC_n_NCOffgSgn, P2VAR(float32,
    AUTOMATIC, TMMR_VAR_INIT) rty_TMMC_n_NCOnSgn, P2VAR(TeTMMR_e_NCSgnExpctd,
    AUTOMATIC, TMMR_VAR_INIT) rty_VeTMMR_e_NCOffgSgn, P2VAR(TeTMMR_e_NCSgnExpctd,
    AUTOMATIC, TMMR_VAR_INIT) rty_VeTMMR_e_NCOncSgn, P2VAR(sint16, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_i_ClchIdxOffg, P2VAR(sint16, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_i_ClchIdxOnc, P2VAR(TeHSER_e_ClutchID, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_e_ClchOncAssgn, P2VAR(B_TMMC_TrnsCoeffShft_TMMR_ac_T,
    AUTOMATIC, TMMR_VAR_INIT) localB);

#endif

/* Output and update for function-call system: '<S3>/TMMC_StoreClchTorq' */
#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static FUNC(void, TMMR_CODE_LOCAL) TMMR_ac_TMMC_StoreClchTorq(VAR(sint16,
    AUTOMATIC) rtu_VeTMMR_Cnt_ClchNumIdx, P2CONST(float32, AUTOMATIC,
    TMMR_VAR_INIT) rtu_VeTMMR_M_ClchTorq, VAR(boolean, AUTOMATIC)
    rtu_VeTMMR_b_OneWayClchHyst, VAR(float32, AUTOMATIC)
    rtu_VeTMMR_t_OneWayClchTCnt, VAR(boolean, AUTOMATIC)
    rtu_VeTMMR_b_OneWayClchEdgeRise)
{
    /* Assignment: '<S19>/Array Assignment' */
    VaTMMR_M_ClchTorq[(rtu_VeTMMR_Cnt_ClchNumIdx)] = *rtu_VeTMMR_M_ClchTorq;

    /* Assignment: '<S19>/Array Assignment1' */
    VaTMMR_b_OneWayHyst[(rtu_VeTMMR_Cnt_ClchNumIdx)] =
        rtu_VeTMMR_b_OneWayClchHyst;

    /* Assignment: '<S19>/Array Assignment2' */
    VaTMMR_t_OneWayClchTCnt[(rtu_VeTMMR_Cnt_ClchNumIdx)] =
        rtu_VeTMMR_t_OneWayClchTCnt;

    /* Assignment: '<S19>/Array Assignment3' */
    VaTMMR_b_OneWayClchEdgeRise[(rtu_VeTMMR_Cnt_ClchNumIdx)] =
        rtu_VeTMMR_b_OneWayClchEdgeRise;
}

#endif

/*
 * Output and update for action system:
 *    '<S131>/ClchTrqOffg_Zero'
 *    '<S48>/M_ClchTrqOffg_Zero'
 */
#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static FUNC(void, TMMR_CODE_LOCAL) TMMR_ac_ClchTrqOffg_Zero(P2VAR(float32,
    AUTOMATIC, TMMR_VAR_INIT) rty_ClchTorqOffg)
{
    /* SignalConversion generated from: '<S145>/ClchTorqOffg' incorporates:
     *  Constant: '<S145>/Constant Value'
     */
    *rty_ClchTorqOffg = 0.0F;
}

#endif

/*
 * Output and update for action system:
 *    '<S426>/TMMC_NCSgnNeg'
 *    '<S427>/TMMC_NCSgnNeg'
 *    '<S391>/TMMC_NCSgnNeg'
 */
#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static FUNC(void, TMMR_CODE_LOCAL) TMMR_ac_TMMC_NCSgnNeg(P2VAR
    (TeTMMR_e_NCSgnExpctd, AUTOMATIC, TMMR_VAR_INIT) rty_NCSgnNeg)
{
    /* SignalConversion generated from: '<S456>/NCSgnNeg' incorporates:
     *  Constant: '<S459>/Constant'
     */
    *rty_NCSgnNeg = CeTMMR_e_NegativeNCSign;
}

#endif

/*
 * Output and update for action system:
 *    '<S426>/TMMC_NCSgnPos'
 *    '<S427>/TMMC_NCSgnPos'
 *    '<S391>/TMMC_NCSgnPos'
 */
#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static FUNC(void, TMMR_CODE_LOCAL) TMMR_ac_TMMC_NCSgnPos(P2VAR
    (TeTMMR_e_NCSgnExpctd, AUTOMATIC, TMMR_VAR_INIT) rty_NCSgnPos)
{
    /* SignalConversion generated from: '<S457>/NCSgnPos' incorporates:
     *  Constant: '<S460>/Constant'
     */
    *rty_NCSgnPos = CeTMMR_e_PositiveNCSign;
}

#endif

/*
 * Output and update for action system:
 *    '<S426>/TMMC_NCSgnUnknown'
 *    '<S427>/TMMC_NCSgnUnknown'
 *    '<S391>/TMMC_NCSgnUnknown'
 */
#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static FUNC(void, TMMR_CODE_LOCAL) TMMR_ac_TMMC_NCSgnUnknown(P2VAR
    (TeTMMR_e_NCSgnExpctd, AUTOMATIC, TMMR_VAR_INIT) rty_NCsgnUnknwn)
{
    /* SignalConversion generated from: '<S458>/NCsgnUnknwn' incorporates:
     *  Constant: '<S461>/Constant'
     */
    *rty_NCsgnUnknwn = CeTMMR_e_UnknownNCSign;
}

#endif

/* Output and update for function-call system: '<S3>/TMMC_TrnsCoeffShft' */
#if Rte_SysCon_Variant_TMMR_FUNC_Enable

static FUNC(void, TMMR_CODE_LOCAL) TMMR_ac_TMMC_TrnsCoeffShft(VAR
    (TeTRNR_e_TCMShftType, AUTOMATIC) rtu_ShiftType, P2VAR(float32, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_r_CoeffGrRatClchOffgPre, P2VAR(float32, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_r_CoeffGrRatClchOffgPost, P2VAR(float32, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_r_CoeffGrRatClchOncPre, P2VAR(float32, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_r_CoeffGrRatClchOncPost, P2VAR(float32, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_r_CoeffInrtTransIn, P2VAR(float32, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_r_CoeffInrtTransOut, P2VAR(float32, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_r_CoeffDampTransIn, P2VAR(float32, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_r_CoeffDampTransOut, P2VAR(TeTMMR_e_ClchTypeDef,
    AUTOMATIC, TMMR_VAR_INIT) rty_TMMC_e_ClchTypeOffg, P2VAR
    (TeTMMR_e_ClchTypeDef, AUTOMATIC, TMMR_VAR_INIT) rty_TMMC_e_ClchTypeOnc,
    P2VAR(float32, AUTOMATIC, TMMR_VAR_INIT) rty_TMMC_n_NCOffgSgn, P2VAR(float32,
    AUTOMATIC, TMMR_VAR_INIT) rty_TMMC_n_NCOnSgn, P2VAR(TeTMMR_e_NCSgnExpctd,
    AUTOMATIC, TMMR_VAR_INIT) rty_VeTMMR_e_NCOffgSgn, P2VAR(TeTMMR_e_NCSgnExpctd,
    AUTOMATIC, TMMR_VAR_INIT) rty_VeTMMR_e_NCOncSgn, P2VAR(sint16, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_i_ClchIdxOffg, P2VAR(sint16, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_i_ClchIdxOnc, P2VAR(TeHSER_e_ClutchID, AUTOMATIC,
    TMMR_VAR_INIT) rty_TMMC_e_ClchOncAssgn, P2VAR(B_TMMC_TrnsCoeffShft_TMMR_ac_T,
    AUTOMATIC, TMMR_VAR_INIT) localB)
{
    sint32 tmp_0;
    sint16 tmp;

    /* Outputs for Enabled SubSystem: '<S21>/TMMC_ClchOnc' incorporates:
     *  EnablePort: '<S425>/Enable'
     */
    /* Selector: '<S21>/Selector14' incorporates:
     *  Constant: '<S411>/Calib'
     *  Constant: '<S449>/Calib'
     *  DataTypeConversion: '<S21>/Data Type Conversion'
     *  Selector: '<S425>/Selector15'
     */
    tmp = KaTMMR_i_ClchIdxOncShftType[(sint16)rtu_ShiftType];

    /* RelationalOperator: '<S21>/Comparison5' incorporates:
     *  Constant: '<S21>/Constant Value'
     *  Constant: '<S411>/Calib'
     *  Selector: '<S21>/Selector14'
     */
    if (tmp != -1)
    {
        /* DataTypeConversion: '<S446>/DataTypeConversion' incorporates:
         *  Constant: '<S448>/Calib'
         *  Selector: '<S425>/Selector11'
         */
        localB->DataTypeConversion = KaTMMR_e_ClchTypeDef[(tmp)];

        /* Selector: '<S425>/Selector1' incorporates:
         *  Constant: '<S447>/Calib'
         *  DataTypeConversion: '<S21>/Data Type Conversion'
         */
        localB->Selector1 = KaTMMR_e_ClchOncAssgnShftType[(sint16)rtu_ShiftType];

        /* Selector: '<S425>/Selector6' incorporates:
         *  Constant: '<S452>/Calib'
         *  DataTypeConversion: '<S21>/Data Type Conversion'
         */
        localB->Selector6 = KaTMMR_r_NCOncSgnShftType[(sint16)rtu_ShiftType];

        /* Gain: '<S453>/Gain' incorporates:
         *  Constant: '<S451>/Calib'
         *  DataTypeConversion: '<S21>/Data Type Conversion'
         *  Selector: '<S425>/Selector3'
         */
        localB->Gain =
            (Rte_Prm_KaTMMR_r_CoeffGrRatClchOncPreShftType_KaTMMR_r_CoeffGrRatClchOncPreShftType
             ())[(sint16)rtu_ShiftType];

        /* Gain: '<S454>/Gain' incorporates:
         *  Constant: '<S450>/Calib'
         *  DataTypeConversion: '<S21>/Data Type Conversion'
         *  Selector: '<S425>/Selector4'
         */
        localB->Gain_l =
            (Rte_Prm_KaTMMR_r_CoeffGrRatClchOncPostShftType_KaTMMR_r_CoeffGrRatClchOncPostShftType
             ())[(sint16)rtu_ShiftType];

        /* Gain: '<S455>/Gain' */
        localB->Gain_d = tmp;
    }

    /* End of RelationalOperator: '<S21>/Comparison5' */
    /* End of Outputs for SubSystem: '<S21>/TMMC_ClchOnc' */

    /* SignalConversion generated from: '<S21>/TMMC_e_ClchOncAssgn' incorporates:
     *  Selector: '<S425>/Selector1'
     */
    *rty_TMMC_e_ClchOncAssgn = localB->Selector1;

    /* Outputs for Enabled SubSystem: '<S21>/TMMC_ClchOffg' incorporates:
     *  EnablePort: '<S423>/Enable'
     */
    /* Selector: '<S21>/Selector1' incorporates:
     *  Constant: '<S410>/Calib'
     *  Constant: '<S430>/Calib'
     *  DataTypeConversion: '<S21>/Data Type Conversion'
     *  Selector: '<S423>/Selector3'
     */
    tmp = KaTMMR_i_ClchIdxOffgShftType[(sint16)rtu_ShiftType];

    /* RelationalOperator: '<S21>/Comparison1' incorporates:
     *  Constant: '<S21>/Constant Value1'
     *  Constant: '<S410>/Calib'
     *  Selector: '<S21>/Selector1'
     */
    if (tmp != -1)
    {
        /* DataTypeConversion: '<S428>/DataTypeConversion' incorporates:
         *  Constant: '<S429>/Calib'
         *  Selector: '<S423>/Selector'
         */
        localB->DataTypeConversion_f = KaTMMR_e_ClchTypeDef[(tmp)];

        /* Selector: '<S423>/Selector5' incorporates:
         *  Constant: '<S433>/Calib'
         *  DataTypeConversion: '<S21>/Data Type Conversion'
         */
        localB->Selector5 = KaTMMR_r_NCOffgSgnShftType[(sint16)rtu_ShiftType];

        /* Gain: '<S434>/Gain' */
        localB->Gain_m = tmp;

        /* Gain: '<S435>/Gain' incorporates:
         *  Constant: '<S431>/Calib'
         *  DataTypeConversion: '<S21>/Data Type Conversion'
         *  Selector: '<S423>/Selector2'
         */
        localB->Gain_j =
            (Rte_Prm_KaTMMR_r_CoeffGrRatClchOffgPostShftType_KaTMMR_r_CoeffGrRatClchOffgPostShftType
             ())[(sint16)rtu_ShiftType];

        /* Gain: '<S436>/Gain' incorporates:
         *  Constant: '<S432>/Calib'
         *  DataTypeConversion: '<S21>/Data Type Conversion'
         *  Selector: '<S423>/Selector1'
         */
        localB->Gain_i =
            (Rte_Prm_KaTMMR_r_CoeffGrRatClchOffgPreShftType_KaTMMR_r_CoeffGrRatClchOffgPreShftType
             ())[(sint16)rtu_ShiftType];
    }

    /* End of RelationalOperator: '<S21>/Comparison1' */
    /* End of Outputs for SubSystem: '<S21>/TMMC_ClchOffg' */

    /* SignalConversion generated from: '<S21>/TMMC_e_ClchTypeOffg' incorporates:
     *  DataTypeConversion: '<S428>/DataTypeConversion'
     */
    *rty_TMMC_e_ClchTypeOffg = localB->DataTypeConversion_f;

    /* SignalConversion generated from: '<S21>/TMMC_e_ClchTypeOnc' incorporates:
     *  DataTypeConversion: '<S446>/DataTypeConversion'
     */
    *rty_TMMC_e_ClchTypeOnc = localB->DataTypeConversion;

    /* SignalConversion generated from: '<S21>/TMMC_i_ClchIdxOffg' */
    *rty_TMMC_i_ClchIdxOffg = localB->Gain_m;

    /* SignalConversion generated from: '<S21>/TMMC_i_ClchIdxOnc' */
    *rty_TMMC_i_ClchIdxOnc = localB->Gain_d;

    /* SignalConversion generated from: '<S21>/TMMC_r_CoeffGrRatClchOffgPost' */
    *rty_TMMC_r_CoeffGrRatClchOffgPost = localB->Gain_j;

    /* SignalConversion generated from: '<S21>/TMMC_r_CoeffGrRatClchOffgPre' */
    *rty_TMMC_r_CoeffGrRatClchOffgPre = localB->Gain_i;

    /* SignalConversion generated from: '<S21>/TMMC_r_CoeffGrRatClchOncPost' */
    *rty_TMMC_r_CoeffGrRatClchOncPost = localB->Gain_l;

    /* SignalConversion generated from: '<S21>/TMMC_r_CoeffGrRatClchOncPre' */
    *rty_TMMC_r_CoeffGrRatClchOncPre = localB->Gain;

    /* Selector: '<S21>/Selector10' incorporates:
     *  Constant: '<S413>/Calib'
     *  DataTypeConversion: '<S21>/Data Type Conversion'
     */
    *rty_TMMC_r_CoeffDampTransOut = KaTMMR_r_CoeffDampTransOutShftType[(sint16)
        rtu_ShiftType];

    /* Selector: '<S21>/Selector8' incorporates:
     *  Constant: '<S415>/Calib'
     *  DataTypeConversion: '<S21>/Data Type Conversion'
     */
    *rty_TMMC_r_CoeffInrtTransOut = KaTMMR_r_CoeffInrtTransOutShftType[(sint16)
        rtu_ShiftType];

    /* Gain: '<S416>/Gain' incorporates:
     *  Constant: '<S412>/Calib'
     *  DataTypeConversion: '<S21>/Data Type Conversion'
     *  Selector: '<S21>/Selector9'
     */
    *rty_TMMC_r_CoeffDampTransIn = KaTMMR_r_CoeffDampTransInShftType[(sint16)
        rtu_ShiftType];

    /* Gain: '<S419>/Gain' */
    *rty_TMMC_n_NCOnSgn = localB->Selector6;

    /* Gain: '<S420>/Gain' */
    *rty_TMMC_n_NCOffgSgn = localB->Selector5;

    /* Gain: '<S421>/Gain' incorporates:
     *  Constant: '<S414>/Calib'
     *  DataTypeConversion: '<S21>/Data Type Conversion'
     *  Selector: '<S21>/Selector7'
     */
    *rty_TMMC_r_CoeffInrtTransIn = KaTMMR_r_CoeffInrtTransInShftType[(sint16)
        rtu_ShiftType];

    /* Outputs for Enabled SubSystem: '<S21>/TMMC_ClchOffg2nd' incorporates:
     *  EnablePort: '<S424>/Enable'
     */
    /* RelationalOperator: '<S21>/Comparison2' incorporates:
     *  Constant: '<S21>/Constant Value2'
     *  Constant: '<S409>/Calib'
     *  DataTypeConversion: '<S21>/Data Type Conversion'
     *  Selector: '<S21>/Selector2'
     *  Selector: '<S424>/Selector'
     */
    tmp_0 = (sint32)KaTMMR_i_ClchIdx2ndOffgShftType[(sint16)rtu_ShiftType];
    if (tmp_0 != -1)
    {
        /* DataTypeConversion: '<S437>/DataTypeConversion' incorporates:
         *  Constant: '<S438>/Calib'
         */
        localB->DataTypeConversion_d = KaTMMR_e_ClchTypeDef[(tmp_0)];

        /* Gain: '<S443>/Gain' incorporates:
         *  Constant: '<S440>/Calib'
         *  Selector: '<S424>/Selector2'
         */
        localB->Gain_f = KaTMMR_r_CoeffGrRatClch2ndOffgPostShftType[(sint16)
            rtu_ShiftType];

        /* Gain: '<S444>/Gain' incorporates:
         *  Constant: '<S441>/Calib'
         *  Selector: '<S424>/Selector1'
         */
        localB->Gain_e = KaTMMR_r_CoeffGrRatClch2ndOffgPreShftType[(sint16)
            rtu_ShiftType];

        /* Gain: '<S445>/Gain' incorporates:
         *  Constant: '<S439>/Calib'
         *  Selector: '<S424>/Selector14'
         */
        localB->Gain_fq = KaTMMR_i_ClchIdx2ndOffgShftType[(sint16)rtu_ShiftType];
    }

    /* End of RelationalOperator: '<S21>/Comparison2' */
    /* End of Outputs for SubSystem: '<S21>/TMMC_ClchOffg2nd' */

    /* If: '<S426>/If' incorporates:
     *  Constant: '<S426>/Constant Value'
     *  Constant: '<S426>/Constant Value1'
     *  RelationalOperator: '<S426>/Comparison1'
     *  RelationalOperator: '<S426>/Comparison4'
     */
    if (localB->Selector5 == -1.0F)
    {
        /* Outputs for IfAction SubSystem: '<S426>/TMMC_NCSgnNeg' incorporates:
         *  ActionPort: '<S456>/Action Port'
         */
        TMMR_ac_TMMC_NCSgnNeg(rty_VeTMMR_e_NCOffgSgn);

        /* End of Outputs for SubSystem: '<S426>/TMMC_NCSgnNeg' */
    }
    else if (localB->Selector5 == 1.0F)
    {
        /* Outputs for IfAction SubSystem: '<S426>/TMMC_NCSgnPos' incorporates:
         *  ActionPort: '<S457>/Action Port'
         */
        TMMR_ac_TMMC_NCSgnPos(rty_VeTMMR_e_NCOffgSgn);

        /* End of Outputs for SubSystem: '<S426>/TMMC_NCSgnPos' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S426>/TMMC_NCSgnUnknown' incorporates:
         *  ActionPort: '<S458>/Action Port'
         */
        TMMR_ac_TMMC_NCSgnUnknown(rty_VeTMMR_e_NCOffgSgn);

        /* End of Outputs for SubSystem: '<S426>/TMMC_NCSgnUnknown' */
    }

    /* End of If: '<S426>/If' */

    /* If: '<S427>/If' incorporates:
     *  Constant: '<S427>/Constant Value'
     *  Constant: '<S427>/Constant Value1'
     *  RelationalOperator: '<S427>/Comparison1'
     *  RelationalOperator: '<S427>/Comparison4'
     */
    if (localB->Selector6 == -1.0F)
    {
        /* Outputs for IfAction SubSystem: '<S427>/TMMC_NCSgnNeg' incorporates:
         *  ActionPort: '<S462>/Action Port'
         */
        TMMR_ac_TMMC_NCSgnNeg(rty_VeTMMR_e_NCOncSgn);

        /* End of Outputs for SubSystem: '<S427>/TMMC_NCSgnNeg' */
    }
    else if (localB->Selector6 == 1.0F)
    {
        /* Outputs for IfAction SubSystem: '<S427>/TMMC_NCSgnPos' incorporates:
         *  ActionPort: '<S463>/Action Port'
         */
        TMMR_ac_TMMC_NCSgnPos(rty_VeTMMR_e_NCOncSgn);

        /* End of Outputs for SubSystem: '<S427>/TMMC_NCSgnPos' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S427>/TMMC_NCSgnUnknown' incorporates:
         *  ActionPort: '<S464>/Action Port'
         */
        TMMR_ac_TMMC_NCSgnUnknown(rty_VeTMMR_e_NCOncSgn);

        /* End of Outputs for SubSystem: '<S427>/TMMC_NCSgnUnknown' */
    }

    /* End of If: '<S427>/If' */
}

#endif

/* Model step function for TID1 */
FUNC(void, TMMR_CODE) TMMR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    TeHSER_e_FutrShftType tmpRead;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    float32 tmpRead_0;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    float32 tmpRead_1[6];

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    float32 tmpRead_2;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    boolean tmpRead_4;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    uint16 tmpRead_5;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    TeESSR_e_EngStartStopSt tmpRead_6;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    float32 tmpRead_7;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    float32 tmpRead_8;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    float32 rtb_Abs2;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable || Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    boolean rtb_OR1_e4;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    float32 rtb_TmpSignalConversionAtVeTTIR_M_HASTrq;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    boolean rtb_LogicalOperator2_a;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    float32 rtb_Merge1_l;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    float32 rtb_Merge2;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    float32 rtb_Merge_ly;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable || Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    float32 rtb_Merge1_b;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    boolean rtb_AND_c;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    float32 rtb_Switch1_a;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    boolean rtb_Switch1_cm;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    boolean rtb_Logical_dz;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    boolean rtb_Comparison9;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    boolean rtb_AND5;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable || Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    boolean rtb_AND_nz;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    TeHSER_e_RngEqnSel rtb_TmpSignalConversionAtVeHSER_e_RngEqn;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    TeOHSR_e_VLE_DriveStat rtb_TmpSignalConversionAtVeOHSR_e_ILESta;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    TeHCCR_e_ClutchStatus rtb_TmpSignalConversionAtVeTRNR_e_C2Stat;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable || Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    boolean Switch1_l;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    float32 Switch5;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    TeHCCR_e_ClutchStatus Switch3;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    TeHCCR_e_ClutchStatus Switch2;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable || Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    float32 Switch_idx_2;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    float32 Switch_idx_1;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    TeTRNR_e_TCMShftType tmp;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    sint16 tmp_0;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    TeTRNR_e_TCMGearStat tmp_1;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    TeTMMR_e_ClchTypeDef tmp_2;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    boolean guard1 = false;

#endif

#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    boolean guard2 = false;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/TMMR_FUNC_MedTED'
     */
    /* SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel' incorporates:
     *  SignalConversion generated from: '<S1>/VeOHSR_e_ILEState'
     */
#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    /* SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngEqnSel'
     */
    (void)Rte_Read_VeHSER_e_RngEqnSel_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_RngEqn);

    /* SignalConversion generated from: '<S1>/VeOHSR_e_ILEState' incorporates:
     *  Inport: '<Root>/VeOHSR_e_ILEState'
     */
    (void)Rte_Read_VeOHSR_e_ILEState_Value
        (&rtb_TmpSignalConversionAtVeOHSR_e_ILESta);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel' */

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Clch1_TCR_Actl' incorporates:
     *  SignalConversion generated from: '<S1>/VeHSER_e_RngSt'
     *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
     */
#if Rte_SysCon_Variant_TMMR_FUNC_Enable || Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Clch1_TCR_Actl' incorporates:
     *  Inport: '<Root>/VeHTDR_M_Clch1_TCR_Actl'
     */
    (void)Rte_Read_VeHTDR_M_Clch1_TCR_Actl_Value
        (&TMMR_ac_B.TmpSignalConversionAtVeHTDR_M_Clch1_TCR_);

    /* SignalConversion generated from: '<S1>/VeHSER_e_RngSt' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngSt'
     */
    (void)Rte_Read_VeHSER_e_RngSt_Value
        (&TMMR_ac_B.TmpSignalConversionAtVeHSER_e_RngStOutpo);

    /* SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp' incorporates:
     *  Inport: '<Root>/VeTFTR_T_TransOilTemp'
     */
    (void)Rte_Read_VeTFTR_T_TransOilTemp_Value
        (&TMMR_ac_B.TmpSignalConversionAtVeTFTR_T_TransOilTe);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHTDR_M_Clch1_TCR_Actl' */

    /* SignalConversion generated from: '<S1>/VeTRNR_e_C2Stat' incorporates:
     *  SignalConversion generated from: '<S1>/VeTTIR_M_HASTrqK0'
     */
#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    /* SignalConversion generated from: '<S1>/VeTRNR_e_C2Stat' incorporates:
     *  Inport: '<Root>/VeTRNR_e_C2Stat'
     */
    (void)Rte_Read_VeTRNR_e_C2Stat_Value
        (&rtb_TmpSignalConversionAtVeTRNR_e_C2Stat);

    /* SignalConversion generated from: '<S1>/VeTTIR_M_HASTrqK0' incorporates:
     *  Inport: '<Root>/VeTTIR_M_HASTrqK0'
     */
    (void)Rte_Read_VeTTIR_M_HASTrqK0_Value
        (&rtb_TmpSignalConversionAtVeTTIR_M_HASTrq);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTRNR_e_C2Stat' */

    /* SignalConversion generated from: '<S1>/VeTCCR_M_LCCTorqSigned' */
#if Rte_SysCon_Variant_TMMR_FUNC_Enable || Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    /* SignalConversion generated from: '<S1>/VeTCCR_M_LCCTorqSigned' incorporates:
     *  Inport: '<Root>/VeTCCR_M_LCCTorqSigned'
     */
    (void)Rte_Read_VeTCCR_M_LCCTorqSigned_Value
        (&TMMR_ac_B.TmpSignalConversionAtVeTCCR_M_LCCTorqSig);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTCCR_M_LCCTorqSigned' */

    /* SignalConversion generated from: '<S1>/VeVSDR_n_NTurb' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
     *  SignalConversion generated from: '<S1>/VeHCCR_M_Clch1_TorqEst'
     *  SignalConversion generated from: '<S1>/VeHCCR_M_Clch3_TorqEst'
     *  SignalConversion generated from: '<S1>/VeHCCR_e_Clch1_Stat'
     *  SignalConversion generated from: '<S1>/VeHCCR_e_Clch3_Stat'
     *  SignalConversion generated from: '<S1>/VeHSER_e_HTDR_State'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_ShftType'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_TargetGear'
     *  SignalConversion generated from: '<S1>/VeTSXR_r_TturbFromTof'
     *  SignalConversion generated from: '<S1>/VeTTQR_M_LoadTorqFront_Cmnd'
     *  SignalConversion generated from: '<S1>/VeTTQR_e_TCMTrqCntrlMdFst'
     *  SignalConversion generated from: '<S1>/VeVSDR_n_PrimNoSgndRaw'
     */
#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    /* SignalConversion generated from: '<S1>/VeVSDR_n_NTurb' incorporates:
     *  Inport: '<Root>/VeVSDR_n_NTurb'
     */
    (void)Rte_Read_VeVSDR_n_NTurb_Value
        (&TMMR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo);

    /* SignalConversion generated from: '<S1>/VeVSDR_n_PrimNoSgndRaw' incorporates:
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndRaw'
     */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndRaw_Value
        (&TMMR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd);

    /* SignalConversion generated from: '<S1>/VeTTQR_e_TCMTrqCntrlMdFst' incorporates:
     *  Inport: '<Root>/VeTTQR_e_TCMTrqCntrlMdFst'
     */
    (void)Rte_Read_VeTTQR_e_TCMTrqCntrlMdFst_Value
        (&TMMR_ac_B.TmpSignalConversionAtVeTTQR_e_TCMTrqCntr);

    /* SignalConversion generated from: '<S1>/VeTRNR_e_TargetGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_TargetGear'
     */
    (void)Rte_Read_VeTRNR_e_TargetGear_Value
        (&TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_TargetGear);

    /* SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_ActualGear'
     */
    (void)Rte_Read_VeTRNR_e_ActualGear_Value
        (&TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ActualGear);

    /* SignalConversion generated from: '<S1>/VeTRNR_e_ShftType' incorporates:
     *  Inport: '<Root>/VeTRNR_e_ShftType'
     */
    (void)Rte_Read_VeTRNR_e_ShftType_Value
        (&TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu);

    /* SignalConversion generated from: '<S1>/VeTTQR_M_LoadTorqFront_Cmnd' incorporates:
     *  Inport: '<Root>/VeTTQR_M_LoadTorqFront_Cmnd'
     */
    (void)Rte_Read_VeTTQR_M_LoadTorqFront_Cmnd_Value
        (&TMMR_ac_B.TmpSignalConversionAtVeTTQR_M_LoadTorqFr);

    /* SignalConversion generated from: '<S1>/VeHSER_e_HTDR_State' incorporates:
     *  Inport: '<Root>/VeHSER_e_HTDR_State'
     */
    (void)Rte_Read_VeHSER_e_HTDR_State_Value
        (&TMMR_ac_B.TmpSignalConversionAtVeHSER_e_HTDR_State);

    /* SignalConversion generated from: '<S1>/VeTSXR_r_TturbFromTof' incorporates:
     *  Inport: '<Root>/VeTSXR_r_TturbFromTof'
     */
    (void)Rte_Read_VeTSXR_r_TturbFromTof_Value
        (&TMMR_ac_B.TmpSignalConversionAtVeTSXR_r_TturbFromT);

    /* SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        (&TMMR_ac_B.TmpSignalConversionAtVeAPSR_Pct_AccelPed);

    /* SignalConversion generated from: '<S1>/VeHCCR_e_Clch1_Stat' incorporates:
     *  Inport: '<Root>/VeHCCR_e_Clch1_Stat'
     */
    (void)Rte_Read_VeHCCR_e_Clch1_Stat_Value
        (&TMMR_ac_B.TmpSignalConversionAtVeHCCR_e_Clch1_Stat);

    /* SignalConversion generated from: '<S1>/VeHCCR_e_Clch3_Stat' incorporates:
     *  Inport: '<Root>/VeHCCR_e_Clch3_Stat'
     */
    (void)Rte_Read_VeHCCR_e_Clch3_Stat_Value
        (&TMMR_ac_B.TmpSignalConversionAtVeHCCR_e_Clch3_Stat);

    /* SignalConversion generated from: '<S1>/VeHCCR_M_Clch1_TorqEst' incorporates:
     *  Inport: '<Root>/VeHCCR_M_Clch1_TorqEst'
     */
    (void)Rte_Read_VeHCCR_M_Clch1_TorqEst_Value
        (&TMMR_ac_B.TmpSignalConversionAtVeHCCR_M_Clch1_Torq);

    /* SignalConversion generated from: '<S1>/VeHCCR_M_Clch3_TorqEst' incorporates:
     *  Inport: '<Root>/VeHCCR_M_Clch3_TorqEst'
     */
    (void)Rte_Read_VeHCCR_M_Clch3_TorqEst_Value
        (&TMMR_ac_B.TmpSignalConversionAtVeHCCR_M_Clch3_Torq);

#endif

    /* End of SignalConversion generated from: '<S1>/VeVSDR_n_NTurb' */
#if Rte_SysCon_Variant_TMMR_FUNC_Enable || Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    /* S-Function (fcgen): '<S1>/FcnCallGen' */
#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    /* Inport: '<Root>/VeCSLR_n_Clch1_SlipSpeed' */
    (void)Rte_Read_VeCSLR_n_Clch1_SlipSpeed_Value(&rtb_Switch1_a);

    /* Inport: '<Root>/VaTINR_M_ClchTrq' */
    (void)Rte_Read_VaTINR_M_ClchTrq_Value(tmpRead_1);

    /* Outputs for Function Call SubSystem: '<S1>/TMMC' */
    /* Outputs for Atomic SubSystem: '<S18>/EdgeRising' */
    /* Logic: '<S383>/OR1' incorporates:
     *  UnitDelay: '<S383>/Unit Delay'
     */
    rtb_OR1_e4 = !TMMR_ac_DW.UnitDelay_DSTATE_fz;

    /* Update for UnitDelay: '<S383>/Unit Delay' incorporates:
     *  Constant: '<S18>/TRUE Constant'
     */
    TMMR_ac_DW.UnitDelay_DSTATE_fz = true;

    /* End of Outputs for SubSystem: '<S18>/EdgeRising' */

    /* UnitDelay: '<S18>/Unit Delay' */
    VeTMMR_e_ShftTypeOld = TMMR_ac_DW.UnitDelay_DSTATE_dy;

    /* Outputs for Atomic SubSystem: '<S18>/EdgeRising' */
    /* Logic: '<S383>/AND' incorporates:
     *  Constant: '<S10>/Calib'
     *  Constant: '<S20>/Constant Value2'
     *  Constant: '<S387>/Calib'
     *  Constant: '<S7>/Calib'
     *  Constant: '<S8>/Calib'
     *  Inport: '<Root>/VeHSER_e_FutrShftType'
     *  RelationalOperator: '<S20>/Comparison2'
     *  Selector: '<S20>/Selector2'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_ShftType'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_TargetGear'
     *  UnitDelay: '<S18>/Unit Delay'
     */
    /* Gateway: TMMR_FUNC_MedTED/TMMC/TMMC_StateMachine/TMMC_Stateflow */
    /* During: TMMR_FUNC_MedTED/TMMC/TMMC_StateMachine/TMMC_Stateflow */
    /* Entry Internal: TMMR_FUNC_MedTED/TMMC/TMMC_StateMachine/TMMC_Stateflow */
    /* Transition: '<S384>:423' */
    /*  Check if ShiftType  is not in "Steady State: No Shift in Progress" AND ShiftType has changed */
    if ((((uint32)TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu) ==
            CeTRNR_e_SteadyState) && rtb_OR1_e4)
    {
        /* Transition: '<S384>:560' */
        /* Transition: '<S384>:562' */
        /* Function call for TransCoeffShftType */
        VeTMMR_e_ShftTypeArb =
            TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu;

        /* Outputs for Function Call SubSystem: '<S3>/TMMC_TrnsCoeffShftInit' */
        /* DataStoreWrite: '<S22>/Data Store Write' incorporates:
         *  Constant: '<S478>/Calib'
         *  SignalConversion generated from: '<S1>/VeTRNR_e_ShftType'
         */
        /* Event: '<S384>:563' */
        TMMR_ac_DW.VeTMMR_r_OffgPreOptLead_DS =
            KeTMMR_r_CoeffGrRatClchOffgPreInit;

        /* Sum: '<S302>/Summation' incorporates:
         *  Constant: '<S477>/Calib'
         *  DataStoreWrite: '<S22>/Data Store Write4'
         */
        TMMR_ac_DW.VeTMMR_r_OffgPostOptLead_DS =
            KeTMMR_r_CoeffGrRatClchOffgPostInit;

        /* DataStoreWrite: '<S22>/Data Store Write1' incorporates:
         *  Constant: '<S480>/Calib'
         */
        TMMR_ac_DW.VeTMMR_r_OncPreOptLead_DS = KeTMMR_r_CoeffGrRatClchOncPreInit;

        /* DataStoreWrite: '<S22>/Data Store Write3' incorporates:
         *  Constant: '<S479>/Calib'
         */
        TMMR_ac_DW.VeTMMR_r_OncPostOptLead_DS =
            KeTMMR_r_CoeffGrRatClchOncPostInit;

        /* Merge: '<S3>/Merge1' incorporates:
         *  Constant: '<S478>/Calib'
         *  SignalConversion generated from: '<S22>/VeTMMR_r_CoeffGrRatClchOffgPre'
         */
        TMMR_ac_B.Merge1_k = KeTMMR_r_CoeffGrRatClchOffgPreInit;

        /* Merge: '<S3>/Merge2' incorporates:
         *  Constant: '<S477>/Calib'
         *  SignalConversion generated from: '<S22>/VeTMMR_r_CoeffGrRatClchOffgPost'
         */
        TMMR_ac_B.Merge2_m = KeTMMR_r_CoeffGrRatClchOffgPostInit;

        /* Merge: '<S3>/Merge3' incorporates:
         *  Constant: '<S480>/Calib'
         *  SignalConversion generated from: '<S22>/VeTMMR_r_CoeffGrRatClchOncPre'
         */
        TMMR_ac_B.Merge3 = KeTMMR_r_CoeffGrRatClchOncPreInit;

        /* Merge: '<S3>/Merge4' incorporates:
         *  Constant: '<S479>/Calib'
         *  SignalConversion generated from: '<S22>/VeTMMR_r_CoeffGrRatClchOncPost'
         */
        TMMR_ac_B.Merge4_i = KeTMMR_r_CoeffGrRatClchOncPostInit;

        /* Merge: '<S3>/Merge5' incorporates:
         *  Constant: '<S481>/Calib'
         *  SignalConversion generated from: '<S22>/VeTMMR_r_CoeffInrtTransIn'
         */
        TMMR_ac_B.Merge5_l = KeTMMR_r_CoeffInrtTransInInit;

        /* Merge: '<S3>/Merge7' incorporates:
         *  Constant: '<S482>/Calib'
         *  SignalConversion generated from: '<S22>/VeTMMR_r_CoeffInrtTransOut'
         */
        TMMR_ac_B.Merge7 = KeTMMR_r_CoeffInrtTransOutInit;

        /* Merge: '<S3>/Merge6' incorporates:
         *  Constant: '<S475>/Calib'
         *  SignalConversion generated from: '<S22>/VeTMMR_r_CoeffDampTransIn'
         */
        TMMR_ac_B.Merge6 = KeTMMR_r_CoeffDampTransInInit;

        /* Merge: '<S3>/Merge8' incorporates:
         *  Constant: '<S476>/Calib'
         *  SignalConversion generated from: '<S22>/VeTMMR_r_CoeffDampTransOut'
         */
        TMMR_ac_B.Merge8 = KeTMMR_r_CoeffDampTransOutInit;

        /* Merge: '<S3>/Merge22' incorporates:
         *  Constant: '<S471>/Calib'
         *  SignalConversion generated from: '<S22>/VeTMMC_e_NCOffgSgn'
         */
        TMMR_ac_B.Merge22_o = KeTMMR_e_SSNCOffgSgnInit;

        /* Merge: '<S3>/Merge14' incorporates:
         *  Constant: '<S472>/Calib'
         *  SignalConversion generated from: '<S22>/VeTMMC_e_NCOncSgn'
         */
        TMMR_ac_B.Merge14 = KeTMMR_e_SSNCOncSgnInit;

        /* Merge: '<S3>/Merge11' incorporates:
         *  Constant: '<S473>/Calib'
         *  SignalConversion generated from: '<S22>/VeTMMR_i_ClchIdxOffg'
         */
        TMMR_ac_B.Merge11 = KeTMMR_i_SSClchIdxOffgInit;

        /* Merge: '<S3>/Merge15' incorporates:
         *  Constant: '<S474>/Calib'
         *  SignalConversion generated from: '<S22>/VeTMMR_i_ClchIdxOnc'
         */
        VeTMMR_i_ClchIdxOnc = KeTMMR_i_SSClchIdxOncInit;

        /* Merge: '<S3>/Merge10' incorporates:
         *  Constant: '<S469>/Calib'
         *  SignalConversion generated from: '<S22>/VeTMMR_e_ClchOncType'
         */
        VeTMMR_e_ClchTypeOnc = KeTMMR_e_ClchTypeDefOncInit;

        /* Merge: '<S3>/Merge9' incorporates:
         *  Constant: '<S470>/Calib'
         *  SignalConversion generated from: '<S22>/VeTMMR_e_ClchOffgType'
         */
        VeTMMR_e_ClchTypeOffg = KeTMMR_e_ClchTypeDefOffgInit;

        /* Merge: '<S3>/Merge13' incorporates:
         *  Constant: '<S483>/Calib'
         *  SignalConversion generated from: '<S22>/VeTMMC_n_NCOffgSgn'
         */
        VeTMMR_n_NCOffgSgn = KeTMMR_r_SSNCOffgSgnInit;

        /* Merge: '<S3>/Merge12' incorporates:
         *  Constant: '<S484>/Calib'
         *  SignalConversion generated from: '<S22>/VeTMMC_n_NCOncSgn'
         */
        VeTMMR_n_NCOncSgn = KeTMMR_r_SSNCOncSgnInit;

        /* Merge: '<S3>/Merge16' incorporates:
         *  Constant: '<S468>/Calib'
         *  SignalConversion generated from: '<S22>/VeTMMC_e_ClchOncAssgnInit'
         */
        VeTMMR_e_ClchOncAssgn = KeTMMR_e_ClchOncAssgnShftTypeInit;

        /* End of Outputs for SubSystem: '<S3>/TMMC_TrnsCoeffShftInit' */
        /* Transition: '<S384>:566' */
        /* Transition: '<S384>:516' */
        /* Transition: '<S384>:515' */
    }
    else
    {
        /* Transition: '<S384>:559' */
        /*  Check if ShiftType  is not in "Steady State: No Shift in Progress" AND ShiftType has changed */
        if ((((uint32)TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu) !=
                CeTRNR_e_SteadyState) &&
                (TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu !=
                 VeTMMR_e_ShftTypeOld))
        {
            /* Transition: '<S384>:509' */
            /* Transition: '<S384>:511' */
            /* Function call for TransCoeffShftType */
            VeTMMR_e_ShftTypeArb =
                TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu;

            /* Outputs for Function Call SubSystem: '<S3>/TMMC_TrnsCoeffShft' */
            /* Event: '<S384>:295' */
            TMMR_ac_TMMC_TrnsCoeffShft(VeTMMR_e_ShftTypeArb, &TMMR_ac_B.Merge1_k,
                &TMMR_ac_B.Merge2_m, &TMMR_ac_B.Merge3, &TMMR_ac_B.Merge4_i,
                &TMMR_ac_B.Merge5_l, &TMMR_ac_B.Merge7, &TMMR_ac_B.Merge6,
                &TMMR_ac_B.Merge8, (&(VeTMMR_e_ClchTypeOffg)),
                (&(VeTMMR_e_ClchTypeOnc)), (&(VeTMMR_n_NCOffgSgn)),
                (&(VeTMMR_n_NCOncSgn)), &TMMR_ac_B.Merge22_o, &TMMR_ac_B.Merge14,
                &TMMR_ac_B.Merge11, (&(VeTMMR_i_ClchIdxOnc)),
                (&(VeTMMR_e_ClchOncAssgn)), &TMMR_ac_B.TMMC_TrnsCoeffShft);

            /* End of Outputs for SubSystem: '<S3>/TMMC_TrnsCoeffShft' */
            /* Transition: '<S384>:516' */
            /* Transition: '<S384>:515' */
        }
        else
        {
            /* Transition: '<S384>:510' */
            /* check if multishift just finished */
            if ((((uint32)TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu) ==
                 CeTRNR_e_SteadyState) && (KaTMMR_i_ClchIdx2ndOffgShftType
                    [(VeTMMR_e_ShftTypeOld)] != -1))
            {
                /* Outputs for Function Call SubSystem: '<S3>/TMMC_TrnsCfAfMSft' */
                /* Outputs for Enabled SubSystem: '<S20>/TMMC_ClchOffg1' incorporates:
                 *  EnablePort: '<S390>/Enable'
                 */
                /* Selector: '<S20>/Selector2' incorporates:
                 *  Constant: '<S387>/Calib'
                 *  Constant: '<S394>/Calib'
                 *  DataTypeConversion: '<S20>/Data Type Conversion'
                 *  Selector: '<S390>/Selector14'
                 */
                /* Transition: '<S384>:512' */
                /* Transition: '<S384>:514' */
                /* Function call for TransCoeff after multishift is done */
                /* Event: '<S384>:506' */
                tmp_0 = KaTMMR_i_ClchIdx2ndOffgShftType[(sint16)
                    VeTMMR_e_ShftTypeOld];
                if (tmp_0 != -1)
                {
                    /* Gain: '<S401>/Gain' incorporates:
                     *  Selector: '<S390>/Selector14'
                     */
                    TMMR_ac_B.Gain_il = tmp_0;

                    /* DataTypeConversion: '<S392>/DataTypeConversion' incorporates:
                     *  Constant: '<S393>/Calib'
                     *  Selector: '<S390>/Selector'
                     */
                    TMMR_ac_B.DataTypeConversion = KaTMMR_e_ClchTypeDef
                        [(TMMR_ac_B.Gain_il)];

                    /* Gain: '<S398>/Gain' incorporates:
                     *  Constant: '<S397>/Calib'
                     *  DataTypeConversion: '<S20>/Data Type Conversion'
                     *  Selector: '<S390>/Selector5'
                     */
                    TMMR_ac_B.Gain_ki = KaTMMR_r_NC2ndOffgSgnShftType[(sint16)
                        VeTMMR_e_ShftTypeOld];

                    /* Gain: '<S399>/Gain' incorporates:
                     *  Constant: '<S395>/Calib'
                     *  DataTypeConversion: '<S20>/Data Type Conversion'
                     *  Selector: '<S390>/Selector2'
                     */
                    TMMR_ac_B.Gain_ky =
                        KaTMMR_r_CoeffGrRatClch2ndOffgPostShftType[(sint16)
                        VeTMMR_e_ShftTypeOld];

                    /* Gain: '<S400>/Gain' incorporates:
                     *  Constant: '<S396>/Calib'
                     *  DataTypeConversion: '<S20>/Data Type Conversion'
                     *  Selector: '<S390>/Selector1'
                     */
                    TMMR_ac_B.Gain_ip =
                        KaTMMR_r_CoeffGrRatClch2ndOffgPreShftType[(sint16)
                        VeTMMR_e_ShftTypeOld];
                }

                /* End of Outputs for SubSystem: '<S20>/TMMC_ClchOffg1' */

                /* Merge: '<S3>/Merge9' incorporates:
                 *  Constant: '<S20>/Constant Value2'
                 *  Constant: '<S387>/Calib'
                 *  DataTypeConversion: '<S392>/DataTypeConversion'
                 *  RelationalOperator: '<S20>/Comparison2'
                 *  Selector: '<S20>/Selector2'
                 *  SignalConversion generated from: '<S20>/TMMC_e_ClchType2ndOffg'
                 */
                VeTMMR_e_ClchTypeOffg = TMMR_ac_B.DataTypeConversion;

                /* Merge: '<S3>/Merge11' incorporates:
                 *  SignalConversion generated from: '<S20>/TMMC_i_ClchIdx2ndOffg'
                 */
                TMMR_ac_B.Merge11 = TMMR_ac_B.Gain_il;

                /* Merge: '<S3>/Merge2' incorporates:
                 *  SignalConversion generated from: '<S20>/TMMC_r_CoeffGrRatClch2ndOffgPost'
                 */
                TMMR_ac_B.Merge2_m = TMMR_ac_B.Gain_ky;

                /* Merge: '<S3>/Merge1' incorporates:
                 *  SignalConversion generated from: '<S20>/TMMC_r_CoeffGrRatClch2ndOffgPre'
                 */
                TMMR_ac_B.Merge1_k = TMMR_ac_B.Gain_ip;

                /* Merge: '<S3>/Merge13' incorporates:
                 *  Gain: '<S389>/Gain'
                 */
                VeTMMR_n_NCOffgSgn = TMMR_ac_B.Gain_ki;

                /* If: '<S391>/If' incorporates:
                 *  Constant: '<S391>/Constant Value'
                 *  Constant: '<S391>/Constant Value1'
                 *  RelationalOperator: '<S391>/Comparison1'
                 *  RelationalOperator: '<S391>/Comparison4'
                 */
                if (TMMR_ac_B.Gain_ki == -1.0F)
                {
                    /* Outputs for IfAction SubSystem: '<S391>/TMMC_NCSgnNeg' incorporates:
                     *  ActionPort: '<S402>/Action Port'
                     */
                    TMMR_ac_TMMC_NCSgnNeg(&TMMR_ac_B.Merge22_o);

                    /* End of Outputs for SubSystem: '<S391>/TMMC_NCSgnNeg' */
                }
                else if (TMMR_ac_B.Gain_ki == 1.0F)
                {
                    /* Outputs for IfAction SubSystem: '<S391>/TMMC_NCSgnPos' incorporates:
                     *  ActionPort: '<S403>/Action Port'
                     */
                    TMMR_ac_TMMC_NCSgnPos(&TMMR_ac_B.Merge22_o);

                    /* End of Outputs for SubSystem: '<S391>/TMMC_NCSgnPos' */
                }
                else
                {
                    /* Outputs for IfAction SubSystem: '<S391>/TMMC_NCSgnUnknown' incorporates:
                     *  ActionPort: '<S404>/Action Port'
                     */
                    TMMR_ac_TMMC_NCSgnUnknown(&TMMR_ac_B.Merge22_o);

                    /* End of Outputs for SubSystem: '<S391>/TMMC_NCSgnUnknown' */
                }

                /* End of If: '<S391>/If' */
                /* End of Outputs for SubSystem: '<S3>/TMMC_TrnsCfAfMSft' */
                /* Transition: '<S384>:515' */
            }
            else
            {
                (void)Rte_Read_VeHSER_e_FutrShftType_Value(&tmpRead);

                /* Transition: '<S384>:547' */
                /* Check if FutureShiftType is a shift to neutral condition, to avoid shift Neutral to neutral, it must sure Actual gear not neutral. */
                tmp_1 = TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ActualGear;
                if (((((uint32)
                        TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu) ==
                        CeTRNR_e_SteadyState) && (((uint32)tmpRead) ==
                        CeHSER_e_ShiftToNeutralReq)) && (((uint32)tmp_1) !=
                        CeTRNR_e_Neutral))
                {
                    /* Transition: '<S384>:551' */
                    /* Transition: '<S384>:555' */
                    /* Assign ShiftTypeArb for Shift To Neutral */
                    VeTMMR_e_ShftTypeArb = HaTMMR_e_ShftType4STN[(tmp_1)];

                    /* Outputs for Function Call SubSystem: '<S3>/TMMC_TrnsCoeffShft' */
                    /* Function call for TransCoeff */
                    /* Event: '<S384>:295' */
                    TMMR_ac_TMMC_TrnsCoeffShft(VeTMMR_e_ShftTypeArb,
                        &TMMR_ac_B.Merge1_k, &TMMR_ac_B.Merge2_m,
                        &TMMR_ac_B.Merge3, &TMMR_ac_B.Merge4_i,
                        &TMMR_ac_B.Merge5_l, &TMMR_ac_B.Merge7,
                        &TMMR_ac_B.Merge6, &TMMR_ac_B.Merge8,
                        (&(VeTMMR_e_ClchTypeOffg)), (&(VeTMMR_e_ClchTypeOnc)), (
                        &(VeTMMR_n_NCOffgSgn)), (&(VeTMMR_n_NCOncSgn)),
                        &TMMR_ac_B.Merge22_o, &TMMR_ac_B.Merge14,
                        &TMMR_ac_B.Merge11, (&(VeTMMR_i_ClchIdxOnc)),
                        (&(VeTMMR_e_ClchOncAssgn)),
                        &TMMR_ac_B.TMMC_TrnsCoeffShft);

                    /* End of Outputs for SubSystem: '<S3>/TMMC_TrnsCoeffShft' */
                    /* Transition: '<S384>:554' */
                }
                else
                {
                    /* Transition: '<S384>:553' */
                }

                /* Transition: '<S384>:549' */
                /*  Check if FutureShiftType is GarageShift */
                tmp_1 = TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_TargetGear;
                if (((((uint32)
                        TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu) ==
                        CeTRNR_e_SteadyState) && (((uint32)tmpRead) ==
                        CeHSER_e_GarageShiftReq)) && (((uint32)tmp_1) !=
                        CeTRNR_e_Neutral))
                {
                    /* Transition: '<S384>:546' */
                    /* Transition: '<S384>:548' */
                    /* Assign ShiftTypeArb for GarageShift */
                    VeTMMR_e_ShftTypeArb = HaTMMR_e_ShftType4GS[(tmp_1)];

                    /* Outputs for Function Call SubSystem: '<S3>/TMMC_TrnsCoeffShft' */
                    /* Function call for TransCoeff */
                    /* Event: '<S384>:295' */
                    TMMR_ac_TMMC_TrnsCoeffShft(VeTMMR_e_ShftTypeArb,
                        &TMMR_ac_B.Merge1_k, &TMMR_ac_B.Merge2_m,
                        &TMMR_ac_B.Merge3, &TMMR_ac_B.Merge4_i,
                        &TMMR_ac_B.Merge5_l, &TMMR_ac_B.Merge7,
                        &TMMR_ac_B.Merge6, &TMMR_ac_B.Merge8,
                        (&(VeTMMR_e_ClchTypeOffg)), (&(VeTMMR_e_ClchTypeOnc)), (
                        &(VeTMMR_n_NCOffgSgn)), (&(VeTMMR_n_NCOncSgn)),
                        &TMMR_ac_B.Merge22_o, &TMMR_ac_B.Merge14,
                        &TMMR_ac_B.Merge11, (&(VeTMMR_i_ClchIdxOnc)),
                        (&(VeTMMR_e_ClchOncAssgn)),
                        &TMMR_ac_B.TMMC_TrnsCoeffShft);

                    /* End of Outputs for SubSystem: '<S3>/TMMC_TrnsCoeffShft' */
                    /* Transition: '<S384>:550' */
                }
                else
                {
                    /* Transition: '<S384>:552' */
                }

                /* Transition: '<S384>:545' */
            }
        }
    }

    /* End of Logic: '<S383>/AND' */
    /* End of Outputs for SubSystem: '<S18>/EdgeRising' */
    /* Transition: '<S384>:449' */
    /*  Initialize internal loop clutch index */
    TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx = 0;
    do
    {
        /* Check if current loop clutch is a Dog Clutch */
        tmp_2 = KaTMMR_e_ClchTypeDef[(TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx)];
        if (((uint32)tmp_2) == CeTMMR_e_ClchDog)
        {
            /* Transition: '<S384>:452' */
            /* Transition: '<S384>:464' */
            /* Function call for Dog Clutch torque calculation */
            /* Event: '<S384>:229' */
            rtb_Merge1_l = VaTMMR_M_ClchTorq[(TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx)];
            VeTMMR_M_ClchDogDeltaTorq = KaTMMR_M_ClchDogTorqLock
                [(TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx)] - rtb_Merge1_l;
            if (TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx == TMMR_ac_B.Merge11)
            {
                TMMR_ac_B.Merge = KaTMMR_M_ClchDogTorqLockOffg
                    [(TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx)];
            }
            else
            {
                TMMR_ac_B.Merge = (VeTMMR_M_ClchDogDeltaTorq *
                                   look1_iflf_binlca_16a
                                   (VeTMMR_M_ClchDogDeltaTorq, ((const float32 *)
                                     &(KxTMMR_k_DogClchTorqFiltCnst[0])), ((
                                      const float32 *)
                                     &(KtTMMR_k_DogClchTorqFiltCnst[0])), 6U)) +
                    rtb_Merge1_l;
            }

            /* Function call to store calculated clutch torque */
            /* Event: '<S384>:235' */
            TMMR_ac_TMMC_StoreClchTorq(TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx,
                &TMMR_ac_B.Merge, TMMR_ac_B.Switch1_b, TMMR_ac_B.Switch1,
                TMMR_ac_B.Logical5);

            /* Transition: '<S384>:498' */
        }
        else
        {
            /* Transition: '<S384>:471' */
        }

        /* Transition: '<S384>:500' */
        /* Check if current loop clutch is a OneWay Clutch */
        if (((uint32)tmp_2) == CeTMMR_e_ClchOneWay)
        {
            /* Transition: '<S384>:496' */
            /* Transition: '<S384>:492' */
            /* Function call for OneWay Clutch torque calculation */
            /* Event: '<S384>:342' */
            if (TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx == TMMR_ac_B.Merge11)
            {
                rtb_Merge_ly = TMMR_ac_B.Merge1_k * TMMR_ac_B.Merge2_m;
                rtb_Merge1_l = KeTMMR_n_OneWayClchOffgLSP;
                rtb_Merge2 = KeTMMR_n_OneWayClchOffgRSP;
            }
            else if (TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx == VeTMMR_i_ClchIdxOnc)
            {
                rtb_Merge_ly = TMMR_ac_B.Merge3 * TMMR_ac_B.Merge4_i;
                rtb_Merge1_l = KeTMMR_n_OneWayClchOncLSP;
                rtb_Merge2 = KeTMMR_n_OneWayClchOncRSP;
            }
            else
            {
                rtb_Merge_ly =
                    (Rte_Prm_KaTSXR_r_TCMGearRatios_KaTSXR_r_TCMGearRatios())[1];
                rtb_Merge1_l = KeTMMR_n_OneWayClchDfltLSP;
                rtb_Merge2 = KeTMMR_n_OneWayClchDfltRSP;
            }

            rtb_OR1_e4 = (VaTMMR_M_ClchTorq[0] >= KeTMMR_M_ClchATrqHighActv);
            TMMR_ac_B.Logical5 = ((!rtb_OR1_e4) && (VaTMMR_M_ClchTorq[0] >=
                                   KeTMMR_M_ClchATrqLowActv));
            if ((!TMMR_ac_B.Logical5) || ((TMMR_ac_B.Logical5) &&
                    (!VaTMMR_b_OneWayClchEdgeRise
                     [(TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx)])))
            {
                TMMR_ac_B.Switch1 = 0.0F;
            }
            else
            {
                TMMR_ac_B.Switch1 = fminf(KeTMMR_t_OneWayClchSlipSpdDly,
                    HeTMMR_t_MedTED_dT + VaTMMR_t_OneWayClchTCnt
                    [(TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx)]);
            }

            if (KeTMMR_b_UseClch1SlipSpeed)
            {
                VeTMMC_n_OneWayCltchSl = rtb_Switch1_a;
            }
            else
            {
                VeTMMC_n_OneWayCltchSl = fabsf
                    (TMMR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo - fabsf
                     ((TMMR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd *
                       rtb_Merge_ly) * ((float32)
                                        Rte_Prm_KeTSXR_r_FDRf_KeTSXR_r_FDRf())));
            }

            if (VeTMMC_n_OneWayCltchSl > rtb_Merge2)
            {
                TMMR_ac_B.Switch1_b = true;
            }
            else if (VeTMMC_n_OneWayCltchSl < rtb_Merge1_l)
            {
                TMMR_ac_B.Switch1_b = false;
            }
            else
            {
                TMMR_ac_B.Switch1_b = VaTMMR_b_OneWayHyst
                    [(TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx)];
            }

            if (KeTMMR_b_Enable2ndClchChk)
            {
                rtb_Logical_dz =
                    ((((TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_TargetGear ==
                        KeTMMR_e_OneWayClchOffgTgtGear) ||
                       (TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ActualGear ==
                        KeTMMR_e_OneWayClchOffgActGear)) && (rtb_OR1_e4 ||
                       ((TMMR_ac_B.Logical5) && ((TMMR_ac_B.Logical5) &&
                         (TMMR_ac_B.Switch1 >= KeTMMR_t_OneWayClchSlipSpdDly)))))
                     && ((!TMMR_ac_B.Switch1_b) && (((uint32)
                        TMMR_ac_B.TmpSignalConversionAtVeTTQR_e_TCMTrqCntr) !=
                       CeTINR_e_TrqDec)));
            }
            else
            {
                rtb_Logical_dz = ((!TMMR_ac_B.Switch1_b) && (((uint32)
                                    TMMR_ac_B.TmpSignalConversionAtVeTTQR_e_TCMTrqCntr)
                                   != CeTINR_e_TrqDec));
            }

            if (rtb_Logical_dz)
            {
                rtb_Merge2 = KeTMMR_M_OneWayClchLockedTrq;
            }
            else
            {
                rtb_Merge2 = 0.0F;
            }

            rtb_Merge1_l = VaTMMR_M_ClchTorq[(TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx)];
            VeTMMR_M_OneWayClchDeltaTorq = rtb_Merge2 - rtb_Merge1_l;
            TMMR_ac_B.Merge = (VeTMMR_M_OneWayClchDeltaTorq *
                               look1_iflf_binlca_16a
                               (VeTMMR_M_OneWayClchDeltaTorq, ((const float32 *)
                                 &(KxTMMR_k_OneWayClchTorqFiltCnst[0])), ((const
                                  float32 *)&(KtTMMR_k_OneWayClchTorqFiltCnst[0])),
                                6U)) + rtb_Merge1_l;

            /* Function call to store calculated clutch torque */
            /* Event: '<S384>:235' */
            TMMR_ac_TMMC_StoreClchTorq(TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx,
                &TMMR_ac_B.Merge, TMMR_ac_B.Switch1_b, TMMR_ac_B.Switch1,
                TMMR_ac_B.Logical5);

            /* Transition: '<S384>:494' */
        }
        else
        {
            /* Transition: '<S384>:491' */
        }

        /* Transition: '<S384>:489' */
        /* Check if current clutch is Friction or Brake Clutch and if clutch is not filling (in Boost phase) */
        if ((((uint32)tmp_2) == CeTMMR_e_ClchFrict) || (((uint32)tmp_2) ==
                CeTMMR_e_ClchBrk))
        {
            /* Transition: '<S384>:495' */
            /* Transition: '<S384>:501' */
            /* Function call for Friction/Brake Clutch torque calculation */
            /* Event: '<S384>:233' */
            if (TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx == TMMR_ac_B.Merge11)
            {
                rtb_Merge2 = KaTMMR_r_ClchFrictCoeffCombOffg
                    [(TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx)];
                rtb_Merge1_l = KaTMMR_k_ClchTorqFiltCnstOffg
                    [(TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu)];
            }
            else if (TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx == VeTMMR_i_ClchIdxOnc)
            {
                rtb_Merge2 = KaTMMR_r_ClchFrictCoeffCombOnc
                    [(TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx)];
                rtb_Merge1_l = KaTMMR_k_ClchTorqFiltCnstOnc
                    [(TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu)];
            }
            else
            {
                rtb_Merge1_l = KaTMMR_k_ClchTorqFiltCnst
                    [(TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx)];
                rtb_Merge2 = KaTMMR_r_ClchFrictCoeffComb
                    [(TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx)];
            }

            rtb_Merge2 *= fmaxf(tmpRead_1[TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx] -
                                KaTMMR_p_RetSpringPres
                                [(TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx)], 0.0F) *
                100000.0F;
            rtb_Merge_ly = VaTMMR_M_ClchTorq[(TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx)];
            TMMR_ac_B.Merge = ((rtb_Merge2 - rtb_Merge_ly) * rtb_Merge1_l) +
                rtb_Merge_ly;
            if ((TMMR_ac_B.Merge <= KeTMMR_M_ClchTorqZeroThrsh) && (rtb_Merge2 <=
                 KeTMMR_M_ClchTorqZeroThrsh))
            {
                TMMR_ac_B.Merge = 0.0F;
            }

            /* Function call to store calculated clutch torque */
            /* Event: '<S384>:235' */
            TMMR_ac_TMMC_StoreClchTorq(TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx,
                &TMMR_ac_B.Merge, TMMR_ac_B.Switch1_b, TMMR_ac_B.Switch1,
                TMMR_ac_B.Logical5);

            /* Transition: '<S384>:487' */
        }
        else
        {
            /* Transition: '<S384>:490' */
        }

        /* Transition: '<S384>:503' */
        /* Increment internal loop clutch index */
        TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx++;

        /*  Check loop for maximum number of clutches */
        /* Transition: '<S384>:488' */
        /* Transition: '<S384>:470' */
    }
    while (TMMR_ac_B.VeTMMR_Cnt_ClchNumIdx < ((sint16)
                    Rte_Prm_CeTMMR_Cnt_MaxNumClch_CeTMMR_Cnt_MaxNumClch()));

    /* Chart: '<S18>/TMMC_Stateflow' incorporates:
     *  SubSystem: '<S3>/TMMC_ClchTorqSel'
     */
    /* If: '<S83>/If' incorporates:
     *  Constant: '<S84>/Constant'
     *  RelationalOperator: '<S83>/Comparison4'
     */
    /* Transition: '<S384>:504' */
    /* Function call for torque selection of Clutch OffGoing & OnComing */
    /* Event: '<S384>:236' */
    if (((uint32)TMMR_ac_B.TmpSignalConversionAtVeHSER_e_HTDR_State) ==
            CeHSER_e_Neut_State)
    {
        /* Outputs for IfAction SubSystem: '<S83>/ShftTypeIdxNeut' incorporates:
         *  ActionPort: '<S85>/Action Port'
         */
        /* RelationalOperator: '<S13>/Comparison1' incorporates:
         *  Constant: '<S87>/Calib'
         *  DataTypeConversion: '<S13>/Data Type Conversion'
         *  Merge: '<S83>/Merge'
         *  Selector: '<S85>/Selector'
         *  SignalConversion generated from: '<S1>/VeTRNR_e_ShftType'
         */
        VeTMMR_e_ShiftTypeIdx = KaTMMR_e_ShiftTypeIdxHTDRNeut
            [(TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu)];

        /* End of Outputs for SubSystem: '<S83>/ShftTypeIdxNeut' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S83>/ShiftTypeIdx' incorporates:
         *  ActionPort: '<S86>/Action Port'
         */
        /* RelationalOperator: '<S13>/Comparison1' incorporates:
         *  Constant: '<S88>/Calib'
         *  DataTypeConversion: '<S13>/Data Type Conversion'
         *  Merge: '<S83>/Merge'
         *  Selector: '<S86>/Selector'
         *  SignalConversion generated from: '<S1>/VeTRNR_e_ShftType'
         */
        VeTMMR_e_ShiftTypeIdx = KaTMMR_e_ShiftTypeIdx
            [(TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu)];

        /* End of Outputs for SubSystem: '<S83>/ShiftTypeIdx' */
    }

    /* End of If: '<S83>/If' */

    /* RelationalOperator: '<S13>/Comparison1' incorporates:
     *  Constant: '<S31>/Constant'
     */
    VeTMMR_b_GarageShiftActv = (((uint32)VeTMMR_e_ShiftTypeIdx) ==
        CeHSER_e_GarageSIP);

    /* Abs: '<S54>/Abs' incorporates:
     *  Constant: '<S26>/Constant Value1'
     *  Constant: '<S36>/Calib'
     *  Product: '<S26>/Multiplication3'
     */
    TMMR_ac_B.Gain_kr = HeTMMR_t_MedTED_dT / 2.0F;

    /* Product: '<S26>/Multiplication2' incorporates:
     *  Constant: '<S37>/Calib'
     *  Product: '<S26>/Multiplication4'
     *  Sum: '<S26>/Summation'
     *  Sum: '<S26>/Summation1'
     *  Sum: '<S26>/Summation2'
     *  UnitDelay: '<S26>/Unit Delay'
     *  UnitDelay: '<S26>/Unit Delay1'
     */
    VeTMMR_dn_NturbDot = ((TMMR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo -
                           ((TMMR_ac_B.Gain_kr - KeTMMR_k_NiDotFiltCoeff) *
                            TMMR_ac_DW.UnitDelay1_DSTATE_c)) -
                          TMMR_ac_DW.UnitDelay_DSTATE_a) / (TMMR_ac_B.Gain_kr +
        KeTMMR_k_NiDotFiltCoeff);

    /* RelationalOperator: '<S54>/Comparison1' incorporates:
     *  Constant: '<S81>/Constant'
     */
    VeTMMR_b_ShiftInPrgsActv = (((uint32)VeTMMR_e_ShiftTypeIdx) ==
        CeHSER_e_ShftInPrgs);

    /* Outputs for Atomic SubSystem: '<S13>/EdgeRising' */
    /* Logic: '<S28>/AND' incorporates:
     *  Logic: '<S28>/OR1'
     *  UnitDelay: '<S28>/Unit Delay'
     */
    rtb_OR1_e4 = ((VeTMMR_b_ShiftInPrgsActv) && (!TMMR_ac_DW.UnitDelay_DSTATE_p4));

    /* Update for UnitDelay: '<S28>/Unit Delay' */
    TMMR_ac_DW.UnitDelay_DSTATE_p4 = VeTMMR_b_ShiftInPrgsActv;

    /* End of Outputs for SubSystem: '<S13>/EdgeRising' */

    /* If: '<S49>/If1' incorporates:
     *  Constant: '<S67>/Constant'
     *  Merge: '<S3>/Merge10'
     *  RelationalOperator: '<S49>/Comparison1'
     */
    if (((uint32)VeTMMR_e_ClchTypeOnc) == CeTMMR_e_ClchZeroTorq)
    {
        /* Outputs for IfAction SubSystem: '<S49>/M_ClchTorqOnc_Zero' incorporates:
         *  ActionPort: '<S69>/Action Port'
         */
        /* Merge: '<S49>/Merge4' incorporates:
         *  Constant: '<S69>/Constant Value'
         *  SignalConversion generated from: '<S69>/ClchTorqOnc'
         */
        VeTMMC_M_ClchTorqOncRaw = 0.0F;

        /* End of Outputs for SubSystem: '<S49>/M_ClchTorqOnc_Zero' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S49>/M_ClchTorqOnc' incorporates:
         *  ActionPort: '<S68>/Action Port'
         */
        /* Merge: '<S49>/Merge4' incorporates:
         *  Selector: '<S68>/Selector'
         */
        VeTMMC_M_ClchTorqOncRaw = VaTMMR_M_ClchTorq[(VeTMMR_i_ClchIdxOnc)];

        /* End of Outputs for SubSystem: '<S49>/M_ClchTorqOnc' */
    }

    /* End of If: '<S49>/If1' */
    /* End of Outputs for SubSystem: '<S1>/TMMC' */

    /* Inport: '<Root>/VeTCCR_e_ClchStLCC' */
    (void)Rte_Read_VeTCCR_e_ClchStLCC_Value(&Switch3);

    /* Outputs for Function Call SubSystem: '<S1>/TMMC' */
    /* Chart: '<S18>/TMMC_Stateflow' incorporates:
     *  SubSystem: '<S3>/TMMC_ClchTorqSel'
     */
    /* If: '<S56>/If' incorporates:
     *  Constant: '<S153>/Constant'
     *  Inport: '<Root>/VeTCCR_M_Timp'
     *  Inport: '<Root>/VeTCCR_e_ClchStLCC'
     *  Inport: '<Root>/VeTCCR_r_TR'
     *  RelationalOperator: '<S56>/Comparison4'
     */
    if (((uint32)Switch3) == CeHCCR_e_ClLocked)
    {
        /* Outputs for IfAction SubSystem: '<S56>/Tti_LockedTCC' incorporates:
         *  ActionPort: '<S157>/Action Port'
         */
        /* Product: '<S157>/Product2' incorporates:
         *  Constant: '<S162>/Calib'
         *  Product: '<S157>/Product1'
         */
        tmpRead_0 = ((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f()) * ((float32)
            Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f());

        /* Merge: '<S56>/Merge1' incorporates:
         *  Constant: '<S160>/Calib'
         *  Constant: '<S161>/Calib'
         *  Product: '<S157>/Product2'
         *  Sum: '<S157>/Sum1'
         */
        rtb_Merge1_b = ((tmpRead_0 * ((float32)Rte_Prm_KeTSXR_J_Ia_KeTSXR_J_Ia()))
                        + ((float32)Rte_Prm_KeTSXR_J_Ie_KeTSXR_J_Ie())) +
            TMMR_ac_B.Merge5_l;

        /* Abs: '<S54>/Abs' incorporates:
         *  Constant: '<S155>/Calib'
         *  Constant: '<S156>/Calib'
         *  Product: '<S157>/Product1'
         *  Product: '<S157>/Product4'
         *  Sum: '<S157>/Sum2'
         *  Sum: '<S157>/Sum3'
         */
        TMMR_ac_B.Gain_kr = TMMR_ac_B.TmpSignalConversionAtVeTTQR_M_LoadTorqFr -
            ((((tmpRead_0 * ((float32)Rte_Prm_KeTSXR_D_Ba_KeTSXR_D_Ba())) +
               ((float32)Rte_Prm_KeTSXR_D_Be_KeTSXR_D_Be())) + TMMR_ac_B.Merge6)
             * TMMR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo);

        /* End of Outputs for SubSystem: '<S56>/Tti_LockedTCC' */
    }
    else
    {
        (void)Rte_Read_VeTCCR_r_TR_Value(&tmpRead_0);
        (void)Rte_Read_VeTCCR_M_Timp_Value(&rtb_Merge1_b);

        /* Outputs for IfAction SubSystem: '<S56>/Tti_UnlockedTCC' incorporates:
         *  ActionPort: '<S159>/Action Port'
         */
        /* Abs: '<S54>/Abs' incorporates:
         *  Inport: '<Root>/VeTCCR_M_Timp'
         *  Inport: '<Root>/VeTCCR_r_TR'
         *  Product: '<S159>/Product1'
         *  Product: '<S159>/Product4'
         *  Sum: '<S159>/Sum2'
         */
        TMMR_ac_B.Gain_kr = ((rtb_Merge1_b * tmpRead_0) +
                             TMMR_ac_B.TmpSignalConversionAtVeTCCR_M_LCCTorqSig)
            - (TMMR_ac_B.Merge6 *
               TMMR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo);

        /* Merge: '<S56>/Merge1' incorporates:
         *  Inport: '<S159>/Iti'
         */
        rtb_Merge1_b = TMMR_ac_B.Merge5_l;

        /* End of Outputs for SubSystem: '<S56>/Tti_UnlockedTCC' */
    }

    /* End of If: '<S56>/If' */

    /* Switch: '<S56>/Switch1' incorporates:
     *  Constant: '<S154>/Calib'
     */
    if (!HeTMMR_b_EnblEngInert)
    {
        /* Switch: '<S56>/Switch1' incorporates:
         *  Product: '<S158>/Product4'
         *  Sum: '<S158>/Sum3'
         */
        TMMR_ac_B.Gain_kr = TMMR_ac_B.TmpSignalConversionAtVeTTQR_M_LoadTorqFr -
            (TMMR_ac_B.Merge6 *
             TMMR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo);
    }

    /* End of Switch: '<S56>/Switch1' */

    /* Outputs for IfAction SubSystem: '<S13>/TMMC_GShftInPrgs' incorporates:
     *  ActionPort: '<S50>/Action Port'
     */
    /* If: '<S13>/If' incorporates:
     *  Product: '<S50>/Product'
     *  Product: '<S51>/Product4'
     *  Product: '<S57>/Product'
     */
    rtb_Switch1_a = TMMR_ac_B.Gain_kr * TMMR_ac_B.Merge3;

    /* End of Outputs for SubSystem: '<S13>/TMMC_GShftInPrgs' */

    /* Outputs for IfAction SubSystem: '<S13>/TMMC_TrqB4SpeedPhs' incorporates:
     *  ActionPort: '<S57>/Action Port'
     */
    rtb_Merge1_l = rtb_Switch1_a * VeTMMR_n_NCOncSgn;

    /* End of Outputs for SubSystem: '<S13>/TMMC_TrqB4SpeedPhs' */

    /* RelationalOperator: '<S51>/Comparison' incorporates:
     *  Constant: '<S51>/Constant Value1'
     *  Product: '<S51>/Product4'
     */
    VeTMMR_b_TrqB4SpdRaw = (rtb_Merge1_l > 0.0F);

    /* Chart: '<S18>/TMMC_Stateflow' incorporates:
     *  SubSystem: '<S3>/TMMC_ShiftState'
     */
    /* S-Function (fcgen): '<S17>/FcnCall_Generator' incorporates:
     *  SubSystem: '<S17>/TransShiftStateAction'
     */
    /* Outputs for IfAction SubSystem: '<S231>/TorquePhase' incorporates:
     *  ActionPort: '<S242>/Action Port'
     */
    /* Outputs for IfAction SubSystem: '<S242>/OffgVTVR_Ramping' incorporates:
     *  ActionPort: '<S299>/Action Port'
     */
    /* Outputs for IfAction SubSystem: '<S13>/TMMC_SpdB4TrqPhs' incorporates:
     *  ActionPort: '<S55>/Action Port'
     */
    /* If: '<S231>/If' incorporates:
     *  If: '<S13>/If'
     *  If: '<S242>/If1'
     *  Product: '<S299>/Product1'
     *  Product: '<S54>/Product'
     *  Product: '<S93>/Product5'
     *  Switch: '<S302>/Switch2'
     */
    tmpRead_0 = TMMR_ac_B.Merge1_k * TMMR_ac_B.Merge2_m;

    /* End of Outputs for SubSystem: '<S13>/TMMC_SpdB4TrqPhs' */
    /* End of Outputs for SubSystem: '<S242>/OffgVTVR_Ramping' */
    /* End of Outputs for SubSystem: '<S231>/TorquePhase' */
    /* End of Outputs for S-Function (fcgen): '<S17>/FcnCall_Generator' */

    /* Logic: '<S54>/Logical' incorporates:
     *  Abs: '<S54>/Abs'
     *  Constant: '<S82>/Calib'
     *  Product: '<S54>/Product'
     *  RelationalOperator: '<S54>/Comparison2'
     *  Sum: '<S54>/Sum1'
     *  UnitDelay: '<S54>/Unit Delay'
     */
    VeTMMR_b_ShiftTypeAbort = ((fabsf(tmpRead_0 - TMMR_ac_DW.UnitDelay_DSTATE_aw)
        >= KeTMMR_r_ShiftTypeAbortGrRatThrsh) && (VeTMMR_b_ShiftInPrgsActv));

    /* Outputs for Atomic SubSystem: '<S51>/Signal Latch On With Reset' */
    /* Logic: '<S74>/OR1' incorporates:
     *  Constant: '<S73>/Calib'
     *  Logic: '<S51>/Logical'
     *  Logic: '<S51>/Logical1'
     *  Logic: '<S74>/NOT'
     *  Logic: '<S74>/OR'
     *  RelationalOperator: '<S51>/Comparison1'
     *  UnitDelay: '<S74>/Unit Delay'
     */
    TMMR_ac_DW.UnitDelay_DSTATE_co = (((VeTMMC_M_ClchTorqOncRaw >=
        KeTMMR_M_TcOncMin4TBS) && (VeTMMR_b_TrqB4SpdRaw)) || (((!rtb_OR1_e4) &&
        (!VeTMMR_b_ShiftTypeAbort)) && (TMMR_ac_DW.UnitDelay_DSTATE_co)));

    /* End of Outputs for SubSystem: '<S51>/Signal Latch On With Reset' */

    /* Switch: '<S51>/Switch1' */
    VeTMMR_b_TrqB4SpdLatched = ((TMMR_ac_DW.UnitDelay_DSTATE_co) ||
        (VeTMMR_b_TrqB4SpdRaw));

    /* Logic: '<S13>/Logical' */
    VeTMMR_b_TrqB4SpdPhsActv = ((VeTMMR_b_TrqB4SpdLatched) &&
        (VeTMMR_b_ShiftInPrgsActv));

    /* Outputs for Atomic SubSystem: '<S13>/EdgeRising1' */
    /* Logic: '<S29>/AND' incorporates:
     *  Logic: '<S29>/OR1'
     *  UnitDelay: '<S29>/Unit Delay'
     */
    rtb_AND_c = ((VeTMMR_b_TrqB4SpdPhsActv) && (!TMMR_ac_DW.UnitDelay_DSTATE_dd));

    /* Update for UnitDelay: '<S29>/Unit Delay' */
    TMMR_ac_DW.UnitDelay_DSTATE_dd = VeTMMR_b_TrqB4SpdPhsActv;

    /* End of Outputs for SubSystem: '<S13>/EdgeRising1' */

    /* Logic: '<S13>/Logical4' incorporates:
     *  Logic: '<S13>/Logical3'
     */
    VeTMMR_b_SpdB4TrqPhsActv = ((!VeTMMR_b_TrqB4SpdPhsActv) &&
        (VeTMMR_b_ShiftInPrgsActv));

    /* Outputs for Atomic SubSystem: '<S13>/EdgeRising2' */
    /* Logic: '<S30>/AND' incorporates:
     *  Logic: '<S30>/OR1'
     *  UnitDelay: '<S30>/Unit Delay'
     */
    rtb_OR1_e4 = ((VeTMMR_b_SpdB4TrqPhsActv) && (!TMMR_ac_DW.UnitDelay_DSTATE_l));

    /* Update for UnitDelay: '<S30>/Unit Delay' */
    TMMR_ac_DW.UnitDelay_DSTATE_l = VeTMMR_b_SpdB4TrqPhsActv;

    /* End of Outputs for SubSystem: '<S13>/EdgeRising2' */

    /* Logic: '<S13>/Logical1' incorporates:
     *  Constant: '<S32>/Constant'
     *  Constant: '<S33>/Constant'
     *  Constant: '<S34>/Constant'
     *  Constant: '<S35>/Constant'
     *  RelationalOperator: '<S13>/Comparison2'
     *  RelationalOperator: '<S13>/Comparison3'
     *  RelationalOperator: '<S13>/Comparison5'
     *  RelationalOperator: '<S13>/Comparison6'
     */
    VeTMMR_b_NeutDsrdActv = ((((((uint32)VeTMMR_e_ShiftTypeIdx) ==
        CeHSER_e_NeutDsrd) || (((uint32)
        TMMR_ac_B.TmpSignalConversionAtVeHSER_e_RngStOutpo) ==
        CeHSER_e_ShiftToNeutEngOn)) || (((uint32)
        TMMR_ac_B.TmpSignalConversionAtVeHSER_e_RngStOutpo) ==
        CeHSER_e_G2ToG3_PwrOnTorqPhs)) || (((uint32)
        TMMR_ac_B.TmpSignalConversionAtVeHSER_e_RngStOutpo) ==
        CeHSER_e_G4ToG3_PwrOffTorqPhs));

    /* Outputs for Atomic SubSystem: '<S13>/TMMC_ChSlipSpdSgn' */
    /* Outputs for Atomic SubSystem: '<S47>/Protected Division' */
    /* Switch: '<S63>/Switch1' incorporates:
     *  Constant: '<S63>/Constant Value'
     *  Constant: '<S63>/Constant Value1'
     *  Constant: '<S63>/Constant Value2'
     *  Constant: '<S63>/Constant Value3'
     *  Logic: '<S63>/AND'
     *  RelationalOperator: '<S63>/Greater Than or Equal '
     *  RelationalOperator: '<S63>/Greater Than or Equal 1'
     *  RelationalOperator: '<S63>/Not Equal'
     *  RelationalOperator: '<S63>/Not Equal1'
     *  Switch: '<S63>/Switch2'
     *  Switch: '<S63>/Switch3'
     */
    if ((TMMR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo != 0.0F) &&
            (TMMR_ac_B.Merge3 != 0.0F))
    {
        /* Switch: '<S63>/Switch1' incorporates:
         *  Product: '<S63>/Division'
         */
        rtb_Merge2 = TMMR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo /
            TMMR_ac_B.Merge3;
    }
    else if (TMMR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo > 0.0F)
    {
        /* Switch: '<S63>/Switch2' incorporates:
         *  Constant: '<S63>/MAXFLOAT'
         *  Switch: '<S63>/Switch1'
         */
        rtb_Merge2 = 3.402823466E+38F;
    }
    else if (TMMR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo < 0.0F)
    {
        /* Switch: '<S63>/Switch3' incorporates:
         *  Constant: '<S63>/MINFLOAT'
         *  Switch: '<S63>/Switch1'
         *  Switch: '<S63>/Switch2'
         */
        rtb_Merge2 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S63>/Switch1' incorporates:
         *  Constant: '<S63>/Constant Value4'
         *  Switch: '<S63>/Switch2'
         *  Switch: '<S63>/Switch3'
         */
        rtb_Merge2 = 0.0F;
    }

    /* End of Switch: '<S63>/Switch1' */
    /* End of Outputs for SubSystem: '<S47>/Protected Division' */

    /* Sum: '<S47>/Sum1' incorporates:
     *  Constant: '<S62>/Calib'
     *  Product: '<S47>/Product'
     */
    VeTMMR_n_NCOncSlipSpd = rtb_Merge2 - ((((float32)
        Rte_Prm_KeTSXR_r_FDRf_KeTSXR_r_FDRf()) *
        TMMR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd) * TMMR_ac_B.Merge4_i);

    /* Outputs for Atomic SubSystem: '<S47>/Hysteresis' */
    /* Switch: '<S59>/Switch1' incorporates:
     *  Constant: '<S59>/Constant Value'
     *  Constant: '<S60>/Calib'
     *  Constant: '<S61>/Calib'
     *  RelationalOperator: '<S59>/Greater  Than'
     *  RelationalOperator: '<S59>/Greater  Than1'
     *  UnitDelay: '<S59>/Unit Delay'
     */
    if (VeTMMR_n_NCOncSlipSpd > KeTMMR_n_NCOncSgnRSP)
    {
        TMMR_ac_DW.UnitDelay_DSTATE_pl = true;
    }
    else
    {
        TMMR_ac_DW.UnitDelay_DSTATE_pl = ((VeTMMR_n_NCOncSlipSpd >=
            KeTMMR_n_NCOncSgnLSP) && (TMMR_ac_DW.UnitDelay_DSTATE_pl));
    }

    /* End of Switch: '<S59>/Switch1' */
    /* End of Outputs for SubSystem: '<S47>/Hysteresis' */

    /* Switch: '<S47>/Switch' incorporates:
     *  UnitDelay: '<S59>/Unit Delay'
     */
    if (TMMR_ac_DW.UnitDelay_DSTATE_pl)
    {
        /* Switch: '<S47>/Switch' incorporates:
         *  Constant: '<S47>/Constant Value'
         */
        VeTMMR_n_NCOncSgnCalc = 1.0F;
    }
    else
    {
        /* Switch: '<S47>/Switch' incorporates:
         *  Constant: '<S47>/Constant Value1'
         */
        VeTMMR_n_NCOncSgnCalc = -1.0F;
    }

    /* End of Switch: '<S47>/Switch' */
    /* End of Outputs for SubSystem: '<S13>/TMMC_ChSlipSpdSgn' */

    /* If: '<S48>/If' incorporates:
     *  Constant: '<S64>/Constant'
     *  Merge: '<S3>/Merge9'
     *  RelationalOperator: '<S48>/Comparison4'
     */
    if (((uint32)VeTMMR_e_ClchTypeOffg) == CeTMMR_e_ClchZeroTorq)
    {
        /* Outputs for IfAction SubSystem: '<S48>/M_ClchTrqOffg_Zero' incorporates:
         *  ActionPort: '<S66>/Action Port'
         */
        TMMR_ac_ClchTrqOffg_Zero((&(VeTMMR_M_ClchTorqOffgRaw)));

        /* End of Outputs for SubSystem: '<S48>/M_ClchTrqOffg_Zero' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S48>/M_ClchTrqOffg' incorporates:
         *  ActionPort: '<S65>/Action Port'
         */
        /* Merge: '<S48>/Merge' incorporates:
         *  Selector: '<S65>/Selector'
         */
        VeTMMR_M_ClchTorqOffgRaw = VaTMMR_M_ClchTorq[(TMMR_ac_B.Merge11)];

        /* End of Outputs for SubSystem: '<S48>/M_ClchTrqOffg' */
    }

    /* End of If: '<S48>/If' */

    /* If: '<S13>/If' */
    if (VeTMMR_b_TrqB4SpdPhsActv)
    {
        TMMR_ac_DW.If_ActiveSubsystem_l = 0;

        /* Outputs for IfAction SubSystem: '<S13>/TMMC_TrqB4SpeedPhs' incorporates:
         *  ActionPort: '<S57>/Action Port'
         */
        /* Product: '<S57>/Product' */
        VeTMMR_M_ClchTorqOncTgtRaw = rtb_Merge1_l;

        /* Outputs for Atomic SubSystem: '<S57>/GradientLimiter1' */
        /* Switch: '<S170>/Switch' incorporates:
         *  Logic: '<S57>/Logical3'
         *  RelationalOperator: '<S57>/Comparison7'
         */
        if ((VeTMMC_M_ClchTorqOncRaw < VeTMMR_M_ClchTorqOncTgtRaw) || rtb_AND_c)
        {
            /* Switch: '<S170>/Switch' incorporates:
             *  Constant: '<S175>/Calib'
             *  MinMax: '<S57>/MinMax1'
             */
            VeTMMR_M_ClchTorqOncTgtFilt_TB4S = fmaxf(VeTMMR_M_ClchTorqOncTgtRaw,
                KeTMMR_M_MinOncClchTrq);
        }
        else
        {
            /* Sum: '<S170>/Sum2' incorporates:
             *  Constant: '<S175>/Calib'
             *  MinMax: '<S57>/MinMax1'
             *  UnitDelay: '<S170>/Unit Delay'
             */
            rtb_Merge1_b = fmaxf(VeTMMR_M_ClchTorqOncTgtRaw,
                                 KeTMMR_M_MinOncClchTrq) -
                VeTMMR_M_ClchTorqOncTgtFilt_TB4S;

            /* Outputs for Atomic SubSystem: '<S170>/Limiter' */
            /* Switch: '<S183>/Switch1' incorporates:
             *  Constant: '<S57>/Constant Value'
             *  RelationalOperator: '<S183>/Relational Operator'
             */
            if (3.402823466E+38F < rtb_Merge1_b)
            {
                /* Switch: '<S183>/Switch1' */
                rtb_Merge1_b = 3.402823466E+38F;
            }

            /* End of Switch: '<S183>/Switch1' */

            /* Switch: '<S183>/Switch' incorporates:
             *  Constant: '<S174>/Calib'
             *  RelationalOperator: '<S183>/Relational Operator1'
             */
            if (rtb_Merge1_b <= KeTMMR_M_DwnGradTorqOnc)
            {
                rtb_Merge1_b = KeTMMR_M_DwnGradTorqOnc;
            }

            /* End of Switch: '<S183>/Switch' */
            /* End of Outputs for SubSystem: '<S170>/Limiter' */

            /* Switch: '<S170>/Switch' incorporates:
             *  Sum: '<S170>/Sum3'
             *  UnitDelay: '<S170>/Unit Delay'
             */
            VeTMMR_M_ClchTorqOncTgtFilt_TB4S = rtb_Merge1_b +
                VeTMMR_M_ClchTorqOncTgtFilt_TB4S;
        }

        /* End of Switch: '<S170>/Switch' */
        /* End of Outputs for SubSystem: '<S57>/GradientLimiter1' */

        /* MinMax: '<S57>/MinMax' */
        VeTMMR_M_ClchTorqOncLim_TB4S = fminf(VeTMMC_M_ClchTorqOncRaw,
            VeTMMR_M_ClchTorqOncTgtFilt_TB4S);

        /* RelationalOperator: '<S57>/Comparison1' incorporates:
         *  Constant: '<S173>/Calib'
         */
        VeTMMR_b_EndOfTorqPhsPrdt_TB4S = (VeTMMR_M_ClchTorqOffgRaw <=
            KeTMMR_M_ClchTorqOffRawThrsh);

        /* Outputs for Atomic SubSystem: '<S57>/EdgeRising' */
        /* Switch: '<S182>/Switch1' */
        if (rtb_AND_c)
        {
            /* Logic: '<S57>/Logical2' incorporates:
             *  Constant: '<S163>/TRUE Constant1'
             */
            rtb_OR1_e4 = true;
        }
        else
        {
            /* Logic: '<S57>/Logical2' incorporates:
             *  UnitDelay: '<S182>/Unit Delay'
             */
            rtb_OR1_e4 = TMMR_ac_DW.UnitDelay_DSTATE_n0;
        }

        /* End of Switch: '<S182>/Switch1' */

        /* Switch: '<S182>/Switch3' incorporates:
         *  UnitDelay: '<S182>/Unit Delay'
         */
        TMMR_ac_DW.UnitDelay_DSTATE_n0 = (rtb_AND_c ||
            (VeTMMR_b_EndOfTorqPhsPrdt_TB4S));

        /* Logic: '<S57>/Logical2' incorporates:
         *  Logic: '<S163>/AND'
         *  Logic: '<S163>/OR1'
         */
        rtb_OR1_e4 = (((VeTMMR_b_EndOfTorqPhsPrdt_TB4S) && (!rtb_OR1_e4)) ||
                      rtb_AND_c);

        /* End of Outputs for SubSystem: '<S57>/EdgeRising' */

        /* Switch: '<S181>/Switch2' incorporates:
         *  Switch: '<S181>/Switch3'
         *  UnitDelay: '<S181>/Unit Delay'
         */
        if (rtb_OR1_e4)
        {
            TMMR_ac_DW.UnitDelay_DSTATE_ok = VeTMMR_M_ClchTorqOncLim_TB4S;

            /* Switch: '<S181>/Switch1' incorporates:
             *  Constant: '<S181>/Constant Value4'
             *  UnitDelay: '<S181>/Unit Delay'
             *  UnitDelay: '<S181>/Unit Delay3'
             */
            TMMR_ac_DW.UnitDelay3_DSTATE_p = 0.0F;
        }
        else
        {
            /* MinMax: '<S181>/Maximum' incorporates:
             *  Constant: '<S172>/Calib'
             *  Constant: '<S177>/Calib'
             */
            rtb_Merge1_b = fmaxf(HeTMMR_t_MedTED_dT, KeTMMR_t_ClchTorqOncBlnd);

            /* Outputs for Atomic SubSystem: '<S181>/Protected Division' */
            /* Switch: '<S184>/Switch1' incorporates:
             *  Constant: '<S172>/Calib'
             *  Constant: '<S184>/Constant Value'
             *  Constant: '<S184>/Constant Value1'
             *  Constant: '<S184>/Constant Value2'
             *  Constant: '<S184>/Constant Value3'
             *  Logic: '<S184>/AND'
             *  RelationalOperator: '<S184>/Greater Than or Equal '
             *  RelationalOperator: '<S184>/Greater Than or Equal 1'
             *  RelationalOperator: '<S184>/Not Equal'
             *  RelationalOperator: '<S184>/Not Equal1'
             *  Switch: '<S184>/Switch2'
             *  Switch: '<S184>/Switch3'
             */
            if ((HeTMMR_t_MedTED_dT != 0.0F) && (rtb_Merge1_b != 0.0F))
            {
                /* Switch: '<S184>/Switch1' incorporates:
                 *  Product: '<S184>/Division'
                 */
                rtb_Merge1_b = HeTMMR_t_MedTED_dT / rtb_Merge1_b;
            }
            else if (HeTMMR_t_MedTED_dT > 0.0F)
            {
                /* Switch: '<S184>/Switch2' incorporates:
                 *  Constant: '<S184>/MAXFLOAT'
                 *  Switch: '<S184>/Switch1'
                 */
                rtb_Merge1_b = 3.402823466E+38F;
            }
            else if (HeTMMR_t_MedTED_dT < 0.0F)
            {
                /* Switch: '<S184>/Switch3' incorporates:
                 *  Constant: '<S184>/MINFLOAT'
                 *  Switch: '<S184>/Switch1'
                 *  Switch: '<S184>/Switch2'
                 */
                rtb_Merge1_b = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S184>/Switch1' incorporates:
                 *  Constant: '<S184>/Constant Value4'
                 *  Switch: '<S184>/Switch2'
                 *  Switch: '<S184>/Switch3'
                 */
                rtb_Merge1_b = 0.0F;
            }

            /* End of Switch: '<S184>/Switch1' */
            /* End of Outputs for SubSystem: '<S181>/Protected Division' */

            /* Switch: '<S181>/Switch1' incorporates:
             *  Constant: '<S181>/Constant Value2'
             *  Constant: '<S181>/Constant Value3'
             *  Logic: '<S181>/Logical'
             *  Logic: '<S181>/Logical2'
             *  MinMax: '<S181>/MinMax'
             *  Sum: '<S181>/Summation1'
             *  UnitDelay: '<S181>/Unit Delay1'
             *  UnitDelay: '<S181>/Unit Delay3'
             */
            if ((!TMMR_ac_DW.UnitDelay1_DSTATE_o) || rtb_AND_c)
            {
                TMMR_ac_DW.UnitDelay3_DSTATE_p = 1.0F;
            }

            TMMR_ac_DW.UnitDelay3_DSTATE_p = fminf
                (TMMR_ac_DW.UnitDelay3_DSTATE_p + rtb_Merge1_b, 1.0F);
        }

        /* End of Switch: '<S181>/Switch2' */

        /* Switch: '<S57>/Switch2' */
        if (VeTMMR_b_EndOfTorqPhsPrdt_TB4S)
        {
            rtb_Merge1_b = VeTMMR_M_ClchTorqOncTgtFilt_TB4S;
        }
        else
        {
            rtb_Merge1_b = VeTMMR_M_ClchTorqOncLim_TB4S;
        }

        /* End of Switch: '<S57>/Switch2' */

        /* Sum: '<S181>/Summation' incorporates:
         *  Constant: '<S181>/Constant Value'
         *  Product: '<S181>/Multiplication'
         *  Product: '<S181>/Multiplication3'
         *  Sum: '<S181>/Subtraction'
         *  UnitDelay: '<S181>/Unit Delay'
         *  UnitDelay: '<S181>/Unit Delay3'
         */
        VeTMMR_M_ClchTorqOncLimAtTorqPhs_TB4S = ((1.0F -
            TMMR_ac_DW.UnitDelay3_DSTATE_p) * TMMR_ac_DW.UnitDelay_DSTATE_ok) +
            (TMMR_ac_DW.UnitDelay3_DSTATE_p * rtb_Merge1_b);

        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S165>/Constant'
         *  Constant: '<S167>/Constant'
         *  Constant: '<S169>/Constant'
         *  Constant: '<S171>/Calib'
         *  DataStoreRead: '<S57>/Data Store Read'
         *  Logic: '<S57>/Logical'
         *  RelationalOperator: '<S57>/Comparison3'
         *  RelationalOperator: '<S57>/Comparison5'
         *  RelationalOperator: '<S57>/Comparison8'
         */
        if (HeTMMR_b_UseTransShiftStat)
        {
            rtb_Logical_dz = (((uint32)VeTMMR_e_TransShiftStat_DS) ==
                              CeTMMR_e_SpeedPhase);
        }
        else
        {
            rtb_Logical_dz = ((((uint32)
                                TMMR_ac_B.TmpSignalConversionAtVeHSER_e_HTDR_State)
                               == CeHSER_e_NeutC2C_State) || (((uint32)
                                TMMR_ac_B.TmpSignalConversionAtVeHSER_e_HTDR_State)
                               == CeHSER_e_M2_State));
        }

        /* End of Switch: '<S57>/Switch1' */

        /* Switch: '<S57>/Switch' incorporates:
         *  Constant: '<S164>/Constant'
         *  Constant: '<S168>/Constant'
         *  Logic: '<S57>/Logical1'
         *  Logic: '<S57>/Logical4'
         *  RelationalOperator: '<S57>/Comparison4'
         *  RelationalOperator: '<S57>/Comparison6'
         */
        if (((((uint32)TMMR_ac_B.TmpSignalConversionAtVeTTQR_e_TCMTrqCntr) ==
                CeTINR_e_TrqDec) || (((uint32)
                TMMR_ac_B.TmpSignalConversionAtVeTTQR_e_TCMTrqCntr) ==
                CeTINR_e_TrqInc)) || rtb_Logical_dz)
        {
            /* Switch: '<S57>/Switch' */
            TMMR_ac_B.Merge1_kj = VeTMMR_M_ClchTorqOncTgtFilt_TB4S;
        }
        else
        {
            /* Switch: '<S57>/Switch' */
            TMMR_ac_B.Merge1_kj = VeTMMR_M_ClchTorqOncLimAtTorqPhs_TB4S;
        }

        /* End of Switch: '<S57>/Switch' */

        /* Product: '<S57>/Product2' */
        rtb_Merge1_b = TMMR_ac_B.Merge1_kj * VeTMMR_n_NCOncSgn;

        /* Outputs for Atomic SubSystem: '<S57>/Protected Division' */
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
        if ((rtb_Merge1_b != 0.0F) && (TMMR_ac_B.Merge3 != 0.0F))
        {
            /* Switch: '<S178>/Switch1' incorporates:
             *  Product: '<S178>/Division'
             */
            rtb_Merge1_b /= TMMR_ac_B.Merge3;
        }
        else if (rtb_Merge1_b > 0.0F)
        {
            /* Switch: '<S178>/Switch2' incorporates:
             *  Constant: '<S178>/MAXFLOAT'
             *  Switch: '<S178>/Switch1'
             */
            rtb_Merge1_b = 3.402823466E+38F;
        }
        else if (rtb_Merge1_b < 0.0F)
        {
            /* Switch: '<S178>/Switch3' incorporates:
             *  Constant: '<S178>/MINFLOAT'
             *  Switch: '<S178>/Switch1'
             *  Switch: '<S178>/Switch2'
             */
            rtb_Merge1_b = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S178>/Switch1' incorporates:
             *  Constant: '<S178>/Constant Value4'
             *  Switch: '<S178>/Switch2'
             *  Switch: '<S178>/Switch3'
             */
            rtb_Merge1_b = 0.0F;
        }

        /* End of Switch: '<S178>/Switch1' */
        /* End of Outputs for SubSystem: '<S57>/Protected Division' */

        /* Product: '<S57>/Product3' incorporates:
         *  Sum: '<S57>/Sum1'
         */
        VeTMMR_M_ClchTorqOffgCalc_TB4S = (TMMR_ac_B.Gain_kr - rtb_Merge1_b) *
            TMMR_ac_B.Merge1_k;

        /* Merge: '<S13>/Merge3' incorporates:
         *  Abs: '<S57>/Abs'
         */
        TMMR_ac_B.Merge3_j = fabsf(VeTMMR_M_ClchTorqOffgCalc_TB4S);

        /* Merge: '<S13>/Merge4' incorporates:
         *  Constant: '<S176>/Calib'
         *  RelationalOperator: '<S57>/Comparison2'
         *  Sum: '<S57>/Sum2'
         */
        rtb_OR1_e4 = ((VeTMMR_M_ClchTorqOncTgtFilt_TB4S -
                       VeTMMC_M_ClchTorqOncRaw) < KeTMMR_M_ThrshTrqTrnfrCmpltd);

        /* Merge: '<S13>/Merge2' incorporates:
         *  Constant: '<S166>/Constant'
         *  SignalConversion generated from: '<S57>/TransShftTrqSpdPhs'
         */
        TMMR_ac_B.Merge2_l = CeTMMR_e_TrqBeforeSpdPhase;

        /* End of Outputs for SubSystem: '<S13>/TMMC_TrqB4SpeedPhs' */
    }
    else if (VeTMMR_b_SpdB4TrqPhsActv)
    {
        TMMR_ac_DW.If_ActiveSubsystem_l = 1;

        /* Outputs for IfAction SubSystem: '<S13>/TMMC_SpdB4TrqPhs' incorporates:
         *  ActionPort: '<S55>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S93>/Protected Division2' */
        /* Switch: '<S152>/Switch1' incorporates:
         *  Constant: '<S150>/Calib'
         *  Constant: '<S152>/Constant Value'
         *  Constant: '<S152>/Constant Value1'
         *  Constant: '<S152>/Constant Value2'
         *  Constant: '<S152>/Constant Value3'
         *  Logic: '<S152>/AND'
         *  RelationalOperator: '<S152>/Greater Than or Equal '
         *  RelationalOperator: '<S152>/Greater Than or Equal 1'
         *  RelationalOperator: '<S152>/Not Equal'
         *  RelationalOperator: '<S152>/Not Equal1'
         *  Switch: '<S152>/Switch2'
         *  Switch: '<S152>/Switch3'
         */
        if ((TMMR_ac_B.TmpSignalConversionAtVeTSXR_r_TturbFromT != 0.0F) &&
                (((float32)Rte_Prm_KeTSXR_r_FDRf_KeTSXR_r_FDRf()) != 0.0F))
        {
            /* Switch: '<S152>/Switch1' incorporates:
             *  Product: '<S152>/Division'
             */
            rtb_Switch1_a = TMMR_ac_B.TmpSignalConversionAtVeTSXR_r_TturbFromT /
                ((float32)Rte_Prm_KeTSXR_r_FDRf_KeTSXR_r_FDRf());
        }
        else if (TMMR_ac_B.TmpSignalConversionAtVeTSXR_r_TturbFromT > 0.0F)
        {
            /* Switch: '<S152>/Switch2' incorporates:
             *  Constant: '<S152>/MAXFLOAT'
             *  Switch: '<S152>/Switch1'
             */
            rtb_Switch1_a = 3.402823466E+38F;
        }
        else if (TMMR_ac_B.TmpSignalConversionAtVeTSXR_r_TturbFromT < 0.0F)
        {
            /* Switch: '<S152>/Switch3' incorporates:
             *  Constant: '<S152>/MINFLOAT'
             *  Switch: '<S152>/Switch1'
             *  Switch: '<S152>/Switch2'
             */
            rtb_Switch1_a = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S152>/Switch1' incorporates:
             *  Constant: '<S152>/Constant Value4'
             *  Switch: '<S152>/Switch2'
             *  Switch: '<S152>/Switch3'
             */
            rtb_Switch1_a = 0.0F;
        }

        /* End of Switch: '<S152>/Switch1' */
        /* End of Outputs for SubSystem: '<S93>/Protected Division2' */

        /* Sum: '<S93>/Sum3' */
        rtb_Merge1_l = rtb_Switch1_a - tmpRead_0;

        /* Product: '<S93>/Product' incorporates:
         *  Product: '<S130>/Product'
         */
        rtb_Switch1_a = TMMR_ac_B.Merge3 * TMMR_ac_B.Merge4_i;

        /* Sum: '<S93>/Sum4' incorporates:
         *  Product: '<S93>/Product'
         */
        rtb_Merge2 = rtb_Switch1_a - tmpRead_0;

        /* Outputs for Atomic SubSystem: '<S93>/Protected Division' */
        /* Switch: '<S151>/Switch1' incorporates:
         *  Constant: '<S151>/Constant Value'
         *  Constant: '<S151>/Constant Value1'
         *  Constant: '<S151>/Constant Value2'
         *  Constant: '<S151>/Constant Value3'
         *  Logic: '<S151>/AND'
         *  RelationalOperator: '<S151>/Greater Than or Equal '
         *  RelationalOperator: '<S151>/Greater Than or Equal 1'
         *  RelationalOperator: '<S151>/Not Equal'
         *  RelationalOperator: '<S151>/Not Equal1'
         *  Switch: '<S151>/Switch2'
         *  Switch: '<S151>/Switch3'
         */
        if ((rtb_Merge1_l != 0.0F) && (rtb_Merge2 != 0.0F))
        {
            /* Switch: '<S151>/Switch1' incorporates:
             *  Product: '<S151>/Division'
             */
            VeTMMR_r_ShftPctRatio_SB4T = rtb_Merge1_l / rtb_Merge2;
        }
        else if (rtb_Merge1_l > 0.0F)
        {
            /* Switch: '<S151>/Switch2' incorporates:
             *  Constant: '<S151>/MAXFLOAT'
             *  Switch: '<S151>/Switch1'
             */
            VeTMMR_r_ShftPctRatio_SB4T = 3.402823466E+38F;
        }
        else if (rtb_Merge1_l < 0.0F)
        {
            /* Switch: '<S151>/Switch3' incorporates:
             *  Constant: '<S151>/MINFLOAT'
             *  Switch: '<S151>/Switch1'
             *  Switch: '<S151>/Switch2'
             */
            VeTMMR_r_ShftPctRatio_SB4T = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S151>/Switch1' incorporates:
             *  Constant: '<S151>/Constant Value4'
             *  Switch: '<S151>/Switch2'
             *  Switch: '<S151>/Switch3'
             */
            VeTMMR_r_ShftPctRatio_SB4T = 0.0F;
        }

        /* End of Switch: '<S151>/Switch1' */
        /* End of Outputs for SubSystem: '<S93>/Protected Division' */

        /* Switch: '<S97>/Switch1' incorporates:
         *  Constant: '<S109>/Constant'
         *  Constant: '<S110>/Constant'
         *  Constant: '<S111>/Constant'
         *  Constant: '<S112>/Calib'
         *  DataStoreRead: '<S97>/Data Store Read'
         *  Logic: '<S97>/Logical'
         *  RelationalOperator: '<S97>/Comparison6'
         *  RelationalOperator: '<S97>/Comparison7'
         *  RelationalOperator: '<S97>/Comparison8'
         */
        if (HeTMMR_b_UseTransShiftStat)
        {
            rtb_Logical_dz = (((uint32)VeTMMR_e_TransShiftStat_DS) !=
                              CeTMMR_e_SpeedPhase);
        }
        else
        {
            rtb_Logical_dz = ((((uint32)
                                TMMR_ac_B.TmpSignalConversionAtVeHSER_e_HTDR_State)
                               != CeHSER_e_NeutC2C_State) && (((uint32)
                                TMMR_ac_B.TmpSignalConversionAtVeHSER_e_HTDR_State)
                               != CeHSER_e_M2_State));
        }

        /* End of Switch: '<S97>/Switch1' */

        /* Logic: '<S97>/Logical2' incorporates:
         *  Constant: '<S113>/Calib'
         *  RelationalOperator: '<S97>/Comparison1'
         */
        VeTMMR_b_EndOfRatioChg_SB4T = (rtb_Logical_dz &&
            (VeTMMR_r_ShftPctRatio_SB4T >= KeTMMR_r_ThrshldSpdPhsMddl));

        /* Outputs for Atomic SubSystem: '<S94>/EdgeRising' */
        /* Switch: '<S105>/Switch1' */
        if (rtb_OR1_e4)
        {
            /* Switch: '<S124>/Switch1' incorporates:
             *  Constant: '<S100>/TRUE Constant1'
             */
            rtb_Switch1_cm = true;
        }
        else
        {
            /* Switch: '<S124>/Switch1' incorporates:
             *  UnitDelay: '<S105>/Unit Delay'
             */
            rtb_Switch1_cm = TMMR_ac_DW.UnitDelay_DSTATE_ctd;
        }

        /* End of Switch: '<S105>/Switch1' */

        /* Switch: '<S105>/Switch3' incorporates:
         *  UnitDelay: '<S105>/Unit Delay'
         */
        TMMR_ac_DW.UnitDelay_DSTATE_ctd = (rtb_OR1_e4 ||
            (VeTMMR_b_EndOfRatioChg_SB4T));

        /* End of Outputs for SubSystem: '<S94>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S13>/TMMC_SpdB4TrqPhs' */

        /* Switch: '<S56>/Switch2' incorporates:
         *  Constant: '<S154>/Calib'
         */
        if (!HeTMMR_b_EnblEngInert)
        {
            rtb_Merge1_b = TMMR_ac_B.Merge5_l;
        }

        /* End of Switch: '<S56>/Switch2' */

        /* Outputs for IfAction SubSystem: '<S13>/TMMC_SpdB4TrqPhs' incorporates:
         *  ActionPort: '<S55>/Action Port'
         */
        /* Sum: '<S96>/Sum5' incorporates:
         *  Lookup_n-D: '<S108>/Vector'
         *  Product: '<S96>/Product6'
         *  Switch: '<S151>/Switch1'
         */
        VeTMMR_M_Tti_w_Inertia = TMMR_ac_B.Gain_kr - ((VeTMMR_dn_NturbDot *
            rtb_Merge1_b) * look1_iflf_binlca_16a(VeTMMR_r_ShftPctRatio_SB4T, ((
            const float32 *)&(KxTMMR_k_TransIntrFactor[0])), ((const float32 *)
            &(KtTMMR_k_TransIntrFactor[0])), 7U));

        /* Product: '<S96>/Product2' */
        VeTMMR_M_ClchTorqOffgTgtRaw = (VeTMMR_M_Tti_w_Inertia *
            TMMR_ac_B.Merge1_k) * VeTMMR_n_NCOffgSgn;

        /* Abs: '<S95>/Abs3' */
        VeTMMR_M_ClchTorqOffgTgtSpdPhs_SB4T = fabsf(VeTMMR_M_ClchTorqOffgTgtRaw);

        /* Outputs for Atomic SubSystem: '<S94>/EdgeRising' */
        /* Switch: '<S103>/Switch2' incorporates:
         *  Logic: '<S100>/AND'
         *  Logic: '<S100>/OR1'
         *  Switch: '<S103>/Switch3'
         */
        if ((VeTMMR_b_EndOfRatioChg_SB4T) && (!rtb_Switch1_cm))
        {
            /* Switch: '<S104>/Switch1' */
            if (rtb_OR1_e4)
            {
                /* UnitDelay: '<S103>/Unit Delay' incorporates:
                 *  Switch: '<S104>/Switch1'
                 */
                TMMR_ac_DW.UnitDelay_DSTATE_k =
                    VeTMMR_M_ClchTorqOffgTgtSpdPhs_SB4T;
            }
            else
            {
                /* UnitDelay: '<S103>/Unit Delay' incorporates:
                 *  Switch: '<S104>/Switch1'
                 *  UnitDelay: '<S104>/Unit Delay'
                 */
                TMMR_ac_DW.UnitDelay_DSTATE_k = TMMR_ac_DW.UnitDelay_DSTATE_ii;
            }

            /* End of Switch: '<S104>/Switch1' */

            /* Switch: '<S103>/Switch1' incorporates:
             *  Constant: '<S103>/Constant Value4'
             *  UnitDelay: '<S103>/Unit Delay3'
             */
            TMMR_ac_DW.UnitDelay3_DSTATE_o = 0.0F;
        }
        else
        {
            /* MinMax: '<S103>/Maximum' incorporates:
             *  Constant: '<S101>/Calib'
             *  Constant: '<S102>/Calib'
             */
            rtb_Merge1_b = fmaxf(HeTMMR_t_MedTED_dT, KeTMMR_t_ClchTorqOffgBlnd);

            /* Outputs for Atomic SubSystem: '<S103>/Protected Division' */
            /* Switch: '<S106>/Switch1' incorporates:
             *  Constant: '<S101>/Calib'
             *  Constant: '<S106>/Constant Value'
             *  Constant: '<S106>/Constant Value1'
             *  Constant: '<S106>/Constant Value2'
             *  Constant: '<S106>/Constant Value3'
             *  Logic: '<S106>/AND'
             *  RelationalOperator: '<S106>/Greater Than or Equal '
             *  RelationalOperator: '<S106>/Greater Than or Equal 1'
             *  RelationalOperator: '<S106>/Not Equal'
             *  RelationalOperator: '<S106>/Not Equal1'
             *  Switch: '<S106>/Switch2'
             *  Switch: '<S106>/Switch3'
             */
            if ((HeTMMR_t_MedTED_dT != 0.0F) && (rtb_Merge1_b != 0.0F))
            {
                /* Switch: '<S106>/Switch1' incorporates:
                 *  Product: '<S106>/Division'
                 */
                rtb_Merge1_b = HeTMMR_t_MedTED_dT / rtb_Merge1_b;
            }
            else if (HeTMMR_t_MedTED_dT > 0.0F)
            {
                /* Switch: '<S106>/Switch2' incorporates:
                 *  Constant: '<S106>/MAXFLOAT'
                 *  Switch: '<S106>/Switch1'
                 */
                rtb_Merge1_b = 3.402823466E+38F;
            }
            else if (HeTMMR_t_MedTED_dT < 0.0F)
            {
                /* Switch: '<S106>/Switch3' incorporates:
                 *  Constant: '<S106>/MINFLOAT'
                 *  Switch: '<S106>/Switch1'
                 *  Switch: '<S106>/Switch2'
                 */
                rtb_Merge1_b = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S106>/Switch1' incorporates:
                 *  Constant: '<S106>/Constant Value4'
                 *  Switch: '<S106>/Switch2'
                 *  Switch: '<S106>/Switch3'
                 */
                rtb_Merge1_b = 0.0F;
            }

            /* End of Switch: '<S106>/Switch1' */
            /* End of Outputs for SubSystem: '<S103>/Protected Division' */

            /* Switch: '<S103>/Switch1' incorporates:
             *  Constant: '<S103>/Constant Value2'
             *  Constant: '<S103>/Constant Value3'
             *  Logic: '<S103>/Logical'
             *  Logic: '<S103>/Logical2'
             *  MinMax: '<S103>/MinMax'
             *  Sum: '<S103>/Summation1'
             *  UnitDelay: '<S103>/Unit Delay1'
             *  UnitDelay: '<S103>/Unit Delay3'
             */
            if ((!TMMR_ac_DW.UnitDelay1_DSTATE_i) || rtb_OR1_e4)
            {
                TMMR_ac_DW.UnitDelay3_DSTATE_o = 1.0F;
            }

            TMMR_ac_DW.UnitDelay3_DSTATE_o = fminf
                (TMMR_ac_DW.UnitDelay3_DSTATE_o + rtb_Merge1_b, 1.0F);
        }

        /* End of Switch: '<S103>/Switch2' */
        /* End of Outputs for SubSystem: '<S94>/EdgeRising' */

        /* Sum: '<S103>/Summation' incorporates:
         *  Constant: '<S103>/Constant Value'
         *  Product: '<S103>/Multiplication'
         *  Sum: '<S103>/Subtraction'
         *  UnitDelay: '<S103>/Unit Delay'
         *  UnitDelay: '<S103>/Unit Delay3'
         */
        VeTMMR_M_ClchTorqOffgTgtTrqPhs_SB4T = (1.0F -
            TMMR_ac_DW.UnitDelay3_DSTATE_o) * TMMR_ac_DW.UnitDelay_DSTATE_k;

        /* Switch: '<S89>/Switch' */
        if (VeTMMR_b_EndOfRatioChg_SB4T)
        {
            /* Switch: '<S89>/Switch' */
            VeTMMR_M_ClchTorqOffgTgtFinal_SB4T =
                VeTMMR_M_ClchTorqOffgTgtTrqPhs_SB4T;
        }
        else
        {
            /* Switch: '<S89>/Switch' */
            VeTMMR_M_ClchTorqOffgTgtFinal_SB4T =
                VeTMMR_M_ClchTorqOffgTgtSpdPhs_SB4T;
        }

        /* End of Switch: '<S89>/Switch' */

        /* Switch: '<S104>/Switch3' incorporates:
         *  UnitDelay: '<S104>/Unit Delay'
         */
        if (rtb_OR1_e4)
        {
            TMMR_ac_DW.UnitDelay_DSTATE_ii = VeTMMR_M_ClchTorqOffgTgtSpdPhs_SB4T;
        }
        else
        {
            TMMR_ac_DW.UnitDelay_DSTATE_ii = VeTMMR_M_ClchTorqOffgTgtFinal_SB4T;
        }

        /* End of Switch: '<S104>/Switch3' */

        /* Outputs for Atomic SubSystem: '<S130>/Protected Division2' */
        /* Switch: '<S143>/Switch1' incorporates:
         *  Constant: '<S141>/Calib'
         *  Constant: '<S143>/Constant Value'
         *  Constant: '<S143>/Constant Value1'
         *  Constant: '<S143>/Constant Value2'
         *  Constant: '<S143>/Constant Value3'
         *  Logic: '<S143>/AND'
         *  RelationalOperator: '<S143>/Greater Than or Equal '
         *  RelationalOperator: '<S143>/Greater Than or Equal 1'
         *  RelationalOperator: '<S143>/Not Equal'
         *  RelationalOperator: '<S143>/Not Equal1'
         *  Switch: '<S143>/Switch2'
         *  Switch: '<S143>/Switch3'
         */
        if ((TMMR_ac_B.TmpSignalConversionAtVeTSXR_r_TturbFromT != 0.0F) &&
                (((float32)Rte_Prm_KeTSXR_r_FDRf_KeTSXR_r_FDRf()) != 0.0F))
        {
            /* Switch: '<S143>/Switch1' incorporates:
             *  Product: '<S143>/Division'
             */
            rtb_Merge1_b = TMMR_ac_B.TmpSignalConversionAtVeTSXR_r_TturbFromT /
                ((float32)Rte_Prm_KeTSXR_r_FDRf_KeTSXR_r_FDRf());
        }
        else if (TMMR_ac_B.TmpSignalConversionAtVeTSXR_r_TturbFromT > 0.0F)
        {
            /* Switch: '<S143>/Switch2' incorporates:
             *  Constant: '<S143>/MAXFLOAT'
             *  Switch: '<S143>/Switch1'
             */
            rtb_Merge1_b = 3.402823466E+38F;
        }
        else if (TMMR_ac_B.TmpSignalConversionAtVeTSXR_r_TturbFromT < 0.0F)
        {
            /* Switch: '<S143>/Switch3' incorporates:
             *  Constant: '<S143>/MINFLOAT'
             *  Switch: '<S143>/Switch1'
             *  Switch: '<S143>/Switch2'
             */
            rtb_Merge1_b = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S143>/Switch1' incorporates:
             *  Constant: '<S143>/Constant Value4'
             *  Switch: '<S143>/Switch2'
             *  Switch: '<S143>/Switch3'
             */
            rtb_Merge1_b = 0.0F;
        }

        /* End of Switch: '<S143>/Switch1' */
        /* End of Outputs for SubSystem: '<S130>/Protected Division2' */

        /* MinMax: '<S98>/MinMax1' incorporates:
         *  Product: '<S130>/Product5'
         */
        TMMR_ac_B.Merge3_j = TMMR_ac_B.TMMC_TrnsCoeffShft.Gain_e *
            TMMR_ac_B.TMMC_TrnsCoeffShft.Gain_f;

        /* Sum: '<S130>/Sum3' */
        rtb_Merge1_b -= TMMR_ac_B.Merge3_j;

        /* Sum: '<S130>/Sum4' */
        rtb_Switch1_a -= TMMR_ac_B.Merge3_j;

        /* Outputs for Atomic SubSystem: '<S130>/Protected Division' */
        /* Switch: '<S142>/Switch1' incorporates:
         *  Constant: '<S142>/Constant Value'
         *  Constant: '<S142>/Constant Value1'
         *  Constant: '<S142>/Constant Value2'
         *  Constant: '<S142>/Constant Value3'
         *  Logic: '<S142>/AND'
         *  RelationalOperator: '<S142>/Greater Than or Equal '
         *  RelationalOperator: '<S142>/Greater Than or Equal 1'
         *  RelationalOperator: '<S142>/Not Equal'
         *  RelationalOperator: '<S142>/Not Equal1'
         *  Switch: '<S142>/Switch2'
         *  Switch: '<S142>/Switch3'
         */
        if ((rtb_Merge1_b != 0.0F) && (rtb_Switch1_a != 0.0F))
        {
            /* Switch: '<S142>/Switch1' incorporates:
             *  Product: '<S142>/Division'
             */
            VeTMMR_r_ShftPctRatio_SB4T2ndOff = rtb_Merge1_b / rtb_Switch1_a;
        }
        else if (rtb_Merge1_b > 0.0F)
        {
            /* Switch: '<S142>/Switch2' incorporates:
             *  Constant: '<S142>/MAXFLOAT'
             *  Switch: '<S142>/Switch1'
             */
            VeTMMR_r_ShftPctRatio_SB4T2ndOff = 3.402823466E+38F;
        }
        else if (rtb_Merge1_b < 0.0F)
        {
            /* Switch: '<S142>/Switch3' incorporates:
             *  Constant: '<S142>/MINFLOAT'
             *  Switch: '<S142>/Switch1'
             *  Switch: '<S142>/Switch2'
             */
            VeTMMR_r_ShftPctRatio_SB4T2ndOff = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S142>/Switch1' incorporates:
             *  Constant: '<S142>/Constant Value4'
             *  Switch: '<S142>/Switch2'
             *  Switch: '<S142>/Switch3'
             */
            VeTMMR_r_ShftPctRatio_SB4T2ndOff = 0.0F;
        }

        /* End of Switch: '<S142>/Switch1' */
        /* End of Outputs for SubSystem: '<S130>/Protected Division' */

        /* Outputs for Atomic SubSystem: '<S99>/Hysteresis' */
        /* Switch: '<S127>/Switch1' incorporates:
         *  Constant: '<S129>/Calib'
         *  RelationalOperator: '<S127>/Greater  Than'
         */
        if (VeTMMR_r_ShftPctRatio_SB4T2ndOff > KeTMMR_r_ThrshldSpdPhs2ndOffRSP)
        {
            /* Switch: '<S127>/Switch1' incorporates:
             *  Constant: '<S127>/Constant Value'
             */
            VeTMMR_b_ScndOffgMergStarts = true;
        }
        else
        {
            /* Switch: '<S127>/Switch1' incorporates:
             *  Constant: '<S128>/Calib'
             *  RelationalOperator: '<S127>/Greater  Than1'
             *  UnitDelay: '<S127>/Unit Delay'
             */
            VeTMMR_b_ScndOffgMergStarts = ((VeTMMR_r_ShftPctRatio_SB4T2ndOff >=
                KeTMMR_r_ThrshldSpdPhs2ndOffLSP) && (VeTMMR_b_ScndOffgMergStarts));
        }

        /* End of Switch: '<S127>/Switch1' */
        /* End of Outputs for SubSystem: '<S99>/Hysteresis' */

        /* Outputs for Atomic SubSystem: '<S99>/EdgeRising1' */
        /* Logic: '<S126>/AND' incorporates:
         *  Logic: '<S126>/OR1'
         *  UnitDelay: '<S126>/Unit Delay'
         */
        rtb_Switch1_cm = ((VeTMMR_b_ScndOffgMergStarts) &&
                          (!TMMR_ac_DW.UnitDelay_DSTATE_pj));

        /* Update for UnitDelay: '<S126>/Unit Delay' */
        TMMR_ac_DW.UnitDelay_DSTATE_pj = VeTMMR_b_ScndOffgMergStarts;

        /* End of Outputs for SubSystem: '<S99>/EdgeRising1' */

        /* RelationalOperator: '<S55>/Comparison4' */
        rtb_AND_c = (TMMR_ac_B.Merge11 == VeTMMR_i_ClchIdxOnc);

        /* If: '<S131>/If' incorporates:
         *  Constant: '<S146>/Constant'
         *  DataTypeConversion: '<S437>/DataTypeConversion'
         *  RelationalOperator: '<S131>/Comparison4'
         */
        if (((uint32)TMMR_ac_B.TMMC_TrnsCoeffShft.DataTypeConversion_d) ==
                CeTMMR_e_ClchZeroTorq)
        {
            /* Outputs for IfAction SubSystem: '<S131>/ClchTrqOffg_Zero' incorporates:
             *  ActionPort: '<S145>/Action Port'
             */
            TMMR_ac_ClchTrqOffg_Zero((&(VeTMMR_M_ClchTorq2ndOffgRaw)));

            /* End of Outputs for SubSystem: '<S131>/ClchTrqOffg_Zero' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S131>/ClchTrq2ndOffg' incorporates:
             *  ActionPort: '<S144>/Action Port'
             */
            /* Merge: '<S131>/Merge' incorporates:
             *  Selector: '<S144>/Selector'
             */
            VeTMMR_M_ClchTorq2ndOffgRaw = VaTMMR_M_ClchTorq
                [(TMMR_ac_B.TMMC_TrnsCoeffShft.Gain_fq)];

            /* End of Outputs for SubSystem: '<S131>/ClchTrq2ndOffg' */
        }

        /* End of If: '<S131>/If' */

        /* If: '<S99>/If' */
        if (VeTMMR_b_ScndOffgMergStarts)
        {
            TMMR_ac_DW.If_ActiveSubsystem_ll = 0;

            /* Outputs for IfAction SubSystem: '<S99>/Calct' incorporates:
             *  ActionPort: '<S125>/Action Port'
             */
            /* Abs: '<S125>/Abs' */
            rtb_Merge1_b = fabsf(TMMR_ac_B.Merge2_m);

            /* Switch: '<S133>/Switch2' incorporates:
             *  Constant: '<S125>/Constant Value'
             *  Switch: '<S133>/Switch3'
             *  UnitDelay: '<S133>/Unit Delay'
             */
            if (rtb_Switch1_cm)
            {
                TMMR_ac_DW.UnitDelay_DSTATE_eb = 0.0F;

                /* Switch: '<S133>/Switch1' incorporates:
                 *  Constant: '<S125>/Constant Value'
                 *  Constant: '<S133>/Constant Value4'
                 *  UnitDelay: '<S133>/Unit Delay'
                 *  UnitDelay: '<S133>/Unit Delay3'
                 */
                TMMR_ac_DW.UnitDelay3_DSTATE_c = 0.0F;
            }
            else
            {
                /* MinMax: '<S133>/Maximum' incorporates:
                 *  Constant: '<S135>/Calib'
                 *  Constant: '<S136>/Calib'
                 */
                rtb_Switch1_a = fmaxf(HeTMMR_t_MedTED_dT,
                                      KeTMMR_t_2ndClchTrqOffgBlnd);

                /* Outputs for Atomic SubSystem: '<S133>/Protected Division' */
                /* Switch: '<S139>/Switch1' incorporates:
                 *  Constant: '<S135>/Calib'
                 *  Constant: '<S139>/Constant Value'
                 *  Constant: '<S139>/Constant Value1'
                 *  Constant: '<S139>/Constant Value2'
                 *  Constant: '<S139>/Constant Value3'
                 *  Logic: '<S139>/AND'
                 *  RelationalOperator: '<S139>/Greater Than or Equal '
                 *  RelationalOperator: '<S139>/Greater Than or Equal 1'
                 *  RelationalOperator: '<S139>/Not Equal'
                 *  RelationalOperator: '<S139>/Not Equal1'
                 *  Switch: '<S139>/Switch2'
                 *  Switch: '<S139>/Switch3'
                 */
                if ((HeTMMR_t_MedTED_dT != 0.0F) && (rtb_Switch1_a != 0.0F))
                {
                    /* Switch: '<S139>/Switch1' incorporates:
                     *  Product: '<S139>/Division'
                     */
                    rtb_Switch1_a = HeTMMR_t_MedTED_dT / rtb_Switch1_a;
                }
                else if (HeTMMR_t_MedTED_dT > 0.0F)
                {
                    /* Switch: '<S139>/Switch2' incorporates:
                     *  Constant: '<S139>/MAXFLOAT'
                     *  Switch: '<S139>/Switch1'
                     */
                    rtb_Switch1_a = 3.402823466E+38F;
                }
                else if (HeTMMR_t_MedTED_dT < 0.0F)
                {
                    /* Switch: '<S139>/Switch3' incorporates:
                     *  Constant: '<S139>/MINFLOAT'
                     *  Switch: '<S139>/Switch1'
                     *  Switch: '<S139>/Switch2'
                     */
                    rtb_Switch1_a = -3.402823466E+38F;
                }
                else
                {
                    /* Switch: '<S139>/Switch1' incorporates:
                     *  Constant: '<S139>/Constant Value4'
                     *  Switch: '<S139>/Switch2'
                     *  Switch: '<S139>/Switch3'
                     */
                    rtb_Switch1_a = 0.0F;
                }

                /* End of Switch: '<S139>/Switch1' */
                /* End of Outputs for SubSystem: '<S133>/Protected Division' */

                /* Switch: '<S133>/Switch1' incorporates:
                 *  Constant: '<S133>/Constant Value2'
                 *  Constant: '<S133>/Constant Value3'
                 *  MinMax: '<S133>/MinMax'
                 *  Sum: '<S133>/Summation1'
                 *  UnitDelay: '<S133>/Unit Delay1'
                 *  UnitDelay: '<S133>/Unit Delay3'
                 */
                if (!TMMR_ac_DW.UnitDelay1_DSTATE_m)
                {
                    TMMR_ac_DW.UnitDelay3_DSTATE_c = 1.0F;
                }

                TMMR_ac_DW.UnitDelay3_DSTATE_c = fminf
                    (TMMR_ac_DW.UnitDelay3_DSTATE_c + rtb_Switch1_a, 1.0F);
            }

            /* End of Switch: '<S133>/Switch2' */

            /* Product: '<S125>/Product' incorporates:
             *  Abs: '<S125>/Abs1'
             */
            rtb_Switch1_a = VeTMMR_M_ClchTorq2ndOffgRaw * fabsf
                (TMMR_ac_B.TMMC_TrnsCoeffShft.Gain_f);

            /* Outputs for Atomic SubSystem: '<S125>/Protected Division' */
            /* Switch: '<S138>/Switch1' incorporates:
             *  Constant: '<S138>/Constant Value'
             *  Constant: '<S138>/Constant Value1'
             *  Constant: '<S138>/Constant Value2'
             *  Constant: '<S138>/Constant Value3'
             *  Logic: '<S138>/AND'
             *  RelationalOperator: '<S138>/Greater Than or Equal '
             *  RelationalOperator: '<S138>/Greater Than or Equal 1'
             *  RelationalOperator: '<S138>/Not Equal'
             *  RelationalOperator: '<S138>/Not Equal1'
             *  Switch: '<S138>/Switch2'
             *  Switch: '<S138>/Switch3'
             */
            if ((rtb_Switch1_a != 0.0F) && (rtb_Merge1_b != 0.0F))
            {
                /* Switch: '<S138>/Switch1' incorporates:
                 *  Product: '<S138>/Division'
                 */
                rtb_Switch1_a /= rtb_Merge1_b;
            }
            else if (rtb_Switch1_a > 0.0F)
            {
                /* Switch: '<S138>/Switch2' incorporates:
                 *  Constant: '<S138>/MAXFLOAT'
                 *  Switch: '<S138>/Switch1'
                 */
                rtb_Switch1_a = 3.402823466E+38F;
            }
            else if (rtb_Switch1_a < 0.0F)
            {
                /* Switch: '<S138>/Switch3' incorporates:
                 *  Constant: '<S138>/MINFLOAT'
                 *  Switch: '<S138>/Switch1'
                 *  Switch: '<S138>/Switch2'
                 */
                rtb_Switch1_a = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S138>/Switch1' incorporates:
                 *  Constant: '<S138>/Constant Value4'
                 *  Switch: '<S138>/Switch2'
                 *  Switch: '<S138>/Switch3'
                 */
                rtb_Switch1_a = 0.0F;
            }

            /* End of Switch: '<S138>/Switch1' */
            /* End of Outputs for SubSystem: '<S125>/Protected Division' */

            /* Switch: '<S134>/Switch2' incorporates:
             *  Logic: '<S125>/Logical4'
             *  Switch: '<S134>/Switch3'
             *  UnitDelay: '<S134>/Unit Delay'
             */
            if (rtb_AND_c && rtb_Switch1_cm)
            {
                TMMR_ac_DW.UnitDelay_DSTATE_pd = VeTMMR_M_ClchTorqOffgRaw;

                /* Switch: '<S134>/Switch1' incorporates:
                 *  Constant: '<S134>/Constant Value4'
                 *  UnitDelay: '<S134>/Unit Delay'
                 *  UnitDelay: '<S134>/Unit Delay3'
                 */
                TMMR_ac_DW.UnitDelay3_DSTATE_g = 0.0F;
            }
            else
            {
                /* MinMax: '<S134>/Maximum' incorporates:
                 *  Constant: '<S135>/Calib'
                 *  Constant: '<S137>/Calib'
                 */
                rtb_Merge1_b = fmaxf(HeTMMR_t_MedTED_dT,
                                     KeTMMR_t_ClchTrqOffgBlnd);

                /* Outputs for Atomic SubSystem: '<S134>/Protected Division' */
                /* Switch: '<S140>/Switch1' incorporates:
                 *  Constant: '<S135>/Calib'
                 *  Constant: '<S140>/Constant Value'
                 *  Constant: '<S140>/Constant Value1'
                 *  Constant: '<S140>/Constant Value2'
                 *  Constant: '<S140>/Constant Value3'
                 *  Logic: '<S140>/AND'
                 *  RelationalOperator: '<S140>/Greater Than or Equal '
                 *  RelationalOperator: '<S140>/Greater Than or Equal 1'
                 *  RelationalOperator: '<S140>/Not Equal'
                 *  RelationalOperator: '<S140>/Not Equal1'
                 *  Switch: '<S140>/Switch2'
                 *  Switch: '<S140>/Switch3'
                 */
                if ((HeTMMR_t_MedTED_dT != 0.0F) && (rtb_Merge1_b != 0.0F))
                {
                    /* Switch: '<S140>/Switch1' incorporates:
                     *  Product: '<S140>/Division'
                     */
                    rtb_Merge1_b = HeTMMR_t_MedTED_dT / rtb_Merge1_b;
                }
                else if (HeTMMR_t_MedTED_dT > 0.0F)
                {
                    /* Switch: '<S140>/Switch2' incorporates:
                     *  Constant: '<S140>/MAXFLOAT'
                     *  Switch: '<S140>/Switch1'
                     */
                    rtb_Merge1_b = 3.402823466E+38F;
                }
                else if (HeTMMR_t_MedTED_dT < 0.0F)
                {
                    /* Switch: '<S140>/Switch3' incorporates:
                     *  Constant: '<S140>/MINFLOAT'
                     *  Switch: '<S140>/Switch1'
                     *  Switch: '<S140>/Switch2'
                     */
                    rtb_Merge1_b = -3.402823466E+38F;
                }
                else
                {
                    /* Switch: '<S140>/Switch1' incorporates:
                     *  Constant: '<S140>/Constant Value4'
                     *  Switch: '<S140>/Switch2'
                     *  Switch: '<S140>/Switch3'
                     */
                    rtb_Merge1_b = 0.0F;
                }

                /* End of Switch: '<S140>/Switch1' */
                /* End of Outputs for SubSystem: '<S134>/Protected Division' */

                /* Switch: '<S134>/Switch1' incorporates:
                 *  Constant: '<S134>/Constant Value2'
                 *  Constant: '<S134>/Constant Value3'
                 *  Logic: '<S134>/Logical'
                 *  Logic: '<S134>/Logical2'
                 *  MinMax: '<S134>/MinMax'
                 *  Sum: '<S134>/Summation1'
                 *  UnitDelay: '<S134>/Unit Delay1'
                 *  UnitDelay: '<S134>/Unit Delay3'
                 */
                if ((!TMMR_ac_DW.UnitDelay1_DSTATE_ez) || rtb_Switch1_cm)
                {
                    TMMR_ac_DW.UnitDelay3_DSTATE_g = 1.0F;
                }

                TMMR_ac_DW.UnitDelay3_DSTATE_g = fminf
                    (TMMR_ac_DW.UnitDelay3_DSTATE_g + rtb_Merge1_b, 1.0F);
            }

            /* End of Switch: '<S134>/Switch2' */

            /* Switch: '<S125>/Switch3' incorporates:
             *  Constant: '<S125>/Constant Value3'
             */
            if (rtb_AND_c)
            {
                rtb_Merge1_b = 0.0F;
            }
            else
            {
                rtb_Merge1_b = VeTMMR_M_ClchTorqOffgRaw;
            }

            /* End of Switch: '<S125>/Switch3' */

            /* Merge: '<S99>/Merge' incorporates:
             *  Constant: '<S133>/Constant Value'
             *  Constant: '<S134>/Constant Value'
             *  Product: '<S133>/Multiplication'
             *  Product: '<S133>/Multiplication3'
             *  Product: '<S134>/Multiplication'
             *  Product: '<S134>/Multiplication3'
             *  Sum: '<S125>/Sum'
             *  Sum: '<S133>/Subtraction'
             *  Sum: '<S133>/Summation'
             *  Sum: '<S134>/Subtraction'
             *  Sum: '<S134>/Summation'
             *  UnitDelay: '<S133>/Unit Delay'
             *  UnitDelay: '<S133>/Unit Delay3'
             *  UnitDelay: '<S134>/Unit Delay'
             *  UnitDelay: '<S134>/Unit Delay3'
             */
            VeTMMR_M_ClchTorqOffgMultiShift = (((1.0F -
                TMMR_ac_DW.UnitDelay3_DSTATE_g) * TMMR_ac_DW.UnitDelay_DSTATE_pd)
                + (TMMR_ac_DW.UnitDelay3_DSTATE_g * rtb_Merge1_b)) + (((1.0F -
                TMMR_ac_DW.UnitDelay3_DSTATE_c) * TMMR_ac_DW.UnitDelay_DSTATE_eb)
                + (TMMR_ac_DW.UnitDelay3_DSTATE_c * rtb_Switch1_a));

            /* End of Outputs for SubSystem: '<S99>/Calct' */
        }
        else
        {
            TMMR_ac_DW.If_ActiveSubsystem_ll = 1;

            /* Outputs for IfAction SubSystem: '<S99>/Zeroed' incorporates:
             *  ActionPort: '<S132>/Action Port'
             */
            /* Merge: '<S99>/Merge' incorporates:
             *  Inport: '<S132>/ClutchTorqOff_in'
             */
            VeTMMR_M_ClchTorqOffgMultiShift = VeTMMR_M_ClchTorqOffgRaw;

            /* End of Outputs for SubSystem: '<S99>/Zeroed' */
        }

        /* End of If: '<S99>/If' */

        /* MinMax: '<S89>/MinMax2' */
        VeTMMR_M_ClchTorqOffgSB4TPrePrtct = fminf
            (VeTMMR_M_ClchTorqOffgMultiShift, VeTMMR_M_ClchTorqOffgTgtFinal_SB4T);

        /* Product: '<S98>/Product' incorporates:
         *  Constant: '<S120>/Calib'
         */
        rtb_Merge1_b = ((-KeTMMR_M_ClchTorqOffgSB4TPrtct) * TMMR_ac_B.Merge4_i) *
            VeTMMR_n_NCOncSgn;

        /* Product: '<S98>/Product1' */
        rtb_Switch1_a = TMMR_ac_B.Merge2_m * VeTMMR_n_NCOffgSgn;

        /* Outputs for Atomic SubSystem: '<S98>/Protected Division' */
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
        if ((rtb_Merge1_b != 0.0F) && (rtb_Switch1_a != 0.0F))
        {
            /* Switch: '<S122>/Switch1' incorporates:
             *  Product: '<S122>/Division'
             */
            rtb_Merge1_b /= rtb_Switch1_a;
        }
        else if (rtb_Merge1_b > 0.0F)
        {
            /* Switch: '<S122>/Switch2' incorporates:
             *  Constant: '<S122>/MAXFLOAT'
             *  Switch: '<S122>/Switch1'
             */
            rtb_Merge1_b = 3.402823466E+38F;
        }
        else if (rtb_Merge1_b < 0.0F)
        {
            /* Switch: '<S122>/Switch3' incorporates:
             *  Constant: '<S122>/MINFLOAT'
             *  Switch: '<S122>/Switch1'
             *  Switch: '<S122>/Switch2'
             */
            rtb_Merge1_b = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S122>/Switch1' incorporates:
             *  Constant: '<S122>/Constant Value4'
             *  Switch: '<S122>/Switch2'
             *  Switch: '<S122>/Switch3'
             */
            rtb_Merge1_b = 0.0F;
        }

        /* End of Switch: '<S122>/Switch1' */
        /* End of Outputs for SubSystem: '<S98>/Protected Division' */

        /* Abs: '<S98>/Abs' */
        VeTMMR_M_ClchTorqOffgSB4TMinPrtct = fabsf(rtb_Merge1_b);

        /* Logic: '<S98>/Logical' incorporates:
         *  Constant: '<S116>/Constant'
         *  Constant: '<S117>/Constant'
         *  Constant: '<S120>/Calib'
         *  RelationalOperator: '<S98>/Comparison'
         *  RelationalOperator: '<S98>/Comparison6'
         *  RelationalOperator: '<S98>/Comparison7'
         */
        rtb_Logical_dz = (((((uint32)
                             TMMR_ac_B.TmpSignalConversionAtVeHSER_e_HTDR_State)
                            != CeHSER_e_NeutC2C_State) && (((uint32)
                             TMMR_ac_B.TmpSignalConversionAtVeHSER_e_HTDR_State)
                            != CeHSER_e_M2_State)) && (VeTMMC_M_ClchTorqOncRaw >
                           KeTMMR_M_ClchTorqOffgSB4TPrtct));

        /* Outputs for Atomic SubSystem: '<S98>/EdgeRising' */
        /* Switch: '<S124>/Switch1' */
        if (rtb_OR1_e4)
        {
            /* Switch: '<S124>/Switch1' incorporates:
             *  Constant: '<S115>/TRUE Constant1'
             */
            rtb_Switch1_cm = true;
        }
        else
        {
            /* Switch: '<S124>/Switch1' incorporates:
             *  UnitDelay: '<S124>/Unit Delay'
             */
            rtb_Switch1_cm = TMMR_ac_DW.UnitDelay_DSTATE_kc;
        }

        /* End of Switch: '<S124>/Switch1' */

        /* Switch: '<S124>/Switch3' incorporates:
         *  UnitDelay: '<S124>/Unit Delay'
         */
        TMMR_ac_DW.UnitDelay_DSTATE_kc = (rtb_OR1_e4 || rtb_Logical_dz);

        /* Switch: '<S114>/Switch2' incorporates:
         *  Logic: '<S115>/AND'
         *  Logic: '<S115>/OR1'
         *  Switch: '<S114>/Switch3'
         *  UnitDelay: '<S114>/Unit Delay'
         */
        if (rtb_Logical_dz && (!rtb_Switch1_cm))
        {
            TMMR_ac_DW.UnitDelay_DSTATE_f5 = VeTMMR_M_ClchTorqOffgSB4TMinPrtct;

            /* Switch: '<S114>/Switch1' incorporates:
             *  Constant: '<S114>/Constant Value4'
             *  UnitDelay: '<S114>/Unit Delay'
             *  UnitDelay: '<S114>/Unit Delay3'
             */
            TMMR_ac_DW.UnitDelay3_DSTATE_b = 0.0F;
        }
        else
        {
            /* MinMax: '<S114>/Maximum' incorporates:
             *  Constant: '<S118>/Calib'
             *  Constant: '<S121>/Calib'
             */
            rtb_Merge1_b = fmaxf(HeTMMR_t_MedTED_dT,
                                 KeTMMR_t_ClchTorqOffgSB4TBlnd);

            /* Outputs for Atomic SubSystem: '<S114>/Protected Division' */
            /* Switch: '<S123>/Switch1' incorporates:
             *  Constant: '<S118>/Calib'
             *  Constant: '<S123>/Constant Value'
             *  Constant: '<S123>/Constant Value1'
             *  Constant: '<S123>/Constant Value2'
             *  Constant: '<S123>/Constant Value3'
             *  Logic: '<S123>/AND'
             *  RelationalOperator: '<S123>/Greater Than or Equal '
             *  RelationalOperator: '<S123>/Greater Than or Equal 1'
             *  RelationalOperator: '<S123>/Not Equal'
             *  RelationalOperator: '<S123>/Not Equal1'
             *  Switch: '<S123>/Switch2'
             *  Switch: '<S123>/Switch3'
             */
            if ((HeTMMR_t_MedTED_dT != 0.0F) && (rtb_Merge1_b != 0.0F))
            {
                /* Switch: '<S123>/Switch1' incorporates:
                 *  Product: '<S123>/Division'
                 */
                rtb_Merge1_b = HeTMMR_t_MedTED_dT / rtb_Merge1_b;
            }
            else if (HeTMMR_t_MedTED_dT > 0.0F)
            {
                /* Switch: '<S123>/Switch2' incorporates:
                 *  Constant: '<S123>/MAXFLOAT'
                 *  Switch: '<S123>/Switch1'
                 */
                rtb_Merge1_b = 3.402823466E+38F;
            }
            else if (HeTMMR_t_MedTED_dT < 0.0F)
            {
                /* Switch: '<S123>/Switch3' incorporates:
                 *  Constant: '<S123>/MINFLOAT'
                 *  Switch: '<S123>/Switch1'
                 *  Switch: '<S123>/Switch2'
                 */
                rtb_Merge1_b = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S123>/Switch1' incorporates:
                 *  Constant: '<S123>/Constant Value4'
                 *  Switch: '<S123>/Switch2'
                 *  Switch: '<S123>/Switch3'
                 */
                rtb_Merge1_b = 0.0F;
            }

            /* End of Switch: '<S123>/Switch1' */
            /* End of Outputs for SubSystem: '<S114>/Protected Division' */

            /* Switch: '<S114>/Switch1' incorporates:
             *  Constant: '<S114>/Constant Value2'
             *  Constant: '<S114>/Constant Value3'
             *  Logic: '<S114>/Logical'
             *  Logic: '<S114>/Logical2'
             *  MinMax: '<S114>/MinMax'
             *  Sum: '<S114>/Summation1'
             *  UnitDelay: '<S114>/Unit Delay1'
             *  UnitDelay: '<S114>/Unit Delay3'
             */
            if ((!TMMR_ac_DW.UnitDelay1_DSTATE_cp) || rtb_OR1_e4)
            {
                TMMR_ac_DW.UnitDelay3_DSTATE_b = 1.0F;
            }

            TMMR_ac_DW.UnitDelay3_DSTATE_b = fminf
                (TMMR_ac_DW.UnitDelay3_DSTATE_b + rtb_Merge1_b, 1.0F);
        }

        /* End of Switch: '<S114>/Switch2' */
        /* End of Outputs for SubSystem: '<S98>/EdgeRising' */

        /* Switch: '<S98>/Switch' incorporates:
         *  Constant: '<S98>/Constant Value1'
         */
        if (rtb_Logical_dz)
        {
            rtb_Merge1_b = 0.0F;
        }
        else
        {
            rtb_Merge1_b = VeTMMR_M_ClchTorqOffgSB4TMinPrtct;
        }

        /* End of Switch: '<S98>/Switch' */

        /* MinMax: '<S98>/MinMax1' incorporates:
         *  Constant: '<S114>/Constant Value'
         *  Constant: '<S119>/Calib'
         *  MinMax: '<S98>/MinMax'
         *  Product: '<S114>/Multiplication'
         *  Product: '<S114>/Multiplication3'
         *  Sum: '<S114>/Subtraction'
         *  Sum: '<S114>/Summation'
         *  UnitDelay: '<S114>/Unit Delay'
         *  UnitDelay: '<S114>/Unit Delay3'
         */
        TMMR_ac_B.Merge3_j = fmaxf(fminf(KeTMMR_M_ClchTorqOffgSB4TMinPrtct,
            ((1.0F - TMMR_ac_DW.UnitDelay3_DSTATE_b) *
             TMMR_ac_DW.UnitDelay_DSTATE_f5) + (TMMR_ac_DW.UnitDelay3_DSTATE_b *
            rtb_Merge1_b)), VeTMMR_M_ClchTorqOffgSB4TPrePrtct);

        /* Product: '<S90>/Product1' */
        rtb_Merge1_b = TMMR_ac_B.Merge3_j * VeTMMR_n_NCOffgSgn;

        /* Outputs for Atomic SubSystem: '<S90>/Protected Division1' */
        /* Switch: '<S149>/Switch1' incorporates:
         *  Constant: '<S149>/Constant Value'
         *  Constant: '<S149>/Constant Value1'
         *  Constant: '<S149>/Constant Value2'
         *  Constant: '<S149>/Constant Value3'
         *  Logic: '<S149>/AND'
         *  RelationalOperator: '<S149>/Greater Than or Equal '
         *  RelationalOperator: '<S149>/Greater Than or Equal 1'
         *  RelationalOperator: '<S149>/Not Equal'
         *  RelationalOperator: '<S149>/Not Equal1'
         *  Switch: '<S149>/Switch2'
         *  Switch: '<S149>/Switch3'
         */
        if ((rtb_Merge1_b != 0.0F) && (TMMR_ac_B.Merge1_k != 0.0F))
        {
            /* Switch: '<S149>/Switch1' incorporates:
             *  Product: '<S149>/Division'
             */
            rtb_Merge1_b /= TMMR_ac_B.Merge1_k;
        }
        else if (rtb_Merge1_b > 0.0F)
        {
            /* Switch: '<S149>/Switch2' incorporates:
             *  Constant: '<S149>/MAXFLOAT'
             *  Switch: '<S149>/Switch1'
             */
            rtb_Merge1_b = 3.402823466E+38F;
        }
        else if (rtb_Merge1_b < 0.0F)
        {
            /* Switch: '<S149>/Switch3' incorporates:
             *  Constant: '<S149>/MINFLOAT'
             *  Switch: '<S149>/Switch1'
             *  Switch: '<S149>/Switch2'
             */
            rtb_Merge1_b = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S149>/Switch1' incorporates:
             *  Constant: '<S149>/Constant Value4'
             *  Switch: '<S149>/Switch2'
             *  Switch: '<S149>/Switch3'
             */
            rtb_Merge1_b = 0.0F;
        }

        /* End of Switch: '<S149>/Switch1' */
        /* End of Outputs for SubSystem: '<S90>/Protected Division1' */

        /* Lookup_n-D: '<S148>/Vector' incorporates:
         *  Abs: '<S90>/Abs3'
         */
        VeTMMR_M_ClchTorqOncNCSlipLimtPrtct = look1_iflf_binlca_16a(fabsf
            (VeTMMR_n_NCOncSlipSpd), ((const float32 *)
            &(KxTMMR_M_ClchTorqOncNCSlipLimtPrtct[0])), ((const float32 *)
            &(KtTMMR_M_ClchTorqOncNCSlipLimtPrtct[0])), 3U);

        /* MinMax: '<S90>/MinMax1' incorporates:
         *  Abs: '<S90>/Abs'
         *  Abs: '<S90>/Abs1'
         *  Abs: '<S90>/Abs2'
         *  Constant: '<S147>/Calib'
         *  Product: '<S90>/Product4'
         *  Sum: '<S90>/Sum2'
         */
        VeTMMR_M_ClchTorqOncTgt_SB4T = fmaxf((fabsf(TMMR_ac_B.Gain_kr) - fabsf
            (rtb_Merge1_b)) * fabsf(TMMR_ac_B.Merge3), KeTMMR_M_ThrshldTrqOnc);

        /* Switch: '<S90>/Switch3' incorporates:
         *  Constant: '<S90>/Constant Value3'
         *  Logic: '<S90>/Logical3'
         *  Logic: '<S90>/Logical4'
         */
        if (rtb_AND_c && (!VeTMMR_b_ScndOffgMergStarts))
        {
            rtb_Merge1_b = 0.0F;
        }
        else
        {
            rtb_Merge1_b = VeTMMC_M_ClchTorqOncRaw;
        }

        /* End of Switch: '<S90>/Switch3' */

        /* Merge: '<S13>/Merge1' incorporates:
         *  MinMax: '<S90>/MinMax'
         */
        TMMR_ac_B.Merge1_kj = fminf(fminf(VeTMMR_M_ClchTorqOncTgt_SB4T,
            rtb_Merge1_b), VeTMMR_M_ClchTorqOncNCSlipLimtPrtct);

        /* Merge: '<S13>/Merge2' incorporates:
         *  Constant: '<S91>/Constant'
         *  SignalConversion generated from: '<S55>/TransShftTrqSpdPhs'
         */
        TMMR_ac_B.Merge2_l = CeTMMR_e_SpdBeforeTrqPhase;

        /* Merge: '<S13>/Merge4' incorporates:
         *  Constant: '<S55>/FALSE Constant'
         *  SignalConversion generated from: '<S55>/TrqTrnfrCmpltd'
         */
        rtb_OR1_e4 = false;

        /* End of Outputs for SubSystem: '<S13>/TMMC_SpdB4TrqPhs' */
    }
    else if (VeTMMR_b_GarageShiftActv)
    {
        TMMR_ac_DW.If_ActiveSubsystem_l = 2;

        /* Outputs for IfAction SubSystem: '<S13>/TMMC_GShftInPrgs' incorporates:
         *  ActionPort: '<S50>/Action Port'
         */
        /* Merge: '<S13>/Merge3' incorporates:
         *  Gain: '<S72>/Gain'
         */
        TMMR_ac_B.Merge3_j = VeTMMR_M_ClchTorqOffgRaw;

        /* Lookup_n-D: '<S71>/Vector' incorporates:
         *  Abs: '<S50>/Abs'
         */
        VeTMMR_M_ClchTorqOncNCSlipLimt = look1_iflf_binlca_16a(fabsf
            (VeTMMR_n_NCOncSlipSpd), ((const float32 *)
            &(KxTMMR_M_GrgShftInPrgrssTOncMax[0])), ((const float32 *)
            &(KtTMMR_M_GrgShftInPrgrssTOncMax[0])), 3U);

        /* Product: '<S50>/Product' */
        VeTMMR_M_ClchTorqOncTgtGSIP = rtb_Switch1_a * VeTMMR_n_NCOncSgnCalc;

        /* Merge: '<S13>/Merge1' incorporates:
         *  MinMax: '<S50>/MinMax1'
         *  MinMax: '<S50>/MinMax2'
         */
        TMMR_ac_B.Merge1_kj = fminf(fmaxf(VeTMMR_M_ClchTorqOncTgtGSIP,
            VeTMMR_M_ClchTorqOncNCSlipLimt), VeTMMC_M_ClchTorqOncRaw);

        /* Merge: '<S13>/Merge2' incorporates:
         *  Constant: '<S70>/Constant'
         *  SignalConversion generated from: '<S50>/TMMC_e_TransShftTrqSpdPhs'
         */
        TMMR_ac_B.Merge2_l = CeTMMR_e_GarageShiftInProgress;

        /* Merge: '<S13>/Merge4' incorporates:
         *  Constant: '<S50>/FALSE Constant'
         *  SignalConversion generated from: '<S50>/TMMC_b_TrqTrnfrCmpltd'
         */
        rtb_OR1_e4 = false;

        /* End of Outputs for SubSystem: '<S13>/TMMC_GShftInPrgs' */
    }
    else if (VeTMMR_b_NeutDsrdActv)
    {
        TMMR_ac_DW.If_ActiveSubsystem_l = 3;

        /* Outputs for IfAction SubSystem: '<S13>/TMMC_NeutralDsrd' incorporates:
         *  ActionPort: '<S52>/Action Port'
         */
        /* Merge: '<S13>/Merge3' incorporates:
         *  Gain: '<S76>/Gain'
         */
        TMMR_ac_B.Merge3_j = VeTMMR_M_ClchTorqOffgRaw;

        /* Merge: '<S13>/Merge1' incorporates:
         *  Gain: '<S77>/Gain'
         */
        TMMR_ac_B.Merge1_kj = VeTMMC_M_ClchTorqOncRaw;

        /* Merge: '<S13>/Merge2' incorporates:
         *  Constant: '<S75>/Constant'
         *  SignalConversion generated from: '<S52>/TMMR_e_TransShftTrqSpdPhs'
         */
        TMMR_ac_B.Merge2_l = CeTMMR_e_NeutDsrd;

        /* Merge: '<S13>/Merge4' incorporates:
         *  Constant: '<S52>/FALSE Constant'
         *  SignalConversion generated from: '<S52>/TMMC_b_TrqTrnfrCmpltd'
         */
        rtb_OR1_e4 = false;

        /* End of Outputs for SubSystem: '<S13>/TMMC_NeutralDsrd' */
    }
    else
    {
        TMMR_ac_DW.If_ActiveSubsystem_l = 4;

        /* Outputs for IfAction SubSystem: '<S13>/TMMC_NoShftInPrgs' incorporates:
         *  ActionPort: '<S53>/Action Port'
         */
        /* Merge: '<S13>/Merge3' incorporates:
         *  Gain: '<S79>/Gain'
         */
        TMMR_ac_B.Merge3_j = VeTMMR_M_ClchTorqOffgRaw;

        /* Merge: '<S13>/Merge1' incorporates:
         *  Gain: '<S80>/Gain'
         */
        TMMR_ac_B.Merge1_kj = VeTMMC_M_ClchTorqOncRaw;

        /* Merge: '<S13>/Merge2' incorporates:
         *  Constant: '<S78>/Constant'
         *  SignalConversion generated from: '<S53>/TMMR_e_TransShftTrqSpdPhs'
         */
        TMMR_ac_B.Merge2_l = CeTMMR_e_InactiveShiftInProgress;

        /* Merge: '<S13>/Merge4' incorporates:
         *  Constant: '<S53>/FALSE Constant'
         *  SignalConversion generated from: '<S53>/TMMC_b_TrqTrnfrCmpltd'
         */
        rtb_OR1_e4 = false;

        /* End of Outputs for SubSystem: '<S13>/TMMC_NoShftInPrgs' */
    }

    /* Gain: '<S39>/Gain' */
    TMMR_ac_B.Gain_lt = VeTMMC_M_ClchTorqOncRaw;

    /* Gain: '<S40>/Gain' */
    TMMR_ac_B.Gain_g = TMMR_ac_B.Merge2_m;

    /* Gain: '<S41>/Gain' */
    TMMR_ac_B.Gain_fo = TMMR_ac_B.Merge3;

    /* Gain: '<S42>/Gain' */
    TMMR_ac_B.Gain_gx = TMMR_ac_B.Merge4_i;

    /* Gain: '<S43>/Gain' */
    TMMR_ac_B.Gain_oq = TMMR_ac_B.Merge5_l;

    /* Gain: '<S44>/Gain' */
    TMMR_ac_B.Gain_la = TMMR_ac_B.Merge6;

    /* Gain: '<S45>/Gain' */
    TMMR_ac_B.Gain_ha = TMMR_ac_B.Merge1_k;

    /* Gain: '<S46>/Gain' */
    TMMR_ac_B.Gain_gk = TMMR_ac_B.Merge11;

    /* Outputs for Atomic SubSystem: '<S13>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S58>/EdgeRising' */
    /* Logic: '<S185>/AND' incorporates:
     *  Logic: '<S185>/OR1'
     *  UnitDelay: '<S185>/Unit Delay'
     */
    rtb_AND_c = (rtb_OR1_e4 && (!TMMR_ac_DW.UnitDelay_DSTATE_ap));

    /* Update for UnitDelay: '<S185>/Unit Delay' */
    TMMR_ac_DW.UnitDelay_DSTATE_ap = rtb_OR1_e4;

    /* End of Outputs for SubSystem: '<S58>/EdgeRising' */

    /* Switch: '<S58>/Switch1' incorporates:
     *  Constant: '<S58>/Constant Value'
     *  Constant: '<S58>/Constant Value1'
     *  Logic: '<S58>/OR'
     *  Logic: '<S58>/OR1'
     *  MinMax: '<S58>/Minimum'
     *  Sum: '<S58>/Summation'
     *  UnitDelay: '<S58>/Unit Delay'
     */
    if ((!rtb_OR1_e4) || rtb_AND_c)
    {
        TMMR_ac_DW.UnitDelay_DSTATE_g = 0U;
    }
    else if (1 < ((sint32)((uint16)(((uint32)TMMR_ac_DW.UnitDelay_DSTATE_g) + 1U))))
    {
        /* MinMax: '<S58>/Minimum' */
        TMMR_ac_DW.UnitDelay_DSTATE_g = 1U;
    }
    else
    {
        /* MinMax: '<S58>/Minimum' incorporates:
         *  Constant: '<S58>/Constant Value'
         *  Sum: '<S58>/Summation'
         *  UnitDelay: '<S58>/Unit Delay'
         */
        TMMR_ac_DW.UnitDelay_DSTATE_g = (uint16)(((uint32)
            TMMR_ac_DW.UnitDelay_DSTATE_g) + 1U);
    }

    /* End of Switch: '<S58>/Switch1' */

    /* Logic: '<S58>/AND' incorporates:
     *  Constant: '<S13>/Constant Value'
     *  RelationalOperator: '<S58>/Greater  Than'
     *  UnitDelay: '<S58>/Unit Delay'
     */
    TMMR_ac_B.Gain_gh = (rtb_OR1_e4 && (((sint32)TMMR_ac_DW.UnitDelay_DSTATE_g) >=
                          1));

    /* End of Outputs for SubSystem: '<S13>/Turn On Delay Sample' */

    /* Update for UnitDelay: '<S26>/Unit Delay1' */
    TMMR_ac_DW.UnitDelay1_DSTATE_c = VeTMMR_dn_NturbDot;

    /* Update for UnitDelay: '<S26>/Unit Delay' */
    TMMR_ac_DW.UnitDelay_DSTATE_a =
        TMMR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo;

    /* Update for UnitDelay: '<S54>/Unit Delay' incorporates:
     *  Product: '<S54>/Product'
     */
    TMMR_ac_DW.UnitDelay_DSTATE_aw = tmpRead_0;

    /* Update for If: '<S13>/If' */
    switch (TMMR_ac_DW.If_ActiveSubsystem_l)
    {
      case 0:
        /* Update for IfAction SubSystem: '<S13>/TMMC_TrqB4SpeedPhs' incorporates:
         *  ActionPort: '<S57>/Action Port'
         */
        /* Update for UnitDelay: '<S181>/Unit Delay1' incorporates:
         *  Constant: '<S181>/TRUE Constant'
         */
        TMMR_ac_DW.UnitDelay1_DSTATE_o = true;

        /* End of Update for SubSystem: '<S13>/TMMC_TrqB4SpeedPhs' */
        break;

      case 1:
        /* Update for IfAction SubSystem: '<S13>/TMMC_SpdB4TrqPhs' incorporates:
         *  ActionPort: '<S55>/Action Port'
         */
        /* Update for UnitDelay: '<S103>/Unit Delay1' incorporates:
         *  Constant: '<S103>/TRUE Constant'
         */
        TMMR_ac_DW.UnitDelay1_DSTATE_i = true;

        /* Update for If: '<S99>/If' */
        if (TMMR_ac_DW.If_ActiveSubsystem_ll == 0)
        {
            /* Update for IfAction SubSystem: '<S99>/Calct' incorporates:
             *  ActionPort: '<S125>/Action Port'
             */
            /* Update for UnitDelay: '<S133>/Unit Delay1' incorporates:
             *  Constant: '<S133>/TRUE Constant'
             */
            TMMR_ac_DW.UnitDelay1_DSTATE_m = true;

            /* Update for UnitDelay: '<S134>/Unit Delay1' incorporates:
             *  Constant: '<S134>/TRUE Constant'
             */
            TMMR_ac_DW.UnitDelay1_DSTATE_ez = true;

            /* End of Update for SubSystem: '<S99>/Calct' */
        }

        /* End of Update for If: '<S99>/If' */

        /* Update for UnitDelay: '<S114>/Unit Delay1' incorporates:
         *  Constant: '<S114>/TRUE Constant'
         */
        TMMR_ac_DW.UnitDelay1_DSTATE_cp = true;

        /* End of Update for SubSystem: '<S13>/TMMC_SpdB4TrqPhs' */
        break;

      case 2:
      case 3:
      case 4:
        break;

      default:
        /* no actions */
        break;
    }

    /* End of Update for If: '<S13>/If' */
    /* End of Outputs for SubSystem: '<S1>/TMMC' */

    /* Inport: '<Root>/VeHCCR_b_Clch3_FillCmptDetected' */
    (void)Rte_Read_VeHCCR_b_Clch3_FillCmptDetected_Value(&rtb_AND_nz);

    /* Inport: '<Root>/VeHCCR_b_Clch1_FillCmptDetected' */
    (void)Rte_Read_VeHCCR_b_Clch1_FillCmptDetected_Value(&Switch1_l);

    /* Inport: '<Root>/VeHCCR_t_FlTmClch3' */
    (void)Rte_Read_VeHCCR_t_FlTmClch3_Value(&Switch_idx_1);

    /* Inport: '<Root>/VeHCCR_t_FlTmClch1' */
    (void)Rte_Read_VeHCCR_t_FlTmClch1_Value(&Switch5);

    /* Inport: '<Root>/VeHTDR_M_Clch3_TCR_Actl' */
    (void)Rte_Read_VeHTDR_M_Clch3_TCR_Actl_Value(&Switch_idx_2);

    /* Outputs for Function Call SubSystem: '<S1>/TMMC' */
    /* Chart: '<S18>/TMMC_Stateflow' incorporates:
     *  SubSystem: '<S3>/Clch1_3_Convert_ClchOff_Onc'
     */
    /* RelationalOperator: '<S6>/Comparison1' incorporates:
     *  Constant: '<S23>/Constant'
     *  Merge: '<S3>/Merge16'
     */
    /* Transition: '<S384>:570' */
    /* Function call assign correct clutch to offg and onc  */
    /* Event: '<S384>:572' */
    rtb_OR1_e4 = (((uint32)VeTMMR_e_ClchOncAssgn) == CeHSER_e_Cl3);

    /* Switch: '<S6>/Switch3' incorporates:
     *  Switch: '<S6>/Switch'
     *  Switch: '<S6>/Switch1'
     *  Switch: '<S6>/Switch2'
     */
    if (rtb_OR1_e4)
    {
        /* Switch: '<S6>/Switch3' incorporates:
         *  SignalConversion generated from: '<S1>/VeHCCR_e_Clch3_Stat'
         */
        Switch3 = TMMR_ac_B.TmpSignalConversionAtVeHCCR_e_Clch3_Stat;

        /* Switch: '<S6>/Switch' */
        Switch_idx_1 = TMMR_ac_B.TmpSignalConversionAtVeHCCR_M_Clch1_Torq;
        Switch_idx_2 = TMMR_ac_B.TmpSignalConversionAtVeHTDR_M_Clch1_TCR_;

        /* Switch: '<S6>/Switch1' */
        Switch1_l = rtb_AND_nz;

        /* Switch: '<S6>/Switch2' incorporates:
         *  SignalConversion generated from: '<S1>/VeHCCR_e_Clch1_Stat'
         */
        Switch2 = TMMR_ac_B.TmpSignalConversionAtVeHCCR_e_Clch1_Stat;
    }
    else
    {
        /* Switch: '<S6>/Switch3' incorporates:
         *  SignalConversion generated from: '<S1>/VeHCCR_e_Clch1_Stat'
         */
        Switch3 = TMMR_ac_B.TmpSignalConversionAtVeHCCR_e_Clch1_Stat;

        /* Switch: '<S6>/Switch' */
        Switch_idx_1 = TMMR_ac_B.TmpSignalConversionAtVeHCCR_M_Clch3_Torq;

        /* Switch: '<S6>/Switch2' incorporates:
         *  SignalConversion generated from: '<S1>/VeHCCR_e_Clch3_Stat'
         */
        Switch2 = TMMR_ac_B.TmpSignalConversionAtVeHCCR_e_Clch3_Stat;
    }

    /* End of Switch: '<S6>/Switch3' */

    /* Switch: '<S6>/Switch5' incorporates:
     *  Constant: '<S24>/Constant'
     *  RelationalOperator: '<S6>/Comparison4'
     */
    if (((uint32)Switch3) != CeHCCR_e_ClLocked)
    {
        /* Switch: '<S6>/Switch5' incorporates:
         *  Constant: '<S6>/Constant Value3'
         */
        Switch5 = 0.0F;
    }
    else
    {
        /* Switch: '<S6>/Switch5' incorporates:
         *  Constant: '<S25>/Calib'
         */
        Switch5 = KeTMMR_M_SSOncTCROvrdMin;
    }

    /* End of Switch: '<S6>/Switch5' */

    /* Chart: '<S18>/TMMC_Stateflow' incorporates:
     *  SubSystem: '<S3>/TMMC_ShiftState'
     */
    /* S-Function (fcgen): '<S17>/FcnCall_Generator' incorporates:
     *  SubSystem: '<S17>/TransShiftStateTransition'
     */
    /* Chart: '<S232>/TMCC_ShiftStatMgr' incorporates:
     *  DataStoreRead: '<S232>/Data Store Read'
     *  DataStoreRead: '<S232>/Data Store Read3'
     *  Inport: '<Root>/VeTRNR_b_ShftTypeFA'
     *  UnitDelay: '<S232>/Unit Delay'
     */
    /* Transition: '<S384>:568' */
    /* Function call for shift state transition */
    /* Event: '<S384>:571' */
    /* Gateway: TMMR_FUNC_MedTED/TMMC/TMMC_ShiftState/TransShiftStateTransition/TMCC_ShiftStatMgr */
    /* During: TMMR_FUNC_MedTED/TMMC/TMMC_ShiftState/TransShiftStateTransition/TMCC_ShiftStatMgr */
    if (((uint32)TMMR_ac_DW.is_active_c1_TMMR_ac) == 0U)
    {
        /* Entry: TMMR_FUNC_MedTED/TMMC/TMMC_ShiftState/TransShiftStateTransition/TMCC_ShiftStatMgr */
        TMMR_ac_DW.is_active_c1_TMMR_ac = 1U;

        /* Entry Internal: TMMR_FUNC_MedTED/TMMC/TMMC_ShiftState/TransShiftStateTransition/TMCC_ShiftStatMgr */
        /* Transition: '<S381>:869' */
        /*  Stateflow Init */
        TMMR_ac_DW.is_c1_TMMR_ac = TMMR_ac_IN_SteadyState;

        /* Entry 'SteadyState': '<S381>:758' */
        TMMR_ac_B.VeTMMR_e_TransShiftStat_DS_i = CeTMMR_e_SteadyState;
    }
    else
    {
        (void)Rte_Read_VeTRNR_b_ShftTypeFA_Value(&rtb_AND5);
        guard1 = false;
        guard2 = false;
        switch (TMMR_ac_DW.is_c1_TMMR_ac)
        {
          case TMMR_ac_IN_SpeedPhase:
            /* During 'SpeedPhase': '<S381>:724' */
            /*  EndofSpdPhase, No newshifttype */
            tmp = TMMR_ac_DW.UnitDelay_DSTATE_ec;
            if (((((VeTMMR_b_EndOfSpdPhs_DS) &&
                    (TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu == tmp))
                  && (((uint32)
                       TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu) !=
                      CeTRNR_e_SteadyState)) && (!rtb_AND5)) || ((((uint32)
                    TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu) ==
                    CeTRNR_e_SteadyState) || rtb_AND5))
            {
                /* Transition: '<S381>:727' */
                /* Transition: '<S381>:925' */
                TMMR_ac_DW.is_c1_TMMR_ac = TMMR_ac_IN_SteadyState;

                /* Entry 'SteadyState': '<S381>:758' */
                TMMR_ac_B.VeTMMR_e_TransShiftStat_DS_i = CeTMMR_e_SteadyState;
            }
            else
            {
                /*  Go back to steady state when shifttype is steady state or ShftTypeFA is true */
                /*  EndofSpd and newshifttype comes in */
                if (((VeTMMR_b_ClampApplied_DS) &&
                        (TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu !=
                         tmp)) && (((uint32)
                                    TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu)
                                   != CeTRNR_e_SteadyState))
                {
                    /* Transition: '<S381>:931' */
                    TMMR_ac_DW.is_c1_TMMR_ac = TMMR_ac_IN_TorqPhase;

                    /* Entry 'TorqPhase': '<S381>:722' */
                    TMMR_ac_B.VeTMMR_e_TransShiftStat_DS_i =
                        CeTMMR_e_TorquePhase;
                }
                else
                {
                    TMMR_ac_B.VeTMMR_e_TransShiftStat_DS_i = CeTMMR_e_SpeedPhase;
                }
            }
            break;

          case TMMR_ac_IN_SteadyState:
            /* During 'SteadyState': '<S381>:758' */
            /*  New shifttype comes in */
            if (((uint32)TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu) !=
                    CeTRNR_e_SteadyState)
            {
                /* Transition: '<S381>:885' */
                TMMR_ac_DW.is_c1_TMMR_ac = TMMR_ac_IN_TorqPhase;

                /* Entry 'TorqPhase': '<S381>:722' */
                TMMR_ac_B.VeTMMR_e_TransShiftStat_DS_i = CeTMMR_e_TorquePhase;
            }
            break;

          default:
            /* During 'TorqPhase': '<S381>:722' */
            /*  Check if EndofTorqPhase has finished Or Dec/Inc is triggered */
            rtb_Logical_dz = !rtb_AND5;
            if (((VeTMMR_b_EndOfTorqPhs_DS) && (((uint32)Switch2) <
                    CeHCCR_e_ClSynched)) || ((((((uint32)
                     TMMR_ac_B.TmpSignalConversionAtVeTTQR_e_TCMTrqCntr) ==
                    CeTINR_e_TrqDec) || (((uint32)
                     TMMR_ac_B.TmpSignalConversionAtVeTTQR_e_TCMTrqCntr) ==
                    CeTINR_e_TrqInc)) && (((uint32)
                    TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu) !=
                    CeTRNR_e_SteadyState)) && rtb_Logical_dz))
            {
                /* Transition: '<S381>:719' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S381>:911' */
                /*  ZeroSpdShift */
                tmp = TMMR_ac_DW.UnitDelay_DSTATE_ec;
                if ((((((VeTMMR_b_EndOfTorqPhs_DS) &&
                        (TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu ==
                         tmp)) && (((uint32)
                                    TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu)
                                   != CeTRNR_e_SteadyState)) && rtb_Logical_dz) &&
                     (((uint32)Switch3) >= CeHCCR_e_ClSynched)) ||
                        ((((!VeTMMR_b_EndOfTorqPhs_DS) &&
                           (TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu
                            != tmp)) && (((uint32)
                                          TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu)
                       != CeTRNR_e_SteadyState)) && rtb_Logical_dz))
                {
                    /* Transition: '<S381>:902' */
                    /* Transition: '<S381>:909' */
                    /* Transition: '<S381>:906' */
                    /* Transition: '<S381>:890' */
                    /* Transition: '<S381>:907' */
                    guard2 = true;
                }
                else
                {
                    /*  TrqPhsAbort, return to steady state */
                    /*  TrqPhsAbort &End of torqphase is true  */
                    if ((((VeTMMR_b_EndOfTorqPhs_DS) &&
                            (TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu
                             != TMMR_ac_DW.UnitDelay_DSTATE_ec)) && (((uint32)
                            TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu)
                            != CeTRNR_e_SteadyState)) && rtb_Logical_dz)
                    {
                        /* Transition: '<S381>:917' */
                        /* Transition: '<S381>:891' */
                        /* Transition: '<S381>:919' */
                        guard1 = true;
                    }
                    else
                    {
                        /*  Go back to steady state when shifttype is steady state or ShftTypeFA is true */
                        if ((((uint32)
                                TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu)
                             == CeTRNR_e_SteadyState) || rtb_AND5)
                        {
                            /* Transition: '<S381>:924' */
                            guard2 = true;
                        }
                        else
                        {
                            TMMR_ac_B.VeTMMR_e_TransShiftStat_DS_i =
                                CeTMMR_e_TorquePhase;
                        }
                    }
                }
            }
            break;
        }

        if (guard2)
        {
            TMMR_ac_DW.is_c1_TMMR_ac = TMMR_ac_IN_SteadyState;

            /* Entry 'SteadyState': '<S381>:758' */
            TMMR_ac_B.VeTMMR_e_TransShiftStat_DS_i = CeTMMR_e_SteadyState;
        }

        if (guard1)
        {
            TMMR_ac_DW.is_c1_TMMR_ac = TMMR_ac_IN_SpeedPhase;

            /* Entry 'SpeedPhase': '<S381>:724' */
            TMMR_ac_B.VeTMMR_e_TransShiftStat_DS_i = CeTMMR_e_SpeedPhase;
        }
    }

    /* End of Chart: '<S232>/TMCC_ShiftStatMgr' */

    /* RelationalOperator: '<S231>/Comparison1' incorporates:
     *  DataStoreWrite: '<S232>/Data Store Write1'
     */
    VeTMMR_e_TransShiftStat_DS = TMMR_ac_B.VeTMMR_e_TransShiftStat_DS_i;

    /* Update for UnitDelay: '<S232>/Unit Delay' incorporates:
     *  SignalConversion generated from: '<S1>/VeTRNR_e_ShftType'
     */
    TMMR_ac_DW.UnitDelay_DSTATE_ec =
        TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu;

    /* S-Function (fcgen): '<S17>/FcnCall_Generator' incorporates:
     *  SubSystem: '<S17>/TransShiftStateAction'
     */
    /* DataStoreWrite: '<S231>/Data Store Write' incorporates:
     *  UnitDelay: '<S231>/Unit Delay1'
     */
    VeTMMR_e_PrevTransShiftStat_DS = TMMR_ac_DW.UnitDelay1_DSTATE_ms;

    /* RelationalOperator: '<S231>/Comparison8' incorporates:
     *  DataStoreRead: '<S231>/Data Store Read1'
     *  UnitDelay: '<S231>/Unit Delay1'
     */
    TMMR_ac_DW.UnitDelay1_DSTATE_ms = VeTMMR_e_TransShiftStat_DS;

    /* RelationalOperator: '<S231>/Comparison8' incorporates:
     *  Constant: '<S239>/Constant'
     */
    rtb_Logical_dz = (((uint32)TMMR_ac_DW.UnitDelay1_DSTATE_ms) ==
                      CeTMMR_e_TorquePhase);

    /* RelationalOperator: '<S231>/Comparison9' incorporates:
     *  Constant: '<S236>/Constant'
     */
    rtb_Comparison9 = (((uint32)TMMR_ac_DW.UnitDelay1_DSTATE_ms) ==
                       CeTMMR_e_SpeedPhase);

    /* Outputs for Atomic SubSystem: '<S231>/EdgeRising' */
    /* Logic: '<S233>/AND' incorporates:
     *  Logic: '<S233>/OR1'
     *  UnitDelay: '<S233>/Unit Delay'
     */
    rtb_Switch1_cm = (rtb_Logical_dz && (!TMMR_ac_DW.UnitDelay_DSTATE_puo));

    /* Update for UnitDelay: '<S233>/Unit Delay' */
    TMMR_ac_DW.UnitDelay_DSTATE_puo = rtb_Logical_dz;

    /* End of Outputs for SubSystem: '<S231>/EdgeRising' */

    /* Logic: '<S231>/AND5' incorporates:
     *  Constant: '<S237>/Constant'
     *  RelationalOperator: '<S231>/Comparison1'
     */
    rtb_AND5 = ((VeTMMR_b_TrqB4SpdPhsActv) && (((uint32)
                  VeTMMR_e_TransShiftStat_DS) == CeTMMR_e_TorquePhase));

    /* Outputs for Atomic SubSystem: '<S231>/EdgeRising2' */
    /* Logic: '<S235>/AND' incorporates:
     *  Logic: '<S235>/OR1'
     *  UnitDelay: '<S235>/Unit Delay'
     */
    rtb_AND_c = (rtb_AND5 && (!TMMR_ac_DW.UnitDelay_DSTATE_gd));

    /* Update for UnitDelay: '<S235>/Unit Delay' */
    TMMR_ac_DW.UnitDelay_DSTATE_gd = rtb_AND5;

    /* End of Outputs for SubSystem: '<S231>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S231>/EdgeRising1' */
    /* Logic: '<S234>/AND' incorporates:
     *  Logic: '<S234>/OR1'
     *  UnitDelay: '<S234>/Unit Delay'
     */
    rtb_AND_nz = (rtb_Comparison9 && (!TMMR_ac_DW.UnitDelay_DSTATE_cue));

    /* Update for UnitDelay: '<S234>/Unit Delay' */
    TMMR_ac_DW.UnitDelay_DSTATE_cue = rtb_Comparison9;

    /* End of Outputs for SubSystem: '<S231>/EdgeRising1' */

    /* If: '<S231>/If' incorporates:
     *  Constant: '<S238>/Constant'
     *  RelationalOperator: '<S231>/Comparison7'
     */
    TMMR_ac_DW.If_ActiveSubsystem = -1;
    if (((uint32)TMMR_ac_DW.UnitDelay1_DSTATE_ms) == CeTMMR_e_SteadyState)
    {
        TMMR_ac_DW.If_ActiveSubsystem = 0;

        /* Outputs for IfAction SubSystem: '<S231>/SteadyState' incorporates:
         *  ActionPort: '<S241>/Action Port'
         */
        /* If: '<S241>/If3' incorporates:
         *  DataStoreRead: '<S241>/Data Store Read4'
         *  RelationalOperator: '<S241>/Not Equal2'
         */
        if (VeTMMR_e_TransShiftStat_DS != VeTMMR_e_PrevTransShiftStat_DS)
        {
            /* Outputs for IfAction SubSystem: '<S241>/TMMC_SS_Entry_Action' incorporates:
             *  ActionPort: '<S288>/Action Port'
             */
            /* DataStoreWrite: '<S288>/Data Store Write14' */
            TMMR_ac_DW.VeTMMR_r_OffgPreOptLead_DS = TMMR_ac_B.Merge1_k;

            /* Sum: '<S302>/Summation' incorporates:
             *  DataStoreWrite: '<S288>/Data Store Write15'
             */
            TMMR_ac_DW.VeTMMR_r_OffgPostOptLead_DS = TMMR_ac_B.Merge2_m;

            /* DataStoreWrite: '<S288>/Data Store Write12' */
            TMMR_ac_DW.VeTMMR_r_OncPreOptLead_DS = TMMR_ac_B.Merge3;

            /* DataStoreWrite: '<S288>/Data Store Write13' */
            TMMR_ac_DW.VeTMMR_r_OncPostOptLead_DS = TMMR_ac_B.Merge4_i;

            /* DataStoreWrite: '<S288>/Data Store Write1' */
            TMMR_ac_DW.VeTMMR_M_OncTCROvrdMin_DS = Switch5;

            /* RelationalOperator: '<S288>/Equal3' incorporates:
             *  Constant: '<S292>/Calib'
             *  DataStoreWrite: '<S288>/Data Store Write3'
             */
            VeTMMR_b_InertiaTorqActive_DS = (Switch5 >=
                KeTMMR_M_InertCompActThrs);

            /* DataStoreWrite: '<S288>/Data Store Write6' */
            TMMR_ac_DW.VeTMMR_M_OptLdLkdTCROvrdMin_DS = Switch5;

            /* DataStoreWrite: '<S288>/Data Store Write' incorporates:
             *  Constant: '<S296>/Calib'
             */
            TMMR_ac_DW.VeTMMR_M_OncTCROvrdMax_DS = KeTMMR_M_SSOncTCROvrdMax;

            /* DataStoreWrite: '<S288>/Data Store Write10' incorporates:
             *  Constant: '<S288>/TRUE Constant1'
             */
            VeTMMR_b_EndOfSpdPhs_DS = false;

            /* DataStoreWrite: '<S288>/Data Store Write11' incorporates:
             *  Constant: '<S288>/TRUE Constant2'
             */
            VeTMMR_b_EndOfTorqPhs_DS = false;

            /* DataStoreWrite: '<S288>/Data Store Write2' incorporates:
             *  Constant: '<S288>/TRUE Constant4'
             */
            VeTMMR_b_ClampApplied_DS = false;

            /* DataStoreWrite: '<S288>/Data Store Write4' incorporates:
             *  Constant: '<S295>/Calib'
             */
            VeTMMR_M_OffgTCROvrdMin_DS = KeTMMR_M_SSOffgTCROvrdMin;

            /* DataStoreWrite: '<S288>/Data Store Write5' incorporates:
             *  Constant: '<S294>/Calib'
             */
            VeTMMR_M_OffgTCROvrdMax_DS = KeTMMR_M_SSOffgTCROvrdMax;

            /* DataStoreWrite: '<S288>/Data Store Write7' incorporates:
             *  Constant: '<S293>/Calib'
             */
            TMMR_ac_DW.VeTMMR_M_OptLdLkdTCROvrdMax_DS =
                KeTMMR_M_SSOffgLeadTCROvrdMax;

            /* DataStoreWrite: '<S288>/Data Store Write8' incorporates:
             *  Constant: '<S291>/Constant'
             */
            VeTMMR_e_OffgStatControl_DS = CeHSER_e_ClchStatCntrl_Else;

            /* DataStoreWrite: '<S288>/Data Store Write9' incorporates:
             *  Constant: '<S290>/Constant'
             */
            VeTMMR_e_OncStatControl_DS = CeHSER_e_ClchStatCntrl_Else;

            /* End of Outputs for SubSystem: '<S241>/TMMC_SS_Entry_Action' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S241>/TMMC_SS_During_Action' incorporates:
             *  ActionPort: '<S287>/Action Port'
             */
            /* DataStoreWrite: '<S287>/Data Store Write1' */
            TMMR_ac_DW.VeTMMR_M_OncTCROvrdMin_DS = Switch5;

            /* RelationalOperator: '<S287>/Equal3' incorporates:
             *  Constant: '<S289>/Calib'
             *  DataStoreWrite: '<S287>/Data Store Write3'
             */
            VeTMMR_b_InertiaTorqActive_DS = (Switch5 >=
                KeTMMR_M_InertCompActThrs);

            /* DataStoreWrite: '<S287>/Data Store Write6' */
            TMMR_ac_DW.VeTMMR_M_OptLdLkdTCROvrdMin_DS = Switch5;

            /* End of Outputs for SubSystem: '<S241>/TMMC_SS_During_Action' */
        }

        /* End of If: '<S241>/If3' */
        /* End of Outputs for SubSystem: '<S231>/SteadyState' */
    }
    else if (rtb_Logical_dz)
    {
        TMMR_ac_DW.If_ActiveSubsystem = 1;

        /* Outputs for IfAction SubSystem: '<S231>/TorquePhase' incorporates:
         *  ActionPort: '<S242>/Action Port'
         */
        /* If: '<S242>/If3' incorporates:
         *  DataStoreRead: '<S242>/Data Store Read4'
         *  Logic: '<S312>/OR'
         *  RelationalOperator: '<S242>/Not Equal2'
         *  Switch: '<S318>/Switch1'
         */
        if (VeTMMR_e_TransShiftStat_DS != VeTMMR_e_PrevTransShiftStat_DS)
        {
            /* Outputs for IfAction SubSystem: '<S242>/TMMC_TP_Entry_Action' incorporates:
             *  ActionPort: '<S301>/Action Port'
             */
            /* Outputs for Function Call SubSystem: '<S3>/Clch1_3_Convert_ClchOff_Onc' */
            /* MinMax: '<S301>/Minimum1' incorporates:
             *  Constant: '<S301>/Constant Value3'
             *  DataStoreWrite: '<S301>/Data Store Write5'
             *  SignalConversion generated from: '<S6>/TcRoff'
             */
            VeTMMR_M_OffgTCROvrdMin_DS = fminf(Switch_idx_2, 0.0F);

            /* End of Outputs for SubSystem: '<S3>/Clch1_3_Convert_ClchOff_Onc' */

            /* Outputs for Atomic SubSystem: '<S301>/Protected Division' */
            /* Switch: '<S379>/Switch1' incorporates:
             *  Constant: '<S378>/Calib'
             *  Constant: '<S379>/Constant Value'
             *  Constant: '<S379>/Constant Value1'
             *  Constant: '<S379>/Constant Value2'
             *  Constant: '<S379>/Constant Value3'
             *  DataStoreWrite: '<S301>/Data Store Write31'
             *  DataStoreWrite: '<S301>/Data Store Write5'
             *  Logic: '<S379>/AND'
             *  Product: '<S379>/Division'
             *  RelationalOperator: '<S379>/Greater Than or Equal '
             *  RelationalOperator: '<S379>/Greater Than or Equal 1'
             *  RelationalOperator: '<S379>/Not Equal'
             *  RelationalOperator: '<S379>/Not Equal1'
             *  Switch: '<S379>/Switch2'
             *  Switch: '<S379>/Switch3'
             */
            if ((VeTMMR_M_OffgTCROvrdMin_DS != 0.0F) && (KeTMMR_dM_OffgTcR_RmpRt
                 != 0.0F))
            {
                VeTMMR_t_Prof_MaxTorqXfrTm_DS = VeTMMR_M_OffgTCROvrdMin_DS /
                    KeTMMR_dM_OffgTcR_RmpRt;
            }
            else if (VeTMMR_M_OffgTCROvrdMin_DS > 0.0F)
            {
                /* Switch: '<S379>/Switch2' incorporates:
                 *  Constant: '<S379>/MAXFLOAT'
                 *  DataStoreWrite: '<S301>/Data Store Write31'
                 */
                VeTMMR_t_Prof_MaxTorqXfrTm_DS = 3.402823466E+38F;
            }
            else if (VeTMMR_M_OffgTCROvrdMin_DS < 0.0F)
            {
                /* Switch: '<S379>/Switch3' incorporates:
                 *  Constant: '<S379>/MINFLOAT'
                 *  DataStoreWrite: '<S301>/Data Store Write31'
                 *  Switch: '<S379>/Switch2'
                 */
                VeTMMR_t_Prof_MaxTorqXfrTm_DS = -3.402823466E+38F;
            }
            else
            {
                /* DataStoreWrite: '<S301>/Data Store Write31' incorporates:
                 *  Constant: '<S379>/Constant Value4'
                 *  Switch: '<S379>/Switch2'
                 *  Switch: '<S379>/Switch3'
                 */
                VeTMMR_t_Prof_MaxTorqXfrTm_DS = 0.0F;
            }

            /* End of Switch: '<S379>/Switch1' */
            /* End of Outputs for SubSystem: '<S301>/Protected Division' */

            /* DataStoreWrite: '<S301>/Data Store Write6' incorporates:
             *  DataStoreWrite: '<S301>/Data Store Write5'
             */
            TMMR_ac_DW.VeTMMR_M_OptLdLkdTCROvrdMin_DS =
                VeTMMR_M_OffgTCROvrdMin_DS;

            /* DataStoreWrite: '<S301>/Data Store Write8' incorporates:
             *  Constant: '<S377>/Constant'
             */
            VeTMMR_e_OffgStatControl_DS = CeHSER_e_OFFGoing_C2CTrqPhs;

            /* DataStoreWrite: '<S301>/Data Store Write9' incorporates:
             *  Constant: '<S376>/Constant'
             */
            VeTMMR_e_OncStatControl_DS = CeHSER_e_ONComing_C2CTrqPhs;

            /* End of Outputs for SubSystem: '<S242>/TMMC_TP_Entry_Action' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S242>/TMMC_TP_During_Action' incorporates:
             *  ActionPort: '<S300>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S312>/Accumulator Reset ' */
            if (rtb_Switch1_cm)
            {
                /* Switch: '<S318>/Switch1' incorporates:
                 *  Constant: '<S312>/Constant Value'
                 *  UnitDelay: '<S318>/Unit Delay'
                 */
                TMMR_ac_DW.UnitDelay_DSTATE_in = 0.0F;
            }
            else
            {
                /* Switch: '<S318>/Switch1' incorporates:
                 *  Constant: '<S307>/Calib'
                 *  Sum: '<S318>/Summation'
                 *  UnitDelay: '<S318>/Unit Delay'
                 */
                TMMR_ac_DW.UnitDelay_DSTATE_in += HeTMMR_t_MedTED_dT;
            }

            /* End of Outputs for SubSystem: '<S312>/Accumulator Reset ' */

            /* Outputs for Atomic SubSystem: '<S313>/Accumulator Reset ' */
            /* Switch: '<S320>/Switch1' incorporates:
             *  Constant: '<S307>/Calib'
             *  Sum: '<S320>/Summation'
             *  UnitDelay: '<S320>/Unit Delay'
             */
            TMMR_ac_DW.UnitDelay_DSTATE_f += HeTMMR_t_MedTED_dT;

            /* End of Outputs for SubSystem: '<S313>/Accumulator Reset ' */

            /* DataStoreWrite: '<S300>/Data Store Write1' incorporates:
             *  UnitDelay: '<S320>/Unit Delay'
             */
            VeTMMR_t_Prof_LeadTorqXfrTm_DS = TMMR_ac_DW.UnitDelay_DSTATE_f;

            /* Switch: '<S315>/Switch1' incorporates:
             *  Constant: '<S308>/Calib'
             *  Constant: '<S316>/Calib'
             *  Constant: '<S317>/Calib'
             *  Logic: '<S311>/Logical2'
             *  RelationalOperator: '<S311>/Comparison3'
             *  Switch: '<S311>/Switch'
             *  UnitDelay: '<S320>/Unit Delay'
             */
            if ((KeTMMR_b_CLOvrd) && (KeTMMR_b_CLOvrdVal))
            {
                rtb_Logical_dz = !Switch1_l;
            }
            else
            {
                rtb_Logical_dz = (TMMR_ac_DW.UnitDelay_DSTATE_f <=
                                  KeTMMR_t_LeadProfTm);
            }

            /* End of Switch: '<S315>/Switch1' */

            /* Outputs for Atomic SubSystem: '<S311>/Accumulator Reset ' */
            /* Switch: '<S314>/Switch1' incorporates:
             *  Constant: '<S307>/Calib'
             *  Constant: '<S311>/Constant Value'
             *  Sum: '<S314>/Summation'
             *  UnitDelay: '<S314>/Unit Delay'
             */
            if (rtb_Logical_dz)
            {
                TMMR_ac_DW.UnitDelay_DSTATE_j = 0.0F;
            }
            else
            {
                TMMR_ac_DW.UnitDelay_DSTATE_j += HeTMMR_t_MedTED_dT;
            }

            /* End of Switch: '<S314>/Switch1' */
            /* End of Outputs for SubSystem: '<S311>/Accumulator Reset ' */

            /* DataStoreWrite: '<S300>/Data Store Write32' incorporates:
             *  UnitDelay: '<S314>/Unit Delay'
             */
            VeTMMR_t_Prof_TorqXfrTm_DS = TMMR_ac_DW.UnitDelay_DSTATE_j;

            /* Outputs for Atomic SubSystem: '<S300>/TorqPhs_StatePost' */
            /* RelationalOperator: '<S347>/Greater  Than' incorporates:
             *  Constant: '<S347>/Constant Value3'
             *  DataStoreRead: '<S322>/Data Store Read1'
             */
            Switch1_l = (VeTMMR_t_Prof_TorqXfrTm_DS > 0.0F);

            /* Outputs for Function Call SubSystem: '<S3>/Clch1_3_Convert_ClchOff_Onc' */
            /* MinMax: '<S336>/Minimum1' incorporates:
             *  Constant: '<S336>/Constant Value3'
             *  SignalConversion generated from: '<S6>/TcRoff'
             */
            Switch5 = fminf(Switch_idx_2, 0.0F);

            /* End of Outputs for SubSystem: '<S3>/Clch1_3_Convert_ClchOff_Onc' */

            /* Outputs for Atomic SubSystem: '<S347>/EdgeRising2' */
            /* Logic: '<S351>/AND' incorporates:
             *  Logic: '<S351>/OR1'
             *  UnitDelay: '<S351>/Unit Delay'
             */
            rtb_OR1_e4 = (Switch1_l && (!TMMR_ac_DW.UnitDelay_DSTATE_ix));

            /* Update for UnitDelay: '<S351>/Unit Delay' */
            TMMR_ac_DW.UnitDelay_DSTATE_ix = Switch1_l;

            /* End of Outputs for SubSystem: '<S347>/EdgeRising2' */

            /* If: '<S347>/If' */
            if (Switch1_l)
            {
                /* Outputs for IfAction SubSystem: '<S347>/Execute_Torque_Transfer' incorporates:
                 *  ActionPort: '<S352>/Action Port'
                 */
                /* MinMax: '<S352>/Minimum3' incorporates:
                 *  Constant: '<S307>/Calib'
                 *  Constant: '<S325>/Calib'
                 *  Constant: '<S352>/Constant Value7'
                 *  DataStoreRead: '<S310>/Data Store Read1'
                 *  Product: '<S352>/Multiplication1'
                 *  Sum: '<S352>/Subtraction'
                 */
                rtb_Merge1_b = fminf((KeTMMR_dM_OffgTcR_RmpRt *
                                      HeTMMR_t_MedTED_dT) +
                                     VeTMMR_M_OffgTCROvrdMin_DS, 0.0F);

                /* Outputs for Atomic SubSystem: '<S352>/Timer Retrigger Reset Enabled' */
                /* Switch: '<S360>/Switch1' incorporates:
                 *  Constant: '<S307>/Calib'
                 *  Constant: '<S339>/Calib'
                 *  Constant: '<S352>/Constant Value2'
                 *  Constant: '<S360>/Constant Value4'
                 *  Logic: '<S352>/OR1'
                 *  MinMax: '<S360>/Maximum'
                 *  RelationalOperator: '<S352>/Equal1'
                 *  Sum: '<S360>/Subtraction'
                 *  UnitDelay: '<S360>/Unit Delay'
                 */
                if ((rtb_Merge1_b < 0.0F) || rtb_OR1_e4)
                {
                    TMMR_ac_DW.UnitDelay_DSTATE_i = KeTMMR_t_MaxTmAftrTcR0;
                }
                else
                {
                    TMMR_ac_DW.UnitDelay_DSTATE_i = fmaxf
                        (TMMR_ac_DW.UnitDelay_DSTATE_i - HeTMMR_t_MedTED_dT,
                         0.0F);
                }

                /* End of Switch: '<S360>/Switch1' */
                /* End of Outputs for SubSystem: '<S352>/Timer Retrigger Reset Enabled' */

                /* If: '<S352>/If' incorporates:
                 *  Constant: '<S324>/Calib'
                 *  Constant: '<S360>/Constant Value2'
                 *  RelationalOperator: '<S352>/Equal'
                 *  RelationalOperator: '<S360>/Greater  Than1'
                 *  UnitDelay: '<S360>/Unit Delay'
                 */
                if (Switch5 <= KeTMMR_M_offg_MinTcRThresh)
                {
                    /* Outputs for IfAction SubSystem: '<S352>/TcR_Actual_is_Zero' incorporates:
                     *  ActionPort: '<S359>/Action Port'
                     */
                    /* Logic: '<S322>/AND1' incorporates:
                     *  Constant: '<S359>/TRUE Constant'
                     *  Merge: '<S352>/Merge1'
                     *  SignalConversion generated from: '<S359>/EndOfTorqTrnsfr'
                     */
                    Switch1_l = true;

                    /* SignalConversion generated from: '<S359>/Tc_Off' incorporates:
                     *  Constant: '<S359>/Constant Value2'
                     *  UnitDelay: '<S352>/TcOn_Prev3'
                     */
                    TMMR_ac_DW.TcOn_Prev3_DSTATE = 0.0F;

                    /* End of Outputs for SubSystem: '<S352>/TcR_Actual_is_Zero' */
                }
                else
                {
                    /* Outputs for Atomic SubSystem: '<S352>/Timer Retrigger Reset Enabled' */
                    if (TMMR_ac_DW.UnitDelay_DSTATE_i <= 0.0F)
                    {
                        /* Outputs for IfAction SubSystem: '<S352>/Tm_Since_TcR_Ramped_To_Zero1' incorporates:
                         *  ActionPort: '<S362>/Action Port'
                         */
                        /* MinMax: '<S362>/Minimum3' incorporates:
                         *  Constant: '<S307>/Calib'
                         *  Constant: '<S327>/Calib'
                         *  Constant: '<S362>/Constant Value7'
                         *  Product: '<S362>/Multiplication2'
                         *  Sum: '<S362>/Summation2'
                         *  UnitDelay: '<S352>/TcOn_Prev3'
                         */
                        TMMR_ac_DW.TcOn_Prev3_DSTATE = fmaxf
                            (TMMR_ac_DW.TcOn_Prev3_DSTATE -
                             (KeTMMR_dM_offg_TcOffFastRmpRt * HeTMMR_t_MedTED_dT),
                             0.0F);

                        /* Logic: '<S322>/AND1' incorporates:
                         *  Constant: '<S362>/Constant Value1'
                         *  Merge: '<S352>/Merge1'
                         *  RelationalOperator: '<S362>/Equal2'
                         */
                        Switch1_l = (TMMR_ac_DW.TcOn_Prev3_DSTATE <= 0.0F);

                        /* End of Outputs for SubSystem: '<S352>/Tm_Since_TcR_Ramped_To_Zero1' */
                    }
                    else
                    {
                        /* Outputs for IfAction SubSystem: '<S352>/Else' incorporates:
                         *  ActionPort: '<S354>/Action Port'
                         */
                        /* Logic: '<S322>/AND1' incorporates:
                         *  Constant: '<S354>/FALSE Constant'
                         *  Merge: '<S352>/Merge1'
                         *  SignalConversion generated from: '<S354>/EndOfTorqTrnsfr'
                         */
                        Switch1_l = false;

                        /* Sum: '<S354>/Summation1' incorporates:
                         *  Constant: '<S11>/Calib'
                         *  UnitDelay: '<S352>/TcOn_Prev3'
                         */
                        TMMR_ac_DW.TcOn_Prev3_DSTATE = Switch5 +
                            KeTMMR_M_Coffg_ClmpTorq;

                        /* End of Outputs for SubSystem: '<S352>/Else' */
                    }

                    /* End of Outputs for SubSystem: '<S352>/Timer Retrigger Reset Enabled' */
                }

                /* End of If: '<S352>/If' */

                /* Gain: '<S356>/Gain' incorporates:
                 *  UnitDelay: '<S347>/TcOn_Prev2'
                 */
                TMMR_ac_DW.TcOn_Prev2_DSTATE = 0.0F;

                /* End of Outputs for SubSystem: '<S347>/Execute_Torque_Transfer' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S347>/Torque_Transfer_Wait_State' incorporates:
                 *  ActionPort: '<S353>/Action Port'
                 */
                /* Merge: '<S347>/Merge2' incorporates:
                 *  Gain: '<S366>/Gain'
                 */
                rtb_Merge1_b = Switch5;

                /* Gain: '<S367>/Gain' */
                TMMR_ac_B.Gain_l = Switch5;

                /* Gain: '<S365>/Gain' incorporates:
                 *  Constant: '<S347>/Constant Value1'
                 *  UnitDelay: '<S347>/TcOn_Prev2'
                 */
                TMMR_ac_DW.TcOn_Prev2_DSTATE = 0.0F;

                /* Logic: '<S322>/AND1' incorporates:
                 *  Constant: '<S353>/FALSE Constant'
                 *  SignalConversion generated from: '<S353>/EndOfTorqTrnsfr'
                 */
                Switch1_l = false;

                /* End of Outputs for SubSystem: '<S347>/Torque_Transfer_Wait_State' */
            }

            /* End of If: '<S347>/If' */

            /* RelationalOperator: '<S322>/Equal3' incorporates:
             *  Constant: '<S337>/Calib'
             *  DataStoreWrite: '<S322>/Data Store Write1'
             */
            VeTMMR_b_InertiaTorqActive_DS = (rtb_Merge1_b >=
                KeTMMR_M_InertCompActThrs);

            /* Outputs for Atomic SubSystem: '<S336>/Protected Division' */
            /* Switch: '<S349>/Switch1' incorporates:
             *  Constant: '<S325>/Calib'
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
            if ((TMMR_ac_B.Gain_l != 0.0F) && (KeTMMR_dM_OffgTcR_RmpRt != 0.0F))
            {
                /* Switch: '<S349>/Switch1' incorporates:
                 *  Product: '<S349>/Division'
                 */
                rtb_Switch1_a = TMMR_ac_B.Gain_l / KeTMMR_dM_OffgTcR_RmpRt;
            }
            else if (TMMR_ac_B.Gain_l > 0.0F)
            {
                /* Switch: '<S349>/Switch2' incorporates:
                 *  Constant: '<S349>/MAXFLOAT'
                 *  Switch: '<S349>/Switch1'
                 */
                rtb_Switch1_a = 3.402823466E+38F;
            }
            else if (TMMR_ac_B.Gain_l < 0.0F)
            {
                /* Switch: '<S349>/Switch3' incorporates:
                 *  Constant: '<S349>/MINFLOAT'
                 *  Switch: '<S349>/Switch1'
                 *  Switch: '<S349>/Switch2'
                 */
                rtb_Switch1_a = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S349>/Switch1' incorporates:
                 *  Constant: '<S349>/Constant Value4'
                 *  Switch: '<S349>/Switch2'
                 *  Switch: '<S349>/Switch3'
                 */
                rtb_Switch1_a = 0.0F;
            }

            /* End of Switch: '<S349>/Switch1' */
            /* End of Outputs for SubSystem: '<S336>/Protected Division' */

            /* MinMax: '<S336>/Minimum2' incorporates:
             *  DataStoreWrite: '<S322>/Data Store Write31'
             */
            VeTMMR_t_Prof_MaxTorqXfrTm_DS = fmaxf(rtb_Switch1_a, 0.0F);

            /* Sum: '<S310>/Sum' incorporates:
             *  Lookup_n-D: '<S329>/Vector'
             *  Lookup_n-D: '<S330>/Vector'
             *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
             *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
             */
            rtb_Switch1_a = look1_iflf_binlca_16a
                (TMMR_ac_B.TmpSignalConversionAtVeAPSR_Pct_AccelPed, ((const
                   float32 *)&(KxTMMR_t_offg_OfgPresLag[0])), ((const float32 *)
                  &(KtTMMR_t_offg_OfgPresLag[0])), 3U) + look1_iflf_binlca_16a
                (TMMR_ac_B.TmpSignalConversionAtVeTFTR_T_TransOilTe, ((const
                   float32 *)&(KxTMMR_t_offg_OfgPresLag_TempDep[0])), ((const
                   float32 *)&(KtTMMR_t_offg_OfgPresLag_TempDep[0])), 3U);

            /* Outputs for Function Call SubSystem: '<S3>/Clch1_3_Convert_ClchOff_Onc' */
            /* RelationalOperator: '<S322>/Comparison' incorporates:
             *  Lookup_n-D: '<S328>/Vector'
             *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
             *  SignalConversion generated from: '<S6>/Coff_EstTorq'
             */
            rtb_OR1_e4 = (Switch_idx_1 <= look1_iflf_binlca_16a
                          (TMMR_ac_B.TmpSignalConversionAtVeAPSR_Pct_AccelPed,
                           ((const float32 *)&(KxTMMR_M_offg_OfgTcEstThresh[0])),
                           ((const float32 *)&(KtTMMR_M_offg_OfgTcEstThresh[0])),
                           3U));

            /* End of Outputs for SubSystem: '<S3>/Clch1_3_Convert_ClchOff_Onc' */

            /* Outputs for Atomic SubSystem: '<S322>/Resettable Turn On Delay Time' */
            /* Outputs for Atomic SubSystem: '<S340>/EdgeRising' */
            /* Logic: '<S375>/OR1' incorporates:
             *  UnitDelay: '<S375>/Unit Delay'
             */
            rtb_AND_nz = !TMMR_ac_DW.UnitDelay_DSTATE_m;

            /* Update for UnitDelay: '<S375>/Unit Delay' */
            TMMR_ac_DW.UnitDelay_DSTATE_m = rtb_OR1_e4;

            /* Switch: '<S340>/Switch1' incorporates:
             *  Constant: '<S307>/Calib'
             *  Constant: '<S340>/Constant Value1'
             *  Logic: '<S340>/OR'
             *  Logic: '<S340>/OR1'
             *  Logic: '<S375>/AND'
             *  MinMax: '<S340>/Minimum'
             *  Sum: '<S340>/Summation'
             *  Switch: '<S340>/Switch3'
             *  UnitDelay: '<S340>/Unit Delay'
             */
            if ((!rtb_OR1_e4) || (rtb_Switch1_cm || (rtb_OR1_e4 && rtb_AND_nz)))
            {
                TMMR_ac_DW.UnitDelay_DSTATE_d = 0.0F;
            }
            else
            {
                TMMR_ac_DW.UnitDelay_DSTATE_d = fminf(rtb_Switch1_a,
                    HeTMMR_t_MedTED_dT + TMMR_ac_DW.UnitDelay_DSTATE_d);
            }

            /* End of Switch: '<S340>/Switch1' */
            /* End of Outputs for SubSystem: '<S340>/EdgeRising' */

            /* Logic: '<S322>/Logical3' incorporates:
             *  Logic: '<S340>/AND'
             *  Logic: '<S340>/OR2'
             *  RelationalOperator: '<S340>/Greater  Than1'
             *  UnitDelay: '<S340>/Unit Delay'
             */
            rtb_OR1_e4 = (Switch1_l && (((!rtb_Switch1_cm) && rtb_OR1_e4) &&
                           (TMMR_ac_DW.UnitDelay_DSTATE_d >= rtb_Switch1_a)));

            /* End of Outputs for SubSystem: '<S322>/Resettable Turn On Delay Time' */

            /* Logic: '<S322>/AND1' incorporates:
             *  Constant: '<S333>/Constant'
             *  Constant: '<S334>/Constant'
             *  Constant: '<S338>/Calib'
             *  RelationalOperator: '<S322>/Equal'
             *  RelationalOperator: '<S322>/Equal1'
             *  RelationalOperator: '<S322>/Equal2'
             */
            Switch1_l = (((((uint32)Switch2) != CeHCCR_e_ClLocked) && (((uint32)
                            Switch2) != CeHCCR_e_ClSynched)) && (Switch2 !=
                          KeTMMR_e_OffgAddlClchStat));

            /* Outputs for Function Call SubSystem: '<S3>/Clch1_3_Convert_ClchOff_Onc' */
            /* Logic: '<S322>/OR' incorporates:
             *  Constant: '<S335>/Constant'
             *  DataStoreWrite: '<S322>/Data Store Write4'
             *  Logic: '<S322>/AND2'
             *  Logic: '<S322>/AND3'
             *  Logic: '<S322>/Logical1'
             *  Logic: '<S322>/OR1'
             *  Merge: '<S13>/Merge2'
             *  RelationalOperator: '<S322>/Equal4'
             *  RelationalOperator: '<S322>/Equal5'
             *  RelationalOperator: '<S322>/Equal6'
             *  RelationalOperator: '<S322>/Equal7'
             *  SignalConversion generated from: '<S6>/TcRoff'
             */
            VeTMMR_b_EndOfTorqPhs_DS = (((rtb_OR1_e4 || Switch1_l) || (Switch1_l
                && (TMMR_ac_B.Gain_gh))) || (((((uint32)TMMR_ac_B.Merge2_l) ==
                CeTMMR_e_SpdBeforeTrqPhase) && (Switch_idx_2 >
                TMMR_ac_B.Merge3_j)) && ((((uint32)Switch3) !=
                CeHCCR_e_ClSynched) && (((uint32)Switch3) != CeHCCR_e_ClLocked))));

            /* End of Outputs for SubSystem: '<S3>/Clch1_3_Convert_ClchOff_Onc' */

            /* DataStoreWrite: '<S322>/Data Store Write5' */
            VeTMMR_M_OffgTCROvrdMin_DS = rtb_Merge1_b;

            /* If: '<S348>/If1' incorporates:
             *  Constant: '<S348>/Constant Value3'
             *  DataStoreRead: '<S322>/Data Store Read2'
             *  RelationalOperator: '<S348>/Greater  Than1'
             */
            if (VeTMMR_t_Prof_LeadTorqXfrTm_DS > 0.0F)
            {
                /* Outputs for IfAction SubSystem: '<S348>/Execute_Lead_Torque_Transfer' incorporates:
                 *  ActionPort: '<S368>/Action Port'
                 */
                /* Outputs for Atomic SubSystem: '<S368>/Limiter1' */
                /* Gain: '<S371>/Gain' incorporates:
                 *  Constant: '<S368>/Constant Value'
                 *  Switch: '<S370>/Switch'
                 *  UnitDelay: '<S348>/TcOn_Prev4'
                 */
                TMMR_ac_DW.TcOn_Prev4_DSTATE = 0.0F;

                /* End of Outputs for SubSystem: '<S368>/Limiter1' */

                /* DataStoreWrite: '<S322>/Data Store Write6' incorporates:
                 *  Constant: '<S307>/Calib'
                 *  Constant: '<S325>/Calib'
                 *  Constant: '<S368>/Constant Value9'
                 *  DataStoreRead: '<S310>/Data Store Read2'
                 *  Gain: '<S372>/Gain'
                 *  Merge: '<S348>/Merge6'
                 *  MinMax: '<S368>/Minimum3'
                 *  Product: '<S368>/Multiplication3'
                 *  Sum: '<S368>/Subtraction'
                 */
                TMMR_ac_DW.VeTMMR_M_OptLdLkdTCROvrdMin_DS = fminf
                    ((HeTMMR_t_MedTED_dT * KeTMMR_dM_OffgTcR_RmpRt) +
                     TMMR_ac_DW.VeTMMR_M_OptLdLkdTCROvrdMin_DS, 0.0F);

                /* End of Outputs for SubSystem: '<S348>/Execute_Lead_Torque_Transfer' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S348>/Lead_Torque_Transfer_Wait_State' incorporates:
                 *  ActionPort: '<S369>/Action Port'
                 */
                /* DataStoreWrite: '<S322>/Data Store Write6' incorporates:
                 *  Gain: '<S373>/Gain'
                 *  Merge: '<S348>/Merge6'
                 */
                TMMR_ac_DW.VeTMMR_M_OptLdLkdTCROvrdMin_DS = Switch5;

                /* Gain: '<S374>/Gain' incorporates:
                 *  Constant: '<S348>/Constant Value4'
                 *  UnitDelay: '<S348>/TcOn_Prev4'
                 */
                TMMR_ac_DW.TcOn_Prev4_DSTATE = 0.0F;

                /* End of Outputs for SubSystem: '<S348>/Lead_Torque_Transfer_Wait_State' */
            }

            /* End of If: '<S348>/If1' */
            /* End of Outputs for SubSystem: '<S300>/TorqPhs_StatePost' */
            /* End of Outputs for SubSystem: '<S242>/TMMC_TP_During_Action' */
        }

        /* End of If: '<S242>/If3' */

        /* If: '<S242>/If1' */
        if (rtb_AND5)
        {
            TMMR_ac_DW.If1_ActiveSubsystem = 0;

            /* Outputs for IfAction SubSystem: '<S242>/OffgVTVR_Ramping' incorporates:
             *  ActionPort: '<S299>/Action Port'
             */
            /* DataStoreWrite: '<S299>/Data Store Write12' */
            TMMR_ac_DW.VeTMMR_r_OncPreOptLead_DS = TMMR_ac_B.Merge3;

            /* DataStoreWrite: '<S299>/Data Store Write13' */
            TMMR_ac_DW.VeTMMR_r_OncPostOptLead_DS = TMMR_ac_B.Merge4_i;

            /* Switch: '<S302>/Switch2' incorporates:
             *  Switch: '<S302>/Switch3'
             *  UnitDelay: '<S302>/Unit Delay'
             */
            if (rtb_AND_c)
            {
                TMMR_ac_DW.UnitDelay_DSTATE_ps[0] = tmpRead_0;
                TMMR_ac_DW.UnitDelay_DSTATE_ps[1] = TMMR_ac_B.Merge2_m;

                /* Switch: '<S302>/Switch1' incorporates:
                 *  Constant: '<S302>/Constant Value4'
                 *  UnitDelay: '<S302>/Unit Delay'
                 *  UnitDelay: '<S302>/Unit Delay3'
                 */
                TMMR_ac_DW.UnitDelay3_DSTATE_l = 0.0F;
            }
            else
            {
                /* MinMax: '<S302>/Maximum' incorporates:
                 *  Constant: '<S297>/Calib'
                 *  Constant: '<S303>/Calib'
                 */
                Switch_idx_2 = fmaxf(HeTMMR_t_MedTED_dT, KeTMMR_t_GRRamping4VTVR);

                /* Outputs for Atomic SubSystem: '<S302>/Protected Division' */
                /* Switch: '<S305>/Switch1' incorporates:
                 *  Constant: '<S297>/Calib'
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
                if ((HeTMMR_t_MedTED_dT != 0.0F) && (Switch_idx_2 != 0.0F))
                {
                    /* Switch: '<S305>/Switch1' incorporates:
                     *  Product: '<S305>/Division'
                     */
                    Switch_idx_2 = HeTMMR_t_MedTED_dT / Switch_idx_2;
                }
                else if (HeTMMR_t_MedTED_dT > 0.0F)
                {
                    /* Switch: '<S305>/Switch2' incorporates:
                     *  Constant: '<S305>/MAXFLOAT'
                     *  Switch: '<S305>/Switch1'
                     */
                    Switch_idx_2 = 3.402823466E+38F;
                }
                else if (HeTMMR_t_MedTED_dT < 0.0F)
                {
                    /* Switch: '<S305>/Switch3' incorporates:
                     *  Constant: '<S305>/MINFLOAT'
                     *  Switch: '<S305>/Switch1'
                     *  Switch: '<S305>/Switch2'
                     */
                    Switch_idx_2 = -3.402823466E+38F;
                }
                else
                {
                    /* Switch: '<S305>/Switch1' incorporates:
                     *  Constant: '<S305>/Constant Value4'
                     *  Switch: '<S305>/Switch2'
                     *  Switch: '<S305>/Switch3'
                     */
                    Switch_idx_2 = 0.0F;
                }

                /* End of Switch: '<S305>/Switch1' */
                /* End of Outputs for SubSystem: '<S302>/Protected Division' */

                /* Switch: '<S302>/Switch1' incorporates:
                 *  Constant: '<S302>/Constant Value2'
                 *  Constant: '<S302>/Constant Value3'
                 *  MinMax: '<S302>/MinMax'
                 *  Sum: '<S302>/Summation1'
                 *  UnitDelay: '<S302>/Unit Delay1'
                 *  UnitDelay: '<S302>/Unit Delay3'
                 */
                if (!TMMR_ac_DW.UnitDelay1_DSTATE_e)
                {
                    TMMR_ac_DW.UnitDelay3_DSTATE_l = 1.0F;
                }

                TMMR_ac_DW.UnitDelay3_DSTATE_l = fminf
                    (TMMR_ac_DW.UnitDelay3_DSTATE_l + Switch_idx_2, 1.0F);
            }

            /* Sum: '<S302>/Summation' incorporates:
             *  Constant: '<S302>/Constant Value'
             *  Product: '<S299>/Product4'
             *  Product: '<S302>/Multiplication'
             *  Product: '<S302>/Multiplication3'
             *  Sum: '<S302>/Subtraction'
             *  UnitDelay: '<S302>/Unit Delay'
             *  UnitDelay: '<S302>/Unit Delay3'
             */
            Switch_idx_2 = ((1.0F - TMMR_ac_DW.UnitDelay3_DSTATE_l) *
                            TMMR_ac_DW.UnitDelay_DSTATE_ps[0]) +
                ((TMMR_ac_B.Merge3 * TMMR_ac_B.Merge4_i) *
                 TMMR_ac_DW.UnitDelay3_DSTATE_l);
            TMMR_ac_DW.VeTMMR_r_OffgPostOptLead_DS = ((1.0F -
                TMMR_ac_DW.UnitDelay3_DSTATE_l) *
                TMMR_ac_DW.UnitDelay_DSTATE_ps[1]) +
                (TMMR_ac_DW.UnitDelay3_DSTATE_l * TMMR_ac_B.Merge4_i);

            /* Outputs for Atomic SubSystem: '<S299>/Protected Division' */
            /* Switch: '<S304>/Switch1' incorporates:
             *  Constant: '<S304>/Constant Value'
             *  Constant: '<S304>/Constant Value1'
             *  Constant: '<S304>/Constant Value2'
             *  Constant: '<S304>/Constant Value3'
             *  DataStoreWrite: '<S299>/Data Store Write14'
             *  Logic: '<S304>/AND'
             *  Product: '<S304>/Division'
             *  RelationalOperator: '<S304>/Greater Than or Equal '
             *  RelationalOperator: '<S304>/Greater Than or Equal 1'
             *  RelationalOperator: '<S304>/Not Equal'
             *  RelationalOperator: '<S304>/Not Equal1'
             *  Switch: '<S304>/Switch2'
             *  Switch: '<S304>/Switch3'
             */
            if ((Switch_idx_2 != 0.0F) &&
                    (TMMR_ac_DW.VeTMMR_r_OffgPostOptLead_DS != 0.0F))
            {
                TMMR_ac_DW.VeTMMR_r_OffgPreOptLead_DS = Switch_idx_2 /
                    TMMR_ac_DW.VeTMMR_r_OffgPostOptLead_DS;
            }
            else if (Switch_idx_2 > 0.0F)
            {
                /* Switch: '<S304>/Switch2' incorporates:
                 *  Constant: '<S304>/MAXFLOAT'
                 *  DataStoreWrite: '<S299>/Data Store Write14'
                 */
                TMMR_ac_DW.VeTMMR_r_OffgPreOptLead_DS = 3.402823466E+38F;
            }
            else if (Switch_idx_2 < 0.0F)
            {
                /* Switch: '<S304>/Switch3' incorporates:
                 *  Constant: '<S304>/MINFLOAT'
                 *  DataStoreWrite: '<S299>/Data Store Write14'
                 *  Switch: '<S304>/Switch2'
                 */
                TMMR_ac_DW.VeTMMR_r_OffgPreOptLead_DS = -3.402823466E+38F;
            }
            else
            {
                /* DataStoreWrite: '<S299>/Data Store Write14' incorporates:
                 *  Constant: '<S304>/Constant Value4'
                 *  Switch: '<S304>/Switch2'
                 *  Switch: '<S304>/Switch3'
                 */
                TMMR_ac_DW.VeTMMR_r_OffgPreOptLead_DS = 0.0F;
            }

            /* End of Switch: '<S304>/Switch1' */
            /* End of Outputs for SubSystem: '<S299>/Protected Division' */
            /* End of Outputs for SubSystem: '<S242>/OffgVTVR_Ramping' */
        }
        else
        {
            TMMR_ac_DW.If1_ActiveSubsystem = 1;

            /* Outputs for IfAction SubSystem: '<S242>/OffgVTVR_NoRamping' incorporates:
             *  ActionPort: '<S298>/Action Port'
             */
            /* DataStoreWrite: '<S298>/Data Store Write14' */
            TMMR_ac_DW.VeTMMR_r_OffgPreOptLead_DS = TMMR_ac_B.Merge1_k;

            /* Sum: '<S302>/Summation' incorporates:
             *  DataStoreWrite: '<S298>/Data Store Write15'
             */
            TMMR_ac_DW.VeTMMR_r_OffgPostOptLead_DS = TMMR_ac_B.Merge2_m;

            /* DataStoreWrite: '<S298>/Data Store Write12' */
            TMMR_ac_DW.VeTMMR_r_OncPreOptLead_DS = TMMR_ac_B.Merge3;

            /* DataStoreWrite: '<S298>/Data Store Write13' */
            TMMR_ac_DW.VeTMMR_r_OncPostOptLead_DS = TMMR_ac_B.Merge4_i;

            /* End of Outputs for SubSystem: '<S242>/OffgVTVR_NoRamping' */
        }

        /* End of Outputs for SubSystem: '<S231>/TorquePhase' */
    }
    else
    {
        if (rtb_Comparison9)
        {
            TMMR_ac_DW.If_ActiveSubsystem = 2;

            /* Outputs for IfAction SubSystem: '<S231>/SpeedPhase' incorporates:
             *  ActionPort: '<S240>/Action Port'
             */
            /* If: '<S240>/If3' incorporates:
             *  DataStoreRead: '<S240>/Data Store Read4'
             *  RelationalOperator: '<S240>/Not Equal2'
             */
            if (VeTMMR_e_TransShiftStat_DS != VeTMMR_e_PrevTransShiftStat_DS)
            {
                /* Outputs for IfAction SubSystem: '<S240>/TMMC_SP_Entry_Action' incorporates:
                 *  ActionPort: '<S244>/Action Port'
                 */
                /* DataStoreWrite: '<S244>/Data Store Write3' */
                TMMR_ac_DW.VeTMMR_M_OncTCROvrdMin_DS = Switch5;

                /* DataStoreWrite: '<S244>/Data Store Write6' */
                TMMR_ac_DW.VeTMMR_M_OptLdLkdTCROvrdMin_DS = Switch5;

                /* DataStoreWrite: '<S244>/Data Store Write5' incorporates:
                 *  Constant: '<S244>/Constant Value1'
                 */
                VeTMMR_M_OffgTCROvrdMin_DS = 0.0F;

                /* DataStoreWrite: '<S244>/Data Store Write1' incorporates:
                 *  Constant: '<S244>/TRUE Constant1'
                 */
                VeTMMR_b_InertiaTorqActive_DS = true;

                /* DataStoreWrite: '<S244>/Data Store Write2' incorporates:
                 *  Constant: '<S244>/TRUE Constant2'
                 */
                VeTMMR_b_EndOfSpdPhs_DS = false;

                /* DataStoreWrite: '<S244>/Data Store Write8' incorporates:
                 *  Constant: '<S285>/Constant'
                 */
                VeTMMR_e_OffgStatControl_DS = CeHSER_e_OFFGoing_C2CSpdPhs;

                /* DataStoreWrite: '<S244>/Data Store Write9' incorporates:
                 *  Constant: '<S284>/Constant'
                 */
                VeTMMR_e_OncStatControl_DS = CeHSER_e_ONComing_C2CSpdPhs;

                /* End of Outputs for SubSystem: '<S240>/TMMC_SP_Entry_Action' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S240>/TMMC_SP_During_Action' incorporates:
                 *  ActionPort: '<S243>/Action Port'
                 */
                /* Outputs for Atomic SubSystem: '<S250>/HSEL_ApplyClmpM2M' */
                /* Switch: '<S257>/Switch3' incorporates:
                 *  Logic: '<S253>/NOT3'
                 *  Logic: '<S253>/OR2'
                 */
                rtb_AND5 = (rtb_AND_nz || (!Switch1_l));

                /* RelationalOperator: '<S253>/Equal3' incorporates:
                 *  Constant: '<S264>/Constant'
                 */
                rtb_AND_c = (((uint32)Switch3) == CeHCCR_e_ClLocked);

                /* Outputs for Atomic SubSystem: '<S267>/EdgeFalling' */
                /* Logic: '<S279>/AND' incorporates:
                 *  Logic: '<S279>/OR1'
                 *  UnitDelay: '<S279>/Unit Delay'
                 */
                rtb_Switch1_cm = ((!rtb_AND_c) &&
                                  (TMMR_ac_DW.UnitDelay_DSTATE_gr));

                /* Update for UnitDelay: '<S279>/Unit Delay' */
                TMMR_ac_DW.UnitDelay_DSTATE_gr = rtb_AND_c;

                /* End of Outputs for SubSystem: '<S267>/EdgeFalling' */

                /* Switch: '<S280>/Switch1' incorporates:
                 *  Constant: '<S271>/Calib'
                 *  Logic: '<S267>/OR'
                 *  Switch: '<S280>/Switch2'
                 *  UnitDelay: '<S267>/Unit Delay'
                 */
                if (rtb_AND5)
                {
                    TMMR_ac_DW.UnitDelay_DSTATE_pu = KeTMMR_t_ClmpLatchOnTm;
                }
                else if (rtb_AND_c || rtb_Switch1_cm)
                {
                    /* Switch: '<S280>/Switch2' incorporates:
                     *  Constant: '<S267>/Constant Value1'
                     *  UnitDelay: '<S267>/Unit Delay'
                     */
                    TMMR_ac_DW.UnitDelay_DSTATE_pu = 0.0F;
                }
                else
                {
                    /* UnitDelay: '<S267>/Unit Delay' incorporates:
                     *  Constant: '<S269>/Calib'
                     *  Constant: '<S271>/Calib'
                     *  MinMax: '<S267>/Minimum'
                     *  Sum: '<S267>/Summation'
                     *  Switch: '<S280>/Switch2'
                     */
                    TMMR_ac_DW.UnitDelay_DSTATE_pu = fminf
                        (KeTMMR_t_ClmpLatchOnTm, HeTMMR_t_MedTED_dT +
                         TMMR_ac_DW.UnitDelay_DSTATE_pu);
                }

                /* End of Switch: '<S280>/Switch1' */

                /* RelationalOperator: '<S253>/Equal4' incorporates:
                 *  Constant: '<S262>/Constant'
                 */
                rtb_Switch1_cm = (((uint32)Switch3) == CeHCCR_e_ClSynched);

                /* Outputs for Atomic SubSystem: '<S268>/EdgeFalling' */
                /* Logic: '<S281>/AND' incorporates:
                 *  Logic: '<S281>/OR1'
                 *  UnitDelay: '<S281>/Unit Delay'
                 */
                rtb_Logical_dz = ((!rtb_Switch1_cm) &&
                                  (TMMR_ac_DW.UnitDelay_DSTATE_dq));

                /* Update for UnitDelay: '<S281>/Unit Delay' */
                TMMR_ac_DW.UnitDelay_DSTATE_dq = rtb_Switch1_cm;

                /* End of Outputs for SubSystem: '<S268>/EdgeFalling' */

                /* Switch: '<S282>/Switch1' incorporates:
                 *  Constant: '<S271>/Calib'
                 *  Logic: '<S268>/OR'
                 *  Switch: '<S282>/Switch2'
                 *  UnitDelay: '<S268>/Unit Delay'
                 */
                if (rtb_AND5)
                {
                    TMMR_ac_DW.UnitDelay_DSTATE_hg = KeTMMR_t_ClmpLatchOnTm;
                }
                else if (rtb_Switch1_cm || rtb_Logical_dz)
                {
                    /* Switch: '<S282>/Switch2' incorporates:
                     *  Constant: '<S268>/Constant Value1'
                     *  UnitDelay: '<S268>/Unit Delay'
                     */
                    TMMR_ac_DW.UnitDelay_DSTATE_hg = 0.0F;
                }
                else
                {
                    /* UnitDelay: '<S268>/Unit Delay' incorporates:
                     *  Constant: '<S269>/Calib'
                     *  Constant: '<S271>/Calib'
                     *  MinMax: '<S268>/Minimum'
                     *  Sum: '<S268>/Summation'
                     *  Switch: '<S282>/Switch2'
                     */
                    TMMR_ac_DW.UnitDelay_DSTATE_hg = fminf
                        (KeTMMR_t_ClmpLatchOnTm, HeTMMR_t_MedTED_dT +
                         TMMR_ac_DW.UnitDelay_DSTATE_hg);
                }

                /* End of Switch: '<S282>/Switch1' */

                /* Logic: '<S267>/AND2' incorporates:
                 *  Logic: '<S268>/AND2'
                 */
                rtb_Logical_dz = !rtb_AND5;

                /* Outputs for Atomic SubSystem: '<S250>/Resettable Turn On Delay Time1' */
                /* Logic: '<S253>/NOT2' incorporates:
                 *  Logic: '<S253>/Logical5'
                 *  Logic: '<S257>/OR2'
                 */
                rtb_AND5 = !rtb_AND_nz;

                /* End of Outputs for SubSystem: '<S250>/Resettable Turn On Delay Time1' */

                /* UnitDelay: '<S265>/Unit Delay' incorporates:
                 *  Logic: '<S253>/Logical6'
                 *  Logic: '<S253>/NOT2'
                 */
                Switch1_l = (Switch1_l && rtb_AND5);

                /* Outputs for Atomic SubSystem: '<S253>/Signal Latch On With Reset1' */
                /* Logic: '<S272>/OR1' incorporates:
                 *  Constant: '<S263>/Constant'
                 *  Constant: '<S266>/Constant'
                 *  Constant: '<S270>/Calib'
                 *  Constant: '<S271>/Calib'
                 *  Logic: '<S253>/Logical1'
                 *  Logic: '<S253>/Logical11'
                 *  Logic: '<S253>/Logical2'
                 *  Logic: '<S253>/Logical5'
                 *  Logic: '<S253>/Logical7'
                 *  Logic: '<S253>/Logical8'
                 *  Logic: '<S253>/Logical9'
                 *  Logic: '<S267>/AND'
                 *  Logic: '<S267>/AND1'
                 *  Logic: '<S267>/AND2'
                 *  Logic: '<S268>/AND'
                 *  Logic: '<S268>/AND1'
                 *  Logic: '<S272>/NOT'
                 *  Logic: '<S272>/OR'
                 *  RelationalOperator: '<S253>/Comparison2'
                 *  RelationalOperator: '<S253>/Equal5'
                 *  RelationalOperator: '<S267>/Greater  Than'
                 *  RelationalOperator: '<S268>/Greater  Than'
                 *  SignalConversion generated from: '<S1>/VeTTQR_e_TCMTrqCntrlMdFst'
                 *  UnitDelay: '<S267>/Unit Delay'
                 *  UnitDelay: '<S268>/Unit Delay'
                 *  UnitDelay: '<S272>/Unit Delay'
                 */
                TMMR_ac_DW.UnitDelay_DSTATE_n =
                    ((((KeTMMR_b_DisblTCMTrqDecApplyClamp) || (((uint32)
                         TMMR_ac_B.TmpSignalConversionAtVeTTQR_e_TCMTrqCntr) !=
                        CeTINR_e_TrqDec)) && (((((rtb_Logical_dz && rtb_AND_c) ||
                          (TMMR_ac_DW.UnitDelay_DSTATE_pu <
                           KeTMMR_t_ClmpLatchOnTm)) || ((rtb_Logical_dz &&
                           rtb_Switch1_cm) || (TMMR_ac_DW.UnitDelay_DSTATE_hg <
                           KeTMMR_t_ClmpLatchOnTm))) && Switch1_l) || (Switch1_l
                        && (((uint32)Switch3) == CeHCCR_e_ClNearSynched)))) ||
                     ((rtb_AND5 && (!KeTMMR_b_DisblTCMTrqDecApplyClamp)) &&
                      (TMMR_ac_DW.UnitDelay_DSTATE_n)));

                /* End of Outputs for SubSystem: '<S253>/Signal Latch On With Reset1' */

                /* Outputs for Atomic SubSystem: '<S253>/EdgeRising1' */
                /* Logic: '<S265>/AND' incorporates:
                 *  Logic: '<S265>/OR1'
                 *  UnitDelay: '<S265>/Unit Delay'
                 *  UnitDelay: '<S272>/Unit Delay'
                 */
                Switch1_l = ((TMMR_ac_DW.UnitDelay_DSTATE_n) &&
                             (!TMMR_ac_DW.UnitDelay_DSTATE_pb));

                /* Update for UnitDelay: '<S265>/Unit Delay' incorporates:
                 *  UnitDelay: '<S272>/Unit Delay'
                 */
                TMMR_ac_DW.UnitDelay_DSTATE_pb = TMMR_ac_DW.UnitDelay_DSTATE_n;

                /* End of Outputs for SubSystem: '<S253>/EdgeRising1' */

                /* If: '<S253>/If3' incorporates:
                 *  UnitDelay: '<S272>/Unit Delay'
                 */
                if (TMMR_ac_DW.UnitDelay_DSTATE_n)
                {
                    /* Outputs for IfAction SubSystem: '<S253>/Clutch_Synced' incorporates:
                     *  ActionPort: '<S261>/Action Port'
                     */
                    /* Switch: '<S261>/Switch' incorporates:
                     *  DataStoreRead: '<S243>/Data Store Read'
                     *  Switch: '<S261>/Switch1'
                     *  UnitDelay: '<S261>/Unit Delay'
                     */
                    if (Switch1_l)
                    {
                        TMMR_ac_DW.UnitDelay_DSTATE_ca =
                            VeTMMR_M_COnc_TorqCmnd_DS;
                        TMMR_ac_DW.UnitDelay1_DSTATE = VeTMMR_M_COnc_TorqCmnd_DS;
                    }

                    /* End of Switch: '<S261>/Switch' */

                    /* Switch: '<S261>/Switch1' incorporates:
                     *  Constant: '<S248>/Calib'
                     *  Constant: '<S276>/Calib'
                     *  MinMax: '<S261>/MinMax'
                     *  Product: '<S261>/Multiplication'
                     *  Sum: '<S261>/Summation2'
                     *  Switch: '<S253>/Switch3'
                     *  Switch: '<S253>/Switch4'
                     *  UnitDelay: '<S261>/Unit Delay1'
                     */
                    TMMR_ac_DW.UnitDelay1_DSTATE = fmaxf((HeTMMR_t_MedTED_dT *
                        KeTMMR_dM_COnc_C2C_ClmpTqRmpRt) +
                        TMMR_ac_DW.UnitDelay1_DSTATE, TMMR_ac_B.Merge1_kj);

                    /* Logic: '<S261>/Logical1' incorporates:
                     *  Constant: '<S245>/Calib'
                     *  Constant: '<S246>/Calib'
                     *  RelationalOperator: '<S261>/Less Than  or Equal'
                     *  RelationalOperator: '<S261>/Less Than  or Equal1'
                     *  Sum: '<S261>/Summation1'
                     *  UnitDelay: '<S261>/Unit Delay'
                     *  UnitDelay: '<S261>/Unit Delay1'
                     */
                    VeTMMR_b_ClampApplied_DS = (((TMMR_ac_DW.UnitDelay_DSTATE_ca
                        + KeTMMR_M_COnc_C2C_ClmpTorq) <=
                        TMMR_ac_DW.UnitDelay1_DSTATE) ||
                        (TMMR_ac_DW.UnitDelay1_DSTATE >= KeTMMR_M_COnc_MaxTorq));

                    /* Switch: '<S261>/Switch2' */
                    if (VeTMMR_b_ClampApplied_DS)
                    {
                        /* Merge: '<S253>/Merge3' incorporates:
                         *  Constant: '<S246>/Calib'
                         *  Gain: '<S278>/Gain'
                         */
                        VeTMMR_M_COnc_TorqCmnd_DS = KeTMMR_M_COnc_MaxTorq;
                    }
                    else
                    {
                        /* Merge: '<S253>/Merge3' incorporates:
                         *  Gain: '<S278>/Gain'
                         *  UnitDelay: '<S261>/Unit Delay1'
                         */
                        VeTMMR_M_COnc_TorqCmnd_DS = TMMR_ac_DW.UnitDelay1_DSTATE;
                    }

                    /* End of Switch: '<S261>/Switch2' */
                    /* End of Outputs for SubSystem: '<S253>/Clutch_Synced' */
                }
                else
                {
                    /* Outputs for IfAction SubSystem: '<S253>/Clamp_Off' incorporates:
                     *  ActionPort: '<S260>/Action Port'
                     */
                    /* Merge: '<S253>/Merge3' incorporates:
                     *  Gain: '<S273>/Gain'
                     */
                    VeTMMR_M_COnc_TorqCmnd_DS = TMMR_ac_B.Merge1_kj;

                    /* Merge: '<S253>/Merge2' incorporates:
                     *  Constant: '<S260>/FALSE Constant'
                     *  SignalConversion generated from: '<S260>/ClampApplied'
                     */
                    VeTMMR_b_ClampApplied_DS = false;

                    /* End of Outputs for SubSystem: '<S253>/Clamp_Off' */
                }

                /* End of If: '<S253>/If3' */
                /* End of Outputs for SubSystem: '<S250>/HSEL_ApplyClmpM2M' */

                /* Logic: '<S250>/AND1' incorporates:
                 *  Constant: '<S251>/Constant'
                 *  Constant: '<S252>/Constant'
                 *  RelationalOperator: '<S250>/Comparison1'
                 *  RelationalOperator: '<S250>/Comparison2'
                 */
                Switch1_l = ((((uint32)Switch3) == CeHCCR_e_ClLocked) ||
                             (((uint32)Switch3) == CeHCCR_e_ClSynched));

                /* Outputs for Atomic SubSystem: '<S250>/Resettable Turn On Delay Time1' */
                /* Outputs for Atomic SubSystem: '<S257>/EdgeRising' */
                /* Logic: '<S283>/OR1' incorporates:
                 *  UnitDelay: '<S283>/Unit Delay'
                 */
                rtb_AND_c = !TMMR_ac_DW.UnitDelay_DSTATE_ed;

                /* Update for UnitDelay: '<S283>/Unit Delay' */
                TMMR_ac_DW.UnitDelay_DSTATE_ed = Switch1_l;

                /* Switch: '<S257>/Switch1' incorporates:
                 *  Constant: '<S249>/Calib'
                 *  Constant: '<S254>/Calib'
                 *  Constant: '<S257>/Constant Value1'
                 *  Logic: '<S257>/OR'
                 *  Logic: '<S257>/OR1'
                 *  Logic: '<S283>/AND'
                 *  MinMax: '<S257>/Minimum'
                 *  Sum: '<S257>/Summation'
                 *  Switch: '<S257>/Switch3'
                 *  UnitDelay: '<S257>/Unit Delay'
                 */
                if ((!Switch1_l) || (rtb_AND_nz || (Switch1_l && rtb_AND_c)))
                {
                    TMMR_ac_DW.UnitDelay_DSTATE_p = 0.0F;
                }
                else
                {
                    TMMR_ac_DW.UnitDelay_DSTATE_p = fminf
                        (KeTMMR_t_COnc_C2C_LockedDelay, HeTMMR_t_MedTED_dT +
                         TMMR_ac_DW.UnitDelay_DSTATE_p);
                }

                /* End of Switch: '<S257>/Switch1' */
                /* End of Outputs for SubSystem: '<S257>/EdgeRising' */
                /* End of Outputs for SubSystem: '<S250>/Resettable Turn On Delay Time1' */
                /* End of Outputs for SubSystem: '<S240>/TMMC_SP_During_Action' */

                /* Outputs for Function Call SubSystem: '<S3>/Clch1_3_Convert_ClchOff_Onc' */
                /* Switch: '<S6>/Switch4' */
                if (rtb_OR1_e4)
                {
                    Switch_idx_2 =
                        TMMR_ac_B.TmpSignalConversionAtVeHCCR_M_Clch3_Torq;
                }
                else
                {
                    Switch_idx_2 =
                        TMMR_ac_B.TmpSignalConversionAtVeHCCR_M_Clch1_Torq;
                }

                /* End of Switch: '<S6>/Switch4' */
                /* End of Outputs for SubSystem: '<S3>/Clch1_3_Convert_ClchOff_Onc' */

                /* Outputs for IfAction SubSystem: '<S240>/TMMC_SP_During_Action' incorporates:
                 *  ActionPort: '<S243>/Action Port'
                 */
                /* Outputs for Atomic SubSystem: '<S250>/Resettable Turn On Delay Time1' */
                /* Logic: '<S250>/AND' incorporates:
                 *  Constant: '<S247>/Calib'
                 *  Constant: '<S249>/Calib'
                 *  Constant: '<S255>/Calib'
                 *  Constant: '<S256>/Calib'
                 *  DataStoreWrite: '<S250>/Data Store Write9'
                 *  Logic: '<S250>/AND4'
                 *  Logic: '<S257>/AND'
                 *  RelationalOperator: '<S250>/Greater Than or Equal '
                 *  RelationalOperator: '<S250>/Greater Than or Equal 2'
                 *  RelationalOperator: '<S257>/Greater  Than1'
                 *  UnitDelay: '<S257>/Unit Delay'
                 */
                VeTMMR_b_EndOfSpdPhs_DS = ((((VeTMMR_b_ClampApplied_DS) &&
                    (Switch_idx_2 >= KeTMMR_M_COnc_MinTorqCapacity)) &&
                    ((TMMR_ac_B.Merge3_j <= KeTMMR_M_ClchTrqOffgSpdPhsThrsh) ||
                     (KeTMMR_b_DsblClchTrqOffgSpdPhsExit))) && ((rtb_AND5 &&
                    Switch1_l) && (TMMR_ac_DW.UnitDelay_DSTATE_p >=
                                   KeTMMR_t_COnc_C2C_LockedDelay)));

                /* End of Outputs for SubSystem: '<S250>/Resettable Turn On Delay Time1' */

                /* DataStoreWrite: '<S250>/Data Store Write3' */
                TMMR_ac_DW.VeTMMR_M_OncTCROvrdMin_DS = Switch5;

                /* DataStoreWrite: '<S250>/Data Store Write6' */
                TMMR_ac_DW.VeTMMR_M_OptLdLkdTCROvrdMin_DS = Switch5;

                /* End of Outputs for SubSystem: '<S240>/TMMC_SP_During_Action' */
            }

            /* End of If: '<S240>/If3' */
            /* End of Outputs for SubSystem: '<S231>/SpeedPhase' */
        }
    }

    /* Update for If: '<S231>/If' */
    if (TMMR_ac_DW.If_ActiveSubsystem == 1)
    {
        /* Update for IfAction SubSystem: '<S231>/TorquePhase' incorporates:
         *  ActionPort: '<S242>/Action Port'
         */
        /* Update for IfAction SubSystem: '<S242>/OffgVTVR_Ramping' incorporates:
         *  ActionPort: '<S299>/Action Port'
         */
        /* Update for If: '<S242>/If1' incorporates:
         *  UnitDelay: '<S302>/Unit Delay1'
         */
        TMMR_ac_DW.UnitDelay1_DSTATE_e = ((TMMR_ac_DW.If1_ActiveSubsystem == 0) ||
            (TMMR_ac_DW.UnitDelay1_DSTATE_e));

        /* End of Update for SubSystem: '<S242>/OffgVTVR_Ramping' */
        /* End of Update for SubSystem: '<S231>/TorquePhase' */
    }

    /* End of Update for If: '<S231>/If' */
    /* End of Outputs for S-Function (fcgen): '<S17>/FcnCall_Generator' */

    /* Update for UnitDelay: '<S18>/Unit Delay' incorporates:
     *  SignalConversion generated from: '<S1>/VeTRNR_e_ShftType'
     */
    TMMR_ac_DW.UnitDelay_DSTATE_dy =
        TMMR_ac_B.TmpSignalConversionAtVeTRNR_e_ShftTypeOu;

    /* End of Outputs for SubSystem: '<S1>/TMMC' */

    /* Outputs for Function Call SubSystem: '<S1>/TMMO_DataStoreUpdate' */
    /* DataStoreRead: '<S5>/Data Store Read' */
    TMMR_ac_B.DataStoreRead = TMMR_ac_DW.VeTMMR_r_OffgPreOptLead_DS;

    /* DataStoreRead: '<S5>/Data Store Read1' */
    TMMR_ac_B.DataStoreRead1 = TMMR_ac_DW.VeTMMR_r_OffgPostOptLead_DS;

    /* DataStoreRead: '<S5>/Data Store Read2' */
    TMMR_ac_B.DataStoreRead2 = TMMR_ac_DW.VeTMMR_r_OncPreOptLead_DS;

    /* DataStoreRead: '<S5>/Data Store Read3' */
    TMMR_ac_B.DataStoreRead3 = TMMR_ac_DW.VeTMMR_r_OncPostOptLead_DS;

    /* DataStoreRead: '<S5>/Data_Store_Read2' */
    TMMR_ac_B.Data_Store_Read2 = VeTMMR_e_TransShiftStat_DS;

    /* DataStoreRead: '<S5>/Data_Store_Read3' */
    TMMR_ac_B.Data_Store_Read3 = VeTMMR_e_OffgStatControl_DS;

    /* DataStoreRead: '<S5>/Data_Store_Read4' */
    TMMR_ac_B.Data_Store_Read4 = VeTMMR_e_OncStatControl_DS;

    /* DataStoreRead: '<S5>/Data Store Read7' */
    TMMR_ac_B.DataStoreRead7 = VeTMMR_M_OffgTCROvrdMax_DS;

    /* DataStoreRead: '<S5>/Data Store Read9' */
    TMMR_ac_B.DataStoreRead9 = TMMR_ac_DW.VeTMMR_M_OptLdLkdTCROvrdMax_DS;

    /* DataStoreRead: '<S5>/Data Store Read4' */
    TMMR_ac_B.DataStoreRead4 = VeTMMR_M_OffgTCROvrdMin_DS;

    /* DataStoreRead: '<S5>/Data Store Read6' */
    TMMR_ac_B.DataStoreRead6 = TMMR_ac_DW.VeTMMR_M_OptLdLkdTCROvrdMin_DS;

    /* DataStoreRead: '<S5>/Data_Store_Read11' */
    TMMR_ac_B.Data_Store_Read11 = VeTMMR_b_InertiaTorqActive_DS;

    /* DataStoreRead: '<S5>/Data Store Read8' */
    TMMR_ac_B.DataStoreRead8 = TMMR_ac_DW.VeTMMR_M_OncTCROvrdMax_DS;

    /* DataStoreRead: '<S5>/Data Store Read5' */
    TMMR_ac_B.DataStoreRead5 = TMMR_ac_DW.VeTMMR_M_OncTCROvrdMin_DS;

    /* End of Outputs for SubSystem: '<S1>/TMMO_DataStoreUpdate' */
#endif

#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    /* Outputs for Function Call SubSystem: '<S1>/TMMC_ProcClchTorq' */
    /* UnitDelay: '<S559>/Unit Delay' incorporates:
     *  Constant: '<S525>/Constant'
     *  RelationalOperator: '<S497>/Comparison5'
     */
    Switch1_l = (((uint32)rtb_TmpSignalConversionAtVeOHSR_e_ILESta) ==
                 CeOHSR_e_LaunchState);

    /* Logic: '<S496>/Logical2' incorporates:
     *  Constant: '<S503>/Constant'
     *  Constant: '<S504>/Constant'
     *  RelationalOperator: '<S496>/Comparison2'
     *  RelationalOperator: '<S496>/Comparison3'
     */
    rtb_OR1_e4 = ((((uint32)rtb_TmpSignalConversionAtVeHSER_e_RngEqn) ==
                   CeHSER_e_UseM2Eqn) || (((uint32)
                    rtb_TmpSignalConversionAtVeHSER_e_RngEqn) ==
                   CeHSER_e_UseNeutralEqn));

    /* Outputs for Atomic SubSystem: '<S496>/EdgeRising' */
    /* Logic: '<S505>/AND' incorporates:
     *  Logic: '<S505>/OR1'
     *  UnitDelay: '<S505>/Unit Delay'
     */
    rtb_AND_nz = (rtb_OR1_e4 && (!TMMR_ac_DW.UnitDelay_DSTATE_i4));

    /* Update for UnitDelay: '<S505>/Unit Delay' */
    TMMR_ac_DW.UnitDelay_DSTATE_i4 = rtb_OR1_e4;

    /* End of Outputs for SubSystem: '<S496>/EdgeRising' */

    /* If: '<S496>/If' incorporates:
     *  Constant: '<S501>/Constant'
     *  Constant: '<S502>/Constant'
     *  Logic: '<S496>/Logical1'
     *  RelationalOperator: '<S496>/Comparison1'
     *  RelationalOperator: '<S496>/Comparison4'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeHSER_e_RngEqn) == CeHSER_e_UseM1Eqn)
        || (((uint32)rtb_TmpSignalConversionAtVeHSER_e_RngEqn) ==
            CeHSER_e_UseG2Eqn))
    {
        /* Outputs for IfAction SubSystem: '<S496>/HTDR_M_Clch1_TCR_Actl' incorporates:
         *  ActionPort: '<S506>/Action Port'
         */
        /* Merge: '<S496>/Merge' incorporates:
         *  Inport: '<S506>/HTDR_M_C1_TCR_Actl'
         */
        VeTMMR_M_ILETransClchTgt =
            TMMR_ac_B.TmpSignalConversionAtVeHTDR_M_Clch1_TCR_;

        /* Merge: '<S496>/Merge1' incorporates:
         *  Constant: '<S514>/Calib'
         *  SignalConversion generated from: '<S506>/TMMC_dm_ClchTorqRampRate'
         */
        VeTMMR_M_ILETransClchRmpRt = KeTMMR_dM_G2M1TCRRmpRate;

        /* End of Outputs for SubSystem: '<S496>/HTDR_M_Clch1_TCR_Actl' */
    }
    else if (rtb_OR1_e4)
    {
        /* Outputs for IfAction SubSystem: '<S496>/TMMR_PrevILETrqEst' incorporates:
         *  ActionPort: '<S513>/Action Port'
         */
        /* Merge: '<S496>/Merge' incorporates:
         *  Constant: '<S516>/Calib'
         *  SignalConversion generated from: '<S513>/TMMC_M_ClchTarget'
         */
        VeTMMR_M_ILETransClchTgt = KeTMMR_M_Lch2CrpClchTgtInAct;

        /* Outputs for Atomic SubSystem: '<S513>/Limiter' */
        /* Switch: '<S518>/Switch1' incorporates:
         *  Constant: '<S513>/Constant Value1'
         *  Constant: '<S517>/Calib'
         *  RelationalOperator: '<S518>/Relational Operator'
         */
        if (1.0E+8F < KeTMMR_t_ILENeutM1TimeToZero)
        {
            /* Switch: '<S518>/Switch1' */
            Switch_idx_2 = 1.0E+8F;
        }
        else
        {
            /* Switch: '<S518>/Switch1' */
            Switch_idx_2 = KeTMMR_t_ILENeutM1TimeToZero;
        }

        /* End of Switch: '<S518>/Switch1' */
        /* End of Outputs for SubSystem: '<S513>/Limiter' */

        /* Switch: '<S513>/Switch' */
        if (rtb_AND_nz)
        {
            /* Switch: '<S513>/Switch' incorporates:
             *  UnitDelay: '<S496>/Unit Delay'
             */
            TMMR_ac_DW.UnitDelay_DSTATE_cu = TMMR_ac_DW.UnitDelay_DSTATE;
        }

        /* End of Switch: '<S513>/Switch' */

        /* Outputs for Atomic SubSystem: '<S513>/Protected Division' */
        /* Switch: '<S519>/Switch1' incorporates:
         *  Constant: '<S519>/Constant Value'
         *  RelationalOperator: '<S519>/Not Equal'
         */
        if (TMMR_ac_DW.UnitDelay_DSTATE_cu != 0.0F)
        {
            /* Outputs for Atomic SubSystem: '<S513>/Limiter' */
            /* Switch: '<S518>/Switch' incorporates:
             *  Constant: '<S513>/Constant Value2'
             *  RelationalOperator: '<S518>/Relational Operator1'
             */
            if (Switch_idx_2 <= 0.0001F)
            {
                Switch_idx_2 = 0.0001F;
            }

            /* End of Switch: '<S518>/Switch' */
            /* End of Outputs for SubSystem: '<S513>/Limiter' */

            /* Merge: '<S496>/Merge1' incorporates:
             *  Product: '<S519>/Division'
             */
            VeTMMR_M_ILETransClchRmpRt = TMMR_ac_DW.UnitDelay_DSTATE_cu /
                Switch_idx_2;
        }
        else
        {
            /* Merge: '<S496>/Merge1' incorporates:
             *  Constant: '<S519>/Constant Value4'
             *  Switch: '<S519>/Switch2'
             *  Switch: '<S519>/Switch3'
             */
            VeTMMR_M_ILETransClchRmpRt = 0.0F;
        }

        /* End of Switch: '<S519>/Switch1' */
        /* End of Outputs for SubSystem: '<S513>/Protected Division' */

        /* Switch: '<S520>/Switch3' incorporates:
         *  UnitDelay: '<S496>/Unit Delay'
         *  UnitDelay: '<S520>/Unit Delay'
         */
        if (rtb_AND_nz)
        {
            TMMR_ac_DW.UnitDelay_DSTATE_cu = TMMR_ac_DW.UnitDelay_DSTATE;
        }

        /* End of Switch: '<S520>/Switch3' */
        /* End of Outputs for SubSystem: '<S496>/TMMR_PrevILETrqEst' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S496>/NoGradientLimit' incorporates:
         *  ActionPort: '<S512>/Action Port'
         */
        /* Merge: '<S496>/Merge' incorporates:
         *  Constant: '<S515>/Calib'
         *  SignalConversion generated from: '<S512>/TMMC_M_ClchTarget'
         */
        VeTMMR_M_ILETransClchTgt = KeTMMR_M_Lch2CrpClchTgtInAct;

        /* Merge: '<S496>/Merge1' incorporates:
         *  Constant: '<S512>/Constant Value1'
         *  SignalConversion generated from: '<S512>/TMMC_dm_ClchTorqRampRate'
         */
        VeTMMR_M_ILETransClchRmpRt = 1.0E+8F;

        /* End of Outputs for SubSystem: '<S496>/NoGradientLimit' */
    }

    /* End of If: '<S496>/If' */
    /* End of Outputs for SubSystem: '<S1>/TMMC_ProcClchTorq' */

    /* Inport: '<Root>/VeTTIR_M_ILECreepTrq' */
    (void)Rte_Read_VeTTIR_M_ILECreepTrq_Value(&tmpRead_3);

    /* Inport: '<Root>/VeHTDR_M_OutTorqReqModHH' */
    (void)Rte_Read_VeHTDR_M_OutTorqReqModHH_Value(&tmpRead_2);

    /* Outputs for Function Call SubSystem: '<S1>/TMMC_ProcClchTorq' */
    /* Abs: '<S496>/Abs' incorporates:
     *  Constant: '<S507>/Calib'
     *  Product: '<S496>/Multiplication'
     */
    Switch_idx_2 = fabsf(VeTMMR_M_ILETransClchRmpRt * HeTMMR_t_MedTED_dT);

    /* Switch: '<S510>/Switch' incorporates:
     *  Sum: '<S496>/Sum1'
     *  UnitDelay: '<S496>/Unit Delay'
     */
    VeTMMR_M_ILELaunch2CrpAftRamp = VeTMMR_M_ILETransClchTgt -
        TMMR_ac_DW.UnitDelay_DSTATE;

    /* Outputs for Atomic SubSystem: '<S496>/Limiter1' */
    /* Switch: '<S510>/Switch1' incorporates:
     *  RelationalOperator: '<S510>/Relational Operator'
     */
    if (Switch_idx_2 < VeTMMR_M_ILELaunch2CrpAftRamp)
    {
        /* Switch: '<S510>/Switch' incorporates:
         *  Switch: '<S538>/Switch3'
         */
        VeTMMR_M_ILELaunch2CrpAftRamp = Switch_idx_2;
    }

    /* End of Switch: '<S510>/Switch1' */

    /* Switch: '<S510>/Switch' incorporates:
     *  Gain: '<S496>/Gain'
     *  RelationalOperator: '<S510>/Relational Operator1'
     *  Sum: '<S496>/Sum2'
     *  UnitDelay: '<S496>/Unit Delay'
     */
    if (VeTMMR_M_ILELaunch2CrpAftRamp <= (-Switch_idx_2))
    {
        VeTMMR_M_ILELaunch2CrpAftRamp = -Switch_idx_2;
    }

    /* End of Outputs for SubSystem: '<S496>/Limiter1' */
    VeTMMR_M_ILELaunch2CrpAftRamp = VeTMMR_M_ILELaunch2CrpAftRamp +
        TMMR_ac_DW.UnitDelay_DSTATE;

    /* Outputs for Atomic SubSystem: '<S496>/Limiter2' */
    /* Switch: '<S511>/Switch1' incorporates:
     *  Constant: '<S508>/Calib'
     *  RelationalOperator: '<S511>/Relational Operator'
     */
    if (KeTMMR_M_MaxILETorqEstCreep < VeTMMR_M_ILELaunch2CrpAftRamp)
    {
        /* Switch: '<S510>/Switch' incorporates:
         *  Switch: '<S538>/Switch3'
         */
        VeTMMR_M_ILELaunch2CrpAftRamp = KeTMMR_M_MaxILETorqEstCreep;
    }

    /* End of Switch: '<S511>/Switch1' */

    /* Switch: '<S511>/Switch' incorporates:
     *  Constant: '<S509>/Calib'
     *  RelationalOperator: '<S511>/Relational Operator1'
     */
    if (VeTMMR_M_ILELaunch2CrpAftRamp <= KeTMMR_M_MinILETorqEstCreep)
    {
        /* Switch: '<S510>/Switch' incorporates:
         *  Switch: '<S511>/Switch'
         */
        VeTMMR_M_ILELaunch2CrpAftRamp = KeTMMR_M_MinILETorqEstCreep;
    }

    /* End of Switch: '<S511>/Switch' */
    /* End of Outputs for SubSystem: '<S496>/Limiter2' */

    /* Outputs for Atomic SubSystem: '<S489>/Digital Lowpass Reset Enabled1' */
    /* Switch: '<S492>/Switch1' incorporates:
     *  Constant: '<S499>/Calib'
     *  Product: '<S492>/Multiplication'
     *  Sum: '<S492>/Subtraction'
     *  Sum: '<S492>/Summation'
     *  UnitDelay: '<S492>/Unit Delay'
     */
    VeTMMR_M_ILECreepTorqFilt = ((tmpRead_3 - TMMR_ac_DW.UnitDelay_DSTATE_h) *
        KeTMMR_k_ILETransLossFilt) + TMMR_ac_DW.UnitDelay_DSTATE_h;

    /* Update for UnitDelay: '<S492>/Unit Delay' */
    TMMR_ac_DW.UnitDelay_DSTATE_h = VeTMMR_M_ILECreepTorqFilt;

    /* End of Outputs for SubSystem: '<S489>/Digital Lowpass Reset Enabled1' */

    /* Switch: '<S489>/Switch2' incorporates:
     *  Constant: '<S498>/Calib'
     */
    if (!KeTMMR_b_UseOutTorq4ILEEst)
    {
        tmpRead_2 = VeTMMR_M_ILECreepTorqFilt;
    }

    /* End of Switch: '<S489>/Switch2' */

    /* MinMax: '<S489>/MinMax1' */
    VeTMMR_M_ILETrqArb = fmaxf(VeTMMR_M_ILELaunch2CrpAftRamp, tmpRead_2);

    /* Switch: '<S489>/Switch3' incorporates:
     *  Constant: '<S495>/Calib'
     */
    if (HeTMMR_b_UseILE4C1TorqEst)
    {
        /* Switch: '<S489>/Switch' incorporates:
         *  Constant: '<S494>/Constant'
         *  Inport: '<Root>/VeTTQR_M_SumMaxTrqDsrd'
         *  RelationalOperator: '<S489>/Comparison4'
         */
        if (((uint32)rtb_TmpSignalConversionAtVeOHSR_e_ILESta) ==
                CeOHSR_e_NeutralState)
        {
            /* Switch: '<S489>/Switch3' incorporates:
             *  Constant: '<S489>/Constant Value1'
             *  Inport: '<Root>/VeTTQR_M_SumMaxTrqDsrd'
             *  Switch: '<S489>/Switch'
             */
            VeTMMR_M_ILETorqPreFilt = 0.0F;
        }
        else
        {
            (void)Rte_Read_VeTTQR_M_SumMaxTrqDsrd_Value
                ((&(VeTMMR_M_ILETorqPreFilt)));

            /* Switch: '<S489>/Switch1' incorporates:
             *  Constant: '<S493>/Constant'
             *  Inport: '<Root>/VeTTQR_M_SumMaxTrqDsrd'
             *  RelationalOperator: '<S489>/Comparison1'
             */
            if (((uint32)rtb_TmpSignalConversionAtVeOHSR_e_ILESta) ==
                    CeOHSR_e_CreepState)
            {
                /* Switch: '<S489>/Switch3' incorporates:
                 *  Switch: '<S489>/Switch'
                 */
                VeTMMR_M_ILETorqPreFilt = VeTMMR_M_ILETrqArb;
            }

            /* End of Switch: '<S489>/Switch1' */
        }

        /* End of Switch: '<S489>/Switch' */
    }
    else
    {
        /* Switch: '<S489>/Switch3' incorporates:
         *  Inport: '<Root>/VeTTQR_M_SumMaxTrqDsrd'
         */
        VeTMMR_M_ILETorqPreFilt =
            TMMR_ac_B.TmpSignalConversionAtVeTCCR_M_LCCTorqSig;
    }

    /* End of Switch: '<S489>/Switch3' */
    /* End of Outputs for SubSystem: '<S1>/TMMC_ProcClchTorq' */

    /* Inport: '<Root>/VeMSPR_n_MtrB_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value(&tmpRead_8);

    /* Inport: '<Root>/VeTISR_n_InputSpeed' */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value(&tmpRead_7);

    /* Inport: '<Root>/VeHSER_b_C2IntgrActv' */
    (void)Rte_Read_VeHSER_b_C2IntgrActv_Value(&rtb_LogicalOperator2_a);

    /* Inport: '<Root>/VeESSR_e_EngStartStopSt' */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value(&tmpRead_6);

    /* Inport: '<Root>/VeTINR_d_TCMFailures' */
    (void)Rte_Read_VeTINR_d_TCMFailures_Value(&tmpRead_5);

    /* Outputs for Function Call SubSystem: '<S1>/TMMC_ProcClchTorq' */
    /* If: '<S497>/If' incorporates:
     *  Constant: '<S521>/Constant'
     *  Constant: '<S522>/Constant'
     *  Constant: '<S523>/Constant'
     *  Constant: '<S524>/Constant'
     *  Constant: '<S529>/Calib'
     *  Constant: '<S530>/Calib'
     *  Constant: '<S531>/Calib'
     *  Logic: '<S497>/Logical1'
     *  Logic: '<S497>/Logical2'
     *  Logic: '<S497>/Logical3'
     *  Logic: '<S497>/Logical4'
     *  RelationalOperator: '<S497>/Comparison2'
     *  RelationalOperator: '<S497>/Comparison3'
     *  RelationalOperator: '<S497>/Comparison6'
     *  RelationalOperator: '<S497>/Comparison7'
     *  SignalConversion generated from: '<S526>/Out1'
     *  SignalConversion generated from: '<S527>/Out1'
     *  SignalConversion generated from: '<S528>/Out1'
     */
    if (((((uint32)rtb_TmpSignalConversionAtVeHSER_e_RngEqn) ==
            CeHSER_e_UseNeutralEqn) || (((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_RngEqn) == CeHSER_e_UseM2Eqn)) &&
            Switch1_l)
    {
        /* Outputs for IfAction SubSystem: '<S497>/ILETorqFilt_NeutM2' incorporates:
         *  ActionPort: '<S527>/Action Port'
         */
        tmpRead_2 = KeTMMR_k_ILETorqFilt_NeutM2;

        /* End of Outputs for SubSystem: '<S497>/ILETorqFilt_NeutM2' */
    }
    else if (Switch1_l && ((((uint32)rtb_TmpSignalConversionAtVeHSER_e_RngEqn) ==
                            CeHSER_e_UseM1Eqn) || (((uint32)
                rtb_TmpSignalConversionAtVeHSER_e_RngEqn) == CeHSER_e_UseG2Eqn)))
    {
        /* Outputs for IfAction SubSystem: '<S497>/ILETorqFilt_M1G2' incorporates:
         *  ActionPort: '<S526>/Action Port'
         */
        tmpRead_2 = KeTMMR_k_ILETorqFilt_M1G2;

        /* End of Outputs for SubSystem: '<S497>/ILETorqFilt_M1G2' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S497>/ILETorqFilt_NoFilt' incorporates:
         *  ActionPort: '<S528>/Action Port'
         */
        tmpRead_2 = KeTMMR_k_ILETorqFilt_NoFilt;

        /* End of Outputs for SubSystem: '<S497>/ILETorqFilt_NoFilt' */
    }

    /* End of If: '<S497>/If' */

    /* Outputs for Atomic SubSystem: '<S489>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S491>/Switch1' incorporates:
     *  Product: '<S491>/Multiplication'
     *  Sum: '<S491>/Subtraction'
     *  Sum: '<S491>/Summation'
     *  UnitDelay: '<S491>/Unit Delay'
     */
    VeTMMR_M_ILE_Torq_PostFilt = ((VeTMMR_M_ILETorqPreFilt -
        TMMR_ac_DW.UnitDelay_DSTATE_hz) * tmpRead_2) +
        TMMR_ac_DW.UnitDelay_DSTATE_hz;

    /* Update for UnitDelay: '<S491>/Unit Delay' */
    TMMR_ac_DW.UnitDelay_DSTATE_hz = VeTMMR_M_ILE_Torq_PostFilt;

    /* End of Outputs for SubSystem: '<S489>/Digital Lowpass Reset Enabled' */

    /* Gain: '<S500>/Gain' */
    TMMR_ac_B.Gain_n = VeTMMR_M_ILE_Torq_PostFilt;

    /* Outputs for Atomic SubSystem: '<S4>/TMMC_C2TrqEst' */
    /* Logic: '<S545>/Logical Operator' incorporates:
     *  Constant: '<S545>/Constant Value'
     *  Constant: '<S545>/Constant Value1'
     *  Constant: '<S547>/Constant'
     *  Constant: '<S548>/Constant'
     *  Constant: '<S549>/Constant'
     *  Constant: '<S550>/Calib'
     *  Constant: '<S551>/Calib'
     *  Constant: '<S552>/Calib'
     *  DataTypeConversion: '<S545>/Data Type Conversion1'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  Logic: '<S545>/Logical'
     *  Logic: '<S545>/Logical Operator1'
     *  Logic: '<S545>/Logical Operator2'
     *  Logic: '<S545>/Logical1'
     *  Lookup_n-D: '<S553>/Vector'
     *  RelationalOperator: '<S545>/Comparison1'
     *  RelationalOperator: '<S545>/Comparison2'
     *  RelationalOperator: '<S545>/Comparison3'
     *  RelationalOperator: '<S545>/Comparison4'
     *  RelationalOperator: '<S545>/Comparison5'
     *  RelationalOperator: '<S545>/Relational Operator'
     *  RelationalOperator: '<S545>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S545>/Bitwise Logical Operator1'
     *  Selector: '<S545>/Ta2Tmx1'
     *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_C2Stat'
     */
    VeTMMR_b_TC2ClipActive = (((((((sint32)tmpRead_5) & 1) >= 1) ||
        (((rtb_TmpSignalConversionAtVeTTIR_M_HASTrq >= look1_iflf_binlca_16a
           (TMMR_ac_B.TmpSignalConversionAtVeTFTR_T_TransOilTe, ((const float32 *)
        &(KxTMMR_M_HASTrqK0ClipThresh[0])), ((const float32 *)
        &(KtTMMR_M_HASTrqK0ClipThresh[0])), 6U)) && (((uint32)
        rtb_TmpSignalConversionAtVeTRNR_e_C2Stat) == CeHCCR_e_ClReleased)) &&
         (KaTMMR_i_EngStartStopIndex[(tmpRead_6)] == 0))) ||
        rtb_LogicalOperator2_a) || (((tmpRead_7 <= KeTMMR_n_NiLim4TC2Clip) &&
        (tmpRead_8 <= KeTMMR_n_NbLim4TC2Clip)) && ((((uint32)
        TMMR_ac_B.TmpSignalConversionAtVeHSER_e_RngStOutpo) != CeHSER_e_M2) &&
        (((uint32)TMMR_ac_B.TmpSignalConversionAtVeHSER_e_RngStOutpo) !=
         CeHSER_e_G2))));

    /* Logic: '<S537>/Logical Operator2' */
    rtb_LogicalOperator2_a = !VeTMMR_b_TC2ClipActive;

    /* Outputs for Atomic SubSystem: '<S537>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S546>/EdgeRising' */
    /* Logic: '<S554>/AND' incorporates:
     *  Logic: '<S554>/OR1'
     *  UnitDelay: '<S554>/Unit Delay'
     */
    Switch1_l = (rtb_LogicalOperator2_a && (!TMMR_ac_DW.UnitDelay_DSTATE_hi));

    /* Update for UnitDelay: '<S554>/Unit Delay' */
    TMMR_ac_DW.UnitDelay_DSTATE_hi = rtb_LogicalOperator2_a;

    /* End of Outputs for SubSystem: '<S546>/EdgeRising' */

    /* Switch: '<S546>/Switch1' incorporates:
     *  Constant: '<S541>/Calib'
     *  Constant: '<S543>/Calib'
     *  Constant: '<S546>/Constant Value1'
     *  Logic: '<S546>/OR'
     *  Logic: '<S546>/OR1'
     *  MinMax: '<S546>/Minimum'
     *  Sum: '<S546>/Summation'
     *  UnitDelay: '<S546>/Unit Delay'
     */
    if ((!rtb_LogicalOperator2_a) || Switch1_l)
    {
        TMMR_ac_DW.UnitDelay_DSTATE_e = 0.0F;
    }
    else
    {
        TMMR_ac_DW.UnitDelay_DSTATE_e = fminf(KeTMMR_t_TiDebounceSet,
            HeTMMR_t_MedTED_dT + TMMR_ac_DW.UnitDelay_DSTATE_e);
    }

    /* End of Switch: '<S546>/Switch1' */

    /* Logic: '<S546>/AND' incorporates:
     *  Constant: '<S543>/Calib'
     *  RelationalOperator: '<S546>/Greater  Than'
     *  UnitDelay: '<S546>/Unit Delay'
     */
    VeTMMC_t_TiDebounce = (rtb_LogicalOperator2_a &&
                           (TMMR_ac_DW.UnitDelay_DSTATE_e >=
                            KeTMMR_t_TiDebounceSet));

    /* End of Outputs for SubSystem: '<S537>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S537>/Signal Latch On With Reset' */
    /* Logic: '<S544>/OR1' incorporates:
     *  Constant: '<S542>/Calib'
     *  Logic: '<S537>/Logical2'
     *  Logic: '<S544>/NOT'
     *  Logic: '<S544>/OR'
     *  UnitDelay: '<S544>/Unit Delay'
     */
    TMMR_ac_DW.UnitDelay_DSTATE_j5 = (((KeTMMR_b_K0ClchTrqClipEnable) &&
        (VeTMMR_b_TC2ClipActive)) || ((!VeTMMC_t_TiDebounce) &&
        (TMMR_ac_DW.UnitDelay_DSTATE_j5)));

    /* End of Outputs for SubSystem: '<S537>/Signal Latch On With Reset' */

    /* Sum: '<S490>/Sum1' incorporates:
     *  UnitDelay: '<S490>/Unit Delay3'
     */
    VeTMMR_M_HASTrqK0_dt = rtb_TmpSignalConversionAtVeTTIR_M_HASTrq -
        TMMR_ac_DW.UnitDelay3_DSTATE;

    /* Logic: '<S539>/Logical' incorporates:
     *  Constant: '<S561>/Constant'
     *  Constant: '<S562>/Constant'
     *  Constant: '<S563>/Calib'
     *  RelationalOperator: '<S539>/Comparison'
     *  RelationalOperator: '<S539>/Comparison3'
     *  RelationalOperator: '<S539>/Comparison4'
     *  RelationalOperator: '<S545>/Relational Operator1'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_C2Stat'
     *  UnitDelay: '<S539>/Unit Delay4'
     */
    rtb_LogicalOperator2_a = ((((((uint32)
        rtb_TmpSignalConversionAtVeTRNR_e_C2Stat) == CeHCCR_e_ClReleased) &&
        (KeTMMR_b_C2TrqRstEnbl)) && (TMMR_ac_DW.UnitDelay4_DSTATE ==
        TMMR_ac_B.TmpSignalConversionAtVeHSER_e_RngStOutpo)) && (((uint32)
        TMMR_ac_B.TmpSignalConversionAtVeHSER_e_RngStOutpo) > CeHSER_e_G4));

    /* Outputs for Atomic SubSystem: '<S539>/EdgeRising2' */
    /* Logic: '<S560>/OR1' incorporates:
     *  UnitDelay: '<S560>/Unit Delay'
     */
    Switch1_l = !TMMR_ac_DW.UnitDelay_DSTATE_h5;

    /* Update for UnitDelay: '<S560>/Unit Delay' */
    TMMR_ac_DW.UnitDelay_DSTATE_h5 = rtb_LogicalOperator2_a;

    /* End of Outputs for SubSystem: '<S539>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S539>/EdgeRising' */
    /* Logic: '<S559>/OR1' incorporates:
     *  UnitDelay: '<S559>/Unit Delay'
     */
    rtb_OR1_e4 = !TMMR_ac_DW.UnitDelay_DSTATE_ct;

    /* Update for UnitDelay: '<S559>/Unit Delay' incorporates:
     *  Constant: '<S539>/TRUE Constant2'
     */
    TMMR_ac_DW.UnitDelay_DSTATE_ct = true;

    /* Outputs for Atomic SubSystem: '<S539>/EdgeRising2' */
    /* Logic: '<S539>/Logical1' incorporates:
     *  Logic: '<S559>/AND'
     *  Logic: '<S560>/AND'
     */
    rtb_LogicalOperator2_a = ((rtb_LogicalOperator2_a && Switch1_l) ||
        rtb_OR1_e4);

    /* End of Outputs for SubSystem: '<S539>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S539>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S538>/Accumulator Reset Limited' */
    /* Switch: '<S555>/Switch1' */
    if (rtb_LogicalOperator2_a)
    {
        /* Switch: '<S555>/Switch1' incorporates:
         *  Constant: '<S538>/Constant Value2'
         */
        VeTMMR_t_TmSinceC2Rst = 0.0F;
    }
    else
    {
        /* Sum: '<S555>/Summation' incorporates:
         *  Constant: '<S556>/Calib'
         *  UnitDelay: '<S555>/Unit Delay'
         */
        VeTMMR_t_TmSinceC2Rst = HeTMMR_t_MedTED_dT +
            TMMR_ac_DW.UnitDelay_DSTATE_c;

        /* Outputs for Atomic SubSystem: '<S555>/Limiter' */
        /* Switch: '<S558>/Switch1' incorporates:
         *  Constant: '<S538>/Constant Value4'
         *  RelationalOperator: '<S558>/Relational Operator'
         */
        if (60.0F < VeTMMR_t_TmSinceC2Rst)
        {
            /* Switch: '<S558>/Switch1' */
            VeTMMR_t_TmSinceC2Rst = 60.0F;
        }

        /* End of Switch: '<S558>/Switch1' */

        /* Switch: '<S558>/Switch' incorporates:
         *  Constant: '<S538>/Constant Value3'
         *  RelationalOperator: '<S558>/Relational Operator1'
         */
        if (VeTMMR_t_TmSinceC2Rst <= 0.0F)
        {
            /* Switch: '<S555>/Switch1' */
            VeTMMR_t_TmSinceC2Rst = 0.0F;
        }

        /* End of Switch: '<S558>/Switch' */
        /* End of Outputs for SubSystem: '<S555>/Limiter' */
    }

    /* End of Switch: '<S555>/Switch1' */
    /* End of Outputs for SubSystem: '<S538>/Accumulator Reset Limited' */
    /* End of Outputs for SubSystem: '<S4>/TMMC_C2TrqEst' */
    /* End of Outputs for SubSystem: '<S1>/TMMC_ProcClchTorq' */

    /* Inport: '<Root>/VeCSLR_n_Clch2_SlipSpeed' */
    (void)Rte_Read_VeCSLR_n_Clch2_SlipSpeed_Value(&rtb_Abs2);

    /* Outputs for Function Call SubSystem: '<S1>/TMMC_ProcClchTorq' */
    /* Outputs for Atomic SubSystem: '<S4>/TMMC_C2TrqEst' */
    /* Outputs for Atomic SubSystem: '<S538>/Accumulator Reset Limited' */
    /* Update for UnitDelay: '<S555>/Unit Delay' */
    TMMR_ac_DW.UnitDelay_DSTATE_c = VeTMMR_t_TmSinceC2Rst;

    /* End of Outputs for SubSystem: '<S538>/Accumulator Reset Limited' */

    /* Abs: '<S538>/Abs2' */
    rtb_Abs2 = fabsf(rtb_Abs2);

    /* Switch: '<S538>/Switch3' */
    if (rtb_LogicalOperator2_a)
    {
        TMMR_ac_DW.UnitDelay_DSTATE_o = rtb_Abs2;
    }

    /* End of Switch: '<S538>/Switch3' */

    /* MinMax: '<S538>/MinMax1' */
    VeTMMR_n_C2SlSpdRst = fmaxf(rtb_Abs2, TMMR_ac_DW.UnitDelay_DSTATE_o);

    /* Switch: '<S490>/Switch' incorporates:
     *  Constant: '<S533>/Calib'
     *  RelationalOperator: '<S490>/Comparison1'
     *  RelationalOperator: '<S545>/Relational Operator1'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_C2Stat'
     */
    if (rtb_TmpSignalConversionAtVeTRNR_e_C2Stat >=
            KeTMMR_e_TorqCANStK0LockedThresh)
    {
        /* Switch: '<S490>/Switch' incorporates:
         *  Lookup_n-D: '<S535>/Vector'
         *  Sum: '<S490>/Sum1'
         */
        VeTMMR_k_K0_FiltCoeff = look1_iflf_binlca_16a(VeTMMR_M_HASTrqK0_dt, ((
            const float32 *)&(KxTMMR_k_K0_FiltCoeff[0])), ((const float32 *)
            &(KtTMMR_k_K0_FiltCoeff[0])), 6U);
    }
    else
    {
        /* Switch: '<S490>/Switch' incorporates:
         *  Lookup_n-D: '<S557>/Vector'
         *  MinMax: '<S538>/MinMax1'
         *  Switch: '<S555>/Switch1'
         */
        VeTMMR_k_K0_FiltCoeff = look2_iflf_binlca_16a(VeTMMR_t_TmSinceC2Rst,
            VeTMMR_n_C2SlSpdRst, ((const float32 *)&(KxTMMR_k_C2TrqRstFilt[0])),
            ((const float32 *)&(KyTMMR_k_C2TrqRstFilt[0])), ((const float32 *)
            &(KtTMMR_k_C2TrqRstFilt[0])), TMMR_ac_ConstP.Vector_maxIndex, 5U);
    }

    /* End of Switch: '<S490>/Switch' */
    /* End of Outputs for SubSystem: '<S4>/TMMC_C2TrqEst' */
    /* End of Outputs for SubSystem: '<S1>/TMMC_ProcClchTorq' */

    /* Inport: '<Root>/VeSRAR_b_MtrBZeroTrqActv' */
    (void)Rte_Read_VeSRAR_b_MtrBZeroTrqActv_Value(&tmpRead_4);

    /* Outputs for Function Call SubSystem: '<S1>/TMMC_ProcClchTorq' */
    /* Outputs for Atomic SubSystem: '<S4>/TMMC_C2TrqEst' */
    /* Switch: '<S537>/Switch6' incorporates:
     *  Constant: '<S540>/Constant'
     *  Logic: '<S537>/Logical3'
     *  RelationalOperator: '<S537>/Comparison5'
     *  RelationalOperator: '<S545>/Relational Operator1'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_C2Stat'
     *  Switch: '<S537>/Switch4'
     *  UnitDelay: '<S544>/Unit Delay'
     */
    if (tmpRead_4 && (((uint32)rtb_TmpSignalConversionAtVeTRNR_e_C2Stat) !=
                      CeHCCR_e_ClLocked))
    {
        /* Switch: '<S537>/Switch6' incorporates:
         *  Constant: '<S537>/Constant Value7'
         */
        VeTMMC_M_Clch2TorqClipLim = 0.0F;
    }
    else if (TMMR_ac_DW.UnitDelay_DSTATE_j5)
    {
        /* Switch: '<S537>/Switch4' incorporates:
         *  Constant: '<S537>/Constant Value1'
         *  Switch: '<S537>/Switch6'
         */
        VeTMMC_M_Clch2TorqClipLim = 0.0F;
    }
    else
    {
        /* Switch: '<S537>/Switch6' incorporates:
         *  Constant: '<S537>/Constant Value5'
         *  Switch: '<S537>/Switch4'
         */
        VeTMMC_M_Clch2TorqClipLim = 9999.0F;
    }

    /* End of Switch: '<S537>/Switch6' */

    /* Switch: '<S490>/Switch5' incorporates:
     *  Abs: '<S490>/Abs'
     *  Constant: '<S490>/Constant Value6'
     *  MinMax: '<S490>/MinMax2'
     *  Product: '<S532>/Multiplication'
     *  Sum: '<S532>/Subtraction'
     *  Sum: '<S532>/Subtraction1'
     *  Switch: '<S490>/Switch3'
     *  UnitDelay: '<S490>/Unit Delay3'
     *  UnitDelay: '<S544>/Unit Delay'
     */
    if (rtb_LogicalOperator2_a)
    {
        TMMR_ac_DW.UnitDelay3_DSTATE = 0.0F;
    }
    else
    {
        if (TMMR_ac_DW.UnitDelay_DSTATE_j5)
        {
            /* Switch: '<S490>/Switch3' incorporates:
             *  Constant: '<S534>/Calib'
             */
            rtb_Merge1_b = KeTMMR_k_FiltCoeff_K0Clip;
        }
        else
        {
            /* Switch: '<S490>/Switch3' */
            rtb_Merge1_b = VeTMMR_k_K0_FiltCoeff;
        }

        TMMR_ac_DW.UnitDelay3_DSTATE += (fminf(VeTMMC_M_Clch2TorqClipLim, fabsf
            (rtb_TmpSignalConversionAtVeTTIR_M_HASTrq)) -
            TMMR_ac_DW.UnitDelay3_DSTATE) * rtb_Merge1_b;
    }

    /* End of Switch: '<S490>/Switch5' */

    /* Gain: '<S536>/Gain' incorporates:
     *  UnitDelay: '<S490>/Unit Delay3'
     */
    TMMR_ac_B.Gain_fb = TMMR_ac_DW.UnitDelay3_DSTATE;

    /* Update for UnitDelay: '<S539>/Unit Delay4' incorporates:
     *  SignalConversion generated from: '<S1>/VeHSER_e_RngSt'
     */
    TMMR_ac_DW.UnitDelay4_DSTATE =
        TMMR_ac_B.TmpSignalConversionAtVeHSER_e_RngStOutpo;

    /* Update for Switch: '<S538>/Switch3' incorporates:
     *  UnitDelay: '<S538>/Unit Delay'
     */
    TMMR_ac_DW.UnitDelay_DSTATE_o = VeTMMR_n_C2SlSpdRst;

    /* End of Outputs for SubSystem: '<S4>/TMMC_C2TrqEst' */

    /* Update for UnitDelay: '<S496>/Unit Delay' */
    TMMR_ac_DW.UnitDelay_DSTATE = VeTMMR_M_ILELaunch2CrpAftRamp;

    /* End of Outputs for SubSystem: '<S1>/TMMC_ProcClchTorq' */
#endif

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* SignalConversion generated from: '<S1>/TMMC_M_Clch1TorqEst' incorporates:
     *  SignalConversion generated from: '<S1>/TMMC_M_Clch2TorqEst'
     */
#if Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    /* Outport: '<Root>/VeTMMR_M_Clch1TorqEst' */
    (void)Rte_Write_VeTMMR_M_Clch1TorqEst_Value(TMMR_ac_B.Gain_n);

    /* Outport: '<Root>/VeTMMR_M_Clch2TorqEst' */
    (void)Rte_Write_VeTMMR_M_Clch2TorqEst_Value(TMMR_ac_B.Gain_fb);

#endif

    /* End of SignalConversion generated from: '<S1>/TMMC_M_Clch1TorqEst' */

    /* SignalConversion generated from: '<S1>/VeTMMR_M_ClchTorqOffg' incorporates:
     *  SignalConversion generated from: '<S1>/VeTMMR_M_ClchTorqOnc'
     *  SignalConversion generated from: '<S1>/VeTMMR_M_ClchTorqOncRaw'
     *  SignalConversion generated from: '<S1>/VeTMMR_M_OffgTCROvrdMax'
     *  SignalConversion generated from: '<S1>/VeTMMR_M_OffgTCROvrdMin'
     *  SignalConversion generated from: '<S1>/VeTMMR_M_OncTCROvrdMax'
     *  SignalConversion generated from: '<S1>/VeTMMR_M_OncTCROvrdMin'
     *  SignalConversion generated from: '<S1>/VeTMMR_M_OptLdLkdTCROvrdMax'
     *  SignalConversion generated from: '<S1>/VeTMMR_M_OptLdLkdTCROvrdMin'
     *  SignalConversion generated from: '<S1>/VeTMMR_M_TrqTransIn'
     *  SignalConversion generated from: '<S1>/VeTMMR_b_InertiaTorqActive'
     *  SignalConversion generated from: '<S1>/VeTMMR_b_TrqTrnfrCmpltd'
     *  SignalConversion generated from: '<S1>/VeTMMR_e_NCOffgSgn'
     *  SignalConversion generated from: '<S1>/VeTMMR_e_NCOncSgn'
     *  SignalConversion generated from: '<S1>/VeTMMR_e_OffgStatControl'
     *  SignalConversion generated from: '<S1>/VeTMMR_e_OncStatControl'
     *  SignalConversion generated from: '<S1>/VeTMMR_e_TransShftTrqSpdPhs'
     *  SignalConversion generated from: '<S1>/VeTMMR_e_TransShiftStat'
     *  SignalConversion generated from: '<S1>/VeTMMR_i_ClchIdxOffg'
     *  SignalConversion generated from: '<S1>/VeTMMR_r_CoeffDampTransIn'
     *  SignalConversion generated from: '<S1>/VeTMMR_r_CoeffDampTransOut'
     *  SignalConversion generated from: '<S1>/VeTMMR_r_CoeffGrRatClchOffgPost'
     *  SignalConversion generated from: '<S1>/VeTMMR_r_CoeffGrRatClchOffgPre'
     *  SignalConversion generated from: '<S1>/VeTMMR_r_CoeffGrRatClchOncPost'
     *  SignalConversion generated from: '<S1>/VeTMMR_r_CoeffGrRatClchOncPre'
     *  SignalConversion generated from: '<S1>/VeTMMR_r_CoeffInrtTransIn'
     *  SignalConversion generated from: '<S1>/VeTMMR_r_CoeffInrtTransOut'
     *  SignalConversion generated from: '<S1>/VeTMMR_r_OffgPostOptLead'
     *  SignalConversion generated from: '<S1>/VeTMMR_r_OffgPreOptLead'
     *  SignalConversion generated from: '<S1>/VeTMMR_r_OncPostOptLead'
     *  SignalConversion generated from: '<S1>/VeTMMR_r_OncPreOptLead'
     */
#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    /* Outport: '<Root>/VeTMMR_M_ClchTorqOffg' */
    (void)Rte_Write_VeTMMR_M_ClchTorqOffg_Value(TMMR_ac_B.Merge3_j);

    /* Outport: '<Root>/VeTMMR_M_ClchTorqOnc' */
    (void)Rte_Write_VeTMMR_M_ClchTorqOnc_Value(TMMR_ac_B.Merge1_kj);

    /* Outport: '<Root>/VeTMMR_M_ClchTorqOncRaw' */
    (void)Rte_Write_VeTMMR_M_ClchTorqOncRaw_Value(TMMR_ac_B.Gain_lt);

    /* Outport: '<Root>/VeTMMR_M_OffgTCROvrdMax' */
    (void)Rte_Write_VeTMMR_M_OffgTCROvrdMax_Value(TMMR_ac_B.DataStoreRead7);

    /* Outport: '<Root>/VeTMMR_M_OffgTCROvrdMin' */
    (void)Rte_Write_VeTMMR_M_OffgTCROvrdMin_Value(TMMR_ac_B.DataStoreRead4);

    /* Outport: '<Root>/VeTMMR_M_OncTCROvrdMax' */
    (void)Rte_Write_VeTMMR_M_OncTCROvrdMax_Value(TMMR_ac_B.DataStoreRead8);

    /* Outport: '<Root>/VeTMMR_M_OncTCROvrdMin' */
    (void)Rte_Write_VeTMMR_M_OncTCROvrdMin_Value(TMMR_ac_B.DataStoreRead5);

    /* Outport: '<Root>/VeTMMR_M_OptLdLkdTCROvrdMax' */
    (void)Rte_Write_VeTMMR_M_OptLdLkdTCROvrdMax_Value(TMMR_ac_B.DataStoreRead9);

    /* Outport: '<Root>/VeTMMR_M_OptLdLkdTCROvrdMin' */
    (void)Rte_Write_VeTMMR_M_OptLdLkdTCROvrdMin_Value(TMMR_ac_B.DataStoreRead6);

    /* Outport: '<Root>/VeTMMR_M_TrqTransIn' */
    (void)Rte_Write_VeTMMR_M_TrqTransIn_Value(TMMR_ac_B.Gain_kr);

    /* Outport: '<Root>/VeTMMR_b_InertiaTorqActive' */
    (void)Rte_Write_VeTMMR_b_InertiaTorqActive_Value(TMMR_ac_B.Data_Store_Read11);

    /* Outport: '<Root>/VeTMMR_b_TrqTrnfrCmpltd' */
    (void)Rte_Write_VeTMMR_b_TrqTrnfrCmpltd_Value(TMMR_ac_B.Gain_gh);

    /* Outport: '<Root>/VeTMMR_e_NCOffgSgn' incorporates:
     *  Merge: '<S3>/Merge22'
     */
    (void)Rte_Write_VeTMMR_e_NCOffgSgn_Value(TMMR_ac_B.Merge22_o);

    /* Outport: '<Root>/VeTMMR_e_NCOncSgn' incorporates:
     *  Merge: '<S3>/Merge14'
     */
    (void)Rte_Write_VeTMMR_e_NCOncSgn_Value(TMMR_ac_B.Merge14);

    /* Outport: '<Root>/VeTMMR_e_OffgStatControl' incorporates:
     *  DataStoreRead: '<S5>/Data_Store_Read3'
     */
    (void)Rte_Write_VeTMMR_e_OffgStatControl_Value(TMMR_ac_B.Data_Store_Read3);

    /* Outport: '<Root>/VeTMMR_e_OncStatControl' incorporates:
     *  DataStoreRead: '<S5>/Data_Store_Read4'
     */
    (void)Rte_Write_VeTMMR_e_OncStatControl_Value(TMMR_ac_B.Data_Store_Read4);

    /* Outport: '<Root>/VeTMMR_e_TransShftTrqSpdPhs' incorporates:
     *  Merge: '<S13>/Merge2'
     */
    (void)Rte_Write_VeTMMR_e_TransShftTrqSpdPhs_Value(TMMR_ac_B.Merge2_l);

    /* Outport: '<Root>/VeTMMR_e_TransShiftStat' incorporates:
     *  DataStoreRead: '<S5>/Data_Store_Read2'
     */
    (void)Rte_Write_VeTMMR_e_TransShiftStat_Value(TMMR_ac_B.Data_Store_Read2);

    /* Outport: '<Root>/VeTMMR_i_ClchIdxOffg' */
    (void)Rte_Write_VeTMMR_i_ClchIdxOffg_Value(TMMR_ac_B.Gain_gk);

    /* Outport: '<Root>/VeTMMR_r_CoeffDampTransIn' */
    (void)Rte_Write_VeTMMR_r_CoeffDampTransIn_Value(TMMR_ac_B.Gain_la);

    /* Outport: '<Root>/VeTMMR_r_CoeffDampTransOut' */
    (void)Rte_Write_VeTMMR_r_CoeffDampTransOut_Value(TMMR_ac_B.Merge8);

    /* Outport: '<Root>/VeTMMR_r_CoeffGrRatClchOffgPost' */
    (void)Rte_Write_VeTMMR_r_CoeffGrRatClchOffgPost_Value(TMMR_ac_B.Gain_g);

    /* Outport: '<Root>/VeTMMR_r_CoeffGrRatClchOffgPre' */
    (void)Rte_Write_VeTMMR_r_CoeffGrRatClchOffgPre_Value(TMMR_ac_B.Gain_ha);

    /* Outport: '<Root>/VeTMMR_r_CoeffGrRatClchOncPost' */
    (void)Rte_Write_VeTMMR_r_CoeffGrRatClchOncPost_Value(TMMR_ac_B.Gain_gx);

    /* Outport: '<Root>/VeTMMR_r_CoeffGrRatClchOncPre' */
    (void)Rte_Write_VeTMMR_r_CoeffGrRatClchOncPre_Value(TMMR_ac_B.Gain_fo);

    /* Outport: '<Root>/VeTMMR_r_CoeffInrtTransIn' */
    (void)Rte_Write_VeTMMR_r_CoeffInrtTransIn_Value(TMMR_ac_B.Gain_oq);

    /* Outport: '<Root>/VeTMMR_r_CoeffInrtTransOut' */
    (void)Rte_Write_VeTMMR_r_CoeffInrtTransOut_Value(TMMR_ac_B.Merge7);

    /* Outport: '<Root>/VeTMMR_r_OffgPostOptLead' */
    (void)Rte_Write_VeTMMR_r_OffgPostOptLead_Value(TMMR_ac_B.DataStoreRead1);

    /* Outport: '<Root>/VeTMMR_r_OffgPreOptLead' */
    (void)Rte_Write_VeTMMR_r_OffgPreOptLead_Value(TMMR_ac_B.DataStoreRead);

    /* Outport: '<Root>/VeTMMR_r_OncPostOptLead' */
    (void)Rte_Write_VeTMMR_r_OncPostOptLead_Value(TMMR_ac_B.DataStoreRead3);

    /* Outport: '<Root>/VeTMMR_r_OncPreOptLead' */
    (void)Rte_Write_VeTMMR_r_OncPreOptLead_Value(TMMR_ac_B.DataStoreRead2);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTMMR_M_ClchTorqOffg' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, TMMR_CODE) TMMR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TMMR_FUNC_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/TMMO_InitTransCo'
     */
    /* DataStoreWrite: '<S565>/Data Store Write4' incorporates:
     *  Constant: '<S584>/Calib'
     */
    VeTMMR_M_OffgTCROvrdMin_DS = KeTMMR_M_SSOffgTCROvrdMin;

    /* DataStoreWrite: '<S565>/Data Store Write6' incorporates:
     *  Constant: '<S584>/Calib'
     */
    TMMR_ac_DW.VeTMMR_M_OptLdLkdTCROvrdMin_DS = KeTMMR_M_SSOffgTCROvrdMin;

    /* DataStoreWrite: '<S565>/Data Store Write5' incorporates:
     *  Constant: '<S583>/Calib'
     */
    VeTMMR_M_OffgTCROvrdMax_DS = KeTMMR_M_SSOffgTCROvrdMax;

    /* DataStoreWrite: '<S565>/Data Store Write7' incorporates:
     *  Constant: '<S582>/Calib'
     */
    TMMR_ac_DW.VeTMMR_M_OptLdLkdTCROvrdMax_DS = KeTMMR_M_SSOffgLeadTCROvrdMax;

    /* DataStoreWrite: '<S565>/Data Store Write1' incorporates:
     *  Constant: '<S586>/Calib'
     */
    TMMR_ac_DW.VeTMMR_M_OncTCROvrdMin_DS = KeTMMR_M_SSOncTCROvrdMin;

    /* DataStoreWrite: '<S565>/Data Store Write' incorporates:
     *  Constant: '<S585>/Calib'
     */
    TMMR_ac_DW.VeTMMR_M_OncTCROvrdMax_DS = KeTMMR_M_SSOncTCROvrdMax;

    /* SignalConversion generated from: '<S565>/VeTMMR_r_CoeffGrRatClchOffgPre' incorporates:
     *  Constant: '<S593>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffGrRatClchO =
        KeTMMR_r_CoeffGrRatClchOffgPreInit;

    /* SignalConversion generated from: '<S565>/VeTMMR_r_CoeffGrRatClchOffgPost' incorporates:
     *  Constant: '<S592>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffGrRatClc_i =
        KeTMMR_r_CoeffGrRatClchOffgPostInit;

    /* SignalConversion generated from: '<S565>/VeTMMR_r_CoeffGrRatClchOncPre' incorporates:
     *  Constant: '<S595>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffGrRatClc_n =
        KeTMMR_r_CoeffGrRatClchOncPreInit;

    /* SignalConversion generated from: '<S565>/VeTMMR_r_CoeffGrRatClchOncPost' incorporates:
     *  Constant: '<S594>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffGrRatClc_k =
        KeTMMR_r_CoeffGrRatClchOncPostInit;

    /* SignalConversion generated from: '<S565>/VeTMMR_r_CoeffInrtTransIn' incorporates:
     *  Constant: '<S596>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffInrtTransI =
        KeTMMR_r_CoeffInrtTransInInit;

    /* SignalConversion generated from: '<S565>/VeTMMR_r_CoeffInrtTransOut' incorporates:
     *  Constant: '<S597>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffInrtTransO =
        KeTMMR_r_CoeffInrtTransOutInit;

    /* SignalConversion generated from: '<S565>/VeTMMR_r_CoeffDampTransIn' incorporates:
     *  Constant: '<S590>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffDampTransI =
        KeTMMR_r_CoeffDampTransInInit;

    /* SignalConversion generated from: '<S565>/VeTMMR_r_CoeffDampTransOut' incorporates:
     *  Constant: '<S591>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffDampTransO =
        KeTMMR_r_CoeffDampTransOutInit;

    /* SignalConversion generated from: '<S565>/VeTMMR_M_ClchTorqOffg' incorporates:
     *  Constant: '<S579>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_M_ClchTorqOffg = KeTMMR_M_ClchTorqOffgInit;

    /* SignalConversion generated from: '<S565>/VeTMMR_M_ClchTorqOnc' incorporates:
     *  Constant: '<S580>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_M_ClchTorqOnc = KeTMMR_M_ClchTorqOncInit;

    /* SignalConversion generated from: '<S565>/VeTMMC_e_TransShftTrqSpdPhs' incorporates:
     *  Constant: '<S570>/Constant'
     */
    TMMR_ac_B.OutportBufferForVeTMMC_e_TransShftTrqSpd =
        TMMR_ac_ConstB.Constant_f;

    /* SignalConversion generated from: '<S565>/VeTMMC_e_NCOffgSgn' incorporates:
     *  Constant: '<S568>/Constant'
     */
    TMMR_ac_B.OutportBufferForVeTMMC_e_NCOffgSgn = TMMR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S565>/VeTMMC_e_NCOncSgn' incorporates:
     *  Constant: '<S569>/Constant'
     */
    TMMR_ac_B.OutportBufferForVeTMMC_e_NCOncSgn = TMMR_ac_ConstB.Constant_fp;

    /* SignalConversion generated from: '<S565>/VeTMMR_b_TrqTrnfrCmpltd' */
    TMMR_ac_B.OutportBufferForVeTMMR_b_TrqTrnfrCmpltd = false;

    /* SignalConversion generated from: '<S565>/VeTMMR_M_TrqTransIn' */
    TMMR_ac_B.OutportBufferForVeTMMR_M_TrqTransIn = 0.0F;

    /* SignalConversion generated from: '<S565>/VeTMMR_M_ClchTorqOncRaw' incorporates:
     *  Constant: '<S581>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_M_ClchTorqOncRaw =
        KeTMMR_M_ClchTorqOncInitRaw;

    /* SignalConversion generated from: '<S565>/VeTMMR_i_ClchIdxOffg' incorporates:
     *  Constant: '<S589>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_i_ClchIdxOffg = KeTMMR_i_SSClchIdxOffgInit;

    /* Outport: '<Root>/VeTMMR_r_GR1ratio' incorporates:
     *  Constant: '<S598>/Calib'
     *  SignalConversion generated from: '<S565>/VeTMMR_r_GR1ratio'
     */
    (void)Rte_Write_VeTMMR_r_GR1ratio_Value(KeTMMR_r_GR1ratioInit);

    /* Outport: '<Root>/VeTMMR_r_GR2ratio' incorporates:
     *  Constant: '<S599>/Calib'
     *  SignalConversion generated from: '<S565>/VeTMMR_r_GR2ratio'
     */
    (void)Rte_Write_VeTMMR_r_GR2ratio_Value(KeTMMR_r_GR2ratioInit);

    /* Outport: '<Root>/VeTMMR_r_GR3ratio' incorporates:
     *  Constant: '<S600>/Calib'
     *  SignalConversion generated from: '<S565>/VeTMMR_r_GR3ratio'
     */
    (void)Rte_Write_VeTMMR_r_GR3ratio_Value(KeTMMR_r_GR3ratioInit);

    /* SignalConversion generated from: '<S565>/VeTMMR_M_Clch1TorqEst' incorporates:
     *  Constant: '<S576>/Calib'
     */
    TMMR_ac_B.VeTMMR_M_Clch1TorqEst = KeTMMR_M_Clch1TorqEstInit;

    /* SignalConversion generated from: '<S565>/VeTMMR_M_Clch2TorqEst' incorporates:
     *  Constant: '<S577>/Calib'
     */
    TMMR_ac_B.VeTMMR_M_Clch2TorqEst = KeTMMR_M_Clch2TorqEstInit;

    /* Outport: '<Root>/VeTMMR_M_Clch3TorqEst' incorporates:
     *  Constant: '<S578>/Calib'
     *  SignalConversion generated from: '<S565>/VeTMMR_M_Clch3TorqEst'
     */
    (void)Rte_Write_VeTMMR_M_Clch3TorqEst_Value(KeTMMR_M_Clch3TorqEstInit);

    /* Outport: '<Root>/VeTMMR_e_NC1Sgn' incorporates:
     *  Constant: '<S571>/Constant'
     *  SignalConversion generated from: '<S565>/VeTMMR_e_NC1Sgn'
     */
    (void)Rte_Write_VeTMMR_e_NC1Sgn_Value(TMMR_ac_ConstB.Constant_l);

    /* Outport: '<Root>/VeTMMR_e_NC3Sgn' incorporates:
     *  Constant: '<S572>/Constant'
     *  SignalConversion generated from: '<S565>/VeTMMR_e_NC3Sgn'
     */
    (void)Rte_Write_VeTMMR_e_NC3Sgn_Value(TMMR_ac_ConstB.Constant_m);

    /* Outport: '<Root>/VeTMMR_r_TSXRGrTLF' incorporates:
     *  Constant: '<S601>/Calib'
     *  SignalConversion generated from: '<S565>/VeTMMR_r_TSXRGrTLF'
     */
    (void)Rte_Write_VeTMMR_r_TSXRGrTLF_Value(KeTMMR_r_TSXRGrTLFInit);

    /* Outport: '<Root>/VeTMMR_r_ClchStrtRatio' incorporates:
     *  SignalConversion generated from: '<S565>/VeTMMR_r_ClchStrtRatio'
     */
    (void)Rte_Write_VeTMMR_r_ClchStrtRatio_Value(2.0F);

    /* Outport: '<Root>/VeTMMR_b_NtrlClchStrtActv' incorporates:
     *  SignalConversion generated from: '<S565>/VeTMMR_b_NtrlClchStrtActv'
     */
    (void)Rte_Write_VeTMMR_b_NtrlClchStrtActv_Value(false);

    /* Outport: '<Root>/VeTMMR_e_PropulsionMode' incorporates:
     *  Constant: '<S566>/Constant'
     *  SignalConversion generated from: '<S565>/VeTMMR_e_PropulsionMode'
     */
    (void)Rte_Write_VeTMMR_e_PropulsionMode_Value(TMMR_ac_ConstB.Constant_k);

    /* Outport: '<Root>/VeTMMR_dM_Clch1OfldRt' incorporates:
     *  Constant: '<S587>/Calib'
     *  SignalConversion generated from: '<S565>/VeTMMR_dM_Clch1OfldRt'
     */
    (void)Rte_Write_VeTMMR_dM_Clch1OfldRt_Value(KeTMMR_dM_Clch1OfldRtInit);

    /* Outport: '<Root>/VeTMMR_dM_Clch2OfldRt' incorporates:
     *  Constant: '<S588>/Calib'
     *  SignalConversion generated from: '<S565>/VeTMMR_dM_Clch2OfldRt'
     */
    (void)Rte_Write_VeTMMR_dM_Clch2OfldRt_Value(KeTMMR_dM_Clch2OfldRtInit);

    /* Outport: '<Root>/VeTMMR_t_MtrBOfldMaxTm' incorporates:
     *  Constant: '<S603>/Calib'
     *  SignalConversion generated from: '<S565>/VeTMMR_t_MtrBOfldMaxTm'
     */
    (void)Rte_Write_VeTMMR_t_MtrBOfldMaxTm_Value(KeTMMR_t_MtrBOfldMaxTmInit);

    /* Outport: '<Root>/VeTMMR_t_MtrBOfldHldTm' incorporates:
     *  Constant: '<S602>/Calib'
     *  SignalConversion generated from: '<S565>/VeTMMR_t_MtrBOfldHldTm'
     */
    (void)Rte_Write_VeTMMR_t_MtrBOfldHldTm_Value(KeTMMR_t_MtrBOfldHldTmInit);

    /* Outport: '<Root>/VeTMMR_b_TrqBrkShftActv' incorporates:
     *  SignalConversion generated from: '<S565>/VeTMMR_b_TrqBrkShftActv'
     */
    (void)Rte_Write_VeTMMR_b_TrqBrkShftActv_Value(false);

    /* Outport: '<Root>/VeTMMR_b_ClchFaultActv' incorporates:
     *  SignalConversion generated from: '<S565>/VeTMMR_b_ClchFaultActv'
     */
    (void)Rte_Write_VeTMMR_b_ClchFaultActv_Value(false);

    /* Outport: '<Root>/VeTMMR_b_TSXRGrTLFFA' incorporates:
     *  SignalConversion generated from: '<S565>/VeTMMR_b_TSXRGrTLFFA'
     */
    (void)Rte_Write_VeTMMR_b_TSXRGrTLFFA_Value(false);

    /* SignalConversion generated from: '<S565>/VeTMMR_e_TransShiftStat' incorporates:
     *  Constant: '<S573>/Constant'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_e_TransShiftStat = TMMR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S565>/VeTMMR_e_OffgStatControl' incorporates:
     *  Constant: '<S574>/Constant'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_e_OffgStatControl =
        TMMR_ac_ConstB.Constant_lq;

    /* SignalConversion generated from: '<S565>/VeTMMR_e_OncStatControl' incorporates:
     *  Constant: '<S575>/Constant'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_e_OncStatControl =
        TMMR_ac_ConstB.Constant_c;

    /* SignalConversion generated from: '<S565>/VeTMMR_b_InertiaTorqActivePon' */
    TMMR_ac_B.OutportBufferForVeTMMR_b_InertiaTorqActi = false;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeTMMR_e_NCOffgSgn' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMC_e_NCOffgSgn'
     *  SignalConversion generated from: '<S565>/VeTMMC_e_NCOffgSgn'
     */
    (void)Rte_Write_VeTMMR_e_NCOffgSgn_Value
        (TMMR_ac_B.OutportBufferForVeTMMC_e_NCOffgSgn);

    /* Outport: '<Root>/VeTMMR_e_NCOncSgn' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMC_e_NCOncSgn'
     *  SignalConversion generated from: '<S565>/VeTMMC_e_NCOncSgn'
     */
    (void)Rte_Write_VeTMMR_e_NCOncSgn_Value
        (TMMR_ac_B.OutportBufferForVeTMMC_e_NCOncSgn);

    /* Outport: '<Root>/VeTMMR_e_TransShftTrqSpdPhs' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMC_e_TransShftTrqSpdPhs'
     *  SignalConversion generated from: '<S565>/VeTMMC_e_TransShftTrqSpdPhs'
     */
    (void)Rte_Write_VeTMMR_e_TransShftTrqSpdPhs_Value
        (TMMR_ac_B.OutportBufferForVeTMMC_e_TransShftTrqSpd);

    /* Outport: '<Root>/VeTMMR_M_Clch1TorqEst' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_M_Clch1TorqEst'
     */
    (void)Rte_Write_VeTMMR_M_Clch1TorqEst_Value(TMMR_ac_B.VeTMMR_M_Clch1TorqEst);

    /* Outport: '<Root>/VeTMMR_M_Clch2TorqEst' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_M_Clch2TorqEst'
     */
    (void)Rte_Write_VeTMMR_M_Clch2TorqEst_Value(TMMR_ac_B.VeTMMR_M_Clch2TorqEst);

    /* Outport: '<Root>/VeTMMR_M_ClchTorqOffg' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_M_ClchTorqOffg'
     */
    (void)Rte_Write_VeTMMR_M_ClchTorqOffg_Value
        (TMMR_ac_B.OutportBufferForVeTMMR_M_ClchTorqOffg);

    /* Outport: '<Root>/VeTMMR_M_ClchTorqOnc' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_M_ClchTorqOnc'
     */
    (void)Rte_Write_VeTMMR_M_ClchTorqOnc_Value
        (TMMR_ac_B.OutportBufferForVeTMMR_M_ClchTorqOnc);

    /* Outport: '<Root>/VeTMMR_M_ClchTorqOncRaw' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_M_ClchTorqOncRaw'
     */
    (void)Rte_Write_VeTMMR_M_ClchTorqOncRaw_Value
        (TMMR_ac_B.OutportBufferForVeTMMR_M_ClchTorqOncRaw);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/TMMO_InitTransCo'
     */
    /* Outport: '<Root>/VeTMMR_M_OffgTCROvrdMax' incorporates:
     *  Constant: '<S583>/Calib'
     *  Gain: '<S615>/Gain'
     *  SignalConversion generated from: '<S2>/VeTMMR_M_OffgTCROvrdMax'
     */
    (void)Rte_Write_VeTMMR_M_OffgTCROvrdMax_Value(KeTMMR_M_SSOffgTCROvrdMax);

    /* Outport: '<Root>/VeTMMR_M_OffgTCROvrdMin' incorporates:
     *  Constant: '<S584>/Calib'
     *  Gain: '<S611>/Gain'
     *  SignalConversion generated from: '<S2>/VeTMMR_M_OffgTCROvrdMin'
     */
    (void)Rte_Write_VeTMMR_M_OffgTCROvrdMin_Value(KeTMMR_M_SSOffgTCROvrdMin);

    /* Outport: '<Root>/VeTMMR_M_OncTCROvrdMax' incorporates:
     *  Constant: '<S585>/Calib'
     *  Gain: '<S607>/Gain'
     *  SignalConversion generated from: '<S2>/VeTMMR_M_OncTCROvrdMax'
     */
    (void)Rte_Write_VeTMMR_M_OncTCROvrdMax_Value(KeTMMR_M_SSOncTCROvrdMax);

    /* Outport: '<Root>/VeTMMR_M_OncTCROvrdMin' incorporates:
     *  Constant: '<S586>/Calib'
     *  Gain: '<S606>/Gain'
     *  SignalConversion generated from: '<S2>/VeTMMR_M_OncTCROvrdMin'
     */
    (void)Rte_Write_VeTMMR_M_OncTCROvrdMin_Value(KeTMMR_M_SSOncTCROvrdMin);

    /* Outport: '<Root>/VeTMMR_M_OptLdLkdTCROvrdMax' incorporates:
     *  Constant: '<S582>/Calib'
     *  Gain: '<S605>/Gain'
     *  SignalConversion generated from: '<S2>/VeTMMR_M_OptLdLkdTCROvrdMax'
     */
    (void)Rte_Write_VeTMMR_M_OptLdLkdTCROvrdMax_Value
        (KeTMMR_M_SSOffgLeadTCROvrdMax);

    /* Outport: '<Root>/VeTMMR_M_OptLdLkdTCROvrdMin' incorporates:
     *  Constant: '<S584>/Calib'
     *  Gain: '<S612>/Gain'
     *  SignalConversion generated from: '<S2>/VeTMMR_M_OptLdLkdTCROvrdMin'
     */
    (void)Rte_Write_VeTMMR_M_OptLdLkdTCROvrdMin_Value(KeTMMR_M_SSOffgTCROvrdMin);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeTMMR_M_TrqTransIn' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_M_TrqTransIn'
     */
    (void)Rte_Write_VeTMMR_M_TrqTransIn_Value
        (TMMR_ac_B.OutportBufferForVeTMMR_M_TrqTransIn);

    /* Outport: '<Root>/VeTMMR_b_InertiaTorqActive' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_b_InertiaTorqActivePon'
     */
    (void)Rte_Write_VeTMMR_b_InertiaTorqActive_Value
        (TMMR_ac_B.OutportBufferForVeTMMR_b_InertiaTorqActi);

    /* Outport: '<Root>/VeTMMR_b_TrqTrnfrCmpltd' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_b_TrqTrnfrCmpltd'
     */
    (void)Rte_Write_VeTMMR_b_TrqTrnfrCmpltd_Value
        (TMMR_ac_B.OutportBufferForVeTMMR_b_TrqTrnfrCmpltd);

    /* Outport: '<Root>/VeTMMR_e_OffgStatControl' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_e_OffgStatControl'
     *  SignalConversion generated from: '<S565>/VeTMMR_e_OffgStatControl'
     */
    (void)Rte_Write_VeTMMR_e_OffgStatControl_Value
        (TMMR_ac_B.OutportBufferForVeTMMR_e_OffgStatControl);

    /* Outport: '<Root>/VeTMMR_e_OncStatControl' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_e_OncStatControl'
     *  SignalConversion generated from: '<S565>/VeTMMR_e_OncStatControl'
     */
    (void)Rte_Write_VeTMMR_e_OncStatControl_Value
        (TMMR_ac_B.OutportBufferForVeTMMR_e_OncStatControl);

    /* Outport: '<Root>/VeTMMR_e_TransShiftStat' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_e_TransShiftStat'
     *  SignalConversion generated from: '<S565>/VeTMMR_e_TransShiftStat'
     */
    (void)Rte_Write_VeTMMR_e_TransShiftStat_Value
        (TMMR_ac_B.OutportBufferForVeTMMR_e_TransShiftStat);

    /* Outport: '<Root>/VeTMMR_i_ClchIdxOffg' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_i_ClchIdxOffg'
     */
    (void)Rte_Write_VeTMMR_i_ClchIdxOffg_Value
        (TMMR_ac_B.OutportBufferForVeTMMR_i_ClchIdxOffg);

    /* Outport: '<Root>/VeTMMR_r_CoeffDampTransIn' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_r_CoeffDampTransIn'
     */
    (void)Rte_Write_VeTMMR_r_CoeffDampTransIn_Value
        (TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffDampTransI);

    /* Outport: '<Root>/VeTMMR_r_CoeffDampTransOut' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_r_CoeffDampTransOut'
     */
    (void)Rte_Write_VeTMMR_r_CoeffDampTransOut_Value
        (TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffDampTransO);

    /* Outport: '<Root>/VeTMMR_r_CoeffGrRatClchOffgPost' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_r_CoeffGrRatClchOffgPost'
     */
    (void)Rte_Write_VeTMMR_r_CoeffGrRatClchOffgPost_Value
        (TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffGrRatClc_i);

    /* Outport: '<Root>/VeTMMR_r_CoeffGrRatClchOffgPre' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_r_CoeffGrRatClchOffgPre'
     */
    (void)Rte_Write_VeTMMR_r_CoeffGrRatClchOffgPre_Value
        (TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffGrRatClchO);

    /* Outport: '<Root>/VeTMMR_r_CoeffGrRatClchOncPost' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_r_CoeffGrRatClchOncPost'
     */
    (void)Rte_Write_VeTMMR_r_CoeffGrRatClchOncPost_Value
        (TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffGrRatClc_k);

    /* Outport: '<Root>/VeTMMR_r_CoeffGrRatClchOncPre' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_r_CoeffGrRatClchOncPre'
     */
    (void)Rte_Write_VeTMMR_r_CoeffGrRatClchOncPre_Value
        (TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffGrRatClc_n);

    /* Outport: '<Root>/VeTMMR_r_CoeffInrtTransIn' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_r_CoeffInrtTransIn'
     */
    (void)Rte_Write_VeTMMR_r_CoeffInrtTransIn_Value
        (TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffInrtTransI);

    /* Outport: '<Root>/VeTMMR_r_CoeffInrtTransOut' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMMR_r_CoeffInrtTransOut'
     */
    (void)Rte_Write_VeTMMR_r_CoeffInrtTransOut_Value
        (TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffInrtTransO);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/TMMO_InitTransCo'
     */
    /* Outport: '<Root>/VeTMMR_r_OffgPostOptLead' incorporates:
     *  Constant: '<S592>/Calib'
     *  SignalConversion generated from: '<S2>/VeTMMR_r_OffgPostVTVR'
     */
    (void)Rte_Write_VeTMMR_r_OffgPostOptLead_Value
        (KeTMMR_r_CoeffGrRatClchOffgPostInit);

    /* Outport: '<Root>/VeTMMR_r_OffgPreOptLead' incorporates:
     *  Constant: '<S593>/Calib'
     *  SignalConversion generated from: '<S2>/VeTMMR_r_OffgPreVTVR'
     */
    (void)Rte_Write_VeTMMR_r_OffgPreOptLead_Value
        (KeTMMR_r_CoeffGrRatClchOffgPreInit);

    /* Outport: '<Root>/VeTMMR_r_OncPostOptLead' incorporates:
     *  Constant: '<S594>/Calib'
     *  SignalConversion generated from: '<S2>/VeTMMR_r_OncPostVTVR'
     */
    (void)Rte_Write_VeTMMR_r_OncPostOptLead_Value
        (KeTMMR_r_CoeffGrRatClchOncPostInit);

    /* Outport: '<Root>/VeTMMR_r_OncPreOptLead' incorporates:
     *  Constant: '<S595>/Calib'
     *  SignalConversion generated from: '<S2>/VeTMMR_r_OncPreVTVR'
     */
    (void)Rte_Write_VeTMMR_r_OncPreOptLead_Value
        (KeTMMR_r_CoeffGrRatClchOncPreInit);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, TMMR_CODE) TMMR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TMMR_FUNC_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/TMMO_InitTransCo'
     */
    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMR_r_CoeffGrRatClchOffgPre' incorporates:
     *  Constant: '<S593>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffGrRatClchO =
        KeTMMR_r_CoeffGrRatClchOffgPreInit;

    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMR_r_CoeffGrRatClchOffgPost' incorporates:
     *  Constant: '<S592>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffGrRatClc_i =
        KeTMMR_r_CoeffGrRatClchOffgPostInit;

    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMR_r_CoeffGrRatClchOncPre' incorporates:
     *  Constant: '<S595>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffGrRatClc_n =
        KeTMMR_r_CoeffGrRatClchOncPreInit;

    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMR_r_CoeffGrRatClchOncPost' incorporates:
     *  Constant: '<S594>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffGrRatClc_k =
        KeTMMR_r_CoeffGrRatClchOncPostInit;

    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMR_r_CoeffInrtTransIn' incorporates:
     *  Constant: '<S596>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffInrtTransI =
        KeTMMR_r_CoeffInrtTransInInit;

    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMR_r_CoeffInrtTransOut' incorporates:
     *  Constant: '<S597>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffInrtTransO =
        KeTMMR_r_CoeffInrtTransOutInit;

    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMR_r_CoeffDampTransIn' incorporates:
     *  Constant: '<S590>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffDampTransI =
        KeTMMR_r_CoeffDampTransInInit;

    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMR_r_CoeffDampTransOut' incorporates:
     *  Constant: '<S591>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_r_CoeffDampTransO =
        KeTMMR_r_CoeffDampTransOutInit;

    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMR_M_ClchTorqOffg' incorporates:
     *  Constant: '<S579>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_M_ClchTorqOffg = KeTMMR_M_ClchTorqOffgInit;

    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMR_M_ClchTorqOnc' incorporates:
     *  Constant: '<S580>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_M_ClchTorqOnc = KeTMMR_M_ClchTorqOncInit;

    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMC_e_TransShftTrqSpdPhs' incorporates:
     *  Constant: '<S570>/Constant'
     */
    TMMR_ac_B.OutportBufferForVeTMMC_e_TransShftTrqSpd =
        TMMR_ac_ConstB.Constant_f;

    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMC_e_NCOffgSgn' incorporates:
     *  Constant: '<S568>/Constant'
     */
    TMMR_ac_B.OutportBufferForVeTMMC_e_NCOffgSgn = TMMR_ac_ConstB.Constant_a;

    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMC_e_NCOncSgn' incorporates:
     *  Constant: '<S569>/Constant'
     */
    TMMR_ac_B.OutportBufferForVeTMMC_e_NCOncSgn = TMMR_ac_ConstB.Constant_fp;

    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMR_M_ClchTorqOncRaw' incorporates:
     *  Constant: '<S581>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_M_ClchTorqOncRaw =
        KeTMMR_M_ClchTorqOncInitRaw;

    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMR_i_ClchIdxOffg' incorporates:
     *  Constant: '<S589>/Calib'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_i_ClchIdxOffg = KeTMMR_i_SSClchIdxOffgInit;

    /* SystemInitialize for Outport: '<Root>/VeTMMR_r_GR1ratio' incorporates:
     *  Constant: '<S598>/Calib'
     *  SignalConversion generated from: '<S565>/VeTMMR_r_GR1ratio'
     */
    (void)Rte_Write_VeTMMR_r_GR1ratio_Value(KeTMMR_r_GR1ratioInit);

    /* SystemInitialize for Outport: '<Root>/VeTMMR_r_GR2ratio' incorporates:
     *  Constant: '<S599>/Calib'
     *  SignalConversion generated from: '<S565>/VeTMMR_r_GR2ratio'
     */
    (void)Rte_Write_VeTMMR_r_GR2ratio_Value(KeTMMR_r_GR2ratioInit);

    /* SystemInitialize for Outport: '<Root>/VeTMMR_r_GR3ratio' incorporates:
     *  Constant: '<S600>/Calib'
     *  SignalConversion generated from: '<S565>/VeTMMR_r_GR3ratio'
     */
    (void)Rte_Write_VeTMMR_r_GR3ratio_Value(KeTMMR_r_GR3ratioInit);

    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMR_M_Clch1TorqEst' incorporates:
     *  Constant: '<S576>/Calib'
     */
    TMMR_ac_B.VeTMMR_M_Clch1TorqEst = KeTMMR_M_Clch1TorqEstInit;

    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMR_M_Clch2TorqEst' incorporates:
     *  Constant: '<S577>/Calib'
     */
    TMMR_ac_B.VeTMMR_M_Clch2TorqEst = KeTMMR_M_Clch2TorqEstInit;

    /* SystemInitialize for Outport: '<Root>/VeTMMR_M_Clch3TorqEst' incorporates:
     *  Constant: '<S578>/Calib'
     *  SignalConversion generated from: '<S565>/VeTMMR_M_Clch3TorqEst'
     */
    (void)Rte_Write_VeTMMR_M_Clch3TorqEst_Value(KeTMMR_M_Clch3TorqEstInit);

    /* SystemInitialize for Outport: '<Root>/VeTMMR_e_NC1Sgn' incorporates:
     *  Constant: '<S571>/Constant'
     *  SignalConversion generated from: '<S565>/VeTMMR_e_NC1Sgn'
     */
    (void)Rte_Write_VeTMMR_e_NC1Sgn_Value(TMMR_ac_ConstB.Constant_l);

    /* SystemInitialize for Outport: '<Root>/VeTMMR_e_NC3Sgn' incorporates:
     *  Constant: '<S572>/Constant'
     *  SignalConversion generated from: '<S565>/VeTMMR_e_NC3Sgn'
     */
    (void)Rte_Write_VeTMMR_e_NC3Sgn_Value(TMMR_ac_ConstB.Constant_m);

    /* SystemInitialize for Outport: '<Root>/VeTMMR_r_TSXRGrTLF' incorporates:
     *  Constant: '<S601>/Calib'
     *  SignalConversion generated from: '<S565>/VeTMMR_r_TSXRGrTLF'
     */
    (void)Rte_Write_VeTMMR_r_TSXRGrTLF_Value(KeTMMR_r_TSXRGrTLFInit);

    /* SystemInitialize for Outport: '<Root>/VeTMMR_r_ClchStrtRatio' incorporates:
     *  SignalConversion generated from: '<S565>/VeTMMR_r_ClchStrtRatio'
     */
    (void)Rte_Write_VeTMMR_r_ClchStrtRatio_Value(2.0F);

    /* SystemInitialize for Outport: '<Root>/VeTMMR_e_PropulsionMode' incorporates:
     *  Constant: '<S566>/Constant'
     *  SignalConversion generated from: '<S565>/VeTMMR_e_PropulsionMode'
     */
    (void)Rte_Write_VeTMMR_e_PropulsionMode_Value(TMMR_ac_ConstB.Constant_k);

    /* SystemInitialize for Outport: '<Root>/VeTMMR_dM_Clch1OfldRt' incorporates:
     *  Constant: '<S587>/Calib'
     *  SignalConversion generated from: '<S565>/VeTMMR_dM_Clch1OfldRt'
     */
    (void)Rte_Write_VeTMMR_dM_Clch1OfldRt_Value(KeTMMR_dM_Clch1OfldRtInit);

    /* SystemInitialize for Outport: '<Root>/VeTMMR_dM_Clch2OfldRt' incorporates:
     *  Constant: '<S588>/Calib'
     *  SignalConversion generated from: '<S565>/VeTMMR_dM_Clch2OfldRt'
     */
    (void)Rte_Write_VeTMMR_dM_Clch2OfldRt_Value(KeTMMR_dM_Clch2OfldRtInit);

    /* SystemInitialize for Outport: '<Root>/VeTMMR_t_MtrBOfldMaxTm' incorporates:
     *  Constant: '<S603>/Calib'
     *  SignalConversion generated from: '<S565>/VeTMMR_t_MtrBOfldMaxTm'
     */
    (void)Rte_Write_VeTMMR_t_MtrBOfldMaxTm_Value(KeTMMR_t_MtrBOfldMaxTmInit);

    /* SystemInitialize for Outport: '<Root>/VeTMMR_t_MtrBOfldHldTm' incorporates:
     *  Constant: '<S602>/Calib'
     *  SignalConversion generated from: '<S565>/VeTMMR_t_MtrBOfldHldTm'
     */
    (void)Rte_Write_VeTMMR_t_MtrBOfldHldTm_Value(KeTMMR_t_MtrBOfldHldTmInit);

    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMR_e_TransShiftStat' incorporates:
     *  Constant: '<S573>/Constant'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_e_TransShiftStat = TMMR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMR_e_OffgStatControl' incorporates:
     *  Constant: '<S574>/Constant'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_e_OffgStatControl =
        TMMR_ac_ConstB.Constant_lq;

    /* SystemInitialize for SignalConversion generated from: '<S565>/VeTMMR_e_OncStatControl' incorporates:
     *  Constant: '<S575>/Constant'
     */
    TMMR_ac_B.OutportBufferForVeTMMR_e_OncStatControl =
        TMMR_ac_ConstB.Constant_c;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/TMMR_FUNC_MedTED'
     */
#if Rte_SysCon_Variant_TMMR_FUNC_Enable || Rte_SysCon_Variant_TMMR_FUNC_EnableProcClchTorq

    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
#if Rte_SysCon_Variant_TMMR_FUNC_Enable

    /* SystemInitialize for Function Call SubSystem: '<S1>/TMMC' */
    /* SystemInitialize for Chart: '<S18>/TMMC_Stateflow' incorporates:
     *  SubSystem: '<S3>/TMMC_ClchTorqSel'
     */
    /* Start for If: '<S13>/If' */
    TMMR_ac_DW.If_ActiveSubsystem_l = -1;

    /* SystemInitialize for IfAction SubSystem: '<S13>/TMMC_SpdB4TrqPhs' */
    /* Start for If: '<S99>/If' */
    TMMR_ac_DW.If_ActiveSubsystem_ll = -1;

    /* End of SystemInitialize for SubSystem: '<S13>/TMMC_SpdB4TrqPhs' */

    /* SystemInitialize for Chart: '<S18>/TMMC_Stateflow' incorporates:
     *  SubSystem: '<S3>/TMMC_ShiftState'
     */
    /* SystemInitialize for S-Function (fcgen): '<S17>/FcnCall_Generator' incorporates:
     *  SubSystem: '<S17>/TransShiftStateAction'
     */
    /* Start for If: '<S231>/If' */
    TMMR_ac_DW.If_ActiveSubsystem = -1;

    /* SystemInitialize for IfAction SubSystem: '<S231>/TorquePhase' */
    /* Start for If: '<S242>/If1' */
    TMMR_ac_DW.If1_ActiveSubsystem = -1;

    /* End of SystemInitialize for SubSystem: '<S231>/TorquePhase' */
    /* End of SystemInitialize for S-Function (fcgen): '<S17>/FcnCall_Generator' */
    /* End of SystemInitialize for SubSystem: '<S1>/TMMC' */
#endif

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* SystemInitialize for Outport: '<Root>/VeTMMR_e_TransShftTrqSpdPhs' incorporates:
     *  Merge: '<Root>/Merge_4'
     */
    (void)Rte_Write_VeTMMR_e_TransShftTrqSpdPhs_Value
        (CeTMMR_e_InactiveShiftInProgress);

    /* SystemInitialize for Outport: '<Root>/VeTMMR_e_NCOffgSgn' incorporates:
     *  Merge: '<Root>/Merge_5'
     */
    (void)Rte_Write_VeTMMR_e_NCOffgSgn_Value(CeTMMR_e_UnknownNCSign);

    /* SystemInitialize for Outport: '<Root>/VeTMMR_e_NCOncSgn' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    (void)Rte_Write_VeTMMR_e_NCOncSgn_Value(CeTMMR_e_UnknownNCSign);

    /* SystemInitialize for Outport: '<Root>/VeTMMR_e_TransShiftStat' incorporates:
     *  Merge: '<Root>/Merge22'
     */
    (void)Rte_Write_VeTMMR_e_TransShiftStat_Value(CeTMMR_e_SteadyState);

    /* SystemInitialize for Outport: '<Root>/VeTMMR_e_OffgStatControl' incorporates:
     *  Merge: '<Root>/Merge21'
     */
    (void)Rte_Write_VeTMMR_e_OffgStatControl_Value(CeHSER_e_ONComing_C2CTrqPhs);

    /* SystemInitialize for Outport: '<Root>/VeTMMR_e_OncStatControl' incorporates:
     *  Merge: '<Root>/Merge20'
     */
    (void)Rte_Write_VeTMMR_e_OncStatControl_Value(CeHSER_e_ONComing_C2CTrqPhs);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
