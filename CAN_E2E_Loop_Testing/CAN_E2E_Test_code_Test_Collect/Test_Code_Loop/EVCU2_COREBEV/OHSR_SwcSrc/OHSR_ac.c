/*
 * File: OHSR_ac.c
 *
 * Code generated for Simulink model 'OHSR_ac'.
 *
 * Model version                  : 9.144
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 14:39:20 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "OHSR_ac.h"
#include "intrp2d_fu32fla_16a.h"
#include "look1_iflf_binlca_16a.h"
#include "look2_iflf_binlca_16a.h"
#include "plook_u32ff_binca_16a.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_OHSR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, OHSR_VAR_INIT) HaOHSR_b_DsrdEngStMap[54] =
{
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0
} ;                                    /* Referenced by:
                                        * '<S795>/Calib'
                                        * '<S800>/Calib'
                                        * '<S1285>/Calib'
                                        */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_7

static volatile CONST(boolean, OHSR_VAR_INIT) HaOHSR_b_EnblLaunchSpdCntrl[10] =
{
    1, 0, 1, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S482>/Calib' */

#endif

static volatile CONST(boolean, OHSR_VAR_INIT) HaOHSR_b_EnblVLENeutrl_HTDRRngSt
    [16] =
{
    1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S523>/Calib' */

static volatile CONST(boolean, OHSR_VAR_INIT) HaOHSR_b_ISNeutral[68] =
{
    0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S524>/Calib' */

static volatile CONST(boolean, OHSR_VAR_INIT) HaOHSR_b_InhibitShftTypeStdySt[68]
    =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S525>/Calib' */

static volatile CONST(boolean, OHSR_VAR_INIT) HaOHSR_b_M1_NiDsrd_RngStMap[8] =
{
    0, 0, 1, 0, 0, 1, 0, 0
} ;                                    /* Referenced by: '<S658>/Calib' */

static volatile CONST(boolean, OHSR_VAR_INIT) HaOHSR_b_M1_RngStForTCMReset[8] =
{
    0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S659>/Calib' */

static volatile CONST(boolean, OHSR_VAR_INIT) HaOHSR_b_M2_NiDsrd_RngStMap[8] =
{
    0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S670>/Calib' */

static volatile CONST(boolean, OHSR_VAR_INIT) HaOHSR_b_M2_RngStForTCMReset[8] =
{
    0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S671>/Calib' */

static volatile CONST(boolean, OHSR_VAR_INIT) HaOHSR_b_N_NiDsrd_RngStMap[8] =
{
    0, 0, 1, 0, 0, 1, 0, 0
} ;                                    /* Referenced by: '<S682>/Calib' */

static volatile CONST(boolean, OHSR_VAR_INIT) HaOHSR_b_N_RngStForTCMReset[8] =
{
    0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S683>/Calib' */

static volatile CONST(boolean, OHSR_VAR_INIT) HaOHSR_b_ParallelStates[68] =
{
    0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S526>/Calib' */

static volatile CONST(boolean, OHSR_VAR_INIT) HaOHSR_b_Series2Hybrid[68] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S527>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_3

static volatile CONST(boolean, OHSR_VAR_INIT) HaOHSR_b_SuperCreepUseTa[8] =
{
    0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S414>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_3

static volatile CONST(boolean, OHSR_VAR_INIT) HaOHSR_b_SuperCreepUseTb[8] =
{
    1, 1, 1, 0, 0, 1, 0, 0
} ;                                    /* Referenced by: '<S415>/Calib' */

#endif

static volatile CONST(TeOHSR_e_RngSel, OHSR_VAR_INIT) HaOHSR_e_DsrdRngStMap[54] =
{
    CeOHSR_e_RngSel_N, CeOHSR_e_RngSel_N, CeOHSR_e_RngSel_N, CeOHSR_e_RngSel_N,
    CeOHSR_e_RngSel_N, CeOHSR_e_RngSel_N, CeOHSR_e_RngSel_N, CeOHSR_e_RngSel_N,
    CeOHSR_e_RngSel_N, CeOHSR_e_RngSel_M1, CeOHSR_e_RngSel_M1,
    CeOHSR_e_RngSel_M1, CeOHSR_e_RngSel_M1, CeOHSR_e_RngSel_M1,
    CeOHSR_e_RngSel_M1, CeOHSR_e_RngSel_M1, CeOHSR_e_RngSel_M1,
    CeOHSR_e_RngSel_M1, CeOHSR_e_RngSel_M2, CeOHSR_e_RngSel_M2,
    CeOHSR_e_RngSel_M2, CeOHSR_e_RngSel_M2, CeOHSR_e_RngSel_M2,
    CeOHSR_e_RngSel_M2, CeOHSR_e_RngSel_M2, CeOHSR_e_RngSel_M2,
    CeOHSR_e_RngSel_M2, CeOHSR_e_RngSel_G2, CeOHSR_e_RngSel_G2,
    CeOHSR_e_RngSel_G2, CeOHSR_e_RngSel_G2, CeOHSR_e_RngSel_G2,
    CeOHSR_e_RngSel_G2, CeOHSR_e_RngSel_G2, CeOHSR_e_RngSel_G2,
    CeOHSR_e_RngSel_G2, CeOHSR_e_RngSel_M1, CeOHSR_e_RngSel_M1,
    CeOHSR_e_RngSel_M1, CeOHSR_e_RngSel_M1, CeOHSR_e_RngSel_M1,
    CeOHSR_e_RngSel_M1, CeOHSR_e_RngSel_M1, CeOHSR_e_RngSel_M1,
    CeOHSR_e_RngSel_M1, CeOHSR_e_RngSel_N, CeOHSR_e_RngSel_N, CeOHSR_e_RngSel_N,
    CeOHSR_e_RngSel_N, CeOHSR_e_RngSel_N, CeOHSR_e_RngSel_N, CeOHSR_e_RngSel_N,
    CeOHSR_e_RngSel_N, CeOHSR_e_RngSel_N
};                                     /* Referenced by: '<S796>/Calib' */

static volatile CONST(TeOHSR_e_OptGear_SG, OHSR_VAR_INIT) HaOHSR_e_DsrdSGrMap[54]
    =
{
    CeOHSR_e_SG_Reverse, CeOHSR_e_SG_1, CeOHSR_e_SG_2, CeOHSR_e_SG_3,
    CeOHSR_e_SG_4, CeOHSR_e_SG_5, CeOHSR_e_SG_6, CeOHSR_e_SG_7, CeOHSR_e_SG_8,
    CeOHSR_e_SG_Reverse, CeOHSR_e_SG_1, CeOHSR_e_SG_2, CeOHSR_e_SG_3,
    CeOHSR_e_SG_4, CeOHSR_e_SG_5, CeOHSR_e_SG_6, CeOHSR_e_SG_7, CeOHSR_e_SG_8,
    CeOHSR_e_SG_Reverse, CeOHSR_e_SG_1, CeOHSR_e_SG_2, CeOHSR_e_SG_3,
    CeOHSR_e_SG_4, CeOHSR_e_SG_5, CeOHSR_e_SG_6, CeOHSR_e_SG_7, CeOHSR_e_SG_8,
    CeOHSR_e_SG_Reverse, CeOHSR_e_SG_1, CeOHSR_e_SG_2, CeOHSR_e_SG_3,
    CeOHSR_e_SG_4, CeOHSR_e_SG_5, CeOHSR_e_SG_6, CeOHSR_e_SG_7, CeOHSR_e_SG_8,
    CeOHSR_e_SG_Reverse, CeOHSR_e_SG_1, CeOHSR_e_SG_2, CeOHSR_e_SG_3,
    CeOHSR_e_SG_4, CeOHSR_e_SG_5, CeOHSR_e_SG_6, CeOHSR_e_SG_7, CeOHSR_e_SG_8,
    CeOHSR_e_SG_Reverse, CeOHSR_e_SG_1, CeOHSR_e_SG_2, CeOHSR_e_SG_3,
    CeOHSR_e_SG_4, CeOHSR_e_SG_5, CeOHSR_e_SG_6, CeOHSR_e_SG_7, CeOHSR_e_SG_8
};                                     /* Referenced by:
                                        * '<S797>/Calib'
                                        * '<S801>/Calib'
                                        */

static volatile CONST(sint16, OHSR_VAR_INIT) HaOHSR_i_InputSpeed_M1_Idx[72] =
{
    10, 10, 10, 10, 10, 10, 10, 10, 11, 11, 11, 11, 11, 11, 11, 11, 12, 12, 12,
    12, 12, 12, 12, 12, 13, 13, 13, 13, 13, 13, 13, 13, 14, 14, 14, 14, 14, 14,
    14, 14, 15, 15, 15, 15, 15, 15, 15, 15, 16, 16, 16, 16, 16, 16, 16, 16, 17,
    17, 17, 17, 17, 17, 17, 17, 18, 18, 18, 18, 18, 18, 18, 18
} ;                                    /* Referenced by: '<S947>/Calib' */

static volatile CONST(sint16, OHSR_VAR_INIT) HaOHSR_i_InputSpeed_M1_MinMax_Idx
    [27] =
{
    2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2
} ;                                    /* Referenced by: '<S948>/Calib' */

static volatile CONST(sint16, OHSR_VAR_INIT) HaOHSR_i_InputSpeed_M2_Idx[72] =
{
    19, 19, 19, 19, 19, 19, 19, 19, 20, 20, 20, 20, 20, 20, 20, 20, 21, 21, 21,
    21, 21, 21, 21, 21, 22, 22, 22, 22, 22, 22, 22, 22, 23, 23, 23, 23, 23, 23,
    23, 23, 24, 24, 24, 24, 24, 24, 24, 24, 25, 25, 25, 25, 25, 25, 25, 25, 26,
    26, 26, 26, 26, 26, 26, 26, 27, 27, 27, 27, 27, 27, 27, 27
} ;                                    /* Referenced by: '<S949>/Calib' */

static volatile CONST(sint16, OHSR_VAR_INIT) HaOHSR_i_InputSpeed_M2_MinMax_Idx
    [27] =
{
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3
} ;                                    /* Referenced by: '<S950>/Calib' */

static volatile CONST(sint16, OHSR_VAR_INIT) HaOHSR_i_InputSpeed_N_Idx[72] =
{
    1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4,
    4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7,
    7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9, 9, 9
} ;                                    /* Referenced by: '<S951>/Calib' */

static volatile CONST(sint16, OHSR_VAR_INIT) HaOHSR_i_InputSpeed_N_MinMax_Idx[27]
    =
{
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1
} ;                                    /* Referenced by: '<S952>/Calib' */

static volatile CONST(uint8, OHSR_VAR_INIT) HaOHSR_i_MtrBSpeed_N_Idx[72] =
{
    1U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 2U, 10U, 10U, 10U, 10U, 10U, 10U, 10U,
    3U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 4U, 10U, 10U, 10U, 10U, 10U, 10U, 10U,
    5U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 6U, 10U, 10U, 10U, 10U, 10U, 10U, 10U,
    7U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 8U, 10U, 10U, 10U, 10U, 10U, 10U, 10U,
    9U, 10U, 10U, 10U, 10U, 10U, 10U, 10U
} ;                                    /* Referenced by: '<S953>/Calib' */

static volatile CONST(sint16, OHSR_VAR_INIT) HaOHSR_i_Nti_StgcStMap[48] =
{
    10, 10, 28, 28, 37, 37, 10, 10, 28, 28, 37, 37, 10, 10, 28, 28, 37, 37, 10,
    10, 28, 28, 37, 37, 10, 10, 28, 28, 37, 37, 10, 10, 28, 28, 37, 37, 10, 10,
    28, 28, 37, 37, 10, 10, 28, 28, 37, 37
} ;                                    /* Referenced by: '<S954>/Calib' */

static volatile CONST(boolean, OHSR_VAR_INIT) HeOHSR_b_EnblCreepOverrd_NiM1 = 0;/* Referenced by: '<S645>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) HeOHSR_b_EnblCreepOverrd_NiM2 = 0;/* Referenced by: '<S649>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) HeOHSR_b_EnblCreepOverrd_NiN = 0;/* Referenced by: '<S653>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) HeOHSR_b_ILENeutralCon = 1;/* Referenced by: '<S485>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) HeOHSR_b_M1ProSel_UseIdleSpdBlend =
    0;                                 /* Referenced by: '<S999>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) HeOHSR_b_M2ProSel_UseIdleSpdBlend =
    1;                                 /* Referenced by: '<S1000>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) HeOHSR_b_NFZEnbl = 0;/* Referenced by:
                                                                    * '<S1001>/Calib'
                                                                    * '<S188>/Calib'
                                                                    */
static volatile CONST(boolean, OHSR_VAR_INIT) HeOHSR_b_NProSel_UseIdleSpdBlend =
    0;                                 /* Referenced by: '<S1002>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) HeOHSR_b_NiDsrdM1_LaunchChk = 0;/* Referenced by: '<S660>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) HeOHSR_b_NiDsrdM2_LaunchChk = 1;/* Referenced by: '<S672>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) HeOHSR_b_NiDsrdN_LaunchChk = 0;/* Referenced by: '<S684>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) HeOHSR_b_OptInputSpd_Md1_Ovrrd = 0;/* Referenced by: '<S899>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) HeOHSR_b_OptInputSpd_Md2_Ovrrd = 0;/* Referenced by: '<S900>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) HeOHSR_b_OptInputSpd_N_Ovrrd = 0;/* Referenced by: '<S901>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) HeOHSR_b_OptMtrBSpd_Ovrrd = 0;/* Referenced by: '<S902>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) HeOHSR_b_UseOptCostBsd_RngSel = 1;/* Referenced by: '<S798>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) HeOHSR_b_UseP2Spd_ILE = 1;/* Referenced by: '<S528>/Calib' */

#if !Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_17 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_21 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_23

static volatile CONST(TeOHSR_e_OptGear_SG, OHSR_VAR_INIT) HeOHSR_e_Dflt_GrDsrd =
    CeOHSR_e_SG_1;                     /* Referenced by: '<S788>/Calib' */

#endif

#if !Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_17 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_21 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_23

static volatile CONST(float32, OHSR_VAR_INIT) HeOHSR_n_Dflt_SpdDsrd = 600.0F;/* Referenced by: '<S789>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) HeOHSR_t_Idle_dT = 0.01F;/* Referenced by:
                                                                      * '<S17>/Calib'
                                                                      * '<S282>/Calib'
                                                                      * '<S141>/Calib'
                                                                      * '<S159>/Calib'
                                                                      * '<S176>/Calib'
                                                                      * '<S219>/Calib'
                                                                      * '<S251>/Calib'
                                                                      * '<S468>/Calib'
                                                                      * '<S202>/Calib'
                                                                      */
static volatile CONST(float32, OHSR_VAR_INIT) HeOHSR_t_RngSel_dT = 0.02F;/* Referenced by:
                                                                      * '<S1372>/Calib'
                                                                      * '<S574>/Calib'
                                                                      * '<S920>/Calib'
                                                                      * '<S1286>/Calib'
                                                                      * '<S661>/Calib'
                                                                      * '<S673>/Calib'
                                                                      * '<S685>/Calib'
                                                                      * '<S813>/Calib'
                                                                      * '<S597>/Calib'
                                                                      * '<S614>/Calib'
                                                                      * '<S636>/Calib'
                                                                      * '<S839>/Calib'
                                                                      * '<S877>/Calib'
                                                                      * '<S910>/Calib'
                                                                      * '<S1154>/Calib'
                                                                      * '<S1222>/Calib'
                                                                      * '<S856>/Calib'
                                                                      */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KaOHSR_T_SIP_DelayTime_PredGrSpd
    [90] =
{
    0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F,
    0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F,
    0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F,
    0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F,
    0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F,
    0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F,
    0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F,
    0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F,
    0.01F, 0.01F
} ;                                    /* Referenced by: '<S264>/Calib' */

#endif

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_AlwdStsActTgt_PdlBsdNi[13]
    =
{
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1
} ;                                    /* Referenced by: '<S840>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_15

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_ArbProfileChck_Ovrd[3] =
{
    0, 0, 0
} ;                                    /* Referenced by:
                                        * '<S1212>/Calib'
                                        * '<S1276>/Calib'
                                        */

#endif

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_BrkDisableCreep[8] =
{
    0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S334>/Calib' */

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_DisableLowILE[6] =
{
    0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S369>/Calib' */

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_DsblTCMEngSpdReq_M1[10] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S575>/Calib' */

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_DsblTCMEngSpdReq_M2[10] =
{
    0, 0, 1, 0, 0, 1, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S576>/Calib' */

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_DsblTCMEngSpdReq_N[10] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S577>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_EnblGSI_DrvMdArb[6] =
{
    0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S700>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_EnblGSI_FWIDFst[32] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S701>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_EnblGSI_FWIDSlw[22] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S702>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_EnblGSI_LockLowSt[3] =
{
    0, 0, 0
} ;                                    /* Referenced by: '<S703>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_EnblGSI_RngSt[68] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S704>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_EnblGSI_ShiftIndSt[5] =
{
    0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S705>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_EnblGSI_StsMiL_ECM[4] =
{
    0, 0, 0, 0
} ;                                    /* Referenced by: '<S706>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_EnblGSI_TcaseRange_Stat[8]
    =
{
    0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S707>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_EnblGSI_TrqArb[13] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S708>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_EnblGSI_VehCFGSt[4] =
{
    0, 0, 0, 0
} ;                                    /* Referenced by: '<S709>/Calib' */

#endif

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_EnblILENeut_TCase[8] =
{
    0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by:
                                        * '<S486>/Calib'
                                        * '<S841>/Calib'
                                        */

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_EnblPedlBsdNi[3] =
{
    1, 0, 1
} ;                                    /* Referenced by: '<S842>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_25

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_EnblShftEfftRdctn[8] =
{
    1, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S1364>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_25

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_EnblShftEfftRdctn_N4H[8] =
{
    1, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S1365>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_ILEFullLock[6] =
{
    0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_ILEPartLock[6] =
{
    0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S237>/Calib' */

#endif

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_ModeSel4TLC[3] =
{
    1, 0, 1
} ;                                    /* Referenced by: '<S907>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_NVHLimtnNiMaxArb_Enbl[3] =
{
    1, 1, 1
} ;                                    /* Referenced by: '<S1213>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_15

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_PNLimtnNiMinArb_Enbl[3] =
{
    1, 1, 1
} ;                                    /* Referenced by: '<S1277>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_SIP_currentGear_Enbl[9] =
{
    0, 1, 1, 1, 1, 1, 1, 0, 0
} ;                                    /* Referenced by: '<S252>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(boolean, OHSR_VAR_INIT) KaOHSR_b_Strat_IS_NiTiGear[13] =
{
    0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0
} ;                                    /* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(TeOHSR_e_OptGear_SG, OHSR_VAR_INIT)
    KaOHSR_e_SGRDsrdGSI_StgcTacMap[9] =
{
    CeOHSR_e_SG_Reverse, CeOHSR_e_SG_1, CeOHSR_e_SG_2, CeOHSR_e_SG_3,
    CeOHSR_e_SG_4, CeOHSR_e_SG_5, CeOHSR_e_SG_6, CeOHSR_e_SG_7, CeOHSR_e_SG_8
};                                     /* Referenced by: '<S710>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(uint8, OHSR_VAR_INIT) KaOHSR_i_AdvSeq_Enable[16] =
{
    1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U
} ;                                    /* Referenced by: '<S220>/Calib' */

#endif

static volatile CONST(sint16, OHSR_VAR_INIT) KaOHSR_i_ApplyEngIdleToMtrB[40] =
{
    2, 0, 2, 0, 0, 2, 0, 0, 3, 0, 3, 0, 0, 3, 0, 0, 3, 0, 3, 0, 0, 3, 0, 0, 3, 0,
    3, 0, 0, 3, 0, 0, 3, 0, 3, 0, 0, 3, 0, 0
} ;                                    /* Referenced by: '<S1403>/Calib' */

static volatile CONST(sint16, OHSR_VAR_INIT) KaOHSR_i_SelIdlSpdEngClip[40] =
{
    2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 3, 0, 0, 3, 0, 0, 3, 0, 3, 0, 0, 3, 0, 0, 3, 0,
    3, 0, 0, 3, 0, 0, 3, 0, 3, 0, 0, 3, 0, 0
} ;                                    /* Referenced by: '<S1404>/Calib' */

static volatile CONST(float32, OHSR_VAR_INIT) KaOHSR_n_AutoRevMaxSpdLmt[3] =
{
    6000.0F, 6000.0F, 6000.0F
} ;                                    /* Referenced by: '<S843>/Calib' */

static volatile CONST(float32, OHSR_VAR_INIT) KaOHSR_n_Creep2Launch_SpdThresh[13]
    =
{
    600.0F, 600.0F, 600.0F, 600.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F,
    200.0F, 200.0F, 200.0F, 600.0F
} ;                                    /* Referenced by: '<S335>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KaOHSR_n_IS_BrkPts[5] =
{
    0.0F, 1000.0F, 1100.0F, 1200.0F, 1300.0F
} ;                                    /* Referenced by:
                                        * '<S174>/Calib'
                                        * '<S177>/Prelookup'
                                        */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KaOHSR_n_IS_Learn_HighOptNi[9] =
{
    200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F, 200.0F
} ;                                    /* Referenced by: '<S198>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KaOHSR_n_IdleSpd_Max_FL[9] =
{
    1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F,
    1400.0F
} ;                                    /* Referenced by: '<S154>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KaOHSR_n_IdleSpd_Max_PL[9] =
{
    1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F,
    1400.0F
} ;                                    /* Referenced by: '<S155>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KaOHSR_n_IdleSpd_Max_UL[9] =
{
    1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F, 1400.0F,
    1400.0F
} ;                                    /* Referenced by: '<S156>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KaOHSR_n_IdleSpd_Offset_FL[9] =
{
    -200.0F, -200.0F, -200.0F, -200.0F, -200.0F, -500.0F, -500.0F, -500.0F,
    -500.0F
} ;                                    /* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KaOHSR_n_IdleSpd_Offset_PL[9] =
{
    -50.0F, -50.0F, -50.0F, -50.0F, -150.0F, -150.0F, -500.0F, -500.0F, -500.0F
} ;                                    /* Referenced by: '<S239>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KaOHSR_n_IdleSpd_Offset_UL[90] =
{
    -25.0F, -25.0F, -25.0F, -25.0F, -25.0F, -25.0F, -25.0F, -25.0F, -25.0F,
    -25.0F, -25.0F, -25.0F, -25.0F, -25.0F, -25.0F, -25.0F, -25.0F, -25.0F,
    -25.0F, -25.0F, -25.0F, -25.0F, -25.0F, -25.0F, -25.0F, -25.0F, -25.0F,
    -25.0F, -25.0F, -25.0F, -25.0F, -25.0F, -25.0F, -25.0F, -25.0F, -25.0F,
    -25.0F, -25.0F, -25.0F, -25.0F, -125.0F, -125.0F, -125.0F, -125.0F, -125.0F,
    -125.0F, -125.0F, -125.0F, -125.0F, -125.0F, -125.0F, -125.0F, -125.0F,
    -125.0F, -125.0F, -125.0F, -125.0F, -125.0F, -125.0F, -125.0F, -125.0F,
    -125.0F, -125.0F, -125.0F, -125.0F, -125.0F, -125.0F, -125.0F, -125.0F,
    -125.0F, -125.0F, -125.0F, -125.0F, -125.0F, -125.0F, -125.0F, -125.0F,
    -125.0F, -125.0F, -125.0F, -125.0F, -125.0F, -125.0F, -125.0F, -125.0F,
    -125.0F, -125.0F, -125.0F, -125.0F, -125.0F
} ;                                    /* Referenced by: '<S245>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KaOHSR_n_IdleSpd_Offset_UL_Gr[80] =
{
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F
} ;                                    /* Referenced by: '<S240>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KaOHSR_n_Launch2Creep_SpdThresh[13]
    =
{
    200.0F, 150.0F, 150.0F, 150.0F, 150.0F, 150.0F, 150.0F, 150.0F, 150.0F,
    150.0F, 150.0F, 150.0F, 200.0F
} ;                                    /* Referenced by: '<S336>/Calib' */

static volatile CONST(float32, OHSR_VAR_INIT)
    KaOHSR_n_RollingIdle_NoLim_Drv_ILEStat_Ni[6] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S403>/Calib' */

static volatile CONST(float32, OHSR_VAR_INIT)
    KaOHSR_n_RollingIdle_NoLim_Drv_ILEStat_No[6] =
{
    161.47F, 16.1F, 80.74F, 129.17F, 145.32F, 161.47F
} ;                                    /* Referenced by: '<S404>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KaOHSR_n_Strat_IS_Rate_LowLim[7] =
{
    -20.0F, -20.0F, -20.0F, -20.0F, -20.0F, -20.0F, -20.0F
} ;                                    /* Referenced by: '<S162>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KaOHSR_n_Strat_IS_Rate_UpLim[7] =
{
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F
} ;                                    /* Referenced by: '<S163>/Calib' */

#endif

static volatile CONST(uint8, OHSR_VAR_INIT) KaOHSR_t_RangeSelectionDelayTime_SG
    [2916] =
{
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
} ;                                    /* Referenced by: '<S1287>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_M_EnblGSI_ToReqAclMax =
    1000.0F;                           /* Referenced by: '<S711>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_M_EnblGSI_ToReqAclMin =
    -1000.0F;                          /* Referenced by: '<S712>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_M_EnblGSI_ToReqPrdMax =
    1000.0F;                           /* Referenced by: '<S713>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_M_EnblGSI_ToReqPrdMin =
    -1000.0F;                          /* Referenced by: '<S714>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_M_MinBrkTorqThresh = 5.0F;/* Referenced by: '<S487>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_3

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_M_Offset_Static2Front_SC =
    0.0F;                              /* Referenced by: '<S470>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_3

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_M_SuperCreepCombCL_LSP =
    10.0F;                             /* Referenced by: '<S417>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_3

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_M_SuperCreepCombCL_RSP =
    0.0F;                              /* Referenced by: '<S418>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_M_TCNegSlipCreepExit_EngCLTrq_LSP = -25.0F;/* Referenced by: '<S337>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_M_TCNegSlipCreepExit_EngCLTrq_RSP = -15.0F;/* Referenced by: '<S338>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_P_DCLoadOffset = 0.0F;/* Referenced by: '<S283>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_P_FCDsrdPwrOvrrdValue =
    0.0F;                              /* Referenced by: '<S1373>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_P_InitFCDsrdPwr = 0.0F;/* Referenced by: '<S1417>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_Pct_AcclPdlChgM1Thrsh_1 =
    10.0F;                             /* Referenced by: '<S881>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_Pct_AcclPdlChgM1Thrsh_2 =
    10.0F;                             /* Referenced by: '<S882>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_Pct_AcclPdlChgM2Thrsh_1 =
    10.0F;                             /* Referenced by: '<S887>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_Pct_AcclPdlChgM2Thrsh_2 =
    10.0F;                             /* Referenced by: '<S888>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_Pct_AcclPdlChg_NThrsh_1 =
    10.0F;                             /* Referenced by: '<S893>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_Pct_AcclPdlChg_NThrsh_2 =
    10.0F;                             /* Referenced by: '<S894>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_Pct_AutorevMaxLt_HVBatSOC_LSP = 83.0F;/* Referenced by: '<S860>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_Pct_AutorevMaxLt_HVBatSOC_RSP = 85.0F;/* Referenced by: '<S861>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_Pct_Creep_AccelPdlThresh_LSP = 4.0F;/* Referenced by: '<S409>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_Pct_Creep_AccelPdlThresh_RSP = 5.0F;/* Referenced by: '<S410>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_Pct_EnblGSI_AclPedalMax =
    100.0F;                            /* Referenced by: '<S715>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_Pct_EnblGSI_AclPedalMin =
    0.0F;                              /* Referenced by: '<S716>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_Pct_MinPdlNbRev = 101.0F;/* Referenced by: '<S844>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_Pct_MtrBShftMaxPct = 3.0F;/* Referenced by: '<S1132>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_Pct_MtrBShftMinDelta =
    0.08F;                             /* Referenced by: '<S1133>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_Pct_SIP_ShiftCompltOffs =
    1.0F;                              /* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_Pct_Strat_IS_Pedal_Thresh =
    5.0F;                              /* Referenced by: '<S164>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_T_AutorevMaxLt_CatTemp_LSP =
    580.0F;                            /* Referenced by: '<S862>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_T_AutorevMaxLt_CatTemp_RSP =
    600.0F;                            /* Referenced by: '<S863>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_T_AutorevMaxLt_TransOilTemp_LSP = -10.0F;/* Referenced by: '<S864>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_T_AutorevMaxLt_TransOilTemp_RSP = -8.0F;/* Referenced by: '<S865>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_T_SIP_TransOil_Thrsh = 0.0F;/* Referenced by: '<S254>/Calib' */

#endif

static volatile CONST(boolean, OHSR_VAR_INIT)
    KeOHSR_b_AutoRevEnbl_OvrrdCatWarmUp = 0;/* Referenced by: '<S845>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT)
    KeOHSR_b_AutoRevEnbl_OvrrdTcaseN4HiShift = 0;/* Referenced by: '<S846>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_DisableDiscreteIS = 0;/* Referenced by: '<S178>/Calib' */

#endif

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_Dsbl_ILEChk_ForIdle = 1;/* Referenced by: '<S339>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_Dsbl_NTurb_OptNi = 1;/* Referenced by: '<S1367>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnableDwnHillLaunch = 0;/* Referenced by: '<S340>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnableLowILE = 0;/* Referenced by: '<S341>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnablePwrChgNiM1_1 = 0;/* Referenced by: '<S883>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnablePwrChgNiM1_2 = 0;/* Referenced by: '<S884>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnablePwrChgNiM2_1 = 0;/* Referenced by: '<S889>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnablePwrChgNiM2_2 = 0;/* Referenced by: '<S890>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnablePwrChgNi_N_1 = 0;/* Referenced by: '<S895>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnablePwrChgNi_N_2 = 0;/* Referenced by: '<S896>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnblACCCreepOverrd = 1;/* Referenced by: '<S342>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnblGSI_DsrdRngSt = 0;/* Referenced by: '<S717>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnblGSI_SRARInhibit = 0;/* Referenced by: '<S718>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnblGSI_ShiftInPros = 0;/* Referenced by: '<S719>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnblGSI_StgcManMode = 0;/* Referenced by: '<S720>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnblGSI_TrqReq = 0;/* Referenced by: '<S721>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnblGSI_TrqReqFA = 0;/* Referenced by: '<S722>/Calib' */

#endif

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnblILENeutinN = 0;/* Referenced by: '<S313>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnblILENeutinP = 1;/* Referenced by: '<S314>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnblK1BsdVLENeutDtrmn = 0;/* Referenced by: '<S488>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnblMinCreepOverrd = 1;/* Referenced by: '<S343>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnblMtrBSpdBlend = 0;/* Referenced by: '<S1134>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnblRngDsrd4MovAvgRes = 0;/* Referenced by: '<S955>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnblRngEqnSelOverrd = 1;/* Referenced by: '<S489>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnblSumTrqCrpCondt = 0;/* Referenced by: '<S344>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnblSumTrqlatchILE = 0;/* Referenced by: '<S411>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_3

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnblSumTrqlatchSC = 1;/* Referenced by: '<S471>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_3

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EnblSuperCreep = 1;/* Referenced by: '<S419>/Calib' */

#endif

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_Enbl_ShftEfftRdctn_M1 = 0;/* Referenced by: '<S1003>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_Enbl_ShftEfftRdctn_M2 = 0;/* Referenced by: '<S1004>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_Enbl_ShftEfftRdctn_N = 0;/* Referenced by:
                                                                      * '<S1005>/Calib'
                                                                      * '<S1135>/Calib'
                                                                      */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_EngIdleSpdArbEnbl = 0;/* Referenced by: '<S28>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(boolean, OHSR_VAR_INIT)
    KeOHSR_b_EngStUpdtDelayProtectn_Enbl = 1;/* Referenced by: '<S1288>/Calib' */

#endif

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_FCDsrdPwrOvrrdEnbl = 0;/* Referenced by: '<S1374>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_FCReqOvrrdEnbl = 0;/* Referenced by: '<S1375>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_FCReqOvrrdValue = 0;/* Referenced by: '<S1376>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_ILECreepCondn_UseAbsNo =
    0;                                 /* Referenced by: '<S345>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_ISStratSCOR_Reset = 0;/* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_IdleSpd_AccelSel = 1;/* Referenced by: '<S241>/Calib' */

#endif

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_IgnoreHASTgt_N = 1;/* Referenced by: '<S626>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_InitEngDsrd = 0;/* Referenced by: '<S1418>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_InitFCReq = 0;/* Referenced by: '<S1419>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_MtrBIdle_OnlyInEV = 0;/* Referenced by: '<S29>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_OptMtrBSpdN_Slip = 0;/* Referenced by: '<S1136>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_7

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_OvrrdLaunchSpdCntrl = 0;/* Referenced by: '<S483>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_SIP_enbl = 1;/* Referenced by: '<S255>/Calib' */

#endif

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_ShftEfftRdctn_EnblRev = 0;/* Referenced by: '<S847>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_SlipSpd4ISBlend = 0;/* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_Strat_IS_EnblDynamicLatch
    = 0;                               /* Referenced by: '<S204>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_Strat_IS_LowActNi_Enbl =
    0;                                 /* Referenced by: '<S191>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_Strat_IS_LowOptNi_Enbl =
    0;                                 /* Referenced by: '<S192>/Calib' */

#endif

static volatile CONST(boolean, OHSR_VAR_INIT)
    KeOHSR_b_TCaseN4HiShft_UseIdleSpd_M1 = 0;/* Referenced by: '<S1006>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT)
    KeOHSR_b_TCaseN4HiShft_UseIdleSpd_M2 = 0;/* Referenced by: '<S1007>/Calib' */
static volatile CONST(boolean, OHSR_VAR_INIT)
    KeOHSR_b_TCaseN4HiShft_UseIdleSpd_N = 1;/* Referenced by:
                                             * '<S1008>/Calib'
                                             * '<S1137>/Calib'
                                             */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_TransTurb_IS_used = 1;/* Referenced by: '<S269>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(boolean, OHSR_VAR_INIT) KeOHSR_b_TurbSpdOffsetPrev_Enbl =
    0;                                 /* Referenced by: '<S227>/Calib' */

#endif

static volatile CONST(TeTRNR_e_TCMGearStat, OHSR_VAR_INIT)
    KeOHSR_e_CrpLowerGearThres = CeTRNR_e_D1;/* Referenced by: '<S346>/Calib' */
static volatile CONST(TeTRNR_e_TCMGearStat, OHSR_VAR_INIT)
    KeOHSR_e_CrpUpperGearThres = CeTRNR_e_D9;/* Referenced by: '<S347>/Calib' */
static volatile CONST(TeOHSR_e_OptGear_SG, OHSR_VAR_INIT) KeOHSR_e_InitGrDsrd =
    CeOHSR_e_SG_1;                     /* Referenced by: '<S1420>/Calib' */
static volatile CONST(TeOHSR_e_RngSel, OHSR_VAR_INIT) KeOHSR_e_InitRngDsrd =
    CeOHSR_e_RngSel_N;                 /* Referenced by: '<S1421>/Calib' */
static volatile CONST(sint16, OHSR_VAR_INIT) KeOHSR_i_MaxSel4ShiftStateOvrrd = 4;/* Referenced by: '<S1405>/Calib' */
static volatile CONST(uint8, OHSR_VAR_INIT) KeOHSR_i_NiM3Dsrd_Select = 1U;/* Referenced by: '<S1377>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_k_AutorevPdl_FltCoeff =
    0.2F;                              /* Referenced by: '<S848>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_k_EngOnOff = 0.6F;/* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_k_NiMaxNVH_FltCoeff = 0.1F;/* Referenced by: '<S1214>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_15

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_k_PNLimtnNiMin_FltCoeff =
    0.1F;                              /* Referenced by: '<S1278>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_AutorevMaxLimit_CmpPrtcn =
    2000.0F;                           /* Referenced by: '<S866>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_n_AutorevMaxSpdThd_CompPrtctn = 2000.0F;/* Referenced by: '<S867>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_Creep2Launch_RollIdleHyst
    = 100.0F;                          /* Referenced by: '<S348>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_Creep_OutSpdTh = 130.0F;/* Referenced by: '<S349>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_DiscISThld_Offset = 0.0F;/* Referenced by: '<S179>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_n_DwnHillLaunchTransIdleDelta_LSP = 80.0F;/* Referenced by: '<S350>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_n_DwnHillLaunchTransIdleDelta_RSP = 100.0F;/* Referenced by: '<S351>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_n_DwnHillLaunchTransInputDelta_LSP = 80.0F;/* Referenced by: '<S352>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_n_DwnHillLaunchTransInputDelta_RSP = 100.0F;/* Referenced by: '<S353>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_3

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_IdleSpdOffsetSC = 0.0F;/* Referenced by: '<S472>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_IdleSpd_Actv_Thresh =
    0.0F;                              /* Referenced by: '<S275>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_IdleSpd_Rate_LowLim =
    -20.0F;                            /* Referenced by: '<S276>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_IdleSpd_Rate_UpLim = 5.0F;/* Referenced by: '<S277>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_InitInputSpdDsrdM1 = 0.0F;/* Referenced by: '<S1422>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_InitInputSpdDsrdM2 = 0.0F;/* Referenced by: '<S1423>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_InitInputSpdDsrdM3 = 0.0F;/* Referenced by: '<S1424>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_InitInputSpdDsrdN = 0.0F;/* Referenced by: '<S1425>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_InitMtrBSpdDsrd = 0.0F;/* Referenced by: '<S1426>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_Init_RollingIdle_NiOffset
    = 0.0F;                            /* Referenced by: '<S1427>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_Init_TransMinEngSpd =
    0.0F;                              /* Referenced by: '<S1428>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_Launch2Creep_RollIdleHyst
    = 0.0F;                            /* Referenced by: '<S354>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_MaxIdleSpd = 3000.0F;/* Referenced by: '<S284>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_MtrBDsrdSpdSlipThresh =
    100.0F;                            /* Referenced by: '<S1138>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_MtrBShftMinNo = 250.0F;/* Referenced by: '<S1139>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_n_NVHLimitnActvn_SpdDiff_LSP = 50.0F;/* Referenced by: '<S1215>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_n_NVHLimitnActvn_SpdDiff_RSP = 200.0F;/* Referenced by: '<S1216>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_NiM1ChangeThrsh_1 =
    100.0F;                            /* Referenced by: '<S885>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_NiM1ChangeThrsh_2 =
    100.0F;                            /* Referenced by: '<S886>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_NiM2ChangeThrsh_1 =
    100.0F;                            /* Referenced by: '<S891>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_NiM2ChangeThrsh_2 =
    100.0F;                            /* Referenced by: '<S892>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_NiMaxM2_Extend = 0.0F;/* Referenced by: '<S825>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_Ni_NChangeThrsh_1 =
    100.0F;                            /* Referenced by: '<S897>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_Ni_NChangeThrsh_2 =
    100.0F;                            /* Referenced by: '<S898>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_Offset_Rate_LowLim =
    -127.0F;                           /* Referenced by: '<S242>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_Offset_Rate_UpLim =
    127.0F;                            /* Referenced by: '<S243>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_OptInputSpd_Md1_Ovrrd =
    800.0F;                            /* Referenced by: '<S903>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_OptInputSpd_Md2_Ovrrd =
    1200.0F;                           /* Referenced by: '<S904>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_OptInputSpd_N_Ovrrd =
    800.0F;                            /* Referenced by: '<S905>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_OptMtrBSpd_Ovrrd = 0.0F;/* Referenced by: '<S906>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_OptNbMinSpdProf = 0.0F;/* Referenced by: '<S803>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_Pbattbsd_IdleSpdLD =
    -0.5F;                             /* Referenced by: '<S285>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_Pbattbsd_IdleSpdLU = 0.5F;/* Referenced by: '<S286>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_PdlBsdNi_OffsetMaxSpd =
    250.0F;                            /* Referenced by: '<S849>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_RTMR_NbDesired = 0.0F;/* Referenced by: '<S1406>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_RTMR_NiDesired_M1 =
    1400.0F;                           /* Referenced by: '<S1407>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_RTMR_NiDesired_M2 =
    1600.0F;                           /* Referenced by: '<S1408>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_RollingIdle_NoLim_PN =
    1000.0F;                           /* Referenced by: '<S405>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_SIP_SpdThresh = 5.0F;/* Referenced by: '<S256>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_SIP_TurbSlipThres = 0.1F;/* Referenced by: '<S257>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_ShftEfftRdctn_MaxSlip =
    1500.0F;                           /* Referenced by: '<S81>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_ShftEfftRdctn_MaxTgt =
    2000.0F;                           /* Referenced by: '<S82>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_ShftEfftRed_N4H = 1200.0F;/* Referenced by:
                                                                      * '<S1366>/Calib'
                                                                      * '<S84>/Calib'
                                                                      */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_SpeedNeighborhood = 25.0F;/* Referenced by: '<S1140>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_Strat_IS_Hys_LSP = 20.0F;/* Referenced by: '<S165>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_Strat_IS_Hys_RSP = 50.0F;/* Referenced by: '<S166>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_Strat_IS_VehSpdLatch =
    50.0F;                             /* Referenced by: '<S205>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_3

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_SuperCreepSpeedDelta_LSP =
    10.0F;                             /* Referenced by: '<S473>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_3

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_SuperCreepSpeedDelta_RSP =
    0.0F;                              /* Referenced by: '<S474>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_n_TCNegSlipCreepExit_InpSpdThd_LSP = 1700.0F;/* Referenced by: '<S355>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_n_TCNegSlipCreepExit_InpSpdThd_RSP = 1800.0F;/* Referenced by: '<S356>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_n_TCNegSlipCreepExit_TurbSpdDiff_LSP = 300.0F;/* Referenced by: '<S357>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_n_TCNegSlipCreepExit_TurbSpdDiff_RSP = 400.0F;/* Referenced by: '<S358>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_TLC_NiM2Max = 2500.0F;/* Referenced by: '<S911>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_n_TLC_NiM2Min = 900.0F;/* Referenced by: '<S912>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_AutorevMaxSpd_CntrDecFac =
    -0.2F;                             /* Referenced by: '<S868>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_AutorevMaxSpd_CntrIncFac =
    1.0F;                              /* Referenced by: '<S869>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_Autorev_CounterMaxLimit =
    3600.0F;                           /* Referenced by: '<S870>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_BattEnergyLoss_ConvFac =
    0.000277777785F;                   /* Referenced by: '<S1223>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_DsrdSpd_NbFctrM1 = 0.0F;/* Referenced by: '<S590>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_DsrdSpd_NbFctrM2 = 0.0F;/* Referenced by: '<S607>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_DsrdSpd_NbFctrN = 1.0F;/* Referenced by: '<S627>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_EngEnergyLoss_ConvFac =
    0.000277777785F;                   /* Referenced by: '<S1224>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_FltCoefRmpRt_noHASTgt =
    10.0F;                             /* Referenced by: '<S628>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_M1DsrdSpd_NiOptFctr =
    1.0F;                              /* Referenced by: '<S646>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_M2DsrdSpd_NiOptFctr =
    1.0F;                              /* Referenced by: '<S650>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_NDsrdSpd_NiOptFctr = 1.0F;/* Referenced by: '<S654>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_r_NVHLimtnBlndFac_MaxDecRate = -1.0F;/* Referenced by:
                                                 * '<S1155>/Calib'
                                                 * '<S1225>/Calib'
                                                 */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_r_NVHLimtnBlndFac_MaxIncRate = 0.1F;/* Referenced by:
                                                * '<S1156>/Calib'
                                                * '<S1226>/Calib'
                                                */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_NbDscl_AllRngs_RampRt =
    8.0F;                              /* Referenced by: '<S811>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_r_NbDscl_LaunchSpdCntrl_RampRt = 16.0F;/* Referenced by: '<S809>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_NbDscl_Launch_RampRt =
    16.0F;                             /* Referenced by: '<S810>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_NiDscl_AllRngs_RampRt =
    8.0F;                              /* Referenced by:
                                        * '<S591>/Calib'
                                        * '<S608>/Calib'
                                        * '<S629>/Calib'
                                        */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_NiDscl_M1_RampRt = 16.0F;/* Referenced by: '<S592>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_NiDscl_M2_RampRt = 16.0F;/* Referenced by: '<S609>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_NiDscl_N_RampRt = 16.0F;/* Referenced by: '<S630>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_Strat_IS_NiTiThresh =
    0.05F;                             /* Referenced by: '<S206>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_r_TLC_NiDecrRate = 10.0F;/* Referenced by: '<S913>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_AdvSeq_BlendTimeOptInput =
    0.2F;                              /* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_AdvSeq_BlendTimeStratIS =
    0.2F;                              /* Referenced by: '<S222>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_AutorevSpd_BlndTime =
    0.3F;                              /* Referenced by:
                                        * '<S850>/Calib'
                                        * '<S878>/Calib'
                                        */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_CanDelayAlignment = 0.05F;/* Referenced by: '<S578>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_DiscISDlyTime = 0.0F;/* Referenced by: '<S180>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_DiscISHysDlyTime = 0.0F;/* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_t_EngOffAlwdUpdate_DelayTime = 0.4F;/* Referenced by: '<S1289>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_EngRevLim = 3.0F;/* Referenced by: '<S1290>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_FCReqOffDbncTime = 1.0F;/* Referenced by: '<S1378>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_FCReqOnDbncTime = 1.0F;/* Referenced by: '<S1379>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT)
    KeOHSR_t_IdleSpdLearnDwnTime_NiTiExit = 5.0F;/* Referenced by: '<S207>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_PdlBasedIdleSpdDelay =
    0.1F;                              /* Referenced by: '<S287>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_SIP_DelayTime_InShift =
    3.0F;                              /* Referenced by: '<S258>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_SIP_DelayTime_NoSlip =
    3.0F;                              /* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_Strat_IS_PedalDelay =
    0.15F;                             /* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_3

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_SuperCreepActivationDelay
    = 0.0F;                            /* Referenced by: '<S475>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_TCM_MaxBlend_M1_OFF =
    0.1F;                              /* Referenced by: '<S662>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_TCM_MaxBlend_M1_ON = 0.1F;/* Referenced by: '<S663>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_TCM_MaxBlend_M2_OFF =
    0.1F;                              /* Referenced by: '<S674>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_TCM_MaxBlend_M2_ON = 0.1F;/* Referenced by: '<S675>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_TCM_MaxBlend_N_OFF = 0.1F;/* Referenced by: '<S686>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_TCM_MaxBlend_N_ON = 0.1F;/* Referenced by: '<S687>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_TLC_InitHold = 2.0F;/* Referenced by: '<S914>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_t_TurbSpdPrev_Offset = 0.2F;/* Referenced by: '<S228>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_v_CreepVehSpdThres = 28.0F;/* Referenced by: '<S359>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_v_IS_Enable_Thresh = 8.0F;/* Referenced by: '<S270>/Calib' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_v_IS_Enable_Thresh_Hys =
    3.0F;                              /* Referenced by: '<S271>/Calib' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_v_MinLaunchVehSpdThres =
    20.0F;                             /* Referenced by: '<S360>/Calib' */
static volatile CONST(float32, OHSR_VAR_INIT) KeOHSR_v_MinSpeedThresh_inN = 1.0F;/* Referenced by: '<S490>/Calib' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

static volatile CONST(float32, OHSR_VAR_INIT) KtOHSR_M_MtrATrqMin_InvrTemp[52] =
{
    252.0F, 252.0F, 244.99F, 201.79F, 165.27F, 139.75F, 120.85F, 105.49F, 94.38F,
    76.54F, 65.24F, 56.24F, 46.0F, 252.0F, 252.0F, 244.99F, 201.79F, 165.27F,
    139.75F, 120.85F, 105.49F, 94.38F, 76.54F, 65.24F, 56.24F, 46.0F, 252.0F,
    252.0F, 244.99F, 201.79F, 165.27F, 139.75F, 120.85F, 105.49F, 94.38F, 76.54F,
    65.24F, 56.24F, 46.0F, 252.0F, 252.0F, 244.99F, 201.79F, 165.27F, 139.75F,
    120.85F, 105.49F, 94.38F, 76.54F, 65.24F, 56.24F, 46.0F
} ;                                    /* Referenced by: '<S289>/Vector' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT)
    KtOHSR_T_SIP_DelayTime_PredGrSpd_Idx[10] =
{
    0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F
} ;                                    /* Referenced by: '<S265>/Vector' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KtOHSR_k_C1SlipIdleSpdBlend[7] =
{
    0.01F, 0.2F, 0.4F, 0.6F, 0.65F, 0.7F, 0.1F
} ;                                    /* Referenced by: '<S143>/Vector' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KtOHSR_k_HAS2Vrtl_RampFac_M1[3] =
{
    0.0F, 10.0F, 50.0F
} ;                                    /* Referenced by: '<S598>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT) KtOHSR_k_HAS2Vrtl_RampFac_M2[3] =
{
    0.0F, 10.0F, 50.0F
} ;                                    /* Referenced by: '<S615>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT) KtOHSR_k_HAS2Vrtl_RampFac_N[3] =
{
    0.0F, 10.0F, 50.0F
} ;                                    /* Referenced by: '<S637>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT)
    KtOHSR_k_HoldCurrentRngDelayFactor_EVM[24] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S1352>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT)
    KtOHSR_k_HoldCurrentRngDelayFactor_EVN[24] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S1353>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT)
    KtOHSR_k_HoldCurrentRngDelayFactor_Gr[24] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S1354>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT)
    KtOHSR_k_HoldCurrentRngDelayFactor_MA[24] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S1355>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT)
    KtOHSR_k_HoldCurrentRngDelayFactor_MB[24] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S1356>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT)
    KtOHSR_k_HoldCurrentRngDelayFactor_N[24] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S1357>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT) KtOHSR_k_InputSpeedDsrdFiltM1[7] =
{
    0.06F, 0.26F, 1.0F, 1.0F, 1.0F, 0.26F, 0.06F
} ;                                    /* Referenced by: '<S647>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT) KtOHSR_k_InputSpeedDsrdFiltM2[7] =
{
    0.06F, 0.26F, 1.0F, 1.0F, 1.0F, 0.26F, 0.06F
} ;                                    /* Referenced by: '<S651>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT) KtOHSR_k_InputSpeedDsrdFiltN[7] =
{
    0.06F, 0.26F, 1.0F, 1.0F, 1.0F, 0.26F, 0.06F
} ;                                    /* Referenced by: '<S655>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT) KtOHSR_k_MtrBSpeedDsrdFilt[7] =
{
    0.06F, 0.26F, 1.0F, 1.0F, 1.0F, 0.26F, 0.06F
} ;                                    /* Referenced by: '<S812>/Vector' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KtOHSR_k_TimeBsdIdleSpdBlend[7] =
{
    0.01F, 0.3F, 0.5F, 0.7F, 0.85F, 0.9F, 1.0F
} ;                                    /* Referenced by: '<S144>/Vector' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT)
    KtOHSR_n_AutorevMaxLimit_CmpPrtcnTimeBsd[7] =
{
    4000.0F, 4000.0F, 3500.0F, 3000.0F, 2500.0F, 2000.0F, 2000.0F
} ;                                    /* Referenced by: '<S871>/Vector' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

static volatile CONST(float32, OHSR_VAR_INIT) KtOHSR_n_EngIdleSpd4CoolTmp[72] =
{
    720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F,
    720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F,
    720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F,
    720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F,
    720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F,
    720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F,
    720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F,
    720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F
} ;                                    /* Referenced by: '<S290>/Vector' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

static volatile CONST(float32, OHSR_VAR_INIT) KtOHSR_n_EngIdleSpd4PDL[7] =
{
    720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F, 720.0F
} ;                                    /* Referenced by: '<S291>/Vector' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KtOHSR_n_EngStrtP2SpdOffset[10] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S593>/Vector'
                                        * '<S610>/Vector'
                                        * '<S631>/Vector'
                                        */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KtOHSR_n_IS_PreLookUp[20] =
{
    950.0F, 950.0F, 1200.0F, 1200.0F, 950.0F, 950.0F, 1200.0F, 1200.0F, 1200.0F,
    1200.0F, 1200.0F, 1200.0F, 1250.0F, 1250.0F, 1250.0F, 1250.0F, 3000.0F,
    3000.0F, 3000.0F, 3000.0F
} ;                                    /* Referenced by: '<S182>/Vector' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KtOHSR_n_IdleSpd_Offset_UL_Idx[10]
    =
{
    0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F
} ;                                    /* Referenced by: '<S246>/Vector' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KtOHSR_n_PdlBsdNi_MaxSpd[7] =
{
    5000.0F, 5000.0F, 5000.0F, 5000.0F, 5000.0F, 5000.0F, 5000.0F
} ;                                    /* Referenced by: '<S851>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT) KtOHSR_n_ShftEfftRdctn_SpdTgt[65] =
{
    0.0F, 0.0F, 30.0F, 180.0F, 330.0F, 480.0F, 630.0F, 1010.0F, 1400.0F, 1750.0F,
    1800.0F, 1800.0F, 1800.0F, 0.0F, 0.0F, 30.0F, 180.0F, 330.0F, 480.0F, 630.0F,
    1010.0F, 1400.0F, 1750.0F, 1800.0F, 1800.0F, 1800.0F, 0.0F, 0.0F, 30.0F,
    180.0F, 330.0F, 480.0F, 630.0F, 1010.0F, 1400.0F, 1750.0F, 1800.0F, 1800.0F,
    1800.0F, 0.0F, 0.0F, 30.0F, 180.0F, 330.0F, 480.0F, 630.0F, 1010.0F, 1400.0F,
    1750.0F, 1800.0F, 1800.0F, 1800.0F, 0.0F, 0.0F, 30.0F, 180.0F, 330.0F,
    480.0F, 630.0F, 1010.0F, 1400.0F, 1750.0F, 1800.0F, 1800.0F, 1800.0F
} ;                                    /* Referenced by: '<S83>/Vector' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static volatile CONST(float32, OHSR_VAR_INIT)
    KtOHSR_r_EngPwrLossIntgrn_WeightFactr[7] =
{
    1.0F, 1.0F, 0.9F, 0.8F, 0.6F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S1157>/Vector'
                                        * '<S1227>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static volatile CONST(float32, OHSR_VAR_INIT)
    KtOHSR_r_NVHLimitBlnd_BattEnrgyFac[36] =
{
    2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 0.4F, 0.5F, 0.6F, 0.7F, 0.9F, 1.0F, 0.0F,
    0.1F, 0.3F, 0.5F, 0.7F, 0.9F, 0.0F, 0.0F, 0.1F, 0.3F, 0.5F, 0.7F, 0.0F, 0.0F,
    0.0F, 0.1F, 0.3F, 0.5F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.1F
} ;                                    /* Referenced by:
                                        * '<S1158>/Vector'
                                        * '<S1228>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static volatile CONST(float32, OHSR_VAR_INIT) KtOHSR_r_NVHLimitBlnd_DrvbltyFac
    [36] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S1159>/Vector'
                                        * '<S1229>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static volatile CONST(float32, OHSR_VAR_INIT) KtOHSR_r_NVHLimitBlnd_EngEnrgyFac
    [7] =
{
    0.0F, 0.2F, 0.4F, 0.6F, 0.8F, 1.0F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S1160>/Vector'
                                        * '<S1230>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

static volatile CONST(float32, OHSR_VAR_INIT) KxOHSR_M_MtrATrqMin_InvrTemp[13] =
{
    0.01F, 2500.0F, 3000.0F, 3500.0F, 4000.0F, 4500.0F, 5000.0F, 5500.0F,
    6000.0F, 7000.0F, 8000.0F, 9000.0F, 10500.0F
} ;                                    /* Referenced by: '<S289>/Vector' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT)
    KxOHSR_T_SIP_DelayTime_PredGrSpd_Idx[10] =
{
    -10.0F, -5.0F, -0.0F, 1.0F, 8.0F, 16.0F, 24.0F, 32.0F, 40.0F, 50.0F
} ;                                    /* Referenced by: '<S265>/Vector' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KxOHSR_k_C1SlipIdleSpdBlend[7] =
{
    0.0F, 10.0F, 30.0F, 50.0F, 70.0F, 900.0F, 1000.0F
} ;                                    /* Referenced by: '<S143>/Vector' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KxOHSR_k_HAS2Vrtl_RampFac_M1[3] =
{
    0.0F, 1.0F, 3.0F
} ;                                    /* Referenced by: '<S598>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT) KxOHSR_k_HAS2Vrtl_RampFac_M2[3] =
{
    0.0F, 1.0F, 3.0F
} ;                                    /* Referenced by: '<S615>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT) KxOHSR_k_HAS2Vrtl_RampFac_N[3] =
{
    0.0F, 1.0F, 3.0F
} ;                                    /* Referenced by: '<S637>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT)
    KxOHSR_k_HoldCurrentRngDelayFactor_EVM[6] =
{
    -30.0F, -10.0F, 0.0F, 10.0F, 30.0F, 50.0F
} ;                                    /* Referenced by: '<S1352>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT)
    KxOHSR_k_HoldCurrentRngDelayFactor_EVN[6] =
{
    -30.0F, -10.0F, 0.0F, 10.0F, 30.0F, 50.0F
} ;                                    /* Referenced by: '<S1353>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT)
    KxOHSR_k_HoldCurrentRngDelayFactor_Gr[6] =
{
    -30.0F, -10.0F, 0.0F, 10.0F, 30.0F, 50.0F
} ;                                    /* Referenced by: '<S1354>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT)
    KxOHSR_k_HoldCurrentRngDelayFactor_MA[6] =
{
    -30.0F, -10.0F, 0.0F, 10.0F, 30.0F, 50.0F
} ;                                    /* Referenced by: '<S1355>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT)
    KxOHSR_k_HoldCurrentRngDelayFactor_MB[6] =
{
    -30.0F, -10.0F, 0.0F, 10.0F, 30.0F, 50.0F
} ;                                    /* Referenced by: '<S1356>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT)
    KxOHSR_k_HoldCurrentRngDelayFactor_N[6] =
{
    -30.0F, -10.0F, 0.0F, 10.0F, 30.0F, 50.0F
} ;                                    /* Referenced by: '<S1357>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT) KxOHSR_k_InputSpeedDsrdFiltM1[7] =
{
    -600.0F, -300.0F, -100.0F, 0.0F, 100.0F, 300.0F, 600.0F
} ;                                    /* Referenced by: '<S647>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT) KxOHSR_k_InputSpeedDsrdFiltM2[7] =
{
    -600.0F, -300.0F, -100.0F, 0.0F, 100.0F, 300.0F, 600.0F
} ;                                    /* Referenced by: '<S651>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT) KxOHSR_k_InputSpeedDsrdFiltN[7] =
{
    -600.0F, -300.0F, -100.0F, 0.0F, 100.0F, 300.0F, 600.0F
} ;                                    /* Referenced by: '<S655>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT) KxOHSR_k_MtrBSpeedDsrdFilt[7] =
{
    -600.0F, -300.0F, -100.0F, 0.0F, 100.0F, 300.0F, 600.0F
} ;                                    /* Referenced by: '<S812>/Vector' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KxOHSR_k_TimeBsdIdleSpdBlend[7] =
{
    0.0F, 0.1F, 0.2F, 0.4F, 0.6F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S144>/Vector' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT)
    KxOHSR_n_AutorevMaxLimit_CmpPrtcnTimeBsd[7] =
{
    300.0F, 600.0F, 900.0F, 1200.0F, 1500.0F, 1800.0F, 2400.0F
} ;                                    /* Referenced by: '<S871>/Vector' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

static volatile CONST(float32, OHSR_VAR_INIT) KxOHSR_n_EngIdleSpd4CoolTmp[8] =
{
    25.0F, 52.0F, 75.0F, 85.0F, 95.0F, 100.0F, 105.0F, 110.0F
} ;                                    /* Referenced by: '<S290>/Vector' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

static volatile CONST(float32, OHSR_VAR_INIT) KxOHSR_n_EngIdleSpd4PDL[7] =
{
    0.0F, 10.0F, 20.0F, 31.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S291>/Vector' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KxOHSR_n_EngStrtP2SpdOffset[10] =
{
    -1.0F, 0.0F, 20.0F, 50.1F, 70.0F, 90.0F, 120.0F, 140.0F, 200.0F, 300.0F
} ;                                    /* Referenced by:
                                        * '<S593>/Vector'
                                        * '<S610>/Vector'
                                        * '<S631>/Vector'
                                        */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KxOHSR_n_IS_PreLookUp[4] =
{
    0.0F, 1.8F, 1.8001F, 100.0F
} ;                                    /* Referenced by: '<S182>/Vector' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KxOHSR_n_IdleSpd_Offset_UL_Idx[10]
    =
{
    -90.0F, -50.0F, -10.0F, 0.0F, 20.0F, 60.0F, 70.0F, 80.0F, 90.0F, 99.0F
} ;                                    /* Referenced by: '<S246>/Vector' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KxOHSR_n_PdlBsdNi_MaxSpd[7] =
{
    0.0F, 100.0F, 500.0F, 1000.0F, 1500.0F, 2000.0F, 3000.0F
} ;                                    /* Referenced by: '<S851>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT) KxOHSR_n_ShftEfftRdctn_SpdTgt[13] =
{
    0.0F, 1.0F, 2.0F, 4.0F, 6.0F, 8.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 40.0F,
    70.0F
} ;                                    /* Referenced by: '<S83>/Vector' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static volatile CONST(float32, OHSR_VAR_INIT)
    KxOHSR_r_EngPwrLossIntgrn_WeightFactr[7] =
{
    0.0F, 0.5F, 1.0F, 2.0F, 3.0F, 5.0F, 10.0F
} ;                                    /* Referenced by:
                                        * '<S1157>/Vector'
                                        * '<S1227>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static volatile CONST(float32, OHSR_VAR_INIT)
    KxOHSR_r_NVHLimitBlnd_BattEnrgyFac[6] =
{
    0.0F, 1.0F, 2.0F, 5.0F, 10.0F, 20.0F
} ;                                    /* Referenced by:
                                        * '<S1158>/Vector'
                                        * '<S1228>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static volatile CONST(float32, OHSR_VAR_INIT) KxOHSR_r_NVHLimitBlnd_DrvbltyFac[6]
    =
{
    0.0F, 100.0F, 150.0F, 200.0F, 400.0F, 1000.0F
} ;                                    /* Referenced by:
                                        * '<S1159>/Vector'
                                        * '<S1229>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static volatile CONST(float32, OHSR_VAR_INIT) KxOHSR_r_NVHLimitBlnd_EngEnrgyFac
    [7] =
{
    0.0F, 2.0F, 5.0F, 8.0F, 10.0F, 15.0F, 20.0F
} ;                                    /* Referenced by:
                                        * '<S1160>/Vector'
                                        * '<S1230>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

static volatile CONST(float32, OHSR_VAR_INIT) KyOHSR_M_MtrATrqMin_InvrTemp[4] =
{
    -20.0F, 75.0F, 100.0F, 150.0F
} ;                                    /* Referenced by: '<S289>/Vector' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT)
    KyOHSR_k_HoldCurrentRngDelayFactor_EVM[4] =
{
    100.0F, 500.0F, 1000.0F, 1500.0F
} ;                                    /* Referenced by: '<S1352>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT)
    KyOHSR_k_HoldCurrentRngDelayFactor_EVN[4] =
{
    100.0F, 500.0F, 1000.0F, 1500.0F
} ;                                    /* Referenced by: '<S1353>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT)
    KyOHSR_k_HoldCurrentRngDelayFactor_Gr[4] =
{
    100.0F, 500.0F, 1000.0F, 1500.0F
} ;                                    /* Referenced by: '<S1354>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT)
    KyOHSR_k_HoldCurrentRngDelayFactor_MA[4] =
{
    100.0F, 500.0F, 1000.0F, 1500.0F
} ;                                    /* Referenced by: '<S1355>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT)
    KyOHSR_k_HoldCurrentRngDelayFactor_MB[4] =
{
    100.0F, 500.0F, 1000.0F, 1500.0F
} ;                                    /* Referenced by: '<S1356>/Vector' */

static volatile CONST(float32, OHSR_VAR_INIT)
    KyOHSR_k_HoldCurrentRngDelayFactor_N[4] =
{
    100.0F, 500.0F, 1000.0F, 1500.0F
} ;                                    /* Referenced by: '<S1357>/Vector' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

static volatile CONST(float32, OHSR_VAR_INIT) KyOHSR_n_EngIdleSpd4CoolTmp[9] =
{
    0.0F, 0.67F, 0.84F, 1.0F, 1.28F, 1.67F, 2.1F, 3.14F, 4.71F
} ;                                    /* Referenced by: '<S290>/Vector' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static volatile CONST(float32, OHSR_VAR_INIT) KyOHSR_n_IS_PreLookUp[5] =
{
    600.0F, 950.0F, 1200.0F, 1250.0F, 3000.0F
} ;                                    /* Referenced by: '<S182>/Vector' */

#endif

static volatile CONST(float32, OHSR_VAR_INIT) KyOHSR_n_ShftEfftRdctn_SpdTgt[5] =
{
    -20.0F, 75.0F, 100.0F, 150.0F, 200.0F
} ;                                    /* Referenced by: '<S83>/Vector' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static volatile CONST(float32, OHSR_VAR_INIT)
    KyOHSR_r_NVHLimitBlnd_BattEnrgyFac[6] =
{
    -5.0F, -2.0F, 2.0F, 5.0F, 10.0F, 15.0F
} ;                                    /* Referenced by:
                                        * '<S1158>/Vector'
                                        * '<S1228>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static volatile CONST(float32, OHSR_VAR_INIT) KyOHSR_r_NVHLimitBlnd_DrvbltyFac[6]
    =
{
    -5.0F, 0.0F, 2.0F, 5.0F, 10.0F, 20.0F
} ;                                    /* Referenced by:
                                        * '<S1159>/Vector'
                                        * '<S1229>/Vector'
                                        */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_OHSR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_OHSR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VaOHSC_E_EngEnrgyLoss[3];/* '<S1209>/MinMax3' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VaOHSC_P_EngPwrLossCurrnt[3];/* '<S1232>/Merge' */

#endif

static VAR(boolean, OHSR_VAR_INIT) VaOHSC_b_Autorev_Enbld[3];/* '<S824>/AND' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(boolean, OHSR_VAR_INIT) VaOHSC_b_EmgRevLim_Actv[3];/* '<S1299>/AND' */

#endif

static VAR(boolean, OHSR_VAR_INIT) VaOHSC_b_HoldCurrentRng[3];/* '<S558>/Logical2' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VaOHSC_n_NiMaxNVH_Final[3];/* '<S936>/MinMax1' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VaOHSC_n_NiMaxNVH_Final_Fltrd[3];/* '<S1210>/Switch1' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VaOHSC_n_NiMaxNVH_Limit[3];/* '<S936>/MinMax2' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VaOHSC_n_NiMaxNVH_PostBlndng[3];/* '<S1209>/Sum3' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_15

static VAR(float32, OHSR_VAR_INIT) VaOHSC_n_PNLimtn_NiMin[3];/* '<S937>/MinMax2' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_15

static VAR(float32, OHSR_VAR_INIT) VaOHSC_n_PNLimtn_NiMinFltrd[3];/* '<S1275>/Switch1' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VaOHSC_r_BlndFctr_NVHLmtn[3];/* '<S1221>/Sum3' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VaOHSC_r_EngEnrgyFac_NVHLmtn[3];/* '<S1230>/Vector' */

#endif

static VAR(float32, OHSR_VAR_INIT) VaOHSC_t_CurrentRngTime[3];/* '<S1301>/Switch2' */
static VAR(float32, OHSR_VAR_INIT) VaOHSC_t_HoldCurrentRngDelayScaled[3];/* '<S558>/Product' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSC_E_BattEnrgyLoss[3];/* '<S1209>/Product' */

#endif

static VAR(float32, OHSR_VAR_INIT) VeOHSC_P_OptEngPwrLoss_M1;/* '<S1011>/Selector7' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_P_OptEngPwrLoss_M2;/* '<S1011>/Selector8' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_P_OptEngPwrLoss_N;/* '<S1011>/Selector6' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_Pct_AutoRevPedal;/* '<S835>/Switch1' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_ArbOpt_M1;/* '<S585>/Logical3' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_ArbOpt_M2;/* '<S586>/Logical3' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_ArbOpt_N;/* '<S587>/Logical3' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_AutorevCondnActv;/* '<S824>/Logical1' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_CurrentRngOnStAlwd;/* '<S558>/Logical5' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_CurrentRngOptAlwd;/* '<S558>/Switch1' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_CurrentRngStAlwd;/* '<S558>/Logical1' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_EngDsrd;/* '<S551>/Merge' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_EngOnDsrdOpt;/* '<S552>/Selector1' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_EngStUpdtDbnc_AllwdOvrrd;/* '<S1300>/AND' */

#endif

static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_FinalAllwdDsrd_IdxM1;/* '<S1110>/MATLAB Function' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_FinalAllwdDsrd_IdxM2;/* '<S1121>/MATLAB Function' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_FinalAllwdDsrd_IdxN;/* '<S1099>/MATLAB Function' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_ManAllwd_IdxM1;/* '<S1077>/MATLAB Function' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_ManAllwd_IdxM2;/* '<S1088>/MATLAB Function' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_ManAllwd_IdxN;/* '<S1066>/MATLAB Function' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_NVHLimitation_Actv[3];/* '<S1211>/Switch1' */

#endif

static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_PwrChgNiM1HoldEnbl;/* '<S827>/Logical6' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_PwrChgNiM2HoldEnbl;/* '<S828>/Logical8' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_PwrChgNi_NHoldEnbl;/* '<S829>/Logical8' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_RngStMapSelection_M1;/* '<S585>/Selector' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_RngStMapSelection_M2;/* '<S586>/Selector' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSC_b_RngStMapSelection_N;/* '<S587>/Selector' */
static VAR(sint16, OHSR_VAR_INIT) VeOHSC_e_CurrentRngOnSelected;/* '<S1296>/Gain' */
static VAR(sint16, OHSR_VAR_INIT) VeOHSC_e_CurrentRngOptSelected;/* '<S1295>/Gain' */
static VAR(sint16, OHSR_VAR_INIT) VeOHSC_e_CurrentRngSelected;/* '<S1297>/Gain' */
static VAR(sint16, OHSR_VAR_INIT) VeOHSC_e_RangeOn_BfrDbnc;/* '<S933>/Sum2' */
static VAR(sint16, OHSR_VAR_INIT) VeOHSC_e_RangeOpt_BfrDbnc;/* '<S933>/Sum1' */
static VAR(sint16, OHSR_VAR_INIT) VeOHSC_e_RangeSel_BfrDbnc;/* '<S933>/Sum' */
static VAR(TeOHSR_e_RngSel, OHSR_VAR_INIT) VeOHSC_e_RngSel_ExtRngDsrd;/* '<S551>/Selector' */
static VAR(TeOHSR_e_OptGear_SG, OHSR_VAR_INIT) VeOHSC_e_SGrDsrd;/* '<S551>/Selector2' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_17

static VAR(TeOHSR_e_OptGear_SG, OHSR_VAR_INIT) VeOHSC_e_SGrDsrd_EngOn;/* '<S553>/Selector2' */

#endif

static VAR(sint16, OHSR_VAR_INIT) VeOHSC_i_SlctnIdx_M1;/* '<S1011>/Switch2' */
static VAR(sint16, OHSR_VAR_INIT) VeOHSC_i_SlctnIdx_M2;/* '<S1011>/Switch3' */
static VAR(sint16, OHSR_VAR_INIT) VeOHSC_i_SlctnIdx_N;/* '<S1011>/Switch1' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_AltMd_IdleSpd;/* '<S296>/Gain' */

#endif

static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_AutorevMaxSpd_CompPrtctn;/* '<S833>/MinMax' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_AutorevSpd_PostCompProtctnArb;/* '<S824>/MinMax3' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_ClutchSlipIS;/* '<S168>/Selector3' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_DiscISRaw;/* '<S157>/Selector1' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_DiscISSwitchThld;/* '<S157>/Sum' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_DiscreteIS;/* '<S157>/Switch2' */

#endif

static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_EngSpdDsrd_Autorev;/* '<S824>/Sum3' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_IdlSpdSetPoint_TurbOfs;/* '<S149>/Switch2' */

#endif

static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_IdleSpdTgt_Raw;/* '<S7>/Merge' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_InputSpeedDsrdM1;/* '<S563>/Gain' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_InputSpeedDsrdM2;/* '<S561>/Gain' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_InputSpeedDsrdN;/* '<S560>/Gain' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_23

static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_MtrBSpdDsrd;/* '<S562>/Gain' */

#endif

static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_NiMax_Autorev;/* '<S824>/MinMax5' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_NiMax_M1;/* '<S1009>/MinMax4' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_NiMax_M2;/* '<S1009>/MinMax5' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_NiMax_N;/* '<S1009>/MinMax3' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_NiMin_Autorev;/* '<S824>/MinMax1' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_NiMin_M1;/* '<S1010>/MinMax1' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_NiMin_M2;/* '<S1010>/MinMax2' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_NiMin_N;/* '<S1010>/MinMax' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_OptEngSpd_M1_Filtered;/* '<S832>/Switch' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_OptEngSpd_M2_Filtered;/* '<S830>/Switch' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_OptEngSpd_N_Filtered;/* '<S831>/Switch' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_OptInputSpdDsrd_M1;/* '<S1011>/Selector1' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_OptInputSpdDsrd_M2;/* '<S1011>/Selector2' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_OptInputSpdDsrd_N;/* '<S1011>/Selector' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_OptMtrBSpdDsrd_N;/* '<S940>/Switch1' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_OptMtrBSpd_Filtered;/* '<S793>/Switch' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_RollingIdle_OutSpdTh;/* '<S368>/Switch3' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_StgcNiMin_M1;/* '<S1011>/Selector4' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_StgcNiMin_M2;/* '<S1011>/Selector5' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_StgcNiMin_N;/* '<S1011>/Selector3' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_TLC_NiM2;/* '<S908>/Switch' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_TransNbBsd_NiDsrd_M1;/* '<S567>/MinMax1' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_TransNbBsd_NiDsrd_M2;/* '<S568>/MinMax1' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_n_TransNbBsd_NiDsrd_N;/* '<S569>/MinMax1' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_r_AutorevMaxSpd_Counter;/* '<S855>/Switch1' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSC_r_BattEnrgyFac_NVHLmtn[3];/* '<S1228>/Vector' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSC_r_DrvbltyFac_NVHLmtn;/* '<S1229>/Vector' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSC_r_EngPwrLossIntgrn_WgtFac;/* '<S1227>/Vector' */

#endif

static VAR(float32, OHSR_VAR_INIT) VeOHSC_r_HoldCurrentRngDelayFactor;/* '<S1298>/Merge' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSC_t_DlyTmr;/* '<S173>/Switch1' */

#endif

static VAR(float32, OHSR_VAR_INIT) VeOHSC_t_HoldCurrentRngDelay_Dsrd;/* '<S558>/Selector1' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_t_HoldCurrentRngDelay_On;/* '<S558>/Selector3' */
static VAR(float32, OHSR_VAR_INIT) VeOHSC_t_HoldCurrentRngDelay_Opt;/* '<S558>/Selector2' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSC_t_HysTmr;/* '<S172>/Switch1' */

#endif

static VAR(float32, OHSR_VAR_INIT) VeOHSI_n_InputSpd_ILE;/* '<S5>/Merge' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSR_M_OptTiMB_CG;/* '<S168>/Selector1' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_3

static VAR(float32, OHSR_VAR_INIT) VeOHSR_M_SumTrqStaticNoCLLatch;/* '<S422>/Switch2' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(boolean, OHSR_VAR_INIT) VeOHSR_b_AcclPosThrsh;/* '<S171>/AND' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(boolean, OHSR_VAR_INIT) VeOHSR_b_ActNi;/* '<S148>/Comparison2' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(boolean, OHSR_VAR_INIT) VeOHSR_b_GradLimReset;/* '<S161>/Merge3' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(boolean, OHSR_VAR_INIT) VeOHSR_b_IS_ULswitch;/* '<S229>/Logical1' */

#endif

static VAR(boolean, OHSR_VAR_INIT) VeOHSR_b_IdleSpdCalcEngOn;/* '<S14>/Logical1' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(boolean, OHSR_VAR_INIT) VeOHSR_b_LowOpt;/* '<S148>/Comparison1' */

#endif

static VAR(boolean, OHSR_VAR_INIT) VeOHSR_b_Neutral;/* '<S5>/Selector4' */
static VAR(boolean, OHSR_VAR_INIT) VeOHSR_b_RngEqnSelToNeutral;/* '<S5>/Selector2' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(boolean, OHSR_VAR_INIT) VeOHSR_b_SIP_CurTrgGR;/* '<S230>/Logical9' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(boolean, OHSR_VAR_INIT) VeOHSR_b_SIP_ShiftComOff;/* '<S230>/Logical10' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(boolean, OHSR_VAR_INIT) VeOHSR_b_SIP_StSpdOil;/* '<S230>/Logical8' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(boolean, OHSR_VAR_INIT) VeOHSR_b_SIP_StSpdOilDe;/* '<S230>/Logical7' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(boolean, OHSR_VAR_INIT) VeOHSR_b_SIP_TurbSlip;/* '<S230>/Comparison9' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(boolean, OHSR_VAR_INIT) VeOHSR_b_SIP_total;/* '<S230>/Logical3' */

#endif

static VAR(boolean, OHSR_VAR_INIT) VeOHSR_b_StrSpd;/* '<S311>/Logical23' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(boolean, OHSR_VAR_INIT) VeOHSR_b_StratHys;/* '<S160>/Switch1' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(boolean, OHSR_VAR_INIT) VeOHSR_b_TransTurb_Active;/* '<S233>/Comparison' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(boolean, OHSR_VAR_INIT) VeOHSR_b_TransTurb_IS_used;/* '<S232>/Logical1' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(TeOHSR_e_ActActionBl, OHSR_VAR_INIT) VeOHSR_e_ActiveActionBlock;/* '<S161>/Merge2' */

#endif

static VAR(TeOHSR_e_RngSel, OHSR_VAR_INIT) VeOHSR_e_CPIDOverride_RngDsrd;/* '<S535>/Merge' */
static VAR(uint16, OHSR_VAR_INIT) VeOHSR_g_CreepCndtn;/* '<S535>/Data Store Read1' */
static VAR(uint16, OHSR_VAR_INIT) VeOHSR_g_CreepCndtn_DS;/* '<Root>/DSM_1' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(uint16, OHSR_VAR_INIT) VeOHSR_g_Filter_DS;/* '<Root>/DSM_5' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

static VAR(uint16, OHSR_VAR_INIT) VeOHSR_g_GSI_DS;/* '<Root>/DSM_2' */

#endif

static VAR(uint16, OHSR_VAR_INIT) VeOHSR_g_NeutCndtn_DS;/* '<Root>/DSM_3' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_3

static VAR(uint16, OHSR_VAR_INIT) VeOHSR_g_SuperCreep_DS;/* '<Root>/DSM_4' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSR_k_IdleSpdBlendFact;/* '<S18>/Merge3' */

#endif

static VAR(float32, OHSR_VAR_INIT) VeOHSR_n_Creep2Launch_Thresh;/* '<S311>/Selector1' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSR_n_ISDMB_CG;/* '<S168>/Selector2' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSR_n_ISDMB_TG;/* '<S168>/Selector' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSR_n_IS_Accl_Lim;/* '<S234>/Sum3' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSR_n_IS_Accl_Offset;/* '<S235>/Subtraction5' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSR_n_IS_Offset;/* '<S229>/Switch2' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSR_n_IS_Rate_Strat_b4Grad;/* '<S161>/Merge1' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSR_n_IdleSpdMax;/* '<S147>/Switch2' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSR_n_IdleSpd_arb;/* '<S146>/MinMax1' */

#endif

static VAR(float32, OHSR_VAR_INIT) VeOHSR_n_Launch2Creep_Thresh;/* '<S311>/Selector2' */

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSR_n_Start_IS_b4_min;/* '<S158>/Switch1' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSR_n_Strat_IS_rate;/* '<S148>/MinMax' */

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static VAR(float32, OHSR_VAR_INIT) VeOHSR_n_TransTurb_IS;/* '<S233>/Switch2' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_OHSR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_OHSR
#include "MemMap.h"

CONST(ConstB_OHSR_ac_T, OHSR_VAR_INIT) OHSR_ac_ConstB =
{
    {
        CeSCOR_e_SG_1, CeSCOR_e_SG_1, CeSCOR_e_SG_1, CeSCOR_e_SG_1
    },                                 /* '<S1429>/Constant' */
    CeOHSR_e_NeutralState,             /* '<S1414>/Const1' */
    CeOHSR_e_NeutralState,             /* '<S1430>/Constant' */
    CeOHSR_e_RngSel_N,                 /* '<S1431>/Constant' */
    CeOHSR_e_SG_Reverse                /* '<S1414>/Const6' */
};

#define STOP_SEC_CONST_UNSPECIFIED_OHSR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_OHSR
#include "MemMap.h"

CONST(ConstP_OHSR_ac_T, OHSR_VAR_INIT) OHSR_ac_ConstP =
{

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S182>/Vector'
     */
    {
        3U, 4U
    },

#endif

    /* Computed Parameter: Vector_maxIndex_n
     * Referenced by: '<S83>/Vector'
     */
    {
        12U, 4U
    },

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

    /* Computed Parameter: Vector_maxIndex_h
     * Referenced by: '<S289>/Vector'
     */
    {
        12U, 3U
    },

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

    /* Computed Parameter: Vector_maxIndex_h4
     * Referenced by: '<S290>/Vector'
     */
    {
        7U, 8U
    },

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S1158>/Vector'
     *   '<S1159>/Vector'
     *   '<S1228>/Vector'
     *   '<S1229>/Vector'
     */
    {
        5U, 5U
    },

#endif

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S1352>/Vector'
     *   '<S1353>/Vector'
     *   '<S1354>/Vector'
     *   '<S1355>/Vector'
     *   '<S1356>/Vector'
     *   '<S1357>/Vector'
     */
    {
        5U, 3U
    }
};

#define STOP_SEC_CONST_UNSPECIFIED_OHSR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_OHSR
#include "MemMap.h"

VAR(B_OHSR_ac_T, OHSR_VAR_INIT) OHSR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_OHSR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_OHSR
#include "MemMap.h"

VAR(DW_OHSR_ac_T, OHSR_VAR_INIT) OHSR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_OHSR
#include "MemMap.h"
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_IV(VAR(float32, AUTOMATIC) rtu_In1,
    P2VAR(float32, AUTOMATIC, OHSR_VAR_INIT) rty_IV, P2VAR(boolean, AUTOMATIC,
    OHSR_VAR_INIT) rty_LowPass);

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_PrevLaunchSpdCntrl(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, OHSR_VAR_INIT) rty_IV, P2VAR
    (boolean, AUTOMATIC, OHSR_VAR_INIT) rty_Slip);

#endif

static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_IfActionSubsystem(VAR(uint8,
    AUTOMATIC) rtu_InputParameter, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT)
    rty_Rng, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT) rty_Index);
static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_IfActionSubsystem1(VAR(uint8,
    AUTOMATIC) rtu_InputParameter, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT)
    rty_Rng, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT) rty_Index);
static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_IfActionSubsystem2(VAR(uint8,
    AUTOMATIC) rtu_InputParameter, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT)
    rty_Rng, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT) rty_Index);
static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_IfActionSubsystem3(VAR(uint8,
    AUTOMATIC) rtu_InputParameter, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT)
    rty_Rng, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT) rty_Index);
static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_IfActionSubsystem4(VAR(uint8,
    AUTOMATIC) rtu_InputParameter, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT)
    rty_Rng, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT) rty_Index);
static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_IfActionSubsystem5(VAR(uint8,
    AUTOMATIC) rtu_InputParameter, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT)
    rty_Rng, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT) rty_Index);
static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_MATLABFunction(VAR(sint16, AUTOMATIC)
    rtu_u, P2VAR(B_MATLABFunction_OHSR_ac_T, AUTOMATIC, OHSR_VAR_INIT) localB);
static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_MATLABFunction_i(VAR(sint16,
    AUTOMATIC) rtu_u, P2VAR(B_MATLABFunction_OHSR_ac_p_T, AUTOMATIC,
    OHSR_VAR_INIT) localB);

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_XDataFractions_Reset(P2VAR
    (B_XDataFractions_OHSR_ac_T, AUTOMATIC, OHSR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_XDataFractions(CONST(float32,
    AUTOMATIC) rtu_xdata[31], VAR(float32, AUTOMATIC) rtu_value, P2VAR
    (B_XDataFractions_OHSR_ac_T, AUTOMATIC, OHSR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_XDataFractions_f_Reset(P2VAR
    (B_XDataFractions_OHSR_ac_b_T, AUTOMATIC, OHSR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_XDataFractions_m(CONST(float32,
    AUTOMATIC) rtu_xdata[15], VAR(float32, AUTOMATIC) rtu_value, P2VAR
    (B_XDataFractions_OHSR_ac_b_T, AUTOMATIC, OHSR_VAR_INIT) localB);

#endif

static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_OEM_ShiftState_Override(void);
static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_No_ShiftState_Override(void);

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static float32 OHSR_ac_frac(float32 Upper, float32 Lower, float32 Input);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static float32 OHSR_ac_frac_o(float32 Upper, float32 Lower, float32 Input);

#endif

/*
 * Output and update for action system:
 *    '<S18>/IV'
 *    '<S18>/LaunchSpdCntrl'
 *    '<S18>/Shft_Efft_Rdctn'
 *    '<S18>/ShftEfftRed_N4Hi'
 *    '<S18>/Switch2Off_or_N'
 */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_IV(VAR(float32, AUTOMATIC) rtu_In1,
    P2VAR(float32, AUTOMATIC, OHSR_VAR_INIT) rty_IV, P2VAR(boolean, AUTOMATIC,
    OHSR_VAR_INIT) rty_LowPass)
{
    /* Inport: '<S101>/In1' */
    *rty_IV = rtu_In1;

    /* SignalConversion generated from: '<S101>/LowPass' incorporates:
     *  Constant: '<S101>/TRUE Constant1'
     */
    *rty_LowPass = true;
}

#endif

/*
 * Output and update for action system:
 *    '<S18>/PrevLaunchSpdCntrl'
 *    '<S18>/Switch2On_Creep'
 *    '<S18>/Switch2On_Launch'
 */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_PrevLaunchSpdCntrl(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, OHSR_VAR_INIT) rty_IV, P2VAR
    (boolean, AUTOMATIC, OHSR_VAR_INIT) rty_Slip)
{
    /* Inport: '<S104>/In1' */
    *rty_IV = rtu_In1;

    /* SignalConversion generated from: '<S104>/Slip' incorporates:
     *  Constant: '<S104>/FALSE Constant'
     */
    *rty_Slip = false;
}

#endif

/*
 * Output and update for action system:
 *    '<S965>/If Action Subsystem'
 *    '<S976>/If Action Subsystem'
 *    '<S987>/If Action Subsystem'
 *    '<S1067>/If Action Subsystem'
 *    '<S1078>/If Action Subsystem'
 *    '<S1089>/If Action Subsystem'
 *    '<S1100>/If Action Subsystem'
 *    '<S1111>/If Action Subsystem'
 *    '<S1122>/If Action Subsystem'
 *    '<S1303>/If Action Subsystem'
 *    ...
 */
static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_IfActionSubsystem(VAR(uint8,
    AUTOMATIC) rtu_InputParameter, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT)
    rty_Rng, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT) rty_Index)
{
    /* SignalConversion generated from: '<S967>/Rng' incorporates:
     *  Constant: '<S967>/Constant Value'
     */
    *rty_Rng = 0U;

    /* Inport: '<S967>/Input Parameter' */
    *rty_Index = rtu_InputParameter;
}

/*
 * Output and update for action system:
 *    '<S965>/If Action Subsystem1'
 *    '<S976>/If Action Subsystem1'
 *    '<S987>/If Action Subsystem1'
 *    '<S1067>/If Action Subsystem1'
 *    '<S1078>/If Action Subsystem1'
 *    '<S1089>/If Action Subsystem1'
 *    '<S1100>/If Action Subsystem1'
 *    '<S1111>/If Action Subsystem1'
 *    '<S1122>/If Action Subsystem1'
 *    '<S1303>/If Action Subsystem1'
 *    ...
 */
static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_IfActionSubsystem1(VAR(uint8,
    AUTOMATIC) rtu_InputParameter, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT)
    rty_Rng, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT) rty_Index)
{
    /* SignalConversion generated from: '<S968>/Rng' incorporates:
     *  Constant: '<S968>/Constant Value'
     */
    *rty_Rng = 1U;

    /* Sum: '<S968>/Sum1' incorporates:
     *  Constant: '<S968>/Constant Value1'
     */
    *rty_Index = (uint8)((sint32)(((sint32)rtu_InputParameter) - 9));
}

/*
 * Output and update for action system:
 *    '<S965>/If Action Subsystem2'
 *    '<S976>/If Action Subsystem2'
 *    '<S987>/If Action Subsystem2'
 *    '<S1067>/If Action Subsystem2'
 *    '<S1078>/If Action Subsystem2'
 *    '<S1089>/If Action Subsystem2'
 *    '<S1100>/If Action Subsystem2'
 *    '<S1111>/If Action Subsystem2'
 *    '<S1122>/If Action Subsystem2'
 *    '<S1303>/If Action Subsystem2'
 *    ...
 */
static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_IfActionSubsystem2(VAR(uint8,
    AUTOMATIC) rtu_InputParameter, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT)
    rty_Rng, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT) rty_Index)
{
    /* SignalConversion generated from: '<S969>/Rng' incorporates:
     *  Constant: '<S969>/Constant Value'
     */
    *rty_Rng = 2U;

    /* Sum: '<S969>/Sum1' incorporates:
     *  Constant: '<S969>/Constant Value1'
     */
    *rty_Index = (uint8)((sint32)(((sint32)rtu_InputParameter) - 18));
}

/*
 * Output and update for action system:
 *    '<S965>/If Action Subsystem3'
 *    '<S976>/If Action Subsystem3'
 *    '<S987>/If Action Subsystem3'
 *    '<S1067>/If Action Subsystem3'
 *    '<S1078>/If Action Subsystem3'
 *    '<S1089>/If Action Subsystem3'
 *    '<S1100>/If Action Subsystem3'
 *    '<S1111>/If Action Subsystem3'
 *    '<S1122>/If Action Subsystem3'
 *    '<S1303>/If Action Subsystem3'
 *    ...
 */
static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_IfActionSubsystem3(VAR(uint8,
    AUTOMATIC) rtu_InputParameter, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT)
    rty_Rng, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT) rty_Index)
{
    /* SignalConversion generated from: '<S970>/Rng' incorporates:
     *  Constant: '<S970>/Constant Value'
     */
    *rty_Rng = 3U;

    /* Sum: '<S970>/Sum1' incorporates:
     *  Constant: '<S970>/Constant Value1'
     */
    *rty_Index = (uint8)((sint32)(((sint32)rtu_InputParameter) - 27));
}

/*
 * Output and update for action system:
 *    '<S965>/If Action Subsystem4'
 *    '<S976>/If Action Subsystem4'
 *    '<S987>/If Action Subsystem4'
 *    '<S1067>/If Action Subsystem4'
 *    '<S1078>/If Action Subsystem4'
 *    '<S1089>/If Action Subsystem4'
 *    '<S1100>/If Action Subsystem4'
 *    '<S1111>/If Action Subsystem4'
 *    '<S1122>/If Action Subsystem4'
 *    '<S1303>/If Action Subsystem4'
 *    ...
 */
static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_IfActionSubsystem4(VAR(uint8,
    AUTOMATIC) rtu_InputParameter, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT)
    rty_Rng, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT) rty_Index)
{
    /* SignalConversion generated from: '<S971>/Rng' incorporates:
     *  Constant: '<S971>/Constant Value'
     */
    *rty_Rng = 4U;

    /* Sum: '<S971>/Sum1' incorporates:
     *  Constant: '<S971>/Constant Value1'
     */
    *rty_Index = (uint8)((sint32)(((sint32)rtu_InputParameter) - 36));
}

/*
 * Output and update for action system:
 *    '<S965>/If Action Subsystem5'
 *    '<S976>/If Action Subsystem5'
 *    '<S987>/If Action Subsystem5'
 *    '<S1067>/If Action Subsystem5'
 *    '<S1078>/If Action Subsystem5'
 *    '<S1089>/If Action Subsystem5'
 *    '<S1100>/If Action Subsystem5'
 *    '<S1111>/If Action Subsystem5'
 *    '<S1122>/If Action Subsystem5'
 *    '<S1303>/If Action Subsystem5'
 *    ...
 */
static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_IfActionSubsystem5(VAR(uint8,
    AUTOMATIC) rtu_InputParameter, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT)
    rty_Rng, P2VAR(uint8, AUTOMATIC, OHSR_VAR_INIT) rty_Index)
{
    /* SignalConversion generated from: '<S972>/Rng' incorporates:
     *  Constant: '<S972>/Constant Value'
     */
    *rty_Rng = 5U;

    /* Sum: '<S972>/Sum1' incorporates:
     *  Constant: '<S972>/Constant Value1'
     */
    *rty_Index = (uint8)((sint32)(((sint32)rtu_InputParameter) - 45));
}

/*
 * Output and update for atomic system:
 *    '<S973>/MATLAB Function'
 *    '<S984>/MATLAB Function'
 *    '<S995>/MATLAB Function'
 */
static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_MATLABFunction(VAR(sint16, AUTOMATIC)
    rtu_u, P2VAR(B_MATLABFunction_OHSR_ac_T, AUTOMATIC, OHSR_VAR_INIT) localB)
{
    sint16 tmp;

    /* MATLAB Function 'OPTL_StratIndexConverter/OSML_DataTypeConv_int16touint8/MATLAB Function': '<S974>:1' */
    /* '<S974>:1:3' */
    tmp = rtu_u;
    if (rtu_u < 0)
    {
        tmp = 0;
    }
    else
    {
        if (rtu_u > 255)
        {
            tmp = 255;
        }
    }

    localB->y = (uint8)tmp;
}

/*
 * Output and update for atomic system:
 *    '<S1075>/MATLAB Function'
 *    '<S1086>/MATLAB Function'
 *    '<S1097>/MATLAB Function'
 *    '<S1108>/MATLAB Function'
 *    '<S1119>/MATLAB Function'
 *    '<S1130>/MATLAB Function'
 *    '<S1311>/MATLAB Function'
 *    '<S1322>/MATLAB Function'
 *    '<S1333>/MATLAB Function'
 *    '<S1344>/MATLAB Function'
 */
static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_MATLABFunction_i(VAR(sint16,
    AUTOMATIC) rtu_u, P2VAR(B_MATLABFunction_OHSR_ac_p_T, AUTOMATIC,
    OHSR_VAR_INIT) localB)
{
    sint16 tmp;

    /* MATLAB Function 'OPTL_StratIndexConverter/OSML_DataTypeConv_int16touint8/MATLAB Function': '<S1076>:1' */
    /* '<S1076>:1:3' */
    tmp = rtu_u;
    if (rtu_u < 0)
    {
        tmp = 0;
    }
    else
    {
        if (rtu_u > 255)
        {
            tmp = 255;
        }
    }

    localB->y = (uint8)tmp;
}

/* Function for Chart: '<S1185>/X-Data & Fractions' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static float32 OHSR_ac_frac(float32 Upper, float32 Lower, float32 Input)
{
    /* Graphical Function 'frac': '<S1187>:1' */
    /* Transition: '<S1187>:122' */
    /* Transition: '<S1187>:121' */
    return (Input - Lower) / (Upper - Lower);
}

#endif

/*
 * System reset for atomic system:
 *    '<S1185>/X-Data & Fractions'
 *    '<S1180>/X-Data & Fractions'
 *    '<S1197>/X-Data & Fractions'
 *    '<S1257>/X-Data & Fractions'
 *    '<S1251>/X-Data & Fractions'
 *    '<S1270>/X-Data & Fractions'
 */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_XDataFractions_Reset(P2VAR
    (B_XDataFractions_OHSR_ac_T, AUTOMATIC, OHSR_VAR_INIT) localB)
{
    localB->UpperIndex = 0.0F;
    localB->LowerIndex = 0.0F;
    localB->fra = 0.0F;
}

#endif

/*
 * Output and update for atomic system:
 *    '<S1185>/X-Data & Fractions'
 *    '<S1180>/X-Data & Fractions'
 *    '<S1197>/X-Data & Fractions'
 *    '<S1257>/X-Data & Fractions'
 *    '<S1251>/X-Data & Fractions'
 *    '<S1270>/X-Data & Fractions'
 */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_XDataFractions(CONST(float32,
    AUTOMATIC) rtu_xdata[31], VAR(float32, AUTOMATIC) rtu_value, P2VAR
    (B_XDataFractions_OHSR_ac_T, AUTOMATIC, OHSR_VAR_INIT) localB)
{
    /* Chart: '<S1185>/X-Data & Fractions' */
    /* Gateway: OPTL_2DDynamicBinSearch31pts/X-Data & Fractions */
    /* During: OPTL_2DDynamicBinSearch31pts/X-Data & Fractions */
    /* Entry Internal: OPTL_2DDynamicBinSearch31pts/X-Data & Fractions */
    /* Transition: '<S1187>:2' */
    if (rtu_value >= rtu_xdata[15])
    {
        /* Transition: '<S1187>:3' */
        if (rtu_value >= rtu_xdata[23])
        {
            /* Transition: '<S1187>:5' */
            if (rtu_value >= rtu_xdata[27])
            {
                /* Transition: '<S1187>:7' */
                if (rtu_value >= rtu_xdata[29])
                {
                    /* Transition: '<S1187>:9' */
                    if (rtu_value >= rtu_xdata[30])
                    {
                        /* Transition: '<S1187>:11' */
                        localB->UpperIndex = 30.0F;
                        localB->LowerIndex = 29.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[30], rtu_xdata[29],
                            rtu_xdata[30]);

                        /* Transition: '<S1187>:13' */
                    }
                    else
                    {
                        /* Transition: '<S1187>:25' */
                        /* Transition: '<S1187>:26' */
                        localB->UpperIndex = 30.0F;
                        localB->LowerIndex = 29.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[30], rtu_xdata[29],
                            rtu_value);

                        /* Transition: '<S1187>:39' */
                    }
                }
                else
                {
                    /* Transition: '<S1187>:24' */
                    if (rtu_value >= rtu_xdata[28])
                    {
                        /* Transition: '<S1187>:12' */
                        localB->UpperIndex = 29.0F;
                        localB->LowerIndex = 28.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[29], rtu_xdata[28],
                            rtu_value);

                        /* Transition: '<S1187>:29' */
                        /* Transition: '<S1187>:14' */
                        /* Transition: '<S1187>:39' */
                    }
                    else
                    {
                        /* Transition: '<S1187>:15' */
                        /* Transition: '<S1187>:27' */
                        localB->UpperIndex = 28.0F;
                        localB->LowerIndex = 27.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[28], rtu_xdata[27],
                            rtu_value);

                        /* Transition: '<S1187>:14' */
                        /* Transition: '<S1187>:39' */
                    }
                }
            }
            else
            {
                /* Transition: '<S1187>:23' */
                if (rtu_value >= rtu_xdata[25])
                {
                    /* Transition: '<S1187>:10' */
                    if (rtu_value >= rtu_xdata[26])
                    {
                        /* Transition: '<S1187>:16' */
                        localB->UpperIndex = 27.0F;
                        localB->LowerIndex = 26.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[27], rtu_xdata[26],
                            rtu_value);

                        /* Transition: '<S1187>:33' */
                    }
                    else
                    {
                        /* Transition: '<S1187>:32' */
                        localB->UpperIndex = 26.0F;
                        localB->LowerIndex = 25.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[26], rtu_xdata[25],
                            rtu_value);

                        /* Transition: '<S1187>:34' */
                    }
                }
                else
                {
                    /* Transition: '<S1187>:30' */
                    if (rtu_value >= rtu_xdata[24])
                    {
                        /* Transition: '<S1187>:31' */
                        localB->UpperIndex = 25.0F;
                        localB->LowerIndex = 24.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[25], rtu_xdata[24],
                            rtu_value);

                        /* Transition: '<S1187>:37' */
                    }
                    else
                    {
                        /* Transition: '<S1187>:36' */
                        localB->UpperIndex = 24.0F;
                        localB->LowerIndex = 23.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[24], rtu_xdata[23],
                            rtu_value);

                        /* Transition: '<S1187>:17' */
                    }

                    /* Transition: '<S1187>:35' */
                    /* Transition: '<S1187>:34' */
                }

                /* Transition: '<S1187>:28' */
                /* Transition: '<S1187>:29' */
                /* Transition: '<S1187>:14' */
                /* Transition: '<S1187>:39' */
            }

            /* Transition: '<S1187>:53' */
            /* Transition: '<S1187>:67' */
        }
        else
        {
            /* Transition: '<S1187>:22' */
            if (rtu_value >= rtu_xdata[19])
            {
                /* Transition: '<S1187>:8' */
                if (rtu_value >= rtu_xdata[21])
                {
                    /* Transition: '<S1187>:42' */
                    if (rtu_value >= rtu_xdata[22])
                    {
                        /* Transition: '<S1187>:45' */
                        localB->UpperIndex = 23.0F;
                        localB->LowerIndex = 22.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[23], rtu_xdata[22],
                            rtu_value);

                        /* Transition: '<S1187>:47' */
                    }
                    else
                    {
                        /* Transition: '<S1187>:46' */
                        localB->UpperIndex = 22.0F;
                        localB->LowerIndex = 21.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[22], rtu_xdata[21],
                            rtu_value);

                        /* Transition: '<S1187>:48' */
                    }
                }
                else
                {
                    /* Transition: '<S1187>:43' */
                    if (rtu_value >= rtu_xdata[20])
                    {
                        /* Transition: '<S1187>:44' */
                        localB->UpperIndex = 21.0F;
                        localB->LowerIndex = 20.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[21], rtu_xdata[20],
                            rtu_value);

                        /* Transition: '<S1187>:40' */
                    }
                    else
                    {
                        /* Transition: '<S1187>:49' */
                        localB->UpperIndex = 20.0F;
                        localB->LowerIndex = 19.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[20], rtu_xdata[19],
                            rtu_value);

                        /* Transition: '<S1187>:50' */
                    }

                    /* Transition: '<S1187>:51' */
                    /* Transition: '<S1187>:48' */
                }

                /* Transition: '<S1187>:52' */
                /* Transition: '<S1187>:67' */
            }
            else
            {
                /* Transition: '<S1187>:54' */
                if (rtu_value >= rtu_xdata[17])
                {
                    /* Transition: '<S1187>:55' */
                    if (rtu_value >= rtu_xdata[18])
                    {
                        /* Transition: '<S1187>:58' */
                        localB->UpperIndex = 19.0F;
                        localB->LowerIndex = 18.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[19], rtu_xdata[18],
                            rtu_value);

                        /* Transition: '<S1187>:57' */
                    }
                    else
                    {
                        /* Transition: '<S1187>:59' */
                        localB->UpperIndex = 18.0F;
                        localB->LowerIndex = 17.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[18], rtu_xdata[17],
                            rtu_value);

                        /* Transition: '<S1187>:60' */
                    }

                    /* Transition: '<S1187>:65' */
                }
                else
                {
                    /* Transition: '<S1187>:56' */
                    if (rtu_value >= rtu_xdata[16])
                    {
                        /* Transition: '<S1187>:61' */
                        localB->UpperIndex = 17.0F;
                        localB->LowerIndex = 16.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[17], rtu_xdata[16],
                            rtu_value);

                        /* Transition: '<S1187>:63' */
                    }
                    else
                    {
                        /* Transition: '<S1187>:62' */
                        localB->UpperIndex = 16.0F;
                        localB->LowerIndex = 15.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[16], rtu_xdata[15],
                            rtu_value);

                        /* Transition: '<S1187>:18' */
                    }

                    /* Transition: '<S1187>:64' */
                }

                /* Transition: '<S1187>:66' */
            }
        }

        /* Transition: '<S1187>:68' */
        /* Transition: '<S1187>:113' */
        /* Transition: '<S1187>:19' */
    }
    else
    {
        /* Transition: '<S1187>:4' */
        if (rtu_value >= rtu_xdata[7])
        {
            /* Transition: '<S1187>:21' */
            if (rtu_value >= rtu_xdata[11])
            {
                /* Transition: '<S1187>:70' */
                if (rtu_value >= rtu_xdata[13])
                {
                    /* Transition: '<S1187>:75' */
                    if (rtu_value >= rtu_xdata[14])
                    {
                        /* Transition: '<S1187>:77' */
                        localB->UpperIndex = 15.0F;
                        localB->LowerIndex = 14.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[15], rtu_xdata[14],
                            rtu_value);

                        /* Transition: '<S1187>:78' */
                    }
                    else
                    {
                        /* Transition: '<S1187>:76' */
                        localB->UpperIndex = 14.0F;
                        localB->LowerIndex = 13.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[14], rtu_xdata[13],
                            rtu_value);

                        /* Transition: '<S1187>:79' */
                    }

                    /* Transition: '<S1187>:85' */
                }
                else
                {
                    /* Transition: '<S1187>:71' */
                    /* Transition: '<S1187>:80' */
                    if (rtu_value >= rtu_xdata[12])
                    {
                        /* Transition: '<S1187>:81' */
                        localB->UpperIndex = 13.0F;
                        localB->LowerIndex = 12.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[13], rtu_xdata[12],
                            rtu_value);

                        /* Transition: '<S1187>:82' */
                    }
                    else
                    {
                        /* Transition: '<S1187>:20' */
                        localB->UpperIndex = 12.0F;
                        localB->LowerIndex = 11.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[12], rtu_xdata[11],
                            rtu_value);

                        /* Transition: '<S1187>:83' */
                    }

                    /* Transition: '<S1187>:84' */
                }

                /* Transition: '<S1187>:6' */
            }
            else
            {
                /* Transition: '<S1187>:86' */
                if (rtu_value >= rtu_xdata[9])
                {
                    /* Transition: '<S1187>:87' */
                    if (rtu_value >= rtu_xdata[10])
                    {
                        /* Transition: '<S1187>:90' */
                        localB->UpperIndex = 11.0F;
                        localB->LowerIndex = 10.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[11], rtu_xdata[10],
                            rtu_value);

                        /* Transition: '<S1187>:91' */
                        /* Transition: '<S1187>:72' */
                    }
                    else
                    {
                        /* Transition: '<S1187>:88' */
                        localB->UpperIndex = 10.0F;
                        localB->LowerIndex = 9.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[10], rtu_xdata[9],
                            rtu_value);

                        /* Transition: '<S1187>:89' */
                        /* Transition: '<S1187>:72' */
                    }
                }
                else
                {
                    /* Transition: '<S1187>:92' */
                    if (rtu_value >= rtu_xdata[8])
                    {
                        /* Transition: '<S1187>:93' */
                        localB->UpperIndex = 9.0F;
                        localB->LowerIndex = 8.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[9], rtu_xdata[8],
                            rtu_value);

                        /* Transition: '<S1187>:89' */
                        /* Transition: '<S1187>:72' */
                    }
                    else
                    {
                        /* Transition: '<S1187>:94' */
                        localB->UpperIndex = 8.0F;
                        localB->LowerIndex = 7.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[8], rtu_xdata[7],
                            rtu_value);

                        /* Transition: '<S1187>:95' */
                    }
                }

                /* Transition: '<S1187>:74' */
            }

            /* Transition: '<S1187>:69' */
        }
        else
        {
            /* Transition: '<S1187>:73' */
            if (rtu_value >= rtu_xdata[3])
            {
                /* Transition: '<S1187>:96' */
                if (rtu_value >= rtu_xdata[5])
                {
                    /* Transition: '<S1187>:99' */
                    if (rtu_value >= rtu_xdata[6])
                    {
                        /* Transition: '<S1187>:103' */
                        localB->UpperIndex = 7.0F;
                        localB->LowerIndex = 6.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[7], rtu_xdata[6],
                            rtu_value);

                        /* Transition: '<S1187>:100' */
                    }
                    else
                    {
                        /* Transition: '<S1187>:102' */
                        localB->UpperIndex = 6.0F;
                        localB->LowerIndex = 5.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[6], rtu_xdata[5],
                            rtu_value);

                        /* Transition: '<S1187>:101' */
                    }

                    /* Transition: '<S1187>:109' */
                    /* Transition: '<S1187>:119' */
                    /* Transition: '<S1187>:97' */
                }
                else
                {
                    /* Transition: '<S1187>:104' */
                    if (rtu_value >= rtu_xdata[4])
                    {
                        /* Transition: '<S1187>:105' */
                        localB->UpperIndex = 5.0F;
                        localB->LowerIndex = 4.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[5], rtu_xdata[4],
                            rtu_value);

                        /* Transition: '<S1187>:107' */
                        /* Transition: '<S1187>:97' */
                    }
                    else
                    {
                        /* Transition: '<S1187>:106' */
                        localB->UpperIndex = 4.0F;
                        localB->LowerIndex = 3.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[4], rtu_xdata[3],
                            rtu_value);
                    }
                }

                /* Transition: '<S1187>:120' */
                /* Transition: '<S1187>:118' */
            }
            else
            {
                /* Transition: '<S1187>:110' */
                if (rtu_value >= rtu_xdata[1])
                {
                    /* Transition: '<S1187>:111' */
                    if (rtu_value >= rtu_xdata[2])
                    {
                        /* Transition: '<S1187>:115' */
                        localB->UpperIndex = 3.0F;
                        localB->LowerIndex = 2.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[3], rtu_xdata[2],
                            rtu_value);

                        /* Transition: '<S1187>:41' */
                        /* Transition: '<S1187>:117' */
                    }
                    else
                    {
                        /* Transition: '<S1187>:114' */
                        localB->UpperIndex = 2.0F;
                        localB->LowerIndex = 1.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[2], rtu_xdata[1],
                            rtu_value);

                        /* Transition: '<S1187>:38' */
                        /* Transition: '<S1187>:117' */
                    }
                }
                else
                {
                    /* Transition: '<S1187>:112' */
                    if (rtu_value >= rtu_xdata[0])
                    {
                        /* Transition: '<S1187>:116' */
                        localB->UpperIndex = 1.0F;
                        localB->LowerIndex = 0.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[1], rtu_xdata[0],
                            rtu_value);

                        /* Transition: '<S1187>:38' */
                        /* Transition: '<S1187>:117' */
                    }
                    else
                    {
                        /* Transition: '<S1187>:108' */
                        localB->UpperIndex = 1.0F;
                        localB->LowerIndex = 0.0F;
                        localB->fra = OHSR_ac_frac(rtu_xdata[1], rtu_xdata[0],
                            rtu_xdata[0]);

                        /* Transition: '<S1187>:118' */
                    }
                }
            }

            /* Transition: '<S1187>:98' */
            /* Transition: '<S1187>:19' */
        }
    }

    /* End of Chart: '<S1185>/X-Data & Fractions' */
}

#endif

/* Function for Chart: '<S1192>/X-Data & Fractions' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static float32 OHSR_ac_frac_o(float32 Upper, float32 Lower, float32 Input)
{
    /* Graphical Function 'frac': '<S1200>:1' */
    /* Transition: '<S1200>:7' */
    /* Transition: '<S1200>:5' */
    return (Input - Lower) / (Upper - Lower);
}

#endif

/*
 * System reset for atomic system:
 *    '<S1192>/X-Data & Fractions'
 *    '<S1264>/X-Data & Fractions'
 */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_XDataFractions_f_Reset(P2VAR
    (B_XDataFractions_OHSR_ac_b_T, AUTOMATIC, OHSR_VAR_INIT) localB)
{
    localB->UpperIndex = 0.0F;
    localB->LowerIndex = 0.0F;
    localB->fra = 0.0F;
}

#endif

/*
 * Output and update for atomic system:
 *    '<S1192>/X-Data & Fractions'
 *    '<S1264>/X-Data & Fractions'
 */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_XDataFractions_m(CONST(float32,
    AUTOMATIC) rtu_xdata[15], VAR(float32, AUTOMATIC) rtu_value, P2VAR
    (B_XDataFractions_OHSR_ac_b_T, AUTOMATIC, OHSR_VAR_INIT) localB)
{
    /* Chart: '<S1192>/X-Data & Fractions' */
    /* Gateway: OPTL_2DDynamicBinSearch15pts/X-Data & Fractions */
    /* During: OPTL_2DDynamicBinSearch15pts/X-Data & Fractions */
    /* Entry Internal: OPTL_2DDynamicBinSearch15pts/X-Data & Fractions */
    /* Transition: '<S1200>:2' */
    if (rtu_value >= rtu_xdata[7])
    {
        /* Transition: '<S1200>:21' */
        if (rtu_value >= rtu_xdata[11])
        {
            /* Transition: '<S1200>:10' */
            if (rtu_value >= rtu_xdata[13])
            {
                /* Transition: '<S1200>:15' */
                if (rtu_value >= rtu_xdata[14])
                {
                    /* Transition: '<S1200>:17' */
                    localB->UpperIndex = 14.0F;
                    localB->LowerIndex = 13.0F;
                    localB->fra = 1.0F;

                    /* Transition: '<S1200>:18' */
                }
                else
                {
                    /* Transition: '<S1200>:16' */
                    localB->UpperIndex = 14.0F;
                    localB->LowerIndex = 13.0F;
                    localB->fra = OHSR_ac_frac_o(rtu_xdata[14], rtu_xdata[13],
                        rtu_value);

                    /* Transition: '<S1200>:22' */
                }

                /* Transition: '<S1200>:28' */
            }
            else
            {
                /* Transition: '<S1200>:11' */
                /* Transition: '<S1200>:23' */
                if (rtu_value >= rtu_xdata[12])
                {
                    /* Transition: '<S1200>:24' */
                    localB->UpperIndex = 13.0F;
                    localB->LowerIndex = 12.0F;
                    localB->fra = OHSR_ac_frac_o(rtu_xdata[13], rtu_xdata[12],
                        rtu_value);

                    /* Transition: '<S1200>:25' */
                }
                else
                {
                    /* Transition: '<S1200>:20' */
                    localB->UpperIndex = 12.0F;
                    localB->LowerIndex = 11.0F;
                    localB->fra = OHSR_ac_frac_o(rtu_xdata[12], rtu_xdata[11],
                        rtu_value);

                    /* Transition: '<S1200>:26' */
                }

                /* Transition: '<S1200>:27' */
            }

            /* Transition: '<S1200>:6' */
        }
        else
        {
            /* Transition: '<S1200>:29' */
            if (rtu_value >= rtu_xdata[9])
            {
                /* Transition: '<S1200>:30' */
                if (rtu_value >= rtu_xdata[10])
                {
                    /* Transition: '<S1200>:33' */
                    localB->UpperIndex = 11.0F;
                    localB->LowerIndex = 10.0F;
                    localB->fra = OHSR_ac_frac_o(rtu_xdata[11], rtu_xdata[10],
                        rtu_value);

                    /* Transition: '<S1200>:34' */
                    /* Transition: '<S1200>:12' */
                }
                else
                {
                    /* Transition: '<S1200>:31' */
                    localB->UpperIndex = 10.0F;
                    localB->LowerIndex = 9.0F;
                    localB->fra = OHSR_ac_frac_o(rtu_xdata[10], rtu_xdata[9],
                        rtu_value);

                    /* Transition: '<S1200>:32' */
                    /* Transition: '<S1200>:12' */
                }
            }
            else
            {
                /* Transition: '<S1200>:35' */
                if (rtu_value >= rtu_xdata[8])
                {
                    /* Transition: '<S1200>:36' */
                    localB->UpperIndex = 9.0F;
                    localB->LowerIndex = 8.0F;
                    localB->fra = OHSR_ac_frac_o(rtu_xdata[9], rtu_xdata[8],
                        rtu_value);

                    /* Transition: '<S1200>:32' */
                    /* Transition: '<S1200>:12' */
                }
                else
                {
                    /* Transition: '<S1200>:37' */
                    localB->UpperIndex = 8.0F;
                    localB->LowerIndex = 7.0F;
                    localB->fra = OHSR_ac_frac_o(rtu_xdata[8], rtu_xdata[7],
                        rtu_value);

                    /* Transition: '<S1200>:39' */
                }
            }

            /* Transition: '<S1200>:14' */
        }

        /* Transition: '<S1200>:9' */
    }
    else
    {
        /* Transition: '<S1200>:13' */
        if (rtu_value >= rtu_xdata[3])
        {
            /* Transition: '<S1200>:40' */
            if (rtu_value >= rtu_xdata[5])
            {
                /* Transition: '<S1200>:44' */
                if (rtu_value >= rtu_xdata[6])
                {
                    /* Transition: '<S1200>:48' */
                    localB->UpperIndex = 7.0F;
                    localB->LowerIndex = 6.0F;
                    localB->fra = OHSR_ac_frac_o(rtu_xdata[7], rtu_xdata[6],
                        rtu_value);

                    /* Transition: '<S1200>:45' */
                }
                else
                {
                    /* Transition: '<S1200>:47' */
                    localB->UpperIndex = 6.0F;
                    localB->LowerIndex = 5.0F;
                    localB->fra = OHSR_ac_frac_o(rtu_xdata[6], rtu_xdata[5],
                        rtu_value);

                    /* Transition: '<S1200>:46' */
                }

                /* Transition: '<S1200>:54' */
                /* Transition: '<S1200>:8' */
                /* Transition: '<S1200>:42' */
            }
            else
            {
                /* Transition: '<S1200>:49' */
                if (rtu_value >= rtu_xdata[4])
                {
                    /* Transition: '<S1200>:50' */
                    localB->UpperIndex = 5.0F;
                    localB->LowerIndex = 4.0F;
                    localB->fra = OHSR_ac_frac_o(rtu_xdata[5], rtu_xdata[4],
                        rtu_value);

                    /* Transition: '<S1200>:52' */
                    /* Transition: '<S1200>:42' */
                }
                else
                {
                    /* Transition: '<S1200>:51' */
                    localB->UpperIndex = 4.0F;
                    localB->LowerIndex = 3.0F;
                    localB->fra = OHSR_ac_frac_o(rtu_xdata[4], rtu_xdata[3],
                        rtu_value);
                }
            }

            /* Transition: '<S1200>:3' */
            /* Transition: '<S1200>:58' */
        }
        else
        {
            /* Transition: '<S1200>:55' */
            if (rtu_value >= rtu_xdata[1])
            {
                /* Transition: '<S1200>:56' */
                if (rtu_value >= rtu_xdata[2])
                {
                    /* Transition: '<S1200>:60' */
                    localB->UpperIndex = 3.0F;
                    localB->LowerIndex = 2.0F;
                    localB->fra = OHSR_ac_frac_o(rtu_xdata[3], rtu_xdata[2],
                        rtu_value);

                    /* Transition: '<S1200>:41' */
                    /* Transition: '<S1200>:4' */
                }
                else
                {
                    /* Transition: '<S1200>:59' */
                    localB->UpperIndex = 2.0F;
                    localB->LowerIndex = 1.0F;
                    localB->fra = OHSR_ac_frac_o(rtu_xdata[2], rtu_xdata[1],
                        rtu_value);

                    /* Transition: '<S1200>:38' */
                    /* Transition: '<S1200>:4' */
                }
            }
            else
            {
                /* Transition: '<S1200>:57' */
                if (rtu_value >= rtu_xdata[0])
                {
                    /* Transition: '<S1200>:61' */
                    localB->UpperIndex = 1.0F;
                    localB->LowerIndex = 0.0F;
                    localB->fra = OHSR_ac_frac_o(rtu_xdata[1], rtu_xdata[0],
                        rtu_value);

                    /* Transition: '<S1200>:38' */
                    /* Transition: '<S1200>:4' */
                }
                else
                {
                    /* Transition: '<S1200>:53' */
                    localB->UpperIndex = 1.0F;
                    localB->LowerIndex = 0.0F;
                    localB->fra = OHSR_ac_frac_o(rtu_xdata[1], rtu_xdata[0],
                        rtu_xdata[0]);

                    /* Transition: '<S1200>:58' */
                }
            }
        }

        /* Transition: '<S1200>:43' */
        /* Transition: '<S1200>:19' */
    }

    /* End of Chart: '<S1192>/X-Data & Fractions' */
}

#endif

/* Output and update for action system: '<S535>/OEM_ShiftState_Override' */
static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_OEM_ShiftState_Override(void)
{
    sint32 rtb_Selector12_tmp;
    float32 rtb_TmpSignalConversionAtSelectorInport1[5];
    float32 rtb_Switch1_idx_0_tmp;
    sint16 rtb_Selector12_0[2];
    sint16 rtb_Switch[2];
    sint16 rtb_Selector12;
    sint16 rtb_Selector1_tmp;
    TeRTMR_e_ClutchLrnType tmpRead;
    boolean tmp;

    /* Inport: '<Root>/VeRTMR_e_ClutchLrnType' */
    (void)Rte_Read_VeRTMR_e_ClutchLrnType_Value(&tmpRead);

    /* Selector: '<S1381>/Selector12' incorporates:
     *  Constant: '<S1403>/Calib'
     *  Constant: '<S1404>/Calib'
     *  DataTypeConversion: '<S1381>/Data Type Conversion1'
     *  DataTypeConversion: '<S1381>/Data Type Conversion3'
     *  Selector: '<S1381>/Selector1'
     *  SignalConversion generated from: '<S2>/VeRTMR_e_HybTransCmndSt'
     */
    rtb_Selector12_tmp = ((sint32)((uint32)(((uint32)tmpRead) << 3U))) +
        ((sint32)OHSR_ac_B.TmpSignalConversionAtVeRTMR_e_HybTransCm);

    /* Selector: '<S1381>/Selector12' incorporates:
     *  Constant: '<S1404>/Calib'
     */
    rtb_Selector12 = KaOHSR_i_SelIdlSpdEngClip[(rtb_Selector12_tmp)];

    /* Selector: '<S1381>/Selector1' incorporates:
     *  Constant: '<S1403>/Calib'
     */
    rtb_Selector1_tmp = KaOHSR_i_ApplyEngIdleToMtrB[(rtb_Selector12_tmp)];

    /* Merge: '<S535>/Merge' incorporates:
     *  DataTypeConversion: '<S1401>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeRTMR_e_HybTransCmndSt'
     */
    VeOHSR_e_CPIDOverride_RngDsrd =
        OHSR_ac_B.TmpSignalConversionAtVeRTMR_e_HybTransCm;

    /* Outputs for Atomic SubSystem: '<S1381>/ClosedInterval' */
    /* Logic: '<S1381>/Logical' incorporates:
     *  Constant: '<S1381>/Constant Value1'
     *  Constant: '<S1403>/Calib'
     *  Constant: '<S1405>/Calib'
     *  Logic: '<S1400>/Logical Operator'
     *  RelationalOperator: '<S1400>/Relatonal Operator'
     *  RelationalOperator: '<S1400>/Relatonal Operator1'
     *  Selector: '<S1381>/Selector1'
     */
    tmp = (((rtb_Selector12 >= 0) && (rtb_Selector12 <=
             KeOHSR_i_MaxSel4ShiftStateOvrrd)) && ((rtb_Selector1_tmp >= 0) &&
            (rtb_Selector1_tmp <= KeOHSR_i_MaxSel4ShiftStateOvrrd)));

    /* End of Outputs for SubSystem: '<S1381>/ClosedInterval' */

    /* SignalConversion generated from: '<S1381>/Selector' incorporates:
     *  Constant: '<S1381>/Constant Value'
     *  Inport: '<Root>/VeESPR_n_EngSpdMinLim'
     *  Inport: '<Root>/VeRTMR_n_TransInputSpd'
     */
    (void)Rte_Read_VeRTMR_n_TransInputSpd_Value
        (&rtb_TmpSignalConversionAtSelectorInport1[4]);
    (void)Rte_Read_VeESPR_n_EngSpdMinLim_Value
        (&rtb_TmpSignalConversionAtSelectorInport1[2]);
    rtb_TmpSignalConversionAtSelectorInport1[0] = 0.0F;
    rtb_TmpSignalConversionAtSelectorInport1[1] =
        OHSR_ac_B.TmpSignalConversionAtTransMin_ReadOutpor;
    rtb_TmpSignalConversionAtSelectorInport1[3] =
        OHSR_ac_B.TmpSignalConversionAtVeTISR_n_TransMinIn;

    /* Switch: '<S1381>/Switch' */
    rtb_Selector12_0[0] = rtb_Selector12;
    rtb_Selector12_0[1] = rtb_Selector1_tmp;
    for (rtb_Selector12_tmp = 0; rtb_Selector12_tmp < 2; rtb_Selector12_tmp++)
    {
        /* Switch: '<S1381>/Switch' incorporates:
         *  Logic: '<S1381>/Logical'
         */
        if (tmp)
        {
            /* Switch: '<S1381>/Switch' */
            rtb_Switch[rtb_Selector12_tmp] = rtb_Selector12_0[rtb_Selector12_tmp];
        }
        else
        {
            /* Switch: '<S1381>/Switch' incorporates:
             *  Constant: '<S1381>/Constant Value2'
             */
            rtb_Switch[rtb_Selector12_tmp] = 0;
        }
    }

    /* Switch: '<S1381>/Switch1' incorporates:
     *  Constant: '<S1402>/Constant'
     *  RelationalOperator: '<S1381>/Comparison3'
     */
    if (((uint32)tmpRead) == CeRTMR_e_Clutch_NoLrn)
    {
        /* Selector: '<S1381>/Selector' */
        rtb_Switch1_idx_0_tmp =
            rtb_TmpSignalConversionAtSelectorInport1[rtb_Switch[0]];

        /* Switch: '<S1381>/Switch1' incorporates:
         *  Constant: '<S1407>/Calib'
         *  MinMax: '<S1381>/MinMax1'
         *  Selector: '<S1381>/Selector'
         */
        OHSR_ac_B.Gain_h = fmaxf(KeOHSR_n_RTMR_NiDesired_M1,
            rtb_Switch1_idx_0_tmp);

        /* Gain: '<S1385>/Gain' incorporates:
         *  Constant: '<S1408>/Calib'
         *  MinMax: '<S1381>/MinMax2'
         *  Switch: '<S1381>/Switch1'
         */
        OHSR_ac_B.Gain_a = fmaxf(rtb_Switch1_idx_0_tmp,
            KeOHSR_n_RTMR_NiDesired_M2);

        /* Merge: '<S535>/Merge4' incorporates:
         *  Constant: '<S1406>/Calib'
         *  MinMax: '<S1381>/MinMax3'
         *  Selector: '<S1381>/Selector2'
         *  Switch: '<S1381>/Switch1'
         */
        OHSR_ac_B.Merge4 = fmaxf(KeOHSR_n_RTMR_NbDesired,
            rtb_TmpSignalConversionAtSelectorInport1[rtb_Switch[1]]);
    }
    else
    {
        /* Switch: '<S1381>/Switch1' incorporates:
         *  Selector: '<S1381>/Selector'
         */
        OHSR_ac_B.Gain_h = rtb_TmpSignalConversionAtSelectorInport1[rtb_Switch[0]];

        /* Gain: '<S1385>/Gain' incorporates:
         *  Switch: '<S1381>/Switch1'
         */
        OHSR_ac_B.Gain_a = OHSR_ac_B.Gain_h;

        /* Merge: '<S535>/Merge4' incorporates:
         *  Selector: '<S1381>/Selector2'
         *  Switch: '<S1381>/Switch1'
         */
        OHSR_ac_B.Merge4 = rtb_TmpSignalConversionAtSelectorInport1[rtb_Switch[1]];
    }

    /* End of Switch: '<S1381>/Switch1' */

    /* Gain: '<S1383>/Gain' incorporates:
     *  Gain: '<S1411>/Gain'
     */
    OHSR_ac_B.Gain_ok = OHSR_ac_B.Gain_h;
}

/* Output and update for action system: '<S535>/No_ShiftState_Override' */
static FUNC(void, OHSR_CODE_LOCAL) OHSR_ac_No_ShiftState_Override(void)
{
    /* DataTypeConversion: '<S1395>/DataTypeConversion' incorporates:
     *  DataTypeConversion: '<S542>/DataTypeConversion'
     *  Merge: '<S535>/Merge'
     */
    VeOHSR_e_CPIDOverride_RngDsrd = OHSR_ac_B.DataTypeConversion_a;

    /* Gain: '<S1398>/Gain' */
    OHSR_ac_B.Gain_ok = OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_b;

    /* Gain: '<S1396>/Gain' */
    OHSR_ac_B.Gain_h = OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_f;

    /* Gain: '<S1397>/Gain' */
    OHSR_ac_B.Gain_a = OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_d;

    /* Gain: '<S1399>/Gain' */
    OHSR_ac_B.Merge4 = OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_e;
}

/* Model step function for TID1 */
FUNC(void, OHSR_CODE) OHSR_MedTEB(void) /* Explicit Task: MedTEB */
{
    /* local block i/o variables */
    boolean rtb_TmpSignalConversionAtShftEfftRdctn_R;
    boolean rtb_TmpSignalConversionAtShftEfft_N4H_Re;
    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeOSMR_e_Targ_a;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

    float32 tmpRead_0;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

    float32 tmpRead_1;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

    float32 tmpRead_2;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

    float32 tmpRead_4;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

    TeHPMR_e_InvrtrSwitchCmd tmpRead_5;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    uint16 tmpRead_6;

#endif

    float32 tmpRead_7[9];
    float32 tmpRead_8[9];
    float32 tmpRead_9[9];
    float32 tmpRead_a[9];
    float32 tmpRead_b[9];
    float32 tmpRead_c[9];
    float32 tmpRead_d[9];
    float32 tmpRead_e[9];
    float32 tmpRead_f[9];
    float32 tmpRead_g[9];
    float32 tmpRead_h[9];
    float32 tmpRead_i[9];
    TeHSER_e_RngSt tmpRead_j;
    TeHSER_e_SteadyStates tmpRead_k;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    float32 tmpRead_l;

#endif

    TeWTAR_e_PedalTrqArb tmpRead_m;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    float32 tmpRead_n[9];

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_3

    float32 tmpRead_o;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_3

    float32 tmpRead_p;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_3

    boolean tmpRead_q;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_7

    TeMSPR_e_P2Spd_Prfl_Enbl tmpRead_r;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    float32 tmpRead_s;

#endif

    boolean tmpRead_t;
    boolean tmpRead_u;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    float32 tmpRead_v;

#endif

    float32 tmpRead_w;
    float32 tmpRead_y;
    TeTINR_e_TCM_TrqCntrlModeReq tmpRead_x;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    float32 tmpRead_z[9];

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    float32 tmpRead_10[9];

#endif

    float32 rtb_TmpSignalConversionAtVaOSMR_n_NTur_h[9];
    float32 rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a;
    float32 rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;
    float32 rtb_TmpSignalConversionAtVeOSMR_n_Tran_f;
    float32 rtb_TmpSignalConversionAtVeTTQR_M_SumTrq;
    float32 rtb_TmpSignalConversionAtVeVSDR_n_NTur_j;
    float32 rtb_TmpSignalConversionAtVeVTVR_M_Load_e;
    sint16 rtb_DataTypeConversion3_h;
    sint16 rtb_Saturation;
    sint8 rtPrevAction;
    boolean rtb_Logical14_i;
    boolean rtb_Logical16;
    boolean rtb_Logical1_jm;
    boolean rtb_Logical3_b0;
    boolean rtb_Logical4_fg;
    boolean rtb_Logical_h;
    boolean tmp;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    float32 rtb_LeOHSC_n_IdleSpeedSetPoint;

#endif

    float32 rtb_Switch2_hu;
    float32 rtb_TmpSignalConversionAtVeCSVR_n_TransO;
    float32 rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b;
    float32 rtb_TmpSignalConversionAtVeTISR_n_Inpu_d;
    boolean rtb_Comparison3_b1;
    boolean rtb_UnitDelay_dm;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    boolean rtb_AND_pv;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    boolean rtb_AND_dj;

#endif

    float32 rtb_TmpSignalConversionAtVeAPSR_Pct_Ac_c;
    float32 rtb_TmpSignalConversionAtVeICSR_M_EngCLO;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    uint32 rtb_Prelookup_o1;

#endif

    float32 rtb_Sum2_es;
    boolean rtb_TmpSignalConversionAtVeCSVR_b_NTurbF;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

    float32 rtb_Vector;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

    boolean rtb_Logical4_g;

#endif

    float32 rtb_TmpSignalConversionAtVeTFTR_T_Tran_b;
    boolean rtb_Comparison10_f;
    boolean rtb_NotEqual_j;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    float32 rtb_Switch3_mo[9];

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    float32 rtb_Summation_lr[9];

#endif

    float32 rtb_Switch;
    float32 rtb_TmpSignalConversionAtVeRGNR_M_DrvInt;
    boolean rtb_Comparison4_ia;
    boolean rtb_Logical_i;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    float32 rtb_TmpSignalConversionAtVeVSDR_dn_Str_f;

#endif

    float32 rtb_Sum2_oy;
    float32 rtb_Sum3_h;
    float32 rtb_TmpSignalConversionAtVeTISR_n_TransM;
    TeESSR_e_EngStartStopSt rtb_TmpSignalConversionAtVeESSR_e_EngSta;
    TeHCCR_e_ClutchStatus rtb_TmpSignalConversionAtVeTRNR_e_ILESta;
    TeOHSR_e_RngSel rtb_TmpSignalConversionAtDsrdRngSt_ReadO;
    TeOSMR_e_HRSR_State rtb_TmpSignalConversionAtVeOSMR_e_HRSR_S;
    TeOSMR_e_SteadyTransState rtb_TmpSignalConversionAtVeOSMR_e_Stea_i;
    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeOSMR_e_Actu_o;
    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTRNR_e_Actu_c;
    boolean rtb_AND_bs;
    boolean rtb_AND_h0v;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    TeOHSR_e_VLE_DriveStat rtb_UnitDelay3_ns;

#endif

    TeDTRR_e_SumFWIDFst rtb_TmpSignalConversionAtVeDTRR_e_SumFWI;
    TeFWDR_e_TrnsfrCaseRange rtb_TmpSignalConversionAtVeFWDR_e_Tcas_d;
    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTRNR_e_Targ_i;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_7

    TeHSER_e_RngEqnSel rtb_TmpSignalConversionAtVeHSER_e_RngE_h;

#endif

    sint32 rtb_Subtraction5_e_tmp;
    float32 tmp_0[54];
    float32 VeOHSI_n_NTurb_V;
    float32 rtb_TmpSignalConversionAtVeMSPR_n_P2Sp_o;
    TeSCOR_e_OptGear_SG tmp_1[4];

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    TeOHSR_e_VLE_DriveStat rtb_Comparison6_f_tmp;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    sint32 rtb_UnitDelay_hr_tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeTISR_n_InputSpeed' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value
        (&rtb_TmpSignalConversionAtVeTISR_n_Inpu_d);

    /* SignalConversion generated from: '<S1>/VaOSMR_n_NTurb_FromNo' incorporates:
     *  Inport: '<Root>/VaOSMR_n_NTurb_FromNo'
     */
    (void)Rte_Read_VaOSMR_n_NTurb_FromNo_Value
        (rtb_TmpSignalConversionAtVaOSMR_n_NTur_h);

    /* SignalConversion generated from: '<S1>/VeMSPR_n_MtrB_Spd' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
     */
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value
        (&rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b);

    /* SignalConversion generated from: '<S1>/VeOSMR_e_TargetGear' incorporates:
     *  Inport: '<Root>/VeOSMR_e_TargetGear'
     */
    (void)Rte_Read_VeOSMR_e_TargetGear_Value
        (&rtb_TmpSignalConversionAtVeOSMR_e_Targ_a);

    /* SignalConversion generated from: '<S1>/VeOSMR_e_ActualGear' incorporates:
     *  Inport: '<Root>/VeOSMR_e_ActualGear'
     */
    (void)Rte_Read_VeOSMR_e_ActualGear_Value
        (&rtb_TmpSignalConversionAtVeOSMR_e_Actu_o);

    /* SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a);

    /* SignalConversion generated from: '<S1>/VeTRNR_e_ILEStat' incorporates:
     *  Inport: '<Root>/VeTRNR_e_ILEStat'
     */
    (void)Rte_Read_VeTRNR_e_ILEStat_Value
        (&rtb_TmpSignalConversionAtVeTRNR_e_ILESta);

    /* SignalConversion generated from: '<S1>/VeOSMR_e_SteadyTransSt' incorporates:
     *  Inport: '<Root>/VeOSMR_e_SteadyTransSt'
     */
    (void)Rte_Read_VeOSMR_e_SteadyTransSt_Value
        (&rtb_TmpSignalConversionAtVeOSMR_e_Stea_i);

    /* SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        (&rtb_TmpSignalConversionAtVeAPSR_Pct_Ac_c);

    /* SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
     */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value
        (&rtb_TmpSignalConversionAtVeCSVR_v_VehSpd);

    /* SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd' incorporates:
     *  Inport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd'
     */
    (void)Rte_Read_VeCSVR_n_TransOutSpdSgndFltrd_Value
        (&rtb_TmpSignalConversionAtVeCSVR_n_TransO);

    /* SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_ActualGear'
     */
    (void)Rte_Read_VeTRNR_e_ActualGear_Value
        (&rtb_TmpSignalConversionAtVeTRNR_e_Actu_c);

    /* SignalConversion generated from: '<S1>/VeTTQR_M_SumTrqStaticNoCL' incorporates:
     *  Inport: '<Root>/VeTTQR_M_SumTrqStaticNoCL'
     */
    (void)Rte_Read_VeTTQR_M_SumTrqStaticNoCL_Value
        (&rtb_TmpSignalConversionAtVeTTQR_M_SumTrq);

    /* SignalConversion generated from: '<S1>/VeVTVR_M_LoadTorqFront_Opt' incorporates:
     *  Inport: '<Root>/VeVTVR_M_LoadTorqFront_Opt'
     */
    (void)Rte_Read_VeVTVR_M_LoadTorqFront_Opt_Value
        (&rtb_TmpSignalConversionAtVeVTVR_M_Load_e);

    /* SignalConversion generated from: '<S1>/VeDTRR_e_SumFWIDFst' incorporates:
     *  Inport: '<Root>/VeDTRR_e_SumFWIDFst'
     */
    (void)Rte_Read_VeDTRR_e_SumFWIDFst_Value
        (&rtb_TmpSignalConversionAtVeDTRR_e_SumFWI);

    /* SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&rtb_TmpSignalConversionAtVeESSR_e_EngSta);

    /* SignalConversion generated from: '<S1>/VeOSMR_e_HRSR_State' incorporates:
     *  Inport: '<Root>/VeOSMR_e_HRSR_State'
     */
    (void)Rte_Read_VeOSMR_e_HRSR_State_Value
        (&rtb_TmpSignalConversionAtVeOSMR_e_HRSR_S);

    /* SignalConversion generated from: '<S1>/VeTISR_n_TransMinInputSpd' incorporates:
     *  Inport: '<Root>/VeTISR_n_TransMinInputSpd'
     */
    (void)Rte_Read_VeTISR_n_TransMinInputSpd_Value
        (&rtb_TmpSignalConversionAtVeTISR_n_TransM);

    /* SignalConversion generated from: '<S1>/VeVSDR_n_NTurb' incorporates:
     *  Inport: '<Root>/VeVSDR_n_NTurb'
     */
    (void)Rte_Read_VeVSDR_n_NTurb_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_NTur_j);

    /* SignalConversion generated from: '<S1>/VeVSDR_dn_StratNodot' incorporates:
     *  SignalConversion generated from: '<S1>/VeCSVR_b_NTurbFA'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    /* SignalConversion generated from: '<S1>/VeVSDR_dn_StratNodot' incorporates:
     *  Inport: '<Root>/VeVSDR_dn_StratNodot'
     */
    (void)Rte_Read_VeVSDR_dn_StratNodot_Value
        (&rtb_TmpSignalConversionAtVeVSDR_dn_Str_f);

    /* SignalConversion generated from: '<S1>/VeCSVR_b_NTurbFA' incorporates:
     *  Inport: '<Root>/VeCSVR_b_NTurbFA'
     */
    (void)Rte_Read_VeCSVR_b_NTurbFA_Value
        (&rtb_TmpSignalConversionAtVeCSVR_b_NTurbF);

#endif

    /* End of SignalConversion generated from: '<S1>/VeVSDR_dn_StratNodot' */

    /* SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp' incorporates:
     *  Inport: '<Root>/VeTFTR_T_TransOilTemp'
     */
    (void)Rte_Read_VeTFTR_T_TransOilTemp_Value
        (&rtb_TmpSignalConversionAtVeTFTR_T_Tran_b);

    /* SignalConversion generated from: '<S1>/VeOSMR_n_TransMinEngSpd' incorporates:
     *  Inport: '<Root>/VeOSMR_n_TransMinEngSpd'
     */
    (void)Rte_Read_VeOSMR_n_TransMinEngSpd_Value
        (&rtb_TmpSignalConversionAtVeOSMR_n_Tran_f);

    /* SignalConversion generated from: '<S1>/VeFWDR_e_Tcase_Stat' incorporates:
     *  Inport: '<Root>/VeFWDR_e_Tcase_Stat'
     */
    (void)Rte_Read_VeFWDR_e_Tcase_Stat_Value
        (&rtb_TmpSignalConversionAtVeFWDR_e_Tcas_d);

    /* SignalConversion generated from: '<S1>/VeRGNR_M_DrvIntndTotBrk_Stgc' incorporates:
     *  Inport: '<Root>/VeRGNR_M_DrvIntndTotBrk_Stgc'
     */
    (void)Rte_Read_VeRGNR_M_DrvIntndTotBrk_Stgc_Value
        (&rtb_TmpSignalConversionAtVeRGNR_M_DrvInt);

    /* SignalConversion generated from: '<S1>/VeMSPR_n_P2SpdControl_TgtSpd' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    /* SignalConversion generated from: '<S1>/VeMSPR_n_P2SpdControl_TgtSpd' incorporates:
     *  Inport: '<Root>/VeMSPR_n_P2SpdControl_TgtSpd'
     */
    (void)Rte_Read_VeMSPR_n_P2SpdControl_TgtSpd_Value
        (&rtb_TmpSignalConversionAtVeMSPR_n_P2Sp_o);

#endif

    /* End of SignalConversion generated from: '<S1>/VeMSPR_n_P2SpdControl_TgtSpd' */

    /* SignalConversion generated from: '<S1>/DsrdRngSt_Read' incorporates:
     *  Merge: '<Root>/DsrdRngSt_IRV_Merge'
     */
    rtb_TmpSignalConversionAtDsrdRngSt_ReadO =
        Rte_IrvRead_OHSR_MedTEB_DsrdRngSt_write_IRV();

    /* SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_7

    /* SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngEqnSel'
     */
    (void)Rte_Read_VeHSER_e_RngEqnSel_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_RngE_h);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeHSER_e_RngSt' */
    (void)Rte_Read_VeHSER_e_RngSt_Value(&tmpRead_j);

    /* Inport: '<Root>/VaOSMR_n_NtiMin_EVN' */
    (void)Rte_Read_VaOSMR_n_NtiMin_EVN_Value(tmpRead_i);

    /* Inport: '<Root>/VaOSMR_n_NtiMin_EVM' */
    (void)Rte_Read_VaOSMR_n_NtiMin_EVM_Value(tmpRead_h);

    /* Inport: '<Root>/VaOSMR_n_NtiMin_Gr' */
    (void)Rte_Read_VaOSMR_n_NtiMin_Gr_Value(tmpRead_g);

    /* Inport: '<Root>/VaOSMR_n_NtiMin_MB' */
    (void)Rte_Read_VaOSMR_n_NtiMin_MB_Value(tmpRead_f);

    /* Inport: '<Root>/VaOSMR_n_NtiMin_MA' */
    (void)Rte_Read_VaOSMR_n_NtiMin_MA_Value(tmpRead_e);

    /* Inport: '<Root>/VaOSMR_n_NtiMin_N' */
    (void)Rte_Read_VaOSMR_n_NtiMin_N_Value(tmpRead_d);

    /* Inport: '<Root>/VaOSMR_n_NtiMax_EVN' */
    (void)Rte_Read_VaOSMR_n_NtiMax_EVN_Value(tmpRead_c);

    /* Inport: '<Root>/VaOSMR_n_NtiMax_EVM' */
    (void)Rte_Read_VaOSMR_n_NtiMax_EVM_Value(tmpRead_b);

    /* Inport: '<Root>/VaOSMR_n_NtiMax_Gr' */
    (void)Rte_Read_VaOSMR_n_NtiMax_Gr_Value(tmpRead_a);

    /* Inport: '<Root>/VaOSMR_n_NtiMax_MB' */
    (void)Rte_Read_VaOSMR_n_NtiMax_MB_Value(tmpRead_9);

    /* Inport: '<Root>/VaOSMR_n_NtiMax_MA' */
    (void)Rte_Read_VaOSMR_n_NtiMax_MA_Value(tmpRead_8);

    /* Inport: '<Root>/VaOSMR_n_NtiMax_N' */
    (void)Rte_Read_VaOSMR_n_NtiMax_N_Value(tmpRead_7);

    /* Inport: '<Root>/VeMSPR_b_MtrB_SpdFA' */
    (void)Rte_Read_VeMSPR_b_MtrB_SpdFA_Value(&tmp);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeTRNR_e_TargetGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_TargetGear'
     */
    (void)Rte_Read_VeTRNR_e_TargetGear_Value
        (&rtb_TmpSignalConversionAtVeTRNR_e_Targ_i);

    /* SignalConversion generated from: '<S1>/ShftEfftRdctn_Read' incorporates:
     *  Merge: '<Root>/ShftEfftRdctn_IRV_Merge'
     */
    rtb_TmpSignalConversionAtShftEfftRdctn_R =
        Rte_IrvRead_OHSR_MedTEB_ShftEfftRdctn_write_IRV();

    /* SignalConversion generated from: '<S1>/ShftEfft_N4H_Read' incorporates:
     *  Merge: '<Root>/ShftEfft_N4H_IRV_Merge'
     */
    rtb_TmpSignalConversionAtShftEfft_N4H_Re =
        Rte_IrvRead_OHSR_MedTEB_ShftEfft_N4H_write_IRV();

    /* SignalConversion generated from: '<S1>/VeICSR_M_EngCL' incorporates:
     *  Inport: '<Root>/VeICSR_M_EngCL'
     */
    (void)Rte_Read_VeICSR_M_EngCL_Value
        (&rtb_TmpSignalConversionAtVeICSR_M_EngCLO);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OHSI_InputProcessing'
     */
    /* If: '<S5>/If' incorporates:
     *  Constant: '<S528>/Calib'
     *  Logic: '<S5>/Logical1'
     *  Logic: '<S5>/Logical6'
     */
    if ((HeOHSR_b_UseP2Spd_ILE) && (!tmp))
    {
        /* Outputs for IfAction SubSystem: '<S5>/P2Spd_ILE' incorporates:
         *  ActionPort: '<S529>/Action Port'
         */
        /* Merge: '<S5>/Merge' incorporates:
         *  Gain: '<S533>/Gain'
         */
        VeOHSI_n_InputSpd_ILE = rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b;

        /* End of Outputs for SubSystem: '<S5>/P2Spd_ILE' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S5>/EngSpd_ILE' incorporates:
         *  ActionPort: '<S521>/Action Port'
         */
        /* Merge: '<S5>/Merge' incorporates:
         *  Gain: '<S532>/Gain'
         */
        VeOHSI_n_InputSpd_ILE = rtb_TmpSignalConversionAtVeTISR_n_Inpu_d;

        /* End of Outputs for SubSystem: '<S5>/EngSpd_ILE' */
    }

    /* End of If: '<S5>/If' */

    /* Saturate: '<S5>/Saturation' incorporates:
     *  DataTypeConversion: '<S5>/Data Type Conversion'
     */
    if (((sint32)rtb_TmpSignalConversionAtVeOSMR_e_Actu_o) > 8)
    {
        /* Saturate: '<S5>/Saturation' */
        rtb_Saturation = 8;
    }
    else
    {
        /* Saturate: '<S5>/Saturation' */
        rtb_Saturation = (sint16)rtb_TmpSignalConversionAtVeOSMR_e_Actu_o;
    }

    /* End of Saturate: '<S5>/Saturation' */

    /* Selector: '<S5>/Selector' incorporates:
     *  DataTypeConversion: '<S5>/Data Type Conversion1'
     *  Saturate: '<S5>/Saturation1'
     */
    if (((sint32)rtb_TmpSignalConversionAtVeOSMR_e_Targ_a) > 8)
    {
        rtb_DataTypeConversion3_h = 8;
    }
    else
    {
        rtb_DataTypeConversion3_h = (sint16)
            rtb_TmpSignalConversionAtVeOSMR_e_Targ_a;
    }

    /* Selector: '<S5>/Selector' */
    VeOHSI_n_NTurb_V =
        rtb_TmpSignalConversionAtVaOSMR_n_NTur_h[rtb_DataTypeConversion3_h];

    /* Logic: '<S5>/Logical2' incorporates:
     *  Constant: '<S526>/Calib'
     */
    tmp = HaOHSR_b_ParallelStates[0];
    for (rtb_Subtraction5_e_tmp = 0; rtb_Subtraction5_e_tmp < 67;
            rtb_Subtraction5_e_tmp++)
    {
        tmp = (tmp || (HaOHSR_b_ParallelStates[rtb_Subtraction5_e_tmp + 1]));
    }

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeBACR_Pct_TargetSOC_Stgc' */
    (void)Rte_Read_VeBACR_Pct_TargetSOC_Stgc_Value(&tmpRead_y);

    /* Inport: '<Root>/VeHSER_e_HTDR_State' */
    (void)Rte_Read_VeHSER_e_HTDR_State_Value(&tmpRead_k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OHSI_InputProcessing'
     */
    /* Selector: '<S5>/Selector4' incorporates:
     *  Constant: '<S524>/Calib'
     *  DataTypeConversion: '<S5>/Data Type Conversion2'
     *  Inport: '<Root>/VeHSER_e_RngSt'
     */
    VeOHSR_b_Neutral = HaOHSR_b_ISNeutral[(sint16)tmpRead_j];

    /* Selector: '<S5>/Selector2' incorporates:
     *  Constant: '<S523>/Calib'
     *  DataTypeConversion: '<S5>/Data Type Conversion3'
     *  Inport: '<Root>/VeHSER_e_HTDR_State'
     */
    VeOHSR_b_RngEqnSelToNeutral = HaOHSR_b_EnblVLENeutrl_HTDRRngSt[(tmpRead_k)];

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OHSC_Creep_Launch_Determination'
     */
    /* Logic: '<S311>/Logical14' incorporates:
     *  Constant: '<S321>/Constant'
     *  RelationalOperator: '<S10>/Comparison15'
     *  UnitDelay: '<S10>/Unit Delay'
     */
    rtb_Logical14_i = (((uint32)OHSR_ac_DW.UnitDelay_DSTATE_hs) !=
                       CeOHSR_e_LaunchState);

    /* Switch: '<S311>/Switch1' incorporates:
     *  Constant: '<S359>/Calib'
     *  Constant: '<S360>/Calib'
     */
    if (rtb_Logical14_i)
    {
        rtb_Sum3_h = KeOHSR_v_CreepVehSpdThres;
    }
    else
    {
        rtb_Sum3_h = KeOHSR_v_MinLaunchVehSpdThres;
    }

    /* End of Switch: '<S311>/Switch1' */

    /* Logic: '<S311>/Logical' incorporates:
     *  Abs: '<S319>/Abs'
     *  Constant: '<S346>/Calib'
     *  Constant: '<S347>/Calib'
     *  Logic: '<S311>/Logical11'
     *  RelationalOperator: '<S311>/Comparison12'
     *  RelationalOperator: '<S311>/Comparison13'
     *  RelationalOperator: '<S311>/Comparison14'
     */
    rtb_Logical_h = (((rtb_TmpSignalConversionAtVeTRNR_e_Actu_c <
                       KeOHSR_e_CrpLowerGearThres) ||
                      (rtb_TmpSignalConversionAtVeTRNR_e_Actu_c >=
                       KeOHSR_e_CrpUpperGearThres)) || (fabsf
                      (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd) <= rtb_Sum3_h));

    /* Switch: '<S372>/Switch6' incorporates:
     *  DataStoreRead: '<S372>/Data Store Read1'
     *  DataStoreWrite: '<S372>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S382>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S382>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S382>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S383>/FixPt Bitwise Operator1'
     */
    if (rtb_Logical_h)
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(VeOHSR_g_CreepCndtn_DS | ((uint16)1));
    }
    else
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_CreepCndtn_DS)) | ((uint16)1))));
    }

    /* End of Switch: '<S372>/Switch6' */

    /* Logic: '<S311>/Logical16' incorporates:
     *  Constant: '<S323>/Constant'
     *  Constant: '<S324>/Constant'
     *  Constant: '<S339>/Calib'
     *  Logic: '<S311>/Logical18'
     *  RelationalOperator: '<S311>/Comparison21'
     *  RelationalOperator: '<S311>/Comparison23'
     */
    rtb_Logical16 = ((KeOHSR_b_Dsbl_ILEChk_ForIdle) || ((((uint32)
                        rtb_TmpSignalConversionAtVeTRNR_e_ILESta) !=
                       CeHCCR_e_ClInvalid) && (((uint32)
                        rtb_TmpSignalConversionAtVeTRNR_e_ILESta) !=
                       CeHCCR_e_ClReleased)));

    /* Switch: '<S373>/Switch6' incorporates:
     *  DataStoreRead: '<S373>/Data Store Read1'
     *  DataStoreWrite: '<S373>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S384>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S384>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S384>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S385>/FixPt Bitwise Operator1'
     */
    if (rtb_Logical16)
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(VeOHSR_g_CreepCndtn_DS | ((uint16)2));
    }
    else
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_CreepCndtn_DS)) | ((uint16)2))));
    }

    /* End of Switch: '<S373>/Switch6' */

    /* Selector: '<S311>/Selector1' incorporates:
     *  Constant: '<S335>/Calib'
     */
    VeOHSR_n_Creep2Launch_Thresh = KaOHSR_n_Creep2Launch_SpdThresh
        [(rtb_TmpSignalConversionAtVeTRNR_e_Actu_c)];

    /* Outputs for Atomic SubSystem: '<S7>/EngOnOff' */
    /* Logic: '<S14>/Logical1' incorporates:
     *  Constant: '<S23>/Constant'
     *  Constant: '<S24>/Constant'
     *  Constant: '<S25>/Constant'
     *  Constant: '<S26>/Constant'
     *  Constant: '<S27>/Constant'
     *  Constant: '<S28>/Calib'
     *  Constant: '<S29>/Calib'
     *  Logic: '<S14>/Logical2'
     *  Logic: '<S14>/Logical3'
     *  RelationalOperator: '<S14>/Comparison1'
     *  RelationalOperator: '<S14>/Comparison2'
     *  RelationalOperator: '<S14>/Comparison3'
     *  RelationalOperator: '<S14>/Comparison4'
     *  RelationalOperator: '<S14>/Comparison5'
     */
    VeOHSR_b_IdleSpdCalcEngOn = ((KeOHSR_b_EngIdleSpdArbEnbl) ||
        ((((((KeOHSR_b_MtrBIdle_OnlyInEV) || (((uint32)
        rtb_TmpSignalConversionAtDsrdRngSt_ReadO) == CeOHSR_e_RngSel_M2)) ||
            (((uint32)rtb_TmpSignalConversionAtDsrdRngSt_ReadO) ==
             CeOHSR_e_RngSel_G2)) || (((uint32)
        rtb_TmpSignalConversionAtVeOSMR_e_HRSR_S) != CeOSMR_e_N_State)) &&
          (((uint32)rtb_TmpSignalConversionAtVeESSR_e_EngSta) != CeESSR_e_EngOff))
         && (CeOSMR_e_M1_State != ((uint32)
        rtb_TmpSignalConversionAtVeOSMR_e_HRSR_S))));

    /* End of Outputs for SubSystem: '<S7>/EngOnOff' */

    /* Switch: '<S311>/Switch2' incorporates:
     *  Constant: '<S345>/Calib'
     */
    if (KeOHSR_b_ILECreepCondn_UseAbsNo)
    {
        /* Switch: '<S8>/Switch' incorporates:
         *  Abs: '<S311>/Abs'
         */
        rtb_Sum3_h = fabsf(rtb_TmpSignalConversionAtVeCSVR_n_TransO);
    }
    else
    {
        /* Switch: '<S8>/Switch' */
        rtb_Sum3_h = rtb_TmpSignalConversionAtVeCSVR_n_TransO;
    }

    /* End of Switch: '<S311>/Switch2' */

    /* Switch: '<S368>/Switch2' incorporates:
     *  Constant: '<S406>/Constant'
     *  Constant: '<S407>/Constant'
     *  Logic: '<S368>/Logical14'
     *  RelationalOperator: '<S368>/Comparison1'
     *  RelationalOperator: '<S368>/Comparison18'
     */
    if ((CeOSMR_e_TransSt_Park != ((uint32)
            rtb_TmpSignalConversionAtVeOSMR_e_Stea_i)) && (((uint32)
            rtb_TmpSignalConversionAtVeOSMR_e_Stea_i) !=
            CeOSMR_e_TransSt_Neutral))
    {
        /* Switch: '<S368>/Switch2' incorporates:
         *  Constant: '<S404>/Calib'
         *  Selector: '<S368>/Selector'
         */
        rtb_Switch2_hu = KaOHSR_n_RollingIdle_NoLim_Drv_ILEStat_No
            [(rtb_TmpSignalConversionAtVeTRNR_e_ILESta)];
    }
    else
    {
        /* Switch: '<S368>/Switch2' incorporates:
         *  Constant: '<S405>/Calib'
         */
        rtb_Switch2_hu = KeOHSR_n_RollingIdle_NoLim_PN;
    }

    /* End of Switch: '<S368>/Switch2' */

    /* Switch: '<S368>/Switch3' */
    if (rtb_Logical14_i)
    {
        /* Switch: '<S368>/Switch3' incorporates:
         *  Constant: '<S348>/Calib'
         *  Sum: '<S368>/Sum2'
         */
        VeOHSC_n_RollingIdle_OutSpdTh = KeOHSR_n_Creep2Launch_RollIdleHyst +
            rtb_Switch2_hu;
    }
    else
    {
        /* Switch: '<S368>/Switch3' incorporates:
         *  Constant: '<S354>/Calib'
         *  Sum: '<S368>/Sum3'
         */
        VeOHSC_n_RollingIdle_OutSpdTh = rtb_Switch2_hu +
            KeOHSR_n_Launch2Creep_RollIdleHyst;
    }

    /* End of Switch: '<S368>/Switch3' */

    /* Logic: '<S371>/Logical1' incorporates:
     *  RelationalOperator: '<S311>/Comparison17'
     */
    rtb_Logical1_jm = (rtb_Sum3_h <= VeOHSC_n_RollingIdle_OutSpdTh);

    /* Logic: '<S319>/Logical4' incorporates:
     *  Constant: '<S349>/Calib'
     *  RelationalOperator: '<S311>/Comparison11'
     */
    rtb_Logical4_fg = (rtb_Sum3_h <= KeOHSR_n_Creep_OutSpdTh);

    /* Logic: '<S311>/Logical23' */
    VeOHSR_b_StrSpd = (rtb_Logical1_jm || rtb_Logical4_fg);

    /* SignalConversion generated from: '<S7>/XeOHSR_b_EngCalc_Enbl' incorporates:
     *  Inport: '<Root>/VaSCOR_M_OptInputTorqueMA'
     *  Inport: '<Root>/VaSCOR_M_OptInputTorqueMB'
     *  Inport: '<Root>/VaSCOR_n_InputSpeedDsrdMA'
     *  Inport: '<Root>/VaSCOR_n_InputSpeedDsrdMB'
     *  Inport: '<Root>/VeCSVR_dn_TransOutSpddot'
     *  Inport: '<Root>/VeEOCR_b_ColdCtrl_Raw'
     *  Inport: '<Root>/VeOSMR_b_LwrdCreepEna'
     *  Inport: '<Root>/VeOSMR_d_FnctnEnblReg'
     *  Inport: '<Root>/VeSCOR_n_IdleSpeedMA'
     *  Inport: '<Root>/VeSCOR_n_IdleSpeedMB'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    /* Outputs for Atomic SubSystem: '<S7>/IdleSpdArbitration' */
    /* Outputs for Atomic SubSystem: '<S19>/Idle_Spd_Max' */
    /* Switch: '<S147>/Switch2' incorporates:
     *  Constant: '<S151>/Constant'
     *  Constant: '<S152>/Constant'
     *  Constant: '<S153>/Constant'
     *  Logic: '<S147>/Logical1'
     *  RelationalOperator: '<S147>/Comparison1'
     *  RelationalOperator: '<S147>/Comparison2'
     *  RelationalOperator: '<S147>/Comparison5'
     *  Switch: '<S147>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeTRNR_e_ILESta) ==
            CeHCCR_e_ClReleased)
    {
        /* Outputs for Function Call SubSystem: '<S1>/OHSI_InputProcessing' */
        /* Switch: '<S147>/Switch2' incorporates:
         *  Constant: '<S156>/Calib'
         *  DataTypeConversion: '<S5>/Data Type Conversion'
         *  Selector: '<S147>/Selector1'
         */
        VeOHSR_n_IdleSpdMax = KaOHSR_n_IdleSpd_Max_UL
            [(rtb_TmpSignalConversionAtVeOSMR_e_Actu_o)];

        /* End of Outputs for SubSystem: '<S1>/OHSI_InputProcessing' */
    }
    else if ((((uint32)rtb_TmpSignalConversionAtVeTRNR_e_ILESta) ==
              CeHCCR_e_ClActuated) || (((uint32)
               rtb_TmpSignalConversionAtVeTRNR_e_ILESta) == CeHCCR_e_ClSynched))
    {
        /* Outputs for Function Call SubSystem: '<S1>/OHSI_InputProcessing' */
        /* Switch: '<S147>/Switch2' incorporates:
         *  Constant: '<S155>/Calib'
         *  DataTypeConversion: '<S5>/Data Type Conversion'
         *  Selector: '<S147>/Selector2'
         *  Switch: '<S147>/Switch1'
         */
        VeOHSR_n_IdleSpdMax = KaOHSR_n_IdleSpd_Max_PL
            [(rtb_TmpSignalConversionAtVeOSMR_e_Actu_o)];

        /* End of Outputs for SubSystem: '<S1>/OHSI_InputProcessing' */
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/OHSI_InputProcessing' */
        /* Switch: '<S147>/Switch2' incorporates:
         *  Constant: '<S154>/Calib'
         *  DataTypeConversion: '<S5>/Data Type Conversion'
         *  Selector: '<S147>/Selector3'
         *  Switch: '<S147>/Switch1'
         */
        VeOHSR_n_IdleSpdMax = KaOHSR_n_IdleSpd_Max_FL
            [(rtb_TmpSignalConversionAtVeOSMR_e_Actu_o)];

        /* End of Outputs for SubSystem: '<S1>/OHSI_InputProcessing' */
    }

    /* End of Switch: '<S147>/Switch2' */
    /* End of Outputs for SubSystem: '<S19>/Idle_Spd_Max' */

    /* Outputs for Atomic SubSystem: '<S19>/Turbine_Speed' */
    /* Outputs for Atomic SubSystem: '<S150>/SIP' */
    /* Logic: '<S230>/Logical9' incorporates:
     *  Constant: '<S250>/Constant'
     *  Constant: '<S252>/Calib'
     *  DataTypeConversion: '<S230>/Data Type Conversion'
     *  RelationalOperator: '<S230>/Comparison'
     *  RelationalOperator: '<S230>/Comparison1'
     *  RelationalOperator: '<S230>/Comparison6'
     *  Selector: '<S230>/Selector1'
     *  SignalConversion generated from: '<S1>/VeOSMR_e_ActualGear'
     *  UnitDelay: '<S230>/Unit Delay'
     */
    VeOHSR_b_SIP_CurTrgGR = ((((KaOHSR_b_SIP_currentGear_Enbl
        [(rtb_TmpSignalConversionAtVeOSMR_e_Actu_o)]) &&
        (rtb_TmpSignalConversionAtVeOSMR_e_Actu_o >
         rtb_TmpSignalConversionAtVeOSMR_e_Targ_a)) && (((uint32)
        rtb_TmpSignalConversionAtVeOSMR_e_Targ_a) > CeTRNR_e_Neutral)) &&
        (rtb_TmpSignalConversionAtVeOSMR_e_Targ_a ==
         OHSR_ac_DW.UnitDelay_DSTATE_gz5));

    /* Switch: '<S230>/Switch6' */
    if (VeOHSR_b_SIP_CurTrgGR)
    {
        /* Outputs for Function Call SubSystem: '<S1>/OHSI_InputProcessing' */
        /* Selector: '<S5>/Selector3' */
        rtb_Sum3_h = rtb_TmpSignalConversionAtVaOSMR_n_NTur_h[rtb_Saturation];

        /* Sum: '<S230>/Sum2' incorporates:
         *  Selector: '<S5>/Selector3'
         */
        rtb_Sum2_oy = rtb_TmpSignalConversionAtVeVSDR_n_NTur_j - rtb_Sum3_h;

        /* Sum: '<S230>/Sum3' */
        rtb_Sum3_h = VeOHSI_n_NTurb_V - rtb_Sum3_h;

        /* End of Outputs for SubSystem: '<S1>/OHSI_InputProcessing' */

        /* Outputs for Atomic SubSystem: '<S230>/Protected Division' */
        /* Switch: '<S260>/Switch1' incorporates:
         *  Constant: '<S260>/Constant Value'
         *  Constant: '<S260>/Constant Value1'
         *  Constant: '<S260>/Constant Value2'
         *  Constant: '<S260>/Constant Value3'
         *  Logic: '<S260>/AND'
         *  RelationalOperator: '<S260>/Greater Than or Equal '
         *  RelationalOperator: '<S260>/Greater Than or Equal 1'
         *  RelationalOperator: '<S260>/Not Equal'
         *  RelationalOperator: '<S260>/Not Equal1'
         *  Switch: '<S260>/Switch2'
         *  Switch: '<S260>/Switch3'
         */
        if ((rtb_Sum2_oy != 0.0F) && (rtb_Sum3_h != 0.0F))
        {
            /* Switch: '<S8>/Switch' incorporates:
             *  Product: '<S260>/Division'
             *  Switch: '<S260>/Switch1'
             */
            rtb_Sum3_h = rtb_Sum2_oy / rtb_Sum3_h;
        }
        else if (rtb_Sum2_oy > 0.0F)
        {
            /* Switch: '<S260>/Switch2' incorporates:
             *  Constant: '<S260>/MAXFLOAT'
             *  Switch: '<S8>/Switch'
             */
            rtb_Sum3_h = 3.402823466E+38F;
        }
        else if (rtb_Sum2_oy < 0.0F)
        {
            /* Switch: '<S260>/Switch3' incorporates:
             *  Constant: '<S260>/MINFLOAT'
             *  Switch: '<S260>/Switch2'
             *  Switch: '<S8>/Switch'
             */
            rtb_Sum3_h = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S8>/Switch' incorporates:
             *  Constant: '<S260>/Constant Value4'
             *  Switch: '<S260>/Switch2'
             *  Switch: '<S260>/Switch3'
             */
            rtb_Sum3_h = 0.0F;
        }

        /* End of Switch: '<S260>/Switch1' */
        /* End of Outputs for SubSystem: '<S230>/Protected Division' */
    }
    else
    {
        /* Switch: '<S8>/Switch' incorporates:
         *  Constant: '<S230>/Constant Value1'
         */
        rtb_Sum3_h = 1.0F;
    }

    /* End of Switch: '<S230>/Switch6' */

    /* RelationalOperator: '<S230>/Comparison10' incorporates:
     *  Constant: '<S253>/Calib'
     */
    rtb_Comparison10_f = (rtb_Sum3_h <= KeOHSR_Pct_SIP_ShiftCompltOffs);

    /* RelationalOperator: '<S230>/Comparison9' incorporates:
     *  Abs: '<S230>/Abs'
     *  Constant: '<S257>/Calib'
     *  Sum: '<S230>/Sum1'
     */
    VeOHSR_b_SIP_TurbSlip = (fabsf(rtb_TmpSignalConversionAtVeTISR_n_Inpu_d -
        rtb_TmpSignalConversionAtVeVSDR_n_NTur_j) <= KeOHSR_n_SIP_TurbSlipThres);

    /* Outputs for Atomic SubSystem: '<S230>/DelayTimeConst' */
    /* VariantMerge generated from: '<S4>/XeOHSR_b_IdleSpdBSG_Enbl' incorporates:
     *  Lookup_n-D: '<S265>/Vector'
     *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
     */
    rtb_Sum2_oy = look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeTFTR_T_Tran_b,
        ((const float32 *)&(KxOHSR_T_SIP_DelayTime_PredGrSpd_Idx[0])), ((const
        float32 *)&(KtOHSR_T_SIP_DelayTime_PredGrSpd_Idx[0])), 9U);

    /* Switch: '<S8>/Switch' incorporates:
     *  Rounding: '<S247>/Rounding4'
     */
    rtb_Sum3_h = floorf(rtb_Sum2_oy);

    /* Selector: '<S247>/Selector3' incorporates:
     *  Constant: '<S264>/Calib'
     *  DataTypeConversion: '<S247>/Data Type Conversion'
     *  Selector: '<S247>/Selector1'
     *  Selector: '<S247>/Selector2'
     *  SignalConversion generated from: '<S1>/VeOSMR_e_TargetGear'
     */
    rtb_Subtraction5_e_tmp = 10 * ((sint32)
        rtb_TmpSignalConversionAtVeOSMR_e_Targ_a);

    /* Selector: '<S247>/Selector2' incorporates:
     *  Constant: '<S264>/Calib'
     *  Rounding: '<S247>/Rounding5'
     *  Selector: '<S247>/Selector1'
     */
    rtb_Switch2_hu = KaOHSR_T_SIP_DelayTime_PredGrSpd[rtb_Subtraction5_e_tmp +
        ((sint32)ceilf(rtb_Sum2_oy))];

    /* Sum: '<S247>/Subtraction5' incorporates:
     *  Constant: '<S264>/Calib'
     *  Product: '<S247>/Multiplication2'
     *  Selector: '<S247>/Selector1'
     *  Selector: '<S247>/Selector2'
     *  Selector: '<S247>/Selector3'
     *  Sum: '<S247>/Subtraction4'
     *  Sum: '<S247>/Sum3'
     */
    rtb_Sum2_oy = ((KaOHSR_T_SIP_DelayTime_PredGrSpd[rtb_Subtraction5_e_tmp +
                    ((sint32)rtb_Sum3_h)] - rtb_Switch2_hu) * (rtb_Sum2_oy -
                    rtb_Sum3_h)) + rtb_Switch2_hu;

    /* End of Outputs for SubSystem: '<S230>/DelayTimeConst' */

    /* Logic: '<S230>/Logical8' incorporates:
     *  Constant: '<S249>/Constant'
     *  Constant: '<S254>/Calib'
     *  Constant: '<S256>/Calib'
     *  RelationalOperator: '<S230>/Comparison2'
     *  RelationalOperator: '<S230>/Comparison3'
     *  RelationalOperator: '<S230>/Comparison4'
     *  UnitDelay: '<S230>/Unit Delay1'
     */
    VeOHSR_b_SIP_StSpdOil = ((((((uint32)OHSR_ac_DW.UnitDelay1_DSTATE_nf) !=
        CeOHSR_e_LaunchState) && (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd >=
        KeOHSR_n_SIP_SpdThresh)) && (VeOHSR_b_SIP_CurTrgGR)) &&
        (rtb_TmpSignalConversionAtVeTFTR_T_Tran_b >= KeOHSR_T_SIP_TransOil_Thrsh));

    /* Outputs for Atomic SubSystem: '<S230>/EdgeBi2' */
    /* RelationalOperator: '<S248>/Not Equal' incorporates:
     *  UnitDelay: '<S248>/Unit Delay'
     */
    rtb_NotEqual_j = (VeOHSR_b_SIP_StSpdOil != OHSR_ac_DW.UnitDelay_DSTATE_js);

    /* Update for UnitDelay: '<S248>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_js = VeOHSR_b_SIP_StSpdOil;

    /* End of Outputs for SubSystem: '<S230>/EdgeBi2' */

    /* Outputs for Atomic SubSystem: '<S230>/Turn On Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S263>/EdgeRising' */
    /* UnitDelay: '<S300>/Unit Delay' incorporates:
     *  UnitDelay: '<S268>/Unit Delay'
     */
    rtb_UnitDelay_dm = OHSR_ac_DW.UnitDelay_DSTATE_mai;

    /* Update for UnitDelay: '<S268>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_mai = VeOHSR_b_SIP_StSpdOil;

    /* Switch: '<S263>/Switch1' incorporates:
     *  Constant: '<S251>/Calib'
     *  Constant: '<S263>/Constant Value1'
     *  Logic: '<S263>/OR'
     *  Logic: '<S263>/OR1'
     *  Logic: '<S268>/AND'
     *  Logic: '<S268>/OR1'
     *  MinMax: '<S263>/Minimum'
     *  Sum: '<S263>/Summation'
     *  UnitDelay: '<S263>/Unit Delay'
     */
    if ((!VeOHSR_b_SIP_StSpdOil) || ((VeOHSR_b_SIP_StSpdOil) &&
            (!rtb_UnitDelay_dm)))
    {
        OHSR_ac_DW.UnitDelay_DSTATE_eh = 0.0F;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_eh = fminf(rtb_Sum2_oy, HeOHSR_t_Idle_dT +
            OHSR_ac_DW.UnitDelay_DSTATE_eh);
    }

    /* End of Switch: '<S263>/Switch1' */
    /* End of Outputs for SubSystem: '<S263>/EdgeRising' */

    /* Logic: '<S230>/Logical7' incorporates:
     *  Logic: '<S230>/Logical1'
     *  Logic: '<S263>/AND'
     *  RelationalOperator: '<S263>/Greater  Than'
     *  UnitDelay: '<S263>/Unit Delay'
     */
    VeOHSR_b_SIP_StSpdOilDe = (((VeOHSR_b_SIP_StSpdOil) && (!rtb_NotEqual_j)) &&
        ((VeOHSR_b_SIP_StSpdOil) && (OHSR_ac_DW.UnitDelay_DSTATE_eh >=
        rtb_Sum2_oy)));

    /* End of Outputs for SubSystem: '<S230>/Turn On Delay Time2' */

    /* Logic: '<S230>/Logical10' */
    VeOHSR_b_SIP_ShiftComOff = ((VeOHSR_b_SIP_StSpdOilDe) && rtb_Comparison10_f);

    /* Logic: '<S230>/Logical6' */
    rtb_Comparison10_f = ((VeOHSR_b_SIP_TurbSlip) && (VeOHSR_b_SIP_StSpdOilDe));

    /* Outputs for Atomic SubSystem: '<S230>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S261>/EdgeRising' */
    /* Logic: '<S266>/AND' incorporates:
     *  Logic: '<S266>/OR1'
     *  UnitDelay: '<S266>/Unit Delay'
     */
    rtb_UnitDelay_dm = (rtb_Comparison10_f && (!OHSR_ac_DW.UnitDelay_DSTATE_pa));

    /* Update for UnitDelay: '<S266>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_pa = rtb_Comparison10_f;

    /* End of Outputs for SubSystem: '<S261>/EdgeRising' */

    /* Logic: '<S261>/OR1' incorporates:
     *  Logic: '<S261>/AND'
     */
    rtb_Comparison10_f = !rtb_Comparison10_f;

    /* Switch: '<S261>/Switch1' incorporates:
     *  Constant: '<S251>/Calib'
     *  Constant: '<S259>/Calib'
     *  Constant: '<S261>/Constant Value1'
     *  Logic: '<S261>/OR'
     *  Logic: '<S261>/OR1'
     *  MinMax: '<S261>/Minimum'
     *  Sum: '<S261>/Summation'
     *  UnitDelay: '<S261>/Unit Delay'
     */
    if (rtb_Comparison10_f || rtb_UnitDelay_dm)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_i0 = 0.0F;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_i0 = fminf(KeOHSR_t_SIP_DelayTime_NoSlip,
            HeOHSR_t_Idle_dT + OHSR_ac_DW.UnitDelay_DSTATE_i0);
    }

    /* End of Switch: '<S261>/Switch1' */
    /* End of Outputs for SubSystem: '<S230>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S230>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S262>/EdgeRising' */
    /* UnitDelay: '<S300>/Unit Delay' incorporates:
     *  UnitDelay: '<S267>/Unit Delay'
     */
    rtb_UnitDelay_dm = OHSR_ac_DW.UnitDelay_DSTATE_ev;

    /* Update for UnitDelay: '<S267>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_ev = VeOHSR_b_SIP_StSpdOilDe;

    /* End of Outputs for SubSystem: '<S262>/EdgeRising' */

    /* Logic: '<S262>/OR1' incorporates:
     *  Logic: '<S262>/AND'
     */
    rtb_NotEqual_j = !VeOHSR_b_SIP_StSpdOilDe;

    /* Outputs for Atomic SubSystem: '<S262>/EdgeRising' */
    /* Switch: '<S262>/Switch1' incorporates:
     *  Constant: '<S251>/Calib'
     *  Constant: '<S258>/Calib'
     *  Constant: '<S262>/Constant Value1'
     *  Logic: '<S262>/OR'
     *  Logic: '<S262>/OR1'
     *  Logic: '<S267>/AND'
     *  Logic: '<S267>/OR1'
     *  MinMax: '<S262>/Minimum'
     *  Sum: '<S262>/Summation'
     *  UnitDelay: '<S262>/Unit Delay'
     */
    if (rtb_NotEqual_j || ((VeOHSR_b_SIP_StSpdOilDe) && (!rtb_UnitDelay_dm)))
    {
        OHSR_ac_DW.UnitDelay_DSTATE_ou = 0.0F;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_ou = fminf(KeOHSR_t_SIP_DelayTime_InShift,
            HeOHSR_t_Idle_dT + OHSR_ac_DW.UnitDelay_DSTATE_ou);
    }

    /* End of Switch: '<S262>/Switch1' */
    /* End of Outputs for SubSystem: '<S262>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S230>/Turn On Delay Time1' */
    /* End of Outputs for SubSystem: '<S150>/SIP' */
    /* End of Outputs for SubSystem: '<S19>/Turbine_Speed' */
    (void)Rte_Read_VeCSVR_dn_TransOutSpddot_Value(&tmpRead_l);

    /* Outputs for Atomic SubSystem: '<S19>/Turbine_Speed' */
    /* Outputs for Atomic SubSystem: '<S150>/SIP' */
    /* Outputs for Atomic SubSystem: '<S230>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S230>/Turn On Delay Time1' */
    /* Logic: '<S230>/Logical3' incorporates:
     *  Constant: '<S255>/Calib'
     *  Constant: '<S258>/Calib'
     *  Constant: '<S259>/Calib'
     *  Inport: '<Root>/VeCSVR_dn_TransOutSpddot'
     *  Logic: '<S230>/Logical4'
     *  Logic: '<S230>/Logical5'
     *  Logic: '<S261>/AND'
     *  Logic: '<S262>/AND'
     *  RelationalOperator: '<S261>/Greater  Than'
     *  RelationalOperator: '<S262>/Greater  Than'
     *  UnitDelay: '<S261>/Unit Delay'
     *  UnitDelay: '<S262>/Unit Delay'
     */
    VeOHSR_b_SIP_total = ((((KeOHSR_b_SIP_enbl) && (rtb_Comparison10_f ||
        (OHSR_ac_DW.UnitDelay_DSTATE_i0 < KeOHSR_t_SIP_DelayTime_NoSlip))) &&
                           (rtb_NotEqual_j || (OHSR_ac_DW.UnitDelay_DSTATE_ou <
        KeOHSR_t_SIP_DelayTime_InShift))) && (VeOHSR_b_SIP_ShiftComOff));

    /* End of Outputs for SubSystem: '<S230>/Turn On Delay Time1' */
    /* End of Outputs for SubSystem: '<S230>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S150>/SIP' */

    /* Outputs for Atomic SubSystem: '<S150>/Idle_Spd_Max' */
    /* Switch: '<S229>/Switch4' incorporates:
     *  Constant: '<S241>/Calib'
     */
    if (KeOHSR_b_IdleSpd_AccelSel)
    {
        tmpRead_l = rtb_TmpSignalConversionAtVeVSDR_dn_Str_f;
    }

    /* End of Switch: '<S229>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S229>/IdleSpdOffsetTable' */
    /* VariantMerge generated from: '<S4>/XeOHSR_b_IdleSpdBSG_Enbl' incorporates:
     *  Lookup_n-D: '<S246>/Vector'
     */
    rtb_Sum2_oy = look1_iflf_binlca_16a(tmpRead_l, ((const float32 *)
        &(KxOHSR_n_IdleSpd_Offset_UL_Idx[0])), ((const float32 *)
        &(KtOHSR_n_IdleSpd_Offset_UL_Idx[0])), 9U);

    /* Switch: '<S8>/Switch' incorporates:
     *  Rounding: '<S235>/Rounding4'
     */
    rtb_Sum3_h = floorf(rtb_Sum2_oy);

    /* Outputs for Function Call SubSystem: '<S1>/OHSI_InputProcessing' */
    /* Selector: '<S235>/Selector3' incorporates:
     *  Constant: '<S245>/Calib'
     *  DataTypeConversion: '<S5>/Data Type Conversion'
     *  Selector: '<S235>/Selector1'
     *  Selector: '<S235>/Selector2'
     */
    rtb_Subtraction5_e_tmp = 10 * ((sint32)
        rtb_TmpSignalConversionAtVeOSMR_e_Actu_o);

    /* End of Outputs for SubSystem: '<S1>/OHSI_InputProcessing' */

    /* Selector: '<S235>/Selector2' incorporates:
     *  Constant: '<S245>/Calib'
     *  Rounding: '<S235>/Rounding5'
     *  Selector: '<S235>/Selector1'
     */
    rtb_TmpSignalConversionAtVeVSDR_dn_Str_f =
        KaOHSR_n_IdleSpd_Offset_UL[rtb_Subtraction5_e_tmp + ((sint32)ceilf
        (rtb_Sum2_oy))];

    /* Sum: '<S235>/Subtraction5' incorporates:
     *  Constant: '<S245>/Calib'
     *  Product: '<S235>/Multiplication2'
     *  Selector: '<S235>/Selector1'
     *  Selector: '<S235>/Selector2'
     *  Selector: '<S235>/Selector3'
     *  Sum: '<S235>/Subtraction4'
     *  Sum: '<S235>/Sum3'
     */
    VeOHSR_n_IS_Accl_Offset =
        ((KaOHSR_n_IdleSpd_Offset_UL[rtb_Subtraction5_e_tmp + ((sint32)
           rtb_Sum3_h)] - rtb_TmpSignalConversionAtVeVSDR_dn_Str_f) *
         (rtb_Sum2_oy - rtb_Sum3_h)) + rtb_TmpSignalConversionAtVeVSDR_dn_Str_f;

    /* End of Outputs for SubSystem: '<S229>/IdleSpdOffsetTable' */

    /* UnitDelay: '<S300>/Unit Delay' incorporates:
     *  Logic: '<S229>/Logical2'
     */
    rtb_UnitDelay_dm = !VeOHSR_b_SIP_total;

    /* Switch: '<S229>/Switch5' */
    if (rtb_UnitDelay_dm)
    {
        /* Switch: '<S229>/Switch5' */
        rtb_Sum2_oy = VeOHSR_n_IS_Accl_Offset;
    }
    else
    {
        /* Switch: '<S229>/Switch5' incorporates:
         *  Constant: '<S240>/Calib'
         *  DataTypeConversion: '<S229>/Data Type Conversion'
         *  DataTypeConversion: '<S229>/Data Type Conversion1'
         *  Selector: '<S229>/Selector'
         *  SignalConversion generated from: '<S1>/VeOSMR_e_ActualGear'
         *  SignalConversion generated from: '<S1>/VeOSMR_e_TargetGear'
         */
        rtb_Sum2_oy = KaOHSR_n_IdleSpd_Offset_UL_Gr
            [(rtb_TmpSignalConversionAtVeOSMR_e_Targ_a << 3U) +
            rtb_TmpSignalConversionAtVeOSMR_e_Actu_o];
    }

    /* End of Switch: '<S229>/Switch5' */

    /* Outputs for Atomic SubSystem: '<S229>/GradientLimiter' */
    /* Sum: '<S234>/Sum2' incorporates:
     *  UnitDelay: '<S234>/Unit Delay'
     */
    rtb_Sum3_h = rtb_Sum2_oy - VeOHSR_n_IS_Accl_Lim;

    /* Outputs for Atomic SubSystem: '<S234>/Limiter' */
    /* Switch: '<S244>/Switch1' incorporates:
     *  Constant: '<S243>/Calib'
     *  RelationalOperator: '<S244>/Relational Operator'
     */
    if (KeOHSR_n_Offset_Rate_UpLim < rtb_Sum3_h)
    {
        /* Switch: '<S8>/Switch' */
        rtb_Sum3_h = KeOHSR_n_Offset_Rate_UpLim;
    }

    /* End of Switch: '<S244>/Switch1' */

    /* Switch: '<S244>/Switch' incorporates:
     *  Constant: '<S242>/Calib'
     *  RelationalOperator: '<S244>/Relational Operator1'
     */
    if (rtb_Sum3_h <= KeOHSR_n_Offset_Rate_LowLim)
    {
        rtb_Sum3_h = KeOHSR_n_Offset_Rate_LowLim;
    }

    /* End of Switch: '<S244>/Switch' */
    /* End of Outputs for SubSystem: '<S234>/Limiter' */

    /* Sum: '<S234>/Sum3' incorporates:
     *  UnitDelay: '<S234>/Unit Delay'
     */
    VeOHSR_n_IS_Accl_Lim = rtb_Sum3_h + VeOHSR_n_IS_Accl_Lim;

    /* End of Outputs for SubSystem: '<S229>/GradientLimiter' */

    /* Outputs for Function Call SubSystem: '<S1>/OHSI_InputProcessing' */
    /* Logic: '<S229>/Logical1' incorporates:
     *  DataTypeConversion: '<S5>/Data Type Conversion'
     *  Logic: '<S229>/Logical'
     *  RelationalOperator: '<S229>/Comparison5'
     *  UnitDelay: '<S229>/Unit Delay'
     *  UnitDelay: '<S229>/Unit Delay1'
     *  UnitDelay: '<S229>/Unit Delay2'
     */
    VeOHSR_b_IS_ULswitch = (((OHSR_ac_DW.UnitDelay_DSTATE_jkw) ||
        (OHSR_ac_DW.UnitDelay1_DSTATE_i)) || ((((sint32)
        rtb_TmpSignalConversionAtVeOSMR_e_Actu_o) != ((sint32)
        OHSR_ac_DW.UnitDelay2_DSTATE_lf)) && rtb_UnitDelay_dm));

    /* End of Outputs for SubSystem: '<S1>/OHSI_InputProcessing' */

    /* Selector: '<S229>/Selector4' incorporates:
     *  Constant: '<S237>/Calib'
     *  DataTypeConversion: '<S229>/Data Type Conversion3'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_ILEStat'
     *  UnitDelay: '<S229>/Unit Delay1'
     */
    OHSR_ac_DW.UnitDelay1_DSTATE_i = KaOHSR_b_ILEPartLock
        [(rtb_TmpSignalConversionAtVeTRNR_e_ILESta)];

    /* Switch: '<S229>/Switch2' incorporates:
     *  Constant: '<S236>/Calib'
     *  DataTypeConversion: '<S229>/Data Type Conversion3'
     *  Selector: '<S229>/Selector3'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_ILEStat'
     *  Switch: '<S229>/Switch1'
     *  Switch: '<S229>/Switch3'
     *  UnitDelay: '<S229>/Unit Delay1'
     */
    if (KaOHSR_b_ILEFullLock[(rtb_TmpSignalConversionAtVeTRNR_e_ILESta)])
    {
        /* Outputs for Function Call SubSystem: '<S1>/OHSI_InputProcessing' */
        /* Switch: '<S229>/Switch2' incorporates:
         *  Constant: '<S238>/Calib'
         *  DataTypeConversion: '<S5>/Data Type Conversion'
         *  Selector: '<S229>/Selector1'
         */
        VeOHSR_n_IS_Offset = KaOHSR_n_IdleSpd_Offset_FL
            [(rtb_TmpSignalConversionAtVeOSMR_e_Actu_o)];

        /* End of Outputs for SubSystem: '<S1>/OHSI_InputProcessing' */
    }
    else if (OHSR_ac_DW.UnitDelay1_DSTATE_i)
    {
        /* Outputs for Function Call SubSystem: '<S1>/OHSI_InputProcessing' */
        /* Switch: '<S229>/Switch2' incorporates:
         *  Constant: '<S239>/Calib'
         *  DataTypeConversion: '<S5>/Data Type Conversion'
         *  Selector: '<S229>/Selector2'
         *  Switch: '<S229>/Switch1'
         */
        VeOHSR_n_IS_Offset = KaOHSR_n_IdleSpd_Offset_PL
            [(rtb_TmpSignalConversionAtVeOSMR_e_Actu_o)];

        /* End of Outputs for SubSystem: '<S1>/OHSI_InputProcessing' */
    }
    else if (VeOHSR_b_IS_ULswitch)
    {
        /* Switch: '<S229>/Switch3' incorporates:
         *  Switch: '<S229>/Switch1'
         *  Switch: '<S229>/Switch2'
         */
        VeOHSR_n_IS_Offset = VeOHSR_n_IS_Accl_Offset;
    }
    else
    {
        /* Switch: '<S229>/Switch2' incorporates:
         *  Switch: '<S229>/Switch1'
         *  Switch: '<S229>/Switch3'
         */
        VeOHSR_n_IS_Offset = VeOHSR_n_IS_Accl_Lim;
    }

    /* End of Switch: '<S229>/Switch2' */

    /* Outputs for Function Call SubSystem: '<S1>/OHSI_InputProcessing' */
    /* Update for UnitDelay: '<S229>/Unit Delay2' incorporates:
     *  DataTypeConversion: '<S5>/Data Type Conversion'
     */
    OHSR_ac_DW.UnitDelay2_DSTATE_lf = (sint16)
        rtb_TmpSignalConversionAtVeOSMR_e_Actu_o;

    /* End of Outputs for SubSystem: '<S1>/OHSI_InputProcessing' */

    /* Update for UnitDelay: '<S229>/Unit Delay' incorporates:
     *  Constant: '<S236>/Calib'
     *  DataTypeConversion: '<S229>/Data Type Conversion3'
     *  Selector: '<S229>/Selector3'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_ILEStat'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_jkw = KaOHSR_b_ILEFullLock
        [(rtb_TmpSignalConversionAtVeTRNR_e_ILESta)];

    /* End of Outputs for SubSystem: '<S150>/Idle_Spd_Max' */

    /* Outputs for Atomic SubSystem: '<S150>/Turb_IS_Arb_Act' */
    /* UnitDelay: '<S300>/Unit Delay' incorporates:
     *  Constant: '<S272>/Constant'
     *  Constant: '<S273>/Constant'
     *  Logic: '<S232>/Logical'
     *  Logic: '<S232>/Logical2'
     *  Logic: '<S232>/Logical6'
     *  RelationalOperator: '<S232>/Comparison2'
     *  RelationalOperator: '<S232>/Comparison3'
     */
    rtb_UnitDelay_dm = (((((uint32)rtb_TmpSignalConversionAtVeOSMR_e_Stea_i) !=
                          CeOSMR_e_TransSt_Reverse) || (((uint32)
                           rtb_TmpSignalConversionAtVeOSMR_e_Stea_i) !=
                          CeOSMR_e_TransSt_Drive)) && (!VeOHSR_b_Neutral));

    /* Switch: '<S232>/Switch2' */
    if (VeOHSR_b_TransTurb_Active)
    {
        /* VariantMerge generated from: '<S10>/XeOHSR_b_LaunchSpdCntrl_Enbl' incorporates:
         *  Constant: '<S270>/Calib'
         *  Constant: '<S271>/Calib'
         *  RelationalOperator: '<S232>/Comparison'
         *  Sum: '<S232>/Sum1'
         */
        rtb_Comparison10_f = (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd >
                              (KeOHSR_v_IS_Enable_Thresh -
                               KeOHSR_v_IS_Enable_Thresh_Hys));
    }
    else
    {
        /* VariantMerge generated from: '<S10>/XeOHSR_b_LaunchSpdCntrl_Enbl' incorporates:
         *  Constant: '<S270>/Calib'
         *  RelationalOperator: '<S232>/Comparison1'
         */
        rtb_Comparison10_f = (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd >
                              KeOHSR_v_IS_Enable_Thresh);
    }

    /* End of Switch: '<S232>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S19>/TurbineSpdOffset' */
    /* Logic: '<S232>/Logical5' incorporates:
     *  Logic: '<S149>/Logical2'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_NTurbF =
        !rtb_TmpSignalConversionAtVeCSVR_b_NTurbF;

    /* End of Outputs for SubSystem: '<S19>/TurbineSpdOffset' */

    /* Logic: '<S232>/Logical1' incorporates:
     *  Constant: '<S269>/Calib'
     *  Logic: '<S232>/Logical3'
     *  Logic: '<S232>/Logical4'
     *  Logic: '<S232>/Logical5'
     */
    VeOHSR_b_TransTurb_IS_used = ((((rtb_TmpSignalConversionAtVeCSVR_b_NTurbF &&
        rtb_UnitDelay_dm) && rtb_Comparison10_f) && (KeOHSR_b_TransTurb_IS_used))
        || (((KeOHSR_b_TransTurb_IS_used) && rtb_UnitDelay_dm) &&
            rtb_Comparison10_f));

    /* End of Outputs for SubSystem: '<S150>/Turb_IS_Arb_Act' */

    /* Outputs for Atomic SubSystem: '<S150>/Turb_IS_Arbitration' */
    /* Outputs for Atomic SubSystem: '<S233>/GradientLimiter' */
    /* Outputs for Atomic SubSystem: '<S150>/TT_IS_For_Cruise' */
    /* Sum: '<S274>/Sum2' incorporates:
     *  Inport: '<S231>/Trans_Turbine_Speed'
     *  MinMax: '<S233>/MinMax'
     *  Sum: '<S233>/Sum'
     *  UnitDelay: '<S274>/Unit Delay'
     */
    rtb_Sum3_h = fminf(VeOHSR_n_IdleSpdMax,
                       rtb_TmpSignalConversionAtVeVSDR_n_NTur_j +
                       VeOHSR_n_IS_Offset) - OHSR_ac_DW.UnitDelay_DSTATE_ej;

    /* End of Outputs for SubSystem: '<S150>/TT_IS_For_Cruise' */

    /* Outputs for Atomic SubSystem: '<S274>/Limiter' */
    /* Switch: '<S278>/Switch1' incorporates:
     *  Constant: '<S277>/Calib'
     *  RelationalOperator: '<S278>/Relational Operator'
     */
    if (KeOHSR_n_IdleSpd_Rate_UpLim < rtb_Sum3_h)
    {
        /* Switch: '<S8>/Switch' */
        rtb_Sum3_h = KeOHSR_n_IdleSpd_Rate_UpLim;
    }

    /* End of Switch: '<S278>/Switch1' */

    /* Switch: '<S278>/Switch' incorporates:
     *  Constant: '<S276>/Calib'
     *  RelationalOperator: '<S278>/Relational Operator1'
     */
    if (rtb_Sum3_h <= KeOHSR_n_IdleSpd_Rate_LowLim)
    {
        rtb_Sum3_h = KeOHSR_n_IdleSpd_Rate_LowLim;
    }

    /* End of Switch: '<S278>/Switch' */
    /* End of Outputs for SubSystem: '<S274>/Limiter' */

    /* Sum: '<S274>/Sum3' incorporates:
     *  UnitDelay: '<S274>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_ej += rtb_Sum3_h;

    /* End of Outputs for SubSystem: '<S233>/GradientLimiter' */

    /* Switch: '<S233>/Switch2' */
    if (VeOHSR_b_TransTurb_IS_used)
    {
        /* Switch: '<S233>/Switch2' */
        VeOHSR_n_TransTurb_IS = OHSR_ac_DW.UnitDelay_DSTATE_ej;
    }
    else
    {
        /* Switch: '<S233>/Switch2' incorporates:
         *  Constant: '<S233>/Constant Value'
         */
        VeOHSR_n_TransTurb_IS = 0.0F;
    }

    /* End of Switch: '<S233>/Switch2' */

    /* RelationalOperator: '<S233>/Comparison' incorporates:
     *  Constant: '<S275>/Calib'
     */
    VeOHSR_b_TransTurb_Active = (VeOHSR_n_TransTurb_IS >
        KeOHSR_n_IdleSpd_Actv_Thresh);

    /* End of Outputs for SubSystem: '<S150>/Turb_IS_Arbitration' */
    /* End of Outputs for SubSystem: '<S19>/Turbine_Speed' */

    /* Outputs for Atomic SubSystem: '<S19>/Strategic_IS' */
    /* RelationalOperator: '<S169>/Comparison5' incorporates:
     *  Constant: '<S220>/Calib'
     *  RelationalOperator: '<S169>/Comparison1'
     *  Selector: '<S169>/Selector2'
     */
    rtb_UnitDelay_hr_tmp = (sint32)KaOHSR_i_AdvSeq_Enable
        [(rtb_TmpSignalConversionAtDsrdRngSt_ReadO)];

    /* UnitDelay: '<S300>/Unit Delay' incorporates:
     *  RelationalOperator: '<S169>/Comparison5'
     *  UnitDelay: '<S169>/Unit Delay'
     */
    rtb_UnitDelay_dm = (rtb_UnitDelay_hr_tmp != ((sint32)
                         OHSR_ac_DW.UnitDelay_DSTATE_gz));

    /* Outputs for Atomic SubSystem: '<S169>/EdgeRising1' */
    /* Logic: '<S215>/AND' incorporates:
     *  Logic: '<S215>/OR1'
     *  UnitDelay: '<S215>/Unit Delay'
     */
    rtb_Comparison10_f = !OHSR_ac_DW.UnitDelay_DSTATE_ebu;

    /* Update for UnitDelay: '<S215>/Unit Delay' incorporates:
     *  Constant: '<S169>/TRUE Constant2'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_ebu = true;

    /* End of Outputs for SubSystem: '<S169>/EdgeRising1' */

    /* Switch: '<S213>/Switch2' incorporates:
     *  Switch: '<S213>/Switch3'
     *  UnitDelay: '<S169>/Unit Delay1'
     *  UnitDelay: '<S213>/Unit Delay'
     */
    if (rtb_UnitDelay_dm)
    {
        for (rtb_Subtraction5_e_tmp = 0; rtb_Subtraction5_e_tmp < 9;
                rtb_Subtraction5_e_tmp++)
        {
            OHSR_ac_DW.UnitDelay_DSTATE_n0[rtb_Subtraction5_e_tmp] =
                OHSR_ac_DW.UnitDelay1_DSTATE_o[rtb_Subtraction5_e_tmp];
        }

        /* Switch: '<S213>/Switch1' incorporates:
         *  Constant: '<S213>/Constant Value4'
         *  UnitDelay: '<S169>/Unit Delay1'
         *  UnitDelay: '<S213>/Unit Delay'
         *  UnitDelay: '<S213>/Unit Delay3'
         */
        OHSR_ac_DW.UnitDelay3_DSTATE_a = 0.0F;
    }
    else
    {
        /* MinMax: '<S213>/Maximum' incorporates:
         *  Constant: '<S219>/Calib'
         *  Constant: '<S221>/Calib'
         */
        rtb_Sum2_oy = fmaxf(HeOHSR_t_Idle_dT, KeOHSR_t_AdvSeq_BlendTimeOptInput);

        /* Outputs for Atomic SubSystem: '<S213>/Protected Division' */
        /* Switch: '<S223>/Switch1' incorporates:
         *  Constant: '<S219>/Calib'
         *  Constant: '<S223>/Constant Value'
         *  Constant: '<S223>/Constant Value1'
         *  Constant: '<S223>/Constant Value2'
         *  Constant: '<S223>/Constant Value3'
         *  Logic: '<S223>/AND'
         *  RelationalOperator: '<S223>/Greater Than or Equal '
         *  RelationalOperator: '<S223>/Greater Than or Equal 1'
         *  RelationalOperator: '<S223>/Not Equal'
         *  RelationalOperator: '<S223>/Not Equal1'
         *  Switch: '<S223>/Switch2'
         *  Switch: '<S223>/Switch3'
         */
        if ((HeOHSR_t_Idle_dT != 0.0F) && (rtb_Sum2_oy != 0.0F))
        {
            /* Switch: '<S223>/Switch1' incorporates:
             *  Product: '<S223>/Division'
             */
            rtb_Sum2_oy = HeOHSR_t_Idle_dT / rtb_Sum2_oy;
        }
        else if (HeOHSR_t_Idle_dT > 0.0F)
        {
            /* Switch: '<S223>/Switch2' incorporates:
             *  Constant: '<S223>/MAXFLOAT'
             *  Switch: '<S223>/Switch1'
             */
            rtb_Sum2_oy = 3.402823466E+38F;
        }
        else if (HeOHSR_t_Idle_dT < 0.0F)
        {
            /* Switch: '<S223>/Switch3' incorporates:
             *  Constant: '<S223>/MINFLOAT'
             *  Switch: '<S223>/Switch1'
             *  Switch: '<S223>/Switch2'
             */
            rtb_Sum2_oy = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S223>/Switch1' incorporates:
             *  Constant: '<S223>/Constant Value4'
             *  Switch: '<S223>/Switch2'
             *  Switch: '<S223>/Switch3'
             */
            rtb_Sum2_oy = 0.0F;
        }

        /* End of Switch: '<S223>/Switch1' */
        /* End of Outputs for SubSystem: '<S213>/Protected Division' */

        /* Switch: '<S213>/Switch1' incorporates:
         *  Constant: '<S213>/Constant Value2'
         *  Constant: '<S213>/Constant Value3'
         *  Logic: '<S213>/Logical'
         *  Logic: '<S213>/Logical2'
         *  MinMax: '<S213>/MinMax'
         *  Sum: '<S213>/Summation1'
         *  UnitDelay: '<S213>/Unit Delay1'
         *  UnitDelay: '<S213>/Unit Delay3'
         */
        if ((!OHSR_ac_DW.UnitDelay1_DSTATE_c) || rtb_Comparison10_f)
        {
            OHSR_ac_DW.UnitDelay3_DSTATE_a = 1.0F;
        }

        OHSR_ac_DW.UnitDelay3_DSTATE_a = fminf(OHSR_ac_DW.UnitDelay3_DSTATE_a +
            rtb_Sum2_oy, 1.0F);
    }

    /* End of Switch: '<S213>/Switch2' */
    /* End of Outputs for SubSystem: '<S19>/Strategic_IS' */
    (void)Rte_Read_VaSCOR_n_InputSpeedDsrdMB_Value(rtb_Summation_lr);
    (void)Rte_Read_VaSCOR_n_InputSpeedDsrdMA_Value
        (OHSR_ac_DW.UnitDelay1_DSTATE_o);

    /* Outputs for Atomic SubSystem: '<S19>/Strategic_IS' */
    /* UnitDelay: '<S300>/Unit Delay' incorporates:
     *  Constant: '<S169>/Constant Value1'
     *  Inport: '<Root>/VaSCOR_n_InputSpeedDsrdMA'
     *  Inport: '<Root>/VaSCOR_n_InputSpeedDsrdMB'
     *  RelationalOperator: '<S169>/Comparison1'
     */
    rtb_UnitDelay_dm = (rtb_UnitDelay_hr_tmp == 0);
    for (rtb_Subtraction5_e_tmp = 0; rtb_Subtraction5_e_tmp < 9;
            rtb_Subtraction5_e_tmp++)
    {
        /* Switch: '<S169>/Switch1' incorporates:
         *  UnitDelay: '<S169>/Unit Delay1'
         */
        if (!rtb_UnitDelay_dm)
        {
            OHSR_ac_DW.UnitDelay1_DSTATE_o[rtb_Subtraction5_e_tmp] =
                rtb_Summation_lr[rtb_Subtraction5_e_tmp];
        }

        /* End of Switch: '<S169>/Switch1' */
        rtb_Summation_lr[rtb_Subtraction5_e_tmp] = ((1.0F -
            OHSR_ac_DW.UnitDelay3_DSTATE_a) *
            OHSR_ac_DW.UnitDelay_DSTATE_n0[rtb_Subtraction5_e_tmp]) +
            (OHSR_ac_DW.UnitDelay3_DSTATE_a *
             OHSR_ac_DW.UnitDelay1_DSTATE_o[rtb_Subtraction5_e_tmp]);
    }

    /* RelationalOperator: '<S169>/Comparison2' incorporates:
     *  Constant: '<S213>/Constant Value'
     *  Constant: '<S220>/Calib'
     *  DataTypeConversion: '<S169>/Data Type Conversion1'
     *  Product: '<S213>/Multiplication'
     *  Product: '<S213>/Multiplication3'
     *  RelationalOperator: '<S169>/Comparison8'
     *  Selector: '<S169>/Selector2'
     *  SignalConversion generated from: '<S1>/DsrdRngSt_Read'
     *  Sum: '<S213>/Subtraction'
     *  Sum: '<S213>/Summation'
     *  UnitDelay: '<S169>/Unit Delay1'
     *  UnitDelay: '<S213>/Unit Delay'
     *  UnitDelay: '<S213>/Unit Delay3'
     */
    rtb_Subtraction5_e_tmp = (sint32)KaOHSR_i_AdvSeq_Enable
        [(rtb_TmpSignalConversionAtDsrdRngSt_ReadO)];

    /* Switch: '<S169>/Switch3' incorporates:
     *  Constant: '<S169>/Constant Value2'
     *  Inport: '<Root>/VaSCOR_n_C1SlipSpdDsrdMA'
     *  Inport: '<Root>/VaSCOR_n_C1SlipSpdDsrdMB'
     *  Inport: '<Root>/VaSCOR_n_C2SlipSpdDsrdMA'
     *  Inport: '<Root>/VaSCOR_n_C2SlipSpdDsrdMB'
     *  RelationalOperator: '<S169>/Comparison2'
     */
    if (rtb_Subtraction5_e_tmp == 0)
    {
        (void)Rte_Read_VaSCOR_n_C2SlipSpdDsrdMA_Value(tmpRead_n);
        (void)Rte_Read_VaSCOR_n_C1SlipSpdDsrdMA_Value(rtb_Switch3_mo);

        /* RelationalOperator: '<S169>/Comparison4' incorporates:
         *  Constant: '<S169>/Constant Value3'
         *  Constant: '<S220>/Calib'
         *  Inport: '<Root>/VaSCOR_n_C1SlipSpdDsrdMA'
         *  Inport: '<Root>/VaSCOR_n_C2SlipSpdDsrdMA'
         *  Selector: '<S169>/Selector2'
         */
        rtb_UnitDelay_dm = (((sint32)KaOHSR_i_AdvSeq_Enable[((sint32)
                              rtb_TmpSignalConversionAtDsrdRngSt_ReadO) + 8]) ==
                            0);

        /* Switch: '<S169>/Switch3' incorporates:
         *  Switch: '<S169>/Switch4'
         */
        for (rtb_UnitDelay_hr_tmp = 0; rtb_UnitDelay_hr_tmp < 9;
                rtb_UnitDelay_hr_tmp++)
        {
            rtb_Sum2_oy = rtb_Switch3_mo[rtb_UnitDelay_hr_tmp];

            /* Switch: '<S169>/Switch4' */
            if (!rtb_UnitDelay_dm)
            {
                rtb_Sum2_oy = tmpRead_n[rtb_UnitDelay_hr_tmp];
            }

            rtb_Switch3_mo[rtb_UnitDelay_hr_tmp] = rtb_Sum2_oy;
        }
    }
    else
    {
        (void)Rte_Read_VaSCOR_n_C2SlipSpdDsrdMB_Value(tmpRead_n);
        (void)Rte_Read_VaSCOR_n_C1SlipSpdDsrdMB_Value(rtb_Switch3_mo);

        /* RelationalOperator: '<S169>/Comparison6' incorporates:
         *  Constant: '<S169>/Constant Value6'
         *  Constant: '<S220>/Calib'
         *  Inport: '<Root>/VaSCOR_n_C1SlipSpdDsrdMB'
         *  Inport: '<Root>/VaSCOR_n_C2SlipSpdDsrdMB'
         *  Selector: '<S169>/Selector2'
         */
        rtb_UnitDelay_dm = (((sint32)KaOHSR_i_AdvSeq_Enable[((sint32)
                              rtb_TmpSignalConversionAtDsrdRngSt_ReadO) + 8]) ==
                            0);

        /* Switch: '<S169>/Switch3' incorporates:
         *  Switch: '<S169>/Switch5'
         */
        for (rtb_UnitDelay_hr_tmp = 0; rtb_UnitDelay_hr_tmp < 9;
                rtb_UnitDelay_hr_tmp++)
        {
            rtb_Sum2_oy = rtb_Switch3_mo[rtb_UnitDelay_hr_tmp];

            /* Switch: '<S169>/Switch5' */
            if (!rtb_UnitDelay_dm)
            {
                rtb_Sum2_oy = tmpRead_n[rtb_UnitDelay_hr_tmp];
            }

            rtb_Switch3_mo[rtb_UnitDelay_hr_tmp] = rtb_Sum2_oy;
        }
    }

    /* End of Switch: '<S169>/Switch3' */
    /* End of Outputs for SubSystem: '<S19>/Strategic_IS' */
    (void)Rte_Read_VaSCOR_M_OptInputTorqueMB_Value(tmpRead_10);
    (void)Rte_Read_VaSCOR_M_OptInputTorqueMA_Value(tmpRead_z);

    /* MATLAB Function 'OHSR_FUNC_PxPy_MedTEB/OHSC_Creep_Launch_Determination/OHSC_EV_Engine_Idle_Speed_Arbitration/IdleSpdArbitration/Strategic_IS/PreProcessing/GetBitFrom16BitRegister/MATLAB Function': '<S225>:1' */
    /* '<S225>:1:2' */
    /* '<S225>:1:3' */
    /* '<S225>:1:4' */
    /* '<S225>:1:5' */
    /* '<S225>:1:7' */
    (void)Rte_Read_VeOSMR_d_FnctnEnblReg_Value(&tmpRead_6);

    /* Outputs for Atomic SubSystem: '<S19>/Strategic_IS' */
    /* MATLAB Function: '<S218>/MATLAB Function' incorporates:
     *  Inport: '<Root>/VaSCOR_M_OptInputTorqueMA'
     *  Inport: '<Root>/VaSCOR_M_OptInputTorqueMB'
     *  Inport: '<Root>/VeOSMR_d_FnctnEnblReg'
     */
    if ((((uint32)tmpRead_6) & 32768U) != 0U)
    {
        /* Outputs for Enabled SubSystem: '<S148>/OHSC_NiDsrd_MB' incorporates:
         *  EnablePort: '<S168>/Enable'
         */
        /* Selector: '<S168>/Selector' incorporates:
         *  DataTypeConversion: '<S168>/Data Type Conversion'
         *  SignalConversion generated from: '<S1>/VeOSMR_e_TargetGear'
         */
        VeOHSR_n_ISDMB_TG = rtb_Summation_lr[(sint16)
            rtb_TmpSignalConversionAtVeOSMR_e_Targ_a];

        /* Selector: '<S168>/Selector1' incorporates:
         *  Constant: '<S169>/Constant Value4'
         *  Constant: '<S220>/Calib'
         *  RelationalOperator: '<S169>/Comparison3'
         *  Selector: '<S169>/Selector2'
         *  Switch: '<S169>/Switch2'
         */
        if (((sint32)KaOHSR_i_AdvSeq_Enable
                [(rtb_TmpSignalConversionAtDsrdRngSt_ReadO)]) == 0)
        {
            /* Outputs for Function Call SubSystem: '<S1>/OHSI_InputProcessing' */
            /* Selector: '<S168>/Selector1' incorporates:
             *  DataTypeConversion: '<S5>/Data Type Conversion'
             */
            VeOHSR_M_OptTiMB_CG =
                tmpRead_z[rtb_TmpSignalConversionAtVeOSMR_e_Actu_o];

            /* End of Outputs for SubSystem: '<S1>/OHSI_InputProcessing' */
        }
        else
        {
            /* Outputs for Function Call SubSystem: '<S1>/OHSI_InputProcessing' */
            /* Selector: '<S168>/Selector1' incorporates:
             *  DataTypeConversion: '<S5>/Data Type Conversion'
             */
            VeOHSR_M_OptTiMB_CG =
                tmpRead_10[rtb_TmpSignalConversionAtVeOSMR_e_Actu_o];

            /* End of Outputs for SubSystem: '<S1>/OHSI_InputProcessing' */
        }

        /* End of Selector: '<S168>/Selector1' */

        /* Outputs for Function Call SubSystem: '<S1>/OHSI_InputProcessing' */
        /* Selector: '<S168>/Selector2' incorporates:
         *  DataTypeConversion: '<S5>/Data Type Conversion'
         */
        VeOHSR_n_ISDMB_CG =
            rtb_Summation_lr[rtb_TmpSignalConversionAtVeOSMR_e_Actu_o];

        /* End of Outputs for SubSystem: '<S1>/OHSI_InputProcessing' */

        /* Selector: '<S168>/Selector3' incorporates:
         *  DataTypeConversion: '<S168>/Data Type Conversion'
         *  SignalConversion generated from: '<S1>/VeOSMR_e_TargetGear'
         */
        VeOHSC_n_ClutchSlipIS = rtb_Switch3_mo[(sint16)
            rtb_TmpSignalConversionAtVeOSMR_e_Targ_a];

        /* End of Outputs for SubSystem: '<S148>/OHSC_NiDsrd_MB' */
    }
    else
    {
        /* '<S225>:1:8' */
        /* '<S225>:1:9' */
    }

    /* End of MATLAB Function: '<S218>/MATLAB Function' */

    /* RelationalOperator: '<S148>/Comparison1' */
    VeOHSR_b_LowOpt = (VeOHSR_n_ISDMB_TG < VeOHSR_n_Strat_IS_rate);

    /* RelationalOperator: '<S148>/Comparison2' */
    VeOHSR_b_ActNi = (VeOHSR_n_ISDMB_CG < VeOHSR_n_Strat_IS_rate);

    /* RelationalOperator: '<S148>/Comparison5' incorporates:
     *  Constant: '<S164>/Calib'
     */
    rtb_UnitDelay_dm = (rtb_TmpSignalConversionAtVeAPSR_Pct_Ac_c <
                        KeOHSR_Pct_Strat_IS_Pedal_Thresh);

    /* Outputs for Atomic SubSystem: '<S148>/Hysteresis' */
    /* Switch: '<S160>/Switch1' incorporates:
     *  Constant: '<S166>/Calib'
     *  RelationalOperator: '<S160>/Greater  Than'
     */
    if (VeOHSC_n_ClutchSlipIS > KeOHSR_n_Strat_IS_Hys_RSP)
    {
        /* Switch: '<S160>/Switch1' incorporates:
         *  Constant: '<S160>/Constant Value'
         */
        VeOHSR_b_StratHys = true;
    }
    else
    {
        /* Switch: '<S160>/Switch1' incorporates:
         *  Constant: '<S165>/Calib'
         *  RelationalOperator: '<S160>/Greater  Than1'
         *  UnitDelay: '<S160>/Unit Delay'
         */
        VeOHSR_b_StratHys = ((VeOHSC_n_ClutchSlipIS >= KeOHSR_n_Strat_IS_Hys_LSP)
                             && (VeOHSR_b_StratHys));
    }

    /* End of Switch: '<S160>/Switch1' */
    /* End of Outputs for SubSystem: '<S148>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S148>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S171>/EdgeRising' */
    /* Logic: '<S226>/AND' incorporates:
     *  Logic: '<S226>/OR1'
     *  UnitDelay: '<S226>/Unit Delay'
     */
    rtb_Comparison10_f = (rtb_UnitDelay_dm && (!OHSR_ac_DW.UnitDelay_DSTATE_fp));

    /* Update for UnitDelay: '<S226>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_fp = rtb_UnitDelay_dm;

    /* End of Outputs for SubSystem: '<S171>/EdgeRising' */

    /* Switch: '<S171>/Switch1' incorporates:
     *  Constant: '<S159>/Calib'
     *  Constant: '<S167>/Calib'
     *  Constant: '<S171>/Constant Value1'
     *  Logic: '<S171>/OR'
     *  Logic: '<S171>/OR1'
     *  MinMax: '<S171>/Minimum'
     *  Sum: '<S171>/Summation'
     *  UnitDelay: '<S171>/Unit Delay'
     */
    if ((!rtb_UnitDelay_dm) || rtb_Comparison10_f)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_nrs = 0.0F;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_nrs = fminf(KeOHSR_t_Strat_IS_PedalDelay,
            HeOHSR_t_Idle_dT + OHSR_ac_DW.UnitDelay_DSTATE_nrs);
    }

    /* End of Switch: '<S171>/Switch1' */

    /* Logic: '<S171>/AND' incorporates:
     *  Constant: '<S167>/Calib'
     *  RelationalOperator: '<S171>/Greater  Than'
     *  UnitDelay: '<S171>/Unit Delay'
     */
    VeOHSR_b_AcclPosThrsh = (rtb_UnitDelay_dm &&
        (OHSR_ac_DW.UnitDelay_DSTATE_nrs >= KeOHSR_t_Strat_IS_PedalDelay));

    /* End of Outputs for SubSystem: '<S148>/Turn On Delay Time' */

    /* RelationalOperator: '<S169>/Comparison9' incorporates:
     *  Constant: '<S220>/Calib'
     *  Selector: '<S169>/Selector2'
     *  UnitDelay: '<S169>/Unit Delay'
     *  UnitDelay: '<S169>/Unit Delay2'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_gz = KaOHSR_i_AdvSeq_Enable
        [(rtb_TmpSignalConversionAtDsrdRngSt_ReadO)];

    /* UnitDelay: '<S300>/Unit Delay' incorporates:
     *  Constant: '<S220>/Calib'
     *  RelationalOperator: '<S169>/Comparison9'
     *  Selector: '<S169>/Selector2'
     *  UnitDelay: '<S169>/Unit Delay2'
     */
    rtb_UnitDelay_dm = (OHSR_ac_DW.UnitDelay_DSTATE_gz !=
                        OHSR_ac_DW.UnitDelay2_DSTATE_a);

    /* Outputs for Atomic SubSystem: '<S169>/EdgeRising2' */
    /* Logic: '<S216>/AND' incorporates:
     *  Logic: '<S216>/OR1'
     *  UnitDelay: '<S216>/Unit Delay'
     */
    rtb_Comparison10_f = !OHSR_ac_DW.UnitDelay_DSTATE_kj;

    /* Update for UnitDelay: '<S216>/Unit Delay' incorporates:
     *  Constant: '<S169>/TRUE Constant1'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_kj = true;

    /* End of Outputs for SubSystem: '<S169>/EdgeRising2' */

    /* Switch: '<S214>/Switch2' incorporates:
     *  Switch: '<S214>/Switch3'
     *  UnitDelay: '<S169>/Unit Delay3'
     *  UnitDelay: '<S214>/Unit Delay'
     */
    if (rtb_UnitDelay_dm)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_ew = OHSR_ac_DW.UnitDelay3_DSTATE_b;

        /* Switch: '<S214>/Switch1' incorporates:
         *  Constant: '<S214>/Constant Value4'
         *  UnitDelay: '<S169>/Unit Delay3'
         *  UnitDelay: '<S214>/Unit Delay'
         *  UnitDelay: '<S214>/Unit Delay3'
         */
        OHSR_ac_DW.UnitDelay3_DSTATE_er = 0.0F;
    }
    else
    {
        /* MinMax: '<S214>/Maximum' incorporates:
         *  Constant: '<S219>/Calib'
         *  Constant: '<S222>/Calib'
         */
        rtb_Sum2_oy = fmaxf(HeOHSR_t_Idle_dT, KeOHSR_t_AdvSeq_BlendTimeStratIS);

        /* Outputs for Atomic SubSystem: '<S214>/Protected Division' */
        /* Switch: '<S224>/Switch1' incorporates:
         *  Constant: '<S219>/Calib'
         *  Constant: '<S224>/Constant Value'
         *  Constant: '<S224>/Constant Value1'
         *  Constant: '<S224>/Constant Value2'
         *  Constant: '<S224>/Constant Value3'
         *  Logic: '<S224>/AND'
         *  RelationalOperator: '<S224>/Greater Than or Equal '
         *  RelationalOperator: '<S224>/Greater Than or Equal 1'
         *  RelationalOperator: '<S224>/Not Equal'
         *  RelationalOperator: '<S224>/Not Equal1'
         *  Switch: '<S224>/Switch2'
         *  Switch: '<S224>/Switch3'
         */
        if ((HeOHSR_t_Idle_dT != 0.0F) && (rtb_Sum2_oy != 0.0F))
        {
            /* Switch: '<S224>/Switch1' incorporates:
             *  Product: '<S224>/Division'
             */
            rtb_Sum2_oy = HeOHSR_t_Idle_dT / rtb_Sum2_oy;
        }
        else if (HeOHSR_t_Idle_dT > 0.0F)
        {
            /* Switch: '<S224>/Switch2' incorporates:
             *  Constant: '<S224>/MAXFLOAT'
             *  Switch: '<S224>/Switch1'
             */
            rtb_Sum2_oy = 3.402823466E+38F;
        }
        else if (HeOHSR_t_Idle_dT < 0.0F)
        {
            /* Switch: '<S224>/Switch3' incorporates:
             *  Constant: '<S224>/MINFLOAT'
             *  Switch: '<S224>/Switch1'
             *  Switch: '<S224>/Switch2'
             */
            rtb_Sum2_oy = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S224>/Switch1' incorporates:
             *  Constant: '<S224>/Constant Value4'
             *  Switch: '<S224>/Switch2'
             *  Switch: '<S224>/Switch3'
             */
            rtb_Sum2_oy = 0.0F;
        }

        /* End of Switch: '<S224>/Switch1' */
        /* End of Outputs for SubSystem: '<S214>/Protected Division' */

        /* Switch: '<S214>/Switch1' incorporates:
         *  Constant: '<S214>/Constant Value2'
         *  Constant: '<S214>/Constant Value3'
         *  Logic: '<S214>/Logical'
         *  Logic: '<S214>/Logical2'
         *  MinMax: '<S214>/MinMax'
         *  Sum: '<S214>/Summation1'
         *  UnitDelay: '<S214>/Unit Delay1'
         *  UnitDelay: '<S214>/Unit Delay3'
         */
        if ((!OHSR_ac_DW.UnitDelay1_DSTATE_kp) || rtb_Comparison10_f)
        {
            OHSR_ac_DW.UnitDelay3_DSTATE_er = 1.0F;
        }

        OHSR_ac_DW.UnitDelay3_DSTATE_er = fminf(OHSR_ac_DW.UnitDelay3_DSTATE_er
            + rtb_Sum2_oy, 1.0F);
    }

    /* End of Switch: '<S214>/Switch2' */
    /* End of Outputs for SubSystem: '<S19>/Strategic_IS' */
    (void)Rte_Read_VeSCOR_n_IdleSpeedMB_Value(&OHSR_ac_DW.UnitDelay3_DSTATE_b);
    (void)Rte_Read_VeSCOR_n_IdleSpeedMA_Value(&tmpRead_v);

    /* Outputs for Atomic SubSystem: '<S19>/Strategic_IS' */
    /* Switch: '<S169>/Switch6' incorporates:
     *  Constant: '<S169>/Constant Value7'
     *  Inport: '<Root>/VeSCOR_n_IdleSpeedMA'
     *  Inport: '<Root>/VeSCOR_n_IdleSpeedMB'
     *  RelationalOperator: '<S169>/Comparison8'
     */
    if (rtb_Subtraction5_e_tmp == 0)
    {
        OHSR_ac_DW.UnitDelay3_DSTATE_b = tmpRead_v;
    }

    /* End of Switch: '<S169>/Switch6' */

    /* Sum: '<S214>/Summation' incorporates:
     *  Constant: '<S214>/Constant Value'
     *  Product: '<S214>/Multiplication'
     *  Product: '<S214>/Multiplication3'
     *  Sum: '<S214>/Subtraction'
     *  UnitDelay: '<S169>/Unit Delay3'
     *  UnitDelay: '<S214>/Unit Delay'
     *  UnitDelay: '<S214>/Unit Delay3'
     */
    rtb_Sum2_oy = ((1.0F - OHSR_ac_DW.UnitDelay3_DSTATE_er) *
                   OHSR_ac_DW.UnitDelay_DSTATE_ew) +
        (OHSR_ac_DW.UnitDelay3_DSTATE_er * OHSR_ac_DW.UnitDelay3_DSTATE_b);

    /* End of Outputs for SubSystem: '<S19>/Strategic_IS' */
    (void)Rte_Read_VeOSMR_b_LwrdCreepEna_Value(&rtb_AND_bs);

    /* Outputs for Atomic SubSystem: '<S19>/Strategic_IS' */
    /* If: '<S161>/If' incorporates:
     *  Constant: '<S191>/Calib'
     *  Constant: '<S192>/Calib'
     *  Inport: '<Root>/VeEOCR_r_ColdCtrlCostFact_Stgc'
     *  Inport: '<Root>/VeOSMR_b_LwrdCreepEna'
     *  Logic: '<S148>/Logical'
     *  Logic: '<S148>/Logical1'
     *  Logic: '<S148>/Logical2'
     *  Logic: '<S148>/Logical3'
     *  Logic: '<S161>/Logical1'
     *  Logic: '<S161>/Logical2'
     */
    if (rtb_AND_bs)
    {
        /* Merge: '<S161>/Merge1' incorporates:
         *  Inport: '<Root>/VeOSMR_n_LwrdCreepIdleSpd'
         */
        (void)Rte_Read_VeOSMR_n_LwrdCreepIdleSpd_Value
            ((&(VeOHSR_n_IS_Rate_Strat_b4Grad)));

        /* Outputs for IfAction SubSystem: '<S161>/Lwrd_Creep_Enabled' incorporates:
         *  ActionPort: '<S194>/Action Port'
         */
        /* Merge: '<S161>/Merge2' incorporates:
         *  Constant: '<S210>/Constant'
         *  SignalConversion generated from: '<S194>/Case'
         */
        VeOHSR_e_ActiveActionBlock = CeOHSR_e_Lwrd_Creep_Enbl;

        /* Merge: '<S161>/Merge3' incorporates:
         *  Constant: '<S194>/FALSE Constant'
         *  SignalConversion generated from: '<S194>/GradientReset'
         */
        VeOHSR_b_GradLimReset = false;

        /* End of Outputs for SubSystem: '<S161>/Lwrd_Creep_Enabled' */
    }
    else if (((VeOHSR_b_StratHys) && (VeOHSR_b_AcclPosThrsh)) &&
             (VeOHSR_b_StrSpd))
    {
        /* Outputs for IfAction SubSystem: '<S161>/SCOR_IdleSpd' incorporates:
         *  ActionPort: '<S195>/Action Port'
         */
        /* Merge: '<S161>/Merge2' incorporates:
         *  Constant: '<S211>/Constant'
         *  SignalConversion generated from: '<S195>/Case'
         */
        VeOHSR_e_ActiveActionBlock = CeOHSR_e_Strat1d_IS;

        /* End of Outputs for SubSystem: '<S161>/SCOR_IdleSpd' */

        /* Switch: '<S161>/Switch7' incorporates:
         *  Constant: '<S188>/Calib'
         */
        if (HeOHSR_b_NFZEnbl)
        {
            /* Outputs for IfAction SubSystem: '<S161>/SCOR_IdleSpd' incorporates:
             *  ActionPort: '<S195>/Action Port'
             */
            /* Merge: '<S161>/Merge1' incorporates:
             *  Inport: '<S195>/SCOR_IdleSpd'
             */
            VeOHSR_n_IS_Rate_Strat_b4Grad = VeOHSR_n_ISDMB_CG;

            /* End of Outputs for SubSystem: '<S161>/SCOR_IdleSpd' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S161>/SCOR_IdleSpd' incorporates:
             *  ActionPort: '<S195>/Action Port'
             */
            /* Merge: '<S161>/Merge1' incorporates:
             *  Inport: '<S195>/SCOR_IdleSpd'
             */
            VeOHSR_n_IS_Rate_Strat_b4Grad = rtb_Sum2_oy;

            /* End of Outputs for SubSystem: '<S161>/SCOR_IdleSpd' */
        }

        /* End of Switch: '<S161>/Switch7' */

        /* Outputs for IfAction SubSystem: '<S161>/SCOR_IdleSpd' incorporates:
         *  ActionPort: '<S195>/Action Port'
         */
        /* Merge: '<S161>/Merge3' incorporates:
         *  Constant: '<S212>/Calib'
         *  Constant: '<S214>/Constant Value1'
         *  Logic: '<S195>/Logical'
         *  RelationalOperator: '<S214>/Comparison2'
         *  UnitDelay: '<S214>/Unit Delay3'
         */
        VeOHSR_b_GradLimReset = ((OHSR_ac_DW.UnitDelay3_DSTATE_er < 1.0F) &&
            (KeOHSR_b_ISStratSCOR_Reset));

        /* End of Outputs for SubSystem: '<S161>/SCOR_IdleSpd' */
    }
    else if ((KeOHSR_b_Strat_IS_LowOptNi_Enbl) && (((!VeOHSR_b_StrSpd) &&
               (VeOHSR_b_AcclPosThrsh)) && (VeOHSR_b_LowOpt)))
    {
        /* Outputs for IfAction SubSystem: '<S161>/IS_Learning_by_Low_OptNi' incorporates:
         *  ActionPort: '<S190>/Action Port'
         */
        /* Merge: '<S161>/Merge2' incorporates:
         *  Constant: '<S197>/Constant'
         *  SignalConversion generated from: '<S190>/Case'
         */
        VeOHSR_e_ActiveActionBlock = CeOHSR_e_Low_OptNi;

        /* Merge: '<S161>/Merge1' incorporates:
         *  Constant: '<S198>/Calib'
         *  DataTypeConversion: '<S190>/Data Type Conversion'
         *  Selector: '<S190>/Selector1'
         *  SignalConversion generated from: '<S1>/VeOSMR_e_TargetGear'
         *  Sum: '<S190>/Sum1'
         */
        VeOHSR_n_IS_Rate_Strat_b4Grad = VeOHSR_n_Strat_IS_rate -
            KaOHSR_n_IS_Learn_HighOptNi
            [(rtb_TmpSignalConversionAtVeOSMR_e_Targ_a)];

        /* Merge: '<S161>/Merge3' incorporates:
         *  Constant: '<S190>/TRUE Constant'
         *  SignalConversion generated from: '<S190>/GradientReset'
         */
        VeOHSR_b_GradLimReset = true;

        /* End of Outputs for SubSystem: '<S161>/IS_Learning_by_Low_OptNi' */
    }
    else if ((KeOHSR_b_Strat_IS_LowActNi_Enbl) && ((VeOHSR_b_ActNi) &&
              (VeOHSR_b_AcclPosThrsh)))
    {
        /* Outputs for IfAction SubSystem: '<S161>/IS_Learning_by_Low_ActNi' incorporates:
         *  ActionPort: '<S189>/Action Port'
         */
        /* Merge: '<S161>/Merge2' incorporates:
         *  Constant: '<S196>/Constant'
         *  SignalConversion generated from: '<S189>/Case'
         */
        VeOHSR_e_ActiveActionBlock = CeOHSR_e_Low_ActNi;

        /* Merge: '<S161>/Merge1' incorporates:
         *  Inport: '<S189>/OptNi'
         */
        VeOHSR_n_IS_Rate_Strat_b4Grad = VeOHSR_n_ISDMB_CG;

        /* Merge: '<S161>/Merge3' incorporates:
         *  Constant: '<S189>/FALSE Constant'
         *  SignalConversion generated from: '<S189>/GradientReset'
         */
        VeOHSR_b_GradLimReset = false;

        /* End of Outputs for SubSystem: '<S161>/IS_Learning_by_Low_ActNi' */
    }
    else
    {
        (void)Rte_Read_VeEOCR_r_ColdCtrlCostFact_Stgc_Value(&tmpRead_s);

        /* Outputs for IfAction SubSystem: '<S161>/Latch' incorporates:
         *  ActionPort: '<S193>/Action Port'
         */
        /* RelationalOperator: '<S193>/Comparison5' incorporates:
         *  Constant: '<S206>/Calib'
         *  Inport: '<Root>/VeEOCR_r_ColdCtrlCostFact_Stgc'
         */
        rtb_Comparison10_f = (tmpRead_s < KeOHSR_r_Strat_IS_NiTiThresh);

        /* Outputs for Atomic SubSystem: '<S193>/EdgeRising' */
        /* Logic: '<S199>/AND' incorporates:
         *  Logic: '<S199>/OR1'
         *  UnitDelay: '<S199>/Unit Delay'
         */
        rtb_UnitDelay_dm = (rtb_Comparison10_f &&
                            (!OHSR_ac_DW.UnitDelay_DSTATE_ga));

        /* Update for UnitDelay: '<S199>/Unit Delay' */
        OHSR_ac_DW.UnitDelay_DSTATE_ga = rtb_Comparison10_f;

        /* End of Outputs for SubSystem: '<S193>/EdgeRising' */

        /* Logic: '<S193>/Logical2' incorporates:
         *  Constant: '<S203>/Calib'
         *  Constant: '<S205>/Calib'
         *  DataTypeConversion: '<S193>/Data Type Conversion2'
         *  RelationalOperator: '<S193>/Comparison1'
         *  Selector: '<S193>/Selector'
         *  SignalConversion generated from: '<S1>/VeOSMR_e_ActualGear'
         */
        rtb_Comparison10_f = ((rtb_TmpSignalConversionAtVeCSVR_v_VehSpd >
                               KeOHSR_n_Strat_IS_VehSpdLatch) &&
                              (KaOHSR_b_Strat_IS_NiTiGear
                               [(rtb_TmpSignalConversionAtVeOSMR_e_Actu_o)]));

        /* Outputs for Atomic SubSystem: '<S193>/Turn Off Delay Time' */
        /* Outputs for Atomic SubSystem: '<S208>/EdgeFalling1' */
        /* Logic: '<S209>/AND' incorporates:
         *  Logic: '<S209>/OR1'
         *  UnitDelay: '<S209>/Unit Delay'
         */
        rtb_AND_bs = ((!rtb_UnitDelay_dm) && (OHSR_ac_DW.UnitDelay_DSTATE_br));

        /* Update for UnitDelay: '<S209>/Unit Delay' */
        OHSR_ac_DW.UnitDelay_DSTATE_br = rtb_UnitDelay_dm;

        /* End of Outputs for SubSystem: '<S208>/EdgeFalling1' */

        /* Switch: '<S208>/Switch' incorporates:
         *  Constant: '<S202>/Calib'
         *  Constant: '<S207>/Calib'
         *  Constant: '<S208>/Constant Value1'
         *  MinMax: '<S208>/Minimum'
         *  Sum: '<S208>/Summation'
         *  UnitDelay: '<S208>/Unit Delay'
         */
        if (rtb_AND_bs)
        {
            OHSR_ac_DW.UnitDelay_DSTATE_pi =
                KeOHSR_t_IdleSpdLearnDwnTime_NiTiExit;
        }
        else
        {
            OHSR_ac_DW.UnitDelay_DSTATE_pi = fmaxf
                (OHSR_ac_DW.UnitDelay_DSTATE_pi - HeOHSR_t_Idle_dT, 0.0F);
        }

        /* End of Switch: '<S208>/Switch' */

        /* Logic: '<S208>/AND' incorporates:
         *  Constant: '<S208>/Constant Value2'
         *  RelationalOperator: '<S208>/Greater  Than'
         *  UnitDelay: '<S208>/Unit Delay'
         */
        rtb_UnitDelay_dm = (rtb_UnitDelay_dm || (OHSR_ac_DW.UnitDelay_DSTATE_pi >
                             0.0F));

        /* End of Outputs for SubSystem: '<S193>/Turn Off Delay Time' */

        /* Switch: '<S193>/Switch1' incorporates:
         *  Logic: '<S193>/Logical4'
         *  Logic: '<S193>/Logical5'
         */
        if ((!rtb_Comparison10_f) && rtb_UnitDelay_dm)
        {
            /* Merge: '<S161>/Merge2' incorporates:
             *  Constant: '<S201>/Constant'
             */
            VeOHSR_e_ActiveActionBlock = CeOHSR_e_Latch_NiTi;
        }
        else
        {
            /* Merge: '<S161>/Merge2' incorporates:
             *  Constant: '<S200>/Constant'
             */
            VeOHSR_e_ActiveActionBlock = CeOHSR_e_Latch;
        }

        /* End of Switch: '<S193>/Switch1' */

        /* Switch: '<S193>/Switch2' incorporates:
         *  Constant: '<S204>/Calib'
         *  Logic: '<S193>/Logical1'
         *  Logic: '<S193>/Logical3'
         */
        if ((KeOHSR_b_Strat_IS_EnblDynamicLatch) && (rtb_Comparison10_f ||
                rtb_UnitDelay_dm))
        {
            /* Merge: '<S161>/Merge1' */
            VeOHSR_n_IS_Rate_Strat_b4Grad = rtb_Sum2_oy;
        }
        else
        {
            /* Merge: '<S161>/Merge1' */
            VeOHSR_n_IS_Rate_Strat_b4Grad = VeOHSR_n_Strat_IS_rate;
        }

        /* End of Switch: '<S193>/Switch2' */

        /* Merge: '<S161>/Merge3' incorporates:
         *  Constant: '<S193>/FALSE Constant'
         *  SignalConversion generated from: '<S193>/GradientReset'
         */
        VeOHSR_b_GradLimReset = false;

        /* End of Outputs for SubSystem: '<S161>/Latch' */
    }

    /* End of If: '<S161>/If' */

    /* VariantMerge generated from: '<S4>/XeOHSR_b_IdleSpdBSG_Enbl' incorporates:
     *  Constant: '<S157>/Constant Value2'
     *  Lookup_n-D: '<S182>/Vector'
     *  Merge: '<S161>/Merge1'
     *  Product: '<S157>/Product'
     */
    rtb_Sum2_oy = look2_iflf_binlca_16a((VeOHSR_n_ISDMB_CG * VeOHSR_M_OptTiMB_CG)
        * 0.000104719715F, VeOHSR_n_IS_Rate_Strat_b4Grad, ((const float32 *)
        &(KxOHSR_n_IS_PreLookUp[0])), ((const float32 *)&(KyOHSR_n_IS_PreLookUp
        [0])), ((const float32 *)&(KtOHSR_n_IS_PreLookUp[0])),
        OHSR_ac_ConstP.Vector_maxIndex, 4U);

    /* PreLookup: '<S177>/Prelookup' */
    rtb_Prelookup_o1 = plook_u32ff_binca_16a(rtb_Sum2_oy, ((const float32 *)
        &(KaOHSR_n_IS_BrkPts[0])), 4U, &rtb_Sum2_oy);

    /* Sum: '<S177>/Index' incorporates:
     *  Constant: '<S177>/Zero'
     *  RelationalOperator: '<S177>/CheckPos'
     */
    rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = ((float32)((rtb_Sum2_oy > 0.0F) ?
        1 : 0)) + ((float32)rtb_Prelookup_o1);

    /* VariantMerge generated from: '<S4>/XeOHSR_b_IdleSpdBSG_Enbl' incorporates:
     *  Sum: '<S157>/Sum3'
     *  UnitDelay: '<S157>/Unit Delay3'
     */
    rtb_Sum2_oy = rtb_TmpSignalConversionAtVeCSVR_v_VehSpd -
        OHSR_ac_DW.UnitDelay3_DSTATE_ev;

    /* Outputs for Atomic SubSystem: '<S157>/Signal Latch On With Reset' */
    /* Logic: '<S183>/OR1' incorporates:
     *  Constant: '<S157>/Constant Value5'
     *  Constant: '<S157>/Constant Value6'
     *  Logic: '<S183>/NOT'
     *  Logic: '<S183>/OR'
     *  RelationalOperator: '<S157>/Comparison2'
     *  RelationalOperator: '<S157>/Comparison6'
     *  UnitDelay: '<S183>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_fs = ((rtb_Sum2_oy > 0.0F) || ((rtb_Sum2_oy >=
        0.0F) && (OHSR_ac_DW.UnitDelay_DSTATE_fs)));

    /* End of Outputs for SubSystem: '<S157>/Signal Latch On With Reset' */

    /* Selector: '<S157>/Selector1' incorporates:
     *  Constant: '<S174>/Calib'
     */
    VeOHSC_n_DiscISRaw = KaOHSR_n_IS_BrkPts[(sint32)
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd];

    /* Switch: '<S157>/Switch1' */
    if (OHSR_ac_DW.UnitDelay_DSTATE_fs)
    {
        /* Switch: '<S157>/Switch1' incorporates:
         *  Constant: '<S157>/Constant Value'
         *  Constant: '<S157>/Constant Value4'
         *  Constant: '<S174>/Calib'
         *  MinMax: '<S157>/MinMax1'
         *  Selector: '<S157>/Selector2'
         *  Sum: '<S157>/Sum2'
         */
        rtb_Sum2_oy = KaOHSR_n_IS_BrkPts[(sint32)fmaxf
            (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd - 1.0F, 0.0F)];
    }
    else
    {
        /* Switch: '<S157>/Switch1' */
        rtb_Sum2_oy = VeOHSC_n_DiscISRaw;
    }

    /* End of Switch: '<S157>/Switch1' */

    /* Sum: '<S157>/Sum' incorporates:
     *  Constant: '<S179>/Calib'
     */
    VeOHSC_n_DiscISSwitchThld = KeOHSR_n_DiscISThld_Offset + rtb_Sum2_oy;

    /* RelationalOperator: '<S157>/Comparison3' */
    rtb_UnitDelay_dm = (VeOHSR_n_IS_Rate_Strat_b4Grad >
                        VeOHSC_n_DiscISSwitchThld);

    /* Outputs for Atomic SubSystem: '<S157>/Accumulator Reset Enabled Limited' */
    /* Switch: '<S172>/Switch1' incorporates:
     *  Logic: '<S157>/Logical3'
     *  RelationalOperator: '<S157>/Comparison7'
     *  Switch: '<S172>/Switch2'
     *  UnitDelay: '<S157>/Unit Delay4'
     */
    if (OHSR_ac_DW.UnitDelay4_DSTATE_l != VeOHSC_n_DiscISSwitchThld)
    {
        /* Switch: '<S172>/Switch1' incorporates:
         *  Constant: '<S157>/Constant Value7'
         */
        VeOHSC_t_HysTmr = 0.0F;
    }
    else
    {
        if (!rtb_UnitDelay_dm)
        {
            /* Switch: '<S157>/Switch4' incorporates:
             *  Constant: '<S176>/Calib'
             *  Gain: '<S157>/Gain3'
             *  RelationalOperator: '<S157>/Comparison4'
             *  Switch: '<S172>/Switch2'
             */
            if (VeOHSR_n_IS_Rate_Strat_b4Grad >= rtb_Sum2_oy)
            {
                rtb_Sum3_h = HeOHSR_t_Idle_dT;
            }
            else
            {
                rtb_Sum3_h = -HeOHSR_t_Idle_dT;
            }

            /* End of Switch: '<S157>/Switch4' */

            /* Sum: '<S172>/Summation' incorporates:
             *  Switch: '<S172>/Switch2'
             *  UnitDelay: '<S172>/Unit Delay'
             */
            VeOHSC_t_HysTmr = rtb_Sum3_h + VeOHSC_t_HysTmr;

            /* Outputs for Atomic SubSystem: '<S172>/Limiter' */
            /* Switch: '<S185>/Switch1' incorporates:
             *  Constant: '<S181>/Calib'
             *  RelationalOperator: '<S185>/Relational Operator'
             *  Switch: '<S172>/Switch2'
             */
            if (KeOHSR_t_DiscISHysDlyTime < VeOHSC_t_HysTmr)
            {
                /* Switch: '<S185>/Switch1' */
                VeOHSC_t_HysTmr = KeOHSR_t_DiscISHysDlyTime;
            }

            /* End of Switch: '<S185>/Switch1' */

            /* Switch: '<S185>/Switch' incorporates:
             *  Constant: '<S157>/Constant Value7'
             *  RelationalOperator: '<S185>/Relational Operator1'
             *  Switch: '<S172>/Switch2'
             */
            if (VeOHSC_t_HysTmr <= 0.0F)
            {
                /* Switch: '<S172>/Switch2' */
                VeOHSC_t_HysTmr = 0.0F;
            }

            /* End of Switch: '<S185>/Switch' */
            /* End of Outputs for SubSystem: '<S172>/Limiter' */
        }
    }

    /* End of Switch: '<S172>/Switch1' */
    /* End of Outputs for SubSystem: '<S157>/Accumulator Reset Enabled Limited' */

    /* Switch: '<S157>/Switch3' incorporates:
     *  Constant: '<S181>/Calib'
     *  Logic: '<S157>/Logical1'
     *  RelationalOperator: '<S157>/Comparison1'
     */
    if (rtb_UnitDelay_dm || (VeOHSC_t_HysTmr >= KeOHSR_t_DiscISHysDlyTime))
    {
        /* VariantMerge generated from: '<S4>/XeOHSR_b_IdleSpdBSG_Enbl' */
        rtb_Sum2_oy = VeOHSC_n_DiscISRaw;
    }

    /* End of Switch: '<S157>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S157>/EdgeRising' */
    /* Logic: '<S175>/AND' incorporates:
     *  Logic: '<S175>/OR1'
     *  UnitDelay: '<S175>/Unit Delay'
     */
    rtb_UnitDelay_dm = !OHSR_ac_DW.UnitDelay_DSTATE_d1;

    /* Update for UnitDelay: '<S175>/Unit Delay' incorporates:
     *  Constant: '<S157>/TRUE Constant2'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_d1 = true;

    /* End of Outputs for SubSystem: '<S157>/EdgeRising' */

    /* Switch: '<S184>/Switch1' */
    if (rtb_UnitDelay_dm)
    {
        /* Switch: '<S8>/Switch' */
        rtb_Sum3_h = rtb_Sum2_oy;
    }
    else
    {
        /* Switch: '<S8>/Switch' incorporates:
         *  UnitDelay: '<S184>/Unit Delay'
         */
        rtb_Sum3_h = OHSR_ac_DW.UnitDelay_DSTATE_bt0;
    }

    /* End of Switch: '<S184>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S157>/Accumulator Reset Enabled Limited1' */
    /* Switch: '<S173>/Switch1' incorporates:
     *  Logic: '<S157>/Logical2'
     *  RelationalOperator: '<S157>/Comparison5'
     *  Switch: '<S157>/Switch'
     *  UnitDelay: '<S157>/Unit Delay2'
     */
    if ((rtb_Sum2_oy != rtb_Sum3_h) && (OHSR_ac_DW.UnitDelay2_DSTATE_k))
    {
        /* Switch: '<S173>/Switch1' incorporates:
         *  Constant: '<S157>/Constant Value10'
         */
        VeOHSC_t_DlyTmr = 0.0F;

        /* Switch: '<S8>/Switch' */
        rtb_Sum3_h = rtb_Sum2_oy;
    }
    else
    {
        /* Sum: '<S173>/Summation' incorporates:
         *  Constant: '<S176>/Calib'
         *  UnitDelay: '<S173>/Unit Delay'
         */
        VeOHSC_t_DlyTmr = HeOHSR_t_Idle_dT + VeOHSC_t_DlyTmr;

        /* Outputs for Atomic SubSystem: '<S173>/Limiter' */
        /* Switch: '<S186>/Switch1' incorporates:
         *  Constant: '<S180>/Calib'
         *  RelationalOperator: '<S186>/Relational Operator'
         */
        if (KeOHSR_t_DiscISDlyTime < VeOHSC_t_DlyTmr)
        {
            /* Switch: '<S186>/Switch1' */
            VeOHSC_t_DlyTmr = KeOHSR_t_DiscISDlyTime;
        }

        /* End of Switch: '<S186>/Switch1' */

        /* Switch: '<S186>/Switch' incorporates:
         *  Constant: '<S157>/Constant Value10'
         *  RelationalOperator: '<S186>/Relational Operator1'
         */
        if (VeOHSC_t_DlyTmr <= 0.0F)
        {
            /* Switch: '<S173>/Switch1' */
            VeOHSC_t_DlyTmr = 0.0F;
        }

        /* End of Switch: '<S186>/Switch' */
        /* End of Outputs for SubSystem: '<S173>/Limiter' */
    }

    /* End of Switch: '<S173>/Switch1' */
    /* End of Outputs for SubSystem: '<S157>/Accumulator Reset Enabled Limited1' */

    /* Switch: '<S157>/Switch2' incorporates:
     *  Constant: '<S178>/Calib'
     */
    if (KeOHSR_b_DisableDiscreteIS)
    {
        /* Switch: '<S157>/Switch2' */
        VeOHSC_n_DiscreteIS = VeOHSR_n_IS_Rate_Strat_b4Grad;
    }
    else
    {
        /* Switch: '<S157>/Switch2' */
        VeOHSC_n_DiscreteIS = rtb_Sum3_h;
    }

    /* End of Switch: '<S157>/Switch2' */

    /* Switch: '<S184>/Switch3' incorporates:
     *  UnitDelay: '<S184>/Unit Delay'
     */
    if (rtb_UnitDelay_dm)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_bt0 = rtb_Sum2_oy;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_bt0 = rtb_Sum3_h;
    }

    /* End of Switch: '<S184>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S148>/GradientLimiter2' */
    /* Switch: '<S158>/Switch1' */
    if (VeOHSR_b_GradLimReset)
    {
        /* Switch: '<S158>/Switch1' */
        VeOHSR_n_Start_IS_b4_min = VeOHSC_n_DiscreteIS;
    }
    else
    {
        /* Sum: '<S158>/Sum2' incorporates:
         *  UnitDelay: '<S158>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeVSDR_dn_Str_f = VeOHSC_n_DiscreteIS -
            VeOHSR_n_Start_IS_b4_min;

        /* Outputs for Atomic SubSystem: '<S158>/Limiter' */
        /* Switch: '<S187>/Switch1' incorporates:
         *  Constant: '<S163>/Calib'
         *  DataTypeConversion: '<S161>/Data Type Conversion2'
         *  Merge: '<S161>/Merge2'
         *  RelationalOperator: '<S187>/Relational Operator'
         *  Selector: '<S148>/Selector'
         */
        if (KaOHSR_n_Strat_IS_Rate_UpLim[(sint16)VeOHSR_e_ActiveActionBlock] <
                rtb_TmpSignalConversionAtVeVSDR_dn_Str_f)
        {
            /* Switch: '<S187>/Switch1' */
            rtb_TmpSignalConversionAtVeVSDR_dn_Str_f =
                KaOHSR_n_Strat_IS_Rate_UpLim[(sint16)VeOHSR_e_ActiveActionBlock];
        }

        /* End of Switch: '<S187>/Switch1' */
        /* End of Outputs for SubSystem: '<S158>/Limiter' */

        /* Selector: '<S148>/Selector1' incorporates:
         *  Constant: '<S162>/Calib'
         *  DataTypeConversion: '<S161>/Data Type Conversion2'
         *  Merge: '<S161>/Merge2'
         */
        tmpRead_v = KaOHSR_n_Strat_IS_Rate_LowLim[(sint16)
            VeOHSR_e_ActiveActionBlock];

        /* Outputs for Atomic SubSystem: '<S158>/Limiter' */
        /* Switch: '<S187>/Switch' incorporates:
         *  Constant: '<S162>/Calib'
         *  RelationalOperator: '<S187>/Relational Operator1'
         *  Selector: '<S148>/Selector1'
         */
        if (rtb_TmpSignalConversionAtVeVSDR_dn_Str_f > tmpRead_v)
        {
            tmpRead_v = rtb_TmpSignalConversionAtVeVSDR_dn_Str_f;
        }

        /* End of Switch: '<S187>/Switch' */
        /* End of Outputs for SubSystem: '<S158>/Limiter' */

        /* Switch: '<S158>/Switch1' incorporates:
         *  Sum: '<S158>/Sum3'
         *  UnitDelay: '<S158>/Unit Delay'
         */
        VeOHSR_n_Start_IS_b4_min = tmpRead_v + VeOHSR_n_Start_IS_b4_min;
    }

    /* End of Switch: '<S158>/Switch1' */
    /* End of Outputs for SubSystem: '<S148>/GradientLimiter2' */
    /* End of Outputs for SubSystem: '<S19>/Strategic_IS' */
    (void)Rte_Read_VeEOCR_b_ColdCtrl_Raw_Value(&rtb_Logical_i);

    /* Outputs for Atomic SubSystem: '<S19>/Strategic_IS' */
    /* MinMax: '<S148>/MinMax' incorporates:
     *  Inport: '<Root>/VeEOCR_b_ColdCtrl_Raw'
     */
    VeOHSR_n_Strat_IS_rate = fminf(VeOHSR_n_IdleSpdMax, VeOHSR_n_Start_IS_b4_min);

    /* Update for UnitDelay: '<S213>/Unit Delay1' incorporates:
     *  Constant: '<S213>/TRUE Constant'
     */
    OHSR_ac_DW.UnitDelay1_DSTATE_c = true;

    /* Update for UnitDelay: '<S169>/Unit Delay2' */
    OHSR_ac_DW.UnitDelay2_DSTATE_a = OHSR_ac_DW.UnitDelay_DSTATE_gz;

    /* Update for UnitDelay: '<S214>/Unit Delay1' incorporates:
     *  Constant: '<S214>/TRUE Constant'
     */
    OHSR_ac_DW.UnitDelay1_DSTATE_kp = true;

    /* Update for UnitDelay: '<S157>/Unit Delay3' */
    OHSR_ac_DW.UnitDelay3_DSTATE_ev = rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;

    /* Update for UnitDelay: '<S157>/Unit Delay4' */
    OHSR_ac_DW.UnitDelay4_DSTATE_l = VeOHSC_n_DiscISSwitchThld;

    /* Update for UnitDelay: '<S157>/Unit Delay2' incorporates:
     *  Constant: '<S180>/Calib'
     *  RelationalOperator: '<S157>/Comparison'
     */
    OHSR_ac_DW.UnitDelay2_DSTATE_k = (VeOHSC_t_DlyTmr >= KeOHSR_t_DiscISDlyTime);

    /* End of Outputs for SubSystem: '<S19>/Strategic_IS' */

    /* Outputs for Atomic SubSystem: '<S19>/TurbineSpdOffset' */
    /* Switch: '<S149>/Switch2' incorporates:
     *  Constant: '<S227>/Calib'
     *  Inport: '<Root>/VeEOCR_n_Ni_ColdCtrl'
     *  Logic: '<S149>/Logical'
     */
    if ((rtb_Logical_i && rtb_TmpSignalConversionAtVeCSVR_b_NTurbF) &&
            (KeOHSR_b_TurbSpdOffsetPrev_Enbl))
    {
        (void)Rte_Read_VeEOCR_n_Ni_ColdCtrl_Value
            (&rtb_LeOHSC_n_IdleSpeedSetPoint);

        /* Switch: '<S149>/Switch2' incorporates:
         *  Constant: '<S228>/Calib'
         *  Inport: '<Root>/VeEOCR_n_Ni_ColdCtrl'
         *  MinMax: '<S149>/MinMax'
         *  Sum: '<S149>/Sum'
         */
        VeOHSC_n_IdlSpdSetPoint_TurbOfs = fminf(rtb_LeOHSC_n_IdleSpeedSetPoint,
            rtb_TmpSignalConversionAtVeVSDR_n_NTur_j -
            KeOHSR_t_TurbSpdPrev_Offset);
    }
    else
    {
        /* Switch: '<S149>/Switch2' incorporates:
         *  Constant: '<S149>/Constant Value'
         */
        VeOHSC_n_IdlSpdSetPoint_TurbOfs = 0.0F;
    }

    /* End of Switch: '<S149>/Switch2' */
    /* End of Outputs for SubSystem: '<S19>/TurbineSpdOffset' */

    /* Outputs for Atomic SubSystem: '<S19>/IS_Arbitration' */
    /* MinMax: '<S146>/MinMax1' incorporates:
     *  Inport: '<S4>/TgtIdleSpd'
     *  MinMax: '<S146>/MinMax2'
     */
    VeOHSR_n_IdleSpd_arb = fmaxf(fmaxf(VeOHSR_n_TransTurb_IS,
        rtb_TmpSignalConversionAtVeOSMR_n_Tran_f), VeOHSR_n_Strat_IS_rate);

    /* MinMax: '<S146>/MinMax2' */
    rtb_LeOHSC_n_IdleSpeedSetPoint = fmaxf(VeOHSR_n_IdleSpd_arb,
        VeOHSC_n_IdlSpdSetPoint_TurbOfs);

    /* End of Outputs for SubSystem: '<S19>/IS_Arbitration' */

    /* VariantMerge generated from: '<S7>/XeOHSR_b_EngCalc_Enbl' */
    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_k = VeOHSR_n_IdleSpd_arb;

    /* End of Outputs for SubSystem: '<S7>/IdleSpdArbitration' */
#else

    /* VariantMerge generated from: '<S7>/XeOHSR_b_EngCalc_Enbl' incorporates:
     *  Inport: '<S4>/TgtIdleSpd'
     *  SignalConversion generated from: '<S7>/XeOHSR_b_EngCalc_Enbl'
     */
    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_k =
        rtb_TmpSignalConversionAtVeOSMR_n_Tran_f;

#endif

    /* End of SignalConversion generated from: '<S7>/XeOHSR_b_EngCalc_Enbl' */

    /* Outputs for Atomic SubSystem: '<S7>/EdgeBi' */
    /* RelationalOperator: '<S12>/Not Equal' incorporates:
     *  UnitDelay: '<S12>/Unit Delay'
     */
    rtb_AND_bs = (VeOHSR_b_IdleSpdCalcEngOn != OHSR_ac_DW.UnitDelay_DSTATE_ejw);

    /* Update for UnitDelay: '<S12>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_ejw = VeOHSR_b_IdleSpdCalcEngOn;

    /* End of Outputs for SubSystem: '<S7>/EdgeBi' */

    /* If: '<S7>/If' incorporates:
     *  Logic: '<S18>/Logical5'
     */
    rtPrevAction = OHSR_ac_DW.If_ActiveSubsystem_p;

    /* Outputs for Atomic SubSystem: '<S7>/IS_Blend_Filt' */
    rtb_TmpSignalConversionAtVeCSVR_b_NTurbF = !VeOHSR_b_IdleSpdCalcEngOn;

    /* End of Outputs for SubSystem: '<S7>/IS_Blend_Filt' */
    OHSR_ac_DW.If_ActiveSubsystem_p = (sint8)
        (rtb_TmpSignalConversionAtVeCSVR_b_NTurbF ? 1 : 0);
    if ((rtPrevAction != (rtb_TmpSignalConversionAtVeCSVR_b_NTurbF ? 1 : 0)) &&
            (rtPrevAction == 1))
    {
        /* Disable for If: '<S15>/If' */
        OHSR_ac_DW.If_ActiveSubsystem_e = -1;
    }

    if (!rtb_TmpSignalConversionAtVeCSVR_b_NTurbF)
    {
        /* Outputs for IfAction SubSystem: '<S7>/EngineOn' incorporates:
         *  ActionPort: '<S16>/Action Port'
         */
        /* Merge: '<S7>/Merge' incorporates:
         *  Gain: '<S85>/Gain'
         */
        VeOHSC_n_IdleSpdTgt_Raw =
            OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_k;

        /* Merge: '<S7>/Merge1' incorporates:
         *  Constant: '<S16>/FALSE Constant'
         *  SignalConversion generated from: '<S16>/IdleSpdActv'
         */
        rtb_Logical_i = false;

        /* End of Outputs for SubSystem: '<S7>/EngineOn' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S7>/EngineOff' incorporates:
         *  ActionPort: '<S15>/Action Port'
         */
        /* If: '<S15>/If' incorporates:
         *  Inport: '<Root>/VeCSVR_n_PrimWhlSpdSigned'
         */
        rtPrevAction = OHSR_ac_DW.If_ActiveSubsystem_e;
        if (rtb_TmpSignalConversionAtShftEfftRdctn_R)
        {
            OHSR_ac_DW.If_ActiveSubsystem_e = 0;
        }
        else if (rtb_TmpSignalConversionAtShftEfft_N4H_Re)
        {
            OHSR_ac_DW.If_ActiveSubsystem_e = 1;
        }
        else
        {
            OHSR_ac_DW.If_ActiveSubsystem_e = 2;
        }

        switch (OHSR_ac_DW.If_ActiveSubsystem_e)
        {
          case 0:
            (void)Rte_Read_VeCSVR_n_PrimWhlSpdSigned_Value(&tmpRead_w);

            /* Outputs for IfAction SubSystem: '<S15>/ShftEffrtRdctn_SpdOvrrd' incorporates:
             *  ActionPort: '<S31>/Action Port'
             */
            /* Merge: '<S7>/Merge' incorporates:
             *  Constant: '<S81>/Calib'
             *  Constant: '<S82>/Calib'
             *  Inport: '<Root>/VeCSVR_n_PrimWhlSpdSigned'
             *  Lookup_n-D: '<S83>/Vector'
             *  MinMax: '<S31>/MinMax'
             *  MinMax: '<S31>/MinMax1'
             *  MinMax: '<S31>/MinMax2'
             *  MinMax: '<S31>/MinMax3'
             *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
             *  Sum: '<S31>/Sum1'
             */
            VeOHSC_n_IdleSpdTgt_Raw = fmaxf
                (rtb_TmpSignalConversionAtVeTISR_n_Inpu_d -
                 KeOHSR_n_ShftEfftRdctn_MaxSlip, fminf(fmaxf
                  (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_k,
                   KeOHSR_n_ShftEfftRdctn_MaxTgt), fmaxf
                  (rtb_TmpSignalConversionAtVeTISR_n_TransM,
                   look2_iflf_binlca_16a(tmpRead_w,
                    rtb_TmpSignalConversionAtVeTFTR_T_Tran_b, ((const float32 *)
                     &(KxOHSR_n_ShftEfftRdctn_SpdTgt[0])), ((const float32 *)
                     &(KyOHSR_n_ShftEfftRdctn_SpdTgt[0])), ((const float32 *)
                     &(KtOHSR_n_ShftEfftRdctn_SpdTgt[0])),
                    OHSR_ac_ConstP.Vector_maxIndex_n, 13U))));

            /* Merge: '<S7>/Merge1' incorporates:
             *  Constant: '<S31>/FALSE Constant'
             *  SignalConversion generated from: '<S31>/P2_MinIdle_Actv'
             */
            rtb_Logical_i = false;

            /* End of Outputs for SubSystem: '<S15>/ShftEffrtRdctn_SpdOvrrd' */
            break;

          case 1:
            /* Outputs for IfAction SubSystem: '<S15>/TCaseOutOfNeutral' incorporates:
             *  ActionPort: '<S32>/Action Port'
             */
            /* Merge: '<S7>/Merge' incorporates:
             *  Constant: '<S84>/Calib'
             *  SignalConversion generated from: '<S32>/P2Spd'
             */
            VeOHSC_n_IdleSpdTgt_Raw = KeOHSR_n_ShftEfftRed_N4H;

            /* Merge: '<S7>/Merge1' incorporates:
             *  Constant: '<S32>/FALSE Constant'
             *  SignalConversion generated from: '<S32>/P2_MinIdle_Actv'
             */
            rtb_Logical_i = false;

            /* End of Outputs for SubSystem: '<S15>/TCaseOutOfNeutral' */
            break;

          default:
            if (OHSR_ac_DW.If_ActiveSubsystem_e != rtPrevAction)
            {
                /* SystemReset for IfAction SubSystem: '<S15>/MinIdle' incorporates:
                 *  ActionPort: '<S30>/Action Port'
                 */
                /* SystemReset for Atomic SubSystem: '<S30>/OPTL_MinIdle' */
                /* SystemReset for If: '<S15>/If' incorporates:
                 *  Selector: '<S58>/Selector2'
                 *  Switch: '<S74>/Switch1'
                 *  Switch: '<S76>/Switch1'
                 *  Switch: '<S78>/Switch1'
                 *  Switch: '<S80>/Switch1'
                 *  UnitDelay: '<S34>/Unit Delay'
                 *  UnitDelay: '<S36>/Unit Delay'
                 *  UnitDelay: '<S37>/Unit Delay'
                 *  UnitDelay: '<S38>/Unit Delay'
                 *  UnitDelay: '<S39>/Unit Delay'
                 *  UnitDelay: '<S40>/Unit Delay'
                 *  UnitDelay: '<S41>/Unit Delay4'
                 *  UnitDelay: '<S58>/Unit Delay1'
                 *  UnitDelay: '<S62>/Unit Delay'
                 *  UnitDelay: '<S62>/Unit Delay1'
                 *  UnitDelay: '<S66>/Unit Delay'
                 *  UnitDelay: '<S73>/Unit Delay'
                 *  UnitDelay: '<S74>/Unit Delay'
                 *  UnitDelay: '<S75>/Unit Delay'
                 *  UnitDelay: '<S76>/Unit Delay'
                 *  UnitDelay: '<S77>/Unit Delay'
                 *  UnitDelay: '<S78>/Unit Delay'
                 *  UnitDelay: '<S79>/Unit Delay'
                 *  UnitDelay: '<S80>/Unit Delay'
                 */
                OHSR_ac_DW.UnitDelay4_DSTATE_e = 0.0F;
                OHSR_ac_DW.UnitDelay1_DSTATE_nm = 0.0F;
                OHSR_ac_DW.UnitDelay_DSTATE_nt = 0.0F;
                OHSR_ac_DW.UnitDelay1_DSTATE_m = false;
                OHSR_ac_DW.UnitDelay_DSTATE_bt = 0.0F;

                /* SystemReset for Atomic SubSystem: '<S33>/Hysteresis3' */
                OHSR_ac_DW.UnitDelay_DSTATE_b2y = false;

                /* End of SystemReset for SubSystem: '<S33>/Hysteresis3' */

                /* SystemReset for Atomic SubSystem: '<S33>/Hysteresis2' */
                OHSR_ac_DW.UnitDelay_DSTATE_k5 = false;

                /* End of SystemReset for SubSystem: '<S33>/Hysteresis2' */

                /* SystemReset for Atomic SubSystem: '<S33>/Hysteresis' */
                OHSR_ac_DW.UnitDelay_DSTATE_kmt = false;

                /* End of SystemReset for SubSystem: '<S33>/Hysteresis' */

                /* SystemReset for Atomic SubSystem: '<S33>/Hysteresis1' */
                OHSR_ac_DW.UnitDelay_DSTATE_bg = false;

                /* End of SystemReset for SubSystem: '<S33>/Hysteresis1' */

                /* SystemReset for Atomic SubSystem: '<S33>/Hysteresis4' */
                OHSR_ac_DW.UnitDelay_DSTATE_bz5 = false;

                /* End of SystemReset for SubSystem: '<S33>/Hysteresis4' */

                /* SystemReset for Atomic SubSystem: '<S33>/EdgeFalling' */
                OHSR_ac_DW.UnitDelay_DSTATE_ae4 = false;

                /* End of SystemReset for SubSystem: '<S33>/EdgeFalling' */

                /* SystemReset for Atomic SubSystem: '<S33>/Turn Off Delay Time' */
                OHSR_ac_DW.UnitDelay_DSTATE_jzx = 0.0F;

                /* SystemReset for Atomic SubSystem: '<S61>/EdgeFalling1' */
                OHSR_ac_DW.UnitDelay_DSTATE_dv = false;

                /* End of SystemReset for SubSystem: '<S61>/EdgeFalling1' */
                /* End of SystemReset for SubSystem: '<S33>/Turn Off Delay Time' */

                /* SystemReset for Atomic SubSystem: '<S58>/Turn Off Delay Time2' */
                OHSR_ac_DW.UnitDelay_DSTATE_an = 0.0F;

                /* SystemReset for Atomic SubSystem: '<S71>/EdgeFalling1' */
                OHSR_ac_DW.UnitDelay_DSTATE_k3n = false;

                /* End of SystemReset for SubSystem: '<S71>/EdgeFalling1' */
                /* End of SystemReset for SubSystem: '<S58>/Turn Off Delay Time2' */

                /* SystemReset for Atomic SubSystem: '<S58>/Turn Off Delay Time3' */
                OHSR_ac_DW.UnitDelay_DSTATE_dam = 0.0F;

                /* SystemReset for Atomic SubSystem: '<S72>/EdgeFalling1' */
                OHSR_ac_DW.UnitDelay_DSTATE_gxe = false;

                /* End of SystemReset for SubSystem: '<S72>/EdgeFalling1' */
                /* End of SystemReset for SubSystem: '<S58>/Turn Off Delay Time3' */

                /* SystemReset for Atomic SubSystem: '<S58>/EdgeRising1' */
                OHSR_ac_DW.UnitDelay_DSTATE_bzw = false;

                /* End of SystemReset for SubSystem: '<S58>/EdgeRising1' */

                /* SystemReset for Atomic SubSystem: '<S59>/EdgeFalling1' */
                OHSR_ac_DW.UnitDelay_DSTATE_gy = false;

                /* End of SystemReset for SubSystem: '<S59>/EdgeFalling1' */
                /* End of SystemReset for SubSystem: '<S30>/OPTL_MinIdle' */
                /* End of SystemReset for SubSystem: '<S15>/MinIdle' */
            }

            /* Outputs for IfAction SubSystem: '<S15>/MinIdle' incorporates:
             *  ActionPort: '<S30>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S30>/OPTL_MinIdle' */
            /* Abs: '<S33>/Abs' */
            rtb_TmpSignalConversionAtVeTISR_n_Inpu_d = fabsf
                (rtb_TmpSignalConversionAtVeCSVR_n_TransO);

            /* Outputs for Atomic SubSystem: '<S33>/Hysteresis3' */
            /* Switch: '<S39>/Switch1' incorporates:
             *  Constant: '<S39>/Constant Value'
             *  Constant: '<S46>/Calib'
             *  Constant: '<S47>/Calib'
             *  RelationalOperator: '<S39>/Greater  Than'
             *  RelationalOperator: '<S39>/Greater  Than1'
             *  UnitDelay: '<S39>/Unit Delay'
             */
            if (rtb_TmpSignalConversionAtVeAPSR_Pct_Ac_c > ((float32)
                    Rte_Prm_KeOPTR_Pct_P2ZeroIdle_2Pdl_Acl_RSP_KeOPTR_Pct_P2ZeroIdle_2Pdl_Acl_RSP
                    ()))
            {
                OHSR_ac_DW.UnitDelay_DSTATE_b2y = true;
            }
            else
            {
                OHSR_ac_DW.UnitDelay_DSTATE_b2y =
                    ((rtb_TmpSignalConversionAtVeAPSR_Pct_Ac_c >= ((float32)
                       Rte_Prm_KeOPTR_Pct_P2ZeroIdle_2Pdl_Acl_LSP_KeOPTR_Pct_P2ZeroIdle_2Pdl_Acl_LSP
                       ())) && (OHSR_ac_DW.UnitDelay_DSTATE_b2y));
            }

            /* End of Switch: '<S39>/Switch1' */
            /* End of Outputs for SubSystem: '<S33>/Hysteresis3' */

            /* Outputs for Atomic SubSystem: '<S33>/Hysteresis2' */
            /* Switch: '<S38>/Switch1' incorporates:
             *  Constant: '<S38>/Constant Value'
             *  Constant: '<S44>/Calib'
             *  Constant: '<S45>/Calib'
             *  RelationalOperator: '<S38>/Greater  Than'
             *  RelationalOperator: '<S38>/Greater  Than1'
             *  UnitDelay: '<S38>/Unit Delay'
             */
            if (rtb_TmpSignalConversionAtVeRGNR_M_DrvInt > ((float32)
                    Rte_Prm_KeOPTR_M_P2ZeroIdle_2Pdl_BrkTrq_RSP_KeOPTR_M_P2ZeroIdle_2Pdl_BrkTrq_RSP
                    ()))
            {
                OHSR_ac_DW.UnitDelay_DSTATE_k5 = true;
            }
            else
            {
                OHSR_ac_DW.UnitDelay_DSTATE_k5 =
                    ((rtb_TmpSignalConversionAtVeRGNR_M_DrvInt >= ((float32)
                       Rte_Prm_KeOPTR_M_P2ZeroIdle_2Pdl_BrkTrq_LSP_KeOPTR_M_P2ZeroIdle_2Pdl_BrkTrq_LSP
                       ())) && (OHSR_ac_DW.UnitDelay_DSTATE_k5));
            }

            /* End of Switch: '<S38>/Switch1' */
            /* End of Outputs for SubSystem: '<S33>/Hysteresis2' */

            /* Abs: '<S58>/Abs1' incorporates:
             *  Constant: '<S17>/Calib'
             *  Constant: '<S62>/Constant Value1'
             *  Product: '<S62>/Multiplication3'
             */
            rtb_TmpSignalConversionAtVeCSVR_n_TransO = HeOHSR_t_Idle_dT / 2.0F;

            /* Product: '<S62>/Multiplication4' incorporates:
             *  Constant: '<S64>/Calib'
             *  Sum: '<S62>/Summation2'
             *  UnitDelay: '<S62>/Unit Delay1'
             */
            rtb_TmpSignalConversionAtVeTFTR_T_Tran_b =
                (rtb_TmpSignalConversionAtVeCSVR_n_TransO - ((float32)
                  Rte_Prm_KeOPTR_t_BrkTrq_TstDer_CutOffT_KeOPTR_t_BrkTrq_TstDer_CutOffT
                  ())) * OHSR_ac_DW.UnitDelay1_DSTATE_nm;

            /* UnitDelay: '<S62>/Unit Delay' incorporates:
             *  UnitDelay: '<S62>/Unit Delay1'
             */
            OHSR_ac_DW.UnitDelay1_DSTATE_nm = OHSR_ac_DW.UnitDelay_DSTATE_nt;

            /* Product: '<S62>/Multiplication2' incorporates:
             *  Constant: '<S64>/Calib'
             *  Sum: '<S62>/Summation'
             *  Sum: '<S62>/Summation1'
             *  UnitDelay: '<S62>/Unit Delay1'
             */
            OHSR_ac_DW.UnitDelay1_DSTATE_nm =
                ((rtb_TmpSignalConversionAtVeRGNR_M_DrvInt -
                  rtb_TmpSignalConversionAtVeTFTR_T_Tran_b) -
                 OHSR_ac_DW.UnitDelay1_DSTATE_nm) /
                (rtb_TmpSignalConversionAtVeCSVR_n_TransO + ((float32)
                  Rte_Prm_KeOPTR_t_BrkTrq_TstDer_CutOffT_KeOPTR_t_BrkTrq_TstDer_CutOffT
                  ()));

            /* Switch: '<S41>/Switch3' incorporates:
             *  Constant: '<S41>/Constant Value4'
             *  Lookup_n-D: '<S65>/Vector'
             *  MinMax: '<S41>/MinMax'
             *  RelationalOperator: '<S41>/Comparison3'
             *  Switch: '<S41>/Switch2'
             *  UnitDelay: '<S41>/Unit Delay4'
             */
            if (OHSR_ac_DW.UnitDelay1_DSTATE_nm > 0.0F)
            {
                OHSR_ac_DW.UnitDelay4_DSTATE_e = fminf
                    (OHSR_ac_DW.UnitDelay4_DSTATE_e, look1_iflf_binlca_16a
                     (OHSR_ac_DW.UnitDelay1_DSTATE_nm,
                      (Rte_Prm_KxOPTR_M_P2ZeroIdle_BrkTrqThres_KxOPTR_M_P2ZeroIdle_BrkTrqThres
                       ()),
                      (Rte_Prm_KtOPTR_M_P2ZeroIdle_BrkTrqThres_KtOPTR_M_P2ZeroIdle_BrkTrqThres
                       ()), 5U));
            }
            else
            {
                OHSR_ac_DW.UnitDelay4_DSTATE_e = look1_iflf_binlca_16a(0.0F,
                    (Rte_Prm_KxOPTR_M_P2ZeroIdle_BrkTrqThres_KxOPTR_M_P2ZeroIdle_BrkTrqThres
                     ()),
                    (Rte_Prm_KtOPTR_M_P2ZeroIdle_BrkTrqThres_KtOPTR_M_P2ZeroIdle_BrkTrqThres
                     ()), 5U);
            }

            /* End of Switch: '<S41>/Switch3' */

            /* Outputs for Atomic SubSystem: '<S33>/Hysteresis' */
            /* Switch: '<S36>/Switch1' incorporates:
             *  Constant: '<S36>/Constant Value'
             *  Constant: '<S63>/Calib'
             *  RelationalOperator: '<S36>/Greater  Than'
             *  RelationalOperator: '<S36>/Greater  Than1'
             *  Sum: '<S41>/Sum1'
             *  UnitDelay: '<S36>/Unit Delay'
             *  UnitDelay: '<S41>/Unit Delay4'
             */
            if (rtb_TmpSignalConversionAtVeRGNR_M_DrvInt >
                    (OHSR_ac_DW.UnitDelay4_DSTATE_e - ((float32)
                    Rte_Prm_KeOPTR_M_P2ZeroIdle_BrkTrqMin_RSP_OS_KeOPTR_M_P2ZeroIdle_BrkTrqMin_RSP_OS
                    ())))
            {
                OHSR_ac_DW.UnitDelay_DSTATE_kmt = true;
            }
            else
            {
                OHSR_ac_DW.UnitDelay_DSTATE_kmt =
                    ((rtb_TmpSignalConversionAtVeRGNR_M_DrvInt >=
                      OHSR_ac_DW.UnitDelay4_DSTATE_e) &&
                     (OHSR_ac_DW.UnitDelay_DSTATE_kmt));
            }

            /* End of Switch: '<S36>/Switch1' */
            /* End of Outputs for SubSystem: '<S33>/Hysteresis' */

            /* Outputs for Atomic SubSystem: '<S33>/Hysteresis1' */
            /* Switch: '<S37>/Switch1' incorporates:
             *  Constant: '<S37>/Constant Value'
             *  Constant: '<S52>/Calib'
             *  Constant: '<S53>/Calib'
             *  RelationalOperator: '<S37>/Greater  Than'
             *  RelationalOperator: '<S37>/Greater  Than1'
             *  UnitDelay: '<S37>/Unit Delay'
             */
            if (rtb_TmpSignalConversionAtVeTISR_n_Inpu_d > ((float32)
                    Rte_Prm_KeOPTR_n_P2ZeroIdle_NoMax_RSP_KeOPTR_n_P2ZeroIdle_NoMax_RSP
                    ()))
            {
                OHSR_ac_DW.UnitDelay_DSTATE_bg = true;
            }
            else
            {
                OHSR_ac_DW.UnitDelay_DSTATE_bg =
                    ((rtb_TmpSignalConversionAtVeTISR_n_Inpu_d >= ((float32)
                       Rte_Prm_KeOPTR_n_P2ZeroIdle_NoMax_LSP_KeOPTR_n_P2ZeroIdle_NoMax_LSP
                       ())) && (OHSR_ac_DW.UnitDelay_DSTATE_bg));
            }

            /* End of Switch: '<S37>/Switch1' */
            /* End of Outputs for SubSystem: '<S33>/Hysteresis1' */

            /* Logic: '<S33>/Logical' incorporates:
             *  Logic: '<S33>/Logical9'
             *  UnitDelay: '<S37>/Unit Delay'
             */
            rtb_Logical_i = !OHSR_ac_DW.UnitDelay_DSTATE_bg;

            /* Outputs for Atomic SubSystem: '<S33>/Hysteresis4' */
            /* Switch: '<S40>/Switch1' incorporates:
             *  Constant: '<S40>/Constant Value'
             *  Constant: '<S49>/Calib'
             *  Constant: '<S50>/Calib'
             *  Constant: '<S51>/Calib'
             *  RelationalOperator: '<S40>/Greater  Than'
             *  RelationalOperator: '<S40>/Greater  Than1'
             *  Sum: '<S33>/Sum'
             *  Sum: '<S33>/Sum1'
             *  UnitDelay: '<S40>/Unit Delay'
             */
            if (rtb_TmpSignalConversionAtVeTISR_n_TransM > (((float32)
                    Rte_Prm_KeOPTR_n_P2Idle_ZeroRPM_KeOPTR_n_P2Idle_ZeroRPM()) +
                 ((float32)
                    Rte_Prm_KeOPTR_n_P2MinIdle_TransMinSpd_RSP_KeOPTR_n_P2MinIdle_TransMinSpd_RSP
                    ())))
            {
                OHSR_ac_DW.UnitDelay_DSTATE_bz5 = true;
            }
            else
            {
                OHSR_ac_DW.UnitDelay_DSTATE_bz5 =
                    ((rtb_TmpSignalConversionAtVeTISR_n_TransM >= (((float32)
                        Rte_Prm_KeOPTR_n_P2MinIdle_TransMinSpd_LSP_KeOPTR_n_P2MinIdle_TransMinSpd_LSP
                        ()) + ((float32)
                               Rte_Prm_KeOPTR_n_P2Idle_ZeroRPM_KeOPTR_n_P2Idle_ZeroRPM
                               ()))) && (OHSR_ac_DW.UnitDelay_DSTATE_bz5));
            }

            /* End of Switch: '<S40>/Switch1' */
            /* End of Outputs for SubSystem: '<S33>/Hysteresis4' */

            /* Logic: '<S33>/Logical2' incorporates:
             *  Constant: '<S42>/Calib'
             *  Logic: '<S33>/Logical1'
             *  Logic: '<S33>/Logical10'
             *  Logic: '<S33>/Logical11'
             *  Logic: '<S33>/Logical12'
             *  Logic: '<S33>/Logical3'
             *  Logic: '<S33>/Logical4'
             *  Logic: '<S33>/Logical5'
             *  Logic: '<S33>/Logical6'
             *  Selector: '<S33>/Selector2'
             *  UnitDelay: '<S36>/Unit Delay'
             *  UnitDelay: '<S38>/Unit Delay'
             *  UnitDelay: '<S39>/Unit Delay'
             *  UnitDelay: '<S40>/Unit Delay'
             */
            rtb_Logical_i = ((((((!OHSR_ac_DW.UnitDelay_DSTATE_b2y) ||
                                 (OHSR_ac_DW.UnitDelay_DSTATE_k5)) &&
                                (!OHSR_ac_DW.UnitDelay_DSTATE_kmt)) &&
                               rtb_Logical_i) || (rtb_Logical_i &&
                               (Rte_Prm_KaOPTR_b_ZeroRPMAllowPRNDL_KaOPTR_b_ZeroRPMAllowPRNDL
                                ())[rtb_TmpSignalConversionAtVeOSMR_e_Stea_i])) &&
                             (!OHSR_ac_DW.UnitDelay_DSTATE_bz5));

            /* Outputs for Atomic SubSystem: '<S33>/EdgeFalling' */
            /* Logic: '<S34>/AND' incorporates:
             *  Logic: '<S34>/OR1'
             *  UnitDelay: '<S34>/Unit Delay'
             */
            rtb_UnitDelay_dm = ((!rtb_Logical_i) &&
                                (OHSR_ac_DW.UnitDelay_DSTATE_ae4));

            /* Update for UnitDelay: '<S34>/Unit Delay' */
            OHSR_ac_DW.UnitDelay_DSTATE_ae4 = rtb_Logical_i;

            /* End of Outputs for SubSystem: '<S33>/EdgeFalling' */

            /* Outputs for Atomic SubSystem: '<S33>/Turn Off Delay Time' */
            /* Outputs for Atomic SubSystem: '<S61>/EdgeFalling1' */
            /* Logic: '<S79>/OR1' incorporates:
             *  Logic: '<S61>/AND'
             */
            rtb_Comparison10_f = !rtb_UnitDelay_dm;

            /* Logic: '<S79>/AND' incorporates:
             *  Logic: '<S79>/OR1'
             *  UnitDelay: '<S79>/Unit Delay'
             */
            rtb_NotEqual_j = (rtb_Comparison10_f &&
                              (OHSR_ac_DW.UnitDelay_DSTATE_dv));

            /* Update for UnitDelay: '<S79>/Unit Delay' */
            OHSR_ac_DW.UnitDelay_DSTATE_dv = rtb_UnitDelay_dm;

            /* End of Outputs for SubSystem: '<S61>/EdgeFalling1' */

            /* Switch: '<S61>/Switch' incorporates:
             *  Switch: '<S80>/Switch1'
             */
            if (rtb_NotEqual_j)
            {
                /* Abs: '<S58>/Abs1' incorporates:
                 *  Constant: '<S55>/Calib'
                 */
                rtb_TmpSignalConversionAtVeCSVR_n_TransO =
                    Rte_Prm_KeOPTR_t_DelayTimeToggle_KeOPTR_t_DelayTimeToggle();
            }
            else
            {
                if (rtb_AND_bs)
                {
                    /* Switch: '<S80>/Switch1' incorporates:
                     *  Constant: '<S61>/Constant Value3'
                     */
                    OHSR_ac_DW.UnitDelay_DSTATE_jzx = 0.0F;
                }

                /* Abs: '<S58>/Abs1' incorporates:
                 *  Constant: '<S17>/Calib'
                 *  Constant: '<S61>/Constant Value1'
                 *  MinMax: '<S61>/Minimum'
                 *  Sum: '<S61>/Summation'
                 */
                rtb_TmpSignalConversionAtVeCSVR_n_TransO = fmaxf
                    (OHSR_ac_DW.UnitDelay_DSTATE_jzx - HeOHSR_t_Idle_dT, 0.0F);
            }

            /* End of Switch: '<S61>/Switch' */

            /* Switch: '<S80>/Switch3' */
            if (rtb_AND_bs)
            {
                /* Switch: '<S80>/Switch1' incorporates:
                 *  Constant: '<S61>/Constant Value3'
                 *  UnitDelay: '<S80>/Unit Delay'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_jzx = 0.0F;
            }
            else
            {
                /* Switch: '<S80>/Switch1' incorporates:
                 *  UnitDelay: '<S80>/Unit Delay'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_jzx =
                    rtb_TmpSignalConversionAtVeCSVR_n_TransO;
            }

            /* End of Switch: '<S80>/Switch3' */

            /* Logic: '<S33>/Logical' incorporates:
             *  Constant: '<S43>/Calib'
             *  Constant: '<S61>/Constant Value2'
             *  DataTypeConversion: '<S33>/Data Type Conversion2'
             *  Logic: '<S33>/Logical8'
             *  Logic: '<S61>/AND'
             *  RelationalOperator: '<S61>/Greater  Than'
             *  Selector: '<S33>/Selector1'
             */
            rtb_Logical_i = (((rtb_Comparison10_f &&
                               (rtb_TmpSignalConversionAtVeCSVR_n_TransO <= 0.0F))
                              && rtb_Logical_i) &&
                             (Rte_Prm_KaOPTR_b_ZeroRPMAllowTCase_KaOPTR_b_ZeroRPMAllowTCase
                              ())[rtb_TmpSignalConversionAtVeFWDR_e_Tcas_d]);

            /* End of Outputs for SubSystem: '<S33>/Turn Off Delay Time' */

            /* Logic: '<S33>/Logical17' incorporates:
             *  Constant: '<S48>/Calib'
             *  Constant: '<S54>/Calib'
             *  RelationalOperator: '<S33>/Comparison8'
             */
            rtb_UnitDelay_dm = (((rtb_TmpSignalConversionAtVeVSDR_n_NTur_j >
                                  ((float32)
                                   Rte_Prm_KeOPTR_n_RGS_IdleSpd_KeOPTR_n_RGS_IdleSpd
                                   ())) || rtb_AND_bs) ||
                                Rte_Prm_KeOPTR_b_RGS_Threshold_Disable_KeOPTR_b_RGS_Threshold_Disable
                                ());

            /* Selector: '<S58>/Selector2' incorporates:
             *  Constant: '<S68>/Calib'
             *  DataTypeConversion: '<S58>/Data Type Conversion1'
             *  SignalConversion generated from: '<S1>/VeTRNR_e_TargetGear'
             */
            rtb_Comparison10_f =
                (Rte_Prm_KaOPTR_b_RGS_Gears_Sel_KaOPTR_b_RGS_Gears_Sel())
                [rtb_TmpSignalConversionAtVeTRNR_e_Targ_i];

            /* Logic: '<S58>/Logical7' incorporates:
             *  UnitDelay: '<S58>/Unit Delay1'
             */
            rtb_AND_bs = ((OHSR_ac_DW.UnitDelay1_DSTATE_m) || rtb_AND_bs);

            /* Outputs for Atomic SubSystem: '<S58>/Turn Off Delay Time2' */
            /* Outputs for Atomic SubSystem: '<S71>/EdgeFalling1' */
            /* Logic: '<S73>/AND' incorporates:
             *  Logic: '<S73>/OR1'
             *  UnitDelay: '<S73>/Unit Delay'
             */
            rtb_NotEqual_j = ((!rtb_Comparison10_f) &&
                              (OHSR_ac_DW.UnitDelay_DSTATE_k3n));

            /* End of Outputs for SubSystem: '<S71>/EdgeFalling1' */
            /* End of Outputs for SubSystem: '<S58>/Turn Off Delay Time2' */

            /* Selector: '<S58>/Selector2' incorporates:
             *  Constant: '<S68>/Calib'
             *  DataTypeConversion: '<S58>/Data Type Conversion1'
             *  SignalConversion generated from: '<S1>/VeTRNR_e_TargetGear'
             */
            OHSR_ac_DW.UnitDelay_DSTATE_k3n =
                (Rte_Prm_KaOPTR_b_RGS_Gears_Sel_KaOPTR_b_RGS_Gears_Sel())
                [rtb_TmpSignalConversionAtVeTRNR_e_Targ_i];

            /* Outputs for Atomic SubSystem: '<S58>/Turn Off Delay Time2' */
            /* Switch: '<S71>/Switch' incorporates:
             *  Switch: '<S74>/Switch1'
             */
            if (rtb_NotEqual_j)
            {
                /* Abs: '<S58>/Abs1' incorporates:
                 *  Constant: '<S70>/Calib'
                 */
                rtb_TmpSignalConversionAtVeCSVR_n_TransO =
                    Rte_Prm_KeOPTR_t_RGS_Delay_KeOPTR_t_RGS_Delay();
            }
            else
            {
                if (rtb_AND_bs)
                {
                    /* Switch: '<S74>/Switch1' incorporates:
                     *  Constant: '<S71>/Constant Value3'
                     */
                    OHSR_ac_DW.UnitDelay_DSTATE_an = 0.0F;
                }

                /* Abs: '<S58>/Abs1' incorporates:
                 *  Constant: '<S17>/Calib'
                 *  Constant: '<S71>/Constant Value1'
                 *  MinMax: '<S71>/Minimum'
                 *  Sum: '<S71>/Summation'
                 */
                rtb_TmpSignalConversionAtVeCSVR_n_TransO = fmaxf
                    (OHSR_ac_DW.UnitDelay_DSTATE_an - HeOHSR_t_Idle_dT, 0.0F);
            }

            /* End of Switch: '<S71>/Switch' */

            /* RelationalOperator: '<S71>/Greater  Than' incorporates:
             *  Constant: '<S71>/Constant Value2'
             */
            rtb_NotEqual_j = (rtb_TmpSignalConversionAtVeCSVR_n_TransO > 0.0F);

            /* Switch: '<S74>/Switch3' */
            if (rtb_AND_bs)
            {
                /* Switch: '<S74>/Switch1' incorporates:
                 *  Constant: '<S71>/Constant Value3'
                 *  UnitDelay: '<S74>/Unit Delay'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_an = 0.0F;
            }
            else
            {
                /* Switch: '<S74>/Switch1' incorporates:
                 *  UnitDelay: '<S74>/Unit Delay'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_an =
                    rtb_TmpSignalConversionAtVeCSVR_n_TransO;
            }

            /* End of Switch: '<S74>/Switch3' */
            /* End of Outputs for SubSystem: '<S58>/Turn Off Delay Time2' */

            /* RelationalOperator: '<S58>/Comparison4' incorporates:
             *  Constant: '<S67>/Constant'
             *  DataTypeConversion: '<S58>/Data Type Conversion1'
             *  SignalConversion generated from: '<S1>/VeTRNR_e_TargetGear'
             */
            rtb_Comparison4_ia = (((uint32)
                                   rtb_TmpSignalConversionAtVeTRNR_e_Targ_i) ==
                                  CeTRNR_e_Reverse);

            /* Outputs for Atomic SubSystem: '<S58>/Turn Off Delay Time3' */
            /* Outputs for Atomic SubSystem: '<S72>/EdgeFalling1' */
            /* Logic: '<S75>/AND' incorporates:
             *  Logic: '<S75>/OR1'
             *  UnitDelay: '<S75>/Unit Delay'
             */
            rtb_AND_h0v = ((!rtb_Comparison4_ia) &&
                           (OHSR_ac_DW.UnitDelay_DSTATE_gxe));

            /* Update for UnitDelay: '<S75>/Unit Delay' */
            OHSR_ac_DW.UnitDelay_DSTATE_gxe = rtb_Comparison4_ia;

            /* End of Outputs for SubSystem: '<S72>/EdgeFalling1' */

            /* Switch: '<S72>/Switch' incorporates:
             *  Switch: '<S76>/Switch1'
             */
            if (rtb_AND_h0v)
            {
                /* Abs: '<S58>/Abs1' incorporates:
                 *  Constant: '<S70>/Calib'
                 */
                rtb_TmpSignalConversionAtVeCSVR_n_TransO =
                    Rte_Prm_KeOPTR_t_RGS_Delay_KeOPTR_t_RGS_Delay();
            }
            else
            {
                if (rtb_AND_bs)
                {
                    /* Switch: '<S76>/Switch1' incorporates:
                     *  Constant: '<S72>/Constant Value3'
                     */
                    OHSR_ac_DW.UnitDelay_DSTATE_dam = 0.0F;
                }

                /* Abs: '<S58>/Abs1' incorporates:
                 *  Constant: '<S17>/Calib'
                 *  Constant: '<S72>/Constant Value1'
                 *  MinMax: '<S72>/Minimum'
                 *  Sum: '<S72>/Summation'
                 */
                rtb_TmpSignalConversionAtVeCSVR_n_TransO = fmaxf
                    (OHSR_ac_DW.UnitDelay_DSTATE_dam - HeOHSR_t_Idle_dT, 0.0F);
            }

            /* End of Switch: '<S72>/Switch' */

            /* Switch: '<S76>/Switch3' */
            if (rtb_AND_bs)
            {
                /* Switch: '<S76>/Switch1' incorporates:
                 *  Constant: '<S72>/Constant Value3'
                 *  UnitDelay: '<S76>/Unit Delay'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_dam = 0.0F;
            }
            else
            {
                /* Switch: '<S76>/Switch1' incorporates:
                 *  UnitDelay: '<S76>/Unit Delay'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_dam =
                    rtb_TmpSignalConversionAtVeCSVR_n_TransO;
            }

            /* End of Switch: '<S76>/Switch3' */

            /* Outputs for Atomic SubSystem: '<S58>/Turn Off Delay Time2' */
            /* Logic: '<S58>/Logical4' incorporates:
             *  Abs: '<S58>/Abs1'
             *  Constant: '<S69>/Calib'
             *  Constant: '<S72>/Constant Value2'
             *  Logic: '<S58>/Logical6'
             *  Logic: '<S58>/Logical8'
             *  Logic: '<S58>/Logical9'
             *  Logic: '<S71>/AND'
             *  Logic: '<S72>/AND'
             *  RelationalOperator: '<S58>/Comparison2'
             *  RelationalOperator: '<S72>/Greater  Than'
             */
            rtb_Comparison10_f = ((((rtb_Comparison10_f || rtb_NotEqual_j) &&
                                    rtb_Comparison4_ia) || ((rtb_Comparison4_ia ||
                (rtb_TmpSignalConversionAtVeCSVR_n_TransO > 0.0F)) &&
                                    (OHSR_ac_DW.UnitDelay_DSTATE_k3n))) &&
                                  (fabsf
                                   (rtb_TmpSignalConversionAtVeVSDR_n_NTur_j) >
                                   ((float32)
                                    Rte_Prm_KeOPTR_n_RGS_ActivationThreshold_KeOPTR_n_RGS_ActivationThreshold
                                    ())));

            /* End of Outputs for SubSystem: '<S58>/Turn Off Delay Time2' */
            /* End of Outputs for SubSystem: '<S58>/Turn Off Delay Time3' */

            /* Outputs for Atomic SubSystem: '<S58>/EdgeRising1' */
            /* Logic: '<S66>/AND' incorporates:
             *  Logic: '<S66>/OR1'
             *  UnitDelay: '<S66>/Unit Delay'
             */
            OHSR_ac_DW.UnitDelay1_DSTATE_m = (rtb_Comparison10_f &&
                (!OHSR_ac_DW.UnitDelay_DSTATE_bzw));

            /* Update for UnitDelay: '<S66>/Unit Delay' */
            OHSR_ac_DW.UnitDelay_DSTATE_bzw = rtb_Comparison10_f;

            /* End of Outputs for SubSystem: '<S58>/EdgeRising1' */

            /* Outputs for Atomic SubSystem: '<S59>/EdgeFalling1' */
            /* Logic: '<S77>/AND' incorporates:
             *  Logic: '<S77>/OR1'
             *  UnitDelay: '<S77>/Unit Delay'
             */
            rtb_Comparison10_f = ((!OHSR_ac_DW.UnitDelay1_DSTATE_m) &&
                                  (OHSR_ac_DW.UnitDelay_DSTATE_gy));

            /* Update for UnitDelay: '<S77>/Unit Delay' */
            OHSR_ac_DW.UnitDelay_DSTATE_gy = OHSR_ac_DW.UnitDelay1_DSTATE_m;

            /* End of Outputs for SubSystem: '<S59>/EdgeFalling1' */

            /* Switch: '<S59>/Switch' incorporates:
             *  Switch: '<S78>/Switch1'
             */
            if (rtb_Comparison10_f)
            {
                /* Switch: '<S59>/Switch' incorporates:
                 *  Constant: '<S56>/Calib'
                 */
                rtb_TmpSignalConversionAtVeTISR_n_Inpu_d =
                    Rte_Prm_KeOPTR_t_RGS_DelayTimeNTurb_KeOPTR_t_RGS_DelayTimeNTurb
                    ();
            }
            else
            {
                if (rtb_UnitDelay_dm)
                {
                    /* Switch: '<S78>/Switch1' incorporates:
                     *  Constant: '<S59>/Constant Value3'
                     */
                    OHSR_ac_DW.UnitDelay_DSTATE_bt = 0.0F;
                }

                /* Switch: '<S59>/Switch' incorporates:
                 *  Constant: '<S17>/Calib'
                 *  Constant: '<S59>/Constant Value1'
                 *  MinMax: '<S59>/Minimum'
                 *  Sum: '<S59>/Summation'
                 */
                rtb_TmpSignalConversionAtVeTISR_n_Inpu_d = fmaxf
                    (OHSR_ac_DW.UnitDelay_DSTATE_bt - HeOHSR_t_Idle_dT, 0.0F);
            }

            /* End of Switch: '<S59>/Switch' */

            /* Switch: '<S78>/Switch3' */
            if (rtb_UnitDelay_dm)
            {
                /* Switch: '<S78>/Switch1' incorporates:
                 *  Constant: '<S59>/Constant Value3'
                 *  UnitDelay: '<S78>/Unit Delay'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_bt = 0.0F;
            }
            else
            {
                /* Switch: '<S78>/Switch1' incorporates:
                 *  UnitDelay: '<S78>/Unit Delay'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_bt =
                    rtb_TmpSignalConversionAtVeTISR_n_Inpu_d;
            }

            /* End of Switch: '<S78>/Switch3' */

            /* Switch: '<S33>/Switch' incorporates:
             *  Constant: '<S35>/Constant'
             *  Constant: '<S59>/Constant Value2'
             *  Logic: '<S59>/AND'
             *  Logic: '<S59>/AND1'
             *  Logic: '<S59>/Logical2'
             *  RelationalOperator: '<S33>/Comparison1'
             *  RelationalOperator: '<S59>/Greater  Than'
             *  Switch: '<S33>/Switch2'
             *  Switch: '<S33>/Switch3'
             */
            if (rtb_Logical_i)
            {
                /* Merge: '<S7>/Merge' incorporates:
                 *  Constant: '<S49>/Calib'
                 */
                VeOHSC_n_IdleSpdTgt_Raw =
                    Rte_Prm_KeOPTR_n_P2Idle_ZeroRPM_KeOPTR_n_P2Idle_ZeroRPM();
            }
            else
            {
                if (CeFWDR_e_TfrCas4Low == ((uint32)
                                            rtb_TmpSignalConversionAtVeFWDR_e_Tcas_d))
                {
                    /* Switch: '<S33>/Switch2' */
                    rtb_TmpSignalConversionAtVeTISR_n_Inpu_d =
                        OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_k;
                }
                else
                {
                    if (((OHSR_ac_DW.UnitDelay1_DSTATE_m) ||
                            (rtb_TmpSignalConversionAtVeTISR_n_Inpu_d > 0.0F)) &&
                        (!rtb_UnitDelay_dm))
                    {
                        /* Switch: '<S33>/Switch3' incorporates:
                         *  Constant: '<S54>/Calib'
                         *  Switch: '<S33>/Switch2'
                         */
                        rtb_TmpSignalConversionAtVeTISR_n_Inpu_d =
                            Rte_Prm_KeOPTR_n_RGS_IdleSpd_KeOPTR_n_RGS_IdleSpd();
                    }
                    else
                    {
                        /* Switch: '<S33>/Switch3' incorporates:
                         *  Constant: '<S33>/Constant Value2'
                         *  Switch: '<S33>/Switch2'
                         */
                        rtb_TmpSignalConversionAtVeTISR_n_Inpu_d = 0.0F;
                    }

                    /* Switch: '<S33>/Switch2' incorporates:
                     *  Lookup_n-D: '<S57>/Vector'
                     *  MinMax: '<S33>/MinMax1'
                     *  MinMax: '<S33>/MinMax3'
                     *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
                     */
                    rtb_TmpSignalConversionAtVeTISR_n_Inpu_d = fminf
                        (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_k,
                         fmaxf(look1_iflf_binlca_16a
                               (rtb_TmpSignalConversionAtVeVSDR_n_NTur_j,
                                (Rte_Prm_KxOPTR_n_P2IdleSpd_KxOPTR_n_P2IdleSpd()),
                                (Rte_Prm_KtOPTR_n_P2IdleSpd_KtOPTR_n_P2IdleSpd()),
                                9U), rtb_TmpSignalConversionAtVeTISR_n_Inpu_d));
                }

                /* Merge: '<S7>/Merge' incorporates:
                 *  Constant: '<S59>/Constant Value2'
                 *  Logic: '<S59>/AND'
                 *  Logic: '<S59>/AND1'
                 *  Logic: '<S59>/Logical2'
                 *  MinMax: '<S33>/MinMax2'
                 *  RelationalOperator: '<S59>/Greater  Than'
                 *  Switch: '<S33>/Switch2'
                 *  Switch: '<S33>/Switch3'
                 */
                VeOHSC_n_IdleSpdTgt_Raw = fmaxf
                    (rtb_TmpSignalConversionAtVeTISR_n_Inpu_d,
                     rtb_TmpSignalConversionAtVeTISR_n_TransM);
            }

            /* End of Switch: '<S33>/Switch' */

            /* Update for UnitDelay: '<S62>/Unit Delay' */
            OHSR_ac_DW.UnitDelay_DSTATE_nt =
                rtb_TmpSignalConversionAtVeRGNR_M_DrvInt;

            /* End of Outputs for SubSystem: '<S30>/OPTL_MinIdle' */
            /* End of Outputs for SubSystem: '<S15>/MinIdle' */
            break;
        }

        /* End of If: '<S15>/If' */
        /* End of Outputs for SubSystem: '<S7>/EngineOff' */
    }

    /* End of If: '<S7>/If' */

    /* SignalConversion generated from: '<S7>/XeOHSR_b_IdleSpeed_Enbld2' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    /* Outputs for Atomic SubSystem: '<S7>/IS_Blend_Filt' */
    /* Outputs for Atomic SubSystem: '<S7>/EdgeBi1' */
    /* RelationalOperator: '<S13>/Not Equal' incorporates:
     *  UnitDelay: '<S13>/Unit Delay'
     */
    rtb_Comparison4_ia = (rtb_Logical_i != OHSR_ac_DW.UnitDelay_DSTATE_j2);

    /* Update for UnitDelay: '<S13>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_j2 = rtb_Logical_i;

    /* Outputs for Atomic SubSystem: '<S18>/EdgeRising' */
    /* Logic: '<S97>/AND' incorporates:
     *  Logic: '<S97>/OR1'
     *  UnitDelay: '<S97>/Unit Delay'
     */
    rtb_AND_pv = !OHSR_ac_DW.UnitDelay_DSTATE_ms;

    /* Update for UnitDelay: '<S97>/Unit Delay' incorporates:
     *  Constant: '<S18>/TRUE Constant4'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_ms = true;

    /* End of Outputs for SubSystem: '<S18>/EdgeRising' */

    /* Switch: '<S116>/Switch6' incorporates:
     *  DataStoreRead: '<S116>/Data Store Read1'
     *  DataStoreWrite: '<S116>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S124>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S124>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S124>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S125>/FixPt Bitwise Operator1'
     */
    if (rtb_AND_pv)
    {
        VeOHSR_g_Filter_DS = (uint16)(VeOHSR_g_Filter_DS | ((uint16)1));
    }
    else
    {
        VeOHSR_g_Filter_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_Filter_DS))
            | ((uint16)1))));
    }

    /* End of Switch: '<S116>/Switch6' */

    /* UnitDelay: '<S18>/Unit Delay3' */
    rtb_UnitDelay3_ns = OHSR_ac_DW.UnitDelay3_DSTATE_ec;

    /* RelationalOperator: '<S18>/Comparison6' incorporates:
     *  RelationalOperator: '<S18>/Comparison3'
     *  UnitDelay: '<S18>/Unit Delay3'
     */
    rtb_Comparison6_f_tmp = OHSR_ac_DW.UnitDelay3_DSTATE_ec;

    /* RelationalOperator: '<S18>/Comparison6' incorporates:
     *  Constant: '<S90>/Constant'
     */
    rtb_AND_bs = (((uint32)rtb_Comparison6_f_tmp) == CeOHSR_e_LaunchSpdCntrl);

    /* Outputs for Atomic SubSystem: '<S18>/EdgeRising1' */
    /* Logic: '<S98>/OR1' incorporates:
     *  UnitDelay: '<S98>/Unit Delay'
     */
    rtb_UnitDelay_dm = !OHSR_ac_DW.UnitDelay_DSTATE_jr;

    /* Update for UnitDelay: '<S98>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_jr = rtb_AND_bs;

    /* End of Outputs for SubSystem: '<S18>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S18>/EdgeBi' */
    /* RelationalOperator: '<S92>/Not Equal' incorporates:
     *  UnitDelay: '<S92>/Unit Delay'
     */
    rtb_NotEqual_j = (VeOHSR_b_IdleSpdCalcEngOn !=
                      OHSR_ac_DW.UnitDelay_DSTATE_bp);

    /* Update for UnitDelay: '<S92>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_bp = VeOHSR_b_IdleSpdCalcEngOn;

    /* End of Outputs for SubSystem: '<S18>/EdgeBi' */

    /* Outputs for Atomic SubSystem: '<S18>/EdgeRising1' */
    /* UnitDelay: '<S300>/Unit Delay' incorporates:
     *  Logic: '<S18>/Logical1'
     *  Logic: '<S18>/Logical3'
     *  Logic: '<S98>/AND'
     */
    rtb_UnitDelay_dm = ((rtb_AND_bs && rtb_UnitDelay_dm) || (rtb_AND_bs &&
                         rtb_NotEqual_j));

    /* End of Outputs for SubSystem: '<S18>/EdgeRising1' */

    /* Switch: '<S117>/Switch6' incorporates:
     *  DataStoreRead: '<S117>/Data Store Read1'
     *  DataStoreWrite: '<S117>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S126>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S126>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S126>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S127>/FixPt Bitwise Operator1'
     */
    if (rtb_UnitDelay_dm)
    {
        VeOHSR_g_Filter_DS = (uint16)(VeOHSR_g_Filter_DS | ((uint16)2));
    }
    else
    {
        VeOHSR_g_Filter_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_Filter_DS))
            | ((uint16)2))));
    }

    /* End of Switch: '<S117>/Switch6' */

    /* VariantMerge generated from: '<S10>/XeOHSR_b_LaunchSpdCntrl_Enbl' incorporates:
     *  Logic: '<S18>/Logical2'
     *  UnitDelay: '<S18>/Unit Delay4'
     */
    rtb_Comparison10_f = (rtb_TmpSignalConversionAtShftEfftRdctn_R ||
                          (OHSR_ac_DW.UnitDelay4_DSTATE_j));

    /* Switch: '<S118>/Switch6' incorporates:
     *  DataStoreRead: '<S118>/Data Store Read1'
     *  DataStoreWrite: '<S118>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S128>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S128>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S128>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S129>/FixPt Bitwise Operator1'
     */
    if (rtb_Comparison10_f)
    {
        VeOHSR_g_Filter_DS = (uint16)(VeOHSR_g_Filter_DS | ((uint16)4));
    }
    else
    {
        VeOHSR_g_Filter_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_Filter_DS))
            | ((uint16)4))));
    }

    /* End of Switch: '<S118>/Switch6' */

    /* Logic: '<S319>/Logical6' incorporates:
     *  Logic: '<S18>/Logical4'
     *  UnitDelay: '<S18>/Unit Delay5'
     */
    rtb_AND_h0v = (rtb_TmpSignalConversionAtShftEfft_N4H_Re ||
                   (OHSR_ac_DW.UnitDelay5_DSTATE_j));

    /* Switch: '<S119>/Switch6' incorporates:
     *  DataStoreRead: '<S119>/Data Store Read1'
     *  DataStoreWrite: '<S119>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S130>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S130>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S130>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S131>/FixPt Bitwise Operator1'
     */
    if (rtb_AND_h0v)
    {
        VeOHSR_g_Filter_DS = (uint16)(VeOHSR_g_Filter_DS | ((uint16)8));
    }
    else
    {
        VeOHSR_g_Filter_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_Filter_DS))
            | ((uint16)8))));
    }

    /* End of Switch: '<S119>/Switch6' */

    /* RelationalOperator: '<S18>/Comparison3' incorporates:
     *  Constant: '<S86>/Constant'
     */
    rtb_Comparison3_b1 = (((uint32)rtb_Comparison6_f_tmp) ==
                          CeOHSR_e_LaunchSpdCntrl);

    /* Outputs for Atomic SubSystem: '<S18>/EdgeFalling' */
    /* Logic: '<S96>/AND' incorporates:
     *  Logic: '<S96>/OR1'
     *  UnitDelay: '<S96>/Unit Delay'
     */
    rtb_AND_dj = ((!rtb_Comparison3_b1) && (OHSR_ac_DW.UnitDelay_DSTATE_lat));

    /* Update for UnitDelay: '<S96>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_lat = rtb_Comparison3_b1;

    /* End of Outputs for SubSystem: '<S18>/EdgeFalling' */

    /* Switch: '<S120>/Switch6' incorporates:
     *  DataStoreRead: '<S120>/Data Store Read1'
     *  DataStoreWrite: '<S120>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S132>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S132>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S132>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S133>/FixPt Bitwise Operator1'
     */
    if (rtb_AND_dj)
    {
        VeOHSR_g_Filter_DS = (uint16)(VeOHSR_g_Filter_DS | ((uint16)16));
    }
    else
    {
        VeOHSR_g_Filter_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_Filter_DS))
            | ((uint16)16))));
    }

    /* End of Switch: '<S120>/Switch6' */

    /* RelationalOperator: '<S18>/Comparison5' incorporates:
     *  RelationalOperator: '<S18>/Comparison7'
     *  RelationalOperator: '<S18>/Comparison8'
     *  UnitDelay: '<S18>/Unit Delay1'
     */
    rtb_Comparison6_f_tmp = OHSR_ac_DW.UnitDelay1_DSTATE_gq;

    /* Logic: '<S319>/Logical7' incorporates:
     *  Constant: '<S87>/Constant'
     *  Logic: '<S18>/Logical7'
     *  Logic: '<S18>/Logical8'
     *  RelationalOperator: '<S18>/Comparison5'
     */
    rtb_Comparison3_b1 = (rtb_NotEqual_j &&
                          (rtb_TmpSignalConversionAtVeCSVR_b_NTurbF || (((uint32)
        rtb_Comparison6_f_tmp) == CeOHSR_e_NeutralState)));

    /* Switch: '<S121>/Switch6' incorporates:
     *  DataStoreRead: '<S121>/Data Store Read1'
     *  DataStoreWrite: '<S121>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S134>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S134>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S134>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S135>/FixPt Bitwise Operator1'
     */
    if (rtb_Comparison3_b1)
    {
        VeOHSR_g_Filter_DS = (uint16)(VeOHSR_g_Filter_DS | ((uint16)32));
    }
    else
    {
        VeOHSR_g_Filter_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_Filter_DS))
            | ((uint16)32))));
    }

    /* End of Switch: '<S121>/Switch6' */

    /* Selector: '<S319>/Selector3' incorporates:
     *  Constant: '<S88>/Constant'
     *  Logic: '<S18>/Logical9'
     *  RelationalOperator: '<S18>/Comparison7'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_NTurbF = (rtb_NotEqual_j && (((uint32)
        rtb_Comparison6_f_tmp) == CeOHSR_e_CreepState));

    /* Switch: '<S122>/Switch6' incorporates:
     *  DataStoreRead: '<S122>/Data Store Read1'
     *  DataStoreWrite: '<S122>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S136>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S136>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S136>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S137>/FixPt Bitwise Operator1'
     */
    if (rtb_TmpSignalConversionAtVeCSVR_b_NTurbF)
    {
        VeOHSR_g_Filter_DS = (uint16)(VeOHSR_g_Filter_DS | ((uint16)64));
    }
    else
    {
        VeOHSR_g_Filter_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_Filter_DS))
            | ((uint16)64))));
    }

    /* End of Switch: '<S122>/Switch6' */

    /* Logic: '<S319>/Logical3' incorporates:
     *  Constant: '<S89>/Constant'
     *  Logic: '<S18>/Logical11'
     *  RelationalOperator: '<S18>/Comparison8'
     */
    rtb_Logical3_b0 = (rtb_NotEqual_j && (((uint32)rtb_Comparison6_f_tmp) ==
                        CeOHSR_e_LaunchState));

    /* Switch: '<S123>/Switch6' incorporates:
     *  DataStoreRead: '<S123>/Data Store Read1'
     *  DataStoreWrite: '<S123>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S138>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S138>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S138>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S139>/FixPt Bitwise Operator1'
     */
    if (rtb_Logical3_b0)
    {
        VeOHSR_g_Filter_DS = (uint16)(VeOHSR_g_Filter_DS | ((uint16)128));
    }
    else
    {
        VeOHSR_g_Filter_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_Filter_DS))
            | ((uint16)128))));
    }

    /* End of Switch: '<S123>/Switch6' */

    /* MinMax: '<S18>/MinMax1' */
    rtb_TmpSignalConversionAtVeRGNR_M_DrvInt = fminf
        (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_k,
         rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b);

    /* If: '<S18>/If' incorporates:
     *  UnitDelay: '<S18>/Unit Delay2'
     */
    if (rtb_AND_pv)
    {
        /* Outputs for IfAction SubSystem: '<S18>/IV' incorporates:
         *  ActionPort: '<S101>/Action Port'
         */
        OHSR_ac_IV(VeOHSC_n_IdleSpdTgt_Raw,
                   &rtb_TmpSignalConversionAtVeTISR_n_TransM, &rtb_UnitDelay_dm);

        /* End of Outputs for SubSystem: '<S18>/IV' */
    }
    else if (rtb_UnitDelay_dm)
    {
        /* Outputs for IfAction SubSystem: '<S18>/LaunchSpdCntrl' incorporates:
         *  ActionPort: '<S102>/Action Port'
         */
        OHSR_ac_IV(OHSR_ac_DW.UnitDelay2_DSTATE_ms,
                   &rtb_TmpSignalConversionAtVeTISR_n_TransM, &rtb_UnitDelay_dm);

        /* End of Outputs for SubSystem: '<S18>/LaunchSpdCntrl' */
    }
    else if (rtb_Comparison10_f)
    {
        /* Outputs for IfAction SubSystem: '<S18>/Shft_Efft_Rdctn' incorporates:
         *  ActionPort: '<S107>/Action Port'
         */
        OHSR_ac_IV(OHSR_ac_DW.UnitDelay2_DSTATE_ms,
                   &rtb_TmpSignalConversionAtVeTISR_n_TransM, &rtb_UnitDelay_dm);

        /* End of Outputs for SubSystem: '<S18>/Shft_Efft_Rdctn' */
    }
    else if (rtb_AND_h0v)
    {
        /* Outputs for IfAction SubSystem: '<S18>/ShftEfftRed_N4Hi' incorporates:
         *  ActionPort: '<S106>/Action Port'
         */
        OHSR_ac_IV(OHSR_ac_DW.UnitDelay2_DSTATE_ms,
                   &rtb_TmpSignalConversionAtVeTISR_n_TransM, &rtb_UnitDelay_dm);

        /* End of Outputs for SubSystem: '<S18>/ShftEfftRed_N4Hi' */
    }
    else if (rtb_AND_dj)
    {
        /* Outputs for IfAction SubSystem: '<S18>/PrevLaunchSpdCntrl' incorporates:
         *  ActionPort: '<S104>/Action Port'
         */
        OHSR_ac_PrevLaunchSpdCntrl(OHSR_ac_DW.UnitDelay2_DSTATE_ms,
            &rtb_TmpSignalConversionAtVeTISR_n_TransM, &rtb_UnitDelay_dm);

        /* End of Outputs for SubSystem: '<S18>/PrevLaunchSpdCntrl' */
    }
    else if (rtb_Comparison3_b1)
    {
        /* Outputs for IfAction SubSystem: '<S18>/Switch2Off_or_N' incorporates:
         *  ActionPort: '<S109>/Action Port'
         */
        OHSR_ac_IV(OHSR_ac_DW.UnitDelay2_DSTATE_ms,
                   &rtb_TmpSignalConversionAtVeTISR_n_TransM, &rtb_UnitDelay_dm);

        /* End of Outputs for SubSystem: '<S18>/Switch2Off_or_N' */
    }
    else if (rtb_TmpSignalConversionAtVeCSVR_b_NTurbF)
    {
        /* Outputs for IfAction SubSystem: '<S18>/Switch2On_Creep' incorporates:
         *  ActionPort: '<S110>/Action Port'
         */
        OHSR_ac_PrevLaunchSpdCntrl(OHSR_ac_DW.UnitDelay2_DSTATE_ms,
            &rtb_TmpSignalConversionAtVeTISR_n_TransM, &rtb_UnitDelay_dm);

        /* End of Outputs for SubSystem: '<S18>/Switch2On_Creep' */
    }
    else if (rtb_Logical3_b0)
    {
        /* Outputs for IfAction SubSystem: '<S18>/Switch2On_Launch' incorporates:
         *  ActionPort: '<S111>/Action Port'
         */
        OHSR_ac_PrevLaunchSpdCntrl(rtb_TmpSignalConversionAtVeRGNR_M_DrvInt,
            &rtb_TmpSignalConversionAtVeTISR_n_TransM, &rtb_UnitDelay_dm);

        /* End of Outputs for SubSystem: '<S18>/Switch2On_Launch' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S18>/Else' incorporates:
         *  ActionPort: '<S99>/Action Port'
         */
        /* Merge: '<S18>/Merge1' incorporates:
         *  Constant: '<S99>/Constant Value8'
         *  SignalConversion generated from: '<S99>/IV'
         */
        rtb_TmpSignalConversionAtVeTISR_n_TransM = 0.0F;

        /* End of Outputs for SubSystem: '<S18>/Else' */
    }

    /* End of If: '<S18>/If' */

    /* Outputs for Atomic SubSystem: '<S18>/EdgeBi2' */
    /* RelationalOperator: '<S94>/Not Equal' incorporates:
     *  UnitDelay: '<S94>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_NTurbF = (rtb_AND_bs !=
        OHSR_ac_DW.UnitDelay_DSTATE_gm);

    /* Update for UnitDelay: '<S94>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_gm = rtb_AND_bs;

    /* End of Outputs for SubSystem: '<S18>/EdgeBi2' */

    /* Outputs for Atomic SubSystem: '<S18>/EdgeBi1' */
    /* RelationalOperator: '<S93>/Not Equal' incorporates:
     *  UnitDelay: '<S93>/Unit Delay'
     */
    rtb_Comparison10_f = (rtb_TmpSignalConversionAtShftEfftRdctn_R !=
                          OHSR_ac_DW.UnitDelay_DSTATE_nb);

    /* Update for UnitDelay: '<S93>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_nb = rtb_TmpSignalConversionAtShftEfftRdctn_R;

    /* End of Outputs for SubSystem: '<S18>/EdgeBi1' */

    /* Outputs for Atomic SubSystem: '<S18>/EdgeBi3' */
    /* RelationalOperator: '<S95>/Not Equal' incorporates:
     *  UnitDelay: '<S95>/Unit Delay'
     */
    rtb_AND_h0v = (rtb_TmpSignalConversionAtShftEfft_N4H_Re !=
                   OHSR_ac_DW.UnitDelay_DSTATE_fph);

    /* Update for UnitDelay: '<S95>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_fph = rtb_TmpSignalConversionAtShftEfft_N4H_Re;

    /* End of Outputs for SubSystem: '<S18>/EdgeBi3' */

    /* Logic: '<S18>/Logical12' */
    rtb_Comparison10_f = ((((rtb_TmpSignalConversionAtVeCSVR_b_NTurbF ||
        rtb_NotEqual_j) || rtb_Comparison10_f) || rtb_Comparison4_ia) ||
                          rtb_AND_h0v);

    /* Switch: '<S18>/Switch' incorporates:
     *  UnitDelay: '<S18>/Unit Delay'
     */
    if (rtb_Comparison10_f)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_pb = rtb_UnitDelay_dm;
    }

    /* End of Switch: '<S18>/Switch' */

    /* If: '<S18>/If1' incorporates:
     *  UnitDelay: '<S18>/Unit Delay'
     */
    rtPrevAction = OHSR_ac_DW.If1_ActiveSubsystem_k;
    OHSR_ac_DW.If1_ActiveSubsystem_k = (sint8)((!OHSR_ac_DW.UnitDelay_DSTATE_pb)
        ? 1 : 0);
    if (OHSR_ac_DW.If1_ActiveSubsystem_k == 0)
    {
        if (0 != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S18>/LowPass' incorporates:
             *  ActionPort: '<S103>/Action Port'
             */
            /* InitializeConditions for If: '<S18>/If1' incorporates:
             *  UnitDelay: '<S103>/Unit Delay3'
             */
            OHSR_ac_DW.UnitDelay3_DSTATE_d = false;

            /* End of InitializeConditions for SubSystem: '<S18>/LowPass' */

            /* SystemReset for IfAction SubSystem: '<S18>/LowPass' incorporates:
             *  ActionPort: '<S103>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S103>/Digital Lowpass Reset Enabled1' */
            /* SystemReset for If: '<S18>/If1' incorporates:
             *  UnitDelay: '<S113>/Unit Delay'
             */
            OHSR_ac_DW.UnitDelay_DSTATE_ks = 0.0F;

            /* End of SystemReset for SubSystem: '<S103>/Digital Lowpass Reset Enabled1' */
            /* End of SystemReset for SubSystem: '<S18>/LowPass' */
        }

        /* Outputs for IfAction SubSystem: '<S18>/LowPass' incorporates:
         *  ActionPort: '<S103>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S103>/Digital Lowpass Reset Enabled1' */
        /* Switch: '<S113>/Switch1' incorporates:
         *  Constant: '<S103>/Constant Value3'
         *  Switch: '<S113>/Switch2'
         *  UnitDelay: '<S103>/Unit Delay3'
         *  UnitDelay: '<S113>/Unit Delay'
         */
        if (rtb_Comparison10_f)
        {
            OHSR_ac_DW.UnitDelay_DSTATE_ks = 0.0F;
        }
        else
        {
            if (OHSR_ac_DW.UnitDelay3_DSTATE_d)
            {
                /* UnitDelay: '<S113>/Unit Delay' incorporates:
                 *  Constant: '<S103>/Constant Value4'
                 *  Constant: '<S114>/Calib'
                 *  Product: '<S113>/Multiplication'
                 *  Sum: '<S113>/Subtraction'
                 *  Sum: '<S113>/Summation'
                 *  Switch: '<S113>/Switch2'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_ks += (1.0F -
                    OHSR_ac_DW.UnitDelay_DSTATE_ks) * KeOHSR_k_EngOnOff;
            }
        }

        /* End of Switch: '<S113>/Switch1' */
        /* End of Outputs for SubSystem: '<S103>/Digital Lowpass Reset Enabled1' */

        /* Merge: '<S18>/Merge3' incorporates:
         *  Gain: '<S115>/Gain'
         *  UnitDelay: '<S113>/Unit Delay'
         */
        VeOHSR_k_IdleSpdBlendFact = OHSR_ac_DW.UnitDelay_DSTATE_ks;

        /* Update for UnitDelay: '<S103>/Unit Delay3' incorporates:
         *  Constant: '<S103>/TRUE Constant1'
         */
        OHSR_ac_DW.UnitDelay3_DSTATE_d = true;

        /* End of Outputs for SubSystem: '<S18>/LowPass' */
    }
    else
    {
        if (1 != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S18>/SlipRelated' incorporates:
             *  ActionPort: '<S108>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S108>/Counter Reset  Enabled ' */
            /* SystemReset for If: '<S18>/If1' incorporates:
             *  UnitDelay: '<S140>/Unit Delay'
             */
            OHSR_ac_DW.UnitDelay_DSTATE_aw = 0U;

            /* End of SystemReset for SubSystem: '<S108>/Counter Reset  Enabled ' */
            /* End of SystemReset for SubSystem: '<S18>/SlipRelated' */
        }

        /* Outputs for IfAction SubSystem: '<S18>/SlipRelated' incorporates:
         *  ActionPort: '<S108>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S108>/Counter Reset  Enabled ' */
        /* Switch: '<S140>/Switch1' incorporates:
         *  Constant: '<S140>/Constant Value1'
         *  Constant: '<S140>/Constant Value2'
         *  Sum: '<S140>/Subtraction'
         *  UnitDelay: '<S140>/Unit Delay'
         */
        if (rtb_NotEqual_j)
        {
            OHSR_ac_DW.UnitDelay_DSTATE_aw = 0U;
        }
        else
        {
            OHSR_ac_DW.UnitDelay_DSTATE_aw = (uint16)(((uint32)
                OHSR_ac_DW.UnitDelay_DSTATE_aw) + 1U);
        }

        /* End of Switch: '<S140>/Switch1' */
        /* End of Outputs for SubSystem: '<S108>/Counter Reset  Enabled ' */

        /* Switch: '<S108>/Switch' incorporates:
         *  Constant: '<S142>/Calib'
         */
        if (KeOHSR_b_SlipSpd4ISBlend)
        {
            /* Switch: '<S108>/Switch' incorporates:
             *  Abs: '<S108>/Abs'
             *  Sum: '<S108>/Sum1'
             */
            rtb_Switch = fabsf(rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b -
                               rtb_TmpSignalConversionAtVeVSDR_n_NTur_j);
        }
        else
        {
            /* Switch: '<S108>/Switch' incorporates:
             *  Inport: '<Root>/VeCSLR_n_Clch1_SlipSpeed'
             */
            (void)Rte_Read_VeCSLR_n_Clch1_SlipSpeed_Value(&rtb_Switch);
        }

        /* End of Switch: '<S108>/Switch' */

        /* Sum: '<S108>/Sum2' */
        rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b =
            OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_k -
            rtb_TmpSignalConversionAtVeVSDR_n_NTur_j;

        /* Outputs for Atomic SubSystem: '<S108>/Protected Division' */
        /* Switch: '<S145>/Switch1' incorporates:
         *  Constant: '<S145>/Constant Value'
         *  Constant: '<S145>/Constant Value1'
         *  Constant: '<S145>/Constant Value2'
         *  Constant: '<S145>/Constant Value3'
         *  Logic: '<S145>/AND'
         *  RelationalOperator: '<S145>/Greater Than or Equal '
         *  RelationalOperator: '<S145>/Greater Than or Equal 1'
         *  RelationalOperator: '<S145>/Not Equal'
         *  RelationalOperator: '<S145>/Not Equal1'
         *  Switch: '<S145>/Switch2'
         *  Switch: '<S145>/Switch3'
         */
        if ((rtb_Switch != 0.0F) && (rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b !=
             0.0F))
        {
            /* Switch: '<S145>/Switch1' incorporates:
             *  Product: '<S145>/Division'
             */
            rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b = rtb_Switch /
                rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b;
        }
        else if (rtb_Switch > 0.0F)
        {
            /* Switch: '<S145>/Switch2' incorporates:
             *  Constant: '<S145>/MAXFLOAT'
             *  Switch: '<S145>/Switch1'
             */
            rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b = 3.402823466E+38F;
        }
        else if (rtb_Switch < 0.0F)
        {
            /* Switch: '<S145>/Switch3' incorporates:
             *  Constant: '<S145>/MINFLOAT'
             *  Switch: '<S145>/Switch1'
             *  Switch: '<S145>/Switch2'
             */
            rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S145>/Switch1' incorporates:
             *  Constant: '<S145>/Constant Value4'
             *  Switch: '<S145>/Switch2'
             *  Switch: '<S145>/Switch3'
             */
            rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b = 0.0F;
        }

        /* End of Switch: '<S145>/Switch1' */
        /* End of Outputs for SubSystem: '<S108>/Protected Division' */

        /* Merge: '<S18>/Merge3' incorporates:
         *  Constant: '<S141>/Calib'
         *  Lookup_n-D: '<S143>/Vector'
         *  Lookup_n-D: '<S144>/Vector'
         *  MinMax: '<S108>/MinMax1'
         *  Product: '<S108>/Product'
         *  Switch: '<S145>/Switch1'
         *  UnitDelay: '<S140>/Unit Delay'
         */
        VeOHSR_k_IdleSpdBlendFact = fmaxf(look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b, ((const float32 *)
            &(KxOHSR_k_C1SlipIdleSpdBlend[0])), ((const float32 *)
            &(KtOHSR_k_C1SlipIdleSpdBlend[0])), 6U), look1_iflf_binlca_16a
            (((float32)OHSR_ac_DW.UnitDelay_DSTATE_aw) * HeOHSR_t_Idle_dT, ((
            const float32 *)&(KxOHSR_k_TimeBsdIdleSpdBlend[0])), ((const float32
            *)&(KtOHSR_k_TimeBsdIdleSpdBlend[0])), 6U));

        /* End of Outputs for SubSystem: '<S18>/SlipRelated' */
    }

    /* End of If: '<S18>/If1' */

    /* Outputs for Atomic SubSystem: '<S18>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S91>/Switch1' incorporates:
     *  Product: '<S91>/Multiplication'
     *  Sum: '<S91>/Subtraction'
     *  Sum: '<S91>/Summation'
     *  UnitDelay: '<S91>/Unit Delay'
     */
    if (rtb_Comparison10_f)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_ap3 =
            rtb_TmpSignalConversionAtVeTISR_n_TransM;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_ap3 += (VeOHSC_n_IdleSpdTgt_Raw -
            OHSR_ac_DW.UnitDelay_DSTATE_ap3) * VeOHSR_k_IdleSpdBlendFact;
    }

    /* End of Switch: '<S91>/Switch1' */
    /* End of Outputs for SubSystem: '<S18>/Digital Lowpass Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S18>/GradientLimiter2' */
    /* Switch: '<S100>/Switch1' incorporates:
     *  Sum: '<S100>/Sum3'
     *  UnitDelay: '<S100>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeCSVR_b_NTurbF)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_ic =
            rtb_TmpSignalConversionAtVeRGNR_M_DrvInt;
    }
    else
    {
        /* Sum: '<S100>/Sum2' incorporates:
         *  MinMax: '<S18>/MinMax'
         *  UnitDelay: '<S100>/Unit Delay'
         *  UnitDelay: '<S91>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeMSPR_n_P2Sp_o = fminf
            (OHSR_ac_DW.UnitDelay_DSTATE_ap3,
             rtb_TmpSignalConversionAtVeMSPR_n_P2Sp_o) -
            OHSR_ac_DW.UnitDelay_DSTATE_ic;

        /* Outputs for Atomic SubSystem: '<S100>/Limiter' */
        /* Switch: '<S112>/Switch1' incorporates:
         *  Constant: '<S18>/Constant Value7'
         *  RelationalOperator: '<S112>/Relational Operator'
         */
        if (9999.0F < rtb_TmpSignalConversionAtVeMSPR_n_P2Sp_o)
        {
            /* Switch: '<S112>/Switch1' */
            rtb_TmpSignalConversionAtVeMSPR_n_P2Sp_o = 9999.0F;
        }

        /* End of Switch: '<S112>/Switch1' */

        /* Switch: '<S112>/Switch' incorporates:
         *  Constant: '<S18>/Constant Value8'
         *  RelationalOperator: '<S112>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeMSPR_n_P2Sp_o <= 0.0F)
        {
            rtb_TmpSignalConversionAtVeMSPR_n_P2Sp_o = 0.0F;
        }

        /* End of Switch: '<S112>/Switch' */
        /* End of Outputs for SubSystem: '<S100>/Limiter' */
        OHSR_ac_DW.UnitDelay_DSTATE_ic +=
            rtb_TmpSignalConversionAtVeMSPR_n_P2Sp_o;
    }

    /* End of Switch: '<S100>/Switch1' */
    /* End of Outputs for SubSystem: '<S18>/GradientLimiter2' */

    /* Switch: '<S18>/Switch2' incorporates:
     *  UnitDelay: '<S100>/Unit Delay'
     *  UnitDelay: '<S18>/Unit Delay2'
     *  UnitDelay: '<S91>/Unit Delay'
     */
    if (rtb_AND_bs)
    {
        OHSR_ac_DW.UnitDelay2_DSTATE_ms = OHSR_ac_DW.UnitDelay_DSTATE_ic;
    }
    else
    {
        OHSR_ac_DW.UnitDelay2_DSTATE_ms = OHSR_ac_DW.UnitDelay_DSTATE_ap3;
    }

    /* End of Switch: '<S18>/Switch2' */

    /* Switch: '<S8>/Switch' incorporates:
     *  UnitDelay: '<S18>/Unit Delay2'
     */
    rtb_Sum3_h = OHSR_ac_DW.UnitDelay2_DSTATE_ms;

    /* End of Outputs for SubSystem: '<S7>/EdgeBi1' */
    /* End of Outputs for SubSystem: '<S7>/IS_Blend_Filt' */
#else

    /* Switch: '<S8>/Switch' incorporates:
     *  Inport: '<S4>/TgtIdleSpd'
     *  SignalConversion generated from: '<S7>/XeOHSR_b_IdleSpeed_Enbld2'
     */
    rtb_Sum3_h = rtb_TmpSignalConversionAtVeOSMR_n_Tran_f;

#endif

    /* End of SignalConversion generated from: '<S7>/XeOHSR_b_IdleSpeed_Enbld2' */

    /* Gain: '<S21>/Gain' */
    rtb_TmpSignalConversionAtVeMSPR_n_P2Sp_o = rtb_Sum3_h;

    /* Selector: '<S311>/Selector2' incorporates:
     *  Constant: '<S336>/Calib'
     */
    VeOHSR_n_Launch2Creep_Thresh = KaOHSR_n_Launch2Creep_SpdThresh
        [(rtb_TmpSignalConversionAtVeTRNR_e_Actu_c)];

    /* Switch: '<S311>/Switch' */
    if (rtb_Logical14_i)
    {
        /* Switch: '<S8>/Switch' incorporates:
         *  Gain: '<S21>/Gain'
         *  Sum: '<S311>/Sum'
         */
        rtb_Sum3_h += VeOHSR_n_Creep2Launch_Thresh;
    }
    else
    {
        /* Switch: '<S8>/Switch' incorporates:
         *  Gain: '<S21>/Gain'
         *  Sum: '<S311>/Sum1'
         */
        rtb_Sum3_h += VeOHSR_n_Launch2Creep_Thresh;
    }

    /* End of Switch: '<S311>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCTCR_b_MinCreepEnable_Stgc' */
    (void)Rte_Read_VeCTCR_b_MinCreepEnable_Stgc_Value(&tmpRead_t);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OHSC_Creep_Launch_Determination'
     */
    /* Logic: '<S319>/Logical4' incorporates:
     *  Constant: '<S343>/Calib'
     *  Constant: '<S403>/Calib'
     *  Logic: '<S311>/Logical10'
     *  Logic: '<S311>/Logical13'
     *  Logic: '<S311>/Logical22'
     *  RelationalOperator: '<S311>/Comparison5'
     *  Selector: '<S368>/Selector1'
     *  Sum: '<S311>/Sum2'
     */
    rtb_Logical4_fg = ((((VeOHSI_n_InputSpd_ILE <= (rtb_Sum3_h +
                           KaOHSR_n_RollingIdle_NoLim_Drv_ILEStat_Ni
                           [(rtb_TmpSignalConversionAtVeTRNR_e_ILESta)])) &&
                         rtb_Logical1_jm) || rtb_Logical4_fg) ||
                       ((KeOHSR_b_EnblMinCreepOverrd) && tmpRead_t));

    /* Switch: '<S374>/Switch6' incorporates:
     *  DataStoreRead: '<S374>/Data Store Read1'
     *  DataStoreWrite: '<S374>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S386>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S386>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S386>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S387>/FixPt Bitwise Operator1'
     */
    if (rtb_Logical4_fg)
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(VeOHSR_g_CreepCndtn_DS | ((uint16)4));
    }
    else
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_CreepCndtn_DS)) | ((uint16)4))));
    }

    /* End of Switch: '<S374>/Switch6' */

    /* Outputs for Atomic SubSystem: '<S370>/Hysteresis' */
    /* Switch: '<S408>/Switch1' incorporates:
     *  Constant: '<S408>/Constant Value'
     *  Constant: '<S409>/Calib'
     *  Constant: '<S410>/Calib'
     *  RelationalOperator: '<S408>/Greater  Than'
     *  RelationalOperator: '<S408>/Greater  Than1'
     *  UnitDelay: '<S408>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeAPSR_Pct_Ac_c >
            KeOHSR_Pct_Creep_AccelPdlThresh_RSP)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_im3 = true;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_im3 =
            ((rtb_TmpSignalConversionAtVeAPSR_Pct_Ac_c >=
              KeOHSR_Pct_Creep_AccelPdlThresh_LSP) &&
             (OHSR_ac_DW.UnitDelay_DSTATE_im3));
    }

    /* End of Switch: '<S408>/Switch1' */
    /* End of Outputs for SubSystem: '<S370>/Hysteresis' */

    /* Switch: '<S370>/Switch2' incorporates:
     *  UnitDelay: '<S370>/Unit Delay1'
     *  UnitDelay: '<S408>/Unit Delay'
     */
    if (OHSR_ac_DW.UnitDelay_DSTATE_im3)
    {
        /* Switch: '<S370>/Switch4' incorporates:
         *  Constant: '<S411>/Calib'
         *  UnitDelay: '<S370>/Unit Delay1'
         */
        if (!KeOHSR_b_EnblSumTrqlatchILE)
        {
            OHSR_ac_DW.UnitDelay1_DSTATE_ko =
                rtb_TmpSignalConversionAtVeTTQR_M_SumTrq;
        }

        /* End of Switch: '<S370>/Switch4' */
    }
    else
    {
        OHSR_ac_DW.UnitDelay1_DSTATE_ko =
            rtb_TmpSignalConversionAtVeTTQR_M_SumTrq;
    }

    /* End of Switch: '<S370>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OHSI_InputProcessing'
     */
    /* Logic: '<S371>/Logical1' incorporates:
     *  Constant: '<S342>/Calib'
     *  Constant: '<S344>/Calib'
     *  Constant: '<S525>/Calib'
     *  DataTypeConversion: '<S5>/Data Type Conversion2'
     *  Inport: '<Root>/VeHSER_e_RngSt'
     *  Logic: '<S311>/Logical12'
     *  Logic: '<S311>/Logical21'
     *  Logic: '<S311>/Logical5'
     *  Logic: '<S370>/Logical28'
     *  RelationalOperator: '<S311>/Comparison16'
     *  Selector: '<S5>/Selector1'
     *  UnitDelay: '<S370>/Unit Delay1'
     *  UnitDelay: '<S408>/Unit Delay'
     */
    rtb_Logical1_jm = ((((KeOHSR_b_EnblACCCreepOverrd) &&
                         (HaOHSR_b_InhibitShftTypeStdySt[(sint16)tmpRead_j])) ||
                        (!OHSR_ac_DW.UnitDelay_DSTATE_im3)) ||
                       (((OHSR_ac_DW.UnitDelay1_DSTATE_ko >
                          rtb_TmpSignalConversionAtVeVTVR_M_Load_e) &&
                         rtb_Logical14_i) && (KeOHSR_b_EnblSumTrqCrpCondt)));

    /* Switch: '<S375>/Switch6' incorporates:
     *  DataStoreRead: '<S375>/Data Store Read1'
     *  DataStoreWrite: '<S375>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S388>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S388>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S388>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S389>/FixPt Bitwise Operator1'
     */
    if (rtb_Logical1_jm)
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(VeOHSR_g_CreepCndtn_DS | ((uint16)8));
    }
    else
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_CreepCndtn_DS)) | ((uint16)8))));
    }

    /* End of Switch: '<S375>/Switch6' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeTTQR_e_TCMTrqCntrlMdFst' */
    (void)Rte_Read_VeTTQR_e_TCMTrqCntrlMdFst_Value(&tmpRead_x);

    /* Inport: '<Root>/VeVTVR_e_TrqArb' */
    (void)Rte_Read_VeVTVR_e_TrqArb_Value(&tmpRead_m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OHSC_Creep_Launch_Determination'
     */
    /* Logic: '<S311>/Logical14' incorporates:
     *  Constant: '<S328>/Constant'
     *  Constant: '<S362>/Constant'
     *  Constant: '<S363>/Constant'
     *  Constant: '<S366>/Constant'
     *  Constant: '<S367>/Constant'
     *  Inport: '<Root>/VeTTQR_e_TCMTrqCntrlMdFst'
     *  Inport: '<Root>/VeVTVR_e_TrqArb'
     *  Logic: '<S311>/Logical15'
     *  Logic: '<S311>/Logical17'
     *  Logic: '<S311>/Logical26'
     *  RelationalOperator: '<S311>/Comparison15'
     *  RelationalOperator: '<S311>/Comparison18'
     *  RelationalOperator: '<S311>/Comparison19'
     *  RelationalOperator: '<S311>/Comparison20'
     *  RelationalOperator: '<S311>/Comparison22'
     */
    rtb_Logical14_i = ((((((uint32)rtb_TmpSignalConversionAtVeDTRR_e_SumFWI) ==
                          CeDTRR_e_Potential) || (((uint32)
                           rtb_TmpSignalConversionAtVeDTRR_e_SumFWI) ==
                          CeDTRR_e_Pedal_Cruise)) || (((uint32)
                          rtb_TmpSignalConversionAtVeDTRR_e_SumFWI) ==
                         CeDTRR_e_HEVFastTrqReqst)) && ((((uint32)tmpRead_m) !=
                         CeWTAR_e_TransTorque) || (((uint32)tmpRead_x) !=
                         CeTINR_e_TrqInc)));

    /* Switch: '<S376>/Switch6' incorporates:
     *  DataStoreRead: '<S376>/Data Store Read1'
     *  DataStoreWrite: '<S376>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S390>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S390>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S390>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S391>/FixPt Bitwise Operator1'
     */
    if (rtb_Logical14_i)
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(VeOHSR_g_CreepCndtn_DS | ((uint16)16));
    }
    else
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_CreepCndtn_DS)) | ((uint16)16))));
    }

    /* End of Switch: '<S376>/Switch6' */

    /* Logic: '<S319>/Logical3' incorporates:
     *  Constant: '<S313>/Calib'
     *  Constant: '<S314>/Calib'
     *  Constant: '<S364>/Constant'
     *  Constant: '<S365>/Constant'
     *  Logic: '<S311>/Logical1'
     *  Logic: '<S311>/Logical8'
     *  Logic: '<S311>/Logical9'
     *  RelationalOperator: '<S311>/Comparison1'
     *  RelationalOperator: '<S311>/Comparison2'
     */
    rtb_Logical3_b0 = ((((((uint32)rtb_TmpSignalConversionAtVeOSMR_e_Stea_i) ==
                          CeOSMR_e_TransSt_Reverse) || (((uint32)
                           rtb_TmpSignalConversionAtVeOSMR_e_Stea_i) ==
                          CeOSMR_e_TransSt_Drive)) || (!KeOHSR_b_EnblILENeutinN))
                       || (!KeOHSR_b_EnblILENeutinP));

    /* Switch: '<S377>/Switch6' incorporates:
     *  DataStoreRead: '<S377>/Data Store Read1'
     *  DataStoreWrite: '<S377>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S392>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S392>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S392>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S393>/FixPt Bitwise Operator1'
     */
    if (rtb_Logical3_b0)
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(VeOHSR_g_CreepCndtn_DS | ((uint16)32));
    }
    else
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_CreepCndtn_DS)) | ((uint16)32))));
    }

    /* End of Switch: '<S377>/Switch6' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OHSI_InputProcessing'
     */
    /* Selector: '<S5>/Selector3' */
    rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b =
        rtb_TmpSignalConversionAtVaOSMR_n_NTur_h[rtb_Saturation];

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OHSC_Creep_Launch_Determination'
     */
    /* Sum: '<S311>/Sum3' incorporates:
     *  Selector: '<S5>/Selector3'
     */
    rtb_Switch = rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b -
        rtb_TmpSignalConversionAtVeMSPR_n_P2Sp_o;

    /* Outputs for Atomic SubSystem: '<S311>/Hysteresis' */
    /* Switch: '<S329>/Switch1' incorporates:
     *  Constant: '<S329>/Constant Value'
     *  Constant: '<S350>/Calib'
     *  Constant: '<S351>/Calib'
     *  RelationalOperator: '<S329>/Greater  Than'
     *  RelationalOperator: '<S329>/Greater  Than1'
     *  UnitDelay: '<S329>/Unit Delay'
     */
    if (rtb_Switch > KeOHSR_n_DwnHillLaunchTransIdleDelta_RSP)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_nx0 = true;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_nx0 = ((rtb_Switch >=
            KeOHSR_n_DwnHillLaunchTransIdleDelta_LSP) &&
            (OHSR_ac_DW.UnitDelay_DSTATE_nx0));
    }

    /* End of Switch: '<S329>/Switch1' */
    /* End of Outputs for SubSystem: '<S311>/Hysteresis' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OHSI_InputProcessing'
     */
    /* Sum: '<S311>/Sum4' */
    rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b -= VeOHSI_n_InputSpd_ILE;

    /* Outputs for Atomic SubSystem: '<S311>/Hysteresis1' */
    /* Switch: '<S330>/Switch1' incorporates:
     *  Constant: '<S330>/Constant Value'
     *  Constant: '<S352>/Calib'
     *  Constant: '<S353>/Calib'
     *  RelationalOperator: '<S330>/Greater  Than'
     *  RelationalOperator: '<S330>/Greater  Than1'
     *  UnitDelay: '<S330>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b >
            KeOHSR_n_DwnHillLaunchTransInputDelta_RSP)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_mr = true;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_mr =
            ((rtb_TmpSignalConversionAtVeMSPR_n_MtrB_b >=
              KeOHSR_n_DwnHillLaunchTransInputDelta_LSP) &&
             (OHSR_ac_DW.UnitDelay_DSTATE_mr));
    }

    /* End of Switch: '<S330>/Switch1' */
    /* End of Outputs for SubSystem: '<S311>/Hysteresis1' */

    /* Selector: '<S319>/Selector3' incorporates:
     *  Constant: '<S325>/Constant'
     *  Constant: '<S326>/Constant'
     *  Constant: '<S340>/Calib'
     *  Logic: '<S311>/Logical3'
     *  Logic: '<S311>/Logical4'
     *  RelationalOperator: '<S311>/Comparison3'
     *  RelationalOperator: '<S311>/Comparison4'
     *  UnitDelay: '<S329>/Unit Delay'
     *  UnitDelay: '<S330>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_NTurbF =
        (((((!OHSR_ac_DW.UnitDelay_DSTATE_nx0) || (((uint32)
              rtb_TmpSignalConversionAtVeTRNR_e_ILESta) != CeHCCR_e_ClLocked)) ||
           (!OHSR_ac_DW.UnitDelay_DSTATE_mr)) || (((uint32)
            rtb_TmpSignalConversionAtVeFWDR_e_Tcas_d) == CeFWDR_e_TfrCas4Low)) ||
         (!KeOHSR_b_EnableDwnHillLaunch));

    /* Switch: '<S378>/Switch6' incorporates:
     *  DataStoreRead: '<S378>/Data Store Read1'
     *  DataStoreWrite: '<S378>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S394>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S394>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S394>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S395>/FixPt Bitwise Operator1'
     */
    if (rtb_TmpSignalConversionAtVeCSVR_b_NTurbF)
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(VeOHSR_g_CreepCndtn_DS | ((uint16)64));
    }
    else
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_CreepCndtn_DS)) | ((uint16)64))));
    }

    /* End of Switch: '<S378>/Switch6' */

    /* Logic: '<S319>/Logical7' incorporates:
     *  Constant: '<S327>/Constant'
     *  Constant: '<S341>/Calib'
     *  Constant: '<S369>/Calib'
     *  DataTypeConversion: '<S311>/Data Type Conversion3'
     *  Logic: '<S311>/Logical19'
     *  Logic: '<S311>/Logical6'
     *  Logic: '<S311>/Logical7'
     *  RelationalOperator: '<S311>/Comparison7'
     *  RelationalOperator: '<S311>/Comparison8'
     *  RelationalOperator: '<S311>/Comparison9'
     *  Selector: '<S311>/Selector'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_ILEStat'
     */
    rtb_Comparison3_b1 = ((((((CeESSR_e_EngRunning == ((uint32)
        rtb_TmpSignalConversionAtVeESSR_e_EngSta)) || (!KaOHSR_b_DisableLowILE
        [(rtb_TmpSignalConversionAtVeTRNR_e_ILESta)])) ||
        (VeOHSR_b_IdleSpdCalcEngOn)) || (VeOHSC_n_IdleSpdTgt_Raw >=
        VeOHSI_n_InputSpd_ILE)) || (VeOHSI_n_InputSpd_ILE >=
                            OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_k))
                          || (!KeOHSR_b_EnableLowILE));

    /* Switch: '<S379>/Switch6' incorporates:
     *  DataStoreRead: '<S379>/Data Store Read1'
     *  DataStoreWrite: '<S379>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S396>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S396>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S396>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S397>/FixPt Bitwise Operator1'
     */
    if (rtb_Comparison3_b1)
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(VeOHSR_g_CreepCndtn_DS | ((uint16)128));
    }
    else
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_CreepCndtn_DS)) | ((uint16)128))));
    }

    /* End of Switch: '<S379>/Switch6' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeBRKR_b_ReqSSC_IdlDst' */
    (void)Rte_Read_VeBRKR_b_ReqSSC_IdlDst_Value(&tmpRead_u);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OHSC_Creep_Launch_Determination'
     */
    /* Logic: '<S319>/Logical6' incorporates:
     *  Constant: '<S334>/Calib'
     *  Logic: '<S311>/Logical24'
     *  Logic: '<S311>/Logical25'
     *  Selector: '<S311>/Selector3'
     */
    rtb_AND_h0v = ((!tmpRead_u) || (!KaOHSR_b_BrkDisableCreep
                    [(rtb_TmpSignalConversionAtVeOSMR_e_HRSR_S)]));

    /* Switch: '<S380>/Switch6' incorporates:
     *  DataStoreRead: '<S380>/Data Store Read1'
     *  DataStoreWrite: '<S380>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S398>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S398>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S398>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S399>/FixPt Bitwise Operator1'
     */
    if (rtb_AND_h0v)
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(VeOHSR_g_CreepCndtn_DS | ((uint16)256));
    }
    else
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_CreepCndtn_DS)) | ((uint16)256))));
    }

    /* End of Switch: '<S380>/Switch6' */

    /* Outputs for Atomic SubSystem: '<S311>/Hysteresis2' */
    /* Switch: '<S331>/Switch1' incorporates:
     *  Constant: '<S331>/Constant Value'
     *  Constant: '<S355>/Calib'
     *  Constant: '<S356>/Calib'
     *  RelationalOperator: '<S331>/Greater  Than'
     *  RelationalOperator: '<S331>/Greater  Than1'
     *  UnitDelay: '<S331>/Unit Delay'
     */
    if (VeOHSI_n_InputSpd_ILE > KeOHSR_n_TCNegSlipCreepExit_InpSpdThd_RSP)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_p4 = true;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_p4 = ((VeOHSI_n_InputSpd_ILE >=
            KeOHSR_n_TCNegSlipCreepExit_InpSpdThd_LSP) &&
            (OHSR_ac_DW.UnitDelay_DSTATE_p4));
    }

    /* End of Switch: '<S331>/Switch1' */
    /* End of Outputs for SubSystem: '<S311>/Hysteresis2' */

    /* Sum: '<S311>/Sum5' */
    rtb_TmpSignalConversionAtVeVSDR_n_NTur_j -=
        rtb_TmpSignalConversionAtVeMSPR_n_P2Sp_o;

    /* Outputs for Atomic SubSystem: '<S311>/Hysteresis3' */
    /* Switch: '<S332>/Switch1' incorporates:
     *  Constant: '<S332>/Constant Value'
     *  Constant: '<S357>/Calib'
     *  Constant: '<S358>/Calib'
     *  RelationalOperator: '<S332>/Greater  Than'
     *  RelationalOperator: '<S332>/Greater  Than1'
     *  UnitDelay: '<S332>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeVSDR_n_NTur_j >
            KeOHSR_n_TCNegSlipCreepExit_TurbSpdDiff_RSP)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_oz = true;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_oz =
            ((rtb_TmpSignalConversionAtVeVSDR_n_NTur_j >=
              KeOHSR_n_TCNegSlipCreepExit_TurbSpdDiff_LSP) &&
             (OHSR_ac_DW.UnitDelay_DSTATE_oz));
    }

    /* End of Switch: '<S332>/Switch1' */
    /* End of Outputs for SubSystem: '<S311>/Hysteresis3' */

    /* Outputs for Atomic SubSystem: '<S311>/Hysteresis4' */
    /* Switch: '<S333>/Switch1' incorporates:
     *  Constant: '<S333>/Constant Value'
     *  Constant: '<S337>/Calib'
     *  Constant: '<S338>/Calib'
     *  RelationalOperator: '<S333>/Greater  Than'
     *  RelationalOperator: '<S333>/Greater  Than1'
     *  UnitDelay: '<S333>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeICSR_M_EngCLO >
            KeOHSR_M_TCNegSlipCreepExit_EngCLTrq_RSP)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_kmm = true;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_kmm =
            ((rtb_TmpSignalConversionAtVeICSR_M_EngCLO >=
              KeOHSR_M_TCNegSlipCreepExit_EngCLTrq_LSP) &&
             (OHSR_ac_DW.UnitDelay_DSTATE_kmm));
    }

    /* End of Switch: '<S333>/Switch1' */
    /* End of Outputs for SubSystem: '<S311>/Hysteresis4' */

    /* VariantMerge generated from: '<S10>/XeOHSR_b_LaunchSpdCntrl_Enbl' incorporates:
     *  Logic: '<S311>/Logical27'
     *  Logic: '<S311>/Logical28'
     *  Logic: '<S311>/Logical29'
     *  UnitDelay: '<S331>/Unit Delay'
     *  UnitDelay: '<S332>/Unit Delay'
     *  UnitDelay: '<S333>/Unit Delay'
     */
    rtb_Comparison10_f = (((!OHSR_ac_DW.UnitDelay_DSTATE_p4) ||
                           (!OHSR_ac_DW.UnitDelay_DSTATE_oz)) ||
                          (OHSR_ac_DW.UnitDelay_DSTATE_kmm));

    /* Switch: '<S381>/Switch6' incorporates:
     *  DataStoreRead: '<S381>/Data Store Read1'
     *  DataStoreWrite: '<S381>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S400>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S400>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S400>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S401>/FixPt Bitwise Operator1'
     */
    if (rtb_Comparison10_f)
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(VeOHSR_g_CreepCndtn_DS | ((uint16)512));
    }
    else
    {
        VeOHSR_g_CreepCndtn_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_CreepCndtn_DS)) | ((uint16)512))));
    }

    /* End of Switch: '<S381>/Switch6' */

    /* Logic: '<S311>/Logical' */
    rtb_Logical_h = (((((((((rtb_Logical_h && rtb_Logical16) && rtb_Logical4_fg)
                           && rtb_Logical1_jm) && rtb_Logical14_i) &&
                         rtb_Logical3_b0) &&
                        rtb_TmpSignalConversionAtVeCSVR_b_NTurbF) && rtb_AND_h0v)
                      && rtb_Comparison3_b1) && rtb_Comparison10_f);

    /* Sum: '<S422>/Sum1' incorporates:
     *  Constant: '<S414>/Calib'
     *  Constant: '<S415>/Calib'
     *  Constant: '<S419>/Calib'
     *  DataStoreRead: '<S424>/Data Store Read1'
     *  DataStoreRead: '<S425>/Data Store Read2'
     *  DataStoreRead: '<S426>/Data Store Read2'
     *  DataStoreRead: '<S427>/Data Store Read2'
     *  DataStoreRead: '<S428>/Data Store Read2'
     *  DataStoreRead: '<S429>/Data Store Read2'
     *  DataStoreRead: '<S430>/Data Store Read2'
     *  DataStoreRead: '<S431>/Data Store Read2'
     *  DataStoreRead: '<S432>/Data Store Read2'
     *  DataStoreRead: '<S433>/Data Store Read2'
     *  DataStoreRead: '<S434>/Data Store Read2'
     *  DataStoreRead: '<S435>/Data Store Read2'
     *  DataStoreRead: '<S436>/Data Store Read2'
     *  DataStoreRead: '<S437>/Data Store Read2'
     *  DataStoreWrite: '<S424>/Data Store Write1'
     *  DataStoreWrite: '<S425>/Data Store Write2'
     *  DataStoreWrite: '<S426>/Data Store Write2'
     *  DataStoreWrite: '<S427>/Data Store Write2'
     *  DataStoreWrite: '<S428>/Data Store Write2'
     *  DataStoreWrite: '<S429>/Data Store Write2'
     *  DataStoreWrite: '<S430>/Data Store Write2'
     *  DataStoreWrite: '<S431>/Data Store Write2'
     *  DataStoreWrite: '<S432>/Data Store Write2'
     *  DataStoreWrite: '<S433>/Data Store Write2'
     *  DataStoreWrite: '<S434>/Data Store Write2'
     *  DataStoreWrite: '<S435>/Data Store Write2'
     *  DataStoreWrite: '<S436>/Data Store Write2'
     *  DataStoreWrite: '<S437>/Data Store Write2'
     *  DataTypeConversion: '<S371>/Data Type Conversion1'
     *  DataTypeConversion: '<S371>/Data Type Conversion2'
     *  Inport: '<Root>/VeICSR_M_TaCL_PreRamp'
     *  Inport: '<Root>/VeICSR_M_TbCL_PreRamp'
     *  Inport: '<Root>/VeICSR_b_AdvancePrepForIdle'
     *  Logic: '<S371>/Logical1'
     *  Logic: '<S371>/Logical2'
     *  Logic: '<S371>/Logical25'
     *  Logic: '<S371>/Logical3'
     *  Logic: '<S371>/Logical4'
     *  Logic: '<S371>/Logical5'
     *  Logic: '<S422>/Logical'
     *  Logic: '<S422>/Logical1'
     *  Logic: '<S422>/Logical2'
     *  Logic: '<S422>/Logical3'
     *  RelationalOperator: '<S371>/Comparison4'
     *  RelationalOperator: '<S422>/Comparison1'
     *  RelationalOperator: '<S422>/Comparison3'
     *  S-Function (sfix_bitop): '<S438>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S438>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S438>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S439>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S440>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S440>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S440>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S441>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S442>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S442>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S442>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S443>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S444>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S444>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S444>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S445>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S446>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S446>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S446>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S447>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S448>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S448>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S448>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S449>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S450>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S450>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S450>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S451>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S452>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S452>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S452>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S453>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S454>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S454>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S454>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S455>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S456>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S456>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S456>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S457>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S458>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S458>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S458>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S459>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S460>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S460>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S460>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S461>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S462>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S462>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S462>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S463>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S464>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S464>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S464>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S465>/FixPt Bitwise Operator1'
     *  Selector: '<S371>/Selector1'
     *  Selector: '<S371>/Selector2'
     *  SignalConversion generated from: '<S1>/VeOSMR_e_HRSR_State'
     *  SignalConversion generated from: '<S311>/XeOHSR_b_SuperCreep_Enbl'
     *  Sum: '<S371>/Sum3'
     *  Sum: '<S422>/Sum2'
     *  Sum: '<S422>/Sum4'
     *  Switch: '<S371>/Switch1'
     *  Switch: '<S371>/Switch2'
     *  Switch: '<S422>/Switch2'
     *  Switch: '<S424>/Switch6'
     *  Switch: '<S425>/Switch6'
     *  Switch: '<S426>/Switch6'
     *  Switch: '<S427>/Switch6'
     *  Switch: '<S428>/Switch6'
     *  Switch: '<S429>/Switch6'
     *  Switch: '<S430>/Switch6'
     *  Switch: '<S431>/Switch6'
     *  Switch: '<S432>/Switch6'
     *  Switch: '<S433>/Switch6'
     *  Switch: '<S434>/Switch6'
     *  Switch: '<S435>/Switch6'
     *  Switch: '<S436>/Switch6'
     *  Switch: '<S437>/Switch6'
     *  UnitDelay: '<S416>/Unit Delay'
     *  UnitDelay: '<S422>/Unit Delay1'
     *  UnitDelay: '<S422>/Unit Delay2'
     *  UnitDelay: '<S423>/Unit Delay'
     *  UnitDelay: '<S476>/Unit Delay'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_3

    /* Outputs for Atomic SubSystem: '<S371>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S371>/Hysteresis' */
    /* Outputs for Atomic SubSystem: '<S371>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S422>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S422>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S422>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S422>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S422>/Hysteresis' */
    /* Sum: '<S422>/Sum2' incorporates:
     *  Constant: '<S472>/Calib'
     */
    rtb_TmpSignalConversionAtVeICSR_M_EngCLO = (KeOHSR_n_IdleSpdOffsetSC +
        rtb_TmpSignalConversionAtVeMSPR_n_P2Sp_o) - VeOHSI_n_InputSpd_ILE;

    /* Switch: '<S469>/Switch1' incorporates:
     *  Constant: '<S469>/Constant Value'
     *  Constant: '<S473>/Calib'
     *  Constant: '<S474>/Calib'
     *  RelationalOperator: '<S469>/Greater  Than'
     *  RelationalOperator: '<S469>/Greater  Than1'
     *  UnitDelay: '<S469>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeICSR_M_EngCLO >
            KeOHSR_n_SuperCreepSpeedDelta_RSP)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_cv4 = true;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_cv4 =
            ((rtb_TmpSignalConversionAtVeICSR_M_EngCLO >=
              KeOHSR_n_SuperCreepSpeedDelta_LSP) &&
             (OHSR_ac_DW.UnitDelay_DSTATE_cv4));
    }

    /* End of Switch: '<S469>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S477>/EdgeFalling1' */
    /* Logic: '<S478>/AND' incorporates:
     *  Logic: '<S478>/OR1'
     *  UnitDelay: '<S469>/Unit Delay'
     *  UnitDelay: '<S478>/Unit Delay'
     */
    rtb_Logical16 = ((!OHSR_ac_DW.UnitDelay_DSTATE_cv4) &&
                     (OHSR_ac_DW.UnitDelay_DSTATE_a1));

    /* Update for UnitDelay: '<S478>/Unit Delay' incorporates:
     *  UnitDelay: '<S469>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_a1 = OHSR_ac_DW.UnitDelay_DSTATE_cv4;

    /* End of Outputs for SubSystem: '<S477>/EdgeFalling1' */

    /* Switch: '<S477>/Switch' incorporates:
     *  Constant: '<S468>/Calib'
     *  Constant: '<S475>/Calib'
     *  Constant: '<S477>/Constant Value1'
     *  MinMax: '<S477>/Minimum'
     *  Sum: '<S477>/Summation'
     *  UnitDelay: '<S477>/Unit Delay'
     */
    if (rtb_Logical16)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_ft = KeOHSR_t_SuperCreepActivationDelay;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_ft = fmaxf(OHSR_ac_DW.UnitDelay_DSTATE_ft -
            HeOHSR_t_Idle_dT, 0.0F);
    }

    /* End of Switch: '<S477>/Switch' */

    /* Logic: '<S477>/AND' incorporates:
     *  Constant: '<S477>/Constant Value2'
     *  RelationalOperator: '<S477>/Greater  Than'
     *  UnitDelay: '<S469>/Unit Delay'
     *  UnitDelay: '<S477>/Unit Delay'
     */
    rtb_Logical16 = ((OHSR_ac_DW.UnitDelay_DSTATE_cv4) ||
                     (OHSR_ac_DW.UnitDelay_DSTATE_ft > 0.0F));
    rtb_Logical14_i = !rtb_Logical_h;

    /* Logic: '<S466>/AND' incorporates:
     *  Logic: '<S466>/OR1'
     *  UnitDelay: '<S466>/Unit Delay'
     */
    rtb_Logical1_jm = ((!rtb_Logical16) && (OHSR_ac_DW.UnitDelay_DSTATE_gd));

    /* Update for UnitDelay: '<S466>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_gd = rtb_Logical16;

    /* Logic: '<S476>/OR' incorporates:
     *  Constant: '<S470>/Calib'
     *  Logic: '<S476>/OR1'
     *  UnitDelay: '<S422>/Unit Delay2'
     *  UnitDelay: '<S476>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_pr = ((OHSR_ac_DW.UnitDelay2_DSTATE_c) &&
        (((rtb_Logical1_jm && rtb_Logical14_i) &&
          ((rtb_TmpSignalConversionAtVeTTQR_M_SumTrq -
            rtb_TmpSignalConversionAtVeVTVR_M_Load_e) >
           KeOHSR_M_Offset_Static2Front_SC)) || (OHSR_ac_DW.UnitDelay_DSTATE_pr)));

    /* Logic: '<S467>/AND' incorporates:
     *  Logic: '<S467>/OR1'
     *  UnitDelay: '<S467>/Unit Delay'
     *  UnitDelay: '<S476>/Unit Delay'
     */
    rtb_Logical1_jm = ((OHSR_ac_DW.UnitDelay_DSTATE_pr) &&
                       (!OHSR_ac_DW.UnitDelay_DSTATE_gx5));

    /* Update for UnitDelay: '<S467>/Unit Delay' incorporates:
     *  UnitDelay: '<S476>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_gx5 = OHSR_ac_DW.UnitDelay_DSTATE_pr;
    if (OHSR_ac_DW.UnitDelay_DSTATE_pr)
    {
        /* Switch: '<S422>/Switch4' incorporates:
         *  Constant: '<S471>/Calib'
         */
        if (KeOHSR_b_EnblSumTrqlatchSC)
        {
            /* Switch: '<S422>/Switch3' incorporates:
             *  Constant: '<S422>/Constant Value1'
             *  Constant: '<S470>/Calib'
             */
            if (rtb_Logical1_jm)
            {
                rtb_TmpSignalConversionAtVeTTQR_M_SumTrq =
                    KeOHSR_M_Offset_Static2Front_SC;
            }
            else
            {
                rtb_TmpSignalConversionAtVeTTQR_M_SumTrq = 0.0F;
            }

            /* End of Switch: '<S422>/Switch3' */

            /* Switch: '<S422>/Switch2' incorporates:
             *  Sum: '<S422>/Sum3'
             *  Switch: '<S422>/Switch4'
             */
            VeOHSR_M_SumTrqStaticNoCLLatch = VeOHSR_M_SumTrqStaticNoCLLatch +
                rtb_TmpSignalConversionAtVeTTQR_M_SumTrq;
        }
        else
        {
            /* Switch: '<S422>/Switch2' incorporates:
             *  Switch: '<S422>/Switch4'
             */
            VeOHSR_M_SumTrqStaticNoCLLatch =
                rtb_TmpSignalConversionAtVeTTQR_M_SumTrq;
        }

        /* End of Switch: '<S422>/Switch4' */
    }
    else
    {
        /* Switch: '<S422>/Switch2' */
        VeOHSR_M_SumTrqStaticNoCLLatch =
            rtb_TmpSignalConversionAtVeTTQR_M_SumTrq;
    }

    OHSR_ac_DW.UnitDelay2_DSTATE_c = (VeOHSR_M_SumTrqStaticNoCLLatch >
        rtb_TmpSignalConversionAtVeVTVR_M_Load_e);

    /* Logic: '<S423>/OR' incorporates:
     *  Logic: '<S423>/NOT'
     *  Logic: '<S423>/OR1'
     *  UnitDelay: '<S371>/Unit Delay'
     *  UnitDelay: '<S422>/Unit Delay2'
     *  UnitDelay: '<S423>/Unit Delay'
     *  UnitDelay: '<S476>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_hy = ((rtb_Logical16 && rtb_Logical14_i) ||
        (((!OHSR_ac_DW.UnitDelay_DSTATE_fuv) && (OHSR_ac_DW.UnitDelay2_DSTATE_c))
         && (OHSR_ac_DW.UnitDelay_DSTATE_hy)));
    if (OHSR_ac_DW.UnitDelay_DSTATE_hy)
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(VeOHSR_g_SuperCreep_DS | ((uint16)1));
    }
    else
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_SuperCreep_DS)) | ((uint16)1))));
    }

    /* Logic: '<S319>/Logical6' incorporates:
     *  Constant: '<S413>/Constant'
     *  DataStoreRead: '<S424>/Data Store Read1'
     *  DataStoreWrite: '<S424>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S438>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S438>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S438>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S439>/FixPt Bitwise Operator1'
     *  UnitDelay: '<S423>/Unit Delay'
     */
    rtb_AND_h0v = (CeFWDR_e_TfrCas4Low == ((uint32)
                    rtb_TmpSignalConversionAtVeFWDR_e_Tcas_d));
    if (rtb_AND_h0v)
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(VeOHSR_g_SuperCreep_DS | ((uint16)2));
    }
    else
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_SuperCreep_DS)) | ((uint16)2))));
    }

    if (KeOHSR_b_EnblSuperCreep)
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(VeOHSR_g_SuperCreep_DS | ((uint16)4));
    }
    else
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_SuperCreep_DS)) | ((uint16)4))));
    }

    if (OHSR_ac_DW.UnitDelay2_DSTATE_c)
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(VeOHSR_g_SuperCreep_DS | ((uint16)8));
    }
    else
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_SuperCreep_DS)) | ((uint16)8))));
    }

    if (rtb_Logical14_i)
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(VeOHSR_g_SuperCreep_DS | ((uint16)16));
    }
    else
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_SuperCreep_DS)) | ((uint16)16))));
    }

    /* Selector: '<S319>/Selector3' incorporates:
     *  Constant: '<S414>/Calib'
     *  Constant: '<S419>/Calib'
     *  DataStoreRead: '<S425>/Data Store Read2'
     *  DataStoreRead: '<S430>/Data Store Read2'
     *  DataStoreRead: '<S431>/Data Store Read2'
     *  DataStoreRead: '<S432>/Data Store Read2'
     *  DataStoreWrite: '<S425>/Data Store Write2'
     *  DataStoreWrite: '<S430>/Data Store Write2'
     *  DataStoreWrite: '<S431>/Data Store Write2'
     *  DataStoreWrite: '<S432>/Data Store Write2'
     *  S-Function (sfix_bitop): '<S440>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S440>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S440>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S441>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S450>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S450>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S450>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S451>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S452>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S452>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S452>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S453>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S454>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S454>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S454>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S455>/FixPt Bitwise Operator1'
     *  UnitDelay: '<S422>/Unit Delay2'
     */
    rtb_TmpSignalConversionAtVeCSVR_b_NTurbF = HaOHSR_b_SuperCreepUseTa
        [(rtb_TmpSignalConversionAtVeOSMR_e_HRSR_S)];
    if (HaOHSR_b_SuperCreepUseTa[(rtb_TmpSignalConversionAtVeOSMR_e_HRSR_S)])
    {
        (void)Rte_Read_VeICSR_M_TaCL_PreRamp_Value(&tmpRead_o);

        /* Switch: '<S8>/Switch' incorporates:
         *  Constant: '<S420>/Calib'
         *  Inport: '<Root>/VeICSR_M_TaCL_PreRamp'
         *  Product: '<S371>/Product'
         */
        rtb_Sum3_h = tmpRead_o * ((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f());
    }
    else
    {
        /* Switch: '<S8>/Switch' incorporates:
         *  Constant: '<S371>/Constant Value1'
         */
        rtb_Sum3_h = 0.0F;
    }

    (void)Rte_Read_VeICSR_M_TbCL_PreRamp_Value(&tmpRead_p);
    if (HaOHSR_b_SuperCreepUseTb[(sint16)
            rtb_TmpSignalConversionAtVeOSMR_e_HRSR_S])
    {
        /* VariantMerge generated from: '<S4>/XeOHSR_b_IdleSpdBSG_Enbl' */
        rtb_Sum2_oy = tmpRead_p;
    }
    else
    {
        /* VariantMerge generated from: '<S4>/XeOHSR_b_IdleSpdBSG_Enbl' incorporates:
         *  Constant: '<S371>/Constant Value2'
         */
        rtb_Sum2_oy = 0.0F;
    }

    /* Sum: '<S371>/Sum3' incorporates:
     *  Constant: '<S414>/Calib'
     *  Constant: '<S415>/Calib'
     *  Inport: '<Root>/VeICSR_M_TaCL_PreRamp'
     *  Inport: '<Root>/VeICSR_M_TbCL_PreRamp'
     *  SignalConversion generated from: '<S1>/VeOSMR_e_HRSR_State'
     */
    rtb_TmpSignalConversionAtVeVTVR_M_Load_e = rtb_Sum3_h + rtb_Sum2_oy;

    /* Switch: '<S416>/Switch1' incorporates:
     *  Constant: '<S416>/Constant Value'
     *  Constant: '<S417>/Calib'
     *  Constant: '<S418>/Calib'
     *  RelationalOperator: '<S416>/Greater  Than'
     *  RelationalOperator: '<S416>/Greater  Than1'
     *  UnitDelay: '<S416>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeVTVR_M_Load_e > KeOHSR_M_SuperCreepCombCL_RSP)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_om = true;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_om =
            ((rtb_TmpSignalConversionAtVeVTVR_M_Load_e >=
              KeOHSR_M_SuperCreepCombCL_LSP) && (OHSR_ac_DW.UnitDelay_DSTATE_om));
    }

    /* End of Switch: '<S416>/Switch1' */
    if (OHSR_ac_DW.UnitDelay_DSTATE_om)
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(VeOHSR_g_SuperCreep_DS | ((uint16)32));
    }
    else
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_SuperCreep_DS)) | ((uint16)32))));
    }

    /* Logic: '<S319>/Logical4' incorporates:
     *  Constant: '<S415>/Calib'
     *  DataStoreRead: '<S433>/Data Store Read2'
     *  DataStoreWrite: '<S433>/Data Store Write2'
     *  S-Function (sfix_bitop): '<S456>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S456>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S456>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S457>/FixPt Bitwise Operator1'
     *  SignalConversion generated from: '<S1>/VeOSMR_e_HRSR_State'
     *  UnitDelay: '<S416>/Unit Delay'
     */
    rtb_Logical4_fg = (rtb_TmpSignalConversionAtVeCSVR_b_NTurbF ||
                       (HaOHSR_b_SuperCreepUseTb[(sint16)
                        rtb_TmpSignalConversionAtVeOSMR_e_HRSR_S]));
    if (rtb_Logical4_fg)
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(VeOHSR_g_SuperCreep_DS | ((uint16)64));
    }
    else
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_SuperCreep_DS)) | ((uint16)64))));
    }

    (void)Rte_Read_VeICSR_b_AdvancePrepForIdle_Value(&tmpRead_q);

    /* Logic: '<S371>/Logical1' incorporates:
     *  DataStoreRead: '<S434>/Data Store Read2'
     *  DataStoreWrite: '<S434>/Data Store Write2'
     *  Inport: '<Root>/VeICSR_b_AdvancePrepForIdle'
     *  S-Function (sfix_bitop): '<S458>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S458>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S458>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S459>/FixPt Bitwise Operator1'
     */
    rtb_Logical1_jm = !tmpRead_q;
    if (rtb_Logical1_jm)
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(VeOHSR_g_SuperCreep_DS | ((uint16)128));
    }
    else
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_SuperCreep_DS)) | ((uint16)128))));
    }

    if (rtb_Logical16)
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(VeOHSR_g_SuperCreep_DS | ((uint16)256));
    }
    else
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_SuperCreep_DS)) | ((uint16)256))));
    }

    if (rtb_Logical14_i)
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(VeOHSR_g_SuperCreep_DS | ((uint16)512));
    }
    else
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_SuperCreep_DS)) | ((uint16)512))));
    }

    if (OHSR_ac_DW.UnitDelay_DSTATE_pr)
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(VeOHSR_g_SuperCreep_DS | ((uint16)1024));
    }
    else
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_SuperCreep_DS)) | ((uint16)1024))));
    }

    if (rtb_TmpSignalConversionAtVeCSVR_b_NTurbF)
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(VeOHSR_g_SuperCreep_DS | ((uint16)2048));
    }
    else
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_SuperCreep_DS)) | ((uint16)2048))));
    }

    if (HaOHSR_b_SuperCreepUseTb[(sint16)
            rtb_TmpSignalConversionAtVeOSMR_e_HRSR_S])
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(VeOHSR_g_SuperCreep_DS | ((uint16)4096));
    }
    else
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_SuperCreep_DS)) | ((uint16)4096))));
    }

    /* Logic: '<S371>/Logical3' incorporates:
     *  Constant: '<S415>/Calib'
     *  Constant: '<S419>/Calib'
     *  DataStoreRead: '<S426>/Data Store Read2'
     *  DataStoreRead: '<S427>/Data Store Read2'
     *  DataStoreRead: '<S428>/Data Store Read2'
     *  DataStoreRead: '<S435>/Data Store Read2'
     *  DataStoreRead: '<S436>/Data Store Read2'
     *  DataStoreRead: '<S437>/Data Store Read2'
     *  DataStoreWrite: '<S426>/Data Store Write2'
     *  DataStoreWrite: '<S427>/Data Store Write2'
     *  DataStoreWrite: '<S428>/Data Store Write2'
     *  DataStoreWrite: '<S435>/Data Store Write2'
     *  DataStoreWrite: '<S436>/Data Store Write2'
     *  DataStoreWrite: '<S437>/Data Store Write2'
     *  S-Function (sfix_bitop): '<S442>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S442>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S442>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S443>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S444>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S444>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S444>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S445>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S446>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S446>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S446>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S447>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S460>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S460>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S460>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S461>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S462>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S462>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S462>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S463>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S464>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S464>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S464>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S465>/FixPt Bitwise Operator1'
     *  SignalConversion generated from: '<S1>/VeOSMR_e_HRSR_State'
     *  UnitDelay: '<S416>/Unit Delay'
     *  UnitDelay: '<S423>/Unit Delay'
     *  UnitDelay: '<S476>/Unit Delay'
     */
    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_i =
        (((((((OHSR_ac_DW.UnitDelay_DSTATE_hy) && rtb_AND_h0v) &&
             rtb_Logical14_i) && (OHSR_ac_DW.UnitDelay_DSTATE_om)) &&
           rtb_Logical4_fg) && rtb_Logical1_jm) && (KeOHSR_b_EnblSuperCreep));
    if (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_i)
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(VeOHSR_g_SuperCreep_DS | ((uint16)8192));
    }
    else
    {
        VeOHSR_g_SuperCreep_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_SuperCreep_DS)) | ((uint16)8192))));
    }

    /* Logic: '<S412>/AND' incorporates:
     *  DataStoreRead: '<S429>/Data Store Read2'
     *  DataStoreWrite: '<S429>/Data Store Write2'
     *  Logic: '<S412>/OR1'
     *  S-Function (sfix_bitop): '<S448>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S448>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S448>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S449>/FixPt Bitwise Operator1'
     *  UnitDelay: '<S371>/Unit Delay'
     *  UnitDelay: '<S412>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_fuv =
        ((!OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_i) &&
         (OHSR_ac_DW.UnitDelay_DSTATE_ek));

    /* Update for UnitDelay: '<S412>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_ek =
        OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_i;

    /* End of Outputs for SubSystem: '<S422>/Hysteresis' */
    /* End of Outputs for SubSystem: '<S422>/Turn Off Delay Time' */
    /* End of Outputs for SubSystem: '<S422>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S422>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S422>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S371>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S371>/Hysteresis' */
    /* End of Outputs for SubSystem: '<S371>/EdgeFalling' */
#else

    /* VariantMerge generated from: '<S311>/XeOHSR_b_SuperCreep_Enbl' incorporates:
     *  Constant: '<S311>/FALSE Constant'
     */
    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_i = false;

#endif

    /* End of Sum: '<S422>/Sum1' */

    /* VariantMerge generated from: '<S10>/XeOHSR_b_LaunchSpdCntrl_Enbl' incorporates:
     *  Constant: '<S488>/Calib'
     *  Constant: '<S494>/Constant'
     *  Constant: '<S495>/Constant'
     *  Constant: '<S496>/Constant'
     *  Logic: '<S319>/Logical24'
     *  Logic: '<S319>/Logical25'
     *  Logic: '<S319>/Logical26'
     *  Logic: '<S319>/Logical27'
     *  RelationalOperator: '<S319>/Comparison25'
     *  RelationalOperator: '<S319>/Comparison26'
     *  RelationalOperator: '<S319>/Comparison27'
     */
    rtb_Comparison10_f = (((((uint32)rtb_TmpSignalConversionAtVeTRNR_e_ILESta) ==
                            CeHCCR_e_ClReleased) || ((((uint32)
        rtb_TmpSignalConversionAtVeTRNR_e_ILESta) != CeHCCR_e_ClSynched) &&
                            (((uint32)rtb_TmpSignalConversionAtVeTRNR_e_ILESta)
        != CeHCCR_e_ClLocked))) && (KeOHSR_b_EnblK1BsdVLENeutDtrmn));

    /* Switch: '<S503>/Switch6' incorporates:
     *  DataStoreRead: '<S503>/Data Store Read1'
     *  DataStoreWrite: '<S503>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S509>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S509>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S509>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S510>/FixPt Bitwise Operator1'
     */
    if (rtb_Comparison10_f)
    {
        VeOHSR_g_NeutCndtn_DS = (uint16)(VeOHSR_g_NeutCndtn_DS | ((uint16)1));
    }
    else
    {
        VeOHSR_g_NeutCndtn_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_NeutCndtn_DS)) | ((uint16)1))));
    }

    /* End of Switch: '<S503>/Switch6' */

    /* Logic: '<S319>/Logical6' incorporates:
     *  Constant: '<S313>/Calib'
     *  Constant: '<S489>/Calib'
     *  Constant: '<S500>/Constant'
     *  Constant: '<S502>/Constant'
     *  Logic: '<S319>/Logical19'
     *  Logic: '<S319>/Logical22'
     *  RelationalOperator: '<S319>/Comparison28'
     *  RelationalOperator: '<S319>/Comparison3'
     */
    rtb_AND_h0v = (((((VeOHSR_b_RngEqnSelToNeutral) &&
                      (KeOHSR_b_EnblRngEqnSelOverrd)) || (((uint32)
                       rtb_TmpSignalConversionAtVeTRNR_e_Actu_c) ==
                      CeTRNR_e_Neutral)) || (((uint32)
                      rtb_TmpSignalConversionAtVeOSMR_e_Stea_i) ==
                     CeOSMR_e_TransSt_Neutral)) && (KeOHSR_b_EnblILENeutinN));

    /* Switch: '<S504>/Switch6' incorporates:
     *  DataStoreRead: '<S504>/Data Store Read1'
     *  DataStoreWrite: '<S504>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S511>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S511>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S511>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S512>/FixPt Bitwise Operator1'
     */
    if (rtb_AND_h0v)
    {
        VeOHSR_g_NeutCndtn_DS = (uint16)(VeOHSR_g_NeutCndtn_DS | ((uint16)2));
    }
    else
    {
        VeOHSR_g_NeutCndtn_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_NeutCndtn_DS)) | ((uint16)2))));
    }

    /* End of Switch: '<S504>/Switch6' */

    /* Logic: '<S319>/Logical7' incorporates:
     *  Constant: '<S314>/Calib'
     *  Constant: '<S493>/Constant'
     *  Constant: '<S501>/Constant'
     *  Logic: '<S319>/Logical1'
     *  RelationalOperator: '<S319>/Comparison24'
     *  RelationalOperator: '<S319>/Comparison29'
     */
    rtb_Comparison3_b1 = (((((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Actu_c) ==
                            CeTRNR_e_Park) || (((uint32)
        rtb_TmpSignalConversionAtVeOSMR_e_Stea_i) == CeOSMR_e_TransSt_Park)) &&
                          (KeOHSR_b_EnblILENeutinP));

    /* Switch: '<S505>/Switch6' incorporates:
     *  DataStoreRead: '<S505>/Data Store Read1'
     *  DataStoreWrite: '<S505>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S513>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S513>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S513>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S514>/FixPt Bitwise Operator1'
     */
    if (rtb_Comparison3_b1)
    {
        VeOHSR_g_NeutCndtn_DS = (uint16)(VeOHSR_g_NeutCndtn_DS | ((uint16)4));
    }
    else
    {
        VeOHSR_g_NeutCndtn_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_NeutCndtn_DS)) | ((uint16)4))));
    }

    /* End of Switch: '<S505>/Switch6' */

    /* Switch: '<S506>/Switch6' incorporates:
     *  Constant: '<S486>/Calib'
     *  DataStoreRead: '<S506>/Data Store Read1'
     *  DataStoreWrite: '<S506>/Data Store Write1'
     *  DataTypeConversion: '<S319>/Data Type Conversion2'
     *  S-Function (sfix_bitop): '<S515>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S515>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S515>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S516>/FixPt Bitwise Operator1'
     *  Selector: '<S319>/Selector3'
     *  SignalConversion generated from: '<S1>/VeFWDR_e_Tcase_Stat'
     */
    if (KaOHSR_b_EnblILENeut_TCase[(sint16)
            rtb_TmpSignalConversionAtVeFWDR_e_Tcas_d])
    {
        VeOHSR_g_NeutCndtn_DS = (uint16)(VeOHSR_g_NeutCndtn_DS | ((uint16)8));
    }
    else
    {
        VeOHSR_g_NeutCndtn_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_NeutCndtn_DS)) | ((uint16)8))));
    }

    /* End of Switch: '<S506>/Switch6' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeOSMR_M_OutTorqReqBrake' */
    (void)Rte_Read_VeOSMR_M_OutTorqReqBrake_Value(&rtb_Sum2_es);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OHSC_Creep_Launch_Determination'
     */
    /* Switch: '<S507>/Switch6' incorporates:
     *  DataStoreRead: '<S507>/Data Store Read1'
     *  DataStoreWrite: '<S507>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S517>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S517>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S517>/FixPt Bitwise Operator5'
     */
    VeOHSR_g_NeutCndtn_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_NeutCndtn_DS))
        | ((uint16)16))));

    /* Logic: '<S319>/Logical4' incorporates:
     *  Constant: '<S485>/Calib'
     *  Constant: '<S492>/Constant'
     *  Constant: '<S497>/Constant'
     *  Constant: '<S498>/Constant'
     *  Constant: '<S499>/Constant'
     *  Logic: '<S319>/Logical29'
     *  Logic: '<S319>/Logical5'
     *  RelationalOperator: '<S319>/Comparison1'
     *  RelationalOperator: '<S319>/Comparison2'
     *  RelationalOperator: '<S319>/Comparison4'
     *  RelationalOperator: '<S319>/Comparison5'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_TargetGear'
     */
    rtb_Logical4_fg = ((((((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Actu_c) ==
                          CeTRNR_e_Neutral) || (((uint32)
                           rtb_TmpSignalConversionAtVeTRNR_e_Actu_c) ==
                          CeTRNR_e_Park)) && ((((uint32)
                           rtb_TmpSignalConversionAtVeTRNR_e_Targ_i) ==
                          CeTRNR_e_Neutral) || (((uint32)
                           rtb_TmpSignalConversionAtVeTRNR_e_Targ_i) ==
                          CeTRNR_e_Park))) && (HeOHSR_b_ILENeutralCon));

    /* Switch: '<S508>/Switch6' incorporates:
     *  DataStoreRead: '<S508>/Data Store Read1'
     *  DataStoreWrite: '<S508>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S519>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S519>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S519>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S520>/FixPt Bitwise Operator1'
     */
    if (rtb_Logical4_fg)
    {
        VeOHSR_g_NeutCndtn_DS = (uint16)(VeOHSR_g_NeutCndtn_DS | ((uint16)32));
    }
    else
    {
        VeOHSR_g_NeutCndtn_DS = (uint16)(~((uint16)(((uint16)
            (~VeOHSR_g_NeutCndtn_DS)) | ((uint16)32))));
    }

    /* End of Switch: '<S508>/Switch6' */

    /* Logic: '<S319>/Logical2' incorporates:
     *  Constant: '<S486>/Calib'
     *  DataTypeConversion: '<S319>/Data Type Conversion2'
     *  Selector: '<S319>/Selector3'
     *  SignalConversion generated from: '<S1>/VeFWDR_e_Tcase_Stat'
     */
    rtb_Logical16 = ((((rtb_Comparison10_f || rtb_AND_h0v) || rtb_Comparison3_b1)
                      || (KaOHSR_b_EnblILENeut_TCase[(sint16)
                          rtb_TmpSignalConversionAtVeFWDR_e_Tcas_d])) ||
                     rtb_Logical4_fg);

    /* RelationalOperator: '<S317>/Comparison4' incorporates:
     *  DataTypeConversion: '<S317>/Data Type Conversion'
     *  Inport: '<Root>/VeMSPR_e_P2Spd_Prfl_Enbl'
     *  Logic: '<S317>/Logical'
     *  Logic: '<S317>/Logical1'
     *  Selector: '<S317>/Selector'
     *  SignalConversion generated from: '<S10>/XeOHSR_b_LaunchSpdCntrl_Enbl'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_7

    (void)Rte_Read_VeMSPR_e_P2Spd_Prfl_Enbl_Value(&tmpRead_r);

    /* VariantMerge generated from: '<S10>/XeOHSR_b_LaunchSpdCntrl_Enbl' incorporates:
     *  Constant: '<S481>/Constant'
     *  Constant: '<S482>/Calib'
     *  Constant: '<S483>/Calib'
     *  Inport: '<Root>/VeMSPR_e_P2Spd_Prfl_Enbl'
     *  SignalConversion generated from: '<S1>/VeHSER_e_RngEqnSel'
     */
    rtb_Comparison10_f = (((((uint32)tmpRead_r) == CeMSPR_e_P2Spd_Prfl_Enbl) &&
                           (HaOHSR_b_EnblLaunchSpdCntrl
                            [(rtb_TmpSignalConversionAtVeHSER_e_RngE_h)])) ||
                          (KeOHSR_b_OvrrdLaunchSpdCntrl));

#else

    /* VariantMerge generated from: '<S10>/XeOHSR_b_LaunchSpdCntrl_Enbl' incorporates:
     *  Constant: '<S10>/FALSE Constant'
     *  SignalConversion generated from: '<S10>/XeOHSR_b_LaunchSpdCntrl_Enbl'
     */
    rtb_Comparison10_f = false;

#endif

    /* End of RelationalOperator: '<S317>/Comparison4' */

    /* If: '<S10>/If' incorporates:
     *  Logic: '<S311>/Logical2'
     */
    if (rtb_Logical16)
    {
        /* Outputs for IfAction SubSystem: '<S10>/Neutral' incorporates:
         *  ActionPort: '<S318>/Action Port'
         */
        /* SignalConversion generated from: '<S318>/Out1' incorporates:
         *  Constant: '<S484>/Constant'
         *  Merge: '<S10>/Merge'
         *  UnitDelay: '<S10>/Unit Delay'
         */
        OHSR_ac_DW.UnitDelay_DSTATE_hs = CeOHSR_e_NeutralState;

        /* End of Outputs for SubSystem: '<S10>/Neutral' */
    }
    else if (rtb_Logical_h ||
             (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_i))
    {
        /* Outputs for IfAction SubSystem: '<S10>/Creep' incorporates:
         *  ActionPort: '<S310>/Action Port'
         */
        /* SignalConversion generated from: '<S310>/Out1' incorporates:
         *  Constant: '<S322>/Constant'
         *  Merge: '<S10>/Merge'
         *  UnitDelay: '<S10>/Unit Delay'
         */
        OHSR_ac_DW.UnitDelay_DSTATE_hs = CeOHSR_e_CreepState;

        /* End of Outputs for SubSystem: '<S10>/Creep' */
    }
    else if (rtb_Comparison10_f)
    {
        /* Outputs for IfAction SubSystem: '<S10>/LaunchSpdCntrl' incorporates:
         *  ActionPort: '<S316>/Action Port'
         */
        /* SignalConversion generated from: '<S316>/Out1' incorporates:
         *  Constant: '<S480>/Constant'
         *  Merge: '<S10>/Merge'
         *  UnitDelay: '<S10>/Unit Delay'
         */
        OHSR_ac_DW.UnitDelay_DSTATE_hs = CeOHSR_e_LaunchSpdCntrl;

        /* End of Outputs for SubSystem: '<S10>/LaunchSpdCntrl' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S10>/Launch' incorporates:
         *  ActionPort: '<S315>/Action Port'
         */
        /* SignalConversion generated from: '<S315>/Out1' incorporates:
         *  Constant: '<S479>/Constant'
         *  Merge: '<S10>/Merge'
         *  UnitDelay: '<S10>/Unit Delay'
         */
        OHSR_ac_DW.UnitDelay_DSTATE_hs = CeOHSR_e_LaunchState;

        /* End of Outputs for SubSystem: '<S10>/Launch' */
    }

    /* End of If: '<S10>/If' */

    /* SignalConversion generated from: '<S10>/XeOHSR_b_ILEstate_Enbl' incorporates:
     *  Constant: '<S320>/Constant'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_5

    /* VariantMerge generated from: '<S10>/XeOHSR_b_ILEstate_Enbl' incorporates:
     *  Merge: '<S10>/Merge'
     *  UnitDelay: '<S10>/Unit Delay'
     */
    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_ia =
        OHSR_ac_DW.UnitDelay_DSTATE_hs;

#else

    OHSR_ac_B.Constant = CeOHSR_e_NeutralState;

    /* VariantMerge generated from: '<S10>/XeOHSR_b_ILEstate_Enbl' incorporates:
     *  Constant: '<S320>/Constant'
     */
    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_ia = OHSR_ac_B.Constant;

#endif

    /* SignalConversion generated from: '<S7>/XeOHSR_b_EngCalc_Enbl1' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    /* VariantMerge generated from: '<S4>/XeOHSR_b_IdleSpdBSG_Enbl' */
    rtb_Sum2_oy = rtb_LeOHSC_n_IdleSpeedSetPoint;

#else

    /* VariantMerge generated from: '<S4>/XeOHSR_b_IdleSpdBSG_Enbl' incorporates:
     *  Inport: '<S4>/TgtIdleSpd'
     *  SignalConversion generated from: '<S7>/XeOHSR_b_EngCalc_Enbl1'
     */
    rtb_Sum2_oy = rtb_TmpSignalConversionAtVeOSMR_n_Tran_f;

#endif

    /* End of SignalConversion generated from: '<S7>/XeOHSR_b_EngCalc_Enbl1' */

    /* SignalConversion generated from: '<S1>/IS_SetPoint' incorporates:
     *  Gain: '<S20>/Gain'
     *  Outport: '<Root>/VeOHSR_n_IdleSpeedSetPoint'
     */
    (void)Rte_Write_VeOHSR_n_IdleSpeedSetPoint_Value(rtb_Sum2_oy);

    /* SignalConversion generated from: '<S4>/XeOHSR_b_IdleSpdBSG_Enbl' incorporates:
     *  Inport: '<Root>/VeABCR_P_HV_AccPwr'
     *  Inport: '<Root>/VeBACR_P_BattPwrShift_Stgc'
     *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
     *  Inport: '<Root>/VeHPMR_e_InvrtrASwitchCmd'
     *  Inport: '<Root>/VeINVR_T_MtrA_InvrtrTemp'
     *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
     *  Inport: '<Root>/VeSRAR_b_HybFeedback_ECM'
     *  Inport: '<Root>/VeTHMR_n_EngSpdInc_Req'
     *  Inport: '<Root>/VeTINR_r_TCMTransTrqRatio'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_9

    /* Outputs for Atomic SubSystem: '<S4>/OHSC_Idle_Speed_Request' */
    (void)Rte_Read_VeABCR_P_HV_AccPwr_Value(&tmpRead_3);
    (void)Rte_Read_VeINVR_T_MtrA_InvrtrTemp_Value(&rtb_Vector);
    (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value(&tmpRead_2);
    (void)Rte_Read_VeBACR_P_BattPwrShift_Stgc_Value(&tmpRead_1);

    /* Logic: '<S8>/Logical1' incorporates:
     *  Constant: '<S294>/Constant'
     *  Constant: '<S295>/Constant'
     *  Inport: '<Root>/VeABCR_P_HV_AccPwr'
     *  Inport: '<Root>/VeBACR_P_BattPwrShift_Stgc'
     *  Inport: '<Root>/VeINVR_T_MtrA_InvrtrTemp'
     *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
     *  RelationalOperator: '<S8>/Comparison2'
     *  RelationalOperator: '<S8>/Comparison4'
     */
    rtb_Logical_h = ((((uint32)rtb_TmpSignalConversionAtVeOSMR_e_Stea_i) ==
                      CeOSMR_e_TransSt_Park) || (((uint32)
                       rtb_TmpSignalConversionAtVeOSMR_e_Stea_i) ==
                      CeOSMR_e_TransSt_Neutral));

    /* Outputs for Atomic SubSystem: '<S8>/EdgeRising' */
    /* Logic: '<S280>/OR1' incorporates:
     *  UnitDelay: '<S280>/Unit Delay'
     */
    rtb_Logical16 = !OHSR_ac_DW.UnitDelay_DSTATE_hm;

    /* Update for UnitDelay: '<S280>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_hm = rtb_Logical_h;

    /* End of Outputs for SubSystem: '<S8>/EdgeRising' */

    /* Sum: '<S8>/Sum2' incorporates:
     *  Constant: '<S283>/Calib'
     */
    rtb_Sum2_es = (tmpRead_1 + tmpRead_3) + KeOHSR_P_DCLoadOffset;

    /* Lookup_n-D: '<S289>/Vector' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_InvrtrTemp'
     *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
     */
    rtb_Vector = look2_iflf_binlca_16a(tmpRead_2, rtb_Vector, ((const float32 *)
        &(KxOHSR_M_MtrATrqMin_InvrTemp[0])), ((const float32 *)
        &(KyOHSR_M_MtrATrqMin_InvrTemp[0])), ((const float32 *)
        &(KtOHSR_M_MtrATrqMin_InvrTemp[0])), OHSR_ac_ConstP.Vector_maxIndex_h,
        13U);

    /* Outputs for Atomic SubSystem: '<S8>/Protected Division' */
    /* Switch: '<S293>/Switch1' incorporates:
     *  Constant: '<S293>/Constant Value'
     *  Constant: '<S293>/Constant Value1'
     *  Constant: '<S293>/Constant Value2'
     *  Constant: '<S293>/Constant Value3'
     *  Logic: '<S293>/AND'
     *  RelationalOperator: '<S293>/Greater Than or Equal '
     *  RelationalOperator: '<S293>/Greater Than or Equal 1'
     *  RelationalOperator: '<S293>/Not Equal'
     *  RelationalOperator: '<S293>/Not Equal1'
     *  Switch: '<S293>/Switch2'
     *  Switch: '<S293>/Switch3'
     */
    if ((rtb_Sum2_es != 0.0F) && (rtb_Vector != 0.0F))
    {
        /* Switch: '<S293>/Switch1' incorporates:
         *  Product: '<S293>/Division'
         */
        rtb_Sum2_es /= rtb_Vector;
    }
    else if (rtb_Sum2_es > 0.0F)
    {
        /* Switch: '<S293>/Switch2' incorporates:
         *  Constant: '<S293>/MAXFLOAT'
         *  Switch: '<S293>/Switch1'
         */
        rtb_Sum2_es = 3.402823466E+38F;
    }
    else if (rtb_Sum2_es < 0.0F)
    {
        /* Switch: '<S293>/Switch3' incorporates:
         *  Constant: '<S293>/MINFLOAT'
         *  Switch: '<S293>/Switch1'
         *  Switch: '<S293>/Switch2'
         */
        rtb_Sum2_es = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S293>/Switch1' incorporates:
         *  Constant: '<S293>/Constant Value4'
         *  Switch: '<S293>/Switch2'
         *  Switch: '<S293>/Switch3'
         */
        rtb_Sum2_es = 0.0F;
    }

    /* End of Switch: '<S293>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/Protected Division' */
    (void)Rte_Read_VeENGR_T_EngCoolantTemp_Value(&tmpRead_0);
    (void)Rte_Read_VeTINR_r_TCMTransTrqRatio_Value(&tmpRead);

    /* Outputs for Atomic SubSystem: '<S8>/GradientLimiter' */
    /* Sum: '<S281>/Sum2' incorporates:
     *  Constant: '<S284>/Calib'
     *  Constant: '<S288>/Calib'
     *  Constant: '<S8>/kW_to_NmRPM'
     *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
     *  Inport: '<Root>/VeTINR_r_TCMTransTrqRatio'
     *  MinMax: '<S8>/MinMax2'
     *  Product: '<S8>/Multiplication1'
     *  Product: '<S8>/Multiplication2'
     *  UnitDelay: '<S281>/Unit Delay'
     */
    rtb_Sum3_h = fminf((rtb_Sum2_es * 9549.3F) * ((float32)
                        Rte_Prm_KeTISR_r_M2_NiFromNa_NCnDep_KeTISR_r_M2_NiFromNa_NCnDep
                        ()), KeOHSR_n_MaxIdleSpd) -
        OHSR_ac_DW.UnitDelay_DSTATE_ap;

    /* Outputs for Atomic SubSystem: '<S281>/Limiter' */
    /* Switch: '<S298>/Switch1' incorporates:
     *  Constant: '<S286>/Calib'
     *  RelationalOperator: '<S298>/Relational Operator'
     */
    if (KeOHSR_n_Pbattbsd_IdleSpdLU < rtb_Sum3_h)
    {
        /* Switch: '<S8>/Switch' */
        rtb_Sum3_h = KeOHSR_n_Pbattbsd_IdleSpdLU;
    }

    /* End of Switch: '<S298>/Switch1' */

    /* Switch: '<S298>/Switch' incorporates:
     *  Constant: '<S285>/Calib'
     *  RelationalOperator: '<S298>/Relational Operator1'
     */
    if (rtb_Sum3_h <= KeOHSR_n_Pbattbsd_IdleSpdLD)
    {
        rtb_Sum3_h = KeOHSR_n_Pbattbsd_IdleSpdLD;
    }

    /* End of Switch: '<S298>/Switch' */
    /* End of Outputs for SubSystem: '<S281>/Limiter' */

    /* Sum: '<S281>/Sum3' incorporates:
     *  UnitDelay: '<S281>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_ap += rtb_Sum3_h;

    /* End of Outputs for SubSystem: '<S8>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S8>/TimerRetriggerResetEnabled' */
    /* Outputs for Atomic SubSystem: '<S8>/EdgeRising' */
    /* Switch: '<S297>/Switch1' incorporates:
     *  Constant: '<S282>/Calib'
     *  Constant: '<S287>/Calib'
     *  Constant: '<S297>/Constant Value4'
     *  Logic: '<S280>/AND'
     *  MinMax: '<S297>/Maximum'
     *  Sum: '<S297>/Subtraction'
     *  UnitDelay: '<S297>/Unit Delay'
     */
    if (rtb_Logical_h && rtb_Logical16)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_ov = KeOHSR_t_PdlBasedIdleSpdDelay;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_ov = fmaxf(OHSR_ac_DW.UnitDelay_DSTATE_ov -
            HeOHSR_t_Idle_dT, 0.0F);
    }

    /* End of Switch: '<S297>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S8>/TimerRetriggerResetEnabled' */
    (void)Rte_Read_VeSRAR_b_HybFeedback_ECM_Value(&rtb_Logical4_g);
    (void)Rte_Read_VeHPMR_e_InvrtrASwitchCmd_Value(&tmpRead_5);

    /* Outputs for Atomic SubSystem: '<S8>/OPTL_AltMode_MinSpd' */
    /* Logic: '<S292>/Logical4' incorporates:
     *  Constant: '<S299>/Constant'
     *  Constant: '<S302>/Calib'
     *  Inport: '<Root>/VeHPMR_e_InvrtrASwitchCmd'
     *  Inport: '<Root>/VeSRAR_b_HybFeedback_ECM'
     *  Logic: '<S292>/Logical5'
     *  RelationalOperator: '<S292>/Comparison3'
     */
    rtb_Logical4_g = (((CeHPMR_e_Enable_VoltCntrl == ((uint32)tmpRead_5)) ||
                       (!rtb_Logical4_g)) ||
                      Rte_Prm_HeOPTR_b_AltMd_Ovrd_HeOPTR_b_AltMd_Ovrd());

    /* Outputs for Atomic SubSystem: '<S292>/EdgeRising1' */
    /* Logic: '<S300>/OR1' incorporates:
     *  UnitDelay: '<S300>/Unit Delay'
     */
    rtb_Logical16 = !OHSR_ac_DW.UnitDelay_DSTATE_e5;

    /* Update for UnitDelay: '<S300>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_e5 = rtb_Logical4_g;

    /* Outputs for Atomic SubSystem: '<S292>/GradientLimiter1' */
    /* Switch: '<S301>/Switch1' incorporates:
     *  Logic: '<S300>/AND'
     *  Sum: '<S301>/Sum3'
     *  Switch: '<S292>/Switch1'
     *  UnitDelay: '<S301>/Unit Delay'
     *  UnitDelay: '<S8>/Unit Delay'
     */
    if (rtb_Logical4_g && rtb_Logical16)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_mj = OHSR_ac_DW.UnitDelay_DSTATE_fq;
    }
    else
    {
        if (rtb_Logical4_g)
        {
            /* Switch: '<S292>/Switch1' incorporates:
             *  Constant: '<S305>/Calib'
             */
            rtb_Sum2_es =
                Rte_Prm_KeOPTR_n_AltMd_MinIdleSpd_KeOPTR_n_AltMd_MinIdleSpd();
        }
        else
        {
            /* Switch: '<S292>/Switch1' incorporates:
             *  Constant: '<S292>/Constant Value5'
             */
            rtb_Sum2_es = 0.0F;
        }

        /* Sum: '<S301>/Sum2' incorporates:
         *  UnitDelay: '<S301>/Unit Delay'
         */
        rtb_Sum2_es -= OHSR_ac_DW.UnitDelay_DSTATE_mj;

        /* Outputs for Atomic SubSystem: '<S301>/Limiter' */
        /* Switch: '<S306>/Switch1' incorporates:
         *  Constant: '<S304>/Calib'
         *  RelationalOperator: '<S306>/Relational Operator'
         */
        if (((float32)
                Rte_Prm_KeOPTR_n_AltMd_IdleSpd_LU_KeOPTR_n_AltMd_IdleSpd_LU()) <
            rtb_Sum2_es)
        {
            /* Switch: '<S306>/Switch1' */
            rtb_Sum2_es =
                Rte_Prm_KeOPTR_n_AltMd_IdleSpd_LU_KeOPTR_n_AltMd_IdleSpd_LU();
        }

        /* End of Switch: '<S306>/Switch1' */

        /* Switch: '<S306>/Switch' incorporates:
         *  Constant: '<S303>/Calib'
         *  RelationalOperator: '<S306>/Relational Operator1'
         */
        if (rtb_Sum2_es <= ((float32)
                            Rte_Prm_KeOPTR_n_AltMd_IdleSpd_LD_KeOPTR_n_AltMd_IdleSpd_LD
                            ()))
        {
            rtb_Sum2_es =
                Rte_Prm_KeOPTR_n_AltMd_IdleSpd_LD_KeOPTR_n_AltMd_IdleSpd_LD();
        }

        /* End of Switch: '<S306>/Switch' */
        /* End of Outputs for SubSystem: '<S301>/Limiter' */
        OHSR_ac_DW.UnitDelay_DSTATE_mj += rtb_Sum2_es;
    }

    /* End of Switch: '<S301>/Switch1' */
    /* End of Outputs for SubSystem: '<S292>/GradientLimiter1' */
    /* End of Outputs for SubSystem: '<S292>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S8>/OPTL_AltMode_MinSpd' */
    (void)Rte_Read_VeTHMR_n_EngSpdInc_Req_Value(&tmpRead_4);

    /* Gain: '<S296>/Gain' incorporates:
     *  Inport: '<Root>/VeTHMR_n_EngSpdInc_Req'
     *  UnitDelay: '<S301>/Unit Delay'
     */
    VeOHSC_n_AltMd_IdleSpd = OHSR_ac_DW.UnitDelay_DSTATE_mj;

    /* Outputs for Atomic SubSystem: '<S8>/TimerRetriggerResetEnabled' */
    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S297>/Constant Value2'
     *  Constant: '<S8>/Constant Value'
     *  Logic: '<S8>/Logical2'
     *  Logic: '<S8>/Logical3'
     *  Lookup_n-D: '<S291>/Vector'
     *  RelationalOperator: '<S297>/Greater  Than1'
     *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
     *  UnitDelay: '<S297>/Unit Delay'
     */
    if (rtb_Logical_h && (OHSR_ac_DW.UnitDelay_DSTATE_ov <= 0.0F))
    {
        rtb_TmpSignalConversionAtVeAPSR_Pct_Ac_c = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeAPSR_Pct_Ac_c, ((const float32 *)
              &(KxOHSR_n_EngIdleSpd4PDL[0])), ((const float32 *)
              &(KtOHSR_n_EngIdleSpd4PDL[0])), 6U);
    }
    else
    {
        rtb_TmpSignalConversionAtVeAPSR_Pct_Ac_c = 0.0F;
    }

    /* End of Switch: '<S8>/Switch' */
    /* End of Outputs for SubSystem: '<S8>/TimerRetriggerResetEnabled' */

    /* MinMax: '<S8>/MinMax1' incorporates:
     *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
     *  Inport: '<Root>/VeTINR_r_TCMTransTrqRatio'
     *  Lookup_n-D: '<S290>/Vector'
     *  UnitDelay: '<S281>/Unit Delay'
     *  UnitDelay: '<S8>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_fq = fmaxf(fmaxf(fmaxf(fmaxf
        (rtb_TmpSignalConversionAtVeAPSR_Pct_Ac_c, look2_iflf_binlca_16a
         (tmpRead_0, tmpRead, ((const float32 *)&(KxOHSR_n_EngIdleSpd4CoolTmp[0])),
          ((const float32 *)&(KyOHSR_n_EngIdleSpd4CoolTmp[0])), ((const float32 *)
        &(KtOHSR_n_EngIdleSpd4CoolTmp[0])), OHSR_ac_ConstP.Vector_maxIndex_h4,
          8U)), OHSR_ac_DW.UnitDelay_DSTATE_ap), tmpRead_4),
        VeOHSC_n_AltMd_IdleSpd);

    /* VariantMerge generated from: '<S4>/XeOHSR_b_IdleSpdBSG_Enbl' incorporates:
     *  UnitDelay: '<S8>/Unit Delay'
     */
    rtb_Sum2_oy = OHSR_ac_DW.UnitDelay_DSTATE_fq;

    /* End of Outputs for SubSystem: '<S4>/OHSC_Idle_Speed_Request' */
#else

    /* VariantMerge generated from: '<S4>/XeOHSR_b_IdleSpdBSG_Enbl' incorporates:
     *  Inport: '<S4>/TgtIdleSpd'
     *  SignalConversion generated from: '<S4>/XeOHSR_b_IdleSpdBSG_Enbl'
     */
    rtb_Sum2_oy = rtb_TmpSignalConversionAtVeOSMR_n_Tran_f;

#endif

    /* End of SignalConversion generated from: '<S4>/XeOHSR_b_IdleSpdBSG_Enbl' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    /* Update for Atomic SubSystem: '<S7>/IS_Blend_Filt' */
    /* Update for Atomic SubSystem: '<S7>/IdleSpdArbitration' */
    /* Update for Atomic SubSystem: '<S19>/Turbine_Speed' */
    /* Update for Atomic SubSystem: '<S150>/SIP' */
    /* Update for UnitDelay: '<S230>/Unit Delay' incorporates:
     *  SignalConversion generated from: '<S1>/VeOSMR_e_TargetGear'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_gz5 = rtb_TmpSignalConversionAtVeOSMR_e_Targ_a;

    /* Update for UnitDelay: '<S230>/Unit Delay1' incorporates:
     *  VariantMerge generated from: '<S10>/XeOHSR_b_ILEstate_Enbl'
     */
    OHSR_ac_DW.UnitDelay1_DSTATE_nf =
        OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_ia;

    /* End of Update for SubSystem: '<S150>/SIP' */
    /* End of Update for SubSystem: '<S19>/Turbine_Speed' */

    /* Update for UnitDelay: '<S18>/Unit Delay3' incorporates:
     *  VariantMerge generated from: '<S10>/XeOHSR_b_ILEstate_Enbl'
     */
    OHSR_ac_DW.UnitDelay3_DSTATE_ec =
        OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_ia;

    /* Update for UnitDelay: '<S18>/Unit Delay4' */
    OHSR_ac_DW.UnitDelay4_DSTATE_j = rtb_TmpSignalConversionAtShftEfftRdctn_R;

    /* Update for UnitDelay: '<S18>/Unit Delay5' */
    OHSR_ac_DW.UnitDelay5_DSTATE_j = rtb_TmpSignalConversionAtShftEfft_N4H_Re;

    /* Update for UnitDelay: '<S18>/Unit Delay1' incorporates:
     *  UnitDelay: '<S18>/Unit Delay3'
     */
    OHSR_ac_DW.UnitDelay1_DSTATE_gq = rtb_UnitDelay3_ns;

    /* End of Update for SubSystem: '<S7>/IdleSpdArbitration' */
    /* End of Update for SubSystem: '<S7>/IS_Blend_Filt' */
#endif

    /* Outport: '<Root>/VeOHSR_n_IdleSpeed_Target' incorporates:
     *  Gain: '<S11>/Gain'
     *  SignalConversion generated from: '<S1>/IdleSpeed_Target'
     */
    (void)Rte_Write_VeOHSR_n_IdleSpeed_Target_Value(rtb_Sum2_oy);

    /* Outport: '<Root>/VeOHSR_b_P2IdleZeroSpdEnbl' incorporates:
     *  Gain: '<S22>/Gain'
     *  SignalConversion generated from: '<S1>/P2IdleZero'
     */
    (void)Rte_Write_VeOHSR_b_P2IdleZeroSpdEnbl_Value(rtb_Logical_i);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeOHSR_b_SuperCreepActive' incorporates:
     *  SignalConversion generated from: '<S1>/SC_active'
     */
    (void)Rte_Write_VeOHSR_b_SuperCreepActive_Value
        (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_i);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OHSC_Creep_Launch_Determination'
     */
    /* Outport: '<Root>/VeOHSR_n_RollingIdle_NiOffset' incorporates:
     *  Constant: '<S9>/Constant Value'
     *  Gain: '<S308>/Gain'
     *  SignalConversion generated from: '<S1>/VeOHSC_n_RollingIdle_NiOffset'
     */
    (void)Rte_Write_VeOHSR_n_RollingIdle_NiOffset_Value(0.0F);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeOHSR_e_ILEState' incorporates:
     *  SignalConversion generated from: '<S1>/VeOHSR_e_ILEState'
     *  VariantMerge generated from: '<S10>/XeOHSR_b_ILEstate_Enbl'
     */
    (void)Rte_Write_VeOHSR_e_ILEState_Value
        (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_ia);

    /* Outport: '<Root>/VeOHSR_n_IdleSpdBlended' incorporates:
     *  SignalConversion generated from: '<S1>/VeOHSR_n_IdleSpdBlended'
     */
    (void)Rte_Write_VeOHSR_n_IdleSpdBlended_Value
        (rtb_TmpSignalConversionAtVeMSPR_n_P2Sp_o);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OHSI_InputProcessing'
     */
    /* Merge: '<Root>/EnblTCMReqL_IRV_Merge' incorporates:
     *  Logic: '<S5>/Logical2'
     *  SignalConversion generated from: '<S1>/EnblTCMReqL_write'
     */
    Rte_IrvWrite_OHSR_MedTEB_EnblTCMReqL_write_IRV(tmp);

    /* Merge: '<Root>/NTurb_ActGr_IRV_Merge' incorporates:
     *  Selector: '<S5>/Selector3'
     *  SignalConversion generated from: '<S1>/NTurb_ActGr_write'
     */
    Rte_IrvWrite_OHSR_MedTEB_NTurb_ActGr_write_IRV
        (rtb_TmpSignalConversionAtVaOSMR_n_NTur_h[rtb_Saturation]);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/NTurb_Virt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/NTurb_Virt_write'
     * */
    Rte_IrvWrite_OHSR_MedTEB_NTurb_Virt_write_IRV(VeOHSI_n_NTurb_V);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OHSI_InputProcessing'
     */
    /* Gain: '<S530>/Gain' */
    for (rtb_Subtraction5_e_tmp = 0; rtb_Subtraction5_e_tmp < 9;
            rtb_Subtraction5_e_tmp++)
    {
        tmp_0[rtb_Subtraction5_e_tmp] = tmpRead_7[rtb_Subtraction5_e_tmp];
        tmp_0[rtb_Subtraction5_e_tmp + 9] = tmpRead_8[rtb_Subtraction5_e_tmp];
        tmp_0[rtb_Subtraction5_e_tmp + 18] = tmpRead_9[rtb_Subtraction5_e_tmp];
        tmp_0[rtb_Subtraction5_e_tmp + 27] = tmpRead_a[rtb_Subtraction5_e_tmp];
        tmp_0[rtb_Subtraction5_e_tmp + 36] = tmpRead_b[rtb_Subtraction5_e_tmp];
        tmp_0[rtb_Subtraction5_e_tmp + 45] = tmpRead_c[rtb_Subtraction5_e_tmp];
    }

    /* End of Gain: '<S530>/Gain' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/Nti_Max_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/Nti_Max_write'
     */
    Rte_IrvWrite_OHSR_MedTEB_Nti_Max_write_IRV(tmp_0);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OHSI_InputProcessing'
     */
    /* Gain: '<S531>/Gain' */
    for (rtb_Subtraction5_e_tmp = 0; rtb_Subtraction5_e_tmp < 9;
            rtb_Subtraction5_e_tmp++)
    {
        tmp_0[rtb_Subtraction5_e_tmp] = tmpRead_d[rtb_Subtraction5_e_tmp];
        tmp_0[rtb_Subtraction5_e_tmp + 9] = tmpRead_e[rtb_Subtraction5_e_tmp];
        tmp_0[rtb_Subtraction5_e_tmp + 18] = tmpRead_f[rtb_Subtraction5_e_tmp];
        tmp_0[rtb_Subtraction5_e_tmp + 27] = tmpRead_g[rtb_Subtraction5_e_tmp];
        tmp_0[rtb_Subtraction5_e_tmp + 36] = tmpRead_h[rtb_Subtraction5_e_tmp];
        tmp_0[rtb_Subtraction5_e_tmp + 45] = tmpRead_i[rtb_Subtraction5_e_tmp];
    }

    /* End of Gain: '<S531>/Gain' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/Nti_Min_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/Nti_Min_write'
     */
    Rte_IrvWrite_OHSR_MedTEB_Nti_Min_write_IRV(tmp_0);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OHSI_InputProcessing'
     */
    /* Merge: '<Root>/PS_IRV_Merge' incorporates:
     *  Constant: '<S526>/Calib'
     *  DataTypeConversion: '<S5>/Data Type Conversion2'
     *  Inport: '<Root>/VeHSER_e_RngSt'
     *  Selector: '<S5>/Selector6'
     *  SignalConversion generated from: '<S1>/PS_write'
     */
    Rte_IrvWrite_OHSR_MedTEB_PS_write_IRV(HaOHSR_b_ParallelStates[(sint16)
        tmpRead_j]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OHSC_Creep_Launch_Determination'
     */
    /* Merge: '<Root>/RegenShiftMapRqst_IRV_Merge' incorporates:
     *  Constant: '<S9>/FALSE Constant'
     *  Gain: '<S309>/Gain'
     *  SignalConversion generated from: '<S1>/RegenShiftMapRqst_write'
     */
    Rte_IrvWrite_OHSR_MedTEB_RegenShiftMapRqst_write_IRV(false);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OHSI_InputProcessing'
     */
    /* Merge: '<Root>/S2H_IRV_Merge' incorporates:
     *  Constant: '<S527>/Calib'
     *  DataTypeConversion: '<S5>/Data Type Conversion2'
     *  Inport: '<Root>/VeHSER_e_RngSt'
     *  Selector: '<S5>/Selector5'
     *  SignalConversion generated from: '<S1>/S2H_write'
     */
    Rte_IrvWrite_OHSR_MedTEB_S2H_write_IRV(HaOHSR_b_Series2Hybrid[(sint16)
        tmpRead_j]);

    /* Merge: '<Root>/ShiftToN_IRV_Merge' incorporates:
     *  Constant: '<S525>/Calib'
     *  DataTypeConversion: '<S5>/Data Type Conversion2'
     *  Inport: '<Root>/VeHSER_e_RngSt'
     *  Selector: '<S5>/Selector1'
     *  SignalConversion generated from: '<S1>/ShiftToN_write'
     */
    Rte_IrvWrite_OHSR_MedTEB_ShiftToN_write_IRV(HaOHSR_b_InhibitShftTypeStdySt
        [(sint16)tmpRead_j]);

    /* DataTypeConversion: '<S522>/DataTypeConversion' incorporates:
     *  Constant: '<S5>/Constant Value'
     */
    for (rtb_Subtraction5_e_tmp = 0; rtb_Subtraction5_e_tmp < 4;
            rtb_Subtraction5_e_tmp++)
    {
        tmp_1[rtb_Subtraction5_e_tmp] = 9U;
    }

    /* End of DataTypeConversion: '<S522>/DataTypeConversion' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/StgcMaxGear_NVH_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/StgcMaxGear_NVH_write'
     */
    Rte_IrvWrite_OHSR_MedTEB_StgcMaxGear_NVH_write_IRV(tmp_1);

    /* Merge: '<Root>/TransMin_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/TransMin_write'
     * */
    Rte_IrvWrite_OHSR_MedTEB_TransMin_write_IRV
        (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_k);

    /* Merge: '<Root>/VeOHSR_e_ILEState_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/VeOHSR_e_ILEState_write'
     *  VariantMerge generated from: '<S10>/XeOHSR_b_ILEstate_Enbl'
     * */
    Rte_IrvWrite_OHSR_MedTEB_VeOHSR_e_ILEState_write_IRV
        (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_ia);

    /* Merge: '<Root>/VeOHSR_n_IdleSpdBlended_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/VeOHSR_n_IdleSpdBlended_write'
     * */
    Rte_IrvWrite_OHSR_MedTEB_VeOHSR_n_IdleSpdBlended_write_IRV
        (rtb_TmpSignalConversionAtVeMSPR_n_P2Sp_o);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OHSI_InputProcessing'
     */
    /* Merge: '<Root>/dSOC_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/dSOC_write'
     *  Sum: '<S5>/Sum1'
     */
    Rte_IrvWrite_OHSR_MedTEB_dSOC_write_IRV
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a - tmpRead_y);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model step function for TID2 */
FUNC(void, OHSR_CODE) OHSR_MedTED(void) /* Explicit Task: MedTED */
{
    /* local block i/o variables */
    float32 rtb_TmpSignalConversionAtVeTISR_n_InputS;
    uint16 bitmask;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    uint32 bpIndices[2];

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    float32 fractions[2];

#endif

    TeESSR_e_EngStartStopSt tmpRead_1;
    TeSCOR_e_OptRng_SG tmpRead;
    TeSCOR_e_OptRng_SG tmpRead_0;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    TeDTRR_e_SumFWIDFst tmpRead_2;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    TeDTRR_e_SumFWIDFst tmpRead_3;

#endif

    uint16 tmpRead_4;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    TeHSER_e_RngSt tmpRead_5;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    TeSCOR_e_OptGear_SG tmpRead_6;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    TePLTR_e_ShiftIndSt tmpRead_7;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    TePLTR_e_VehCfgSt tmpRead_8;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    TeTMDR_e_LockLowSt tmpRead_9;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    uint8 tmpRead_a;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    TeWTAR_e_PedalTrqArb tmpRead_b;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    TeSCOR_e_OptRng_SG tmpRead_c;

#endif

    uint16 tmpRead_d[6];
    uint16 tmpRead_f[6];
    boolean tmpRead_e;
    boolean tmpRead_g;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    boolean tmpRead_h;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    boolean tmpRead_i;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    TeENGR_e_StsMiL_ECM tmpRead_j;

#endif

    float32 tmpRead_k[9];
    float32 tmpRead_l[9];

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    uint16 tmpRead_m[6];

#endif

    float32 rtb_TmpSignalConversionAtVeOHSR_n_IdleSp;
    float32 tmpRead_o;
    sint8 tmpRead_n;
    boolean rtb_TmpSignalConversionAtEnblTCMReqL_Rea;
    boolean rtb_TmpSignalConversionAtPS_ReadOutport1;
    boolean rtb_TmpSignalConversionAtS2H_ReadOutport;
    boolean rtb_TmpSignalConversionAtShiftToN_ReadOu;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

    float32 rtb_TmpSignalConversionAtdSOC_ReadOutpor;

#endif

    float32 rtb_TmpSignalConversionAtVaOSMR_n_NTurb_[9];
    float32 rtb_Selector1_h2;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

    float32 rtb_TmpSignalConversionAtVeOITR_P_OptCal;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

    float32 rtb_TmpSignalConversionAtVeBACR_P_BattPw;

#endif

    float32 rtb_VariantMerge_For_Variant_Source_XeOH[3];
    float32 rtb_VariantMerge_For_Variant_Source_Xe_k[3];
    float32 rtb_Abs1;
    float32 rtb_Merge3;
    float32 rtb_Merge4;
    float32 rtb_Multiplication_f;
    float32 rtb_TmpSignalConversionAtVeOSMR_n_MtrBSp;
    float32 rtb_TmpSignalConversionAtVeOSMR_n_MtrB_h;
    sint16 rtb_MinMax1_fj;
    sint16 rtb_MinMax2_hq;
    sint16 rtb_MinMax_i;
    sint16 rtb_Saturation1;
    uint16 rtb_TmpSignalConversionAtVaOSMR_d_FinalA[6];
    uint8 rtb_DataTypeConversion1_l;
    boolean rtb_GreaterThan1[3];
    boolean rtb_Switch3_js;
    boolean rtb_TmpSignalConversionAtVeOSMR_b_PnLimi;
    boolean rtb_TmpSignalConversionAtVeSTRR_b_EngOff;

#if !Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_17 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_21 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_23

    float32 rtb_Switch;

#endif

#if !Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_17 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_21 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_23

    float32 rtb_Switch_ly;

#endif

    float32 rtb_Switch1_do[2];
    float32 rtb_Merge1;
    float32 rtb_Switch5_fw;
    sint8 s1205_iter;
    boolean rtb_AND_nh[3];
    boolean loopCond;
    boolean rtb_AND_ck;
    boolean rtb_AND_er;
    boolean rtb_AND_fo;
    boolean rtb_Selector1_dv;
    boolean rtb_Switch_it;
    boolean rtb_TmpSignalConversionAtVeESPR_b_TCMEng;
    boolean rtb_TmpSignalConversionAtVeOSMR_b_EngRev;
    boolean rtb_TmpSignalConversionAtVeSCOR_b_DsrdRn;
    boolean rtb_UnitDelay_lad;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    boolean rtb_Logical2_p;

#endif

    float32 rtb_TmpSignalConversionAtVeAPSR_Pct_Acce;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    boolean rtb_Logical3_in;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    float32 rtb_TmpSignalConversionAtVeATRR_M_ToReqP;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    float32 rtb_TmpSignalConversionAtVeOSMR_M_OutTor;

#endif

    boolean rtb_Logical12_n;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    boolean rtb_Logical15_m;

#endif

    float32 rtb_TmpSignalConversionAtVeESPR_n_EngSpd;

#if !Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_17 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_21 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_23

    float32 rtb_TmpSignalConversionAtVeOSMR_n_TransM;

#endif

    float32 rtb_Sum1_li[3];
    float32 rtb_Switch_mp[3];
    float32 rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP;
    float32 rtb_UnitDelay_lw;
    boolean rtb_TmpSignalConversionAtVeSCOR_b_ReqFCO;
    boolean rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_15

    float32 rtb_TmpSignalConversionAtVeOSMR_n_NiMax_;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

    float32 rtb_TmpSignalConversionAtVeOITR_M_OptInp;

#endif

    float32 rtb_TmpSignalConversionAtSelector6Inport[28];
    float32 rtb_TmpSignalConversionAtSelector2Inport[10];
    float32 rtb_TmpSignalConversionAtSelector3Inport[6];
    float32 rtb_Switch1_a4;
    float32 rtb_Switch1_an;
    float32 rtb_Switch1_cj;
    float32 rtb_Switch1_d2;
    float32 rtb_Switch1_lb;
    float32 rtb_Switch7;
    float32 rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;
    float32 rtb_TmpSignalConversionAtVeENGR_T_Cataly;
    float32 rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S;
    float32 rtb_TmpSignalConversionAtVeTFTR_T_TransO;
    float32 rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;
    float32 rtb_Vector;
    sint16 rtb_Sum1_h;
    sint16 rtb_Sum2_g;
    uint16 rtb_TmpSignalConversionAtSelectorInpor_a[4];
    uint16 rtb_TmpSignalConversionAtSelectorInport1[3];
    uint16 rtb_TmpSignalConversionAtVeOSMR_d_Manual;
    uint8 rtb_Merge1_ib;
    boolean rtb_AND_ah0;
    boolean rtb_AND_h;
    boolean rtb_AND_mo;
    boolean rtb_AND_o5;
    boolean rtb_Logical2_jm;
    boolean rtb_Logical4_gu;
    boolean rtb_NotEqual_fz;
    boolean rtb_OR1_kv;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

    float32 rtb_TmpSignalConversionAtVeEOCR_Pct_Purg;

#endif

    float32 rtb_TmpSignalConversionAtVeESPR_n_TCMEng;
    float32 rtb_TmpSignalConversionAtVeOSMR_n_TransO;
    float32 rtb_TmpSignalConversionAtVeVSDR_dn_Strat;
    float32 rtb_TmpSignalConversionAtVeVTVR_M_LoadTo;
    TeSCOR_e_OptRng_SG rtb_TmpSignalConversionAtVeSCOR_e_RngDsr;
    uint8 rtb_Merge1_c2;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

    TeSCOR_e_OptGear_SG rtb_TmpSignalConversionAtStgcMaxGear_NVH[4];

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

    TeSCOR_e_OptGear_SG rtb_VariantMerge_For_Variant_Source_Vari;

#endif

#if !Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || (Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 && Rte_SysCon_Variant_OHSR_FUNC_PxPy_29)

    TeSCOR_e_OptGear_SG rtb_TmpSignalConversionAtVeSCOR_e_SGrDsr;

#endif

    TeSCOR_e_OptGear_SG rtb_TmpSignalConversionAtVeSCOR_e_SGrD_a;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

    TeOITR_e_EngOpMode rtb_TmpSignalConversionAtVeOITR_e_EngDsr;

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

    TeSCOR_e_OptGear_SG rtb_Switch1_bf;

#endif

    float32 rtb_TmpSignalConversionAtNti_Max_ReadOut[54];
    float32 rtb_TmpSignalConversionAtNti_Min_ReadOut[54];
    float32 rtb_TmpSignalConversionAtVeOSMR_n_Inp_cr;
    float32 rtb_TmpSignalConversionAtVeOSMR_n_Inp_fc;
    float32 rtb_TmpSignalConversionAtVeOSMR_n_Inp_of;
    float32 rtb_TmpSignalConversionAtVeOSMR_n_Inpu_m;
    float32 rtb_TmpSignalConversionAtVeOSMR_n_Inpu_n;
    float32 rtb_TmpSignalConversionAtVeOSMR_n_Inpu_o;
    sint16 rtb_Selector21[6];
    uint16 rtb_TmpSignalConversionAtVeOSMR_d_Manu_c;
    uint16 rtb_TmpSignalConversionAtVeOSMR_d_Manu_m;
    TeFWDR_e_TrnsfrCaseRange rtb_TmpSignalConversionAtVeFWDR_e_Tcase_;
    TeHSER_e_RngEqnSel rtb_TmpSignalConversionAtVeHSER_e_RngEqn;
    TeOHSR_e_OptGear_SG rtb_VariantMerge_For_Variant_Source_Xe_o;
    TeOSMR_e_SteadyTransState rtb_TmpSignalConversionAtVeOSMR_e_Steady;
    TeSCOR_e_OptGear_SG rtb_VariantMerge_For_Variant_Source_Va_j;
    TeSCOR_e_OptGear_SG rtb_VariantMerge_For_Variant_Source_Va_p;
    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeOSMR_e_Actual;
    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeOSMR_e_Target;
    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTRNR_e_Actual;
    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTRNR_e_Target;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    TeOHSR_e_OptGear_SG rtb_Selector9_b;

#endif

    sint32 i;
    float32 tmp[10];
    float32 Selector23[6];
    float32 tmp_0[2];
    float32 rtb_TmpSignalConversionAtVeMSPR_n_P2SpdC;
    boolean UnitDelay_DSTATE_f4;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    boolean tmp_1[6];

#endif

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    float32 tmp_2[3];

#endif

    sint32 rtb_Logical8_a_tmp;
    sint32 rtb_Switch5_jr_tmp;
    float32 rtb_Comparison5_bs_tmp;
    float32 rtb_Logical8_a_tmp_0;
    float32 rtb_Selector1_os_tmp;
    float32 rtb_Selector2_p_tmp;
    float32 rtb_UnitDelay_cr_tmp;
    float32 rtb_UnitDelay_kh_tmp;
    TeOHSR_e_VLE_DriveStat rtb_Logical6_i_tmp;
    TeOHSR_e_VLE_DriveStat rtb_Selector3_kl_tmp;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

    const float32 *rtb_Switch4_0;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTED'
     */
    /* SignalConversion generated from: '<S2>/VeRTMR_e_HybTransCmndSt' incorporates:
     *  Inport: '<Root>/VeRTMR_e_HybTransCmndSt'
     */
    (void)Rte_Read_VeRTMR_e_HybTransCmndSt_Value
        (&OHSR_ac_B.TmpSignalConversionAtVeRTMR_e_HybTransCm);

    /* SignalConversion generated from: '<S2>/TransMin_Read' incorporates:
     *  Merge: '<Root>/TransMin_IRV_Merge'
     */
    OHSR_ac_B.TmpSignalConversionAtTransMin_ReadOutpor =
        Rte_IrvRead_OHSR_MedTED_TransMin_write_IRV();

    /* SignalConversion generated from: '<S2>/VeSCOR_b_DsrdRngStAllwd' incorporates:
     *  Inport: '<Root>/VeSCOR_b_DsrdRngStAllwd'
     */
    (void)Rte_Read_VeSCOR_b_DsrdRngStAllwd_Value
        (&rtb_TmpSignalConversionAtVeSCOR_b_DsrdRn);

    /* SignalConversion generated from: '<S2>/VeTISR_n_TransMinInputSpd' incorporates:
     *  Inport: '<Root>/VeTISR_n_TransMinInputSpd'
     */
    (void)Rte_Read_VeTISR_n_TransMinInputSpd_Value
        (&OHSR_ac_B.TmpSignalConversionAtVeTISR_n_TransMinIn);

    /* SignalConversion generated from: '<S2>/VeSCOR_b_ReqFC' incorporates:
     *  Inport: '<Root>/VeSCOR_b_ReqFC'
     */
    (void)Rte_Read_VeSCOR_b_ReqFC_Value
        (&rtb_TmpSignalConversionAtVeSCOR_b_ReqFCO);

    /* SignalConversion generated from: '<S2>/VeOSMR_e_SteadyTransSt' incorporates:
     *  Inport: '<Root>/VeOSMR_e_SteadyTransSt'
     */
    (void)Rte_Read_VeOSMR_e_SteadyTransSt_Value
        (&rtb_TmpSignalConversionAtVeOSMR_e_Steady);

    /* SignalConversion generated from: '<S1036>/Selector3' incorporates:
     *  Inport: '<Root>/VeOSMR_n_InputSpdMaxNAct'
     *  SignalConversion generated from: '<S2>/VeOSMR_n_InputSpdMaxNAct'
     */
    (void)Rte_Read_VeOSMR_n_InputSpdMaxNAct_Value
        (&rtb_TmpSignalConversionAtSelector3Inport[0]);

    /* SignalConversion generated from: '<S2>/VeOSMR_n_InputSpdMinNAct' incorporates:
     *  Inport: '<Root>/VeOSMR_n_InputSpdMinNAct'
     */
    (void)Rte_Read_VeOSMR_n_InputSpdMinNAct_Value
        (&rtb_TmpSignalConversionAtVeOSMR_n_Inp_of);

    /* SignalConversion generated from: '<S1036>/Selector3' incorporates:
     *  Inport: '<Root>/VeOSMR_n_InputSpdMaxMAAct'
     *  SignalConversion generated from: '<S2>/VeOSMR_n_InputSpdMaxMAAct'
     */
    (void)Rte_Read_VeOSMR_n_InputSpdMaxMAAct_Value
        (&rtb_TmpSignalConversionAtSelector3Inport[1]);

    /* SignalConversion generated from: '<S2>/VeOSMR_n_InputSpdMinMAAct' incorporates:
     *  Inport: '<Root>/VeOSMR_n_InputSpdMinMAAct'
     */
    (void)Rte_Read_VeOSMR_n_InputSpdMinMAAct_Value
        (&rtb_TmpSignalConversionAtVeOSMR_n_Inp_fc);

    /* SignalConversion generated from: '<S1036>/Selector3' incorporates:
     *  Inport: '<Root>/VeOSMR_n_InputSpdMaxMBAct'
     *  SignalConversion generated from: '<S2>/VeOSMR_n_InputSpdMaxMBAct'
     */
    (void)Rte_Read_VeOSMR_n_InputSpdMaxMBAct_Value
        (&rtb_TmpSignalConversionAtSelector3Inport[2]);

    /* SignalConversion generated from: '<S2>/VeOSMR_n_InputSpdMinMBAct' incorporates:
     *  Inport: '<Root>/VeOSMR_n_InputSpdMinMBAct'
     */
    (void)Rte_Read_VeOSMR_n_InputSpdMinMBAct_Value
        (&rtb_TmpSignalConversionAtVeOSMR_n_Inpu_m);

    /* SignalConversion generated from: '<S2>/VeOSMR_n_MtrBSpd_Max' incorporates:
     *  Inport: '<Root>/VeOSMR_n_MtrBSpd_Max'
     */
    (void)Rte_Read_VeOSMR_n_MtrBSpd_Max_Value
        (&rtb_TmpSignalConversionAtVeOSMR_n_MtrBSp);

    /* SignalConversion generated from: '<S2>/VeOSMR_n_MtrBSpd_Min' incorporates:
     *  Inport: '<Root>/VeOSMR_n_MtrBSpd_Min'
     */
    (void)Rte_Read_VeOSMR_n_MtrBSpd_Min_Value
        (&rtb_TmpSignalConversionAtVeOSMR_n_MtrB_h);

    /* SignalConversion generated from: '<S2>/VeESPR_n_EngSpdMaxLim' incorporates:
     *  Inport: '<Root>/VeESPR_n_EngSpdMaxLim'
     */
    (void)Rte_Read_VeESPR_n_EngSpdMaxLim_Value
        (&rtb_TmpSignalConversionAtVeESPR_n_EngSpd);

    /* SignalConversion generated from: '<S2>/VeSCOR_e_RngDsrd' incorporates:
     *  Inport: '<Root>/VeSCOR_e_RngDsrd'
     */
    (void)Rte_Read_VeSCOR_e_RngDsrd_Value
        (&rtb_TmpSignalConversionAtVeSCOR_e_RngDsr);

    /* SignalConversion generated from: '<S2>/VeOSMR_n_TransOutSpd' incorporates:
     *  Inport: '<Root>/VeOSMR_n_TransOutSpd'
     */
    (void)Rte_Read_VeOSMR_n_TransOutSpd_Value
        (&rtb_TmpSignalConversionAtVeOSMR_n_TransO);

    /* SignalConversion generated from: '<S2>/VeSCOR_Pct_TtlPdlChange' incorporates:
     *  Inport: '<Root>/VeSCOR_Pct_TtlPdlChange'
     */
    (void)Rte_Read_VeSCOR_Pct_TtlPdlChange_Value
        (&rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP);

    /* SignalConversion generated from: '<S2>/VeESPR_n_TCMEngSpdReq' incorporates:
     *  Inport: '<Root>/VeESPR_n_TCMEngSpdReq'
     */
    (void)Rte_Read_VeESPR_n_TCMEngSpdReq_Value
        (&rtb_TmpSignalConversionAtVeESPR_n_TCMEng);

    /* SignalConversion generated from: '<S2>/VeTISR_n_InputSpeed' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value
        (&rtb_TmpSignalConversionAtVeTISR_n_InputS);

    /* SignalConversion generated from: '<S2>/VeMSPR_n_MtrB_Spd' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
     */
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value
        (&rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S);

    /* SignalConversion generated from: '<S2>/VeESPR_b_TCMEngSpdReqActive' incorporates:
     *  Inport: '<Root>/VeESPR_b_TCMEngSpdReqActive'
     */
    (void)Rte_Read_VeESPR_b_TCMEngSpdReqActive_Value
        (&rtb_TmpSignalConversionAtVeESPR_b_TCMEng);

    /* SignalConversion generated from: '<S2>/VeSTRR_b_EngOffAllowed' incorporates:
     *  Inport: '<Root>/VeSTRR_b_EngOffAllowed'
     */
    (void)Rte_Read_VeSTRR_b_EngOffAllowed_Value
        (&rtb_TmpSignalConversionAtVeSTRR_b_EngOff);

    /* SignalConversion generated from: '<S2>/VeOHSR_n_IdleSpdBlended_Read' incorporates:
     *  Merge: '<Root>/VeOHSR_n_IdleSpdBlended_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeOHSR_n_IdleSp =
        Rte_IrvRead_OHSR_MedTED_VeOHSR_n_IdleSpdBlended_write_IRV();

    /* SignalConversion generated from: '<S2>/VeOSMR_e_TargetGear' incorporates:
     *  Inport: '<Root>/VeOSMR_e_TargetGear'
     */
    (void)Rte_Read_VeOSMR_e_TargetGear_Value
        (&rtb_TmpSignalConversionAtVeOSMR_e_Target);

    /* SignalConversion generated from: '<S2>/VeVTVR_M_LoadTorqFront_Opt' incorporates:
     *  Inport: '<Root>/VeVTVR_M_LoadTorqFront_Opt'
     */
    (void)Rte_Read_VeVTVR_M_LoadTorqFront_Opt_Value
        (&rtb_TmpSignalConversionAtVeVTVR_M_LoadTo);

    /* SignalConversion generated from: '<S2>/VeSCOR_b_TLC_Req' incorporates:
     *  Inport: '<Root>/VeSCOR_b_TLC_Req'
     */
    (void)Rte_Read_VeSCOR_b_TLC_Req_Value
        (&rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re);

    /* SignalConversion generated from: '<S2>/VeOSMR_e_ActualGear' incorporates:
     *  Inport: '<Root>/VeOSMR_e_ActualGear'
     */
    (void)Rte_Read_VeOSMR_e_ActualGear_Value
        (&rtb_TmpSignalConversionAtVeOSMR_e_Actual);

    /* SignalConversion generated from: '<S2>/VeSCOR_e_SGrDsrd_EngOn' */
#if !Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || (Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 && Rte_SysCon_Variant_OHSR_FUNC_PxPy_29)

    /* SignalConversion generated from: '<S2>/VeSCOR_e_SGrDsrd_EngOn' incorporates:
     *  Inport: '<Root>/VeSCOR_e_SGrDsrd_EngOn'
     */
    (void)Rte_Read_VeSCOR_e_SGrDsrd_EngOn_Value
        (&rtb_TmpSignalConversionAtVeSCOR_e_SGrDsr);

#endif

    /* End of SignalConversion generated from: '<S2>/VeSCOR_e_SGrDsrd_EngOn' */

    /* SignalConversion generated from: '<S2>/Nti_Max_Read' */
    Rte_IrvRead_OHSR_MedTED_Nti_Max_write_IRV
        (rtb_TmpSignalConversionAtNti_Max_ReadOut);

    /* SignalConversion generated from: '<S2>/Nti_Min_Read' */
    Rte_IrvRead_OHSR_MedTED_Nti_Min_write_IRV
        (rtb_TmpSignalConversionAtNti_Min_ReadOut);

    /* SignalConversion generated from: '<S2>/ShiftToN_Read' incorporates:
     *  Merge: '<Root>/ShiftToN_IRV_Merge'
     */
    rtb_TmpSignalConversionAtShiftToN_ReadOu =
        Rte_IrvRead_OHSR_MedTED_ShiftToN_write_IRV();

    /* SignalConversion generated from: '<S2>/VeFWDR_e_Tcase_Stat' incorporates:
     *  Inport: '<Root>/VeFWDR_e_Tcase_Stat'
     */
    (void)Rte_Read_VeFWDR_e_Tcase_Stat_Value
        (&rtb_TmpSignalConversionAtVeFWDR_e_Tcase_);

    /* SignalConversion generated from: '<S2>/VeTRNR_e_TargetGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_TargetGear'
     */
    (void)Rte_Read_VeTRNR_e_TargetGear_Value
        (&rtb_TmpSignalConversionAtVeTRNR_e_Target);

    /* SignalConversion generated from: '<S2>/VeTRNR_e_ActualGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_ActualGear'
     */
    (void)Rte_Read_VeTRNR_e_ActualGear_Value
        (&rtb_TmpSignalConversionAtVeTRNR_e_Actual);

    /* SignalConversion generated from: '<S2>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        (&rtb_TmpSignalConversionAtVeAPSR_Pct_Acce);

    /* SignalConversion generated from: '<S2>/VeATRR_M_ToReqPrdctd_Stgc' incorporates:
     *  SignalConversion generated from: '<S2>/VeOSMR_M_OutTorqReqAccel'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    /* SignalConversion generated from: '<S2>/VeATRR_M_ToReqPrdctd_Stgc' incorporates:
     *  Inport: '<Root>/VeATRR_M_ToReqPrdctd_Stgc'
     */
    (void)Rte_Read_VeATRR_M_ToReqPrdctd_Stgc_Value
        (&rtb_TmpSignalConversionAtVeATRR_M_ToReqP);

    /* SignalConversion generated from: '<S2>/VeOSMR_M_OutTorqReqAccel' incorporates:
     *  Inport: '<Root>/VeOSMR_M_OutTorqReqAccel'
     */
    (void)Rte_Read_VeOSMR_M_OutTorqReqAccel_Value
        (&rtb_TmpSignalConversionAtVeOSMR_M_OutTor);

#endif

    /* End of SignalConversion generated from: '<S2>/VeATRR_M_ToReqPrdctd_Stgc' */

    /* SignalConversion generated from: '<S2>/VaOSMR_d_FinalAllwdDsrd' incorporates:
     *  Inport: '<Root>/VaOSMR_d_FinalAllwdDsrd'
     */
    (void)Rte_Read_VaOSMR_d_FinalAllwdDsrd_Value
        (rtb_TmpSignalConversionAtVaOSMR_d_FinalA);

    /* SignalConversion generated from: '<S1036>/Selector3' incorporates:
     *  Inport: '<Root>/VeOSMR_n_InputSpdMaxNTgt'
     *  SignalConversion generated from: '<S2>/VeOSMR_n_InputSpdMaxNTgt'
     */
    (void)Rte_Read_VeOSMR_n_InputSpdMaxNTgt_Value
        (&rtb_TmpSignalConversionAtSelector3Inport[3]);

    /* SignalConversion generated from: '<S2>/VeOSMR_n_InputSpdMinNTgt' incorporates:
     *  Inport: '<Root>/VeOSMR_n_InputSpdMinNTgt'
     */
    (void)Rte_Read_VeOSMR_n_InputSpdMinNTgt_Value
        (&rtb_TmpSignalConversionAtVeOSMR_n_Inpu_o);

    /* SignalConversion generated from: '<S1036>/Selector3' incorporates:
     *  Inport: '<Root>/VeOSMR_n_InputSpdMaxMATgt'
     *  SignalConversion generated from: '<S2>/VeOSMR_n_InputSpdMaxMATgt'
     */
    (void)Rte_Read_VeOSMR_n_InputSpdMaxMATgt_Value
        (&rtb_TmpSignalConversionAtSelector3Inport[4]);

    /* SignalConversion generated from: '<S2>/VeOSMR_n_InputSpdMinMATgt' incorporates:
     *  Inport: '<Root>/VeOSMR_n_InputSpdMinMATgt'
     */
    (void)Rte_Read_VeOSMR_n_InputSpdMinMATgt_Value
        (&rtb_TmpSignalConversionAtVeOSMR_n_Inpu_n);

    /* SignalConversion generated from: '<S1036>/Selector3' incorporates:
     *  Inport: '<Root>/VeOSMR_n_InputSpdMaxMBTgt'
     *  SignalConversion generated from: '<S2>/VeOSMR_n_InputSpdMaxMBTgt'
     */
    (void)Rte_Read_VeOSMR_n_InputSpdMaxMBTgt_Value
        (&rtb_TmpSignalConversionAtSelector3Inport[5]);

    /* SignalConversion generated from: '<S2>/VeOSMR_n_InputSpdMinMBTgt' incorporates:
     *  Inport: '<Root>/VeOSMR_n_InputSpdMinMBTgt'
     */
    (void)Rte_Read_VeOSMR_n_InputSpdMinMBTgt_Value
        (&rtb_TmpSignalConversionAtVeOSMR_n_Inp_cr);

    /* SignalConversion generated from: '<S2>/S2H_Read' incorporates:
     *  Merge: '<Root>/S2H_IRV_Merge'
     */
    rtb_TmpSignalConversionAtS2H_ReadOutport =
        Rte_IrvRead_OHSR_MedTED_S2H_write_IRV();

    /* SignalConversion generated from: '<S2>/VeMSPR_n_P2SpdControl_TgtSpd' incorporates:
     *  Inport: '<Root>/VeMSPR_n_P2SpdControl_TgtSpd'
     */
    (void)Rte_Read_VeMSPR_n_P2SpdControl_TgtSpd_Value
        (&rtb_TmpSignalConversionAtVeMSPR_n_P2SpdC);

    /* SignalConversion generated from: '<S2>/VeVSDR_n_NTurb' incorporates:
     *  Inport: '<Root>/VeVSDR_n_NTurb'
     */
    (void)Rte_Read_VeVSDR_n_NTurb_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_NTurbO);

    /* SignalConversion generated from: '<S2>/VaOSMR_n_NTurb_FromNo' incorporates:
     *  Inport: '<Root>/VaOSMR_n_NTurb_FromNo'
     */
    (void)Rte_Read_VaOSMR_n_NTurb_FromNo_Value
        (rtb_TmpSignalConversionAtVaOSMR_n_NTurb_);

    /* SignalConversion generated from: '<S2>/PS_Read' incorporates:
     *  Merge: '<Root>/PS_IRV_Merge'
     */
    rtb_TmpSignalConversionAtPS_ReadOutport1 =
        Rte_IrvRead_OHSR_MedTED_PS_write_IRV();

    /* SignalConversion generated from: '<S2>/EnblTCMReqL_Read' incorporates:
     *  Merge: '<Root>/EnblTCMReqL_IRV_Merge'
     */
    rtb_TmpSignalConversionAtEnblTCMReqL_Rea =
        Rte_IrvRead_OHSR_MedTED_EnblTCMReqL_write_IRV();

    /* SignalConversion generated from: '<S2>/VeOSMR_b_EngRevLim_Actv' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    /* SignalConversion generated from: '<S2>/VeOSMR_b_EngRevLim_Actv' incorporates:
     *  Inport: '<Root>/VeOSMR_b_EngRevLim_Actv'
     */
    (void)Rte_Read_VeOSMR_b_EngRevLim_Actv_Value
        (&rtb_TmpSignalConversionAtVeOSMR_b_EngRev);

#endif

    /* End of SignalConversion generated from: '<S2>/VeOSMR_b_EngRevLim_Actv' */

    /* SignalConversion generated from: '<S2>/VeOSMR_d_ManualAllowedN' incorporates:
     *  Inport: '<Root>/VeOSMR_d_ManualAllowedN'
     */
    (void)Rte_Read_VeOSMR_d_ManualAllowedN_Value
        (&rtb_TmpSignalConversionAtVeOSMR_d_Manual);

    /* SignalConversion generated from: '<S2>/VeOSMR_d_ManualAllowedMA' incorporates:
     *  Inport: '<Root>/VeOSMR_d_ManualAllowedMA'
     */
    (void)Rte_Read_VeOSMR_d_ManualAllowedMA_Value
        (&rtb_TmpSignalConversionAtVeOSMR_d_Manu_c);

    /* SignalConversion generated from: '<S2>/VeOSMR_d_ManualAllowedMB' incorporates:
     *  Inport: '<Root>/VeOSMR_d_ManualAllowedMB'
     */
    (void)Rte_Read_VeOSMR_d_ManualAllowedMB_Value
        (&rtb_TmpSignalConversionAtVeOSMR_d_Manu_m);

    /* SignalConversion generated from: '<S2>/VeHSER_e_RngEqnSel' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngEqnSel'
     */
    (void)Rte_Read_VeHSER_e_RngEqnSel_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_RngEqn);

    /* SignalConversion generated from: '<S2>/VeBACR_P_BattPwrShift_Tact' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

    /* SignalConversion generated from: '<S2>/VeBACR_P_BattPwrShift_Tact' incorporates:
     *  Inport: '<Root>/VeBACR_P_BattPwrShift_Tact'
     */
    (void)Rte_Read_VeBACR_P_BattPwrShift_Tact_Value
        (&rtb_TmpSignalConversionAtVeBACR_P_BattPw);

#endif

    /* End of SignalConversion generated from: '<S2>/VeBACR_P_BattPwrShift_Tact' */

    /* SignalConversion generated from: '<S2>/VeOSMR_n_NiMax_NVH' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_15

    /* SignalConversion generated from: '<S2>/VeOSMR_n_NiMax_NVH' incorporates:
     *  Inport: '<Root>/VeOSMR_n_NiMax_NVH'
     */
    (void)Rte_Read_VeOSMR_n_NiMax_NVH_Value
        (&rtb_TmpSignalConversionAtVeOSMR_n_NiMax_);

#endif

    /* End of SignalConversion generated from: '<S2>/VeOSMR_n_NiMax_NVH' */

    /* SignalConversion generated from: '<S2>/VeOITR_P_OptCalcBattPwr' incorporates:
     *  SignalConversion generated from: '<S2>/VeEOCR_Pct_PurgeIntensity'
     *  SignalConversion generated from: '<S2>/VeOITR_M_OptInputTorq'
     *  SignalConversion generated from: '<S2>/VeOITR_e_EngDsrdSt'
     *  SignalConversion generated from: '<S2>/VeVSDR_dn_StratNodot'
     *  SignalConversion generated from: '<S2>/dSOC_Read'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

    /* SignalConversion generated from: '<S2>/VeOITR_P_OptCalcBattPwr' incorporates:
     *  Inport: '<Root>/VeOITR_P_OptCalcBattPwr'
     */
    (void)Rte_Read_VeOITR_P_OptCalcBattPwr_Value
        (&rtb_TmpSignalConversionAtVeOITR_P_OptCal);

    /* SignalConversion generated from: '<S2>/dSOC_Read' incorporates:
     *  Merge: '<Root>/dSOC_IRV_Merge'
     */
    rtb_TmpSignalConversionAtdSOC_ReadOutpor =
        Rte_IrvRead_OHSR_MedTED_dSOC_write_IRV();

    /* SignalConversion generated from: '<S2>/VeVSDR_dn_StratNodot' incorporates:
     *  Inport: '<Root>/VeVSDR_dn_StratNodot'
     */
    (void)Rte_Read_VeVSDR_dn_StratNodot_Value
        (&rtb_TmpSignalConversionAtVeVSDR_dn_Strat);

    /* SignalConversion generated from: '<S2>/VeOITR_M_OptInputTorq' incorporates:
     *  Inport: '<Root>/VeOITR_M_OptInputTorq'
     */
    (void)Rte_Read_VeOITR_M_OptInputTorq_Value
        (&rtb_TmpSignalConversionAtVeOITR_M_OptInp);

    /* SignalConversion generated from: '<S2>/VeOITR_e_EngDsrdSt' incorporates:
     *  Inport: '<Root>/VeOITR_e_EngDsrdSt'
     */
    (void)Rte_Read_VeOITR_e_EngDsrdSt_Value
        (&rtb_TmpSignalConversionAtVeOITR_e_EngDsr);

    /* SignalConversion generated from: '<S2>/VeEOCR_Pct_PurgeIntensity' incorporates:
     *  Inport: '<Root>/VeEOCR_Pct_PurgeIntensity'
     */
    (void)Rte_Read_VeEOCR_Pct_PurgeIntensity_Value
        (&rtb_TmpSignalConversionAtVeEOCR_Pct_Purg);

#endif

    /* End of SignalConversion generated from: '<S2>/VeOITR_P_OptCalcBattPwr' */

    /* SignalConversion generated from: '<S2>/StgcMaxGear_NVH_Read' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

    /* SignalConversion generated from: '<S2>/StgcMaxGear_NVH_Read' */
    Rte_IrvRead_OHSR_MedTED_StgcMaxGear_NVH_write_IRV
        (rtb_TmpSignalConversionAtStgcMaxGear_NVH);

#endif

    /* End of SignalConversion generated from: '<S2>/StgcMaxGear_NVH_Read' */

    /* SignalConversion generated from: '<S2>/VeSCOR_e_SGrDsrd' incorporates:
     *  Inport: '<Root>/VeSCOR_e_SGrDsrd'
     */
    (void)Rte_Read_VeSCOR_e_SGrDsrd_Value
        (&rtb_TmpSignalConversionAtVeSCOR_e_SGrD_a);

    /* SignalConversion generated from: '<S2>/VeOSMR_n_TransMinEngSpd' */
#if !Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_17 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_21 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_23

    /* SignalConversion generated from: '<S2>/VeOSMR_n_TransMinEngSpd' incorporates:
     *  Inport: '<Root>/VeOSMR_n_TransMinEngSpd'
     */
    (void)Rte_Read_VeOSMR_n_TransMinEngSpd_Value
        (&rtb_TmpSignalConversionAtVeOSMR_n_TransM);

#endif

    /* End of SignalConversion generated from: '<S2>/VeOSMR_n_TransMinEngSpd' */

    /* SignalConversion generated from: '<S2>/VeOSMR_b_PnLimitActvFlg' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_15

    /* SignalConversion generated from: '<S2>/VeOSMR_b_PnLimitActvFlg' incorporates:
     *  Inport: '<Root>/VeOSMR_b_PnLimitActvFlg'
     */
    (void)Rte_Read_VeOSMR_b_PnLimitActvFlg_Value
        (&rtb_TmpSignalConversionAtVeOSMR_b_PnLimi);

#endif

    /* End of SignalConversion generated from: '<S2>/VeOSMR_b_PnLimitActvFlg' */

    /* SignalConversion generated from: '<S2>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B);

    /* SignalConversion generated from: '<S2>/VeTFTR_T_TransOilTemp' incorporates:
     *  Inport: '<Root>/VeTFTR_T_TransOilTemp'
     */
    (void)Rte_Read_VeTFTR_T_TransOilTemp_Value
        (&rtb_TmpSignalConversionAtVeTFTR_T_TransO);

    /* SignalConversion generated from: '<S2>/VeENGR_T_CatalystTemp' incorporates:
     *  Inport: '<Root>/VeENGR_T_CatalystTemp'
     */
    (void)Rte_Read_VeENGR_T_CatalystTemp_Value
        (&rtb_TmpSignalConversionAtVeENGR_T_Cataly);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/OHSC_Range_Selection'
     */
    /* MinMax: '<S558>/MinMax' incorporates:
     *  UnitDelay: '<S558>/Unit Delay2'
     */
    if (1 > VeOHSC_e_CurrentRngSelected)
    {
        /* MinMax: '<S558>/MinMax' */
        rtb_MinMax_i = 1;
    }
    else
    {
        /* MinMax: '<S558>/MinMax' */
        rtb_MinMax_i = VeOHSC_e_CurrentRngSelected;
    }

    /* End of MinMax: '<S558>/MinMax' */

    /* MinMax: '<S558>/MinMax2' incorporates:
     *  UnitDelay: '<S558>/Unit Delay7'
     */
    if (1 > VeOHSC_e_CurrentRngOptSelected)
    {
        /* MinMax: '<S558>/MinMax2' */
        rtb_MinMax2_hq = 1;
    }
    else
    {
        /* MinMax: '<S558>/MinMax2' */
        rtb_MinMax2_hq = VeOHSC_e_CurrentRngOptSelected;
    }

    /* End of MinMax: '<S558>/MinMax2' */

    /* MinMax: '<S558>/MinMax1' incorporates:
     *  UnitDelay: '<S558>/Unit Delay5'
     */
    if (1 > VeOHSC_e_CurrentRngOnSelected)
    {
        /* MinMax: '<S558>/MinMax1' */
        rtb_MinMax1_fj = 1;
    }
    else
    {
        /* MinMax: '<S558>/MinMax1' */
        rtb_MinMax1_fj = VeOHSC_e_CurrentRngOnSelected;
    }

    /* End of MinMax: '<S558>/MinMax1' */

    /* Outputs for Atomic SubSystem: '<S935>/OHSL_MaxInputSpeedToMinGear' */
    /* Sum: '<S935>/Sum' incorporates:
     *  Abs: '<S1143>/Abs1'
     *  Constant: '<S1146>/Constant'
     *  Constant: '<S935>/Constant Value3'
     *  Constant: '<S935>/TRUE Constant'
     *  Logic: '<S935>/Logical3'
     *  MinMax: '<S935>/MinMax2'
     *  RelationalOperator: '<S935>/Comparison2'
     *  RelationalOperator: '<S935>/Comparison3'
     *  Selector: '<S935>/Selector1'
     *  Sum: '<S1143>/Sum2'
     *  Switch: '<S935>/Switch'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

    /* Outputs for Iterator SubSystem: '<S1148>/MaxInputSpeedToMinGear' incorporates:
     *  WhileIterator: '<S1205>/While Iterator'
     */
    s1205_iter = 1;

    /* SystemReset for Atomic SubSystem: '<S1205>/Hysteresis' */
    /* InitializeConditions for UnitDelay: '<S1207>/Unit Delay' */
    UnitDelay_DSTATE_f4 = false;

    /* End of SystemReset for SubSystem: '<S1205>/Hysteresis' */
    loopCond = true;
    while (loopCond && (s1205_iter <= 8))
    {
        /* Outputs for Atomic SubSystem: '<S1205>/Hysteresis' */
        /* Switch: '<S1207>/Switch1' incorporates:
         *  RelationalOperator: '<S1205>/Comparison'
         *  Selector: '<S1205>/Selector'
         *  UnitDelay: '<S1207>/Unit Delay'
         */
        UnitDelay_DSTATE_f4 = ((rtb_TmpSignalConversionAtVeOSMR_n_NiMax_ >
                                rtb_TmpSignalConversionAtVaOSMR_n_NTurb_[s1205_iter])
                               || UnitDelay_DSTATE_f4);

        /* End of Outputs for SubSystem: '<S1205>/Hysteresis' */

        /* If: '<S1205>/If' incorporates:
         *  Inport: '<S1208>/Idx'
         *  UnitDelay: '<S1207>/Unit Delay'
         */
        if (UnitDelay_DSTATE_f4)
        {
            /* Outputs for IfAction SubSystem: '<S1205>/MinGr_Found' incorporates:
             *  ActionPort: '<S1208>/Action Port'
             */
            OHSR_ac_B.Idx = s1205_iter;

            /* Merge: '<S1205>/Merge1' incorporates:
             *  Constant: '<S1208>/FALSE Constant'
             *  Inport: '<S1208>/Idx'
             *  SignalConversion generated from: '<S1208>/Codn'
             */
            loopCond = false;

            /* End of Outputs for SubSystem: '<S1205>/MinGr_Found' */
        }

        /* End of If: '<S1205>/If' */
        s1205_iter++;
    }

    /* End of Outputs for SubSystem: '<S1148>/MaxInputSpeedToMinGear' */
    if (((uint32)rtb_TmpSignalConversionAtVeSCOR_e_RngDsr) != CeSCOR_e_SG_EngOff)
    {
        /* DataTypeConversion: '<S935>/Data Type Conversion5' incorporates:
         *  DataTypeConversion: '<S935>/Data Type Conversion2'
         *  Selector: '<S935>/Selector'
         *  SignalConversion generated from: '<S2>/StgcMaxGear_NVH_Read'
         */
        s1205_iter = (sint8)
            rtb_TmpSignalConversionAtStgcMaxGear_NVH[rtb_TmpSignalConversionAtVeSCOR_e_RngDsr];
    }
    else
    {
        /* DataTypeConversion: '<S935>/Data Type Conversion5' incorporates:
         *  Constant: '<S935>/Constant Value'
         */
        s1205_iter = 2;
    }

    if (((sint8)(OHSR_ac_B.Idx + 1)) < s1205_iter)
    {
        /* MinMax: '<S935>/MinMax2' */
        s1205_iter = (sint8)(OHSR_ac_B.Idx + 1);
    }

    /* Selector: '<S935>/Selector1' incorporates:
     *  Constant: '<S1146>/Constant'
     *  Constant: '<S935>/Constant Value3'
     *  Constant: '<S935>/TRUE Constant'
     */
    rtb_Selector1_h2 = rtb_TmpSignalConversionAtVaOSMR_n_NTurb_[s1205_iter - 1];

    /* Abs: '<S1143>/Abs1' */
    rtb_Abs1 = fabsf(rtb_TmpSignalConversionAtVeOITR_P_OptCal +
                     rtb_TmpSignalConversionAtVeBACR_P_BattPw);

#endif

    /* End of Sum: '<S935>/Sum' */
    /* End of Outputs for SubSystem: '<S935>/OHSL_MaxInputSpeedToMinGear' */

    /* SignalConversion generated from: '<S935>/VariantSource3' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 && Rte_SysCon_Variant_OHSR_FUNC_PxPy_29

    /* VariantMerge generated from: '<S935>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S2>/VeSCOR_e_SGrDsrd_EngOn'
     */
    rtb_VariantMerge_For_Variant_Source_Vari =
        rtb_TmpSignalConversionAtVeSCOR_e_SGrDsr;

#elif (!Rte_SysCon_Variant_OHSR_FUNC_PxPy_29 && Rte_SysCon_Variant_OHSR_FUNC_PxPy_11) || (!Rte_SysCon_Variant_OHSR_FUNC_PxPy_29 && Rte_SysCon_Variant_OHSR_FUNC_PxPy_13)

    /* VariantMerge generated from: '<S935>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S2>/VeSCOR_e_SGrDsrd'
     *  SignalConversion generated from: '<S935>/VariantSource3'
     */
    rtb_VariantMerge_For_Variant_Source_Vari =
        rtb_TmpSignalConversionAtVeSCOR_e_SGrD_a;

#endif

    /* End of SignalConversion generated from: '<S935>/VariantSource3' */

    /* If: '<S1162>/If' incorporates:
     *  Constant: '<S1165>/Constant'
     *  Constant: '<S1166>/Constant'
     *  Constant: '<S1176>/Calib'
     *  Constant: '<S935>/TRUE Constant1'
     *  DataTypeConversion: '<S935>/Data Type Conversion4'
     *  DataTypeConversion: '<S935>/Data Type Conversion5'
     *  Product: '<S1143>/Product1'
     *  Product: '<S1143>/Product2'
     *  RelationalOperator: '<S1162>/Comparison1'
     *  RelationalOperator: '<S1162>/Comparison4'
     *  RelationalOperator: '<S935>/Comparison1'
     *  Selector: '<S935>/Selector2'
     *  Sum: '<S1143>/Sum1'
     *  Sum: '<S1143>/Sum3'
     *  Switch: '<S1143>/Switch1'
     *  Switch: '<S1162>/Switch4'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

    /* Outputs for Atomic SubSystem: '<S935>/Determine_MinGrNVH_PostBlnd' */
    /* Outputs for Atomic SubSystem: '<S1143>/GradientLimiter' */
    /* Outputs for Atomic SubSystem: '<S1143>/Accumulator Reset1' */
    /* Outputs for Atomic SubSystem: '<S1143>/EdgeBi1' */
    /* Outputs for Atomic SubSystem: '<S1143>/Accumulator Reset' */
    /* Outputs for Atomic SubSystem: '<S1143>/EdgeBi' */
    /* RelationalOperator: '<S935>/Comparison1' incorporates:
     *  VariantMerge generated from: '<S935>/VariantSource3'
     */
    loopCond = (((sint8)rtb_VariantMerge_For_Variant_Source_Vari) < s1205_iter);

    /* RelationalOperator: '<S1151>/Not Equal' incorporates:
     *  UnitDelay: '<S1151>/Unit Delay'
     */
    UnitDelay_DSTATE_f4 = (loopCond != OHSR_ac_DW.UnitDelay_DSTATE_bh);

    /* Update for UnitDelay: '<S1151>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_bh = loopCond;

    /* Switch: '<S1149>/Switch1' incorporates:
     *  Constant: '<S1143>/Constant Value1'
     *  Sum: '<S1149>/Summation'
     *  UnitDelay: '<S1149>/Unit Delay'
     */
    if (UnitDelay_DSTATE_f4)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_g = 0.0F;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_g += rtb_Abs1;
    }

    /* End of Switch: '<S1149>/Switch1' */
    if (Rte_Prm_KeOPTR_b_UseStgcFuelFlow_KeOPTR_b_UseStgcFuelFlow())
    {
        /* Switch: '<S1162>/Switch4' incorporates:
         *  Constant: '<S1172>/Calib'
         */
        rtb_Switch4_0 =
            Rte_Prm_KaOPTR_dm_FuelFlowAllCylStgc_KaOPTR_dm_FuelFlowAllCylStgc();
    }
    else
    {
        /* Switch: '<S1162>/Switch4' incorporates:
         *  Constant: '<S1171>/Calib'
         */
        rtb_Switch4_0 =
            Rte_Prm_KaOPTR_dm_FuelFlowAllCyl_KaOPTR_dm_FuelFlowAllCyl();
    }

    s1205_iter = OHSR_ac_DW.If_ActiveSubsystem;
    if (((uint32)rtb_TmpSignalConversionAtVeOITR_e_EngDsr) == CeOITR_e_NonDOD_FF)
    {
        OHSR_ac_DW.If_ActiveSubsystem = 0;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeOITR_e_EngDsr) ==
             CeOITR_e_DOD_FF)
    {
        OHSR_ac_DW.If_ActiveSubsystem = 1;
    }
    else
    {
        OHSR_ac_DW.If_ActiveSubsystem = 2;
    }

    switch (OHSR_ac_DW.If_ActiveSubsystem)
    {
      case 0:
        if (OHSR_ac_DW.If_ActiveSubsystem != s1205_iter)
        {
            /* SystemReset for IfAction SubSystem: '<S1162>/AllCyl' incorporates:
             *  ActionPort: '<S1164>/Action Port'
             */
            /* SystemReset for If: '<S1162>/If' incorporates:
             *  Chart: '<S1180>/X-Data & Fractions'
             *  Chart: '<S1185>/X-Data & Fractions'
             */
            OHSR_ac_XDataFractions_Reset(&OHSR_ac_B.sf_XDataFractions);
            OHSR_ac_XDataFractions_Reset(&OHSR_ac_B.sf_XDataFractions_n);

            /* End of SystemReset for SubSystem: '<S1162>/AllCyl' */
        }

        /* Outputs for IfAction SubSystem: '<S1162>/AllCyl' incorporates:
         *  ActionPort: '<S1164>/Action Port'
         */
        /* Chart: '<S1185>/X-Data & Fractions' incorporates:
         *  Constant: '<S1169>/Calib'
         *  MinMax: '<S1179>/MinMax1'
         */
        OHSR_ac_XDataFractions
            ((Rte_Prm_KaOPTR_M_FuelFlowTrqAxis_KaOPTR_M_FuelFlowTrqAxis()),
             fmaxf(rtb_TmpSignalConversionAtVeOITR_M_OptInp,
                   rtb_TmpSignalConversionAtVeOITR_M_OptInp),
             &OHSR_ac_B.sf_XDataFractions);

        /* Chart: '<S1180>/X-Data & Fractions' incorporates:
         *  Constant: '<S1174>/Calib'
         */
        OHSR_ac_XDataFractions
            ((Rte_Prm_KaOPTR_n_FuelFlowSpdAxis_KaOPTR_n_FuelFlowSpdAxis()),
             rtb_TmpSignalConversionAtVeTISR_n_InputS,
             &OHSR_ac_B.sf_XDataFractions_n);

        /* Selector: '<S1186>/Selector4' incorporates:
         *  Selector: '<S1186>/Selector1'
         *  Switch: '<S1162>/Switch4'
         */
        i = 31 * ((sint32)OHSR_ac_B.sf_XDataFractions_n.LowerIndex);
        rtb_Merge1 = rtb_Switch4_0[i + ((sint32)
            OHSR_ac_B.sf_XDataFractions.LowerIndex)];

        /* Selector: '<S1186>/Selector2' incorporates:
         *  Selector: '<S1186>/Selector3'
         */
        rtb_Switch5_jr_tmp = 31 * ((sint32)
            OHSR_ac_B.sf_XDataFractions_n.UpperIndex);

        /* Switch: '<S1179>/Switch5' incorporates:
         *  Product: '<S1186>/Multiplication1'
         *  Selector: '<S1186>/Selector2'
         *  Selector: '<S1186>/Selector4'
         *  Sum: '<S1186>/Subtraction2'
         *  Sum: '<S1186>/Subtraction3'
         *  Switch: '<S1162>/Switch4'
         */
        rtb_Switch5_fw = ((rtb_Switch4_0[rtb_Switch5_jr_tmp + ((sint32)
                            OHSR_ac_B.sf_XDataFractions.LowerIndex)] -
                           rtb_Merge1) * OHSR_ac_B.sf_XDataFractions_n.fra) +
            rtb_Merge1;

        /* Switch: '<S1179>/Switch5' incorporates:
         *  Constant: '<S1179>/Constant Value2'
         *  Constant: '<S1179>/Constant Value6'
         *  Constant: '<S1183>/Calib'
         *  Product: '<S1179>/Multiplication15'
         */
        if (Rte_Prm_KeOPTR_b_PurgeAdjst_Enbl_KeOPTR_b_PurgeAdjst_Enbl())
        {
            rtb_Merge1 = 4.1F * rtb_TmpSignalConversionAtVeEOCR_Pct_Purg;
        }
        else
        {
            rtb_Merge1 = 0.0F;
        }

        /* End of Switch: '<S1179>/Switch5' */

        /* Selector: '<S1186>/Selector1' incorporates:
         *  Switch: '<S1162>/Switch4'
         */
        rtb_Merge4 = rtb_Switch4_0[i + ((sint32)
            OHSR_ac_B.sf_XDataFractions.UpperIndex)];

        /* Merge: '<S1162>/Merge1' incorporates:
         *  Constant: '<S1177>/Calib'
         *  Constant: '<S1178>/Calib'
         *  Gain: '<S1179>/Nm-rev//min to kW'
         *  Product: '<S1164>/Multiplication2'
         *  Product: '<S1179>/EngPower'
         *  Product: '<S1179>/Product1'
         *  Product: '<S1186>/Multiplication'
         *  Product: '<S1186>/Multiplication2'
         *  Selector: '<S1186>/Selector1'
         *  Selector: '<S1186>/Selector3'
         *  Sum: '<S1179>/Max_Power_Per_Fuel_Flow'
         *  Sum: '<S1179>/Power Loss'
         *  Sum: '<S1179>/Summation14'
         *  Sum: '<S1186>/Subtraction'
         *  Sum: '<S1186>/Subtraction1'
         *  Sum: '<S1186>/Subtraction4'
         *  Sum: '<S1186>/Subtraction5'
         *  Switch: '<S1162>/Switch4'
         */
        rtb_Merge1 = (((((((((rtb_Switch4_0[rtb_Switch5_jr_tmp + ((sint32)
                               OHSR_ac_B.sf_XDataFractions.UpperIndex)] -
                              rtb_Merge4) * OHSR_ac_B.sf_XDataFractions_n.fra) +
                            rtb_Merge4) - rtb_Switch5_fw) *
                          OHSR_ac_B.sf_XDataFractions.fra) + rtb_Switch5_fw) -
                        rtb_Merge1) * ((float32)
                        Rte_Prm_KeOPTR_Cf_MaxEngPwrPerFuelFlow_KeOPTR_Cf_MaxEngPwrPerFuelFlow
                        ())) - ((rtb_TmpSignalConversionAtVeTISR_n_InputS *
                        rtb_TmpSignalConversionAtVeOITR_M_OptInp) *
                                0.000104719758F)) * ((float32)
            Rte_Prm_KeOPTR_r_EngPwrLossCostFactor_KeOPTR_r_EngPwrLossCostFactor());

        /* End of Outputs for SubSystem: '<S1162>/AllCyl' */
        break;

      case 1:
        if (OHSR_ac_DW.If_ActiveSubsystem != s1205_iter)
        {
            /* SystemReset for IfAction SubSystem: '<S1162>/DOD' incorporates:
             *  ActionPort: '<S1167>/Action Port'
             */
            /* SystemReset for If: '<S1162>/If' incorporates:
             *  Chart: '<S1192>/X-Data & Fractions'
             *  Chart: '<S1197>/X-Data & Fractions'
             */
            OHSR_ac_XDataFractions_Reset(&OHSR_ac_B.sf_XDataFractions_f);
            OHSR_ac_XDataFractions_f_Reset(&OHSR_ac_B.sf_XDataFractions_m);

            /* End of SystemReset for SubSystem: '<S1162>/DOD' */
        }

        /* Outputs for IfAction SubSystem: '<S1162>/DOD' incorporates:
         *  ActionPort: '<S1167>/Action Port'
         */
        /* Chart: '<S1197>/X-Data & Fractions' incorporates:
         *  Constant: '<S1170>/Calib'
         *  MinMax: '<S1191>/MinMax1'
         */
        OHSR_ac_XDataFractions
            ((Rte_Prm_KaOPTR_M_FuelFlowTrqAxis_DOD_KaOPTR_M_FuelFlowTrqAxis_DOD()),
             fmaxf(rtb_TmpSignalConversionAtVeOITR_M_OptInp,
                   rtb_TmpSignalConversionAtVeOITR_M_OptInp),
             &OHSR_ac_B.sf_XDataFractions_f);

        /* Chart: '<S1192>/X-Data & Fractions' incorporates:
         *  Constant: '<S1175>/Calib'
         */
        OHSR_ac_XDataFractions_m
            ((Rte_Prm_KaOPTR_n_FuelFlowSpdAxis_DOD_KaOPTR_n_FuelFlowSpdAxis_DOD()),
             rtb_TmpSignalConversionAtVeTISR_n_InputS,
             &OHSR_ac_B.sf_XDataFractions_m);

        /* Selector: '<S1198>/Selector4' incorporates:
         *  Constant: '<S1173>/Calib'
         *  Selector: '<S1198>/Selector1'
         */
        i = 31 * ((sint32)OHSR_ac_B.sf_XDataFractions_m.LowerIndex);
        rtb_Merge1 = (Rte_Prm_KaOPTR_dm_FuelFlowDOD_KaOPTR_dm_FuelFlowDOD())[i +
            ((sint32)OHSR_ac_B.sf_XDataFractions_f.LowerIndex)];

        /* Selector: '<S1198>/Selector2' incorporates:
         *  Constant: '<S1173>/Calib'
         *  Selector: '<S1198>/Selector3'
         */
        rtb_Switch5_jr_tmp = 31 * ((sint32)
            OHSR_ac_B.sf_XDataFractions_m.UpperIndex);

        /* Switch: '<S1191>/Switch5' incorporates:
         *  Constant: '<S1173>/Calib'
         *  Product: '<S1198>/Multiplication1'
         *  Selector: '<S1198>/Selector2'
         *  Selector: '<S1198>/Selector4'
         *  Sum: '<S1198>/Subtraction2'
         *  Sum: '<S1198>/Subtraction3'
         */
        rtb_Switch5_fw = ((((float32)
                            (Rte_Prm_KaOPTR_dm_FuelFlowDOD_KaOPTR_dm_FuelFlowDOD
                             ())[rtb_Switch5_jr_tmp + ((sint32)
                             OHSR_ac_B.sf_XDataFractions_f.LowerIndex)]) -
                           rtb_Merge1) * OHSR_ac_B.sf_XDataFractions_m.fra) +
            rtb_Merge1;

        /* Switch: '<S1191>/Switch5' incorporates:
         *  Constant: '<S1191>/Constant Value2'
         *  Constant: '<S1191>/Constant Value6'
         *  Constant: '<S1195>/Calib'
         *  Product: '<S1191>/Multiplication15'
         */
        if (Rte_Prm_KeOPTR_b_PurgeAdjst_Enbl_KeOPTR_b_PurgeAdjst_Enbl())
        {
            rtb_Merge1 = 4.1F * rtb_TmpSignalConversionAtVeEOCR_Pct_Purg;
        }
        else
        {
            rtb_Merge1 = 0.0F;
        }

        /* End of Switch: '<S1191>/Switch5' */

        /* Selector: '<S1198>/Selector1' incorporates:
         *  Constant: '<S1173>/Calib'
         */
        rtb_Merge4 = (Rte_Prm_KaOPTR_dm_FuelFlowDOD_KaOPTR_dm_FuelFlowDOD())[i +
            ((sint32)OHSR_ac_B.sf_XDataFractions_f.UpperIndex)];

        /* Merge: '<S1162>/Merge1' incorporates:
         *  Constant: '<S1173>/Calib'
         *  Constant: '<S1189>/Calib'
         *  Constant: '<S1190>/Calib'
         *  Gain: '<S1191>/Nm-rev//min to kW'
         *  Product: '<S1167>/Multiplication2'
         *  Product: '<S1191>/EngPower'
         *  Product: '<S1191>/Product1'
         *  Product: '<S1198>/Multiplication'
         *  Product: '<S1198>/Multiplication2'
         *  Selector: '<S1198>/Selector1'
         *  Selector: '<S1198>/Selector3'
         *  Sum: '<S1191>/Max_Power_Per_Fuel_Flow'
         *  Sum: '<S1191>/Power Loss'
         *  Sum: '<S1191>/Summation14'
         *  Sum: '<S1198>/Subtraction'
         *  Sum: '<S1198>/Subtraction1'
         *  Sum: '<S1198>/Subtraction4'
         *  Sum: '<S1198>/Subtraction5'
         */
        rtb_Merge1 = (((((((((((float32)
                               (Rte_Prm_KaOPTR_dm_FuelFlowDOD_KaOPTR_dm_FuelFlowDOD
                                ())[rtb_Switch5_jr_tmp + ((sint32)
                                OHSR_ac_B.sf_XDataFractions_f.UpperIndex)]) -
                              rtb_Merge4) * OHSR_ac_B.sf_XDataFractions_m.fra) +
                            rtb_Merge4) - rtb_Switch5_fw) *
                          OHSR_ac_B.sf_XDataFractions_f.fra) + rtb_Switch5_fw) -
                        rtb_Merge1) * ((float32)
                        Rte_Prm_KeOPTR_Cf_MaxEngPwrPerFuelFlow_KeOPTR_Cf_MaxEngPwrPerFuelFlow
                        ())) - ((rtb_TmpSignalConversionAtVeTISR_n_InputS *
                        rtb_TmpSignalConversionAtVeOITR_M_OptInp) *
                                0.000104719758F)) * ((float32)
            Rte_Prm_KeOPTR_r_EngPwrLossCostFactor_KeOPTR_r_EngPwrLossCostFactor());

        /* End of Outputs for SubSystem: '<S1162>/DOD' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S1162>/EngPwrLoss_Opt' incorporates:
         *  ActionPort: '<S1168>/Action Port'
         */
        /* Merge: '<S1162>/Merge1' incorporates:
         *  Constant: '<S935>/Constant Value10'
         *  Inport: '<S1168>/In1'
         */
        rtb_Merge1 = 0.0F;

        /* End of Outputs for SubSystem: '<S1162>/EngPwrLoss_Opt' */
        break;
    }

    /* RelationalOperator: '<S1152>/Not Equal' incorporates:
     *  Constant: '<S1165>/Constant'
     *  Constant: '<S1166>/Constant'
     *  Constant: '<S1176>/Calib'
     *  UnitDelay: '<S1152>/Unit Delay'
     */
    UnitDelay_DSTATE_f4 = (loopCond != OHSR_ac_DW.UnitDelay_DSTATE_nv3);

    /* Update for UnitDelay: '<S1152>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_nv3 = loopCond;

    /* Switch: '<S1150>/Switch1' incorporates:
     *  Abs: '<S1143>/Abs1'
     *  Constant: '<S1143>/Constant Value10'
     *  Lookup_n-D: '<S1157>/Vector'
     *  Product: '<S1143>/Product4'
     *  Sum: '<S1143>/Sum4'
     *  Sum: '<S1150>/Summation'
     *  UnitDelay: '<S1150>/Unit Delay'
     */
    if (UnitDelay_DSTATE_f4)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_nx = 0.0F;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_nx += look1_iflf_binlca_16a(rtb_Abs1, ((
            const float32 *)&(KxOHSR_r_EngPwrLossIntgrn_WeightFactr[0])), ((
            const float32 *)&(KtOHSR_r_EngPwrLossIntgrn_WeightFactr[0])), 6U) *
            rtb_Merge1;
    }

    /* End of Switch: '<S1150>/Switch1' */
    if (loopCond)
    {
        /* Sum: '<S1143>/Sum' incorporates:
         *  Constant: '<S1143>/Constant Value9'
         *  Constant: '<S1154>/Calib'
         *  Lookup_n-D: '<S1158>/Vector'
         *  Lookup_n-D: '<S1159>/Vector'
         *  Lookup_n-D: '<S1160>/Vector'
         *  MinMax: '<S1143>/MinMax3'
         *  Product: '<S1143>/Product'
         *  Product: '<S1143>/Product3'
         *  SignalConversion generated from: '<S2>/VeOSMR_n_TransOutSpd'
         *  SignalConversion generated from: '<S2>/VeVSDR_dn_StratNodot'
         *  SignalConversion generated from: '<S2>/dSOC_Read'
         *  UnitDelay: '<S1149>/Unit Delay'
         *  UnitDelay: '<S1150>/Unit Delay'
         */
        rtb_Merge1 = (look2_iflf_binlca_16a(HeOHSR_t_RngSel_dT *
                       OHSR_ac_DW.UnitDelay_DSTATE_g,
                       rtb_TmpSignalConversionAtdSOC_ReadOutpor, ((const float32
                         *)&(KxOHSR_r_NVHLimitBlnd_BattEnrgyFac[0])), ((const
                         float32 *)&(KyOHSR_r_NVHLimitBlnd_BattEnrgyFac[0])), ((
                         const float32 *)&(KtOHSR_r_NVHLimitBlnd_BattEnrgyFac[0])),
                       OHSR_ac_ConstP.pooled15, 6U) + look1_iflf_binlca_16a
                      (fmaxf(HeOHSR_t_RngSel_dT * OHSR_ac_DW.UnitDelay_DSTATE_nx,
                             0.0F), ((const float32 *)
                        &(KxOHSR_r_NVHLimitBlnd_EngEnrgyFac[0])), ((const
                         float32 *)&(KtOHSR_r_NVHLimitBlnd_EngEnrgyFac[0])), 6U))
            + look2_iflf_binlca_16a(rtb_TmpSignalConversionAtVeOSMR_n_TransO,
            rtb_TmpSignalConversionAtVeVSDR_dn_Strat, ((const float32 *)
            &(KxOHSR_r_NVHLimitBlnd_DrvbltyFac[0])), ((const float32 *)
            &(KyOHSR_r_NVHLimitBlnd_DrvbltyFac[0])), ((const float32 *)
            &(KtOHSR_r_NVHLimitBlnd_DrvbltyFac[0])), OHSR_ac_ConstP.pooled15, 6U);

        /* Outputs for Atomic SubSystem: '<S1143>/Limiter1' */
        /* Switch: '<S1161>/Switch1' incorporates:
         *  Constant: '<S1143>/Constant Value6'
         *  RelationalOperator: '<S1161>/Relational Operator'
         */
        if (1.0F < rtb_Merge1)
        {
            /* Switch: '<S1161>/Switch1' */
            rtb_Merge1 = 1.0F;
        }

        /* End of Switch: '<S1161>/Switch1' */

        /* Switch: '<S1161>/Switch' incorporates:
         *  Constant: '<S1143>/Constant Value5'
         *  RelationalOperator: '<S1161>/Relational Operator1'
         */
        if (rtb_Merge1 <= 0.0F)
        {
            /* Switch: '<S1143>/Switch1' */
            rtb_Merge1 = 0.0F;
        }

        /* End of Switch: '<S1161>/Switch' */
        /* End of Outputs for SubSystem: '<S1143>/Limiter1' */
    }
    else
    {
        /* Switch: '<S1143>/Switch1' incorporates:
         *  Constant: '<S1143>/Constant Value7'
         */
        rtb_Merge1 = 0.0F;
    }

    /* Sum: '<S1153>/Sum2' incorporates:
     *  UnitDelay: '<S1153>/Unit Delay'
     */
    rtb_Merge1 -= OHSR_ac_DW.UnitDelay_DSTATE_n;

    /* Outputs for Atomic SubSystem: '<S1153>/Limiter' */
    /* Switch: '<S1163>/Switch1' incorporates:
     *  Constant: '<S1156>/Calib'
     *  RelationalOperator: '<S1163>/Relational Operator'
     */
    if (KeOHSR_r_NVHLimtnBlndFac_MaxIncRate < rtb_Merge1)
    {
        /* Product: '<S921>/Multiplication' */
        rtb_Merge1 = KeOHSR_r_NVHLimtnBlndFac_MaxIncRate;
    }

    /* End of Switch: '<S1163>/Switch1' */

    /* Switch: '<S1163>/Switch' incorporates:
     *  Constant: '<S1155>/Calib'
     *  RelationalOperator: '<S1163>/Relational Operator1'
     */
    if (rtb_Merge1 <= KeOHSR_r_NVHLimtnBlndFac_MaxDecRate)
    {
        rtb_Merge1 = KeOHSR_r_NVHLimtnBlndFac_MaxDecRate;
    }

    /* End of Switch: '<S1163>/Switch' */
    /* End of Outputs for SubSystem: '<S1153>/Limiter' */

    /* Sum: '<S1153>/Sum3' incorporates:
     *  UnitDelay: '<S1153>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_n += rtb_Merge1;

    /* Sum: '<S1143>/Sum3' incorporates:
     *  Constant: '<S1143>/Constant Value8'
     *  UnitDelay: '<S1153>/Unit Delay'
     *  VariantMerge generated from: '<S935>/VariantSource3'
     */
    rtb_Merge1 = ((1.0F - OHSR_ac_DW.UnitDelay_DSTATE_n) * rtb_Selector1_h2) +
        (rtb_TmpSignalConversionAtVaOSMR_n_NTurb_[((sint32)
          rtb_VariantMerge_For_Variant_Source_Vari) - 1] *
         OHSR_ac_DW.UnitDelay_DSTATE_n);

    /* Outputs for Iterator SubSystem: '<S1144>/MaxInputSpeedToMinGear' incorporates:
     *  WhileIterator: '<S1201>/While Iterator'
     */
    s1205_iter = 1;

    /* SystemReset for Atomic SubSystem: '<S1201>/Hysteresis' */
    /* InitializeConditions for UnitDelay: '<S1203>/Unit Delay' */
    UnitDelay_DSTATE_f4 = false;

    /* End of SystemReset for SubSystem: '<S1201>/Hysteresis' */
    loopCond = true;
    while (loopCond && (s1205_iter <= 8))
    {
        /* Outputs for Atomic SubSystem: '<S1201>/Hysteresis' */
        /* Switch: '<S1203>/Switch1' incorporates:
         *  RelationalOperator: '<S1201>/Comparison'
         *  Selector: '<S1201>/Selector'
         *  UnitDelay: '<S1203>/Unit Delay'
         */
        UnitDelay_DSTATE_f4 = ((rtb_Merge1 >
                                rtb_TmpSignalConversionAtVaOSMR_n_NTurb_[s1205_iter])
                               || UnitDelay_DSTATE_f4);

        /* End of Outputs for SubSystem: '<S1201>/Hysteresis' */

        /* If: '<S1201>/If' incorporates:
         *  Inport: '<S1204>/Idx'
         *  UnitDelay: '<S1203>/Unit Delay'
         */
        if (UnitDelay_DSTATE_f4)
        {
            /* Outputs for IfAction SubSystem: '<S1201>/MinGr_Found' incorporates:
             *  ActionPort: '<S1204>/Action Port'
             */
            OHSR_ac_B.Idx_d = s1205_iter;

            /* Merge: '<S1201>/Merge1' incorporates:
             *  Constant: '<S1204>/FALSE Constant'
             *  Inport: '<S1204>/Idx'
             *  SignalConversion generated from: '<S1204>/Codn'
             */
            loopCond = false;

            /* End of Outputs for SubSystem: '<S1201>/MinGr_Found' */
        }

        /* End of If: '<S1201>/If' */
        s1205_iter++;
    }

    /* End of Outputs for SubSystem: '<S1144>/MaxInputSpeedToMinGear' */
    /* End of Outputs for SubSystem: '<S1143>/EdgeBi' */
    /* End of Outputs for SubSystem: '<S1143>/Accumulator Reset' */
    /* End of Outputs for SubSystem: '<S1143>/EdgeBi1' */
    /* End of Outputs for SubSystem: '<S1143>/Accumulator Reset1' */
    /* End of Outputs for SubSystem: '<S1143>/GradientLimiter' */
    /* End of Outputs for SubSystem: '<S935>/Determine_MinGrNVH_PostBlnd' */
#endif

    /* End of If: '<S1162>/If' */

    /* Switch: '<S557>/Switch3' incorporates:
     *  Inport: '<Root>/VeOSMR_b_NVHLimitation_Enbld'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

    (void)Rte_Read_VeOSMR_b_NVHLimitation_Enbld_Value(&rtb_Switch3_js);

    /* Switch: '<S557>/Switch3' incorporates:
     *  Inport: '<Root>/VeOSMR_b_NVHLimitation_Enbld'
     */
    rtb_Switch3_js = ((!rtb_TmpSignalConversionAtVeOSMR_b_PnLimi) &&
                      rtb_Switch3_js);

#endif

    /* End of Switch: '<S557>/Switch3' */

    /* RelationalOperator: '<S935>/Comparison5' incorporates:
     *  Constant: '<S1145>/Constant'
     *  Logic: '<S935>/Logical1'
     *  Switch: '<S935>/Switch1'
     *  VariantMerge generated from: '<S935>/VariantSource3'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

    if (rtb_Switch3_js && (((uint32)rtb_VariantMerge_For_Variant_Source_Vari) !=
                           CeSCOR_e_SG_Reverse))
    {
        /* MinMax: '<S935>/MinMax3' incorporates:
         *  DataTypeConversion: '<S935>/Data Type Conversion'
         */
        if (OHSR_ac_B.Idx_d > ((sint8)rtb_VariantMerge_For_Variant_Source_Vari))
        {
            /* Switch: '<S935>/Switch1' incorporates:
             *  DataTypeConversion: '<S935>/Data Type Conversion1'
             */
            rtb_Switch1_bf = (TeSCOR_e_OptGear_SG)OHSR_ac_B.Idx_d;
        }
        else
        {
            /* Switch: '<S935>/Switch1' incorporates:
             *  DataTypeConversion: '<S935>/Data Type Conversion1'
             */
            rtb_Switch1_bf = rtb_VariantMerge_For_Variant_Source_Vari;
        }

        /* End of MinMax: '<S935>/MinMax3' */
    }
    else
    {
        /* Switch: '<S935>/Switch1' */
        rtb_Switch1_bf = rtb_VariantMerge_For_Variant_Source_Vari;
    }

#endif

    /* End of RelationalOperator: '<S935>/Comparison5' */

    /* SignalConversion generated from: '<S935>/VariantSource2' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

    /* VariantMerge generated from: '<S935>/VariantSource2' incorporates:
     *  Switch: '<S935>/Switch1'
     */
    rtb_VariantMerge_For_Variant_Source_Va_p = rtb_Switch1_bf;

#else

    /* VariantMerge generated from: '<S935>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S2>/VeSCOR_e_SGrDsrd'
     *  SignalConversion generated from: '<S935>/VariantSource2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_p =
        rtb_TmpSignalConversionAtVeSCOR_e_SGrD_a;

#endif

    /* End of SignalConversion generated from: '<S935>/VariantSource2' */

    /* SignalConversion generated from: '<S935>/VariantSource1' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_11

    /* VariantMerge generated from: '<S935>/VariantSource1' incorporates:
     *  Switch: '<S935>/Switch1'
     */
    rtb_VariantMerge_For_Variant_Source_Va_j = rtb_Switch1_bf;

#else

    /* VariantMerge generated from: '<S935>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S2>/VeSCOR_e_SGrDsrd_EngOn'
     *  SignalConversion generated from: '<S935>/VariantSource1'
     */
    rtb_VariantMerge_For_Variant_Source_Va_j =
        rtb_TmpSignalConversionAtVeSCOR_e_SGrDsr;

#endif

    /* End of SignalConversion generated from: '<S935>/VariantSource1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSCOR_e_RngOpt' */
    (void)Rte_Read_VeSCOR_e_RngOpt_Value(&tmpRead_0);

    /* Inport: '<Root>/VeSCOR_e_RngDsrd_EngOn' */
    (void)Rte_Read_VeSCOR_e_RngDsrd_EngOn_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTED'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/OHSC_Range_Selection'
     */
    /* Outputs for Atomic SubSystem: '<S557>/Array_RngSel' */
    /* Sum: '<S933>/Sum' incorporates:
     *  Constant: '<S933>/Constant Value6'
     *  DataTypeConversion: '<S933>/Data Type Conversion2'
     *  DataTypeConversion: '<S933>/Data Type Conversion3'
     *  Product: '<S933>/Product'
     *  SignalConversion generated from: '<S2>/VeSCOR_e_RngDsrd'
     *  VariantMerge generated from: '<S935>/VariantSource2'
     */
    VeOHSC_e_RangeSel_BfrDbnc = (sint16)((9 * ((sint32)
        rtb_TmpSignalConversionAtVeSCOR_e_RngDsr)) + ((sint32)
        rtb_VariantMerge_For_Variant_Source_Va_p));

    /* Sum: '<S933>/Sum1' incorporates:
     *  Constant: '<S933>/Constant Value1'
     *  DataTypeConversion: '<S933>/Data Type Conversion1'
     *  DataTypeConversion: '<S933>/Data Type Conversion3'
     *  Inport: '<Root>/VeSCOR_e_RngOpt'
     *  Product: '<S933>/Product1'
     *  VariantMerge generated from: '<S935>/VariantSource2'
     */
    VeOHSC_e_RangeOpt_BfrDbnc = (sint16)((9 * ((sint32)tmpRead_0)) + ((sint32)
        rtb_VariantMerge_For_Variant_Source_Va_p));

    /* Sum: '<S933>/Sum2' incorporates:
     *  Constant: '<S933>/Constant Value2'
     *  DataTypeConversion: '<S933>/Data Type Conversion'
     *  DataTypeConversion: '<S933>/Data Type Conversion4'
     *  Inport: '<Root>/VeSCOR_e_RngDsrd_EngOn'
     *  Product: '<S933>/Product2'
     *  VariantMerge generated from: '<S935>/VariantSource1'
     */
    VeOHSC_e_RangeOn_BfrDbnc = (sint16)((9 * ((sint32)tmpRead)) + ((sint32)
        rtb_VariantMerge_For_Variant_Source_Va_j));

    /* End of Outputs for SubSystem: '<S557>/Array_RngSel' */

    /* Selector: '<S558>/Selector1' incorporates:
     *  Constant: '<S1287>/Calib'
     *  Constant: '<S558>/Constant Value1'
     *  Product: '<S558>/Product1'
     */
    VeOHSC_t_HoldCurrentRngDelay_Dsrd = ((float32)
        KaOHSR_t_RangeSelectionDelayTime_SG[(((rtb_MinMax_i - 1) * 54) +
        VeOHSC_e_RangeSel_BfrDbnc) - 1]) * 0.1F;

    /* Selector: '<S558>/Selector2' incorporates:
     *  Constant: '<S1287>/Calib'
     *  Constant: '<S558>/Constant Value3'
     *  Product: '<S558>/Product3'
     */
    VeOHSC_t_HoldCurrentRngDelay_Opt = ((float32)
        KaOHSR_t_RangeSelectionDelayTime_SG[(((rtb_MinMax2_hq - 1) * 54) +
        VeOHSC_e_RangeOpt_BfrDbnc) - 1]) * 0.1F;

    /* Selector: '<S558>/Selector3' incorporates:
     *  Constant: '<S1287>/Calib'
     *  Constant: '<S558>/Constant Value4'
     *  Product: '<S558>/Product5'
     */
    VeOHSC_t_HoldCurrentRngDelay_On = ((float32)
        KaOHSR_t_RangeSelectionDelayTime_SG[(((rtb_MinMax1_fj - 1) * 54) +
        VeOHSC_e_RangeOn_BfrDbnc) - 1]) * 0.1F;

    /* SwitchCase: '<S1298>/SwitchCase' incorporates:
     *  DataTypeConversion: '<S1298>/Data Type Conversion2'
     *  SignalConversion generated from: '<S2>/VeSCOR_e_RngDsrd'
     */
    switch (rtb_TmpSignalConversionAtVeSCOR_e_RngDsr)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S1298>/N' incorporates:
         *  ActionPort: '<S1351>/Action Port'
         */
        /* Merge: '<S1298>/Merge' incorporates:
         *  Lookup_n-D: '<S1357>/Vector'
         *  SignalConversion generated from: '<S2>/VeOSMR_n_TransOutSpd'
         *  SignalConversion generated from: '<S2>/VeSCOR_Pct_TtlPdlChange'
         */
        VeOHSC_r_HoldCurrentRngDelayFactor = look2_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP,
             rtb_TmpSignalConversionAtVeOSMR_n_TransO, ((const float32 *)
              &(KxOHSR_k_HoldCurrentRngDelayFactor_N[0])), ((const float32 *)
              &(KyOHSR_k_HoldCurrentRngDelayFactor_N[0])), ((const float32 *)
              &(KtOHSR_k_HoldCurrentRngDelayFactor_N[0])),
             OHSR_ac_ConstP.pooled16, 6U);

        /* End of Outputs for SubSystem: '<S1298>/N' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S1298>/MA' incorporates:
         *  ActionPort: '<S1349>/Action Port'
         */
        /* Merge: '<S1298>/Merge' incorporates:
         *  Lookup_n-D: '<S1355>/Vector'
         *  SignalConversion generated from: '<S2>/VeOSMR_n_TransOutSpd'
         *  SignalConversion generated from: '<S2>/VeSCOR_Pct_TtlPdlChange'
         */
        VeOHSC_r_HoldCurrentRngDelayFactor = look2_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP,
             rtb_TmpSignalConversionAtVeOSMR_n_TransO, ((const float32 *)
              &(KxOHSR_k_HoldCurrentRngDelayFactor_MA[0])), ((const float32 *)
              &(KyOHSR_k_HoldCurrentRngDelayFactor_MA[0])), ((const float32 *)
              &(KtOHSR_k_HoldCurrentRngDelayFactor_MA[0])),
             OHSR_ac_ConstP.pooled16, 6U);

        /* End of Outputs for SubSystem: '<S1298>/MA' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S1298>/MB' incorporates:
         *  ActionPort: '<S1350>/Action Port'
         */
        /* Merge: '<S1298>/Merge' incorporates:
         *  Lookup_n-D: '<S1356>/Vector'
         *  SignalConversion generated from: '<S2>/VeOSMR_n_TransOutSpd'
         *  SignalConversion generated from: '<S2>/VeSCOR_Pct_TtlPdlChange'
         */
        VeOHSC_r_HoldCurrentRngDelayFactor = look2_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP,
             rtb_TmpSignalConversionAtVeOSMR_n_TransO, ((const float32 *)
              &(KxOHSR_k_HoldCurrentRngDelayFactor_MB[0])), ((const float32 *)
              &(KyOHSR_k_HoldCurrentRngDelayFactor_MB[0])), ((const float32 *)
              &(KtOHSR_k_HoldCurrentRngDelayFactor_MB[0])),
             OHSR_ac_ConstP.pooled16, 6U);

        /* End of Outputs for SubSystem: '<S1298>/MB' */
        break;

      case 3:
        /* Outputs for IfAction SubSystem: '<S1298>/Gr' incorporates:
         *  ActionPort: '<S1348>/Action Port'
         */
        /* Merge: '<S1298>/Merge' incorporates:
         *  Lookup_n-D: '<S1354>/Vector'
         *  SignalConversion generated from: '<S2>/VeOSMR_n_TransOutSpd'
         *  SignalConversion generated from: '<S2>/VeSCOR_Pct_TtlPdlChange'
         */
        VeOHSC_r_HoldCurrentRngDelayFactor = look2_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP,
             rtb_TmpSignalConversionAtVeOSMR_n_TransO, ((const float32 *)
              &(KxOHSR_k_HoldCurrentRngDelayFactor_Gr[0])), ((const float32 *)
              &(KyOHSR_k_HoldCurrentRngDelayFactor_Gr[0])), ((const float32 *)
              &(KtOHSR_k_HoldCurrentRngDelayFactor_Gr[0])),
             OHSR_ac_ConstP.pooled16, 6U);

        /* End of Outputs for SubSystem: '<S1298>/Gr' */
        break;

      case 4:
        /* Outputs for IfAction SubSystem: '<S1298>/EVM' incorporates:
         *  ActionPort: '<S1346>/Action Port'
         */
        /* Merge: '<S1298>/Merge' incorporates:
         *  Lookup_n-D: '<S1352>/Vector'
         *  SignalConversion generated from: '<S2>/VeOSMR_n_TransOutSpd'
         *  SignalConversion generated from: '<S2>/VeSCOR_Pct_TtlPdlChange'
         */
        VeOHSC_r_HoldCurrentRngDelayFactor = look2_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP,
             rtb_TmpSignalConversionAtVeOSMR_n_TransO, ((const float32 *)
              &(KxOHSR_k_HoldCurrentRngDelayFactor_EVM[0])), ((const float32 *)
              &(KyOHSR_k_HoldCurrentRngDelayFactor_EVM[0])), ((const float32 *)
              &(KtOHSR_k_HoldCurrentRngDelayFactor_EVM[0])),
             OHSR_ac_ConstP.pooled16, 6U);

        /* End of Outputs for SubSystem: '<S1298>/EVM' */
        break;

      case 5:
        /* Outputs for IfAction SubSystem: '<S1298>/EVN' incorporates:
         *  ActionPort: '<S1347>/Action Port'
         */
        /* Merge: '<S1298>/Merge' incorporates:
         *  Lookup_n-D: '<S1353>/Vector'
         *  SignalConversion generated from: '<S2>/VeOSMR_n_TransOutSpd'
         *  SignalConversion generated from: '<S2>/VeSCOR_Pct_TtlPdlChange'
         */
        VeOHSC_r_HoldCurrentRngDelayFactor = look2_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP,
             rtb_TmpSignalConversionAtVeOSMR_n_TransO, ((const float32 *)
              &(KxOHSR_k_HoldCurrentRngDelayFactor_EVN[0])), ((const float32 *)
              &(KyOHSR_k_HoldCurrentRngDelayFactor_EVN[0])), ((const float32 *)
              &(KtOHSR_k_HoldCurrentRngDelayFactor_EVN[0])),
             OHSR_ac_ConstP.pooled16, 6U);

        /* End of Outputs for SubSystem: '<S1298>/EVN' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of SwitchCase: '<S1298>/SwitchCase' */

    /* Product: '<S558>/Product' */
    VaOHSC_t_HoldCurrentRngDelayScaled[0] = VeOHSC_t_HoldCurrentRngDelay_Dsrd *
        VeOHSC_r_HoldCurrentRngDelayFactor;
    VaOHSC_t_HoldCurrentRngDelayScaled[1] = VeOHSC_t_HoldCurrentRngDelay_Opt *
        VeOHSC_r_HoldCurrentRngDelayFactor;
    VaOHSC_t_HoldCurrentRngDelayScaled[2] = VeOHSC_t_HoldCurrentRngDelay_On *
        VeOHSC_r_HoldCurrentRngDelayFactor;
    for (i = 0; i < 3; i++)
    {
        /* UnitDelay: '<S834>/Unit Delay' incorporates:
         *  Constant: '<S1286>/Calib'
         *  Sum: '<S1301>/Summation1'
         */
        rtb_Sum1_li[i] = HeOHSR_t_RngSel_dT + VaOHSC_t_CurrentRngTime[(i)];
    }

    /* Switch: '<S1301>/Switch2' incorporates:
     *  Logic: '<S558>/Logical3'
     *  RelationalOperator: '<S558>/Comparison1'
     *  RelationalOperator: '<S558>/Comparison4'
     *  UnitDelay: '<S558>/Unit Delay3'
     */
    if ((OHSR_ac_DW.UnitDelay1_DSTATE_d[0] != VeOHSC_e_RangeSel_BfrDbnc) ||
            (rtb_MinMax_i != OHSR_ac_DW.UnitDelay3_DSTATE_le[0]))
    {
        /* Switch: '<S1301>/Switch2' incorporates:
         *  Constant: '<S1301>/Constant Value1'
         */
        VaOHSC_t_CurrentRngTime[0] = 0.0F;
    }
    else
    {
        /* Switch: '<S1301>/Switch2' incorporates:
         *  MinMax: '<S1301>/Minimum1'
         */
        VaOHSC_t_CurrentRngTime[0] = fminf(VaOHSC_t_HoldCurrentRngDelayScaled[0],
            rtb_Sum1_li[0]);
    }

    if ((OHSR_ac_DW.UnitDelay1_DSTATE_d[1] != VeOHSC_e_RangeOpt_BfrDbnc) ||
            (rtb_MinMax2_hq != OHSR_ac_DW.UnitDelay3_DSTATE_le[1]))
    {
        /* Switch: '<S1301>/Switch2' incorporates:
         *  Constant: '<S1301>/Constant Value1'
         */
        VaOHSC_t_CurrentRngTime[1] = 0.0F;
    }
    else
    {
        /* Switch: '<S1301>/Switch2' incorporates:
         *  MinMax: '<S1301>/Minimum1'
         */
        VaOHSC_t_CurrentRngTime[1] = fminf(VaOHSC_t_HoldCurrentRngDelayScaled[1],
            rtb_Sum1_li[1]);
    }

    if ((OHSR_ac_DW.UnitDelay1_DSTATE_d[2] != VeOHSC_e_RangeOn_BfrDbnc) ||
            (rtb_MinMax1_fj != OHSR_ac_DW.UnitDelay3_DSTATE_le[2]))
    {
        /* Switch: '<S1301>/Switch2' incorporates:
         *  Constant: '<S1301>/Constant Value1'
         */
        VaOHSC_t_CurrentRngTime[2] = 0.0F;
    }
    else
    {
        /* Switch: '<S1301>/Switch2' incorporates:
         *  MinMax: '<S1301>/Minimum1'
         */
        VaOHSC_t_CurrentRngTime[2] = fminf(VaOHSC_t_HoldCurrentRngDelayScaled[2],
            rtb_Sum1_li[2]);
    }

    /* End of Switch: '<S1301>/Switch2' */
    for (i = 0; i < 3; i++)
    {
        /* RelationalOperator: '<S1301>/Greater  Than1' */
        rtb_GreaterThan1[i] = (VaOHSC_t_CurrentRngTime[(i)] <
                               VaOHSC_t_HoldCurrentRngDelayScaled[(i)]);
    }

    /* MATLAB Function: '<S1311>/MATLAB Function' */
    OHSR_ac_MATLABFunction_i(rtb_MinMax_i, &OHSR_ac_B.sf_MATLABFunction_e);

    /* If: '<S1303>/If' incorporates:
     *  Constant: '<S1303>/Constant Value10'
     *  Constant: '<S1303>/Constant Value11'
     *  Constant: '<S1303>/Constant Value12'
     *  Constant: '<S1303>/Constant Value13'
     *  Constant: '<S1303>/Constant Value14'
     *  Constant: '<S558>/Constant Value'
     *  RelationalOperator: '<S1303>/Comparison1'
     *  RelationalOperator: '<S1303>/Comparison2'
     *  RelationalOperator: '<S1303>/Comparison3'
     *  RelationalOperator: '<S1303>/Comparison4'
     *  RelationalOperator: '<S1303>/Comparison5'
     *  Sum: '<S1303>/Sum16'
     */
    if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_e.y) - 1))))
        <= 8)
    {
        /* Outputs for IfAction SubSystem: '<S1303>/If Action Subsystem' incorporates:
         *  ActionPort: '<S1305>/Action Port'
         */
        OHSR_ac_IfActionSubsystem((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_e.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1303>/If Action Subsystem' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_e.y)
                 - 1)))) <= 17)
    {
        /* Outputs for IfAction SubSystem: '<S1303>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S1306>/Action Port'
         */
        OHSR_ac_IfActionSubsystem1((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_e.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1303>/If Action Subsystem1' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_e.y)
                 - 1)))) <= 26)
    {
        /* Outputs for IfAction SubSystem: '<S1303>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S1307>/Action Port'
         */
        OHSR_ac_IfActionSubsystem2((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_e.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1303>/If Action Subsystem2' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_e.y)
                 - 1)))) <= 35)
    {
        /* Outputs for IfAction SubSystem: '<S1303>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S1308>/Action Port'
         */
        OHSR_ac_IfActionSubsystem3((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_e.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1303>/If Action Subsystem3' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_e.y)
                 - 1)))) <= 44)
    {
        /* Outputs for IfAction SubSystem: '<S1303>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S1309>/Action Port'
         */
        OHSR_ac_IfActionSubsystem4((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_e.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1303>/If Action Subsystem4' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1303>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S1310>/Action Port'
         */
        OHSR_ac_IfActionSubsystem5((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_e.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1303>/If Action Subsystem5' */
    }

    /* End of If: '<S1303>/If' */

    /* MATLAB Function: '<S1302>/MATLAB Function' incorporates:
     *  Selector: '<S1291>/Selector'
     */
    /* MATLAB Function 'OPTL_StratIndexConv16Bit/GetBitFrom16BitRegister/MATLAB Function': '<S1304>:1' */
    /* '<S1304>:1:2' */
    bitmask = 0U;

    /* '<S1304>:1:3' */
    rtb_AND_er = true;

    /* '<S1304>:1:4' */
    if (((sint32)rtb_Merge1_ib) < 16)
    {
        /* '<S1304>:1:4' */
        /* '<S1304>:1:5' */
        bitmask = (uint16)((uint32)(((uint32)1) << ((uint32)rtb_Merge1_ib)));
    }

    /* '<S1304>:1:7' */
    if ((((sint32)
            rtb_TmpSignalConversionAtVaOSMR_d_FinalA[rtb_DataTypeConversion1_l])
         & ((sint32)bitmask)) == 0)
    {
        /* '<S1304>:1:8' */
        /* '<S1304>:1:9' */
        rtb_AND_er = false;
    }

    /* SignalConversion generated from: '<S558>/XeOHSR_b_EngCalc_Enbl' incorporates:
     *  Logic: '<S1279>/AND'
     *  Logic: '<S1279>/OR1'
     *  UnitDelay: '<S834>/Unit Delay'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    /* Outputs for Atomic SubSystem: '<S558>/Turn Off Delay Time with Resetable delay' */
    /* Outputs for Atomic SubSystem: '<S558>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S558>/EdgeRising' */
    /* Logic: '<S1282>/AND' incorporates:
     *  Logic: '<S1282>/OR1'
     *  UnitDelay: '<S1282>/Unit Delay'
     */
    rtb_AND_fo = (rtb_TmpSignalConversionAtVeOSMR_b_EngRev &&
                  (!OHSR_ac_DW.UnitDelay_DSTATE_mu));

    /* Update for UnitDelay: '<S1282>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_mu = rtb_TmpSignalConversionAtVeOSMR_b_EngRev;

    /* Outputs for Atomic SubSystem: '<S1299>/Edge Falling with Resetable Delay' */
    /* Logic: '<S1358>/OR1' */
    rtb_TmpSignalConversionAtVeOSMR_b_EngRev = !rtb_AND_fo;
    for (i = 0; i < 3; i++)
    {
        loopCond = rtb_GreaterThan1[i];

        /* Logic: '<S1279>/AND' incorporates:
         *  Logic: '<S1279>/OR1'
         *  UnitDelay: '<S1279>/Unit Delay'
         */
        UnitDelay_DSTATE_f4 = ((!loopCond) && (OHSR_ac_DW.UnitDelay_DSTATE_lnd[i]));

        /* Update for UnitDelay: '<S1279>/Unit Delay' */
        OHSR_ac_DW.UnitDelay_DSTATE_lnd[i] = loopCond;
        loopCond = !UnitDelay_DSTATE_f4;

        /* Switch: '<S1360>/Switch1' incorporates:
         *  UnitDelay: '<S1360>/Unit Delay'
         */
        rtb_Logical2_jm = (loopCond && (OHSR_ac_DW.UnitDelay_DSTATE_lv[i]));

        /* Update for UnitDelay: '<S1360>/Unit Delay' incorporates:
         *  Switch: '<S1360>/Switch3'
         */
        OHSR_ac_DW.UnitDelay_DSTATE_lv[i] = (loopCond && rtb_AND_fo);

        /* Switch: '<S1299>/Switch' incorporates:
         *  Logic: '<S1358>/AND'
         *  Switch: '<S1359>/Switch1'
         */
        if (rtb_TmpSignalConversionAtVeOSMR_b_EngRev && rtb_Logical2_jm)
        {
            /* UnitDelay: '<S834>/Unit Delay' incorporates:
             *  Constant: '<S1290>/Calib'
             */
            rtb_Merge1 = KeOHSR_t_EngRevLim;
        }
        else
        {
            if (UnitDelay_DSTATE_f4)
            {
                /* Switch: '<S1359>/Switch1' incorporates:
                 *  Constant: '<S1299>/Constant1'
                 */
                rtb_Merge1 = 0.0F;
            }
            else
            {
                /* Switch: '<S1359>/Switch1' incorporates:
                 *  UnitDelay: '<S1359>/Unit Delay'
                 */
                rtb_Merge1 = OHSR_ac_DW.UnitDelay_DSTATE_h[i];
            }

            /* UnitDelay: '<S834>/Unit Delay' incorporates:
             *  Constant: '<S1286>/Calib'
             *  Constant: '<S1299>/Constant Value1'
             *  MinMax: '<S1299>/Minimum'
             *  Sum: '<S1299>/Summation'
             */
            rtb_Merge1 = fmaxf(rtb_Merge1 - HeOHSR_t_RngSel_dT, 0.0F);
        }

        /* End of Switch: '<S1299>/Switch' */

        /* Logic: '<S1299>/AND' incorporates:
         *  Constant: '<S1299>/Constant Value2'
         *  RelationalOperator: '<S1299>/Greater  Than'
         */
        VaOHSC_b_EmgRevLim_Actv[(i)] = (rtb_AND_fo || (rtb_Merge1 > 0.0F));

        /* Switch: '<S1359>/Switch3' incorporates:
         *  Constant: '<S1299>/Constant1'
         *  UnitDelay: '<S1359>/Unit Delay'
         */
        if (UnitDelay_DSTATE_f4)
        {
            OHSR_ac_DW.UnitDelay_DSTATE_h[i] = 0.0F;
        }
        else
        {
            OHSR_ac_DW.UnitDelay_DSTATE_h[i] = rtb_Merge1;
        }

        /* End of Switch: '<S1359>/Switch3' */
        rtb_AND_nh[i] = VaOHSC_b_EmgRevLim_Actv[(i)];
        rtb_Sum1_li[i] = rtb_Merge1;
    }

    /* End of Outputs for SubSystem: '<S1299>/Edge Falling with Resetable Delay' */
    /* End of Outputs for SubSystem: '<S558>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S558>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S558>/Turn Off Delay Time with Resetable delay' */
#else

    for (i = 0; i < 3; i++)
    {
        /* UnitDelay: '<S836>/Unit Delay' incorporates:
         *  SignalConversion generated from: '<S558>/XeOHSR_b_EngCalc_Enbl'
         */
        rtb_AND_nh[i] = false;
    }

#endif

    /* End of SignalConversion generated from: '<S558>/XeOHSR_b_EngCalc_Enbl' */

    /* If: '<S1336>/If' incorporates:
     *  Constant: '<S1285>/Calib'
     *  Constant: '<S1336>/Constant Value10'
     *  Constant: '<S1336>/Constant Value11'
     *  Constant: '<S1336>/Constant Value12'
     *  Constant: '<S1336>/Constant Value13'
     *  Constant: '<S1336>/Constant Value14'
     *  Constant: '<S558>/Constant Value5'
     *  Inport: '<Root>/VaOSMR_d_HardAllwdRaw'
     *  Logic: '<S558>/Logical'
     *  Logic: '<S558>/Logical4'
     *  Logic: '<S558>/Logical6'
     *  Logic: '<S558>/Logical7'
     *  MATLAB Function: '<S1335>/MATLAB Function'
     *  MATLAB Function: '<S1344>/MATLAB Function'
     *  RelationalOperator: '<S1336>/Comparison1'
     *  RelationalOperator: '<S1336>/Comparison2'
     *  RelationalOperator: '<S1336>/Comparison3'
     *  RelationalOperator: '<S1336>/Comparison4'
     *  RelationalOperator: '<S1336>/Comparison5'
     *  Selector: '<S1294>/Selector'
     *  Selector: '<S558>/Selector'
     *  Selector: '<S558>/Selector7'
     *  SignalConversion generated from: '<S558>/XeOHSR_b_EngCalc_Enbl1'
     *  Sum: '<S1336>/Sum16'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    /* Outputs for Atomic SubSystem: '<S558>/Turn Off Delay Time with Resetable delay1' */
    /* Outputs for Atomic SubSystem: '<S558>/EdgeFalling2' */
    /* Outputs for Atomic SubSystem: '<S558>/EdgeRising2' */
    /* Outputs for Atomic SubSystem: '<S558>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S558>/EdgeFalling1' */
    rtb_AND_ck = HaOHSR_b_DsrdEngStMap[VeOHSC_e_RangeOpt_BfrDbnc - 1];

    /* Logic: '<S1280>/AND' incorporates:
     *  Constant: '<S1285>/Calib'
     *  Logic: '<S1280>/OR1'
     *  UnitDelay: '<S1280>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeOSMR_b_EngRev = ((!rtb_AND_ck) &&
        (OHSR_ac_DW.UnitDelay_DSTATE_hf));

    /* Update for UnitDelay: '<S1280>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_hf = rtb_AND_ck;

    /* Logic: '<S558>/Logical' */
    rtb_TmpSignalConversionAtVeOSMR_b_EngRev =
        (rtb_TmpSignalConversionAtVeOSMR_b_EngRev &&
         (!rtb_TmpSignalConversionAtVeSTRR_b_EngOff));

    /* Logic: '<S1283>/AND' incorporates:
     *  Logic: '<S1283>/OR1'
     *  UnitDelay: '<S1283>/Unit Delay'
     */
    rtb_AND_ck = (rtb_TmpSignalConversionAtVeOSMR_b_EngRev &&
                  (!OHSR_ac_DW.UnitDelay_DSTATE_jq));

    /* Update for UnitDelay: '<S1283>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_jq = rtb_TmpSignalConversionAtVeOSMR_b_EngRev;

    /* Logic: '<S1284>/AND' incorporates:
     *  Logic: '<S1284>/OR1'
     *  UnitDelay: '<S1284>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeOSMR_b_EngRev =
        (rtb_TmpSignalConversionAtVeSTRR_b_EngOff &&
         (!OHSR_ac_DW.UnitDelay_DSTATE_fy));

    /* Update for UnitDelay: '<S1284>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_fy = rtb_TmpSignalConversionAtVeSTRR_b_EngOff;

    /* Logic: '<S1281>/AND' incorporates:
     *  Constant: '<S558>/Constant'
     *  Logic: '<S1281>/OR1'
     *  UnitDelay: '<S1281>/Unit Delay'
     */
    loopCond = ((!rtb_GreaterThan1[0]) && (OHSR_ac_DW.UnitDelay_DSTATE_hz));

    /* Update for UnitDelay: '<S1281>/Unit Delay' incorporates:
     *  Constant: '<S558>/Constant'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_hz = rtb_GreaterThan1[0];

    /* Logic: '<S558>/Logical6' */
    loopCond = (rtb_TmpSignalConversionAtVeOSMR_b_EngRev || loopCond);

    /* Outputs for Atomic SubSystem: '<S1300>/Edge Falling with Resetable Delay' */
    /* Switch: '<S1363>/Switch1' */
    if (loopCond)
    {
        /* Selector: '<S546>/Selector2' incorporates:
         *  Constant: '<S1361>/Constant1'
         */
        rtb_TmpSignalConversionAtVeOSMR_b_EngRev = false;
    }
    else
    {
        /* Selector: '<S546>/Selector2' incorporates:
         *  UnitDelay: '<S1363>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeOSMR_b_EngRev =
            OHSR_ac_DW.UnitDelay_DSTATE_k2;
    }

    /* End of Switch: '<S1363>/Switch1' */

    /* Switch: '<S1363>/Switch3' incorporates:
     *  UnitDelay: '<S1363>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_k2 = ((!loopCond) && rtb_AND_ck);

    /* Switch: '<S1300>/Switch' incorporates:
     *  Logic: '<S1361>/AND'
     *  Logic: '<S1361>/OR1'
     *  Switch: '<S1362>/Switch1'
     */
    if ((!rtb_AND_ck) && rtb_TmpSignalConversionAtVeOSMR_b_EngRev)
    {
        /* Sum: '<S1209>/Sum2' incorporates:
         *  Constant: '<S1289>/Calib'
         */
        rtb_Abs1 = KeOHSR_t_EngOffAlwdUpdate_DelayTime;
    }
    else
    {
        if (loopCond)
        {
            /* Switch: '<S1362>/Switch1' incorporates:
             *  Constant: '<S1300>/Constant1'
             */
            OHSR_ac_DW.UnitDelay_DSTATE_c = 0.0F;
        }

        /* Sum: '<S1209>/Sum2' incorporates:
         *  Constant: '<S1286>/Calib'
         *  Constant: '<S1300>/Constant Value1'
         *  MinMax: '<S1300>/Minimum'
         *  Sum: '<S1300>/Summation'
         */
        rtb_Abs1 = fmaxf(OHSR_ac_DW.UnitDelay_DSTATE_c - HeOHSR_t_RngSel_dT,
                         0.0F);
    }

    /* End of Switch: '<S1300>/Switch' */
    /* End of Outputs for SubSystem: '<S1300>/Edge Falling with Resetable Delay' */

    /* Logic: '<S1300>/AND' incorporates:
     *  Constant: '<S1300>/Constant Value2'
     *  RelationalOperator: '<S1300>/Greater  Than'
     */
    VeOHSC_b_EngStUpdtDbnc_AllwdOvrrd = (rtb_AND_ck || (rtb_Abs1 > 0.0F));

    /* Switch: '<S1362>/Switch3' */
    if (loopCond)
    {
        /* Switch: '<S1362>/Switch1' incorporates:
         *  Constant: '<S1300>/Constant1'
         *  UnitDelay: '<S1362>/Unit Delay'
         */
        OHSR_ac_DW.UnitDelay_DSTATE_c = 0.0F;
    }
    else
    {
        /* Switch: '<S1362>/Switch1' incorporates:
         *  UnitDelay: '<S1362>/Unit Delay'
         */
        OHSR_ac_DW.UnitDelay_DSTATE_c = rtb_Abs1;
    }

    /* End of Switch: '<S1362>/Switch3' */
    OHSR_ac_MATLABFunction_i(rtb_MinMax_i, &OHSR_ac_B.sf_MATLABFunction_g2);
    if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_g2.y) -
            1)))) <= 8)
    {
        /* Outputs for IfAction SubSystem: '<S1336>/If Action Subsystem' incorporates:
         *  ActionPort: '<S1338>/Action Port'
         */
        OHSR_ac_IfActionSubsystem((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_g2.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1336>/If Action Subsystem' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_g2.y) - 1)))) <= 17)
    {
        /* Outputs for IfAction SubSystem: '<S1336>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S1339>/Action Port'
         */
        OHSR_ac_IfActionSubsystem1((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_g2.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1336>/If Action Subsystem1' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_g2.y) - 1)))) <= 26)
    {
        /* Outputs for IfAction SubSystem: '<S1336>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S1340>/Action Port'
         */
        OHSR_ac_IfActionSubsystem2((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_g2.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1336>/If Action Subsystem2' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_g2.y) - 1)))) <= 35)
    {
        /* Outputs for IfAction SubSystem: '<S1336>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S1341>/Action Port'
         */
        OHSR_ac_IfActionSubsystem3((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_g2.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1336>/If Action Subsystem3' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_g2.y) - 1)))) <= 44)
    {
        /* Outputs for IfAction SubSystem: '<S1336>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S1342>/Action Port'
         */
        OHSR_ac_IfActionSubsystem4((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_g2.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1336>/If Action Subsystem4' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1336>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S1343>/Action Port'
         */
        OHSR_ac_IfActionSubsystem5((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_g2.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1336>/If Action Subsystem5' */
    }

    (void)Rte_Read_VaOSMR_d_HardAllwdRaw_Value(tmpRead_m);

    /* MATLAB Function 'OPTL_StratIndexConv16Bit/GetBitFrom16BitRegister/MATLAB Function': '<S1337>:1' */
    /* '<S1337>:1:2' */
    bitmask = 0U;

    /* '<S1337>:1:3' */
    rtb_TmpSignalConversionAtVeOSMR_b_EngRev = true;

    /* '<S1337>:1:4' */
    if (((sint32)rtb_Merge1_ib) < 16)
    {
        /* '<S1337>:1:4' */
        /* '<S1337>:1:5' */
        bitmask = (uint16)((uint32)(((uint32)1) << ((uint32)rtb_Merge1_ib)));
    }

    /* '<S1337>:1:7' */
    if ((((sint32)tmpRead_m[rtb_DataTypeConversion1_l]) & ((sint32)bitmask)) ==
            0)
    {
        /* '<S1337>:1:8' */
        /* '<S1337>:1:9' */
        rtb_TmpSignalConversionAtVeOSMR_b_EngRev = false;
    }

    /* Selector: '<S546>/Selector3' incorporates:
     *  Constant: '<S1288>/Calib'
     *  Constant: '<S1336>/Constant Value10'
     *  Constant: '<S1336>/Constant Value11'
     *  Constant: '<S1336>/Constant Value12'
     *  Constant: '<S1336>/Constant Value13'
     *  Constant: '<S1336>/Constant Value14'
     *  Constant: '<S558>/Constant Value5'
     *  Inport: '<Root>/VaOSMR_d_HardAllwdRaw'
     */
    rtb_AND_ck = (((VeOHSC_b_EngStUpdtDbnc_AllwdOvrrd) &&
                   rtb_TmpSignalConversionAtVeOSMR_b_EngRev) &&
                  (KeOHSR_b_EngStUpdtDelayProtectn_Enbl));

    /* End of Outputs for SubSystem: '<S558>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S558>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S558>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S558>/EdgeFalling2' */
    /* End of Outputs for SubSystem: '<S558>/Turn Off Delay Time with Resetable delay1' */
#else

    /* Selector: '<S546>/Selector3' incorporates:
     *  Constant: '<S558>/FALSE Constant'
     *  SignalConversion generated from: '<S558>/XeOHSR_b_EngCalc_Enbl1'
     */
    rtb_AND_ck = false;

#endif

    /* End of If: '<S1336>/If' */

    /* Logic: '<S558>/Logical1' incorporates:
     *  MATLAB Function: '<S1302>/MATLAB Function'
     */
    VeOHSC_b_CurrentRngStAlwd = ((rtb_AND_er || (rtb_AND_nh[0])) || rtb_AND_ck);

    /* MATLAB Function: '<S1322>/MATLAB Function' */
    OHSR_ac_MATLABFunction_i(rtb_MinMax2_hq, &OHSR_ac_B.sf_MATLABFunction_k);

    /* If: '<S1314>/If' incorporates:
     *  Constant: '<S1314>/Constant Value10'
     *  Constant: '<S1314>/Constant Value11'
     *  Constant: '<S1314>/Constant Value12'
     *  Constant: '<S1314>/Constant Value13'
     *  Constant: '<S1314>/Constant Value14'
     *  Constant: '<S558>/Constant Value7'
     *  RelationalOperator: '<S1314>/Comparison1'
     *  RelationalOperator: '<S1314>/Comparison2'
     *  RelationalOperator: '<S1314>/Comparison3'
     *  RelationalOperator: '<S1314>/Comparison4'
     *  RelationalOperator: '<S1314>/Comparison5'
     *  Sum: '<S1314>/Sum16'
     */
    if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_k.y) - 1))))
        <= 8)
    {
        /* Outputs for IfAction SubSystem: '<S1314>/If Action Subsystem' incorporates:
         *  ActionPort: '<S1316>/Action Port'
         */
        OHSR_ac_IfActionSubsystem((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_k.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1314>/If Action Subsystem' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_k.y)
                 - 1)))) <= 17)
    {
        /* Outputs for IfAction SubSystem: '<S1314>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S1317>/Action Port'
         */
        OHSR_ac_IfActionSubsystem1((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_k.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1314>/If Action Subsystem1' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_k.y)
                 - 1)))) <= 26)
    {
        /* Outputs for IfAction SubSystem: '<S1314>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S1318>/Action Port'
         */
        OHSR_ac_IfActionSubsystem2((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_k.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1314>/If Action Subsystem2' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_k.y)
                 - 1)))) <= 35)
    {
        /* Outputs for IfAction SubSystem: '<S1314>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S1319>/Action Port'
         */
        OHSR_ac_IfActionSubsystem3((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_k.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1314>/If Action Subsystem3' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_k.y)
                 - 1)))) <= 44)
    {
        /* Outputs for IfAction SubSystem: '<S1314>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S1320>/Action Port'
         */
        OHSR_ac_IfActionSubsystem4((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_k.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1314>/If Action Subsystem4' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1314>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S1321>/Action Port'
         */
        OHSR_ac_IfActionSubsystem5((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_k.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1314>/If Action Subsystem5' */
    }

    /* End of If: '<S1314>/If' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VaOSMR_d_FinalAllwdOpt' */
    (void)Rte_Read_VaOSMR_d_FinalAllwdOpt_Value(tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTED'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/OHSC_Range_Selection'
     */
    /* MATLAB Function: '<S1313>/MATLAB Function' incorporates:
     *  Selector: '<S1292>/Selector'
     */
    /* MATLAB Function 'OPTL_StratIndexConv16Bit/GetBitFrom16BitRegister/MATLAB Function': '<S1315>:1' */
    /* '<S1315>:1:2' */
    bitmask = 0U;

    /* '<S1315>:1:3' */
    rtb_AND_er = true;

    /* '<S1315>:1:4' */
    if (((sint32)rtb_Merge1_ib) < 16)
    {
        /* '<S1315>:1:4' */
        /* '<S1315>:1:5' */
        bitmask = (uint16)((uint32)(((uint32)1) << ((uint32)rtb_Merge1_ib)));
    }

    /* '<S1315>:1:7' */
    if ((((sint32)tmpRead_f[rtb_DataTypeConversion1_l]) & ((sint32)bitmask)) ==
            0)
    {
        /* '<S1315>:1:8' */
        /* '<S1315>:1:9' */
        rtb_AND_er = false;
    }

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeOSMR_b_EngOffAllwdOpt' */
    (void)Rte_Read_VeOSMR_b_EngOffAllwdOpt_Value(&tmpRead_g);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTED'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/OHSC_Range_Selection'
     */
    /* Switch: '<S558>/Switch1' incorporates:
     *  MATLAB Function: '<S1313>/MATLAB Function'
     */
    VeOHSC_b_CurrentRngOptAlwd = ((!tmpRead_g) || rtb_AND_er);

    /* MATLAB Function: '<S1333>/MATLAB Function' */
    OHSR_ac_MATLABFunction_i(rtb_MinMax1_fj, &OHSR_ac_B.sf_MATLABFunction_gu);

    /* If: '<S1325>/If' incorporates:
     *  Constant: '<S1325>/Constant Value10'
     *  Constant: '<S1325>/Constant Value11'
     *  Constant: '<S1325>/Constant Value12'
     *  Constant: '<S1325>/Constant Value13'
     *  Constant: '<S1325>/Constant Value14'
     *  Constant: '<S558>/Constant Value2'
     *  RelationalOperator: '<S1325>/Comparison1'
     *  RelationalOperator: '<S1325>/Comparison2'
     *  RelationalOperator: '<S1325>/Comparison3'
     *  RelationalOperator: '<S1325>/Comparison4'
     *  RelationalOperator: '<S1325>/Comparison5'
     *  Sum: '<S1325>/Sum16'
     */
    if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_gu.y) -
            1)))) <= 8)
    {
        /* Outputs for IfAction SubSystem: '<S1325>/If Action Subsystem' incorporates:
         *  ActionPort: '<S1327>/Action Port'
         */
        OHSR_ac_IfActionSubsystem((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_gu.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1325>/If Action Subsystem' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_gu.y) - 1)))) <= 17)
    {
        /* Outputs for IfAction SubSystem: '<S1325>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S1328>/Action Port'
         */
        OHSR_ac_IfActionSubsystem1((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_gu.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1325>/If Action Subsystem1' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_gu.y) - 1)))) <= 26)
    {
        /* Outputs for IfAction SubSystem: '<S1325>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S1329>/Action Port'
         */
        OHSR_ac_IfActionSubsystem2((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_gu.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1325>/If Action Subsystem2' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_gu.y) - 1)))) <= 35)
    {
        /* Outputs for IfAction SubSystem: '<S1325>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S1330>/Action Port'
         */
        OHSR_ac_IfActionSubsystem3((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_gu.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1325>/If Action Subsystem3' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_gu.y) - 1)))) <= 44)
    {
        /* Outputs for IfAction SubSystem: '<S1325>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S1331>/Action Port'
         */
        OHSR_ac_IfActionSubsystem4((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_gu.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1325>/If Action Subsystem4' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1325>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S1332>/Action Port'
         */
        OHSR_ac_IfActionSubsystem5((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_gu.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S1325>/If Action Subsystem5' */
    }

    /* End of If: '<S1325>/If' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VaOSMR_d_FinalAllwdFxdGr' */
    (void)Rte_Read_VaOSMR_d_FinalAllwdFxdGr_Value(tmpRead_d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTED'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/OHSC_Range_Selection'
     */
    /* MATLAB Function: '<S1324>/MATLAB Function' incorporates:
     *  Selector: '<S1293>/Selector'
     */
    /* MATLAB Function 'OPTL_StratIndexConv16Bit/GetBitFrom16BitRegister/MATLAB Function': '<S1326>:1' */
    /* '<S1326>:1:2' */
    bitmask = 0U;

    /* '<S1326>:1:3' */
    rtb_AND_er = true;

    /* '<S1326>:1:4' */
    if (((sint32)rtb_Merge1_ib) < 16)
    {
        /* '<S1326>:1:4' */
        /* '<S1326>:1:5' */
        bitmask = (uint16)((uint32)(((uint32)1) << ((uint32)rtb_Merge1_ib)));
    }

    /* '<S1326>:1:7' */
    if ((((sint32)tmpRead_d[rtb_DataTypeConversion1_l]) & ((sint32)bitmask)) ==
            0)
    {
        /* '<S1326>:1:8' */
        /* '<S1326>:1:9' */
        rtb_AND_er = false;
    }

    /* Logic: '<S558>/Logical5' incorporates:
     *  MATLAB Function: '<S1324>/MATLAB Function'
     */
    VeOHSC_b_CurrentRngOnStAlwd = (rtb_AND_er || (rtb_AND_nh[2]));

    /* Logic: '<S558>/Logical2' */
    VaOHSC_b_HoldCurrentRng[0] = ((rtb_GreaterThan1[0]) &&
        (VeOHSC_b_CurrentRngStAlwd));
    VaOHSC_b_HoldCurrentRng[1] = ((rtb_GreaterThan1[1]) &&
        (VeOHSC_b_CurrentRngOptAlwd));
    VaOHSC_b_HoldCurrentRng[2] = ((rtb_GreaterThan1[2]) &&
        (VeOHSC_b_CurrentRngOnStAlwd));

    /* Switch: '<S558>/Switch' */
    if (VaOHSC_b_HoldCurrentRng[0])
    {
        /* Switch: '<S558>/Switch' */
        OHSR_ac_DW.UnitDelay1_DSTATE_d[0] = rtb_MinMax_i;
    }
    else
    {
        /* Switch: '<S558>/Switch' */
        OHSR_ac_DW.UnitDelay1_DSTATE_d[0] = VeOHSC_e_RangeSel_BfrDbnc;
    }

    if (VaOHSC_b_HoldCurrentRng[1])
    {
        /* Switch: '<S558>/Switch' */
        OHSR_ac_DW.UnitDelay1_DSTATE_d[1] = rtb_MinMax2_hq;
    }
    else
    {
        /* Switch: '<S558>/Switch' */
        OHSR_ac_DW.UnitDelay1_DSTATE_d[1] = VeOHSC_e_RangeOpt_BfrDbnc;
    }

    if (VaOHSC_b_HoldCurrentRng[2])
    {
        /* Switch: '<S558>/Switch' */
        OHSR_ac_DW.UnitDelay1_DSTATE_d[2] = rtb_MinMax1_fj;
    }
    else
    {
        /* Switch: '<S558>/Switch' */
        OHSR_ac_DW.UnitDelay1_DSTATE_d[2] = VeOHSC_e_RangeOn_BfrDbnc;
    }

    /* End of Switch: '<S558>/Switch' */

    /* Gain: '<S1297>/Gain' */
    VeOHSC_e_CurrentRngSelected = OHSR_ac_DW.UnitDelay1_DSTATE_d[0];

    /* DataTypeConversion: '<S536>/Data Type Conversion2' incorporates:
     *  Constant: '<S796>/Calib'
     *  Selector: '<S551>/Selector'
     */
    VeOHSC_e_RngSel_ExtRngDsrd =
        HaOHSR_e_DsrdRngStMap[VeOHSC_e_CurrentRngSelected - 1];

    /* Selector: '<S585>/Selector' incorporates:
     *  Constant: '<S658>/Calib'
     *  DataTypeConversion: '<S536>/Data Type Conversion2'
     */
    VeOHSC_b_RngStMapSelection_M1 = HaOHSR_b_M1_NiDsrd_RngStMap
        [(VeOHSC_e_RngSel_ExtRngDsrd)];

    /* Outputs for IfAction SubSystem: '<S536>/Abritrated_Desired_Ni_N' incorporates:
     *  ActionPort: '<S569>/Action Port'
     */
    /* Outputs for IfAction SubSystem: '<S554>/Nb_Launch' incorporates:
     *  ActionPort: '<S804>/Action Port'
     */
    /* If: '<S536>/If' incorporates:
     *  If: '<S554>/If1'
     *  Merge: '<Root>/VeOHSR_e_ILEState_IRV_Merge'
     *  RelationalOperator: '<S534>/Comparison1'
     *  RelationalOperator: '<S534>/Comparison4'
     *  RelationalOperator: '<S554>/Comparison4'
     *  RelationalOperator: '<S569>/Comparison1'
     *  RelationalOperator: '<S569>/Comparison4'
     *  RelationalOperator: '<S804>/Comparison4'
     *  SignalConversion generated from: '<S2>/VeOHSR_e_ILEState_Read'
     */
    rtb_Selector3_kl_tmp = Rte_IrvRead_OHSR_MedTED_VeOHSR_e_ILEState_write_IRV();

    /* End of Outputs for SubSystem: '<S554>/Nb_Launch' */
    /* End of Outputs for SubSystem: '<S536>/Abritrated_Desired_Ni_N' */

    /* Selector: '<S546>/Selector3' incorporates:
     *  Constant: '<S543>/Constant'
     *  RelationalOperator: '<S534>/Comparison4'
     */
    rtb_AND_ck = (((uint32)rtb_Selector3_kl_tmp) == CeOHSR_e_LaunchState);

    /* Logic: '<S585>/Logical1' incorporates:
     *  Constant: '<S660>/Calib'
     */
    loopCond = ((HeOHSR_b_NiDsrdM1_LaunchChk) && rtb_AND_ck);

    /* Switch: '<S536>/Switch2' incorporates:
     *  Constant: '<S575>/Calib'
     *  DataTypeConversion: '<S536>/Data Type Conversion'
     *  Selector: '<S536>/Selector1'
     *  SignalConversion generated from: '<S2>/VeHSER_e_RngEqnSel'
     */
    UnitDelay_DSTATE_f4 = ((!KaOHSR_b_DsblTCMEngSpdReq_M1
                            [(rtb_TmpSignalConversionAtVeHSER_e_RngEqn)]) &&
                           rtb_TmpSignalConversionAtVeESPR_b_TCMEng);

    /* Logic: '<S585>/Logical4' incorporates:
     *  Constant: '<S659>/Calib'
     *  DataTypeConversion: '<S536>/Data Type Conversion2'
     *  Selector: '<S585>/Selector1'
     */
    rtb_TmpSignalConversionAtVeOSMR_b_EngRev =
        (rtb_TmpSignalConversionAtPS_ReadOutport1 ||
         (HaOHSR_b_M1_RngStForTCMReset[(VeOHSC_e_RngSel_ExtRngDsrd)]));

    /* Outputs for Atomic SubSystem: '<S664>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S666>/EdgeRising' */
    /* Logic: '<S668>/AND' incorporates:
     *  Logic: '<S668>/OR1'
     *  UnitDelay: '<S668>/Unit Delay'
     */
    rtb_AND_er = (UnitDelay_DSTATE_f4 && (!OHSR_ac_DW.UnitDelay_DSTATE_oa));

    /* Update for UnitDelay: '<S668>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_oa = UnitDelay_DSTATE_f4;

    /* End of Outputs for SubSystem: '<S666>/EdgeRising' */

    /* Outputs for IfAction SubSystem: '<S536>/Abritrated_Desired_Ni_M1' incorporates:
     *  ActionPort: '<S567>/Action Port'
     */
    /* Outputs for Atomic SubSystem: '<S567>/NTurb_V_Offset_M1' */
    /* If: '<S536>/If1' incorporates:
     *  Logic: '<S594>/Logical1'
     *  Logic: '<S666>/OR1'
     */
    tmpRead_g = !UnitDelay_DSTATE_f4;

    /* End of Outputs for SubSystem: '<S567>/NTurb_V_Offset_M1' */
    /* End of Outputs for SubSystem: '<S536>/Abritrated_Desired_Ni_M1' */

    /* Switch: '<S666>/Switch1' incorporates:
     *  Constant: '<S661>/Calib'
     *  Constant: '<S663>/Calib'
     *  Constant: '<S666>/Constant Value1'
     *  Logic: '<S666>/OR'
     *  Logic: '<S666>/OR1'
     *  MinMax: '<S666>/Minimum'
     *  Sum: '<S666>/Summation'
     *  Switch: '<S664>/Switch1'
     *  UnitDelay: '<S666>/Unit Delay'
     */
    if ((tmpRead_g || rtb_AND_er) || rtb_TmpSignalConversionAtVeOSMR_b_EngRev)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_b1 = 0.0F;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_b1 = fminf(KeOHSR_t_TCM_MaxBlend_M1_ON,
            HeOHSR_t_RngSel_dT + OHSR_ac_DW.UnitDelay_DSTATE_b1);
    }

    /* End of Switch: '<S666>/Switch1' */

    /* Logic: '<S666>/AND' incorporates:
     *  Constant: '<S663>/Calib'
     *  RelationalOperator: '<S666>/Greater  Than'
     *  Switch: '<S664>/Switch1'
     *  UnitDelay: '<S666>/Unit Delay'
     */
    rtb_AND_er = (UnitDelay_DSTATE_f4 && (OHSR_ac_DW.UnitDelay_DSTATE_b1 >=
                   KeOHSR_t_TCM_MaxBlend_M1_ON));

    /* End of Outputs for SubSystem: '<S664>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S664>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S665>/EdgeFalling1' */
    /* Logic: '<S667>/AND' incorporates:
     *  Logic: '<S667>/OR1'
     *  UnitDelay: '<S667>/Unit Delay'
     */
    rtb_AND_fo = ((!rtb_AND_er) && (OHSR_ac_DW.UnitDelay_DSTATE_bm));

    /* Update for UnitDelay: '<S667>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_bm = rtb_AND_er;

    /* End of Outputs for SubSystem: '<S665>/EdgeFalling1' */

    /* Switch: '<S665>/Switch1' incorporates:
     *  Constant: '<S665>/Constant Value1'
     *  Logic: '<S665>/Logical2'
     *  UnitDelay: '<S665>/Unit Delay'
     */
    if (!rtb_TmpSignalConversionAtVeOSMR_b_EngRev)
    {
        /* Switch: '<S665>/Switch' */
        if (rtb_AND_fo)
        {
            /* UnitDelay: '<S665>/Unit Delay' incorporates:
             *  Constant: '<S662>/Calib'
             *  Switch: '<S664>/Switch1'
             *  Switch: '<S665>/Switch'
             */
            OHSR_ac_DW.UnitDelay_DSTATE_mo = KeOHSR_t_TCM_MaxBlend_M1_OFF;
        }
        else
        {
            /* UnitDelay: '<S665>/Unit Delay' incorporates:
             *  Constant: '<S661>/Calib'
             *  Constant: '<S665>/Constant Value1'
             *  MinMax: '<S665>/Minimum'
             *  Sum: '<S665>/Summation'
             *  Switch: '<S665>/Switch'
             */
            OHSR_ac_DW.UnitDelay_DSTATE_mo = fmaxf
                (OHSR_ac_DW.UnitDelay_DSTATE_mo - HeOHSR_t_RngSel_dT, 0.0F);
        }

        /* End of Switch: '<S665>/Switch' */
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_mo = 0.0F;
    }

    /* End of Switch: '<S665>/Switch1' */

    /* Logic: '<S585>/Logical3' incorporates:
     *  Constant: '<S665>/Constant Value2'
     *  Logic: '<S585>/Logical2'
     *  Logic: '<S665>/AND'
     *  RelationalOperator: '<S665>/Greater  Than'
     *  UnitDelay: '<S665>/Unit Delay'
     */
    VeOHSC_b_ArbOpt_M1 = ((((rtb_TmpSignalConversionAtS2H_ReadOutport ||
        (VeOHSC_b_RngStMapSelection_M1)) || loopCond) || UnitDelay_DSTATE_f4) ||
                          ((rtb_AND_er || (OHSR_ac_DW.UnitDelay_DSTATE_mo > 0.0F))
                           && rtb_TmpSignalConversionAtEnblTCMReqL_Rea));

    /* End of Outputs for SubSystem: '<S664>/Turn Off Delay Time' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeOSMR_d_FnctnEnblReg' */
    /* MATLAB Function 'OHSR_FUNC_PxPy_MedTED/OHSC_Range_Selection/Hold_Inputs/GetBitFrom16BitRegister/MATLAB Function': '<S787>:1' */
    /* '<S787>:1:2' */
    /* '<S787>:1:3' */
    /* '<S787>:1:4' */
    /* '<S787>:1:5' */
    /* '<S787>:1:7' */
    (void)Rte_Read_VeOSMR_d_FnctnEnblReg_Value(&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTED'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/OHSC_Range_Selection'
     */
    /* MATLAB Function: '<S785>/MATLAB Function' incorporates:
     *  Inport: '<Root>/VaSCOR_P_EngPwrLoss_MA'
     *  Inport: '<Root>/VaSCOR_P_EngPwrLoss_MB'
     *  Inport: '<Root>/VaSCOR_P_EngPwrLoss_N'
     *  Inport: '<Root>/VaSCOR_n_InputSpeedDsrdMA'
     *  Inport: '<Root>/VaSCOR_n_InputSpeedDsrdMB'
     *  Inport: '<Root>/VaSCOR_n_InputSpeedDsrdN'
     *  Inport: '<Root>/VaSCOR_n_MtrBSpdDsrdN'
     *  Inport: '<Root>/VaSCOR_n_StgcNiMin_MA'
     *  Inport: '<Root>/VaSCOR_n_StgcNiMin_MB'
     *  Inport: '<Root>/VaSCOR_n_StgcNiMin_N'
     *  Inport: '<Root>/VeOSMR_b_ServEngOffReq_Actv'
     *  Inport: '<S786>/EngPowerLoss_MA'
     *  Inport: '<S786>/EngPowerLoss_MB'
     *  Inport: '<S786>/EngPowerLoss_N'
     *  Inport: '<S786>/InputSpeedDsrd_MA'
     *  Inport: '<S786>/InputSpeedDsrd_MB'
     *  Inport: '<S786>/OptInputSpeed_Neutral'
     *  Inport: '<S786>/OptMtrBSpeed_Neutral'
     *  Inport: '<S786>/ServEngOffReq_Actv'
     *  Inport: '<S786>/StgcNiMin_MA'
     *  Inport: '<S786>/StgcNiMin_MB'
     *  Inport: '<S786>/StgcNiMin_N'
     */
    if ((((uint32)tmpRead_4) & 32768U) != 0U)
    {
        (void)Rte_Read_VaSCOR_P_EngPwrLoss_MB_Value(OHSR_ac_B.EngPowerLoss_MB);
        (void)Rte_Read_VaSCOR_P_EngPwrLoss_MA_Value(OHSR_ac_B.EngPowerLoss_MA);
        (void)Rte_Read_VaSCOR_P_EngPwrLoss_N_Value(OHSR_ac_B.EngPowerLoss_N);
        (void)Rte_Read_VaSCOR_n_StgcNiMin_MB_Value(OHSR_ac_B.StgcNiMin_MB);
        (void)Rte_Read_VaSCOR_n_StgcNiMin_MA_Value(OHSR_ac_B.StgcNiMin_MA);
        (void)Rte_Read_VaSCOR_n_StgcNiMin_N_Value(OHSR_ac_B.StgcNiMin_N);
        (void)Rte_Read_VeOSMR_b_ServEngOffReq_Actv_Value
            (&OHSR_ac_B.ServEngOffReq_Actv);
        (void)Rte_Read_VaSCOR_n_InputSpeedDsrdMB_Value
            (OHSR_ac_B.InputSpeedDsrd_MB);
        (void)Rte_Read_VaSCOR_n_InputSpeedDsrdMA_Value
            (OHSR_ac_B.InputSpeedDsrd_MA);
        (void)Rte_Read_VaSCOR_n_MtrBSpdDsrdN_Value
            (OHSR_ac_B.OptMtrBSpeed_Neutral);
        (void)Rte_Read_VaSCOR_n_InputSpeedDsrdN_Value
            (OHSR_ac_B.OptInputSpeed_Neutral);
    }
    else
    {
        /* '<S787>:1:8' */
        /* '<S787>:1:9' */
    }

    /* End of MATLAB Function: '<S785>/MATLAB Function' */

    /* If: '<S551>/If' incorporates:
     *  Constant: '<S798>/Calib'
     */
    if (HeOHSR_b_UseOptCostBsd_RngSel)
    {
        /* Outputs for IfAction SubSystem: '<S551>/Pass' incorporates:
         *  ActionPort: '<S799>/Action Port'
         */
        /* Merge: '<S551>/Merge' incorporates:
         *  Constant: '<S795>/Calib'
         *  Inport: '<S799>/In1'
         *  Selector: '<S551>/Selector'
         *  Selector: '<S551>/Selector1'
         */
        VeOHSC_b_EngDsrd = HaOHSR_b_DsrdEngStMap[VeOHSC_e_CurrentRngSelected - 1];

        /* End of Outputs for SubSystem: '<S551>/Pass' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S551>/EngOfAllowed' incorporates:
         *  ActionPort: '<S794>/Action Port'
         */
        /* Merge: '<S551>/Merge' incorporates:
         *  Switch: '<S794>/Switch'
         */
        VeOHSC_b_EngDsrd = !rtb_TmpSignalConversionAtVeSTRR_b_EngOff;

        /* End of Outputs for SubSystem: '<S551>/EngOfAllowed' */
    }

    /* End of If: '<S551>/If' */

    /* DataTypeConversion: '<S564>/Data Type Conversion2' incorporates:
     *  DataTypeConversion: '<S565>/Data Type Conversion'
     *  Inport: '<Root>/VeOSMR_b_TCaseN4HiShft_Actv'
     *  Inport: '<Root>/VeOSMR_b_TcaseShftEffrtRdctn_Actv'
     *  Logic: '<S564>/Logical1'
     *  Logic: '<S565>/Logical'
     *  RelationalOperator: '<S565>/Comparison'
     *  RelationalOperator: '<S565>/Comparison1'
     *  Selector: '<S564>/Selector1'
     *  Selector: '<S565>/Selector'
     *  SignalConversion generated from: '<S534>/XeOHSR_b_TcaseShftFeature_Enbl1'
     *  SignalConversion generated from: '<S534>/XeOHSR_b_TcaseShftFeature_Enbl'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_25

    (void)Rte_Read_VeOSMR_b_TcaseShftEffrtRdctn_Actv_Value(&rtb_UnitDelay_lad);

    /* VariantMerge generated from: '<S534>/XeOHSR_b_TcaseShftFeature_Enbl' incorporates:
     *  Constant: '<S1364>/Calib'
     *  Inport: '<Root>/VeOSMR_b_TcaseShftEffrtRdctn_Actv'
     *  Selector: '<S551>/Selector'
     */
    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_fa = (rtb_UnitDelay_lad &&
        (KaOHSR_b_EnblShftEfftRdctn[(VeOHSC_e_RngSel_ExtRngDsrd)]));
    (void)Rte_Read_VeOSMR_b_TCaseN4HiShft_Actv_Value(&rtb_AND_mo);

    /* VariantMerge generated from: '<S534>/XeOHSR_b_TcaseShftFeature_Enbl1' incorporates:
     *  Constant: '<S1365>/Calib'
     *  Constant: '<S1366>/Calib'
     *  Inport: '<Root>/VeOSMR_b_TCaseN4HiShft_Actv'
     *  Selector: '<S551>/Selector'
     */
    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_fy = (((rtb_AND_mo &&
        (KaOHSR_b_EnblShftEfftRdctn_N4H[(VeOHSC_e_RngSel_ExtRngDsrd)])) &&
        (rtb_TmpSignalConversionAtVeOSMR_n_MtrBSp > KeOHSR_n_ShftEfftRed_N4H)) &&
        (KeOHSR_n_ShftEfftRed_N4H > rtb_TmpSignalConversionAtVeOSMR_n_MtrB_h));

#else

    /* VariantMerge generated from: '<S534>/XeOHSR_b_TcaseShftFeature_Enbl' incorporates:
     *  Constant: '<S534>/FALSE Constant1'
     *  SignalConversion generated from: '<S534>/XeOHSR_b_TcaseShftFeature_Enbl'
     */
    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_fa = false;

    /* VariantMerge generated from: '<S534>/XeOHSR_b_TcaseShftFeature_Enbl1' incorporates:
     *  Constant: '<S534>/FALSE Constant2'
     *  SignalConversion generated from: '<S534>/XeOHSR_b_TcaseShftFeature_Enbl1'
     */
    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_fy = false;

#endif

    /* End of DataTypeConversion: '<S564>/Data Type Conversion2' */

    /* Outputs for Atomic SubSystem: '<S557>/CostBased_RngSel' */
    /* Outputs for Atomic SubSystem: '<S934>/Indexing' */
    /* RelationalOperator: '<S938>/Comparison1' incorporates:
     *  UnitDelay: '<S938>/Unit Delay1'
     *  UnitDelay: '<S938>/Unit Delay3'
     */
    rtb_TmpSignalConversionAtVeOSMR_b_EngRev = (OHSR_ac_DW.UnitDelay1_DSTATE_a
        != rtb_TmpSignalConversionAtVeOSMR_e_Actual);

    /* UnitDelay: '<S938>/Unit Delay3' incorporates:
     *  UnitDelay: '<S938>/Unit Delay1'
     */
    OHSR_ac_DW.UnitDelay1_DSTATE_a = OHSR_ac_DW.UnitDelay3_DSTATE_i;

    /* Saturate: '<S938>/Saturation4' incorporates:
     *  DataTypeConversion: '<S938>/Data Type Conversion'
     */
    if (((sint32)rtb_TmpSignalConversionAtVeOSMR_e_Target) > 8)
    {
        /* Saturate: '<S940>/Saturation1' */
        rtb_Saturation1 = 8;
    }
    else
    {
        /* Saturate: '<S940>/Saturation1' */
        rtb_Saturation1 = (sint16)rtb_TmpSignalConversionAtVeOSMR_e_Target;
    }

    /* End of Saturate: '<S938>/Saturation4' */

    /* Outputs for Atomic SubSystem: '<S934>/InputSpd' */
    /* Outputs for Atomic SubSystem: '<S939>/MinSpeeds' */
    /* Outputs for Atomic SubSystem: '<S939>/MaxSpeeds' */
    /* Selector: '<S938>/Selector25' incorporates:
     *  Constant: '<S947>/Calib'
     *  Constant: '<S949>/Calib'
     *  Constant: '<S951>/Calib'
     *  Constant: '<S953>/Calib'
     *  DataTypeConversion: '<S536>/Data Type Conversion2'
     *  Selector: '<S1012>/Selector3'
     *  Selector: '<S1014>/Selector3'
     *  Selector: '<S1016>/Selector3'
     *  Selector: '<S1036>/Selector3'
     *  Selector: '<S1038>/Selector3'
     *  Selector: '<S1040>/Selector3'
     *  Selector: '<S938>/Selector10'
     *  Selector: '<S938>/Selector12'
     *  Selector: '<S938>/Selector3'
     *  Selector: '<S938>/Selector5'
     *  Selector: '<S938>/Selector7'
     *  Selector: '<S938>/Selector9'
     */
    rtb_Switch5_jr_tmp = (((sint32)rtb_Saturation1) * 8) + ((sint32)
        VeOHSC_e_RngSel_ExtRngDsrd);

    /* End of Outputs for SubSystem: '<S939>/MaxSpeeds' */
    /* End of Outputs for SubSystem: '<S939>/MinSpeeds' */
    /* End of Outputs for SubSystem: '<S934>/InputSpd' */
    rtb_DataTypeConversion1_l = HaOHSR_i_MtrBSpeed_N_Idx[(rtb_Switch5_jr_tmp)];

    /* Outputs for Atomic SubSystem: '<S938>/EdgeRising' */
    /* Logic: '<S942>/AND' incorporates:
     *  Logic: '<S942>/OR1'
     *  UnitDelay: '<S942>/Unit Delay'
     */
    rtb_AND_mo = !OHSR_ac_DW.UnitDelay_DSTATE_eb;

    /* Update for UnitDelay: '<S942>/Unit Delay' incorporates:
     *  Constant: '<S938>/TRUE Constant'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_eb = true;

    /* End of Outputs for SubSystem: '<S938>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S938>/EdgeRising1' */
    /* Logic: '<S943>/AND' incorporates:
     *  Logic: '<S943>/OR1'
     *  UnitDelay: '<S943>/Unit Delay'
     */
    rtb_AND_fo = !OHSR_ac_DW.UnitDelay_DSTATE_nrv;

    /* Update for UnitDelay: '<S943>/Unit Delay' incorporates:
     *  Constant: '<S938>/TRUE Constant1'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_nrv = true;

    /* End of Outputs for SubSystem: '<S938>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S938>/EdgeRising2' */
    /* Logic: '<S944>/AND' incorporates:
     *  Logic: '<S944>/OR1'
     *  UnitDelay: '<S944>/Unit Delay'
     */
    rtb_AND_o5 = !OHSR_ac_DW.UnitDelay_DSTATE_ff;

    /* Update for UnitDelay: '<S944>/Unit Delay' incorporates:
     *  Constant: '<S938>/TRUE Constant2'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_ff = true;

    /* End of Outputs for SubSystem: '<S938>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S938>/EdgeRising3' */
    /* Logic: '<S945>/AND' incorporates:
     *  Logic: '<S945>/OR1'
     *  UnitDelay: '<S945>/Unit Delay'
     */
    rtb_AND_h = !OHSR_ac_DW.UnitDelay_DSTATE_e4q;

    /* Update for UnitDelay: '<S945>/Unit Delay' incorporates:
     *  Constant: '<S938>/TRUE Constant3'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_e4q = true;

    /* End of Outputs for SubSystem: '<S938>/EdgeRising3' */

    /* MATLAB Function: '<S946>/MATLAB Function' incorporates:
     *  Constant: '<S938>/Constant Value8'
     *  Sum: '<S938>/Sum3'
     */
    /* MATLAB Function 'OHSR_FUNC_PxPy_MedTED/OHSC_Range_Selection/OHSC_RangeSt_Speed_Selection/CostBased_RngSel/Indexing/GetBitFrom16BitRegister/MATLAB Function': '<S963>:1' */
    /* '<S963>:1:2' */
    bitmask = 0U;

    /* '<S963>:1:3' */
    rtb_AND_er = true;

    /* '<S963>:1:4' */
    if (((sint32)((uint8)((sint32)(((sint32)rtb_DataTypeConversion1_l) - 1)))) <
        16)
    {
        /* '<S963>:1:4' */
        /* '<S963>:1:5' */
        bitmask = (uint16)((uint32)(((uint32)1) << ((uint32)((uint8)((sint32)
                               (((sint32)rtb_DataTypeConversion1_l) - 1))))));
    }

    /* '<S963>:1:7' */
    if ((((sint32)rtb_TmpSignalConversionAtVeOSMR_d_Manual) & ((sint32)bitmask))
        == 0)
    {
        /* '<S963>:1:8' */
        /* '<S963>:1:9' */
        rtb_AND_er = false;
    }

    /* UnitDelay: '<S875>/Unit Delay' incorporates:
     *  Constant: '<S955>/Calib'
     *  Logic: '<S938>/Logical'
     *  RelationalOperator: '<S938>/Comparison2'
     *  UnitDelay: '<S938>/Unit Delay2'
     */
    rtb_UnitDelay_lad = ((OHSR_ac_DW.UnitDelay2_DSTATE_hd !=
                          VeOHSC_e_RngSel_ExtRngDsrd) &&
                         (KeOHSR_b_EnblRngDsrd4MovAvgRes));

    /* Logic: '<S938>/Logical1' incorporates:
     *  RelationalOperator: '<S938>/Comparison5'
     *  UnitDelay: '<S938>/Unit Delay1'
     *  UnitDelay: '<S938>/Unit Delay3'
     */
    rtb_TmpSignalConversionAtVeSTRR_b_EngOff =
        ((rtb_TmpSignalConversionAtVeOSMR_e_Target !=
          OHSR_ac_DW.UnitDelay1_DSTATE_a) || rtb_UnitDelay_lad);

    /* Logic: '<S938>/Logical2' */
    rtb_Logical2_jm = (rtb_UnitDelay_lad ||
                       rtb_TmpSignalConversionAtVeOSMR_b_EngRev);

    /* SignalConversion generated from: '<S956>/Selector' */
    rtb_TmpSignalConversionAtSelectorInport1[0] =
        rtb_TmpSignalConversionAtVeOSMR_d_Manual;
    rtb_TmpSignalConversionAtSelectorInport1[1] =
        rtb_TmpSignalConversionAtVeOSMR_d_Manu_c;
    rtb_TmpSignalConversionAtSelectorInport1[2] =
        rtb_TmpSignalConversionAtVeOSMR_d_Manu_m;

    /* MATLAB Function: '<S973>/MATLAB Function' incorporates:
     *  Constant: '<S951>/Calib'
     *  DataTypeConversion: '<S536>/Data Type Conversion2'
     *  Selector: '<S938>/Selector12'
     */
    OHSR_ac_MATLABFunction(HaOHSR_i_InputSpeed_N_Idx[((sint32)
                            VeOHSC_e_RngSel_ExtRngDsrd) + (((sint32)
        rtb_Saturation1) * 8)], &OHSR_ac_B.sf_MATLABFunction_l);

    /* If: '<S965>/If' incorporates:
     *  Constant: '<S938>/Constant Value9'
     *  Constant: '<S965>/Constant Value10'
     *  Constant: '<S965>/Constant Value11'
     *  Constant: '<S965>/Constant Value12'
     *  Constant: '<S965>/Constant Value13'
     *  Constant: '<S965>/Constant Value14'
     *  RelationalOperator: '<S965>/Comparison1'
     *  RelationalOperator: '<S965>/Comparison2'
     *  RelationalOperator: '<S965>/Comparison3'
     *  RelationalOperator: '<S965>/Comparison4'
     *  RelationalOperator: '<S965>/Comparison5'
     *  Sum: '<S965>/Sum16'
     */
    if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_l.y) - 1))))
        <= 8)
    {
        /* Outputs for IfAction SubSystem: '<S965>/If Action Subsystem' incorporates:
         *  ActionPort: '<S967>/Action Port'
         */
        OHSR_ac_IfActionSubsystem((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_l.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S965>/If Action Subsystem' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_l.y)
                 - 1)))) <= 17)
    {
        /* Outputs for IfAction SubSystem: '<S965>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S968>/Action Port'
         */
        OHSR_ac_IfActionSubsystem1((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_l.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S965>/If Action Subsystem1' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_l.y)
                 - 1)))) <= 26)
    {
        /* Outputs for IfAction SubSystem: '<S965>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S969>/Action Port'
         */
        OHSR_ac_IfActionSubsystem2((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_l.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S965>/If Action Subsystem2' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_l.y)
                 - 1)))) <= 35)
    {
        /* Outputs for IfAction SubSystem: '<S965>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S970>/Action Port'
         */
        OHSR_ac_IfActionSubsystem3((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_l.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S965>/If Action Subsystem3' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_l.y)
                 - 1)))) <= 44)
    {
        /* Outputs for IfAction SubSystem: '<S965>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S971>/Action Port'
         */
        OHSR_ac_IfActionSubsystem4((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_l.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S965>/If Action Subsystem4' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S965>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S972>/Action Port'
         */
        OHSR_ac_IfActionSubsystem5((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_l.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S965>/If Action Subsystem5' */
    }

    /* End of If: '<S965>/If' */

    /* MATLAB Function: '<S964>/MATLAB Function' incorporates:
     *  Selector: '<S956>/Selector'
     */
    /* MATLAB Function 'OPTL_StratIndexConv16Bit/GetBitFrom16BitRegister/MATLAB Function': '<S966>:1' */
    /* '<S966>:1:2' */
    bitmask = 0U;

    /* '<S966>:1:3' */
    rtb_TmpSignalConversionAtVeOSMR_b_EngRev = true;

    /* '<S966>:1:4' */
    if (((sint32)rtb_Merge1_ib) < 16)
    {
        /* '<S966>:1:4' */
        /* '<S966>:1:5' */
        bitmask = (uint16)((uint32)(((uint32)1) << ((uint32)rtb_Merge1_ib)));
    }

    /* '<S966>:1:7' */
    if ((((sint32)
            rtb_TmpSignalConversionAtSelectorInport1[rtb_DataTypeConversion1_l])
         & ((sint32)bitmask)) == 0)
    {
        /* '<S966>:1:8' */
        /* '<S966>:1:9' */
        rtb_TmpSignalConversionAtVeOSMR_b_EngRev = false;
    }

    /* MATLAB Function: '<S984>/MATLAB Function' incorporates:
     *  Constant: '<S947>/Calib'
     *  DataTypeConversion: '<S536>/Data Type Conversion2'
     *  Selector: '<S938>/Selector10'
     */
    OHSR_ac_MATLABFunction(HaOHSR_i_InputSpeed_M1_Idx[((sint32)
                            VeOHSC_e_RngSel_ExtRngDsrd) + (((sint32)
        rtb_Saturation1) * 8)], &OHSR_ac_B.sf_MATLABFunction_dn);

    /* If: '<S976>/If' incorporates:
     *  Constant: '<S938>/Constant Value10'
     *  Constant: '<S976>/Constant Value10'
     *  Constant: '<S976>/Constant Value11'
     *  Constant: '<S976>/Constant Value12'
     *  Constant: '<S976>/Constant Value13'
     *  Constant: '<S976>/Constant Value14'
     *  RelationalOperator: '<S976>/Comparison1'
     *  RelationalOperator: '<S976>/Comparison2'
     *  RelationalOperator: '<S976>/Comparison3'
     *  RelationalOperator: '<S976>/Comparison4'
     *  RelationalOperator: '<S976>/Comparison5'
     *  Sum: '<S976>/Sum16'
     */
    if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_dn.y) -
            1)))) <= 8)
    {
        /* Outputs for IfAction SubSystem: '<S976>/If Action Subsystem' incorporates:
         *  ActionPort: '<S978>/Action Port'
         */
        OHSR_ac_IfActionSubsystem((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_dn.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S976>/If Action Subsystem' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_dn.y) - 1)))) <= 17)
    {
        /* Outputs for IfAction SubSystem: '<S976>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S979>/Action Port'
         */
        OHSR_ac_IfActionSubsystem1((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_dn.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S976>/If Action Subsystem1' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_dn.y) - 1)))) <= 26)
    {
        /* Outputs for IfAction SubSystem: '<S976>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S980>/Action Port'
         */
        OHSR_ac_IfActionSubsystem2((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_dn.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S976>/If Action Subsystem2' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_dn.y) - 1)))) <= 35)
    {
        /* Outputs for IfAction SubSystem: '<S976>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S981>/Action Port'
         */
        OHSR_ac_IfActionSubsystem3((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_dn.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S976>/If Action Subsystem3' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_dn.y) - 1)))) <= 44)
    {
        /* Outputs for IfAction SubSystem: '<S976>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S982>/Action Port'
         */
        OHSR_ac_IfActionSubsystem4((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_dn.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S976>/If Action Subsystem4' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S976>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S983>/Action Port'
         */
        OHSR_ac_IfActionSubsystem5((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_dn.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S976>/If Action Subsystem5' */
    }

    /* End of If: '<S976>/If' */

    /* MATLAB Function: '<S975>/MATLAB Function' incorporates:
     *  Selector: '<S957>/Selector'
     */
    /* MATLAB Function 'OPTL_StratIndexConv16Bit/GetBitFrom16BitRegister/MATLAB Function': '<S977>:1' */
    /* '<S977>:1:2' */
    bitmask = 0U;

    /* '<S977>:1:3' */
    rtb_UnitDelay_lad = true;

    /* '<S977>:1:4' */
    if (((sint32)rtb_Merge1_ib) < 16)
    {
        /* '<S977>:1:4' */
        /* '<S977>:1:5' */
        bitmask = (uint16)((uint32)(((uint32)1) << ((uint32)rtb_Merge1_ib)));
    }

    /* '<S977>:1:7' */
    if ((((sint32)
            rtb_TmpSignalConversionAtSelectorInport1[rtb_DataTypeConversion1_l])
         & ((sint32)bitmask)) == 0)
    {
        /* '<S977>:1:8' */
        /* '<S977>:1:9' */
        rtb_UnitDelay_lad = false;
    }

    /* MATLAB Function: '<S995>/MATLAB Function' incorporates:
     *  Constant: '<S949>/Calib'
     *  DataTypeConversion: '<S536>/Data Type Conversion2'
     *  Selector: '<S938>/Selector9'
     */
    OHSR_ac_MATLABFunction(HaOHSR_i_InputSpeed_M2_Idx[((sint32)
                            VeOHSC_e_RngSel_ExtRngDsrd) + (((sint32)
        rtb_Saturation1) * 8)], &OHSR_ac_B.sf_MATLABFunction_kf);

    /* If: '<S987>/If' incorporates:
     *  Constant: '<S938>/Constant Value11'
     *  Constant: '<S987>/Constant Value10'
     *  Constant: '<S987>/Constant Value11'
     *  Constant: '<S987>/Constant Value12'
     *  Constant: '<S987>/Constant Value13'
     *  Constant: '<S987>/Constant Value14'
     *  RelationalOperator: '<S987>/Comparison1'
     *  RelationalOperator: '<S987>/Comparison2'
     *  RelationalOperator: '<S987>/Comparison3'
     *  RelationalOperator: '<S987>/Comparison4'
     *  RelationalOperator: '<S987>/Comparison5'
     *  Sum: '<S987>/Sum16'
     */
    if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_kf.y) -
            1)))) <= 8)
    {
        /* Outputs for IfAction SubSystem: '<S987>/If Action Subsystem' incorporates:
         *  ActionPort: '<S989>/Action Port'
         */
        OHSR_ac_IfActionSubsystem((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_kf.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S987>/If Action Subsystem' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_kf.y) - 1)))) <= 17)
    {
        /* Outputs for IfAction SubSystem: '<S987>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S990>/Action Port'
         */
        OHSR_ac_IfActionSubsystem1((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_kf.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S987>/If Action Subsystem1' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_kf.y) - 1)))) <= 26)
    {
        /* Outputs for IfAction SubSystem: '<S987>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S991>/Action Port'
         */
        OHSR_ac_IfActionSubsystem2((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_kf.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S987>/If Action Subsystem2' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_kf.y) - 1)))) <= 35)
    {
        /* Outputs for IfAction SubSystem: '<S987>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S992>/Action Port'
         */
        OHSR_ac_IfActionSubsystem3((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_kf.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S987>/If Action Subsystem3' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_kf.y) - 1)))) <= 44)
    {
        /* Outputs for IfAction SubSystem: '<S987>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S993>/Action Port'
         */
        OHSR_ac_IfActionSubsystem4((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_kf.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S987>/If Action Subsystem4' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S987>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S994>/Action Port'
         */
        OHSR_ac_IfActionSubsystem5((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_kf.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_ib);

        /* End of Outputs for SubSystem: '<S987>/If Action Subsystem5' */
    }

    /* End of If: '<S987>/If' */

    /* MATLAB Function: '<S986>/MATLAB Function' incorporates:
     *  Selector: '<S958>/Selector'
     */
    /* MATLAB Function 'OPTL_StratIndexConv16Bit/GetBitFrom16BitRegister/MATLAB Function': '<S988>:1' */
    /* '<S988>:1:2' */
    bitmask = 0U;

    /* '<S988>:1:3' */
    rtb_Logical4_gu = true;

    /* '<S988>:1:4' */
    if (((sint32)rtb_Merge1_ib) < 16)
    {
        /* '<S988>:1:4' */
        /* '<S988>:1:5' */
        bitmask = (uint16)((uint32)(((uint32)1) << ((uint32)rtb_Merge1_ib)));
    }

    /* '<S988>:1:7' */
    if ((((sint32)
            rtb_TmpSignalConversionAtSelectorInport1[rtb_DataTypeConversion1_l])
         & ((sint32)bitmask)) == 0)
    {
        /* '<S988>:1:8' */
        /* '<S988>:1:9' */
        rtb_Logical4_gu = false;
    }

    /* Saturate: '<S938>/Saturation2' */
    if (((sint32)rtb_TmpSignalConversionAtVeOSMR_e_Actual) > 8)
    {
        /* DataTypeConversion: '<S824>/Data Type Conversion2' */
        rtb_Saturation1 = 8;
    }
    else
    {
        /* DataTypeConversion: '<S824>/Data Type Conversion2' */
        rtb_Saturation1 = (sint16)rtb_TmpSignalConversionAtVeOSMR_e_Actual;
    }

    /* End of Saturate: '<S938>/Saturation2' */
    for (i = 0; i < 6; i++)
    {
        /* Selector: '<S938>/Selector21' incorporates:
         *  Constant: '<S954>/Calib'
         *  DataTypeConversion: '<S536>/Data Type Conversion2'
         */
        rtb_Selector21[i] = HaOHSR_i_Nti_StgcStMap[(6 * ((sint32)
            VeOHSC_e_RngSel_ExtRngDsrd)) + i];
    }

    /* Selector: '<S938>/Selector4' incorporates:
     *  Constant: '<S947>/Calib'
     *  Constant: '<S949>/Calib'
     *  Constant: '<S951>/Calib'
     *  DataTypeConversion: '<S536>/Data Type Conversion2'
     *  Selector: '<S938>/Selector11'
     *  Selector: '<S938>/Selector13'
     *  Selector: '<S938>/Selector14'
     *  Selector: '<S938>/Selector6'
     *  Selector: '<S938>/Selector8'
     */
    i = (((sint32)rtb_Saturation1) * 8) + ((sint32)VeOHSC_e_RngSel_ExtRngDsrd);

    /* Sum: '<S938>/Sum' incorporates:
     *  Constant: '<S938>/Constant Value1'
     *  Constant: '<S951>/Calib'
     *  Constant: '<S952>/Calib'
     *  Selector: '<S938>/Selector14'
     *  Selector: '<S938>/Selector4'
     */
    rtb_Saturation1 = (sint16)
        (HaOHSR_i_InputSpeed_N_MinMax_Idx[HaOHSR_i_InputSpeed_N_Idx[(i)] - 1] +
         3);

    /* Sum: '<S938>/Sum1' incorporates:
     *  Constant: '<S938>/Constant Value2'
     *  Constant: '<S947>/Calib'
     *  Constant: '<S948>/Calib'
     *  Selector: '<S938>/Selector11'
     *  Selector: '<S938>/Selector6'
     */
    rtb_Sum1_h = (sint16)
        (HaOHSR_i_InputSpeed_M1_MinMax_Idx[HaOHSR_i_InputSpeed_M1_Idx[(i)] - 1]
         + 3);

    /* Sum: '<S938>/Sum2' incorporates:
     *  Constant: '<S938>/Constant Value3'
     *  Constant: '<S949>/Calib'
     *  Constant: '<S950>/Calib'
     *  Selector: '<S938>/Selector13'
     *  Selector: '<S938>/Selector8'
     */
    rtb_Sum2_g = (sint16)
        (HaOHSR_i_InputSpeed_M2_MinMax_Idx[HaOHSR_i_InputSpeed_M2_Idx[(i)] - 1]
         + 3);

    /* Switch: '<S938>/Switch2' incorporates:
     *  Constant: '<S938>/Constant Value4'
     *  Constant: '<S953>/Calib'
     *  Logic: '<S938>/Logical9'
     *  MATLAB Function: '<S946>/MATLAB Function'
     *  RelationalOperator: '<S938>/Comparison9'
     *  Selector: '<S938>/Selector25'
     *  Switch: '<S960>/Switch1'
     */
    if ((((sint32)HaOHSR_i_MtrBSpeed_N_Idx[(rtb_Switch5_jr_tmp)]) == 10) ||
            rtb_AND_er)
    {
        /* Switch: '<S938>/Switch2' */
        rtb_Merge1_ib = HaOHSR_i_MtrBSpeed_N_Idx[(rtb_Switch5_jr_tmp)];
    }
    else if (rtb_AND_fo)
    {
        /* Switch: '<S960>/Switch1' incorporates:
         *  Constant: '<S938>/Constant Value5'
         *  Switch: '<S938>/Switch2'
         */
        rtb_Merge1_ib = 1U;
    }
    else
    {
        /* Switch: '<S938>/Switch2' incorporates:
         *  Switch: '<S960>/Switch1'
         *  UnitDelay: '<S960>/Unit Delay'
         */
        rtb_Merge1_ib = OHSR_ac_DW.UnitDelay_DSTATE_p1;
    }

    /* End of Switch: '<S938>/Switch2' */

    /* Switch: '<S938>/Switch3' incorporates:
     *  MATLAB Function: '<S964>/MATLAB Function'
     *  Switch: '<S959>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeOSMR_b_EngRev)
    {
        /* Switch: '<S938>/Switch3' incorporates:
         *  Constant: '<S951>/Calib'
         *  Selector: '<S938>/Selector12'
         */
        VeOHSC_i_SlctnIdx_N = HaOHSR_i_InputSpeed_N_Idx[(rtb_Switch5_jr_tmp)];
    }
    else if (rtb_AND_mo)
    {
        /* Switch: '<S959>/Switch1' incorporates:
         *  Constant: '<S938>/Constant Value'
         *  Switch: '<S938>/Switch3'
         */
        VeOHSC_i_SlctnIdx_N = 1;
    }
    else
    {
        /* Switch: '<S938>/Switch3' incorporates:
         *  Switch: '<S959>/Switch1'
         *  UnitDelay: '<S959>/Unit Delay'
         */
        VeOHSC_i_SlctnIdx_N = OHSR_ac_DW.UnitDelay_DSTATE_hg;
    }

    /* End of Switch: '<S938>/Switch3' */

    /* Switch: '<S938>/Switch4' incorporates:
     *  MATLAB Function: '<S975>/MATLAB Function'
     *  Switch: '<S961>/Switch1'
     */
    if (rtb_UnitDelay_lad)
    {
        /* Switch: '<S938>/Switch4' incorporates:
         *  Constant: '<S947>/Calib'
         *  Selector: '<S938>/Selector10'
         */
        VeOHSC_i_SlctnIdx_M1 = HaOHSR_i_InputSpeed_M1_Idx[(rtb_Switch5_jr_tmp)];
    }
    else if (rtb_AND_o5)
    {
        /* Switch: '<S961>/Switch1' incorporates:
         *  Constant: '<S938>/Constant Value6'
         *  Switch: '<S938>/Switch4'
         */
        VeOHSC_i_SlctnIdx_M1 = 1;
    }
    else
    {
        /* Switch: '<S938>/Switch4' incorporates:
         *  Switch: '<S961>/Switch1'
         *  UnitDelay: '<S961>/Unit Delay'
         */
        VeOHSC_i_SlctnIdx_M1 = OHSR_ac_DW.UnitDelay_DSTATE_dt;
    }

    /* End of Switch: '<S938>/Switch4' */

    /* Switch: '<S938>/Switch5' incorporates:
     *  MATLAB Function: '<S986>/MATLAB Function'
     *  Switch: '<S962>/Switch1'
     */
    if (rtb_Logical4_gu)
    {
        /* Switch: '<S938>/Switch5' incorporates:
         *  Constant: '<S949>/Calib'
         *  Selector: '<S938>/Selector9'
         */
        VeOHSC_i_SlctnIdx_M2 = HaOHSR_i_InputSpeed_M2_Idx[(rtb_Switch5_jr_tmp)];
    }
    else if (rtb_AND_h)
    {
        /* Switch: '<S962>/Switch1' incorporates:
         *  Constant: '<S938>/Constant Value7'
         *  Switch: '<S938>/Switch5'
         */
        VeOHSC_i_SlctnIdx_M2 = 1;
    }
    else
    {
        /* Switch: '<S938>/Switch5' incorporates:
         *  Switch: '<S962>/Switch1'
         *  UnitDelay: '<S962>/Unit Delay'
         */
        VeOHSC_i_SlctnIdx_M2 = OHSR_ac_DW.UnitDelay_DSTATE_p20;
    }

    /* End of Switch: '<S938>/Switch5' */

    /* Switch: '<S959>/Switch3' incorporates:
     *  Constant: '<S938>/Constant Value'
     *  UnitDelay: '<S959>/Unit Delay'
     */
    if (rtb_AND_mo)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_hg = 1;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_hg = VeOHSC_i_SlctnIdx_N;
    }

    /* End of Switch: '<S959>/Switch3' */

    /* Switch: '<S960>/Switch3' incorporates:
     *  Constant: '<S938>/Constant Value5'
     *  UnitDelay: '<S960>/Unit Delay'
     */
    if (rtb_AND_fo)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_p1 = 1U;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_p1 = rtb_Merge1_ib;
    }

    /* End of Switch: '<S960>/Switch3' */

    /* Switch: '<S961>/Switch3' incorporates:
     *  Constant: '<S938>/Constant Value6'
     *  UnitDelay: '<S961>/Unit Delay'
     */
    if (rtb_AND_o5)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_dt = 1;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_dt = VeOHSC_i_SlctnIdx_M1;
    }

    /* End of Switch: '<S961>/Switch3' */

    /* Switch: '<S962>/Switch3' incorporates:
     *  Constant: '<S938>/Constant Value7'
     *  UnitDelay: '<S962>/Unit Delay'
     */
    if (rtb_AND_h)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_p20 = 1;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_p20 = VeOHSC_i_SlctnIdx_M2;
    }

    /* End of Switch: '<S962>/Switch3' */

    /* Update for UnitDelay: '<S938>/Unit Delay1' incorporates:
     *  SignalConversion generated from: '<S2>/VeOSMR_e_ActualGear'
     */
    OHSR_ac_DW.UnitDelay1_DSTATE_a = rtb_TmpSignalConversionAtVeOSMR_e_Actual;

    /* Update for UnitDelay: '<S938>/Unit Delay2' incorporates:
     *  Selector: '<S551>/Selector'
     */
    OHSR_ac_DW.UnitDelay2_DSTATE_hd = VeOHSC_e_RngSel_ExtRngDsrd;

    /* Update for UnitDelay: '<S938>/Unit Delay3' incorporates:
     *  SignalConversion generated from: '<S2>/VeOSMR_e_TargetGear'
     */
    OHSR_ac_DW.UnitDelay3_DSTATE_i = rtb_TmpSignalConversionAtVeOSMR_e_Target;

    /* End of Outputs for SubSystem: '<S934>/Indexing' */

    /* Outputs for Atomic SubSystem: '<S934>/InputSpd' */
    /* Logic: '<S939>/Logical2' incorporates:
     *  Constant: '<S1003>/Calib'
     *  Constant: '<S1006>/Calib'
     *  Constant: '<S999>/Calib'
     *  Logic: '<S939>/Logical1'
     *  Logic: '<S939>/Logical8'
     */
    rtb_AND_h = ((((KeOHSR_b_Enbl_ShftEfftRdctn_M1) &&
                   (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_fa)) ||
                  ((KeOHSR_b_TCaseN4HiShft_UseIdleSpd_M1) &&
                   (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_fy))) ||
                 (HeOHSR_b_M1ProSel_UseIdleSpdBlend));

    /* Logic: '<S939>/Logical4' incorporates:
     *  Constant: '<S1002>/Calib'
     *  Constant: '<S1005>/Calib'
     *  Constant: '<S1008>/Calib'
     *  Logic: '<S939>/Logical3'
     *  Logic: '<S939>/Logical7'
     */
    rtb_Logical4_gu = ((((KeOHSR_b_Enbl_ShftEfftRdctn_N) &&
                         (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_fa)) ||
                        ((KeOHSR_b_TCaseN4HiShft_UseIdleSpd_N) &&
                         (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_fy))) ||
                       (HeOHSR_b_NProSel_UseIdleSpdBlend));

    /* RelationalOperator: '<S939>/Comparison3' incorporates:
     *  Merge: '<Root>/VeOHSR_e_ILEState_IRV_Merge'
     *  RelationalOperator: '<S939>/Comparison1'
     *  SignalConversion generated from: '<S2>/VeOHSR_e_ILEState'
     */
    rtb_Logical6_i_tmp = Rte_IrvRead_OHSR_MedTED_VeOHSR_e_ILEState_write_IRV();

    /* Logic: '<S939>/Logical6' incorporates:
     *  Constant: '<S1000>/Calib'
     *  Constant: '<S1001>/Calib'
     *  Constant: '<S1004>/Calib'
     *  Constant: '<S1007>/Calib'
     *  Constant: '<S997>/Constant'
     *  Constant: '<S998>/Constant'
     *  Logic: '<S939>/Logical11'
     *  Logic: '<S939>/Logical12'
     *  Logic: '<S939>/Logical5'
     *  Logic: '<S939>/Logical9'
     *  RelationalOperator: '<S939>/Comparison1'
     *  RelationalOperator: '<S939>/Comparison3'
     */
    rtb_AND_o5 = (((((KeOHSR_b_Enbl_ShftEfftRdctn_M2) &&
                     (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_fa)) ||
                    ((KeOHSR_b_TCaseN4HiShft_UseIdleSpd_M2) &&
                     (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_fy))) ||
                   (HeOHSR_b_M2ProSel_UseIdleSpdBlend)) || ((HeOHSR_b_NFZEnbl) &&
                   ((((uint32)rtb_Logical6_i_tmp) == CeOHSR_e_NeutralState) ||
                    (((uint32)rtb_Logical6_i_tmp) == CeOHSR_e_CreepState))));

    /* Outputs for Atomic SubSystem: '<S939>/MinSpeeds' */
    /* Outputs for Atomic SubSystem: '<S939>/MaxSpeeds' */
    /* Outputs for Atomic SubSystem: '<S934>/Indexing' */
    /* Selector: '<S1014>/Selector3' incorporates:
     *  Constant: '<S951>/Calib'
     *  Constant: '<S952>/Calib'
     *  Selector: '<S1036>/Selector3'
     *  Selector: '<S938>/Selector12'
     *  Selector: '<S938>/Selector3'
     */
    i = ((sint32)HaOHSR_i_InputSpeed_N_MinMax_Idx[HaOHSR_i_InputSpeed_N_Idx
         [(rtb_Switch5_jr_tmp)] - 1]) - 1;

    /* End of Outputs for SubSystem: '<S934>/Indexing' */
    /* End of Outputs for SubSystem: '<S939>/MinSpeeds' */
    rtb_UnitDelay_cr_tmp = rtb_TmpSignalConversionAtSelector3Inport[i];

    /* UnitDelay: '<S875>/Unit Delay' incorporates:
     *  Logic: '<S1014>/Logical1'
     *  RelationalOperator: '<S1014>/Comparison1'
     *  Selector: '<S1014>/Selector3'
     *  UnitDelay: '<S1014>/Unit Delay2'
     */
    rtb_UnitDelay_lad = (rtb_Logical2_jm || (rtb_UnitDelay_cr_tmp >
                          OHSR_ac_DW.UnitDelay2_DSTATE_d));

    /* Switch: '<S1024>/Switch1' incorporates:
     *  Switch: '<S1025>/Switch1'
     *  Switch: '<S1026>/Switch1'
     */
    if (rtb_UnitDelay_lad)
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = rtb_UnitDelay_cr_tmp;

        /* UnitDelay: '<S874>/Unit Delay' */
        rtb_UnitDelay_lw = rtb_UnitDelay_cr_tmp;

        /* Lookup_n-D: '<S851>/Vector' */
        rtb_Vector = rtb_UnitDelay_cr_tmp;
    }
    else
    {
        /* Switch: '<S826>/Switch2' incorporates:
         *  UnitDelay: '<S1024>/Unit Delay'
         */
        rtb_Switch5_fw = OHSR_ac_DW.UnitDelay_DSTATE_kp;

        /* UnitDelay: '<S874>/Unit Delay' incorporates:
         *  UnitDelay: '<S1025>/Unit Delay'
         */
        rtb_UnitDelay_lw = OHSR_ac_DW.UnitDelay_DSTATE_da;

        /* Lookup_n-D: '<S851>/Vector' incorporates:
         *  UnitDelay: '<S1026>/Unit Delay'
         */
        rtb_Vector = OHSR_ac_DW.UnitDelay_DSTATE_e;
    }

    /* End of Switch: '<S1024>/Switch1' */

    /* Selector: '<S1015>/Selector3' */
    rtb_Comparison5_bs_tmp =
        rtb_TmpSignalConversionAtSelector3Inport[rtb_Saturation1 - 1];

    /* RelationalOperator: '<S824>/Comparison5' incorporates:
     *  Logic: '<S1015>/Logical1'
     *  RelationalOperator: '<S1015>/Comparison1'
     *  Selector: '<S1015>/Selector3'
     *  UnitDelay: '<S1015>/Unit Delay2'
     */
    rtb_AND_mo = (rtb_TmpSignalConversionAtVeSTRR_b_EngOff ||
                  (rtb_Comparison5_bs_tmp > OHSR_ac_DW.UnitDelay2_DSTATE_b));

    /* Switch: '<S1027>/Switch1' incorporates:
     *  Switch: '<S1028>/Switch1'
     *  Switch: '<S1029>/Switch1'
     */
    if (rtb_AND_mo)
    {
        /* Switch: '<S1057>/Switch1' */
        rtb_Switch1_cj = rtb_Comparison5_bs_tmp;

        /* Switch: '<S1054>/Switch1' */
        rtb_Switch1_an = rtb_Comparison5_bs_tmp;

        /* Switch: '<S1055>/Switch1' */
        rtb_Switch1_d2 = rtb_Comparison5_bs_tmp;
    }
    else
    {
        /* Switch: '<S1057>/Switch1' incorporates:
         *  UnitDelay: '<S1027>/Unit Delay'
         */
        rtb_Switch1_cj = OHSR_ac_DW.UnitDelay_DSTATE_h5;

        /* Switch: '<S1054>/Switch1' incorporates:
         *  UnitDelay: '<S1028>/Unit Delay'
         */
        rtb_Switch1_an = OHSR_ac_DW.UnitDelay_DSTATE_fb;

        /* Switch: '<S1055>/Switch1' incorporates:
         *  UnitDelay: '<S1029>/Unit Delay'
         */
        rtb_Switch1_d2 = OHSR_ac_DW.UnitDelay_DSTATE_o5;
    }

    /* End of Switch: '<S1027>/Switch1' */

    /* MinMax: '<S1009>/MinMax3' incorporates:
     *  Gain: '<S1014>/Gain'
     *  Gain: '<S1015>/Gain'
     *  Sum: '<S1014>/Sum'
     *  Sum: '<S1015>/Sum'
     */
    VeOHSC_n_NiMax_N = fmaxf((((rtb_UnitDelay_cr_tmp + rtb_Switch5_fw) +
        rtb_UnitDelay_lw) + rtb_Vector) * 0.25F, (((rtb_Comparison5_bs_tmp +
        rtb_Switch1_cj) + rtb_Switch1_an) + rtb_Switch1_d2) * 0.25F);

    /* Outputs for Atomic SubSystem: '<S939>/MinSpeeds' */
    /* Outputs for Atomic SubSystem: '<S934>/Indexing' */
    /* Selector: '<S1016>/Selector3' incorporates:
     *  Constant: '<S947>/Calib'
     *  Constant: '<S948>/Calib'
     *  Selector: '<S1038>/Selector3'
     *  Selector: '<S938>/Selector10'
     *  Selector: '<S938>/Selector5'
     */
    rtb_Logical8_a_tmp = ((sint32)
                          HaOHSR_i_InputSpeed_M1_MinMax_Idx[HaOHSR_i_InputSpeed_M1_Idx
                          [(rtb_Switch5_jr_tmp)] - 1]) - 1;

    /* End of Outputs for SubSystem: '<S934>/Indexing' */
    /* End of Outputs for SubSystem: '<S939>/MinSpeeds' */
    rtb_Logical8_a_tmp_0 =
        rtb_TmpSignalConversionAtSelector3Inport[rtb_Logical8_a_tmp];

    /* Logic: '<S820>/Logical8' incorporates:
     *  Logic: '<S1016>/Logical1'
     *  RelationalOperator: '<S1016>/Comparison1'
     *  Selector: '<S1016>/Selector3'
     *  UnitDelay: '<S1016>/Unit Delay2'
     */
    rtb_AND_fo = (rtb_Logical2_jm || (rtb_Logical8_a_tmp_0 >
                   OHSR_ac_DW.UnitDelay2_DSTATE_j));

    /* Switch: '<S1030>/Switch1' incorporates:
     *  Switch: '<S1031>/Switch1'
     *  Switch: '<S1032>/Switch1'
     */
    if (rtb_AND_fo)
    {
        /* Lookup_n-D: '<S851>/Vector' */
        rtb_Vector = rtb_Logical8_a_tmp_0;

        /* Switch: '<S1055>/Switch1' */
        rtb_Switch1_d2 = rtb_Logical8_a_tmp_0;

        /* Switch: '<S1052>/Switch1' */
        rtb_Switch1_a4 = rtb_Logical8_a_tmp_0;
    }
    else
    {
        /* Lookup_n-D: '<S851>/Vector' incorporates:
         *  UnitDelay: '<S1030>/Unit Delay'
         */
        rtb_Vector = OHSR_ac_DW.UnitDelay_DSTATE_m5;

        /* Switch: '<S1055>/Switch1' incorporates:
         *  UnitDelay: '<S1031>/Unit Delay'
         */
        rtb_Switch1_d2 = OHSR_ac_DW.UnitDelay_DSTATE_cv;

        /* Switch: '<S1052>/Switch1' incorporates:
         *  UnitDelay: '<S1032>/Unit Delay'
         */
        rtb_Switch1_a4 = OHSR_ac_DW.UnitDelay_DSTATE_ld;
    }

    /* End of Switch: '<S1030>/Switch1' */

    /* Selector: '<S1017>/Selector3' */
    rtb_UnitDelay_kh_tmp = rtb_TmpSignalConversionAtSelector3Inport[rtb_Sum1_h -
        1];

    /* UnitDelay: '<S918>/Unit Delay' incorporates:
     *  Logic: '<S1017>/Logical1'
     *  RelationalOperator: '<S1017>/Comparison1'
     *  Selector: '<S1017>/Selector3'
     *  UnitDelay: '<S1017>/Unit Delay2'
     */
    rtb_AND_er = (rtb_TmpSignalConversionAtVeSTRR_b_EngOff ||
                  (rtb_UnitDelay_kh_tmp > OHSR_ac_DW.UnitDelay2_DSTATE_o));

    /* Switch: '<S1033>/Switch1' incorporates:
     *  Switch: '<S1034>/Switch1'
     *  Switch: '<S1035>/Switch1'
     */
    if (rtb_AND_er)
    {
        /* Switch: '<S1051>/Switch1' */
        rtb_Switch1_lb = rtb_UnitDelay_kh_tmp;

        /* Sum: '<S1209>/Sum2' */
        rtb_Abs1 = rtb_UnitDelay_kh_tmp;

        /* Product: '<S921>/Multiplication' */
        rtb_Merge1 = rtb_UnitDelay_kh_tmp;
    }
    else
    {
        /* Switch: '<S1051>/Switch1' incorporates:
         *  UnitDelay: '<S1033>/Unit Delay'
         */
        rtb_Switch1_lb = OHSR_ac_DW.UnitDelay_DSTATE_hc;

        /* Sum: '<S1209>/Sum2' incorporates:
         *  UnitDelay: '<S1034>/Unit Delay'
         */
        rtb_Abs1 = OHSR_ac_DW.UnitDelay_DSTATE_gx;

        /* Product: '<S921>/Multiplication' incorporates:
         *  UnitDelay: '<S1035>/Unit Delay'
         */
        rtb_Merge1 = OHSR_ac_DW.UnitDelay_DSTATE_i;
    }

    /* End of Switch: '<S1033>/Switch1' */

    /* MinMax: '<S1009>/MinMax4' incorporates:
     *  Gain: '<S1016>/Gain'
     *  Gain: '<S1017>/Gain'
     *  Sum: '<S1016>/Sum'
     *  Sum: '<S1017>/Sum'
     */
    VeOHSC_n_NiMax_M1 = fmaxf((((rtb_Logical8_a_tmp_0 + rtb_Vector) +
        rtb_Switch1_d2) + rtb_Switch1_a4) * 0.25F, (((rtb_UnitDelay_kh_tmp +
        rtb_Switch1_lb) + rtb_Abs1) + rtb_Merge1) * 0.25F);

    /* Outputs for Atomic SubSystem: '<S939>/MinSpeeds' */
    /* Outputs for Atomic SubSystem: '<S934>/Indexing' */
    /* Selector: '<S1012>/Selector3' incorporates:
     *  Constant: '<S949>/Calib'
     *  Constant: '<S950>/Calib'
     *  Selector: '<S1040>/Selector3'
     *  Selector: '<S938>/Selector7'
     *  Selector: '<S938>/Selector9'
     */
    rtb_Switch5_jr_tmp = ((sint32)
                          HaOHSR_i_InputSpeed_M2_MinMax_Idx[HaOHSR_i_InputSpeed_M2_Idx
                          [(rtb_Switch5_jr_tmp)] - 1]) - 1;

    /* End of Outputs for SubSystem: '<S934>/Indexing' */
    /* End of Outputs for SubSystem: '<S939>/MinSpeeds' */
    rtb_Selector1_os_tmp =
        rtb_TmpSignalConversionAtSelector3Inport[rtb_Switch5_jr_tmp];

    /* Selector: '<S546>/Selector1' incorporates:
     *  Logic: '<S1012>/Logical1'
     *  RelationalOperator: '<S1012>/Comparison1'
     *  Selector: '<S1012>/Selector3'
     *  UnitDelay: '<S1012>/Unit Delay2'
     */
    rtb_Selector1_dv = (rtb_Logical2_jm || (rtb_Selector1_os_tmp >
                         OHSR_ac_DW.UnitDelay2_DSTATE_h));

    /* Switch: '<S1018>/Switch1' incorporates:
     *  Switch: '<S1019>/Switch1'
     *  Switch: '<S1020>/Switch1'
     */
    if (rtb_Selector1_dv)
    {
        /* Switch: '<S1052>/Switch1' */
        rtb_Switch1_a4 = rtb_Selector1_os_tmp;

        /* Product: '<S921>/Multiplication' */
        rtb_Merge1 = rtb_Selector1_os_tmp;

        /* Merge: '<S536>/Merge4' */
        rtb_Merge4 = rtb_Selector1_os_tmp;
    }
    else
    {
        /* Switch: '<S1052>/Switch1' incorporates:
         *  UnitDelay: '<S1018>/Unit Delay'
         */
        rtb_Switch1_a4 = OHSR_ac_DW.UnitDelay_DSTATE_jc;

        /* Product: '<S921>/Multiplication' incorporates:
         *  UnitDelay: '<S1019>/Unit Delay'
         */
        rtb_Merge1 = OHSR_ac_DW.UnitDelay_DSTATE_nl;

        /* Merge: '<S536>/Merge4' incorporates:
         *  UnitDelay: '<S1020>/Unit Delay'
         */
        rtb_Merge4 = OHSR_ac_DW.UnitDelay_DSTATE_dp;
    }

    /* End of Switch: '<S1018>/Switch1' */

    /* Selector: '<S1013>/Selector3' */
    rtb_Selector2_p_tmp = rtb_TmpSignalConversionAtSelector3Inport[rtb_Sum2_g -
        1];

    /* Selector: '<S546>/Selector2' incorporates:
     *  Logic: '<S1013>/Logical1'
     *  RelationalOperator: '<S1013>/Comparison1'
     *  Selector: '<S1013>/Selector3'
     *  UnitDelay: '<S1013>/Unit Delay2'
     */
    rtb_TmpSignalConversionAtVeOSMR_b_EngRev =
        (rtb_TmpSignalConversionAtVeSTRR_b_EngOff || (rtb_Selector2_p_tmp >
          OHSR_ac_DW.UnitDelay2_DSTATE_m));

    /* Switch: '<S1021>/Switch1' incorporates:
     *  Switch: '<S1022>/Switch1'
     *  Switch: '<S1023>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeOSMR_b_EngRev)
    {
        /* Merge: '<S536>/Merge10' */
        rtb_Selector1_h2 = rtb_Selector2_p_tmp;

        /* Merge: '<S536>/Merge3' */
        rtb_Merge3 = rtb_Selector2_p_tmp;

        /* Product: '<S923>/Multiplication' */
        rtb_Multiplication_f = rtb_Selector2_p_tmp;
    }
    else
    {
        /* Merge: '<S536>/Merge10' incorporates:
         *  UnitDelay: '<S1021>/Unit Delay'
         */
        rtb_Selector1_h2 = OHSR_ac_DW.UnitDelay_DSTATE_dz;

        /* Merge: '<S536>/Merge3' incorporates:
         *  UnitDelay: '<S1022>/Unit Delay'
         */
        rtb_Merge3 = OHSR_ac_DW.UnitDelay_DSTATE_lx;

        /* Product: '<S923>/Multiplication' incorporates:
         *  UnitDelay: '<S1023>/Unit Delay'
         */
        rtb_Multiplication_f = OHSR_ac_DW.UnitDelay_DSTATE_gb;
    }

    /* End of Switch: '<S1021>/Switch1' */

    /* MinMax: '<S1009>/MinMax5' incorporates:
     *  Gain: '<S1012>/Gain'
     *  Gain: '<S1013>/Gain'
     *  Sum: '<S1012>/Sum'
     *  Sum: '<S1013>/Sum'
     */
    VeOHSC_n_NiMax_M2 = fmaxf((((rtb_Selector1_os_tmp + rtb_Switch1_a4) +
        rtb_Merge1) + rtb_Merge4) * 0.25F, (((rtb_Selector2_p_tmp +
        rtb_Selector1_h2) + rtb_Merge3) + rtb_Multiplication_f) * 0.25F);

    /* Switch: '<S1018>/Switch3' incorporates:
     *  UnitDelay: '<S1018>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_jc = rtb_Selector1_os_tmp;

    /* Switch: '<S1019>/Switch3' incorporates:
     *  Switch: '<S1020>/Switch3'
     *  UnitDelay: '<S1019>/Unit Delay'
     *  UnitDelay: '<S1020>/Unit Delay'
     */
    if (rtb_Selector1_dv)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_nl = rtb_Selector1_os_tmp;
        OHSR_ac_DW.UnitDelay_DSTATE_dp = rtb_Selector1_os_tmp;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_nl = rtb_Switch1_a4;
        OHSR_ac_DW.UnitDelay_DSTATE_dp = rtb_Merge1;
    }

    /* End of Switch: '<S1019>/Switch3' */

    /* Switch: '<S1021>/Switch3' incorporates:
     *  UnitDelay: '<S1021>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_dz = rtb_Selector2_p_tmp;

    /* Switch: '<S1022>/Switch3' incorporates:
     *  Switch: '<S1023>/Switch3'
     *  UnitDelay: '<S1022>/Unit Delay'
     *  UnitDelay: '<S1023>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeOSMR_b_EngRev)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_lx = rtb_Selector2_p_tmp;
        OHSR_ac_DW.UnitDelay_DSTATE_gb = rtb_Selector2_p_tmp;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_lx = rtb_Selector1_h2;
        OHSR_ac_DW.UnitDelay_DSTATE_gb = rtb_Merge3;
    }

    /* End of Switch: '<S1022>/Switch3' */

    /* Switch: '<S1024>/Switch3' incorporates:
     *  UnitDelay: '<S1024>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_kp = rtb_UnitDelay_cr_tmp;

    /* Switch: '<S1025>/Switch3' incorporates:
     *  Switch: '<S1026>/Switch3'
     *  UnitDelay: '<S1025>/Unit Delay'
     *  UnitDelay: '<S1026>/Unit Delay'
     */
    if (rtb_UnitDelay_lad)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_da = rtb_UnitDelay_cr_tmp;
        OHSR_ac_DW.UnitDelay_DSTATE_e = rtb_UnitDelay_cr_tmp;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_da = rtb_Switch5_fw;
        OHSR_ac_DW.UnitDelay_DSTATE_e = rtb_UnitDelay_lw;
    }

    /* End of Switch: '<S1025>/Switch3' */

    /* Switch: '<S1027>/Switch3' incorporates:
     *  UnitDelay: '<S1027>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_h5 = rtb_Comparison5_bs_tmp;

    /* Switch: '<S1028>/Switch3' incorporates:
     *  Switch: '<S1029>/Switch3'
     *  UnitDelay: '<S1028>/Unit Delay'
     *  UnitDelay: '<S1029>/Unit Delay'
     */
    if (rtb_AND_mo)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_fb = rtb_Comparison5_bs_tmp;
        OHSR_ac_DW.UnitDelay_DSTATE_o5 = rtb_Comparison5_bs_tmp;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_fb = rtb_Switch1_cj;
        OHSR_ac_DW.UnitDelay_DSTATE_o5 = rtb_Switch1_an;
    }

    /* End of Switch: '<S1028>/Switch3' */

    /* Switch: '<S1030>/Switch3' incorporates:
     *  UnitDelay: '<S1030>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_m5 = rtb_Logical8_a_tmp_0;

    /* Switch: '<S1031>/Switch3' incorporates:
     *  Switch: '<S1032>/Switch3'
     *  UnitDelay: '<S1031>/Unit Delay'
     *  UnitDelay: '<S1032>/Unit Delay'
     */
    if (rtb_AND_fo)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_cv = rtb_Logical8_a_tmp_0;
        OHSR_ac_DW.UnitDelay_DSTATE_ld = rtb_Logical8_a_tmp_0;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_cv = rtb_Vector;
        OHSR_ac_DW.UnitDelay_DSTATE_ld = rtb_Switch1_d2;
    }

    /* End of Switch: '<S1031>/Switch3' */

    /* Switch: '<S1033>/Switch3' incorporates:
     *  UnitDelay: '<S1033>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_hc = rtb_UnitDelay_kh_tmp;

    /* Switch: '<S1034>/Switch3' incorporates:
     *  Switch: '<S1035>/Switch3'
     *  UnitDelay: '<S1034>/Unit Delay'
     *  UnitDelay: '<S1035>/Unit Delay'
     */
    if (rtb_AND_er)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_gx = rtb_UnitDelay_kh_tmp;
        OHSR_ac_DW.UnitDelay_DSTATE_i = rtb_UnitDelay_kh_tmp;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_gx = rtb_Switch1_lb;
        OHSR_ac_DW.UnitDelay_DSTATE_i = rtb_Abs1;
    }

    /* End of Switch: '<S1034>/Switch3' */

    /* Update for UnitDelay: '<S1014>/Unit Delay2' */
    OHSR_ac_DW.UnitDelay2_DSTATE_d = rtb_UnitDelay_cr_tmp;

    /* Update for UnitDelay: '<S1015>/Unit Delay2' */
    OHSR_ac_DW.UnitDelay2_DSTATE_b = rtb_Comparison5_bs_tmp;

    /* Update for UnitDelay: '<S1016>/Unit Delay2' */
    OHSR_ac_DW.UnitDelay2_DSTATE_j = rtb_Logical8_a_tmp_0;

    /* Update for UnitDelay: '<S1017>/Unit Delay2' */
    OHSR_ac_DW.UnitDelay2_DSTATE_o = rtb_UnitDelay_kh_tmp;

    /* Update for UnitDelay: '<S1012>/Unit Delay2' */
    OHSR_ac_DW.UnitDelay2_DSTATE_h = rtb_Selector1_os_tmp;

    /* Update for UnitDelay: '<S1013>/Unit Delay2' */
    OHSR_ac_DW.UnitDelay2_DSTATE_m = rtb_Selector2_p_tmp;

    /* End of Outputs for SubSystem: '<S939>/MaxSpeeds' */

    /* Switch: '<S939>/Switch7' incorporates:
     *  Logic: '<S939>/Logical10'
     */
    if ((OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_fa) ||
            (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_fy))
    {
        /* Switch: '<S939>/Switch7' incorporates:
         *  MinMax: '<S939>/MinMax6'
         */
        rtb_Switch7 = fmaxf(rtb_TmpSignalConversionAtVeOHSR_n_IdleSp,
                            OHSR_ac_B.TmpSignalConversionAtTransMin_ReadOutpor);
    }
    else
    {
        /* Switch: '<S939>/Switch7' */
        rtb_Switch7 = OHSR_ac_B.TmpSignalConversionAtTransMin_ReadOutpor;
    }

    /* End of Switch: '<S939>/Switch7' */

    /* Outputs for Atomic SubSystem: '<S939>/MinSpeeds' */
    /* SignalConversion generated from: '<S1036>/Selector3' */
    rtb_TmpSignalConversionAtSelector3Inport[0] =
        rtb_TmpSignalConversionAtVeOSMR_n_Inp_of;
    rtb_TmpSignalConversionAtSelector3Inport[1] =
        rtb_TmpSignalConversionAtVeOSMR_n_Inp_fc;
    rtb_TmpSignalConversionAtSelector3Inport[2] =
        rtb_TmpSignalConversionAtVeOSMR_n_Inpu_m;
    rtb_TmpSignalConversionAtSelector3Inport[3] =
        rtb_TmpSignalConversionAtVeOSMR_n_Inpu_o;
    rtb_TmpSignalConversionAtSelector3Inport[4] =
        rtb_TmpSignalConversionAtVeOSMR_n_Inpu_n;
    rtb_TmpSignalConversionAtSelector3Inport[5] =
        rtb_TmpSignalConversionAtVeOSMR_n_Inp_cr;

    /* Selector: '<S1036>/Selector3' */
    rtb_UnitDelay_kh_tmp = rtb_TmpSignalConversionAtSelector3Inport[i];

    /* UnitDelay: '<S918>/Unit Delay' incorporates:
     *  Logic: '<S1036>/Logical1'
     *  RelationalOperator: '<S1036>/Comparison'
     *  Selector: '<S1036>/Selector3'
     *  UnitDelay: '<S1036>/Unit Delay1'
     */
    rtb_AND_er = (rtb_Logical2_jm || (OHSR_ac_DW.UnitDelay1_DSTATE_n >
                   rtb_UnitDelay_kh_tmp));

    /* Switch: '<S1042>/Switch1' incorporates:
     *  Switch: '<S1043>/Switch1'
     *  Switch: '<S1044>/Switch1'
     */
    if (rtb_AND_er)
    {
        /* Sum: '<S1209>/Sum2' */
        rtb_Abs1 = rtb_UnitDelay_kh_tmp;

        /* Product: '<S921>/Multiplication' */
        rtb_Merge1 = rtb_UnitDelay_kh_tmp;

        /* Merge: '<S536>/Merge4' */
        rtb_Merge4 = rtb_UnitDelay_kh_tmp;
    }
    else
    {
        /* Sum: '<S1209>/Sum2' incorporates:
         *  UnitDelay: '<S1042>/Unit Delay'
         */
        rtb_Abs1 = OHSR_ac_DW.UnitDelay_DSTATE_m;

        /* Product: '<S921>/Multiplication' incorporates:
         *  UnitDelay: '<S1043>/Unit Delay'
         */
        rtb_Merge1 = OHSR_ac_DW.UnitDelay_DSTATE_l;

        /* Merge: '<S536>/Merge4' incorporates:
         *  UnitDelay: '<S1044>/Unit Delay'
         */
        rtb_Merge4 = OHSR_ac_DW.UnitDelay_DSTATE_nv;
    }

    /* End of Switch: '<S1042>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S939>/MaxSpeeds' */
    /* Selector: '<S1037>/Selector3' incorporates:
     *  Selector: '<S1015>/Selector3'
     */
    rtb_Selector1_os_tmp =
        rtb_TmpSignalConversionAtSelector3Inport[rtb_Saturation1 - 1];

    /* End of Outputs for SubSystem: '<S939>/MaxSpeeds' */

    /* Selector: '<S546>/Selector1' incorporates:
     *  Logic: '<S1037>/Logical1'
     *  RelationalOperator: '<S1037>/Comparison'
     *  Selector: '<S1037>/Selector3'
     *  UnitDelay: '<S1037>/Unit Delay1'
     */
    rtb_Selector1_dv = (rtb_TmpSignalConversionAtVeSTRR_b_EngOff ||
                        (OHSR_ac_DW.UnitDelay1_DSTATE_b > rtb_Selector1_os_tmp));

    /* Switch: '<S1045>/Switch1' incorporates:
     *  Switch: '<S1046>/Switch1'
     *  Switch: '<S1047>/Switch1'
     */
    if (rtb_Selector1_dv)
    {
        /* Merge: '<S536>/Merge10' */
        rtb_Selector1_h2 = rtb_Selector1_os_tmp;

        /* Merge: '<S536>/Merge3' */
        rtb_Merge3 = rtb_Selector1_os_tmp;

        /* Outputs for Atomic SubSystem: '<S939>/MaxSpeeds' */
        /* Product: '<S923>/Multiplication' incorporates:
         *  Selector: '<S1015>/Selector3'
         *  Selector: '<S1037>/Selector3'
         */
        rtb_Multiplication_f =
            rtb_TmpSignalConversionAtSelector3Inport[rtb_Saturation1 - 1];

        /* End of Outputs for SubSystem: '<S939>/MaxSpeeds' */
    }
    else
    {
        /* Merge: '<S536>/Merge10' incorporates:
         *  UnitDelay: '<S1045>/Unit Delay'
         */
        rtb_Selector1_h2 = OHSR_ac_DW.UnitDelay_DSTATE_cx;

        /* Merge: '<S536>/Merge3' incorporates:
         *  UnitDelay: '<S1046>/Unit Delay'
         */
        rtb_Merge3 = OHSR_ac_DW.UnitDelay_DSTATE_jp;

        /* Product: '<S923>/Multiplication' incorporates:
         *  UnitDelay: '<S1047>/Unit Delay'
         */
        rtb_Multiplication_f = OHSR_ac_DW.UnitDelay_DSTATE_f1;
    }

    /* End of Switch: '<S1045>/Switch1' */

    /* Switch: '<S1010>/Switch4' incorporates:
     *  Constant: '<S1010>/Constant Value9'
     */
    if (rtb_Logical4_gu)
    {
        rtb_TmpSignalConversionAtVeOSMR_n_Inp_of = rtb_Switch7;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOSMR_n_Inp_of = 99999.0F;
    }

    /* End of Switch: '<S1010>/Switch4' */

    /* MinMax: '<S1010>/MinMax' incorporates:
     *  Gain: '<S1036>/Gain'
     *  Gain: '<S1037>/Gain'
     *  Sum: '<S1036>/Sum'
     *  Sum: '<S1037>/Sum'
     */
    VeOHSC_n_NiMin_N = fminf(fminf((((rtb_UnitDelay_kh_tmp + rtb_Abs1) +
        rtb_Merge1) + rtb_Merge4) * 0.25F, (((rtb_Selector1_os_tmp +
        rtb_Selector1_h2) + rtb_Merge3) + rtb_Multiplication_f) * 0.25F),
        rtb_TmpSignalConversionAtVeOSMR_n_Inp_of);

    /* Selector: '<S1038>/Selector3' */
    rtb_Selector2_p_tmp =
        rtb_TmpSignalConversionAtSelector3Inport[rtb_Logical8_a_tmp];

    /* Selector: '<S546>/Selector2' incorporates:
     *  Logic: '<S1038>/Logical1'
     *  RelationalOperator: '<S1038>/Comparison'
     *  Selector: '<S1038>/Selector3'
     *  UnitDelay: '<S1038>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeOSMR_b_EngRev = (rtb_Logical2_jm ||
        (OHSR_ac_DW.UnitDelay1_DSTATE_j > rtb_Selector2_p_tmp));

    /* Switch: '<S1048>/Switch1' incorporates:
     *  Switch: '<S1049>/Switch1'
     *  Switch: '<S1050>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeOSMR_b_EngRev)
    {
        /* Merge: '<S536>/Merge4' */
        rtb_Merge4 = rtb_Selector2_p_tmp;

        /* Product: '<S923>/Multiplication' */
        rtb_Multiplication_f = rtb_Selector2_p_tmp;

        /* Product: '<S814>/Multiplication' */
        rtb_Switch5_fw = rtb_Selector2_p_tmp;
    }
    else
    {
        /* Merge: '<S536>/Merge4' incorporates:
         *  UnitDelay: '<S1048>/Unit Delay'
         */
        rtb_Merge4 = OHSR_ac_DW.UnitDelay_DSTATE_fv;

        /* Product: '<S923>/Multiplication' incorporates:
         *  UnitDelay: '<S1049>/Unit Delay'
         */
        rtb_Multiplication_f = OHSR_ac_DW.UnitDelay_DSTATE_o;

        /* Product: '<S814>/Multiplication' incorporates:
         *  UnitDelay: '<S1050>/Unit Delay'
         */
        rtb_Switch5_fw = OHSR_ac_DW.UnitDelay_DSTATE_ai;
    }

    /* End of Switch: '<S1048>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S939>/MaxSpeeds' */
    /* Selector: '<S1039>/Selector3' incorporates:
     *  Selector: '<S1017>/Selector3'
     */
    rtb_Logical8_a_tmp_0 = rtb_TmpSignalConversionAtSelector3Inport[rtb_Sum1_h -
        1];

    /* End of Outputs for SubSystem: '<S939>/MaxSpeeds' */

    /* Logic: '<S820>/Logical8' incorporates:
     *  Logic: '<S1039>/Logical1'
     *  RelationalOperator: '<S1039>/Comparison'
     *  Selector: '<S1039>/Selector3'
     *  UnitDelay: '<S1039>/Unit Delay1'
     */
    rtb_AND_fo = (rtb_TmpSignalConversionAtVeSTRR_b_EngOff ||
                  (OHSR_ac_DW.UnitDelay1_DSTATE_jc > rtb_Logical8_a_tmp_0));

    /* Switch: '<S1051>/Switch1' incorporates:
     *  Switch: '<S1052>/Switch1'
     *  Switch: '<S1053>/Switch1'
     */
    if (rtb_AND_fo)
    {
        /* Switch: '<S1051>/Switch1' */
        rtb_Switch1_lb = rtb_Logical8_a_tmp_0;

        /* Switch: '<S1052>/Switch1' */
        rtb_Switch1_a4 = rtb_Logical8_a_tmp_0;

        /* Outputs for Atomic SubSystem: '<S939>/MaxSpeeds' */
        /* Switch: '<S1055>/Switch1' incorporates:
         *  Selector: '<S1017>/Selector3'
         *  Selector: '<S1039>/Selector3'
         */
        rtb_Switch1_d2 = rtb_TmpSignalConversionAtSelector3Inport[rtb_Sum1_h - 1];

        /* End of Outputs for SubSystem: '<S939>/MaxSpeeds' */
    }
    else
    {
        /* Switch: '<S1051>/Switch1' incorporates:
         *  UnitDelay: '<S1051>/Unit Delay'
         */
        rtb_Switch1_lb = OHSR_ac_DW.UnitDelay_DSTATE_d;

        /* Switch: '<S1052>/Switch1' incorporates:
         *  UnitDelay: '<S1052>/Unit Delay'
         */
        rtb_Switch1_a4 = OHSR_ac_DW.UnitDelay_DSTATE_fu;

        /* Switch: '<S1055>/Switch1' incorporates:
         *  UnitDelay: '<S1053>/Unit Delay'
         */
        rtb_Switch1_d2 = OHSR_ac_DW.UnitDelay_DSTATE_av;
    }

    /* End of Switch: '<S1051>/Switch1' */

    /* Switch: '<S1010>/Switch5' incorporates:
     *  Constant: '<S1010>/Constant Value10'
     */
    if (rtb_AND_h)
    {
        rtb_TmpSignalConversionAtVeOSMR_n_Inp_of = rtb_Switch7;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOSMR_n_Inp_of = 99999.0F;
    }

    /* End of Switch: '<S1010>/Switch5' */

    /* MinMax: '<S1010>/MinMax1' incorporates:
     *  Gain: '<S1038>/Gain'
     *  Gain: '<S1039>/Gain'
     *  Sum: '<S1038>/Sum'
     *  Sum: '<S1039>/Sum'
     */
    VeOHSC_n_NiMin_M1 = fminf(fminf((((rtb_Selector2_p_tmp + rtb_Merge4) +
        rtb_Multiplication_f) + rtb_Switch5_fw) * 0.25F, (((rtb_Logical8_a_tmp_0
        + rtb_Switch1_lb) + rtb_Switch1_a4) + rtb_Switch1_d2) * 0.25F),
        rtb_TmpSignalConversionAtVeOSMR_n_Inp_of);

    /* Selector: '<S1040>/Selector3' */
    rtb_Comparison5_bs_tmp =
        rtb_TmpSignalConversionAtSelector3Inport[rtb_Switch5_jr_tmp];

    /* RelationalOperator: '<S824>/Comparison5' incorporates:
     *  Logic: '<S1040>/Logical1'
     *  RelationalOperator: '<S1040>/Comparison'
     *  Selector: '<S1040>/Selector3'
     *  UnitDelay: '<S1040>/Unit Delay1'
     */
    rtb_AND_mo = (rtb_Logical2_jm || (OHSR_ac_DW.UnitDelay1_DSTATE_pw >
                   rtb_Comparison5_bs_tmp));

    /* Switch: '<S1054>/Switch1' incorporates:
     *  Switch: '<S1055>/Switch1'
     *  Switch: '<S1056>/Switch1'
     */
    if (rtb_AND_mo)
    {
        /* Switch: '<S1054>/Switch1' */
        rtb_Switch1_an = rtb_Comparison5_bs_tmp;

        /* Switch: '<S1055>/Switch1' */
        rtb_Switch1_d2 = rtb_Comparison5_bs_tmp;

        /* Product: '<S814>/Multiplication' */
        rtb_Switch5_fw = rtb_Comparison5_bs_tmp;
    }
    else
    {
        /* Switch: '<S1054>/Switch1' incorporates:
         *  UnitDelay: '<S1054>/Unit Delay'
         */
        rtb_Switch1_an = OHSR_ac_DW.UnitDelay_DSTATE_lo;

        /* Switch: '<S1055>/Switch1' incorporates:
         *  UnitDelay: '<S1055>/Unit Delay'
         */
        rtb_Switch1_d2 = OHSR_ac_DW.UnitDelay_DSTATE_dd;

        /* Product: '<S814>/Multiplication' incorporates:
         *  UnitDelay: '<S1056>/Unit Delay'
         */
        rtb_Switch5_fw = OHSR_ac_DW.UnitDelay_DSTATE_cr;
    }

    /* End of Switch: '<S1054>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S939>/MaxSpeeds' */
    /* Selector: '<S1041>/Selector3' incorporates:
     *  Selector: '<S1013>/Selector3'
     */
    rtb_UnitDelay_cr_tmp = rtb_TmpSignalConversionAtSelector3Inport[rtb_Sum2_g -
        1];

    /* End of Outputs for SubSystem: '<S939>/MaxSpeeds' */

    /* UnitDelay: '<S875>/Unit Delay' incorporates:
     *  Logic: '<S1041>/Logical1'
     *  RelationalOperator: '<S1041>/Comparison'
     *  Selector: '<S1041>/Selector3'
     *  UnitDelay: '<S1041>/Unit Delay1'
     */
    rtb_UnitDelay_lad = (rtb_TmpSignalConversionAtVeSTRR_b_EngOff ||
                         (OHSR_ac_DW.UnitDelay1_DSTATE_l > rtb_UnitDelay_cr_tmp));

    /* Switch: '<S1057>/Switch1' incorporates:
     *  Switch: '<S1058>/Switch1'
     *  Switch: '<S1059>/Switch1'
     */
    if (rtb_UnitDelay_lad)
    {
        /* Switch: '<S1057>/Switch1' */
        rtb_Switch1_cj = rtb_UnitDelay_cr_tmp;

        /* Lookup_n-D: '<S851>/Vector' */
        rtb_Vector = rtb_UnitDelay_cr_tmp;

        /* Outputs for Atomic SubSystem: '<S939>/MaxSpeeds' */
        /* UnitDelay: '<S874>/Unit Delay' incorporates:
         *  Selector: '<S1013>/Selector3'
         *  Selector: '<S1041>/Selector3'
         */
        rtb_UnitDelay_lw = rtb_TmpSignalConversionAtSelector3Inport[rtb_Sum2_g -
            1];

        /* End of Outputs for SubSystem: '<S939>/MaxSpeeds' */
    }
    else
    {
        /* Switch: '<S1057>/Switch1' incorporates:
         *  UnitDelay: '<S1057>/Unit Delay'
         */
        rtb_Switch1_cj = OHSR_ac_DW.UnitDelay_DSTATE_b;

        /* Lookup_n-D: '<S851>/Vector' incorporates:
         *  UnitDelay: '<S1058>/Unit Delay'
         */
        rtb_Vector = OHSR_ac_DW.UnitDelay_DSTATE_jz;

        /* UnitDelay: '<S874>/Unit Delay' incorporates:
         *  UnitDelay: '<S1059>/Unit Delay'
         */
        rtb_UnitDelay_lw = OHSR_ac_DW.UnitDelay_DSTATE_a5;
    }

    /* End of Switch: '<S1057>/Switch1' */

    /* Switch: '<S1010>/Switch6' incorporates:
     *  Constant: '<S1010>/Constant Value11'
     */
    if (rtb_AND_o5)
    {
        rtb_TmpSignalConversionAtVeOSMR_n_Inp_of = rtb_Switch7;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOSMR_n_Inp_of = 99999.0F;
    }

    /* End of Switch: '<S1010>/Switch6' */

    /* MinMax: '<S1010>/MinMax2' incorporates:
     *  Gain: '<S1040>/Gain'
     *  Gain: '<S1041>/Gain'
     *  Sum: '<S1040>/Sum'
     *  Sum: '<S1041>/Sum'
     */
    VeOHSC_n_NiMin_M2 = fminf(fminf((((rtb_Comparison5_bs_tmp + rtb_Switch1_an)
        + rtb_Switch1_d2) + rtb_Switch5_fw) * 0.25F, (((rtb_UnitDelay_cr_tmp +
        rtb_Switch1_cj) + rtb_Vector) + rtb_UnitDelay_lw) * 0.25F),
        rtb_TmpSignalConversionAtVeOSMR_n_Inp_of);

    /* Switch: '<S1042>/Switch3' incorporates:
     *  UnitDelay: '<S1042>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_m = rtb_UnitDelay_kh_tmp;

    /* Switch: '<S1043>/Switch3' incorporates:
     *  Switch: '<S1044>/Switch3'
     *  UnitDelay: '<S1043>/Unit Delay'
     *  UnitDelay: '<S1044>/Unit Delay'
     */
    if (rtb_AND_er)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_l = rtb_UnitDelay_kh_tmp;
        OHSR_ac_DW.UnitDelay_DSTATE_nv = rtb_UnitDelay_kh_tmp;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_l = rtb_Abs1;
        OHSR_ac_DW.UnitDelay_DSTATE_nv = rtb_Merge1;
    }

    /* End of Switch: '<S1043>/Switch3' */

    /* Switch: '<S1045>/Switch3' incorporates:
     *  UnitDelay: '<S1045>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_cx = rtb_Selector1_os_tmp;

    /* Switch: '<S1046>/Switch3' incorporates:
     *  Switch: '<S1047>/Switch3'
     *  UnitDelay: '<S1046>/Unit Delay'
     *  UnitDelay: '<S1047>/Unit Delay'
     */
    if (rtb_Selector1_dv)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_jp = rtb_Selector1_os_tmp;
        OHSR_ac_DW.UnitDelay_DSTATE_f1 = rtb_Selector1_os_tmp;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_jp = rtb_Selector1_h2;
        OHSR_ac_DW.UnitDelay_DSTATE_f1 = rtb_Merge3;
    }

    /* End of Switch: '<S1046>/Switch3' */

    /* Switch: '<S1048>/Switch3' incorporates:
     *  UnitDelay: '<S1048>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_fv = rtb_Selector2_p_tmp;

    /* Switch: '<S1049>/Switch3' incorporates:
     *  Switch: '<S1050>/Switch3'
     *  UnitDelay: '<S1049>/Unit Delay'
     *  UnitDelay: '<S1050>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeOSMR_b_EngRev)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_o = rtb_Selector2_p_tmp;
        OHSR_ac_DW.UnitDelay_DSTATE_ai = rtb_Selector2_p_tmp;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_o = rtb_Merge4;
        OHSR_ac_DW.UnitDelay_DSTATE_ai = rtb_Multiplication_f;
    }

    /* End of Switch: '<S1049>/Switch3' */

    /* Switch: '<S1051>/Switch3' incorporates:
     *  UnitDelay: '<S1051>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_d = rtb_Logical8_a_tmp_0;

    /* Switch: '<S1052>/Switch3' incorporates:
     *  Switch: '<S1053>/Switch3'
     *  UnitDelay: '<S1052>/Unit Delay'
     *  UnitDelay: '<S1053>/Unit Delay'
     */
    if (rtb_AND_fo)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_fu = rtb_Logical8_a_tmp_0;
        OHSR_ac_DW.UnitDelay_DSTATE_av = rtb_Logical8_a_tmp_0;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_fu = rtb_Switch1_lb;
        OHSR_ac_DW.UnitDelay_DSTATE_av = rtb_Switch1_a4;
    }

    /* End of Switch: '<S1052>/Switch3' */

    /* Switch: '<S1054>/Switch3' incorporates:
     *  UnitDelay: '<S1054>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_lo = rtb_Comparison5_bs_tmp;

    /* Switch: '<S1055>/Switch3' incorporates:
     *  Switch: '<S1056>/Switch3'
     *  UnitDelay: '<S1055>/Unit Delay'
     *  UnitDelay: '<S1056>/Unit Delay'
     */
    if (rtb_AND_mo)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_dd = rtb_Comparison5_bs_tmp;
        OHSR_ac_DW.UnitDelay_DSTATE_cr = rtb_Comparison5_bs_tmp;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_dd = rtb_Switch1_an;
        OHSR_ac_DW.UnitDelay_DSTATE_cr = rtb_Switch1_d2;
    }

    /* End of Switch: '<S1055>/Switch3' */

    /* Switch: '<S1057>/Switch3' incorporates:
     *  UnitDelay: '<S1057>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_b = rtb_UnitDelay_cr_tmp;

    /* Switch: '<S1058>/Switch3' incorporates:
     *  Switch: '<S1059>/Switch3'
     *  UnitDelay: '<S1058>/Unit Delay'
     *  UnitDelay: '<S1059>/Unit Delay'
     */
    if (rtb_UnitDelay_lad)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_jz = rtb_UnitDelay_cr_tmp;
        OHSR_ac_DW.UnitDelay_DSTATE_a5 = rtb_UnitDelay_cr_tmp;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_jz = rtb_Switch1_cj;
        OHSR_ac_DW.UnitDelay_DSTATE_a5 = rtb_Vector;
    }

    /* End of Switch: '<S1058>/Switch3' */

    /* Update for UnitDelay: '<S1036>/Unit Delay1' */
    OHSR_ac_DW.UnitDelay1_DSTATE_n = rtb_UnitDelay_kh_tmp;

    /* Update for UnitDelay: '<S1037>/Unit Delay1' */
    OHSR_ac_DW.UnitDelay1_DSTATE_b = rtb_Selector1_os_tmp;

    /* Update for UnitDelay: '<S1038>/Unit Delay1' */
    OHSR_ac_DW.UnitDelay1_DSTATE_j = rtb_Selector2_p_tmp;

    /* Update for UnitDelay: '<S1039>/Unit Delay1' */
    OHSR_ac_DW.UnitDelay1_DSTATE_jc = rtb_Logical8_a_tmp_0;

    /* Update for UnitDelay: '<S1040>/Unit Delay1' */
    OHSR_ac_DW.UnitDelay1_DSTATE_pw = rtb_Comparison5_bs_tmp;

    /* Update for UnitDelay: '<S1041>/Unit Delay1' */
    OHSR_ac_DW.UnitDelay1_DSTATE_l = rtb_UnitDelay_cr_tmp;

    /* End of Outputs for SubSystem: '<S939>/MinSpeeds' */

    /* Outputs for Atomic SubSystem: '<S939>/Selections_and_Alloweds' */
    /* SignalConversion generated from: '<S1063>/Selector' incorporates:
     *  Constant: '<S1011>/Constant Value2'
     *  SignalConversion generated from: '<S1060>/Selector'
     */
    rtb_TmpSignalConversionAtSelectorInpor_a[0] =
        rtb_TmpSignalConversionAtVeOSMR_d_Manual;
    rtb_TmpSignalConversionAtSelectorInpor_a[1] =
        rtb_TmpSignalConversionAtVeOSMR_d_Manu_c;
    rtb_TmpSignalConversionAtSelectorInpor_a[2] =
        rtb_TmpSignalConversionAtVeOSMR_d_Manu_m;
    rtb_TmpSignalConversionAtSelectorInpor_a[3] = 1U;

    /* Switch: '<S1011>/Switch1' */
    if (rtb_Logical4_gu)
    {
        /* Switch: '<S1011>/Switch1' incorporates:
         *  Constant: '<S1011>/Constant Value6'
         */
        VeOHSC_i_SlctnIdx_N = 28;
    }

    /* End of Switch: '<S1011>/Switch1' */

    /* MATLAB Function: '<S1075>/MATLAB Function' */
    OHSR_ac_MATLABFunction_i(VeOHSC_i_SlctnIdx_N, &OHSR_ac_B.sf_MATLABFunction_i);

    /* If: '<S1067>/If' incorporates:
     *  Constant: '<S1011>/Constant Value1'
     *  Constant: '<S1067>/Constant Value10'
     *  Constant: '<S1067>/Constant Value11'
     *  Constant: '<S1067>/Constant Value12'
     *  Constant: '<S1067>/Constant Value13'
     *  Constant: '<S1067>/Constant Value14'
     *  RelationalOperator: '<S1067>/Comparison1'
     *  RelationalOperator: '<S1067>/Comparison2'
     *  RelationalOperator: '<S1067>/Comparison3'
     *  RelationalOperator: '<S1067>/Comparison4'
     *  RelationalOperator: '<S1067>/Comparison5'
     *  Sum: '<S1067>/Sum16'
     */
    if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_i.y) - 1))))
        <= 8)
    {
        /* Outputs for IfAction SubSystem: '<S1067>/If Action Subsystem' incorporates:
         *  ActionPort: '<S1069>/Action Port'
         */
        OHSR_ac_IfActionSubsystem((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_i.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1067>/If Action Subsystem' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_i.y)
                 - 1)))) <= 17)
    {
        /* Outputs for IfAction SubSystem: '<S1067>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S1070>/Action Port'
         */
        OHSR_ac_IfActionSubsystem1((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_i.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1067>/If Action Subsystem1' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_i.y)
                 - 1)))) <= 26)
    {
        /* Outputs for IfAction SubSystem: '<S1067>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S1071>/Action Port'
         */
        OHSR_ac_IfActionSubsystem2((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_i.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1067>/If Action Subsystem2' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_i.y)
                 - 1)))) <= 35)
    {
        /* Outputs for IfAction SubSystem: '<S1067>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S1072>/Action Port'
         */
        OHSR_ac_IfActionSubsystem3((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_i.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1067>/If Action Subsystem3' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_i.y)
                 - 1)))) <= 44)
    {
        /* Outputs for IfAction SubSystem: '<S1067>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S1073>/Action Port'
         */
        OHSR_ac_IfActionSubsystem4((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_i.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1067>/If Action Subsystem4' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1067>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S1074>/Action Port'
         */
        OHSR_ac_IfActionSubsystem5((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_i.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1067>/If Action Subsystem5' */
    }

    /* End of If: '<S1067>/If' */

    /* MATLAB Function: '<S1066>/MATLAB Function' incorporates:
     *  Selector: '<S1060>/Selector'
     */
    /* MATLAB Function 'OPTL_StratIndexConv16Bit/GetBitFrom16BitRegister/MATLAB Function': '<S1068>:1' */
    /* '<S1068>:1:2' */
    bitmask = 0U;

    /* '<S1068>:1:3' */
    VeOHSC_b_ManAllwd_IdxN = true;

    /* '<S1068>:1:4' */
    if (((sint32)rtb_Merge1_c2) < 16)
    {
        /* '<S1068>:1:4' */
        /* '<S1068>:1:5' */
        bitmask = (uint16)((uint32)(((uint32)1) << ((uint32)rtb_Merge1_c2)));
    }

    /* '<S1068>:1:7' */
    if ((((sint32)
            rtb_TmpSignalConversionAtSelectorInpor_a[rtb_DataTypeConversion1_l])
         & ((sint32)bitmask)) == 0)
    {
        /* '<S1068>:1:8' */
        /* '<S1068>:1:9' */
        VeOHSC_b_ManAllwd_IdxN = false;
    }

    /* End of MATLAB Function: '<S1066>/MATLAB Function' */

    /* Switch: '<S1011>/Switch2' */
    if (rtb_AND_h)
    {
        /* Switch: '<S1011>/Switch2' incorporates:
         *  Constant: '<S1011>/Constant Value7'
         */
        VeOHSC_i_SlctnIdx_M1 = 28;
    }

    /* End of Switch: '<S1011>/Switch2' */

    /* MATLAB Function: '<S1086>/MATLAB Function' */
    OHSR_ac_MATLABFunction_i(VeOHSC_i_SlctnIdx_M1,
        &OHSR_ac_B.sf_MATLABFunction_fp);

    /* If: '<S1078>/If' incorporates:
     *  Constant: '<S1011>/Constant Value3'
     *  Constant: '<S1078>/Constant Value10'
     *  Constant: '<S1078>/Constant Value11'
     *  Constant: '<S1078>/Constant Value12'
     *  Constant: '<S1078>/Constant Value13'
     *  Constant: '<S1078>/Constant Value14'
     *  RelationalOperator: '<S1078>/Comparison1'
     *  RelationalOperator: '<S1078>/Comparison2'
     *  RelationalOperator: '<S1078>/Comparison3'
     *  RelationalOperator: '<S1078>/Comparison4'
     *  RelationalOperator: '<S1078>/Comparison5'
     *  Sum: '<S1078>/Sum16'
     */
    if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_fp.y) -
            1)))) <= 8)
    {
        /* Outputs for IfAction SubSystem: '<S1078>/If Action Subsystem' incorporates:
         *  ActionPort: '<S1080>/Action Port'
         */
        OHSR_ac_IfActionSubsystem((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_fp.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1078>/If Action Subsystem' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_fp.y) - 1)))) <= 17)
    {
        /* Outputs for IfAction SubSystem: '<S1078>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S1081>/Action Port'
         */
        OHSR_ac_IfActionSubsystem1((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_fp.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1078>/If Action Subsystem1' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_fp.y) - 1)))) <= 26)
    {
        /* Outputs for IfAction SubSystem: '<S1078>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S1082>/Action Port'
         */
        OHSR_ac_IfActionSubsystem2((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_fp.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1078>/If Action Subsystem2' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_fp.y) - 1)))) <= 35)
    {
        /* Outputs for IfAction SubSystem: '<S1078>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S1083>/Action Port'
         */
        OHSR_ac_IfActionSubsystem3((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_fp.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1078>/If Action Subsystem3' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_fp.y) - 1)))) <= 44)
    {
        /* Outputs for IfAction SubSystem: '<S1078>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S1084>/Action Port'
         */
        OHSR_ac_IfActionSubsystem4((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_fp.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1078>/If Action Subsystem4' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1078>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S1085>/Action Port'
         */
        OHSR_ac_IfActionSubsystem5((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_fp.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1078>/If Action Subsystem5' */
    }

    /* End of If: '<S1078>/If' */

    /* MATLAB Function: '<S1077>/MATLAB Function' incorporates:
     *  Selector: '<S1061>/Selector'
     */
    /* MATLAB Function 'OPTL_StratIndexConv16Bit/GetBitFrom16BitRegister/MATLAB Function': '<S1079>:1' */
    /* '<S1079>:1:2' */
    bitmask = 0U;

    /* '<S1079>:1:3' */
    VeOHSC_b_ManAllwd_IdxM1 = true;

    /* '<S1079>:1:4' */
    if (((sint32)rtb_Merge1_c2) < 16)
    {
        /* '<S1079>:1:4' */
        /* '<S1079>:1:5' */
        bitmask = (uint16)((uint32)(((uint32)1) << ((uint32)rtb_Merge1_c2)));
    }

    /* '<S1079>:1:7' */
    if ((((sint32)
            rtb_TmpSignalConversionAtSelectorInpor_a[rtb_DataTypeConversion1_l])
         & ((sint32)bitmask)) == 0)
    {
        /* '<S1079>:1:8' */
        /* '<S1079>:1:9' */
        VeOHSC_b_ManAllwd_IdxM1 = false;
    }

    /* End of MATLAB Function: '<S1077>/MATLAB Function' */

    /* Switch: '<S1011>/Switch3' */
    if (rtb_AND_o5)
    {
        /* Switch: '<S1011>/Switch3' incorporates:
         *  Constant: '<S1011>/Constant Value8'
         */
        VeOHSC_i_SlctnIdx_M2 = 28;
    }

    /* End of Switch: '<S1011>/Switch3' */

    /* MATLAB Function: '<S1097>/MATLAB Function' */
    OHSR_ac_MATLABFunction_i(VeOHSC_i_SlctnIdx_M2,
        &OHSR_ac_B.sf_MATLABFunction_p);

    /* If: '<S1089>/If' incorporates:
     *  Constant: '<S1011>/Constant Value4'
     *  Constant: '<S1089>/Constant Value10'
     *  Constant: '<S1089>/Constant Value11'
     *  Constant: '<S1089>/Constant Value12'
     *  Constant: '<S1089>/Constant Value13'
     *  Constant: '<S1089>/Constant Value14'
     *  RelationalOperator: '<S1089>/Comparison1'
     *  RelationalOperator: '<S1089>/Comparison2'
     *  RelationalOperator: '<S1089>/Comparison3'
     *  RelationalOperator: '<S1089>/Comparison4'
     *  RelationalOperator: '<S1089>/Comparison5'
     *  Sum: '<S1089>/Sum16'
     */
    if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_p.y) - 1))))
        <= 8)
    {
        /* Outputs for IfAction SubSystem: '<S1089>/If Action Subsystem' incorporates:
         *  ActionPort: '<S1091>/Action Port'
         */
        OHSR_ac_IfActionSubsystem((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_p.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1089>/If Action Subsystem' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_p.y)
                 - 1)))) <= 17)
    {
        /* Outputs for IfAction SubSystem: '<S1089>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S1092>/Action Port'
         */
        OHSR_ac_IfActionSubsystem1((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_p.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1089>/If Action Subsystem1' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_p.y)
                 - 1)))) <= 26)
    {
        /* Outputs for IfAction SubSystem: '<S1089>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S1093>/Action Port'
         */
        OHSR_ac_IfActionSubsystem2((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_p.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1089>/If Action Subsystem2' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_p.y)
                 - 1)))) <= 35)
    {
        /* Outputs for IfAction SubSystem: '<S1089>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S1094>/Action Port'
         */
        OHSR_ac_IfActionSubsystem3((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_p.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1089>/If Action Subsystem3' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_p.y)
                 - 1)))) <= 44)
    {
        /* Outputs for IfAction SubSystem: '<S1089>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S1095>/Action Port'
         */
        OHSR_ac_IfActionSubsystem4((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_p.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1089>/If Action Subsystem4' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1089>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S1096>/Action Port'
         */
        OHSR_ac_IfActionSubsystem5((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_p.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1089>/If Action Subsystem5' */
    }

    /* End of If: '<S1089>/If' */

    /* MATLAB Function: '<S1088>/MATLAB Function' incorporates:
     *  Selector: '<S1062>/Selector'
     */
    /* MATLAB Function 'OPTL_StratIndexConv16Bit/GetBitFrom16BitRegister/MATLAB Function': '<S1090>:1' */
    /* '<S1090>:1:2' */
    bitmask = 0U;

    /* '<S1090>:1:3' */
    VeOHSC_b_ManAllwd_IdxM2 = true;

    /* '<S1090>:1:4' */
    if (((sint32)rtb_Merge1_c2) < 16)
    {
        /* '<S1090>:1:4' */
        /* '<S1090>:1:5' */
        bitmask = (uint16)((uint32)(((uint32)1) << ((uint32)rtb_Merge1_c2)));
    }

    /* '<S1090>:1:7' */
    if ((((sint32)
            rtb_TmpSignalConversionAtSelectorInpor_a[rtb_DataTypeConversion1_l])
         & ((sint32)bitmask)) == 0)
    {
        /* '<S1090>:1:8' */
        /* '<S1090>:1:9' */
        VeOHSC_b_ManAllwd_IdxM2 = false;
    }

    /* End of MATLAB Function: '<S1088>/MATLAB Function' */
    for (i = 0; i < 3; i++)
    {
        /* SignalConversion generated from: '<S1063>/Selector' */
        rtb_TmpSignalConversionAtSelectorInpor_a[i] =
            rtb_TmpSignalConversionAtVaOSMR_d_FinalA[i];
    }

    /* SignalConversion generated from: '<S1063>/Selector' incorporates:
     *  Constant: '<S1011>/Constant Value9'
     */
    rtb_TmpSignalConversionAtSelectorInpor_a[3] = 1U;

    /* MATLAB Function: '<S1108>/MATLAB Function' */
    OHSR_ac_MATLABFunction_i(VeOHSC_i_SlctnIdx_N,
        &OHSR_ac_B.sf_MATLABFunction_lx);

    /* If: '<S1100>/If' incorporates:
     *  Constant: '<S1011>/Constant Value10'
     *  Constant: '<S1100>/Constant Value10'
     *  Constant: '<S1100>/Constant Value11'
     *  Constant: '<S1100>/Constant Value12'
     *  Constant: '<S1100>/Constant Value13'
     *  Constant: '<S1100>/Constant Value14'
     *  RelationalOperator: '<S1100>/Comparison1'
     *  RelationalOperator: '<S1100>/Comparison2'
     *  RelationalOperator: '<S1100>/Comparison3'
     *  RelationalOperator: '<S1100>/Comparison4'
     *  RelationalOperator: '<S1100>/Comparison5'
     *  Sum: '<S1100>/Sum16'
     */
    if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_lx.y) -
            1)))) <= 8)
    {
        /* Outputs for IfAction SubSystem: '<S1100>/If Action Subsystem' incorporates:
         *  ActionPort: '<S1102>/Action Port'
         */
        OHSR_ac_IfActionSubsystem((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_lx.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1100>/If Action Subsystem' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_lx.y) - 1)))) <= 17)
    {
        /* Outputs for IfAction SubSystem: '<S1100>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S1103>/Action Port'
         */
        OHSR_ac_IfActionSubsystem1((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_lx.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1100>/If Action Subsystem1' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_lx.y) - 1)))) <= 26)
    {
        /* Outputs for IfAction SubSystem: '<S1100>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S1104>/Action Port'
         */
        OHSR_ac_IfActionSubsystem2((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_lx.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1100>/If Action Subsystem2' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_lx.y) - 1)))) <= 35)
    {
        /* Outputs for IfAction SubSystem: '<S1100>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S1105>/Action Port'
         */
        OHSR_ac_IfActionSubsystem3((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_lx.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1100>/If Action Subsystem3' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_lx.y) - 1)))) <= 44)
    {
        /* Outputs for IfAction SubSystem: '<S1100>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S1106>/Action Port'
         */
        OHSR_ac_IfActionSubsystem4((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_lx.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1100>/If Action Subsystem4' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1100>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S1107>/Action Port'
         */
        OHSR_ac_IfActionSubsystem5((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_lx.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1100>/If Action Subsystem5' */
    }

    /* End of If: '<S1100>/If' */

    /* MATLAB Function: '<S1099>/MATLAB Function' incorporates:
     *  Selector: '<S1063>/Selector'
     */
    /* MATLAB Function 'OPTL_StratIndexConv16Bit/GetBitFrom16BitRegister/MATLAB Function': '<S1101>:1' */
    /* '<S1101>:1:2' */
    bitmask = 0U;

    /* '<S1101>:1:3' */
    VeOHSC_b_FinalAllwdDsrd_IdxN = true;

    /* '<S1101>:1:4' */
    if (((sint32)rtb_Merge1_c2) < 16)
    {
        /* '<S1101>:1:4' */
        /* '<S1101>:1:5' */
        bitmask = (uint16)((uint32)(((uint32)1) << ((uint32)rtb_Merge1_c2)));
    }

    /* '<S1101>:1:7' */
    if ((((sint32)
            rtb_TmpSignalConversionAtSelectorInpor_a[rtb_DataTypeConversion1_l])
         & ((sint32)bitmask)) == 0)
    {
        /* '<S1101>:1:8' */
        /* '<S1101>:1:9' */
        VeOHSC_b_FinalAllwdDsrd_IdxN = false;
    }

    /* End of MATLAB Function: '<S1099>/MATLAB Function' */

    /* MATLAB Function: '<S1119>/MATLAB Function' */
    OHSR_ac_MATLABFunction_i(VeOHSC_i_SlctnIdx_M1,
        &OHSR_ac_B.sf_MATLABFunction_bb);

    /* If: '<S1111>/If' incorporates:
     *  Constant: '<S1011>/Constant Value11'
     *  Constant: '<S1111>/Constant Value10'
     *  Constant: '<S1111>/Constant Value11'
     *  Constant: '<S1111>/Constant Value12'
     *  Constant: '<S1111>/Constant Value13'
     *  Constant: '<S1111>/Constant Value14'
     *  RelationalOperator: '<S1111>/Comparison1'
     *  RelationalOperator: '<S1111>/Comparison2'
     *  RelationalOperator: '<S1111>/Comparison3'
     *  RelationalOperator: '<S1111>/Comparison4'
     *  RelationalOperator: '<S1111>/Comparison5'
     *  Sum: '<S1111>/Sum16'
     */
    if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_bb.y) -
            1)))) <= 8)
    {
        /* Outputs for IfAction SubSystem: '<S1111>/If Action Subsystem' incorporates:
         *  ActionPort: '<S1113>/Action Port'
         */
        OHSR_ac_IfActionSubsystem((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_bb.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1111>/If Action Subsystem' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_bb.y) - 1)))) <= 17)
    {
        /* Outputs for IfAction SubSystem: '<S1111>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S1114>/Action Port'
         */
        OHSR_ac_IfActionSubsystem1((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_bb.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1111>/If Action Subsystem1' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_bb.y) - 1)))) <= 26)
    {
        /* Outputs for IfAction SubSystem: '<S1111>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S1115>/Action Port'
         */
        OHSR_ac_IfActionSubsystem2((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_bb.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1111>/If Action Subsystem2' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_bb.y) - 1)))) <= 35)
    {
        /* Outputs for IfAction SubSystem: '<S1111>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S1116>/Action Port'
         */
        OHSR_ac_IfActionSubsystem3((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_bb.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1111>/If Action Subsystem3' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_bb.y) - 1)))) <= 44)
    {
        /* Outputs for IfAction SubSystem: '<S1111>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S1117>/Action Port'
         */
        OHSR_ac_IfActionSubsystem4((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_bb.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1111>/If Action Subsystem4' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1111>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S1118>/Action Port'
         */
        OHSR_ac_IfActionSubsystem5((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_bb.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1111>/If Action Subsystem5' */
    }

    /* End of If: '<S1111>/If' */

    /* MATLAB Function: '<S1110>/MATLAB Function' incorporates:
     *  Selector: '<S1064>/Selector'
     */
    /* MATLAB Function 'OPTL_StratIndexConv16Bit/GetBitFrom16BitRegister/MATLAB Function': '<S1112>:1' */
    /* '<S1112>:1:2' */
    bitmask = 0U;

    /* '<S1112>:1:3' */
    VeOHSC_b_FinalAllwdDsrd_IdxM1 = true;

    /* '<S1112>:1:4' */
    if (((sint32)rtb_Merge1_c2) < 16)
    {
        /* '<S1112>:1:4' */
        /* '<S1112>:1:5' */
        bitmask = (uint16)((uint32)(((uint32)1) << ((uint32)rtb_Merge1_c2)));
    }

    /* '<S1112>:1:7' */
    if ((((sint32)
            rtb_TmpSignalConversionAtSelectorInpor_a[rtb_DataTypeConversion1_l])
         & ((sint32)bitmask)) == 0)
    {
        /* '<S1112>:1:8' */
        /* '<S1112>:1:9' */
        VeOHSC_b_FinalAllwdDsrd_IdxM1 = false;
    }

    /* End of MATLAB Function: '<S1110>/MATLAB Function' */

    /* MATLAB Function: '<S1130>/MATLAB Function' */
    OHSR_ac_MATLABFunction_i(VeOHSC_i_SlctnIdx_M2,
        &OHSR_ac_B.sf_MATLABFunction_ib);

    /* If: '<S1122>/If' incorporates:
     *  Constant: '<S1011>/Constant Value12'
     *  Constant: '<S1122>/Constant Value10'
     *  Constant: '<S1122>/Constant Value11'
     *  Constant: '<S1122>/Constant Value12'
     *  Constant: '<S1122>/Constant Value13'
     *  Constant: '<S1122>/Constant Value14'
     *  RelationalOperator: '<S1122>/Comparison1'
     *  RelationalOperator: '<S1122>/Comparison2'
     *  RelationalOperator: '<S1122>/Comparison3'
     *  RelationalOperator: '<S1122>/Comparison4'
     *  RelationalOperator: '<S1122>/Comparison5'
     *  Sum: '<S1122>/Sum16'
     */
    if (((sint32)((uint8)((sint32)(((sint32)OHSR_ac_B.sf_MATLABFunction_ib.y) -
            1)))) <= 8)
    {
        /* Outputs for IfAction SubSystem: '<S1122>/If Action Subsystem' incorporates:
         *  ActionPort: '<S1124>/Action Port'
         */
        OHSR_ac_IfActionSubsystem((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_ib.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1122>/If Action Subsystem' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_ib.y) - 1)))) <= 17)
    {
        /* Outputs for IfAction SubSystem: '<S1122>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S1125>/Action Port'
         */
        OHSR_ac_IfActionSubsystem1((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_ib.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1122>/If Action Subsystem1' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_ib.y) - 1)))) <= 26)
    {
        /* Outputs for IfAction SubSystem: '<S1122>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S1126>/Action Port'
         */
        OHSR_ac_IfActionSubsystem2((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_ib.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1122>/If Action Subsystem2' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_ib.y) - 1)))) <= 35)
    {
        /* Outputs for IfAction SubSystem: '<S1122>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S1127>/Action Port'
         */
        OHSR_ac_IfActionSubsystem3((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_ib.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1122>/If Action Subsystem3' */
    }
    else if (((sint32)((uint8)((sint32)(((sint32)
                  OHSR_ac_B.sf_MATLABFunction_ib.y) - 1)))) <= 44)
    {
        /* Outputs for IfAction SubSystem: '<S1122>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S1128>/Action Port'
         */
        OHSR_ac_IfActionSubsystem4((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_ib.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1122>/If Action Subsystem4' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1122>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S1129>/Action Port'
         */
        OHSR_ac_IfActionSubsystem5((uint8)((sint32)(((sint32)
            OHSR_ac_B.sf_MATLABFunction_ib.y) - 1)), &rtb_DataTypeConversion1_l,
            &rtb_Merge1_c2);

        /* End of Outputs for SubSystem: '<S1122>/If Action Subsystem5' */
    }

    /* End of If: '<S1122>/If' */

    /* MATLAB Function: '<S1121>/MATLAB Function' incorporates:
     *  Selector: '<S1065>/Selector'
     */
    /* MATLAB Function 'OPTL_StratIndexConv16Bit/GetBitFrom16BitRegister/MATLAB Function': '<S1123>:1' */
    /* '<S1123>:1:2' */
    bitmask = 0U;

    /* '<S1123>:1:3' */
    VeOHSC_b_FinalAllwdDsrd_IdxM2 = true;

    /* '<S1123>:1:4' */
    if (((sint32)rtb_Merge1_c2) < 16)
    {
        /* '<S1123>:1:4' */
        /* '<S1123>:1:5' */
        bitmask = (uint16)((uint32)(((uint32)1) << ((uint32)rtb_Merge1_c2)));
    }

    /* '<S1123>:1:7' */
    if ((((sint32)
            rtb_TmpSignalConversionAtSelectorInpor_a[rtb_DataTypeConversion1_l])
         & ((sint32)bitmask)) == 0)
    {
        /* '<S1123>:1:8' */
        /* '<S1123>:1:9' */
        VeOHSC_b_FinalAllwdDsrd_IdxM2 = false;
    }

    /* End of MATLAB Function: '<S1121>/MATLAB Function' */
    /* End of Outputs for SubSystem: '<S939>/Selections_and_Alloweds' */
    /* End of Outputs for SubSystem: '<S934>/InputSpd' */
    /* End of Outputs for SubSystem: '<S557>/CostBased_RngSel' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VaSCOR_n_C2SlipSpdDsrdN' */
    (void)Rte_Read_VaSCOR_n_C2SlipSpdDsrdN_Value(tmpRead_l);

    /* Inport: '<Root>/VaSCOR_n_C1SlipSpdDsrdN' */
    (void)Rte_Read_VaSCOR_n_C1SlipSpdDsrdN_Value(tmpRead_k);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTED'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/OHSC_Range_Selection'
     */
    /* Outputs for Atomic SubSystem: '<S557>/CostBased_RngSel' */
    /* Outputs for Atomic SubSystem: '<S934>/InputSpd' */
    /* Outputs for Atomic SubSystem: '<S939>/Selections_and_Alloweds' */
    for (i = 0; i < 9; i++)
    {
        /* SignalConversion generated from: '<S1011>/Selector6' incorporates:
         *  SignalConversion generated from: '<S1011>/Selector'
         */
        rtb_TmpSignalConversionAtSelector6Inport[i] =
            OHSR_ac_B.OptInputSpeed_Neutral[i];
        rtb_TmpSignalConversionAtSelector6Inport[i + 9] =
            OHSR_ac_B.InputSpeedDsrd_MA[i];
        rtb_TmpSignalConversionAtSelector6Inport[i + 18] =
            OHSR_ac_B.InputSpeedDsrd_MB[i];
    }

    /* SignalConversion generated from: '<S1011>/Selector6' incorporates:
     *  SignalConversion generated from: '<S1011>/Selector'
     */
    rtb_TmpSignalConversionAtSelector6Inport[27] = rtb_Switch7;

    /* Selector: '<S1011>/Selector' */
    VeOHSC_n_OptInputSpdDsrd_N =
        rtb_TmpSignalConversionAtSelector6Inport[VeOHSC_i_SlctnIdx_N - 1];

    /* Selector: '<S1011>/Selector1' */
    VeOHSC_n_OptInputSpdDsrd_M1 =
        rtb_TmpSignalConversionAtSelector6Inport[VeOHSC_i_SlctnIdx_M1 - 1];

    /* Selector: '<S1011>/Selector2' */
    VeOHSC_n_OptInputSpdDsrd_M2 =
        rtb_TmpSignalConversionAtSelector6Inport[VeOHSC_i_SlctnIdx_M2 - 1];
    for (i = 0; i < 9; i++)
    {
        /* SignalConversion generated from: '<S1011>/Selector6' incorporates:
         *  SignalConversion generated from: '<S1011>/Selector3'
         */
        rtb_TmpSignalConversionAtSelector6Inport[i] = OHSR_ac_B.StgcNiMin_N[i];
        rtb_TmpSignalConversionAtSelector6Inport[i + 9] =
            OHSR_ac_B.StgcNiMin_MA[i];
        rtb_TmpSignalConversionAtSelector6Inport[i + 18] =
            OHSR_ac_B.StgcNiMin_MB[i];
    }

    /* SignalConversion generated from: '<S1011>/Selector6' incorporates:
     *  SignalConversion generated from: '<S1011>/Selector3'
     */
    rtb_TmpSignalConversionAtSelector6Inport[27] = rtb_Switch7;

    /* Selector: '<S1011>/Selector3' incorporates:
     *  Selector: '<S1011>/Selector'
     */
    VeOHSC_n_StgcNiMin_N =
        rtb_TmpSignalConversionAtSelector6Inport[VeOHSC_i_SlctnIdx_N - 1];

    /* Selector: '<S1011>/Selector4' incorporates:
     *  Selector: '<S1011>/Selector1'
     */
    VeOHSC_n_StgcNiMin_M1 =
        rtb_TmpSignalConversionAtSelector6Inport[VeOHSC_i_SlctnIdx_M1 - 1];

    /* Selector: '<S1011>/Selector5' incorporates:
     *  Selector: '<S1011>/Selector2'
     */
    VeOHSC_n_StgcNiMin_M2 =
        rtb_TmpSignalConversionAtSelector6Inport[VeOHSC_i_SlctnIdx_M2 - 1];
    for (i = 0; i < 9; i++)
    {
        /* SignalConversion generated from: '<S1011>/Selector6' */
        rtb_TmpSignalConversionAtSelector6Inport[i] = OHSR_ac_B.EngPowerLoss_N[i];
        rtb_TmpSignalConversionAtSelector6Inport[i + 9] =
            OHSR_ac_B.EngPowerLoss_MA[i];
        rtb_TmpSignalConversionAtSelector6Inport[i + 18] =
            OHSR_ac_B.EngPowerLoss_MB[i];
    }

    /* SignalConversion generated from: '<S1011>/Selector6' incorporates:
     *  Constant: '<S1011>/Constant Value5'
     */
    rtb_TmpSignalConversionAtSelector6Inport[27] = 0.0F;

    /* Selector: '<S1011>/Selector6' incorporates:
     *  Selector: '<S1011>/Selector'
     */
    VeOHSC_P_OptEngPwrLoss_N =
        rtb_TmpSignalConversionAtSelector6Inport[VeOHSC_i_SlctnIdx_N - 1];

    /* Selector: '<S1011>/Selector7' incorporates:
     *  Selector: '<S1011>/Selector1'
     */
    VeOHSC_P_OptEngPwrLoss_M1 =
        rtb_TmpSignalConversionAtSelector6Inport[VeOHSC_i_SlctnIdx_M1 - 1];

    /* Selector: '<S1011>/Selector8' incorporates:
     *  Selector: '<S1011>/Selector2'
     */
    VeOHSC_P_OptEngPwrLoss_M2 =
        rtb_TmpSignalConversionAtSelector6Inport[VeOHSC_i_SlctnIdx_M2 - 1];

    /* End of Outputs for SubSystem: '<S939>/Selections_and_Alloweds' */
    /* End of Outputs for SubSystem: '<S934>/InputSpd' */

    /* Outputs for Atomic SubSystem: '<S934>/MtrBSpd' */
    /* DataTypeConversion: '<S940>/Data Type Conversion3' incorporates:
     *  SignalConversion generated from: '<S2>/VeOSMR_e_TargetGear'
     */
    rtb_Sum1_h = (sint16)rtb_TmpSignalConversionAtVeOSMR_e_Target;

    /* Saturate: '<S940>/Saturation' incorporates:
     *  DataTypeConversion: '<S940>/Data Type Conversion3'
     *  SignalConversion generated from: '<S2>/VeOSMR_e_TargetGear'
     */
    if (((sint32)rtb_TmpSignalConversionAtVeOSMR_e_Target) > 8)
    {
        /* DataTypeConversion: '<S546>/Data Type Conversion14' */
        rtb_Sum1_h = 8;
    }

    /* End of Saturate: '<S940>/Saturation' */

    /* Selector: '<S940>/Selector4' */
    rtb_Selector1_h2 = rtb_TmpSignalConversionAtVaOSMR_n_NTurb_[rtb_Sum1_h];

    /* Sum: '<S940>/Subtraction10' incorporates:
     *  Selector: '<S940>/Selector4'
     *  Sum: '<S940>/Subtraction1'
     *  Switch: '<S940>/Switch1'
     */
    rtb_Merge4 = rtb_Selector1_h2 - rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;

    /* Logic: '<S940>/Logical7' incorporates:
     *  Constant: '<S1140>/Calib'
     *  Logic: '<S940>/Logical'
     *  Logic: '<S940>/Logical3'
     *  Product: '<S940>/Product1'
     *  RelationalOperator: '<S940>/Greater  Than7'
     *  RelationalOperator: '<S940>/Greater  Than8'
     *  Sum: '<S940>/Subtraction10'
     */
    rtb_TmpSignalConversionAtVeOSMR_b_EngRev = (rtb_Merge4 <=
        (-KeOHSR_n_SpeedNeighborhood));
    rtb_TmpSignalConversionAtVeSTRR_b_EngOff = (KeOHSR_n_SpeedNeighborhood >=
        rtb_Merge4);

    /* UnitDelay: '<S918>/Unit Delay' incorporates:
     *  Logic: '<S940>/Logical7'
     *  Logic: '<S940>/Logical8'
     *  Logic: '<S940>/Logical9'
     *  RelationalOperator: '<S940>/Comparison1'
     */
    rtb_AND_er = ((rtb_TmpSignalConversionAtVeOSMR_e_Target ==
                   rtb_TmpSignalConversionAtVeOSMR_e_Actual) &&
                  (rtb_TmpSignalConversionAtVeOSMR_b_EngRev &&
                   rtb_TmpSignalConversionAtVeSTRR_b_EngOff));

    /* Sum: '<S1209>/Sum2' incorporates:
     *  Sum: '<S940>/Subtraction9'
     *  UnitDelay: '<S940>/Unit Delay5'
     */
    rtb_Abs1 = rtb_TmpSignalConversionAtVeVSDR_n_NTurbO -
        OHSR_ac_DW.UnitDelay5_DSTATE;

    /* Logic: '<S940>/Logical6' incorporates:
     *  Constant: '<S1140>/Calib'
     *  DataTypeConversion: '<S940>/Data Type Conversion4'
     *  Logic: '<S940>/Logical'
     *  Logic: '<S940>/Logical3'
     *  Logic: '<S940>/Logical4'
     *  Logic: '<S940>/Logical5'
     *  Product: '<S940>/Product'
     *  RelationalOperator: '<S940>/Comparison5'
     *  RelationalOperator: '<S940>/Greater  Than5'
     *  RelationalOperator: '<S940>/Greater  Than6'
     *  SignalConversion generated from: '<S2>/VeOSMR_e_TargetGear'
     *  UnitDelay: '<S940>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeOSMR_b_EngRev = ((((sint32)
        rtb_TmpSignalConversionAtVeOSMR_e_Target) != ((sint32)
        OHSR_ac_DW.UnitDelay_DSTATE_ph)) &&
        ((rtb_TmpSignalConversionAtVeOSMR_b_EngRev || (rtb_Abs1 <=
        (-KeOHSR_n_SpeedNeighborhood))) &&
         (rtb_TmpSignalConversionAtVeSTRR_b_EngOff ||
          (KeOHSR_n_SpeedNeighborhood >= rtb_Abs1))));

    /* Switch: '<S940>/Switch3' incorporates:
     *  Switch: '<S940>/Switch5'
     *  UnitDelay: '<S940>/Unit Delay3'
     */
    if (rtb_AND_er)
    {
        OHSR_ac_DW.UnitDelay3_DSTATE_l = rtb_Selector1_h2;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeOSMR_b_EngRev)
        {
            /* Switch: '<S940>/Switch5' incorporates:
             *  UnitDelay: '<S940>/Unit Delay3'
             *  UnitDelay: '<S940>/Unit Delay4'
             */
            OHSR_ac_DW.UnitDelay3_DSTATE_l = OHSR_ac_DW.UnitDelay4_DSTATE_a;
        }
    }

    /* End of Switch: '<S940>/Switch3' */
    for (i = 0; i < 9; i++)
    {
        /* SignalConversion generated from: '<S940>/Selector2' */
        rtb_TmpSignalConversionAtSelector2Inport[i] =
            OHSR_ac_B.OptMtrBSpeed_Neutral[i];
    }

    /* SignalConversion generated from: '<S940>/Selector2' incorporates:
     *  Constant: '<S940>/Constant Value'
     */
    rtb_TmpSignalConversionAtSelector2Inport[9] = 0.0F;

    /* Switch: '<S940>/Switch4' incorporates:
     *  Selector: '<S940>/Selector2'
     *  Switch: '<S940>/Switch2'
     *  UnitDelay: '<S940>/Unit Delay1'
     */
    if (rtb_AND_er)
    {
        OHSR_ac_DW.UnitDelay1_DSTATE_h =
            rtb_TmpSignalConversionAtSelector2Inport[((sint32)rtb_Merge1_ib) - 1];
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeOSMR_b_EngRev)
        {
            /* Switch: '<S940>/Switch2' incorporates:
             *  UnitDelay: '<S940>/Unit Delay1'
             *  UnitDelay: '<S940>/Unit Delay2'
             */
            OHSR_ac_DW.UnitDelay1_DSTATE_h = OHSR_ac_DW.UnitDelay2_DSTATE_g;
        }
    }

    /* End of Switch: '<S940>/Switch4' */

    /* Selector: '<S940>/Selector1' incorporates:
     *  Constant: '<S1136>/Calib'
     *  Switch: '<S940>/Switch7'
     */
    if (KeOHSR_b_OptMtrBSpdN_Slip)
    {
        /* DataTypeConversion: '<S940>/Data Type Conversion1' incorporates:
         *  SignalConversion generated from: '<S2>/VeOSMR_e_TargetGear'
         */
        rtb_Sum1_h = (sint16)rtb_TmpSignalConversionAtVeOSMR_e_Target;

        /* Saturate: '<S940>/Saturation1' incorporates:
         *  DataTypeConversion: '<S940>/Data Type Conversion1'
         *  SignalConversion generated from: '<S2>/VeOSMR_e_TargetGear'
         */
        if (((sint32)rtb_TmpSignalConversionAtVeOSMR_e_Target) > 8)
        {
            rtb_Sum1_h = 8;
        }

        rtb_Merge1 = tmpRead_k[rtb_Sum1_h];
    }
    else
    {
        /* DataTypeConversion: '<S940>/Data Type Conversion1' incorporates:
         *  SignalConversion generated from: '<S2>/VeOSMR_e_TargetGear'
         */
        rtb_Sum1_h = (sint16)rtb_TmpSignalConversionAtVeOSMR_e_Target;

        /* Saturate: '<S940>/Saturation1' incorporates:
         *  DataTypeConversion: '<S940>/Data Type Conversion1'
         *  SignalConversion generated from: '<S2>/VeOSMR_e_TargetGear'
         */
        if (((sint32)rtb_TmpSignalConversionAtVeOSMR_e_Target) > 8)
        {
            rtb_Sum1_h = 8;
        }

        rtb_Merge1 = tmpRead_l[rtb_Sum1_h];
    }

    /* End of Selector: '<S940>/Selector1' */

    /* Outputs for Atomic SubSystem: '<S555>/OHSC_InputSpeedFilters' */
    /* Outputs for Atomic SubSystem: '<S818>/InputSpd_PdlBsd' */
    /* Logic: '<S940>/Logical Operator2' incorporates:
     *  Logic: '<S824>/Logical7'
     */
    rtb_TmpSignalConversionAtVeSTRR_b_EngOff =
        !OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_fa;

    /* Logic: '<S940>/Logical Operator4' incorporates:
     *  Logic: '<S824>/Logical4'
     */
    rtb_AND_er = !OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_fy;

    /* End of Outputs for SubSystem: '<S818>/InputSpd_PdlBsd' */
    /* End of Outputs for SubSystem: '<S555>/OHSC_InputSpeedFilters' */

    /* Switch: '<S940>/Switch1' incorporates:
     *  Constant: '<S1135>/Calib'
     *  Constant: '<S1137>/Calib'
     *  Constant: '<S1138>/Calib'
     *  Logic: '<S940>/Logical Operator'
     *  Logic: '<S940>/Logical Operator1'
     *  Logic: '<S940>/Logical Operator2'
     *  Logic: '<S940>/Logical Operator3'
     *  Logic: '<S940>/Logical Operator4'
     *  Logic: '<S940>/Logical Operator5'
     *  Logic: '<S940>/Logical2'
     *  RelationalOperator: '<S940>/Greater  Than1'
     */
    if ((((VeOHSC_b_EngDsrd) && (rtb_Merge1 > KeOHSR_n_MtrBDsrdSpdSlipThresh)) &&
         (rtb_TmpSignalConversionAtVeSTRR_b_EngOff ||
            (!KeOHSR_b_Enbl_ShftEfftRdctn_N))) && (rtb_AND_er ||
            (!KeOHSR_b_TCaseN4HiShft_UseIdleSpd_N)))
    {
        /* Sum: '<S940>/Subtraction2' incorporates:
         *  UnitDelay: '<S940>/Unit Delay3'
         */
        rtb_Merge1 = rtb_Selector1_h2 - OHSR_ac_DW.UnitDelay3_DSTATE_l;

        /* Outputs for Atomic SubSystem: '<S940>/Protected Division1' */
        /* Switch: '<S1142>/Switch1' incorporates:
         *  Constant: '<S1142>/Constant Value'
         *  Constant: '<S1142>/Constant Value1'
         *  Constant: '<S1142>/Constant Value2'
         *  Constant: '<S1142>/Constant Value3'
         *  Logic: '<S1142>/AND'
         *  RelationalOperator: '<S1142>/Greater Than or Equal '
         *  RelationalOperator: '<S1142>/Greater Than or Equal 1'
         *  RelationalOperator: '<S1142>/Not Equal'
         *  RelationalOperator: '<S1142>/Not Equal1'
         *  Switch: '<S1142>/Switch2'
         *  Switch: '<S1142>/Switch3'
         */
        if ((rtb_Merge4 != 0.0F) && (rtb_Merge1 != 0.0F))
        {
            /* Switch: '<S1142>/Switch1' incorporates:
             *  Product: '<S1142>/Division'
             */
            rtb_Merge1 = rtb_Merge4 / rtb_Merge1;
        }
        else if (rtb_Merge4 > 0.0F)
        {
            /* Switch: '<S1142>/Switch2' incorporates:
             *  Constant: '<S1142>/MAXFLOAT'
             *  Switch: '<S1142>/Switch1'
             */
            rtb_Merge1 = 3.402823466E+38F;
        }
        else if (rtb_Merge4 < 0.0F)
        {
            /* Switch: '<S1142>/Switch3' incorporates:
             *  Constant: '<S1142>/MINFLOAT'
             *  Switch: '<S1142>/Switch1'
             *  Switch: '<S1142>/Switch2'
             */
            rtb_Merge1 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S1142>/Switch1' incorporates:
             *  Constant: '<S1142>/Constant Value4'
             *  Switch: '<S1142>/Switch2'
             *  Switch: '<S1142>/Switch3'
             */
            rtb_Merge1 = 0.0F;
        }

        /* End of Switch: '<S1142>/Switch1' */
        /* End of Outputs for SubSystem: '<S940>/Protected Division1' */

        /* Outputs for Atomic SubSystem: '<S940>/Limiter2' */
        /* Switch: '<S1141>/Switch1' incorporates:
         *  Constant: '<S1132>/Calib'
         *  RelationalOperator: '<S1141>/Relational Operator'
         */
        if (KeOHSR_Pct_MtrBShftMaxPct < rtb_Merge1)
        {
            /* Switch: '<S940>/Switch6' */
            rtb_Merge1 = KeOHSR_Pct_MtrBShftMaxPct;
        }

        /* End of Switch: '<S1141>/Switch1' */

        /* Switch: '<S1141>/Switch' incorporates:
         *  Constant: '<S940>/Constant Value8'
         *  RelationalOperator: '<S1141>/Relational Operator1'
         */
        if (rtb_Merge1 <= 0.0F)
        {
            /* Switch: '<S1141>/Switch' */
            rtb_Merge1 = 0.0F;
        }

        /* End of Switch: '<S1141>/Switch' */
        /* End of Outputs for SubSystem: '<S940>/Limiter2' */

        /* Switch: '<S940>/Switch6' incorporates:
         *  Constant: '<S1133>/Calib'
         *  Constant: '<S1134>/Calib'
         *  Constant: '<S1139>/Calib'
         *  Logic: '<S940>/Logical1'
         *  RelationalOperator: '<S940>/Greater  Than3'
         *  RelationalOperator: '<S940>/Greater  Than4'
         */
        if (((KeOHSR_b_EnblMtrBSpdBlend) && (rtb_Merge1 >
                KeOHSR_Pct_MtrBShftMinDelta)) && (rtb_Selector1_h2 >
                KeOHSR_n_MtrBShftMinNo))
        {
            /* Switch: '<S940>/Switch6' incorporates:
             *  Product: '<S940>/Product3'
             *  Selector: '<S940>/Selector2'
             *  Sum: '<S940>/Subtraction7'
             *  UnitDelay: '<S940>/Unit Delay1'
             */
            rtb_Merge1 *= rtb_TmpSignalConversionAtSelector2Inport[((sint32)
                rtb_Merge1_ib) - 1] - OHSR_ac_DW.UnitDelay1_DSTATE_h;
        }
        else
        {
            /* Switch: '<S940>/Switch6' incorporates:
             *  Constant: '<S940>/Constant Value7'
             */
            rtb_Merge1 = 0.0F;
        }

        /* End of Switch: '<S940>/Switch6' */

        /* SignalConversion generated from: '<S940>/Selector2' incorporates:
         *  Constant: '<S940>/Constant Value'
         */
        for (i = 0; i < 9; i++)
        {
            tmp[i] = OHSR_ac_B.OptMtrBSpeed_Neutral[i];
        }

        tmp[9] = 0.0F;

        /* Switch: '<S940>/Switch1' incorporates:
         *  Selector: '<S940>/Selector2'
         *  Sum: '<S940>/Subtraction8'
         */
        VeOHSC_n_OptMtrBSpdDsrd_N = tmp[((sint32)rtb_Merge1_ib) - 1] -
            rtb_Merge1;
    }
    else
    {
        /* Switch: '<S940>/Switch1' incorporates:
         *  Constant: '<S940>/Constant Value10'
         */
        VeOHSC_n_OptMtrBSpdDsrd_N = 0.0F;
    }

    /* Update for UnitDelay: '<S940>/Unit Delay' incorporates:
     *  DataTypeConversion: '<S940>/Data Type Conversion4'
     *  SignalConversion generated from: '<S2>/VeOSMR_e_TargetGear'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_ph = (sint16)
        rtb_TmpSignalConversionAtVeOSMR_e_Target;

    /* Update for UnitDelay: '<S940>/Unit Delay4' */
    OHSR_ac_DW.UnitDelay4_DSTATE_a = rtb_Selector1_h2;

    /* Update for UnitDelay: '<S940>/Unit Delay5' incorporates:
     *  UnitDelay: '<S940>/Unit Delay3'
     */
    OHSR_ac_DW.UnitDelay5_DSTATE = OHSR_ac_DW.UnitDelay3_DSTATE_l;

    /* Update for UnitDelay: '<S940>/Unit Delay2' incorporates:
     *  Selector: '<S940>/Selector2'
     */
    OHSR_ac_DW.UnitDelay2_DSTATE_g = rtb_TmpSignalConversionAtSelector2Inport
        [((sint32)rtb_Merge1_ib) - 1];

    /* End of Outputs for SubSystem: '<S934>/MtrBSpd' */

    /* Outputs for Atomic SubSystem: '<S934>/NtiMaxMinStgcRngSt' */
    for (i = 0; i < 6; i++)
    {
        /* Selector: '<S941>/Selector22' incorporates:
         *  Selector: '<S938>/Selector21'
         */
        rtb_Saturation1 = rtb_Selector21[i];

        /* Selector: '<S941>/Selector22' incorporates:
         *  SignalConversion generated from: '<S2>/Nti_Max_Read'
         */
        rtb_TmpSignalConversionAtSelector3Inport[i] =
            rtb_TmpSignalConversionAtNti_Max_ReadOut[rtb_Saturation1 - 1];

        /* Selector: '<S941>/Selector23' incorporates:
         *  Selector: '<S941>/Selector22'
         *  SignalConversion generated from: '<S2>/Nti_Min_Read'
         */
        Selector23[i] = rtb_TmpSignalConversionAtNti_Min_ReadOut[rtb_Saturation1
            - 1];
    }

    /* End of Outputs for SubSystem: '<S934>/NtiMaxMinStgcRngSt' */
    /* End of Outputs for SubSystem: '<S557>/CostBased_RngSel' */

    /* MinMax: '<S937>/MinMax2' incorporates:
     *  MinMax: '<S937>/MinMax1'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_15

    /* Outputs for Atomic SubSystem: '<S937>/Digital Lowpass Reset Enabled' */
    /* MinMax: '<S937>/MinMax2' */
    VaOHSC_n_PNLimtn_NiMin[0] = fminf(VeOHSC_n_StgcNiMin_N,
        rtb_TmpSignalConversionAtVeOSMR_n_NiMax_);
    VaOHSC_n_PNLimtn_NiMin[1] = fminf(VeOHSC_n_StgcNiMin_M1,
        rtb_TmpSignalConversionAtVeOSMR_n_NiMax_);
    VaOHSC_n_PNLimtn_NiMin[2] = fminf(VeOHSC_n_StgcNiMin_M2,
        rtb_TmpSignalConversionAtVeOSMR_n_NiMax_);
    for (i = 0; i < 3; i++)
    {
        /* UnitDelay: '<S834>/Unit Delay' incorporates:
         *  UnitDelay: '<S1275>/Unit Delay'
         */
        rtb_Merge1 = OHSR_ac_DW.UnitDelay_DSTATE_k[i];

        /* Switch: '<S1275>/Switch1' incorporates:
         *  Constant: '<S1278>/Calib'
         *  Product: '<S1275>/Multiplication'
         *  Sum: '<S1275>/Subtraction'
         *  Sum: '<S1275>/Summation'
         */
        VaOHSC_n_PNLimtn_NiMinFltrd[(i)] = ((VaOHSC_n_PNLimtn_NiMin[(i)] -
            rtb_Merge1) * KeOHSR_k_PNLimtnNiMin_FltCoeff) + rtb_Merge1;

        /* Update for UnitDelay: '<S1275>/Unit Delay' */
        OHSR_ac_DW.UnitDelay_DSTATE_k[i] = VaOHSC_n_PNLimtn_NiMinFltrd[(i)];
    }

    /* UnitDelay: '<S834>/Unit Delay' */
    rtb_Sum1_li[0] = fmaxf(VeOHSC_n_NiMin_N, VaOHSC_n_PNLimtn_NiMinFltrd[0]);
    rtb_Sum1_li[1] = fmaxf(VeOHSC_n_NiMin_M1, VaOHSC_n_PNLimtn_NiMinFltrd[1]);
    rtb_Sum1_li[2] = fmaxf(VeOHSC_n_NiMin_M2, VaOHSC_n_PNLimtn_NiMinFltrd[2]);

    /* End of Outputs for SubSystem: '<S937>/Digital Lowpass Reset Enabled' */
#endif

    /* End of MinMax: '<S937>/MinMax2' */

    /* Selector: '<S587>/Selector' incorporates:
     *  Constant: '<S682>/Calib'
     *  DataTypeConversion: '<S536>/Data Type Conversion2'
     */
    VeOHSC_b_RngStMapSelection_N = HaOHSR_b_N_NiDsrd_RngStMap
        [(VeOHSC_e_RngSel_ExtRngDsrd)];

    /* Logic: '<S587>/Logical1' incorporates:
     *  Constant: '<S684>/Calib'
     */
    rtb_UnitDelay_lad = ((HeOHSR_b_NiDsrdN_LaunchChk) && rtb_AND_ck);

    /* Switch: '<S536>/Switch7' incorporates:
     *  Constant: '<S577>/Calib'
     *  DataTypeConversion: '<S536>/Data Type Conversion'
     *  Selector: '<S536>/Selector1'
     *  Selector: '<S536>/Selector2'
     *  SignalConversion generated from: '<S2>/VeHSER_e_RngEqnSel'
     */
    rtb_AND_mo = ((!KaOHSR_b_DsblTCMEngSpdReq_N
                   [(rtb_TmpSignalConversionAtVeHSER_e_RngEqn)]) &&
                  rtb_TmpSignalConversionAtVeESPR_b_TCMEng);

    /* Logic: '<S587>/Logical4' incorporates:
     *  Constant: '<S683>/Calib'
     *  DataTypeConversion: '<S536>/Data Type Conversion2'
     *  Selector: '<S587>/Selector1'
     */
    rtb_TmpSignalConversionAtVeOSMR_b_EngRev =
        (rtb_TmpSignalConversionAtPS_ReadOutport1 ||
         (HaOHSR_b_N_RngStForTCMReset[(VeOHSC_e_RngSel_ExtRngDsrd)]));

    /* Outputs for Atomic SubSystem: '<S688>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S690>/EdgeRising' */
    /* Logic: '<S692>/AND' incorporates:
     *  Logic: '<S692>/OR1'
     *  UnitDelay: '<S692>/Unit Delay'
     */
    rtb_Logical2_jm = (rtb_AND_mo && (!OHSR_ac_DW.UnitDelay_DSTATE_j4));

    /* Update for UnitDelay: '<S692>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_j4 = rtb_AND_mo;

    /* End of Outputs for SubSystem: '<S690>/EdgeRising' */

    /* Outputs for IfAction SubSystem: '<S536>/Abritrated_Desired_Ni_N' incorporates:
     *  ActionPort: '<S569>/Action Port'
     */
    /* Outputs for Atomic SubSystem: '<S569>/NTurb_V_Offset_N' */
    /* If: '<S536>/If' incorporates:
     *  Logic: '<S632>/Logical1'
     *  Logic: '<S690>/OR1'
     */
    rtb_AND_fo = !rtb_AND_mo;

    /* End of Outputs for SubSystem: '<S569>/NTurb_V_Offset_N' */
    /* End of Outputs for SubSystem: '<S536>/Abritrated_Desired_Ni_N' */

    /* Switch: '<S690>/Switch1' incorporates:
     *  Constant: '<S685>/Calib'
     *  Constant: '<S687>/Calib'
     *  Constant: '<S690>/Constant Value1'
     *  Logic: '<S690>/OR'
     *  Logic: '<S690>/OR1'
     *  MinMax: '<S690>/Minimum'
     *  Sum: '<S690>/Summation'
     *  Switch: '<S688>/Switch1'
     *  UnitDelay: '<S690>/Unit Delay'
     */
    if ((rtb_AND_fo || rtb_Logical2_jm) ||
            rtb_TmpSignalConversionAtVeOSMR_b_EngRev)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_cf = 0.0F;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_cf = fminf(KeOHSR_t_TCM_MaxBlend_N_ON,
            HeOHSR_t_RngSel_dT + OHSR_ac_DW.UnitDelay_DSTATE_cf);
    }

    /* End of Switch: '<S690>/Switch1' */

    /* Logic: '<S690>/AND' incorporates:
     *  Constant: '<S687>/Calib'
     *  RelationalOperator: '<S690>/Greater  Than'
     *  Switch: '<S688>/Switch1'
     *  UnitDelay: '<S690>/Unit Delay'
     */
    rtb_Logical2_jm = (rtb_AND_mo && (OHSR_ac_DW.UnitDelay_DSTATE_cf >=
                        KeOHSR_t_TCM_MaxBlend_N_ON));

    /* End of Outputs for SubSystem: '<S688>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S688>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S689>/EdgeFalling1' */
    /* Logic: '<S691>/AND' incorporates:
     *  Logic: '<S691>/OR1'
     *  UnitDelay: '<S691>/Unit Delay'
     */
    rtb_AND_o5 = ((!rtb_Logical2_jm) && (OHSR_ac_DW.UnitDelay_DSTATE_cc));

    /* Update for UnitDelay: '<S691>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_cc = rtb_Logical2_jm;

    /* End of Outputs for SubSystem: '<S689>/EdgeFalling1' */

    /* Switch: '<S689>/Switch1' incorporates:
     *  Constant: '<S689>/Constant Value1'
     *  Logic: '<S689>/Logical2'
     *  UnitDelay: '<S689>/Unit Delay'
     */
    if (!rtb_TmpSignalConversionAtVeOSMR_b_EngRev)
    {
        /* Switch: '<S689>/Switch' */
        if (rtb_AND_o5)
        {
            /* UnitDelay: '<S689>/Unit Delay' incorporates:
             *  Constant: '<S686>/Calib'
             *  Switch: '<S688>/Switch1'
             *  Switch: '<S689>/Switch'
             */
            OHSR_ac_DW.UnitDelay_DSTATE_al = KeOHSR_t_TCM_MaxBlend_N_OFF;
        }
        else
        {
            /* UnitDelay: '<S689>/Unit Delay' incorporates:
             *  Constant: '<S685>/Calib'
             *  Constant: '<S689>/Constant Value1'
             *  MinMax: '<S689>/Minimum'
             *  Sum: '<S689>/Summation'
             *  Switch: '<S689>/Switch'
             */
            OHSR_ac_DW.UnitDelay_DSTATE_al = fmaxf
                (OHSR_ac_DW.UnitDelay_DSTATE_al - HeOHSR_t_RngSel_dT, 0.0F);
        }

        /* End of Switch: '<S689>/Switch' */
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_al = 0.0F;
    }

    /* End of Switch: '<S689>/Switch1' */

    /* Logic: '<S587>/Logical3' incorporates:
     *  Constant: '<S689>/Constant Value2'
     *  Logic: '<S587>/Logical2'
     *  Logic: '<S689>/AND'
     *  RelationalOperator: '<S689>/Greater  Than'
     *  UnitDelay: '<S689>/Unit Delay'
     */
    VeOHSC_b_ArbOpt_N = ((((rtb_TmpSignalConversionAtS2H_ReadOutport ||
                            (VeOHSC_b_RngStMapSelection_N)) || rtb_UnitDelay_lad)
                          || rtb_AND_mo) || ((rtb_Logical2_jm ||
                           (OHSR_ac_DW.UnitDelay_DSTATE_al > 0.0F)) &&
                          rtb_TmpSignalConversionAtEnblTCMReqL_Rea));

    /* End of Outputs for SubSystem: '<S688>/Turn Off Delay Time' */

    /* Selector: '<S586>/Selector' incorporates:
     *  Constant: '<S670>/Calib'
     *  DataTypeConversion: '<S536>/Data Type Conversion2'
     */
    VeOHSC_b_RngStMapSelection_M2 = HaOHSR_b_M2_NiDsrd_RngStMap
        [(VeOHSC_e_RngSel_ExtRngDsrd)];

    /* Logic: '<S586>/Logical1' incorporates:
     *  Constant: '<S672>/Calib'
     */
    rtb_Logical2_jm = ((HeOHSR_b_NiDsrdM2_LaunchChk) && rtb_AND_ck);

    /* Switch: '<S536>/Switch1' incorporates:
     *  Constant: '<S576>/Calib'
     *  DataTypeConversion: '<S536>/Data Type Conversion1'
     *  Selector: '<S536>/Selector'
     *  SignalConversion generated from: '<S2>/VeHSER_e_RngEqnSel'
     */
    rtb_AND_o5 = ((!KaOHSR_b_DsblTCMEngSpdReq_M2
                   [(rtb_TmpSignalConversionAtVeHSER_e_RngEqn)]) &&
                  rtb_TmpSignalConversionAtVeESPR_b_TCMEng);

    /* Logic: '<S586>/Logical4' incorporates:
     *  Constant: '<S671>/Calib'
     *  DataTypeConversion: '<S536>/Data Type Conversion2'
     *  Selector: '<S586>/Selector1'
     */
    rtb_TmpSignalConversionAtVeOSMR_b_EngRev =
        (rtb_TmpSignalConversionAtPS_ReadOutport1 ||
         (HaOHSR_b_M2_RngStForTCMReset[(VeOHSC_e_RngSel_ExtRngDsrd)]));

    /* Outputs for Atomic SubSystem: '<S676>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S678>/EdgeRising' */
    /* Logic: '<S680>/AND' incorporates:
     *  Logic: '<S680>/OR1'
     *  UnitDelay: '<S680>/Unit Delay'
     */
    rtb_AND_h = (rtb_AND_o5 && (!OHSR_ac_DW.UnitDelay_DSTATE_oj));

    /* Update for UnitDelay: '<S680>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_oj = rtb_AND_o5;

    /* End of Outputs for SubSystem: '<S678>/EdgeRising' */

    /* Outputs for IfAction SubSystem: '<S536>/Abritrated_Desired_Ni_M2' incorporates:
     *  ActionPort: '<S568>/Action Port'
     */
    /* Outputs for Atomic SubSystem: '<S568>/NTurb_V_Offset_M2' */
    /* If: '<S536>/If2' incorporates:
     *  Logic: '<S611>/Logical1'
     *  Logic: '<S678>/OR1'
     */
    rtb_TmpSignalConversionAtPS_ReadOutport1 = !rtb_AND_o5;

    /* End of Outputs for SubSystem: '<S568>/NTurb_V_Offset_M2' */
    /* End of Outputs for SubSystem: '<S536>/Abritrated_Desired_Ni_M2' */

    /* Switch: '<S678>/Switch1' incorporates:
     *  Constant: '<S673>/Calib'
     *  Constant: '<S675>/Calib'
     *  Constant: '<S678>/Constant Value1'
     *  Logic: '<S678>/OR'
     *  Logic: '<S678>/OR1'
     *  MinMax: '<S678>/Minimum'
     *  Sum: '<S678>/Summation'
     *  Switch: '<S676>/Switch1'
     *  UnitDelay: '<S678>/Unit Delay'
     */
    if ((rtb_TmpSignalConversionAtPS_ReadOutport1 || rtb_AND_h) ||
            rtb_TmpSignalConversionAtVeOSMR_b_EngRev)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_ao = 0.0F;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_ao = fminf(KeOHSR_t_TCM_MaxBlend_M2_ON,
            HeOHSR_t_RngSel_dT + OHSR_ac_DW.UnitDelay_DSTATE_ao);
    }

    /* End of Switch: '<S678>/Switch1' */

    /* Logic: '<S678>/AND' incorporates:
     *  Constant: '<S675>/Calib'
     *  RelationalOperator: '<S678>/Greater  Than'
     *  Switch: '<S676>/Switch1'
     *  UnitDelay: '<S678>/Unit Delay'
     */
    rtb_AND_h = (rtb_AND_o5 && (OHSR_ac_DW.UnitDelay_DSTATE_ao >=
                  KeOHSR_t_TCM_MaxBlend_M2_ON));

    /* End of Outputs for SubSystem: '<S676>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S676>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S677>/EdgeFalling1' */
    /* Logic: '<S679>/AND' incorporates:
     *  Logic: '<S679>/OR1'
     *  UnitDelay: '<S679>/Unit Delay'
     */
    rtb_Logical4_gu = ((!rtb_AND_h) && (OHSR_ac_DW.UnitDelay_DSTATE_oy));

    /* Update for UnitDelay: '<S679>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_oy = rtb_AND_h;

    /* End of Outputs for SubSystem: '<S677>/EdgeFalling1' */

    /* Switch: '<S677>/Switch1' incorporates:
     *  Constant: '<S677>/Constant Value1'
     *  Logic: '<S677>/Logical2'
     *  UnitDelay: '<S677>/Unit Delay'
     */
    if (!rtb_TmpSignalConversionAtVeOSMR_b_EngRev)
    {
        /* Switch: '<S677>/Switch' */
        if (rtb_Logical4_gu)
        {
            /* UnitDelay: '<S677>/Unit Delay' incorporates:
             *  Constant: '<S674>/Calib'
             *  Switch: '<S676>/Switch1'
             *  Switch: '<S677>/Switch'
             */
            OHSR_ac_DW.UnitDelay_DSTATE_ln = KeOHSR_t_TCM_MaxBlend_M2_OFF;
        }
        else
        {
            /* UnitDelay: '<S677>/Unit Delay' incorporates:
             *  Constant: '<S673>/Calib'
             *  Constant: '<S677>/Constant Value1'
             *  MinMax: '<S677>/Minimum'
             *  Sum: '<S677>/Summation'
             *  Switch: '<S677>/Switch'
             */
            OHSR_ac_DW.UnitDelay_DSTATE_ln = fmaxf
                (OHSR_ac_DW.UnitDelay_DSTATE_ln - HeOHSR_t_RngSel_dT, 0.0F);
        }

        /* End of Switch: '<S677>/Switch' */
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_ln = 0.0F;
    }

    /* End of Switch: '<S677>/Switch1' */

    /* Logic: '<S586>/Logical3' incorporates:
     *  Constant: '<S544>/Constant'
     *  Constant: '<S677>/Constant Value2'
     *  Logic: '<S586>/Logical2'
     *  Logic: '<S677>/AND'
     *  RelationalOperator: '<S534>/Comparison1'
     *  RelationalOperator: '<S677>/Greater  Than'
     *  UnitDelay: '<S677>/Unit Delay'
     */
    VeOHSC_b_ArbOpt_M2 = (((((rtb_TmpSignalConversionAtS2H_ReadOutport ||
        (VeOHSC_b_RngStMapSelection_M2)) || rtb_Logical2_jm) || rtb_AND_o5) ||
                           ((rtb_AND_h || (OHSR_ac_DW.UnitDelay_DSTATE_ln > 0.0F))
                            && rtb_TmpSignalConversionAtEnblTCMReqL_Rea)) ||
                          (((uint32)rtb_Selector3_kl_tmp) ==
                           CeOHSR_e_LaunchSpdCntrl));

    /* End of Outputs for SubSystem: '<S676>/Turn Off Delay Time' */

    /* Logic: '<S937>/Logical2' incorporates:
     *  Constant: '<S1276>/Calib'
     *  Constant: '<S1277>/Calib'
     *  Logic: '<S937>/Logical'
     *  Logic: '<S937>/Logical1'
     *  SignalConversion generated from: '<S937>/XeOHSR_b_PNLimtn_Enbl'
     *  Switch: '<S937>/Switch'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_15

    if ((rtb_TmpSignalConversionAtVeOSMR_b_PnLimi &&
            (KaOHSR_b_PNLimtnNiMinArb_Enbl[0])) &&
            ((KaOHSR_b_ArbProfileChck_Ovrd[0]) || (!VeOHSC_b_ArbOpt_N)))
    {
        /* VariantMerge generated from: '<S937>/XeOHSR_b_PNLimtn_Enbl' */
        rtb_VariantMerge_For_Variant_Source_XeOH[0] = rtb_Sum1_li[0];
    }
    else
    {
        /* VariantMerge generated from: '<S937>/XeOHSR_b_PNLimtn_Enbl' */
        rtb_VariantMerge_For_Variant_Source_XeOH[0] = VeOHSC_n_NiMin_N;
    }

    if ((rtb_TmpSignalConversionAtVeOSMR_b_PnLimi &&
            (KaOHSR_b_PNLimtnNiMinArb_Enbl[1])) &&
            ((KaOHSR_b_ArbProfileChck_Ovrd[1]) || (!VeOHSC_b_ArbOpt_M1)))
    {
        /* VariantMerge generated from: '<S937>/XeOHSR_b_PNLimtn_Enbl' */
        rtb_VariantMerge_For_Variant_Source_XeOH[1] = rtb_Sum1_li[1];
    }
    else
    {
        /* VariantMerge generated from: '<S937>/XeOHSR_b_PNLimtn_Enbl' */
        rtb_VariantMerge_For_Variant_Source_XeOH[1] = VeOHSC_n_NiMin_M1;
    }

    if ((rtb_TmpSignalConversionAtVeOSMR_b_PnLimi &&
            (KaOHSR_b_PNLimtnNiMinArb_Enbl[2])) &&
            ((KaOHSR_b_ArbProfileChck_Ovrd[2]) || (!VeOHSC_b_ArbOpt_M2)))
    {
        /* VariantMerge generated from: '<S937>/XeOHSR_b_PNLimtn_Enbl' */
        rtb_VariantMerge_For_Variant_Source_XeOH[2] = rtb_Sum1_li[2];
    }
    else
    {
        /* VariantMerge generated from: '<S937>/XeOHSR_b_PNLimtn_Enbl' */
        rtb_VariantMerge_For_Variant_Source_XeOH[2] = VeOHSC_n_NiMin_M2;
    }

#else

    /* VariantMerge generated from: '<S937>/XeOHSR_b_PNLimtn_Enbl' incorporates:
     *  SignalConversion generated from: '<S937>/XeOHSR_b_PNLimtn_Enbl'
     */
    rtb_VariantMerge_For_Variant_Source_XeOH[0] = VeOHSC_n_NiMin_N;
    rtb_VariantMerge_For_Variant_Source_XeOH[1] = VeOHSC_n_NiMin_M1;
    rtb_VariantMerge_For_Variant_Source_XeOH[2] = VeOHSC_n_NiMin_M2;

#endif

    /* End of Logic: '<S937>/Logical2' */

    /* Outputs for Atomic SubSystem: '<S585>/EdgeBi' */
    /* RelationalOperator: '<S657>/Not Equal' incorporates:
     *  UnitDelay: '<S657>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeOSMR_b_PnLimi = (VeOHSC_b_ArbOpt_M1 !=
        OHSR_ac_DW.UnitDelay_DSTATE_bu);

    /* Update for UnitDelay: '<S657>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_bu = VeOHSC_b_ArbOpt_M1;

    /* End of Outputs for SubSystem: '<S585>/EdgeBi' */

    /* Selector: '<S546>/Selector2' incorporates:
     *  Constant: '<S1367>/Calib'
     *  Constant: '<S1368>/Constant'
     *  Constant: '<S1369>/Constant'
     *  Logic: '<S566>/Logical1'
     *  RelationalOperator: '<S566>/Comparison1'
     *  RelationalOperator: '<S566>/Comparison2'
     */
    rtb_TmpSignalConversionAtVeOSMR_b_EngRev = (((((uint32)
        rtb_TmpSignalConversionAtVeOSMR_e_Steady) == CeOSMR_e_TransSt_Park) ||
        (((uint32)rtb_TmpSignalConversionAtVeOSMR_e_Steady) ==
         CeOSMR_e_TransSt_Neutral)) || (KeOHSR_b_Dsbl_NTurb_OptNi));

    /* Switch: '<S566>/Switch1' incorporates:
     *  Merge: '<Root>/NTurb_ActGr_IRV_Merge'
     *  Merge: '<Root>/NTurb_Virt_IRV_Merge'
     *  SignalConversion generated from: '<S2>/NTurb_ActGr_Read'
     *  SignalConversion generated from: '<S2>/NTurb_Virt_Read'
     */
    tmp_0[0] = Rte_IrvRead_OHSR_MedTED_NTurb_Virt_write_IRV();
    tmp_0[1] = Rte_IrvRead_OHSR_MedTED_NTurb_ActGr_write_IRV();
    for (i = 0; i < 2; i++)
    {
        /* Switch: '<S566>/Switch1' */
        if (rtb_TmpSignalConversionAtVeOSMR_b_EngRev)
        {
            /* Switch: '<S566>/Switch1' incorporates:
             *  Constant: '<S566>/Constant Value1'
             */
            rtb_Switch1_do[i] = 0.0F;
        }
        else
        {
            /* Switch: '<S566>/Switch1' */
            rtb_Switch1_do[i] = tmp_0[i];
        }
    }

    /* MinMax: '<S566>/MinMax5' */
    rtb_TmpSignalConversionAtVeOSMR_n_Inp_fc = fminf(rtb_Switch1_do[0],
        rtb_Switch1_do[1]);

    /* Selector: '<S551>/Selector2' incorporates:
     *  Constant: '<S797>/Calib'
     *  Selector: '<S551>/Selector'
     */
    VeOHSC_e_SGrDsrd = HaOHSR_e_DsrdSGrMap[VeOHSC_e_CurrentRngSelected - 1];

    /* Outputs for Atomic SubSystem: '<S536>/Turn On Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S536>/EdgeFalling2' */
    /* Logic: '<S570>/OR1' incorporates:
     *  Logic: '<S588>/OR1'
     */
    rtb_TmpSignalConversionAtS2H_ReadOutport =
        !rtb_TmpSignalConversionAtVeESPR_b_TCMEng;

    /* End of Outputs for SubSystem: '<S536>/Turn On Delay Time2' */

    /* Logic: '<S570>/AND' incorporates:
     *  Logic: '<S570>/OR1'
     *  UnitDelay: '<S570>/Unit Delay'
     */
    rtb_TmpSignalConversionAtEnblTCMReqL_Rea =
        (rtb_TmpSignalConversionAtS2H_ReadOutport &&
         (OHSR_ac_DW.UnitDelay_DSTATE_ip));

    /* Update for UnitDelay: '<S570>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_ip = rtb_TmpSignalConversionAtVeESPR_b_TCMEng;

    /* End of Outputs for SubSystem: '<S536>/EdgeFalling2' */

    /* Outputs for Atomic SubSystem: '<S536>/Turn On Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S588>/EdgeRising' */
    /* Logic: '<S693>/AND' incorporates:
     *  Logic: '<S693>/OR1'
     *  UnitDelay: '<S693>/Unit Delay'
     */
    rtb_AND_h = (rtb_TmpSignalConversionAtVeESPR_b_TCMEng &&
                 (!OHSR_ac_DW.UnitDelay_DSTATE_p0));

    /* Update for UnitDelay: '<S693>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_p0 = rtb_TmpSignalConversionAtVeESPR_b_TCMEng;

    /* End of Outputs for SubSystem: '<S588>/EdgeRising' */

    /* Switch: '<S588>/Switch1' incorporates:
     *  Constant: '<S574>/Calib'
     *  Constant: '<S578>/Calib'
     *  Constant: '<S588>/Constant Value1'
     *  Logic: '<S588>/OR'
     *  MinMax: '<S588>/Minimum'
     *  Sum: '<S588>/Summation'
     *  UnitDelay: '<S588>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtS2H_ReadOutport || rtb_AND_h)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_p = 0.0F;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_p = fminf(KeOHSR_t_CanDelayAlignment,
            HeOHSR_t_RngSel_dT + OHSR_ac_DW.UnitDelay_DSTATE_p);
    }

    /* End of Switch: '<S588>/Switch1' */

    /* Logic: '<S536>/Logical2' incorporates:
     *  Constant: '<S578>/Calib'
     *  Logic: '<S588>/AND'
     *  RelationalOperator: '<S588>/Greater  Than'
     *  UnitDelay: '<S588>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeESPR_b_TCMEng =
        (rtb_TmpSignalConversionAtEnblTCMReqL_Rea ||
         (rtb_TmpSignalConversionAtVeESPR_b_TCMEng &&
          (OHSR_ac_DW.UnitDelay_DSTATE_p >= KeOHSR_t_CanDelayAlignment)));

    /* End of Outputs for SubSystem: '<S536>/Turn On Delay Time2' */

    /* Outputs for Atomic SubSystem: '<S536>/EdgeRising1' */
    /* Logic: '<S572>/OR1' incorporates:
     *  UnitDelay: '<S572>/Unit Delay'
     */
    rtb_TmpSignalConversionAtS2H_ReadOutport = !OHSR_ac_DW.UnitDelay_DSTATE_pk;

    /* Update for UnitDelay: '<S572>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_pk = VeOHSC_b_RngStMapSelection_M1;

    /* Outputs for Atomic SubSystem: '<S536>/Signal Latch On With Reset1' */
    /* Logic: '<S583>/OR1' incorporates:
     *  Logic: '<S572>/AND'
     *  Logic: '<S583>/NOT'
     *  Logic: '<S583>/OR'
     *  UnitDelay: '<S583>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_fn = (rtb_TmpSignalConversionAtVeESPR_b_TCMEng ||
        (((!VeOHSC_b_RngStMapSelection_M1) ||
          (!rtb_TmpSignalConversionAtS2H_ReadOutport)) &&
         (OHSR_ac_DW.UnitDelay_DSTATE_fn)));

    /* End of Outputs for SubSystem: '<S536>/Signal Latch On With Reset1' */
    /* End of Outputs for SubSystem: '<S536>/EdgeRising1' */

    /* If: '<S536>/If1' incorporates:
     *  Switch: '<S579>/Switch1'
     */
    s1205_iter = OHSR_ac_DW.If1_ActiveSubsystem;
    OHSR_ac_DW.If1_ActiveSubsystem = (sint8)((!VeOHSC_b_ArbOpt_M1) ? 1 : 0);
    if (OHSR_ac_DW.If1_ActiveSubsystem == 0)
    {
        if (0 != s1205_iter)
        {
            /* SystemReset for IfAction SubSystem: '<S536>/Abritrated_Desired_Ni_M1' incorporates:
             *  ActionPort: '<S567>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S567>/NTurb_V_Offset_M1' */
            /* SystemReset for If: '<S536>/If1' incorporates:
             *  Switch: '<S604>/Switch1'
             *  UnitDelay: '<S600>/Unit Delay'
             *  UnitDelay: '<S601>/Unit Delay'
             *  UnitDelay: '<S602>/Unit Delay'
             *  UnitDelay: '<S603>/Unit Delay'
             *  UnitDelay: '<S604>/Unit Delay'
             *  UnitDelay: '<S605>/Unit Delay'
             */
            OHSR_ac_DW.UnitDelay_DSTATE_jk = 0.0F;
            OHSR_ac_DW.UnitDelay_DSTATE_dr = false;
            OHSR_ac_DW.UnitDelay_DSTATE_jw = 0.0F;

            /* SystemReset for Atomic SubSystem: '<S594>/EdgeRising' */
            OHSR_ac_DW.UnitDelay_DSTATE_k3 = false;

            /* End of SystemReset for SubSystem: '<S594>/EdgeRising' */

            /* SystemReset for Atomic SubSystem: '<S594>/StopWatchResetTriggerEnabled1' */
            OHSR_ac_DW.UnitDelay_DSTATE_gu = 0.0F;

            /* SystemReset for Atomic SubSystem: '<S601>/EdgeRising' */
            OHSR_ac_DW.UnitDelay_DSTATE_f2 = false;

            /* End of SystemReset for SubSystem: '<S601>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S594>/StopWatchResetTriggerEnabled1' */
            /* End of SystemReset for SubSystem: '<S567>/NTurb_V_Offset_M1' */
            /* End of SystemReset for SubSystem: '<S536>/Abritrated_Desired_Ni_M1' */
        }

        /* Outputs for IfAction SubSystem: '<S536>/Abritrated_Desired_Ni_M1' incorporates:
         *  ActionPort: '<S567>/Action Port'
         */
        /* MinMax: '<S567>/MinMax6' incorporates:
         *  DataTypeConversion: '<S567>/Data Type Conversion1'
         *  Selector: '<S551>/Selector2'
         *  Selector: '<S567>/Selector'
         */
        rtb_Merge1 = fminf
            (rtb_TmpSignalConversionAtVaOSMR_n_NTurb_[VeOHSC_e_SGrDsrd],
             rtb_TmpSignalConversionAtVeOSMR_n_Inp_fc);

        /* Outputs for Atomic SubSystem: '<S567>/NTurb_V_Offset_M1' */
        /* Logic: '<S594>/Logical2' */
        rtb_TmpSignalConversionAtEnblTCMReqL_Rea = (tmpRead_g ||
            rtb_TmpSignalConversionAtVeOSMR_b_PnLimi);

        /* Outputs for Atomic SubSystem: '<S594>/EdgeRising' */
        /* Switch: '<S604>/Switch1' incorporates:
         *  Constant: '<S596>/TRUE Constant'
         */
        if (rtb_TmpSignalConversionAtVeOSMR_b_PnLimi)
        {
            OHSR_ac_DW.UnitDelay_DSTATE_k3 = true;
        }

        /* Logic: '<S596>/AND' incorporates:
         *  Logic: '<S596>/OR1'
         */
        rtb_TmpSignalConversionAtS2H_ReadOutport =
            (rtb_TmpSignalConversionAtEnblTCMReqL_Rea &&
             (!OHSR_ac_DW.UnitDelay_DSTATE_k3));

        /* Switch: '<S604>/Switch1' incorporates:
         *  Switch: '<S604>/Switch3'
         *  UnitDelay: '<S604>/Unit Delay'
         */
        OHSR_ac_DW.UnitDelay_DSTATE_k3 =
            (rtb_TmpSignalConversionAtVeOSMR_b_PnLimi ||
             rtb_TmpSignalConversionAtEnblTCMReqL_Rea);

        /* End of Outputs for SubSystem: '<S594>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S594>/StopWatchResetTriggerEnabled1' */
        /* Outputs for Atomic SubSystem: '<S601>/EdgeRising' */
        /* Logic: '<S605>/OR1' incorporates:
         *  UnitDelay: '<S605>/Unit Delay'
         */
        rtb_TmpSignalConversionAtEnblTCMReqL_Rea =
            !OHSR_ac_DW.UnitDelay_DSTATE_f2;

        /* Update for UnitDelay: '<S605>/Unit Delay' */
        OHSR_ac_DW.UnitDelay_DSTATE_f2 =
            rtb_TmpSignalConversionAtS2H_ReadOutport;

        /* Switch: '<S601>/Switch1' incorporates:
         *  Constant: '<S601>/Constant Value2'
         *  Logic: '<S605>/AND'
         *  Switch: '<S601>/Switch2'
         *  UnitDelay: '<S601>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtS2H_ReadOutport &&
                rtb_TmpSignalConversionAtEnblTCMReqL_Rea)
        {
            OHSR_ac_DW.UnitDelay_DSTATE_gu = 0.0F;
        }
        else
        {
            if (tmpRead_g)
            {
                /* UnitDelay: '<S601>/Unit Delay' incorporates:
                 *  Constant: '<S597>/Calib'
                 *  Sum: '<S601>/Subtraction'
                 *  Switch: '<S601>/Switch2'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_gu += HeOHSR_t_RngSel_dT;
            }
        }

        /* End of Switch: '<S601>/Switch1' */
        /* End of Outputs for SubSystem: '<S601>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S594>/StopWatchResetTriggerEnabled1' */

        /* Logic: '<S600>/OR' incorporates:
         *  Logic: '<S600>/NOT'
         *  Logic: '<S600>/OR1'
         *  UnitDelay: '<S600>/Unit Delay'
         */
        OHSR_ac_DW.UnitDelay_DSTATE_dr =
            ((!rtb_TmpSignalConversionAtS2H_ReadOutport) && (tmpRead_g ||
              (OHSR_ac_DW.UnitDelay_DSTATE_dr)));

        /* Switch: '<S594>/Switch5' incorporates:
         *  Switch: '<S603>/Switch1'
         */
        if (OHSR_ac_DW.UnitDelay_DSTATE_dr)
        {
            /* Switch: '<S602>/Switch1' */
            if (rtb_TmpSignalConversionAtVeOSMR_b_PnLimi)
            {
                /* Switch: '<S594>/Switch5' incorporates:
                 *  Constant: '<S594>/Constant Value3'
                 *  Switch: '<S602>/Switch1'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_jw = 0.0F;
            }
            else
            {
                /* Switch: '<S594>/Switch5' incorporates:
                 *  Switch: '<S602>/Switch1'
                 *  UnitDelay: '<S602>/Unit Delay'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_jw = OHSR_ac_DW.UnitDelay_DSTATE_jk;
            }

            /* End of Switch: '<S602>/Switch1' */
        }
        else
        {
            if (rtb_TmpSignalConversionAtVeOSMR_b_PnLimi)
            {
                /* Switch: '<S603>/Switch1' incorporates:
                 *  Constant: '<S594>/Constant Value4'
                 *  Switch: '<S594>/Switch5'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_jw = 0.0F;
            }
        }

        /* End of Switch: '<S594>/Switch5' */

        /* Switch: '<S594>/Switch4' */
        if (UnitDelay_DSTATE_f4)
        {
            /* Switch: '<S594>/Switch4' incorporates:
             *  Constant: '<S594>/Constant Value1'
             */
            rtb_Selector1_h2 = 0.0F;
        }
        else
        {
            /* Sum: '<S594>/Sum6' incorporates:
             *  Lookup_n-D: '<S598>/Vector'
             *  Product: '<S594>/Product2'
             *  Switch: '<S601>/Switch1'
             *  UnitDelay: '<S601>/Unit Delay'
             */
            rtb_Selector1_h2 = OHSR_ac_DW.UnitDelay_DSTATE_jw -
                (OHSR_ac_DW.UnitDelay_DSTATE_gu * look1_iflf_binlca_16a
                 (OHSR_ac_DW.UnitDelay_DSTATE_gu, ((const float32 *)
                   &(KxOHSR_k_HAS2Vrtl_RampFac_M1[0])), ((const float32 *)
                   &(KtOHSR_k_HAS2Vrtl_RampFac_M1[0])), 2U));

            /* Outputs for Atomic SubSystem: '<S594>/Limiter1' */
            /* Switch: '<S599>/Switch1' incorporates:
             *  RelationalOperator: '<S599>/Relational Operator'
             */
            if (OHSR_ac_DW.UnitDelay_DSTATE_jw < rtb_Selector1_h2)
            {
                /* Switch: '<S599>/Switch1' */
                rtb_Selector1_h2 = OHSR_ac_DW.UnitDelay_DSTATE_jw;
            }

            /* End of Switch: '<S599>/Switch1' */

            /* Switch: '<S599>/Switch' incorporates:
             *  Constant: '<S594>/Constant Value2'
             *  RelationalOperator: '<S599>/Relational Operator1'
             */
            if (rtb_Selector1_h2 <= 0.0F)
            {
                /* Switch: '<S594>/Switch4' */
                rtb_Selector1_h2 = 0.0F;
            }

            /* End of Switch: '<S599>/Switch' */
            /* End of Outputs for SubSystem: '<S594>/Limiter1' */
        }

        /* End of Switch: '<S594>/Switch4' */

        /* Switch: '<S602>/Switch3' incorporates:
         *  Constant: '<S594>/Constant Value3'
         *  Constant: '<S594>/Constant Value4'
         *  Sum: '<S594>/Sum5'
         *  Switch: '<S603>/Switch3'
         *  UnitDelay: '<S602>/Unit Delay'
         *  UnitDelay: '<S603>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVeOSMR_b_PnLimi)
        {
            OHSR_ac_DW.UnitDelay_DSTATE_jk = 0.0F;
            OHSR_ac_DW.UnitDelay_DSTATE_jw = 0.0F;
        }
        else
        {
            OHSR_ac_DW.UnitDelay_DSTATE_jk = OHSR_ac_DW.UnitDelay_DSTATE_jw;
            OHSR_ac_DW.UnitDelay_DSTATE_jw =
                rtb_TmpSignalConversionAtVeESPR_n_TCMEng - rtb_Switch1_do[0];
        }

        /* End of Switch: '<S602>/Switch3' */
        /* End of Outputs for SubSystem: '<S567>/NTurb_V_Offset_M1' */

        /* Switch: '<S567>/Switch6' incorporates:
         *  Constant: '<S575>/Calib'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         *  Selector: '<S536>/Selector1'
         *  SignalConversion generated from: '<S2>/VeHSER_e_RngEqnSel'
         *  Switch: '<S567>/Switch5'
         *  UnitDelay: '<S583>/Unit Delay'
         */
        if (KaOHSR_b_DsblTCMEngSpdReq_M1
                [(rtb_TmpSignalConversionAtVeHSER_e_RngEqn)])
        {
            /* MinMax: '<S567>/MinMax2' incorporates:
             *  Constant: '<S567>/Constant Value'
             */
            rtb_Merge1 = 0.0F;
        }
        else
        {
            if (OHSR_ac_DW.UnitDelay_DSTATE_fn)
            {
                /* Switch: '<S567>/Switch3' incorporates:
                 *  Sum: '<S567>/Sum4'
                 *  Switch: '<S567>/Switch5'
                 */
                if (!UnitDelay_DSTATE_f4)
                {
                    rtb_Merge1 = rtb_Selector1_h2 + rtb_Switch1_do[0];
                }

                /* End of Switch: '<S567>/Switch3' */
            }

            /* Switch: '<S567>/Switch4' incorporates:
             *  Constant: '<S567>/Constant Value1'
             */
            if (UnitDelay_DSTATE_f4)
            {
                rtb_Selector1_h2 = rtb_TmpSignalConversionAtVeESPR_n_TCMEng;
            }
            else
            {
                rtb_Selector1_h2 = 0.0F;
            }

            /* End of Switch: '<S567>/Switch4' */

            /* MinMax: '<S567>/MinMax2' incorporates:
             *  Constant: '<S590>/Calib'
             *  Lookup_n-D: '<S593>/Vector'
             *  MinMax: '<S567>/MinMax4'
             *  Product: '<S567>/Product1'
             *  SignalConversion generated from: '<S2>/VeVTVR_M_LoadTorqFront_Opt'
             *  Sum: '<S567>/Sum3'
             */
            rtb_Merge1 = fmaxf(fmaxf(rtb_Merge1, rtb_Selector1_h2),
                               rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S *
                               KeOHSR_r_DsrdSpd_NbFctrM1) +
                look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeVTVR_M_LoadTo,
                ((const float32 *)&(KxOHSR_n_EngStrtP2SpdOffset[0])), ((const
                float32 *)&(KtOHSR_n_EngStrtP2SpdOffset[0])), 9U);
        }

        /* End of Switch: '<S567>/Switch6' */

        /* MinMax: '<S567>/MinMax1' */
        VeOHSC_n_TransNbBsd_NiDsrd_M1 = fmaxf
            (OHSR_ac_B.TmpSignalConversionAtTransMin_ReadOutpor, rtb_Merge1);

        /* Switch: '<S567>/Switch1' incorporates:
         *  Constant: '<S567>/Constant Value2'
         */
        if (loopCond)
        {
            rtb_Merge1 = rtb_TmpSignalConversionAtVeTISR_n_InputS;
        }
        else
        {
            rtb_Merge1 = 0.0F;
        }

        /* End of Switch: '<S567>/Switch1' */

        /* Merge: '<S536>/Merge' incorporates:
         *  Gain: '<S595>/Gain'
         *  MinMax: '<S567>/MinMax2'
         *  MinMax: '<S567>/MinMax5'
         */
        rtb_TmpSignalConversionAtVeVSDR_n_NTurbO = fminf
            (rtb_TmpSignalConversionAtVeESPR_n_EngSpd, fmaxf
             (VeOHSC_n_TransNbBsd_NiDsrd_M1, rtb_Merge1));

        /* Switch: '<S567>/Switch2' */
        if (loopCond)
        {
            /* Product: '<S921>/Multiplication' incorporates:
             *  Constant: '<S592>/Calib'
             */
            rtb_Merge1 = KeOHSR_r_NiDscl_M1_RampRt;
        }
        else
        {
            /* Product: '<S921>/Multiplication' incorporates:
             *  Constant: '<S591>/Calib'
             */
            rtb_Merge1 = KeOHSR_r_NiDscl_AllRngs_RampRt;
        }

        /* End of Switch: '<S567>/Switch2' */

        /* Merge: '<S536>/Merge10' incorporates:
         *  Constant: '<S567>/Constant Value3'
         *  SignalConversion generated from: '<S567>/FltCoefNi_M1'
         */
        rtb_Selector1_h2 = 1.0F;

        /* End of Outputs for SubSystem: '<S536>/Abritrated_Desired_Ni_M1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S536>/Optimized_Ni_M1' incorporates:
         *  ActionPort: '<S579>/Action Port'
         */
        if (VeOHSC_b_ManAllwd_IdxM1)
        {
            /* Switch: '<S579>/Switch' incorporates:
             *  Constant: '<S645>/Calib'
             *  Logic: '<S579>/Logical4'
             *  Switch: '<S579>/Switch1'
             */
            if (rtb_TmpSignalConversionAtShiftToN_ReadOu &&
                    (HeOHSR_b_EnblCreepOverrd_NiM1))
            {
                rtb_Switch5_fw = rtb_VariantMerge_For_Variant_Source_XeOH[1];
            }
            else
            {
                rtb_Switch5_fw = VeOHSC_n_OptInputSpdDsrd_M1;
            }

            /* End of Switch: '<S579>/Switch' */

            /* Switch: '<S579>/Switch1' incorporates:
             *  Constant: '<S646>/Calib'
             *  Product: '<S579>/Product2'
             */
            rtb_TmpSignalConversionAtVeVSDR_n_NTurbO = rtb_Switch5_fw *
                KeOHSR_r_M1DsrdSpd_NiOptFctr;
        }
        else
        {
            /* Switch: '<S579>/Switch1' incorporates:
             *  UnitDelay: '<S534>/Unit Delay2'
             */
            rtb_TmpSignalConversionAtVeVSDR_n_NTurbO =
                OHSR_ac_DW.UnitDelay2_DSTATE;
        }

        /* Merge: '<S536>/Merge10' incorporates:
         *  Lookup_n-D: '<S647>/Vector'
         *  Sum: '<S579>/Sum1'
         *  UnitDelay: '<S534>/Unit Delay2'
         */
        rtb_Selector1_h2 = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeVSDR_n_NTurbO -
             OHSR_ac_DW.UnitDelay2_DSTATE, ((const float32 *)
              &(KxOHSR_k_InputSpeedDsrdFiltM1[0])), ((const float32 *)
              &(KtOHSR_k_InputSpeedDsrdFiltM1[0])), 6U);

        /* Product: '<S921>/Multiplication' incorporates:
         *  Constant: '<S579>/Constant Value1'
         *  SignalConversion generated from: '<S579>/Ramp_Rt'
         */
        rtb_Merge1 = 1.0E+6F;

        /* End of Outputs for SubSystem: '<S536>/Optimized_Ni_M1' */
    }

    /* Outputs for Atomic SubSystem: '<S586>/EdgeBi' */
    /* RelationalOperator: '<S669>/Not Equal' incorporates:
     *  UnitDelay: '<S669>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeOSMR_b_PnLimi = (VeOHSC_b_ArbOpt_M2 !=
        OHSR_ac_DW.UnitDelay_DSTATE_ef);

    /* Update for UnitDelay: '<S669>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_ef = VeOHSC_b_ArbOpt_M2;

    /* End of Outputs for SubSystem: '<S586>/EdgeBi' */

    /* Outputs for Atomic SubSystem: '<S536>/EdgeRising' */
    /* Logic: '<S571>/OR1' incorporates:
     *  UnitDelay: '<S571>/Unit Delay'
     */
    rtb_TmpSignalConversionAtS2H_ReadOutport = !OHSR_ac_DW.UnitDelay_DSTATE_fnw;

    /* Update for UnitDelay: '<S571>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_fnw = VeOHSC_b_RngStMapSelection_M2;

    /* Outputs for Atomic SubSystem: '<S536>/Signal Latch On With Reset' */
    /* Logic: '<S582>/OR1' incorporates:
     *  Logic: '<S571>/AND'
     *  Logic: '<S582>/NOT'
     *  Logic: '<S582>/OR'
     *  UnitDelay: '<S582>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_cvk = (rtb_TmpSignalConversionAtVeESPR_b_TCMEng ||
        (((!VeOHSC_b_RngStMapSelection_M2) ||
          (!rtb_TmpSignalConversionAtS2H_ReadOutport)) &&
         (OHSR_ac_DW.UnitDelay_DSTATE_cvk)));

    /* End of Outputs for SubSystem: '<S536>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S536>/EdgeRising' */

    /* If: '<S536>/If2' incorporates:
     *  Switch: '<S580>/Switch1'
     */
    s1205_iter = OHSR_ac_DW.If2_ActiveSubsystem;
    OHSR_ac_DW.If2_ActiveSubsystem = (sint8)((!VeOHSC_b_ArbOpt_M2) ? 1 : 0);
    if (OHSR_ac_DW.If2_ActiveSubsystem == 0)
    {
        if (0 != s1205_iter)
        {
            /* SystemReset for IfAction SubSystem: '<S536>/Abritrated_Desired_Ni_M2' incorporates:
             *  ActionPort: '<S568>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S568>/NTurb_V_Offset_M2' */
            /* SystemReset for If: '<S536>/If2' incorporates:
             *  Switch: '<S621>/Switch1'
             *  UnitDelay: '<S617>/Unit Delay'
             *  UnitDelay: '<S618>/Unit Delay'
             *  UnitDelay: '<S619>/Unit Delay'
             *  UnitDelay: '<S620>/Unit Delay'
             *  UnitDelay: '<S621>/Unit Delay'
             *  UnitDelay: '<S622>/Unit Delay'
             */
            OHSR_ac_DW.UnitDelay_DSTATE_lz = 0.0F;
            OHSR_ac_DW.UnitDelay_DSTATE_b2 = false;
            OHSR_ac_DW.UnitDelay_DSTATE_jf = 0.0F;

            /* SystemReset for Atomic SubSystem: '<S611>/EdgeRising' */
            OHSR_ac_DW.UnitDelay_DSTATE_ae = false;

            /* End of SystemReset for SubSystem: '<S611>/EdgeRising' */

            /* SystemReset for Atomic SubSystem: '<S611>/StopWatchResetTriggerEnabled1' */
            OHSR_ac_DW.UnitDelay_DSTATE_ce = 0.0F;

            /* SystemReset for Atomic SubSystem: '<S618>/EdgeRising' */
            OHSR_ac_DW.UnitDelay_DSTATE_i3 = false;

            /* End of SystemReset for SubSystem: '<S618>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S611>/StopWatchResetTriggerEnabled1' */
            /* End of SystemReset for SubSystem: '<S568>/NTurb_V_Offset_M2' */
            /* End of SystemReset for SubSystem: '<S536>/Abritrated_Desired_Ni_M2' */
        }

        /* Outputs for IfAction SubSystem: '<S536>/Abritrated_Desired_Ni_M2' incorporates:
         *  ActionPort: '<S568>/Action Port'
         */
        /* MinMax: '<S568>/MinMax6' incorporates:
         *  DataTypeConversion: '<S568>/Data Type Conversion1'
         *  Selector: '<S551>/Selector2'
         *  Selector: '<S568>/Selector'
         */
        rtb_Abs1 = fminf
            (rtb_TmpSignalConversionAtVaOSMR_n_NTurb_[VeOHSC_e_SGrDsrd],
             rtb_TmpSignalConversionAtVeOSMR_n_Inp_fc);

        /* Outputs for Atomic SubSystem: '<S568>/NTurb_V_Offset_M2' */
        /* Logic: '<S611>/Logical2' */
        rtb_TmpSignalConversionAtEnblTCMReqL_Rea =
            (rtb_TmpSignalConversionAtPS_ReadOutport1 ||
             rtb_TmpSignalConversionAtVeOSMR_b_PnLimi);

        /* Outputs for Atomic SubSystem: '<S611>/EdgeRising' */
        /* Switch: '<S621>/Switch1' incorporates:
         *  Constant: '<S613>/TRUE Constant'
         */
        if (rtb_TmpSignalConversionAtVeOSMR_b_PnLimi)
        {
            OHSR_ac_DW.UnitDelay_DSTATE_ae = true;
        }

        /* Logic: '<S613>/AND' incorporates:
         *  Logic: '<S613>/OR1'
         */
        rtb_TmpSignalConversionAtS2H_ReadOutport =
            (rtb_TmpSignalConversionAtEnblTCMReqL_Rea &&
             (!OHSR_ac_DW.UnitDelay_DSTATE_ae));

        /* Switch: '<S621>/Switch1' incorporates:
         *  Switch: '<S621>/Switch3'
         *  UnitDelay: '<S621>/Unit Delay'
         */
        OHSR_ac_DW.UnitDelay_DSTATE_ae =
            (rtb_TmpSignalConversionAtVeOSMR_b_PnLimi ||
             rtb_TmpSignalConversionAtEnblTCMReqL_Rea);

        /* End of Outputs for SubSystem: '<S611>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S611>/StopWatchResetTriggerEnabled1' */
        /* Outputs for Atomic SubSystem: '<S618>/EdgeRising' */
        /* Logic: '<S622>/OR1' incorporates:
         *  UnitDelay: '<S622>/Unit Delay'
         */
        rtb_TmpSignalConversionAtEnblTCMReqL_Rea =
            !OHSR_ac_DW.UnitDelay_DSTATE_i3;

        /* Update for UnitDelay: '<S622>/Unit Delay' */
        OHSR_ac_DW.UnitDelay_DSTATE_i3 =
            rtb_TmpSignalConversionAtS2H_ReadOutport;

        /* Switch: '<S618>/Switch1' incorporates:
         *  Constant: '<S618>/Constant Value2'
         *  Logic: '<S622>/AND'
         *  Switch: '<S618>/Switch2'
         *  UnitDelay: '<S618>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtS2H_ReadOutport &&
                rtb_TmpSignalConversionAtEnblTCMReqL_Rea)
        {
            OHSR_ac_DW.UnitDelay_DSTATE_ce = 0.0F;
        }
        else
        {
            if (rtb_TmpSignalConversionAtPS_ReadOutport1)
            {
                /* UnitDelay: '<S618>/Unit Delay' incorporates:
                 *  Constant: '<S614>/Calib'
                 *  Sum: '<S618>/Subtraction'
                 *  Switch: '<S618>/Switch2'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_ce += HeOHSR_t_RngSel_dT;
            }
        }

        /* End of Switch: '<S618>/Switch1' */
        /* End of Outputs for SubSystem: '<S618>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S611>/StopWatchResetTriggerEnabled1' */

        /* Logic: '<S617>/OR' incorporates:
         *  Logic: '<S617>/NOT'
         *  Logic: '<S617>/OR1'
         *  UnitDelay: '<S617>/Unit Delay'
         */
        OHSR_ac_DW.UnitDelay_DSTATE_b2 =
            ((!rtb_TmpSignalConversionAtS2H_ReadOutport) &&
             (rtb_TmpSignalConversionAtPS_ReadOutport1 ||
              (OHSR_ac_DW.UnitDelay_DSTATE_b2)));

        /* Switch: '<S611>/Switch5' incorporates:
         *  Switch: '<S620>/Switch1'
         */
        if (OHSR_ac_DW.UnitDelay_DSTATE_b2)
        {
            /* Switch: '<S619>/Switch1' */
            if (rtb_TmpSignalConversionAtVeOSMR_b_PnLimi)
            {
                /* Switch: '<S611>/Switch5' incorporates:
                 *  Constant: '<S611>/Constant Value3'
                 *  Switch: '<S619>/Switch1'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_jf = 0.0F;
            }
            else
            {
                /* Switch: '<S611>/Switch5' incorporates:
                 *  Switch: '<S619>/Switch1'
                 *  UnitDelay: '<S619>/Unit Delay'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_jf = OHSR_ac_DW.UnitDelay_DSTATE_lz;
            }

            /* End of Switch: '<S619>/Switch1' */
        }
        else
        {
            if (rtb_TmpSignalConversionAtVeOSMR_b_PnLimi)
            {
                /* Switch: '<S620>/Switch1' incorporates:
                 *  Constant: '<S611>/Constant Value4'
                 *  Switch: '<S611>/Switch5'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_jf = 0.0F;
            }
        }

        /* End of Switch: '<S611>/Switch5' */

        /* Switch: '<S611>/Switch4' */
        if (rtb_AND_o5)
        {
            /* Switch: '<S611>/Switch4' incorporates:
             *  Constant: '<S611>/Constant Value1'
             */
            rtb_Merge4 = 0.0F;
        }
        else
        {
            /* Sum: '<S611>/Sum6' incorporates:
             *  Lookup_n-D: '<S615>/Vector'
             *  Product: '<S611>/Product2'
             *  Switch: '<S618>/Switch1'
             *  UnitDelay: '<S618>/Unit Delay'
             */
            rtb_Merge4 = OHSR_ac_DW.UnitDelay_DSTATE_jf -
                (OHSR_ac_DW.UnitDelay_DSTATE_ce * look1_iflf_binlca_16a
                 (OHSR_ac_DW.UnitDelay_DSTATE_ce, ((const float32 *)
                   &(KxOHSR_k_HAS2Vrtl_RampFac_M2[0])), ((const float32 *)
                   &(KtOHSR_k_HAS2Vrtl_RampFac_M2[0])), 2U));

            /* Outputs for Atomic SubSystem: '<S611>/Limiter1' */
            /* Switch: '<S616>/Switch1' incorporates:
             *  RelationalOperator: '<S616>/Relational Operator'
             */
            if (OHSR_ac_DW.UnitDelay_DSTATE_jf < rtb_Merge4)
            {
                /* Switch: '<S616>/Switch1' */
                rtb_Merge4 = OHSR_ac_DW.UnitDelay_DSTATE_jf;
            }

            /* End of Switch: '<S616>/Switch1' */

            /* Switch: '<S616>/Switch' incorporates:
             *  Constant: '<S611>/Constant Value2'
             *  RelationalOperator: '<S616>/Relational Operator1'
             */
            if (rtb_Merge4 <= 0.0F)
            {
                /* Switch: '<S611>/Switch4' */
                rtb_Merge4 = 0.0F;
            }

            /* End of Switch: '<S616>/Switch' */
            /* End of Outputs for SubSystem: '<S611>/Limiter1' */
        }

        /* End of Switch: '<S611>/Switch4' */

        /* Switch: '<S619>/Switch3' incorporates:
         *  Constant: '<S611>/Constant Value3'
         *  Constant: '<S611>/Constant Value4'
         *  Sum: '<S611>/Sum5'
         *  Switch: '<S620>/Switch3'
         *  UnitDelay: '<S619>/Unit Delay'
         *  UnitDelay: '<S620>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVeOSMR_b_PnLimi)
        {
            OHSR_ac_DW.UnitDelay_DSTATE_lz = 0.0F;
            OHSR_ac_DW.UnitDelay_DSTATE_jf = 0.0F;
        }
        else
        {
            OHSR_ac_DW.UnitDelay_DSTATE_lz = OHSR_ac_DW.UnitDelay_DSTATE_jf;
            OHSR_ac_DW.UnitDelay_DSTATE_jf =
                rtb_TmpSignalConversionAtVeESPR_n_TCMEng - rtb_Switch1_do[0];
        }

        /* End of Switch: '<S619>/Switch3' */
        /* End of Outputs for SubSystem: '<S568>/NTurb_V_Offset_M2' */

        /* Switch: '<S568>/Switch6' incorporates:
         *  Constant: '<S576>/Calib'
         *  DataTypeConversion: '<S536>/Data Type Conversion1'
         *  Selector: '<S536>/Selector'
         *  SignalConversion generated from: '<S2>/VeHSER_e_RngEqnSel'
         *  Switch: '<S568>/Switch5'
         *  UnitDelay: '<S582>/Unit Delay'
         */
        if (KaOHSR_b_DsblTCMEngSpdReq_M2
                [(rtb_TmpSignalConversionAtVeHSER_e_RngEqn)])
        {
            /* MinMax: '<S568>/MinMax2' incorporates:
             *  Constant: '<S568>/Constant Value'
             */
            rtb_Abs1 = 0.0F;
        }
        else
        {
            if (OHSR_ac_DW.UnitDelay_DSTATE_cvk)
            {
                /* Switch: '<S568>/Switch3' incorporates:
                 *  Sum: '<S568>/Sum4'
                 *  Switch: '<S568>/Switch5'
                 */
                if (!rtb_AND_o5)
                {
                    rtb_Abs1 = rtb_Merge4 + rtb_Switch1_do[0];
                }

                /* End of Switch: '<S568>/Switch3' */
            }

            /* Switch: '<S568>/Switch4' incorporates:
             *  Constant: '<S568>/Constant Value3'
             */
            if (rtb_AND_o5)
            {
                rtb_Merge4 = rtb_TmpSignalConversionAtVeESPR_n_TCMEng;
            }
            else
            {
                rtb_Merge4 = 0.0F;
            }

            /* End of Switch: '<S568>/Switch4' */

            /* MinMax: '<S568>/MinMax2' incorporates:
             *  Constant: '<S607>/Calib'
             *  Lookup_n-D: '<S610>/Vector'
             *  MinMax: '<S568>/MinMax4'
             *  Product: '<S568>/Product1'
             *  SignalConversion generated from: '<S2>/VeVTVR_M_LoadTorqFront_Opt'
             *  Sum: '<S568>/Sum3'
             */
            rtb_Abs1 = fmaxf(fmaxf(rtb_Abs1, rtb_Merge4),
                             rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S *
                             KeOHSR_r_DsrdSpd_NbFctrM2) + look1_iflf_binlca_16a
                (rtb_TmpSignalConversionAtVeVTVR_M_LoadTo, ((const float32 *)
                  &(KxOHSR_n_EngStrtP2SpdOffset[0])), ((const float32 *)
                  &(KtOHSR_n_EngStrtP2SpdOffset[0])), 9U);
        }

        /* End of Switch: '<S568>/Switch6' */

        /* MinMax: '<S568>/MinMax1' */
        VeOHSC_n_TransNbBsd_NiDsrd_M2 = fmaxf(fmaxf
            (OHSR_ac_B.TmpSignalConversionAtTransMin_ReadOutpor,
             rtb_TmpSignalConversionAtVeMSPR_n_P2SpdC), rtb_Abs1);

        /* Switch: '<S568>/Switch1' incorporates:
         *  Constant: '<S568>/Constant Value2'
         */
        if (rtb_Logical2_jm)
        {
            rtb_Abs1 = rtb_TmpSignalConversionAtVeTISR_n_InputS;
        }
        else
        {
            rtb_Abs1 = 0.0F;
        }

        /* End of Switch: '<S568>/Switch1' */

        /* Merge: '<S536>/Merge2' incorporates:
         *  Gain: '<S612>/Gain'
         *  MinMax: '<S568>/MinMax2'
         *  MinMax: '<S568>/MinMax5'
         */
        rtb_TmpSignalConversionAtVeOSMR_n_Inp_of = fminf
            (rtb_TmpSignalConversionAtVeESPR_n_EngSpd, fmaxf
             (VeOHSC_n_TransNbBsd_NiDsrd_M2, rtb_Abs1));

        /* Switch: '<S568>/Switch2' */
        if (rtb_Logical2_jm)
        {
            /* Sum: '<S1209>/Sum2' incorporates:
             *  Constant: '<S609>/Calib'
             */
            rtb_Abs1 = KeOHSR_r_NiDscl_M2_RampRt;
        }
        else
        {
            /* Sum: '<S1209>/Sum2' incorporates:
             *  Constant: '<S608>/Calib'
             */
            rtb_Abs1 = KeOHSR_r_NiDscl_AllRngs_RampRt;
        }

        /* End of Switch: '<S568>/Switch2' */

        /* Merge: '<S536>/Merge4' incorporates:
         *  Constant: '<S568>/Constant Value1'
         *  SignalConversion generated from: '<S568>/FltCoefNi_M2'
         */
        rtb_Merge4 = 1.0F;

        /* End of Outputs for SubSystem: '<S536>/Abritrated_Desired_Ni_M2' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S536>/Optimized_Ni_M2' incorporates:
         *  ActionPort: '<S580>/Action Port'
         */
        if (VeOHSC_b_ManAllwd_IdxM2)
        {
            /* Switch: '<S580>/Switch' incorporates:
             *  Constant: '<S649>/Calib'
             *  Logic: '<S580>/Logical4'
             *  Switch: '<S580>/Switch1'
             */
            if (rtb_TmpSignalConversionAtShiftToN_ReadOu &&
                    (HeOHSR_b_EnblCreepOverrd_NiM2))
            {
                rtb_Switch5_fw = rtb_VariantMerge_For_Variant_Source_XeOH[2];
            }
            else
            {
                rtb_Switch5_fw = VeOHSC_n_OptInputSpdDsrd_M2;
            }

            /* End of Switch: '<S580>/Switch' */

            /* Switch: '<S580>/Switch1' incorporates:
             *  Constant: '<S650>/Calib'
             *  Product: '<S580>/Product3'
             */
            rtb_TmpSignalConversionAtVeOSMR_n_Inp_of = rtb_Switch5_fw *
                KeOHSR_r_M2DsrdSpd_NiOptFctr;
        }
        else
        {
            /* Switch: '<S580>/Switch1' incorporates:
             *  UnitDelay: '<S534>/Unit Delay3'
             */
            rtb_TmpSignalConversionAtVeOSMR_n_Inp_of =
                OHSR_ac_DW.UnitDelay3_DSTATE;
        }

        /* Merge: '<S536>/Merge4' incorporates:
         *  Lookup_n-D: '<S651>/Vector'
         *  Sum: '<S580>/Sum2'
         *  UnitDelay: '<S534>/Unit Delay3'
         */
        rtb_Merge4 = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeOSMR_n_Inp_of -
             OHSR_ac_DW.UnitDelay3_DSTATE, ((const float32 *)
              &(KxOHSR_k_InputSpeedDsrdFiltM2[0])), ((const float32 *)
              &(KtOHSR_k_InputSpeedDsrdFiltM2[0])), 6U);

        /* Sum: '<S1209>/Sum2' incorporates:
         *  Constant: '<S580>/Constant Value1'
         *  SignalConversion generated from: '<S580>/Ramp_Rt'
         */
        rtb_Abs1 = 1.0E+6F;

        /* End of Outputs for SubSystem: '<S536>/Optimized_Ni_M2' */
    }

    /* Outputs for Atomic SubSystem: '<S587>/EdgeBi' */
    /* RelationalOperator: '<S681>/Not Equal' incorporates:
     *  UnitDelay: '<S681>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeOSMR_b_PnLimi = (VeOHSC_b_ArbOpt_N !=
        OHSR_ac_DW.UnitDelay_DSTATE_ac);

    /* Update for UnitDelay: '<S681>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_ac = VeOHSC_b_ArbOpt_N;

    /* End of Outputs for SubSystem: '<S587>/EdgeBi' */

    /* MinMax: '<S554>/MinMax4' incorporates:
     *  Constant: '<S803>/Calib'
     */
    rtb_TmpSignalConversionAtVeOSMR_n_Inpu_m = fmaxf(fmaxf
        (VeOHSC_n_OptMtrBSpdDsrd_N, rtb_TmpSignalConversionAtVeOHSR_n_IdleSp),
        KeOHSR_n_OptNbMinSpdProf);

    /* If: '<S554>/If1' incorporates:
     *  Constant: '<S802>/Constant'
     *  Logic: '<S554>/Logical2'
     *  RelationalOperator: '<S554>/Comparison4'
     */
    if (rtb_AND_ck || (((uint32)rtb_Selector3_kl_tmp) == CeOHSR_e_LaunchSpdCntrl))
    {
        /* Outputs for IfAction SubSystem: '<S554>/Nb_Launch' incorporates:
         *  ActionPort: '<S804>/Action Port'
         */
        /* Switch: '<S804>/Switch' incorporates:
         *  Constant: '<S808>/Constant'
         *  RelationalOperator: '<S804>/Comparison4'
         *  Switch: '<S804>/Switch1'
         */
        if (((uint32)rtb_Selector3_kl_tmp) == CeOHSR_e_LaunchSpdCntrl)
        {
            /* Merge: '<S536>/Merge3' incorporates:
             *  MinMax: '<S804>/MinMax1'
             */
            rtb_Merge3 = fmaxf(rtb_TmpSignalConversionAtVeOSMR_n_Inp_fc,
                               rtb_TmpSignalConversionAtVeMSPR_n_P2SpdC);

            /* Product: '<S814>/Multiplication' incorporates:
             *  Constant: '<S809>/Calib'
             */
            rtb_Switch5_fw = KeOHSR_r_NbDscl_LaunchSpdCntrl_RampRt;
        }
        else
        {
            /* Merge: '<S536>/Merge3' */
            rtb_Merge3 = rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S;

            /* Product: '<S814>/Multiplication' incorporates:
             *  Constant: '<S810>/Calib'
             */
            rtb_Switch5_fw = KeOHSR_r_NbDscl_Launch_RampRt;
        }

        /* End of Switch: '<S804>/Switch' */

        /* Product: '<S923>/Multiplication' incorporates:
         *  Constant: '<S804>/Constant Value2'
         *  SignalConversion generated from: '<S804>/FltCoefNb'
         */
        rtb_Multiplication_f = 1.0F;

        /* End of Outputs for SubSystem: '<S554>/Nb_Launch' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S554>/Nb_Not_Launch' incorporates:
         *  ActionPort: '<S805>/Action Port'
         */
        /* Merge: '<S536>/Merge3' incorporates:
         *  Constant: '<S805>/Constant Value1'
         *  SignalConversion generated from: '<S805>/Nb'
         */
        rtb_Merge3 = 0.0F;

        /* Product: '<S923>/Multiplication' incorporates:
         *  Lookup_n-D: '<S812>/Vector'
         *  Sum: '<S805>/Sum2'
         *  UnitDelay: '<S534>/Unit Delay4'
         */
        rtb_Multiplication_f = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeOSMR_n_Inpu_m -
             OHSR_ac_DW.UnitDelay4_DSTATE, ((const float32 *)
              &(KxOHSR_k_MtrBSpeedDsrdFilt[0])), ((const float32 *)
              &(KtOHSR_k_MtrBSpeedDsrdFilt[0])), 6U);

        /* Product: '<S814>/Multiplication' incorporates:
         *  Constant: '<S811>/Calib'
         *  SignalConversion generated from: '<S805>/RampRt_NotLaunch'
         */
        rtb_Switch5_fw = KeOHSR_r_NbDscl_AllRngs_RampRt;

        /* End of Outputs for SubSystem: '<S554>/Nb_Not_Launch' */
    }

    /* Product: '<S814>/Multiplication' incorporates:
     *  Constant: '<S813>/Calib'
     */
    rtb_Switch5_fw *= HeOHSR_t_RngSel_dT;

    /* Abs: '<S814>/Abs' */
    rtb_TmpSignalConversionAtVeMSPR_n_P2SpdC = fabsf(rtb_Switch5_fw);

    /* Sum: '<S814>/Sum2' incorporates:
     *  UnitDelay: '<S806>/Unit Delay2'
     */
    rtb_Switch5_fw = rtb_Multiplication_f - OHSR_ac_DW.UnitDelay2_DSTATE_l;

    /* Outputs for Atomic SubSystem: '<S814>/Limiter1' */
    /* Switch: '<S816>/Switch1' incorporates:
     *  RelationalOperator: '<S816>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeMSPR_n_P2SpdC < rtb_Switch5_fw)
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = rtb_TmpSignalConversionAtVeMSPR_n_P2SpdC;
    }

    /* End of Switch: '<S816>/Switch1' */

    /* Switch: '<S816>/Switch' incorporates:
     *  Gain: '<S814>/Gain'
     *  RelationalOperator: '<S816>/Relational Operator1'
     */
    if (rtb_Switch5_fw <= (-rtb_TmpSignalConversionAtVeMSPR_n_P2SpdC))
    {
        rtb_Switch5_fw = -rtb_TmpSignalConversionAtVeMSPR_n_P2SpdC;
    }

    /* End of Switch: '<S816>/Switch' */
    /* End of Outputs for SubSystem: '<S814>/Limiter1' */

    /* Sum: '<S814>/Sum3' incorporates:
     *  UnitDelay: '<S806>/Unit Delay2'
     */
    rtb_Switch5_fw += OHSR_ac_DW.UnitDelay2_DSTATE_l;

    /* Outputs for Atomic SubSystem: '<S814>/Limiter2' */
    /* Switch: '<S817>/Switch1' incorporates:
     *  Constant: '<S806>/Constant Value4'
     *  RelationalOperator: '<S817>/Relational Operator'
     */
    if (1.0F < rtb_Switch5_fw)
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = 1.0F;
    }

    /* End of Switch: '<S817>/Switch1' */

    /* Switch: '<S817>/Switch' incorporates:
     *  Constant: '<S806>/Constant Value3'
     *  RelationalOperator: '<S817>/Relational Operator1'
     *  UnitDelay: '<S806>/Unit Delay2'
     */
    if (rtb_Switch5_fw > 0.0F)
    {
        OHSR_ac_DW.UnitDelay2_DSTATE_l = rtb_Switch5_fw;
    }
    else
    {
        OHSR_ac_DW.UnitDelay2_DSTATE_l = 0.0F;
    }

    /* End of Switch: '<S817>/Switch' */
    /* End of Outputs for SubSystem: '<S814>/Limiter2' */

    /* MinMax: '<S550>/MinMax' */
    rtb_TmpSignalConversionAtVeOHSR_n_IdleSp = fmaxf
        (rtb_TmpSignalConversionAtVeOSMR_n_MtrB_h,
         rtb_TmpSignalConversionAtVeOHSR_n_IdleSp);

    /* Outputs for Atomic SubSystem: '<S550>/Digital Lowpass Reset Enabled5' */
    /* Switch: '<S792>/Switch1' incorporates:
     *  Logic: '<S550>/Logical7'
     *  UnitDelay: '<S550>/Unit Delay13'
     */
    if (!OHSR_ac_DW.UnitDelay13_DSTATE)
    {
        /* Switch: '<S792>/Switch1' incorporates:
         *  MinMax: '<S554>/MinMax6'
         */
        rtb_Switch5_fw = fmaxf(rtb_TmpSignalConversionAtVeOSMR_n_Inpu_m,
                               rtb_Merge3);
    }
    else
    {
        /* Switch: '<S792>/Switch1' incorporates:
         *  MinMax: '<S554>/MinMax6'
         *  Product: '<S792>/Multiplication'
         *  Sum: '<S792>/Subtraction'
         *  Sum: '<S792>/Summation'
         *  UnitDelay: '<S792>/Unit Delay'
         *  UnitDelay: '<S806>/Unit Delay2'
         */
        rtb_Switch5_fw = ((fmaxf(rtb_TmpSignalConversionAtVeOSMR_n_Inpu_m,
                            rtb_Merge3) - VeOHSC_n_OptMtrBSpd_Filtered) *
                          OHSR_ac_DW.UnitDelay2_DSTATE_l) +
            VeOHSC_n_OptMtrBSpd_Filtered;
    }

    /* End of Switch: '<S792>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S792>/Limiter' */
    /* Switch: '<S793>/Switch1' incorporates:
     *  RelationalOperator: '<S793>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeOSMR_n_MtrBSp < rtb_Switch5_fw)
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = rtb_TmpSignalConversionAtVeOSMR_n_MtrBSp;
    }

    /* End of Switch: '<S793>/Switch1' */

    /* Switch: '<S793>/Switch' incorporates:
     *  RelationalOperator: '<S793>/Relational Operator1'
     */
    if (rtb_Switch5_fw > rtb_TmpSignalConversionAtVeOHSR_n_IdleSp)
    {
        /* Switch: '<S793>/Switch' */
        VeOHSC_n_OptMtrBSpd_Filtered = rtb_Switch5_fw;
    }
    else
    {
        /* Switch: '<S793>/Switch' */
        VeOHSC_n_OptMtrBSpd_Filtered = rtb_TmpSignalConversionAtVeOHSR_n_IdleSp;
    }

    /* End of Switch: '<S793>/Switch' */
    /* End of Outputs for SubSystem: '<S792>/Limiter' */
    /* End of Outputs for SubSystem: '<S550>/Digital Lowpass Reset Enabled5' */

    /* Outputs for Atomic SubSystem: '<S536>/EdgeRising2' */
    /* Logic: '<S573>/OR1' incorporates:
     *  UnitDelay: '<S573>/Unit Delay'
     */
    rtb_AND_ck = !OHSR_ac_DW.UnitDelay_DSTATE_bo;

    /* Update for UnitDelay: '<S573>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_bo = VeOHSC_b_RngStMapSelection_N;

    /* Outputs for Atomic SubSystem: '<S536>/Signal Latch On With Reset2' */
    /* Logic: '<S584>/OR1' incorporates:
     *  Logic: '<S573>/AND'
     *  Logic: '<S584>/NOT'
     *  Logic: '<S584>/OR'
     *  UnitDelay: '<S584>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_a0 = (rtb_TmpSignalConversionAtVeESPR_b_TCMEng ||
        (((!VeOHSC_b_RngStMapSelection_N) || (!rtb_AND_ck)) &&
         (OHSR_ac_DW.UnitDelay_DSTATE_a0)));

    /* End of Outputs for SubSystem: '<S536>/Signal Latch On With Reset2' */
    /* End of Outputs for SubSystem: '<S536>/EdgeRising2' */

    /* If: '<S536>/If' incorporates:
     *  Switch: '<S581>/Switch1'
     */
    s1205_iter = OHSR_ac_DW.If_ActiveSubsystem_k;
    OHSR_ac_DW.If_ActiveSubsystem_k = (sint8)((!VeOHSC_b_ArbOpt_N) ? 1 : 0);
    if (OHSR_ac_DW.If_ActiveSubsystem_k == 0)
    {
        if (0 != s1205_iter)
        {
            /* SystemReset for IfAction SubSystem: '<S536>/Abritrated_Desired_Ni_N' incorporates:
             *  ActionPort: '<S569>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S569>/NTurb_V_Offset_N' */
            /* SystemReset for If: '<S536>/If' incorporates:
             *  Switch: '<S643>/Switch1'
             *  UnitDelay: '<S634>/Unit Delay'
             *  UnitDelay: '<S639>/Unit Delay'
             *  UnitDelay: '<S640>/Unit Delay'
             *  UnitDelay: '<S641>/Unit Delay'
             *  UnitDelay: '<S642>/Unit Delay'
             *  UnitDelay: '<S643>/Unit Delay'
             *  UnitDelay: '<S644>/Unit Delay'
             */
            OHSR_ac_DW.UnitDelay_DSTATE_aj = 0.0F;
            OHSR_ac_DW.UnitDelay_DSTATE_em = false;
            OHSR_ac_DW.UnitDelay_DSTATE_ls = 0.0F;

            /* SystemReset for Atomic SubSystem: '<S632>/EdgeRising' */
            OHSR_ac_DW.UnitDelay_DSTATE_kg = false;

            /* End of SystemReset for SubSystem: '<S632>/EdgeRising' */

            /* SystemReset for Atomic SubSystem: '<S632>/StopWatchResetTriggerEnabled1' */
            OHSR_ac_DW.UnitDelay_DSTATE_p2 = 0.0F;

            /* SystemReset for Atomic SubSystem: '<S640>/EdgeRising' */
            OHSR_ac_DW.UnitDelay_DSTATE_la = false;

            /* End of SystemReset for SubSystem: '<S640>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S632>/StopWatchResetTriggerEnabled1' */
            /* End of SystemReset for SubSystem: '<S569>/NTurb_V_Offset_N' */

            /* SystemReset for Atomic SubSystem: '<S569>/Signal Latch On' */
            OHSR_ac_DW.UnitDelay_DSTATE_bs = false;

            /* End of SystemReset for SubSystem: '<S569>/Signal Latch On' */
            /* End of SystemReset for SubSystem: '<S536>/Abritrated_Desired_Ni_N' */
        }

        /* Outputs for IfAction SubSystem: '<S536>/Abritrated_Desired_Ni_N' incorporates:
         *  ActionPort: '<S569>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S569>/NTurb_V_Offset_N' */
        /* Logic: '<S632>/Logical2' */
        rtb_AND_ck = (rtb_AND_fo || rtb_TmpSignalConversionAtVeOSMR_b_PnLimi);

        /* Outputs for Atomic SubSystem: '<S632>/EdgeRising' */
        /* Switch: '<S643>/Switch1' incorporates:
         *  Constant: '<S635>/TRUE Constant'
         */
        if (rtb_TmpSignalConversionAtVeOSMR_b_PnLimi)
        {
            OHSR_ac_DW.UnitDelay_DSTATE_kg = true;
        }

        /* Logic: '<S635>/AND' incorporates:
         *  Logic: '<S635>/OR1'
         */
        rtb_TmpSignalConversionAtShiftToN_ReadOu = (rtb_AND_ck &&
            (!OHSR_ac_DW.UnitDelay_DSTATE_kg));

        /* Switch: '<S643>/Switch1' incorporates:
         *  Switch: '<S643>/Switch3'
         *  UnitDelay: '<S643>/Unit Delay'
         */
        OHSR_ac_DW.UnitDelay_DSTATE_kg =
            (rtb_TmpSignalConversionAtVeOSMR_b_PnLimi || rtb_AND_ck);

        /* End of Outputs for SubSystem: '<S632>/EdgeRising' */

        /* Logic: '<S639>/OR' incorporates:
         *  Logic: '<S639>/NOT'
         *  Logic: '<S639>/OR1'
         *  UnitDelay: '<S639>/Unit Delay'
         */
        OHSR_ac_DW.UnitDelay_DSTATE_em =
            ((!rtb_TmpSignalConversionAtShiftToN_ReadOu) && (rtb_AND_fo ||
              (OHSR_ac_DW.UnitDelay_DSTATE_em)));

        /* Switch: '<S632>/Switch5' incorporates:
         *  Switch: '<S642>/Switch1'
         *  UnitDelay: '<S639>/Unit Delay'
         */
        if (OHSR_ac_DW.UnitDelay_DSTATE_em)
        {
            /* Switch: '<S641>/Switch1' */
            if (rtb_TmpSignalConversionAtVeOSMR_b_PnLimi)
            {
                /* Switch: '<S632>/Switch5' incorporates:
                 *  Constant: '<S632>/Constant Value3'
                 *  Switch: '<S641>/Switch1'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_ls = 0.0F;
            }
            else
            {
                /* Switch: '<S632>/Switch5' incorporates:
                 *  Switch: '<S641>/Switch1'
                 *  UnitDelay: '<S641>/Unit Delay'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_ls = OHSR_ac_DW.UnitDelay_DSTATE_aj;
            }

            /* End of Switch: '<S641>/Switch1' */
        }
        else
        {
            if (rtb_TmpSignalConversionAtVeOSMR_b_PnLimi)
            {
                /* Switch: '<S642>/Switch1' incorporates:
                 *  Constant: '<S632>/Constant Value4'
                 *  Switch: '<S632>/Switch5'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_ls = 0.0F;
            }
        }

        /* End of Switch: '<S632>/Switch5' */

        /* Outputs for Atomic SubSystem: '<S632>/StopWatchResetTriggerEnabled1' */
        /* Outputs for Atomic SubSystem: '<S640>/EdgeRising' */
        /* Logic: '<S644>/OR1' incorporates:
         *  UnitDelay: '<S644>/Unit Delay'
         */
        rtb_AND_ck = !OHSR_ac_DW.UnitDelay_DSTATE_la;

        /* Update for UnitDelay: '<S644>/Unit Delay' */
        OHSR_ac_DW.UnitDelay_DSTATE_la =
            rtb_TmpSignalConversionAtShiftToN_ReadOu;

        /* Switch: '<S640>/Switch1' incorporates:
         *  Constant: '<S640>/Constant Value2'
         *  Logic: '<S644>/AND'
         *  Switch: '<S640>/Switch2'
         *  UnitDelay: '<S640>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtShiftToN_ReadOu && rtb_AND_ck)
        {
            OHSR_ac_DW.UnitDelay_DSTATE_p2 = 0.0F;
        }
        else
        {
            if (rtb_AND_fo)
            {
                /* UnitDelay: '<S640>/Unit Delay' incorporates:
                 *  Constant: '<S636>/Calib'
                 *  Sum: '<S640>/Subtraction'
                 *  Switch: '<S640>/Switch2'
                 */
                OHSR_ac_DW.UnitDelay_DSTATE_p2 += HeOHSR_t_RngSel_dT;
            }
        }

        /* End of Switch: '<S640>/Switch1' */
        /* End of Outputs for SubSystem: '<S640>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S632>/StopWatchResetTriggerEnabled1' */

        /* Sum: '<S632>/Sum6' incorporates:
         *  Lookup_n-D: '<S637>/Vector'
         *  Product: '<S632>/Product2'
         *  Switch: '<S640>/Switch1'
         *  UnitDelay: '<S640>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeOHSR_n_IdleSp =
            OHSR_ac_DW.UnitDelay_DSTATE_ls - (OHSR_ac_DW.UnitDelay_DSTATE_p2 *
            look1_iflf_binlca_16a(OHSR_ac_DW.UnitDelay_DSTATE_p2, ((const
            float32 *)&(KxOHSR_k_HAS2Vrtl_RampFac_N[0])), ((const float32 *)
            &(KtOHSR_k_HAS2Vrtl_RampFac_N[0])), 2U));

        /* Outputs for Atomic SubSystem: '<S632>/Limiter1' */
        /* Switch: '<S638>/Switch1' incorporates:
         *  RelationalOperator: '<S638>/Relational Operator'
         */
        if (OHSR_ac_DW.UnitDelay_DSTATE_ls <
                rtb_TmpSignalConversionAtVeOHSR_n_IdleSp)
        {
            /* MinMax: '<S569>/MinMax2' */
            rtb_TmpSignalConversionAtVeOHSR_n_IdleSp =
                OHSR_ac_DW.UnitDelay_DSTATE_ls;
        }

        /* End of Switch: '<S638>/Switch1' */

        /* Switch: '<S638>/Switch' incorporates:
         *  Constant: '<S632>/Constant Value2'
         *  RelationalOperator: '<S638>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeOHSR_n_IdleSp <= 0.0F)
        {
            /* Switch: '<S638>/Switch' */
            rtb_TmpSignalConversionAtVeOHSR_n_IdleSp = 0.0F;
        }

        /* End of Switch: '<S638>/Switch' */
        /* End of Outputs for SubSystem: '<S632>/Limiter1' */

        /* Switch: '<S641>/Switch3' incorporates:
         *  Constant: '<S632>/Constant Value3'
         *  Constant: '<S632>/Constant Value4'
         *  Sum: '<S632>/Sum5'
         *  Switch: '<S642>/Switch3'
         *  UnitDelay: '<S641>/Unit Delay'
         *  UnitDelay: '<S642>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVeOSMR_b_PnLimi)
        {
            OHSR_ac_DW.UnitDelay_DSTATE_aj = 0.0F;
            OHSR_ac_DW.UnitDelay_DSTATE_ls = 0.0F;
        }
        else
        {
            OHSR_ac_DW.UnitDelay_DSTATE_aj = OHSR_ac_DW.UnitDelay_DSTATE_ls;
            OHSR_ac_DW.UnitDelay_DSTATE_ls =
                rtb_TmpSignalConversionAtVeESPR_n_TCMEng - rtb_Switch1_do[0];
        }

        /* End of Switch: '<S641>/Switch3' */

        /* Logic: '<S569>/Logical2' incorporates:
         *  Constant: '<S624>/Constant'
         *  Constant: '<S625>/Constant'
         *  Constant: '<S626>/Calib'
         *  Constant: '<S632>/Constant Value'
         *  Logic: '<S569>/Logical1'
         *  Logic: '<S569>/Logical4'
         *  RelationalOperator: '<S569>/Comparison1'
         *  RelationalOperator: '<S569>/Comparison4'
         *  RelationalOperator: '<S632>/Comparison'
         */
        rtb_TmpSignalConversionAtShiftToN_ReadOu = (((rtb_AND_mo ||
            (rtb_TmpSignalConversionAtVeOHSR_n_IdleSp > 0.05F)) && ((((uint32)
            rtb_Selector3_kl_tmp) == CeOHSR_e_NeutralState) || (((uint32)
            rtb_Selector3_kl_tmp) == CeOHSR_e_CreepState))) &&
            (KeOHSR_b_IgnoreHASTgt_N));

        /* End of Outputs for SubSystem: '<S569>/NTurb_V_Offset_N' */

        /* Outputs for Atomic SubSystem: '<S569>/Signal Latch On' */
        /* Logic: '<S634>/OR2' incorporates:
         *  RelationalOperator: '<S569>/Comparison'
         *  UnitDelay: '<S534>/Unit Delay4'
         *  UnitDelay: '<S534>/Unit Delay6'
         *  UnitDelay: '<S634>/Unit Delay'
         */
        OHSR_ac_DW.UnitDelay_DSTATE_bs = ((OHSR_ac_DW.UnitDelay6_DSTATE >
            OHSR_ac_DW.UnitDelay4_DSTATE) || (OHSR_ac_DW.UnitDelay_DSTATE_bs));

        /* End of Outputs for SubSystem: '<S569>/Signal Latch On' */

        /* MinMax: '<S569>/MinMax6' incorporates:
         *  DataTypeConversion: '<S569>/Data Type Conversion1'
         *  Selector: '<S551>/Selector2'
         *  Selector: '<S569>/Selector'
         */
        rtb_TmpSignalConversionAtVeMSPR_n_P2SpdC = fminf
            (rtb_TmpSignalConversionAtVaOSMR_n_NTurb_[VeOHSC_e_SGrDsrd],
             rtb_TmpSignalConversionAtVeOSMR_n_Inp_fc);

        /* Switch: '<S569>/Switch9' incorporates:
         *  Constant: '<S577>/Calib'
         *  DataTypeConversion: '<S536>/Data Type Conversion'
         *  Logic: '<S569>/Logical3'
         *  Selector: '<S536>/Selector1'
         *  Selector: '<S536>/Selector2'
         *  SignalConversion generated from: '<S2>/VeHSER_e_RngEqnSel'
         *  Switch: '<S569>/Switch5'
         *  Switch: '<S569>/Switch7'
         *  Switch: '<S569>/Switch8'
         *  UnitDelay: '<S584>/Unit Delay'
         */
        if (KaOHSR_b_DsblTCMEngSpdReq_N
                [(rtb_TmpSignalConversionAtVeHSER_e_RngEqn)])
        {
            /* MinMax: '<S569>/MinMax2' incorporates:
             *  Constant: '<S569>/Constant Value1'
             */
            rtb_TmpSignalConversionAtVeOHSR_n_IdleSp = 0.0F;
        }
        else if ((OHSR_ac_DW.UnitDelay_DSTATE_bs) &&
                 rtb_TmpSignalConversionAtShiftToN_ReadOu)
        {
            /* MinMax: '<S569>/MinMax2' incorporates:
             *  Switch: '<S569>/Switch7'
             */
            rtb_TmpSignalConversionAtVeOHSR_n_IdleSp =
                VeOHSC_n_OptMtrBSpd_Filtered;
        }
        else if (rtb_TmpSignalConversionAtShiftToN_ReadOu)
        {
            /* MinMax: '<S569>/MinMax2' incorporates:
             *  Constant: '<S569>/Constant Value'
             *  Switch: '<S569>/Switch5'
             *  Switch: '<S569>/Switch7'
             */
            rtb_TmpSignalConversionAtVeOHSR_n_IdleSp = 0.0F;
        }
        else
        {
            if (OHSR_ac_DW.UnitDelay_DSTATE_a0)
            {
                /* Switch: '<S569>/Switch4' incorporates:
                 *  Switch: '<S569>/Switch5'
                 *  Switch: '<S569>/Switch7'
                 *  Switch: '<S569>/Switch8'
                 */
                if (!rtb_AND_mo)
                {
                    /* Outputs for Atomic SubSystem: '<S569>/NTurb_V_Offset_N' */
                    /* MinMax: '<S569>/MinMax3' incorporates:
                     *  Sum: '<S569>/Sum4'
                     *  Switch: '<S569>/Switch4'
                     *  Switch: '<S632>/Switch4'
                     */
                    rtb_TmpSignalConversionAtVeMSPR_n_P2SpdC =
                        rtb_TmpSignalConversionAtVeOHSR_n_IdleSp +
                        rtb_Switch1_do[0];

                    /* End of Outputs for SubSystem: '<S569>/NTurb_V_Offset_N' */
                }

                /* End of Switch: '<S569>/Switch4' */
            }

            /* Switch: '<S569>/Switch3' incorporates:
             *  Constant: '<S569>/Constant Value3'
             *  Switch: '<S569>/Switch5'
             *  Switch: '<S569>/Switch7'
             */
            if (!rtb_AND_mo)
            {
                rtb_TmpSignalConversionAtVeESPR_n_TCMEng = 0.0F;
            }

            /* End of Switch: '<S569>/Switch3' */

            /* MinMax: '<S569>/MinMax3' incorporates:
             *  Constant: '<S627>/Calib'
             *  Product: '<S569>/Product1'
             *  Switch: '<S569>/Switch5'
             *  Switch: '<S569>/Switch7'
             */
            rtb_TmpSignalConversionAtVeMSPR_n_P2SpdC = fmaxf(fmaxf
                (rtb_TmpSignalConversionAtVeMSPR_n_P2SpdC,
                 rtb_TmpSignalConversionAtVeESPR_n_TCMEng),
                rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S *
                KeOHSR_r_DsrdSpd_NbFctrN);

            /* MinMax: '<S569>/MinMax2' incorporates:
             *  Lookup_n-D: '<S631>/Vector'
             *  SignalConversion generated from: '<S2>/VeVTVR_M_LoadTorqFront_Opt'
             *  Sum: '<S569>/Sum3'
             *  Switch: '<S569>/Switch5'
             *  Switch: '<S569>/Switch7'
             */
            rtb_TmpSignalConversionAtVeOHSR_n_IdleSp =
                rtb_TmpSignalConversionAtVeMSPR_n_P2SpdC + look1_iflf_binlca_16a
                (rtb_TmpSignalConversionAtVeVTVR_M_LoadTo, ((const float32 *)
                  &(KxOHSR_n_EngStrtP2SpdOffset[0])), ((const float32 *)
                  &(KtOHSR_n_EngStrtP2SpdOffset[0])), 9U);
        }

        /* End of Switch: '<S569>/Switch9' */

        /* MinMax: '<S569>/MinMax1' */
        VeOHSC_n_TransNbBsd_NiDsrd_N = fmaxf
            (OHSR_ac_B.TmpSignalConversionAtTransMin_ReadOutpor,
             rtb_TmpSignalConversionAtVeOHSR_n_IdleSp);

        /* Switch: '<S569>/Switch1' incorporates:
         *  Constant: '<S569>/Constant Value2'
         */
        if (rtb_UnitDelay_lad)
        {
            rtb_TmpSignalConversionAtVeESPR_n_TCMEng =
                rtb_TmpSignalConversionAtVeTISR_n_InputS;
        }
        else
        {
            rtb_TmpSignalConversionAtVeESPR_n_TCMEng = 0.0F;
        }

        /* End of Switch: '<S569>/Switch1' */

        /* Merge: '<S536>/Merge1' incorporates:
         *  Gain: '<S633>/Gain'
         *  MinMax: '<S569>/MinMax2'
         *  MinMax: '<S569>/MinMax5'
         */
        rtb_TmpSignalConversionAtVeESPR_n_TCMEng = fminf
            (rtb_TmpSignalConversionAtVeESPR_n_EngSpd, fmaxf
             (VeOHSC_n_TransNbBsd_NiDsrd_N,
              rtb_TmpSignalConversionAtVeESPR_n_TCMEng));

        /* Switch: '<S569>/Switch6' incorporates:
         *  Switch: '<S569>/Switch2'
         */
        if (rtb_TmpSignalConversionAtShiftToN_ReadOu)
        {
            /* Product: '<S923>/Multiplication' incorporates:
             *  Constant: '<S628>/Calib'
             */
            rtb_Multiplication_f = KeOHSR_r_FltCoefRmpRt_noHASTgt;
        }
        else if (rtb_UnitDelay_lad)
        {
            /* Switch: '<S569>/Switch2' incorporates:
             *  Constant: '<S630>/Calib'
             *  Product: '<S923>/Multiplication'
             */
            rtb_Multiplication_f = KeOHSR_r_NiDscl_N_RampRt;
        }
        else
        {
            /* Product: '<S923>/Multiplication' incorporates:
             *  Constant: '<S629>/Calib'
             *  Switch: '<S569>/Switch2'
             */
            rtb_Multiplication_f = KeOHSR_r_NiDscl_AllRngs_RampRt;
        }

        /* End of Switch: '<S569>/Switch6' */

        /* Merge: '<S536>/Merge3' incorporates:
         *  Constant: '<S569>/Constant Value5'
         *  SignalConversion generated from: '<S569>/FltCoefNi_N'
         */
        rtb_Merge3 = 1.0F;

        /* End of Outputs for SubSystem: '<S536>/Abritrated_Desired_Ni_N' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S536>/Optimized_Ni_N' incorporates:
         *  ActionPort: '<S581>/Action Port'
         */
        if (VeOHSC_b_ManAllwd_IdxN)
        {
            /* Switch: '<S581>/Switch' incorporates:
             *  Constant: '<S653>/Calib'
             *  Logic: '<S581>/Logical4'
             *  Switch: '<S581>/Switch1'
             */
            if (rtb_TmpSignalConversionAtShiftToN_ReadOu &&
                    (HeOHSR_b_EnblCreepOverrd_NiN))
            {
                rtb_Switch5_fw = rtb_VariantMerge_For_Variant_Source_XeOH[0];
            }
            else
            {
                rtb_Switch5_fw = VeOHSC_n_OptInputSpdDsrd_N;
            }

            /* End of Switch: '<S581>/Switch' */

            /* Switch: '<S581>/Switch1' incorporates:
             *  Constant: '<S654>/Calib'
             *  Product: '<S581>/Product1'
             */
            rtb_TmpSignalConversionAtVeESPR_n_TCMEng = rtb_Switch5_fw *
                KeOHSR_r_NDsrdSpd_NiOptFctr;
        }
        else
        {
            /* Switch: '<S581>/Switch1' incorporates:
             *  UnitDelay: '<S534>/Unit Delay6'
             */
            rtb_TmpSignalConversionAtVeESPR_n_TCMEng =
                OHSR_ac_DW.UnitDelay6_DSTATE;
        }

        /* Merge: '<S536>/Merge3' incorporates:
         *  Lookup_n-D: '<S655>/Vector'
         *  Sum: '<S581>/Sum3'
         *  UnitDelay: '<S534>/Unit Delay6'
         */
        rtb_Merge3 = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeESPR_n_TCMEng -
             OHSR_ac_DW.UnitDelay6_DSTATE, ((const float32 *)
              &(KxOHSR_k_InputSpeedDsrdFiltN[0])), ((const float32 *)
              &(KtOHSR_k_InputSpeedDsrdFiltN[0])), 6U);

        /* Product: '<S923>/Multiplication' incorporates:
         *  Constant: '<S581>/Constant Value1'
         *  SignalConversion generated from: '<S581>/Ramp_Rt_N'
         */
        rtb_Multiplication_f = 1.0E+6F;

        /* End of Outputs for SubSystem: '<S536>/Optimized_Ni_N' */
    }

    /* Gain: '<S1295>/Gain' */
    VeOHSC_e_CurrentRngOptSelected = OHSR_ac_DW.UnitDelay1_DSTATE_d[1];

    /* Selector: '<S552>/Selector1' incorporates:
     *  Constant: '<S800>/Calib'
     */
    VeOHSC_b_EngOnDsrdOpt = HaOHSR_b_DsrdEngStMap[VeOHSC_e_CurrentRngOptSelected
        - 1];

    /* SignalConversion generated from: '<S534>/XeOHSR_b_EngCalc_Enbl4' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    /* Selector: '<S546>/Selector2' */
    rtb_TmpSignalConversionAtVeOSMR_b_EngRev = VeOHSC_b_EngOnDsrdOpt;

#else

    /* Selector: '<S546>/Selector2' incorporates:
     *  Constant: '<S534>/FALSE Constant4'
     *  SignalConversion generated from: '<S534>/XeOHSR_b_EngCalc_Enbl4'
     */
    rtb_TmpSignalConversionAtVeOSMR_b_EngRev = false;

#endif

    /* End of SignalConversion generated from: '<S534>/XeOHSR_b_EngCalc_Enbl4' */

    /* SignalConversion generated from: '<S2>/OptEngSt' incorporates:
     *  Logic: '<S537>/AND'
     *  Outport: '<Root>/VeOHSR_b_EngOnDsrdOpt'
     */
    (void)Rte_Write_VeOHSR_b_EngOnDsrdOpt_Value
        (rtb_TmpSignalConversionAtVeOSMR_b_EngRev);

    /* SignalConversion generated from: '<S534>/XeOHSR_b_EngCalc_Enbl3' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    /* Selector: '<S546>/Selector2' */
    rtb_TmpSignalConversionAtVeOSMR_b_EngRev = VeOHSC_b_EngDsrd;

#else

    /* Selector: '<S546>/Selector2' incorporates:
     *  Constant: '<S534>/FALSE Constant3'
     *  SignalConversion generated from: '<S534>/XeOHSR_b_EngCalc_Enbl3'
     */
    rtb_TmpSignalConversionAtVeOSMR_b_EngRev = false;

#endif

    /* End of SignalConversion generated from: '<S534>/XeOHSR_b_EngCalc_Enbl3' */

    /* SignalConversion generated from: '<S534>/XeOHSR_b_GearCalc_Enbl' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_21

    /* VariantMerge generated from: '<S534>/XeOHSR_b_EngCalc_Enbl5' incorporates:
     *  Selector: '<S551>/Selector2'
     */
    rtb_VariantMerge_For_Variant_Source_Xe_o = VeOHSC_e_SGrDsrd;

#else

    /* VariantMerge generated from: '<S534>/XeOHSR_b_EngCalc_Enbl5' incorporates:
     *  Constant: '<S788>/Calib'
     *  SignalConversion generated from: '<S534>/XeOHSR_b_GearCalc_Enbl'
     */
    rtb_VariantMerge_For_Variant_Source_Xe_o = HeOHSR_e_Dflt_GrDsrd;

#endif

    /* End of SignalConversion generated from: '<S534>/XeOHSR_b_GearCalc_Enbl' */

    /* SignalConversion generated from: '<S2>/DsrdSGr' incorporates:
     *  DataTypeConversion: '<S540>/DataTypeConversion'
     *  Outport: '<Root>/VeOHSR_e_SGrDsrd'
     *  VariantMerge generated from: '<S534>/XeOHSR_b_EngCalc_Enbl5'
     */
    (void)Rte_Write_VeOHSR_e_SGrDsrd_Value
        (rtb_VariantMerge_For_Variant_Source_Xe_o);

    /* Gain: '<S1296>/Gain' */
    VeOHSC_e_CurrentRngOnSelected = OHSR_ac_DW.UnitDelay1_DSTATE_d[2];

    /* Selector: '<S553>/Selector2' incorporates:
     *  SignalConversion generated from: '<S534>/XeOHSR_b_EngCalc_Enbl5'
     * */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_17

    /* Selector: '<S553>/Selector2' incorporates:
     *  Constant: '<S801>/Calib'
     */
    VeOHSC_e_SGrDsrd_EngOn = HaOHSR_e_DsrdSGrMap[VeOHSC_e_CurrentRngOnSelected -
        1];

    /* VariantMerge generated from: '<S534>/XeOHSR_b_EngCalc_Enbl5' incorporates:
     *  Selector: '<S553>/Selector2'
     */
    rtb_VariantMerge_For_Variant_Source_Xe_o = VeOHSC_e_SGrDsrd_EngOn;

#else

    /* VariantMerge generated from: '<S534>/XeOHSR_b_EngCalc_Enbl5' incorporates:
     *  Constant: '<S788>/Calib'
     *  SignalConversion generated from: '<S534>/XeOHSR_b_EngCalc_Enbl5'
     */
    rtb_VariantMerge_For_Variant_Source_Xe_o = HeOHSR_e_Dflt_GrDsrd;

#endif

    /* End of Selector: '<S553>/Selector2' */

    /* DataTypeConversion: '<S542>/DataTypeConversion' incorporates:
     *  Selector: '<S551>/Selector'
     */
    OHSR_ac_B.DataTypeConversion_a = VeOHSC_e_RngSel_ExtRngDsrd;

#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    /* Outputs for Atomic SubSystem: '<S534>/GSI' */
    /* UnitDelay: '<S875>/Unit Delay' incorporates:
     *  Constant: '<S717>/Calib'
     *  Logic: '<S546>/Logical8'
     */
    rtb_UnitDelay_lad = ((KeOHSR_b_EnblGSI_DsrdRngSt) ||
                         rtb_TmpSignalConversionAtVeSCOR_b_DsrdRn);

    /* Switch: '<S724>/Switch6' incorporates:
     *  DataStoreRead: '<S724>/Data Store Read1'
     *  DataStoreWrite: '<S724>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S744>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S744>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S744>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S745>/FixPt Bitwise Operator1'
     */
    if (rtb_UnitDelay_lad)
    {
        VeOHSR_g_GSI_DS = (uint16)(VeOHSR_g_GSI_DS | ((uint16)1));
    }
    else
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_GSI_DS)) |
            ((uint16)1))));
    }

    /* End of Switch: '<S724>/Switch6' */

    /* Inport: '<Root>/VeSRAR_b_InhibitGSI' */
    (void)Rte_Read_VeSRAR_b_InhibitGSI_Value(&rtb_Logical2_p);

    /* RelationalOperator: '<S824>/Comparison5' incorporates:
     *  Constant: '<S718>/Calib'
     *  Logic: '<S546>/Logical4'
     *  Logic: '<S546>/Logical9'
     */
    rtb_AND_mo = ((KeOHSR_b_EnblGSI_SRARInhibit) || (!rtb_Logical2_p));

    /* Switch: '<S725>/Switch6' incorporates:
     *  DataStoreRead: '<S725>/Data Store Read1'
     *  DataStoreWrite: '<S725>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S746>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S746>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S746>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S747>/FixPt Bitwise Operator1'
     */
    if (rtb_AND_mo)
    {
        VeOHSR_g_GSI_DS = (uint16)(VeOHSR_g_GSI_DS | ((uint16)2));
    }
    else
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_GSI_DS)) |
            ((uint16)2))));
    }

    /* End of Switch: '<S725>/Switch6' */

    /* Inport: '<Root>/VeOSMR_b_StgcInGSIMode' */
    (void)Rte_Read_VeOSMR_b_StgcInGSIMode_Value(&rtb_Logical3_in);

    /* Logic: '<S820>/Logical8' incorporates:
     *  Constant: '<S720>/Calib'
     *  Logic: '<S546>/Logical6'
     */
    rtb_AND_fo = ((KeOHSR_b_EnblGSI_StgcManMode) || rtb_Logical3_in);

    /* Switch: '<S736>/Switch6' incorporates:
     *  DataStoreRead: '<S736>/Data Store Read1'
     *  DataStoreWrite: '<S736>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S768>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S768>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S768>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S769>/FixPt Bitwise Operator1'
     */
    if (rtb_AND_fo)
    {
        VeOHSR_g_GSI_DS = (uint16)(VeOHSR_g_GSI_DS | ((uint16)4));
    }
    else
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_GSI_DS)) |
            ((uint16)4))));
    }

    /* End of Switch: '<S736>/Switch6' */

    /* Inport: '<Root>/VePLTR_e_ShiftIndSt' */
    (void)Rte_Read_VePLTR_e_ShiftIndSt_Value(&tmpRead_7);

    /* Switch: '<S737>/Switch6' incorporates:
     *  Constant: '<S705>/Calib'
     *  DataStoreRead: '<S737>/Data Store Read1'
     *  DataStoreWrite: '<S737>/Data Store Write1'
     *  DataTypeConversion: '<S546>/Data Type Conversion5'
     *  Inport: '<Root>/VePLTR_e_ShiftIndSt'
     *  S-Function (sfix_bitop): '<S770>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S770>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S770>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S771>/FixPt Bitwise Operator1'
     *  Selector: '<S546>/Selector'
     */
    if (KaOHSR_b_EnblGSI_ShiftIndSt[(tmpRead_7)])
    {
        VeOHSR_g_GSI_DS = (uint16)(VeOHSR_g_GSI_DS | ((uint16)8));
    }
    else
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_GSI_DS)) |
            ((uint16)8))));
    }

    /* End of Switch: '<S737>/Switch6' */

    /* Inport: '<Root>/VePLTR_e_VehCfgSt' */
    (void)Rte_Read_VePLTR_e_VehCfgSt_Value(&tmpRead_8);

    /* Switch: '<S738>/Switch6' incorporates:
     *  Constant: '<S709>/Calib'
     *  DataStoreRead: '<S738>/Data Store Read1'
     *  DataStoreWrite: '<S738>/Data Store Write1'
     *  DataTypeConversion: '<S546>/Data Type Conversion6'
     *  Inport: '<Root>/VePLTR_e_VehCfgSt'
     *  S-Function (sfix_bitop): '<S772>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S772>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S772>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S773>/FixPt Bitwise Operator1'
     *  Selector: '<S546>/Selector1'
     */
    if (KaOHSR_b_EnblGSI_VehCFGSt[(tmpRead_8)])
    {
        VeOHSR_g_GSI_DS = (uint16)(VeOHSR_g_GSI_DS | ((uint16)16));
    }
    else
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_GSI_DS)) |
            ((uint16)16))));
    }

    /* End of Switch: '<S738>/Switch6' */

    /* Switch: '<S739>/Switch6' incorporates:
     *  Constant: '<S707>/Calib'
     *  DataStoreRead: '<S739>/Data Store Read1'
     *  DataStoreWrite: '<S739>/Data Store Write1'
     *  DataTypeConversion: '<S546>/Data Type Conversion7'
     *  S-Function (sfix_bitop): '<S774>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S774>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S774>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S775>/FixPt Bitwise Operator1'
     *  Selector: '<S546>/Selector2'
     *  SignalConversion generated from: '<S2>/VeFWDR_e_Tcase_Stat'
     */
    if (KaOHSR_b_EnblGSI_TcaseRange_Stat
            [(rtb_TmpSignalConversionAtVeFWDR_e_Tcase_)])
    {
        VeOHSR_g_GSI_DS = (uint16)(VeOHSR_g_GSI_DS | ((uint16)32));
    }
    else
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_GSI_DS)) |
            ((uint16)32))));
    }

    /* End of Switch: '<S739>/Switch6' */

    /* Inport: '<Root>/VeTMDR_e_LockLowSt' */
    (void)Rte_Read_VeTMDR_e_LockLowSt_Value(&tmpRead_9);

    /* Switch: '<S740>/Switch6' incorporates:
     *  Constant: '<S703>/Calib'
     *  DataStoreRead: '<S740>/Data Store Read1'
     *  DataStoreWrite: '<S740>/Data Store Write1'
     *  DataTypeConversion: '<S546>/Data Type Conversion8'
     *  Inport: '<Root>/VeTMDR_e_LockLowSt'
     *  S-Function (sfix_bitop): '<S776>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S776>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S776>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S777>/FixPt Bitwise Operator1'
     *  Selector: '<S546>/Selector3'
     */
    if (KaOHSR_b_EnblGSI_LockLowSt[(tmpRead_9)])
    {
        VeOHSR_g_GSI_DS = (uint16)(VeOHSR_g_GSI_DS | ((uint16)64));
    }
    else
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_GSI_DS)) |
            ((uint16)64))));
    }

    /* End of Switch: '<S740>/Switch6' */

    /* Inport: '<Root>/VeHSER_e_RngSt' */
    (void)Rte_Read_VeHSER_e_RngSt_Value(&tmpRead_5);

    /* Switch: '<S741>/Switch6' incorporates:
     *  Constant: '<S704>/Calib'
     *  DataStoreRead: '<S741>/Data Store Read1'
     *  DataStoreWrite: '<S741>/Data Store Write1'
     *  DataTypeConversion: '<S546>/Data Type Conversion9'
     *  Inport: '<Root>/VeHSER_e_RngSt'
     *  S-Function (sfix_bitop): '<S778>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S778>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S778>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S779>/FixPt Bitwise Operator1'
     *  Selector: '<S546>/Selector4'
     */
    if (KaOHSR_b_EnblGSI_RngSt[(tmpRead_5)])
    {
        VeOHSR_g_GSI_DS = (uint16)(VeOHSR_g_GSI_DS | ((uint16)128));
    }
    else
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_GSI_DS)) |
            ((uint16)128))));
    }

    /* End of Switch: '<S741>/Switch6' */

    /* Inport: '<Root>/VeDMDR_i_DrvMdArbIdx' */
    (void)Rte_Read_VeDMDR_i_DrvMdArbIdx_Value(&tmpRead_a);

    /* Switch: '<S742>/Switch6' incorporates:
     *  Constant: '<S700>/Calib'
     *  DataStoreRead: '<S742>/Data Store Read1'
     *  DataStoreWrite: '<S742>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S780>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S780>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S780>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S781>/FixPt Bitwise Operator1'
     *  Selector: '<S546>/Selector5'
     */
    if (KaOHSR_b_EnblGSI_DrvMdArb[(tmpRead_a)])
    {
        VeOHSR_g_GSI_DS = (uint16)(VeOHSR_g_GSI_DS | ((uint16)256));
    }
    else
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_GSI_DS)) |
            ((uint16)256))));
    }

    /* End of Switch: '<S742>/Switch6' */

    /* Inport: '<Root>/VeDTRR_e_SumFWIDSlw' */
    (void)Rte_Read_VeDTRR_e_SumFWIDSlw_Value(&tmpRead_3);

    /* Switch: '<S743>/Switch6' incorporates:
     *  Constant: '<S702>/Calib'
     *  DataStoreRead: '<S743>/Data Store Read1'
     *  DataStoreWrite: '<S743>/Data Store Write1'
     *  DataTypeConversion: '<S546>/Data Type Conversion11'
     *  Inport: '<Root>/VeDTRR_e_SumFWIDSlw'
     *  S-Function (sfix_bitop): '<S782>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S782>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S782>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S783>/FixPt Bitwise Operator1'
     *  Selector: '<S546>/Selector6'
     */
    if (KaOHSR_b_EnblGSI_FWIDSlw[(tmpRead_3)])
    {
        VeOHSR_g_GSI_DS = (uint16)(VeOHSR_g_GSI_DS | ((uint16)512));
    }
    else
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_GSI_DS)) |
            ((uint16)512))));
    }

    /* End of Switch: '<S743>/Switch6' */

    /* Inport: '<Root>/VeDTRR_e_SumFWIDFst' */
    (void)Rte_Read_VeDTRR_e_SumFWIDFst_Value(&tmpRead_2);

    /* Switch: '<S726>/Switch6' incorporates:
     *  Constant: '<S701>/Calib'
     *  DataStoreRead: '<S726>/Data Store Read1'
     *  DataStoreWrite: '<S726>/Data Store Write1'
     *  DataTypeConversion: '<S546>/Data Type Conversion12'
     *  Inport: '<Root>/VeDTRR_e_SumFWIDFst'
     *  S-Function (sfix_bitop): '<S748>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S748>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S748>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S749>/FixPt Bitwise Operator1'
     *  Selector: '<S546>/Selector7'
     */
    if (KaOHSR_b_EnblGSI_FWIDFst[(tmpRead_2)])
    {
        VeOHSR_g_GSI_DS = (uint16)(VeOHSR_g_GSI_DS | ((uint16)1024));
    }
    else
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_GSI_DS)) |
            ((uint16)1024))));
    }

    /* End of Switch: '<S726>/Switch6' */

    /* Inport: '<Root>/VeVTVR_e_TrqArb' */
    (void)Rte_Read_VeVTVR_e_TrqArb_Value(&tmpRead_b);

    /* Switch: '<S727>/Switch6' incorporates:
     *  Constant: '<S708>/Calib'
     *  DataStoreRead: '<S727>/Data Store Read1'
     *  DataStoreWrite: '<S727>/Data Store Write1'
     *  DataTypeConversion: '<S546>/Data Type Conversion15'
     *  Inport: '<Root>/VeVTVR_e_TrqArb'
     *  S-Function (sfix_bitop): '<S750>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S750>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S750>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S751>/FixPt Bitwise Operator1'
     *  Selector: '<S546>/Selector8'
     */
    if (KaOHSR_b_EnblGSI_TrqArb[(tmpRead_b)])
    {
        VeOHSR_g_GSI_DS = (uint16)(VeOHSR_g_GSI_DS | ((uint16)2048));
    }
    else
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_GSI_DS)) |
            ((uint16)2048))));
    }

    /* End of Switch: '<S727>/Switch6' */

    /* Logic: '<S546>/Logical2' incorporates:
     *  Constant: '<S719>/Calib'
     *  DataTypeConversion: '<S546>/Data Type Conversion13'
     *  DataTypeConversion: '<S546>/Data Type Conversion14'
     *  RelationalOperator: '<S546>/Comparison18'
     *  SignalConversion generated from: '<S2>/VeTRNR_e_ActualGear'
     *  SignalConversion generated from: '<S2>/VeTRNR_e_TargetGear'
     */
    rtb_Logical2_p = ((KeOHSR_b_EnblGSI_ShiftInPros) ||
                      (rtb_TmpSignalConversionAtVeTRNR_e_Target ==
                       rtb_TmpSignalConversionAtVeTRNR_e_Actual));

    /* Switch: '<S728>/Switch6' incorporates:
     *  DataStoreRead: '<S728>/Data Store Read1'
     *  DataStoreWrite: '<S728>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S752>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S752>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S752>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S753>/FixPt Bitwise Operator1'
     */
    if (rtb_Logical2_p)
    {
        VeOHSR_g_GSI_DS = (uint16)(VeOHSR_g_GSI_DS | ((uint16)4096));
    }
    else
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_GSI_DS)) |
            ((uint16)4096))));
    }

    /* End of Switch: '<S728>/Switch6' */

    /* Logic: '<S546>/Logical3' incorporates:
     *  Constant: '<S715>/Calib'
     *  Constant: '<S716>/Calib'
     *  RelationalOperator: '<S546>/Comparison10'
     *  RelationalOperator: '<S546>/Comparison9'
     */
    rtb_Logical3_in = ((rtb_TmpSignalConversionAtVeAPSR_Pct_Acce <=
                        KeOHSR_Pct_EnblGSI_AclPedalMax) &&
                       (rtb_TmpSignalConversionAtVeAPSR_Pct_Acce >=
                        KeOHSR_Pct_EnblGSI_AclPedalMin));

    /* Switch: '<S729>/Switch6' incorporates:
     *  DataStoreRead: '<S729>/Data Store Read1'
     *  DataStoreWrite: '<S729>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S754>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S754>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S754>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S755>/FixPt Bitwise Operator1'
     */
    if (rtb_Logical3_in)
    {
        VeOHSR_g_GSI_DS = (uint16)(VeOHSR_g_GSI_DS | ((uint16)8192));
    }
    else
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_GSI_DS)) |
            ((uint16)8192))));
    }

    /* End of Switch: '<S729>/Switch6' */

    /* Logic: '<S546>/Logical5' incorporates:
     *  Constant: '<S713>/Calib'
     *  Constant: '<S714>/Calib'
     *  RelationalOperator: '<S546>/Comparison1'
     *  RelationalOperator: '<S546>/Comparison2'
     */
    rtb_TmpSignalConversionAtShiftToN_ReadOu =
        ((rtb_TmpSignalConversionAtVeATRR_M_ToReqP <=
          KeOHSR_M_EnblGSI_ToReqPrdMax) &&
         (rtb_TmpSignalConversionAtVeATRR_M_ToReqP >=
          KeOHSR_M_EnblGSI_ToReqPrdMin));

    /* Switch: '<S730>/Switch6' incorporates:
     *  DataStoreRead: '<S730>/Data Store Read1'
     *  DataStoreWrite: '<S730>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S756>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S756>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S756>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S757>/FixPt Bitwise Operator1'
     */
    if (rtb_TmpSignalConversionAtShiftToN_ReadOu)
    {
        VeOHSR_g_GSI_DS = (uint16)(VeOHSR_g_GSI_DS | ((uint16)16384));
    }
    else
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(((uint16)(~VeOHSR_g_GSI_DS)) |
            ((uint16)16384))));
    }

    /* End of Switch: '<S730>/Switch6' */

    /* Logic: '<S546>/Logical7' incorporates:
     *  Constant: '<S711>/Calib'
     *  Constant: '<S712>/Calib'
     *  RelationalOperator: '<S546>/Comparison3'
     *  RelationalOperator: '<S546>/Comparison4'
     */
    rtb_AND_ck = ((rtb_TmpSignalConversionAtVeOSMR_M_OutTor <=
                   KeOHSR_M_EnblGSI_ToReqAclMax) &&
                  (rtb_TmpSignalConversionAtVeOSMR_M_OutTor >=
                   KeOHSR_M_EnblGSI_ToReqAclMin));

    /* Switch: '<S731>/Switch6' incorporates:
     *  DataStoreRead: '<S731>/Data Store Read1'
     *  DataStoreWrite: '<S731>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S758>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S758>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S758>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S759>/FixPt Bitwise Operator1'
     */
    if (rtb_AND_ck)
    {
        VeOHSR_g_GSI_DS = (uint16)(((uint32)VeOHSR_g_GSI_DS) | ((uint32)32768));
    }
    else
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(((uint32)((uint16)
            (~VeOHSR_g_GSI_DS))) | ((uint32)32768))));
    }

    /* End of Switch: '<S731>/Switch6' */

    /* Inport: '<Root>/VeSCOR_e_RngDsrd_GSI' */
    (void)Rte_Read_VeSCOR_e_RngDsrd_GSI_Value(&tmpRead_c);

    /* SignalConversion generated from: '<S546>/Selector10' incorporates:
     *  Constant: '<S694>/Calib'
     *  Constant: '<S695>/Calib'
     *  Constant: '<S696>/Calib'
     *  Constant: '<S697>/Calib'
     *  Constant: '<S698>/Calib'
     *  Constant: '<S699>/Calib'
     */
    tmp_1[0] =
        Rte_Prm_HeOPTR_b_FixedGrDpndntRngSt_N_GA_HeOPTR_b_FixedGrDpndntRngSt_N_GA
        ();
    tmp_1[1] =
        Rte_Prm_HeOPTR_b_FixedGrDpndntRngSt_MA_HeOPTR_b_FixedGrDpndntRngSt_MA();
    tmp_1[2] =
        Rte_Prm_HeOPTR_b_FixedGrDpndntRngSt_MB_HeOPTR_b_FixedGrDpndntRngSt_MB();
    tmp_1[3] =
        Rte_Prm_HeOPTR_b_FixedGrDpndntRngSt_Gr_HeOPTR_b_FixedGrDpndntRngSt_Gr();
    tmp_1[4] =
        Rte_Prm_HeOPTR_b_FixedGrDpndntRngSt_EVM_HeOPTR_b_FixedGrDpndntRngSt_EVM();
    tmp_1[5] =
        Rte_Prm_HeOPTR_b_FixedGrDpndntRngSt_EVN_HeOPTR_b_FixedGrDpndntRngSt_EVN();

    /* Switch: '<S732>/Switch6' incorporates:
     *  DataStoreRead: '<S732>/Data Store Read1'
     *  DataStoreWrite: '<S732>/Data Store Write1'
     *  DataTypeConversion: '<S546>/Data Type Conversion1'
     *  Inport: '<Root>/VeSCOR_e_RngDsrd_GSI'
     *  S-Function (sfix_bitop): '<S760>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S760>/FixPt Bitwise Operator5'
     *  Selector: '<S546>/Selector10'
     */
    if (!tmp_1[tmpRead_c])
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(~VeOHSR_g_GSI_DS)));
    }

    /* End of Switch: '<S732>/Switch6' */

    /* Inport: '<Root>/VeSCCR_b_RrAxlMaxRq' */
    (void)Rte_Read_VeSCCR_b_RrAxlMaxRq_Value(&rtb_Logical12_n);

    /* Inport: '<Root>/VeSCCR_b_RrAxlMinRq' */
    (void)Rte_Read_VeSCCR_b_RrAxlMinRq_Value(&rtb_OR1_kv);

    /* Inport: '<Root>/VeSCCR_b_FrntAxlMaxRq' */
    (void)Rte_Read_VeSCCR_b_FrntAxlMaxRq_Value(&tmpRead_i);

    /* Inport: '<Root>/VeSCCR_b_FrntAxlMinRq' */
    (void)Rte_Read_VeSCCR_b_FrntAxlMinRq_Value(&tmpRead_h);

    /* Logic: '<S546>/Logical12' incorporates:
     *  Constant: '<S721>/Calib'
     *  Logic: '<S546>/Logical10'
     *  Logic: '<S546>/Logical11'
     */
    rtb_Logical12_n = ((KeOHSR_b_EnblGSI_TrqReq) || ((((!tmpRead_h) &&
                          (!tmpRead_i)) && (!rtb_OR1_kv)) && (!rtb_Logical12_n)));

    /* Switch: '<S733>/Switch6' incorporates:
     *  DataStoreRead: '<S733>/Data Store Read1'
     *  DataStoreWrite: '<S733>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S762>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S762>/FixPt Bitwise Operator5'
     */
    if (!rtb_Logical12_n)
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(~VeOHSR_g_GSI_DS)));
    }

    /* End of Switch: '<S733>/Switch6' */

    /* Inport: '<Root>/VeSCCR_b_FrntAxlRqFA' */
    (void)Rte_Read_VeSCCR_b_FrntAxlRqFA_Value(&rtb_Logical15_m);

    /* Inport: '<Root>/VeSCCR_b_RrAxlRqFA' */
    (void)Rte_Read_VeSCCR_b_RrAxlRqFA_Value(&rtb_AND_ah0);

    /* Logic: '<S546>/Logical15' incorporates:
     *  Constant: '<S722>/Calib'
     *  Logic: '<S546>/Logical13'
     *  Logic: '<S546>/Logical14'
     */
    rtb_Logical15_m = ((KeOHSR_b_EnblGSI_TrqReqFA) || ((!rtb_AND_ah0) &&
                        (!rtb_Logical15_m)));

    /* Switch: '<S734>/Switch6' incorporates:
     *  DataStoreRead: '<S734>/Data Store Read1'
     *  DataStoreWrite: '<S734>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S764>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S764>/FixPt Bitwise Operator5'
     */
    if (!rtb_Logical15_m)
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(~VeOHSR_g_GSI_DS)));
    }

    /* End of Switch: '<S734>/Switch6' */

    /* Inport: '<Root>/VeENGR_e_StsMiL_ECM' */
    (void)Rte_Read_VeENGR_e_StsMiL_ECM_Value(&tmpRead_j);

    /* Switch: '<S735>/Switch6' incorporates:
     *  Constant: '<S706>/Calib'
     *  DataStoreRead: '<S735>/Data Store Read1'
     *  DataStoreWrite: '<S735>/Data Store Write1'
     *  DataTypeConversion: '<S546>/Data Type Conversion2'
     *  Inport: '<Root>/VeENGR_e_StsMiL_ECM'
     *  S-Function (sfix_bitop): '<S766>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S766>/FixPt Bitwise Operator5'
     *  Selector: '<S546>/Selector11'
     */
    if (!KaOHSR_b_EnblGSI_StsMiL_ECM[(tmpRead_j)])
    {
        VeOHSR_g_GSI_DS = (uint16)(~((uint16)(~VeOHSR_g_GSI_DS)));
    }

    /* End of Switch: '<S735>/Switch6' */

    /* Inport: '<Root>/VeSCOR_e_SGrDsrd_GSI' */
    (void)Rte_Read_VeSCOR_e_SGrDsrd_GSI_Value(&tmpRead_6);

    /* Selector: '<S546>/Selector9' incorporates:
     *  Constant: '<S710>/Calib'
     *  DataTypeConversion: '<S546>/Data Type Conversion16'
     *  Inport: '<Root>/VeSCOR_e_SGrDsrd_GSI'
     */
    rtb_Selector9_b = KaOHSR_e_SGRDsrdGSI_StgcTacMap[((sint32)tmpRead_6) - 1];

    /* SignalConversion generated from: '<S546>/Selector10' incorporates:
     *  Constant: '<S694>/Calib'
     *  Constant: '<S695>/Calib'
     *  Constant: '<S696>/Calib'
     *  Constant: '<S697>/Calib'
     *  Constant: '<S698>/Calib'
     *  Constant: '<S699>/Calib'
     */
    tmp_1[0] =
        Rte_Prm_HeOPTR_b_FixedGrDpndntRngSt_N_GA_HeOPTR_b_FixedGrDpndntRngSt_N_GA
        ();
    tmp_1[1] =
        Rte_Prm_HeOPTR_b_FixedGrDpndntRngSt_MA_HeOPTR_b_FixedGrDpndntRngSt_MA();
    tmp_1[2] =
        Rte_Prm_HeOPTR_b_FixedGrDpndntRngSt_MB_HeOPTR_b_FixedGrDpndntRngSt_MB();
    tmp_1[3] =
        Rte_Prm_HeOPTR_b_FixedGrDpndntRngSt_Gr_HeOPTR_b_FixedGrDpndntRngSt_Gr();
    tmp_1[4] =
        Rte_Prm_HeOPTR_b_FixedGrDpndntRngSt_EVM_HeOPTR_b_FixedGrDpndntRngSt_EVM();
    tmp_1[5] =
        Rte_Prm_HeOPTR_b_FixedGrDpndntRngSt_EVN_HeOPTR_b_FixedGrDpndntRngSt_EVN();

    /* Logic: '<S546>/Logical1' incorporates:
     *  Constant: '<S700>/Calib'
     *  Constant: '<S701>/Calib'
     *  Constant: '<S702>/Calib'
     *  Constant: '<S703>/Calib'
     *  Constant: '<S704>/Calib'
     *  Constant: '<S705>/Calib'
     *  Constant: '<S706>/Calib'
     *  Constant: '<S707>/Calib'
     *  Constant: '<S708>/Calib'
     *  Constant: '<S709>/Calib'
     *  DataTypeConversion: '<S546>/Data Type Conversion1'
     *  DataTypeConversion: '<S546>/Data Type Conversion11'
     *  DataTypeConversion: '<S546>/Data Type Conversion12'
     *  DataTypeConversion: '<S546>/Data Type Conversion15'
     *  DataTypeConversion: '<S546>/Data Type Conversion2'
     *  DataTypeConversion: '<S546>/Data Type Conversion5'
     *  DataTypeConversion: '<S546>/Data Type Conversion6'
     *  DataTypeConversion: '<S546>/Data Type Conversion7'
     *  DataTypeConversion: '<S546>/Data Type Conversion8'
     *  DataTypeConversion: '<S546>/Data Type Conversion9'
     *  Inport: '<Root>/VeDTRR_e_SumFWIDFst'
     *  Inport: '<Root>/VeDTRR_e_SumFWIDSlw'
     *  Inport: '<Root>/VeENGR_e_StsMiL_ECM'
     *  Inport: '<Root>/VeHSER_e_RngSt'
     *  Inport: '<Root>/VePLTR_e_ShiftIndSt'
     *  Inport: '<Root>/VePLTR_e_VehCfgSt'
     *  Inport: '<Root>/VeSCOR_e_RngDsrd_GSI'
     *  Inport: '<Root>/VeTMDR_e_LockLowSt'
     *  Inport: '<Root>/VeVTVR_e_TrqArb'
     *  Selector: '<S546>/Selector'
     *  Selector: '<S546>/Selector1'
     *  Selector: '<S546>/Selector10'
     *  Selector: '<S546>/Selector11'
     *  Selector: '<S546>/Selector2'
     *  Selector: '<S546>/Selector3'
     *  Selector: '<S546>/Selector4'
     *  Selector: '<S546>/Selector5'
     *  Selector: '<S546>/Selector6'
     *  Selector: '<S546>/Selector7'
     *  Selector: '<S546>/Selector8'
     *  SignalConversion generated from: '<S2>/VeFWDR_e_Tcase_Stat'
     */
    rtb_Logical15_m = (((((((((((((((((((rtb_UnitDelay_lad && rtb_AND_mo) &&
        rtb_AND_fo) && (KaOHSR_b_EnblGSI_ShiftIndSt[(tmpRead_7)])) &&
        (KaOHSR_b_EnblGSI_VehCFGSt[(tmpRead_8)])) &&
        (KaOHSR_b_EnblGSI_TcaseRange_Stat
         [(rtb_TmpSignalConversionAtVeFWDR_e_Tcase_)])) &&
        (KaOHSR_b_EnblGSI_LockLowSt[(tmpRead_9)])) && (KaOHSR_b_EnblGSI_RngSt
        [(tmpRead_5)])) && (KaOHSR_b_EnblGSI_DrvMdArb[(tmpRead_a)])) &&
        (KaOHSR_b_EnblGSI_FWIDSlw[(tmpRead_3)])) && (KaOHSR_b_EnblGSI_FWIDFst
        [(tmpRead_2)])) && (KaOHSR_b_EnblGSI_TrqArb[(tmpRead_b)])) &&
        rtb_Logical2_p) && rtb_Logical3_in) &&
                            rtb_TmpSignalConversionAtShiftToN_ReadOu) &&
                           rtb_AND_ck) && (tmp_1[tmpRead_c])) && rtb_Logical12_n)
                        && rtb_Logical15_m) && (KaOHSR_b_EnblGSI_StsMiL_ECM
                        [(tmpRead_j)]));

    /* End of Outputs for SubSystem: '<S534>/GSI' */
#endif

#if !Rte_SysCon_Variant_OHSR_FUNC_PxPy_1 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_17 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_21 || !Rte_SysCon_Variant_OHSR_FUNC_PxPy_23

    /* Outputs for Atomic SubSystem: '<S549>/Limiter2' */
    /* Outputs for Atomic SubSystem: '<S549>/Limiter1' */
    /* Switch: '<S790>/Switch1' incorporates:
     *  Constant: '<S789>/Calib'
     *  RelationalOperator: '<S790>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeOSMR_n_MtrBSp < HeOHSR_n_Dflt_SpdDsrd)
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = rtb_TmpSignalConversionAtVeOSMR_n_MtrBSp;
    }
    else
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = HeOHSR_n_Dflt_SpdDsrd;
    }

    /* End of Switch: '<S790>/Switch1' */

    /* Switch: '<S790>/Switch' incorporates:
     *  RelationalOperator: '<S790>/Relational Operator1'
     */
    if (rtb_Switch5_fw > rtb_TmpSignalConversionAtVeOSMR_n_MtrB_h)
    {
        /* Switch: '<S790>/Switch' */
        rtb_Switch_ly = rtb_Switch5_fw;
    }
    else
    {
        /* Switch: '<S790>/Switch' */
        rtb_Switch_ly = rtb_TmpSignalConversionAtVeOSMR_n_MtrB_h;
    }

    /* End of Switch: '<S790>/Switch' */

    /* Switch: '<S791>/Switch1' incorporates:
     *  Constant: '<S789>/Calib'
     *  RelationalOperator: '<S791>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeESPR_n_EngSpd < HeOHSR_n_Dflt_SpdDsrd)
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = rtb_TmpSignalConversionAtVeESPR_n_EngSpd;
    }
    else
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = HeOHSR_n_Dflt_SpdDsrd;
    }

    /* End of Switch: '<S791>/Switch1' */

    /* Switch: '<S791>/Switch' incorporates:
     *  RelationalOperator: '<S791>/Relational Operator1'
     */
    if (rtb_Switch5_fw > rtb_TmpSignalConversionAtVeOSMR_n_TransM)
    {
        /* Switch: '<S791>/Switch' */
        rtb_Switch = rtb_Switch5_fw;
    }
    else
    {
        /* Switch: '<S791>/Switch' */
        rtb_Switch = rtb_TmpSignalConversionAtVeOSMR_n_TransM;
    }

    /* End of Switch: '<S791>/Switch' */
    /* End of Outputs for SubSystem: '<S549>/Limiter1' */
    /* End of Outputs for SubSystem: '<S549>/Limiter2' */
#endif

    /* Outputs for Atomic SubSystem: '<S555>/OHSC_InputSpeedProfiles_TLC' */
    /* Outputs for Atomic SubSystem: '<S908>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S917>/EdgeRising' */
    /* Logic: '<S919>/AND' incorporates:
     *  Logic: '<S919>/OR1'
     *  UnitDelay: '<S919>/Unit Delay'
     */
    rtb_AND_ah0 = (rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re &&
                   (!OHSR_ac_DW.UnitDelay_DSTATE_jqg));

    /* Update for UnitDelay: '<S919>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_jqg = rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re;

    /* End of Outputs for SubSystem: '<S917>/EdgeRising' */

    /* Switch: '<S917>/Switch1' incorporates:
     *  Constant: '<S910>/Calib'
     *  Constant: '<S914>/Calib'
     *  Constant: '<S917>/Constant Value1'
     *  Logic: '<S917>/OR'
     *  Logic: '<S917>/OR1'
     *  MinMax: '<S917>/Minimum'
     *  Sum: '<S917>/Summation'
     *  UnitDelay: '<S917>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re) || rtb_AND_ah0)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_nr = 0.0F;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_nr = fminf(KeOHSR_t_TLC_InitHold,
            HeOHSR_t_RngSel_dT + OHSR_ac_DW.UnitDelay_DSTATE_nr);
    }

    /* End of Switch: '<S917>/Switch1' */

    /* Logic: '<S917>/AND' incorporates:
     *  Constant: '<S914>/Calib'
     *  RelationalOperator: '<S917>/Greater  Than'
     *  UnitDelay: '<S917>/Unit Delay'
     */
    rtb_AND_ah0 = (rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re &&
                   (OHSR_ac_DW.UnitDelay_DSTATE_nr >= KeOHSR_t_TLC_InitHold));

    /* End of Outputs for SubSystem: '<S908>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S908>/EdgeRising' */
    /* Logic: '<S909>/AND' incorporates:
     *  Logic: '<S909>/OR1'
     *  UnitDelay: '<S909>/Unit Delay'
     */
    rtb_Logical12_n = (rtb_AND_ah0 && (!OHSR_ac_DW.UnitDelay_DSTATE_bz));

    /* Update for UnitDelay: '<S909>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_bz = rtb_AND_ah0;

    /* End of Outputs for SubSystem: '<S908>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S908>/StopWatchResetTriggerEnabled' */
    /* Outputs for Atomic SubSystem: '<S916>/EdgeRising' */
    /* Logic: '<S918>/OR1' incorporates:
     *  UnitDelay: '<S918>/Unit Delay'
     */
    rtb_OR1_kv = !OHSR_ac_DW.UnitDelay_DSTATE_cn;

    /* Update for UnitDelay: '<S918>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_cn = rtb_Logical12_n;

    /* Switch: '<S916>/Switch1' incorporates:
     *  Constant: '<S916>/Constant Value2'
     *  Logic: '<S918>/AND'
     *  Switch: '<S916>/Switch2'
     *  UnitDelay: '<S916>/Unit Delay'
     */
    if (rtb_Logical12_n && rtb_OR1_kv)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_jl = 0.0F;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re)
        {
            /* UnitDelay: '<S916>/Unit Delay' incorporates:
             *  Constant: '<S910>/Calib'
             *  Sum: '<S916>/Subtraction'
             *  Switch: '<S916>/Switch2'
             */
            OHSR_ac_DW.UnitDelay_DSTATE_jl += HeOHSR_t_RngSel_dT;
        }
    }

    /* End of Switch: '<S916>/Switch1' */
    /* End of Outputs for SubSystem: '<S916>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S908>/StopWatchResetTriggerEnabled' */

    /* Switch: '<S908>/Switch' */
    if (rtb_AND_ah0)
    {
        /* Sum: '<S908>/Sum1' incorporates:
         *  Constant: '<S911>/Calib'
         *  Constant: '<S913>/Calib'
         *  Product: '<S908>/Product'
         *  UnitDelay: '<S916>/Unit Delay'
         */
        VeOHSC_n_TLC_NiM2 = KeOHSR_n_TLC_NiM2Max - (KeOHSR_r_TLC_NiDecrRate *
            OHSR_ac_DW.UnitDelay_DSTATE_jl);

        /* Outputs for Atomic SubSystem: '<S908>/Limiter' */
        /* Switch: '<S915>/Switch1' incorporates:
         *  Constant: '<S911>/Calib'
         *  RelationalOperator: '<S915>/Relational Operator'
         */
        if (KeOHSR_n_TLC_NiM2Max < VeOHSC_n_TLC_NiM2)
        {
            /* Switch: '<S915>/Switch1' */
            VeOHSC_n_TLC_NiM2 = KeOHSR_n_TLC_NiM2Max;
        }

        /* End of Switch: '<S915>/Switch1' */

        /* Switch: '<S915>/Switch' incorporates:
         *  Constant: '<S912>/Calib'
         *  RelationalOperator: '<S915>/Relational Operator1'
         */
        if (VeOHSC_n_TLC_NiM2 <= KeOHSR_n_TLC_NiM2Min)
        {
            /* Switch: '<S908>/Switch' */
            VeOHSC_n_TLC_NiM2 = KeOHSR_n_TLC_NiM2Min;
        }

        /* End of Switch: '<S915>/Switch' */
        /* End of Outputs for SubSystem: '<S908>/Limiter' */
    }
    else
    {
        /* Switch: '<S908>/Switch' incorporates:
         *  Constant: '<S911>/Calib'
         */
        VeOHSC_n_TLC_NiM2 = KeOHSR_n_TLC_NiM2Max;
    }

    /* End of Switch: '<S908>/Switch' */

    /* Switch: '<S820>/Switch16' incorporates:
     *  Constant: '<S907>/Calib'
     *  Logic: '<S820>/Logical7'
     */
    if ((KaOHSR_b_ModeSel4TLC[1]) && rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re)
    {
        /* Switch: '<S820>/Switch16' */
        rtb_TmpSignalConversionAtVeVSDR_n_NTurbO = VeOHSC_n_TLC_NiM2;
    }

    /* End of Switch: '<S820>/Switch16' */

    /* Switch: '<S820>/Switch17' incorporates:
     *  Constant: '<S907>/Calib'
     *  Logic: '<S820>/Logical5'
     */
    if ((KaOHSR_b_ModeSel4TLC[0]) && rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re)
    {
        /* Switch: '<S820>/Switch17' */
        rtb_TmpSignalConversionAtVeESPR_n_TCMEng = VeOHSC_n_TLC_NiM2;
    }

    /* End of Switch: '<S820>/Switch17' */

    /* Switch: '<S820>/Switch18' incorporates:
     *  Constant: '<S907>/Calib'
     *  Logic: '<S820>/Logical8'
     */
    if ((KaOHSR_b_ModeSel4TLC[2]) && rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re)
    {
        /* Switch: '<S820>/Switch18' */
        rtb_TmpSignalConversionAtVeOSMR_n_Inp_of = VeOHSC_n_TLC_NiM2;
    }

    /* End of Switch: '<S820>/Switch18' */
    /* End of Outputs for SubSystem: '<S555>/OHSC_InputSpeedProfiles_TLC' */

    /* Product: '<S923>/Multiplication' incorporates:
     *  Constant: '<S920>/Calib'
     */
    rtb_Multiplication_f *= HeOHSR_t_RngSel_dT;

    /* Abs: '<S923>/Abs' */
    rtb_TmpSignalConversionAtVeESPR_n_EngSpd = fabsf(rtb_Multiplication_f);

    /* Sum: '<S923>/Sum2' incorporates:
     *  UnitDelay: '<S556>/Unit Delay2'
     */
    rtb_Switch5_fw = rtb_Merge3 - OHSR_ac_DW.UnitDelay2_DSTATE_p;

    /* Outputs for Atomic SubSystem: '<S923>/Limiter1' */
    /* Switch: '<S931>/Switch1' incorporates:
     *  RelationalOperator: '<S931>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeESPR_n_EngSpd < rtb_Switch5_fw)
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = rtb_TmpSignalConversionAtVeESPR_n_EngSpd;
    }

    /* End of Switch: '<S931>/Switch1' */

    /* Switch: '<S931>/Switch' incorporates:
     *  Gain: '<S923>/Gain'
     *  RelationalOperator: '<S931>/Relational Operator1'
     */
    if (rtb_Switch5_fw <= (-rtb_TmpSignalConversionAtVeESPR_n_EngSpd))
    {
        rtb_Switch5_fw = -rtb_TmpSignalConversionAtVeESPR_n_EngSpd;
    }

    /* End of Switch: '<S931>/Switch' */
    /* End of Outputs for SubSystem: '<S923>/Limiter1' */

    /* Sum: '<S923>/Sum3' incorporates:
     *  UnitDelay: '<S556>/Unit Delay2'
     */
    rtb_Switch5_fw += OHSR_ac_DW.UnitDelay2_DSTATE_p;

    /* Outputs for Atomic SubSystem: '<S923>/Limiter2' */
    /* Switch: '<S932>/Switch1' incorporates:
     *  Constant: '<S556>/Constant Value3'
     *  RelationalOperator: '<S932>/Relational Operator'
     */
    if (1.0F < rtb_Switch5_fw)
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = 1.0F;
    }

    /* End of Switch: '<S932>/Switch1' */

    /* Switch: '<S932>/Switch' incorporates:
     *  Constant: '<S556>/Constant Value5'
     *  RelationalOperator: '<S932>/Relational Operator1'
     *  UnitDelay: '<S556>/Unit Delay2'
     */
    if (rtb_Switch5_fw > 0.0F)
    {
        OHSR_ac_DW.UnitDelay2_DSTATE_p = rtb_Switch5_fw;
    }
    else
    {
        OHSR_ac_DW.UnitDelay2_DSTATE_p = 0.0F;
    }

    /* End of Switch: '<S932>/Switch' */
    /* End of Outputs for SubSystem: '<S923>/Limiter2' */

    /* Product: '<S921>/Multiplication' incorporates:
     *  Constant: '<S920>/Calib'
     */
    rtb_Merge1 *= HeOHSR_t_RngSel_dT;

    /* Abs: '<S921>/Abs' */
    rtb_TmpSignalConversionAtVeESPR_n_EngSpd = fabsf(rtb_Merge1);

    /* Sum: '<S921>/Sum2' incorporates:
     *  UnitDelay: '<S556>/Unit Delay3'
     */
    rtb_Switch5_fw = rtb_Selector1_h2 - OHSR_ac_DW.UnitDelay3_DSTATE_n;

    /* Outputs for Atomic SubSystem: '<S921>/Limiter1' */
    /* Switch: '<S927>/Switch1' incorporates:
     *  RelationalOperator: '<S927>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeESPR_n_EngSpd < rtb_Switch5_fw)
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = rtb_TmpSignalConversionAtVeESPR_n_EngSpd;
    }

    /* End of Switch: '<S927>/Switch1' */

    /* Switch: '<S927>/Switch' incorporates:
     *  Gain: '<S921>/Gain'
     *  RelationalOperator: '<S927>/Relational Operator1'
     */
    if (rtb_Switch5_fw <= (-rtb_TmpSignalConversionAtVeESPR_n_EngSpd))
    {
        rtb_Switch5_fw = -rtb_TmpSignalConversionAtVeESPR_n_EngSpd;
    }

    /* End of Switch: '<S927>/Switch' */
    /* End of Outputs for SubSystem: '<S921>/Limiter1' */

    /* Sum: '<S921>/Sum3' incorporates:
     *  UnitDelay: '<S556>/Unit Delay3'
     */
    rtb_Switch5_fw += OHSR_ac_DW.UnitDelay3_DSTATE_n;

    /* Outputs for Atomic SubSystem: '<S921>/Limiter2' */
    /* Switch: '<S928>/Switch1' incorporates:
     *  Constant: '<S556>/Constant Value8'
     *  RelationalOperator: '<S928>/Relational Operator'
     */
    if (1.0F < rtb_Switch5_fw)
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = 1.0F;
    }

    /* End of Switch: '<S928>/Switch1' */

    /* Switch: '<S928>/Switch' incorporates:
     *  Constant: '<S556>/Constant Value12'
     *  RelationalOperator: '<S928>/Relational Operator1'
     *  UnitDelay: '<S556>/Unit Delay3'
     */
    if (rtb_Switch5_fw > 0.0F)
    {
        OHSR_ac_DW.UnitDelay3_DSTATE_n = rtb_Switch5_fw;
    }
    else
    {
        OHSR_ac_DW.UnitDelay3_DSTATE_n = 0.0F;
    }

    /* End of Switch: '<S928>/Switch' */
    /* End of Outputs for SubSystem: '<S921>/Limiter2' */

    /* Sum: '<S1209>/Sum2' incorporates:
     *  Constant: '<S920>/Calib'
     *  Product: '<S922>/Multiplication'
     */
    rtb_Abs1 *= HeOHSR_t_RngSel_dT;

    /* Abs: '<S922>/Abs' */
    rtb_TmpSignalConversionAtVeESPR_n_EngSpd = fabsf(rtb_Abs1);

    /* Sum: '<S922>/Sum2' incorporates:
     *  UnitDelay: '<S556>/Unit Delay1'
     */
    rtb_Switch5_fw = rtb_Merge4 - OHSR_ac_DW.UnitDelay1_DSTATE_p;

    /* Outputs for Atomic SubSystem: '<S922>/Limiter1' */
    /* Switch: '<S929>/Switch1' incorporates:
     *  RelationalOperator: '<S929>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeESPR_n_EngSpd < rtb_Switch5_fw)
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = rtb_TmpSignalConversionAtVeESPR_n_EngSpd;
    }

    /* End of Switch: '<S929>/Switch1' */

    /* Switch: '<S929>/Switch' incorporates:
     *  Gain: '<S922>/Gain'
     *  RelationalOperator: '<S929>/Relational Operator1'
     */
    if (rtb_Switch5_fw <= (-rtb_TmpSignalConversionAtVeESPR_n_EngSpd))
    {
        rtb_Switch5_fw = -rtb_TmpSignalConversionAtVeESPR_n_EngSpd;
    }

    /* End of Switch: '<S929>/Switch' */
    /* End of Outputs for SubSystem: '<S922>/Limiter1' */

    /* Sum: '<S922>/Sum3' incorporates:
     *  UnitDelay: '<S556>/Unit Delay1'
     */
    rtb_Switch5_fw += OHSR_ac_DW.UnitDelay1_DSTATE_p;

    /* Outputs for Atomic SubSystem: '<S922>/Limiter2' */
    /* Switch: '<S930>/Switch1' incorporates:
     *  Constant: '<S556>/Constant Value2'
     *  RelationalOperator: '<S930>/Relational Operator'
     */
    if (1.0F < rtb_Switch5_fw)
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = 1.0F;
    }

    /* End of Switch: '<S930>/Switch1' */

    /* Switch: '<S930>/Switch' incorporates:
     *  Constant: '<S556>/Constant Value1'
     *  RelationalOperator: '<S930>/Relational Operator1'
     *  UnitDelay: '<S556>/Unit Delay1'
     */
    if (rtb_Switch5_fw > 0.0F)
    {
        OHSR_ac_DW.UnitDelay1_DSTATE_p = rtb_Switch5_fw;
    }
    else
    {
        OHSR_ac_DW.UnitDelay1_DSTATE_p = 0.0F;
    }

    /* End of Switch: '<S930>/Switch' */
    /* End of Outputs for SubSystem: '<S922>/Limiter2' */

    /* If: '<S1232>/If' incorporates:
     *  Abs: '<S1209>/Abs1'
     *  Constant: '<S1212>/Calib'
     *  Constant: '<S1213>/Calib'
     *  Constant: '<S1235>/Constant'
     *  Constant: '<S1236>/Constant'
     *  Constant: '<S1246>/Calib'
     *  Logic: '<S936>/Logical'
     *  Logic: '<S936>/Logical1'
     *  Logic: '<S936>/Logical2'
     *  Lookup_n-D: '<S1227>/Vector'
     *  Lookup_n-D: '<S1228>/Vector'
     *  Lookup_n-D: '<S1229>/Vector'
     *  Lookup_n-D: '<S1230>/Vector'
     *  MinMax: '<S1209>/MinMax3'
     *  MinMax: '<S936>/MinMax1'
     *  MinMax: '<S936>/MinMax2'
     *  MinMax: '<S936>/MinMax3'
     *  Product: '<S1209>/Product'
     *  Product: '<S1209>/Product1'
     *  Product: '<S1209>/Product2'
     *  Product: '<S1209>/Product3'
     *  Product: '<S1209>/Product4'
     *  RelationalOperator: '<S1211>/Greater  Than'
     *  RelationalOperator: '<S1232>/Comparison1'
     *  RelationalOperator: '<S1232>/Comparison4'
     *  SignalConversion generated from: '<S2>/dSOC_Read'
     *  SignalConversion generated from: '<S936>/XeOHSR_b_EngCalc_Enbl'
     *  Sum: '<S1209>/Sum'
     *  Sum: '<S1209>/Sum1'
     *  Sum: '<S1209>/Sum2'
     *  Sum: '<S1209>/Sum3'
     *  Sum: '<S1209>/Sum4'
     *  Sum: '<S1210>/Subtraction'
     *  Sum: '<S1218>/Summation'
     *  Sum: '<S936>/Sum1'
     *  Switch: '<S1209>/Switch1'
     *  Switch: '<S1232>/Switch4'
     *  Switch: '<S936>/Switch'
     *  UnitDelay: '<S1218>/Unit Delay'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    /* Outputs for Atomic SubSystem: '<S936>/Digital Lowpass Reset Enabled' */
    /* Outputs for Atomic SubSystem: '<S1209>/GradientLimiter' */
    /* Outputs for Atomic SubSystem: '<S1209>/Limiter1' */
    /* Outputs for Atomic SubSystem: '<S1209>/Accumulator Reset1' */
    /* Outputs for Atomic SubSystem: '<S1209>/EdgeBi1' */
    /* Outputs for Atomic SubSystem: '<S1209>/Accumulator Reset' */
    /* Outputs for Atomic SubSystem: '<S1209>/EdgeBi' */
    /* Outputs for Atomic SubSystem: '<S936>/Hysteresis' */
    /* MinMax: '<S936>/MinMax2' */
    VaOHSC_n_NiMaxNVH_Limit[0] = fmaxf(VeOHSC_n_StgcNiMin_N,
        rtb_TmpSignalConversionAtVeOSMR_n_NiMax_);
    VaOHSC_n_NiMaxNVH_Limit[1] = fmaxf(VeOHSC_n_StgcNiMin_M1,
        rtb_TmpSignalConversionAtVeOSMR_n_NiMax_);
    VaOHSC_n_NiMaxNVH_Limit[2] = fmaxf(VeOHSC_n_StgcNiMin_M2,
        rtb_TmpSignalConversionAtVeOSMR_n_NiMax_);

    /* Abs: '<S1209>/Abs1' */
    rtb_TmpSignalConversionAtVeBACR_P_BattPw = fabsf
        (rtb_TmpSignalConversionAtVeOITR_P_OptCal +
         rtb_TmpSignalConversionAtVeBACR_P_BattPw);

    /* Sum: '<S936>/Sum1' */
    rtb_Sum1_li[0] = VeOHSC_n_OptInputSpdDsrd_N - VaOHSC_n_NiMaxNVH_Limit[0];
    rtb_Sum1_li[1] = VeOHSC_n_OptInputSpdDsrd_M1 - VaOHSC_n_NiMaxNVH_Limit[1];
    rtb_Sum1_li[2] = VeOHSC_n_OptInputSpdDsrd_M2 - VaOHSC_n_NiMaxNVH_Limit[2];
    for (i = 0; i < 3; i++)
    {
        rtb_Merge1 = rtb_Sum1_li[i];

        /* Switch: '<S1211>/Switch1' incorporates:
         *  Constant: '<S1215>/Calib'
         *  Constant: '<S1216>/Calib'
         *  RelationalOperator: '<S1211>/Greater  Than'
         *  RelationalOperator: '<S1211>/Greater  Than1'
         *  UnitDelay: '<S1211>/Unit Delay'
         */
        VeOHSC_b_NVHLimitation_Actv[(i)] = ((rtb_Merge1 >
            KeOHSR_n_NVHLimitnActvn_SpdDiff_RSP) || ((rtb_Merge1 >=
            KeOHSR_n_NVHLimitnActvn_SpdDiff_LSP) &&
            (VeOHSC_b_NVHLimitation_Actv[(i)])));

        /* RelationalOperator: '<S1219>/Not Equal' incorporates:
         *  UnitDelay: '<S1219>/Unit Delay'
         */
        loopCond = (VeOHSC_b_NVHLimitation_Actv[(i)] !=
                    OHSR_ac_DW.UnitDelay_DSTATE_bb[i]);

        /* Update for UnitDelay: '<S1219>/Unit Delay' */
        OHSR_ac_DW.UnitDelay_DSTATE_bb[i] = VeOHSC_b_NVHLimitation_Actv[(i)];

        /* Switch: '<S1217>/Switch1' incorporates:
         *  Constant: '<S1209>/Constant Value1'
         *  Sum: '<S1217>/Summation'
         *  UnitDelay: '<S1217>/Unit Delay'
         */
        if (loopCond)
        {
            OHSR_ac_DW.UnitDelay_DSTATE_f[i] = 0.0F;
        }
        else
        {
            OHSR_ac_DW.UnitDelay_DSTATE_f[i] +=
                rtb_TmpSignalConversionAtVeBACR_P_BattPw;
        }

        /* End of Switch: '<S1217>/Switch1' */

        /* Product: '<S1209>/Product' incorporates:
         *  Constant: '<S1222>/Calib'
         *  Constant: '<S1223>/Calib'
         *  UnitDelay: '<S1217>/Unit Delay'
         */
        VeOHSC_E_BattEnrgyLoss[(i)] = (HeOHSR_t_RngSel_dT *
            OHSR_ac_DW.UnitDelay_DSTATE_f[i]) * KeOHSR_r_BattEnergyLoss_ConvFac;
    }

    bpIndices[1U] = plook_u32ff_binca_16a
        (rtb_TmpSignalConversionAtdSOC_ReadOutpor, ((const float32 *)
          &(KyOHSR_r_NVHLimitBlnd_BattEnrgyFac[0])), 5U,
         &rtb_TmpSignalConversionAtVeOSMR_n_NiMax_);
    fractions[1U] = rtb_TmpSignalConversionAtVeOSMR_n_NiMax_;
    for (i = 0; i < 3; i++)
    {
        bpIndices[0U] = plook_u32ff_binca_16a(VeOHSC_E_BattEnrgyLoss[(i)], ((
            const float32 *)&(KxOHSR_r_NVHLimitBlnd_BattEnrgyFac[0])), 5U,
            &rtb_TmpSignalConversionAtVeOSMR_n_NiMax_);
        fractions[0U] = rtb_TmpSignalConversionAtVeOSMR_n_NiMax_;
        VeOHSC_r_BattEnrgyFac_NVHLmtn[(i)] = intrp2d_fu32fla_16a(bpIndices,
            fractions, ((const float32 *)&(KtOHSR_r_NVHLimitBlnd_BattEnrgyFac[0])),
            6U, OHSR_ac_ConstP.pooled15);
    }

    /* Lookup_n-D: '<S1227>/Vector' incorporates:
     *  Abs: '<S1209>/Abs1'
     *  RelationalOperator: '<S1211>/Greater  Than'
     *  SignalConversion generated from: '<S2>/dSOC_Read'
     */
    VeOHSC_r_EngPwrLossIntgrn_WgtFac = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeBACR_P_BattPw, ((const float32 *)
          &(KxOHSR_r_EngPwrLossIntgrn_WeightFactr[0])), ((const float32 *)
          &(KtOHSR_r_EngPwrLossIntgrn_WeightFactr[0])), 6U);
    if (Rte_Prm_KeOPTR_b_UseStgcFuelFlow_KeOPTR_b_UseStgcFuelFlow())
    {
        /* Switch: '<S1232>/Switch4' incorporates:
         *  Constant: '<S1242>/Calib'
         */
        rtb_Switch4_0 =
            Rte_Prm_KaOPTR_dm_FuelFlowAllCylStgc_KaOPTR_dm_FuelFlowAllCylStgc();
    }
    else
    {
        /* Switch: '<S1232>/Switch4' incorporates:
         *  Constant: '<S1241>/Calib'
         */
        rtb_Switch4_0 =
            Rte_Prm_KaOPTR_dm_FuelFlowAllCyl_KaOPTR_dm_FuelFlowAllCyl();
    }

    s1205_iter = OHSR_ac_DW.If_ActiveSubsystem_j;
    if (((uint32)rtb_TmpSignalConversionAtVeOITR_e_EngDsr) == CeOITR_e_NonDOD_FF)
    {
        OHSR_ac_DW.If_ActiveSubsystem_j = 0;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVeOITR_e_EngDsr) ==
             CeOITR_e_DOD_FF)
    {
        OHSR_ac_DW.If_ActiveSubsystem_j = 1;
    }
    else
    {
        OHSR_ac_DW.If_ActiveSubsystem_j = 2;
    }

    switch (OHSR_ac_DW.If_ActiveSubsystem_j)
    {
      case 0:
        if (OHSR_ac_DW.If_ActiveSubsystem_j != s1205_iter)
        {
            /* SystemReset for IfAction SubSystem: '<S1232>/AllCyl' incorporates:
             *  ActionPort: '<S1234>/Action Port'
             */
            /* SystemReset for If: '<S1232>/If' incorporates:
             *  Chart: '<S1251>/X-Data & Fractions'
             *  Chart: '<S1257>/X-Data & Fractions'
             */
            OHSR_ac_XDataFractions_Reset(&OHSR_ac_B.sf_XDataFractions_p);
            OHSR_ac_XDataFractions_Reset(&OHSR_ac_B.sf_XDataFractions_fn);

            /* End of SystemReset for SubSystem: '<S1232>/AllCyl' */
        }

        /* Outputs for IfAction SubSystem: '<S1232>/AllCyl' incorporates:
         *  ActionPort: '<S1234>/Action Port'
         */
        /* Chart: '<S1257>/X-Data & Fractions' incorporates:
         *  Constant: '<S1239>/Calib'
         *  MinMax: '<S1250>/MinMax1'
         */
        OHSR_ac_XDataFractions
            ((Rte_Prm_KaOPTR_M_FuelFlowTrqAxis_KaOPTR_M_FuelFlowTrqAxis()),
             fmaxf(rtb_TmpSignalConversionAtVeOITR_M_OptInp,
                   rtb_TmpSignalConversionAtVeOITR_M_OptInp),
             &OHSR_ac_B.sf_XDataFractions_p);

        /* Chart: '<S1251>/X-Data & Fractions' incorporates:
         *  Constant: '<S1244>/Calib'
         */
        OHSR_ac_XDataFractions
            ((Rte_Prm_KaOPTR_n_FuelFlowSpdAxis_KaOPTR_n_FuelFlowSpdAxis()),
             rtb_TmpSignalConversionAtVeTISR_n_InputS,
             &OHSR_ac_B.sf_XDataFractions_fn);

        /* Selector: '<S1258>/Selector4' incorporates:
         *  Selector: '<S1258>/Selector1'
         *  Switch: '<S1232>/Switch4'
         */
        i = 31 * ((sint32)OHSR_ac_B.sf_XDataFractions_fn.LowerIndex);
        rtb_TmpSignalConversionAtdSOC_ReadOutpor = rtb_Switch4_0[i + ((sint32)
            OHSR_ac_B.sf_XDataFractions_p.LowerIndex)];

        /* Selector: '<S1258>/Selector2' incorporates:
         *  Selector: '<S1258>/Selector3'
         */
        rtb_Switch5_jr_tmp = 31 * ((sint32)
            OHSR_ac_B.sf_XDataFractions_fn.UpperIndex);

        /* Product: '<S1234>/Multiplication1' incorporates:
         *  Product: '<S1258>/Multiplication1'
         *  Selector: '<S1258>/Selector2'
         *  Selector: '<S1258>/Selector4'
         *  Sum: '<S1258>/Subtraction2'
         *  Sum: '<S1258>/Subtraction3'
         *  Switch: '<S1232>/Switch4'
         */
        rtb_TmpSignalConversionAtVeBACR_P_BattPw =
            ((rtb_Switch4_0[rtb_Switch5_jr_tmp + ((sint32)
               OHSR_ac_B.sf_XDataFractions_p.LowerIndex)] -
              rtb_TmpSignalConversionAtdSOC_ReadOutpor) *
             OHSR_ac_B.sf_XDataFractions_fn.fra) +
            rtb_TmpSignalConversionAtdSOC_ReadOutpor;

        /* Switch: '<S1250>/Switch5' incorporates:
         *  Constant: '<S1250>/Constant Value2'
         *  Constant: '<S1250>/Constant Value6'
         *  Constant: '<S1255>/Calib'
         *  Product: '<S1250>/Multiplication15'
         */
        if (Rte_Prm_KeOPTR_b_PurgeAdjst_Enbl_KeOPTR_b_PurgeAdjst_Enbl())
        {
            rtb_Merge1 = 4.1F * rtb_TmpSignalConversionAtVeEOCR_Pct_Purg;
        }
        else
        {
            rtb_Merge1 = 0.0F;
        }

        /* End of Switch: '<S1250>/Switch5' */

        /* Selector: '<S1258>/Selector1' incorporates:
         *  Switch: '<S1232>/Switch4'
         */
        rtb_TmpSignalConversionAtdSOC_ReadOutpor = rtb_Switch4_0[i + ((sint32)
            OHSR_ac_B.sf_XDataFractions_p.UpperIndex)];

        /* Product: '<S1234>/Multiplication1' incorporates:
         *  Constant: '<S1248>/Calib'
         *  Constant: '<S1249>/Calib'
         *  Gain: '<S1250>/Nm-rev//min to kW'
         *  Product: '<S1250>/EngPower'
         *  Product: '<S1250>/Product1'
         *  Product: '<S1258>/Multiplication'
         *  Product: '<S1258>/Multiplication2'
         *  Selector: '<S1258>/Selector1'
         *  Selector: '<S1258>/Selector3'
         *  Sum: '<S1250>/Max_Power_Per_Fuel_Flow'
         *  Sum: '<S1250>/Power Loss'
         *  Sum: '<S1250>/Summation14'
         *  Sum: '<S1258>/Subtraction'
         *  Sum: '<S1258>/Subtraction1'
         *  Sum: '<S1258>/Subtraction4'
         *  Sum: '<S1258>/Subtraction5'
         *  Switch: '<S1232>/Switch4'
         */
        rtb_TmpSignalConversionAtVeBACR_P_BattPw =
            (((((((((rtb_Switch4_0[rtb_Switch5_jr_tmp + ((sint32)
                      OHSR_ac_B.sf_XDataFractions_p.UpperIndex)] -
                     rtb_TmpSignalConversionAtdSOC_ReadOutpor) *
                    OHSR_ac_B.sf_XDataFractions_fn.fra) +
                   rtb_TmpSignalConversionAtdSOC_ReadOutpor) -
                  rtb_TmpSignalConversionAtVeBACR_P_BattPw) *
                 OHSR_ac_B.sf_XDataFractions_p.fra) +
                rtb_TmpSignalConversionAtVeBACR_P_BattPw) - rtb_Merge1) *
              ((float32)
               Rte_Prm_KeOPTR_Cf_MaxEngPwrPerFuelFlow_KeOPTR_Cf_MaxEngPwrPerFuelFlow
               ())) - ((rtb_TmpSignalConversionAtVeTISR_n_InputS *
                        rtb_TmpSignalConversionAtVeOITR_M_OptInp) *
                       0.000104719758F)) * ((float32)
            Rte_Prm_KeOPTR_r_EngPwrLossCostFactor_KeOPTR_r_EngPwrLossCostFactor());

        /* Merge: '<S1232>/Merge' incorporates:
         *  Gain: '<S1252>/Gain'
         */
        VaOHSC_P_EngPwrLossCurrnt[0] = rtb_TmpSignalConversionAtVeBACR_P_BattPw;
        VaOHSC_P_EngPwrLossCurrnt[1] = rtb_TmpSignalConversionAtVeBACR_P_BattPw;
        VaOHSC_P_EngPwrLossCurrnt[2] = rtb_TmpSignalConversionAtVeBACR_P_BattPw;

        /* End of Outputs for SubSystem: '<S1232>/AllCyl' */
        break;

      case 1:
        if (OHSR_ac_DW.If_ActiveSubsystem_j != s1205_iter)
        {
            /* SystemReset for IfAction SubSystem: '<S1232>/DOD' incorporates:
             *  ActionPort: '<S1237>/Action Port'
             */
            /* SystemReset for If: '<S1232>/If' incorporates:
             *  Chart: '<S1264>/X-Data & Fractions'
             *  Chart: '<S1270>/X-Data & Fractions'
             */
            OHSR_ac_XDataFractions_Reset(&OHSR_ac_B.sf_XDataFractions_d);
            OHSR_ac_XDataFractions_f_Reset(&OHSR_ac_B.sf_XDataFractions_c);

            /* End of SystemReset for SubSystem: '<S1232>/DOD' */
        }

        /* Outputs for IfAction SubSystem: '<S1232>/DOD' incorporates:
         *  ActionPort: '<S1237>/Action Port'
         */
        /* Chart: '<S1270>/X-Data & Fractions' incorporates:
         *  Constant: '<S1240>/Calib'
         *  MinMax: '<S1263>/MinMax1'
         */
        OHSR_ac_XDataFractions
            ((Rte_Prm_KaOPTR_M_FuelFlowTrqAxis_DOD_KaOPTR_M_FuelFlowTrqAxis_DOD()),
             fmaxf(rtb_TmpSignalConversionAtVeOITR_M_OptInp,
                   rtb_TmpSignalConversionAtVeOITR_M_OptInp),
             &OHSR_ac_B.sf_XDataFractions_d);

        /* Chart: '<S1264>/X-Data & Fractions' incorporates:
         *  Constant: '<S1245>/Calib'
         */
        OHSR_ac_XDataFractions_m
            ((Rte_Prm_KaOPTR_n_FuelFlowSpdAxis_DOD_KaOPTR_n_FuelFlowSpdAxis_DOD()),
             rtb_TmpSignalConversionAtVeTISR_n_InputS,
             &OHSR_ac_B.sf_XDataFractions_c);

        /* Selector: '<S1271>/Selector4' incorporates:
         *  Constant: '<S1243>/Calib'
         *  Selector: '<S1271>/Selector1'
         */
        i = 31 * ((sint32)OHSR_ac_B.sf_XDataFractions_c.LowerIndex);
        rtb_TmpSignalConversionAtdSOC_ReadOutpor =
            (Rte_Prm_KaOPTR_dm_FuelFlowDOD_KaOPTR_dm_FuelFlowDOD())[i + ((sint32)
            OHSR_ac_B.sf_XDataFractions_d.LowerIndex)];

        /* Selector: '<S1271>/Selector2' incorporates:
         *  Constant: '<S1243>/Calib'
         *  Selector: '<S1271>/Selector3'
         */
        rtb_Switch5_jr_tmp = 31 * ((sint32)
            OHSR_ac_B.sf_XDataFractions_c.UpperIndex);

        /* Product: '<S1237>/Multiplication1' incorporates:
         *  Constant: '<S1243>/Calib'
         *  Product: '<S1271>/Multiplication1'
         *  Selector: '<S1271>/Selector2'
         *  Selector: '<S1271>/Selector4'
         *  Sum: '<S1271>/Subtraction2'
         *  Sum: '<S1271>/Subtraction3'
         */
        rtb_TmpSignalConversionAtVeBACR_P_BattPw = ((((float32)
            (Rte_Prm_KaOPTR_dm_FuelFlowDOD_KaOPTR_dm_FuelFlowDOD())
            [rtb_Switch5_jr_tmp + ((sint32)
            OHSR_ac_B.sf_XDataFractions_d.LowerIndex)]) -
            rtb_TmpSignalConversionAtdSOC_ReadOutpor) *
            OHSR_ac_B.sf_XDataFractions_c.fra) +
            rtb_TmpSignalConversionAtdSOC_ReadOutpor;

        /* Switch: '<S1263>/Switch5' incorporates:
         *  Constant: '<S1263>/Constant Value2'
         *  Constant: '<S1263>/Constant Value6'
         *  Constant: '<S1268>/Calib'
         *  Product: '<S1263>/Multiplication15'
         */
        if (Rte_Prm_KeOPTR_b_PurgeAdjst_Enbl_KeOPTR_b_PurgeAdjst_Enbl())
        {
            rtb_Merge1 = 4.1F * rtb_TmpSignalConversionAtVeEOCR_Pct_Purg;
        }
        else
        {
            rtb_Merge1 = 0.0F;
        }

        /* End of Switch: '<S1263>/Switch5' */

        /* Selector: '<S1271>/Selector1' incorporates:
         *  Constant: '<S1243>/Calib'
         */
        rtb_TmpSignalConversionAtdSOC_ReadOutpor =
            (Rte_Prm_KaOPTR_dm_FuelFlowDOD_KaOPTR_dm_FuelFlowDOD())[i + ((sint32)
            OHSR_ac_B.sf_XDataFractions_d.UpperIndex)];

        /* Product: '<S1237>/Multiplication1' incorporates:
         *  Constant: '<S1243>/Calib'
         *  Constant: '<S1261>/Calib'
         *  Constant: '<S1262>/Calib'
         *  Gain: '<S1263>/Nm-rev//min to kW'
         *  Product: '<S1263>/EngPower'
         *  Product: '<S1263>/Product1'
         *  Product: '<S1271>/Multiplication'
         *  Product: '<S1271>/Multiplication2'
         *  Selector: '<S1271>/Selector1'
         *  Selector: '<S1271>/Selector3'
         *  Sum: '<S1263>/Max_Power_Per_Fuel_Flow'
         *  Sum: '<S1263>/Power Loss'
         *  Sum: '<S1263>/Summation14'
         *  Sum: '<S1271>/Subtraction'
         *  Sum: '<S1271>/Subtraction1'
         *  Sum: '<S1271>/Subtraction4'
         *  Sum: '<S1271>/Subtraction5'
         */
        rtb_TmpSignalConversionAtVeBACR_P_BattPw = (((((((((((float32)
            (Rte_Prm_KaOPTR_dm_FuelFlowDOD_KaOPTR_dm_FuelFlowDOD())
            [rtb_Switch5_jr_tmp + ((sint32)
            OHSR_ac_B.sf_XDataFractions_d.UpperIndex)]) -
            rtb_TmpSignalConversionAtdSOC_ReadOutpor) *
            OHSR_ac_B.sf_XDataFractions_c.fra) +
            rtb_TmpSignalConversionAtdSOC_ReadOutpor) -
            rtb_TmpSignalConversionAtVeBACR_P_BattPw) *
            OHSR_ac_B.sf_XDataFractions_d.fra) +
            rtb_TmpSignalConversionAtVeBACR_P_BattPw) - rtb_Merge1) * ((float32)
            Rte_Prm_KeOPTR_Cf_MaxEngPwrPerFuelFlow_KeOPTR_Cf_MaxEngPwrPerFuelFlow
            ())) - ((rtb_TmpSignalConversionAtVeTISR_n_InputS *
                     rtb_TmpSignalConversionAtVeOITR_M_OptInp) * 0.000104719758F))
            * ((float32)
               Rte_Prm_KeOPTR_r_EngPwrLossCostFactor_KeOPTR_r_EngPwrLossCostFactor
               ());

        /* Merge: '<S1232>/Merge' incorporates:
         *  Gain: '<S1265>/Gain'
         */
        VaOHSC_P_EngPwrLossCurrnt[0] = rtb_TmpSignalConversionAtVeBACR_P_BattPw;
        VaOHSC_P_EngPwrLossCurrnt[1] = rtb_TmpSignalConversionAtVeBACR_P_BattPw;
        VaOHSC_P_EngPwrLossCurrnt[2] = rtb_TmpSignalConversionAtVeBACR_P_BattPw;

        /* End of Outputs for SubSystem: '<S1232>/DOD' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S1232>/EngPwrLoss_Opt' incorporates:
         *  ActionPort: '<S1238>/Action Port'
         */
        /* Merge: '<S1232>/Merge' incorporates:
         *  Gain: '<S1274>/Gain'
         */
        VaOHSC_P_EngPwrLossCurrnt[0] = VeOHSC_P_OptEngPwrLoss_N;
        VaOHSC_P_EngPwrLossCurrnt[1] = VeOHSC_P_OptEngPwrLoss_M1;
        VaOHSC_P_EngPwrLossCurrnt[2] = VeOHSC_P_OptEngPwrLoss_M2;

        /* End of Outputs for SubSystem: '<S1232>/EngPwrLoss_Opt' */
        break;
    }

    tmp_2[0] = ((VaOHSC_P_EngPwrLossCurrnt[0] - VeOHSC_P_OptEngPwrLoss_N) *
                VeOHSC_r_EngPwrLossIntgrn_WgtFac) +
        OHSR_ac_DW.UnitDelay_DSTATE_hr[0];
    tmp_2[1] = ((VaOHSC_P_EngPwrLossCurrnt[1] - VeOHSC_P_OptEngPwrLoss_M1) *
                VeOHSC_r_EngPwrLossIntgrn_WgtFac) +
        OHSR_ac_DW.UnitDelay_DSTATE_hr[1];
    tmp_2[2] = ((VaOHSC_P_EngPwrLossCurrnt[2] - VeOHSC_P_OptEngPwrLoss_M2) *
                VeOHSC_r_EngPwrLossIntgrn_WgtFac) +
        OHSR_ac_DW.UnitDelay_DSTATE_hr[2];

    /* Lookup_n-D: '<S1229>/Vector' incorporates:
     *  Constant: '<S1235>/Constant'
     *  Constant: '<S1236>/Constant'
     *  Constant: '<S1246>/Calib'
     *  SignalConversion generated from: '<S2>/VeOSMR_n_TransOutSpd'
     *  SignalConversion generated from: '<S2>/VeVSDR_dn_StratNodot'
     *  Sum: '<S1218>/Summation'
     *  UnitDelay: '<S1218>/Unit Delay'
     */
    VeOHSC_r_DrvbltyFac_NVHLmtn = look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeOSMR_n_TransO,
         rtb_TmpSignalConversionAtVeVSDR_dn_Strat, ((const float32 *)
          &(KxOHSR_r_NVHLimitBlnd_DrvbltyFac[0])), ((const float32 *)
          &(KyOHSR_r_NVHLimitBlnd_DrvbltyFac[0])), ((const float32 *)
          &(KtOHSR_r_NVHLimitBlnd_DrvbltyFac[0])), OHSR_ac_ConstP.pooled15, 6U);

    /* Outputs for Atomic SubSystem: '<S1221>/Limiter' */
    for (i = 0; i < 3; i++)
    {
        /* RelationalOperator: '<S1220>/Not Equal' incorporates:
         *  UnitDelay: '<S1220>/Unit Delay'
         */
        loopCond = (VeOHSC_b_NVHLimitation_Actv[(i)] !=
                    OHSR_ac_DW.UnitDelay_DSTATE_e4[i]);

        /* Update for UnitDelay: '<S1220>/Unit Delay' */
        OHSR_ac_DW.UnitDelay_DSTATE_e4[i] = VeOHSC_b_NVHLimitation_Actv[(i)];

        /* Switch: '<S1218>/Switch1' incorporates:
         *  Constant: '<S1209>/Constant Value10'
         *  UnitDelay: '<S1218>/Unit Delay'
         */
        if (loopCond)
        {
            OHSR_ac_DW.UnitDelay_DSTATE_hr[i] = 0.0F;
        }
        else
        {
            OHSR_ac_DW.UnitDelay_DSTATE_hr[i] = tmp_2[i];
        }

        /* End of Switch: '<S1218>/Switch1' */

        /* MinMax: '<S1209>/MinMax3' incorporates:
         *  Constant: '<S1209>/Constant Value9'
         *  Constant: '<S1222>/Calib'
         *  Constant: '<S1224>/Calib'
         *  UnitDelay: '<S1218>/Unit Delay'
         */
        VaOHSC_E_EngEnrgyLoss[(i)] = fmaxf((HeOHSR_t_RngSel_dT *
            OHSR_ac_DW.UnitDelay_DSTATE_hr[i]) * KeOHSR_r_EngEnergyLoss_ConvFac,
            0.0F);
        VaOHSC_r_EngEnrgyFac_NVHLmtn[(i)] = look1_iflf_binlca_16a
            (VaOHSC_E_EngEnrgyLoss[(i)], ((const float32 *)
              &(KxOHSR_r_NVHLimitBlnd_EngEnrgyFac[0])), ((const float32 *)
              &(KtOHSR_r_NVHLimitBlnd_EngEnrgyFac[0])), 6U);

        /* Sum: '<S1209>/Sum' */
        rtb_Merge1 = (VeOHSC_r_BattEnrgyFac_NVHLmtn[(i)] +
                      VaOHSC_r_EngEnrgyFac_NVHLmtn[(i)]) +
            VeOHSC_r_DrvbltyFac_NVHLmtn;

        /* Switch: '<S1231>/Switch1' incorporates:
         *  Constant: '<S1209>/Constant Value6'
         *  RelationalOperator: '<S1231>/Relational Operator'
         */
        if (1.0F < rtb_Merge1)
        {
            /* UnitDelay: '<S834>/Unit Delay' */
            rtb_Merge1 = 1.0F;
        }

        /* End of Switch: '<S1231>/Switch1' */

        /* Switch: '<S1231>/Switch' incorporates:
         *  Constant: '<S1209>/Constant Value5'
         *  RelationalOperator: '<S1231>/Relational Operator1'
         */
        if (rtb_Merge1 > 0.0F)
        {
            /* Switch: '<S1231>/Switch' */
            rtb_TmpSignalConversionAtVeVSDR_dn_Strat = rtb_Merge1;
        }
        else
        {
            /* Switch: '<S1231>/Switch' */
            rtb_TmpSignalConversionAtVeVSDR_dn_Strat = 0.0F;
        }

        /* End of Switch: '<S1231>/Switch' */

        /* UnitDelay: '<S834>/Unit Delay' incorporates:
         *  UnitDelay: '<S1221>/Unit Delay'
         */
        rtb_Merge1 = OHSR_ac_DW.UnitDelay_DSTATE_am[i];
        if (!VeOHSC_b_NVHLimitation_Actv[(i)])
        {
            rtb_TmpSignalConversionAtVeVSDR_dn_Strat = 0.0F;
        }

        /* Sum: '<S1221>/Sum2' incorporates:
         *  Constant: '<S1209>/Constant Value7'
         */
        rtb_TmpSignalConversionAtVeVSDR_dn_Strat -= rtb_Merge1;

        /* Switch: '<S1233>/Switch1' incorporates:
         *  Constant: '<S1226>/Calib'
         *  RelationalOperator: '<S1233>/Relational Operator'
         */
        if (KeOHSR_r_NVHLimtnBlndFac_MaxIncRate <
                rtb_TmpSignalConversionAtVeVSDR_dn_Strat)
        {
            /* Switch: '<S824>/Switch7' */
            rtb_TmpSignalConversionAtVeVSDR_dn_Strat =
                KeOHSR_r_NVHLimtnBlndFac_MaxIncRate;
        }

        /* End of Switch: '<S1233>/Switch1' */

        /* Switch: '<S1233>/Switch' incorporates:
         *  Constant: '<S1225>/Calib'
         *  RelationalOperator: '<S1233>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeVSDR_dn_Strat >
                KeOHSR_r_NVHLimtnBlndFac_MaxDecRate)
        {
            rtb_TmpSignalConversionAtVeOITR_M_OptInp =
                rtb_TmpSignalConversionAtVeVSDR_dn_Strat;
        }
        else
        {
            rtb_TmpSignalConversionAtVeOITR_M_OptInp =
                KeOHSR_r_NVHLimtnBlndFac_MaxDecRate;
        }

        /* End of Switch: '<S1233>/Switch' */

        /* Sum: '<S1221>/Sum3' */
        VaOHSC_r_BlndFctr_NVHLmtn[(i)] =
            rtb_TmpSignalConversionAtVeOITR_M_OptInp + rtb_Merge1;

        /* Update for UnitDelay: '<S1221>/Unit Delay' */
        OHSR_ac_DW.UnitDelay_DSTATE_am[i] = VaOHSC_r_BlndFctr_NVHLmtn[(i)];
        rtb_Sum1_li[i] = OHSR_ac_DW.UnitDelay_DSTATE_j[i];
        rtb_Switch_mp[i] = rtb_TmpSignalConversionAtVeVSDR_dn_Strat;
    }

    /* End of Outputs for SubSystem: '<S1221>/Limiter' */

    /* Sum: '<S1209>/Sum3' incorporates:
     *  Constant: '<S1209>/Constant Value7'
     *  Constant: '<S1209>/Constant Value8'
     *  Sum: '<S1209>/Sum'
     *  Switch: '<S1231>/Switch'
     *  UnitDelay: '<S1210>/Unit Delay'
     */
    VaOHSC_n_NiMaxNVH_PostBlndng[0] = ((1.0F - VaOHSC_r_BlndFctr_NVHLmtn[0]) *
        VaOHSC_n_NiMaxNVH_Limit[0]) + (VaOHSC_r_BlndFctr_NVHLmtn[0] *
        VeOHSC_n_OptInputSpdDsrd_N);
    VaOHSC_n_NiMaxNVH_PostBlndng[1] = ((1.0F - VaOHSC_r_BlndFctr_NVHLmtn[1]) *
        VaOHSC_n_NiMaxNVH_Limit[1]) + (VaOHSC_r_BlndFctr_NVHLmtn[1] *
        VeOHSC_n_OptInputSpdDsrd_M1);
    VaOHSC_n_NiMaxNVH_PostBlndng[2] = ((1.0F - VaOHSC_r_BlndFctr_NVHLmtn[2]) *
        VaOHSC_n_NiMaxNVH_Limit[2]) + (VaOHSC_r_BlndFctr_NVHLmtn[2] *
        VeOHSC_n_OptInputSpdDsrd_M2);

    /* MinMax: '<S936>/MinMax1' incorporates:
     *  UnitDelay: '<S534>/Unit Delay2'
     *  UnitDelay: '<S534>/Unit Delay3'
     *  UnitDelay: '<S534>/Unit Delay6'
     */
    VaOHSC_n_NiMaxNVH_Final[0] = fmaxf(VaOHSC_n_NiMaxNVH_PostBlndng[0],
        OHSR_ac_DW.UnitDelay6_DSTATE);
    VaOHSC_n_NiMaxNVH_Final[1] = fmaxf(VaOHSC_n_NiMaxNVH_PostBlndng[1],
        OHSR_ac_DW.UnitDelay2_DSTATE);
    VaOHSC_n_NiMaxNVH_Final[2] = fmaxf(VaOHSC_n_NiMaxNVH_PostBlndng[2],
        OHSR_ac_DW.UnitDelay3_DSTATE);
    for (i = 0; i < 3; i++)
    {
        rtb_Merge1 = rtb_Sum1_li[i];

        /* Switch: '<S1210>/Switch1' incorporates:
         *  Constant: '<S1214>/Calib'
         *  Product: '<S1210>/Multiplication'
         *  Sum: '<S1210>/Subtraction'
         *  Sum: '<S1210>/Summation'
         */
        VaOHSC_n_NiMaxNVH_Final_Fltrd[(i)] = ((VaOHSC_n_NiMaxNVH_Final[(i)] -
            rtb_Merge1) * KeOHSR_k_NiMaxNVH_FltCoeff) + rtb_Merge1;

        /* Update for UnitDelay: '<S1210>/Unit Delay' */
        OHSR_ac_DW.UnitDelay_DSTATE_j[i] = VaOHSC_n_NiMaxNVH_Final_Fltrd[(i)];
    }

    if ((rtb_Switch3_js && (KaOHSR_b_NVHLimtnNiMaxArb_Enbl[0])) &&
            ((KaOHSR_b_ArbProfileChck_Ovrd[0]) || (!VeOHSC_b_ArbOpt_N)))
    {
        /* VariantMerge generated from: '<S936>/XeOHSR_b_EngCalc_Enbl' */
        rtb_VariantMerge_For_Variant_Source_Xe_k[0] = fminf
            (VaOHSC_n_NiMaxNVH_Final_Fltrd[0], VeOHSC_n_NiMax_N);
    }
    else
    {
        /* VariantMerge generated from: '<S936>/XeOHSR_b_EngCalc_Enbl' */
        rtb_VariantMerge_For_Variant_Source_Xe_k[0] = VeOHSC_n_NiMax_N;
    }

    if ((rtb_Switch3_js && (KaOHSR_b_NVHLimtnNiMaxArb_Enbl[1])) &&
            ((KaOHSR_b_ArbProfileChck_Ovrd[1]) || (!VeOHSC_b_ArbOpt_M1)))
    {
        /* VariantMerge generated from: '<S936>/XeOHSR_b_EngCalc_Enbl' */
        rtb_VariantMerge_For_Variant_Source_Xe_k[1] = fminf
            (VaOHSC_n_NiMaxNVH_Final_Fltrd[1], VeOHSC_n_NiMax_M1);
    }
    else
    {
        /* VariantMerge generated from: '<S936>/XeOHSR_b_EngCalc_Enbl' */
        rtb_VariantMerge_For_Variant_Source_Xe_k[1] = VeOHSC_n_NiMax_M1;
    }

    if ((rtb_Switch3_js && (KaOHSR_b_NVHLimtnNiMaxArb_Enbl[2])) &&
            ((KaOHSR_b_ArbProfileChck_Ovrd[2]) || (!VeOHSC_b_ArbOpt_M2)))
    {
        /* VariantMerge generated from: '<S936>/XeOHSR_b_EngCalc_Enbl' */
        rtb_VariantMerge_For_Variant_Source_Xe_k[2] = fminf
            (VaOHSC_n_NiMaxNVH_Final_Fltrd[2], VeOHSC_n_NiMax_M2);
    }
    else
    {
        /* VariantMerge generated from: '<S936>/XeOHSR_b_EngCalc_Enbl' */
        rtb_VariantMerge_For_Variant_Source_Xe_k[2] = VeOHSC_n_NiMax_M2;
    }

    /* End of Outputs for SubSystem: '<S936>/Hysteresis' */
    /* End of Outputs for SubSystem: '<S1209>/EdgeBi' */
    /* End of Outputs for SubSystem: '<S1209>/Accumulator Reset' */
    /* End of Outputs for SubSystem: '<S1209>/EdgeBi1' */
    /* End of Outputs for SubSystem: '<S1209>/Accumulator Reset1' */
    /* End of Outputs for SubSystem: '<S1209>/Limiter1' */
    /* End of Outputs for SubSystem: '<S1209>/GradientLimiter' */
    /* End of Outputs for SubSystem: '<S936>/Digital Lowpass Reset Enabled' */
#else

    /* VariantMerge generated from: '<S936>/XeOHSR_b_EngCalc_Enbl' incorporates:
     *  SignalConversion generated from: '<S936>/XeOHSR_b_EngCalc_Enbl'
     */
    rtb_VariantMerge_For_Variant_Source_Xe_k[0] = VeOHSC_n_NiMax_N;
    rtb_VariantMerge_For_Variant_Source_Xe_k[1] = VeOHSC_n_NiMax_M1;
    rtb_VariantMerge_For_Variant_Source_Xe_k[2] = VeOHSC_n_NiMax_M2;

#endif

    /* End of If: '<S1232>/If' */

    /* Outputs for Atomic SubSystem: '<S555>/OHSC_InputSpeedFilters' */
    /* Logic: '<S828>/Logical8' incorporates:
     *  Constant: '<S887>/Calib'
     *  Constant: '<S888>/Calib'
     *  Constant: '<S889>/Calib'
     *  Constant: '<S890>/Calib'
     *  Constant: '<S891>/Calib'
     *  Constant: '<S892>/Calib'
     *  Logic: '<S828>/Logical6'
     *  Logic: '<S828>/Logical7'
     *  RelationalOperator: '<S828>/Comparison10'
     *  RelationalOperator: '<S828>/Comparison7'
     *  RelationalOperator: '<S828>/Comparison8'
     *  RelationalOperator: '<S828>/Comparison9'
     *  Sum: '<S828>/Sum5'
     *  Sum: '<S828>/Sum6'
     *  Sum: '<S828>/Sum7'
     *  Sum: '<S828>/Sum8'
     *  UnitDelay: '<S828>/Unit Delay4'
     *  UnitDelay: '<S828>/Unit Delay5'
     *  UnitDelay: '<S828>/Unit Delay6'
     *  UnitDelay: '<S828>/Unit Delay7'
     */
    VeOHSC_b_PwrChgNiM2HoldEnbl = (((((OHSR_ac_DW.UnitDelay5_DSTATE_d +
        KeOHSR_n_NiM2ChangeThrsh_1) > rtb_TmpSignalConversionAtVeOSMR_n_Inp_of) &&
        (KeOHSR_b_EnablePwrChgNiM2_1)) && ((OHSR_ac_DW.UnitDelay4_DSTATE_n +
        KeOHSR_Pct_AcclPdlChgM2Thrsh_1) <
        rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP)) ||
        (((rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP <
           (OHSR_ac_DW.UnitDelay7_DSTATE + KeOHSR_Pct_AcclPdlChgM2Thrsh_2)) &&
          (KeOHSR_b_EnablePwrChgNiM2_2)) &&
         (rtb_TmpSignalConversionAtVeOSMR_n_Inp_of >
          (OHSR_ac_DW.UnitDelay6_DSTATE_f + KeOHSR_n_NiM2ChangeThrsh_2))));

    /* Sum: '<S818>/Sum2' incorporates:
     *  Constant: '<S825>/Calib'
     */
    rtb_TmpSignalConversionAtVeVSDR_dn_Strat = KeOHSR_n_NiMaxM2_Extend +
        rtb_VariantMerge_For_Variant_Source_Xe_k[2];

    /* Outputs for Atomic SubSystem: '<S818>/Digital Lowpass Reset Enabled4' */
    /* Switch: '<S821>/Switch1' incorporates:
     *  Logic: '<S818>/Logical6'
     *  Switch: '<S818>/Switch6'
     *  UnitDelay: '<S818>/Unit Delay7'
     */
    if (!OHSR_ac_DW.UnitDelay7_DSTATE_g)
    {
        /* Switch: '<S818>/Switch6' */
        if (!VeOHSC_b_PwrChgNiM2HoldEnbl)
        {
            /* Switch: '<S821>/Switch1' */
            OHSR_ac_DW.UnitDelay9_DSTATE =
                rtb_TmpSignalConversionAtVeOSMR_n_Inp_of;
        }
    }
    else
    {
        if (!VeOHSC_b_PwrChgNiM2HoldEnbl)
        {
            /* Switch: '<S818>/Switch6' */
            OHSR_ac_DW.UnitDelay9_DSTATE =
                rtb_TmpSignalConversionAtVeOSMR_n_Inp_of;
        }

        /* Switch: '<S818>/Switch6' incorporates:
         *  Product: '<S821>/Multiplication'
         *  Sum: '<S821>/Subtraction'
         *  Sum: '<S821>/Summation'
         *  Switch: '<S821>/Switch1'
         *  UnitDelay: '<S556>/Unit Delay1'
         *  UnitDelay: '<S821>/Unit Delay'
         */
        OHSR_ac_DW.UnitDelay9_DSTATE = ((OHSR_ac_DW.UnitDelay9_DSTATE -
            VeOHSC_n_OptEngSpd_M2_Filtered) * OHSR_ac_DW.UnitDelay1_DSTATE_p) +
            VeOHSC_n_OptEngSpd_M2_Filtered;
    }

    /* End of Switch: '<S821>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S821>/Limiter' */
    /* Switch: '<S830>/Switch1' incorporates:
     *  RelationalOperator: '<S830>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeVSDR_dn_Strat < OHSR_ac_DW.UnitDelay9_DSTATE)
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = rtb_TmpSignalConversionAtVeVSDR_dn_Strat;
    }
    else
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = OHSR_ac_DW.UnitDelay9_DSTATE;
    }

    /* End of Switch: '<S830>/Switch1' */

    /* Switch: '<S830>/Switch' incorporates:
     *  RelationalOperator: '<S830>/Relational Operator1'
     */
    if (rtb_Switch5_fw > rtb_VariantMerge_For_Variant_Source_XeOH[2])
    {
        /* Switch: '<S830>/Switch' */
        VeOHSC_n_OptEngSpd_M2_Filtered = rtb_Switch5_fw;
    }
    else
    {
        /* Switch: '<S830>/Switch' */
        VeOHSC_n_OptEngSpd_M2_Filtered =
            rtb_VariantMerge_For_Variant_Source_XeOH[2];
    }

    /* End of Switch: '<S830>/Switch' */
    /* End of Outputs for SubSystem: '<S821>/Limiter' */
    /* End of Outputs for SubSystem: '<S818>/Digital Lowpass Reset Enabled4' */

    /* Logic: '<S829>/Logical8' incorporates:
     *  Constant: '<S893>/Calib'
     *  Constant: '<S894>/Calib'
     *  Constant: '<S895>/Calib'
     *  Constant: '<S896>/Calib'
     *  Constant: '<S897>/Calib'
     *  Constant: '<S898>/Calib'
     *  Logic: '<S829>/Logical6'
     *  Logic: '<S829>/Logical7'
     *  RelationalOperator: '<S829>/Comparison10'
     *  RelationalOperator: '<S829>/Comparison7'
     *  RelationalOperator: '<S829>/Comparison8'
     *  RelationalOperator: '<S829>/Comparison9'
     *  Sum: '<S829>/Sum5'
     *  Sum: '<S829>/Sum6'
     *  Sum: '<S829>/Sum7'
     *  Sum: '<S829>/Sum8'
     *  UnitDelay: '<S829>/Unit Delay4'
     *  UnitDelay: '<S829>/Unit Delay5'
     *  UnitDelay: '<S829>/Unit Delay6'
     *  UnitDelay: '<S829>/Unit Delay7'
     */
    VeOHSC_b_PwrChgNi_NHoldEnbl = (((((OHSR_ac_DW.UnitDelay5_DSTATE_h +
        KeOHSR_n_Ni_NChangeThrsh_1) > rtb_TmpSignalConversionAtVeESPR_n_TCMEng) &&
        (KeOHSR_b_EnablePwrChgNi_N_1)) && ((OHSR_ac_DW.UnitDelay4_DSTATE_d +
        KeOHSR_Pct_AcclPdlChg_NThrsh_1) <
        rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP)) ||
        (((rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP <
           (OHSR_ac_DW.UnitDelay7_DSTATE_l + KeOHSR_Pct_AcclPdlChg_NThrsh_2)) &&
          (KeOHSR_b_EnablePwrChgNi_N_2)) &&
         (rtb_TmpSignalConversionAtVeESPR_n_TCMEng >
          (OHSR_ac_DW.UnitDelay6_DSTATE_a + KeOHSR_n_Ni_NChangeThrsh_2))));

    /* Outputs for Atomic SubSystem: '<S818>/Digital Lowpass Reset Enabled6' */
    /* Switch: '<S822>/Switch1' incorporates:
     *  Logic: '<S818>/Logical8'
     *  Switch: '<S818>/Switch2'
     *  UnitDelay: '<S818>/Unit Delay12'
     */
    if (!OHSR_ac_DW.UnitDelay12_DSTATE)
    {
        /* Switch: '<S818>/Switch2' */
        if (!VeOHSC_b_PwrChgNi_NHoldEnbl)
        {
            /* Switch: '<S822>/Switch1' */
            OHSR_ac_DW.UnitDelay11_DSTATE =
                rtb_TmpSignalConversionAtVeESPR_n_TCMEng;
        }
    }
    else
    {
        if (!VeOHSC_b_PwrChgNi_NHoldEnbl)
        {
            /* Switch: '<S818>/Switch2' */
            OHSR_ac_DW.UnitDelay11_DSTATE =
                rtb_TmpSignalConversionAtVeESPR_n_TCMEng;
        }

        /* Switch: '<S818>/Switch2' incorporates:
         *  Product: '<S822>/Multiplication'
         *  Sum: '<S822>/Subtraction'
         *  Sum: '<S822>/Summation'
         *  Switch: '<S822>/Switch1'
         *  UnitDelay: '<S556>/Unit Delay2'
         *  UnitDelay: '<S822>/Unit Delay'
         */
        OHSR_ac_DW.UnitDelay11_DSTATE = ((OHSR_ac_DW.UnitDelay11_DSTATE -
            VeOHSC_n_OptEngSpd_N_Filtered) * OHSR_ac_DW.UnitDelay2_DSTATE_p) +
            VeOHSC_n_OptEngSpd_N_Filtered;
    }

    /* End of Switch: '<S822>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S822>/Limiter' */
    /* Switch: '<S831>/Switch1' incorporates:
     *  RelationalOperator: '<S831>/Relational Operator'
     */
    if (rtb_VariantMerge_For_Variant_Source_Xe_k[0] <
            OHSR_ac_DW.UnitDelay11_DSTATE)
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = rtb_VariantMerge_For_Variant_Source_Xe_k[0];
    }
    else
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = OHSR_ac_DW.UnitDelay11_DSTATE;
    }

    /* End of Switch: '<S831>/Switch1' */

    /* Switch: '<S831>/Switch' incorporates:
     *  RelationalOperator: '<S831>/Relational Operator1'
     */
    if (rtb_Switch5_fw > rtb_VariantMerge_For_Variant_Source_XeOH[0])
    {
        /* Switch: '<S831>/Switch' */
        VeOHSC_n_OptEngSpd_N_Filtered = rtb_Switch5_fw;
    }
    else
    {
        /* Switch: '<S831>/Switch' */
        VeOHSC_n_OptEngSpd_N_Filtered =
            rtb_VariantMerge_For_Variant_Source_XeOH[0];
    }

    /* End of Switch: '<S831>/Switch' */
    /* End of Outputs for SubSystem: '<S822>/Limiter' */
    /* End of Outputs for SubSystem: '<S818>/Digital Lowpass Reset Enabled6' */

    /* Logic: '<S827>/Logical6' incorporates:
     *  Constant: '<S881>/Calib'
     *  Constant: '<S882>/Calib'
     *  Constant: '<S883>/Calib'
     *  Constant: '<S884>/Calib'
     *  Constant: '<S885>/Calib'
     *  Constant: '<S886>/Calib'
     *  Logic: '<S827>/Logical1'
     *  Logic: '<S827>/Logical2'
     *  RelationalOperator: '<S827>/Comparison1'
     *  RelationalOperator: '<S827>/Comparison2'
     *  RelationalOperator: '<S827>/Comparison3'
     *  RelationalOperator: '<S827>/Comparison4'
     *  Sum: '<S827>/Sum1'
     *  Sum: '<S827>/Sum2'
     *  Sum: '<S827>/Sum3'
     *  Sum: '<S827>/Sum5'
     *  UnitDelay: '<S827>/Unit Delay'
     *  UnitDelay: '<S827>/Unit Delay1'
     *  UnitDelay: '<S827>/Unit Delay2'
     *  UnitDelay: '<S827>/Unit Delay4'
     */
    VeOHSC_b_PwrChgNiM1HoldEnbl = (((((OHSR_ac_DW.UnitDelay1_DSTATE_k +
        KeOHSR_n_NiM1ChangeThrsh_1) > rtb_TmpSignalConversionAtVeVSDR_n_NTurbO) &&
        (KeOHSR_b_EnablePwrChgNiM1_1)) && ((OHSR_ac_DW.UnitDelay_DSTATE_g0 +
        KeOHSR_Pct_AcclPdlChgM1Thrsh_1) <
        rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP)) ||
        (((rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP <
           (OHSR_ac_DW.UnitDelay4_DSTATE_k + KeOHSR_Pct_AcclPdlChgM1Thrsh_2)) &&
          (KeOHSR_b_EnablePwrChgNiM1_2)) &&
         (rtb_TmpSignalConversionAtVeVSDR_n_NTurbO >
          (OHSR_ac_DW.UnitDelay2_DSTATE_f + KeOHSR_n_NiM1ChangeThrsh_2))));

    /* Outputs for Atomic SubSystem: '<S818>/Digital Lowpass Reset Enabled7' */
    /* Switch: '<S823>/Switch1' incorporates:
     *  Logic: '<S818>/Logical5'
     *  Switch: '<S818>/Switch5'
     *  UnitDelay: '<S818>/Unit Delay10'
     */
    if (!OHSR_ac_DW.UnitDelay10_DSTATE)
    {
        /* Switch: '<S818>/Switch5' */
        if (!VeOHSC_b_PwrChgNiM1HoldEnbl)
        {
            /* Switch: '<S823>/Switch1' */
            OHSR_ac_DW.UnitDelay8_DSTATE =
                rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;
        }
    }
    else
    {
        if (!VeOHSC_b_PwrChgNiM1HoldEnbl)
        {
            /* Switch: '<S818>/Switch5' */
            OHSR_ac_DW.UnitDelay8_DSTATE =
                rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;
        }

        /* Switch: '<S818>/Switch5' incorporates:
         *  Product: '<S823>/Multiplication'
         *  Sum: '<S823>/Subtraction'
         *  Sum: '<S823>/Summation'
         *  Switch: '<S823>/Switch1'
         *  UnitDelay: '<S556>/Unit Delay3'
         *  UnitDelay: '<S823>/Unit Delay'
         */
        OHSR_ac_DW.UnitDelay8_DSTATE = ((OHSR_ac_DW.UnitDelay8_DSTATE -
            VeOHSC_n_OptEngSpd_M1_Filtered) * OHSR_ac_DW.UnitDelay3_DSTATE_n) +
            VeOHSC_n_OptEngSpd_M1_Filtered;
    }

    /* End of Switch: '<S823>/Switch1' */
    /* End of Outputs for SubSystem: '<S818>/Digital Lowpass Reset Enabled7' */
    /* End of Outputs for SubSystem: '<S555>/OHSC_InputSpeedFilters' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeOSMR_i_DrvPrg_AutoRevMaxType' */
    (void)Rte_Read_VeOSMR_i_DrvPrg_AutoRevMaxType_Value(&tmpRead_n);

    /* Inport: '<Root>/VeEOCR_b_ColdCtrl_Raw' */
    (void)Rte_Read_VeEOCR_b_ColdCtrl_Raw_Value(&rtb_NotEqual_fz);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTED'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/OHSC_Range_Selection'
     */
    /* Outputs for Atomic SubSystem: '<S555>/OHSC_InputSpeedFilters' */
    /* Outputs for Atomic SubSystem: '<S818>/Digital Lowpass Reset Enabled7' */
    /* Outputs for Atomic SubSystem: '<S823>/Limiter' */
    /* Switch: '<S832>/Switch1' incorporates:
     *  RelationalOperator: '<S832>/Relational Operator'
     */
    if (rtb_VariantMerge_For_Variant_Source_Xe_k[1] <
            OHSR_ac_DW.UnitDelay8_DSTATE)
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = rtb_VariantMerge_For_Variant_Source_Xe_k[1];
    }
    else
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = OHSR_ac_DW.UnitDelay8_DSTATE;
    }

    /* End of Switch: '<S832>/Switch1' */

    /* Switch: '<S832>/Switch' incorporates:
     *  RelationalOperator: '<S832>/Relational Operator1'
     */
    if (rtb_Switch5_fw > rtb_VariantMerge_For_Variant_Source_XeOH[1])
    {
        /* Switch: '<S832>/Switch' */
        VeOHSC_n_OptEngSpd_M1_Filtered = rtb_Switch5_fw;
    }
    else
    {
        /* Switch: '<S832>/Switch' */
        VeOHSC_n_OptEngSpd_M1_Filtered =
            rtb_VariantMerge_For_Variant_Source_XeOH[1];
    }

    /* End of Switch: '<S832>/Switch' */
    /* End of Outputs for SubSystem: '<S823>/Limiter' */
    /* End of Outputs for SubSystem: '<S818>/Digital Lowpass Reset Enabled7' */

    /* Outputs for Atomic SubSystem: '<S818>/InputSpd_PdlBsd' */
    /* Logic: '<S824>/Logical1' incorporates:
     *  Constant: '<S840>/Calib'
     *  Constant: '<S841>/Calib'
     *  Constant: '<S845>/Calib'
     *  Constant: '<S846>/Calib'
     *  Constant: '<S847>/Calib'
     *  Constant: '<S852>/Constant'
     *  Constant: '<S853>/Constant'
     *  DataTypeConversion: '<S824>/Data Type Conversion1'
     *  DataTypeConversion: '<S824>/Data Type Conversion2'
     *  Logic: '<S824>/Logical'
     *  Logic: '<S824>/Logical10'
     *  Logic: '<S824>/Logical11'
     *  Logic: '<S824>/Logical3'
     *  Logic: '<S824>/Logical5'
     *  Logic: '<S824>/Logical6'
     *  Logic: '<S824>/Logical8'
     *  Logic: '<S824>/Logical9'
     *  RelationalOperator: '<S824>/Comparison1'
     *  RelationalOperator: '<S824>/Comparison2'
     *  RelationalOperator: '<S824>/Comparison6'
     *  Selector: '<S824>/Selector1'
     *  Selector: '<S824>/Selector3'
     *  SignalConversion generated from: '<S2>/VeFWDR_e_Tcase_Stat'
     *  SignalConversion generated from: '<S2>/VeTRNR_e_ActualGear'
     *  SignalConversion generated from: '<S2>/VeTRNR_e_TargetGear'
     */
    VeOHSC_b_AutorevCondnActv = (((((((((uint32)
        rtb_TmpSignalConversionAtVeOSMR_e_Steady) == CeOSMR_e_TransSt_Park) ||
        (((uint32)rtb_TmpSignalConversionAtVeOSMR_e_Steady) ==
         CeOSMR_e_TransSt_Neutral)) && ((KaOHSR_b_AlwdStsActTgt_PdlBsdNi
        [(rtb_TmpSignalConversionAtVeTRNR_e_Target)]) &&
        (rtb_TmpSignalConversionAtVeTRNR_e_Target ==
         rtb_TmpSignalConversionAtVeTRNR_e_Actual))) ||
        (KaOHSR_b_EnblILENeut_TCase[(rtb_TmpSignalConversionAtVeFWDR_e_Tcase_)]))
        && (rtb_TmpSignalConversionAtVeSTRR_b_EngOff ||
            (KeOHSR_b_ShftEfftRdctn_EnblRev))) && (rtb_AND_er ||
        (KeOHSR_b_AutoRevEnbl_OvrrdTcaseN4HiShift))) && ((!rtb_NotEqual_fz) ||
        (KeOHSR_b_AutoRevEnbl_OvrrdCatWarmUp)));
    for (i = 0; i < 3; i++)
    {
        /* Logic: '<S824>/AND' incorporates:
         *  Constant: '<S842>/Calib'
         */
        VaOHSC_b_Autorev_Enbld[(i)] = ((VeOHSC_b_AutorevCondnActv) &&
            (KaOHSR_b_EnblPedlBsdNi[(i)]));
    }

    /* Logic: '<S824>/AND1' */
    rtb_GreaterThan1[0] = ((VaOHSC_b_Autorev_Enbld[0]) &&
                           (VeOHSC_b_FinalAllwdDsrd_IdxN));
    rtb_GreaterThan1[1] = ((VaOHSC_b_Autorev_Enbld[1]) &&
                           (VeOHSC_b_FinalAllwdDsrd_IdxM1));
    rtb_GreaterThan1[2] = ((VaOHSC_b_Autorev_Enbld[2]) &&
                           (VeOHSC_b_FinalAllwdDsrd_IdxM2));

    /* Outputs for Atomic SubSystem: '<S824>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S835>/Switch1' incorporates:
     *  Constant: '<S824>/Constant Value1'
     *  Constant: '<S848>/Calib'
     *  Product: '<S824>/Product'
     *  Product: '<S835>/Multiplication'
     *  Sum: '<S835>/Subtraction'
     *  Sum: '<S835>/Summation'
     *  UnitDelay: '<S835>/Unit Delay'
     */
    VeOHSC_Pct_AutoRevPedal = (((rtb_TmpSignalConversionAtVeAPSR_Pct_Acce *
        0.01F) - VeOHSC_Pct_AutoRevPedal) * KeOHSR_k_AutorevPdl_FltCoeff) +
        VeOHSC_Pct_AutoRevPedal;

    /* End of Outputs for SubSystem: '<S824>/Digital Lowpass Reset Enabled' */
    for (i = 0; i < 2; i++)
    {
        /* Switch: '<S824>/Switch2' */
        if (rtb_GreaterThan1[i])
        {
            /* Switch: '<S824>/Switch7' */
            rtb_Switch_mp[i] = rtb_VariantMerge_For_Variant_Source_Xe_k[i];
        }
        else
        {
            /* Switch: '<S824>/Switch7' incorporates:
             *  Constant: '<S824>/Constant Value2'
             */
            rtb_Switch_mp[i] = 9999.0F;
        }
    }

    /* Switch: '<S824>/Switch2' */
    if (rtb_GreaterThan1[2])
    {
        /* Switch: '<S824>/Switch7' */
        rtb_Switch_mp[2] = rtb_TmpSignalConversionAtVeVSDR_dn_Strat;
    }
    else
    {
        /* Switch: '<S824>/Switch7' incorporates:
         *  Constant: '<S824>/Constant Value2'
         */
        rtb_Switch_mp[2] = 9999.0F;
    }

    /* MinMax: '<S824>/MinMax10' */
    rtb_TmpSignalConversionAtVeAPSR_Pct_Acce = rtb_Switch_mp[0];
    for (i = 0; i < 2; i++)
    {
        rtb_TmpSignalConversionAtVeAPSR_Pct_Acce = fminf
            (rtb_TmpSignalConversionAtVeAPSR_Pct_Acce, rtb_Switch_mp[i + 1]);
    }

    /* MinMax: '<S824>/MinMax5' incorporates:
     *  Constant: '<S843>/Calib'
     *  Constant: '<S849>/Calib'
     *  Lookup_n-D: '<S851>/Vector'
     *  MinMax: '<S824>/MinMax10'
     *  Selector: '<S824>/Selector2'
     *  SignalConversion generated from: '<S2>/VeOSMR_n_TransOutSpd'
     *  Sum: '<S824>/Sum4'
     */
    VeOHSC_n_NiMax_Autorev = fminf(fminf(KaOHSR_n_AutoRevMaxSpdLmt[(tmpRead_n)],
        rtb_TmpSignalConversionAtVeAPSR_Pct_Acce -
        KeOHSR_n_PdlBsdNi_OffsetMaxSpd), look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeOSMR_n_TransO, ((const float32 *)
        &(KxOHSR_n_PdlBsdNi_MaxSpd[0])), ((const float32 *)
        &(KtOHSR_n_PdlBsdNi_MaxSpd[0])), 6U));

    /* Switch: '<S824>/Switch4' */
    if (rtb_GreaterThan1[0])
    {
        /* Switch: '<S824>/Switch7' */
        rtb_Switch_mp[0] = VeOHSC_n_OptEngSpd_N_Filtered;
    }
    else
    {
        /* Switch: '<S824>/Switch7' incorporates:
         *  Constant: '<S824>/Constant Value3'
         */
        rtb_Switch_mp[0] = 9999.0F;
    }

    if (rtb_GreaterThan1[1])
    {
        /* Switch: '<S824>/Switch7' */
        rtb_Switch_mp[1] = VeOHSC_n_OptEngSpd_M1_Filtered;
    }
    else
    {
        /* Switch: '<S824>/Switch7' incorporates:
         *  Constant: '<S824>/Constant Value3'
         */
        rtb_Switch_mp[1] = 9999.0F;
    }

    if (rtb_GreaterThan1[2])
    {
        /* Switch: '<S824>/Switch7' */
        rtb_Switch_mp[2] = VeOHSC_n_OptEngSpd_M2_Filtered;
    }
    else
    {
        /* Switch: '<S824>/Switch7' incorporates:
         *  Constant: '<S824>/Constant Value3'
         */
        rtb_Switch_mp[2] = 9999.0F;
    }

    /* End of Switch: '<S824>/Switch4' */

    /* MinMax: '<S824>/MinMax1' */
    VeOHSC_n_NiMin_Autorev = rtb_Switch_mp[0];
    for (i = 0; i < 2; i++)
    {
        VeOHSC_n_NiMin_Autorev = fminf(VeOHSC_n_NiMin_Autorev, rtb_Switch_mp[i +
            1]);
    }

    /* End of MinMax: '<S824>/MinMax1' */

    /* Sum: '<S824>/Sum3' incorporates:
     *  Product: '<S824>/Product1'
     *  Sum: '<S824>/Sum1'
     */
    VeOHSC_n_EngSpdDsrd_Autorev = ((VeOHSC_n_NiMax_Autorev -
        VeOHSC_n_NiMin_Autorev) * VeOHSC_Pct_AutoRevPedal) +
        VeOHSC_n_NiMin_Autorev;

    /* Switch: '<S833>/Switch1' incorporates:
     *  Constant: '<S867>/Calib'
     *  Constant: '<S868>/Calib'
     *  Constant: '<S869>/Calib'
     *  Logic: '<S833>/Logical Operator3'
     *  RelationalOperator: '<S833>/Relational Operator'
     */
    if ((VeOHSC_n_EngSpdDsrd_Autorev > KeOHSR_n_AutorevMaxSpdThd_CompPrtctn) &&
            (VeOHSC_b_AutorevCondnActv))
    {
        rtb_Merge1 = KeOHSR_r_AutorevMaxSpd_CntrIncFac;
    }
    else
    {
        rtb_Merge1 = KeOHSR_r_AutorevMaxSpd_CntrDecFac;
    }

    /* End of Switch: '<S833>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S833>/Accumulator Reset Limited' */
    /* Sum: '<S855>/Summation' incorporates:
     *  Constant: '<S856>/Calib'
     *  Product: '<S833>/Product'
     *  UnitDelay: '<S855>/Unit Delay'
     */
    rtb_Switch5_fw = (HeOHSR_t_RngSel_dT * rtb_Merge1) +
        VeOHSC_r_AutorevMaxSpd_Counter;

    /* Outputs for Atomic SubSystem: '<S855>/Limiter' */
    /* Switch: '<S872>/Switch1' incorporates:
     *  Constant: '<S870>/Calib'
     *  RelationalOperator: '<S872>/Relational Operator'
     */
    if (KeOHSR_r_Autorev_CounterMaxLimit < rtb_Switch5_fw)
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = KeOHSR_r_Autorev_CounterMaxLimit;
    }

    /* End of Switch: '<S872>/Switch1' */

    /* Switch: '<S872>/Switch' incorporates:
     *  Constant: '<S833>/Constant2'
     *  RelationalOperator: '<S872>/Relational Operator1'
     */
    if (rtb_Switch5_fw > 0.0F)
    {
        /* Switch: '<S855>/Switch1' */
        VeOHSC_r_AutorevMaxSpd_Counter = rtb_Switch5_fw;
    }
    else
    {
        /* Switch: '<S855>/Switch1' */
        VeOHSC_r_AutorevMaxSpd_Counter = 0.0F;
    }

    /* End of Switch: '<S872>/Switch' */
    /* End of Outputs for SubSystem: '<S855>/Limiter' */
    /* End of Outputs for SubSystem: '<S833>/Accumulator Reset Limited' */

    /* Outputs for Atomic SubSystem: '<S833>/Hysteresis' */
    /* Switch: '<S857>/Switch1' incorporates:
     *  Constant: '<S857>/Constant Value'
     *  Constant: '<S860>/Calib'
     *  Constant: '<S861>/Calib'
     *  RelationalOperator: '<S857>/Greater  Than'
     *  RelationalOperator: '<S857>/Greater  Than1'
     *  UnitDelay: '<S857>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B >
            KeOHSR_Pct_AutorevMaxLt_HVBatSOC_RSP)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_c0 = true;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_c0 =
            ((rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B >=
              KeOHSR_Pct_AutorevMaxLt_HVBatSOC_LSP) &&
             (OHSR_ac_DW.UnitDelay_DSTATE_c0));
    }

    /* End of Switch: '<S857>/Switch1' */
    /* End of Outputs for SubSystem: '<S833>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S833>/Hysteresis1' */
    /* Switch: '<S858>/Switch1' incorporates:
     *  Constant: '<S858>/Constant Value'
     *  Constant: '<S864>/Calib'
     *  Constant: '<S865>/Calib'
     *  RelationalOperator: '<S858>/Greater  Than'
     *  RelationalOperator: '<S858>/Greater  Than1'
     *  UnitDelay: '<S858>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeTFTR_T_TransO >
            KeOHSR_T_AutorevMaxLt_TransOilTemp_RSP)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_m1 = true;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_m1 =
            ((rtb_TmpSignalConversionAtVeTFTR_T_TransO >=
              KeOHSR_T_AutorevMaxLt_TransOilTemp_LSP) &&
             (OHSR_ac_DW.UnitDelay_DSTATE_m1));
    }

    /* End of Switch: '<S858>/Switch1' */
    /* End of Outputs for SubSystem: '<S833>/Hysteresis1' */

    /* Outputs for Atomic SubSystem: '<S833>/Hysteresis2' */
    /* Switch: '<S859>/Switch1' incorporates:
     *  Constant: '<S859>/Constant Value'
     *  Constant: '<S862>/Calib'
     *  Constant: '<S863>/Calib'
     *  RelationalOperator: '<S859>/Greater  Than'
     *  RelationalOperator: '<S859>/Greater  Than1'
     *  UnitDelay: '<S859>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeENGR_T_Cataly >
            KeOHSR_T_AutorevMaxLt_CatTemp_RSP)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_cq = true;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_cq =
            ((rtb_TmpSignalConversionAtVeENGR_T_Cataly >=
              KeOHSR_T_AutorevMaxLt_CatTemp_LSP) &&
             (OHSR_ac_DW.UnitDelay_DSTATE_cq));
    }

    /* End of Switch: '<S859>/Switch1' */
    /* End of Outputs for SubSystem: '<S833>/Hysteresis2' */

    /* MinMax: '<S833>/MinMax' incorporates:
     *  Constant: '<S867>/Calib'
     *  Lookup_n-D: '<S871>/Vector'
     *  Switch: '<S855>/Switch1'
     */
    VeOHSC_n_AutorevMaxSpd_CompPrtctn = fmaxf
        (KeOHSR_n_AutorevMaxSpdThd_CompPrtctn, look1_iflf_binlca_16a
         (VeOHSC_r_AutorevMaxSpd_Counter, ((const float32 *)
           &(KxOHSR_n_AutorevMaxLimit_CmpPrtcnTimeBsd[0])), ((const float32 *)
           &(KtOHSR_n_AutorevMaxLimit_CmpPrtcnTimeBsd[0])), 6U));

    /* Outputs for Atomic SubSystem: '<S824>/EdgeRising1' */
    /* Logic: '<S837>/AND' incorporates:
     *  Logic: '<S837>/OR1'
     *  UnitDelay: '<S837>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re = !OHSR_ac_DW.UnitDelay_DSTATE_h4;

    /* Update for UnitDelay: '<S837>/Unit Delay' incorporates:
     *  Constant: '<S824>/TRUE Constant8'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_h4 = true;

    /* End of Outputs for SubSystem: '<S824>/EdgeRising1' */

    /* Logic: '<S834>/Logical' incorporates:
     *  Logic: '<S834>/Logical2'
     *  UnitDelay: '<S834>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re = ((OHSR_ac_DW.UnitDelay1_DSTATE_ps)
        && (!rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re));

    /* MinMax: '<S834>/Maximum' incorporates:
     *  Constant: '<S839>/Calib'
     *  Constant: '<S850>/Calib'
     *  MinMax: '<S874>/Maximum'
     *  Switch: '<S874>/Switch3'
     */
    rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = fmaxf(HeOHSR_t_RngSel_dT,
        KeOHSR_t_AutorevSpd_BlndTime);

    /* Outputs for Atomic SubSystem: '<S834>/Protected Division' */
    /* Switch: '<S873>/Switch1' incorporates:
     *  Constant: '<S839>/Calib'
     *  Constant: '<S873>/Constant Value'
     *  Constant: '<S873>/Constant Value1'
     *  Constant: '<S873>/Constant Value2'
     *  Constant: '<S873>/Constant Value3'
     *  Logic: '<S873>/AND'
     *  MinMax: '<S834>/Maximum'
     *  RelationalOperator: '<S873>/Greater Than or Equal '
     *  RelationalOperator: '<S873>/Greater Than or Equal 1'
     *  RelationalOperator: '<S873>/Not Equal'
     *  RelationalOperator: '<S873>/Not Equal1'
     *  Switch: '<S873>/Switch2'
     *  Switch: '<S873>/Switch3'
     */
    if ((HeOHSR_t_RngSel_dT != 0.0F) &&
            (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B != 0.0F))
    {
        /* Switch: '<S873>/Switch1' incorporates:
         *  Product: '<S873>/Division'
         */
        rtb_TmpSignalConversionAtVeTFTR_T_TransO = HeOHSR_t_RngSel_dT /
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;
    }
    else if (HeOHSR_t_RngSel_dT > 0.0F)
    {
        /* Switch: '<S873>/Switch2' incorporates:
         *  Constant: '<S873>/MAXFLOAT'
         *  Switch: '<S873>/Switch1'
         */
        rtb_TmpSignalConversionAtVeTFTR_T_TransO = 3.402823466E+38F;
    }
    else if (HeOHSR_t_RngSel_dT < 0.0F)
    {
        /* Switch: '<S873>/Switch3' incorporates:
         *  Constant: '<S873>/MINFLOAT'
         *  Switch: '<S873>/Switch1'
         *  Switch: '<S873>/Switch2'
         */
        rtb_TmpSignalConversionAtVeTFTR_T_TransO = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S873>/Switch1' incorporates:
         *  Constant: '<S873>/Constant Value4'
         *  Switch: '<S873>/Switch2'
         *  Switch: '<S873>/Switch3'
         */
        rtb_TmpSignalConversionAtVeTFTR_T_TransO = 0.0F;
    }

    /* End of Switch: '<S873>/Switch1' */
    /* End of Outputs for SubSystem: '<S834>/Protected Division' */
    /* End of Outputs for SubSystem: '<S818>/InputSpd_PdlBsd' */
    /* End of Outputs for SubSystem: '<S555>/OHSC_InputSpeedFilters' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeESSR_e_EngStartStopSt' */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTED'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/OHSC_Range_Selection'
     */
    /* Outputs for Atomic SubSystem: '<S555>/OHSC_InputSpeedFilters' */
    /* Outputs for Atomic SubSystem: '<S818>/InputSpd_PdlBsd' */
    /* Outputs for Atomic SubSystem: '<S824>/EdgeBi' */
    for (i = 0; i < 3; i++)
    {
        /* RelationalOperator: '<S836>/Not Equal' */
        loopCond = rtb_GreaterThan1[i];

        /* RelationalOperator: '<S836>/Not Equal' incorporates:
         *  UnitDelay: '<S836>/Unit Delay'
         */
        UnitDelay_DSTATE_f4 = (loopCond != OHSR_ac_DW.UnitDelay_DSTATE_nm[i]);

        /* Update for UnitDelay: '<S836>/Unit Delay' */
        OHSR_ac_DW.UnitDelay_DSTATE_nm[i] = loopCond;

        /* Switch: '<S834>/Switch2' incorporates:
         *  MinMax: '<S834>/MinMax'
         *  Switch: '<S834>/Switch1'
         *  Switch: '<S834>/Switch3'
         */
        if (UnitDelay_DSTATE_f4)
        {
            /* Switch: '<S834>/Switch2' incorporates:
             *  UnitDelay: '<S824>/Unit Delay'
             */
            OHSR_ac_DW.UnitDelay_DSTATE_jn[i] = OHSR_ac_DW.UnitDelay_DSTATE_gk[i];

            /* Switch: '<S834>/Switch3' incorporates:
             *  Constant: '<S834>/Constant Value4'
             */
            OHSR_ac_DW.UnitDelay3_DSTATE_e[i] = 0.0F;
        }
        else
        {
            if (rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re)
            {
                /* MinMax: '<S834>/MinMax' incorporates:
                 *  Switch: '<S834>/Switch1'
                 *  UnitDelay: '<S834>/Unit Delay3'
                 */
                rtb_TmpSignalConversionAtVeENGR_T_Cataly =
                    OHSR_ac_DW.UnitDelay3_DSTATE_e[i];
            }
            else
            {
                /* MinMax: '<S834>/MinMax' incorporates:
                 *  Constant: '<S834>/Constant Value3'
                 *  Switch: '<S834>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeENGR_T_Cataly = 1.0F;
            }

            /* Switch: '<S834>/Switch3' incorporates:
             *  Constant: '<S834>/Constant Value2'
             *  MinMax: '<S834>/MinMax'
             *  Sum: '<S834>/Summation1'
             */
            OHSR_ac_DW.UnitDelay3_DSTATE_e[i] = fminf
                (rtb_TmpSignalConversionAtVeENGR_T_Cataly +
                 rtb_TmpSignalConversionAtVeTFTR_T_TransO, 1.0F);
        }

        /* End of Switch: '<S834>/Switch2' */
    }

    /* End of Outputs for SubSystem: '<S824>/EdgeBi' */

    /* Switch: '<S833>/Switch' incorporates:
     *  Constant: '<S833>/Constant'
     *  Constant: '<S866>/Calib'
     *  Logic: '<S833>/Logical Operator'
     *  Logic: '<S833>/Logical Operator1'
     *  Logic: '<S833>/Logical Operator2'
     *  UnitDelay: '<S857>/Unit Delay'
     *  UnitDelay: '<S858>/Unit Delay'
     *  UnitDelay: '<S859>/Unit Delay'
     */
    if (((!OHSR_ac_DW.UnitDelay_DSTATE_c0) && (OHSR_ac_DW.UnitDelay_DSTATE_m1)) &&
        (!OHSR_ac_DW.UnitDelay_DSTATE_cq))
    {
        rtb_Merge1 = 99999.0F;
    }
    else
    {
        rtb_Merge1 = KeOHSR_n_AutorevMaxLimit_CmpPrtcn;
    }

    /* End of Switch: '<S833>/Switch' */

    /* MinMax: '<S824>/MinMax3' incorporates:
     *  MinMax: '<S833>/MinMax1'
     */
    VeOHSC_n_AutorevSpd_PostCompProtctnArb = fminf(fminf(rtb_Merge1,
        VeOHSC_n_AutorevMaxSpd_CompPrtctn), VeOHSC_n_EngSpdDsrd_Autorev);

    /* Switch: '<S824>/Switch7' incorporates:
     *  MinMax: '<S824>/MinMax2'
     */
    if (rtb_GreaterThan1[0])
    {
        rtb_TmpSignalConversionAtVeTFTR_T_TransO = fmaxf
            (VeOHSC_n_AutorevSpd_PostCompProtctnArb,
             VeOHSC_n_OptEngSpd_N_Filtered);
    }
    else
    {
        rtb_TmpSignalConversionAtVeTFTR_T_TransO = VeOHSC_n_OptEngSpd_N_Filtered;
    }

    /* Sum: '<S834>/Summation' incorporates:
     *  Constant: '<S834>/Constant Value'
     *  Product: '<S834>/Multiplication'
     *  Product: '<S834>/Multiplication3'
     *  Sum: '<S834>/Subtraction'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_gk[0] = ((1.0F - OHSR_ac_DW.UnitDelay3_DSTATE_e
        [0]) * OHSR_ac_DW.UnitDelay_DSTATE_jn[0]) +
        (OHSR_ac_DW.UnitDelay3_DSTATE_e[0] *
         rtb_TmpSignalConversionAtVeTFTR_T_TransO);

    /* Switch: '<S824>/Switch7' incorporates:
     *  MinMax: '<S824>/MinMax2'
     */
    if (rtb_GreaterThan1[1])
    {
        rtb_TmpSignalConversionAtVeTFTR_T_TransO = fmaxf
            (VeOHSC_n_AutorevSpd_PostCompProtctnArb,
             VeOHSC_n_OptEngSpd_M1_Filtered);
    }
    else
    {
        rtb_TmpSignalConversionAtVeTFTR_T_TransO =
            VeOHSC_n_OptEngSpd_M1_Filtered;
    }

    /* Sum: '<S834>/Summation' incorporates:
     *  Constant: '<S834>/Constant Value'
     *  Product: '<S834>/Multiplication'
     *  Product: '<S834>/Multiplication3'
     *  Sum: '<S834>/Subtraction'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_gk[1] = ((1.0F - OHSR_ac_DW.UnitDelay3_DSTATE_e
        [1]) * OHSR_ac_DW.UnitDelay_DSTATE_jn[1]) +
        (OHSR_ac_DW.UnitDelay3_DSTATE_e[1] *
         rtb_TmpSignalConversionAtVeTFTR_T_TransO);

    /* Switch: '<S824>/Switch7' incorporates:
     *  MinMax: '<S824>/MinMax2'
     */
    if (rtb_GreaterThan1[2])
    {
        rtb_TmpSignalConversionAtVeTFTR_T_TransO = fmaxf
            (VeOHSC_n_AutorevSpd_PostCompProtctnArb,
             VeOHSC_n_OptEngSpd_M2_Filtered);
    }
    else
    {
        rtb_TmpSignalConversionAtVeTFTR_T_TransO =
            VeOHSC_n_OptEngSpd_M2_Filtered;
    }

    /* Sum: '<S834>/Summation' incorporates:
     *  Constant: '<S834>/Constant Value'
     *  Product: '<S834>/Multiplication'
     *  Product: '<S834>/Multiplication3'
     *  Sum: '<S834>/Subtraction'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_gk[2] = ((1.0F - OHSR_ac_DW.UnitDelay3_DSTATE_e
        [2]) * OHSR_ac_DW.UnitDelay_DSTATE_jn[2]) +
        (OHSR_ac_DW.UnitDelay3_DSTATE_e[2] *
         rtb_TmpSignalConversionAtVeTFTR_T_TransO);

    /* Logic: '<S824>/Logical2' incorporates:
     *  Constant: '<S838>/Constant'
     *  Constant: '<S844>/Calib'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  RelationalOperator: '<S824>/Comparison3'
     *  RelationalOperator: '<S824>/Comparison5'
     */
    rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re = (((VaOHSC_b_Autorev_Enbld[0]) &&
        (VeOHSC_Pct_AutoRevPedal > KeOHSR_Pct_MinPdlNbRev)) && (((uint32)
        tmpRead_1) != CeESSR_e_EngOff));

    /* Update for UnitDelay: '<S834>/Unit Delay1' incorporates:
     *  Constant: '<S834>/TRUE Constant'
     */
    OHSR_ac_DW.UnitDelay1_DSTATE_ps = true;

    /* End of Outputs for SubSystem: '<S818>/InputSpd_PdlBsd' */

    /* Outputs for Atomic SubSystem: '<S826>/EdgeRising1' */
    /* Logic: '<S876>/AND' incorporates:
     *  Logic: '<S876>/OR1'
     *  UnitDelay: '<S876>/Unit Delay'
     */
    rtb_Switch3_js = !OHSR_ac_DW.UnitDelay_DSTATE_ma;

    /* Update for UnitDelay: '<S876>/Unit Delay' incorporates:
     *  Constant: '<S826>/TRUE Constant8'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_ma = true;

    /* End of Outputs for SubSystem: '<S826>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S826>/EdgeBi' */
    /* RelationalOperator: '<S875>/Not Equal' incorporates:
     *  UnitDelay: '<S875>/Unit Delay'
     */
    rtb_NotEqual_fz = (rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re !=
                       OHSR_ac_DW.UnitDelay_DSTATE_c4);

    /* Update for UnitDelay: '<S875>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_c4 = rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re;

    /* End of Outputs for SubSystem: '<S826>/EdgeBi' */

    /* Switch: '<S874>/Switch2' incorporates:
     *  Constant: '<S877>/Calib'
     *  Constant: '<S880>/Constant Value'
     *  Constant: '<S880>/Constant Value1'
     *  Constant: '<S880>/Constant Value2'
     *  Constant: '<S880>/Constant Value3'
     *  Logic: '<S880>/AND'
     *  RelationalOperator: '<S880>/Greater Than or Equal '
     *  RelationalOperator: '<S880>/Greater Than or Equal 1'
     *  RelationalOperator: '<S880>/Not Equal'
     *  RelationalOperator: '<S880>/Not Equal1'
     *  Switch: '<S874>/Switch3'
     *  Switch: '<S880>/Switch1'
     *  Switch: '<S880>/Switch2'
     *  Switch: '<S880>/Switch3'
     *  UnitDelay: '<S826>/Unit Delay'
     *  UnitDelay: '<S874>/Unit Delay'
     */
    if (rtb_NotEqual_fz)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_dm = OHSR_ac_DW.UnitDelay_DSTATE_fe;

        /* Switch: '<S874>/Switch1' incorporates:
         *  Constant: '<S874>/Constant Value4'
         *  UnitDelay: '<S826>/Unit Delay'
         *  UnitDelay: '<S874>/Unit Delay'
         *  UnitDelay: '<S874>/Unit Delay3'
         */
        OHSR_ac_DW.UnitDelay3_DSTATE_h = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S874>/Protected Division' */
        if ((HeOHSR_t_RngSel_dT != 0.0F) &&
                (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B != 0.0F))
        {
            /* Switch: '<S880>/Switch1' incorporates:
             *  Constant: '<S877>/Calib'
             *  Product: '<S880>/Division'
             */
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = HeOHSR_t_RngSel_dT /
                rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;
        }
        else if (HeOHSR_t_RngSel_dT > 0.0F)
        {
            /* Switch: '<S880>/Switch2' incorporates:
             *  Constant: '<S880>/MAXFLOAT'
             *  Switch: '<S880>/Switch1'
             */
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = 3.402823466E+38F;
        }
        else if (HeOHSR_t_RngSel_dT < 0.0F)
        {
            /* Switch: '<S880>/Switch3' incorporates:
             *  Constant: '<S880>/MINFLOAT'
             *  Switch: '<S880>/Switch1'
             *  Switch: '<S880>/Switch2'
             */
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S880>/Switch1' incorporates:
             *  Constant: '<S880>/Constant Value4'
             *  Switch: '<S880>/Switch2'
             *  Switch: '<S880>/Switch3'
             */
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S874>/Protected Division' */

        /* Switch: '<S874>/Switch1' incorporates:
         *  Constant: '<S874>/Constant Value2'
         *  Constant: '<S874>/Constant Value3'
         *  Constant: '<S877>/Calib'
         *  Constant: '<S880>/Constant Value2'
         *  Constant: '<S880>/Constant Value3'
         *  Logic: '<S874>/Logical'
         *  Logic: '<S874>/Logical2'
         *  MinMax: '<S874>/MinMax'
         *  RelationalOperator: '<S880>/Greater Than or Equal '
         *  RelationalOperator: '<S880>/Greater Than or Equal 1'
         *  Sum: '<S874>/Summation1'
         *  Switch: '<S880>/Switch1'
         *  Switch: '<S880>/Switch2'
         *  Switch: '<S880>/Switch3'
         *  UnitDelay: '<S874>/Unit Delay1'
         *  UnitDelay: '<S874>/Unit Delay3'
         */
        if ((!OHSR_ac_DW.UnitDelay1_DSTATE_g) || rtb_Switch3_js)
        {
            OHSR_ac_DW.UnitDelay3_DSTATE_h = 1.0F;
        }

        OHSR_ac_DW.UnitDelay3_DSTATE_h = fminf(OHSR_ac_DW.UnitDelay3_DSTATE_h +
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B, 1.0F);
    }

    /* End of Switch: '<S874>/Switch2' */

    /* Switch: '<S826>/Switch2' */
    if (rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re)
    {
        /* MinMax: '<S826>/MinMax4' */
        rtb_Switch5_fw = fmaxf(OHSR_ac_DW.UnitDelay_DSTATE_gk[0],
                               VeOHSC_n_OptMtrBSpd_Filtered);

        /* Outputs for Atomic SubSystem: '<S826>/Limiter2' */
        /* Switch: '<S879>/Switch1' incorporates:
         *  RelationalOperator: '<S879>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeOSMR_n_MtrBSp < rtb_Switch5_fw)
        {
            /* Switch: '<S879>/Switch1' */
            rtb_Switch5_fw = rtb_TmpSignalConversionAtVeOSMR_n_MtrBSp;
        }

        /* End of Switch: '<S879>/Switch1' */

        /* Switch: '<S879>/Switch' incorporates:
         *  RelationalOperator: '<S879>/Relational Operator1'
         */
        if (rtb_Switch5_fw <= rtb_TmpSignalConversionAtVeOSMR_n_MtrB_h)
        {
            /* Switch: '<S826>/Switch2' */
            rtb_Switch5_fw = rtb_TmpSignalConversionAtVeOSMR_n_MtrB_h;
        }

        /* End of Switch: '<S879>/Switch' */
        /* End of Outputs for SubSystem: '<S826>/Limiter2' */
    }
    else
    {
        /* Switch: '<S826>/Switch2' */
        rtb_Switch5_fw = VeOHSC_n_OptMtrBSpd_Filtered;
    }

    /* End of Switch: '<S826>/Switch2' */

    /* Sum: '<S874>/Summation' incorporates:
     *  Constant: '<S874>/Constant Value'
     *  Product: '<S874>/Multiplication'
     *  Product: '<S874>/Multiplication3'
     *  Sum: '<S874>/Subtraction'
     *  UnitDelay: '<S874>/Unit Delay'
     *  UnitDelay: '<S874>/Unit Delay3'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_fe = ((1.0F - OHSR_ac_DW.UnitDelay3_DSTATE_h) *
        OHSR_ac_DW.UnitDelay_DSTATE_dm) + (OHSR_ac_DW.UnitDelay3_DSTATE_h *
        rtb_Switch5_fw);

    /* Update for Switch: '<S818>/Switch6' incorporates:
     *  UnitDelay: '<S818>/Unit Delay9'
     */
    OHSR_ac_DW.UnitDelay9_DSTATE = rtb_TmpSignalConversionAtVeOSMR_n_Inp_of;

    /* Update for UnitDelay: '<S828>/Unit Delay5' */
    OHSR_ac_DW.UnitDelay5_DSTATE_d = rtb_TmpSignalConversionAtVeOSMR_n_Inp_of;

    /* Update for UnitDelay: '<S828>/Unit Delay4' */
    OHSR_ac_DW.UnitDelay4_DSTATE_n = rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP;

    /* Update for UnitDelay: '<S828>/Unit Delay7' */
    OHSR_ac_DW.UnitDelay7_DSTATE = rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP;

    /* Update for UnitDelay: '<S828>/Unit Delay6' */
    OHSR_ac_DW.UnitDelay6_DSTATE_f = rtb_TmpSignalConversionAtVeOSMR_n_Inp_of;

    /* Update for UnitDelay: '<S818>/Unit Delay7' incorporates:
     *  Constant: '<S818>/TRUE Constant8'
     */
    OHSR_ac_DW.UnitDelay7_DSTATE_g = true;

    /* Update for Switch: '<S818>/Switch2' incorporates:
     *  UnitDelay: '<S818>/Unit Delay11'
     */
    OHSR_ac_DW.UnitDelay11_DSTATE = rtb_TmpSignalConversionAtVeESPR_n_TCMEng;

    /* Update for UnitDelay: '<S829>/Unit Delay5' */
    OHSR_ac_DW.UnitDelay5_DSTATE_h = rtb_TmpSignalConversionAtVeESPR_n_TCMEng;

    /* Update for UnitDelay: '<S829>/Unit Delay4' */
    OHSR_ac_DW.UnitDelay4_DSTATE_d = rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP;

    /* Update for UnitDelay: '<S829>/Unit Delay7' */
    OHSR_ac_DW.UnitDelay7_DSTATE_l = rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP;

    /* Update for UnitDelay: '<S829>/Unit Delay6' */
    OHSR_ac_DW.UnitDelay6_DSTATE_a = rtb_TmpSignalConversionAtVeESPR_n_TCMEng;

    /* Update for UnitDelay: '<S818>/Unit Delay12' incorporates:
     *  Constant: '<S818>/TRUE Constant11'
     */
    OHSR_ac_DW.UnitDelay12_DSTATE = true;

    /* Update for Switch: '<S818>/Switch5' incorporates:
     *  UnitDelay: '<S818>/Unit Delay8'
     */
    OHSR_ac_DW.UnitDelay8_DSTATE = rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;

    /* Update for UnitDelay: '<S827>/Unit Delay1' */
    OHSR_ac_DW.UnitDelay1_DSTATE_k = rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;

    /* Update for UnitDelay: '<S827>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_g0 = rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP;

    /* Update for UnitDelay: '<S827>/Unit Delay4' */
    OHSR_ac_DW.UnitDelay4_DSTATE_k = rtb_TmpSignalConversionAtVeSCOR_Pct_TtlP;

    /* Update for UnitDelay: '<S827>/Unit Delay2' */
    OHSR_ac_DW.UnitDelay2_DSTATE_f = rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;

    /* Update for UnitDelay: '<S818>/Unit Delay10' incorporates:
     *  Constant: '<S818>/TRUE Constant9'
     */
    OHSR_ac_DW.UnitDelay10_DSTATE = true;

    /* Update for UnitDelay: '<S874>/Unit Delay1' incorporates:
     *  Constant: '<S874>/TRUE Constant'
     */
    OHSR_ac_DW.UnitDelay1_DSTATE_g = true;

    /* End of Outputs for SubSystem: '<S555>/OHSC_InputSpeedFilters' */

    /* Outputs for Atomic SubSystem: '<S555>/OHSC_InputSpeedOvrrds' */
    /* Switch: '<S819>/Switch8' incorporates:
     *  Constant: '<S901>/Calib'
     *  Constant: '<S905>/Calib'
     *  UnitDelay: '<S534>/Unit Delay6'
     */
    if (HeOHSR_b_OptInputSpd_N_Ovrrd)
    {
        OHSR_ac_DW.UnitDelay6_DSTATE = KeOHSR_n_OptInputSpd_N_Ovrrd;
    }
    else
    {
        OHSR_ac_DW.UnitDelay6_DSTATE = OHSR_ac_DW.UnitDelay_DSTATE_gk[0];
    }

    /* End of Switch: '<S819>/Switch8' */

    /* Switch: '<S819>/Switch15' incorporates:
     *  Constant: '<S899>/Calib'
     *  Constant: '<S903>/Calib'
     *  UnitDelay: '<S534>/Unit Delay2'
     */
    if (HeOHSR_b_OptInputSpd_Md1_Ovrrd)
    {
        OHSR_ac_DW.UnitDelay2_DSTATE = KeOHSR_n_OptInputSpd_Md1_Ovrrd;
    }
    else
    {
        OHSR_ac_DW.UnitDelay2_DSTATE = OHSR_ac_DW.UnitDelay_DSTATE_gk[1];
    }

    /* End of Switch: '<S819>/Switch15' */

    /* Switch: '<S819>/Switch16' incorporates:
     *  Constant: '<S900>/Calib'
     *  Constant: '<S904>/Calib'
     *  UnitDelay: '<S534>/Unit Delay3'
     */
    if (HeOHSR_b_OptInputSpd_Md2_Ovrrd)
    {
        OHSR_ac_DW.UnitDelay3_DSTATE = KeOHSR_n_OptInputSpd_Md2_Ovrrd;
    }
    else
    {
        OHSR_ac_DW.UnitDelay3_DSTATE = OHSR_ac_DW.UnitDelay_DSTATE_gk[2];
    }

    /* End of Switch: '<S819>/Switch16' */

    /* Switch: '<S819>/Switch10' incorporates:
     *  Constant: '<S902>/Calib'
     *  Constant: '<S906>/Calib'
     *  UnitDelay: '<S534>/Unit Delay4'
     */
    if (HeOHSR_b_OptMtrBSpd_Ovrrd)
    {
        OHSR_ac_DW.UnitDelay4_DSTATE = KeOHSR_n_OptMtrBSpd_Ovrrd;
    }
    else
    {
        OHSR_ac_DW.UnitDelay4_DSTATE = OHSR_ac_DW.UnitDelay_DSTATE_fe;
    }

    /* End of Switch: '<S819>/Switch10' */
    /* End of Outputs for SubSystem: '<S555>/OHSC_InputSpeedOvrrds' */

    /* Gain: '<S560>/Gain' incorporates:
     *  Gain: '<S561>/Gain'
     *  Gain: '<S563>/Gain'
     *  SignalConversion generated from: '<S534>/XeOHSR_b_EngCalc_Enbl1'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    /* Gain: '<S560>/Gain' incorporates:
     *  UnitDelay: '<S534>/Unit Delay6'
     */
    VeOHSC_n_InputSpeedDsrdN = OHSR_ac_DW.UnitDelay6_DSTATE;

    /* Gain: '<S561>/Gain' incorporates:
     *  UnitDelay: '<S534>/Unit Delay3'
     */
    VeOHSC_n_InputSpeedDsrdM2 = OHSR_ac_DW.UnitDelay3_DSTATE;

    /* Gain: '<S563>/Gain' incorporates:
     *  UnitDelay: '<S534>/Unit Delay2'
     */
    VeOHSC_n_InputSpeedDsrdM1 = OHSR_ac_DW.UnitDelay2_DSTATE;
    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_f =
        VeOHSC_n_InputSpeedDsrdM1;

#endif

    /* End of Gain: '<S560>/Gain' */

    /* Gain: '<S562>/Gain' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_23

    /* Gain: '<S562>/Gain' incorporates:
     *  UnitDelay: '<S534>/Unit Delay4'
     */
    VeOHSC_n_MtrBSpdDsrd = OHSR_ac_DW.UnitDelay4_DSTATE;

#endif

    /* End of Gain: '<S562>/Gain' */

    /* SignalConversion generated from: '<S534>/XeOHSR_b_EngCalc_Enbl2' incorporates:
     *  SignalConversion generated from: '<S534>/XeOHSR_b_EngCalc_Enbl1'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_d =
        VeOHSC_n_InputSpeedDsrdM2;

#else

    /* SignalConversion generated from: '<S534>/XeOHSR_b_EngCalc_Enbl1' */
    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_f = rtb_Switch;

#endif

    /* End of SignalConversion generated from: '<S534>/XeOHSR_b_EngCalc_Enbl2' */

    /* SignalConversion generated from: '<S534>/XeOHSR_b_EngCalc_Enbl' incorporates:
     *  SignalConversion generated from: '<S534>/XeOHSR_b_EngCalc_Enbl2'
     */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_b =
        VeOHSC_n_InputSpeedDsrdN;

#else

    /* SignalConversion generated from: '<S534>/XeOHSR_b_EngCalc_Enbl2' */
    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_d = rtb_Switch;

    /* SignalConversion generated from: '<S534>/XeOHSR_b_EngCalc_Enbl' */
    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_b = rtb_Switch;

#endif

    /* End of SignalConversion generated from: '<S534>/XeOHSR_b_EngCalc_Enbl' */

    /* SignalConversion generated from: '<S534>/XeOHSR_b_GSI_Enbl' incorporates:
     *  SignalConversion generated from: '<S534>/XeOHSR_b_GSI_Enbld1'
     * */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_19

    /* VariantMerge generated from: '<S534>/XeOHSR_b_GSI_Enbl' incorporates:
     *  Selector: '<S546>/Selector9'
     */
    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_j = rtb_Selector9_b;

    /* VariantMerge generated from: '<S534>/XeOHSR_b_GSI_Enbld1' */
    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_a = rtb_Logical15_m;

#else

    /* VariantMerge generated from: '<S534>/XeOHSR_b_GSI_Enbl' incorporates:
     *  Constant: '<S545>/Constant'
     *  SignalConversion generated from: '<S534>/XeOHSR_b_GSI_Enbl'
     */
    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_j = CeOHSR_e_SG_1;

    /* VariantMerge generated from: '<S534>/XeOHSR_b_GSI_Enbld1' incorporates:
     *  Constant: '<S534>/FALSE Constant'
     *  SignalConversion generated from: '<S534>/XeOHSR_b_GSI_Enbld1'
     */
    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_a = false;

#endif

    /* End of SignalConversion generated from: '<S534>/XeOHSR_b_GSI_Enbl' */

    /* SignalConversion generated from: '<S534>/XeOHSR_b_MtrBSpdDsrd_Enbl' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_23

    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_e = VeOHSC_n_MtrBSpdDsrd;

#else

    /* SignalConversion generated from: '<S534>/XeOHSR_b_MtrBSpdDsrd_Enbl' */
    OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_e = rtb_Switch_ly;

#endif

    /* End of SignalConversion generated from: '<S534>/XeOHSR_b_MtrBSpdDsrd_Enbl' */

    /* Update for UnitDelay: '<S558>/Unit Delay1' */
    OHSR_ac_DW.UnitDelay1_DSTATE_d[0] = VeOHSC_e_RangeSel_BfrDbnc;
    OHSR_ac_DW.UnitDelay1_DSTATE_d[1] = VeOHSC_e_RangeOpt_BfrDbnc;
    OHSR_ac_DW.UnitDelay1_DSTATE_d[2] = VeOHSC_e_RangeOn_BfrDbnc;

    /* Update for UnitDelay: '<S558>/Unit Delay3' */
    OHSR_ac_DW.UnitDelay3_DSTATE_le[0] = rtb_MinMax_i;
    OHSR_ac_DW.UnitDelay3_DSTATE_le[1] = rtb_MinMax2_hq;
    OHSR_ac_DW.UnitDelay3_DSTATE_le[2] = rtb_MinMax1_fj;

    /* Update for UnitDelay: '<S550>/Unit Delay13' incorporates:
     *  Constant: '<S550>/TRUE Constant10'
     */
    OHSR_ac_DW.UnitDelay13_DSTATE = true;

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/OHSO_Override'
     */
    /* SignalConversion generated from: '<S535>/XeOHSR_b_ServcEOLSpdOvrrd_Enbl' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_27

    /* Switch: '<S535>/Switch' incorporates:
     *  Inport: '<Root>/VeRTMR_b_HybTransCmndStEnbl'
     */
    (void)Rte_Read_VeRTMR_b_HybTransCmndStEnbl_Value(&rtb_Switch_it);

#else

    /* Switch: '<S535>/Switch' incorporates:
     *  Constant: '<S535>/FALSE Constant'
     *  SignalConversion generated from: '<S535>/XeOHSR_b_ServcEOLSpdOvrrd_Enbl'
     */
    rtb_Switch_it = false;

#endif

    /* End of SignalConversion generated from: '<S535>/XeOHSR_b_ServcEOLSpdOvrrd_Enbl' */

    /* If: '<S535>/If' */
    if (rtb_Switch_it)
    {
        /* Outputs for IfAction SubSystem: '<S535>/OEM_ShiftState_Override' incorporates:
         *  ActionPort: '<S1381>/Action Port'
         */
        OHSR_ac_OEM_ShiftState_Override();

        /* End of Outputs for SubSystem: '<S535>/OEM_ShiftState_Override' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S535>/No_ShiftState_Override' incorporates:
         *  ActionPort: '<S1380>/Action Port'
         */
        OHSR_ac_No_ShiftState_Override();

        /* End of Outputs for SubSystem: '<S535>/No_ShiftState_Override' */
    }

    /* End of If: '<S535>/If' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSCOR_b_DsrdRngOnAllwd' */
    (void)Rte_Read_VeSCOR_b_DsrdRngOnAllwd_Value(&tmpRead_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTED'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/OHSO_Override'
     */
    /* SignalConversion generated from: '<S535>/Selector' */
    rtb_VariantMerge_For_Variant_Source_XeOH[0] = OHSR_ac_B.Gain_ok;
    rtb_VariantMerge_For_Variant_Source_XeOH[1] = OHSR_ac_B.Gain_h;
    rtb_VariantMerge_For_Variant_Source_XeOH[2] = OHSR_ac_B.Gain_a;

    /* Outputs for Atomic SubSystem: '<S1370>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S1370>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S1391>/EdgeFalling' */
    /* Logic: '<S1393>/OR1' incorporates:
     *  Logic: '<S1392>/OR1'
     */
    rtb_Switch_it = !rtb_TmpSignalConversionAtVeSCOR_b_ReqFCO;

    /* End of Outputs for SubSystem: '<S1370>/Turn On Delay Time' */

    /* Logic: '<S1393>/AND' incorporates:
     *  Logic: '<S1393>/OR1'
     *  UnitDelay: '<S1393>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re = (rtb_Switch_it &&
        (OHSR_ac_DW.UnitDelay_DSTATE_km));

    /* Update for UnitDelay: '<S1393>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_km = rtb_TmpSignalConversionAtVeSCOR_b_ReqFCO;

    /* End of Outputs for SubSystem: '<S1391>/EdgeFalling' */

    /* Switch: '<S1391>/Switch' incorporates:
     *  Constant: '<S1372>/Calib'
     *  Constant: '<S1378>/Calib'
     *  Constant: '<S1391>/Constant Value1'
     *  MinMax: '<S1391>/Minimum'
     *  Sum: '<S1391>/Summation'
     *  UnitDelay: '<S1391>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re)
    {
        OHSR_ac_DW.UnitDelay_DSTATE_a = KeOHSR_t_FCReqOffDbncTime;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE_a = fmaxf(OHSR_ac_DW.UnitDelay_DSTATE_a -
            HeOHSR_t_RngSel_dT, 0.0F);
    }

    /* End of Switch: '<S1391>/Switch' */
    /* End of Outputs for SubSystem: '<S1370>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S1370>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S1392>/EdgeRising' */
    /* Logic: '<S1394>/AND' incorporates:
     *  Logic: '<S1394>/OR1'
     *  UnitDelay: '<S1394>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re =
        (rtb_TmpSignalConversionAtVeSCOR_b_ReqFCO &&
         (!OHSR_ac_DW.UnitDelay_DSTATE_j5));

    /* Update for UnitDelay: '<S1394>/Unit Delay' */
    OHSR_ac_DW.UnitDelay_DSTATE_j5 = rtb_TmpSignalConversionAtVeSCOR_b_ReqFCO;

    /* End of Outputs for SubSystem: '<S1392>/EdgeRising' */

    /* Switch: '<S1392>/Switch1' incorporates:
     *  Constant: '<S1372>/Calib'
     *  Constant: '<S1379>/Calib'
     *  Constant: '<S1392>/Constant Value1'
     *  Logic: '<S1392>/OR'
     *  MinMax: '<S1392>/Minimum'
     *  Sum: '<S1392>/Summation'
     *  UnitDelay: '<S1392>/Unit Delay'
     */
    if (rtb_Switch_it || rtb_TmpSignalConversionAtVeSCOR_b_TLC_Re)
    {
        OHSR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        OHSR_ac_DW.UnitDelay_DSTATE = fminf(KeOHSR_t_FCReqOnDbncTime,
            HeOHSR_t_RngSel_dT + OHSR_ac_DW.UnitDelay_DSTATE);
    }

    /* End of Switch: '<S1392>/Switch1' */
    /* End of Outputs for SubSystem: '<S1370>/Turn On Delay Time' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSCOR_P_FCDsrdPwr' */
    (void)Rte_Read_VeSCOR_P_FCDsrdPwr_Value(&tmpRead_o);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTED'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/OHSO_Override'
     */
    /* Outputs for Atomic SubSystem: '<S1370>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S1370>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S1370>/Turn Off Delay Time' */
    /* Logic: '<S1390>/OR1' incorporates:
     *  Constant: '<S1379>/Calib'
     *  Constant: '<S1391>/Constant Value2'
     *  Logic: '<S1370>/Logical Operator'
     *  Logic: '<S1390>/NOT'
     *  Logic: '<S1390>/OR'
     *  Logic: '<S1391>/AND'
     *  Logic: '<S1392>/AND'
     *  RelationalOperator: '<S1391>/Greater  Than'
     *  RelationalOperator: '<S1392>/Greater  Than'
     *  UnitDelay: '<S1390>/Unit Delay'
     *  UnitDelay: '<S1391>/Unit Delay'
     *  UnitDelay: '<S1392>/Unit Delay'
     */
    OHSR_ac_DW.UnitDelay_DSTATE_kp5 = ((rtb_TmpSignalConversionAtVeSCOR_b_ReqFCO
        && (OHSR_ac_DW.UnitDelay_DSTATE >= KeOHSR_t_FCReqOnDbncTime)) ||
        ((rtb_TmpSignalConversionAtVeSCOR_b_ReqFCO ||
          (OHSR_ac_DW.UnitDelay_DSTATE_a > 0.0F)) &&
         (OHSR_ac_DW.UnitDelay_DSTATE_kp5)));

    /* End of Outputs for SubSystem: '<S1370>/Turn Off Delay Time' */
    /* End of Outputs for SubSystem: '<S1370>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S1370>/Signal Latch On With Reset' */

    /* DataStoreRead: '<S535>/Data Store Read1' */
    VeOHSR_g_CreepCndtn = VeOHSR_g_CreepCndtn_DS;

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/OHSC_Range_Selection'
     */
    /* Outport: '<Root>/VeOHSR_b_EngDsrd' incorporates:
     *  Logic: '<S538>/AND'
     *  SignalConversion generated from: '<S2>/DsrdEngSt'
     */
    (void)Rte_Write_VeOHSR_b_EngDsrd_Value
        (rtb_TmpSignalConversionAtVeOSMR_b_EngRev);

    /* Outport: '<Root>/VeOHSR_e_SGrDsrd_EngOn' incorporates:
     *  DataTypeConversion: '<S541>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/DsrdSGr_EngOn'
     *  VariantMerge generated from: '<S534>/XeOHSR_b_EngCalc_Enbl5'
     */
    (void)Rte_Write_VeOHSR_e_SGrDsrd_EngOn_Value
        (rtb_VariantMerge_For_Variant_Source_Xe_o);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeOHSR_b_EnaGSI' incorporates:
     *  SignalConversion generated from: '<S2>/EnblGSI'
     */
    (void)Rte_Write_VeOHSR_b_EnaGSI_Value
        (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_a);

    /* Outport: '<Root>/VeOHSR_n_MtrBSpeedDsrd' incorporates:
     *  SignalConversion generated from: '<S2>/Nb'
     */
    (void)Rte_Write_VeOHSR_n_MtrBSpeedDsrd_Value(OHSR_ac_B.Merge4);

    /* Outport: '<Root>/VaOHSR_n_NtiMinPerStgcRngSt' incorporates:
     *  SignalConversion generated from: '<S2>/NiMinStgcRngSt'
     */
    (void)Rte_Write_VaOHSR_n_NtiMinPerStgcRngSt_Value(Selector23);

    /* Outport: '<Root>/VeOHSR_n_InputSpeedDsrdM1' incorporates:
     *  SignalConversion generated from: '<S2>/Ni_M1'
     */
    (void)Rte_Write_VeOHSR_n_InputSpeedDsrdM1_Value(OHSR_ac_B.Gain_h);

    /* Outport: '<Root>/VeOHSR_n_InputSpeedDsrdM2' incorporates:
     *  SignalConversion generated from: '<S2>/Ni_M2'
     */
    (void)Rte_Write_VeOHSR_n_InputSpeedDsrdM2_Value(OHSR_ac_B.Gain_a);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/OHSO_Override'
     */
    /* Outport: '<Root>/VeOHSR_n_InputSpeedDsrdM3' incorporates:
     *  Constant: '<S1377>/Calib'
     *  Selector: '<S535>/Selector'
     *  SignalConversion generated from: '<S2>/Ni_M3'
     */
    (void)Rte_Write_VeOHSR_n_InputSpeedDsrdM3_Value
        (rtb_VariantMerge_For_Variant_Source_XeOH[KeOHSR_i_NiM3Dsrd_Select]);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeOHSR_n_InputSpeedDsrdN' incorporates:
     *  SignalConversion generated from: '<S2>/Ni_N'
     */
    (void)Rte_Write_VeOHSR_n_InputSpeedDsrdN_Value(OHSR_ac_B.Gain_ok);

    /* Outport: '<Root>/VaOHSR_n_NtiMaxPerStgcRngSt' incorporates:
     *  SignalConversion generated from: '<S2>/NtiMaxStgcRngSt'
     */
    (void)Rte_Write_VaOHSR_n_NtiMaxPerStgcRngSt_Value
        (rtb_TmpSignalConversionAtSelector3Inport);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/OHSO_Override'
     */
    /* Outport: '<Root>/VeOHSR_e_RngDsrd' incorporates:
     *  DataTypeConversion: '<S1371>/DataTypeConversion'
     *  Merge: '<S535>/Merge'
     *  SignalConversion generated from: '<S2>/RngDsrd'
     */
    (void)Rte_Write_VeOHSR_e_RngDsrd_Value(VeOHSR_e_CPIDOverride_RngDsrd);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeOHSR_e_SGrDsrd_GSI' incorporates:
     *  SignalConversion generated from: '<S2>/SGrDsrd_GSI'
     *  VariantMerge generated from: '<S534>/XeOHSR_b_GSI_Enbl'
     */
    (void)Rte_Write_VeOHSR_e_SGrDsrd_GSI_Value
        (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHSR_j);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/OHSC_Range_Selection'
     */
    /* Outport: '<Root>/VeOHSR_b_ServEngOff_StgcInhb' incorporates:
     *  Logic: '<S559>/Logical'
     *  SignalConversion generated from: '<S2>/ServEngOff_StgcInhb'
     */
    (void)Rte_Write_VeOHSR_b_ServEngOff_StgcInhb_Value
        ((OHSR_ac_B.ServEngOffReq_Actv) && (VeOHSC_b_EngOnDsrdOpt));

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeOHSR_b_RegenShiftMap_Rqst' incorporates:
     *  Merge: '<Root>/RegenShiftMapRqst_IRV_Merge'
     *  SignalConversion generated from: '<S2>/VeOHSC_b_RegenShiftMap_Rqst'
     *  SignalConversion generated from: '<S2>/RegenShiftMapRqst_Read'
     */
    (void)Rte_Write_VeOHSR_b_RegenShiftMap_Rqst_Value
        (Rte_IrvRead_OHSR_MedTED_RegenShiftMapRqst_write_IRV());

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/OHSO_Override'
     */
    /* Switch: '<S535>/Switch1' incorporates:
     *  Constant: '<S1374>/Calib'
     */
    if (KeOHSR_b_FCDsrdPwrOvrrdEnbl)
    {
        /* Outport: '<Root>/VeOHSR_P_FCDsrdPwr' incorporates:
         *  Constant: '<S1373>/Calib'
         *  SignalConversion generated from: '<S2>/VeOHSR_P_FCDsrdPwr'
         */
        (void)Rte_Write_VeOHSR_P_FCDsrdPwr_Value(KeOHSR_P_FCDsrdPwrOvrrdValue);
    }
    else
    {
        /* Outport: '<Root>/VeOHSR_P_FCDsrdPwr' incorporates:
         *  SignalConversion generated from: '<S2>/VeOHSR_P_FCDsrdPwr'
         */
        (void)Rte_Write_VeOHSR_P_FCDsrdPwr_Value(tmpRead_o);
    }

    /* End of Switch: '<S535>/Switch1' */

    /* Outport: '<Root>/VeOHSR_b_DsrdRngOnAllwd' incorporates:
     *  Gain: '<S1387>/Gain'
     *  SignalConversion generated from: '<S2>/VeOHSR_b_DsrdRngOnAllwd'
     */
    (void)Rte_Write_VeOHSR_b_DsrdRngOnAllwd_Value(tmpRead_e);

    /* Outport: '<Root>/VeOHSR_b_DsrdRngStAllwd' incorporates:
     *  Gain: '<S1388>/Gain'
     *  SignalConversion generated from: '<S2>/VeOHSR_b_DsrdRngStAllwd'
     */
    (void)Rte_Write_VeOHSR_b_DsrdRngStAllwd_Value
        (rtb_TmpSignalConversionAtVeSCOR_b_DsrdRn);

    /* Switch: '<S535>/Switch' incorporates:
     *  Constant: '<S1375>/Calib'
     */
    if (KeOHSR_b_FCReqOvrrdEnbl)
    {
        /* Outport: '<Root>/VeOHSR_b_ReqFC' incorporates:
         *  Constant: '<S1376>/Calib'
         *  SignalConversion generated from: '<S2>/VeOHSR_b_ReqFC'
         */
        (void)Rte_Write_VeOHSR_b_ReqFC_Value(KeOHSR_b_FCReqOvrrdValue);
    }
    else
    {
        /* Outport: '<Root>/VeOHSR_b_ReqFC' incorporates:
         *  SignalConversion generated from: '<S2>/VeOHSR_b_ReqFC'
         *  UnitDelay: '<S1390>/Unit Delay'
         */
        (void)Rte_Write_VeOHSR_b_ReqFC_Value(OHSR_ac_DW.UnitDelay_DSTATE_kp5);
    }

    /* End of Switch: '<S535>/Switch' */

    /* Outport: '<Root>/VeOHSR_n_TransMinEngSpd' incorporates:
     *  Gain: '<S1386>/Gain'
     *  SignalConversion generated from: '<S2>/VeOHSR_n_TransMinEngSpd'
     */
    (void)Rte_Write_VeOHSR_n_TransMinEngSpd_Value
        (OHSR_ac_B.TmpSignalConversionAtTransMin_ReadOutpor);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Merge: '<Root>/DsrdRngSt_IRV_Merge' incorporates:
     *  DataTypeConversion: '<S542>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/DsrdRngSt_write'
     * */
    Rte_IrvWrite_OHSR_MedTED_DsrdRngSt_write_IRV(OHSR_ac_B.DataTypeConversion_a);

    /* Merge: '<Root>/ShftEfftRdctn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/ShftEfftRdctn_write'
     * */
    Rte_IrvWrite_OHSR_MedTED_ShftEfftRdctn_write_IRV
        (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_fa);

    /* Merge: '<Root>/ShftEfft_N4H_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/ShftEfft_N4H_write'
     * */
    Rte_IrvWrite_OHSR_MedTED_ShftEfft_N4H_write_IRV
        (OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_fy);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, OHSR_CODE) OHSR_PwrOn(void)
{
    sint32 i;

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/OHSR_FUNC_PxPy_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/OHSO_Initialization_Process'
     */

    /* SignalConversion generated from: '<S1413>/LeOHSR_n_InitInputSpdDsrdN' incorporates:
     *  Constant: '<S1425>/Calib'
     */
    OHSR_ac_B.OutportBufferForLeOHSR_n_InitInputSpdDsr =
        KeOHSR_n_InitInputSpdDsrdN;

    /* SignalConversion generated from: '<S1413>/LeOHSR_n_InitInputSpdDsrdM1' incorporates:
     *  Constant: '<S1422>/Calib'
     */
    OHSR_ac_B.OutportBufferForLeOHSR_n_InitInputSpdD_b =
        KeOHSR_n_InitInputSpdDsrdM1;

    /* SignalConversion generated from: '<S1413>/LeOHSR_n_InitInputSpdDsrdM2' incorporates:
     *  Constant: '<S1423>/Calib'
     */
    OHSR_ac_B.OutportBufferForLeOHSR_n_InitInputSpdD_n =
        KeOHSR_n_InitInputSpdDsrdM2;

    /* SignalConversion generated from: '<S1413>/LeOHSR_n_InitInputSpdDsrdM3' incorporates:
     *  Constant: '<S1424>/Calib'
     */
    OHSR_ac_B.OutportBufferForLeOHSR_n_InitInputSpdD_d =
        KeOHSR_n_InitInputSpdDsrdM3;

    /* SignalConversion generated from: '<S1413>/LeOHSR_n_InitMtrBSpdDsrd' incorporates:
     *  Constant: '<S1426>/Calib'
     */
    OHSR_ac_B.OutportBufferForLeOHSR_n_InitMtrBSpdDsrd =
        KeOHSR_n_InitMtrBSpdDsrd;

    /* SignalConversion generated from: '<S1413>/LeOHSR_e_InitRngDsrd' incorporates:
     *  Constant: '<S1421>/Calib'
     */
    OHSR_ac_B.OutportBufferForLeOHSR_e_InitRngDsrd = KeOHSR_e_InitRngDsrd;

    /* SignalConversion generated from: '<S1413>/LeOHSR_b_InitEngDsrd' incorporates:
     *  Constant: '<S1418>/Calib'
     */
    OHSR_ac_B.OutportBufferForLeOHSR_b_InitEngDsrd = KeOHSR_b_InitEngDsrd;

    /* SignalConversion generated from: '<S1413>/LeOHSR_b_InitRngOpt' */
    OHSR_ac_B.OutportBufferForLeOHSR_b_InitRngOpt = false;

    /* SignalConversion generated from: '<S1413>/LeOHSR_n_Init_RollingIdle_NiOffset' incorporates:
     *  Constant: '<S1427>/Calib'
     */
    OHSR_ac_B.OutportBufferForLeOHSR_n_Init_RollingIdl =
        KeOHSR_n_Init_RollingIdle_NiOffset;

    /* SignalConversion generated from: '<S1413>/LeOHSR_b_RegenShiftMap_Rqst' */
    OHSR_ac_B.OutportBufferForLeOHSR_b_RegenShiftMap_R = false;

    /* SignalConversion generated from: '<S1413>/LeOHSR_n_TransMinEngSpd' incorporates:
     *  Constant: '<S1428>/Calib'
     */
    OHSR_ac_B.OutportBufferForLeOHSR_n_TransMinEngSpd =
        KeOHSR_n_Init_TransMinEngSpd;

    /* SignalConversion generated from: '<S1413>/LeOHSR_P_InitFCDsrdPwr' incorporates:
     *  Constant: '<S1417>/Calib'
     */
    OHSR_ac_B.OutportBufferForLeOHSR_P_InitFCDsrdPwr = KeOHSR_P_InitFCDsrdPwr;

    /* SignalConversion generated from: '<S1413>/LeOHSR_b_InitFCReq' incorporates:
     *  Constant: '<S1419>/Calib'
     */
    OHSR_ac_B.OutportBufferForLeOHSR_b_InitFCReq = KeOHSR_b_InitFCReq;

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S1414>/VeOHSR_e_ILEState_Out_Init' incorporates:
     *  Constant: '<S1414>/Const1'
     */
    OHSR_ac_B.OutportBufferForVeOHSR_e_ILEState_Out_In = OHSR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S1414>/VeOHSR_n_IdleSpdBlended_Out_Init' */
    OHSR_ac_B.OutportBufferForVeOHSR_n_IdleSpdBlended_ = 0.0F;

    /* SignalConversion generated from: '<S1414>/VeOHSR_n_IdleSpeed_Target_Out_Init' */
    OHSR_ac_B.OutportBufferForVeOHSR_n_IdleSpeed_Targe = 0.0F;
    for (i = 0; i < 6; i++)
    {
        /* SignalConversion generated from: '<S1414>/VaOHSR_n_NtiMaxPerStgcRngSt_Out_Init' */
        OHSR_ac_B.OutportBufferForVaOHSR_n_NtiMaxPerStgcRn[i] = 0.0F;

        /* SignalConversion generated from: '<S1414>/VaOHSR_n_NtiMinPerStgcRngSt_Out_Init' */
        OHSR_ac_B.OutportBufferForVaOHSR_n_NtiMinPerStgcRn[i] = 0.0F;
    }

    /* SignalConversion generated from: '<S1414>/VeOHSR_e_SGrDsrd_GSI_Out_Init' incorporates:
     *  Constant: '<S1414>/Const6'
     */
    OHSR_ac_B.OutportBufferForVeOHSR_e_SGrDsrd_GSI_Out = OHSR_ac_ConstB.Const6;

    /* SignalConversion generated from: '<S1414>/VeOHSR_b_EnaGSI_Out_Init' */
    OHSR_ac_B.OutportBufferForVeOHSR_b_EnaGSI_Out_Init = false;

    /* SignalConversion generated from: '<S1414>/VeOHSR_b_DsrdRngOnAllwd_Out_Init' */
    OHSR_ac_B.OutportBufferForVeOHSR_b_DsrdRngOnAllwd_ = false;

    /* SignalConversion generated from: '<S1414>/VeOHSR_b_DsrdRngStAllwd_Out_Init' */
    OHSR_ac_B.OutportBufferForVeOHSR_b_DsrdRngStAllwd_ = false;

    /* SignalConversion generated from: '<S1414>/VeOHSR_b_P2IdleZeroSpdEnbl_Out_Init' */
    OHSR_ac_B.OutportBufferForVeOHSR_b_P2IdleZeroSpdEn = false;

    /* SignalConversion generated from: '<S1414>/VeOHSR_b_SuperCreepActive_Out_Init' */
    OHSR_ac_B.OutportBufferForVeOHSR_b_SuperCreepActiv = false;

    /* SignalConversion generated from: '<S1414>/VeOHSR_n_IdleSpeedSetPoint_Out_Init' */
    OHSR_ac_B.OutportBufferForVeOHSR_n_IdleSpeedSetPoi = 0.0F;

    /* SignalConversion generated from: '<S1414>/VeOHSR_b_ServEngOff_StgcInhb_Out_Init' */
    OHSR_ac_B.OutportBufferForVeOHSR_b_ServEngOff_Stgc = false;

    /* SignalConversion generated from: '<S1414>/NTurb_Virt_write' */
    OHSR_ac_B.OutportBufferForNTurb_Virt_write = 0.0F;

    /* SignalConversion generated from: '<S1414>/Nti_Max_write' */
    memset(&OHSR_ac_B.OutportBufferForNti_Max_write[0], 0, 54U * (sizeof(float32)));

    /* SignalConversion generated from: '<S1414>/Nti_Min_write' */
    memset(&OHSR_ac_B.OutportBufferForNti_Min_write[0], 0, 54U * (sizeof(float32)));

    /* SignalConversion generated from: '<S1414>/ShiftToN_write' */
    OHSR_ac_B.OutportBufferForShiftToN_write = false;

    /* SignalConversion generated from: '<S1414>/S2H_write' */
    OHSR_ac_B.OutportBufferForS2H_write = false;

    /* SignalConversion generated from: '<S1414>/PS_write' */
    OHSR_ac_B.OutportBufferForPS_write = false;

    /* SignalConversion generated from: '<S1414>/EnblTCMReqL_write' */
    OHSR_ac_B.OutportBufferForEnblTCMReqL_write = false;

    /* SignalConversion generated from: '<S1414>/NTurb_ActGr_write' */
    OHSR_ac_B.OutportBufferForNTurb_ActGr_write = 0.0F;

    /* SignalConversion generated from: '<S1414>/dSOC_write' */
    OHSR_ac_B.OutportBufferFordSOC_write = 0.0F;
    for (i = 0; i < 4; i++)
    {
        /* SignalConversion generated from: '<S1414>/StgcMaxGear_NVH_write' incorporates:
         *  Constant: '<S1429>/Constant'
         */
        OHSR_ac_B.OutportBufferForStgcMaxGear_NVH_write[i] =
            OHSR_ac_ConstB.Constant[i];
    }

    /* SignalConversion generated from: '<S1414>/TransMin_write' */
    OHSR_ac_B.OutportBufferForTransMin_write = 0.0F;

    /* SignalConversion generated from: '<S1414>/RegenShiftMapRqst_write' */
    OHSR_ac_B.OutportBufferForRegenShiftMapRqst_write = false;

    /* SignalConversion generated from: '<S1414>/VeOHSR_e_ILEState_write' incorporates:
     *  Constant: '<S1430>/Constant'
     */
    OHSR_ac_B.OutportBufferForVeOHSR_e_ILEState_write =
        OHSR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S1414>/VeOHSR_n_IdleSpdBlended_write' */
    OHSR_ac_B.OutportBufferForVeOHSR_n_IdleSpdBlende_e = 0.0F;

    /* SignalConversion generated from: '<S1414>/DsrdRngSt_write' incorporates:
     *  Constant: '<S1431>/Constant'
     */
    OHSR_ac_B.OutportBufferForDsrdRngSt_write = OHSR_ac_ConstB.Constant_af;

    /* SignalConversion generated from: '<S1414>/ShftEfftRdctn_write' */
    OHSR_ac_B.OutportBufferForShftEfftRdctn_write = false;

    /* SignalConversion generated from: '<S1414>/ShftEfft_N4H_write' */
    OHSR_ac_B.OutportBufferForShftEfft_N4H_write = false;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeOHSR_P_FCDsrdPwr' incorporates:
     *  SignalConversion generated from: '<S3>/LeOHSR_P_InitFCDsrdPwr'
     */
    (void)Rte_Write_VeOHSR_P_FCDsrdPwr_Value
        (OHSR_ac_B.OutportBufferForLeOHSR_P_InitFCDsrdPwr);

    /* Outport: '<Root>/VeOHSR_b_EngDsrd' incorporates:
     *  SignalConversion generated from: '<S3>/LeOHSR_b_InitEngDsrd'
     */
    (void)Rte_Write_VeOHSR_b_EngDsrd_Value
        (OHSR_ac_B.OutportBufferForLeOHSR_b_InitEngDsrd);

    /* Outport: '<Root>/VeOHSR_b_ReqFC' incorporates:
     *  SignalConversion generated from: '<S3>/LeOHSR_b_InitFCReq'
     */
    (void)Rte_Write_VeOHSR_b_ReqFC_Value
        (OHSR_ac_B.OutportBufferForLeOHSR_b_InitFCReq);

    /* Outport: '<Root>/VeOHSR_b_EngOnDsrdOpt' incorporates:
     *  SignalConversion generated from: '<S3>/LeOHSR_b_InitRngOpt'
     */
    (void)Rte_Write_VeOHSR_b_EngOnDsrdOpt_Value
        (OHSR_ac_B.OutportBufferForLeOHSR_b_InitRngOpt);

    /* Outport: '<Root>/VeOHSR_b_RegenShiftMap_Rqst' incorporates:
     *  SignalConversion generated from: '<S3>/LeOHSR_b_RegenShiftMap_Rqst'
     */
    (void)Rte_Write_VeOHSR_b_RegenShiftMap_Rqst_Value
        (OHSR_ac_B.OutportBufferForLeOHSR_b_RegenShiftMap_R);

    /* Outport: '<Root>/VeOHSR_e_RngDsrd' incorporates:
     *  SignalConversion generated from: '<S1413>/LeOHSR_e_InitRngDsrd'
     *  SignalConversion generated from: '<S3>/LeOHSR_e_InitRngDsrd'
     */
    (void)Rte_Write_VeOHSR_e_RngDsrd_Value
        (OHSR_ac_B.OutportBufferForLeOHSR_e_InitRngDsrd);

    /* Outport: '<Root>/VeOHSR_e_SGrDsrd' incorporates:
     *  DataTypeConversion: '<S1415>/DataTypeConversion'
     *  SignalConversion generated from: '<S3>/LeOHSR_e_InitSGrDsrd'
     */
    (void)Rte_Write_VeOHSR_e_SGrDsrd_Value(KeOHSR_e_InitGrDsrd);

    /* Outport: '<Root>/VeOHSR_e_SGrDsrd_EngOn' incorporates:
     *  DataTypeConversion: '<S1416>/DataTypeConversion'
     *  SignalConversion generated from: '<S3>/LeOHSR_e_InitSGrDsrdOn'
     */
    (void)Rte_Write_VeOHSR_e_SGrDsrd_EngOn_Value(KeOHSR_e_InitGrDsrd);

    /* Outport: '<Root>/VeOHSR_n_InputSpeedDsrdM1' incorporates:
     *  SignalConversion generated from: '<S3>/LeOHSR_n_InitInputSpdDsrdM1'
     */
    (void)Rte_Write_VeOHSR_n_InputSpeedDsrdM1_Value
        (OHSR_ac_B.OutportBufferForLeOHSR_n_InitInputSpdD_b);

    /* Outport: '<Root>/VeOHSR_n_InputSpeedDsrdM2' incorporates:
     *  SignalConversion generated from: '<S3>/LeOHSR_n_InitInputSpdDsrdM2'
     */
    (void)Rte_Write_VeOHSR_n_InputSpeedDsrdM2_Value
        (OHSR_ac_B.OutportBufferForLeOHSR_n_InitInputSpdD_n);

    /* Outport: '<Root>/VeOHSR_n_InputSpeedDsrdM3' incorporates:
     *  SignalConversion generated from: '<S3>/LeOHSR_n_InitInputSpdDsrdM3'
     */
    (void)Rte_Write_VeOHSR_n_InputSpeedDsrdM3_Value
        (OHSR_ac_B.OutportBufferForLeOHSR_n_InitInputSpdD_d);

    /* Outport: '<Root>/VeOHSR_n_InputSpeedDsrdN' incorporates:
     *  SignalConversion generated from: '<S3>/LeOHSR_n_InitInputSpdDsrdN'
     */
    (void)Rte_Write_VeOHSR_n_InputSpeedDsrdN_Value
        (OHSR_ac_B.OutportBufferForLeOHSR_n_InitInputSpdDsr);

    /* Outport: '<Root>/VeOHSR_n_MtrBSpeedDsrd' incorporates:
     *  SignalConversion generated from: '<S3>/LeOHSR_n_InitMtrBSpdDsrd'
     */
    (void)Rte_Write_VeOHSR_n_MtrBSpeedDsrd_Value
        (OHSR_ac_B.OutportBufferForLeOHSR_n_InitMtrBSpdDsrd);

    /* Outport: '<Root>/VeOHSR_n_RollingIdle_NiOffset' incorporates:
     *  SignalConversion generated from: '<S3>/LeOHSR_n_Init_RollingIdle_NiOffset'
     */
    (void)Rte_Write_VeOHSR_n_RollingIdle_NiOffset_Value
        (OHSR_ac_B.OutportBufferForLeOHSR_n_Init_RollingIdl);

    /* Outport: '<Root>/VeOHSR_n_TransMinEngSpd' incorporates:
     *  SignalConversion generated from: '<S3>/LeOHSR_n_TransMinEngSpd'
     */
    (void)Rte_Write_VeOHSR_n_TransMinEngSpd_Value
        (OHSR_ac_B.OutportBufferForLeOHSR_n_TransMinEngSpd);

    /* Outport: '<Root>/VaOHSR_n_NtiMaxPerStgcRngSt' incorporates:
     *  SignalConversion generated from: '<S3>/VaOHSR_n_NtiMaxPerStgcRngSt_Out_Init'
     */
    (void)Rte_Write_VaOHSR_n_NtiMaxPerStgcRngSt_Value
        (OHSR_ac_B.OutportBufferForVaOHSR_n_NtiMaxPerStgcRn);

    /* Outport: '<Root>/VaOHSR_n_NtiMinPerStgcRngSt' incorporates:
     *  SignalConversion generated from: '<S3>/VaOHSR_n_NtiMinPerStgcRngSt_Out_Init'
     */
    (void)Rte_Write_VaOHSR_n_NtiMinPerStgcRngSt_Value
        (OHSR_ac_B.OutportBufferForVaOHSR_n_NtiMinPerStgcRn);

    /* Outport: '<Root>/VeOHSR_b_DsrdRngOnAllwd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOHSR_b_DsrdRngOnAllwd_Out_Init'
     */
    (void)Rte_Write_VeOHSR_b_DsrdRngOnAllwd_Value
        (OHSR_ac_B.OutportBufferForVeOHSR_b_DsrdRngOnAllwd_);

    /* Outport: '<Root>/VeOHSR_b_DsrdRngStAllwd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOHSR_b_DsrdRngStAllwd_Out_Init'
     */
    (void)Rte_Write_VeOHSR_b_DsrdRngStAllwd_Value
        (OHSR_ac_B.OutportBufferForVeOHSR_b_DsrdRngStAllwd_);

    /* Outport: '<Root>/VeOHSR_b_EnaGSI' incorporates:
     *  SignalConversion generated from: '<S3>/VeOHSR_b_EnaGSI_Out_Init'
     */
    (void)Rte_Write_VeOHSR_b_EnaGSI_Value
        (OHSR_ac_B.OutportBufferForVeOHSR_b_EnaGSI_Out_Init);

    /* Outport: '<Root>/VeOHSR_b_P2IdleZeroSpdEnbl' incorporates:
     *  SignalConversion generated from: '<S3>/VeOHSR_b_P2IdleZeroSpdEnbl_Out_Init'
     */
    (void)Rte_Write_VeOHSR_b_P2IdleZeroSpdEnbl_Value
        (OHSR_ac_B.OutportBufferForVeOHSR_b_P2IdleZeroSpdEn);

    /* Outport: '<Root>/VeOHSR_b_ServEngOff_StgcInhb' incorporates:
     *  SignalConversion generated from: '<S3>/VeOHSR_b_ServEngOff_StgcInhb_Out_Init'
     */
    (void)Rte_Write_VeOHSR_b_ServEngOff_StgcInhb_Value
        (OHSR_ac_B.OutportBufferForVeOHSR_b_ServEngOff_Stgc);

    /* Outport: '<Root>/VeOHSR_b_SuperCreepActive' incorporates:
     *  SignalConversion generated from: '<S3>/VeOHSR_b_SuperCreepActive_Out_Init'
     */
    (void)Rte_Write_VeOHSR_b_SuperCreepActive_Value
        (OHSR_ac_B.OutportBufferForVeOHSR_b_SuperCreepActiv);

    /* Outport: '<Root>/VeOHSR_e_ILEState' incorporates:
     *  SignalConversion generated from: '<S1414>/VeOHSR_e_ILEState_Out_Init'
     *  SignalConversion generated from: '<S3>/VeOHSR_e_ILEState_Out_Init'
     */
    (void)Rte_Write_VeOHSR_e_ILEState_Value
        (OHSR_ac_B.OutportBufferForVeOHSR_e_ILEState_Out_In);

    /* Outport: '<Root>/VeOHSR_e_SGrDsrd_GSI' incorporates:
     *  SignalConversion generated from: '<S1414>/VeOHSR_e_SGrDsrd_GSI_Out_Init'
     *  SignalConversion generated from: '<S3>/VeOHSR_e_SGrDsrd_GSI_Out_Init'
     */
    (void)Rte_Write_VeOHSR_e_SGrDsrd_GSI_Value
        (OHSR_ac_B.OutportBufferForVeOHSR_e_SGrDsrd_GSI_Out);

    /* Outport: '<Root>/VeOHSR_n_IdleSpdBlended' incorporates:
     *  SignalConversion generated from: '<S3>/VeOHSR_n_IdleSpdBlended_Out_Init'
     */
    (void)Rte_Write_VeOHSR_n_IdleSpdBlended_Value
        (OHSR_ac_B.OutportBufferForVeOHSR_n_IdleSpdBlended_);

    /* Outport: '<Root>/VeOHSR_n_IdleSpeedSetPoint' incorporates:
     *  SignalConversion generated from: '<S3>/VeOHSR_n_IdleSpeedSetPoint_Out_Init'
     */
    (void)Rte_Write_VeOHSR_n_IdleSpeedSetPoint_Value
        (OHSR_ac_B.OutportBufferForVeOHSR_n_IdleSpeedSetPoi);

    /* Outport: '<Root>/VeOHSR_n_IdleSpeed_Target' incorporates:
     *  SignalConversion generated from: '<S3>/VeOHSR_n_IdleSpeed_Target_Out_Init'
     */
    (void)Rte_Write_VeOHSR_n_IdleSpeed_Target_Value
        (OHSR_ac_B.OutportBufferForVeOHSR_n_IdleSpeed_Targe);

    /* Merge: '<Root>/DsrdRngSt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1414>/DsrdRngSt_write'
     *  SignalConversion generated from: '<S3>/DsrdRngSt_write'
     * */
    Rte_IrvWrite_OHSR_PwrOn_DsrdRngSt_write_IRV
        (OHSR_ac_B.OutportBufferForDsrdRngSt_write);

    /* Merge: '<Root>/EnblTCMReqL_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/EnblTCMReqL_write'
     * */
    Rte_IrvWrite_OHSR_PwrOn_EnblTCMReqL_write_IRV
        (OHSR_ac_B.OutportBufferForEnblTCMReqL_write);

    /* Merge: '<Root>/NTurb_ActGr_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/NTurb_ActGr_write'
     * */
    Rte_IrvWrite_OHSR_PwrOn_NTurb_ActGr_write_IRV
        (OHSR_ac_B.OutportBufferForNTurb_ActGr_write);

    /* Merge: '<Root>/NTurb_Virt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/NTurb_Virt_write'
     * */
    Rte_IrvWrite_OHSR_PwrOn_NTurb_Virt_write_IRV
        (OHSR_ac_B.OutportBufferForNTurb_Virt_write);

    /* Merge: '<Root>/Nti_Max_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/Nti_Max_write'
     */
    Rte_IrvWrite_OHSR_PwrOn_Nti_Max_write_IRV
        (OHSR_ac_B.OutportBufferForNti_Max_write);

    /* Merge: '<Root>/Nti_Min_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/Nti_Min_write'
     */
    Rte_IrvWrite_OHSR_PwrOn_Nti_Min_write_IRV
        (OHSR_ac_B.OutportBufferForNti_Min_write);

    /* Merge: '<Root>/PS_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/PS_write'
     * */
    Rte_IrvWrite_OHSR_PwrOn_PS_write_IRV(OHSR_ac_B.OutportBufferForPS_write);

    /* Merge: '<Root>/RegenShiftMapRqst_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/RegenShiftMapRqst_write'
     * */
    Rte_IrvWrite_OHSR_PwrOn_RegenShiftMapRqst_write_IRV
        (OHSR_ac_B.OutportBufferForRegenShiftMapRqst_write);

    /* Merge: '<Root>/S2H_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/S2H_write'
     * */
    Rte_IrvWrite_OHSR_PwrOn_S2H_write_IRV(OHSR_ac_B.OutportBufferForS2H_write);

    /* Merge: '<Root>/ShftEfftRdctn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/ShftEfftRdctn_write'
     * */
    Rte_IrvWrite_OHSR_PwrOn_ShftEfftRdctn_write_IRV
        (OHSR_ac_B.OutportBufferForShftEfftRdctn_write);

    /* Merge: '<Root>/ShftEfft_N4H_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/ShftEfft_N4H_write'
     * */
    Rte_IrvWrite_OHSR_PwrOn_ShftEfft_N4H_write_IRV
        (OHSR_ac_B.OutportBufferForShftEfft_N4H_write);

    /* Merge: '<Root>/ShiftToN_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/ShiftToN_write'
     * */
    Rte_IrvWrite_OHSR_PwrOn_ShiftToN_write_IRV
        (OHSR_ac_B.OutportBufferForShiftToN_write);

    /* Merge: '<Root>/StgcMaxGear_NVH_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/StgcMaxGear_NVH_write'
     */
    Rte_IrvWrite_OHSR_PwrOn_StgcMaxGear_NVH_write_IRV
        (OHSR_ac_B.OutportBufferForStgcMaxGear_NVH_write);

    /* Merge: '<Root>/TransMin_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/TransMin_write'
     * */
    Rte_IrvWrite_OHSR_PwrOn_TransMin_write_IRV
        (OHSR_ac_B.OutportBufferForTransMin_write);

    /* Merge: '<Root>/VeOHSR_e_ILEState_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1414>/VeOHSR_e_ILEState_write'
     *  SignalConversion generated from: '<S3>/VeOHSR_e_ILEState_write'
     * */
    Rte_IrvWrite_OHSR_PwrOn_VeOHSR_e_ILEState_write_IRV
        (OHSR_ac_B.OutportBufferForVeOHSR_e_ILEState_write);

    /* Merge: '<Root>/VeOHSR_n_IdleSpdBlended_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeOHSR_n_IdleSpdBlended_write'
     * */
    Rte_IrvWrite_OHSR_PwrOn_VeOHSR_n_IdleSpdBlended_write_IRV
        (OHSR_ac_B.OutportBufferForVeOHSR_n_IdleSpdBlende_e);

    /* Merge: '<Root>/dSOC_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/dSOC_write'
     * */
    Rte_IrvWrite_OHSR_PwrOn_dSOC_write_IRV(OHSR_ac_B.OutportBufferFordSOC_write);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, OHSR_CODE) OHSR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        sint32 i;
        for (i = 0; i < 4; i++)
        {
            OHSR_ac_B.OutportBufferForStgcMaxGear_NVH_write[i] = CeSCOR_e_SG_1;
        }
    }

    {
        sint32 i;
        float32 tmp[6];

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
         *  SubSystem: '<Root>/OHSR_FUNC_PxPy_PwrOn'
         */
        /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
         *  SubSystem: '<S3>/OHSO_Initialization_Process'
         */

        /* SystemInitialize for SignalConversion generated from: '<S1413>/LeOHSR_n_InitInputSpdDsrdN' */
        OHSR_ac_B.OutportBufferForLeOHSR_n_InitInputSpdDsr =
            KeOHSR_n_InitInputSpdDsrdN;

        /* SystemInitialize for SignalConversion generated from: '<S1413>/LeOHSR_n_InitInputSpdDsrdM1' */
        OHSR_ac_B.OutportBufferForLeOHSR_n_InitInputSpdD_b =
            KeOHSR_n_InitInputSpdDsrdM1;

        /* SystemInitialize for SignalConversion generated from: '<S1413>/LeOHSR_n_InitInputSpdDsrdM2' */
        OHSR_ac_B.OutportBufferForLeOHSR_n_InitInputSpdD_n =
            KeOHSR_n_InitInputSpdDsrdM2;

        /* SystemInitialize for SignalConversion generated from: '<S1413>/LeOHSR_n_InitInputSpdDsrdM3' */
        OHSR_ac_B.OutportBufferForLeOHSR_n_InitInputSpdD_d =
            KeOHSR_n_InitInputSpdDsrdM3;

        /* SystemInitialize for SignalConversion generated from: '<S1413>/LeOHSR_n_InitMtrBSpdDsrd' */
        OHSR_ac_B.OutportBufferForLeOHSR_n_InitMtrBSpdDsrd =
            KeOHSR_n_InitMtrBSpdDsrd;

        /* SystemInitialize for SignalConversion generated from: '<S1413>/LeOHSR_e_InitRngDsrd' incorporates:
         *  Constant: '<S1421>/Calib'
         */
        OHSR_ac_B.OutportBufferForLeOHSR_e_InitRngDsrd = KeOHSR_e_InitRngDsrd;

        /* SystemInitialize for SignalConversion generated from: '<S1413>/LeOHSR_b_InitEngDsrd' */
        OHSR_ac_B.OutportBufferForLeOHSR_b_InitEngDsrd = KeOHSR_b_InitEngDsrd;

        /* SystemInitialize for SignalConversion generated from: '<S1413>/LeOHSR_n_Init_RollingIdle_NiOffset' */
        OHSR_ac_B.OutportBufferForLeOHSR_n_Init_RollingIdl =
            KeOHSR_n_Init_RollingIdle_NiOffset;

        /* SystemInitialize for SignalConversion generated from: '<S1413>/LeOHSR_n_TransMinEngSpd' */
        OHSR_ac_B.OutportBufferForLeOHSR_n_TransMinEngSpd =
            KeOHSR_n_Init_TransMinEngSpd;

        /* SystemInitialize for SignalConversion generated from: '<S1413>/LeOHSR_P_InitFCDsrdPwr' */
        OHSR_ac_B.OutportBufferForLeOHSR_P_InitFCDsrdPwr =
            KeOHSR_P_InitFCDsrdPwr;

        /* SystemInitialize for SignalConversion generated from: '<S1413>/LeOHSR_b_InitFCReq' */
        OHSR_ac_B.OutportBufferForLeOHSR_b_InitFCReq = KeOHSR_b_InitFCReq;

        /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
         *  SubSystem: '<S3>/Sub_Out_Init'
         */
        /* SystemInitialize for SignalConversion generated from: '<S1414>/VeOHSR_e_ILEState_Out_Init' incorporates:
         *  Constant: '<S1414>/Const1'
         */
        OHSR_ac_B.OutportBufferForVeOHSR_e_ILEState_Out_In =
            OHSR_ac_ConstB.Const1;

        /* SystemInitialize for SignalConversion generated from: '<S1414>/VeOHSR_e_SGrDsrd_GSI_Out_Init' incorporates:
         *  Constant: '<S1414>/Const6'
         */
        OHSR_ac_B.OutportBufferForVeOHSR_e_SGrDsrd_GSI_Out =
            OHSR_ac_ConstB.Const6;
        for (i = 0; i < 4; i++)
        {
            /* SystemInitialize for SignalConversion generated from: '<S1414>/StgcMaxGear_NVH_write' incorporates:
             *  Constant: '<S1429>/Constant'
             */
            OHSR_ac_B.OutportBufferForStgcMaxGear_NVH_write[i] =
                OHSR_ac_ConstB.Constant[i];
        }

        /* SystemInitialize for SignalConversion generated from: '<S1414>/VeOHSR_e_ILEState_write' incorporates:
         *  Constant: '<S1430>/Constant'
         */
        OHSR_ac_B.OutportBufferForVeOHSR_e_ILEState_write =
            OHSR_ac_ConstB.Constant_a;

        /* SystemInitialize for SignalConversion generated from: '<S1414>/DsrdRngSt_write' incorporates:
         *  Constant: '<S1431>/Constant'
         */
        OHSR_ac_B.OutportBufferForDsrdRngSt_write = OHSR_ac_ConstB.Constant_af;

        /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
         *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTEB'
         */
        /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
         *  SubSystem: '<S1>/OHSC_Creep_Launch_Determination'
         */
        /* Start for If: '<S7>/If' */
        OHSR_ac_DW.If_ActiveSubsystem_p = -1;

        /* SystemInitialize for SignalConversion generated from: '<S10>/XeOHSR_b_ILEstate_Enbl' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_5

        /* SystemInitialize for VariantMerge generated from: '<S10>/XeOHSR_b_ILEstate_Enbl' incorporates:
         *  Merge: '<S10>/Merge'
         *  UnitDelay: '<S10>/Unit Delay'
         */
        OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_ia =
            OHSR_ac_DW.UnitDelay_DSTATE_hs;

#else

        /* SystemInitialize for VariantMerge generated from: '<S10>/XeOHSR_b_ILEstate_Enbl' incorporates:
         *  Constant: '<S320>/Constant'
         */
        OHSR_ac_B.VariantMerge_For_Variant_Source_XeOHS_ia = OHSR_ac_B.Constant;

#endif

        /* End of SystemInitialize for SignalConversion generated from: '<S10>/XeOHSR_b_ILEstate_Enbl' */

        /* SystemInitialize for IfAction SubSystem: '<S7>/EngineOff' */
        /* Start for If: '<S15>/If' */
        OHSR_ac_DW.If_ActiveSubsystem_e = -1;

        /* End of SystemInitialize for SubSystem: '<S7>/EngineOff' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

        /* SystemInitialize for Atomic SubSystem: '<S7>/IS_Blend_Filt' */
        /* Start for If: '<S18>/If1' */
        OHSR_ac_DW.If1_ActiveSubsystem_k = -1;

        /* End of SystemInitialize for SubSystem: '<S7>/IS_Blend_Filt' */
#endif

        /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
         *  SubSystem: '<Root>/OHSR_FUNC_PxPy_MedTED'
         */
        /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
         *  SubSystem: '<S2>/OHSC_Range_Selection'
         */
        /* Start for If: '<S1162>/If' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_11 || Rte_SysCon_Variant_OHSR_FUNC_PxPy_13

        OHSR_ac_DW.If_ActiveSubsystem = -1;

#endif

        /* End of Start for If: '<S1162>/If' */

        /* Start for If: '<S536>/If1' */
        OHSR_ac_DW.If1_ActiveSubsystem = -1;

        /* Start for If: '<S536>/If2' */
        OHSR_ac_DW.If2_ActiveSubsystem = -1;

        /* Start for If: '<S536>/If' */
        OHSR_ac_DW.If_ActiveSubsystem_k = -1;

        /* Start for If: '<S1232>/If' */
#if Rte_SysCon_Variant_OHSR_FUNC_PxPy_1

        OHSR_ac_DW.If_ActiveSubsystem_j = -1;

#endif

        /* End of Start for If: '<S1232>/If' */
        /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

        /* SystemInitialize for Outport: '<Root>/VeOHSR_e_RngDsrd' incorporates:
         *  Merge: '<Root>/Merge_11'
         */
        (void)Rte_Write_VeOHSR_e_RngDsrd_Value(CeOHSR_e_RngSel_N);

        /* SystemInitialize for Outport: '<Root>/VeOHSR_e_SGrDsrd' incorporates:
         *  Merge: '<Root>/Merge_4'
         */
        (void)Rte_Write_VeOHSR_e_SGrDsrd_Value(CeOHSR_e_SG_Reverse);

        /* SystemInitialize for Outport: '<Root>/VeOHSR_e_ILEState' incorporates:
         *  Merge: '<Root>/Merge_Outport_9'
         */
        (void)Rte_Write_VeOHSR_e_ILEState_Value(CeOHSR_e_NeutralState);

        /* SystemInitialize for Outport: '<Root>/VeOHSR_e_SGrDsrd_EngOn' incorporates:
         *  Merge: '<Root>/Merge_7'
         */
        (void)Rte_Write_VeOHSR_e_SGrDsrd_EngOn_Value(CeOHSR_e_SG_Reverse);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_16' */
        for (i = 0; i < 6; i++)
        {
            tmp[i] = 0.0F;
        }

        /* SystemInitialize for Outport: '<Root>/VaOHSR_n_NtiMaxPerStgcRngSt' incorporates:
         *  Merge: '<Root>/Merge_Outport_16'
         */
        (void)Rte_Write_VaOHSR_n_NtiMaxPerStgcRngSt_Value(tmp);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_17' */
        for (i = 0; i < 6; i++)
        {
            tmp[i] = 0.0F;
        }

        /* SystemInitialize for Outport: '<Root>/VaOHSR_n_NtiMinPerStgcRngSt' incorporates:
         *  Merge: '<Root>/Merge_Outport_17'
         */
        (void)Rte_Write_VaOHSR_n_NtiMinPerStgcRngSt_Value(tmp);

        /* SystemInitialize for Outport: '<Root>/VeOHSR_e_SGrDsrd_GSI' incorporates:
         *  Merge: '<Root>/Merge_Outport_19'
         */
        (void)Rte_Write_VeOHSR_e_SGrDsrd_GSI_Value(CeOHSR_e_SG_Reverse);
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
