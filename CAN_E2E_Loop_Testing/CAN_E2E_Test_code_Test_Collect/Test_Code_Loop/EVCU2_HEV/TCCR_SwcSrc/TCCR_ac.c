/*
 * File: TCCR_ac.c
 *
 * Code generated for Simulink model 'TCCR_ac'.
 *
 * Model version                  : 9.193
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:26:33 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TCCR_ac.h"
#include "look1_iflf_binlca_16a.h"
#include "look2_iflf_binlca_16a.h"

/* Named constants for Chart: '<S42>/Stateflow Chart' */
#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC
#define TCCR_ac_IN_LCCStatusLocked_PCActive ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC
#define TCCR_ac_IN_LCCStatusOpen_PCActive ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC
#define TCCR_ac_IN_LCCStatusOpen_PCInactive ((uint8)3U)
#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC
#define TCCR_ac_IN_LCCStatusOpening_PCInactive ((uint8)4U)
#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC
#define TCCR_ac_IN_LCCTorq_RampDown    ((uint8)5U)
#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC
#define TCCR_ac_IN_LCCTorq_RampUp      ((uint8)6U)
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
#define START_SEC_CALIB_UNSPECIFIED_TCCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(boolean, TCCR_VAR_INIT) HeTCCR_b_EnblClchRawTorqThr = 1;/* Referenced by: '<S19>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(boolean, TCCR_VAR_INIT) HeTCCR_b_EnblHTDRStateTrans = 1;/* Referenced by: '<S229>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(boolean, TCCR_VAR_INIT) HeTCCR_b_EnblRngStTrans = 1;/* Referenced by:
                                                                      * '<S35>/Calib'
                                                                      * '<S260>/Calib'
                                                                      * '<S243>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(boolean, TCCR_VAR_INIT) HeTCCR_b_UseHTDRC2_TcR = 1;/* Referenced by: '<S8>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(boolean, TCCR_VAR_INIT) HeTCCR_b_UseProgramParam = 1;/* Referenced by:
                                                                      * '<S161>/Calib'
                                                                      * '<S165>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(boolean, TCCR_VAR_INIT) HeTCCR_b_UseSGDsrd = 1;/* Referenced by: '<S261>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(boolean, TCCR_VAR_INIT) HeTCCR_b_UseTISRNi = 1;/* Referenced by:
                                                                      * '<S9>/Calib'
                                                                      * '<S10>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead || Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) HeTCCR_n_SlipSpdFailIdx = 1.0F;/* Referenced by:
                                                                      * '<S7>/Calib'
                                                                      * '<S370>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) HeTCCR_t_MedTEB_dT = 0.01F;/* Referenced by:
                                                                      * '<S227>/Calib'
                                                                      * '<S256>/Calib'
                                                                      * '<S47>/Calib'
                                                                      * '<S139>/Calib'
                                                                      * '<S174>/Calib'
                                                                      * '<S112>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) HeTCCR_t_MedTED_dT = 0.02F;/* Referenced by:
                                                                      * '<S503>/Calib'
                                                                      * '<S519>/Calib'
                                                                      * '<S422>/Calib'
                                                                      * '<S431>/Calib'
                                                                      * '<S458>/Calib'
                                                                      * '<S466>/Calib'
                                                                      * '<S476>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(boolean, TCCR_VAR_INIT) KaTCCR_b_HTDRLeadStNiTgtIdx[16] =
{
    1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 1, 1
} ;                                    /* Referenced by: '<S228>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(uint8, TCCR_VAR_INIT) KaTCCR_i_GearPrtct[13] =
{
    0U, 1U, 2U, 3U, 4U, 5U, 6U, 0U, 0U, 0U, 0U, 0U, 0U
} ;                                    /* Referenced by: '<S525>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead || Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(sint16, TCCR_VAR_INIT) KaTCCR_i_MapTCMGear2OptGear[13] =
{
    6, 1, 2, 3, 4, 5, 6, 6, 6, 6, 0, 0, 1
} ;                                    /* Referenced by:
                                        * '<S17>/Calib'
                                        * '<S401>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(uint16, TCCR_VAR_INIT) KaTCCR_i_NiTargetProcBlockSel[68] =
{
    4U, 4U, 0U, 2U, 0U, 2U, 4U, 3U, 4U, 3U, 1U, 0U, 1U, 4U, 4U, 0U, 4U, 0U, 2U,
    2U, 2U, 2U, 2U, 2U, 0U, 0U, 0U, 4U, 4U, 4U, 4U, 4U, 4U, 3U, 4U, 3U, 3U, 3U,
    3U, 3U, 4U, 4U, 4U, 3U, 4U, 4U, 4U, 4U, 2U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 2U,
    4U, 3U, 3U, 4U, 3U, 4U, 4U, 4U, 3U, 3U, 4U
} ;                                    /* Referenced by: '<S407>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(uint8, TCCR_VAR_INIT) KaTCCR_i_PRNDL_Gr_Src[30] =
{
    3U, 2U, 1U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 1U, 2U,
    3U, 2U, 2U, 3U, 2U, 1U, 3U, 2U, 1U, 2U, 2U
} ;                                    /* Referenced by: '<S526>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KaTCCR_n_Creep2Launch[13] =
{
    300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F,
    300.0F, 300.0F, 300.0F, 300.0F
} ;                                    /* Referenced by: '<S366>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KaTCCR_n_Launch2Creep[13] =
{
    300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F, 300.0F,
    300.0F, 300.0F, 300.0F, 300.0F
} ;                                    /* Referenced by: '<S367>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(uint16, TCCR_VAR_INIT) KeTCCR_Cnt_Drive2CoastHold = 1U;/* Referenced by:
                                                                      * '<S194>/Calib'
                                                                      * '<S304>/Calib'
                                                                      * '<S336>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead || Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_M_ClchTorqOncThrsh = 5.0F;/* Referenced by:
                                                                      * '<S18>/Calib'
                                                                      * '<S402>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_M_LCCTorqThrsh = 0.1F;/* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_M_LeadTcRMaxRaw = 0.0F;/* Referenced by: '<S441>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_M_LeadTcRMaxTrqFinal =
    2000.0F;                           /* Referenced by: '<S423>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_M_LoadTorqFrontLSP = -5.0F;/* Referenced by: '<S66>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_M_LoadTorqFrontRSP = 5.0F;/* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_M_TCCBlnd2ZeroTimpThrsh =
    5.0F;                              /* Referenced by: '<S138>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_M_TcRMaxLatchThres = 1.0F;/* Referenced by: '<S424>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_M_TcRMinLatchThres = -1.0F;/* Referenced by: '<S432>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_Pct_NiTgtAccPedActv = 5.0F;/* Referenced by: '<S477>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(boolean, TCCR_VAR_INIT) KeTCCR_b_BlndOL_CL = 0;/* Referenced by: '<S258>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(boolean, TCCR_VAR_INIT) KeTCCR_b_EnblCalcDamps = 1;/* Referenced by: '<S144>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(boolean, TCCR_VAR_INIT) KeTCCR_b_EnblCalcInrt = 1;/* Referenced by: '<S145>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(boolean, TCCR_VAR_INIT) KeTCCR_b_EnblPRND4TimpCreepCal = 0;/* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(boolean, TCCR_VAR_INIT) KeTCCR_b_EnblStkPrctAllT = 0;/* Referenced by: '<S111>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(boolean, TCCR_VAR_INIT) KeTCCR_b_EnblTLF4LCCLeadTcRMax = 1;/* Referenced by: '<S425>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(boolean, TCCR_VAR_INIT) KeTCCR_b_TCCTrqErrBlnd2ZeroEnbl =
    0;                                 /* Referenced by: '<S140>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(boolean, TCCR_VAR_INIT) KeTCCR_b_UsePredCreepCalc = 1;/* Referenced by: '<S262>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(boolean, TCCR_VAR_INIT) KeTCCR_b_UseTimpRaw4LCCStat = 1;/* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_dM_LeadTCRMaxLD = -100.0F;/* Referenced by: '<S460>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_dM_LeadTCRMinLU = 100.0F;/* Referenced by: '<S468>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_dM_LeadTcRMaxLULSP = 10.0F;/* Referenced by: '<S461>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_dM_LeadTcRMaxLURSP = 20.0F;/* Referenced by: '<S462>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_dM_LeadTcRMinLDLSP = -10.0F;/* Referenced by: '<S469>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_dM_LeadTcRMinLDRSP = -20.0F;/* Referenced by: '<S470>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_dn_NiTgtOffstLU = 400.0F;/* Referenced by: '<S478>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(uint16, TCCR_VAR_INIT) KeTCCR_i_SelFTCSrc = 1U;/* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(uint16, TCCR_VAR_INIT) KeTCCR_i_SelFTCSrc4Creep = 2U;/* Referenced by: '<S276>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_k_Drive2CoastSRCond = 0.87F;/* Referenced by:
                                                                      * '<S193>/Calib'
                                                                      * '<S303>/Calib'
                                                                      * '<S335>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_k_LCCTrqFiltCoeff = 0.8F;/* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_k_LCCTrqFiltCoeffRmpLU =
    0.1F;                              /* Referenced by: '<S37>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(uint16, TCCR_VAR_INIT) KeTCCR_k_StckDtctWinSize = 4U;/* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_n_IdleSpdBlendOffst = 50.0F;/* Referenced by: '<S479>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead || Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_n_NTurbAsyncEngageLSP =
    -100.0F;                           /* Referenced by:
                                        * '<S20>/Calib'
                                        * '<S403>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead || Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_n_NTurbAsyncEngageRSP =
    -50.0F;                            /* Referenced by:
                                        * '<S21>/Calib'
                                        * '<S404>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_n_NiTgtOffstMax = 150.0F;/* Referenced by: '<S480>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_n_VTurbLowBnd = 55.0F;/* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_n_VTurbLowBndLSP = 55.0F;/* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_n_VTurbLowBndRSP = 55.0F;/* Referenced by: '<S67>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_n_VTurbUpBnd = 55.0F;/* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_n_VTurbUpBndLSP = 5.0F;/* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_n_VTurbUpBndRSP = 5.0F;/* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_phi_TorqSignThresh = 120.0F;/* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_r_LCCClosingRmpLD = -1.0F;/* Referenced by: '<S99>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_r_LCCClosingRmpLU = 1.0F;/* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_r_LCCOpeningRmpLD = -1.0F;/* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_r_LCCOpeningRmpLU = 1.0F;/* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_r_StckDtctThresh = 0.002F;/* Referenced by: '<S110>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_t_Drive2CoastTime = 0.01F;/* Referenced by:
                                                                      * '<S195>/Calib'
                                                                      * '<S305>/Calib'
                                                                      * '<S337>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_t_NiTgtSTNBlndTime = 0.05F;/* Referenced by: '<S520>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_t_TCCTrqErrBlndBckTime =
    0.05F;                             /* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_t_TCCTrqErrBlndTime2Zero =
    0.05F;                             /* Referenced by: '<S141>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead || Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_t_TargetSpdBlndTime = 0.2F;/* Referenced by:
                                                                      * '<S230>/Calib'
                                                                      * '<S504>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_t_TargetSpdMinBlndTime =
    0.2F;                              /* Referenced by: '<S505>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_t_TorqSignTimeout = 1.0F;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KeTCCR_t_TurbSpdBlndTime = 0.1F;/* Referenced by: '<S263>/Calib' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KtTCCR_M_TLFLimOffset[9] =
{
    30.0F, 30.0F, 0.0F, 30.0F, 30.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S176>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KtTCCR_M_TimpTgtToClose[7] =
{
    5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F
} ;                                    /* Referenced by: '<S101>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KtTCCR_M_TimpThrshLCCSt3Exit[7] =
{
    2.0F, 2.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F
} ;                                    /* Referenced by: '<S86>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KtTCCR_M_TimpThrshLCCSt4Exit[7] =
{
    5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F
} ;                                    /* Referenced by: '<S87>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KtTCCR_M_TimpThrshOpeningExit[7] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S88>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KtTCCR_dM_LeadTCRMaxLU[6] =
{
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by:
                                        * '<S426>/Vector'
                                        * '<S463>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KtTCCR_dM_LeadTCRMinLU[6] =
{
    -100.0F, -100.0F, -100.0F, -100.0F, -100.0F, -100.0F
} ;                                    /* Referenced by:
                                        * '<S433>/Vector'
                                        * '<S471>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KtTCCR_k_NiTgtKiFac[5] =
{
    0.0F, 0.0F, 0.0F, 0.1F, 0.1F
} ;                                    /* Referenced by: '<S481>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KtTCCR_k_NiTgtKiMx[5] =
{
    300.0F, 300.0F, 200.0F, 100.0F, 0.0F
} ;                                    /* Referenced by: '<S482>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KtTCCR_k_TLFSpdRatFiltCoeff[18] =
{
    0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F, 0.5F,
    0.5F, 0.5F, 0.5F, 0.5F, 0.5F
} ;                                    /* Referenced by: '<S180>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KtTCCR_k_TimpRawStckAdj[7] =
{
    1.0F, 1.0F, 0.9F, 0.7F, 0.6F, 0.5F, 0.5F
} ;                                    /* Referenced by: '<S116>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KtTCCR_k_TorqImpFiltCoeff[36] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S378>/Vector'
                                        * '<S390>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KtTCCR_n_AccPed_Clch2[11] =
{
    0.0F, 40.0F, 81.0F, 120.0F, 160.0F, 200.0F, 240.0F, 280.0F, 320.0F, 340.0F,
    380.0F
} ;                                    /* Referenced by: '<S442>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KtTCCR_r_TimpPerTgtToOpen[25] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S117>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KtTCCR_t_NiTgtBlndNoRrAxlMaxRq[6] =
{
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F
} ;                                    /* Referenced by: '<S483>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KtTCCR_t_NiTgtBlndRrAxlMaxRq[6] =
{
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F
} ;                                    /* Referenced by: '<S484>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KxTCCR_M_TLFLimOffset[3] =
{
    501.0F, 1000.0F, 1500.0F
} ;                                    /* Referenced by: '<S176>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KxTCCR_M_TimpTgtToClose[7] =
{
    0.0F, 500.0F, 1000.0F, 2000.0F, 3000.0F, 4000.0F, 7000.0F
} ;                                    /* Referenced by: '<S101>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KxTCCR_M_TimpThrshLCCSt3Exit[7] =
{
    10.0F, 1000.0F, 2000.0F, 3000.0F, 4000.0F, 5000.0F, 6000.0F
} ;                                    /* Referenced by: '<S86>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KxTCCR_M_TimpThrshLCCSt4Exit[7] =
{
    10.0F, 1000.0F, 2000.0F, 3000.0F, 4000.0F, 5000.0F, 6000.0F
} ;                                    /* Referenced by: '<S87>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KxTCCR_M_TimpThrshOpeningExit[7] =
{
    10.0F, 1000.0F, 2000.0F, 3000.0F, 4000.0F, 5000.0F, 6000.0F
} ;                                    /* Referenced by: '<S88>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KxTCCR_dM_LeadTCRMaxLU[6] =
{
    0.0F, 25.0F, 45.0F, 60.0F, 75.0F, 100.0F
} ;                                    /* Referenced by:
                                        * '<S426>/Vector'
                                        * '<S463>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KxTCCR_dM_LeadTCRMinLU[6] =
{
    0.0F, 25.0F, 45.0F, 60.0F, 75.0F, 100.0F
} ;                                    /* Referenced by:
                                        * '<S433>/Vector'
                                        * '<S471>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KxTCCR_k_NiTgtKiFac[5] =
{
    -100.1F, -50.0F, 0.0F, 50.0F, 100.0F
} ;                                    /* Referenced by: '<S481>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KxTCCR_k_NiTgtKiMx[5] =
{
    0.0F, 500.0F, 750.0F, 1000.0F, 1400.0F
} ;                                    /* Referenced by: '<S482>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KxTCCR_k_TLFSpdRatFiltCoeff[18] =
{
    0.0F, 0.1F, 0.21F, 0.3F, 0.4F, 0.5F, 0.57F, 0.62F, 0.7F, 0.75F, 0.8F, 0.85F,
    0.9F, 0.92F, 0.94F, 0.96F, 0.98F, 1.0F
} ;                                    /* Referenced by: '<S180>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KxTCCR_k_TimpRawStckAdj[7] =
{
    0.0F, 0.1F, 0.3F, 0.4F, 0.5F, 0.6F, 0.8F
} ;                                    /* Referenced by: '<S116>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KxTCCR_k_TorqImpFiltCoeff[6] =
{
    0.0F, 750.0F, 1500.0F, 2500.0F, 3500.0F, 4250.0F
} ;                                    /* Referenced by:
                                        * '<S378>/Vector'
                                        * '<S390>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KxTCCR_n_AccPed_Clch2[11] =
{
    0.0F, 11.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S442>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KxTCCR_r_TimpPerTgtToOpen[5] =
{
    0.01F, 500.0F, 2500.0F, 4500.0F, 7000.0F
} ;                                    /* Referenced by: '<S117>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KxTCCR_t_NiTgtBlndNoRrAxlMaxRq[6] =
{
    0.0F, 20.0F, 41.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S483>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KxTCCR_t_NiTgtBlndRrAxlMaxRq[6] =
{
    0.0F, 20.0F, 41.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S484>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KyTCCR_M_TLFLimOffset[3] =
{
    0.0F, 51.0F, 100.0F
} ;                                    /* Referenced by: '<S176>/Vector' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static volatile CONST(float32, TCCR_VAR_INIT) KyTCCR_k_TorqImpFiltCoeff[6] =
{
    0.0F, 0.4F, 0.85F, 0.9F, 0.98F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S378>/Vector'
                                        * '<S390>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static volatile CONST(float32, TCCR_VAR_INIT) KyTCCR_r_TimpPerTgtToOpen[5] =
{
    10.0F, 50.0F, 100.0F, 200.0F, 500.0F
} ;                                    /* Referenced by: '<S117>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_TCCR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TCCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(float32, TCCR_VAR_INIT) VeTCCC_r_TCSRMinVTVR;/* '<S397>/Switch1' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(float32, TCCR_VAR_INIT) VeTCCC_r_TCSRVTVR;/* '<S385>/Switch1' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(float32, TCCR_VAR_INIT) VeTCCR_M_Timp4VTVRRaw;/* '<S384>/Switch1' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(float32, TCCR_VAR_INIT) VeTCCR_M_TimpMin4VTVRRaw;/* '<S396>/Switch1' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(boolean, TCCR_VAR_INIT) VeTCCR_b_ClchOncActive;/* '<S373>/Logical' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(boolean, TCCR_VAR_INIT) VeTCCR_b_LeadTcRMax_LatchPrev;/* '<S375>/Merge3' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(boolean, TCCR_VAR_INIT) VeTCCR_b_LeadTcRMin_LatchPrev;/* '<S375>/Merge4' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(float32, TCCR_VAR_INIT) VeTCCR_n_ActualSlipDelta;/* '<S454>/MinMax2' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(float32, TCCR_VAR_INIT) VeTCCR_n_LeadTcR_MaxRaw;/* '<S408>/MinMax1' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(float32, TCCR_VAR_INIT) VeTCCR_n_LeadTcR_MinRaw;/* '<S408>/Switch2' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(float32, TCCR_VAR_INIT) VeTCCR_n_NiTgt;/* '<S375>/MinMax1' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static VAR(float32, TCCR_VAR_INIT) VeTCCR_n_NiTgt4HTDR;/* '<S233>/Summation' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(float32, TCCR_VAR_INIT) VeTCCR_n_NiTgtCLOffst;/* '<S473>/Switch1' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(float32, TCCR_VAR_INIT) VeTCCR_n_NiTgtMin;/* '<S375>/MinMax2' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(float32, TCCR_VAR_INIT) VeTCCR_n_NiTgtOLOffst;/* '<S475>/Sum3' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(float32, TCCR_VAR_INIT) VeTCCR_n_NiTgtOffstIdleSpdBlnded;/* '<S451>/Sum6' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(float32, TCCR_VAR_INIT) VeTCCR_n_NiTgtSCORwCL;/* '<S451>/Sum10' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(float32, TCCR_VAR_INIT) VeTCCR_n_NiTgtSlipDelta;/* '<S474>/Summation' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(float32, TCCR_VAR_INIT) VeTCCR_n_NiTgtSlipDeltaRaw;/* '<S451>/Sum' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(float32, TCCR_VAR_INIT) VeTCCR_n_TargetSlipDelta;/* '<S454>/MinMax1' */

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

static VAR(float32, TCCR_VAR_INIT) VeTCCR_r_NiTgtSlipRatio;/* '<S485>/Switch' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TCCR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TCCR
#include "MemMap.h"

CONST(ConstB_TCCR_ac_T, TCCR_VAR_INIT) TCCR_ac_ConstB =
{
    CeTMMR_e_UnknownNCSign,            /* '<S529>/Constant' */
    CeHCCR_e_ClInvalid                 /* '<S530>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_TCCR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TCCR
#include "MemMap.h"

CONST(ConstP_TCCR_ac_T, TCCR_VAR_INIT) TCCR_ac_ConstP =
{

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S117>/Vector'
     */
    {
        4U, 4U
    },

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    /* Computed Parameter: Vector_maxIndex_i
     * Referenced by: '<S176>/Vector'
     */
    {
        2U, 2U
    },

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S378>/Vector'
     *   '<S390>/Vector'
     */
    {
        5U, 5U
    },

#endif

#ifndef CONSTP_TCCR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_TCCR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TCCR
#include "MemMap.h"

VAR(B_TCCR_ac_T, TCCR_VAR_INIT) TCCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TCCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TCCR
#include "MemMap.h"

VAR(DW_TCCR_ac_T, TCCR_VAR_INIT) TCCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TCCR
#include "MemMap.h"
#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static FUNC(void, TCCR_CODE_LOCAL) TCCR_ac_Released(P2VAR(float32, AUTOMATIC,
    TCCR_VAR_INIT) rty_ReleasedRampFactor, P2VAR(float32, AUTOMATIC,
    TCCR_VAR_INIT) rty_ReleasedRampFactorLU, P2VAR(float32, AUTOMATIC,
    TCCR_VAR_INIT) rty_ReleasedRampFactorLD, P2VAR(TeHCCR_e_ClutchStatus,
    AUTOMATIC, TCCR_VAR_INIT) rty_LCCSt, P2VAR(boolean, AUTOMATIC, TCCR_VAR_INIT)
    rty_OpenRFStck, P2VAR(float32, AUTOMATIC, TCCR_VAR_INIT) rty_OpenRFStckRatio,
    P2VAR(TeTCCR_e_LCCStatus, AUTOMATIC, TCCR_VAR_INIT) rty_LCCMngSt);

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static FUNC(void, TCCR_CODE_LOCAL) TCCR_ac_Closing(VAR(float32, AUTOMATIC)
    rtu_Nturb, VAR(float32, AUTOMATIC) rtu_Timp, VAR(float32, AUTOMATIC)
    rtu_TimpInit, VAR(float32, AUTOMATIC) rtu_RampFactorInit, P2VAR(float32,
    AUTOMATIC, TCCR_VAR_INIT) rty_ClosingRampFactor, P2VAR(float32, AUTOMATIC,
    TCCR_VAR_INIT) rty_RampFactorLU, P2VAR(float32, AUTOMATIC, TCCR_VAR_INIT)
    rty_RampFactorLD, P2VAR(TeHCCR_e_ClutchStatus, AUTOMATIC, TCCR_VAR_INIT)
    rty_LCCSt, P2VAR(boolean, AUTOMATIC, TCCR_VAR_INIT) rty_OpenRFStck, P2VAR
    (float32, AUTOMATIC, TCCR_VAR_INIT) rty_OpenRFStckRatio, P2VAR
    (TeTCCR_e_LCCStatus, AUTOMATIC, TCCR_VAR_INIT) rty_LCCMngSt);

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static FUNC(void, TCCR_CODE_LOCAL) TCCR_ac_IfAct(VAR(uint16, AUTOMATIC) rtu_In1,
    P2VAR(uint16, AUTOMATIC, TCCR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static FUNC(void, TCCR_CODE_LOCAL) TCCR_ac_Opening(VAR(float32, AUTOMATIC)
    rtu_Nturb, VAR(float32, AUTOMATIC) rtu_Timp, VAR(float32, AUTOMATIC)
    rtu_TimpInit, VAR(float32, AUTOMATIC) rtu_TlfMod, VAR(float32, AUTOMATIC)
    rtu_RampFactorInit, VAR(boolean, AUTOMATIC) rtu_Reset, P2VAR(float32,
    AUTOMATIC, TCCR_VAR_INIT) rty_OpeningRampFactor, P2VAR(float32, AUTOMATIC,
    TCCR_VAR_INIT) rty_RampFactorLU, P2VAR(float32, AUTOMATIC, TCCR_VAR_INIT)
    rty_RampFactorLD, P2VAR(TeHCCR_e_ClutchStatus, AUTOMATIC, TCCR_VAR_INIT)
    rty_LCCSt, P2VAR(boolean, AUTOMATIC, TCCR_VAR_INIT) rty_OpenRFStck, P2VAR
    (float32, AUTOMATIC, TCCR_VAR_INIT) rty_OpenRFStckRatio, P2VAR
    (TeTCCR_e_LCCStatus, AUTOMATIC, TCCR_VAR_INIT) rty_LCCMngSt, P2VAR
    (DW_Opening_TCCR_ac_T, AUTOMATIC, TCCR_VAR_INIT) localDW);

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static FUNC(void, TCCR_CODE_LOCAL) TCCR_ac_Locked(P2VAR(float32, AUTOMATIC,
    TCCR_VAR_INIT) rty_LockedRampFactor, P2VAR(float32, AUTOMATIC, TCCR_VAR_INIT)
    rty_LockedRampFactorLU, P2VAR(float32, AUTOMATIC, TCCR_VAR_INIT)
    rty_LockedRampFactorLD, P2VAR(TeHCCR_e_ClutchStatus, AUTOMATIC,
    TCCR_VAR_INIT) rty_LCCSt, P2VAR(boolean, AUTOMATIC, TCCR_VAR_INIT)
    rty_OpenRFStck, P2VAR(float32, AUTOMATIC, TCCR_VAR_INIT) rty_OpenRFStckRatio,
    P2VAR(TeTCCR_e_LCCStatus, AUTOMATIC, TCCR_VAR_INIT) rty_LCCMngSt);

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static FUNC(void, TCCR_CODE_LOCAL) TCCR_ac_BASE(VAR(float32, AUTOMATIC)
    rtu_TIMP_IN, VAR(float32, AUTOMATIC) rtu_TR_IN, VAR(float32, AUTOMATIC)
    rtu_SR_IN, P2VAR(float32, AUTOMATIC, TCCR_VAR_INIT) rty_FTC_OUTPUTS, P2VAR
    (float32, AUTOMATIC, TCCR_VAR_INIT) rty_FTC_OUTPUTS_a, P2VAR(float32,
    AUTOMATIC, TCCR_VAR_INIT) rty_FTC_OUTPUTS_b);

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static FUNC(void, TCCR_CODE_LOCAL) TCCR_ac_HSCL_FTC_TturbTimp(VAR(float32,
    AUTOMATIC) rtu_Nturb, VAR(float32, AUTOMATIC) rtu_Ni, VAR(boolean, AUTOMATIC)
    rtu_NC2SlipSpdFailing, P2VAR(B_HSCL_FTC_TturbTimp_TCCR_ac_T, AUTOMATIC,
    TCCR_VAR_INIT) localB);

#endif

/* Output and update for function-call system: '<S42>/Released' */
#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static FUNC(void, TCCR_CODE_LOCAL) TCCR_ac_Released(P2VAR(float32, AUTOMATIC,
    TCCR_VAR_INIT) rty_ReleasedRampFactor, P2VAR(float32, AUTOMATIC,
    TCCR_VAR_INIT) rty_ReleasedRampFactorLU, P2VAR(float32, AUTOMATIC,
    TCCR_VAR_INIT) rty_ReleasedRampFactorLD, P2VAR(TeHCCR_e_ClutchStatus,
    AUTOMATIC, TCCR_VAR_INIT) rty_LCCSt, P2VAR(boolean, AUTOMATIC, TCCR_VAR_INIT)
    rty_OpenRFStck, P2VAR(float32, AUTOMATIC, TCCR_VAR_INIT) rty_OpenRFStckRatio,
    P2VAR(TeTCCR_e_LCCStatus, AUTOMATIC, TCCR_VAR_INIT) rty_LCCMngSt)
{
    /* SignalConversion generated from: '<S91>/ReleasedRampFactor' incorporates:
     *  Constant: '<S91>/Constant Value5'
     */
    *rty_ReleasedRampFactor = 1.0F;

    /* SignalConversion generated from: '<S91>/ReleasedRampFactorLU' incorporates:
     *  Constant: '<S91>/Constant Value1'
     */
    *rty_ReleasedRampFactorLU = 999.0F;

    /* SignalConversion generated from: '<S91>/ReleasedRampFactorLD' incorporates:
     *  Constant: '<S91>/Constant Value2'
     */
    *rty_ReleasedRampFactorLD = 0.0F;

    /* SignalConversion generated from: '<S91>/LCCSt' incorporates:
     *  Constant: '<S131>/Constant'
     */
    *rty_LCCSt = CeHCCR_e_ClReleased;

    /* SignalConversion generated from: '<S91>/OpenRFStck' incorporates:
     *  Constant: '<S91>/Constant Value3'
     */
    *rty_OpenRFStck = false;

    /* SignalConversion generated from: '<S91>/OpenRFStckRatio' incorporates:
     *  Constant: '<S91>/Constant Value4'
     */
    *rty_OpenRFStckRatio = 0.0F;

    /* SignalConversion generated from: '<S91>/LCCMngSt' incorporates:
     *  Constant: '<S132>/Constant'
     */
    *rty_LCCMngSt = CeTCCR_e_LCCReleased;
}

#endif

/* Output and update for function-call system: '<S42>/Closing' */
#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static FUNC(void, TCCR_CODE_LOCAL) TCCR_ac_Closing(VAR(float32, AUTOMATIC)
    rtu_Nturb, VAR(float32, AUTOMATIC) rtu_Timp, VAR(float32, AUTOMATIC)
    rtu_TimpInit, VAR(float32, AUTOMATIC) rtu_RampFactorInit, P2VAR(float32,
    AUTOMATIC, TCCR_VAR_INIT) rty_ClosingRampFactor, P2VAR(float32, AUTOMATIC,
    TCCR_VAR_INIT) rty_RampFactorLU, P2VAR(float32, AUTOMATIC, TCCR_VAR_INIT)
    rty_RampFactorLD, P2VAR(TeHCCR_e_ClutchStatus, AUTOMATIC, TCCR_VAR_INIT)
    rty_LCCSt, P2VAR(boolean, AUTOMATIC, TCCR_VAR_INIT) rty_OpenRFStck, P2VAR
    (float32, AUTOMATIC, TCCR_VAR_INIT) rty_OpenRFStckRatio, P2VAR
    (TeTCCR_e_LCCStatus, AUTOMATIC, TCCR_VAR_INIT) rty_LCCMngSt)
{
    float32 rtb_MinMax2_l;
    float32 rtb_Product1_jr;

    /* Product: '<S81>/Product1' incorporates:
     *  Lookup_n-D: '<S101>/Vector'
     */
    rtb_Product1_jr = look1_iflf_binlca_16a(rtu_Nturb, ((const float32 *)
        &(KxTCCR_M_TimpTgtToClose[0])), ((const float32 *)
        &(KtTCCR_M_TimpTgtToClose[0])), 6U);

    /* MinMax: '<S81>/MinMax2' incorporates:
     *  Abs: '<S81>/Abs2'
     *  Constant: '<S81>/Constant Value1'
     *  Sum: '<S81>/Sum2'
     */
    rtb_MinMax2_l = fmaxf(fabsf(rtu_Timp) - rtb_Product1_jr, 0.0F);

    /* Outputs for Atomic SubSystem: '<S81>/Protected Division' */
    /* Switch: '<S102>/Switch1' incorporates:
     *  Constant: '<S102>/Constant Value'
     *  Constant: '<S102>/Constant Value2'
     *  RelationalOperator: '<S102>/Greater Than or Equal '
     *  RelationalOperator: '<S102>/Not Equal'
     *  Switch: '<S102>/Switch2'
     */
    if (rtb_MinMax2_l != 0.0F)
    {
        /* Switch: '<S102>/Switch1' incorporates:
         *  Abs: '<S81>/Abs1'
         *  Constant: '<S81>/Constant Value4'
         *  MinMax: '<S81>/MinMax4'
         *  Product: '<S102>/Division'
         *  Sum: '<S81>/Sum1'
         */
        rtb_Product1_jr = rtb_MinMax2_l / fmaxf(fabsf(rtu_TimpInit) -
            rtb_Product1_jr, 0.5F);
    }
    else if (rtb_MinMax2_l > 0.0F)
    {
        /* Switch: '<S102>/Switch2' incorporates:
         *  Constant: '<S102>/MAXFLOAT'
         *  Switch: '<S102>/Switch1'
         */
        rtb_Product1_jr = 3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S102>/Switch1' incorporates:
         *  Constant: '<S102>/Constant Value4'
         *  Switch: '<S102>/Switch2'
         *  Switch: '<S102>/Switch3'
         */
        rtb_Product1_jr = 0.0F;
    }

    /* End of Switch: '<S102>/Switch1' */
    /* End of Outputs for SubSystem: '<S81>/Protected Division' */

    /* MinMax: '<S81>/MinMax5' incorporates:
     *  Constant: '<S81>/Constant Value5'
     *  Product: '<S81>/Product1'
     */
    *rty_ClosingRampFactor = fminf(rtu_RampFactorInit * rtb_Product1_jr, 1.0F);

    /* SignalConversion generated from: '<S81>/RampFactorLU' incorporates:
     *  Constant: '<S100>/Calib'
     */
    *rty_RampFactorLU = KeTCCR_r_LCCClosingRmpLU;

    /* SignalConversion generated from: '<S81>/RampFactorLD' incorporates:
     *  Constant: '<S99>/Calib'
     */
    *rty_RampFactorLD = KeTCCR_r_LCCClosingRmpLD;

    /* SignalConversion generated from: '<S81>/LCCSt' incorporates:
     *  Constant: '<S97>/Constant'
     */
    *rty_LCCSt = CeHCCR_e_ClActuated;

    /* SignalConversion generated from: '<S81>/OpenRFStck' incorporates:
     *  Constant: '<S81>/Constant Value3'
     */
    *rty_OpenRFStck = false;

    /* SignalConversion generated from: '<S81>/OpenRFStckRatio' incorporates:
     *  Constant: '<S81>/Constant Value2'
     */
    *rty_OpenRFStckRatio = 0.0F;

    /* SignalConversion generated from: '<S81>/LCCMngSt' incorporates:
     *  Constant: '<S98>/Constant'
     */
    *rty_LCCMngSt = CeTCCR_e_LCCClosing;
}

#endif

/*
 * Output and update for action system:
 *    '<S123>/IfAct'
 *    '<S123>/ElseAct'
 *    '<S126>/IfAct'
 *    '<S126>/ElseAct'
 */
#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static FUNC(void, TCCR_CODE_LOCAL) TCCR_ac_IfAct(VAR(uint16, AUTOMATIC) rtu_In1,
    P2VAR(uint16, AUTOMATIC, TCCR_VAR_INIT) rty_Out1)
{
    /* Inport: '<S125>/In1' */
    *rty_Out1 = rtu_In1;
}

#endif

/* Output and update for function-call system: '<S42>/Opening' */
#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static FUNC(void, TCCR_CODE_LOCAL) TCCR_ac_Opening(VAR(float32, AUTOMATIC)
    rtu_Nturb, VAR(float32, AUTOMATIC) rtu_Timp, VAR(float32, AUTOMATIC)
    rtu_TimpInit, VAR(float32, AUTOMATIC) rtu_TlfMod, VAR(float32, AUTOMATIC)
    rtu_RampFactorInit, VAR(boolean, AUTOMATIC) rtu_Reset, P2VAR(float32,
    AUTOMATIC, TCCR_VAR_INIT) rty_OpeningRampFactor, P2VAR(float32, AUTOMATIC,
    TCCR_VAR_INIT) rty_RampFactorLU, P2VAR(float32, AUTOMATIC, TCCR_VAR_INIT)
    rty_RampFactorLD, P2VAR(TeHCCR_e_ClutchStatus, AUTOMATIC, TCCR_VAR_INIT)
    rty_LCCSt, P2VAR(boolean, AUTOMATIC, TCCR_VAR_INIT) rty_OpenRFStck, P2VAR
    (float32, AUTOMATIC, TCCR_VAR_INIT) rty_OpenRFStckRatio, P2VAR
    (TeTCCR_e_LCCStatus, AUTOMATIC, TCCR_VAR_INIT) rty_LCCMngSt, P2VAR
    (DW_Opening_TCCR_ac_T, AUTOMATIC, TCCR_VAR_INIT) localDW)
{
    float32 rtb_Abs1_k;
    float32 rtb_Abs3;
    float32 rtb_MinMax3;
    float32 rtb_Vector_e3;
    uint16 rtb_UnitDelay_fd;
    boolean tmp;

    /* Outputs for Atomic SubSystem: '<S90>/Windowed Average1' */
    /* Outputs for Atomic SubSystem: '<S122>/Limiter' */
    /* Switch: '<S130>/Switch1' incorporates:
     *  Constant: '<S115>/Calib'
     *  Constant: '<S122>/Constant Value1'
     *  RelationalOperator: '<S130>/Relational Operator'
     */
    if (500 < ((sint32)KeTCCR_k_StckDtctWinSize))
    {
        /* UnitDelay: '<S107>/Unit Delay' */
        rtb_UnitDelay_fd = 500U;
    }
    else
    {
        /* UnitDelay: '<S107>/Unit Delay' */
        rtb_UnitDelay_fd = KeTCCR_k_StckDtctWinSize;
    }

    /* End of Switch: '<S130>/Switch1' */

    /* Switch: '<S130>/Switch' incorporates:
     *  Constant: '<S122>/Constant Value'
     *  RelationalOperator: '<S130>/Relational Operator1'
     */
    if (((sint32)rtb_UnitDelay_fd) <= 1)
    {
        /* Switch: '<S130>/Switch' */
        rtb_UnitDelay_fd = 1U;
    }

    /* End of Switch: '<S130>/Switch' */
    /* End of Outputs for SubSystem: '<S122>/Limiter' */

    /* Chart: '<S122>/Chart' incorporates:
     *  UnitDelay: '<S90>/Unit Delay12'
     */
    /* Gateway: Filters/Moving Average/Windowed Average/Chart */
    /* During: Filters/Moving Average/Windowed Average/Chart */
    /* Entry Internal: Filters/Moving Average/Windowed Average/Chart */
    /* Transition: '<S129>:1' */
    if (rtu_Reset || ((rtb_UnitDelay_fd != localDW->prior_window_size) &&
                      (localDW->first_pass_complete)))
    {
        /* Transition: '<S129>:2' */
        /* Transition: '<S129>:4' */
        localDW->count = 0U;
        localDW->sum = 0.0F;
        localDW->average = 0.0F;

        /* Transition: '<S129>:10' */
        /* Transition: '<S129>:7' */
    }
    else
    {
        /* Transition: '<S129>:9' */
        localDW->sum += localDW->UnitDelay12_DSTATE;
        localDW->count = (uint16)((sint32)(((sint32)localDW->count) + 1));
        if (localDW->count >= rtb_UnitDelay_fd)
        {
            /* Transition: '<S129>:3' */
            /* Transition: '<S129>:5' */
            localDW->average = localDW->sum / ((float32)localDW->count);
            localDW->sum = 0.0F;
            localDW->count = 0U;

            /* Transition: '<S129>:7' */
        }
        else
        {
            /* Transition: '<S129>:6' */
        }
    }

    /* Transition: '<S129>:8' */
    localDW->prior_window_size = rtb_UnitDelay_fd;
    localDW->first_pass_complete = true;

    /* End of Outputs for SubSystem: '<S90>/Windowed Average1' */

    /* Abs: '<S90>/Abs1' */
    rtb_Abs1_k = fabsf(rtu_TimpInit);

    /* Abs: '<S90>/Abs3' */
    rtb_Abs3 = fabsf(rtu_TlfMod);

    /* Outputs for Atomic SubSystem: '<S90>/Counter Reset Enabled 1' */
    /* If: '<S126>/If' incorporates:
     *  Constant: '<S107>/Constant Value1'
     *  Constant: '<S107>/Constant Value2'
     *  Sum: '<S107>/Subtraction'
     *  UnitDelay: '<S107>/Unit Delay'
     */
    if (rtu_Reset)
    {
        /* Outputs for IfAction SubSystem: '<S126>/IfAct' incorporates:
         *  ActionPort: '<S128>/Action Port'
         */
        TCCR_ac_IfAct(0, &localDW->UnitDelay_DSTATE);

        /* End of Outputs for SubSystem: '<S126>/IfAct' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S126>/ElseAct' incorporates:
         *  ActionPort: '<S127>/Action Port'
         */
        TCCR_ac_IfAct((uint16)(((uint32)localDW->UnitDelay_DSTATE) + 1U),
                      &localDW->UnitDelay_DSTATE);

        /* End of Outputs for SubSystem: '<S126>/ElseAct' */
    }

    /* End of If: '<S126>/If' */
    /* End of Outputs for SubSystem: '<S90>/Counter Reset Enabled 1' */

    /* Outputs for Atomic SubSystem: '<S90>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S90>/Windowed Average1' */
    /* Logic: '<S121>/OR1' incorporates:
     *  Abs: '<S90>/Abs'
     *  Chart: '<S122>/Chart'
     *  Constant: '<S110>/Calib'
     *  Constant: '<S115>/Calib'
     *  Logic: '<S121>/NOT'
     *  Logic: '<S121>/OR'
     *  Logic: '<S90>/Logical1'
     *  RelationalOperator: '<S90>/Comparison3'
     *  RelationalOperator: '<S90>/Comparison4'
     *  Sum: '<S90>/Sum5'
     *  UnitDelay: '<S107>/Unit Delay'
     *  UnitDelay: '<S121>/Unit Delay'
     *  UnitDelay: '<S90>/Unit Delay12'
     */
    localDW->UnitDelay_DSTATE_o = (((fabsf(localDW->UnitDelay12_DSTATE -
        localDW->average) < KeTCCR_r_StckDtctThresh) &&
        (localDW->UnitDelay_DSTATE >= KeTCCR_k_StckDtctWinSize)) || ((!rtu_Reset)
        && (localDW->UnitDelay_DSTATE_o)));

    /* End of Outputs for SubSystem: '<S90>/Windowed Average1' */
    /* End of Outputs for SubSystem: '<S90>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S90>/Counter Reset Enabled ' */
    /* If: '<S123>/If' incorporates:
     *  Constant: '<S106>/Constant Value2'
     *  Constant: '<S111>/Calib'
     *  Switch: '<S90>/Switch4'
     *  UnitDelay: '<S106>/Unit Delay'
     */
    if (rtu_Reset)
    {
        /* Outputs for IfAction SubSystem: '<S123>/IfAct' incorporates:
         *  ActionPort: '<S125>/Action Port'
         */
        TCCR_ac_IfAct(0, &localDW->UnitDelay_DSTATE_a);

        /* End of Outputs for SubSystem: '<S123>/IfAct' */
    }
    else
    {
        if (KeTCCR_b_EnblStkPrctAllT)
        {
            /* Switch: '<S90>/Switch4' incorporates:
             *  Constant: '<S90>/Constant1'
             */
            tmp = true;
        }
        else
        {
            /* Switch: '<S90>/Switch4' incorporates:
             *  Constant: '<S90>/Constant Value5'
             *  Logic: '<S90>/Logical'
             *  RelationalOperator: '<S90>/Comparison2'
             *  UnitDelay: '<S121>/Unit Delay'
             *  UnitDelay: '<S90>/Unit Delay12'
             */
            tmp = ((localDW->UnitDelay_DSTATE_o) && (localDW->UnitDelay12_DSTATE
                    < 1.0F));
        }

        /* Switch: '<S106>/Switch2' incorporates:
         *  Constant: '<S106>/Constant Value1'
         *  Sum: '<S106>/Subtraction'
         *  UnitDelay: '<S106>/Unit Delay'
         */
        if (tmp)
        {
            rtb_UnitDelay_fd = (uint16)(((uint32)localDW->UnitDelay_DSTATE_a) +
                1U);
        }
        else
        {
            rtb_UnitDelay_fd = localDW->UnitDelay_DSTATE_a;
        }

        /* End of Switch: '<S106>/Switch2' */

        /* Outputs for IfAction SubSystem: '<S123>/ElseAct' incorporates:
         *  ActionPort: '<S124>/Action Port'
         */
        TCCR_ac_IfAct(rtb_UnitDelay_fd, &localDW->UnitDelay_DSTATE_a);

        /* End of Outputs for SubSystem: '<S123>/ElseAct' */
    }

    /* End of If: '<S123>/If' */
    /* End of Outputs for SubSystem: '<S90>/Counter Reset Enabled ' */

    /* Lookup_n-D: '<S116>/Vector' incorporates:
     *  Constant: '<S112>/Calib'
     *  Product: '<S90>/Product2'
     *  UnitDelay: '<S106>/Unit Delay'
     */
    rtb_Vector_e3 = look1_iflf_binlca_16a(((float32)localDW->UnitDelay_DSTATE_a)
        * HeTCCR_t_MedTEB_dT, ((const float32 *)&(KxTCCR_k_TimpRawStckAdj[0])),
        ((const float32 *)&(KtTCCR_k_TimpRawStckAdj[0])), 6U);

    /* RelationalOperator: '<S90>/Comparison1' incorporates:
     *  Constant: '<S90>/Constant Value4'
     */
    *rty_OpenRFStck = (rtb_Vector_e3 < 1.0F);

    /* MinMax: '<S90>/MinMax3' incorporates:
     *  Abs: '<S90>/Abs2'
     *  Constant: '<S90>/Constant Value3'
     *  Sum: '<S90>/Sum3'
     */
    rtb_MinMax3 = fmaxf(fabsf(rtu_Timp) - rtb_Abs1_k, 0.0F);

    /* Outputs for Atomic SubSystem: '<S90>/Protected Division' */
    /* Switch: '<S118>/Switch1' incorporates:
     *  Constant: '<S118>/Constant Value'
     *  Constant: '<S118>/Constant Value2'
     *  RelationalOperator: '<S118>/Greater Than or Equal '
     *  RelationalOperator: '<S118>/Not Equal'
     *  Switch: '<S118>/Switch2'
     */
    if (rtb_MinMax3 != 0.0F)
    {
        /* Switch: '<S118>/Switch1' incorporates:
         *  Abs: '<S90>/Abs3'
         *  Constant: '<S90>/Constant Value2'
         *  Lookup_n-D: '<S117>/Vector'
         *  MinMax: '<S90>/MinMax1'
         *  Product: '<S118>/Division'
         *  Product: '<S90>/Product'
         *  Sum: '<S90>/Sum4'
         */
        rtb_Abs1_k = rtb_MinMax3 / fmaxf(((rtb_Vector_e3 * look2_iflf_binlca_16a
            (rtu_Nturb, rtb_Abs3, ((const float32 *)&(KxTCCR_r_TimpPerTgtToOpen
            [0])), ((const float32 *)&(KyTCCR_r_TimpPerTgtToOpen[0])), ((const
            float32 *)&(KtTCCR_r_TimpPerTgtToOpen[0])),
             TCCR_ac_ConstP.Vector_maxIndex, 5U)) * rtb_Abs3) - rtb_Abs1_k, 0.5F);
    }
    else if (rtb_MinMax3 > 0.0F)
    {
        /* Switch: '<S118>/Switch2' incorporates:
         *  Constant: '<S118>/MAXFLOAT'
         *  Switch: '<S118>/Switch1'
         */
        rtb_Abs1_k = 3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S118>/Switch1' incorporates:
         *  Constant: '<S118>/Constant Value4'
         *  Switch: '<S118>/Switch2'
         *  Switch: '<S118>/Switch3'
         */
        rtb_Abs1_k = 0.0F;
    }

    /* End of Switch: '<S118>/Switch1' */
    /* End of Outputs for SubSystem: '<S90>/Protected Division' */

    /* MinMax: '<S90>/MinMax6' incorporates:
     *  Constant: '<S90>/Constant Value1'
     *  Constant: '<S90>/Constant Value7'
     *  Product: '<S90>/Product1'
     *  Sum: '<S90>/Sum1'
     *  Sum: '<S90>/Sum2'
     *  UnitDelay: '<S90>/Unit Delay12'
     */
    localDW->UnitDelay12_DSTATE = fminf(((1.0F - rtu_RampFactorInit) *
        rtb_Abs1_k) + rtu_RampFactorInit, 1.0F);

    /* Gain: '<S119>/Gain' incorporates:
     *  UnitDelay: '<S90>/Unit Delay12'
     */
    *rty_OpeningRampFactor = localDW->UnitDelay12_DSTATE;

    /* Gain: '<S120>/Gain' */
    *rty_OpenRFStckRatio = rtb_Vector_e3;

    /* SignalConversion generated from: '<S90>/RampFactorLU' incorporates:
     *  Constant: '<S113>/Calib'
     */
    *rty_RampFactorLU = KeTCCR_r_LCCOpeningRmpLU;

    /* SignalConversion generated from: '<S90>/RampFactorLD' incorporates:
     *  Constant: '<S114>/Calib'
     */
    *rty_RampFactorLD = KeTCCR_r_LCCOpeningRmpLD;

    /* SignalConversion generated from: '<S90>/LCCSt' incorporates:
     *  Constant: '<S108>/Constant'
     */
    *rty_LCCSt = CeHCCR_e_ClActuated;

    /* SignalConversion generated from: '<S90>/LCCMngSt' incorporates:
     *  Constant: '<S109>/Constant'
     */
    *rty_LCCMngSt = CeTCCR_e_LCCOpening;
}

#endif

/* Output and update for function-call system: '<S42>/Locked' */
#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static FUNC(void, TCCR_CODE_LOCAL) TCCR_ac_Locked(P2VAR(float32, AUTOMATIC,
    TCCR_VAR_INIT) rty_LockedRampFactor, P2VAR(float32, AUTOMATIC, TCCR_VAR_INIT)
    rty_LockedRampFactorLU, P2VAR(float32, AUTOMATIC, TCCR_VAR_INIT)
    rty_LockedRampFactorLD, P2VAR(TeHCCR_e_ClutchStatus, AUTOMATIC,
    TCCR_VAR_INIT) rty_LCCSt, P2VAR(boolean, AUTOMATIC, TCCR_VAR_INIT)
    rty_OpenRFStck, P2VAR(float32, AUTOMATIC, TCCR_VAR_INIT) rty_OpenRFStckRatio,
    P2VAR(TeTCCR_e_LCCStatus, AUTOMATIC, TCCR_VAR_INIT) rty_LCCMngSt)
{
    /* SignalConversion generated from: '<S89>/LockedRampFactor' incorporates:
     *  Constant: '<S89>/Constant Value5'
     */
    *rty_LockedRampFactor = 0.0F;

    /* SignalConversion generated from: '<S89>/LockedRampFactorLU' incorporates:
     *  Constant: '<S89>/Constant Value1'
     */
    *rty_LockedRampFactorLU = 0.0F;

    /* SignalConversion generated from: '<S89>/LockedRampFactorLD' incorporates:
     *  Constant: '<S89>/Constant Value2'
     */
    *rty_LockedRampFactorLD = -999.0F;

    /* SignalConversion generated from: '<S89>/LCCSt' incorporates:
     *  Constant: '<S104>/Constant'
     */
    *rty_LCCSt = CeHCCR_e_ClLocked;

    /* SignalConversion generated from: '<S89>/OpenRFStck' incorporates:
     *  Constant: '<S89>/Constant Value3'
     */
    *rty_OpenRFStck = false;

    /* SignalConversion generated from: '<S89>/OpenRFStckRatio' incorporates:
     *  Constant: '<S89>/Constant Value4'
     */
    *rty_OpenRFStckRatio = 0.0F;

    /* SignalConversion generated from: '<S89>/LCCMngSt' incorporates:
     *  Constant: '<S105>/Constant'
     */
    *rty_LCCMngSt = CeTCCR_e_LCCLocked;
}

#endif

/*
 * Output and update for action system:
 *    '<S45>/BASE'
 *    '<S45>/DRIVE2COAST'
 */
#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static FUNC(void, TCCR_CODE_LOCAL) TCCR_ac_BASE(VAR(float32, AUTOMATIC)
    rtu_TIMP_IN, VAR(float32, AUTOMATIC) rtu_TR_IN, VAR(float32, AUTOMATIC)
    rtu_SR_IN, P2VAR(float32, AUTOMATIC, TCCR_VAR_INIT) rty_FTC_OUTPUTS, P2VAR
    (float32, AUTOMATIC, TCCR_VAR_INIT) rty_FTC_OUTPUTS_a, P2VAR(float32,
    AUTOMATIC, TCCR_VAR_INIT) rty_FTC_OUTPUTS_b)
{
    /* Inport: '<S168>/SR_IN' */
    *rty_FTC_OUTPUTS_b = rtu_SR_IN;

    /* Inport: '<S168>/TIMP_IN' */
    *rty_FTC_OUTPUTS = rtu_TIMP_IN;

    /* Inport: '<S168>/TR_IN' */
    *rty_FTC_OUTPUTS_a = rtu_TR_IN;
}

#endif

/*
 * Output and update for atomic system:
 *    '<S179>/HSCL_FTC_TturbTimp'
 *    '<S248>/HSCL_FTC_TturbTimp'
 *    '<S248>/HSCL_FTC_TturbTimp1'
 *    '<S277>/HSCL_FTC_TturbTimp'
 *    '<S278>/HSCL_FTC_TturbTimp'
 */
#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

static FUNC(void, TCCR_CODE_LOCAL) TCCR_ac_HSCL_FTC_TturbTimp(VAR(float32,
    AUTOMATIC) rtu_Nturb, VAR(float32, AUTOMATIC) rtu_Ni, VAR(boolean, AUTOMATIC)
    rtu_NC2SlipSpdFailing, P2VAR(B_HSCL_FTC_TturbTimp_TCCR_ac_T, AUTOMATIC,
    TCCR_VAR_INIT) localB)
{
    float32 rtb_Switch1_dav;

    /* Outputs for Atomic SubSystem: '<S191>/Protected Division2' */
    /* Switch: '<S205>/Switch1' incorporates:
     *  Constant: '<S205>/Constant Value'
     *  Constant: '<S205>/Constant Value1'
     *  Constant: '<S205>/Constant Value2'
     *  Constant: '<S205>/Constant Value3'
     *  Logic: '<S205>/AND'
     *  RelationalOperator: '<S205>/Greater Than or Equal '
     *  RelationalOperator: '<S205>/Greater Than or Equal 1'
     *  RelationalOperator: '<S205>/Not Equal'
     *  RelationalOperator: '<S205>/Not Equal1'
     *  Switch: '<S205>/Switch2'
     *  Switch: '<S205>/Switch3'
     */
    if ((rtu_Nturb != 0.0F) && (rtu_Ni != 0.0F))
    {
        /* Switch: '<S205>/Switch1' incorporates:
         *  Product: '<S205>/Division'
         */
        localB->Switch1 = rtu_Nturb / rtu_Ni;
    }
    else if (rtu_Nturb > 0.0F)
    {
        /* Switch: '<S205>/Switch2' incorporates:
         *  Constant: '<S205>/MAXFLOAT'
         *  Switch: '<S205>/Switch1'
         */
        localB->Switch1 = 3.402823466E+38F;
    }
    else if (rtu_Nturb < 0.0F)
    {
        /* Switch: '<S205>/Switch3' incorporates:
         *  Constant: '<S205>/MINFLOAT'
         *  Switch: '<S205>/Switch1'
         *  Switch: '<S205>/Switch2'
         */
        localB->Switch1 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S205>/Switch1' incorporates:
         *  Constant: '<S205>/Constant Value4'
         *  Switch: '<S205>/Switch2'
         *  Switch: '<S205>/Switch3'
         */
        localB->Switch1 = 0.0F;
    }

    /* End of Switch: '<S205>/Switch1' */
    /* End of Outputs for SubSystem: '<S191>/Protected Division2' */

    /* Lookup_n-D: '<S200>/Vector' incorporates:
     *  Switch: '<S205>/Switch1'
     */
    localB->Vector_c = look1_iflf_binlca_16a(localB->Switch1,
        (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
        (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

    /* Switch: '<S191>/Switch1' */
    if (rtu_NC2SlipSpdFailing)
    {
        /* Switch: '<S191>/Switch1' incorporates:
         *  Constant: '<S191>/Constant Value5'
         */
        rtb_Switch1_dav = 0.0F;
    }
    else
    {
        /* Switch: '<S191>/Switch1' incorporates:
         *  Sum: '<S191>/Sum1'
         */
        rtb_Switch1_dav = rtu_Ni - rtu_Nturb;
    }

    /* End of Switch: '<S191>/Switch1' */

    /* Sum: '<S191>/Sum2' incorporates:
     *  Lookup_n-D: '<S201>/Vector'
     *  Lookup_n-D: '<S202>/Vector'
     *  Lookup_n-D: '<S203>/Vector'
     *  Product: '<S191>/Product'
     *  Product: '<S191>/Product1'
     */
    localB->Sum2 = (((look1_iflf_binlca_16a(rtu_Nturb,
                       (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsA_KxHSCR_r_TCC_TturbFromNC2_CoeffsA
                        ()),
                       (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsA_KtHSCR_r_TCC_TturbFromNC2_CoeffsA
                        ()), 21U) * rtb_Switch1_dav) * rtb_Switch1_dav) +
                    (rtb_Switch1_dav * look1_iflf_binlca_16a(rtu_Nturb,
                      (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsB_KxHSCR_r_TCC_TturbFromNC2_CoeffsB
                       ()),
                      (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsB_KtHSCR_r_TCC_TturbFromNC2_CoeffsB
                       ()), 21U))) + look1_iflf_binlca_16a(rtu_Nturb,
        (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsC_KxHSCR_r_TCC_TturbFromNC2_CoeffsC
         ()),
        (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsC_KtHSCR_r_TCC_TturbFromNC2_CoeffsC
         ()), 3U);

    /* Outputs for Atomic SubSystem: '<S191>/Protected Division1' */
    /* Switch: '<S204>/Switch1' incorporates:
     *  Constant: '<S204>/Constant Value'
     *  Constant: '<S204>/Constant Value1'
     *  Constant: '<S204>/Constant Value2'
     *  Constant: '<S204>/Constant Value3'
     *  Logic: '<S204>/AND'
     *  RelationalOperator: '<S204>/Greater Than or Equal '
     *  RelationalOperator: '<S204>/Greater Than or Equal 1'
     *  RelationalOperator: '<S204>/Not Equal'
     *  RelationalOperator: '<S204>/Not Equal1'
     *  Switch: '<S204>/Switch2'
     *  Switch: '<S204>/Switch3'
     */
    if ((localB->Sum2 != 0.0F) && (localB->Vector_c != 0.0F))
    {
        /* Switch: '<S204>/Switch1' incorporates:
         *  Product: '<S204>/Division'
         */
        localB->Switch1_l = localB->Sum2 / localB->Vector_c;
    }
    else if (localB->Sum2 > 0.0F)
    {
        /* Switch: '<S204>/Switch2' incorporates:
         *  Constant: '<S204>/MAXFLOAT'
         *  Switch: '<S204>/Switch1'
         */
        localB->Switch1_l = 3.402823466E+38F;
    }
    else if (localB->Sum2 < 0.0F)
    {
        /* Switch: '<S204>/Switch3' incorporates:
         *  Constant: '<S204>/MINFLOAT'
         *  Switch: '<S204>/Switch1'
         *  Switch: '<S204>/Switch2'
         */
        localB->Switch1_l = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S204>/Switch1' incorporates:
         *  Constant: '<S204>/Constant Value4'
         *  Switch: '<S204>/Switch2'
         *  Switch: '<S204>/Switch3'
         */
        localB->Switch1_l = 0.0F;
    }

    /* End of Switch: '<S204>/Switch1' */
    /* End of Outputs for SubSystem: '<S191>/Protected Division1' */
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

FUNC(void, TCCR_CODE) TCCR_MedTEB(void) /* Explicit Task: MedTEB */
{

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    TeTRGR_e_TransRangeState tmpRead;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    float32 tmpRead_0[9];

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    TeOHSR_e_VLE_DriveStat tmpRead_1;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    boolean tmpRead_2[4];

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    TeOHSR_e_OptGear_SG tmpRead_3;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    sint16 rtb_Switch_dq;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    boolean rtb_Comparison3_lu;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    boolean rtb_Switch2_jp;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    boolean rtb_VeTCCR_b_PresCntrlRel;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    float32 rtb_TmpSignalConversionAtVeTTQR_M_LoadTo;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    float32 rtb_Product1_pc;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    float32 rtb_Switch1_os;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    boolean rtb_Comparison2_e;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    boolean rtb_UnitDelay_cj;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    boolean rtb_Logical2_l;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    float32 rtb_Switch4;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    float32 rtb_Sum1_gk;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    float32 rtb_Switch1_kr[4];

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    float32 rtb_UnitDelay_jo;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    float32 rtb_Switch2_pq;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    float32 rtb_Switch_i;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    boolean rtb_AND_fi;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    float32 rtb_Switch_b;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    float32 rtb_Sum1_oz;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    float32 rtb_Gain_d;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    float32 rtb_Add;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    float32 rtb_TmpSignalConversionAtVeOHSR_n_Idle_p;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    float32 rtb_Product1_i;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    float32 rtb_Vector_cm;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTRNR_e_Targ_i;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTRNR_e_Actu_c;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    TeHSER_e_SteadyStates rtb_TmpSignalConversionAtVeHSER_e_HTDR_S;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    TeHSER_e_RngSt rtb_TmpSignalConversionAtVeHSER_e_RngS_p;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    sint32 i;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    float32 rtb_Switch_g_idx_0;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    boolean UnitDelay_DSTATE_bt_tmp;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblTCC

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* Inport: '<Root>/VeMSPR_dn_MtrB_Accel' */
    (void)Rte_Read_VeMSPR_dn_MtrB_Accel_Value(&rtb_Sum1_oz);

    /* Inport: '<Root>/VeTISR_dn_InputAcceltn' */
    (void)Rte_Read_VeTISR_dn_InputAcceltn_Value(&rtb_Product1_pc);

    /* Inport: '<Root>/VeMSPR_n_MtrB_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value(&rtb_Switch4);

    /* Inport: '<Root>/VaCSLR_b_NCx_SlipSpdFailing' */
    (void)Rte_Read_VaCSLR_b_NCx_SlipSpdFailing_Value(tmpRead_2);

    /* Inport: '<Root>/VaOSMR_n_NTurb_FromNo' */
    (void)Rte_Read_VaOSMR_n_NTurb_FromNo_Value(tmpRead_0);

    /* Inport: '<Root>/VeTISR_n_InputSpeed' */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value(&rtb_Sum1_gk);

    /* Outputs for Function Call SubSystem: '<Root>/TCCR_FUNC_MedTEB' */
    /* SignalConversion generated from: '<S1>/VeVSDR_n_NTurb' incorporates:
     *  Inport: '<Root>/VeVSDR_n_NTurb'
     */
    (void)Rte_Read_VeVSDR_n_NTurb_Value
        (&TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo);

    /* SignalConversion generated from: '<S1>/VeTRNR_e_TargetGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_TargetGear'
     */
    (void)Rte_Read_VeTRNR_e_TargetGear_Value
        (&rtb_TmpSignalConversionAtVeTRNR_e_Targ_i);

    /* SignalConversion generated from: '<S1>/VeTTQR_M_LoadTorqFront_Cmnd' incorporates:
     *  Inport: '<Root>/VeTTQR_M_LoadTorqFront_Cmnd'
     */
    (void)Rte_Read_VeTTQR_M_LoadTorqFront_Cmnd_Value
        (&rtb_TmpSignalConversionAtVeTTQR_M_LoadTo);

    /* SignalConversion generated from: '<S1>/VeTRNR_e_ILEStat' incorporates:
     *  Inport: '<Root>/VeTRNR_e_ILEStatRaw'
     */
    (void)Rte_Read_VeTRNR_e_ILEStatRaw_Value(&TCCR_ac_B.VeTCCC_e_ClchStLCC);

    /* SignalConversion generated from: '<S1>/VeHSER_e_RngSt' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngSt'
     */
    (void)Rte_Read_VeHSER_e_RngSt_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_RngS_p);

    /* SignalConversion generated from: '<S1>/VeHSER_e_HTDR_State' incorporates:
     *  Inport: '<Root>/VeHSER_e_HTDR_State'
     */
    (void)Rte_Read_VeHSER_e_HTDR_State_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_HTDR_S);

    /* SignalConversion generated from: '<S1>/VeOHSR_n_IdleSpdBlended' incorporates:
     *  Inport: '<Root>/VeOHSR_n_IdleSpdBlended'
     */
    (void)Rte_Read_VeOHSR_n_IdleSpdBlended_Value
        (&rtb_TmpSignalConversionAtVeOHSR_n_Idle_p);

    /* SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_ActualGear'
     */
    (void)Rte_Read_VeTRNR_e_ActualGear_Value
        (&rtb_TmpSignalConversionAtVeTRNR_e_Actu_c);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TCCC_Process_TC'
     */
    /* Switch: '<S4>/Switch4' incorporates:
     *  Constant: '<S9>/Calib'
     */
    if (HeTCCR_b_UseTISRNi)
    {
        /* Switch: '<S4>/Switch4' */
        rtb_Switch4 = rtb_Sum1_gk;
    }

    /* End of Switch: '<S4>/Switch4' */

    /* Sum: '<S11>/Sum1' incorporates:
     *  Constant: '<S17>/Calib'
     *  DataTypeConversion: '<S11>/Data Type Conversion'
     *  Selector: '<S11>/Selector'
     *  Selector: '<S11>/Selector1'
     *  SignalConversion: '<S4>/Signal Conversion'
     */
    rtb_Sum1_gk = TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo -
        tmpRead_0[KaTCCR_i_MapTCMGear2OptGear
        [(rtb_TmpSignalConversionAtVeTRNR_e_Targ_i)]];

    /* Outputs for Atomic SubSystem: '<S11>/Hysteresis' */
    /* Switch: '<S16>/Switch1' incorporates:
     *  Constant: '<S16>/Constant Value'
     *  Constant: '<S20>/Calib'
     *  Constant: '<S21>/Calib'
     *  RelationalOperator: '<S16>/Greater  Than'
     *  RelationalOperator: '<S16>/Greater  Than1'
     *  UnitDelay: '<S16>/Unit Delay'
     */
    if (rtb_Sum1_gk > KeTCCR_n_NTurbAsyncEngageRSP)
    {
        TCCR_ac_DW.UnitDelay_DSTATE_hi = true;
    }
    else
    {
        TCCR_ac_DW.UnitDelay_DSTATE_hi = ((rtb_Sum1_gk >=
            KeTCCR_n_NTurbAsyncEngageLSP) && (TCCR_ac_DW.UnitDelay_DSTATE_hi));
    }

    /* End of Switch: '<S16>/Switch1' */
    /* End of Outputs for SubSystem: '<S11>/Hysteresis' */

    /* Switch: '<S11>/Switch1' incorporates:
     *  Constant: '<S19>/Calib'
     *  Inport: '<Root>/VeTMMR_M_ClchTorqOncRaw'
     */
    if (HeTCCR_b_EnblClchRawTorqThr)
    {
        (void)Rte_Read_VeTMMR_M_ClchTorqOncRaw_Value(&rtb_Switch_b);

        /* RelationalOperator: '<S13>/Comparison3' incorporates:
         *  Constant: '<S18>/Calib'
         *  Inport: '<Root>/VeTMMR_M_ClchTorqOncRaw'
         *  RelationalOperator: '<S11>/Comparison3'
         */
        rtb_Comparison3_lu = (rtb_Switch_b >= KeTCCR_M_ClchTorqOncThrsh);
    }
    else
    {
        /* RelationalOperator: '<S13>/Comparison3' incorporates:
         *  Inport: '<Root>/VeTINR_b_PwrFlowStatus'
         */
        (void)Rte_Read_VeTINR_b_PwrFlowStatus_Value(&rtb_Comparison3_lu);
    }

    /* End of Switch: '<S11>/Switch1' */

    /* Switch: '<S13>/Switch2' incorporates:
     *  Constant: '<S35>/Calib'
     */
    if (HeTCCR_b_EnblRngStTrans)
    {
        /* Switch: '<S13>/Switch2' incorporates:
         *  Constant: '<S29>/Constant'
         *  Constant: '<S30>/Constant'
         *  Constant: '<S31>/Constant'
         *  Logic: '<S13>/Logical3'
         *  RelationalOperator: '<S13>/Comparison4'
         *  RelationalOperator: '<S13>/Comparison5'
         *  RelationalOperator: '<S13>/Comparison7'
         */
        rtb_Switch2_jp = (((((uint32)rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) ==
                            CeHSER_e_Neut_State) || (((uint32)
                             rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) ==
                            CeHSER_e_NeutALL_State)) || (((uint32)
                            rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) ==
                           CeHSER_e_Neut_State_2));
    }
    else
    {
        /* Switch: '<S13>/Switch2' incorporates:
         *  Constant: '<S32>/Constant'
         *  Constant: '<S33>/Constant'
         *  Logic: '<S13>/Logical1'
         *  RelationalOperator: '<S13>/Comparison1'
         *  RelationalOperator: '<S13>/Comparison2'
         */
        rtb_Switch2_jp = ((((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Actu_c) ==
                           CeTRNR_e_Neutral) || (((uint32)
                            rtb_TmpSignalConversionAtVeTRNR_e_Actu_c) ==
                           CeTRNR_e_Park));
    }

    /* End of Switch: '<S13>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/TCCR_FUNC_MedTEB' */

    /* Inport: '<Root>/VeTINR_b_ILE_STO_Stat' */
    (void)Rte_Read_VeTINR_b_ILE_STO_Stat_Value(&rtb_Logical2_l);

    /* Outputs for Function Call SubSystem: '<Root>/TCCR_FUNC_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TCCC_Process_TC'
     */
    /* Logic: '<S13>/Logical4' incorporates:
     *  Constant: '<S28>/Constant'
     *  Constant: '<S7>/Calib'
     *  RelationalOperator: '<S13>/Comparison6'
     *  Selector: '<S4>/Selector'
     */
    rtb_VeTCCR_b_PresCntrlRel = ((((tmpRead_2[((sint32)HeTCCR_n_SlipSpdFailIdx)
        - 1]) || rtb_Logical2_l) || (((uint32)TCCR_ac_B.VeTCCC_e_ClchStLCC) ==
        CeHCCR_e_ClReleased)) || rtb_Switch2_jp);

    /* Outputs for Atomic SubSystem: '<S4>/TCCC_Timp_NiTgt' */
    /* Switch: '<S14>/Switch1' incorporates:
     *  Constant: '<S229>/Calib'
     */
    if (HeTCCR_b_EnblHTDRStateTrans)
    {
        /* UnitDelay: '<S332>/Unit Delay' incorporates:
         *  Constant: '<S228>/Calib'
         *  DataTypeConversion: '<S14>/Data Type Conversion'
         *  Selector: '<S14>/Selector'
         *  SignalConversion generated from: '<S1>/VeHSER_e_HTDR_State'
         */
        rtb_UnitDelay_cj = KaTCCR_b_HTDRLeadStNiTgtIdx
            [(rtb_TmpSignalConversionAtVeHSER_e_HTDR_S)];
    }
    else
    {
        /* UnitDelay: '<S332>/Unit Delay' incorporates:
         *  Constant: '<S224>/Constant'
         *  Constant: '<S225>/Constant'
         *  Logic: '<S14>/Logical3'
         *  RelationalOperator: '<S14>/Comparison1'
         *  RelationalOperator: '<S14>/Comparison2'
         */
        rtb_UnitDelay_cj = ((((uint32)rtb_TmpSignalConversionAtVeTRNR_e_Actu_c) ==
                             CeTRNR_e_Neutral) || (((uint32)
                              rtb_TmpSignalConversionAtVeTRNR_e_Actu_c) ==
                             CeTRNR_e_Park));
    }

    /* End of Switch: '<S14>/Switch1' */

    /* If: '<S14>/If' */
    if (rtb_UnitDelay_cj)
    {
        /* Outputs for IfAction SubSystem: '<S14>/Neutral_Mode2' incorporates:
         *  ActionPort: '<S231>/Action Port'
         */
        /* Switch: '<S231>/Switch1' incorporates:
         *  Constant: '<S237>/Constant'
         *  Constant: '<S238>/Constant'
         *  Constant: '<S239>/Constant'
         *  Constant: '<S240>/Constant'
         *  Constant: '<S241>/Constant'
         *  Constant: '<S242>/Constant'
         *  Constant: '<S243>/Calib'
         *  Logic: '<S231>/Logical1'
         *  Logic: '<S231>/Logical2'
         *  RelationalOperator: '<S231>/Comparison1'
         *  RelationalOperator: '<S231>/Comparison2'
         *  RelationalOperator: '<S231>/Comparison3'
         *  RelationalOperator: '<S231>/Comparison4'
         *  RelationalOperator: '<S231>/Comparison5'
         *  RelationalOperator: '<S231>/Comparison6'
         */
        if (HeTCCR_b_EnblRngStTrans)
        {
            rtb_Comparison2_e = ((((((uint32)
                rtb_TmpSignalConversionAtVeHSER_e_RngS_p) == CeHSER_e_NeutToM1) ||
                                   (((uint32)
                rtb_TmpSignalConversionAtVeHSER_e_RngS_p) == CeHSER_e_NeutToM3))
                                  || (((uint32)
                                    rtb_TmpSignalConversionAtVeHSER_e_RngS_p) ==
                                   CeHSER_e_M2ToG2)) || (((uint32)
                                   rtb_TmpSignalConversionAtVeHSER_e_RngS_p) ==
                                  CeHSER_e_M2ToG4));
        }
        else
        {
            rtb_Comparison2_e = ((((uint32)
                                   rtb_TmpSignalConversionAtVeTRNR_e_Targ_i) !=
                                  CeTRNR_e_Neutral) || (((uint32)
                                   rtb_TmpSignalConversionAtVeTRNR_e_Targ_i) !=
                                  CeTRNR_e_Park));
        }

        /* End of Switch: '<S231>/Switch1' */

        /* Outputs for IfAction SubSystem: '<S231>/TCCC_NeutStdyState' incorporates:
         *  ActionPort: '<S244>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S231>/TCCC_NeutToM1orM3' incorporates:
         *  ActionPort: '<S245>/Action Port'
         */
        /* If: '<S231>/If' incorporates:
         *  Inport: '<S245>/ClchOncActive'
         *  Logic: '<S11>/Logical'
         *  Merge: '<S14>/Merge1'
         *  SignalConversion generated from: '<S244>/UseTISR'
         *  UnitDelay: '<S16>/Unit Delay'
         */
        rtb_Comparison3_lu = (rtb_Comparison2_e && (rtb_Comparison3_lu &&
                               (TCCR_ac_DW.UnitDelay_DSTATE_hi)));

        /* End of Outputs for SubSystem: '<S231>/TCCC_NeutToM1orM3' */
        /* End of Outputs for SubSystem: '<S231>/TCCC_NeutStdyState' */
        /* End of Outputs for SubSystem: '<S14>/Neutral_Mode2' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S14>/Gear2_Gear4' incorporates:
         *  ActionPort: '<S226>/Action Port'
         */
        /* Merge: '<S14>/Merge1' incorporates:
         *  Constant: '<S226>/TRUE Constant'
         *  SignalConversion generated from: '<S226>/UseTISR'
         */
        rtb_Comparison3_lu = true;

        /* End of Outputs for SubSystem: '<S14>/Gear2_Gear4' */
    }

    /* End of If: '<S14>/If' */

    /* Outputs for Atomic SubSystem: '<S14>/EdgeRising2' */
    /* Logic: '<S223>/AND' incorporates:
     *  Logic: '<S223>/OR1'
     *  UnitDelay: '<S223>/Unit Delay'
     */
    rtb_AND_fi = !TCCR_ac_DW.UnitDelay_DSTATE_lo;

    /* Update for UnitDelay: '<S223>/Unit Delay' incorporates:
     *  Constant: '<S14>/TRUE Constant'
     */
    TCCR_ac_DW.UnitDelay_DSTATE_lo = true;

    /* End of Outputs for SubSystem: '<S14>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S14>/EdgeFalling' */
    /* Switch: '<S235>/Switch1' incorporates:
     *  Constant: '<S221>/FALSE Constant'
     *  UnitDelay: '<S235>/Unit Delay'
     */
    if (rtb_AND_fi)
    {
        rtb_Logical2_l = false;
    }
    else
    {
        rtb_Logical2_l = TCCR_ac_DW.UnitDelay_DSTATE_bt;
    }

    /* End of Switch: '<S235>/Switch1' */

    /* Logic: '<S233>/Logical2' incorporates:
     *  Switch: '<S233>/Switch3'
     *  Switch: '<S235>/Switch3'
     */
    UnitDelay_DSTATE_bt_tmp = !rtb_AND_fi;

    /* Switch: '<S235>/Switch3' incorporates:
     *  UnitDelay: '<S235>/Unit Delay'
     */
    TCCR_ac_DW.UnitDelay_DSTATE_bt = (UnitDelay_DSTATE_bt_tmp &&
        rtb_Comparison3_lu);

    /* End of Outputs for SubSystem: '<S14>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S14>/EdgeRising' */
    /* Switch: '<S236>/Switch1' */
    if (rtb_AND_fi)
    {
        /* RelationalOperator: '<S72>/Comparison2' incorporates:
         *  Constant: '<S222>/TRUE Constant1'
         */
        rtb_Comparison2_e = true;
    }
    else
    {
        /* RelationalOperator: '<S72>/Comparison2' incorporates:
         *  UnitDelay: '<S236>/Unit Delay'
         */
        rtb_Comparison2_e = TCCR_ac_DW.UnitDelay_DSTATE_jz;
    }

    /* End of Switch: '<S236>/Switch1' */

    /* Switch: '<S236>/Switch3' incorporates:
     *  UnitDelay: '<S236>/Unit Delay'
     */
    TCCR_ac_DW.UnitDelay_DSTATE_jz = (rtb_AND_fi || rtb_Comparison3_lu);

    /* Outputs for Atomic SubSystem: '<S14>/EdgeFalling' */
    /* RelationalOperator: '<S72>/Comparison2' incorporates:
     *  Logic: '<S14>/Logical1'
     *  Logic: '<S221>/AND'
     *  Logic: '<S221>/OR1'
     *  Logic: '<S222>/AND'
     *  Logic: '<S222>/OR1'
     */
    rtb_Comparison2_e = ((rtb_Comparison3_lu && (!rtb_Comparison2_e)) ||
                         ((!rtb_Comparison3_lu) && rtb_Logical2_l));

    /* End of Outputs for SubSystem: '<S14>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S14>/EdgeRising' */

    /* Logic: '<S14>/Logical2' */
    rtb_Logical2_l = !rtb_UnitDelay_cj;

    /* Switch: '<S14>/Switch' */
    if (rtb_Comparison3_lu)
    {
        /* Switch: '<S14>/Switch' */
        rtb_Switch_b = rtb_Switch4;
    }
    else
    {
        /* Switch: '<S14>/Switch' */
        rtb_Switch_b = TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo;
    }

    /* End of Switch: '<S14>/Switch' */

    /* Switch: '<S233>/Switch2' incorporates:
     *  Switch: '<S233>/Switch3'
     */
    if (rtb_Comparison2_e)
    {
        /* Switch: '<S234>/Switch1' */
        if (rtb_AND_fi)
        {
            /* UnitDelay: '<S233>/Unit Delay' incorporates:
             *  Switch: '<S234>/Switch1'
             */
            TCCR_ac_DW.UnitDelay_DSTATE_b0 = rtb_Switch_b;
        }
        else
        {
            /* UnitDelay: '<S233>/Unit Delay' incorporates:
             *  Switch: '<S234>/Switch1'
             *  UnitDelay: '<S234>/Unit Delay'
             */
            TCCR_ac_DW.UnitDelay_DSTATE_b0 = TCCR_ac_DW.UnitDelay_DSTATE_oa;
        }

        /* End of Switch: '<S234>/Switch1' */

        /* Switch: '<S233>/Switch1' incorporates:
         *  Constant: '<S233>/Constant Value4'
         *  UnitDelay: '<S233>/Unit Delay3'
         */
        TCCR_ac_DW.UnitDelay3_DSTATE_d = 0.0F;
    }
    else
    {
        /* MinMax: '<S233>/Maximum' incorporates:
         *  Constant: '<S227>/Calib'
         *  Constant: '<S230>/Calib'
         */
        rtb_Sum1_gk = fmaxf(HeTCCR_t_MedTEB_dT, KeTCCR_t_TargetSpdBlndTime);

        /* Outputs for Atomic SubSystem: '<S233>/Protected Division' */
        /* Switch: '<S246>/Switch1' incorporates:
         *  Constant: '<S227>/Calib'
         *  Constant: '<S246>/Constant Value'
         *  Constant: '<S246>/Constant Value1'
         *  Constant: '<S246>/Constant Value2'
         *  Constant: '<S246>/Constant Value3'
         *  Logic: '<S246>/AND'
         *  RelationalOperator: '<S246>/Greater Than or Equal '
         *  RelationalOperator: '<S246>/Greater Than or Equal 1'
         *  RelationalOperator: '<S246>/Not Equal'
         *  RelationalOperator: '<S246>/Not Equal1'
         *  Switch: '<S246>/Switch2'
         *  Switch: '<S246>/Switch3'
         */
        if ((HeTCCR_t_MedTEB_dT != 0.0F) && (rtb_Sum1_gk != 0.0F))
        {
            /* Switch: '<S246>/Switch1' incorporates:
             *  Product: '<S246>/Division'
             */
            rtb_Sum1_gk = HeTCCR_t_MedTEB_dT / rtb_Sum1_gk;
        }
        else if (HeTCCR_t_MedTEB_dT > 0.0F)
        {
            /* Switch: '<S246>/Switch2' incorporates:
             *  Constant: '<S246>/MAXFLOAT'
             *  Switch: '<S246>/Switch1'
             */
            rtb_Sum1_gk = 3.402823466E+38F;
        }
        else if (HeTCCR_t_MedTEB_dT < 0.0F)
        {
            /* Switch: '<S246>/Switch3' incorporates:
             *  Constant: '<S246>/MINFLOAT'
             *  Switch: '<S246>/Switch1'
             *  Switch: '<S246>/Switch2'
             */
            rtb_Sum1_gk = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S246>/Switch1' incorporates:
             *  Constant: '<S246>/Constant Value4'
             *  Switch: '<S246>/Switch2'
             *  Switch: '<S246>/Switch3'
             */
            rtb_Sum1_gk = 0.0F;
        }

        /* End of Switch: '<S246>/Switch1' */
        /* End of Outputs for SubSystem: '<S233>/Protected Division' */

        /* Switch: '<S233>/Switch1' incorporates:
         *  Constant: '<S233>/Constant Value2'
         *  Constant: '<S233>/Constant Value3'
         *  Logic: '<S233>/Logical'
         *  Logic: '<S233>/Logical2'
         *  MinMax: '<S233>/MinMax'
         *  Sum: '<S233>/Summation1'
         *  UnitDelay: '<S233>/Unit Delay1'
         *  UnitDelay: '<S233>/Unit Delay3'
         */
        if ((!TCCR_ac_DW.UnitDelay1_DSTATE_om) || (!UnitDelay_DSTATE_bt_tmp))
        {
            TCCR_ac_DW.UnitDelay3_DSTATE_d = 1.0F;
        }

        TCCR_ac_DW.UnitDelay3_DSTATE_d = fminf(TCCR_ac_DW.UnitDelay3_DSTATE_d +
            rtb_Sum1_gk, 1.0F);
    }

    /* End of Switch: '<S233>/Switch2' */

    /* Sum: '<S233>/Summation' incorporates:
     *  Constant: '<S233>/Constant Value'
     *  Product: '<S233>/Multiplication'
     *  Product: '<S233>/Multiplication3'
     *  Sum: '<S233>/Subtraction'
     *  UnitDelay: '<S233>/Unit Delay'
     *  UnitDelay: '<S233>/Unit Delay3'
     */
    VeTCCR_n_NiTgt4HTDR = ((1.0F - TCCR_ac_DW.UnitDelay3_DSTATE_d) *
                           TCCR_ac_DW.UnitDelay_DSTATE_b0) +
        (TCCR_ac_DW.UnitDelay3_DSTATE_d * rtb_Switch_b);

    /* Switch: '<S234>/Switch3' incorporates:
     *  UnitDelay: '<S234>/Unit Delay'
     */
    if (rtb_AND_fi)
    {
        TCCR_ac_DW.UnitDelay_DSTATE_oa = rtb_Switch_b;
    }
    else
    {
        TCCR_ac_DW.UnitDelay_DSTATE_oa = VeTCCR_n_NiTgt4HTDR;
    }

    /* End of Switch: '<S234>/Switch3' */

    /* Update for UnitDelay: '<S233>/Unit Delay1' incorporates:
     *  Constant: '<S233>/TRUE Constant'
     */
    TCCR_ac_DW.UnitDelay1_DSTATE_om = true;

    /* End of Outputs for SubSystem: '<S4>/TCCC_Timp_NiTgt' */

    /* Outputs for Atomic SubSystem: '<S179>/Protected Division' */
    /* Switch: '<S196>/Switch1' incorporates:
     *  Constant: '<S196>/Constant Value'
     *  Constant: '<S196>/Constant Value1'
     *  Constant: '<S196>/Constant Value2'
     *  Constant: '<S196>/Constant Value3'
     *  Logic: '<S196>/AND'
     *  RelationalOperator: '<S196>/Greater Than or Equal '
     *  RelationalOperator: '<S196>/Greater Than or Equal 1'
     *  RelationalOperator: '<S196>/Not Equal'
     *  RelationalOperator: '<S196>/Not Equal1'
     *  Switch: '<S196>/Switch2'
     *  Switch: '<S196>/Switch3'
     */
    if ((TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo != 0.0F) &&
            (VeTCCR_n_NiTgt4HTDR != 0.0F))
    {
        /* Switch: '<S196>/Switch1' incorporates:
         *  Product: '<S196>/Division'
         */
        rtb_Switch_b = TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo /
            VeTCCR_n_NiTgt4HTDR;
    }
    else if (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo > 0.0F)
    {
        /* Switch: '<S196>/Switch2' incorporates:
         *  Constant: '<S196>/MAXFLOAT'
         *  Switch: '<S196>/Switch1'
         */
        rtb_Switch_b = 3.402823466E+38F;
    }
    else if (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo < 0.0F)
    {
        /* Switch: '<S196>/Switch3' incorporates:
         *  Constant: '<S196>/MINFLOAT'
         *  Switch: '<S196>/Switch1'
         *  Switch: '<S196>/Switch2'
         */
        rtb_Switch_b = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S196>/Switch1' incorporates:
         *  Constant: '<S196>/Constant Value4'
         *  Switch: '<S196>/Switch2'
         *  Switch: '<S196>/Switch3'
         */
        rtb_Switch_b = 0.0F;
    }

    /* End of Switch: '<S196>/Switch1' */
    /* End of Outputs for SubSystem: '<S179>/Protected Division' */

    /* RelationalOperator: '<S179>/Relational Operator' incorporates:
     *  Constant: '<S193>/Calib'
     */
    rtb_UnitDelay_cj = (rtb_Switch_b <= KeTCCR_k_Drive2CoastSRCond);

    /* Outputs for Atomic SubSystem: '<S179>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S198>/EdgeRising' */
    /* Logic: '<S220>/AND' incorporates:
     *  Logic: '<S220>/OR1'
     *  UnitDelay: '<S220>/Unit Delay'
     */
    rtb_Comparison3_lu = (rtb_UnitDelay_cj && (!TCCR_ac_DW.UnitDelay_DSTATE_pa));

    /* Update for UnitDelay: '<S220>/Unit Delay' */
    TCCR_ac_DW.UnitDelay_DSTATE_pa = rtb_UnitDelay_cj;

    /* End of Outputs for SubSystem: '<S198>/EdgeRising' */

    /* Switch: '<S198>/Switch1' incorporates:
     *  Constant: '<S194>/Calib'
     *  Constant: '<S198>/Constant Value'
     *  Constant: '<S198>/Constant Value1'
     *  Logic: '<S198>/OR'
     *  Logic: '<S198>/OR1'
     *  MinMax: '<S198>/Minimum'
     *  Sum: '<S198>/Summation'
     *  UnitDelay: '<S198>/Unit Delay'
     */
    if ((!rtb_UnitDelay_cj) || rtb_Comparison3_lu)
    {
        TCCR_ac_DW.UnitDelay_DSTATE_py = 0U;
    }
    else if (KeTCCR_Cnt_Drive2CoastHold < ((uint16)(((uint32)
                TCCR_ac_DW.UnitDelay_DSTATE_py) + 1U)))
    {
        /* MinMax: '<S198>/Minimum' incorporates:
         *  Constant: '<S194>/Calib'
         */
        TCCR_ac_DW.UnitDelay_DSTATE_py = KeTCCR_Cnt_Drive2CoastHold;
    }
    else
    {
        /* MinMax: '<S198>/Minimum' incorporates:
         *  Constant: '<S198>/Constant Value'
         *  Sum: '<S198>/Summation'
         *  UnitDelay: '<S198>/Unit Delay'
         */
        TCCR_ac_DW.UnitDelay_DSTATE_py = (uint16)(((uint32)
            TCCR_ac_DW.UnitDelay_DSTATE_py) + 1U);
    }

    /* End of Switch: '<S198>/Switch1' */

    /* Logic: '<S198>/AND' incorporates:
     *  Constant: '<S194>/Calib'
     *  RelationalOperator: '<S198>/Greater  Than'
     *  UnitDelay: '<S198>/Unit Delay'
     */
    rtb_UnitDelay_cj = (rtb_UnitDelay_cj && (TCCR_ac_DW.UnitDelay_DSTATE_py >=
                         KeTCCR_Cnt_Drive2CoastHold));

    /* End of Outputs for SubSystem: '<S179>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S179>/Turn Off Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S197>/EdgeFalling' */
    /* Logic: '<S219>/AND' incorporates:
     *  Logic: '<S219>/OR1'
     *  UnitDelay: '<S219>/Unit Delay'
     */
    rtb_Comparison3_lu = ((!rtb_UnitDelay_cj) && (TCCR_ac_DW.UnitDelay_DSTATE_ch));

    /* Update for UnitDelay: '<S219>/Unit Delay' */
    TCCR_ac_DW.UnitDelay_DSTATE_ch = rtb_UnitDelay_cj;

    /* End of Outputs for SubSystem: '<S197>/EdgeFalling' */

    /* Switch: '<S197>/Switch' incorporates:
     *  Constant: '<S194>/Calib'
     *  Sum: '<S197>/Summation'
     *  UnitDelay: '<S197>/Unit Delay'
     */
    if (rtb_Comparison3_lu)
    {
        TCCR_ac_DW.UnitDelay_DSTATE_lt = KeTCCR_Cnt_Drive2CoastHold;
    }
    else
    {
        /* Sum: '<S197>/Summation' incorporates:
         *  Constant: '<S197>/Constant Value'
         *  UnitDelay: '<S197>/Unit Delay'
         */
        i = ((sint32)TCCR_ac_DW.UnitDelay_DSTATE_lt) - 1;
        if ((((sint32)TCCR_ac_DW.UnitDelay_DSTATE_lt) - 1) < 0)
        {
            i = 0;
        }

        TCCR_ac_DW.UnitDelay_DSTATE_lt = (uint16)i;
    }

    /* End of Switch: '<S197>/Switch' */

    /* Logic: '<S197>/AND' incorporates:
     *  Constant: '<S197>/Constant Value2'
     *  RelationalOperator: '<S197>/Greater  Than'
     *  UnitDelay: '<S197>/Unit Delay'
     */
    rtb_UnitDelay_cj = (rtb_UnitDelay_cj || (((sint32)
                          TCCR_ac_DW.UnitDelay_DSTATE_lt) > 0));

    /* End of Outputs for SubSystem: '<S179>/Turn Off Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S179>/EdgeBi1' */
    /* RelationalOperator: '<S190>/Not Equal' incorporates:
     *  UnitDelay: '<S190>/Unit Delay'
     */
    rtb_Comparison3_lu = (rtb_UnitDelay_cj != TCCR_ac_DW.UnitDelay_DSTATE_cw);

    /* Update for UnitDelay: '<S190>/Unit Delay' */
    TCCR_ac_DW.UnitDelay_DSTATE_cw = rtb_UnitDelay_cj;

    /* End of Outputs for SubSystem: '<S179>/EdgeBi1' */

    /* Switch: '<S189>/Switch2' incorporates:
     *  Switch: '<S189>/Switch3'
     *  UnitDelay: '<S179>/Unit Delay'
     *  UnitDelay: '<S189>/Unit Delay'
     */
    if (rtb_Comparison3_lu)
    {
        for (i = 0; i < 4; i++)
        {
            TCCR_ac_DW.UnitDelay_DSTATE_nh[i] = TCCR_ac_DW.UnitDelay_DSTATE_ew[i];
        }

        /* Switch: '<S189>/Switch1' incorporates:
         *  Constant: '<S189>/Constant Value4'
         *  UnitDelay: '<S179>/Unit Delay'
         *  UnitDelay: '<S189>/Unit Delay'
         *  UnitDelay: '<S189>/Unit Delay3'
         */
        TCCR_ac_DW.UnitDelay3_DSTATE_b = 0.0F;
    }
    else
    {
        /* MinMax: '<S189>/Maximum' incorporates:
         *  Constant: '<S174>/Calib'
         *  Constant: '<S195>/Calib'
         */
        rtb_Switch_b = fmaxf(HeTCCR_t_MedTEB_dT, KeTCCR_t_Drive2CoastTime);

        /* Outputs for Atomic SubSystem: '<S189>/Protected Division1' */
        /* Switch: '<S199>/Switch1' incorporates:
         *  Constant: '<S174>/Calib'
         *  Constant: '<S199>/Constant Value'
         *  Constant: '<S199>/Constant Value1'
         *  Constant: '<S199>/Constant Value2'
         *  Constant: '<S199>/Constant Value3'
         *  Logic: '<S199>/AND'
         *  RelationalOperator: '<S199>/Greater Than or Equal '
         *  RelationalOperator: '<S199>/Greater Than or Equal 1'
         *  RelationalOperator: '<S199>/Not Equal'
         *  RelationalOperator: '<S199>/Not Equal1'
         *  Switch: '<S199>/Switch2'
         *  Switch: '<S199>/Switch3'
         */
        if ((HeTCCR_t_MedTEB_dT != 0.0F) && (rtb_Switch_b != 0.0F))
        {
            /* Switch: '<S199>/Switch1' incorporates:
             *  Product: '<S199>/Division'
             */
            rtb_Switch_b = HeTCCR_t_MedTEB_dT / rtb_Switch_b;
        }
        else if (HeTCCR_t_MedTEB_dT > 0.0F)
        {
            /* Switch: '<S199>/Switch2' incorporates:
             *  Constant: '<S199>/MAXFLOAT'
             *  Switch: '<S199>/Switch1'
             */
            rtb_Switch_b = 3.402823466E+38F;
        }
        else if (HeTCCR_t_MedTEB_dT < 0.0F)
        {
            /* Switch: '<S199>/Switch3' incorporates:
             *  Constant: '<S199>/MINFLOAT'
             *  Switch: '<S199>/Switch1'
             *  Switch: '<S199>/Switch2'
             */
            rtb_Switch_b = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S199>/Switch1' incorporates:
             *  Constant: '<S199>/Constant Value4'
             *  Switch: '<S199>/Switch2'
             *  Switch: '<S199>/Switch3'
             */
            rtb_Switch_b = 0.0F;
        }

        /* End of Switch: '<S199>/Switch1' */
        /* End of Outputs for SubSystem: '<S189>/Protected Division1' */

        /* Switch: '<S189>/Switch1' incorporates:
         *  Constant: '<S189>/Constant Value2'
         *  Constant: '<S189>/Constant Value3'
         *  MinMax: '<S189>/MinMax'
         *  Sum: '<S189>/Summation1'
         *  UnitDelay: '<S189>/Unit Delay1'
         *  UnitDelay: '<S189>/Unit Delay3'
         */
        if (!TCCR_ac_DW.UnitDelay1_DSTATE_n)
        {
            TCCR_ac_DW.UnitDelay3_DSTATE_b = 1.0F;
        }

        TCCR_ac_DW.UnitDelay3_DSTATE_b = fminf(TCCR_ac_DW.UnitDelay3_DSTATE_b +
            rtb_Switch_b, 1.0F);
    }

    /* End of Switch: '<S189>/Switch2' */

    /* Switch: '<S179>/Switch1' incorporates:
     *  Constant: '<S7>/Calib'
     *  Selector: '<S4>/Selector'
     */
    if (rtb_UnitDelay_cj)
    {
        /* Outputs for Atomic SubSystem: '<S179>/HSCL_FTC_TturbTimp' */
        TCCR_ac_HSCL_FTC_TturbTimp
            (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
             VeTCCR_n_NiTgt4HTDR, tmpRead_2[((sint32)HeTCCR_n_SlipSpdFailIdx) -
             1], &TCCR_ac_B.HSCL_FTC_TturbTimp_h);

        /* End of Outputs for SubSystem: '<S179>/HSCL_FTC_TturbTimp' */

        /* Switch: '<S278>/Switch1' incorporates:
         *  Constant: '<S7>/Calib'
         *  Selector: '<S4>/Selector'
         */
        rtb_Switch1_kr[0] = TCCR_ac_B.HSCL_FTC_TturbTimp_h.Switch1_l;
        rtb_Switch1_kr[1] = TCCR_ac_B.HSCL_FTC_TturbTimp_h.Sum2;
        rtb_Switch1_kr[2] = TCCR_ac_B.HSCL_FTC_TturbTimp_h.Vector_c;
        rtb_Switch1_kr[3] = TCCR_ac_B.HSCL_FTC_TturbTimp_h.Switch1;
    }
    else
    {
        /* Gain: '<S212>/Gain' incorporates:
         *  Lookup_n-D: '<S214>/Vector'
         *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
         */
        rtb_Gain_d = 0.5F * look1_iflf_binlca_16a
            (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
             (Rte_Prm_KxHSCR_r_TCC_Nc2FromTturb_CoeffsB_KxHSCR_r_TCC_Nc2FromTturb_CoeffsB
              ()),
             (Rte_Prm_KtHSCR_r_TCC_Nc2FromTturb_CoeffsB_KtHSCR_r_TCC_Nc2FromTturb_CoeffsB
              ()), 8U);

        /* Lookup_n-D: '<S213>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
         */
        rtb_Vector_cm = look1_iflf_binlca_16a
            (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
             (Rte_Prm_KxHSCR_r_TCC_Nc2FromTturb_CoeffsA_KxHSCR_r_TCC_Nc2FromTturb_CoeffsA
              ()),
             (Rte_Prm_KtHSCR_r_TCC_Nc2FromTturb_CoeffsA_KtHSCR_r_TCC_Nc2FromTturb_CoeffsA
              ()), 8U);

        /* Product: '<S212>/Product1' */
        rtb_Product1_i = rtb_Gain_d * rtb_Gain_d;

        /* Outputs for Atomic SubSystem: '<S212>/Protected Division2' */
        /* Switch: '<S218>/Switch1' incorporates:
         *  Constant: '<S218>/Constant Value1'
         *  RelationalOperator: '<S218>/Not Equal1'
         */
        if (rtb_Vector_cm != 0.0F)
        {
            /* Switch: '<S218>/Switch1' incorporates:
             *  Constant: '<S212>/Constant Value2'
             *  Product: '<S218>/Division'
             */
            rtb_Switch_b = 1.0F / rtb_Vector_cm;
        }
        else
        {
            /* Switch: '<S218>/Switch1' */
            rtb_Switch_b = 3.402823466E+38F;
        }

        /* End of Switch: '<S218>/Switch1' */
        /* End of Outputs for SubSystem: '<S212>/Protected Division2' */

        /* Switch: '<S192>/Switch1' incorporates:
         *  Constant: '<S7>/Calib'
         *  Selector: '<S4>/Selector'
         */
        if (tmpRead_2[((sint32)HeTCCR_n_SlipSpdFailIdx) - 1])
        {
            /* Switch: '<S192>/Switch1' incorporates:
             *  Constant: '<S192>/Constant Value5'
             */
            rtb_Sum1_gk = 0.0F;
        }
        else
        {
            /* Switch: '<S192>/Switch1' incorporates:
             *  Sum: '<S192>/Sum1'
             */
            rtb_Sum1_gk = VeTCCR_n_NiTgt4HTDR -
                TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo;
        }

        /* End of Switch: '<S192>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S212>/Protected Division' */
        /* Switch: '<S216>/Switch1' incorporates:
         *  Constant: '<S216>/Constant Value'
         *  Constant: '<S216>/Constant Value1'
         *  Constant: '<S216>/Constant Value2'
         *  Constant: '<S216>/Constant Value3'
         *  Logic: '<S216>/AND'
         *  RelationalOperator: '<S216>/Greater Than or Equal '
         *  RelationalOperator: '<S216>/Greater Than or Equal 1'
         *  RelationalOperator: '<S216>/Not Equal'
         *  RelationalOperator: '<S216>/Not Equal1'
         *  Switch: '<S216>/Switch2'
         *  Switch: '<S216>/Switch3'
         */
        if ((rtb_Product1_i != 0.0F) && (rtb_Vector_cm != 0.0F))
        {
            /* Switch: '<S216>/Switch1' incorporates:
             *  Product: '<S216>/Division'
             */
            rtb_Product1_i /= rtb_Vector_cm;
        }
        else if (rtb_Product1_i > 0.0F)
        {
            /* Switch: '<S216>/Switch2' incorporates:
             *  Constant: '<S216>/MAXFLOAT'
             *  Switch: '<S216>/Switch1'
             */
            rtb_Product1_i = 3.402823466E+38F;
        }
        else if (rtb_Product1_i < 0.0F)
        {
            /* Switch: '<S216>/Switch3' incorporates:
             *  Constant: '<S216>/MINFLOAT'
             *  Switch: '<S216>/Switch1'
             *  Switch: '<S216>/Switch2'
             */
            rtb_Product1_i = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S216>/Switch1' incorporates:
             *  Constant: '<S216>/Constant Value4'
             *  Switch: '<S216>/Switch2'
             *  Switch: '<S216>/Switch3'
             */
            rtb_Product1_i = 0.0F;
        }

        /* End of Switch: '<S216>/Switch1' */
        /* End of Outputs for SubSystem: '<S212>/Protected Division' */

        /* Outputs for Atomic SubSystem: '<S212>/Protected Division1' */
        /* Switch: '<S217>/Switch1' incorporates:
         *  Constant: '<S217>/Constant Value'
         *  Constant: '<S217>/Constant Value1'
         *  Constant: '<S217>/Constant Value2'
         *  Constant: '<S217>/Constant Value3'
         *  Logic: '<S217>/AND'
         *  RelationalOperator: '<S217>/Greater Than or Equal '
         *  RelationalOperator: '<S217>/Greater Than or Equal 1'
         *  RelationalOperator: '<S217>/Not Equal'
         *  RelationalOperator: '<S217>/Not Equal1'
         *  Switch: '<S217>/Switch2'
         *  Switch: '<S217>/Switch3'
         */
        if ((rtb_Gain_d != 0.0F) && (rtb_Vector_cm != 0.0F))
        {
            /* Switch: '<S217>/Switch1' incorporates:
             *  Product: '<S217>/Division'
             */
            rtb_Gain_d /= rtb_Vector_cm;
        }
        else if (rtb_Gain_d > 0.0F)
        {
            /* Switch: '<S217>/Switch2' incorporates:
             *  Constant: '<S217>/MAXFLOAT'
             *  Switch: '<S217>/Switch1'
             */
            rtb_Gain_d = 3.402823466E+38F;
        }
        else if (rtb_Gain_d < 0.0F)
        {
            /* Switch: '<S217>/Switch3' incorporates:
             *  Constant: '<S217>/MINFLOAT'
             *  Switch: '<S217>/Switch1'
             *  Switch: '<S217>/Switch2'
             */
            rtb_Gain_d = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S217>/Switch1' incorporates:
             *  Constant: '<S217>/Constant Value4'
             *  Switch: '<S217>/Switch2'
             *  Switch: '<S217>/Switch3'
             */
            rtb_Gain_d = 0.0F;
        }

        /* End of Switch: '<S217>/Switch1' */
        /* End of Outputs for SubSystem: '<S212>/Protected Division1' */

        /* Signum: '<S192>/Signum' */
        if (rtb_Switch_b < 0.0F)
        {
            rtb_Vector_cm = -1.0F;
        }
        else if (rtb_Switch_b > 0.0F)
        {
            rtb_Vector_cm = 1.0F;
        }
        else
        {
            rtb_Vector_cm = rtb_Switch_b;
        }

        /* End of Signum: '<S192>/Signum' */

        /* Sum: '<S192>/Sum3' incorporates:
         *  Constant: '<S192>/Constant Value'
         *  Gain: '<S212>/Gain1'
         *  Lookup_n-D: '<S215>/Vector'
         *  MinMax: '<S192>/MinMax1'
         *  Product: '<S192>/Product'
         *  Product: '<S192>/Product1'
         *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
         *  Sqrt: '<S211>/Sqrt'
         *  Sum: '<S192>/Sum2'
         *  Sum: '<S212>/Sum1'
         *  Switch: '<S211>/Switch'
         */
        rtb_Switch_b = (sqrtf(fmaxf((rtb_Sum1_gk - (look1_iflf_binlca_16a
                            (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
                             (Rte_Prm_KxHSCR_r_TCC_Nc2FromTturb_CoeffsC_KxHSCR_r_TCC_Nc2FromTturb_CoeffsC
                              ()),
                             (Rte_Prm_KtHSCR_r_TCC_Nc2FromTturb_CoeffsC_KtHSCR_r_TCC_Nc2FromTturb_CoeffsC
                              ()), 3U) - rtb_Product1_i)) * rtb_Switch_b, 0.0F))
                        * rtb_Vector_cm) + (-rtb_Gain_d);

        /* Outputs for Atomic SubSystem: '<S192>/Protected Division2' */
        /* Switch: '<S210>/Switch1' incorporates:
         *  Constant: '<S210>/Constant Value'
         *  Constant: '<S210>/Constant Value1'
         *  Constant: '<S210>/Constant Value2'
         *  Constant: '<S210>/Constant Value3'
         *  Logic: '<S210>/AND'
         *  RelationalOperator: '<S210>/Greater Than or Equal '
         *  RelationalOperator: '<S210>/Greater Than or Equal 1'
         *  RelationalOperator: '<S210>/Not Equal'
         *  RelationalOperator: '<S210>/Not Equal1'
         *  Switch: '<S210>/Switch2'
         *  Switch: '<S210>/Switch3'
         */
        if ((TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo != 0.0F) &&
                (VeTCCR_n_NiTgt4HTDR != 0.0F))
        {
            /* Switch: '<S210>/Switch1' incorporates:
             *  Product: '<S210>/Division'
             */
            rtb_Sum1_gk = TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo /
                VeTCCR_n_NiTgt4HTDR;
        }
        else if (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo > 0.0F)
        {
            /* Switch: '<S210>/Switch2' incorporates:
             *  Constant: '<S210>/MAXFLOAT'
             *  Switch: '<S210>/Switch1'
             */
            rtb_Sum1_gk = 3.402823466E+38F;
        }
        else if (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo < 0.0F)
        {
            /* Switch: '<S210>/Switch3' incorporates:
             *  Constant: '<S210>/MINFLOAT'
             *  Switch: '<S210>/Switch1'
             *  Switch: '<S210>/Switch2'
             */
            rtb_Sum1_gk = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S210>/Switch1' incorporates:
             *  Constant: '<S210>/Constant Value4'
             *  Switch: '<S210>/Switch2'
             *  Switch: '<S210>/Switch3'
             */
            rtb_Sum1_gk = 0.0F;
        }

        /* End of Switch: '<S210>/Switch1' */
        /* End of Outputs for SubSystem: '<S192>/Protected Division2' */

        /* Lookup_n-D: '<S208>/Vector' incorporates:
         *  Switch: '<S210>/Switch1'
         */
        rtb_Product1_i = look1_iflf_binlca_16a(rtb_Sum1_gk,
            (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
            (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

        /* Outputs for Atomic SubSystem: '<S192>/Protected Division1' */
        /* Switch: '<S209>/Switch1' incorporates:
         *  Constant: '<S209>/Constant Value'
         *  Constant: '<S209>/Constant Value1'
         *  Constant: '<S209>/Constant Value2'
         *  Constant: '<S209>/Constant Value3'
         *  Logic: '<S209>/AND'
         *  RelationalOperator: '<S209>/Greater Than or Equal '
         *  RelationalOperator: '<S209>/Greater Than or Equal 1'
         *  RelationalOperator: '<S209>/Not Equal'
         *  RelationalOperator: '<S209>/Not Equal1'
         *  Switch: '<S209>/Switch2'
         *  Switch: '<S209>/Switch3'
         */
        if ((rtb_Switch_b != 0.0F) && (rtb_Product1_i != 0.0F))
        {
            /* Switch: '<S278>/Switch1' incorporates:
             *  Product: '<S209>/Division'
             *  Switch: '<S209>/Switch1'
             */
            rtb_Switch1_kr[0] = rtb_Switch_b / rtb_Product1_i;
        }
        else if (rtb_Switch_b > 0.0F)
        {
            /* Switch: '<S278>/Switch1' incorporates:
             *  Constant: '<S209>/MAXFLOAT'
             *  Switch: '<S209>/Switch1'
             *  Switch: '<S209>/Switch2'
             */
            rtb_Switch1_kr[0] = 3.402823466E+38F;
        }
        else if (rtb_Switch_b < 0.0F)
        {
            /* Switch: '<S278>/Switch1' incorporates:
             *  Constant: '<S209>/MINFLOAT'
             *  Switch: '<S209>/Switch1'
             *  Switch: '<S209>/Switch2'
             *  Switch: '<S209>/Switch3'
             */
            rtb_Switch1_kr[0] = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S278>/Switch1' incorporates:
             *  Constant: '<S209>/Constant Value4'
             *  Switch: '<S209>/Switch1'
             *  Switch: '<S209>/Switch2'
             *  Switch: '<S209>/Switch3'
             */
            rtb_Switch1_kr[0] = 0.0F;
        }

        /* End of Switch: '<S209>/Switch1' */
        /* End of Outputs for SubSystem: '<S192>/Protected Division1' */

        /* Switch: '<S278>/Switch1' */
        rtb_Switch1_kr[1] = rtb_Switch_b;
        rtb_Switch1_kr[2] = rtb_Product1_i;
        rtb_Switch1_kr[3] = rtb_Sum1_gk;
    }

    /* End of Switch: '<S179>/Switch1' */
    for (i = 0; i < 4; i++)
    {
        /* Sum: '<S189>/Summation' incorporates:
         *  Constant: '<S189>/Constant Value'
         *  Product: '<S189>/Multiplication'
         *  Product: '<S189>/Multiplication3'
         *  Sum: '<S189>/Subtraction'
         *  UnitDelay: '<S189>/Unit Delay'
         *  UnitDelay: '<S189>/Unit Delay3'
         */
        TCCR_ac_DW.UnitDelay_DSTATE_ew[i] = ((1.0F -
            TCCR_ac_DW.UnitDelay3_DSTATE_b) * TCCR_ac_DW.UnitDelay_DSTATE_nh[i])
            + (TCCR_ac_DW.UnitDelay3_DSTATE_b * rtb_Switch1_kr[i]);
    }

    /* Outputs for Atomic SubSystem: '<S45>/HSCL_FTC_TturbTimp' */
    /* Outputs for Atomic SubSystem: '<S172>/Protected Division2' */
    /* Switch: '<S186>/Switch1' incorporates:
     *  Constant: '<S186>/Constant Value'
     *  Constant: '<S186>/Constant Value1'
     *  Constant: '<S186>/Constant Value2'
     *  Constant: '<S186>/Constant Value3'
     *  Logic: '<S186>/AND'
     *  RelationalOperator: '<S186>/Greater Than or Equal '
     *  RelationalOperator: '<S186>/Greater Than or Equal 1'
     *  RelationalOperator: '<S186>/Not Equal'
     *  RelationalOperator: '<S186>/Not Equal1'
     *  Switch: '<S186>/Switch2'
     *  Switch: '<S186>/Switch3'
     */
    if ((TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo != 0.0F) &&
            (VeTCCR_n_NiTgt4HTDR != 0.0F))
    {
        /* Switch: '<S186>/Switch1' incorporates:
         *  Product: '<S186>/Division'
         */
        rtb_Sum1_gk = TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo /
            VeTCCR_n_NiTgt4HTDR;
    }
    else if (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo > 0.0F)
    {
        /* Switch: '<S186>/Switch2' incorporates:
         *  Constant: '<S186>/MAXFLOAT'
         *  Switch: '<S186>/Switch1'
         */
        rtb_Sum1_gk = 3.402823466E+38F;
    }
    else if (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo < 0.0F)
    {
        /* Switch: '<S186>/Switch3' incorporates:
         *  Constant: '<S186>/MINFLOAT'
         *  Switch: '<S186>/Switch1'
         *  Switch: '<S186>/Switch2'
         */
        rtb_Sum1_gk = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S186>/Switch1' incorporates:
         *  Constant: '<S186>/Constant Value4'
         *  Switch: '<S186>/Switch2'
         *  Switch: '<S186>/Switch3'
         */
        rtb_Sum1_gk = 0.0F;
    }

    /* End of Switch: '<S186>/Switch1' */
    /* End of Outputs for SubSystem: '<S172>/Protected Division2' */

    /* Lookup_n-D: '<S181>/Vector' incorporates:
     *  Switch: '<S186>/Switch1'
     */
    rtb_Product1_i = look1_iflf_binlca_16a(rtb_Sum1_gk,
        (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
        (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

    /* Switch: '<S172>/Switch1' incorporates:
     *  Constant: '<S7>/Calib'
     *  Selector: '<S4>/Selector'
     */
    if (tmpRead_2[((sint32)HeTCCR_n_SlipSpdFailIdx) - 1])
    {
        /* UnitDelay: '<S84>/Unit Delay' incorporates:
         *  Constant: '<S172>/Constant Value5'
         */
        rtb_Switch_b = 0.0F;
    }
    else
    {
        /* UnitDelay: '<S84>/Unit Delay' incorporates:
         *  Sum: '<S172>/Sum1'
         */
        rtb_Switch_b = VeTCCR_n_NiTgt4HTDR -
            TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo;
    }

    /* End of Switch: '<S172>/Switch1' */

    /* Sum: '<S172>/Sum2' incorporates:
     *  Lookup_n-D: '<S182>/Vector'
     *  Lookup_n-D: '<S183>/Vector'
     *  Lookup_n-D: '<S184>/Vector'
     *  Product: '<S172>/Product'
     *  Product: '<S172>/Product1'
     *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
     */
    rtb_Switch_b = (((look1_iflf_binlca_16a
                      (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
                       (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsA_KxHSCR_r_TCC_TturbFromNC2_CoeffsA
                        ()),
                       (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsA_KtHSCR_r_TCC_TturbFromNC2_CoeffsA
                        ()), 21U) * rtb_Switch_b) * rtb_Switch_b) +
                    (rtb_Switch_b * look1_iflf_binlca_16a
                     (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
                      (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsB_KxHSCR_r_TCC_TturbFromNC2_CoeffsB
                       ()),
                      (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsB_KtHSCR_r_TCC_TturbFromNC2_CoeffsB
                       ()), 21U))) + look1_iflf_binlca_16a
        (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsC_KxHSCR_r_TCC_TturbFromNC2_CoeffsC
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsC_KtHSCR_r_TCC_TturbFromNC2_CoeffsC
          ()), 3U);

    /* Outputs for Atomic SubSystem: '<S172>/Protected Division1' */
    /* Switch: '<S185>/Switch1' incorporates:
     *  Constant: '<S185>/Constant Value'
     *  Constant: '<S185>/Constant Value1'
     *  Constant: '<S185>/Constant Value2'
     *  Constant: '<S185>/Constant Value3'
     *  Logic: '<S185>/AND'
     *  RelationalOperator: '<S185>/Greater Than or Equal '
     *  RelationalOperator: '<S185>/Greater Than or Equal 1'
     *  RelationalOperator: '<S185>/Not Equal'
     *  RelationalOperator: '<S185>/Not Equal1'
     *  Switch: '<S185>/Switch2'
     *  Switch: '<S185>/Switch3'
     */
    if ((rtb_Switch_b != 0.0F) && (rtb_Product1_i != 0.0F))
    {
        /* Switch: '<S185>/Switch1' incorporates:
         *  Product: '<S185>/Division'
         */
        rtb_Switch_b /= rtb_Product1_i;
    }
    else if (rtb_Switch_b > 0.0F)
    {
        /* Switch: '<S185>/Switch2' incorporates:
         *  Constant: '<S185>/MAXFLOAT'
         *  Switch: '<S185>/Switch1'
         */
        rtb_Switch_b = 3.402823466E+38F;
    }
    else if (rtb_Switch_b < 0.0F)
    {
        /* Switch: '<S185>/Switch3' incorporates:
         *  Constant: '<S185>/MINFLOAT'
         *  Switch: '<S185>/Switch1'
         *  Switch: '<S185>/Switch2'
         */
        rtb_Switch_b = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S185>/Switch1' incorporates:
         *  Constant: '<S185>/Constant Value4'
         *  Switch: '<S185>/Switch2'
         *  Switch: '<S185>/Switch3'
         */
        rtb_Switch_b = 0.0F;
    }

    /* End of Switch: '<S185>/Switch1' */
    /* End of Outputs for SubSystem: '<S172>/Protected Division1' */
    /* End of Outputs for SubSystem: '<S45>/HSCL_FTC_TturbTimp' */

    /* SwitchCase: '<S45>/Switch Case1' incorporates:
     *  Constant: '<S173>/Calib'
     */
    switch (KeTCCR_i_SelFTCSrc)
    {
      case 1:
        /* Outputs for IfAction SubSystem: '<S45>/BASE' incorporates:
         *  ActionPort: '<S168>/Action Port'
         */
        TCCR_ac_BASE(rtb_Switch_b, rtb_Product1_i, rtb_Sum1_gk,
                     &TCCR_ac_B.Merge[0], &TCCR_ac_B.Merge[1], &TCCR_ac_B.Merge
                     [2]);

        /* End of Outputs for SubSystem: '<S45>/BASE' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S45>/DRIVE2COAST' incorporates:
         *  ActionPort: '<S169>/Action Port'
         */
        TCCR_ac_BASE(TCCR_ac_DW.UnitDelay_DSTATE_ew[0],
                     TCCR_ac_DW.UnitDelay_DSTATE_ew[2],
                     TCCR_ac_DW.UnitDelay_DSTATE_ew[3], &TCCR_ac_B.Merge[0],
                     &TCCR_ac_B.Merge[1], &TCCR_ac_B.Merge[2]);

        /* End of Outputs for SubSystem: '<S45>/DRIVE2COAST' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of SwitchCase: '<S45>/Switch Case1' */

    /* Abs: '<S42>/Abs1' */
    rtb_Sum1_gk = fabsf(TCCR_ac_B.Merge[0]);

    /* Lookup_n-D: '<S88>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
     */
    rtb_Product1_i = look1_iflf_binlca_16a
        (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo, ((const float32 *)
          &(KxTCCR_M_TimpThrshOpeningExit[0])), ((const float32 *)
          &(KtTCCR_M_TimpThrshOpeningExit[0])), 6U);

    /* Outputs for Atomic SubSystem: '<S146>/EdgeRising1' */
    /* Logic: '<S147>/OR1' incorporates:
     *  UnitDelay: '<S147>/Unit Delay'
     */
    rtb_UnitDelay_cj = !TCCR_ac_DW.UnitDelay_DSTATE_aj;

    /* Update for UnitDelay: '<S147>/Unit Delay' incorporates:
     *  Constant: '<S146>/Constant'
     */
    TCCR_ac_DW.UnitDelay_DSTATE_aj = true;

    /* Switch: '<S146>/Switch1' incorporates:
     *  Logic: '<S147>/AND'
     */
    if (rtb_UnitDelay_cj)
    {
        /* Switch: '<S146>/Switch1' incorporates:
         *  Constant: '<S150>/Calib'
         *  Constant: '<S153>/Calib'
         */
        rtb_Switch_g_idx_0 = Rte_Prm_KeTSXR_D_Bb_KeTSXR_D_Bb();
        rtb_Gain_d = Rte_Prm_KeTSXR_J_Ib_KeTSXR_J_Ib();
    }
    else
    {
        /* Product: '<S146>/Product3' incorporates:
         *  Constant: '<S154>/Calib'
         *  Product: '<S146>/Product1'
         */
        rtb_Gain_d = ((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f()) * ((float32)
            Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f());

        /* Sum: '<S146>/Sum' incorporates:
         *  Constant: '<S150>/Calib'
         *  Constant: '<S155>/Calib'
         *  Constant: '<S156>/Calib'
         *  Product: '<S146>/Product3'
         */
        rtb_Switch_b = ((rtb_Gain_d * ((float32)Rte_Prm_KeTSXR_D_Ba_KeTSXR_D_Ba()))
                        + ((float32)Rte_Prm_KeTSXR_D_Be_KeTSXR_D_Be())) +
            ((float32)Rte_Prm_KeTSXR_D_Bb_KeTSXR_D_Bb());

        /* Sum: '<S146>/Sum1' incorporates:
         *  Constant: '<S151>/Calib'
         *  Constant: '<S152>/Calib'
         *  Constant: '<S153>/Calib'
         *  Product: '<S146>/Product1'
         */
        rtb_Vector_cm = ((rtb_Gain_d * ((float32)Rte_Prm_KeTSXR_J_Ia_KeTSXR_J_Ia
                           ())) + ((float32)Rte_Prm_KeTSXR_J_Ie_KeTSXR_J_Ie()))
            + ((float32)Rte_Prm_KeTSXR_J_Ib_KeTSXR_J_Ib());

        /* Switch: '<S146>/Switch' incorporates:
         *  Constant: '<S148>/Constant'
         *  Constant: '<S149>/Constant'
         *  Logic: '<S146>/Logical Operator'
         *  RelationalOperator: '<S146>/Relational Operator'
         *  RelationalOperator: '<S146>/Relational Operator1'
         */
        if ((((uint32)rtb_TmpSignalConversionAtVeHSER_e_RngS_p) == CeHSER_e_M2) ||
            (((uint32)rtb_TmpSignalConversionAtVeHSER_e_RngS_p) == CeHSER_e_G2))
        {
            /* Switch: '<S146>/Switch' */
            rtb_Switch_g_idx_0 = rtb_Switch_b;
            rtb_Gain_d = rtb_Vector_cm;
        }
        else
        {
            /* Switch: '<S146>/Switch' incorporates:
             *  Constant: '<S150>/Calib'
             *  Constant: '<S153>/Calib'
             */
            rtb_Switch_g_idx_0 = Rte_Prm_KeTSXR_D_Bb_KeTSXR_D_Bb();
            rtb_Gain_d = Rte_Prm_KeTSXR_J_Ib_KeTSXR_J_Ib();
        }

        /* End of Switch: '<S146>/Switch' */

        /* Outputs for Atomic SubSystem: '<S146>/Limiter1' */
        /* Switch: '<S157>/Switch1' incorporates:
         *  RelationalOperator: '<S157>/Relational Operator'
         */
        if (rtb_Switch_b < rtb_Switch_g_idx_0)
        {
            /* Switch: '<S157>/Switch1' */
            rtb_Switch_g_idx_0 = rtb_Switch_b;
        }

        if (rtb_Vector_cm < rtb_Gain_d)
        {
            /* Switch: '<S157>/Switch1' */
            rtb_Gain_d = rtb_Vector_cm;
        }

        /* End of Switch: '<S157>/Switch1' */

        /* Switch: '<S157>/Switch' incorporates:
         *  Constant: '<S150>/Calib'
         *  Constant: '<S153>/Calib'
         *  RelationalOperator: '<S157>/Relational Operator1'
         */
        if (rtb_Switch_g_idx_0 <= ((float32)Rte_Prm_KeTSXR_D_Bb_KeTSXR_D_Bb()))
        {
            /* Switch: '<S146>/Switch1' */
            rtb_Switch_g_idx_0 = Rte_Prm_KeTSXR_D_Bb_KeTSXR_D_Bb();
        }

        if (rtb_Gain_d <= ((float32)Rte_Prm_KeTSXR_J_Ib_KeTSXR_J_Ib()))
        {
            /* Switch: '<S146>/Switch1' */
            rtb_Gain_d = Rte_Prm_KeTSXR_J_Ib_KeTSXR_J_Ib();
        }

        /* End of Switch: '<S157>/Switch' */
        /* End of Outputs for SubSystem: '<S146>/Limiter1' */
    }

    /* End of Switch: '<S146>/Switch1' */
    /* End of Outputs for SubSystem: '<S146>/EdgeRising1' */

    /* Switch: '<S158>/Switch1' incorporates:
     *  Constant: '<S160>/Calib'
     *  Constant: '<S161>/Calib'
     *  Constant: '<S162>/Calib'
     *  Constant: '<S163>/Calib'
     *  Product: '<S158>/Product1'
     *  Sum: '<S158>/Sum1'
     */
    if (HeTCCR_b_UseProgramParam)
    {
        rtb_Switch_g_idx_0 = ((((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f()) *
                               ((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f())) *
                              ((float32)Rte_Prm_KeTSXR_D_Ba_KeTSXR_D_Ba())) +
            ((float32)Rte_Prm_KeTSXR_D_Be_KeTSXR_D_Be());
    }

    /* End of Switch: '<S158>/Switch1' */

    /* Product: '<S44>/Product2' incorporates:
     *  Constant: '<S144>/Calib'
     */
    rtb_Switch_b = (KeTCCR_b_EnblCalcDamps ? rtb_Switch4 : 0.0F) *
        rtb_Switch_g_idx_0;

    /* Switch: '<S4>/Switch2' incorporates:
     *  Constant: '<S10>/Calib'
     */
    if (HeTCCR_b_UseTISRNi)
    {
        rtb_Product1_pc = rtb_Sum1_oz;
    }

    /* End of Switch: '<S4>/Switch2' */

    /* Switch: '<S159>/Switch1' incorporates:
     *  Constant: '<S164>/Calib'
     *  Constant: '<S165>/Calib'
     *  Constant: '<S166>/Calib'
     *  Constant: '<S167>/Calib'
     *  Product: '<S159>/Product1'
     *  Sum: '<S159>/Sum1'
     */
    if (HeTCCR_b_UseProgramParam)
    {
        rtb_Gain_d = ((((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f()) *
                       ((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f())) *
                      ((float32)Rte_Prm_KeTSXR_J_Ia_KeTSXR_J_Ia())) + ((float32)
            Rte_Prm_KeTSXR_J_Ie_KeTSXR_J_Ie());
    }

    /* End of Switch: '<S159>/Switch1' */

    /* Product: '<S44>/Product1' incorporates:
     *  Constant: '<S145>/Calib'
     */
    rtb_Product1_pc = (KeTCCR_b_EnblCalcInrt ? rtb_Product1_pc : 0.0F) *
        rtb_Gain_d;

    /* Sum: '<S44>/Sum1' */
    TCCR_ac_B.VeTCCR_M_TlfMod_Timp = (rtb_TmpSignalConversionAtVeTTQR_M_LoadTo -
        rtb_Switch_b) - rtb_Product1_pc;

    /* RelationalOperator: '<S92>/Comparison2' incorporates:
     *  Constant: '<S133>/Constant'
     *  UnitDelay: '<S92>/X0=1'
     */
    TCCR_ac_B.Comparison2 = (((uint32)TCCR_ac_DW.X01_DSTATE) !=
        CeTCCR_e_LCCOpening);

    /* Chart: '<S42>/Stateflow Chart' incorporates:
     *  Constant: '<S27>/Constant'
     *  Constant: '<S85>/Calib'
     *  Lookup_n-D: '<S86>/Vector'
     *  Lookup_n-D: '<S87>/Vector'
     *  RelationalOperator: '<S13>/Comparison8'
     *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
     *  UnitDelay: '<S42>/Unit Delay12'
     *  UnitDelay: '<S42>/Unit Delay6'
     */
    /* Gateway: TCCR_FUNC_MedTEB/TCCC_Process_TC/TCCC_LCC_Procs/StateMachine/Stateflow
       Chart */
    /* During: TCCR_FUNC_MedTEB/TCCC_Process_TC/TCCC_LCC_Procs/StateMachine/Stateflow
       Chart */
    if (((uint32)TCCR_ac_DW.is_active_c3_TCCR_ac) == 0U)
    {
        /* Entry: TCCR_FUNC_MedTEB/TCCC_Process_TC/TCCC_LCC_Procs/StateMachine/Stateflow
           Chart */
        TCCR_ac_DW.is_active_c3_TCCR_ac = 1U;

        /* Entry Internal: TCCR_FUNC_MedTEB/TCCC_Process_TC/TCCC_LCC_Procs/StateMachine/Stateflow
           Chart */
        /* Transition: '<S96>:7' */
        TCCR_ac_DW.is_c3_TCCR_ac = TCCR_ac_IN_LCCStatusOpen_PCInactive;

        /* Entry 'LCCStatusOpen_PCInactive': '<S96>:1' */
        /* VeTCCC_e_ClchStLCC=CeHCCR_e_ClReleased;
           VeTCCR_M_SumTrq = VeTCCR_M_TimpTgt; */
        TCCR_ac_B.VeTCCC_r_RampFactorInit = 1.0F;

        /* Outputs for Function Call SubSystem: '<S42>/Released' */
        /* Event: '<S96>:102' */
        TCCR_ac_Released(&TCCR_ac_B.Merge2_l, &TCCR_ac_B.Merge1_d,
                         &TCCR_ac_B.Merge3, &TCCR_ac_B.VeTCCC_e_ClchStLCC,
                         &TCCR_ac_B.VeTCCR_b_OpenRFStck,
                         &TCCR_ac_B.VeTCCR_r_OpenRFStckRatio,
                         &TCCR_ac_B.VeTCCR_e_LCCMngSt);

        /* End of Outputs for SubSystem: '<S42>/Released' */
    }
    else
    {
        switch (TCCR_ac_DW.is_c3_TCCR_ac)
        {
          case TCCR_ac_IN_LCCStatusLocked_PCActive:
            /* During 'LCCStatusLocked_PCActive': '<S96>:4' */
            /* PressureControl Inactive */
            if (rtb_VeTCCR_b_PresCntrlRel && (rtb_Sum1_gk > rtb_Product1_i))
            {
                /* Transition: '<S96>:18' */
                TCCR_ac_DW.is_c3_TCCR_ac =
                    TCCR_ac_IN_LCCStatusOpening_PCInactive;

                /* Entry 'LCCStatusOpening_PCInactive': '<S96>:3' */
                /* VeHSCC_e_ClchStLCC=CeHCCR_e_ClActuated;
                   OpeningRampFactor is 0-->1 */
                TCCR_ac_B.VeTCCR_M_TimpInit = rtb_Sum1_gk;

                /* VeTCCR_M_TimpInit = single(0); */
                TCCR_ac_B.VeTCCC_r_RampFactorInit =
                    TCCR_ac_DW.UnitDelay12_DSTATE;

                /* Outputs for Function Call SubSystem: '<S42>/Opening' */
                /* Event: '<S96>:104' */
                TCCR_ac_Opening
                    (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
                     TCCR_ac_B.Merge[0], TCCR_ac_B.VeTCCR_M_TimpInit,
                     TCCR_ac_B.VeTCCR_M_TlfMod_Timp,
                     TCCR_ac_B.VeTCCC_r_RampFactorInit, TCCR_ac_B.Comparison2,
                     &TCCR_ac_B.Merge2_l, &TCCR_ac_B.Merge1_d, &TCCR_ac_B.Merge3,
                     &TCCR_ac_B.VeTCCC_e_ClchStLCC,
                     &TCCR_ac_B.VeTCCR_b_OpenRFStck,
                     &TCCR_ac_B.VeTCCR_r_OpenRFStckRatio,
                     &TCCR_ac_B.VeTCCR_e_LCCMngSt, &TCCR_ac_DW.Opening);

                /* End of Outputs for SubSystem: '<S42>/Opening' */
            }
            else
            {
                /* Timp > Cal and PressureControl active, add slipspeed threshold to avoid toggling
                   Or use Nturb(potentially also add Slipspeed) based TimpThrsh cal table  or  */
                if (((rtb_Sum1_gk > look1_iflf_binlca_16a
                        (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo, ((
                         const float32 *)&(KxTCCR_M_TimpThrshLCCSt4Exit[0])), ((
                         const float32 *)&(KtTCCR_M_TimpThrshLCCSt4Exit[0])), 6U))
                     && (!rtb_VeTCCR_b_PresCntrlRel)) && (((uint32)
                        TCCR_ac_B.VeTCCC_e_ClchStLCC) != CeHCCR_e_ClLocked))
                {
                    /* Transition: '<S96>:31' */
                    TCCR_ac_DW.is_c3_TCCR_ac = TCCR_ac_IN_LCCStatusOpen_PCActive;

                    /* Entry 'LCCStatusOpen_PCActive': '<S96>:2' */
                    /* VeTCCC_e_ClchStLCC=CeHCCR_e_ClActuated; */
                    TCCR_ac_B.VeTCCR_M_TimpInit = rtb_Sum1_gk;

                    /* VeTCCR_M_TimpInit = single(0); */
                    TCCR_ac_B.VeTCCC_r_RampFactorInit =
                        TCCR_ac_DW.UnitDelay12_DSTATE;

                    /* Outputs for Function Call SubSystem: '<S42>/Opening' */
                    /* Calculate opening rampfactor */
                    /* Event: '<S96>:104' */
                    TCCR_ac_Opening
                        (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
                         TCCR_ac_B.Merge[0], TCCR_ac_B.VeTCCR_M_TimpInit,
                         TCCR_ac_B.VeTCCR_M_TlfMod_Timp,
                         TCCR_ac_B.VeTCCC_r_RampFactorInit,
                         TCCR_ac_B.Comparison2, &TCCR_ac_B.Merge2_l,
                         &TCCR_ac_B.Merge1_d, &TCCR_ac_B.Merge3,
                         &TCCR_ac_B.VeTCCC_e_ClchStLCC,
                         &TCCR_ac_B.VeTCCR_b_OpenRFStck,
                         &TCCR_ac_B.VeTCCR_r_OpenRFStckRatio,
                         &TCCR_ac_B.VeTCCR_e_LCCMngSt, &TCCR_ac_DW.Opening);

                    /* End of Outputs for SubSystem: '<S42>/Opening' */
                }
                else
                {
                    /* Outputs for Function Call SubSystem: '<S42>/Locked' */
                    /* Event: '<S96>:105' */
                    TCCR_ac_Locked(&TCCR_ac_B.Merge2_l, &TCCR_ac_B.Merge1_d,
                                   &TCCR_ac_B.Merge3,
                                   &TCCR_ac_B.VeTCCC_e_ClchStLCC,
                                   &TCCR_ac_B.VeTCCR_b_OpenRFStck,
                                   &TCCR_ac_B.VeTCCR_r_OpenRFStckRatio,
                                   &TCCR_ac_B.VeTCCR_e_LCCMngSt);

                    /* End of Outputs for SubSystem: '<S42>/Locked' */
                }
            }
            break;

          case TCCR_ac_IN_LCCStatusOpen_PCActive:
            /* During 'LCCStatusOpen_PCActive': '<S96>:2' */
            /* Timp < Cal and Blending was completed in State(1). % add RampFactor<=0 here */
            if (rtb_Sum1_gk <= look1_iflf_binlca_16a
                    (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo, ((const
                   float32 *)&(KxTCCR_M_TimpThrshLCCSt3Exit[0])), ((const
                    float32 *)&(KtTCCR_M_TimpThrshLCCSt3Exit[0])), 6U))
            {
                /* Transition: '<S96>:34' */
                TCCR_ac_DW.is_c3_TCCR_ac = TCCR_ac_IN_LCCStatusLocked_PCActive;

                /* Entry 'LCCStatusLocked_PCActive': '<S96>:4' */
                TCCR_ac_B.VeTCCC_r_RampFactorInit = 0.0F;

                /* Outputs for Function Call SubSystem: '<S42>/Locked' */
                /* Event: '<S96>:105' */
                TCCR_ac_Locked(&TCCR_ac_B.Merge2_l, &TCCR_ac_B.Merge1_d,
                               &TCCR_ac_B.Merge3, &TCCR_ac_B.VeTCCC_e_ClchStLCC,
                               &TCCR_ac_B.VeTCCR_b_OpenRFStck,
                               &TCCR_ac_B.VeTCCR_r_OpenRFStckRatio,
                               &TCCR_ac_B.VeTCCR_e_LCCMngSt);

                /* End of Outputs for SubSystem: '<S42>/Locked' */
            }
            else
            {
                /* PressureControl Inactive */
                if (rtb_VeTCCR_b_PresCntrlRel && (rtb_Sum1_gk > rtb_Product1_i))
                {
                    /* Transition: '<S96>:26' */
                    TCCR_ac_DW.is_c3_TCCR_ac = TCCR_ac_IN_LCCTorq_RampDown;

                    /* Entry 'LCCTorq_RampDown': '<S96>:60' */
                    /* VeTCCC_e_ClchStLCC=CeHCCR_e_ClReleased; */
                    TCCR_ac_B.VeTCCR_M_TimpInit = rtb_Sum1_gk;
                    TCCR_ac_B.VeTCCC_r_RampFactorInit =
                        TCCR_ac_DW.UnitDelay12_DSTATE;

                    /* Outputs for Function Call SubSystem: '<S42>/Opening' */
                    /* OpeningRampFactor is 0-->1 */
                    /* Event: '<S96>:104' */
                    TCCR_ac_Opening
                        (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
                         TCCR_ac_B.Merge[0], TCCR_ac_B.VeTCCR_M_TimpInit,
                         TCCR_ac_B.VeTCCR_M_TlfMod_Timp,
                         TCCR_ac_B.VeTCCC_r_RampFactorInit,
                         TCCR_ac_B.Comparison2, &TCCR_ac_B.Merge2_l,
                         &TCCR_ac_B.Merge1_d, &TCCR_ac_B.Merge3,
                         &TCCR_ac_B.VeTCCC_e_ClchStLCC,
                         &TCCR_ac_B.VeTCCR_b_OpenRFStck,
                         &TCCR_ac_B.VeTCCR_r_OpenRFStckRatio,
                         &TCCR_ac_B.VeTCCR_e_LCCMngSt, &TCCR_ac_DW.Opening);

                    /* End of Outputs for SubSystem: '<S42>/Opening' */
                }
                else
                {
                    /* Outputs for Function Call SubSystem: '<S42>/Opening' */
                    /*  LCCTorq = SumTrq-Timp */
                    /* Event: '<S96>:104' */
                    TCCR_ac_Opening
                        (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
                         TCCR_ac_B.Merge[0], TCCR_ac_B.VeTCCR_M_TimpInit,
                         TCCR_ac_B.VeTCCR_M_TlfMod_Timp,
                         TCCR_ac_B.VeTCCC_r_RampFactorInit,
                         TCCR_ac_B.Comparison2, &TCCR_ac_B.Merge2_l,
                         &TCCR_ac_B.Merge1_d, &TCCR_ac_B.Merge3,
                         &TCCR_ac_B.VeTCCC_e_ClchStLCC,
                         &TCCR_ac_B.VeTCCR_b_OpenRFStck,
                         &TCCR_ac_B.VeTCCR_r_OpenRFStckRatio,
                         &TCCR_ac_B.VeTCCR_e_LCCMngSt, &TCCR_ac_DW.Opening);

                    /* End of Outputs for SubSystem: '<S42>/Opening' */
                }
            }
            break;

          case TCCR_ac_IN_LCCStatusOpen_PCInactive:
            /* During 'LCCStatusOpen_PCInactive': '<S96>:1' */
            /* PressureControl active */
            if (!rtb_VeTCCR_b_PresCntrlRel)
            {
                /* Transition: '<S96>:17' */
                TCCR_ac_DW.is_c3_TCCR_ac = TCCR_ac_IN_LCCTorq_RampUp;

                /* Entry 'LCCTorq_RampUp': '<S96>:59' */
                /* VeTCCC_e_ClchStLCC=CeHCCR_e_ClActuated;
                   LeTCCC_M_StartValue=VeTCCC_M_LCCTorq; */
                TCCR_ac_B.VeTCCR_M_TimpInit = rtb_Sum1_gk;
                TCCR_ac_B.VeTCCC_r_RampFactorInit =
                    TCCR_ac_DW.UnitDelay12_DSTATE;

                /* Outputs for Function Call SubSystem: '<S42>/Closing' */
                /* ClosingRampFactor is 1-->0 */
                /* Event: '<S96>:103' */
                TCCR_ac_Closing
                    (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
                     TCCR_ac_B.Merge[0], TCCR_ac_B.VeTCCR_M_TimpInit,
                     TCCR_ac_B.VeTCCC_r_RampFactorInit, &TCCR_ac_B.Merge2_l,
                     &TCCR_ac_B.Merge1_d, &TCCR_ac_B.Merge3,
                     &TCCR_ac_B.VeTCCC_e_ClchStLCC,
                     &TCCR_ac_B.VeTCCR_b_OpenRFStck,
                     &TCCR_ac_B.VeTCCR_r_OpenRFStckRatio,
                     &TCCR_ac_B.VeTCCR_e_LCCMngSt);

                /* End of Outputs for SubSystem: '<S42>/Closing' */
            }
            else
            {
                /* Outputs for Function Call SubSystem: '<S42>/Released' */
                /* Event: '<S96>:102' */
                TCCR_ac_Released(&TCCR_ac_B.Merge2_l, &TCCR_ac_B.Merge1_d,
                                 &TCCR_ac_B.Merge3,
                                 &TCCR_ac_B.VeTCCC_e_ClchStLCC,
                                 &TCCR_ac_B.VeTCCR_b_OpenRFStck,
                                 &TCCR_ac_B.VeTCCR_r_OpenRFStckRatio,
                                 &TCCR_ac_B.VeTCCR_e_LCCMngSt);

                /* End of Outputs for SubSystem: '<S42>/Released' */
            }
            break;

          case TCCR_ac_IN_LCCStatusOpening_PCInactive:
            /* During 'LCCStatusOpening_PCInactive': '<S96>:3' */
            /* PressureControl active */
            if (!rtb_VeTCCR_b_PresCntrlRel)
            {
                /* Transition: '<S96>:22' */
                /* Transition: '<S96>:69' */
                TCCR_ac_DW.is_c3_TCCR_ac = TCCR_ac_IN_LCCTorq_RampUp;

                /* Entry 'LCCTorq_RampUp': '<S96>:59' */
                /* VeTCCC_e_ClchStLCC=CeHCCR_e_ClActuated;
                   LeTCCC_M_StartValue=VeTCCC_M_LCCTorq; */
                TCCR_ac_B.VeTCCR_M_TimpInit = rtb_Sum1_gk;
                TCCR_ac_B.VeTCCC_r_RampFactorInit =
                    TCCR_ac_DW.UnitDelay12_DSTATE;

                /* Outputs for Function Call SubSystem: '<S42>/Closing' */
                /* ClosingRampFactor is 1-->0 */
                /* Event: '<S96>:103' */
                TCCR_ac_Closing
                    (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
                     TCCR_ac_B.Merge[0], TCCR_ac_B.VeTCCR_M_TimpInit,
                     TCCR_ac_B.VeTCCC_r_RampFactorInit, &TCCR_ac_B.Merge2_l,
                     &TCCR_ac_B.Merge1_d, &TCCR_ac_B.Merge3,
                     &TCCR_ac_B.VeTCCC_e_ClchStLCC,
                     &TCCR_ac_B.VeTCCR_b_OpenRFStck,
                     &TCCR_ac_B.VeTCCR_r_OpenRFStckRatio,
                     &TCCR_ac_B.VeTCCR_e_LCCMngSt);

                /* End of Outputs for SubSystem: '<S42>/Closing' */
            }
            else
            {
                /* LCCTorq blending has reached zero */
                if (TCCR_ac_DW.UnitDelay6_DSTATE_p <= KeTCCR_M_LCCTorqThrsh)
                {
                    /* Transition: '<S96>:45' */
                    TCCR_ac_DW.is_c3_TCCR_ac =
                        TCCR_ac_IN_LCCStatusOpen_PCInactive;

                    /* Entry 'LCCStatusOpen_PCInactive': '<S96>:1' */
                    /* VeTCCC_e_ClchStLCC=CeHCCR_e_ClReleased;
                       VeTCCR_M_SumTrq = VeTCCR_M_TimpTgt; */
                    TCCR_ac_B.VeTCCC_r_RampFactorInit = 1.0F;

                    /* Outputs for Function Call SubSystem: '<S42>/Released' */
                    /* Event: '<S96>:102' */
                    TCCR_ac_Released(&TCCR_ac_B.Merge2_l, &TCCR_ac_B.Merge1_d,
                                     &TCCR_ac_B.Merge3,
                                     &TCCR_ac_B.VeTCCC_e_ClchStLCC,
                                     &TCCR_ac_B.VeTCCR_b_OpenRFStck,
                                     &TCCR_ac_B.VeTCCR_r_OpenRFStckRatio,
                                     &TCCR_ac_B.VeTCCR_e_LCCMngSt);

                    /* End of Outputs for SubSystem: '<S42>/Released' */
                }
                else
                {
                    /* Outputs for Function Call SubSystem: '<S42>/Opening' */
                    /* LCCTorq blending to zero */
                    /* Event: '<S96>:104' */
                    TCCR_ac_Opening
                        (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
                         TCCR_ac_B.Merge[0], TCCR_ac_B.VeTCCR_M_TimpInit,
                         TCCR_ac_B.VeTCCR_M_TlfMod_Timp,
                         TCCR_ac_B.VeTCCC_r_RampFactorInit,
                         TCCR_ac_B.Comparison2, &TCCR_ac_B.Merge2_l,
                         &TCCR_ac_B.Merge1_d, &TCCR_ac_B.Merge3,
                         &TCCR_ac_B.VeTCCC_e_ClchStLCC,
                         &TCCR_ac_B.VeTCCR_b_OpenRFStck,
                         &TCCR_ac_B.VeTCCR_r_OpenRFStckRatio,
                         &TCCR_ac_B.VeTCCR_e_LCCMngSt, &TCCR_ac_DW.Opening);

                    /* End of Outputs for SubSystem: '<S42>/Opening' */
                }
            }
            break;

          case TCCR_ac_IN_LCCTorq_RampDown:
            /* During 'LCCTorq_RampDown': '<S96>:60' */
            /* LCCTorq blending has reached zero */
            if (TCCR_ac_DW.UnitDelay6_DSTATE_p <= KeTCCR_M_LCCTorqThrsh)
            {
                /* Transition: '<S96>:61' */
                TCCR_ac_DW.is_c3_TCCR_ac = TCCR_ac_IN_LCCStatusOpen_PCInactive;

                /* Entry 'LCCStatusOpen_PCInactive': '<S96>:1' */
                /* VeTCCC_e_ClchStLCC=CeHCCR_e_ClReleased;
                   VeTCCR_M_SumTrq = VeTCCR_M_TimpTgt; */
                TCCR_ac_B.VeTCCC_r_RampFactorInit = 1.0F;

                /* Outputs for Function Call SubSystem: '<S42>/Released' */
                /* Event: '<S96>:102' */
                TCCR_ac_Released(&TCCR_ac_B.Merge2_l, &TCCR_ac_B.Merge1_d,
                                 &TCCR_ac_B.Merge3,
                                 &TCCR_ac_B.VeTCCC_e_ClchStLCC,
                                 &TCCR_ac_B.VeTCCR_b_OpenRFStck,
                                 &TCCR_ac_B.VeTCCR_r_OpenRFStckRatio,
                                 &TCCR_ac_B.VeTCCR_e_LCCMngSt);

                /* End of Outputs for SubSystem: '<S42>/Released' */
            }
            else
            {
                /* PressureControl active */
                if (!rtb_VeTCCR_b_PresCntrlRel)
                {
                    /* Transition: '<S96>:66' */
                    TCCR_ac_DW.is_c3_TCCR_ac = TCCR_ac_IN_LCCTorq_RampUp;

                    /* Entry 'LCCTorq_RampUp': '<S96>:59' */
                    /* VeTCCC_e_ClchStLCC=CeHCCR_e_ClActuated;
                       LeTCCC_M_StartValue=VeTCCC_M_LCCTorq; */
                    TCCR_ac_B.VeTCCR_M_TimpInit = rtb_Sum1_gk;
                    TCCR_ac_B.VeTCCC_r_RampFactorInit =
                        TCCR_ac_DW.UnitDelay12_DSTATE;

                    /* Outputs for Function Call SubSystem: '<S42>/Closing' */
                    /* ClosingRampFactor is 1-->0 */
                    /* Event: '<S96>:103' */
                    TCCR_ac_Closing
                        (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
                         TCCR_ac_B.Merge[0], TCCR_ac_B.VeTCCR_M_TimpInit,
                         TCCR_ac_B.VeTCCC_r_RampFactorInit, &TCCR_ac_B.Merge2_l,
                         &TCCR_ac_B.Merge1_d, &TCCR_ac_B.Merge3,
                         &TCCR_ac_B.VeTCCC_e_ClchStLCC,
                         &TCCR_ac_B.VeTCCR_b_OpenRFStck,
                         &TCCR_ac_B.VeTCCR_r_OpenRFStckRatio,
                         &TCCR_ac_B.VeTCCR_e_LCCMngSt);

                    /* End of Outputs for SubSystem: '<S42>/Closing' */
                }
                else
                {
                    /* Outputs for Function Call SubSystem: '<S42>/Opening' */
                    /* LCCTorq blending to zero */
                    /* Event: '<S96>:104' */
                    TCCR_ac_Opening
                        (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
                         TCCR_ac_B.Merge[0], TCCR_ac_B.VeTCCR_M_TimpInit,
                         TCCR_ac_B.VeTCCR_M_TlfMod_Timp,
                         TCCR_ac_B.VeTCCC_r_RampFactorInit,
                         TCCR_ac_B.Comparison2, &TCCR_ac_B.Merge2_l,
                         &TCCR_ac_B.Merge1_d, &TCCR_ac_B.Merge3,
                         &TCCR_ac_B.VeTCCC_e_ClchStLCC,
                         &TCCR_ac_B.VeTCCR_b_OpenRFStck,
                         &TCCR_ac_B.VeTCCR_r_OpenRFStckRatio,
                         &TCCR_ac_B.VeTCCR_e_LCCMngSt, &TCCR_ac_DW.Opening);

                    /* End of Outputs for SubSystem: '<S42>/Opening' */
                }
            }
            break;

          default:
            /* During 'LCCTorq_RampUp': '<S96>:59' */
            /* LCCTorq Blending has reached SumTrq-Timp */
            if (TCCR_ac_DW.UnitDelay12_DSTATE <= 0.0F)
            {
                /* Transition: '<S96>:63' */
                TCCR_ac_DW.is_c3_TCCR_ac = TCCR_ac_IN_LCCStatusLocked_PCActive;

                /* Entry 'LCCStatusLocked_PCActive': '<S96>:4' */
                TCCR_ac_B.VeTCCC_r_RampFactorInit = 0.0F;

                /* Outputs for Function Call SubSystem: '<S42>/Locked' */
                /* Event: '<S96>:105' */
                TCCR_ac_Locked(&TCCR_ac_B.Merge2_l, &TCCR_ac_B.Merge1_d,
                               &TCCR_ac_B.Merge3, &TCCR_ac_B.VeTCCC_e_ClchStLCC,
                               &TCCR_ac_B.VeTCCR_b_OpenRFStck,
                               &TCCR_ac_B.VeTCCR_r_OpenRFStckRatio,
                               &TCCR_ac_B.VeTCCR_e_LCCMngSt);

                /* End of Outputs for SubSystem: '<S42>/Locked' */
            }
            else
            {
                /* PressureControl Inactive */
                if (rtb_VeTCCR_b_PresCntrlRel)
                {
                    /* Transition: '<S96>:65' */
                    TCCR_ac_DW.is_c3_TCCR_ac = TCCR_ac_IN_LCCTorq_RampDown;

                    /* Entry 'LCCTorq_RampDown': '<S96>:60' */
                    /* VeTCCC_e_ClchStLCC=CeHCCR_e_ClReleased; */
                    TCCR_ac_B.VeTCCR_M_TimpInit = rtb_Sum1_gk;
                    TCCR_ac_B.VeTCCC_r_RampFactorInit =
                        TCCR_ac_DW.UnitDelay12_DSTATE;

                    /* Outputs for Function Call SubSystem: '<S42>/Opening' */
                    /* OpeningRampFactor is 0-->1 */
                    /* Event: '<S96>:104' */
                    TCCR_ac_Opening
                        (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
                         TCCR_ac_B.Merge[0], TCCR_ac_B.VeTCCR_M_TimpInit,
                         TCCR_ac_B.VeTCCR_M_TlfMod_Timp,
                         TCCR_ac_B.VeTCCC_r_RampFactorInit,
                         TCCR_ac_B.Comparison2, &TCCR_ac_B.Merge2_l,
                         &TCCR_ac_B.Merge1_d, &TCCR_ac_B.Merge3,
                         &TCCR_ac_B.VeTCCC_e_ClchStLCC,
                         &TCCR_ac_B.VeTCCR_b_OpenRFStck,
                         &TCCR_ac_B.VeTCCR_r_OpenRFStckRatio,
                         &TCCR_ac_B.VeTCCR_e_LCCMngSt, &TCCR_ac_DW.Opening);

                    /* End of Outputs for SubSystem: '<S42>/Opening' */
                }
                else
                {
                    /* Outputs for Function Call SubSystem: '<S42>/Closing' */
                    /* LCCTorq blending to SumTrq -Timp */
                    /* Event: '<S96>:103' */
                    TCCR_ac_Closing
                        (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
                         TCCR_ac_B.Merge[0], TCCR_ac_B.VeTCCR_M_TimpInit,
                         TCCR_ac_B.VeTCCC_r_RampFactorInit, &TCCR_ac_B.Merge2_l,
                         &TCCR_ac_B.Merge1_d, &TCCR_ac_B.Merge3,
                         &TCCR_ac_B.VeTCCC_e_ClchStLCC,
                         &TCCR_ac_B.VeTCCR_b_OpenRFStck,
                         &TCCR_ac_B.VeTCCR_r_OpenRFStckRatio,
                         &TCCR_ac_B.VeTCCR_e_LCCMngSt);

                    /* End of Outputs for SubSystem: '<S42>/Closing' */
                }
            }
            break;
        }
    }

    /* End of Chart: '<S42>/Stateflow Chart' */

    /* RelationalOperator: '<S13>/Comparison3' */
    rtb_Comparison3_lu = (((uint32)TCCR_ac_B.VeTCCC_e_ClchStLCC) ==
                          CeHCCR_e_ClLocked);

    /* Switch: '<S13>/Switch' incorporates:
     *  Constant: '<S13>/Constant Value'
     *  Constant: '<S36>/Calib'
     */
    if (rtb_Switch2_jp)
    {
        rtb_Sum1_oz = 0.0F;
    }
    else
    {
        rtb_Sum1_oz = KeTCCR_k_LCCTrqFiltCoeff;
    }

    /* End of Switch: '<S13>/Switch' */

    /* Outputs for Atomic SubSystem: '<S13>/GradientLimiter1' */
    /* Sum: '<S34>/Sum2' incorporates:
     *  UnitDelay: '<S34>/Unit Delay'
     */
    rtb_Sum1_gk = rtb_Sum1_oz - TCCR_ac_DW.UnitDelay_DSTATE_oi;

    /* Outputs for Atomic SubSystem: '<S34>/Limiter' */
    /* Switch: '<S58>/Switch1' incorporates:
     *  Constant: '<S37>/Calib'
     *  RelationalOperator: '<S58>/Relational Operator'
     */
    if (KeTCCR_k_LCCTrqFiltCoeffRmpLU < rtb_Sum1_gk)
    {
        /* Switch: '<S103>/Switch1' */
        rtb_Sum1_gk = KeTCCR_k_LCCTrqFiltCoeffRmpLU;
    }

    /* End of Switch: '<S58>/Switch1' */

    /* Switch: '<S58>/Switch' incorporates:
     *  Constant: '<S13>/Constant Value4'
     *  RelationalOperator: '<S58>/Relational Operator1'
     */
    if (rtb_Sum1_gk <= -1.0F)
    {
        rtb_Sum1_gk = -1.0F;
    }

    /* End of Switch: '<S58>/Switch' */
    /* End of Outputs for SubSystem: '<S34>/Limiter' */

    /* Sum: '<S34>/Sum3' incorporates:
     *  UnitDelay: '<S34>/Unit Delay'
     */
    TCCR_ac_DW.UnitDelay_DSTATE_oi += rtb_Sum1_gk;

    /* End of Outputs for SubSystem: '<S13>/GradientLimiter1' */

    /* Sum: '<S45>/Sum1' incorporates:
     *  Lookup_n-D: '<S176>/Vector'
     *  SignalConversion generated from: '<S1>/VeTTQR_M_LoadTorqFront_Cmnd'
     *  Switch: '<S4>/Switch4'
     */
    rtb_Sum1_oz = look2_iflf_binlca_16a(rtb_Switch4,
        rtb_TmpSignalConversionAtVeTTQR_M_LoadTo, ((const float32 *)
        &(KxTCCR_M_TLFLimOffset[0])), ((const float32 *)&(KyTCCR_M_TLFLimOffset
        [0])), ((const float32 *)&(KtTCCR_M_TLFLimOffset[0])),
        TCCR_ac_ConstP.Vector_maxIndex_i, 3U) +
        rtb_TmpSignalConversionAtVeTTQR_M_LoadTo;

    /* Outputs for Atomic SubSystem: '<S45>/EdgeRising1' */
    /* Logic: '<S171>/OR1' incorporates:
     *  UnitDelay: '<S171>/Unit Delay'
     */
    rtb_VeTCCR_b_PresCntrlRel = !TCCR_ac_DW.UnitDelay_DSTATE_pn;

    /* Update for UnitDelay: '<S171>/Unit Delay' incorporates:
     *  Constant: '<S45>/Constant1'
     */
    TCCR_ac_DW.UnitDelay_DSTATE_pn = true;

    /* Outputs for Atomic SubSystem: '<S45>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S170>/Switch1' incorporates:
     *  Logic: '<S171>/AND'
     *  Lookup_n-D: '<S180>/Vector'
     *  Product: '<S170>/Multiplication'
     *  Sum: '<S170>/Subtraction'
     *  Sum: '<S170>/Summation'
     *  UnitDelay: '<S45>/Unit Delay'
     */
    if (rtb_VeTCCR_b_PresCntrlRel)
    {
        rtb_Sum1_gk = rtb_Sum1_oz;
    }
    else
    {
        rtb_Sum1_gk = ((rtb_Sum1_oz - TCCR_ac_DW.UnitDelay_DSTATE_l) *
                       look1_iflf_binlca_16a(TCCR_ac_B.Merge[2], ((const float32
                          *)&(KxTCCR_k_TLFSpdRatFiltCoeff[0])), ((const float32 *)
                         &(KtTCCR_k_TLFSpdRatFiltCoeff[0])), 17U)) +
            TCCR_ac_DW.UnitDelay_DSTATE_l;
    }

    /* End of Switch: '<S170>/Switch1' */
    /* End of Outputs for SubSystem: '<S45>/Digital Lowpass Reset Enabled' */
    /* End of Outputs for SubSystem: '<S45>/EdgeRising1' */

    /* MinMax: '<S45>/MinMax3' incorporates:
     *  UnitDelay: '<S45>/Unit Delay'
     */
    TCCR_ac_DW.UnitDelay_DSTATE_l = fmaxf(rtb_Sum1_oz, rtb_Sum1_gk);

    /* Switch: '<S45>/Switch1' incorporates:
     *  Constant: '<S175>/Calib'
     */
    if (KeTCCR_b_UseTimpRaw4LCCStat)
    {
        /* Switch: '<S45>/Switch1' */
        rtb_Sum1_oz = TCCR_ac_B.Merge[0];
    }
    else
    {
        /* Switch: '<S45>/Switch1' incorporates:
         *  MinMax: '<S45>/MinMax'
         *  UnitDelay: '<S45>/Unit Delay'
         */
        rtb_Sum1_oz = fminf(TCCR_ac_B.Merge[0], TCCR_ac_DW.UnitDelay_DSTATE_l);
    }

    /* End of Switch: '<S45>/Switch1' */

    /* Logic: '<S43>/Logical1' incorporates:
     *  Constant: '<S136>/Constant'
     *  Constant: '<S137>/Constant'
     *  Constant: '<S138>/Calib'
     *  Constant: '<S140>/Calib'
     *  Logic: '<S43>/Logical3'
     *  RelationalOperator: '<S43>/Comparison1'
     *  RelationalOperator: '<S43>/Comparison3'
     *  RelationalOperator: '<S43>/Comparison4'
     */
    rtb_VeTCCR_b_PresCntrlRel = (((KeTCCR_b_TCCTrqErrBlnd2ZeroEnbl) &&
        (rtb_Sum1_oz <= KeTCCR_M_TCCBlnd2ZeroTimpThrsh)) && ((((uint32)
        rtb_TmpSignalConversionAtVeHSER_e_RngS_p) == CeHSER_e_ShiftToNeutEngOn) ||
        (((uint32)rtb_TmpSignalConversionAtVeHSER_e_RngS_p) == CeHSER_e_Neutral)));

    /* Outputs for Atomic SubSystem: '<S43>/EdgeBi1' */
    /* RelationalOperator: '<S135>/Not Equal' incorporates:
     *  UnitDelay: '<S135>/Unit Delay'
     */
    rtb_UnitDelay_cj = (rtb_VeTCCR_b_PresCntrlRel !=
                        TCCR_ac_DW.UnitDelay_DSTATE_o5t);

    /* Update for UnitDelay: '<S135>/Unit Delay' */
    TCCR_ac_DW.UnitDelay_DSTATE_o5t = rtb_VeTCCR_b_PresCntrlRel;

    /* End of Outputs for SubSystem: '<S43>/EdgeBi1' */

    /* Switch: '<S134>/Switch2' incorporates:
     *  Switch: '<S134>/Switch3'
     *  Switch: '<S43>/Switch'
     *  UnitDelay: '<S134>/Unit Delay'
     *  UnitDelay: '<S43>/Unit Delay1'
     */
    if (rtb_UnitDelay_cj)
    {
        TCCR_ac_DW.UnitDelay_DSTATE_k = TCCR_ac_DW.UnitDelay1_DSTATE;

        /* Switch: '<S134>/Switch1' incorporates:
         *  Constant: '<S134>/Constant Value4'
         *  UnitDelay: '<S134>/Unit Delay'
         *  UnitDelay: '<S134>/Unit Delay3'
         *  UnitDelay: '<S43>/Unit Delay1'
         */
        TCCR_ac_DW.UnitDelay3_DSTATE_c = 0.0F;
    }
    else
    {
        if (rtb_VeTCCR_b_PresCntrlRel)
        {
            /* Switch: '<S43>/Switch' incorporates:
             *  Constant: '<S141>/Calib'
             */
            rtb_Sum1_gk = KeTCCR_t_TCCTrqErrBlndTime2Zero;
        }
        else
        {
            /* Switch: '<S43>/Switch' incorporates:
             *  Constant: '<S142>/Calib'
             */
            rtb_Sum1_gk = KeTCCR_t_TCCTrqErrBlndBckTime;
        }

        /* MinMax: '<S134>/Maximum' incorporates:
         *  Constant: '<S139>/Calib'
         */
        rtb_Sum1_gk = fmaxf(HeTCCR_t_MedTEB_dT, rtb_Sum1_gk);

        /* Outputs for Atomic SubSystem: '<S134>/Protected Division1' */
        /* Switch: '<S143>/Switch1' incorporates:
         *  Constant: '<S139>/Calib'
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
        if ((HeTCCR_t_MedTEB_dT != 0.0F) && (rtb_Sum1_gk != 0.0F))
        {
            /* Switch: '<S143>/Switch1' incorporates:
             *  Product: '<S143>/Division'
             */
            rtb_Sum1_gk = HeTCCR_t_MedTEB_dT / rtb_Sum1_gk;
        }
        else if (HeTCCR_t_MedTEB_dT > 0.0F)
        {
            /* Switch: '<S143>/Switch2' incorporates:
             *  Constant: '<S143>/MAXFLOAT'
             *  Switch: '<S143>/Switch1'
             */
            rtb_Sum1_gk = 3.402823466E+38F;
        }
        else if (HeTCCR_t_MedTEB_dT < 0.0F)
        {
            /* Switch: '<S143>/Switch3' incorporates:
             *  Constant: '<S143>/MINFLOAT'
             *  Switch: '<S143>/Switch1'
             *  Switch: '<S143>/Switch2'
             */
            rtb_Sum1_gk = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S143>/Switch1' incorporates:
             *  Constant: '<S143>/Constant Value4'
             *  Switch: '<S143>/Switch2'
             *  Switch: '<S143>/Switch3'
             */
            rtb_Sum1_gk = 0.0F;
        }

        /* End of Switch: '<S143>/Switch1' */
        /* End of Outputs for SubSystem: '<S134>/Protected Division1' */

        /* Switch: '<S134>/Switch1' incorporates:
         *  Constant: '<S134>/Constant Value2'
         *  Constant: '<S134>/Constant Value3'
         *  MinMax: '<S134>/MinMax'
         *  Sum: '<S134>/Summation1'
         *  UnitDelay: '<S134>/Unit Delay1'
         *  UnitDelay: '<S134>/Unit Delay3'
         */
        if (!TCCR_ac_DW.UnitDelay1_DSTATE_o)
        {
            TCCR_ac_DW.UnitDelay3_DSTATE_c = 1.0F;
        }

        TCCR_ac_DW.UnitDelay3_DSTATE_c = fminf(TCCR_ac_DW.UnitDelay3_DSTATE_c +
            rtb_Sum1_gk, 1.0F);
    }

    /* End of Switch: '<S134>/Switch2' */

    /* Switch: '<S43>/Switch1' incorporates:
     *  Constant: '<S43>/Constant Value'
     *  Sum: '<S44>/Sum6'
     */
    if (rtb_VeTCCR_b_PresCntrlRel)
    {
        rtb_Sum1_gk = 0.0F;
    }
    else
    {
        rtb_Sum1_gk = ((rtb_TmpSignalConversionAtVeTTQR_M_LoadTo - rtb_Sum1_oz)
                       - rtb_Switch_b) - rtb_Product1_pc;
    }

    /* End of Switch: '<S43>/Switch1' */

    /* Sum: '<S134>/Summation' incorporates:
     *  Constant: '<S134>/Constant Value'
     *  Product: '<S134>/Multiplication'
     *  Product: '<S134>/Multiplication3'
     *  Sum: '<S134>/Subtraction'
     *  UnitDelay: '<S134>/Unit Delay'
     *  UnitDelay: '<S134>/Unit Delay3'
     *  UnitDelay: '<S43>/Unit Delay1'
     */
    TCCR_ac_DW.UnitDelay1_DSTATE = ((1.0F - TCCR_ac_DW.UnitDelay3_DSTATE_c) *
        TCCR_ac_DW.UnitDelay_DSTATE_k) + (TCCR_ac_DW.UnitDelay3_DSTATE_c *
        rtb_Sum1_gk);

    /* Outputs for Atomic SubSystem: '<S13>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S23>/Switch1' incorporates:
     *  Constant: '<S13>/Constant Value3'
     *  Product: '<S23>/Multiplication'
     *  Sum: '<S23>/Subtraction'
     *  Sum: '<S23>/Summation'
     *  UnitDelay: '<S23>/Unit Delay'
     *  UnitDelay: '<S34>/Unit Delay'
     *  UnitDelay: '<S43>/Unit Delay1'
     */
    if (rtb_Switch2_jp)
    {
        TCCR_ac_DW.UnitDelay_DSTATE_c = 0.0F;
    }
    else
    {
        TCCR_ac_DW.UnitDelay_DSTATE_c += (TCCR_ac_DW.UnitDelay1_DSTATE -
            TCCR_ac_DW.UnitDelay_DSTATE_c) * TCCR_ac_DW.UnitDelay_DSTATE_oi;
    }

    /* End of Switch: '<S23>/Switch1' */
    /* End of Outputs for SubSystem: '<S13>/Digital Lowpass Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S38>/Hysteresis1' */
    /* Switch: '<S59>/Switch1' incorporates:
     *  Constant: '<S59>/Constant Value'
     *  Constant: '<S66>/Calib'
     *  Constant: '<S68>/Calib'
     *  RelationalOperator: '<S59>/Greater  Than'
     *  RelationalOperator: '<S59>/Greater  Than1'
     *  UnitDelay: '<S59>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeTTQR_M_LoadTo > KeTCCR_M_LoadTorqFrontRSP)
    {
        TCCR_ac_DW.UnitDelay_DSTATE_cm = true;
    }
    else
    {
        TCCR_ac_DW.UnitDelay_DSTATE_cm =
            ((rtb_TmpSignalConversionAtVeTTQR_M_LoadTo >=
              KeTCCR_M_LoadTorqFrontLSP) && (TCCR_ac_DW.UnitDelay_DSTATE_cm));
    }

    /* End of Switch: '<S59>/Switch1' */
    /* End of Outputs for SubSystem: '<S38>/Hysteresis1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/TCCR_FUNC_MedTEB' */

    /* Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd' */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value(&rtb_Switch1_os);

    /* Outputs for Function Call SubSystem: '<Root>/TCCR_FUNC_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TCCC_Process_TC'
     */
    /* Merge: '<S24>/Merge' incorporates:
     *  Constant: '<S22>/Calib'
     *  Constant: '<S63>/Calib'
     *  DataTypeConversion: '<S11>/Data Type Conversion'
     *  Product: '<S38>/Product'
     *  Selector: '<S11>/Selector'
     *  Selector: '<S11>/Selector1'
     *  Selector: '<S12>/Selector'
     */
    rtb_TmpSignalConversionAtVeTTQR_M_LoadTo = (((float32)
        Rte_Prm_KeTSXR_r_FDRf_KeTSXR_r_FDRf()) * ((float32)
        (Rte_Prm_KaTSXR_r_TCMGearRatios_KaTSXR_r_TCMGearRatios())
        [rtb_TmpSignalConversionAtVeTRNR_e_Targ_i])) * rtb_Switch1_os;

    /* Switch: '<S24>/Switch1' incorporates:
     *  Constant: '<S60>/Calib'
     *  Sum: '<S72>/Sum'
     */
    rtb_Switch1_os = KeTCCR_n_VTurbUpBnd +
        rtb_TmpSignalConversionAtVeTTQR_M_LoadTo;

    /* Sum: '<S72>/Sum7' incorporates:
     *  Constant: '<S62>/Calib'
     */
    rtb_Product1_pc = rtb_Switch1_os - KeTCCR_n_VTurbUpBndLSP;

    /* Outputs for Atomic SubSystem: '<S72>/Hysteresis2' */
    /* Switch: '<S78>/Switch1' incorporates:
     *  Constant: '<S64>/Calib'
     *  Constant: '<S78>/Constant Value'
     *  RelationalOperator: '<S78>/Greater  Than'
     *  RelationalOperator: '<S78>/Greater  Than1'
     *  Sum: '<S72>/Sum6'
     *  UnitDelay: '<S78>/Unit Delay'
     */
    if (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo > (rtb_Switch1_os +
            KeTCCR_n_VTurbUpBndRSP))
    {
        TCCR_ac_DW.UnitDelay_DSTATE_bo = true;
    }
    else
    {
        TCCR_ac_DW.UnitDelay_DSTATE_bo =
            ((TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo >=
              rtb_Product1_pc) && (TCCR_ac_DW.UnitDelay_DSTATE_bo));
    }

    /* End of Switch: '<S78>/Switch1' */
    /* End of Outputs for SubSystem: '<S72>/Hysteresis2' */

    /* RelationalOperator: '<S72>/Comparison2' */
    rtb_Comparison2_e = (rtb_Product1_pc >
                         TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo);

    /* Sum: '<S72>/Sum1' incorporates:
     *  Constant: '<S61>/Calib'
     */
    rtb_TmpSignalConversionAtVeTTQR_M_LoadTo -= KeTCCR_n_VTurbLowBnd;

    /* Sum: '<S72>/Sum8' incorporates:
     *  Constant: '<S67>/Calib'
     */
    rtb_Switch1_os = rtb_TmpSignalConversionAtVeTTQR_M_LoadTo +
        KeTCCR_n_VTurbLowBndRSP;

    /* UnitDelay: '<S332>/Unit Delay' incorporates:
     *  RelationalOperator: '<S72>/Comparison1'
     */
    rtb_UnitDelay_cj = (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo >
                        rtb_Switch1_os);

    /* Outputs for Atomic SubSystem: '<S72>/Hysteresis1' */
    /* Switch: '<S77>/Switch1' incorporates:
     *  Constant: '<S65>/Calib'
     *  Constant: '<S77>/Constant Value'
     *  RelationalOperator: '<S77>/Greater  Than'
     *  RelationalOperator: '<S77>/Greater  Than1'
     *  Sum: '<S72>/Sum9'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    if (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo > rtb_Switch1_os)
    {
        TCCR_ac_DW.UnitDelay_DSTATE_i2 = true;
    }
    else
    {
        TCCR_ac_DW.UnitDelay_DSTATE_i2 =
            ((TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo >=
              (rtb_TmpSignalConversionAtVeTTQR_M_LoadTo -
               KeTCCR_n_VTurbLowBndLSP)) && (TCCR_ac_DW.UnitDelay_DSTATE_i2));
    }

    /* End of Switch: '<S77>/Switch1' */
    /* End of Outputs for SubSystem: '<S72>/Hysteresis1' */

    /* If: '<S72>/If' incorporates:
     *  Logic: '<S72>/Logical'
     *  Logic: '<S72>/Logical1'
     *  Logic: '<S72>/Logical2'
     *  Logic: '<S72>/Logical3'
     *  Logic: '<S72>/Logical5'
     *  Logic: '<S72>/Logical6'
     *  Logic: '<S72>/Logical7'
     *  Logic: '<S72>/Logical8'
     *  Logic: '<S72>/Logical9'
     *  UnitDelay: '<S77>/Unit Delay'
     *  UnitDelay: '<S78>/Unit Delay'
     */
    if (((TCCR_ac_DW.UnitDelay_DSTATE_bo) && ((!rtb_Comparison2_e) &&
            rtb_UnitDelay_cj)) && (TCCR_ac_DW.UnitDelay_DSTATE_i2))
    {
        /* Outputs for IfAction SubSystem: '<S72>/POSITIVE' incorporates:
         *  ActionPort: '<S80>/Action Port'
         */
        /* Merge: '<S72>/Merge' incorporates:
         *  Constant: '<S80>/Constant Value7'
         *  SignalConversion generated from: '<S80>/CompareStatus'
         */
        TCCR_ac_B.Merge_l = 1.0F;

        /* End of Outputs for SubSystem: '<S72>/POSITIVE' */
    }
    else if (rtb_Comparison2_e && rtb_UnitDelay_cj)
    {
        /* Outputs for IfAction SubSystem: '<S72>/EQUAL' incorporates:
         *  ActionPort: '<S76>/Action Port'
         */
        /* Merge: '<S72>/Merge' incorporates:
         *  Constant: '<S76>/Constant Value7'
         *  SignalConversion generated from: '<S76>/CompareStatus'
         */
        TCCR_ac_B.Merge_l = 0.0F;

        /* End of Outputs for SubSystem: '<S72>/EQUAL' */
    }
    else
    {
        if (((!TCCR_ac_DW.UnitDelay_DSTATE_bo) && (rtb_Comparison2_e &&
                (!rtb_UnitDelay_cj))) && (!TCCR_ac_DW.UnitDelay_DSTATE_i2))
        {
            /* Outputs for IfAction SubSystem: '<S72>/NEGATIVE' incorporates:
             *  ActionPort: '<S79>/Action Port'
             */
            /* Merge: '<S72>/Merge' incorporates:
             *  Constant: '<S79>/Constant Value7'
             *  SignalConversion generated from: '<S79>/CompareStatus'
             */
            TCCR_ac_B.Merge_l = -1.0F;

            /* End of Outputs for SubSystem: '<S72>/NEGATIVE' */
        }
    }

    /* End of If: '<S72>/If' */

    /* If: '<S38>/If2' incorporates:
     *  Constant: '<S38>/Constant Value10'
     *  Constant: '<S38>/Constant Value11'
     *  Constant: '<S38>/Constant Value12'
     *  Constant: '<S38>/Constant Value13'
     *  Constant: '<S38>/Constant Value14'
     *  Constant: '<S38>/Constant Value15'
     *  Logic: '<S38>/Logical'
     *  Logic: '<S38>/Logical10'
     *  Logic: '<S38>/Logical11'
     *  Logic: '<S38>/Logical12'
     *  Logic: '<S38>/Logical2'
     *  Logic: '<S38>/Logical4'
     *  Logic: '<S38>/Logical6'
     *  Logic: '<S38>/Logical7'
     *  RelationalOperator: '<S38>/Comparison10'
     *  RelationalOperator: '<S38>/Comparison5'
     *  RelationalOperator: '<S38>/Comparison6'
     *  RelationalOperator: '<S38>/Comparison7'
     *  RelationalOperator: '<S38>/Comparison8'
     *  RelationalOperator: '<S38>/Comparison9'
     *  UnitDelay: '<S59>/Unit Delay'
     */
    if ((TCCR_ac_DW.UnitDelay_DSTATE_cm) && ((TCCR_ac_B.Merge_l == 1.0F) ||
            (TCCR_ac_B.Merge_l == 0.0F)))
    {
        /* Outputs for IfAction SubSystem: '<S38>/LCCNCSgn_Positive' incorporates:
         *  ActionPort: '<S70>/Action Port'
         */
        /* Merge: '<S38>/Merge3' incorporates:
         *  Constant: '<S70>/Constant Value'
         *  SignalConversion generated from: '<S70>/LCCNCSgn'
         */
        TCCR_ac_B.VeTCCR_r_LCCNCSgn = 1.0F;

        /* Merge: '<S38>/Merge4' incorporates:
         *  Constant: '<S74>/Constant'
         *  SignalConversion generated from: '<S70>/LCCNCSgnEnum'
         */
        TCCR_ac_B.Merge4 = CeTMMR_e_PositiveNCSign;

        /* End of Outputs for SubSystem: '<S38>/LCCNCSgn_Positive' */
    }
    else
    {
        /* Logic: '<S38>/Logical7' incorporates:
         *  Logic: '<S38>/Logical9'
         */
        rtb_Comparison2_e = !TCCR_ac_DW.UnitDelay_DSTATE_cm;
        if (rtb_Comparison2_e && ((TCCR_ac_B.Merge_l == 0.0F) ||
                                  (TCCR_ac_B.Merge_l == -1.0F)))
        {
            /* Outputs for IfAction SubSystem: '<S38>/LCCNCSgn_Negative' incorporates:
             *  ActionPort: '<S69>/Action Port'
             */
            /* Merge: '<S38>/Merge3' incorporates:
             *  Constant: '<S69>/Constant Value'
             *  SignalConversion generated from: '<S69>/LCCNCSgn'
             */
            TCCR_ac_B.VeTCCR_r_LCCNCSgn = -1.0F;

            /* Merge: '<S38>/Merge4' incorporates:
             *  Constant: '<S73>/Constant'
             *  SignalConversion generated from: '<S69>/LCCNCSgnEnum'
             */
            TCCR_ac_B.Merge4 = CeTMMR_e_NegativeNCSign;

            /* End of Outputs for SubSystem: '<S38>/LCCNCSgn_Negative' */
        }
        else
        {
            if (((TCCR_ac_DW.UnitDelay_DSTATE_cm) && (TCCR_ac_B.Merge_l == -1.0F))
                || (rtb_Comparison2_e && (TCCR_ac_B.Merge_l == 1.0F)))
            {
                /* Outputs for IfAction SubSystem: '<S38>/LCCNCSgn_Unknown' incorporates:
                 *  ActionPort: '<S71>/Action Port'
                 */
                /* Merge: '<S38>/Merge3' incorporates:
                 *  Constant: '<S71>/Constant Value'
                 *  SignalConversion generated from: '<S71>/LCCNCSgn'
                 */
                TCCR_ac_B.VeTCCR_r_LCCNCSgn = 0.0F;

                /* Merge: '<S38>/Merge4' incorporates:
                 *  Constant: '<S75>/Constant'
                 *  SignalConversion generated from: '<S71>/LCCNCSgnEnum'
                 */
                TCCR_ac_B.Merge4 = CeTMMR_e_UnknownNCSign;

                /* End of Outputs for SubSystem: '<S38>/LCCNCSgn_Unknown' */
            }
        }
    }

    /* End of If: '<S38>/If2' */

    /* UnitDelay: '<S332>/Unit Delay' incorporates:
     *  Constant: '<S24>/Constant Value'
     *  RelationalOperator: '<S24>/Comparison5'
     */
    rtb_UnitDelay_cj = (TCCR_ac_B.VeTCCR_r_LCCNCSgn != 0.0F);

    /* Switch: '<S24>/Switch3' incorporates:
     *  Inport: '<Root>/VeHTDR_M_Clch1_TCR_Actl'
     *  Inport: '<Root>/VeHTDR_M_Clch2_TCR_Actl'
     */
    if (rtb_UnitDelay_cj)
    {
        /* Merge: '<S24>/Merge' */
        rtb_TmpSignalConversionAtVeTTQR_M_LoadTo = TCCR_ac_B.VeTCCR_r_LCCNCSgn;
    }
    else
    {
        (void)Rte_Read_VeHTDR_M_Clch1_TCR_Actl_Value(&rtb_UnitDelay_jo);
        (void)Rte_Read_VeHTDR_M_Clch2_TCR_Actl_Value(&rtb_Switch2_pq);

        /* Switch: '<S4>/Switch1' incorporates:
         *  Constant: '<S8>/Calib'
         *  Inport: '<Root>/VeHTDR_M_Clch1_TCR_Actl'
         *  Inport: '<Root>/VeHTDR_M_Clch2_TCR_Actl'
         */
        if (HeTCCR_b_UseHTDRC2_TcR)
        {
            /* Merge: '<S24>/Merge' */
            rtb_TmpSignalConversionAtVeTTQR_M_LoadTo = rtb_Switch2_pq;
        }
        else
        {
            /* Merge: '<S24>/Merge' */
            rtb_TmpSignalConversionAtVeTTQR_M_LoadTo = rtb_UnitDelay_jo;
        }

        /* End of Switch: '<S4>/Switch1' */
    }

    /* End of Switch: '<S24>/Switch3' */

    /* UnitDelay: '<S24>/Unit Delay' */
    rtb_UnitDelay_jo = TCCR_ac_DW.UnitDelay_DSTATE_po;

    /* If: '<S24>/If' */
    if (rtb_TmpSignalConversionAtVeTTQR_M_LoadTo > 0.0F)
    {
        /* Outputs for IfAction SubSystem: '<S24>/u1_greater_zero' incorporates:
         *  ActionPort: '<S52>/Action Port'
         */
        /* Merge: '<S24>/Merge' incorporates:
         *  Abs: '<S52>/Abs'
         *  UnitDelay: '<S24>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_LoadTo = fabsf
            (TCCR_ac_DW.UnitDelay_DSTATE_po);

        /* End of Outputs for SubSystem: '<S24>/u1_greater_zero' */
    }
    else if (rtb_TmpSignalConversionAtVeTTQR_M_LoadTo < 0.0F)
    {
        /* Outputs for IfAction SubSystem: '<S24>/u1_less_zero' incorporates:
         *  ActionPort: '<S53>/Action Port'
         */
        /* Switch: '<S53>/Switch2' incorporates:
         *  Abs: '<S53>/Abs'
         *  UnitDelay: '<S24>/Unit Delay'
         */
        rtb_Switch2_pq = fabsf(TCCR_ac_DW.UnitDelay_DSTATE_po);

        /* Switch: '<S53>/Switch2' incorporates:
         *  Constant: '<S53>/Constant Value1'
         *  RelationalOperator: '<S53>/Less  Than'
         */
        if (rtb_Switch2_pq <= 0.0F)
        {
            /* Switch: '<S53>/Switch2' incorporates:
             *  Constant: '<S53>/Constant Value2'
             */
            rtb_Switch2_pq = 0.1F;
        }

        /* End of Switch: '<S53>/Switch2' */

        /* Merge: '<S24>/Merge' incorporates:
         *  Gain: '<S53>/Gain'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_LoadTo = -rtb_Switch2_pq;

        /* End of Outputs for SubSystem: '<S24>/u1_less_zero' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S24>/else' incorporates:
         *  ActionPort: '<S51>/Action Port'
         */
        /* Merge: '<S24>/Merge' incorporates:
         *  Inport: '<S51>/In1'
         *  UnitDelay: '<S24>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_LoadTo =
            TCCR_ac_DW.UnitDelay_DSTATE_po;

        /* End of Outputs for SubSystem: '<S24>/else' */
    }

    /* End of If: '<S24>/If' */

    /* Switch: '<S24>/Switch2' incorporates:
     *  Constant: '<S7>/Calib'
     *  Logic: '<S24>/Logical1'
     *  Selector: '<S4>/Selector'
     *  Switch: '<S13>/Switch1'
     *  UnitDelay: '<S24>/Unit Delay'
     */
    if (rtb_Comparison3_lu || rtb_UnitDelay_cj)
    {
        TCCR_ac_DW.UnitDelay_DSTATE_po =
            rtb_TmpSignalConversionAtVeTTQR_M_LoadTo;
    }
    else if (tmpRead_2[((sint32)HeTCCR_n_SlipSpdFailIdx) - 1])
    {
        /* UnitDelay: '<S24>/Unit Delay' incorporates:
         *  Constant: '<S13>/Constant Value5'
         *  Switch: '<S13>/Switch1'
         */
        TCCR_ac_DW.UnitDelay_DSTATE_po = 0.0F;
    }
    else
    {
        /* UnitDelay: '<S24>/Unit Delay' incorporates:
         *  Sum: '<S13>/Sum1'
         *  Switch: '<S13>/Switch1'
         */
        TCCR_ac_DW.UnitDelay_DSTATE_po = rtb_Switch4 -
            TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo;
    }

    /* End of Switch: '<S24>/Switch2' */

    /* Logic: '<S24>/Logical3' incorporates:
     *  Constant: '<S24>/Constant Value15'
     *  Product: '<S24>/Multiplication2'
     *  RelationalOperator: '<S24>/Less  Than'
     *  UnitDelay: '<S24>/Unit Delay'
     */
    rtb_Switch2_jp = (rtb_Comparison3_lu || ((TCCR_ac_DW.UnitDelay_DSTATE_po *
                        rtb_UnitDelay_jo) < 0.0F));

    /* Outputs for Atomic SubSystem: '<S24>/IntegratorK Reset Enabled Limited1' */
    /* Switch: '<S46>/Switch' */
    if (rtb_Switch2_jp)
    {
        /* Switch: '<S46>/Switch' incorporates:
         *  Constant: '<S24>/Constant Value11'
         */
        rtb_Switch_b = 0.0F;
    }
    else
    {
        /* Switch: '<S46>/Switch' incorporates:
         *  Constant: '<S24>/Constant Value10'
         *  Constant: '<S47>/Calib'
         *  Product: '<S46>/Multiplication'
         *  Sum: '<S46>/Sum//Sub'
         *  UnitDelay: '<S24>/Unit Delay'
         *  UnitDelay: '<S46>/Unit Delay'
         */
        rtb_Switch_b = ((TCCR_ac_DW.UnitDelay_DSTATE_po * HeTCCR_t_MedTEB_dT) *
                        6.0F) + TCCR_ac_DW.UnitDelay_DSTATE_kg;
    }

    /* End of Switch: '<S46>/Switch' */

    /* Outputs for Atomic SubSystem: '<S46>/Limiter' */
    /* Switch: '<S54>/Switch1' incorporates:
     *  Constant: '<S49>/Calib'
     *  RelationalOperator: '<S54>/Relational Operator'
     */
    if (KeTCCR_phi_TorqSignThresh < rtb_Switch_b)
    {
        /* UnitDelay: '<S84>/Unit Delay' */
        rtb_Switch_b = KeTCCR_phi_TorqSignThresh;
    }

    /* End of Switch: '<S54>/Switch1' */

    /* Switch: '<S54>/Switch' incorporates:
     *  Constant: '<S49>/Calib'
     *  Gain: '<S24>/Negation2'
     *  RelationalOperator: '<S54>/Relational Operator1'
     *  UnitDelay: '<S46>/Unit Delay'
     */
    if (rtb_Switch_b > (-KeTCCR_phi_TorqSignThresh))
    {
        TCCR_ac_DW.UnitDelay_DSTATE_kg = rtb_Switch_b;
    }
    else
    {
        TCCR_ac_DW.UnitDelay_DSTATE_kg = -KeTCCR_phi_TorqSignThresh;
    }

    /* End of Switch: '<S54>/Switch' */
    /* End of Outputs for SubSystem: '<S46>/Limiter' */
    /* End of Outputs for SubSystem: '<S24>/IntegratorK Reset Enabled Limited1' */

    /* Outputs for Atomic SubSystem: '<S24>/Timer Retrigger Reset Enabled' */
    /* Switch: '<S50>/Switch1' incorporates:
     *  Constant: '<S47>/Calib'
     *  Constant: '<S48>/Calib'
     *  Constant: '<S50>/Constant Value4'
     *  MinMax: '<S50>/Maximum'
     *  Sum: '<S50>/Subtraction'
     *  UnitDelay: '<S50>/Unit Delay'
     */
    if (rtb_Switch2_jp)
    {
        TCCR_ac_DW.UnitDelay_DSTATE_do = KeTCCR_t_TorqSignTimeout;
    }
    else
    {
        TCCR_ac_DW.UnitDelay_DSTATE_do = fmaxf(TCCR_ac_DW.UnitDelay_DSTATE_do -
            HeTCCR_t_MedTEB_dT, 0.0F);
    }

    /* End of Switch: '<S50>/Switch1' */
    /* End of Outputs for SubSystem: '<S24>/Timer Retrigger Reset Enabled' */

    /* Switch: '<S24>/Switch' incorporates:
     *  Constant: '<S49>/Calib'
     *  Constant: '<S50>/Constant Value2'
     *  Gain: '<S24>/Negation2'
     *  Logic: '<S24>/NOT'
     *  Logic: '<S24>/OR1'
     *  RelationalOperator: '<S24>/Equal'
     *  RelationalOperator: '<S24>/Equal1'
     *  RelationalOperator: '<S50>/Greater  Than1'
     *  Switch: '<S24>/Switch4'
     *  UnitDelay: '<S24>/Unit Delay2'
     *  UnitDelay: '<S46>/Unit Delay'
     *  UnitDelay: '<S50>/Unit Delay'
     */
    if (rtb_UnitDelay_cj)
    {
        TCCR_ac_DW.UnitDelay2_DSTATE_d =
            rtb_TmpSignalConversionAtVeTTQR_M_LoadTo;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S24>/Timer Retrigger Reset Enabled' */
        if (((KeTCCR_phi_TorqSignThresh == TCCR_ac_DW.UnitDelay_DSTATE_kg) || ((
                -KeTCCR_phi_TorqSignThresh) == TCCR_ac_DW.UnitDelay_DSTATE_kg)) ||
            (TCCR_ac_DW.UnitDelay_DSTATE_do <= 0.0F))
        {
            /* Switch: '<S24>/Switch4' incorporates:
             *  UnitDelay: '<S24>/Unit Delay'
             *  UnitDelay: '<S24>/Unit Delay2'
             */
            TCCR_ac_DW.UnitDelay2_DSTATE_d = TCCR_ac_DW.UnitDelay_DSTATE_po;
        }

        /* End of Outputs for SubSystem: '<S24>/Timer Retrigger Reset Enabled' */
    }

    /* End of Switch: '<S24>/Switch' */

    /* Outputs for Atomic SubSystem: '<S42>/GradientLimiter1' */
    /* Sum: '<S84>/Sum2' incorporates:
     *  UnitDelay: '<S84>/Unit Delay'
     */
    rtb_Sum1_gk = TCCR_ac_B.Merge2_l - TCCR_ac_DW.UnitDelay_DSTATE_j;

    /* Outputs for Atomic SubSystem: '<S84>/Limiter' */
    /* Switch: '<S103>/Switch1' incorporates:
     *  RelationalOperator: '<S103>/Relational Operator'
     */
    if (TCCR_ac_B.Merge1_d < rtb_Sum1_gk)
    {
        /* Switch: '<S103>/Switch1' */
        rtb_Sum1_gk = TCCR_ac_B.Merge1_d;
    }

    /* End of Switch: '<S103>/Switch1' */

    /* Switch: '<S103>/Switch' incorporates:
     *  RelationalOperator: '<S103>/Relational Operator1'
     */
    if (rtb_Sum1_gk <= TCCR_ac_B.Merge3)
    {
        rtb_Sum1_gk = TCCR_ac_B.Merge3;
    }

    /* End of Switch: '<S103>/Switch' */
    /* End of Outputs for SubSystem: '<S84>/Limiter' */

    /* Sum: '<S84>/Sum3' incorporates:
     *  UnitDelay: '<S42>/Unit Delay12'
     *  UnitDelay: '<S84>/Unit Delay'
     */
    TCCR_ac_DW.UnitDelay12_DSTATE = rtb_Sum1_gk + TCCR_ac_DW.UnitDelay_DSTATE_j;

    /* Update for UnitDelay: '<S84>/Unit Delay' incorporates:
     *  UnitDelay: '<S42>/Unit Delay12'
     */
    TCCR_ac_DW.UnitDelay_DSTATE_j = TCCR_ac_DW.UnitDelay12_DSTATE;

    /* End of Outputs for SubSystem: '<S42>/GradientLimiter1' */

    /* Product: '<S42>/Product2' incorporates:
     *  Sum: '<S42>/Sum2'
     *  UnitDelay: '<S23>/Unit Delay'
     *  UnitDelay: '<S42>/Unit Delay12'
     */
    rtb_Switch4 = (rtb_Sum1_oz + TCCR_ac_DW.UnitDelay_DSTATE_c) *
        TCCR_ac_DW.UnitDelay12_DSTATE;

    /* Switch: '<S42>/Switch3' incorporates:
     *  Constant: '<S42>/Constant Value6'
     *  Constant: '<S83>/Constant'
     *  RelationalOperator: '<S42>/Comparison16'
     *  Sum: '<S42>/Sum3'
     *  UnitDelay: '<S42>/Unit Delay6'
     */
    if (((uint32)TCCR_ac_B.VeTCCC_e_ClchStLCC) <= CeHCCR_e_ClReleased)
    {
        TCCR_ac_DW.UnitDelay6_DSTATE_p = 0.0F;
    }
    else
    {
        TCCR_ac_DW.UnitDelay6_DSTATE_p = TCCR_ac_B.VeTCCR_M_TlfMod_Timp -
            rtb_Switch4;
    }

    /* End of Switch: '<S42>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/TCCR_FUNC_MedTEB' */

    /* Inport: '<Root>/VeTRGR_e_VldtdTransRngSt' */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/TCCR_FUNC_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TCCC_Process_TC'
     */
    /* Switch: '<S15>/Switch' incorporates:
     *  Constant: '<S250>/Constant'
     *  Constant: '<S259>/Calib'
     *  Constant: '<S261>/Calib'
     *  Inport: '<Root>/VeOHSR_e_SGrDsrd'
     *  Inport: '<Root>/VeOHSR_e_SGrDsrd_EngOn'
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     *  Logic: '<S15>/Logical'
     *  RelationalOperator: '<S15>/Comparison4'
     *  Switch: '<S15>/Switch4'
     */
    if ((((uint32)tmpRead) == CeTRGR_e_TransRangeReverse) &&
            (KeTCCR_b_EnblPRND4TimpCreepCal))
    {
        /* Switch: '<S15>/Switch' incorporates:
         *  Constant: '<S15>/Constant Value'
         */
        rtb_Switch_dq = 0;
    }
    else if (HeTCCR_b_UseSGDsrd)
    {
        (void)Rte_Read_VeOHSR_e_SGrDsrd_EngOn_Value(&tmpRead_3);

        /* Switch: '<S15>/Switch' incorporates:
         *  DataTypeConversion: '<S15>/Data Type Conversion2'
         *  Inport: '<Root>/VeOHSR_e_SGrDsrd_EngOn'
         *  Switch: '<S15>/Switch4'
         */
        rtb_Switch_dq = (sint16)tmpRead_3;
    }
    else
    {
        (void)Rte_Read_VeOHSR_e_SGrDsrd_Value(&tmpRead_3);

        /* Switch: '<S15>/Switch' incorporates:
         *  DataTypeConversion: '<S15>/Data Type Conversion1'
         *  Inport: '<Root>/VeOHSR_e_SGrDsrd'
         *  Switch: '<S15>/Switch4'
         */
        rtb_Switch_dq = (sint16)tmpRead_3;
    }

    /* End of Switch: '<S15>/Switch' */

    /* Switch: '<S15>/Switch3' incorporates:
     *  Constant: '<S15>/TRUE Constant'
     *  Constant: '<S251>/Constant'
     *  Constant: '<S252>/Constant'
     *  Constant: '<S253>/Constant'
     *  Constant: '<S254>/Constant'
     *  Constant: '<S255>/Constant'
     *  Constant: '<S260>/Calib'
     *  Logic: '<S15>/Logical2'
     *  RelationalOperator: '<S15>/Comparison1'
     *  RelationalOperator: '<S15>/Comparison2'
     *  RelationalOperator: '<S15>/Comparison3'
     *  RelationalOperator: '<S15>/Comparison5'
     *  RelationalOperator: '<S15>/Comparison6'
     */
    if (HeTCCR_b_EnblRngStTrans)
    {
        rtb_Comparison2_e = (((((((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_RngS_p) != CeHSER_e_NeutToM1) &&
                                (((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_RngS_p) != CeHSER_e_NeutToM3)) &&
                               (((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_RngS_p) != CeHSER_e_M2ToG2)) &&
                              (((uint32)rtb_TmpSignalConversionAtVeHSER_e_RngS_p)
                               != CeHSER_e_M2ToG4)) && (((uint32)
                               rtb_TmpSignalConversionAtVeHSER_e_RngS_p) !=
                              CeHSER_e_ShiftToNeutEngOn));
    }
    else
    {
        rtb_Comparison2_e = true;
    }

    /* End of Switch: '<S15>/Switch3' */

    /* Logic: '<S15>/Logical1' */
    rtb_Switch2_jp = (rtb_Logical2_l && rtb_Comparison2_e);

    /* Outputs for Atomic SubSystem: '<S15>/EdgeRising' */
    /* Logic: '<S249>/AND' incorporates:
     *  Logic: '<S249>/OR1'
     *  UnitDelay: '<S249>/Unit Delay'
     */
    rtb_Logical2_l = (rtb_Switch2_jp && (!TCCR_ac_DW.UnitDelay_DSTATE_bq));

    /* Update for UnitDelay: '<S249>/Unit Delay' */
    TCCR_ac_DW.UnitDelay_DSTATE_bq = rtb_Switch2_jp;

    /* End of Outputs for SubSystem: '<S15>/EdgeRising' */

    /* Switch: '<S247>/Switch2' incorporates:
     *  Selector: '<S15>/Selector1'
     *  SignalConversion: '<S4>/Signal Conversion'
     *  Switch: '<S247>/Switch3'
     *  UnitDelay: '<S247>/Unit Delay'
     */
    if (rtb_Logical2_l)
    {
        TCCR_ac_DW.UnitDelay_DSTATE_ak = tmpRead_0[rtb_Switch_dq];

        /* Switch: '<S247>/Switch1' incorporates:
         *  Constant: '<S247>/Constant Value4'
         *  Selector: '<S15>/Selector1'
         *  SignalConversion: '<S4>/Signal Conversion'
         *  UnitDelay: '<S247>/Unit Delay'
         *  UnitDelay: '<S247>/Unit Delay3'
         */
        TCCR_ac_DW.UnitDelay3_DSTATE_cy = 0.0F;
    }
    else
    {
        /* MinMax: '<S247>/Maximum' incorporates:
         *  Constant: '<S256>/Calib'
         *  Constant: '<S263>/Calib'
         */
        rtb_UnitDelay_jo = fmaxf(HeTCCR_t_MedTEB_dT, KeTCCR_t_TurbSpdBlndTime);

        /* Outputs for Atomic SubSystem: '<S247>/Protected Division' */
        /* Switch: '<S271>/Switch1' incorporates:
         *  Constant: '<S256>/Calib'
         *  Constant: '<S271>/Constant Value'
         *  Constant: '<S271>/Constant Value1'
         *  Constant: '<S271>/Constant Value2'
         *  Constant: '<S271>/Constant Value3'
         *  Logic: '<S271>/AND'
         *  RelationalOperator: '<S271>/Greater Than or Equal '
         *  RelationalOperator: '<S271>/Greater Than or Equal 1'
         *  RelationalOperator: '<S271>/Not Equal'
         *  RelationalOperator: '<S271>/Not Equal1'
         *  Switch: '<S271>/Switch2'
         *  Switch: '<S271>/Switch3'
         */
        if ((HeTCCR_t_MedTEB_dT != 0.0F) && (rtb_UnitDelay_jo != 0.0F))
        {
            /* Switch: '<S271>/Switch1' incorporates:
             *  Product: '<S271>/Division'
             */
            rtb_UnitDelay_jo = HeTCCR_t_MedTEB_dT / rtb_UnitDelay_jo;
        }
        else if (HeTCCR_t_MedTEB_dT > 0.0F)
        {
            /* Switch: '<S271>/Switch2' incorporates:
             *  Constant: '<S271>/MAXFLOAT'
             *  Switch: '<S271>/Switch1'
             */
            rtb_UnitDelay_jo = 3.402823466E+38F;
        }
        else if (HeTCCR_t_MedTEB_dT < 0.0F)
        {
            /* Switch: '<S271>/Switch3' incorporates:
             *  Constant: '<S271>/MINFLOAT'
             *  Switch: '<S271>/Switch1'
             *  Switch: '<S271>/Switch2'
             */
            rtb_UnitDelay_jo = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S271>/Switch1' incorporates:
             *  Constant: '<S271>/Constant Value4'
             *  Switch: '<S271>/Switch2'
             *  Switch: '<S271>/Switch3'
             */
            rtb_UnitDelay_jo = 0.0F;
        }

        /* End of Switch: '<S271>/Switch1' */
        /* End of Outputs for SubSystem: '<S247>/Protected Division' */

        /* Switch: '<S247>/Switch1' incorporates:
         *  Constant: '<S247>/Constant Value2'
         *  Constant: '<S247>/Constant Value3'
         *  MinMax: '<S247>/MinMax'
         *  Sum: '<S247>/Summation1'
         *  UnitDelay: '<S247>/Unit Delay1'
         *  UnitDelay: '<S247>/Unit Delay3'
         */
        if (!TCCR_ac_DW.UnitDelay1_DSTATE_pp)
        {
            TCCR_ac_DW.UnitDelay3_DSTATE_cy = 1.0F;
        }

        TCCR_ac_DW.UnitDelay3_DSTATE_cy = fminf(TCCR_ac_DW.UnitDelay3_DSTATE_cy
            + rtb_UnitDelay_jo, 1.0F);
    }

    /* End of Switch: '<S247>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/TCCR_FUNC_MedTEB' */

    /* Inport: '<Root>/VeHSER_n_NxProfile' */
    (void)Rte_Read_VeHSER_n_NxProfile_Value(&rtb_Add);

    /* Inport: '<Root>/VeHSER_n_InputSpeedProfile' */
    (void)Rte_Read_VeHSER_n_InputSpeedProfile_Value(&rtb_Switch_i);

    /* Outputs for Function Call SubSystem: '<Root>/TCCR_FUNC_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TCCC_Process_TC'
     */
    /* Switch: '<S257>/Switch' incorporates:
     *  Constant: '<S363>/Constant'
     *  Constant: '<S364>/Constant'
     *  Logic: '<S257>/Logical Operator'
     *  RelationalOperator: '<S257>/Relational Operator'
     *  RelationalOperator: '<S257>/Relational Operator1'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) ==
            CeHSER_e_Neut_State) || (((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) == CeHSER_e_M1_State))
    {
        /* Switch: '<S257>/Switch' */
        rtb_Switch_i = rtb_Add;
    }

    /* End of Switch: '<S257>/Switch' */

    /* Switch: '<S15>/Switch6' incorporates:
     *  Constant: '<S258>/Calib'
     *  Inport: '<Root>/VeOHSR_e_ILEState'
     */
    if (KeTCCR_b_BlndOL_CL)
    {
        (void)Rte_Read_VeOHSR_e_ILEState_Value(&tmpRead_1);

        /* Switch: '<S264>/Switch' incorporates:
         *  Constant: '<S365>/Constant'
         *  Inport: '<Root>/VeOHSR_e_ILEState'
         *  RelationalOperator: '<S264>/Relational Operator'
         */
        if (((uint32)tmpRead_1) == CeOHSR_e_LaunchState)
        {
            /* Sum: '<S264>/Add' incorporates:
             *  Constant: '<S367>/Calib'
             *  DataTypeConversion: '<S264>/Data Type Conversion'
             *  Selector: '<S264>/Selector'
             *  SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear'
             */
            rtb_Add = KaTCCR_n_Launch2Creep
                [(rtb_TmpSignalConversionAtVeTRNR_e_Actu_c)];
        }
        else
        {
            /* Sum: '<S264>/Add' incorporates:
             *  Constant: '<S366>/Calib'
             *  DataTypeConversion: '<S264>/Data Type Conversion1'
             *  Selector: '<S264>/Selector1'
             *  SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear'
             */
            rtb_Add = KaTCCR_n_Creep2Launch
                [(rtb_TmpSignalConversionAtVeTRNR_e_Actu_c)];
        }

        /* End of Switch: '<S264>/Switch' */

        /* Sum: '<S264>/Add' */
        rtb_Add += rtb_TmpSignalConversionAtVeOHSR_n_Idle_p;

        /* Switch: '<S15>/Switch6' incorporates:
         *  MinMax: '<S264>/MinMax'
         */
        rtb_Switch_i = fminf(rtb_Add, rtb_Switch_i);
    }

    /* End of Switch: '<S15>/Switch6' */

    /* Outputs for Atomic SubSystem: '<S277>/Protected Division' */
    /* Switch: '<S306>/Switch1' incorporates:
     *  Constant: '<S306>/Constant Value'
     *  Constant: '<S306>/Constant Value1'
     *  Constant: '<S306>/Constant Value2'
     *  Constant: '<S306>/Constant Value3'
     *  Logic: '<S306>/AND'
     *  RelationalOperator: '<S306>/Greater Than or Equal '
     *  RelationalOperator: '<S306>/Greater Than or Equal 1'
     *  RelationalOperator: '<S306>/Not Equal'
     *  RelationalOperator: '<S306>/Not Equal1'
     *  Switch: '<S306>/Switch2'
     *  Switch: '<S306>/Switch3'
     */
    if ((TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo != 0.0F) &&
            (rtb_Switch_i != 0.0F))
    {
        /* Switch: '<S306>/Switch1' incorporates:
         *  Product: '<S306>/Division'
         */
        rtb_TmpSignalConversionAtVeOHSR_n_Idle_p =
            TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo / rtb_Switch_i;
    }
    else if (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo > 0.0F)
    {
        /* Switch: '<S306>/Switch2' incorporates:
         *  Constant: '<S306>/MAXFLOAT'
         *  Switch: '<S306>/Switch1'
         */
        rtb_TmpSignalConversionAtVeOHSR_n_Idle_p = 3.402823466E+38F;
    }
    else if (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo < 0.0F)
    {
        /* Switch: '<S306>/Switch3' incorporates:
         *  Constant: '<S306>/MINFLOAT'
         *  Switch: '<S306>/Switch1'
         *  Switch: '<S306>/Switch2'
         */
        rtb_TmpSignalConversionAtVeOHSR_n_Idle_p = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S306>/Switch1' incorporates:
         *  Constant: '<S306>/Constant Value4'
         *  Switch: '<S306>/Switch2'
         *  Switch: '<S306>/Switch3'
         */
        rtb_TmpSignalConversionAtVeOHSR_n_Idle_p = 0.0F;
    }

    /* End of Switch: '<S306>/Switch1' */
    /* End of Outputs for SubSystem: '<S277>/Protected Division' */

    /* RelationalOperator: '<S277>/Relational Operator' incorporates:
     *  Constant: '<S303>/Calib'
     */
    rtb_Logical2_l = (rtb_TmpSignalConversionAtVeOHSR_n_Idle_p <=
                      KeTCCR_k_Drive2CoastSRCond);

    /* Outputs for Atomic SubSystem: '<S277>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S308>/EdgeRising' */
    /* Logic: '<S330>/AND' incorporates:
     *  Logic: '<S330>/OR1'
     *  UnitDelay: '<S330>/Unit Delay'
     */
    rtb_VeTCCR_b_PresCntrlRel = (rtb_Logical2_l &&
        (!TCCR_ac_DW.UnitDelay_DSTATE_hu));

    /* Update for UnitDelay: '<S330>/Unit Delay' */
    TCCR_ac_DW.UnitDelay_DSTATE_hu = rtb_Logical2_l;

    /* End of Outputs for SubSystem: '<S308>/EdgeRising' */

    /* Switch: '<S308>/Switch1' incorporates:
     *  Constant: '<S304>/Calib'
     *  Constant: '<S308>/Constant Value'
     *  Constant: '<S308>/Constant Value1'
     *  Logic: '<S308>/OR'
     *  Logic: '<S308>/OR1'
     *  MinMax: '<S308>/Minimum'
     *  Sum: '<S308>/Summation'
     *  UnitDelay: '<S308>/Unit Delay'
     */
    if ((!rtb_Logical2_l) || rtb_VeTCCR_b_PresCntrlRel)
    {
        TCCR_ac_DW.UnitDelay_DSTATE_f = 0U;
    }
    else if (KeTCCR_Cnt_Drive2CoastHold < ((uint16)(((uint32)
                TCCR_ac_DW.UnitDelay_DSTATE_f) + 1U)))
    {
        /* MinMax: '<S308>/Minimum' incorporates:
         *  Constant: '<S304>/Calib'
         */
        TCCR_ac_DW.UnitDelay_DSTATE_f = KeTCCR_Cnt_Drive2CoastHold;
    }
    else
    {
        /* MinMax: '<S308>/Minimum' incorporates:
         *  Constant: '<S308>/Constant Value'
         *  Sum: '<S308>/Summation'
         *  UnitDelay: '<S308>/Unit Delay'
         */
        TCCR_ac_DW.UnitDelay_DSTATE_f = (uint16)(((uint32)
            TCCR_ac_DW.UnitDelay_DSTATE_f) + 1U);
    }

    /* End of Switch: '<S308>/Switch1' */

    /* Logic: '<S308>/AND' incorporates:
     *  Constant: '<S304>/Calib'
     *  RelationalOperator: '<S308>/Greater  Than'
     *  UnitDelay: '<S308>/Unit Delay'
     */
    rtb_Logical2_l = (rtb_Logical2_l && (TCCR_ac_DW.UnitDelay_DSTATE_f >=
                       KeTCCR_Cnt_Drive2CoastHold));

    /* End of Outputs for SubSystem: '<S277>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S277>/Turn Off Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S307>/EdgeFalling' */
    /* Logic: '<S329>/AND' incorporates:
     *  Logic: '<S329>/OR1'
     *  UnitDelay: '<S329>/Unit Delay'
     */
    rtb_VeTCCR_b_PresCntrlRel = ((!rtb_Logical2_l) &&
        (TCCR_ac_DW.UnitDelay_DSTATE_ab));

    /* Update for UnitDelay: '<S329>/Unit Delay' */
    TCCR_ac_DW.UnitDelay_DSTATE_ab = rtb_Logical2_l;

    /* End of Outputs for SubSystem: '<S307>/EdgeFalling' */

    /* Switch: '<S307>/Switch' incorporates:
     *  Constant: '<S304>/Calib'
     *  Sum: '<S307>/Summation'
     *  UnitDelay: '<S307>/Unit Delay'
     */
    if (rtb_VeTCCR_b_PresCntrlRel)
    {
        TCCR_ac_DW.UnitDelay_DSTATE_ol = KeTCCR_Cnt_Drive2CoastHold;
    }
    else
    {
        /* Sum: '<S307>/Summation' incorporates:
         *  Constant: '<S307>/Constant Value'
         *  UnitDelay: '<S307>/Unit Delay'
         */
        i = ((sint32)TCCR_ac_DW.UnitDelay_DSTATE_ol) - 1;
        if ((((sint32)TCCR_ac_DW.UnitDelay_DSTATE_ol) - 1) < 0)
        {
            i = 0;
        }

        TCCR_ac_DW.UnitDelay_DSTATE_ol = (uint16)i;
    }

    /* End of Switch: '<S307>/Switch' */

    /* Logic: '<S307>/AND' incorporates:
     *  Constant: '<S307>/Constant Value2'
     *  RelationalOperator: '<S307>/Greater  Than'
     *  UnitDelay: '<S307>/Unit Delay'
     */
    rtb_Logical2_l = (rtb_Logical2_l || (((sint32)TCCR_ac_DW.UnitDelay_DSTATE_ol)
                       > 0));

    /* End of Outputs for SubSystem: '<S277>/Turn Off Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S277>/EdgeBi1' */
    /* RelationalOperator: '<S300>/Not Equal' incorporates:
     *  UnitDelay: '<S300>/Unit Delay'
     */
    rtb_VeTCCR_b_PresCntrlRel = (rtb_Logical2_l !=
        TCCR_ac_DW.UnitDelay_DSTATE_mk);

    /* Update for UnitDelay: '<S300>/Unit Delay' */
    TCCR_ac_DW.UnitDelay_DSTATE_mk = rtb_Logical2_l;

    /* End of Outputs for SubSystem: '<S277>/EdgeBi1' */

    /* Switch: '<S299>/Switch2' incorporates:
     *  Switch: '<S299>/Switch3'
     *  UnitDelay: '<S277>/Unit Delay'
     *  UnitDelay: '<S299>/Unit Delay'
     */
    if (rtb_VeTCCR_b_PresCntrlRel)
    {
        for (i = 0; i < 4; i++)
        {
            TCCR_ac_DW.UnitDelay_DSTATE_o[i] = TCCR_ac_DW.UnitDelay_DSTATE_m1[i];
        }

        /* Switch: '<S299>/Switch1' incorporates:
         *  Constant: '<S299>/Constant Value4'
         *  UnitDelay: '<S277>/Unit Delay'
         *  UnitDelay: '<S299>/Unit Delay'
         *  UnitDelay: '<S299>/Unit Delay3'
         */
        TCCR_ac_DW.UnitDelay3_DSTATE_g = 0.0F;
    }
    else
    {
        /* MinMax: '<S299>/Maximum' incorporates:
         *  Constant: '<S256>/Calib'
         *  Constant: '<S305>/Calib'
         */
        rtb_TmpSignalConversionAtVeOHSR_n_Idle_p = fmaxf(HeTCCR_t_MedTEB_dT,
            KeTCCR_t_Drive2CoastTime);

        /* Outputs for Atomic SubSystem: '<S299>/Protected Division1' */
        /* Switch: '<S309>/Switch1' incorporates:
         *  Constant: '<S256>/Calib'
         *  Constant: '<S309>/Constant Value'
         *  Constant: '<S309>/Constant Value1'
         *  Constant: '<S309>/Constant Value2'
         *  Constant: '<S309>/Constant Value3'
         *  Logic: '<S309>/AND'
         *  RelationalOperator: '<S309>/Greater Than or Equal '
         *  RelationalOperator: '<S309>/Greater Than or Equal 1'
         *  RelationalOperator: '<S309>/Not Equal'
         *  RelationalOperator: '<S309>/Not Equal1'
         *  Switch: '<S309>/Switch2'
         *  Switch: '<S309>/Switch3'
         */
        if ((HeTCCR_t_MedTEB_dT != 0.0F) &&
                (rtb_TmpSignalConversionAtVeOHSR_n_Idle_p != 0.0F))
        {
            /* Switch: '<S309>/Switch1' incorporates:
             *  Product: '<S309>/Division'
             */
            rtb_TmpSignalConversionAtVeOHSR_n_Idle_p = HeTCCR_t_MedTEB_dT /
                rtb_TmpSignalConversionAtVeOHSR_n_Idle_p;
        }
        else if (HeTCCR_t_MedTEB_dT > 0.0F)
        {
            /* Switch: '<S309>/Switch2' incorporates:
             *  Constant: '<S309>/MAXFLOAT'
             *  Switch: '<S309>/Switch1'
             */
            rtb_TmpSignalConversionAtVeOHSR_n_Idle_p = 3.402823466E+38F;
        }
        else if (HeTCCR_t_MedTEB_dT < 0.0F)
        {
            /* Switch: '<S309>/Switch3' incorporates:
             *  Constant: '<S309>/MINFLOAT'
             *  Switch: '<S309>/Switch1'
             *  Switch: '<S309>/Switch2'
             */
            rtb_TmpSignalConversionAtVeOHSR_n_Idle_p = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S309>/Switch1' incorporates:
             *  Constant: '<S309>/Constant Value4'
             *  Switch: '<S309>/Switch2'
             *  Switch: '<S309>/Switch3'
             */
            rtb_TmpSignalConversionAtVeOHSR_n_Idle_p = 0.0F;
        }

        /* End of Switch: '<S309>/Switch1' */
        /* End of Outputs for SubSystem: '<S299>/Protected Division1' */

        /* Switch: '<S299>/Switch1' incorporates:
         *  Constant: '<S299>/Constant Value2'
         *  Constant: '<S299>/Constant Value3'
         *  MinMax: '<S299>/MinMax'
         *  Sum: '<S299>/Summation1'
         *  UnitDelay: '<S299>/Unit Delay1'
         *  UnitDelay: '<S299>/Unit Delay3'
         */
        if (!TCCR_ac_DW.UnitDelay1_DSTATE_ll)
        {
            TCCR_ac_DW.UnitDelay3_DSTATE_g = 1.0F;
        }

        TCCR_ac_DW.UnitDelay3_DSTATE_g = fminf(TCCR_ac_DW.UnitDelay3_DSTATE_g +
            rtb_TmpSignalConversionAtVeOHSR_n_Idle_p, 1.0F);
    }

    /* End of Switch: '<S299>/Switch2' */

    /* Switch: '<S277>/Switch1' incorporates:
     *  Constant: '<S7>/Calib'
     *  Selector: '<S4>/Selector'
     */
    if (rtb_Logical2_l)
    {
        /* Outputs for Atomic SubSystem: '<S277>/HSCL_FTC_TturbTimp' */
        TCCR_ac_HSCL_FTC_TturbTimp
            (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo, rtb_Switch_i,
             tmpRead_2[((sint32)HeTCCR_n_SlipSpdFailIdx) - 1],
             &TCCR_ac_B.HSCL_FTC_TturbTimp_c);

        /* End of Outputs for SubSystem: '<S277>/HSCL_FTC_TturbTimp' */

        /* Switch: '<S278>/Switch1' incorporates:
         *  Constant: '<S7>/Calib'
         *  Selector: '<S4>/Selector'
         */
        rtb_Switch1_kr[0] = TCCR_ac_B.HSCL_FTC_TturbTimp_c.Switch1_l;
        rtb_Switch1_kr[1] = TCCR_ac_B.HSCL_FTC_TturbTimp_c.Sum2;
        rtb_Switch1_kr[2] = TCCR_ac_B.HSCL_FTC_TturbTimp_c.Vector_c;
        rtb_Switch1_kr[3] = TCCR_ac_B.HSCL_FTC_TturbTimp_c.Switch1;
    }
    else
    {
        /* Gain: '<S322>/Gain' incorporates:
         *  Lookup_n-D: '<S324>/Vector'
         *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
         */
        rtb_Switch2_pq = 0.5F * look1_iflf_binlca_16a
            (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
             (Rte_Prm_KxHSCR_r_TCC_Nc2FromTturb_CoeffsB_KxHSCR_r_TCC_Nc2FromTturb_CoeffsB
              ()),
             (Rte_Prm_KtHSCR_r_TCC_Nc2FromTturb_CoeffsB_KtHSCR_r_TCC_Nc2FromTturb_CoeffsB
              ()), 8U);

        /* Lookup_n-D: '<S323>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_LoadTo = look1_iflf_binlca_16a
            (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
             (Rte_Prm_KxHSCR_r_TCC_Nc2FromTturb_CoeffsA_KxHSCR_r_TCC_Nc2FromTturb_CoeffsA
              ()),
             (Rte_Prm_KtHSCR_r_TCC_Nc2FromTturb_CoeffsA_KtHSCR_r_TCC_Nc2FromTturb_CoeffsA
              ()), 8U);

        /* Product: '<S322>/Product1' */
        rtb_UnitDelay_jo = rtb_Switch2_pq * rtb_Switch2_pq;

        /* Outputs for Atomic SubSystem: '<S322>/Protected Division2' */
        /* Switch: '<S328>/Switch1' incorporates:
         *  Constant: '<S328>/Constant Value1'
         *  RelationalOperator: '<S328>/Not Equal1'
         */
        if (rtb_TmpSignalConversionAtVeTTQR_M_LoadTo != 0.0F)
        {
            /* Switch: '<S328>/Switch1' incorporates:
             *  Constant: '<S322>/Constant Value2'
             *  Product: '<S328>/Division'
             */
            rtb_TmpSignalConversionAtVeOHSR_n_Idle_p = 1.0F /
                rtb_TmpSignalConversionAtVeTTQR_M_LoadTo;
        }
        else
        {
            /* Switch: '<S328>/Switch1' */
            rtb_TmpSignalConversionAtVeOHSR_n_Idle_p = 3.402823466E+38F;
        }

        /* End of Switch: '<S328>/Switch1' */
        /* End of Outputs for SubSystem: '<S322>/Protected Division2' */

        /* Switch: '<S302>/Switch1' incorporates:
         *  Constant: '<S7>/Calib'
         *  Selector: '<S4>/Selector'
         */
        if (tmpRead_2[((sint32)HeTCCR_n_SlipSpdFailIdx) - 1])
        {
            /* Switch: '<S302>/Switch1' incorporates:
             *  Constant: '<S302>/Constant Value5'
             */
            rtb_Add = 0.0F;
        }
        else
        {
            /* Switch: '<S302>/Switch1' incorporates:
             *  Sum: '<S302>/Sum1'
             */
            rtb_Add = rtb_Switch_i -
                TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo;
        }

        /* End of Switch: '<S302>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S322>/Protected Division' */
        /* Switch: '<S326>/Switch1' incorporates:
         *  Constant: '<S326>/Constant Value'
         *  Constant: '<S326>/Constant Value1'
         *  Constant: '<S326>/Constant Value2'
         *  Constant: '<S326>/Constant Value3'
         *  Logic: '<S326>/AND'
         *  RelationalOperator: '<S326>/Greater Than or Equal '
         *  RelationalOperator: '<S326>/Greater Than or Equal 1'
         *  RelationalOperator: '<S326>/Not Equal'
         *  RelationalOperator: '<S326>/Not Equal1'
         *  Switch: '<S326>/Switch2'
         *  Switch: '<S326>/Switch3'
         */
        if ((rtb_UnitDelay_jo != 0.0F) &&
                (rtb_TmpSignalConversionAtVeTTQR_M_LoadTo != 0.0F))
        {
            /* Switch: '<S326>/Switch1' incorporates:
             *  Product: '<S326>/Division'
             */
            rtb_UnitDelay_jo /= rtb_TmpSignalConversionAtVeTTQR_M_LoadTo;
        }
        else if (rtb_UnitDelay_jo > 0.0F)
        {
            /* Switch: '<S326>/Switch2' incorporates:
             *  Constant: '<S326>/MAXFLOAT'
             *  Switch: '<S326>/Switch1'
             */
            rtb_UnitDelay_jo = 3.402823466E+38F;
        }
        else if (rtb_UnitDelay_jo < 0.0F)
        {
            /* Switch: '<S326>/Switch3' incorporates:
             *  Constant: '<S326>/MINFLOAT'
             *  Switch: '<S326>/Switch1'
             *  Switch: '<S326>/Switch2'
             */
            rtb_UnitDelay_jo = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S326>/Switch1' incorporates:
             *  Constant: '<S326>/Constant Value4'
             *  Switch: '<S326>/Switch2'
             *  Switch: '<S326>/Switch3'
             */
            rtb_UnitDelay_jo = 0.0F;
        }

        /* End of Switch: '<S326>/Switch1' */
        /* End of Outputs for SubSystem: '<S322>/Protected Division' */

        /* Outputs for Atomic SubSystem: '<S322>/Protected Division1' */
        /* Switch: '<S327>/Switch1' incorporates:
         *  Constant: '<S327>/Constant Value'
         *  Constant: '<S327>/Constant Value1'
         *  Constant: '<S327>/Constant Value2'
         *  Constant: '<S327>/Constant Value3'
         *  Logic: '<S327>/AND'
         *  RelationalOperator: '<S327>/Greater Than or Equal '
         *  RelationalOperator: '<S327>/Greater Than or Equal 1'
         *  RelationalOperator: '<S327>/Not Equal'
         *  RelationalOperator: '<S327>/Not Equal1'
         *  Switch: '<S327>/Switch2'
         *  Switch: '<S327>/Switch3'
         */
        if ((rtb_Switch2_pq != 0.0F) &&
                (rtb_TmpSignalConversionAtVeTTQR_M_LoadTo != 0.0F))
        {
            /* Switch: '<S327>/Switch1' incorporates:
             *  Product: '<S327>/Division'
             */
            rtb_Switch2_pq /= rtb_TmpSignalConversionAtVeTTQR_M_LoadTo;
        }
        else if (rtb_Switch2_pq > 0.0F)
        {
            /* Switch: '<S327>/Switch2' incorporates:
             *  Constant: '<S327>/MAXFLOAT'
             *  Switch: '<S327>/Switch1'
             */
            rtb_Switch2_pq = 3.402823466E+38F;
        }
        else if (rtb_Switch2_pq < 0.0F)
        {
            /* Switch: '<S327>/Switch3' incorporates:
             *  Constant: '<S327>/MINFLOAT'
             *  Switch: '<S327>/Switch1'
             *  Switch: '<S327>/Switch2'
             */
            rtb_Switch2_pq = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S327>/Switch1' incorporates:
             *  Constant: '<S327>/Constant Value4'
             *  Switch: '<S327>/Switch2'
             *  Switch: '<S327>/Switch3'
             */
            rtb_Switch2_pq = 0.0F;
        }

        /* End of Switch: '<S327>/Switch1' */
        /* End of Outputs for SubSystem: '<S322>/Protected Division1' */

        /* Signum: '<S302>/Signum' */
        if (rtb_TmpSignalConversionAtVeOHSR_n_Idle_p < 0.0F)
        {
            rtb_TmpSignalConversionAtVeTTQR_M_LoadTo = -1.0F;
        }
        else if (rtb_TmpSignalConversionAtVeOHSR_n_Idle_p > 0.0F)
        {
            rtb_TmpSignalConversionAtVeTTQR_M_LoadTo = 1.0F;
        }
        else
        {
            rtb_TmpSignalConversionAtVeTTQR_M_LoadTo =
                rtb_TmpSignalConversionAtVeOHSR_n_Idle_p;
        }

        /* End of Signum: '<S302>/Signum' */

        /* Sum: '<S302>/Sum3' incorporates:
         *  Constant: '<S302>/Constant Value'
         *  Gain: '<S322>/Gain1'
         *  Lookup_n-D: '<S325>/Vector'
         *  MinMax: '<S302>/MinMax1'
         *  Product: '<S302>/Product'
         *  Product: '<S302>/Product1'
         *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
         *  Sqrt: '<S321>/Sqrt'
         *  Sum: '<S302>/Sum2'
         *  Sum: '<S322>/Sum1'
         *  Switch: '<S321>/Switch'
         */
        rtb_TmpSignalConversionAtVeOHSR_n_Idle_p = (sqrtf(fmaxf((rtb_Add -
            (look1_iflf_binlca_16a
             (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo,
              (Rte_Prm_KxHSCR_r_TCC_Nc2FromTturb_CoeffsC_KxHSCR_r_TCC_Nc2FromTturb_CoeffsC
               ()),
              (Rte_Prm_KtHSCR_r_TCC_Nc2FromTturb_CoeffsC_KtHSCR_r_TCC_Nc2FromTturb_CoeffsC
               ()), 3U) - rtb_UnitDelay_jo)) *
            rtb_TmpSignalConversionAtVeOHSR_n_Idle_p, 0.0F)) *
            rtb_TmpSignalConversionAtVeTTQR_M_LoadTo) + (-rtb_Switch2_pq);

        /* Outputs for Atomic SubSystem: '<S302>/Protected Division2' */
        /* Switch: '<S320>/Switch1' incorporates:
         *  Constant: '<S320>/Constant Value'
         *  Constant: '<S320>/Constant Value1'
         *  Constant: '<S320>/Constant Value2'
         *  Constant: '<S320>/Constant Value3'
         *  Logic: '<S320>/AND'
         *  RelationalOperator: '<S320>/Greater Than or Equal '
         *  RelationalOperator: '<S320>/Greater Than or Equal 1'
         *  RelationalOperator: '<S320>/Not Equal'
         *  RelationalOperator: '<S320>/Not Equal1'
         *  Switch: '<S320>/Switch2'
         *  Switch: '<S320>/Switch3'
         */
        if ((TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo != 0.0F) &&
                (rtb_Switch_i != 0.0F))
        {
            /* Switch: '<S320>/Switch1' incorporates:
             *  Product: '<S320>/Division'
             */
            rtb_Add = TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo /
                rtb_Switch_i;
        }
        else if (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo > 0.0F)
        {
            /* Switch: '<S320>/Switch2' incorporates:
             *  Constant: '<S320>/MAXFLOAT'
             *  Switch: '<S320>/Switch1'
             */
            rtb_Add = 3.402823466E+38F;
        }
        else if (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo < 0.0F)
        {
            /* Switch: '<S320>/Switch3' incorporates:
             *  Constant: '<S320>/MINFLOAT'
             *  Switch: '<S320>/Switch1'
             *  Switch: '<S320>/Switch2'
             */
            rtb_Add = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S320>/Switch1' incorporates:
             *  Constant: '<S320>/Constant Value4'
             *  Switch: '<S320>/Switch2'
             *  Switch: '<S320>/Switch3'
             */
            rtb_Add = 0.0F;
        }

        /* End of Switch: '<S320>/Switch1' */
        /* End of Outputs for SubSystem: '<S302>/Protected Division2' */

        /* Lookup_n-D: '<S318>/Vector' incorporates:
         *  Switch: '<S320>/Switch1'
         */
        rtb_UnitDelay_jo = look1_iflf_binlca_16a(rtb_Add,
            (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
            (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

        /* Outputs for Atomic SubSystem: '<S302>/Protected Division1' */
        /* Switch: '<S319>/Switch1' incorporates:
         *  Constant: '<S319>/Constant Value'
         *  Constant: '<S319>/Constant Value1'
         *  Constant: '<S319>/Constant Value2'
         *  Constant: '<S319>/Constant Value3'
         *  Logic: '<S319>/AND'
         *  RelationalOperator: '<S319>/Greater Than or Equal '
         *  RelationalOperator: '<S319>/Greater Than or Equal 1'
         *  RelationalOperator: '<S319>/Not Equal'
         *  RelationalOperator: '<S319>/Not Equal1'
         *  Switch: '<S319>/Switch2'
         *  Switch: '<S319>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeOHSR_n_Idle_p != 0.0F) &&
                (rtb_UnitDelay_jo != 0.0F))
        {
            /* Switch: '<S278>/Switch1' incorporates:
             *  Product: '<S319>/Division'
             *  Switch: '<S319>/Switch1'
             */
            rtb_Switch1_kr[0] = rtb_TmpSignalConversionAtVeOHSR_n_Idle_p /
                rtb_UnitDelay_jo;
        }
        else if (rtb_TmpSignalConversionAtVeOHSR_n_Idle_p > 0.0F)
        {
            /* Switch: '<S278>/Switch1' incorporates:
             *  Constant: '<S319>/MAXFLOAT'
             *  Switch: '<S319>/Switch1'
             *  Switch: '<S319>/Switch2'
             */
            rtb_Switch1_kr[0] = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeOHSR_n_Idle_p < 0.0F)
        {
            /* Switch: '<S278>/Switch1' incorporates:
             *  Constant: '<S319>/MINFLOAT'
             *  Switch: '<S319>/Switch1'
             *  Switch: '<S319>/Switch2'
             *  Switch: '<S319>/Switch3'
             */
            rtb_Switch1_kr[0] = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S278>/Switch1' incorporates:
             *  Constant: '<S319>/Constant Value4'
             *  Switch: '<S319>/Switch1'
             *  Switch: '<S319>/Switch2'
             *  Switch: '<S319>/Switch3'
             */
            rtb_Switch1_kr[0] = 0.0F;
        }

        /* End of Switch: '<S319>/Switch1' */
        /* End of Outputs for SubSystem: '<S302>/Protected Division1' */

        /* Switch: '<S278>/Switch1' */
        rtb_Switch1_kr[1] = rtb_TmpSignalConversionAtVeOHSR_n_Idle_p;
        rtb_Switch1_kr[2] = rtb_UnitDelay_jo;
        rtb_Switch1_kr[3] = rtb_Add;
    }

    /* End of Switch: '<S277>/Switch1' */

    /* Sum: '<S299>/Summation' incorporates:
     *  Constant: '<S299>/Constant Value'
     *  Product: '<S299>/Multiplication'
     *  Product: '<S299>/Multiplication3'
     *  Sum: '<S299>/Subtraction'
     *  UnitDelay: '<S277>/Unit Delay'
     *  UnitDelay: '<S299>/Unit Delay'
     *  UnitDelay: '<S299>/Unit Delay3'
     */
    for (i = 0; i < 4; i++)
    {
        TCCR_ac_DW.UnitDelay_DSTATE_m1[i] = ((1.0F -
            TCCR_ac_DW.UnitDelay3_DSTATE_g) * TCCR_ac_DW.UnitDelay_DSTATE_o[i])
            + (TCCR_ac_DW.UnitDelay3_DSTATE_g * rtb_Switch1_kr[i]);
    }

    /* End of Sum: '<S299>/Summation' */

    /* Switch: '<S15>/Switch7' incorporates:
     *  Constant: '<S262>/Calib'
     *  Switch: '<S15>/Switch1'
     */
    if (KeTCCR_b_UsePredCreepCalc)
    {
        /* Switch: '<S15>/Switch7' incorporates:
         *  Selector: '<S15>/Selector1'
         *  SignalConversion: '<S4>/Signal Conversion'
         */
        rtb_TmpSignalConversionAtVeOHSR_n_Idle_p = tmpRead_0[rtb_Switch_dq];
    }
    else
    {
        if (rtb_Switch2_jp)
        {
            /* Switch: '<S15>/Switch1' */
            rtb_TmpSignalConversionAtVeOHSR_n_Idle_p =
                TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo;
        }
        else
        {
            /* Switch: '<S15>/Switch1' incorporates:
             *  Selector: '<S15>/Selector1'
             *  SignalConversion: '<S4>/Signal Conversion'
             */
            rtb_TmpSignalConversionAtVeOHSR_n_Idle_p = tmpRead_0[rtb_Switch_dq];
        }

        /* Switch: '<S15>/Switch7' incorporates:
         *  Constant: '<S247>/Constant Value'
         *  Product: '<S247>/Multiplication'
         *  Product: '<S247>/Multiplication3'
         *  Sum: '<S247>/Subtraction'
         *  Sum: '<S247>/Summation'
         *  UnitDelay: '<S247>/Unit Delay'
         *  UnitDelay: '<S247>/Unit Delay3'
         */
        rtb_TmpSignalConversionAtVeOHSR_n_Idle_p = ((1.0F -
            TCCR_ac_DW.UnitDelay3_DSTATE_cy) * TCCR_ac_DW.UnitDelay_DSTATE_ak) +
            (TCCR_ac_DW.UnitDelay3_DSTATE_cy *
             rtb_TmpSignalConversionAtVeOHSR_n_Idle_p);
    }

    /* End of Switch: '<S15>/Switch7' */

    /* Outputs for Atomic SubSystem: '<S278>/Protected Division' */
    /* Switch: '<S338>/Switch1' incorporates:
     *  Constant: '<S338>/Constant Value'
     *  Constant: '<S338>/Constant Value1'
     *  Constant: '<S338>/Constant Value2'
     *  Constant: '<S338>/Constant Value3'
     *  Logic: '<S338>/AND'
     *  RelationalOperator: '<S338>/Greater Than or Equal '
     *  RelationalOperator: '<S338>/Greater Than or Equal 1'
     *  RelationalOperator: '<S338>/Not Equal'
     *  RelationalOperator: '<S338>/Not Equal1'
     *  Switch: '<S338>/Switch2'
     *  Switch: '<S338>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeOHSR_n_Idle_p != 0.0F) && (rtb_Switch_i !=
            0.0F))
    {
        /* Switch: '<S338>/Switch1' incorporates:
         *  Product: '<S338>/Division'
         */
        rtb_Add = rtb_TmpSignalConversionAtVeOHSR_n_Idle_p / rtb_Switch_i;
    }
    else if (rtb_TmpSignalConversionAtVeOHSR_n_Idle_p > 0.0F)
    {
        /* Switch: '<S338>/Switch2' incorporates:
         *  Constant: '<S338>/MAXFLOAT'
         *  Switch: '<S338>/Switch1'
         */
        rtb_Add = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeOHSR_n_Idle_p < 0.0F)
    {
        /* Switch: '<S338>/Switch3' incorporates:
         *  Constant: '<S338>/MINFLOAT'
         *  Switch: '<S338>/Switch1'
         *  Switch: '<S338>/Switch2'
         */
        rtb_Add = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S338>/Switch1' incorporates:
         *  Constant: '<S338>/Constant Value4'
         *  Switch: '<S338>/Switch2'
         *  Switch: '<S338>/Switch3'
         */
        rtb_Add = 0.0F;
    }

    /* End of Switch: '<S338>/Switch1' */
    /* End of Outputs for SubSystem: '<S278>/Protected Division' */

    /* RelationalOperator: '<S278>/Relational Operator' incorporates:
     *  Constant: '<S335>/Calib'
     */
    rtb_Switch2_jp = (rtb_Add <= KeTCCR_k_Drive2CoastSRCond);

    /* Outputs for Atomic SubSystem: '<S278>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S340>/EdgeRising' */
    /* Logic: '<S362>/AND' incorporates:
     *  Logic: '<S362>/OR1'
     *  UnitDelay: '<S362>/Unit Delay'
     */
    rtb_Logical2_l = (rtb_Switch2_jp && (!TCCR_ac_DW.UnitDelay_DSTATE_b2));

    /* Update for UnitDelay: '<S362>/Unit Delay' */
    TCCR_ac_DW.UnitDelay_DSTATE_b2 = rtb_Switch2_jp;

    /* End of Outputs for SubSystem: '<S340>/EdgeRising' */

    /* Switch: '<S340>/Switch1' incorporates:
     *  Constant: '<S336>/Calib'
     *  Constant: '<S340>/Constant Value'
     *  Constant: '<S340>/Constant Value1'
     *  Logic: '<S340>/OR'
     *  Logic: '<S340>/OR1'
     *  MinMax: '<S340>/Minimum'
     *  Sum: '<S340>/Summation'
     *  UnitDelay: '<S340>/Unit Delay'
     */
    if ((!rtb_Switch2_jp) || rtb_Logical2_l)
    {
        TCCR_ac_DW.UnitDelay_DSTATE_ny = 0U;
    }
    else if (KeTCCR_Cnt_Drive2CoastHold < ((uint16)(((uint32)
                TCCR_ac_DW.UnitDelay_DSTATE_ny) + 1U)))
    {
        /* MinMax: '<S340>/Minimum' incorporates:
         *  Constant: '<S336>/Calib'
         */
        TCCR_ac_DW.UnitDelay_DSTATE_ny = KeTCCR_Cnt_Drive2CoastHold;
    }
    else
    {
        /* MinMax: '<S340>/Minimum' incorporates:
         *  Constant: '<S340>/Constant Value'
         *  Sum: '<S340>/Summation'
         *  UnitDelay: '<S340>/Unit Delay'
         */
        TCCR_ac_DW.UnitDelay_DSTATE_ny = (uint16)(((uint32)
            TCCR_ac_DW.UnitDelay_DSTATE_ny) + 1U);
    }

    /* End of Switch: '<S340>/Switch1' */

    /* Logic: '<S340>/AND' incorporates:
     *  Constant: '<S336>/Calib'
     *  RelationalOperator: '<S340>/Greater  Than'
     *  UnitDelay: '<S340>/Unit Delay'
     */
    rtb_Switch2_jp = (rtb_Switch2_jp && (TCCR_ac_DW.UnitDelay_DSTATE_ny >=
                       KeTCCR_Cnt_Drive2CoastHold));

    /* End of Outputs for SubSystem: '<S278>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S278>/Turn Off Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S339>/EdgeFalling' */
    /* Logic: '<S361>/AND' incorporates:
     *  Logic: '<S361>/OR1'
     *  UnitDelay: '<S361>/Unit Delay'
     */
    rtb_Logical2_l = ((!rtb_Switch2_jp) && (TCCR_ac_DW.UnitDelay_DSTATE_o5));

    /* Update for UnitDelay: '<S361>/Unit Delay' */
    TCCR_ac_DW.UnitDelay_DSTATE_o5 = rtb_Switch2_jp;

    /* End of Outputs for SubSystem: '<S339>/EdgeFalling' */

    /* Switch: '<S339>/Switch' incorporates:
     *  Constant: '<S336>/Calib'
     *  Sum: '<S339>/Summation'
     *  UnitDelay: '<S339>/Unit Delay'
     */
    if (rtb_Logical2_l)
    {
        TCCR_ac_DW.UnitDelay_DSTATE_m5 = KeTCCR_Cnt_Drive2CoastHold;
    }
    else
    {
        /* Sum: '<S339>/Summation' incorporates:
         *  Constant: '<S339>/Constant Value'
         *  UnitDelay: '<S339>/Unit Delay'
         */
        i = ((sint32)TCCR_ac_DW.UnitDelay_DSTATE_m5) - 1;
        if ((((sint32)TCCR_ac_DW.UnitDelay_DSTATE_m5) - 1) < 0)
        {
            i = 0;
        }

        TCCR_ac_DW.UnitDelay_DSTATE_m5 = (uint16)i;
    }

    /* End of Switch: '<S339>/Switch' */

    /* Logic: '<S339>/AND' incorporates:
     *  Constant: '<S339>/Constant Value2'
     *  RelationalOperator: '<S339>/Greater  Than'
     *  UnitDelay: '<S339>/Unit Delay'
     */
    rtb_Switch2_jp = (rtb_Switch2_jp || (((sint32)TCCR_ac_DW.UnitDelay_DSTATE_m5)
                       > 0));

    /* End of Outputs for SubSystem: '<S278>/Turn Off Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S278>/EdgeBi1' */
    /* RelationalOperator: '<S332>/Not Equal' incorporates:
     *  UnitDelay: '<S332>/Unit Delay'
     */
    rtb_Logical2_l = (rtb_Switch2_jp != TCCR_ac_DW.UnitDelay_DSTATE_cu);

    /* Update for UnitDelay: '<S332>/Unit Delay' */
    TCCR_ac_DW.UnitDelay_DSTATE_cu = rtb_Switch2_jp;

    /* End of Outputs for SubSystem: '<S278>/EdgeBi1' */

    /* Switch: '<S331>/Switch2' incorporates:
     *  Switch: '<S331>/Switch3'
     *  UnitDelay: '<S278>/Unit Delay'
     *  UnitDelay: '<S331>/Unit Delay'
     */
    if (rtb_Logical2_l)
    {
        for (i = 0; i < 4; i++)
        {
            TCCR_ac_DW.UnitDelay_DSTATE_dz[i] = TCCR_ac_DW.UnitDelay_DSTATE_kf[i];
        }

        /* Switch: '<S331>/Switch1' incorporates:
         *  Constant: '<S331>/Constant Value4'
         *  UnitDelay: '<S278>/Unit Delay'
         *  UnitDelay: '<S331>/Unit Delay'
         *  UnitDelay: '<S331>/Unit Delay3'
         */
        TCCR_ac_DW.UnitDelay3_DSTATE_k = 0.0F;
    }
    else
    {
        /* MinMax: '<S331>/Maximum' incorporates:
         *  Constant: '<S256>/Calib'
         *  Constant: '<S337>/Calib'
         */
        rtb_Add = fmaxf(HeTCCR_t_MedTEB_dT, KeTCCR_t_Drive2CoastTime);

        /* Outputs for Atomic SubSystem: '<S331>/Protected Division1' */
        /* Switch: '<S341>/Switch1' incorporates:
         *  Constant: '<S256>/Calib'
         *  Constant: '<S341>/Constant Value'
         *  Constant: '<S341>/Constant Value1'
         *  Constant: '<S341>/Constant Value2'
         *  Constant: '<S341>/Constant Value3'
         *  Logic: '<S341>/AND'
         *  RelationalOperator: '<S341>/Greater Than or Equal '
         *  RelationalOperator: '<S341>/Greater Than or Equal 1'
         *  RelationalOperator: '<S341>/Not Equal'
         *  RelationalOperator: '<S341>/Not Equal1'
         *  Switch: '<S341>/Switch2'
         *  Switch: '<S341>/Switch3'
         */
        if ((HeTCCR_t_MedTEB_dT != 0.0F) && (rtb_Add != 0.0F))
        {
            /* Switch: '<S341>/Switch1' incorporates:
             *  Product: '<S341>/Division'
             */
            rtb_Add = HeTCCR_t_MedTEB_dT / rtb_Add;
        }
        else if (HeTCCR_t_MedTEB_dT > 0.0F)
        {
            /* Switch: '<S341>/Switch2' incorporates:
             *  Constant: '<S341>/MAXFLOAT'
             *  Switch: '<S341>/Switch1'
             */
            rtb_Add = 3.402823466E+38F;
        }
        else if (HeTCCR_t_MedTEB_dT < 0.0F)
        {
            /* Switch: '<S341>/Switch3' incorporates:
             *  Constant: '<S341>/MINFLOAT'
             *  Switch: '<S341>/Switch1'
             *  Switch: '<S341>/Switch2'
             */
            rtb_Add = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S341>/Switch1' incorporates:
             *  Constant: '<S341>/Constant Value4'
             *  Switch: '<S341>/Switch2'
             *  Switch: '<S341>/Switch3'
             */
            rtb_Add = 0.0F;
        }

        /* End of Switch: '<S341>/Switch1' */
        /* End of Outputs for SubSystem: '<S331>/Protected Division1' */

        /* Switch: '<S331>/Switch1' incorporates:
         *  Constant: '<S331>/Constant Value2'
         *  Constant: '<S331>/Constant Value3'
         *  MinMax: '<S331>/MinMax'
         *  Sum: '<S331>/Summation1'
         *  UnitDelay: '<S331>/Unit Delay1'
         *  UnitDelay: '<S331>/Unit Delay3'
         */
        if (!TCCR_ac_DW.UnitDelay1_DSTATE_m)
        {
            TCCR_ac_DW.UnitDelay3_DSTATE_k = 1.0F;
        }

        TCCR_ac_DW.UnitDelay3_DSTATE_k = fminf(TCCR_ac_DW.UnitDelay3_DSTATE_k +
            rtb_Add, 1.0F);
    }

    /* End of Switch: '<S331>/Switch2' */

    /* Switch: '<S278>/Switch1' incorporates:
     *  Constant: '<S7>/Calib'
     *  Selector: '<S4>/Selector'
     */
    if (rtb_Switch2_jp)
    {
        /* Outputs for Atomic SubSystem: '<S278>/HSCL_FTC_TturbTimp' */
        TCCR_ac_HSCL_FTC_TturbTimp(rtb_TmpSignalConversionAtVeOHSR_n_Idle_p,
            rtb_Switch_i, tmpRead_2[((sint32)HeTCCR_n_SlipSpdFailIdx) - 1],
            &TCCR_ac_B.HSCL_FTC_TturbTimp_m);

        /* End of Outputs for SubSystem: '<S278>/HSCL_FTC_TturbTimp' */

        /* Switch: '<S278>/Switch1' incorporates:
         *  Constant: '<S7>/Calib'
         *  Selector: '<S4>/Selector'
         */
        rtb_Switch1_kr[0] = TCCR_ac_B.HSCL_FTC_TturbTimp_m.Switch1_l;
        rtb_Switch1_kr[1] = TCCR_ac_B.HSCL_FTC_TturbTimp_m.Sum2;
        rtb_Switch1_kr[2] = TCCR_ac_B.HSCL_FTC_TturbTimp_m.Vector_c;
        rtb_Switch1_kr[3] = TCCR_ac_B.HSCL_FTC_TturbTimp_m.Switch1;
    }
    else
    {
        /* Gain: '<S354>/Gain' incorporates:
         *  Lookup_n-D: '<S356>/Vector'
         *  Switch: '<S15>/Switch7'
         */
        rtb_TmpSignalConversionAtVeTTQR_M_LoadTo = 0.5F * look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeOHSR_n_Idle_p,
             (Rte_Prm_KxHSCR_r_TCC_Nc2FromTturb_CoeffsB_KxHSCR_r_TCC_Nc2FromTturb_CoeffsB
              ()),
             (Rte_Prm_KtHSCR_r_TCC_Nc2FromTturb_CoeffsB_KtHSCR_r_TCC_Nc2FromTturb_CoeffsB
              ()), 8U);

        /* Lookup_n-D: '<S355>/Vector' incorporates:
         *  Switch: '<S15>/Switch7'
         */
        rtb_Switch1_os = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeOHSR_n_Idle_p,
             (Rte_Prm_KxHSCR_r_TCC_Nc2FromTturb_CoeffsA_KxHSCR_r_TCC_Nc2FromTturb_CoeffsA
              ()),
             (Rte_Prm_KtHSCR_r_TCC_Nc2FromTturb_CoeffsA_KtHSCR_r_TCC_Nc2FromTturb_CoeffsA
              ()), 8U);

        /* Product: '<S354>/Product1' */
        rtb_Switch2_pq = rtb_TmpSignalConversionAtVeTTQR_M_LoadTo *
            rtb_TmpSignalConversionAtVeTTQR_M_LoadTo;

        /* Outputs for Atomic SubSystem: '<S354>/Protected Division2' */
        /* Switch: '<S360>/Switch1' incorporates:
         *  Constant: '<S360>/Constant Value1'
         *  RelationalOperator: '<S360>/Not Equal1'
         */
        if (rtb_Switch1_os != 0.0F)
        {
            /* Switch: '<S360>/Switch1' incorporates:
             *  Constant: '<S354>/Constant Value2'
             *  Product: '<S360>/Division'
             */
            rtb_Add = 1.0F / rtb_Switch1_os;
        }
        else
        {
            /* Switch: '<S360>/Switch1' */
            rtb_Add = 3.402823466E+38F;
        }

        /* End of Switch: '<S360>/Switch1' */
        /* End of Outputs for SubSystem: '<S354>/Protected Division2' */

        /* Switch: '<S334>/Switch1' incorporates:
         *  Constant: '<S7>/Calib'
         *  Selector: '<S4>/Selector'
         */
        if (tmpRead_2[((sint32)HeTCCR_n_SlipSpdFailIdx) - 1])
        {
            /* Switch: '<S334>/Switch1' incorporates:
             *  Constant: '<S334>/Constant Value5'
             */
            rtb_UnitDelay_jo = 0.0F;
        }
        else
        {
            /* Switch: '<S334>/Switch1' incorporates:
             *  Sum: '<S334>/Sum1'
             */
            rtb_UnitDelay_jo = rtb_Switch_i -
                rtb_TmpSignalConversionAtVeOHSR_n_Idle_p;
        }

        /* End of Switch: '<S334>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S354>/Protected Division' */
        /* Switch: '<S358>/Switch1' incorporates:
         *  Constant: '<S358>/Constant Value'
         *  Constant: '<S358>/Constant Value1'
         *  Constant: '<S358>/Constant Value2'
         *  Constant: '<S358>/Constant Value3'
         *  Logic: '<S358>/AND'
         *  RelationalOperator: '<S358>/Greater Than or Equal '
         *  RelationalOperator: '<S358>/Greater Than or Equal 1'
         *  RelationalOperator: '<S358>/Not Equal'
         *  RelationalOperator: '<S358>/Not Equal1'
         *  Switch: '<S358>/Switch2'
         *  Switch: '<S358>/Switch3'
         */
        if ((rtb_Switch2_pq != 0.0F) && (rtb_Switch1_os != 0.0F))
        {
            /* Switch: '<S358>/Switch1' incorporates:
             *  Product: '<S358>/Division'
             */
            rtb_Switch2_pq /= rtb_Switch1_os;
        }
        else if (rtb_Switch2_pq > 0.0F)
        {
            /* Switch: '<S358>/Switch2' incorporates:
             *  Constant: '<S358>/MAXFLOAT'
             *  Switch: '<S358>/Switch1'
             */
            rtb_Switch2_pq = 3.402823466E+38F;
        }
        else if (rtb_Switch2_pq < 0.0F)
        {
            /* Switch: '<S358>/Switch3' incorporates:
             *  Constant: '<S358>/MINFLOAT'
             *  Switch: '<S358>/Switch1'
             *  Switch: '<S358>/Switch2'
             */
            rtb_Switch2_pq = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S358>/Switch1' incorporates:
             *  Constant: '<S358>/Constant Value4'
             *  Switch: '<S358>/Switch2'
             *  Switch: '<S358>/Switch3'
             */
            rtb_Switch2_pq = 0.0F;
        }

        /* End of Switch: '<S358>/Switch1' */
        /* End of Outputs for SubSystem: '<S354>/Protected Division' */

        /* Outputs for Atomic SubSystem: '<S354>/Protected Division1' */
        /* Switch: '<S359>/Switch1' incorporates:
         *  Constant: '<S359>/Constant Value'
         *  Constant: '<S359>/Constant Value1'
         *  Constant: '<S359>/Constant Value2'
         *  Constant: '<S359>/Constant Value3'
         *  Logic: '<S359>/AND'
         *  RelationalOperator: '<S359>/Greater Than or Equal '
         *  RelationalOperator: '<S359>/Greater Than or Equal 1'
         *  RelationalOperator: '<S359>/Not Equal'
         *  RelationalOperator: '<S359>/Not Equal1'
         *  Switch: '<S359>/Switch2'
         *  Switch: '<S359>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeTTQR_M_LoadTo != 0.0F) &&
                (rtb_Switch1_os != 0.0F))
        {
            /* Switch: '<S359>/Switch1' incorporates:
             *  Product: '<S359>/Division'
             */
            rtb_TmpSignalConversionAtVeTTQR_M_LoadTo /= rtb_Switch1_os;
        }
        else if (rtb_TmpSignalConversionAtVeTTQR_M_LoadTo > 0.0F)
        {
            /* Switch: '<S359>/Switch2' incorporates:
             *  Constant: '<S359>/MAXFLOAT'
             *  Switch: '<S359>/Switch1'
             */
            rtb_TmpSignalConversionAtVeTTQR_M_LoadTo = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeTTQR_M_LoadTo < 0.0F)
        {
            /* Switch: '<S359>/Switch3' incorporates:
             *  Constant: '<S359>/MINFLOAT'
             *  Switch: '<S359>/Switch1'
             *  Switch: '<S359>/Switch2'
             */
            rtb_TmpSignalConversionAtVeTTQR_M_LoadTo = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S359>/Switch1' incorporates:
             *  Constant: '<S359>/Constant Value4'
             *  Switch: '<S359>/Switch2'
             *  Switch: '<S359>/Switch3'
             */
            rtb_TmpSignalConversionAtVeTTQR_M_LoadTo = 0.0F;
        }

        /* End of Switch: '<S359>/Switch1' */
        /* End of Outputs for SubSystem: '<S354>/Protected Division1' */

        /* Signum: '<S334>/Signum' */
        if (rtb_Add < 0.0F)
        {
            rtb_Switch1_os = -1.0F;
        }
        else if (rtb_Add > 0.0F)
        {
            rtb_Switch1_os = 1.0F;
        }
        else
        {
            rtb_Switch1_os = rtb_Add;
        }

        /* End of Signum: '<S334>/Signum' */

        /* Sum: '<S334>/Sum3' incorporates:
         *  Constant: '<S334>/Constant Value'
         *  Gain: '<S354>/Gain1'
         *  Lookup_n-D: '<S357>/Vector'
         *  MinMax: '<S334>/MinMax1'
         *  Product: '<S334>/Product'
         *  Product: '<S334>/Product1'
         *  Sqrt: '<S353>/Sqrt'
         *  Sum: '<S334>/Sum2'
         *  Sum: '<S354>/Sum1'
         *  Switch: '<S15>/Switch7'
         *  Switch: '<S353>/Switch'
         */
        rtb_Add = (sqrtf(fmaxf((rtb_UnitDelay_jo - (look1_iflf_binlca_16a
                       (rtb_TmpSignalConversionAtVeOHSR_n_Idle_p,
                        (Rte_Prm_KxHSCR_r_TCC_Nc2FromTturb_CoeffsC_KxHSCR_r_TCC_Nc2FromTturb_CoeffsC
                         ()),
                        (Rte_Prm_KtHSCR_r_TCC_Nc2FromTturb_CoeffsC_KtHSCR_r_TCC_Nc2FromTturb_CoeffsC
                         ()), 3U) - rtb_Switch2_pq)) * rtb_Add, 0.0F)) *
                   rtb_Switch1_os) + (-rtb_TmpSignalConversionAtVeTTQR_M_LoadTo);

        /* Outputs for Atomic SubSystem: '<S334>/Protected Division2' */
        /* Switch: '<S352>/Switch1' incorporates:
         *  Constant: '<S352>/Constant Value'
         *  Constant: '<S352>/Constant Value1'
         *  Constant: '<S352>/Constant Value2'
         *  Constant: '<S352>/Constant Value3'
         *  Logic: '<S352>/AND'
         *  RelationalOperator: '<S352>/Greater Than or Equal '
         *  RelationalOperator: '<S352>/Greater Than or Equal 1'
         *  RelationalOperator: '<S352>/Not Equal'
         *  RelationalOperator: '<S352>/Not Equal1'
         *  Switch: '<S352>/Switch2'
         *  Switch: '<S352>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeOHSR_n_Idle_p != 0.0F) && (rtb_Switch_i
                != 0.0F))
        {
            /* Switch: '<S352>/Switch1' incorporates:
             *  Product: '<S352>/Division'
             */
            rtb_UnitDelay_jo = rtb_TmpSignalConversionAtVeOHSR_n_Idle_p /
                rtb_Switch_i;
        }
        else if (rtb_TmpSignalConversionAtVeOHSR_n_Idle_p > 0.0F)
        {
            /* Switch: '<S352>/Switch2' incorporates:
             *  Constant: '<S352>/MAXFLOAT'
             *  Switch: '<S352>/Switch1'
             */
            rtb_UnitDelay_jo = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeOHSR_n_Idle_p < 0.0F)
        {
            /* Switch: '<S352>/Switch3' incorporates:
             *  Constant: '<S352>/MINFLOAT'
             *  Switch: '<S352>/Switch1'
             *  Switch: '<S352>/Switch2'
             */
            rtb_UnitDelay_jo = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S352>/Switch1' incorporates:
             *  Constant: '<S352>/Constant Value4'
             *  Switch: '<S352>/Switch2'
             *  Switch: '<S352>/Switch3'
             */
            rtb_UnitDelay_jo = 0.0F;
        }

        /* End of Switch: '<S352>/Switch1' */
        /* End of Outputs for SubSystem: '<S334>/Protected Division2' */

        /* Lookup_n-D: '<S350>/Vector' incorporates:
         *  Switch: '<S352>/Switch1'
         */
        rtb_Switch2_pq = look1_iflf_binlca_16a(rtb_UnitDelay_jo,
            (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
            (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

        /* Outputs for Atomic SubSystem: '<S334>/Protected Division1' */
        /* Switch: '<S351>/Switch1' incorporates:
         *  Constant: '<S351>/Constant Value'
         *  Constant: '<S351>/Constant Value1'
         *  Constant: '<S351>/Constant Value2'
         *  Constant: '<S351>/Constant Value3'
         *  Logic: '<S351>/AND'
         *  RelationalOperator: '<S351>/Greater Than or Equal '
         *  RelationalOperator: '<S351>/Greater Than or Equal 1'
         *  RelationalOperator: '<S351>/Not Equal'
         *  RelationalOperator: '<S351>/Not Equal1'
         *  Switch: '<S351>/Switch2'
         *  Switch: '<S351>/Switch3'
         */
        if ((rtb_Add != 0.0F) && (rtb_Switch2_pq != 0.0F))
        {
            /* Switch: '<S278>/Switch1' incorporates:
             *  Product: '<S351>/Division'
             *  Switch: '<S351>/Switch1'
             */
            rtb_Switch1_kr[0] = rtb_Add / rtb_Switch2_pq;
        }
        else if (rtb_Add > 0.0F)
        {
            /* Switch: '<S278>/Switch1' incorporates:
             *  Constant: '<S351>/MAXFLOAT'
             *  Switch: '<S351>/Switch1'
             *  Switch: '<S351>/Switch2'
             */
            rtb_Switch1_kr[0] = 3.402823466E+38F;
        }
        else if (rtb_Add < 0.0F)
        {
            /* Switch: '<S278>/Switch1' incorporates:
             *  Constant: '<S351>/MINFLOAT'
             *  Switch: '<S351>/Switch1'
             *  Switch: '<S351>/Switch2'
             *  Switch: '<S351>/Switch3'
             */
            rtb_Switch1_kr[0] = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S278>/Switch1' incorporates:
             *  Constant: '<S351>/Constant Value4'
             *  Switch: '<S351>/Switch1'
             *  Switch: '<S351>/Switch2'
             *  Switch: '<S351>/Switch3'
             */
            rtb_Switch1_kr[0] = 0.0F;
        }

        /* End of Switch: '<S351>/Switch1' */
        /* End of Outputs for SubSystem: '<S334>/Protected Division1' */

        /* Switch: '<S278>/Switch1' */
        rtb_Switch1_kr[1] = rtb_Add;
        rtb_Switch1_kr[2] = rtb_Switch2_pq;
        rtb_Switch1_kr[3] = rtb_UnitDelay_jo;
    }

    /* End of Switch: '<S278>/Switch1' */

    /* Sum: '<S331>/Summation' incorporates:
     *  Constant: '<S331>/Constant Value'
     *  Product: '<S331>/Multiplication'
     *  Product: '<S331>/Multiplication3'
     *  Sum: '<S331>/Subtraction'
     *  UnitDelay: '<S278>/Unit Delay'
     *  UnitDelay: '<S331>/Unit Delay'
     *  UnitDelay: '<S331>/Unit Delay3'
     */
    for (i = 0; i < 4; i++)
    {
        TCCR_ac_DW.UnitDelay_DSTATE_kf[i] = ((1.0F -
            TCCR_ac_DW.UnitDelay3_DSTATE_k) * TCCR_ac_DW.UnitDelay_DSTATE_dz[i])
            + (TCCR_ac_DW.UnitDelay3_DSTATE_k * rtb_Switch1_kr[i]);
    }

    /* End of Sum: '<S331>/Summation' */

    /* MinMax: '<S15>/MinMax1' */
    rtb_Switch_i = fmaxf(rtb_Switch_i, rtb_TmpSignalConversionAtVeOHSR_n_Idle_p);

    /* Outputs for Atomic SubSystem: '<S248>/HSCL_FTC_TturbTimp' */
    /* Selector: '<S4>/Selector' incorporates:
     *  Constant: '<S7>/Calib'
     */
    TCCR_ac_HSCL_FTC_TturbTimp
        (TCCR_ac_B.TmpSignalConversionAtVeVSDR_n_NTurbOutpo, rtb_Switch_i,
         tmpRead_2[((sint32)HeTCCR_n_SlipSpdFailIdx) - 1],
         &TCCR_ac_B.HSCL_FTC_TturbTimp_k);

    /* End of Outputs for SubSystem: '<S248>/HSCL_FTC_TturbTimp' */

    /* Outputs for Atomic SubSystem: '<S248>/HSCL_FTC_TturbTimp1' */
    TCCR_ac_HSCL_FTC_TturbTimp(rtb_TmpSignalConversionAtVeOHSR_n_Idle_p,
        rtb_Switch_i, tmpRead_2[((sint32)HeTCCR_n_SlipSpdFailIdx) - 1],
        &TCCR_ac_B.HSCL_FTC_TturbTimp1);

    /* End of Outputs for SubSystem: '<S248>/HSCL_FTC_TturbTimp1' */

    /* SwitchCase: '<S248>/Switch Case1' incorporates:
     *  Constant: '<S276>/Calib'
     */
    switch (KeTCCR_i_SelFTCSrc4Creep)
    {
      case 1:
        /* Outputs for IfAction SubSystem: '<S248>/BASE' incorporates:
         *  ActionPort: '<S272>/Action Port'
         */
        /* Merge: '<S248>/Merge' incorporates:
         *  Gain: '<S279>/Gain'
         */
        TCCR_ac_B.Merge_g[0] = TCCR_ac_B.HSCL_FTC_TturbTimp_k.Switch1_l;
        TCCR_ac_B.Merge_g[1] = TCCR_ac_B.HSCL_FTC_TturbTimp_k.Sum2;
        TCCR_ac_B.Merge_g[2] = TCCR_ac_B.HSCL_FTC_TturbTimp_k.Vector_c;

        /* Merge: '<S248>/Merge1' incorporates:
         *  Gain: '<S280>/Gain'
         */
        TCCR_ac_B.Merge1_h[0] = TCCR_ac_B.HSCL_FTC_TturbTimp1.Switch1_l;
        TCCR_ac_B.Merge1_h[1] = TCCR_ac_B.HSCL_FTC_TturbTimp1.Sum2;
        TCCR_ac_B.Merge1_h[2] = TCCR_ac_B.HSCL_FTC_TturbTimp1.Vector_c;

        /* End of Outputs for SubSystem: '<S248>/BASE' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S248>/DRIVE2COAST' incorporates:
         *  ActionPort: '<S273>/Action Port'
         */
        for (i = 0; i < 3; i++)
        {
            /* Merge: '<S248>/Merge' incorporates:
             *  Gain: '<S282>/Gain'
             *  UnitDelay: '<S277>/Unit Delay'
             */
            TCCR_ac_B.Merge_g[i] = TCCR_ac_DW.UnitDelay_DSTATE_m1[i];

            /* Merge: '<S248>/Merge1' incorporates:
             *  Gain: '<S281>/Gain'
             *  UnitDelay: '<S278>/Unit Delay'
             */
            TCCR_ac_B.Merge1_h[i] = TCCR_ac_DW.UnitDelay_DSTATE_kf[i];
        }

        /* End of Outputs for SubSystem: '<S248>/DRIVE2COAST' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of SwitchCase: '<S248>/Switch Case1' */

    /* Update for UnitDelay: '<S189>/Unit Delay1' incorporates:
     *  Constant: '<S189>/Constant Value5'
     */
    TCCR_ac_DW.UnitDelay1_DSTATE_n = true;

    /* Update for UnitDelay: '<S92>/X0=1' incorporates:
     *  Merge: '<S42>/Merge7'
     */
    TCCR_ac_DW.X01_DSTATE = TCCR_ac_B.VeTCCR_e_LCCMngSt;

    /* Update for UnitDelay: '<S134>/Unit Delay1' incorporates:
     *  Constant: '<S134>/Constant Value5'
     */
    TCCR_ac_DW.UnitDelay1_DSTATE_o = true;

    /* Update for UnitDelay: '<S247>/Unit Delay1' incorporates:
     *  Constant: '<S247>/TRUE Constant'
     */
    TCCR_ac_DW.UnitDelay1_DSTATE_pp = true;

    /* Update for UnitDelay: '<S299>/Unit Delay1' incorporates:
     *  Constant: '<S299>/Constant Value5'
     */
    TCCR_ac_DW.UnitDelay1_DSTATE_ll = true;

    /* Update for UnitDelay: '<S331>/Unit Delay1' incorporates:
     *  Constant: '<S331>/Constant Value5'
     */
    TCCR_ac_DW.UnitDelay1_DSTATE_m = true;

    /* Outport: '<Root>/VeTCCR_e_ClchStLCC' incorporates:
     *  DataTypeConversion: '<S25>/DataTypeConversion'
     *  Merge: '<S42>/Merge4'
     *  SignalConversion generated from: '<S1>/Clutch_stat_LCC'
     */
    (void)Rte_Write_VeTCCR_e_ClchStLCC_Value(TCCR_ac_B.VeTCCC_e_ClchStLCC);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeTCCR_e_LCCNCSgn' incorporates:
     *  Merge: '<S38>/Merge4'
     *  SignalConversion generated from: '<S1>/LCCNCSgn'
     */
    (void)Rte_Write_VeTCCR_e_LCCNCSgn_Value(TCCR_ac_B.Merge4);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TCCC_Process_TC'
     */
    /* Outport: '<Root>/VeTCCR_M_LCCTorq' incorporates:
     *  Gain: '<S39>/Gain'
     *  SignalConversion generated from: '<S1>/M_LCC'
     *  UnitDelay: '<S42>/Unit Delay6'
     */
    (void)Rte_Write_VeTCCR_M_LCCTorq_Value(TCCR_ac_DW.UnitDelay6_DSTATE_p);

    /* Switch: '<S24>/Switch1' incorporates:
     *  Constant: '<S24>/Constant Value1'
     *  Gain: '<S24>/Gain'
     *  RelationalOperator: '<S24>/Comparison1'
     *  UnitDelay: '<S24>/Unit Delay2'
     *  UnitDelay: '<S42>/Unit Delay6'
     */
    if (TCCR_ac_DW.UnitDelay2_DSTATE_d >= 0.0F)
    {
        rtb_Switch_i = TCCR_ac_DW.UnitDelay6_DSTATE_p;
    }
    else
    {
        rtb_Switch_i = -TCCR_ac_DW.UnitDelay6_DSTATE_p;
    }

    /* End of Switch: '<S24>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeTCCR_M_LCCTorqSigned' incorporates:
     *  SignalConversion generated from: '<S1>/M_LCCSigned'
     */
    (void)Rte_Write_VeTCCR_M_LCCTorqSigned_Value(rtb_Switch_i);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TCCC_Process_TC'
     */
    /* Outport: '<Root>/VeTCCR_M_Timp' incorporates:
     *  Gain: '<S95>/Gain'
     *  SignalConversion generated from: '<S1>/M_Timp'
     */
    (void)Rte_Write_VeTCCR_M_Timp_Value(rtb_Switch4);

    /* Outport: '<Root>/VeTCCR_r_TR' incorporates:
     *  Gain: '<S178>/Gain'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_TorqRatio'
     */
    (void)Rte_Write_VeTCCR_r_TR_Value(TCCR_ac_B.Merge[1]);

    /* Outport: '<Root>/VeTCCR_M_CreepTimp' incorporates:
     *  Gain: '<S265>/Gain'
     *  SignalConversion generated from: '<S1>/Virtual_Timp'
     */
    (void)Rte_Write_VeTCCR_M_CreepTimp_Value(TCCR_ac_B.Merge_g[0]);

    /* Outport: '<Root>/VeTCCR_M_CreepTimpTgt' incorporates:
     *  Gain: '<S269>/Gain'
     *  SignalConversion generated from: '<S1>/Virtual_TimpTgt'
     */
    (void)Rte_Write_VeTCCR_M_CreepTimpTgt_Value(TCCR_ac_B.Merge1_h[0]);

    /* Outport: '<Root>/VeTCCR_M_CreepTturb' incorporates:
     *  Gain: '<S267>/Gain'
     *  SignalConversion generated from: '<S1>/Virtual_Tturb'
     */
    (void)Rte_Write_VeTCCR_M_CreepTturb_Value(TCCR_ac_B.Merge_g[1]);

    /* Outport: '<Root>/VeTCCR_r_CreepVrtlRt' incorporates:
     *  Gain: '<S268>/Gain'
     *  SignalConversion generated from: '<S1>/Virtual_ratio'
     */
    (void)Rte_Write_VeTCCR_r_CreepVrtlRt_Value(TCCR_ac_B.Merge_g[2]);

    /* Outport: '<Root>/VeTCCR_r_RampFactor' incorporates:
     *  Gain: '<S94>/Gain'
     *  SignalConversion generated from: '<S1>/r_RampFactor'
     *  UnitDelay: '<S42>/Unit Delay12'
     */
    (void)Rte_Write_VeTCCR_r_RampFactor_Value(TCCR_ac_DW.UnitDelay12_DSTATE);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/TCCR_FUNC_MedTEB' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
#endif

}

#endif

/* Model step function for TID2 */
#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

FUNC(void, TCCR_CODE) TCCR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    TeTRGR_e_TransRangeState tmpRead;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    uint16 tmpRead_0;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    float32 tmpRead_1[9];

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    float32 tmpRead_2[9];

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    TeTMMR_e_ClchStat tmpRead_3;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    uint16 tmpRead_4;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    TeOHSR_e_VLE_DriveStat tmpRead_5;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    TeESSR_e_EngStartStopSt tmpRead_6;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    boolean tmpRead_7[4];

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    sint16 rtb_UnitDelay7;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    float32 rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    float32 rtb_Sum1;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    uint16 rtb_UnitDelay4;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    boolean rtb_Comparison3_h;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    uint8 rtb_MultiportSwitch[2];

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    float32 rtb_TmpSignalConversionAtVeTSXR_r_TturbF;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    boolean rtb_AND_di;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    boolean rtb_AND_pq;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    float32 rtb_TmpSignalConversionAtVeVTVR_M_TLFCal;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    boolean rtb_Logical2_lj;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    boolean rtb_Logical1_m;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    float32 rtb_TmpSignalConversionAtVeAPSR_Pct_Acce;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    float32 rtb_TmpSignalConversionAtVeOHSR_n_IdleSp;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    float32 rtb_Summation_im[2];

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    float32 rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    float32 rtb_Switch1_p2;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    float32 rtb_TmpSignalConversionAtVeATRR_M_Output;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    float32 rtb_Sum1_np;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    float32 rtb_Sum8_a;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTRNR_e_Target;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTRNR_e_Actual;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    TeHSER_e_RngSt rtb_TmpSignalConversionAtVeHSER_e_RngStO;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    TeTINR_e_TCMTCCPreventionID rtb_TmpSignalConversionAtVeTINR_e_TCMTCC;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    float32 rtb_TmpSignalConversionAtVeOSMR_n_TransM;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    sint32 i;

#endif

#if Rte_SysCon_Variant_TCCR_FUNC_EnblNiTgtLead

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* Inport: '<Root>/VaCSLR_b_NCx_SlipSpdFailing' */
    (void)Rte_Read_VaCSLR_b_NCx_SlipSpdFailing_Value(tmpRead_7);

    /* Inport: '<Root>/VaOSMR_n_NTurb_FromNo' */
    (void)Rte_Read_VaOSMR_n_NTurb_FromNo_Value(tmpRead_2);

    /* Inport: '<Root>/VeTMMR_M_ClchTorqOncRaw' */
    (void)Rte_Read_VeTMMR_M_ClchTorqOncRaw_Value(&rtb_Switch1_p2);

    /* Outputs for Function Call SubSystem: '<Root>/TCCR_FUNC_MedTED' */
    /* SignalConversion generated from: '<S2>/VeVSDR_n_NTurb' incorporates:
     *  Inport: '<Root>/VeVSDR_n_NTurb'
     */
    (void)Rte_Read_VeVSDR_n_NTurb_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_NTurbO);

    /* SignalConversion generated from: '<S2>/VeTRNR_e_TargetGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_TargetGear'
     */
    (void)Rte_Read_VeTRNR_e_TargetGear_Value
        (&rtb_TmpSignalConversionAtVeTRNR_e_Target);

    /* SignalConversion generated from: '<S2>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        (&rtb_TmpSignalConversionAtVeAPSR_Pct_Acce);

    /* SignalConversion generated from: '<S2>/VeRGNR_M_RgnBrkOutTrq' incorporates:
     *  Inport: '<Root>/VeRGNR_M_RgnBrkOutTrq'
     */
    (void)Rte_Read_VeRGNR_M_RgnBrkOutTrq_Value
        (&rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk);

    /* SignalConversion generated from: '<S2>/VeATRR_M_OutputTorqReqImmedOITR' incorporates:
     *  Inport: '<Root>/VeATRR_M_OutputTorqReqImmedOITR'
     */
    (void)Rte_Read_VeATRR_M_OutputTorqReqImmedOITR_Value
        (&rtb_TmpSignalConversionAtVeATRR_M_Output);

    /* SignalConversion generated from: '<S2>/VeTSXR_r_TturbFromTof' incorporates:
     *  Inport: '<Root>/VeTSXR_r_TturbFromTof'
     */
    (void)Rte_Read_VeTSXR_r_TturbFromTof_Value
        (&rtb_TmpSignalConversionAtVeTSXR_r_TturbF);

    /* SignalConversion generated from: '<S2>/VeTRNR_e_ActualGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_ActualGear'
     */
    (void)Rte_Read_VeTRNR_e_ActualGear_Value
        (&rtb_TmpSignalConversionAtVeTRNR_e_Actual);

    /* SignalConversion generated from: '<S2>/VeHSER_e_RngSt' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngSt'
     */
    (void)Rte_Read_VeHSER_e_RngSt_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_RngStO);

    /* SignalConversion generated from: '<S2>/VeOSMR_n_TransMinEngSpd' incorporates:
     *  Inport: '<Root>/VeOSMR_n_TransMinEngSpd'
     */
    (void)Rte_Read_VeOSMR_n_TransMinEngSpd_Value
        (&rtb_TmpSignalConversionAtVeOSMR_n_TransM);

    /* SignalConversion generated from: '<S2>/VeOHSR_n_IdleSpdBlended' incorporates:
     *  Inport: '<Root>/VeOHSR_n_IdleSpdBlended'
     */
    (void)Rte_Read_VeOHSR_n_IdleSpdBlended_Value
        (&rtb_TmpSignalConversionAtVeOHSR_n_IdleSp);

    /* SignalConversion generated from: '<S2>/VeTINR_e_TCMTCCPreventionID' incorporates:
     *  Inport: '<Root>/VeTINR_e_TCMTCCPreventionID'
     */
    (void)Rte_Read_VeTINR_e_TCMTCCPreventionID_Value
        (&rtb_TmpSignalConversionAtVeTINR_e_TCMTCC);

    /* SignalConversion generated from: '<S2>/VeVTVR_M_TLFCalc_TC2AtMin' incorporates:
     *  Inport: '<Root>/VeVTVR_M_TLFCalc_TC2AtMin'
     */
    (void)Rte_Read_VeVTVR_M_TLFCalc_TC2AtMin_Value
        (&rtb_TmpSignalConversionAtVeVTVR_M_TLFCal);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/TCCC_Procs_NiTgtLC'
     */
    /* Sum: '<S373>/Sum1' incorporates:
     *  Constant: '<S401>/Calib'
     *  DataTypeConversion: '<S373>/Data Type Conversion'
     *  Selector: '<S373>/Selector'
     *  Selector: '<S373>/Selector1'
     *  SignalConversion generated from: '<S2>/VeTRNR_e_TargetGear'
     *  SignalConversion: '<S368>/Signal Conversion'
     */
    rtb_Sum1 = rtb_TmpSignalConversionAtVeVSDR_n_NTurbO -
        tmpRead_2[KaTCCR_i_MapTCMGear2OptGear
        [(rtb_TmpSignalConversionAtVeTRNR_e_Target)]];

    /* Outputs for Atomic SubSystem: '<S373>/Hysteresis' */
    /* Switch: '<S400>/Switch1' incorporates:
     *  Constant: '<S400>/Constant Value'
     *  Constant: '<S403>/Calib'
     *  Constant: '<S404>/Calib'
     *  RelationalOperator: '<S400>/Greater  Than'
     *  RelationalOperator: '<S400>/Greater  Than1'
     *  UnitDelay: '<S400>/Unit Delay'
     */
    if (rtb_Sum1 > KeTCCR_n_NTurbAsyncEngageRSP)
    {
        TCCR_ac_DW.UnitDelay_DSTATE_ls = true;
    }
    else
    {
        TCCR_ac_DW.UnitDelay_DSTATE_ls = ((rtb_Sum1 >=
            KeTCCR_n_NTurbAsyncEngageLSP) && (TCCR_ac_DW.UnitDelay_DSTATE_ls));
    }

    /* End of Switch: '<S400>/Switch1' */
    /* End of Outputs for SubSystem: '<S373>/Hysteresis' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/TCCR_FUNC_MedTED' */

    /* Inport: '<Root>/VeOHSR_e_ILEState' */
    (void)Rte_Read_VeOHSR_e_ILEState_Value(&tmpRead_5);

    /* Inport: '<Root>/VeOSMR_d_ManualAllowedGr' */
    (void)Rte_Read_VeOSMR_d_ManualAllowedGr_Value(&tmpRead_4);

    /* Inport: '<Root>/VaSCOR_n_C2SlipSpdDsrdMB' */
    (void)Rte_Read_VaSCOR_n_C2SlipSpdDsrdMB_Value(tmpRead_1);

    /* Inport: '<Root>/VeOSMR_d_ManualAllowedMB' */
    (void)Rte_Read_VeOSMR_d_ManualAllowedMB_Value(&tmpRead_0);

    /* Inport: '<Root>/VeTRGR_e_VldtdTransRngSt' */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/TCCR_FUNC_MedTED' */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/TCCC_Procs_NiTgtLC'
     */
    /* Logic: '<S373>/Logical' incorporates:
     *  Constant: '<S402>/Calib'
     *  RelationalOperator: '<S373>/Comparison3'
     *  UnitDelay: '<S400>/Unit Delay'
     */
    VeTCCR_b_ClchOncActive = ((rtb_Switch1_p2 >= KeTCCR_M_ClchTorqOncThrsh) &&
        (TCCR_ac_DW.UnitDelay_DSTATE_ls));

    /* Selector: '<S374>/Selector1' incorporates:
     *  Constant: '<S405>/Calib'
     *  DataTypeConversion: '<S374>/Data Type Conversion1'
     *  SignalConversion generated from: '<S2>/VeTRNR_e_ActualGear'
     */
    rtb_Sum1 = (Rte_Prm_KaTSXR_r_TCMGearRatios_KaTSXR_r_TCMGearRatios())
        [rtb_TmpSignalConversionAtVeTRNR_e_Actual];

    /* Outputs for Atomic SubSystem: '<S368>/TCCC_Timp_NiTgt' */
    /* UnitDelay: '<S375>/Unit Delay4' */
    rtb_UnitDelay4 = TCCR_ac_DW.UnitDelay4_DSTATE;

    /* Selector: '<S375>/Selector' incorporates:
     *  Constant: '<S407>/Calib'
     *  DataTypeConversion: '<S375>/Data Type Conversion'
     *  SignalConversion generated from: '<S2>/VeHSER_e_RngSt'
     *  UnitDelay: '<S375>/Unit Delay4'
     */
    TCCR_ac_DW.UnitDelay4_DSTATE = KaTCCR_i_NiTargetProcBlockSel
        [(rtb_TmpSignalConversionAtVeHSER_e_RngStO)];

    /* RelationalOperator: '<S375>/Comparison3' incorporates:
     *  UnitDelay: '<S375>/Unit Delay4'
     */
    rtb_Comparison3_h = (rtb_UnitDelay4 != TCCR_ac_DW.UnitDelay4_DSTATE);

    /* Switch: '<S375>/Switch' incorporates:
     *  UnitDelay: '<S375>/Unit Delay5'
     */
    if (rtb_Comparison3_h)
    {
        TCCR_ac_DW.UnitDelay5_DSTATE = rtb_UnitDelay4;
    }

    /* End of Switch: '<S375>/Switch' */

    /* UnitDelay: '<S375>/Unit Delay7' */
    rtb_UnitDelay7 = TCCR_ac_DW.UnitDelay7_DSTATE;

    /* DataTypeConversion: '<S375>/Data Type Conversion1' incorporates:
     *  Inport: '<Root>/VeOHSR_e_ILEState'
     *  UnitDelay: '<S375>/Unit Delay7'
     */
    TCCR_ac_DW.UnitDelay7_DSTATE = (sint16)tmpRead_5;

    /* Switch: '<S375>/Switch1' incorporates:
     *  RelationalOperator: '<S375>/Comparison6'
     *  UnitDelay: '<S375>/Unit Delay7'
     */
    if (rtb_UnitDelay7 == TCCR_ac_DW.UnitDelay7_DSTATE)
    {
        /* Switch: '<S375>/Switch1' incorporates:
         *  UnitDelay: '<S375>/Unit Delay8'
         */
        rtb_UnitDelay7 = TCCR_ac_DW.UnitDelay8_DSTATE;
    }

    /* End of Switch: '<S375>/Switch1' */

    /* DataTypeConversion: '<S416>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     *  UnitDelay: '<S375>/Unit Delay8'
     */
    TCCR_ac_DW.UnitDelay8_DSTATE = (sint16)tmpRead;

    /* MultiPortSwitch: '<S416>/Multiport Switch' incorporates:
     *  Constant: '<S526>/Calib'
     *  Selector: '<S416>/Selector1'
     *  UnitDelay: '<S375>/Unit Delay8'
     */
    switch (KaTCCR_i_PRNDL_Gr_Src[(TCCR_ac_DW.UnitDelay8_DSTATE)])
    {
      case 1:
        /* MultiPortSwitch: '<S416>/Multiport Switch' incorporates:
         *  Constant: '<S416>/Constant Value'
         */
        for (i = 0; i < 2; i++)
        {
            rtb_MultiportSwitch[i] = 0U;
        }
        break;

      case 2:
        /* MultiPortSwitch: '<S416>/Multiport Switch' incorporates:
         *  Constant: '<S416>/Constant Value1'
         */
        for (i = 0; i < 2; i++)
        {
            rtb_MultiportSwitch[i] = 1U;
        }
        break;

      default:
        /* MultiPortSwitch: '<S416>/Multiport Switch' incorporates:
         *  Constant: '<S525>/Calib'
         *  DataTypeConversion: '<S373>/Data Type Conversion'
         *  DataTypeConversion: '<S374>/Data Type Conversion1'
         *  Selector: '<S373>/Selector'
         *  Selector: '<S373>/Selector1'
         *  Selector: '<S374>/Selector1'
         *  Selector: '<S416>/Selector4'
         *  SignalConversion generated from: '<S2>/VeTRNR_e_ActualGear'
         *  SignalConversion generated from: '<S2>/VeTRNR_e_TargetGear'
         */
        rtb_MultiportSwitch[0] = KaTCCR_i_GearPrtct
            [(rtb_TmpSignalConversionAtVeTRNR_e_Target)];
        rtb_MultiportSwitch[1] = KaTCCR_i_GearPrtct
            [(rtb_TmpSignalConversionAtVeTRNR_e_Actual)];
        break;
    }

    /* End of MultiPortSwitch: '<S416>/Multiport Switch' */
    /* End of Outputs for SubSystem: '<S368>/TCCC_Timp_NiTgt' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/TCCR_FUNC_MedTED' */

    /* Inport: '<Root>/VeTRNR_e_TCMLCCTgt' */
    (void)Rte_Read_VeTRNR_e_TCMLCCTgt_Value(&tmpRead_3);

    /* Outputs for Function Call SubSystem: '<Root>/TCCR_FUNC_MedTED' */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/TCCC_Procs_NiTgtLC'
     */
    /* Outputs for Atomic SubSystem: '<S368>/TCCC_Timp_NiTgt' */
    /* MATLAB Function: '<S440>/MATLAB Function' incorporates:
     *  SignalConversion: '<S368>/Signal Conversion3'
     */
    /* MATLAB Function 'TCCR_FUNC_MedTED/TCCC_Procs_NiTgtLC/TCCC_Timp_NiTgt/LCC_MinMax_Limits/GetBitFrom16BitRegister/MATLAB Function': '<S445>:1' */
    /* '<S445>:1:2' */
    rtb_UnitDelay4 = 0U;

    /* '<S445>:1:3' */
    rtb_AND_pq = true;

    /* '<S445>:1:4' */
    if (((sint32)rtb_MultiportSwitch[0]) < 16)
    {
        /* '<S445>:1:4' */
        /* '<S445>:1:5' */
        rtb_UnitDelay4 = (uint16)((uint32)(((uint32)1) << ((uint32)
            rtb_MultiportSwitch[0])));
    }

    /* '<S445>:1:7' */
    if ((((sint32)tmpRead_4) & ((sint32)rtb_UnitDelay4)) == 0)
    {
        /* '<S445>:1:8' */
        /* '<S445>:1:9' */
        rtb_AND_pq = false;
    }

    /* Switch: '<S408>/Switch' incorporates:
     *  Constant: '<S408>/Constant Value'
     *  Constant: '<S437>/Constant'
     *  Constant: '<S438>/Constant'
     *  Constant: '<S439>/Constant'
     *  Constant: '<S441>/Calib'
     *  Inport: '<Root>/VeTRNR_e_TCMLCCTgt'
     *  Logic: '<S408>/Logical'
     *  Logic: '<S408>/Logical1'
     *  MATLAB Function: '<S440>/MATLAB Function'
     *  RelationalOperator: '<S408>/Comparison1'
     *  RelationalOperator: '<S408>/Comparison2'
     *  RelationalOperator: '<S408>/Comparison4'
     */
    if (((((uint32)tmpRead_3) == CeTMMR_e_ClchLock) && ((((uint32)
            rtb_TmpSignalConversionAtVeTINR_e_TCMTCC) == CeTINR_e_TCMHonorHCPReq)
          || (((uint32)rtb_TmpSignalConversionAtVeTINR_e_TCMTCC) ==
              CeTINR_e_TCCMapArbOvrrd))) && rtb_AND_pq)
    {
        rtb_Switch1_p2 = KeTCCR_M_LeadTcRMaxRaw;
    }
    else
    {
        rtb_Switch1_p2 = 0.0F;
    }

    /* End of Switch: '<S408>/Switch' */

    /* MinMax: '<S408>/MinMax1' incorporates:
     *  Lookup_n-D: '<S442>/Vector'
     *  SignalConversion generated from: '<S2>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    VeTCCR_n_LeadTcR_MaxRaw = fmaxf(look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeAPSR_Pct_Acce, ((const float32 *)
        &(KxTCCR_n_AccPed_Clch2[0])), ((const float32 *)&(KtTCCR_n_AccPed_Clch2
        [0])), 10U), rtb_Switch1_p2);

    /* Switch: '<S408>/Switch2' incorporates:
     *  Constant: '<S408>/Constant Value1'
     *  Inport: '<Root>/VeRGNR_r_FrontRgnRampOut'
     *  RelationalOperator: '<S408>/Comparison5'
     */
    if (rtb_TmpSignalConversionAtVeTSXR_r_TturbF != 0.0F)
    {
        /* Outputs for Atomic SubSystem: '<S408>/Protected Division2' */
        /* Switch: '<S444>/Switch1' incorporates:
         *  Constant: '<S444>/Constant Value'
         *  Constant: '<S444>/Constant Value1'
         *  Constant: '<S444>/Constant Value2'
         *  Constant: '<S444>/Constant Value3'
         *  Logic: '<S444>/AND'
         *  RelationalOperator: '<S444>/Greater Than or Equal '
         *  RelationalOperator: '<S444>/Greater Than or Equal 1'
         *  RelationalOperator: '<S444>/Not Equal'
         *  RelationalOperator: '<S444>/Not Equal1'
         *  Switch: '<S444>/Switch2'
         *  Switch: '<S444>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk != 0.0F) &&
                (rtb_TmpSignalConversionAtVeTSXR_r_TturbF != 0.0F))
        {
            /* Switch: '<S444>/Switch1' incorporates:
             *  Product: '<S444>/Division'
             */
            rtb_Switch1_p2 = rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk /
                rtb_TmpSignalConversionAtVeTSXR_r_TturbF;
        }
        else if (rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk > 0.0F)
        {
            /* Switch: '<S444>/Switch2' incorporates:
             *  Constant: '<S444>/MAXFLOAT'
             *  Switch: '<S444>/Switch1'
             */
            rtb_Switch1_p2 = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk < 0.0F)
        {
            /* Switch: '<S444>/Switch3' incorporates:
             *  Constant: '<S444>/MINFLOAT'
             *  Switch: '<S444>/Switch1'
             *  Switch: '<S444>/Switch2'
             */
            rtb_Switch1_p2 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S444>/Switch1' incorporates:
             *  Constant: '<S444>/Constant Value4'
             *  Switch: '<S444>/Switch2'
             *  Switch: '<S444>/Switch3'
             */
            rtb_Switch1_p2 = 0.0F;
        }

        /* End of Switch: '<S444>/Switch1' */
        /* End of Outputs for SubSystem: '<S408>/Protected Division2' */
        (void)Rte_Read_VeRGNR_r_FrontRgnRampOut_Value(&rtb_Sum1_np);

        /* Outputs for Atomic SubSystem: '<S408>/Protected Division' */
        /* Switch: '<S443>/Switch1' incorporates:
         *  Constant: '<S443>/Constant Value'
         *  Constant: '<S443>/Constant Value1'
         *  Constant: '<S443>/Constant Value2'
         *  Constant: '<S443>/Constant Value3'
         *  Inport: '<Root>/VeRGNR_r_FrontRgnRampOut'
         *  Logic: '<S443>/AND'
         *  RelationalOperator: '<S443>/Greater Than or Equal '
         *  RelationalOperator: '<S443>/Greater Than or Equal 1'
         *  RelationalOperator: '<S443>/Not Equal'
         *  RelationalOperator: '<S443>/Not Equal1'
         *  Switch: '<S443>/Switch2'
         *  Switch: '<S443>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeATRR_M_Output != 0.0F) &&
                (rtb_TmpSignalConversionAtVeTSXR_r_TturbF != 0.0F))
        {
            /* Switch: '<S443>/Switch1' incorporates:
             *  Product: '<S443>/Division'
             */
            rtb_TmpSignalConversionAtVeATRR_M_Output /=
                rtb_TmpSignalConversionAtVeTSXR_r_TturbF;
        }
        else if (rtb_TmpSignalConversionAtVeATRR_M_Output > 0.0F)
        {
            /* Switch: '<S443>/Switch2' incorporates:
             *  Constant: '<S443>/MAXFLOAT'
             *  Switch: '<S443>/Switch1'
             */
            rtb_TmpSignalConversionAtVeATRR_M_Output = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeATRR_M_Output < 0.0F)
        {
            /* Switch: '<S443>/Switch3' incorporates:
             *  Constant: '<S443>/MINFLOAT'
             *  Switch: '<S443>/Switch1'
             *  Switch: '<S443>/Switch2'
             */
            rtb_TmpSignalConversionAtVeATRR_M_Output = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S443>/Switch1' incorporates:
             *  Constant: '<S443>/Constant Value4'
             *  Switch: '<S443>/Switch2'
             *  Switch: '<S443>/Switch3'
             */
            rtb_TmpSignalConversionAtVeATRR_M_Output = 0.0F;
        }

        /* End of Switch: '<S443>/Switch1' */
        /* End of Outputs for SubSystem: '<S408>/Protected Division' */

        /* Switch: '<S408>/Switch2' incorporates:
         *  Constant: '<S408>/Constant Value3'
         *  MinMax: '<S408>/MinMax'
         *  Product: '<S408>/Product4'
         *  Sum: '<S408>/Sum6'
         */
        VeTCCR_n_LeadTcR_MinRaw = fminf((rtb_Switch1_p2 * rtb_Sum1_np) +
            rtb_TmpSignalConversionAtVeATRR_M_Output, 0.0F);
    }
    else
    {
        /* Switch: '<S408>/Switch2' incorporates:
         *  Constant: '<S408>/Constant Value2'
         */
        VeTCCR_n_LeadTcR_MinRaw = 0.0F;
    }

    /* End of Switch: '<S408>/Switch2' */

    /* SwitchCase: '<S375>/Switch_Case' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  Inport: '<Root>/VeOHSR_n_InputSpeedDsrdM1'
     *  Inport: '<Root>/VeVTVR_M_LoadTorqFront_Opt'
     *  UnitDelay: '<S375>/Unit Delay4'
     */
    switch (TCCR_ac_DW.UnitDelay4_DSTATE)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S375>/TCCC_NeutralM2_SS' incorporates:
         *  ActionPort: '<S414>/Action Port'
         */
        /* Merge: '<S375>/Merge5' incorporates:
         *  Gain: '<S514>/Gain'
         */
        TCCR_ac_B.Merge5 = rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;

        /* Merge: '<S375>/Merge1' incorporates:
         *  Gain: '<S515>/Gain'
         */
        TCCR_ac_B.Merge1 = rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;

        /* Merge: '<S375>/Merge2' incorporates:
         *  Constant: '<S414>/Constant Value'
         *  SignalConversion generated from: '<S414>/LeTCCR_n_LeadTcR_Max'
         */
        TCCR_ac_B.Merge2 = 0.0F;

        /* Merge: '<S375>/Merge6' incorporates:
         *  Constant: '<S414>/Constant Value1'
         *  SignalConversion generated from: '<S414>/LeTCCR_n_LeadTcR_Min'
         */
        TCCR_ac_B.Merge6 = 0.0F;

        /* Merge: '<S375>/Merge3' incorporates:
         *  Constant: '<S414>/FALSE Constant'
         *  SignalConversion generated from: '<S414>/LeTCCR_b_LeadTcRMax_Latch'
         */
        VeTCCR_b_LeadTcRMax_LatchPrev = false;

        /* Merge: '<S375>/Merge4' incorporates:
         *  Constant: '<S414>/FALSE Constant1'
         *  SignalConversion generated from: '<S414>/LeTCCR_b_LeadTcRMin_Latch'
         */
        VeTCCR_b_LeadTcRMin_LatchPrev = false;

        /* End of Outputs for SubSystem: '<S375>/TCCC_NeutralM2_SS' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S375>/TCCC_NeutToM1orM3' incorporates:
         *  ActionPort: '<S413>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S413>/EdgeFalling' */
        /* Switch: '<S512>/Switch1' incorporates:
         *  Constant: '<S501>/FALSE Constant'
         */
        if (rtb_Comparison3_h)
        {
            TCCR_ac_DW.UnitDelay_DSTATE_p0 = false;
        }

        /* Logic: '<S501>/AND' incorporates:
         *  Logic: '<S501>/OR1'
         */
        rtb_AND_pq = ((!VeTCCR_b_ClchOncActive) &&
                      (TCCR_ac_DW.UnitDelay_DSTATE_p0));

        /* Logic: '<S499>/Logical2' incorporates:
         *  Logic: '<S500>/Logical2'
         *  Switch: '<S499>/Switch3'
         *  Switch: '<S500>/Switch3'
         *  Switch: '<S512>/Switch3'
         */
        rtb_Logical2_lj = !rtb_Comparison3_h;

        /* Switch: '<S512>/Switch1' incorporates:
         *  Switch: '<S512>/Switch3'
         *  UnitDelay: '<S512>/Unit Delay'
         */
        TCCR_ac_DW.UnitDelay_DSTATE_p0 = (rtb_Logical2_lj &&
            (VeTCCR_b_ClchOncActive));

        /* End of Outputs for SubSystem: '<S413>/EdgeFalling' */

        /* Outputs for Atomic SubSystem: '<S413>/EdgeRising' */
        /* Switch: '<S513>/Switch1' incorporates:
         *  Constant: '<S502>/TRUE Constant1'
         */
        if (rtb_Comparison3_h)
        {
            TCCR_ac_DW.UnitDelay_DSTATE_ae = true;
        }

        /* Logic: '<S502>/AND' incorporates:
         *  Logic: '<S502>/OR1'
         */
        rtb_AND_di = ((VeTCCR_b_ClchOncActive) &&
                      (!TCCR_ac_DW.UnitDelay_DSTATE_ae));

        /* Switch: '<S513>/Switch1' incorporates:
         *  Switch: '<S513>/Switch3'
         *  UnitDelay: '<S513>/Unit Delay'
         */
        TCCR_ac_DW.UnitDelay_DSTATE_ae = (rtb_Comparison3_h ||
            (VeTCCR_b_ClchOncActive));

        /* End of Outputs for SubSystem: '<S413>/EdgeRising' */

        /* Switch: '<S499>/Switch2' incorporates:
         *  Logic: '<S413>/Logical1'
         *  Switch: '<S499>/Switch3'
         */
        if (rtb_AND_di || rtb_AND_pq)
        {
            /* Switch: '<S413>/Switch1' */
            if (rtb_AND_pq)
            {
                /* Switch: '<S508>/Switch1' */
                if (rtb_Comparison3_h)
                {
                    /* UnitDelay: '<S499>/Unit Delay' incorporates:
                     *  Switch: '<S508>/Switch1'
                     */
                    TCCR_ac_DW.UnitDelay_DSTATE_n =
                        rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;
                }
                else
                {
                    /* UnitDelay: '<S499>/Unit Delay' incorporates:
                     *  Switch: '<S508>/Switch1'
                     *  UnitDelay: '<S508>/Unit Delay'
                     */
                    TCCR_ac_DW.UnitDelay_DSTATE_n =
                        TCCR_ac_DW.UnitDelay_DSTATE_gb;
                }

                /* End of Switch: '<S508>/Switch1' */
            }
            else
            {
                /* UnitDelay: '<S499>/Unit Delay' incorporates:
                 *  Switch: '<S413>/Switch1'
                 */
                TCCR_ac_DW.UnitDelay_DSTATE_n =
                    rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;
            }

            /* End of Switch: '<S413>/Switch1' */

            /* Switch: '<S499>/Switch1' incorporates:
             *  Constant: '<S499>/Constant Value4'
             *  UnitDelay: '<S499>/Unit Delay3'
             */
            TCCR_ac_DW.UnitDelay3_DSTATE_a = 0.0F;
        }
        else
        {
            /* MinMax: '<S499>/Maximum' incorporates:
             *  Constant: '<S503>/Calib'
             *  Constant: '<S504>/Calib'
             */
            rtb_TmpSignalConversionAtVeOSMR_n_TransM = fmaxf(HeTCCR_t_MedTED_dT,
                KeTCCR_t_TargetSpdBlndTime);

            /* Outputs for Atomic SubSystem: '<S499>/Protected Division' */
            /* Switch: '<S510>/Switch1' incorporates:
             *  Constant: '<S503>/Calib'
             *  Constant: '<S510>/Constant Value'
             *  Constant: '<S510>/Constant Value1'
             *  Constant: '<S510>/Constant Value2'
             *  Constant: '<S510>/Constant Value3'
             *  Logic: '<S510>/AND'
             *  RelationalOperator: '<S510>/Greater Than or Equal '
             *  RelationalOperator: '<S510>/Greater Than or Equal 1'
             *  RelationalOperator: '<S510>/Not Equal'
             *  RelationalOperator: '<S510>/Not Equal1'
             *  Switch: '<S510>/Switch2'
             *  Switch: '<S510>/Switch3'
             */
            if ((HeTCCR_t_MedTED_dT != 0.0F) &&
                    (rtb_TmpSignalConversionAtVeOSMR_n_TransM != 0.0F))
            {
                /* Switch: '<S510>/Switch1' incorporates:
                 *  Product: '<S510>/Division'
                 */
                rtb_TmpSignalConversionAtVeOSMR_n_TransM = HeTCCR_t_MedTED_dT /
                    rtb_TmpSignalConversionAtVeOSMR_n_TransM;
            }
            else if (HeTCCR_t_MedTED_dT > 0.0F)
            {
                /* Switch: '<S510>/Switch2' incorporates:
                 *  Constant: '<S510>/MAXFLOAT'
                 *  Switch: '<S510>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeOSMR_n_TransM = 3.402823466E+38F;
            }
            else if (HeTCCR_t_MedTED_dT < 0.0F)
            {
                /* Switch: '<S510>/Switch3' incorporates:
                 *  Constant: '<S510>/MINFLOAT'
                 *  Switch: '<S510>/Switch1'
                 *  Switch: '<S510>/Switch2'
                 */
                rtb_TmpSignalConversionAtVeOSMR_n_TransM = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S510>/Switch1' incorporates:
                 *  Constant: '<S510>/Constant Value4'
                 *  Switch: '<S510>/Switch2'
                 *  Switch: '<S510>/Switch3'
                 */
                rtb_TmpSignalConversionAtVeOSMR_n_TransM = 0.0F;
            }

            /* End of Switch: '<S510>/Switch1' */
            /* End of Outputs for SubSystem: '<S499>/Protected Division' */

            /* Switch: '<S499>/Switch1' incorporates:
             *  Constant: '<S499>/Constant Value2'
             *  Constant: '<S499>/Constant Value3'
             *  Logic: '<S499>/Logical'
             *  Logic: '<S499>/Logical2'
             *  MinMax: '<S499>/MinMax'
             *  Sum: '<S499>/Summation1'
             *  UnitDelay: '<S499>/Unit Delay1'
             *  UnitDelay: '<S499>/Unit Delay3'
             */
            if ((!TCCR_ac_DW.UnitDelay1_DSTATE_b) || (!rtb_Logical2_lj))
            {
                TCCR_ac_DW.UnitDelay3_DSTATE_a = 1.0F;
            }

            TCCR_ac_DW.UnitDelay3_DSTATE_a = fminf
                (TCCR_ac_DW.UnitDelay3_DSTATE_a +
                 rtb_TmpSignalConversionAtVeOSMR_n_TransM, 1.0F);
        }

        /* End of Switch: '<S499>/Switch2' */
        /* End of Outputs for SubSystem: '<S375>/TCCC_NeutToM1orM3' */
        (void)Rte_Read_VeOHSR_n_InputSpeedDsrdM1_Value(&rtb_Sum8_a);

        /* Outputs for IfAction SubSystem: '<S375>/TCCC_NeutToM1orM3' incorporates:
         *  ActionPort: '<S413>/Action Port'
         */
        /* Switch: '<S413>/Switch' incorporates:
         *  Inport: '<Root>/VeOHSR_n_InputSpeedDsrdM1'
         */
        if (!VeTCCR_b_ClchOncActive)
        {
            rtb_Sum8_a = rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;
        }

        /* End of Switch: '<S413>/Switch' */

        /* Sum: '<S499>/Summation' incorporates:
         *  Constant: '<S499>/Constant Value'
         *  Product: '<S499>/Multiplication'
         *  Product: '<S499>/Multiplication3'
         *  Sum: '<S499>/Subtraction'
         *  UnitDelay: '<S499>/Unit Delay'
         *  UnitDelay: '<S499>/Unit Delay3'
         */
        TCCR_ac_B.Merge1 = ((1.0F - TCCR_ac_DW.UnitDelay3_DSTATE_a) *
                            TCCR_ac_DW.UnitDelay_DSTATE_n) +
            (TCCR_ac_DW.UnitDelay3_DSTATE_a * rtb_Sum8_a);

        /* Switch: '<S500>/Switch2' incorporates:
         *  Logic: '<S413>/Logical2'
         *  Switch: '<S500>/Switch3'
         */
        if (rtb_AND_di || rtb_AND_pq)
        {
            /* Switch: '<S413>/Switch3' */
            if (rtb_AND_pq)
            {
                /* Switch: '<S509>/Switch1' */
                if (rtb_Comparison3_h)
                {
                    /* UnitDelay: '<S500>/Unit Delay' incorporates:
                     *  Switch: '<S509>/Switch1'
                     */
                    TCCR_ac_DW.UnitDelay_DSTATE_h =
                        rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;
                }
                else
                {
                    /* UnitDelay: '<S500>/Unit Delay' incorporates:
                     *  Switch: '<S509>/Switch1'
                     *  UnitDelay: '<S509>/Unit Delay'
                     */
                    TCCR_ac_DW.UnitDelay_DSTATE_h =
                        TCCR_ac_DW.UnitDelay_DSTATE_io;
                }

                /* End of Switch: '<S509>/Switch1' */
            }
            else
            {
                /* UnitDelay: '<S500>/Unit Delay' incorporates:
                 *  Switch: '<S413>/Switch3'
                 */
                TCCR_ac_DW.UnitDelay_DSTATE_h =
                    rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;
            }

            /* End of Switch: '<S413>/Switch3' */

            /* Switch: '<S500>/Switch1' incorporates:
             *  Constant: '<S500>/Constant Value4'
             *  UnitDelay: '<S500>/Unit Delay3'
             */
            TCCR_ac_DW.UnitDelay3_DSTATE_e = 0.0F;
        }
        else
        {
            /* MinMax: '<S500>/Maximum' incorporates:
             *  Constant: '<S503>/Calib'
             *  Constant: '<S505>/Calib'
             */
            rtb_TmpSignalConversionAtVeOSMR_n_TransM = fmaxf(HeTCCR_t_MedTED_dT,
                KeTCCR_t_TargetSpdMinBlndTime);

            /* Outputs for Atomic SubSystem: '<S500>/Protected Division' */
            /* Switch: '<S511>/Switch1' incorporates:
             *  Constant: '<S503>/Calib'
             *  Constant: '<S511>/Constant Value'
             *  Constant: '<S511>/Constant Value1'
             *  Constant: '<S511>/Constant Value2'
             *  Constant: '<S511>/Constant Value3'
             *  Logic: '<S511>/AND'
             *  RelationalOperator: '<S511>/Greater Than or Equal '
             *  RelationalOperator: '<S511>/Greater Than or Equal 1'
             *  RelationalOperator: '<S511>/Not Equal'
             *  RelationalOperator: '<S511>/Not Equal1'
             *  Switch: '<S511>/Switch2'
             *  Switch: '<S511>/Switch3'
             */
            if ((HeTCCR_t_MedTED_dT != 0.0F) &&
                    (rtb_TmpSignalConversionAtVeOSMR_n_TransM != 0.0F))
            {
                /* Switch: '<S511>/Switch1' incorporates:
                 *  Product: '<S511>/Division'
                 */
                rtb_TmpSignalConversionAtVeOSMR_n_TransM = HeTCCR_t_MedTED_dT /
                    rtb_TmpSignalConversionAtVeOSMR_n_TransM;
            }
            else if (HeTCCR_t_MedTED_dT > 0.0F)
            {
                /* Switch: '<S511>/Switch2' incorporates:
                 *  Constant: '<S511>/MAXFLOAT'
                 *  Switch: '<S511>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeOSMR_n_TransM = 3.402823466E+38F;
            }
            else if (HeTCCR_t_MedTED_dT < 0.0F)
            {
                /* Switch: '<S511>/Switch3' incorporates:
                 *  Constant: '<S511>/MINFLOAT'
                 *  Switch: '<S511>/Switch1'
                 *  Switch: '<S511>/Switch2'
                 */
                rtb_TmpSignalConversionAtVeOSMR_n_TransM = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S511>/Switch1' incorporates:
                 *  Constant: '<S511>/Constant Value4'
                 *  Switch: '<S511>/Switch2'
                 *  Switch: '<S511>/Switch3'
                 */
                rtb_TmpSignalConversionAtVeOSMR_n_TransM = 0.0F;
            }

            /* End of Switch: '<S511>/Switch1' */
            /* End of Outputs for SubSystem: '<S500>/Protected Division' */

            /* Switch: '<S500>/Switch1' incorporates:
             *  Constant: '<S500>/Constant Value2'
             *  Constant: '<S500>/Constant Value3'
             *  Logic: '<S500>/Logical'
             *  Logic: '<S500>/Logical2'
             *  MinMax: '<S500>/MinMax'
             *  Sum: '<S500>/Summation1'
             *  UnitDelay: '<S500>/Unit Delay1'
             *  UnitDelay: '<S500>/Unit Delay3'
             */
            if ((!TCCR_ac_DW.UnitDelay1_DSTATE_bp) || (!rtb_Logical2_lj))
            {
                TCCR_ac_DW.UnitDelay3_DSTATE_e = 1.0F;
            }

            TCCR_ac_DW.UnitDelay3_DSTATE_e = fminf
                (TCCR_ac_DW.UnitDelay3_DSTATE_e +
                 rtb_TmpSignalConversionAtVeOSMR_n_TransM, 1.0F);
        }

        /* End of Switch: '<S500>/Switch2' */

        /* Switch: '<S413>/Switch2' */
        if (!VeTCCR_b_ClchOncActive)
        {
            rtb_TmpSignalConversionAtVeOHSR_n_IdleSp =
                rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;
        }

        /* End of Switch: '<S413>/Switch2' */

        /* Sum: '<S500>/Summation' incorporates:
         *  Constant: '<S500>/Constant Value'
         *  Product: '<S500>/Multiplication'
         *  Product: '<S500>/Multiplication3'
         *  Sum: '<S500>/Subtraction'
         *  UnitDelay: '<S500>/Unit Delay'
         *  UnitDelay: '<S500>/Unit Delay3'
         */
        TCCR_ac_DW.UnitDelay_DSTATE_io = ((1.0F - TCCR_ac_DW.UnitDelay3_DSTATE_e)
            * TCCR_ac_DW.UnitDelay_DSTATE_h) + (TCCR_ac_DW.UnitDelay3_DSTATE_e *
            rtb_TmpSignalConversionAtVeOHSR_n_IdleSp);

        /* Merge: '<S375>/Merge5' incorporates:
         *  Gain: '<S507>/Gain'
         *  MinMax: '<S413>/MinMax'
         */
        TCCR_ac_B.Merge5 = fminf(TCCR_ac_B.Merge1,
            TCCR_ac_DW.UnitDelay_DSTATE_io);

        /* Switch: '<S508>/Switch3' incorporates:
         *  Switch: '<S509>/Switch3'
         *  UnitDelay: '<S508>/Unit Delay'
         *  UnitDelay: '<S509>/Unit Delay'
         */
        if (rtb_Comparison3_h)
        {
            TCCR_ac_DW.UnitDelay_DSTATE_gb =
                rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;
            TCCR_ac_DW.UnitDelay_DSTATE_io =
                rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;
        }
        else
        {
            TCCR_ac_DW.UnitDelay_DSTATE_gb = TCCR_ac_B.Merge1;
        }

        /* End of Switch: '<S508>/Switch3' */

        /* Merge: '<S375>/Merge2' incorporates:
         *  Constant: '<S413>/Constant Value'
         *  SignalConversion generated from: '<S413>/LeTCCR_n_LeadTcR_Max'
         */
        TCCR_ac_B.Merge2 = 0.0F;

        /* Merge: '<S375>/Merge6' incorporates:
         *  Constant: '<S413>/Constant Value1'
         *  SignalConversion generated from: '<S413>/LeTCCR_n_LeadTcR_Min'
         */
        TCCR_ac_B.Merge6 = 0.0F;

        /* Merge: '<S375>/Merge3' incorporates:
         *  Constant: '<S413>/FALSE Constant'
         *  SignalConversion generated from: '<S413>/LeTCCR_b_LeadTcRMax_Latch'
         */
        VeTCCR_b_LeadTcRMax_LatchPrev = false;

        /* Merge: '<S375>/Merge4' incorporates:
         *  Constant: '<S413>/FALSE Constant1'
         *  SignalConversion generated from: '<S413>/LeTCCR_b_LeadTcRMin_Latch'
         */
        VeTCCR_b_LeadTcRMin_LatchPrev = false;

        /* Update for UnitDelay: '<S499>/Unit Delay1' incorporates:
         *  Constant: '<S499>/TRUE Constant'
         */
        TCCR_ac_DW.UnitDelay1_DSTATE_b = true;

        /* Update for UnitDelay: '<S500>/Unit Delay1' incorporates:
         *  Constant: '<S500>/TRUE Constant'
         */
        TCCR_ac_DW.UnitDelay1_DSTATE_bp = true;

        /* End of Outputs for SubSystem: '<S375>/TCCC_NeutToM1orM3' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S375>/TCCC_M1_M3' incorporates:
         *  ActionPort: '<S412>/Action Port'
         */
        /* MATLAB Function: '<S446>/MATLAB Function' incorporates:
         *  SignalConversion: '<S368>/Signal Conversion2'
         */
        /* MATLAB Function 'TCCR_FUNC_MedTED/TCCC_Procs_NiTgtLC/TCCC_Timp_NiTgt/TCCC_M1_M3/GetBitFrom16BitRegister/MATLAB Function': '<S455>:1' */
        /* '<S455>:1:2' */
        rtb_UnitDelay4 = 0U;

        /* '<S455>:1:3' */
        rtb_AND_pq = true;

        /* '<S455>:1:4' */
        if (((sint32)rtb_MultiportSwitch[0]) < 16)
        {
            /* '<S455>:1:4' */
            /* '<S455>:1:5' */
            rtb_UnitDelay4 = (uint16)((uint32)(((uint32)1) << ((uint32)
                rtb_MultiportSwitch[0])));
        }

        /* '<S455>:1:7' */
        if ((((sint32)tmpRead_0) & ((sint32)rtb_UnitDelay4)) == 0)
        {
            /* '<S455>:1:8' */
            /* '<S455>:1:9' */
            rtb_AND_pq = false;
        }

        /* MATLAB Function: '<S447>/MATLAB Function' incorporates:
         *  SignalConversion: '<S368>/Signal Conversion2'
         */
        /* MATLAB Function 'TCCR_FUNC_MedTED/TCCC_Procs_NiTgtLC/TCCC_Timp_NiTgt/TCCC_M1_M3/GetBitFrom16BitRegister1/MATLAB Function': '<S456>:1' */
        /* '<S456>:1:2' */
        rtb_UnitDelay4 = 0U;

        /* '<S456>:1:3' */
        rtb_AND_di = true;

        /* '<S456>:1:4' */
        if (((sint32)rtb_MultiportSwitch[1]) < 16)
        {
            /* '<S456>:1:4' */
            /* '<S456>:1:5' */
            rtb_UnitDelay4 = (uint16)((uint32)(((uint32)1) << ((uint32)
                rtb_MultiportSwitch[1])));
        }

        /* '<S456>:1:7' */
        if ((((sint32)tmpRead_0) & ((sint32)rtb_UnitDelay4)) == 0)
        {
            /* '<S456>:1:8' */
            /* '<S456>:1:9' */
            rtb_AND_di = false;
        }

        /* Outputs for Atomic SubSystem: '<S449>/Hysteresis' */
        /* Switch: '<S459>/Switch3' incorporates:
         *  Constant: '<S449>/FALSE Constant'
         *  UnitDelay: '<S459>/Unit Delay'
         */
        if (rtb_Comparison3_h)
        {
            TCCR_ac_DW.UnitDelay_DSTATE_p5 = false;
        }
        else
        {
            /* Sum: '<S449>/Sum1' incorporates:
             *  UnitDelay: '<S375>/Unit Delay3'
             */
            rtb_Sum1_np = TCCR_ac_DW.UnitDelay3_DSTATE -
                rtb_TmpSignalConversionAtVeVTVR_M_TLFCal;

            /* Switch: '<S459>/Switch1' incorporates:
             *  Constant: '<S462>/Calib'
             *  RelationalOperator: '<S459>/Greater  Than'
             */
            if (rtb_Sum1_np > KeTCCR_dM_LeadTcRMaxLURSP)
            {
                /* UnitDelay: '<S459>/Unit Delay' incorporates:
                 *  Constant: '<S459>/Constant Value'
                 *  Switch: '<S459>/Switch1'
                 */
                TCCR_ac_DW.UnitDelay_DSTATE_p5 = true;
            }
            else
            {
                /* UnitDelay: '<S459>/Unit Delay' incorporates:
                 *  Constant: '<S461>/Calib'
                 *  RelationalOperator: '<S459>/Greater  Than1'
                 *  Switch: '<S459>/Switch1'
                 */
                TCCR_ac_DW.UnitDelay_DSTATE_p5 = ((rtb_Sum1_np >=
                    KeTCCR_dM_LeadTcRMaxLULSP) &&
                    (TCCR_ac_DW.UnitDelay_DSTATE_p5));
            }

            /* End of Switch: '<S459>/Switch1' */
        }

        /* End of Switch: '<S459>/Switch3' */
        /* End of Outputs for SubSystem: '<S449>/Hysteresis' */

        /* Switch: '<S449>/Switch2' incorporates:
         *  UnitDelay: '<S459>/Unit Delay'
         */
        if (TCCR_ac_DW.UnitDelay_DSTATE_p5)
        {
            /* Switch: '<S449>/Switch2' incorporates:
             *  Constant: '<S449>/Constant Value4'
             */
            rtb_Sum1_np = 1.0E+8F;
        }
        else
        {
            /* Switch: '<S449>/Switch2' incorporates:
             *  Constant: '<S458>/Calib'
             *  Lookup_n-D: '<S463>/Vector'
             *  Product: '<S449>/Product4'
             *  SignalConversion generated from: '<S2>/VeAPSR_Pct_AccelPedalEffPosition'
             */
            rtb_Sum1_np = look1_iflf_binlca_16a
                (rtb_TmpSignalConversionAtVeAPSR_Pct_Acce, ((const float32 *)
                  &(KxTCCR_dM_LeadTCRMaxLU[0])), ((const float32 *)
                  &(KtTCCR_dM_LeadTCRMaxLU[0])), 5U) * HeTCCR_t_MedTED_dT;
        }

        /* End of Switch: '<S449>/Switch2' */

        /* Switch: '<S449>/Switch1' incorporates:
         *  RelationalOperator: '<S449>/Comparison7'
         *  Switch: '<S449>/Switch6'
         */
        if (VeTCCR_n_LeadTcR_MaxRaw < rtb_TmpSignalConversionAtVeVTVR_M_TLFCal)
        {
            /* Switch: '<S449>/Switch1' incorporates:
             *  Constant: '<S458>/Calib'
             *  Constant: '<S460>/Calib'
             *  Product: '<S449>/Product1'
             */
            rtb_Switch1_p2 = HeTCCR_t_MedTED_dT * KeTCCR_dM_LeadTCRMaxLD;

            /* Switch: '<S449>/Switch6' incorporates:
             *  MinMax: '<S449>/MinMax'
             *  UnitDelay: '<S375>/Unit Delay3'
             */
            TCCR_ac_DW.UnitDelay3_DSTATE = fminf
                (rtb_TmpSignalConversionAtVeVTVR_M_TLFCal,
                 TCCR_ac_DW.UnitDelay3_DSTATE);
        }
        else
        {
            /* Switch: '<S449>/Switch1' incorporates:
             *  Constant: '<S449>/Constant Value5'
             */
            rtb_Switch1_p2 = -1.0E+8F;
        }

        /* End of Switch: '<S449>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S449>/GradientLimiter1' */
        /* Sum: '<S457>/Sum2' */
        rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk = VeTCCR_n_LeadTcR_MaxRaw -
            TCCR_ac_DW.UnitDelay3_DSTATE;

        /* Outputs for Atomic SubSystem: '<S457>/Limiter' */
        /* Switch: '<S464>/Switch1' incorporates:
         *  RelationalOperator: '<S464>/Relational Operator'
         */
        if (rtb_Sum1_np < rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk)
        {
            /* Switch: '<S490>/Switch1' */
            rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk = rtb_Sum1_np;
        }

        /* End of Switch: '<S464>/Switch1' */

        /* Switch: '<S464>/Switch' incorporates:
         *  RelationalOperator: '<S464>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk > rtb_Switch1_p2)
        {
            rtb_Switch1_p2 = rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk;
        }

        /* End of Switch: '<S464>/Switch' */
        /* End of Outputs for SubSystem: '<S457>/Limiter' */

        /* Merge: '<S375>/Merge2' incorporates:
         *  Sum: '<S457>/Sum3'
         */
        TCCR_ac_B.Merge2 = rtb_Switch1_p2 + TCCR_ac_DW.UnitDelay3_DSTATE;

        /* End of Outputs for SubSystem: '<S449>/GradientLimiter1' */

        /* Logic: '<S454>/Logical2' incorporates:
         *  Gain: '<S450>/Gain'
         *  RelationalOperator: '<S450>/Comparison7'
         */
        rtb_Logical2_lj = (VeTCCR_n_LeadTcR_MinRaw >
                           (-rtb_TmpSignalConversionAtVeVTVR_M_TLFCal));

        /* Switch: '<S450>/Switch1' */
        if (rtb_Logical2_lj)
        {
            /* Switch: '<S450>/Switch1' incorporates:
             *  Constant: '<S466>/Calib'
             *  Constant: '<S468>/Calib'
             *  Product: '<S450>/Product1'
             */
            rtb_Sum1_np = KeTCCR_dM_LeadTCRMinLU * HeTCCR_t_MedTED_dT;
        }
        else
        {
            /* Switch: '<S450>/Switch1' incorporates:
             *  Constant: '<S450>/Constant Value4'
             */
            rtb_Sum1_np = 1.0E+8F;
        }

        /* End of Switch: '<S450>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S450>/Hysteresis1' */
        /* Switch: '<S467>/Switch3' incorporates:
         *  Constant: '<S450>/FALSE Constant'
         *  UnitDelay: '<S467>/Unit Delay'
         */
        if (rtb_Comparison3_h)
        {
            TCCR_ac_DW.UnitDelay_DSTATE_e2 = false;
        }
        else
        {
            /* Sum: '<S450>/Sum1' incorporates:
             *  Gain: '<S450>/Gain'
             *  UnitDelay: '<S375>/Unit Delay2'
             */
            rtb_Switch1_p2 = TCCR_ac_DW.UnitDelay2_DSTATE -
                (-rtb_TmpSignalConversionAtVeVTVR_M_TLFCal);

            /* Switch: '<S467>/Switch1' incorporates:
             *  Constant: '<S470>/Calib'
             *  RelationalOperator: '<S467>/Greater  Than'
             */
            if (rtb_Switch1_p2 > KeTCCR_dM_LeadTcRMinLDRSP)
            {
                /* UnitDelay: '<S467>/Unit Delay' incorporates:
                 *  Constant: '<S467>/Constant Value'
                 *  Switch: '<S467>/Switch1'
                 */
                TCCR_ac_DW.UnitDelay_DSTATE_e2 = true;
            }
            else
            {
                /* UnitDelay: '<S467>/Unit Delay' incorporates:
                 *  Constant: '<S469>/Calib'
                 *  RelationalOperator: '<S467>/Greater  Than1'
                 *  Switch: '<S467>/Switch1'
                 */
                TCCR_ac_DW.UnitDelay_DSTATE_e2 = ((rtb_Switch1_p2 >=
                    KeTCCR_dM_LeadTcRMinLDLSP) &&
                    (TCCR_ac_DW.UnitDelay_DSTATE_e2));
            }

            /* End of Switch: '<S467>/Switch1' */
        }

        /* End of Switch: '<S467>/Switch3' */
        /* End of Outputs for SubSystem: '<S450>/Hysteresis1' */

        /* Switch: '<S450>/Switch2' incorporates:
         *  UnitDelay: '<S467>/Unit Delay'
         */
        if (TCCR_ac_DW.UnitDelay_DSTATE_e2)
        {
            /* Switch: '<S450>/Switch2' incorporates:
             *  Constant: '<S450>/Constant Value6'
             */
            rtb_Switch1_p2 = -1.0E+8F;
        }
        else
        {
            /* Switch: '<S450>/Switch2' incorporates:
             *  Constant: '<S466>/Calib'
             *  Lookup_n-D: '<S471>/Vector'
             *  Product: '<S450>/Product5'
             *  SignalConversion generated from: '<S2>/VeAPSR_Pct_AccelPedalEffPosition'
             */
            rtb_Switch1_p2 = look1_iflf_binlca_16a
                (rtb_TmpSignalConversionAtVeAPSR_Pct_Acce, ((const float32 *)
                  &(KxTCCR_dM_LeadTCRMinLU[0])), ((const float32 *)
                  &(KtTCCR_dM_LeadTCRMinLU[0])), 5U) * HeTCCR_t_MedTED_dT;
        }

        /* End of Switch: '<S450>/Switch2' */

        /* Switch: '<S450>/Switch6' */
        if (rtb_Logical2_lj)
        {
            /* Switch: '<S450>/Switch6' incorporates:
             *  Gain: '<S450>/Gain'
             *  MinMax: '<S450>/MinMax'
             *  UnitDelay: '<S375>/Unit Delay2'
             */
            TCCR_ac_DW.UnitDelay2_DSTATE = fmaxf
                (-rtb_TmpSignalConversionAtVeVTVR_M_TLFCal,
                 TCCR_ac_DW.UnitDelay2_DSTATE);
        }

        /* End of Switch: '<S450>/Switch6' */

        /* Outputs for Atomic SubSystem: '<S450>/GradientLimiter1' */
        /* Sum: '<S465>/Sum2' */
        rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk = VeTCCR_n_LeadTcR_MinRaw -
            TCCR_ac_DW.UnitDelay2_DSTATE;

        /* Outputs for Atomic SubSystem: '<S465>/Limiter' */
        /* Switch: '<S472>/Switch1' incorporates:
         *  RelationalOperator: '<S472>/Relational Operator'
         */
        if (rtb_Sum1_np < rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk)
        {
            /* Switch: '<S490>/Switch1' */
            rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk = rtb_Sum1_np;
        }

        /* End of Switch: '<S472>/Switch1' */

        /* Switch: '<S472>/Switch' incorporates:
         *  RelationalOperator: '<S472>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk > rtb_Switch1_p2)
        {
            rtb_Switch1_p2 = rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk;
        }

        /* End of Switch: '<S472>/Switch' */
        /* End of Outputs for SubSystem: '<S465>/Limiter' */

        /* Merge: '<S375>/Merge6' incorporates:
         *  Sum: '<S465>/Sum3'
         */
        TCCR_ac_B.Merge6 = rtb_Switch1_p2 + TCCR_ac_DW.UnitDelay2_DSTATE;

        /* End of Outputs for SubSystem: '<S450>/GradientLimiter1' */

        /* Switch: '<S474>/Switch2' incorporates:
         *  Inport: '<Root>/VeSCCR_b_RrAxlMaxRq'
         *  Logic: '<S375>/Logical1'
         *  Logic: '<S451>/Logical1'
         *  RelationalOperator: '<S375>/Comparison1'
         *  RelationalOperator: '<S375>/Comparison2'
         *  Sum: '<S451>/Sum5'
         *  Switch: '<S474>/Switch3'
         *  UnitDelay: '<S375>/Unit Delay5'
         *  UnitDelay: '<S375>/Unit Delay6'
         *  UnitDelay: '<S474>/Unit Delay'
         */
        if (rtb_Comparison3_h && ((((sint32)TCCR_ac_DW.UnitDelay4_DSTATE) == 2) &&
             (((sint32)TCCR_ac_DW.UnitDelay5_DSTATE) == 1)))
        {
            TCCR_ac_DW.UnitDelay_DSTATE_p = VeTCCR_n_NiTgt -
                rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;

            /* Switch: '<S474>/Switch1' incorporates:
             *  Constant: '<S474>/Constant Value4'
             *  Sum: '<S451>/Sum5'
             *  UnitDelay: '<S375>/Unit Delay6'
             *  UnitDelay: '<S474>/Unit Delay'
             *  UnitDelay: '<S474>/Unit Delay3'
             */
            TCCR_ac_DW.UnitDelay3_DSTATE_o = 0.0F;
        }
        else
        {
            (void)Rte_Read_VeSCCR_b_RrAxlMaxRq_Value(&rtb_Logical1_m);

            /* Switch: '<S451>/Switch3' incorporates:
             *  Inport: '<Root>/VeSCCR_b_RrAxlMaxRq'
             *  Lookup_n-D: '<S483>/Vector'
             *  Lookup_n-D: '<S484>/Vector'
             *  SignalConversion generated from: '<S2>/VeAPSR_Pct_AccelPedalEffPosition'
             */
            if (rtb_Logical1_m)
            {
                rtb_Switch1_p2 = look1_iflf_binlca_16a
                    (rtb_TmpSignalConversionAtVeAPSR_Pct_Acce, ((const float32 *)
                      &(KxTCCR_t_NiTgtBlndRrAxlMaxRq[0])), ((const float32 *)
                      &(KtTCCR_t_NiTgtBlndRrAxlMaxRq[0])), 5U);
            }
            else
            {
                rtb_Switch1_p2 = look1_iflf_binlca_16a
                    (rtb_TmpSignalConversionAtVeAPSR_Pct_Acce, ((const float32 *)
                      &(KxTCCR_t_NiTgtBlndNoRrAxlMaxRq[0])), ((const float32 *)
                      &(KtTCCR_t_NiTgtBlndNoRrAxlMaxRq[0])), 5U);
            }

            /* End of Switch: '<S451>/Switch3' */

            /* MinMax: '<S474>/Maximum' incorporates:
             *  Constant: '<S476>/Calib'
             */
            rtb_TmpSignalConversionAtVeVTVR_M_TLFCal = fmaxf(HeTCCR_t_MedTED_dT,
                rtb_Switch1_p2);

            /* Outputs for Atomic SubSystem: '<S474>/Protected Division' */
            /* Switch: '<S489>/Switch1' incorporates:
             *  Constant: '<S476>/Calib'
             *  Constant: '<S489>/Constant Value'
             *  Constant: '<S489>/Constant Value1'
             *  Constant: '<S489>/Constant Value2'
             *  Constant: '<S489>/Constant Value3'
             *  Logic: '<S489>/AND'
             *  RelationalOperator: '<S489>/Greater Than or Equal '
             *  RelationalOperator: '<S489>/Greater Than or Equal 1'
             *  RelationalOperator: '<S489>/Not Equal'
             *  RelationalOperator: '<S489>/Not Equal1'
             *  Switch: '<S489>/Switch2'
             *  Switch: '<S489>/Switch3'
             */
            if ((HeTCCR_t_MedTED_dT != 0.0F) &&
                    (rtb_TmpSignalConversionAtVeVTVR_M_TLFCal != 0.0F))
            {
                /* Switch: '<S489>/Switch1' incorporates:
                 *  Product: '<S489>/Division'
                 */
                rtb_TmpSignalConversionAtVeVTVR_M_TLFCal = HeTCCR_t_MedTED_dT /
                    rtb_TmpSignalConversionAtVeVTVR_M_TLFCal;
            }
            else if (HeTCCR_t_MedTED_dT > 0.0F)
            {
                /* Switch: '<S489>/Switch2' incorporates:
                 *  Constant: '<S489>/MAXFLOAT'
                 *  Switch: '<S489>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeVTVR_M_TLFCal = 3.402823466E+38F;
            }
            else if (HeTCCR_t_MedTED_dT < 0.0F)
            {
                /* Switch: '<S489>/Switch3' incorporates:
                 *  Constant: '<S489>/MINFLOAT'
                 *  Switch: '<S489>/Switch1'
                 *  Switch: '<S489>/Switch2'
                 */
                rtb_TmpSignalConversionAtVeVTVR_M_TLFCal = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S489>/Switch1' incorporates:
                 *  Constant: '<S489>/Constant Value4'
                 *  Switch: '<S489>/Switch2'
                 *  Switch: '<S489>/Switch3'
                 */
                rtb_TmpSignalConversionAtVeVTVR_M_TLFCal = 0.0F;
            }

            /* End of Switch: '<S489>/Switch1' */
            /* End of Outputs for SubSystem: '<S474>/Protected Division' */

            /* Switch: '<S474>/Switch1' incorporates:
             *  Constant: '<S474>/Constant Value2'
             *  Constant: '<S474>/Constant Value3'
             *  Logic: '<S474>/Logical'
             *  Logic: '<S474>/Logical2'
             *  MinMax: '<S474>/MinMax'
             *  Sum: '<S474>/Summation1'
             *  UnitDelay: '<S474>/Unit Delay1'
             *  UnitDelay: '<S474>/Unit Delay3'
             */
            if ((!TCCR_ac_DW.UnitDelay1_DSTATE_lx) || rtb_Comparison3_h)
            {
                TCCR_ac_DW.UnitDelay3_DSTATE_o = 1.0F;
            }

            TCCR_ac_DW.UnitDelay3_DSTATE_o = fminf
                (TCCR_ac_DW.UnitDelay3_DSTATE_o +
                 rtb_TmpSignalConversionAtVeVTVR_M_TLFCal, 1.0F);
        }

        /* End of Switch: '<S474>/Switch2' */

        /* Logic: '<S454>/Logical2' incorporates:
         *  Logic: '<S454>/Logical4'
         *  MATLAB Function: '<S447>/MATLAB Function'
         *  RelationalOperator: '<S454>/Comparison1'
         *  UnitDelay: '<S454>/Unit Delay1'
         */
        rtb_Logical2_lj = (((!rtb_AND_di) || (rtb_MultiportSwitch[1] !=
                             TCCR_ac_DW.UnitDelay1_DSTATE_p)) ||
                           rtb_Comparison3_h);

        /* Switch: '<S493>/Switch1' incorporates:
         *  Switch: '<S494>/Switch1'
         *  Switch: '<S495>/Switch1'
         */
        if (rtb_Logical2_lj)
        {
            /* Selector: '<S454>/Selector2' incorporates:
             *  SignalConversion: '<S368>/Signal Conversion1'
             */
            rtb_TmpSignalConversionAtVeVTVR_M_TLFCal =
                tmpRead_1[rtb_MultiportSwitch[1]];

            /* Switch: '<S494>/Switch1' */
            rtb_Sum1_np = rtb_TmpSignalConversionAtVeVTVR_M_TLFCal;

            /* Selector: '<S454>/Selector1' */
            TCCR_ac_DW.UnitDelay_DSTATE_e =
                rtb_TmpSignalConversionAtVeVTVR_M_TLFCal;
        }
        else
        {
            /* Switch: '<S493>/Switch1' incorporates:
             *  UnitDelay: '<S493>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeVTVR_M_TLFCal =
                TCCR_ac_DW.UnitDelay_DSTATE_pf;

            /* Switch: '<S494>/Switch1' incorporates:
             *  UnitDelay: '<S494>/Unit Delay'
             */
            rtb_Sum1_np = TCCR_ac_DW.UnitDelay_DSTATE_g;
        }

        /* End of Switch: '<S493>/Switch1' */

        /* Selector: '<S454>/Selector2' incorporates:
         *  SignalConversion: '<S368>/Signal Conversion1'
         */
        TCCR_ac_DW.UnitDelay_DSTATE_pf = tmpRead_1[rtb_MultiportSwitch[1]];

        /* MinMax: '<S454>/MinMax2' incorporates:
         *  Constant: '<S454>/Constant Value3'
         *  Gain: '<S491>/Gain'
         *  Selector: '<S454>/Selector2'
         *  SignalConversion: '<S368>/Signal Conversion1'
         *  Sum: '<S491>/Sum1'
         */
        VeTCCR_n_ActualSlipDelta = fmaxf((((TCCR_ac_DW.UnitDelay_DSTATE_pf +
            rtb_TmpSignalConversionAtVeVTVR_M_TLFCal) + rtb_Sum1_np) +
            TCCR_ac_DW.UnitDelay_DSTATE_e) * 0.25F, 0.0F);

        /* UnitDelay: '<S454>/Unit Delay' incorporates:
         *  UnitDelay: '<S454>/Unit Delay1'
         */
        TCCR_ac_DW.UnitDelay1_DSTATE_p = TCCR_ac_DW.UnitDelay_DSTATE_fw;

        /* Logic: '<S454>/Logical1' incorporates:
         *  Logic: '<S454>/Logical3'
         *  MATLAB Function: '<S446>/MATLAB Function'
         *  RelationalOperator: '<S454>/Comparison5'
         *  UnitDelay: '<S454>/Unit Delay1'
         */
        rtb_Logical1_m = (((!rtb_AND_pq) || (rtb_MultiportSwitch[0] !=
                            TCCR_ac_DW.UnitDelay1_DSTATE_p)) ||
                          rtb_Comparison3_h);

        /* Switch: '<S496>/Switch1' incorporates:
         *  Switch: '<S497>/Switch1'
         *  Switch: '<S498>/Switch1'
         */
        if (rtb_Logical1_m)
        {
            /* Selector: '<S454>/Selector1' incorporates:
             *  SignalConversion: '<S368>/Signal Conversion1'
             */
            rtb_Switch1_p2 = tmpRead_1[rtb_MultiportSwitch[0]];

            /* Switch: '<S497>/Switch1' */
            rtb_TmpSignalConversionAtVeATRR_M_Output = rtb_Switch1_p2;

            /* MinMax: '<S451>/MinMax1' */
            TCCR_ac_DW.UnitDelay_DSTATE_p1 = rtb_Switch1_p2;
        }
        else
        {
            /* Switch: '<S496>/Switch1' incorporates:
             *  UnitDelay: '<S496>/Unit Delay'
             */
            rtb_Switch1_p2 = TCCR_ac_DW.UnitDelay_DSTATE_a;

            /* Switch: '<S497>/Switch1' incorporates:
             *  UnitDelay: '<S497>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeATRR_M_Output =
                TCCR_ac_DW.UnitDelay_DSTATE_gq;
        }

        /* End of Switch: '<S496>/Switch1' */

        /* Selector: '<S454>/Selector1' incorporates:
         *  SignalConversion: '<S368>/Signal Conversion1'
         */
        TCCR_ac_DW.UnitDelay_DSTATE_a = tmpRead_1[rtb_MultiportSwitch[0]];

        /* MinMax: '<S454>/MinMax1' incorporates:
         *  Constant: '<S454>/Constant Value1'
         *  Gain: '<S492>/Gain'
         *  Selector: '<S454>/Selector1'
         *  SignalConversion: '<S368>/Signal Conversion1'
         *  Sum: '<S492>/Sum1'
         */
        VeTCCR_n_TargetSlipDelta = fmaxf((((TCCR_ac_DW.UnitDelay_DSTATE_a +
            rtb_Switch1_p2) + rtb_TmpSignalConversionAtVeATRR_M_Output) +
            TCCR_ac_DW.UnitDelay_DSTATE_p1) * 0.25F, 0.0F);

        /* Outputs for Atomic SubSystem: '<S412>/Protected Division1' */
        /* Switch: '<S452>/Switch1' incorporates:
         *  Constant: '<S448>/Calib'
         *  Constant: '<S452>/Constant Value'
         *  Constant: '<S452>/Constant Value1'
         *  Constant: '<S452>/Constant Value2'
         *  Constant: '<S452>/Constant Value3'
         *  Logic: '<S452>/AND'
         *  RelationalOperator: '<S452>/Greater Than or Equal '
         *  RelationalOperator: '<S452>/Greater Than or Equal 1'
         *  RelationalOperator: '<S452>/Not Equal'
         *  RelationalOperator: '<S452>/Not Equal1'
         *  Switch: '<S452>/Switch2'
         *  Switch: '<S452>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeTSXR_r_TturbF != 0.0F) && (((float32)
                Rte_Prm_KeTSXR_r_FDRf_KeTSXR_r_FDRf()) != 0.0F))
        {
            /* Switch: '<S452>/Switch1' incorporates:
             *  Product: '<S452>/Division'
             */
            rtb_TmpSignalConversionAtVeTSXR_r_TturbF /= (float32)
                Rte_Prm_KeTSXR_r_FDRf_KeTSXR_r_FDRf();
        }
        else if (rtb_TmpSignalConversionAtVeTSXR_r_TturbF > 0.0F)
        {
            /* Switch: '<S452>/Switch2' incorporates:
             *  Constant: '<S452>/MAXFLOAT'
             *  Switch: '<S452>/Switch1'
             */
            rtb_TmpSignalConversionAtVeTSXR_r_TturbF = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeTSXR_r_TturbF < 0.0F)
        {
            /* Switch: '<S452>/Switch3' incorporates:
             *  Constant: '<S452>/MINFLOAT'
             *  Switch: '<S452>/Switch1'
             *  Switch: '<S452>/Switch2'
             */
            rtb_TmpSignalConversionAtVeTSXR_r_TturbF = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S452>/Switch1' incorporates:
             *  Constant: '<S452>/Constant Value4'
             *  Switch: '<S452>/Switch2'
             *  Switch: '<S452>/Switch3'
             */
            rtb_TmpSignalConversionAtVeTSXR_r_TturbF = 0.0F;
        }

        /* End of Switch: '<S452>/Switch1' */
        /* End of Outputs for SubSystem: '<S412>/Protected Division1' */

        /* Sum: '<S451>/Sum1' */
        rtb_TmpSignalConversionAtVeTSXR_r_TturbF -= rtb_Sum1;

        /* Sum: '<S451>/Sum2' incorporates:
         *  Constant: '<S405>/Calib'
         *  DataTypeConversion: '<S373>/Data Type Conversion'
         *  Selector: '<S373>/Selector'
         *  Selector: '<S373>/Selector1'
         *  Selector: '<S374>/Selector'
         *  SignalConversion generated from: '<S2>/VeTRNR_e_TargetGear'
         */
        rtb_Sum1 = ((float32)
                    (Rte_Prm_KaTSXR_r_TCMGearRatios_KaTSXR_r_TCMGearRatios())
                    [rtb_TmpSignalConversionAtVeTRNR_e_Target]) - rtb_Sum1;

        /* Outputs for Atomic SubSystem: '<S451>/Protected Division' */
        /* Switch: '<S486>/Switch1' incorporates:
         *  Constant: '<S486>/Constant Value'
         *  Constant: '<S486>/Constant Value1'
         *  Constant: '<S486>/Constant Value2'
         *  Constant: '<S486>/Constant Value3'
         *  Logic: '<S486>/AND'
         *  RelationalOperator: '<S486>/Greater Than or Equal '
         *  RelationalOperator: '<S486>/Greater Than or Equal 1'
         *  RelationalOperator: '<S486>/Not Equal'
         *  RelationalOperator: '<S486>/Not Equal1'
         *  Switch: '<S486>/Switch2'
         *  Switch: '<S486>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeTSXR_r_TturbF != 0.0F) && (rtb_Sum1 !=
                0.0F))
        {
            /* Switch: '<S486>/Switch1' incorporates:
             *  Product: '<S486>/Division'
             */
            rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk =
                rtb_TmpSignalConversionAtVeTSXR_r_TturbF / rtb_Sum1;
        }
        else if (rtb_TmpSignalConversionAtVeTSXR_r_TturbF > 0.0F)
        {
            /* Switch: '<S486>/Switch2' incorporates:
             *  Constant: '<S486>/MAXFLOAT'
             *  Switch: '<S486>/Switch1'
             */
            rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeTSXR_r_TturbF < 0.0F)
        {
            /* Switch: '<S486>/Switch3' incorporates:
             *  Constant: '<S486>/MINFLOAT'
             *  Switch: '<S486>/Switch1'
             *  Switch: '<S486>/Switch2'
             */
            rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S486>/Switch1' incorporates:
             *  Constant: '<S486>/Constant Value4'
             *  Switch: '<S486>/Switch2'
             *  Switch: '<S486>/Switch3'
             */
            rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk = 0.0F;
        }

        /* End of Switch: '<S486>/Switch1' */
        /* End of Outputs for SubSystem: '<S451>/Protected Division' */

        /* Outputs for Atomic SubSystem: '<S451>/Limiter' */
        /* Switch: '<S485>/Switch1' incorporates:
         *  Constant: '<S451>/Constant Value1'
         *  RelationalOperator: '<S485>/Relational Operator'
         */
        if (1.0F < rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk)
        {
            /* Switch: '<S490>/Switch1' */
            rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk = 1.0F;
        }

        /* End of Switch: '<S485>/Switch1' */

        /* Switch: '<S485>/Switch' incorporates:
         *  Constant: '<S451>/Constant Value2'
         *  RelationalOperator: '<S485>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk > 0.0F)
        {
            /* Switch: '<S485>/Switch' */
            VeTCCR_r_NiTgtSlipRatio = rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk;
        }
        else
        {
            /* Switch: '<S485>/Switch' */
            VeTCCR_r_NiTgtSlipRatio = 0.0F;
        }

        /* End of Switch: '<S485>/Switch' */
        /* End of Outputs for SubSystem: '<S451>/Limiter' */

        /* Switch: '<S451>/Switch1' incorporates:
         *  MATLAB Function: '<S447>/MATLAB Function'
         */
        if (rtb_AND_di)
        {
            rtb_Sum1 = VeTCCR_n_ActualSlipDelta;
        }
        else
        {
            rtb_Sum1 = VeTCCR_n_TargetSlipDelta;
        }

        /* End of Switch: '<S451>/Switch1' */

        /* Switch: '<S451>/Switch' incorporates:
         *  MATLAB Function: '<S446>/MATLAB Function'
         */
        if (rtb_AND_pq)
        {
            rtb_TmpSignalConversionAtVeTSXR_r_TturbF = VeTCCR_n_TargetSlipDelta;
        }
        else
        {
            rtb_TmpSignalConversionAtVeTSXR_r_TturbF = VeTCCR_n_ActualSlipDelta;
        }

        /* End of Switch: '<S451>/Switch' */

        /* Sum: '<S451>/Sum' incorporates:
         *  Constant: '<S451>/Constant Value'
         *  Product: '<S451>/Product2'
         *  Product: '<S451>/Product3'
         *  Sum: '<S451>/Sum3'
         */
        VeTCCR_n_NiTgtSlipDeltaRaw = ((1.0F - VeTCCR_r_NiTgtSlipRatio) *
            rtb_Sum1) + (VeTCCR_r_NiTgtSlipRatio *
                         rtb_TmpSignalConversionAtVeTSXR_r_TturbF);

        /* Sum: '<S474>/Summation' incorporates:
         *  Constant: '<S474>/Constant Value'
         *  Product: '<S474>/Multiplication'
         *  Product: '<S474>/Multiplication3'
         *  Sum: '<S474>/Subtraction'
         *  UnitDelay: '<S474>/Unit Delay'
         *  UnitDelay: '<S474>/Unit Delay3'
         */
        VeTCCR_n_NiTgtSlipDelta = ((1.0F - TCCR_ac_DW.UnitDelay3_DSTATE_o) *
            TCCR_ac_DW.UnitDelay_DSTATE_p) + (TCCR_ac_DW.UnitDelay3_DSTATE_o *
            VeTCCR_n_NiTgtSlipDeltaRaw);

        /* Logic: '<S451>/Logical' incorporates:
         *  Constant: '<S375>/Constant Value1'
         *  Constant: '<S375>/Constant Value3'
         *  Constant: '<S477>/Calib'
         *  Logic: '<S375>/Logical2'
         *  RelationalOperator: '<S375>/Comparison4'
         *  RelationalOperator: '<S375>/Comparison5'
         *  RelationalOperator: '<S451>/Comparison1'
         *  UnitDelay: '<S375>/Unit Delay7'
         */
        rtb_AND_pq = (((TCCR_ac_DW.UnitDelay7_DSTATE == 2) && (rtb_UnitDelay7 ==
                        1)) && (rtb_TmpSignalConversionAtVeAPSR_Pct_Acce >=
                                KeTCCR_Pct_NiTgtAccPedActv));

        /* Outputs for Atomic SubSystem: '<S451>/Accumulator Reset Enabled Limited' */
        /* Switch: '<S473>/Switch1' incorporates:
         *  Inport: '<Root>/VeTISR_n_InputSpeed'
         *  Logic: '<S451>/Logical3'
         *  Logic: '<S451>/Logical4'
         */
        if ((!rtb_AND_pq) || rtb_Comparison3_h)
        {
            /* Switch: '<S473>/Switch1' incorporates:
             *  Constant: '<S451>/Constant Value9'
             */
            VeTCCR_n_NiTgtCLOffst = 0.0F;
        }
        else
        {
            (void)Rte_Read_VeTISR_n_InputSpeed_Value(&rtb_Sum8_a);

            /* Lookup_n-D: '<S482>/Vector' incorporates:
             *  Inport: '<Root>/VeTISR_n_InputSpeed'
             *  SignalConversion generated from: '<S2>/VeVSDR_n_NTurb'
             *  Switch: '<S473>/Switch2'
             */
            rtb_TmpSignalConversionAtVeAPSR_Pct_Acce = look1_iflf_binlca_16a
                (rtb_TmpSignalConversionAtVeVSDR_n_NTurbO, ((const float32 *)
                  &(KxTCCR_k_NiTgtKiMx[0])), ((const float32 *)
                  &(KtTCCR_k_NiTgtKiMx[0])), 4U);

            /* Sum: '<S451>/Sum8' incorporates:
             *  Constant: '<S479>/Calib'
             *  Sum: '<S451>/Sum7'
             *  Switch: '<S473>/Switch2'
             */
            rtb_Sum8_a = (rtb_TmpSignalConversionAtVeOHSR_n_IdleSp +
                          KeTCCR_n_IdleSpdBlendOffst) - rtb_Sum8_a;

            /* Sum: '<S473>/Summation' incorporates:
             *  Lookup_n-D: '<S481>/Vector'
             *  Product: '<S451>/Product'
             *  Sum: '<S451>/Sum8'
             *  Switch: '<S473>/Switch2'
             *  UnitDelay: '<S473>/Unit Delay'
             */
            VeTCCR_n_NiTgtCLOffst = (look1_iflf_binlca_16a(rtb_Sum8_a, ((const
                float32 *)&(KxTCCR_k_NiTgtKiFac[0])), ((const float32 *)
                &(KtTCCR_k_NiTgtKiFac[0])), 4U) * rtb_Sum8_a) +
                VeTCCR_n_NiTgtCLOffst;

            /* Outputs for Atomic SubSystem: '<S473>/Limiter' */
            /* Switch: '<S488>/Switch1' incorporates:
             *  RelationalOperator: '<S488>/Relational Operator'
             *  Switch: '<S473>/Switch2'
             */
            if (rtb_TmpSignalConversionAtVeAPSR_Pct_Acce < VeTCCR_n_NiTgtCLOffst)
            {
                /* Switch: '<S488>/Switch1' */
                VeTCCR_n_NiTgtCLOffst = rtb_TmpSignalConversionAtVeAPSR_Pct_Acce;
            }

            /* End of Switch: '<S488>/Switch1' */

            /* Switch: '<S488>/Switch' incorporates:
             *  Constant: '<S451>/Constant Value8'
             *  RelationalOperator: '<S488>/Relational Operator1'
             *  Switch: '<S473>/Switch2'
             */
            if (VeTCCR_n_NiTgtCLOffst <= 0.0F)
            {
                /* Switch: '<S473>/Switch1' */
                VeTCCR_n_NiTgtCLOffst = 0.0F;
            }

            /* End of Switch: '<S488>/Switch' */
            /* End of Outputs for SubSystem: '<S473>/Limiter' */
        }

        /* End of Switch: '<S473>/Switch1' */
        /* End of Outputs for SubSystem: '<S451>/Accumulator Reset Enabled Limited' */

        /* Sum: '<S451>/Sum10' incorporates:
         *  Sum: '<S451>/Sum4'
         */
        VeTCCR_n_NiTgtSCORwCL = (VeTCCR_n_NiTgtSlipDelta +
            rtb_TmpSignalConversionAtVeVSDR_n_NTurbO) + VeTCCR_n_NiTgtCLOffst;

        /* Product: '<S451>/Product1' incorporates:
         *  Constant: '<S476>/Calib'
         *  Constant: '<S478>/Calib'
         */
        rtb_Sum8_a = KeTCCR_dn_NiTgtOffstLU * HeTCCR_t_MedTED_dT;

        /* Switch: '<S487>/Switch1' */
        if (rtb_Comparison3_h)
        {
            /* Switch: '<S487>/Switch1' incorporates:
             *  Constant: '<S451>/Constant Value5'
             */
            TCCR_ac_DW.UnitDelay_DSTATE_i = 0.0F;
        }

        /* End of Switch: '<S487>/Switch1' */

        /* Switch: '<S451>/Switch2' incorporates:
         *  Constant: '<S451>/Constant Value3'
         *  Constant: '<S480>/Calib'
         */
        if (rtb_AND_pq)
        {
            rtb_TmpSignalConversionAtVeAPSR_Pct_Acce = KeTCCR_n_NiTgtOffstMax;
        }
        else
        {
            rtb_TmpSignalConversionAtVeAPSR_Pct_Acce = 0.0F;
        }

        /* End of Switch: '<S451>/Switch2' */

        /* Outputs for Atomic SubSystem: '<S451>/GradientLimiter1' */
        /* Sum: '<S475>/Sum2' */
        rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk =
            rtb_TmpSignalConversionAtVeAPSR_Pct_Acce -
            TCCR_ac_DW.UnitDelay_DSTATE_i;

        /* Outputs for Atomic SubSystem: '<S475>/Limiter' */
        /* Switch: '<S490>/Switch1' incorporates:
         *  RelationalOperator: '<S490>/Relational Operator'
         */
        if (rtb_Sum8_a < rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk)
        {
            /* Switch: '<S490>/Switch1' */
            rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk = rtb_Sum8_a;
        }

        /* End of Switch: '<S490>/Switch1' */

        /* Switch: '<S490>/Switch' incorporates:
         *  Constant: '<S451>/Constant Value4'
         *  RelationalOperator: '<S490>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk <= -1.0E+8F)
        {
            rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk = -1.0E+8F;
        }

        /* End of Switch: '<S490>/Switch' */
        /* End of Outputs for SubSystem: '<S475>/Limiter' */

        /* Sum: '<S475>/Sum3' */
        VeTCCR_n_NiTgtOLOffst = rtb_TmpSignalConversionAtVeRGNR_M_RgnBrk +
            TCCR_ac_DW.UnitDelay_DSTATE_i;

        /* End of Outputs for SubSystem: '<S451>/GradientLimiter1' */

        /* Sum: '<S451>/Sum6' */
        VeTCCR_n_NiTgtOffstIdleSpdBlnded =
            rtb_TmpSignalConversionAtVeOHSR_n_IdleSp + VeTCCR_n_NiTgtOLOffst;

        /* MinMax: '<S451>/MinMax1' */
        TCCR_ac_DW.UnitDelay_DSTATE_p1 = fmaxf(fmaxf
            (rtb_TmpSignalConversionAtVeOSMR_n_TransM, VeTCCR_n_NiTgtSCORwCL),
            VeTCCR_n_NiTgtOffstIdleSpdBlnded);

        /* Merge: '<S375>/Merge5' incorporates:
         *  MinMax: '<S412>/MinMax'
         */
        TCCR_ac_B.Merge5 = fminf(TCCR_ac_DW.UnitDelay_DSTATE_p1,
            rtb_TmpSignalConversionAtVeOHSR_n_IdleSp);

        /* Switch: '<S487>/Switch3' incorporates:
         *  Constant: '<S451>/Constant Value5'
         *  UnitDelay: '<S487>/Unit Delay'
         */
        if (rtb_Comparison3_h)
        {
            TCCR_ac_DW.UnitDelay_DSTATE_i = 0.0F;
        }
        else
        {
            TCCR_ac_DW.UnitDelay_DSTATE_i = VeTCCR_n_NiTgtOLOffst;
        }

        /* End of Switch: '<S487>/Switch3' */

        /* Merge: '<S375>/Merge1' incorporates:
         *  Gain: '<S453>/Gain'
         */
        TCCR_ac_B.Merge1 = TCCR_ac_DW.UnitDelay_DSTATE_p1;

        /* Switch: '<S494>/Switch3' incorporates:
         *  Switch: '<S495>/Switch3'
         *  UnitDelay: '<S494>/Unit Delay'
         *  UnitDelay: '<S495>/Unit Delay'
         */
        if (rtb_Logical2_lj)
        {
            TCCR_ac_DW.UnitDelay_DSTATE_g = TCCR_ac_DW.UnitDelay_DSTATE_pf;
            TCCR_ac_DW.UnitDelay_DSTATE_e = TCCR_ac_DW.UnitDelay_DSTATE_pf;
        }
        else
        {
            TCCR_ac_DW.UnitDelay_DSTATE_g =
                rtb_TmpSignalConversionAtVeVTVR_M_TLFCal;
            TCCR_ac_DW.UnitDelay_DSTATE_e = rtb_Sum1_np;
        }

        /* End of Switch: '<S494>/Switch3' */

        /* Switch: '<S497>/Switch3' incorporates:
         *  Switch: '<S498>/Switch3'
         *  UnitDelay: '<S497>/Unit Delay'
         *  UnitDelay: '<S498>/Unit Delay'
         */
        if (rtb_Logical1_m)
        {
            TCCR_ac_DW.UnitDelay_DSTATE_gq = TCCR_ac_DW.UnitDelay_DSTATE_a;
            TCCR_ac_DW.UnitDelay_DSTATE_p1 = TCCR_ac_DW.UnitDelay_DSTATE_a;
        }
        else
        {
            TCCR_ac_DW.UnitDelay_DSTATE_gq = rtb_Switch1_p2;
            TCCR_ac_DW.UnitDelay_DSTATE_p1 =
                rtb_TmpSignalConversionAtVeATRR_M_Output;
        }

        /* End of Switch: '<S497>/Switch3' */

        /* Update for UnitDelay: '<S474>/Unit Delay1' incorporates:
         *  Constant: '<S474>/TRUE Constant'
         */
        TCCR_ac_DW.UnitDelay1_DSTATE_lx = true;

        /* Update for UnitDelay: '<S454>/Unit Delay1' */
        TCCR_ac_DW.UnitDelay1_DSTATE_p = rtb_MultiportSwitch[1];

        /* Update for UnitDelay: '<S454>/Unit Delay' */
        TCCR_ac_DW.UnitDelay_DSTATE_fw = rtb_MultiportSwitch[0];

        /* End of Outputs for SubSystem: '<S375>/TCCC_M1_M3' */
        break;

      case 3:
        (void)Rte_Read_VeVTVR_M_LoadTorqFront_Opt_Value(&rtb_Sum8_a);

        /* Outputs for IfAction SubSystem: '<S375>/Gear2_Gear4' incorporates:
         *  ActionPort: '<S406>/Action Port'
         */
        /* Merge: '<S375>/Merge5' incorporates:
         *  Gain: '<S419>/Gain'
         *  Inport: '<Root>/VeVTVR_M_LoadTorqFront_Opt'
         */
        TCCR_ac_B.Merge5 = rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;

        /* Merge: '<S375>/Merge1' incorporates:
         *  Gain: '<S420>/Gain'
         */
        TCCR_ac_B.Merge1 = rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;

        /* Switch: '<S417>/Switch' incorporates:
         *  Constant: '<S425>/Calib'
         */
        if (KeTCCR_b_EnblTLF4LCCLeadTcRMax)
        {
            /* Switch: '<S417>/Switch' incorporates:
             *  Constant: '<S423>/Calib'
             */
            rtb_TmpSignalConversionAtVeOHSR_n_IdleSp =
                KeTCCR_M_LeadTcRMaxTrqFinal;
        }
        else
        {
            /* Switch: '<S417>/Switch' */
            rtb_TmpSignalConversionAtVeOHSR_n_IdleSp = VeTCCR_n_LeadTcR_MaxRaw;
        }

        /* End of Switch: '<S417>/Switch' */

        /* Switch: '<S417>/Switch1' incorporates:
         *  Constant: '<S425>/Calib'
         *  Logic: '<S417>/Logical'
         */
        if (rtb_Comparison3_h && (KeTCCR_b_EnblTLF4LCCLeadTcRMax))
        {
            /* Switch: '<S417>/Switch1' */
            TCCR_ac_DW.UnitDelay3_DSTATE = rtb_Sum8_a;
        }

        /* End of Switch: '<S417>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S417>/GradientLimiter3' */
        /* Sum: '<S417>/Sum5' incorporates:
         *  Sum: '<S421>/Sum2'
         */
        rtb_TmpSignalConversionAtVeOHSR_n_IdleSp -= TCCR_ac_DW.UnitDelay3_DSTATE;

        /* End of Outputs for SubSystem: '<S417>/GradientLimiter3' */

        /* Outputs for Atomic SubSystem: '<S418>/Signal Latch On With Reset2' */
        /* Outputs for Atomic SubSystem: '<S417>/Signal Latch On With Reset1' */
        /* Logic: '<S428>/NOT' incorporates:
         *  Logic: '<S435>/NOT'
         */
        rtb_Comparison3_h = !rtb_Comparison3_h;

        /* End of Outputs for SubSystem: '<S418>/Signal Latch On With Reset2' */

        /* Logic: '<S428>/OR1' incorporates:
         *  Constant: '<S424>/Calib'
         *  Constant: '<S425>/Calib'
         *  Logic: '<S417>/Logical1'
         *  Logic: '<S428>/NOT'
         *  Logic: '<S428>/OR'
         *  RelationalOperator: '<S417>/Comparison'
         *  Sum: '<S417>/Sum5'
         *  Switch: '<S417>/Switch3'
         *  UnitDelay: '<S375>/Unit Delay'
         *  UnitDelay: '<S428>/Unit Delay'
         */
        TCCR_ac_DW.UnitDelay_DSTATE_h1 =
            (((rtb_TmpSignalConversionAtVeOHSR_n_IdleSp <=
               KeTCCR_M_TcRMaxLatchThres) || ((!KeTCCR_b_EnblTLF4LCCLeadTcRMax) &&
               (TCCR_ac_DW.UnitDelay_DSTATE_bu))) || (rtb_Comparison3_h &&
              (TCCR_ac_DW.UnitDelay_DSTATE_h1)));

        /* End of Outputs for SubSystem: '<S417>/Signal Latch On With Reset1' */

        /* Switch: '<S417>/Switch2' incorporates:
         *  UnitDelay: '<S428>/Unit Delay'
         */
        if (TCCR_ac_DW.UnitDelay_DSTATE_h1)
        {
            /* Switch: '<S417>/Switch2' incorporates:
             *  Constant: '<S417>/Constant Value4'
             */
            rtb_TmpSignalConversionAtVeOSMR_n_TransM = 1.0E+8F;
        }
        else
        {
            /* Switch: '<S417>/Switch2' incorporates:
             *  Constant: '<S422>/Calib'
             *  Lookup_n-D: '<S426>/Vector'
             *  Product: '<S417>/Product4'
             *  SignalConversion generated from: '<S2>/VeAPSR_Pct_AccelPedalEffPosition'
             */
            rtb_TmpSignalConversionAtVeOSMR_n_TransM = look1_iflf_binlca_16a
                (rtb_TmpSignalConversionAtVeAPSR_Pct_Acce, ((const float32 *)
                  &(KxTCCR_dM_LeadTCRMaxLU[0])), ((const float32 *)
                  &(KtTCCR_dM_LeadTCRMaxLU[0])), 5U) * HeTCCR_t_MedTED_dT;
        }

        /* End of Switch: '<S417>/Switch2' */

        /* Outputs for Atomic SubSystem: '<S417>/GradientLimiter3' */
        /* Outputs for Atomic SubSystem: '<S421>/Limiter' */
        /* Switch: '<S429>/Switch1' incorporates:
         *  RelationalOperator: '<S429>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeOSMR_n_TransM <
                rtb_TmpSignalConversionAtVeOHSR_n_IdleSp)
        {
            /* Switch: '<S436>/Switch1' */
            rtb_TmpSignalConversionAtVeOHSR_n_IdleSp =
                rtb_TmpSignalConversionAtVeOSMR_n_TransM;
        }

        /* End of Switch: '<S429>/Switch1' */

        /* Switch: '<S429>/Switch' incorporates:
         *  Constant: '<S417>/Constant Value5'
         *  RelationalOperator: '<S429>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeOHSR_n_IdleSp <= -1.0E+8F)
        {
            rtb_TmpSignalConversionAtVeOHSR_n_IdleSp = -1.0E+8F;
        }

        /* End of Switch: '<S429>/Switch' */
        /* End of Outputs for SubSystem: '<S421>/Limiter' */

        /* Merge: '<S375>/Merge2' incorporates:
         *  Sum: '<S421>/Sum3'
         */
        TCCR_ac_B.Merge2 = rtb_TmpSignalConversionAtVeOHSR_n_IdleSp +
            TCCR_ac_DW.UnitDelay3_DSTATE;

        /* End of Outputs for SubSystem: '<S417>/GradientLimiter3' */

        /* Merge: '<S375>/Merge3' incorporates:
         *  Gain: '<S427>/Gain'
         *  UnitDelay: '<S428>/Unit Delay'
         */
        VeTCCR_b_LeadTcRMax_LatchPrev = TCCR_ac_DW.UnitDelay_DSTATE_h1;

        /* Outputs for Atomic SubSystem: '<S418>/GradientLimiter1' */
        /* Sum: '<S418>/Sum6' incorporates:
         *  Sum: '<S430>/Sum2'
         *  UnitDelay: '<S375>/Unit Delay2'
         */
        rtb_TmpSignalConversionAtVeOHSR_n_IdleSp = VeTCCR_n_LeadTcR_MinRaw -
            TCCR_ac_DW.UnitDelay2_DSTATE;

        /* End of Outputs for SubSystem: '<S418>/GradientLimiter1' */

        /* Outputs for Atomic SubSystem: '<S418>/Signal Latch On With Reset2' */
        /* Logic: '<S435>/OR1' incorporates:
         *  Constant: '<S432>/Calib'
         *  Logic: '<S418>/Logical2'
         *  Logic: '<S435>/OR'
         *  RelationalOperator: '<S418>/Comparison1'
         *  Sum: '<S418>/Sum6'
         *  UnitDelay: '<S375>/Unit Delay1'
         *  UnitDelay: '<S435>/Unit Delay'
         */
        TCCR_ac_DW.UnitDelay_DSTATE_ai =
            (((rtb_TmpSignalConversionAtVeOHSR_n_IdleSp >=
               KeTCCR_M_TcRMinLatchThres) || (TCCR_ac_DW.UnitDelay1_DSTATE_l)) ||
             (rtb_Comparison3_h && (TCCR_ac_DW.UnitDelay_DSTATE_ai)));

        /* End of Outputs for SubSystem: '<S418>/Signal Latch On With Reset2' */

        /* Switch: '<S418>/Switch3' */
        if (TCCR_ac_DW.UnitDelay_DSTATE_ai)
        {
            /* Switch: '<S418>/Switch3' incorporates:
             *  Constant: '<S418>/Constant Value6'
             */
            rtb_TmpSignalConversionAtVeOSMR_n_TransM = -1.0E+8F;
        }
        else
        {
            /* Switch: '<S418>/Switch3' incorporates:
             *  Constant: '<S431>/Calib'
             *  Lookup_n-D: '<S433>/Vector'
             *  Product: '<S418>/Product1'
             *  SignalConversion generated from: '<S2>/VeAPSR_Pct_AccelPedalEffPosition'
             */
            rtb_TmpSignalConversionAtVeOSMR_n_TransM = look1_iflf_binlca_16a
                (rtb_TmpSignalConversionAtVeAPSR_Pct_Acce, ((const float32 *)
                  &(KxTCCR_dM_LeadTCRMinLU[0])), ((const float32 *)
                  &(KtTCCR_dM_LeadTCRMinLU[0])), 5U) * HeTCCR_t_MedTED_dT;
        }

        /* End of Switch: '<S418>/Switch3' */

        /* Outputs for Atomic SubSystem: '<S418>/GradientLimiter1' */
        /* Outputs for Atomic SubSystem: '<S430>/Limiter' */
        /* Switch: '<S436>/Switch1' incorporates:
         *  Constant: '<S418>/Constant Value7'
         *  RelationalOperator: '<S436>/Relational Operator'
         */
        if (1.0E+8F < rtb_TmpSignalConversionAtVeOHSR_n_IdleSp)
        {
            /* Switch: '<S436>/Switch1' */
            rtb_TmpSignalConversionAtVeOHSR_n_IdleSp = 1.0E+8F;
        }

        /* End of Switch: '<S436>/Switch1' */

        /* Switch: '<S436>/Switch' incorporates:
         *  RelationalOperator: '<S436>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeOHSR_n_IdleSp >
                rtb_TmpSignalConversionAtVeOSMR_n_TransM)
        {
            rtb_TmpSignalConversionAtVeOSMR_n_TransM =
                rtb_TmpSignalConversionAtVeOHSR_n_IdleSp;
        }

        /* End of Switch: '<S436>/Switch' */
        /* End of Outputs for SubSystem: '<S430>/Limiter' */

        /* Merge: '<S375>/Merge6' incorporates:
         *  Sum: '<S430>/Sum3'
         *  UnitDelay: '<S375>/Unit Delay2'
         */
        TCCR_ac_B.Merge6 = rtb_TmpSignalConversionAtVeOSMR_n_TransM +
            TCCR_ac_DW.UnitDelay2_DSTATE;

        /* End of Outputs for SubSystem: '<S418>/GradientLimiter1' */

        /* Merge: '<S375>/Merge4' incorporates:
         *  Gain: '<S434>/Gain'
         */
        VeTCCR_b_LeadTcRMin_LatchPrev = TCCR_ac_DW.UnitDelay_DSTATE_ai;

        /* End of Outputs for SubSystem: '<S375>/Gear2_Gear4' */
        break;

      case 4:
        (void)Rte_Read_VeESSR_e_EngStartStopSt_Value(&tmpRead_6);

        /* Outputs for IfAction SubSystem: '<S375>/TCCC_STN' incorporates:
         *  ActionPort: '<S415>/Action Port'
         */
        /* RelationalOperator: '<S415>/Comparison4' incorporates:
         *  Constant: '<S518>/Constant'
         *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
         */
        rtb_AND_pq = (((uint32)tmpRead_6) != CeESSR_e_EngRunning);

        /* Outputs for Atomic SubSystem: '<S415>/EdgeBi' */
        /* Switch: '<S524>/Switch1' */
        if (rtb_Comparison3_h)
        {
            /* Switch: '<S524>/Switch1' incorporates:
             *  Constant: '<S517>/FALSE Constant'
             */
            rtb_Logical2_lj = false;
        }
        else
        {
            /* Switch: '<S524>/Switch1' incorporates:
             *  UnitDelay: '<S524>/Unit Delay'
             */
            rtb_Logical2_lj = TCCR_ac_DW.UnitDelay_DSTATE_kk;
        }

        /* End of Switch: '<S524>/Switch1' */

        /* Logic: '<S517>/Logical2' incorporates:
         *  Logic: '<S516>/Logical2'
         *  Switch: '<S516>/Switch3'
         *  Switch: '<S524>/Switch3'
         */
        rtb_AND_di = !rtb_Comparison3_h;

        /* Switch: '<S524>/Switch3' incorporates:
         *  UnitDelay: '<S524>/Unit Delay'
         */
        TCCR_ac_DW.UnitDelay_DSTATE_kk = (rtb_AND_di && rtb_AND_pq);

        /* Switch: '<S415>/Switch1' incorporates:
         *  Logic: '<S517>/Logical'
         *  RelationalOperator: '<S517>/Not Equal'
         *  Switch: '<S516>/Switch2'
         *  Switch: '<S516>/Switch3'
         */
        if ((rtb_AND_pq != rtb_Logical2_lj) && rtb_AND_di)
        {
            for (i = 0; i < 2; i++)
            {
                /* UnitDelay: '<S516>/Unit Delay' incorporates:
                 *  Switch: '<S522>/Switch1'
                 *  UnitDelay: '<S522>/Unit Delay'
                 */
                TCCR_ac_DW.UnitDelay_DSTATE_m[i] = TCCR_ac_DW.UnitDelay_DSTATE[i];
            }

            /* Switch: '<S516>/Switch1' incorporates:
             *  Constant: '<S516>/Constant Value4'
             *  UnitDelay: '<S516>/Unit Delay3'
             */
            TCCR_ac_DW.UnitDelay3_DSTATE_i = 0.0F;
        }
        else
        {
            /* MinMax: '<S516>/Maximum' incorporates:
             *  Constant: '<S519>/Calib'
             *  Constant: '<S520>/Calib'
             */
            rtb_TmpSignalConversionAtVeAPSR_Pct_Acce = fmaxf(HeTCCR_t_MedTED_dT,
                KeTCCR_t_NiTgtSTNBlndTime);

            /* Outputs for Atomic SubSystem: '<S516>/Protected Division' */
            /* Switch: '<S523>/Switch1' incorporates:
             *  Constant: '<S519>/Calib'
             *  Constant: '<S523>/Constant Value'
             *  Constant: '<S523>/Constant Value1'
             *  Constant: '<S523>/Constant Value2'
             *  Constant: '<S523>/Constant Value3'
             *  Logic: '<S523>/AND'
             *  RelationalOperator: '<S523>/Greater Than or Equal '
             *  RelationalOperator: '<S523>/Greater Than or Equal 1'
             *  RelationalOperator: '<S523>/Not Equal'
             *  RelationalOperator: '<S523>/Not Equal1'
             *  Switch: '<S523>/Switch2'
             *  Switch: '<S523>/Switch3'
             */
            if ((HeTCCR_t_MedTED_dT != 0.0F) &&
                    (rtb_TmpSignalConversionAtVeAPSR_Pct_Acce != 0.0F))
            {
                /* Switch: '<S523>/Switch1' incorporates:
                 *  Product: '<S523>/Division'
                 */
                rtb_TmpSignalConversionAtVeAPSR_Pct_Acce = HeTCCR_t_MedTED_dT /
                    rtb_TmpSignalConversionAtVeAPSR_Pct_Acce;
            }
            else if (HeTCCR_t_MedTED_dT > 0.0F)
            {
                /* Switch: '<S523>/Switch2' incorporates:
                 *  Constant: '<S523>/MAXFLOAT'
                 *  Switch: '<S523>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeAPSR_Pct_Acce = 3.402823466E+38F;
            }
            else if (HeTCCR_t_MedTED_dT < 0.0F)
            {
                /* Switch: '<S523>/Switch3' incorporates:
                 *  Constant: '<S523>/MINFLOAT'
                 *  Switch: '<S523>/Switch1'
                 *  Switch: '<S523>/Switch2'
                 */
                rtb_TmpSignalConversionAtVeAPSR_Pct_Acce = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S523>/Switch1' incorporates:
                 *  Constant: '<S523>/Constant Value4'
                 *  Switch: '<S523>/Switch2'
                 *  Switch: '<S523>/Switch3'
                 */
                rtb_TmpSignalConversionAtVeAPSR_Pct_Acce = 0.0F;
            }

            /* End of Switch: '<S523>/Switch1' */
            /* End of Outputs for SubSystem: '<S516>/Protected Division' */

            /* Switch: '<S516>/Switch1' incorporates:
             *  Constant: '<S516>/Constant Value2'
             *  Constant: '<S516>/Constant Value3'
             *  Logic: '<S516>/Logical'
             *  Logic: '<S516>/Logical2'
             *  MinMax: '<S516>/MinMax'
             *  Sum: '<S516>/Summation1'
             *  UnitDelay: '<S516>/Unit Delay1'
             *  UnitDelay: '<S516>/Unit Delay3'
             */
            if ((!TCCR_ac_DW.UnitDelay1_DSTATE_k) || (!rtb_AND_di))
            {
                TCCR_ac_DW.UnitDelay3_DSTATE_i = 1.0F;
            }

            TCCR_ac_DW.UnitDelay3_DSTATE_i = fminf
                (TCCR_ac_DW.UnitDelay3_DSTATE_i +
                 rtb_TmpSignalConversionAtVeAPSR_Pct_Acce, 1.0F);
        }

        /* End of Switch: '<S415>/Switch1' */
        /* End of Outputs for SubSystem: '<S415>/EdgeBi' */

        /* Switch: '<S415>/Switch' incorporates:
         *  Inport: '<Root>/VeHSER_n_InputSpeedProfile'
         */
        if (rtb_AND_pq)
        {
            (void)Rte_Read_VeHSER_n_InputSpeedProfile_Value(&rtb_Sum8_a);

            /* Sum: '<S516>/Summation' incorporates:
             *  Inport: '<Root>/VeHSER_n_InputSpeedProfile'
             *  MinMax: '<S415>/MinMax2'
             */
            rtb_Summation_im[0] = fminf(rtb_Sum8_a,
                rtb_TmpSignalConversionAtVeOSMR_n_TransM);
            rtb_Summation_im[1] = fminf(rtb_Sum8_a,
                rtb_TmpSignalConversionAtVeOHSR_n_IdleSp);
        }
        else
        {
            /* Sum: '<S516>/Summation' */
            rtb_Summation_im[0] = rtb_TmpSignalConversionAtVeOSMR_n_TransM;
            rtb_Summation_im[1] = rtb_TmpSignalConversionAtVeOHSR_n_IdleSp;
        }

        /* End of Switch: '<S415>/Switch' */
        for (i = 0; i < 2; i++)
        {
            rtb_Summation_im[i] = ((1.0F - TCCR_ac_DW.UnitDelay3_DSTATE_i) *
                                   TCCR_ac_DW.UnitDelay_DSTATE_m[i]) +
                (TCCR_ac_DW.UnitDelay3_DSTATE_i * rtb_Summation_im[i]);
        }

        /* MinMax: '<S415>/MinMax1' incorporates:
         *  Constant: '<S516>/Constant Value'
         *  Product: '<S516>/Multiplication'
         *  Product: '<S516>/Multiplication3'
         *  Sum: '<S516>/Subtraction'
         *  Sum: '<S516>/Summation'
         *  UnitDelay: '<S516>/Unit Delay'
         *  UnitDelay: '<S516>/Unit Delay3'
         */
        TCCR_ac_B.Merge1 = fmaxf(rtb_TmpSignalConversionAtVeVSDR_n_NTurbO,
            rtb_Summation_im[0]);

        /* Merge: '<S375>/Merge5' incorporates:
         *  MinMax: '<S415>/MinMax'
         */
        TCCR_ac_B.Merge5 = fminf(TCCR_ac_B.Merge1, rtb_Summation_im[1]);

        /* Switch: '<S522>/Switch3' incorporates:
         *  UnitDelay: '<S522>/Unit Delay'
         */
        if (rtb_Comparison3_h)
        {
            TCCR_ac_DW.UnitDelay_DSTATE[0] =
                rtb_TmpSignalConversionAtVeOSMR_n_TransM;
            TCCR_ac_DW.UnitDelay_DSTATE[1] =
                rtb_TmpSignalConversionAtVeOHSR_n_IdleSp;
        }
        else
        {
            TCCR_ac_DW.UnitDelay_DSTATE[0] = rtb_Summation_im[0];
            TCCR_ac_DW.UnitDelay_DSTATE[1] = rtb_Summation_im[1];
        }

        /* End of Switch: '<S522>/Switch3' */

        /* Merge: '<S375>/Merge2' incorporates:
         *  Constant: '<S415>/Constant Value'
         *  SignalConversion generated from: '<S415>/LeTCCR_n_LeadTcR_Max'
         */
        TCCR_ac_B.Merge2 = 0.0F;

        /* Merge: '<S375>/Merge6' incorporates:
         *  Constant: '<S415>/Constant Value1'
         *  SignalConversion generated from: '<S415>/LeTCCR_n_LeadTcR_Min'
         */
        TCCR_ac_B.Merge6 = 0.0F;

        /* Merge: '<S375>/Merge3' incorporates:
         *  Constant: '<S415>/FALSE Constant'
         *  SignalConversion generated from: '<S415>/LeTCCR_b_LeadTcRMax_Latch'
         */
        VeTCCR_b_LeadTcRMax_LatchPrev = false;

        /* Merge: '<S375>/Merge4' incorporates:
         *  Constant: '<S415>/FALSE Constant1'
         *  SignalConversion generated from: '<S415>/LeTCCR_b_LeadTcRMin_Latch'
         */
        VeTCCR_b_LeadTcRMin_LatchPrev = false;

        /* Update for UnitDelay: '<S516>/Unit Delay1' incorporates:
         *  Constant: '<S516>/TRUE Constant'
         */
        TCCR_ac_DW.UnitDelay1_DSTATE_k = true;

        /* End of Outputs for SubSystem: '<S375>/TCCC_STN' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of SwitchCase: '<S375>/Switch_Case' */

    /* MinMax: '<S375>/MinMax1' */
    VeTCCR_n_NiTgt = fmaxf(TCCR_ac_B.Merge1,
                           rtb_TmpSignalConversionAtVeVSDR_n_NTurbO);

    /* MinMax: '<S375>/MinMax2' */
    VeTCCR_n_NiTgtMin = fmaxf(TCCR_ac_B.Merge5,
        rtb_TmpSignalConversionAtVeVSDR_n_NTurbO);

    /* Update for UnitDelay: '<S375>/Unit Delay8' */
    TCCR_ac_DW.UnitDelay8_DSTATE = rtb_UnitDelay7;

    /* Update for UnitDelay: '<S375>/Unit Delay3' */
    TCCR_ac_DW.UnitDelay3_DSTATE = TCCR_ac_B.Merge2;

    /* Update for UnitDelay: '<S375>/Unit Delay2' */
    TCCR_ac_DW.UnitDelay2_DSTATE = TCCR_ac_B.Merge6;

    /* Update for UnitDelay: '<S375>/Unit Delay' */
    TCCR_ac_DW.UnitDelay_DSTATE_bu = VeTCCR_b_LeadTcRMax_LatchPrev;

    /* Update for UnitDelay: '<S375>/Unit Delay1' */
    TCCR_ac_DW.UnitDelay1_DSTATE_l = VeTCCR_b_LeadTcRMin_LatchPrev;

    /* End of Outputs for SubSystem: '<S368>/TCCC_Timp_NiTgt' */

    /* Outputs for Atomic SubSystem: '<S371>/HSCL_FTC_TturbTimp' */
    /* Outputs for Atomic SubSystem: '<S377>/Protected Division2' */
    /* Switch: '<S385>/Switch1' incorporates:
     *  Constant: '<S385>/Constant Value'
     *  Constant: '<S385>/Constant Value1'
     *  Constant: '<S385>/Constant Value2'
     *  Constant: '<S385>/Constant Value3'
     *  Logic: '<S385>/AND'
     *  RelationalOperator: '<S385>/Greater Than or Equal '
     *  RelationalOperator: '<S385>/Greater Than or Equal 1'
     *  RelationalOperator: '<S385>/Not Equal'
     *  RelationalOperator: '<S385>/Not Equal1'
     *  Switch: '<S385>/Switch2'
     *  Switch: '<S385>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeVSDR_n_NTurbO != 0.0F) && (VeTCCR_n_NiTgt !=
         0.0F))
    {
        /* Switch: '<S385>/Switch1' incorporates:
         *  Product: '<S385>/Division'
         */
        VeTCCC_r_TCSRVTVR = rtb_TmpSignalConversionAtVeVSDR_n_NTurbO /
            VeTCCR_n_NiTgt;
    }
    else if (rtb_TmpSignalConversionAtVeVSDR_n_NTurbO > 0.0F)
    {
        /* Switch: '<S385>/Switch2' incorporates:
         *  Constant: '<S385>/MAXFLOAT'
         *  Switch: '<S385>/Switch1'
         */
        VeTCCC_r_TCSRVTVR = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeVSDR_n_NTurbO < 0.0F)
    {
        /* Switch: '<S385>/Switch3' incorporates:
         *  Constant: '<S385>/MINFLOAT'
         *  Switch: '<S385>/Switch1'
         *  Switch: '<S385>/Switch2'
         */
        VeTCCC_r_TCSRVTVR = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S385>/Switch1' incorporates:
         *  Constant: '<S385>/Constant Value4'
         *  Switch: '<S385>/Switch2'
         *  Switch: '<S385>/Switch3'
         */
        VeTCCC_r_TCSRVTVR = 0.0F;
    }

    /* End of Switch: '<S385>/Switch1' */
    /* End of Outputs for SubSystem: '<S377>/Protected Division2' */

    /* Lookup_n-D: '<S380>/Vector' incorporates:
     *  Switch: '<S385>/Switch1'
     */
    rtb_TmpSignalConversionAtVeAPSR_Pct_Acce = look1_iflf_binlca_16a
        (VeTCCC_r_TCSRVTVR,
         (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
         (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

    /* Switch: '<S377>/Switch1' incorporates:
     *  Constant: '<S370>/Calib'
     *  Selector: '<S368>/Selector'
     */
    if (tmpRead_7[((sint32)HeTCCR_n_SlipSpdFailIdx) - 1])
    {
        /* Lookup_n-D: '<S394>/Vector' incorporates:
         *  Constant: '<S377>/Constant Value5'
         */
        rtb_Sum1 = 0.0F;
    }
    else
    {
        /* Lookup_n-D: '<S394>/Vector' incorporates:
         *  Sum: '<S377>/Sum1'
         */
        rtb_Sum1 = VeTCCR_n_NiTgt - rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;
    }

    /* End of Switch: '<S377>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S372>/HSCL_FTC_TturbTimp' */
    /* Lookup_n-D: '<S381>/Vector' incorporates:
     *  Lookup_n-D: '<S393>/Vector'
     *  SignalConversion generated from: '<S2>/VeVSDR_n_NTurb'
     */
    rtb_TmpSignalConversionAtVeOHSR_n_IdleSp = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeVSDR_n_NTurbO,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsA_KxHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsA_KtHSCR_r_TCC_TturbFromNC2_CoeffsA
          ()), 21U);

    /* Lookup_n-D: '<S382>/Vector' incorporates:
     *  Lookup_n-D: '<S394>/Vector'
     *  SignalConversion generated from: '<S2>/VeVSDR_n_NTurb'
     */
    rtb_TmpSignalConversionAtVeOSMR_n_TransM = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeVSDR_n_NTurbO,
         (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsB_KxHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()),
         (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsB_KtHSCR_r_TCC_TturbFromNC2_CoeffsB
          ()), 21U);

    /* Lookup_n-D: '<S383>/Vector' incorporates:
     *  Lookup_n-D: '<S395>/Vector'
     *  SignalConversion generated from: '<S2>/VeVSDR_n_NTurb'
     */
    rtb_Sum8_a = look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeVSDR_n_NTurbO,
        (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsC_KxHSCR_r_TCC_TturbFromNC2_CoeffsC
         ()),
        (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsC_KtHSCR_r_TCC_TturbFromNC2_CoeffsC
         ()), 3U);

    /* End of Outputs for SubSystem: '<S372>/HSCL_FTC_TturbTimp' */

    /* Sum: '<S377>/Sum2' incorporates:
     *  Lookup_n-D: '<S381>/Vector'
     *  Lookup_n-D: '<S382>/Vector'
     *  Lookup_n-D: '<S383>/Vector'
     *  Product: '<S377>/Product'
     *  Product: '<S377>/Product1'
     */
    rtb_Sum1 = (((rtb_TmpSignalConversionAtVeOHSR_n_IdleSp * rtb_Sum1) *
                 rtb_Sum1) + (rtb_Sum1 *
                 rtb_TmpSignalConversionAtVeOSMR_n_TransM)) + rtb_Sum8_a;

    /* Outputs for Atomic SubSystem: '<S377>/Protected Division1' */
    /* Switch: '<S384>/Switch1' incorporates:
     *  Constant: '<S384>/Constant Value'
     *  Constant: '<S384>/Constant Value1'
     *  Constant: '<S384>/Constant Value2'
     *  Constant: '<S384>/Constant Value3'
     *  Logic: '<S384>/AND'
     *  RelationalOperator: '<S384>/Greater Than or Equal '
     *  RelationalOperator: '<S384>/Greater Than or Equal 1'
     *  RelationalOperator: '<S384>/Not Equal'
     *  RelationalOperator: '<S384>/Not Equal1'
     *  Switch: '<S384>/Switch2'
     *  Switch: '<S384>/Switch3'
     */
    if ((rtb_Sum1 != 0.0F) && (rtb_TmpSignalConversionAtVeAPSR_Pct_Acce != 0.0F))
    {
        /* Switch: '<S384>/Switch1' incorporates:
         *  Product: '<S384>/Division'
         */
        VeTCCR_M_Timp4VTVRRaw = rtb_Sum1 /
            rtb_TmpSignalConversionAtVeAPSR_Pct_Acce;
    }
    else if (rtb_Sum1 > 0.0F)
    {
        /* Switch: '<S384>/Switch2' incorporates:
         *  Constant: '<S384>/MAXFLOAT'
         *  Switch: '<S384>/Switch1'
         */
        VeTCCR_M_Timp4VTVRRaw = 3.402823466E+38F;
    }
    else if (rtb_Sum1 < 0.0F)
    {
        /* Switch: '<S384>/Switch3' incorporates:
         *  Constant: '<S384>/MINFLOAT'
         *  Switch: '<S384>/Switch1'
         *  Switch: '<S384>/Switch2'
         */
        VeTCCR_M_Timp4VTVRRaw = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S384>/Switch1' incorporates:
         *  Constant: '<S384>/Constant Value4'
         *  Switch: '<S384>/Switch2'
         *  Switch: '<S384>/Switch3'
         */
        VeTCCR_M_Timp4VTVRRaw = 0.0F;
    }

    /* End of Switch: '<S384>/Switch1' */
    /* End of Outputs for SubSystem: '<S377>/Protected Division1' */
    /* End of Outputs for SubSystem: '<S371>/HSCL_FTC_TturbTimp' */

    /* Outputs for Atomic SubSystem: '<S371>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S376>/Switch1' incorporates:
     *  Lookup_n-D: '<S378>/Vector'
     *  MinMax: '<S375>/MinMax1'
     *  Product: '<S376>/Multiplication'
     *  Sum: '<S376>/Subtraction'
     *  Sum: '<S376>/Summation'
     *  Switch: '<S385>/Switch1'
     *  UnitDelay: '<S376>/Unit Delay'
     */
    TCCR_ac_DW.UnitDelay_DSTATE_gu += (VeTCCR_M_Timp4VTVRRaw -
        TCCR_ac_DW.UnitDelay_DSTATE_gu) * look2_iflf_binlca_16a(VeTCCR_n_NiTgt,
        VeTCCC_r_TCSRVTVR, ((const float32 *)&(KxTCCR_k_TorqImpFiltCoeff[0])),
        ((const float32 *)&(KyTCCR_k_TorqImpFiltCoeff[0])), ((const float32 *)
        &(KtTCCR_k_TorqImpFiltCoeff[0])), TCCR_ac_ConstP.pooled10, 6U);

    /* End of Outputs for SubSystem: '<S371>/Digital Lowpass Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S372>/HSCL_FTC_TturbTimp' */
    /* Outputs for Atomic SubSystem: '<S389>/Protected Division2' */
    /* Switch: '<S397>/Switch1' incorporates:
     *  Constant: '<S397>/Constant Value'
     *  Constant: '<S397>/Constant Value1'
     *  Constant: '<S397>/Constant Value2'
     *  Constant: '<S397>/Constant Value3'
     *  Logic: '<S397>/AND'
     *  RelationalOperator: '<S397>/Greater Than or Equal '
     *  RelationalOperator: '<S397>/Greater Than or Equal 1'
     *  RelationalOperator: '<S397>/Not Equal'
     *  RelationalOperator: '<S397>/Not Equal1'
     *  Switch: '<S397>/Switch2'
     *  Switch: '<S397>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeVSDR_n_NTurbO != 0.0F) && (VeTCCR_n_NiTgtMin
         != 0.0F))
    {
        /* Switch: '<S397>/Switch1' incorporates:
         *  Product: '<S397>/Division'
         */
        VeTCCC_r_TCSRMinVTVR = rtb_TmpSignalConversionAtVeVSDR_n_NTurbO /
            VeTCCR_n_NiTgtMin;
    }
    else if (rtb_TmpSignalConversionAtVeVSDR_n_NTurbO > 0.0F)
    {
        /* Switch: '<S397>/Switch2' incorporates:
         *  Constant: '<S397>/MAXFLOAT'
         *  Switch: '<S397>/Switch1'
         */
        VeTCCC_r_TCSRMinVTVR = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeVSDR_n_NTurbO < 0.0F)
    {
        /* Switch: '<S397>/Switch3' incorporates:
         *  Constant: '<S397>/MINFLOAT'
         *  Switch: '<S397>/Switch1'
         *  Switch: '<S397>/Switch2'
         */
        VeTCCC_r_TCSRMinVTVR = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S397>/Switch1' incorporates:
         *  Constant: '<S397>/Constant Value4'
         *  Switch: '<S397>/Switch2'
         *  Switch: '<S397>/Switch3'
         */
        VeTCCC_r_TCSRMinVTVR = 0.0F;
    }

    /* End of Switch: '<S397>/Switch1' */
    /* End of Outputs for SubSystem: '<S389>/Protected Division2' */

    /* Lookup_n-D: '<S392>/Vector' incorporates:
     *  Switch: '<S397>/Switch1'
     */
    rtb_TmpSignalConversionAtVeAPSR_Pct_Acce = look1_iflf_binlca_16a
        (VeTCCC_r_TCSRMinVTVR,
         (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
         (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

    /* Switch: '<S389>/Switch1' incorporates:
     *  Constant: '<S370>/Calib'
     *  Selector: '<S368>/Selector'
     */
    if (tmpRead_7[((sint32)HeTCCR_n_SlipSpdFailIdx) - 1])
    {
        /* Switch: '<S388>/Switch2' incorporates:
         *  Constant: '<S389>/Constant Value5'
         */
        rtb_TmpSignalConversionAtVeVSDR_n_NTurbO = 0.0F;
    }
    else
    {
        /* Switch: '<S388>/Switch2' incorporates:
         *  Sum: '<S389>/Sum1'
         */
        rtb_TmpSignalConversionAtVeVSDR_n_NTurbO = VeTCCR_n_NiTgtMin -
            rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;
    }

    /* End of Switch: '<S389>/Switch1' */

    /* Sum: '<S389>/Sum2' incorporates:
     *  Product: '<S389>/Product'
     *  Product: '<S389>/Product1'
     */
    rtb_TmpSignalConversionAtVeVSDR_n_NTurbO =
        (((rtb_TmpSignalConversionAtVeOHSR_n_IdleSp *
           rtb_TmpSignalConversionAtVeVSDR_n_NTurbO) *
          rtb_TmpSignalConversionAtVeVSDR_n_NTurbO) +
         (rtb_TmpSignalConversionAtVeVSDR_n_NTurbO *
          rtb_TmpSignalConversionAtVeOSMR_n_TransM)) + rtb_Sum8_a;

    /* Outputs for Atomic SubSystem: '<S389>/Protected Division1' */
    /* Switch: '<S396>/Switch1' incorporates:
     *  Constant: '<S396>/Constant Value'
     *  Constant: '<S396>/Constant Value1'
     *  Constant: '<S396>/Constant Value2'
     *  Constant: '<S396>/Constant Value3'
     *  Logic: '<S396>/AND'
     *  RelationalOperator: '<S396>/Greater Than or Equal '
     *  RelationalOperator: '<S396>/Greater Than or Equal 1'
     *  RelationalOperator: '<S396>/Not Equal'
     *  RelationalOperator: '<S396>/Not Equal1'
     *  Switch: '<S396>/Switch2'
     *  Switch: '<S396>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeVSDR_n_NTurbO != 0.0F) &&
            (rtb_TmpSignalConversionAtVeAPSR_Pct_Acce != 0.0F))
    {
        /* Switch: '<S396>/Switch1' incorporates:
         *  Product: '<S396>/Division'
         */
        VeTCCR_M_TimpMin4VTVRRaw = rtb_TmpSignalConversionAtVeVSDR_n_NTurbO /
            rtb_TmpSignalConversionAtVeAPSR_Pct_Acce;
    }
    else if (rtb_TmpSignalConversionAtVeVSDR_n_NTurbO > 0.0F)
    {
        /* Switch: '<S396>/Switch2' incorporates:
         *  Constant: '<S396>/MAXFLOAT'
         *  Switch: '<S396>/Switch1'
         */
        VeTCCR_M_TimpMin4VTVRRaw = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeVSDR_n_NTurbO < 0.0F)
    {
        /* Switch: '<S396>/Switch3' incorporates:
         *  Constant: '<S396>/MINFLOAT'
         *  Switch: '<S396>/Switch1'
         *  Switch: '<S396>/Switch2'
         */
        VeTCCR_M_TimpMin4VTVRRaw = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S396>/Switch1' incorporates:
         *  Constant: '<S396>/Constant Value4'
         *  Switch: '<S396>/Switch2'
         *  Switch: '<S396>/Switch3'
         */
        VeTCCR_M_TimpMin4VTVRRaw = 0.0F;
    }

    /* End of Switch: '<S396>/Switch1' */
    /* End of Outputs for SubSystem: '<S389>/Protected Division1' */
    /* End of Outputs for SubSystem: '<S372>/HSCL_FTC_TturbTimp' */

    /* Outputs for Atomic SubSystem: '<S372>/Digital Lowpass Reset Enabled' */
    /* Sum: '<S388>/Summation' incorporates:
     *  Lookup_n-D: '<S390>/Vector'
     *  MinMax: '<S375>/MinMax2'
     *  Product: '<S388>/Multiplication'
     *  Sum: '<S388>/Subtraction'
     *  Switch: '<S397>/Switch1'
     *  UnitDelay: '<S388>/Unit Delay'
     */
    TCCR_ac_DW.UnitDelay_DSTATE_b += (VeTCCR_M_TimpMin4VTVRRaw -
        TCCR_ac_DW.UnitDelay_DSTATE_b) * look2_iflf_binlca_16a(VeTCCR_n_NiTgtMin,
        VeTCCC_r_TCSRMinVTVR, ((const float32 *)&(KxTCCR_k_TorqImpFiltCoeff[0])),
        ((const float32 *)&(KyTCCR_k_TorqImpFiltCoeff[0])), ((const float32 *)
        &(KtTCCR_k_TorqImpFiltCoeff[0])), TCCR_ac_ConstP.pooled10, 6U);

    /* End of Outputs for SubSystem: '<S372>/Digital Lowpass Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S368>/TCCC_Timp_NiTgt' */
    /* Outport: '<Root>/VeTCCR_M_LCCMaxTrqAllwd' incorporates:
     *  Gain: '<S410>/Gain'
     *  SignalConversion generated from: '<S2>/LeTCCR_n_LeadTcR_Max'
     */
    (void)Rte_Write_VeTCCR_M_LCCMaxTrqAllwd_Value(TCCR_ac_B.Merge2);

    /* Outport: '<Root>/VeTCCR_M_LCCMinTrqAllwd' incorporates:
     *  Gain: '<S409>/Gain'
     *  SignalConversion generated from: '<S2>/LeTCCR_n_LeadTcR_Min'
     */
    (void)Rte_Write_VeTCCR_M_LCCMinTrqAllwd_Value(TCCR_ac_B.Merge6);

    /* End of Outputs for SubSystem: '<S368>/TCCC_Timp_NiTgt' */

    /* Outputs for Atomic SubSystem: '<S372>/Digital Lowpass Reset Enabled' */
    /* Outport: '<Root>/VeTCCR_M_TimpMin4VTVR' incorporates:
     *  SignalConversion generated from: '<S2>/M_TimpMin_VTVR'
     *  Switch: '<S388>/Switch2'
     */
    (void)Rte_Write_VeTCCR_M_TimpMin4VTVR_Value(TCCR_ac_DW.UnitDelay_DSTATE_b);

    /* End of Outputs for SubSystem: '<S372>/Digital Lowpass Reset Enabled' */

    /* Outport: '<Root>/VeTCCR_M_Timp4VTVR' incorporates:
     *  Gain: '<S379>/Gain'
     *  SignalConversion generated from: '<S2>/M_Timp_VTVR'
     *  UnitDelay: '<S376>/Unit Delay'
     */
    (void)Rte_Write_VeTCCR_M_Timp4VTVR_Value(TCCR_ac_DW.UnitDelay_DSTATE_gu);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/TCCR_FUNC_MedTED' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

}

#endif

/* Output function */
FUNC(void, TCCR_CODE) TCCR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TCCR_FUNC_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/TCCO_PUpRtines'
     */
    /* SignalConversion generated from: '<S527>/TCCO_M_Timp' */
    TCCR_ac_B.OutportBufferForTCCO_M_Timp = 0.0F;

    /* SignalConversion generated from: '<S527>/TCCO_r_TR' */
    TCCR_ac_B.OutportBufferForTCCO_r_TR = 1.0F;

    /* SignalConversion generated from: '<S527>/TCCO_r_CreepVrtlRt' */
    TCCR_ac_B.OutportBufferForTCCO_r_CreepVrtlRt = 0.0F;

    /* SignalConversion generated from: '<S527>/TCCO_TimpMinVTVR' */
    TCCR_ac_B.OutportBufferForTCCO_TimpMinVTVR = 0.0F;

    /* SignalConversion generated from: '<S527>/TCCO_M_LCCTorq' */
    TCCR_ac_B.OutportBufferForTCCO_M_LCCTorq = 0.0F;

    /* SignalConversion generated from: '<S527>/TCCO_Clutch_stat_LCC' incorporates:
     *  Constant: '<S530>/Constant'
     */
    TCCR_ac_B.OutportBufferForTCCO_Clutch_stat_LCC = TCCR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S527>/TCCO_LCCMaxTrqAllwd' */
    TCCR_ac_B.OutportBufferForTCCO_LCCMaxTrqAllwd = 0.0F;

    /* SignalConversion generated from: '<S527>/TCCO_LCCMinTrqAllwd' */
    TCCR_ac_B.OutportBufferForTCCO_LCCMinTrqAllwd = 0.0F;

    /* SignalConversion generated from: '<S527>/TCCO_TimpVTVR' */
    TCCR_ac_B.OutportBufferForTCCO_TimpVTVR = 0.0F;

    /* SignalConversion generated from: '<S527>/TCCO_M_LCCTorqSigned' */
    TCCR_ac_B.OutportBufferForTCCO_M_LCCTorqSigned = 0.0F;

    /* SignalConversion generated from: '<S527>/TCCR_e_LCCNCSgn' incorporates:
     *  Constant: '<S529>/Constant'
     */
    TCCR_ac_B.OutportBufferForTCCR_e_LCCNCSgn = TCCR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S527>/TCCO_M_CreepTimp' */
    TCCR_ac_B.OutportBufferForTCCO_M_CreepTimp = 0.0F;

    /* SignalConversion generated from: '<S527>/TCCO_M_CreepTturb' */
    TCCR_ac_B.OutportBufferForTCCO_M_CreepTturb = 0.0F;

    /* SignalConversion generated from: '<S527>/TCCO_r_RampFactor' */
    TCCR_ac_B.OutportBufferForTCCO_r_RampFactor = 0.0F;

    /* SignalConversion generated from: '<S527>/TCCO_M_TimpTgt' */
    TCCR_ac_B.OutportBufferForTCCO_M_TimpTgt = 0.0F;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeTCCR_e_ClchStLCC' incorporates:
     *  SignalConversion generated from: '<S3>/TCCO_Clutch_stat_LCC'
     *  SignalConversion generated from: '<S527>/TCCO_Clutch_stat_LCC'
     */
    (void)Rte_Write_VeTCCR_e_ClchStLCC_Value
        (TCCR_ac_B.OutportBufferForTCCO_Clutch_stat_LCC);

    /* Outport: '<Root>/VeTCCR_M_LCCMaxTrqAllwd' incorporates:
     *  SignalConversion generated from: '<S3>/TCCO_LCCMaxTrqAllwd'
     */
    (void)Rte_Write_VeTCCR_M_LCCMaxTrqAllwd_Value
        (TCCR_ac_B.OutportBufferForTCCO_LCCMaxTrqAllwd);

    /* Outport: '<Root>/VeTCCR_M_LCCMinTrqAllwd' incorporates:
     *  SignalConversion generated from: '<S3>/TCCO_LCCMinTrqAllwd'
     */
    (void)Rte_Write_VeTCCR_M_LCCMinTrqAllwd_Value
        (TCCR_ac_B.OutportBufferForTCCO_LCCMinTrqAllwd);

    /* Outport: '<Root>/VeTCCR_M_CreepTimp' incorporates:
     *  SignalConversion generated from: '<S3>/TCCO_M_CreepTimp'
     */
    (void)Rte_Write_VeTCCR_M_CreepTimp_Value
        (TCCR_ac_B.OutportBufferForTCCO_M_CreepTimp);

    /* Outport: '<Root>/VeTCCR_M_CreepTturb' incorporates:
     *  SignalConversion generated from: '<S3>/TCCO_M_CreepTturb'
     */
    (void)Rte_Write_VeTCCR_M_CreepTturb_Value
        (TCCR_ac_B.OutportBufferForTCCO_M_CreepTturb);

    /* Outport: '<Root>/VeTCCR_M_LCCTorq' incorporates:
     *  SignalConversion generated from: '<S3>/TCCO_M_LCCTorq'
     */
    (void)Rte_Write_VeTCCR_M_LCCTorq_Value
        (TCCR_ac_B.OutportBufferForTCCO_M_LCCTorq);

    /* Outport: '<Root>/VeTCCR_M_LCCTorqSigned' incorporates:
     *  SignalConversion generated from: '<S3>/TCCO_M_LCCTorqSigned'
     */
    (void)Rte_Write_VeTCCR_M_LCCTorqSigned_Value
        (TCCR_ac_B.OutportBufferForTCCO_M_LCCTorqSigned);

    /* Outport: '<Root>/VeTCCR_M_Timp' incorporates:
     *  SignalConversion generated from: '<S3>/TCCO_M_Timp'
     */
    (void)Rte_Write_VeTCCR_M_Timp_Value(TCCR_ac_B.OutportBufferForTCCO_M_Timp);

    /* Outport: '<Root>/VeTCCR_M_CreepTimpTgt' incorporates:
     *  SignalConversion generated from: '<S3>/TCCO_M_TimpTgt'
     */
    (void)Rte_Write_VeTCCR_M_CreepTimpTgt_Value
        (TCCR_ac_B.OutportBufferForTCCO_M_TimpTgt);

    /* Outport: '<Root>/VeTCCR_M_TimpMin4VTVR' incorporates:
     *  SignalConversion generated from: '<S3>/TCCO_TimpMinVTVR'
     */
    (void)Rte_Write_VeTCCR_M_TimpMin4VTVR_Value
        (TCCR_ac_B.OutportBufferForTCCO_TimpMinVTVR);

    /* Outport: '<Root>/VeTCCR_M_Timp4VTVR' incorporates:
     *  SignalConversion generated from: '<S3>/TCCO_TimpVTVR'
     */
    (void)Rte_Write_VeTCCR_M_Timp4VTVR_Value
        (TCCR_ac_B.OutportBufferForTCCO_TimpVTVR);

    /* Outport: '<Root>/VeTCCR_r_CreepVrtlRt' incorporates:
     *  SignalConversion generated from: '<S3>/TCCO_r_CreepVrtlRt'
     */
    (void)Rte_Write_VeTCCR_r_CreepVrtlRt_Value
        (TCCR_ac_B.OutportBufferForTCCO_r_CreepVrtlRt);

    /* Outport: '<Root>/VeTCCR_r_RampFactor' incorporates:
     *  SignalConversion generated from: '<S3>/TCCO_r_RampFactor'
     */
    (void)Rte_Write_VeTCCR_r_RampFactor_Value
        (TCCR_ac_B.OutportBufferForTCCO_r_RampFactor);

    /* Outport: '<Root>/VeTCCR_r_TR' incorporates:
     *  SignalConversion generated from: '<S3>/TCCO_r_TR'
     */
    (void)Rte_Write_VeTCCR_r_TR_Value(TCCR_ac_B.OutportBufferForTCCO_r_TR);

    /* Outport: '<Root>/VeTCCR_e_LCCNCSgn' incorporates:
     *  SignalConversion generated from: '<S3>/TCCR_e_LCCNCSgn'
     *  SignalConversion generated from: '<S527>/TCCR_e_LCCNCSgn'
     */
    (void)Rte_Write_VeTCCR_e_LCCNCSgn_Value
        (TCCR_ac_B.OutportBufferForTCCR_e_LCCNCSgn);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, TCCR_CODE) TCCR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TCCR_FUNC_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/TCCO_PUpRtines'
     */
    /* SystemInitialize for SignalConversion generated from: '<S527>/TCCO_r_TR' */
    TCCR_ac_B.OutportBufferForTCCO_r_TR = 1.0F;

    /* SystemInitialize for SignalConversion generated from: '<S527>/TCCO_Clutch_stat_LCC' incorporates:
     *  Constant: '<S530>/Constant'
     */
    TCCR_ac_B.OutportBufferForTCCO_Clutch_stat_LCC = TCCR_ac_ConstB.Constant_d;

    /* SystemInitialize for SignalConversion generated from: '<S527>/TCCR_e_LCCNCSgn' incorporates:
     *  Constant: '<S529>/Constant'
     */
    TCCR_ac_B.OutportBufferForTCCR_e_LCCNCSgn = TCCR_ac_ConstB.Constant;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeTCCR_e_ClchStLCC' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    (void)Rte_Write_VeTCCR_e_ClchStLCC_Value(CeHCCR_e_ClInvalid);

    /* SystemInitialize for Outport: '<Root>/VeTCCR_e_LCCNCSgn' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    (void)Rte_Write_VeTCCR_e_LCCNCSgn_Value(CeTMMR_e_UnknownNCSign);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
