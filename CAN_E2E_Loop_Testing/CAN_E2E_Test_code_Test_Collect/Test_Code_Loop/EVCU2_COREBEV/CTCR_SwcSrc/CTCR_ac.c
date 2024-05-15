/*
 * File: CTCR_ac.c
 *
 * Code generated for Simulink model 'CTCR_ac'.
 *
 * Model version                  : 1.211
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:20:45 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CTCR_ac.h"
#include "look1_iflf_binlcapw.h"
#include "look2_iflf_binlcapw.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_CTCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(boolean, CTCR_VAR_INIT) HeCTCR_b_EnblAecoastStat = 1;
                          /* Referenced by: '<S352>/HeCTCR_b_EnblAecoastStat' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(boolean, CTCR_VAR_INIT) HeCTCR_b_FTC_Enbl = 1;/* Referenced by: '<S241>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(boolean, CTCR_VAR_INIT) HeCTCR_b_UseP1P25Creep = 0;/* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) HeCTCR_t_dTA = 0.01F;/* Referenced by:
                                                                    * '<S97>/Calib'
                                                                    * '<S68>/Calib'
                                                                    * '<S150>/Calib'
                                                                    * '<S209>/Calib'
                                                                    * '<S251>/Calib'
                                                                    * '<S262>/Calib'
                                                                    */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(boolean, CTCR_VAR_INIT) KaCTCR_b_CreepActv_Gear[13] =
{
    1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1
} ;                                    /* Referenced by:
                                        * '<S71>/Calib'
                                        * '<S152>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(boolean, CTCR_VAR_INIT) KaCTCR_b_ILEStat4MinCrpBlnd[6] =
{
    1, 1, 1, 1, 1, 0
} ;                                    /* Referenced by:
                                        * '<S72>/Calib'
                                        * '<S153>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(boolean, CTCR_VAR_INIT) KaCTCR_b_ILEStateOHSR[4] =
{
    1, 1, 0, 0
} ;                                    /* Referenced by:
                                        * '<S73>/Calib'
                                        * '<S154>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(boolean, CTCR_VAR_INIT) KaCTCR_b_ILEStateOHSR_4Lo[4] =
{
    1, 1, 0, 0
} ;                                    /* Referenced by: '<S211>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(boolean, CTCR_VAR_INIT) KaCTCR_b_UseEngCpcty[16] =
{
    0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S307>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(float32, CTCR_VAR_INIT) KaCTCR_r_TRNR_nTurbMap[13] =
{
    1.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 8.0F, 0.0F, 8.0F, 1.0F
} ;                                    /* Referenced by: '<S92>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(uint16, CTCR_VAR_INIT) KeCTCR_Cnt_LashComplt_TurnOnDly =
    3U;                                /* Referenced by: '<S155>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_M_BF1DestnTorq = -230.0F;/* Referenced by: '<S124>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_M_DTROffset_ForMinPedal =
    3.0F;                              /* Referenced by: '<S156>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_M_MinCreepDelta = 5.0F;/* Referenced by:
                                                                      * '<S53>/Calib'
                                                                      * '<S125>/Calib'
                                                                      * '<S308>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_M_MinCreepFWTrqResDsblThrsh
    = 0.1F;                            /* Referenced by: '<S309>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_M_MinCreepFWTrqResEnblThrsh
    = 10.0F;                           /* Referenced by: '<S310>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_M_MinCreepWhlTrqIntializer =
    -100.0F;                           /* Referenced by: '<S54>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_M_MinCreep_MinValidVal =
    -7000.0F;                          /* Referenced by:
                                        * '<S126>/Calib'
                                        * '<S311>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_M_MinSumTrq_CL_Launch =
    -40.0F;                            /* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_M_OffsetOverSumTrqCL =
    -2.0F;                             /* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_M_TransIntkTrgtOffset =
    1.0F;                              /* Referenced by: '<S157>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_M_WheelMin4Aecoast = 0.0F;
                         /* Referenced by: '<S353>/KeCTCR_M_WheelMin4Aecoast' */

#endif

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_M_WheelMin4Aecoast_Init =
    -9999.0F;       /* Referenced by: '<S359>/KeCTCR_M_WheelMin4Aecoast_Init' */

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT)
    KeCTCR_Pct_TransIntakeTrqPdlFrzThreshDsbl = 5.0F;/* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT)
    KeCTCR_Pct_TransIntakeTrqPdlFrzThreshEnbl = 9.0F;/* Referenced by: '<S254>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(boolean, CTCR_VAR_INIT) KeCTCR_b_ByPassMinCreepStepChck =
    1;                                 /* Referenced by:
                                        * '<S127>/Calib'
                                        * '<S312>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(boolean, CTCR_VAR_INIT) KeCTCR_b_MinCreepActv = 1;/* Referenced by:
                                                                      * '<S55>/Calib'
                                                                      * '<S128>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(boolean, CTCR_VAR_INIT) KeCTCR_b_MinCreepActvOvrd = 0;/* Referenced by: '<S158>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(boolean, CTCR_VAR_INIT) KeCTCR_b_MinCreepActvOvrd_4Lo = 0;/* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(boolean, CTCR_VAR_INIT) KeCTCR_b_NPConditionCheck = 0;/* Referenced by: '<S107>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(boolean, CTCR_VAR_INIT)
    KeCTCR_b_NeverUseSlipBasedTransIntakeTrq = 1;/* Referenced by: '<S264>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(boolean, CTCR_VAR_INIT)
    KeCTCR_b_NotUseSlipBasedTransIntakeTrqInLow = 1;/* Referenced by: '<S265>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(boolean, CTCR_VAR_INIT) KeCTCR_b_UseBlendLogicAeCoast = 0;/* Referenced by: '<S14>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(boolean, CTCR_VAR_INIT) KeCTCR_b_UseBlendLogicAeCoast_4Lo =
    0;                                 /* Referenced by: '<S15>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(boolean, CTCR_VAR_INIT) KeCTCR_b_UsePedalGrad = 0;/* Referenced by:
                                                                      * '<S354>/KeCTCR_b_UsePedalGrad'
                                                                      * '<S74>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_dn_MaxTurbAccel = 50.0F;/* Referenced by: '<S266>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(TeTRNR_e_TCMGearStat, CTCR_VAR_INIT)
    KeCTCR_e_MinGearForCreep = CeTRNR_e_D4;/* Referenced by: '<S348>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(uint16, CTCR_VAR_INIT) KeCTCR_g_TransFail_DsblTransIntTrq =
    0U;                                /* Referenced by: '<S296>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_k_SumTrqCL_Slope = 0.01F;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_n_CreepEnableThresh =
    150.0F;                            /* Referenced by: '<S108>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_n_Creep_OutSpdTh = 130.0F;/* Referenced by: '<S75>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_n_DeltaSpdP2AndNTurb_LSP =
    200.0F;                            /* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_n_DeltaSpdP2AndNTurb_RSP =
    250.0F;                            /* Referenced by: '<S217>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_n_DesSlipTransIntakeTrqLSP =
    5.0F;                              /* Referenced by: '<S267>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_n_DesSlipTransIntakeTrqRSP =
    50.0F;                             /* Referenced by: '<S268>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_n_MinDisengageSpd = 550.0F;/* Referenced by: '<S345>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_n_OutputMinThreshold =
    50.0F;                             /* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_n_OutputTargetCreepSpd =
    200.0F;                            /* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT)
    KeCTCR_n_OutputTargetCreepSpdOffset = 0.0F;/* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_n_RampOutIdleSpdOffset_RSP =
    5.0F;                              /* Referenced by: '<S159>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_n_SpdOffsetHighGears =
    -1000.0F;                          /* Referenced by: '<S349>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_AecoastBlndMinCrpFctLSP =
    0.01F;                             /* Referenced by: '<S29>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_AecoastBlndMinCrpFctRSP =
    0.05F;                             /* Referenced by: '<S30>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_AecoastBlndSpdFctLSP =
    0.3F;                              /* Referenced by: '<S16>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_AecoastBlndSpdFctRSP =
    0.5F;                              /* Referenced by: '<S17>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_BlndFctLSP = 0.01F;/* Referenced by:
                                                                      * '<S129>/Calib'
                                                                      * '<S76>/Calib'
                                                                      * '<S218>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_BlndFctRSP = 0.06F;/* Referenced by:
                                                                      * '<S130>/Calib'
                                                                      * '<S77>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_FirstGearRatio = 4.714F;/* Referenced by: '<S31>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_GrRatioChangeMax = 1.0F;/* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_GrRatioChangeMin = -1.0F;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_GradLimECMFacLD = -1.0F;/* Referenced by: '<S18>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_GradLimECMFacLU = 1.0F;/* Referenced by: '<S19>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_GradLimMinLDRaw =
    -9999.0F;                          /* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_GrdLimMinCreepLD = -0.3F;/* Referenced by: '<S160>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_GrdLimMinCreepLD_4Lo =
    -0.3F;                             /* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_GrdLimMinCreepLU = 0.3F;/* Referenced by: '<S161>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_GrdLimMinCreepLU_4Lo =
    0.009375F;                         /* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_GrdLimTransIntakeTrqLD =
    -0.25F;                            /* Referenced by: '<S269>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_GrdLimTransIntakeTrqLU =
    0.25F;                             /* Referenced by: '<S270>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_SlipSpdGear_LSP = -200.0F;/* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_SlipSpdGear_RSP = -30.0F;/* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_SlipSpdShift_LSP =
    -300.0F;                           /* Referenced by: '<S81>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_r_SlipSpdShift_RSP = -50.0F;/* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_t_BrakePedalGradBlendFactor
    = 0.5F;                            /* Referenced by: '<S271>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_t_PedalGradBlendFactor =
    0.75F;                             /* Referenced by:
                                        * '<S83>/Calib'
                                        * '<S162>/Calib'
                                        * '<S221>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_t_PrimNodotMult = 0.05F;/* Referenced by: '<S272>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(float32, CTCR_VAR_INIT) KeCTCR_t_TargetSpdBlndTime = 0.2F;/* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT)
    KeCTCR_t_TransIntakeTrqPdlFrzBlndOut = 0.01F;/* Referenced by: '<S255>/Calib' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KtCTCR_M_DCLoadOffset[9] =
{
    0.0F, -3.41042852F, -6.82085705F, -10.231286F, -13.6417141F, -17.0521431F,
    -20.4625721F, -23.873F, -27.2834282F
} ;                                    /* Referenced by: '<S313>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KtCTCR_M_RegenOffset[9] =
{
    -220.5F, -210.6F, -196.2F, -171.0F, -152.1F, -143.622F, -136.8F, -125.631F,
    -114.3F
} ;                                    /* Referenced by: '<S314>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KtCTCR_M_UnderShootPrtcn[35] =
{
    45.0F, 15.0F, 10.0F, 0.0F, 0.0F, 30.0F, 15.0F, 10.0F, 0.0F, 0.0F, 65.0F,
    41.25F, 22.5F, 15.0F, 0.0F, 130.0F, 82.5F, 45.0F, 30.0F, 0.0F, 173.03F,
    109.807495F, 54.45F, 33.0F, 0.0F, 163.202164F, 103.570595F, 52.2916679F,
    32.3148155F, 0.0F, 130.0F, 82.5F, 45.0F, 30.0F, 0.0F
} ;                                    /* Referenced by: '<S315>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KtCTCR_k_DeltaToFrntTgt_Slope[6] =
{
    1.0F, 1.0F, 0.7F, 0.5F, 0.3F, 0.1F
} ;                                    /* Referenced by: '<S222>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KtCTCR_n_BrkTrqBasedSpdOffset[7] =
{
    -700.0F, -700.0F, -600.0F, -500.0F, -300.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S350>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KtCTCR_r_AeCoastAccelPedlFac[5] =
{
    0.0F, 0.0F, 0.0F, 0.07F, 0.0F
} ;                                    /* Referenced by: '<S20>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KtCTCR_r_FilterCoeffturbSpd[4] =
{
    5.0F, 0.75F, 0.5F, 0.0F
} ;                                    /* Referenced by: '<S273>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(float32, CTCR_VAR_INIT) KtCTCR_r_GrdLimMinCreepLD[6] =
{
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F
} ;                                    /* Referenced by: '<S84>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT)
    KtCTCR_r_GrdLimMinCreepLDMapPdlDiff[80] =
{
    -0.38125F, -0.25F, -0.25F, -0.25F, -0.25F, -0.25F, -0.25F, -0.25F, -0.38024F,
    0.0F, -0.00824F, -0.0224458817F, -0.0265047085F, -0.0520202033F,
    -0.0520202033F, -0.0520202033F, -0.31672F, 0.0F, 0.0F, -0.0185582358F,
    -0.0219405908F, -0.0272727273F, -0.0272727273F, -0.0272727273F, -0.17086F,
    0.0F, 0.0F, 0.0F, -0.0177164711F, -0.0148989903F, -0.0148989893F,
    -0.0148989893F, -0.09793F, 0.0F, 0.0F, 0.0F, 0.0F, -0.00871212129F,
    -0.00871212129F, -0.00871212129F, -0.054172F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    -0.005F, -0.005F, -0.00625F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    -0.0475F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -0.08125F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -0.08125F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F
} ;                                    /* Referenced by:
                                        * '<S85>/Vector'
                                        * '<S163>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT)
    KtCTCR_r_GrdLimMinCreepLDMapPdlDiff_4Lo[80] =
{
    -0.38125F, -0.25F, -0.25F, -0.25F, -0.25F, -0.25F, -0.25F, -0.25F, -0.38024F,
    0.0F, -0.00824F, -0.0224459F, -0.0265047F, -0.0305635F, -0.25F, -0.25F,
    -0.31672F, 0.0F, 0.0F, -0.0185582F, -0.0219406F, -0.0253229F, -0.25F, -0.25F,
    -0.17086F, 0.0F, 0.0F, 0.0F, -0.0177165F, -0.0204224F, -0.25F, -0.25F,
    -0.09793F, 0.0F, 0.0F, 0.0F, 0.0F, -0.0155318F, -0.25F, -0.25F, -0.054172F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -0.005F, -0.25F, -0.025F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, -0.005F, -0.25F, -0.0475F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -0.005F,
    -0.25F, -0.08125F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -0.005F, -0.25F, -0.25F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, -0.005F, -0.25F
} ;                                    /* Referenced by: '<S223>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(float32, CTCR_VAR_INIT) KtCTCR_r_GrdLimMinCreepLU[6] =
{
    1.0F, 0.025F, 0.025F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S86>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KtCTCR_r_GrdLimMinLauncSpeedLD[6] =
{
    -1.0F, -0.64297092F, -0.285941869F, -0.143130258F, -0.000318628F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S87>/Vector'
                                        * '<S164>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KtCTCR_r_WhlMinClipReturn2Idl[6] =
{
    1.0F, 0.8F, 0.44F, 0.4F, 0.2F, 0.0F
} ;                                    /* Referenced by: '<S165>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KtCTCR_r_WhlReturn2IdlBlnd[80] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.5F, 0.0F, 0.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 0.5F, 0.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 0.5F, 0.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.5F, 0.0F,
    0.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.5F, 0.0F, 0.0F, 0.0F, 1.0F, 1.0F, 1.0F, 0.5F,
    0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 1.0F, 0.5F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F,
    0.5F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S88>/Vector'
                                        * '<S166>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KtCTCR_r_WhlReturn2IdlBlnd_4Lo[6] =
{
    1.0F, 0.8F, 0.6F, 0.4F, 0.2F, 0.0F
} ;                                    /* Referenced by: '<S224>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KtCTCR_r_WhlReturn2IdlDiseng[6] =
{
    1.0F, 0.696428597F, 0.607142866F, 0.51964283F, 0.428571433F, 0.0F
} ;                                    /* Referenced by: '<S167>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KxCTCR_M_DCLoadOffset[9] =
{
    0.0F, 2.0F, 4.0F, 6.0F, 8.0F, 10.0F, 12.0F, 14.0F, 16.0F
} ;                                    /* Referenced by: '<S313>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KxCTCR_M_RegenOffset[9] =
{
    2800.0F, 3200.0F, 3500.0F, 4000.0F, 4500.0F, 4800.0F, 5000.0F, 5475.0F,
    6000.0F
} ;                                    /* Referenced by: '<S314>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KxCTCR_M_UnderShootPrtcn[5] =
{
    -200.0F, -150.0F, -100.0F, -75.0F, -50.0F
} ;                                    /* Referenced by: '<S315>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KxCTCR_k_DeltaToFrntTgt_Slope[6] =
{
    0.0F, 2.0F, 5.0F, 9.0F, 20.0F, 40.0F
} ;                                    /* Referenced by: '<S222>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KxCTCR_n_BrkTrqBasedSpdOffset[7] =
{
    0.0F, 5.0F, 10.0F, 50.0F, 60.0F, 70.0F, 75.0F
} ;                                    /* Referenced by: '<S350>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KxCTCR_r_AeCoastAccelPedlFac[5] =
{
    0.0F, 10.0F, 11.0F, 75.0F, 100.0F
} ;                                    /* Referenced by: '<S20>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KxCTCR_r_FilterCoeffturbSpd[4] =
{
    50.0F, 150.0F, 185.0F, 500.0F
} ;                                    /* Referenced by: '<S273>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(float32, CTCR_VAR_INIT) KxCTCR_r_GrdLimMinCreepLD[6] =
{
    0.0F, 0.5F, 15.0F, 15.5F, 50.0F, 100.0F
} ;                                    /* Referenced by: '<S84>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT)
    KxCTCR_r_GrdLimMinCreepLDMapPdlDiff[8] =
{
    0.0F, 1.0F, 3.0F, 5.0F, 7.5F, 10.0F, 50.0F, 75.0F
} ;                                    /* Referenced by:
                                        * '<S85>/Vector'
                                        * '<S163>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT)
    KxCTCR_r_GrdLimMinCreepLDMapPdlDiff_4Lo[8] =
{
    0.0F, 1.0F, 3.0F, 5.0F, 7.5F, 10.0F, 50.0F, 75.0F
} ;                                    /* Referenced by: '<S223>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static volatile CONST(float32, CTCR_VAR_INIT) KxCTCR_r_GrdLimMinCreepLU[6] =
{
    0.0F, 0.5F, 15.0F, 15.5F, 50.0F, 100.0F
} ;                                    /* Referenced by: '<S86>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KxCTCR_r_GrdLimMinLauncSpeedLD[6] =
{
    0.0F, 101.0F, 300.0F, 500.0F, 750.0F, 1500.0F
} ;                                    /* Referenced by:
                                        * '<S87>/Vector'
                                        * '<S164>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KxCTCR_r_WhlMinClipReturn2Idl[6] =
{
    -50.0F, -40.0F, -22.0F, -20.0F, -10.0F, 0.0F
} ;                                    /* Referenced by: '<S165>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KxCTCR_r_WhlReturn2IdlBlnd[8] =
{
    0.0F, 50.0F, 100.0F, 150.0F, 200.0F, 250.0F, 300.0F, 450.0F
} ;                                    /* Referenced by:
                                        * '<S88>/Vector'
                                        * '<S166>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KxCTCR_r_WhlReturn2IdlBlnd_4Lo[6] =
{
    -250.0F, -200.0F, -150.0F, -100.0F, -50.0F, 0.0F
} ;                                    /* Referenced by: '<S224>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KxCTCR_r_WhlReturn2IdlDiseng[6] =
{
    20.0F, 62.5F, 75.0F, 87.25F, 100.0F, 160.0F
} ;                                    /* Referenced by: '<S167>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KyCTCR_M_UnderShootPrtcn[7] =
{
    0.0F, 230.0F, 500.0F, 742.0F, 902.0F, 1100.0F, 1400.0F
} ;                                    /* Referenced by: '<S315>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT)
    KyCTCR_r_GrdLimMinCreepLDMapPdlDiff[10] =
{
    -100.0F, -20.0F, -10.0F, -5.0F, -2.5F, -1.0F, 0.0F, 1.0F, 5.0F, 20.0F
} ;                                    /* Referenced by:
                                        * '<S85>/Vector'
                                        * '<S163>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT)
    KyCTCR_r_GrdLimMinCreepLDMapPdlDiff_4Lo[10] =
{
    -100.0F, -20.0F, -10.0F, -5.0F, -2.5F, -1.0F, 0.0F, 1.0F, 5.0F, 20.0F
} ;                                    /* Referenced by: '<S223>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

static volatile CONST(float32, CTCR_VAR_INIT) KyCTCR_r_WhlReturn2IdlBlnd[10] =
{
    -483.968536F, -273.44223F, 0.0F, 191.769196F, 287.623291F, 339.41452F,
    429.249756F, 509.06778F, 542.291565F, 759.73407F
} ;                                    /* Referenced by:
                                        * '<S88>/Vector'
                                        * '<S166>/Vector'
                                        */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_CTCR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CTCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VaCTCR_M_MinCreepWheelTrq[2];/* '<S137>/Sum3' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VaCTCR_M_MinCreepWheelTrq_Intrmdt[2];/* '<S136>/Sum3' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VaCTCR_M_MinCreep_CreepTorqueStart[2];/* '<S112>/Switch2' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VaCTCR_M_MinCreep_DstntnTrqFW[3];/* '<S318>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VaCTCR_M_MinCreep_StrtTrqFW[3];/* '<S319>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VaCTCR_M_MinCreep_TrqDestnSrc[2];/* '<S131>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VaCTCR_M_MinCreep_TrqStrtSrc[2];/* '<S112>/Switch1' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VaCTCR_M_SumTrq_CL_WO_OffsetFilt[2];/* '<S237>/Switch' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VaCTCR_b_MinCreep_Actv[2];/* '<S112>/Logical7' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static VAR(boolean, CTCR_VAR_INIT) VaCTCR_b_MinCreep_CreepEnableReset[2];/* '<S39>/Logical1' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VaCTCR_b_MinCreep_CreepSpdActv[3];/* '<S122>/Switch1' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VaCTCR_b_MinCreep_CreepTorqueStart[2];/* '<S112>/Switch5' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VaCTCR_b_NotIn4Lo_1[2];/* '<S112>/Logical4' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VaCTCR_b_NotIn4Lo_3[2];/* '<S112>/Comparison2' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VaCTCR_b_NotIn4Lo_4[2];/* '<S112>/Logical3' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VaCTCR_b_NotIn4Lo_5[2];/* '<S112>/Logical6' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VaCTCR_r_MinCreepBFOne[2];/* '<S112>/Merge' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VaCTCR_r_MinCreepBFOne_4Hi[2];/* '<S169>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VaCTCR_r_MinCreepBFOne_4Lo[2];/* '<S233>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VaCTCR_r_MinCreepBlendingFactor_4Lo[5];/* '<S207>/Sum3' */

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

static VAR(float32, CTCR_VAR_INIT) VaCTCR_r_MinCreep_BlendFactor[2];/* '<S39>/MinMax2' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_AxleTrqReqMin_Arb;/* '<S112>/Merge5' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_FWTrqReqMin_Arb;/* '<S112>/Merge6' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_MinCreepFWTrqTgt_WO_Offset;/* '<S112>/Merge9' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_MinCreepFW_Start_4Lo;/* '<S120>/MinMax4' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_MinCreepWheelBlend_ECM;/* '<S132>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_MinCreepWheelTrqTgt_WO_Offset;/* '<S112>/Merge8' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_MinCreepWheel_Start_4Lo;/* '<S120>/MinMax3' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_MinPdlFw_Agr;/* '<S244>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_MinPdlFw_Tact;/* '<S245>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_SumMinTrqPwrTrnBF;/* '<S115>/MinMax12' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_SumTrq_CLWhl_Filt;/* '<S236>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_SumTrq_CLWhl_OffsetFilt;/* '<S228>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_SumTrq_CL_Filt;/* '<S235>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_SumTrq_CL_OffsetFilt;/* '<S227>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_ToFrontTargetECM_4Hi;/* '<S112>/Merge11' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_ToFrontTarget_4Hi;/* '<S144>/Switch1' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_TransIntakeFwTgt_Raw;/* '<S243>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_TransIntakeFw_Raw;/* '<S246>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_TransIntakeTrqFw_4Hi;/* '<S174>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_TransIntakeTrqFw_4Lo;/* '<S120>/MinMax5' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_TransIntakeWhlTgt;/* '<S247>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_TransIntkWhlTorque_4Lo;/* '<S120>/MinMax' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_UndershootTrq_BfBlend;/* '<S115>/MinMax1' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_WheelMin4ECM_PreAHH;/* '<S4>/Switch1' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_M_WheelMinBlnd;/* '<S23>/Sum3' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VeCTCR_b_CreepSpdActvILEStat;/* '<S119>/Selector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VeCTCR_b_CreepSpdActvVLEStat;/* '<S119>/Selector1' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VeCTCR_b_CreepSpdActvVLEStat_4Lo;/* '<S120>/Selector1' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VeCTCR_b_DsblTransIntTrq;/* '<S114>/Logical1' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VeCTCR_b_EnblPdlFac;/* '<S13>/Switch1' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VeCTCR_b_MinCreepFW_Actv;/* '<S115>/Logical9' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VeCTCR_b_MinCreepFW_CreepTorqueStart;/* '<S115>/Switch8' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VeCTCR_b_MinCreep_BlendFactActv_4Hi;/* '<S119>/Logical2' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VeCTCR_b_MinCreep_BlendFactActv_4Lo;/* '<S120>/Logical2' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VeCTCR_b_NotIn4Lo;/* '<S112>/Comparison7' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VeCTCR_b_NotIn4LoFW_1;/* '<S115>/Logical11' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VeCTCR_b_NotIn4LoFW_2;/* '<S115>/Comparison11' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VeCTCR_b_NotIn4LoFW_3;/* '<S115>/Comparison10' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VeCTCR_b_NotIn4LoFW_4;/* '<S115>/Logical8' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VeCTCR_b_NotIn4Lo_2;/* '<S112>/Comparison4' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VeCTCR_b_SumTrqRampOutReset;/* '<S119>/Logical4' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(boolean, CTCR_VAR_INIT) VeCTCR_b_SumTrqRampOutSet;/* '<S119>/Logical' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_dPct_AccPdlChangel_4Hi;/* '<S138>/Multiplication2' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_dPct_AccPdlChangel_4Lo;/* '<S204>/Multiplication2' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_dm_BrkPdlGrad;/* '<S256>/Multiplication2' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_n_ActualSpd;/* '<S118>/Merge1' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_n_AeCoastBlendInitSpd;/* '<S8>/MinMax2' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_n_AeCoastDeltaSpd;/* '<S8>/Sum3' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_n_DeltaSpd;/* '<S118>/Sum1' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_n_DeltaSpdBlended;/* '<S118>/Sum5' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_n_DeltaSpdDisengage;/* '<S118>/Merge' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_n_DeltaSpdP2AndNTurb;/* '<S118>/Merge2' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_n_DisengageSpd;/* '<S118>/MinMax1' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_n_NC1SlipTransWhlTrqCalc;/* '<S248>/MinMax1' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_n_NC1TgtSlip;/* '<S248>/Sum3' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_n_NTurb4SlipCalc;/* '<S248>/Sum2' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_n_NturbAccel;/* '<S248>/Product2' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_n_SlipSpd;/* '<S118>/Sum2' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_n_TurbinDeltaSpdBlended;/* '<S118>/Sum3' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_AeCoastAccelPedlFac;/* '<S20>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_AeCoastFactorCalc;/* '<S33>/Switch1' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_AeCoastFactorRaw;/* '<S112>/Merge2' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_AeCoastFactorSpdBased;/* '<S8>/MinMax5' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_AeCoastWhlBlendFac;/* '<S4>/Sum' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_AeCoastWhlBlendPdlFac;/* '<S9>/Switch1' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_BlendTransIntakeTorqueFac;/* '<S261>/Sum3' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_GrdLimMinCreepLDPdlDiff_4Hi;/* '<S163>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_GrdLimMinCreepLDPdlDiff_4Lo;/* '<S223>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_GrdLimMinCreepLDPdl_4Hi;/* '<S119>/MinMax1' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_GrdLimMinCreepLD_4Hi;/* '<S119>/MinMax2' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_GrdLimMinCreepLD_4Lo;/* '<S120>/MinMax2' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_MinCreepBFStrgc_4Lo;/* '<S234>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_MinCreepBFTwo;/* '<S112>/Merge10' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_MinCreepBFTwo_4Hi;/* '<S171>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_MinCreepBF_ATRR_4Hi;/* '<S173>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_MinCreepBF_ATRR_4Lo;/* '<S232>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_MinCreepBF_AeC_4Hi;/* '<S119>/MinMax4' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_MinCreepBF_AeC_4Lo;/* '<S231>/Gain' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_MinCreepFactorRaw_4Lo;/* '<S120>/MinMax1' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_PedalFreezeBF;/* '<S242>/Switch' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_WhlReturn2IdlBlndRaw_4Hi;/* '<S166>/Vector' */

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

static VAR(float32, CTCR_VAR_INIT) VeCTCR_r_WhlReturn2IdlBlndRaw_4Lo;/* '<S224>/Vector' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CTCR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_CTCR
#include "MemMap.h"

CONST(ConstP_CTCR_ac_T, CTCR_VAR_INIT) CTCR_ac_ConstP =
{

#if Rte_SysCon_Variant_CTCR_PxPy

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S315>/Vector'
     */
    {
        4U, 6U
    },

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    /* Computed Parameter: Vector_maxIndex_f
     * Referenced by: '<S48>/Vector'
     */
    {
        5U, 5U
    },

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S85>/Vector'
     *   '<S88>/Vector'
     *   '<S163>/Vector'
     *   '<S166>/Vector'
     *   '<S223>/Vector'
     */
    {
        7U, 9U
    },

#endif

#ifndef CONSTP_CTCR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_CTCR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CTCR
#include "MemMap.h"

VAR(B_CTCR_ac_T, CTCR_VAR_INIT) CTCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CTCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CTCR
#include "MemMap.h"

VAR(DW_CTCR_ac_T, CTCR_VAR_INIT) CTCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CTCR
#include "MemMap.h"

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_CTCR_PxPy

static float32 CTCR_ac_fraction(float32 Upper, float32 Lower, float32 Input);

#endif

/* Function for Chart: '<S317>/Get_Data_Indexes ' */
#if Rte_SysCon_Variant_CTCR_PxPy

static float32 CTCR_ac_fraction(float32 Upper, float32 Lower, float32 Input)
{
    float32 g;

    /* Graphical Function 'fraction': '<S339>:1' */
    /* Transition: '<S339>:67' */
    if (Lower >= Upper)
    {
        /* Transition: '<S339>:71' */
        /* Transition: '<S339>:72' */
        g = 0.0F;

        /* Transition: '<S339>:73' */
    }
    else
    {
        /* Transition: '<S339>:12' */
        g = (Input - Lower) / (Upper - Lower);
    }

    /* Transition: '<S339>:70' */
    return g;
}

#endif

/* Model step function for TID1 */
FUNC(void, CTCR_CODE) CTCR_MedTEB2(void) /* Explicit Task: MedTEB2 */
{

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 tmpRead_0;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 tmpRead_1[16];

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 tmpRead_2[16];

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 tmpRead_4;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    float32 tmpRead_5[9];

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    TeTRNR_e_TCMGearStat tmpRead_6;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    TeESSR_e_TCM_TransitionStatus tmpRead_7;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    TeHSER_e_RngSt tmpRead_8;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 tmpRead_9;

#endif

    float32 rtb_VariantMerge_For_Variant_So;

#if Rte_SysCon_Variant_CTCR_FUNC

    float32 rtb_OutportBufferForVeCTCR_M_Mi;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    float32 rtb_OutportBufferForVeCTCR_M__j;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    float32 rtb_OutportBufferForVeCTCR_M_Wh;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    boolean rtb_VariantMerge_For_Variant__d;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    boolean rtb_OutportBufferForVeCTCR_b_Mi;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    boolean rtb_OutportBufferForVeCTCR_b__j;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeTTIR;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Gain;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Switch1_lb;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeATRR;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Sum_pn;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeVSDR;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Switch_h[3];

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    boolean rtb_Comparison1_g[2];

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeOH_m;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeVS_j;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeOHSR;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeDTRR;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Sum2_a[3];

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    boolean rtb_UnitDelay_gv[3];

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeTINR;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_UnitDelay1_kf;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Switch1_bd;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    boolean rtb_TmpSignalConversionAtVeHTDR;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Switch7;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeCSVR;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    sint16 rtb_DataTypeConversion5;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    boolean rtb_Comparison5;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeAPSR;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    boolean rtb_OR1[2];

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    boolean rtb_Logical5_c[2];

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    float32 rtb_VeCTCR_M_MinCreep_ToFrontTa;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeDT_g;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeTC_j;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeHSER;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeTCCR;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeTI_e;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Sum1_p0[3];

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    boolean rtb_NotEqual1_b;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Switch_b[2];

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Switch3_ej;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeTTQR;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    boolean rtb_Comparison4_g;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeAT_m;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeRG_i;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    float32 rtb_Switch6;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    boolean rtb_Switch1_bu;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Switch_ow;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_UnitDelay_f[5];

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeMSPR;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    uint16 rtb_Switch1_pi;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_LowerIndex;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Gain_c;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Switch1_am;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Signum_o;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Sum3_cd[2];

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Vector_a[2];

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Sum2_l[5];

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Sum3_h;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Vector_k0;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Vector_ka[2];

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    float32 rtb_TmpSignalConversionAtVeTC_o;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeCS_n;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    TeFWDR_e_TrnsfrCaseRange rtb_TmpSignalConversionAtVeFWDR;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    TeOHSR_e_OptGear_SG rtb_TmpSignalConversionAtVeOH_b;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    TeOHSR_e_RngSel rtb_TmpSignalConversionAtVeOH_e;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    TeHSER_e_SteadyStates rtb_TmpSignalConversionAtVeHS_m;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTRGR;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTRNR;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    TeHCCR_e_ClutchStatus rtb_TmpSignalConversionAtVeTR_i;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    TeOHSR_e_VLE_DriveStat rtb_TmpSignalConversionAtVeOH_i;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    TeHSER_e_SteadyStates rtb_TmpSignalConversionAtVeHS_e;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_TmpSignalConversionAtVeAXLR;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    sint32 i;

#endif

#if Rte_SysCon_Variant_CTCR_PxPy

    float32 rtb_Sum_d_tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' incorporates:
     *  SubSystem: '<Root>/CTCR_MedTEB2'
     */
    /* SignalConversion generated from: '<S1>/VeOHSR_e_ILEState' */
#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    /* SignalConversion generated from: '<S1>/VeOHSR_e_ILEState' incorporates:
     *  Inport: '<Root>/VeOHSR_e_ILEState'
     */
    (void)Rte_Read_VeOHSR_e_ILEState_Value(&rtb_TmpSignalConversionAtVeOH_i);

#endif

    /* End of SignalConversion generated from: '<S1>/VeOHSR_e_ILEState' */

    /* SignalConversion generated from: '<S1>/VeTINR_r_TCMTransTrqRatio' */
#if Rte_SysCon_Variant_CTCR_PxPy

    /* SignalConversion generated from: '<S1>/VeTINR_r_TCMTransTrqRatio' incorporates:
     *  Inport: '<Root>/VeTINR_r_TCMTransTrqRatio'
     */
    (void)Rte_Read_VeTINR_r_TCMTransTrqRatio_Value
        (&rtb_TmpSignalConversionAtVeTINR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTINR_r_TCMTransTrqRatio' */

    /* SignalConversion generated from: '<S1>/VeDTRR_M_AxleTrqReqMin' */
#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    /* SignalConversion generated from: '<S1>/VeDTRR_M_AxleTrqReqMin' incorporates:
     *  Inport: '<Root>/VeDTRR_M_AxleTrqReqMin'
     */
    (void)Rte_Read_VeDTRR_M_AxleTrqReqMin_Value(&rtb_TmpSignalConversionAtVeDTRR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDTRR_M_AxleTrqReqMin' */

    /* SignalConversion generated from: '<S1>/VeVSDR_n_PrimNoSgndFltrd' incorporates:
     *  SignalConversion generated from: '<S1>/VeHSER_e_CTCR_LeadState'
     */
#if Rte_SysCon_Variant_CTCR_PxPy

    /* SignalConversion generated from: '<S1>/VeVSDR_n_PrimNoSgndFltrd' incorporates:
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value
        (&rtb_TmpSignalConversionAtVeVSDR);

    /* SignalConversion generated from: '<S1>/VeHSER_e_CTCR_LeadState' incorporates:
     *  Inport: '<Root>/VeHSER_e_VTVR_LeadState'
     */
    (void)Rte_Read_VeHSER_e_VTVR_LeadState_Value
        (&rtb_TmpSignalConversionAtVeHS_e);

#endif

    /* End of SignalConversion generated from: '<S1>/VeVSDR_n_PrimNoSgndFltrd' */

    /* SignalConversion generated from: '<S1>/VeHSER_n_InputSpeedProfile' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
     *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
     *  SignalConversion generated from: '<S1>/VeCSVR_v_VehSpd'
     *  SignalConversion generated from: '<S1>/VeOHSR_n_IdleSpdBlended'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_ILEStat'
     *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
     */
#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    /* SignalConversion generated from: '<S1>/VeHSER_n_InputSpeedProfile' incorporates:
     *  Inport: '<Root>/VeHSER_n_InputSpeedProfile'
     */
    (void)Rte_Read_VeHSER_n_InputSpeedProfile_Value
        (&rtb_TmpSignalConversionAtVeHSER);

    /* SignalConversion generated from: '<S1>/VeOHSR_n_IdleSpdBlended' incorporates:
     *  Inport: '<Root>/VeOHSR_n_IdleSpdBlended'
     */
    (void)Rte_Read_VeOHSR_n_IdleSpdBlended_Value
        (&rtb_TmpSignalConversionAtVeOHSR);

    /* SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd' incorporates:
     *  Inport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd'
     */
    (void)Rte_Read_VeCSVR_n_TransOutSpdSgndFltrd_Value
        (&rtb_TmpSignalConversionAtVeCSVR);

    /* SignalConversion generated from: '<S1>/VeCSVR_v_VehSpd' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpd'
     */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value(&rtb_TmpSignalConversionAtVeCS_n);

    /* SignalConversion generated from: '<S1>/VeTRNR_e_ILEStat' incorporates:
     *  Inport: '<Root>/VeTRNR_e_ILEStat'
     */
    (void)Rte_Read_VeTRNR_e_ILEStat_Value(&rtb_TmpSignalConversionAtVeTR_i);

    /* SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear' incorporates:
     *  Inport: '<Root>/VeTRNR_e_ActualGear'
     */
    (void)Rte_Read_VeTRNR_e_ActualGear_Value(&rtb_TmpSignalConversionAtVeTRNR);

    /* SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        (&rtb_TmpSignalConversionAtVeAPSR);

    /* SignalConversion generated from: '<S1>/VeVSDR_n_NTurb' incorporates:
     *  Inport: '<Root>/VeVSDR_n_NTurb'
     */
    (void)Rte_Read_VeVSDR_n_NTurb_Value(&rtb_TmpSignalConversionAtVeVS_j);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHSER_n_InputSpeedProfile' */

    /* SignalConversion generated from: '<S1>/VeOHSR_n_TransMinEngSpd' incorporates:
     *  SignalConversion generated from: '<S1>/VeOHSR_e_RngDsrd'
     */
#if Rte_SysCon_Variant_CTCR_PxPy

    /* SignalConversion generated from: '<S1>/VeOHSR_n_TransMinEngSpd' incorporates:
     *  Inport: '<Root>/VeOHSR_n_TransMinEngSpd'
     */
    (void)Rte_Read_VeOHSR_n_TransMinEngSpd_Value
        (&rtb_TmpSignalConversionAtVeOH_m);

    /* SignalConversion generated from: '<S1>/VeOHSR_e_RngDsrd' incorporates:
     *  Inport: '<Root>/VeOHSR_e_RngDsrd'
     */
    (void)Rte_Read_VeOHSR_e_RngDsrd_Value(&rtb_TmpSignalConversionAtVeOH_e);

#endif

    /* End of SignalConversion generated from: '<S1>/VeOHSR_n_TransMinEngSpd' */

    /* SignalConversion generated from: '<S1>/VeATRR_M_DrvIntndTotBrkOutTorq' */
#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    /* SignalConversion generated from: '<S1>/VeATRR_M_DrvIntndTotBrkOutTorq' incorporates:
     *  Inport: '<Root>/VeATRR_M_DrvIntndTotBrkOutTorq'
     */
    (void)Rte_Read_VeATRR_M_DrvIntndTotBrkOutTorq_Value
        (&rtb_TmpSignalConversionAtVeATRR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeATRR_M_DrvIntndTotBrkOutTorq' */

    /* SignalConversion generated from: '<S1>/VeFWDR_e_Tcase_Stat' incorporates:
     *  SignalConversion generated from: '<S1>/VeATRR_M_OutputTorqReqImmedHTDR'
     *  SignalConversion generated from: '<S1>/VeHTDR_b_AHH_ModifyAccel_Req'
     *  SignalConversion generated from: '<S1>/VeMSPR_n_MtrB_SpdRaw'
     *  SignalConversion generated from: '<S1>/VeTTQR_M_SumTrqStaticNoCL'
     */
#if Rte_SysCon_Variant_CTCR_PxPy

    /* SignalConversion generated from: '<S1>/VeFWDR_e_Tcase_Stat' incorporates:
     *  Inport: '<Root>/VeFWDR_e_Tcase_Stat'
     */
    (void)Rte_Read_VeFWDR_e_Tcase_Stat_Value(&rtb_TmpSignalConversionAtVeFWDR);

    /* SignalConversion generated from: '<S1>/VeTTQR_M_SumTrqStaticNoCL' incorporates:
     *  Inport: '<Root>/VeTTQR_M_SumTrqStaticNoCL'
     */
    (void)Rte_Read_VeTTQR_M_SumTrqStaticNoCL_Value
        (&rtb_TmpSignalConversionAtVeTTQR);

    /* SignalConversion generated from: '<S1>/VeMSPR_n_MtrB_SpdRaw' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrB_SpdRaw'
     */
    (void)Rte_Read_VeMSPR_n_MtrB_SpdRaw_Value(&rtb_TmpSignalConversionAtVeMSPR);

    /* SignalConversion generated from: '<S1>/VeATRR_M_OutputTorqReqImmedHTDR' incorporates:
     *  Inport: '<Root>/VeATRR_M_OutputTorqReqImmedHTDR'
     */
    (void)Rte_Read_VeATRR_M_OutputTorqReqImmedHTDR_Value
        (&rtb_TmpSignalConversionAtVeAT_m);

    /* SignalConversion generated from: '<S1>/VeHTDR_b_AHH_ModifyAccel_Req' incorporates:
     *  Inport: '<Root>/VeHTDR_b_AHH_ModifyAccel_Req'
     */
    (void)Rte_Read_VeHTDR_b_AHH_ModifyAccel_Req_Value
        (&rtb_TmpSignalConversionAtVeHTDR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeFWDR_e_Tcase_Stat' */

    /* SignalConversion generated from: '<S1>/VeDTRR_M_MgateMinTrq' */
#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    /* SignalConversion generated from: '<S1>/VeDTRR_M_MgateMinTrq' incorporates:
     *  Inport: '<Root>/VeDTRR_M_MgateMinTrq'
     */
    (void)Rte_Read_VeDTRR_M_MgateMinTrq_Value(&rtb_TmpSignalConversionAtVeDT_g);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDTRR_M_MgateMinTrq' */

    /* SignalConversion generated from: '<S1>/VeTINR_r_Mech_DrivelineRatio' */
#if Rte_SysCon_Variant_CTCR_PxPy

    /* SignalConversion generated from: '<S1>/VeTINR_r_Mech_DrivelineRatio' incorporates:
     *  Inport: '<Root>/VeTINR_r_Mech_DrivelineRatio'
     */
    (void)Rte_Read_VeTINR_r_Mech_DrivelineRatio_Value
        (&rtb_TmpSignalConversionAtVeTI_e);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTINR_r_Mech_DrivelineRatio' */

    /* SignalConversion generated from: '<S1>/VeTCCR_M_CreepTimp' */
#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    /* SignalConversion generated from: '<S1>/VeTCCR_M_CreepTimp' incorporates:
     *  Inport: '<Root>/VeTCCR_M_CreepTimp'
     */
    (void)Rte_Read_VeTCCR_M_CreepTimp_Value(&rtb_TmpSignalConversionAtVeTCCR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTCCR_M_CreepTimp' */

    /* SignalConversion generated from: '<S1>/VeTTIR_M_PumpTrqOnImpShaft' incorporates:
     *  SignalConversion generated from: '<S1>/VeAXLR_M_ActAxleOutputTrqNoCL'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor'
     */
#if Rte_SysCon_Variant_CTCR_PxPy

    /* SignalConversion generated from: '<S1>/VeTTIR_M_PumpTrqOnImpShaft' incorporates:
     *  Inport: '<Root>/VeTTIR_M_PumpTrqOnImpShaft'
     */
    (void)Rte_Read_VeTTIR_M_PumpTrqOnImpShaft_Value
        (&rtb_TmpSignalConversionAtVeTTIR);

    /* SignalConversion generated from: '<S1>/VeTCCR_r_RampFactor' incorporates:
     *  Inport: '<Root>/VeTCCR_r_RampFactor'
     */
    (void)Rte_Read_VeTCCR_r_RampFactor_Value(&rtb_TmpSignalConversionAtVeTC_j);

    /* SignalConversion generated from: '<S1>/VeAXLR_M_ActAxleOutputTrqNoCL' incorporates:
     *  Inport: '<Root>/VeAXLR_M_ActAxleOutputTrqNoCL'
     */
    (void)Rte_Read_VeAXLR_M_ActAxleOutputTrqNoCL_Value
        (&rtb_TmpSignalConversionAtVeAXLR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTTIR_M_PumpTrqOnImpShaft' */

    /* SignalConversion generated from: '<S1>/VeOHSR_e_SGrDsrd_EngOn' incorporates:
     *  SignalConversion generated from: '<S1>/VeHSER_e_HTDR_State'
     *  SignalConversion generated from: '<S1>/VeTCCR_r_CreepVrtlRt'
     *  SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt'
     */
#if Rte_SysCon_Variant_CTCR_FUNC

    /* SignalConversion generated from: '<S1>/VeOHSR_e_SGrDsrd_EngOn' incorporates:
     *  Inport: '<Root>/VeOHSR_e_SGrDsrd_EngOn'
     */
    (void)Rte_Read_VeOHSR_e_SGrDsrd_EngOn_Value(&rtb_TmpSignalConversionAtVeOH_b);

    /* SignalConversion generated from: '<S1>/VeHSER_e_HTDR_State' incorporates:
     *  Inport: '<Root>/VeHSER_e_HTDR_State'
     */
    (void)Rte_Read_VeHSER_e_HTDR_State_Value(&rtb_TmpSignalConversionAtVeHS_m);

    /* SignalConversion generated from: '<S1>/VeTCCR_r_CreepVrtlRt' incorporates:
     *  Inport: '<Root>/VeTCCR_r_CreepVrtlRt'
     */
    (void)Rte_Read_VeTCCR_r_CreepVrtlRt_Value(&rtb_TmpSignalConversionAtVeTC_o);

    /* SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTRGR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeOHSR_e_SGrDsrd_EngOn' */

    /* SignalConversion generated from: '<S1>/VeRGNR_M_ToMin4ECM' */
#if Rte_SysCon_Variant_CTCR_PxPy

    /* SignalConversion generated from: '<S1>/VeRGNR_M_ToMin4ECM' incorporates:
     *  Inport: '<Root>/VeRGNR_M_ToMin4ECM'
     */
    (void)Rte_Read_VeRGNR_M_ToMin4ECM_Value(&rtb_TmpSignalConversionAtVeRG_i);

#endif

    /* End of SignalConversion generated from: '<S1>/VeRGNR_M_ToMin4ECM' */
#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    /* S-Function (fcgen): '<S1>/FcnCallGen' */
#if Rte_SysCon_Variant_CTCR_PxPy

    /* Inport: '<Root>/VeTCCR_M_CreepTimpTgt' */
    (void)Rte_Read_VeTCCR_M_CreepTimpTgt_Value(&tmpRead_9);

    /* Inport: '<Root>/VeHSER_n_C1_SlipDsrd' */
    (void)Rte_Read_VeHSER_n_C1_SlipDsrd_Value(&rtb_Sum_pn);

    /* Outputs for Function Call SubSystem: '<S1>/CTCR_MinCreepPedal_PxPy' */
    /* RelationalOperator: '<S112>/Comparison7' incorporates:
     *  Constant: '<S121>/Constant'
     */
    VeCTCR_b_NotIn4Lo = (CeFWDR_e_TfrCas4Low != ((uint32)
                          rtb_TmpSignalConversionAtVeFWDR));

    /* Outputs for Atomic SubSystem: '<S257>/Limiter' */
    /* Switch: '<S274>/Switch1' incorporates:
     *  Constant: '<S266>/Calib'
     *  Gain: '<S257>/Gain'
     *  RelationalOperator: '<S274>/RelationalOperator'
     *  UnitDelay: '<S257>/UnitDelay1'
     */
    if ((-KeCTCR_dn_MaxTurbAccel) < CTCR_ac_DW.UnitDelay1_DSTATE_o)
    {
        /* Switch: '<S305>/Switch1' */
        rtb_Switch1_bd = -KeCTCR_dn_MaxTurbAccel;
    }
    else
    {
        /* Switch: '<S305>/Switch1' */
        rtb_Switch1_bd = CTCR_ac_DW.UnitDelay1_DSTATE_o;
    }

    /* End of Switch: '<S274>/Switch1' */
    /* End of Outputs for SubSystem: '<S257>/Limiter' */

    /* Outputs for IfAction SubSystem: '<S112>/CalcCrpSpdActv4Lo' incorporates:
     *  ActionPort: '<S120>/ActionPort'
     */
    /* Outputs for IfAction SubSystem: '<S112>/CalcCrpSpdActv4Hi' incorporates:
     *  ActionPort: '<S119>/ActionPort'
     */
    /* If: '<S112>/If' incorporates:
     *  Constant: '<S257>/ConstantValue1'
     *  Constant: '<S262>/Calib'
     *  Product: '<S138>/Multiplication3'
     *  Product: '<S204>/Multiplication3'
     *  Product: '<S256>/Multiplication3'
     *  Product: '<S257>/Multiplication3'
     */
    rtb_Sum_d_tmp = HeCTCR_t_dTA / 2.0F;

    /* End of Outputs for SubSystem: '<S112>/CalcCrpSpdActv4Hi' */
    /* End of Outputs for SubSystem: '<S112>/CalcCrpSpdActv4Lo' */

    /* Product: '<S256>/Multiplication2' incorporates:
     *  Constant: '<S271>/Calib'
     *  Product: '<S256>/Multiplication4'
     *  Sum: '<S256>/Summation'
     *  Sum: '<S256>/Summation1'
     *  Sum: '<S256>/Summation2'
     *  UnitDelay: '<S256>/UnitDelay'
     *  UnitDelay: '<S256>/UnitDelay1'
     */
    VeCTCR_dm_BrkPdlGrad = ((rtb_TmpSignalConversionAtVeATRR - ((rtb_Sum_d_tmp -
        KeCTCR_t_BrakePedalGradBlendFactor) * CTCR_ac_DW.UnitDelay1_DSTATE_j)) -
                            CTCR_ac_DW.UnitDelay_DSTATE_b) / (rtb_Sum_d_tmp +
        KeCTCR_t_BrakePedalGradBlendFactor);

    /* Switch: '<S115>/Switch1' incorporates:
     *  Lookup_n-D: '<S273>/Vector'
     *  Product: '<S256>/Multiplication2'
     */
    rtb_Switch1_lb = look1_iflf_binlcapw(VeCTCR_dm_BrkPdlGrad, ((const float32 *)
        &(KxCTCR_r_FilterCoeffturbSpd[0])), ((const float32 *)
        &(KtCTCR_r_FilterCoeffturbSpd[0])), 3U);

    /* Outputs for Atomic SubSystem: '<S257>/Limiter' */
    /* Switch: '<S274>/Switch' incorporates:
     *  Constant: '<S266>/Calib'
     *  RelationalOperator: '<S274>/RelationalOperator1'
     */
    if (rtb_Switch1_bd <= KeCTCR_dn_MaxTurbAccel)
    {
        rtb_Switch1_bd = KeCTCR_dn_MaxTurbAccel;
    }

    /* End of Switch: '<S274>/Switch' */
    /* End of Outputs for SubSystem: '<S257>/Limiter' */

    /* Product: '<S257>/Multiplication2' incorporates:
     *  Product: '<S257>/Multiplication3'
     *  Product: '<S257>/Multiplication4'
     *  Sum: '<S257>/Summation'
     *  Sum: '<S257>/Summation1'
     *  Sum: '<S257>/Summation2'
     *  UnitDelay: '<S257>/UnitDelay'
     */
    rtb_Gain = ((rtb_TmpSignalConversionAtVeVSDR - ((rtb_Sum_d_tmp -
                   rtb_Switch1_lb) * rtb_Switch1_bd)) -
                CTCR_ac_DW.UnitDelay_DSTATE_hp) / (rtb_Sum_d_tmp +
        rtb_Switch1_lb);

    /* Product: '<S248>/Product2' incorporates:
     *  Constant: '<S272>/Calib'
     */
    VeCTCR_n_NturbAccel = rtb_Gain * KeCTCR_t_PrimNodotMult;

    /* Sum: '<S248>/Sum2' incorporates:
     *  Constant: '<S248>/ConstantValue2'
     *  MinMax: '<S248>/MinMax3'
     */
    VeCTCR_n_NTurb4SlipCalc = rtb_TmpSignalConversionAtVeVSDR + fminf(0.0F,
        VeCTCR_n_NturbAccel);

    /* Switch: '<S248>/Switch1' incorporates:
     *  Constant: '<S258>/Constant'
     *  Constant: '<S259>/Constant'
     *  Logic: '<S248>/Logical3'
     *  RelationalOperator: '<S248>/Comparison1'
     *  RelationalOperator: '<S248>/Comparison2'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeOH_e) == CeOHSR_e_RngSel_M2) ||
            (((uint32)rtb_TmpSignalConversionAtVeOH_e) == CeOHSR_e_RngSel_G2))
    {
        rtb_Switch1_bd = rtb_TmpSignalConversionAtVeOH_m;
    }
    else
    {
        rtb_Switch1_bd = rtb_TmpSignalConversionAtVeOHSR;
    }

    /* End of Switch: '<S248>/Switch1' */

    /* Sum: '<S248>/Sum3' */
    VeCTCR_n_NC1TgtSlip = rtb_Switch1_bd - VeCTCR_n_NTurb4SlipCalc;

    /* If: '<S118>/If1' incorporates:
     *  Constant: '<S340>/Constant'
     *  Constant: '<S341>/Constant'
     *  Logic: '<S118>/Logical2'
     *  RelationalOperator: '<S118>/Equal1'
     *  RelationalOperator: '<S118>/Equal2'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeHS_e) == CeHSER_e_M2_State) ||
            (((uint32)rtb_TmpSignalConversionAtVeHS_e) == CeHSER_e_G2_State))
    {
        /* Outputs for IfAction SubSystem: '<S118>/UseInputSpdProf' incorporates:
         *  ActionPort: '<S346>/ActionPort'
         */
        /* Merge: '<S118>/Merge1' incorporates:
         *  Inport: '<S346>/VeHSER_n_InputSpeedProfile'
         */
        VeCTCR_n_ActualSpd = rtb_TmpSignalConversionAtVeHSER;

        /* End of Outputs for SubSystem: '<S118>/UseInputSpdProf' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S118>/UsePrimNo_Slip' incorporates:
         *  ActionPort: '<S347>/ActionPort'
         */
        /* Merge: '<S118>/Merge1' incorporates:
         *  Sum: '<S347>/Sum3'
         */
        VeCTCR_n_ActualSpd = rtb_TmpSignalConversionAtVeVSDR + rtb_Sum_pn;

        /* End of Outputs for SubSystem: '<S118>/UsePrimNo_Slip' */
    }

    /* End of If: '<S118>/If1' */

    /* Sum: '<S118>/Sum2' */
    VeCTCR_n_SlipSpd = VeCTCR_n_ActualSpd - rtb_TmpSignalConversionAtVeVSDR;

    /* MinMax: '<S248>/MinMax1' */
    VeCTCR_n_NC1SlipTransWhlTrqCalc = fmaxf(VeCTCR_n_NC1TgtSlip,
        VeCTCR_n_SlipSpd);

    /* Outputs for Atomic SubSystem: '<S248>/Hysteresis' */
    /* Switch: '<S263>/Switch1' incorporates:
     *  Constant: '<S268>/Calib'
     *  RelationalOperator: '<S263>/Greater  Than'
     */
    if (VeCTCR_n_NC1SlipTransWhlTrqCalc > KeCTCR_n_DesSlipTransIntakeTrqRSP)
    {
        /* Switch: '<S263>/Switch1' incorporates:
         *  Constant: '<S263>/Constant Value'
         */
        rtb_Switch1_bu = true;
    }
    else
    {
        /* Switch: '<S263>/Switch1' incorporates:
         *  Constant: '<S267>/Calib'
         *  RelationalOperator: '<S263>/Greater  Than1'
         *  UnitDelay: '<S263>/Unit Delay'
         */
        rtb_Switch1_bu = ((VeCTCR_n_NC1SlipTransWhlTrqCalc >=
                           KeCTCR_n_DesSlipTransIntakeTrqLSP) &&
                          (CTCR_ac_DW.UnitDelay_DSTATE_ho));
    }

    /* End of Switch: '<S263>/Switch1' */

    /* Update for UnitDelay: '<S263>/Unit Delay' */
    CTCR_ac_DW.UnitDelay_DSTATE_ho = rtb_Switch1_bu;

    /* End of Outputs for SubSystem: '<S248>/Hysteresis' */
    /* End of Outputs for SubSystem: '<S1>/CTCR_MinCreepPedal_PxPy' */

    /* Inport: '<Root>/VeTCCR_M_CreepTturb' */
    (void)Rte_Read_VeTCCR_M_CreepTturb_Value(&tmpRead_3);

    /* Outputs for Function Call SubSystem: '<S1>/CTCR_MinCreepPedal_PxPy' */
    /* Outputs for Atomic SubSystem: '<S248>/GradientLimiter' */
    /* Switch: '<S305>/Switch1' incorporates:
     *  UnitDelay: '<S261>/Unit Delay'
     */
    rtb_Switch1_bd = CTCR_ac_DW.UnitDelay_DSTATE_gg;

    /* End of Outputs for SubSystem: '<S248>/GradientLimiter' */

    /* Switch: '<S248>/Switch2' incorporates:
     *  Constant: '<S248>/ConstantValue3'
     *  Constant: '<S260>/Constant'
     *  Constant: '<S264>/Calib'
     *  Constant: '<S265>/Calib'
     *  Logic: '<S248>/Logical1'
     *  Logic: '<S248>/Logical2'
     *  Product: '<S248>/Product3'
     *  RelationalOperator: '<S248>/Comparison3'
     */
    if ((KeCTCR_b_NeverUseSlipBasedTransIntakeTrq) ||
            ((KeCTCR_b_NotUseSlipBasedTransIntakeTrqInLow) && (((uint32)
            rtb_TmpSignalConversionAtVeFWDR) == CeFWDR_e_TfrCas4Low)))
    {
        rtb_Sum_pn = 1.0F;
    }
    else
    {
        rtb_Sum_pn = rtb_Switch1_bu ? 1.0F : 0.0F;
    }

    /* End of Switch: '<S248>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S248>/GradientLimiter' */
    /* Sum: '<S261>/Sum2' */
    rtb_Sum_pn -= rtb_Switch1_bd;

    /* Outputs for Atomic SubSystem: '<S261>/Limiter' */
    /* Switch: '<S275>/Switch1' incorporates:
     *  Constant: '<S270>/Calib'
     *  RelationalOperator: '<S275>/Relational Operator'
     */
    if (KeCTCR_r_GrdLimTransIntakeTrqLU < rtb_Sum_pn)
    {
        /* Switch: '<S115>/Switch1' */
        rtb_Switch1_lb = KeCTCR_r_GrdLimTransIntakeTrqLU;
    }
    else
    {
        /* Switch: '<S115>/Switch1' */
        rtb_Switch1_lb = rtb_Sum_pn;
    }

    /* End of Switch: '<S275>/Switch1' */

    /* Switch: '<S275>/Switch' incorporates:
     *  Constant: '<S269>/Calib'
     *  RelationalOperator: '<S275>/Relational Operator1'
     */
    if (rtb_Switch1_lb <= KeCTCR_r_GrdLimTransIntakeTrqLD)
    {
        rtb_Switch1_lb = KeCTCR_r_GrdLimTransIntakeTrqLD;
    }

    /* End of Switch: '<S275>/Switch' */
    /* End of Outputs for SubSystem: '<S261>/Limiter' */

    /* Sum: '<S261>/Sum3' */
    VeCTCR_r_BlendTransIntakeTorqueFac = rtb_Switch1_lb + rtb_Switch1_bd;

    /* Update for UnitDelay: '<S261>/Unit Delay' */
    CTCR_ac_DW.UnitDelay_DSTATE_gg = VeCTCR_r_BlendTransIntakeTorqueFac;

    /* End of Outputs for SubSystem: '<S248>/GradientLimiter' */

    /* Switch: '<S115>/Switch1' incorporates:
     *  Product: '<S135>/Product7'
     *  Product: '<S135>/Product8'
     *  Sum: '<S135>/Sum4'
     */
    rtb_Switch1_lb = ((tmpRead_9 * rtb_TmpSignalConversionAtVeTC_j) +
                      rtb_TmpSignalConversionAtVeTTIR) *
        VeCTCR_r_BlendTransIntakeTorqueFac;

    /* Sum: '<S115>/Sum' incorporates:
     *  Product: '<S135>/Product5'
     *  Product: '<S135>/Product6'
     *  Sum: '<S135>/Sum1'
     */
    rtb_Sum_pn = ((rtb_TmpSignalConversionAtVeTCCR *
                   rtb_TmpSignalConversionAtVeTC_j) +
                  rtb_TmpSignalConversionAtVeTTIR) *
        VeCTCR_r_BlendTransIntakeTorqueFac;

    /* Lookup_n-D: '<S313>/Vector' incorporates:
     *  Product: '<S135>/Product4'
     */
    rtb_Switch1_bd = ((tmpRead_3 * VeCTCR_r_BlendTransIntakeTorqueFac) *
                      rtb_TmpSignalConversionAtVeTC_j) *
        rtb_TmpSignalConversionAtVeTI_e;

    /* Switch: '<S135>/Switch' incorporates:
     *  MinMax: '<S242>/Max'
     *  Sum: '<S250>/Sum'
     *  UnitDelay: '<S242>/Unit Delay'
     */
    rtb_Switch_h[0] = fmaxf(CTCR_ac_DW.UnitDelay_DSTATE_m[0], rtb_Switch1_lb) -
        rtb_Switch1_lb;
    rtb_Switch_h[1] = fmaxf(CTCR_ac_DW.UnitDelay_DSTATE_m[1], rtb_Sum_pn) -
        rtb_Sum_pn;
    rtb_Switch_h[2] = fmaxf(CTCR_ac_DW.UnitDelay_DSTATE_m[2], rtb_Switch1_bd) -
        rtb_Switch1_bd;

    /* Outputs for Atomic SubSystem: '<S242>/Hysteresis1' */
    /* Switch: '<S252>/Switch1' incorporates:
     *  Constant: '<S254>/Calib'
     *  RelationalOperator: '<S252>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeAPSR >
            KeCTCR_Pct_TransIntakeTrqPdlFrzThreshEnbl)
    {
        /* Switch: '<S252>/Switch1' incorporates:
         *  Constant: '<S252>/Constant Value'
         */
        rtb_Switch1_bu = true;
    }
    else
    {
        /* Switch: '<S252>/Switch1' incorporates:
         *  Constant: '<S253>/Calib'
         *  RelationalOperator: '<S252>/Greater  Than1'
         *  UnitDelay: '<S252>/Unit Delay'
         */
        rtb_Switch1_bu = ((rtb_TmpSignalConversionAtVeAPSR >=
                           KeCTCR_Pct_TransIntakeTrqPdlFrzThreshDsbl) &&
                          (CTCR_ac_DW.UnitDelay_DSTATE_cm));
    }

    /* End of Switch: '<S252>/Switch1' */

    /* Update for UnitDelay: '<S252>/Unit Delay' */
    CTCR_ac_DW.UnitDelay_DSTATE_cm = rtb_Switch1_bu;

    /* End of Outputs for SubSystem: '<S242>/Hysteresis1' */

    /* Switch: '<S242>/Switch' incorporates:
     *  Logic: '<S242>/NOT'
     *  Switch: '<S242>/Switch1'
     *  UnitDelay: '<S242>/Unit Delay1'
     */
    if (!CTCR_ac_DW.UnitDelay1_DSTATE_ms)
    {
        /* Switch: '<S242>/Switch' incorporates:
         *  Constant: '<S242>/Constant'
         */
        VeCTCR_r_PedalFreezeBF = 0.0F;
    }
    else if (rtb_Switch1_bu)
    {
        /* Switch: '<S242>/Switch' incorporates:
         *  Constant: '<S242>/Constant1'
         *  Switch: '<S242>/Switch1'
         */
        VeCTCR_r_PedalFreezeBF = 1.0F;
    }
    else
    {
        /* Switch: '<S242>/Switch' incorporates:
         *  Constant: '<S242>/Constant2'
         *  Constant: '<S251>/Calib'
         *  Constant: '<S255>/Calib'
         *  MinMax: '<S242>/Max1'
         *  MinMax: '<S242>/Max2'
         *  Product: '<S242>/Divide'
         *  Sum: '<S242>/Sum1'
         *  Switch: '<S242>/Switch1'
         *  UnitDelay: '<S242>/UnitDelay'
         */
        VeCTCR_r_PedalFreezeBF = fmaxf(0.0F, CTCR_ac_DW.UnitDelay_DSTATE_n -
            (HeCTCR_t_dTA / fmaxf(HeCTCR_t_dTA,
            KeCTCR_t_TransIntakeTrqPdlFrzBlndOut)));
    }

    /* End of Switch: '<S242>/Switch' */
    /* End of Outputs for SubSystem: '<S1>/CTCR_MinCreepPedal_PxPy' */

    /* Inport: '<Root>/VeSRAR_b_Dsbl_MtrB_IdlSpd' */
    (void)Rte_Read_VeSRAR_b_Dsbl_MtrB_IdlSpd_Value(&rtb_NotEqual1_b);

    /* Inport: '<Root>/VeTINR_d_TCMFailures' */
    (void)Rte_Read_VeTINR_d_TCMFailures_Value(&rtb_Switch1_pi);

    /* Outputs for Function Call SubSystem: '<S1>/CTCR_MinCreepPedal_PxPy' */
    for (i = 0; i < 3; i++)
    {
        /* Switch: '<S135>/Switch' incorporates:
         *  Product: '<S250>/Product'
         */
        rtb_Switch_h[i] *= VeCTCR_r_PedalFreezeBF;
    }

    /* Sum: '<S250>/Sum1' */
    rtb_Sum1_p0[0] = rtb_Switch_h[0] + rtb_Switch1_lb;
    rtb_Sum1_p0[1] = rtb_Switch_h[1] + rtb_Sum_pn;
    rtb_Sum1_p0[2] = rtb_Switch_h[2] + rtb_Switch1_bd;

    /* Logic: '<S114>/Logical1' incorporates:
     *  Constant: '<S296>/Calib'
     *  Constant: '<S297>/ConstantValue'
     *  RelationalOperator: '<S297>/Comparison'
     *  S-Function (sfix_bitop): '<S297>/BitwiseLogicalOperator6'
     */
    VeCTCR_b_DsblTransIntTrq = (((((sint32)rtb_Switch1_pi) & ((sint32)
        KeCTCR_g_TransFail_DsblTransIntTrq)) >= 1) || rtb_NotEqual1_b);

    /* Switch: '<S135>/Switch' incorporates:
     *  Constant: '<S241>/Calib'
     *  Inport: '<Root>/VeTTIR_M_TransIntakeTorq'
     */
    if (HeCTCR_b_FTC_Enbl)
    {
        /* Switch: '<S135>/Switch' */
        for (i = 0; i < 3; i++)
        {
            rtb_Switch_h[i] = rtb_Sum1_p0[i];
        }
    }
    else
    {
        (void)Rte_Read_VeTTIR_M_TransIntakeTorq_Value(&rtb_Signum_o);

        /* Switch: '<S135>/Switch3' incorporates:
         *  Constant: '<S135>/ConstantValue4'
         *  Inport: '<Root>/VeTTIR_M_TransIntakeTorq'
         */
        if (VeCTCR_b_DsblTransIntTrq)
        {
            rtb_Signum_o = 0.0F;
        }

        /* End of Switch: '<S135>/Switch3' */

        /* Product: '<S135>/Product26' */
        rtb_Sum_pn = VeCTCR_r_BlendTransIntakeTorqueFac * rtb_Signum_o;

        /* Switch: '<S135>/Switch' incorporates:
         *  Product: '<S135>/Product1'
         */
        rtb_Switch_h[0] = rtb_Sum_pn;
        rtb_Switch_h[1] = rtb_Sum_pn;
        rtb_Switch_h[2] = rtb_Sum_pn * rtb_TmpSignalConversionAtVeTINR;
    }

    /* End of Switch: '<S135>/Switch' */

    /* Gain: '<S247>/Gain' */
    VeCTCR_M_TransIntakeWhlTgt = rtb_Switch_h[2];

    /* Gain: '<S246>/Gain' */
    VeCTCR_M_TransIntakeFw_Raw = rtb_Switch_h[1];

    /* Outputs for Atomic SubSystem: '<S249>/ProtectedDivision2' */
    /* RelationalOperator: '<S278>/Not Equal1' incorporates:
     *  Constant: '<S278>/Constant Value1'
     */
    rtb_NotEqual1_b = (rtb_TmpSignalConversionAtVeTI_e != 0.0F);

    /* End of Outputs for SubSystem: '<S249>/ProtectedDivision2' */

    /* Switch: '<S249>/Switch' incorporates:
     *  Constant: '<S249>/ConstantValue4'
     *  Constant: '<S278>/Constant Value2'
     *  Logic: '<S278>/AND'
     *  RelationalOperator: '<S249>/GreaterThan1'
     *  RelationalOperator: '<S278>/Greater Than or Equal '
     *  Switch: '<S278>/Switch1'
     *  Switch: '<S278>/Switch2'
     */
    if (rtb_TmpSignalConversionAtVeDTRR < 0.01F)
    {
        /* Switch: '<S249>/Switch' incorporates:
         *  Constant: '<S249>/ConstantValue2'
         */
        rtb_Switch_b[0] = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S249>/ProtectedDivision2' */
        if (rtb_NotEqual1_b)
        {
            /* Switch: '<S278>/Switch1' incorporates:
             *  Product: '<S278>/Division'
             *  Switch: '<S249>/Switch'
             */
            rtb_Switch_b[0] = rtb_TmpSignalConversionAtVeDTRR /
                rtb_TmpSignalConversionAtVeTI_e;
        }
        else if (rtb_TmpSignalConversionAtVeDTRR > 0.0F)
        {
            /* Switch: '<S278>/Switch2' incorporates:
             *  Constant: '<S278>/MAXFLOAT'
             *  Switch: '<S249>/Switch'
             */
            rtb_Switch_b[0] = 3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S249>/Switch' incorporates:
             *  Constant: '<S278>/Constant Value4'
             *  Switch: '<S278>/Switch2'
             *  Switch: '<S278>/Switch3'
             */
            rtb_Switch_b[0] = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S249>/ProtectedDivision2' */
    }

    if (rtb_TmpSignalConversionAtVeDT_g < 0.01F)
    {
        /* Switch: '<S249>/Switch' incorporates:
         *  Constant: '<S249>/ConstantValue2'
         */
        rtb_Switch_b[1] = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S249>/ProtectedDivision2' */
        if (rtb_NotEqual1_b)
        {
            /* Switch: '<S278>/Switch1' incorporates:
             *  Product: '<S278>/Division'
             *  Switch: '<S249>/Switch'
             */
            rtb_Switch_b[1] = rtb_TmpSignalConversionAtVeDT_g /
                rtb_TmpSignalConversionAtVeTI_e;
        }
        else if (rtb_TmpSignalConversionAtVeDT_g > 0.0F)
        {
            /* Switch: '<S278>/Switch2' incorporates:
             *  Constant: '<S278>/MAXFLOAT'
             *  Switch: '<S249>/Switch'
             */
            rtb_Switch_b[1] = 3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S249>/Switch' incorporates:
             *  Constant: '<S278>/Constant Value4'
             *  Switch: '<S278>/Switch2'
             *  Switch: '<S278>/Switch3'
             */
            rtb_Switch_b[1] = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S249>/ProtectedDivision2' */
    }

    /* End of Switch: '<S249>/Switch' */

    /* Outputs for Atomic SubSystem: '<S249>/VariantSubsystem' */
#if Rte_SysCon_Variant_CTCR_RTC_Turb_On

    /* Outputs for Atomic SubSystem: '<S279>/RTC_on' */
    /* Gain: '<S289>/Gain' incorporates:
     *  Lookup_n-D: '<S291>/Vector'
     *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
     */
    rtb_Switch1_bd = 0.5F * look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeVS_j,
        (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsB_KxHSCR_r_TCC_TturbFromNC2_CoeffsB
         ()),
        (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsB_KtHSCR_r_TCC_TturbFromNC2_CoeffsB
         ()), 21U);

    /* Lookup_n-D: '<S290>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
     */
    rtb_Switch1_lb = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeVS_j,
        (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsA_KxHSCR_r_TCC_TturbFromNC2_CoeffsA
         ()),
        (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsA_KtHSCR_r_TCC_TturbFromNC2_CoeffsA
         ()), 21U);

    /* Outputs for Atomic SubSystem: '<S289>/Protected Division1' */
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
    if ((rtb_Switch1_bd != 0.0F) && (rtb_Switch1_lb != 0.0F))
    {
        /* Switch: '<S293>/Switch1' incorporates:
         *  Product: '<S293>/Division'
         */
        rtb_Sum_pn = rtb_Switch1_bd / rtb_Switch1_lb;
    }
    else if (rtb_Switch1_bd > 0.0F)
    {
        /* Switch: '<S293>/Switch2' incorporates:
         *  Constant: '<S293>/MAXFLOAT'
         *  Switch: '<S293>/Switch1'
         */
        rtb_Sum_pn = 3.402823466E+38F;
    }
    else if (rtb_Switch1_bd < 0.0F)
    {
        /* Switch: '<S293>/Switch3' incorporates:
         *  Constant: '<S293>/MINFLOAT'
         *  Switch: '<S293>/Switch1'
         *  Switch: '<S293>/Switch2'
         */
        rtb_Sum_pn = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S293>/Switch1' incorporates:
         *  Constant: '<S293>/Constant Value4'
         *  Switch: '<S293>/Switch2'
         *  Switch: '<S293>/Switch3'
         */
        rtb_Sum_pn = 0.0F;
    }

    /* End of Switch: '<S293>/Switch1' */
    /* End of Outputs for SubSystem: '<S289>/Protected Division1' */

    /* Gain: '<S289>/Gain1' */
    rtb_Sum_pn = -rtb_Sum_pn;

    /* Product: '<S289>/Product1' */
    rtb_Switch1_bd *= rtb_Switch1_bd;

    /* Outputs for Atomic SubSystem: '<S289>/Protected Division2' */
    /* Switch: '<S294>/Switch1' incorporates:
     *  Constant: '<S294>/Constant Value'
     *  Constant: '<S294>/Constant Value1'
     *  Constant: '<S294>/Constant Value2'
     *  Constant: '<S294>/Constant Value3'
     *  Logic: '<S294>/AND'
     *  RelationalOperator: '<S294>/Greater Than or Equal '
     *  RelationalOperator: '<S294>/Greater Than or Equal 1'
     *  RelationalOperator: '<S294>/Not Equal'
     *  RelationalOperator: '<S294>/Not Equal1'
     *  Switch: '<S294>/Switch2'
     *  Switch: '<S294>/Switch3'
     */
    if ((rtb_Switch1_bd != 0.0F) && (rtb_Switch1_lb != 0.0F))
    {
        /* Switch: '<S294>/Switch1' incorporates:
         *  Product: '<S294>/Division'
         */
        rtb_Switch1_bd /= rtb_Switch1_lb;
    }
    else if (rtb_Switch1_bd > 0.0F)
    {
        /* Switch: '<S294>/Switch2' incorporates:
         *  Constant: '<S294>/MAXFLOAT'
         *  Switch: '<S294>/Switch1'
         */
        rtb_Switch1_bd = 3.402823466E+38F;
    }
    else if (rtb_Switch1_bd < 0.0F)
    {
        /* Switch: '<S294>/Switch3' incorporates:
         *  Constant: '<S294>/MINFLOAT'
         *  Switch: '<S294>/Switch1'
         *  Switch: '<S294>/Switch2'
         */
        rtb_Switch1_bd = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S294>/Switch1' incorporates:
         *  Constant: '<S294>/Constant Value4'
         *  Switch: '<S294>/Switch2'
         *  Switch: '<S294>/Switch3'
         */
        rtb_Switch1_bd = 0.0F;
    }

    /* End of Switch: '<S294>/Switch1' */
    /* End of Outputs for SubSystem: '<S289>/Protected Division2' */

    /* Sum: '<S289>/Sum1' incorporates:
     *  Lookup_n-D: '<S292>/Vector'
     *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
     */
    rtb_Switch1_bd = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeVS_j,
        (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsC_KxHSCR_r_TCC_TturbFromNC2_CoeffsC
         ()),
        (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsC_KtHSCR_r_TCC_TturbFromNC2_CoeffsC
         ()), 3U) - rtb_Switch1_bd;

    /* Outputs for Atomic SubSystem: '<S289>/Protected Division4' */
    /* Switch: '<S295>/Switch1' incorporates:
     *  Constant: '<S295>/Constant Value1'
     *  RelationalOperator: '<S295>/Not Equal1'
     */
    if (rtb_Switch1_lb != 0.0F)
    {
        /* Switch: '<S295>/Switch1' incorporates:
         *  Constant: '<S289>/Constant Value2'
         *  Product: '<S295>/Division'
         */
        rtb_Switch1_lb = 1.0F / rtb_Switch1_lb;
    }
    else
    {
        /* Switch: '<S295>/Switch1' */
        rtb_Switch1_lb = 3.402823466E+38F;
    }

    /* End of Switch: '<S295>/Switch1' */
    /* End of Outputs for SubSystem: '<S289>/Protected Division4' */

    /* Signum: '<S288>/Signum' */
    if (rtb_Switch1_lb < 0.0F)
    {
        /* Signum: '<S288>/Signum' */
        rtb_Signum_o = -1.0F;
    }
    else if (rtb_Switch1_lb > 0.0F)
    {
        /* Signum: '<S288>/Signum' */
        rtb_Signum_o = 1.0F;
    }
    else
    {
        /* Signum: '<S288>/Signum' */
        rtb_Signum_o = rtb_Switch1_lb;
    }

    /* End of Signum: '<S288>/Signum' */
    for (i = 0; i < 2; i++)
    {
        /* Sum: '<S288>/Sum3' incorporates:
         *  Constant: '<S288>/Constant Value'
         *  MinMax: '<S288>/MinMax1'
         *  Product: '<S288>/Product'
         *  Product: '<S288>/Product1'
         *  Sqrt: '<S288>/Square Root'
         *  Sum: '<S288>/Sum2'
         */
        rtb_Sum3_cd[i] = ((sqrtf(fmaxf((rtb_Switch_b[i] - rtb_Switch1_bd) *
                             rtb_Switch1_lb, 0.0F)) * rtb_Signum_o) + rtb_Sum_pn)
            + rtb_TmpSignalConversionAtVeVS_j;
    }

    /* Outputs for Atomic SubSystem: '<S283>/Protected Division3' */
    /* RelationalOperator: '<S286>/Not Equal' incorporates:
     *  Constant: '<S286>/Constant Value'
     */
    rtb_NotEqual1_b = (rtb_TmpSignalConversionAtVeVS_j != 0.0F);

    /* Switch: '<S286>/Switch2' incorporates:
     *  Constant: '<S286>/Constant Value2'
     *  Constant: '<S286>/Constant Value3'
     *  RelationalOperator: '<S286>/Greater Than or Equal '
     *  RelationalOperator: '<S286>/Greater Than or Equal 1'
     *  Switch: '<S286>/Switch3'
     */
    if (rtb_TmpSignalConversionAtVeVS_j > 0.0F)
    {
        /* Switch: '<S286>/Switch2' incorporates:
         *  Constant: '<S286>/MAXFLOAT'
         */
        rtb_Sum_pn = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeVS_j < 0.0F)
    {
        /* Switch: '<S286>/Switch3' incorporates:
         *  Constant: '<S286>/MINFLOAT'
         *  Switch: '<S286>/Switch2'
         */
        rtb_Sum_pn = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S286>/Switch2' incorporates:
         *  Constant: '<S286>/Constant Value4'
         *  Switch: '<S286>/Switch3'
         */
        rtb_Sum_pn = 0.0F;
    }

    /* End of Switch: '<S286>/Switch2' */
    for (i = 0; i < 2; i++)
    {
        /* RelationalOperator: '<S286>/Not Equal1' */
        tmpRead_9 = rtb_Sum3_cd[i];

        /* Outputs for Atomic SubSystem: '<S283>/Protected Division1' */
        /* RelationalOperator: '<S285>/Not Equal' */
        tmpRead_3 = rtb_Switch_b[i];

        /* End of Outputs for SubSystem: '<S283>/Protected Division1' */

        /* Switch: '<S286>/Switch1' incorporates:
         *  Constant: '<S286>/Constant Value1'
         *  Logic: '<S286>/AND'
         *  RelationalOperator: '<S286>/Not Equal1'
         */
        if (rtb_NotEqual1_b && (tmpRead_9 != 0.0F))
        {
            /* Switch: '<S286>/Switch1' incorporates:
             *  Product: '<S286>/Division'
             */
            tmpRead_9 = rtb_TmpSignalConversionAtVeVS_j / tmpRead_9;
        }
        else
        {
            /* Switch: '<S286>/Switch1' */
            tmpRead_9 = rtb_Sum_pn;
        }

        /* End of Switch: '<S286>/Switch1' */

        /* Lookup_n-D: '<S284>/Vector' */
        rtb_Signum_o = look1_iflf_binlcapw(tmpRead_9,
            (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
            (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()), 17U);

        /* Outputs for Atomic SubSystem: '<S283>/Protected Division1' */
        /* Switch: '<S285>/Switch1' incorporates:
         *  Constant: '<S285>/Constant Value'
         *  Constant: '<S285>/Constant Value1'
         *  Constant: '<S285>/Constant Value2'
         *  Constant: '<S285>/Constant Value3'
         *  Constant: '<S285>/Constant Value4'
         *  Logic: '<S285>/AND'
         *  Product: '<S285>/Division'
         *  RelationalOperator: '<S285>/Greater Than or Equal '
         *  RelationalOperator: '<S285>/Greater Than or Equal 1'
         *  RelationalOperator: '<S285>/Not Equal'
         *  RelationalOperator: '<S285>/Not Equal1'
         *  Switch: '<S285>/Switch2'
         *  Switch: '<S285>/Switch3'
         */
        if ((tmpRead_3 != 0.0F) && (rtb_Signum_o != 0.0F))
        {
            rtb_Signum_o = tmpRead_3 / rtb_Signum_o;
        }
        else if (tmpRead_3 > 0.0F)
        {
            /* Switch: '<S285>/Switch2' incorporates:
             *  Constant: '<S285>/MAXFLOAT'
             */
            rtb_Signum_o = 3.402823466E+38F;
        }
        else if (tmpRead_3 < 0.0F)
        {
            /* Switch: '<S285>/Switch3' incorporates:
             *  Constant: '<S285>/MINFLOAT'
             */
            rtb_Signum_o = -3.402823466E+38F;
        }
        else
        {
            rtb_Signum_o = 0.0F;
        }

        /* End of Switch: '<S285>/Switch1' */
        /* End of Outputs for SubSystem: '<S283>/Protected Division1' */

        /* Lookup_n-D: '<S284>/Vector' incorporates:
         *  Product: '<S282>/Product4'
         *  Sum: '<S282>/Sum4'
         *  Sum: '<S282>/Sum5'
         */
        rtb_Vector_a[i] = ((rtb_Signum_o - tmpRead_3) *
                           rtb_TmpSignalConversionAtVeTC_j) + tmpRead_3;

        /* Switch: '<S286>/Switch1' incorporates:
         *  RelationalOperator: '<S286>/Not Equal1'
         */
        rtb_Sum3_cd[i] = tmpRead_9;
    }

    /* End of Outputs for SubSystem: '<S283>/Protected Division3' */
    /* End of Outputs for SubSystem: '<S279>/RTC_on' */
#else

    /* Outputs for Atomic SubSystem: '<S279>/RTC_off' */
    for (i = 0; i < 2; i++)
    {
        /* VariantMerge generated from: '<S279>/T_imp' incorporates:
         *  Inport: '<S280>/T_turb'
         */
        rtb_Vector_a[i] = rtb_Switch_b[i];
    }

    /* End of Outputs for SubSystem: '<S279>/RTC_off' */
#endif

    /* End of Outputs for SubSystem: '<S249>/VariantSubsystem' */

    /* Switch: '<S249>/Switch3' incorporates:
     *  Constant: '<S276>/Calib'
     */
    if (!Rte_Prm_HeATRR_b_RTC_Enbl_HeATRR_b_RTC_Enbl())
    {
        /* Outputs for Atomic SubSystem: '<S249>/ProtectedDivision1' */
        /* RelationalOperator: '<S277>/Not Equal1' incorporates:
         *  Constant: '<S277>/Constant Value1'
         */
        rtb_NotEqual1_b = (rtb_TmpSignalConversionAtVeTINR != 0.0F);

        /* End of Outputs for SubSystem: '<S249>/ProtectedDivision1' */

        /* Switch: '<S249>/Switch1' incorporates:
         *  Constant: '<S249>/ConstantValue3'
         *  Constant: '<S277>/Constant Value2'
         *  Logic: '<S277>/AND'
         *  RelationalOperator: '<S249>/GreaterThan2'
         *  RelationalOperator: '<S277>/Greater Than or Equal '
         *  Switch: '<S277>/Switch1'
         *  Switch: '<S277>/Switch2'
         */
        if (rtb_TmpSignalConversionAtVeDTRR < 0.01F)
        {
            /* Sum: '<S249>/Sum' incorporates:
             *  Constant: '<S249>/ConstantValue1'
             */
            rtb_Vector_a[0] = 0.0F;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S249>/ProtectedDivision1' */
            if (rtb_NotEqual1_b)
            {
                /* Switch: '<S277>/Switch1' incorporates:
                 *  Product: '<S277>/Division'
                 *  Sum: '<S249>/Sum'
                 */
                rtb_Vector_a[0] = rtb_TmpSignalConversionAtVeDTRR /
                    rtb_TmpSignalConversionAtVeTINR;
            }
            else if (rtb_TmpSignalConversionAtVeDTRR > 0.0F)
            {
                /* Switch: '<S277>/Switch2' incorporates:
                 *  Constant: '<S277>/MAXFLOAT'
                 *  Sum: '<S249>/Sum'
                 */
                rtb_Vector_a[0] = 3.402823466E+38F;
            }
            else
            {
                /* Sum: '<S249>/Sum' incorporates:
                 *  Constant: '<S277>/Constant Value4'
                 *  Switch: '<S277>/Switch2'
                 *  Switch: '<S277>/Switch3'
                 */
                rtb_Vector_a[0] = 0.0F;
            }

            /* End of Outputs for SubSystem: '<S249>/ProtectedDivision1' */
        }

        if (rtb_TmpSignalConversionAtVeDT_g < 0.01F)
        {
            /* Sum: '<S249>/Sum' incorporates:
             *  Constant: '<S249>/ConstantValue1'
             */
            rtb_Vector_a[1] = 0.0F;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S249>/ProtectedDivision1' */
            if (rtb_NotEqual1_b)
            {
                /* Switch: '<S277>/Switch1' incorporates:
                 *  Product: '<S277>/Division'
                 *  Sum: '<S249>/Sum'
                 */
                rtb_Vector_a[1] = rtb_TmpSignalConversionAtVeDT_g /
                    rtb_TmpSignalConversionAtVeTINR;
            }
            else if (rtb_TmpSignalConversionAtVeDT_g > 0.0F)
            {
                /* Switch: '<S277>/Switch2' incorporates:
                 *  Constant: '<S277>/MAXFLOAT'
                 *  Sum: '<S249>/Sum'
                 */
                rtb_Vector_a[1] = 3.402823466E+38F;
            }
            else
            {
                /* Sum: '<S249>/Sum' incorporates:
                 *  Constant: '<S277>/Constant Value4'
                 *  Switch: '<S277>/Switch2'
                 *  Switch: '<S277>/Switch3'
                 */
                rtb_Vector_a[1] = 0.0F;
            }

            /* End of Outputs for SubSystem: '<S249>/ProtectedDivision1' */
        }

        /* End of Switch: '<S249>/Switch1' */
    }

    /* End of Switch: '<S249>/Switch3' */
    /* End of Outputs for SubSystem: '<S1>/CTCR_MinCreepPedal_PxPy' */

    /* Inport: '<Root>/VeTINR_n_DisengageILE' */
    (void)Rte_Read_VeTINR_n_DisengageILE_Value(&rtb_Switch_ow);

    /* Outputs for Function Call SubSystem: '<S1>/CTCR_MinCreepPedal_PxPy' */
    for (i = 0; i < 2; i++)
    {
        /* Sum: '<S249>/Sum' */
        rtb_Vector_a[i] += rtb_TmpSignalConversionAtVeTTIR;
    }

    /* Gain: '<S244>/Gain' */
    VeCTCR_M_MinPdlFw_Agr = rtb_Vector_a[0];

    /* Sum: '<S118>/Sum1' */
    VeCTCR_n_DeltaSpd = VeCTCR_n_ActualSpd - rtb_TmpSignalConversionAtVeOH_m;

    /* Sum: '<S118>/Sum3' */
    VeCTCR_n_TurbinDeltaSpdBlended = rtb_TmpSignalConversionAtVeVS_j -
        rtb_TmpSignalConversionAtVeOHSR;

    /* MinMax: '<S118>/MinMax1' incorporates:
     *  Constant: '<S345>/Calib'
     */
    VeCTCR_n_DisengageSpd = fmaxf(fmaxf(rtb_Switch_ow, KeCTCR_n_MinDisengageSpd),
        rtb_TmpSignalConversionAtVeOHSR);

    /* If: '<S118>/If' incorporates:
     *  Constant: '<S344>/Constant'
     *  Constant: '<S348>/Calib'
     *  Inport: '<Root>/VeBTQR_M_DrvrIntndedTotBrkTrq'
     *  RelationalOperator: '<S118>/Comparison7'
     *  RelationalOperator: '<S343>/Comparison1'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear'
     *  Switch: '<S343>/Switch'
     */
    if (CeFWDR_e_TfrCas4Low != ((uint32)rtb_TmpSignalConversionAtVeFWDR))
    {
        /* Outputs for IfAction SubSystem: '<S118>/DeltaSpd_4Hi' incorporates:
         *  ActionPort: '<S342>/ActionPort'
         */
        /* Merge: '<S118>/Merge' incorporates:
         *  Sum: '<S342>/Sum1'
         */
        VeCTCR_n_DeltaSpdDisengage = VeCTCR_n_ActualSpd - VeCTCR_n_DisengageSpd;

        /* Merge: '<S118>/Merge2' incorporates:
         *  Constant: '<S342>/ConstantValue'
         *  SignalConversion generated from: '<S342>/DeltaSpdP2AndNTurb_4Hi'
         */
        VeCTCR_n_DeltaSpdP2AndNTurb = 0.0F;

        /* End of Outputs for SubSystem: '<S118>/DeltaSpd_4Hi' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S118>/DeltaSpd_4Lo' incorporates:
         *  ActionPort: '<S343>/ActionPort'
         */
        if (rtb_TmpSignalConversionAtVeTRNR >= KeCTCR_e_MinGearForCreep)
        {
            /* Switch: '<S343>/Switch' incorporates:
             *  Constant: '<S349>/Calib'
             */
            rtb_Switch_ow = KeCTCR_n_SpdOffsetHighGears;
        }
        else
        {
            (void)Rte_Read_VeBTQR_M_DrvrIntndedTotBrkTrq_Value(&rtb_Sum3_h);

            /* Switch: '<S343>/Switch' incorporates:
             *  Inport: '<Root>/VeBTQR_M_DrvrIntndedTotBrkTrq'
             *  Lookup_n-D: '<S350>/Vector'
             */
            rtb_Switch_ow = look1_iflf_binlcapw(rtb_Sum3_h, ((const float32 *)
                &(KxCTCR_n_BrkTrqBasedSpdOffset[0])), ((const float32 *)
                &(KtCTCR_n_BrkTrqBasedSpdOffset[0])), 6U);
        }

        /* Merge: '<S118>/Merge2' incorporates:
         *  Inport: '<Root>/VeBTQR_M_DrvrIntndedTotBrkTrq'
         *  Sum: '<S343>/Sum1'
         */
        VeCTCR_n_DeltaSpdP2AndNTurb = VeCTCR_n_ActualSpd -
            rtb_TmpSignalConversionAtVeVS_j;

        /* Merge: '<S118>/Merge' incorporates:
         *  Constant: '<S343>/ConstantValue'
         *  MinMax: '<S343>/MinMax'
         *  Sum: '<S343>/Sum6'
         *  Sum: '<S343>/Sum7'
         */
        VeCTCR_n_DeltaSpdDisengage = rtb_TmpSignalConversionAtVeVS_j -
            (VeCTCR_n_DisengageSpd + fminf(rtb_Switch_ow, 0.0F));

        /* End of Outputs for SubSystem: '<S118>/DeltaSpd_4Lo' */
    }

    /* End of If: '<S118>/If' */

    /* If: '<S112>/If' incorporates:
     *  Inport: '<Root>/VeESSR_b_EngProdTrq_TCM'
     */
    if (VeCTCR_b_NotIn4Lo)
    {
        /* Outputs for IfAction SubSystem: '<S112>/CalcCrpSpdActv4Hi' incorporates:
         *  ActionPort: '<S119>/ActionPort'
         */
        /* Product: '<S138>/Multiplication2' incorporates:
         *  Constant: '<S162>/Calib'
         *  Product: '<S138>/Multiplication4'
         *  Sum: '<S138>/Summation'
         *  Sum: '<S138>/Summation1'
         *  Sum: '<S138>/Summation2'
         *  UnitDelay: '<S138>/UnitDelay'
         *  UnitDelay: '<S138>/UnitDelay1'
         */
        VeCTCR_dPct_AccPdlChangel_4Hi = ((rtb_TmpSignalConversionAtVeAPSR -
            ((rtb_Sum_d_tmp - KeCTCR_t_PedalGradBlendFactor) *
             CTCR_ac_DW.UnitDelay1_DSTATE_gy)) - CTCR_ac_DW.UnitDelay_DSTATE_am)
            / (rtb_Sum_d_tmp + KeCTCR_t_PedalGradBlendFactor);

        /* Lookup_n-D: '<S163>/Vector' incorporates:
         *  Product: '<S138>/Multiplication2'
         *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
         */
        VeCTCR_r_GrdLimMinCreepLDPdlDiff_4Hi = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeAPSR, VeCTCR_dPct_AccPdlChangel_4Hi, ((
               const float32 *)&(KxCTCR_r_GrdLimMinCreepLDMapPdlDiff[0])), ((
               const float32 *)&(KyCTCR_r_GrdLimMinCreepLDMapPdlDiff[0])), ((
               const float32 *)&(KtCTCR_r_GrdLimMinCreepLDMapPdlDiff[0])),
             CTCR_ac_ConstP.pooled12, 8U);

        /* Switch: '<S119>/Switch1' incorporates:
         *  Constant: '<S119>/ConstantValue13'
         *  Constant: '<S119>/ConstantValue16'
         */
        if (rtb_TmpSignalConversionAtVeHTDR)
        {
            i = 0;
        }
        else
        {
            i = -1;
        }

        /* End of Switch: '<S119>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S119>/GradientLimiter4' */
        /* Sum: '<S149>/Sum2' incorporates:
         *  UnitDelay: '<S149>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTTQR = ((float32)i) -
            CTCR_ac_DW.UnitDelay_DSTATE_ep;

        /* Outputs for Atomic SubSystem: '<S149>/Limiter' */
        /* Switch: '<S202>/Switch1' incorporates:
         *  Constant: '<S161>/Calib'
         *  RelationalOperator: '<S202>/Relational Operator'
         */
        if (KeCTCR_r_GrdLimMinCreepLU < rtb_TmpSignalConversionAtVeTTQR)
        {
            /* UnitDelay: '<S148>/Unit Delay' */
            rtb_TmpSignalConversionAtVeTTQR = KeCTCR_r_GrdLimMinCreepLU;
        }

        /* End of Switch: '<S202>/Switch1' */

        /* Switch: '<S202>/Switch' incorporates:
         *  Constant: '<S160>/Calib'
         *  RelationalOperator: '<S202>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeTTQR <= KeCTCR_r_GrdLimMinCreepLD)
        {
            rtb_TmpSignalConversionAtVeTTQR = KeCTCR_r_GrdLimMinCreepLD;
        }

        /* End of Switch: '<S202>/Switch' */
        /* End of Outputs for SubSystem: '<S149>/Limiter' */

        /* Sum: '<S149>/Sum3' incorporates:
         *  UnitDelay: '<S149>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTTQR += CTCR_ac_DW.UnitDelay_DSTATE_ep;

        /* Update for UnitDelay: '<S149>/Unit Delay' */
        CTCR_ac_DW.UnitDelay_DSTATE_ep = rtb_TmpSignalConversionAtVeTTQR;

        /* End of Outputs for SubSystem: '<S119>/GradientLimiter4' */

        /* MinMax: '<S119>/MinMax1' incorporates:
         *  Lookup_n-D: '<S164>/Vector'
         *  Sum: '<S118>/Sum4'
         */
        VeCTCR_r_GrdLimMinCreepLDPdl_4Hi = fmaxf(fmaxf
            (VeCTCR_r_GrdLimMinCreepLDPdlDiff_4Hi, look1_iflf_binlcapw
             (rtb_TmpSignalConversionAtVeOH_m - rtb_TmpSignalConversionAtVeVS_j,
              ((const float32 *)&(KxCTCR_r_GrdLimMinLauncSpeedLD[0])), ((const
            float32 *)&(KtCTCR_r_GrdLimMinLauncSpeedLD[0])), 5U)),
            rtb_TmpSignalConversionAtVeTTQR);

        /* MinMax: '<S119>/MinMax2' incorporates:
         *  Constant: '<S119>/ConstantValue2'
         */
        VeCTCR_r_GrdLimMinCreepLD_4Hi = fminf(VeCTCR_r_GrdLimMinCreepLDPdl_4Hi,
            0.0F);

        /* Lookup_n-D: '<S166>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
         *  Sum: '<S118>/Sum1'
         */
        VeCTCR_r_WhlReturn2IdlBlndRaw_4Hi = look2_iflf_binlcapw
            (VeCTCR_n_DeltaSpd, rtb_TmpSignalConversionAtVeCSVR, ((const float32
               *)&(KxCTCR_r_WhlReturn2IdlBlnd[0])), ((const float32 *)
              &(KyCTCR_r_WhlReturn2IdlBlnd[0])), ((const float32 *)
              &(KtCTCR_r_WhlReturn2IdlBlnd[0])), CTCR_ac_ConstP.pooled12, 8U);

        /* Switch: '<S168>/Switch1' incorporates:
         *  Lookup_n-D: '<S167>/Vector'
         *  Merge: '<S118>/Merge'
         */
        rtb_Switch_ow = look1_iflf_binlcapw(VeCTCR_n_DeltaSpdDisengage, ((const
            float32 *)&(KxCTCR_r_WhlReturn2IdlDiseng[0])), ((const float32 *)
            &(KtCTCR_r_WhlReturn2IdlDiseng[0])), 5U);

        /* Selector: '<S119>/Selector' incorporates:
         *  Constant: '<S153>/Calib'
         *  DataTypeConversion: '<S119>/DataTypeConversion1'
         *  SignalConversion generated from: '<S1>/VeTRNR_e_ILEStat'
         */
        VeCTCR_b_CreepSpdActvILEStat = KaCTCR_b_ILEStat4MinCrpBlnd
            [(rtb_TmpSignalConversionAtVeTR_i)];

        /* Selector: '<S119>/Selector1' incorporates:
         *  Constant: '<S154>/Calib'
         *  DataTypeConversion: '<S119>/DataTypeConversion2'
         *  SignalConversion generated from: '<S1>/VeOHSR_e_ILEState'
         */
        VeCTCR_b_CreepSpdActvVLEStat = KaCTCR_b_ILEStateOHSR
            [(rtb_TmpSignalConversionAtVeOH_i)];

        /* Logic: '<S119>/Logical2' incorporates:
         *  Constant: '<S152>/Calib'
         *  Constant: '<S158>/Calib'
         *  DataTypeConversion: '<S119>/DataTypeConversion3'
         *  Logic: '<S119>/Logical6'
         *  Selector: '<S119>/Selector2'
         *  SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear'
         */
        VeCTCR_b_MinCreep_BlendFactActv_4Hi = ((((VeCTCR_b_CreepSpdActvILEStat) ||
            (KaCTCR_b_CreepActv_Gear[(rtb_TmpSignalConversionAtVeTRNR)])) ||
            (VeCTCR_b_CreepSpdActvVLEStat)) || (KeCTCR_b_MinCreepActvOvrd));

        /* Product: '<S119>/Product' incorporates:
         *  MinMax: '<S119>/MinMax3'
         *  Switch: '<S119>/Switch4'
         */
        rtb_TmpSignalConversionAtVeAXLR = fmaxf
            (VeCTCR_r_WhlReturn2IdlBlndRaw_4Hi, rtb_Switch_ow) * ((float32)
            (VeCTCR_b_MinCreep_BlendFactActv_4Hi ? 1.0F : 0.0F));

        /* Outputs for Atomic SubSystem: '<S119>/GradientLimiter' */
        /* Outputs for Atomic SubSystem: '<S145>/Limiter' */
        for (i = 0; i < 2; i++)
        {
            /* Sum: '<S145>/Sum2' incorporates:
             *  UnitDelay: '<S145>/Unit Delay'
             */
            rtb_Sum3_h = rtb_TmpSignalConversionAtVeAXLR -
                CTCR_ac_DW.UnitDelay_DSTATE_f5[i];

            /* Switch: '<S198>/Switch1' incorporates:
             *  Constant: '<S119>/ConstantValue14'
             *  RelationalOperator: '<S198>/Relational Operator'
             */
            if (999.0F < rtb_Sum3_h)
            {
                /* Switch: '<S198>/Switch1' */
                rtb_Sum3_h = 999.0F;
            }

            /* End of Switch: '<S198>/Switch1' */
            rtb_Vector_ka[i] = rtb_Sum3_h;
        }

        /* Switch: '<S198>/Switch' incorporates:
         *  Constant: '<S160>/Calib'
         *  RelationalOperator: '<S198>/Relational Operator1'
         *  Sum: '<S145>/Sum2'
         */
        if (rtb_Vector_ka[0] > KeCTCR_r_GrdLimMinCreepLD)
        {
            rtb_Sum3_h = rtb_Vector_ka[0];
        }
        else
        {
            rtb_Sum3_h = KeCTCR_r_GrdLimMinCreepLD;
        }

        /* End of Outputs for SubSystem: '<S145>/Limiter' */

        /* Sum: '<S145>/Sum3' incorporates:
         *  UnitDelay: '<S145>/Unit Delay'
         */
        rtb_Switch_b[0] = rtb_Sum3_h + CTCR_ac_DW.UnitDelay_DSTATE_f5[0];

        /* Outputs for Atomic SubSystem: '<S145>/Limiter' */
        /* Switch: '<S198>/Switch' incorporates:
         *  RelationalOperator: '<S198>/Relational Operator1'
         */
        if (rtb_Vector_ka[1] > VeCTCR_r_GrdLimMinCreepLD_4Hi)
        {
            rtb_Sum3_h = rtb_Vector_ka[1];
        }
        else
        {
            rtb_Sum3_h = VeCTCR_r_GrdLimMinCreepLD_4Hi;
        }

        /* End of Outputs for SubSystem: '<S145>/Limiter' */

        /* Sum: '<S145>/Sum3' incorporates:
         *  UnitDelay: '<S145>/Unit Delay'
         */
        rtb_Switch_b[1] = rtb_Sum3_h + CTCR_ac_DW.UnitDelay_DSTATE_f5[1];

        /* Update for UnitDelay: '<S145>/Unit Delay' */
        for (i = 0; i < 2; i++)
        {
            CTCR_ac_DW.UnitDelay_DSTATE_f5[i] = rtb_Switch_b[i];
        }

        /* End of Update for UnitDelay: '<S145>/Unit Delay' */
        /* End of Outputs for SubSystem: '<S119>/GradientLimiter' */

        /* Outputs for Atomic SubSystem: '<S119>/GradientLimiter1' */
        /* Sum: '<S146>/Sum2' incorporates:
         *  Product: '<S119>/Product1'
         *  Switch: '<S119>/Switch4'
         *  UnitDelay: '<S146>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeAXLR = (rtb_Switch_ow * ((float32)
            (VeCTCR_b_MinCreep_BlendFactActv_4Hi ? 1.0F : 0.0F))) -
            CTCR_ac_DW.UnitDelay_DSTATE_gh;

        /* Outputs for Atomic SubSystem: '<S146>/Limiter' */
        /* Switch: '<S199>/Switch1' incorporates:
         *  Constant: '<S119>/ConstantValue12'
         *  RelationalOperator: '<S199>/Relational Operator'
         */
        if (999.0F < rtb_TmpSignalConversionAtVeAXLR)
        {
            /* Switch: '<S168>/Switch1' */
            rtb_Switch_ow = 999.0F;
        }
        else
        {
            /* Switch: '<S168>/Switch1' */
            rtb_Switch_ow = rtb_TmpSignalConversionAtVeAXLR;
        }

        /* End of Switch: '<S199>/Switch1' */

        /* Switch: '<S199>/Switch' incorporates:
         *  RelationalOperator: '<S199>/Relational Operator1'
         */
        if (rtb_Switch_ow <= VeCTCR_r_GrdLimMinCreepLD_4Hi)
        {
            rtb_Switch_ow = VeCTCR_r_GrdLimMinCreepLD_4Hi;
        }

        /* End of Switch: '<S199>/Switch' */
        /* End of Outputs for SubSystem: '<S146>/Limiter' */

        /* Sum: '<S146>/Sum3' incorporates:
         *  UnitDelay: '<S146>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeAXLR = rtb_Switch_ow +
            CTCR_ac_DW.UnitDelay_DSTATE_gh;

        /* Update for UnitDelay: '<S146>/Unit Delay' */
        CTCR_ac_DW.UnitDelay_DSTATE_gh = rtb_TmpSignalConversionAtVeAXLR;

        /* End of Outputs for SubSystem: '<S119>/GradientLimiter1' */

        /* Outputs for Atomic SubSystem: '<S119>/Hysteresis3' */
        /* Switch: '<S151>/Switch1' incorporates:
         *  Constant: '<S159>/Calib'
         *  RelationalOperator: '<S151>/Greater  Than'
         *  Sum: '<S119>/Sum1'
         */
        if (rtb_TmpSignalConversionAtVeMSPR > (rtb_TmpSignalConversionAtVeOH_m +
             KeCTCR_n_RampOutIdleSpdOffset_RSP))
        {
            /* Switch: '<S151>/Switch1' incorporates:
             *  Constant: '<S151>/Constant Value'
             */
            rtb_NotEqual1_b = true;
        }
        else
        {
            /* Switch: '<S151>/Switch1' incorporates:
             *  RelationalOperator: '<S151>/Greater  Than1'
             *  UnitDelay: '<S151>/Unit Delay'
             */
            rtb_NotEqual1_b = ((rtb_TmpSignalConversionAtVeMSPR >=
                                rtb_TmpSignalConversionAtVeOH_m) &&
                               (CTCR_ac_DW.UnitDelay_DSTATE_eg));
        }

        /* End of Switch: '<S151>/Switch1' */
        /* End of Outputs for SubSystem: '<S119>/Hysteresis3' */
        /* End of Outputs for SubSystem: '<S112>/CalcCrpSpdActv4Hi' */
        (void)Rte_Read_VeESSR_b_EngProdTrq_TCM_Value(&rtb_Comparison4_g);

        /* Outputs for IfAction SubSystem: '<S112>/CalcCrpSpdActv4Hi' incorporates:
         *  ActionPort: '<S119>/ActionPort'
         */
        /* Outputs for Atomic SubSystem: '<S119>/Hysteresis3' */
        /* Update for UnitDelay: '<S151>/Unit Delay' incorporates:
         *  Inport: '<Root>/VeESSR_b_EngProdTrq_TCM'
         */
        CTCR_ac_DW.UnitDelay_DSTATE_eg = rtb_NotEqual1_b;

        /* End of Outputs for SubSystem: '<S119>/Hysteresis3' */

        /* UnitDelay: '<S179>/Unit Delay' incorporates:
         *  Constant: '<S140>/Constant'
         *  Constant: '<S141>/Constant'
         *  Logic: '<S119>/Logical1'
         *  RelationalOperator: '<S119>/Comparison1'
         *  RelationalOperator: '<S119>/Comparison2'
         */
        rtb_Switch1_bu = ((CeOHSR_e_RngSel_M2 == ((uint32)
                            rtb_TmpSignalConversionAtVeOH_e)) || (((uint32)
                            rtb_TmpSignalConversionAtVeOH_e) ==
                           CeOHSR_e_RngSel_G2));

        /* Logic: '<S119>/Logical' incorporates:
         *  Constant: '<S139>/Constant'
         *  Logic: '<S119>/Logical3'
         *  RelationalOperator: '<S119>/Comparison4'
         */
        VeCTCR_b_SumTrqRampOutSet = ((((((uint32)rtb_TmpSignalConversionAtVeHS_e)
            == CeHSER_e_M1_State) && (!rtb_NotEqual1_b)) && rtb_Comparison4_g) &&
            rtb_Switch1_bu);

        /* Logic: '<S119>/Logical4' incorporates:
         *  Constant: '<S142>/Constant'
         *  Constant: '<S143>/Constant'
         *  Logic: '<S119>/Logical5'
         *  RelationalOperator: '<S119>/Comparison3'
         *  RelationalOperator: '<S119>/Comparison5'
         */
        VeCTCR_b_SumTrqRampOutReset = (((!rtb_Switch1_bu) || (((uint32)
            rtb_TmpSignalConversionAtVeHS_e) == CeHSER_e_M2_State)) || (((uint32)
            rtb_TmpSignalConversionAtVeHS_e) == CeHSER_e_G2_State));

        /* Outputs for Atomic SubSystem: '<S119>/SignalLatchOnWithReset' */
        /* Logic: '<S178>/OR1' incorporates:
         *  Logic: '<S178>/NOT'
         *  Logic: '<S178>/OR'
         *  UnitDelay: '<S178>/Unit Delay'
         */
        rtb_Comparison4_g = ((VeCTCR_b_SumTrqRampOutSet) ||
                             ((!VeCTCR_b_SumTrqRampOutReset) &&
                              (CTCR_ac_DW.UnitDelay_DSTATE_ck)));

        /* Update for UnitDelay: '<S178>/Unit Delay' */
        CTCR_ac_DW.UnitDelay_DSTATE_ck = rtb_Comparison4_g;

        /* End of Outputs for SubSystem: '<S119>/SignalLatchOnWithReset' */

        /* Outputs for Atomic SubSystem: '<S119>/GradientLimiter2' */
        /* Sum: '<S147>/Sum2' incorporates:
         *  Product: '<S119>/Product6'
         *  Switch: '<S119>/Switch'
         *  Switch: '<S119>/Switch4'
         *  UnitDelay: '<S147>/Unit Delay'
         */
        rtb_Switch_ow = (((float32)(rtb_Comparison4_g ? 1.0F : 0.0F)) *
                         ((float32)(VeCTCR_b_MinCreep_BlendFactActv_4Hi ? 1.0F :
                           0.0F))) - CTCR_ac_DW.UnitDelay_DSTATE_b2;

        /* Outputs for Atomic SubSystem: '<S147>/Limiter' */
        /* Switch: '<S200>/Switch1' incorporates:
         *  Constant: '<S161>/Calib'
         *  RelationalOperator: '<S200>/Relational Operator'
         */
        if (KeCTCR_r_GrdLimMinCreepLU < rtb_Switch_ow)
        {
            /* Switch: '<S168>/Switch1' */
            rtb_Switch_ow = KeCTCR_r_GrdLimMinCreepLU;
        }

        /* End of Switch: '<S200>/Switch1' */

        /* Switch: '<S200>/Switch' incorporates:
         *  RelationalOperator: '<S200>/Relational Operator1'
         */
        if (rtb_Switch_ow <= VeCTCR_r_GrdLimMinCreepLD_4Hi)
        {
            rtb_Switch_ow = VeCTCR_r_GrdLimMinCreepLD_4Hi;
        }

        /* End of Switch: '<S200>/Switch' */
        /* End of Outputs for SubSystem: '<S147>/Limiter' */

        /* Sum: '<S147>/Sum3' incorporates:
         *  UnitDelay: '<S147>/Unit Delay'
         */
        rtb_Sum3_h = rtb_Switch_ow + CTCR_ac_DW.UnitDelay_DSTATE_b2;

        /* Update for UnitDelay: '<S147>/Unit Delay' */
        CTCR_ac_DW.UnitDelay_DSTATE_b2 = rtb_Sum3_h;

        /* End of Outputs for SubSystem: '<S119>/GradientLimiter2' */

        /* Outputs for Atomic SubSystem: '<S119>/GradientLimiter3' */
        /* Sum: '<S148>/Sum2' incorporates:
         *  Lookup_n-D: '<S165>/Vector'
         *  Product: '<S119>/Product2'
         *  Sum: '<S118>/Sum3'
         *  Switch: '<S119>/Switch4'
         *  UnitDelay: '<S148>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTTQR = (((float32)
            (VeCTCR_b_MinCreep_BlendFactActv_4Hi ? 1.0F : 0.0F)) *
            look1_iflf_binlcapw(VeCTCR_n_TurbinDeltaSpdBlended, ((const float32 *)
            &(KxCTCR_r_WhlMinClipReturn2Idl[0])), ((const float32 *)
            &(KtCTCR_r_WhlMinClipReturn2Idl[0])), 5U)) -
            CTCR_ac_DW.UnitDelay_DSTATE_be;

        /* Outputs for Atomic SubSystem: '<S148>/Limiter' */
        /* Switch: '<S201>/Switch1' incorporates:
         *  Constant: '<S119>/ConstantValue15'
         *  RelationalOperator: '<S201>/Relational Operator'
         */
        if (999.0F < rtb_TmpSignalConversionAtVeTTQR)
        {
            /* Switch: '<S168>/Switch1' */
            rtb_Switch_ow = 999.0F;
        }
        else
        {
            /* Switch: '<S168>/Switch1' */
            rtb_Switch_ow = rtb_TmpSignalConversionAtVeTTQR;
        }

        /* End of Switch: '<S201>/Switch1' */

        /* Switch: '<S201>/Switch' incorporates:
         *  Constant: '<S160>/Calib'
         *  RelationalOperator: '<S201>/Relational Operator1'
         */
        if (rtb_Switch_ow <= KeCTCR_r_GrdLimMinCreepLD)
        {
            rtb_Switch_ow = KeCTCR_r_GrdLimMinCreepLD;
        }

        /* End of Switch: '<S201>/Switch' */
        /* End of Outputs for SubSystem: '<S148>/Limiter' */

        /* Sum: '<S148>/Sum3' incorporates:
         *  UnitDelay: '<S148>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTTQR = rtb_Switch_ow +
            CTCR_ac_DW.UnitDelay_DSTATE_be;

        /* Update for UnitDelay: '<S148>/Unit Delay' */
        CTCR_ac_DW.UnitDelay_DSTATE_be = rtb_TmpSignalConversionAtVeTTQR;

        /* End of Outputs for SubSystem: '<S119>/GradientLimiter3' */

        /* MinMax: '<S119>/MinMax4' */
        VeCTCR_r_MinCreepBF_AeC_4Hi = fmaxf(rtb_TmpSignalConversionAtVeAXLR,
            rtb_Sum3_h);

        /* Gain: '<S171>/Gain' */
        VeCTCR_r_MinCreepBFTwo_4Hi = VeCTCR_r_MinCreepBF_AeC_4Hi;

        /* Gain: '<S173>/Gain' */
        VeCTCR_r_MinCreepBF_ATRR_4Hi = rtb_TmpSignalConversionAtVeTTQR;
        for (i = 0; i < 2; i++)
        {
            /* Gain: '<S169>/Gain' */
            VaCTCR_r_MinCreepBFOne_4Hi[(i)] = rtb_Switch_b[i];

            /* Merge: '<S112>/Merge' incorporates:
             *  SignalConversion: '<S119>/SignalConversion'
             */
            VaCTCR_r_MinCreepBFOne[(i)] = VaCTCR_r_MinCreepBFOne_4Hi[(i)];
        }

        /* Merge: '<S112>/Merge10' incorporates:
         *  SignalConversion: '<S119>/SignalConversion2'
         */
        VeCTCR_r_MinCreepBFTwo = VeCTCR_r_MinCreepBFTwo_4Hi;

        /* Merge: '<S112>/Merge2' incorporates:
         *  SignalConversion: '<S119>/SignalConversion3'
         */
        VeCTCR_r_AeCoastFactorRaw = VeCTCR_r_MinCreepBF_AeC_4Hi;

        /* Merge: '<S112>/Merge5' incorporates:
         *  Gain: '<S172>/Gain'
         */
        VeCTCR_M_AxleTrqReqMin_Arb = rtb_TmpSignalConversionAtVeDTRR;

        /* Merge: '<S112>/Merge6' incorporates:
         *  Gain: '<S177>/Gain'
         */
        VeCTCR_M_FWTrqReqMin_Arb = VeCTCR_M_MinPdlFw_Agr;

        /* Merge: '<S112>/Merge7' incorporates:
         *  Constant: '<S119>/ConstantValue'
         *  SignalConversion generated from: '<S119>/MinCreepBFStrgc_4Hi'
         */
        rtb_TmpSignalConversionAtVeAXLR = 0.0F;

        /* Merge: '<S112>/Merge8' incorporates:
         *  Constant: '<S119>/ConstantValue7'
         *  SignalConversion generated from: '<S119>/MinCreepWheel_WO_Offset_4Hi'
         */
        VeCTCR_M_MinCreepWheelTrqTgt_WO_Offset = 0.0F;

        /* Merge: '<S112>/Merge9' incorporates:
         *  Constant: '<S119>/ConstantValue4'
         *  SignalConversion generated from: '<S119>/MinCreepFW_WO_Offset_4Hi'
         */
        VeCTCR_M_MinCreepFWTrqTgt_WO_Offset = 0.0F;

        /* RelationalOperator: '<S119>/Comparison8' incorporates:
         *  Constant: '<S119>/ConstantValue11'
         *  Constant: '<S157>/Calib'
         *  MinMax: '<S119>/MinMax6'
         *  Sum: '<S119>/Sum'
         */
        rtb_Comparison4_g = (rtb_TmpSignalConversionAtVeAT_m >= fmaxf
                             (VeCTCR_M_TransIntakeFw_Raw -
                              KeCTCR_M_TransIntkTrgtOffset, 0.0F));

        /* Outputs for Atomic SubSystem: '<S119>/TurnOnDelaySample' */
        /* Outputs for Atomic SubSystem: '<S180>/EdgeRising' */
        /* Logic: '<S203>/AND' incorporates:
         *  Logic: '<S203>/OR1'
         *  UnitDelay: '<S203>/Unit Delay'
         */
        rtb_NotEqual1_b = (rtb_Comparison4_g && (!CTCR_ac_DW.UnitDelay_DSTATE_lg));

        /* Update for UnitDelay: '<S203>/Unit Delay' */
        CTCR_ac_DW.UnitDelay_DSTATE_lg = rtb_Comparison4_g;

        /* End of Outputs for SubSystem: '<S180>/EdgeRising' */

        /* Switch: '<S180>/Switch1' incorporates:
         *  Constant: '<S155>/Calib'
         *  Constant: '<S180>/Constant Value'
         *  Logic: '<S180>/OR'
         *  Logic: '<S180>/OR1'
         *  MinMax: '<S180>/Minimum'
         *  Sum: '<S180>/Summation'
         *  UnitDelay: '<S180>/Unit Delay'
         */
        if ((!rtb_Comparison4_g) || rtb_NotEqual1_b)
        {
            /* Switch: '<S180>/Switch1' incorporates:
             *  Constant: '<S180>/Constant Value1'
             */
            rtb_Switch1_pi = 0U;
        }
        else if (KeCTCR_Cnt_LashComplt_TurnOnDly < ((uint16)(((uint32)
                    CTCR_ac_DW.UnitDelay_DSTATE_l) + 1U)))
        {
            /* MinMax: '<S180>/Minimum' incorporates:
             *  Constant: '<S155>/Calib'
             *  Switch: '<S180>/Switch1'
             */
            rtb_Switch1_pi = KeCTCR_Cnt_LashComplt_TurnOnDly;
        }
        else
        {
            /* Switch: '<S180>/Switch1' incorporates:
             *  Constant: '<S180>/Constant Value'
             *  MinMax: '<S180>/Minimum'
             *  Sum: '<S180>/Summation'
             *  UnitDelay: '<S180>/Unit Delay'
             */
            rtb_Switch1_pi = (uint16)(((uint32)CTCR_ac_DW.UnitDelay_DSTATE_l) +
                1U);
        }

        /* End of Switch: '<S180>/Switch1' */

        /* Update for UnitDelay: '<S180>/Unit Delay' */
        CTCR_ac_DW.UnitDelay_DSTATE_l = rtb_Switch1_pi;

        /* End of Outputs for SubSystem: '<S119>/TurnOnDelaySample' */

        /* Logic: '<S119>/Logical7' incorporates:
         *  UnitDelay: '<S112>/UnitDelay3'
         */
        rtb_NotEqual1_b = !CTCR_ac_DW.UnitDelay3_DSTATE_l[1];

        /* Outputs for Atomic SubSystem: '<S119>/SignalLatchOnWithReset1' */
        /* Outputs for Atomic SubSystem: '<S119>/TurnOnDelaySample' */
        /* Logic: '<S179>/OR1' incorporates:
         *  Constant: '<S155>/Calib'
         *  Logic: '<S179>/NOT'
         *  Logic: '<S179>/OR'
         *  Logic: '<S180>/AND'
         *  RelationalOperator: '<S180>/Greater  Than'
         *  UnitDelay: '<S179>/Unit Delay'
         */
        rtb_Comparison4_g = ((rtb_Comparison4_g && (rtb_Switch1_pi >=
                               KeCTCR_Cnt_LashComplt_TurnOnDly)) ||
                             ((!rtb_NotEqual1_b) &&
                              (CTCR_ac_DW.UnitDelay_DSTATE_d4)));

        /* End of Outputs for SubSystem: '<S119>/TurnOnDelaySample' */

        /* Update for UnitDelay: '<S179>/Unit Delay' */
        CTCR_ac_DW.UnitDelay_DSTATE_d4 = rtb_Comparison4_g;

        /* End of Outputs for SubSystem: '<S119>/SignalLatchOnWithReset1' */

        /* Switch: '<S119>/Switch2' incorporates:
         *  Logic: '<S119>/Logical8'
         */
        if (rtb_Comparison4_g || rtb_NotEqual1_b)
        {
            /* Switch: '<S119>/Switch2' incorporates:
             *  Constant: '<S119>/ConstantValue10'
             */
            rtb_TmpSignalConversionAtVeAT_m = 9999.0F;
        }
        else
        {
            /* Switch: '<S119>/Switch2' incorporates:
             *  Constant: '<S119>/ConstantValue8'
             *  Constant: '<S156>/Calib'
             *  MinMax: '<S119>/MinMax5'
             *  Sum: '<S119>/Sum4'
             */
            rtb_TmpSignalConversionAtVeAT_m -= fmaxf
                (KeCTCR_M_DTROffset_ForMinPedal, 0.0F);
        }

        /* End of Switch: '<S119>/Switch2' */

        /* Outputs for Atomic SubSystem: '<S119>/Limiter' */
        /* Switch: '<S168>/Switch1' incorporates:
         *  RelationalOperator: '<S168>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeAT_m < VeCTCR_M_TransIntakeFw_Raw)
        {
            /* Switch: '<S168>/Switch1' */
            rtb_Switch_ow = rtb_TmpSignalConversionAtVeAT_m;
        }
        else
        {
            /* Switch: '<S168>/Switch1' */
            rtb_Switch_ow = VeCTCR_M_TransIntakeFw_Raw;
        }

        /* End of Switch: '<S168>/Switch1' */

        /* Switch: '<S168>/Switch' incorporates:
         *  Constant: '<S119>/ConstantValue9'
         *  RelationalOperator: '<S168>/Relational Operator1'
         */
        if (rtb_Switch_ow > -9999.0F)
        {
            /* Switch: '<S168>/Switch' */
            rtb_TmpSignalConversionAtVeAT_m = rtb_Switch_ow;
        }
        else
        {
            /* Switch: '<S168>/Switch' */
            rtb_TmpSignalConversionAtVeAT_m = -9999.0F;
        }

        /* End of Switch: '<S168>/Switch' */
        /* End of Outputs for SubSystem: '<S119>/Limiter' */

        /* Sum: '<S144>/Sum' */
        rtb_Switch_ow = rtb_TmpSignalConversionAtVeAT_m -
            rtb_TmpSignalConversionAtVeTTIR;

        /* Outputs for Atomic SubSystem: '<S144>/VariantSubsystem' */
#if Rte_SysCon_Variant_CTCR_RTC_Imp_On

        /* Outputs for Atomic SubSystem: '<S182>/RTC_on' */
        /* Gain: '<S191>/Gain' incorporates:
         *  Lookup_n-D: '<S193>/Vector'
         *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
         */
        rtb_Sum_pn = 0.5F * look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeVS_j,
            (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsB_KxHSCR_r_TCC_TturbFromNC2_CoeffsB
             ()),
            (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsB_KtHSCR_r_TCC_TturbFromNC2_CoeffsB
             ()), 21U);

        /* Lookup_n-D: '<S192>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
         */
        rtb_Sum3_h = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeVS_j,
            (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsA_KxHSCR_r_TCC_TturbFromNC2_CoeffsA
             ()),
            (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsA_KtHSCR_r_TCC_TturbFromNC2_CoeffsA
             ()), 21U);

        /* Outputs for Atomic SubSystem: '<S191>/Protected Division1' */
        /* Switch: '<S195>/Switch1' incorporates:
         *  Constant: '<S195>/Constant Value'
         *  Constant: '<S195>/Constant Value1'
         *  Constant: '<S195>/Constant Value2'
         *  Constant: '<S195>/Constant Value3'
         *  Logic: '<S195>/AND'
         *  RelationalOperator: '<S195>/Greater Than or Equal '
         *  RelationalOperator: '<S195>/Greater Than or Equal 1'
         *  RelationalOperator: '<S195>/Not Equal'
         *  RelationalOperator: '<S195>/Not Equal1'
         *  Switch: '<S195>/Switch2'
         *  Switch: '<S195>/Switch3'
         */
        if ((rtb_Sum_pn != 0.0F) && (rtb_Sum3_h != 0.0F))
        {
            /* Switch: '<S195>/Switch1' incorporates:
             *  Product: '<S195>/Division'
             */
            rtb_Switch3_ej = rtb_Sum_pn / rtb_Sum3_h;
        }
        else if (rtb_Sum_pn > 0.0F)
        {
            /* Switch: '<S195>/Switch2' incorporates:
             *  Constant: '<S195>/MAXFLOAT'
             *  Switch: '<S195>/Switch1'
             */
            rtb_Switch3_ej = 3.402823466E+38F;
        }
        else if (rtb_Sum_pn < 0.0F)
        {
            /* Switch: '<S195>/Switch3' incorporates:
             *  Constant: '<S195>/MINFLOAT'
             *  Switch: '<S195>/Switch1'
             *  Switch: '<S195>/Switch2'
             */
            rtb_Switch3_ej = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S195>/Switch1' incorporates:
             *  Constant: '<S195>/Constant Value4'
             *  Switch: '<S195>/Switch2'
             *  Switch: '<S195>/Switch3'
             */
            rtb_Switch3_ej = 0.0F;
        }

        /* End of Switch: '<S195>/Switch1' */
        /* End of Outputs for SubSystem: '<S191>/Protected Division1' */

        /* Product: '<S191>/Product1' */
        rtb_Sum_pn *= rtb_Sum_pn;

        /* Outputs for Atomic SubSystem: '<S191>/Protected Division2' */
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
        if ((rtb_Sum_pn != 0.0F) && (rtb_Sum3_h != 0.0F))
        {
            /* Switch: '<S196>/Switch1' incorporates:
             *  Product: '<S196>/Division'
             */
            rtb_Sum_pn /= rtb_Sum3_h;
        }
        else if (rtb_Sum_pn > 0.0F)
        {
            /* Switch: '<S196>/Switch2' incorporates:
             *  Constant: '<S196>/MAXFLOAT'
             *  Switch: '<S196>/Switch1'
             */
            rtb_Sum_pn = 3.402823466E+38F;
        }
        else if (rtb_Sum_pn < 0.0F)
        {
            /* Switch: '<S196>/Switch3' incorporates:
             *  Constant: '<S196>/MINFLOAT'
             *  Switch: '<S196>/Switch1'
             *  Switch: '<S196>/Switch2'
             */
            rtb_Sum_pn = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S196>/Switch1' incorporates:
             *  Constant: '<S196>/Constant Value4'
             *  Switch: '<S196>/Switch2'
             *  Switch: '<S196>/Switch3'
             */
            rtb_Sum_pn = 0.0F;
        }

        /* End of Switch: '<S196>/Switch1' */
        /* End of Outputs for SubSystem: '<S191>/Protected Division2' */

        /* Outputs for Atomic SubSystem: '<S191>/Protected Division4' */
        /* Switch: '<S197>/Switch1' incorporates:
         *  Constant: '<S197>/Constant Value1'
         *  RelationalOperator: '<S197>/Not Equal1'
         */
        if (rtb_Sum3_h != 0.0F)
        {
            /* Switch: '<S197>/Switch1' incorporates:
             *  Constant: '<S191>/Constant Value2'
             *  Product: '<S197>/Division'
             */
            rtb_Sum3_h = 1.0F / rtb_Sum3_h;
        }
        else
        {
            /* Switch: '<S197>/Switch1' */
            rtb_Sum3_h = 3.402823466E+38F;
        }

        /* End of Switch: '<S197>/Switch1' */
        /* End of Outputs for SubSystem: '<S191>/Protected Division4' */

        /* Signum: '<S190>/Signum' */
        if (rtb_Sum3_h < 0.0F)
        {
            rtb_Sum_d_tmp = -1.0F;
        }
        else if (rtb_Sum3_h > 0.0F)
        {
            rtb_Sum_d_tmp = 1.0F;
        }
        else
        {
            rtb_Sum_d_tmp = rtb_Sum3_h;
        }

        /* End of Signum: '<S190>/Signum' */

        /* Sum: '<S190>/Sum3' incorporates:
         *  Constant: '<S190>/Constant Value'
         *  Gain: '<S191>/Gain1'
         *  Lookup_n-D: '<S194>/Vector'
         *  MinMax: '<S190>/MinMax1'
         *  Product: '<S190>/Product'
         *  Product: '<S190>/Product1'
         *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
         *  Sqrt: '<S190>/Square Root'
         *  Sum: '<S190>/Sum2'
         *  Sum: '<S191>/Sum1'
         */
        rtb_Switch3_ej = ((sqrtf(fmaxf((rtb_Switch_ow - (look1_iflf_binlcapw
                               (rtb_TmpSignalConversionAtVeVS_j,
                                (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsC_KxHSCR_r_TCC_TturbFromNC2_CoeffsC
            ()), (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsC_KtHSCR_r_TCC_TturbFromNC2_CoeffsC
                  ()), 3U) - rtb_Sum_pn)) * rtb_Sum3_h, 0.0F)) * rtb_Sum_d_tmp)
                          + (-rtb_Switch3_ej)) + rtb_TmpSignalConversionAtVeVS_j;

        /* Outputs for Atomic SubSystem: '<S186>/Protected Division1' */
        /* Switch: '<S188>/Switch1' incorporates:
         *  Constant: '<S188>/Constant Value'
         *  Constant: '<S188>/Constant Value1'
         *  Constant: '<S188>/Constant Value2'
         *  Constant: '<S188>/Constant Value3'
         *  Logic: '<S188>/AND'
         *  RelationalOperator: '<S188>/Greater Than or Equal '
         *  RelationalOperator: '<S188>/Greater Than or Equal 1'
         *  RelationalOperator: '<S188>/Not Equal'
         *  RelationalOperator: '<S188>/Not Equal1'
         *  Switch: '<S188>/Switch2'
         *  Switch: '<S188>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeVS_j != 0.0F) && (rtb_Switch3_ej != 0.0F))
        {
            /* Switch: '<S188>/Switch1' incorporates:
             *  Product: '<S188>/Division'
             */
            rtb_Switch3_ej = rtb_TmpSignalConversionAtVeVS_j / rtb_Switch3_ej;
        }
        else if (rtb_TmpSignalConversionAtVeVS_j > 0.0F)
        {
            /* Switch: '<S188>/Switch2' incorporates:
             *  Constant: '<S188>/MAXFLOAT'
             *  Switch: '<S188>/Switch1'
             */
            rtb_Switch3_ej = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeVS_j < 0.0F)
        {
            /* Switch: '<S188>/Switch3' incorporates:
             *  Constant: '<S188>/MINFLOAT'
             *  Switch: '<S188>/Switch1'
             *  Switch: '<S188>/Switch2'
             */
            rtb_Switch3_ej = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S188>/Switch1' incorporates:
             *  Constant: '<S188>/Constant Value4'
             *  Switch: '<S188>/Switch2'
             *  Switch: '<S188>/Switch3'
             */
            rtb_Switch3_ej = 0.0F;
        }

        /* End of Switch: '<S188>/Switch1' */
        /* End of Outputs for SubSystem: '<S186>/Protected Division1' */

        /* VariantMerge generated from: '<S182>/T_turb' incorporates:
         *  Lookup_n-D: '<S187>/Vector'
         *  Product: '<S185>/Product'
         *  Product: '<S186>/Product2'
         *  Sum: '<S185>/Sum'
         *  Sum: '<S185>/Sum1'
         *  Switch: '<S188>/Switch1'
         */
        rtb_Switch3_ej = (((rtb_Switch_ow * look1_iflf_binlcapw(rtb_Switch3_ej,
                             (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio
                              ()),
                             (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio
                              ()), 17U)) - rtb_Switch_ow) *
                          rtb_TmpSignalConversionAtVeTC_j) + rtb_Switch_ow;

        /* End of Outputs for SubSystem: '<S182>/RTC_on' */
#else

        /* Outputs for Atomic SubSystem: '<S182>/RTC_off' */
        /* VariantMerge generated from: '<S182>/T_turb' incorporates:
         *  Inport: '<S183>/T_imp'
         */
        rtb_Switch3_ej = rtb_Switch_ow;

        /* End of Outputs for SubSystem: '<S182>/RTC_off' */
#endif

        /* End of Outputs for SubSystem: '<S144>/VariantSubsystem' */

        /* Switch: '<S144>/Switch1' incorporates:
         *  Constant: '<S181>/Calib'
         */
        if (Rte_Prm_HeATRR_b_RTC_Enbl_HeATRR_b_RTC_Enbl())
        {
            /* Switch: '<S144>/Switch1' incorporates:
             *  Product: '<S144>/Multiplication2'
             */
            VeCTCR_M_ToFrontTarget_4Hi = rtb_Switch3_ej *
                rtb_TmpSignalConversionAtVeTI_e;
        }
        else
        {
            /* Switch: '<S144>/Switch1' incorporates:
             *  Product: '<S144>/Multiplication1'
             */
            VeCTCR_M_ToFrontTarget_4Hi = rtb_Switch_ow *
                rtb_TmpSignalConversionAtVeTINR;
        }

        /* End of Switch: '<S144>/Switch1' */

        /* Gain: '<S174>/Gain' */
        VeCTCR_M_TransIntakeTrqFw_4Hi = rtb_TmpSignalConversionAtVeAT_m;

        /* Switch: '<S115>/Switch1' incorporates:
         *  SignalConversion: '<S119>/SignalConversion4'
         */
        rtb_Switch1_lb = VeCTCR_M_ToFrontTarget_4Hi;

        /* Merge: '<S112>/Merge4' incorporates:
         *  SignalConversion: '<S119>/SignalConversion5'
         */
        rtb_Switch3_ej = VeCTCR_M_TransIntakeTrqFw_4Hi;

        /* Merge: '<S112>/Merge11' incorporates:
         *  SignalConversion: '<S119>/SignalConversion6'
         */
        VeCTCR_M_ToFrontTargetECM_4Hi = VeCTCR_M_TransIntakeWhlTgt;

        /* Update for UnitDelay: '<S138>/UnitDelay1' */
        CTCR_ac_DW.UnitDelay1_DSTATE_gy = VeCTCR_dPct_AccPdlChangel_4Hi;

        /* Update for UnitDelay: '<S138>/UnitDelay' */
        CTCR_ac_DW.UnitDelay_DSTATE_am = rtb_TmpSignalConversionAtVeAPSR;

        /* End of Outputs for SubSystem: '<S112>/CalcCrpSpdActv4Hi' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S112>/CalcCrpSpdActv4Lo' incorporates:
         *  ActionPort: '<S120>/ActionPort'
         */
        for (i = 0; i < 2; i++)
        {
            /* UnitDelay: '<S120>/UnitDelay3' */
            rtb_Sum3_cd[i] = CTCR_ac_DW.UnitDelay3_DSTATE_f[i];
        }

        /* Product: '<S204>/Multiplication2' incorporates:
         *  Constant: '<S221>/Calib'
         *  Product: '<S204>/Multiplication4'
         *  Sum: '<S204>/Summation'
         *  Sum: '<S204>/Summation1'
         *  Sum: '<S204>/Summation2'
         *  UnitDelay: '<S204>/UnitDelay'
         *  UnitDelay: '<S204>/UnitDelay1'
         */
        VeCTCR_dPct_AccPdlChangel_4Lo = ((rtb_TmpSignalConversionAtVeAPSR -
            ((rtb_Sum_d_tmp - KeCTCR_t_PedalGradBlendFactor) *
             CTCR_ac_DW.UnitDelay1_DSTATE_m)) - CTCR_ac_DW.UnitDelay_DSTATE_j) /
            (rtb_Sum_d_tmp + KeCTCR_t_PedalGradBlendFactor);

        /* Lookup_n-D: '<S223>/Vector' incorporates:
         *  Product: '<S204>/Multiplication2'
         *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
         */
        VeCTCR_r_GrdLimMinCreepLDPdlDiff_4Lo = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeAPSR, VeCTCR_dPct_AccPdlChangel_4Lo, ((
               const float32 *)&(KxCTCR_r_GrdLimMinCreepLDMapPdlDiff_4Lo[0])),
             ((const float32 *)&(KyCTCR_r_GrdLimMinCreepLDMapPdlDiff_4Lo[0])),
             ((const float32 *)&(KtCTCR_r_GrdLimMinCreepLDMapPdlDiff_4Lo[0])),
             CTCR_ac_ConstP.pooled12, 8U);

        /* Switch: '<S120>/Switch5' incorporates:
         *  Constant: '<S120>/ConstantValue13'
         *  Constant: '<S120>/ConstantValue16'
         */
        if (rtb_TmpSignalConversionAtVeHTDR)
        {
            i = 0;
        }
        else
        {
            i = -1;
        }

        /* End of Switch: '<S120>/Switch5' */

        /* Outputs for Atomic SubSystem: '<S120>/GradientLimiter4' */
        /* Sum: '<S208>/Sum2' incorporates:
         *  UnitDelay: '<S208>/Unit Delay'
         */
        rtb_Switch3_ej = ((float32)i) - CTCR_ac_DW.UnitDelay_DSTATE_no;

        /* Outputs for Atomic SubSystem: '<S208>/Limiter' */
        /* Switch: '<S240>/Switch1' incorporates:
         *  Constant: '<S220>/Calib'
         *  RelationalOperator: '<S240>/Relational Operator'
         */
        if (KeCTCR_r_GrdLimMinCreepLU_4Lo < rtb_Switch3_ej)
        {
            /* Switch: '<S240>/Switch1' */
            rtb_Switch3_ej = KeCTCR_r_GrdLimMinCreepLU_4Lo;
        }

        /* End of Switch: '<S240>/Switch1' */

        /* Switch: '<S240>/Switch' incorporates:
         *  Constant: '<S219>/Calib'
         *  RelationalOperator: '<S240>/Relational Operator1'
         */
        if (rtb_Switch3_ej <= KeCTCR_r_GrdLimMinCreepLD_4Lo)
        {
            rtb_Switch3_ej = KeCTCR_r_GrdLimMinCreepLD_4Lo;
        }

        /* End of Switch: '<S240>/Switch' */
        /* End of Outputs for SubSystem: '<S208>/Limiter' */

        /* Sum: '<S208>/Sum3' incorporates:
         *  UnitDelay: '<S208>/Unit Delay'
         */
        rtb_Switch3_ej += CTCR_ac_DW.UnitDelay_DSTATE_no;

        /* Update for UnitDelay: '<S208>/Unit Delay' */
        CTCR_ac_DW.UnitDelay_DSTATE_no = rtb_Switch3_ej;

        /* End of Outputs for SubSystem: '<S120>/GradientLimiter4' */

        /* Switch: '<S120>/Switch1' incorporates:
         *  Constant: '<S212>/Calib'
         *  RelationalOperator: '<S120>/Comparison2'
         */
        if (rtb_TmpSignalConversionAtVeTTQR > KeCTCR_M_MinSumTrq_CL_Launch)
        {
            /* Switch: '<S120>/Switch3' incorporates:
             *  MinMax: '<S120>/MinMax6'
             */
            rtb_Switch3_ej = fmaxf(VeCTCR_r_GrdLimMinCreepLDPdlDiff_4Lo,
                                   rtb_Switch3_ej);
        }
        else
        {
            /* Switch: '<S120>/Switch3' incorporates:
             *  Constant: '<S219>/Calib'
             */
            rtb_Switch3_ej = KeCTCR_r_GrdLimMinCreepLD_4Lo;
        }

        /* End of Switch: '<S120>/Switch1' */

        /* MinMax: '<S120>/MinMax2' incorporates:
         *  Constant: '<S120>/ConstantValue2'
         */
        VeCTCR_r_GrdLimMinCreepLD_4Lo = fminf(rtb_Switch3_ej, 0.0F);

        /* Lookup_n-D: '<S224>/Vector' incorporates:
         *  Merge: '<S118>/Merge'
         */
        VeCTCR_r_WhlReturn2IdlBlndRaw_4Lo = look1_iflf_binlcapw
            (VeCTCR_n_DeltaSpdDisengage, ((const float32 *)
              &(KxCTCR_r_WhlReturn2IdlBlnd_4Lo[0])), ((const float32 *)
              &(KtCTCR_r_WhlReturn2IdlBlnd_4Lo[0])), 5U);

        /* Selector: '<S120>/Selector1' incorporates:
         *  Constant: '<S211>/Calib'
         *  DataTypeConversion: '<S120>/DataTypeConversion2'
         *  SignalConversion generated from: '<S1>/VeOHSR_e_ILEState'
         */
        VeCTCR_b_CreepSpdActvVLEStat_4Lo = KaCTCR_b_ILEStateOHSR_4Lo
            [(rtb_TmpSignalConversionAtVeOH_i)];

        /* Logic: '<S120>/Logical2' incorporates:
         *  Constant: '<S214>/Calib'
         */
        VeCTCR_b_MinCreep_BlendFactActv_4Lo = ((VeCTCR_b_CreepSpdActvVLEStat_4Lo)
            || (KeCTCR_b_MinCreepActvOvrd_4Lo));

        /* MinMax: '<S120>/MinMax1' incorporates:
         *  Switch: '<S120>/Switch4'
         */
        VeCTCR_r_MinCreepFactorRaw_4Lo = fmaxf(VeCTCR_r_WhlReturn2IdlBlndRaw_4Lo,
            (float32)VeCTCR_b_MinCreep_BlendFactActv_4Lo);

        /* Outputs for Atomic SubSystem: '<S120>/GradientLimiter' */
        for (i = 0; i < 5; i++)
        {
            /* UnitDelay: '<S207>/Unit Delay' */
            rtb_UnitDelay_f[i] = CTCR_ac_DW.UnitDelay_DSTATE_i[i];
        }

        /* Sum: '<S207>/Sum2' */
        rtb_Sum2_l[0] = VeCTCR_r_MinCreepFactorRaw_4Lo - rtb_UnitDelay_f[0];
        rtb_Sum2_l[1] = VeCTCR_r_MinCreepFactorRaw_4Lo - rtb_UnitDelay_f[1];
        rtb_Sum2_l[2] = VeCTCR_r_MinCreepFactorRaw_4Lo - rtb_UnitDelay_f[2];
        rtb_Sum2_l[3] = VeCTCR_r_MinCreepFactorRaw_4Lo - rtb_UnitDelay_f[3];
        rtb_Sum2_l[4] = VeCTCR_r_WhlReturn2IdlBlndRaw_4Lo - rtb_UnitDelay_f[4];

        /* Outputs for Atomic SubSystem: '<S207>/Limiter' */
        for (i = 0; i < 5; i++)
        {
            rtb_Switch3_ej = rtb_Sum2_l[i];

            /* Switch: '<S239>/Switch1' incorporates:
             *  Constant: '<S220>/Calib'
             *  RelationalOperator: '<S239>/Relational Operator'
             */
            if (KeCTCR_r_GrdLimMinCreepLU_4Lo < rtb_Switch3_ej)
            {
                /* Switch: '<S239>/Switch1' */
                rtb_Switch3_ej = KeCTCR_r_GrdLimMinCreepLU_4Lo;
            }

            /* End of Switch: '<S239>/Switch1' */
            rtb_Sum2_l[i] = rtb_Switch3_ej;
        }

        /* Switch: '<S239>/Switch' incorporates:
         *  Constant: '<S219>/Calib'
         *  RelationalOperator: '<S239>/Relational Operator'
         *  RelationalOperator: '<S239>/Relational Operator1'
         *  Switch: '<S239>/Switch1'
         */
        if (rtb_Sum2_l[0] > KeCTCR_r_GrdLimMinCreepLD_4Lo)
        {
            rtb_Switch3_ej = rtb_Sum2_l[0];
        }
        else
        {
            rtb_Switch3_ej = KeCTCR_r_GrdLimMinCreepLD_4Lo;
        }

        /* End of Outputs for SubSystem: '<S207>/Limiter' */

        /* Sum: '<S207>/Sum3' */
        VaCTCR_r_MinCreepBlendingFactor_4Lo[0] = rtb_Switch3_ej +
            rtb_UnitDelay_f[0];

        /* Outputs for Atomic SubSystem: '<S207>/Limiter' */
        /* Switch: '<S239>/Switch' incorporates:
         *  Constant: '<S219>/Calib'
         *  RelationalOperator: '<S239>/Relational Operator1'
         */
        if (rtb_Sum2_l[1] > KeCTCR_r_GrdLimMinCreepLD_4Lo)
        {
            rtb_Switch3_ej = rtb_Sum2_l[1];
        }
        else
        {
            rtb_Switch3_ej = KeCTCR_r_GrdLimMinCreepLD_4Lo;
        }

        /* End of Outputs for SubSystem: '<S207>/Limiter' */

        /* Sum: '<S207>/Sum3' */
        VaCTCR_r_MinCreepBlendingFactor_4Lo[1] = rtb_Switch3_ej +
            rtb_UnitDelay_f[1];

        /* Outputs for Atomic SubSystem: '<S207>/Limiter' */
        /* Switch: '<S239>/Switch' incorporates:
         *  RelationalOperator: '<S239>/Relational Operator1'
         */
        if (rtb_Sum2_l[2] > VeCTCR_r_GrdLimMinCreepLD_4Lo)
        {
            rtb_Switch3_ej = rtb_Sum2_l[2];
        }
        else
        {
            rtb_Switch3_ej = VeCTCR_r_GrdLimMinCreepLD_4Lo;
        }

        /* End of Outputs for SubSystem: '<S207>/Limiter' */

        /* Sum: '<S207>/Sum3' */
        VaCTCR_r_MinCreepBlendingFactor_4Lo[2] = rtb_Switch3_ej +
            rtb_UnitDelay_f[2];

        /* Outputs for Atomic SubSystem: '<S207>/Limiter' */
        /* Switch: '<S239>/Switch' incorporates:
         *  RelationalOperator: '<S239>/Relational Operator1'
         */
        if (rtb_Sum2_l[3] > VeCTCR_r_GrdLimMinCreepLD_4Lo)
        {
            rtb_Switch3_ej = rtb_Sum2_l[3];
        }
        else
        {
            rtb_Switch3_ej = VeCTCR_r_GrdLimMinCreepLD_4Lo;
        }

        /* End of Outputs for SubSystem: '<S207>/Limiter' */

        /* Sum: '<S207>/Sum3' */
        VaCTCR_r_MinCreepBlendingFactor_4Lo[3] = rtb_Switch3_ej +
            rtb_UnitDelay_f[3];

        /* Outputs for Atomic SubSystem: '<S207>/Limiter' */
        /* Switch: '<S239>/Switch' incorporates:
         *  Constant: '<S219>/Calib'
         *  RelationalOperator: '<S239>/Relational Operator1'
         */
        if (rtb_Sum2_l[4] > KeCTCR_r_GrdLimMinCreepLD_4Lo)
        {
            rtb_Switch3_ej = rtb_Sum2_l[4];
        }
        else
        {
            rtb_Switch3_ej = KeCTCR_r_GrdLimMinCreepLD_4Lo;
        }

        /* End of Outputs for SubSystem: '<S207>/Limiter' */

        /* Sum: '<S207>/Sum3' */
        VaCTCR_r_MinCreepBlendingFactor_4Lo[4] = rtb_Switch3_ej +
            rtb_UnitDelay_f[4];

        /* Update for UnitDelay: '<S207>/Unit Delay' */
        for (i = 0; i < 5; i++)
        {
            CTCR_ac_DW.UnitDelay_DSTATE_i[i] =
                VaCTCR_r_MinCreepBlendingFactor_4Lo[(i)];
        }

        /* End of Update for UnitDelay: '<S207>/Unit Delay' */
        /* End of Outputs for SubSystem: '<S120>/GradientLimiter' */

        /* RelationalOperator: '<S120>/Comparison4' incorporates:
         *  Constant: '<S218>/Calib'
         */
        rtb_Comparison4_g = (VeCTCR_r_MinCreepFactorRaw_4Lo >=
                             KeCTCR_r_BlndFctLSP);

        /* Outputs for Atomic SubSystem: '<S120>/DigitalLowpassResetEnabled1' */
        for (i = 0; i < 2; i++)
        {
            /* UnitDelay: '<S205>/Unit Delay' */
            rtb_Switch_b[i] = CTCR_ac_DW.UnitDelay_DSTATE_hpn[i];
        }

        /* Switch: '<S205>/Switch1' incorporates:
         *  RelationalOperator: '<S120>/Comparison3'
         *  Switch: '<S120>/Switch2'
         *  UnitDelay: '<S120>/UnitDelay1'
         */
        if (VaCTCR_r_MinCreepBlendingFactor_4Lo[3] >
                CTCR_ac_DW.UnitDelay1_DSTATE_i)
        {
            /* Switch: '<S205>/Switch1' */
            rtb_TmpSignalConversionAtVeAT_m = VeCTCR_M_TransIntakeFw_Raw;
            rtb_Switch3_ej = VeCTCR_M_TransIntakeWhlTgt;
        }
        else
        {
            if (rtb_Comparison4_g)
            {
                /* Switch: '<S120>/Switch2' incorporates:
                 *  Constant: '<S215>/Calib'
                 */
                rtb_Switch3_ej = KeCTCR_k_SumTrqCL_Slope;
            }
            else
            {
                /* Switch: '<S120>/Switch2' incorporates:
                 *  Constant: '<S120>/ConstantValue10'
                 */
                rtb_Switch3_ej = 1.0F;
            }

            /* Switch: '<S205>/Switch1' incorporates:
             *  Product: '<S205>/Multiplication'
             *  Sum: '<S205>/Subtraction'
             *  Sum: '<S205>/Summation'
             */
            rtb_TmpSignalConversionAtVeAT_m = ((rtb_TmpSignalConversionAtVeTTQR
                - rtb_Switch_b[0]) * rtb_Switch3_ej) + rtb_Switch_b[0];
            rtb_Switch3_ej = ((rtb_TmpSignalConversionAtVeAXLR - rtb_Switch_b[1])
                              * rtb_Switch3_ej) + rtb_Switch_b[1];
        }

        /* End of Switch: '<S205>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S205>/Limiter' */
        /* Switch: '<S237>/Switch1' incorporates:
         *  RelationalOperator: '<S237>/Relational Operator'
         */
        if (VeCTCR_M_TransIntakeFw_Raw < rtb_TmpSignalConversionAtVeAT_m)
        {
            /* Sum: '<S120>/Sum' */
            rtb_Switch_b[0] = VeCTCR_M_TransIntakeFw_Raw;
        }
        else
        {
            /* Sum: '<S120>/Sum' */
            rtb_Switch_b[0] = rtb_TmpSignalConversionAtVeAT_m;
        }

        if (VeCTCR_M_TransIntakeWhlTgt < rtb_Switch3_ej)
        {
            /* Sum: '<S120>/Sum' */
            rtb_Switch_b[1] = VeCTCR_M_TransIntakeWhlTgt;
        }
        else
        {
            /* Sum: '<S120>/Sum' */
            rtb_Switch_b[1] = rtb_Switch3_ej;
        }

        /* End of Switch: '<S237>/Switch1' */
        for (i = 0; i < 2; i++)
        {
            tmpRead_3 = rtb_Switch_b[i];

            /* Switch: '<S237>/Switch' incorporates:
             *  Constant: '<S120>/ConstantValue4'
             *  RelationalOperator: '<S237>/Relational Operator1'
             */
            if (tmpRead_3 > -9999.0F)
            {
                /* Switch: '<S237>/Switch' */
                VaCTCR_M_SumTrq_CL_WO_OffsetFilt[(i)] = tmpRead_3;
            }
            else
            {
                /* Switch: '<S237>/Switch' */
                VaCTCR_M_SumTrq_CL_WO_OffsetFilt[(i)] = -9999.0F;
            }

            /* End of Switch: '<S237>/Switch' */

            /* Update for UnitDelay: '<S205>/Unit Delay' */
            CTCR_ac_DW.UnitDelay_DSTATE_hpn[i] =
                VaCTCR_M_SumTrq_CL_WO_OffsetFilt[(i)];
        }

        /* End of Outputs for SubSystem: '<S205>/Limiter' */
        /* End of Outputs for SubSystem: '<S120>/DigitalLowpassResetEnabled1' */

        /* Outputs for Atomic SubSystem: '<S120>/Hysteresis_1' */
        /* Switch: '<S210>/Switch1' incorporates:
         *  Constant: '<S217>/Calib'
         *  RelationalOperator: '<S210>/Greater  Than'
         *  RelationalOperator: '<S237>/Relational Operator1'
         */
        if (VeCTCR_n_DeltaSpdP2AndNTurb >= KeCTCR_n_DeltaSpdP2AndNTurb_RSP)
        {
            /* Switch: '<S210>/Switch1' incorporates:
             *  Constant: '<S210>/Constant Value'
             */
            rtb_NotEqual1_b = true;
        }
        else
        {
            /* Switch: '<S210>/Switch1' incorporates:
             *  Constant: '<S216>/Calib'
             *  RelationalOperator: '<S210>/Greater  Than1'
             *  UnitDelay: '<S210>/Unit Delay'
             */
            rtb_NotEqual1_b = ((VeCTCR_n_DeltaSpdP2AndNTurb >
                                KeCTCR_n_DeltaSpdP2AndNTurb_LSP) &&
                               (CTCR_ac_DW.UnitDelay_DSTATE_i5));
        }

        /* End of Switch: '<S210>/Switch1' */

        /* Update for UnitDelay: '<S210>/Unit Delay' */
        CTCR_ac_DW.UnitDelay_DSTATE_i5 = rtb_NotEqual1_b;

        /* End of Outputs for SubSystem: '<S120>/Hysteresis_1' */

        /* Outputs for Atomic SubSystem: '<S120>/DigitalLowpassResetEnabled2' */
        /* Switch: '<S206>/Switch1' incorporates:
         *  RelationalOperator: '<S120>/Comparison1'
         *  Switch: '<S120>/Switch6'
         *  Switch: '<S120>/Switch7'
         *  UnitDelay: '<S120>/UnitDelay'
         */
        if (VaCTCR_r_MinCreepBlendingFactor_4Lo[3] >
                CTCR_ac_DW.UnitDelay_DSTATE_k)
        {
            /* Switch: '<S206>/Switch1' */
            rtb_Sum3_cd[0] = VeCTCR_M_TransIntakeFw_Raw;
            rtb_Sum3_cd[1] = VeCTCR_M_TransIntakeWhlTgt;
        }
        else
        {
            if (rtb_NotEqual1_b)
            {
                /* Abs: '<S120>/Abs' incorporates:
                 *  Sum: '<S120>/Sum1'
                 *  Switch: '<S120>/Switch6'
                 */
                rtb_Switch_b[0] = fabsf(rtb_Sum3_cd[0] -
                                        VeCTCR_M_TransIntakeFw_Raw);
                rtb_Switch_b[1] = fabsf(rtb_Sum3_cd[1] -
                                        VeCTCR_M_TransIntakeWhlTgt);
                for (i = 0; i < 2; i++)
                {
                    /* Lookup_n-D: '<S222>/Vector' incorporates:
                     *  Switch: '<S120>/Switch6'
                     */
                    rtb_Vector_ka[i] = look1_iflf_binlcapw(rtb_Switch_b[i], ((
                        const float32 *)&(KxCTCR_k_DeltaToFrntTgt_Slope[0])), ((
                        const float32 *)&(KtCTCR_k_DeltaToFrntTgt_Slope[0])), 5U);
                }

                /* Switch: '<S120>/Switch7' */
                rtb_TmpSignalConversionAtVeTTQR = VeCTCR_M_TransIntakeFw_Raw;
                rtb_TmpSignalConversionAtVeAXLR = VeCTCR_M_TransIntakeWhlTgt;
            }
            else
            {
                for (i = 0; i < 2; i++)
                {
                    /* Switch: '<S120>/Switch6' incorporates:
                     *  Constant: '<S215>/Calib'
                     */
                    rtb_Vector_ka[i] = KeCTCR_k_SumTrqCL_Slope;
                }
            }

            /* Switch: '<S206>/Switch1' incorporates:
             *  Product: '<S206>/Multiplication'
             *  Sum: '<S206>/Subtraction'
             *  Sum: '<S206>/Summation'
             *  UnitDelay: '<S206>/Unit Delay'
             */
            rtb_Sum3_cd[0] = ((rtb_TmpSignalConversionAtVeTTQR -
                               CTCR_ac_DW.UnitDelay_DSTATE_f[0]) *
                              rtb_Vector_ka[0]) + CTCR_ac_DW.UnitDelay_DSTATE_f
                [0];
            rtb_Sum3_cd[1] = ((rtb_TmpSignalConversionAtVeAXLR -
                               CTCR_ac_DW.UnitDelay_DSTATE_f[1]) *
                              rtb_Vector_ka[1]) + CTCR_ac_DW.UnitDelay_DSTATE_f
                [1];
        }

        /* End of Switch: '<S206>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S206>/Limiter' */
        /* Switch: '<S238>/Switch1' incorporates:
         *  RelationalOperator: '<S238>/Relational Operator'
         */
        if (VeCTCR_M_TransIntakeFw_Raw < rtb_Sum3_cd[0])
        {
            /* Sum: '<S120>/Sum' */
            rtb_Switch_b[0] = VeCTCR_M_TransIntakeFw_Raw;
        }
        else
        {
            /* Sum: '<S120>/Sum' */
            rtb_Switch_b[0] = rtb_Sum3_cd[0];
        }

        if (VeCTCR_M_TransIntakeWhlTgt < rtb_Sum3_cd[1])
        {
            /* Sum: '<S120>/Sum' */
            rtb_Switch_b[1] = VeCTCR_M_TransIntakeWhlTgt;
        }
        else
        {
            /* Sum: '<S120>/Sum' */
            rtb_Switch_b[1] = rtb_Sum3_cd[1];
        }

        /* End of Switch: '<S238>/Switch1' */
        /* End of Outputs for SubSystem: '<S206>/Limiter' */
        /* End of Outputs for SubSystem: '<S120>/DigitalLowpassResetEnabled2' */

        /* Switch: '<S120>/Switch3' */
        if (rtb_Comparison4_g)
        {
            /* Switch: '<S120>/Switch3' incorporates:
             *  Constant: '<S120>/ConstantValue1'
             */
            rtb_Switch3_ej = 0.0F;
        }
        else
        {
            /* Switch: '<S120>/Switch3' incorporates:
             *  Constant: '<S213>/Calib'
             */
            rtb_Switch3_ej = KeCTCR_M_OffsetOverSumTrqCL;
        }

        /* End of Switch: '<S120>/Switch3' */

        /* Merge: '<S112>/Merge9' incorporates:
         *  Gain: '<S225>/Gain'
         */
        VeCTCR_M_MinCreepFWTrqTgt_WO_Offset = VaCTCR_M_SumTrq_CL_WO_OffsetFilt[0];

        /* Merge: '<S112>/Merge8' incorporates:
         *  Gain: '<S229>/Gain'
         */
        VeCTCR_M_MinCreepWheelTrqTgt_WO_Offset =
            VaCTCR_M_SumTrq_CL_WO_OffsetFilt[1];

        /* Gain: '<S231>/Gain' */
        VeCTCR_r_MinCreepBF_AeC_4Lo = VaCTCR_r_MinCreepBlendingFactor_4Lo[3];

        /* Gain: '<S232>/Gain' */
        VeCTCR_r_MinCreepBF_ATRR_4Lo = VaCTCR_r_MinCreepBlendingFactor_4Lo[0];

        /* Gain: '<S234>/Gain' */
        VeCTCR_r_MinCreepBFStrgc_4Lo = VaCTCR_r_MinCreepBlendingFactor_4Lo[4];

        /* Outputs for Atomic SubSystem: '<S120>/DigitalLowpassResetEnabled2' */
        /* Outputs for Atomic SubSystem: '<S206>/Limiter' */
        for (i = 0; i < 2; i++)
        {
            tmpRead_3 = rtb_Switch_b[i];

            /* Switch: '<S238>/Switch' incorporates:
             *  Constant: '<S120>/ConstantValue3'
             *  RelationalOperator: '<S238>/Relational Operator1'
             */
            if (tmpRead_3 <= -9999.0F)
            {
                /* Switch: '<S238>/Switch' */
                tmpRead_3 = -9999.0F;
            }

            /* End of Switch: '<S238>/Switch' */

            /* Update for UnitDelay: '<S206>/Unit Delay' */
            CTCR_ac_DW.UnitDelay_DSTATE_f[i] = tmpRead_3;

            /* Gain: '<S233>/Gain' */
            VaCTCR_r_MinCreepBFOne_4Lo[(i)] =
                VaCTCR_r_MinCreepBlendingFactor_4Lo[i + 1];

            /* Merge: '<S112>/Merge' incorporates:
             *  SignalConversion: '<S120>/SignalConversion'
             */
            VaCTCR_r_MinCreepBFOne[(i)] = VaCTCR_r_MinCreepBFOne_4Lo[(i)];
            rtb_Vector_ka[i] = tmpRead_3;
            rtb_Switch_b[i] = VaCTCR_M_SumTrq_CL_WO_OffsetFilt[(i)] +
                rtb_Switch3_ej;
        }

        /* End of Outputs for SubSystem: '<S206>/Limiter' */
        /* End of Outputs for SubSystem: '<S120>/DigitalLowpassResetEnabled2' */

        /* Gain: '<S236>/Gain' incorporates:
         *  RelationalOperator: '<S238>/Relational Operator1'
         *  Sum: '<S120>/Sum'
         *  Switch: '<S238>/Switch'
         */
        VeCTCR_M_SumTrq_CLWhl_Filt = rtb_Vector_ka[1];

        /* MinMax: '<S120>/MinMax' */
        VeCTCR_M_TransIntkWhlTorque_4Lo = fminf(VeCTCR_M_SumTrq_CLWhl_Filt,
            VeCTCR_M_TransIntakeWhlTgt);

        /* Gain: '<S228>/Gain' */
        VeCTCR_M_SumTrq_CLWhl_OffsetFilt = rtb_Switch_b[1];

        /* MinMax: '<S120>/MinMax3' */
        VeCTCR_M_MinCreepWheel_Start_4Lo = fminf(rtb_TmpSignalConversionAtVeDTRR,
            VeCTCR_M_SumTrq_CLWhl_OffsetFilt);

        /* Gain: '<S227>/Gain' */
        VeCTCR_M_SumTrq_CL_OffsetFilt = rtb_Switch_b[0];

        /* MinMax: '<S120>/MinMax4' */
        VeCTCR_M_MinCreepFW_Start_4Lo = fminf(VeCTCR_M_MinPdlFw_Agr,
            VeCTCR_M_SumTrq_CL_OffsetFilt);

        /* Gain: '<S235>/Gain' */
        VeCTCR_M_SumTrq_CL_Filt = rtb_Vector_ka[0];

        /* MinMax: '<S120>/MinMax5' */
        VeCTCR_M_TransIntakeTrqFw_4Lo = fminf(VeCTCR_M_SumTrq_CL_Filt,
            VeCTCR_M_TransIntakeFw_Raw);

        /* Merge: '<S112>/Merge1' incorporates:
         *  SignalConversion: '<S120>/SignalConversion1'
         */
        rtb_TmpSignalConversionAtVeTTQR = VeCTCR_r_MinCreepBF_ATRR_4Lo;

        /* Merge: '<S112>/Merge2' incorporates:
         *  SignalConversion: '<S120>/SignalConversion2'
         */
        VeCTCR_r_AeCoastFactorRaw = VeCTCR_r_MinCreepBF_AeC_4Lo;

        /* Merge: '<S112>/Merge7' incorporates:
         *  SignalConversion: '<S120>/SignalConversion3'
         */
        rtb_TmpSignalConversionAtVeAXLR = VeCTCR_r_MinCreepBFStrgc_4Lo;

        /* Switch: '<S115>/Switch1' incorporates:
         *  SignalConversion: '<S120>/SignalConversion4'
         */
        rtb_Switch1_lb = VeCTCR_M_TransIntkWhlTorque_4Lo;

        /* Merge: '<S112>/Merge6' incorporates:
         *  SignalConversion: '<S120>/SignalConversion5'
         */
        VeCTCR_M_FWTrqReqMin_Arb = VeCTCR_M_MinCreepFW_Start_4Lo;

        /* Merge: '<S112>/Merge4' incorporates:
         *  SignalConversion: '<S120>/SignalConversion6'
         */
        rtb_Switch3_ej = VeCTCR_M_TransIntakeTrqFw_4Lo;

        /* Merge: '<S112>/Merge5' incorporates:
         *  SignalConversion: '<S120>/SignalConversion7'
         */
        VeCTCR_M_AxleTrqReqMin_Arb = VeCTCR_M_MinCreepWheel_Start_4Lo;

        /* Merge: '<S112>/Merge10' incorporates:
         *  Constant: '<S120>/ConstantValue7'
         *  SignalConversion generated from: '<S120>/MinCreepBFTwo_4Lo'
         */
        VeCTCR_r_MinCreepBFTwo = 0.0F;

        /* Merge: '<S112>/Merge11' incorporates:
         *  Constant: '<S120>/ConstantValue9'
         *  SignalConversion generated from: '<S120>/ToFrontTargetECM_4Lo'
         */
        VeCTCR_M_ToFrontTargetECM_4Hi = 0.0F;

        /* Update for UnitDelay: '<S120>/UnitDelay3' */
        CTCR_ac_DW.UnitDelay3_DSTATE_f[0] = VeCTCR_M_SumTrq_CL_Filt;
        CTCR_ac_DW.UnitDelay3_DSTATE_f[1] = VeCTCR_M_SumTrq_CLWhl_Filt;

        /* Update for UnitDelay: '<S204>/UnitDelay1' */
        CTCR_ac_DW.UnitDelay1_DSTATE_m = VeCTCR_dPct_AccPdlChangel_4Lo;

        /* Update for UnitDelay: '<S204>/UnitDelay' */
        CTCR_ac_DW.UnitDelay_DSTATE_j = rtb_TmpSignalConversionAtVeAPSR;

        /* Update for UnitDelay: '<S120>/UnitDelay' */
        CTCR_ac_DW.UnitDelay_DSTATE_k = VaCTCR_r_MinCreepBlendingFactor_4Lo[3];

        /* Update for UnitDelay: '<S120>/UnitDelay1' */
        CTCR_ac_DW.UnitDelay1_DSTATE_i = VaCTCR_r_MinCreepBlendingFactor_4Lo[3];

        /* End of Outputs for SubSystem: '<S112>/CalcCrpSpdActv4Lo' */
    }

    for (i = 0; i < 2; i++)
    {
        /* UnitDelay: '<S112>/UnitDelay1' */
        rtb_Sum3_h = CTCR_ac_DW.UnitDelay1_DSTATE_ej[i];

        /* RelationalOperator: '<S112>/Comparison1' incorporates:
         *  Constant: '<S112>/ConstantValue3'
         *  Sum: '<S112>/Sum1'
         */
        rtb_Comparison1_g[i] = ((rtb_Sum3_h - VeCTCR_M_AxleTrqReqMin_Arb) >=
                                -10.0F);

        /* RelationalOperator: '<S112>/Comparison2' incorporates:
         *  Constant: '<S126>/Calib'
         */
        VaCTCR_b_NotIn4Lo_3[(i)] = (rtb_Sum3_h >= KeCTCR_M_MinCreep_MinValidVal);

        /* UnitDelay: '<S112>/UnitDelay1' */
        rtb_Vector_ka[i] = rtb_Sum3_h;
    }

    /* Switch: '<S112>/Switch7' */
    if (VeCTCR_b_NotIn4Lo)
    {
        /* Sum: '<S115>/Sum' incorporates:
         *  Constant: '<S124>/Calib'
         *  MinMax: '<S112>/MinMax5'
         */
        rtb_Sum_pn = fmaxf(KeCTCR_M_BF1DestnTorq,
                           rtb_TmpSignalConversionAtVeDTRR);
    }
    else
    {
        /* Sum: '<S115>/Sum' */
        rtb_Sum_pn = rtb_Switch1_lb;
    }

    /* End of Switch: '<S112>/Switch7' */

    /* Gain: '<S131>/Gain' */
    VaCTCR_M_MinCreep_TrqDestnSrc[0] = rtb_Switch1_lb;
    VaCTCR_M_MinCreep_TrqDestnSrc[1] = rtb_Sum_pn;

    /* Outputs for Atomic SubSystem: '<S112>/Hysteresis1' */
    /* Switch: '<S122>/Switch1' incorporates:
     *  Constant: '<S129>/Calib'
     *  Constant: '<S130>/Calib'
     *  RelationalOperator: '<S122>/Greater  Than'
     *  RelationalOperator: '<S122>/Greater  Than1'
     *  UnitDelay: '<S122>/Unit Delay'
     */
    VaCTCR_b_MinCreep_CreepSpdActv[0] = ((rtb_TmpSignalConversionAtVeTTQR >
        KeCTCR_r_BlndFctRSP) || ((rtb_TmpSignalConversionAtVeTTQR >=
        KeCTCR_r_BlndFctLSP) && (CTCR_ac_DW.UnitDelay_DSTATE_ei[0])));
    for (i = 0; i < 2; i++)
    {
        VaCTCR_b_MinCreep_CreepSpdActv[i + 1] = ((VaCTCR_r_MinCreepBFOne[(i)] >
            KeCTCR_r_BlndFctRSP) || ((VaCTCR_r_MinCreepBFOne[(i)] >=
            KeCTCR_r_BlndFctLSP) && (CTCR_ac_DW.UnitDelay_DSTATE_ei[i + 1])));
    }

    /* End of Switch: '<S122>/Switch1' */

    /* Update for UnitDelay: '<S122>/Unit Delay' */
    for (i = 0; i < 3; i++)
    {
        CTCR_ac_DW.UnitDelay_DSTATE_ei[i] = VaCTCR_b_MinCreep_CreepSpdActv[(i)];
    }

    /* End of Update for UnitDelay: '<S122>/Unit Delay' */
    /* End of Outputs for SubSystem: '<S112>/Hysteresis1' */

    /* Switch: '<S112>/Switch4' */
    if (VeCTCR_b_NotIn4Lo)
    {
        /* RelationalOperator: '<S115>/Comparison7' incorporates:
         *  Constant: '<S112>/ConstantValue7'
         */
        rtb_NotEqual1_b = true;
    }
    else
    {
        /* RelationalOperator: '<S115>/Comparison7' incorporates:
         *  RelationalOperator: '<S112>/Comparison5'
         *  UnitDelay: '<S112>/UnitDelay2'
         */
        rtb_NotEqual1_b = (VaCTCR_r_MinCreepBFOne[1] >
                           CTCR_ac_DW.UnitDelay2_DSTATE_j);
    }

    /* End of Switch: '<S112>/Switch4' */

    /* Logic: '<S112>/Logical7' */
    VaCTCR_b_MinCreep_Actv[0] = ((VaCTCR_b_MinCreep_CreepSpdActv[0]) &&
        rtb_NotEqual1_b);
    VaCTCR_b_MinCreep_Actv[1] = ((VaCTCR_b_MinCreep_CreepSpdActv[2]) &&
        rtb_NotEqual1_b);

    /* Logic: '<S112>/Logical3' incorporates:
     *  UnitDelay: '<S112>/UnitDelay4'
     */
    VaCTCR_b_NotIn4Lo_4[0] = ((CTCR_ac_DW.UnitDelay4_DSTATE[0]) &&
        (rtb_Comparison1_g[0]));
    VaCTCR_b_NotIn4Lo_4[1] = ((CTCR_ac_DW.UnitDelay4_DSTATE[2]) &&
        (rtb_Comparison1_g[1]));

    /* RelationalOperator: '<S112>/Comparison4' */
    VeCTCR_b_NotIn4Lo_2 = (rtb_TmpSignalConversionAtVeDTRR <
                           VeCTCR_M_MinCreepWheelTrqTgt_WO_Offset);

    /* Logic: '<S112>/Logical4' */
    VaCTCR_b_NotIn4Lo_1[0] = !VaCTCR_b_MinCreep_CreepSpdActv[0];
    VaCTCR_b_NotIn4Lo_1[1] = !VaCTCR_b_MinCreep_CreepSpdActv[2];
    for (i = 0; i < 2; i++)
    {
        /* Logic: '<S112>/Logical6' */
        VaCTCR_b_NotIn4Lo_5[(i)] = ((((VaCTCR_b_NotIn4Lo_4[(i)]) &&
            (VaCTCR_b_NotIn4Lo_3[(i)])) && (VeCTCR_b_NotIn4Lo_2)) &&
            (VaCTCR_b_NotIn4Lo_1[(i)]));

        /* Switch: '<S112>/Switch5' */
        if (VeCTCR_b_NotIn4Lo)
        {
            /* Switch: '<S112>/Switch5' */
            VaCTCR_b_MinCreep_CreepTorqueStart[(i)] = VaCTCR_b_NotIn4Lo_4[(i)];
        }
        else
        {
            /* Switch: '<S112>/Switch5' */
            VaCTCR_b_MinCreep_CreepTorqueStart[(i)] = VaCTCR_b_NotIn4Lo_5[(i)];
        }

        /* End of Switch: '<S112>/Switch5' */

        /* Switch: '<S112>/Switch2' */
        if (VaCTCR_b_MinCreep_CreepTorqueStart[(i)])
        {
            /* Switch: '<S112>/Switch2' incorporates:
             *  Constant: '<S125>/Calib'
             *  Sum: '<S112>/Sum3'
             */
            VaCTCR_M_MinCreep_CreepTorqueStart[(i)] = rtb_Vector_ka[i] -
                KeCTCR_M_MinCreepDelta;
        }
        else
        {
            /* Switch: '<S112>/Switch2' */
            VaCTCR_M_MinCreep_CreepTorqueStart[(i)] = VeCTCR_M_AxleTrqReqMin_Arb;
        }

        /* End of Switch: '<S112>/Switch2' */

        /* Switch: '<S112>/Switch1' */
        if (VaCTCR_b_MinCreep_Actv[(i)])
        {
            /* Switch: '<S112>/Switch1' incorporates:
             *  UnitDelay: '<S112>/UnitDelay'
             */
            VaCTCR_M_MinCreep_TrqStrtSrc[(i)] = CTCR_ac_DW.UnitDelay_DSTATE_ef[i];
        }
        else
        {
            /* Switch: '<S112>/Switch1' */
            VaCTCR_M_MinCreep_TrqStrtSrc[(i)] =
                VaCTCR_M_MinCreep_CreepTorqueStart[(i)];
        }

        /* End of Switch: '<S112>/Switch1' */
    }

    /* Sum: '<S136>/Sum3' incorporates:
     *  Constant: '<S112>/ConstantValue'
     *  Constant: '<S112>/ConstantValue1'
     *  MinMax: '<S112>/MinMax2'
     *  MinMax: '<S112>/MinMax3'
     *  Product: '<S136>/Product'
     *  Sum: '<S136>/Sum2'
     */
    VaCTCR_M_MinCreepWheelTrq_Intrmdt[0] = ((VaCTCR_M_MinCreep_TrqDestnSrc[0] -
        VaCTCR_M_MinCreep_TrqStrtSrc[0]) * fmaxf(fminf(1.0F,
        rtb_TmpSignalConversionAtVeTTQR), 0.0F)) + VaCTCR_M_MinCreep_TrqStrtSrc
        [0];
    VaCTCR_M_MinCreepWheelTrq_Intrmdt[1] = ((VaCTCR_M_MinCreep_TrqDestnSrc[1] -
        VaCTCR_M_MinCreep_TrqStrtSrc[1]) * fmaxf(fminf(1.0F,
        VaCTCR_r_MinCreepBFOne[1]), 0.0F)) + VaCTCR_M_MinCreep_TrqStrtSrc[1];

    /* Sum: '<S137>/Sum3' incorporates:
     *  Constant: '<S112>/ConstantValue5'
     *  Constant: '<S112>/ConstantValue6'
     *  MinMax: '<S112>/MinMax1'
     *  MinMax: '<S112>/MinMax4'
     *  Product: '<S137>/Product'
     *  Sum: '<S137>/Sum2'
     */
    VaCTCR_M_MinCreepWheelTrq[0] = VaCTCR_M_MinCreepWheelTrq_Intrmdt[0];
    VaCTCR_M_MinCreepWheelTrq[1] = ((VeCTCR_M_ToFrontTargetECM_4Hi -
        VaCTCR_M_MinCreepWheelTrq_Intrmdt[1]) * fmaxf(fminf(1.0F,
        VeCTCR_r_MinCreepBFTwo), 0.0F)) + VaCTCR_M_MinCreepWheelTrq_Intrmdt[1];
    for (i = 0; i < 2; i++)
    {
        /* Sum: '<S112>/Sum2' */
        rtb_Sum2_a[i] = VaCTCR_M_MinCreepWheelTrq[(i)] -
            rtb_TmpSignalConversionAtVeDTRR;
    }

    /* Sum: '<S112>/Sum2' */
    rtb_Sum2_a[2] = VaCTCR_M_MinCreepWheelTrq[1] -
        rtb_TmpSignalConversionAtVeDTRR;

    /* Outputs for Atomic SubSystem: '<S112>/Hysteresis3' */
    /* Switch: '<S123>/Switch1' incorporates:
     *  Constant: '<S130>/Calib'
     *  RelationalOperator: '<S123>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeAXLR > KeCTCR_r_BlndFctRSP)
    {
        /* Switch: '<S123>/Switch1' incorporates:
         *  Constant: '<S123>/Constant Value'
         */
        rtb_Comparison4_g = true;
    }
    else
    {
        /* Switch: '<S123>/Switch1' incorporates:
         *  Constant: '<S129>/Calib'
         *  RelationalOperator: '<S123>/Greater  Than1'
         *  UnitDelay: '<S123>/Unit Delay'
         */
        rtb_Comparison4_g = ((rtb_TmpSignalConversionAtVeAXLR >=
                              KeCTCR_r_BlndFctLSP) &&
                             (CTCR_ac_DW.UnitDelay_DSTATE_iz));
    }

    /* End of Switch: '<S123>/Switch1' */

    /* Update for UnitDelay: '<S123>/Unit Delay' */
    CTCR_ac_DW.UnitDelay_DSTATE_iz = rtb_Comparison4_g;

    /* End of Outputs for SubSystem: '<S112>/Hysteresis3' */

    /* Switch: '<S112>/Switch6' */
    if (VeCTCR_b_NotIn4Lo)
    {
        /* UnitDelay: '<S134>/Unit Delay' incorporates:
         *  Constant: '<S112>/ConstantValue2'
         *  RelationalOperator: '<S112>/Comparison3'
         */
        for (i = 0; i < 3; i++)
        {
            rtb_UnitDelay_gv[i] = (rtb_Sum2_a[i] <= -10.0F);
        }
    }
    else
    {
        /* RelationalOperator: '<S112>/Comparison6' */
        rtb_NotEqual1_b = (rtb_TmpSignalConversionAtVeDTRR <
                           VeCTCR_M_MinCreepWheelTrqTgt_WO_Offset);

        /* UnitDelay: '<S134>/Unit Delay' incorporates:
         *  Constant: '<S112>/ConstantValue2'
         *  Constant: '<S127>/Calib'
         *  Logic: '<S112>/Logical8'
         *  Logic: '<S112>/Logical9'
         *  RelationalOperator: '<S112>/Comparison3'
         */
        for (i = 0; i < 3; i++)
        {
            rtb_UnitDelay_gv[i] = (((rtb_Sum2_a[i] <= -10.0F) ||
                                    (KeCTCR_b_ByPassMinCreepStepChck)) &&
                                   rtb_NotEqual1_b);
        }
    }

    /* End of Switch: '<S112>/Switch6' */
    /* End of Outputs for SubSystem: '<S1>/CTCR_MinCreepPedal_PxPy' */

    /* Inport: '<Root>/VeTITR_M_EngCorrTrq' */
    (void)Rte_Read_VeTITR_M_EngCorrTrq_Value(&rtb_UnitDelay1_kf);

    /* Outputs for Function Call SubSystem: '<S1>/CTCR_MinCreepPedal_PxPy' */
    /* Outputs for Atomic SubSystem: '<S112>/SignalLatchOnWithReset' */
    for (i = 0; i < 3; i++)
    {
        /* Logic: '<S134>/OR1' incorporates:
         *  Logic: '<S112>/Logical1'
         *  Logic: '<S112>/Logical2'
         *  Logic: '<S134>/NOT'
         *  Logic: '<S134>/OR'
         *  UnitDelay: '<S134>/Unit Delay'
         */
        rtb_NotEqual1_b = ((VaCTCR_b_MinCreep_CreepSpdActv[(i)]) ||
                           (((VaCTCR_b_MinCreep_CreepSpdActv[(i)]) ||
                             (!rtb_UnitDelay_gv[i])) &&
                            (CTCR_ac_DW.UnitDelay_DSTATE_eu[i])));

        /* Update for UnitDelay: '<S134>/Unit Delay' */
        CTCR_ac_DW.UnitDelay_DSTATE_eu[i] = rtb_NotEqual1_b;

        /* Logic: '<S112>/Logical5' incorporates:
         *  Constant: '<S128>/Calib'
         */
        CTCR_ac_B.Logical5[i] = (rtb_NotEqual1_b && (KeCTCR_b_MinCreepActv));

        /* Logic: '<S134>/OR1' */
        rtb_UnitDelay_gv[i] = rtb_NotEqual1_b;
    }

    /* End of Outputs for SubSystem: '<S112>/SignalLatchOnWithReset' */

    /* Gain: '<S132>/Gain' */
    VeCTCR_M_MinCreepWheelBlend_ECM = VaCTCR_M_MinCreepWheelTrq[1];

    /* Gain: '<S133>/Gain' */
    CTCR_ac_B.Gain_c = VeCTCR_M_TransIntakeWhlTgt;

    /* Switch: '<S112>/Switch3' */
    if (rtb_UnitDelay_gv[0])
    {
        /* Switch: '<S112>/Switch3' */
        CTCR_ac_B.Switch3 = VaCTCR_M_MinCreepWheelTrq[0];
    }
    else
    {
        /* Switch: '<S112>/Switch3' incorporates:
         *  Constant: '<S112>/ConstantValue4'
         */
        CTCR_ac_B.Switch3 = -9999.0F;
    }

    /* End of Switch: '<S112>/Switch3' */

    /* Gain: '<S243>/Gain' */
    VeCTCR_M_TransIntakeFwTgt_Raw = rtb_Switch_h[0];

    /* Gain: '<S245>/Gain' */
    VeCTCR_M_MinPdlFw_Tact = rtb_Vector_a[1];

    /* Sum: '<S118>/Sum5' */
    VeCTCR_n_DeltaSpdBlended = VeCTCR_n_ActualSpd -
        rtb_TmpSignalConversionAtVeOHSR;

    /* Switch: '<S115>/Switch4' incorporates:
     *  Constant: '<S115>/ConstantValue1'
     *  Constant: '<S299>/Constant'
     *  Constant: '<S300>/Constant'
     *  Logic: '<S115>/Logical3'
     *  RelationalOperator: '<S115>/Comparison1'
     *  RelationalOperator: '<S115>/Comparison2'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeHS_e) != CeHSER_e_M2_State) &&
            (((uint32)rtb_TmpSignalConversionAtVeHS_e) != CeHSER_e_G2_State))
    {
        rtb_UnitDelay1_kf = 0.0F;
    }

    /* End of Switch: '<S115>/Switch4' */

    /* MinMax: '<S115>/MinMax1' incorporates:
     *  Constant: '<S115>/ConstantValue6'
     *  Lookup_n-D: '<S315>/Vector'
     *  SignalConversion generated from: '<S1>/VeOHSR_n_IdleSpdBlended'
     *  Sum: '<S115>/Sum1'
     *  Sum: '<S118>/Sum5'
     */
    VeCTCR_M_UndershootTrq_BfBlend = fmaxf(look2_iflf_binlcapw
        (VeCTCR_n_DeltaSpdBlended, rtb_TmpSignalConversionAtVeOHSR, ((const
        float32 *)&(KxCTCR_M_UnderShootPrtcn[0])), ((const float32 *)
        &(KyCTCR_M_UnderShootPrtcn[0])), ((const float32 *)
        &(KtCTCR_M_UnderShootPrtcn[0])), CTCR_ac_ConstP.Vector_maxIndex, 5U) -
        rtb_UnitDelay1_kf, 0.0F);

    /* RelationalOperator: '<S115>/Comparison7' incorporates:
     *  Constant: '<S303>/Constant'
     */
    rtb_NotEqual1_b = (CeFWDR_e_TfrCas4Low != ((uint32)
                        rtb_TmpSignalConversionAtVeFWDR));

    /* Switch: '<S115>/Switch3' incorporates:
     *  Constant: '<S115>/ConstantValue2'
     *  Constant: '<S301>/Constant'
     *  Constant: '<S302>/Constant'
     *  Constant: '<S304>/Constant'
     *  Inport: '<Root>/VeATRR_M_To_xSEMxUndSht'
     *  Logic: '<S115>/Logical1'
     *  Logic: '<S115>/Logical14'
     *  Logic: '<S115>/Logical2'
     *  Logic: '<S115>/Logical4'
     *  Logic: '<S115>/Logical5'
     *  RelationalOperator: '<S115>/Comparison'
     *  RelationalOperator: '<S115>/Comparison3'
     *  RelationalOperator: '<S115>/Comparison4'
     *  RelationalOperator: '<S115>/Equal3'
     *  SignalConversion generated from: '<S1>/VeOHSR_e_ILEState'
     */
    if ((VeCTCR_M_UndershootTrq_BfBlend > 0.0F) && (((((uint32)
            rtb_TmpSignalConversionAtVeOH_i) == CeOHSR_e_LaunchState) &&
            ((!VeCTCR_b_DsblTransIntTrq) || ((((uint32)
              rtb_TmpSignalConversionAtVeHS_e) != CeHSER_e_M1_State) &&
            (((uint32)rtb_TmpSignalConversionAtVeHS_e) != CeHSER_e_Neut_State))))
         && rtb_NotEqual1_b))
    {
        (void)Rte_Read_VeATRR_M_To_xSEMxUndSht_Value(&rtb_LowerIndex);

        /* Gain: '<S318>/Gain' incorporates:
         *  Inport: '<Root>/VeATRR_M_To_xSEMxUndSht'
         *  MinMax: '<S115>/MinMax2'
         *  Sum: '<S115>/Sum6'
         *  Switch: '<S115>/Switch1'
         */
        VaCTCR_M_MinCreep_DstntnTrqFW[0] = fmaxf(rtb_Switch3_ej, rtb_LowerIndex)
            + VeCTCR_M_UndershootTrq_BfBlend;
    }
    else
    {
        /* Gain: '<S318>/Gain' incorporates:
         *  Switch: '<S115>/Switch1'
         */
        VaCTCR_M_MinCreep_DstntnTrqFW[0] = rtb_Switch3_ej;
    }

    /* End of Switch: '<S115>/Switch3' */

    /* Gain: '<S318>/Gain' */
    VaCTCR_M_MinCreep_DstntnTrqFW[1] = VeCTCR_M_TransIntakeFwTgt_Raw;
    VaCTCR_M_MinCreep_DstntnTrqFW[2] = rtb_Switch3_ej;

    /* Switch: '<S115>/Switch9' incorporates:
     *  Constant: '<S115>/ConstantValue7'
     *  RelationalOperator: '<S115>/Comparison9'
     *  UnitDelay: '<S115>/UnitDelay2'
     */
    if (rtb_NotEqual1_b)
    {
        rtb_Switch1_bu = true;
    }
    else
    {
        rtb_Switch1_bu = (rtb_TmpSignalConversionAtVeTTQR >
                          CTCR_ac_DW.UnitDelay2_DSTATE_k);
    }

    /* End of Switch: '<S115>/Switch9' */

    /* Logic: '<S115>/Logical9' */
    VeCTCR_b_MinCreepFW_Actv = ((CTCR_ac_B.Logical5[0]) && rtb_Switch1_bu);

    /* UnitDelay: '<S115>/UnitDelay1' */
    rtb_UnitDelay1_kf = CTCR_ac_DW.UnitDelay1_DSTATE_g;

    /* Switch: '<S115>/Switch' incorporates:
     *  Constant: '<S115>/ConstantValue8'
     *  Constant: '<S312>/Calib'
     *  Logic: '<S115>/Logical12'
     *  Logic: '<S115>/Logical13'
     *  RelationalOperator: '<S115>/Comparison5'
     *  RelationalOperator: '<S115>/Comparison8'
     *  Sum: '<S115>/Sum3'
     */
    if (rtb_NotEqual1_b)
    {
        rtb_Switch1_bu = ((rtb_UnitDelay1_kf - VeCTCR_M_FWTrqReqMin_Arb) <=
                          -10.0F);
    }
    else
    {
        rtb_Switch1_bu = ((((rtb_UnitDelay1_kf - VeCTCR_M_FWTrqReqMin_Arb) <=
                            -10.0F) || (KeCTCR_b_ByPassMinCreepStepChck)) &&
                          (VeCTCR_M_MinPdlFw_Agr <
                           VeCTCR_M_MinCreepFWTrqTgt_WO_Offset));
    }

    /* End of Switch: '<S115>/Switch' */

    /* Outputs for Atomic SubSystem: '<S115>/SignalLatchOnWithReset' */
    /* Logic: '<S321>/OR1' incorporates:
     *  Logic: '<S115>/Logical6'
     *  Logic: '<S115>/Logical7'
     *  Logic: '<S321>/NOT'
     *  Logic: '<S321>/OR'
     *  UnitDelay: '<S321>/Unit Delay'
     */
    rtb_Switch1_bu = ((CTCR_ac_B.Logical5[0]) || (((CTCR_ac_B.Logical5[0]) ||
                        (!rtb_Switch1_bu)) && (CTCR_ac_DW.UnitDelay_DSTATE_b2u)));

    /* Update for UnitDelay: '<S321>/Unit Delay' */
    CTCR_ac_DW.UnitDelay_DSTATE_b2u = rtb_Switch1_bu;

    /* End of Outputs for SubSystem: '<S115>/SignalLatchOnWithReset' */

    /* Logic: '<S115>/Logical8' incorporates:
     *  Constant: '<S115>/ConstantValue9'
     *  RelationalOperator: '<S115>/Comparison6'
     *  Sum: '<S115>/Sum4'
     */
    VeCTCR_b_NotIn4LoFW_4 = (rtb_Switch1_bu && ((rtb_UnitDelay1_kf -
        VeCTCR_M_FWTrqReqMin_Arb) >= -10.0F));

    /* RelationalOperator: '<S115>/Comparison10' incorporates:
     *  Constant: '<S311>/Calib'
     */
    VeCTCR_b_NotIn4LoFW_3 = (rtb_UnitDelay1_kf >= KeCTCR_M_MinCreep_MinValidVal);

    /* RelationalOperator: '<S115>/Comparison11' */
    VeCTCR_b_NotIn4LoFW_2 = (VeCTCR_M_MinPdlFw_Agr <
        VeCTCR_M_MinCreepFWTrqTgt_WO_Offset);

    /* Logic: '<S115>/Logical11' */
    VeCTCR_b_NotIn4LoFW_1 = !CTCR_ac_B.Logical5[0];

    /* Switch: '<S115>/Switch8' */
    if (rtb_NotEqual1_b)
    {
        /* Switch: '<S115>/Switch8' */
        VeCTCR_b_MinCreepFW_CreepTorqueStart = VeCTCR_b_NotIn4LoFW_4;
    }
    else
    {
        /* Switch: '<S115>/Switch8' incorporates:
         *  Logic: '<S115>/Logical10'
         */
        VeCTCR_b_MinCreepFW_CreepTorqueStart = ((((VeCTCR_b_NotIn4LoFW_4) &&
            (VeCTCR_b_NotIn4LoFW_3)) && (VeCTCR_b_NotIn4LoFW_2)) &&
            (VeCTCR_b_NotIn4LoFW_1));
    }

    /* End of Switch: '<S115>/Switch8' */

    /* Switch: '<S115>/Switch6' incorporates:
     *  Switch: '<S115>/Switch7'
     */
    if (VeCTCR_b_MinCreepFW_Actv)
    {
        /* Switch: '<S115>/Switch6' incorporates:
         *  UnitDelay: '<S115>/UnitDelay'
         */
        rtb_UnitDelay1_kf = CTCR_ac_DW.UnitDelay_DSTATE_dn;
    }
    else if (VeCTCR_b_MinCreepFW_CreepTorqueStart)
    {
        /* Switch: '<S115>/Switch7' incorporates:
         *  Constant: '<S308>/Calib'
         *  Sum: '<S115>/Sum5'
         *  Switch: '<S115>/Switch6'
         */
        rtb_UnitDelay1_kf -= KeCTCR_M_MinCreepDelta;
    }
    else
    {
        /* Switch: '<S115>/Switch6' incorporates:
         *  Switch: '<S115>/Switch7'
         */
        rtb_UnitDelay1_kf = VeCTCR_M_FWTrqReqMin_Arb;
    }

    /* End of Switch: '<S115>/Switch6' */
    /* End of Outputs for SubSystem: '<S1>/CTCR_MinCreepPedal_PxPy' */

    /* Inport: '<Root>/VaETQR_n_EngCapability' */
    (void)Rte_Read_VaETQR_n_EngCapability_Value(tmpRead_2);

    /* Outputs for Function Call SubSystem: '<S1>/CTCR_MinCreepPedal_PxPy' */
    /* Switch: '<S115>/Switch1' incorporates:
     *  Constant: '<S115>/ConstantValue4'
     *  RelationalOperator: '<S115>/Equal1'
     */
    if (0.01F > rtb_TmpSignalConversionAtVeTINR)
    {
        /* Switch: '<S115>/Switch1' incorporates:
         *  Constant: '<S115>/ConstantValue3'
         */
        rtb_Switch1_lb = 0.0F;
    }
    else
    {
        /* Switch: '<S115>/Switch1' */
        rtb_Switch1_lb = rtb_UnitDelay1_kf;
    }

    /* End of Switch: '<S115>/Switch1' */

    /* MinMax: '<S115>/MinMax10' incorporates:
     *  MinMax: '<S115>/MinMax11'
     */
    rtb_TmpSignalConversionAtVeOH_m = fmaxf(rtb_TmpSignalConversionAtVeOH_m,
        rtb_TmpSignalConversionAtVeMSPR);

    /* Chart: '<S317>/Get_Data_Indexes ' incorporates:
     *  MinMax: '<S115>/MinMax10'
     *  SignalConversion: '<S6>/SignalConversion1'
     */
    /* Gateway: OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes  */
    /* During: OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes  */
    /* Entry Internal: OPTL_Dynamic1DBSearch16pts_ValAxis/Get_Data_Indexes  */
    /* Transition: '<S339>:2' */
    if (rtb_TmpSignalConversionAtVeOH_m >= tmpRead_2[8])
    {
        /* Transition: '<S339>:4' */
        if (rtb_TmpSignalConversionAtVeOH_m >= tmpRead_2[12])
        {
            /* Transition: '<S339>:7' */
            if (rtb_TmpSignalConversionAtVeOH_m >= tmpRead_2[14])
            {
                /* Transition: '<S339>:13' */
                if (rtb_TmpSignalConversionAtVeOH_m >= tmpRead_2[15])
                {
                    /* Transition: '<S339>:68' */
                    /* Transition: '<S339>:69' */
                    rtb_TmpSignalConversionAtVeMSPR = 15.0F;
                    rtb_LowerIndex = 14.0F;
                    rtb_Switch3_ej = CTCR_ac_fraction(tmpRead_2[15], tmpRead_2
                        [14], tmpRead_2[15]);
                }
                else
                {
                    /* Transition: '<S339>:63' */
                    rtb_TmpSignalConversionAtVeMSPR = 15.0F;
                    rtb_LowerIndex = 14.0F;
                    rtb_Switch3_ej = CTCR_ac_fraction(tmpRead_2[15], tmpRead_2
                        [14], rtb_TmpSignalConversionAtVeOH_m);

                    /* Transition: '<S339>:66' */
                }

                /* Transition: '<S339>:65' */
                /* Transition: '<S339>:64' */
                /* Transition: '<S339>:33' */
            }
            else
            {
                /* Transition: '<S339>:28' */
                if (rtb_TmpSignalConversionAtVeOH_m >= tmpRead_2[13])
                {
                    /* Transition: '<S339>:29' */
                    rtb_TmpSignalConversionAtVeMSPR = 14.0F;
                    rtb_LowerIndex = 13.0F;
                    rtb_Switch3_ej = CTCR_ac_fraction(tmpRead_2[14], tmpRead_2
                        [13], rtb_TmpSignalConversionAtVeOH_m);

                    /* Transition: '<S339>:6' */
                    /* Transition: '<S339>:32' */
                }
                else
                {
                    /* Transition: '<S339>:30' */
                    rtb_TmpSignalConversionAtVeMSPR = 13.0F;
                    rtb_LowerIndex = 12.0F;
                    rtb_Switch3_ej = CTCR_ac_fraction(tmpRead_2[13], tmpRead_2
                        [12], rtb_TmpSignalConversionAtVeOH_m);
                }

                /* Transition: '<S339>:18' */
                /* Transition: '<S339>:9' */
                /* Transition: '<S339>:33' */
            }
        }
        else
        {
            /* Transition: '<S339>:15' */
            if (rtb_TmpSignalConversionAtVeOH_m >= tmpRead_2[10])
            {
                /* Transition: '<S339>:20' */
                if (rtb_TmpSignalConversionAtVeOH_m >= tmpRead_2[11])
                {
                    /* Transition: '<S339>:22' */
                    rtb_TmpSignalConversionAtVeMSPR = 12.0F;
                    rtb_LowerIndex = 11.0F;
                    rtb_Switch3_ej = CTCR_ac_fraction(tmpRead_2[12], tmpRead_2
                        [11], rtb_TmpSignalConversionAtVeOH_m);

                    /* Transition: '<S339>:19' */
                    /* Transition: '<S339>:9' */
                    /* Transition: '<S339>:33' */
                }
                else
                {
                    /* Transition: '<S339>:23' */
                    rtb_TmpSignalConversionAtVeMSPR = 11.0F;
                    rtb_LowerIndex = 10.0F;
                    rtb_Switch3_ej = CTCR_ac_fraction(tmpRead_2[11], tmpRead_2
                        [10], rtb_TmpSignalConversionAtVeOH_m);

                    /* Transition: '<S339>:25' */
                    /* Transition: '<S339>:9' */
                    /* Transition: '<S339>:33' */
                }
            }
            else
            {
                /* Transition: '<S339>:21' */
                if (rtb_TmpSignalConversionAtVeOH_m >= tmpRead_2[9])
                {
                    /* Transition: '<S339>:24' */
                    rtb_TmpSignalConversionAtVeMSPR = 10.0F;
                    rtb_LowerIndex = 9.0F;
                    rtb_Switch3_ej = CTCR_ac_fraction(tmpRead_2[10], tmpRead_2[9],
                        rtb_TmpSignalConversionAtVeOH_m);

                    /* Transition: '<S339>:25' */
                    /* Transition: '<S339>:9' */
                    /* Transition: '<S339>:33' */
                }
                else
                {
                    /* Transition: '<S339>:59' */
                    rtb_TmpSignalConversionAtVeMSPR = 9.0F;
                    rtb_LowerIndex = 8.0F;
                    rtb_Switch3_ej = CTCR_ac_fraction(tmpRead_2[9], tmpRead_2[8],
                        rtb_TmpSignalConversionAtVeOH_m);

                    /* Transition: '<S339>:44' */
                }
            }
        }

        /* Transition: '<S339>:14' */
        /* Transition: '<S339>:56' */
        /* Transition: '<S339>:47' */
    }
    else
    {
        /* Transition: '<S339>:16' */
        if (rtb_TmpSignalConversionAtVeOH_m >= tmpRead_2[4])
        {
            /* Transition: '<S339>:17' */
            if (rtb_TmpSignalConversionAtVeOH_m >= tmpRead_2[5])
            {
                /* Transition: '<S339>:39' */
                if (rtb_TmpSignalConversionAtVeOH_m >= tmpRead_2[6])
                {
                    /* Transition: '<S339>:41' */
                    rtb_TmpSignalConversionAtVeMSPR = 7.0F;
                    rtb_LowerIndex = 6.0F;
                    rtb_Switch3_ej = CTCR_ac_fraction(tmpRead_2[7], tmpRead_2[6],
                        rtb_TmpSignalConversionAtVeOH_m);
                    if (rtb_TmpSignalConversionAtVeOH_m >= tmpRead_2[7])
                    {
                        /* Transition: '<S339>:58' */
                        rtb_TmpSignalConversionAtVeMSPR = 8.0F;
                        rtb_LowerIndex = 7.0F;
                        rtb_Switch3_ej = CTCR_ac_fraction(tmpRead_2[8],
                            tmpRead_2[7], rtb_TmpSignalConversionAtVeOH_m);

                        /* Transition: '<S339>:55' */
                        /* Transition: '<S339>:53' */
                    }
                    else
                    {
                        /* Transition: '<S339>:3' */
                    }

                    /* Transition: '<S339>:43' */
                    /* Transition: '<S339>:10' */
                }
                else
                {
                    /* Transition: '<S339>:36' */
                    rtb_TmpSignalConversionAtVeMSPR = 6.0F;
                    rtb_LowerIndex = 5.0F;
                    rtb_Switch3_ej = CTCR_ac_fraction(tmpRead_2[6], tmpRead_2[5],
                        rtb_TmpSignalConversionAtVeOH_m);

                    /* Transition: '<S339>:38' */
                    /* Transition: '<S339>:43' */
                    /* Transition: '<S339>:10' */
                }
            }
            else
            {
                /* Transition: '<S339>:37' */
                if (rtb_TmpSignalConversionAtVeOH_m >= tmpRead_2[4])
                {
                    /* Transition: '<S339>:40' */
                    rtb_TmpSignalConversionAtVeMSPR = 5.0F;
                    rtb_LowerIndex = 4.0F;
                    rtb_Switch3_ej = CTCR_ac_fraction(tmpRead_2[5], tmpRead_2[4],
                        rtb_TmpSignalConversionAtVeOH_m);

                    /* Transition: '<S339>:38' */
                    /* Transition: '<S339>:43' */
                    /* Transition: '<S339>:10' */
                }
                else
                {
                    /* Transition: '<S339>:46' */
                    rtb_TmpSignalConversionAtVeMSPR = 4.0F;
                    rtb_LowerIndex = 3.0F;
                    rtb_Switch3_ej = CTCR_ac_fraction(tmpRead_2[4], tmpRead_2[3],
                        rtb_TmpSignalConversionAtVeOH_m);

                    /* Transition: '<S339>:45' */
                }
            }

            /* Transition: '<S339>:42' */
            /* Transition: '<S339>:60' */
            /* Transition: '<S339>:61' */
            /* Transition: '<S339>:48' */
            /* Transition: '<S339>:56' */
            /* Transition: '<S339>:47' */
        }
        else
        {
            /* Transition: '<S339>:34' */
            if (rtb_TmpSignalConversionAtVeOH_m >= tmpRead_2[2])
            {
                /* Transition: '<S339>:49' */
                if (rtb_TmpSignalConversionAtVeOH_m >= tmpRead_2[3])
                {
                    /* Transition: '<S339>:54' */
                    /* Transition: '<S339>:52' */
                    rtb_TmpSignalConversionAtVeMSPR = 4.0F;
                    rtb_LowerIndex = 3.0F;
                    rtb_Switch3_ej = CTCR_ac_fraction(tmpRead_2[4], tmpRead_2[3],
                        rtb_TmpSignalConversionAtVeOH_m);
                }
                else
                {
                    /* Transition: '<S339>:35' */
                    rtb_TmpSignalConversionAtVeMSPR = 3.0F;
                    rtb_LowerIndex = 2.0F;
                    rtb_Switch3_ej = CTCR_ac_fraction(tmpRead_2[3], tmpRead_2[2],
                        rtb_TmpSignalConversionAtVeOH_m);

                    /* Transition: '<S339>:57' */
                }

                /* Transition: '<S339>:61' */
                /* Transition: '<S339>:48' */
                /* Transition: '<S339>:56' */
                /* Transition: '<S339>:47' */
            }
            else
            {
                /* Transition: '<S339>:50' */
                if (rtb_TmpSignalConversionAtVeOH_m >= tmpRead_2[1])
                {
                    /* Transition: '<S339>:51' */
                    rtb_TmpSignalConversionAtVeMSPR = 2.0F;
                    rtb_LowerIndex = 1.0F;
                    rtb_Switch3_ej = CTCR_ac_fraction(tmpRead_2[2], tmpRead_2[1],
                        rtb_TmpSignalConversionAtVeOH_m);

                    /* Transition: '<S339>:26' */
                    /* Transition: '<S339>:8' */
                }
                else
                {
                    /* Transition: '<S339>:62' */
                    if (rtb_TmpSignalConversionAtVeOH_m >= tmpRead_2[0])
                    {
                        /* Transition: '<S339>:27' */
                        rtb_TmpSignalConversionAtVeMSPR = 1.0F;
                        rtb_LowerIndex = 0.0F;
                        rtb_Switch3_ej = CTCR_ac_fraction(tmpRead_2[1],
                            tmpRead_2[0], rtb_TmpSignalConversionAtVeOH_m);

                        /* Transition: '<S339>:31' */
                        /* Transition: '<S339>:47' */
                    }
                    else
                    {
                        /* Transition: '<S339>:11' */
                        rtb_TmpSignalConversionAtVeMSPR = 1.0F;
                        rtb_LowerIndex = 0.0F;
                        rtb_Switch3_ej = CTCR_ac_fraction(tmpRead_2[1],
                            tmpRead_2[0], tmpRead_2[0]);
                    }
                }
            }
        }
    }

    /* End of Chart: '<S317>/Get_Data_Indexes ' */

    /* Switch: '<S115>/Switch5' incorporates:
     *  Constant: '<S307>/Calib'
     *  Inport: '<Root>/VaETQR_M_EngCapabilityMinOff'
     *  Selector: '<S115>/Selector'
     */
    /* Transition: '<S339>:5' */
    if (KaCTCR_b_UseEngCpcty[(rtb_TmpSignalConversionAtVeHS_e)])
    {
        /* Sum: '<S115>/Sum' incorporates:
         *  Inport: '<Root>/VeETQR_M_EngCapacityMinOff'
         */
        (void)Rte_Read_VeETQR_M_EngCapacityMinOff_Value(&rtb_Sum_pn);
    }
    else
    {
        (void)Rte_Read_VaETQR_M_EngCapabilityMinOff_Value(tmpRead_1);

        /* Selector: '<S316>/Selector4' incorporates:
         *  Inport: '<Root>/VaETQR_M_EngCapabilityMinOff'
         *  SignalConversion: '<S6>/SignalConversion'
         */
        rtb_Sum_d_tmp = tmpRead_1[(sint32)rtb_LowerIndex];

        /* Sum: '<S115>/Sum' incorporates:
         *  Product: '<S316>/Multiplication'
         *  Selector: '<S316>/Selector3'
         *  Selector: '<S316>/Selector4'
         *  SignalConversion: '<S6>/SignalConversion'
         *  Sum: '<S316>/Summation'
         *  Sum: '<S316>/Summation1'
         */
        rtb_Sum_pn = ((tmpRead_1[(sint32)rtb_TmpSignalConversionAtVeMSPR] -
                       rtb_Sum_d_tmp) * rtb_Switch3_ej) + rtb_Sum_d_tmp;
    }

    /* End of Switch: '<S115>/Switch5' */
    /* End of Outputs for SubSystem: '<S1>/CTCR_MinCreepPedal_PxPy' */

    /* Inport: '<Root>/VeABCR_P_HV_AccPwr' */
    (void)Rte_Read_VeABCR_P_HV_AccPwr_Value(&rtb_Vector_k0);

    /* Inport: '<Root>/VeOITR_M_OutTorqReqModTactMin' */
    (void)Rte_Read_VeOITR_M_OutTorqReqModTactMin_Value(&rtb_Gain_c);

    /* Outputs for Function Call SubSystem: '<S1>/CTCR_MinCreepPedal_PxPy' */
    /* Sum: '<S115>/Sum' incorporates:
     *  Inport: '<Root>/VeABCR_P_HV_AccPwr'
     *  Lookup_n-D: '<S313>/Vector'
     *  Lookup_n-D: '<S314>/Vector'
     */
    rtb_Sum_pn = (rtb_Sum_pn + look1_iflf_binlcapw(rtb_Vector_k0, ((const
                     float32 *)&(KxCTCR_M_DCLoadOffset[0])), ((const float32 *)
                    &(KtCTCR_M_DCLoadOffset[0])), 8U)) + look1_iflf_binlcapw
        (rtb_TmpSignalConversionAtVeOH_m, ((const float32 *)
          &(KxCTCR_M_RegenOffset[0])), ((const float32 *)&(KtCTCR_M_RegenOffset
           [0])), 8U);

    /* MinMax: '<S115>/MinMax12' */
    VeCTCR_M_SumMinTrqPwrTrnBF = fmaxf(rtb_Gain_c, rtb_Sum_pn);

    /* Gain: '<S319>/Gain' incorporates:
     *  MinMax: '<S115>/MinMax'
     */
    VaCTCR_M_MinCreep_StrtTrqFW[0] = rtb_Switch1_lb;
    VaCTCR_M_MinCreep_StrtTrqFW[1] = rtb_Switch1_lb;
    VaCTCR_M_MinCreep_StrtTrqFW[2] = fminf(VeCTCR_M_MinPdlFw_Tact,
        VeCTCR_M_SumMinTrqPwrTrnBF);
    for (i = 0; i < 3; i++)
    {
        /* Sum: '<S298>/Sum3' incorporates:
         *  Product: '<S298>/Product'
         *  Sum: '<S298>/Sum2'
         */
        CTCR_ac_B.Sum3[i] = ((VaCTCR_M_MinCreep_DstntnTrqFW[(i)] -
                              VaCTCR_M_MinCreep_StrtTrqFW[(i)]) *
                             rtb_TmpSignalConversionAtVeTTQR) +
            VaCTCR_M_MinCreep_StrtTrqFW[(i)];
    }

    /* Sum: '<S305>/Sum' */
    rtb_TmpSignalConversionAtVeTTIR = VeCTCR_M_SumMinTrqPwrTrnBF -
        rtb_TmpSignalConversionAtVeTTIR;

    /* Outputs for Atomic SubSystem: '<S305>/VariantSubsystem' */
#if Rte_SysCon_Variant_CTCR_RTC_Imp_On

    /* Outputs for Atomic SubSystem: '<S323>/RTC_on' */
    /* Gain: '<S332>/Gain' incorporates:
     *  Lookup_n-D: '<S334>/Vector'
     *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
     */
    rtb_Gain_c = 0.5F * look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeVS_j,
        (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsB_KxHSCR_r_TCC_TturbFromNC2_CoeffsB
         ()),
        (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsB_KtHSCR_r_TCC_TturbFromNC2_CoeffsB
         ()), 21U);

    /* Lookup_n-D: '<S333>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
     */
    rtb_Vector_k0 = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeVS_j,
        (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsA_KxHSCR_r_TCC_TturbFromNC2_CoeffsA
         ()),
        (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsA_KtHSCR_r_TCC_TturbFromNC2_CoeffsA
         ()), 21U);

    /* Outputs for Atomic SubSystem: '<S332>/Protected Division1' */
    /* Switch: '<S336>/Switch1' incorporates:
     *  Constant: '<S336>/Constant Value'
     *  Constant: '<S336>/Constant Value1'
     *  Constant: '<S336>/Constant Value2'
     *  Constant: '<S336>/Constant Value3'
     *  Logic: '<S336>/AND'
     *  RelationalOperator: '<S336>/Greater Than or Equal '
     *  RelationalOperator: '<S336>/Greater Than or Equal 1'
     *  RelationalOperator: '<S336>/Not Equal'
     *  RelationalOperator: '<S336>/Not Equal1'
     *  Switch: '<S336>/Switch2'
     *  Switch: '<S336>/Switch3'
     */
    if ((rtb_Gain_c != 0.0F) && (rtb_Vector_k0 != 0.0F))
    {
        /* Switch: '<S336>/Switch1' incorporates:
         *  Product: '<S336>/Division'
         */
        rtb_Switch1_am = rtb_Gain_c / rtb_Vector_k0;
    }
    else if (rtb_Gain_c > 0.0F)
    {
        /* Switch: '<S336>/Switch2' incorporates:
         *  Constant: '<S336>/MAXFLOAT'
         *  Switch: '<S336>/Switch1'
         */
        rtb_Switch1_am = 3.402823466E+38F;
    }
    else if (rtb_Gain_c < 0.0F)
    {
        /* Switch: '<S336>/Switch3' incorporates:
         *  Constant: '<S336>/MINFLOAT'
         *  Switch: '<S336>/Switch1'
         *  Switch: '<S336>/Switch2'
         */
        rtb_Switch1_am = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S336>/Switch1' incorporates:
         *  Constant: '<S336>/Constant Value4'
         *  Switch: '<S336>/Switch2'
         *  Switch: '<S336>/Switch3'
         */
        rtb_Switch1_am = 0.0F;
    }

    /* End of Switch: '<S336>/Switch1' */
    /* End of Outputs for SubSystem: '<S332>/Protected Division1' */

    /* Product: '<S332>/Product1' */
    rtb_Gain_c *= rtb_Gain_c;

    /* Outputs for Atomic SubSystem: '<S332>/Protected Division2' */
    /* Switch: '<S337>/Switch1' incorporates:
     *  Constant: '<S337>/Constant Value'
     *  Constant: '<S337>/Constant Value1'
     *  Constant: '<S337>/Constant Value2'
     *  Constant: '<S337>/Constant Value3'
     *  Logic: '<S337>/AND'
     *  RelationalOperator: '<S337>/Greater Than or Equal '
     *  RelationalOperator: '<S337>/Greater Than or Equal 1'
     *  RelationalOperator: '<S337>/Not Equal'
     *  RelationalOperator: '<S337>/Not Equal1'
     *  Switch: '<S337>/Switch2'
     *  Switch: '<S337>/Switch3'
     */
    if ((rtb_Gain_c != 0.0F) && (rtb_Vector_k0 != 0.0F))
    {
        /* Switch: '<S337>/Switch1' incorporates:
         *  Product: '<S337>/Division'
         */
        rtb_Gain_c /= rtb_Vector_k0;
    }
    else if (rtb_Gain_c > 0.0F)
    {
        /* Switch: '<S337>/Switch2' incorporates:
         *  Constant: '<S337>/MAXFLOAT'
         *  Switch: '<S337>/Switch1'
         */
        rtb_Gain_c = 3.402823466E+38F;
    }
    else if (rtb_Gain_c < 0.0F)
    {
        /* Switch: '<S337>/Switch3' incorporates:
         *  Constant: '<S337>/MINFLOAT'
         *  Switch: '<S337>/Switch1'
         *  Switch: '<S337>/Switch2'
         */
        rtb_Gain_c = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S337>/Switch1' incorporates:
         *  Constant: '<S337>/Constant Value4'
         *  Switch: '<S337>/Switch2'
         *  Switch: '<S337>/Switch3'
         */
        rtb_Gain_c = 0.0F;
    }

    /* End of Switch: '<S337>/Switch1' */
    /* End of Outputs for SubSystem: '<S332>/Protected Division2' */

    /* Outputs for Atomic SubSystem: '<S332>/Protected Division4' */
    /* Switch: '<S338>/Switch1' incorporates:
     *  Constant: '<S338>/Constant Value1'
     *  RelationalOperator: '<S338>/Not Equal1'
     */
    if (rtb_Vector_k0 != 0.0F)
    {
        /* Switch: '<S338>/Switch1' incorporates:
         *  Constant: '<S332>/Constant Value2'
         *  Product: '<S338>/Division'
         */
        rtb_Vector_k0 = 1.0F / rtb_Vector_k0;
    }
    else
    {
        /* Switch: '<S338>/Switch1' */
        rtb_Vector_k0 = 3.402823466E+38F;
    }

    /* End of Switch: '<S338>/Switch1' */
    /* End of Outputs for SubSystem: '<S332>/Protected Division4' */

    /* Signum: '<S331>/Signum' */
    if (rtb_Vector_k0 < 0.0F)
    {
        rtb_TmpSignalConversionAtVeOH_m = -1.0F;
    }
    else if (rtb_Vector_k0 > 0.0F)
    {
        rtb_TmpSignalConversionAtVeOH_m = 1.0F;
    }
    else
    {
        rtb_TmpSignalConversionAtVeOH_m = rtb_Vector_k0;
    }

    /* End of Signum: '<S331>/Signum' */

    /* Sum: '<S331>/Sum3' incorporates:
     *  Constant: '<S331>/Constant Value'
     *  Gain: '<S332>/Gain1'
     *  Lookup_n-D: '<S335>/Vector'
     *  MinMax: '<S331>/MinMax1'
     *  Product: '<S331>/Product'
     *  Product: '<S331>/Product1'
     *  SignalConversion generated from: '<S1>/VeVSDR_n_NTurb'
     *  Sqrt: '<S331>/Square Root'
     *  Sum: '<S331>/Sum2'
     *  Sum: '<S332>/Sum1'
     */
    rtb_Switch1_am = ((sqrtf(fmaxf((rtb_TmpSignalConversionAtVeTTIR -
                          (look1_iflf_binlcapw(rtb_TmpSignalConversionAtVeVS_j,
                            (Rte_Prm_KxHSCR_r_TCC_TturbFromNC2_CoeffsC_KxHSCR_r_TCC_TturbFromNC2_CoeffsC
        ()), (Rte_Prm_KtHSCR_r_TCC_TturbFromNC2_CoeffsC_KtHSCR_r_TCC_TturbFromNC2_CoeffsC
              ()), 3U) - rtb_Gain_c)) * rtb_Vector_k0, 0.0F)) *
                       rtb_TmpSignalConversionAtVeOH_m) + (-rtb_Switch1_am)) +
        rtb_TmpSignalConversionAtVeVS_j;

    /* Outputs for Atomic SubSystem: '<S327>/Protected Division1' */
    /* Switch: '<S329>/Switch1' incorporates:
     *  Constant: '<S329>/Constant Value'
     *  Constant: '<S329>/Constant Value1'
     *  Constant: '<S329>/Constant Value2'
     *  Constant: '<S329>/Constant Value3'
     *  Logic: '<S329>/AND'
     *  RelationalOperator: '<S329>/Greater Than or Equal '
     *  RelationalOperator: '<S329>/Greater Than or Equal 1'
     *  RelationalOperator: '<S329>/Not Equal'
     *  RelationalOperator: '<S329>/Not Equal1'
     *  Switch: '<S329>/Switch2'
     *  Switch: '<S329>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeVS_j != 0.0F) && (rtb_Switch1_am != 0.0F))
    {
        /* Switch: '<S329>/Switch1' incorporates:
         *  Product: '<S329>/Division'
         */
        rtb_Switch1_am = rtb_TmpSignalConversionAtVeVS_j / rtb_Switch1_am;
    }
    else if (rtb_TmpSignalConversionAtVeVS_j > 0.0F)
    {
        /* Switch: '<S329>/Switch2' incorporates:
         *  Constant: '<S329>/MAXFLOAT'
         *  Switch: '<S329>/Switch1'
         */
        rtb_Switch1_am = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeVS_j < 0.0F)
    {
        /* Switch: '<S329>/Switch3' incorporates:
         *  Constant: '<S329>/MINFLOAT'
         *  Switch: '<S329>/Switch1'
         *  Switch: '<S329>/Switch2'
         */
        rtb_Switch1_am = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S329>/Switch1' incorporates:
         *  Constant: '<S329>/Constant Value4'
         *  Switch: '<S329>/Switch2'
         *  Switch: '<S329>/Switch3'
         */
        rtb_Switch1_am = 0.0F;
    }

    /* End of Switch: '<S329>/Switch1' */
    /* End of Outputs for SubSystem: '<S327>/Protected Division1' */

    /* VariantMerge generated from: '<S323>/T_turb' incorporates:
     *  Lookup_n-D: '<S328>/Vector'
     *  Product: '<S326>/Product'
     *  Product: '<S327>/Product2'
     *  Sum: '<S326>/Sum'
     *  Sum: '<S326>/Sum1'
     *  Switch: '<S329>/Switch1'
     */
    rtb_Switch1_am = (((rtb_TmpSignalConversionAtVeTTIR * look1_iflf_binlcapw
                        (rtb_Switch1_am,
                         (Rte_Prm_KxHSCR_r_TCC_TorqRatio_KxHSCR_r_TCC_TorqRatio()),
                         (Rte_Prm_KtHSCR_r_TCC_TorqRatio_KtHSCR_r_TCC_TorqRatio()),
                         17U)) - rtb_TmpSignalConversionAtVeTTIR) *
                      rtb_TmpSignalConversionAtVeTC_j) +
        rtb_TmpSignalConversionAtVeTTIR;

    /* End of Outputs for SubSystem: '<S323>/RTC_on' */
#else

    /* Outputs for Atomic SubSystem: '<S323>/RTC_off' */
    /* VariantMerge generated from: '<S323>/T_turb' incorporates:
     *  Inport: '<S324>/T_imp'
     */
    rtb_Switch1_am = rtb_TmpSignalConversionAtVeTTIR;

    /* End of Outputs for SubSystem: '<S323>/RTC_off' */
#endif

    /* End of Outputs for SubSystem: '<S305>/VariantSubsystem' */

    /* Switch: '<S305>/Switch1' incorporates:
     *  Constant: '<S322>/Calib'
     */
    if (Rte_Prm_HeATRR_b_RTC_Enbl_HeATRR_b_RTC_Enbl())
    {
        /* Switch: '<S305>/Switch1' incorporates:
         *  Product: '<S305>/Multiplication2'
         */
        rtb_Switch1_bd = rtb_Switch1_am * rtb_TmpSignalConversionAtVeTI_e;
    }
    else
    {
        /* Switch: '<S305>/Switch1' incorporates:
         *  Product: '<S305>/Multiplication1'
         */
        rtb_Switch1_bd = rtb_TmpSignalConversionAtVeTTIR *
            rtb_TmpSignalConversionAtVeTINR;
    }

    /* End of Switch: '<S305>/Switch1' */

    /* Sum: '<S115>/Sum2' */
    rtb_TmpSignalConversionAtVeTI_e = CTCR_ac_B.Sum3[1] - CTCR_ac_B.Sum3[0];

    /* Outputs for Atomic SubSystem: '<S115>/Hysteresis1' */
    /* Switch: '<S306>/Switch1' incorporates:
     *  Constant: '<S310>/Calib'
     *  RelationalOperator: '<S306>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeTI_e > KeCTCR_M_MinCreepFWTrqResEnblThrsh)
    {
        /* Switch: '<S306>/Switch1' incorporates:
         *  Constant: '<S306>/Constant Value'
         */
        rtb_NotEqual1_b = true;
    }
    else
    {
        /* Switch: '<S306>/Switch1' incorporates:
         *  Constant: '<S309>/Calib'
         *  RelationalOperator: '<S306>/Greater  Than1'
         *  UnitDelay: '<S306>/Unit Delay'
         */
        rtb_NotEqual1_b = ((rtb_TmpSignalConversionAtVeTI_e >=
                            KeCTCR_M_MinCreepFWTrqResDsblThrsh) &&
                           (CTCR_ac_DW.UnitDelay_DSTATE_lf));
    }

    /* End of Switch: '<S306>/Switch1' */

    /* Update for UnitDelay: '<S306>/Unit Delay' */
    CTCR_ac_DW.UnitDelay_DSTATE_lf = rtb_NotEqual1_b;

    /* End of Outputs for SubSystem: '<S115>/Hysteresis1' */

    /* Logic: '<S115>/Logical15' incorporates:
     *  Constant: '<S115>/ConstantValue10'
     *  RelationalOperator: '<S115>/Comparison12'
     */
    CTCR_ac_B.Logical15 = ((rtb_Switch1_bu && rtb_NotEqual1_b) &&
                           (rtb_TmpSignalConversionAtVeTINR > 0.01F));

    /* MinMax: '<S115>/MinMax13' */
    CTCR_ac_B.MinMax13 = fminf(rtb_Switch1_bd, rtb_TmpSignalConversionAtVeDT_g);

    /* Gain: '<S320>/Gain' */
    CTCR_ac_B.Gain_cx = CTCR_ac_B.Sum3[2];

    /* Switch: '<S115>/Switch2' */
    if (rtb_Switch1_bu)
    {
        /* Switch: '<S115>/Switch2' */
        CTCR_ac_B.Switch2 = CTCR_ac_B.Sum3[0];
    }
    else
    {
        /* Switch: '<S115>/Switch2' incorporates:
         *  Constant: '<S115>/ConstantValue5'
         */
        CTCR_ac_B.Switch2 = -9999.0F;
    }

    /* End of Switch: '<S115>/Switch2' */

    /* SignalConversion generated from: '<S6>/CTCR_b_MinCreepEnable_ECM' */
    CTCR_ac_B.OutportBufferForCTCR_b_MinCreep = CTCR_ac_B.Logical5[2];

    /* Gain: '<S116>/Gain' */
    CTCR_ac_B.Gain_n3 = rtb_Comparison4_g;

    /* Gain: '<S117>/Gain' */
    CTCR_ac_B.Gain_dx = rtb_TmpSignalConversionAtVeTTQR;

    /* Update for UnitDelay: '<S257>/UnitDelay1' */
    CTCR_ac_DW.UnitDelay1_DSTATE_o = rtb_Gain;

    /* Update for UnitDelay: '<S256>/UnitDelay1' */
    CTCR_ac_DW.UnitDelay1_DSTATE_j = VeCTCR_dm_BrkPdlGrad;

    /* Update for UnitDelay: '<S256>/UnitDelay' */
    CTCR_ac_DW.UnitDelay_DSTATE_b = rtb_TmpSignalConversionAtVeATRR;

    /* Update for UnitDelay: '<S257>/UnitDelay' */
    CTCR_ac_DW.UnitDelay_DSTATE_hp = rtb_TmpSignalConversionAtVeVSDR;

    /* Update for UnitDelay: '<S242>/Unit Delay1' */
    CTCR_ac_DW.UnitDelay1_DSTATE_ms = rtb_UnitDelay_gv[2];

    /* Update for UnitDelay: '<S242>/UnitDelay' */
    CTCR_ac_DW.UnitDelay_DSTATE_n = VeCTCR_r_PedalFreezeBF;
    for (i = 0; i < 3; i++)
    {
        /* Update for UnitDelay: '<S242>/Unit Delay' */
        CTCR_ac_DW.UnitDelay_DSTATE_m[i] = rtb_Sum1_p0[i];

        /* Update for UnitDelay: '<S112>/UnitDelay3' */
        CTCR_ac_DW.UnitDelay3_DSTATE_l[i] = rtb_UnitDelay_gv[i];
    }

    for (i = 0; i < 2; i++)
    {
        /* Update for UnitDelay: '<S112>/UnitDelay1' */
        CTCR_ac_DW.UnitDelay1_DSTATE_ej[i] = VaCTCR_M_MinCreepWheelTrq[(i)];

        /* Update for UnitDelay: '<S112>/UnitDelay' */
        CTCR_ac_DW.UnitDelay_DSTATE_ef[i] = VaCTCR_M_MinCreep_TrqStrtSrc[(i)];
    }

    /* Update for UnitDelay: '<S112>/UnitDelay2' */
    CTCR_ac_DW.UnitDelay2_DSTATE_j = VaCTCR_r_MinCreepBFOne[1];

    /* Update for UnitDelay: '<S112>/UnitDelay4' */
    for (i = 0; i < 3; i++)
    {
        CTCR_ac_DW.UnitDelay4_DSTATE[i] = rtb_UnitDelay_gv[i];
    }

    /* End of Update for UnitDelay: '<S112>/UnitDelay4' */

    /* Update for UnitDelay: '<S115>/UnitDelay' */
    CTCR_ac_DW.UnitDelay_DSTATE_dn = rtb_UnitDelay1_kf;

    /* Update for UnitDelay: '<S115>/UnitDelay2' */
    CTCR_ac_DW.UnitDelay2_DSTATE_k = rtb_TmpSignalConversionAtVeTTQR;

    /* Update for UnitDelay: '<S115>/UnitDelay1' */
    CTCR_ac_DW.UnitDelay1_DSTATE_g = CTCR_ac_B.Sum3[0];

    /* End of Outputs for SubSystem: '<S1>/CTCR_MinCreepPedal_PxPy' */

    /* Outputs for Function Call SubSystem: '<S1>/CTCR_AeCoast_PxPy' */
    /* Outputs for Atomic SubSystem: '<S8>/Hysteresis1' */
    /* Switch: '<S25>/Switch1' incorporates:
     *  Constant: '<S30>/Calib'
     *  RelationalOperator: '<S25>/Greater  Than'
     */
    if (VeCTCR_r_AeCoastFactorRaw > KeCTCR_r_AecoastBlndMinCrpFctRSP)
    {
        /* Switch: '<S25>/Switch1' incorporates:
         *  Constant: '<S25>/Constant Value'
         */
        rtb_Comparison4_g = true;
    }
    else
    {
        /* Switch: '<S25>/Switch1' incorporates:
         *  Constant: '<S29>/Calib'
         *  RelationalOperator: '<S25>/Greater  Than1'
         *  UnitDelay: '<S25>/Unit Delay'
         */
        rtb_Comparison4_g = ((VeCTCR_r_AeCoastFactorRaw >=
                              KeCTCR_r_AecoastBlndMinCrpFctLSP) &&
                             (CTCR_ac_DW.UnitDelay_DSTATE_ia));
    }

    /* End of Switch: '<S25>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/Hysteresis1' */
    /* End of Outputs for SubSystem: '<S1>/CTCR_AeCoast_PxPy' */

    /* Inport: '<Root>/VeFWDR_r_TCaseRatio' */
    (void)Rte_Read_VeFWDR_r_TCaseRatio_Value(&tmpRead_0);

    /* Inport: '<Root>/VeFWDR_r_Axle_Ratio' */
    (void)Rte_Read_VeFWDR_r_Axle_Ratio_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S1>/CTCR_AeCoast_PxPy' */
    /* Outputs for Atomic SubSystem: '<S8>/Hysteresis1' */
    /* Update for UnitDelay: '<S25>/Unit Delay' */
    CTCR_ac_DW.UnitDelay_DSTATE_ia = rtb_Comparison4_g;

    /* End of Outputs for SubSystem: '<S8>/Hysteresis1' */

    /* Outputs for Atomic SubSystem: '<S8>/EdgeRising' */
    /* Logic: '<S24>/OR1' incorporates:
     *  UnitDelay: '<S24>/Unit Delay'
     */
    rtb_NotEqual1_b = !CTCR_ac_DW.UnitDelay_DSTATE_b3;

    /* Update for UnitDelay: '<S24>/Unit Delay' */
    CTCR_ac_DW.UnitDelay_DSTATE_b3 = rtb_Comparison4_g;

    /* End of Outputs for SubSystem: '<S8>/EdgeRising' */

    /* Product: '<S8>/Product1' */
    rtb_TmpSignalConversionAtVeVSDR = tmpRead * tmpRead_0;

    /* Outputs for Atomic SubSystem: '<S8>/ProtectedDivision1' */
    /* Switch: '<S32>/Switch1' incorporates:
     *  Constant: '<S32>/Constant Value'
     *  Constant: '<S32>/Constant Value1'
     *  Constant: '<S32>/Constant Value2'
     *  Constant: '<S32>/Constant Value3'
     *  Logic: '<S32>/AND'
     *  RelationalOperator: '<S32>/Greater Than or Equal '
     *  RelationalOperator: '<S32>/Greater Than or Equal 1'
     *  RelationalOperator: '<S32>/Not Equal'
     *  RelationalOperator: '<S32>/Not Equal1'
     *  Switch: '<S32>/Switch2'
     *  Switch: '<S32>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeTINR != 0.0F) &&
            (rtb_TmpSignalConversionAtVeVSDR != 0.0F))
    {
        /* Switch: '<S32>/Switch1' incorporates:
         *  Product: '<S32>/Division'
         */
        rtb_TmpSignalConversionAtVeVSDR = rtb_TmpSignalConversionAtVeTINR /
            rtb_TmpSignalConversionAtVeVSDR;
    }
    else if (rtb_TmpSignalConversionAtVeTINR > 0.0F)
    {
        /* Switch: '<S32>/Switch2' incorporates:
         *  Constant: '<S32>/MAXFLOAT'
         *  Switch: '<S32>/Switch1'
         */
        rtb_TmpSignalConversionAtVeVSDR = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeTINR < 0.0F)
    {
        /* Switch: '<S32>/Switch3' incorporates:
         *  Constant: '<S32>/MINFLOAT'
         *  Switch: '<S32>/Switch1'
         *  Switch: '<S32>/Switch2'
         */
        rtb_TmpSignalConversionAtVeVSDR = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S32>/Switch1' incorporates:
         *  Constant: '<S32>/Constant Value4'
         *  Switch: '<S32>/Switch2'
         *  Switch: '<S32>/Switch3'
         */
        rtb_TmpSignalConversionAtVeVSDR = 0.0F;
    }

    /* End of Switch: '<S32>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/ProtectedDivision1' */

    /* Outputs for Atomic SubSystem: '<S8>/ProtectedDivision3' */
    /* Switch: '<S34>/Switch1' incorporates:
     *  Constant: '<S31>/Calib'
     *  Constant: '<S34>/Constant Value'
     *  Constant: '<S34>/Constant Value1'
     *  Constant: '<S34>/Constant Value2'
     *  Constant: '<S34>/Constant Value3'
     *  Logic: '<S34>/AND'
     *  RelationalOperator: '<S34>/Greater Than or Equal '
     *  RelationalOperator: '<S34>/Greater Than or Equal 1'
     *  RelationalOperator: '<S34>/Not Equal'
     *  RelationalOperator: '<S34>/Not Equal1'
     *  Switch: '<S34>/Switch2'
     *  Switch: '<S34>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeVSDR != 0.0F) && (KeCTCR_r_FirstGearRatio !=
         0.0F))
    {
        /* Switch: '<S34>/Switch1' incorporates:
         *  Product: '<S34>/Division'
         */
        rtb_TmpSignalConversionAtVeVSDR /= KeCTCR_r_FirstGearRatio;
    }
    else if (rtb_TmpSignalConversionAtVeVSDR > 0.0F)
    {
        /* Switch: '<S34>/Switch2' incorporates:
         *  Constant: '<S34>/MAXFLOAT'
         *  Switch: '<S34>/Switch1'
         */
        rtb_TmpSignalConversionAtVeVSDR = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeVSDR < 0.0F)
    {
        /* Switch: '<S34>/Switch3' incorporates:
         *  Constant: '<S34>/MINFLOAT'
         *  Switch: '<S34>/Switch1'
         *  Switch: '<S34>/Switch2'
         */
        rtb_TmpSignalConversionAtVeVSDR = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S34>/Switch1' incorporates:
         *  Constant: '<S34>/Constant Value4'
         *  Switch: '<S34>/Switch2'
         *  Switch: '<S34>/Switch3'
         */
        rtb_TmpSignalConversionAtVeVSDR = 0.0F;
    }

    /* End of Switch: '<S34>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/ProtectedDivision3' */

    /* Product: '<S8>/Product3' */
    rtb_TmpSignalConversionAtVeVSDR *= rtb_TmpSignalConversionAtVeCSVR;

    /* Outputs for Atomic SubSystem: '<S8>/EdgeRising' */
    /* Switch: '<S8>/Switch4' incorporates:
     *  Constant: '<S26>/Calib'
     *  Logic: '<S24>/AND'
     *  Logic: '<S8>/LogicalOperator'
     *  RelationalOperator: '<S8>/RelationalOperator1'
     *  UnitDelay: '<S8>/UnitDelay'
     */
    if ((rtb_TmpSignalConversionAtVeVSDR >= KeCTCR_n_OutputMinThreshold) &&
            (rtb_Comparison4_g && rtb_NotEqual1_b))
    {
        rtb_TmpSignalConversionAtVeTTQR = rtb_TmpSignalConversionAtVeVSDR;
    }
    else
    {
        rtb_TmpSignalConversionAtVeTTQR = CTCR_ac_DW.UnitDelay_DSTATE_g;
    }

    /* End of Switch: '<S8>/Switch4' */
    /* End of Outputs for SubSystem: '<S8>/EdgeRising' */

    /* MinMax: '<S8>/MinMax2' incorporates:
     *  Constant: '<S27>/Calib'
     *  Constant: '<S28>/Calib'
     *  Constant: '<S8>/ConstantValue3'
     *  MinMax: '<S8>/MinMax3'
     *  Sum: '<S8>/Sum'
     */
    VeCTCR_n_AeCoastBlendInitSpd = fmaxf(fmaxf
        (KeCTCR_n_OutputTargetCreepSpdOffset, 0.0F) +
        KeCTCR_n_OutputTargetCreepSpd, rtb_TmpSignalConversionAtVeTTQR);

    /* Sum: '<S8>/Sum1' */
    rtb_TmpSignalConversionAtVeVSDR = VeCTCR_n_AeCoastBlendInitSpd -
        rtb_TmpSignalConversionAtVeVSDR;

    /* Sum: '<S8>/Sum3' incorporates:
     *  Constant: '<S27>/Calib'
     */
    VeCTCR_n_AeCoastDeltaSpd = VeCTCR_n_AeCoastBlendInitSpd -
        KeCTCR_n_OutputTargetCreepSpd;

    /* Outputs for Atomic SubSystem: '<S8>/ProtectedDivision2' */
    /* Switch: '<S33>/Switch1' incorporates:
     *  Constant: '<S33>/Constant Value'
     *  Constant: '<S33>/Constant Value1'
     *  Constant: '<S33>/Constant Value2'
     *  Constant: '<S33>/Constant Value3'
     *  Logic: '<S33>/AND'
     *  RelationalOperator: '<S33>/Greater Than or Equal '
     *  RelationalOperator: '<S33>/Greater Than or Equal 1'
     *  RelationalOperator: '<S33>/Not Equal'
     *  RelationalOperator: '<S33>/Not Equal1'
     *  Switch: '<S33>/Switch2'
     *  Switch: '<S33>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeVSDR != 0.0F) && (VeCTCR_n_AeCoastDeltaSpd
            != 0.0F))
    {
        /* Switch: '<S33>/Switch1' incorporates:
         *  Product: '<S33>/Division'
         */
        VeCTCR_r_AeCoastFactorCalc = rtb_TmpSignalConversionAtVeVSDR /
            VeCTCR_n_AeCoastDeltaSpd;
    }
    else if (rtb_TmpSignalConversionAtVeVSDR > 0.0F)
    {
        /* Switch: '<S33>/Switch2' incorporates:
         *  Constant: '<S33>/MAXFLOAT'
         *  Switch: '<S33>/Switch1'
         */
        VeCTCR_r_AeCoastFactorCalc = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeVSDR < 0.0F)
    {
        /* Switch: '<S33>/Switch3' incorporates:
         *  Constant: '<S33>/MINFLOAT'
         *  Switch: '<S33>/Switch1'
         *  Switch: '<S33>/Switch2'
         */
        VeCTCR_r_AeCoastFactorCalc = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S33>/Switch1' incorporates:
         *  Constant: '<S33>/Constant Value4'
         *  Switch: '<S33>/Switch2'
         *  Switch: '<S33>/Switch3'
         */
        VeCTCR_r_AeCoastFactorCalc = 0.0F;
    }

    /* End of Switch: '<S33>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/ProtectedDivision2' */

    /* MinMax: '<S8>/MinMax5' incorporates:
     *  Constant: '<S8>/ConstantValue4'
     *  Constant: '<S8>/ConstantValue5'
     *  MinMax: '<S8>/MinMax6'
     *  UnitDelay: '<S8>/UnitDelay2'
     */
    VeCTCR_r_AeCoastFactorSpdBased = fminf(fminf(1.0F, VeCTCR_r_AeCoastFactorRaw),
        fmaxf(fmaxf(CTCR_ac_DW.UnitDelay2_DSTATE, VeCTCR_r_AeCoastFactorCalc),
              0.0F));

    /* Lookup_n-D: '<S20>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    VeCTCR_r_AeCoastAccelPedlFac = look1_iflf_binlcapw
        (rtb_TmpSignalConversionAtVeAPSR, ((const float32 *)
          &(KxCTCR_r_AeCoastAccelPedlFac[0])), ((const float32 *)
          &(KtCTCR_r_AeCoastAccelPedlFac[0])), 4U);

    /* Outputs for Atomic SubSystem: '<S4>/Hysteresis1' */
    /* Switch: '<S13>/Switch1' incorporates:
     *  Constant: '<S17>/Calib'
     *  RelationalOperator: '<S13>/Greater  Than'
     */
    if (VeCTCR_r_AeCoastFactorSpdBased > KeCTCR_r_AecoastBlndSpdFctRSP)
    {
        /* Switch: '<S13>/Switch1' incorporates:
         *  Constant: '<S13>/Constant Value'
         */
        VeCTCR_b_EnblPdlFac = true;
    }
    else
    {
        /* Switch: '<S13>/Switch1' incorporates:
         *  Constant: '<S16>/Calib'
         *  RelationalOperator: '<S13>/Greater  Than1'
         *  UnitDelay: '<S13>/Unit Delay'
         */
        VeCTCR_b_EnblPdlFac = ((VeCTCR_r_AeCoastFactorSpdBased >=
                                KeCTCR_r_AecoastBlndSpdFctLSP) &&
                               (CTCR_ac_DW.UnitDelay_DSTATE_p5));
    }

    /* End of Switch: '<S13>/Switch1' */

    /* Update for UnitDelay: '<S13>/Unit Delay' */
    CTCR_ac_DW.UnitDelay_DSTATE_p5 = VeCTCR_b_EnblPdlFac;

    /* End of Outputs for SubSystem: '<S4>/Hysteresis1' */

    /* Outputs for Atomic SubSystem: '<S4>/EdgeBi' */
    /* Switch: '<S4>/Switch2' incorporates:
     *  UnitDelay: '<S10>/Unit Delay'
     */
    rtb_Comparison4_g = CTCR_ac_DW.UnitDelay_DSTATE_fs;

    /* Update for UnitDelay: '<S10>/Unit Delay' */
    CTCR_ac_DW.UnitDelay_DSTATE_fs = VeCTCR_b_EnblPdlFac;

    /* Outputs for Atomic SubSystem: '<S4>/AccumulatorReset' */
    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S4>/ConstantValue3'
     *  Logic: '<S4>/Logical4'
     *  RelationalOperator: '<S10>/Not Equal'
     *  RelationalOperator: '<S4>/Comparison1'
     *  Switch: '<S4>/Switch5'
     *  UnitDelay: '<S4>/UnitDelay'
     */
    if (VeCTCR_b_EnblPdlFac != rtb_Comparison4_g)
    {
        /* Switch: '<S9>/Switch1' incorporates:
         *  Constant: '<S4>/ConstantValue4'
         */
        VeCTCR_r_AeCoastWhlBlendPdlFac = 0.0F;
    }
    else
    {
        if ((CTCR_ac_DW.UnitDelay_DSTATE_a < 1.0F) && (VeCTCR_b_EnblPdlFac))
        {
            /* Switch: '<S4>/Switch5' */
            rtb_Sum_pn = VeCTCR_r_AeCoastAccelPedlFac;
        }
        else
        {
            /* Switch: '<S4>/Switch5' incorporates:
             *  Constant: '<S4>/ConstantValue6'
             */
            rtb_Sum_pn = 0.0F;
        }

        /* Switch: '<S9>/Switch1' incorporates:
         *  Sum: '<S9>/Summation'
         *  UnitDelay: '<S9>/UnitDelay'
         */
        VeCTCR_r_AeCoastWhlBlendPdlFac = rtb_Sum_pn +
            CTCR_ac_DW.UnitDelay_DSTATE_ct;
    }

    /* End of Switch: '<S9>/Switch1' */
    /* End of Outputs for SubSystem: '<S4>/AccumulatorReset' */
    /* End of Outputs for SubSystem: '<S4>/EdgeBi' */
    /* End of Outputs for SubSystem: '<S1>/CTCR_AeCoast_PxPy' */

    /* Inport: '<Root>/VeAECR_b_AeCoastStat_ECM' */
    (void)Rte_Read_VeAECR_b_AeCoastStat_ECM_Value(&rtb_Comparison5);

    /* Outputs for Function Call SubSystem: '<S1>/CTCR_AeCoast_PxPy' */
    /* Outputs for Atomic SubSystem: '<S4>/AccumulatorReset' */
    /* Update for UnitDelay: '<S9>/UnitDelay' */
    CTCR_ac_DW.UnitDelay_DSTATE_ct = VeCTCR_r_AeCoastWhlBlendPdlFac;

    /* End of Outputs for SubSystem: '<S4>/AccumulatorReset' */

    /* Sum: '<S4>/Sum' */
    VeCTCR_r_AeCoastWhlBlendFac = VeCTCR_r_AeCoastWhlBlendPdlFac +
        VeCTCR_r_AeCoastFactorSpdBased;

    /* Switch: '<S4>/Switch3' incorporates:
     *  Constant: '<S4>/ConstantValue1'
     *  Constant: '<S4>/ConstantValue2'
     *  Logic: '<S4>/Logical1'
     *  MinMax: '<S4>/MinMax3'
     */
    if (!rtb_Comparison5)
    {
        rtb_TmpSignalConversionAtVeVSDR = 1.0F;
    }
    else
    {
        rtb_TmpSignalConversionAtVeVSDR = fminf(1.0F,
            VeCTCR_r_AeCoastWhlBlendFac);
    }

    /* End of Switch: '<S4>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S4>/GradientLimiter' */
    /* Sum: '<S12>/Sum2' incorporates:
     *  UnitDelay: '<S12>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeVSDR -= CTCR_ac_DW.UnitDelay_DSTATE_g0;

    /* Outputs for Atomic SubSystem: '<S12>/Limiter' */
    /* Switch: '<S35>/Switch1' incorporates:
     *  Constant: '<S19>/Calib'
     *  RelationalOperator: '<S35>/Relational Operator'
     */
    if (KeCTCR_r_GradLimECMFacLU < rtb_TmpSignalConversionAtVeVSDR)
    {
        /* Switch: '<S35>/Switch1' */
        rtb_TmpSignalConversionAtVeVSDR = KeCTCR_r_GradLimECMFacLU;
    }

    /* End of Switch: '<S35>/Switch1' */

    /* Switch: '<S35>/Switch' incorporates:
     *  Constant: '<S18>/Calib'
     *  RelationalOperator: '<S35>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeVSDR <= KeCTCR_r_GradLimECMFacLD)
    {
        rtb_TmpSignalConversionAtVeVSDR = KeCTCR_r_GradLimECMFacLD;
    }

    /* End of Switch: '<S35>/Switch' */
    /* End of Outputs for SubSystem: '<S12>/Limiter' */

    /* Sum: '<S12>/Sum3' incorporates:
     *  UnitDelay: '<S12>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeVSDR += CTCR_ac_DW.UnitDelay_DSTATE_g0;

    /* Update for UnitDelay: '<S12>/Unit Delay' */
    CTCR_ac_DW.UnitDelay_DSTATE_g0 = rtb_TmpSignalConversionAtVeVSDR;

    /* End of Outputs for SubSystem: '<S4>/GradientLimiter' */

    /* Switch: '<S4>/Switch4' incorporates:
     *  MinMax: '<S4>/MinMax1'
     *  Product: '<S4>/Product'
     */
    rtb_TmpSignalConversionAtVeTINR = fminf(VaCTCR_M_MinCreep_TrqStrtSrc[1],
        rtb_TmpSignalConversionAtVeRG_i * rtb_TmpSignalConversionAtVeTINR);

    /* Sum: '<S23>/Sum3' incorporates:
     *  Product: '<S23>/Product'
     *  Sum: '<S23>/Sum2'
     */
    VeCTCR_M_WheelMinBlnd = ((VeCTCR_M_MinCreepWheelBlend_ECM -
        rtb_TmpSignalConversionAtVeTINR) * rtb_TmpSignalConversionAtVeVSDR) +
        rtb_TmpSignalConversionAtVeTINR;

    /* Switch: '<S4>/Switch2' incorporates:
     *  Constant: '<S11>/Constant'
     *  Constant: '<S14>/Calib'
     *  Constant: '<S15>/Calib'
     *  RelationalOperator: '<S4>/Comparison7'
     */
    if (CeFWDR_e_TfrCas4Low != ((uint32)rtb_TmpSignalConversionAtVeFWDR))
    {
        rtb_Comparison4_g = KeCTCR_b_UseBlendLogicAeCoast;
    }
    else
    {
        rtb_Comparison4_g = KeCTCR_b_UseBlendLogicAeCoast_4Lo;
    }

    /* End of Switch: '<S4>/Switch2' */

    /* Switch: '<S4>/Switch4' */
    if (rtb_Comparison4_g)
    {
        /* Switch: '<S4>/Switch4' */
        rtb_TmpSignalConversionAtVeTINR = VeCTCR_M_WheelMinBlnd;
    }
    else
    {
        /* Switch: '<S4>/Switch4' */
        rtb_TmpSignalConversionAtVeTINR = VeCTCR_M_MinCreepWheelBlend_ECM;
    }

    /* End of Switch: '<S4>/Switch4' */

    /* Switch: '<S4>/Switch1' incorporates:
     *  Inport: '<Root>/VeAXLR_M_MinTransTo_Axle'
     *  Inport: '<Root>/VeAXLR_M_OutTorqReqModTactMin_Axle'
     */
    if (CTCR_ac_B.OutportBufferForCTCR_b_MinCreep)
    {
        /* Switch: '<S4>/Switch1' */
        VeCTCR_M_WheelMin4ECM_PreAHH = rtb_TmpSignalConversionAtVeTINR;
    }
    else
    {
        (void)Rte_Read_VeAXLR_M_OutTorqReqModTactMin_Axle_Value(&rtb_Switch7);
        (void)Rte_Read_VeAXLR_M_MinTransTo_Axle_Value(&tmpRead_4);

        /* Switch: '<S4>/Switch1' incorporates:
         *  Inport: '<Root>/VeAXLR_M_MinTransTo_Axle'
         *  Inport: '<Root>/VeAXLR_M_OutTorqReqModTactMin_Axle'
         *  MinMax: '<S4>/MinMax2'
         */
        VeCTCR_M_WheelMin4ECM_PreAHH = fmaxf(rtb_Switch7, tmpRead_4);
    }

    /* End of Switch: '<S4>/Switch1' */

    /* Switch: '<S4>/Switch7' */
    if (rtb_TmpSignalConversionAtVeHTDR)
    {
        /* Switch: '<S4>/Switch7' incorporates:
         *  UnitDelay: '<S4>/UnitDelay1'
         */
        rtb_Switch7 = CTCR_ac_DW.UnitDelay1_DSTATE_e;
    }
    else
    {
        /* Switch: '<S4>/Switch7' */
        rtb_Switch7 = VeCTCR_M_WheelMin4ECM_PreAHH;
    }

    /* End of Switch: '<S4>/Switch7' */

    /* Gain: '<S22>/Gain' */
    CTCR_ac_B.Gain_od = rtb_Switch7;

    /* Switch: '<S4>/Switch6' incorporates:
     *  Logic: '<S4>/Logical'
     *  Logic: '<S4>/Logical2'
     */
    if ((CTCR_ac_B.OutportBufferForCTCR_b_MinCreep) &&
            (!rtb_TmpSignalConversionAtVeHTDR))
    {
        /* Switch: '<S4>/Switch6' */
        CTCR_ac_B.Switch6 = rtb_TmpSignalConversionAtVeTINR;
    }
    else
    {
        /* Switch: '<S4>/Switch6' incorporates:
         *  Constant: '<S4>/ConstantValue7'
         */
        CTCR_ac_B.Switch6 = -9999.0F;
    }

    /* End of Switch: '<S4>/Switch6' */

    /* Update for UnitDelay: '<S8>/UnitDelay' */
    CTCR_ac_DW.UnitDelay_DSTATE_g = VeCTCR_n_AeCoastBlendInitSpd;

    /* Update for UnitDelay: '<S8>/UnitDelay2' */
    CTCR_ac_DW.UnitDelay2_DSTATE = VeCTCR_r_AeCoastFactorSpdBased;

    /* Update for UnitDelay: '<S4>/UnitDelay' */
    CTCR_ac_DW.UnitDelay_DSTATE_a = VeCTCR_r_AeCoastWhlBlendFac;

    /* Update for UnitDelay: '<S4>/UnitDelay1' */
    CTCR_ac_DW.UnitDelay1_DSTATE_e = rtb_Switch7;

    /* End of Outputs for SubSystem: '<S1>/CTCR_AeCoast_PxPy' */
#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    /* Inport: '<Root>/VaOSMR_n_NTurb_FromNo' */
    (void)Rte_Read_VaOSMR_n_NTurb_FromNo_Value(tmpRead_5);

    /* Outputs for Function Call SubSystem: '<S1>/CTCR_MinCreepPedal_FUNC' */
    /* Outputs for Atomic SubSystem: '<S38>/GradientLimiter' */
    /* Sum: '<S44>/Sum2' incorporates:
     *  Constant: '<S45>/Calib'
     *  DataTypeConversion: '<S38>/UINT16_HSER_e_HTDR_State'
     *  Selector: '<S38>/Selector2'
     *  SignalConversion generated from: '<S1>/VeOHSR_e_SGrDsrd_EngOn'
     *  UnitDelay: '<S44>/Unit Delay'
     */
    rtb_Switch7 = ((float32)
                   (Rte_Prm_KaTSXR_r_MB_NiEqn2Mtrx_KaTSXR_r_MB_NiEqn2Mtrx())
                   [((sint32)rtb_TmpSignalConversionAtVeOH_b) + 27]) -
        CTCR_ac_DW.UnitDelay_DSTATE_e;

    /* Outputs for Atomic SubSystem: '<S44>/Limiter' */
    /* Switch: '<S50>/Switch1' incorporates:
     *  Constant: '<S46>/Calib'
     *  RelationalOperator: '<S50>/Relational Operator'
     */
    if (KeCTCR_r_GrRatioChangeMax < rtb_Switch7)
    {
        /* Lookup_n-D: '<S88>/Vector' */
        rtb_Switch7 = KeCTCR_r_GrRatioChangeMax;
    }

    /* End of Switch: '<S50>/Switch1' */

    /* Switch: '<S50>/Switch' incorporates:
     *  Constant: '<S47>/Calib'
     *  RelationalOperator: '<S50>/Relational Operator1'
     */
    if (rtb_Switch7 <= KeCTCR_r_GrRatioChangeMin)
    {
        rtb_Switch7 = KeCTCR_r_GrRatioChangeMin;
    }

    /* End of Switch: '<S50>/Switch' */
    /* End of Outputs for SubSystem: '<S44>/Limiter' */

    /* Sum: '<S44>/Sum3' incorporates:
     *  UnitDelay: '<S44>/Unit Delay'
     */
    rtb_Switch7 += CTCR_ac_DW.UnitDelay_DSTATE_e;

    /* Update for UnitDelay: '<S44>/Unit Delay' */
    CTCR_ac_DW.UnitDelay_DSTATE_e = rtb_Switch7;

    /* End of Outputs for SubSystem: '<S38>/GradientLimiter' */

    /* Switch: '<S43>/Switch2' incorporates:
     *  Constant: '<S36>/Calib'
     *  Inport: '<Root>/VeHSER_e_RngSt'
     *  Inport: '<Root>/VeTRNR_e_ESSbasedTrnstnSts'
     *  Switch: '<S38>/Switch1'
     */
    if (HeCTCR_b_UseP1P25Creep)
    {
        (void)Rte_Read_VeTRNR_e_ESSbasedTrnstnSts_Value(&tmpRead_7);

        /* Sum: '<S102>/Sum2' incorporates:
         *  Constant: '<S108>/Calib'
         *  Inport: '<Root>/VeTRNR_e_ESSbasedTrnstnSts'
         */
        rtb_TmpSignalConversionAtVeCS_n = rtb_TmpSignalConversionAtVeOHSR +
            KeCTCR_n_CreepEnableThresh;

        /* Switch: '<S102>/Switch1' incorporates:
         *  Constant: '<S102>/TRUEConstant'
         *  Constant: '<S107>/Calib'
         *  Constant: '<S110>/Constant'
         *  Constant: '<S111>/Constant'
         *  Logic: '<S102>/Logical3'
         *  Logic: '<S102>/Logical4'
         *  RelationalOperator: '<S102>/Equal5'
         *  RelationalOperator: '<S102>/Equal6'
         */
        if (KeCTCR_b_NPConditionCheck)
        {
            rtb_Comparison4_g = ((CeTRGR_e_TransRangePark != ((uint32)
                                   rtb_TmpSignalConversionAtVeTRGR)) &&
                                 (((uint32)rtb_TmpSignalConversionAtVeTRGR) !=
                                  CeTRGR_e_TransRangeNeutral));
        }
        else
        {
            rtb_Comparison4_g = true;
        }

        /* End of Switch: '<S102>/Switch1' */

        /* Switch: '<S43>/Switch2' incorporates:
         *  Constant: '<S109>/Constant'
         *  DataTypeConversion: '<S102>/UINT16_HSER_e_HTDR_State'
         *  Inport: '<Root>/VaOSMR_n_NTurb_FromNo'
         *  Inport: '<Root>/VeTRNR_e_ESSbasedTrnstnSts'
         *  Logic: '<S102>/Logical1'
         *  RelationalOperator: '<S102>/Comparison1'
         *  RelationalOperator: '<S102>/Comparison3'
         *  RelationalOperator: '<S102>/Equal4'
         *  Selector: '<S102>/Selector1'
         *  SignalConversion generated from: '<S1>/VeOHSR_e_SGrDsrd_EngOn'
         *  SignalConversion: '<S5>/SignalConversion'
         */
        rtb_TmpSignalConversionAtVeHTDR = ((((rtb_TmpSignalConversionAtVeHSER >
            rtb_TmpSignalConversionAtVeCS_n) && (tmpRead_5[(uint16)
            rtb_TmpSignalConversionAtVeOH_b] > rtb_TmpSignalConversionAtVeCS_n))
            && rtb_Comparison4_g) && (((uint32)tmpRead_7) == CeESSR_e_TransTrq));

        /* Switch: '<S38>/Switch1' incorporates:
         *  Inport: '<Root>/VeTTIR_M_WhlCreepTrq'
         */
        (void)Rte_Read_VeTTIR_M_WhlCreepTrq_Value
            (&rtb_VeCTCR_M_MinCreep_ToFrontTa);
    }
    else
    {
        (void)Rte_Read_VeHSER_e_RngSt_Value(&tmpRead_8);

        /* Switch: '<S43>/Switch2' incorporates:
         *  Constant: '<S103>/Constant'
         *  Constant: '<S104>/Constant'
         *  Constant: '<S105>/Constant'
         *  Constant: '<S106>/Constant'
         *  Inport: '<Root>/VeHSER_e_RngSt'
         *  Logic: '<S101>/Logical'
         *  Logic: '<S101>/Logical2'
         *  RelationalOperator: '<S101>/Equal1'
         *  RelationalOperator: '<S101>/Equal2'
         *  RelationalOperator: '<S101>/Equal3'
         *  RelationalOperator: '<S101>/Equal4'
         *  SignalConversion generated from: '<S1>/VeHSER_e_HTDR_State'
         */
        rtb_TmpSignalConversionAtVeHTDR = ((((((uint32)
            rtb_TmpSignalConversionAtVeHS_m) != CeHSER_e_Neut_State) &&
            (((uint32)rtb_TmpSignalConversionAtVeHS_m) != CeHSER_e_Neut_State_2))
            && (((uint32)rtb_TmpSignalConversionAtVeHS_m) != CeHSER_e_M2_State))
            && (((uint32)tmpRead_8) != CeHSER_e_ShiftToNeutEngOn));

        /* Switch: '<S38>/Switch3' incorporates:
         *  Inport: '<Root>/VeTSXR_r_TturbFromTof'
         */
        if (rtb_TmpSignalConversionAtVeHTDR)
        {
            (void)Rte_Read_VeTSXR_r_TturbFromTof_Value
                (&rtb_VeCTCR_M_MinCreep_ToFrontTa);

            /* Switch: '<S38>/Switch1' incorporates:
             *  Abs: '<S38>/Abs'
             *  Inport: '<Root>/VeTSXR_r_TturbFromTof'
             *  Product: '<S38>/Product'
             *  Switch: '<S38>/Switch3'
             */
            rtb_VeCTCR_M_MinCreep_ToFrontTa = (rtb_TmpSignalConversionAtVeTCCR *
                rtb_TmpSignalConversionAtVeTC_o) * fabsf
                (rtb_VeCTCR_M_MinCreep_ToFrontTa);
        }
        else
        {
            /* Switch: '<S38>/Switch1' incorporates:
             *  Abs: '<S38>/Abs1'
             *  Lookup_n-D: '<S48>/Vector'
             *  Product: '<S38>/Product1'
             *  Product: '<S38>/Product3'
             *  SignalConversion generated from: '<S1>/VeATRR_M_DrvIntndTotBrkOutTorq'
             *  SignalConversion generated from: '<S1>/VeCSVR_v_VehSpd'
             *  Switch: '<S38>/Switch3'
             */
            rtb_VeCTCR_M_MinCreep_ToFrontTa = ((look2_iflf_binlcapw
                (rtb_TmpSignalConversionAtVeCS_n,
                 rtb_TmpSignalConversionAtVeATRR,
                 (Rte_Prm_KxCTCR_k_CreepCancelBlend_KxCTCR_k_CreepCancelBlend()),
                 (Rte_Prm_KyCTCR_k_CreepCancelBlend_KyCTCR_k_CreepCancelBlend()),
                 (Rte_Prm_KtCTCR_k_CreepCancelBlend_KtCTCR_k_CreepCancelBlend()),
                 CTCR_ac_ConstP.Vector_maxIndex_f, 6U) *
                rtb_TmpSignalConversionAtVeTCCR) *
                rtb_TmpSignalConversionAtVeTC_o) * fabsf(rtb_Switch7);
        }

        /* End of Switch: '<S38>/Switch3' */
    }

    /* End of Switch: '<S43>/Switch2' */
    /* End of Outputs for SubSystem: '<S1>/CTCR_MinCreepPedal_FUNC' */

    /* Inport: '<Root>/VeTRNR_e_TargetGear' */
    (void)Rte_Read_VeTRNR_e_TargetGear_Value(&tmpRead_6);

    /* Outputs for Function Call SubSystem: '<S1>/CTCR_MinCreepPedal_FUNC' */
    /* DataTypeConversion: '<S51>/DataTypeConversion5' incorporates:
     *  SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear'
     */
    rtb_DataTypeConversion5 = (sint16)rtb_TmpSignalConversionAtVeTRNR;

    /* RelationalOperator: '<S51>/Comparison5' incorporates:
     *  DataTypeConversion: '<S51>/DataTypeConversion5'
     *  DataTypeConversion: '<S51>/DataTypeConversion6'
     *  Inport: '<Root>/VeTRNR_e_TargetGear'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_ActualGear'
     */
    rtb_Comparison5 = (tmpRead_6 != rtb_TmpSignalConversionAtVeTRNR);

    /* Lookup_n-D: '<S88>/Vector' incorporates:
     *  Constant: '<S66>/ConstantValue1'
     *  Constant: '<S68>/Calib'
     *  Product: '<S66>/Multiplication3'
     */
    rtb_Switch7 = HeCTCR_t_dTA / 2.0F;

    /* Product: '<S66>/Multiplication2' incorporates:
     *  Constant: '<S83>/Calib'
     *  Product: '<S66>/Multiplication4'
     *  Sum: '<S66>/Summation'
     *  Sum: '<S66>/Summation1'
     *  Sum: '<S66>/Summation2'
     *  UnitDelay: '<S66>/UnitDelay'
     *  UnitDelay: '<S66>/UnitDelay1'
     */
    rtb_TmpSignalConversionAtVeCS_n = ((rtb_TmpSignalConversionAtVeAPSR -
        ((rtb_Switch7 - KeCTCR_t_PedalGradBlendFactor) *
         CTCR_ac_DW.UnitDelay1_DSTATE_l)) - CTCR_ac_DW.UnitDelay_DSTATE) /
        (rtb_Switch7 + KeCTCR_t_PedalGradBlendFactor);

    /* Lookup_n-D: '<S86>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    rtb_TmpSignalConversionAtVeATRR = look1_iflf_binlcapw
        (rtb_TmpSignalConversionAtVeAPSR, ((const float32 *)
          &(KxCTCR_r_GrdLimMinCreepLU[0])), ((const float32 *)
          &(KtCTCR_r_GrdLimMinCreepLU[0])), 5U);

    /* Switch: '<S51>/Switch3' incorporates:
     *  Constant: '<S74>/Calib'
     */
    if (KeCTCR_b_UsePedalGrad)
    {
        /* Switch: '<S51>/Switch3' incorporates:
         *  Constant: '<S51>/ConstantValue2'
         *  Lookup_n-D: '<S85>/Vector'
         *  Lookup_n-D: '<S87>/Vector'
         *  MinMax: '<S51>/MinMax1'
         *  MinMax: '<S51>/MinMax2'
         *  Product: '<S66>/Multiplication2'
         *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
         *  Sum: '<S42>/Sum4'
         */
        rtb_TmpSignalConversionAtVeVS_j = fminf(fmaxf(look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeAPSR, rtb_TmpSignalConversionAtVeCS_n,
             ((const float32 *)&(KxCTCR_r_GrdLimMinCreepLDMapPdlDiff[0])), ((
            const float32 *)&(KyCTCR_r_GrdLimMinCreepLDMapPdlDiff[0])), ((const
            float32 *)&(KtCTCR_r_GrdLimMinCreepLDMapPdlDiff[0])),
             CTCR_ac_ConstP.pooled12, 8U), look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeOHSR - rtb_TmpSignalConversionAtVeVS_j,
             ((const float32 *)&(KxCTCR_r_GrdLimMinLauncSpeedLD[0])), ((const
            float32 *)&(KtCTCR_r_GrdLimMinLauncSpeedLD[0])), 5U)), 0.0F);
    }
    else
    {
        /* Switch: '<S51>/Switch3' incorporates:
         *  Lookup_n-D: '<S84>/Vector'
         *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
         */
        rtb_TmpSignalConversionAtVeVS_j = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeAPSR, ((const float32 *)
              &(KxCTCR_r_GrdLimMinCreepLD[0])), ((const float32 *)
              &(KtCTCR_r_GrdLimMinCreepLD[0])), 5U);
    }

    /* End of Switch: '<S51>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S42>/EdgeBi' */
    /* RelationalOperator: '<S96>/Not Equal' incorporates:
     *  UnitDelay: '<S96>/Unit Delay'
     */
    rtb_Comparison4_g = (rtb_TmpSignalConversionAtVeHTDR !=
                         CTCR_ac_DW.UnitDelay_DSTATE_eo);

    /* Update for UnitDelay: '<S96>/Unit Delay' */
    CTCR_ac_DW.UnitDelay_DSTATE_eo = rtb_TmpSignalConversionAtVeHTDR;

    /* End of Outputs for SubSystem: '<S42>/EdgeBi' */

    /* Switch: '<S95>/Switch2' incorporates:
     *  Switch: '<S95>/Switch3'
     */
    if (rtb_Comparison4_g)
    {
        /* Switch: '<S95>/Switch2' incorporates:
         *  UnitDelay: '<S42>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeTCCR = CTCR_ac_DW.UnitDelay_DSTATE_p;

        /* Switch: '<S95>/Switch3' incorporates:
         *  Constant: '<S95>/ConstantValue4'
         */
        rtb_TmpSignalConversionAtVeTC_o = 0.0F;
    }
    else
    {
        /* Switch: '<S95>/Switch2' incorporates:
         *  UnitDelay: '<S95>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeTCCR = CTCR_ac_DW.UnitDelay_DSTATE_h;

        /* MinMax: '<S95>/Maximum' incorporates:
         *  Constant: '<S97>/Calib'
         *  Constant: '<S98>/Calib'
         */
        rtb_TmpSignalConversionAtVeTC_o = fmaxf(HeCTCR_t_dTA,
            KeCTCR_t_TargetSpdBlndTime);

        /* Outputs for Atomic SubSystem: '<S95>/ProtectedDivision' */
        /* Switch: '<S100>/Switch1' incorporates:
         *  Constant: '<S100>/Constant Value'
         *  Constant: '<S100>/Constant Value1'
         *  Constant: '<S100>/Constant Value2'
         *  Constant: '<S100>/Constant Value3'
         *  Constant: '<S97>/Calib'
         *  Logic: '<S100>/AND'
         *  RelationalOperator: '<S100>/Greater Than or Equal '
         *  RelationalOperator: '<S100>/Greater Than or Equal 1'
         *  RelationalOperator: '<S100>/Not Equal'
         *  RelationalOperator: '<S100>/Not Equal1'
         *  Switch: '<S100>/Switch2'
         *  Switch: '<S100>/Switch3'
         */
        if ((HeCTCR_t_dTA != 0.0F) && (rtb_TmpSignalConversionAtVeTC_o != 0.0F))
        {
            /* Switch: '<S100>/Switch1' incorporates:
             *  Product: '<S100>/Division'
             */
            rtb_TmpSignalConversionAtVeTC_o = HeCTCR_t_dTA /
                rtb_TmpSignalConversionAtVeTC_o;
        }
        else if (HeCTCR_t_dTA > 0.0F)
        {
            /* Switch: '<S100>/Switch2' incorporates:
             *  Constant: '<S100>/MAXFLOAT'
             *  Switch: '<S100>/Switch1'
             */
            rtb_TmpSignalConversionAtVeTC_o = 3.402823466E+38F;
        }
        else if (HeCTCR_t_dTA < 0.0F)
        {
            /* Switch: '<S100>/Switch3' incorporates:
             *  Constant: '<S100>/MINFLOAT'
             *  Switch: '<S100>/Switch1'
             *  Switch: '<S100>/Switch2'
             */
            rtb_TmpSignalConversionAtVeTC_o = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S100>/Switch1' incorporates:
             *  Constant: '<S100>/Constant Value4'
             *  Switch: '<S100>/Switch2'
             *  Switch: '<S100>/Switch3'
             */
            rtb_TmpSignalConversionAtVeTC_o = 0.0F;
        }

        /* End of Switch: '<S100>/Switch1' */
        /* End of Outputs for SubSystem: '<S95>/ProtectedDivision' */

        /* Switch: '<S95>/Switch1' incorporates:
         *  Constant: '<S95>/ConstantValue3'
         *  UnitDelay: '<S95>/UnitDelay1'
         *  UnitDelay: '<S95>/UnitDelay3'
         */
        if (CTCR_ac_DW.UnitDelay1_DSTATE_h)
        {
            rtb_Sum_pn = CTCR_ac_DW.UnitDelay3_DSTATE;
        }
        else
        {
            rtb_Sum_pn = 1.0F;
        }

        /* End of Switch: '<S95>/Switch1' */

        /* Switch: '<S95>/Switch3' incorporates:
         *  Constant: '<S95>/ConstantValue2'
         *  MinMax: '<S95>/MinMax'
         *  Sum: '<S95>/Summation1'
         */
        rtb_TmpSignalConversionAtVeTC_o = fminf(rtb_Sum_pn +
            rtb_TmpSignalConversionAtVeTC_o, 1.0F);
    }

    /* End of Switch: '<S95>/Switch2' */

    /* Switch: '<S42>/Switch1' incorporates:
     *  DataTypeConversion: '<S102>/UINT16_HSER_e_HTDR_State'
     *  Inport: '<Root>/VaOSMR_n_NTurb_FromNo'
     *  Selector: '<S102>/Selector1'
     *  SignalConversion generated from: '<S1>/VeOHSR_e_SGrDsrd_EngOn'
     *  SignalConversion: '<S5>/SignalConversion'
     */
    if (rtb_TmpSignalConversionAtVeHTDR)
    {
        rtb_TmpSignalConversionAtVeTINR = rtb_TmpSignalConversionAtVeHSER;
    }
    else
    {
        rtb_TmpSignalConversionAtVeTINR = tmpRead_5[(uint16)
            rtb_TmpSignalConversionAtVeOH_b];
    }

    /* End of Switch: '<S42>/Switch1' */

    /* Sum: '<S95>/Summation' incorporates:
     *  Constant: '<S95>/ConstantValue'
     *  Product: '<S95>/Multiplication'
     *  Product: '<S95>/Multiplication3'
     *  Sum: '<S95>/Subtraction'
     */
    rtb_Switch7 = ((1.0F - rtb_TmpSignalConversionAtVeTC_o) *
                   rtb_TmpSignalConversionAtVeTCCR) +
        (rtb_TmpSignalConversionAtVeTC_o * rtb_TmpSignalConversionAtVeTINR);

    /* Switch: '<S51>/Switch6' incorporates:
     *  Constant: '<S36>/Calib'
     */
    if (HeCTCR_b_UseP1P25Creep)
    {
        /* RelationalOperator: '<S89>/Equal5' incorporates:
         *  DataTypeConversion: '<S51>/DataTypeConversion6'
         *  DataTypeConversion: '<S91>/DataTypeConversion'
         *  Inport: '<Root>/VeTRNR_e_TargetGear'
         *  RelationalOperator: '<S89>/Equal6'
         */
        rtb_TmpSignalConversionAtVeTRNR = tmpRead_6;

        /* Switch: '<S89>/Switch5' incorporates:
         *  Constant: '<S93>/Constant'
         *  Constant: '<S94>/Constant'
         *  Logic: '<S89>/Logical4'
         *  RelationalOperator: '<S89>/Equal5'
         *  RelationalOperator: '<S89>/Equal6'
         */
        if ((CeTRNR_e_Neutral == ((uint32)rtb_TmpSignalConversionAtVeTRNR)) ||
                (((uint32)rtb_TmpSignalConversionAtVeTRNR) == CeTRNR_e_Park))
        {
            /* Switch: '<S89>/Switch5' incorporates:
             *  DataTypeConversion: '<S102>/UINT16_HSER_e_HTDR_State'
             *  Inport: '<Root>/VaOSMR_n_NTurb_FromNo'
             *  Selector: '<S102>/Selector1'
             *  SignalConversion generated from: '<S1>/VeOHSR_e_SGrDsrd_EngOn'
             *  SignalConversion: '<S5>/SignalConversion'
             */
            for (i = 0; i < 2; i++)
            {
                rtb_Vector_a[i] = tmpRead_5[(uint16)
                    rtb_TmpSignalConversionAtVeOH_b];
            }
        }
        else
        {
            /* Switch: '<S89>/Switch5' incorporates:
             *  Constant: '<S92>/Calib'
             *  DataTypeConversion: '<S51>/DataTypeConversion6'
             *  Inport: '<Root>/VaOSMR_n_NTurb_FromNo'
             *  Inport: '<Root>/VeTRNR_e_TargetGear'
             *  Selector: '<S89>/Selector1'
             *  Selector: '<S89>/Selector5'
             *  SignalConversion: '<S5>/SignalConversion'
             *  SignalConversion generated from: '<S89>/Selector1'
             */
            rtb_Vector_a[0] = tmpRead_5[(sint32)KaCTCR_r_TRNR_nTurbMap[(sint16)
                tmpRead_6]];
            rtb_Vector_a[1] = tmpRead_5[(sint32)KaCTCR_r_TRNR_nTurbMap
                [(rtb_DataTypeConversion5)]];
        }

        /* End of Switch: '<S89>/Switch5' */

        /* Switch: '<S51>/Switch6' incorporates:
         *  MinMax: '<S89>/MinMax3'
         *  Sum: '<S89>/Sum1'
         */
        rtb_Switch6 = rtb_TmpSignalConversionAtVeHSER - fminf(rtb_Vector_a[0],
            rtb_Vector_a[1]);
    }
    else
    {
        /* Switch: '<S51>/Switch6' incorporates:
         *  Inport: '<Root>/VeCSLR_n_Clch2_SlipSpeed'
         */
        (void)Rte_Read_VeCSLR_n_Clch2_SlipSpeed_Value(&rtb_Switch6);
    }

    /* End of Switch: '<S51>/Switch6' */

    /* Switch: '<S51>/Switch2' incorporates:
     *  Constant: '<S80>/Calib'
     *  Constant: '<S82>/Calib'
     */
    if (rtb_Comparison5)
    {
        rtb_TmpSignalConversionAtVeVSDR = KeCTCR_r_SlipSpdShift_RSP;
    }
    else
    {
        rtb_TmpSignalConversionAtVeVSDR = KeCTCR_r_SlipSpdGear_RSP;
    }

    /* End of Switch: '<S51>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S51>/Hysteresis' */
    /* Switch: '<S69>/Switch1' incorporates:
     *  RelationalOperator: '<S69>/Greater  Than'
     *  Switch: '<S51>/Switch1'
     */
    if (rtb_Switch6 > rtb_TmpSignalConversionAtVeVSDR)
    {
        /* Switch: '<S69>/Switch1' incorporates:
         *  Constant: '<S69>/Constant Value'
         */
        rtb_TmpSignalConversionAtVeHTDR = true;
    }
    else
    {
        if (rtb_Comparison5)
        {
            /* Switch: '<S51>/Switch1' incorporates:
             *  Constant: '<S81>/Calib'
             */
            rtb_TmpSignalConversionAtVeVSDR = KeCTCR_r_SlipSpdShift_LSP;
        }
        else
        {
            /* Switch: '<S51>/Switch1' incorporates:
             *  Constant: '<S79>/Calib'
             */
            rtb_TmpSignalConversionAtVeVSDR = KeCTCR_r_SlipSpdGear_LSP;
        }

        /* Switch: '<S69>/Switch1' incorporates:
         *  RelationalOperator: '<S69>/Greater  Than1'
         *  UnitDelay: '<S69>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHTDR = ((rtb_Switch6 >=
            rtb_TmpSignalConversionAtVeVSDR) && (CTCR_ac_DW.UnitDelay_DSTATE_jc));
    }

    /* End of Switch: '<S69>/Switch1' */

    /* Update for UnitDelay: '<S69>/Unit Delay' */
    CTCR_ac_DW.UnitDelay_DSTATE_jc = rtb_TmpSignalConversionAtVeHTDR;

    /* End of Outputs for SubSystem: '<S51>/Hysteresis' */

    /* Product: '<S51>/Product' incorporates:
     *  Constant: '<S71>/Calib'
     *  Constant: '<S72>/Calib'
     *  Constant: '<S73>/Calib'
     *  Constant: '<S75>/Calib'
     *  DataTypeConversion: '<S51>/DataTypeConversion1'
     *  DataTypeConversion: '<S51>/DataTypeConversion2'
     *  Logic: '<S51>/Logical2'
     *  Logic: '<S51>/Logical3'
     *  Lookup_n-D: '<S88>/Vector'
     *  RelationalOperator: '<S51>/Comparison3'
     *  Selector: '<S51>/Selector2'
     *  Selector: '<S51>/Selector3'
     *  Selector: '<S51>/Selector4'
     *  SignalConversion generated from: '<S1>/VeCSVR_n_TransOutSpdSgndFltrd'
     *  SignalConversion generated from: '<S1>/VeOHSR_e_ILEState'
     *  SignalConversion generated from: '<S1>/VeTRNR_e_ILEStat'
     *  Sum: '<S42>/Sum1'
     */
    rtb_TmpSignalConversionAtVeHSER = ((float32)
        ((((((rtb_TmpSignalConversionAtVeCSVR <= KeCTCR_n_Creep_OutSpdTh) ||
             (!rtb_TmpSignalConversionAtVeHTDR)) ||
            (KaCTCR_b_ILEStat4MinCrpBlnd[(rtb_TmpSignalConversionAtVeTR_i)])) ||
           (KaCTCR_b_ILEStateOHSR[(rtb_TmpSignalConversionAtVeOH_i)])) ||
          (KaCTCR_b_CreepActv_Gear[(rtb_DataTypeConversion5)])) ? 1 : 0)) *
        look2_iflf_binlcapw(rtb_Switch7 - rtb_TmpSignalConversionAtVeOHSR,
                            rtb_TmpSignalConversionAtVeCSVR, ((const float32 *)
        &(KxCTCR_r_WhlReturn2IdlBlnd[0])), ((const float32 *)
        &(KyCTCR_r_WhlReturn2IdlBlnd[0])), ((const float32 *)
        &(KtCTCR_r_WhlReturn2IdlBlnd[0])), CTCR_ac_ConstP.pooled12, 8U);

    /* Outputs for Atomic SubSystem: '<S51>/GradientLimiter' */
    /* Outputs for Atomic SubSystem: '<S67>/Limiter' */
    for (i = 0; i < 2; i++)
    {
        /* Sum: '<S67>/Sum2' incorporates:
         *  UnitDelay: '<S67>/Unit Delay'
         */
        rtb_Signum_o = rtb_TmpSignalConversionAtVeHSER -
            CTCR_ac_DW.UnitDelay_DSTATE_c[i];

        /* Switch: '<S90>/Switch1' incorporates:
         *  RelationalOperator: '<S90>/Relational Operator'
         */
        if (rtb_TmpSignalConversionAtVeATRR < rtb_Signum_o)
        {
            /* Switch: '<S39>/Switch1' */
            rtb_Signum_o = rtb_TmpSignalConversionAtVeATRR;
        }

        /* End of Switch: '<S90>/Switch1' */

        /* Sum: '<S67>/Sum2' */
        rtb_Vector_a[i] = rtb_Signum_o;
    }

    /* Switch: '<S90>/Switch' incorporates:
     *  Constant: '<S78>/Calib'
     *  RelationalOperator: '<S90>/Relational Operator1'
     */
    if (rtb_Vector_a[0] > KeCTCR_r_GradLimMinLDRaw)
    {
        rtb_Signum_o = rtb_Vector_a[0];
    }
    else
    {
        rtb_Signum_o = KeCTCR_r_GradLimMinLDRaw;
    }

    /* End of Outputs for SubSystem: '<S67>/Limiter' */

    /* Sum: '<S67>/Sum3' incorporates:
     *  UnitDelay: '<S67>/Unit Delay'
     */
    rtb_Vector_ka[0] = rtb_Signum_o + CTCR_ac_DW.UnitDelay_DSTATE_c[0];

    /* Outputs for Atomic SubSystem: '<S67>/Limiter' */
    /* Switch: '<S90>/Switch' incorporates:
     *  RelationalOperator: '<S90>/Relational Operator1'
     */
    if (rtb_Vector_a[1] > rtb_TmpSignalConversionAtVeVS_j)
    {
        rtb_TmpSignalConversionAtVeVS_j = rtb_Vector_a[1];
    }

    /* End of Outputs for SubSystem: '<S67>/Limiter' */

    /* Sum: '<S67>/Sum3' incorporates:
     *  UnitDelay: '<S67>/Unit Delay'
     */
    rtb_Vector_ka[1] = rtb_TmpSignalConversionAtVeVS_j +
        CTCR_ac_DW.UnitDelay_DSTATE_c[1];

    /* End of Outputs for SubSystem: '<S51>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S39>/EdgeRising' */
    /* Logic: '<S52>/AND' incorporates:
     *  Logic: '<S52>/OR1'
     *  UnitDelay: '<S52>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeHTDR = !CTCR_ac_DW.UnitDelay_DSTATE_ev;

    /* Update for UnitDelay: '<S52>/Unit Delay' incorporates:
     *  Constant: '<S39>/TRUEConstant1'
     */
    CTCR_ac_DW.UnitDelay_DSTATE_ev = true;

    /* End of Outputs for SubSystem: '<S39>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S39>/SignalLatchOnWithReset1' */
    /* Outputs for Atomic SubSystem: '<S51>/Hysteresis1' */
    /* Outputs for Atomic SubSystem: '<S51>/GradientLimiter' */
    for (i = 0; i < 2; i++)
    {
        /* Update for UnitDelay: '<S67>/Unit Delay' */
        rtb_Sum3_h = rtb_Vector_ka[i];
        CTCR_ac_DW.UnitDelay_DSTATE_c[i] = rtb_Sum3_h;

        /* Switch: '<S70>/Switch1' incorporates:
         *  Constant: '<S76>/Calib'
         *  Constant: '<S77>/Calib'
         *  RelationalOperator: '<S70>/Greater  Than'
         *  RelationalOperator: '<S70>/Greater  Than1'
         *  UnitDelay: '<S70>/Unit Delay'
         */
        rtb_Comparison4_g = ((rtb_Sum3_h > KeCTCR_r_BlndFctRSP) || ((rtb_Sum3_h >=
                               KeCTCR_r_BlndFctLSP) &&
                              (CTCR_ac_DW.UnitDelay_DSTATE_ch[i])));

        /* Update for UnitDelay: '<S70>/Unit Delay' */
        CTCR_ac_DW.UnitDelay_DSTATE_ch[i] = rtb_Comparison4_g;

        /* Logic: '<S39>/Logical1' incorporates:
         *  Constant: '<S39>/ConstantValue2'
         *  Logic: '<S39>/Logical2'
         *  RelationalOperator: '<S39>/Comparison3'
         *  Sum: '<S39>/Sum2'
         *  UnitDelay: '<S39>/UnitDelay1'
         */
        VaCTCR_b_MinCreep_CreepEnableReset[(i)] = ((!rtb_Comparison4_g) &&
            ((CTCR_ac_DW.UnitDelay1_DSTATE[i] - rtb_TmpSignalConversionAtVeDTRR)
             <= -10.0F));

        /* Logic: '<S64>/OR1' incorporates:
         *  Logic: '<S64>/NOT'
         *  Logic: '<S64>/OR'
         *  UnitDelay: '<S64>/Unit Delay'
         */
        rtb_Comparison5 = (rtb_Comparison4_g ||
                           ((!VaCTCR_b_MinCreep_CreepEnableReset[(i)]) &&
                            (CTCR_ac_DW.UnitDelay_DSTATE_d0[i])));

        /* Update for UnitDelay: '<S64>/Unit Delay' */
        CTCR_ac_DW.UnitDelay_DSTATE_d0[i] = rtb_Comparison5;

        /* Logic: '<S39>/Logical5' incorporates:
         *  Constant: '<S55>/Calib'
         */
        rtb_Logical5_c[i] = (rtb_Comparison5 && (KeCTCR_b_MinCreepActv));

        /* MinMax: '<S39>/MinMax2' incorporates:
         *  Constant: '<S39>/ConstantValue'
         *  Constant: '<S39>/ConstantValue1'
         *  MinMax: '<S39>/MinMax3'
         */
        VaCTCR_r_MinCreep_BlendFactor[(i)] = fmaxf(fminf(1.0F, rtb_Sum3_h), 0.0F);

        /* Switch: '<S70>/Switch1' */
        rtb_Comparison1_g[i] = rtb_Comparison4_g;

        /* Logic: '<S64>/OR1' */
        rtb_OR1[i] = rtb_Comparison5;
    }

    /* End of Outputs for SubSystem: '<S51>/GradientLimiter' */
    /* End of Outputs for SubSystem: '<S51>/Hysteresis1' */
    /* End of Outputs for SubSystem: '<S39>/SignalLatchOnWithReset1' */

    /* Switch: '<S65>/Switch1' */
    if (rtb_TmpSignalConversionAtVeHTDR)
    {
        /* Switch: '<S39>/Switch1' incorporates:
         *  Constant: '<S54>/Calib'
         */
        rtb_Vector_a[0] = KeCTCR_M_MinCreepWhlTrqIntializer;
        rtb_Vector_a[1] = KeCTCR_M_MinCreepWhlTrqIntializer;
    }
    else
    {
        /* Switch: '<S39>/Switch1' incorporates:
         *  UnitDelay: '<S65>/Unit Delay'
         */
        for (i = 0; i < 2; i++)
        {
            rtb_Vector_a[i] = CTCR_ac_DW.UnitDelay_DSTATE_d[i];
        }
    }

    /* End of Switch: '<S65>/Switch1' */

    /* Switch: '<S39>/Switch2' */
    rtb_Switch_b[0] = rtb_TmpSignalConversionAtVeDTRR;
    rtb_Switch_b[1] = rtb_TmpSignalConversionAtVeDTRR;

    /* Gain: '<S61>/Gain' */
    CTCR_ac_B.Gain_dn = rtb_Logical5_c[0];

    /* Gain: '<S62>/Gain' */
    CTCR_ac_B.Gain_n = rtb_Logical5_c[1];

    /* Gain: '<S41>/Gain' */
    CTCR_ac_B.Gain_d = rtb_VeCTCR_M_MinCreep_ToFrontTa;

    /* SignalConversion generated from: '<S5>/VeCTCR_M_MinCreepFWTrq' */
    CTCR_ac_B.OutportBufferForVeCTCR_M_MinC_c = -9999.0F;

    /* SignalConversion generated from: '<S5>/VeCTCR_r_MinCreepBlendingFactorBlended' */
    CTCR_ac_B.OutportBufferForVeCTCR_r_MinC_e = 1.0F;

    /* SignalConversion generated from: '<S5>/VeCTCR_b_MinCreepEnable_Stgc' */
    CTCR_ac_B.OutportBufferForVeCTCR_b_MinC_f = false;

    /* Inport: '<S5>/VeDTRR_M_MgateMinTrq' */
    CTCR_ac_B.VeDTRR_M_MgateMinTrq = rtb_TmpSignalConversionAtVeDT_g;
    for (i = 0; i < 2; i++)
    {
        /* Switch: '<S39>/Switch1' */
        rtb_Signum_o = rtb_Vector_a[i];
        if (!rtb_Comparison1_g[i])
        {
            /* Switch: '<S39>/Switch2' incorporates:
             *  Constant: '<S39>/ConstantValue3'
             *  Logic: '<S39>/Logical3'
             *  RelationalOperator: '<S39>/Comparison1'
             *  Sum: '<S39>/Sum1'
             *  UnitDelay: '<S39>/UnitDelay1'
             */
            if ((rtb_OR1[i]) && ((CTCR_ac_DW.UnitDelay1_DSTATE[i] -
                                  rtb_TmpSignalConversionAtVeDTRR) >= -10.0F))
            {
                /* Switch: '<S39>/Switch1' incorporates:
                 *  Constant: '<S53>/Calib'
                 *  Sum: '<S39>/Sum3'
                 */
                rtb_Signum_o = CTCR_ac_DW.UnitDelay1_DSTATE[i] -
                    KeCTCR_M_MinCreepDelta;
            }
            else
            {
                /* Switch: '<S39>/Switch1' */
                rtb_Signum_o = rtb_Switch_b[i];
            }
        }

        /* Sum: '<S56>/Sum3' incorporates:
         *  Product: '<S56>/Product'
         *  Sum: '<S56>/Sum2'
         */
        rtb_Sum3_h = ((rtb_VeCTCR_M_MinCreep_ToFrontTa - rtb_Signum_o) *
                      VaCTCR_r_MinCreep_BlendFactor[(i)]) + rtb_Signum_o;

        /* Update for UnitDelay: '<S39>/UnitDelay1' */
        CTCR_ac_DW.UnitDelay1_DSTATE[i] = rtb_Sum3_h;

        /* Sum: '<S56>/Sum3' */
        rtb_Vector_ka[i] = rtb_Sum3_h;

        /* Switch: '<S39>/Switch1' */
        rtb_Vector_a[i] = rtb_Signum_o;
    }

    /* Gain: '<S58>/Gain' */
    CTCR_ac_B.Gain = rtb_Vector_ka[1];

    /* Switch: '<S39>/Switch3' */
    if (rtb_OR1[1])
    {
        /* Gain: '<S59>/Gain' */
        CTCR_ac_B.Gain_p = rtb_Vector_ka[0];
    }
    else
    {
        /* Gain: '<S59>/Gain' incorporates:
         *  Constant: '<S39>/ConstantValue4'
         */
        CTCR_ac_B.Gain_p = -9999.0F;
    }

    /* End of Switch: '<S39>/Switch3' */

    /* Gain: '<S60>/Gain' */
    CTCR_ac_B.Gain_o = rtb_Vector_ka[0];

    /* Update for UnitDelay: '<S66>/UnitDelay1' */
    CTCR_ac_DW.UnitDelay1_DSTATE_l = rtb_TmpSignalConversionAtVeCS_n;

    /* Update for UnitDelay: '<S66>/UnitDelay' */
    CTCR_ac_DW.UnitDelay_DSTATE = rtb_TmpSignalConversionAtVeAPSR;

    /* Update for UnitDelay: '<S42>/UnitDelay' */
    CTCR_ac_DW.UnitDelay_DSTATE_p = rtb_Switch7;

    /* Update for UnitDelay: '<S95>/UnitDelay' */
    CTCR_ac_DW.UnitDelay_DSTATE_h = rtb_TmpSignalConversionAtVeTCCR;

    /* Update for UnitDelay: '<S95>/UnitDelay3' */
    CTCR_ac_DW.UnitDelay3_DSTATE = rtb_TmpSignalConversionAtVeTC_o;

    /* Update for UnitDelay: '<S95>/UnitDelay1' incorporates:
     *  Constant: '<S95>/TRUEConstant'
     */
    CTCR_ac_DW.UnitDelay1_DSTATE_h = true;

    /* Switch: '<S65>/Switch3' */
    if (rtb_TmpSignalConversionAtVeHTDR)
    {
        /* Update for UnitDelay: '<S65>/Unit Delay' incorporates:
         *  Constant: '<S54>/Calib'
         */
        CTCR_ac_DW.UnitDelay_DSTATE_d[0] = KeCTCR_M_MinCreepWhlTrqIntializer;
        CTCR_ac_DW.UnitDelay_DSTATE_d[1] = KeCTCR_M_MinCreepWhlTrqIntializer;
    }
    else
    {
        /* Update for UnitDelay: '<S65>/Unit Delay' */
        CTCR_ac_DW.UnitDelay_DSTATE_d[0] = rtb_Vector_a[0];
        CTCR_ac_DW.UnitDelay_DSTATE_d[1] = rtb_Vector_a[1];
    }

    /* End of Switch: '<S65>/Switch3' */
    /* End of Outputs for SubSystem: '<S1>/CTCR_MinCreepPedal_FUNC' */
#endif

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* SignalConversion generated from: '<S1>/VeCTCR_M_MinCreepFWTrqTgt' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource4'
     * */
#if Rte_SysCon_Variant_CTCR_PxPy

    /* Outport: '<Root>/VeCTCR_M_MinCreepFWTrqTgt' */
    (void)Rte_Write_VeCTCR_M_MinCreepFWTrqTgt_Value(CTCR_ac_B.Sum3[1]);

    /* VariantMerge generated from: '<S1>/VariantSource11' */
    rtb_VariantMerge_For_Variant_So = CTCR_ac_B.Switch3;

#elif !Rte_SysCon_Variant_CTCR_PxPy && Rte_SysCon_Variant_CTCR_FUNC

    /* VariantMerge generated from: '<S1>/VariantSource11' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource4'
     */
    rtb_VariantMerge_For_Variant_So = CTCR_ac_B.Gain_p;

#endif

    /* End of SignalConversion generated from: '<S1>/VeCTCR_M_MinCreepFWTrqTgt' */

    /* SignalConversion generated from: '<S1>/VeCTCR_M_MinCreepWheelTrq' */
#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    /* Outport: '<Root>/VeCTCR_M_MinCreepWheelTrq' */
    (void)Rte_Write_VeCTCR_M_MinCreepWheelTrq_Value
        (rtb_VariantMerge_For_Variant_So);

#endif

    /* End of SignalConversion generated from: '<S1>/VeCTCR_M_MinCreepWheelTrq' */

    /* SignalConversion generated from: '<S1>/VeCTCR_M_MinCreepWheelTrqBlend_FUNC' incorporates:
     *  SignalConversion generated from: '<S1>/VeCTCR_M_MinCreepWheelTrq_FUNC'
     */
#if Rte_SysCon_Variant_CTCR_FUNC

    /* SignalConversion generated from: '<S1>/VeCTCR_M_MinCreepWheelTrqBlend_FUNC' */
    rtb_OutportBufferForVeCTCR_M_Mi = CTCR_ac_B.Gain_o;

    /* SignalConversion generated from: '<S1>/VeCTCR_M_MinCreepWheelTrq_FUNC' */
    rtb_OutportBufferForVeCTCR_M__j = CTCR_ac_B.Gain_p;

#endif

    /* End of SignalConversion generated from: '<S1>/VeCTCR_M_MinCreepWheelTrqBlend_FUNC' */

    /* SignalConversion generated from: '<S1>/VeCTCR_M_WheelMin4Aecoast' */
#if Rte_SysCon_Variant_CTCR_PxPy

    /* Outport: '<Root>/VeCTCR_M_WheelMin4Aecoast' */
    (void)Rte_Write_VeCTCR_M_WheelMin4Aecoast_Value(CTCR_ac_B.Switch6);

#endif

    /* End of SignalConversion generated from: '<S1>/VeCTCR_M_WheelMin4Aecoast' */

    /* SignalConversion generated from: '<S1>/VeCTCR_M_WheelMin4ECM_FUNC_IRV' */
#if Rte_SysCon_Variant_CTCR_FUNC

    /* SignalConversion generated from: '<S1>/VeCTCR_M_WheelMin4ECM_FUNC_IRV' */
    rtb_OutportBufferForVeCTCR_M_Wh = CTCR_ac_B.Gain;

#endif

    /* End of SignalConversion generated from: '<S1>/VeCTCR_M_WheelMin4ECM_FUNC_IRV' */

    /* SignalConversion generated from: '<S1>/VeCTCR_M_WheelMin4ECM_PxPy' incorporates:
     *  SignalConversion generated from: '<S1>/VeCTCR_b_CreepReserveActive'
     *  SignalConversion generated from: '<S1>/VariantSource8'
     * */
#if Rte_SysCon_Variant_CTCR_PxPy

    /* Outport: '<Root>/VeCTCR_M_WheelMin4ECM' */
    (void)Rte_Write_VeCTCR_M_WheelMin4ECM_Value(CTCR_ac_B.Gain_od);

    /* Outport: '<Root>/VeCTCR_b_CreepReserveActive' */
    (void)Rte_Write_VeCTCR_b_CreepReserveActive_Value(CTCR_ac_B.Logical15);

    /* VariantMerge generated from: '<S1>/VariantSource3' */
    rtb_VariantMerge_For_Variant__d = CTCR_ac_B.OutportBufferForCTCR_b_MinCreep;

#elif !Rte_SysCon_Variant_CTCR_PxPy && Rte_SysCon_Variant_CTCR_FUNC

    /* VariantMerge generated from: '<S1>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource8'
     */
    rtb_VariantMerge_For_Variant__d = CTCR_ac_B.Gain_n;

#endif

    /* End of SignalConversion generated from: '<S1>/VeCTCR_M_WheelMin4ECM_PxPy' */

    /* SignalConversion generated from: '<S1>/VeCTCR_b_MinCreepEnable_ECM' */
#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    /* Outport: '<Root>/VeCTCR_b_MinCreep_Enable_ECM' */
    (void)Rte_Write_VeCTCR_b_MinCreep_Enable_ECM_Value
        (rtb_VariantMerge_For_Variant__d);

#endif

    /* End of SignalConversion generated from: '<S1>/VeCTCR_b_MinCreepEnable_ECM' */

    /* SignalConversion generated from: '<S1>/VariantSource3' */
#if Rte_SysCon_Variant_CTCR_PxPy

    /* VariantMerge generated from: '<S1>/VariantSource3' */
    rtb_VariantMerge_For_Variant__d = CTCR_ac_B.Logical5[1];

#elif !Rte_SysCon_Variant_CTCR_PxPy && Rte_SysCon_Variant_CTCR_FUNC

    /* VariantMerge generated from: '<S1>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource3'
     */
    rtb_VariantMerge_For_Variant__d = CTCR_ac_B.Gain_dn;

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource3' */

    /* SignalConversion generated from: '<S1>/VeCTCR_b_MinCreep_Enable' */
#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    /* Outport: '<Root>/VeCTCR_b_MinCreep_Enable' */
    (void)Rte_Write_VeCTCR_b_MinCreep_Enable_Value
        (rtb_VariantMerge_For_Variant__d);

#endif

    /* End of SignalConversion generated from: '<S1>/VeCTCR_b_MinCreep_Enable' */

    /* SignalConversion generated from: '<S1>/VeCTCR_b_MinCreep_Enable_ECM_FUNC' incorporates:
     *  SignalConversion generated from: '<S1>/VeCTCR_b_MinCreep_Enable_FUNC'
     */
#if Rte_SysCon_Variant_CTCR_FUNC

    /* SignalConversion generated from: '<S1>/VeCTCR_b_MinCreep_Enable_ECM_FUNC' */
    rtb_OutportBufferForVeCTCR_b_Mi = CTCR_ac_B.Gain_n;

    /* SignalConversion generated from: '<S1>/VeCTCR_b_MinCreep_Enable_FUNC' */
    rtb_OutportBufferForVeCTCR_b__j = CTCR_ac_B.Gain_dn;

#endif

    /* End of SignalConversion generated from: '<S1>/VeCTCR_b_MinCreep_Enable_ECM_FUNC' */

    /* SignalConversion generated from: '<S1>/VariantSource11' */
#if Rte_SysCon_Variant_CTCR_PxPy

    /* VariantMerge generated from: '<S1>/VariantSource11' */
    rtb_VariantMerge_For_Variant_So = CTCR_ac_B.Gain_cx;

#else

    /* VariantMerge generated from: '<S1>/VariantSource11' incorporates:
     *  Inport: '<Root>/VeVTVR_M_LoadTorqFront_Min'
     */
    (void)Rte_Read_VeVTVR_M_LoadTorqFront_Min_Value
        (&rtb_VariantMerge_For_Variant_So);

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource11' */

    /* Outport: '<Root>/VeCTCR_M_SumTrqMinPwrTrn' incorporates:
     *  Gain: '<S7>/Gain'
     */
    (void)Rte_Write_VeCTCR_M_SumTrqMinPwrTrn_Value
        (rtb_VariantMerge_For_Variant_So);

    /* SignalConversion generated from: '<S1>/VeCTCR_M_MinCreepWheelTrqBlend_FUNC' incorporates:
     *  SignalConversion generated from: '<S1>/VeCTCR_M_MinCreepWheelTrq_FUNC'
     *  SignalConversion generated from: '<S1>/VeCTCR_M_WheelMin4ECM_FUNC_IRV'
     *  SignalConversion generated from: '<S1>/VeCTCR_b_MinCreep_Enable_ECM_FUNC'
     *  SignalConversion generated from: '<S1>/VeCTCR_b_MinCreep_Enable_FUNC'
     */
#if Rte_SysCon_Variant_CTCR_FUNC

    /* Merge: '<Root>/VeCTCR_M_MinCreepWheelTrqBlend_IRV_Merge' */
    Rte_IrvWrite_CTCR_MedTEB2_VeCTCR_M_MinCreepWheelTrqBlend_FUNC_IRV
        (rtb_OutportBufferForVeCTCR_M_Mi);

    /* Merge: '<Root>/Merge_13_Irv' */
    Rte_IrvWrite_CTCR_MedTEB2_VeCTCR_M_MinCreepWheelTrq_FUNC_IRV
        (rtb_OutportBufferForVeCTCR_M__j);

    /* Merge: '<Root>/Merge_25_Irv' */
    Rte_IrvWrite_CTCR_MedTEB2_VeCTCR_M_WheelMin4ECM_FUNC_IRV_IRV
        (rtb_OutportBufferForVeCTCR_M_Wh);

    /* Merge: '<Root>/Merge_26_Irv' */
    Rte_IrvWrite_CTCR_MedTEB2_VeCTCR_b_MinCreep_Enable_ECM_FUNC_IRV
        (rtb_OutportBufferForVeCTCR_b_Mi);

    /* Merge: '<Root>/Merge_16_Irv' */
    Rte_IrvWrite_CTCR_MedTEB2_VeCTCR_b_MinCreep_Enable_FUNC_IRV
        (rtb_OutportBufferForVeCTCR_b__j);

#endif

    /* End of SignalConversion generated from: '<S1>/VeCTCR_M_MinCreepWheelTrqBlend_FUNC' */

    /* SignalConversion generated from: '<S1>/VariantSource10' */
#if Rte_SysCon_Variant_CTCR_PxPy

    /* Outport: '<Root>/VeCTCR_M_TransIntakeWhlTgt_Raw' */
    (void)Rte_Write_VeCTCR_M_TransIntakeWhlTgt_Raw_Value(CTCR_ac_B.Gain_c);

#elif !Rte_SysCon_Variant_CTCR_PxPy && Rte_SysCon_Variant_CTCR_FUNC

    /* Outport: '<Root>/VeCTCR_M_TransIntakeWhlTgt_Raw' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource10'
     */
    (void)Rte_Write_VeCTCR_M_TransIntakeWhlTgt_Raw_Value(CTCR_ac_B.Gain_d);

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource10' */

    /* SignalConversion generated from: '<S1>/VariantSource5' */
#if Rte_SysCon_Variant_CTCR_PxPy

    /* Outport: '<Root>/VeCTCR_M_MinCreepFWTrq' */
    (void)Rte_Write_VeCTCR_M_MinCreepFWTrq_Value(CTCR_ac_B.Switch2);

#elif !Rte_SysCon_Variant_CTCR_PxPy && Rte_SysCon_Variant_CTCR_FUNC

    /* Outport: '<Root>/VeCTCR_M_MinCreepFWTrq' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource5'
     */
    (void)Rte_Write_VeCTCR_M_MinCreepFWTrq_Value
        (CTCR_ac_B.OutportBufferForVeCTCR_M_MinC_c);

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource5' */

    /* SignalConversion generated from: '<S1>/VariantSource6' */
#if Rte_SysCon_Variant_CTCR_PxPy

    /* Outport: '<Root>/VeCTCR_r_MinCreepBlendingFactorBlended' */
    (void)Rte_Write_VeCTCR_r_MinCreepBlendingFactorBlended_Value
        (CTCR_ac_B.Gain_dx);

#elif !Rte_SysCon_Variant_CTCR_PxPy && Rte_SysCon_Variant_CTCR_FUNC

    /* Outport: '<Root>/VeCTCR_r_MinCreepBlendingFactorBlended' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource6'
     */
    (void)Rte_Write_VeCTCR_r_MinCreepBlendingFactorBlended_Value
        (CTCR_ac_B.OutportBufferForVeCTCR_r_MinC_e);

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource6' */

    /* SignalConversion generated from: '<S1>/VariantSource7' */
#if Rte_SysCon_Variant_CTCR_PxPy

    /* Outport: '<Root>/VeCTCR_b_MinCreepEnable_Stgc' */
    (void)Rte_Write_VeCTCR_b_MinCreepEnable_Stgc_Value(CTCR_ac_B.Gain_n3);

#elif !Rte_SysCon_Variant_CTCR_PxPy && Rte_SysCon_Variant_CTCR_FUNC

    /* Outport: '<Root>/VeCTCR_b_MinCreepEnable_Stgc' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource7'
     */
    (void)Rte_Write_VeCTCR_b_MinCreepEnable_Stgc_Value
        (CTCR_ac_B.OutportBufferForVeCTCR_b_MinC_f);

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource7' */

    /* SignalConversion generated from: '<S1>/VariantSource9' */
#if Rte_SysCon_Variant_CTCR_PxPy

    /* Outport: '<Root>/VeCTCR_M_WheelTrqMinOverrev' */
    (void)Rte_Write_VeCTCR_M_WheelTrqMinOverrev_Value(CTCR_ac_B.MinMax13);

#elif !Rte_SysCon_Variant_CTCR_PxPy && Rte_SysCon_Variant_CTCR_FUNC

    /* Outport: '<Root>/VeCTCR_M_WheelTrqMinOverrev' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource9'
     */
    (void)Rte_Write_VeCTCR_M_WheelTrqMinOverrev_Value
        (CTCR_ac_B.VeDTRR_M_MgateMinTrq);

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource9' */

    /* Outport: '<Root>/VeCTCR_M_MinCreep_ToCreepCL' incorporates:
     *  Constant: '<S1>/ConstantValue1'
     *  SignalConversion generated from: '<S1>/VeCTCR_M_MinCreep_ToCreepCL'
     */
    (void)Rte_Write_VeCTCR_M_MinCreep_ToCreepCL_Value(0.0F);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */
}

/* Model step function for TID2 */
#if Rte_SysCon_Variant_CTCR_FUNC

FUNC(void, CTCR_CODE) CTCR_MedTEB3(void) /* Explicit Task: MedTEB3 */
{

#if Rte_SysCon_Variant_CTCR_FUNC

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    float32 tmpRead_0;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    boolean rtb_VeCTCR_b_AeCoastStat;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    boolean rtb_Logical2_n;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    float32 rtb_TmpSignalConversionAtVeRGNR;

#endif

#if Rte_SysCon_Variant_CTCR_FUNC

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' */
    /* Inport: '<Root>/VeAECR_b_AeCoastStat' */
    (void)Rte_Read_VeAECR_b_AeCoastStat_Value(&rtb_VeCTCR_b_AeCoastStat);

    /* Outputs for Function Call SubSystem: '<Root>/CTCR_MedTEB3' */
    /* SignalConversion generated from: '<S2>/VeRGNR_M_ToMin4ECM' incorporates:
     *  Inport: '<Root>/VeRGNR_M_ToMin4ECM'
     */
    (void)Rte_Read_VeRGNR_M_ToMin4ECM_Value(&rtb_TmpSignalConversionAtVeRGNR);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CTCR_AeCoast_FUNC'
     */
    /* Logic: '<S351>/Logical' incorporates:
     *  Constant: '<S352>/HeCTCR_b_EnblAecoastStat'
     */
    rtb_VeCTCR_b_AeCoastStat = (rtb_VeCTCR_b_AeCoastStat &&
        (HeCTCR_b_EnblAecoastStat));

    /* Switch: '<S351>/Switch3' incorporates:
     *  Constant: '<S354>/KeCTCR_b_UsePedalGrad'
     *  Merge: '<Root>/Merge_16_Irv'
     *  Merge: '<Root>/Merge_26_Irv'
     *  SignalConversion generated from: '<S2>/VeCTCR_b_MinCreep_Enable_ECM_read'
     *  SignalConversion generated from: '<S2>/VeCTCR_b_MinCreep_Enable_Read'
     */
    if (KeCTCR_b_UsePedalGrad)
    {
        rtb_Logical2_n =
            Rte_IrvRead_CTCR_MedTEB3_VeCTCR_b_MinCreep_Enable_ECM_FUNC_IRV();
    }
    else
    {
        rtb_Logical2_n =
            Rte_IrvRead_CTCR_MedTEB3_VeCTCR_b_MinCreep_Enable_FUNC_IRV();
    }

    /* End of Switch: '<S351>/Switch3' */

    /* Logic: '<S351>/Logical2' */
    rtb_Logical2_n = (rtb_Logical2_n || rtb_VeCTCR_b_AeCoastStat);

    /* Switch: '<S351>/Switch1' incorporates:
     *  Inport: '<Root>/VeATRR_M_MinPedal_Tact'
     *  Inport: '<Root>/VeOITR_M_OutTorqReqModTactMin'
     */
    if (rtb_Logical2_n)
    {
        /* Switch: '<S351>/Switch4' incorporates:
         *  Constant: '<S354>/KeCTCR_b_UsePedalGrad'
         *  Merge: '<Root>/Merge_13_Irv'
         *  Merge: '<Root>/Merge_25_Irv'
         *  SignalConversion generated from: '<S2>/VeCTCR_M_MinCreepWheelTrq_ECM_read'
         *  SignalConversion generated from: '<S2>/VeCTCR_M_MinCreepWheelTrq_Read'
         */
        if (KeCTCR_b_UsePedalGrad)
        {
            tmpRead_0 =
                Rte_IrvRead_CTCR_MedTEB3_VeCTCR_M_WheelMin4ECM_FUNC_IRV_IRV();
        }
        else
        {
            tmpRead_0 =
                Rte_IrvRead_CTCR_MedTEB3_VeCTCR_M_MinCreepWheelTrq_FUNC_IRV();
        }

        /* End of Switch: '<S351>/Switch4' */

        /* Switch: '<S351>/Switch2' incorporates:
         *  Constant: '<S351>/ConstantValue5'
         */
        if (rtb_VeCTCR_b_AeCoastStat)
        {
            tmpRead = rtb_TmpSignalConversionAtVeRGNR;
        }
        else
        {
            tmpRead = -9999.0F;
        }

        /* End of Switch: '<S351>/Switch2' */

        /* Switch: '<S351>/Switch1' incorporates:
         *  Merge: '<Root>/VeCTCR_M_MinCreepWheelTrqBlend_IRV_Merge'
         *  MinMax: '<S351>/MinMax1'
         *  MinMax: '<S351>/MinMax2'
         *  SignalConversion generated from: '<S2>/VeCTCR_M_MinCreepWheelTrqBlend_Read'
         */
        rtb_TmpSignalConversionAtVeRGNR = fmaxf(fmaxf(tmpRead_0, tmpRead), fminf
            (Rte_IrvRead_CTCR_MedTEB3_VeCTCR_M_MinCreepWheelTrqBlend_FUNC_IRV(),
             rtb_TmpSignalConversionAtVeRGNR));
    }
    else
    {
        (void)Rte_Read_VeATRR_M_MinPedal_Tact_Value(&tmpRead_0);
        (void)Rte_Read_VeOITR_M_OutTorqReqModTactMin_Value(&tmpRead);

        /* Switch: '<S351>/Switch1' incorporates:
         *  Constant: '<S351>/ConstantValue1'
         *  Inport: '<Root>/VeATRR_M_MinPedal_Tact'
         *  Inport: '<Root>/VeOITR_M_OutTorqReqModTactMin'
         *  MinMax: '<S351>/MinMax3'
         */
        rtb_TmpSignalConversionAtVeRGNR = fminf(fminf(0.0F, tmpRead), tmpRead_0);
    }

    /* End of Switch: '<S351>/Switch1' */

    /* SignalConversion generated from: '<S351>/VeCTCR_M_WheelMin4Aecoast' incorporates:
     *  Constant: '<S353>/KeCTCR_M_WheelMin4Aecoast'
     */
    CTCR_ac_B.OutportBufferForVeCTCR_M_Whee_m = KeCTCR_M_WheelMin4Aecoast;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeCTCR_M_WheelMin4Aecoast' incorporates:
     *  SignalConversion generated from: '<S2>/VeCTCR_M_WheelMin4Aecoast'
     */
    (void)Rte_Write_VeCTCR_M_WheelMin4Aecoast_Value
        (CTCR_ac_B.OutportBufferForVeCTCR_M_Whee_m);

    /* Outport: '<Root>/VeCTCR_M_WheelMin4ECM' incorporates:
     *  SignalConversion generated from: '<S2>/VeCTCR_M_WheelMin4ECM'
     */
    (void)Rte_Write_VeCTCR_M_WheelMin4ECM_Value(rtb_TmpSignalConversionAtVeRGNR);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CTCR_AeCoast_FUNC'
     */
    /* Outport: '<Root>/VeCTCR_b_MinCreepWheelTrq_Enable' incorporates:
     *  Gain: '<S356>/Gain'
     *  SignalConversion generated from: '<S2>/VeCTCR_b_MinCreepWheelTrq_Enable'
     */
    (void)Rte_Write_VeCTCR_b_MinCreepWheelTrq_Enable_Value(rtb_Logical2_n);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/CTCR_MedTEB3' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' */
#endif

}

#endif

/* Output function */
FUNC(void, CTCR_CODE) CTCR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CTCR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/CTCO_PUPRoutine'
     */
    /* SignalConversion generated from: '<S357>/VeCTCR_b_MinCreepWheelTrq_EnableInit' */
    CTCR_ac_B.OutportBufferForVeCTCR_b_MinCre = false;

    /* SignalConversion generated from: '<S357>/VeCTCR_M_WheelMin4ECMInit' */
    CTCR_ac_B.OutportBufferForVeCTCR_M_WheelM = 0.0F;

    /* SignalConversion generated from: '<S357>/VeCTCR_b_MinCreep_EnableInit' */
    CTCR_ac_B.OutportBufferForVeCTCR_b_MinC_e = false;

    /* SignalConversion generated from: '<S357>/VeCTCR_b_MinCreep_EnableInit_write' */
    CTCR_ac_B.OutportBufferForVeCTCR_b_MinC_o = false;

    /* SignalConversion generated from: '<S357>/VeCTCR_M_MinCreepWheelTrqInit' */
    CTCR_ac_B.OutportBufferForVeCTCR_M_MinCre = -9999.0F;

    /* SignalConversion generated from: '<S357>/VeCTCR_M_MinCreepWheelTrqInit_write' */
    CTCR_ac_B.OutportBufferForVeCTCR_M_MinC_o = -9999.0F;

    /* SignalConversion generated from: '<S357>/VeCTCR_M_MinCreepFWTrqInit' */
    CTCR_ac_B.OutportBufferForVeCTCR_M_MinC_m = -9999.0F;

    /* SignalConversion generated from: '<S357>/VeCTCR_M_MinCreep_ToCreepCLInit' */
    CTCR_ac_B.OutportBufferForVeCTCR_M_Min_ot = 0.0F;

    /* SignalConversion generated from: '<S357>/VeCTCR_r_MinCreepBlendingFactor_Raw_Init' */
    CTCR_ac_B.OutportBufferForVeCTCR_r_MinCre = 0.0F;

    /* SignalConversion generated from: '<S357>/VeCTCR_M_WheelMin4Aecoast_Init' incorporates:
     *  Constant: '<S359>/KeCTCR_M_WheelMin4Aecoast_Init'
     */
    CTCR_ac_B.OutportBufferForVeCTCR_M_Whee_g = KeCTCR_M_WheelMin4Aecoast_Init;

    /* SignalConversion generated from: '<S357>/VeCTCR_b_MinCreepEnable_Stgc_Init' */
    CTCR_ac_B.OutportBufferForVeCTCR_b_MinC_c = false;

    /* SignalConversion generated from: '<S357>/VeCTCR_M_SumTrqMinPwrTrn_init' */
    CTCR_ac_B.OutportBufferForVeCTCR_M_SumTrq = -1000.0F;

    /* SignalConversion generated from: '<S357>/VeCTCR_M_WheelTrqMinOverrev_init' */
    CTCR_ac_B.OutportBufferForVeCTCR_M_WheelT = -9999.0F;

    /* SignalConversion generated from: '<S357>/VeCTCR_M_TransIntakeWhlTgt_Raw_Init' */
    CTCR_ac_B.OutportBufferForVeCTCR_M_TransI = 0.0F;

    /* SignalConversion generated from: '<S357>/VeCTCR_b_MinCreep_EnableECMInit' */
    CTCR_ac_B.OutportBufferForVeCTCR_b_MinC_k = false;

    /* SignalConversion generated from: '<S357>/VeCTCR_b_MinCreep_EnableECMInit_write' */
    CTCR_ac_B.OutportBufferForVeCTCR_b_Min_o1 = false;

    /* SignalConversion generated from: '<S357>/VeCTCR_M_MinCreepWheelTrqECMInit' */
    CTCR_ac_B.OutportBufferForVeCTCR_M_MinC_a = -9999.0F;

    /* SignalConversion generated from: '<S357>/VeCTCR_M_MinCreepWheelTrqBlendInit' */
    CTCR_ac_B.OutportBufferForVeCTCR_M_Min_ay = 0.0F;

    /* SignalConversion generated from: '<S357>/VeCTCR_M_MinCreepFWTrqTgt_Init' */
    CTCR_ac_B.OutportBufferForVeCTCR_M_MinC_l = 0.0F;

    /* SignalConversion generated from: '<S357>/VeCTCR_b_CreepReserveActive_Init' */
    CTCR_ac_B.OutportBufferForVeCTCR_b_CreepR = false;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeCTCR_M_MinCreepFWTrq' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_M_MinCreepFWTrqInit'
     */
    (void)Rte_Write_VeCTCR_M_MinCreepFWTrq_Value
        (CTCR_ac_B.OutportBufferForVeCTCR_M_MinC_m);

    /* Outport: '<Root>/VeCTCR_M_MinCreepFWTrqTgt' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_M_MinCreepFWTrqTgt_Init'
     */
    (void)Rte_Write_VeCTCR_M_MinCreepFWTrqTgt_Value
        (CTCR_ac_B.OutportBufferForVeCTCR_M_MinC_l);

    /* Outport: '<Root>/VeCTCR_M_MinCreepWheelTrq' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_M_MinCreepWheelTrqInit'
     */
    (void)Rte_Write_VeCTCR_M_MinCreepWheelTrq_Value
        (CTCR_ac_B.OutportBufferForVeCTCR_M_MinCre);

    /* Outport: '<Root>/VeCTCR_M_MinCreep_ToCreepCL' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_M_MinCreep_ToCreepCLInit'
     */
    (void)Rte_Write_VeCTCR_M_MinCreep_ToCreepCL_Value
        (CTCR_ac_B.OutportBufferForVeCTCR_M_Min_ot);

    /* Outport: '<Root>/VeCTCR_M_SumTrqMinPwrTrn' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_M_SumTrqMinPwrTrn_init'
     */
    (void)Rte_Write_VeCTCR_M_SumTrqMinPwrTrn_Value
        (CTCR_ac_B.OutportBufferForVeCTCR_M_SumTrq);

    /* Outport: '<Root>/VeCTCR_M_TransIntakeWhlTgt_Raw' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_M_TransIntakeWhlTgt_Raw_Init'
     */
    (void)Rte_Write_VeCTCR_M_TransIntakeWhlTgt_Raw_Value
        (CTCR_ac_B.OutportBufferForVeCTCR_M_TransI);

    /* Outport: '<Root>/VeCTCR_M_WheelMin4Aecoast' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_M_WheelMin4Aecoast_Init'
     */
    (void)Rte_Write_VeCTCR_M_WheelMin4Aecoast_Value
        (CTCR_ac_B.OutportBufferForVeCTCR_M_Whee_g);

    /* Outport: '<Root>/VeCTCR_M_WheelMin4ECM' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_M_WheelMin4ECMInit'
     */
    (void)Rte_Write_VeCTCR_M_WheelMin4ECM_Value
        (CTCR_ac_B.OutportBufferForVeCTCR_M_WheelM);

    /* Outport: '<Root>/VeCTCR_M_WheelTrqMinOverrev' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_M_WheelTrqMinOverrev_init'
     */
    (void)Rte_Write_VeCTCR_M_WheelTrqMinOverrev_Value
        (CTCR_ac_B.OutportBufferForVeCTCR_M_WheelT);

    /* Outport: '<Root>/VeCTCR_b_CreepReserveActive' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_b_CreepReserveActive_Init'
     */
    (void)Rte_Write_VeCTCR_b_CreepReserveActive_Value
        (CTCR_ac_B.OutportBufferForVeCTCR_b_CreepR);

    /* Outport: '<Root>/VeCTCR_b_MinCreepEnable_Stgc' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_b_MinCreepEnable_Stgc_Init'
     */
    (void)Rte_Write_VeCTCR_b_MinCreepEnable_Stgc_Value
        (CTCR_ac_B.OutportBufferForVeCTCR_b_MinC_c);

    /* Outport: '<Root>/VeCTCR_b_MinCreepWheelTrq_Enable' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_b_MinCreepWheelTrq_EnableInit'
     */
    (void)Rte_Write_VeCTCR_b_MinCreepWheelTrq_Enable_Value
        (CTCR_ac_B.OutportBufferForVeCTCR_b_MinCre);

    /* Outport: '<Root>/VeCTCR_b_MinCreep_Enable_ECM' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_b_MinCreep_EnableECMInit'
     */
    (void)Rte_Write_VeCTCR_b_MinCreep_Enable_ECM_Value
        (CTCR_ac_B.OutportBufferForVeCTCR_b_MinC_k);

    /* Outport: '<Root>/VeCTCR_b_MinCreep_Enable' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_b_MinCreep_EnableInit'
     */
    (void)Rte_Write_VeCTCR_b_MinCreep_Enable_Value
        (CTCR_ac_B.OutportBufferForVeCTCR_b_MinC_e);

    /* Outport: '<Root>/VeCTCR_r_MinCreepBlendingFactorBlended' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_r_MinCreepBlendingFactor_Raw_Init'
     */
    (void)Rte_Write_VeCTCR_r_MinCreepBlendingFactorBlended_Value
        (CTCR_ac_B.OutportBufferForVeCTCR_r_MinCre);

    /* Merge: '<Root>/VeCTCR_M_MinCreepWheelTrqBlend_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_M_MinCreepWheelTrqBlendInit'
     * */
    Rte_IrvWrite_CTCR_PwrOn_VeCTCR_M_MinCreepWheelTrqBlend_FUNC_IRV
        (CTCR_ac_B.OutportBufferForVeCTCR_M_Min_ay);

    /* Merge: '<Root>/Merge_25_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_M_MinCreepWheelTrqECMInit'
     * */
    Rte_IrvWrite_CTCR_PwrOn_VeCTCR_M_WheelMin4ECM_FUNC_IRV_IRV
        (CTCR_ac_B.OutportBufferForVeCTCR_M_MinC_a);

    /* Merge: '<Root>/Merge_26_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_M_MinCreepWheelTrqECMInit_write'
     * */
    Rte_IrvWrite_CTCR_PwrOn_VeCTCR_b_MinCreep_Enable_ECM_FUNC_IRV
        (CTCR_ac_B.OutportBufferForVeCTCR_b_Min_o1);

    /* Merge: '<Root>/Merge_13_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_M_MinCreepWheelTrqInit_write'
     * */
    Rte_IrvWrite_CTCR_PwrOn_VeCTCR_M_MinCreepWheelTrq_FUNC_IRV
        (CTCR_ac_B.OutportBufferForVeCTCR_M_MinC_o);

    /* Merge: '<Root>/Merge_16_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/VeCTCR_b_MinCreep_EnableInit_write'
     * */
    Rte_IrvWrite_CTCR_PwrOn_VeCTCR_b_MinCreep_Enable_FUNC_IRV
        (CTCR_ac_B.OutportBufferForVeCTCR_b_MinC_o);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, CTCR_CODE) CTCR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CTCR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/CTCO_PUPRoutine'
     */
    /* SystemInitialize for SignalConversion generated from: '<S357>/VeCTCR_M_MinCreepWheelTrqInit' */
    CTCR_ac_B.OutportBufferForVeCTCR_M_MinCre = -9999.0F;

    /* SystemInitialize for SignalConversion generated from: '<S357>/VeCTCR_M_MinCreepWheelTrqInit_write' */
    CTCR_ac_B.OutportBufferForVeCTCR_M_MinC_o = -9999.0F;

    /* SystemInitialize for SignalConversion generated from: '<S357>/VeCTCR_M_MinCreepFWTrqInit' */
    CTCR_ac_B.OutportBufferForVeCTCR_M_MinC_m = -9999.0F;

    /* SystemInitialize for SignalConversion generated from: '<S357>/VeCTCR_M_WheelMin4Aecoast_Init' incorporates:
     *  Constant: '<S359>/KeCTCR_M_WheelMin4Aecoast_Init'
     */
    CTCR_ac_B.OutportBufferForVeCTCR_M_Whee_g = KeCTCR_M_WheelMin4Aecoast_Init;

    /* SystemInitialize for SignalConversion generated from: '<S357>/VeCTCR_M_SumTrqMinPwrTrn_init' */
    CTCR_ac_B.OutportBufferForVeCTCR_M_SumTrq = -1000.0F;

    /* SystemInitialize for SignalConversion generated from: '<S357>/VeCTCR_M_WheelTrqMinOverrev_init' */
    CTCR_ac_B.OutportBufferForVeCTCR_M_WheelT = -9999.0F;

    /* SystemInitialize for SignalConversion generated from: '<S357>/VeCTCR_M_MinCreepWheelTrqECMInit' */
    CTCR_ac_B.OutportBufferForVeCTCR_M_MinC_a = -9999.0F;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' incorporates:
     *  SubSystem: '<Root>/CTCR_MedTEB2'
     */
#if Rte_SysCon_Variant_CTCR_FUNC || Rte_SysCon_Variant_CTCR_PxPy

    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
#if Rte_SysCon_Variant_CTCR_FUNC

    /* SystemInitialize for Function Call SubSystem: '<S1>/CTCR_MinCreepPedal_FUNC' */
    /* SystemInitialize for SignalConversion generated from: '<S5>/VeCTCR_M_MinCreepFWTrq' */
    CTCR_ac_B.OutportBufferForVeCTCR_M_MinC_c = -9999.0F;

    /* SystemInitialize for SignalConversion generated from: '<S5>/VeCTCR_r_MinCreepBlendingFactorBlended' */
    CTCR_ac_B.OutportBufferForVeCTCR_r_MinC_e = 1.0F;

    /* End of SystemInitialize for SubSystem: '<S1>/CTCR_MinCreepPedal_FUNC' */
#endif

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */
#if Rte_SysCon_Variant_CTCR_FUNC

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/CTCR_MedTEB3' */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CTCR_AeCoast_FUNC'
     */
    /* SystemInitialize for SignalConversion generated from: '<S351>/VeCTCR_M_WheelMin4Aecoast' incorporates:
     *  Constant: '<S353>/KeCTCR_M_WheelMin4Aecoast'
     */
    CTCR_ac_B.OutportBufferForVeCTCR_M_Whee_m = KeCTCR_M_WheelMin4Aecoast;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/CTCR_MedTEB3' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' */
#endif

}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
