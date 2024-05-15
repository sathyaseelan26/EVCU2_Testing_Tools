/*
 * File: EPCR_ac.c
 *
 * Code generated for Simulink model 'EPCR_ac'.
 *
 * Model version                  : 9.281
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:37:17 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EPCR_ac.h"
#include "look1_iflf_binlca_16a.h"
#include "look1_is32bflftf_binlca_16a.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_EPCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

static volatile CONST(boolean, EPCR_VAR_INIT) HeEPCR_b_Enable_DamperTwistEst = 0;/* Referenced by: '<S277>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) HeEPCR_t_FastTEF_dT = 0.005F;/* Referenced by:
                                                                      * '<S407>/Calib'
                                                                      * '<S264>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) HeEPCR_t_MedTED_dT = 0.02F;/* Referenced by: '<S372>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(uint16, EPCR_VAR_INIT) KaEPCR_Cnt_TE_InputSelector[3] =
{
    1U, 2U, 0U
} ;                                    /* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(uint16, EPCR_VAR_INIT) KaEPCR_Cnt_TE_MeasurmentSelector[3]
    =
{
    1U, 2U, 0U
} ;                                    /* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(float32, EPCR_VAR_INIT) KaEPCR_K_TE_CtlrAmatrix[9] =
{
    0.73499F, 0.23321F, -0.004772F, 0.26501F, 0.76679F, 0.004772F, 29.827F,
    -26.248F, 0.80552F
} ;                                    /* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(float32, EPCR_VAR_INIT) KaEPCR_K_TE_CtlrBmatrix[9] =
{
    -0.024836F, -0.0031447F, 7.5228E-5F, 0.0031447F, 0.022233F, 6.62E-5F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S131>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(float32, EPCR_VAR_INIT) KaEPCR_K_TE_CtlrCmatrix[9] =
{
    1.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S122>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(float32, EPCR_VAR_INIT) KaEPCR_K_TE_CtlrLmatrix[9] =
{
    0.46425F, 0.21312F, -0.0030812F, 0.21819F, 0.45655F, 0.0027841F, 0.0F, 0.0F,
    0.0F
} ;                                    /* Referenced by: '<S102>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(float32, EPCR_VAR_INIT) KaEPCR_K_TE_CtlrMmatrix[9] =
{
    0.62764F, 0.069335F, -0.00051762F, 0.069335F, 0.58754F, 0.00038631F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by: '<S104>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(boolean, EPCR_VAR_INIT) KaEPCR_b_EngStrtStp_Sel[22] =
{
    0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KaEPCR_l_LifterLeakMax[8] =
{
    2.5F, 3.4F, 2.5F, 3.4F, 2.5F, 3.4F, 2.5F, 3.4F
} ;                                    /* Referenced by: '<S347>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(uint8, EPCR_VAR_INIT) KeEPCR_Cnt_EngCylTotal = 8U;/* Referenced by:
                                                                      * '<S402>/Calib'
                                                                      * '<S27>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(sint16, EPCR_VAR_INIT) KeEPCR_Cnt_TE_NumMappedInputs = 3;/* Referenced by: '<S92>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_DmprSpringRate = 24.0F;/* Referenced by: '<S71>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_EngAngLeadCompGain =
    0.003F;                            /* Referenced by: '<S278>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_InputSpdFiltCoef = 1.0F;/* Referenced by: '<S140>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_SensedTiFiltCoef = 0.02F;/* Referenced by: '<S143>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpD0 = 0.0F;/* Referenced by: '<S198>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpD0_InParkOrNeutral =
    0.0F;                              /* Referenced by: '<S226>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpD1 = 0.0F;/* Referenced by: '<S199>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpD1_InParkOrNeutral =
    0.0F;                              /* Referenced by: '<S227>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpD2 = 0.0F;/* Referenced by: '<S200>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpD2_InParkOrNeutral =
    0.0F;                              /* Referenced by: '<S228>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpD3 = 0.389661103F;/* Referenced by: '<S201>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpD3_InParkOrNeutral =
    0.389661103F;                      /* Referenced by: '<S229>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpD4 = -1.32626295F;/* Referenced by: '<S202>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpD4_InParkOrNeutral =
    -1.32626295F;                      /* Referenced by: '<S230>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpN0 = 0.0F;/* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpN0_InParkOrNeutral =
    0.0F;                              /* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpN1 = 0.0F;/* Referenced by: '<S204>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpN1_InParkOrNeutral =
    0.0F;                              /* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpN2 = 0.0F;/* Referenced by: '<S205>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpN2_InParkOrNeutral =
    0.0F;                              /* Referenced by: '<S233>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpN3 = 0.00821228512F;/* Referenced by: '<S206>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpN3_InParkOrNeutral =
    0.00821228512F;                    /* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpN4 = 0.0420427F;/* Referenced by: '<S207>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpN4_InParkOrNeutral =
    0.0420427F;                        /* Referenced by: '<S235>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpN5 = 0.0131432F;/* Referenced by: '<S208>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TaShpN5_InParkOrNeutral =
    0.0131432F;                        /* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpD0 = 0.0F;/* Referenced by: '<S209>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpD0_InParkOrNeutral =
    0.0F;                              /* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpD1 = 0.0F;/* Referenced by: '<S210>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpD1_InParkOrNeutral =
    0.0F;                              /* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpD2 = -0.813327074F;/* Referenced by: '<S211>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpD2_InParkOrNeutral =
    -0.813327074F;                     /* Referenced by: '<S239>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpD3 = 2.39982724F;/* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpD3_InParkOrNeutral =
    2.39982724F;                       /* Referenced by: '<S240>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpD4 = -2.56068683F;/* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpD4_InParkOrNeutral =
    -2.56068683F;                      /* Referenced by: '<S241>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpN0 = 0.0F;/* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpN0_InParkOrNeutral =
    0.0F;                              /* Referenced by: '<S242>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpN1 = 0.0F;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpN1_InParkOrNeutral =
    0.0F;                              /* Referenced by: '<S243>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpN2 = 0.000673742325F;/* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpN2_InParkOrNeutral =
    0.000673742325F;                   /* Referenced by: '<S244>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpN3 = -0.0481732339F;/* Referenced by: '<S217>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpN3_InParkOrNeutral =
    -0.0481732339F;                    /* Referenced by: '<S245>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpN4 = 0.0409581885F;/* Referenced by: '<S218>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpN4_InParkOrNeutral =
    0.0409581885F;                     /* Referenced by: '<S246>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpN5 = 0.0329815F;/* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TbShpN5_InParkOrNeutral =
    0.0329815F;                        /* Referenced by: '<S247>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_TwistInternalSignConv =
    1.0F;                              /* Referenced by: '<S72>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_K_ValveOpenFilt = 0.35F;/* Referenced by:
                                                                      * '<S39>/Calib'
                                                                      * '<S43>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_M_MaxMtrACancelTorq = 75.0F;/* Referenced by: '<S155>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_M_MaxMtrBCancelTorq =
    125.0F;                            /* Referenced by: '<S156>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(boolean, EPCR_VAR_INIT) KeEPCR_b_CylTorqMdlAlwysOn = 0;/* Referenced by: '<S369>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(boolean, EPCR_VAR_INIT) KeEPCR_b_DelayDmprTorqEst = 0;/* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(boolean, EPCR_VAR_INIT) KeEPCR_b_FeedbkLmatrix = 1;/* Referenced by: '<S97>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(boolean, EPCR_VAR_INIT) KeEPCR_b_FeedbkMmatrix = 1;/* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(boolean, EPCR_VAR_INIT) KeEPCR_b_ReInitCylTorqMdl = 0;/* Referenced by: '<S396>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(boolean, EPCR_VAR_INIT) KeEPCR_b_TE_CalcDmprTwistEst = 0;/* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(boolean, EPCR_VAR_INIT) KeEPCR_b_TE_ResetEstimator = 0;/* Referenced by:
                                                                      * '<S120>/Calib'
                                                                      * '<S127>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(boolean, EPCR_VAR_INIT) KeEPCR_b_TE_UseTiTotal = 1;/* Referenced by: '<S138>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(boolean, EPCR_VAR_INIT) KeEPCR_b_UseHADRDmprTwist = 1;/* Referenced by: '<S74>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(boolean, EPCR_VAR_INIT) KeEPCR_b_UseTITRAct = 1;/* Referenced by: '<S75>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

static volatile CONST(TeEPCR_e_EngineAngleSourceSelector, EPCR_VAR_INIT)
    KeEPCR_e_EngineAngleSourceSelector = CeEPCR_e_EngnAngleFromBufferedCrank;/* Referenced by: '<S279>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_k_CylLeakGain = 0.07F;/* Referenced by: '<S335>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_k_CylLeakInitGain = 1.25F;/* Referenced by: '<S338>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_k_CylTorqMdlFlt = 0.5F;/* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_k_IntVlvOpenVsLift = 15.0F;/* Referenced by: '<S321>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_k_LiftAtIVCOffset = 0.3F;/* Referenced by: '<S322>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_k_LiftAtIVCvsRPM = 0.002F;/* Referenced by: '<S323>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_l_LifterLeakInc = 0.01F;/* Referenced by: '<S348>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_n_CylTorqRmpOffNiMax =
    700.0F;                            /* Referenced by: '<S408>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_n_EngAngleRawMinRPM = 0.0F;/* Referenced by: '<S280>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_phi_ExhVlvOpen = 530.0F;/* Referenced by:
                                                                      * '<S403>/Calib'
                                                                      * '<S358>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_phi_IntVlvOpen = 35.0F;/* Referenced by: '<S324>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_phi_SyncNotchOffset =
    -80.0F;                            /* Referenced by: '<S281>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_phi_TransLashEst = 3.0F;/* Referenced by: '<S282>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_t_CylTorqMdlInitTm = 0.3F;/* Referenced by: '<S260>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KeEPCR_t_CylTorqRmpOffFuelOnDly =
    0.75F;                             /* Referenced by: '<S373>/Calib' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KtEPCR_V_DispVsAngle[19] =
{
    0.065F, 0.0721F, 0.0935F, 0.1282F, 0.1744F, 0.23F, 0.2924F, 0.3589F, 0.4266F,
    0.4931F, 0.5561F, 0.614F, 0.6654F, 0.7095F, 0.7458F, 0.7741F, 0.7944F,
    0.8067F, 0.8109F
} ;                                    /* Referenced by: '<S405>/Vector' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(float32, EPCR_VAR_INIT) KtEPCR_k_EstFbkGainvsSpd[12] =
{
    0.0F, 0.0F, 0.0F, 0.5F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S116>/Vector' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KtEPCR_k_TorqRatioVsAngle[37] =
{
    -0.0177F, 0.0657F, 0.1442F, 0.2142F, 0.2724F, 0.3168F, 0.346F, 0.3598F,
    0.359F, 0.3454F, 0.3211F, 0.2888F, 0.2508F, 0.2093F, 0.1657F, 0.1211F,
    0.0761F, 0.0308F, -0.0148F, -0.0609F, -0.1078F, -0.1555F, -0.2036F, -0.2513F,
    -0.2974F, -0.3397F, -0.3758F, -0.4026F, -0.4173F, -0.4173F, -0.401F,
    -0.3681F, -0.3193F, -0.2566F, -0.183F, -0.102F, -0.0177F
} ;                                    /* Referenced by: '<S406>/Vector' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KtEPCR_l_IntakeLiftVsAngle[16] =
{
    314.0F, 285.0F, 269.0F, 264.0F, 260.0F, 256.0F, 253.0F, 250.0F, 248.0F,
    246.0F, 244.0F, 242.0F, 240.5F, 239.0F, 238.0F, 237.0F
} ;                                    /* Referenced by: '<S325>/Vector' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KxEPCR_V_DispVsAngle[19] =
{
    0.0F, 11.0F, 21.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    110.0F, 120.0F, 130.0F, 140.0F, 150.0F, 160.0F, 170.0F, 180.0F
} ;                                    /* Referenced by: '<S405>/Vector' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static volatile CONST(float32, EPCR_VAR_INIT) KxEPCR_k_EstFbkGainvsSpd[12] =
{
    0.0F, 100.0F, 201.0F, 300.0F, 400.0F, 500.0F, 600.0F, 700.0F, 800.0F,
    1000.0F, 3000.0F, 6000.0F
} ;                                    /* Referenced by: '<S116>/Vector' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KxEPCR_k_TorqRatioVsAngle[37] =
{
    0.0F, 11.0F, 20.0F, 30.0F, 40.0F, 51.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F,
    110.0F, 120.0F, 130.0F, 140.0F, 150.0F, 161.0F, 170.0F, 180.0F, 190.0F,
    200.0F, 210.0F, 220.0F, 230.0F, 240.0F, 250.0F, 260.0F, 270.0F, 280.0F,
    290.0F, 300.0F, 310.0F, 320.0F, 330.0F, 340.0F, 350.0F, 360.0F
} ;                                    /* Referenced by: '<S406>/Vector' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static volatile CONST(float32, EPCR_VAR_INIT) KxEPCR_l_IntakeLiftVsAngle[16] =
{
    0.0F, 0.3F, 0.4F, 0.6F, 0.8F, 1.1F, 1.2F, 1.4F, 1.6F, 1.8F, 2.0F, 2.2F, 2.4F,
    2.6F, 2.8F, 3.0F
} ;                                    /* Referenced by: '<S325>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_EPCR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_EPCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_EPCR_FuncEnable

static VAR(float32, EPCR_VAR_INIT) VaEPCR_M_CylTorq[8];/* '<S19>/ArrayAssignment1' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static VAR(float32, EPCR_VAR_INIT) VaEPCR_V_InitialCylVol[8];/* '<S320>/ArrayAssignment1' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static VAR(TeEPCR_e_LifterSt, EPCR_VAR_INIT) VaEPCR_e_LifterState[8];/* '<S15>/ArrayAssignment7' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static VAR(TeEPCR_e_ValveSt, EPCR_VAR_INIT) VaEPCR_e_ValveState[8];/* '<S15>/ArrayAssignment3' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static VAR(float32, EPCR_VAR_INIT) VaEPCR_l_LifterLeakDwn[8];/* '<S318>/ArrayAssignment7' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static VAR(float32, EPCR_VAR_INIT) VaEPCR_p_CylPres[8];/* '<S19>/ArrayAssignment2' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static VAR(float32, EPCR_VAR_INIT) VaEPCR_p_InitialCylPrs[8];/* '<S317>/ArrayAssignment1' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static VAR(float32, EPCR_VAR_INIT) VaEPCR_phi_IntVlvCls[8];/* '<S316>/ArrayAssignment7' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static VAR(float32, EPCR_VAR_INIT) VaEPCR_phi_IntVlvOpen[8];/* '<S316>/ArrayAssignment1' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static VAR(float32, EPCR_VAR_INIT) VaEPCR_x_TEMappedInputs[3];/* '<S84>/ArrayAssignment1' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static VAR(float32, EPCR_VAR_INIT) VaEPCR_x_TEMappedMeasurements[3];/* '<S85>/ArrayAssignment1' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static VAR(float32, EPCR_VAR_INIT) VaEPCR_x_TESSCtlOutput[3];/* '<S87>/Summation1' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static VAR(float32, EPCR_VAR_INIT) VaEPCR_x_TESSCtlOutputErr[3];/* '<S86>/ArrayAssignment3' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static VAR(float32, EPCR_VAR_INIT) VaEPCR_x_TESSCtlOutputStates[3];/* '<S87>/ArrayAssignment1' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static VAR(float32, EPCR_VAR_INIT) VaEPCR_x_TESSCtlrStates[3];/* '<S88>/ArrayAssignment1' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static VAR(float32, EPCR_VAR_INIT) VaEPCR_x_TE_FdkMatrixL[3];/* '<S83>/ArrayAssignment1' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static VAR(float32, EPCR_VAR_INIT) VaEPCR_x_TE_FdkMatrixM[3];/* '<S83>/ArrayAssignment2' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static VAR(float32, EPCR_VAR_INIT) VeEPCR_M_SensedTiFilt;/* '<S142>/Switch1' */

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static VAR(float32, EPCR_VAR_INIT) VeEPCR_M_TEEngTrq;/* '<S89>/Merge1' */

#endif

static VAR(float32, EPCR_VAR_INIT) VeEPCR_M_TotalCrankTorqRaw;/* synthesized block */

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static VAR(float32, EPCR_VAR_INIT) VeEPCR_M_TotalTiEst;/* '<S136>/Summation1' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static VAR(boolean, EPCR_VAR_INIT) VeEPCR_b_CalcCylDataEnaPulse;/* '<S363>/AND' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static VAR(boolean, EPCR_VAR_INIT) VeEPCR_b_CylTorqMdlInitialized_DS;/* '<Root>/DSM_1' */

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static VAR(float32, EPCR_VAR_INIT) VeEPCR_t_CylTorqMdlInitTmr_DS;/* '<Root>/DSM_2' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_EPCR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_EPCR
#include "MemMap.h"

CONST(ConstB_EPCR_ac_T, EPCR_VAR_INIT) EPCR_ac_ConstB =
{
    {
        CeEPCR_e_ValvesClosed, CeEPCR_e_ValvesClosed, CeEPCR_e_ValvesClosed,
        CeEPCR_e_ValvesClosed, CeEPCR_e_ValvesClosed, CeEPCR_e_ValvesClosed,
        CeEPCR_e_ValvesClosed, CeEPCR_e_ValvesClosed
    },                                 /* '<S411>/Constant' */

    {
        CeEPCR_e_LifterLeaking, CeEPCR_e_LifterLeaking, CeEPCR_e_LifterLeaking,
        CeEPCR_e_LifterLeaking, CeEPCR_e_LifterLeaking, CeEPCR_e_LifterLeaking,
        CeEPCR_e_LifterLeaking, CeEPCR_e_LifterLeaking
    }                                  /* '<S412>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_EPCR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_EPCR
#include "MemMap.h"

CONST(ConstP_EPCR_ac_T, EPCR_VAR_INIT) EPCR_ac_ConstP =
{
    /* Pooled Parameter (Expression: Value)
     * Referenced by:
     *   '<S412>/Constant'
     *   '<S63>/Constant'
     */
    {
        CeEPCR_e_LifterLeaking, CeEPCR_e_LifterLeaking, CeEPCR_e_LifterLeaking,
        CeEPCR_e_LifterLeaking, CeEPCR_e_LifterLeaking, CeEPCR_e_LifterLeaking,
        CeEPCR_e_LifterLeaking, CeEPCR_e_LifterLeaking
    },

    /* Pooled Parameter (Expression: Value)
     * Referenced by:
     *   '<S411>/Constant'
     *   '<S62>/Constant'
     */
    {
        CeEPCR_e_ValvesClosed, CeEPCR_e_ValvesClosed, CeEPCR_e_ValvesClosed,
        CeEPCR_e_ValvesClosed, CeEPCR_e_ValvesClosed, CeEPCR_e_ValvesClosed,
        CeEPCR_e_ValvesClosed, CeEPCR_e_ValvesClosed
    }
};

#define STOP_SEC_CONST_UNSPECIFIED_EPCR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_EPCR
#include "MemMap.h"

VAR(B_EPCR_ac_T, EPCR_VAR_INIT) EPCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_EPCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_EPCR
#include "MemMap.h"

VAR(DW_EPCR_ac_T, EPCR_VAR_INIT) EPCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_EPCR
#include "MemMap.h"
#if Rte_SysCon_Variant_EPCR_DamperTwistEst || Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

static FUNC(void, EPCR_CODE_LOCAL) EPCR_ac_Input4(VAR(float32, AUTOMATIC)
    rtu_In1, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

static FUNC(void, EPCR_CODE_LOCAL) EPCR_ac_BufferedCrankInput(VAR(float32,
    AUTOMATIC) rtu_VeEPSR_phi_CrkLctnMCP, P2VAR(float32, AUTOMATIC,
    EPCR_VAR_INIT) rty_EPCR_EngineAngle_MCP, P2VAR
    (TeEPCR_e_EngineAngleSourceSelector, AUTOMATIC, EPCR_VAR_INIT)
    rty_EPCR_EngineAngle_Source);

#endif

#if Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

static FUNC(void, EPCR_CODE_LOCAL) EPCR_ac_TransInSnsrInput(VAR(float32,
    AUTOMATIC) rtu_InputAngleWTwist, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT)
    rty_EPCR_InputAngleWTwist, P2VAR(TeEPCR_e_EngineAngleSourceSelector,
    AUTOMATIC, EPCR_VAR_INIT) rty_EPCR_EngineAngle_Source);

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static FUNC(void, EPCR_CODE_LOCAL) EPCR_ac_Case_8(CONST(float32, AUTOMATIC)
    rtu_In1[8], P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static FUNC(void, EPCR_CODE_LOCAL) EPCR_ac_Reset_TF(P2VAR(float32, AUTOMATIC,
    EPCR_VAR_INIT) rty_Out1, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out2,
    P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out3, P2VAR(float32, AUTOMATIC,
    EPCR_VAR_INIT) rty_Out4, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out5,
    P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out6, P2VAR(float32, AUTOMATIC,
    EPCR_VAR_INIT) rty_Out7, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out8,
    P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out9, P2VAR(float32, AUTOMATIC,
    EPCR_VAR_INIT) rty_Out10);

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

static FUNC(void, EPCR_CODE_LOCAL) EPCR_ac_Calc_TF(VAR(float32, AUTOMATIC)
    rtu_In1, VAR(float32, AUTOMATIC) rtu_In3, VAR(float32, AUTOMATIC) rtu_In4,
    VAR(float32, AUTOMATIC) rtu_In5, VAR(float32, AUTOMATIC) rtu_In6, VAR
    (float32, AUTOMATIC) rtu_In2, VAR(float32, AUTOMATIC) rtu_In7, VAR(float32,
    AUTOMATIC) rtu_In8, VAR(float32, AUTOMATIC) rtu_In9, VAR(float32, AUTOMATIC)
    rtu_In10, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out1, P2VAR(float32,
    AUTOMATIC, EPCR_VAR_INIT) rty_Out3, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT)
    rty_Out4, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out5, P2VAR(float32,
    AUTOMATIC, EPCR_VAR_INIT) rty_Out6, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT)
    rty_Out2, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out7, P2VAR(float32,
    AUTOMATIC, EPCR_VAR_INIT) rty_Out8, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT)
    rty_Out9, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out10);

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static FUNC(void, EPCR_CODE_LOCAL) EPCR_ac_DamperTwistAngEst_Init(void);

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static FUNC(void, EPCR_CODE_LOCAL) EPCR_ac_DamperTwistAngEst(void);

#endif

/*
 * Output and update for action system:
 *    '<S84>/Input4'
 *    '<S84>/Input1'
 *    '<S84>/Input2'
 *    '<S85>/Input4'
 *    '<S85>/Input1'
 *    '<S85>/Input2'
 *    '<S286>/Equal'
 */
#if Rte_SysCon_Variant_EPCR_DamperTwistEst || Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

static FUNC(void, EPCR_CODE_LOCAL) EPCR_ac_Input4(VAR(float32, AUTOMATIC)
    rtu_In1, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out1)
{
    /* Inport: '<S108>/In1' */
    *rty_Out1 = rtu_In1;
}

#endif

/* System initialize for atomic system: '<S66>/DamperTwistAngEst' */
#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static FUNC(void, EPCR_CODE_LOCAL) EPCR_ac_DamperTwistAngEst_Init(void)
{
    /* Start for If: '<S68>/If1' */
    EPCR_ac_DW.If1_ActiveSubsystem = -1;
}

#endif

/* Output and update for atomic system: '<S66>/DamperTwistAngEst' */
#if Rte_SysCon_Variant_EPCR_DamperTwistEst

static FUNC(void, EPCR_CODE_LOCAL) EPCR_ac_DamperTwistAngEst(void)
{
    sint32 i;
    float32 UnitDelay_DSTATE_b;
    float32 UnitDelay_DSTATE_o;
    float32 tmpRead;
    sint16 s124_iter;
    sint16 s83_iter;
    sint16 s84_iter;
    sint16 tmp;
    sint8 rtPrevAction;

    /* If: '<S68>/If1' incorporates:
     *  Constant: '<S79>/Constant'
     *  Constant: '<S80>/Calib'
     *  Constant: '<S92>/Calib'
     *  Inport: '<Root>/VeESPR_n_EngineSpeed'
     *  Inport: '<Root>/VeTITR_M_TiPostDamp_Raw'
     *  RelationalOperator: '<S68>/Comparison5'
     */
    rtPrevAction = EPCR_ac_DW.If1_ActiveSubsystem;
    EPCR_ac_DW.If1_ActiveSubsystem = (sint8)(((!KeEPCR_b_TE_CalcDmprTwistEst) ||
        (((uint32)EPCR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt) ==
         CeESSR_e_EngOff)) ? 1 : 0);
    if (EPCR_ac_DW.If1_ActiveSubsystem == 0)
    {
        (void)Rte_Read_VeESPR_n_EngineSpeed_Value(&UnitDelay_DSTATE_o);
        if (EPCR_ac_DW.If1_ActiveSubsystem != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S68>/EPCC_TwistAngleEstimator' incorporates:
             *  ActionPort: '<S78>/Resets'
             */
            for (i = 0; i < 3; i++)
            {
                /* InitializeConditions for If: '<S68>/If1' incorporates:
                 *  UnitDelay: '<S78>/UnitDelay1'
                 *  UnitDelay: '<S78>/UnitDelay2'
                 */
                EPCR_ac_DW.UnitDelay1_DSTATE_i[i] = 0.0F;
                EPCR_ac_DW.UnitDelay2_DSTATE_a[i] = 0.0F;
            }

            /* End of InitializeConditions for SubSystem: '<S68>/EPCC_TwistAngleEstimator' */

            /* SystemReset for IfAction SubSystem: '<S68>/EPCC_TwistAngleEstimator' incorporates:
             *  ActionPort: '<S78>/Resets'
             */
            /* SystemReset for Atomic SubSystem: '<S91>/DigitalLowpassResetEnabled' */
            /* SystemReset for If: '<S68>/If1' incorporates:
             *  UnitDelay: '<S139>/Unit Delay'
             *  UnitDelay: '<S142>/Unit Delay'
             */
            EPCR_ac_DW.UnitDelay_DSTATE_g = 0.0F;

            /* End of SystemReset for SubSystem: '<S91>/DigitalLowpassResetEnabled' */

            /* SystemReset for Atomic SubSystem: '<S90>/DigitalLowpassResetEnabled' */
            EPCR_ac_DW.UnitDelay_DSTATE_p = 0.0F;

            /* End of SystemReset for SubSystem: '<S90>/DigitalLowpassResetEnabled' */
            /* End of SystemReset for SubSystem: '<S68>/EPCC_TwistAngleEstimator' */
        }

        /* Outputs for IfAction SubSystem: '<S68>/EPCC_TwistAngleEstimator' incorporates:
         *  ActionPort: '<S78>/Resets'
         */
        /* Outputs for Iterator SubSystem: '<S78>/CalcFeedbackML' incorporates:
         *  ForIterator: '<S83>/States'
         */
        tmp = KeEPCR_Cnt_TE_NumMappedInputs;
        if (KeEPCR_Cnt_TE_NumMappedInputs < 0)
        {
            tmp = 0;
        }

        for (s83_iter = 0; s83_iter < tmp; s83_iter++)
        {
            /* Outputs for Iterator SubSystem: '<S83>/LMatrixCalcs' incorporates:
             *  ForIterator: '<S99>/BMatrixCol'
             */
            /* InitializeConditions for UnitDelay: '<S99>/UnitDelay' */
            UnitDelay_DSTATE_b = 0.0F;
            s84_iter = KeEPCR_Cnt_TE_NumMappedInputs;
            if (KeEPCR_Cnt_TE_NumMappedInputs < 0)
            {
                s84_iter = 0;
            }

            for (s124_iter = 0; s124_iter < s84_iter; s124_iter++)
            {
                /* Sum: '<S99>/Summation' incorporates:
                 *  Constant: '<S102>/Calib'
                 *  Product: '<S99>/Multiplication'
                 *  Selector: '<S99>/Selector1'
                 *  Selector: '<S99>/Selector2'
                 *  UnitDelay: '<S78>/UnitDelay1'
                 *  UnitDelay: '<S99>/UnitDelay'
                 */
                EPCR_ac_B.Summation_c = (KaEPCR_K_TE_CtlrLmatrix[(3 * s124_iter)
                    + s83_iter] * EPCR_ac_DW.UnitDelay1_DSTATE_i[s124_iter]) +
                    UnitDelay_DSTATE_b;

                /* Update for UnitDelay: '<S99>/UnitDelay' */
                UnitDelay_DSTATE_b = EPCR_ac_B.Summation_c;
            }

            /* End of Outputs for SubSystem: '<S83>/LMatrixCalcs' */

            /* Switch: '<S96>/Switch1' incorporates:
             *  Constant: '<S97>/Calib'
             */
            if (KeEPCR_b_FeedbkLmatrix)
            {
                /* Assignment: '<S83>/ArrayAssignment1' */
                VaEPCR_x_TE_FdkMatrixL[(s83_iter)] = EPCR_ac_B.Summation_c;
            }
            else
            {
                /* Assignment: '<S83>/ArrayAssignment1' incorporates:
                 *  Constant: '<S83>/Constant Value3'
                 */
                VaEPCR_x_TE_FdkMatrixL[(s83_iter)] = 0.0F;
            }

            /* End of Switch: '<S96>/Switch1' */

            /* Outputs for Iterator SubSystem: '<S83>/MMatrixCalcs1' incorporates:
             *  ForIterator: '<S100>/AMatrixCol'
             */
            /* InitializeConditions for UnitDelay: '<S100>/UnitDelay' */
            UnitDelay_DSTATE_b = 0.0F;
            s84_iter = KeEPCR_Cnt_TE_NumMappedInputs;
            if (KeEPCR_Cnt_TE_NumMappedInputs < 0)
            {
                s84_iter = 0;
            }

            for (s124_iter = 0; s124_iter < s84_iter; s124_iter++)
            {
                /* Sum: '<S100>/Summation' incorporates:
                 *  Constant: '<S104>/Calib'
                 *  Product: '<S100>/Multiplication'
                 *  Selector: '<S100>/Selector1'
                 *  Selector: '<S100>/Selector2'
                 *  UnitDelay: '<S100>/UnitDelay'
                 *  UnitDelay: '<S78>/UnitDelay1'
                 */
                EPCR_ac_B.Summation_e = (KaEPCR_K_TE_CtlrMmatrix[(3 * s124_iter)
                    + s83_iter] * EPCR_ac_DW.UnitDelay1_DSTATE_i[s124_iter]) +
                    UnitDelay_DSTATE_b;

                /* Update for UnitDelay: '<S100>/UnitDelay' */
                UnitDelay_DSTATE_b = EPCR_ac_B.Summation_e;
            }

            /* End of Outputs for SubSystem: '<S83>/MMatrixCalcs1' */

            /* Switch: '<S95>/Switch1' incorporates:
             *  Constant: '<S98>/Calib'
             */
            if (KeEPCR_b_FeedbkMmatrix)
            {
                /* Assignment: '<S83>/ArrayAssignment2' */
                VaEPCR_x_TE_FdkMatrixM[(s83_iter)] = EPCR_ac_B.Summation_e;
            }
            else
            {
                /* Assignment: '<S83>/ArrayAssignment2' incorporates:
                 *  Constant: '<S83>/Constant Value1'
                 */
                VaEPCR_x_TE_FdkMatrixM[(s83_iter)] = 0.0F;
            }

            /* End of Switch: '<S95>/Switch1' */
        }

        /* End of Outputs for SubSystem: '<S78>/CalcFeedbackML' */

        /* If: '<S89>/If2' incorporates:
         *  Constant: '<S134>/Calib'
         *  Constant: '<S92>/Calib'
         *  Inport: '<Root>/VeESPR_n_EngineSpeed'
         *  Selector: '<S89>/Selector'
         */
        if (KaEPCR_b_EngStrtStp_Sel
                [(EPCR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt)])
        {
            /* Outputs for IfAction SubSystem: '<S89>/Start' incorporates:
             *  ActionPort: '<S136>/Resets'
             */
            /* Sum: '<S136>/Summation1' */
            VeEPCR_M_TotalTiEst =
                EPCR_ac_B.TmpSignalConversionAtVeTITR_M_InputTorqA +
                EPCR_ac_B.VariantMergeForOutportPulseTorqEst;

            /* Switch: '<S137>/Switch1' incorporates:
             *  Constant: '<S138>/Calib'
             */
            if (KeEPCR_b_TE_UseTiTotal)
            {
                /* Merge: '<S89>/Merge1' */
                VeEPCR_M_TEEngTrq = VeEPCR_M_TotalTiEst;
            }
            else
            {
                /* Merge: '<S89>/Merge1' */
                VeEPCR_M_TEEngTrq = EPCR_ac_B.VariantMergeForOutportPulseTorqEst;
            }

            /* End of Switch: '<S137>/Switch1' */
            /* End of Outputs for SubSystem: '<S89>/Start' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S89>/ECMTrq' incorporates:
             *  ActionPort: '<S133>/Resets'
             */
            /* Merge: '<S89>/Merge1' incorporates:
             *  Inport: '<S133>/In11'
             */
            VeEPCR_M_TEEngTrq = EPCR_ac_B.Switch1;

            /* End of Outputs for SubSystem: '<S89>/ECMTrq' */
        }

        /* End of If: '<S89>/If2' */
        /* End of Outputs for SubSystem: '<S68>/EPCC_TwistAngleEstimator' */
        (void)Rte_Read_VeTITR_M_TiPostDamp_Raw_Value(&tmpRead);

        /* Outputs for IfAction SubSystem: '<S68>/EPCC_TwistAngleEstimator' incorporates:
         *  ActionPort: '<S78>/Resets'
         */
        /* Outputs for Atomic SubSystem: '<S91>/DigitalLowpassResetEnabled' */
        /* Switch: '<S142>/Switch1' incorporates:
         *  Constant: '<S143>/Calib'
         *  Inport: '<Root>/VeTITR_M_TiPostDamp_Raw'
         *  Product: '<S142>/Multiplication'
         *  Sum: '<S142>/Subtraction'
         *  Sum: '<S142>/Summation'
         *  UnitDelay: '<S142>/Unit Delay'
         */
        VeEPCR_M_SensedTiFilt = ((tmpRead - EPCR_ac_DW.UnitDelay_DSTATE_g) *
            KeEPCR_K_SensedTiFiltCoef) + EPCR_ac_DW.UnitDelay_DSTATE_g;

        /* Update for UnitDelay: '<S142>/Unit Delay' */
        EPCR_ac_DW.UnitDelay_DSTATE_g = VeEPCR_M_SensedTiFilt;

        /* End of Outputs for SubSystem: '<S91>/DigitalLowpassResetEnabled' */

        /* Outputs for Iterator SubSystem: '<S78>/EPCC_TE_BuildInputArray' incorporates:
         *  ForIterator: '<S84>/States'
         */
        tmp = KeEPCR_Cnt_TE_NumMappedInputs;
        if (KeEPCR_Cnt_TE_NumMappedInputs < 0)
        {
            tmp = 0;
        }

        for (s84_iter = 0; s84_iter < tmp; s84_iter++)
        {
            /* SwitchCase: '<S84>/Switch_Case' incorporates:
             *  Constant: '<S109>/Calib'
             *  Constant: '<S84>/Constant Value'
             *  Selector: '<S84>/Selector2'
             */
            switch (KaEPCR_Cnt_TE_InputSelector[(s84_iter)])
            {
              case 0:
                /* Outputs for IfAction SubSystem: '<S84>/Input4' incorporates:
                 *  ActionPort: '<S108>/Action Port'
                 */
                EPCR_ac_Input4(0.0F, &EPCR_ac_B.Merge_o);

                /* End of Outputs for SubSystem: '<S84>/Input4' */
                break;

              case 1:
                /* Outputs for IfAction SubSystem: '<S84>/Input1' incorporates:
                 *  ActionPort: '<S106>/Action Port'
                 */
                EPCR_ac_Input4(VeEPCR_M_SensedTiFilt, &EPCR_ac_B.Merge_o);

                /* End of Outputs for SubSystem: '<S84>/Input1' */
                break;

              case 2:
                /* Outputs for IfAction SubSystem: '<S84>/Input2' incorporates:
                 *  ActionPort: '<S107>/Action Port'
                 */
                EPCR_ac_Input4(VeEPCR_M_TEEngTrq, &EPCR_ac_B.Merge_o);

                /* End of Outputs for SubSystem: '<S84>/Input2' */
                break;

              default:
                /* no actions */
                break;
            }

            /* End of SwitchCase: '<S84>/Switch_Case' */

            /* Assignment: '<S84>/ArrayAssignment1' */
            VaEPCR_x_TEMappedInputs[(s84_iter)] = EPCR_ac_B.Merge_o;
        }

        /* End of Outputs for SubSystem: '<S78>/EPCC_TE_BuildInputArray' */

        /* Outputs for Atomic SubSystem: '<S90>/DigitalLowpassResetEnabled' */
        /* Sum: '<S139>/Summation' incorporates:
         *  Constant: '<S140>/Calib'
         *  Constant: '<S92>/Calib'
         *  Product: '<S139>/Multiplication'
         *  Sum: '<S139>/Subtraction'
         *  UnitDelay: '<S139>/Unit Delay'
         */
        EPCR_ac_DW.UnitDelay_DSTATE_p +=
            (EPCR_ac_B.TmpSignalConversionAtVeTISR_n_InputSpeed -
             EPCR_ac_DW.UnitDelay_DSTATE_p) * KeEPCR_K_InputSpdFiltCoef;

        /* End of Outputs for SubSystem: '<S90>/DigitalLowpassResetEnabled' */

        /* Outputs for Iterator SubSystem: '<S78>/EPCC_TE_BuildMeasurmentArray' incorporates:
         *  ForIterator: '<S85>/States'
         */
        tmp = KeEPCR_Cnt_TE_NumMappedInputs;
        if (KeEPCR_Cnt_TE_NumMappedInputs < 0)
        {
            tmp = 0;
        }

        for (s84_iter = 0; s84_iter < tmp; s84_iter++)
        {
            /* SwitchCase: '<S85>/Switch_Case' incorporates:
             *  Constant: '<S114>/Calib'
             *  Constant: '<S85>/Constant Value'
             *  Constant: '<S85>/rpm_rad_per_sec'
             *  Product: '<S85>/Product'
             *  Product: '<S85>/Product1'
             *  Selector: '<S85>/Selector1'
             *  Switch: '<S139>/Switch2'
             */
            switch (KaEPCR_Cnt_TE_MeasurmentSelector[(s84_iter)])
            {
              case 0:
                /* Outputs for IfAction SubSystem: '<S85>/Input4' incorporates:
                 *  ActionPort: '<S113>/Action Port'
                 */
                EPCR_ac_Input4(0.0F, &EPCR_ac_B.Merge);

                /* End of Outputs for SubSystem: '<S85>/Input4' */
                break;

              case 1:
                /* Outputs for IfAction SubSystem: '<S85>/Input1' incorporates:
                 *  ActionPort: '<S111>/Action Port'
                 */
                /* Outputs for Atomic SubSystem: '<S90>/DigitalLowpassResetEnabled' */
                EPCR_ac_Input4(EPCR_ac_DW.UnitDelay_DSTATE_p * 0.1047F,
                               &EPCR_ac_B.Merge);

                /* End of Outputs for SubSystem: '<S90>/DigitalLowpassResetEnabled' */
                /* End of Outputs for SubSystem: '<S85>/Input1' */
                break;

              case 2:
                /* Outputs for IfAction SubSystem: '<S85>/Input2' incorporates:
                 *  ActionPort: '<S112>/Action Port'
                 */
                EPCR_ac_Input4(0.1047F * UnitDelay_DSTATE_o, &EPCR_ac_B.Merge);

                /* End of Outputs for SubSystem: '<S85>/Input2' */
                break;

              default:
                /* no actions */
                break;
            }

            /* End of SwitchCase: '<S85>/Switch_Case' */

            /* Assignment: '<S85>/ArrayAssignment1' */
            VaEPCR_x_TEMappedMeasurements[(s84_iter)] = EPCR_ac_B.Merge;
        }

        /* End of Outputs for SubSystem: '<S78>/EPCC_TE_BuildMeasurmentArray' */

        /* Outputs for Iterator SubSystem: '<S78>/EPCC_TE_CalcOutputs' incorporates:
         *  ForIterator: '<S87>/States'
         */
        tmp = KeEPCR_Cnt_TE_NumMappedInputs;
        if (KeEPCR_Cnt_TE_NumMappedInputs < 0)
        {
            tmp = 0;
        }

        for (s83_iter = 0; s83_iter < tmp; s83_iter++)
        {
            /* Outputs for Iterator SubSystem: '<S87>/CMatrixCalcs' incorporates:
             *  ForIterator: '<S118>/CMatrixCol'
             */
            /* InitializeConditions for UnitDelay: '<S118>/UnitDelay' */
            UnitDelay_DSTATE_o = 0.0F;
            s84_iter = KeEPCR_Cnt_TE_NumMappedInputs;
            if (KeEPCR_Cnt_TE_NumMappedInputs < 0)
            {
                s84_iter = 0;
            }

            for (s124_iter = 0; s124_iter < s84_iter; s124_iter++)
            {
                /* Sum: '<S118>/Summation' incorporates:
                 *  Constant: '<S122>/Calib'
                 *  Product: '<S118>/Multiplication'
                 *  Selector: '<S118>/Selector1'
                 *  Selector: '<S118>/Selector2'
                 *  UnitDelay: '<S118>/UnitDelay'
                 *  UnitDelay: '<S78>/UnitDelay2'
                 */
                EPCR_ac_B.Summation_k = (KaEPCR_K_TE_CtlrCmatrix[(3 * s124_iter)
                    + s83_iter] * EPCR_ac_DW.UnitDelay2_DSTATE_a[s124_iter]) +
                    UnitDelay_DSTATE_o;

                /* Update for UnitDelay: '<S118>/UnitDelay' */
                UnitDelay_DSTATE_o = EPCR_ac_B.Summation_k;
            }

            /* End of Outputs for SubSystem: '<S87>/CMatrixCalcs' */

            /* Switch: '<S119>/Switch1' incorporates:
             *  Constant: '<S120>/Calib'
             */
            if (KeEPCR_b_TE_ResetEstimator)
            {
                /* Assignment: '<S87>/ArrayAssignment1' incorporates:
                 *  Constant: '<S87>/Constant Value'
                 */
                VaEPCR_x_TESSCtlOutputStates[(s83_iter)] = 0.0F;
            }
            else
            {
                /* Assignment: '<S87>/ArrayAssignment1' */
                VaEPCR_x_TESSCtlOutputStates[(s83_iter)] = EPCR_ac_B.Summation_k;
            }

            /* End of Switch: '<S119>/Switch1' */
            for (i = 0; i < 3; i++)
            {
                /* Sum: '<S87>/Summation1' incorporates:
                 *  Selector: '<S87>/Selector2'
                 *  UnitDelay: '<S78>/UnitDelay2'
                 */
                VaEPCR_x_TESSCtlOutput[(i)] = VaEPCR_x_TE_FdkMatrixL[(s83_iter)]
                    + EPCR_ac_DW.UnitDelay2_DSTATE_a[i];
            }
        }

        /* End of Outputs for SubSystem: '<S78>/EPCC_TE_CalcOutputs' */

        /* Assignment: '<S86>/ArrayAssignment1' incorporates:
         *  Assignment: '<S86>/ArrayAssignment3'
         *  Constant: '<S86>/Constant Value'
         *  Constant: '<S86>/Constant Value3'
         *  Constant: '<S86>/Constant Value9'
         *  Constant: '<S92>/Calib'
         *  Selector: '<S86>/Selector2'
         *  Selector: '<S86>/Selector5'
         *  Sum: '<S86>/Summation2'
         */
        VaEPCR_x_TESSCtlOutputErr[0] = VaEPCR_x_TEMappedMeasurements[0] -
            VaEPCR_x_TESSCtlOutputStates[0];

        /* Product: '<S86>/Product4' incorporates:
         *  Assignment: '<S86>/ArrayAssignment3'
         *  Constant: '<S86>/Constant Value1'
         *  Constant: '<S86>/Constant Value3'
         *  Constant: '<S86>/Constant Value4'
         *  Constant: '<S86>/Constant Value6'
         *  Constant: '<S86>/rad_per_s_rpm'
         *  Lookup_n-D: '<S116>/Vector'
         *  Product: '<S86>/Product2'
         *  Selector: '<S86>/Selector1'
         *  Selector: '<S86>/Selector4'
         *  Selector: '<S86>/Selector5'
         *  Sum: '<S86>/Summation1'
         */
        VaEPCR_x_TESSCtlOutputErr[1] = look1_iflf_binlca_16a
            (VaEPCR_x_TEMappedMeasurements[0] * 9.5493F, ((const float32 *)
              &(KxEPCR_k_EstFbkGainvsSpd[0])), ((const float32 *)
              &(KtEPCR_k_EstFbkGainvsSpd[0])), 11U) *
            (VaEPCR_x_TEMappedMeasurements[1] - VaEPCR_x_TESSCtlOutputStates[1]);

        /* Assignment: '<S86>/ArrayAssignment3' incorporates:
         *  Constant: '<S86>/Constant Value7'
         *  Constant: '<S86>/Constant Value8'
         */
        VaEPCR_x_TESSCtlOutputErr[2] = 0.0F;

        /* Outputs for Iterator SubSystem: '<S78>/EPCC_TE_CalcStateUpdate' incorporates:
         *  ForIterator: '<S88>/States'
         */
        tmp = KeEPCR_Cnt_TE_NumMappedInputs;
        if (KeEPCR_Cnt_TE_NumMappedInputs < 0)
        {
            tmp = 0;
        }

        for (s83_iter = 0; s83_iter < tmp; s83_iter++)
        {
            /* Outputs for Iterator SubSystem: '<S88>/AMatrixCalcs' incorporates:
             *  ForIterator: '<S124>/AMatrixCol'
             */
            /* InitializeConditions for UnitDelay: '<S124>/Unit Delay' */
            UnitDelay_DSTATE_o = 0.0F;
            s84_iter = KeEPCR_Cnt_TE_NumMappedInputs;
            if (KeEPCR_Cnt_TE_NumMappedInputs < 0)
            {
                s84_iter = 0;
            }

            for (s124_iter = 0; s124_iter < s84_iter; s124_iter++)
            {
                /* Sum: '<S124>/Summation' incorporates:
                 *  Constant: '<S129>/Calib'
                 *  Product: '<S124>/Multiplication'
                 *  Selector: '<S124>/Selector2'
                 *  Selector: '<S124>/Selector5'
                 *  UnitDelay: '<S124>/Unit Delay'
                 *  UnitDelay: '<S78>/UnitDelay2'
                 */
                EPCR_ac_B.Summation_o = (KaEPCR_K_TE_CtlrAmatrix[(3 * s124_iter)
                    + s83_iter] * EPCR_ac_DW.UnitDelay2_DSTATE_a[s124_iter]) +
                    UnitDelay_DSTATE_o;

                /* Update for UnitDelay: '<S124>/Unit Delay' */
                UnitDelay_DSTATE_o = EPCR_ac_B.Summation_o;
            }

            /* End of Outputs for SubSystem: '<S88>/AMatrixCalcs' */

            /* Outputs for Iterator SubSystem: '<S88>/BMatrixCalcs' incorporates:
             *  ForIterator: '<S125>/BMatrixCol'
             */
            /* InitializeConditions for UnitDelay: '<S125>/Unit Delay' */
            UnitDelay_DSTATE_o = 0.0F;
            s84_iter = KeEPCR_Cnt_TE_NumMappedInputs;
            if (KeEPCR_Cnt_TE_NumMappedInputs < 0)
            {
                s84_iter = 0;
            }

            for (s124_iter = 0; s124_iter < s84_iter; s124_iter++)
            {
                /* Sum: '<S125>/Summation' incorporates:
                 *  Constant: '<S131>/Calib'
                 *  Product: '<S125>/Multiplication'
                 *  Selector: '<S125>/Selector1'
                 *  Selector: '<S125>/Selector2'
                 *  UnitDelay: '<S125>/Unit Delay'
                 */
                EPCR_ac_B.Summation = (KaEPCR_K_TE_CtlrBmatrix[(3 * s124_iter) +
                                       s83_iter] * VaEPCR_x_TEMappedInputs
                                       [(s124_iter)]) + UnitDelay_DSTATE_o;

                /* Update for UnitDelay: '<S125>/Unit Delay' */
                UnitDelay_DSTATE_o = EPCR_ac_B.Summation;
            }

            /* End of Outputs for SubSystem: '<S88>/BMatrixCalcs' */

            /* Switch: '<S126>/Switch1' incorporates:
             *  Constant: '<S127>/Calib'
             */
            if (KeEPCR_b_TE_ResetEstimator)
            {
                /* Assignment: '<S88>/ArrayAssignment1' incorporates:
                 *  Constant: '<S88>/Constant Value'
                 *  Switch: '<S126>/Switch1'
                 */
                VaEPCR_x_TESSCtlrStates[(s83_iter)] = 0.0F;
            }
            else
            {
                /* Assignment: '<S88>/ArrayAssignment1' incorporates:
                 *  Selector: '<S88>/Selector1'
                 *  Sum: '<S88>/Summation'
                 *  Switch: '<S126>/Switch1'
                 */
                VaEPCR_x_TESSCtlrStates[(s83_iter)] = (VaEPCR_x_TE_FdkMatrixM
                    [(s83_iter)] + EPCR_ac_B.Summation_o) + EPCR_ac_B.Summation;
            }

            /* End of Switch: '<S126>/Switch1' */
        }

        /* End of Outputs for SubSystem: '<S78>/EPCC_TE_CalcStateUpdate' */

        /* Outputs for Atomic SubSystem: '<S78>/StateOutput' */
        /* Merge: '<S68>/Merge2' incorporates:
         *  Constant: '<S92>/Calib'
         *  Constant: '<S94>/Constant Value2'
         *  Constant: '<S94>/rad_to_deg'
         *  Product: '<S94>/Product1'
         *  Selector: '<S94>/Selector3'
         */
        EPCR_ac_B.VeEPCR_phi_Dmpr_TwstEst = VaEPCR_x_TESSCtlOutput[2] * 57.2958F;

        /* End of Outputs for SubSystem: '<S78>/StateOutput' */
        for (i = 0; i < 3; i++)
        {
            /* Update for UnitDelay: '<S78>/UnitDelay1' */
            EPCR_ac_DW.UnitDelay1_DSTATE_i[i] = VaEPCR_x_TESSCtlOutputErr[(i)];

            /* Update for UnitDelay: '<S78>/UnitDelay2' */
            EPCR_ac_DW.UnitDelay2_DSTATE_a[i] = VaEPCR_x_TESSCtlrStates[(i)];
        }

        /* End of Outputs for SubSystem: '<S68>/EPCC_TwistAngleEstimator' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S68>/NoAction' incorporates:
         *  ActionPort: '<S82>/Resets'
         */
        /* Merge: '<S68>/Merge2' incorporates:
         *  Constant: '<S82>/Constant Value'
         *  SignalConversion generated from: '<S82>/Twist_angle'
         */
        EPCR_ac_B.VeEPCR_phi_Dmpr_TwstEst = 0.0F;

        /* End of Outputs for SubSystem: '<S68>/NoAction' */
    }

    /* End of If: '<S68>/If1' */
}

#endif

/*
 * Output and update for action system:
 *    '<S268>/BufferedCrankInput'
 *    '<S268>/BufferedCrankInput1'
 */
#if Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

static FUNC(void, EPCR_CODE_LOCAL) EPCR_ac_BufferedCrankInput(VAR(float32,
    AUTOMATIC) rtu_VeEPSR_phi_CrkLctnMCP, P2VAR(float32, AUTOMATIC,
    EPCR_VAR_INIT) rty_EPCR_EngineAngle_MCP, P2VAR
    (TeEPCR_e_EngineAngleSourceSelector, AUTOMATIC, EPCR_VAR_INIT)
    rty_EPCR_EngineAngle_Source)
{
    /* Gain: '<S291>/Gain' */
    *rty_EPCR_EngineAngle_MCP = rtu_VeEPSR_phi_CrkLctnMCP;

    /* DataTypeConversion: '<S289>/DataTypeConversion' incorporates:
     *  Constant: '<S290>/Constant'
     */
    *rty_EPCR_EngineAngle_Source = CeEPCR_e_EngnAngleFromBufferedCrank;
}

#endif

/*
 * Output and update for action system:
 *    '<S268>/TransInSnsrInput'
 *    '<S268>/TransInSnsrInput1'
 */
#if Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

static FUNC(void, EPCR_CODE_LOCAL) EPCR_ac_TransInSnsrInput(VAR(float32,
    AUTOMATIC) rtu_InputAngleWTwist, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT)
    rty_EPCR_InputAngleWTwist, P2VAR(TeEPCR_e_EngineAngleSourceSelector,
    AUTOMATIC, EPCR_VAR_INIT) rty_EPCR_EngineAngle_Source)
{
    /* Gain: '<S306>/Gain' */
    *rty_EPCR_InputAngleWTwist = rtu_InputAngleWTwist;

    /* DataTypeConversion: '<S304>/DataTypeConversion' incorporates:
     *  Constant: '<S305>/Constant'
     */
    *rty_EPCR_EngineAngle_Source = CeEPCR_e_EngnAngleFromTransInSnsr;
}

#endif

/*
 * Output and update for action system:
 *    '<S17>/Case_8'
 *    '<S17>/Case_defalt'
 */
#if Rte_SysCon_Variant_EPCR_FuncEnable

static FUNC(void, EPCR_CODE_LOCAL) EPCR_ac_Case_8(CONST(float32, AUTOMATIC)
    rtu_In1[8], P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out1)
{
    /* Sum: '<S58>/Summation' incorporates:
     *  Constant: '<S58>/Constant Value1'
     *  Constant: '<S58>/Constant Value2'
     *  Constant: '<S58>/Constant Value3'
     *  Constant: '<S58>/Constant Value4'
     *  Constant: '<S58>/Constant Value5'
     *  Constant: '<S58>/Constant Value6'
     *  Constant: '<S58>/Constant Value7'
     *  Constant: '<S58>/Constant Value8'
     *  Selector: '<S58>/Selector1'
     *  Selector: '<S58>/Selector2'
     *  Selector: '<S58>/Selector3'
     *  Selector: '<S58>/Selector4'
     *  Selector: '<S58>/Selector5'
     *  Selector: '<S58>/Selector6'
     *  Selector: '<S58>/Selector7'
     *  Selector: '<S58>/Selector8'
     */
    *rty_Out1 = ((((((rtu_In1[0] + rtu_In1[1]) + rtu_In1[2]) + rtu_In1[3]) +
                   rtu_In1[4]) + rtu_In1[5]) + rtu_In1[6]) + rtu_In1[7];
}

#endif

/*
 * Output and update for action system:
 *    '<S196>/Reset_TF'
 *    '<S197>/Reset_TF'
 *    '<S224>/Reset_TF'
 *    '<S225>/Reset_TF'
 * Common block description:
 *   x.x
 */
#if Rte_SysCon_Variant_EPCR_FuncEnable

static FUNC(void, EPCR_CODE_LOCAL) EPCR_ac_Reset_TF(P2VAR(float32, AUTOMATIC,
    EPCR_VAR_INIT) rty_Out1, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out2,
    P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out3, P2VAR(float32, AUTOMATIC,
    EPCR_VAR_INIT) rty_Out4, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out5,
    P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out6, P2VAR(float32, AUTOMATIC,
    EPCR_VAR_INIT) rty_Out7, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out8,
    P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out9, P2VAR(float32, AUTOMATIC,
    EPCR_VAR_INIT) rty_Out10)
{
    /* SignalConversion generated from: '<S221>/Out1' incorporates:
     *  Constant: '<S221>/Constant Value'
     */
    *rty_Out1 = 0.0F;

    /* SignalConversion generated from: '<S221>/Out2' incorporates:
     *  Constant: '<S221>/Constant Value1'
     */
    *rty_Out2 = 0.0F;

    /* SignalConversion generated from: '<S221>/Out3' incorporates:
     *  Constant: '<S221>/Constant Value2'
     */
    *rty_Out3 = 0.0F;

    /* SignalConversion generated from: '<S221>/Out4' incorporates:
     *  Constant: '<S221>/Constant Value3'
     */
    *rty_Out4 = 0.0F;

    /* SignalConversion generated from: '<S221>/Out5' incorporates:
     *  Constant: '<S221>/Constant Value4'
     */
    *rty_Out5 = 0.0F;

    /* SignalConversion generated from: '<S221>/Out6' incorporates:
     *  Constant: '<S221>/Constant Value5'
     */
    *rty_Out6 = 0.0F;

    /* SignalConversion generated from: '<S221>/Out7' incorporates:
     *  Constant: '<S221>/Constant Value6'
     */
    *rty_Out7 = 0.0F;

    /* SignalConversion generated from: '<S221>/Out8' incorporates:
     *  Constant: '<S221>/Constant Value7'
     */
    *rty_Out8 = 0.0F;

    /* SignalConversion generated from: '<S221>/Out9' incorporates:
     *  Constant: '<S221>/Constant Value8'
     */
    *rty_Out9 = 0.0F;

    /* SignalConversion generated from: '<S221>/Out10' incorporates:
     *  Constant: '<S221>/Constant Value9'
     */
    *rty_Out10 = 0.0F;
}

#endif

/*
 * Output and update for action system:
 *    '<S196>/Calc_TF'
 *    '<S197>/Calc_TF'
 *    '<S224>/Calc_TF'
 *    '<S225>/Calc_TF'
 * Common block description:
 *   x.x
 */
#if Rte_SysCon_Variant_EPCR_FuncEnable

static FUNC(void, EPCR_CODE_LOCAL) EPCR_ac_Calc_TF(VAR(float32, AUTOMATIC)
    rtu_In1, VAR(float32, AUTOMATIC) rtu_In3, VAR(float32, AUTOMATIC) rtu_In4,
    VAR(float32, AUTOMATIC) rtu_In5, VAR(float32, AUTOMATIC) rtu_In6, VAR
    (float32, AUTOMATIC) rtu_In2, VAR(float32, AUTOMATIC) rtu_In7, VAR(float32,
    AUTOMATIC) rtu_In8, VAR(float32, AUTOMATIC) rtu_In9, VAR(float32, AUTOMATIC)
    rtu_In10, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out1, P2VAR(float32,
    AUTOMATIC, EPCR_VAR_INIT) rty_Out3, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT)
    rty_Out4, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out5, P2VAR(float32,
    AUTOMATIC, EPCR_VAR_INIT) rty_Out6, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT)
    rty_Out2, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out7, P2VAR(float32,
    AUTOMATIC, EPCR_VAR_INIT) rty_Out8, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT)
    rty_Out9, P2VAR(float32, AUTOMATIC, EPCR_VAR_INIT) rty_Out10)
{
    /* Inport: '<S220>/In1' */
    *rty_Out1 = rtu_In1;

    /* Inport: '<S220>/In3' */
    *rty_Out3 = rtu_In3;

    /* Inport: '<S220>/In4' */
    *rty_Out4 = rtu_In4;

    /* Inport: '<S220>/In5' */
    *rty_Out5 = rtu_In5;

    /* Inport: '<S220>/In6' */
    *rty_Out6 = rtu_In6;

    /* Inport: '<S220>/In2' */
    *rty_Out2 = rtu_In2;

    /* Inport: '<S220>/In7' */
    *rty_Out7 = rtu_In7;

    /* Inport: '<S220>/In8' */
    *rty_Out8 = rtu_In8;

    /* Inport: '<S220>/In9' */
    *rty_Out9 = rtu_In9;

    /* Inport: '<S220>/In10' */
    *rty_Out10 = rtu_In10;
}

#endif

/* Model step function for TID1 */
FUNC(void, EPCR_CODE) EPCR_FastTEF(void) /* Explicit Task: FastTEF */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

    float32 rtb_TmpSignalConversionAtVeESPR_phi_Engi;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    TeTSXR_e_ConstrntType tmpRead_0;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_TmpSignalConversionAtVaTSXR_r_HTDRTo[114];

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_TmpSignalConversionAtVaEPCR_p_Initia[8];

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_TmpSignalConversionAtLaEPCR_k_TorqRa[181];

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_TmpSignalConversionAtLaEPCR_V_Disp_h[181];

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_TmpSignalConversionAtVaEPCR_V_Initia[8];

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTRGR_e_VldtdT;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_TmpSignalConversionAtVaEPCR_phi_IntV[8];

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_TmpSignalConversionAtVaEPCR_phi_In_i[8];

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst || Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_Merge_fw;

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst || Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_Switch_cs;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_Switch1_jj;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_Switch1_n;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_TmpSignalConversionAtVePLTR_p_Ambi_e;

#endif

#if Rte_SysCon_Variant_EPCR_DamperTwistEst || Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_TmpSignalConversionAtVeHADR_M_DmprTo;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_TmpSignalConversionAtLeEPCR_phi_ExhV;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    sint16 s15_iter;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    uint8 rtb_TmpSignalConversionAtLeEPCR_Cnt_En_e;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    boolean rtb_TmpSignalConversionAtEnable_ReadOutp;

#endif

#if Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

    boolean rtb_AND3;

#endif

#if Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

    boolean rtb_AND_l;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable || Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

    float32 rtb_TmpSignalConversionAtVeTISR_n_Inpu_d;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    boolean rtb_OutportBufferForInitActive_write_c;

#endif

    sint32 i;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/EPCR_FastTEF'
     */
    /* SignalConversion generated from: '<S1>/VeTISR_n_InputSpeed' incorporates:
     *  SignalConversion generated from: '<S1>/VeESPR_phi_EngineAngle_MCP'
     */
#if Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

    /* SignalConversion generated from: '<S1>/VeTISR_n_InputSpeed' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value
        (&rtb_TmpSignalConversionAtVeTISR_n_Inpu_d);

    /* SignalConversion generated from: '<S1>/VeESPR_phi_EngineAngle_MCP' incorporates:
     *  Inport: '<Root>/VeESPR_phi_EngineAngle_MCP'
     */
    (void)Rte_Read_VeESPR_phi_EngineAngle_MCP_Value
        (&rtb_TmpSignalConversionAtVeESPR_phi_Engi);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTISR_n_InputSpeed' */

    /* SignalConversion generated from: '<S1>/VeTISR_n_InputSpeedRaw' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeedRaw'
     */
#if Rte_SysCon_Variant_EPCR_DamperTwistEst || Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

    (void)Rte_Read_VeTISR_n_InputSpeedRaw_Value
        (&EPCR_ac_B.TmpSignalConversionAtVeTISR_n_InputSpeed);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTISR_n_InputSpeedRaw' */

    /* SignalConversion generated from: '<S1>/Enable_Read' */
#if Rte_SysCon_Variant_EPCR_FuncEnable

    /* SignalConversion generated from: '<S1>/Enable_Read' incorporates:
     *  Merge: '<Root>/Enable_IRV_Merge'
     */
    rtb_TmpSignalConversionAtEnable_ReadOutp =
        Rte_IrvRead_EPCR_FastTEF_Enable_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S1>/Enable_Read' */

    /* SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
#if Rte_SysCon_Variant_EPCR_DamperTwistEst || Rte_SysCon_Variant_EPCR_FuncEnable

    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&EPCR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt);

#endif

    /* End of SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt' */

    /* SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  SignalConversion generated from: '<S1>/VaTSXR_r_HTDRToConstrn'
     */
#if Rte_SysCon_Variant_EPCR_FuncEnable

    /* SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTRGR_e_VldtdT);

    /* SignalConversion generated from: '<S1>/VaTSXR_r_HTDRToConstrn' incorporates:
     *  Inport: '<Root>/VaTSXR_r_HTDRToConstrn'
     */
    (void)Rte_Read_VaTSXR_r_HTDRToConstrn_Value
        (rtb_TmpSignalConversionAtVaTSXR_r_HTDRTo);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' */

    /* SignalConversion generated from: '<S1>/VeHADR_M_DmprTorqEst' incorporates:
     *  Inport: '<Root>/VeTITR_M_InputTorqAct'
     *  SignalConversion generated from: '<S1>/VeTITR_M_InputTorqAct'
     */
#if Rte_SysCon_Variant_EPCR_DamperTwistEst

    /* SignalConversion generated from: '<S1>/VeHADR_M_DmprTorqEst' incorporates:
     *  Inport: '<Root>/VeHADR_M_DmprTorqEst'
     */
    (void)Rte_Read_VeHADR_M_DmprTorqEst_Value
        (&rtb_TmpSignalConversionAtVeHADR_M_DmprTo);
    (void)Rte_Read_VeTITR_M_InputTorqAct_Value
        (&EPCR_ac_B.TmpSignalConversionAtVeTITR_M_InputTorqA);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHADR_M_DmprTorqEst' */

    /* SignalConversion generated from: '<S1>/VePLTR_p_AmbientAirPrs' incorporates:
     *  SignalConversion generated from: '<S1>/LaEPCR_V_DispVsAngle_Read'
     *  SignalConversion generated from: '<S1>/LaEPCR_k_TorqRatioVsAngle_Read'
     *  SignalConversion generated from: '<S1>/LeEPCR_Cnt_EngCylTotal_Read'
     *  SignalConversion generated from: '<S1>/LeEPCR_phi_ExhVlvOpen_Read'
     *  SignalConversion generated from: '<S1>/VaEPCR_V_InitialCylVol_Read'
     *  SignalConversion generated from: '<S1>/VaEPCR_p_InitialCylPrs_Read'
     *  SignalConversion generated from: '<S1>/VaEPCR_phi_IntVlvCls_Read'
     *  SignalConversion generated from: '<S1>/VaEPCR_phi_IntVlvOpen_Read'
     */
#if Rte_SysCon_Variant_EPCR_FuncEnable

    /* SignalConversion generated from: '<S1>/VePLTR_p_AmbientAirPrs' incorporates:
     *  Inport: '<Root>/VePLTR_p_AmbientAirPrs'
     */
    (void)Rte_Read_VePLTR_p_AmbientAirPrs_Value
        (&rtb_TmpSignalConversionAtVePLTR_p_Ambi_e);

    /* SignalConversion generated from: '<S1>/VaEPCR_p_InitialCylPrs_Read' */
    Rte_IrvRead_EPCR_FastTEF_VaEPCR_p_InitialCylPrs_write_IRV
        (rtb_TmpSignalConversionAtVaEPCR_p_Initia);

    /* SignalConversion generated from: '<S1>/VaEPCR_V_InitialCylVol_Read' */
    Rte_IrvRead_EPCR_FastTEF_VaEPCR_V_InitialCylVol_write_IRV
        (rtb_TmpSignalConversionAtVaEPCR_V_Initia);

    /* SignalConversion generated from: '<S1>/LeEPCR_phi_ExhVlvOpen_Read' incorporates:
     *  SignalConversion generated from: '<S4>/LeEPCR_phi_ExhVlvOpen_write'
     */
    rtb_TmpSignalConversionAtLeEPCR_phi_ExhV =
        Rte_IrvRead_EPCR_FastTEF_LeEPCR_phi_ExhVlvOpen_write_IRV();

    /* SignalConversion generated from: '<S1>/LaEPCR_k_TorqRatioVsAngle_Read' */
    Rte_IrvRead_EPCR_FastTEF_LaEPCR_k_TorqRatioVsAngle_write_IRV
        (rtb_TmpSignalConversionAtLaEPCR_k_TorqRa);

    /* SignalConversion generated from: '<S1>/LaEPCR_V_DispVsAngle_Read' */
    Rte_IrvRead_EPCR_FastTEF_LaEPCR_V_DispVsAngle_write1_IRV
        (rtb_TmpSignalConversionAtLaEPCR_V_Disp_h);

    /* SignalConversion generated from: '<S1>/LeEPCR_Cnt_EngCylTotal_Read' incorporates:
     *  SignalConversion generated from: '<S4>/LeEPCR_Cnt_EngCylTotal_write'
     */
    rtb_TmpSignalConversionAtLeEPCR_Cnt_En_e =
        Rte_IrvRead_EPCR_FastTEF_LeEPCR_Cnt_EngCylTotal_write1_IRV();

    /* SignalConversion generated from: '<S1>/VaEPCR_phi_IntVlvCls_Read' */
    Rte_IrvRead_EPCR_FastTEF_VaEPCR_phi_IntVlvCls_write_IRV
        (rtb_TmpSignalConversionAtVaEPCR_phi_IntV);

    /* SignalConversion generated from: '<S1>/VaEPCR_phi_IntVlvOpen_Read' */
    Rte_IrvRead_EPCR_FastTEF_VaEPCR_phi_IntVlvOpen_write_IRV
        (rtb_TmpSignalConversionAtVaEPCR_phi_In_i);

#endif

    /* End of SignalConversion generated from: '<S1>/VePLTR_p_AmbientAirPrs' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CalcDamperTwist'
     */

    /* Outputs for Atomic SubSystem: '<S6>/DamperTwistCalc' */
#if Rte_SysCon_Variant_EPCR_DamperTwistEst

    /* Outputs for Atomic SubSystem: '<S64>/DamperTwistEst' */
    /* Inport: '<Root>/VeETQR_M_EngTrqActual' */
    (void)Rte_Read_VeETQR_M_EngTrqActual_Value(&EPCR_ac_B.Switch1);

    /* Inport: '<Root>/VeESSR_M_Clch5_TorqCmd' */
    (void)Rte_Read_VeESSR_M_Clch5_TorqCmd_Value(&rtb_Switch_cs);

    /* Switch: '<S66>/Switch1' incorporates:
     *  Constant: '<S75>/Calib'
     *  Inport: '<Root>/VeETQR_M_EngTrqActual'
     */
    if (KeEPCR_b_UseTITRAct)
    {
        EPCR_ac_B.Switch1 = EPCR_ac_B.TmpSignalConversionAtVeTITR_M_InputTorqA;
    }

    /* End of Switch: '<S66>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S66>/DamperTwistAngEst' */
    EPCR_ac_DamperTwistAngEst();

    /* End of Outputs for SubSystem: '<S66>/DamperTwistAngEst' */

    /* Switch: '<S69>/Switch1' incorporates:
     *  Constant: '<S66>/Constant Value'
     *  Constant: '<S74>/Calib'
     *  RelationalOperator: '<S66>/Comparison'
     *  Switch: '<S70>/Switch1'
     */
    if (rtb_Switch_cs > 1.0F)
    {
        /* VariantMerge generated from: '<S64>/VeEPCR_phi_DamperTwistEst' incorporates:
         *  UnitDelay: '<S66>/UnitDelay'
         */
        EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_DamperT =
            EPCR_ac_DW.UnitDelay_DSTATE_n;
    }
    else if (KeEPCR_b_UseHADRDmprTwist)
    {
        /* Switch: '<S66>/Switch' incorporates:
         *  Constant: '<S73>/Calib'
         *  Switch: '<S70>/Switch1'
         */
        if (KeEPCR_b_DelayDmprTorqEst)
        {
            /* Switch: '<S66>/Switch' incorporates:
             *  Delay: '<S66>/IntegerDelay1'
             */
            rtb_Switch_cs = EPCR_ac_DW.IntegerDelay1_DSTATE[0];
        }
        else
        {
            /* Switch: '<S66>/Switch' */
            rtb_Switch_cs = rtb_TmpSignalConversionAtVeHADR_M_DmprTo;
        }

        /* End of Switch: '<S66>/Switch' */

        /* Outputs for Atomic SubSystem: '<S66>/Protected Division' */
        /* Switch: '<S77>/Switch1' incorporates:
         *  Constant: '<S71>/Calib'
         *  Constant: '<S77>/Constant Value'
         *  Constant: '<S77>/Constant Value1'
         *  Constant: '<S77>/Constant Value2'
         *  Constant: '<S77>/Constant Value3'
         *  Logic: '<S77>/AND'
         *  RelationalOperator: '<S77>/GreaterThanorEqual'
         *  RelationalOperator: '<S77>/GreaterThanorEqual1'
         *  RelationalOperator: '<S77>/Not Equal'
         *  RelationalOperator: '<S77>/Not Equal1'
         *  Switch: '<S70>/Switch1'
         *  Switch: '<S77>/Switch2'
         *  Switch: '<S77>/Switch3'
         */
        if ((rtb_Switch_cs != 0.0F) && (KeEPCR_K_DmprSpringRate != 0.0F))
        {
            /* VariantMerge generated from: '<S64>/VeEPCR_phi_DamperTwistEst' incorporates:
             *  Product: '<S77>/Division'
             *  Switch: '<S77>/Switch1'
             */
            EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_DamperT = rtb_Switch_cs /
                KeEPCR_K_DmprSpringRate;
        }
        else if (rtb_Switch_cs > 0.0F)
        {
            /* Switch: '<S77>/Switch2' incorporates:
             *  Constant: '<S77>/MAXFLOAT'
             *  Switch: '<S77>/Switch1'
             *  VariantMerge generated from: '<S64>/VeEPCR_phi_DamperTwistEst'
             */
            EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_DamperT =
                3.402823466E+38F;
        }
        else if (rtb_Switch_cs < 0.0F)
        {
            /* Switch: '<S77>/Switch3' incorporates:
             *  Constant: '<S77>/MINFLOAT'
             *  Switch: '<S77>/Switch1'
             *  Switch: '<S77>/Switch2'
             *  VariantMerge generated from: '<S64>/VeEPCR_phi_DamperTwistEst'
             */
            EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_DamperT =
                -3.402823466E+38F;
        }
        else
        {
            /* VariantMerge generated from: '<S64>/VeEPCR_phi_DamperTwistEst' incorporates:
             *  Constant: '<S77>/Constant Value4'
             *  Switch: '<S77>/Switch1'
             *  Switch: '<S77>/Switch2'
             *  Switch: '<S77>/Switch3'
             */
            EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_DamperT = 0.0F;
        }

        /* End of Switch: '<S77>/Switch1' */
        /* End of Outputs for SubSystem: '<S66>/Protected Division' */
    }
    else
    {
        /* VariantMerge generated from: '<S64>/VeEPCR_phi_DamperTwistEst' incorporates:
         *  Switch: '<S70>/Switch1'
         */
        EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_DamperT =
            EPCR_ac_B.VeEPCR_phi_Dmpr_TwstEst;
    }

    /* End of Switch: '<S69>/Switch1' */

    /* Inport: '<Root>/VeTISR_phi_TransInAng720Est' */
    (void)Rte_Read_VeTISR_phi_TransInAng720Est_Value(&rtb_Merge_fw);

    /* VariantMerge generated from: '<S64>/VeEPCR_phi_InputAngleWTwist' incorporates:
     *  Constant: '<S72>/Calib'
     *  Product: '<S66>/Multiplication2'
     *  Sum: '<S66>/Summation3'
     */
    EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_InputAn =
        (KeEPCR_K_TwistInternalSignConv *
         EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_DamperT) + rtb_Merge_fw;

    /* Update for UnitDelay: '<S66>/UnitDelay' */
    EPCR_ac_DW.UnitDelay_DSTATE_n =
        EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_DamperT;

    /* Update for Delay: '<S66>/IntegerDelay1' */
    EPCR_ac_DW.IntegerDelay1_DSTATE[0] = EPCR_ac_DW.IntegerDelay1_DSTATE[1];
    EPCR_ac_DW.IntegerDelay1_DSTATE[1] =
        rtb_TmpSignalConversionAtVeHADR_M_DmprTo;

    /* End of Outputs for SubSystem: '<S64>/DamperTwistEst' */
    /* End of Outputs for SubSystem: '<S6>/DamperTwistCalc' */
#else

    /* Outputs for Atomic SubSystem: '<S64>/DamperTwistOvrrd' */
    /* VariantMerge generated from: '<S64>/VeEPCR_phi_DamperTwistEst' incorporates:
     *  Constant: '<S67>/Constant Value2'
     */
    EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_DamperT = 0.0F;

    /* VariantMerge generated from: '<S64>/VeEPCR_phi_InputAngleWTwist' incorporates:
     *  Constant: '<S67>/Constant Value1'
     */
    EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_InputAn = 0.0F;

    /* End of Outputs for SubSystem: '<S64>/DamperTwistOvrrd' */
#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EngAngle720'
     */
    /* Outputs for Atomic SubSystem: '<S9>/EngAngleEst' */
#if Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

    /* Outputs for Atomic SubSystem: '<S266>/LeadCompEngAngleEst' */
    /* Inport: '<Root>/VeTISR_b_TransInAng720EstErr' */
    (void)Rte_Read_VeTISR_b_TransInAng720EstErr_Value(&rtb_AND3);

    /* Inport: '<Root>/VeESPR_b_EngineAngle_MCPFA' */
    (void)Rte_Read_VeESPR_b_EngineAngle_MCPFA_Value(&rtb_AND_l);

    /* Logic: '<S268>/AND' incorporates:
     *  Constant: '<S280>/Calib'
     *  RelationalOperator: '<S268>/LessThan'
     *  RelationalOperator: '<S268>/LessThan1'
     */
    rtb_AND_l = ((!rtb_AND_l) && (rtb_TmpSignalConversionAtVeTISR_n_Inpu_d >
                  KeEPCR_n_EngAngleRawMinRPM));

    /* Logic: '<S268>/AND3' incorporates:
     *  Constant: '<S277>/Calib'
     *  RelationalOperator: '<S268>/LessThan2'
     */
    rtb_AND3 = ((!rtb_AND3) && (HeEPCR_b_Enable_DamperTwistEst));

    /* If: '<S268>/If' incorporates:
     *  Constant: '<S275>/Constant'
     *  Constant: '<S276>/Constant'
     *  Constant: '<S279>/Calib'
     *  Logic: '<S268>/AND1'
     *  Logic: '<S268>/AND2'
     *  RelationalOperator: '<S268>/LessThan3'
     *  RelationalOperator: '<S268>/LessThan4'
     *  UnitDelay: '<S268>/Unit Delay1'
     */
    if ((((uint32)KeEPCR_e_EngineAngleSourceSelector) ==
            CeEPCR_e_EngnAngleFromBufferedCrank) && rtb_AND_l)
    {
        /* Outputs for IfAction SubSystem: '<S268>/BufferedCrankInput' incorporates:
         *  ActionPort: '<S272>/Action Port'
         */
        EPCR_ac_BufferedCrankInput(rtb_TmpSignalConversionAtVeESPR_phi_Engi,
            &EPCR_ac_DW.UnitDelay1_DSTATE_ct,
            &EPCR_ac_B.VariantMergeForOutportVeEPCR_e_EngAngleS);

        /* End of Outputs for SubSystem: '<S268>/BufferedCrankInput' */
    }
    else if ((((uint32)KeEPCR_e_EngineAngleSourceSelector) ==
              CeEPCR_e_EngnAngleFromTransInSnsr) && rtb_AND3)
    {
        /* Outputs for IfAction SubSystem: '<S268>/TransInSnsrInput' incorporates:
         *  ActionPort: '<S287>/Action Port'
         */
        EPCR_ac_TransInSnsrInput
            (EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_DamperT,
             &EPCR_ac_DW.UnitDelay1_DSTATE_ct,
             &EPCR_ac_B.VariantMergeForOutportVeEPCR_e_EngAngleS);

        /* End of Outputs for SubSystem: '<S268>/TransInSnsrInput' */
    }
    else if (rtb_AND_l)
    {
        /* Outputs for IfAction SubSystem: '<S268>/BufferedCrankInput1' incorporates:
         *  ActionPort: '<S273>/Action Port'
         */
        EPCR_ac_BufferedCrankInput(rtb_TmpSignalConversionAtVeESPR_phi_Engi,
            &EPCR_ac_DW.UnitDelay1_DSTATE_ct,
            &EPCR_ac_B.VariantMergeForOutportVeEPCR_e_EngAngleS);

        /* End of Outputs for SubSystem: '<S268>/BufferedCrankInput1' */
    }
    else if (rtb_AND3)
    {
        /* Outputs for IfAction SubSystem: '<S268>/TransInSnsrInput1' incorporates:
         *  ActionPort: '<S288>/Action Port'
         */
        EPCR_ac_TransInSnsrInput
            (EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_DamperT,
             &EPCR_ac_DW.UnitDelay1_DSTATE_ct,
             &EPCR_ac_B.VariantMergeForOutportVeEPCR_e_EngAngleS);

        /* End of Outputs for SubSystem: '<S268>/TransInSnsrInput1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S268>/NoSource' incorporates:
         *  ActionPort: '<S284>/Action Port'
         */
        /* VariantMerge generated from: '<S266>/VeEPCR_e_EngAngleSource' incorporates:
         *  Constant: '<S296>/Constant'
         *  DataTypeConversion: '<S295>/DataTypeConversion'
         */
        EPCR_ac_B.VariantMergeForOutportVeEPCR_e_EngAngleS =
            CeEPCR_e_NoSourceAvail;

        /* End of Outputs for SubSystem: '<S268>/NoSource' */
    }

    /* End of If: '<S268>/If' */

    /* Sum: '<S268>/Summation' incorporates:
     *  Constant: '<S278>/Calib'
     *  Constant: '<S281>/Calib'
     *  Constant: '<S282>/Calib'
     *  Product: '<S268>/Multiplication2'
     *  Sum: '<S268>/Sum'
     *  Sum: '<S268>/Sum1'
     *  UnitDelay: '<S268>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeTISR_n_Inpu_d = (((KeEPCR_K_EngAngLeadCompGain *
        EPCR_ac_B.TmpSignalConversionAtVeTISR_n_InputSpeed) +
        KeEPCR_phi_SyncNotchOffset) - KeEPCR_phi_TransLashEst) +
        EPCR_ac_DW.UnitDelay1_DSTATE_ct;

    /* If: '<S286>/If' */
    if (rtb_TmpSignalConversionAtVeTISR_n_Inpu_d > 1440.0F)
    {
        /* Outputs for IfAction SubSystem: '<S286>/Equal720' incorporates:
         *  ActionPort: '<S301>/Action Port'
         */
        /* VariantMerge generated from: '<S266>/VeEPCR_phi_EngAngle720Est' incorporates:
         *  Constant: '<S301>/Constant Value1'
         *  Merge: '<S286>/Merge'
         *  SignalConversion generated from: '<S301>/Out1'
         */
        EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_EngAngl = 720.0F;

        /* End of Outputs for SubSystem: '<S286>/Equal720' */
    }
    else if (rtb_TmpSignalConversionAtVeTISR_n_Inpu_d > 720.0F)
    {
        /* Outputs for IfAction SubSystem: '<S286>/Subtract720' incorporates:
         *  ActionPort: '<S303>/Action Port'
         */
        /* VariantMerge generated from: '<S266>/VeEPCR_phi_EngAngle720Est' incorporates:
         *  Constant: '<S303>/Constant Value2'
         *  Merge: '<S286>/Merge'
         *  Sum: '<S303>/Subtraction'
         */
        EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_EngAngl =
            rtb_TmpSignalConversionAtVeTISR_n_Inpu_d - 720.0F;

        /* End of Outputs for SubSystem: '<S286>/Subtract720' */
    }
    else if (rtb_TmpSignalConversionAtVeTISR_n_Inpu_d < -720.0F)
    {
        /* Outputs for IfAction SubSystem: '<S286>/Equal0' incorporates:
         *  ActionPort: '<S300>/Action Port'
         */
        /* VariantMerge generated from: '<S266>/VeEPCR_phi_EngAngle720Est' incorporates:
         *  Constant: '<S300>/Constant Value2'
         *  Merge: '<S286>/Merge'
         *  SignalConversion generated from: '<S300>/Out1'
         */
        EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_EngAngl = 0.0F;

        /* End of Outputs for SubSystem: '<S286>/Equal0' */
    }
    else if (rtb_TmpSignalConversionAtVeTISR_n_Inpu_d < 0.0F)
    {
        /* Outputs for IfAction SubSystem: '<S286>/Add720' incorporates:
         *  ActionPort: '<S298>/Action Port'
         */
        /* VariantMerge generated from: '<S266>/VeEPCR_phi_EngAngle720Est' incorporates:
         *  Constant: '<S298>/Constant Value2'
         *  Merge: '<S286>/Merge'
         *  Sum: '<S298>/Subtraction'
         */
        EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_EngAngl =
            rtb_TmpSignalConversionAtVeTISR_n_Inpu_d + 720.0F;

        /* End of Outputs for SubSystem: '<S286>/Add720' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S286>/Equal' incorporates:
         *  ActionPort: '<S299>/Action Port'
         */
        /* VariantMerge generated from: '<S266>/VeEPCR_phi_EngAngle720Est' */
        EPCR_ac_Input4(rtb_TmpSignalConversionAtVeTISR_n_Inpu_d,
                       &EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_EngAngl);

        /* End of Outputs for SubSystem: '<S286>/Equal' */
    }

    /* End of If: '<S286>/If' */

    /* End of Outputs for SubSystem: '<S266>/LeadCompEngAngleEst' */
    /* End of Outputs for SubSystem: '<S9>/EngAngleEst' */
#else

    /* Outputs for Atomic SubSystem: '<S266>/EngAngleEstNF' */

    /* VariantMerge generated from: '<S266>/VeEPCR_phi_EngAngle720Est' incorporates:
     *  Constant: '<S267>/Constant Value1'
     */
    EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_EngAngl = 0.0F;

    /* VariantMerge generated from: '<S266>/VeEPCR_e_EngAngleSource' incorporates:
     *  Constant: '<S270>/Constant'
     *  DataTypeConversion: '<S269>/DataTypeConversion'
     */
    EPCR_ac_B.VariantMergeForOutportVeEPCR_e_EngAngleS = CeEPCR_e_NoSourceAvail;

    /* End of Outputs for SubSystem: '<S266>/EngAngleEstNF' */
#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CalcCylTorqPres'
     */
    /* Outputs for Atomic SubSystem: '<S5>/CalcCylTorqPres' */
#if Rte_SysCon_Variant_EPCR_FuncEnable

    /* Outputs for Atomic SubSystem: '<S10>/CalcCylTorqPressFunctional' */
    /* If: '<S14>/If' incorporates:
     *  Inport: '<Root>/VeENGR_p_EngManfldAbsPrs'
     */
    if (rtb_TmpSignalConversionAtEnable_ReadOutp)
    {
        (void)Rte_Read_VeENGR_p_EngManfldAbsPrs_Value(&tmpRead);

        /* Outputs for IfAction SubSystem: '<S14>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S61>/Action Port'
         */
        /* S-Function (fcgen): '<S61>/Function_Call_Generator' incorporates:
         *  SubSystem: '<S11>/CalcCylTorqPress'
         */
        /* Outputs for Iterator SubSystem: '<S13>/CalcALLCyls' incorporates:
         *  ForIterator: '<S15>/ForIterator'
         */
        if (0 < ((sint32)rtb_TmpSignalConversionAtLeEPCR_Cnt_En_e))
        {
            /* Outputs for Atomic SubSystem: '<S18>/Protected Division' */
            /* Switch: '<S29>/Switch1' incorporates:
             *  Constant: '<S27>/Calib'
             *  Constant: '<S29>/Constant Value1'
             *  DataTypeConversion: '<S18>/Data Type Conversion1'
             *  RelationalOperator: '<S29>/Not Equal1'
             */
            if (((sint32)KeEPCR_Cnt_EngCylTotal) != 0)
            {
                /* Switch: '<S29>/Switch1' incorporates:
                 *  Constant: '<S18>/Constant Value'
                 *  Product: '<S29>/Division'
                 */
                rtb_Switch1_n = 720.0F / ((float32)KeEPCR_Cnt_EngCylTotal);
            }
            else
            {
                /* Switch: '<S29>/Switch1' */
                rtb_Switch1_n = 3.402823466E+38F;
            }

            /* End of Switch: '<S29>/Switch1' */
            /* End of Outputs for SubSystem: '<S18>/Protected Division' */
        }

        for (s15_iter = 0; ((sint32)s15_iter) < ((sint32)
                rtb_TmpSignalConversionAtLeEPCR_Cnt_En_e); s15_iter++)
        {
            /* Sum: '<S18>/Summation' incorporates:
             *  Product: '<S18>/Multiplication'
             */
            rtb_TmpSignalConversionAtVeTISR_n_Inpu_d = (((float32)s15_iter) *
                rtb_Switch1_n) +
                EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_EngAngl;

            /* Switch: '<S33>/Switch1' incorporates:
             *  Constant: '<S31>/Constant Value1'
             *  RelationalOperator: '<S31>/GreaterThan'
             */
            if (rtb_TmpSignalConversionAtVeTISR_n_Inpu_d > 720.0F)
            {
                /* Switch: '<S33>/Switch1' incorporates:
                 *  Constant: '<S31>/Constant Value2'
                 *  Sum: '<S31>/Subtraction'
                 */
                rtb_TmpSignalConversionAtVeTISR_n_Inpu_d -= 720.0F;
            }

            /* End of Switch: '<S33>/Switch1' */

            /* Switch: '<S32>/Switch1' incorporates:
             *  Constant: '<S30>/Constant Value1'
             *  RelationalOperator: '<S30>/GreaterThan'
             */
            if (rtb_TmpSignalConversionAtVeTISR_n_Inpu_d <= 360.0F)
            {
                /* Switch: '<S32>/Switch1' */
                rtb_TmpSignalConversionAtVeHADR_M_DmprTo =
                    rtb_TmpSignalConversionAtVeTISR_n_Inpu_d;
            }
            else
            {
                /* Switch: '<S32>/Switch1' incorporates:
                 *  Constant: '<S30>/Constant Value2'
                 *  Sum: '<S30>/Subtraction'
                 */
                rtb_TmpSignalConversionAtVeHADR_M_DmprTo =
                    rtb_TmpSignalConversionAtVeTISR_n_Inpu_d - 360.0F;
            }

            /* End of Switch: '<S32>/Switch1' */

            /* Selector: '<S15>/Selector3' incorporates:
             *  SignalConversion generated from: '<S1>/VaEPCR_phi_IntVlvOpen_Read'
             */
            rtb_Merge_fw = rtb_TmpSignalConversionAtVaEPCR_phi_In_i[s15_iter];

            /* Selector: '<S15>/Selector1' incorporates:
             *  SignalConversion generated from: '<S1>/VaEPCR_phi_IntVlvCls_Read'
             */
            rtb_Switch_cs = rtb_TmpSignalConversionAtVaEPCR_phi_IntV[s15_iter];

            /* If: '<S15>/If' incorporates:
             *  Constant: '<S15>/Constant Value'
             *  Constant: '<S15>/Constant Value1'
             *  Constant: '<S46>/Constant Value'
             *  If: '<S15>/If1'
             *  RelationalOperator: '<S46>/GreaterThan'
             *  Selector: '<S15>/Selector1'
             *  Selector: '<S15>/Selector3'
             *  SignalConversion generated from: '<S1>/VaEPCR_phi_IntVlvCls_Read'
             *  SignalConversion generated from: '<S1>/VaEPCR_phi_IntVlvOpen_Read'
             *  Sum: '<S15>/Summation2'
             *  Switch: '<S51>/Switch1'
             */
            if ((rtb_TmpSignalConversionAtVeTISR_n_Inpu_d > rtb_Merge_fw) &&
                    (rtb_TmpSignalConversionAtVeTISR_n_Inpu_d < rtb_Switch_cs))
            {
                /* Outputs for IfAction SubSystem: '<S15>/OpenToIntake' incorporates:
                 *  ActionPort: '<S24>/Action Port'
                 */
                /* Selector: '<S24>/Selector2' */
                rtb_Switch1_jj = EPCR_ac_DW.UnitDelay_DSTATE_k[s15_iter];

                /* Merge: '<S15>/Merge' incorporates:
                 *  Constant: '<S43>/Calib'
                 *  Product: '<S41>/Multiplication'
                 *  Selector: '<S24>/Selector2'
                 *  Sum: '<S41>/Subtraction'
                 *  Sum: '<S41>/Subtraction1'
                 */
                rtb_Switch1_jj += (tmpRead - rtb_Switch1_jj) *
                    KeEPCR_K_ValveOpenFilt;

                /* SignalConversion generated from: '<S24>/ValveState' incorporates:
                 *  Constant: '<S42>/Constant'
                 *  Merge: '<S15>/Merge1'
                 */
                VaEPCR_e_ValveState[(s15_iter)] = CeEPCR_e_IntakeOpen;

                /* End of Outputs for SubSystem: '<S15>/OpenToIntake' */

                /* Outputs for IfAction SubSystem: '<S15>/IntakeOpenLifterLeaking' incorporates:
                 *  ActionPort: '<S21>/Action Port'
                 */
                /* Outputs for IfAction SubSystem: '<S15>/CloseToIntakeOpenDoNothing' incorporates:
                 *  ActionPort: '<S20>/Action Port'
                 */
                /* Outputs for IfAction SubSystem: '<S15>/ResetLifterLeak' incorporates:
                 *  ActionPort: '<S25>/Action Port'
                 */
                /* SignalConversion generated from: '<S21>/LifterLeakState' incorporates:
                 *  Constant: '<S36>/Constant'
                 *  Merge: '<S15>/Merge2'
                 *  SignalConversion generated from: '<S20>/LifterLeakState'
                 *  SignalConversion generated from: '<S25>/LifterLeakState'
                 */
                VaEPCR_e_LifterState[(s15_iter)] = CeEPCR_e_LifterLeaking;

                /* End of Outputs for SubSystem: '<S15>/ResetLifterLeak' */
                /* End of Outputs for SubSystem: '<S15>/CloseToIntakeOpenDoNothing' */
                /* End of Outputs for SubSystem: '<S15>/IntakeOpenLifterLeaking' */
            }
            else
            {
                if ((rtb_TmpSignalConversionAtVeTISR_n_Inpu_d >
                        rtb_TmpSignalConversionAtLeEPCR_phi_ExhV) ||
                        (rtb_TmpSignalConversionAtVeTISR_n_Inpu_d <=
                         rtb_Merge_fw))
                {
                    /* Outputs for IfAction SubSystem: '<S15>/OpenToExhaust' incorporates:
                     *  ActionPort: '<S23>/Action Port'
                     */
                    /* Selector: '<S23>/Selector2' */
                    rtb_Switch1_jj = EPCR_ac_DW.UnitDelay_DSTATE_k[s15_iter];

                    /* Merge: '<S15>/Merge' incorporates:
                     *  Constant: '<S39>/Calib'
                     *  Product: '<S37>/Multiplication'
                     *  Selector: '<S23>/Selector2'
                     *  Sum: '<S37>/Subtraction'
                     *  Sum: '<S37>/Subtraction1'
                     */
                    rtb_Switch1_jj += (rtb_TmpSignalConversionAtVePLTR_p_Ambi_e
                                       - rtb_Switch1_jj) *
                        KeEPCR_K_ValveOpenFilt;

                    /* SignalConversion generated from: '<S23>/ValveState' incorporates:
                     *  Constant: '<S38>/Constant'
                     *  Merge: '<S15>/Merge1'
                     */
                    VaEPCR_e_ValveState[(s15_iter)] = CeEPCR_e_ExhaustOpen;

                    /* End of Outputs for SubSystem: '<S15>/OpenToExhaust' */
                }
                else
                {
                    /* Outputs for IfAction SubSystem: '<S15>/ValvesClosed' incorporates:
                     *  ActionPort: '<S26>/Action Port'
                     */
                    if (rtb_TmpSignalConversionAtVeHADR_M_DmprTo <= 180.0F)
                    {
                        /* Switch: '<S51>/Switch1' incorporates:
                         *  Merge: '<S49>/Merge'
                         */
                        rtb_Merge_fw = rtb_TmpSignalConversionAtVeHADR_M_DmprTo;
                    }
                    else
                    {
                        /* Merge: '<S49>/Merge' incorporates:
                         *  Constant: '<S46>/Constant Value1'
                         *  Sum: '<S46>/Subtraction'
                         *  Switch: '<S51>/Switch1'
                         */
                        rtb_Merge_fw = 360.0F -
                            rtb_TmpSignalConversionAtVeHADR_M_DmprTo;
                    }

                    /* Selector: '<S26>/Selector5' incorporates:
                     *  SignalConversion generated from: '<S1>/VaEPCR_V_InitialCylVol_Read'
                     */
                    rtb_Switch1_jj =
                        rtb_TmpSignalConversionAtVaEPCR_V_Initia[s15_iter];

                    /* Selector: '<S26>/Selector2' incorporates:
                     *  DataTypeConversion: '<S46>/FloatToFix'
                     *  SignalConversion generated from: '<S1>/LaEPCR_V_DispVsAngle_Read'
                     */
                    rtb_Merge_fw = rtb_TmpSignalConversionAtLaEPCR_V_Disp_h
                        [(uint16)rtb_Merge_fw];

                    /* Outputs for Atomic SubSystem: '<S26>/Protected Division' */
                    /* Switch: '<S50>/Switch1' incorporates:
                     *  Constant: '<S50>/Constant Value'
                     *  Constant: '<S50>/Constant Value1'
                     *  Constant: '<S50>/Constant Value2'
                     *  Constant: '<S50>/Constant Value3'
                     *  Logic: '<S50>/AND'
                     *  RelationalOperator: '<S50>/Greater Than or Equal '
                     *  RelationalOperator: '<S50>/Greater Than or Equal 1'
                     *  RelationalOperator: '<S50>/Not Equal'
                     *  RelationalOperator: '<S50>/Not Equal1'
                     *  Selector: '<S26>/Selector2'
                     *  Selector: '<S26>/Selector5'
                     *  SignalConversion generated from: '<S1>/LaEPCR_V_DispVsAngle_Read'
                     *  SignalConversion generated from: '<S1>/VaEPCR_V_InitialCylVol_Read'
                     *  Switch: '<S50>/Switch2'
                     *  Switch: '<S50>/Switch3'
                     */
                    if ((rtb_Switch1_jj != 0.0F) && (rtb_Merge_fw != 0.0F))
                    {
                        /* Switch: '<S50>/Switch1' incorporates:
                         *  Product: '<S50>/Division'
                         */
                        rtb_Switch1_jj /= rtb_Merge_fw;
                    }
                    else if (rtb_Switch1_jj > 0.0F)
                    {
                        /* Switch: '<S50>/Switch1' incorporates:
                         *  Constant: '<S50>/MAXFLOAT'
                         *  Switch: '<S50>/Switch2'
                         */
                        rtb_Switch1_jj = 3.402823466E+38F;
                    }
                    else if (rtb_Switch1_jj < 0.0F)
                    {
                        /* Switch: '<S50>/Switch3' incorporates:
                         *  Constant: '<S50>/MINFLOAT'
                         *  Switch: '<S50>/Switch1'
                         *  Switch: '<S50>/Switch2'
                         */
                        rtb_Switch1_jj = -3.402823466E+38F;
                    }
                    else
                    {
                        /* Switch: '<S50>/Switch1' incorporates:
                         *  Constant: '<S50>/Constant Value4'
                         *  Switch: '<S50>/Switch2'
                         *  Switch: '<S50>/Switch3'
                         */
                        rtb_Switch1_jj = 0.0F;
                    }

                    /* End of Switch: '<S50>/Switch1' */
                    /* End of Outputs for SubSystem: '<S26>/Protected Division' */

                    /* If: '<S49>/If' incorporates:
                     *  Constant: '<S52>/Coef_X'
                     *  Constant: '<S52>/Coef_c'
                     *  Constant: '<S52>/Coef_x2'
                     *  Constant: '<S53>/Coef_c'
                     *  Constant: '<S53>/Coef_x'
                     *  Constant: '<S53>/Coef_x2'
                     *  Product: '<S52>/Multiplication'
                     *  Product: '<S52>/Multiplication1'
                     *  Product: '<S53>/Multiplication'
                     *  Product: '<S53>/Multiplication1'
                     *  Sum: '<S52>/Summation'
                     *  Sum: '<S53>/Summation'
                     */
                    if (rtb_Switch1_jj < 1.2F)
                    {
                        /* Outputs for IfAction SubSystem: '<S49>/IfActionSubsystem' incorporates:
                         *  ActionPort: '<S52>/Action Port'
                         */
                        rtb_Switch1_jj = (((rtb_Switch1_jj * rtb_Switch1_jj) *
                                           0.3734F) + (rtb_Switch1_jj * 0.6459F))
                            + -0.0121F;

                        /* End of Outputs for SubSystem: '<S49>/IfActionSubsystem' */
                    }
                    else
                    {
                        /* Outputs for IfAction SubSystem: '<S49>/IfActionSubsystem1' incorporates:
                         *  ActionPort: '<S53>/Action Port'
                         */
                        rtb_Switch1_jj = (((rtb_Switch1_jj * rtb_Switch1_jj) *
                                           0.0624F) + (rtb_Switch1_jj * 1.418F))
                            + -0.49F;

                        /* End of Outputs for SubSystem: '<S49>/IfActionSubsystem1' */
                    }

                    /* End of If: '<S49>/If' */

                    /* Merge: '<S15>/Merge' incorporates:
                     *  Product: '<S26>/Multiplication'
                     *  Selector: '<S26>/Selector1'
                     *  SignalConversion generated from: '<S1>/VaEPCR_p_InitialCylPrs_Read'
                     */
                    rtb_Switch1_jj *=
                        rtb_TmpSignalConversionAtVaEPCR_p_Initia[s15_iter];

                    /* SignalConversion generated from: '<S26>/ValveState' incorporates:
                     *  Constant: '<S47>/Constant'
                     *  Merge: '<S15>/Merge1'
                     */
                    VaEPCR_e_ValveState[(s15_iter)] = CeEPCR_e_ValvesClosed;

                    /* End of Outputs for SubSystem: '<S15>/ValvesClosed' */
                }

                if ((rtb_TmpSignalConversionAtVeTISR_n_Inpu_d > (rtb_Switch_cs +
                      75.0F)) && (rtb_TmpSignalConversionAtVeTISR_n_Inpu_d <
                                  650.0F))
                {
                    /* Outputs for IfAction SubSystem: '<S15>/ResetLifterLeak' incorporates:
                     *  ActionPort: '<S25>/Action Port'
                     */
                    /* Outputs for IfAction SubSystem: '<S15>/IntakeOpenLifterLeaking' incorporates:
                     *  ActionPort: '<S21>/Action Port'
                     */
                    /* Outputs for IfAction SubSystem: '<S15>/CloseToIntakeOpenDoNothing' incorporates:
                     *  ActionPort: '<S20>/Action Port'
                     */
                    /* SignalConversion generated from: '<S25>/LifterLeakState' incorporates:
                     *  Constant: '<S45>/Constant'
                     *  Merge: '<S15>/Merge2'
                     *  SignalConversion generated from: '<S20>/LifterLeakState'
                     *  SignalConversion generated from: '<S21>/LifterLeakState'
                     */
                    VaEPCR_e_LifterState[(s15_iter)] = CeEPCR_e_LifterReset;

                    /* End of Outputs for SubSystem: '<S15>/CloseToIntakeOpenDoNothing' */
                    /* End of Outputs for SubSystem: '<S15>/IntakeOpenLifterLeaking' */
                    /* End of Outputs for SubSystem: '<S15>/ResetLifterLeak' */
                }
                else
                {
                    /* Outputs for IfAction SubSystem: '<S15>/CloseToIntakeOpenDoNothing' incorporates:
                     *  ActionPort: '<S20>/Action Port'
                     */
                    /* Outputs for IfAction SubSystem: '<S15>/IntakeOpenLifterLeaking' incorporates:
                     *  ActionPort: '<S21>/Action Port'
                     */
                    /* Outputs for IfAction SubSystem: '<S15>/ResetLifterLeak' incorporates:
                     *  ActionPort: '<S25>/Action Port'
                     */
                    /* SignalConversion generated from: '<S20>/LifterLeakState' incorporates:
                     *  Constant: '<S35>/Constant'
                     *  Merge: '<S15>/Merge2'
                     *  SignalConversion generated from: '<S21>/LifterLeakState'
                     *  SignalConversion generated from: '<S25>/LifterLeakState'
                     */
                    VaEPCR_e_LifterState[(s15_iter)] = CeEPCR_e_LifterHold;

                    /* End of Outputs for SubSystem: '<S15>/ResetLifterLeak' */
                    /* End of Outputs for SubSystem: '<S15>/IntakeOpenLifterLeaking' */
                    /* End of Outputs for SubSystem: '<S15>/CloseToIntakeOpenDoNothing' */
                }
            }

            /* End of If: '<S15>/If' */

            /* Assignment: '<S19>/ArrayAssignment1' incorporates:
             *  DataTypeConversion: '<S19>/FloatToFix'
             *  Gain: '<S19>/Gain'
             *  Product: '<S19>/Multiplication'
             *  Selector: '<S19>/Selector'
             *  SignalConversion generated from: '<S1>/LaEPCR_k_TorqRatioVsAngle_Read'
             *  Sum: '<S19>/Subtraction'
             */
            VaEPCR_M_CylTorq[(s15_iter)] =
                rtb_TmpSignalConversionAtLaEPCR_k_TorqRa[(uint16)((float32)(0.5F
                * rtb_TmpSignalConversionAtVeHADR_M_DmprTo))] * (rtb_Switch1_jj
                - rtb_TmpSignalConversionAtVePLTR_p_Ambi_e);

            /* Assignment: '<S19>/ArrayAssignment2' */
            VaEPCR_p_CylPres[(s15_iter)] = rtb_Switch1_jj;
            for (i = 0; i < 8; i++)
            {
                /* VariantMerge generated from: '<S10>/VaEPCR_e_ValveState' incorporates:
                 *  Assignment: '<S15>/ArrayAssignment3'
                 *  SignalConversion: '<S15>/SignalConversion'
                 */
                EPCR_ac_B.VariantMergeForOutportVaEPCR_e_ValveStat[i] =
                    VaEPCR_e_ValveState[(i)];

                /* VariantMerge generated from: '<S10>/VaEPCR_e_LifterState' incorporates:
                 *  Assignment: '<S15>/ArrayAssignment7'
                 *  SignalConversion: '<S15>/SignalConversion1'
                 */
                EPCR_ac_B.VariantMergeForOutportVaEPCR_e_LifterSta[i] =
                    VaEPCR_e_LifterState[(i)];
            }
        }

        /* End of Outputs for SubSystem: '<S13>/CalcALLCyls' */
        for (i = 0; i < 8; i++)
        {
            /* VariantMerge generated from: '<S10>/VaEPCR_p_CylPres' incorporates:
             *  SignalConversion: '<S13>/SignalCopy'
             */
            EPCR_ac_B.VariantMergeForOutportVaEPCR_p_CylPres[i] =
                VaEPCR_p_CylPres[(i)];
        }

        /* SwitchCase: '<S17>/Switch_Case' incorporates:
         *  Inport: '<Root>/VeENGR_p_EngManfldAbsPrs'
         */
        switch (rtb_TmpSignalConversionAtLeEPCR_Cnt_En_e)
        {
          case 8:
            /* Outputs for IfAction SubSystem: '<S17>/Case_8' incorporates:
             *  ActionPort: '<S58>/Action Port'
             */
            EPCR_ac_Case_8((&(VaEPCR_M_CylTorq[0])),
                           (&(VeEPCR_M_TotalCrankTorqRaw)));

            /* End of Outputs for SubSystem: '<S17>/Case_8' */
            break;

          case 6:
            /* Outputs for IfAction SubSystem: '<S17>/Case_6' incorporates:
             *  ActionPort: '<S57>/Action Port'
             */
            /* VariantMerge generated from: '<S10>/VeEPCR_M_TotalCrankTorqRaw' incorporates:
             *  Constant: '<S57>/Constant Value1'
             *  Constant: '<S57>/Constant Value2'
             *  Constant: '<S57>/Constant Value3'
             *  Constant: '<S57>/Constant Value4'
             *  Constant: '<S57>/Constant Value5'
             *  Constant: '<S57>/Constant Value7'
             *  Selector: '<S57>/Selector1'
             *  Selector: '<S57>/Selector2'
             *  Selector: '<S57>/Selector3'
             *  Selector: '<S57>/Selector4'
             *  Selector: '<S57>/Selector5'
             *  Selector: '<S57>/Selector6'
             *  Sum: '<S57>/Summation'
             */
            VeEPCR_M_TotalCrankTorqRaw = ((((VaEPCR_M_CylTorq[0] +
                VaEPCR_M_CylTorq[1]) + VaEPCR_M_CylTorq[2]) + VaEPCR_M_CylTorq[3])
                + VaEPCR_M_CylTorq[4]) + VaEPCR_M_CylTorq[5];

            /* End of Outputs for SubSystem: '<S17>/Case_6' */
            break;

          case 5:
            /* Outputs for IfAction SubSystem: '<S17>/Case_5' incorporates:
             *  ActionPort: '<S56>/Action Port'
             */
            /* VariantMerge generated from: '<S10>/VeEPCR_M_TotalCrankTorqRaw' incorporates:
             *  Constant: '<S56>/Constant Value1'
             *  Constant: '<S56>/Constant Value2'
             *  Constant: '<S56>/Constant Value3'
             *  Constant: '<S56>/Constant Value4'
             *  Constant: '<S56>/Constant Value7'
             *  Selector: '<S56>/Selector1'
             *  Selector: '<S56>/Selector2'
             *  Selector: '<S56>/Selector3'
             *  Selector: '<S56>/Selector4'
             *  Selector: '<S56>/Selector5'
             *  Sum: '<S56>/Summation'
             */
            VeEPCR_M_TotalCrankTorqRaw = (((VaEPCR_M_CylTorq[0] +
                VaEPCR_M_CylTorq[1]) + VaEPCR_M_CylTorq[2]) + VaEPCR_M_CylTorq[3])
                + VaEPCR_M_CylTorq[4];

            /* End of Outputs for SubSystem: '<S17>/Case_5' */
            break;

          case 4:
            /* Outputs for IfAction SubSystem: '<S17>/Case_4' incorporates:
             *  ActionPort: '<S55>/Action Port'
             */
            /* VariantMerge generated from: '<S10>/VeEPCR_M_TotalCrankTorqRaw' incorporates:
             *  Constant: '<S55>/Constant Value1'
             *  Constant: '<S55>/Constant Value2'
             *  Constant: '<S55>/Constant Value3'
             *  Constant: '<S55>/Constant Value7'
             *  Selector: '<S55>/Selector1'
             *  Selector: '<S55>/Selector2'
             *  Selector: '<S55>/Selector3'
             *  Selector: '<S55>/Selector4'
             *  Sum: '<S55>/Summation'
             */
            VeEPCR_M_TotalCrankTorqRaw = ((VaEPCR_M_CylTorq[0] +
                VaEPCR_M_CylTorq[1]) + VaEPCR_M_CylTorq[2]) + VaEPCR_M_CylTorq[3];

            /* End of Outputs for SubSystem: '<S17>/Case_4' */
            break;

          case 3:
            /* Outputs for IfAction SubSystem: '<S17>/Case_3' incorporates:
             *  ActionPort: '<S54>/Action Port'
             */
            /* VariantMerge generated from: '<S10>/VeEPCR_M_TotalCrankTorqRaw' incorporates:
             *  Constant: '<S54>/Constant Value1'
             *  Constant: '<S54>/Constant Value2'
             *  Constant: '<S54>/Constant Value7'
             *  Selector: '<S54>/Selector1'
             *  Selector: '<S54>/Selector2'
             *  Selector: '<S54>/Selector3'
             *  Sum: '<S54>/Summation'
             */
            VeEPCR_M_TotalCrankTorqRaw = (VaEPCR_M_CylTorq[0] +
                VaEPCR_M_CylTorq[1]) + VaEPCR_M_CylTorq[2];

            /* End of Outputs for SubSystem: '<S17>/Case_3' */
            break;

          default:
            /* Outputs for IfAction SubSystem: '<S17>/Case_defalt' incorporates:
             *  ActionPort: '<S59>/Action Port'
             */
            EPCR_ac_Case_8((&(VaEPCR_M_CylTorq[0])),
                           (&(VeEPCR_M_TotalCrankTorqRaw)));

            /* End of Outputs for SubSystem: '<S17>/Case_defalt' */
            break;
        }

        /* End of SwitchCase: '<S17>/Switch_Case' */

        /* Update for UnitDelay: '<S13>/UnitDelay' */
        for (i = 0; i < 8; i++)
        {
            EPCR_ac_DW.UnitDelay_DSTATE_k[i] = VaEPCR_p_CylPres[(i)];
        }

        /* End of Update for UnitDelay: '<S13>/UnitDelay' */
        /* End of Outputs for S-Function (fcgen): '<S61>/Function_Call_Generator' */
        /* End of Outputs for SubSystem: '<S14>/IfActionSubsystem' */
    }

    /* End of If: '<S14>/If' */
    /* End of Outputs for SubSystem: '<S10>/CalcCylTorqPressFunctional' */
    /* End of Outputs for SubSystem: '<S5>/CalcCylTorqPres' */
#else

    /* Outputs for Atomic SubSystem: '<S10>/NF' */
    /* VariantMerge generated from: '<S10>/VeEPCR_M_TotalCrankTorqRaw' incorporates:
     *  Constant: '<S12>/Const3'
     */
    VeEPCR_M_TotalCrankTorqRaw = 0.0F;
    for (i = 0; i < 8; i++)
    {
        /* VariantMerge generated from: '<S10>/VaEPCR_p_CylPres' incorporates:
         *  Constant: '<S12>/Const11'
         */
        EPCR_ac_B.VariantMergeForOutportVaEPCR_p_CylPres[i] = 0.0F;

        /* VariantMerge generated from: '<S10>/VaEPCR_e_ValveState' incorporates:
         *  Constant: '<S62>/Constant'
         */
        EPCR_ac_B.VariantMergeForOutportVaEPCR_e_ValveStat[i] =
            EPCR_ac_ConstP.pooled38[i];

        /* VariantMerge generated from: '<S10>/VaEPCR_e_LifterState' incorporates:
         *  Constant: '<S63>/Constant'
         */
        EPCR_ac_B.VariantMergeForOutportVaEPCR_e_LifterSta[i] =
            EPCR_ac_ConstP.pooled34[i];
    }

    /* End of Outputs for SubSystem: '<S10>/NF' */
#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CylTorqFilter'
     */
    /* Outputs for Atomic SubSystem: '<S8>/FilterOnOff' */
#if Rte_SysCon_Variant_EPCR_FuncEnable

    /* Outputs for Atomic SubSystem: '<S252>/FilterOnOff' */
    /* If: '<S253>/If' incorporates:
     *  Constant: '<S260>/Calib'
     *  DataStoreRead: '<S253>/Data Store Read'
     *  RelationalOperator: '<S253>/Comparison2'
     */
    if (VeEPCR_t_CylTorqMdlInitTmr_DS < KeEPCR_t_CylTorqMdlInitTm)
    {
        /* Outputs for IfAction SubSystem: '<S253>/Initializing' incorporates:
         *  ActionPort: '<S258>/Action Port'
         */
        /* DataStoreWrite: '<S258>/Data Store Write' incorporates:
         *  Constant: '<S264>/Calib'
         *  DataStoreRead: '<S258>/Data Store Read'
         *  Sum: '<S258>/Sum'
         */
        VeEPCR_t_CylTorqMdlInitTmr_DS = VeEPCR_t_CylTorqMdlInitTmr_DS +
            HeEPCR_t_FastTEF_dT;

        /* Merge: '<S253>/Merge' incorporates:
         *  Constant: '<S258>/Constant Value'
         *  SignalConversion generated from: '<S258>/Gain'
         */
        i = 0;

        /* Gain: '<S263>/Gain' incorporates:
         *  Constant: '<S258>/TRUE Constant'
         *  Merge: '<S253>/Merge1'
         *  SignalConversion generated from: '<S258>/InitActive'
         */
        EPCR_ac_B.Gain = true;

        /* End of Outputs for SubSystem: '<S253>/Initializing' */
    }
    else if (rtb_TmpSignalConversionAtEnable_ReadOutp)
    {
        /* Outputs for IfAction SubSystem: '<S253>/Enabled' incorporates:
         *  ActionPort: '<S257>/Action Port'
         */
        /* Merge: '<S253>/Merge' incorporates:
         *  Constant: '<S257>/Constant Value'
         *  SignalConversion generated from: '<S257>/Gain'
         */
        i = 1;

        /* Gain: '<S263>/Gain' incorporates:
         *  Constant: '<S257>/FALSE Constant'
         *  Merge: '<S253>/Merge1'
         *  SignalConversion generated from: '<S257>/InitActive'
         */
        EPCR_ac_B.Gain = false;

        /* End of Outputs for SubSystem: '<S253>/Enabled' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S253>/Disabled' incorporates:
         *  ActionPort: '<S256>/Action Port'
         */
        /* Merge: '<S253>/Merge' incorporates:
         *  Constant: '<S256>/Constant Value'
         *  SignalConversion generated from: '<S256>/Gain'
         */
        i = 0;

        /* Gain: '<S263>/Gain' incorporates:
         *  Constant: '<S256>/FALSE Constant'
         *  Merge: '<S253>/Merge1'
         *  SignalConversion generated from: '<S256>/InitActive'
         */
        EPCR_ac_B.Gain = false;

        /* End of Outputs for SubSystem: '<S253>/Disabled' */
    }

    /* End of If: '<S253>/If' */

    /* Sum: '<S255>/Subtraction1' incorporates:
     *  Constant: '<S259>/Calib'
     *  Product: '<S255>/Multiplication'
     *  Sum: '<S255>/Subtraction'
     *  UnitDelay: '<S253>/UnitDelay1'
     */
    EPCR_ac_DW.UnitDelay1_DSTATE_j += (((float32)i) -
        EPCR_ac_DW.UnitDelay1_DSTATE_j) * KeEPCR_k_CylTorqMdlFlt;

    /* Gain: '<S262>/Gain' incorporates:
     *  Product: '<S253>/Product'
     *  UnitDelay: '<S253>/UnitDelay1'
     */
    EPCR_ac_B.VariantMergeForOutportPulseTorqEst =
        EPCR_ac_DW.UnitDelay1_DSTATE_j * VeEPCR_M_TotalCrankTorqRaw;

    /* End of Outputs for SubSystem: '<S252>/FilterOnOff' */
#else

    /* Outputs for Atomic SubSystem: '<S252>/FilterOnOff_PxPy' */
    /* Gain: '<S265>/Gain' incorporates:
     *  Constant: '<S254>/Constant Value'
     */
    EPCR_ac_B.VariantMergeForOutportPulseTorqEst = 0.0F;

    /* End of Outputs for SubSystem: '<S252>/FilterOnOff_PxPy' */
#endif

    /* End of Outputs for SubSystem: '<S8>/FilterOnOff' */

    /* SignalConversion generated from: '<S1>/InitActive_write' incorporates:
     *  Inport: '<Root>/VeTSXR_e_HTDRToConstrnType'
     */
#if Rte_SysCon_Variant_EPCR_FuncEnable

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Control__Subsystem'
     */
    /* Outputs for Atomic SubSystem: '<S7>/EPCC_CalcAddedMtrTrq' */
    /* Outputs for Atomic SubSystem: '<S146>/EPCC_CalcAddedMtrTrq' */
    (void)Rte_Read_VeTSXR_e_HTDRToConstrnType_Value(&tmpRead_0);

    /* Outputs for Atomic SubSystem: '<S148>/ShapePulseCancel' */
    /* Logic: '<S160>/Logical2' incorporates:
     *  Inport: '<Root>/VeTSXR_e_HTDRToConstrnType'
     *  RelationalOperator: '<S160>/Comparison3'
     *  RelationalOperator: '<S160>/Comparison4'
     */
    rtb_TmpSignalConversionAtEnable_ReadOutp = ((((uint32)
        rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) == CeTRGR_e_TransRangePark) ||
        (CeTRGR_e_TransRangeNeutral == ((uint32)
        rtb_TmpSignalConversionAtVeTRGR_e_VldtdT)));

    /* If: '<S160>/If' incorporates:
     *  If: '<S224>/If1'
     *  If: '<S225>/If1'
     *  Logic: '<S160>/Logical1'
     *  RelationalOperator: '<S160>/Comparison1'
     *  RelationalOperator: '<S160>/Comparison2'
     */
    if (!rtb_TmpSignalConversionAtEnable_ReadOutp)
    {
        /* Outputs for IfAction SubSystem: '<S160>/In_Drive_or_Reverse' incorporates:
         *  ActionPort: '<S181>/Action Port'
         */
        /* If: '<S196>/If1' incorporates:
         *  Constant: '<S198>/Calib'
         *  Constant: '<S199>/Calib'
         *  Constant: '<S200>/Calib'
         *  Constant: '<S201>/Calib'
         *  Constant: '<S202>/Calib'
         *  Constant: '<S203>/Calib'
         *  Constant: '<S204>/Calib'
         *  Constant: '<S205>/Calib'
         *  Constant: '<S206>/Calib'
         *  Constant: '<S207>/Calib'
         *  Constant: '<S208>/Calib'
         *  Constant: '<S209>/Calib'
         *  Constant: '<S210>/Calib'
         *  Constant: '<S211>/Calib'
         *  Constant: '<S212>/Calib'
         *  Constant: '<S213>/Calib'
         *  Constant: '<S214>/Calib'
         *  Constant: '<S215>/Calib'
         *  Constant: '<S216>/Calib'
         *  Constant: '<S217>/Calib'
         *  Constant: '<S218>/Calib'
         *  Constant: '<S219>/Calib'
         *  If: '<S197>/If1'
         *  Logic: '<S160>/Logical1'
         *  Product: '<S196>/Multiplication'
         *  Product: '<S196>/Multiplication1'
         *  Product: '<S196>/Multiplication10'
         *  Product: '<S196>/Multiplication2'
         *  Product: '<S196>/Multiplication3'
         *  Product: '<S196>/Multiplication4'
         *  Product: '<S196>/Multiplication5'
         *  Product: '<S196>/Multiplication6'
         *  Product: '<S196>/Multiplication7'
         *  Product: '<S196>/Multiplication8'
         *  Product: '<S196>/Multiplication9'
         *  Product: '<S197>/Multiplication'
         *  Product: '<S197>/Multiplication1'
         *  Product: '<S197>/Multiplication10'
         *  Product: '<S197>/Multiplication2'
         *  Product: '<S197>/Multiplication3'
         *  Product: '<S197>/Multiplication4'
         *  Product: '<S197>/Multiplication5'
         *  Product: '<S197>/Multiplication6'
         *  Product: '<S197>/Multiplication7'
         *  Product: '<S197>/Multiplication8'
         *  Product: '<S197>/Multiplication9'
         *  RelationalOperator: '<S160>/Comparison1'
         *  RelationalOperator: '<S160>/Comparison2'
         *  Sum: '<S196>/Summation'
         *  Sum: '<S197>/Summation'
         *  UnitDelay: '<S196>/Unit Delay'
         *  UnitDelay: '<S196>/Unit Delay1'
         *  UnitDelay: '<S196>/Unit Delay2'
         *  UnitDelay: '<S196>/Unit Delay3'
         *  UnitDelay: '<S196>/Unit Delay4'
         *  UnitDelay: '<S196>/Unit Delay5'
         *  UnitDelay: '<S196>/Unit Delay6'
         *  UnitDelay: '<S196>/Unit Delay7'
         *  UnitDelay: '<S196>/Unit Delay8'
         *  UnitDelay: '<S196>/Unit Delay9'
         *  UnitDelay: '<S197>/Unit Delay'
         *  UnitDelay: '<S197>/Unit Delay1'
         *  UnitDelay: '<S197>/Unit Delay2'
         *  UnitDelay: '<S197>/Unit Delay3'
         *  UnitDelay: '<S197>/Unit Delay4'
         *  UnitDelay: '<S197>/Unit Delay5'
         *  UnitDelay: '<S197>/Unit Delay6'
         *  UnitDelay: '<S197>/Unit Delay7'
         *  UnitDelay: '<S197>/Unit Delay8'
         *  UnitDelay: '<S197>/Unit Delay9'
         */
        if ((CeESSR_e_EngRunning == ((uint32)
                EPCR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt)) ||
                (((uint32)EPCR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt) ==
                 CeESSR_e_EngOff))
        {
            /* Outputs for IfAction SubSystem: '<S196>/Reset_TF' incorporates:
             *  ActionPort: '<S221>/Resets'
             */
            EPCR_ac_Reset_TF(&EPCR_ac_DW.UnitDelay_DSTATE_i,
                             &EPCR_ac_DW.UnitDelay3_DSTATE_k,
                             &EPCR_ac_DW.UnitDelay4_DSTATE_b,
                             &EPCR_ac_DW.UnitDelay6_DSTATE_n,
                             &EPCR_ac_DW.UnitDelay7_DSTATE_f,
                             &EPCR_ac_DW.UnitDelay1_DSTATE_e,
                             &EPCR_ac_DW.UnitDelay2_DSTATE_o,
                             &EPCR_ac_DW.UnitDelay5_DSTATE_m,
                             &EPCR_ac_DW.UnitDelay8_DSTATE_n,
                             &EPCR_ac_DW.UnitDelay9_DSTATE_ap);

            /* End of Outputs for SubSystem: '<S196>/Reset_TF' */

            /* Outputs for IfAction SubSystem: '<S197>/Reset_TF' incorporates:
             *  ActionPort: '<S223>/Resets'
             */
            EPCR_ac_Reset_TF(&EPCR_ac_DW.UnitDelay_DSTATE_lp,
                             &EPCR_ac_DW.UnitDelay3_DSTATE_f,
                             &EPCR_ac_DW.UnitDelay4_DSTATE_a,
                             &EPCR_ac_DW.UnitDelay6_DSTATE_d,
                             &EPCR_ac_DW.UnitDelay7_DSTATE_o,
                             &EPCR_ac_DW.UnitDelay1_DSTATE_p,
                             &EPCR_ac_DW.UnitDelay2_DSTATE_f,
                             &EPCR_ac_DW.UnitDelay5_DSTATE_l,
                             &EPCR_ac_DW.UnitDelay8_DSTATE_i,
                             &EPCR_ac_DW.UnitDelay9_DSTATE_o);

            /* End of Outputs for SubSystem: '<S197>/Reset_TF' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S196>/Calc_TF' incorporates:
             *  ActionPort: '<S220>/Resets'
             */
            EPCR_ac_Calc_TF(EPCR_ac_B.VariantMergeForOutportPulseTorqEst,
                            EPCR_ac_DW.UnitDelay_DSTATE_i,
                            EPCR_ac_DW.UnitDelay3_DSTATE_k,
                            EPCR_ac_DW.UnitDelay4_DSTATE_b,
                            EPCR_ac_DW.UnitDelay6_DSTATE_n,
                            ((((((((((EPCR_ac_B.VariantMergeForOutportPulseTorqEst
                * KeEPCR_K_TaShpN5) + (EPCR_ac_DW.UnitDelay_DSTATE_i *
                KeEPCR_K_TaShpN4)) + (EPCR_ac_DW.UnitDelay3_DSTATE_k *
                KeEPCR_K_TaShpN3)) + (EPCR_ac_DW.UnitDelay4_DSTATE_b *
                                    KeEPCR_K_TaShpN2)) +
                                  (EPCR_ac_DW.UnitDelay6_DSTATE_n *
                                   KeEPCR_K_TaShpN1)) +
                                 (EPCR_ac_DW.UnitDelay7_DSTATE_f *
                                  KeEPCR_K_TaShpN0)) -
                                (EPCR_ac_DW.UnitDelay1_DSTATE_e *
                                 KeEPCR_K_TaShpD4)) -
                               (EPCR_ac_DW.UnitDelay2_DSTATE_o *
                                KeEPCR_K_TaShpD3)) -
                              (EPCR_ac_DW.UnitDelay5_DSTATE_m * KeEPCR_K_TaShpD2))
                             - (EPCR_ac_DW.UnitDelay8_DSTATE_n *
                                KeEPCR_K_TaShpD1)) -
                            (EPCR_ac_DW.UnitDelay9_DSTATE_ap * KeEPCR_K_TaShpD0),
                            EPCR_ac_DW.UnitDelay1_DSTATE_e,
                            EPCR_ac_DW.UnitDelay2_DSTATE_o,
                            EPCR_ac_DW.UnitDelay5_DSTATE_m,
                            EPCR_ac_DW.UnitDelay8_DSTATE_n,
                            &EPCR_ac_DW.UnitDelay_DSTATE_i,
                            &EPCR_ac_DW.UnitDelay3_DSTATE_k,
                            &EPCR_ac_DW.UnitDelay4_DSTATE_b,
                            &EPCR_ac_DW.UnitDelay6_DSTATE_n,
                            &EPCR_ac_DW.UnitDelay7_DSTATE_f,
                            &EPCR_ac_DW.UnitDelay1_DSTATE_e,
                            &EPCR_ac_DW.UnitDelay2_DSTATE_o,
                            &EPCR_ac_DW.UnitDelay5_DSTATE_m,
                            &EPCR_ac_DW.UnitDelay8_DSTATE_n,
                            &EPCR_ac_DW.UnitDelay9_DSTATE_ap);

            /* End of Outputs for SubSystem: '<S196>/Calc_TF' */

            /* Outputs for IfAction SubSystem: '<S197>/Calc_TF' incorporates:
             *  ActionPort: '<S222>/Resets'
             */
            EPCR_ac_Calc_TF(EPCR_ac_B.VariantMergeForOutportPulseTorqEst,
                            EPCR_ac_DW.UnitDelay_DSTATE_lp,
                            EPCR_ac_DW.UnitDelay3_DSTATE_f,
                            EPCR_ac_DW.UnitDelay4_DSTATE_a,
                            EPCR_ac_DW.UnitDelay6_DSTATE_d,
                            ((((((((((EPCR_ac_B.VariantMergeForOutportPulseTorqEst
                * KeEPCR_K_TbShpN5) + (EPCR_ac_DW.UnitDelay_DSTATE_lp *
                KeEPCR_K_TbShpN4)) + (EPCR_ac_DW.UnitDelay3_DSTATE_f *
                KeEPCR_K_TbShpN3)) + (EPCR_ac_DW.UnitDelay4_DSTATE_a *
                                    KeEPCR_K_TbShpN2)) +
                                  (EPCR_ac_DW.UnitDelay6_DSTATE_d *
                                   KeEPCR_K_TbShpN1)) +
                                 (EPCR_ac_DW.UnitDelay7_DSTATE_o *
                                  KeEPCR_K_TbShpN0)) -
                                (EPCR_ac_DW.UnitDelay1_DSTATE_p *
                                 KeEPCR_K_TbShpD4)) -
                               (EPCR_ac_DW.UnitDelay2_DSTATE_f *
                                KeEPCR_K_TbShpD3)) -
                              (EPCR_ac_DW.UnitDelay5_DSTATE_l * KeEPCR_K_TbShpD2))
                             - (EPCR_ac_DW.UnitDelay8_DSTATE_i *
                                KeEPCR_K_TbShpD1)) -
                            (EPCR_ac_DW.UnitDelay9_DSTATE_o * KeEPCR_K_TbShpD0),
                            EPCR_ac_DW.UnitDelay1_DSTATE_p,
                            EPCR_ac_DW.UnitDelay2_DSTATE_f,
                            EPCR_ac_DW.UnitDelay5_DSTATE_l,
                            EPCR_ac_DW.UnitDelay8_DSTATE_i,
                            &EPCR_ac_DW.UnitDelay_DSTATE_lp,
                            &EPCR_ac_DW.UnitDelay3_DSTATE_f,
                            &EPCR_ac_DW.UnitDelay4_DSTATE_a,
                            &EPCR_ac_DW.UnitDelay6_DSTATE_d,
                            &EPCR_ac_DW.UnitDelay7_DSTATE_o,
                            &EPCR_ac_DW.UnitDelay1_DSTATE_p,
                            &EPCR_ac_DW.UnitDelay2_DSTATE_f,
                            &EPCR_ac_DW.UnitDelay5_DSTATE_l,
                            &EPCR_ac_DW.UnitDelay8_DSTATE_i,
                            &EPCR_ac_DW.UnitDelay9_DSTATE_o);

            /* End of Outputs for SubSystem: '<S197>/Calc_TF' */
        }

        /* End of If: '<S196>/If1' */
        /* End of Outputs for SubSystem: '<S160>/In_Drive_or_Reverse' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S160>/In_Park_or_Neutral' incorporates:
         *  ActionPort: '<S182>/Action Port'
         */
        if ((CeESSR_e_EngRunning == ((uint32)
                EPCR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt)) ||
                (((uint32)EPCR_ac_B.TmpSignalConversionAtVeESSR_e_EngStartSt) ==
                 CeESSR_e_EngOff))
        {
            /* Outputs for IfAction SubSystem: '<S224>/Reset_TF' incorporates:
             *  ActionPort: '<S249>/Resets'
             */
            /* If: '<S224>/If1' incorporates:
             *  UnitDelay: '<S224>/Unit Delay'
             *  UnitDelay: '<S224>/Unit Delay1'
             *  UnitDelay: '<S224>/Unit Delay2'
             *  UnitDelay: '<S224>/Unit Delay3'
             *  UnitDelay: '<S224>/Unit Delay4'
             *  UnitDelay: '<S224>/Unit Delay5'
             *  UnitDelay: '<S224>/Unit Delay6'
             *  UnitDelay: '<S224>/Unit Delay7'
             *  UnitDelay: '<S224>/Unit Delay8'
             *  UnitDelay: '<S224>/Unit Delay9'
             */
            EPCR_ac_Reset_TF(&EPCR_ac_DW.UnitDelay_DSTATE_l,
                             &EPCR_ac_DW.UnitDelay3_DSTATE,
                             &EPCR_ac_DW.UnitDelay4_DSTATE,
                             &EPCR_ac_DW.UnitDelay6_DSTATE,
                             &EPCR_ac_DW.UnitDelay7_DSTATE,
                             &EPCR_ac_DW.UnitDelay1_DSTATE_c,
                             &EPCR_ac_DW.UnitDelay2_DSTATE_b,
                             &EPCR_ac_DW.UnitDelay5_DSTATE,
                             &EPCR_ac_DW.UnitDelay8_DSTATE,
                             &EPCR_ac_DW.UnitDelay9_DSTATE);

            /* End of Outputs for SubSystem: '<S224>/Reset_TF' */

            /* Outputs for IfAction SubSystem: '<S225>/Reset_TF' incorporates:
             *  ActionPort: '<S251>/Resets'
             */
            /* If: '<S225>/If1' incorporates:
             *  UnitDelay: '<S225>/Unit Delay'
             *  UnitDelay: '<S225>/Unit Delay1'
             *  UnitDelay: '<S225>/Unit Delay2'
             *  UnitDelay: '<S225>/Unit Delay3'
             *  UnitDelay: '<S225>/Unit Delay4'
             *  UnitDelay: '<S225>/Unit Delay5'
             *  UnitDelay: '<S225>/Unit Delay6'
             *  UnitDelay: '<S225>/Unit Delay7'
             *  UnitDelay: '<S225>/Unit Delay8'
             *  UnitDelay: '<S225>/Unit Delay9'
             */
            EPCR_ac_Reset_TF(&EPCR_ac_DW.UnitDelay_DSTATE_d,
                             &EPCR_ac_DW.UnitDelay3_DSTATE_i,
                             &EPCR_ac_DW.UnitDelay4_DSTATE_l,
                             &EPCR_ac_DW.UnitDelay6_DSTATE_b,
                             &EPCR_ac_DW.UnitDelay7_DSTATE_l,
                             &EPCR_ac_DW.UnitDelay1_DSTATE_a,
                             &EPCR_ac_DW.UnitDelay2_DSTATE_m,
                             &EPCR_ac_DW.UnitDelay5_DSTATE_p,
                             &EPCR_ac_DW.UnitDelay8_DSTATE_a,
                             &EPCR_ac_DW.UnitDelay9_DSTATE_a);

            /* End of Outputs for SubSystem: '<S225>/Reset_TF' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S224>/Calc_TF' incorporates:
             *  ActionPort: '<S248>/Resets'
             */
            /* If: '<S224>/If1' incorporates:
             *  Constant: '<S226>/Calib'
             *  Constant: '<S227>/Calib'
             *  Constant: '<S228>/Calib'
             *  Constant: '<S229>/Calib'
             *  Constant: '<S230>/Calib'
             *  Constant: '<S231>/Calib'
             *  Constant: '<S232>/Calib'
             *  Constant: '<S233>/Calib'
             *  Constant: '<S234>/Calib'
             *  Constant: '<S235>/Calib'
             *  Constant: '<S236>/Calib'
             *  Product: '<S224>/Multiplication'
             *  Product: '<S224>/Multiplication1'
             *  Product: '<S224>/Multiplication10'
             *  Product: '<S224>/Multiplication2'
             *  Product: '<S224>/Multiplication3'
             *  Product: '<S224>/Multiplication4'
             *  Product: '<S224>/Multiplication5'
             *  Product: '<S224>/Multiplication6'
             *  Product: '<S224>/Multiplication7'
             *  Product: '<S224>/Multiplication8'
             *  Product: '<S224>/Multiplication9'
             *  Sum: '<S224>/Summation'
             *  UnitDelay: '<S224>/Unit Delay'
             *  UnitDelay: '<S224>/Unit Delay1'
             *  UnitDelay: '<S224>/Unit Delay2'
             *  UnitDelay: '<S224>/Unit Delay3'
             *  UnitDelay: '<S224>/Unit Delay4'
             *  UnitDelay: '<S224>/Unit Delay5'
             *  UnitDelay: '<S224>/Unit Delay6'
             *  UnitDelay: '<S224>/Unit Delay7'
             *  UnitDelay: '<S224>/Unit Delay8'
             *  UnitDelay: '<S224>/Unit Delay9'
             */
            EPCR_ac_Calc_TF(EPCR_ac_B.VariantMergeForOutportPulseTorqEst,
                            EPCR_ac_DW.UnitDelay_DSTATE_l,
                            EPCR_ac_DW.UnitDelay3_DSTATE,
                            EPCR_ac_DW.UnitDelay4_DSTATE,
                            EPCR_ac_DW.UnitDelay6_DSTATE,
                            ((((((((((EPCR_ac_B.VariantMergeForOutportPulseTorqEst
                * KeEPCR_K_TaShpN5_InParkOrNeutral) +
                (EPCR_ac_DW.UnitDelay_DSTATE_l *
                 KeEPCR_K_TaShpN4_InParkOrNeutral)) +
                                    (EPCR_ac_DW.UnitDelay3_DSTATE *
                KeEPCR_K_TaShpN3_InParkOrNeutral)) +
                                   (EPCR_ac_DW.UnitDelay4_DSTATE *
                                    KeEPCR_K_TaShpN2_InParkOrNeutral)) +
                                  (EPCR_ac_DW.UnitDelay6_DSTATE *
                                   KeEPCR_K_TaShpN1_InParkOrNeutral)) +
                                 (EPCR_ac_DW.UnitDelay7_DSTATE *
                                  KeEPCR_K_TaShpN0_InParkOrNeutral)) -
                                (EPCR_ac_DW.UnitDelay1_DSTATE_c *
                                 KeEPCR_K_TaShpD4_InParkOrNeutral)) -
                               (EPCR_ac_DW.UnitDelay2_DSTATE_b *
                                KeEPCR_K_TaShpD3_InParkOrNeutral)) -
                              (EPCR_ac_DW.UnitDelay5_DSTATE *
                               KeEPCR_K_TaShpD2_InParkOrNeutral)) -
                             (EPCR_ac_DW.UnitDelay8_DSTATE *
                              KeEPCR_K_TaShpD1_InParkOrNeutral)) -
                            (EPCR_ac_DW.UnitDelay9_DSTATE *
                             KeEPCR_K_TaShpD0_InParkOrNeutral),
                            EPCR_ac_DW.UnitDelay1_DSTATE_c,
                            EPCR_ac_DW.UnitDelay2_DSTATE_b,
                            EPCR_ac_DW.UnitDelay5_DSTATE,
                            EPCR_ac_DW.UnitDelay8_DSTATE,
                            &EPCR_ac_DW.UnitDelay_DSTATE_l,
                            &EPCR_ac_DW.UnitDelay3_DSTATE,
                            &EPCR_ac_DW.UnitDelay4_DSTATE,
                            &EPCR_ac_DW.UnitDelay6_DSTATE,
                            &EPCR_ac_DW.UnitDelay7_DSTATE,
                            &EPCR_ac_DW.UnitDelay1_DSTATE_c,
                            &EPCR_ac_DW.UnitDelay2_DSTATE_b,
                            &EPCR_ac_DW.UnitDelay5_DSTATE,
                            &EPCR_ac_DW.UnitDelay8_DSTATE,
                            &EPCR_ac_DW.UnitDelay9_DSTATE);

            /* End of Outputs for SubSystem: '<S224>/Calc_TF' */

            /* Outputs for IfAction SubSystem: '<S225>/Calc_TF' incorporates:
             *  ActionPort: '<S250>/Resets'
             */
            /* If: '<S225>/If1' incorporates:
             *  Constant: '<S237>/Calib'
             *  Constant: '<S238>/Calib'
             *  Constant: '<S239>/Calib'
             *  Constant: '<S240>/Calib'
             *  Constant: '<S241>/Calib'
             *  Constant: '<S242>/Calib'
             *  Constant: '<S243>/Calib'
             *  Constant: '<S244>/Calib'
             *  Constant: '<S245>/Calib'
             *  Constant: '<S246>/Calib'
             *  Constant: '<S247>/Calib'
             *  Product: '<S225>/Multiplication'
             *  Product: '<S225>/Multiplication1'
             *  Product: '<S225>/Multiplication10'
             *  Product: '<S225>/Multiplication2'
             *  Product: '<S225>/Multiplication3'
             *  Product: '<S225>/Multiplication4'
             *  Product: '<S225>/Multiplication5'
             *  Product: '<S225>/Multiplication6'
             *  Product: '<S225>/Multiplication7'
             *  Product: '<S225>/Multiplication8'
             *  Product: '<S225>/Multiplication9'
             *  Sum: '<S225>/Summation'
             *  UnitDelay: '<S225>/Unit Delay'
             *  UnitDelay: '<S225>/Unit Delay1'
             *  UnitDelay: '<S225>/Unit Delay2'
             *  UnitDelay: '<S225>/Unit Delay3'
             *  UnitDelay: '<S225>/Unit Delay4'
             *  UnitDelay: '<S225>/Unit Delay5'
             *  UnitDelay: '<S225>/Unit Delay6'
             *  UnitDelay: '<S225>/Unit Delay7'
             *  UnitDelay: '<S225>/Unit Delay8'
             *  UnitDelay: '<S225>/Unit Delay9'
             */
            EPCR_ac_Calc_TF(EPCR_ac_B.VariantMergeForOutportPulseTorqEst,
                            EPCR_ac_DW.UnitDelay_DSTATE_d,
                            EPCR_ac_DW.UnitDelay3_DSTATE_i,
                            EPCR_ac_DW.UnitDelay4_DSTATE_l,
                            EPCR_ac_DW.UnitDelay6_DSTATE_b,
                            ((((((((((EPCR_ac_B.VariantMergeForOutportPulseTorqEst
                * KeEPCR_K_TbShpN5_InParkOrNeutral) +
                (EPCR_ac_DW.UnitDelay_DSTATE_d *
                 KeEPCR_K_TbShpN4_InParkOrNeutral)) +
                                    (EPCR_ac_DW.UnitDelay3_DSTATE_i *
                KeEPCR_K_TbShpN3_InParkOrNeutral)) +
                                   (EPCR_ac_DW.UnitDelay4_DSTATE_l *
                                    KeEPCR_K_TbShpN2_InParkOrNeutral)) +
                                  (EPCR_ac_DW.UnitDelay6_DSTATE_b *
                                   KeEPCR_K_TbShpN1_InParkOrNeutral)) +
                                 (EPCR_ac_DW.UnitDelay7_DSTATE_l *
                                  KeEPCR_K_TbShpN0_InParkOrNeutral)) -
                                (EPCR_ac_DW.UnitDelay1_DSTATE_a *
                                 KeEPCR_K_TbShpD4_InParkOrNeutral)) -
                               (EPCR_ac_DW.UnitDelay2_DSTATE_m *
                                KeEPCR_K_TbShpD3_InParkOrNeutral)) -
                              (EPCR_ac_DW.UnitDelay5_DSTATE_p *
                               KeEPCR_K_TbShpD2_InParkOrNeutral)) -
                             (EPCR_ac_DW.UnitDelay8_DSTATE_a *
                              KeEPCR_K_TbShpD1_InParkOrNeutral)) -
                            (EPCR_ac_DW.UnitDelay9_DSTATE_a *
                             KeEPCR_K_TbShpD0_InParkOrNeutral),
                            EPCR_ac_DW.UnitDelay1_DSTATE_a,
                            EPCR_ac_DW.UnitDelay2_DSTATE_m,
                            EPCR_ac_DW.UnitDelay5_DSTATE_p,
                            EPCR_ac_DW.UnitDelay8_DSTATE_a,
                            &EPCR_ac_DW.UnitDelay_DSTATE_d,
                            &EPCR_ac_DW.UnitDelay3_DSTATE_i,
                            &EPCR_ac_DW.UnitDelay4_DSTATE_l,
                            &EPCR_ac_DW.UnitDelay6_DSTATE_b,
                            &EPCR_ac_DW.UnitDelay7_DSTATE_l,
                            &EPCR_ac_DW.UnitDelay1_DSTATE_a,
                            &EPCR_ac_DW.UnitDelay2_DSTATE_m,
                            &EPCR_ac_DW.UnitDelay5_DSTATE_p,
                            &EPCR_ac_DW.UnitDelay8_DSTATE_a,
                            &EPCR_ac_DW.UnitDelay9_DSTATE_a);

            /* End of Outputs for SubSystem: '<S225>/Calc_TF' */
        }

        /* End of Outputs for SubSystem: '<S160>/In_Park_or_Neutral' */
    }

    /* End of If: '<S160>/If' */
    /* End of Outputs for SubSystem: '<S148>/ShapePulseCancel' */

    /* If: '<S148>/If2' incorporates:
     *  Inport: '<Root>/VeTSXR_e_HTDRToConstrnType'
     *  Logic: '<S148>/Logical'
     *  RelationalOperator: '<S148>/Comparison1'
     *  RelationalOperator: '<S148>/Comparison4'
     *  VariantMerge generated from: '<S266>/VeEPCR_e_EngAngleSource'
     */
    if ((((uint32)tmpRead_0) == CeTSXR_e_Mode) && (((uint32)
            EPCR_ac_B.VariantMergeForOutportVeEPCR_e_EngAngleS) !=
            CeEPCR_e_NoSourceAvail))
    {
        /* Outputs for Atomic SubSystem: '<S148>/ShapePulseCancel' */
        /* Switch: '<S179>/Switch1' incorporates:
         *  UnitDelay: '<S196>/Unit Delay1'
         *  UnitDelay: '<S224>/Unit Delay1'
         */
        if (rtb_TmpSignalConversionAtEnable_ReadOutp)
        {
            rtb_TmpSignalConversionAtLeEPCR_phi_ExhV =
                EPCR_ac_DW.UnitDelay1_DSTATE_c;
        }
        else
        {
            rtb_TmpSignalConversionAtLeEPCR_phi_ExhV =
                EPCR_ac_DW.UnitDelay1_DSTATE_e;
        }

        /* End of Switch: '<S179>/Switch1' */
        /* End of Outputs for SubSystem: '<S148>/ShapePulseCancel' */

        /* Outputs for IfAction SubSystem: '<S148>/EPCC_NeutralEqn1' incorporates:
         *  ActionPort: '<S152>/Resets'
         */
        /* Merge: '<S148>/Merge2' incorporates:
         *  Product: '<S152>/Multiplication1'
         *  Selector: '<S152>/Selector'
         *  SignalConversion generated from: '<S1>/VaTSXR_r_HTDRToConstrn'
         */
        rtb_TmpSignalConversionAtVePLTR_p_Ambi_e =
            rtb_TmpSignalConversionAtLeEPCR_phi_ExhV *
            rtb_TmpSignalConversionAtVaTSXR_r_HTDRTo[18];

        /* End of Outputs for SubSystem: '<S148>/EPCC_NeutralEqn1' */

        /* Outputs for Atomic SubSystem: '<S148>/ShapePulseCancel' */
        /* Switch: '<S180>/Switch1' incorporates:
         *  UnitDelay: '<S197>/Unit Delay1'
         *  UnitDelay: '<S225>/Unit Delay1'
         */
        if (rtb_TmpSignalConversionAtEnable_ReadOutp)
        {
            rtb_TmpSignalConversionAtLeEPCR_phi_ExhV =
                EPCR_ac_DW.UnitDelay1_DSTATE_a;
        }
        else
        {
            rtb_TmpSignalConversionAtLeEPCR_phi_ExhV =
                EPCR_ac_DW.UnitDelay1_DSTATE_p;
        }

        /* End of Switch: '<S180>/Switch1' */
        /* End of Outputs for SubSystem: '<S148>/ShapePulseCancel' */

        /* Outputs for IfAction SubSystem: '<S148>/EPCC_NeutralEqn1' incorporates:
         *  ActionPort: '<S152>/Resets'
         */
        /* Merge: '<S148>/Merge3' incorporates:
         *  Product: '<S152>/Multiplication3'
         *  Selector: '<S152>/Selector1'
         *  SignalConversion generated from: '<S1>/VaTSXR_r_HTDRToConstrn'
         */
        EPCR_ac_B.VariantMergeForOutportMtrACancelTorqRaw =
            rtb_TmpSignalConversionAtLeEPCR_phi_ExhV *
            rtb_TmpSignalConversionAtVaTSXR_r_HTDRTo[19];

        /* End of Outputs for SubSystem: '<S148>/EPCC_NeutralEqn1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S148>/EPCC_Invalid1' incorporates:
         *  ActionPort: '<S151>/Resets'
         */
        /* Merge: '<S148>/Merge2' incorporates:
         *  Constant: '<S151>/Constant Value'
         *  SignalConversion generated from: '<S151>/Ta'
         */
        rtb_TmpSignalConversionAtVePLTR_p_Ambi_e = 0.0F;

        /* Merge: '<S148>/Merge3' incorporates:
         *  Constant: '<S151>/Constant Value1'
         *  SignalConversion generated from: '<S151>/Tb'
         */
        EPCR_ac_B.VariantMergeForOutportMtrACancelTorqRaw = 0.0F;

        /* End of Outputs for SubSystem: '<S148>/EPCC_Invalid1' */
    }

    /* End of If: '<S148>/If2' */

    /* Outputs for Atomic SubSystem: '<S148>/Limiter1' */
    /* Switch: '<S157>/Switch1' incorporates:
     *  Constant: '<S156>/Calib'
     *  RelationalOperator: '<S157>/Relational Operator'
     */
    if (KeEPCR_M_MaxMtrBCancelTorq <
            EPCR_ac_B.VariantMergeForOutportMtrACancelTorqRaw)
    {
        /* Switch: '<S158>/Switch1' */
        EPCR_ac_B.VariantMergeForOutportMtrACancelTorqRaw =
            KeEPCR_M_MaxMtrBCancelTorq;
    }

    /* End of Switch: '<S157>/Switch1' */

    /* Switch: '<S157>/Switch' incorporates:
     *  Constant: '<S156>/Calib'
     *  Gain: '<S148>/Gain2'
     *  RelationalOperator: '<S157>/Relational Operator1'
     */
    if (EPCR_ac_B.VariantMergeForOutportMtrACancelTorqRaw >
            (-KeEPCR_M_MaxMtrBCancelTorq))
    {
        /* VariantMerge generated from: '<S146>/MtrBCancelTorqRaw' */
        EPCR_ac_B.VariantMergeForOutportMtrBCancelTorqRaw =
            EPCR_ac_B.VariantMergeForOutportMtrACancelTorqRaw;
    }
    else
    {
        /* VariantMerge generated from: '<S146>/MtrBCancelTorqRaw' */
        EPCR_ac_B.VariantMergeForOutportMtrBCancelTorqRaw =
            -KeEPCR_M_MaxMtrBCancelTorq;
    }

    /* End of Switch: '<S157>/Switch' */
    /* End of Outputs for SubSystem: '<S148>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S148>/Limiter3' */
    /* Switch: '<S158>/Switch1' incorporates:
     *  Constant: '<S155>/Calib'
     *  RelationalOperator: '<S158>/Relational Operator'
     */
    if (KeEPCR_M_MaxMtrACancelTorq < rtb_TmpSignalConversionAtVePLTR_p_Ambi_e)
    {
        /* Switch: '<S158>/Switch1' */
        EPCR_ac_B.VariantMergeForOutportMtrACancelTorqRaw =
            KeEPCR_M_MaxMtrACancelTorq;
    }
    else
    {
        /* Switch: '<S158>/Switch1' */
        EPCR_ac_B.VariantMergeForOutportMtrACancelTorqRaw =
            rtb_TmpSignalConversionAtVePLTR_p_Ambi_e;
    }

    /* End of Switch: '<S158>/Switch1' */

    /* Switch: '<S158>/Switch' incorporates:
     *  Constant: '<S155>/Calib'
     *  Gain: '<S148>/Gain3'
     *  RelationalOperator: '<S158>/Relational Operator1'
     */
    if (EPCR_ac_B.VariantMergeForOutportMtrACancelTorqRaw <=
            (-KeEPCR_M_MaxMtrACancelTorq))
    {
        /* VariantMerge generated from: '<S146>/MtrACancelTorqRaw' */
        EPCR_ac_B.VariantMergeForOutportMtrACancelTorqRaw =
            -KeEPCR_M_MaxMtrACancelTorq;
    }

    /* End of Switch: '<S158>/Switch' */
    /* End of Outputs for SubSystem: '<S148>/Limiter3' */

    /* SignalConversion generated from: '<S1>/InitActive_write' */
    rtb_OutportBufferForInitActive_write_c = EPCR_ac_B.Gain;

    /* End of Outputs for SubSystem: '<S146>/EPCC_CalcAddedMtrTrq' */
    /* End of Outputs for SubSystem: '<S7>/EPCC_CalcAddedMtrTrq' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#else

    /* Outputs for Atomic SubSystem: '<S146>/CalcMtrTrq_PxPy' */
    /* VariantMerge generated from: '<S146>/MtrACancelTorqRaw' incorporates:
     *  Constant: '<S147>/Constant Value'
     *  Gain: '<S149>/Gain'
     */
    EPCR_ac_B.VariantMergeForOutportMtrACancelTorqRaw = 0.0F;

    /* VariantMerge generated from: '<S146>/MtrBCancelTorqRaw' incorporates:
     *  Constant: '<S147>/Constant Value1'
     *  Gain: '<S150>/Gain'
     */
    EPCR_ac_B.VariantMergeForOutportMtrBCancelTorqRaw = 0.0F;

    /* End of Outputs for SubSystem: '<S146>/CalcMtrTrq_PxPy' */
#endif

    /* End of SignalConversion generated from: '<S1>/InitActive_write' */

    /* Outport: '<Root>/VeEPCR_M_MtrACancelTorqRaw' incorporates:
     *  SignalConversion generated from: '<S1>/MtrACancelTorqRaw'
     */
    (void)Rte_Write_VeEPCR_M_MtrACancelTorqRaw_Value
        (EPCR_ac_B.VariantMergeForOutportMtrACancelTorqRaw);

    /* Outport: '<Root>/VeEPCR_M_MtrBCancelTorqRaw' incorporates:
     *  SignalConversion generated from: '<S1>/MtrBCancelTorqRaw'
     */
    (void)Rte_Write_VeEPCR_M_MtrBCancelTorqRaw_Value
        (EPCR_ac_B.VariantMergeForOutportMtrBCancelTorqRaw);

    /* Outport: '<Root>/VeEPCR_M_EngPulseTorqEst' incorporates:
     *  SignalConversion generated from: '<S1>/PulseTorqEst'
     */
    (void)Rte_Write_VeEPCR_M_EngPulseTorqEst_Value
        (EPCR_ac_B.VariantMergeForOutportPulseTorqEst);

    /* Outport: '<Root>/VeEPCR_phi_EngAngle720Est' incorporates:
     *  SignalConversion generated from: '<S1>/VeEPCR_phi_EngAngle720Est'
     */
    (void)Rte_Write_VeEPCR_phi_EngAngle720Est_Value
        (EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_EngAngl);

    /* SignalConversion generated from: '<S1>/InitActive_write' */
#if Rte_SysCon_Variant_EPCR_FuncEnable

    /* Merge: '<Root>/InitActive_IRV_Merge' */
    Rte_IrvWrite_EPCR_FastTEF_InitActive_write_IRV
        (rtb_OutportBufferForInitActive_write_c);

#endif

    /* End of SignalConversion generated from: '<S1>/InitActive_write' */

    /* Merge: '<Root>/VaEPCR_e_LifterState_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/VaEPCR_e_LifterState_write'
     */
    Rte_IrvWrite_EPCR_FastTEF_VaEPCR_e_LifterState_write_IRV
        (EPCR_ac_B.VariantMergeForOutportVaEPCR_e_LifterSta);

    /* Merge: '<Root>/VaEPCR_e_ValveState_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/VaEPCR_e_ValveState_write'
     */
    Rte_IrvWrite_EPCR_FastTEF_VaEPCR_e_ValveState_write_IRV
        (EPCR_ac_B.VariantMergeForOutportVaEPCR_e_ValveStat);

    /* Merge: '<Root>/VaEPCR_p_CylPres_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/VaEPCR_p_CylPres_write'
     */
    Rte_IrvWrite_EPCR_FastTEF_VaEPCR_p_CylPres_write_IRV
        (EPCR_ac_B.VariantMergeForOutportVaEPCR_p_CylPres);

    /* Merge: '<Root>/VeEPCR_phi_DamperTwistEst_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/VeEPCR_phi_DamperTwistEst_write'
     * */
    Rte_IrvWrite_EPCR_FastTEF_VeEPCR_phi_DamperTwistEst_write_IRV
        (EPCR_ac_B.VariantMergeForOutportVeEPCR_phi_InputAn);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model step function for TID2 */
#if Rte_SysCon_Variant_EPCR_FuncEnable

FUNC(void, EPCR_CODE) EPCR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_TmpSignalConversionAtLaEPCR_V_DispVs[181];

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    TeEPCR_e_ValveSt rtb_TmpSignalConversionAtVaEPCR_e_ValveS[8];

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_TmpSignalConversionAtVaEPCR_p_CylPre[8];

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    TeEPCR_e_LifterSt rtb_TmpSignalConversionAtVaEPCR_e_Lifter[8];

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    TeESSR_e_EngStartStopSt rtb_TmpSignalConversionAtVeESSR_e_EngSta;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_Subtraction_j;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    boolean rtb_TmpSignalConversionAtInitActive_Read;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_TmpSignalConversionAtVePLTR_p_Ambien;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_LaEPCR_p_InitCylPresOld[8];

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_TmpSignalConversionAtVeTISR_n_InputS;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    sint32 s320_iter;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    uint8 rtb_TmpSignalConversionAtLeEPCR_Cnt_EngC;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    sint32 s316_iter;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    sint32 s318_iter;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    boolean rtb_Comparison2;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    boolean rtb_AND_e;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    TeEPCR_e_LifterSt tmp;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    TeEPCR_e_ValveSt tmp_0;

#endif

#if Rte_SysCon_Variant_EPCR_FuncEnable

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* Outputs for Function Call SubSystem: '<Root>/EPCR_MedTED' */
    /* SignalConversion generated from: '<S2>/VeTISR_n_InputSpeedRaw' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeedRaw'
     */
    (void)Rte_Read_VeTISR_n_InputSpeedRaw_Value
        (&rtb_TmpSignalConversionAtVeTISR_n_InputS);

    /* SignalConversion generated from: '<S2>/VeESSR_e_EngStartStopSt' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&rtb_TmpSignalConversionAtVeESSR_e_EngSta);

    /* SignalConversion generated from: '<S2>/LeEPCR_Cnt_EngCylTotal_Read' incorporates:
     *  SignalConversion generated from: '<S4>/LeEPCR_Cnt_EngCylTotal_write'
     */
    rtb_TmpSignalConversionAtLeEPCR_Cnt_EngC =
        Rte_IrvRead_EPCR_MedTED_LeEPCR_Cnt_EngCylTotal_write1_IRV();

    /* SignalConversion generated from: '<S2>/VaEPCR_p_CylPres_Read' */
    Rte_IrvRead_EPCR_MedTED_VaEPCR_p_CylPres_write_IRV
        (rtb_TmpSignalConversionAtVaEPCR_p_CylPre);

    /* SignalConversion generated from: '<S2>/VePLTR_p_AmbientAirPrs' incorporates:
     *  Inport: '<Root>/VePLTR_p_AmbientAirPrs'
     */
    (void)Rte_Read_VePLTR_p_AmbientAirPrs_Value
        (&rtb_TmpSignalConversionAtVePLTR_p_Ambien);

    /* SignalConversion generated from: '<S2>/InitActive_Read' incorporates:
     *  Merge: '<Root>/InitActive_IRV_Merge'
     */
    rtb_TmpSignalConversionAtInitActive_Read =
        Rte_IrvRead_EPCR_MedTED_InitActive_write_IRV();

    /* SignalConversion generated from: '<S2>/LaEPCR_V_DispVsAngle_Read' */
    Rte_IrvRead_EPCR_MedTED_LaEPCR_V_DispVsAngle_write1_IRV
        (rtb_TmpSignalConversionAtLaEPCR_V_DispVs);

    /* SignalConversion generated from: '<S2>/VaEPCR_e_ValveState_Read' */
    Rte_IrvRead_EPCR_MedTED_VaEPCR_e_ValveState_write_IRV
        (rtb_TmpSignalConversionAtVaEPCR_e_ValveS);

    /* SignalConversion generated from: '<S2>/VaEPCR_e_LifterState_Read' */
    Rte_IrvRead_EPCR_MedTED_VaEPCR_e_LifterState_write_IRV
        (rtb_TmpSignalConversionAtVaEPCR_e_Lifter);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/DtrmExecutionEnable'
     */
    /* Outputs for Atomic SubSystem: '<S311>/ExecutionEnable' */
    /* Outputs for Atomic SubSystem: '<S365>/Functional' */
    /* RelationalOperator: '<S368>/Comparison2' incorporates:
     *  Constant: '<S371>/Constant'
     */
    rtb_Comparison2 = (((uint32)rtb_TmpSignalConversionAtVeESSR_e_EngSta) ==
                       CeESSR_e_StartEngSt);

    /* Outputs for Atomic SubSystem: '<S368>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S374>/EdgeRising' */
    /* Logic: '<S375>/AND' incorporates:
     *  Logic: '<S375>/OR1'
     *  UnitDelay: '<S375>/Unit Delay'
     */
    rtb_AND_e = (rtb_Comparison2 && (!EPCR_ac_DW.UnitDelay_DSTATE_m));

    /* Update for UnitDelay: '<S375>/Unit Delay' */
    EPCR_ac_DW.UnitDelay_DSTATE_m = rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S374>/EdgeRising' */

    /* Switch: '<S374>/Switch1' incorporates:
     *  Constant: '<S372>/Calib'
     *  Constant: '<S373>/Calib'
     *  Constant: '<S374>/Constant Value1'
     *  Logic: '<S374>/OR'
     *  Logic: '<S374>/OR1'
     *  MinMax: '<S374>/Minimum'
     *  Sum: '<S374>/Summation'
     *  UnitDelay: '<S374>/Unit Delay'
     */
    if ((!rtb_Comparison2) || rtb_AND_e)
    {
        EPCR_ac_DW.UnitDelay_DSTATE_c = 0.0F;
    }
    else
    {
        EPCR_ac_DW.UnitDelay_DSTATE_c = fminf(KeEPCR_t_CylTorqRmpOffFuelOnDly,
            HeEPCR_t_MedTED_dT + EPCR_ac_DW.UnitDelay_DSTATE_c);
    }

    /* End of Switch: '<S374>/Switch1' */

    /* Logic: '<S367>/Logical3' incorporates:
     *  Constant: '<S367>/Constant Value'
     *  Constant: '<S369>/Calib'
     *  Constant: '<S370>/Constant'
     *  Constant: '<S373>/Calib'
     *  Logic: '<S367>/Logical1'
     *  Logic: '<S367>/Logical2'
     *  Logic: '<S368>/Logical1'
     *  Logic: '<S374>/AND'
     *  RelationalOperator: '<S367>/Comparison'
     *  RelationalOperator: '<S367>/Comparison1'
     *  RelationalOperator: '<S368>/Comparison1'
     *  RelationalOperator: '<S374>/Greater  Than'
     *  SignalConversion generated from: '<S2>/VeEPCR_n_CylTorqRmpOffNi_Read'
     *  SignalConversion generated from: '<S4>/VeEPCR_n_CylTorqRmpOffNi_write'
     *  UnitDelay: '<S374>/Unit Delay'
     */
    rtb_Comparison2 = ((((rtb_TmpSignalConversionAtVeTISR_n_InputS > -200.0F) &&
                         (rtb_TmpSignalConversionAtVeTISR_n_InputS <
                          Rte_IrvRead_EPCR_MedTED_VeEPCR_n_CylTorqRmpOffNi_write_IRV
                          ())) && ((CeESSR_e_EngRunning != ((uint32)
                           rtb_TmpSignalConversionAtVeESSR_e_EngSta)) &&
                         ((!rtb_Comparison2) || (EPCR_ac_DW.UnitDelay_DSTATE_c <
                           KeEPCR_t_CylTorqRmpOffFuelOnDly)))) ||
                       (KeEPCR_b_CylTorqMdlAlwysOn));

    /* End of Outputs for SubSystem: '<S368>/TurnOnDelayTime' */
    /* End of Outputs for SubSystem: '<S365>/Functional' */
    /* End of Outputs for SubSystem: '<S311>/ExecutionEnable' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CalcCylData'
     */
    /* Outputs for Atomic SubSystem: '<S310>/CalcCylData' */
    /* Outputs for Atomic SubSystem: '<S312>/CalcCylDataFunctional' */
    /* Outputs for Atomic SubSystem: '<S315>/EdgeRising' */
    /* Logic: '<S363>/AND' incorporates:
     *  Logic: '<S363>/OR1'
     *  UnitDelay: '<S363>/Unit Delay'
     */
    VeEPCR_b_CalcCylDataEnaPulse = (rtb_Comparison2 &&
        (!EPCR_ac_DW.UnitDelay_DSTATE_iq));

    /* Update for UnitDelay: '<S363>/Unit Delay' */
    EPCR_ac_DW.UnitDelay_DSTATE_iq = rtb_Comparison2;

    /* End of Outputs for SubSystem: '<S315>/EdgeRising' */

    /* If: '<S315>/If' incorporates:
     *  Inport: '<Root>/VeENGR_p_EngManfldAbsPrs'
     */
    if (rtb_Comparison2)
    {
        (void)Rte_Read_VeENGR_p_EngManfldAbsPrs_Value(&tmpRead);

        /* Outputs for IfAction SubSystem: '<S315>/IfActionSubsystem' incorporates:
         *  ActionPort: '<S364>/Action Port'
         */
        /* S-Function (fcgen): '<S364>/Function_Call_Generator' incorporates:
         *  SubSystem: '<S313>/CalcCylData'
         */

        /* Outputs for Iterator SubSystem: '<S314>/LifterLeakDwn' incorporates:
         *  ForIterator: '<S318>/For Iterator'
         */
        for (s318_iter = 0; s318_iter < ((sint32)
                rtb_TmpSignalConversionAtLeEPCR_Cnt_EngC); s318_iter++)
        {
            /* RelationalOperator: '<S318>/Comparison4' incorporates:
             *  RelationalOperator: '<S318>/Comparison1'
             *  Selector: '<S318>/Selector1'
             *  SignalConversion generated from: '<S2>/VaEPCR_e_LifterState_Read'
             */
            tmp = rtb_TmpSignalConversionAtVaEPCR_e_Lifter[s318_iter];

            /* If: '<S318>/If1' incorporates:
             *  Constant: '<S341>/Constant'
             *  Constant: '<S342>/Constant'
             *  Logic: '<S318>/Logical1'
             *  RelationalOperator: '<S318>/Comparison1'
             *  RelationalOperator: '<S318>/Comparison4'
             */
            if ((VeEPCR_b_CalcCylDataEnaPulse) || (CeEPCR_e_LifterReset ==
                    ((uint32)tmp)))
            {
                /* Outputs for IfAction SubSystem: '<S318>/ResetLifterLeak' incorporates:
                 *  ActionPort: '<S345>/Action Port'
                 */
                /* Assignment: '<S318>/ArrayAssignment7' incorporates:
                 *  Constant: '<S345>/Constant Value'
                 *  Merge: '<S318>/Merge2'
                 *  SignalConversion generated from: '<S345>/LifterLeak'
                 */
                VaEPCR_l_LifterLeakDwn[(s318_iter)] = 0.0F;

                /* End of Outputs for SubSystem: '<S318>/ResetLifterLeak' */
            }
            else if (((uint32)tmp) == CeEPCR_e_LifterLeaking)
            {
                /* Outputs for IfAction SubSystem: '<S318>/IntakeOpenLifterLeaking' incorporates:
                 *  ActionPort: '<S343>/Action Port'
                 */
                /* Switch: '<S346>/Switch1' incorporates:
                 *  Constant: '<S348>/Calib'
                 *  Gain: '<S343>/Gain'
                 */
                if (rtb_TmpSignalConversionAtInitActive_Read)
                {
                    rtb_Subtraction_j = 25.0F * KeEPCR_l_LifterLeakInc;
                }
                else
                {
                    rtb_Subtraction_j = KeEPCR_l_LifterLeakInc;
                }

                /* End of Switch: '<S346>/Switch1' */

                /* Sum: '<S343>/Summation' incorporates:
                 *  Selector: '<S318>/Selector2'
                 */
                rtb_Subtraction_j += EPCR_ac_DW.UnitDelay1_DSTATE[s318_iter];

                /* Outputs for Atomic SubSystem: '<S343>/Limiter' */
                /* Switch: '<S349>/Switch1' incorporates:
                 *  Constant: '<S347>/Calib'
                 *  RelationalOperator: '<S349>/RelationalOperator'
                 *  Selector: '<S343>/Selector2'
                 */
                if (KaEPCR_l_LifterLeakMax[(s318_iter)] < rtb_Subtraction_j)
                {
                    /* Switch: '<S349>/Switch1' */
                    rtb_Subtraction_j = KaEPCR_l_LifterLeakMax[(s318_iter)];
                }

                /* End of Switch: '<S349>/Switch1' */

                /* Switch: '<S349>/Switch' incorporates:
                 *  Constant: '<S343>/Constant Value'
                 *  RelationalOperator: '<S349>/RelationalOperator1'
                 */
                if (rtb_Subtraction_j > 0.0F)
                {
                    /* Assignment: '<S318>/ArrayAssignment7' incorporates:
                     *  Merge: '<S318>/Merge2'
                     */
                    VaEPCR_l_LifterLeakDwn[(s318_iter)] = rtb_Subtraction_j;
                }
                else
                {
                    /* Assignment: '<S318>/ArrayAssignment7' incorporates:
                     *  Merge: '<S318>/Merge2'
                     */
                    VaEPCR_l_LifterLeakDwn[(s318_iter)] = 0.0F;
                }

                /* End of Switch: '<S349>/Switch' */
                /* End of Outputs for SubSystem: '<S343>/Limiter' */
                /* End of Outputs for SubSystem: '<S318>/IntakeOpenLifterLeaking' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S318>/CloseToIntakeOpenDoNothing' incorporates:
                 *  ActionPort: '<S340>/Action Port'
                 */
                /* Assignment: '<S318>/ArrayAssignment7' incorporates:
                 *  Inport: '<S340>/LifterLeakAngle'
                 *  Merge: '<S318>/Merge2'
                 *  Selector: '<S318>/Selector2'
                 */
                VaEPCR_l_LifterLeakDwn[(s318_iter)] =
                    EPCR_ac_DW.UnitDelay1_DSTATE[s318_iter];

                /* End of Outputs for SubSystem: '<S318>/CloseToIntakeOpenDoNothing' */
            }

            /* End of If: '<S318>/If1' */
        }

        /* End of Outputs for SubSystem: '<S314>/LifterLeakDwn' */

        /* Outputs for Iterator SubSystem: '<S314>/CalcIVC' incorporates:
         *  ForIterator: '<S316>/For Iterator'
         */
        for (s316_iter = 0; s316_iter < ((sint32)
                rtb_TmpSignalConversionAtLeEPCR_Cnt_EngC); s316_iter++)
        {
            /* Sum: '<S316>/Sum2' incorporates:
             *  Constant: '<S321>/Calib'
             *  Constant: '<S324>/Calib'
             *  Product: '<S316>/Product1'
             *  Selector: '<S316>/Selector2'
             */
            VaEPCR_phi_IntVlvOpen[(s316_iter)] = (VaEPCR_l_LifterLeakDwn
                [(s316_iter)] * KeEPCR_k_IntVlvOpenVsLift) +
                KeEPCR_phi_IntVlvOpen;

            /* Assignment: '<S316>/ArrayAssignment7' incorporates:
             *  Constant: '<S322>/Calib'
             *  Constant: '<S323>/Calib'
             *  Lookup_n-D: '<S325>/Vector'
             *  Product: '<S316>/Product'
             *  Selector: '<S316>/Selector2'
             *  Sum: '<S316>/Sum'
             *  Sum: '<S316>/Sum1'
             */
            VaEPCR_phi_IntVlvCls[(s316_iter)] = look1_iflf_binlca_16a
                (((rtb_TmpSignalConversionAtVeTISR_n_InputS *
                   KeEPCR_k_LiftAtIVCvsRPM) + KeEPCR_k_LiftAtIVCOffset) +
                 VaEPCR_l_LifterLeakDwn[(s316_iter)], ((const float32 *)
                  &(KxEPCR_l_IntakeLiftVsAngle[0])), ((const float32 *)
                  &(KtEPCR_l_IntakeLiftVsAngle[0])), 15U);
            for (s318_iter = 0; s318_iter < 8; s318_iter++)
            {
                /* SignalConversion: '<S316>/SignalConversion' */
                EPCR_ac_B.VaEPCR_phi_IntVlvCls_i[s318_iter] =
                    VaEPCR_phi_IntVlvCls[(s318_iter)];

                /* SignalConversion: '<S316>/SignalConversion1' */
                EPCR_ac_B.VaEPCR_phi_IntVlvOpen_c[s318_iter] =
                    VaEPCR_phi_IntVlvOpen[(s318_iter)];
            }
        }

        /* End of Outputs for SubSystem: '<S314>/CalcIVC' */
        for (s318_iter = 0; s318_iter < 8; s318_iter++)
        {
            /* UnitDelay: '<S314>/Unit Delay' */
            rtb_LaEPCR_p_InitCylPresOld[s318_iter] =
                EPCR_ac_DW.UnitDelay_DSTATE[s318_iter];
        }

        /* Outputs for Iterator SubSystem: '<S314>/CylPressLeak' incorporates:
         *  ForIterator: '<S317>/For Iterator'
         */
        for (s316_iter = 0; s316_iter < ((sint32)
                rtb_TmpSignalConversionAtLeEPCR_Cnt_EngC); s316_iter++)
        {
            /* If: '<S317>/If' incorporates:
             *  Constant: '<S327>/Constant'
             *  Constant: '<S328>/Constant'
             *  Inport: '<S330>/AmbientAirPrs'
             *  Inport: '<S332>/VeECMR_p_BarManifoldAbsPrs'
             *  Merge: '<S317>/Merge'
             *  RelationalOperator: '<S317>/Equal'
             *  RelationalOperator: '<S317>/Equal1'
             */
            if (rtb_TmpSignalConversionAtInitActive_Read)
            {
                /* Outputs for IfAction SubSystem: '<S317>/Initialize' incorporates:
                 *  ActionPort: '<S331>/Action Port'
                 */
                /* Sum: '<S331>/Subtraction' incorporates:
                 *  Selector: '<S331>/Selector1'
                 *  SignalConversion generated from: '<S2>/VaEPCR_p_CylPres_Read'
                 */
                rtb_Subtraction_j =
                    rtb_TmpSignalConversionAtVaEPCR_p_CylPre[s316_iter] -
                    rtb_TmpSignalConversionAtVePLTR_p_Ambien;

                /* Switch: '<S337>/Switch1' incorporates:
                 *  Constant: '<S337>/Constant Value'
                 *  Constant: '<S337>/Constant Value1'
                 *  Gain: '<S337>/Gain'
                 *  Gain: '<S337>/Gain2'
                 *  RelationalOperator: '<S337>/Comparison'
                 *  RelationalOperator: '<S337>/Comparison2'
                 *  Switch: '<S337>/Switch'
                 */
                if (rtb_Subtraction_j < 0.0F)
                {
                    rtb_Subtraction_j *= 0.42F;
                }
                else if (rtb_Subtraction_j > 193.0F)
                {
                    /* Switch: '<S337>/Switch' incorporates:
                     *  Constant: '<S337>/Constant Value2'
                     *  Gain: '<S337>/Gain1'
                     *  Sum: '<S337>/Sum'
                     */
                    rtb_Subtraction_j = (0.018F * rtb_Subtraction_j) + 12.0F;
                }
                else
                {
                    rtb_Subtraction_j *= 0.08F;
                }

                /* End of Switch: '<S337>/Switch1' */

                /* Sum: '<S331>/Subtraction1' incorporates:
                 *  Constant: '<S338>/Calib'
                 *  Merge: '<S317>/Merge'
                 *  Product: '<S331>/Product'
                 *  Selector: '<S331>/Selector2'
                 */
                VaEPCR_p_InitialCylPrs[(s316_iter)] =
                    rtb_LaEPCR_p_InitCylPresOld[s316_iter] - (rtb_Subtraction_j *
                    KeEPCR_k_CylLeakInitGain);

                /* End of Outputs for SubSystem: '<S317>/Initialize' */
            }
            else
            {
                /* RelationalOperator: '<S317>/Equal' incorporates:
                 *  RelationalOperator: '<S317>/Equal1'
                 *  Selector: '<S317>/Selector1'
                 *  SignalConversion generated from: '<S2>/VaEPCR_e_ValveState_Read'
                 */
                tmp_0 = rtb_TmpSignalConversionAtVaEPCR_e_ValveS[s316_iter];
                if ((CeEPCR_e_IntakeOpen == ((uint32)tmp_0)) ||
                        (VeEPCR_b_CalcCylDataEnaPulse))
                {
                    /* Outputs for IfAction SubSystem: '<S317>/IntakeOpen' incorporates:
                     *  ActionPort: '<S332>/Action Port'
                     */
                    VaEPCR_p_InitialCylPrs[(s316_iter)] = tmpRead;

                    /* End of Outputs for SubSystem: '<S317>/IntakeOpen' */
                }
                else if (((uint32)tmp_0) == CeEPCR_e_ExhaustOpen)
                {
                    /* Outputs for IfAction SubSystem: '<S317>/ExhaustOpen' incorporates:
                     *  ActionPort: '<S330>/Action Port'
                     */
                    VaEPCR_p_InitialCylPrs[(s316_iter)] =
                        rtb_TmpSignalConversionAtVePLTR_p_Ambien;

                    /* End of Outputs for SubSystem: '<S317>/ExhaustOpen' */
                }
                else
                {
                    /* Outputs for IfAction SubSystem: '<S317>/CylClosed' incorporates:
                     *  ActionPort: '<S329>/Action Port'
                     */
                    /* Sum: '<S329>/Subtraction' incorporates:
                     *  Selector: '<S329>/Selector1'
                     *  SignalConversion generated from: '<S2>/VaEPCR_p_CylPres_Read'
                     */
                    rtb_Subtraction_j =
                        rtb_TmpSignalConversionAtVaEPCR_p_CylPre[s316_iter] -
                        rtb_TmpSignalConversionAtVePLTR_p_Ambien;

                    /* Switch: '<S334>/Switch1' incorporates:
                     *  Constant: '<S334>/Constant Value'
                     *  Constant: '<S334>/Constant Value1'
                     *  Gain: '<S334>/Gain'
                     *  Gain: '<S334>/Gain2'
                     *  RelationalOperator: '<S334>/Comparison'
                     *  RelationalOperator: '<S334>/Comparison2'
                     *  Switch: '<S334>/Switch'
                     */
                    if (rtb_Subtraction_j < 0.0F)
                    {
                        rtb_Subtraction_j *= 0.42F;
                    }
                    else if (rtb_Subtraction_j > 193.0F)
                    {
                        /* Switch: '<S334>/Switch' incorporates:
                         *  Constant: '<S334>/Constant Value2'
                         *  Gain: '<S334>/Gain1'
                         *  Sum: '<S334>/Sum'
                         */
                        rtb_Subtraction_j = (0.018F * rtb_Subtraction_j) + 12.0F;
                    }
                    else
                    {
                        rtb_Subtraction_j *= 0.08F;
                    }

                    /* End of Switch: '<S334>/Switch1' */

                    /* Sum: '<S329>/Subtraction1' incorporates:
                     *  Constant: '<S335>/Calib'
                     *  Merge: '<S317>/Merge'
                     *  Product: '<S329>/Product'
                     *  Selector: '<S329>/Selector2'
                     */
                    VaEPCR_p_InitialCylPrs[(s316_iter)] =
                        rtb_LaEPCR_p_InitCylPresOld[s316_iter] -
                        (rtb_Subtraction_j * KeEPCR_k_CylLeakGain);

                    /* End of Outputs for SubSystem: '<S317>/CylClosed' */
                }
            }

            /* End of If: '<S317>/If' */

            /* SignalConversion: '<S317>/SignalConversion' incorporates:
             *  UnitDelay: '<S314>/Unit Delay'
             */
            for (s318_iter = 0; s318_iter < 8; s318_iter++)
            {
                EPCR_ac_DW.UnitDelay_DSTATE[s318_iter] = VaEPCR_p_InitialCylPrs
                    [(s318_iter)];
            }

            /* End of SignalConversion: '<S317>/SignalConversion' */
        }

        /* End of Outputs for SubSystem: '<S314>/CylPressLeak' */
        for (s318_iter = 0; s318_iter < 8; s318_iter++)
        {
            /* UnitDelay: '<S314>/Unit Delay2' */
            rtb_TmpSignalConversionAtVaEPCR_p_CylPre[s318_iter] =
                EPCR_ac_DW.UnitDelay2_DSTATE[s318_iter];
        }

        /* Outputs for Iterator SubSystem: '<S314>/SetInitialVolumes' incorporates:
         *  ForIterator: '<S320>/For Iterator'
         */
        s316_iter = (sint32)rtb_TmpSignalConversionAtLeEPCR_Cnt_EngC;
        for (s320_iter = 0; s320_iter < s316_iter; s320_iter++)
        {
            /* RelationalOperator: '<S320>/Equal1' incorporates:
             *  RelationalOperator: '<S320>/Equal'
             *  Selector: '<S320>/Selector1'
             *  SignalConversion generated from: '<S2>/VaEPCR_e_ValveState_Read'
             */
            tmp_0 = rtb_TmpSignalConversionAtVaEPCR_e_ValveS[s320_iter];

            /* If: '<S320>/If' incorporates:
             *  Constant: '<S320>/Constant Value10'
             *  Constant: '<S351>/Constant'
             *  Constant: '<S352>/Constant'
             *  RelationalOperator: '<S320>/Equal'
             *  RelationalOperator: '<S320>/Equal1'
             *  RelationalOperator: '<S320>/GreaterThan'
             */
            if ((((CeEPCR_e_IntakeOpen == ((uint32)tmp_0)) ||
                    (rtb_TmpSignalConversionAtVeTISR_n_InputS > 1000.0F)) ||
                    rtb_TmpSignalConversionAtInitActive_Read) ||
                    (VeEPCR_b_CalcCylDataEnaPulse))
            {
                /* Outputs for IfAction SubSystem: '<S320>/IntakeOpen' incorporates:
                 *  ActionPort: '<S354>/Action Port'
                 */
                /* Switch: '<S362>/Switch1' incorporates:
                 *  Constant: '<S361>/Constant Value'
                 *  RelationalOperator: '<S361>/GreaterThan'
                 *  Selector: '<S354>/Selector3'
                 */
                if (EPCR_ac_B.VaEPCR_phi_IntVlvCls_i[s320_iter] <= 180.0F)
                {
                    /* Switch: '<S362>/Switch1' */
                    rtb_TmpSignalConversionAtVePLTR_p_Ambien =
                        EPCR_ac_B.VaEPCR_phi_IntVlvCls_i[s320_iter];
                }
                else
                {
                    /* Switch: '<S362>/Switch1' incorporates:
                     *  Constant: '<S361>/Constant Value1'
                     *  Sum: '<S361>/Subtraction'
                     */
                    rtb_TmpSignalConversionAtVePLTR_p_Ambien = 360.0F -
                        EPCR_ac_B.VaEPCR_phi_IntVlvCls_i[s320_iter];
                }

                /* End of Switch: '<S362>/Switch1' */

                /* Selector: '<S354>/Selector5' incorporates:
                 *  DataTypeConversion: '<S361>/FloatToFix'
                 *  Merge: '<S320>/Merge'
                 *  SignalConversion generated from: '<S2>/LaEPCR_V_DispVsAngle_Read'
                 */
                VaEPCR_V_InitialCylVol[(s320_iter)] =
                    rtb_TmpSignalConversionAtLaEPCR_V_DispVs[(uint16)
                    rtb_TmpSignalConversionAtVePLTR_p_Ambien];

                /* End of Outputs for SubSystem: '<S320>/IntakeOpen' */
            }
            else if (((uint32)tmp_0) == CeEPCR_e_ExhaustOpen)
            {
                /* Outputs for IfAction SubSystem: '<S320>/ExhaustOpen' incorporates:
                 *  ActionPort: '<S353>/Action Port'
                 */
                /* Switch: '<S360>/Switch1' incorporates:
                 *  Constant: '<S353>/Constant Value3'
                 *  Constant: '<S357>/Constant Value'
                 *  Constant: '<S357>/Constant Value1'
                 *  Constant: '<S358>/Calib'
                 *  RelationalOperator: '<S357>/GreaterThan'
                 *  Sum: '<S353>/Subtraction'
                 *  Sum: '<S357>/Subtraction'
                 */
                if ((KeEPCR_phi_ExhVlvOpen - 360.0F) <= 180.0F)
                {
                    rtb_TmpSignalConversionAtVePLTR_p_Ambien =
                        KeEPCR_phi_ExhVlvOpen - 360.0F;
                }
                else
                {
                    rtb_TmpSignalConversionAtVePLTR_p_Ambien = 360.0F -
                        (KeEPCR_phi_ExhVlvOpen - 360.0F);
                }

                /* End of Switch: '<S360>/Switch1' */

                /* Selector: '<S353>/Selector4' incorporates:
                 *  DataTypeConversion: '<S357>/FloatToFix'
                 *  Merge: '<S320>/Merge'
                 *  SignalConversion generated from: '<S2>/LaEPCR_V_DispVsAngle_Read'
                 */
                VaEPCR_V_InitialCylVol[(s320_iter)] =
                    rtb_TmpSignalConversionAtLaEPCR_V_DispVs[(uint16)
                    rtb_TmpSignalConversionAtVePLTR_p_Ambien];

                /* End of Outputs for SubSystem: '<S320>/ExhaustOpen' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S320>/ValvesClosed' incorporates:
                 *  ActionPort: '<S356>/Action Port'
                 */
                /* Selector: '<S356>/Selector2' incorporates:
                 *  Merge: '<S320>/Merge'
                 */
                VaEPCR_V_InitialCylVol[(s320_iter)] =
                    rtb_TmpSignalConversionAtVaEPCR_p_CylPre[s320_iter];

                /* End of Outputs for SubSystem: '<S320>/ValvesClosed' */
            }

            /* End of If: '<S320>/If' */

            /* SignalConversion: '<S320>/SignalConversion' incorporates:
             *  UnitDelay: '<S314>/Unit Delay2'
             */
            for (s318_iter = 0; s318_iter < 8; s318_iter++)
            {
                EPCR_ac_DW.UnitDelay2_DSTATE[s318_iter] =
                    VaEPCR_V_InitialCylVol[(s318_iter)];
            }

            /* End of SignalConversion: '<S320>/SignalConversion' */
        }

        /* End of Outputs for SubSystem: '<S314>/SetInitialVolumes' */

        /* Update for UnitDelay: '<S314>/Unit Delay1' incorporates:
         *  Inport: '<Root>/VeENGR_p_EngManfldAbsPrs'
         */
        for (s318_iter = 0; s318_iter < 8; s318_iter++)
        {
            EPCR_ac_DW.UnitDelay1_DSTATE[s318_iter] = VaEPCR_l_LifterLeakDwn
                [(s318_iter)];
        }

        /* End of Update for UnitDelay: '<S314>/Unit Delay1' */

        /* End of Outputs for S-Function (fcgen): '<S364>/Function_Call_Generator' */
        /* End of Outputs for SubSystem: '<S315>/IfActionSubsystem' */
    }

    /* End of If: '<S315>/If' */
    /* End of Outputs for SubSystem: '<S312>/CalcCylDataFunctional' */
    /* End of Outputs for SubSystem: '<S310>/CalcCylData' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Merge: '<Root>/Enable_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/Enable_write'
     * */
    Rte_IrvWrite_EPCR_MedTED_Enable_write_IRV(rtb_Comparison2);

    /* Merge: '<Root>/VaEPCR_V_InitialCylVol_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VaEPCR_V_InitialCylVol_write'
     */
    Rte_IrvWrite_EPCR_MedTED_VaEPCR_V_InitialCylVol_write_IRV
        (EPCR_ac_DW.UnitDelay2_DSTATE);

    /* Merge: '<Root>/VaEPCR_p_InitialCylPrs_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VaEPCR_p_InitialCylPrs_write'
     */
    Rte_IrvWrite_EPCR_MedTED_VaEPCR_p_InitialCylPrs_write_IRV
        (EPCR_ac_DW.UnitDelay_DSTATE);

    /* Merge: '<Root>/VaEPCR_phi_IntVlvCls_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VaEPCR_phi_IntVlvCls_write'
     */
    Rte_IrvWrite_EPCR_MedTED_VaEPCR_phi_IntVlvCls_write_IRV
        (EPCR_ac_B.VaEPCR_phi_IntVlvCls_i);

    /* Merge: '<Root>/VaEPCR_phi_IntVlvOpen_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S2>/VaEPCR_phi_IntVlvOpen_write'
     */
    Rte_IrvWrite_EPCR_MedTED_VaEPCR_phi_IntVlvOpen_write_IRV
        (EPCR_ac_B.VaEPCR_phi_IntVlvOpen_c);

    /* End of Outputs for SubSystem: '<Root>/EPCR_MedTED' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

}

#endif

/* Model step function for TID3 */
FUNC(void, EPCR_CODE) EPCR_MedTEF(void) /* Explicit Task: MedTEF */
{
    /* (no output/update code required) */
}

/* Output function */
FUNC(void, EPCR_CODE) EPCR_PwrOn(void)
{
    sint32 s400_iter;

#if Rte_SysCon_Variant_EPCR_FuncEnable

    float32 rtb_Product_k;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/EPCR_PwrOn'
     */
#if Rte_SysCon_Variant_EPCR_FuncEnable

    /* S-Function (fcgen): '<S4>/FcnCallGen' */
    /* Outputs for Function Call SubSystem: '<S4>/InitCylTorqModel' */
    /* If: '<S394>/If' incorporates:
     *  Constant: '<S396>/Calib'
     *  DataStoreRead: '<S394>/Dsr_CylTorqMdlInitialized_DS'
     */
    if ((!VeEPCR_b_CylTorqMdlInitialized_DS) || (KeEPCR_b_ReInitCylTorqMdl))
    {
        /* Outputs for IfAction SubSystem: '<S394>/ReInitFromCals' incorporates:
         *  ActionPort: '<S398>/Action Port'
         */
        /* DataStoreWrite: '<S398>/Dsw_CylTorqMdlInitialized_DS1' incorporates:
         *  Constant: '<S398>/Constant Value'
         */
        VeEPCR_t_CylTorqMdlInitTmr_DS = 0.0F;

        /* DataStoreWrite: '<S398>/Dsw_CylTorqMdlInitialized_DS' incorporates:
         *  Constant: '<S398>/TRUE Constant'
         */
        VeEPCR_b_CylTorqMdlInitialized_DS = true;

        /* Product: '<S401>/Product' incorporates:
         *  Constant: '<S402>/Calib'
         *  Constant: '<S407>/Calib'
         */
        rtb_Product_k = ((float32)KeEPCR_Cnt_EngCylTotal) * HeEPCR_t_FastTEF_dT;

        /* Outputs for Atomic SubSystem: '<S401>/Protected Division' */
        /* Switch: '<S410>/Switch1' incorporates:
         *  Constant: '<S410>/Constant Value1'
         *  RelationalOperator: '<S410>/Not Equal1'
         */
        if (rtb_Product_k != 0.0F)
        {
            /* Switch: '<S410>/Switch1' incorporates:
             *  Constant: '<S401>/Constant Value'
             *  Product: '<S410>/Division'
             */
            rtb_Product_k = 30.0F / rtb_Product_k;
        }
        else
        {
            /* Switch: '<S410>/Switch1' */
            rtb_Product_k = 3.402823466E+38F;
        }

        /* End of Switch: '<S410>/Switch1' */
        /* End of Outputs for SubSystem: '<S401>/Protected Division' */

        /* MinMax: '<S401>/MinMax' incorporates:
         *  Constant: '<S401>/Constant Value1'
         *  Constant: '<S408>/Calib'
         *  Product: '<S401>/Product1'
         */
        EPCR_ac_B.MinMax = fminf(KeEPCR_n_CylTorqRmpOffNiMax, rtb_Product_k *
            1.15F);

        /* SignalConversion generated from: '<S398>/LeEPCR_Cnt_EngCylTotal' incorporates:
         *  Constant: '<S402>/Calib'
         */
        EPCR_ac_B.LeEPCR_Cnt_EngCylTotal = KeEPCR_Cnt_EngCylTotal;

        /* SignalConversion generated from: '<S398>/LeEPCR_phi_ExhVlvOpen' incorporates:
         *  Constant: '<S403>/Calib'
         */
        EPCR_ac_B.LeEPCR_phi_ExhVlvOpen = KeEPCR_phi_ExhVlvOpen;

        /* Outputs for Iterator SubSystem: '<S398>/BuildDispVsAngleArray' incorporates:
         *  ForIterator: '<S399>/For Iterator'
         */
        /* Outputs for Iterator SubSystem: '<S398>/BuildTorqVsAngleArray' incorporates:
         *  ForIterator: '<S400>/For Iterator'
         */
        for (s400_iter = 0; s400_iter < 181; s400_iter++)
        {
            /* Assignment: '<S400>/ArrayAssignment' incorporates:
             *  Gain: '<S400>/Gain'
             *  Lookup_n-D: '<S406>/Vector'
             */
            EPCR_ac_B.LaEPCR_k_TorqRatioVsAngle[s400_iter] =
                look1_is32bflftf_binlca_16a(s400_iter * 2, ((const float32 *)
                &(KxEPCR_k_TorqRatioVsAngle[0])), ((const float32 *)
                &(KtEPCR_k_TorqRatioVsAngle[0])), 36U);

            /* Assignment: '<S399>/ArrayAssignment' incorporates:
             *  Lookup_n-D: '<S405>/Vector'
             */
            EPCR_ac_B.LaEPCR_V_DispVsAngle[s400_iter] =
                look1_is32bflftf_binlca_16a(s400_iter, ((const float32 *)
                &(KxEPCR_V_DispVsAngle[0])), ((const float32 *)
                &(KtEPCR_V_DispVsAngle[0])), 18U);
        }

        /* End of Outputs for SubSystem: '<S398>/BuildTorqVsAngleArray' */
        /* End of Outputs for SubSystem: '<S398>/BuildDispVsAngleArray' */
        /* End of Outputs for SubSystem: '<S394>/ReInitFromCals' */
    }

    /* End of If: '<S394>/If' */
    /* End of Outputs for SubSystem: '<S4>/InitCylTorqModel' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S395>/VeEPCR_M_MtrACancelTorqRaw_Out_Init' */
    EPCR_ac_B.OutportBufferForVeEPCR_M_MtrACancelTorqR = 0.0F;

    /* SignalConversion generated from: '<S395>/VeEPCR_M_MtrBCancelTorqRaw_Out_Init' */
    EPCR_ac_B.OutportBufferForVeEPCR_M_MtrBCancelTorqR = 0.0F;

    /* SignalConversion generated from: '<S395>/VeEPCR_M_EngPulseTorqEst_Out_Init' */
    EPCR_ac_B.OutportBufferForVeEPCR_M_EngPulseTorqEst = 0.0F;

    /* SignalConversion generated from: '<S395>/VeEPCR_phi_EngAngle720Est_Out_Init' */
    EPCR_ac_B.OutportBufferForVeEPCR_phi_EngAngle720Es = 0.0F;

    /* SignalConversion generated from: '<S395>/VeEPCR_phi_DamperTwistEst_write' */
    EPCR_ac_B.OutportBufferForVeEPCR_phi_DamperTwistEs = 0.0F;

    /* SignalConversion generated from: '<S395>/InitActive_write' */
    EPCR_ac_B.OutportBufferForInitActive_write = false;

    /* SignalConversion generated from: '<S395>/Enable_write' */
    EPCR_ac_B.OutportBufferForEnable_write = false;
    for (s400_iter = 0; s400_iter < 8; s400_iter++)
    {
        /* SignalConversion generated from: '<S395>/VaEPCR_p_CylPres_write' */
        EPCR_ac_B.OutportBufferForVaEPCR_p_CylPres_write[s400_iter] = 0.0F;

        /* SignalConversion generated from: '<S395>/VaEPCR_e_ValveState_write' incorporates:
         *  Constant: '<S411>/Constant'
         */
        EPCR_ac_B.OutportBufferForVaEPCR_e_ValveState_writ[s400_iter] =
            EPCR_ac_ConstB.Constant[s400_iter];

        /* SignalConversion generated from: '<S395>/VaEPCR_e_LifterState_write' incorporates:
         *  Constant: '<S412>/Constant'
         */
        EPCR_ac_B.OutportBufferForVaEPCR_e_LifterState_wri[s400_iter] =
            EPCR_ac_ConstB.Constant_b[s400_iter];

        /* SignalConversion generated from: '<S395>/VaEPCR_p_InitialCylPrs_write' */
        EPCR_ac_B.OutportBufferForVaEPCR_p_InitialCylPrs_w[s400_iter] = 0.0F;

        /* SignalConversion generated from: '<S395>/VaEPCR_V_InitialCylVol_write' */
        EPCR_ac_B.OutportBufferForVaEPCR_V_InitialCylVol_w[s400_iter] = 0.0F;

        /* SignalConversion generated from: '<S395>/VaEPCR_phi_IntVlvCls_write' */
        EPCR_ac_B.OutportBufferForVaEPCR_phi_IntVlvCls_wri[s400_iter] = 0.0F;

        /* SignalConversion generated from: '<S395>/VaEPCR_phi_IntVlvOpen_write' */
        EPCR_ac_B.OutportBufferForVaEPCR_phi_IntVlvOpen_wr[s400_iter] = 0.0F;
    }

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeEPCR_M_EngPulseTorqEst' incorporates:
     *  SignalConversion generated from: '<S4>/VeEPCR_M_EngPulseTorqEst_Out_Init'
     */
    (void)Rte_Write_VeEPCR_M_EngPulseTorqEst_Value
        (EPCR_ac_B.OutportBufferForVeEPCR_M_EngPulseTorqEst);

    /* Outport: '<Root>/VeEPCR_M_MtrACancelTorqRaw' incorporates:
     *  SignalConversion generated from: '<S4>/VeEPCR_M_MtrACancelTorqRaw_Out_Init'
     */
    (void)Rte_Write_VeEPCR_M_MtrACancelTorqRaw_Value
        (EPCR_ac_B.OutportBufferForVeEPCR_M_MtrACancelTorqR);

    /* Outport: '<Root>/VeEPCR_M_MtrBCancelTorqRaw' incorporates:
     *  SignalConversion generated from: '<S4>/VeEPCR_M_MtrBCancelTorqRaw_Out_Init'
     */
    (void)Rte_Write_VeEPCR_M_MtrBCancelTorqRaw_Value
        (EPCR_ac_B.OutportBufferForVeEPCR_M_MtrBCancelTorqR);

    /* Outport: '<Root>/VeEPCR_phi_EngAngle720Est' incorporates:
     *  SignalConversion generated from: '<S4>/VeEPCR_phi_EngAngle720Est_Out_Init'
     */
    (void)Rte_Write_VeEPCR_phi_EngAngle720Est_Value
        (EPCR_ac_B.OutportBufferForVeEPCR_phi_EngAngle720Es);

    /* Merge: '<Root>/Enable_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/Enable_write'
     * */
    Rte_IrvWrite_EPCR_PwrOn_Enable_write_IRV
        (EPCR_ac_B.OutportBufferForEnable_write);

    /* Merge: '<Root>/InitActive_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/InitActive_write'
     * */
    Rte_IrvWrite_EPCR_PwrOn_InitActive_write_IRV
        (EPCR_ac_B.OutportBufferForInitActive_write);

    /* SignalConversion generated from: '<S4>/LaEPCR_V_DispVsAngle_write' incorporates:
     *  SignalConversion generated from: '<S4>/LaEPCR_k_TorqRatioVsAngle_write'
     *  SignalConversion generated from: '<S4>/LeEPCR_Cnt_EngCylTotal_write'
     *  SignalConversion generated from: '<S4>/LeEPCR_phi_ExhVlvOpen_write'
     */
#if Rte_SysCon_Variant_EPCR_FuncEnable

    /* SignalConversion generated from: '<S4>/LaEPCR_V_DispVsAngle_write' */
    Rte_IrvWrite_EPCR_PwrOn_LaEPCR_V_DispVsAngle_write1_IRV
        (EPCR_ac_B.LaEPCR_V_DispVsAngle);

    /* SignalConversion generated from: '<S4>/LaEPCR_k_TorqRatioVsAngle_write' */
    Rte_IrvWrite_EPCR_PwrOn_LaEPCR_k_TorqRatioVsAngle_write_IRV
        (EPCR_ac_B.LaEPCR_k_TorqRatioVsAngle);

    /* SignalConversion generated from: '<S4>/LeEPCR_Cnt_EngCylTotal_write' */
    Rte_IrvWrite_EPCR_PwrOn_LeEPCR_Cnt_EngCylTotal_write1_IRV
        (EPCR_ac_B.LeEPCR_Cnt_EngCylTotal);

    /* SignalConversion generated from: '<S4>/LeEPCR_phi_ExhVlvOpen_write' */
    Rte_IrvWrite_EPCR_PwrOn_LeEPCR_phi_ExhVlvOpen_write_IRV
        (EPCR_ac_B.LeEPCR_phi_ExhVlvOpen);

#endif

    /* End of SignalConversion generated from: '<S4>/LaEPCR_V_DispVsAngle_write' */

    /* Merge: '<Root>/VaEPCR_V_InitialCylVol_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VaEPCR_V_InitialCylVol_write'
     */
    Rte_IrvWrite_EPCR_PwrOn_VaEPCR_V_InitialCylVol_write_IRV
        (EPCR_ac_B.OutportBufferForVaEPCR_V_InitialCylVol_w);

    /* Merge: '<Root>/VaEPCR_e_LifterState_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VaEPCR_e_LifterState_write'
     */
    Rte_IrvWrite_EPCR_PwrOn_VaEPCR_e_LifterState_write_IRV
        (EPCR_ac_B.OutportBufferForVaEPCR_e_LifterState_wri);

    /* Merge: '<Root>/VaEPCR_e_ValveState_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VaEPCR_e_ValveState_write'
     */
    Rte_IrvWrite_EPCR_PwrOn_VaEPCR_e_ValveState_write_IRV
        (EPCR_ac_B.OutportBufferForVaEPCR_e_ValveState_writ);

    /* Merge: '<Root>/VaEPCR_p_CylPres_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VaEPCR_p_CylPres_write'
     */
    Rte_IrvWrite_EPCR_PwrOn_VaEPCR_p_CylPres_write_IRV
        (EPCR_ac_B.OutportBufferForVaEPCR_p_CylPres_write);

    /* Merge: '<Root>/VaEPCR_p_InitialCylPrs_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VaEPCR_p_InitialCylPrs_write'
     */
    Rte_IrvWrite_EPCR_PwrOn_VaEPCR_p_InitialCylPrs_write_IRV
        (EPCR_ac_B.OutportBufferForVaEPCR_p_InitialCylPrs_w);

    /* Merge: '<Root>/VaEPCR_phi_IntVlvCls_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VaEPCR_phi_IntVlvCls_write'
     */
    Rte_IrvWrite_EPCR_PwrOn_VaEPCR_phi_IntVlvCls_write_IRV
        (EPCR_ac_B.OutportBufferForVaEPCR_phi_IntVlvCls_wri);

    /* Merge: '<Root>/VaEPCR_phi_IntVlvOpen_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VaEPCR_phi_IntVlvOpen_write'
     */
    Rte_IrvWrite_EPCR_PwrOn_VaEPCR_phi_IntVlvOpen_write_IRV
        (EPCR_ac_B.OutportBufferForVaEPCR_phi_IntVlvOpen_wr);

    /* SignalConversion generated from: '<S4>/VeEPCR_n_CylTorqRmpOffNi_write' */
#if Rte_SysCon_Variant_EPCR_FuncEnable

    /* SignalConversion generated from: '<S4>/VeEPCR_n_CylTorqRmpOffNi_write' */
    Rte_IrvWrite_EPCR_PwrOn_VeEPCR_n_CylTorqRmpOffNi_write_IRV(EPCR_ac_B.MinMax);

#endif

    /* End of SignalConversion generated from: '<S4>/VeEPCR_n_CylTorqRmpOffNi_write' */

    /* Merge: '<Root>/VeEPCR_phi_DamperTwistEst_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/VeEPCR_phi_DamperTwistEst_write'
     * */
    Rte_IrvWrite_EPCR_PwrOn_VeEPCR_phi_DamperTwistEst_write_IRV
        (EPCR_ac_B.OutportBufferForVeEPCR_phi_DamperTwistEs);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, EPCR_CODE) EPCR_ac_Init(void)
{
    {
        sint32 i;

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
         *  SubSystem: '<Root>/EPCR_PwrOn'
         */
#if Rte_SysCon_Variant_EPCR_FuncEnable

        /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
        /* SystemInitialize for Function Call SubSystem: '<S4>/InitCylTorqModel' */
        /* SystemInitialize for IfAction SubSystem: '<S394>/ReInitFromCals' */
        /* SystemInitialize for SignalConversion generated from: '<S398>/LeEPCR_Cnt_EngCylTotal' incorporates:
         *  Constant: '<S402>/Calib'
         */
        EPCR_ac_B.LeEPCR_Cnt_EngCylTotal = KeEPCR_Cnt_EngCylTotal;

        /* SystemInitialize for SignalConversion generated from: '<S398>/LeEPCR_phi_ExhVlvOpen' incorporates:
         *  Constant: '<S403>/Calib'
         */
        EPCR_ac_B.LeEPCR_phi_ExhVlvOpen = KeEPCR_phi_ExhVlvOpen;

        /* End of SystemInitialize for SubSystem: '<S394>/ReInitFromCals' */
        /* End of SystemInitialize for SubSystem: '<S4>/InitCylTorqModel' */
        /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
#endif

        /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
         *  SubSystem: '<S4>/Sub_Out_Init'
         */
        for (i = 0; i < 8; i++)
        {
            /* SystemInitialize for SignalConversion generated from: '<S395>/VaEPCR_e_ValveState_write' incorporates:
             *  Constant: '<S411>/Constant'
             */
            EPCR_ac_B.OutportBufferForVaEPCR_e_ValveState_writ[i] =
                EPCR_ac_ConstB.Constant[i];

            /* SystemInitialize for SignalConversion generated from: '<S395>/VaEPCR_e_LifterState_write' incorporates:
             *  Constant: '<S412>/Constant'
             */
            EPCR_ac_B.OutportBufferForVaEPCR_e_LifterState_wri[i] =
                EPCR_ac_ConstB.Constant_b[i];
        }

        /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */

        /* SystemInitialize for SignalConversion generated from: '<S4>/LaEPCR_V_DispVsAngle_write' incorporates:
         *  SignalConversion generated from: '<S4>/LaEPCR_k_TorqRatioVsAngle_write'
         *  SignalConversion generated from: '<S4>/LeEPCR_Cnt_EngCylTotal_write'
         *  SignalConversion generated from: '<S4>/LeEPCR_phi_ExhVlvOpen_write'
         *  SignalConversion generated from: '<S4>/VeEPCR_n_CylTorqRmpOffNi_write'
         */
#if Rte_SysCon_Variant_EPCR_FuncEnable

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
        /* SystemInitialize for SignalConversion generated from: '<S4>/LaEPCR_V_DispVsAngle_write' */
        Rte_IrvWrite_EPCR_ac_Init_LaEPCR_V_DispVsAngle_write1_IRV
            (EPCR_ac_B.LaEPCR_V_DispVsAngle);

        /* SystemInitialize for SignalConversion generated from: '<S4>/LaEPCR_k_TorqRatioVsAngle_write' */
        Rte_IrvWrite_EPCR_ac_Init_LaEPCR_k_TorqRatioVsAngle_write_IRV
            (EPCR_ac_B.LaEPCR_k_TorqRatioVsAngle);

        /* SystemInitialize for SignalConversion generated from: '<S4>/LeEPCR_Cnt_EngCylTotal_write' */
        Rte_IrvWrite_EPCR_ac_Init_LeEPCR_Cnt_EngCylTotal_write1_IRV
            (EPCR_ac_B.LeEPCR_Cnt_EngCylTotal);

        /* SystemInitialize for SignalConversion generated from: '<S4>/LeEPCR_phi_ExhVlvOpen_write' */
        Rte_IrvWrite_EPCR_ac_Init_LeEPCR_phi_ExhVlvOpen_write_IRV
            (EPCR_ac_B.LeEPCR_phi_ExhVlvOpen);

        /* SystemInitialize for SignalConversion generated from: '<S4>/VeEPCR_n_CylTorqRmpOffNi_write' */
        Rte_IrvWrite_EPCR_ac_Init_VeEPCR_n_CylTorqRmpOffNi_write_IRV
            (EPCR_ac_B.MinMax);

        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#endif

        /* End of SystemInitialize for SignalConversion generated from: '<S4>/LaEPCR_V_DispVsAngle_write' */

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
         *  SubSystem: '<Root>/EPCR_FastTEF'
         */
        /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
         *  SubSystem: '<S1>/CalcDamperTwist'
         */

        /* SystemInitialize for Atomic SubSystem: '<S6>/DamperTwistCalc' */
#if Rte_SysCon_Variant_EPCR_DamperTwistEst

        /* SystemInitialize for Atomic SubSystem: '<S64>/DamperTwistEst' */
        /* SystemInitialize for Atomic SubSystem: '<S66>/DamperTwistAngEst' */
        EPCR_ac_DamperTwistAngEst_Init();

        /* End of SystemInitialize for SubSystem: '<S66>/DamperTwistAngEst' */
        /* End of SystemInitialize for SubSystem: '<S64>/DamperTwistEst' */
        /* End of SystemInitialize for SubSystem: '<S6>/DamperTwistCalc' */
#endif

        /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
         *  SubSystem: '<S1>/EngAngle720'
         */
        /* SystemInitialize for Atomic SubSystem: '<S9>/EngAngleEst' */
#if Rte_SysCon_Variant_EPCR_LeadCompEngAngleEst

        /* End of SystemInitialize for SubSystem: '<S9>/EngAngleEst' */
#else
#endif

        /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
         *  SubSystem: '<S1>/CalcCylTorqPres'
         */
        /* SystemInitialize for Atomic SubSystem: '<S5>/CalcCylTorqPres' */
        /* SystemInitialize for Atomic SubSystem: '<S10>/NF' */
        /* SystemInitialize for Atomic SubSystem: '<S10>/CalcCylTorqPressFunctional' */
        /* SystemInitialize for IfAction SubSystem: '<S14>/IfActionSubsystem' */
        /* SystemInitialize for S-Function (fcgen): '<S61>/Function_Call_Generator' incorporates:
         *  SubSystem: '<S11>/CalcCylTorqPress'
         */
        for (i = 0; i < 8; i++)
        {

#if Rte_SysCon_Variant_EPCR_FuncEnable

            /* SystemInitialize for VariantMerge generated from: '<S10>/VaEPCR_p_CylPres' incorporates:
             *  Outport: '<S13>/VaEPCR_p_CylPres'
             */
            EPCR_ac_B.VariantMergeForOutportVaEPCR_p_CylPres[i] = 100.0F;

#else

            /* Start for VariantMerge generated from: '<S10>/VaEPCR_p_CylPres' incorporates:
             *  Constant: '<S12>/Const11'
             */
            EPCR_ac_B.VariantMergeForOutportVaEPCR_p_CylPres[i] = 0.0F;

            /* Start for VariantMerge generated from: '<S10>/VaEPCR_e_ValveState' incorporates:
             *  Constant: '<S62>/Constant'
             */
            EPCR_ac_B.VariantMergeForOutportVaEPCR_e_ValveStat[i] =
                EPCR_ac_ConstP.pooled38[i];

            /* Start for VariantMerge generated from: '<S10>/VaEPCR_e_LifterState' incorporates:
             *  Constant: '<S63>/Constant'
             */
            EPCR_ac_B.VariantMergeForOutportVaEPCR_e_LifterSta[i] =
                EPCR_ac_ConstP.pooled34[i];

#endif

        }

        /* End of SystemInitialize for S-Function (fcgen): '<S61>/Function_Call_Generator' */
        /* End of SystemInitialize for SubSystem: '<S14>/IfActionSubsystem' */
        /* End of SystemInitialize for SubSystem: '<S10>/CalcCylTorqPressFunctional' */
        /* End of SystemInitialize for SubSystem: '<S10>/NF' */
        /* End of SystemInitialize for SubSystem: '<S5>/CalcCylTorqPres' */

        /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
         *  SubSystem: '<S1>/Control__Subsystem'
         */
        /* SystemInitialize for Atomic SubSystem: '<S7>/EPCC_CalcAddedMtrTrq' */
#if Rte_SysCon_Variant_EPCR_FuncEnable
#endif

        /* End of SystemInitialize for SubSystem: '<S7>/EPCC_CalcAddedMtrTrq' */
        /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' incorporates:
         *  SubSystem: '<Root>/EPCR_MedTEF'
         */
        /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
         *  SubSystem: '<S3>/EPCC_DamperTwistEstValidity'
         */
        /* SystemInitialize for Atomic SubSystem: '<S376>/DamperTwistValidation' */
#if Rte_SysCon_Variant_EPCR_DampertTwistValid

        /* End of SystemInitialize for SubSystem: '<S376>/DamperTwistValidation' */
#else
#endif

        /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEF' */
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
