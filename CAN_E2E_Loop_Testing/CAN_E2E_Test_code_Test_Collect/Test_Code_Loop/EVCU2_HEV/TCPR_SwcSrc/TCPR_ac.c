/*
 * File: TCPR_ac.c
 *
 * Code generated for Simulink model 'TCPR_ac'.
 *
 * Model version                  : 9.54
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:28:03 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TCPR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_TCPR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static volatile CONST(uint16, TCPR_VAR_INIT) HaTCPR_i_HTDR_ClchLckdCntrl[16] =
{
    0U, 1U, 2U, 0U, 0U, 3U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
} ;                                    /* Referenced by: '<S20>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static volatile CONST(uint16, TCPR_VAR_INIT) HaTCPR_i_OITR_ClchLckdCntrl[16] =
{
    0U, 1U, 2U, 0U, 0U, 3U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
} ;                                    /* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static volatile CONST(uint16, TCPR_VAR_INIT) HaTCPR_i_VTVR_ClchLckdCntrl[16] =
{
    0U, 1U, 2U, 0U, 0U, 3U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
} ;                                    /* Referenced by: '<S30>/Calib' */

#endif

static volatile CONST(float32, TCPR_VAR_INIT) HeTCPR_M_Clch1_TorqLmtInit =
    20000.0F;                          /* Referenced by:
                                        * '<S4>/Calib'
                                        * '<S757>/Calib'
                                        */
static volatile CONST(float32, TCPR_VAR_INIT) HeTCPR_M_Clch2_TorqLmtInit =
    20000.0F;                          /* Referenced by:
                                        * '<S5>/Calib'
                                        * '<S758>/Calib'
                                        */
static volatile CONST(float32, TCPR_VAR_INIT) HeTCPR_M_Clch3_TorqLmtInit = 0.0F;/* Referenced by:
                                                                      * '<S6>/Calib'
                                                                      * '<S759>/Calib'
                                                                      */
static volatile CONST(float32, TCPR_VAR_INIT) HeTCPR_M_Clch4_TorqLmtInit = 0.0F;/* Referenced by:
                                                                      * '<S7>/Calib'
                                                                      * '<S760>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(boolean, TCPR_VAR_INIT) HeTCPR_b_Enb_C1_Asymetric_ClchLim =
    0;                                 /* Referenced by: '<S31>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(boolean, TCPR_VAR_INIT) HeTCPR_b_Enb_C2_Asymetric_ClchLim =
    0;                                 /* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(boolean, TCPR_VAR_INIT) HeTCPR_b_Enb_C3_Asymetric_ClchLim =
    0;                                 /* Referenced by: '<S428>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(boolean, TCPR_VAR_INIT) HeTCPR_b_Enb_C4_Asymetric_ClchLim =
    0;                                 /* Referenced by: '<S593>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) HeTCPR_t_MedTED_dT = 0.02F;/* Referenced by:
                                                                      * '<S32>/Calib'
                                                                      * '<S232>/Calib'
                                                                      * '<S429>/Calib'
                                                                      * '<S594>/Calib'
                                                                      * '<S94>/Calib'
                                                                      * '<S97>/Calib'
                                                                      * '<S294>/Calib'
                                                                      * '<S297>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(boolean, TCPR_VAR_INIT) KaTCPR_b_C1LckdStdyStSel[16] =
{
    0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S226>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(boolean, TCPR_VAR_INIT)
    KaTCPR_b_C1_HSERStCmpForPredReserve[256] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S33>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(boolean, TCPR_VAR_INIT) KaTCPR_b_C1_TRNRStsEnaAdjEstTorq[7]
    =
{
    0, 0, 1, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S34>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(boolean, TCPR_VAR_INIT)
    KaTCPR_b_C2_HSERStCmpForPredReserve[256] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S233>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(boolean, TCPR_VAR_INIT) KaTCPR_b_C2_TRNRStsEnaAdjEstTorq[7]
    =
{
    0, 0, 1, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(boolean, TCPR_VAR_INIT) KaTCPR_b_M2GrStSel[16] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1
} ;                                    /* Referenced by: '<S227>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_K_C1_Max_Scalar = 1.0F;/* Referenced by: '<S35>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_K_C1_Min_Scalar = -1.0F;/* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_K_C2_Max_Scalar = 1.0F;/* Referenced by: '<S235>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_K_C2_Min_Scalar = -1.0F;/* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_K_C3_Max_Scalar = 1.0F;/* Referenced by: '<S430>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_K_C3_Min_Scalar = -1.0F;/* Referenced by: '<S431>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_K_C4_Max_Scalar = 1.0F;/* Referenced by: '<S595>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_K_C4_Min_Scalar = -1.0F;/* Referenced by: '<S596>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_M_C1_ClampTorqRampStep =
    6.0F;                              /* Referenced by: '<S37>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_M_C1_ClmpTorq = 30.0F;/* Referenced by: '<S38>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_M_C1_PredClchOffst = 100.0F;/* Referenced by: '<S39>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_M_C2_ClampTorqRampStep =
    6.0F;                              /* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_M_C2_ClmpTorq = 30.0F;/* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_M_C2_PredClchOffst = 100.0F;/* Referenced by: '<S239>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_M_C3_ClampTorqRampStep =
    6.0F;                              /* Referenced by: '<S432>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_M_C3_ClmpTorq = 30.0F;/* Referenced by: '<S433>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_M_C4_ClampTorqRampStep =
    6.0F;                              /* Referenced by: '<S597>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_M_C4_ClmpTorq = 30.0F;/* Referenced by: '<S598>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_M_Clch1_ResetTcMax_TrqDiff =
    25.0F;                             /* Referenced by: '<S228>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_C1_AdjEstTorqAllwd = 0;/* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_C1_UseLCCMinMaxTrqAllwd =
    0;                                 /* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_C1_UseSignedClutchTh = 0;/* Referenced by: '<S42>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_C1_UseTcMax4HTDR = 1;/* Referenced by: '<S229>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_C2_AdjEstTorqAllwd = 0;/* Referenced by: '<S240>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_C2_UseLCCMinMaxTrqAllwd =
    0;                                 /* Referenced by: '<S241>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_C2_UseSignedClutchTh = 0;/* Referenced by: '<S242>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_C2_UseTcMax4HTDR = 0;/* Referenced by: '<S243>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_C3_UseLCCMinMaxTrqAllwd =
    0;                                 /* Referenced by: '<S434>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_C3_UseSignedClutchTh = 0;/* Referenced by: '<S435>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_C4_UseLCCMinMaxTrqAllwd =
    0;                                 /* Referenced by: '<S599>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_C4_UseSignedClutchTh = 0;/* Referenced by: '<S600>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static volatile CONST(boolean, TCPR_VAR_INIT)
    KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR = 0;/* Referenced by:
                                             * '<S43>/Calib'
                                             * '<S244>/Calib'
                                             * '<S436>/Calib'
                                             * '<S601>/Calib'
                                             */

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_CntrlTcRMin_OvrdTo0_OnRst
    = 1;                               /* Referenced by:
                                        * '<S44>/Calib'
                                        * '<S245>/Calib'
                                        * '<S437>/Calib'
                                        * '<S602>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_CntrlTcR_ApplyLdOfstOnR =
    0;                                 /* Referenced by:
                                        * '<S45>/Calib'
                                        * '<S246>/Calib'
                                        * '<S438>/Calib'
                                        * '<S603>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_CntrlTcR_OvrdTo0_OnRlsd =
    1;                                 /* Referenced by:
                                        * '<S46>/Calib'
                                        * '<S247>/Calib'
                                        * '<S439>/Calib'
                                        * '<S604>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_CntrlTcR_OvrdTo0_OnRst =
    1;                                 /* Referenced by:
                                        * '<S47>/Calib'
                                        * '<S248>/Calib'
                                        * '<S440>/Calib'
                                        * '<S605>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_EnblC2SlipRemediation = 1;/* Referenced by: '<S425>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_EnblCorrectedC1Trq = 1;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_EnblCorrectedC2Trq = 1;/* Referenced by: '<S249>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_EnblCorrectedC3Trq = 1;/* Referenced by: '<S441>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_EnblSlRec_woC1Cntrl = 0;/* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_EnblSlRec_woC2Cntrl = 0;/* Referenced by: '<S250>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_EnblSlRec_woC3Cntrl = 0;/* Referenced by: '<S442>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(boolean, TCPR_VAR_INIT) KeTCPR_b_EnblSlRec_woC4Cntrl = 0;/* Referenced by: '<S606>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static volatile CONST(boolean, TCPR_VAR_INIT)
    KeTCPR_b_PredCntrlTcR_OvrdTo0_OnRlsd = 0;/* Referenced by:
                                              * '<S50>/Calib'
                                              * '<S251>/Calib'
                                              * '<S443>/Calib'
                                              * '<S607>/Calib'
                                              */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C1_ClchCapRmpRtThresh =
    9999.0F;                           /* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C1_PwrOffTcR_RmpRt =
    1500.0F;                           /* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C1_PwrOnTcR_RmpRt =
    2500.0F;                           /* Referenced by: '<S53>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C1_SlipRcvTcR_RmpRt =
    -1000.0F;                          /* Referenced by: '<S54>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C1_SlipRcvTcR_RmpRtFast =
    -1500.0F;                          /* Referenced by: '<S55>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C2_ClchCapRmpRtThresh =
    9999.0F;                           /* Referenced by: '<S252>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C2_PwrOffTcR_RmpRt =
    1500.0F;                           /* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C2_PwrOnTcR_RmpRt =
    2500.0F;                           /* Referenced by: '<S254>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C2_SlipRcvTcR_RmpRt =
    -1000.0F;                          /* Referenced by: '<S426>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C2_SlipRcvTcR_RmpRtFast =
    -1500.0F;                          /* Referenced by: '<S255>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C3_ClchCapRmpRtThresh =
    9999.0F;                           /* Referenced by: '<S444>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C3_PwrOffTcR_RmpRt =
    1500.0F;                           /* Referenced by: '<S445>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C3_PwrOnTcR_RmpRt =
    2500.0F;                           /* Referenced by: '<S446>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C3_SlipRcvTcR_RmpRt =
    -1000.0F;                          /* Referenced by: '<S447>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C3_SlipRcvTcR_RmpRtFast =
    -1500.0F;                          /* Referenced by: '<S448>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C4_ClchCapRmpRtThresh =
    9999.0F;                           /* Referenced by: '<S608>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C4_PwrOffTcR_RmpRt =
    1500.0F;                           /* Referenced by: '<S609>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C4_PwrOnTcR_RmpRt =
    2500.0F;                           /* Referenced by: '<S610>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C4_SlipRcvTcR_RmpRt =
    -1000.0F;                          /* Referenced by: '<S611>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_dM_C4_SlipRcvTcR_RmpRtFast =
    -1500.0F;                          /* Referenced by: '<S612>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_h_C1_PresToTorqLumpedCal =
    8.52480507F;                       /* Referenced by: '<S56>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_h_C2_PresToTorqLumpedCal =
    5.77999687F;                       /* Referenced by: '<S256>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_h_C3_PresToTorqLumpedCal =
    2.05209F;                          /* Referenced by: '<S449>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_h_C4_PresToTorqLumpedCal =
    2.47008014F;                       /* Referenced by: '<S613>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_k_C1_StaticFrictionCoef =
    0.14F;                             /* Referenced by: '<S57>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_k_C2_StaticFrictionCoef =
    0.14F;                             /* Referenced by: '<S257>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_k_C3_StaticFrictionCoef =
    0.14F;                             /* Referenced by: '<S450>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_k_C4_StaticFrictionCoef =
    0.14F;                             /* Referenced by: '<S614>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_n_C1_StblStSlipDtctThresh =
    500.0F;                            /* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_n_C1_StblStSlipDtctThreshHT
    = 600.0F;                          /* Referenced by: '<S59>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_n_C2_StblStSlipDtctThresh =
    500.0F;                            /* Referenced by: '<S258>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_n_C2_StblStSlipDtctThreshHT
    = 600.0F;                          /* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_n_C3_StblStSlipDtctThresh =
    500.0F;                            /* Referenced by: '<S451>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_n_C3_StblStSlipDtctThreshHT
    = 600.0F;                          /* Referenced by: '<S452>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_n_C4_StblStSlipDtctThresh =
    500.0F;                            /* Referenced by: '<S615>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_n_C4_StblStSlipDtctThreshHT
    = 600.0F;                          /* Referenced by: '<S616>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_p_C1Press_EngOff = 700.0F;/* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_p_C1Press_EngOn = 1600.0F;/* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_p_C1_RetSpringPress =
    88.7057F;                          /* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_p_C2Press_EngOff = 0.0F;/* Referenced by: '<S260>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_p_C2Press_EngOn = 0.0F;/* Referenced by: '<S261>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_p_C2_RetSpringPress =
    131.676F;                          /* Referenced by: '<S262>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_p_C3_RetSpringPress =
    113.295F;                          /* Referenced by: '<S453>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_p_C4_RetSpringPress =
    125.62F;                           /* Referenced by: '<S617>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT)
    KeTCPR_t_C1_PredClchOffstCnvrgTqThrshld = 5.0F;/* Referenced by: '<S63>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_C1_PredClchOffstHldTm =
    0.1F;                              /* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_C1_PredClchOffstRmpRt =
    400.0F;                            /* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_C1_StblStSlipDtctTime =
    0.1F;                              /* Referenced by: '<S66>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_C1_StblStSlipDtctTimeHT =
    0.05F;                             /* Referenced by: '<S67>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_C1_StblStSlipRcvryTime =
    0.1F;                              /* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT)
    KeTCPR_t_C2_PredClchOffstCnvrgTqThrshld = 5.0F;/* Referenced by: '<S263>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_C2_PredClchOffstHldTm =
    0.1F;                              /* Referenced by: '<S264>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_C2_PredClchOffstRmpRt =
    400.0F;                            /* Referenced by: '<S265>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_C2_StblStSlipDtctTime =
    0.1F;                              /* Referenced by: '<S266>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_C2_StblStSlipDtctTimeHT =
    0.05F;                             /* Referenced by: '<S267>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_C2_StblStSlipRcvryTime =
    0.1F;                              /* Referenced by: '<S268>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_C3_StblStSlipDtctTime =
    0.1F;                              /* Referenced by: '<S454>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_C3_StblStSlipDtctTimeHT =
    0.05F;                             /* Referenced by: '<S455>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_C3_StblStSlipRcvryTime =
    0.1F;                              /* Referenced by: '<S456>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_C4_StblStSlipDtctTime =
    0.1F;                              /* Referenced by: '<S618>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_C4_StblStSlipDtctTimeHT =
    0.05F;                             /* Referenced by: '<S619>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_C4_StblStSlipRcvryTime =
    0.1F;                              /* Referenced by: '<S620>/Calib' */

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_CntrlTcRMin_LdRmpHldffOnR
    = 0.05F;                           /* Referenced by:
                                        * '<S69>/Calib'
                                        * '<S269>/Calib'
                                        * '<S457>/Calib'
                                        * '<S621>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_CntrlTcRMin_RmpHldffOnR =
    0.1F;                              /* Referenced by:
                                        * '<S70>/Calib'
                                        * '<S270>/Calib'
                                        * '<S458>/Calib'
                                        * '<S622>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_CntrlTcR_LdRmpHldffOnR =
    0.05F;                             /* Referenced by:
                                        * '<S71>/Calib'
                                        * '<S271>/Calib'
                                        * '<S459>/Calib'
                                        * '<S623>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_CntrlTcR_LeadTmForOfst =
    0.075F;                            /* Referenced by:
                                        * '<S72>/Calib'
                                        * '<S272>/Calib'
                                        * '<S460>/Calib'
                                        * '<S624>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_CntrlTcR_RmpHldffOnR =
    0.1F;                              /* Referenced by:
                                        * '<S73>/Calib'
                                        * '<S273>/Calib'
                                        * '<S461>/Calib'
                                        * '<S625>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KeTCPR_t_DlydRisingEdgeTmr = 30.0F;/* Referenced by:
                                                                      * '<S74>/Calib'
                                                                      * '<S274>/Calib'
                                                                      * '<S462>/Calib'
                                                                      * '<S626>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KtTCPR_dM_C2_ClchCapRmpRt[25] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 25.0F, 25.0F, 25.0F, 25.0F, 25.0F, 25.0F,
    25.0F, 25.0F, 25.0F, 25.0F, 25.0F, 25.0F, 25.0F, 25.0F, 25.0F, 25.0F, 25.0F,
    25.0F, 25.0F, 25.0F
} ;                                    /* Referenced by: '<S427>/Vector' */

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KtTCPR_p_MaxMainPressCapability[54]
    =
{
    500.0F, 500.0F, 500.0F, 500.0F, 1000.0F, 1300.0F, 1500.0F, 2000.0F, 2200.0F,
    475.0F, 475.0F, 475.0F, 475.0F, 950.0F, 1275.0F, 1475.0F, 1975.0F, 2175.0F,
    450.0F, 450.0F, 450.0F, 450.0F, 900.0F, 1250.0F, 1450.0F, 1950.0F, 2150.0F,
    430.0F, 430.0F, 430.0F, 430.0F, 880.0F, 1175.0F, 1400.0F, 1925.0F, 2125.0F,
    420.0F, 420.0F, 420.0F, 420.0F, 860.0F, 1150.0F, 1375.0F, 1900.0F, 2100.0F,
    400.0F, 400.0F, 400.0F, 400.0F, 840.0F, 1100.0F, 1350.0F, 1875.0F, 2075.0F
} ;                                    /* Referenced by:
                                        * '<S463>/Vector'
                                        * '<S627>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KxTCPR_dM_C2_ClchCapRmpRt[5] =
{
    0.0F, 89.0F, 147.0F, 205.0F, 250.0F
} ;                                    /* Referenced by: '<S427>/Vector' */

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KxTCPR_p_MaxMainPressCapability[9]
    =
{
    0.0F, 300.0F, 600.0F, 800.0F, 1000.0F, 1200.0F, 1400.0F, 1600.0F, 2000.0F
} ;                                    /* Referenced by:
                                        * '<S463>/Vector'
                                        * '<S627>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TCPR_7

static volatile CONST(float32, TCPR_VAR_INIT) KyTCPR_dM_C2_ClchCapRmpRt[5] =
{
    0.0F, 115.0F, 190.0F, 253.0F, 300.0F
} ;                                    /* Referenced by: '<S427>/Vector' */

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_5

static volatile CONST(float32, TCPR_VAR_INIT) KyTCPR_p_MaxMainPressCapability[6]
    =
{
    -30.0F, 0.0F, 30.0F, 60.0F, 100.0F, 150.0F
} ;                                    /* Referenced by:
                                        * '<S463>/Vector'
                                        * '<S627>/Vector'
                                        */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_TCPR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TCPR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_TCPR_3

static VAR(float32, TCPR_VAR_INIT) VeTCPC_M_C1LeadMaxCap;/* '<S75>/Switch1' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static VAR(float32, TCPR_VAR_INIT) VeTCPC_M_C1PredMaxCap;/* '<S75>/Switch2' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static VAR(float32, TCPR_VAR_INIT) VeTCPC_M_C2LeadMaxCap;/* '<S275>/Switch1' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static VAR(float32, TCPR_VAR_INIT) VeTCPC_M_C2PredMaxCap;/* '<S275>/Switch2' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static VAR(boolean, TCPR_VAR_INIT) VeTCPC_b_C1_SlRecEnbl;/* '<S204>/Logical4' */

#endif

#if Rte_SysCon_Variant_TCPR_3

static VAR(boolean, TCPR_VAR_INIT) VeTCPC_b_C1_SlRecLatch;/* '<S222>/OR1' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static VAR(boolean, TCPR_VAR_INIT) VeTCPC_b_C2_SlRecEnbl;/* '<S404>/Logical4' */

#endif

#if Rte_SysCon_Variant_TCPR_7

static VAR(boolean, TCPR_VAR_INIT) VeTCPC_b_C2_SlRecLatch;/* '<S422>/OR1' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static VAR(boolean, TCPR_VAR_INIT) VeTCPC_b_C3_SlRecEnbl;/* '<S571>/Logical4' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static VAR(boolean, TCPR_VAR_INIT) VeTCPC_b_C3_SlRecLatch;/* '<S589>/OR1' */

#endif

#if Rte_SysCon_Variant_TCPR_5

static VAR(boolean, TCPR_VAR_INIT) VeTCPC_b_C3_SlipDetected;/* '<S474>/Gain' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static VAR(boolean, TCPR_VAR_INIT) VeTCPC_b_C4_SlRecEnbl;/* '<S735>/Logical4' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static VAR(boolean, TCPR_VAR_INIT) VeTCPC_b_C4_SlRecLatch;/* '<S753>/OR1' */

#endif

#if Rte_SysCon_Variant_TCPR_1

static VAR(boolean, TCPR_VAR_INIT) VeTCPC_b_C4_SlipDetected;/* '<S638>/Gain' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TCPR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TCPR
#include "MemMap.h"

CONST(ConstP_TCPR_ac_T, TCPR_VAR_INIT) TCPR_ac_ConstP =
{

#if Rte_SysCon_Variant_TCPR_7

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S427>/Vector'
     */
    {
        4U, 4U
    },

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_5

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S463>/Vector'
     *   '<S627>/Vector'
     */
    {
        8U, 5U
    },

#endif

#ifndef CONSTP_TCPR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_TCPR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TCPR
#include "MemMap.h"

VAR(B_TCPR_ac_T, TCPR_VAR_INIT) TCPR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TCPR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TCPR
#include "MemMap.h"

VAR(DW_TCPR_ac_T, TCPR_VAR_INIT) TCPR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TCPR
#include "MemMap.h"
#if Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_PassThroughOffsetTorque(VAR(float32,
    AUTOMATIC) rtu_ActClchTqIn, VAR(float32, AUTOMATIC) rtu_PredClchOffst, VAR
    (float32, AUTOMATIC) rtu_EstTorqIn, P2VAR(float32, AUTOMATIC, TCPR_VAR_INIT)
    rty_OffstClchTqOut);

#endif

#if Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_HoldOffsetTorque_Reset(P2VAR
    (DW_HoldOffsetTorque_TCPR_ac_T, AUTOMATIC, TCPR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_HoldOffsetTorque(VAR(float32,
    AUTOMATIC) rtu_ClchTqOut_z, VAR(float32, AUTOMATIC) rtu_HoldTime, P2VAR
    (float32, AUTOMATIC, TCPR_VAR_INIT) rty_ClchTqOut, P2VAR
    (B_HoldOffsetTorque_TCPR_ac_T, AUTOMATIC, TCPR_VAR_INIT) localB, P2VAR
    (DW_HoldOffsetTorque_TCPR_ac_T, AUTOMATIC, TCPR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_RampOffsetTorque(VAR(float32,
    AUTOMATIC) rtu_ClchTqOut_z, VAR(float32, AUTOMATIC) rtu_ClchTqRmpRt, P2VAR
    (float32, AUTOMATIC, TCPR_VAR_INIT) rty_TqOut);

#endif

#if Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_PassThroughTorque(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, TCPR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_TcRMaxOvrdToZero(P2VAR(float32,
    AUTOMATIC, TCPR_VAR_INIT) rty_TcR_Max);

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_TcRMaxNormal(VAR(float32, AUTOMATIC)
    rtu_TcEst, P2VAR(float32, AUTOMATIC, TCPR_VAR_INIT) rty_TcR_Max);

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_RstPth_Crt_TcRMax(VAR(float32,
    AUTOMATIC) rtu_LeadOffset, VAR(float32, AUTOMATIC) rtu_TcR_Max, P2VAR
    (float32, AUTOMATIC, TCPR_VAR_INIT) rty_LeadTcR_Max);

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_RstHld_Crt_TcRMax(VAR(float32,
    AUTOMATIC) rtu_TcR_Max, P2VAR(float32, AUTOMATIC, TCPR_VAR_INIT)
    rty_LeadTcR_Max);

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_Achived_LdRamp(VAR(float32, AUTOMATIC)
    rtu_RampStep, VAR(float32, AUTOMATIC) rtu_Prev_LeadTcR_Max, P2VAR(float32,
    AUTOMATIC, TCPR_VAR_INIT) rty_LeadTcR_Max);

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_RstPth_Crt_TcRMax_b(VAR(float32,
    AUTOMATIC) rtu_LeadOffset, VAR(float32, AUTOMATIC) rtu_TcR_Min, P2VAR
    (float32, AUTOMATIC, TCPR_VAR_INIT) rty_LeadTcR_Min);

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_RstHld_Crt_TcRMax_d(VAR(float32,
    AUTOMATIC) rtu_TcR_Min, P2VAR(float32, AUTOMATIC, TCPR_VAR_INIT)
    rty_LeadTcR_Min);

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_Achived_LdRamp_o(VAR(float32,
    AUTOMATIC) rtu_RampStep, VAR(float32, AUTOMATIC) rtu_Prev_LeadTcR_Min, P2VAR
    (float32, AUTOMATIC, TCPR_VAR_INIT) rty_LeadTcR_Min);

#endif

/*
 * Output and update for action system:
 *    '<S75>/PassThroughOffsetTorque'
 *    '<S275>/PassThroughOffsetTorque'
 */
#if Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_PassThroughOffsetTorque(VAR(float32,
    AUTOMATIC) rtu_ActClchTqIn, VAR(float32, AUTOMATIC) rtu_PredClchOffst, VAR
    (float32, AUTOMATIC) rtu_EstTorqIn, P2VAR(float32, AUTOMATIC, TCPR_VAR_INIT)
    rty_OffstClchTqOut)
{
    /* MinMax: '<S85>/MinMax' incorporates:
     *  Sum: '<S85>/Sum'
     */
    *rty_OffstClchTqOut = fminf(rtu_ActClchTqIn + rtu_PredClchOffst,
        rtu_EstTorqIn);
}

#endif

/*
 * System reset for action system:
 *    '<S75>/HoldOffsetTorque'
 *    '<S275>/HoldOffsetTorque'
 */
#if Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_HoldOffsetTorque_Reset(P2VAR
    (DW_HoldOffsetTorque_TCPR_ac_T, AUTOMATIC, TCPR_VAR_INIT) localDW)
{
    /* InitializeConditions for UnitDelay: '<S84>/Unit Delay' */
    localDW->UnitDelay_DSTATE = 0.0F;

    /* SystemReset for Atomic SubSystem: '<S84>/EdgeRising' */
    /* InitializeConditions for UnitDelay: '<S92>/Unit Delay' */
    localDW->UnitDelay_DSTATE_h = false;

    /* End of SystemReset for SubSystem: '<S84>/EdgeRising' */

    /* SystemReset for Atomic SubSystem: '<S84>/EdgeRising1' */
    /* InitializeConditions for UnitDelay: '<S93>/Unit Delay' */
    localDW->UnitDelay_DSTATE_l = false;

    /* End of SystemReset for SubSystem: '<S84>/EdgeRising1' */

    /* SystemReset for Atomic SubSystem: '<S84>/Timer Retrigger Reset Enabled1' */
    /* InitializeConditions for UnitDelay: '<S96>/Unit Delay' */
    localDW->UnitDelay_DSTATE_n = 0.0F;

    /* End of SystemReset for SubSystem: '<S84>/Timer Retrigger Reset Enabled1' */
}

#endif

/*
 * Output and update for action system:
 *    '<S75>/HoldOffsetTorque'
 *    '<S275>/HoldOffsetTorque'
 */
#if Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_HoldOffsetTorque(VAR(float32,
    AUTOMATIC) rtu_ClchTqOut_z, VAR(float32, AUTOMATIC) rtu_HoldTime, P2VAR
    (float32, AUTOMATIC, TCPR_VAR_INIT) rty_ClchTqOut, P2VAR
    (B_HoldOffsetTorque_TCPR_ac_T, AUTOMATIC, TCPR_VAR_INIT) localB, P2VAR
    (DW_HoldOffsetTorque_TCPR_ac_T, AUTOMATIC, TCPR_VAR_INIT) localDW)
{
    boolean rtb_OR1_cv;
    boolean rtb_OR1_hw;

    /* Outputs for Atomic SubSystem: '<S84>/EdgeRising' */
    /* Logic: '<S92>/OR1' incorporates:
     *  UnitDelay: '<S92>/Unit Delay'
     */
    rtb_OR1_cv = !localDW->UnitDelay_DSTATE_h;

    /* Update for UnitDelay: '<S92>/Unit Delay' incorporates:
     *  Constant: '<S84>/TRUE Constant'
     */
    localDW->UnitDelay_DSTATE_h = true;

    /* End of Outputs for SubSystem: '<S84>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S84>/EdgeRising1' */
    /* Logic: '<S93>/OR1' incorporates:
     *  UnitDelay: '<S93>/Unit Delay'
     */
    rtb_OR1_hw = !localDW->UnitDelay_DSTATE_l;

    /* Update for UnitDelay: '<S93>/Unit Delay' incorporates:
     *  Constant: '<S84>/TRUE Constant'
     */
    localDW->UnitDelay_DSTATE_l = true;

    /* Outputs for Atomic SubSystem: '<S84>/Timer Retrigger Reset Enabled1' */
    /* Switch: '<S96>/Switch1' incorporates:
     *  Constant: '<S94>/Calib'
     *  Constant: '<S96>/Constant Value4'
     *  Logic: '<S93>/AND'
     *  MinMax: '<S96>/Maximum'
     *  Sum: '<S96>/Subtraction'
     *  UnitDelay: '<S96>/Unit Delay'
     */
    if (rtb_OR1_hw)
    {
        localDW->UnitDelay_DSTATE_n = rtu_HoldTime;
    }
    else
    {
        localDW->UnitDelay_DSTATE_n = fmaxf(localDW->UnitDelay_DSTATE_n -
            HeTCPR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S96>/Switch1' */
    /* End of Outputs for SubSystem: '<S84>/EdgeRising1' */

    /* Logic: '<S84>/Logical3' incorporates:
     *  Constant: '<S96>/Constant Value2'
     *  RelationalOperator: '<S96>/Greater  Than1'
     *  UnitDelay: '<S96>/Unit Delay'
     */
    localB->Logical3 = (localDW->UnitDelay_DSTATE_n > 0.0F);

    /* End of Outputs for SubSystem: '<S84>/Timer Retrigger Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S84>/EdgeRising' */
    /* Switch: '<S84>/Switch3' incorporates:
     *  Logic: '<S92>/AND'
     *  UnitDelay: '<S84>/Unit Delay'
     */
    if (rtb_OR1_cv)
    {
        localDW->UnitDelay_DSTATE = rtu_ClchTqOut_z;
    }

    /* End of Switch: '<S84>/Switch3' */
    /* End of Outputs for SubSystem: '<S84>/EdgeRising' */

    /* Gain: '<S95>/Gain' incorporates:
     *  UnitDelay: '<S84>/Unit Delay'
     */
    *rty_ClchTqOut = localDW->UnitDelay_DSTATE;
}

#endif

/*
 * Output and update for action system:
 *    '<S75>/RampOffsetTorque'
 *    '<S275>/RampOffsetTorque'
 */
#if Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_RampOffsetTorque(VAR(float32,
    AUTOMATIC) rtu_ClchTqOut_z, VAR(float32, AUTOMATIC) rtu_ClchTqRmpRt, P2VAR
    (float32, AUTOMATIC, TCPR_VAR_INIT) rty_TqOut)
{
    /* Sum: '<S87>/Sum2' incorporates:
     *  Constant: '<S97>/Calib'
     *  Product: '<S87>/Product1'
     */
    *rty_TqOut = rtu_ClchTqOut_z - (rtu_ClchTqRmpRt * HeTCPR_t_MedTED_dT);
}

#endif

/*
 * Output and update for action system:
 *    '<S75>/PassThroughTorque'
 *    '<S275>/PassThroughTorque'
 */
#if Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_PassThroughTorque(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, TCPR_VAR_INIT) rty_Out1)
{
    /* Inport: '<S86>/In1' */
    *rty_Out1 = rtu_In1;
}

#endif

/*
 * Output and update for action system:
 *    '<S126>/TcRMaxOvrdToZero'
 *    '<S133>/TcRMinOvrdToZero'
 *    '<S326>/TcRMaxOvrdToZero'
 *    '<S333>/TcRMinOvrdToZero'
 *    '<S493>/TcRMaxOvrdToZero'
 *    '<S500>/TcRMinOvrdToZero'
 *    '<S657>/TcRMaxOvrdToZero'
 *    '<S664>/TcRMinOvrdToZero'
 */
#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_TcRMaxOvrdToZero(P2VAR(float32,
    AUTOMATIC, TCPR_VAR_INIT) rty_TcR_Max)
{
    /* SignalConversion generated from: '<S129>/TcR_Max' incorporates:
     *  Constant: '<S129>/Constant Value4'
     */
    *rty_TcR_Max = 0.0F;
}

#endif

/*
 * Output and update for action system:
 *    '<S126>/TcRMaxNormal'
 *    '<S133>/TcRMinNormal'
 *    '<S326>/TcRMaxNormal'
 *    '<S333>/TcRMinNormal'
 *    '<S493>/TcRMaxNormal'
 *    '<S500>/TcRMinNormal'
 *    '<S657>/TcRMaxNormal'
 *    '<S664>/TcRMinNormal'
 */
#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_TcRMaxNormal(VAR(float32, AUTOMATIC)
    rtu_TcEst, P2VAR(float32, AUTOMATIC, TCPR_VAR_INIT) rty_TcR_Max)
{
    /* Inport: '<S128>/TcEst' */
    *rty_TcR_Max = rtu_TcEst;
}

#endif

/*
 * Output and update for action system:
 *    '<S150>/RstPth_Crt_TcRMax'
 *    '<S171>/RstPth_Crt_TcRMax'
 *    '<S350>/RstPth_Crt_TcRMax'
 *    '<S371>/RstPth_Crt_TcRMax'
 *    '<S517>/RstPth_Crt_TcRMax'
 *    '<S538>/RstPth_Crt_TcRMax'
 *    '<S681>/RstPth_Crt_TcRMax'
 *    '<S702>/RstPth_Crt_TcRMax'
 */
#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_RstPth_Crt_TcRMax(VAR(float32,
    AUTOMATIC) rtu_LeadOffset, VAR(float32, AUTOMATIC) rtu_TcR_Max, P2VAR
    (float32, AUTOMATIC, TCPR_VAR_INIT) rty_LeadTcR_Max)
{
    /* Sum: '<S155>/Sum2' */
    *rty_LeadTcR_Max = rtu_TcR_Max + rtu_LeadOffset;
}

#endif

/*
 * Output and update for action system:
 *    '<S150>/RstHld_Crt_TcRMax'
 *    '<S171>/RstHld_Crt_TcRMax'
 *    '<S350>/RstHld_Crt_TcRMax'
 *    '<S371>/RstHld_Crt_TcRMax'
 *    '<S517>/RstHld_Crt_TcRMax'
 *    '<S538>/RstHld_Crt_TcRMax'
 *    '<S681>/RstHld_Crt_TcRMax'
 *    '<S702>/RstHld_Crt_TcRMax'
 */
#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_RstHld_Crt_TcRMax(VAR(float32,
    AUTOMATIC) rtu_TcR_Max, P2VAR(float32, AUTOMATIC, TCPR_VAR_INIT)
    rty_LeadTcR_Max)
{
    /* Inport: '<S154>/TcR_Max' */
    *rty_LeadTcR_Max = rtu_TcR_Max;
}

#endif

/*
 * Output and update for action system:
 *    '<S150>/Achived_LdRamp'
 *    '<S171>/Achived_LdRamp'
 *    '<S350>/Achived_LdRamp'
 *    '<S371>/Achived_LdRamp'
 *    '<S517>/Achived_LdRamp'
 *    '<S538>/Achived_LdRamp'
 *    '<S681>/Achived_LdRamp'
 *    '<S702>/Achived_LdRamp'
 */
#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_Achived_LdRamp(VAR(float32, AUTOMATIC)
    rtu_RampStep, VAR(float32, AUTOMATIC) rtu_Prev_LeadTcR_Max, P2VAR(float32,
    AUTOMATIC, TCPR_VAR_INIT) rty_LeadTcR_Max)
{
    /* Sum: '<S153>/Sum2' */
    *rty_LeadTcR_Max = rtu_Prev_LeadTcR_Max + rtu_RampStep;
}

#endif

/*
 * Output and update for action system:
 *    '<S151>/RstPth_Crt_TcRMax'
 *    '<S172>/RstPth_Crt_TcRMin'
 *    '<S351>/RstPth_Crt_TcRMax'
 *    '<S372>/RstPth_Crt_TcRMin'
 *    '<S518>/RstPth_Crt_TcRMax'
 *    '<S539>/RstPth_Crt_TcRMin'
 *    '<S682>/RstPth_Crt_TcRMax'
 *    '<S703>/RstPth_Crt_TcRMin'
 */
#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_RstPth_Crt_TcRMax_b(VAR(float32,
    AUTOMATIC) rtu_LeadOffset, VAR(float32, AUTOMATIC) rtu_TcR_Min, P2VAR
    (float32, AUTOMATIC, TCPR_VAR_INIT) rty_LeadTcR_Min)
{
    /* Sum: '<S158>/Sum2' */
    *rty_LeadTcR_Min = rtu_TcR_Min + rtu_LeadOffset;
}

#endif

/*
 * Output and update for action system:
 *    '<S151>/RstHld_Crt_TcRMax'
 *    '<S172>/RstHld_Crt_TcRMin'
 *    '<S351>/RstHld_Crt_TcRMax'
 *    '<S372>/RstHld_Crt_TcRMin'
 *    '<S518>/RstHld_Crt_TcRMax'
 *    '<S539>/RstHld_Crt_TcRMin'
 *    '<S682>/RstHld_Crt_TcRMax'
 *    '<S703>/RstHld_Crt_TcRMin'
 */
#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_RstHld_Crt_TcRMax_d(VAR(float32,
    AUTOMATIC) rtu_TcR_Min, P2VAR(float32, AUTOMATIC, TCPR_VAR_INIT)
    rty_LeadTcR_Min)
{
    /* Inport: '<S157>/TcR_Min' */
    *rty_LeadTcR_Min = rtu_TcR_Min;
}

#endif

/*
 * Output and update for action system:
 *    '<S151>/Achived_LdRamp'
 *    '<S172>/Achived_LdRamp'
 *    '<S351>/Achived_LdRamp'
 *    '<S372>/Achived_LdRamp'
 *    '<S518>/Achived_LdRamp'
 *    '<S539>/Achived_LdRamp'
 *    '<S682>/Achived_LdRamp'
 *    '<S703>/Achived_LdRamp'
 */
#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

static FUNC(void, TCPR_CODE_LOCAL) TCPR_ac_Achived_LdRamp_o(VAR(float32,
    AUTOMATIC) rtu_RampStep, VAR(float32, AUTOMATIC) rtu_Prev_LeadTcR_Min, P2VAR
    (float32, AUTOMATIC, TCPR_VAR_INIT) rty_LeadTcR_Min)
{
    /* Sum: '<S156>/Sum2' */
    *rty_LeadTcR_Min = rtu_Prev_LeadTcR_Min + rtu_RampStep;
}

#endif

/* Model step function for TID1 */
FUNC(void, TCPR_CODE) TCPR_MedTED(void) /* Explicit Task: MedTED */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_TCPR_3

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clch1_;

#endif

#if Rte_SysCon_Variant_TCPR_7

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clch2_;

#endif

#if Rte_SysCon_Variant_TCPR_5

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clch3_;

#endif

#if Rte_SysCon_Variant_TCPR_1

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clch4_;

#endif

#if Rte_SysCon_Variant_TCPR_3

    float32 rtb_TmpSignalConversionAtVeHCCR_M_Clch1_;

#endif

#if Rte_SysCon_Variant_TCPR_7

    float32 rtb_TmpSignalConversionAtVeHCCR_M_Clch2_;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    TeHSER_e_SteadyStates tmpRead;

#endif

#if Rte_SysCon_Variant_TCPR_3

    TeHSER_e_ClchFillCmnd tmpRead_0;

#endif

#if Rte_SysCon_Variant_TCPR_7

    TeHSER_e_ClchFillCmnd tmpRead_1;

#endif

#if Rte_SysCon_Variant_TCPR_5

    TeHSER_e_ClchFillCmnd tmpRead_2;

#endif

#if Rte_SysCon_Variant_TCPR_1

    TeHSER_e_ClchFillCmnd tmpRead_3;

#endif

#if Rte_SysCon_Variant_TCPR_5

    TeHCCR_e_ClutchStatus tmpRead_4;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    uint16 rtb_Selector;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    float32 rtb_TmpSignalConversionAtVeHTDR_M_OutTor;

#endif

#if Rte_SysCon_Variant_TCPR_3

    boolean rtb_AND_aa;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    boolean rtb_GreaterThan_m;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    float32 rtb_TmpSignalConversionAtVeHTDR_M_Clch1_;

#endif

#if Rte_SysCon_Variant_TCPR_7

    boolean rtb_AND_ob;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    boolean rtb_GreaterThan_e;

#endif

#if Rte_SysCon_Variant_TCPR_5

    boolean rtb_AND_fuh;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    boolean rtb_GreaterThan_cu;

#endif

#if Rte_SysCon_Variant_TCPR_1

    boolean rtb_AND_fcg;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    boolean rtb_GreaterThan_l3;

#endif

#if Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_7

    sint8 rtPrevAction;

#endif

#if Rte_SysCon_Variant_TCPR_3

    float32 rtb_Merge1;

#endif

#if Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_7

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clc_bu;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    boolean rtb_GreaterThan_i;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    boolean rtb_GreaterThan_f;

#endif

#if Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clc_fc;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    boolean rtb_GreaterThan_d;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    boolean rtb_GreaterThan_c;

#endif

#if Rte_SysCon_Variant_TCPR_5

    float32 rtb_Merge1_p;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_5

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clch_m;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    boolean rtb_GreaterThan_o0;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    boolean rtb_GreaterThan_hr;

#endif

#if Rte_SysCon_Variant_TCPR_5

    float32 rtb_Merge_ou;

#endif

#if Rte_SysCon_Variant_TCPR_1

    float32 rtb_Merge1_ps;

#endif

#if Rte_SysCon_Variant_TCPR_1

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clch_g;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    boolean rtb_GreaterThan_h5;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    boolean rtb_GreaterThan_g;

#endif

#if Rte_SysCon_Variant_TCPR_1

    float32 rtb_Merge_cv;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    boolean rtb_AND_op;

#endif

#if Rte_SysCon_Variant_TCPR_3

    float32 rtb_Switch1;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7 || Rte_SysCon_Variant_TCPR_9

    boolean rtb_AND_h1;

#endif

#if Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    boolean rtb_AND_j;

#endif

#if Rte_SysCon_Variant_TCPR_3

    float32 rtb_Abs2_o;

#endif

#if Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_7 || Rte_SysCon_Variant_TCPR_9

    boolean rtb_UnitDelay_dt;

#endif

#if Rte_SysCon_Variant_TCPR_3

    float32 rtb_Switch;

#endif

#if Rte_SysCon_Variant_TCPR_3

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clc_lx;

#endif

#if Rte_SysCon_Variant_TCPR_3

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clc_gh;

#endif

#if Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_7 || Rte_SysCon_Variant_TCPR_9

    boolean rtb_AND_a3;

#endif

#if Rte_SysCon_Variant_TCPR_7

    float32 rtb_Switch1_an;

#endif

#if Rte_SysCon_Variant_TCPR_7

    float32 rtb_Switch_fc;

#endif

#if Rte_SysCon_Variant_TCPR_7

    float32 rtb_TmpSignalConversionAtVeCSLR_n_Clch2_;

#endif

#if Rte_SysCon_Variant_TCPR_7

    float32 rtb_Abs2_ef;

#endif

#if Rte_SysCon_Variant_TCPR_7

    float32 rtb_Switch_bw;

#endif

#if Rte_SysCon_Variant_TCPR_7

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clch_f;

#endif

#if Rte_SysCon_Variant_TCPR_7

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clch_k;

#endif

#if Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7 || Rte_SysCon_Variant_TCPR_9

    boolean rtb_AND_ly;

#endif

#if Rte_SysCon_Variant_TCPR_5

    float32 rtb_Switch1_lo;

#endif

#if Rte_SysCon_Variant_TCPR_5

    float32 rtb_Abs2_n;

#endif

#if Rte_SysCon_Variant_TCPR_5

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clc_ep;

#endif

#if Rte_SysCon_Variant_TCPR_5

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clc_bh;

#endif

#if Rte_SysCon_Variant_TCPR_1

    float32 rtb_Switch1_l;

#endif

#if Rte_SysCon_Variant_TCPR_1

    float32 rtb_Abs2;

#endif

#if Rte_SysCon_Variant_TCPR_1

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clch_p;

#endif

#if Rte_SysCon_Variant_TCPR_1

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clch_h;

#endif

#if Rte_SysCon_Variant_TCPR_3

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clch_j;

#endif

#if Rte_SysCon_Variant_TCPR_3

    float32 rtb_TmpSignalConversionAtVeHSER_M_C1_Tor;

#endif

#if Rte_SysCon_Variant_TCPR_3

    float32 rtb_TmpSignalConversionAtVeHSER_M_C1_Opt;

#endif

#if Rte_SysCon_Variant_TCPR_7

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clch_a;

#endif

#if Rte_SysCon_Variant_TCPR_7

    float32 rtb_TmpSignalConversionAtVeHSER_M_C2_Tor;

#endif

#if Rte_SysCon_Variant_TCPR_7

    float32 rtb_TmpSignalConversionAtVeHSER_M_C2_Opt;

#endif

#if Rte_SysCon_Variant_TCPR_5

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clch_b;

#endif

#if Rte_SysCon_Variant_TCPR_5

    float32 rtb_TmpSignalConversionAtVeHSER_M_C3_Tor;

#endif

#if Rte_SysCon_Variant_TCPR_5

    float32 rtb_TmpSignalConversionAtVeHSER_M_C3_Opt;

#endif

#if Rte_SysCon_Variant_TCPR_1

    float32 rtb_TmpSignalConversionAtVeHSER_M_Clch_i;

#endif

#if Rte_SysCon_Variant_TCPR_1

    float32 rtb_TmpSignalConversionAtVeHSER_M_C4_Tor;

#endif

#if Rte_SysCon_Variant_TCPR_1

    float32 rtb_TmpSignalConversionAtVeHSER_M_C4_Opt;

#endif

#if Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_7

    boolean rtb_AND_js;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    float32 rtb_TmpSignalConversionAtVeTCCR_M_LCCMin;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    float32 rtb_TmpSignalConversionAtVeTCCR_M_LCCMax;

#endif

#if Rte_SysCon_Variant_TCPR_3

    float32 rtb_TmpSignalConversionAtVeCSDR_M_Correc;

#endif

#if Rte_SysCon_Variant_TCPR_7

    float32 rtb_TmpSignalConversionAtVeCSDR_M_Corr_p;

#endif

#if Rte_SysCon_Variant_TCPR_7

    float32 rtb_TmpSignalConversionAtVeHTDR_M_Clch2_;

#endif

#if Rte_SysCon_Variant_TCPR_5

    float32 rtb_TmpSignalConversionAtVeHTDR_M_Clch3_;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_7

    float32 rtb_TmpSignalConversionAtVeHTDR_M_Clch4_;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_5

    float32 rtb_TmpSignalConversionAtVeTISR_n_InputS;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_5

    float32 rtb_TmpSignalConversionAtVeTFTR_T_TransO;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    TeHSER_e_SteadyStates rtb_TmpSignalConversionAtVeHSER_e_HTDR_S;

#endif

#if Rte_SysCon_Variant_TCPR_3

    TeHCCR_e_ClutchStatus rtb_TmpSignalConversionAtVeTRNR_e_C1Stat;

#endif

#if Rte_SysCon_Variant_TCPR_7

    TeHCCR_e_ClutchStatus rtb_TmpSignalConversionAtVeTRNR_e_C2Stat;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    TeHSER_e_SteadyStates rtb_TmpSignalConversionAtVeHSER_e_OITR_L;

#endif

#if Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_7

    TeHSER_e_SteadyStates rtb_TmpSignalConversionAtVeHSER_e_OITR_P;

#endif

#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    sint32 rtb_VariantMerge_For_Variant_Source_Va_0;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/TCPR_MedTED'
     */
    /* SignalConversion generated from: '<S1>/VeTISR_n_InputSpeed' incorporates:
     *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
     */
#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_5

    /* SignalConversion generated from: '<S1>/VeTISR_n_InputSpeed' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value
        (&rtb_TmpSignalConversionAtVeTISR_n_InputS);

    /* SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp' incorporates:
     *  Inport: '<Root>/VeTFTR_T_TransOilTemp'
     */
    (void)Rte_Read_VeTFTR_T_TransOilTemp_Value
        (&rtb_TmpSignalConversionAtVeTFTR_T_TransO);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTISR_n_InputSpeed' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch1_TorqEst' */
#if Rte_SysCon_Variant_TCPR_3

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch1_TorqEst' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch1_TorqEst'
     */
    (void)Rte_Read_VeHSER_M_Clch1_TorqEst_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clch1_);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_Clch1_TorqEst' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch2_TorqEst' */
#if Rte_SysCon_Variant_TCPR_7

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch2_TorqEst' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch2_TorqEst'
     */
    (void)Rte_Read_VeHSER_M_Clch2_TorqEst_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clch2_);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_Clch2_TorqEst' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch3_TorqEst' */
#if Rte_SysCon_Variant_TCPR_5

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch3_TorqEst' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch3_TorqEst'
     */
    (void)Rte_Read_VeHSER_M_Clch3_TorqEst_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clch3_);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_Clch3_TorqEst' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch4_TorqEst' */
#if Rte_SysCon_Variant_TCPR_1

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch4_TorqEst' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch4_TorqEst'
     */
    (void)Rte_Read_VeHSER_M_Clch4_TorqEst_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clch4_);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_Clch4_TorqEst' */

    /* SignalConversion generated from: '<S1>/VeCSLR_n_Clch2_SlipSpeed' */
#if Rte_SysCon_Variant_TCPR_7

    /* SignalConversion generated from: '<S1>/VeCSLR_n_Clch2_SlipSpeed' incorporates:
     *  Inport: '<Root>/VeCSLR_n_Clch2_SlipSpeed'
     */
    (void)Rte_Read_VeCSLR_n_Clch2_SlipSpeed_Value
        (&rtb_TmpSignalConversionAtVeCSLR_n_Clch2_);

#endif

    /* End of SignalConversion generated from: '<S1>/VeCSLR_n_Clch2_SlipSpeed' */

    /* SignalConversion generated from: '<S1>/VeHTDR_M_OutTorqReqModHH' */
#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    /* SignalConversion generated from: '<S1>/VeHTDR_M_OutTorqReqModHH' incorporates:
     *  Inport: '<Root>/VeHTDR_M_OutTorqReqModHH'
     */
    (void)Rte_Read_VeHTDR_M_OutTorqReqModHH_Value
        (&rtb_TmpSignalConversionAtVeHTDR_M_OutTor);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHTDR_M_OutTorqReqModHH' */

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Clch1_TCR_Actl' */
#if Rte_SysCon_Variant_TCPR_3

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Clch1_TCR_Actl' incorporates:
     *  Inport: '<Root>/VeHTDR_M_Clch1_TCR_Actl'
     */
    (void)Rte_Read_VeHTDR_M_Clch1_TCR_Actl_Value
        (&rtb_TmpSignalConversionAtVeHTDR_M_Clch1_);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHTDR_M_Clch1_TCR_Actl' */

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Clch2_TCR_Actl' */
#if Rte_SysCon_Variant_TCPR_7

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Clch2_TCR_Actl' incorporates:
     *  Inport: '<Root>/VeHTDR_M_Clch2_TCR_Actl'
     */
    (void)Rte_Read_VeHTDR_M_Clch2_TCR_Actl_Value
        (&rtb_TmpSignalConversionAtVeHTDR_M_Clch2_);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHTDR_M_Clch2_TCR_Actl' */

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Clch3_TCR_Actl' */
#if Rte_SysCon_Variant_TCPR_5

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Clch3_TCR_Actl' incorporates:
     *  Inport: '<Root>/VeHTDR_M_Clch3_TCR_Actl'
     */
    (void)Rte_Read_VeHTDR_M_Clch3_TCR_Actl_Value
        (&rtb_TmpSignalConversionAtVeHTDR_M_Clch3_);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHTDR_M_Clch3_TCR_Actl' */

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Clch4_TCR_Actl' */
#if Rte_SysCon_Variant_TCPR_1

    /* SignalConversion generated from: '<S1>/VeHTDR_M_Clch4_TCR_Actl' incorporates:
     *  Inport: '<Root>/VeHTDR_M_Clch4_TCR_Actl'
     */
    (void)Rte_Read_VeHTDR_M_Clch4_TCR_Actl_Value
        (&rtb_TmpSignalConversionAtVeHTDR_M_Clch4_);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHTDR_M_Clch4_TCR_Actl' */

    /* SignalConversion generated from: '<S1>/VeHSER_e_HTDR_State' incorporates:
     *  SignalConversion generated from: '<S1>/VeHSER_e_OITR_LeadState'
     */
#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    /* SignalConversion generated from: '<S1>/VeHSER_e_HTDR_State' incorporates:
     *  Inport: '<Root>/VeHSER_e_HTDR_State'
     */
    (void)Rte_Read_VeHSER_e_HTDR_State_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_HTDR_S);

    /* SignalConversion generated from: '<S1>/VeHSER_e_OITR_LeadState' incorporates:
     *  Inport: '<Root>/VeHSER_e_OITR_LeadState'
     */
    (void)Rte_Read_VeHSER_e_OITR_LeadState_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_OITR_L);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_e_HTDR_State' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch1_TcR_Ovrd_Max' */
#if Rte_SysCon_Variant_TCPR_3

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch1_TcR_Ovrd_Max' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch1_TcR_Ovrd_Max'
     */
    (void)Rte_Read_VeHSER_M_Clch1_TcR_Ovrd_Max_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clc_lx);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_Clch1_TcR_Ovrd_Max' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch2_TcR_Ovrd_Max' */
#if Rte_SysCon_Variant_TCPR_7

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch2_TcR_Ovrd_Max' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch2_TcR_Ovrd_Max'
     */
    (void)Rte_Read_VeHSER_M_Clch2_TcR_Ovrd_Max_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clch_f);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_Clch2_TcR_Ovrd_Max' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch3_TcR_Ovrd_Max' */
#if Rte_SysCon_Variant_TCPR_5

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch3_TcR_Ovrd_Max' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch3_TcR_Ovrd_Max'
     */
    (void)Rte_Read_VeHSER_M_Clch3_TcR_Ovrd_Max_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clc_ep);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_Clch3_TcR_Ovrd_Max' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch4_TcR_Ovrd_Max' */
#if Rte_SysCon_Variant_TCPR_1

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch4_TcR_Ovrd_Max' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch4_TcR_Ovrd_Max'
     */
    (void)Rte_Read_VeHSER_M_Clch4_TcR_Ovrd_Max_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clch_p);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_Clch4_TcR_Ovrd_Max' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch1_LeadTcR_Ovrd_Max' */
#if Rte_SysCon_Variant_TCPR_3

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch1_LeadTcR_Ovrd_Max' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch1_LeadTcR_Ovrd_Max'
     */
    (void)Rte_Read_VeHSER_M_Clch1_LeadTcR_Ovrd_Max_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clc_bu);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_Clch1_LeadTcR_Ovrd_Max' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch2_LeadTcR_Ovrd_Max' */
#if Rte_SysCon_Variant_TCPR_7

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch2_LeadTcR_Ovrd_Max' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch2_LeadTcR_Ovrd_Max'
     */
    (void)Rte_Read_VeHSER_M_Clch2_LeadTcR_Ovrd_Max_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clc_fc);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_Clch2_LeadTcR_Ovrd_Max' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch3_LeadTcR_Ovrd_Max' */
#if Rte_SysCon_Variant_TCPR_5

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch3_LeadTcR_Ovrd_Max' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch3_LeadTcR_Ovrd_Max'
     */
    (void)Rte_Read_VeHSER_M_Clch3_LeadTcR_Ovrd_Max_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clch_m);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_Clch3_LeadTcR_Ovrd_Max' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch4_LeadTcR_Ovrd_Max' */
#if Rte_SysCon_Variant_TCPR_1

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch4_LeadTcR_Ovrd_Max' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch4_LeadTcR_Ovrd_Max'
     */
    (void)Rte_Read_VeHSER_M_Clch4_LeadTcR_Ovrd_Max_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clch_g);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_Clch4_LeadTcR_Ovrd_Max' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_C1_TorqEstLead' */
#if Rte_SysCon_Variant_TCPR_3

    /* SignalConversion generated from: '<S1>/VeHSER_M_C1_TorqEstLead' incorporates:
     *  Inport: '<Root>/VeHSER_M_C1_TorqEstLead'
     */
    (void)Rte_Read_VeHSER_M_C1_TorqEstLead_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_C1_Tor);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_C1_TorqEstLead' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_C2_TorqEstLead' */
#if Rte_SysCon_Variant_TCPR_7

    /* SignalConversion generated from: '<S1>/VeHSER_M_C2_TorqEstLead' incorporates:
     *  Inport: '<Root>/VeHSER_M_C2_TorqEstLead'
     */
    (void)Rte_Read_VeHSER_M_C2_TorqEstLead_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_C2_Tor);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_C2_TorqEstLead' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_C3_TorqEstLead' */
#if Rte_SysCon_Variant_TCPR_5

    /* SignalConversion generated from: '<S1>/VeHSER_M_C3_TorqEstLead' incorporates:
     *  Inport: '<Root>/VeHSER_M_C3_TorqEstLead'
     */
    (void)Rte_Read_VeHSER_M_C3_TorqEstLead_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_C3_Tor);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_C3_TorqEstLead' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_C4_TorqEstLead' */
#if Rte_SysCon_Variant_TCPR_1

    /* SignalConversion generated from: '<S1>/VeHSER_M_C4_TorqEstLead' incorporates:
     *  Inport: '<Root>/VeHSER_M_C4_TorqEstLead'
     */
    (void)Rte_Read_VeHSER_M_C4_TorqEstLead_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_C4_Tor);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_C4_TorqEstLead' */

    /* SignalConversion generated from: '<S1>/VeCSDR_M_CorrectedC1TrqEstFctr' */
#if Rte_SysCon_Variant_TCPR_3

    /* SignalConversion generated from: '<S1>/VeCSDR_M_CorrectedC1TrqEstFctr' incorporates:
     *  Inport: '<Root>/VeCSDR_M_CorrectedC1TrqEstFctr'
     */
    (void)Rte_Read_VeCSDR_M_CorrectedC1TrqEstFctr_Value
        (&rtb_TmpSignalConversionAtVeCSDR_M_Correc);

#endif

    /* End of SignalConversion generated from: '<S1>/VeCSDR_M_CorrectedC1TrqEstFctr' */

    /* SignalConversion generated from: '<S1>/VeCSDR_M_CorrectedC2TrqEstFctr' */
#if Rte_SysCon_Variant_TCPR_7

    /* SignalConversion generated from: '<S1>/VeCSDR_M_CorrectedC2TrqEstFctr' incorporates:
     *  Inport: '<Root>/VeCSDR_M_CorrectedC2TrqEstFctr'
     */
    (void)Rte_Read_VeCSDR_M_CorrectedC2TrqEstFctr_Value
        (&rtb_TmpSignalConversionAtVeCSDR_M_Corr_p);

#endif

    /* End of SignalConversion generated from: '<S1>/VeCSDR_M_CorrectedC2TrqEstFctr' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_C1_OptTorqEstLead' */
#if Rte_SysCon_Variant_TCPR_3

    /* SignalConversion generated from: '<S1>/VeHSER_M_C1_OptTorqEstLead' incorporates:
     *  Inport: '<Root>/VeHSER_M_C1_OptTorqEstLead'
     */
    (void)Rte_Read_VeHSER_M_C1_OptTorqEstLead_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_C1_Opt);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_C1_OptTorqEstLead' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_C2_OptTorqEstLead' */
#if Rte_SysCon_Variant_TCPR_7

    /* SignalConversion generated from: '<S1>/VeHSER_M_C2_OptTorqEstLead' incorporates:
     *  Inport: '<Root>/VeHSER_M_C2_OptTorqEstLead'
     */
    (void)Rte_Read_VeHSER_M_C2_OptTorqEstLead_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_C2_Opt);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_C2_OptTorqEstLead' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_C3_OptTorqEstLead' */
#if Rte_SysCon_Variant_TCPR_5

    /* SignalConversion generated from: '<S1>/VeHSER_M_C3_OptTorqEstLead' incorporates:
     *  Inport: '<Root>/VeHSER_M_C3_OptTorqEstLead'
     */
    (void)Rte_Read_VeHSER_M_C3_OptTorqEstLead_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_C3_Opt);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_C3_OptTorqEstLead' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_C4_OptTorqEstLead' */
#if Rte_SysCon_Variant_TCPR_1

    /* SignalConversion generated from: '<S1>/VeHSER_M_C4_OptTorqEstLead' incorporates:
     *  Inport: '<Root>/VeHSER_M_C4_OptTorqEstLead'
     */
    (void)Rte_Read_VeHSER_M_C4_OptTorqEstLead_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_C4_Opt);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_C4_OptTorqEstLead' */

    /* SignalConversion generated from: '<S1>/VeTCCR_M_LCCMaxTrqAllwd' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCCR_M_LCCMinTrqAllwd'
     */
#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    /* SignalConversion generated from: '<S1>/VeTCCR_M_LCCMaxTrqAllwd' incorporates:
     *  Inport: '<Root>/VeTCCR_M_LCCMaxTrqAllwd'
     */
    (void)Rte_Read_VeTCCR_M_LCCMaxTrqAllwd_Value
        (&rtb_TmpSignalConversionAtVeTCCR_M_LCCMax);

    /* SignalConversion generated from: '<S1>/VeTCCR_M_LCCMinTrqAllwd' incorporates:
     *  Inport: '<Root>/VeTCCR_M_LCCMinTrqAllwd'
     */
    (void)Rte_Read_VeTCCR_M_LCCMinTrqAllwd_Value
        (&rtb_TmpSignalConversionAtVeTCCR_M_LCCMin);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTCCR_M_LCCMaxTrqAllwd' */

    /* SignalConversion generated from: '<S1>/VeTRNR_e_C1Stat' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCCR_M_Clch1_TorqEst'
     */
#if Rte_SysCon_Variant_TCPR_3

    /* SignalConversion generated from: '<S1>/VeTRNR_e_C1Stat' incorporates:
     *  Inport: '<Root>/VeTRNR_e_C1Stat'
     */
    (void)Rte_Read_VeTRNR_e_C1Stat_Value
        (&rtb_TmpSignalConversionAtVeTRNR_e_C1Stat);

    /* SignalConversion generated from: '<S1>/VeHCCR_M_Clch1_TorqEst' incorporates:
     *  Inport: '<Root>/VeHCCR_M_Clch1_TorqEst'
     */
    (void)Rte_Read_VeHCCR_M_Clch1_TorqEst_Value
        (&rtb_TmpSignalConversionAtVeHCCR_M_Clch1_);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTRNR_e_C1Stat' */

    /* SignalConversion generated from: '<S1>/VeTRNR_e_C2Stat' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCCR_M_Clch2_TorqEst'
     */
#if Rte_SysCon_Variant_TCPR_7

    /* SignalConversion generated from: '<S1>/VeTRNR_e_C2Stat' incorporates:
     *  Inport: '<Root>/VeTRNR_e_C2Stat'
     */
    (void)Rte_Read_VeTRNR_e_C2Stat_Value
        (&rtb_TmpSignalConversionAtVeTRNR_e_C2Stat);

    /* SignalConversion generated from: '<S1>/VeHCCR_M_Clch2_TorqEst' incorporates:
     *  Inport: '<Root>/VeHCCR_M_Clch2_TorqEst'
     */
    (void)Rte_Read_VeHCCR_M_Clch2_TorqEst_Value
        (&rtb_TmpSignalConversionAtVeHCCR_M_Clch2_);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTRNR_e_C2Stat' */

    /* SignalConversion generated from: '<S1>/VeHSER_e_OITR_PredLeadState' */
#if Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_7

    /* SignalConversion generated from: '<S1>/VeHSER_e_OITR_PredLeadState' incorporates:
     *  Inport: '<Root>/VeHSER_e_OITR_PredLeadState'
     */
    (void)Rte_Read_VeHSER_e_OITR_PredLeadState_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_OITR_P);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_e_OITR_PredLeadState' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch1_TcR_Ovrd_Min' incorporates:
     *  SignalConversion generated from: '<S1>/VeHSER_M_Clch1_LeadTcR_Ovrd_Min'
     */
#if Rte_SysCon_Variant_TCPR_3

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch1_TcR_Ovrd_Min' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch1_TcR_Ovrd_Min'
     */
    (void)Rte_Read_VeHSER_M_Clch1_TcR_Ovrd_Min_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clc_gh);

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch1_LeadTcR_Ovrd_Min' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch1_LeadTcR_Ovrd_Min'
     */
    (void)Rte_Read_VeHSER_M_Clch1_LeadTcR_Ovrd_Min_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clch_j);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_Clch1_TcR_Ovrd_Min' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch2_TcR_Ovrd_Min' incorporates:
     *  SignalConversion generated from: '<S1>/VeHSER_M_Clch2_LeadTcR_Ovrd_Min'
     */
#if Rte_SysCon_Variant_TCPR_7

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch2_TcR_Ovrd_Min' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch2_TcR_Ovrd_Min'
     */
    (void)Rte_Read_VeHSER_M_Clch2_TcR_Ovrd_Min_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clch_k);

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch2_LeadTcR_Ovrd_Min' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch2_LeadTcR_Ovrd_Min'
     */
    (void)Rte_Read_VeHSER_M_Clch2_LeadTcR_Ovrd_Min_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clch_a);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_Clch2_TcR_Ovrd_Min' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch3_TcR_Ovrd_Min' incorporates:
     *  SignalConversion generated from: '<S1>/VeHSER_M_Clch3_LeadTcR_Ovrd_Min'
     */
#if Rte_SysCon_Variant_TCPR_5

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch3_TcR_Ovrd_Min' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch3_TcR_Ovrd_Min'
     */
    (void)Rte_Read_VeHSER_M_Clch3_TcR_Ovrd_Min_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clc_bh);

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch3_LeadTcR_Ovrd_Min' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch3_LeadTcR_Ovrd_Min'
     */
    (void)Rte_Read_VeHSER_M_Clch3_LeadTcR_Ovrd_Min_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clch_b);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_Clch3_TcR_Ovrd_Min' */

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch4_TcR_Ovrd_Min' incorporates:
     *  SignalConversion generated from: '<S1>/VeHSER_M_Clch4_LeadTcR_Ovrd_Min'
     */
#if Rte_SysCon_Variant_TCPR_1

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch4_TcR_Ovrd_Min' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch4_TcR_Ovrd_Min'
     */
    (void)Rte_Read_VeHSER_M_Clch4_TcR_Ovrd_Min_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clch_h);

    /* SignalConversion generated from: '<S1>/VeHSER_M_Clch4_LeadTcR_Ovrd_Min' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch4_LeadTcR_Ovrd_Min'
     */
    (void)Rte_Read_VeHSER_M_Clch4_LeadTcR_Ovrd_Min_Value
        (&rtb_TmpSignalConversionAtVeHSER_M_Clch_i);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_M_Clch4_TcR_Ovrd_Min' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TCPC_25msec_Cntrl'
     */
    /* Gain: '<S3>/Gain1' incorporates:
     *  Gain: '<S3>/Gain2'
     *  Gain: '<S3>/Gain20'
     */
#if !Rte_SysCon_Variant_TCPR_3

    /* VariantMerge generated from: '<S3>/VariantSource13' incorporates:
     *  Constant: '<S4>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_l =
        -HeTCPR_M_Clch1_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource2' incorporates:
     *  Constant: '<S4>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_hl =
        -HeTCPR_M_Clch1_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource18' incorporates:
     *  Constant: '<S4>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_h =
        HeTCPR_M_Clch1_TorqLmtInit;

#endif

    /* End of Gain: '<S3>/Gain1' */

    /* Gain: '<S3>/Gain10' incorporates:
     *  Gain: '<S3>/Gain11'
     *  Gain: '<S3>/Gain12'
     *  Gain: '<S3>/Gain13'
     *  Gain: '<S3>/Gain14'
     *  Gain: '<S3>/Gain15'
     *  Gain: '<S3>/Gain16'
     *  Gain: '<S3>/Gain17'
     *  Gain: '<S3>/Gain18'
     *  Gain: '<S3>/Gain19'
     */
#if !Rte_SysCon_Variant_TCPR_7

    /* VariantMerge generated from: '<S3>/VariantSource26' incorporates:
     *  Constant: '<S5>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_d =
        -HeTCPR_M_Clch2_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource17' incorporates:
     *  Constant: '<S5>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_j =
        HeTCPR_M_Clch2_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource28' incorporates:
     *  Constant: '<S5>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_gf =
        -HeTCPR_M_Clch2_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource27' incorporates:
     *  Constant: '<S5>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_gn =
        HeTCPR_M_Clch2_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource30' incorporates:
     *  Constant: '<S5>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_dn =
        -HeTCPR_M_Clch2_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource29' incorporates:
     *  Constant: '<S5>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_b =
        HeTCPR_M_Clch2_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource33' incorporates:
     *  Constant: '<S5>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_ce =
        -HeTCPR_M_Clch2_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource32' incorporates:
     *  Constant: '<S5>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_bd =
        HeTCPR_M_Clch2_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource35' incorporates:
     *  Constant: '<S5>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_n =
        -HeTCPR_M_Clch2_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource34' incorporates:
     *  Constant: '<S5>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_m =
        HeTCPR_M_Clch2_TorqLmtInit;

#endif

    /* End of Gain: '<S3>/Gain10' */

    /* Gain: '<S3>/Gain21' incorporates:
     *  Gain: '<S3>/Gain22'
     *  Gain: '<S3>/Gain23'
     *  Gain: '<S3>/Gain24'
     *  Gain: '<S3>/Gain25'
     *  Gain: '<S3>/Gain26'
     *  Gain: '<S3>/Gain27'
     *  Gain: '<S3>/Gain28'
     */
#if !Rte_SysCon_Variant_TCPR_5

    /* VariantMerge generated from: '<S3>/VariantSource36' incorporates:
     *  Constant: '<S6>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_mo =
        -HeTCPR_M_Clch3_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource16' incorporates:
     *  Constant: '<S6>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
        HeTCPR_M_Clch3_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource38' incorporates:
     *  Constant: '<S6>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_dx =
        -HeTCPR_M_Clch3_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource37' incorporates:
     *  Constant: '<S6>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_e =
        HeTCPR_M_Clch3_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource40' incorporates:
     *  Constant: '<S6>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_bo =
        -HeTCPR_M_Clch3_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource39' incorporates:
     *  Constant: '<S6>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_f =
        HeTCPR_M_Clch3_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource42' incorporates:
     *  Constant: '<S6>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Vari_dx2 =
        -HeTCPR_M_Clch3_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource41' incorporates:
     *  Constant: '<S6>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_lf =
        HeTCPR_M_Clch3_TorqLmtInit;

#endif

    /* End of Gain: '<S3>/Gain21' */

    /* Gain: '<S3>/Gain29' incorporates:
     *  Gain: '<S3>/Gain30'
     *  Gain: '<S3>/Gain31'
     *  Gain: '<S3>/Gain32'
     *  Gain: '<S3>/Gain33'
     *  Gain: '<S3>/Gain34'
     *  Gain: '<S3>/Gain35'
     *  Gain: '<S3>/Gain36'
     */
#if !Rte_SysCon_Variant_TCPR_1

    /* VariantMerge generated from: '<S3>/VariantSource47' incorporates:
     *  Constant: '<S7>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_p2 =
        -HeTCPR_M_Clch4_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource5' incorporates:
     *  Constant: '<S7>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_gh =
        HeTCPR_M_Clch4_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource7' incorporates:
     *  Constant: '<S7>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_k =
        -HeTCPR_M_Clch4_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource6' incorporates:
     *  Constant: '<S7>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_i0 =
        HeTCPR_M_Clch4_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource9' incorporates:
     *  Constant: '<S7>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_j0 =
        -HeTCPR_M_Clch4_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource8' incorporates:
     *  Constant: '<S7>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_cr =
        HeTCPR_M_Clch4_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource12' incorporates:
     *  Constant: '<S7>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_a =
        -HeTCPR_M_Clch4_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource11' incorporates:
     *  Constant: '<S7>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_c =
        HeTCPR_M_Clch4_TorqLmtInit;

#endif

    /* End of Gain: '<S3>/Gain29' */

    /* Gain: '<S3>/Gain3' incorporates:
     *  Gain: '<S3>/Gain4'
     *  Gain: '<S3>/Gain5'
     *  Gain: '<S3>/Gain6'
     *  Gain: '<S3>/Gain7'
     *  Gain: '<S3>/Gain8'
     *  Gain: '<S3>/Gain9'
     */
#if !Rte_SysCon_Variant_TCPR_3

    /* VariantMerge generated from: '<S3>/VariantSource1' incorporates:
     *  Constant: '<S4>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_VariantS =
        HeTCPR_M_Clch1_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource14' incorporates:
     *  Constant: '<S4>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_o =
        -HeTCPR_M_Clch1_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource3' incorporates:
     *  Constant: '<S4>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_gv =
        HeTCPR_M_Clch1_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource21' incorporates:
     *  Constant: '<S4>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_i =
        -HeTCPR_M_Clch1_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource20' incorporates:
     *  Constant: '<S4>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_p =
        HeTCPR_M_Clch1_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource23' incorporates:
     *  Constant: '<S4>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_h4 =
        -HeTCPR_M_Clch1_TorqLmtInit;

    /* VariantMerge generated from: '<S3>/VariantSource22' incorporates:
     *  Constant: '<S4>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_jq =
        HeTCPR_M_Clch1_TorqLmtInit;

#endif

    /* End of Gain: '<S3>/Gain3' */

    /* DataTypeConversion: '<S13>/Data Type Conversion' incorporates:
     *  Constant: '<S20>/Calib'
     *  Selector: '<S13>/Selector'
     *  SignalConversion generated from: '<S1>/VeHSER_e_HTDR_State'
     */
#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    /* Outputs for Atomic SubSystem: '<S13>/Bit Selector1' */
    rtb_Selector = HaTCPR_i_HTDR_ClchLckdCntrl
        [(rtb_TmpSignalConversionAtVeHSER_e_HTDR_S)];

    /* RelationalOperator: '<S16>/Greater  Than' incorporates:
     *  Constant: '<S16>/Constant Value'
     *  Constant: '<S20>/Calib'
     *  S-Function (sfix_bitop): '<S16>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S1>/VeHSER_e_HTDR_State'
     */
    rtb_GreaterThan_m = ((((sint32)rtb_Selector) & 1) > 0);

    /* End of Outputs for SubSystem: '<S13>/Bit Selector1' */
#endif

    /* End of DataTypeConversion: '<S13>/Data Type Conversion' */

    /* Outputs for Atomic SubSystem: '<S79>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S204>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S204>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S204>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S204>/EdgeFalling2' */
    /* Outputs for Atomic SubSystem: '<S204>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S78>/EdgeRising' */
    /* If: '<S106>/If2' incorporates:
     *  Abs: '<S79>/Abs'
     *  Abs: '<S79>/Abs1'
     *  Constant: '<S221>/Constant'
     *  Constant: '<S227>/Calib'
     *  Constant: '<S40>/Calib'
     *  Constant: '<S46>/Calib'
     *  Constant: '<S48>/Calib'
     *  Constant: '<S78>/Constant Value1'
     *  DataTypeConversion: '<S79>/Data Type Conversion'
     *  DataTypeConversion: '<S79>/Data Type Conversion1'
     *  If: '<S100>/If'
     *  If: '<S111>/If1'
     *  Inport: '<Root>/VeCSLR_n_Clch1_SlipSpeed'
     *  Inport: '<Root>/VeHSER_e_Clch1_FillCmnd'
     *  Logic: '<S110>/Logical'
     *  Logic: '<S110>/Logical2'
     *  Logic: '<S204>/Logical'
     *  Logic: '<S204>/Logical1'
     *  Logic: '<S204>/Logical2'
     *  Logic: '<S204>/Logical3'
     *  Logic: '<S204>/Logical4'
     *  Logic: '<S79>/Logical'
     *  Logic: '<S79>/Logical1'
     *  Logic: '<S79>/Logical2'
     *  MinMax: '<S77>/Maximum'
     *  Product: '<S77>/Multiplication'
     *  RelationalOperator: '<S204>/Comparison1'
     *  RelationalOperator: '<S78>/Comparison1'
     *  RelationalOperator: '<S79>/Comparison'
     *  Selector: '<S79>/Selector'
     *  Selector: '<S79>/Selector1'
     *  SignalConversion generated from: '<S1>/VeHSER_e_HTDR_State'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_C1Stat'
     *  SignalConversion generated from: '<S3>/VariantSource19'
     *  Sum: '<S77>/Summation'
     *  Sum: '<S79>/Sum1'
     *  Switch: '<S102>/Switch1'
     *  Switch: '<S225>/Switch1'
     *  Switch: '<S75>/Switch1'
     *  Switch: '<S77>/Switch'
     *  UnitDelay: '<S106>/Unit Delay2'
     */
#if Rte_SysCon_Variant_TCPR_3

    /* Logic: '<S101>/AND' incorporates:
     *  Logic: '<S101>/OR1'
     *  UnitDelay: '<S101>/Unit Delay'
     */
    rtb_AND_op = (rtb_GreaterThan_m && (!TCPR_ac_DW.UnitDelay_DSTATE_m5));

    /* Update for UnitDelay: '<S101>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_m5 = rtb_GreaterThan_m;
    if (rtb_TmpSignalConversionAtVeHTDR_M_OutTor >= 0.0F)
    {
        /* Switch: '<S102>/Switch1' incorporates:
         *  Constant: '<S53>/Calib'
         */
        rtb_Switch1 = KeTCPR_dM_C1_PwrOnTcR_RmpRt;
    }
    else
    {
        /* Switch: '<S102>/Switch1' incorporates:
         *  Constant: '<S52>/Calib'
         */
        rtb_Switch1 = KeTCPR_dM_C1_PwrOffTcR_RmpRt;
    }

    /* Logic: '<S220>/AND' incorporates:
     *  Constant: '<S78>/Constant Value1'
     *  Logic: '<S220>/OR1'
     *  UnitDelay: '<S220>/Unit Delay'
     */
    rtb_AND_aa = (rtb_GreaterThan_m && (!TCPR_ac_DW.UnitDelay_DSTATE_k0));

    /* Update for UnitDelay: '<S220>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_k0 = rtb_GreaterThan_m;

    /* Logic: '<S219>/OR1' incorporates:
     *  Logic: '<S218>/OR1'
     *  Logic: '<S223>/AND'
     *  Logic: '<S223>/OR1'
     */
    rtb_UnitDelay_dt = !rtb_GreaterThan_m;

    /* Logic: '<S219>/AND' incorporates:
     *  Logic: '<S219>/OR1'
     *  UnitDelay: '<S219>/Unit Delay'
     */
    rtb_AND_h1 = (rtb_UnitDelay_dt && (TCPR_ac_DW.UnitDelay_DSTATE_mu));

    /* Update for UnitDelay: '<S219>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_mu = rtb_GreaterThan_m;

    /* Outputs for Atomic SubSystem: '<S223>/EdgeRising' */
    /* Logic: '<S224>/AND' incorporates:
     *  Logic: '<S224>/OR1'
     *  UnitDelay: '<S224>/Unit Delay'
     */
    rtb_AND_j = (rtb_GreaterThan_m && (!TCPR_ac_DW.UnitDelay_DSTATE_cx));

    /* Update for UnitDelay: '<S224>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_cx = rtb_GreaterThan_m;

    /* End of Outputs for SubSystem: '<S223>/EdgeRising' */

    /* Switch: '<S223>/Switch1' incorporates:
     *  Constant: '<S223>/Constant Value1'
     *  Constant: '<S32>/Calib'
     *  Constant: '<S74>/Calib'
     *  Logic: '<S223>/OR'
     *  MinMax: '<S223>/Minimum'
     *  Sum: '<S223>/Summation'
     *  UnitDelay: '<S223>/Unit Delay'
     */
    if ((rtb_UnitDelay_dt || rtb_AND_j) || rtb_AND_h1)
    {
        TCPR_ac_DW.UnitDelay_DSTATE_b = 0.0F;
    }
    else
    {
        TCPR_ac_DW.UnitDelay_DSTATE_b = fminf(KeTCPR_t_DlydRisingEdgeTmr,
            HeTCPR_t_MedTED_dT + TCPR_ac_DW.UnitDelay_DSTATE_b);
    }

    /* End of Switch: '<S223>/Switch1' */

    /* Logic: '<S218>/AND' incorporates:
     *  UnitDelay: '<S218>/Unit Delay'
     */
    rtb_AND_h1 = (rtb_UnitDelay_dt && (TCPR_ac_DW.UnitDelay_DSTATE_la));

    /* Update for UnitDelay: '<S218>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_la = rtb_GreaterThan_m;
    rtb_AND_j = (((uint32)rtb_TmpSignalConversionAtVeTRNR_e_C1Stat) !=
                 CeHCCR_e_ClLocked);

    /* Logic: '<S222>/OR1' incorporates:
     *  Constant: '<S221>/Constant'
     *  Constant: '<S74>/Calib'
     *  Logic: '<S222>/NOT'
     *  Logic: '<S222>/OR'
     *  Logic: '<S223>/AND'
     *  RelationalOperator: '<S223>/Greater  Than'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_C1Stat'
     *  UnitDelay: '<S222>/Unit Delay'
     *  UnitDelay: '<S223>/Unit Delay'
     */
    VeTCPC_b_C1_SlRecLatch = ((rtb_AND_aa && rtb_AND_j) || ((((rtb_UnitDelay_dt ||
        (TCPR_ac_DW.UnitDelay_DSTATE_b < KeTCPR_t_DlydRisingEdgeTmr)) &&
        (rtb_UnitDelay_dt || rtb_AND_j)) && (!rtb_AND_h1)) &&
        (TCPR_ac_DW.UnitDelay_DSTATE_fe)));

    /* Update for UnitDelay: '<S222>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_fe = VeTCPC_b_C1_SlRecLatch;

    /* Logic: '<S204>/Logical4' incorporates:
     *  Constant: '<S49>/Calib'
     */
    VeTCPC_b_C1_SlRecEnbl = ((VeTCPC_b_C1_SlRecLatch) ||
        (KeTCPR_b_EnblSlRec_woC1Cntrl));
    if (rtb_GreaterThan_m)
    {
        (void)Rte_Read_VeCSLR_n_Clch1_SlipSpeed_Value(&rtb_Abs2_o);

        /* Outputs for IfAction SubSystem: '<S111>/Slip_Remed' incorporates:
         *  ActionPort: '<S202>/Action Port'
         */
        /* Abs: '<S202>/Abs2' incorporates:
         *  Inport: '<Root>/VeCSLR_n_Clch1_SlipSpeed'
         */
        rtb_Abs2_o = fabsf(rtb_Abs2_o);

        /* RelationalOperator: '<S202>/Comparison2' incorporates:
         *  Constant: '<S51>/Calib'
         *  Constant: '<S54>/Calib'
         */
        rtb_AND_aa = (KeTCPR_dM_C1_SlipRcvTcR_RmpRt <
                      KeTCPR_dM_C1_ClchCapRmpRtThresh);

        /* UnitDelay: '<S209>/Unit Delay' incorporates:
         *  Constant: '<S59>/Calib'
         *  RelationalOperator: '<S202>/Comparison3'
         */
        rtb_UnitDelay_dt = (rtb_Abs2_o > KeTCPR_n_C1_StblStSlipDtctThreshHT);

        /* Logic: '<S202>/Logical3' incorporates:
         *  Constant: '<S58>/Calib'
         *  Logic: '<S202>/Logical'
         *  Logic: '<S202>/Logical1'
         *  Logic: '<S202>/Logical2'
         *  RelationalOperator: '<S202>/Comparison'
         */
        rtb_UnitDelay_dt = ((((rtb_AND_aa && (rtb_Abs2_o >
                                KeTCPR_n_C1_StblStSlipDtctThresh)) &&
                              (!rtb_UnitDelay_dt)) || rtb_UnitDelay_dt) &&
                            (VeTCPC_b_C1_SlRecEnbl));

        /* Outputs for Atomic SubSystem: '<S208>/EdgeBi1' */
        /* RelationalOperator: '<S209>/Not Equal' incorporates:
         *  UnitDelay: '<S209>/Unit Delay'
         */
        rtb_AND_h1 = (rtb_UnitDelay_dt != TCPR_ac_DW.UnitDelay_DSTATE_mk);

        /* Update for UnitDelay: '<S209>/Unit Delay' */
        TCPR_ac_DW.UnitDelay_DSTATE_mk = rtb_UnitDelay_dt;

        /* End of Outputs for SubSystem: '<S208>/EdgeBi1' */

        /* If: '<S208>/If' incorporates:
         *  Inport: '<S210>/u'
         *  Logic: '<S208>/Logical1'
         *  RelationalOperator: '<S208>/Comparison4'
         *  UnitDelay: '<S208>/Unit Delay'
         */
        if ((TCPR_ac_DW.UnitDelay_DSTATE_kx == rtb_UnitDelay_dt) || rtb_AND_op)
        {
            /* Outputs for IfAction SubSystem: '<S208>/Reset_PassThr' incorporates:
             *  ActionPort: '<S210>/Action Port'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_kx = rtb_UnitDelay_dt;

            /* End of Outputs for SubSystem: '<S208>/Reset_PassThr' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S208>/SlipDetected' incorporates:
             *  ActionPort: '<S211>/Action Port'
             */
            /* RelationalOperator: '<S211>/Comparison1' incorporates:
             *  Constant: '<S59>/Calib'
             */
            rtb_AND_j = (rtb_Abs2_o > KeTCPR_n_C1_StblStSlipDtctThreshHT);

            /* Outputs for Atomic SubSystem: '<S211>/EdgeRising1' */
            /* Logic: '<S212>/AND' incorporates:
             *  Logic: '<S212>/OR1'
             *  UnitDelay: '<S212>/Unit Delay'
             */
            rtb_AND_js = (rtb_AND_j && (!TCPR_ac_DW.UnitDelay_DSTATE_ke));

            /* Update for UnitDelay: '<S212>/Unit Delay' */
            TCPR_ac_DW.UnitDelay_DSTATE_ke = rtb_AND_j;

            /* End of Outputs for SubSystem: '<S211>/EdgeRising1' */

            /* If: '<S211>/If' incorporates:
             *  Constant: '<S32>/Calib'
             *  Inport: '<S215>/dT'
             *  Logic: '<S211>/Logical1'
             *  UnitDelay: '<S211>/Unit Delay'
             */
            if (rtb_AND_h1 || rtb_AND_js)
            {
                /* Outputs for IfAction SubSystem: '<S211>/Initialize_Timer' incorporates:
                 *  ActionPort: '<S215>/Action Port'
                 */
                /* Switch: '<S217>/Switch1' */
                if (rtb_UnitDelay_dt)
                {
                    /* Switch: '<S214>/Switch1' */
                    if (rtb_AND_j)
                    {
                        /* Switch: '<S217>/Switch1' incorporates:
                         *  Constant: '<S67>/Calib'
                         */
                        TCPR_ac_B.Switch1_i = KeTCPR_t_C1_StblStSlipDtctTimeHT;
                    }
                    else
                    {
                        /* Switch: '<S217>/Switch1' incorporates:
                         *  Constant: '<S66>/Calib'
                         */
                        TCPR_ac_B.Switch1_i = KeTCPR_t_C1_StblStSlipDtctTime;
                    }

                    /* End of Switch: '<S214>/Switch1' */
                }
                else
                {
                    /* Switch: '<S217>/Switch1' incorporates:
                     *  Constant: '<S68>/Calib'
                     */
                    TCPR_ac_B.Switch1_i = KeTCPR_t_C1_StblStSlipRcvryTime;
                }

                /* End of Switch: '<S217>/Switch1' */
                TCPR_ac_DW.UnitDelay_DSTATE_pu = HeTCPR_t_MedTED_dT;

                /* End of Outputs for SubSystem: '<S211>/Initialize_Timer' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S211>/Timer_Increment' incorporates:
                 *  ActionPort: '<S216>/Action Port'
                 */
                /* Sum: '<S216>/Sum' incorporates:
                 *  Constant: '<S32>/Calib'
                 *  UnitDelay: '<S211>/Unit Delay'
                 */
                TCPR_ac_DW.UnitDelay_DSTATE_pu += HeTCPR_t_MedTED_dT;

                /* End of Outputs for SubSystem: '<S211>/Timer_Increment' */
            }

            /* End of If: '<S211>/If' */

            /* Switch: '<S213>/Switch1' incorporates:
             *  RelationalOperator: '<S211>/Comparison2'
             *  UnitDelay: '<S211>/Unit Delay'
             */
            if (TCPR_ac_B.Switch1_i < TCPR_ac_DW.UnitDelay_DSTATE_pu)
            {
                TCPR_ac_DW.UnitDelay_DSTATE_kx = rtb_UnitDelay_dt;
            }

            /* End of Switch: '<S213>/Switch1' */
            /* End of Outputs for SubSystem: '<S208>/SlipDetected' */
        }

        /* End of If: '<S208>/If' */

        /* Switch: '<S206>/Switch1' incorporates:
         *  UnitDelay: '<S208>/Unit Delay'
         */
        if (TCPR_ac_DW.UnitDelay_DSTATE_kx)
        {
            /* Switch: '<S202>/Switch' incorporates:
             *  Constant: '<S59>/Calib'
             *  RelationalOperator: '<S202>/Comparison1'
             */
            if (KeTCPR_n_C1_StblStSlipDtctThreshHT > rtb_Abs2_o)
            {
                /* Switch: '<S202>/Switch1' */
                if (rtb_AND_aa)
                {
                    /* Merge: '<S111>/Merge2' incorporates:
                     *  Constant: '<S54>/Calib'
                     *  Switch: '<S202>/Switch'
                     */
                    rtb_Switch1 = KeTCPR_dM_C1_SlipRcvTcR_RmpRt;
                }

                /* End of Switch: '<S202>/Switch1' */
            }
            else
            {
                /* Merge: '<S111>/Merge2' incorporates:
                 *  Constant: '<S55>/Calib'
                 *  Switch: '<S202>/Switch'
                 */
                rtb_Switch1 = KeTCPR_dM_C1_SlipRcvTcR_RmpRtFast;
            }

            /* End of Switch: '<S202>/Switch' */
        }

        /* End of Switch: '<S206>/Switch1' */

        /* Merge: '<S111>/Merge1' incorporates:
         *  Gain: '<S207>/Gain'
         *  UnitDelay: '<S208>/Unit Delay'
         */
        rtb_AND_aa = TCPR_ac_DW.UnitDelay_DSTATE_kx;

        /* End of Outputs for SubSystem: '<S111>/Slip_Remed' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S111>/Slip_Remed_Unava' incorporates:
         *  ActionPort: '<S203>/Action Port'
         */
        /* Merge: '<S111>/Merge1' incorporates:
         *  Constant: '<S203>/FALSE Constant'
         *  SignalConversion generated from: '<S203>/SlipDetected'
         */
        rtb_AND_aa = false;

        /* End of Outputs for SubSystem: '<S111>/Slip_Remed_Unava' */
    }

    /* Logic: '<S110>/Logical' incorporates:
     *  Inport: '<Root>/VeCSLR_n_Clch1_SlipSpeed'
     *  UnitDelay: '<S110>/Unit Delay'
     */
    rtb_AND_j = (rtb_AND_aa && (!TCPR_ac_DW.UnitDelay_DSTATE_bf));
    if (TCPR_ac_DW.UnitDelay2_DSTATE != rtb_Switch1)
    {
        /* Outputs for IfAction SubSystem: '<S106>/New_RampRate_Calc' incorporates:
         *  ActionPort: '<S200>/Action Port'
         */
        /* Product: '<S200>/Product' incorporates:
         *  Constant: '<S32>/Calib'
         */
        TCPR_ac_B.Product_p = rtb_Switch1 * HeTCPR_t_MedTED_dT;

        /* Product: '<S200>/Product1' incorporates:
         *  Constant: '<S72>/Calib'
         */
        TCPR_ac_B.Product1_j = rtb_Switch1 * KeTCPR_t_CntrlTcR_LeadTmForOfst;

        /* End of Outputs for SubSystem: '<S106>/New_RampRate_Calc' */
    }

    if (KeTCPR_b_EnblCorrectedC1Trq)
    {
        /* Switch: '<S77>/Switch' incorporates:
         *  Constant: '<S56>/Calib'
         *  Constant: '<S57>/Calib'
         *  Constant: '<S61>/Calib'
         *  Constant: '<S62>/Calib'
         *  Constant: '<S77>/Constant Value'
         *  Sum: '<S77>/Sum1'
         */
        rtb_Switch = ((fmaxf(KeTCPR_p_C1Press_EngOn - KeTCPR_p_C1_RetSpringPress,
                             0.0F) * KeTCPR_k_C1_StaticFrictionCoef) *
                      KeTCPR_h_C1_PresToTorqLumpedCal) -
            rtb_TmpSignalConversionAtVeCSDR_M_Correc;
    }
    else
    {
        /* Switch: '<S77>/Switch' incorporates:
         *  Constant: '<S56>/Calib'
         *  Constant: '<S57>/Calib'
         *  Constant: '<S61>/Calib'
         *  Constant: '<S62>/Calib'
         *  Constant: '<S77>/Constant Value'
         */
        rtb_Switch = (fmaxf(KeTCPR_p_C1Press_EngOn - KeTCPR_p_C1_RetSpringPress,
                            0.0F) * KeTCPR_k_C1_StaticFrictionCoef) *
            KeTCPR_h_C1_PresToTorqLumpedCal;
    }

    if (KeTCPR_b_C1_AdjEstTorqAllwd)
    {
        /* Switch: '<S75>/Switch1' */
        VeTCPC_M_C1LeadMaxCap = rtb_TmpSignalConversionAtVeHCCR_M_Clch1_;
    }
    else
    {
        /* Switch: '<S75>/Switch1' */
        VeTCPC_M_C1LeadMaxCap = rtb_Switch;
    }

    /* VariantMerge generated from: '<S3>/VariantSource19' incorporates:
     *  Constant: '<S226>/Calib'
     *  Constant: '<S40>/Calib'
     *  Constant: '<S48>/Calib'
     *  SignalConversion generated from: '<S1>/VeHSER_e_HTDR_State'
     *  UnitDelay: '<S106>/Unit Delay2'
     */
    rtb_UnitDelay_dt = KaTCPR_b_C1LckdStdyStSel
        [(rtb_TmpSignalConversionAtVeHSER_e_HTDR_S)];

    /* UnitDelay: '<S693>/Unit Delay' incorporates:
     *  UnitDelay: '<S230>/Unit Delay'
     */
    rtb_AND_h1 = TCPR_ac_DW.UnitDelay_DSTATE_gc;

    /* Outputs for IfAction SubSystem: '<S100>/Locked_TcR_Cntrl' incorporates:
     *  ActionPort: '<S112>/Action Port'
     */
    /* Abs: '<S121>/Abs4' incorporates:
     *  Switch: '<S121>/Switch1'
     */
    rtb_Merge1 = fabsf(rtb_TmpSignalConversionAtVeHSER_M_Clch1_);

    /* Abs: '<S120>/Abs' incorporates:
     *  Switch: '<S130>/Switch1'
     *  Switch: '<S132>/Switch1'
     */
    rtb_Abs2_o = fabsf(rtb_TmpSignalConversionAtVeHTDR_M_Clch1_);

    /* End of Outputs for SubSystem: '<S100>/Locked_TcR_Cntrl' */

    /* Logic: '<S230>/OR1' incorporates:
     *  Constant: '<S228>/Calib'
     *  Logic: '<S230>/OR'
     *  UnitDelay: '<S230>/Unit Delay'
     */
    TCPR_ac_DW.UnitDelay_DSTATE_gc = ((rtb_UnitDelay_dt && ((rtb_Merge1 -
        rtb_Abs2_o) > KeTCPR_M_Clch1_ResetTcMax_TrqDiff)) || (rtb_UnitDelay_dt &&
        (TCPR_ac_DW.UnitDelay_DSTATE_gc)));
    if (KaTCPR_b_M2GrStSel[(rtb_TmpSignalConversionAtVeHSER_e_HTDR_S)])
    {
        /* VariantMerge generated from: '<S3>/VariantSource19' incorporates:
         *  Constant: '<S79>/TRUE Constant'
         */
        rtb_UnitDelay_dt = true;
    }
    else
    {
        /* VariantMerge generated from: '<S3>/VariantSource19' incorporates:
         *  Switch: '<S225>/Switch2'
         *  UnitDelay: '<S230>/Unit Delay'
         */
        rtb_UnitDelay_dt = !TCPR_ac_DW.UnitDelay_DSTATE_gc;
    }

    if (rtb_GreaterThan_m)
    {
        (void)Rte_Read_VeHSER_e_Clch1_FillCmnd_Value(&tmpRead_0);

        /* Outputs for IfAction SubSystem: '<S100>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S112>/Action Port'
         */
        /* RelationalOperator: '<S112>/Relational Operator' incorporates:
         *  Constant: '<S112>/Constant Value2'
         *  Inport: '<Root>/VeHSER_e_Clch1_FillCmnd'
         */
        rtb_GreaterThan_m = (rtb_TmpSignalConversionAtVeHSER_M_Clc_gh < 0.0F);

        /* Outputs for Atomic SubSystem: '<S112>/EdgeRising' */
        /* Logic: '<S115>/AND' incorporates:
         *  Logic: '<S115>/OR1'
         *  UnitDelay: '<S115>/Unit Delay'
         */
        rtb_AND_js = (rtb_GreaterThan_m && (!TCPR_ac_DW.UnitDelay_DSTATE_ch));

        /* Update for UnitDelay: '<S115>/Unit Delay' */
        TCPR_ac_DW.UnitDelay_DSTATE_ch = rtb_GreaterThan_m;

        /* End of Outputs for SubSystem: '<S112>/EdgeRising' */

        /* Switch: '<S137>/Switch1' incorporates:
         *  Constant: '<S122>/Constant Value1'
         *  Constant: '<S37>/Calib'
         *  Constant: '<S38>/Calib'
         *  MinMax: '<S122>/MinMax3'
         *  Sum: '<S122>/Sum1'
         *  UnitDelay: '<S122>/Unit Delay'
         */
        if (rtb_AND_op)
        {
            TCPR_ac_DW.UnitDelay_DSTATE_n = 0.0F;
        }
        else
        {
            TCPR_ac_DW.UnitDelay_DSTATE_n = fminf(KeTCPR_M_C1_ClampTorqRampStep
                + TCPR_ac_DW.UnitDelay_DSTATE_n, KeTCPR_M_C1_ClmpTorq);
        }

        /* End of Switch: '<S137>/Switch1' */

        /* Switch: '<S121>/Switch1' incorporates:
         *  Abs: '<S121>/Abs3'
         *  Constant: '<S229>/Calib'
         */
        if ((KeTCPR_b_C1_UseTcMax4HTDR) && rtb_UnitDelay_dt)
        {
            rtb_Merge1 = fabsf(VeTCPC_M_C1LeadMaxCap);
        }

        /* Sum: '<S122>/Sum2' incorporates:
         *  UnitDelay: '<S122>/Unit Delay'
         */
        rtb_Merge1 -= TCPR_ac_DW.UnitDelay_DSTATE_n;

        /* Outputs for Atomic SubSystem: '<S122>/Limiter' */
        /* Switch: '<S138>/Switch1' incorporates:
         *  RelationalOperator: '<S138>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clc_lx < rtb_Merge1)
        {
            /* Switch: '<S112>/Switch1' */
            rtb_Merge1 = rtb_TmpSignalConversionAtVeHSER_M_Clc_lx;
        }

        /* End of Switch: '<S138>/Switch1' */

        /* Switch: '<S138>/Switch' incorporates:
         *  Constant: '<S122>/Constant Value3'
         *  RelationalOperator: '<S138>/Relational Operator1'
         */
        if (rtb_Merge1 <= 0.0F)
        {
            /* Switch: '<S138>/Switch' */
            rtb_Merge1 = 0.0F;
        }

        /* End of Switch: '<S138>/Switch' */
        /* End of Outputs for SubSystem: '<S122>/Limiter' */

        /* Outputs for Enabled SubSystem: '<S119>/Start_TcR_Ramp' incorporates:
         *  EnablePort: '<S126>/Enable'
         */
        if (rtb_AND_op)
        {
            /* If: '<S126>/If1' incorporates:
             *  Abs: '<S112>/Abs'
             *  Constant: '<S47>/Calib'
             */
            if (KeTCPR_b_CntrlTcR_OvrdTo0_OnRst)
            {
                /* Outputs for IfAction SubSystem: '<S126>/TcRMaxOvrdToZero' incorporates:
                 *  ActionPort: '<S129>/Action Port'
                 */
                TCPR_ac_TcRMaxOvrdToZero(&TCPR_ac_B.Merge_c);

                /* End of Outputs for SubSystem: '<S126>/TcRMaxOvrdToZero' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S126>/TcRMaxNormal' incorporates:
                 *  ActionPort: '<S128>/Action Port'
                 */
                TCPR_ac_TcRMaxNormal(fabsf
                                     (rtb_TmpSignalConversionAtVeHSER_M_Clch1_),
                                     &TCPR_ac_B.Merge_c);

                /* End of Outputs for SubSystem: '<S126>/TcRMaxNormal' */
            }

            /* End of If: '<S126>/If1' */

            /* Outputs for Atomic SubSystem: '<S119>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S127>/Switch1' incorporates:
             *  Constant: '<S73>/Calib'
             *  UnitDelay: '<S127>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_ey = KeTCPR_t_CntrlTcR_RmpHldffOnR;

            /* End of Outputs for SubSystem: '<S119>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S125>/Switch1' */
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ = TCPR_ac_B.Merge_c;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S119>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S127>/Switch1' incorporates:
             *  Constant: '<S127>/Constant Value4'
             *  Constant: '<S32>/Calib'
             *  MinMax: '<S127>/Maximum'
             *  Sum: '<S127>/Subtraction'
             *  UnitDelay: '<S127>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_ey = fmaxf
                (TCPR_ac_DW.UnitDelay_DSTATE_ey - HeTCPR_t_MedTED_dT, 0.0F);

            /* End of Outputs for SubSystem: '<S119>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S123>/Switch1' incorporates:
             *  Abs: '<S119>/Abs'
             *  Switch: '<S125>/Switch1'
             */
            if (rtb_AND_j)
            {
                TCPR_ac_DW.UnitDelay1_DSTATE_lu = fabsf
                    (rtb_TmpSignalConversionAtVeHTDR_M_Clch1_);
            }

            /* Outputs for Atomic SubSystem: '<S119>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S124>/Switch1' incorporates:
             *  Constant: '<S119>/Constant Value2'
             *  Constant: '<S119>/Constant Value3'
             *  Constant: '<S127>/Constant Value2'
             *  Logic: '<S119>/Logical'
             *  RelationalOperator: '<S119>/Comparison1'
             *  RelationalOperator: '<S127>/Greater  Than1'
             *  Switch: '<S125>/Switch1'
             *  UnitDelay: '<S127>/Unit Delay'
             */
            if ((TCPR_ac_DW.UnitDelay_DSTATE_ey > 0.0F) && (TCPR_ac_B.Product_p >=
                 0.0F))
            {
                rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ = 0.0F;
            }
            else
            {
                rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ = TCPR_ac_B.Product_p;
            }

            /* End of Switch: '<S124>/Switch1' */
            /* End of Outputs for SubSystem: '<S119>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S125>/Switch1' incorporates:
             *  Sum: '<S119>/Sum1'
             */
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ +=
                TCPR_ac_DW.UnitDelay1_DSTATE_lu;
        }

        /* End of Outputs for SubSystem: '<S119>/Start_TcR_Ramp' */

        /* Outputs for Atomic SubSystem: '<S112>/Limiter' */
        /* Switch: '<S117>/Switch1' incorporates:
         *  RelationalOperator: '<S117>/Relational Operator'
         */
        if (rtb_Merge1 >= rtb_TmpSignalConversionAtVeHTDR_M_Clch1_)
        {
            /* Switch: '<S112>/Switch1' */
            rtb_Merge1 = rtb_TmpSignalConversionAtVeHTDR_M_Clch1_;
        }

        /* End of Switch: '<S117>/Switch1' */

        /* Switch: '<S117>/Switch' incorporates:
         *  Constant: '<S112>/Constant Value1'
         *  RelationalOperator: '<S117>/Relational Operator1'
         */
        if (rtb_Merge1 > 0.0F)
        {
            /* Switch: '<S123>/Switch1' incorporates:
             *  UnitDelay: '<S112>/Unit Delay1'
             */
            TCPR_ac_DW.UnitDelay1_DSTATE_lu = rtb_Merge1;
        }
        else
        {
            /* Switch: '<S123>/Switch1' incorporates:
             *  UnitDelay: '<S112>/Unit Delay1'
             */
            TCPR_ac_DW.UnitDelay1_DSTATE_lu = 0.0F;
        }

        /* End of Switch: '<S117>/Switch' */
        /* End of Outputs for SubSystem: '<S112>/Limiter' */

        /* Outputs for Enabled SubSystem: '<S120>/Start_TcR_Ramp' incorporates:
         *  EnablePort: '<S133>/Enable'
         */
        if (rtb_AND_js)
        {
            /* If: '<S133>/If1' incorporates:
             *  Constant: '<S44>/Calib'
             */
            if (KeTCPR_b_CntrlTcRMin_OvrdTo0_OnRst)
            {
                /* Outputs for IfAction SubSystem: '<S133>/TcRMinOvrdToZero' incorporates:
                 *  ActionPort: '<S136>/Action Port'
                 */
                TCPR_ac_TcRMaxOvrdToZero(&TCPR_ac_B.Merge_o);

                /* End of Outputs for SubSystem: '<S133>/TcRMinOvrdToZero' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S133>/TcRMinNormal' incorporates:
                 *  ActionPort: '<S135>/Action Port'
                 */
                TCPR_ac_TcRMaxNormal(rtb_TmpSignalConversionAtVeHSER_M_Clch1_,
                                     &TCPR_ac_B.Merge_o);

                /* End of Outputs for SubSystem: '<S133>/TcRMinNormal' */
            }

            /* End of If: '<S133>/If1' */

            /* Outputs for Atomic SubSystem: '<S120>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S134>/Switch1' incorporates:
             *  Constant: '<S70>/Calib'
             *  UnitDelay: '<S134>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_nd = KeTCPR_t_CntrlTcRMin_RmpHldffOnR;

            /* End of Outputs for SubSystem: '<S120>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S132>/Switch1' */
            rtb_Merge1 = TCPR_ac_B.Merge_o;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S120>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S134>/Switch1' incorporates:
             *  Constant: '<S134>/Constant Value4'
             *  Constant: '<S32>/Calib'
             *  MinMax: '<S134>/Maximum'
             *  Sum: '<S134>/Subtraction'
             *  UnitDelay: '<S134>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_nd = fmaxf
                (TCPR_ac_DW.UnitDelay_DSTATE_nd - HeTCPR_t_MedTED_dT, 0.0F);

            /* End of Outputs for SubSystem: '<S120>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S131>/Switch1' incorporates:
             *  Gain: '<S120>/Gain'
             *  Switch: '<S132>/Switch1'
             */
            rtb_Merge1 = -TCPR_ac_B.Product_p;

            /* Outputs for Atomic SubSystem: '<S120>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S131>/Switch1' incorporates:
             *  Constant: '<S120>/Constant Value3'
             *  Constant: '<S134>/Constant Value2'
             *  Gain: '<S120>/Gain'
             *  Logic: '<S120>/Logical'
             *  RelationalOperator: '<S120>/Comparison1'
             *  RelationalOperator: '<S134>/Greater  Than1'
             *  Switch: '<S132>/Switch1'
             *  UnitDelay: '<S134>/Unit Delay'
             */
            if ((TCPR_ac_DW.UnitDelay_DSTATE_nd > 0.0F) &&
                    ((-TCPR_ac_B.Product_p) <= 0.0F))
            {
                /* Switch: '<S131>/Switch1' incorporates:
                 *  Constant: '<S120>/Constant Value2'
                 */
                rtb_Merge1 = 0.0F;
            }

            /* End of Switch: '<S131>/Switch1' */
            /* End of Outputs for SubSystem: '<S120>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S130>/Switch1' incorporates:
             *  Switch: '<S132>/Switch1'
             */
            if (rtb_AND_j)
            {
                TCPR_ac_DW.UnitDelay2_DSTATE_p0 = rtb_Abs2_o;
            }

            /* Switch: '<S132>/Switch1' incorporates:
             *  Sum: '<S120>/Sum1'
             */
            rtb_Merge1 += TCPR_ac_DW.UnitDelay2_DSTATE_p0;
        }

        /* End of Outputs for SubSystem: '<S120>/Start_TcR_Ramp' */

        /* Outputs for Atomic SubSystem: '<S112>/Limiter1' */
        /* Switch: '<S118>/Switch1' incorporates:
         *  Constant: '<S112>/Constant Value3'
         *  RelationalOperator: '<S118>/Relational Operator'
         */
        if (0.0F < rtb_Merge1)
        {
            /* Switch: '<S112>/Switch1' */
            rtb_Merge1 = 0.0F;
        }

        /* End of Switch: '<S118>/Switch1' */

        /* Switch: '<S118>/Switch' incorporates:
         *  RelationalOperator: '<S118>/Relational Operator1'
         */
        if (rtb_Merge1 > rtb_TmpSignalConversionAtVeHSER_M_Clc_gh)
        {
            /* Switch: '<S130>/Switch1' incorporates:
             *  UnitDelay: '<S112>/Unit Delay2'
             */
            TCPR_ac_DW.UnitDelay2_DSTATE_p0 = rtb_Merge1;
        }
        else
        {
            /* Switch: '<S130>/Switch1' incorporates:
             *  UnitDelay: '<S112>/Unit Delay2'
             */
            TCPR_ac_DW.UnitDelay2_DSTATE_p0 =
                rtb_TmpSignalConversionAtVeHSER_M_Clc_gh;
        }

        /* End of Switch: '<S118>/Switch' */
        /* End of Outputs for SubSystem: '<S112>/Limiter1' */

        /* VariantMerge generated from: '<S3>/VariantSource19' incorporates:
         *  Constant: '<S112>/Constant Value'
         *  Constant: '<S116>/Constant'
         *  Inport: '<Root>/VeHSER_e_Clch1_FillCmnd'
         *  Logic: '<S112>/Logical1'
         *  RelationalOperator: '<S112>/Comparison1'
         *  RelationalOperator: '<S112>/Comparison4'
         */
        rtb_UnitDelay_dt = ((rtb_TmpSignalConversionAtVeHSER_M_Clc_lx <= 0.1F) ||
                            (((uint32)tmpRead_0) == CeHSER_e_ClchFillToTchPt));

        /* Merge: '<S100>/Merge' incorporates:
         *  Constant: '<S35>/Calib'
         *  Product: '<S112>/Product'
         *  UnitDelay: '<S112>/Unit Delay1'
         */
        rtb_Abs2_o = KeTCPR_K_C1_Max_Scalar * TCPR_ac_DW.UnitDelay1_DSTATE_lu;

        /* Switch: '<S112>/Switch1' incorporates:
         *  Constant: '<S31>/Calib'
         *  Logic: '<S112>/NOT'
         *  UnitDelay: '<S112>/Unit Delay1'
         *  UnitDelay: '<S112>/Unit Delay2'
         */
        if (!HeTCPR_b_Enb_C1_Asymetric_ClchLim)
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay1_DSTATE_lu;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay2_DSTATE_p0;
        }

        /* End of Switch: '<S112>/Switch1' */

        /* Merge: '<S100>/Merge1' incorporates:
         *  Constant: '<S36>/Calib'
         *  Product: '<S112>/Product1'
         */
        rtb_Merge1 = rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ *
            KeTCPR_K_C1_Min_Scalar;

        /* End of Outputs for SubSystem: '<S100>/Locked_TcR_Cntrl' */
    }
    else if (KeTCPR_b_CntrlTcR_OvrdTo0_OnRlsd)
    {
        /* Outputs for IfAction SubSystem: '<S100>/Rlsd_TcR_Ovrdn' incorporates:
         *  ActionPort: '<S114>/Action Port'
         */
        /* Merge: '<S100>/Merge' incorporates:
         *  Constant: '<S114>/Constant Value1'
         *  SignalConversion generated from: '<S114>/TcR_Max'
         */
        rtb_Abs2_o = 0.0F;

        /* Merge: '<S100>/Merge1' incorporates:
         *  Constant: '<S114>/Constant Value2'
         *  SignalConversion generated from: '<S114>/TcR_Min'
         */
        rtb_Merge1 = 0.0F;

        /* VariantMerge generated from: '<S3>/VariantSource19' incorporates:
         *  Constant: '<S114>/TRUE Constant'
         *  SignalConversion generated from: '<S114>/ClchOffloadCnfrmd'
         */
        rtb_UnitDelay_dt = true;

        /* End of Outputs for SubSystem: '<S100>/Rlsd_TcR_Ovrdn' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S100>/Rlsd_TcR_CntrlDflt' incorporates:
         *  ActionPort: '<S113>/Action Port'
         */
        /* Merge: '<S100>/Merge' incorporates:
         *  Gain: '<S139>/Gain'
         */
        rtb_Abs2_o = rtb_TmpSignalConversionAtVeHSER_M_Clch1_;

        /* Merge: '<S100>/Merge1' incorporates:
         *  Gain: '<S140>/Gain'
         */
        rtb_Merge1 = rtb_TmpSignalConversionAtVeHSER_M_Clch1_;

        /* VariantMerge generated from: '<S3>/VariantSource19' incorporates:
         *  Constant: '<S113>/TRUE Constant'
         *  SignalConversion generated from: '<S113>/ClchOffloadCnfrmd'
         */
        rtb_UnitDelay_dt = true;

        /* End of Outputs for SubSystem: '<S100>/Rlsd_TcR_CntrlDflt' */
    }

#elif !Rte_SysCon_Variant_TCPR_3 && Rte_SysCon_Variant_TCPR_9

    /* VariantMerge generated from: '<S3>/VariantSource19' incorporates:
     *  Constant: '<S3>/TRUE Constant1'
     *  SignalConversion generated from: '<S3>/VariantSource19'
     */
    rtb_UnitDelay_dt = true;

#endif

    /* End of If: '<S106>/If2' */
    /* End of Outputs for SubSystem: '<S78>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S204>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S204>/EdgeFalling2' */
    /* End of Outputs for SubSystem: '<S204>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S204>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S204>/Signal Latch On With Reset1' */
    /* End of Outputs for SubSystem: '<S79>/Signal Latch On With Reset1' */
#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    /* Outputs for Atomic SubSystem: '<S13>/Bit Selector2' */
    /* RelationalOperator: '<S17>/Greater  Than' incorporates:
     *  Constant: '<S17>/Constant Value'
     *  S-Function (sfix_bitop): '<S17>/Bitwise Logical Operator'
     */
    rtb_GreaterThan_e = ((((sint32)rtb_Selector) & 2) > 0);

    /* End of Outputs for SubSystem: '<S13>/Bit Selector2' */
#endif

    /* Outputs for Atomic SubSystem: '<S404>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S404>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S404>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S404>/EdgeFalling2' */
    /* Outputs for Atomic SubSystem: '<S404>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S278>/EdgeRising' */
    /* If: '<S306>/If2' incorporates:
     *  Constant: '<S240>/Calib'
     *  Constant: '<S247>/Calib'
     *  Constant: '<S249>/Calib'
     *  Constant: '<S278>/Constant Value1'
     *  Constant: '<S421>/Constant'
     *  Constant: '<S425>/Calib'
     *  If: '<S300>/If'
     *  If: '<S311>/If1'
     *  Inport: '<Root>/VeESPR_b_TCMEngSpdReqActive'
     *  Inport: '<Root>/VeHSER_e_Clch2_FillCmnd'
     *  Logic: '<S279>/Logical3'
     *  Logic: '<S310>/Logical'
     *  Logic: '<S310>/Logical2'
     *  Logic: '<S404>/Logical'
     *  Logic: '<S404>/Logical1'
     *  Logic: '<S404>/Logical2'
     *  Logic: '<S404>/Logical3'
     *  Logic: '<S404>/Logical4'
     *  MinMax: '<S277>/Maximum'
     *  Product: '<S277>/Multiplication'
     *  RelationalOperator: '<S278>/Comparison1'
     *  RelationalOperator: '<S404>/Comparison1'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_C2Stat'
     *  SignalConversion generated from: '<S3>/VariantSource44'
     *  Sum: '<S277>/Summation'
     *  Switch: '<S275>/Switch1'
     *  Switch: '<S277>/Switch'
     *  Switch: '<S279>/Switch'
     *  Switch: '<S302>/Switch1'
     *  UnitDelay: '<S306>/Unit Delay2'
     */
#if Rte_SysCon_Variant_TCPR_7

    /* Logic: '<S301>/AND' incorporates:
     *  Logic: '<S301>/OR1'
     *  UnitDelay: '<S301>/Unit Delay'
     */
    rtb_AND_a3 = (rtb_GreaterThan_e && (!TCPR_ac_DW.UnitDelay_DSTATE_ao));

    /* Update for UnitDelay: '<S301>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_ao = rtb_GreaterThan_e;
    if (rtb_TmpSignalConversionAtVeHTDR_M_OutTor >= 0.0F)
    {
        /* Switch: '<S302>/Switch1' incorporates:
         *  Constant: '<S254>/Calib'
         */
        rtb_Switch1_an = KeTCPR_dM_C2_PwrOnTcR_RmpRt;
    }
    else
    {
        /* Switch: '<S302>/Switch1' incorporates:
         *  Constant: '<S253>/Calib'
         */
        rtb_Switch1_an = KeTCPR_dM_C2_PwrOffTcR_RmpRt;
    }

    (void)Rte_Read_VeESPR_b_TCMEngSpdReqActive_Value(&rtb_AND_ob);
    if (rtb_AND_ob && (KeTCPR_b_EnblC2SlipRemediation))
    {
        /* Switch: '<S279>/Switch' incorporates:
         *  Lookup_n-D: '<S427>/Vector'
         *  SignalConversion generated from: '<S1>/VeCSLR_n_Clch2_SlipSpeed'
         *  SignalConversion generated from: '<S1>/VeHCCR_M_Clch2_TorqEst'
         */
        rtb_Switch_fc = look2_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeCSLR_n_Clch2_,
             rtb_TmpSignalConversionAtVeHCCR_M_Clch2_, ((const float32 *)
              &(KxTCPR_dM_C2_ClchCapRmpRt[0])), ((const float32 *)
              &(KyTCPR_dM_C2_ClchCapRmpRt[0])), ((const float32 *)
              &(KtTCPR_dM_C2_ClchCapRmpRt[0])), TCPR_ac_ConstP.Vector_maxIndex,
             5U);
    }
    else
    {
        /* Switch: '<S279>/Switch' incorporates:
         *  Constant: '<S426>/Calib'
         */
        rtb_Switch_fc = KeTCPR_dM_C2_SlipRcvTcR_RmpRt;
    }

    /* Logic: '<S420>/AND' incorporates:
     *  Constant: '<S278>/Constant Value1'
     *  Constant: '<S425>/Calib'
     *  Inport: '<Root>/VeESPR_b_TCMEngSpdReqActive'
     *  Logic: '<S420>/OR1'
     *  UnitDelay: '<S420>/Unit Delay'
     */
    rtb_AND_ob = (rtb_GreaterThan_e && (!TCPR_ac_DW.UnitDelay_DSTATE_d3));

    /* Update for UnitDelay: '<S420>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_d3 = rtb_GreaterThan_e;

    /* Logic: '<S419>/OR1' incorporates:
     *  Logic: '<S418>/OR1'
     *  Logic: '<S423>/AND'
     *  Logic: '<S423>/OR1'
     */
    rtb_AND_op = !rtb_GreaterThan_e;

    /* Logic: '<S419>/AND' incorporates:
     *  Logic: '<S419>/OR1'
     *  UnitDelay: '<S419>/Unit Delay'
     */
    rtb_AND_h1 = (rtb_AND_op && (TCPR_ac_DW.UnitDelay_DSTATE_cc));

    /* Update for UnitDelay: '<S419>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_cc = rtb_GreaterThan_e;

    /* Outputs for Atomic SubSystem: '<S423>/EdgeRising' */
    /* Logic: '<S424>/AND' incorporates:
     *  Logic: '<S424>/OR1'
     *  UnitDelay: '<S424>/Unit Delay'
     */
    rtb_GreaterThan_m = (rtb_GreaterThan_e && (!TCPR_ac_DW.UnitDelay_DSTATE_d));

    /* Update for UnitDelay: '<S424>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_d = rtb_GreaterThan_e;

    /* End of Outputs for SubSystem: '<S423>/EdgeRising' */

    /* Switch: '<S423>/Switch1' incorporates:
     *  Constant: '<S232>/Calib'
     *  Constant: '<S274>/Calib'
     *  Constant: '<S423>/Constant Value1'
     *  Logic: '<S423>/OR'
     *  MinMax: '<S423>/Minimum'
     *  Sum: '<S423>/Summation'
     *  UnitDelay: '<S423>/Unit Delay'
     */
    if ((rtb_AND_op || rtb_GreaterThan_m) || rtb_AND_h1)
    {
        TCPR_ac_DW.UnitDelay_DSTATE_i = 0.0F;
    }
    else
    {
        TCPR_ac_DW.UnitDelay_DSTATE_i = fminf(KeTCPR_t_DlydRisingEdgeTmr,
            HeTCPR_t_MedTED_dT + TCPR_ac_DW.UnitDelay_DSTATE_i);
    }

    /* End of Switch: '<S423>/Switch1' */

    /* Logic: '<S418>/AND' incorporates:
     *  UnitDelay: '<S418>/Unit Delay'
     */
    rtb_GreaterThan_m = (rtb_AND_op && (TCPR_ac_DW.UnitDelay_DSTATE_iq));

    /* Update for UnitDelay: '<S418>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_iq = rtb_GreaterThan_e;

    /* UnitDelay: '<S693>/Unit Delay' incorporates:
     *  UnitDelay: '<S422>/Unit Delay'
     */
    rtb_AND_h1 = TCPR_ac_DW.UnitDelay_DSTATE_bm;
    rtb_AND_j = (((uint32)rtb_TmpSignalConversionAtVeTRNR_e_C2Stat) !=
                 CeHCCR_e_ClLocked);

    /* Logic: '<S422>/OR1' incorporates:
     *  Constant: '<S274>/Calib'
     *  Constant: '<S421>/Constant'
     *  Logic: '<S422>/NOT'
     *  Logic: '<S422>/OR'
     *  Logic: '<S423>/AND'
     *  RelationalOperator: '<S423>/Greater  Than'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_C2Stat'
     *  UnitDelay: '<S423>/Unit Delay'
     */
    VeTCPC_b_C2_SlRecLatch = ((rtb_AND_ob && rtb_AND_j) || ((((rtb_AND_op ||
        (TCPR_ac_DW.UnitDelay_DSTATE_i < KeTCPR_t_DlydRisingEdgeTmr)) &&
        (rtb_AND_op || rtb_AND_j)) && (!rtb_GreaterThan_m)) && rtb_AND_h1));

    /* Update for UnitDelay: '<S422>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_bm = VeTCPC_b_C2_SlRecLatch;

    /* Logic: '<S404>/Logical4' incorporates:
     *  Constant: '<S250>/Calib'
     */
    VeTCPC_b_C2_SlRecEnbl = ((VeTCPC_b_C2_SlRecLatch) ||
        (KeTCPR_b_EnblSlRec_woC2Cntrl));
    if (rtb_GreaterThan_e)
    {
        /* Outputs for IfAction SubSystem: '<S311>/Slip_Remed' incorporates:
         *  ActionPort: '<S402>/Action Port'
         */
        /* Abs: '<S402>/Abs2' */
        rtb_Abs2_ef = fabsf(rtb_TmpSignalConversionAtVeCSLR_n_Clch2_);

        /* RelationalOperator: '<S402>/Comparison2' incorporates:
         *  Constant: '<S252>/Calib'
         */
        rtb_AND_ob = (rtb_Switch_fc < KeTCPR_dM_C2_ClchCapRmpRtThresh);

        /* UnitDelay: '<S409>/Unit Delay' incorporates:
         *  Constant: '<S259>/Calib'
         *  RelationalOperator: '<S402>/Comparison3'
         */
        rtb_AND_op = (rtb_Abs2_ef > KeTCPR_n_C2_StblStSlipDtctThreshHT);

        /* Logic: '<S402>/Logical3' incorporates:
         *  Constant: '<S258>/Calib'
         *  Logic: '<S402>/Logical'
         *  Logic: '<S402>/Logical1'
         *  Logic: '<S402>/Logical2'
         *  RelationalOperator: '<S402>/Comparison'
         */
        rtb_AND_op = ((((rtb_AND_ob && (rtb_Abs2_ef >
                          KeTCPR_n_C2_StblStSlipDtctThresh)) && (!rtb_AND_op)) ||
                       rtb_AND_op) && (VeTCPC_b_C2_SlRecEnbl));

        /* Outputs for Atomic SubSystem: '<S408>/EdgeBi1' */
        /* RelationalOperator: '<S409>/Not Equal' incorporates:
         *  UnitDelay: '<S409>/Unit Delay'
         */
        rtb_GreaterThan_m = (rtb_AND_op != TCPR_ac_DW.UnitDelay_DSTATE_gw);

        /* Update for UnitDelay: '<S409>/Unit Delay' */
        TCPR_ac_DW.UnitDelay_DSTATE_gw = rtb_AND_op;

        /* End of Outputs for SubSystem: '<S408>/EdgeBi1' */

        /* If: '<S408>/If' incorporates:
         *  Inport: '<S410>/u'
         *  Logic: '<S408>/Logical1'
         *  RelationalOperator: '<S408>/Comparison4'
         *  UnitDelay: '<S408>/Unit Delay'
         */
        if ((TCPR_ac_DW.UnitDelay_DSTATE_f2 == rtb_AND_op) || rtb_AND_a3)
        {
            /* Outputs for IfAction SubSystem: '<S408>/Reset_PassThr' incorporates:
             *  ActionPort: '<S410>/Action Port'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_f2 = rtb_AND_op;

            /* End of Outputs for SubSystem: '<S408>/Reset_PassThr' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S408>/SlipDetected' incorporates:
             *  ActionPort: '<S411>/Action Port'
             */
            /* RelationalOperator: '<S411>/Comparison1' incorporates:
             *  Constant: '<S259>/Calib'
             */
            rtb_AND_j = (rtb_Abs2_ef > KeTCPR_n_C2_StblStSlipDtctThreshHT);

            /* Outputs for Atomic SubSystem: '<S411>/EdgeRising1' */
            /* Logic: '<S412>/AND' incorporates:
             *  Logic: '<S412>/OR1'
             *  UnitDelay: '<S412>/Unit Delay'
             */
            rtb_AND_js = (rtb_AND_j && (!TCPR_ac_DW.UnitDelay_DSTATE_d0));

            /* Update for UnitDelay: '<S412>/Unit Delay' */
            TCPR_ac_DW.UnitDelay_DSTATE_d0 = rtb_AND_j;

            /* End of Outputs for SubSystem: '<S411>/EdgeRising1' */

            /* If: '<S411>/If' incorporates:
             *  Constant: '<S232>/Calib'
             *  Inport: '<S415>/dT'
             *  Logic: '<S411>/Logical1'
             *  UnitDelay: '<S411>/Unit Delay'
             */
            if (rtb_GreaterThan_m || rtb_AND_js)
            {
                /* Outputs for IfAction SubSystem: '<S411>/Initialize_Timer' incorporates:
                 *  ActionPort: '<S415>/Action Port'
                 */
                /* Switch: '<S417>/Switch1' */
                if (rtb_AND_op)
                {
                    /* Switch: '<S414>/Switch1' */
                    if (rtb_AND_j)
                    {
                        /* Switch: '<S417>/Switch1' incorporates:
                         *  Constant: '<S267>/Calib'
                         */
                        TCPR_ac_B.Switch1_f = KeTCPR_t_C2_StblStSlipDtctTimeHT;
                    }
                    else
                    {
                        /* Switch: '<S417>/Switch1' incorporates:
                         *  Constant: '<S266>/Calib'
                         */
                        TCPR_ac_B.Switch1_f = KeTCPR_t_C2_StblStSlipDtctTime;
                    }

                    /* End of Switch: '<S414>/Switch1' */
                }
                else
                {
                    /* Switch: '<S417>/Switch1' incorporates:
                     *  Constant: '<S268>/Calib'
                     */
                    TCPR_ac_B.Switch1_f = KeTCPR_t_C2_StblStSlipRcvryTime;
                }

                /* End of Switch: '<S417>/Switch1' */
                TCPR_ac_DW.UnitDelay_DSTATE_mb = HeTCPR_t_MedTED_dT;

                /* End of Outputs for SubSystem: '<S411>/Initialize_Timer' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S411>/Timer_Increment' incorporates:
                 *  ActionPort: '<S416>/Action Port'
                 */
                /* Sum: '<S416>/Sum' incorporates:
                 *  Constant: '<S232>/Calib'
                 *  UnitDelay: '<S411>/Unit Delay'
                 */
                TCPR_ac_DW.UnitDelay_DSTATE_mb += HeTCPR_t_MedTED_dT;

                /* End of Outputs for SubSystem: '<S411>/Timer_Increment' */
            }

            /* End of If: '<S411>/If' */

            /* Switch: '<S413>/Switch1' incorporates:
             *  RelationalOperator: '<S411>/Comparison2'
             *  UnitDelay: '<S411>/Unit Delay'
             */
            if (TCPR_ac_B.Switch1_f < TCPR_ac_DW.UnitDelay_DSTATE_mb)
            {
                TCPR_ac_DW.UnitDelay_DSTATE_f2 = rtb_AND_op;
            }

            /* End of Switch: '<S413>/Switch1' */
            /* End of Outputs for SubSystem: '<S408>/SlipDetected' */
        }

        /* End of If: '<S408>/If' */

        /* Switch: '<S406>/Switch1' incorporates:
         *  UnitDelay: '<S408>/Unit Delay'
         */
        if (TCPR_ac_DW.UnitDelay_DSTATE_f2)
        {
            /* Switch: '<S402>/Switch' incorporates:
             *  Constant: '<S259>/Calib'
             *  RelationalOperator: '<S402>/Comparison1'
             */
            if (KeTCPR_n_C2_StblStSlipDtctThreshHT > rtb_Abs2_ef)
            {
                /* Switch: '<S402>/Switch1' */
                if (rtb_AND_ob)
                {
                    /* Merge: '<S311>/Merge2' incorporates:
                     *  Switch: '<S402>/Switch'
                     */
                    rtb_Switch1_an = rtb_Switch_fc;
                }

                /* End of Switch: '<S402>/Switch1' */
            }
            else
            {
                /* Merge: '<S311>/Merge2' incorporates:
                 *  Constant: '<S255>/Calib'
                 *  Switch: '<S402>/Switch'
                 */
                rtb_Switch1_an = KeTCPR_dM_C2_SlipRcvTcR_RmpRtFast;
            }

            /* End of Switch: '<S402>/Switch' */
        }

        /* End of Switch: '<S406>/Switch1' */

        /* Merge: '<S311>/Merge1' incorporates:
         *  Gain: '<S407>/Gain'
         *  UnitDelay: '<S408>/Unit Delay'
         */
        rtb_AND_ob = TCPR_ac_DW.UnitDelay_DSTATE_f2;

        /* End of Outputs for SubSystem: '<S311>/Slip_Remed' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S311>/Slip_Remed_Unava' incorporates:
         *  ActionPort: '<S403>/Action Port'
         */
        /* Merge: '<S311>/Merge1' incorporates:
         *  Constant: '<S403>/FALSE Constant'
         *  SignalConversion generated from: '<S403>/SlipDetected'
         */
        rtb_AND_ob = false;

        /* End of Outputs for SubSystem: '<S311>/Slip_Remed_Unava' */
    }

    /* Logic: '<S310>/Logical' incorporates:
     *  UnitDelay: '<S310>/Unit Delay'
     */
    rtb_AND_op = (rtb_AND_ob && (!TCPR_ac_DW.UnitDelay_DSTATE_ls));
    if (TCPR_ac_DW.UnitDelay2_DSTATE_n != rtb_Switch1_an)
    {
        /* Outputs for IfAction SubSystem: '<S306>/New_RampRate_Calc' incorporates:
         *  ActionPort: '<S400>/Action Port'
         */
        /* Product: '<S400>/Product' incorporates:
         *  Constant: '<S232>/Calib'
         */
        TCPR_ac_B.Product_m = rtb_Switch1_an * HeTCPR_t_MedTED_dT;

        /* Product: '<S400>/Product1' incorporates:
         *  Constant: '<S272>/Calib'
         */
        TCPR_ac_B.Product1_o = rtb_Switch1_an * KeTCPR_t_CntrlTcR_LeadTmForOfst;

        /* End of Outputs for SubSystem: '<S306>/New_RampRate_Calc' */
    }

    if (KeTCPR_b_EnblCorrectedC2Trq)
    {
        /* Switch: '<S277>/Switch' incorporates:
         *  Constant: '<S256>/Calib'
         *  Constant: '<S257>/Calib'
         *  Constant: '<S261>/Calib'
         *  Constant: '<S262>/Calib'
         *  Constant: '<S277>/Constant Value'
         *  Sum: '<S277>/Sum1'
         */
        rtb_Switch_bw = ((fmaxf(KeTCPR_p_C2Press_EngOn -
                                KeTCPR_p_C2_RetSpringPress, 0.0F) *
                          KeTCPR_k_C2_StaticFrictionCoef) *
                         KeTCPR_h_C2_PresToTorqLumpedCal) -
            rtb_TmpSignalConversionAtVeCSDR_M_Corr_p;
    }
    else
    {
        /* Switch: '<S277>/Switch' incorporates:
         *  Constant: '<S256>/Calib'
         *  Constant: '<S257>/Calib'
         *  Constant: '<S261>/Calib'
         *  Constant: '<S262>/Calib'
         *  Constant: '<S277>/Constant Value'
         */
        rtb_Switch_bw = (fmaxf(KeTCPR_p_C2Press_EngOn -
                               KeTCPR_p_C2_RetSpringPress, 0.0F) *
                         KeTCPR_k_C2_StaticFrictionCoef) *
            KeTCPR_h_C2_PresToTorqLumpedCal;
    }

    if (KeTCPR_b_C2_AdjEstTorqAllwd)
    {
        /* Switch: '<S275>/Switch1' */
        VeTCPC_M_C2LeadMaxCap = rtb_TmpSignalConversionAtVeHCCR_M_Clch2_;
    }
    else
    {
        /* Switch: '<S275>/Switch1' */
        VeTCPC_M_C2LeadMaxCap = rtb_Switch_bw;
    }

    if (rtb_GreaterThan_e)
    {
        (void)Rte_Read_VeHSER_e_Clch2_FillCmnd_Value(&tmpRead_1);

        /* Outputs for IfAction SubSystem: '<S300>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S312>/Action Port'
         */
        /* RelationalOperator: '<S312>/Relational Operator' incorporates:
         *  Constant: '<S312>/Constant Value2'
         *  Inport: '<Root>/VeHSER_e_Clch2_FillCmnd'
         */
        rtb_GreaterThan_e = (rtb_TmpSignalConversionAtVeHSER_M_Clch_k < 0.0F);

        /* Outputs for Atomic SubSystem: '<S312>/EdgeRising' */
        /* Logic: '<S315>/AND' incorporates:
         *  Logic: '<S315>/OR1'
         *  UnitDelay: '<S315>/Unit Delay'
         */
        rtb_GreaterThan_m = (rtb_GreaterThan_e &&
                             (!TCPR_ac_DW.UnitDelay_DSTATE_jw));

        /* Update for UnitDelay: '<S315>/Unit Delay' */
        TCPR_ac_DW.UnitDelay_DSTATE_jw = rtb_GreaterThan_e;

        /* End of Outputs for SubSystem: '<S312>/EdgeRising' */

        /* Switch: '<S337>/Switch1' incorporates:
         *  Constant: '<S237>/Calib'
         *  Constant: '<S238>/Calib'
         *  Constant: '<S322>/Constant Value1'
         *  MinMax: '<S322>/MinMax3'
         *  Sum: '<S322>/Sum1'
         *  UnitDelay: '<S322>/Unit Delay'
         */
        if (rtb_AND_a3)
        {
            TCPR_ac_DW.UnitDelay_DSTATE_ff = 0.0F;
        }
        else
        {
            TCPR_ac_DW.UnitDelay_DSTATE_ff = fminf(KeTCPR_M_C2_ClampTorqRampStep
                + TCPR_ac_DW.UnitDelay_DSTATE_ff, KeTCPR_M_C2_ClmpTorq);
        }

        /* End of Switch: '<S337>/Switch1' */

        /* Switch: '<S321>/Switch1' incorporates:
         *  Abs: '<S321>/Abs3'
         *  Abs: '<S321>/Abs4'
         *  Constant: '<S243>/Calib'
         */
        if (KeTCPR_b_C2_UseTcMax4HTDR)
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ = fabsf
                (VeTCPC_M_C2LeadMaxCap);
        }
        else
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ = fabsf
                (rtb_TmpSignalConversionAtVeHSER_M_Clch2_);
        }

        /* End of Switch: '<S321>/Switch1' */

        /* Sum: '<S322>/Sum2' incorporates:
         *  UnitDelay: '<S322>/Unit Delay'
         */
        rtb_Switch_fc = rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ -
            TCPR_ac_DW.UnitDelay_DSTATE_ff;

        /* Outputs for Atomic SubSystem: '<S322>/Limiter' */
        /* Switch: '<S338>/Switch1' incorporates:
         *  RelationalOperator: '<S338>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_f < rtb_Switch_fc)
        {
            /* Switch: '<S312>/Switch1' */
            rtb_Switch_fc = rtb_TmpSignalConversionAtVeHSER_M_Clch_f;
        }

        /* End of Switch: '<S338>/Switch1' */

        /* Switch: '<S338>/Switch' incorporates:
         *  Constant: '<S322>/Constant Value3'
         *  RelationalOperator: '<S338>/Relational Operator1'
         */
        if (rtb_Switch_fc <= 0.0F)
        {
            /* Switch: '<S338>/Switch' */
            rtb_Switch_fc = 0.0F;
        }

        /* End of Switch: '<S338>/Switch' */
        /* End of Outputs for SubSystem: '<S322>/Limiter' */

        /* Outputs for Enabled SubSystem: '<S319>/Start_TcR_Ramp' incorporates:
         *  EnablePort: '<S326>/Enable'
         */
        if (rtb_AND_a3)
        {
            /* If: '<S326>/If1' incorporates:
             *  Abs: '<S312>/Abs'
             *  Constant: '<S248>/Calib'
             */
            if (KeTCPR_b_CntrlTcR_OvrdTo0_OnRst)
            {
                /* Outputs for IfAction SubSystem: '<S326>/TcRMaxOvrdToZero' incorporates:
                 *  ActionPort: '<S329>/Action Port'
                 */
                TCPR_ac_TcRMaxOvrdToZero(&TCPR_ac_B.Merge_p);

                /* End of Outputs for SubSystem: '<S326>/TcRMaxOvrdToZero' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S326>/TcRMaxNormal' incorporates:
                 *  ActionPort: '<S328>/Action Port'
                 */
                TCPR_ac_TcRMaxNormal(fabsf
                                     (rtb_TmpSignalConversionAtVeHSER_M_Clch2_),
                                     &TCPR_ac_B.Merge_p);

                /* End of Outputs for SubSystem: '<S326>/TcRMaxNormal' */
            }

            /* End of If: '<S326>/If1' */

            /* Outputs for Atomic SubSystem: '<S319>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S327>/Switch1' incorporates:
             *  Constant: '<S273>/Calib'
             *  UnitDelay: '<S327>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_mg = KeTCPR_t_CntrlTcR_RmpHldffOnR;

            /* End of Outputs for SubSystem: '<S319>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S325>/Switch1' */
            rtb_Abs2_ef = TCPR_ac_B.Merge_p;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S319>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S327>/Switch1' incorporates:
             *  Constant: '<S232>/Calib'
             *  Constant: '<S327>/Constant Value4'
             *  MinMax: '<S327>/Maximum'
             *  Sum: '<S327>/Subtraction'
             *  UnitDelay: '<S327>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_mg = fmaxf
                (TCPR_ac_DW.UnitDelay_DSTATE_mg - HeTCPR_t_MedTED_dT, 0.0F);

            /* End of Outputs for SubSystem: '<S319>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S323>/Switch1' incorporates:
             *  Abs: '<S319>/Abs'
             *  Switch: '<S325>/Switch1'
             */
            if (rtb_AND_op)
            {
                TCPR_ac_DW.UnitDelay1_DSTATE_o = fabsf
                    (rtb_TmpSignalConversionAtVeHTDR_M_Clch2_);
            }

            /* Outputs for Atomic SubSystem: '<S319>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S324>/Switch1' incorporates:
             *  Constant: '<S319>/Constant Value2'
             *  Constant: '<S319>/Constant Value3'
             *  Constant: '<S327>/Constant Value2'
             *  Logic: '<S319>/Logical'
             *  RelationalOperator: '<S319>/Comparison1'
             *  RelationalOperator: '<S327>/Greater  Than1'
             *  Switch: '<S325>/Switch1'
             *  UnitDelay: '<S327>/Unit Delay'
             */
            if ((TCPR_ac_DW.UnitDelay_DSTATE_mg > 0.0F) && (TCPR_ac_B.Product_m >=
                 0.0F))
            {
                rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ = 0.0F;
            }
            else
            {
                rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ = TCPR_ac_B.Product_m;
            }

            /* End of Switch: '<S324>/Switch1' */
            /* End of Outputs for SubSystem: '<S319>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S325>/Switch1' incorporates:
             *  Sum: '<S319>/Sum1'
             */
            rtb_Abs2_ef = TCPR_ac_DW.UnitDelay1_DSTATE_o +
                rtb_TmpSignalConversionAtVeHTDR_M_Clch1_;
        }

        /* End of Outputs for SubSystem: '<S319>/Start_TcR_Ramp' */

        /* Outputs for Atomic SubSystem: '<S312>/Limiter' */
        /* Switch: '<S317>/Switch1' incorporates:
         *  RelationalOperator: '<S317>/Relational Operator'
         */
        if (rtb_Switch_fc >= rtb_Abs2_ef)
        {
            /* Switch: '<S312>/Switch1' */
            rtb_Switch_fc = rtb_Abs2_ef;
        }

        /* End of Switch: '<S317>/Switch1' */

        /* Switch: '<S317>/Switch' incorporates:
         *  Constant: '<S312>/Constant Value1'
         *  RelationalOperator: '<S317>/Relational Operator1'
         */
        if (rtb_Switch_fc > 0.0F)
        {
            /* Switch: '<S323>/Switch1' incorporates:
             *  UnitDelay: '<S312>/Unit Delay1'
             */
            TCPR_ac_DW.UnitDelay1_DSTATE_o = rtb_Switch_fc;
        }
        else
        {
            /* Switch: '<S323>/Switch1' incorporates:
             *  UnitDelay: '<S312>/Unit Delay1'
             */
            TCPR_ac_DW.UnitDelay1_DSTATE_o = 0.0F;
        }

        /* End of Switch: '<S317>/Switch' */
        /* End of Outputs for SubSystem: '<S312>/Limiter' */

        /* Outputs for Enabled SubSystem: '<S320>/Start_TcR_Ramp' incorporates:
         *  EnablePort: '<S333>/Enable'
         */
        if (rtb_GreaterThan_m)
        {
            /* If: '<S333>/If1' incorporates:
             *  Constant: '<S245>/Calib'
             */
            if (KeTCPR_b_CntrlTcRMin_OvrdTo0_OnRst)
            {
                /* Outputs for IfAction SubSystem: '<S333>/TcRMinOvrdToZero' incorporates:
                 *  ActionPort: '<S336>/Action Port'
                 */
                TCPR_ac_TcRMaxOvrdToZero(&TCPR_ac_B.Merge_k);

                /* End of Outputs for SubSystem: '<S333>/TcRMinOvrdToZero' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S333>/TcRMinNormal' incorporates:
                 *  ActionPort: '<S335>/Action Port'
                 */
                TCPR_ac_TcRMaxNormal(rtb_TmpSignalConversionAtVeHSER_M_Clch2_,
                                     &TCPR_ac_B.Merge_k);

                /* End of Outputs for SubSystem: '<S333>/TcRMinNormal' */
            }

            /* End of If: '<S333>/If1' */

            /* Outputs for Atomic SubSystem: '<S320>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S334>/Switch1' incorporates:
             *  Constant: '<S270>/Calib'
             *  UnitDelay: '<S334>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_he = KeTCPR_t_CntrlTcRMin_RmpHldffOnR;

            /* End of Outputs for SubSystem: '<S320>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S332>/Switch1' */
            rtb_Switch_fc = TCPR_ac_B.Merge_k;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S320>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S334>/Switch1' incorporates:
             *  Constant: '<S232>/Calib'
             *  Constant: '<S334>/Constant Value4'
             *  MinMax: '<S334>/Maximum'
             *  Sum: '<S334>/Subtraction'
             *  UnitDelay: '<S334>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_he = fmaxf
                (TCPR_ac_DW.UnitDelay_DSTATE_he - HeTCPR_t_MedTED_dT, 0.0F);

            /* End of Outputs for SubSystem: '<S320>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S331>/Switch1' incorporates:
             *  Gain: '<S320>/Gain'
             *  Switch: '<S332>/Switch1'
             */
            rtb_Switch_fc = -TCPR_ac_B.Product_m;

            /* Outputs for Atomic SubSystem: '<S320>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S331>/Switch1' incorporates:
             *  Constant: '<S320>/Constant Value3'
             *  Constant: '<S334>/Constant Value2'
             *  Gain: '<S320>/Gain'
             *  Logic: '<S320>/Logical'
             *  RelationalOperator: '<S320>/Comparison1'
             *  RelationalOperator: '<S334>/Greater  Than1'
             *  Switch: '<S332>/Switch1'
             *  UnitDelay: '<S334>/Unit Delay'
             */
            if ((TCPR_ac_DW.UnitDelay_DSTATE_he > 0.0F) &&
                    ((-TCPR_ac_B.Product_m) <= 0.0F))
            {
                /* Switch: '<S331>/Switch1' incorporates:
                 *  Constant: '<S320>/Constant Value2'
                 */
                rtb_Switch_fc = 0.0F;
            }

            /* End of Switch: '<S331>/Switch1' */
            /* End of Outputs for SubSystem: '<S320>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S330>/Switch1' incorporates:
             *  Abs: '<S320>/Abs'
             *  Switch: '<S332>/Switch1'
             */
            if (rtb_AND_op)
            {
                TCPR_ac_DW.UnitDelay2_DSTATE_h = fabsf
                    (rtb_TmpSignalConversionAtVeHTDR_M_Clch2_);
            }

            /* Switch: '<S332>/Switch1' incorporates:
             *  Sum: '<S320>/Sum1'
             */
            rtb_Switch_fc += TCPR_ac_DW.UnitDelay2_DSTATE_h;
        }

        /* End of Outputs for SubSystem: '<S320>/Start_TcR_Ramp' */

        /* Outputs for Atomic SubSystem: '<S312>/Limiter1' */
        /* Switch: '<S318>/Switch1' incorporates:
         *  Constant: '<S312>/Constant Value3'
         *  RelationalOperator: '<S318>/Relational Operator'
         */
        if (0.0F < rtb_Switch_fc)
        {
            /* Switch: '<S312>/Switch1' */
            rtb_Switch_fc = 0.0F;
        }

        /* End of Switch: '<S318>/Switch1' */

        /* Switch: '<S318>/Switch' incorporates:
         *  RelationalOperator: '<S318>/Relational Operator1'
         */
        if (rtb_Switch_fc > rtb_TmpSignalConversionAtVeHSER_M_Clch_k)
        {
            /* Switch: '<S330>/Switch1' incorporates:
             *  UnitDelay: '<S312>/Unit Delay2'
             */
            TCPR_ac_DW.UnitDelay2_DSTATE_h = rtb_Switch_fc;
        }
        else
        {
            /* Switch: '<S330>/Switch1' incorporates:
             *  UnitDelay: '<S312>/Unit Delay2'
             */
            TCPR_ac_DW.UnitDelay2_DSTATE_h =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_k;
        }

        /* End of Switch: '<S318>/Switch' */
        /* End of Outputs for SubSystem: '<S312>/Limiter1' */

        /* VariantMerge generated from: '<S3>/VariantSource44' incorporates:
         *  Constant: '<S312>/Constant Value'
         *  Constant: '<S316>/Constant'
         *  Inport: '<Root>/VeHSER_e_Clch2_FillCmnd'
         *  Logic: '<S312>/Logical1'
         *  RelationalOperator: '<S312>/Comparison1'
         *  RelationalOperator: '<S312>/Comparison4'
         */
        rtb_AND_a3 = ((rtb_TmpSignalConversionAtVeHSER_M_Clch_f <= 0.1F) ||
                      (((uint32)tmpRead_1) == CeHSER_e_ClchFillToTchPt));

        /* Merge: '<S300>/Merge' incorporates:
         *  Constant: '<S235>/Calib'
         *  Product: '<S312>/Product'
         *  UnitDelay: '<S312>/Unit Delay1'
         */
        rtb_Switch_fc = KeTCPR_K_C2_Max_Scalar * TCPR_ac_DW.UnitDelay1_DSTATE_o;

        /* Switch: '<S312>/Switch1' incorporates:
         *  Constant: '<S231>/Calib'
         *  Logic: '<S312>/NOT'
         *  UnitDelay: '<S312>/Unit Delay1'
         *  UnitDelay: '<S312>/Unit Delay2'
         */
        if (!HeTCPR_b_Enb_C2_Asymetric_ClchLim)
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay1_DSTATE_o;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay2_DSTATE_h;
        }

        /* End of Switch: '<S312>/Switch1' */

        /* Merge: '<S300>/Merge1' incorporates:
         *  Constant: '<S236>/Calib'
         *  Product: '<S312>/Product1'
         */
        rtb_Abs2_ef = rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ *
            KeTCPR_K_C2_Min_Scalar;

        /* End of Outputs for SubSystem: '<S300>/Locked_TcR_Cntrl' */
    }
    else if (KeTCPR_b_CntrlTcR_OvrdTo0_OnRlsd)
    {
        /* Outputs for IfAction SubSystem: '<S300>/Rlsd_TcR_Ovrdn' incorporates:
         *  ActionPort: '<S314>/Action Port'
         */
        /* Merge: '<S300>/Merge' incorporates:
         *  Constant: '<S314>/Constant Value1'
         *  SignalConversion generated from: '<S314>/TcR_Max'
         */
        rtb_Switch_fc = 0.0F;

        /* Merge: '<S300>/Merge1' incorporates:
         *  Constant: '<S314>/Constant Value2'
         *  SignalConversion generated from: '<S314>/TcR_Min'
         */
        rtb_Abs2_ef = 0.0F;

        /* VariantMerge generated from: '<S3>/VariantSource44' incorporates:
         *  Constant: '<S314>/TRUE Constant'
         *  SignalConversion generated from: '<S314>/ClchOffloadCnfrmd'
         */
        rtb_AND_a3 = true;

        /* End of Outputs for SubSystem: '<S300>/Rlsd_TcR_Ovrdn' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S300>/Rlsd_TcR_CntrlDflt' incorporates:
         *  ActionPort: '<S313>/Action Port'
         */
        /* Merge: '<S300>/Merge' incorporates:
         *  Gain: '<S339>/Gain'
         */
        rtb_Switch_fc = rtb_TmpSignalConversionAtVeHSER_M_Clch2_;

        /* Merge: '<S300>/Merge1' incorporates:
         *  Gain: '<S340>/Gain'
         */
        rtb_Abs2_ef = rtb_TmpSignalConversionAtVeHSER_M_Clch2_;

        /* VariantMerge generated from: '<S3>/VariantSource44' incorporates:
         *  Constant: '<S313>/TRUE Constant'
         *  SignalConversion generated from: '<S313>/ClchOffloadCnfrmd'
         */
        rtb_AND_a3 = true;

        /* End of Outputs for SubSystem: '<S300>/Rlsd_TcR_CntrlDflt' */
    }

#elif !Rte_SysCon_Variant_TCPR_7 && Rte_SysCon_Variant_TCPR_9

    /* VariantMerge generated from: '<S3>/VariantSource44' incorporates:
     *  Constant: '<S3>/TRUE Constant2'
     *  SignalConversion generated from: '<S3>/VariantSource44'
     */
    rtb_AND_a3 = true;

#endif

    /* End of If: '<S306>/If2' */
    /* End of Outputs for SubSystem: '<S278>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S404>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S404>/EdgeFalling2' */
    /* End of Outputs for SubSystem: '<S404>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S404>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S404>/Signal Latch On With Reset1' */
#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    /* Outputs for Atomic SubSystem: '<S13>/Bit Selector3' */
    /* RelationalOperator: '<S18>/Greater  Than' incorporates:
     *  Constant: '<S18>/Constant Value'
     *  S-Function (sfix_bitop): '<S18>/Bitwise Logical Operator'
     */
    rtb_GreaterThan_cu = ((((sint32)rtb_Selector) & 4) > 0);

    /* End of Outputs for SubSystem: '<S13>/Bit Selector3' */
#endif

    /* Outputs for Atomic SubSystem: '<S571>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S571>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S571>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S571>/EdgeFalling2' */
    /* Outputs for Atomic SubSystem: '<S571>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S465>/EdgeRising' */
    /* If: '<S473>/If2' incorporates:
     *  Constant: '<S439>/Calib'
     *  Constant: '<S465>/Constant Value1'
     *  Constant: '<S588>/Constant'
     *  If: '<S467>/If'
     *  If: '<S478>/If1'
     *  Inport: '<Root>/VeCSLR_n_Clch3_SlipSpeed'
     *  Inport: '<Root>/VeHSER_e_Clch3_FillCmnd'
     *  Inport: '<Root>/VeTRNR_e_C3Stat'
     *  Logic: '<S477>/Logical'
     *  Logic: '<S477>/Logical2'
     *  Logic: '<S571>/Logical'
     *  Logic: '<S571>/Logical1'
     *  Logic: '<S571>/Logical2'
     *  Logic: '<S571>/Logical3'
     *  Logic: '<S571>/Logical4'
     *  Lookup_n-D: '<S463>/Vector'
     *  MinMax: '<S464>/Maximum'
     *  Product: '<S464>/Multiplication'
     *  RelationalOperator: '<S465>/Comparison1'
     *  RelationalOperator: '<S571>/Comparison1'
     *  SignalConversion generated from: '<S3>/VariantSource45'
     *  Sum: '<S464>/Summation'
     *  Switch: '<S464>/Switch'
     *  Switch: '<S469>/Switch1'
     *  UnitDelay: '<S473>/Unit Delay2'
     */
#if Rte_SysCon_Variant_TCPR_5

    /* Logic: '<S468>/AND' incorporates:
     *  Logic: '<S468>/OR1'
     *  UnitDelay: '<S468>/Unit Delay'
     */
    rtb_AND_ly = (rtb_GreaterThan_cu && (!TCPR_ac_DW.UnitDelay_DSTATE_p2));

    /* Update for UnitDelay: '<S468>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_p2 = rtb_GreaterThan_cu;
    if (rtb_TmpSignalConversionAtVeHTDR_M_OutTor >= 0.0F)
    {
        /* Switch: '<S469>/Switch1' incorporates:
         *  Constant: '<S446>/Calib'
         */
        rtb_Switch1_lo = KeTCPR_dM_C3_PwrOnTcR_RmpRt;
    }
    else
    {
        /* Switch: '<S469>/Switch1' incorporates:
         *  Constant: '<S445>/Calib'
         */
        rtb_Switch1_lo = KeTCPR_dM_C3_PwrOffTcR_RmpRt;
    }

    /* Logic: '<S587>/AND' incorporates:
     *  Constant: '<S465>/Constant Value1'
     *  Logic: '<S587>/OR1'
     *  UnitDelay: '<S587>/Unit Delay'
     */
    rtb_AND_fuh = (rtb_GreaterThan_cu && (!TCPR_ac_DW.UnitDelay_DSTATE_nq));

    /* Update for UnitDelay: '<S587>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_nq = rtb_GreaterThan_cu;
    (void)Rte_Read_VeTRNR_e_C3Stat_Value(&tmpRead_4);

    /* Logic: '<S586>/OR1' incorporates:
     *  Inport: '<Root>/VeTRNR_e_C3Stat'
     *  Logic: '<S585>/OR1'
     *  Logic: '<S590>/AND'
     *  Logic: '<S590>/OR1'
     */
    rtb_GreaterThan_e = !rtb_GreaterThan_cu;

    /* Logic: '<S586>/AND' incorporates:
     *  Logic: '<S586>/OR1'
     *  UnitDelay: '<S586>/Unit Delay'
     */
    rtb_AND_h1 = (rtb_GreaterThan_e && (TCPR_ac_DW.UnitDelay_DSTATE_j3));

    /* Update for UnitDelay: '<S586>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_j3 = rtb_GreaterThan_cu;

    /* Outputs for Atomic SubSystem: '<S590>/EdgeRising' */
    /* Logic: '<S591>/AND' incorporates:
     *  Logic: '<S591>/OR1'
     *  UnitDelay: '<S591>/Unit Delay'
     */
    rtb_AND_op = (rtb_GreaterThan_cu && (!TCPR_ac_DW.UnitDelay_DSTATE_nb));

    /* Update for UnitDelay: '<S591>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_nb = rtb_GreaterThan_cu;

    /* End of Outputs for SubSystem: '<S590>/EdgeRising' */

    /* Switch: '<S590>/Switch1' incorporates:
     *  Constant: '<S429>/Calib'
     *  Constant: '<S462>/Calib'
     *  Constant: '<S590>/Constant Value1'
     *  Logic: '<S590>/OR'
     *  MinMax: '<S590>/Minimum'
     *  Sum: '<S590>/Summation'
     *  UnitDelay: '<S590>/Unit Delay'
     */
    if ((rtb_GreaterThan_e || rtb_AND_op) || rtb_AND_h1)
    {
        TCPR_ac_DW.UnitDelay_DSTATE_g = 0.0F;
    }
    else
    {
        TCPR_ac_DW.UnitDelay_DSTATE_g = fminf(KeTCPR_t_DlydRisingEdgeTmr,
            HeTCPR_t_MedTED_dT + TCPR_ac_DW.UnitDelay_DSTATE_g);
    }

    /* End of Switch: '<S590>/Switch1' */

    /* Logic: '<S585>/AND' incorporates:
     *  UnitDelay: '<S585>/Unit Delay'
     */
    rtb_AND_op = (rtb_GreaterThan_e && (TCPR_ac_DW.UnitDelay_DSTATE_p3));

    /* Update for UnitDelay: '<S585>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_p3 = rtb_GreaterThan_cu;

    /* UnitDelay: '<S693>/Unit Delay' incorporates:
     *  UnitDelay: '<S589>/Unit Delay'
     */
    rtb_AND_h1 = TCPR_ac_DW.UnitDelay_DSTATE_hv;
    rtb_GreaterThan_m = (((uint32)tmpRead_4) != CeHCCR_e_ClLocked);

    /* Logic: '<S589>/OR1' incorporates:
     *  Constant: '<S462>/Calib'
     *  Constant: '<S588>/Constant'
     *  Inport: '<Root>/VeTRNR_e_C3Stat'
     *  Logic: '<S589>/NOT'
     *  Logic: '<S589>/OR'
     *  Logic: '<S590>/AND'
     *  RelationalOperator: '<S590>/Greater  Than'
     *  UnitDelay: '<S590>/Unit Delay'
     */
    VeTCPC_b_C3_SlRecLatch = ((rtb_AND_fuh && rtb_GreaterThan_m) ||
        ((((rtb_GreaterThan_e || (TCPR_ac_DW.UnitDelay_DSTATE_g <
        KeTCPR_t_DlydRisingEdgeTmr)) && (rtb_GreaterThan_e || rtb_GreaterThan_m))
          && (!rtb_AND_op)) && rtb_AND_h1));

    /* Update for UnitDelay: '<S589>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_hv = VeTCPC_b_C3_SlRecLatch;

    /* Logic: '<S571>/Logical4' incorporates:
     *  Constant: '<S442>/Calib'
     */
    VeTCPC_b_C3_SlRecEnbl = ((VeTCPC_b_C3_SlRecLatch) ||
        (KeTCPR_b_EnblSlRec_woC3Cntrl));
    if (rtb_GreaterThan_cu)
    {
        (void)Rte_Read_VeCSLR_n_Clch3_SlipSpeed_Value(&rtb_Abs2_n);

        /* Outputs for IfAction SubSystem: '<S478>/Slip_Remed' incorporates:
         *  ActionPort: '<S569>/Action Port'
         */
        /* Abs: '<S569>/Abs2' incorporates:
         *  Inport: '<Root>/VeCSLR_n_Clch3_SlipSpeed'
         */
        rtb_Abs2_n = fabsf(rtb_Abs2_n);

        /* RelationalOperator: '<S569>/Comparison2' incorporates:
         *  Constant: '<S444>/Calib'
         *  Constant: '<S447>/Calib'
         */
        rtb_AND_fuh = (KeTCPR_dM_C3_SlipRcvTcR_RmpRt <
                       KeTCPR_dM_C3_ClchCapRmpRtThresh);

        /* UnitDelay: '<S576>/Unit Delay' incorporates:
         *  Constant: '<S452>/Calib'
         *  RelationalOperator: '<S569>/Comparison3'
         */
        rtb_GreaterThan_e = (rtb_Abs2_n > KeTCPR_n_C3_StblStSlipDtctThreshHT);

        /* Logic: '<S569>/Logical3' incorporates:
         *  Constant: '<S451>/Calib'
         *  Logic: '<S569>/Logical'
         *  Logic: '<S569>/Logical1'
         *  Logic: '<S569>/Logical2'
         *  RelationalOperator: '<S569>/Comparison'
         */
        rtb_GreaterThan_e = ((((rtb_AND_fuh && (rtb_Abs2_n >
            KeTCPR_n_C3_StblStSlipDtctThresh)) && (!rtb_GreaterThan_e)) ||
                              rtb_GreaterThan_e) && (VeTCPC_b_C3_SlRecEnbl));

        /* Outputs for Atomic SubSystem: '<S575>/EdgeBi1' */
        /* RelationalOperator: '<S576>/Not Equal' incorporates:
         *  UnitDelay: '<S576>/Unit Delay'
         */
        rtb_AND_op = (rtb_GreaterThan_e != TCPR_ac_DW.UnitDelay_DSTATE_en);

        /* Update for UnitDelay: '<S576>/Unit Delay' */
        TCPR_ac_DW.UnitDelay_DSTATE_en = rtb_GreaterThan_e;

        /* End of Outputs for SubSystem: '<S575>/EdgeBi1' */

        /* If: '<S575>/If' incorporates:
         *  Inport: '<S577>/u'
         *  Logic: '<S575>/Logical1'
         *  RelationalOperator: '<S575>/Comparison4'
         *  UnitDelay: '<S575>/Unit Delay'
         */
        if ((TCPR_ac_DW.UnitDelay_DSTATE_pd == rtb_GreaterThan_e) || rtb_AND_ly)
        {
            /* Outputs for IfAction SubSystem: '<S575>/Reset_PassThr' incorporates:
             *  ActionPort: '<S577>/Action Port'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_pd = rtb_GreaterThan_e;

            /* End of Outputs for SubSystem: '<S575>/Reset_PassThr' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S575>/SlipDetected' incorporates:
             *  ActionPort: '<S578>/Action Port'
             */
            /* RelationalOperator: '<S578>/Comparison1' incorporates:
             *  Constant: '<S452>/Calib'
             */
            rtb_GreaterThan_m = (rtb_Abs2_n > KeTCPR_n_C3_StblStSlipDtctThreshHT);

            /* Outputs for Atomic SubSystem: '<S578>/EdgeRising1' */
            /* Logic: '<S579>/AND' incorporates:
             *  Logic: '<S579>/OR1'
             *  UnitDelay: '<S579>/Unit Delay'
             */
            rtb_AND_j = (rtb_GreaterThan_m && (!TCPR_ac_DW.UnitDelay_DSTATE_e3));

            /* Update for UnitDelay: '<S579>/Unit Delay' */
            TCPR_ac_DW.UnitDelay_DSTATE_e3 = rtb_GreaterThan_m;

            /* End of Outputs for SubSystem: '<S578>/EdgeRising1' */

            /* If: '<S578>/If' incorporates:
             *  Constant: '<S429>/Calib'
             *  Inport: '<S582>/dT'
             *  Logic: '<S578>/Logical1'
             *  UnitDelay: '<S578>/Unit Delay'
             */
            if (rtb_AND_op || rtb_AND_j)
            {
                /* Outputs for IfAction SubSystem: '<S578>/Initialize_Timer' incorporates:
                 *  ActionPort: '<S582>/Action Port'
                 */
                /* Switch: '<S584>/Switch1' */
                if (rtb_GreaterThan_e)
                {
                    /* Switch: '<S581>/Switch1' */
                    if (rtb_GreaterThan_m)
                    {
                        /* Switch: '<S584>/Switch1' incorporates:
                         *  Constant: '<S455>/Calib'
                         */
                        TCPR_ac_B.Switch1_de = KeTCPR_t_C3_StblStSlipDtctTimeHT;
                    }
                    else
                    {
                        /* Switch: '<S584>/Switch1' incorporates:
                         *  Constant: '<S454>/Calib'
                         */
                        TCPR_ac_B.Switch1_de = KeTCPR_t_C3_StblStSlipDtctTime;
                    }

                    /* End of Switch: '<S581>/Switch1' */
                }
                else
                {
                    /* Switch: '<S584>/Switch1' incorporates:
                     *  Constant: '<S456>/Calib'
                     */
                    TCPR_ac_B.Switch1_de = KeTCPR_t_C3_StblStSlipRcvryTime;
                }

                /* End of Switch: '<S584>/Switch1' */
                TCPR_ac_DW.UnitDelay_DSTATE_m = HeTCPR_t_MedTED_dT;

                /* End of Outputs for SubSystem: '<S578>/Initialize_Timer' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S578>/Timer_Increment' incorporates:
                 *  ActionPort: '<S583>/Action Port'
                 */
                /* Sum: '<S583>/Sum' incorporates:
                 *  Constant: '<S429>/Calib'
                 *  UnitDelay: '<S578>/Unit Delay'
                 */
                TCPR_ac_DW.UnitDelay_DSTATE_m += HeTCPR_t_MedTED_dT;

                /* End of Outputs for SubSystem: '<S578>/Timer_Increment' */
            }

            /* End of If: '<S578>/If' */

            /* Switch: '<S580>/Switch1' incorporates:
             *  RelationalOperator: '<S578>/Comparison2'
             *  UnitDelay: '<S578>/Unit Delay'
             */
            if (TCPR_ac_B.Switch1_de < TCPR_ac_DW.UnitDelay_DSTATE_m)
            {
                TCPR_ac_DW.UnitDelay_DSTATE_pd = rtb_GreaterThan_e;
            }

            /* End of Switch: '<S580>/Switch1' */
            /* End of Outputs for SubSystem: '<S575>/SlipDetected' */
        }

        /* End of If: '<S575>/If' */

        /* Switch: '<S573>/Switch1' incorporates:
         *  UnitDelay: '<S575>/Unit Delay'
         */
        if (TCPR_ac_DW.UnitDelay_DSTATE_pd)
        {
            /* Switch: '<S569>/Switch' incorporates:
             *  Constant: '<S452>/Calib'
             *  RelationalOperator: '<S569>/Comparison1'
             */
            if (KeTCPR_n_C3_StblStSlipDtctThreshHT > rtb_Abs2_n)
            {
                /* Switch: '<S569>/Switch1' */
                if (rtb_AND_fuh)
                {
                    /* Merge: '<S478>/Merge2' incorporates:
                     *  Constant: '<S447>/Calib'
                     *  Switch: '<S569>/Switch'
                     */
                    rtb_Switch1_lo = KeTCPR_dM_C3_SlipRcvTcR_RmpRt;
                }

                /* End of Switch: '<S569>/Switch1' */
            }
            else
            {
                /* Merge: '<S478>/Merge2' incorporates:
                 *  Constant: '<S448>/Calib'
                 *  Switch: '<S569>/Switch'
                 */
                rtb_Switch1_lo = KeTCPR_dM_C3_SlipRcvTcR_RmpRtFast;
            }

            /* End of Switch: '<S569>/Switch' */
        }

        /* End of Switch: '<S573>/Switch1' */

        /* Merge: '<S478>/Merge1' incorporates:
         *  Gain: '<S574>/Gain'
         *  UnitDelay: '<S575>/Unit Delay'
         */
        rtb_AND_fuh = TCPR_ac_DW.UnitDelay_DSTATE_pd;

        /* End of Outputs for SubSystem: '<S478>/Slip_Remed' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S478>/Slip_Remed_Unava' incorporates:
         *  ActionPort: '<S570>/Action Port'
         */
        /* Merge: '<S478>/Merge1' incorporates:
         *  Constant: '<S570>/FALSE Constant'
         *  SignalConversion generated from: '<S570>/SlipDetected'
         */
        rtb_AND_fuh = false;

        /* End of Outputs for SubSystem: '<S478>/Slip_Remed_Unava' */
    }

    /* Logic: '<S477>/Logical' incorporates:
     *  Inport: '<Root>/VeCSLR_n_Clch3_SlipSpeed'
     *  UnitDelay: '<S477>/Unit Delay'
     */
    rtb_GreaterThan_e = (rtb_AND_fuh && (!TCPR_ac_DW.UnitDelay_DSTATE_kf));
    if (TCPR_ac_DW.UnitDelay2_DSTATE_p != rtb_Switch1_lo)
    {
        /* Outputs for IfAction SubSystem: '<S473>/New_RampRate_Calc' incorporates:
         *  ActionPort: '<S567>/Action Port'
         */
        /* Product: '<S567>/Product' incorporates:
         *  Constant: '<S429>/Calib'
         */
        TCPR_ac_B.Product_o = rtb_Switch1_lo * HeTCPR_t_MedTED_dT;

        /* Product: '<S567>/Product1' incorporates:
         *  Constant: '<S460>/Calib'
         */
        TCPR_ac_B.Product1_h = rtb_Switch1_lo * KeTCPR_t_CntrlTcR_LeadTmForOfst;

        /* End of Outputs for SubSystem: '<S473>/New_RampRate_Calc' */
    }

    /* Switch: '<S464>/Switch' incorporates:
     *  Constant: '<S449>/Calib'
     *  Constant: '<S450>/Calib'
     *  Constant: '<S453>/Calib'
     *  Constant: '<S464>/Constant Value'
     *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
     *  SignalConversion generated from: '<S1>/VeTISR_n_InputSpeed'
     *  UnitDelay: '<S473>/Unit Delay2'
     */
    rtb_Abs2_n = (fmaxf(look2_iflf_binlca_16a
                        (rtb_TmpSignalConversionAtVeTISR_n_InputS,
                         rtb_TmpSignalConversionAtVeTFTR_T_TransO, ((const
                      float32 *)&(KxTCPR_p_MaxMainPressCapability[0])), ((const
                      float32 *)&(KyTCPR_p_MaxMainPressCapability[0])), ((const
                      float32 *)&(KtTCPR_p_MaxMainPressCapability[0])),
                         TCPR_ac_ConstP.pooled5, 9U) -
                        KeTCPR_p_C3_RetSpringPress, 0.0F) *
                  KeTCPR_k_C3_StaticFrictionCoef) *
        KeTCPR_h_C3_PresToTorqLumpedCal;
    if (rtb_GreaterThan_cu)
    {
        (void)Rte_Read_VeHSER_e_Clch3_FillCmnd_Value(&tmpRead_2);

        /* Outputs for IfAction SubSystem: '<S467>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S479>/Action Port'
         */
        /* RelationalOperator: '<S479>/Relational Operator' incorporates:
         *  Constant: '<S479>/Constant Value2'
         *  Inport: '<Root>/VeHSER_e_Clch3_FillCmnd'
         */
        rtb_GreaterThan_cu = (rtb_TmpSignalConversionAtVeHSER_M_Clc_bh < 0.0F);

        /* Outputs for Atomic SubSystem: '<S479>/EdgeRising' */
        /* Logic: '<S482>/AND' incorporates:
         *  Logic: '<S482>/OR1'
         *  UnitDelay: '<S482>/Unit Delay'
         */
        rtb_AND_op = (rtb_GreaterThan_cu && (!TCPR_ac_DW.UnitDelay_DSTATE_lk));

        /* Update for UnitDelay: '<S482>/Unit Delay' */
        TCPR_ac_DW.UnitDelay_DSTATE_lk = rtb_GreaterThan_cu;

        /* End of Outputs for SubSystem: '<S479>/EdgeRising' */

        /* Switch: '<S504>/Switch1' incorporates:
         *  Constant: '<S432>/Calib'
         *  Constant: '<S433>/Calib'
         *  Constant: '<S489>/Constant Value1'
         *  MinMax: '<S489>/MinMax3'
         *  Sum: '<S489>/Sum1'
         *  UnitDelay: '<S489>/Unit Delay'
         */
        if (rtb_AND_ly)
        {
            TCPR_ac_DW.UnitDelay_DSTATE_f = 0.0F;
        }
        else
        {
            TCPR_ac_DW.UnitDelay_DSTATE_f = fminf(KeTCPR_M_C3_ClampTorqRampStep
                + TCPR_ac_DW.UnitDelay_DSTATE_f, KeTCPR_M_C3_ClmpTorq);
        }

        /* End of Switch: '<S504>/Switch1' */

        /* Sum: '<S489>/Sum2' incorporates:
         *  Abs: '<S488>/Abs4'
         *  Switch: '<S488>/Switch1'
         *  UnitDelay: '<S489>/Unit Delay'
         */
        rtb_Merge_ou = fabsf(rtb_TmpSignalConversionAtVeHSER_M_Clch3_) -
            TCPR_ac_DW.UnitDelay_DSTATE_f;

        /* Outputs for Atomic SubSystem: '<S489>/Limiter' */
        /* Switch: '<S505>/Switch1' incorporates:
         *  RelationalOperator: '<S505>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clc_ep < rtb_Merge_ou)
        {
            /* Switch: '<S479>/Switch1' */
            rtb_Merge_ou = rtb_TmpSignalConversionAtVeHSER_M_Clc_ep;
        }

        /* End of Switch: '<S505>/Switch1' */

        /* Switch: '<S505>/Switch' incorporates:
         *  Constant: '<S489>/Constant Value3'
         *  RelationalOperator: '<S505>/Relational Operator1'
         */
        if (rtb_Merge_ou <= 0.0F)
        {
            /* Switch: '<S505>/Switch' */
            rtb_Merge_ou = 0.0F;
        }

        /* End of Switch: '<S505>/Switch' */
        /* End of Outputs for SubSystem: '<S489>/Limiter' */

        /* Outputs for Enabled SubSystem: '<S486>/Start_TcR_Ramp' incorporates:
         *  EnablePort: '<S493>/Enable'
         */
        if (rtb_AND_ly)
        {
            /* If: '<S493>/If1' incorporates:
             *  Abs: '<S479>/Abs'
             *  Constant: '<S440>/Calib'
             */
            if (KeTCPR_b_CntrlTcR_OvrdTo0_OnRst)
            {
                /* Outputs for IfAction SubSystem: '<S493>/TcRMaxOvrdToZero' incorporates:
                 *  ActionPort: '<S496>/Action Port'
                 */
                TCPR_ac_TcRMaxOvrdToZero(&TCPR_ac_B.Merge_d);

                /* End of Outputs for SubSystem: '<S493>/TcRMaxOvrdToZero' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S493>/TcRMaxNormal' incorporates:
                 *  ActionPort: '<S495>/Action Port'
                 */
                TCPR_ac_TcRMaxNormal(fabsf
                                     (rtb_TmpSignalConversionAtVeHSER_M_Clch3_),
                                     &TCPR_ac_B.Merge_d);

                /* End of Outputs for SubSystem: '<S493>/TcRMaxNormal' */
            }

            /* End of If: '<S493>/If1' */

            /* Outputs for Atomic SubSystem: '<S486>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S494>/Switch1' incorporates:
             *  Constant: '<S461>/Calib'
             *  UnitDelay: '<S494>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_mz = KeTCPR_t_CntrlTcR_RmpHldffOnR;

            /* End of Outputs for SubSystem: '<S486>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S492>/Switch1' */
            rtb_Merge1_p = TCPR_ac_B.Merge_d;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S486>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S494>/Switch1' incorporates:
             *  Constant: '<S429>/Calib'
             *  Constant: '<S494>/Constant Value4'
             *  MinMax: '<S494>/Maximum'
             *  Sum: '<S494>/Subtraction'
             *  UnitDelay: '<S494>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_mz = fmaxf
                (TCPR_ac_DW.UnitDelay_DSTATE_mz - HeTCPR_t_MedTED_dT, 0.0F);

            /* End of Outputs for SubSystem: '<S486>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S490>/Switch1' incorporates:
             *  Abs: '<S486>/Abs'
             *  Switch: '<S492>/Switch1'
             */
            if (rtb_GreaterThan_e)
            {
                TCPR_ac_DW.UnitDelay1_DSTATE_l = fabsf
                    (rtb_TmpSignalConversionAtVeHTDR_M_Clch3_);
            }

            /* Outputs for Atomic SubSystem: '<S486>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S491>/Switch1' incorporates:
             *  Constant: '<S486>/Constant Value2'
             *  Constant: '<S486>/Constant Value3'
             *  Constant: '<S494>/Constant Value2'
             *  Logic: '<S486>/Logical'
             *  RelationalOperator: '<S486>/Comparison1'
             *  RelationalOperator: '<S494>/Greater  Than1'
             *  Switch: '<S492>/Switch1'
             *  UnitDelay: '<S494>/Unit Delay'
             */
            if ((TCPR_ac_DW.UnitDelay_DSTATE_mz > 0.0F) && (TCPR_ac_B.Product_o >=
                 0.0F))
            {
                rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ = 0.0F;
            }
            else
            {
                rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ = TCPR_ac_B.Product_o;
            }

            /* End of Switch: '<S491>/Switch1' */
            /* End of Outputs for SubSystem: '<S486>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S492>/Switch1' incorporates:
             *  Sum: '<S486>/Sum1'
             */
            rtb_Merge1_p = TCPR_ac_DW.UnitDelay1_DSTATE_l +
                rtb_TmpSignalConversionAtVeHTDR_M_Clch1_;
        }

        /* End of Outputs for SubSystem: '<S486>/Start_TcR_Ramp' */

        /* Outputs for Atomic SubSystem: '<S479>/Limiter' */
        /* Switch: '<S484>/Switch1' incorporates:
         *  RelationalOperator: '<S484>/Relational Operator'
         */
        if (rtb_Merge_ou >= rtb_Merge1_p)
        {
            /* Switch: '<S479>/Switch1' */
            rtb_Merge_ou = rtb_Merge1_p;
        }

        /* End of Switch: '<S484>/Switch1' */

        /* Switch: '<S484>/Switch' incorporates:
         *  Constant: '<S479>/Constant Value1'
         *  RelationalOperator: '<S484>/Relational Operator1'
         */
        if (rtb_Merge_ou > 0.0F)
        {
            /* Switch: '<S490>/Switch1' incorporates:
             *  UnitDelay: '<S479>/Unit Delay1'
             */
            TCPR_ac_DW.UnitDelay1_DSTATE_l = rtb_Merge_ou;
        }
        else
        {
            /* Switch: '<S490>/Switch1' incorporates:
             *  UnitDelay: '<S479>/Unit Delay1'
             */
            TCPR_ac_DW.UnitDelay1_DSTATE_l = 0.0F;
        }

        /* End of Switch: '<S484>/Switch' */
        /* End of Outputs for SubSystem: '<S479>/Limiter' */

        /* Outputs for Enabled SubSystem: '<S487>/Start_TcR_Ramp' incorporates:
         *  EnablePort: '<S500>/Enable'
         */
        if (rtb_AND_op)
        {
            /* If: '<S500>/If1' incorporates:
             *  Constant: '<S437>/Calib'
             */
            if (KeTCPR_b_CntrlTcRMin_OvrdTo0_OnRst)
            {
                /* Outputs for IfAction SubSystem: '<S500>/TcRMinOvrdToZero' incorporates:
                 *  ActionPort: '<S503>/Action Port'
                 */
                TCPR_ac_TcRMaxOvrdToZero(&TCPR_ac_B.Merge_h);

                /* End of Outputs for SubSystem: '<S500>/TcRMinOvrdToZero' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S500>/TcRMinNormal' incorporates:
                 *  ActionPort: '<S502>/Action Port'
                 */
                TCPR_ac_TcRMaxNormal(rtb_TmpSignalConversionAtVeHSER_M_Clch3_,
                                     &TCPR_ac_B.Merge_h);

                /* End of Outputs for SubSystem: '<S500>/TcRMinNormal' */
            }

            /* End of If: '<S500>/If1' */

            /* Outputs for Atomic SubSystem: '<S487>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S501>/Switch1' incorporates:
             *  Constant: '<S458>/Calib'
             *  UnitDelay: '<S501>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_e = KeTCPR_t_CntrlTcRMin_RmpHldffOnR;

            /* End of Outputs for SubSystem: '<S487>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S499>/Switch1' */
            rtb_Merge_ou = TCPR_ac_B.Merge_h;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S487>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S501>/Switch1' incorporates:
             *  Constant: '<S429>/Calib'
             *  Constant: '<S501>/Constant Value4'
             *  MinMax: '<S501>/Maximum'
             *  Sum: '<S501>/Subtraction'
             *  UnitDelay: '<S501>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_e = fmaxf(TCPR_ac_DW.UnitDelay_DSTATE_e
                - HeTCPR_t_MedTED_dT, 0.0F);

            /* End of Outputs for SubSystem: '<S487>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S498>/Switch1' incorporates:
             *  Gain: '<S487>/Gain'
             *  Switch: '<S499>/Switch1'
             */
            rtb_Merge_ou = -TCPR_ac_B.Product_o;

            /* Outputs for Atomic SubSystem: '<S487>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S498>/Switch1' incorporates:
             *  Constant: '<S487>/Constant Value3'
             *  Constant: '<S501>/Constant Value2'
             *  Gain: '<S487>/Gain'
             *  Logic: '<S487>/Logical'
             *  RelationalOperator: '<S487>/Comparison1'
             *  RelationalOperator: '<S501>/Greater  Than1'
             *  Switch: '<S499>/Switch1'
             *  UnitDelay: '<S501>/Unit Delay'
             */
            if ((TCPR_ac_DW.UnitDelay_DSTATE_e > 0.0F) && ((-TCPR_ac_B.Product_o)
                 <= 0.0F))
            {
                /* Switch: '<S498>/Switch1' incorporates:
                 *  Constant: '<S487>/Constant Value2'
                 */
                rtb_Merge_ou = 0.0F;
            }

            /* End of Switch: '<S498>/Switch1' */
            /* End of Outputs for SubSystem: '<S487>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S497>/Switch1' incorporates:
             *  Abs: '<S487>/Abs'
             *  Switch: '<S499>/Switch1'
             */
            if (rtb_GreaterThan_e)
            {
                TCPR_ac_DW.UnitDelay2_DSTATE_f1 = fabsf
                    (rtb_TmpSignalConversionAtVeHTDR_M_Clch3_);
            }

            /* Switch: '<S499>/Switch1' incorporates:
             *  Sum: '<S487>/Sum1'
             */
            rtb_Merge_ou += TCPR_ac_DW.UnitDelay2_DSTATE_f1;
        }

        /* End of Outputs for SubSystem: '<S487>/Start_TcR_Ramp' */

        /* Outputs for Atomic SubSystem: '<S479>/Limiter1' */
        /* Switch: '<S485>/Switch1' incorporates:
         *  Constant: '<S479>/Constant Value3'
         *  RelationalOperator: '<S485>/Relational Operator'
         */
        if (0.0F < rtb_Merge_ou)
        {
            /* Switch: '<S479>/Switch1' */
            rtb_Merge_ou = 0.0F;
        }

        /* End of Switch: '<S485>/Switch1' */

        /* Switch: '<S485>/Switch' incorporates:
         *  RelationalOperator: '<S485>/Relational Operator1'
         */
        if (rtb_Merge_ou > rtb_TmpSignalConversionAtVeHSER_M_Clc_bh)
        {
            /* Switch: '<S497>/Switch1' incorporates:
             *  UnitDelay: '<S479>/Unit Delay2'
             */
            TCPR_ac_DW.UnitDelay2_DSTATE_f1 = rtb_Merge_ou;
        }
        else
        {
            /* Switch: '<S497>/Switch1' incorporates:
             *  UnitDelay: '<S479>/Unit Delay2'
             */
            TCPR_ac_DW.UnitDelay2_DSTATE_f1 =
                rtb_TmpSignalConversionAtVeHSER_M_Clc_bh;
        }

        /* End of Switch: '<S485>/Switch' */
        /* End of Outputs for SubSystem: '<S479>/Limiter1' */

        /* VariantMerge generated from: '<S3>/VariantSource45' incorporates:
         *  Constant: '<S479>/Constant Value'
         *  Constant: '<S483>/Constant'
         *  Inport: '<Root>/VeHSER_e_Clch3_FillCmnd'
         *  Logic: '<S479>/Logical1'
         *  RelationalOperator: '<S479>/Comparison1'
         *  RelationalOperator: '<S479>/Comparison4'
         */
        rtb_AND_ly = ((rtb_TmpSignalConversionAtVeHSER_M_Clc_ep <= 0.1F) ||
                      (((uint32)tmpRead_2) == CeHSER_e_ClchFillToTchPt));

        /* Merge: '<S467>/Merge' incorporates:
         *  Constant: '<S430>/Calib'
         *  Product: '<S479>/Product'
         *  UnitDelay: '<S479>/Unit Delay1'
         */
        rtb_Merge_ou = KeTCPR_K_C3_Max_Scalar * TCPR_ac_DW.UnitDelay1_DSTATE_l;

        /* Switch: '<S479>/Switch1' incorporates:
         *  Constant: '<S428>/Calib'
         *  Logic: '<S479>/NOT'
         *  UnitDelay: '<S479>/Unit Delay1'
         *  UnitDelay: '<S479>/Unit Delay2'
         */
        if (!HeTCPR_b_Enb_C3_Asymetric_ClchLim)
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay1_DSTATE_l;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay2_DSTATE_f1;
        }

        /* End of Switch: '<S479>/Switch1' */

        /* Merge: '<S467>/Merge1' incorporates:
         *  Constant: '<S431>/Calib'
         *  Product: '<S479>/Product1'
         */
        rtb_Merge1_p = rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ *
            KeTCPR_K_C3_Min_Scalar;

        /* End of Outputs for SubSystem: '<S467>/Locked_TcR_Cntrl' */
    }
    else if (KeTCPR_b_CntrlTcR_OvrdTo0_OnRlsd)
    {
        /* Outputs for IfAction SubSystem: '<S467>/Rlsd_TcR_Ovrdn' incorporates:
         *  ActionPort: '<S481>/Action Port'
         */
        /* Merge: '<S467>/Merge' incorporates:
         *  Constant: '<S481>/Constant Value1'
         *  SignalConversion generated from: '<S481>/TcR_Max'
         */
        rtb_Merge_ou = 0.0F;

        /* Merge: '<S467>/Merge1' incorporates:
         *  Constant: '<S481>/Constant Value2'
         *  SignalConversion generated from: '<S481>/TcR_Min'
         */
        rtb_Merge1_p = 0.0F;

        /* VariantMerge generated from: '<S3>/VariantSource45' incorporates:
         *  Constant: '<S481>/TRUE Constant'
         *  SignalConversion generated from: '<S481>/ClchOffloadCnfrmd'
         */
        rtb_AND_ly = true;

        /* End of Outputs for SubSystem: '<S467>/Rlsd_TcR_Ovrdn' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S467>/Rlsd_TcR_CntrlDflt' incorporates:
         *  ActionPort: '<S480>/Action Port'
         */
        /* Merge: '<S467>/Merge' incorporates:
         *  Gain: '<S506>/Gain'
         */
        rtb_Merge_ou = rtb_TmpSignalConversionAtVeHSER_M_Clch3_;

        /* Merge: '<S467>/Merge1' incorporates:
         *  Gain: '<S507>/Gain'
         */
        rtb_Merge1_p = rtb_TmpSignalConversionAtVeHSER_M_Clch3_;

        /* VariantMerge generated from: '<S3>/VariantSource45' incorporates:
         *  Constant: '<S480>/TRUE Constant'
         *  SignalConversion generated from: '<S480>/ClchOffloadCnfrmd'
         */
        rtb_AND_ly = true;

        /* End of Outputs for SubSystem: '<S467>/Rlsd_TcR_CntrlDflt' */
    }

#elif !Rte_SysCon_Variant_TCPR_5 && Rte_SysCon_Variant_TCPR_9

    /* VariantMerge generated from: '<S3>/VariantSource45' incorporates:
     *  Constant: '<S3>/TRUE Constant3'
     *  SignalConversion generated from: '<S3>/VariantSource45'
     */
    rtb_AND_ly = true;

#endif

    /* End of If: '<S473>/If2' */
    /* End of Outputs for SubSystem: '<S465>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S571>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S571>/EdgeFalling2' */
    /* End of Outputs for SubSystem: '<S571>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S571>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S571>/Signal Latch On With Reset1' */
#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    /* Outputs for Atomic SubSystem: '<S13>/Bit Selector4' */
    /* RelationalOperator: '<S19>/Greater  Than' incorporates:
     *  Constant: '<S19>/Constant Value'
     *  S-Function (sfix_bitop): '<S19>/Bitwise Logical Operator'
     */
    rtb_GreaterThan_l3 = ((((sint32)rtb_Selector) & 8) > 0);

    /* End of Outputs for SubSystem: '<S13>/Bit Selector4' */
#endif

    /* Outputs for Atomic SubSystem: '<S735>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S735>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S735>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S735>/EdgeFalling2' */
    /* Outputs for Atomic SubSystem: '<S735>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S629>/EdgeRising' */
    /* If: '<S637>/If2' incorporates:
     *  Constant: '<S604>/Calib'
     *  Constant: '<S629>/Constant Value1'
     *  If: '<S631>/If'
     *  If: '<S642>/If1'
     *  Inport: '<Root>/VeCSLR_n_Clch4_SlipSpeed'
     *  Inport: '<Root>/VeHSER_e_Clch4_FillCmnd'
     *  Logic: '<S641>/Logical'
     *  Logic: '<S641>/Logical2'
     *  Logic: '<S735>/Logical'
     *  Logic: '<S735>/Logical2'
     *  Logic: '<S735>/Logical3'
     *  Logic: '<S735>/Logical4'
     *  Lookup_n-D: '<S627>/Vector'
     *  MinMax: '<S628>/Maximum'
     *  Product: '<S628>/Multiplication'
     *  RelationalOperator: '<S629>/Comparison1'
     *  SignalConversion generated from: '<S3>/VariantSource10'
     *  Sum: '<S628>/Summation'
     *  Switch: '<S628>/Switch'
     *  Switch: '<S633>/Switch1'
     *  UnitDelay: '<S637>/Unit Delay2'
     */
#if Rte_SysCon_Variant_TCPR_1

    /* Logic: '<S632>/AND' incorporates:
     *  Logic: '<S632>/OR1'
     *  UnitDelay: '<S632>/Unit Delay'
     */
    rtb_GreaterThan_cu = (rtb_GreaterThan_l3 &&
                          (!TCPR_ac_DW.UnitDelay_DSTATE_pkz));

    /* Update for UnitDelay: '<S632>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_pkz = rtb_GreaterThan_l3;
    if (rtb_TmpSignalConversionAtVeHTDR_M_OutTor >= 0.0F)
    {
        /* Switch: '<S633>/Switch1' incorporates:
         *  Constant: '<S610>/Calib'
         */
        rtb_Switch1_l = KeTCPR_dM_C4_PwrOnTcR_RmpRt;
    }
    else
    {
        /* Switch: '<S633>/Switch1' incorporates:
         *  Constant: '<S609>/Calib'
         */
        rtb_Switch1_l = KeTCPR_dM_C4_PwrOffTcR_RmpRt;
    }

    /* Logic: '<S751>/AND' incorporates:
     *  Constant: '<S629>/Constant Value1'
     *  Logic: '<S751>/OR1'
     *  UnitDelay: '<S751>/Unit Delay'
     */
    rtb_AND_fcg = (rtb_GreaterThan_l3 && (!TCPR_ac_DW.UnitDelay_DSTATE_ja));

    /* Update for UnitDelay: '<S751>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_ja = rtb_GreaterThan_l3;

    /* Logic: '<S750>/OR1' incorporates:
     *  Logic: '<S749>/OR1'
     *  Logic: '<S754>/AND'
     *  Logic: '<S754>/OR1'
     */
    rtb_AND_h1 = !rtb_GreaterThan_l3;

    /* Logic: '<S750>/AND' incorporates:
     *  Logic: '<S750>/OR1'
     *  UnitDelay: '<S750>/Unit Delay'
     */
    rtb_GreaterThan_e = (rtb_AND_h1 && (TCPR_ac_DW.UnitDelay_DSTATE_oy));

    /* Update for UnitDelay: '<S750>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_oy = rtb_GreaterThan_l3;

    /* Outputs for Atomic SubSystem: '<S754>/EdgeRising' */
    /* Logic: '<S755>/AND' incorporates:
     *  Logic: '<S755>/OR1'
     *  UnitDelay: '<S755>/Unit Delay'
     */
    rtb_AND_op = (rtb_GreaterThan_l3 && (!TCPR_ac_DW.UnitDelay_DSTATE_hl));

    /* Update for UnitDelay: '<S755>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_hl = rtb_GreaterThan_l3;

    /* End of Outputs for SubSystem: '<S754>/EdgeRising' */

    /* Switch: '<S754>/Switch1' incorporates:
     *  Constant: '<S594>/Calib'
     *  Constant: '<S626>/Calib'
     *  Constant: '<S754>/Constant Value1'
     *  Logic: '<S754>/OR'
     *  MinMax: '<S754>/Minimum'
     *  Sum: '<S754>/Summation'
     *  UnitDelay: '<S754>/Unit Delay'
     */
    if ((rtb_AND_h1 || rtb_AND_op) || rtb_GreaterThan_e)
    {
        TCPR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        TCPR_ac_DW.UnitDelay_DSTATE = fminf(KeTCPR_t_DlydRisingEdgeTmr,
            HeTCPR_t_MedTED_dT + TCPR_ac_DW.UnitDelay_DSTATE);
    }

    /* End of Switch: '<S754>/Switch1' */

    /* Logic: '<S749>/AND' incorporates:
     *  UnitDelay: '<S749>/Unit Delay'
     */
    rtb_GreaterThan_e = (rtb_AND_h1 && (TCPR_ac_DW.UnitDelay_DSTATE_o3));

    /* Update for UnitDelay: '<S749>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_o3 = rtb_GreaterThan_l3;

    /* Logic: '<S753>/OR1' incorporates:
     *  Constant: '<S626>/Calib'
     *  Logic: '<S753>/NOT'
     *  Logic: '<S753>/OR'
     *  Logic: '<S754>/AND'
     *  RelationalOperator: '<S754>/Greater  Than'
     *  UnitDelay: '<S753>/Unit Delay'
     *  UnitDelay: '<S754>/Unit Delay'
     */
    VeTCPC_b_C4_SlRecLatch = (rtb_AND_fcg || (((rtb_AND_h1 ||
        (TCPR_ac_DW.UnitDelay_DSTATE < KeTCPR_t_DlydRisingEdgeTmr)) &&
        (!rtb_GreaterThan_e)) && (TCPR_ac_DW.UnitDelay_DSTATE_fu)));

    /* Update for UnitDelay: '<S753>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_fu = VeTCPC_b_C4_SlRecLatch;

    /* Logic: '<S735>/Logical4' incorporates:
     *  Constant: '<S606>/Calib'
     */
    VeTCPC_b_C4_SlRecEnbl = ((VeTCPC_b_C4_SlRecLatch) ||
        (KeTCPR_b_EnblSlRec_woC4Cntrl));
    if (rtb_GreaterThan_l3)
    {
        (void)Rte_Read_VeCSLR_n_Clch4_SlipSpeed_Value(&rtb_Abs2);

        /* Outputs for IfAction SubSystem: '<S642>/Slip_Remed' incorporates:
         *  ActionPort: '<S733>/Action Port'
         */
        /* Abs: '<S733>/Abs2' incorporates:
         *  Inport: '<Root>/VeCSLR_n_Clch4_SlipSpeed'
         */
        rtb_Abs2 = fabsf(rtb_Abs2);

        /* RelationalOperator: '<S733>/Comparison2' incorporates:
         *  Constant: '<S608>/Calib'
         *  Constant: '<S611>/Calib'
         */
        rtb_AND_fcg = (KeTCPR_dM_C4_SlipRcvTcR_RmpRt <
                       KeTCPR_dM_C4_ClchCapRmpRtThresh);

        /* UnitDelay: '<S740>/Unit Delay' incorporates:
         *  Constant: '<S616>/Calib'
         *  RelationalOperator: '<S733>/Comparison3'
         */
        rtb_AND_h1 = (rtb_Abs2 > KeTCPR_n_C4_StblStSlipDtctThreshHT);

        /* Logic: '<S733>/Logical3' incorporates:
         *  Constant: '<S615>/Calib'
         *  Logic: '<S733>/Logical'
         *  Logic: '<S733>/Logical1'
         *  Logic: '<S733>/Logical2'
         *  RelationalOperator: '<S733>/Comparison'
         */
        rtb_AND_h1 = ((((rtb_AND_fcg && (rtb_Abs2 >
                          KeTCPR_n_C4_StblStSlipDtctThresh)) && (!rtb_AND_h1)) ||
                       rtb_AND_h1) && (VeTCPC_b_C4_SlRecEnbl));

        /* Outputs for Atomic SubSystem: '<S739>/EdgeBi1' */
        /* RelationalOperator: '<S740>/Not Equal' incorporates:
         *  UnitDelay: '<S740>/Unit Delay'
         */
        rtb_GreaterThan_e = (rtb_AND_h1 != TCPR_ac_DW.UnitDelay_DSTATE_lt);

        /* Update for UnitDelay: '<S740>/Unit Delay' */
        TCPR_ac_DW.UnitDelay_DSTATE_lt = rtb_AND_h1;

        /* End of Outputs for SubSystem: '<S739>/EdgeBi1' */

        /* If: '<S739>/If' incorporates:
         *  Inport: '<S741>/u'
         *  Logic: '<S739>/Logical1'
         *  RelationalOperator: '<S739>/Comparison4'
         *  UnitDelay: '<S739>/Unit Delay'
         */
        if ((TCPR_ac_DW.UnitDelay_DSTATE_bp == rtb_AND_h1) || rtb_GreaterThan_cu)
        {
            /* Outputs for IfAction SubSystem: '<S739>/Reset_PassThr' incorporates:
             *  ActionPort: '<S741>/Action Port'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_bp = rtb_AND_h1;

            /* End of Outputs for SubSystem: '<S739>/Reset_PassThr' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S739>/SlipDetected' incorporates:
             *  ActionPort: '<S742>/Action Port'
             */
            /* RelationalOperator: '<S742>/Comparison1' incorporates:
             *  Constant: '<S616>/Calib'
             */
            rtb_AND_op = (rtb_Abs2 > KeTCPR_n_C4_StblStSlipDtctThreshHT);

            /* Outputs for Atomic SubSystem: '<S742>/EdgeRising1' */
            /* Logic: '<S743>/AND' incorporates:
             *  Logic: '<S743>/OR1'
             *  UnitDelay: '<S743>/Unit Delay'
             */
            rtb_GreaterThan_m = (rtb_AND_op && (!TCPR_ac_DW.UnitDelay_DSTATE_cv));

            /* Update for UnitDelay: '<S743>/Unit Delay' */
            TCPR_ac_DW.UnitDelay_DSTATE_cv = rtb_AND_op;

            /* End of Outputs for SubSystem: '<S742>/EdgeRising1' */

            /* If: '<S742>/If' incorporates:
             *  Constant: '<S594>/Calib'
             *  Inport: '<S746>/dT'
             *  Logic: '<S742>/Logical1'
             *  UnitDelay: '<S742>/Unit Delay'
             */
            if (rtb_GreaterThan_e || rtb_GreaterThan_m)
            {
                /* Outputs for IfAction SubSystem: '<S742>/Initialize_Timer' incorporates:
                 *  ActionPort: '<S746>/Action Port'
                 */
                /* Switch: '<S748>/Switch1' */
                if (rtb_AND_h1)
                {
                    /* Switch: '<S745>/Switch1' */
                    if (rtb_AND_op)
                    {
                        /* Switch: '<S748>/Switch1' incorporates:
                         *  Constant: '<S619>/Calib'
                         */
                        TCPR_ac_B.Switch1 = KeTCPR_t_C4_StblStSlipDtctTimeHT;
                    }
                    else
                    {
                        /* Switch: '<S748>/Switch1' incorporates:
                         *  Constant: '<S618>/Calib'
                         */
                        TCPR_ac_B.Switch1 = KeTCPR_t_C4_StblStSlipDtctTime;
                    }

                    /* End of Switch: '<S745>/Switch1' */
                }
                else
                {
                    /* Switch: '<S748>/Switch1' incorporates:
                     *  Constant: '<S620>/Calib'
                     */
                    TCPR_ac_B.Switch1 = KeTCPR_t_C4_StblStSlipRcvryTime;
                }

                /* End of Switch: '<S748>/Switch1' */
                TCPR_ac_DW.UnitDelay_DSTATE_h = HeTCPR_t_MedTED_dT;

                /* End of Outputs for SubSystem: '<S742>/Initialize_Timer' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S742>/Timer_Increment' incorporates:
                 *  ActionPort: '<S747>/Action Port'
                 */
                /* Sum: '<S747>/Sum' incorporates:
                 *  Constant: '<S594>/Calib'
                 *  UnitDelay: '<S742>/Unit Delay'
                 */
                TCPR_ac_DW.UnitDelay_DSTATE_h += HeTCPR_t_MedTED_dT;

                /* End of Outputs for SubSystem: '<S742>/Timer_Increment' */
            }

            /* End of If: '<S742>/If' */

            /* Switch: '<S744>/Switch1' incorporates:
             *  RelationalOperator: '<S742>/Comparison2'
             *  UnitDelay: '<S742>/Unit Delay'
             */
            if (TCPR_ac_B.Switch1 < TCPR_ac_DW.UnitDelay_DSTATE_h)
            {
                TCPR_ac_DW.UnitDelay_DSTATE_bp = rtb_AND_h1;
            }

            /* End of Switch: '<S744>/Switch1' */
            /* End of Outputs for SubSystem: '<S739>/SlipDetected' */
        }

        /* End of If: '<S739>/If' */

        /* Switch: '<S737>/Switch1' incorporates:
         *  UnitDelay: '<S739>/Unit Delay'
         */
        if (TCPR_ac_DW.UnitDelay_DSTATE_bp)
        {
            /* Switch: '<S733>/Switch' incorporates:
             *  Constant: '<S616>/Calib'
             *  RelationalOperator: '<S733>/Comparison1'
             */
            if (KeTCPR_n_C4_StblStSlipDtctThreshHT > rtb_Abs2)
            {
                /* Switch: '<S733>/Switch1' */
                if (rtb_AND_fcg)
                {
                    /* Merge: '<S642>/Merge2' incorporates:
                     *  Constant: '<S611>/Calib'
                     *  Switch: '<S733>/Switch'
                     */
                    rtb_Switch1_l = KeTCPR_dM_C4_SlipRcvTcR_RmpRt;
                }

                /* End of Switch: '<S733>/Switch1' */
            }
            else
            {
                /* Merge: '<S642>/Merge2' incorporates:
                 *  Constant: '<S612>/Calib'
                 *  Switch: '<S733>/Switch'
                 */
                rtb_Switch1_l = KeTCPR_dM_C4_SlipRcvTcR_RmpRtFast;
            }

            /* End of Switch: '<S733>/Switch' */
        }

        /* End of Switch: '<S737>/Switch1' */

        /* Merge: '<S642>/Merge1' incorporates:
         *  Gain: '<S738>/Gain'
         *  UnitDelay: '<S739>/Unit Delay'
         */
        rtb_AND_fcg = TCPR_ac_DW.UnitDelay_DSTATE_bp;

        /* End of Outputs for SubSystem: '<S642>/Slip_Remed' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S642>/Slip_Remed_Unava' incorporates:
         *  ActionPort: '<S734>/Action Port'
         */
        /* Merge: '<S642>/Merge1' incorporates:
         *  Constant: '<S734>/FALSE Constant'
         *  SignalConversion generated from: '<S734>/SlipDetected'
         */
        rtb_AND_fcg = false;

        /* End of Outputs for SubSystem: '<S642>/Slip_Remed_Unava' */
    }

    /* Logic: '<S641>/Logical' incorporates:
     *  Inport: '<Root>/VeCSLR_n_Clch4_SlipSpeed'
     *  UnitDelay: '<S641>/Unit Delay'
     */
    rtb_AND_h1 = (rtb_AND_fcg && (!TCPR_ac_DW.UnitDelay_DSTATE_hs));
    if (TCPR_ac_DW.UnitDelay2_DSTATE_d != rtb_Switch1_l)
    {
        /* Outputs for IfAction SubSystem: '<S637>/New_RampRate_Calc' incorporates:
         *  ActionPort: '<S731>/Action Port'
         */
        /* Product: '<S731>/Product' incorporates:
         *  Constant: '<S594>/Calib'
         */
        TCPR_ac_B.Product = rtb_Switch1_l * HeTCPR_t_MedTED_dT;

        /* Product: '<S731>/Product1' incorporates:
         *  Constant: '<S624>/Calib'
         */
        TCPR_ac_B.Product1 = rtb_Switch1_l * KeTCPR_t_CntrlTcR_LeadTmForOfst;

        /* End of Outputs for SubSystem: '<S637>/New_RampRate_Calc' */
    }

    /* Switch: '<S628>/Switch' incorporates:
     *  Constant: '<S613>/Calib'
     *  Constant: '<S614>/Calib'
     *  Constant: '<S617>/Calib'
     *  Constant: '<S628>/Constant Value'
     *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
     *  SignalConversion generated from: '<S1>/VeTISR_n_InputSpeed'
     *  UnitDelay: '<S637>/Unit Delay2'
     */
    rtb_Abs2 = (fmaxf(look2_iflf_binlca_16a
                      (rtb_TmpSignalConversionAtVeTISR_n_InputS,
                       rtb_TmpSignalConversionAtVeTFTR_T_TransO, ((const float32
                    *)&(KxTCPR_p_MaxMainPressCapability[0])), ((const float32 *)
                   &(KyTCPR_p_MaxMainPressCapability[0])), ((const float32 *)
                   &(KtTCPR_p_MaxMainPressCapability[0])),
                       TCPR_ac_ConstP.pooled5, 9U) - KeTCPR_p_C4_RetSpringPress,
                      0.0F) * KeTCPR_k_C4_StaticFrictionCoef) *
        KeTCPR_h_C4_PresToTorqLumpedCal;
    if (rtb_GreaterThan_l3)
    {
        (void)Rte_Read_VeHSER_e_Clch4_FillCmnd_Value(&tmpRead_3);

        /* Outputs for IfAction SubSystem: '<S631>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S643>/Action Port'
         */
        /* RelationalOperator: '<S643>/Relational Operator' incorporates:
         *  Constant: '<S643>/Constant Value2'
         *  Inport: '<Root>/VeHSER_e_Clch4_FillCmnd'
         */
        rtb_GreaterThan_l3 = (rtb_TmpSignalConversionAtVeHSER_M_Clch_h < 0.0F);

        /* Outputs for Atomic SubSystem: '<S643>/EdgeRising' */
        /* Logic: '<S646>/AND' incorporates:
         *  Logic: '<S646>/OR1'
         *  UnitDelay: '<S646>/Unit Delay'
         */
        rtb_GreaterThan_e = (rtb_GreaterThan_l3 &&
                             (!TCPR_ac_DW.UnitDelay_DSTATE_gf));

        /* Update for UnitDelay: '<S646>/Unit Delay' */
        TCPR_ac_DW.UnitDelay_DSTATE_gf = rtb_GreaterThan_l3;

        /* End of Outputs for SubSystem: '<S643>/EdgeRising' */

        /* Switch: '<S668>/Switch1' incorporates:
         *  Constant: '<S597>/Calib'
         *  Constant: '<S598>/Calib'
         *  Constant: '<S653>/Constant Value1'
         *  MinMax: '<S653>/MinMax3'
         *  Sum: '<S653>/Sum1'
         *  UnitDelay: '<S653>/Unit Delay'
         */
        if (rtb_GreaterThan_cu)
        {
            TCPR_ac_DW.UnitDelay_DSTATE_ov = 0.0F;
        }
        else
        {
            TCPR_ac_DW.UnitDelay_DSTATE_ov = fminf(KeTCPR_M_C4_ClampTorqRampStep
                + TCPR_ac_DW.UnitDelay_DSTATE_ov, KeTCPR_M_C4_ClmpTorq);
        }

        /* End of Switch: '<S668>/Switch1' */

        /* Sum: '<S653>/Sum2' incorporates:
         *  Abs: '<S652>/Abs4'
         *  Switch: '<S652>/Switch1'
         *  UnitDelay: '<S653>/Unit Delay'
         */
        rtb_Merge_cv = fabsf(rtb_TmpSignalConversionAtVeHSER_M_Clch4_) -
            TCPR_ac_DW.UnitDelay_DSTATE_ov;

        /* Outputs for Atomic SubSystem: '<S653>/Limiter' */
        /* Switch: '<S669>/Switch1' incorporates:
         *  RelationalOperator: '<S669>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_p < rtb_Merge_cv)
        {
            /* Switch: '<S643>/Switch1' */
            rtb_Merge_cv = rtb_TmpSignalConversionAtVeHSER_M_Clch_p;
        }

        /* End of Switch: '<S669>/Switch1' */

        /* Switch: '<S669>/Switch' incorporates:
         *  Constant: '<S653>/Constant Value3'
         *  RelationalOperator: '<S669>/Relational Operator1'
         */
        if (rtb_Merge_cv <= 0.0F)
        {
            /* Switch: '<S669>/Switch' */
            rtb_Merge_cv = 0.0F;
        }

        /* End of Switch: '<S669>/Switch' */
        /* End of Outputs for SubSystem: '<S653>/Limiter' */

        /* Outputs for Enabled SubSystem: '<S650>/Start_TcR_Ramp' incorporates:
         *  EnablePort: '<S657>/Enable'
         */
        if (rtb_GreaterThan_cu)
        {
            /* If: '<S657>/If1' incorporates:
             *  Abs: '<S643>/Abs'
             *  Constant: '<S605>/Calib'
             */
            if (KeTCPR_b_CntrlTcR_OvrdTo0_OnRst)
            {
                /* Outputs for IfAction SubSystem: '<S657>/TcRMaxOvrdToZero' incorporates:
                 *  ActionPort: '<S660>/Action Port'
                 */
                TCPR_ac_TcRMaxOvrdToZero(&TCPR_ac_B.Merge_i);

                /* End of Outputs for SubSystem: '<S657>/TcRMaxOvrdToZero' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S657>/TcRMaxNormal' incorporates:
                 *  ActionPort: '<S659>/Action Port'
                 */
                TCPR_ac_TcRMaxNormal(fabsf
                                     (rtb_TmpSignalConversionAtVeHSER_M_Clch4_),
                                     &TCPR_ac_B.Merge_i);

                /* End of Outputs for SubSystem: '<S657>/TcRMaxNormal' */
            }

            /* End of If: '<S657>/If1' */

            /* Outputs for Atomic SubSystem: '<S650>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S658>/Switch1' incorporates:
             *  Constant: '<S625>/Calib'
             *  UnitDelay: '<S658>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_j = KeTCPR_t_CntrlTcR_RmpHldffOnR;

            /* End of Outputs for SubSystem: '<S650>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S656>/Switch1' */
            rtb_Merge1_ps = TCPR_ac_B.Merge_i;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S650>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S658>/Switch1' incorporates:
             *  Constant: '<S594>/Calib'
             *  Constant: '<S658>/Constant Value4'
             *  MinMax: '<S658>/Maximum'
             *  Sum: '<S658>/Subtraction'
             *  UnitDelay: '<S658>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_j = fmaxf(TCPR_ac_DW.UnitDelay_DSTATE_j
                - HeTCPR_t_MedTED_dT, 0.0F);

            /* End of Outputs for SubSystem: '<S650>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S654>/Switch1' incorporates:
             *  Abs: '<S650>/Abs'
             *  Switch: '<S656>/Switch1'
             */
            if (rtb_AND_h1)
            {
                TCPR_ac_DW.UnitDelay1_DSTATE_b = fabsf
                    (rtb_TmpSignalConversionAtVeHTDR_M_Clch4_);
            }

            /* Outputs for Atomic SubSystem: '<S650>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S655>/Switch1' incorporates:
             *  Constant: '<S650>/Constant Value2'
             *  Constant: '<S650>/Constant Value3'
             *  Constant: '<S658>/Constant Value2'
             *  Logic: '<S650>/Logical'
             *  RelationalOperator: '<S650>/Comparison1'
             *  RelationalOperator: '<S658>/Greater  Than1'
             *  Switch: '<S656>/Switch1'
             *  UnitDelay: '<S658>/Unit Delay'
             */
            if ((TCPR_ac_DW.UnitDelay_DSTATE_j > 0.0F) && (TCPR_ac_B.Product >=
                    0.0F))
            {
                rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ = 0.0F;
            }
            else
            {
                rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ = TCPR_ac_B.Product;
            }

            /* End of Switch: '<S655>/Switch1' */
            /* End of Outputs for SubSystem: '<S650>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S656>/Switch1' incorporates:
             *  Sum: '<S650>/Sum1'
             */
            rtb_Merge1_ps = TCPR_ac_DW.UnitDelay1_DSTATE_b +
                rtb_TmpSignalConversionAtVeHTDR_M_Clch1_;
        }

        /* End of Outputs for SubSystem: '<S650>/Start_TcR_Ramp' */

        /* Outputs for Atomic SubSystem: '<S643>/Limiter' */
        /* Switch: '<S648>/Switch1' incorporates:
         *  RelationalOperator: '<S648>/Relational Operator'
         */
        if (rtb_Merge_cv >= rtb_Merge1_ps)
        {
            /* Switch: '<S643>/Switch1' */
            rtb_Merge_cv = rtb_Merge1_ps;
        }

        /* End of Switch: '<S648>/Switch1' */

        /* Switch: '<S648>/Switch' incorporates:
         *  Constant: '<S643>/Constant Value1'
         *  RelationalOperator: '<S648>/Relational Operator1'
         */
        if (rtb_Merge_cv > 0.0F)
        {
            /* Switch: '<S654>/Switch1' incorporates:
             *  UnitDelay: '<S643>/Unit Delay1'
             */
            TCPR_ac_DW.UnitDelay1_DSTATE_b = rtb_Merge_cv;
        }
        else
        {
            /* Switch: '<S654>/Switch1' incorporates:
             *  UnitDelay: '<S643>/Unit Delay1'
             */
            TCPR_ac_DW.UnitDelay1_DSTATE_b = 0.0F;
        }

        /* End of Switch: '<S648>/Switch' */
        /* End of Outputs for SubSystem: '<S643>/Limiter' */

        /* Outputs for Enabled SubSystem: '<S651>/Start_TcR_Ramp' incorporates:
         *  EnablePort: '<S664>/Enable'
         */
        if (rtb_GreaterThan_e)
        {
            /* If: '<S664>/If1' incorporates:
             *  Constant: '<S602>/Calib'
             */
            if (KeTCPR_b_CntrlTcRMin_OvrdTo0_OnRst)
            {
                /* Outputs for IfAction SubSystem: '<S664>/TcRMinOvrdToZero' incorporates:
                 *  ActionPort: '<S667>/Action Port'
                 */
                TCPR_ac_TcRMaxOvrdToZero(&TCPR_ac_B.Merge);

                /* End of Outputs for SubSystem: '<S664>/TcRMinOvrdToZero' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S664>/TcRMinNormal' incorporates:
                 *  ActionPort: '<S666>/Action Port'
                 */
                TCPR_ac_TcRMaxNormal(rtb_TmpSignalConversionAtVeHSER_M_Clch4_,
                                     &TCPR_ac_B.Merge);

                /* End of Outputs for SubSystem: '<S664>/TcRMinNormal' */
            }

            /* End of If: '<S664>/If1' */

            /* Outputs for Atomic SubSystem: '<S651>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S665>/Switch1' incorporates:
             *  Constant: '<S622>/Calib'
             *  UnitDelay: '<S665>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_l = KeTCPR_t_CntrlTcRMin_RmpHldffOnR;

            /* End of Outputs for SubSystem: '<S651>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S663>/Switch1' */
            rtb_Merge_cv = TCPR_ac_B.Merge;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S651>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S665>/Switch1' incorporates:
             *  Constant: '<S594>/Calib'
             *  Constant: '<S665>/Constant Value4'
             *  MinMax: '<S665>/Maximum'
             *  Sum: '<S665>/Subtraction'
             *  UnitDelay: '<S665>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_l = fmaxf(TCPR_ac_DW.UnitDelay_DSTATE_l
                - HeTCPR_t_MedTED_dT, 0.0F);

            /* End of Outputs for SubSystem: '<S651>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S662>/Switch1' incorporates:
             *  Gain: '<S651>/Gain'
             *  Switch: '<S663>/Switch1'
             */
            rtb_Merge_cv = -TCPR_ac_B.Product;

            /* Outputs for Atomic SubSystem: '<S651>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S662>/Switch1' incorporates:
             *  Constant: '<S651>/Constant Value3'
             *  Constant: '<S665>/Constant Value2'
             *  Gain: '<S651>/Gain'
             *  Logic: '<S651>/Logical'
             *  RelationalOperator: '<S651>/Comparison1'
             *  RelationalOperator: '<S665>/Greater  Than1'
             *  Switch: '<S663>/Switch1'
             *  UnitDelay: '<S665>/Unit Delay'
             */
            if ((TCPR_ac_DW.UnitDelay_DSTATE_l > 0.0F) && ((-TCPR_ac_B.Product) <=
                 0.0F))
            {
                /* Switch: '<S662>/Switch1' incorporates:
                 *  Constant: '<S651>/Constant Value2'
                 */
                rtb_Merge_cv = 0.0F;
            }

            /* End of Switch: '<S662>/Switch1' */
            /* End of Outputs for SubSystem: '<S651>/Timer Retrigger Reset Enabled' */

            /* Switch: '<S661>/Switch1' incorporates:
             *  Abs: '<S651>/Abs'
             *  Switch: '<S663>/Switch1'
             */
            if (rtb_AND_h1)
            {
                TCPR_ac_DW.UnitDelay2_DSTATE_j = fabsf
                    (rtb_TmpSignalConversionAtVeHTDR_M_Clch4_);
            }

            /* Switch: '<S663>/Switch1' incorporates:
             *  Sum: '<S651>/Sum1'
             */
            rtb_Merge_cv += TCPR_ac_DW.UnitDelay2_DSTATE_j;
        }

        /* End of Outputs for SubSystem: '<S651>/Start_TcR_Ramp' */

        /* Outputs for Atomic SubSystem: '<S643>/Limiter1' */
        /* Switch: '<S649>/Switch1' incorporates:
         *  Constant: '<S643>/Constant Value3'
         *  RelationalOperator: '<S649>/Relational Operator'
         */
        if (0.0F < rtb_Merge_cv)
        {
            /* Switch: '<S643>/Switch1' */
            rtb_Merge_cv = 0.0F;
        }

        /* End of Switch: '<S649>/Switch1' */

        /* Switch: '<S649>/Switch' incorporates:
         *  RelationalOperator: '<S649>/Relational Operator1'
         */
        if (rtb_Merge_cv > rtb_TmpSignalConversionAtVeHSER_M_Clch_h)
        {
            /* Switch: '<S661>/Switch1' incorporates:
             *  UnitDelay: '<S643>/Unit Delay2'
             */
            TCPR_ac_DW.UnitDelay2_DSTATE_j = rtb_Merge_cv;
        }
        else
        {
            /* Switch: '<S661>/Switch1' incorporates:
             *  UnitDelay: '<S643>/Unit Delay2'
             */
            TCPR_ac_DW.UnitDelay2_DSTATE_j =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_h;
        }

        /* End of Switch: '<S649>/Switch' */
        /* End of Outputs for SubSystem: '<S643>/Limiter1' */

        /* UnitDelay: '<S693>/Unit Delay' incorporates:
         *  Constant: '<S643>/Constant Value'
         *  Constant: '<S647>/Constant'
         *  Inport: '<Root>/VeHSER_e_Clch4_FillCmnd'
         *  Logic: '<S643>/Logical1'
         *  RelationalOperator: '<S643>/Comparison1'
         *  RelationalOperator: '<S643>/Comparison4'
         */
        rtb_AND_h1 = ((rtb_TmpSignalConversionAtVeHSER_M_Clch_p <= 0.1F) ||
                      (((uint32)tmpRead_3) == CeHSER_e_ClchFillToTchPt));

        /* Merge: '<S631>/Merge' incorporates:
         *  Constant: '<S595>/Calib'
         *  Product: '<S643>/Product'
         *  UnitDelay: '<S643>/Unit Delay1'
         */
        rtb_Merge_cv = KeTCPR_K_C4_Max_Scalar * TCPR_ac_DW.UnitDelay1_DSTATE_b;

        /* Switch: '<S643>/Switch1' incorporates:
         *  Constant: '<S593>/Calib'
         *  Logic: '<S643>/NOT'
         *  UnitDelay: '<S643>/Unit Delay1'
         *  UnitDelay: '<S643>/Unit Delay2'
         */
        if (!HeTCPR_b_Enb_C4_Asymetric_ClchLim)
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay1_DSTATE_b;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay2_DSTATE_j;
        }

        /* End of Switch: '<S643>/Switch1' */

        /* Merge: '<S631>/Merge1' incorporates:
         *  Constant: '<S596>/Calib'
         *  Product: '<S643>/Product1'
         */
        rtb_Merge1_ps = rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ *
            KeTCPR_K_C4_Min_Scalar;

        /* End of Outputs for SubSystem: '<S631>/Locked_TcR_Cntrl' */
    }
    else if (KeTCPR_b_CntrlTcR_OvrdTo0_OnRlsd)
    {
        /* Outputs for IfAction SubSystem: '<S631>/Rlsd_TcR_Ovrdn' incorporates:
         *  ActionPort: '<S645>/Action Port'
         */
        /* Merge: '<S631>/Merge' incorporates:
         *  Constant: '<S645>/Constant Value1'
         *  SignalConversion generated from: '<S645>/TcR_Max'
         */
        rtb_Merge_cv = 0.0F;

        /* Merge: '<S631>/Merge1' incorporates:
         *  Constant: '<S645>/Constant Value2'
         *  SignalConversion generated from: '<S645>/TcR_Min'
         */
        rtb_Merge1_ps = 0.0F;

        /* UnitDelay: '<S693>/Unit Delay' incorporates:
         *  Constant: '<S645>/TRUE Constant'
         *  SignalConversion generated from: '<S645>/ClchOffloadCnfrmd'
         */
        rtb_AND_h1 = true;

        /* End of Outputs for SubSystem: '<S631>/Rlsd_TcR_Ovrdn' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S631>/Rlsd_TcR_CntrlDflt' incorporates:
         *  ActionPort: '<S644>/Action Port'
         */
        /* Merge: '<S631>/Merge' incorporates:
         *  Gain: '<S670>/Gain'
         */
        rtb_Merge_cv = rtb_TmpSignalConversionAtVeHSER_M_Clch4_;

        /* Merge: '<S631>/Merge1' incorporates:
         *  Gain: '<S671>/Gain'
         */
        rtb_Merge1_ps = rtb_TmpSignalConversionAtVeHSER_M_Clch4_;

        /* UnitDelay: '<S693>/Unit Delay' incorporates:
         *  Constant: '<S644>/TRUE Constant'
         *  SignalConversion generated from: '<S644>/ClchOffloadCnfrmd'
         */
        rtb_AND_h1 = true;

        /* End of Outputs for SubSystem: '<S631>/Rlsd_TcR_CntrlDflt' */
    }

#elif !Rte_SysCon_Variant_TCPR_1 && Rte_SysCon_Variant_TCPR_9

    /* UnitDelay: '<S693>/Unit Delay' incorporates:
     *  Constant: '<S3>/TRUE Constant4'
     *  SignalConversion generated from: '<S3>/VariantSource10'
     */
    rtb_AND_h1 = true;

#endif

    /* End of If: '<S637>/If2' */
    /* End of Outputs for SubSystem: '<S629>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S735>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S735>/EdgeFalling2' */
    /* End of Outputs for SubSystem: '<S735>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S735>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S735>/Signal Latch On With Reset1' */

    /* Logic: '<S3>/Logical' */
#if Rte_SysCon_Variant_TCPR_9

    /* VariantMerge generated from: '<S3>/VariantSource4' */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_a0 = (((rtb_UnitDelay_dt &&
        rtb_AND_a3) && rtb_AND_ly) && rtb_AND_h1);

#endif

    /* End of Logic: '<S3>/Logical' */

    /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
     *  DataTypeConversion: '<S15>/Data Type Conversion'
     *  Inport: '<Root>/VeHSER_e_VTVR_LeadState'
     *  Selector: '<S14>/Selector'
     *  Selector: '<S15>/Selector'
     */
#if Rte_SysCon_Variant_TCPR_1 || Rte_SysCon_Variant_TCPR_3 || Rte_SysCon_Variant_TCPR_5 || Rte_SysCon_Variant_TCPR_7

    /* Outputs for Atomic SubSystem: '<S15>/Bit Selector4' */
    /* Outputs for Atomic SubSystem: '<S15>/Bit Selector3' */
    /* Outputs for Atomic SubSystem: '<S15>/Bit Selector2' */
    /* Outputs for Atomic SubSystem: '<S15>/Bit Selector1' */
    /* Outputs for Atomic SubSystem: '<S14>/Bit Selector4' */
    /* Outputs for Atomic SubSystem: '<S14>/Bit Selector3' */
    /* Outputs for Atomic SubSystem: '<S14>/Bit Selector2' */
    /* Outputs for Atomic SubSystem: '<S14>/Bit Selector1' */
    /* S-Function (sfix_bitop): '<S21>/Bitwise Logical Operator' incorporates:
     *  Constant: '<S25>/Calib'
     *  S-Function (sfix_bitop): '<S22>/Bitwise Logical Operator'
     *  S-Function (sfix_bitop): '<S23>/Bitwise Logical Operator'
     *  S-Function (sfix_bitop): '<S24>/Bitwise Logical Operator'
     *  SignalConversion generated from: '<S1>/VeHSER_e_OITR_LeadState'
     */
    rtb_VariantMerge_For_Variant_Source_Va_0 = (sint32)
        HaTCPR_i_OITR_ClchLckdCntrl[(rtb_TmpSignalConversionAtVeHSER_e_OITR_L)];

    /* RelationalOperator: '<S21>/Greater  Than' incorporates:
     *  Constant: '<S21>/Constant Value'
     *  S-Function (sfix_bitop): '<S21>/Bitwise Logical Operator'
     */
    rtb_GreaterThan_i = ((rtb_VariantMerge_For_Variant_Source_Va_0 & 1) > 0);

    /* RelationalOperator: '<S22>/Greater  Than' incorporates:
     *  Constant: '<S22>/Constant Value'
     *  S-Function (sfix_bitop): '<S22>/Bitwise Logical Operator'
     */
    rtb_GreaterThan_d = ((rtb_VariantMerge_For_Variant_Source_Va_0 & 2) > 0);

    /* RelationalOperator: '<S23>/Greater  Than' incorporates:
     *  Constant: '<S23>/Constant Value'
     *  S-Function (sfix_bitop): '<S23>/Bitwise Logical Operator'
     */
    rtb_GreaterThan_o0 = ((rtb_VariantMerge_For_Variant_Source_Va_0 & 4) > 0);

    /* RelationalOperator: '<S24>/Greater  Than' incorporates:
     *  Constant: '<S24>/Constant Value'
     *  S-Function (sfix_bitop): '<S24>/Bitwise Logical Operator'
     */
    rtb_GreaterThan_h5 = ((rtb_VariantMerge_For_Variant_Source_Va_0 & 8) > 0);
    (void)Rte_Read_VeHSER_e_VTVR_LeadState_Value(&tmpRead);

    /* RelationalOperator: '<S26>/Greater  Than' incorporates:
     *  Constant: '<S26>/Constant Value'
     *  Constant: '<S30>/Calib'
     *  Inport: '<Root>/VeHSER_e_VTVR_LeadState'
     *  S-Function (sfix_bitop): '<S26>/Bitwise Logical Operator'
     */
    rtb_GreaterThan_f = ((((sint32)HaTCPR_i_VTVR_ClchLckdCntrl[(uint16)tmpRead])
                          & 1) > 0);

    /* S-Function (sfix_bitop): '<S27>/Bitwise Logical Operator' incorporates:
     *  Constant: '<S30>/Calib'
     *  Inport: '<Root>/VeHSER_e_VTVR_LeadState'
     *  S-Function (sfix_bitop): '<S28>/Bitwise Logical Operator'
     *  S-Function (sfix_bitop): '<S29>/Bitwise Logical Operator'
     */
    rtb_VariantMerge_For_Variant_Source_Va_0 = (sint32)
        HaTCPR_i_VTVR_ClchLckdCntrl[(uint16)tmpRead];

    /* RelationalOperator: '<S27>/Greater  Than' incorporates:
     *  Constant: '<S27>/Constant Value'
     *  S-Function (sfix_bitop): '<S27>/Bitwise Logical Operator'
     */
    rtb_GreaterThan_c = ((rtb_VariantMerge_For_Variant_Source_Va_0 & 2) > 0);

    /* RelationalOperator: '<S28>/Greater  Than' incorporates:
     *  Constant: '<S28>/Constant Value'
     *  S-Function (sfix_bitop): '<S28>/Bitwise Logical Operator'
     */
    rtb_GreaterThan_hr = ((rtb_VariantMerge_For_Variant_Source_Va_0 & 4) > 0);

    /* RelationalOperator: '<S29>/Greater  Than' incorporates:
     *  Constant: '<S29>/Constant Value'
     *  S-Function (sfix_bitop): '<S29>/Bitwise Logical Operator'
     */
    rtb_GreaterThan_g = ((rtb_VariantMerge_For_Variant_Source_Va_0 & 8) > 0);

    /* End of Outputs for SubSystem: '<S15>/Bit Selector1' */
    /* End of Outputs for SubSystem: '<S15>/Bit Selector2' */
    /* End of Outputs for SubSystem: '<S15>/Bit Selector3' */
    /* End of Outputs for SubSystem: '<S15>/Bit Selector4' */
#endif

    /* End of DataTypeConversion: '<S14>/Data Type Conversion' */
    /* End of Outputs for SubSystem: '<S14>/Bit Selector1' */
    /* End of Outputs for SubSystem: '<S14>/Bit Selector2' */
    /* End of Outputs for SubSystem: '<S14>/Bit Selector3' */
    /* End of Outputs for SubSystem: '<S14>/Bit Selector4' */

    /* Outputs for Atomic SubSystem: '<S104>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S104>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S103>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S103>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S75>/Signal Latch On With Reset4' */
    /* Outputs for Atomic SubSystem: '<S75>/EdgeFalling2' */
    /* Outputs for Atomic SubSystem: '<S75>/Signal Latch On With Reset2' */
    /* Outputs for Atomic SubSystem: '<S75>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S75>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S75>/Signal Latch On With Reset3' */
    /* If: '<S75>/If' incorporates:
     *  Constant: '<S34>/Calib'
     *  Constant: '<S39>/Calib'
     *  Constant: '<S40>/Calib'
     *  Constant: '<S41>/Calib'
     *  Constant: '<S42>/Calib'
     *  Constant: '<S46>/Calib'
     *  Constant: '<S48>/Calib'
     *  Constant: '<S50>/Calib'
     *  Constant: '<S64>/Calib'
     *  Constant: '<S65>/Calib'
     *  DataTypeConversion: '<S75>/Data Type Conversion'
     *  DataTypeConversion: '<S75>/Data Type Conversion1'
     *  DataTypeConversion: '<S75>/Data Type Conversion2'
     *  Gain: '<S107>/Gain'
     *  Gain: '<S108>/Gain'
     *  Gain: '<S109>/Gain'
     *  Gain: '<S78>/Gain'
     *  If: '<S103>/If1'
     *  If: '<S104>/If1'
     *  If: '<S105>/If1'
     *  Logic: '<S104>/Logical'
     *  Logic: '<S75>/Logical1'
     *  Logic: '<S75>/Logical2'
     *  Logic: '<S75>/Logical3'
     *  Logic: '<S75>/Logical6'
     *  Logic: '<S75>/Logical7'
     *  MinMax: '<S75>/MinMax1'
     *  MinMax: '<S76>/Maximum'
     *  Product: '<S76>/Multiplication'
     *  Product: '<S9>/Product'
     *  Product: '<S9>/Product1'
     *  RelationalOperator: '<S103>/Comparison1'
     *  RelationalOperator: '<S104>/Comparison1'
     *  RelationalOperator: '<S110>/Comparison5'
     *  RelationalOperator: '<S75>/Comparison1'
     *  Selector: '<S75>/Selector'
     *  Selector: '<S75>/Selector1'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_C1Stat'
     *  Sum: '<S75>/Sum3'
     *  Sum: '<S76>/Summation'
     *  Switch: '<S75>/Switch2'
     *  Switch: '<S76>/Switch'
     *  UnitDelay: '<S75>/Unit Delay1'
     *  UnitDelay: '<S90>/Unit Delay'
     *  UnitDelay: '<S91>/Unit Delay'
     */
#if Rte_SysCon_Variant_TCPR_3

    if (KeTCPR_b_EnblCorrectedC1Trq)
    {
        /* Merge: '<S275>/Merge' incorporates:
         *  Constant: '<S56>/Calib'
         *  Constant: '<S57>/Calib'
         *  Constant: '<S60>/Calib'
         *  Constant: '<S62>/Calib'
         *  Constant: '<S76>/Constant Value'
         *  Sum: '<S76>/Sum1'
         */
        rtb_TmpSignalConversionAtVeHTDR_M_Clch4_ = ((fmaxf
            (KeTCPR_p_C1Press_EngOff - KeTCPR_p_C1_RetSpringPress, 0.0F) *
            KeTCPR_k_C1_StaticFrictionCoef) * KeTCPR_h_C1_PresToTorqLumpedCal) -
            rtb_TmpSignalConversionAtVeCSDR_M_Correc;
    }
    else
    {
        /* Merge: '<S275>/Merge' incorporates:
         *  Constant: '<S56>/Calib'
         *  Constant: '<S57>/Calib'
         *  Constant: '<S60>/Calib'
         *  Constant: '<S62>/Calib'
         *  Constant: '<S76>/Constant Value'
         */
        rtb_TmpSignalConversionAtVeHTDR_M_Clch4_ = (fmaxf
            (KeTCPR_p_C1Press_EngOff - KeTCPR_p_C1_RetSpringPress, 0.0F) *
            KeTCPR_k_C1_StaticFrictionCoef) * KeTCPR_h_C1_PresToTorqLumpedCal;
    }

    /* VariantMerge generated from: '<S3>/VariantSource22' incorporates:
     *  Constant: '<S35>/Calib'
     *  Constant: '<S48>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_jq = KeTCPR_K_C1_Max_Scalar *
        rtb_TmpSignalConversionAtVeHTDR_M_Clch4_;

    /* VariantMerge generated from: '<S3>/VariantSource23' incorporates:
     *  Constant: '<S36>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_h4 =
        rtb_TmpSignalConversionAtVeHTDR_M_Clch4_ * KeTCPR_K_C1_Min_Scalar;
    rtb_GreaterThan_l3 = KaTCPR_b_C1_TRNRStsEnaAdjEstTorq
        [(rtb_TmpSignalConversionAtVeTRNR_e_C1Stat)];

    /* Logic: '<S90>/OR1' incorporates:
     *  Constant: '<S33>/Calib'
     *  Constant: '<S34>/Calib'
     *  Logic: '<S90>/OR'
     *  SignalConversion generated from: '<S1>/VeHSER_e_OITR_LeadState'
     *  SignalConversion generated from: '<S1>/VeHSER_e_OITR_PredLeadState'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_C1Stat'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    TCPR_ac_DW.UnitDelay_DSTATE_df = (((KaTCPR_b_C1_HSERStCmpForPredReserve
        [(rtb_TmpSignalConversionAtVeHSER_e_OITR_P << 4U) +
        rtb_TmpSignalConversionAtVeHSER_e_OITR_L]) && rtb_GreaterThan_l3) ||
        (rtb_GreaterThan_l3 && (TCPR_ac_DW.UnitDelay_DSTATE_df)));

    /* Logic: '<S81>/AND' incorporates:
     *  Logic: '<S81>/OR1'
     *  UnitDelay: '<S81>/Unit Delay'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    rtb_UnitDelay_dt = ((!TCPR_ac_DW.UnitDelay_DSTATE_df) &&
                        (TCPR_ac_DW.UnitDelay_DSTATE_ea));

    /* Update for UnitDelay: '<S81>/Unit Delay' incorporates:
     *  UnitDelay: '<S90>/Unit Delay'
     */
    TCPR_ac_DW.UnitDelay_DSTATE_ea = TCPR_ac_DW.UnitDelay_DSTATE_df;

    /* Logic: '<S82>/AND' incorporates:
     *  Logic: '<S82>/OR1'
     *  UnitDelay: '<S75>/Unit Delay2'
     *  UnitDelay: '<S82>/Unit Delay'
     */
    rtb_AND_ly = ((!TCPR_ac_DW.UnitDelay2_DSTATE_gg) &&
                  (TCPR_ac_DW.UnitDelay_DSTATE_cd));

    /* Update for UnitDelay: '<S82>/Unit Delay' incorporates:
     *  UnitDelay: '<S75>/Unit Delay2'
     */
    TCPR_ac_DW.UnitDelay_DSTATE_cd = TCPR_ac_DW.UnitDelay2_DSTATE_gg;

    /* Logic: '<S91>/NOT' incorporates:
     *  Constant: '<S63>/Calib'
     *  UnitDelay: '<S75>/Unit Delay1'
     */
    rtb_GreaterThan_l3 = ((TCPR_ac_DW.UnitDelay1_DSTATE -
                           rtb_TmpSignalConversionAtVeHCCR_M_Clch1_) >
                          KeTCPR_t_C1_PredClchOffstCnvrgTqThrshld);

    /* Logic: '<S89>/OR1' incorporates:
     *  Logic: '<S89>/NOT'
     *  Logic: '<S89>/OR'
     *  UnitDelay: '<S89>/Unit Delay'
     */
    TCPR_ac_DW.UnitDelay_DSTATE_hsv = (rtb_UnitDelay_dt || (((!rtb_AND_ly) &&
        rtb_GreaterThan_l3) && (TCPR_ac_DW.UnitDelay_DSTATE_hsv)));

    /* Logic: '<S83>/AND' incorporates:
     *  Logic: '<S83>/OR1'
     *  UnitDelay: '<S83>/Unit Delay'
     */
    rtb_UnitDelay_dt = ((!TCPR_ac_DW.UnitDelay_DSTATE_hsv) &&
                        (TCPR_ac_DW.UnitDelay_DSTATE_j4));

    /* Update for UnitDelay: '<S83>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_j4 = TCPR_ac_DW.UnitDelay_DSTATE_hsv;

    /* Logic: '<S91>/OR1' incorporates:
     *  Logic: '<S91>/OR'
     *  UnitDelay: '<S91>/Unit Delay'
     */
    TCPR_ac_DW.UnitDelay_DSTATE_dl = ((rtb_UnitDelay_dt && rtb_GreaterThan_l3) ||
        (rtb_GreaterThan_l3 && (TCPR_ac_DW.UnitDelay_DSTATE_dl)));
    rtPrevAction = TCPR_ac_DW.If_ActiveSubsystem;
    if (TCPR_ac_DW.UnitDelay_DSTATE_df)
    {
        TCPR_ac_DW.If_ActiveSubsystem = 0;
    }
    else if (TCPR_ac_DW.UnitDelay_DSTATE_hsv)
    {
        TCPR_ac_DW.If_ActiveSubsystem = 1;
    }
    else if (TCPR_ac_DW.UnitDelay_DSTATE_dl)
    {
        TCPR_ac_DW.If_ActiveSubsystem = 2;
    }
    else
    {
        TCPR_ac_DW.If_ActiveSubsystem = 3;
    }

    switch (TCPR_ac_DW.If_ActiveSubsystem)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S75>/PassThroughOffsetTorque' incorporates:
         *  ActionPort: '<S85>/Action Port'
         */
        TCPR_ac_PassThroughOffsetTorque(rtb_TmpSignalConversionAtVeHCCR_M_Clch1_,
            KeTCPR_M_C1_PredClchOffst, rtb_Switch,
            &rtb_TmpSignalConversionAtVeHTDR_M_Clch4_);

        /* End of Outputs for SubSystem: '<S75>/PassThroughOffsetTorque' */
        break;

      case 1:
        if (TCPR_ac_DW.If_ActiveSubsystem != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S75>/HoldOffsetTorque' incorporates:
             *  ActionPort: '<S84>/Action Port'
             */
            /* SystemReset for If: '<S75>/If' */
            TCPR_ac_HoldOffsetTorque_Reset(&TCPR_ac_DW.HoldOffsetTorque);

            /* End of SystemReset for SubSystem: '<S75>/HoldOffsetTorque' */
        }

        /* Outputs for IfAction SubSystem: '<S75>/HoldOffsetTorque' incorporates:
         *  ActionPort: '<S84>/Action Port'
         */
        TCPR_ac_HoldOffsetTorque(TCPR_ac_DW.UnitDelay1_DSTATE,
            KeTCPR_t_C1_PredClchOffstHldTm,
            &rtb_TmpSignalConversionAtVeHTDR_M_Clch4_,
            &TCPR_ac_B.HoldOffsetTorque, &TCPR_ac_DW.HoldOffsetTorque);

        /* End of Outputs for SubSystem: '<S75>/HoldOffsetTorque' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S75>/RampOffsetTorque' incorporates:
         *  ActionPort: '<S87>/Action Port'
         */
        TCPR_ac_RampOffsetTorque(TCPR_ac_DW.UnitDelay1_DSTATE,
            KeTCPR_t_C1_PredClchOffstRmpRt,
            &rtb_TmpSignalConversionAtVeHTDR_M_Clch4_);

        /* End of Outputs for SubSystem: '<S75>/RampOffsetTorque' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S75>/PassThroughTorque' incorporates:
         *  ActionPort: '<S86>/Action Port'
         */
        TCPR_ac_PassThroughTorque(rtb_TmpSignalConversionAtVeHCCR_M_Clch1_,
            &rtb_TmpSignalConversionAtVeHTDR_M_Clch4_);

        /* End of Outputs for SubSystem: '<S75>/PassThroughTorque' */
        break;
    }

    TCPR_ac_DW.UnitDelay1_DSTATE = fmaxf
        (rtb_TmpSignalConversionAtVeHCCR_M_Clch1_,
         rtb_TmpSignalConversionAtVeHTDR_M_Clch4_);
    if (KeTCPR_b_C1_AdjEstTorqAllwd)
    {
        /* Switch: '<S75>/Switch2' */
        VeTCPC_M_C1PredMaxCap = TCPR_ac_DW.UnitDelay1_DSTATE;
    }
    else
    {
        /* Switch: '<S75>/Switch2' */
        VeTCPC_M_C1PredMaxCap = rtb_Switch;
    }

    /* VariantMerge generated from: '<S3>/VariantSource13' incorporates:
     *  Constant: '<S39>/Calib'
     *  Constant: '<S40>/Calib'
     *  Constant: '<S64>/Calib'
     *  Constant: '<S65>/Calib'
     *  UnitDelay: '<S75>/Unit Delay1'
     *  UnitDelay: '<S90>/Unit Delay'
     *  UnitDelay: '<S91>/Unit Delay'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_l = rtb_Merge1;

    /* RelationalOperator: '<S103>/Comparison1' */
    rtb_GreaterThan_l3 = (rtb_TmpSignalConversionAtVeHSER_M_Clc_bu >=
                          VeTCPC_M_C1LeadMaxCap);

    /* Logic: '<S141>/AND' incorporates:
     *  Logic: '<S141>/OR1'
     *  UnitDelay: '<S141>/Unit Delay'
     */
    rtb_UnitDelay_dt = (rtb_GreaterThan_i && (!TCPR_ac_DW.UnitDelay_DSTATE_o0));

    /* Update for UnitDelay: '<S141>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_o0 = rtb_GreaterThan_i;

    /* Logic: '<S142>/AND' incorporates:
     *  Logic: '<S142>/OR1'
     *  UnitDelay: '<S142>/Unit Delay'
     */
    rtb_AND_ly = (rtb_GreaterThan_l3 && (!TCPR_ac_DW.UnitDelay_DSTATE_gz));

    /* Update for UnitDelay: '<S142>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_gz = rtb_GreaterThan_l3;

    /* RelationalOperator: '<S110>/Comparison5' incorporates:
     *  UnitDelay: '<S110>/Unit Delay'
     */
    rtb_GreaterThan_l3 = (rtb_AND_aa != TCPR_ac_DW.UnitDelay_DSTATE_bf);
    if (rtb_GreaterThan_i)
    {
        /* Outputs for IfAction SubSystem: '<S103>/Lcked_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S143>/Action Port'
         */
        /* RelationalOperator: '<S143>/Relational Operator' incorporates:
         *  Constant: '<S143>/Constant Value1'
         */
        rtb_AND_a3 = (rtb_TmpSignalConversionAtVeHSER_M_Clch_j < 0.0F);

        /* Outputs for Atomic SubSystem: '<S143>/EdgeRising' */
        /* Logic: '<S146>/AND' incorporates:
         *  Logic: '<S146>/OR1'
         *  UnitDelay: '<S146>/Unit Delay'
         */
        rtb_GreaterThan_cu = (rtb_AND_a3 && (!TCPR_ac_DW.UnitDelay_DSTATE_l3));

        /* Update for UnitDelay: '<S146>/Unit Delay' */
        TCPR_ac_DW.UnitDelay_DSTATE_l3 = rtb_AND_a3;

        /* End of Outputs for SubSystem: '<S143>/EdgeRising' */

        /* Switch: '<S143>/Switch' */
        if (rtb_AND_aa)
        {
            rtb_TmpSignalConversionAtVeHSER_M_C1_Tor = rtb_Abs2_o;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHSER_M_C1_Tor = VeTCPC_M_C1LeadMaxCap;
        }

        /* End of Switch: '<S143>/Switch' */

        /* Sum: '<S147>/Sum2' incorporates:
         *  Constant: '<S38>/Calib'
         */
        rtb_TmpSignalConversionAtVeHTDR_M_Clch4_ =
            rtb_TmpSignalConversionAtVeHSER_M_C1_Tor - KeTCPR_M_C1_ClmpTorq;

        /* Outputs for Atomic SubSystem: '<S147>/Limiter' */
        /* Switch: '<S152>/Switch1' incorporates:
         *  RelationalOperator: '<S152>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clc_bu <
                rtb_TmpSignalConversionAtVeHTDR_M_Clch4_)
        {
            /* Switch: '<S143>/Switch1' */
            rtb_TmpSignalConversionAtVeHTDR_M_Clch4_ =
                rtb_TmpSignalConversionAtVeHSER_M_Clc_bu;
        }

        /* End of Switch: '<S152>/Switch1' */

        /* Switch: '<S152>/Switch' incorporates:
         *  Constant: '<S147>/Constant Value3'
         *  RelationalOperator: '<S152>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeHTDR_M_Clch4_ <= 0.0F)
        {
            /* Switch: '<S152>/Switch' */
            rtb_TmpSignalConversionAtVeHTDR_M_Clch4_ = 0.0F;
        }

        /* End of Switch: '<S152>/Switch' */
        /* End of Outputs for SubSystem: '<S147>/Limiter' */

        /* If: '<S150>/If1' incorporates:
         *  Constant: '<S45>/Calib'
         *  Logic: '<S150>/Logical Operator'
         *  Logic: '<S150>/Logical Operator1'
         *  Logic: '<S150>/Logical Operator2'
         *  UnitDelay: '<S143>/Unit Delay2'
         */
        if ((((KeTCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_UnitDelay_dt) ||
                rtb_GreaterThan_l3) || rtb_AND_ly)
        {
            /* Outputs for IfAction SubSystem: '<S150>/RstPth_Crt_TcRMax' incorporates:
             *  ActionPort: '<S155>/Action Port'
             */
            TCPR_ac_RstPth_Crt_TcRMax(TCPR_ac_B.Product1_j, rtb_Abs2_o,
                &rtb_TmpSignalConversionAtVeHSER_M_C1_Tor);

            /* End of Outputs for SubSystem: '<S150>/RstPth_Crt_TcRMax' */
        }
        else if ((!KeTCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_UnitDelay_dt)
        {
            /* Outputs for IfAction SubSystem: '<S150>/RstHld_Crt_TcRMax' incorporates:
             *  ActionPort: '<S154>/Action Port'
             */
            TCPR_ac_RstHld_Crt_TcRMax(rtb_Abs2_o,
                &rtb_TmpSignalConversionAtVeHSER_M_C1_Tor);

            /* End of Outputs for SubSystem: '<S150>/RstHld_Crt_TcRMax' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S150>/Achived_LdRamp' incorporates:
             *  ActionPort: '<S153>/Action Port'
             */
            TCPR_ac_Achived_LdRamp(TCPR_ac_B.Product_p,
                                   TCPR_ac_DW.UnitDelay2_DSTATE_a,
                                   &rtb_TmpSignalConversionAtVeHSER_M_C1_Tor);

            /* End of Outputs for SubSystem: '<S150>/Achived_LdRamp' */
        }

        /* End of If: '<S150>/If1' */

        /* Outputs for Atomic SubSystem: '<S143>/Limiter1' */
        /* Switch: '<S148>/Switch1' incorporates:
         *  RelationalOperator: '<S148>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHTDR_M_Clch4_ >=
                rtb_TmpSignalConversionAtVeHSER_M_C1_Tor)
        {
            /* Switch: '<S143>/Switch1' */
            rtb_TmpSignalConversionAtVeHTDR_M_Clch4_ =
                rtb_TmpSignalConversionAtVeHSER_M_C1_Tor;
        }

        /* End of Switch: '<S148>/Switch1' */

        /* Switch: '<S148>/Switch' incorporates:
         *  Constant: '<S143>/Constant Value2'
         *  RelationalOperator: '<S148>/Relational Operator1'
         *  UnitDelay: '<S143>/Unit Delay2'
         */
        if (rtb_TmpSignalConversionAtVeHTDR_M_Clch4_ > 0.0F)
        {
            TCPR_ac_DW.UnitDelay2_DSTATE_a =
                rtb_TmpSignalConversionAtVeHTDR_M_Clch4_;
        }
        else
        {
            TCPR_ac_DW.UnitDelay2_DSTATE_a = 0.0F;
        }

        /* End of Switch: '<S148>/Switch' */
        /* End of Outputs for SubSystem: '<S143>/Limiter1' */

        /* If: '<S151>/If1' incorporates:
         *  Constant: '<S43>/Calib'
         *  Gain: '<S151>/Gain'
         *  Logic: '<S151>/Logical Operator'
         *  Logic: '<S151>/Logical Operator1'
         *  Logic: '<S151>/Logical Operator2'
         *  UnitDelay: '<S143>/Unit Delay1'
         */
        if ((((KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_GreaterThan_cu) ||
                rtb_GreaterThan_l3) || rtb_AND_ly)
        {
            /* Outputs for IfAction SubSystem: '<S151>/RstPth_Crt_TcRMax' incorporates:
             *  ActionPort: '<S158>/Action Port'
             */
            TCPR_ac_RstPth_Crt_TcRMax_b(TCPR_ac_B.Product1_j, rtb_Merge1,
                &rtb_TmpSignalConversionAtVeHTDR_M_Clch4_);

            /* End of Outputs for SubSystem: '<S151>/RstPth_Crt_TcRMax' */
        }
        else if ((!KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_GreaterThan_cu)
        {
            /* Outputs for IfAction SubSystem: '<S151>/RstHld_Crt_TcRMax' incorporates:
             *  ActionPort: '<S157>/Action Port'
             */
            TCPR_ac_RstHld_Crt_TcRMax_d(rtb_Merge1,
                &rtb_TmpSignalConversionAtVeHTDR_M_Clch4_);

            /* End of Outputs for SubSystem: '<S151>/RstHld_Crt_TcRMax' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S151>/Achived_LdRamp' incorporates:
             *  ActionPort: '<S156>/Action Port'
             */
            TCPR_ac_Achived_LdRamp_o(-TCPR_ac_B.Product_p,
                TCPR_ac_DW.UnitDelay1_DSTATE_lp,
                &rtb_TmpSignalConversionAtVeHTDR_M_Clch4_);

            /* End of Outputs for SubSystem: '<S151>/Achived_LdRamp' */
        }

        /* End of If: '<S151>/If1' */

        /* Outputs for Atomic SubSystem: '<S143>/Limiter2' */
        /* Switch: '<S149>/Switch1' incorporates:
         *  Constant: '<S143>/Constant Value3'
         *  RelationalOperator: '<S149>/Relational Operator'
         */
        if (0.0F < rtb_TmpSignalConversionAtVeHTDR_M_Clch4_)
        {
            /* Switch: '<S143>/Switch1' */
            rtb_TmpSignalConversionAtVeHTDR_M_Clch4_ = 0.0F;
        }

        /* End of Switch: '<S149>/Switch1' */

        /* Switch: '<S149>/Switch' incorporates:
         *  RelationalOperator: '<S149>/Relational Operator1'
         *  UnitDelay: '<S143>/Unit Delay1'
         */
        if (rtb_TmpSignalConversionAtVeHTDR_M_Clch4_ >
                rtb_TmpSignalConversionAtVeHSER_M_Clch_j)
        {
            TCPR_ac_DW.UnitDelay1_DSTATE_lp =
                rtb_TmpSignalConversionAtVeHTDR_M_Clch4_;
        }
        else
        {
            TCPR_ac_DW.UnitDelay1_DSTATE_lp =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_j;
        }

        /* End of Switch: '<S149>/Switch' */
        /* End of Outputs for SubSystem: '<S143>/Limiter2' */

        /* Merge: '<S103>/Merge' incorporates:
         *  Constant: '<S35>/Calib'
         *  Product: '<S143>/Product'
         *  UnitDelay: '<S143>/Unit Delay2'
         */
        rtb_TmpSignalConversionAtVeHSER_M_C1_Tor = KeTCPR_K_C1_Max_Scalar *
            TCPR_ac_DW.UnitDelay2_DSTATE_a;

        /* Switch: '<S143>/Switch1' incorporates:
         *  Constant: '<S31>/Calib'
         *  Logic: '<S143>/NOT'
         *  UnitDelay: '<S143>/Unit Delay1'
         *  UnitDelay: '<S143>/Unit Delay2'
         */
        if (!HeTCPR_b_Enb_C1_Asymetric_ClchLim)
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay2_DSTATE_a;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay1_DSTATE_lp;
        }

        /* End of Switch: '<S143>/Switch1' */

        /* VariantMerge generated from: '<S3>/VariantSource2' incorporates:
         *  Constant: '<S36>/Calib'
         *  Product: '<S143>/Product1'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_hl =
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ * KeTCPR_K_C1_Min_Scalar;

        /* End of Outputs for SubSystem: '<S103>/Lcked_Ld_TcR_Cntrl' */
    }
    else if (KeTCPR_b_CntrlTcR_OvrdTo0_OnRlsd)
    {
        /* Outputs for IfAction SubSystem: '<S103>/Rlsd_Ld_TcR_Ovrd' incorporates:
         *  ActionPort: '<S145>/Action Port'
         */
        /* Merge: '<S103>/Merge' incorporates:
         *  Constant: '<S145>/Constant Value1'
         *  SignalConversion generated from: '<S145>/LeadTcR_Max'
         */
        rtb_TmpSignalConversionAtVeHSER_M_C1_Tor = 0.0F;

        /* VariantMerge generated from: '<S3>/VariantSource2' incorporates:
         *  Constant: '<S145>/Constant Value2'
         *  SignalConversion generated from: '<S145>/LeadTcR_Min'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_hl = 0.0F;

        /* End of Outputs for SubSystem: '<S103>/Rlsd_Ld_TcR_Ovrd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S103>/Rlsd_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S144>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource2' incorporates:
         *  Gain: '<S160>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_hl =
            rtb_TmpSignalConversionAtVeHSER_M_C1_Tor;

        /* End of Outputs for SubSystem: '<S103>/Rlsd_Ld_TcR_Cntrl' */
    }

    /* RelationalOperator: '<S104>/Comparison1' incorporates:
     *  Constant: '<S46>/Calib'
     */
    rtb_AND_a3 = (rtb_TmpSignalConversionAtVeHSER_M_Clc_bu >=
                  VeTCPC_M_C1LeadMaxCap);

    /* Logic: '<S161>/AND' incorporates:
     *  Logic: '<S161>/OR1'
     *  UnitDelay: '<S161>/Unit Delay'
     */
    rtb_UnitDelay_dt = (rtb_GreaterThan_f && (!TCPR_ac_DW.UnitDelay_DSTATE_gpz));

    /* Update for UnitDelay: '<S161>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_gpz = rtb_GreaterThan_f;

    /* Logic: '<S162>/AND' incorporates:
     *  Logic: '<S162>/OR1'
     *  UnitDelay: '<S162>/Unit Delay'
     */
    rtb_AND_ly = (rtb_AND_a3 && (!TCPR_ac_DW.UnitDelay_DSTATE_bj));

    /* Update for UnitDelay: '<S162>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_bj = rtb_AND_a3;
    if (rtb_GreaterThan_f)
    {
        /* Outputs for IfAction SubSystem: '<S104>/Lcked_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S163>/Action Port'
         */
        /* RelationalOperator: '<S163>/Relational Operator' incorporates:
         *  Constant: '<S163>/Constant Value1'
         */
        rtb_GreaterThan_f = (rtb_TmpSignalConversionAtVeHSER_M_Clch_j < 0.0F);

        /* Outputs for Atomic SubSystem: '<S163>/EdgeRising' */
        /* Logic: '<S167>/AND' incorporates:
         *  Logic: '<S167>/OR1'
         *  UnitDelay: '<S167>/Unit Delay'
         */
        rtb_AND_a3 = (rtb_GreaterThan_f && (!TCPR_ac_DW.UnitDelay_DSTATE_jr));

        /* Update for UnitDelay: '<S167>/Unit Delay' */
        TCPR_ac_DW.UnitDelay_DSTATE_jr = rtb_GreaterThan_f;

        /* End of Outputs for SubSystem: '<S163>/EdgeRising' */

        /* Sum: '<S168>/Sum2' incorporates:
         *  Constant: '<S38>/Calib'
         */
        rtb_TmpSignalConversionAtVeHSER_M_C1_Opt = VeTCPC_M_C1LeadMaxCap -
            KeTCPR_M_C1_ClmpTorq;

        /* Outputs for Atomic SubSystem: '<S168>/Limiter' */
        /* Switch: '<S173>/Switch1' incorporates:
         *  RelationalOperator: '<S173>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clc_bu <
                rtb_TmpSignalConversionAtVeHSER_M_C1_Opt)
        {
            /* Product: '<S163>/Product' */
            rtb_TmpSignalConversionAtVeHSER_M_C1_Opt =
                rtb_TmpSignalConversionAtVeHSER_M_Clc_bu;
        }

        /* End of Switch: '<S173>/Switch1' */

        /* Switch: '<S173>/Switch' incorporates:
         *  Constant: '<S168>/Constant Value3'
         *  RelationalOperator: '<S173>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_C1_Opt <= 0.0F)
        {
            /* Switch: '<S173>/Switch' */
            rtb_TmpSignalConversionAtVeHSER_M_C1_Opt = 0.0F;
        }

        /* End of Switch: '<S173>/Switch' */
        /* End of Outputs for SubSystem: '<S168>/Limiter' */

        /* Outputs for Enabled SubSystem: '<S175>/Hold_OFF_Time' incorporates:
         *  EnablePort: '<S178>/Enable'
         */
        if (rtb_UnitDelay_dt)
        {
            /* Switch: '<S180>/Switch1' */
            if (rtb_AND_ly)
            {
                /* Switch: '<S180>/Switch1' incorporates:
                 *  Constant: '<S178>/Constant Value5'
                 */
                TCPR_ac_B.Switch1_dj = 0.0F;
            }
            else
            {
                /* Switch: '<S180>/Switch1' incorporates:
                 *  Constant: '<S71>/Calib'
                 */
                TCPR_ac_B.Switch1_dj = KeTCPR_t_CntrlTcR_LdRmpHldffOnR;
            }

            /* End of Switch: '<S180>/Switch1' */

            /* Outputs for Atomic SubSystem: '<S175>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S179>/Switch1' incorporates:
             *  UnitDelay: '<S179>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_m0 = TCPR_ac_B.Switch1_dj;

            /* End of Outputs for SubSystem: '<S175>/Timer Retrigger Reset Enabled' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S175>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S179>/Switch1' incorporates:
             *  Constant: '<S179>/Constant Value4'
             *  Constant: '<S32>/Calib'
             *  MinMax: '<S179>/Maximum'
             *  Sum: '<S179>/Subtraction'
             *  UnitDelay: '<S179>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_m0 = fmaxf
                (TCPR_ac_DW.UnitDelay_DSTATE_m0 - HeTCPR_t_MedTED_dT, 0.0F);

            /* End of Outputs for SubSystem: '<S175>/Timer Retrigger Reset Enabled' */
        }

        /* End of Outputs for SubSystem: '<S175>/Hold_OFF_Time' */

        /* If: '<S171>/If1' incorporates:
         *  Constant: '<S171>/Constant Value3'
         *  Constant: '<S179>/Constant Value2'
         *  Constant: '<S45>/Calib'
         *  Logic: '<S171>/Logical Operator'
         *  Logic: '<S171>/Logical Operator1'
         *  Logic: '<S171>/Logical Operator2'
         *  Logic: '<S171>/Logical Operator3'
         *  RelationalOperator: '<S171>/Comparison2'
         *  RelationalOperator: '<S179>/Greater  Than1'
         *  UnitDelay: '<S163>/Unit Delay2'
         *  UnitDelay: '<S179>/Unit Delay'
         */
        if ((((KeTCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_UnitDelay_dt) ||
                rtb_GreaterThan_l3) || rtb_AND_ly)
        {
            /* Outputs for IfAction SubSystem: '<S171>/RstPth_Crt_TcRMax' incorporates:
             *  ActionPort: '<S177>/Action Port'
             */
            TCPR_ac_RstPth_Crt_TcRMax(TCPR_ac_B.Product1_j,
                rtb_TmpSignalConversionAtVeHSER_M_C1_Tor,
                &rtb_TmpSignalConversionAtVeHTDR_M_Clch4_);

            /* End of Outputs for SubSystem: '<S171>/RstPth_Crt_TcRMax' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S175>/Timer Retrigger Reset Enabled' */
            if (((!KeTCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_UnitDelay_dt) ||
                    ((TCPR_ac_DW.UnitDelay_DSTATE_m0 > 0.0F) &&
                     (TCPR_ac_B.Product_p >= 0.0F)))
            {
                /* Outputs for IfAction SubSystem: '<S171>/RstHld_Crt_TcRMax' incorporates:
                 *  ActionPort: '<S176>/Action Port'
                 */
                TCPR_ac_RstHld_Crt_TcRMax
                    (rtb_TmpSignalConversionAtVeHSER_M_C1_Tor,
                     &rtb_TmpSignalConversionAtVeHTDR_M_Clch4_);

                /* End of Outputs for SubSystem: '<S171>/RstHld_Crt_TcRMax' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S171>/Achived_LdRamp' incorporates:
                 *  ActionPort: '<S174>/Action Port'
                 */
                TCPR_ac_Achived_LdRamp(TCPR_ac_B.Product_p,
                                       TCPR_ac_DW.UnitDelay2_DSTATE_c,
                                       &rtb_TmpSignalConversionAtVeHTDR_M_Clch4_);

                /* End of Outputs for SubSystem: '<S171>/Achived_LdRamp' */
            }

            /* End of Outputs for SubSystem: '<S175>/Timer Retrigger Reset Enabled' */
        }

        /* End of If: '<S171>/If1' */

        /* Outputs for Atomic SubSystem: '<S163>/Limiter1' */
        /* Switch: '<S169>/Switch1' incorporates:
         *  RelationalOperator: '<S169>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_C1_Opt >=
                rtb_TmpSignalConversionAtVeHTDR_M_Clch4_)
        {
            /* Product: '<S163>/Product' */
            rtb_TmpSignalConversionAtVeHSER_M_C1_Opt =
                rtb_TmpSignalConversionAtVeHTDR_M_Clch4_;
        }

        /* End of Switch: '<S169>/Switch1' */

        /* Switch: '<S169>/Switch' incorporates:
         *  Constant: '<S163>/Constant Value2'
         *  RelationalOperator: '<S169>/Relational Operator1'
         *  UnitDelay: '<S163>/Unit Delay2'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_C1_Opt > 0.0F)
        {
            TCPR_ac_DW.UnitDelay2_DSTATE_c =
                rtb_TmpSignalConversionAtVeHSER_M_C1_Opt;
        }
        else
        {
            TCPR_ac_DW.UnitDelay2_DSTATE_c = 0.0F;
        }

        /* End of Switch: '<S169>/Switch' */
        /* End of Outputs for SubSystem: '<S163>/Limiter1' */

        /* Outputs for Enabled SubSystem: '<S182>/Hold_OFF_Time' incorporates:
         *  EnablePort: '<S185>/Enable'
         */
        if (rtb_AND_a3)
        {
            /* Switch: '<S187>/Switch1' */
            if (rtb_AND_ly)
            {
                /* Switch: '<S187>/Switch1' incorporates:
                 *  Constant: '<S185>/Constant Value5'
                 */
                TCPR_ac_B.Switch1_ic = 0.0F;
            }
            else
            {
                /* Switch: '<S187>/Switch1' incorporates:
                 *  Constant: '<S69>/Calib'
                 */
                TCPR_ac_B.Switch1_ic = KeTCPR_t_CntrlTcRMin_LdRmpHldffOnR;
            }

            /* End of Switch: '<S187>/Switch1' */

            /* Outputs for Atomic SubSystem: '<S182>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S186>/Switch1' incorporates:
             *  UnitDelay: '<S186>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_mw = TCPR_ac_B.Switch1_ic;

            /* End of Outputs for SubSystem: '<S182>/Timer Retrigger Reset Enabled' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S182>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S186>/Switch1' incorporates:
             *  Constant: '<S186>/Constant Value4'
             *  Constant: '<S32>/Calib'
             *  MinMax: '<S186>/Maximum'
             *  Sum: '<S186>/Subtraction'
             *  UnitDelay: '<S186>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_mw = fmaxf
                (TCPR_ac_DW.UnitDelay_DSTATE_mw - HeTCPR_t_MedTED_dT, 0.0F);

            /* End of Outputs for SubSystem: '<S182>/Timer Retrigger Reset Enabled' */
        }

        /* End of Outputs for SubSystem: '<S182>/Hold_OFF_Time' */

        /* If: '<S172>/If1' incorporates:
         *  Constant: '<S172>/Constant Value3'
         *  Constant: '<S186>/Constant Value2'
         *  Constant: '<S43>/Calib'
         *  Gain: '<S172>/Gain'
         *  Logic: '<S172>/Logical Operator'
         *  Logic: '<S172>/Logical Operator1'
         *  Logic: '<S172>/Logical Operator2'
         *  Logic: '<S172>/Logical Operator3'
         *  RelationalOperator: '<S172>/Comparison2'
         *  RelationalOperator: '<S186>/Greater  Than1'
         *  UnitDelay: '<S163>/Unit Delay1'
         *  UnitDelay: '<S186>/Unit Delay'
         */
        if ((((KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_AND_a3) ||
                rtb_GreaterThan_l3) || rtb_AND_ly)
        {
            /* Outputs for IfAction SubSystem: '<S172>/RstPth_Crt_TcRMin' incorporates:
             *  ActionPort: '<S184>/Action Port'
             */
            TCPR_ac_RstPth_Crt_TcRMax_b(TCPR_ac_B.Product1_j, rtb_Merge1,
                &rtb_TmpSignalConversionAtVeHSER_M_C1_Opt);

            /* End of Outputs for SubSystem: '<S172>/RstPth_Crt_TcRMin' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S182>/Timer Retrigger Reset Enabled' */
            if (((!KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_AND_a3) ||
                    ((TCPR_ac_DW.UnitDelay_DSTATE_mw > 0.0F) &&
                     (TCPR_ac_B.Product_p >= 0.0F)))
            {
                /* Outputs for IfAction SubSystem: '<S172>/RstHld_Crt_TcRMin' incorporates:
                 *  ActionPort: '<S183>/Action Port'
                 */
                TCPR_ac_RstHld_Crt_TcRMax_d(rtb_Merge1,
                    &rtb_TmpSignalConversionAtVeHSER_M_C1_Opt);

                /* End of Outputs for SubSystem: '<S172>/RstHld_Crt_TcRMin' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S172>/Achived_LdRamp' incorporates:
                 *  ActionPort: '<S181>/Action Port'
                 */
                TCPR_ac_Achived_LdRamp_o(-TCPR_ac_B.Product_p,
                    TCPR_ac_DW.UnitDelay1_DSTATE_h,
                    &rtb_TmpSignalConversionAtVeHSER_M_C1_Opt);

                /* End of Outputs for SubSystem: '<S172>/Achived_LdRamp' */
            }

            /* End of Outputs for SubSystem: '<S182>/Timer Retrigger Reset Enabled' */
        }

        /* End of If: '<S172>/If1' */

        /* Outputs for Atomic SubSystem: '<S163>/Limiter2' */
        /* Switch: '<S170>/Switch1' incorporates:
         *  Constant: '<S163>/Constant Value3'
         *  RelationalOperator: '<S170>/Relational Operator'
         */
        if (0.0F < rtb_TmpSignalConversionAtVeHSER_M_C1_Opt)
        {
            /* Product: '<S163>/Product' */
            rtb_TmpSignalConversionAtVeHSER_M_C1_Opt = 0.0F;
        }

        /* End of Switch: '<S170>/Switch1' */

        /* Switch: '<S170>/Switch' incorporates:
         *  RelationalOperator: '<S170>/Relational Operator1'
         *  UnitDelay: '<S163>/Unit Delay1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_C1_Opt >
                rtb_TmpSignalConversionAtVeHSER_M_Clch_j)
        {
            TCPR_ac_DW.UnitDelay1_DSTATE_h =
                rtb_TmpSignalConversionAtVeHSER_M_C1_Opt;
        }
        else
        {
            TCPR_ac_DW.UnitDelay1_DSTATE_h =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_j;
        }

        /* End of Switch: '<S170>/Switch' */
        /* End of Outputs for SubSystem: '<S163>/Limiter2' */

        /* Switch: '<S163>/Switch3' incorporates:
         *  Constant: '<S31>/Calib'
         *  Logic: '<S163>/NOT'
         *  UnitDelay: '<S163>/Unit Delay1'
         *  UnitDelay: '<S163>/Unit Delay2'
         */
        if (!HeTCPR_b_Enb_C1_Asymetric_ClchLim)
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay2_DSTATE_c;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay1_DSTATE_h;
        }

        /* End of Switch: '<S163>/Switch3' */

        /* Switch: '<S163>/Switch2' incorporates:
         *  Constant: '<S36>/Calib'
         *  Product: '<S163>/Product2'
         */
        rtb_TmpSignalConversionAtVeHSER_M_Clch_j =
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ * KeTCPR_K_C1_Min_Scalar;

        /* Switch: '<S163>/Switch1' incorporates:
         *  Constant: '<S41>/Calib'
         */
        if (KeTCPR_b_C1_UseLCCMinMaxTrqAllwd)
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                rtb_TmpSignalConversionAtVeTCCR_M_LCCMin;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_j;
        }

        /* End of Switch: '<S163>/Switch1' */

        /* VariantMerge generated from: '<S3>/VariantSource14' incorporates:
         *  MinMax: '<S163>/Maximum'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_o = fmaxf
            (rtb_TmpSignalConversionAtVeHTDR_M_Clch1_,
             rtb_TmpSignalConversionAtVeHSER_M_Clch_j);

        /* Product: '<S163>/Product' incorporates:
         *  Constant: '<S35>/Calib'
         *  UnitDelay: '<S163>/Unit Delay2'
         */
        rtb_TmpSignalConversionAtVeHSER_M_C1_Opt = KeTCPR_K_C1_Max_Scalar *
            TCPR_ac_DW.UnitDelay2_DSTATE_c;

        /* Switch: '<S163>/Switch2' incorporates:
         *  Constant: '<S41>/Calib'
         */
        if (KeTCPR_b_C1_UseLCCMinMaxTrqAllwd)
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                rtb_TmpSignalConversionAtVeTCCR_M_LCCMax;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                rtb_TmpSignalConversionAtVeHSER_M_C1_Opt;
        }

        /* End of Switch: '<S163>/Switch2' */

        /* VariantMerge generated from: '<S3>/VariantSource3' incorporates:
         *  MinMax: '<S163>/Maximum1'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_gv = fminf
            (rtb_TmpSignalConversionAtVeHTDR_M_Clch1_,
             rtb_TmpSignalConversionAtVeHSER_M_C1_Opt);

        /* End of Outputs for SubSystem: '<S104>/Lcked_Ld_TcR_Cntrl' */
    }
    else if ((KeTCPR_b_C1_UseSignedClutchTh) &&
             (KeTCPR_b_C1_UseLCCMinMaxTrqAllwd))
    {
        /* Outputs for IfAction SubSystem: '<S104>/Rlsd_Ld_TcR_Posit' incorporates:
         *  ActionPort: '<S166>/Action Port'
         */
        /* Switch: '<S166>/Switch1' incorporates:
         *  Constant: '<S41>/Calib'
         */
        if (KeTCPR_b_C1_UseLCCMinMaxTrqAllwd)
        {
            /* VariantMerge generated from: '<S3>/VariantSource3' incorporates:
             *  MinMax: '<S166>/MinMax1'
             */
            TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_gv = fminf
                (VeTCPC_M_C1LeadMaxCap, rtb_TmpSignalConversionAtVeTCCR_M_LCCMax);
        }
        else
        {
            /* VariantMerge generated from: '<S3>/VariantSource3' incorporates:
             *  Abs: '<S166>/Abs1'
             */
            TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_gv = fabsf
                (VeTCPC_M_C1LeadMaxCap);
        }

        /* End of Switch: '<S166>/Switch1' */

        /* VariantMerge generated from: '<S3>/VariantSource14' incorporates:
         *  Constant: '<S166>/Constant Value1'
         *  Gain: '<S190>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_o = 0.0F;

        /* End of Outputs for SubSystem: '<S104>/Rlsd_Ld_TcR_Posit' */
    }
    else if (KeTCPR_b_CntrlTcR_OvrdTo0_OnRlsd)
    {
        /* Outputs for IfAction SubSystem: '<S104>/RlsdLd_TcR_Ovrd' incorporates:
         *  ActionPort: '<S164>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource3' incorporates:
         *  Constant: '<S164>/Constant Value1'
         *  SignalConversion generated from: '<S164>/LeadTcR_Max'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_gv = 0.0F;

        /* VariantMerge generated from: '<S3>/VariantSource14' incorporates:
         *  Constant: '<S164>/Constant Value2'
         *  SignalConversion generated from: '<S164>/LeadTcR_Min'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_o = 0.0F;

        /* End of Outputs for SubSystem: '<S104>/RlsdLd_TcR_Ovrd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S104>/Rlsd_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S165>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource3' incorporates:
         *  Gain: '<S188>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_gv =
            rtb_TmpSignalConversionAtVeHSER_M_C1_Opt;

        /* VariantMerge generated from: '<S3>/VariantSource14' incorporates:
         *  Gain: '<S189>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_o =
            rtb_TmpSignalConversionAtVeHSER_M_C1_Opt;

        /* End of Outputs for SubSystem: '<S104>/Rlsd_Ld_TcR_Cntrl' */
    }

    if (rtb_GreaterThan_i)
    {
        /* Outputs for IfAction SubSystem: '<S105>/Lcked_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S191>/Action Port'
         */
        /* Sum: '<S194>/Sum2' incorporates:
         *  Constant: '<S38>/Calib'
         */
        rtb_TmpSignalConversionAtVeHSER_M_Clch_j = VeTCPC_M_C1PredMaxCap -
            KeTCPR_M_C1_ClmpTorq;

        /* Outputs for Atomic SubSystem: '<S194>/Limiter' */
        /* Switch: '<S196>/Switch1' incorporates:
         *  RelationalOperator: '<S196>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clc_bu <
                rtb_TmpSignalConversionAtVeHSER_M_Clch_j)
        {
            /* Switch: '<S195>/Switch1' */
            rtb_TmpSignalConversionAtVeHSER_M_Clch_j =
                rtb_TmpSignalConversionAtVeHSER_M_Clc_bu;
        }

        /* End of Switch: '<S196>/Switch1' */

        /* Switch: '<S196>/Switch' incorporates:
         *  Constant: '<S194>/Constant Value3'
         *  RelationalOperator: '<S196>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_j <= 0.0F)
        {
            /* Switch: '<S196>/Switch' */
            rtb_TmpSignalConversionAtVeHSER_M_Clch_j = 0.0F;
        }

        /* End of Switch: '<S196>/Switch' */
        /* End of Outputs for SubSystem: '<S194>/Limiter' */

        /* Outputs for Atomic SubSystem: '<S191>/Limiter1' */
        /* Switch: '<S195>/Switch1' incorporates:
         *  RelationalOperator: '<S195>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_j >= VeTCPC_M_C1PredMaxCap)
        {
            /* Switch: '<S195>/Switch1' */
            rtb_TmpSignalConversionAtVeHSER_M_Clch_j = VeTCPC_M_C1PredMaxCap;
        }

        /* End of Switch: '<S195>/Switch1' */

        /* Switch: '<S195>/Switch' incorporates:
         *  Constant: '<S191>/Constant Value2'
         *  RelationalOperator: '<S195>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_j <= 0.0F)
        {
            /* Switch: '<S195>/Switch' */
            rtb_TmpSignalConversionAtVeHSER_M_Clch_j = 0.0F;
        }

        /* End of Switch: '<S195>/Switch' */
        /* End of Outputs for SubSystem: '<S191>/Limiter1' */

        /* VariantMerge generated from: '<S3>/VariantSource20' incorporates:
         *  Constant: '<S35>/Calib'
         *  Product: '<S191>/Product'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_p =
            KeTCPR_K_C1_Max_Scalar * rtb_TmpSignalConversionAtVeHSER_M_Clch_j;

        /* VariantMerge generated from: '<S3>/VariantSource21' incorporates:
         *  Constant: '<S36>/Calib'
         *  Product: '<S191>/Product1'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_i =
            rtb_TmpSignalConversionAtVeHSER_M_Clch_j * KeTCPR_K_C1_Min_Scalar;

        /* End of Outputs for SubSystem: '<S105>/Lcked_Ld_TcR_Cntrl' */
    }
    else if (KeTCPR_b_PredCntrlTcR_OvrdTo0_OnRlsd)
    {
        /* Outputs for IfAction SubSystem: '<S105>/RlsdLd_TcR_Ovrd' incorporates:
         *  ActionPort: '<S192>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource20' incorporates:
         *  Constant: '<S192>/Constant Value1'
         *  SignalConversion generated from: '<S192>/LeadTcR_Max'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_p = 0.0F;

        /* VariantMerge generated from: '<S3>/VariantSource21' incorporates:
         *  Constant: '<S192>/Constant Value2'
         *  SignalConversion generated from: '<S192>/LeadTcR_Min'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_i = 0.0F;

        /* End of Outputs for SubSystem: '<S105>/RlsdLd_TcR_Ovrd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S105>/Rlsd_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S193>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource20' incorporates:
         *  Gain: '<S197>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_p =
            VeTCPC_M_C1PredMaxCap;

        /* VariantMerge generated from: '<S3>/VariantSource21' incorporates:
         *  Gain: '<S193>/Gain'
         *  Gain: '<S198>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_i =
            -VeTCPC_M_C1PredMaxCap;

        /* End of Outputs for SubSystem: '<S105>/Rlsd_Ld_TcR_Cntrl' */
    }

    /* VariantMerge generated from: '<S3>/VariantSource15' incorporates:
     *  Constant: '<S41>/Calib'
     *  Constant: '<S42>/Calib'
     *  Constant: '<S46>/Calib'
     *  Constant: '<S50>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_ez = rtb_AND_aa;

    /* VariantMerge generated from: '<S3>/VariantSource18' */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_h = rtb_Abs2_o;

    /* VariantMerge generated from: '<S3>/VariantSource1' */
    TCPR_ac_B.VariantMerge_For_Variant_Source_VariantS =
        rtb_TmpSignalConversionAtVeHSER_M_C1_Tor;

#endif

    /* End of If: '<S75>/If' */
    /* End of Outputs for SubSystem: '<S75>/Signal Latch On With Reset3' */
    /* End of Outputs for SubSystem: '<S75>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S75>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S75>/Signal Latch On With Reset2' */
    /* End of Outputs for SubSystem: '<S75>/EdgeFalling2' */
    /* End of Outputs for SubSystem: '<S75>/Signal Latch On With Reset4' */
    /* End of Outputs for SubSystem: '<S103>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S103>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S104>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S104>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S304>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S304>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S303>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S303>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S275>/Signal Latch On With Reset4' */
    /* Outputs for Atomic SubSystem: '<S275>/EdgeFalling2' */
    /* Outputs for Atomic SubSystem: '<S275>/Signal Latch On With Reset2' */
    /* Outputs for Atomic SubSystem: '<S275>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S275>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S275>/Signal Latch On With Reset3' */
    /* If: '<S275>/If' incorporates:
     *  Constant: '<S239>/Calib'
     *  Constant: '<S240>/Calib'
     *  Constant: '<S241>/Calib'
     *  Constant: '<S242>/Calib'
     *  Constant: '<S247>/Calib'
     *  Constant: '<S249>/Calib'
     *  Constant: '<S251>/Calib'
     *  Constant: '<S264>/Calib'
     *  Constant: '<S265>/Calib'
     *  DataTypeConversion: '<S275>/Data Type Conversion'
     *  DataTypeConversion: '<S275>/Data Type Conversion1'
     *  DataTypeConversion: '<S275>/Data Type Conversion2'
     *  Gain: '<S278>/Gain'
     *  Gain: '<S307>/Gain'
     *  Gain: '<S308>/Gain'
     *  Gain: '<S309>/Gain'
     *  If: '<S303>/If1'
     *  If: '<S304>/If1'
     *  If: '<S305>/If1'
     *  Logic: '<S275>/Logical1'
     *  Logic: '<S275>/Logical2'
     *  Logic: '<S275>/Logical3'
     *  Logic: '<S275>/Logical6'
     *  Logic: '<S275>/Logical7'
     *  Logic: '<S304>/Logical'
     *  MinMax: '<S275>/MinMax1'
     *  MinMax: '<S276>/Maximum'
     *  Product: '<S10>/Product4'
     *  Product: '<S10>/Product5'
     *  Product: '<S276>/Multiplication'
     *  RelationalOperator: '<S275>/Comparison1'
     *  RelationalOperator: '<S303>/Comparison1'
     *  RelationalOperator: '<S304>/Comparison1'
     *  RelationalOperator: '<S310>/Comparison5'
     *  Selector: '<S275>/Selector'
     *  Selector: '<S275>/Selector1'
     *  Sum: '<S275>/Sum3'
     *  Sum: '<S276>/Summation'
     *  Switch: '<S275>/Switch2'
     *  Switch: '<S276>/Switch'
     *  UnitDelay: '<S275>/Unit Delay1'
     *  UnitDelay: '<S275>/Unit Delay2'
     */
#if Rte_SysCon_Variant_TCPR_7

    if (KeTCPR_b_EnblCorrectedC2Trq)
    {
        /* Merge: '<S275>/Merge' incorporates:
         *  Constant: '<S256>/Calib'
         *  Constant: '<S257>/Calib'
         *  Constant: '<S260>/Calib'
         *  Constant: '<S262>/Calib'
         *  Constant: '<S276>/Constant Value'
         *  Sum: '<S276>/Sum1'
         */
        rtb_TmpSignalConversionAtVeHTDR_M_Clch4_ = ((fmaxf
            (KeTCPR_p_C2Press_EngOff - KeTCPR_p_C2_RetSpringPress, 0.0F) *
            KeTCPR_k_C2_StaticFrictionCoef) * KeTCPR_h_C2_PresToTorqLumpedCal) -
            rtb_TmpSignalConversionAtVeCSDR_M_Corr_p;
    }
    else
    {
        /* Merge: '<S275>/Merge' incorporates:
         *  Constant: '<S256>/Calib'
         *  Constant: '<S257>/Calib'
         *  Constant: '<S260>/Calib'
         *  Constant: '<S262>/Calib'
         *  Constant: '<S276>/Constant Value'
         */
        rtb_TmpSignalConversionAtVeHTDR_M_Clch4_ = (fmaxf
            (KeTCPR_p_C2Press_EngOff - KeTCPR_p_C2_RetSpringPress, 0.0F) *
            KeTCPR_k_C2_StaticFrictionCoef) * KeTCPR_h_C2_PresToTorqLumpedCal;
    }

    /* VariantMerge generated from: '<S3>/VariantSource34' incorporates:
     *  Constant: '<S235>/Calib'
     *  Constant: '<S249>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_m = KeTCPR_K_C2_Max_Scalar *
        rtb_TmpSignalConversionAtVeHTDR_M_Clch4_;

    /* VariantMerge generated from: '<S3>/VariantSource35' incorporates:
     *  Constant: '<S236>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_n =
        rtb_TmpSignalConversionAtVeHTDR_M_Clch4_ * KeTCPR_K_C2_Min_Scalar;

    /* UnitDelay: '<S693>/Unit Delay' incorporates:
     *  Constant: '<S234>/Calib'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_C2Stat'
     */
    rtb_AND_h1 = KaTCPR_b_C2_TRNRStsEnaAdjEstTorq
        [(rtb_TmpSignalConversionAtVeTRNR_e_C2Stat)];

    /* Logic: '<S290>/OR1' incorporates:
     *  Constant: '<S233>/Calib'
     *  Logic: '<S290>/OR'
     *  SignalConversion generated from: '<S1>/VeHSER_e_OITR_LeadState'
     *  SignalConversion generated from: '<S1>/VeHSER_e_OITR_PredLeadState'
     *  UnitDelay: '<S290>/Unit Delay'
     */
    TCPR_ac_DW.UnitDelay_DSTATE_bq = (((KaTCPR_b_C2_HSERStCmpForPredReserve
        [(rtb_TmpSignalConversionAtVeHSER_e_OITR_P << 4U) +
        rtb_TmpSignalConversionAtVeHSER_e_OITR_L]) && rtb_AND_h1) || (rtb_AND_h1
        && (TCPR_ac_DW.UnitDelay_DSTATE_bq)));

    /* Logic: '<S281>/AND' incorporates:
     *  Logic: '<S281>/OR1'
     *  UnitDelay: '<S281>/Unit Delay'
     */
    rtb_GreaterThan_f = ((!TCPR_ac_DW.UnitDelay_DSTATE_bq) &&
                         (TCPR_ac_DW.UnitDelay_DSTATE_je));

    /* Update for UnitDelay: '<S281>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_je = TCPR_ac_DW.UnitDelay_DSTATE_bq;

    /* Logic: '<S282>/AND' incorporates:
     *  Logic: '<S282>/OR1'
     *  UnitDelay: '<S282>/Unit Delay'
     */
    rtb_GreaterThan_l3 = ((!TCPR_ac_DW.UnitDelay2_DSTATE_i) &&
                          (TCPR_ac_DW.UnitDelay_DSTATE_aq));

    /* Update for UnitDelay: '<S282>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_aq = TCPR_ac_DW.UnitDelay2_DSTATE_i;

    /* Logic: '<S291>/NOT' incorporates:
     *  Constant: '<S263>/Calib'
     *  UnitDelay: '<S275>/Unit Delay1'
     */
    rtb_GreaterThan_i = ((TCPR_ac_DW.UnitDelay1_DSTATE_k -
                          rtb_TmpSignalConversionAtVeHCCR_M_Clch2_) >
                         KeTCPR_t_C2_PredClchOffstCnvrgTqThrshld);

    /* Logic: '<S289>/OR1' incorporates:
     *  Logic: '<S289>/NOT'
     *  Logic: '<S289>/OR'
     *  UnitDelay: '<S289>/Unit Delay'
     */
    TCPR_ac_DW.UnitDelay_DSTATE_bt = (rtb_GreaterThan_f ||
        (((!rtb_GreaterThan_l3) && rtb_GreaterThan_i) &&
         (TCPR_ac_DW.UnitDelay_DSTATE_bt)));

    /* Logic: '<S283>/AND' incorporates:
     *  Logic: '<S283>/OR1'
     *  UnitDelay: '<S283>/Unit Delay'
     */
    rtb_GreaterThan_f = ((!TCPR_ac_DW.UnitDelay_DSTATE_bt) &&
                         (TCPR_ac_DW.UnitDelay_DSTATE_os));

    /* Update for UnitDelay: '<S283>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_os = TCPR_ac_DW.UnitDelay_DSTATE_bt;

    /* Logic: '<S291>/OR1' incorporates:
     *  Logic: '<S291>/OR'
     *  UnitDelay: '<S291>/Unit Delay'
     */
    TCPR_ac_DW.UnitDelay_DSTATE_oyz = ((rtb_GreaterThan_f && rtb_GreaterThan_i) ||
        (rtb_GreaterThan_i && (TCPR_ac_DW.UnitDelay_DSTATE_oyz)));
    rtPrevAction = TCPR_ac_DW.If_ActiveSubsystem_p;
    if (TCPR_ac_DW.UnitDelay_DSTATE_bq)
    {
        TCPR_ac_DW.If_ActiveSubsystem_p = 0;
    }
    else if (TCPR_ac_DW.UnitDelay_DSTATE_bt)
    {
        TCPR_ac_DW.If_ActiveSubsystem_p = 1;
    }
    else if (TCPR_ac_DW.UnitDelay_DSTATE_oyz)
    {
        TCPR_ac_DW.If_ActiveSubsystem_p = 2;
    }
    else
    {
        TCPR_ac_DW.If_ActiveSubsystem_p = 3;
    }

    switch (TCPR_ac_DW.If_ActiveSubsystem_p)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S275>/PassThroughOffsetTorque' incorporates:
         *  ActionPort: '<S285>/Action Port'
         */
        TCPR_ac_PassThroughOffsetTorque(rtb_TmpSignalConversionAtVeHCCR_M_Clch2_,
            KeTCPR_M_C2_PredClchOffst, rtb_Switch_bw,
            &rtb_TmpSignalConversionAtVeHTDR_M_Clch4_);

        /* End of Outputs for SubSystem: '<S275>/PassThroughOffsetTorque' */
        break;

      case 1:
        if (TCPR_ac_DW.If_ActiveSubsystem_p != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S275>/HoldOffsetTorque' incorporates:
             *  ActionPort: '<S284>/Action Port'
             */
            /* SystemReset for If: '<S275>/If' */
            TCPR_ac_HoldOffsetTorque_Reset(&TCPR_ac_DW.HoldOffsetTorque_l);

            /* End of SystemReset for SubSystem: '<S275>/HoldOffsetTorque' */
        }

        /* Outputs for IfAction SubSystem: '<S275>/HoldOffsetTorque' incorporates:
         *  ActionPort: '<S284>/Action Port'
         */
        TCPR_ac_HoldOffsetTorque(TCPR_ac_DW.UnitDelay1_DSTATE_k,
            KeTCPR_t_C2_PredClchOffstHldTm,
            &rtb_TmpSignalConversionAtVeHTDR_M_Clch4_,
            &TCPR_ac_B.HoldOffsetTorque_l, &TCPR_ac_DW.HoldOffsetTorque_l);

        /* End of Outputs for SubSystem: '<S275>/HoldOffsetTorque' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S275>/RampOffsetTorque' incorporates:
         *  ActionPort: '<S287>/Action Port'
         */
        TCPR_ac_RampOffsetTorque(TCPR_ac_DW.UnitDelay1_DSTATE_k,
            KeTCPR_t_C2_PredClchOffstRmpRt,
            &rtb_TmpSignalConversionAtVeHTDR_M_Clch4_);

        /* End of Outputs for SubSystem: '<S275>/RampOffsetTorque' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S275>/PassThroughTorque' incorporates:
         *  ActionPort: '<S286>/Action Port'
         */
        TCPR_ac_PassThroughTorque(rtb_TmpSignalConversionAtVeHCCR_M_Clch2_,
            &rtb_TmpSignalConversionAtVeHTDR_M_Clch4_);

        /* End of Outputs for SubSystem: '<S275>/PassThroughTorque' */
        break;
    }

    TCPR_ac_DW.UnitDelay1_DSTATE_k = fmaxf
        (rtb_TmpSignalConversionAtVeHCCR_M_Clch2_,
         rtb_TmpSignalConversionAtVeHTDR_M_Clch4_);
    if (KeTCPR_b_C2_AdjEstTorqAllwd)
    {
        /* Switch: '<S275>/Switch2' */
        VeTCPC_M_C2PredMaxCap = TCPR_ac_DW.UnitDelay1_DSTATE_k;
    }
    else
    {
        /* Switch: '<S275>/Switch2' */
        VeTCPC_M_C2PredMaxCap = rtb_Switch_bw;
    }

    /* VariantMerge generated from: '<S3>/VariantSource26' incorporates:
     *  Constant: '<S239>/Calib'
     *  Constant: '<S240>/Calib'
     *  Constant: '<S264>/Calib'
     *  Constant: '<S265>/Calib'
     *  UnitDelay: '<S275>/Unit Delay1'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_d = rtb_Abs2_ef;

    /* RelationalOperator: '<S303>/Comparison1' */
    rtb_GreaterThan_i = (rtb_TmpSignalConversionAtVeHSER_M_Clc_fc >=
                         VeTCPC_M_C2LeadMaxCap);

    /* Logic: '<S341>/AND' incorporates:
     *  Logic: '<S341>/OR1'
     *  UnitDelay: '<S341>/Unit Delay'
     */
    rtb_GreaterThan_f = (rtb_GreaterThan_d && (!TCPR_ac_DW.UnitDelay_DSTATE_ix));

    /* Update for UnitDelay: '<S341>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_ix = rtb_GreaterThan_d;

    /* Logic: '<S342>/AND' incorporates:
     *  Logic: '<S342>/OR1'
     *  UnitDelay: '<S342>/Unit Delay'
     */
    rtb_GreaterThan_l3 = (rtb_GreaterThan_i && (!TCPR_ac_DW.UnitDelay_DSTATE_oo));

    /* Update for UnitDelay: '<S342>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_oo = rtb_GreaterThan_i;

    /* RelationalOperator: '<S310>/Comparison5' incorporates:
     *  UnitDelay: '<S310>/Unit Delay'
     */
    rtb_GreaterThan_i = (rtb_AND_ob != TCPR_ac_DW.UnitDelay_DSTATE_ls);
    if (rtb_GreaterThan_d)
    {
        /* Outputs for IfAction SubSystem: '<S303>/Lcked_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S343>/Action Port'
         */
        /* RelationalOperator: '<S343>/Relational Operator' incorporates:
         *  Constant: '<S343>/Constant Value1'
         */
        rtb_UnitDelay_dt = (rtb_TmpSignalConversionAtVeHSER_M_Clch_a < 0.0F);

        /* Outputs for Atomic SubSystem: '<S343>/EdgeRising' */
        /* Logic: '<S346>/AND' incorporates:
         *  Logic: '<S346>/OR1'
         *  UnitDelay: '<S346>/Unit Delay'
         */
        rtb_AND_ly = (rtb_UnitDelay_dt && (!TCPR_ac_DW.UnitDelay_DSTATE_by));

        /* Update for UnitDelay: '<S346>/Unit Delay' */
        TCPR_ac_DW.UnitDelay_DSTATE_by = rtb_UnitDelay_dt;

        /* End of Outputs for SubSystem: '<S343>/EdgeRising' */

        /* Switch: '<S343>/Switch' */
        if (rtb_AND_ob)
        {
            rtb_TmpSignalConversionAtVeHSER_M_C2_Tor = rtb_Switch_fc;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHSER_M_C2_Tor = VeTCPC_M_C2LeadMaxCap;
        }

        /* End of Switch: '<S343>/Switch' */

        /* Sum: '<S347>/Sum2' incorporates:
         *  Constant: '<S238>/Calib'
         */
        rtb_TmpSignalConversionAtVeHSER_M_Clc_bu =
            rtb_TmpSignalConversionAtVeHSER_M_C2_Tor - KeTCPR_M_C2_ClmpTorq;

        /* Outputs for Atomic SubSystem: '<S347>/Limiter' */
        /* Switch: '<S352>/Switch1' incorporates:
         *  RelationalOperator: '<S352>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clc_fc <
                rtb_TmpSignalConversionAtVeHSER_M_Clc_bu)
        {
            /* Switch: '<S343>/Switch1' */
            rtb_TmpSignalConversionAtVeHSER_M_Clc_bu =
                rtb_TmpSignalConversionAtVeHSER_M_Clc_fc;
        }

        /* End of Switch: '<S352>/Switch1' */

        /* Switch: '<S352>/Switch' incorporates:
         *  Constant: '<S347>/Constant Value3'
         *  RelationalOperator: '<S352>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clc_bu <= 0.0F)
        {
            /* Switch: '<S352>/Switch' */
            rtb_TmpSignalConversionAtVeHSER_M_Clc_bu = 0.0F;
        }

        /* End of Switch: '<S352>/Switch' */
        /* End of Outputs for SubSystem: '<S347>/Limiter' */

        /* If: '<S350>/If1' incorporates:
         *  Constant: '<S246>/Calib'
         *  Logic: '<S350>/Logical Operator'
         *  Logic: '<S350>/Logical Operator1'
         *  Logic: '<S350>/Logical Operator2'
         *  UnitDelay: '<S343>/Unit Delay2'
         */
        if ((((KeTCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_GreaterThan_f) ||
                rtb_GreaterThan_i) || rtb_GreaterThan_l3)
        {
            /* Outputs for IfAction SubSystem: '<S350>/RstPth_Crt_TcRMax' incorporates:
             *  ActionPort: '<S355>/Action Port'
             */
            TCPR_ac_RstPth_Crt_TcRMax(TCPR_ac_B.Product1_o, rtb_Switch_fc,
                &rtb_TmpSignalConversionAtVeHSER_M_C2_Tor);

            /* End of Outputs for SubSystem: '<S350>/RstPth_Crt_TcRMax' */
        }
        else if ((!KeTCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_GreaterThan_f)
        {
            /* Outputs for IfAction SubSystem: '<S350>/RstHld_Crt_TcRMax' incorporates:
             *  ActionPort: '<S354>/Action Port'
             */
            TCPR_ac_RstHld_Crt_TcRMax(rtb_Switch_fc,
                &rtb_TmpSignalConversionAtVeHSER_M_C2_Tor);

            /* End of Outputs for SubSystem: '<S350>/RstHld_Crt_TcRMax' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S350>/Achived_LdRamp' incorporates:
             *  ActionPort: '<S353>/Action Port'
             */
            TCPR_ac_Achived_LdRamp(TCPR_ac_B.Product_m,
                                   TCPR_ac_DW.UnitDelay2_DSTATE_g,
                                   &rtb_TmpSignalConversionAtVeHSER_M_C2_Tor);

            /* End of Outputs for SubSystem: '<S350>/Achived_LdRamp' */
        }

        /* End of If: '<S350>/If1' */

        /* Outputs for Atomic SubSystem: '<S343>/Limiter1' */
        /* Switch: '<S348>/Switch1' incorporates:
         *  RelationalOperator: '<S348>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clc_bu >=
                rtb_TmpSignalConversionAtVeHSER_M_C2_Tor)
        {
            /* Switch: '<S343>/Switch1' */
            rtb_TmpSignalConversionAtVeHSER_M_Clc_bu =
                rtb_TmpSignalConversionAtVeHSER_M_C2_Tor;
        }

        /* End of Switch: '<S348>/Switch1' */

        /* Switch: '<S348>/Switch' incorporates:
         *  Constant: '<S343>/Constant Value2'
         *  RelationalOperator: '<S348>/Relational Operator1'
         *  UnitDelay: '<S343>/Unit Delay2'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clc_bu > 0.0F)
        {
            TCPR_ac_DW.UnitDelay2_DSTATE_g =
                rtb_TmpSignalConversionAtVeHSER_M_Clc_bu;
        }
        else
        {
            TCPR_ac_DW.UnitDelay2_DSTATE_g = 0.0F;
        }

        /* End of Switch: '<S348>/Switch' */
        /* End of Outputs for SubSystem: '<S343>/Limiter1' */

        /* If: '<S351>/If1' incorporates:
         *  Constant: '<S244>/Calib'
         *  Gain: '<S351>/Gain'
         *  Logic: '<S351>/Logical Operator'
         *  Logic: '<S351>/Logical Operator1'
         *  Logic: '<S351>/Logical Operator2'
         *  UnitDelay: '<S343>/Unit Delay1'
         */
        if ((((KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_AND_ly) ||
                rtb_GreaterThan_i) || rtb_GreaterThan_l3)
        {
            /* Outputs for IfAction SubSystem: '<S351>/RstPth_Crt_TcRMax' incorporates:
             *  ActionPort: '<S358>/Action Port'
             */
            TCPR_ac_RstPth_Crt_TcRMax_b(TCPR_ac_B.Product1_o, rtb_Abs2_ef,
                &rtb_TmpSignalConversionAtVeHSER_M_Clc_bu);

            /* End of Outputs for SubSystem: '<S351>/RstPth_Crt_TcRMax' */
        }
        else if ((!KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_AND_ly)
        {
            /* Outputs for IfAction SubSystem: '<S351>/RstHld_Crt_TcRMax' incorporates:
             *  ActionPort: '<S357>/Action Port'
             */
            TCPR_ac_RstHld_Crt_TcRMax_d(rtb_Abs2_ef,
                &rtb_TmpSignalConversionAtVeHSER_M_Clc_bu);

            /* End of Outputs for SubSystem: '<S351>/RstHld_Crt_TcRMax' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S351>/Achived_LdRamp' incorporates:
             *  ActionPort: '<S356>/Action Port'
             */
            TCPR_ac_Achived_LdRamp_o(-TCPR_ac_B.Product_m,
                TCPR_ac_DW.UnitDelay1_DSTATE_ly,
                &rtb_TmpSignalConversionAtVeHSER_M_Clc_bu);

            /* End of Outputs for SubSystem: '<S351>/Achived_LdRamp' */
        }

        /* End of If: '<S351>/If1' */

        /* Outputs for Atomic SubSystem: '<S343>/Limiter2' */
        /* Switch: '<S349>/Switch1' incorporates:
         *  Constant: '<S343>/Constant Value3'
         *  RelationalOperator: '<S349>/Relational Operator'
         */
        if (0.0F < rtb_TmpSignalConversionAtVeHSER_M_Clc_bu)
        {
            /* Switch: '<S343>/Switch1' */
            rtb_TmpSignalConversionAtVeHSER_M_Clc_bu = 0.0F;
        }

        /* End of Switch: '<S349>/Switch1' */

        /* Switch: '<S349>/Switch' incorporates:
         *  RelationalOperator: '<S349>/Relational Operator1'
         *  UnitDelay: '<S343>/Unit Delay1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clc_bu >
                rtb_TmpSignalConversionAtVeHSER_M_Clch_a)
        {
            TCPR_ac_DW.UnitDelay1_DSTATE_ly =
                rtb_TmpSignalConversionAtVeHSER_M_Clc_bu;
        }
        else
        {
            TCPR_ac_DW.UnitDelay1_DSTATE_ly =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_a;
        }

        /* End of Switch: '<S349>/Switch' */
        /* End of Outputs for SubSystem: '<S343>/Limiter2' */

        /* Merge: '<S303>/Merge' incorporates:
         *  Constant: '<S235>/Calib'
         *  Product: '<S343>/Product'
         *  UnitDelay: '<S343>/Unit Delay2'
         */
        rtb_TmpSignalConversionAtVeHSER_M_C2_Tor = KeTCPR_K_C2_Max_Scalar *
            TCPR_ac_DW.UnitDelay2_DSTATE_g;

        /* Switch: '<S343>/Switch1' incorporates:
         *  Constant: '<S231>/Calib'
         *  Logic: '<S343>/NOT'
         *  UnitDelay: '<S343>/Unit Delay1'
         *  UnitDelay: '<S343>/Unit Delay2'
         */
        if (!HeTCPR_b_Enb_C2_Asymetric_ClchLim)
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay2_DSTATE_g;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay1_DSTATE_ly;
        }

        /* End of Switch: '<S343>/Switch1' */

        /* VariantMerge generated from: '<S3>/VariantSource28' incorporates:
         *  Constant: '<S236>/Calib'
         *  Product: '<S343>/Product1'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_gf =
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ * KeTCPR_K_C2_Min_Scalar;

        /* End of Outputs for SubSystem: '<S303>/Lcked_Ld_TcR_Cntrl' */
    }
    else if (KeTCPR_b_CntrlTcR_OvrdTo0_OnRlsd)
    {
        /* Outputs for IfAction SubSystem: '<S303>/Rlsd_Ld_TcR_Ovrd' incorporates:
         *  ActionPort: '<S345>/Action Port'
         */
        /* Merge: '<S303>/Merge' incorporates:
         *  Constant: '<S345>/Constant Value1'
         *  SignalConversion generated from: '<S345>/LeadTcR_Max'
         */
        rtb_TmpSignalConversionAtVeHSER_M_C2_Tor = 0.0F;

        /* VariantMerge generated from: '<S3>/VariantSource28' incorporates:
         *  Constant: '<S345>/Constant Value2'
         *  SignalConversion generated from: '<S345>/LeadTcR_Min'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_gf = 0.0F;

        /* End of Outputs for SubSystem: '<S303>/Rlsd_Ld_TcR_Ovrd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S303>/Rlsd_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S344>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource28' incorporates:
         *  Gain: '<S360>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_gf =
            rtb_TmpSignalConversionAtVeHSER_M_C2_Tor;

        /* End of Outputs for SubSystem: '<S303>/Rlsd_Ld_TcR_Cntrl' */
    }

    /* RelationalOperator: '<S304>/Comparison1' incorporates:
     *  Constant: '<S247>/Calib'
     */
    rtb_UnitDelay_dt = (rtb_TmpSignalConversionAtVeHSER_M_Clc_fc >=
                        VeTCPC_M_C2LeadMaxCap);

    /* Logic: '<S361>/AND' incorporates:
     *  Logic: '<S361>/OR1'
     *  UnitDelay: '<S361>/Unit Delay'
     */
    rtb_GreaterThan_f = (rtb_GreaterThan_c && (!TCPR_ac_DW.UnitDelay_DSTATE_ca));

    /* Update for UnitDelay: '<S361>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_ca = rtb_GreaterThan_c;

    /* Logic: '<S362>/AND' incorporates:
     *  Logic: '<S362>/OR1'
     *  UnitDelay: '<S362>/Unit Delay'
     */
    rtb_GreaterThan_l3 = (rtb_UnitDelay_dt && (!TCPR_ac_DW.UnitDelay_DSTATE_bft));

    /* Update for UnitDelay: '<S362>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_bft = rtb_UnitDelay_dt;
    if (rtb_GreaterThan_c)
    {
        /* Outputs for IfAction SubSystem: '<S304>/Lcked_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S363>/Action Port'
         */
        /* RelationalOperator: '<S363>/Relational Operator' incorporates:
         *  Constant: '<S363>/Constant Value1'
         */
        rtb_GreaterThan_c = (rtb_TmpSignalConversionAtVeHSER_M_Clch_a < 0.0F);

        /* Outputs for Atomic SubSystem: '<S363>/EdgeRising' */
        /* Logic: '<S367>/AND' incorporates:
         *  Logic: '<S367>/OR1'
         *  UnitDelay: '<S367>/Unit Delay'
         */
        rtb_UnitDelay_dt = (rtb_GreaterThan_c &&
                            (!TCPR_ac_DW.UnitDelay_DSTATE_a5));

        /* Update for UnitDelay: '<S367>/Unit Delay' */
        TCPR_ac_DW.UnitDelay_DSTATE_a5 = rtb_GreaterThan_c;

        /* End of Outputs for SubSystem: '<S363>/EdgeRising' */

        /* Sum: '<S368>/Sum2' incorporates:
         *  Constant: '<S238>/Calib'
         */
        rtb_TmpSignalConversionAtVeHSER_M_C2_Opt = VeTCPC_M_C2LeadMaxCap -
            KeTCPR_M_C2_ClmpTorq;

        /* Outputs for Atomic SubSystem: '<S368>/Limiter' */
        /* Switch: '<S373>/Switch1' incorporates:
         *  RelationalOperator: '<S373>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clc_fc <
                rtb_TmpSignalConversionAtVeHSER_M_C2_Opt)
        {
            /* Product: '<S363>/Product' */
            rtb_TmpSignalConversionAtVeHSER_M_C2_Opt =
                rtb_TmpSignalConversionAtVeHSER_M_Clc_fc;
        }

        /* End of Switch: '<S373>/Switch1' */

        /* Switch: '<S373>/Switch' incorporates:
         *  Constant: '<S368>/Constant Value3'
         *  RelationalOperator: '<S373>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_C2_Opt <= 0.0F)
        {
            /* Switch: '<S373>/Switch' */
            rtb_TmpSignalConversionAtVeHSER_M_C2_Opt = 0.0F;
        }

        /* End of Switch: '<S373>/Switch' */
        /* End of Outputs for SubSystem: '<S368>/Limiter' */

        /* Outputs for Enabled SubSystem: '<S375>/Hold_OFF_Time' incorporates:
         *  EnablePort: '<S378>/Enable'
         */
        if (rtb_GreaterThan_f)
        {
            /* Switch: '<S380>/Switch1' */
            if (rtb_GreaterThan_l3)
            {
                /* Switch: '<S380>/Switch1' incorporates:
                 *  Constant: '<S378>/Constant Value5'
                 */
                TCPR_ac_B.Switch1_j = 0.0F;
            }
            else
            {
                /* Switch: '<S380>/Switch1' incorporates:
                 *  Constant: '<S271>/Calib'
                 */
                TCPR_ac_B.Switch1_j = KeTCPR_t_CntrlTcR_LdRmpHldffOnR;
            }

            /* End of Switch: '<S380>/Switch1' */

            /* Outputs for Atomic SubSystem: '<S375>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S379>/Switch1' incorporates:
             *  UnitDelay: '<S379>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_iy = TCPR_ac_B.Switch1_j;

            /* End of Outputs for SubSystem: '<S375>/Timer Retrigger Reset Enabled' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S375>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S379>/Switch1' incorporates:
             *  Constant: '<S232>/Calib'
             *  Constant: '<S379>/Constant Value4'
             *  MinMax: '<S379>/Maximum'
             *  Sum: '<S379>/Subtraction'
             *  UnitDelay: '<S379>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_iy = fmaxf
                (TCPR_ac_DW.UnitDelay_DSTATE_iy - HeTCPR_t_MedTED_dT, 0.0F);

            /* End of Outputs for SubSystem: '<S375>/Timer Retrigger Reset Enabled' */
        }

        /* End of Outputs for SubSystem: '<S375>/Hold_OFF_Time' */

        /* If: '<S371>/If1' incorporates:
         *  Constant: '<S246>/Calib'
         *  Constant: '<S371>/Constant Value3'
         *  Constant: '<S379>/Constant Value2'
         *  Logic: '<S371>/Logical Operator'
         *  Logic: '<S371>/Logical Operator1'
         *  Logic: '<S371>/Logical Operator2'
         *  Logic: '<S371>/Logical Operator3'
         *  RelationalOperator: '<S371>/Comparison2'
         *  RelationalOperator: '<S379>/Greater  Than1'
         *  UnitDelay: '<S363>/Unit Delay2'
         *  UnitDelay: '<S379>/Unit Delay'
         */
        if ((((KeTCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_GreaterThan_f) ||
                rtb_GreaterThan_i) || rtb_GreaterThan_l3)
        {
            /* Outputs for IfAction SubSystem: '<S371>/RstPth_Crt_TcRMax' incorporates:
             *  ActionPort: '<S377>/Action Port'
             */
            TCPR_ac_RstPth_Crt_TcRMax(TCPR_ac_B.Product1_o,
                rtb_TmpSignalConversionAtVeHSER_M_C2_Tor,
                &rtb_TmpSignalConversionAtVeHSER_M_Clc_bu);

            /* End of Outputs for SubSystem: '<S371>/RstPth_Crt_TcRMax' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S375>/Timer Retrigger Reset Enabled' */
            if (((!KeTCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_GreaterThan_f) ||
                    ((TCPR_ac_DW.UnitDelay_DSTATE_iy > 0.0F) &&
                     (TCPR_ac_B.Product_m >= 0.0F)))
            {
                /* Outputs for IfAction SubSystem: '<S371>/RstHld_Crt_TcRMax' incorporates:
                 *  ActionPort: '<S376>/Action Port'
                 */
                TCPR_ac_RstHld_Crt_TcRMax
                    (rtb_TmpSignalConversionAtVeHSER_M_C2_Tor,
                     &rtb_TmpSignalConversionAtVeHSER_M_Clc_bu);

                /* End of Outputs for SubSystem: '<S371>/RstHld_Crt_TcRMax' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S371>/Achived_LdRamp' incorporates:
                 *  ActionPort: '<S374>/Action Port'
                 */
                TCPR_ac_Achived_LdRamp(TCPR_ac_B.Product_m,
                                       TCPR_ac_DW.UnitDelay2_DSTATE_b,
                                       &rtb_TmpSignalConversionAtVeHSER_M_Clc_bu);

                /* End of Outputs for SubSystem: '<S371>/Achived_LdRamp' */
            }

            /* End of Outputs for SubSystem: '<S375>/Timer Retrigger Reset Enabled' */
        }

        /* End of If: '<S371>/If1' */

        /* Outputs for Atomic SubSystem: '<S363>/Limiter1' */
        /* Switch: '<S369>/Switch1' incorporates:
         *  RelationalOperator: '<S369>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_C2_Opt >=
                rtb_TmpSignalConversionAtVeHSER_M_Clc_bu)
        {
            /* Product: '<S363>/Product' */
            rtb_TmpSignalConversionAtVeHSER_M_C2_Opt =
                rtb_TmpSignalConversionAtVeHSER_M_Clc_bu;
        }

        /* End of Switch: '<S369>/Switch1' */

        /* Switch: '<S369>/Switch' incorporates:
         *  Constant: '<S363>/Constant Value2'
         *  RelationalOperator: '<S369>/Relational Operator1'
         *  UnitDelay: '<S363>/Unit Delay2'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_C2_Opt > 0.0F)
        {
            TCPR_ac_DW.UnitDelay2_DSTATE_b =
                rtb_TmpSignalConversionAtVeHSER_M_C2_Opt;
        }
        else
        {
            TCPR_ac_DW.UnitDelay2_DSTATE_b = 0.0F;
        }

        /* End of Switch: '<S369>/Switch' */
        /* End of Outputs for SubSystem: '<S363>/Limiter1' */

        /* Outputs for Enabled SubSystem: '<S382>/Hold_OFF_Time' incorporates:
         *  EnablePort: '<S385>/Enable'
         */
        if (rtb_UnitDelay_dt)
        {
            /* Switch: '<S387>/Switch1' */
            if (rtb_GreaterThan_l3)
            {
                /* Switch: '<S387>/Switch1' incorporates:
                 *  Constant: '<S385>/Constant Value5'
                 */
                TCPR_ac_B.Switch1_h = 0.0F;
            }
            else
            {
                /* Switch: '<S387>/Switch1' incorporates:
                 *  Constant: '<S269>/Calib'
                 */
                TCPR_ac_B.Switch1_h = KeTCPR_t_CntrlTcRMin_LdRmpHldffOnR;
            }

            /* End of Switch: '<S387>/Switch1' */

            /* Outputs for Atomic SubSystem: '<S382>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S386>/Switch1' incorporates:
             *  UnitDelay: '<S386>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_c = TCPR_ac_B.Switch1_h;

            /* End of Outputs for SubSystem: '<S382>/Timer Retrigger Reset Enabled' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S382>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S386>/Switch1' incorporates:
             *  Constant: '<S232>/Calib'
             *  Constant: '<S386>/Constant Value4'
             *  MinMax: '<S386>/Maximum'
             *  Sum: '<S386>/Subtraction'
             *  UnitDelay: '<S386>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_c = fmaxf(TCPR_ac_DW.UnitDelay_DSTATE_c
                - HeTCPR_t_MedTED_dT, 0.0F);

            /* End of Outputs for SubSystem: '<S382>/Timer Retrigger Reset Enabled' */
        }

        /* End of Outputs for SubSystem: '<S382>/Hold_OFF_Time' */

        /* If: '<S372>/If1' incorporates:
         *  Constant: '<S244>/Calib'
         *  Constant: '<S372>/Constant Value3'
         *  Constant: '<S386>/Constant Value2'
         *  Gain: '<S372>/Gain'
         *  Logic: '<S372>/Logical Operator'
         *  Logic: '<S372>/Logical Operator1'
         *  Logic: '<S372>/Logical Operator2'
         *  Logic: '<S372>/Logical Operator3'
         *  RelationalOperator: '<S372>/Comparison2'
         *  RelationalOperator: '<S386>/Greater  Than1'
         *  UnitDelay: '<S363>/Unit Delay1'
         *  UnitDelay: '<S386>/Unit Delay'
         */
        if ((((KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_UnitDelay_dt) ||
                rtb_GreaterThan_i) || rtb_GreaterThan_l3)
        {
            /* Outputs for IfAction SubSystem: '<S372>/RstPth_Crt_TcRMin' incorporates:
             *  ActionPort: '<S384>/Action Port'
             */
            TCPR_ac_RstPth_Crt_TcRMax_b(TCPR_ac_B.Product1_o, rtb_Abs2_ef,
                &rtb_TmpSignalConversionAtVeHSER_M_C2_Opt);

            /* End of Outputs for SubSystem: '<S372>/RstPth_Crt_TcRMin' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S382>/Timer Retrigger Reset Enabled' */
            if (((!KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_UnitDelay_dt) ||
                    ((TCPR_ac_DW.UnitDelay_DSTATE_c > 0.0F) &&
                     (TCPR_ac_B.Product_m >= 0.0F)))
            {
                /* Outputs for IfAction SubSystem: '<S372>/RstHld_Crt_TcRMin' incorporates:
                 *  ActionPort: '<S383>/Action Port'
                 */
                TCPR_ac_RstHld_Crt_TcRMax_d(rtb_Abs2_ef,
                    &rtb_TmpSignalConversionAtVeHSER_M_C2_Opt);

                /* End of Outputs for SubSystem: '<S372>/RstHld_Crt_TcRMin' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S372>/Achived_LdRamp' incorporates:
                 *  ActionPort: '<S381>/Action Port'
                 */
                TCPR_ac_Achived_LdRamp_o(-TCPR_ac_B.Product_m,
                    TCPR_ac_DW.UnitDelay1_DSTATE_d,
                    &rtb_TmpSignalConversionAtVeHSER_M_C2_Opt);

                /* End of Outputs for SubSystem: '<S372>/Achived_LdRamp' */
            }

            /* End of Outputs for SubSystem: '<S382>/Timer Retrigger Reset Enabled' */
        }

        /* End of If: '<S372>/If1' */

        /* Outputs for Atomic SubSystem: '<S363>/Limiter2' */
        /* Switch: '<S370>/Switch1' incorporates:
         *  Constant: '<S363>/Constant Value3'
         *  RelationalOperator: '<S370>/Relational Operator'
         */
        if (0.0F < rtb_TmpSignalConversionAtVeHSER_M_C2_Opt)
        {
            /* Product: '<S363>/Product' */
            rtb_TmpSignalConversionAtVeHSER_M_C2_Opt = 0.0F;
        }

        /* End of Switch: '<S370>/Switch1' */

        /* Switch: '<S370>/Switch' incorporates:
         *  RelationalOperator: '<S370>/Relational Operator1'
         *  UnitDelay: '<S363>/Unit Delay1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_C2_Opt >
                rtb_TmpSignalConversionAtVeHSER_M_Clch_a)
        {
            TCPR_ac_DW.UnitDelay1_DSTATE_d =
                rtb_TmpSignalConversionAtVeHSER_M_C2_Opt;
        }
        else
        {
            TCPR_ac_DW.UnitDelay1_DSTATE_d =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_a;
        }

        /* End of Switch: '<S370>/Switch' */
        /* End of Outputs for SubSystem: '<S363>/Limiter2' */

        /* Switch: '<S363>/Switch3' incorporates:
         *  Constant: '<S231>/Calib'
         *  Logic: '<S363>/NOT'
         *  UnitDelay: '<S363>/Unit Delay1'
         *  UnitDelay: '<S363>/Unit Delay2'
         */
        if (!HeTCPR_b_Enb_C2_Asymetric_ClchLim)
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay2_DSTATE_b;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay1_DSTATE_d;
        }

        /* End of Switch: '<S363>/Switch3' */

        /* Switch: '<S363>/Switch2' incorporates:
         *  Constant: '<S236>/Calib'
         *  Product: '<S363>/Product2'
         */
        rtb_TmpSignalConversionAtVeHSER_M_Clch_a =
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ * KeTCPR_K_C2_Min_Scalar;

        /* Switch: '<S363>/Switch1' incorporates:
         *  Constant: '<S241>/Calib'
         */
        if (KeTCPR_b_C2_UseLCCMinMaxTrqAllwd)
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                rtb_TmpSignalConversionAtVeTCCR_M_LCCMin;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_a;
        }

        /* End of Switch: '<S363>/Switch1' */

        /* VariantMerge generated from: '<S3>/VariantSource30' incorporates:
         *  MinMax: '<S363>/Maximum'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_dn = fmaxf
            (rtb_TmpSignalConversionAtVeHTDR_M_Clch1_,
             rtb_TmpSignalConversionAtVeHSER_M_Clch_a);

        /* Product: '<S363>/Product' incorporates:
         *  Constant: '<S235>/Calib'
         *  UnitDelay: '<S363>/Unit Delay2'
         */
        rtb_TmpSignalConversionAtVeHSER_M_C2_Opt = KeTCPR_K_C2_Max_Scalar *
            TCPR_ac_DW.UnitDelay2_DSTATE_b;

        /* Switch: '<S363>/Switch2' incorporates:
         *  Constant: '<S241>/Calib'
         */
        if (KeTCPR_b_C2_UseLCCMinMaxTrqAllwd)
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                rtb_TmpSignalConversionAtVeTCCR_M_LCCMax;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                rtb_TmpSignalConversionAtVeHSER_M_C2_Opt;
        }

        /* End of Switch: '<S363>/Switch2' */

        /* VariantMerge generated from: '<S3>/VariantSource29' incorporates:
         *  MinMax: '<S363>/Maximum1'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_b = fminf
            (rtb_TmpSignalConversionAtVeHTDR_M_Clch1_,
             rtb_TmpSignalConversionAtVeHSER_M_C2_Opt);

        /* End of Outputs for SubSystem: '<S304>/Lcked_Ld_TcR_Cntrl' */
    }
    else if ((KeTCPR_b_C2_UseSignedClutchTh) &&
             (KeTCPR_b_C2_UseLCCMinMaxTrqAllwd))
    {
        /* Outputs for IfAction SubSystem: '<S304>/Rlsd_Ld_TcR_Posit' incorporates:
         *  ActionPort: '<S366>/Action Port'
         */
        /* Switch: '<S366>/Switch1' incorporates:
         *  Constant: '<S241>/Calib'
         */
        if (KeTCPR_b_C2_UseLCCMinMaxTrqAllwd)
        {
            /* VariantMerge generated from: '<S3>/VariantSource29' incorporates:
             *  MinMax: '<S366>/MinMax1'
             */
            TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_b = fminf
                (VeTCPC_M_C2LeadMaxCap, rtb_TmpSignalConversionAtVeTCCR_M_LCCMax);
        }
        else
        {
            /* VariantMerge generated from: '<S3>/VariantSource29' incorporates:
             *  Abs: '<S366>/Abs1'
             */
            TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_b = fabsf
                (VeTCPC_M_C2LeadMaxCap);
        }

        /* End of Switch: '<S366>/Switch1' */

        /* VariantMerge generated from: '<S3>/VariantSource30' incorporates:
         *  Constant: '<S366>/Constant Value1'
         *  Gain: '<S390>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_dn = 0.0F;

        /* End of Outputs for SubSystem: '<S304>/Rlsd_Ld_TcR_Posit' */
    }
    else if (KeTCPR_b_CntrlTcR_OvrdTo0_OnRlsd)
    {
        /* Outputs for IfAction SubSystem: '<S304>/RlsdLd_TcR_Ovrd' incorporates:
         *  ActionPort: '<S364>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource29' incorporates:
         *  Constant: '<S364>/Constant Value1'
         *  SignalConversion generated from: '<S364>/LeadTcR_Max'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_b = 0.0F;

        /* VariantMerge generated from: '<S3>/VariantSource30' incorporates:
         *  Constant: '<S364>/Constant Value2'
         *  SignalConversion generated from: '<S364>/LeadTcR_Min'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_dn = 0.0F;

        /* End of Outputs for SubSystem: '<S304>/RlsdLd_TcR_Ovrd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S304>/Rlsd_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S365>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource29' incorporates:
         *  Gain: '<S388>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_b =
            rtb_TmpSignalConversionAtVeHSER_M_C2_Opt;

        /* VariantMerge generated from: '<S3>/VariantSource30' incorporates:
         *  Gain: '<S389>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_dn =
            rtb_TmpSignalConversionAtVeHSER_M_C2_Opt;

        /* End of Outputs for SubSystem: '<S304>/Rlsd_Ld_TcR_Cntrl' */
    }

    if (rtb_GreaterThan_d)
    {
        /* Outputs for IfAction SubSystem: '<S305>/Lcked_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S391>/Action Port'
         */
        /* Sum: '<S394>/Sum2' incorporates:
         *  Constant: '<S238>/Calib'
         */
        rtb_TmpSignalConversionAtVeHSER_M_Clch_a = VeTCPC_M_C2PredMaxCap -
            KeTCPR_M_C2_ClmpTorq;

        /* Outputs for Atomic SubSystem: '<S394>/Limiter' */
        /* Switch: '<S396>/Switch1' incorporates:
         *  RelationalOperator: '<S396>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clc_fc <
                rtb_TmpSignalConversionAtVeHSER_M_Clch_a)
        {
            /* Switch: '<S395>/Switch1' */
            rtb_TmpSignalConversionAtVeHSER_M_Clch_a =
                rtb_TmpSignalConversionAtVeHSER_M_Clc_fc;
        }

        /* End of Switch: '<S396>/Switch1' */

        /* Switch: '<S396>/Switch' incorporates:
         *  Constant: '<S394>/Constant Value3'
         *  RelationalOperator: '<S396>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_a <= 0.0F)
        {
            /* Switch: '<S396>/Switch' */
            rtb_TmpSignalConversionAtVeHSER_M_Clch_a = 0.0F;
        }

        /* End of Switch: '<S396>/Switch' */
        /* End of Outputs for SubSystem: '<S394>/Limiter' */

        /* Outputs for Atomic SubSystem: '<S391>/Limiter1' */
        /* Switch: '<S395>/Switch1' incorporates:
         *  RelationalOperator: '<S395>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_a >= VeTCPC_M_C2PredMaxCap)
        {
            /* Switch: '<S395>/Switch1' */
            rtb_TmpSignalConversionAtVeHSER_M_Clch_a = VeTCPC_M_C2PredMaxCap;
        }

        /* End of Switch: '<S395>/Switch1' */

        /* Switch: '<S395>/Switch' incorporates:
         *  Constant: '<S391>/Constant Value2'
         *  RelationalOperator: '<S395>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_a <= 0.0F)
        {
            /* Switch: '<S395>/Switch' */
            rtb_TmpSignalConversionAtVeHSER_M_Clch_a = 0.0F;
        }

        /* End of Switch: '<S395>/Switch' */
        /* End of Outputs for SubSystem: '<S391>/Limiter1' */

        /* VariantMerge generated from: '<S3>/VariantSource32' incorporates:
         *  Constant: '<S235>/Calib'
         *  Product: '<S391>/Product'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_bd =
            KeTCPR_K_C2_Max_Scalar * rtb_TmpSignalConversionAtVeHSER_M_Clch_a;

        /* VariantMerge generated from: '<S3>/VariantSource33' incorporates:
         *  Constant: '<S236>/Calib'
         *  Product: '<S391>/Product1'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_ce =
            rtb_TmpSignalConversionAtVeHSER_M_Clch_a * KeTCPR_K_C2_Min_Scalar;

        /* End of Outputs for SubSystem: '<S305>/Lcked_Ld_TcR_Cntrl' */
    }
    else if (KeTCPR_b_PredCntrlTcR_OvrdTo0_OnRlsd)
    {
        /* Outputs for IfAction SubSystem: '<S305>/RlsdLd_TcR_Ovrd' incorporates:
         *  ActionPort: '<S392>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource32' incorporates:
         *  Constant: '<S392>/Constant Value1'
         *  SignalConversion generated from: '<S392>/LeadTcR_Max'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_bd = 0.0F;

        /* VariantMerge generated from: '<S3>/VariantSource33' incorporates:
         *  Constant: '<S392>/Constant Value2'
         *  SignalConversion generated from: '<S392>/LeadTcR_Min'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_ce = 0.0F;

        /* End of Outputs for SubSystem: '<S305>/RlsdLd_TcR_Ovrd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S305>/Rlsd_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S393>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource32' incorporates:
         *  Gain: '<S397>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_bd =
            VeTCPC_M_C2PredMaxCap;

        /* VariantMerge generated from: '<S3>/VariantSource33' incorporates:
         *  Gain: '<S393>/Gain'
         *  Gain: '<S398>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_ce =
            -VeTCPC_M_C2PredMaxCap;

        /* End of Outputs for SubSystem: '<S305>/Rlsd_Ld_TcR_Cntrl' */
    }

    /* VariantMerge generated from: '<S3>/VariantSource31' incorporates:
     *  Constant: '<S241>/Calib'
     *  Constant: '<S242>/Calib'
     *  Constant: '<S247>/Calib'
     *  Constant: '<S251>/Calib'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_f1 = rtb_AND_ob;

    /* VariantMerge generated from: '<S3>/VariantSource17' */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_j = rtb_Switch_fc;

    /* VariantMerge generated from: '<S3>/VariantSource27' */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_gn =
        rtb_TmpSignalConversionAtVeHSER_M_C2_Tor;

#endif

    /* End of If: '<S275>/If' */
    /* End of Outputs for SubSystem: '<S275>/Signal Latch On With Reset3' */
    /* End of Outputs for SubSystem: '<S275>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S275>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S275>/Signal Latch On With Reset2' */
    /* End of Outputs for SubSystem: '<S275>/EdgeFalling2' */
    /* End of Outputs for SubSystem: '<S275>/Signal Latch On With Reset4' */
    /* End of Outputs for SubSystem: '<S303>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S303>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S304>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S304>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S471>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S471>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S470>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S470>/EdgeRising' */
    /* If: '<S472>/If1' incorporates:
     *  Constant: '<S434>/Calib'
     *  Constant: '<S435>/Calib'
     *  Constant: '<S439>/Calib'
     *  Constant: '<S443>/Calib'
     *  Gain: '<S465>/Gain'
     *  Gain: '<S474>/Gain'
     *  Gain: '<S475>/Gain'
     *  Gain: '<S476>/Gain'
     *  If: '<S470>/If1'
     *  If: '<S471>/If1'
     *  Logic: '<S471>/Logical'
     *  RelationalOperator: '<S470>/Comparison1'
     *  RelationalOperator: '<S471>/Comparison1'
     *  RelationalOperator: '<S477>/Comparison5'
     */
#if Rte_SysCon_Variant_TCPR_5

    /* VariantMerge generated from: '<S3>/VariantSource36' */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_mo = rtb_Merge1_p;

    /* RelationalOperator: '<S470>/Comparison1' */
    rtb_GreaterThan_d = (rtb_TmpSignalConversionAtVeHSER_M_Clch_m >= rtb_Abs2_n);

    /* Logic: '<S508>/AND' incorporates:
     *  Logic: '<S508>/OR1'
     *  UnitDelay: '<S508>/Unit Delay'
     */
    rtb_GreaterThan_c = (rtb_GreaterThan_o0 && (!TCPR_ac_DW.UnitDelay_DSTATE_lu5));

    /* Update for UnitDelay: '<S508>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_lu5 = rtb_GreaterThan_o0;

    /* Logic: '<S509>/AND' incorporates:
     *  Logic: '<S509>/OR1'
     *  UnitDelay: '<S509>/Unit Delay'
     */
    rtb_GreaterThan_i = (rtb_GreaterThan_d && (!TCPR_ac_DW.UnitDelay_DSTATE_lu));

    /* Update for UnitDelay: '<S509>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_lu = rtb_GreaterThan_d;

    /* RelationalOperator: '<S477>/Comparison5' incorporates:
     *  UnitDelay: '<S477>/Unit Delay'
     */
    rtb_GreaterThan_d = (rtb_AND_fuh != TCPR_ac_DW.UnitDelay_DSTATE_kf);
    if (rtb_GreaterThan_o0)
    {
        /* Outputs for IfAction SubSystem: '<S470>/Lcked_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S510>/Action Port'
         */
        /* RelationalOperator: '<S510>/Relational Operator' incorporates:
         *  Constant: '<S510>/Constant Value1'
         */
        rtb_GreaterThan_f = (rtb_TmpSignalConversionAtVeHSER_M_Clch_b < 0.0F);

        /* Outputs for Atomic SubSystem: '<S510>/EdgeRising' */
        /* Logic: '<S513>/AND' incorporates:
         *  Logic: '<S513>/OR1'
         *  UnitDelay: '<S513>/Unit Delay'
         */
        rtb_GreaterThan_l3 = (rtb_GreaterThan_f &&
                              (!TCPR_ac_DW.UnitDelay_DSTATE_eo));

        /* Update for UnitDelay: '<S513>/Unit Delay' */
        TCPR_ac_DW.UnitDelay_DSTATE_eo = rtb_GreaterThan_f;

        /* End of Outputs for SubSystem: '<S510>/EdgeRising' */

        /* Switch: '<S510>/Switch' */
        if (rtb_AND_fuh)
        {
            rtb_TmpSignalConversionAtVeHSER_M_C3_Tor = rtb_Merge_ou;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHSER_M_C3_Tor = rtb_Abs2_n;
        }

        /* End of Switch: '<S510>/Switch' */

        /* Sum: '<S514>/Sum2' incorporates:
         *  Constant: '<S433>/Calib'
         */
        rtb_TmpSignalConversionAtVeHSER_M_Clc_fc =
            rtb_TmpSignalConversionAtVeHSER_M_C3_Tor - KeTCPR_M_C3_ClmpTorq;

        /* Outputs for Atomic SubSystem: '<S514>/Limiter' */
        /* Switch: '<S519>/Switch1' incorporates:
         *  RelationalOperator: '<S519>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_m <
                rtb_TmpSignalConversionAtVeHSER_M_Clc_fc)
        {
            /* Switch: '<S510>/Switch1' */
            rtb_TmpSignalConversionAtVeHSER_M_Clc_fc =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_m;
        }

        /* End of Switch: '<S519>/Switch1' */

        /* Switch: '<S519>/Switch' incorporates:
         *  Constant: '<S514>/Constant Value3'
         *  RelationalOperator: '<S519>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clc_fc <= 0.0F)
        {
            /* Switch: '<S519>/Switch' */
            rtb_TmpSignalConversionAtVeHSER_M_Clc_fc = 0.0F;
        }

        /* End of Switch: '<S519>/Switch' */
        /* End of Outputs for SubSystem: '<S514>/Limiter' */

        /* If: '<S517>/If1' incorporates:
         *  Constant: '<S438>/Calib'
         *  Logic: '<S517>/Logical Operator'
         *  Logic: '<S517>/Logical Operator1'
         *  Logic: '<S517>/Logical Operator2'
         *  UnitDelay: '<S510>/Unit Delay2'
         */
        if ((((KeTCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_GreaterThan_c) ||
                rtb_GreaterThan_d) || rtb_GreaterThan_i)
        {
            /* Outputs for IfAction SubSystem: '<S517>/RstPth_Crt_TcRMax' incorporates:
             *  ActionPort: '<S522>/Action Port'
             */
            TCPR_ac_RstPth_Crt_TcRMax(TCPR_ac_B.Product1_h, rtb_Merge_ou,
                &rtb_TmpSignalConversionAtVeHSER_M_C3_Tor);

            /* End of Outputs for SubSystem: '<S517>/RstPth_Crt_TcRMax' */
        }
        else if ((!KeTCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_GreaterThan_c)
        {
            /* Outputs for IfAction SubSystem: '<S517>/RstHld_Crt_TcRMax' incorporates:
             *  ActionPort: '<S521>/Action Port'
             */
            TCPR_ac_RstHld_Crt_TcRMax(rtb_Merge_ou,
                &rtb_TmpSignalConversionAtVeHSER_M_C3_Tor);

            /* End of Outputs for SubSystem: '<S517>/RstHld_Crt_TcRMax' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S517>/Achived_LdRamp' incorporates:
             *  ActionPort: '<S520>/Action Port'
             */
            TCPR_ac_Achived_LdRamp(TCPR_ac_B.Product_o,
                                   TCPR_ac_DW.UnitDelay2_DSTATE_jc,
                                   &rtb_TmpSignalConversionAtVeHSER_M_C3_Tor);

            /* End of Outputs for SubSystem: '<S517>/Achived_LdRamp' */
        }

        /* End of If: '<S517>/If1' */

        /* Outputs for Atomic SubSystem: '<S510>/Limiter1' */
        /* Switch: '<S515>/Switch1' incorporates:
         *  RelationalOperator: '<S515>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clc_fc >=
                rtb_TmpSignalConversionAtVeHSER_M_C3_Tor)
        {
            /* Switch: '<S510>/Switch1' */
            rtb_TmpSignalConversionAtVeHSER_M_Clc_fc =
                rtb_TmpSignalConversionAtVeHSER_M_C3_Tor;
        }

        /* End of Switch: '<S515>/Switch1' */

        /* Switch: '<S515>/Switch' incorporates:
         *  Constant: '<S510>/Constant Value2'
         *  RelationalOperator: '<S515>/Relational Operator1'
         *  UnitDelay: '<S510>/Unit Delay2'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clc_fc > 0.0F)
        {
            TCPR_ac_DW.UnitDelay2_DSTATE_jc =
                rtb_TmpSignalConversionAtVeHSER_M_Clc_fc;
        }
        else
        {
            TCPR_ac_DW.UnitDelay2_DSTATE_jc = 0.0F;
        }

        /* End of Switch: '<S515>/Switch' */
        /* End of Outputs for SubSystem: '<S510>/Limiter1' */

        /* If: '<S518>/If1' incorporates:
         *  Constant: '<S436>/Calib'
         *  Gain: '<S518>/Gain'
         *  Logic: '<S518>/Logical Operator'
         *  Logic: '<S518>/Logical Operator1'
         *  Logic: '<S518>/Logical Operator2'
         *  UnitDelay: '<S510>/Unit Delay1'
         */
        if ((((KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_GreaterThan_l3) ||
                rtb_GreaterThan_d) || rtb_GreaterThan_i)
        {
            /* Outputs for IfAction SubSystem: '<S518>/RstPth_Crt_TcRMax' incorporates:
             *  ActionPort: '<S525>/Action Port'
             */
            TCPR_ac_RstPth_Crt_TcRMax_b(TCPR_ac_B.Product1_h, rtb_Merge1_p,
                &rtb_TmpSignalConversionAtVeHSER_M_Clc_fc);

            /* End of Outputs for SubSystem: '<S518>/RstPth_Crt_TcRMax' */
        }
        else if ((!KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_GreaterThan_l3)
        {
            /* Outputs for IfAction SubSystem: '<S518>/RstHld_Crt_TcRMax' incorporates:
             *  ActionPort: '<S524>/Action Port'
             */
            TCPR_ac_RstHld_Crt_TcRMax_d(rtb_Merge1_p,
                &rtb_TmpSignalConversionAtVeHSER_M_Clc_fc);

            /* End of Outputs for SubSystem: '<S518>/RstHld_Crt_TcRMax' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S518>/Achived_LdRamp' incorporates:
             *  ActionPort: '<S523>/Action Port'
             */
            TCPR_ac_Achived_LdRamp_o(-TCPR_ac_B.Product_o,
                TCPR_ac_DW.UnitDelay1_DSTATE_e,
                &rtb_TmpSignalConversionAtVeHSER_M_Clc_fc);

            /* End of Outputs for SubSystem: '<S518>/Achived_LdRamp' */
        }

        /* End of If: '<S518>/If1' */

        /* Outputs for Atomic SubSystem: '<S510>/Limiter2' */
        /* Switch: '<S516>/Switch1' incorporates:
         *  Constant: '<S510>/Constant Value3'
         *  RelationalOperator: '<S516>/Relational Operator'
         */
        if (0.0F < rtb_TmpSignalConversionAtVeHSER_M_Clc_fc)
        {
            /* Switch: '<S510>/Switch1' */
            rtb_TmpSignalConversionAtVeHSER_M_Clc_fc = 0.0F;
        }

        /* End of Switch: '<S516>/Switch1' */

        /* Switch: '<S516>/Switch' incorporates:
         *  RelationalOperator: '<S516>/Relational Operator1'
         *  UnitDelay: '<S510>/Unit Delay1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clc_fc >
                rtb_TmpSignalConversionAtVeHSER_M_Clch_b)
        {
            TCPR_ac_DW.UnitDelay1_DSTATE_e =
                rtb_TmpSignalConversionAtVeHSER_M_Clc_fc;
        }
        else
        {
            TCPR_ac_DW.UnitDelay1_DSTATE_e =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_b;
        }

        /* End of Switch: '<S516>/Switch' */
        /* End of Outputs for SubSystem: '<S510>/Limiter2' */

        /* Merge: '<S470>/Merge' incorporates:
         *  Constant: '<S430>/Calib'
         *  Product: '<S510>/Product'
         *  UnitDelay: '<S510>/Unit Delay2'
         */
        rtb_TmpSignalConversionAtVeHSER_M_C3_Tor = KeTCPR_K_C3_Max_Scalar *
            TCPR_ac_DW.UnitDelay2_DSTATE_jc;

        /* Switch: '<S510>/Switch1' incorporates:
         *  Constant: '<S428>/Calib'
         *  Logic: '<S510>/NOT'
         *  UnitDelay: '<S510>/Unit Delay1'
         *  UnitDelay: '<S510>/Unit Delay2'
         */
        if (!HeTCPR_b_Enb_C3_Asymetric_ClchLim)
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay2_DSTATE_jc;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay1_DSTATE_e;
        }

        /* End of Switch: '<S510>/Switch1' */

        /* VariantMerge generated from: '<S3>/VariantSource38' incorporates:
         *  Constant: '<S431>/Calib'
         *  Product: '<S510>/Product1'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_dx =
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ * KeTCPR_K_C3_Min_Scalar;

        /* End of Outputs for SubSystem: '<S470>/Lcked_Ld_TcR_Cntrl' */
    }
    else if (KeTCPR_b_CntrlTcR_OvrdTo0_OnRlsd)
    {
        /* Outputs for IfAction SubSystem: '<S470>/Rlsd_Ld_TcR_Ovrd' incorporates:
         *  ActionPort: '<S512>/Action Port'
         */
        /* Merge: '<S470>/Merge' incorporates:
         *  Constant: '<S512>/Constant Value1'
         *  SignalConversion generated from: '<S512>/LeadTcR_Max'
         */
        rtb_TmpSignalConversionAtVeHSER_M_C3_Tor = 0.0F;

        /* VariantMerge generated from: '<S3>/VariantSource38' incorporates:
         *  Constant: '<S512>/Constant Value2'
         *  SignalConversion generated from: '<S512>/LeadTcR_Min'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_dx = 0.0F;

        /* End of Outputs for SubSystem: '<S470>/Rlsd_Ld_TcR_Ovrd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S470>/Rlsd_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S511>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource38' incorporates:
         *  Gain: '<S527>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_dx =
            rtb_TmpSignalConversionAtVeHSER_M_C3_Tor;

        /* End of Outputs for SubSystem: '<S470>/Rlsd_Ld_TcR_Cntrl' */
    }

    /* RelationalOperator: '<S471>/Comparison1' incorporates:
     *  Constant: '<S439>/Calib'
     */
    rtb_GreaterThan_f = (rtb_TmpSignalConversionAtVeHSER_M_Clch_m >= rtb_Abs2_n);

    /* Logic: '<S528>/AND' incorporates:
     *  Logic: '<S528>/OR1'
     *  UnitDelay: '<S528>/Unit Delay'
     */
    rtb_GreaterThan_c = (rtb_GreaterThan_hr && (!TCPR_ac_DW.UnitDelay_DSTATE_jc));

    /* Update for UnitDelay: '<S528>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_jc = rtb_GreaterThan_hr;

    /* Logic: '<S529>/AND' incorporates:
     *  Logic: '<S529>/OR1'
     *  UnitDelay: '<S529>/Unit Delay'
     */
    rtb_GreaterThan_i = (rtb_GreaterThan_f && (!TCPR_ac_DW.UnitDelay_DSTATE_pf));

    /* Update for UnitDelay: '<S529>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_pf = rtb_GreaterThan_f;
    if (rtb_GreaterThan_hr)
    {
        /* Outputs for IfAction SubSystem: '<S471>/Lcked_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S530>/Action Port'
         */
        /* RelationalOperator: '<S530>/Relational Operator' incorporates:
         *  Constant: '<S530>/Constant Value1'
         */
        rtb_GreaterThan_hr = (rtb_TmpSignalConversionAtVeHSER_M_Clch_b < 0.0F);

        /* Outputs for Atomic SubSystem: '<S530>/EdgeRising' */
        /* Logic: '<S534>/AND' incorporates:
         *  Logic: '<S534>/OR1'
         *  UnitDelay: '<S534>/Unit Delay'
         */
        rtb_GreaterThan_f = (rtb_GreaterThan_hr &&
                             (!TCPR_ac_DW.UnitDelay_DSTATE_bx));

        /* Update for UnitDelay: '<S534>/Unit Delay' */
        TCPR_ac_DW.UnitDelay_DSTATE_bx = rtb_GreaterThan_hr;

        /* End of Outputs for SubSystem: '<S530>/EdgeRising' */

        /* Sum: '<S535>/Sum2' incorporates:
         *  Constant: '<S433>/Calib'
         */
        rtb_TmpSignalConversionAtVeHSER_M_C3_Opt = rtb_Abs2_n -
            KeTCPR_M_C3_ClmpTorq;

        /* Outputs for Atomic SubSystem: '<S535>/Limiter' */
        /* Switch: '<S540>/Switch1' incorporates:
         *  RelationalOperator: '<S540>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_m <
                rtb_TmpSignalConversionAtVeHSER_M_C3_Opt)
        {
            /* Product: '<S530>/Product' */
            rtb_TmpSignalConversionAtVeHSER_M_C3_Opt =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_m;
        }

        /* End of Switch: '<S540>/Switch1' */

        /* Switch: '<S540>/Switch' incorporates:
         *  Constant: '<S535>/Constant Value3'
         *  RelationalOperator: '<S540>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_C3_Opt <= 0.0F)
        {
            /* Switch: '<S540>/Switch' */
            rtb_TmpSignalConversionAtVeHSER_M_C3_Opt = 0.0F;
        }

        /* End of Switch: '<S540>/Switch' */
        /* End of Outputs for SubSystem: '<S535>/Limiter' */

        /* Outputs for Enabled SubSystem: '<S542>/Hold_OFF_Time' incorporates:
         *  EnablePort: '<S545>/Enable'
         */
        if (rtb_GreaterThan_c)
        {
            /* Switch: '<S547>/Switch1' */
            if (rtb_GreaterThan_i)
            {
                /* Switch: '<S547>/Switch1' incorporates:
                 *  Constant: '<S545>/Constant Value5'
                 */
                TCPR_ac_B.Switch1_c = 0.0F;
            }
            else
            {
                /* Switch: '<S547>/Switch1' incorporates:
                 *  Constant: '<S459>/Calib'
                 */
                TCPR_ac_B.Switch1_c = KeTCPR_t_CntrlTcR_LdRmpHldffOnR;
            }

            /* End of Switch: '<S547>/Switch1' */

            /* Outputs for Atomic SubSystem: '<S542>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S546>/Switch1' incorporates:
             *  UnitDelay: '<S546>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_g0 = TCPR_ac_B.Switch1_c;

            /* End of Outputs for SubSystem: '<S542>/Timer Retrigger Reset Enabled' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S542>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S546>/Switch1' incorporates:
             *  Constant: '<S429>/Calib'
             *  Constant: '<S546>/Constant Value4'
             *  MinMax: '<S546>/Maximum'
             *  Sum: '<S546>/Subtraction'
             *  UnitDelay: '<S546>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_g0 = fmaxf
                (TCPR_ac_DW.UnitDelay_DSTATE_g0 - HeTCPR_t_MedTED_dT, 0.0F);

            /* End of Outputs for SubSystem: '<S542>/Timer Retrigger Reset Enabled' */
        }

        /* End of Outputs for SubSystem: '<S542>/Hold_OFF_Time' */

        /* If: '<S538>/If1' incorporates:
         *  Constant: '<S438>/Calib'
         *  Constant: '<S538>/Constant Value3'
         *  Constant: '<S546>/Constant Value2'
         *  Logic: '<S538>/Logical Operator'
         *  Logic: '<S538>/Logical Operator1'
         *  Logic: '<S538>/Logical Operator2'
         *  Logic: '<S538>/Logical Operator3'
         *  RelationalOperator: '<S538>/Comparison2'
         *  RelationalOperator: '<S546>/Greater  Than1'
         *  UnitDelay: '<S530>/Unit Delay2'
         *  UnitDelay: '<S546>/Unit Delay'
         */
        if ((((KeTCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_GreaterThan_c) ||
                rtb_GreaterThan_d) || rtb_GreaterThan_i)
        {
            /* Outputs for IfAction SubSystem: '<S538>/RstPth_Crt_TcRMax' incorporates:
             *  ActionPort: '<S544>/Action Port'
             */
            TCPR_ac_RstPth_Crt_TcRMax(TCPR_ac_B.Product1_h,
                rtb_TmpSignalConversionAtVeHSER_M_C3_Tor,
                &rtb_TmpSignalConversionAtVeHSER_M_Clc_fc);

            /* End of Outputs for SubSystem: '<S538>/RstPth_Crt_TcRMax' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S542>/Timer Retrigger Reset Enabled' */
            if (((!KeTCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_GreaterThan_c) ||
                    ((TCPR_ac_DW.UnitDelay_DSTATE_g0 > 0.0F) &&
                     (TCPR_ac_B.Product_o >= 0.0F)))
            {
                /* Outputs for IfAction SubSystem: '<S538>/RstHld_Crt_TcRMax' incorporates:
                 *  ActionPort: '<S543>/Action Port'
                 */
                TCPR_ac_RstHld_Crt_TcRMax
                    (rtb_TmpSignalConversionAtVeHSER_M_C3_Tor,
                     &rtb_TmpSignalConversionAtVeHSER_M_Clc_fc);

                /* End of Outputs for SubSystem: '<S538>/RstHld_Crt_TcRMax' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S538>/Achived_LdRamp' incorporates:
                 *  ActionPort: '<S541>/Action Port'
                 */
                TCPR_ac_Achived_LdRamp(TCPR_ac_B.Product_o,
                                       TCPR_ac_DW.UnitDelay2_DSTATE_ne,
                                       &rtb_TmpSignalConversionAtVeHSER_M_Clc_fc);

                /* End of Outputs for SubSystem: '<S538>/Achived_LdRamp' */
            }

            /* End of Outputs for SubSystem: '<S542>/Timer Retrigger Reset Enabled' */
        }

        /* End of If: '<S538>/If1' */

        /* Outputs for Atomic SubSystem: '<S530>/Limiter1' */
        /* Switch: '<S536>/Switch1' incorporates:
         *  RelationalOperator: '<S536>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_C3_Opt >=
                rtb_TmpSignalConversionAtVeHSER_M_Clc_fc)
        {
            /* Product: '<S530>/Product' */
            rtb_TmpSignalConversionAtVeHSER_M_C3_Opt =
                rtb_TmpSignalConversionAtVeHSER_M_Clc_fc;
        }

        /* End of Switch: '<S536>/Switch1' */

        /* Switch: '<S536>/Switch' incorporates:
         *  Constant: '<S530>/Constant Value2'
         *  RelationalOperator: '<S536>/Relational Operator1'
         *  UnitDelay: '<S530>/Unit Delay2'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_C3_Opt > 0.0F)
        {
            TCPR_ac_DW.UnitDelay2_DSTATE_ne =
                rtb_TmpSignalConversionAtVeHSER_M_C3_Opt;
        }
        else
        {
            TCPR_ac_DW.UnitDelay2_DSTATE_ne = 0.0F;
        }

        /* End of Switch: '<S536>/Switch' */
        /* End of Outputs for SubSystem: '<S530>/Limiter1' */

        /* Outputs for Enabled SubSystem: '<S549>/Hold_OFF_Time' incorporates:
         *  EnablePort: '<S552>/Enable'
         */
        if (rtb_GreaterThan_f)
        {
            /* Switch: '<S554>/Switch1' */
            if (rtb_GreaterThan_i)
            {
                /* Switch: '<S554>/Switch1' incorporates:
                 *  Constant: '<S552>/Constant Value5'
                 */
                TCPR_ac_B.Switch1_p = 0.0F;
            }
            else
            {
                /* Switch: '<S554>/Switch1' incorporates:
                 *  Constant: '<S457>/Calib'
                 */
                TCPR_ac_B.Switch1_p = KeTCPR_t_CntrlTcRMin_LdRmpHldffOnR;
            }

            /* End of Switch: '<S554>/Switch1' */

            /* Outputs for Atomic SubSystem: '<S549>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S553>/Switch1' incorporates:
             *  UnitDelay: '<S553>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_p = TCPR_ac_B.Switch1_p;

            /* End of Outputs for SubSystem: '<S549>/Timer Retrigger Reset Enabled' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S549>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S553>/Switch1' incorporates:
             *  Constant: '<S429>/Calib'
             *  Constant: '<S553>/Constant Value4'
             *  MinMax: '<S553>/Maximum'
             *  Sum: '<S553>/Subtraction'
             *  UnitDelay: '<S553>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_p = fmaxf(TCPR_ac_DW.UnitDelay_DSTATE_p
                - HeTCPR_t_MedTED_dT, 0.0F);

            /* End of Outputs for SubSystem: '<S549>/Timer Retrigger Reset Enabled' */
        }

        /* End of Outputs for SubSystem: '<S549>/Hold_OFF_Time' */

        /* If: '<S539>/If1' incorporates:
         *  Constant: '<S436>/Calib'
         *  Constant: '<S539>/Constant Value3'
         *  Constant: '<S553>/Constant Value2'
         *  Gain: '<S539>/Gain'
         *  Logic: '<S539>/Logical Operator'
         *  Logic: '<S539>/Logical Operator1'
         *  Logic: '<S539>/Logical Operator2'
         *  Logic: '<S539>/Logical Operator3'
         *  RelationalOperator: '<S539>/Comparison2'
         *  RelationalOperator: '<S553>/Greater  Than1'
         *  UnitDelay: '<S530>/Unit Delay1'
         *  UnitDelay: '<S553>/Unit Delay'
         */
        if ((((KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_GreaterThan_f) ||
                rtb_GreaterThan_d) || rtb_GreaterThan_i)
        {
            /* Outputs for IfAction SubSystem: '<S539>/RstPth_Crt_TcRMin' incorporates:
             *  ActionPort: '<S551>/Action Port'
             */
            TCPR_ac_RstPth_Crt_TcRMax_b(TCPR_ac_B.Product1_h, rtb_Merge1_p,
                &rtb_TmpSignalConversionAtVeHSER_M_C3_Opt);

            /* End of Outputs for SubSystem: '<S539>/RstPth_Crt_TcRMin' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S549>/Timer Retrigger Reset Enabled' */
            if (((!KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_GreaterThan_f) ||
                ((TCPR_ac_DW.UnitDelay_DSTATE_p > 0.0F) && (TCPR_ac_B.Product_o >=
                  0.0F)))
            {
                /* Outputs for IfAction SubSystem: '<S539>/RstHld_Crt_TcRMin' incorporates:
                 *  ActionPort: '<S550>/Action Port'
                 */
                TCPR_ac_RstHld_Crt_TcRMax_d(rtb_Merge1_p,
                    &rtb_TmpSignalConversionAtVeHSER_M_C3_Opt);

                /* End of Outputs for SubSystem: '<S539>/RstHld_Crt_TcRMin' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S539>/Achived_LdRamp' incorporates:
                 *  ActionPort: '<S548>/Action Port'
                 */
                TCPR_ac_Achived_LdRamp_o(-TCPR_ac_B.Product_o,
                    TCPR_ac_DW.UnitDelay1_DSTATE_g,
                    &rtb_TmpSignalConversionAtVeHSER_M_C3_Opt);

                /* End of Outputs for SubSystem: '<S539>/Achived_LdRamp' */
            }

            /* End of Outputs for SubSystem: '<S549>/Timer Retrigger Reset Enabled' */
        }

        /* End of If: '<S539>/If1' */

        /* Outputs for Atomic SubSystem: '<S530>/Limiter2' */
        /* Switch: '<S537>/Switch1' incorporates:
         *  Constant: '<S530>/Constant Value3'
         *  RelationalOperator: '<S537>/Relational Operator'
         */
        if (0.0F < rtb_TmpSignalConversionAtVeHSER_M_C3_Opt)
        {
            /* Product: '<S530>/Product' */
            rtb_TmpSignalConversionAtVeHSER_M_C3_Opt = 0.0F;
        }

        /* End of Switch: '<S537>/Switch1' */

        /* Switch: '<S537>/Switch' incorporates:
         *  RelationalOperator: '<S537>/Relational Operator1'
         *  UnitDelay: '<S530>/Unit Delay1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_C3_Opt >
                rtb_TmpSignalConversionAtVeHSER_M_Clch_b)
        {
            TCPR_ac_DW.UnitDelay1_DSTATE_g =
                rtb_TmpSignalConversionAtVeHSER_M_C3_Opt;
        }
        else
        {
            TCPR_ac_DW.UnitDelay1_DSTATE_g =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_b;
        }

        /* End of Switch: '<S537>/Switch' */
        /* End of Outputs for SubSystem: '<S530>/Limiter2' */

        /* Switch: '<S530>/Switch3' incorporates:
         *  Constant: '<S428>/Calib'
         *  Logic: '<S530>/NOT'
         *  UnitDelay: '<S530>/Unit Delay1'
         *  UnitDelay: '<S530>/Unit Delay2'
         */
        if (!HeTCPR_b_Enb_C3_Asymetric_ClchLim)
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay2_DSTATE_ne;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay1_DSTATE_g;
        }

        /* End of Switch: '<S530>/Switch3' */

        /* Switch: '<S530>/Switch2' incorporates:
         *  Constant: '<S431>/Calib'
         *  Product: '<S530>/Product2'
         */
        rtb_TmpSignalConversionAtVeHSER_M_Clch_b =
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ * KeTCPR_K_C3_Min_Scalar;

        /* Switch: '<S530>/Switch1' incorporates:
         *  Constant: '<S434>/Calib'
         */
        if (KeTCPR_b_C3_UseLCCMinMaxTrqAllwd)
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                rtb_TmpSignalConversionAtVeTCCR_M_LCCMin;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_b;
        }

        /* End of Switch: '<S530>/Switch1' */

        /* VariantMerge generated from: '<S3>/VariantSource40' incorporates:
         *  MinMax: '<S530>/Maximum'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_bo = fmaxf
            (rtb_TmpSignalConversionAtVeHTDR_M_Clch1_,
             rtb_TmpSignalConversionAtVeHSER_M_Clch_b);

        /* Product: '<S530>/Product' incorporates:
         *  Constant: '<S430>/Calib'
         *  UnitDelay: '<S530>/Unit Delay2'
         */
        rtb_TmpSignalConversionAtVeHSER_M_C3_Opt = KeTCPR_K_C3_Max_Scalar *
            TCPR_ac_DW.UnitDelay2_DSTATE_ne;

        /* Switch: '<S530>/Switch2' incorporates:
         *  Constant: '<S434>/Calib'
         */
        if (KeTCPR_b_C3_UseLCCMinMaxTrqAllwd)
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                rtb_TmpSignalConversionAtVeTCCR_M_LCCMax;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                rtb_TmpSignalConversionAtVeHSER_M_C3_Opt;
        }

        /* End of Switch: '<S530>/Switch2' */

        /* VariantMerge generated from: '<S3>/VariantSource39' incorporates:
         *  MinMax: '<S530>/Maximum1'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_f = fminf
            (rtb_TmpSignalConversionAtVeHTDR_M_Clch1_,
             rtb_TmpSignalConversionAtVeHSER_M_C3_Opt);

        /* End of Outputs for SubSystem: '<S471>/Lcked_Ld_TcR_Cntrl' */
    }
    else if ((KeTCPR_b_C3_UseSignedClutchTh) &&
             (KeTCPR_b_C3_UseLCCMinMaxTrqAllwd))
    {
        /* Outputs for IfAction SubSystem: '<S471>/Rlsd_Ld_TcR_Posit' incorporates:
         *  ActionPort: '<S533>/Action Port'
         */
        /* Switch: '<S533>/Switch1' incorporates:
         *  Constant: '<S434>/Calib'
         */
        if (KeTCPR_b_C3_UseLCCMinMaxTrqAllwd)
        {
            /* VariantMerge generated from: '<S3>/VariantSource39' incorporates:
             *  MinMax: '<S533>/MinMax1'
             */
            TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_f = fminf
                (rtb_Abs2_n, rtb_TmpSignalConversionAtVeTCCR_M_LCCMax);
        }
        else
        {
            /* VariantMerge generated from: '<S3>/VariantSource39' incorporates:
             *  Abs: '<S533>/Abs1'
             */
            TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_f = fabsf
                (rtb_Abs2_n);
        }

        /* End of Switch: '<S533>/Switch1' */

        /* VariantMerge generated from: '<S3>/VariantSource40' incorporates:
         *  Constant: '<S533>/Constant Value1'
         *  Gain: '<S557>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_bo = 0.0F;

        /* End of Outputs for SubSystem: '<S471>/Rlsd_Ld_TcR_Posit' */
    }
    else if (KeTCPR_b_CntrlTcR_OvrdTo0_OnRlsd)
    {
        /* Outputs for IfAction SubSystem: '<S471>/RlsdLd_TcR_Ovrd' incorporates:
         *  ActionPort: '<S531>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource39' incorporates:
         *  Constant: '<S531>/Constant Value1'
         *  SignalConversion generated from: '<S531>/LeadTcR_Max'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_f = 0.0F;

        /* VariantMerge generated from: '<S3>/VariantSource40' incorporates:
         *  Constant: '<S531>/Constant Value2'
         *  SignalConversion generated from: '<S531>/LeadTcR_Min'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_bo = 0.0F;

        /* End of Outputs for SubSystem: '<S471>/RlsdLd_TcR_Ovrd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S471>/Rlsd_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S532>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource39' incorporates:
         *  Gain: '<S555>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_f =
            rtb_TmpSignalConversionAtVeHSER_M_C3_Opt;

        /* VariantMerge generated from: '<S3>/VariantSource40' incorporates:
         *  Gain: '<S556>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_bo =
            rtb_TmpSignalConversionAtVeHSER_M_C3_Opt;

        /* End of Outputs for SubSystem: '<S471>/Rlsd_Ld_TcR_Cntrl' */
    }

    if (rtb_GreaterThan_o0)
    {
        /* Outputs for IfAction SubSystem: '<S472>/Lcked_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S558>/Action Port'
         */
        /* Sum: '<S561>/Sum2' incorporates:
         *  Constant: '<S433>/Calib'
         */
        rtb_TmpSignalConversionAtVeHSER_M_Clch_b = rtb_Abs2_n -
            KeTCPR_M_C3_ClmpTorq;

        /* Outputs for Atomic SubSystem: '<S561>/Limiter' */
        /* Switch: '<S563>/Switch1' incorporates:
         *  RelationalOperator: '<S563>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_m <
                rtb_TmpSignalConversionAtVeHSER_M_Clch_b)
        {
            /* Switch: '<S562>/Switch1' */
            rtb_TmpSignalConversionAtVeHSER_M_Clch_b =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_m;
        }

        /* End of Switch: '<S563>/Switch1' */

        /* Switch: '<S563>/Switch' incorporates:
         *  Constant: '<S561>/Constant Value3'
         *  RelationalOperator: '<S563>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_b <= 0.0F)
        {
            /* Switch: '<S563>/Switch' */
            rtb_TmpSignalConversionAtVeHSER_M_Clch_b = 0.0F;
        }

        /* End of Switch: '<S563>/Switch' */
        /* End of Outputs for SubSystem: '<S561>/Limiter' */

        /* Outputs for Atomic SubSystem: '<S558>/Limiter1' */
        /* Switch: '<S562>/Switch1' incorporates:
         *  RelationalOperator: '<S562>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_b >= rtb_Abs2_n)
        {
            /* Switch: '<S562>/Switch1' */
            rtb_TmpSignalConversionAtVeHSER_M_Clch_b = rtb_Abs2_n;
        }

        /* End of Switch: '<S562>/Switch1' */

        /* Switch: '<S562>/Switch' incorporates:
         *  Constant: '<S558>/Constant Value2'
         *  RelationalOperator: '<S562>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_b <= 0.0F)
        {
            /* Switch: '<S562>/Switch' */
            rtb_TmpSignalConversionAtVeHSER_M_Clch_b = 0.0F;
        }

        /* End of Switch: '<S562>/Switch' */
        /* End of Outputs for SubSystem: '<S558>/Limiter1' */

        /* VariantMerge generated from: '<S3>/VariantSource41' incorporates:
         *  Constant: '<S430>/Calib'
         *  Product: '<S558>/Product'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_lf =
            KeTCPR_K_C3_Max_Scalar * rtb_TmpSignalConversionAtVeHSER_M_Clch_b;

        /* VariantMerge generated from: '<S3>/VariantSource42' incorporates:
         *  Constant: '<S431>/Calib'
         *  Product: '<S558>/Product1'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Vari_dx2 =
            rtb_TmpSignalConversionAtVeHSER_M_Clch_b * KeTCPR_K_C3_Min_Scalar;

        /* End of Outputs for SubSystem: '<S472>/Lcked_Ld_TcR_Cntrl' */
    }
    else if (KeTCPR_b_PredCntrlTcR_OvrdTo0_OnRlsd)
    {
        /* Outputs for IfAction SubSystem: '<S472>/RlsdLd_TcR_Ovrd' incorporates:
         *  ActionPort: '<S559>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource41' incorporates:
         *  Constant: '<S559>/Constant Value1'
         *  SignalConversion generated from: '<S559>/LeadTcR_Max'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_lf = 0.0F;

        /* VariantMerge generated from: '<S3>/VariantSource42' incorporates:
         *  Constant: '<S559>/Constant Value2'
         *  SignalConversion generated from: '<S559>/LeadTcR_Min'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Vari_dx2 = 0.0F;

        /* End of Outputs for SubSystem: '<S472>/RlsdLd_TcR_Ovrd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S472>/Rlsd_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S560>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource41' incorporates:
         *  Gain: '<S564>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_lf = rtb_Abs2_n;

        /* VariantMerge generated from: '<S3>/VariantSource42' incorporates:
         *  Gain: '<S560>/Gain'
         *  Gain: '<S565>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Vari_dx2 = -rtb_Abs2_n;

        /* End of Outputs for SubSystem: '<S472>/Rlsd_Ld_TcR_Cntrl' */
    }

    /* Gain: '<S474>/Gain' incorporates:
     *  Constant: '<S434>/Calib'
     *  Constant: '<S435>/Calib'
     *  Constant: '<S439>/Calib'
     *  Constant: '<S443>/Calib'
     */
    VeTCPC_b_C3_SlipDetected = rtb_AND_fuh;

    /* VariantMerge generated from: '<S3>/VariantSource16' */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_g = rtb_Merge_ou;

    /* VariantMerge generated from: '<S3>/VariantSource37' */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_e =
        rtb_TmpSignalConversionAtVeHSER_M_C3_Tor;

#endif

    /* End of If: '<S472>/If1' */
    /* End of Outputs for SubSystem: '<S470>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S470>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S471>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S471>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S635>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S635>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S634>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S634>/EdgeRising' */
    /* If: '<S636>/If1' incorporates:
     *  Constant: '<S599>/Calib'
     *  Constant: '<S600>/Calib'
     *  Constant: '<S604>/Calib'
     *  Constant: '<S607>/Calib'
     *  Gain: '<S629>/Gain'
     *  Gain: '<S638>/Gain'
     *  Gain: '<S639>/Gain'
     *  Gain: '<S640>/Gain'
     *  If: '<S634>/If1'
     *  If: '<S635>/If1'
     *  Logic: '<S635>/Logical'
     *  RelationalOperator: '<S634>/Comparison1'
     *  RelationalOperator: '<S635>/Comparison1'
     *  RelationalOperator: '<S641>/Comparison5'
     */
#if Rte_SysCon_Variant_TCPR_1

    /* VariantMerge generated from: '<S3>/VariantSource47' */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_p2 = rtb_Merge1_ps;

    /* RelationalOperator: '<S634>/Comparison1' */
    rtb_GreaterThan_o0 = (rtb_TmpSignalConversionAtVeHSER_M_Clch_g >= rtb_Abs2);

    /* Logic: '<S672>/AND' incorporates:
     *  Logic: '<S672>/OR1'
     *  UnitDelay: '<S672>/Unit Delay'
     */
    rtb_GreaterThan_hr = (rtb_GreaterThan_h5 && (!TCPR_ac_DW.UnitDelay_DSTATE_a));

    /* Update for UnitDelay: '<S672>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_a = rtb_GreaterThan_h5;

    /* Logic: '<S673>/AND' incorporates:
     *  Logic: '<S673>/OR1'
     *  UnitDelay: '<S673>/Unit Delay'
     */
    rtb_GreaterThan_d = (rtb_GreaterThan_o0 && (!TCPR_ac_DW.UnitDelay_DSTATE_k1));

    /* Update for UnitDelay: '<S673>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_k1 = rtb_GreaterThan_o0;

    /* RelationalOperator: '<S641>/Comparison5' incorporates:
     *  UnitDelay: '<S641>/Unit Delay'
     */
    rtb_GreaterThan_o0 = (rtb_AND_fcg != TCPR_ac_DW.UnitDelay_DSTATE_hs);
    if (rtb_GreaterThan_h5)
    {
        /* Outputs for IfAction SubSystem: '<S634>/Lcked_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S674>/Action Port'
         */
        /* RelationalOperator: '<S674>/Relational Operator' incorporates:
         *  Constant: '<S674>/Constant Value1'
         */
        rtb_GreaterThan_c = (rtb_TmpSignalConversionAtVeHSER_M_Clch_i < 0.0F);

        /* Outputs for Atomic SubSystem: '<S674>/EdgeRising' */
        /* Logic: '<S677>/AND' incorporates:
         *  Logic: '<S677>/OR1'
         *  UnitDelay: '<S677>/Unit Delay'
         */
        rtb_GreaterThan_i = (rtb_GreaterThan_c &&
                             (!TCPR_ac_DW.UnitDelay_DSTATE_pk));

        /* Update for UnitDelay: '<S677>/Unit Delay' */
        TCPR_ac_DW.UnitDelay_DSTATE_pk = rtb_GreaterThan_c;

        /* End of Outputs for SubSystem: '<S674>/EdgeRising' */

        /* Switch: '<S674>/Switch' */
        if (rtb_AND_fcg)
        {
            rtb_TmpSignalConversionAtVeHSER_M_C4_Tor = rtb_Merge_cv;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHSER_M_C4_Tor = rtb_Abs2;
        }

        /* End of Switch: '<S674>/Switch' */

        /* Sum: '<S678>/Sum2' incorporates:
         *  Constant: '<S598>/Calib'
         */
        rtb_TmpSignalConversionAtVeHSER_M_Clch_m =
            rtb_TmpSignalConversionAtVeHSER_M_C4_Tor - KeTCPR_M_C4_ClmpTorq;

        /* Outputs for Atomic SubSystem: '<S678>/Limiter' */
        /* Switch: '<S683>/Switch1' incorporates:
         *  RelationalOperator: '<S683>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_g <
                rtb_TmpSignalConversionAtVeHSER_M_Clch_m)
        {
            /* Switch: '<S674>/Switch1' */
            rtb_TmpSignalConversionAtVeHSER_M_Clch_m =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_g;
        }

        /* End of Switch: '<S683>/Switch1' */

        /* Switch: '<S683>/Switch' incorporates:
         *  Constant: '<S678>/Constant Value3'
         *  RelationalOperator: '<S683>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_m <= 0.0F)
        {
            /* Switch: '<S683>/Switch' */
            rtb_TmpSignalConversionAtVeHSER_M_Clch_m = 0.0F;
        }

        /* End of Switch: '<S683>/Switch' */
        /* End of Outputs for SubSystem: '<S678>/Limiter' */

        /* If: '<S681>/If1' incorporates:
         *  Constant: '<S603>/Calib'
         *  Logic: '<S681>/Logical Operator'
         *  Logic: '<S681>/Logical Operator1'
         *  Logic: '<S681>/Logical Operator2'
         *  UnitDelay: '<S674>/Unit Delay2'
         */
        if ((((KeTCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_GreaterThan_hr) ||
                rtb_GreaterThan_o0) || rtb_GreaterThan_d)
        {
            /* Outputs for IfAction SubSystem: '<S681>/RstPth_Crt_TcRMax' incorporates:
             *  ActionPort: '<S686>/Action Port'
             */
            TCPR_ac_RstPth_Crt_TcRMax(TCPR_ac_B.Product1, rtb_Merge_cv,
                &rtb_TmpSignalConversionAtVeHSER_M_C4_Tor);

            /* End of Outputs for SubSystem: '<S681>/RstPth_Crt_TcRMax' */
        }
        else if ((!KeTCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_GreaterThan_hr)
        {
            /* Outputs for IfAction SubSystem: '<S681>/RstHld_Crt_TcRMax' incorporates:
             *  ActionPort: '<S685>/Action Port'
             */
            TCPR_ac_RstHld_Crt_TcRMax(rtb_Merge_cv,
                &rtb_TmpSignalConversionAtVeHSER_M_C4_Tor);

            /* End of Outputs for SubSystem: '<S681>/RstHld_Crt_TcRMax' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S681>/Achived_LdRamp' incorporates:
             *  ActionPort: '<S684>/Action Port'
             */
            TCPR_ac_Achived_LdRamp(TCPR_ac_B.Product,
                                   TCPR_ac_DW.UnitDelay2_DSTATE_f,
                                   &rtb_TmpSignalConversionAtVeHSER_M_C4_Tor);

            /* End of Outputs for SubSystem: '<S681>/Achived_LdRamp' */
        }

        /* End of If: '<S681>/If1' */

        /* Outputs for Atomic SubSystem: '<S674>/Limiter1' */
        /* Switch: '<S679>/Switch1' incorporates:
         *  RelationalOperator: '<S679>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_m >=
                rtb_TmpSignalConversionAtVeHSER_M_C4_Tor)
        {
            /* Switch: '<S674>/Switch1' */
            rtb_TmpSignalConversionAtVeHSER_M_Clch_m =
                rtb_TmpSignalConversionAtVeHSER_M_C4_Tor;
        }

        /* End of Switch: '<S679>/Switch1' */

        /* Switch: '<S679>/Switch' incorporates:
         *  Constant: '<S674>/Constant Value2'
         *  RelationalOperator: '<S679>/Relational Operator1'
         *  UnitDelay: '<S674>/Unit Delay2'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_m > 0.0F)
        {
            TCPR_ac_DW.UnitDelay2_DSTATE_f =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_m;
        }
        else
        {
            TCPR_ac_DW.UnitDelay2_DSTATE_f = 0.0F;
        }

        /* End of Switch: '<S679>/Switch' */
        /* End of Outputs for SubSystem: '<S674>/Limiter1' */

        /* If: '<S682>/If1' incorporates:
         *  Constant: '<S601>/Calib'
         *  Gain: '<S682>/Gain'
         *  Logic: '<S682>/Logical Operator'
         *  Logic: '<S682>/Logical Operator1'
         *  Logic: '<S682>/Logical Operator2'
         *  UnitDelay: '<S674>/Unit Delay1'
         */
        if ((((KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_GreaterThan_i) ||
                rtb_GreaterThan_o0) || rtb_GreaterThan_d)
        {
            /* Outputs for IfAction SubSystem: '<S682>/RstPth_Crt_TcRMax' incorporates:
             *  ActionPort: '<S689>/Action Port'
             */
            TCPR_ac_RstPth_Crt_TcRMax_b(TCPR_ac_B.Product1, rtb_Merge1_ps,
                &rtb_TmpSignalConversionAtVeHSER_M_Clch_m);

            /* End of Outputs for SubSystem: '<S682>/RstPth_Crt_TcRMax' */
        }
        else if ((!KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_GreaterThan_i)
        {
            /* Outputs for IfAction SubSystem: '<S682>/RstHld_Crt_TcRMax' incorporates:
             *  ActionPort: '<S688>/Action Port'
             */
            TCPR_ac_RstHld_Crt_TcRMax_d(rtb_Merge1_ps,
                &rtb_TmpSignalConversionAtVeHSER_M_Clch_m);

            /* End of Outputs for SubSystem: '<S682>/RstHld_Crt_TcRMax' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S682>/Achived_LdRamp' incorporates:
             *  ActionPort: '<S687>/Action Port'
             */
            TCPR_ac_Achived_LdRamp_o(-TCPR_ac_B.Product,
                TCPR_ac_DW.UnitDelay1_DSTATE_m,
                &rtb_TmpSignalConversionAtVeHSER_M_Clch_m);

            /* End of Outputs for SubSystem: '<S682>/Achived_LdRamp' */
        }

        /* End of If: '<S682>/If1' */

        /* Outputs for Atomic SubSystem: '<S674>/Limiter2' */
        /* Switch: '<S680>/Switch1' incorporates:
         *  Constant: '<S674>/Constant Value3'
         *  RelationalOperator: '<S680>/Relational Operator'
         */
        if (0.0F < rtb_TmpSignalConversionAtVeHSER_M_Clch_m)
        {
            /* Switch: '<S674>/Switch1' */
            rtb_TmpSignalConversionAtVeHSER_M_Clch_m = 0.0F;
        }

        /* End of Switch: '<S680>/Switch1' */

        /* Switch: '<S680>/Switch' incorporates:
         *  RelationalOperator: '<S680>/Relational Operator1'
         *  UnitDelay: '<S674>/Unit Delay1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_m >
                rtb_TmpSignalConversionAtVeHSER_M_Clch_i)
        {
            TCPR_ac_DW.UnitDelay1_DSTATE_m =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_m;
        }
        else
        {
            TCPR_ac_DW.UnitDelay1_DSTATE_m =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_i;
        }

        /* End of Switch: '<S680>/Switch' */
        /* End of Outputs for SubSystem: '<S674>/Limiter2' */

        /* Merge: '<S634>/Merge' incorporates:
         *  Constant: '<S595>/Calib'
         *  Product: '<S674>/Product'
         *  UnitDelay: '<S674>/Unit Delay2'
         */
        rtb_TmpSignalConversionAtVeHSER_M_C4_Tor = KeTCPR_K_C4_Max_Scalar *
            TCPR_ac_DW.UnitDelay2_DSTATE_f;

        /* Switch: '<S674>/Switch1' incorporates:
         *  Constant: '<S593>/Calib'
         *  Logic: '<S674>/NOT'
         *  UnitDelay: '<S674>/Unit Delay1'
         *  UnitDelay: '<S674>/Unit Delay2'
         */
        if (!HeTCPR_b_Enb_C4_Asymetric_ClchLim)
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay2_DSTATE_f;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay1_DSTATE_m;
        }

        /* End of Switch: '<S674>/Switch1' */

        /* VariantMerge generated from: '<S3>/VariantSource7' incorporates:
         *  Constant: '<S596>/Calib'
         *  Product: '<S674>/Product1'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_k =
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ * KeTCPR_K_C4_Min_Scalar;

        /* End of Outputs for SubSystem: '<S634>/Lcked_Ld_TcR_Cntrl' */
    }
    else if (KeTCPR_b_CntrlTcR_OvrdTo0_OnRlsd)
    {
        /* Outputs for IfAction SubSystem: '<S634>/Rlsd_Ld_TcR_Ovrd' incorporates:
         *  ActionPort: '<S676>/Action Port'
         */
        /* Merge: '<S634>/Merge' incorporates:
         *  Constant: '<S676>/Constant Value1'
         *  SignalConversion generated from: '<S676>/LeadTcR_Max'
         */
        rtb_TmpSignalConversionAtVeHSER_M_C4_Tor = 0.0F;

        /* VariantMerge generated from: '<S3>/VariantSource7' incorporates:
         *  Constant: '<S676>/Constant Value2'
         *  SignalConversion generated from: '<S676>/LeadTcR_Min'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_k = 0.0F;

        /* End of Outputs for SubSystem: '<S634>/Rlsd_Ld_TcR_Ovrd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S634>/Rlsd_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S675>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource7' incorporates:
         *  Gain: '<S691>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_k =
            rtb_TmpSignalConversionAtVeHSER_M_C4_Tor;

        /* End of Outputs for SubSystem: '<S634>/Rlsd_Ld_TcR_Cntrl' */
    }

    /* RelationalOperator: '<S635>/Comparison1' incorporates:
     *  Constant: '<S604>/Calib'
     */
    rtb_GreaterThan_c = (rtb_TmpSignalConversionAtVeHSER_M_Clch_g >= rtb_Abs2);

    /* Logic: '<S692>/AND' incorporates:
     *  Logic: '<S692>/OR1'
     *  UnitDelay: '<S692>/Unit Delay'
     */
    rtb_GreaterThan_hr = (rtb_GreaterThan_g && (!TCPR_ac_DW.UnitDelay_DSTATE_ko));

    /* Update for UnitDelay: '<S692>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_ko = rtb_GreaterThan_g;

    /* Logic: '<S693>/AND' incorporates:
     *  Logic: '<S693>/OR1'
     *  UnitDelay: '<S693>/Unit Delay'
     */
    rtb_GreaterThan_d = (rtb_GreaterThan_c && (!TCPR_ac_DW.UnitDelay_DSTATE_gp));

    /* Update for UnitDelay: '<S693>/Unit Delay' */
    TCPR_ac_DW.UnitDelay_DSTATE_gp = rtb_GreaterThan_c;
    if (rtb_GreaterThan_g)
    {
        /* Outputs for IfAction SubSystem: '<S635>/Lcked_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S694>/Action Port'
         */
        /* RelationalOperator: '<S694>/Relational Operator' incorporates:
         *  Constant: '<S694>/Constant Value1'
         */
        rtb_GreaterThan_g = (rtb_TmpSignalConversionAtVeHSER_M_Clch_i < 0.0F);

        /* Outputs for Atomic SubSystem: '<S694>/EdgeRising' */
        /* Logic: '<S698>/AND' incorporates:
         *  Logic: '<S698>/OR1'
         *  UnitDelay: '<S698>/Unit Delay'
         */
        rtb_GreaterThan_c = (rtb_GreaterThan_g &&
                             (!TCPR_ac_DW.UnitDelay_DSTATE_c2));

        /* Update for UnitDelay: '<S698>/Unit Delay' */
        TCPR_ac_DW.UnitDelay_DSTATE_c2 = rtb_GreaterThan_g;

        /* End of Outputs for SubSystem: '<S694>/EdgeRising' */

        /* Sum: '<S699>/Sum2' incorporates:
         *  Constant: '<S598>/Calib'
         */
        rtb_TmpSignalConversionAtVeHSER_M_C4_Opt = rtb_Abs2 -
            KeTCPR_M_C4_ClmpTorq;

        /* Outputs for Atomic SubSystem: '<S699>/Limiter' */
        /* Switch: '<S704>/Switch1' incorporates:
         *  RelationalOperator: '<S704>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_g <
                rtb_TmpSignalConversionAtVeHSER_M_C4_Opt)
        {
            /* Product: '<S694>/Product' */
            rtb_TmpSignalConversionAtVeHSER_M_C4_Opt =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_g;
        }

        /* End of Switch: '<S704>/Switch1' */

        /* Switch: '<S704>/Switch' incorporates:
         *  Constant: '<S699>/Constant Value3'
         *  RelationalOperator: '<S704>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_C4_Opt <= 0.0F)
        {
            /* Switch: '<S704>/Switch' */
            rtb_TmpSignalConversionAtVeHSER_M_C4_Opt = 0.0F;
        }

        /* End of Switch: '<S704>/Switch' */
        /* End of Outputs for SubSystem: '<S699>/Limiter' */

        /* Outputs for Enabled SubSystem: '<S706>/Hold_OFF_Time' incorporates:
         *  EnablePort: '<S709>/Enable'
         */
        if (rtb_GreaterThan_hr)
        {
            /* Switch: '<S711>/Switch1' */
            if (rtb_GreaterThan_d)
            {
                /* Switch: '<S711>/Switch1' incorporates:
                 *  Constant: '<S709>/Constant Value5'
                 */
                TCPR_ac_B.Switch1_d = 0.0F;
            }
            else
            {
                /* Switch: '<S711>/Switch1' incorporates:
                 *  Constant: '<S623>/Calib'
                 */
                TCPR_ac_B.Switch1_d = KeTCPR_t_CntrlTcR_LdRmpHldffOnR;
            }

            /* End of Switch: '<S711>/Switch1' */

            /* Outputs for Atomic SubSystem: '<S706>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S710>/Switch1' incorporates:
             *  UnitDelay: '<S710>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_o = TCPR_ac_B.Switch1_d;

            /* End of Outputs for SubSystem: '<S706>/Timer Retrigger Reset Enabled' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S706>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S710>/Switch1' incorporates:
             *  Constant: '<S594>/Calib'
             *  Constant: '<S710>/Constant Value4'
             *  MinMax: '<S710>/Maximum'
             *  Sum: '<S710>/Subtraction'
             *  UnitDelay: '<S710>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_o = fmaxf(TCPR_ac_DW.UnitDelay_DSTATE_o
                - HeTCPR_t_MedTED_dT, 0.0F);

            /* End of Outputs for SubSystem: '<S706>/Timer Retrigger Reset Enabled' */
        }

        /* End of Outputs for SubSystem: '<S706>/Hold_OFF_Time' */

        /* If: '<S702>/If1' incorporates:
         *  Constant: '<S603>/Calib'
         *  Constant: '<S702>/Constant Value3'
         *  Constant: '<S710>/Constant Value2'
         *  Logic: '<S702>/Logical Operator'
         *  Logic: '<S702>/Logical Operator1'
         *  Logic: '<S702>/Logical Operator2'
         *  Logic: '<S702>/Logical Operator3'
         *  RelationalOperator: '<S702>/Comparison2'
         *  RelationalOperator: '<S710>/Greater  Than1'
         *  UnitDelay: '<S694>/Unit Delay2'
         *  UnitDelay: '<S710>/Unit Delay'
         */
        if ((((KeTCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_GreaterThan_hr) ||
                rtb_GreaterThan_o0) || rtb_GreaterThan_d)
        {
            /* Outputs for IfAction SubSystem: '<S702>/RstPth_Crt_TcRMax' incorporates:
             *  ActionPort: '<S708>/Action Port'
             */
            TCPR_ac_RstPth_Crt_TcRMax(TCPR_ac_B.Product1,
                rtb_TmpSignalConversionAtVeHSER_M_C4_Tor,
                &rtb_TmpSignalConversionAtVeHSER_M_Clch_m);

            /* End of Outputs for SubSystem: '<S702>/RstPth_Crt_TcRMax' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S706>/Timer Retrigger Reset Enabled' */
            if (((!KeTCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_GreaterThan_hr) ||
                    ((TCPR_ac_DW.UnitDelay_DSTATE_o > 0.0F) &&
                     (TCPR_ac_B.Product >= 0.0F)))
            {
                /* Outputs for IfAction SubSystem: '<S702>/RstHld_Crt_TcRMax' incorporates:
                 *  ActionPort: '<S707>/Action Port'
                 */
                TCPR_ac_RstHld_Crt_TcRMax
                    (rtb_TmpSignalConversionAtVeHSER_M_C4_Tor,
                     &rtb_TmpSignalConversionAtVeHSER_M_Clch_m);

                /* End of Outputs for SubSystem: '<S702>/RstHld_Crt_TcRMax' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S702>/Achived_LdRamp' incorporates:
                 *  ActionPort: '<S705>/Action Port'
                 */
                TCPR_ac_Achived_LdRamp(TCPR_ac_B.Product,
                                       TCPR_ac_DW.UnitDelay2_DSTATE_pp,
                                       &rtb_TmpSignalConversionAtVeHSER_M_Clch_m);

                /* End of Outputs for SubSystem: '<S702>/Achived_LdRamp' */
            }

            /* End of Outputs for SubSystem: '<S706>/Timer Retrigger Reset Enabled' */
        }

        /* End of If: '<S702>/If1' */

        /* Outputs for Atomic SubSystem: '<S694>/Limiter1' */
        /* Switch: '<S700>/Switch1' incorporates:
         *  RelationalOperator: '<S700>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_C4_Opt >=
                rtb_TmpSignalConversionAtVeHSER_M_Clch_m)
        {
            /* Product: '<S694>/Product' */
            rtb_TmpSignalConversionAtVeHSER_M_C4_Opt =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_m;
        }

        /* End of Switch: '<S700>/Switch1' */

        /* Switch: '<S700>/Switch' incorporates:
         *  Constant: '<S694>/Constant Value2'
         *  RelationalOperator: '<S700>/Relational Operator1'
         *  UnitDelay: '<S694>/Unit Delay2'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_C4_Opt > 0.0F)
        {
            TCPR_ac_DW.UnitDelay2_DSTATE_pp =
                rtb_TmpSignalConversionAtVeHSER_M_C4_Opt;
        }
        else
        {
            TCPR_ac_DW.UnitDelay2_DSTATE_pp = 0.0F;
        }

        /* End of Switch: '<S700>/Switch' */
        /* End of Outputs for SubSystem: '<S694>/Limiter1' */

        /* Outputs for Enabled SubSystem: '<S713>/Hold_OFF_Time' incorporates:
         *  EnablePort: '<S716>/Enable'
         */
        if (rtb_GreaterThan_c)
        {
            /* Switch: '<S718>/Switch1' */
            if (rtb_GreaterThan_d)
            {
                /* Switch: '<S718>/Switch1' incorporates:
                 *  Constant: '<S716>/Constant Value5'
                 */
                TCPR_ac_B.Switch1_a = 0.0F;
            }
            else
            {
                /* Switch: '<S718>/Switch1' incorporates:
                 *  Constant: '<S621>/Calib'
                 */
                TCPR_ac_B.Switch1_a = KeTCPR_t_CntrlTcRMin_LdRmpHldffOnR;
            }

            /* End of Switch: '<S718>/Switch1' */

            /* Outputs for Atomic SubSystem: '<S713>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S717>/Switch1' incorporates:
             *  UnitDelay: '<S717>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_k = TCPR_ac_B.Switch1_a;

            /* End of Outputs for SubSystem: '<S713>/Timer Retrigger Reset Enabled' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S713>/Timer Retrigger Reset Enabled' */
            /* Switch: '<S717>/Switch1' incorporates:
             *  Constant: '<S594>/Calib'
             *  Constant: '<S717>/Constant Value4'
             *  MinMax: '<S717>/Maximum'
             *  Sum: '<S717>/Subtraction'
             *  UnitDelay: '<S717>/Unit Delay'
             */
            TCPR_ac_DW.UnitDelay_DSTATE_k = fmaxf(TCPR_ac_DW.UnitDelay_DSTATE_k
                - HeTCPR_t_MedTED_dT, 0.0F);

            /* End of Outputs for SubSystem: '<S713>/Timer Retrigger Reset Enabled' */
        }

        /* End of Outputs for SubSystem: '<S713>/Hold_OFF_Time' */

        /* If: '<S703>/If1' incorporates:
         *  Constant: '<S601>/Calib'
         *  Constant: '<S703>/Constant Value3'
         *  Constant: '<S717>/Constant Value2'
         *  Gain: '<S703>/Gain'
         *  Logic: '<S703>/Logical Operator'
         *  Logic: '<S703>/Logical Operator1'
         *  Logic: '<S703>/Logical Operator2'
         *  Logic: '<S703>/Logical Operator3'
         *  RelationalOperator: '<S703>/Comparison2'
         *  RelationalOperator: '<S717>/Greater  Than1'
         *  UnitDelay: '<S694>/Unit Delay1'
         *  UnitDelay: '<S717>/Unit Delay'
         */
        if ((((KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_GreaterThan_c) ||
                rtb_GreaterThan_o0) || rtb_GreaterThan_d)
        {
            /* Outputs for IfAction SubSystem: '<S703>/RstPth_Crt_TcRMin' incorporates:
             *  ActionPort: '<S715>/Action Port'
             */
            TCPR_ac_RstPth_Crt_TcRMax_b(TCPR_ac_B.Product1, rtb_Merge1_ps,
                &rtb_TmpSignalConversionAtVeHSER_M_C4_Opt);

            /* End of Outputs for SubSystem: '<S703>/RstPth_Crt_TcRMin' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S713>/Timer Retrigger Reset Enabled' */
            if (((!KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_GreaterThan_c) ||
                ((TCPR_ac_DW.UnitDelay_DSTATE_k > 0.0F) && (TCPR_ac_B.Product >=
                  0.0F)))
            {
                /* Outputs for IfAction SubSystem: '<S703>/RstHld_Crt_TcRMin' incorporates:
                 *  ActionPort: '<S714>/Action Port'
                 */
                TCPR_ac_RstHld_Crt_TcRMax_d(rtb_Merge1_ps,
                    &rtb_TmpSignalConversionAtVeHSER_M_C4_Opt);

                /* End of Outputs for SubSystem: '<S703>/RstHld_Crt_TcRMin' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S703>/Achived_LdRamp' incorporates:
                 *  ActionPort: '<S712>/Action Port'
                 */
                TCPR_ac_Achived_LdRamp_o(-TCPR_ac_B.Product,
                    TCPR_ac_DW.UnitDelay1_DSTATE_k4,
                    &rtb_TmpSignalConversionAtVeHSER_M_C4_Opt);

                /* End of Outputs for SubSystem: '<S703>/Achived_LdRamp' */
            }

            /* End of Outputs for SubSystem: '<S713>/Timer Retrigger Reset Enabled' */
        }

        /* End of If: '<S703>/If1' */

        /* Outputs for Atomic SubSystem: '<S694>/Limiter2' */
        /* Switch: '<S701>/Switch1' incorporates:
         *  Constant: '<S694>/Constant Value3'
         *  RelationalOperator: '<S701>/Relational Operator'
         */
        if (0.0F < rtb_TmpSignalConversionAtVeHSER_M_C4_Opt)
        {
            /* Product: '<S694>/Product' */
            rtb_TmpSignalConversionAtVeHSER_M_C4_Opt = 0.0F;
        }

        /* End of Switch: '<S701>/Switch1' */

        /* Switch: '<S701>/Switch' incorporates:
         *  RelationalOperator: '<S701>/Relational Operator1'
         *  UnitDelay: '<S694>/Unit Delay1'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_C4_Opt >
                rtb_TmpSignalConversionAtVeHSER_M_Clch_i)
        {
            TCPR_ac_DW.UnitDelay1_DSTATE_k4 =
                rtb_TmpSignalConversionAtVeHSER_M_C4_Opt;
        }
        else
        {
            TCPR_ac_DW.UnitDelay1_DSTATE_k4 =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_i;
        }

        /* End of Switch: '<S701>/Switch' */
        /* End of Outputs for SubSystem: '<S694>/Limiter2' */

        /* Switch: '<S694>/Switch3' incorporates:
         *  Constant: '<S593>/Calib'
         *  Logic: '<S694>/NOT'
         *  UnitDelay: '<S694>/Unit Delay1'
         *  UnitDelay: '<S694>/Unit Delay2'
         */
        if (!HeTCPR_b_Enb_C4_Asymetric_ClchLim)
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay2_DSTATE_pp;
        }
        else
        {
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ =
                TCPR_ac_DW.UnitDelay1_DSTATE_k4;
        }

        /* End of Switch: '<S694>/Switch3' */

        /* Switch: '<S694>/Switch2' incorporates:
         *  Constant: '<S596>/Calib'
         *  Product: '<S694>/Product2'
         */
        rtb_TmpSignalConversionAtVeHSER_M_Clch_i =
            rtb_TmpSignalConversionAtVeHTDR_M_Clch1_ * KeTCPR_K_C4_Min_Scalar;

        /* Switch: '<S694>/Switch1' incorporates:
         *  Constant: '<S599>/Calib'
         */
        if (!KeTCPR_b_C4_UseLCCMinMaxTrqAllwd)
        {
            rtb_TmpSignalConversionAtVeTCCR_M_LCCMin =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_i;
        }

        /* End of Switch: '<S694>/Switch1' */

        /* VariantMerge generated from: '<S3>/VariantSource9' incorporates:
         *  MinMax: '<S694>/Maximum'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_j0 = fmaxf
            (rtb_TmpSignalConversionAtVeTCCR_M_LCCMin,
             rtb_TmpSignalConversionAtVeHSER_M_Clch_i);

        /* Product: '<S694>/Product' incorporates:
         *  Constant: '<S595>/Calib'
         *  UnitDelay: '<S694>/Unit Delay2'
         */
        rtb_TmpSignalConversionAtVeHSER_M_C4_Opt = KeTCPR_K_C4_Max_Scalar *
            TCPR_ac_DW.UnitDelay2_DSTATE_pp;

        /* Switch: '<S694>/Switch2' incorporates:
         *  Constant: '<S599>/Calib'
         */
        if (!KeTCPR_b_C4_UseLCCMinMaxTrqAllwd)
        {
            rtb_TmpSignalConversionAtVeTCCR_M_LCCMax =
                rtb_TmpSignalConversionAtVeHSER_M_C4_Opt;
        }

        /* End of Switch: '<S694>/Switch2' */

        /* VariantMerge generated from: '<S3>/VariantSource8' incorporates:
         *  MinMax: '<S694>/Maximum1'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_cr = fminf
            (rtb_TmpSignalConversionAtVeTCCR_M_LCCMax,
             rtb_TmpSignalConversionAtVeHSER_M_C4_Opt);

        /* End of Outputs for SubSystem: '<S635>/Lcked_Ld_TcR_Cntrl' */
    }
    else if ((KeTCPR_b_C4_UseSignedClutchTh) &&
             (KeTCPR_b_C4_UseLCCMinMaxTrqAllwd))
    {
        /* Outputs for IfAction SubSystem: '<S635>/Rlsd_Ld_TcR_Posit' incorporates:
         *  ActionPort: '<S697>/Action Port'
         */
        /* Switch: '<S697>/Switch1' incorporates:
         *  Constant: '<S599>/Calib'
         */
        if (KeTCPR_b_C4_UseLCCMinMaxTrqAllwd)
        {
            /* VariantMerge generated from: '<S3>/VariantSource8' incorporates:
             *  MinMax: '<S697>/MinMax1'
             */
            TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_cr = fminf(rtb_Abs2,
                rtb_TmpSignalConversionAtVeTCCR_M_LCCMax);
        }
        else
        {
            /* VariantMerge generated from: '<S3>/VariantSource8' incorporates:
             *  Abs: '<S697>/Abs1'
             */
            TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_cr = fabsf(rtb_Abs2);
        }

        /* End of Switch: '<S697>/Switch1' */

        /* VariantMerge generated from: '<S3>/VariantSource9' incorporates:
         *  Constant: '<S697>/Constant Value1'
         *  Gain: '<S721>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_j0 = 0.0F;

        /* End of Outputs for SubSystem: '<S635>/Rlsd_Ld_TcR_Posit' */
    }
    else if (KeTCPR_b_CntrlTcR_OvrdTo0_OnRlsd)
    {
        /* Outputs for IfAction SubSystem: '<S635>/RlsdLd_TcR_Ovrd' incorporates:
         *  ActionPort: '<S695>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource8' incorporates:
         *  Constant: '<S695>/Constant Value1'
         *  SignalConversion generated from: '<S695>/LeadTcR_Max'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_cr = 0.0F;

        /* VariantMerge generated from: '<S3>/VariantSource9' incorporates:
         *  Constant: '<S695>/Constant Value2'
         *  SignalConversion generated from: '<S695>/LeadTcR_Min'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_j0 = 0.0F;

        /* End of Outputs for SubSystem: '<S635>/RlsdLd_TcR_Ovrd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S635>/Rlsd_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S696>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource8' incorporates:
         *  Gain: '<S719>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_cr =
            rtb_TmpSignalConversionAtVeHSER_M_C4_Opt;

        /* VariantMerge generated from: '<S3>/VariantSource9' incorporates:
         *  Gain: '<S720>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_j0 =
            rtb_TmpSignalConversionAtVeHSER_M_C4_Opt;

        /* End of Outputs for SubSystem: '<S635>/Rlsd_Ld_TcR_Cntrl' */
    }

    if (rtb_GreaterThan_h5)
    {
        /* Outputs for IfAction SubSystem: '<S636>/Lcked_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S722>/Action Port'
         */
        /* Sum: '<S725>/Sum2' incorporates:
         *  Constant: '<S598>/Calib'
         */
        rtb_TmpSignalConversionAtVeTCCR_M_LCCMax = rtb_Abs2 -
            KeTCPR_M_C4_ClmpTorq;

        /* Outputs for Atomic SubSystem: '<S725>/Limiter' */
        /* Switch: '<S727>/Switch1' incorporates:
         *  RelationalOperator: '<S727>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeHSER_M_Clch_g <
                rtb_TmpSignalConversionAtVeTCCR_M_LCCMax)
        {
            /* Switch: '<S726>/Switch1' */
            rtb_TmpSignalConversionAtVeTCCR_M_LCCMax =
                rtb_TmpSignalConversionAtVeHSER_M_Clch_g;
        }

        /* End of Switch: '<S727>/Switch1' */

        /* Switch: '<S727>/Switch' incorporates:
         *  Constant: '<S725>/Constant Value3'
         *  RelationalOperator: '<S727>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeTCCR_M_LCCMax <= 0.0F)
        {
            /* Switch: '<S727>/Switch' */
            rtb_TmpSignalConversionAtVeTCCR_M_LCCMax = 0.0F;
        }

        /* End of Switch: '<S727>/Switch' */
        /* End of Outputs for SubSystem: '<S725>/Limiter' */

        /* Outputs for Atomic SubSystem: '<S722>/Limiter1' */
        /* Switch: '<S726>/Switch1' incorporates:
         *  RelationalOperator: '<S726>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeTCCR_M_LCCMax >= rtb_Abs2)
        {
            /* Switch: '<S726>/Switch1' */
            rtb_TmpSignalConversionAtVeTCCR_M_LCCMax = rtb_Abs2;
        }

        /* End of Switch: '<S726>/Switch1' */

        /* Switch: '<S726>/Switch' incorporates:
         *  Constant: '<S722>/Constant Value2'
         *  RelationalOperator: '<S726>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeTCCR_M_LCCMax <= 0.0F)
        {
            /* Switch: '<S726>/Switch' */
            rtb_TmpSignalConversionAtVeTCCR_M_LCCMax = 0.0F;
        }

        /* End of Switch: '<S726>/Switch' */
        /* End of Outputs for SubSystem: '<S722>/Limiter1' */

        /* VariantMerge generated from: '<S3>/VariantSource11' incorporates:
         *  Constant: '<S595>/Calib'
         *  Product: '<S722>/Product'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_c =
            KeTCPR_K_C4_Max_Scalar * rtb_TmpSignalConversionAtVeTCCR_M_LCCMax;

        /* VariantMerge generated from: '<S3>/VariantSource12' incorporates:
         *  Constant: '<S596>/Calib'
         *  Product: '<S722>/Product1'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_a =
            rtb_TmpSignalConversionAtVeTCCR_M_LCCMax * KeTCPR_K_C4_Min_Scalar;

        /* End of Outputs for SubSystem: '<S636>/Lcked_Ld_TcR_Cntrl' */
    }
    else if (KeTCPR_b_PredCntrlTcR_OvrdTo0_OnRlsd)
    {
        /* Outputs for IfAction SubSystem: '<S636>/RlsdLd_TcR_Ovrd' incorporates:
         *  ActionPort: '<S723>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource11' incorporates:
         *  Constant: '<S723>/Constant Value1'
         *  SignalConversion generated from: '<S723>/LeadTcR_Max'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_c = 0.0F;

        /* VariantMerge generated from: '<S3>/VariantSource12' incorporates:
         *  Constant: '<S723>/Constant Value2'
         *  SignalConversion generated from: '<S723>/LeadTcR_Min'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_a = 0.0F;

        /* End of Outputs for SubSystem: '<S636>/RlsdLd_TcR_Ovrd' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S636>/Rlsd_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S724>/Action Port'
         */
        /* VariantMerge generated from: '<S3>/VariantSource11' incorporates:
         *  Gain: '<S728>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_c = rtb_Abs2;

        /* VariantMerge generated from: '<S3>/VariantSource12' incorporates:
         *  Gain: '<S724>/Gain'
         *  Gain: '<S729>/Gain'
         */
        TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_a = -rtb_Abs2;

        /* End of Outputs for SubSystem: '<S636>/Rlsd_Ld_TcR_Cntrl' */
    }

    /* Gain: '<S638>/Gain' incorporates:
     *  Constant: '<S599>/Calib'
     *  Constant: '<S600>/Calib'
     *  Constant: '<S604>/Calib'
     *  Constant: '<S607>/Calib'
     */
    VeTCPC_b_C4_SlipDetected = rtb_AND_fcg;

    /* VariantMerge generated from: '<S3>/VariantSource5' */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_gh = rtb_Merge_cv;

    /* VariantMerge generated from: '<S3>/VariantSource6' */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_i0 =
        rtb_TmpSignalConversionAtVeHSER_M_C4_Tor;

#endif

    /* End of If: '<S636>/If1' */
    /* End of Outputs for SubSystem: '<S634>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S634>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S635>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S635>/EdgeRising1' */

    /* SignalConversion generated from: '<S3>/VariantSource15' */
#if !Rte_SysCon_Variant_TCPR_3

    /* VariantMerge generated from: '<S3>/VariantSource15' incorporates:
     *  Constant: '<S3>/FALSE Constant1'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_ez = false;

#endif

    /* End of SignalConversion generated from: '<S3>/VariantSource15' */

    /* SignalConversion generated from: '<S3>/VariantSource31' */
#if !Rte_SysCon_Variant_TCPR_7

    /* VariantMerge generated from: '<S3>/VariantSource31' incorporates:
     *  Constant: '<S3>/FALSE Constant2'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_f1 = false;

#endif

    /* End of SignalConversion generated from: '<S3>/VariantSource31' */

    /* SignalConversion generated from: '<S3>/VariantSource4' */
#if !Rte_SysCon_Variant_TCPR_9

    /* VariantMerge generated from: '<S3>/VariantSource4' incorporates:
     *  Constant: '<S3>/FALSE Constant'
     */
    TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_a0 = false;

#endif

    /* End of SignalConversion generated from: '<S3>/VariantSource4' */

    /* Update for UnitDelay: '<S110>/Unit Delay' incorporates:
     *  UnitDelay: '<S106>/Unit Delay2'
     */
#if Rte_SysCon_Variant_TCPR_3

    TCPR_ac_DW.UnitDelay_DSTATE_bf = rtb_AND_aa;
    TCPR_ac_DW.UnitDelay2_DSTATE = rtb_Switch1;

#endif

    /* End of Update for UnitDelay: '<S110>/Unit Delay' */

    /* Update for UnitDelay: '<S310>/Unit Delay' incorporates:
     *  UnitDelay: '<S306>/Unit Delay2'
     */
#if Rte_SysCon_Variant_TCPR_7

    TCPR_ac_DW.UnitDelay_DSTATE_ls = rtb_AND_ob;
    TCPR_ac_DW.UnitDelay2_DSTATE_n = rtb_Switch1_an;

#endif

    /* End of Update for UnitDelay: '<S310>/Unit Delay' */

    /* Update for UnitDelay: '<S477>/Unit Delay' incorporates:
     *  UnitDelay: '<S473>/Unit Delay2'
     */
#if Rte_SysCon_Variant_TCPR_5

    TCPR_ac_DW.UnitDelay_DSTATE_kf = rtb_AND_fuh;
    TCPR_ac_DW.UnitDelay2_DSTATE_p = rtb_Switch1_lo;

#endif

    /* End of Update for UnitDelay: '<S477>/Unit Delay' */

    /* Update for UnitDelay: '<S641>/Unit Delay' incorporates:
     *  UnitDelay: '<S637>/Unit Delay2'
     */
#if Rte_SysCon_Variant_TCPR_1

    TCPR_ac_DW.UnitDelay_DSTATE_hs = rtb_AND_fcg;
    TCPR_ac_DW.UnitDelay2_DSTATE_d = rtb_Switch1_l;

#endif

    /* End of Update for UnitDelay: '<S641>/Unit Delay' */

    /* Update for UnitDelay: '<S75>/Unit Delay2' */
#if Rte_SysCon_Variant_TCPR_3

    TCPR_ac_DW.UnitDelay2_DSTATE_gg = TCPR_ac_B.HoldOffsetTorque.Logical3;

#endif

    /* End of Update for UnitDelay: '<S75>/Unit Delay2' */

    /* Update for UnitDelay: '<S275>/Unit Delay2' */
#if Rte_SysCon_Variant_TCPR_7

    TCPR_ac_DW.UnitDelay2_DSTATE_i = TCPR_ac_B.HoldOffsetTorque_l.Logical3;

#endif

    /* End of Update for UnitDelay: '<S275>/Unit Delay2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeTCPR_M_Clch1_OptTorqMax' incorporates:
     *  SignalConversion generated from: '<S1>/C1_OptTrq_Max'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_OptTorqMax_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_gv);

    /* Outport: '<Root>/VeTCPR_M_Clch1_OptTorqMin' incorporates:
     *  SignalConversion generated from: '<S1>/C1_OptTrq_Min'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_OptTorqMin_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_o);

    /* Outport: '<Root>/VeTCPR_b_C1_SlipDetected' incorporates:
     *  SignalConversion generated from: '<S1>/C1_SlipDetected'
     */
    (void)Rte_Write_VeTCPR_b_C1_SlipDetected_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_ez);

    /* Outport: '<Root>/VeTCPR_M_Clch2_OptTorqMax' incorporates:
     *  SignalConversion generated from: '<S1>/C2_OptTrq_Max'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_OptTorqMax_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_b);

    /* Outport: '<Root>/VeTCPR_M_Clch2_OptTorqMin' incorporates:
     *  SignalConversion generated from: '<S1>/C2_OptTrq_Min'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_OptTorqMin_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_dn);

    /* Outport: '<Root>/VeTCPR_b_C2_SlipDetected' incorporates:
     *  SignalConversion generated from: '<S1>/C2_SlipDetected'
     */
    (void)Rte_Write_VeTCPR_b_C2_SlipDetected_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_f1);

    /* Outport: '<Root>/VeTCPR_M_Clch3_OptTorqMax' incorporates:
     *  SignalConversion generated from: '<S1>/C3_OptTrq_Max'
     */
    (void)Rte_Write_VeTCPR_M_Clch3_OptTorqMax_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_f);

    /* Outport: '<Root>/VeTCPR_M_Clch3_OptTorqMin' incorporates:
     *  SignalConversion generated from: '<S1>/C3_OptTrq_Min'
     */
    (void)Rte_Write_VeTCPR_M_Clch3_OptTorqMin_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_bo);

    /* Outport: '<Root>/VeTCPR_M_Clch4_OptTorqMax' incorporates:
     *  SignalConversion generated from: '<S1>/C4_OptTrq_Max'
     */
    (void)Rte_Write_VeTCPR_M_Clch4_OptTorqMax_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_cr);

    /* Outport: '<Root>/VeTCPR_M_Clch4_OptTorqMin' incorporates:
     *  SignalConversion generated from: '<S1>/C4_OptTrq_Min'
     */
    (void)Rte_Write_VeTCPR_M_Clch4_OptTorqMin_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_j0);

    /* Outport: '<Root>/VeTCPR_M_Clch1_TorqEstMax' incorporates:
     *  SignalConversion generated from: '<S1>/Clch1_TorqEstMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_TorqEstMax_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_h);

    /* Outport: '<Root>/VeTCPR_M_Clch1_TorqEstMin' incorporates:
     *  SignalConversion generated from: '<S1>/Clch1_TorqEstMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_TorqEstMin_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_l);

    /* Outport: '<Root>/VeTCPR_M_Clch2_TorqEstMax' incorporates:
     *  SignalConversion generated from: '<S1>/Clch2_TorqEstMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_TorqEstMax_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_j);

    /* Outport: '<Root>/VeTCPR_M_Clch2_TorqEstMin' incorporates:
     *  SignalConversion generated from: '<S1>/Clch2_TorqEstMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_TorqEstMin_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_d);

    /* Outport: '<Root>/VeTCPR_M_Clch3_TorqEstMax' incorporates:
     *  SignalConversion generated from: '<S1>/Clch3_TorqEstMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch3_TorqEstMax_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_g);

    /* Outport: '<Root>/VeTCPR_M_Clch3_TorqEstMin' incorporates:
     *  SignalConversion generated from: '<S1>/Clch3_TorqEstMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch3_TorqEstMin_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_mo);

    /* Outport: '<Root>/VeTCPR_M_Clch4_TorqEstMax' incorporates:
     *  SignalConversion generated from: '<S1>/Clch4_TorqEstMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch4_TorqEstMax_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_gh);

    /* Outport: '<Root>/VeTCPR_M_Clch4_TorqEstMin' incorporates:
     *  SignalConversion generated from: '<S1>/Clch4_TorqEstMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch4_TorqEstMin_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_p2);

    /* Outport: '<Root>/VeTCPR_b_ClchOffloadCnfrmd' incorporates:
     *  SignalConversion generated from: '<S1>/ClchOffloadCnfrmd'
     */
    (void)Rte_Write_VeTCPR_b_ClchOffloadCnfrmd_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_a0);

    /* Outport: '<Root>/VeTCPR_M_Clch1_ImmedTorqMax' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch1_ImmedTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_ImmedTorqMax_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_VariantS);

    /* Outport: '<Root>/VeTCPR_M_Clch1_ImmedTorqMin' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch1_ImmedTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_ImmedTorqMin_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_hl);

    /* Outport: '<Root>/VeTCPR_M_Clch1_PrdtdTorqMax' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch1_PrdtdTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_PrdtdTorqMax_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_p);

    /* Outport: '<Root>/VeTCPR_M_Clch1_PrdtdTorqMax_EngOff' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch1_PrdtdTorqMax_EngOff'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_PrdtdTorqMax_EngOff_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_jq);

    /* Outport: '<Root>/VeTCPR_M_Clch1_PrdtdTorqMin' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch1_PrdtdTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_PrdtdTorqMin_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_i);

    /* Outport: '<Root>/VeTCPR_M_Clch1_PrdtdTorqMin_EngOff' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch1_PrdtdTorqMin_EngOff'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_PrdtdTorqMin_EngOff_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_h4);

    /* Outport: '<Root>/VeTCPR_M_Clch2_ImmedTorqMax' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch2_ImmedTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_ImmedTorqMax_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_gn);

    /* Outport: '<Root>/VeTCPR_M_Clch2_ImmedTorqMin' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch2_ImmedTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_ImmedTorqMin_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_gf);

    /* Outport: '<Root>/VeTCPR_M_Clch2_PrdtdTorqMin_EngOff' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch2_PrdtdTorqMIn_EngOff'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_PrdtdTorqMin_EngOff_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_n);

    /* Outport: '<Root>/VeTCPR_M_Clch2_PrdtdTorqMax' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch2_PrdtdTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_PrdtdTorqMax_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_bd);

    /* Outport: '<Root>/VeTCPR_M_Clch2_PrdtdTorqMax_EngOff' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch2_PrdtdTorqMax_EngOff'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_PrdtdTorqMax_EngOff_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_m);

    /* Outport: '<Root>/VeTCPR_M_Clch2_PrdtdTorqMin' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch2_PrdtdTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_PrdtdTorqMin_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_ce);

    /* Outport: '<Root>/VeTCPR_M_Clch3_ImmedTorqMax' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch3_ImmedTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch3_ImmedTorqMax_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_e);

    /* Outport: '<Root>/VeTCPR_M_Clch3_ImmedTorqMin' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch3_ImmedTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch3_ImmedTorqMin_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_dx);

    /* Outport: '<Root>/VeTCPR_M_Clch3_PrdtdTorqMax' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch3_PrdtdTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch3_PrdtdTorqMax_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_lf);

    /* Outport: '<Root>/VeTCPR_M_Clch3_PrdtdTorqMin' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch3_PrdtdTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch3_PrdtdTorqMin_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Vari_dx2);

    /* Outport: '<Root>/VeTCPR_M_Clch4_ImmedTorqMax' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch4_ImmedTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch4_ImmedTorqMax_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varia_i0);

    /* Outport: '<Root>/VeTCPR_M_Clch4_ImmedTorqMin' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch4_ImmedTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch4_ImmedTorqMin_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_k);

    /* Outport: '<Root>/VeTCPR_M_Clch4_PrdtdTorqMax' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch4_PrdtdTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch4_PrdtdTorqMax_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_c);

    /* Outport: '<Root>/VeTCPR_M_Clch4_PrdtdTorqMin' incorporates:
     *  SignalConversion generated from: '<S1>/VeTCPR_M_Clch4_PrdtdTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch4_PrdtdTorqMin_Value
        (TCPR_ac_B.VariantMerge_For_Variant_Source_Varian_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, TCPR_CODE) TCPR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TCPR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/TCPO_Init'
     */
    /* SignalConversion generated from: '<S756>/VeTCPR_b_C1_SlipDetected' */
    TCPR_ac_B.OutportBufferForVeTCPR_b_C1_SlipDetected = false;

    /* SignalConversion generated from: '<S756>/VeTCPR_b_C2_SlipDetected' */
    TCPR_ac_B.OutportBufferForVeTCPR_b_C2_SlipDetected = false;

    /* SignalConversion generated from: '<S756>/VeTCPR_b_ClchOffloadCnfrmd' */
    TCPR_ac_B.OutportBufferForVeTCPR_b_ClchOffloadCnfr = false;

    /* Outport: '<Root>/VeTCPR_M_Clch1_TorqEstMax' incorporates:
     *  Constant: '<S757>/Calib'
     *  Gain: '<S756>/Gain18'
     *  SignalConversion generated from: '<S2>/Clch1_TorqEstMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_TorqEstMax_Value(HeTCPR_M_Clch1_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch1_TorqEstMin' incorporates:
     *  Constant: '<S757>/Calib'
     *  Gain: '<S756>/Gain'
     *  SignalConversion generated from: '<S2>/Clch1_TorqEstMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_TorqEstMin_Value(-HeTCPR_M_Clch1_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch2_TorqEstMax' incorporates:
     *  Constant: '<S758>/Calib'
     *  Gain: '<S756>/Gain20'
     *  SignalConversion generated from: '<S2>/Clch2_TorqEstMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_TorqEstMax_Value(HeTCPR_M_Clch2_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch2_TorqEstMin' incorporates:
     *  Constant: '<S758>/Calib'
     *  Gain: '<S756>/Gain1'
     *  SignalConversion generated from: '<S2>/Clch2_TorqEstMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_TorqEstMin_Value(-HeTCPR_M_Clch2_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch3_TorqEstMax' incorporates:
     *  Constant: '<S759>/Calib'
     *  Gain: '<S756>/Gain19'
     *  SignalConversion generated from: '<S2>/Clch3_TorqEstMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch3_TorqEstMax_Value(HeTCPR_M_Clch3_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch3_TorqEstMin' incorporates:
     *  Constant: '<S759>/Calib'
     *  Gain: '<S756>/Gain2'
     *  SignalConversion generated from: '<S2>/Clch3_TorqEstMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch3_TorqEstMin_Value(-HeTCPR_M_Clch3_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch4_TorqEstMax' incorporates:
     *  Constant: '<S760>/Calib'
     *  Gain: '<S756>/Gain21'
     *  SignalConversion generated from: '<S2>/Clch4_TorqEstMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch4_TorqEstMax_Value(HeTCPR_M_Clch4_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch4_TorqEstMin' incorporates:
     *  Constant: '<S760>/Calib'
     *  Gain: '<S756>/Gain3'
     *  SignalConversion generated from: '<S2>/Clch4_TorqEstMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch4_TorqEstMin_Value(-HeTCPR_M_Clch4_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch1_ImmedTorqMax' incorporates:
     *  Constant: '<S757>/Calib'
     *  Gain: '<S756>/Gain22'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch1_ImmedTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_ImmedTorqMax_Value(HeTCPR_M_Clch1_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch1_ImmedTorqMin' incorporates:
     *  Constant: '<S757>/Calib'
     *  Gain: '<S756>/Gain4'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch1_ImmedTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_ImmedTorqMin_Value
        (-HeTCPR_M_Clch1_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch1_OptTorqMax' incorporates:
     *  Constant: '<S757>/Calib'
     *  Gain: '<S756>/Gain26'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch1_OptTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_OptTorqMax_Value(HeTCPR_M_Clch1_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch1_OptTorqMin' incorporates:
     *  Constant: '<S757>/Calib'
     *  Gain: '<S756>/Gain8'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch1_OptTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_OptTorqMin_Value(-HeTCPR_M_Clch1_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch1_PrdtdTorqMax' incorporates:
     *  Constant: '<S757>/Calib'
     *  Gain: '<S756>/Gain30'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch1_PrdtdTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_PrdtdTorqMax_Value(HeTCPR_M_Clch1_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch1_PrdtdTorqMax_EngOff' incorporates:
     *  Constant: '<S757>/Calib'
     *  Gain: '<S756>/Gain34'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch1_PrdtdTorqMax_EngOff'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_PrdtdTorqMax_EngOff_Value
        (HeTCPR_M_Clch1_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch1_PrdtdTorqMin' incorporates:
     *  Constant: '<S757>/Calib'
     *  Gain: '<S756>/Gain12'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch1_PrdtdTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_PrdtdTorqMin_Value
        (-HeTCPR_M_Clch1_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch1_PrdtdTorqMin_EngOff' incorporates:
     *  Constant: '<S757>/Calib'
     *  Gain: '<S756>/Gain16'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch1_PrdtdTorqMin_EngOff'
     */
    (void)Rte_Write_VeTCPR_M_Clch1_PrdtdTorqMin_EngOff_Value
        (-HeTCPR_M_Clch1_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch2_ImmedTorqMax' incorporates:
     *  Constant: '<S758>/Calib'
     *  Gain: '<S756>/Gain23'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch2_ImmedTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_ImmedTorqMax_Value(HeTCPR_M_Clch2_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch2_ImmedTorqMin' incorporates:
     *  Constant: '<S758>/Calib'
     *  Gain: '<S756>/Gain5'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch2_ImmedTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_ImmedTorqMin_Value
        (-HeTCPR_M_Clch2_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch2_OptTorqMax' incorporates:
     *  Constant: '<S758>/Calib'
     *  Gain: '<S756>/Gain27'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch2_OptTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_OptTorqMax_Value(HeTCPR_M_Clch2_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch2_OptTorqMin' incorporates:
     *  Constant: '<S758>/Calib'
     *  Gain: '<S756>/Gain9'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch2_OptTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_OptTorqMin_Value(-HeTCPR_M_Clch2_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch2_PrdtdTorqMax' incorporates:
     *  Constant: '<S758>/Calib'
     *  Gain: '<S756>/Gain31'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch2_PrdtdTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_PrdtdTorqMax_Value(HeTCPR_M_Clch2_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch2_PrdtdTorqMax_EngOff' incorporates:
     *  Constant: '<S758>/Calib'
     *  Gain: '<S756>/Gain35'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch2_PrdtdTorqMax_EngOff'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_PrdtdTorqMax_EngOff_Value
        (HeTCPR_M_Clch2_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch2_PrdtdTorqMin' incorporates:
     *  Constant: '<S758>/Calib'
     *  Gain: '<S756>/Gain13'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch2_PrdtdTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_PrdtdTorqMin_Value
        (-HeTCPR_M_Clch2_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch2_PrdtdTorqMin_EngOff' incorporates:
     *  Constant: '<S758>/Calib'
     *  Gain: '<S756>/Gain17'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch2_PrdtdTorqMin_EngOff'
     */
    (void)Rte_Write_VeTCPR_M_Clch2_PrdtdTorqMin_EngOff_Value
        (-HeTCPR_M_Clch2_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch3_ImmedTorqMax' incorporates:
     *  Constant: '<S759>/Calib'
     *  Gain: '<S756>/Gain24'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch3_ImmedTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch3_ImmedTorqMax_Value(HeTCPR_M_Clch3_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch3_ImmedTorqMin' incorporates:
     *  Constant: '<S759>/Calib'
     *  Gain: '<S756>/Gain6'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch3_ImmedTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch3_ImmedTorqMin_Value
        (-HeTCPR_M_Clch3_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch3_OptTorqMax' incorporates:
     *  Constant: '<S759>/Calib'
     *  Gain: '<S756>/Gain28'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch3_OptTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch3_OptTorqMax_Value(HeTCPR_M_Clch3_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch3_OptTorqMin' incorporates:
     *  Constant: '<S759>/Calib'
     *  Gain: '<S756>/Gain10'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch3_OptTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch3_OptTorqMin_Value(-HeTCPR_M_Clch3_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch3_PrdtdTorqMax' incorporates:
     *  Constant: '<S759>/Calib'
     *  Gain: '<S756>/Gain32'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch3_PrdtdTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch3_PrdtdTorqMax_Value(HeTCPR_M_Clch3_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch3_PrdtdTorqMin' incorporates:
     *  Constant: '<S759>/Calib'
     *  Gain: '<S756>/Gain14'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch3_PrdtdTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch3_PrdtdTorqMin_Value
        (-HeTCPR_M_Clch3_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch4_ImmedTorqMax' incorporates:
     *  Constant: '<S760>/Calib'
     *  Gain: '<S756>/Gain25'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch4_ImmedTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch4_ImmedTorqMax_Value(HeTCPR_M_Clch4_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch4_ImmedTorqMin' incorporates:
     *  Constant: '<S760>/Calib'
     *  Gain: '<S756>/Gain7'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch4_ImmedTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch4_ImmedTorqMin_Value
        (-HeTCPR_M_Clch4_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch4_OptTorqMax' incorporates:
     *  Constant: '<S760>/Calib'
     *  Gain: '<S756>/Gain29'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch4_OptTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch4_OptTorqMax_Value(HeTCPR_M_Clch4_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch4_OptTorqMin' incorporates:
     *  Constant: '<S760>/Calib'
     *  Gain: '<S756>/Gain11'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch4_OptTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch4_OptTorqMin_Value(-HeTCPR_M_Clch4_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch4_PrdtdTorqMax' incorporates:
     *  Constant: '<S760>/Calib'
     *  Gain: '<S756>/Gain33'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch4_PrdtdTorqMax'
     */
    (void)Rte_Write_VeTCPR_M_Clch4_PrdtdTorqMax_Value(HeTCPR_M_Clch4_TorqLmtInit);

    /* Outport: '<Root>/VeTCPR_M_Clch4_PrdtdTorqMin' incorporates:
     *  Constant: '<S760>/Calib'
     *  Gain: '<S756>/Gain15'
     *  SignalConversion generated from: '<S2>/VeTCPR_M_Clch4_PrdtdTorqMin'
     */
    (void)Rte_Write_VeTCPR_M_Clch4_PrdtdTorqMin_Value
        (-HeTCPR_M_Clch4_TorqLmtInit);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeTCPR_b_C1_SlipDetected' incorporates:
     *  SignalConversion generated from: '<S2>/VeTCPR_b_C1_SlipDetected'
     */
    (void)Rte_Write_VeTCPR_b_C1_SlipDetected_Value
        (TCPR_ac_B.OutportBufferForVeTCPR_b_C1_SlipDetected);

    /* Outport: '<Root>/VeTCPR_b_C2_SlipDetected' incorporates:
     *  SignalConversion generated from: '<S2>/VeTCPR_b_C2_SlipDetected'
     */
    (void)Rte_Write_VeTCPR_b_C2_SlipDetected_Value
        (TCPR_ac_B.OutportBufferForVeTCPR_b_C2_SlipDetected);

    /* Outport: '<Root>/VeTCPR_b_ClchOffloadCnfrmd' incorporates:
     *  SignalConversion generated from: '<S2>/VeTCPR_b_ClchOffloadCnfrmd'
     */
    (void)Rte_Write_VeTCPR_b_ClchOffloadCnfrmd_Value
        (TCPR_ac_B.OutportBufferForVeTCPR_b_ClchOffloadCnfr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, TCPR_CODE) TCPR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/TCPR_MedTED'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TCPC_25msec_Cntrl'
     */
    /* Start for If: '<S75>/If' */
#if Rte_SysCon_Variant_TCPR_3

    TCPR_ac_DW.If_ActiveSubsystem = -1;

#endif

    /* End of Start for If: '<S75>/If' */

    /* Start for If: '<S275>/If' */
#if Rte_SysCon_Variant_TCPR_7

    TCPR_ac_DW.If_ActiveSubsystem_p = -1;

#endif

    /* End of Start for If: '<S275>/If' */
    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
