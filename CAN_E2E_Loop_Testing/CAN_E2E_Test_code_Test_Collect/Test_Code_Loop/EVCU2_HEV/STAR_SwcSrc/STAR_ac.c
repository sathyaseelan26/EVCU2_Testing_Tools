/*
 * File: STAR_ac.c
 *
 * Code generated for Simulink model 'STAR_ac'.
 *
 * Model version                  : 9.107
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:06:18 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "STAR_ac.h"
#include "look2_iflf_binlcapw.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_STAR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(float32, STAR_VAR_INIT) HeSTAR_t_MedTEB_dT = 0.01F;/* Referenced by:
                                                                      * '<S29>/Calib'
                                                                      * '<S485>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(sint16, STAR_VAR_INIT) KaSTAR_k_StrtTypBasWght[14] =
{
    8, 7, 6, 5, 2, 3, 4, 1, 0, 1, 9, 10, 12, 13
} ;                                    /* Referenced by: '<S505>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(float32, STAR_VAR_INIT) KeSTAR_P_StrtTypCKSDisChrgLmMax =
    22.0F;                             /* Referenced by: '<S190>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(float32, STAR_VAR_INIT) KeSTAR_P_StrtTypLwPwrDisChrgLmMax =
    20.0F;                             /* Referenced by: '<S199>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(float32, STAR_VAR_INIT) KeSTAR_Pct_StrtTypCKSSOCMax =
    18.0F;                             /* Referenced by: '<S191>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(float32, STAR_VAR_INIT) KeSTAR_Pct_StrtTypLwPwrIBSSOCMin =
    20.0F;                             /* Referenced by: '<S200>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(float32, STAR_VAR_INIT) KeSTAR_Pct_StrtTypLwPwrSOC_Max =
    20.0F;                             /* Referenced by: '<S201>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(float32, STAR_VAR_INIT) KeSTAR_T_StrtTypCKSTrnTmpMax =
    0.0F;                              /* Referenced by: '<S192>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(float32, STAR_VAR_INIT) KeSTAR_T_StrtTypLwPwrAmbTemp_Max =
    -10.0F;                            /* Referenced by: '<S202>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(float32, STAR_VAR_INIT) KeSTAR_T_StrtTypLwPwrBPackMax =
    20.0F;                             /* Referenced by: '<S203>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(float32, STAR_VAR_INIT) KeSTAR_T_StrtTypLwPwrBeltTemp_Max =
    -10.0F;                            /* Referenced by: '<S204>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(float32, STAR_VAR_INIT) KeSTAR_T_StrtTypLwPwrECT_Max =
    5.0F;                              /* Referenced by: '<S205>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(float32, STAR_VAR_INIT) KeSTAR_T_StrtTypLwPwrTrnTmpMax =
    0.0F;                              /* Referenced by: '<S206>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(boolean, STAR_VAR_INIT) KeSTAR_b_Dsbl4StrtDvc1 = 0;/* Referenced by: '<S529>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(boolean, STAR_VAR_INIT) KeSTAR_b_DsblKeyCrnkHyb4AStrt = 1;/* Referenced by: '<S530>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(boolean, STAR_VAR_INIT) KeSTAR_b_FtrElecStrtEnab = 1;/* Referenced by: '<S128>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(boolean, STAR_VAR_INIT) KeSTAR_b_StrtTypLwPwrIBSSOCEnbl =
    0;                                 /* Referenced by: '<S207>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(boolean, STAR_VAR_INIT) KeSTAR_b_StrtTypLwPwrLimONEnbl = 0;/* Referenced by: '<S208>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint16, STAR_VAR_INIT) KeSTAR_d_EnblSpclStrtTyp = 511U;/* Referenced by: '<S133>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint16, STAR_VAR_INIT) KeSTAR_d_EnblStrtTyp = 3852U;/* Referenced by: '<S134>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(TeSTRR_e_EngStrtStopType, STAR_VAR_INIT)
    KeSTAR_e_CATWarmUpStrtTyp = CeSTRR_e_KeyCrnkHybTrq;/* Referenced by: '<S135>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(TeSTRR_e_EngStrtStopType, STAR_VAR_INIT)
    KeSTAR_e_CKSStrtTypMax = CeSTRR_e_KeyCrnkEngTrq;/* Referenced by: '<S193>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(TeSTRR_e_EngStrtStopType, STAR_VAR_INIT)
    KeSTAR_e_CKSStrtTypMin = CeSTRR_e_KeyCrnkHybTrq;/* Referenced by: '<S194>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(TeSTRR_e_EngStrtStopType, STAR_VAR_INIT)
    KeSTAR_e_DfltStrtTyp = CeSTRR_e_AStrtNormal;/* Referenced by: '<S136>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(TeSTRR_e_EngStrtStopType, STAR_VAR_INIT)
    KeSTAR_e_HardChkStrtTyp = CeSTRR_e_AStrtAggrsv;/* Referenced by: '<S137>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(TeSTRR_e_EngStrtStopType, STAR_VAR_INIT)
    KeSTAR_e_InPlntMdStrtTyp = CeSTRR_e_KeyCrnkEngTrq;/* Referenced by: '<S138>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(TeSTRR_e_EngStrtStopType, STAR_VAR_INIT)
    KeSTAR_e_KeyOffStrtTyp = CeSTRR_e_KeyCrnkEngTrq;/* Referenced by: '<S139>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(TeSTRR_e_AutoStopStartOvrrd, STAR_VAR_INIT)
    KeSTAR_e_OvrrdEng = CeSTRR_e_NoOvrrd;/* Referenced by: '<S30>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(TeSTRR_e_EngStrtStopType, STAR_VAR_INIT)
    KeSTAR_e_OvrrdStrtTyp = CeSTRR_e_NoAction;/* Referenced by: '<S140>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(TeSTRR_e_EngStrtStopType, STAR_VAR_INIT)
    KeSTAR_e_ServStrtTyp = CeSTRR_e_AStrtGeneric;/* Referenced by: '<S141>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(TeSTRR_e_EngStrtStopType, STAR_VAR_INIT)
    KeSTAR_e_SoftChkStrtTyp = CeSTRR_e_AStrtSmooth;/* Referenced by: '<S142>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_AStrtAgg_Dsbl3 = 0U;/* Referenced by: '<S531>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_AStrtAgg_Enbl3 = 0U;/* Referenced by: '<S532>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_AStrtGen_Dsbl3 = 0U;/* Referenced by: '<S533>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_AStrtGen_Enbl3 = 0U;/* Referenced by: '<S534>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_AStrtNrml_Dsbl3 = 0U;/* Referenced by: '<S535>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_AStrtNrml_Enbl3 = 0U;/* Referenced by: '<S536>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_AStrtRev_Dsbl3 = 0U;/* Referenced by: '<S537>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_AStrtRev_Enbl3 = 0U;/* Referenced by: '<S538>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_AStrtSmth_Dsbl3 = 0U;/* Referenced by: '<S539>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_AStrtSmth_Enbl3 = 0U;/* Referenced by: '<S540>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_ClchStrt_Dsbl3 = 0U;/* Referenced by: '<S607>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_EMLPS_Dsbl3 = 0U;/* Referenced by: '<S608>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_EMStrt_Dsbl3 = 0U;/* Referenced by: '<S609>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_ImplsStrt_Dsbl3 = 0U;/* Referenced by: '<S610>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_KeyCrnkEng_Dsbl3 = 0U;/* Referenced by: '<S541>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_KeyCrnkEng_Enbl3 = 0U;/* Referenced by: '<S542>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_KeyCrnkGen_Dsbl3 = 0U;/* Referenced by: '<S543>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_KeyCrnkGen_Enbl3 = 0U;/* Referenced by: '<S544>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_KeyCrnkGrn_Dsbl3 = 0U;/* Referenced by: '<S545>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_KeyCrnkGrn_Enbl3 = 0U;/* Referenced by: '<S546>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_KeyCrnkHyb_Dsbl3 = 0U;/* Referenced by: '<S547>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_KeyCrnkHyb_Enbl3 = 0U;/* Referenced by: '<S548>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_KeyCrnkLPB_Dsbl3 = 0U;/* Referenced by: '<S549>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_KeyCrnkLPB_Enbl3 = 0U;/* Referenced by: '<S550>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_g_OvrrdEnbl = 62463U;/* Referenced by: '<S31>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) KeSTAR_t_MaxEngOffTime = 777600U;/* Referenced by: '<S129>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(float32, STAR_VAR_INIT) KeSTAR_t_OptmizerReqTmMx = 0.5F;/* Referenced by: '<S32>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(float32, STAR_VAR_INIT) KeSTAR_t_P1fStrtWaitTm = 1.0F;/* Referenced by: '<S486>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(float32, STAR_VAR_INIT) KeSTAR_v_HoodRemStpSpdThrsh = 5.0F;/* Referenced by: '<S33>/Calib' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(float32, STAR_VAR_INIT) KtSTAR_k_TempBsdStrtType[294] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 2.0F, 2.0F, 2.0F, 2.0F,
    2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F,
    2.0F, 1.0F, 1.0F, 1.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F,
    2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 1.0F, 1.0F, 1.0F, 2.0F,
    2.0F, 2.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F,
    3.0F, 3.0F, 3.0F, 3.0F, 1.0F, 1.0F, 1.0F, 2.0F, 2.0F, 2.0F, 3.0F, 3.0F, 3.0F,
    3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 1.0F,
    1.0F, 1.0F, 2.0F, 2.0F, 2.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F,
    3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 1.0F, 1.0F, 1.0F, 2.0F, 2.0F, 2.0F,
    3.0F, 3.0F, 3.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F,
    4.0F, 4.0F, 1.0F, 1.0F, 1.0F, 2.0F, 2.0F, 2.0F, 3.0F, 3.0F, 3.0F, 4.0F, 4.0F,
    4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 1.0F, 1.0F, 1.0F,
    2.0F, 2.0F, 2.0F, 3.0F, 3.0F, 3.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F,
    4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 1.0F, 1.0F, 1.0F, 2.0F, 2.0F, 2.0F, 3.0F, 3.0F,
    3.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F,
    1.0F, 1.0F, 1.0F, 2.0F, 2.0F, 2.0F, 3.0F, 3.0F, 3.0F, 4.0F, 4.0F, 4.0F, 4.0F,
    4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F
} ;                                    /* Referenced by: '<S195>/Vector' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(float32, STAR_VAR_INIT) KxSTAR_k_TempBsdStrtType[21] =
{
    -40.0F, -35.0F, -25.0F, -24.0F, -20.0F, -13.0F, -12.0F, -9.0F, -1.0F, 0.0F,
    10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 50.0F, 55.0F, 60.0F
} ;                                    /* Referenced by: '<S195>/Vector' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static volatile CONST(float32, STAR_VAR_INIT) KySTAR_k_TempBsdStrtType[14] =
{
    -40.0F, -35.0F, -30.0F, -24.0F, -23.0F, -13.0F, -12.0F, -9.0F, -1.0F, 0.0F,
    10.0F, 15.0F, 20.0F, 25.0F
} ;                                    /* Referenced by: '<S195>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_STAR
#include "MemMap.h"
#define START_SEC_CONST_UNSPECIFIED_STAR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalConstant */
#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint16, STAR_VAR_INIT) CaSTAR_e_StrtTypPrty[14] =
{
    1U, 2U, 3U, 4U, 5U, 6U, 7U, 8U, 10U, 13U, 14U, 15U, 16U, 17U
} ;                                    /* Referenced by: '<S501>/ExtSTEnbler' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static volatile CONST(uint32, STAR_VAR_INIT) CaSTAR_k_ExtSTEnbler[18] =
{
    0U, 2U, 4U, 8U, 16U, 32U, 64U, 128U, 256U, 0U, 1024U, 0U, 0U, 8192U, 16384U,
    32768U, 65536U, 131072U
} ;                                    /* Referenced by: '<S36>/ExtSTEnbler' */

#endif

#define STOP_SEC_CONST_UNSPECIFIED_STAR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_STAR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if !Rte_SysCon_Variant_STAR_BEVVar

static VAR(sint16, STAR_VAR_INIT) VaSTAR_K_StrtTypWghtMtrx[18];/* '<S615>/Gain' */

#endif

static VAR(boolean, STAR_VAR_INIT) VeSTAR_b_CltchStrtCnfrm;/* '<S4>/VarSS_Stage1Arb' */

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static VAR(boolean, STAR_VAR_INIT) VeSTAR_b_CltchStrtCnfrmd;/* '<S471>/Logical4' */

#endif

static VAR(boolean, STAR_VAR_INIT) VeSTAR_b_CmdEngOnArb2;/* '<S5>/VarSS_Stage2Arb' */
static VAR(boolean, STAR_VAR_INIT) VeSTAR_b_CmdEngOnRaw;/* '<S4>/VarSS_Stage1Arb' */
static VAR(boolean, STAR_VAR_INIT) VeSTAR_b_EMStrtCnfrm;/* '<S4>/VarSS_Stage1Arb' */

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static VAR(boolean, STAR_VAR_INIT) VeSTAR_b_EMStrtCnfrmd;/* '<S471>/Logical8' */

#endif

static VAR(boolean, STAR_VAR_INIT) VeSTAR_b_EngOffAllwdSTGCRaw;/* '<S4>/VarSS_Stage1Arb' */
static VAR(boolean, STAR_VAR_INIT) VeSTAR_b_ImplsStrtCltchMd;/* '<S4>/VarSS_Stage1Arb' */
static VAR(boolean, STAR_VAR_INIT) VeSTAR_b_ImplsStrtCnfrm;/* '<S4>/VarSS_Stage1Arb' */

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static VAR(boolean, STAR_VAR_INIT) VeSTAR_b_ImplsStrtCnfrmd;/* '<S471>/Logical7' */

#endif

static VAR(boolean, STAR_VAR_INIT) VeSTAR_b_ImplsStrtEMMd;/* '<S4>/VarSS_Stage1Arb' */
static VAR(boolean, STAR_VAR_INIT) VeSTAR_b_RemStop1;/* '<S4>/VarSS_Stage1Arb' */

#if !Rte_SysCon_Variant_STAR_BEVVar

static VAR(boolean, STAR_VAR_INIT) VeSTAR_b_RemStopRaw;/* '<S38>/Logical Operator1' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

static VAR(boolean, STAR_VAR_INIT) VeSTAR_b_StrtAllwd2;/* '<S471>/Logical27' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static VAR(uint16, STAR_VAR_INIT) VeSTAR_d_StrtTypEnbled;/* '<S503>/Switch15' */

#endif

static VAR(uint32, STAR_VAR_INIT) VeSTAR_g_ExtSTEnbl_DS;/* '<Root>/DSM_1' */
static VAR(uint32, STAR_VAR_INIT) VeSTAR_g_GenStrTypReg_DS;/* '<Root>/DSM_2' */
static VAR(uint32, STAR_VAR_INIT) VeSTAR_g_GenStrtStpReg_DS;/* '<Root>/DSM_3' */

#if !Rte_SysCon_Variant_STAR_BEVVar

static VAR(sint16, STAR_VAR_INIT) VeSTAR_k_StrtTypFnlWght;/* '<S506>/MinMax' */

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

static VAR(uint32, STAR_VAR_INIT) VeSTAR_t_EngOff;/* '<S47>/Sum1' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_STAR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_STAR
#include "MemMap.h"

CONST(ConstB_STAR_ac_T, STAR_VAR_INIT) STAR_ac_ConstB =
{
    CeSTRR_e_NoAction,                 /* '<S617>/Const3' */
    CeSTRR_e_NoAction,                 /* '<S617>/Const6' */
    CeSTRR_e_None                      /* '<S617>/Const13' */
};

#define STOP_SEC_CONST_UNSPECIFIED_STAR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_STAR
#include "MemMap.h"

CONST(ConstP_STAR_ac_T, STAR_VAR_INIT) STAR_ac_ConstP =
{

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S195>/Vector'
     */
    {
        20U, 13U
    },

#endif

#ifndef CONSTP_STAR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_STAR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_STAR
#include "MemMap.h"

VAR(B_STAR_ac_T, STAR_VAR_INIT) STAR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_STAR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_STAR
#include "MemMap.h"

VAR(DW_STAR_ac_T, STAR_VAR_INIT) STAR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_STAR
#include "MemMap.h"

/* Model step function for TID1 */
FUNC(void, STAR_CODE) STAR_MedTEB(void) /* Explicit Task: MedTEB */
{

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    float32 tmpRead;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    TeBRKR_e_BrkPdl_Stat tmpRead_0;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    boolean tmpRead_1;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean tmpRead_2;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean tmpRead_3;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    TeHSER_e_RngEqnSel tmpRead_4;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    TeHSWR_e_HCPHoodAjarSts tmpRead_5;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    float32 tmpRead_6;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    boolean tmpRead_7;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    TePLTR_e_Towing_MD_RQ tmpRead_8;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    TeSTRR_e_AutoStopStartOvrrd tmpRead_9;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean tmpRead_a;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    boolean tmpRead_b;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    float32 tmpRead_c;

#endif

    boolean rtb_VariantMergeForOutportClt_n;
    boolean rtb_VariantMergeForOutportClt_o;
    boolean rtb_VariantMergeForOutportCmdEn;
    boolean rtb_VariantMergeForOutportCmd_n;
    boolean rtb_VariantMergeForOutportEMMd;
    boolean rtb_VariantMergeForOutportEMS_d;
    boolean rtb_VariantMergeForOutportImp_d;
    boolean rtb_VariantMergeForOutportRemSt;
    boolean rtb_VariantMergeForOutportSTGCO;

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_Logical7_o;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_Switch1_ak;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_TmpSignalConversionAtVeRTMR;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_Switch1_o;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_Logical3_a;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_Logical4_jt;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_Switch1_ml;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_Switch1_gq;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_Logical13_k;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_TmpSignalConversionAtVeSTRR;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_Logical10_iq;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_RelatonalOperator1;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_Comparison13_c5;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_LeSTAR_b_CKSCndn;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_LeSTAR_b_HVLoTmpCndn;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_Comparison14_kh;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    float32 rtb_Switch1_m;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    float32 rtb_TmpSignalConversionAtVeENGR;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    float32 rtb_TmpSignalConversionAtVeBPCR;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    float32 rtb_TmpSignalConversionAtVeBP_a;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    float32 rtb_TmpSignalConversionAtVeTFTR;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    float32 rtb_TmpSignalConversionAtVeSTCR;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_Compare_fb;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    sint16 rtb_Selector1;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    uint32 rtb_Switch10_i;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    uint32 rtb_Switch15;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    uint32 rtb_Switch2_k;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    uint32 rtb_Switch2_il;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    uint32 rtb_Switch2_dw;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    uint32 rtb_Switch2_bj;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    uint32 rtb_Switch2_li;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    uint32 rtb_Switch2_fa;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    uint32 rtb_Switch2_l;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    uint32 rtb_Switch2_ji;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    uint32 rtb_Switch10_k;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    uint8 rtb_TmpSignalConversionAtVeST_m;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    uint16 rtb_Switch1_ok;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_VariantMergeForOutportCltch;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_VariantMergeForOutportImpls;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_VariantMergeForOutportEMStr;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_VariantMergeForOutportEMLPS;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    sint16 rtb_Switch1_c;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    sint16 rtb_Switch2_na;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    sint16 rtb_Switch3_n;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    sint16 rtb_Switch4_gg;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    sint16 rtb_Switch5_ay;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    sint16 rtb_Switch6_o;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    sint16 rtb_Switch7_c;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    sint16 rtb_Switch8_d;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    sint16 rtb_Switch9_i;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    sint16 rtb_Switch10_m;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    sint16 rtb_Switch11_p;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    sint16 rtb_Switch12_n;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    sint16 rtb_Switch13_j;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_Logical13_l;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_TmpSignalConversionAtVeST_a;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_LogicalOperator1_d;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    uint32 rtb_TmpSignalConversionAtVeSTFR;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    TeHSWR_e_HoodStatus rtb_DataTypeConversion_d;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    TeSTRR_e_AutoStopStartOvrrd rtb_TmpSignalConversionAtVeEN_c;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    TeSTRR_e_AutoStopStartOvrrd rtb_TmpSignalConversionAtVeRT_j;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    TeHSER_e_InhibitStartStop rtb_TmpSignalConversionAtVeHSER;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    TeSTRR_e_HybStrtrSt rtb_TmpSignalConversionAtVeST_g;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    TeESSR_e_EngStartStopSt rtb_TmpSignalConversionAtVeES_d;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    TeESSR_e_TCM_StartStopType rtb_TmpSignalConversionAtVeESSR;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    TeSTRR_e_AutoStopStartOvrrd rtb_TmpSignalConversionAtVeS_do;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    TeVTXR_e_PowerPanelMd rtb_TmpSignalConversionAtVeVTXR;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    TeSTRR_e_EngStrtStopType rtb_TmpSignalConversionAtVeEN_l;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    TeSTRR_e_EngStrtStopType rtb_TmpSignalConversionAtVeSTDR;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    TeSTRR_e_EngStrtStopType rtb_TmpSignalConversionAtVeST_i;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    TeSTRR_e_SilentStrtChkMod rtb_TmpSignalConversionAtVeST_b;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTRGR;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    TeTRNR_e_TCMShftType rtb_TmpSignalConversionAtVeTRNR;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    sint16 y;

#endif

#if !Rte_SysCon_Variant_STAR_BEVVar

    boolean rtb_LeSTAR_b_CKSCndn_tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/STAR_MedTEB'
     */
    /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeHSWR_e_HCPHoodAjarSts'
     *  SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt'
     *  SignalConversion generated from: '<S1>/VeSTFR_b_StrtAllwd'
     *  SignalConversion generated from: '<S1>/VeSTFR_y_StrtDvcNA'
     *  SignalConversion generated from: '<S1>/VeSTRR_e_HybStrtrSt'
     */
#if !Rte_SysCon_Variant_STAR_BEVVar

    (void)Rte_Read_VeHSWR_e_HCPHoodAjarSts_Value(&tmpRead_5);

    /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
     *  Inport: '<Root>/VeHSWR_e_HCPHoodAjarSts'
     */
    rtb_DataTypeConversion_d = (TeHSWR_e_HoodStatus)tmpRead_5;

    /* SignalConversion generated from: '<S1>/VeSTFR_y_StrtDvcNA' incorporates:
     *  Inport: '<Root>/VeSTFR_y_StrtDvcNA'
     */
    (void)Rte_Read_VeSTFR_y_StrtDvcNA_Value(&rtb_TmpSignalConversionAtVeST_m);

    /* SignalConversion generated from: '<S1>/VeSTRR_e_HybStrtrSt' incorporates:
     *  Inport: '<Root>/VeSTRR_e_HybStrtrSt'
     */
    (void)Rte_Read_VeSTRR_e_HybStrtrSt_Value(&rtb_TmpSignalConversionAtVeST_g);

    /* SignalConversion generated from: '<S1>/VeSTFR_b_StrtAllwd' incorporates:
     *  Inport: '<Root>/VeSTFR_b_StrtAllwd'
     */
    (void)Rte_Read_VeSTFR_b_StrtAllwd_Value(&rtb_TmpSignalConversionAtVeST_a);

    /* SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&rtb_TmpSignalConversionAtVeES_d);

#endif

    /* End of DataTypeConversion: '<S1>/Data Type Conversion' */

    /* SignalConversion generated from: '<S1>/VeESSR_e_TCM_StartStopType' */
#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    /* SignalConversion generated from: '<S1>/VeESSR_e_TCM_StartStopType' incorporates:
     *  Inport: '<Root>/VeESSR_e_TCM_StartStopType'
     */
    (void)Rte_Read_VeESSR_e_TCM_StartStopType_Value
        (&rtb_TmpSignalConversionAtVeESSR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeESSR_e_TCM_StartStopType' */

    /* SignalConversion generated from: '<S1>/VeENGR_e_EngStrtStpOvrrd' incorporates:
     *  SignalConversion generated from: '<S1>/VeRTMR_b_ForceAutoStopStartEnbl'
     *  SignalConversion generated from: '<S1>/VeRTMR_e_ForceAutoStopStartSt'
     *  SignalConversion generated from: '<S1>/VeSTFR_e_StrtStpOvrrd'
     *  SignalConversion generated from: '<S1>/VeSTRR_b_EngOffAllowed'
     *  SignalConversion generated from: '<S1>/VeVTXR_e_PowerPanelMd'
     */
#if !Rte_SysCon_Variant_STAR_BEVVar

    /* SignalConversion generated from: '<S1>/VeENGR_e_EngStrtStpOvrrd' incorporates:
     *  Inport: '<Root>/VeENGR_e_EngStrtStpOvrrd'
     */
    (void)Rte_Read_VeENGR_e_EngStrtStpOvrrd_Value
        (&rtb_TmpSignalConversionAtVeEN_c);

    /* SignalConversion generated from: '<S1>/VeRTMR_e_ForceAutoStopStartSt' incorporates:
     *  Inport: '<Root>/VeRTMR_e_ForceAutoStopStartSt'
     */
    (void)Rte_Read_VeRTMR_e_ForceAutoStopStartSt_Value
        (&rtb_TmpSignalConversionAtVeRT_j);

    /* SignalConversion generated from: '<S1>/VeRTMR_b_ForceAutoStopStartEnbl' incorporates:
     *  Inport: '<Root>/VeRTMR_b_ForceAutoStopStartEnbl'
     */
    (void)Rte_Read_VeRTMR_b_ForceAutoStopStartEnbl_Value
        (&rtb_TmpSignalConversionAtVeRTMR);

    /* SignalConversion generated from: '<S1>/VeSTFR_e_StrtStpOvrrd' incorporates:
     *  Inport: '<Root>/VeSTFR_e_StrtStpOvrrd'
     */
    (void)Rte_Read_VeSTFR_e_StrtStpOvrrd_Value(&rtb_TmpSignalConversionAtVeS_do);

    /* SignalConversion generated from: '<S1>/VeSTRR_b_EngOffAllowed' incorporates:
     *  Inport: '<Root>/VeSTRR_b_EngOffAllowed'
     */
    (void)Rte_Read_VeSTRR_b_EngOffAllowed_Value(&rtb_TmpSignalConversionAtVeSTRR);

    /* SignalConversion generated from: '<S1>/VeVTXR_e_PowerPanelMd' incorporates:
     *  Inport: '<Root>/VeVTXR_e_PowerPanelMd'
     */
    (void)Rte_Read_VeVTXR_e_PowerPanelMd_Value(&rtb_TmpSignalConversionAtVeVTXR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeENGR_e_EngStrtStpOvrrd' */

    /* SignalConversion generated from: '<S1>/VeSTFR_g_FltReg1' */
#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    /* SignalConversion generated from: '<S1>/VeSTFR_g_FltReg1' incorporates:
     *  Inport: '<Root>/VeSTFR_g_FltReg1'
     */
    (void)Rte_Read_VeSTFR_g_FltReg1_Value(&rtb_TmpSignalConversionAtVeSTFR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSTFR_g_FltReg1' */

    /* SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  SignalConversion generated from: '<S1>/VeENGR_e_EngReqStrtType'
     *  SignalConversion generated from: '<S1>/VeSTDR_e_DrvrEngStrtType'
     *  SignalConversion generated from: '<S1>/VeSTRR_e_StrtChkMod'
     */
#if !Rte_SysCon_Variant_STAR_BEVVar

    /* SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTRGR);

    /* SignalConversion generated from: '<S1>/VeENGR_e_EngReqStrtType' incorporates:
     *  Inport: '<Root>/VeENGR_e_EngReqStrtType'
     */
    (void)Rte_Read_VeENGR_e_EngReqStrtType_Value
        (&rtb_TmpSignalConversionAtVeEN_l);

    /* SignalConversion generated from: '<S1>/VeSTRR_e_StrtChkMod' incorporates:
     *  Inport: '<Root>/VeSTRR_e_StrtChkMod'
     */
    (void)Rte_Read_VeSTRR_e_StrtChkMod_Value(&rtb_TmpSignalConversionAtVeST_b);

    /* SignalConversion generated from: '<S1>/VeSTDR_e_DrvrEngStrtType' incorporates:
     *  Inport: '<Root>/VeSTDR_e_DrvrEngStrtType'
     */
    (void)Rte_Read_VeSTDR_e_DrvrEngStrtType_Value
        (&rtb_TmpSignalConversionAtVeSTDR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' */

    /* SignalConversion generated from: '<S1>/VeTRNR_e_ShftType' incorporates:
     *  SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     *  SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp'
     *  SignalConversion generated from: '<S1>/VeENGR_T_EngCoolantTemp'
     *  SignalConversion generated from: '<S1>/VeSTCR_P_PBatSTMaxHH'
     *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
     */
#if !Rte_SysCon_Variant_STAR_BEVVar && Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    /* SignalConversion generated from: '<S1>/VeTRNR_e_ShftType' incorporates:
     *  Inport: '<Root>/VeTRNR_e_ShftType'
     */
    (void)Rte_Read_VeTRNR_e_ShftType_Value(&rtb_TmpSignalConversionAtVeTRNR);

    /* SignalConversion generated from: '<S1>/VeENGR_T_EngCoolantTemp' incorporates:
     *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
     */
    (void)Rte_Read_VeENGR_T_EngCoolantTemp_Value
        (&rtb_TmpSignalConversionAtVeENGR);

    /* SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp' incorporates:
     *  Inport: '<Root>/VeBPCR_T_BatModTmp'
     */
    (void)Rte_Read_VeBPCR_T_BatModTmp_Value(&rtb_TmpSignalConversionAtVeBPCR);

    /* SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&rtb_TmpSignalConversionAtVeBP_a);

    /* SignalConversion generated from: '<S1>/VeSTCR_P_PBatSTMaxHH' incorporates:
     *  Inport: '<Root>/VeSTCR_P_PBatSTMaxHH'
     */
    (void)Rte_Read_VeSTCR_P_PBatSTMaxHH_Value(&rtb_TmpSignalConversionAtVeSTCR);

    /* SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp' incorporates:
     *  Inport: '<Root>/VeTFTR_T_TransOilTemp'
     */
    (void)Rte_Read_VeTFTR_T_TransOilTemp_Value(&rtb_TmpSignalConversionAtVeTFTR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTRNR_e_ShftType' */

    /* SignalConversion generated from: '<S1>/VeSTFR_e_StrtType' incorporates:
     *  SignalConversion generated from: '<S1>/VeHSER_e_InhibitStartStop'
     */
#if !Rte_SysCon_Variant_STAR_BEVVar

    /* SignalConversion generated from: '<S1>/VeSTFR_e_StrtType' incorporates:
     *  Inport: '<Root>/VeSTFR_e_StrtType'
     */
    (void)Rte_Read_VeSTFR_e_StrtType_Value(&rtb_TmpSignalConversionAtVeST_i);

    /* SignalConversion generated from: '<S1>/VeHSER_e_InhibitStartStop' incorporates:
     *  Inport: '<Root>/VeHSER_e_InhibitStartStop'
     */
    (void)Rte_Read_VeHSER_e_InhibitStartStop_Value
        (&rtb_TmpSignalConversionAtVeHSER);

#endif

    /* End of SignalConversion generated from: '<S1>/VeSTFR_e_StrtType' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STAC_S1ArbCnfg'
     */
    /* Outputs for Atomic SubSystem: '<S4>/VarSS_Stage1Arb' */
#if Rte_SysCon_Variant_STAR_BEVVar

    /* Outputs for Atomic SubSystem: '<S24>/BEV' */
    /* DataStoreWrite: '<S25>/Data Store Write1' incorporates:
     *  Constant: '<S25>/Constant Value1'
     */
    VeSTAR_g_GenStrTypReg_DS = 0U;

    /* DataStoreWrite: '<S25>/Data Store Write2' incorporates:
     *  Constant: '<S25>/Constant Value2'
     */
    VeSTAR_g_GenStrtStpReg_DS = 0U;

    /* DataStoreWrite: '<S25>/Data Store Write' incorporates:
     *  Constant: '<S25>/Constant Value3'
     */
    VeSTAR_g_ExtSTEnbl_DS = 0U;

    /* VariantMerge generated from: '<S24>/CmdEngOnRaw' incorporates:
     *  Constant: '<S25>/FALSE Constant'
     */
    rtb_VariantMergeForOutportCmd_n = false;

    /* VariantMerge generated from: '<S24>/STGCOffAllwdRaw' incorporates:
     *  Constant: '<S25>/FALSE Constant9'
     */
    rtb_VariantMergeForOutportSTGCO = true;

    /* VariantMerge generated from: '<S24>/ECMOffAllwdRaw' incorporates:
     *  Constant: '<S25>/FALSE Constant10'
     */
    STAR_ac_B.VariantMergeForOutportECMOffAll = true;

    /* VariantMerge generated from: '<S24>/EssSTGCRsn' incorporates:
     *  Constant: '<S27>/Constant'
     */
    STAR_ac_B.VariantMergeForOutportEssSTGCRs = CeSTRR_e_None;

    /* VariantMerge generated from: '<S24>/RemStp' incorporates:
     *  Constant: '<S25>/FALSE Constant1'
     */
    rtb_VariantMergeForOutportRemSt = false;

    /* VariantMerge generated from: '<S24>/CltchMd' incorporates:
     *  Constant: '<S25>/FALSE Constant2'
     */
    rtb_VariantMergeForOutportClt_n = false;

    /* VariantMerge generated from: '<S24>/EMMd' incorporates:
     *  Constant: '<S25>/FALSE Constant3'
     */
    rtb_VariantMergeForOutportEMMd = false;

    /* VariantMerge generated from: '<S24>/CltchStrtCnfrm' incorporates:
     *  Constant: '<S25>/FALSE Constant4'
     */
    rtb_VariantMergeForOutportClt_o = false;

    /* VariantMerge generated from: '<S24>/ImplsStrtCnfrm' incorporates:
     *  Constant: '<S25>/FALSE Constant5'
     */
    rtb_VariantMergeForOutportImp_d = false;

    /* VariantMerge generated from: '<S24>/EMStrtCnfrm' incorporates:
     *  Constant: '<S25>/FALSE Constant6'
     */
    rtb_VariantMergeForOutportEMS_d = false;

    /* VariantMerge generated from: '<S24>/MaxEngOff' incorporates:
     *  Constant: '<S25>/FALSE Constant7'
     */
    STAR_ac_B.VariantMergeForOutportMaxEngOff = false;

    /* VariantMerge generated from: '<S24>/StrtChkMdUpd' incorporates:
     *  Constant: '<S25>/FALSE Constant8'
     */
    STAR_ac_B.VariantMergeForOutportStrtChkMd = false;

    /* End of Outputs for SubSystem: '<S24>/BEV' */
#else

    /* Outputs for Atomic SubSystem: '<S24>/Non_BEV' */
    /* Logic: '<S39>/Logical7' incorporates:
     *  Constant: '<S31>/Calib'
     *  Constant: '<S41>/Constant1'
     *  Constant: '<S44>/Constant'
     *  Constant: '<S86>/Constant'
     *  RelationalOperator: '<S39>/Comparison4'
     *  RelationalOperator: '<S86>/Compare'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Logical Operator'
     */
    rtb_Logical7_o = ((((uint32)rtb_TmpSignalConversionAtVeEN_c) ==
                       CeSTRR_e_OvrrdEngOn) && ((KeSTAR_g_OvrrdEnbl & 1U) > 0U));

    /* Switch: '<S40>/Switch10' */
    if (rtb_Logical7_o)
    {
        /* Switch: '<S40>/Switch10' incorporates:
         *  DataStoreRead: '<S35>/Data Store Read'
         *  S-Function (sfix_bitop): '<S71>/FixPt Bitwise Operator1'
         */
        rtb_Switch10_i = VeSTAR_g_GenStrtStpReg_DS | 1U;
    }
    else
    {
        /* Switch: '<S40>/Switch10' incorporates:
         *  DataStoreRead: '<S35>/Data Store Read'
         *  S-Function (sfix_bitop): '<S55>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S55>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S55>/FixPt Bitwise Operator5'
         */
        rtb_Switch10_i = ~((~VeSTAR_g_GenStrtStpReg_DS) | 1U);
    }

    /* End of Switch: '<S40>/Switch10' */

    /* Switch: '<S349>/Switch1' incorporates:
     *  Constant: '<S30>/Calib'
     *  Constant: '<S31>/Calib'
     *  Constant: '<S41>/Constant2'
     *  Constant: '<S44>/Constant'
     *  Constant: '<S87>/Constant'
     *  Logic: '<S39>/Logical6'
     *  RelationalOperator: '<S39>/Comparison2'
     *  RelationalOperator: '<S87>/Compare'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Logical Operator1'
     */
    rtb_Switch1_ak = ((((uint32)KeSTAR_e_OvrrdEng) == CeSTRR_e_OvrrdEngOn) &&
                      ((KeSTAR_g_OvrrdEnbl & 2U) > 0U));

    /* Switch: '<S40>/Switch11' */
    if (rtb_Switch1_ak)
    {
        /* Switch: '<S40>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S72>/FixPt Bitwise Operator1'
         */
        rtb_Switch10_i |= 2U;
    }
    else
    {
        /* Switch: '<S40>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S56>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S56>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S56>/FixPt Bitwise Operator5'
         */
        rtb_Switch10_i = ~((~rtb_Switch10_i) | 2U);
    }

    /* End of Switch: '<S40>/Switch11' */

    /* Switch: '<S379>/Switch1' incorporates:
     *  Constant: '<S31>/Calib'
     *  Constant: '<S41>/Constant3'
     *  Constant: '<S44>/Constant'
     *  Constant: '<S98>/Constant'
     *  Logic: '<S39>/Logical'
     *  RelationalOperator: '<S39>/Comparison5'
     *  RelationalOperator: '<S98>/Compare'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Logical Operator2'
     */
    rtb_Switch1_o = ((((KeSTAR_g_OvrrdEnbl & 4U) > 0U) &&
                      rtb_TmpSignalConversionAtVeRTMR) && (((uint32)
                       rtb_TmpSignalConversionAtVeRT_j) == CeSTRR_e_OvrrdEngOn));

    /* Switch: '<S40>/Switch13' */
    if (rtb_Switch1_o)
    {
        /* Switch: '<S40>/Switch13' incorporates:
         *  S-Function (sfix_bitop): '<S74>/FixPt Bitwise Operator1'
         */
        rtb_Switch10_i |= 4U;
    }
    else
    {
        /* Switch: '<S40>/Switch13' incorporates:
         *  S-Function (sfix_bitop): '<S57>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S57>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S57>/FixPt Bitwise Operator5'
         */
        rtb_Switch10_i = ~((~rtb_Switch10_i) | 4U);
    }

    /* End of Switch: '<S40>/Switch13' */

    /* Inport: '<Root>/VeSTCR_b_SoftChkEngOnRawDbncFnl' */
    (void)Rte_Read_VeSTCR_b_SoftChkEngOnRawDbncFnl_Value(&rtb_Logical3_a);

    /* Logic: '<S39>/Logical3' incorporates:
     *  Constant: '<S115>/Constant'
     *  Constant: '<S31>/Calib'
     *  Constant: '<S41>/Constant5'
     *  RelationalOperator: '<S115>/Compare'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Logical Operator4'
     */
    rtb_Logical3_a = (rtb_Logical3_a && ((KeSTAR_g_OvrrdEnbl & 16U) > 0U));

    /* Switch: '<S40>/Switch9' */
    if (rtb_Logical3_a)
    {
        /* Switch: '<S40>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S85>/FixPt Bitwise Operator1'
         */
        rtb_Switch10_i |= 8U;
    }
    else
    {
        /* Switch: '<S40>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S58>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S58>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S58>/FixPt Bitwise Operator5'
         */
        rtb_Switch10_i = ~((~rtb_Switch10_i) | 8U);
    }

    /* End of Switch: '<S40>/Switch9' */

    /* Inport: '<Root>/VeSTCR_b_HardChkEngOn' */
    (void)Rte_Read_VeSTCR_b_HardChkEngOn_Value(&rtb_Logical4_jt);

    /* RelationalOperator: '<S114>/Compare' incorporates:
     *  Constant: '<S114>/Constant'
     *  Constant: '<S31>/Calib'
     *  Constant: '<S41>/Constant6'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Logical Operator5'
     */
    rtb_VariantMergeForOutportSTGCO = ((KeSTAR_g_OvrrdEnbl & 32U) > 0U);

    /* Logic: '<S39>/Logical4' */
    rtb_Logical4_jt = (rtb_Logical4_jt && rtb_VariantMergeForOutportSTGCO);

    /* Switch: '<S40>/Switch3' */
    if (rtb_Logical4_jt)
    {
        /* Switch: '<S40>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S79>/FixPt Bitwise Operator1'
         */
        rtb_Switch10_i |= 16U;
    }
    else
    {
        /* Switch: '<S40>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S63>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S63>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S63>/FixPt Bitwise Operator5'
         */
        rtb_Switch10_i = ~((~rtb_Switch10_i) | 16U);
    }

    /* End of Switch: '<S40>/Switch3' */

    /* Inport: '<Root>/VeSTDR_b_DrvbltyEngOn' */
    (void)Rte_Read_VeSTDR_b_DrvbltyEngOn_Value(&rtb_Switch1_ml);

    /* Switch: '<S424>/Switch1' incorporates:
     *  Constant: '<S113>/Constant'
     *  Constant: '<S31>/Calib'
     *  Constant: '<S41>/Constant7'
     *  Logic: '<S39>/Logical5'
     *  RelationalOperator: '<S113>/Compare'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Logical Operator6'
     */
    rtb_Switch1_ml = (rtb_Switch1_ml && ((KeSTAR_g_OvrrdEnbl & 64U) > 0U));

    /* Switch: '<S40>/Switch4' */
    if (rtb_Switch1_ml)
    {
        /* Switch: '<S40>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S80>/FixPt Bitwise Operator1'
         */
        rtb_Switch10_i |= 32U;
    }
    else
    {
        /* Switch: '<S40>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S64>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S64>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S64>/FixPt Bitwise Operator5'
         */
        rtb_Switch10_i = ~((~rtb_Switch10_i) | 32U);
    }

    /* End of Switch: '<S40>/Switch4' */

    /* Switch: '<S364>/Switch1' incorporates:
     *  Constant: '<S109>/Constant'
     *  Constant: '<S31>/Calib'
     *  Constant: '<S41>/Constant4'
     *  Constant: '<S44>/Constant'
     *  Logic: '<S39>/Logical2'
     *  RelationalOperator: '<S109>/Compare'
     *  RelationalOperator: '<S39>/Comparison7'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Logical Operator3'
     */
    rtb_Switch1_gq = ((((uint32)rtb_TmpSignalConversionAtVeS_do) ==
                       CeSTRR_e_OvrrdEngOn) && ((KeSTAR_g_OvrrdEnbl & 8U) > 0U));

    /* Switch: '<S40>/Switch1' */
    if (rtb_Switch1_gq)
    {
        /* Switch: '<S40>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S70>/FixPt Bitwise Operator1'
         */
        rtb_Switch10_i |= 64U;
    }
    else
    {
        /* Switch: '<S40>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S54>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S54>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S54>/FixPt Bitwise Operator5'
         */
        rtb_Switch10_i = ~((~rtb_Switch10_i) | 64U);
    }

    /* End of Switch: '<S40>/Switch1' */

    /* Inport: '<Root>/VeSTCR_b_OHSREngDsrdFnl' */
    (void)Rte_Read_VeSTCR_b_OHSREngDsrdFnl_Value(&rtb_Logical13_k);

    /* Inport: '<Root>/VeSTCR_b_EngDsrdOptToECMFnl' */
    (void)Rte_Read_VeSTCR_b_EngDsrdOptToECMFnl_Value(&rtb_Logical10_iq);

    /* Logic: '<S39>/Logical13' incorporates:
     *  Constant: '<S116>/Constant'
     *  Constant: '<S31>/Calib'
     *  Constant: '<S41>/Constant9'
     *  RelationalOperator: '<S116>/Compare'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Logical Operator8'
     */
    rtb_Logical13_k = (rtb_Logical13_k && ((KeSTAR_g_OvrrdEnbl & 256U) > 0U));

    /* Logic: '<S39>/Logical10' incorporates:
     *  Constant: '<S112>/Constant'
     *  Constant: '<S31>/Calib'
     *  Constant: '<S41>/Constant8'
     *  RelationalOperator: '<S112>/Compare'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Logical Operator7'
     */
    rtb_Logical10_iq = (rtb_Logical10_iq && ((KeSTAR_g_OvrrdEnbl & 128U) > 0U));

    /* Switch: '<S40>/Switch2' incorporates:
     *  Logic: '<S48>/Logical Operator7'
     *  Logic: '<S48>/Logical Operator8'
     */
    if ((rtb_TmpSignalConversionAtVeSTRR && rtb_Logical13_k) || rtb_Logical10_iq)
    {
        /* Switch: '<S40>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S78>/FixPt Bitwise Operator1'
         */
        rtb_Switch10_i |= 128U;
    }
    else
    {
        /* Switch: '<S40>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S62>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S62>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S62>/FixPt Bitwise Operator5'
         */
        rtb_Switch10_i = ~((~rtb_Switch10_i) | 128U);
    }

    /* End of Switch: '<S40>/Switch2' */

    /* Inport: '<Root>/VeSTRR_b_StordEngOffTmFA' */
    (void)Rte_Read_VeSTRR_b_StordEngOffTmFA_Value(&rtb_Comparison13_c5);

    /* Inport: '<Root>/VeSTRR_t_StordEngOffTm' */
    (void)Rte_Read_VeSTRR_t_StordEngOffTm_Value(&rtb_Switch15);

    /* Inport: '<Root>/VePLTR_b_RTC_CurrentTimeFA' */
    (void)Rte_Read_VePLTR_b_RTC_CurrentTimeFA_Value(&rtb_RelatonalOperator1);

    /* Inport: '<Root>/VePLTR_t_RTC_CurrentTime' */
    (void)Rte_Read_VePLTR_t_RTC_CurrentTime_Value(&rtb_Switch2_k);

    /* Sum: '<S47>/Sum1' */
    VeSTAR_t_EngOff = rtb_Switch2_k - rtb_Switch15;

    /* Switch: '<S47>/Switch' incorporates:
     *  Constant: '<S129>/Calib'
     *  Constant: '<S47>/FALSE Constant'
     *  Logic: '<S47>/Logical1'
     *  RelationalOperator: '<S47>/Comparison'
     */
    if (rtb_Comparison13_c5 || rtb_RelatonalOperator1)
    {
        rtb_Comparison13_c5 = false;
    }
    else
    {
        rtb_Comparison13_c5 = (VeSTAR_t_EngOff > KeSTAR_t_MaxEngOffTime);
    }

    /* End of Switch: '<S47>/Switch' */

    /* VariantMerge generated from: '<S24>/MaxEngOff' incorporates:
     *  Constant: '<S31>/Calib'
     *  Constant: '<S41>/Constant11'
     *  Constant: '<S88>/Constant'
     *  Logic: '<S47>/Logical2'
     *  RelationalOperator: '<S88>/Compare'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Logical Operator10'
     */
    STAR_ac_B.VariantMergeForOutportMaxEngOff = (((KeSTAR_g_OvrrdEnbl & 1024U) >
        0U) && rtb_Comparison13_c5);

    /* Switch: '<S47>/Switch1' incorporates:
     *  Constant: '<S127>/Constant'
     *  RelationalOperator: '<S47>/Comparison1'
     */
    if (CeSTRR_e_KeyOffSt == ((uint32)rtb_TmpSignalConversionAtVeST_g))
    {
        /* Switch: '<S47>/Switch1' incorporates:
         *  Constant: '<S128>/Calib'
         *  Logic: '<S47>/Logical Operator1'
         *  Logic: '<S47>/Logical21'
         *  Logic: '<S47>/Logical3'
         */
        rtb_VariantMergeForOutportCmd_n = ((!KeSTAR_b_FtrElecStrtEnab) ||
            (STAR_ac_B.VariantMergeForOutportMaxEngOff));
    }
    else
    {
        /* Switch: '<S47>/Switch1' incorporates:
         *  Constant: '<S47>/FALSE Constant1'
         */
        rtb_VariantMergeForOutportCmd_n = false;
    }

    /* End of Switch: '<S47>/Switch1' */

    /* Switch: '<S40>/Switch15' */
    if (rtb_VariantMergeForOutportCmd_n)
    {
        /* Switch: '<S40>/Switch15' incorporates:
         *  S-Function (sfix_bitop): '<S76>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 = rtb_Switch10_i | 256U;
    }
    else
    {
        /* Switch: '<S40>/Switch15' incorporates:
         *  S-Function (sfix_bitop): '<S60>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S60>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S60>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~rtb_Switch10_i) | 256U);
    }

    /* End of Switch: '<S40>/Switch15' */

    /* RelationalOperator: '<S196>/Relatonal Operator1' incorporates:
     *  Constant: '<S31>/Calib'
     *  Constant: '<S41>/Constant12'
     *  Constant: '<S45>/Constant'
     *  Constant: '<S89>/Constant'
     *  Logic: '<S38>/Logical9'
     *  RelationalOperator: '<S38>/Comparison1'
     *  RelationalOperator: '<S89>/Compare'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Logical Operator11'
     */
    rtb_RelatonalOperator1 = ((((uint32)rtb_TmpSignalConversionAtVeEN_c) ==
        CeSTRR_e_OvrrdEngOff) && ((KeSTAR_g_OvrrdEnbl & 2048U) > 0U));

    /* Switch: '<S40>/Switch5' */
    if (rtb_RelatonalOperator1)
    {
        /* Switch: '<S40>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S81>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 |= 4096U;
    }
    else
    {
        /* Switch: '<S40>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S65>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S65>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S65>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~rtb_Switch15) | 4096U);
    }

    /* End of Switch: '<S40>/Switch5' */

    /* RelationalOperator: '<S180>/Comparison13' incorporates:
     *  Constant: '<S31>/Calib'
     *  Constant: '<S41>/Constant15'
     *  Constant: '<S45>/Constant'
     *  Constant: '<S91>/Constant'
     *  Logic: '<S38>/Logical15'
     *  RelationalOperator: '<S38>/Comparison8'
     *  RelationalOperator: '<S91>/Compare'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Logical Operator14'
     */
    rtb_Comparison13_c5 = (((KeSTAR_g_OvrrdEnbl & 16384U) > 0U) && (((uint32)
        rtb_TmpSignalConversionAtVeS_do) == CeSTRR_e_OvrrdEngOff));

    /* Switch: '<S40>/Switch6' */
    if (rtb_Comparison13_c5)
    {
        /* Switch: '<S40>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S82>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 |= 8192U;
    }
    else
    {
        /* Switch: '<S40>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S66>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S66>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S66>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~rtb_Switch15) | 8192U);
    }

    /* End of Switch: '<S40>/Switch6' */

    /* Logic: '<S38>/Logical Operator3' incorporates:
     *  Logic: '<S42>/Logical4'
     */
    rtb_LeSTAR_b_CKSCndn_tmp = !rtb_Logical7_o;

    /* Logic: '<S179>/Logical4' incorporates:
     *  Logic: '<S38>/Logical Operator2'
     *  Logic: '<S38>/Logical Operator3'
     *  Logic: '<S38>/Logical20'
     */
    rtb_LeSTAR_b_CKSCndn = ((!rtb_Switch1_gq) && rtb_LeSTAR_b_CKSCndn_tmp);

    /* Logic: '<S181>/Logical5' incorporates:
     *  Constant: '<S31>/Calib'
     *  Constant: '<S41>/Constant14'
     *  Constant: '<S45>/Constant'
     *  Constant: '<S92>/Constant'
     *  Logic: '<S38>/Logical1'
     *  Logic: '<S38>/Logical16'
     *  RelationalOperator: '<S38>/Comparison6'
     *  RelationalOperator: '<S92>/Compare'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Logical Operator13'
     */
    rtb_TmpSignalConversionAtVeRTMR = (rtb_LeSTAR_b_CKSCndn &&
        ((((KeSTAR_g_OvrrdEnbl & 8192U) > 0U) && rtb_TmpSignalConversionAtVeRTMR)
         && (((uint32)rtb_TmpSignalConversionAtVeRT_j) == CeSTRR_e_OvrrdEngOff)));

    /* Switch: '<S40>/Switch12' */
    if (rtb_TmpSignalConversionAtVeRTMR)
    {
        /* Switch: '<S40>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S73>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 |= 16384U;
    }
    else
    {
        /* Switch: '<S40>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S69>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S69>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S69>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~rtb_Switch15) | 16384U);
    }

    /* End of Switch: '<S40>/Switch12' */

    /* Logic: '<S179>/Logical4' incorporates:
     *  Constant: '<S30>/Calib'
     *  Constant: '<S31>/Calib'
     *  Constant: '<S41>/Constant13'
     *  Constant: '<S45>/Constant'
     *  Constant: '<S93>/Constant'
     *  Logic: '<S38>/Logical19'
     *  Logic: '<S38>/Logical8'
     *  RelationalOperator: '<S38>/Comparison3'
     *  RelationalOperator: '<S39>/Comparison2'
     *  RelationalOperator: '<S93>/Compare'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Logical Operator12'
     */
    rtb_LeSTAR_b_CKSCndn = (rtb_LeSTAR_b_CKSCndn && ((((uint32)KeSTAR_e_OvrrdEng)
        == CeSTRR_e_OvrrdEngOff) && ((KeSTAR_g_OvrrdEnbl & 4096U) > 0U)));

    /* Switch: '<S40>/Switch14' */
    if (rtb_LeSTAR_b_CKSCndn)
    {
        /* Switch: '<S40>/Switch14' incorporates:
         *  S-Function (sfix_bitop): '<S75>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 |= 32768U;
    }
    else
    {
        /* Switch: '<S40>/Switch14' incorporates:
         *  S-Function (sfix_bitop): '<S59>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S59>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S59>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~rtb_Switch15) | 32768U);
    }

    /* End of Switch: '<S40>/Switch14' */

    /* Inport: '<Root>/VeVTXR_b_PowPnlRemStpFnl' */
    (void)Rte_Read_VeVTXR_b_PowPnlRemStpFnl_Value(&rtb_LeSTAR_b_HVLoTmpCndn);

    /* Inport: '<Root>/VePLTR_b_FuelLevelLowClster' */
    (void)Rte_Read_VePLTR_b_FuelLevelLowClster_Value(&rtb_Comparison14_kh);

    /* Inport: '<Root>/VeCSVR_v_VehSpdSigned' */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value(&rtb_Switch1_m);

    /* Logic: '<S181>/Logical10' incorporates:
     *  Constant: '<S31>/Calib'
     *  Constant: '<S41>/Constant17'
     *  Constant: '<S49>/Constant'
     *  Constant: '<S94>/Constant'
     *  Logic: '<S38>/Logical11'
     *  Logic: '<S38>/Logical6'
     *  RelationalOperator: '<S38>/Comparison4'
     *  RelationalOperator: '<S94>/Compare'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Logical Operator16'
     */
    rtb_LeSTAR_b_HVLoTmpCndn = (((CeVTXR_e_ElectricMd == ((uint32)
        rtb_TmpSignalConversionAtVeVTXR)) || rtb_LeSTAR_b_HVLoTmpCndn) &&
        ((KeSTAR_g_OvrrdEnbl & 65536U) > 0U));

    /* RelationalOperator: '<S180>/Comparison14' incorporates:
     *  Constant: '<S31>/Calib'
     *  Constant: '<S41>/Constant25'
     *  Constant: '<S50>/Constant'
     *  Constant: '<S51>/Constant'
     *  Constant: '<S95>/Constant'
     *  Logic: '<S38>/Logical10'
     *  Logic: '<S38>/Logical7'
     *  RelationalOperator: '<S38>/Comparison5'
     *  RelationalOperator: '<S38>/Comparison7'
     *  RelationalOperator: '<S95>/Compare'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Logical Operator17'
     */
    rtb_Comparison14_kh = ((((CeVTXR_e_GeneratorMd == ((uint32)
        rtb_TmpSignalConversionAtVeVTXR)) || (((uint32)
        rtb_TmpSignalConversionAtVeVTXR) == CeVTXR_e_HybridMd)) &&
                            ((KeSTAR_g_OvrrdEnbl & 131072U) > 0U)) &&
                           rtb_Comparison14_kh);

    /* Logic: '<S38>/Logical Operator1' */
    VeSTAR_b_RemStopRaw = (((((rtb_RelatonalOperator1 || rtb_LeSTAR_b_CKSCndn) ||
        rtb_TmpSignalConversionAtVeRTMR) || rtb_Comparison13_c5) ||
                            rtb_LeSTAR_b_HVLoTmpCndn) || rtb_Comparison14_kh);

    /* Logic: '<S181>/Logical5' incorporates:
     *  Constant: '<S126>/Constant'
     *  DataTypeConversion: '<S1>/Data Type Conversion'
     *  RelationalOperator: '<S46>/Comparison2'
     */
    rtb_TmpSignalConversionAtVeRTMR = (((uint32)rtb_DataTypeConversion_d) !=
        CeHSWR_e_HoodClosed);

    /* Outputs for Atomic SubSystem: '<S38>/Signal Latch On With Reset' */
    /* Logic: '<S53>/OR1' incorporates:
     *  Abs: '<S38>/Abs'
     *  Constant: '<S31>/Calib'
     *  Constant: '<S33>/Calib'
     *  Constant: '<S41>/Constant16'
     *  Constant: '<S52>/Constant'
     *  Constant: '<S90>/Constant'
     *  Logic: '<S38>/Logical3'
     *  Logic: '<S38>/Logical4'
     *  Logic: '<S38>/Logical5'
     *  Logic: '<S53>/NOT'
     *  Logic: '<S53>/OR'
     *  RelationalOperator: '<S38>/Comparison2'
     *  RelationalOperator: '<S38>/Comparison9'
     *  RelationalOperator: '<S90>/Compare'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Logical Operator15'
     *  UnitDelay: '<S53>/Unit Delay'
     */
    rtb_VariantMergeForOutportRemSt = (((((KeSTAR_g_OvrrdEnbl & 32768U) > 0U) &&
        (VeSTAR_b_RemStopRaw)) && rtb_TmpSignalConversionAtVeRTMR) ||
        (((rtb_TmpSignalConversionAtVeRTMR && (fabsf(rtb_Switch1_m) <
        KeSTAR_v_HoodRemStpSpdThrsh)) && (CeSTRR_e_KeyOffSt != ((uint32)
        rtb_TmpSignalConversionAtVeST_g))) && (STAR_ac_DW.UnitDelay_DSTATE_h)));

    /* Update for UnitDelay: '<S53>/Unit Delay' */
    STAR_ac_DW.UnitDelay_DSTATE_h = rtb_VariantMergeForOutportRemSt;

    /* End of Outputs for SubSystem: '<S38>/Signal Latch On With Reset' */

    /* Switch: '<S40>/Switch7' */
    if (rtb_VariantMergeForOutportRemSt)
    {
        /* Switch: '<S40>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S83>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 |= 65536U;
    }
    else
    {
        /* Switch: '<S40>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S67>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S67>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S67>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~rtb_Switch15) | 65536U);
    }

    /* End of Switch: '<S40>/Switch7' */

    /* Switch: '<S40>/Switch8' */
    if (rtb_LeSTAR_b_HVLoTmpCndn)
    {
        /* Switch: '<S40>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S84>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 |= 131072U;
    }
    else
    {
        /* Switch: '<S40>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S68>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S68>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S68>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~rtb_Switch15) | 131072U);
    }

    /* End of Switch: '<S40>/Switch8' */

    /* Switch: '<S40>/Switch16' incorporates:
     *  DataStoreWrite: '<S35>/Data Store Write2'
     *  S-Function (sfix_bitop): '<S61>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S61>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S61>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S77>/FixPt Bitwise Operator1'
     */
    if (rtb_Comparison14_kh)
    {
        VeSTAR_g_GenStrtStpReg_DS = rtb_Switch15 | 16384U;
    }
    else
    {
        VeSTAR_g_GenStrtStpReg_DS = ~((~rtb_Switch15) | 16384U);
    }

    /* End of Switch: '<S40>/Switch16' */

    /* Inport: '<Root>/VeSTCR_b_HardChkEngOnForOHSR' */
    (void)Rte_Read_VeSTCR_b_HardChkEngOnForOHSR_Value(&tmpRead_a);

    /* Inport: '<Root>/VeESSR_b_EngOffAllwdECM' */
    (void)Rte_Read_VeESSR_b_EngOffAllwdECM_Value(&tmpRead_3);

    /* VariantMerge generated from: '<S24>/RemStp' incorporates:
     *  Logic: '<S38>/Logical2'
     */
    rtb_VariantMergeForOutportRemSt = (rtb_VariantMergeForOutportRemSt ||
        (VeSTAR_b_RemStopRaw));

    /* Outputs for Atomic SubSystem: '<S118>/Stop Watch Reset Enabled' */
    /* Switch: '<S125>/Switch2' incorporates:
     *  Logic: '<S118>/Logical Operator12'
     *  Logic: '<S118>/Logical Operator13'
     *  Switch: '<S125>/Switch1'
     */
    if ((!rtb_TmpSignalConversionAtVeSTRR) || (!tmpRead_3))
    {
        /* Switch: '<S125>/Switch1' incorporates:
         *  Constant: '<S125>/Constant Value2'
         */
        rtb_Switch1_m = 0.0F;
    }
    else
    {
        /* Switch: '<S125>/Switch1' incorporates:
         *  Constant: '<S29>/Calib'
         *  Sum: '<S125>/Subtraction'
         *  Switch: '<S125>/Switch2'
         *  UnitDelay: '<S125>/Unit Delay'
         */
        rtb_Switch1_m = HeSTAR_t_MedTEB_dT + STAR_ac_DW.UnitDelay_DSTATE_m;
    }

    /* End of Switch: '<S125>/Switch2' */

    /* Update for UnitDelay: '<S125>/Unit Delay' */
    STAR_ac_DW.UnitDelay_DSTATE_m = rtb_Switch1_m;

    /* End of Outputs for SubSystem: '<S118>/Stop Watch Reset Enabled' */

    /* Logic: '<S35>/Logical Operator' */
    rtb_VariantMergeForOutportCmd_n = (((((rtb_Switch1_o || rtb_Switch1_gq) ||
        rtb_Logical3_a) || rtb_Switch1_ml) || rtb_Switch1_ak) ||
        rtb_VariantMergeForOutportCmd_n);

    /* Logic: '<S42>/Logical12' incorporates:
     *  Logic: '<S39>/Logical25'
     */
    rtb_VariantMergeForOutportSTGCO = ((tmpRead_a &&
        rtb_VariantMergeForOutportSTGCO) || rtb_VariantMergeForOutportCmd_n);

    /* Switch: '<S124>/Switch1' incorporates:
     *  Inport: '<Root>/VeENGR_b_AllwEVECM'
     */
    if (rtb_VariantMergeForOutportRemSt)
    {
        /* VariantMerge generated from: '<S24>/EssSTGCRsn' incorporates:
         *  Constant: '<S122>/Constant'
         */
        STAR_ac_B.VariantMergeForOutportEssSTGCRs = CeSTRR_e_RemStp;
    }
    else
    {
        (void)Rte_Read_VeENGR_b_AllwEVECM_Value(&rtb_LogicalOperator1_d);

        /* Logic: '<S42>/Logical Operator1' incorporates:
         *  Inport: '<Root>/VeENGR_b_AllwEVECM'
         */
        rtb_LogicalOperator1_d = !rtb_LogicalOperator1_d;

        /* Switch: '<S124>/Switch2' incorporates:
         *  Logic: '<S42>/Logical2'
         *  Switch: '<S124>/Switch3'
         *  Switch: '<S124>/Switch4'
         */
        if (rtb_LogicalOperator1_d && rtb_VariantMergeForOutportSTGCO)
        {
            /* VariantMerge generated from: '<S24>/EssSTGCRsn' incorporates:
             *  Constant: '<S121>/Constant'
             *  Switch: '<S124>/Switch2'
             */
            STAR_ac_B.VariantMergeForOutportEssSTGCRs = CeSTRR_e_ECMHCP;
        }
        else if (rtb_LogicalOperator1_d)
        {
            /* Switch: '<S124>/Switch3' incorporates:
             *  Constant: '<S123>/Constant'
             *  VariantMerge generated from: '<S24>/EssSTGCRsn'
             */
            STAR_ac_B.VariantMergeForOutportEssSTGCRs = CeSTRR_e_ECM;
        }
        else if (rtb_VariantMergeForOutportSTGCO)
        {
            /* Switch: '<S124>/Switch4' incorporates:
             *  Constant: '<S120>/Constant'
             *  Switch: '<S124>/Switch3'
             *  VariantMerge generated from: '<S24>/EssSTGCRsn'
             */
            STAR_ac_B.VariantMergeForOutportEssSTGCRs = CeSTRR_e_HCP;
        }
        else
        {
            /* VariantMerge generated from: '<S24>/EssSTGCRsn' incorporates:
             *  Constant: '<S119>/Constant'
             *  Switch: '<S124>/Switch3'
             *  Switch: '<S124>/Switch4'
             */
            STAR_ac_B.VariantMergeForOutportEssSTGCRs = CeSTRR_e_None;
        }

        /* End of Switch: '<S124>/Switch2' */
    }

    /* End of Switch: '<S124>/Switch1' */

    /* VariantMerge generated from: '<S24>/ECMOffAllwdRaw' incorporates:
     *  Constant: '<S117>/Constant'
     *  Constant: '<S31>/Calib'
     *  Constant: '<S32>/Calib'
     *  Constant: '<S41>/Constant10'
     *  Logic: '<S118>/Logical Operator1'
     *  Logic: '<S118>/Logical Operator9'
     *  Logic: '<S42>/Logical Operator4'
     *  Logic: '<S42>/Logical11'
     *  Logic: '<S42>/Logical17'
     *  RelationalOperator: '<S117>/Compare'
     *  RelationalOperator: '<S118>/Comparison1'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Logical Operator9'
     */
    STAR_ac_B.VariantMergeForOutportECMOffAll = (rtb_VariantMergeForOutportRemSt
        || ((((!rtb_VariantMergeForOutportCmd_n) && (!rtb_Logical4_jt)) &&
             (!rtb_Logical10_iq)) && ((((rtb_Switch1_m <
        KeSTAR_t_OptmizerReqTmMx) || ((KeSTAR_g_OvrrdEnbl & 512U) <= 0U)) ||
        (!rtb_Logical13_k)) || rtb_Logical10_iq)));

    /* VariantMerge generated from: '<S24>/STGCOffAllwdRaw' incorporates:
     *  Logic: '<S42>/Logical Operator5'
     *  Logic: '<S42>/Logical18'
     *  Logic: '<S42>/Logical4'
     */
    rtb_VariantMergeForOutportSTGCO = (((!rtb_VariantMergeForOutportSTGCO) &&
        rtb_LeSTAR_b_CKSCndn_tmp) || rtb_VariantMergeForOutportRemSt);

    /* Switch: '<S43>/Switch1' */
    if (rtb_VariantMergeForOutportRemSt)
    {
        /* VariantMerge generated from: '<S24>/CmdEngOnRaw' incorporates:
         *  Constant: '<S43>/FALSE Constant'
         */
        rtb_VariantMergeForOutportCmd_n = false;
    }
    else
    {
        /* VariantMerge generated from: '<S24>/CmdEngOnRaw' incorporates:
         *  Logic: '<S35>/Logical14'
         */
        rtb_VariantMergeForOutportCmd_n = ((((rtb_VariantMergeForOutportCmd_n ||
            rtb_Logical7_o) || rtb_Logical10_iq) || rtb_Logical13_k) ||
            rtb_Logical4_jt);
    }

    /* End of Switch: '<S43>/Switch1' */

    /* VariantMerge generated from: '<S24>/StrtChkMdUpd' incorporates:
     *  Constant: '<S128>/Calib'
     *  Gain: '<S130>/Gain'
     */
    STAR_ac_B.VariantMergeForOutportStrtChkMd = KeSTAR_b_FtrElecStrtEnab;

    /* RelationalOperator: '<S180>/Comparison14' incorporates:
     *  Constant: '<S131>/Constant27'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S155>/Constant'
     *  RelationalOperator: '<S155>/Compare'
     *  S-Function (sfix_bitop): '<S131>/Bitwise Logical Operator3'
     */
    rtb_Comparison14_kh = ((((sint32)KeSTAR_d_EnblStrtTyp) & 8) > 0);

    /* Switch: '<S251>/Switch2' */
    if (rtb_Comparison14_kh)
    {
        /* Switch: '<S251>/Switch2' incorporates:
         *  Constant: '<S36>/ExtSTEnbler'
         *  DataTypeConversion: '<S251>/Data Type Conversion1'
         *  Selector: '<S251>/Selector'
         *  SignalConversion generated from: '<S1>/VeENGR_e_EngReqStrtType'
         */
        rtb_Switch15 = CaSTAR_k_ExtSTEnbler[(rtb_TmpSignalConversionAtVeEN_l)];
    }
    else
    {
        /* Switch: '<S251>/Switch2' incorporates:
         *  Constant: '<S251>/Constant Value'
         */
        rtb_Switch15 = 0U;
    }

    /* End of Switch: '<S251>/Switch2' */

    /* Inport: '<Root>/VeRTMR_b_InPlantMode' */
    (void)Rte_Read_VeRTMR_b_InPlantMode_Value(&rtb_Compare_fb);

    /* Logic: '<S181>/Logical10' incorporates:
     *  Constant: '<S306>/Constant'
     *  RelationalOperator: '<S250>/Comparison9'
     */
    rtb_LeSTAR_b_HVLoTmpCndn = (((uint32)rtb_TmpSignalConversionAtVeST_g) ==
        CeSTRR_e_KeyOffSt);

    /* Logic: '<S181>/Logical5' incorporates:
     *  Constant: '<S131>/Constant20'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S149>/Constant'
     *  Logic: '<S250>/Logical18'
     *  RelationalOperator: '<S149>/Compare'
     *  S-Function (sfix_bitop): '<S131>/Bitwise Logical Operator11'
     */
    rtb_TmpSignalConversionAtVeRTMR = ((rtb_LeSTAR_b_HVLoTmpCndn && ((((sint32)
        KeSTAR_d_EnblStrtTyp) & 2048) > 0)) && rtb_Compare_fb);

    /* Switch: '<S252>/Switch2' */
    if (rtb_TmpSignalConversionAtVeRTMR)
    {
        /* Switch: '<S252>/Switch2' incorporates:
         *  Constant: '<S138>/Calib'
         *  Constant: '<S36>/ExtSTEnbler'
         *  DataTypeConversion: '<S252>/Data Type Conversion1'
         *  Selector: '<S252>/Selector'
         */
        rtb_Switch2_k = CaSTAR_k_ExtSTEnbler[(KeSTAR_e_InPlntMdStrtTyp)];
    }
    else
    {
        /* Switch: '<S252>/Switch2' incorporates:
         *  Constant: '<S252>/Constant Value'
         */
        rtb_Switch2_k = 0U;
    }

    /* End of Switch: '<S252>/Switch2' */

    /* Switch: '<S379>/Switch1' incorporates:
     *  Constant: '<S131>/Constant30'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S157>/Constant'
     *  Logic: '<S256>/Logical12'
     *  RelationalOperator: '<S157>/Compare'
     *  S-Function (sfix_bitop): '<S131>/Bitwise Logical Operator6'
     */
    rtb_Switch1_o = (rtb_Switch1_o && ((((sint32)KeSTAR_d_EnblStrtTyp) & 64) > 0));

    /* Switch: '<S379>/Switch2' */
    if (rtb_Switch1_o)
    {
        /* Switch: '<S379>/Switch2' incorporates:
         *  Constant: '<S141>/Calib'
         *  Constant: '<S36>/ExtSTEnbler'
         *  DataTypeConversion: '<S379>/Data Type Conversion1'
         *  Selector: '<S379>/Selector'
         */
        rtb_Switch10_i = CaSTAR_k_ExtSTEnbler[(KeSTAR_e_ServStrtTyp)];
    }
    else
    {
        /* Switch: '<S379>/Switch2' incorporates:
         *  Constant: '<S379>/Constant Value'
         */
        rtb_Switch10_i = 0U;
    }

    /* End of Switch: '<S379>/Switch2' */

    /* Switch: '<S349>/Switch1' incorporates:
     *  Constant: '<S131>/Constant31'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S156>/Constant'
     *  Logic: '<S254>/Logical11'
     *  RelationalOperator: '<S156>/Compare'
     *  S-Function (sfix_bitop): '<S131>/Bitwise Logical Operator7'
     */
    rtb_Switch1_ak = (rtb_Switch1_ak && ((((sint32)KeSTAR_d_EnblStrtTyp) & 128) >
                       0));

    /* Switch: '<S349>/Switch2' */
    if (rtb_Switch1_ak)
    {
        /* Switch: '<S349>/Switch2' incorporates:
         *  Constant: '<S140>/Calib'
         *  Constant: '<S36>/ExtSTEnbler'
         *  DataTypeConversion: '<S349>/Data Type Conversion1'
         *  Selector: '<S349>/Selector'
         */
        rtb_Switch2_il = CaSTAR_k_ExtSTEnbler[(KeSTAR_e_OvrrdStrtTyp)];
    }
    else
    {
        /* Switch: '<S349>/Switch2' incorporates:
         *  Constant: '<S349>/Constant Value'
         */
        rtb_Switch2_il = 0U;
    }

    /* End of Switch: '<S349>/Switch2' */

    /* Logic: '<S179>/Logical4' incorporates:
     *  Constant: '<S131>/Constant32'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S160>/Constant'
     *  Logic: '<S257>/Logical13'
     *  Logic: '<S35>/Logical Operator6'
     *  RelationalOperator: '<S160>/Compare'
     *  S-Function (sfix_bitop): '<S131>/Bitwise Logical Operator8'
     */
    rtb_LeSTAR_b_CKSCndn = (((rtb_Logical13_k || rtb_Logical3_a) ||
        rtb_Logical10_iq) && ((((sint32)KeSTAR_d_EnblStrtTyp) & 256) > 0));

    /* Switch: '<S394>/Switch2' */
    if (rtb_LeSTAR_b_CKSCndn)
    {
        /* Switch: '<S394>/Switch2' incorporates:
         *  Constant: '<S142>/Calib'
         *  Constant: '<S36>/ExtSTEnbler'
         *  DataTypeConversion: '<S394>/Data Type Conversion1'
         *  Selector: '<S394>/Selector'
         */
        rtb_Switch2_dw = CaSTAR_k_ExtSTEnbler[(KeSTAR_e_SoftChkStrtTyp)];
    }
    else
    {
        /* Switch: '<S394>/Switch2' incorporates:
         *  Constant: '<S394>/Constant Value'
         */
        rtb_Switch2_dw = 0U;
    }

    /* End of Switch: '<S394>/Switch2' */

    /* RelationalOperator: '<S180>/Comparison13' incorporates:
     *  Constant: '<S131>/Constant18'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S161>/Constant'
     *  Logic: '<S258>/Logical14'
     *  RelationalOperator: '<S161>/Compare'
     *  S-Function (sfix_bitop): '<S131>/Bitwise Logical Operator9'
     */
    rtb_Comparison13_c5 = (rtb_Logical4_jt && ((((sint32)KeSTAR_d_EnblStrtTyp) &
        512) > 0));

    /* Switch: '<S409>/Switch2' */
    if (rtb_Comparison13_c5)
    {
        /* Switch: '<S409>/Switch2' incorporates:
         *  Constant: '<S137>/Calib'
         *  Constant: '<S36>/ExtSTEnbler'
         *  DataTypeConversion: '<S409>/Data Type Conversion1'
         *  Selector: '<S409>/Selector'
         */
        rtb_Switch2_bj = CaSTAR_k_ExtSTEnbler[(KeSTAR_e_HardChkStrtTyp)];
    }
    else
    {
        /* Switch: '<S409>/Switch2' incorporates:
         *  Constant: '<S409>/Constant Value'
         */
        rtb_Switch2_bj = 0U;
    }

    /* End of Switch: '<S409>/Switch2' */

    /* Switch: '<S424>/Switch1' incorporates:
     *  Constant: '<S131>/Constant19'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S148>/Constant'
     *  Logic: '<S259>/Logical15'
     *  RelationalOperator: '<S148>/Compare'
     *  S-Function (sfix_bitop): '<S131>/Bitwise Logical Operator10'
     */
    rtb_Switch1_ml = (rtb_Switch1_ml && ((((sint32)KeSTAR_d_EnblStrtTyp) & 1024)
                       > 0));

    /* Switch: '<S424>/Switch2' */
    if (rtb_Switch1_ml)
    {
        /* Switch: '<S424>/Switch2' incorporates:
         *  Constant: '<S36>/ExtSTEnbler'
         *  DataTypeConversion: '<S424>/Data Type Conversion1'
         *  Selector: '<S424>/Selector'
         *  SignalConversion generated from: '<S1>/VeSTDR_e_DrvrEngStrtType'
         */
        rtb_Switch2_li = CaSTAR_k_ExtSTEnbler[(rtb_TmpSignalConversionAtVeSTDR)];
    }
    else
    {
        /* Switch: '<S424>/Switch2' incorporates:
         *  Constant: '<S424>/Constant Value'
         */
        rtb_Switch2_li = 0U;
    }

    /* End of Switch: '<S424>/Switch2' */

    /* Logic: '<S181>/Logical10' incorporates:
     *  Constant: '<S132>/Constant28'
     *  Constant: '<S133>/Calib'
     *  Constant: '<S175>/Constant'
     *  Logic: '<S249>/Logical19'
     *  RelationalOperator: '<S175>/Compare'
     *  S-Function (sfix_bitop): '<S132>/Bitwise Logical Operator4'
     */
    rtb_LeSTAR_b_HVLoTmpCndn = (rtb_LeSTAR_b_HVLoTmpCndn && ((((sint32)
        KeSTAR_d_EnblSpclStrtTyp) & 16) > 0));

    /* Switch: '<S291>/Switch2' */
    if (rtb_LeSTAR_b_HVLoTmpCndn)
    {
        /* Switch: '<S291>/Switch2' incorporates:
         *  Constant: '<S139>/Calib'
         *  Constant: '<S36>/ExtSTEnbler'
         *  DataTypeConversion: '<S291>/Data Type Conversion1'
         *  Selector: '<S291>/Selector'
         */
        rtb_Switch2_fa = CaSTAR_k_ExtSTEnbler[(KeSTAR_e_KeyOffStrtTyp)];
    }
    else
    {
        /* Switch: '<S291>/Switch2' incorporates:
         *  Constant: '<S291>/Constant Value'
         */
        rtb_Switch2_fa = 0U;
    }

    /* End of Switch: '<S291>/Switch2' */

    /* Inport: '<Root>/VeENGR_b_CatalystWarmUpEnabled' */
    (void)Rte_Read_VeENGR_b_CatalystWarmUpEnabled_Value(&tmpRead_2);

    /* RelationalOperator: '<S196>/Relatonal Operator1' incorporates:
     *  Constant: '<S132>/Constant29'
     *  Constant: '<S133>/Calib'
     *  Constant: '<S174>/Constant'
     *  Logic: '<S260>/Logical9'
     *  RelationalOperator: '<S174>/Compare'
     *  S-Function (sfix_bitop): '<S132>/Bitwise Logical Operator5'
     */
    rtb_RelatonalOperator1 = (tmpRead_2 && ((((sint32)KeSTAR_d_EnblSpclStrtTyp)
        & 32) > 0));

    /* Switch: '<S439>/Switch2' */
    if (rtb_RelatonalOperator1)
    {
        /* Switch: '<S439>/Switch2' incorporates:
         *  Constant: '<S135>/Calib'
         *  Constant: '<S36>/ExtSTEnbler'
         *  DataTypeConversion: '<S439>/Data Type Conversion1'
         *  Selector: '<S439>/Selector'
         */
        rtb_Switch2_l = CaSTAR_k_ExtSTEnbler[(KeSTAR_e_CATWarmUpStrtTyp)];
    }
    else
    {
        /* Switch: '<S439>/Switch2' incorporates:
         *  Constant: '<S439>/Constant Value'
         */
        rtb_Switch2_l = 0U;
    }

    /* End of Switch: '<S439>/Switch2' */

    /* Switch: '<S364>/Switch1' incorporates:
     *  Constant: '<S131>/Constant21'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S153>/Constant'
     *  Logic: '<S255>/Logical20'
     *  RelationalOperator: '<S153>/Compare'
     *  S-Function (sfix_bitop): '<S131>/Bitwise Logical Operator12'
     */
    rtb_Switch1_gq = (rtb_Switch1_gq && ((((sint32)KeSTAR_d_EnblStrtTyp) & 4096)
                       > 0));

    /* Switch: '<S364>/Switch2' */
    if (rtb_Switch1_gq)
    {
        /* Switch: '<S364>/Switch2' incorporates:
         *  Constant: '<S36>/ExtSTEnbler'
         *  DataTypeConversion: '<S364>/Data Type Conversion1'
         *  Selector: '<S364>/Selector'
         *  SignalConversion generated from: '<S1>/VeSTFR_e_StrtType'
         */
        rtb_Switch2_ji = CaSTAR_k_ExtSTEnbler[(rtb_TmpSignalConversionAtVeST_i)];
    }
    else
    {
        /* Switch: '<S364>/Switch2' incorporates:
         *  Constant: '<S364>/Constant Value'
         */
        rtb_Switch2_ji = 0U;
    }

    /* End of Switch: '<S364>/Switch2' */

    /* S-Function (sfix_bitop): '<S145>/Bitwise Logical Operator' incorporates:
     *  Constant: '<S136>/Calib'
     *  Constant: '<S36>/ExtSTEnbler'
     *  DataStoreWrite: '<S145>/Data Store Write'
     *  DataTypeConversion: '<S253>/Data Type Conversion1'
     *  Selector: '<S253>/Selector'
     */
    VeSTAR_g_ExtSTEnbl_DS = (((((((((rtb_Switch15 | rtb_Switch2_k) |
        rtb_Switch10_i) | rtb_Switch2_il) | rtb_Switch2_dw) | rtb_Switch2_bj) |
        rtb_Switch2_li) | rtb_Switch2_fa) | rtb_Switch2_l) |
        CaSTAR_k_ExtSTEnbler[(KeSTAR_e_DfltStrtTyp)]) | rtb_Switch2_ji;

    /* Switch: '<S248>/Switch' incorporates:
     *  Constant: '<S131>/Constant28'
     *  Constant: '<S131>/Constant29'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S158>/Constant'
     *  Constant: '<S159>/Constant'
     *  Constant: '<S454>/Constant'
     *  Constant: '<S455>/Constant'
     *  Logic: '<S261>/Logical10'
     *  Logic: '<S261>/Logical3'
     *  Logic: '<S261>/Logical8'
     *  RelationalOperator: '<S158>/Compare'
     *  RelationalOperator: '<S159>/Compare'
     *  RelationalOperator: '<S261>/Comparison3'
     *  RelationalOperator: '<S261>/Comparison4'
     *  S-Function (sfix_bitop): '<S131>/Bitwise Logical Operator4'
     *  S-Function (sfix_bitop): '<S131>/Bitwise Logical Operator5'
     */
    if ((((((sint32)KeSTAR_d_EnblStrtTyp) & 16) > 0) &&
            (CeSTRR_e_SilentStrtEntry == ((uint32)
            rtb_TmpSignalConversionAtVeST_b))) || ((((uint32)
            rtb_TmpSignalConversionAtVeST_b) == CeSTRR_e_EvalDlydKeyCrank) &&
            ((((sint32)KeSTAR_d_EnblStrtTyp) & 32) > 0)))
    {
        /* Switch: '<S248>/Switch' incorporates:
         *  DataStoreRead: '<S145>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S277>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 = VeSTAR_g_GenStrTypReg_DS | 1U;
    }
    else
    {
        /* Switch: '<S248>/Switch' incorporates:
         *  DataStoreRead: '<S145>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S263>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S263>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S263>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~VeSTAR_g_GenStrTypReg_DS) | 1U);
    }

    /* End of Switch: '<S248>/Switch' */

    /* Switch: '<S251>/Switch1' */
    if (rtb_Comparison14_kh)
    {
        /* RelationalOperator: '<S180>/Comparison14' incorporates:
         *  Constant: '<S307>/Constant'
         *  Constant: '<S308>/Constant'
         *  Constant: '<S309>/Constant'
         *  Constant: '<S310>/Constant'
         *  Constant: '<S311>/Constant'
         *  Constant: '<S312>/Constant'
         *  Constant: '<S313>/Constant'
         *  Constant: '<S314>/Constant'
         *  Constant: '<S315>/Constant'
         *  Constant: '<S316>/Constant'
         *  Constant: '<S317>/Constant'
         *  Constant: '<S318>/Constant'
         *  Constant: '<S319>/Constant'
         *  Constant: '<S320>/Constant'
         *  Logic: '<S251>/Logical12'
         *  RelationalOperator: '<S251>/Comparison1'
         *  RelationalOperator: '<S251>/Comparison10'
         *  RelationalOperator: '<S251>/Comparison12'
         *  RelationalOperator: '<S251>/Comparison13'
         *  RelationalOperator: '<S251>/Comparison14'
         *  RelationalOperator: '<S251>/Comparison15'
         *  RelationalOperator: '<S251>/Comparison16'
         *  RelationalOperator: '<S251>/Comparison17'
         *  RelationalOperator: '<S251>/Comparison18'
         *  RelationalOperator: '<S251>/Comparison19'
         *  RelationalOperator: '<S251>/Comparison20'
         *  RelationalOperator: '<S251>/Comparison21'
         *  RelationalOperator: '<S251>/Comparison7'
         *  RelationalOperator: '<S251>/Comparison9'
         */
        rtb_Comparison14_kh = ((((((((((((((((uint32)
            rtb_TmpSignalConversionAtVeEN_l) == CeSTRR_e_KeyCrnkHybTrq) ||
            (((uint32)rtb_TmpSignalConversionAtVeEN_l) == CeSTRR_e_KeyCrnkEngTrq))
            || (((uint32)rtb_TmpSignalConversionAtVeEN_l) ==
                CeSTRR_e_KeyCrnkLowPwrB)) || (((uint32)
            rtb_TmpSignalConversionAtVeEN_l) == CeSTRR_e_KeyCrnkGeneric)) ||
            (((uint32)rtb_TmpSignalConversionAtVeEN_l) == CeSTRR_e_AStrtSmooth))
            || (((uint32)rtb_TmpSignalConversionAtVeEN_l) ==
                CeSTRR_e_AStrtNormal)) || (((uint32)
            rtb_TmpSignalConversionAtVeEN_l) == CeSTRR_e_AStrtAggrsv)) ||
            (((uint32)rtb_TmpSignalConversionAtVeEN_l) == CeSTRR_e_AStrtGeneric))
            || (((uint32)rtb_TmpSignalConversionAtVeEN_l) ==
                CeSTRR_e_KeyCrnkGreenEng)) || (((uint32)
            rtb_TmpSignalConversionAtVeEN_l) == CeSTRR_e_AStrtReverse)) ||
            (((uint32)rtb_TmpSignalConversionAtVeEN_l) ==
             CeSTRR_e_AStrtCltchStrt)) || (((uint32)
            rtb_TmpSignalConversionAtVeEN_l) == CeSTRR_e_AStrtImpStrt)) ||
                                (((uint32)rtb_TmpSignalConversionAtVeEN_l) ==
            CeSTRR_e_AStrtEMStrt)) || (((uint32)rtb_TmpSignalConversionAtVeEN_l)
                                == CeSTRR_e_LoPwrEMStrt));
    }

    /* End of Switch: '<S251>/Switch1' */

    /* Switch: '<S248>/Switch1' */
    if (rtb_Comparison14_kh)
    {
        /* Switch: '<S248>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S278>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 |= 2U;
    }
    else
    {
        /* Switch: '<S248>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S264>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S264>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S264>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~rtb_Switch15) | 2U);
    }

    /* End of Switch: '<S248>/Switch1' */

    /* Switch: '<S252>/Switch1' */
    if (rtb_TmpSignalConversionAtVeRTMR)
    {
        /* Logic: '<S181>/Logical5' incorporates:
         *  Constant: '<S138>/Calib'
         *  Constant: '<S321>/Constant'
         *  Constant: '<S322>/Constant'
         *  Constant: '<S323>/Constant'
         *  Constant: '<S324>/Constant'
         *  Constant: '<S325>/Constant'
         *  Constant: '<S326>/Constant'
         *  Constant: '<S327>/Constant'
         *  Constant: '<S328>/Constant'
         *  Constant: '<S329>/Constant'
         *  Constant: '<S330>/Constant'
         *  Constant: '<S331>/Constant'
         *  Constant: '<S332>/Constant'
         *  Constant: '<S333>/Constant'
         *  Constant: '<S334>/Constant'
         *  Logic: '<S252>/Logical12'
         *  RelationalOperator: '<S252>/Comparison1'
         *  RelationalOperator: '<S252>/Comparison10'
         *  RelationalOperator: '<S252>/Comparison12'
         *  RelationalOperator: '<S252>/Comparison13'
         *  RelationalOperator: '<S252>/Comparison14'
         *  RelationalOperator: '<S252>/Comparison15'
         *  RelationalOperator: '<S252>/Comparison16'
         *  RelationalOperator: '<S252>/Comparison17'
         *  RelationalOperator: '<S252>/Comparison18'
         *  RelationalOperator: '<S252>/Comparison19'
         *  RelationalOperator: '<S252>/Comparison20'
         *  RelationalOperator: '<S252>/Comparison21'
         *  RelationalOperator: '<S252>/Comparison7'
         *  RelationalOperator: '<S252>/Comparison9'
         */
        rtb_TmpSignalConversionAtVeRTMR = ((((((((((((((((uint32)
            KeSTAR_e_InPlntMdStrtTyp) == CeSTRR_e_KeyCrnkHybTrq) || (((uint32)
            KeSTAR_e_InPlntMdStrtTyp) == CeSTRR_e_KeyCrnkEngTrq)) || (((uint32)
            KeSTAR_e_InPlntMdStrtTyp) == CeSTRR_e_KeyCrnkLowPwrB)) || (((uint32)
            KeSTAR_e_InPlntMdStrtTyp) == CeSTRR_e_KeyCrnkGeneric)) || (((uint32)
            KeSTAR_e_InPlntMdStrtTyp) == CeSTRR_e_AStrtSmooth)) || (((uint32)
            KeSTAR_e_InPlntMdStrtTyp) == CeSTRR_e_AStrtNormal)) || (((uint32)
            KeSTAR_e_InPlntMdStrtTyp) == CeSTRR_e_AStrtAggrsv)) || (((uint32)
            KeSTAR_e_InPlntMdStrtTyp) == CeSTRR_e_AStrtGeneric)) || (((uint32)
            KeSTAR_e_InPlntMdStrtTyp) == CeSTRR_e_KeyCrnkGreenEng)) || (((uint32)
            KeSTAR_e_InPlntMdStrtTyp) == CeSTRR_e_AStrtReverse)) || (((uint32)
            KeSTAR_e_InPlntMdStrtTyp) == CeSTRR_e_AStrtCltchStrt)) || (((uint32)
            KeSTAR_e_InPlntMdStrtTyp) == CeSTRR_e_AStrtImpStrt)) || (((uint32)
            KeSTAR_e_InPlntMdStrtTyp) == CeSTRR_e_AStrtEMStrt)) || (((uint32)
            KeSTAR_e_InPlntMdStrtTyp) == CeSTRR_e_LoPwrEMStrt));
    }

    /* End of Switch: '<S252>/Switch1' */

    /* Switch: '<S248>/Switch2' */
    if (rtb_TmpSignalConversionAtVeRTMR)
    {
        /* Switch: '<S248>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S283>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 |= 4U;
    }
    else
    {
        /* Switch: '<S248>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S269>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S269>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S269>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~rtb_Switch15) | 4U);
    }

    /* End of Switch: '<S248>/Switch2' */

    /* Switch: '<S379>/Switch1' */
    if (rtb_Switch1_o)
    {
        /* Switch: '<S379>/Switch1' incorporates:
         *  Constant: '<S141>/Calib'
         *  Constant: '<S380>/Constant'
         *  Constant: '<S381>/Constant'
         *  Constant: '<S382>/Constant'
         *  Constant: '<S383>/Constant'
         *  Constant: '<S384>/Constant'
         *  Constant: '<S385>/Constant'
         *  Constant: '<S386>/Constant'
         *  Constant: '<S387>/Constant'
         *  Constant: '<S388>/Constant'
         *  Constant: '<S389>/Constant'
         *  Constant: '<S390>/Constant'
         *  Constant: '<S391>/Constant'
         *  Constant: '<S392>/Constant'
         *  Constant: '<S393>/Constant'
         *  Logic: '<S379>/Logical12'
         *  RelationalOperator: '<S379>/Comparison1'
         *  RelationalOperator: '<S379>/Comparison10'
         *  RelationalOperator: '<S379>/Comparison12'
         *  RelationalOperator: '<S379>/Comparison13'
         *  RelationalOperator: '<S379>/Comparison14'
         *  RelationalOperator: '<S379>/Comparison15'
         *  RelationalOperator: '<S379>/Comparison16'
         *  RelationalOperator: '<S379>/Comparison17'
         *  RelationalOperator: '<S379>/Comparison18'
         *  RelationalOperator: '<S379>/Comparison19'
         *  RelationalOperator: '<S379>/Comparison20'
         *  RelationalOperator: '<S379>/Comparison21'
         *  RelationalOperator: '<S379>/Comparison7'
         *  RelationalOperator: '<S379>/Comparison9'
         */
        rtb_Switch1_o = ((((((((((((((((uint32)KeSTAR_e_ServStrtTyp) ==
            CeSTRR_e_KeyCrnkHybTrq) || (((uint32)KeSTAR_e_ServStrtTyp) ==
            CeSTRR_e_KeyCrnkEngTrq)) || (((uint32)KeSTAR_e_ServStrtTyp) ==
            CeSTRR_e_KeyCrnkLowPwrB)) || (((uint32)KeSTAR_e_ServStrtTyp) ==
            CeSTRR_e_KeyCrnkGeneric)) || (((uint32)KeSTAR_e_ServStrtTyp) ==
            CeSTRR_e_AStrtSmooth)) || (((uint32)KeSTAR_e_ServStrtTyp) ==
            CeSTRR_e_AStrtNormal)) || (((uint32)KeSTAR_e_ServStrtTyp) ==
            CeSTRR_e_AStrtAggrsv)) || (((uint32)KeSTAR_e_ServStrtTyp) ==
                                CeSTRR_e_AStrtGeneric)) || (((uint32)
                                KeSTAR_e_ServStrtTyp) ==
                               CeSTRR_e_KeyCrnkGreenEng)) || (((uint32)
                               KeSTAR_e_ServStrtTyp) == CeSTRR_e_AStrtReverse)) ||
                            (((uint32)KeSTAR_e_ServStrtTyp) ==
                             CeSTRR_e_AStrtCltchStrt)) || (((uint32)
                             KeSTAR_e_ServStrtTyp) == CeSTRR_e_AStrtImpStrt)) ||
                          (((uint32)KeSTAR_e_ServStrtTyp) ==
                           CeSTRR_e_AStrtEMStrt)) || (((uint32)
                           KeSTAR_e_ServStrtTyp) == CeSTRR_e_LoPwrEMStrt));
    }

    /* End of Switch: '<S379>/Switch1' */

    /* Switch: '<S248>/Switch3' */
    if (rtb_Switch1_o)
    {
        /* Switch: '<S248>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S284>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 |= 8U;
    }
    else
    {
        /* Switch: '<S248>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S270>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S270>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S270>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~rtb_Switch15) | 8U);
    }

    /* End of Switch: '<S248>/Switch3' */

    /* Switch: '<S349>/Switch1' */
    if (rtb_Switch1_ak)
    {
        /* Switch: '<S349>/Switch1' incorporates:
         *  Constant: '<S140>/Calib'
         *  Constant: '<S350>/Constant'
         *  Constant: '<S351>/Constant'
         *  Constant: '<S352>/Constant'
         *  Constant: '<S353>/Constant'
         *  Constant: '<S354>/Constant'
         *  Constant: '<S355>/Constant'
         *  Constant: '<S356>/Constant'
         *  Constant: '<S357>/Constant'
         *  Constant: '<S358>/Constant'
         *  Constant: '<S359>/Constant'
         *  Constant: '<S360>/Constant'
         *  Constant: '<S361>/Constant'
         *  Constant: '<S362>/Constant'
         *  Constant: '<S363>/Constant'
         *  Logic: '<S349>/Logical12'
         *  RelationalOperator: '<S349>/Comparison1'
         *  RelationalOperator: '<S349>/Comparison10'
         *  RelationalOperator: '<S349>/Comparison12'
         *  RelationalOperator: '<S349>/Comparison13'
         *  RelationalOperator: '<S349>/Comparison14'
         *  RelationalOperator: '<S349>/Comparison15'
         *  RelationalOperator: '<S349>/Comparison16'
         *  RelationalOperator: '<S349>/Comparison17'
         *  RelationalOperator: '<S349>/Comparison18'
         *  RelationalOperator: '<S349>/Comparison19'
         *  RelationalOperator: '<S349>/Comparison20'
         *  RelationalOperator: '<S349>/Comparison21'
         *  RelationalOperator: '<S349>/Comparison7'
         *  RelationalOperator: '<S349>/Comparison9'
         */
        rtb_Switch1_ak = ((((((((((((((((uint32)KeSTAR_e_OvrrdStrtTyp) ==
            CeSTRR_e_KeyCrnkHybTrq) || (((uint32)KeSTAR_e_OvrrdStrtTyp) ==
            CeSTRR_e_KeyCrnkEngTrq)) || (((uint32)KeSTAR_e_OvrrdStrtTyp) ==
            CeSTRR_e_KeyCrnkLowPwrB)) || (((uint32)KeSTAR_e_OvrrdStrtTyp) ==
            CeSTRR_e_KeyCrnkGeneric)) || (((uint32)KeSTAR_e_OvrrdStrtTyp) ==
            CeSTRR_e_AStrtSmooth)) || (((uint32)KeSTAR_e_OvrrdStrtTyp) ==
            CeSTRR_e_AStrtNormal)) || (((uint32)KeSTAR_e_OvrrdStrtTyp) ==
            CeSTRR_e_AStrtAggrsv)) || (((uint32)KeSTAR_e_OvrrdStrtTyp) ==
            CeSTRR_e_AStrtGeneric)) || (((uint32)KeSTAR_e_OvrrdStrtTyp) ==
                                CeSTRR_e_KeyCrnkGreenEng)) || (((uint32)
                                KeSTAR_e_OvrrdStrtTyp) == CeSTRR_e_AStrtReverse))
                             || (((uint32)KeSTAR_e_OvrrdStrtTyp) ==
                              CeSTRR_e_AStrtCltchStrt)) || (((uint32)
                              KeSTAR_e_OvrrdStrtTyp) == CeSTRR_e_AStrtImpStrt)) ||
                           (((uint32)KeSTAR_e_OvrrdStrtTyp) ==
                            CeSTRR_e_AStrtEMStrt)) || (((uint32)
                            KeSTAR_e_OvrrdStrtTyp) == CeSTRR_e_LoPwrEMStrt));
    }

    /* End of Switch: '<S349>/Switch1' */

    /* Switch: '<S248>/Switch4' */
    if (rtb_Switch1_ak)
    {
        /* Switch: '<S248>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S285>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 |= 16U;
    }
    else
    {
        /* Switch: '<S248>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S271>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S271>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S271>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~rtb_Switch15) | 16U);
    }

    /* End of Switch: '<S248>/Switch4' */

    /* Switch: '<S394>/Switch1' */
    if (rtb_LeSTAR_b_CKSCndn)
    {
        /* Logic: '<S179>/Logical4' incorporates:
         *  Constant: '<S142>/Calib'
         *  Constant: '<S395>/Constant'
         *  Constant: '<S396>/Constant'
         *  Constant: '<S397>/Constant'
         *  Constant: '<S398>/Constant'
         *  Constant: '<S399>/Constant'
         *  Constant: '<S400>/Constant'
         *  Constant: '<S401>/Constant'
         *  Constant: '<S402>/Constant'
         *  Constant: '<S403>/Constant'
         *  Constant: '<S404>/Constant'
         *  Constant: '<S405>/Constant'
         *  Constant: '<S406>/Constant'
         *  Constant: '<S407>/Constant'
         *  Constant: '<S408>/Constant'
         *  Logic: '<S394>/Logical12'
         *  RelationalOperator: '<S394>/Comparison1'
         *  RelationalOperator: '<S394>/Comparison10'
         *  RelationalOperator: '<S394>/Comparison12'
         *  RelationalOperator: '<S394>/Comparison13'
         *  RelationalOperator: '<S394>/Comparison14'
         *  RelationalOperator: '<S394>/Comparison15'
         *  RelationalOperator: '<S394>/Comparison16'
         *  RelationalOperator: '<S394>/Comparison17'
         *  RelationalOperator: '<S394>/Comparison18'
         *  RelationalOperator: '<S394>/Comparison19'
         *  RelationalOperator: '<S394>/Comparison20'
         *  RelationalOperator: '<S394>/Comparison21'
         *  RelationalOperator: '<S394>/Comparison7'
         *  RelationalOperator: '<S394>/Comparison9'
         */
        rtb_LeSTAR_b_CKSCndn = ((((((((((((((((uint32)KeSTAR_e_SoftChkStrtTyp) ==
            CeSTRR_e_KeyCrnkHybTrq) || (((uint32)KeSTAR_e_SoftChkStrtTyp) ==
            CeSTRR_e_KeyCrnkEngTrq)) || (((uint32)KeSTAR_e_SoftChkStrtTyp) ==
            CeSTRR_e_KeyCrnkLowPwrB)) || (((uint32)KeSTAR_e_SoftChkStrtTyp) ==
            CeSTRR_e_KeyCrnkGeneric)) || (((uint32)KeSTAR_e_SoftChkStrtTyp) ==
            CeSTRR_e_AStrtSmooth)) || (((uint32)KeSTAR_e_SoftChkStrtTyp) ==
            CeSTRR_e_AStrtNormal)) || (((uint32)KeSTAR_e_SoftChkStrtTyp) ==
            CeSTRR_e_AStrtAggrsv)) || (((uint32)KeSTAR_e_SoftChkStrtTyp) ==
            CeSTRR_e_AStrtGeneric)) || (((uint32)KeSTAR_e_SoftChkStrtTyp) ==
            CeSTRR_e_KeyCrnkGreenEng)) || (((uint32)KeSTAR_e_SoftChkStrtTyp) ==
            CeSTRR_e_AStrtReverse)) || (((uint32)KeSTAR_e_SoftChkStrtTyp) ==
            CeSTRR_e_AStrtCltchStrt)) || (((uint32)KeSTAR_e_SoftChkStrtTyp) ==
            CeSTRR_e_AStrtImpStrt)) || (((uint32)KeSTAR_e_SoftChkStrtTyp) ==
            CeSTRR_e_AStrtEMStrt)) || (((uint32)KeSTAR_e_SoftChkStrtTyp) ==
            CeSTRR_e_LoPwrEMStrt));
    }

    /* End of Switch: '<S394>/Switch1' */

    /* Switch: '<S248>/Switch12' */
    if (rtb_LeSTAR_b_CKSCndn)
    {
        /* Switch: '<S248>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S281>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 |= 32U;
    }
    else
    {
        /* Switch: '<S248>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S272>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S272>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S272>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~rtb_Switch15) | 32U);
    }

    /* End of Switch: '<S248>/Switch12' */

    /* Switch: '<S409>/Switch1' */
    if (rtb_Comparison13_c5)
    {
        /* RelationalOperator: '<S180>/Comparison13' incorporates:
         *  Constant: '<S137>/Calib'
         *  Constant: '<S410>/Constant'
         *  Constant: '<S411>/Constant'
         *  Constant: '<S412>/Constant'
         *  Constant: '<S413>/Constant'
         *  Constant: '<S414>/Constant'
         *  Constant: '<S415>/Constant'
         *  Constant: '<S416>/Constant'
         *  Constant: '<S417>/Constant'
         *  Constant: '<S418>/Constant'
         *  Constant: '<S419>/Constant'
         *  Constant: '<S420>/Constant'
         *  Constant: '<S421>/Constant'
         *  Constant: '<S422>/Constant'
         *  Constant: '<S423>/Constant'
         *  Logic: '<S409>/Logical12'
         *  RelationalOperator: '<S409>/Comparison1'
         *  RelationalOperator: '<S409>/Comparison10'
         *  RelationalOperator: '<S409>/Comparison12'
         *  RelationalOperator: '<S409>/Comparison13'
         *  RelationalOperator: '<S409>/Comparison14'
         *  RelationalOperator: '<S409>/Comparison15'
         *  RelationalOperator: '<S409>/Comparison16'
         *  RelationalOperator: '<S409>/Comparison17'
         *  RelationalOperator: '<S409>/Comparison18'
         *  RelationalOperator: '<S409>/Comparison19'
         *  RelationalOperator: '<S409>/Comparison20'
         *  RelationalOperator: '<S409>/Comparison21'
         *  RelationalOperator: '<S409>/Comparison7'
         *  RelationalOperator: '<S409>/Comparison9'
         */
        rtb_Comparison13_c5 = ((((((((((((((((uint32)KeSTAR_e_HardChkStrtTyp) ==
            CeSTRR_e_KeyCrnkHybTrq) || (((uint32)KeSTAR_e_HardChkStrtTyp) ==
            CeSTRR_e_KeyCrnkEngTrq)) || (((uint32)KeSTAR_e_HardChkStrtTyp) ==
            CeSTRR_e_KeyCrnkLowPwrB)) || (((uint32)KeSTAR_e_HardChkStrtTyp) ==
            CeSTRR_e_KeyCrnkGeneric)) || (((uint32)KeSTAR_e_HardChkStrtTyp) ==
            CeSTRR_e_AStrtSmooth)) || (((uint32)KeSTAR_e_HardChkStrtTyp) ==
            CeSTRR_e_AStrtNormal)) || (((uint32)KeSTAR_e_HardChkStrtTyp) ==
            CeSTRR_e_AStrtAggrsv)) || (((uint32)KeSTAR_e_HardChkStrtTyp) ==
            CeSTRR_e_AStrtGeneric)) || (((uint32)KeSTAR_e_HardChkStrtTyp) ==
            CeSTRR_e_KeyCrnkGreenEng)) || (((uint32)KeSTAR_e_HardChkStrtTyp) ==
            CeSTRR_e_AStrtReverse)) || (((uint32)KeSTAR_e_HardChkStrtTyp) ==
            CeSTRR_e_AStrtCltchStrt)) || (((uint32)KeSTAR_e_HardChkStrtTyp) ==
            CeSTRR_e_AStrtImpStrt)) || (((uint32)KeSTAR_e_HardChkStrtTyp) ==
            CeSTRR_e_AStrtEMStrt)) || (((uint32)KeSTAR_e_HardChkStrtTyp) ==
                                CeSTRR_e_LoPwrEMStrt));
    }

    /* End of Switch: '<S409>/Switch1' */

    /* Switch: '<S248>/Switch5' */
    if (rtb_Comparison13_c5)
    {
        /* Switch: '<S248>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S286>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 |= 64U;
    }
    else
    {
        /* Switch: '<S248>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S273>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S273>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S273>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~rtb_Switch15) | 64U);
    }

    /* End of Switch: '<S248>/Switch5' */

    /* Switch: '<S424>/Switch1' */
    if (rtb_Switch1_ml)
    {
        /* Switch: '<S424>/Switch1' incorporates:
         *  Constant: '<S425>/Constant'
         *  Constant: '<S426>/Constant'
         *  Constant: '<S427>/Constant'
         *  Constant: '<S428>/Constant'
         *  Constant: '<S429>/Constant'
         *  Constant: '<S430>/Constant'
         *  Constant: '<S431>/Constant'
         *  Constant: '<S432>/Constant'
         *  Constant: '<S433>/Constant'
         *  Constant: '<S434>/Constant'
         *  Constant: '<S435>/Constant'
         *  Constant: '<S436>/Constant'
         *  Constant: '<S437>/Constant'
         *  Constant: '<S438>/Constant'
         *  Logic: '<S424>/Logical12'
         *  RelationalOperator: '<S424>/Comparison1'
         *  RelationalOperator: '<S424>/Comparison10'
         *  RelationalOperator: '<S424>/Comparison12'
         *  RelationalOperator: '<S424>/Comparison13'
         *  RelationalOperator: '<S424>/Comparison14'
         *  RelationalOperator: '<S424>/Comparison15'
         *  RelationalOperator: '<S424>/Comparison16'
         *  RelationalOperator: '<S424>/Comparison17'
         *  RelationalOperator: '<S424>/Comparison18'
         *  RelationalOperator: '<S424>/Comparison19'
         *  RelationalOperator: '<S424>/Comparison20'
         *  RelationalOperator: '<S424>/Comparison21'
         *  RelationalOperator: '<S424>/Comparison7'
         *  RelationalOperator: '<S424>/Comparison9'
         *  SignalConversion generated from: '<S1>/VeSTDR_e_DrvrEngStrtType'
         */
        rtb_Switch1_ml = ((((((((((((((((uint32)rtb_TmpSignalConversionAtVeSTDR)
            == CeSTRR_e_KeyCrnkHybTrq) || (((uint32)
            rtb_TmpSignalConversionAtVeSTDR) == CeSTRR_e_KeyCrnkEngTrq)) ||
            (((uint32)rtb_TmpSignalConversionAtVeSTDR) ==
             CeSTRR_e_KeyCrnkLowPwrB)) || (((uint32)
            rtb_TmpSignalConversionAtVeSTDR) == CeSTRR_e_KeyCrnkGeneric)) ||
            (((uint32)rtb_TmpSignalConversionAtVeSTDR) == CeSTRR_e_AStrtSmooth))
            || (((uint32)rtb_TmpSignalConversionAtVeSTDR) ==
                CeSTRR_e_AStrtNormal)) || (((uint32)
            rtb_TmpSignalConversionAtVeSTDR) == CeSTRR_e_AStrtAggrsv)) ||
                                (((uint32)rtb_TmpSignalConversionAtVeSTDR) ==
            CeSTRR_e_AStrtGeneric)) || (((uint32)rtb_TmpSignalConversionAtVeSTDR)
                                == CeSTRR_e_KeyCrnkGreenEng)) || (((uint32)
                                rtb_TmpSignalConversionAtVeSTDR) ==
                               CeSTRR_e_AStrtReverse)) || (((uint32)
                               rtb_TmpSignalConversionAtVeSTDR) ==
                              CeSTRR_e_AStrtCltchStrt)) || (((uint32)
                              rtb_TmpSignalConversionAtVeSTDR) ==
                             CeSTRR_e_AStrtImpStrt)) || (((uint32)
                             rtb_TmpSignalConversionAtVeSTDR) ==
                            CeSTRR_e_AStrtEMStrt)) || (((uint32)
                            rtb_TmpSignalConversionAtVeSTDR) ==
                           CeSTRR_e_LoPwrEMStrt));
    }

    /* End of Switch: '<S424>/Switch1' */

    /* Switch: '<S248>/Switch6' */
    if (rtb_Switch1_ml)
    {
        /* Switch: '<S248>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S287>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 |= 128U;
    }
    else
    {
        /* Switch: '<S248>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S274>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S274>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S274>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~rtb_Switch15) | 128U);
    }

    /* End of Switch: '<S248>/Switch6' */

    /* Inport: '<Root>/VePLTR_e_TowHaulMode' */
    (void)Rte_Read_VePLTR_e_TowHaulMode_Value(&tmpRead_8);

    /* Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt' */
    (void)Rte_Read_VeBRKR_e_BrkPedalDscrtInpt_Value(&tmpRead_0);

    /* Switch: '<S248>/Switch7' incorporates:
     *  Constant: '<S131>/Constant17'
     *  Constant: '<S131>/Constant25'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S146>/Constant'
     *  Constant: '<S147>/Constant'
     *  Constant: '<S456>/Constant'
     *  Constant: '<S457>/Constant'
     *  Constant: '<S458>/Constant'
     *  Constant: '<S459>/Constant'
     *  Constant: '<S460>/Constant'
     *  Constant: '<S461>/Constant'
     *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
     *  Inport: '<Root>/VePLTR_e_TowHaulMode'
     *  Logic: '<S262>/Logical1'
     *  Logic: '<S262>/Logical16'
     *  Logic: '<S262>/Logical2'
     *  Logic: '<S262>/Logical4'
     *  Logic: '<S262>/Logical5'
     *  Logic: '<S262>/Logical6'
     *  Logic: '<S262>/Logical7'
     *  RelationalOperator: '<S146>/Compare'
     *  RelationalOperator: '<S147>/Compare'
     *  RelationalOperator: '<S262>/Comparison1'
     *  RelationalOperator: '<S262>/Comparison11'
     *  RelationalOperator: '<S262>/Comparison2'
     *  RelationalOperator: '<S262>/Comparison5'
     *  RelationalOperator: '<S262>/Comparison6'
     *  RelationalOperator: '<S262>/Comparison8'
     *  S-Function (sfix_bitop): '<S131>/Bitwise Logical Operator'
     *  S-Function (sfix_bitop): '<S131>/Bitwise Logical Operator1'
     */
    if (((((sint32)KeSTAR_d_EnblStrtTyp) & 2) > 0) && (((((uint32)
            rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangePark) ||
            (((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
             CeTRGR_e_TransRangeNeutral)) || ((((((sint32)KeSTAR_d_EnblStrtTyp)
             & 1) > 0) || (rtb_Logical7_o && (((((uint32)
                rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangeDrive1) ||
              (((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
               CeTRGR_e_TransRangeDrive2)) || (((uint32)tmpRead_8) ==
              CePLTR_e_Towing_MD_RQ_ON)))) && (((uint32)tmpRead_0) ==
            CeBRKR_e_BrkNotApplied))))
    {
        /* Switch: '<S248>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S288>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 |= 256U;
    }
    else
    {
        /* Switch: '<S248>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S275>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S275>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S275>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~rtb_Switch15) | 256U);
    }

    /* End of Switch: '<S248>/Switch7' */

    /* Switch: '<S248>/Switch8' incorporates:
     *  Constant: '<S131>/Constant26'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S154>/Constant'
     *  Constant: '<S462>/Constant'
     *  Logic: '<S262>/Logical17'
     *  RelationalOperator: '<S154>/Compare'
     *  RelationalOperator: '<S262>/Comparison7'
     *  S-Function (sfix_bitop): '<S131>/Bitwise Logical Operator2'
     */
    if (((((sint32)KeSTAR_d_EnblStrtTyp) & 4) > 0) && (((uint32)
            rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangeReverse))
    {
        /* Switch: '<S248>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S289>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 |= 512U;
    }
    else
    {
        /* Switch: '<S248>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S276>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S276>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S276>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~rtb_Switch15) | 512U);
    }

    /* End of Switch: '<S248>/Switch8' */

    /* Switch: '<S291>/Switch1' */
    if (rtb_LeSTAR_b_HVLoTmpCndn)
    {
        /* Logic: '<S181>/Logical10' incorporates:
         *  Constant: '<S139>/Calib'
         *  Constant: '<S292>/Constant'
         *  Constant: '<S293>/Constant'
         *  Constant: '<S294>/Constant'
         *  Constant: '<S295>/Constant'
         *  Constant: '<S296>/Constant'
         *  Constant: '<S297>/Constant'
         *  Constant: '<S298>/Constant'
         *  Constant: '<S299>/Constant'
         *  Constant: '<S300>/Constant'
         *  Constant: '<S301>/Constant'
         *  Constant: '<S302>/Constant'
         *  Constant: '<S303>/Constant'
         *  Constant: '<S304>/Constant'
         *  Constant: '<S305>/Constant'
         *  Logic: '<S291>/Logical12'
         *  RelationalOperator: '<S291>/Comparison1'
         *  RelationalOperator: '<S291>/Comparison10'
         *  RelationalOperator: '<S291>/Comparison12'
         *  RelationalOperator: '<S291>/Comparison13'
         *  RelationalOperator: '<S291>/Comparison14'
         *  RelationalOperator: '<S291>/Comparison15'
         *  RelationalOperator: '<S291>/Comparison16'
         *  RelationalOperator: '<S291>/Comparison17'
         *  RelationalOperator: '<S291>/Comparison18'
         *  RelationalOperator: '<S291>/Comparison19'
         *  RelationalOperator: '<S291>/Comparison20'
         *  RelationalOperator: '<S291>/Comparison21'
         *  RelationalOperator: '<S291>/Comparison7'
         *  RelationalOperator: '<S291>/Comparison9'
         */
        rtb_LeSTAR_b_HVLoTmpCndn = ((((((((((((((((uint32)KeSTAR_e_KeyOffStrtTyp)
            == CeSTRR_e_KeyCrnkHybTrq) || (((uint32)KeSTAR_e_KeyOffStrtTyp) ==
            CeSTRR_e_KeyCrnkEngTrq)) || (((uint32)KeSTAR_e_KeyOffStrtTyp) ==
            CeSTRR_e_KeyCrnkLowPwrB)) || (((uint32)KeSTAR_e_KeyOffStrtTyp) ==
            CeSTRR_e_KeyCrnkGeneric)) || (((uint32)KeSTAR_e_KeyOffStrtTyp) ==
            CeSTRR_e_AStrtSmooth)) || (((uint32)KeSTAR_e_KeyOffStrtTyp) ==
            CeSTRR_e_AStrtNormal)) || (((uint32)KeSTAR_e_KeyOffStrtTyp) ==
            CeSTRR_e_AStrtAggrsv)) || (((uint32)KeSTAR_e_KeyOffStrtTyp) ==
            CeSTRR_e_AStrtGeneric)) || (((uint32)KeSTAR_e_KeyOffStrtTyp) ==
            CeSTRR_e_KeyCrnkGreenEng)) || (((uint32)KeSTAR_e_KeyOffStrtTyp) ==
            CeSTRR_e_AStrtReverse)) || (((uint32)KeSTAR_e_KeyOffStrtTyp) ==
            CeSTRR_e_AStrtCltchStrt)) || (((uint32)KeSTAR_e_KeyOffStrtTyp) ==
            CeSTRR_e_AStrtImpStrt)) || (((uint32)KeSTAR_e_KeyOffStrtTyp) ==
            CeSTRR_e_AStrtEMStrt)) || (((uint32)KeSTAR_e_KeyOffStrtTyp) ==
            CeSTRR_e_LoPwrEMStrt));
    }

    /* End of Switch: '<S291>/Switch1' */

    /* Switch: '<S248>/Switch9' */
    if (rtb_LeSTAR_b_HVLoTmpCndn)
    {
        /* Switch: '<S248>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S290>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 |= 131072U;
    }
    else
    {
        /* Switch: '<S248>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S265>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S265>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S265>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~rtb_Switch15) | 131072U);
    }

    /* End of Switch: '<S248>/Switch9' */

    /* Switch: '<S439>/Switch1' */
    if (rtb_RelatonalOperator1)
    {
        /* RelationalOperator: '<S196>/Relatonal Operator1' incorporates:
         *  Constant: '<S135>/Calib'
         *  Constant: '<S440>/Constant'
         *  Constant: '<S441>/Constant'
         *  Constant: '<S442>/Constant'
         *  Constant: '<S443>/Constant'
         *  Constant: '<S444>/Constant'
         *  Constant: '<S445>/Constant'
         *  Constant: '<S446>/Constant'
         *  Constant: '<S447>/Constant'
         *  Constant: '<S448>/Constant'
         *  Constant: '<S449>/Constant'
         *  Constant: '<S450>/Constant'
         *  Constant: '<S451>/Constant'
         *  Constant: '<S452>/Constant'
         *  Constant: '<S453>/Constant'
         *  Logic: '<S439>/Logical12'
         *  RelationalOperator: '<S439>/Comparison1'
         *  RelationalOperator: '<S439>/Comparison10'
         *  RelationalOperator: '<S439>/Comparison12'
         *  RelationalOperator: '<S439>/Comparison13'
         *  RelationalOperator: '<S439>/Comparison14'
         *  RelationalOperator: '<S439>/Comparison15'
         *  RelationalOperator: '<S439>/Comparison16'
         *  RelationalOperator: '<S439>/Comparison17'
         *  RelationalOperator: '<S439>/Comparison18'
         *  RelationalOperator: '<S439>/Comparison19'
         *  RelationalOperator: '<S439>/Comparison20'
         *  RelationalOperator: '<S439>/Comparison21'
         *  RelationalOperator: '<S439>/Comparison7'
         *  RelationalOperator: '<S439>/Comparison9'
         */
        rtb_RelatonalOperator1 = ((((((((((((((((uint32)
            KeSTAR_e_CATWarmUpStrtTyp) == CeSTRR_e_KeyCrnkHybTrq) || (((uint32)
            KeSTAR_e_CATWarmUpStrtTyp) == CeSTRR_e_KeyCrnkEngTrq)) || (((uint32)
            KeSTAR_e_CATWarmUpStrtTyp) == CeSTRR_e_KeyCrnkLowPwrB)) || (((uint32)
            KeSTAR_e_CATWarmUpStrtTyp) == CeSTRR_e_KeyCrnkGeneric)) || (((uint32)
            KeSTAR_e_CATWarmUpStrtTyp) == CeSTRR_e_AStrtSmooth)) || (((uint32)
            KeSTAR_e_CATWarmUpStrtTyp) == CeSTRR_e_AStrtNormal)) || (((uint32)
            KeSTAR_e_CATWarmUpStrtTyp) == CeSTRR_e_AStrtAggrsv)) || (((uint32)
            KeSTAR_e_CATWarmUpStrtTyp) == CeSTRR_e_AStrtGeneric)) || (((uint32)
            KeSTAR_e_CATWarmUpStrtTyp) == CeSTRR_e_KeyCrnkGreenEng)) ||
            (((uint32)KeSTAR_e_CATWarmUpStrtTyp) == CeSTRR_e_AStrtReverse)) ||
            (((uint32)KeSTAR_e_CATWarmUpStrtTyp) == CeSTRR_e_AStrtCltchStrt)) ||
            (((uint32)KeSTAR_e_CATWarmUpStrtTyp) == CeSTRR_e_AStrtImpStrt)) ||
            (((uint32)KeSTAR_e_CATWarmUpStrtTyp) == CeSTRR_e_AStrtEMStrt)) ||
            (((uint32)KeSTAR_e_CATWarmUpStrtTyp) == CeSTRR_e_LoPwrEMStrt));
    }

    /* End of Switch: '<S439>/Switch1' */

    /* Switch: '<S248>/Switch10' */
    if (rtb_RelatonalOperator1)
    {
        /* Switch: '<S248>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S279>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 |= 262144U;
    }
    else
    {
        /* Switch: '<S248>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S266>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S266>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S266>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~rtb_Switch15) | 262144U);
    }

    /* End of Switch: '<S248>/Switch10' */

    /* Switch: '<S248>/Switch11' incorporates:
     *  Constant: '<S136>/Calib'
     *  Constant: '<S335>/Constant'
     *  Constant: '<S336>/Constant'
     *  Constant: '<S337>/Constant'
     *  Constant: '<S338>/Constant'
     *  Constant: '<S339>/Constant'
     *  Constant: '<S340>/Constant'
     *  Constant: '<S341>/Constant'
     *  Constant: '<S342>/Constant'
     *  Constant: '<S343>/Constant'
     *  Constant: '<S344>/Constant'
     *  Constant: '<S345>/Constant'
     *  Constant: '<S346>/Constant'
     *  Constant: '<S347>/Constant'
     *  Constant: '<S348>/Constant'
     *  DataTypeConversion: '<S253>/Data Type Conversion1'
     *  Logic: '<S253>/Logical12'
     *  RelationalOperator: '<S253>/Comparison1'
     *  RelationalOperator: '<S253>/Comparison10'
     *  RelationalOperator: '<S253>/Comparison12'
     *  RelationalOperator: '<S253>/Comparison13'
     *  RelationalOperator: '<S253>/Comparison14'
     *  RelationalOperator: '<S253>/Comparison15'
     *  RelationalOperator: '<S253>/Comparison16'
     *  RelationalOperator: '<S253>/Comparison17'
     *  RelationalOperator: '<S253>/Comparison18'
     *  RelationalOperator: '<S253>/Comparison19'
     *  RelationalOperator: '<S253>/Comparison20'
     *  RelationalOperator: '<S253>/Comparison21'
     *  RelationalOperator: '<S253>/Comparison7'
     *  RelationalOperator: '<S253>/Comparison9'
     *  Selector: '<S253>/Selector'
     */
    if ((((((((((((((((uint32)KeSTAR_e_DfltStrtTyp) == CeSTRR_e_KeyCrnkHybTrq) ||
                    (((uint32)KeSTAR_e_DfltStrtTyp) == CeSTRR_e_KeyCrnkEngTrq)) ||
                   (((uint32)KeSTAR_e_DfltStrtTyp) == CeSTRR_e_KeyCrnkLowPwrB)) ||
                  (((uint32)KeSTAR_e_DfltStrtTyp) == CeSTRR_e_KeyCrnkGeneric)) ||
                 (((uint32)KeSTAR_e_DfltStrtTyp) == CeSTRR_e_AStrtSmooth)) ||
                (((uint32)KeSTAR_e_DfltStrtTyp) == CeSTRR_e_AStrtNormal)) ||
               (((uint32)KeSTAR_e_DfltStrtTyp) == CeSTRR_e_AStrtAggrsv)) ||
              (((uint32)KeSTAR_e_DfltStrtTyp) == CeSTRR_e_AStrtGeneric)) ||
             (((uint32)KeSTAR_e_DfltStrtTyp) == CeSTRR_e_KeyCrnkGreenEng)) ||
            (((uint32)KeSTAR_e_DfltStrtTyp) == CeSTRR_e_AStrtReverse)) ||
            (((uint32)KeSTAR_e_DfltStrtTyp) == CeSTRR_e_AStrtCltchStrt)) ||
            (((uint32)KeSTAR_e_DfltStrtTyp) == CeSTRR_e_AStrtImpStrt)) ||
            (((uint32)KeSTAR_e_DfltStrtTyp) == CeSTRR_e_AStrtEMStrt)) ||
            (((uint32)KeSTAR_e_DfltStrtTyp) == CeSTRR_e_LoPwrEMStrt))
    {
        /* Switch: '<S248>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S280>/FixPt Bitwise Operator1'
         */
        rtb_Switch15 |= 524288U;
    }
    else
    {
        /* Switch: '<S248>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S267>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S267>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S267>/FixPt Bitwise Operator5'
         */
        rtb_Switch15 = ~((~rtb_Switch15) | 524288U);
    }

    /* End of Switch: '<S248>/Switch11' */

    /* Switch: '<S364>/Switch1' */
    if (rtb_Switch1_gq)
    {
        /* Switch: '<S364>/Switch1' incorporates:
         *  Constant: '<S365>/Constant'
         *  Constant: '<S366>/Constant'
         *  Constant: '<S367>/Constant'
         *  Constant: '<S368>/Constant'
         *  Constant: '<S369>/Constant'
         *  Constant: '<S370>/Constant'
         *  Constant: '<S371>/Constant'
         *  Constant: '<S372>/Constant'
         *  Constant: '<S373>/Constant'
         *  Constant: '<S374>/Constant'
         *  Constant: '<S375>/Constant'
         *  Constant: '<S376>/Constant'
         *  Constant: '<S377>/Constant'
         *  Constant: '<S378>/Constant'
         *  Logic: '<S364>/Logical12'
         *  RelationalOperator: '<S364>/Comparison1'
         *  RelationalOperator: '<S364>/Comparison10'
         *  RelationalOperator: '<S364>/Comparison12'
         *  RelationalOperator: '<S364>/Comparison13'
         *  RelationalOperator: '<S364>/Comparison14'
         *  RelationalOperator: '<S364>/Comparison15'
         *  RelationalOperator: '<S364>/Comparison16'
         *  RelationalOperator: '<S364>/Comparison17'
         *  RelationalOperator: '<S364>/Comparison18'
         *  RelationalOperator: '<S364>/Comparison19'
         *  RelationalOperator: '<S364>/Comparison20'
         *  RelationalOperator: '<S364>/Comparison21'
         *  RelationalOperator: '<S364>/Comparison7'
         *  RelationalOperator: '<S364>/Comparison9'
         *  SignalConversion generated from: '<S1>/VeSTFR_e_StrtType'
         */
        rtb_Switch1_gq = ((((((((((((((((uint32)rtb_TmpSignalConversionAtVeST_i)
            == CeSTRR_e_KeyCrnkHybTrq) || (((uint32)
            rtb_TmpSignalConversionAtVeST_i) == CeSTRR_e_KeyCrnkEngTrq)) ||
            (((uint32)rtb_TmpSignalConversionAtVeST_i) ==
             CeSTRR_e_KeyCrnkLowPwrB)) || (((uint32)
            rtb_TmpSignalConversionAtVeST_i) == CeSTRR_e_KeyCrnkGeneric)) ||
            (((uint32)rtb_TmpSignalConversionAtVeST_i) == CeSTRR_e_AStrtSmooth))
            || (((uint32)rtb_TmpSignalConversionAtVeST_i) ==
                CeSTRR_e_AStrtNormal)) || (((uint32)
            rtb_TmpSignalConversionAtVeST_i) == CeSTRR_e_AStrtAggrsv)) ||
                                (((uint32)rtb_TmpSignalConversionAtVeST_i) ==
            CeSTRR_e_AStrtGeneric)) || (((uint32)rtb_TmpSignalConversionAtVeST_i)
                                == CeSTRR_e_KeyCrnkGreenEng)) || (((uint32)
                                rtb_TmpSignalConversionAtVeST_i) ==
                               CeSTRR_e_AStrtReverse)) || (((uint32)
                               rtb_TmpSignalConversionAtVeST_i) ==
                              CeSTRR_e_AStrtCltchStrt)) || (((uint32)
                              rtb_TmpSignalConversionAtVeST_i) ==
                             CeSTRR_e_AStrtImpStrt)) || (((uint32)
                             rtb_TmpSignalConversionAtVeST_i) ==
                            CeSTRR_e_AStrtEMStrt)) || (((uint32)
                            rtb_TmpSignalConversionAtVeST_i) ==
                           CeSTRR_e_LoPwrEMStrt));
    }

    /* End of Switch: '<S364>/Switch1' */

    /* Switch: '<S248>/Switch13' incorporates:
     *  DataStoreWrite: '<S145>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S268>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S268>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S268>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S282>/FixPt Bitwise Operator1'
     */
    if (rtb_Switch1_gq)
    {
        VeSTAR_g_GenStrTypReg_DS = rtb_Switch15 | 4194304U;
    }
    else
    {
        VeSTAR_g_GenStrTypReg_DS = ~((~rtb_Switch15) | 4194304U);
    }

    /* End of Switch: '<S248>/Switch13' */

    /* Outputs for Atomic SubSystem: '<S36>/VarSS_P2p5_StrtRq' */
    /* RelationalOperator: '<S180>/Comparison14' incorporates:
     *  Constant: '<S132>/Constant17'
     *  Constant: '<S132>/Constant25'
     *  Constant: '<S132>/Constant26'
     *  Constant: '<S132>/Constant27'
     *  Constant: '<S133>/Calib'
     *  Constant: '<S162>/Constant'
     *  Constant: '<S163>/Constant'
     *  Constant: '<S170>/Constant'
     *  Constant: '<S171>/Constant'
     *  DataStoreWrite: '<S143>/Data Store Write2'
     *  DataTypeConversion: '<S179>/Data Type Conversion'
     *  DataTypeConversion: '<S179>/Data Type Conversion1'
     *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
     *  Inport: '<Root>/VeENGR_b_ECT_SnsrFA'
     *  Inport: '<Root>/VeHSER_e_RngEqnSel'
     *  Inport: '<Root>/VeIDCR_Pct_IBS_BattSOC'
     *  Inport: '<Root>/VeIDCR_b_IBS_BattSOC_FA'
     *  Inport: '<Root>/VeSTFR_b_CltchRsrvOK'
     *  Inport: '<Root>/VeSTFR_g_FltReg2'
     *  Inport: '<Root>/VeSTRR_b_StrtFailLowPwrLtch'
     *  Inport: '<Root>/VeUBTR_T_FEAD_EstBeltTemp'
     *  Logic: '<S143>/Logical'
     *  Logic: '<S143>/Logical16'
     *  Logic: '<S143>/Logical3'
     *  Logic: '<S143>/Logical7'
     *  Logic: '<S143>/Logical8'
     *  Logic: '<S143>/Logical9'
     *  Logic: '<S179>/Logical4'
     *  Logic: '<S181>/Logical1'
     *  Logic: '<S181>/Logical10'
     *  Logic: '<S181>/Logical11'
     *  Logic: '<S181>/Logical2'
     *  Logic: '<S181>/Logical3'
     *  Logic: '<S181>/Logical4'
     *  Logic: '<S181>/Logical5'
     *  Logic: '<S181>/Logical6'
     *  Logic: '<S181>/Logical7'
     *  Lookup_n-D: '<S195>/Vector'
     *  RelationalOperator: '<S162>/Compare'
     *  RelationalOperator: '<S163>/Compare'
     *  RelationalOperator: '<S170>/Compare'
     *  RelationalOperator: '<S171>/Compare'
     *  RelationalOperator: '<S179>/Comparison1'
     *  RelationalOperator: '<S179>/Comparison10'
     *  RelationalOperator: '<S179>/Comparison5'
     *  RelationalOperator: '<S180>/Comparison13'
     *  RelationalOperator: '<S181>/Comparison1'
     *  RelationalOperator: '<S181>/Comparison2'
     *  RelationalOperator: '<S181>/Comparison3'
     *  RelationalOperator: '<S181>/Comparison4'
     *  RelationalOperator: '<S181>/Comparison6'
     *  RelationalOperator: '<S181>/Comparison7'
     *  RelationalOperator: '<S181>/Comparison8'
     *  RelationalOperator: '<S181>/Comparison9'
     *  RelationalOperator: '<S34>/Comparison3'
     *  Rounding: '<S179>/Rounding'
     *  S-Function (sfix_bitop): '<S132>/Bitwise Logical Operator'
     *  S-Function (sfix_bitop): '<S132>/Bitwise Logical Operator1'
     *  S-Function (sfix_bitop): '<S132>/Bitwise Logical Operator2'
     *  S-Function (sfix_bitop): '<S132>/Bitwise Logical Operator3'
     *  S-Function (sfix_bitop): '<S185>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S185>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S185>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S189>/FixPt Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S34>/Bitwise Logical Operator3'
     *  Switch: '<S178>/Switch10'
     *  Switch: '<S178>/Switch11'
     *  Switch: '<S178>/Switch13'
     *  Switch: '<S178>/Switch9'
     */
#if Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    /* Outputs for Atomic SubSystem: '<S144>/P2p5_Equpd' */
    /* Outputs for Atomic SubSystem: '<S28>/VarSS_PrePrcss' */
    /* Outputs for Atomic SubSystem: '<S179>/LeftOpenInterval' */
    /* RelationalOperator: '<S180>/Comparison14' incorporates:
     *  Constant: '<S198>/Constant'
     */
    rtb_Comparison14_kh = (((uint32)rtb_TmpSignalConversionAtVeST_g) ==
                           CeSTRR_e_KeyOffSt);
    (void)Rte_Read_VeENGR_b_ECT_SnsrFA_Value(&tmpRead_1);
    (void)Rte_Read_VeUBTR_T_FEAD_EstBeltTemp_Value(&tmpRead_c);
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value(&tmpRead);
    (void)Rte_Read_VeIDCR_Pct_IBS_BattSOC_Value(&tmpRead_6);
    (void)Rte_Read_VeIDCR_b_IBS_BattSOC_FA_Value(&tmpRead_7);

    /* Logic: '<S181>/Logical10' incorporates:
     *  Constant: '<S200>/Calib'
     *  Constant: '<S201>/Calib'
     *  Constant: '<S202>/Calib'
     *  Constant: '<S203>/Calib'
     *  Constant: '<S204>/Calib'
     *  Constant: '<S205>/Calib'
     *  Constant: '<S206>/Calib'
     *  Constant: '<S207>/Calib'
     *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
     *  Inport: '<Root>/VeENGR_b_ECT_SnsrFA'
     *  Inport: '<Root>/VeIDCR_Pct_IBS_BattSOC'
     *  Inport: '<Root>/VeIDCR_b_IBS_BattSOC_FA'
     *  Inport: '<Root>/VeUBTR_T_FEAD_EstBeltTemp'
     */
    rtb_LeSTAR_b_HVLoTmpCndn = ((((((((rtb_TmpSignalConversionAtVeENGR <
        KeSTAR_T_StrtTypLwPwrECT_Max) || tmpRead_1) ||
        (rtb_TmpSignalConversionAtVeBPCR < KeSTAR_T_StrtTypLwPwrBPackMax)) ||
        (rtb_TmpSignalConversionAtVeBP_a < KeSTAR_Pct_StrtTypLwPwrSOC_Max)) ||
        (rtb_TmpSignalConversionAtVeTFTR < KeSTAR_T_StrtTypLwPwrTrnTmpMax)) ||
        (tmpRead_c < KeSTAR_T_StrtTypLwPwrBeltTemp_Max)) || (tmpRead <
        KeSTAR_T_StrtTypLwPwrAmbTemp_Max)) || ((KeSTAR_b_StrtTypLwPwrIBSSOCEnbl)
        && (tmpRead_7 || (tmpRead_6 < KeSTAR_Pct_StrtTypLwPwrIBSSOCMin))));
    (void)Rte_Read_VeSTFR_g_FltReg2_Value(&rtb_Switch10_k);
    (void)Rte_Read_VeSTRR_b_StrtFailLowPwrLtch_Value(&tmpRead_b);

    /* Logic: '<S181>/Logical5' incorporates:
     *  Constant: '<S199>/Calib'
     *  Constant: '<S208>/Calib'
     *  Constant: '<S34>/Constant Value4'
     *  Constant: '<S34>/Constant Value5'
     *  Inport: '<Root>/VeSTFR_g_FltReg2'
     *  Inport: '<Root>/VeSTRR_b_StrtFailLowPwrLtch'
     */
    rtb_TmpSignalConversionAtVeRTMR = ((((KeSTAR_b_StrtTypLwPwrLimONEnbl) &&
        ((rtb_Switch10_k & 1U) > 0U)) || tmpRead_b) ||
        (rtb_TmpSignalConversionAtVeSTCR < KeSTAR_P_StrtTypLwPwrDisChrgLmMax));

    /* Logic: '<S179>/Logical4' */
    rtb_LeSTAR_b_CKSCndn = (rtb_LeSTAR_b_HVLoTmpCndn ||
                            rtb_TmpSignalConversionAtVeRTMR);
    if ((rtb_Comparison14_kh && rtb_LeSTAR_b_CKSCndn) && ((((sint32)
            KeSTAR_d_EnblSpclStrtTyp) & 1) > 0))
    {
        /* Switch: '<S178>/Switch10' incorporates:
         *  DataStoreRead: '<S143>/Data Store Read2'
         *  S-Function (sfix_bitop): '<S186>/FixPt Bitwise Operator1'
         */
        rtb_Switch10_k = VeSTAR_g_GenStrTypReg_DS | 1024U;
    }
    else
    {
        /* Switch: '<S178>/Switch10' incorporates:
         *  DataStoreRead: '<S143>/Data Store Read2'
         *  S-Function (sfix_bitop): '<S182>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S182>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S182>/FixPt Bitwise Operator5'
         */
        rtb_Switch10_k = ~((~VeSTAR_g_GenStrTypReg_DS) | 1024U);
    }

    /* RelationalOperator: '<S180>/Comparison13' incorporates:
     *  Constant: '<S132>/Constant17'
     *  Constant: '<S133>/Calib'
     *  Constant: '<S162>/Constant'
     *  Constant: '<S197>/Constant'
     *  RelationalOperator: '<S162>/Compare'
     *  S-Function (sfix_bitop): '<S132>/Bitwise Logical Operator'
     */
    rtb_Comparison13_c5 = (CeSTRR_e_EngOffSt == ((uint32)
                            rtb_TmpSignalConversionAtVeST_g));
    if ((rtb_Comparison13_c5 && rtb_LeSTAR_b_CKSCndn) && ((((sint32)
            KeSTAR_d_EnblSpclStrtTyp) & 4) > 0))
    {
        /* Switch: '<S178>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S187>/FixPt Bitwise Operator1'
         */
        rtb_Switch10_k |= 2048U;
    }
    else
    {
        /* Switch: '<S178>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S183>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S183>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S183>/FixPt Bitwise Operator5'
         */
        rtb_Switch10_k = ~((~rtb_Switch10_k) | 2048U);
    }

    /* Rounding: '<S179>/Rounding' incorporates:
     *  Constant: '<S132>/Constant26'
     *  Constant: '<S133>/Calib'
     *  Constant: '<S170>/Constant'
     *  RelationalOperator: '<S170>/Compare'
     *  S-Function (sfix_bitop): '<S132>/Bitwise Logical Operator2'
     *  SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp'
     *  SignalConversion generated from: '<S1>/VeENGR_T_EngCoolantTemp'
     */
    rtb_TmpSignalConversionAtVeENGR = roundf(look2_iflf_binlcapw
        (rtb_TmpSignalConversionAtVeENGR, rtb_TmpSignalConversionAtVeBPCR, ((
        const float32 *)&(KxSTAR_k_TempBsdStrtType[0])), ((const float32 *)
        &(KySTAR_k_TempBsdStrtType[0])), ((const float32 *)
        &(KtSTAR_k_TempBsdStrtType[0])), STAR_ac_ConstP.Vector_maxIndex, 21U));

    /* Logic: '<S179>/Logical4' incorporates:
     *  Constant: '<S190>/Calib'
     *  Constant: '<S191>/Calib'
     *  Constant: '<S192>/Calib'
     *  Constant: '<S193>/Calib'
     *  Constant: '<S194>/Calib'
     *  Logic: '<S196>/Logical Operator'
     *  RelationalOperator: '<S196>/Relatonal Operator'
     *  RelationalOperator: '<S196>/Relatonal Operator1'
     */
    rtb_LeSTAR_b_CKSCndn = (((((rtb_TmpSignalConversionAtVeENGR > ((float32)
        KeSTAR_e_CKSStrtTypMin)) && (rtb_TmpSignalConversionAtVeENGR <=
        ((float32)KeSTAR_e_CKSStrtTypMax))) || (rtb_TmpSignalConversionAtVeBP_a <
        KeSTAR_Pct_StrtTypCKSSOCMax)) || (rtb_TmpSignalConversionAtVeSTCR <
        KeSTAR_P_StrtTypCKSDisChrgLmMax)) || (rtb_TmpSignalConversionAtVeTFTR <
        KeSTAR_T_StrtTypCKSTrnTmpMax));
    if ((rtb_Comparison14_kh && rtb_LeSTAR_b_CKSCndn) && ((((sint32)
            KeSTAR_d_EnblSpclStrtTyp) & 2) > 0))
    {
        /* Switch: '<S178>/Switch13' incorporates:
         *  S-Function (sfix_bitop): '<S188>/FixPt Bitwise Operator1'
         */
        rtb_Switch10_k |= 4096U;
    }
    else
    {
        /* Switch: '<S178>/Switch13' incorporates:
         *  S-Function (sfix_bitop): '<S184>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S184>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S184>/FixPt Bitwise Operator5'
         */
        rtb_Switch10_k = ~((~rtb_Switch10_k) | 4096U);
    }

    if ((rtb_Comparison13_c5 && rtb_LeSTAR_b_CKSCndn) && ((((sint32)
            KeSTAR_d_EnblSpclStrtTyp) & 8) > 0))
    {
        VeSTAR_g_GenStrTypReg_DS = rtb_Switch10_k | 8192U;
    }
    else
    {
        VeSTAR_g_GenStrTypReg_DS = ~((~rtb_Switch10_k) | 8192U);
    }

    /* Logic: '<S181>/Logical10' incorporates:
     *  Constant: '<S132>/Constant25'
     *  Constant: '<S132>/Constant27'
     *  Constant: '<S133>/Calib'
     *  Constant: '<S163>/Constant'
     *  Constant: '<S171>/Constant'
     *  DataStoreWrite: '<S143>/Data Store Write2'
     *  RelationalOperator: '<S163>/Compare'
     *  RelationalOperator: '<S171>/Compare'
     *  S-Function (sfix_bitop): '<S132>/Bitwise Logical Operator1'
     *  S-Function (sfix_bitop): '<S132>/Bitwise Logical Operator3'
     *  S-Function (sfix_bitop): '<S185>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S185>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S185>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S189>/FixPt Bitwise Operator1'
     */
    rtb_LeSTAR_b_HVLoTmpCndn = (rtb_LeSTAR_b_HVLoTmpCndn &&
        (!rtb_TmpSignalConversionAtVeRTMR));
    (void)Rte_Read_VeSTFR_b_CltchRsrvOK_Value(&rtb_Logical13_l);

    /* Outputs for Atomic SubSystem: '<S37>/P2p5Equpd' */
    /* Logic: '<S239>/Logical5' incorporates:
     *  Constant: '<S131>/Constant22'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S152>/Constant'
     *  Constant: '<S463>/Constant Value2'
     *  Constant: '<S463>/Constant Value3'
     *  Inport: '<Root>/VeSTFR_b_CltchRsrvOK'
     *  Logic: '<S237>/Logical'
     *  RelationalOperator: '<S152>/Compare'
     *  RelationalOperator: '<S463>/Comparison'
     *  S-Function (sfix_bitop): '<S131>/Bitwise Logical Operator13'
     *  S-Function (sfix_bitop): '<S463>/Bitwise Logical Operator2'
     */
    rtb_VariantMergeForOutportImp_d = (((rtb_TmpSignalConversionAtVeSTFR &
        8388608U) > 0U) && ((((sint32)KeSTAR_d_EnblStrtTyp) & 8192) > 0));

    /* End of Outputs for SubSystem: '<S37>/P2p5Equpd' */

    /* Logic: '<S237>/Logical1' incorporates:
     *  Constant: '<S243>/Constant'
     *  RelationalOperator: '<S239>/Comparison2'
     */
    rtb_Logical7_o = (((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                      CeTRGR_e_TransRangePark);

    /* Logic: '<S226>/Logical3' incorporates:
     *  Constant: '<S244>/Constant'
     *  RelationalOperator: '<S239>/Comparison3'
     */
    rtb_VariantMergeForOutportClt_o = (CeTRGR_e_TransRangeNeutral == ((uint32)
        rtb_TmpSignalConversionAtVeTRGR));

    /* Outputs for Atomic SubSystem: '<S37>/P2p5Equpd' */
    /* Logic: '<S238>/Logical1' incorporates:
     *  Constant: '<S131>/Constant23'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S151>/Constant'
     *  Constant: '<S463>/Constant Value1'
     *  Constant: '<S463>/Constant Value3'
     *  Logic: '<S239>/Logical1'
     *  RelationalOperator: '<S151>/Compare'
     *  RelationalOperator: '<S463>/Comparison1'
     *  S-Function (sfix_bitop): '<S131>/Bitwise Logical Operator14'
     *  S-Function (sfix_bitop): '<S463>/Bitwise Logical Operator1'
     */
    rtb_Switch1_ak = (((rtb_TmpSignalConversionAtVeSTFR & 4194304U) > 0U) &&
                      ((((sint32)KeSTAR_d_EnblStrtTyp) & 16384) > 0));

    /* End of Outputs for SubSystem: '<S37>/P2p5Equpd' */

    /* VariantMerge generated from: '<S24>/CltchMd' incorporates:
     *  Constant: '<S245>/Constant'
     *  Logic: '<S239>/Logical4'
     *  Logic: '<S239>/Logical6'
     *  Logic: '<S239>/Logical7'
     *  Logic: '<S239>/Logical8'
     *  RelationalOperator: '<S239>/Comparison1'
     */
    rtb_VariantMergeForOutportClt_n = (((((!rtb_Logical7_o) &&
        (!rtb_VariantMergeForOutportClt_o)) && rtb_Logical13_l) &&
        (CeTRGR_e_TransRangeReverse != ((uint32)rtb_TmpSignalConversionAtVeTRGR)))
        && rtb_Switch1_ak);

    /* Logic: '<S226>/Logical3' incorporates:
     *  Logic: '<S239>/Logical2'
     */
    rtb_VariantMergeForOutportClt_o = (rtb_VariantMergeForOutportClt_o ||
        rtb_Logical7_o);

    /* VariantMerge generated from: '<S24>/EMMd' incorporates:
     *  Logic: '<S239>/Logical9'
     */
    rtb_VariantMergeForOutportEMMd = (rtb_Switch1_ak &&
        rtb_VariantMergeForOutportClt_o);

    /* Logic: '<S238>/Logical1' incorporates:
     *  Logic: '<S239>/Logical3'
     */
    rtb_Switch1_ak = (rtb_VariantMergeForOutportClt_n ||
                      rtb_VariantMergeForOutportEMMd);

    /* Logic: '<S237>/Logical2' incorporates:
     *  Logic: '<S239>/Logical10'
     */
    rtb_VariantMergeForOutportEMS_d = (rtb_VariantMergeForOutportImp_d ||
        rtb_Switch1_ak);

    /* Logic: '<S237>/Logical1' incorporates:
     *  Constant: '<S240>/Constant'
     *  Constant: '<S241>/Constant'
     *  Logic: '<S237>/Logical2'
     *  Logic: '<S237>/Logical5'
     *  RelationalOperator: '<S237>/Comparison5'
     *  RelationalOperator: '<S237>/Comparison6'
     */
    rtb_Logical7_o = (rtb_VariantMergeForOutportEMS_d && ((((uint32)
                         rtb_TmpSignalConversionAtVeTRNR) >=
                        CeTRNR_e_ClchStrt_1st_to_1stGear) && (((uint32)
                         rtb_TmpSignalConversionAtVeTRNR) <=
                        CeTRNR_e_ClchStrt_7th_to_7thGear)));

    /* Switch: '<S223>/Switch10' incorporates:
     *  Logic: '<S226>/Logical2'
     */
    if (rtb_VariantMergeForOutportImp_d || rtb_Logical7_o)
    {
        /* Switch: '<S223>/Switch10' incorporates:
         *  DataStoreRead: '<S222>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S233>/FixPt Bitwise Operator1'
         */
        rtb_Switch10_k = VeSTAR_g_GenStrTypReg_DS | 16384U;
    }
    else
    {
        /* Switch: '<S223>/Switch10' incorporates:
         *  DataStoreRead: '<S222>/Data Store Read1'
         *  S-Function (sfix_bitop): '<S228>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S228>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S228>/FixPt Bitwise Operator5'
         */
        rtb_Switch10_k = ~((~VeSTAR_g_GenStrTypReg_DS) | 16384U);
    }

    /* End of Switch: '<S223>/Switch10' */

    /* Logic: '<S239>/Logical13' incorporates:
     *  Constant: '<S246>/Constant'
     *  Constant: '<S247>/Constant'
     *  Logic: '<S239>/Logical11'
     *  RelationalOperator: '<S239>/Comparison5'
     *  RelationalOperator: '<S239>/Comparison7'
     */
    rtb_Logical13_l = ((((uint32)rtb_TmpSignalConversionAtVeTRNR) >=
                        CeTRNR_e_ImpulseStrt_and_N) && (((uint32)
                         rtb_TmpSignalConversionAtVeTRNR) <=
                        CeTRNR_e_ImpulseStrt_and_7thgear));

    /* Logic: '<S239>/Logical5' */
    rtb_VariantMergeForOutportImp_d = (rtb_Logical13_l &&
        rtb_VariantMergeForOutportEMS_d);

    /* Outputs for Atomic SubSystem: '<S37>/P2p5Equpd' */
    /* Logic: '<S226>/Logical3' incorporates:
     *  Constant: '<S131>/Constant24'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S150>/Constant'
     *  Constant: '<S463>/Constant Value'
     *  Constant: '<S463>/Constant Value3'
     *  Logic: '<S238>/Logical9'
     *  RelationalOperator: '<S150>/Compare'
     *  RelationalOperator: '<S463>/Comparison2'
     *  S-Function (sfix_bitop): '<S131>/Bitwise Logical Operator15'
     *  S-Function (sfix_bitop): '<S463>/Bitwise Logical Operator'
     */
    rtb_VariantMergeForOutportClt_o = ((rtb_VariantMergeForOutportClt_o &&
        ((rtb_TmpSignalConversionAtVeSTFR & 2097152U) > 0U)) && ((0 < 0) ||
        ((((uint32)KeSTAR_d_EnblStrtTyp) & ((uint32)32768)) > ((uint32)0))));

    /* End of Outputs for SubSystem: '<S37>/P2p5Equpd' */

    /* Logic: '<S239>/Logical12' incorporates:
     *  Logic: '<S238>/Logical2'
     */
    rtb_VariantMergeForOutportEMS_d = (rtb_VariantMergeForOutportClt_o ||
        rtb_Switch1_ak);

    /* Logic: '<S239>/Logical13' incorporates:
     *  Logic: '<S239>/Logical12'
     */
    rtb_Logical13_l = (rtb_VariantMergeForOutportEMS_d && rtb_Logical13_l);

    /* Logic: '<S226>/Logical1' incorporates:
     *  Logic: '<S224>/Logical7'
     */
    rtb_Switch1_o = (rtb_VariantMergeForOutportImp_d || rtb_Logical13_l);

    /* Switch: '<S223>/Switch11' incorporates:
     *  Logic: '<S226>/Logical1'
     */
    if (rtb_Switch1_o || rtb_Switch1_ak)
    {
        /* Switch: '<S223>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S234>/FixPt Bitwise Operator1'
         */
        rtb_TmpSignalConversionAtVeSTFR = rtb_Switch10_k | 32768U;
    }
    else
    {
        /* Switch: '<S223>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S229>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S229>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S229>/FixPt Bitwise Operator5'
         */
        rtb_TmpSignalConversionAtVeSTFR = ~((~rtb_Switch10_k) | 32768U);
    }

    /* End of Switch: '<S223>/Switch11' */
    (void)Rte_Read_VeHSER_e_RngEqnSel_Value(&tmpRead_4);

    /* Logic: '<S238>/Logical1' incorporates:
     *  Constant: '<S242>/Constant'
     *  Inport: '<Root>/VeHSER_e_RngEqnSel'
     *  RelationalOperator: '<S238>/Comparison8'
     */
    rtb_Switch1_ak = (rtb_VariantMergeForOutportEMS_d && (((uint32)tmpRead_4) ==
                       CeHSER_e_UseM1Eqn));

    /* Logic: '<S226>/Logical3' */
    rtb_VariantMergeForOutportClt_o = (rtb_VariantMergeForOutportClt_o ||
        rtb_Switch1_ak);

    /* Switch: '<S223>/Switch13' */
    if (rtb_VariantMergeForOutportClt_o)
    {
        /* Switch: '<S223>/Switch13' incorporates:
         *  S-Function (sfix_bitop): '<S235>/FixPt Bitwise Operator1'
         */
        rtb_TmpSignalConversionAtVeSTFR |= 65536U;
    }
    else
    {
        /* Switch: '<S223>/Switch13' incorporates:
         *  S-Function (sfix_bitop): '<S230>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S230>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S230>/FixPt Bitwise Operator5'
         */
        rtb_TmpSignalConversionAtVeSTFR = ~((~rtb_TmpSignalConversionAtVeSTFR) |
            65536U);
    }

    /* End of Switch: '<S223>/Switch13' */

    /* Switch: '<S223>/Switch1' incorporates:
     *  Constant: '<S132>/Constant30'
     *  Constant: '<S133>/Calib'
     *  Constant: '<S173>/Constant'
     *  Logic: '<S226>/Logical11'
     *  RelationalOperator: '<S173>/Compare'
     *  S-Function (sfix_bitop): '<S132>/Bitwise Logical Operator6'
     */
    if (((rtb_Comparison14_kh && rtb_LeSTAR_b_HVLoTmpCndn) && ((((sint32)
            KeSTAR_d_EnblSpclStrtTyp) & 64) > 0)) &&
            rtb_VariantMergeForOutportClt_o)
    {
        /* Switch: '<S223>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S232>/FixPt Bitwise Operator1'
         */
        rtb_TmpSignalConversionAtVeSTFR |= 1048576U;
    }
    else
    {
        /* Switch: '<S223>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S227>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S227>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S227>/FixPt Bitwise Operator5'
         */
        rtb_TmpSignalConversionAtVeSTFR = ~((~rtb_TmpSignalConversionAtVeSTFR) |
            1048576U);
    }

    /* End of Switch: '<S223>/Switch1' */

    /* Switch: '<S223>/Switch2' incorporates:
     *  Constant: '<S132>/Constant31'
     *  Constant: '<S133>/Calib'
     *  Constant: '<S172>/Constant'
     *  DataStoreWrite: '<S222>/Data Store Write1'
     *  Logic: '<S226>/Logical12'
     *  RelationalOperator: '<S172>/Compare'
     *  S-Function (sfix_bitop): '<S132>/Bitwise Logical Operator7'
     *  S-Function (sfix_bitop): '<S231>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S231>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S231>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S236>/FixPt Bitwise Operator1'
     */
    if ((rtb_VariantMergeForOutportClt_o && (rtb_LeSTAR_b_HVLoTmpCndn &&
            rtb_Comparison13_c5)) && ((((sint32)KeSTAR_d_EnblSpclStrtTyp) & 128)
         > 0))
    {
        VeSTAR_g_GenStrTypReg_DS = rtb_TmpSignalConversionAtVeSTFR | 2097152U;
    }
    else
    {
        VeSTAR_g_GenStrTypReg_DS = ~((~rtb_TmpSignalConversionAtVeSTFR) |
            2097152U);
    }

    /* End of Switch: '<S223>/Switch2' */

    /* Logic: '<S224>/Logical9' incorporates:
     *  Logic: '<S224>/Logical4'
     *  Logic: '<S224>/Logical8'
     */
    rtb_VariantMergeForOutportImp_d = ((!rtb_VariantMergeForOutportImp_d) &&
        (!rtb_Logical13_l));
    rtb_Logical13_l = !rtb_Logical7_o;

    /* VariantMerge generated from: '<S24>/EMStrtCnfrm' incorporates:
     *  Logic: '<S224>/Logical10'
     *  Logic: '<S224>/Logical9'
     */
    rtb_VariantMergeForOutportEMS_d = (rtb_Switch1_ak &&
        (rtb_VariantMergeForOutportImp_d && rtb_Logical13_l));

    /* Logic: '<S224>/Logical4' incorporates:
     *  Logic: '<S224>/Logical8'
     */
    rtb_Switch1_ak = !rtb_Switch1_ak;

    /* VariantMerge generated from: '<S24>/CltchStrtCnfrm' incorporates:
     *  Logic: '<S224>/Logical4'
     *  Logic: '<S224>/Logical5'
     */
    rtb_VariantMergeForOutportClt_o = (rtb_Logical7_o &&
        (rtb_VariantMergeForOutportImp_d && rtb_Switch1_ak));

    /* VariantMerge generated from: '<S24>/ImplsStrtCnfrm' incorporates:
     *  Logic: '<S224>/Logical6'
     *  Logic: '<S224>/Logical8'
     */
    rtb_VariantMergeForOutportImp_d = (rtb_Switch1_o && (rtb_Logical13_l &&
        rtb_Switch1_ak));

    /* End of Outputs for SubSystem: '<S144>/P2p5_Equpd' */
#else

    /* Outputs for Atomic SubSystem: '<S144>/NoP2p5' */
    /* Switch: '<S211>/Switch2' incorporates:
     *  DataStoreRead: '<S209>/Data Store Read1'
     *  DataStoreWrite: '<S209>/Data Store Write1'
     *  S-Function (sfix_bitop): '<S212>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S212>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S212>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S213>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S213>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S213>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S214>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S214>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S214>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S215>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S215>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S215>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S216>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S216>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S216>/FixPt Bitwise Operator5'
     */
    VeSTAR_g_GenStrTypReg_DS = ~((~(~((~(~((~(~((~(~((~VeSTAR_g_GenStrTypReg_DS)
        | 16384U))) | 32768U))) | 65536U))) | 1048576U))) | 2097152U);

    /* VariantMerge generated from: '<S24>/CltchMd' incorporates:
     *  Constant: '<S209>/FALSE Constant'
     */
    rtb_VariantMergeForOutportClt_n = false;

    /* VariantMerge generated from: '<S24>/EMMd' incorporates:
     *  Constant: '<S209>/FALSE Constant1'
     */
    rtb_VariantMergeForOutportEMMd = false;

    /* VariantMerge generated from: '<S24>/CltchStrtCnfrm' incorporates:
     *  Constant: '<S209>/FALSE Constant2'
     */
    rtb_VariantMergeForOutportClt_o = false;

    /* VariantMerge generated from: '<S24>/ImplsStrtCnfrm' incorporates:
     *  Constant: '<S209>/FALSE Constant3'
     */
    rtb_VariantMergeForOutportImp_d = false;

    /* VariantMerge generated from: '<S24>/EMStrtCnfrm' incorporates:
     *  Constant: '<S209>/FALSE Constant4'
     */
    rtb_VariantMergeForOutportEMS_d = false;

    /* End of Outputs for SubSystem: '<S144>/NoP2p5' */
#endif

    /* End of RelationalOperator: '<S180>/Comparison14' */
    /* End of Outputs for SubSystem: '<S179>/LeftOpenInterval' */
    /* End of Outputs for SubSystem: '<S28>/VarSS_PrePrcss' */
    /* End of Outputs for SubSystem: '<S36>/VarSS_P2p5_StrtRq' */
    /* End of Outputs for SubSystem: '<S24>/Non_BEV' */
#endif

    /* End of Outputs for SubSystem: '<S4>/VarSS_Stage1Arb' */

    /* SignalConversion generated from: '<S4>/VarSS_Stage1Arb' */
    VeSTAR_b_CmdEngOnRaw = rtb_VariantMergeForOutportCmd_n;

    /* SignalConversion generated from: '<S4>/VarSS_Stage1Arb' */
    VeSTAR_b_EMStrtCnfrm = rtb_VariantMergeForOutportEMS_d;

    /* SignalConversion generated from: '<S4>/VarSS_Stage1Arb' */
    VeSTAR_b_EngOffAllwdSTGCRaw = rtb_VariantMergeForOutportSTGCO;

    /* SignalConversion generated from: '<S4>/VarSS_Stage1Arb' */
    VeSTAR_b_RemStop1 = rtb_VariantMergeForOutportRemSt;

    /* SignalConversion generated from: '<S4>/VarSS_Stage1Arb' */
    VeSTAR_b_ImplsStrtCltchMd = rtb_VariantMergeForOutportClt_n;

    /* SignalConversion generated from: '<S4>/VarSS_Stage1Arb' */
    VeSTAR_b_ImplsStrtEMMd = rtb_VariantMergeForOutportEMMd;

    /* SignalConversion generated from: '<S4>/VarSS_Stage1Arb' */
    VeSTAR_b_CltchStrtCnfrm = rtb_VariantMergeForOutportClt_o;

    /* SignalConversion generated from: '<S4>/VarSS_Stage1Arb' */
    VeSTAR_b_ImplsStrtCnfrm = rtb_VariantMergeForOutportImp_d;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STAC_S2ArbCnfg'
     */
    /* Outputs for Atomic SubSystem: '<S5>/VarSS_Stage2Arb' */
#if Rte_SysCon_Variant_STAR_BEVVar

    /* Outputs for Atomic SubSystem: '<S464>/BEV' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STAC_STypSlctCfg'
     */
    /* Outputs for Atomic SubSystem: '<S6>/VarSS_StrtTypSlctr' */
    /* Outputs for Atomic SubSystem: '<S499>/BEV' */
    /* VariantMerge generated from: '<S499>/StrtTyp' incorporates:
     *  Constant: '<S502>/Constant'
     */
    STAR_ac_B.VariantMergeForOutportStrtTyp = CeSTRR_e_NoAction;

    /* VariantMerge generated from: '<S464>/StrtAllwd' incorporates:
     *  Constant: '<S465>/true'
     */
    STAR_ac_B.VariantMergeForOutportStrtAllwd = true;

    /* VariantMerge generated from: '<S464>/StrtTyp2TCM' incorporates:
     *  Constant: '<S467>/Constant'
     */
    STAR_ac_B.VariantMergeForOutportStrtTyp2T = CeSTRR_e_NoAction;

    /* VariantMerge generated from: '<S464>/CmdEngOnArb2' incorporates:
     *  Constant: '<S465>/false'
     */
    rtb_VariantMergeForOutportCmdEn = false;

    /* End of Outputs for SubSystem: '<S464>/BEV' */
#else

    /* Outputs for Atomic SubSystem: '<S464>/NonBEV' */
    /* Outputs for Atomic SubSystem: '<S499>/NonBEV' */
    /* Logic: '<S560>/Logical1' incorporates:
     *  Constant: '<S528>/Constant17'
     *  Constant: '<S595>/Constant'
     *  RelationalOperator: '<S595>/Compare'
     *  S-Function (sfix_bitop): '<S528>/Bitwise Logical Operator'
     */
    rtb_VariantMergeForOutportClt_n = ((((sint32)rtb_TmpSignalConversionAtVeST_m)
        & 1) > 0);

    /* RelationalOperator: '<S596>/Compare' incorporates:
     *  Constant: '<S528>/Constant25'
     *  Constant: '<S596>/Constant'
     *  S-Function (sfix_bitop): '<S528>/Bitwise Logical Operator1'
     */
    rtb_VariantMergeForOutportEMMd = ((((sint32)rtb_TmpSignalConversionAtVeST_m)
        & 2) > 0);

    /* RelationalOperator: '<S504>/Comparison26' incorporates:
     *  Constant: '<S504>/Constant1'
     *  Constant: '<S504>/Constant2'
     *  DataStoreRead: '<S501>/Data Store Read1'
     *  S-Function (sfix_bitop): '<S504>/Bitwise Operator26'
     */
    rtb_VariantMergeForOutportRemSt = ((VeSTAR_g_GenStrTypReg_DS & 5112062U) >
        0U);

    /* Switch: '<S504>/Switch1' incorporates:
     *  Constant: '<S530>/Calib'
     */
    if (KeSTAR_b_DsblKeyCrnkHyb4AStrt)
    {
        rtb_Switch1_o = rtb_VariantMergeForOutportClt_n;
    }
    else
    {
        rtb_Switch1_o = rtb_VariantMergeForOutportEMMd;
    }

    /* End of Switch: '<S504>/Switch1' */

    /* Logic: '<S551>/Logical1' incorporates:
     *  Constant: '<S527>/Constant2'
     *  Constant: '<S547>/Calib'
     *  Constant: '<S548>/Calib'
     *  Constant: '<S551>/Constant6'
     *  Constant: '<S564>/Constant'
     *  DataStoreRead: '<S501>/Data Store Read1'
     *  DataStoreRead: '<S504>/Data Store Read'
     *  Logic: '<S504>/Logical13'
     *  Logic: '<S551>/Logical26'
     *  Logic: '<S551>/Logical3'
     *  RelationalOperator: '<S551>/Comparison2'
     *  RelationalOperator: '<S551>/Comparison5'
     *  RelationalOperator: '<S564>/Compare'
     *  S-Function (sfix_bitop): '<S527>/Bitwise Logical Operator1'
     *  S-Function (sfix_bitop): '<S551>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S551>/Bitwise Operator5'
     */
    rtb_VariantMergeForOutportClt_o = ((((VeSTAR_g_GenStrTypReg_DS &
        KeSTAR_g_KeyCrnkHyb_Dsbl3) <= 0U) && (!rtb_Switch1_o)) &&
        ((rtb_VariantMergeForOutportRemSt && ((VeSTAR_g_ExtSTEnbl_DS & 2U) > 0U))
         || ((VeSTAR_g_GenStrTypReg_DS & KeSTAR_g_KeyCrnkHyb_Enbl3) > 0U)));

    /* Switch: '<S504>/Switch' incorporates:
     *  Constant: '<S529>/Calib'
     */
    if (!KeSTAR_b_Dsbl4StrtDvc1)
    {
        /* Logic: '<S559>/Logical1' incorporates:
         *  Constant: '<S528>/Constant26'
         *  Constant: '<S597>/Constant'
         *  Logic: '<S504>/Logical2'
         *  RelationalOperator: '<S597>/Compare'
         *  S-Function (sfix_bitop): '<S528>/Bitwise Logical Operator2'
         */
        rtb_VariantMergeForOutportEMMd = (((((sint32)
            rtb_TmpSignalConversionAtVeST_m) & 4) > 0) &&
            rtb_VariantMergeForOutportEMMd);
    }

    /* End of Switch: '<S504>/Switch' */

    /* Logic: '<S552>/Logical3' incorporates:
     *  Logic: '<S553>/Logical3'
     *  Logic: '<S554>/Logical3'
     *  Logic: '<S559>/Logical3'
     */
    rtb_VariantMergeForOutportImp_d = !rtb_VariantMergeForOutportEMMd;

    /* Logic: '<S552>/Logical1' incorporates:
     *  Constant: '<S527>/Constant3'
     *  Constant: '<S541>/Calib'
     *  Constant: '<S542>/Calib'
     *  Constant: '<S552>/Constant6'
     *  Constant: '<S575>/Constant'
     *  DataStoreRead: '<S501>/Data Store Read1'
     *  DataStoreRead: '<S504>/Data Store Read'
     *  Logic: '<S504>/Logical14'
     *  Logic: '<S504>/Logical3'
     *  Logic: '<S552>/Logical26'
     *  Logic: '<S552>/Logical3'
     *  RelationalOperator: '<S552>/Comparison2'
     *  RelationalOperator: '<S552>/Comparison5'
     *  RelationalOperator: '<S575>/Compare'
     *  S-Function (sfix_bitop): '<S527>/Bitwise Logical Operator2'
     *  S-Function (sfix_bitop): '<S552>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S552>/Bitwise Operator5'
     */
    rtb_VariantMergeForOutportEMS_d = ((((VeSTAR_g_GenStrTypReg_DS &
        KeSTAR_g_KeyCrnkEng_Dsbl3) <= 0U) && rtb_VariantMergeForOutportImp_d) &&
        (((rtb_VariantMergeForOutportRemSt && ((VeSTAR_g_ExtSTEnbl_DS & 4U) > 0U))
          || rtb_VariantMergeForOutportClt_n) || ((VeSTAR_g_GenStrTypReg_DS &
        KeSTAR_g_KeyCrnkEng_Enbl3) > 0U)));

    /* Switch: '<S503>/Switch1' */
    if (rtb_VariantMergeForOutportEMS_d)
    {
        /* Switch: '<S503>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S512>/FixPt Bitwise Operator1'
         *  Switch: '<S503>/Switch'
         */
        rtb_Switch1_ok = (uint16)((sint32)((rtb_VariantMergeForOutportClt_o ? 1 :
            0) | ((uint8)2)));
    }
    else
    {
        /* Switch: '<S503>/Switch1' incorporates:
         *  Switch: '<S503>/Switch'
         */
        rtb_Switch1_ok = rtb_VariantMergeForOutportClt_o ? ((uint16)1) :
            ((uint16)0);
    }

    /* End of Switch: '<S503>/Switch1' */

    /* Logic: '<S553>/Logical1' incorporates:
     *  Constant: '<S527>/Constant4'
     *  Constant: '<S549>/Calib'
     *  Constant: '<S550>/Calib'
     *  Constant: '<S553>/Constant6'
     *  Constant: '<S586>/Constant'
     *  DataStoreRead: '<S501>/Data Store Read1'
     *  DataStoreRead: '<S504>/Data Store Read'
     *  Logic: '<S504>/Logical15'
     *  Logic: '<S504>/Logical4'
     *  Logic: '<S553>/Logical26'
     *  Logic: '<S553>/Logical3'
     *  RelationalOperator: '<S553>/Comparison2'
     *  RelationalOperator: '<S553>/Comparison5'
     *  RelationalOperator: '<S586>/Compare'
     *  S-Function (sfix_bitop): '<S527>/Bitwise Logical Operator3'
     *  S-Function (sfix_bitop): '<S553>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S553>/Bitwise Operator5'
     */
    rtb_Logical13_l = ((((VeSTAR_g_GenStrTypReg_DS & KeSTAR_g_KeyCrnkLPB_Dsbl3) <=
                         0U) && rtb_VariantMergeForOutportImp_d) &&
                       (((rtb_VariantMergeForOutportRemSt &&
                          ((VeSTAR_g_ExtSTEnbl_DS & 8U) > 0U)) ||
                         rtb_VariantMergeForOutportClt_n) ||
                        ((VeSTAR_g_GenStrTypReg_DS & KeSTAR_g_KeyCrnkLPB_Enbl3) >
                         0U)));

    /* Switch: '<S503>/Switch2' */
    if (rtb_Logical13_l)
    {
        /* Switch: '<S503>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S519>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_ok |= (uint16)4;
    }

    /* End of Switch: '<S503>/Switch2' */

    /* Logic: '<S554>/Logical1' incorporates:
     *  Constant: '<S527>/Constant5'
     *  Constant: '<S543>/Calib'
     *  Constant: '<S544>/Calib'
     *  Constant: '<S554>/Constant6'
     *  Constant: '<S592>/Constant'
     *  DataStoreRead: '<S501>/Data Store Read1'
     *  DataStoreRead: '<S504>/Data Store Read'
     *  Logic: '<S504>/Logical16'
     *  Logic: '<S504>/Logical5'
     *  Logic: '<S554>/Logical26'
     *  Logic: '<S554>/Logical3'
     *  RelationalOperator: '<S554>/Comparison2'
     *  RelationalOperator: '<S554>/Comparison5'
     *  RelationalOperator: '<S592>/Compare'
     *  S-Function (sfix_bitop): '<S527>/Bitwise Logical Operator4'
     *  S-Function (sfix_bitop): '<S554>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S554>/Bitwise Operator5'
     */
    rtb_VariantMergeForOutportSTGCO = ((((VeSTAR_g_GenStrTypReg_DS &
        KeSTAR_g_KeyCrnkGen_Dsbl3) <= 0U) && rtb_VariantMergeForOutportImp_d) &&
        (((rtb_VariantMergeForOutportRemSt && ((VeSTAR_g_ExtSTEnbl_DS & 16U) >
        0U)) || rtb_VariantMergeForOutportClt_n) || ((VeSTAR_g_GenStrTypReg_DS &
        KeSTAR_g_KeyCrnkGen_Enbl3) > 0U)));

    /* Switch: '<S503>/Switch3' */
    if (rtb_VariantMergeForOutportSTGCO)
    {
        /* Switch: '<S503>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S520>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_ok |= (uint16)8;
    }

    /* End of Switch: '<S503>/Switch3' */

    /* Logic: '<S559>/Logical1' incorporates:
     *  Constant: '<S527>/Constant11'
     *  Constant: '<S545>/Calib'
     *  Constant: '<S546>/Calib'
     *  Constant: '<S559>/Constant6'
     *  Constant: '<S565>/Constant'
     *  DataStoreRead: '<S501>/Data Store Read1'
     *  DataStoreRead: '<S504>/Data Store Read'
     *  Logic: '<S504>/Logical21'
     *  Logic: '<S504>/Logical6'
     *  Logic: '<S559>/Logical26'
     *  Logic: '<S559>/Logical3'
     *  RelationalOperator: '<S559>/Comparison2'
     *  RelationalOperator: '<S559>/Comparison5'
     *  RelationalOperator: '<S565>/Compare'
     *  S-Function (sfix_bitop): '<S527>/Bitwise Logical Operator10'
     *  S-Function (sfix_bitop): '<S559>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S559>/Bitwise Operator5'
     */
    rtb_VariantMergeForOutportEMMd = ((((VeSTAR_g_GenStrTypReg_DS &
        KeSTAR_g_KeyCrnkGrn_Dsbl3) <= 0U) && rtb_VariantMergeForOutportImp_d) &&
        (((rtb_VariantMergeForOutportRemSt && ((VeSTAR_g_ExtSTEnbl_DS & 1024U) >
        0U)) || rtb_VariantMergeForOutportClt_n) || ((VeSTAR_g_GenStrTypReg_DS &
        KeSTAR_g_KeyCrnkGrn_Enbl3) > 0U)));

    /* Switch: '<S503>/Switch4' */
    if (rtb_VariantMergeForOutportEMMd)
    {
        /* Switch: '<S503>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S521>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_ok |= (uint16)16;
    }

    /* End of Switch: '<S503>/Switch4' */

    /* Logic: '<S555>/Logical3' incorporates:
     *  Logic: '<S556>/Logical3'
     *  Logic: '<S557>/Logical3'
     *  Logic: '<S558>/Logical3'
     *  Logic: '<S560>/Logical3'
     */
    rtb_VariantMergeForOutportClt_n = !rtb_VariantMergeForOutportClt_n;

    /* Logic: '<S555>/Logical1' incorporates:
     *  Constant: '<S527>/Constant6'
     *  Constant: '<S539>/Calib'
     *  Constant: '<S540>/Calib'
     *  Constant: '<S555>/Constant6'
     *  Constant: '<S591>/Constant'
     *  DataStoreRead: '<S501>/Data Store Read1'
     *  DataStoreRead: '<S504>/Data Store Read'
     *  Logic: '<S504>/Logical17'
     *  Logic: '<S555>/Logical26'
     *  Logic: '<S555>/Logical3'
     *  RelationalOperator: '<S555>/Comparison2'
     *  RelationalOperator: '<S555>/Comparison5'
     *  RelationalOperator: '<S591>/Compare'
     *  S-Function (sfix_bitop): '<S527>/Bitwise Logical Operator5'
     *  S-Function (sfix_bitop): '<S555>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S555>/Bitwise Operator5'
     */
    rtb_VariantMergeForOutportImp_d = ((((VeSTAR_g_GenStrTypReg_DS &
        KeSTAR_g_AStrtSmth_Dsbl3) <= 0U) && rtb_VariantMergeForOutportClt_n) &&
        ((rtb_VariantMergeForOutportRemSt && ((VeSTAR_g_ExtSTEnbl_DS & 32U) > 0U))
         || ((VeSTAR_g_GenStrTypReg_DS & KeSTAR_g_AStrtSmth_Enbl3) > 0U)));

    /* Switch: '<S503>/Switch12' */
    if (rtb_VariantMergeForOutportImp_d)
    {
        /* Switch: '<S503>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S515>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_ok |= (uint16)32;
    }

    /* End of Switch: '<S503>/Switch12' */

    /* Logic: '<S556>/Logical1' incorporates:
     *  Constant: '<S527>/Constant7'
     *  Constant: '<S535>/Calib'
     *  Constant: '<S536>/Calib'
     *  Constant: '<S556>/Constant6'
     *  Constant: '<S590>/Constant'
     *  DataStoreRead: '<S501>/Data Store Read1'
     *  DataStoreRead: '<S504>/Data Store Read'
     *  Logic: '<S504>/Logical18'
     *  Logic: '<S556>/Logical26'
     *  Logic: '<S556>/Logical3'
     *  RelationalOperator: '<S556>/Comparison2'
     *  RelationalOperator: '<S556>/Comparison5'
     *  RelationalOperator: '<S590>/Compare'
     *  S-Function (sfix_bitop): '<S527>/Bitwise Logical Operator6'
     *  S-Function (sfix_bitop): '<S556>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S556>/Bitwise Operator5'
     */
    rtb_Logical7_o = ((((VeSTAR_g_GenStrTypReg_DS & KeSTAR_g_AStrtNrml_Dsbl3) <=
                        0U) && rtb_VariantMergeForOutportClt_n) &&
                      ((rtb_VariantMergeForOutportRemSt &&
                        ((VeSTAR_g_ExtSTEnbl_DS & 64U) > 0U)) ||
                       ((VeSTAR_g_GenStrTypReg_DS & KeSTAR_g_AStrtNrml_Enbl3) >
                        0U)));

    /* Switch: '<S503>/Switch5' */
    if (rtb_Logical7_o)
    {
        /* Switch: '<S503>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S522>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_ok |= (uint16)64;
    }

    /* End of Switch: '<S503>/Switch5' */

    /* Logic: '<S557>/Logical1' incorporates:
     *  Constant: '<S527>/Constant8'
     *  Constant: '<S531>/Calib'
     *  Constant: '<S532>/Calib'
     *  Constant: '<S557>/Constant6'
     *  Constant: '<S589>/Constant'
     *  DataStoreRead: '<S501>/Data Store Read1'
     *  DataStoreRead: '<S504>/Data Store Read'
     *  Logic: '<S504>/Logical19'
     *  Logic: '<S557>/Logical26'
     *  Logic: '<S557>/Logical3'
     *  RelationalOperator: '<S557>/Comparison2'
     *  RelationalOperator: '<S557>/Comparison5'
     *  RelationalOperator: '<S589>/Compare'
     *  S-Function (sfix_bitop): '<S527>/Bitwise Logical Operator7'
     *  S-Function (sfix_bitop): '<S557>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S557>/Bitwise Operator5'
     */
    rtb_Switch1_ak = ((((VeSTAR_g_GenStrTypReg_DS & KeSTAR_g_AStrtAgg_Dsbl3) <=
                        0U) && rtb_VariantMergeForOutportClt_n) &&
                      ((rtb_VariantMergeForOutportRemSt &&
                        ((VeSTAR_g_ExtSTEnbl_DS & 128U) > 0U)) ||
                       ((VeSTAR_g_GenStrTypReg_DS & KeSTAR_g_AStrtAgg_Enbl3) >
                        0U)));

    /* Switch: '<S503>/Switch6' */
    if (rtb_Switch1_ak)
    {
        /* Switch: '<S503>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S523>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_ok |= (uint16)128;
    }

    /* End of Switch: '<S503>/Switch6' */

    /* RelationalOperator: '<S510>/Comparison4' incorporates:
     *  Constant: '<S527>/Constant9'
     *  Constant: '<S533>/Calib'
     *  Constant: '<S534>/Calib'
     *  Constant: '<S558>/Constant6'
     *  Constant: '<S593>/Constant'
     *  DataStoreRead: '<S501>/Data Store Read1'
     *  DataStoreRead: '<S504>/Data Store Read'
     *  Logic: '<S504>/Logical20'
     *  Logic: '<S558>/Logical1'
     *  Logic: '<S558>/Logical26'
     *  Logic: '<S558>/Logical3'
     *  RelationalOperator: '<S558>/Comparison2'
     *  RelationalOperator: '<S558>/Comparison5'
     *  RelationalOperator: '<S593>/Compare'
     *  S-Function (sfix_bitop): '<S527>/Bitwise Logical Operator8'
     *  S-Function (sfix_bitop): '<S558>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S558>/Bitwise Operator5'
     */
    rtb_Switch1_o = ((((VeSTAR_g_GenStrTypReg_DS & KeSTAR_g_AStrtGen_Dsbl3) <=
                       0U) && rtb_VariantMergeForOutportClt_n) &&
                     ((rtb_VariantMergeForOutportRemSt &&
                       ((VeSTAR_g_ExtSTEnbl_DS & 256U) > 0U)) ||
                      ((VeSTAR_g_GenStrTypReg_DS & KeSTAR_g_AStrtGen_Enbl3) > 0U)));

    /* Switch: '<S503>/Switch7' */
    if (rtb_Switch1_o)
    {
        /* Switch: '<S503>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S524>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_ok |= (uint16)256;
    }

    /* End of Switch: '<S503>/Switch7' */

    /* Logic: '<S560>/Logical1' incorporates:
     *  Constant: '<S527>/Constant14'
     *  Constant: '<S537>/Calib'
     *  Constant: '<S538>/Calib'
     *  Constant: '<S560>/Constant6'
     *  Constant: '<S569>/Constant'
     *  DataStoreRead: '<S501>/Data Store Read1'
     *  DataStoreRead: '<S504>/Data Store Read'
     *  Logic: '<S504>/Logical22'
     *  Logic: '<S560>/Logical26'
     *  Logic: '<S560>/Logical3'
     *  RelationalOperator: '<S560>/Comparison2'
     *  RelationalOperator: '<S560>/Comparison5'
     *  RelationalOperator: '<S569>/Compare'
     *  S-Function (sfix_bitop): '<S527>/Bitwise Logical Operator13'
     *  S-Function (sfix_bitop): '<S560>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S560>/Bitwise Operator5'
     */
    rtb_VariantMergeForOutportClt_n = ((((VeSTAR_g_GenStrTypReg_DS &
        KeSTAR_g_AStrtRev_Dsbl3) <= 0U) && rtb_VariantMergeForOutportClt_n) &&
        ((rtb_VariantMergeForOutportRemSt && ((VeSTAR_g_ExtSTEnbl_DS & 8192U) >
        0U)) || ((VeSTAR_g_GenStrTypReg_DS & KeSTAR_g_AStrtRev_Enbl3) > 0U)));

    /* Switch: '<S503>/Switch8' */
    if (rtb_VariantMergeForOutportClt_n)
    {
        /* Switch: '<S503>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S525>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_ok |= (uint16)512;
    }

    /* End of Switch: '<S503>/Switch8' */

    /* Outputs for Atomic SubSystem: '<S504>/VarSS_P2p5Types' */
    /* Logic: '<S504>/Logical23' incorporates:
     *  Logic: '<S504>/Logical1'
     *  Logic: '<S504>/Logical24'
     *  Logic: '<S504>/Logical25'
     */
#if Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    /* Outputs for Atomic SubSystem: '<S562>/P2p5_Equpd' */
    /* Outputs for Atomic SubSystem: '<S504>/VarSS_P2p5InitTyp' */
    /* Outputs for Atomic SubSystem: '<S561>/P2p5_Equpd' */
    /* RelationalOperator: '<S604>/Comparison27' incorporates:
     *  Constant: '<S604>/Constant1'
     *  Constant: '<S604>/Constant5'
     *  DataStoreRead: '<S501>/Data Store Read1'
     *  S-Function (sfix_bitop): '<S604>/Bitwise Operator27'
     */
    rtb_TmpSignalConversionAtVeRTMR = ((VeSTAR_g_GenStrTypReg_DS & 65536U) > 0U);

    /* Logic: '<S504>/Logical23' incorporates:
     *  Constant: '<S527>/Constant15'
     *  Constant: '<S568>/Constant'
     *  Constant: '<S604>/Constant1'
     *  Constant: '<S604>/Constant3'
     *  DataStoreRead: '<S501>/Data Store Read1'
     *  DataStoreRead: '<S504>/Data Store Read'
     *  RelationalOperator: '<S568>/Compare'
     *  RelationalOperator: '<S604>/Comparison29'
     *  S-Function (sfix_bitop): '<S527>/Bitwise Logical Operator14'
     *  S-Function (sfix_bitop): '<S604>/Bitwise Operator29'
     */
    rtb_TmpSignalConversionAtVeSTRR = ((rtb_VariantMergeForOutportRemSt &&
        ((VeSTAR_g_ExtSTEnbl_DS & 16384U) > 0U)) && ((VeSTAR_g_GenStrTypReg_DS &
        16384U) > 0U));

    /* Logic: '<S504>/Logical24' incorporates:
     *  Constant: '<S527>/Constant16'
     *  Constant: '<S567>/Constant'
     *  Constant: '<S604>/Constant1'
     *  Constant: '<S604>/Constant4'
     *  DataStoreRead: '<S501>/Data Store Read1'
     *  DataStoreRead: '<S504>/Data Store Read'
     *  RelationalOperator: '<S567>/Compare'
     *  RelationalOperator: '<S604>/Comparison28'
     *  S-Function (sfix_bitop): '<S527>/Bitwise Logical Operator15'
     *  S-Function (sfix_bitop): '<S604>/Bitwise Operator28'
     */
    rtb_VariantMergeForOutportCmd_n = ((rtb_VariantMergeForOutportRemSt &&
        ((VeSTAR_g_ExtSTEnbl_DS & 32768U) > 0U)) && ((VeSTAR_g_GenStrTypReg_DS &
        32768U) > 0U));

    /* End of Outputs for SubSystem: '<S561>/P2p5_Equpd' */

    /* Logic: '<S504>/Logical25' incorporates:
     *  Constant: '<S527>/Constant17'
     *  Constant: '<S571>/Constant'
     *  DataStoreRead: '<S504>/Data Store Read'
     *  RelationalOperator: '<S571>/Compare'
     *  S-Function (sfix_bitop): '<S527>/Bitwise Logical Operator16'
     */
    rtb_Logical3_a = ((rtb_VariantMergeForOutportRemSt &&
                       ((VeSTAR_g_ExtSTEnbl_DS & 65536U) > 0U)) &&
                      rtb_TmpSignalConversionAtVeRTMR);

    /* Logic: '<S611>/Logical3' incorporates:
     *  Constant: '<S528>/Constant29'
     *  Constant: '<S601>/Constant'
     *  Logic: '<S614>/Logical3'
     *  RelationalOperator: '<S601>/Compare'
     *  S-Function (sfix_bitop): '<S528>/Bitwise Logical Operator5'
     */
    rtb_VariantMergeForOutportEMStr = ((((sint32)rtb_TmpSignalConversionAtVeST_m)
        & 32) <= 0);

    /* VariantMerge generated from: '<S562>/EMLPS' incorporates:
     *  Constant: '<S527>/Constant25'
     *  Constant: '<S572>/Constant'
     *  Constant: '<S606>/Constant9'
     *  Constant: '<S608>/Calib'
     *  Constant: '<S611>/Constant6'
     *  DataStoreRead: '<S501>/Data Store Read1'
     *  DataStoreRead: '<S504>/Data Store Read'
     *  Logic: '<S611>/Logical1'
     *  Logic: '<S611>/Logical26'
     *  Logic: '<S611>/Logical3'
     *  RelationalOperator: '<S572>/Compare'
     *  RelationalOperator: '<S611>/Comparison2'
     *  RelationalOperator: '<S611>/Comparison5'
     *  S-Function (sfix_bitop): '<S527>/Bitwise Logical Operator17'
     *  S-Function (sfix_bitop): '<S611>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S611>/Bitwise Operator5'
     */
    rtb_VariantMergeForOutportEMLPS = ((((VeSTAR_g_GenStrTypReg_DS &
        KeSTAR_g_EMLPS_Dsbl3) <= 0U) && rtb_VariantMergeForOutportEMStr) &&
        (((rtb_VariantMergeForOutportRemSt && ((VeSTAR_g_ExtSTEnbl_DS & 131072U)
        > 0U)) && rtb_TmpSignalConversionAtVeRTMR) || ((VeSTAR_g_GenStrTypReg_DS
        & 3145728U) > 0U)));

    /* VariantMerge generated from: '<S562>/CltchStrt' incorporates:
     *  Constant: '<S528>/Constant27'
     *  Constant: '<S598>/Constant'
     *  Constant: '<S606>/Constant6'
     *  Constant: '<S607>/Calib'
     *  Constant: '<S612>/Constant6'
     *  DataStoreRead: '<S501>/Data Store Read1'
     *  Logic: '<S612>/Logical1'
     *  Logic: '<S612>/Logical26'
     *  Logic: '<S612>/Logical3'
     *  RelationalOperator: '<S598>/Compare'
     *  RelationalOperator: '<S612>/Comparison2'
     *  RelationalOperator: '<S612>/Comparison5'
     *  S-Function (sfix_bitop): '<S528>/Bitwise Logical Operator3'
     *  S-Function (sfix_bitop): '<S612>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S612>/Bitwise Operator5'
     */
    rtb_VariantMergeForOutportCltch = ((((VeSTAR_g_GenStrTypReg_DS &
        KeSTAR_g_ClchStrt_Dsbl3) <= 0U) && ((((sint32)
        rtb_TmpSignalConversionAtVeST_m) & 8) <= 0)) &&
        (rtb_TmpSignalConversionAtVeSTRR || ((VeSTAR_g_GenStrTypReg_DS & 16384U)
        > 0U)));

    /* VariantMerge generated from: '<S562>/ImplsStrt' incorporates:
     *  Constant: '<S528>/Constant28'
     *  Constant: '<S602>/Constant'
     *  Constant: '<S606>/Constant7'
     *  Constant: '<S610>/Calib'
     *  Constant: '<S613>/Constant6'
     *  DataStoreRead: '<S501>/Data Store Read1'
     *  Logic: '<S613>/Logical1'
     *  Logic: '<S613>/Logical26'
     *  Logic: '<S613>/Logical3'
     *  RelationalOperator: '<S602>/Compare'
     *  RelationalOperator: '<S613>/Comparison2'
     *  RelationalOperator: '<S613>/Comparison5'
     *  S-Function (sfix_bitop): '<S528>/Bitwise Logical Operator4'
     *  S-Function (sfix_bitop): '<S613>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S613>/Bitwise Operator5'
     */
    rtb_VariantMergeForOutportImpls = ((((VeSTAR_g_GenStrTypReg_DS &
        KeSTAR_g_ImplsStrt_Dsbl3) <= 0U) && ((((sint32)
        rtb_TmpSignalConversionAtVeST_m) & 16) <= 0)) &&
        (rtb_VariantMergeForOutportCmd_n || ((VeSTAR_g_GenStrTypReg_DS & 32768U)
        > 0U)));

    /* VariantMerge generated from: '<S562>/EMStrt' incorporates:
     *  Constant: '<S606>/Constant8'
     *  Constant: '<S609>/Calib'
     *  Constant: '<S614>/Constant6'
     *  DataStoreRead: '<S501>/Data Store Read1'
     *  Logic: '<S614>/Logical1'
     *  Logic: '<S614>/Logical26'
     *  Logic: '<S614>/Logical3'
     *  RelationalOperator: '<S614>/Comparison2'
     *  RelationalOperator: '<S614>/Comparison5'
     *  S-Function (sfix_bitop): '<S614>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S614>/Bitwise Operator5'
     */
    rtb_VariantMergeForOutportEMStr = ((((VeSTAR_g_GenStrTypReg_DS &
        KeSTAR_g_EMStrt_Dsbl3) <= 0U) && rtb_VariantMergeForOutportEMStr) &&
        (rtb_Logical3_a || ((VeSTAR_g_GenStrTypReg_DS & 65536U) > 0U)));

    /* End of Outputs for SubSystem: '<S504>/VarSS_P2p5InitTyp' */
    /* End of Outputs for SubSystem: '<S562>/P2p5_Equpd' */
#else

    /* Outputs for Atomic SubSystem: '<S562>/NoP2p5' */
    /* VariantMerge generated from: '<S562>/CltchStrt' incorporates:
     *  Constant: '<S605>/FALSE Constant4'
     */
    rtb_VariantMergeForOutportCltch = false;

    /* VariantMerge generated from: '<S562>/ImplsStrt' incorporates:
     *  Constant: '<S605>/FALSE Constant5'
     */
    rtb_VariantMergeForOutportImpls = false;

    /* VariantMerge generated from: '<S562>/EMStrt' incorporates:
     *  Constant: '<S605>/FALSE Constant6'
     */
    rtb_VariantMergeForOutportEMStr = false;

    /* VariantMerge generated from: '<S562>/EMLPS' incorporates:
     *  Constant: '<S605>/FALSE Constant7'
     */
    rtb_VariantMergeForOutportEMLPS = false;

    /* End of Outputs for SubSystem: '<S562>/NoP2p5' */
#endif

    /* End of Logic: '<S504>/Logical23' */
    /* End of Outputs for SubSystem: '<S504>/VarSS_P2p5Types' */

    /* Switch: '<S503>/Switch10' */
    if (rtb_VariantMergeForOutportCltch)
    {
        /* Switch: '<S503>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S513>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_ok |= (uint16)1024;
    }

    /* End of Switch: '<S503>/Switch10' */

    /* Switch: '<S503>/Switch11' */
    if (rtb_VariantMergeForOutportImpls)
    {
        /* Switch: '<S503>/Switch11' incorporates:
         *  S-Function (sfix_bitop): '<S514>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_ok |= (uint16)2048;
    }

    /* End of Switch: '<S503>/Switch11' */

    /* Switch: '<S503>/Switch13' */
    if (rtb_VariantMergeForOutportEMStr)
    {
        /* Switch: '<S503>/Switch13' incorporates:
         *  S-Function (sfix_bitop): '<S516>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_ok |= (uint16)4096;
    }

    /* End of Switch: '<S503>/Switch13' */

    /* Switch: '<S503>/Switch9' */
    if (rtb_VariantMergeForOutportEMLPS)
    {
        /* Switch: '<S503>/Switch15' incorporates:
         *  S-Function (sfix_bitop): '<S526>/FixPt Bitwise Operator1'
         *  Switch: '<S510>/Switch11'
         */
        VeSTAR_d_StrtTypEnbled = (uint16)(rtb_Switch1_ok | ((uint16)8192));
    }
    else
    {
        /* Switch: '<S503>/Switch15' incorporates:
         *  Switch: '<S510>/Switch11'
         */
        VeSTAR_d_StrtTypEnbled = rtb_Switch1_ok;
    }

    /* End of Switch: '<S503>/Switch9' */

    /* Switch: '<S509>/Switch1' */
    if (rtb_VariantMergeForOutportClt_o)
    {
        /* Switch: '<S509>/Switch1' incorporates:
         *  Constant: '<S505>/Calib'
         */
        rtb_Switch1_c = KaSTAR_k_StrtTypBasWght[0];
    }
    else
    {
        /* Switch: '<S509>/Switch1' incorporates:
         *  Constant: '<S509>/Constant6'
         */
        rtb_Switch1_c = -1;
    }

    /* End of Switch: '<S509>/Switch1' */

    /* Switch: '<S509>/Switch2' */
    if (rtb_VariantMergeForOutportEMS_d)
    {
        /* Switch: '<S509>/Switch2' incorporates:
         *  Constant: '<S505>/Calib'
         */
        rtb_Switch2_na = KaSTAR_k_StrtTypBasWght[1];
    }
    else
    {
        /* Switch: '<S509>/Switch2' incorporates:
         *  Constant: '<S509>/Constant6'
         */
        rtb_Switch2_na = -1;
    }

    /* End of Switch: '<S509>/Switch2' */

    /* Switch: '<S509>/Switch3' */
    if (rtb_Logical13_l)
    {
        /* Switch: '<S509>/Switch3' incorporates:
         *  Constant: '<S505>/Calib'
         */
        rtb_Switch3_n = KaSTAR_k_StrtTypBasWght[2];
    }
    else
    {
        /* Switch: '<S509>/Switch3' incorporates:
         *  Constant: '<S509>/Constant6'
         */
        rtb_Switch3_n = -1;
    }

    /* End of Switch: '<S509>/Switch3' */

    /* Switch: '<S509>/Switch4' */
    if (rtb_VariantMergeForOutportSTGCO)
    {
        /* Switch: '<S509>/Switch4' incorporates:
         *  Constant: '<S505>/Calib'
         */
        rtb_Switch4_gg = KaSTAR_k_StrtTypBasWght[3];
    }
    else
    {
        /* Switch: '<S509>/Switch4' incorporates:
         *  Constant: '<S509>/Constant6'
         */
        rtb_Switch4_gg = -1;
    }

    /* End of Switch: '<S509>/Switch4' */

    /* Switch: '<S509>/Switch5' */
    if (rtb_VariantMergeForOutportEMMd)
    {
        /* Switch: '<S509>/Switch5' incorporates:
         *  Constant: '<S505>/Calib'
         */
        rtb_Switch5_ay = KaSTAR_k_StrtTypBasWght[8];
    }
    else
    {
        /* Switch: '<S509>/Switch5' incorporates:
         *  Constant: '<S509>/Constant6'
         */
        rtb_Switch5_ay = -1;
    }

    /* End of Switch: '<S509>/Switch5' */

    /* Switch: '<S509>/Switch6' */
    if (rtb_VariantMergeForOutportImp_d)
    {
        /* Switch: '<S509>/Switch6' incorporates:
         *  Constant: '<S505>/Calib'
         */
        rtb_Switch6_o = KaSTAR_k_StrtTypBasWght[4];
    }
    else
    {
        /* Switch: '<S509>/Switch6' incorporates:
         *  Constant: '<S509>/Constant6'
         */
        rtb_Switch6_o = -1;
    }

    /* End of Switch: '<S509>/Switch6' */

    /* Switch: '<S509>/Switch7' */
    if (rtb_Logical7_o)
    {
        /* Switch: '<S509>/Switch7' incorporates:
         *  Constant: '<S505>/Calib'
         */
        rtb_Switch7_c = KaSTAR_k_StrtTypBasWght[5];
    }
    else
    {
        /* Switch: '<S509>/Switch7' incorporates:
         *  Constant: '<S509>/Constant6'
         */
        rtb_Switch7_c = -1;
    }

    /* End of Switch: '<S509>/Switch7' */

    /* Switch: '<S509>/Switch8' */
    if (rtb_Switch1_ak)
    {
        /* Switch: '<S509>/Switch8' incorporates:
         *  Constant: '<S505>/Calib'
         */
        rtb_Switch8_d = KaSTAR_k_StrtTypBasWght[6];
    }
    else
    {
        /* Switch: '<S509>/Switch8' incorporates:
         *  Constant: '<S509>/Constant6'
         */
        rtb_Switch8_d = -1;
    }

    /* End of Switch: '<S509>/Switch8' */

    /* Switch: '<S509>/Switch9' */
    if (rtb_Switch1_o)
    {
        /* Switch: '<S509>/Switch9' incorporates:
         *  Constant: '<S505>/Calib'
         */
        rtb_Switch9_i = KaSTAR_k_StrtTypBasWght[7];
    }
    else
    {
        /* Switch: '<S509>/Switch9' incorporates:
         *  Constant: '<S509>/Constant6'
         */
        rtb_Switch9_i = -1;
    }

    /* End of Switch: '<S509>/Switch9' */

    /* Switch: '<S509>/Switch10' */
    if (rtb_VariantMergeForOutportClt_n)
    {
        /* Switch: '<S509>/Switch10' incorporates:
         *  Constant: '<S505>/Calib'
         */
        rtb_Switch10_m = KaSTAR_k_StrtTypBasWght[9];
    }
    else
    {
        /* Switch: '<S509>/Switch10' incorporates:
         *  Constant: '<S509>/Constant6'
         */
        rtb_Switch10_m = -1;
    }

    /* End of Switch: '<S509>/Switch10' */

    /* Switch: '<S509>/Switch11' */
    if (rtb_VariantMergeForOutportCltch)
    {
        /* Switch: '<S509>/Switch11' incorporates:
         *  Constant: '<S505>/Calib'
         */
        rtb_Switch11_p = KaSTAR_k_StrtTypBasWght[10];
    }
    else
    {
        /* Switch: '<S509>/Switch11' incorporates:
         *  Constant: '<S509>/Constant6'
         */
        rtb_Switch11_p = -1;
    }

    /* End of Switch: '<S509>/Switch11' */

    /* Switch: '<S509>/Switch12' */
    if (rtb_VariantMergeForOutportImpls)
    {
        /* Switch: '<S509>/Switch12' incorporates:
         *  Constant: '<S505>/Calib'
         */
        rtb_Switch12_n = KaSTAR_k_StrtTypBasWght[11];
    }
    else
    {
        /* Switch: '<S509>/Switch12' incorporates:
         *  Constant: '<S509>/Constant6'
         */
        rtb_Switch12_n = -1;
    }

    /* End of Switch: '<S509>/Switch12' */

    /* Switch: '<S509>/Switch13' */
    if (rtb_VariantMergeForOutportEMStr)
    {
        /* Switch: '<S509>/Switch13' incorporates:
         *  Constant: '<S505>/Calib'
         */
        rtb_Switch13_j = KaSTAR_k_StrtTypBasWght[12];
    }
    else
    {
        /* Switch: '<S509>/Switch13' incorporates:
         *  Constant: '<S509>/Constant6'
         */
        rtb_Switch13_j = -1;
    }

    /* End of Switch: '<S509>/Switch13' */

    /* Switch: '<S509>/Switch14' */
    if (rtb_VariantMergeForOutportEMLPS)
    {
        /* Selector: '<S508>/Selector1' incorporates:
         *  Constant: '<S505>/Calib'
         */
        rtb_Selector1 = KaSTAR_k_StrtTypBasWght[13];
    }
    else
    {
        /* Selector: '<S508>/Selector1' incorporates:
         *  Constant: '<S509>/Constant6'
         */
        rtb_Selector1 = -1;
    }

    /* End of Switch: '<S509>/Switch14' */

    /* MinMax: '<S506>/MinMax' */
    if (rtb_Switch1_c > rtb_Switch2_na)
    {
        y = rtb_Switch1_c;
    }
    else
    {
        y = rtb_Switch2_na;
    }

    if (y <= rtb_Switch3_n)
    {
        y = rtb_Switch3_n;
    }

    if (y <= rtb_Switch4_gg)
    {
        y = rtb_Switch4_gg;
    }

    if (y <= rtb_Switch5_ay)
    {
        y = rtb_Switch5_ay;
    }

    if (y <= rtb_Switch6_o)
    {
        y = rtb_Switch6_o;
    }

    if (y <= rtb_Switch7_c)
    {
        y = rtb_Switch7_c;
    }

    if (y <= rtb_Switch8_d)
    {
        y = rtb_Switch8_d;
    }

    if (y <= rtb_Switch9_i)
    {
        y = rtb_Switch9_i;
    }

    if (y <= rtb_Switch10_m)
    {
        y = rtb_Switch10_m;
    }

    if (y <= rtb_Switch11_p)
    {
        y = rtb_Switch11_p;
    }

    if (y <= rtb_Switch12_n)
    {
        y = rtb_Switch12_n;
    }

    if (y <= rtb_Switch13_j)
    {
        y = rtb_Switch13_j;
    }

    if (y <= rtb_Selector1)
    {
        y = rtb_Selector1;
    }

    if (y > 0)
    {
        /* MinMax: '<S506>/MinMax' */
        VeSTAR_k_StrtTypFnlWght = y;
    }
    else
    {
        /* MinMax: '<S506>/MinMax' */
        VeSTAR_k_StrtTypFnlWght = 0;
    }

    /* End of MinMax: '<S506>/MinMax' */

    /* Gain: '<S615>/Gain' incorporates:
     *  Constant: '<S507>/CompressTest'
     *  Constant: '<S507>/NoAction'
     *  Constant: '<S507>/StopCtrld'
     *  Constant: '<S507>/StopImmed'
     */
    VaSTAR_K_StrtTypWghtMtrx[0] = -1;
    VaSTAR_K_StrtTypWghtMtrx[1] = rtb_Switch1_c;
    VaSTAR_K_StrtTypWghtMtrx[2] = rtb_Switch2_na;
    VaSTAR_K_StrtTypWghtMtrx[3] = rtb_Switch3_n;
    VaSTAR_K_StrtTypWghtMtrx[4] = rtb_Switch4_gg;
    VaSTAR_K_StrtTypWghtMtrx[5] = rtb_Switch6_o;
    VaSTAR_K_StrtTypWghtMtrx[6] = rtb_Switch7_c;
    VaSTAR_K_StrtTypWghtMtrx[7] = rtb_Switch8_d;
    VaSTAR_K_StrtTypWghtMtrx[8] = rtb_Switch9_i;
    VaSTAR_K_StrtTypWghtMtrx[9] = -1;
    VaSTAR_K_StrtTypWghtMtrx[10] = rtb_Switch5_ay;
    VaSTAR_K_StrtTypWghtMtrx[11] = -1;
    VaSTAR_K_StrtTypWghtMtrx[12] = -1;
    VaSTAR_K_StrtTypWghtMtrx[13] = rtb_Switch10_m;
    VaSTAR_K_StrtTypWghtMtrx[14] = rtb_Switch11_p;
    VaSTAR_K_StrtTypWghtMtrx[15] = rtb_Switch12_n;
    VaSTAR_K_StrtTypWghtMtrx[16] = rtb_Switch13_j;
    VaSTAR_K_StrtTypWghtMtrx[17] = rtb_Selector1;

    /* Switch: '<S510>/Switch11' incorporates:
     *  Constant: '<S501>/ExtSTEnbler'
     *  RelationalOperator: '<S510>/Comparison1'
     *  RelationalOperator: '<S510>/Comparison10'
     *  RelationalOperator: '<S510>/Comparison11'
     *  RelationalOperator: '<S510>/Comparison12'
     *  RelationalOperator: '<S510>/Comparison13'
     *  RelationalOperator: '<S510>/Comparison14'
     *  RelationalOperator: '<S510>/Comparison2'
     *  RelationalOperator: '<S510>/Comparison3'
     *  RelationalOperator: '<S510>/Comparison4'
     *  RelationalOperator: '<S510>/Comparison5'
     *  RelationalOperator: '<S510>/Comparison6'
     *  RelationalOperator: '<S510>/Comparison7'
     *  RelationalOperator: '<S510>/Comparison8'
     *  RelationalOperator: '<S510>/Comparison9'
     *  Selector: '<S508>/Selector1'
     *  Selector: '<S508>/Selector10'
     *  Selector: '<S508>/Selector11'
     *  Selector: '<S508>/Selector12'
     *  Selector: '<S508>/Selector13'
     *  Selector: '<S508>/Selector14'
     *  Selector: '<S508>/Selector2'
     *  Selector: '<S508>/Selector3'
     *  Selector: '<S508>/Selector4'
     *  Selector: '<S508>/Selector5'
     *  Selector: '<S508>/Selector6'
     *  Selector: '<S508>/Selector7'
     *  Selector: '<S508>/Selector8'
     *  Selector: '<S508>/Selector9'
     *  Switch: '<S510>/Switch1'
     *  Switch: '<S510>/Switch10'
     *  Switch: '<S510>/Switch12'
     *  Switch: '<S510>/Switch13'
     *  Switch: '<S510>/Switch14'
     *  Switch: '<S510>/Switch2'
     *  Switch: '<S510>/Switch3'
     *  Switch: '<S510>/Switch4'
     *  Switch: '<S510>/Switch5'
     *  Switch: '<S510>/Switch6'
     *  Switch: '<S510>/Switch7'
     *  Switch: '<S510>/Switch8'
     *  Switch: '<S510>/Switch9'
     */
    if (VeSTAR_k_StrtTypFnlWght == VaSTAR_K_StrtTypWghtMtrx
            [(CaSTAR_e_StrtTypPrty[0])])
    {
        /* Switch: '<S510>/Switch11' */
        rtb_Switch1_ok = CaSTAR_e_StrtTypPrty[0];
    }
    else if (VeSTAR_k_StrtTypFnlWght == VaSTAR_K_StrtTypWghtMtrx
             [(CaSTAR_e_StrtTypPrty[1])])
    {
        /* Switch: '<S510>/Switch11' incorporates:
         *  Switch: '<S510>/Switch1'
         */
        rtb_Switch1_ok = CaSTAR_e_StrtTypPrty[1];
    }
    else if (VeSTAR_k_StrtTypFnlWght == VaSTAR_K_StrtTypWghtMtrx
             [(CaSTAR_e_StrtTypPrty[2])])
    {
        /* Switch: '<S510>/Switch11' incorporates:
         *  Switch: '<S510>/Switch1'
         *  Switch: '<S510>/Switch2'
         */
        rtb_Switch1_ok = CaSTAR_e_StrtTypPrty[2];
    }
    else if (VeSTAR_k_StrtTypFnlWght == VaSTAR_K_StrtTypWghtMtrx
             [(CaSTAR_e_StrtTypPrty[3])])
    {
        /* Switch: '<S510>/Switch11' incorporates:
         *  Switch: '<S510>/Switch1'
         *  Switch: '<S510>/Switch2'
         *  Switch: '<S510>/Switch3'
         */
        rtb_Switch1_ok = CaSTAR_e_StrtTypPrty[3];
    }
    else if (VeSTAR_k_StrtTypFnlWght == VaSTAR_K_StrtTypWghtMtrx
             [(CaSTAR_e_StrtTypPrty[4])])
    {
        /* Switch: '<S510>/Switch11' incorporates:
         *  Switch: '<S510>/Switch1'
         *  Switch: '<S510>/Switch2'
         *  Switch: '<S510>/Switch3'
         *  Switch: '<S510>/Switch6'
         */
        rtb_Switch1_ok = CaSTAR_e_StrtTypPrty[4];
    }
    else if (VeSTAR_k_StrtTypFnlWght == VaSTAR_K_StrtTypWghtMtrx
             [(CaSTAR_e_StrtTypPrty[5])])
    {
        /* Switch: '<S510>/Switch11' incorporates:
         *  Switch: '<S510>/Switch1'
         *  Switch: '<S510>/Switch2'
         *  Switch: '<S510>/Switch3'
         *  Switch: '<S510>/Switch6'
         *  Switch: '<S510>/Switch7'
         */
        rtb_Switch1_ok = CaSTAR_e_StrtTypPrty[5];
    }
    else if (VeSTAR_k_StrtTypFnlWght == VaSTAR_K_StrtTypWghtMtrx
             [(CaSTAR_e_StrtTypPrty[6])])
    {
        /* Switch: '<S510>/Switch11' incorporates:
         *  Switch: '<S510>/Switch1'
         *  Switch: '<S510>/Switch2'
         *  Switch: '<S510>/Switch3'
         *  Switch: '<S510>/Switch6'
         *  Switch: '<S510>/Switch7'
         *  Switch: '<S510>/Switch8'
         */
        rtb_Switch1_ok = CaSTAR_e_StrtTypPrty[6];
    }
    else if (VeSTAR_k_StrtTypFnlWght == VaSTAR_K_StrtTypWghtMtrx
             [(CaSTAR_e_StrtTypPrty[7])])
    {
        /* Switch: '<S510>/Switch11' incorporates:
         *  Switch: '<S510>/Switch1'
         *  Switch: '<S510>/Switch13'
         *  Switch: '<S510>/Switch2'
         *  Switch: '<S510>/Switch3'
         *  Switch: '<S510>/Switch6'
         *  Switch: '<S510>/Switch7'
         *  Switch: '<S510>/Switch8'
         */
        rtb_Switch1_ok = CaSTAR_e_StrtTypPrty[7];
    }
    else if (VeSTAR_k_StrtTypFnlWght == VaSTAR_K_StrtTypWghtMtrx
             [(CaSTAR_e_StrtTypPrty[8])])
    {
        /* Switch: '<S510>/Switch11' incorporates:
         *  Switch: '<S510>/Switch1'
         *  Switch: '<S510>/Switch12'
         *  Switch: '<S510>/Switch13'
         *  Switch: '<S510>/Switch2'
         *  Switch: '<S510>/Switch3'
         *  Switch: '<S510>/Switch6'
         *  Switch: '<S510>/Switch7'
         *  Switch: '<S510>/Switch8'
         */
        rtb_Switch1_ok = CaSTAR_e_StrtTypPrty[8];
    }
    else if (VeSTAR_k_StrtTypFnlWght == VaSTAR_K_StrtTypWghtMtrx
             [(CaSTAR_e_StrtTypPrty[9])])
    {
        /* Switch: '<S510>/Switch11' incorporates:
         *  Switch: '<S510>/Switch1'
         *  Switch: '<S510>/Switch12'
         *  Switch: '<S510>/Switch13'
         *  Switch: '<S510>/Switch2'
         *  Switch: '<S510>/Switch3'
         *  Switch: '<S510>/Switch6'
         *  Switch: '<S510>/Switch7'
         *  Switch: '<S510>/Switch8'
         *  Switch: '<S510>/Switch9'
         */
        rtb_Switch1_ok = CaSTAR_e_StrtTypPrty[9];
    }
    else if (VeSTAR_k_StrtTypFnlWght == VaSTAR_K_StrtTypWghtMtrx
             [(CaSTAR_e_StrtTypPrty[10])])
    {
        /* Switch: '<S510>/Switch11' incorporates:
         *  Switch: '<S510>/Switch1'
         *  Switch: '<S510>/Switch10'
         *  Switch: '<S510>/Switch12'
         *  Switch: '<S510>/Switch13'
         *  Switch: '<S510>/Switch2'
         *  Switch: '<S510>/Switch3'
         *  Switch: '<S510>/Switch6'
         *  Switch: '<S510>/Switch7'
         *  Switch: '<S510>/Switch8'
         *  Switch: '<S510>/Switch9'
         */
        rtb_Switch1_ok = CaSTAR_e_StrtTypPrty[10];
    }
    else if (VeSTAR_k_StrtTypFnlWght == VaSTAR_K_StrtTypWghtMtrx
             [(CaSTAR_e_StrtTypPrty[11])])
    {
        /* Switch: '<S510>/Switch11' incorporates:
         *  Switch: '<S510>/Switch1'
         *  Switch: '<S510>/Switch10'
         *  Switch: '<S510>/Switch12'
         *  Switch: '<S510>/Switch13'
         *  Switch: '<S510>/Switch2'
         *  Switch: '<S510>/Switch3'
         *  Switch: '<S510>/Switch4'
         *  Switch: '<S510>/Switch6'
         *  Switch: '<S510>/Switch7'
         *  Switch: '<S510>/Switch8'
         *  Switch: '<S510>/Switch9'
         */
        rtb_Switch1_ok = CaSTAR_e_StrtTypPrty[11];
    }
    else if (VeSTAR_k_StrtTypFnlWght == VaSTAR_K_StrtTypWghtMtrx
             [(CaSTAR_e_StrtTypPrty[12])])
    {
        /* Switch: '<S510>/Switch11' incorporates:
         *  Switch: '<S510>/Switch1'
         *  Switch: '<S510>/Switch10'
         *  Switch: '<S510>/Switch12'
         *  Switch: '<S510>/Switch13'
         *  Switch: '<S510>/Switch2'
         *  Switch: '<S510>/Switch3'
         *  Switch: '<S510>/Switch4'
         *  Switch: '<S510>/Switch5'
         *  Switch: '<S510>/Switch6'
         *  Switch: '<S510>/Switch7'
         *  Switch: '<S510>/Switch8'
         *  Switch: '<S510>/Switch9'
         */
        rtb_Switch1_ok = CaSTAR_e_StrtTypPrty[12];
    }
    else if (VeSTAR_k_StrtTypFnlWght == VaSTAR_K_StrtTypWghtMtrx
             [(CaSTAR_e_StrtTypPrty[13])])
    {
        /* Switch: '<S510>/Switch14' incorporates:
         *  Switch: '<S510>/Switch1'
         *  Switch: '<S510>/Switch10'
         *  Switch: '<S510>/Switch11'
         *  Switch: '<S510>/Switch12'
         *  Switch: '<S510>/Switch13'
         *  Switch: '<S510>/Switch2'
         *  Switch: '<S510>/Switch3'
         *  Switch: '<S510>/Switch4'
         *  Switch: '<S510>/Switch5'
         *  Switch: '<S510>/Switch6'
         *  Switch: '<S510>/Switch7'
         *  Switch: '<S510>/Switch8'
         *  Switch: '<S510>/Switch9'
         */
        rtb_Switch1_ok = CaSTAR_e_StrtTypPrty[13];
    }
    else
    {
        /* Switch: '<S510>/Switch11' incorporates:
         *  Constant: '<S508>/Constant1'
         *  Switch: '<S510>/Switch1'
         *  Switch: '<S510>/Switch10'
         *  Switch: '<S510>/Switch12'
         *  Switch: '<S510>/Switch13'
         *  Switch: '<S510>/Switch14'
         *  Switch: '<S510>/Switch2'
         *  Switch: '<S510>/Switch3'
         *  Switch: '<S510>/Switch4'
         *  Switch: '<S510>/Switch5'
         *  Switch: '<S510>/Switch6'
         *  Switch: '<S510>/Switch7'
         *  Switch: '<S510>/Switch8'
         *  Switch: '<S510>/Switch9'
         */
        rtb_Switch1_ok = 0U;
    }

    /* End of Switch: '<S510>/Switch11' */

    /* VariantMerge generated from: '<S499>/StrtTyp' incorporates:
     *  DataTypeConversion: '<S616>/DataTypeConversion'
     */
    STAR_ac_B.VariantMergeForOutportStrtTyp = (TeSTRR_e_EngStrtStopType)
        rtb_Switch1_ok;

    /* Outputs for Atomic SubSystem: '<S466>/VarSS_Stage2Arb' */
#if Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    /* Outputs for Atomic SubSystem: '<S468>/P2p5_Equpd' */
    /* RelationalOperator: '<S471>/Comparison4' incorporates:
     *  RelationalOperator: '<S471>/Comparison1'
     *  RelationalOperator: '<S471>/Comparison2'
     *  RelationalOperator: '<S471>/Comparison8'
     *  VariantMerge generated from: '<S499>/StrtTyp'
     */
    rtb_TmpSignalConversionAtVeEN_l = STAR_ac_B.VariantMergeForOutportStrtTyp;

    /* RelationalOperator: '<S471>/Comparison4' incorporates:
     *  Constant: '<S475>/Constant'
     */
    rtb_TmpSignalConversionAtVeRTMR = (((uint32)rtb_TmpSignalConversionAtVeEN_l)
        == CeSTRR_e_AStrtCltchStrt);

    /* RelationalOperator: '<S471>/Comparison1' incorporates:
     *  Constant: '<S472>/Constant'
     */
    rtb_TmpSignalConversionAtVeSTRR = (((uint32)rtb_TmpSignalConversionAtVeEN_l)
        == CeSTRR_e_AStrtImpStrt);

    /* Logic: '<S471>/Logical26' incorporates:
     *  Constant: '<S476>/Constant'
     *  Constant: '<S483>/Constant'
     *  RelationalOperator: '<S471>/Comparison2'
     *  RelationalOperator: '<S471>/Comparison8'
     */
    rtb_VariantMergeForOutportCmd_n = ((((uint32)rtb_TmpSignalConversionAtVeEN_l)
        == CeSTRR_e_AStrtEMStrt) || (((uint32)rtb_TmpSignalConversionAtVeEN_l) ==
        CeSTRR_e_LoPwrEMStrt));

    /* Logic: '<S471>/Logical14' incorporates:
     *  Logic: '<S471>/Logical12'
     *  Logic: '<S471>/Logical17'
     */
    rtb_VariantMergeForOutportSTGCO = (((!rtb_TmpSignalConversionAtVeRTMR) &&
        (!rtb_TmpSignalConversionAtVeSTRR)) && (!rtb_VariantMergeForOutportCmd_n));

    /* Logic: '<S471>/Logical9' incorporates:
     *  Logic: '<S471>/Logical14'
     */
    rtb_Logical3_a = ((VeSTAR_b_CmdEngOnRaw) && rtb_VariantMergeForOutportSTGCO);

    /* RelationalOperator: '<S471>/Comparison9' incorporates:
     *  Constant: '<S481>/Constant'
     */
    rtb_VariantMergeForOutportEMLPS = (((uint32)rtb_TmpSignalConversionAtVeST_g)
        == CeSTRR_e_KeyOffSt);

    /* Logic: '<S471>/Logical16' incorporates:
     *  Constant: '<S478>/Constant'
     *  Constant: '<S479>/Constant'
     *  RelationalOperator: '<S471>/Comparison5'
     *  RelationalOperator: '<S471>/Comparison6'
     */
    rtb_VariantMergeForOutportCmdEn = ((((uint32)rtb_TmpSignalConversionAtVeES_d)
        >= CeESSR_e_RestartPrepSt) && (((uint32)rtb_TmpSignalConversionAtVeES_d)
        <= CeESSR_e_StrtEngOnlyChngMind));

    /* Logic: '<S471>/Logical11' incorporates:
     *  Logic: '<S471>/Logical12'
     */
    rtb_VariantMergeForOutportRemSt = (((!VeSTAR_b_CltchStrtCnfrm) &&
        (!VeSTAR_b_EMStrtCnfrm)) && (!VeSTAR_b_ImplsStrtCnfrm));

    /* Logic: '<S471>/Logical10' incorporates:
     *  Constant: '<S473>/Constant'
     *  Constant: '<S477>/Constant'
     *  Constant: '<S480>/Constant'
     *  Constant: '<S482>/Constant'
     *  Logic: '<S471>/Logical11'
     *  Logic: '<S471>/Logical22'
     *  Logic: '<S471>/Logical23'
     *  Logic: '<S471>/Logical24'
     *  Logic: '<S471>/Logical5'
     *  RelationalOperator: '<S471>/Comparison10'
     *  RelationalOperator: '<S471>/Comparison16'
     *  RelationalOperator: '<S471>/Comparison3'
     *  RelationalOperator: '<S471>/Comparison7'
     */
    rtb_VariantMergeForOutportCltch = (((rtb_Logical3_a &&
        (((rtb_VariantMergeForOutportEMLPS || (((uint32)
        rtb_TmpSignalConversionAtVeST_g) == CeSTRR_e_EngOffSt)) || (((uint32)
        rtb_TmpSignalConversionAtVeST_g) == CeSTRR_e_EngStoppingSt)) &&
         (!rtb_VariantMergeForOutportCmdEn))) && ((((uint32)
        rtb_TmpSignalConversionAtVeESSR) == CeESSR_e_CltchStrt) || (((uint32)
        rtb_TmpSignalConversionAtVeESSR) == CeESSR_e_EMStrt))) &&
        rtb_VariantMergeForOutportRemSt);

    /* Outputs for Atomic SubSystem: '<S471>/EdgeRising' */
    /* Logic: '<S484>/OR1' incorporates:
     *  UnitDelay: '<S484>/Unit Delay'
     */
    rtb_VariantMergeForOutportImpls = !STAR_ac_DW.UnitDelay_DSTATE_n;

    /* Update for UnitDelay: '<S484>/Unit Delay' */
    STAR_ac_DW.UnitDelay_DSTATE_n = rtb_VariantMergeForOutportCltch;

    /* Outputs for Atomic SubSystem: '<S471>/Signal Latch On With Reset1' */
    /* Logic: '<S487>/OR1' incorporates:
     *  Logic: '<S471>/Logical1'
     *  Logic: '<S471>/Logical2'
     *  Logic: '<S471>/Logical20'
     *  Logic: '<S484>/AND'
     *  Logic: '<S487>/NOT'
     *  Logic: '<S487>/OR'
     *  UnitDelay: '<S471>/Unit Delay'
     *  UnitDelay: '<S487>/Unit Delay'
     */
    rtb_VariantMergeForOutportCltch = ((rtb_VariantMergeForOutportCltch &&
        rtb_VariantMergeForOutportImpls) || (((rtb_Logical3_a &&
        (VeSTAR_b_CmdEngOnRaw)) && (!STAR_ac_DW.UnitDelay_DSTATE_k)) &&
        (STAR_ac_DW.UnitDelay_DSTATE_o)));

    /* End of Outputs for SubSystem: '<S471>/EdgeRising' */

    /* Update for UnitDelay: '<S487>/Unit Delay' */
    STAR_ac_DW.UnitDelay_DSTATE_o = rtb_VariantMergeForOutportCltch;

    /* End of Outputs for SubSystem: '<S471>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S471>/Stop Watch Reset Enabled' */
    /* Switch: '<S488>/Switch2' incorporates:
     *  Logic: '<S471>/Logical18'
     *  Switch: '<S488>/Switch1'
     */
    if (!rtb_VariantMergeForOutportCltch)
    {
        /* Switch: '<S488>/Switch1' incorporates:
         *  Constant: '<S488>/Constant Value2'
         */
        rtb_TmpSignalConversionAtVeBP_a = 0.0F;
    }
    else
    {
        /* Switch: '<S488>/Switch1' incorporates:
         *  Constant: '<S485>/Calib'
         *  Sum: '<S488>/Subtraction'
         *  Switch: '<S488>/Switch2'
         *  UnitDelay: '<S488>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeBP_a = HeSTAR_t_MedTEB_dT +
            STAR_ac_DW.UnitDelay_DSTATE;
    }

    /* End of Switch: '<S488>/Switch2' */

    /* Update for UnitDelay: '<S488>/Unit Delay' */
    STAR_ac_DW.UnitDelay_DSTATE = rtb_TmpSignalConversionAtVeBP_a;

    /* End of Outputs for SubSystem: '<S471>/Stop Watch Reset Enabled' */

    /* Logic: '<S471>/Logical4' */
    VeSTAR_b_CltchStrtCnfrmd = ((rtb_TmpSignalConversionAtVeRTMR &&
        (VeSTAR_b_CltchStrtCnfrm)) && (VeSTAR_b_CmdEngOnRaw));

    /* Logic: '<S471>/Logical7' */
    VeSTAR_b_ImplsStrtCnfrmd = ((rtb_TmpSignalConversionAtVeSTRR &&
        (VeSTAR_b_ImplsStrtCnfrm)) && (VeSTAR_b_CmdEngOnRaw));

    /* Logic: '<S471>/Logical8' */
    VeSTAR_b_EMStrtCnfrmd = ((rtb_VariantMergeForOutportCmd_n &&
        (VeSTAR_b_EMStrtCnfrm)) && (VeSTAR_b_CmdEngOnRaw));

    /* Switch: '<S471>/Switch1' incorporates:
     *  Logic: '<S471>/Logical6'
     */
    rtb_VariantMergeForOutportImpls = (((VeSTAR_b_CltchStrtCnfrmd) ||
        (VeSTAR_b_ImplsStrtCnfrmd)) || (VeSTAR_b_EMStrtCnfrmd));

    /* Logic: '<S471>/Logical13' incorporates:
     *  Logic: '<S471>/Logical29'
     */
    rtb_TmpSignalConversionAtVeRTMR = !rtb_VariantMergeForOutportCltch;

    /* VariantMerge generated from: '<S464>/CmdEngOnArb2' incorporates:
     *  Constant: '<S474>/Constant'
     *  Logic: '<S471>/Logical13'
     *  Logic: '<S471>/Logical15'
     *  Logic: '<S471>/Logical21'
     *  Logic: '<S471>/Logical25'
     *  Logic: '<S471>/Logical3'
     *  RelationalOperator: '<S471>/Comparison11'
     */
    rtb_VariantMergeForOutportCmdEn = (((rtb_Logical3_a ||
        rtb_VariantMergeForOutportImpls) || ((VeSTAR_b_CmdEngOnRaw) &&
        (rtb_VariantMergeForOutportCmdEn || (CeESSR_e_EngRunning == ((uint32)
        rtb_TmpSignalConversionAtVeES_d))))) && rtb_TmpSignalConversionAtVeRTMR);

    /* Switch: '<S471>/Switch1' */
    rtb_VariantMergeForOutportImpls = ((!rtb_VariantMergeForOutportEMLPS) ||
        rtb_VariantMergeForOutportImpls);

    /* Logic: '<S471>/Logical27' incorporates:
     *  Logic: '<S471>/Logical28'
     *  Logic: '<S471>/Logical30'
     */
    VeSTAR_b_StrtAllwd2 = ((rtb_VariantMergeForOutportImpls ||
                            (!VeSTAR_b_CmdEngOnRaw)) || (rtb_Logical3_a &&
                            rtb_TmpSignalConversionAtVeRTMR));

    /* VariantMerge generated from: '<S464>/StrtAllwd' incorporates:
     *  Logic: '<S471>/Logical31'
     */
    STAR_ac_B.VariantMergeForOutportStrtAllwd = ((VeSTAR_b_StrtAllwd2) &&
        rtb_TmpSignalConversionAtVeST_a);

    /* Update for UnitDelay: '<S471>/Unit Delay' incorporates:
     *  Constant: '<S486>/Calib'
     *  Logic: '<S471>/Logical12'
     *  Logic: '<S471>/Logical19'
     *  RelationalOperator: '<S471>/Comparison'
     */
    STAR_ac_DW.UnitDelay_DSTATE_k = ((rtb_TmpSignalConversionAtVeBP_a >=
        KeSTAR_t_P1fStrtWaitTm) && (rtb_VariantMergeForOutportRemSt &&
        rtb_VariantMergeForOutportSTGCO));

    /* End of Outputs for SubSystem: '<S468>/P2p5_Equpd' */
#else

    /* Outputs for Atomic SubSystem: '<S468>/NoP2p5' */
    /* VariantMerge generated from: '<S464>/CmdEngOnArb2' incorporates:
     *  Inport: '<S470>/CmdEngOnRaw'
     */
    rtb_VariantMergeForOutportCmdEn = VeSTAR_b_CmdEngOnRaw;

    /* VariantMerge generated from: '<S464>/StrtAllwd' incorporates:
     *  Inport: '<S470>/STFRStrtAllw'
     */
    STAR_ac_B.VariantMergeForOutportStrtAllwd = rtb_TmpSignalConversionAtVeST_a;

    /* End of Outputs for SubSystem: '<S468>/NoP2p5' */
#endif

    /* End of Outputs for SubSystem: '<S466>/VarSS_Stage2Arb' */

    /* Outputs for Atomic SubSystem: '<S466>/VarSS_TCMComm' */
#if Rte_SysCon_Variant_STAR_StrtDvc2p5Eqpd

    /* Outputs for Atomic SubSystem: '<S469>/P2p5_Equpd' */
    /* RelationalOperator: '<S490>/Comparison1' incorporates:
     *  RelationalOperator: '<S490>/Comparison2'
     *  RelationalOperator: '<S490>/Comparison3'
     *  RelationalOperator: '<S490>/Comparison4'
     *  Switch: '<S490>/Switch'
     *  Switch: '<S490>/Switch1'
     *  Switch: '<S490>/Switch4'
     *  VariantMerge generated from: '<S499>/StrtTyp'
     */
    rtb_TmpSignalConversionAtVeEN_l = STAR_ac_B.VariantMergeForOutportStrtTyp;

    /* RelationalOperator: '<S490>/Comparison1' incorporates:
     *  Constant: '<S492>/Constant'
     */
    rtb_TmpSignalConversionAtVeST_a = (((uint32)rtb_TmpSignalConversionAtVeEN_l)
        == CeSTRR_e_AStrtImpStrt);

    /* Switch: '<S490>/Switch' incorporates:
     *  Constant: '<S493>/Constant'
     *  Constant: '<S494>/Constant'
     *  Constant: '<S497>/Constant'
     *  Logic: '<S490>/Logical'
     *  Logic: '<S490>/Logical1'
     *  Logic: '<S490>/Logical2'
     *  Logic: '<S490>/Logical3'
     *  Logic: '<S490>/Logical4'
     *  Logic: '<S490>/Logical5'
     *  Logic: '<S490>/Logical6'
     *  RelationalOperator: '<S490>/Comparison2'
     *  RelationalOperator: '<S490>/Comparison3'
     *  RelationalOperator: '<S490>/Comparison4'
     *  Switch: '<S490>/Switch1'
     *  Switch: '<S490>/Switch4'
     */
    if (((((uint32)rtb_TmpSignalConversionAtVeEN_l) == CeSTRR_e_AStrtCltchStrt) ||
         ((VeSTAR_b_ImplsStrtCltchMd) && rtb_TmpSignalConversionAtVeST_a)) &&
            (VeSTAR_b_CmdEngOnRaw))
    {
        /* VariantMerge generated from: '<S464>/StrtTyp2TCM' incorporates:
         *  Constant: '<S495>/Constant'
         */
        STAR_ac_B.VariantMergeForOutportStrtTyp2T = CeSTRR_e_AStrtCltchStrt;
    }
    else if ((VeSTAR_b_CmdEngOnRaw) && ((rtb_TmpSignalConversionAtVeST_a &&
               (VeSTAR_b_ImplsStrtEMMd)) || ((((uint32)
                 rtb_TmpSignalConversionAtVeEN_l) == CeSTRR_e_AStrtEMStrt) ||
               (((uint32)rtb_TmpSignalConversionAtVeEN_l) ==
                CeSTRR_e_LoPwrEMStrt))))
    {
        /* Switch: '<S490>/Switch1' incorporates:
         *  Constant: '<S496>/Constant'
         *  VariantMerge generated from: '<S464>/StrtTyp2TCM'
         */
        STAR_ac_B.VariantMergeForOutportStrtTyp2T = CeSTRR_e_AStrtEMStrt;
    }
    else if (VeSTAR_b_CmdEngOnRaw)
    {
        /* Switch: '<S490>/Switch4' incorporates:
         *  Switch: '<S490>/Switch1'
         *  VariantMerge generated from: '<S464>/StrtTyp2TCM'
         */
        STAR_ac_B.VariantMergeForOutportStrtTyp2T =
            rtb_TmpSignalConversionAtVeEN_l;
    }
    else
    {
        /* VariantMerge generated from: '<S464>/StrtTyp2TCM' incorporates:
         *  Constant: '<S498>/Constant'
         *  Switch: '<S490>/Switch1'
         *  Switch: '<S490>/Switch4'
         */
        STAR_ac_B.VariantMergeForOutportStrtTyp2T = CeSTRR_e_NoAction;
    }

    /* End of Outputs for SubSystem: '<S469>/P2p5_Equpd' */
#else

    /* Outputs for Atomic SubSystem: '<S469>/NoP2p5' */
    /* VariantMerge generated from: '<S464>/StrtTyp2TCM' incorporates:
     *  Constant: '<S491>/Constant'
     */
    STAR_ac_B.VariantMergeForOutportStrtTyp2T = CeSTRR_e_NoAction;

    /* End of Outputs for SubSystem: '<S469>/NoP2p5' */
#endif

    /* End of Outputs for SubSystem: '<S466>/VarSS_TCMComm' */
    /* End of Outputs for SubSystem: '<S464>/NonBEV' */
#endif

    /* End of Outputs for SubSystem: '<S499>/BEV' */
    /* End of Outputs for SubSystem: '<S6>/VarSS_StrtTypSlctr' */
    /* End of Outputs for SubSystem: '<S5>/VarSS_Stage2Arb' */

    /* SignalConversion generated from: '<S5>/VarSS_Stage2Arb' */
    VeSTAR_b_CmdEngOnArb2 = rtb_VariantMergeForOutportCmdEn;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STAC_EngOnFnlCfg'
     */
    /* Outputs for Atomic SubSystem: '<S3>/VarSS_CmdEngOnFnl' */
#if Rte_SysCon_Variant_STAR_BEVVar

    /* Outputs for Atomic SubSystem: '<S8>/BEV' */
    /* DataStoreWrite: '<S9>/Data Store Write2' incorporates:
     *  Constant: '<S9>/false4'
     */
    VeSTAR_g_GenStrtStpReg_DS = 0U;

    /* VariantMerge generated from: '<S8>/CmdEngOnFnl' incorporates:
     *  Constant: '<S9>/false'
     */
    STAR_ac_B.VariantMergeForOutportCmdEngOnF = false;

    /* VariantMerge generated from: '<S8>/EngOffSTGCFnl' incorporates:
     *  Constant: '<S9>/true'
     */
    STAR_ac_B.VariantMergeForOutportEngOffSTG = true;

    /* VariantMerge generated from: '<S8>/RemStopFnl' incorporates:
     *  Constant: '<S9>/false2'
     */
    STAR_ac_B.VariantMergeForOutportRemStopFn = false;

    /* VariantMerge generated from: '<S8>/EngOnSTGCFnl' incorporates:
     *  Constant: '<S9>/false1'
     */
    STAR_ac_B.VariantMergeForOutportEngOnSTGC = false;

    /* VariantMerge generated from: '<S8>/RemStopESS' incorporates:
     *  Constant: '<S9>/false3'
     */
    STAR_ac_B.VariantMergeForOutportRemStopES = false;

    /* End of Outputs for SubSystem: '<S8>/BEV' */
#else

    /* Outputs for Atomic SubSystem: '<S8>/NonBEV' */
    /* Logic: '<S13>/Logical8' incorporates:
     *  Constant: '<S19>/Constant'
     *  Constant: '<S22>/Constant'
     *  Constant: '<S23>/Constant'
     *  Logic: '<S13>/Logical10'
     *  RelationalOperator: '<S13>/Comparison10'
     *  RelationalOperator: '<S13>/Comparison11'
     *  RelationalOperator: '<S13>/Comparison8'
     */
    rtb_TmpSignalConversionAtVeST_a = (((((uint32)
        rtb_TmpSignalConversionAtVeHSER) == CeHSER_e_InhibitStartStop) ||
        (((uint32)rtb_TmpSignalConversionAtVeHSER) == CeHSER_e_InhibitStop)) &&
        (((uint32)rtb_TmpSignalConversionAtVeES_d) == CeESSR_e_EngRunning));

    /* Switch: '<S11>/Switch10' */
    if (rtb_TmpSignalConversionAtVeST_a)
    {
        /* Switch: '<S11>/Switch10' incorporates:
         *  DataStoreRead: '<S10>/Data Store Read'
         *  S-Function (sfix_bitop): '<S16>/FixPt Bitwise Operator1'
         */
        rtb_TmpSignalConversionAtVeSTFR = VeSTAR_g_GenStrtStpReg_DS | 1024U;
    }
    else
    {
        /* Switch: '<S11>/Switch10' incorporates:
         *  DataStoreRead: '<S10>/Data Store Read'
         *  S-Function (sfix_bitop): '<S14>/FixPt Bitwise Operator3'
         *  S-Function (sfix_bitop): '<S14>/FixPt Bitwise Operator4'
         *  S-Function (sfix_bitop): '<S14>/FixPt Bitwise Operator5'
         */
        rtb_TmpSignalConversionAtVeSTFR = ~((~VeSTAR_g_GenStrtStpReg_DS) | 1024U);
    }

    /* End of Switch: '<S11>/Switch10' */

    /* Logic: '<S13>/Logical6' incorporates:
     *  Constant: '<S18>/Constant'
     *  Constant: '<S20>/Constant'
     *  Constant: '<S21>/Constant'
     *  Logic: '<S13>/Logical7'
     *  RelationalOperator: '<S13>/Comparison12'
     *  RelationalOperator: '<S13>/Comparison2'
     *  RelationalOperator: '<S13>/Comparison3'
     */
    rtb_VariantMergeForOutportCmdEn = ((((uint32)rtb_TmpSignalConversionAtVeES_d)
        == CeESSR_e_EngOff) && ((((uint32)rtb_TmpSignalConversionAtVeHSER) ==
        CeHSER_e_InhibitStartStop) || (((uint32)rtb_TmpSignalConversionAtVeHSER)
        == CeHSER_e_InhibitStart)));

    /* Switch: '<S11>/Switch11' incorporates:
     *  DataStoreWrite: '<S10>/Data Store Write2'
     *  S-Function (sfix_bitop): '<S15>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S15>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S15>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S17>/FixPt Bitwise Operator1'
     */
    if (rtb_VariantMergeForOutportCmdEn)
    {
        VeSTAR_g_GenStrtStpReg_DS = rtb_TmpSignalConversionAtVeSTFR | 2048U;
    }
    else
    {
        VeSTAR_g_GenStrtStpReg_DS = ~((~rtb_TmpSignalConversionAtVeSTFR) | 2048U);
    }

    /* End of Switch: '<S11>/Switch11' */

    /* Inport: '<Root>/VeSRAR_e_EngStrtStpOvrrd' */
    (void)Rte_Read_VeSRAR_e_EngStrtStpOvrrd_Value(&tmpRead_9);

    /* VariantMerge generated from: '<S8>/EngOnSTGCFnl' incorporates:
     *  Logic: '<S10>/Logical Operator5'
     */
    STAR_ac_B.VariantMergeForOutportEngOnSTGC = !VeSTAR_b_RemStop1;

    /* VariantMerge generated from: '<S8>/EngOffSTGCFnl' incorporates:
     *  Logic: '<S10>/Logical1'
     */
    STAR_ac_B.VariantMergeForOutportEngOffSTG = ((VeSTAR_b_EngOffAllwdSTGCRaw) ||
        (VeSTAR_b_RemStop1));

    /* Switch: '<S10>/Switch4' incorporates:
     *  Logic: '<S10>/Logical4'
     *  Switch: '<S10>/Switch5'
     */
    if (rtb_VariantMergeForOutportCmdEn || rtb_TmpSignalConversionAtVeST_a)
    {
        /* VariantMerge generated from: '<S8>/RemStopFnl' incorporates:
         *  UnitDelay: '<S10>/Unit Delay2'
         */
        STAR_ac_B.VariantMergeForOutportRemStopFn = STAR_ac_DW.UnitDelay2_DSTATE;

        /* VariantMerge generated from: '<S8>/CmdEngOnFnl' incorporates:
         *  UnitDelay: '<S10>/Unit Delay1'
         */
        STAR_ac_B.VariantMergeForOutportCmdEngOnF = STAR_ac_DW.UnitDelay1_DSTATE;
    }
    else
    {
        /* VariantMerge generated from: '<S8>/RemStopFnl' */
        STAR_ac_B.VariantMergeForOutportRemStopFn = VeSTAR_b_RemStop1;

        /* VariantMerge generated from: '<S8>/CmdEngOnFnl' */
        STAR_ac_B.VariantMergeForOutportCmdEngOnF = VeSTAR_b_CmdEngOnArb2;
    }

    /* End of Switch: '<S10>/Switch4' */

    /* VariantMerge generated from: '<S8>/RemStopESS' incorporates:
     *  Constant: '<S12>/Constant'
     *  Inport: '<Root>/VeSRAR_e_EngStrtStpOvrrd'
     *  Logic: '<S10>/Logical2'
     *  RelationalOperator: '<S10>/Comparison11'
     */
    STAR_ac_B.VariantMergeForOutportRemStopES =
        ((STAR_ac_B.VariantMergeForOutportRemStopFn) && (CeSTRR_e_OvrrdEngOff !=
          ((uint32)tmpRead_9)));

    /* Update for UnitDelay: '<S10>/Unit Delay2' */
    STAR_ac_DW.UnitDelay2_DSTATE = STAR_ac_B.VariantMergeForOutportRemStopFn;

    /* Update for UnitDelay: '<S10>/Unit Delay1' */
    STAR_ac_DW.UnitDelay1_DSTATE = STAR_ac_B.VariantMergeForOutportCmdEngOnF;

    /* End of Outputs for SubSystem: '<S8>/NonBEV' */
#endif

    /* End of Outputs for SubSystem: '<S3>/VarSS_CmdEngOnFnl' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSTAR_b_CmdEngOnFnl' incorporates:
     *  SignalConversion generated from: '<S1>/CmdEngOnFnl'
     */
    (void)Rte_Write_VeSTAR_b_CmdEngOnFnl_Value
        (STAR_ac_B.VariantMergeForOutportCmdEngOnF);

    /* Outport: '<Root>/VeSTAR_b_EngOffAllowedECM' incorporates:
     *  SignalConversion generated from: '<S1>/ECMOffAllwdRaw'
     */
    (void)Rte_Write_VeSTAR_b_EngOffAllowedECM_Value
        (STAR_ac_B.VariantMergeForOutportECMOffAll);

    /* Outport: '<Root>/VeSTAR_b_EngOffAllowed' incorporates:
     *  SignalConversion generated from: '<S1>/EngOffSTGCFnl'
     */
    (void)Rte_Write_VeSTAR_b_EngOffAllowed_Value
        (STAR_ac_B.VariantMergeForOutportEngOffSTG);

    /* Outport: '<Root>/VeSTAR_b_EngOnAllwdSTGC' incorporates:
     *  SignalConversion generated from: '<S1>/EngOnSTGCFnl'
     */
    (void)Rte_Write_VeSTAR_b_EngOnAllwdSTGC_Value
        (STAR_ac_B.VariantMergeForOutportEngOnSTGC);

    /* Outport: '<Root>/VeSTAR_e_EssSTGCRsn' incorporates:
     *  SignalConversion generated from: '<S1>/EssSTGCRsn'
     *  VariantMerge generated from: '<S24>/EssSTGCRsn'
     */
    (void)Rte_Write_VeSTAR_e_EssSTGCRsn_Value
        (STAR_ac_B.VariantMergeForOutportEssSTGCRs);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/STAO_WriteOPs'
     */
    /* Outport: '<Root>/VeSTAR_g_GenStrtStpReg' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read'
     *  SignalConversion generated from: '<S1>/GenStrtStpReg'
     */
    (void)Rte_Write_VeSTAR_g_GenStrtStpReg_Value(VeSTAR_g_GenStrtStpReg_DS);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSTAR_b_MaxEngOff' incorporates:
     *  SignalConversion generated from: '<S1>/MaxEngOff'
     */
    (void)Rte_Write_VeSTAR_b_MaxEngOff_Value
        (STAR_ac_B.VariantMergeForOutportMaxEngOff);

    /* Outport: '<Root>/VeSTAR_b_RemStopESS' incorporates:
     *  SignalConversion generated from: '<S1>/RemStopESS'
     */
    (void)Rte_Write_VeSTAR_b_RemStopESS_Value
        (STAR_ac_B.VariantMergeForOutportRemStopES);

    /* Outport: '<Root>/VeSTAR_b_RemedialStop' incorporates:
     *  SignalConversion generated from: '<S1>/RemStopFnl'
     */
    (void)Rte_Write_VeSTAR_b_RemedialStop_Value
        (STAR_ac_B.VariantMergeForOutportRemStopFn);

    /* Outport: '<Root>/VeSTAR_b_StrtAllwd' incorporates:
     *  SignalConversion generated from: '<S1>/StrtAllwd'
     */
    (void)Rte_Write_VeSTAR_b_StrtAllwd_Value
        (STAR_ac_B.VariantMergeForOutportStrtAllwd);

    /* Outport: '<Root>/VeSTAR_b_StrtChkMdUp' incorporates:
     *  SignalConversion generated from: '<S1>/StrtChkMdUpd'
     */
    (void)Rte_Write_VeSTAR_b_StrtChkMdUp_Value
        (STAR_ac_B.VariantMergeForOutportStrtChkMd);

    /* Outport: '<Root>/VeSTAR_e_StrtTypArbFnl' incorporates:
     *  SignalConversion generated from: '<S1>/StrtTyp'
     *  VariantMerge generated from: '<S499>/StrtTyp'
     */
    (void)Rte_Write_VeSTAR_e_StrtTypArbFnl_Value
        (STAR_ac_B.VariantMergeForOutportStrtTyp);

    /* Outport: '<Root>/VeSTAR_e_StrtTyp2TCM' incorporates:
     *  SignalConversion generated from: '<S1>/StrtTyp2TCM'
     *  VariantMerge generated from: '<S464>/StrtTyp2TCM'
     */
    (void)Rte_Write_VeSTAR_e_StrtTyp2TCM_Value
        (STAR_ac_B.VariantMergeForOutportStrtTyp2T);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
FUNC(void, STAR_CODE) STAR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/STAR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S617>/VeSTAR_g_GenStrtStpReg_Out_Init' */
    STAR_ac_B.OutportBufferForVeSTAR_g_GenStr = 0U;

    /* SignalConversion generated from: '<S617>/VeSTAR_b_CmdEngOnFnl_Out_Init' */
    STAR_ac_B.OutportBufferForVeSTAR_b_CmdEng = false;

    /* SignalConversion generated from: '<S617>/VeSTAR_e_StrtTypArbFnl_Out_Init' incorporates:
     *  Constant: '<S617>/Const3'
     */
    STAR_ac_B.OutportBufferForVeSTAR_e_StrtTy = STAR_ac_ConstB.Const3;

    /* SignalConversion generated from: '<S617>/VeSTAR_b_EngOnAllwdSTGC_Out_Init' */
    STAR_ac_B.OutportBufferForVeSTAR_b_EngOnA = false;

    /* SignalConversion generated from: '<S617>/VeSTAR_b_RemedialStop_Out_Init' */
    STAR_ac_B.OutportBufferForVeSTAR_b_Remedi = false;

    /* SignalConversion generated from: '<S617>/VeSTAR_e_StrtTyp2TCM_Out_Init' incorporates:
     *  Constant: '<S617>/Const6'
     */
    STAR_ac_B.OutportBufferForVeSTAR_e_Strt_n = STAR_ac_ConstB.Const6;

    /* SignalConversion generated from: '<S617>/VeSTAR_b_EngOffAllowed_Out_Init' */
    STAR_ac_B.OutportBufferForVeSTAR_b_EngOff = false;

    /* SignalConversion generated from: '<S617>/VeSTAR_b_EngOffAllowedECM_Out_Init' */
    STAR_ac_B.OutportBufferForVeSTAR_b_EngO_g = false;

    /* SignalConversion generated from: '<S617>/VeSTAR_b_MaxEngOff_Out_Init' */
    STAR_ac_B.OutportBufferForVeSTAR_b_MaxEng = false;

    /* SignalConversion generated from: '<S617>/VeSTAR_b_StrtChkMdUp_Out_Init' */
    STAR_ac_B.OutportBufferForVeSTAR_b_StrtCh = false;

    /* SignalConversion generated from: '<S617>/VeSTAR_b_StrtAllwd_Out_Init' */
    STAR_ac_B.OutportBufferForVeSTAR_b_StrtAl = false;

    /* SignalConversion generated from: '<S617>/VeSTAR_b_RemStopESS_Out_Init' */
    STAR_ac_B.OutportBufferForVeSTAR_b_RemSto = false;

    /* SignalConversion generated from: '<S617>/VeSTAR_e_EssSTGCRsn_Out_Init' incorporates:
     *  Constant: '<S617>/Const13'
     */
    STAR_ac_B.OutportBufferForVeSTAR_e_EssSTG = STAR_ac_ConstB.Const13;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeSTAR_b_CmdEngOnFnl' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTAR_b_CmdEngOnFnl_Out_Init'
     */
    (void)Rte_Write_VeSTAR_b_CmdEngOnFnl_Value
        (STAR_ac_B.OutportBufferForVeSTAR_b_CmdEng);

    /* Outport: '<Root>/VeSTAR_b_EngOffAllowedECM' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTAR_b_EngOffAllowedECM_Out_Init'
     */
    (void)Rte_Write_VeSTAR_b_EngOffAllowedECM_Value
        (STAR_ac_B.OutportBufferForVeSTAR_b_EngO_g);

    /* Outport: '<Root>/VeSTAR_b_EngOffAllowed' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTAR_b_EngOffAllowed_Out_Init'
     */
    (void)Rte_Write_VeSTAR_b_EngOffAllowed_Value
        (STAR_ac_B.OutportBufferForVeSTAR_b_EngOff);

    /* Outport: '<Root>/VeSTAR_b_EngOnAllwdSTGC' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTAR_b_EngOnAllwdSTGC_Out_Init'
     */
    (void)Rte_Write_VeSTAR_b_EngOnAllwdSTGC_Value
        (STAR_ac_B.OutportBufferForVeSTAR_b_EngOnA);

    /* Outport: '<Root>/VeSTAR_b_MaxEngOff' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTAR_b_MaxEngOff_Out_Init'
     */
    (void)Rte_Write_VeSTAR_b_MaxEngOff_Value
        (STAR_ac_B.OutportBufferForVeSTAR_b_MaxEng);

    /* Outport: '<Root>/VeSTAR_b_RemStopESS' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTAR_b_RemStopESS_Out_Init'
     */
    (void)Rte_Write_VeSTAR_b_RemStopESS_Value
        (STAR_ac_B.OutportBufferForVeSTAR_b_RemSto);

    /* Outport: '<Root>/VeSTAR_b_RemedialStop' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTAR_b_RemedialStop_Out_Init'
     */
    (void)Rte_Write_VeSTAR_b_RemedialStop_Value
        (STAR_ac_B.OutportBufferForVeSTAR_b_Remedi);

    /* Outport: '<Root>/VeSTAR_b_StrtAllwd' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTAR_b_StrtAllwd_Out_Init'
     */
    (void)Rte_Write_VeSTAR_b_StrtAllwd_Value
        (STAR_ac_B.OutportBufferForVeSTAR_b_StrtAl);

    /* Outport: '<Root>/VeSTAR_b_StrtChkMdUp' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTAR_b_StrtChkMdUp_Out_Init'
     */
    (void)Rte_Write_VeSTAR_b_StrtChkMdUp_Value
        (STAR_ac_B.OutportBufferForVeSTAR_b_StrtCh);

    /* Outport: '<Root>/VeSTAR_e_EssSTGCRsn' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTAR_e_EssSTGCRsn_Out_Init'
     *  SignalConversion generated from: '<S617>/VeSTAR_e_EssSTGCRsn_Out_Init'
     */
    (void)Rte_Write_VeSTAR_e_EssSTGCRsn_Value
        (STAR_ac_B.OutportBufferForVeSTAR_e_EssSTG);

    /* Outport: '<Root>/VeSTAR_e_StrtTyp2TCM' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTAR_e_StrtTyp2TCM_Out_Init'
     *  SignalConversion generated from: '<S617>/VeSTAR_e_StrtTyp2TCM_Out_Init'
     */
    (void)Rte_Write_VeSTAR_e_StrtTyp2TCM_Value
        (STAR_ac_B.OutportBufferForVeSTAR_e_Strt_n);

    /* Outport: '<Root>/VeSTAR_e_StrtTypArbFnl' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTAR_e_StrtTypArbFnl_Out_Init'
     *  SignalConversion generated from: '<S617>/VeSTAR_e_StrtTypArbFnl_Out_Init'
     */
    (void)Rte_Write_VeSTAR_e_StrtTypArbFnl_Value
        (STAR_ac_B.OutportBufferForVeSTAR_e_StrtTy);

    /* Outport: '<Root>/VeSTAR_g_GenStrtStpReg' incorporates:
     *  SignalConversion generated from: '<S2>/VeSTAR_g_GenStrtStpReg_Out_Init'
     */
    (void)Rte_Write_VeSTAR_g_GenStrtStpReg_Value
        (STAR_ac_B.OutportBufferForVeSTAR_g_GenStr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, STAR_CODE) STAR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/STAR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S617>/VeSTAR_e_StrtTypArbFnl_Out_Init' incorporates:
     *  Constant: '<S617>/Const3'
     */
    STAR_ac_B.OutportBufferForVeSTAR_e_StrtTy = STAR_ac_ConstB.Const3;

    /* SystemInitialize for SignalConversion generated from: '<S617>/VeSTAR_e_StrtTyp2TCM_Out_Init' incorporates:
     *  Constant: '<S617>/Const6'
     */
    STAR_ac_B.OutportBufferForVeSTAR_e_Strt_n = STAR_ac_ConstB.Const6;

    /* SystemInitialize for SignalConversion generated from: '<S617>/VeSTAR_e_EssSTGCRsn_Out_Init' incorporates:
     *  Constant: '<S617>/Const13'
     */
    STAR_ac_B.OutportBufferForVeSTAR_e_EssSTG = STAR_ac_ConstB.Const13;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeSTAR_e_StrtTypArbFnl' incorporates:
     *  Merge: '<Root>/Merge_Outport_3'
     */
    (void)Rte_Write_VeSTAR_e_StrtTypArbFnl_Value(CeSTRR_e_NoAction);

    /* SystemInitialize for Outport: '<Root>/VeSTAR_e_StrtTyp2TCM' incorporates:
     *  Merge: '<Root>/Merge_Outport_6'
     */
    (void)Rte_Write_VeSTAR_e_StrtTyp2TCM_Value(CeSTRR_e_NoAction);

    /* SystemInitialize for Outport: '<Root>/VeSTAR_e_EssSTGCRsn' incorporates:
     *  Merge: '<Root>/Merge_Outport_13'
     */
    (void)Rte_Write_VeSTAR_e_EssSTGCRsn_Value(CeSTRR_e_None);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
