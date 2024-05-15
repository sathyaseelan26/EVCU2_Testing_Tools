/*
 * File: TMDR_ac.c
 *
 * Code generated for Simulink model 'TMDR_ac'.
 *
 * Model version                  : 9.427
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:45:15 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TMDR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_TMDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) HeTMDR_t_dT = 0.02F;/* Referenced by: '<S14>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(boolean, TMDR_VAR_INIT) KaTMDR_b_CSVROvrdEnbl[4] =
{
    0, 0, 0, 0
} ;                                    /* Referenced by: '<S334>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_MSG_Selec

static volatile CONST(boolean, TMDR_VAR_INIT) KaTMDR_b_HigherTgtSOCMd[60] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 1, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S380>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(boolean, TMDR_VAR_INIT) KaTMDR_b_PLTROvrdEnbl[2] =
{
    0, 0
} ;                                    /* Referenced by: '<S343>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(boolean, TMDR_VAR_INIT) KaTMDR_b_STRROvrdEnbl[5] =
{
    0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S347>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_MSG_Selec

static volatile CONST(uint8, TMDR_VAR_INIT) KaTMDR_e_ActualDrvMdToCAN[25] =
{
    0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U, 8U, 9U, 10U, 11U, 12U, 13U, 14U, 15U, 16U,
    17U, 18U, 19U, 20U, 21U, 22U, 23U, 24U
} ;                                    /* Referenced by: '<S381>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_MSG_Selec

static volatile CONST(uint8, TMDR_VAR_INIT) KaTMDR_e_PropulsionMdToCAN[19] =
{
    0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U, 8U, 9U, 10U, 11U, 12U, 13U, 14U, 15U, 16U,
    17U, 18U
} ;                                    /* Referenced by: '<S382>/Calib' */

#endif

static volatile CONST(uint8, TMDR_VAR_INIT) KaTMDR_i_TrueTrrnMd[19] =
{
    0U, 1U, 2U, 3U, 4U, 5U, 5U, 5U, 6U, 7U, 1U, 8U, 1U, 4U, 4U, 4U, 2U, 2U, 1U
} ;                                    /* Referenced by:
                                        * '<S383>/Calib'
                                        * '<S490>/Calib'
                                        * '<S127>/Calib'
                                        */

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KaTMDR_r_TorqSpltTrrnLockLow[24] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.75F, 0.0F, 0.0F, 0.0F, 0.0F, 0.5F, 0.5F, 0.6F,
    0.0F, 0.5F, 0.5F, 0.5F, 0.0F, 0.5F, 0.5F, 0.4F, 0.0F, 0.4F, 0.4F, 0.4F
} ;                                    /* Referenced by:
                                        * '<S160>/Calib'
                                        * '<S167>/Calib'
                                        * '<S182>/Calib'
                                        * '<S191>/Calib'
                                        * '<S199>/Calib'
                                        * '<S208>/Calib'
                                        * '<S217>/Calib'
                                        * '<S228>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint16, TMDR_VAR_INIT) KeTMDR_Cnt_OffDlySelTrrnMd = 2U;/* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_M_TrqFloorActvThrsh = 10.0F;/* Referenced by: '<S320>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_M_TrqFloorDeactvThrsh =
    5.0F;                              /* Referenced by: '<S321>/Calib' */

#endif

#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_Pct_GasPedalNotPresPos =
    0.0F;                              /* Referenced by: '<S424>/Calib' */

#endif

#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_Pct_SOC_Low = 20.0F;/* Referenced by: '<S430>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_Pct_TargetSOCMudSand =
    80.0F;                             /* Referenced by:
                                        * '<S183>/Calib'
                                        * '<S192>/Calib'
                                        * '<S209>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_Pct_TargetSOCRock = 36.0F;/* Referenced by: '<S200>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_Pct_TargetSOCSnow = 36.0F;/* Referenced by: '<S218>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_Pct_TargetSOCSport = 79.53F;/* Referenced by: '<S229>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_Pct_TgtSOCCOREBEV = 20.0F;/* Referenced by: '<S384>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_MSG_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_Pct_TgtSOC_4Lo = 20.0F;/* Referenced by: '<S410>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_MSG_Selec && Rte_SysCon_Variant_TMDR_REPBSelec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_Pct_TgtSOC_AutoValet =
    16.75F;                            /* Referenced by: '<S403>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_MSG_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_Pct_TgtSOC_Higher = 16.0F;/* Referenced by: '<S411>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_MSG_Selec && Rte_SysCon_Variant_TMDR_REPBSelec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_Pct_TgtSOC_NonEsp = 16.75F;/* Referenced by: '<S404>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_MSG_Selec && Rte_SysCon_Variant_TMDR_REPBSelec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_Pct_TgtSOC_ORHigh = 25.0F;/* Referenced by: '<S405>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_MSG_Selec && Rte_SysCon_Variant_TMDR_REPBSelec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_Pct_TgtSOC_ORLow = 25.0F;/* Referenced by: '<S406>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_MSG_Selec && Rte_SysCon_Variant_TMDR_REPBSelec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_Pct_TgtSOC_Snow = 16.75F;/* Referenced by: '<S407>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_MSG_Selec && Rte_SysCon_Variant_TMDR_REPBSelec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_Pct_TgtSOC_Sport = 35.0F;/* Referenced by: '<S408>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_MSG_Selec && Rte_SysCon_Variant_TMDR_REPBSelec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_Pct_TgtSOC_Tow = 35.0F;/* Referenced by: '<S409>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(boolean, TMDR_VAR_INIT) KeTMDR_b_DiagTest = 0;/* Referenced by: '<S15>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(boolean, TMDR_VAR_INIT) KeTMDR_b_DrvMdArbOvrdEnbl = 0;/* Referenced by: '<S340>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec || Rte_SysCon_Variant_TMDR_MSG_Selec

static volatile CONST(boolean, TMDR_VAR_INIT) KeTMDR_b_EnaTrrnMdDiag = 1;/* Referenced by:
                                                                      * '<S16>/Calib'
                                                                      * '<S385>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(boolean, TMDR_VAR_INIT) KeTMDR_b_EngOffAWD_Diag = 1;/* Referenced by: '<S17>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(boolean, TMDR_VAR_INIT) KeTMDR_b_EstSlopeAngleFAOvrdVal =
    0;                                 /* Referenced by: '<S344>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(boolean, TMDR_VAR_INIT) KeTMDR_b_PrimNoFAOvrdVal = 0;/* Referenced by: '<S335>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(boolean, TMDR_VAR_INIT) KeTMDR_b_SecNoFAOvrdVal = 0;/* Referenced by: '<S336>/Calib' */

#endif

#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

static volatile CONST(boolean, TMDR_VAR_INIT) KeTMDR_b_SelectorFaultDsbl = 1;/* Referenced by: '<S425>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(boolean, TMDR_VAR_INIT) KeTMDR_b_TRNRTCMFailureOvrdEnbl =
    0;                                 /* Referenced by: '<S353>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_dM_TrqFloorLimGrad =
    1.0E+7F;                           /* Referenced by: '<S322>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint16, TMDR_VAR_INIT) KeTMDR_d_BrkShtOffRsn = 0U;/* Referenced by: '<S39>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint16, TMDR_VAR_INIT) KeTMDR_d_BrkShtOffRsnSndFlt = 0U;/* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint16, TMDR_VAR_INIT) KeTMDR_d_TCMFailDsblEV_FltAWD = 3U;/* Referenced by: '<S112>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint16, TMDR_VAR_INIT) KeTMDR_d_TCMFailF_EV_FltAWD = 4U;/* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint16, TMDR_VAR_INIT) KeTMDR_d_TCMFail_4LockShtOff =
    65535U;                            /* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint16, TMDR_VAR_INIT) KeTMDR_d_TCMFail_4LowShtOff = 1U;/* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(sint16, TMDR_VAR_INIT) KeTMDR_d_TRNRTCMFailureOvrdVal = 3;/* Referenced by: '<S354>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint16, TMDR_VAR_INIT) KeTMDR_d_TrrnMdArbSel = 1U;/* Referenced by: '<S272>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(TeDMDR_e_DrvMd, TMDR_VAR_INIT) KeTMDR_e_DrvMdArbOvrdVal =
    CeDMDR_e_NoDrvMd;                  /* Referenced by: '<S341>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint32, TMDR_VAR_INIT) KeTMDR_g_BumpStrtRsnOvrVal = 0U;/* Referenced by: '<S348>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint32, TMDR_VAR_INIT) KeTMDR_g_BumpStrtRsnTrrn = 0U;/* Referenced by: '<S55>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint32, TMDR_VAR_INIT) KeTMDR_g_EVModeInhbtRsn2OvrVal =
    1048576U;                          /* Referenced by: '<S349>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint32, TMDR_VAR_INIT) KeTMDR_g_EVModeInhbtRsnOvrVal =
    3229618202U;                       /* Referenced by: '<S350>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint32, TMDR_VAR_INIT) KeTMDR_g_EVModeInhibitRsn2Trrn =
    1048660U;                          /* Referenced by: '<S56>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint32, TMDR_VAR_INIT) KeTMDR_g_EVModeInhibitRsnTrrn =
    8197U;                             /* Referenced by: '<S57>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint32, TMDR_VAR_INIT) KeTMDR_g_ImmedStopFltADW = 4096U;/* Referenced by: '<S72>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint32, TMDR_VAR_INIT) KeTMDR_g_ImmedStopRsnOvrVal = 4096U;/* Referenced by: '<S351>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint32, TMDR_VAR_INIT) KeTMDR_g_ImmedStopRsnTrrn = 0U;/* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint32, TMDR_VAR_INIT) KeTMDR_g_ShtOff4WhlDrv = 0U;/* Referenced by: '<S97>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint32, TMDR_VAR_INIT) KeTMDR_g_StrtDisAllowFltAWD = 0U;/* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint32, TMDR_VAR_INIT) KeTMDR_g_StrtDisAllowRsnOvrVal =
    76U;                               /* Referenced by: '<S352>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint32, TMDR_VAR_INIT) KeTMDR_g_StrtDisAllowRsnTrrn = 95U;/* Referenced by: '<S59>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_k_FiltCoeffNoAvrgAbs = 0.2F;/* Referenced by: '<S273>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_k_FiltCoeffSlopeAngle =
    0.5F;                              /* Referenced by: '<S274>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_n_PrimNoSgndFltrdOvrdVal =
    0.0F;                              /* Referenced by: '<S337>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_n_SecNoSgndFltrdOvrdVal =
    0.0F;                              /* Referenced by: '<S338>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_phi_EstSlopeAngleOvrdVal =
    35.0F;                             /* Referenced by: '<S345>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_t_DtctEngOffAWD = 3.0F;/* Referenced by: '<S18>/Calib' */

#endif

static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_t_TorqFloorBlnd_InInit =
    0.0F;                              /* Referenced by: '<S501>/Calib' */
static volatile CONST(float32, TMDR_VAR_INIT) KeTMDR_t_TorqFloorBlnd_OutInit =
    0.0F;                              /* Referenced by: '<S502>/Calib' */

#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

static volatile CONST(uint16, TMDR_VAR_INIT) KeTMDR_t_TrrnMdResetTh = 50U;/* Referenced by: '<S426>/Calib' */

#endif

#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

static volatile CONST(uint16, TMDR_VAR_INIT) KeTMDR_v_SpdRockMdTh = 3U;/* Referenced by: '<S429>/Calib' */

#endif

#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

static volatile CONST(uint16, TMDR_VAR_INIT) KeTMDR_v_SpdValetMdTh = 3U;/* Referenced by: '<S427>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint8, TMDR_VAR_INIT) KeTMDR_v_VehSpdChrgLmt_LSP = 16U;/* Referenced by: '<S312>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint8, TMDR_VAR_INIT) KeTMDR_v_VehSpdChrgLmt_RSP = 17U;/* Referenced by: '<S313>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint8, TMDR_VAR_INIT) KeTMDR_y_EV_SetFltAWD = 8U;/* Referenced by: '<S74>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint8, TMDR_VAR_INIT) KeTMDR_y_EV_ShtOffRsn = 8U;/* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint8, TMDR_VAR_INIT) KeTMDR_y_SpdShtOffRsn = 15U;/* Referenced by: '<S99>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(uint8, TMDR_VAR_INIT) KeTMDR_y_SpdShtOffSndFlt = 15U;/* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KtTMDR_M_TrqFloorVehSpdGrade[266] =
{
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F
} ;                                    /* Referenced by: '<S295>/Vector' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KtTMDR_M_TrqFloorVehSpdGradeMud
    [266] =
{
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 1550.0F, 1550.0F,
    1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F,
    1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F,
    1550.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F,
    775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F,
    775.0F, 775.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F,
    510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F,
    510.0F, 510.0F, 510.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F,
    380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F,
    380.0F, 380.0F, 380.0F, 380.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F,
    305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F,
    305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 220.0F, 220.0F, 220.0F, 220.0F,
    220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 220.0F,
    220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S298>/Vector' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT)
    KtTMDR_M_TrqFloorVehSpdGradeMudSand[266] =
{
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F,
    1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F,
    1500.0F, 1500.0F, 1500.0F, 1500.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F,
    510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F,
    510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 380.0F, 380.0F, 380.0F, 380.0F,
    380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F,
    380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 305.0F, 305.0F, 305.0F,
    305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F,
    305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 155.0F, 155.0F,
    155.0F, 155.0F, 155.0F, 155.0F, 155.0F, 155.0F, 155.0F, 155.0F, 155.0F,
    155.0F, 155.0F, 155.0F, 155.0F, 155.0F, 155.0F, 155.0F, 155.0F, 72.0F, 72.0F,
    72.0F, 72.0F, 72.0F, 72.0F, 72.0F, 72.0F, 72.0F, 72.0F, 72.0F, 72.0F, 72.0F,
    72.0F, 72.0F, 72.0F, 72.0F, 72.0F, 72.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F
} ;                                    /* Referenced by: '<S301>/Vector' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KtTMDR_M_TrqFloorVehSpdGradeRock
    [266] =
{
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 1550.0F, 1550.0F,
    1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F,
    1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F,
    1550.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F,
    775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F,
    775.0F, 775.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F,
    510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F,
    510.0F, 510.0F, 510.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F,
    380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F,
    380.0F, 380.0F, 380.0F, 380.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F,
    305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F,
    305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 220.0F, 220.0F, 220.0F, 220.0F,
    220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 220.0F,
    220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F
} ;                                    /* Referenced by: '<S304>/Vector' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KtTMDR_M_TrqFloorVehSpdGradeSand
    [266] =
{
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 1550.0F, 1550.0F,
    1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F,
    1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F, 1550.0F,
    1550.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F,
    775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F, 775.0F,
    775.0F, 775.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F,
    510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F, 510.0F,
    510.0F, 510.0F, 510.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F,
    380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F, 380.0F,
    380.0F, 380.0F, 380.0F, 380.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F,
    305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 305.0F,
    305.0F, 305.0F, 305.0F, 305.0F, 305.0F, 220.0F, 220.0F, 220.0F, 220.0F,
    220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 220.0F,
    220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 220.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S307>/Vector' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KtTMDR_M_TrqFloorVehSpdGradeSnow
    [266] =
{
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F, 2500.0F,
    2500.0F, 2500.0F, 2500.0F, 2500.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F
} ;                                    /* Referenced by: '<S310>/Vector' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KtTMDR_P_ChrgPwrMtrA_Tmp[7] =
{
    -25.0F, -23.0F, -22.0F, -20.0F, -15.0F, -10.0F, 0.0F
} ;                                    /* Referenced by: '<S315>/Vector' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KxTMDR_M_TrqFloorVehSpdGrade[14] =
{
    0.0F, 10.0F, 50.0F, 120.0F, 120.001F, 200.0F, 250.0F, 350.0F, 450.0F, 550.0F,
    800.0F, 1050.0F, 1500.0F, 2000.0F
} ;                                    /* Referenced by: '<S295>/Vector' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KxTMDR_M_TrqFloorVehSpdGradeMud[14]
    =
{
    0.0F, 10.0F, 50.0F, 100.0F, 150.0F, 200.0F, 250.0F, 350.0F, 450.0F, 550.0F,
    800.0F, 1050.0F, 1500.0F, 2000.0F
} ;                                    /* Referenced by: '<S298>/Vector' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT)
    KxTMDR_M_TrqFloorVehSpdGradeMudSand[14] =
{
    0.0F, 10.0F, 50.0F, 120.0F, 120.001F, 200.0F, 250.0F, 350.0F, 450.0F, 550.0F,
    800.0F, 1050.0F, 1500.0F, 2000.0F
} ;                                    /* Referenced by: '<S301>/Vector' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KxTMDR_M_TrqFloorVehSpdGradeRock
    [14] =
{
    0.0F, 10.0F, 50.0F, 100.0F, 150.0F, 200.0F, 250.0F, 350.0F, 450.0F, 550.0F,
    800.0F, 1050.0F, 1500.0F, 2000.0F
} ;                                    /* Referenced by: '<S304>/Vector' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KxTMDR_M_TrqFloorVehSpdGradeSand
    [14] =
{
    0.0F, 10.0F, 50.0F, 100.0F, 150.0F, 200.0F, 250.0F, 350.0F, 450.0F, 550.0F,
    800.0F, 1050.0F, 1500.0F, 2000.0F
} ;                                    /* Referenced by: '<S307>/Vector' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KxTMDR_M_TrqFloorVehSpdGradeSnow
    [14] =
{
    0.0F, 10.0F, 50.0F, 120.0F, 120.001F, 200.0F, 250.0F, 350.0F, 450.0F, 550.0F,
    800.0F, 1050.0F, 1500.0F, 2000.0F
} ;                                    /* Referenced by: '<S310>/Vector' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KxTMDR_P_ChrgPwrMtrA_Tmp[7] =
{
    130.0F, 135.0F, 140.0F, 145.0F, 150.0F, 155.0F, 160.0F
} ;                                    /* Referenced by: '<S315>/Vector' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KyTMDR_M_TrqFloorVehSpdGrade[19] =
{
    -44.999F, -40.0F, -35.0F, -30.0F, -25.0F, -20.0F, -15.0F, -10.0F, -5.0F,
    0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F
} ;                                    /* Referenced by: '<S295>/Vector' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KyTMDR_M_TrqFloorVehSpdGradeMud[19]
    =
{
    -44.999F, -40.0F, -35.0F, -30.0F, -25.0F, -20.0F, -15.0F, -10.0F, -5.0F,
    0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F
} ;                                    /* Referenced by: '<S298>/Vector' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT)
    KyTMDR_M_TrqFloorVehSpdGradeMudSand[19] =
{
    -44.999F, -40.0F, -35.0F, -30.0F, -25.0F, -20.0F, -15.0F, -10.0F, -5.0F,
    0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F
} ;                                    /* Referenced by: '<S301>/Vector' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KyTMDR_M_TrqFloorVehSpdGradeRock
    [19] =
{
    -44.999F, -40.0F, -35.0F, -30.0F, -25.0F, -20.0F, -15.0F, -10.0F, -5.0F,
    0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F
} ;                                    /* Referenced by: '<S304>/Vector' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KyTMDR_M_TrqFloorVehSpdGradeSand
    [19] =
{
    -44.999F, -40.0F, -35.0F, -30.0F, -25.0F, -20.0F, -15.0F, -10.0F, -5.0F,
    0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F
} ;                                    /* Referenced by: '<S307>/Vector' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static volatile CONST(float32, TMDR_VAR_INIT) KyTMDR_M_TrqFloorVehSpdGradeSnow
    [19] =
{
    -44.999F, -40.0F, -35.0F, -30.0F, -25.0F, -20.0F, -15.0F, -10.0F, -5.0F,
    0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F
} ;                                    /* Referenced by: '<S310>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_TMDR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TMDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(float32, TMDR_VAR_INIT) VeTMDC_M_TbmtTaChrg;/* '<S267>/MinMax4' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(float32, TMDR_VAR_INIT) VeTMDC_M_TrqFloorAftLimGrad;/* '<S318>/Sum3' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(float32, TMDR_VAR_INIT) VeTMDC_M_TrqFloorChrgLmt;/* '<S267>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(float32, TMDR_VAR_INIT) VeTMDC_M_TrqFloorMtrATemp;/* '<S267>/Product2' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(float32, TMDR_VAR_INIT) VeTMDC_M_TrqFloorRaw;/* '<S266>/Merge1' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(float32, TMDR_VAR_INIT) VeTMDC_P_Pb;/* '<S267>/Sum2' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(boolean, TMDR_VAR_INIT) VeTMDC_b_ShtOffRv;/* '<S31>/Comparison1' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(boolean, TMDR_VAR_INIT) VeTMDC_b_TCMSetAWD_Flt;/* '<S33>/Logical1' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(boolean, TMDR_VAR_INIT) VeTMDC_b_TCMShtOff4Lock;/* '<S33>/Comparison10' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(boolean, TMDR_VAR_INIT) VeTMDC_b_TCMShtOff4Low;/* '<S33>/Comparison9' */

#endif

#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

static VAR(boolean, TMDR_VAR_INIT) VeTMDC_b_TrrnMdCnd;/* '<S399>/OR' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(boolean, TMDR_VAR_INIT) VeTMDC_b_UseChrgLmtMtrA;/* '<S311>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(uint16, TMDR_VAR_INIT) VeTMDC_d_BrkShtOffRsn;/* '<S28>/BitwiseLogicalOperator6' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(uint16, TMDR_VAR_INIT) VeTMDC_d_BrkShtOffSndFlt;/* '<S28>/BitwiseLogicalOperator1' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(TeTMDR_e_StActv, TMDR_VAR_INIT) VeTMDC_e_StActv;/* '<S25>/Merge2' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(TeTMDR_e_StActv, TMDR_VAR_INIT) VeTMDC_e_StActvTrqFloor;/* '<S266>/Merge2' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(uint32, TMDR_VAR_INIT) VeTMDC_g_AWDShOffRsn;/* '<S31>/Switch10' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(uint32, TMDR_VAR_INIT) VeTMDC_g_BumpStrtRsnActv4;/* '<S29>/BitwiseLogicalOperator6' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(uint32, TMDR_VAR_INIT) VeTMDC_g_EVModeInhbtRsn2Actv1;/* '<S29>/BitwiseLogicalOperator3' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(uint32, TMDR_VAR_INIT) VeTMDC_g_EVModeInhbtRsnActv0;/* '<S29>/BitwiseLogicalOperator2' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(uint32, TMDR_VAR_INIT) VeTMDC_g_ImmedStopRsnActv3;/* '<S29>/BitwiseLogicalOperator5' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(uint32, TMDR_VAR_INIT) VeTMDC_g_ShtOff4WhlDrvActv;/* '<S31>/BitwiseLogicalOperator' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(uint32, TMDR_VAR_INIT) VeTMDC_g_StrtDisAllowRsnActv2;/* '<S29>/BitwiseLogicalOperator4' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(float32, TMDR_VAR_INIT) VeTMDC_n_NoAvgAbs;/* '<S269>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(float32, TMDR_VAR_INIT) VeTMDC_n_NoDflt;/* '<S265>/Switch5' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(float32, TMDR_VAR_INIT) VeTMDC_phi_SlopeAngle;/* '<S270>/Switch1' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(uint8, TMDR_VAR_INIT) VeTMDC_y_CondAWD_Flt;/* '<S75>/Switch7' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(uint8, TMDR_VAR_INIT) VeTMDC_y_EV_ShtOffRsn;/* '<S29>/BitwiseLogicalOperator1' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(uint8, TMDR_VAR_INIT) VeTMDC_y_SpdShtOffRsn;/* '<S32>/BitwiseLogicalOperator1' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(uint8, TMDR_VAR_INIT) VeTMDC_y_SpdShtOffSndFlt;/* '<S32>/BitwiseLogicalOperator2' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(boolean, TMDR_VAR_INIT) VeTMDD_b_EngOff4WD_Diag;/* '<S19>/AND' */

#endif

#if Rte_SysCon_Variant_TMDR_MSG_Selec

static VAR(boolean, TMDR_VAR_INIT) VeTMDD_b_TrrnMdNotAvailDiag;/* '<S355>/Logical' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

static VAR(boolean, TMDR_VAR_INIT) VeTMDD_b_TrrnMdNotAvailDiag;/* '<S7>/Logical' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TMDR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TMDR
#include "MemMap.h"

CONST(ConstB_TMDR_ac_T, TMDR_VAR_INIT) TMDR_ac_ConstB =
{

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    1U,                                /* '<S85>/FixPt Bitwise Operator1' */

#define CONSTB_TMDR_AC_T_VARIANT_EXISTS
#endif

    0.0F,                              /* '<S494>/ConstantValue' */
    100000.0F,                         /* '<S494>/ConstantValue2' */
    0.0F,                              /* '<S494>/ConstantValue1' */

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    1U,                                /* '<S42>/FixPt Bitwise Operator1' */

#endif

#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

    2,                                 /* '<S399>/DataTypeConversion1' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    1,                                 /* '<S133>/DTCBlk20' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    0,                                 /* '<S133>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    7,                                 /* '<S139>/DTCBlk43' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    6,                                 /* '<S136>/DTCBlk29' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    5,                                 /* '<S137>/DTCBlk34' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    4,                                 /* '<S141>/DTCBlk53' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    3,                                 /* '<S140>/DTCBlk48' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    2,                                 /* '<S138>/DTCBlk38' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    2,                                 /* '<S138>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    1,                                 /* '<S132>/DTCBlk13' */

#endif

    1U,                                /* '<S494>/ConstantValue5' */
    1U,                                /* '<S494>/ConstantValue4' */
    1U,                                /* '<S494>/ConstantValue6' */

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    1U,                                /* '<S62>/FixPt Bitwise Operator1' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    1U,                                /* '<S76>/FixPt Bitwise Operator1' */

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    1U,                                /* '<S102>/FixPt Bitwise Operator1' */

#endif

    0,                                 /* '<S494>/FALSEConstant3' */
    0,                                 /* '<S494>/FALSEConstant2' */
    0,                                 /* '<S494>/FALSEConstant4' */
    CeTMDR_e_Auto,                     /* '<S498>/Constant' */
    CeTMDR_e_Auto,                     /* '<S497>/Constant' */
    CeTMDR_e_Auto,                     /* '<S500>/Constant' */
    CeTMDR_e_Off,                      /* '<S496>/Constant' */
    CeTMDR_e_AWD_BothNotAllowed        /* '<S499>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_TMDR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TMDR
#include "MemMap.h"

CONST(ConstP_TMDR_ac_T, TMDR_VAR_INIT) TMDR_ac_ConstP =
{

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S295>/Vector'
     *   '<S298>/Vector'
     *   '<S301>/Vector'
     *   '<S304>/Vector'
     *   '<S307>/Vector'
     *   '<S310>/Vector'
     */
    {
        13U, 18U
    },

#endif

#ifndef CONSTP_TMDR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_TMDR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TMDR
#include "MemMap.h"

VAR(B_TMDR_ac_T, TMDR_VAR_INIT) TMDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TMDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TMDR
#include "MemMap.h"

VAR(DW_TMDR_ac_T, TMDR_VAR_INIT) TMDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TMDR
#include "MemMap.h"
#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

static FUNC(void, TMDR_CODE_LOCAL) TMDR_ac_Pass_DrvMdReq(VAR(TeTMDR_e_TrrnMd,
    AUTOMATIC) rtu_Trns_DrvMdReq, P2VAR(TeTMDR_e_TrrnMd, AUTOMATIC,
    TMDR_VAR_INIT) rty_Out1);

#endif

#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

static FUNC(void, TMDR_CODE_LOCAL) TMDR_ac_Pass_TrrnMd(VAR(TeTMDR_e_TrrnMd,
    AUTOMATIC) rtu_FinalTrrnMd, P2VAR(TeTMDR_e_TrrnMd, AUTOMATIC, TMDR_VAR_INIT)
    rty_Out1);

#endif

/*
 * Output and update for action system:
 *    '<S412>/Pass_DrvMdReq'
 *    '<S428>/Pass_DrvMdReq'
 */
#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

static FUNC(void, TMDR_CODE_LOCAL) TMDR_ac_Pass_DrvMdReq(VAR(TeTMDR_e_TrrnMd,
    AUTOMATIC) rtu_Trns_DrvMdReq, P2VAR(TeTMDR_e_TrrnMd, AUTOMATIC,
    TMDR_VAR_INIT) rty_Out1)
{
    /* Inport: '<S448>/Trns_DrvMdReq' */
    *rty_Out1 = rtu_Trns_DrvMdReq;
}

#endif

/*
 * Output and update for action system:
 *    '<S412>/Pass_TrrnMd'
 *    '<S428>/Pass_TrrnMd'
 */
#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

static FUNC(void, TMDR_CODE_LOCAL) TMDR_ac_Pass_TrrnMd(VAR(TeTMDR_e_TrrnMd,
    AUTOMATIC) rtu_FinalTrrnMd, P2VAR(TeTMDR_e_TrrnMd, AUTOMATIC, TMDR_VAR_INIT)
    rty_Out1)
{
    /* Inport: '<S454>/FinalTrrnMd' */
    *rty_Out1 = rtu_FinalTrrnMd;
}

#endif

/* Model step function for TID1 */
FUNC(void, TMDR_CODE) TMDR_MedTED(void) /* Explicit Task: MedTED */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean rtb_Comparison5_mb;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean rtb_Comparison4_d;

#endif

#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

    TeTMDR_e_TrrnMd rtb_TmpSignalConversionAtVeTIMR_e_Custom;

#endif

#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

    TeTMDR_e_TrrnMd rtb_DataTypeConversion_gs;

#endif

#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

    TeTMDR_e_TrrnMd rtb_DataTypeConversion_nh;

#endif

#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

    TeTMDR_e_TrrnMd rtb_Switch_ax;

#endif

#if !Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_MSG_Selec

    boolean tmpRead;

#endif

#if (!Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (!Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

    float32 tmpRead_0;

#endif

#if (!Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (!Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

    float32 tmpRead_1;

#endif

#if !Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_MSG_Selec

    uint8 tmpRead_2;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    uint32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    uint32 tmpRead_4;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    uint32 tmpRead_5;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean tmpRead_6;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    TeESSR_e_EngStrtStpMd tmpRead_7;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean tmpRead_8;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    float32 tmpRead_9;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    TeESPR_e_EngSpdStatus tmpRead_a;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean tmpRead_b;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean tmpRead_c;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean tmpRead_d;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean tmpRead_e;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean tmpRead_f;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    TeINVR_e_MtrInvrtrSt tmpRead_g;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    TeINVR_e_MtrInvrtrSt tmpRead_h;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    float32 tmpRead_i;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    float32 tmpRead_j;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    float32 tmpRead_k;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    float32 tmpRead_l;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    float32 tmpRead_m;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    float32 tmpRead_n;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    float32 tmpRead_o;

#endif

#if !(!Rte_SysCon_Variant_TMDR_M182TrrnMd) && !Rte_SysCon_Variant_TMDR_FUNC_Selec && !Rte_SysCon_Variant_TMDR_MSG_Selec

    TeDMIR_e_DriveStyleSts tmpRead_p;

#endif

#if (!Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (!Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

    TeTIMR_e_BoostRequest tmpRead_q;

#endif

#if (!Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (!Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

    TeTIMR_e_BoostRequest tmpRead_r;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec || Rte_SysCon_Variant_TMDR_MSG_Selec

    boolean rtb_TmpSignalConversionAtVeTIMR_b_TrrnMd;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean rtb_Logical2_b;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec || Rte_SysCon_Variant_TMDR_MSG_Selec

    boolean rtb_TmpSignalConversionAtVeSRAR_b_Inhibi;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean rtb_TmpSignalConversionAtVeSRAR_b_Inhi_l;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean rtb_Logical2_a;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean rtb_Comparison4_b1w;

#endif

#if (!Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (!Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

    sint16 rtb_DataTypeConversion2_d;

#endif

#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || Rte_SysCon_Variant_TMDR_FUNC_Selec

    float32 rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;

#endif

#if (!Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (!Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

    boolean rtb_AND3;

#endif

#if !Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_MSG_Selec

    boolean rtb_OR3;

#endif

#if (!Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (!Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

    boolean rtb_Comparison1_g;

#endif

#if !Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_MSG_Selec && Rte_SysCon_Variant_TMDR_REPBSelec

    boolean rtb_Comparison10;

#endif

#if !Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_MSG_Selec && Rte_SysCon_Variant_TMDR_REPBSelec

    boolean rtb_Comparison11;

#endif

#if !Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_MSG_Selec && Rte_SysCon_Variant_TMDR_REPBSelec

    boolean rtb_Comparison12;

#endif

#if !Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_MSG_Selec && Rte_SysCon_Variant_TMDR_REPBSelec

    boolean rtb_Comparison13;

#endif

#if !Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_MSG_Selec && Rte_SysCon_Variant_TMDR_REPBSelec

    boolean rtb_Comparison14;

#endif

#if !Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_MSG_Selec && Rte_SysCon_Variant_TMDR_REPBSelec

    boolean rtb_Comparison6;

#endif

#if !Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_MSG_Selec && Rte_SysCon_Variant_TMDR_REPBSelec

    boolean rtb_Comparison7;

#endif

#if !Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_MSG_Selec && Rte_SysCon_Variant_TMDR_REPBSelec

    boolean rtb_Comparison8;

#endif

#if !Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_MSG_Selec && Rte_SysCon_Variant_TMDR_REPBSelec

    boolean rtb_Comparison9;

#endif

#if !Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_MSG_Selec

    boolean rtb_UnitDelay_de;

#endif

#if !Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_MSG_Selec

    float32 rtb_VariantMerge_For_Variant_Source_TgtS;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean rtb_AND_k;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec || Rte_SysCon_Variant_TMDR_MSG_Selec

    uint8 rtb_Switch1_a4;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    uint16 rtb_Switch1_f;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    uint8 rtb_Switch1_ip;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    float32 rtb_UnitDelay_nw;

#endif

#if !Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_MSG_Selec

    boolean rtb_GreaterThan1_p;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean rtb_AND_ng;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean rtb_AND_n5;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean rtb_AND_g3;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean rtb_AND_gj;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean rtb_AND_l;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean rtb_AND_gw;

#endif

#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean rtb_TmpSignalConversionAtVeTIMR_b_AWD__g;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    float32 rtb_TmpSignalConversionAtVeHSCR_r_DonutS;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec || Rte_SysCon_Variant_TMDR_MSG_Selec

    boolean rtb_TmpSignalConversionAtVeTIMR_b_AWD_Lo;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    float32 rtb_Product2;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    float32 rtb_TmpSignalConversionAtVeESPR_n_Engine;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec || Rte_SysCon_Variant_TMDR_MSG_Selec

    TeDMDR_e_DrvMd rtb_TmpSignalConversionAtVeDMDR_e_DrvMdA;

#endif

#if Rte_SysCon_Variant_TMDR_MSG_Selec

    TeFWDR_e_TrnsfrCaseRange rtb_TmpSignalConversionAtVeFWDR_e_Tcase_;

#endif

#if !Rte_SysCon_Variant_TMDR_FUNC_Selec && !Rte_SysCon_Variant_TMDR_MSG_Selec

    TeTMDR_e_TrrnMd rtb_VariantMerge_For_Variant_Source_Vari;

#endif

#if !Rte_SysCon_Variant_TMDR_M182TrrnMd || Rte_SysCon_Variant_TMDR_FUNC_Selec || Rte_SysCon_Variant_TMDR_MSG_Selec

    TeTMDR_e_TrrnMd rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec || Rte_SysCon_Variant_TMDR_MSG_Selec

    TeTMDR_e_TrrnMd rtb_Switch2_fi;

#endif

#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

    TeTIMR_e_RaceModeSts rtb_TmpSignalConversionAtVeTIMR_e_RaceMo;

#endif

#if !Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_MSG_Selec

    TeTMDR_e_TrrnMd rtb_VariantMerge_For_Variant_Source_Prog;

#endif

#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

    TeTIMR_e_RaceOptions rtb_TmpSignalConversionAtVeTIMR_e_RaceOp;

#endif

#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

    TeTIMR_e_LnchCtrlSts rtb_TmpSignalConversionAtVeTIMR_e_LnchCt;

#endif

#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

    TeEBMR_e_eBoostStatus rtb_TmpSignalConversionAtVeEBMR_e_eBoost;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    sint16 Switch1_l;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    uint32 Switch4;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    uint32 Switch5;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    float32 Switch1_b;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    float32 Switch2_n;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean Switch3_h;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    boolean Switch7_i;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    TeDMDR_e_DrvMd Switch1_m;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    sint32 tmp;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    uint8 Switch4_0;

#endif

#if !Rte_SysCon_Variant_TMDR_FUNC_Selec && Rte_SysCon_Variant_TMDR_MSG_Selec

    TeTMDR_e_LockLowSt rtb_Logical2_m_tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/TMDR_MedTED'
     */
    /* SignalConversion generated from: '<S1>/VeTIMR_e_TrrnMdSt' */
#if !Rte_SysCon_Variant_TMDR_M182TrrnMd || Rte_SysCon_Variant_TMDR_FUNC_Selec || Rte_SysCon_Variant_TMDR_MSG_Selec

    /* SignalConversion generated from: '<S1>/VeTIMR_e_TrrnMdSt' incorporates:
     *  Inport: '<Root>/VeTIMR_e_TrrnMdSt'
     */
    (void)Rte_Read_VeTIMR_e_TrrnMdSt_Value
        (&rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTIMR_e_TrrnMdSt' */

    /* SignalConversion generated from: '<S1>/VeTIMR_b_TrrnMdStFA' */
#if Rte_SysCon_Variant_TMDR_FUNC_Selec || Rte_SysCon_Variant_TMDR_MSG_Selec

    /* SignalConversion generated from: '<S1>/VeTIMR_b_TrrnMdStFA' incorporates:
     *  Inport: '<Root>/VeTIMR_b_TrrnMdStFA'
     */
    (void)Rte_Read_VeTIMR_b_TrrnMdStFA_Value
        (&rtb_TmpSignalConversionAtVeTIMR_b_TrrnMd);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTIMR_b_TrrnMdStFA' */

    /* SignalConversion generated from: '<S1>/VeFWDR_e_Tcase_Stat' */
#if Rte_SysCon_Variant_TMDR_MSG_Selec

    /* SignalConversion generated from: '<S1>/VeFWDR_e_Tcase_Stat' incorporates:
     *  Inport: '<Root>/VeFWDR_e_Tcase_Stat'
     */
    (void)Rte_Read_VeFWDR_e_Tcase_Stat_Value
        (&rtb_TmpSignalConversionAtVeFWDR_e_Tcase_);

#endif

    /* End of SignalConversion generated from: '<S1>/VeFWDR_e_Tcase_Stat' */

    /* SignalConversion generated from: '<S1>/VeDMDR_e_DrvMdArb' */
#if Rte_SysCon_Variant_TMDR_FUNC_Selec || Rte_SysCon_Variant_TMDR_MSG_Selec

    /* SignalConversion generated from: '<S1>/VeDMDR_e_DrvMdArb' incorporates:
     *  Inport: '<Root>/VeDMDR_e_DrvMdArb'
     */
    (void)Rte_Read_VeDMDR_e_DrvMdArb_Value
        (&rtb_TmpSignalConversionAtVeDMDR_e_DrvMdA);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDMDR_e_DrvMdArb' */

    /* SignalConversion generated from: '<S1>/VeCSVR_v_VehSpd' incorporates:
     *  SignalConversion generated from: '<S1>/VeSRAR_b_Inhibit_AWD_TerrainMode'
     */
#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || Rte_SysCon_Variant_TMDR_FUNC_Selec

    /* SignalConversion generated from: '<S1>/VeCSVR_v_VehSpd' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpd'
     */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value
        (&rtb_TmpSignalConversionAtVeCSVR_v_VehSpd);

    /* SignalConversion generated from: '<S1>/VeSRAR_b_Inhibit_AWD_TerrainMode' incorporates:
     *  Inport: '<Root>/VeSRAR_b_Inhibit_AWD_TerrainMode'
     */
    (void)Rte_Read_VeSRAR_b_Inhibit_AWD_TerrainMode_Value
        (&rtb_TmpSignalConversionAtVeSRAR_b_Inhibi);

#endif

    /* End of SignalConversion generated from: '<S1>/VeCSVR_v_VehSpd' */

    /* SignalConversion generated from: '<S1>/VeTIMR_e_RaceModeSts' incorporates:
     *  SignalConversion generated from: '<S1>/VeEBMR_e_eBoostStatus'
     *  SignalConversion generated from: '<S1>/VeTIMR_e_CustomDrvMdSts'
     *  SignalConversion generated from: '<S1>/VeTIMR_e_RaceOptions_Sts'
     */
#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

    /* SignalConversion generated from: '<S1>/VeTIMR_e_RaceModeSts' incorporates:
     *  Inport: '<Root>/VeTIMR_e_RaceModeSts'
     */
    (void)Rte_Read_VeTIMR_e_RaceModeSts_Value
        (&rtb_TmpSignalConversionAtVeTIMR_e_RaceMo);

    /* SignalConversion generated from: '<S1>/VeEBMR_e_eBoostStatus' incorporates:
     *  Inport: '<Root>/VeEBMR_e_eBoostStatus'
     */
    (void)Rte_Read_VeEBMR_e_eBoostStatus_Value
        (&rtb_TmpSignalConversionAtVeEBMR_e_eBoost);

    /* SignalConversion generated from: '<S1>/VeTIMR_e_CustomDrvMdSts' incorporates:
     *  Inport: '<Root>/VeTIMR_e_CustomDrvMdSts'
     */
    (void)Rte_Read_VeTIMR_e_CustomDrvMdSts_Value
        (&rtb_TmpSignalConversionAtVeTIMR_e_Custom);

    /* SignalConversion generated from: '<S1>/VeTIMR_e_RaceOptions_Sts' incorporates:
     *  Inport: '<Root>/VeTIMR_e_RaceOptions_Sts'
     */
    (void)Rte_Read_VeTIMR_e_RaceOptions_Sts_Value
        (&rtb_TmpSignalConversionAtVeTIMR_e_RaceOp);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTIMR_e_RaceModeSts' */

    /* SignalConversion generated from: '<S1>/VeTIMR_b_AWD_Lock' incorporates:
     *  SignalConversion generated from: '<S1>/VeESPR_n_EngineSpeed'
     *  SignalConversion generated from: '<S1>/VeHSCR_r_DonutSpaceCoefB1'
     *  SignalConversion generated from: '<S1>/VeSRAR_b_Inhibit_RWD_TerrainMode'
     *  SignalConversion generated from: '<S1>/VeTIMR_b_AWD_Low'
     */
#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    /* SignalConversion generated from: '<S1>/VeTIMR_b_AWD_Lock' incorporates:
     *  Inport: '<Root>/VeTIMR_b_AWD_Lock'
     */
    (void)Rte_Read_VeTIMR_b_AWD_Lock_Value
        (&rtb_TmpSignalConversionAtVeTIMR_b_AWD_Lo);

    /* SignalConversion generated from: '<S1>/VeTIMR_b_AWD_Low' incorporates:
     *  Inport: '<Root>/VeTIMR_b_AWD_Low'
     */
    (void)Rte_Read_VeTIMR_b_AWD_Low_Value
        (&rtb_TmpSignalConversionAtVeTIMR_b_AWD__g);

    /* SignalConversion generated from: '<S1>/VeESPR_n_EngineSpeed' incorporates:
     *  Inport: '<Root>/VeESPR_n_EngineSpeed'
     */
    (void)Rte_Read_VeESPR_n_EngineSpeed_Value
        (&rtb_TmpSignalConversionAtVeESPR_n_Engine);

    /* SignalConversion generated from: '<S1>/VeSRAR_b_Inhibit_RWD_TerrainMode' incorporates:
     *  Inport: '<Root>/VeSRAR_b_Inhibit_RWD_TerrainMode'
     */
    (void)Rte_Read_VeSRAR_b_Inhibit_RWD_TerrainMode_Value
        (&rtb_TmpSignalConversionAtVeSRAR_b_Inhi_l);

    /* SignalConversion generated from: '<S1>/VeHSCR_r_DonutSpaceCoefB1' incorporates:
     *  Inport: '<Root>/VeHSCR_r_DonutSpaceCoefB1'
     */
    (void)Rte_Read_VeHSCR_r_DonutSpaceCoefB1_Value
        (&rtb_TmpSignalConversionAtVeHSCR_r_DonutS);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTIMR_b_AWD_Lock' */

    /* SignalConversion generated from: '<S1>/VeTIMR_e_LnchCtrl_Sts' */
#if (Rte_SysCon_Variant_TMDR_BEV_REPBSelec && Rte_SysCon_Variant_TMDR_MSG_Selec) || (Rte_SysCon_Variant_TMDR_COREBEVSelec && Rte_SysCon_Variant_TMDR_MSG_Selec)

    /* SignalConversion generated from: '<S1>/VeTIMR_e_LnchCtrl_Sts' incorporates:
     *  Inport: '<Root>/VeTIMR_e_LnchCtrl_Sts'
     */
    (void)Rte_Read_VeTIMR_e_LnchCtrl_Sts_Value
        (&rtb_TmpSignalConversionAtVeTIMR_e_LnchCt);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTIMR_e_LnchCtrl_Sts' */

    /* Outputs for Atomic SubSystem: '<S1>/TMDR_Arb' */
#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    /* Outputs for Atomic SubSystem: '<S3>/TMDR_FUNC' */
    /* Inport: '<Root>/VeESSR_e_EngStrtStpMd' */
    (void)Rte_Read_VeESSR_e_EngStrtStpMd_Value(&tmpRead_7);

    /* Inport: '<Root>/VeTINR_d_TCMLimphomeFaults' */
    (void)Rte_Read_VeTINR_d_TCMLimphomeFaults_Value(&Switch1_l);

    /* Inport: '<Root>/VeCSVR_b_RearAxlSpdFA' */
    (void)Rte_Read_VeCSVR_b_RearAxlSpdFA_Value(&Switch3_h);

    /* Inport: '<Root>/VeCSVR_n_RearAxlSpdSgndFltrd' */
    (void)Rte_Read_VeCSVR_n_RearAxlSpdSgndFltrd_Value(&Switch2_n);

    /* Inport: '<Root>/VeCSVR_b_FrontAxlSpdFA' */
    (void)Rte_Read_VeCSVR_b_FrontAxlSpdFA_Value(&Switch7_i);

    /* Inport: '<Root>/VeCSVR_n_FrontAxlSpdSgndFltrd' */
    (void)Rte_Read_VeCSVR_n_FrontAxlSpdSgndFltrd_Value(&Switch1_b);

    /* Inport: '<Root>/VePLTR_b_EstSlopeAngleFA' */
    (void)Rte_Read_VePLTR_b_EstSlopeAngleFA_Value(&tmpRead_6);

    /* Inport: '<Root>/VePLTR_phi_EstSlopeAngle' */
    (void)Rte_Read_VePLTR_phi_EstSlopeAngle_Value(&rtb_UnitDelay_nw);

    /* Inport: '<Root>/VeSTRR_g_BumpStrtRsn' */
    (void)Rte_Read_VeSTRR_g_BumpStrtRsn_Value(&tmpRead_5);

    /* Inport: '<Root>/VeSTRR_g_ImmedStopRsn' */
    (void)Rte_Read_VeSTRR_g_ImmedStopRsn_Value(&Switch5);

    /* Inport: '<Root>/VeSTRR_g_StrtDisAllowRsn' */
    (void)Rte_Read_VeSTRR_g_StrtDisAllowRsn_Value(&Switch4);

    /* Inport: '<Root>/VeSTRR_g_AStpInhbtRsn2' */
    (void)Rte_Read_VeSTRR_g_AStpInhbtRsn2_Value(&tmpRead_4);

    /* Inport: '<Root>/VeSTRR_g_AStpInhbtRsn' */
    (void)Rte_Read_VeSTRR_g_AStpInhbtRsn_Value(&tmpRead_3);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDI_InputOvrrd'
     */
    /* Switch: '<S329>/Switch1' incorporates:
     *  Constant: '<S340>/Calib'
     */
    if (KeTMDR_b_DrvMdArbOvrdEnbl)
    {
        /* Switch: '<S329>/Switch1' incorporates:
         *  Constant: '<S341>/Calib'
         */
        Switch1_m = KeTMDR_e_DrvMdArbOvrdVal;
    }
    else
    {
        /* Switch: '<S329>/Switch1' incorporates:
         *  SignalConversion generated from: '<S1>/VeDMDR_e_DrvMdArb'
         */
        Switch1_m = rtb_TmpSignalConversionAtVeDMDR_e_DrvMdA;
    }

    /* End of Switch: '<S329>/Switch1' */

    /* Switch: '<S331>/Switch4' incorporates:
     *  Constant: '<S331>/ConstantValue2'
     *  Constant: '<S347>/Calib'
     *  Selector: '<S331>/Selector2'
     */
    if (KaTMDR_b_STRROvrdEnbl[(2)])
    {
        /* Switch: '<S331>/Switch4' incorporates:
         *  Constant: '<S352>/Calib'
         */
        Switch4 = KeTMDR_g_StrtDisAllowRsnOvrVal;
    }

    /* End of Switch: '<S331>/Switch4' */

    /* Switch: '<S331>/Switch5' incorporates:
     *  Constant: '<S331>/ConstantValue3'
     *  Constant: '<S347>/Calib'
     *  Selector: '<S331>/Selector3'
     */
    if (KaTMDR_b_STRROvrdEnbl[(3)])
    {
        /* Switch: '<S331>/Switch5' incorporates:
         *  Constant: '<S351>/Calib'
         */
        Switch5 = KeTMDR_g_ImmedStopRsnOvrVal;
    }

    /* End of Switch: '<S331>/Switch5' */

    /* Switch: '<S328>/Switch1' incorporates:
     *  Constant: '<S328>/ConstantValue'
     *  Constant: '<S334>/Calib'
     *  Selector: '<S328>/Selector'
     */
    if (KaTMDR_b_CSVROvrdEnbl[(0)])
    {
        /* Switch: '<S328>/Switch1' incorporates:
         *  Constant: '<S337>/Calib'
         */
        Switch1_b = KeTMDR_n_PrimNoSgndFltrdOvrdVal;
    }

    /* End of Switch: '<S328>/Switch1' */

    /* Switch: '<S328>/Switch2' incorporates:
     *  Constant: '<S328>/ConstantValue2'
     *  Constant: '<S334>/Calib'
     *  Selector: '<S328>/Selector2'
     *  Switch: '<S328>/Switch3'
     *  Switch: '<S328>/Switch7'
     */
    if (KaTMDR_b_CSVROvrdEnbl[(1)])
    {
        /* Switch: '<S328>/Switch2' incorporates:
         *  Constant: '<S338>/Calib'
         */
        Switch2_n = KeTMDR_n_SecNoSgndFltrdOvrdVal;

        /* Switch: '<S328>/Switch3' incorporates:
         *  Constant: '<S336>/Calib'
         */
        Switch3_h = KeTMDR_b_SecNoFAOvrdVal;

        /* Switch: '<S328>/Switch7' incorporates:
         *  Constant: '<S335>/Calib'
         */
        Switch7_i = KeTMDR_b_PrimNoFAOvrdVal;
    }

    /* End of Switch: '<S328>/Switch2' */

    /* Switch: '<S332>/Switch1' incorporates:
     *  Constant: '<S353>/Calib'
     */
    if (KeTMDR_b_TRNRTCMFailureOvrdEnbl)
    {
        /* Switch: '<S332>/Switch1' incorporates:
         *  Constant: '<S354>/Calib'
         */
        Switch1_l = KeTMDR_d_TRNRTCMFailureOvrdVal;
    }

    /* End of Switch: '<S332>/Switch1' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Diagnostics'
     */
    /* Logic: '<S7>/Logical' incorporates:
     *  Constant: '<S15>/Calib'
     *  Constant: '<S16>/Calib'
     *  Logic: '<S7>/Logical1'
     */
    VeTMDD_b_TrrnMdNotAvailDiag = ((KeTMDR_b_EnaTrrnMdDiag) &&
        ((KeTMDR_b_DiagTest) || rtb_TmpSignalConversionAtVeTIMR_b_TrrnMd));

    /* Logic: '<S7>/Logical2' incorporates:
     *  Constant: '<S12>/Constant'
     *  Constant: '<S13>/Constant'
     *  Constant: '<S17>/Calib'
     *  Inport: '<Root>/VeESSR_e_EngStrtStpMd'
     *  RelationalOperator: '<S7>/Comparison11'
     *  RelationalOperator: '<S7>/Comparison5'
     *  UnitDelay: '<S7>/UnitDelay'
     */
    rtb_Logical2_b = (((KeTMDR_b_EngOffAWD_Diag) &&
                       (TMDR_ac_DW.UnitDelay_DSTATE_gb != CeTMDR_e_Off)) &&
                      (tmpRead_7 != CeESSR_e_ProducingTorque));

    /* Outputs for Atomic SubSystem: '<S7>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S19>/EdgeRising' */
    /* Logic: '<S20>/AND' incorporates:
     *  Logic: '<S20>/OR1'
     *  UnitDelay: '<S20>/Unit Delay'
     */
    rtb_AND_k = (rtb_Logical2_b && (!TMDR_ac_DW.UnitDelay_DSTATE_op));

    /* Update for UnitDelay: '<S20>/Unit Delay' */
    TMDR_ac_DW.UnitDelay_DSTATE_op = rtb_Logical2_b;

    /* End of Outputs for SubSystem: '<S19>/EdgeRising' */

    /* Switch: '<S19>/Switch1' incorporates:
     *  Constant: '<S14>/Calib'
     *  Constant: '<S18>/Calib'
     *  Constant: '<S19>/Constant Value1'
     *  Logic: '<S19>/OR'
     *  Logic: '<S19>/OR1'
     *  MinMax: '<S19>/Minimum'
     *  Sum: '<S19>/Summation'
     *  UnitDelay: '<S19>/Unit Delay'
     */
    if ((!rtb_Logical2_b) || rtb_AND_k)
    {
        TMDR_ac_DW.UnitDelay_DSTATE_d = 0.0F;
    }
    else
    {
        TMDR_ac_DW.UnitDelay_DSTATE_d = fminf(KeTMDR_t_DtctEngOffAWD,
            HeTMDR_t_dT + TMDR_ac_DW.UnitDelay_DSTATE_d);
    }

    /* End of Switch: '<S19>/Switch1' */

    /* Logic: '<S19>/AND' incorporates:
     *  Constant: '<S18>/Calib'
     *  RelationalOperator: '<S19>/Greater  Than'
     *  UnitDelay: '<S19>/Unit Delay'
     */
    VeTMDD_b_EngOff4WD_Diag = (rtb_Logical2_b && (TMDR_ac_DW.UnitDelay_DSTATE_d >=
        KeTMDR_t_DtctEngOffAWD));

    /* End of Outputs for SubSystem: '<S7>/TurnOnDelayTime' */

    /* Update for UnitDelay: '<S7>/UnitDelay' incorporates:
     *  DataTypeConversion: '<S126>/DataTypeConversion'
     */
    TMDR_ac_DW.UnitDelay_DSTATE_gb = TMDR_ac_B.DataTypeConversion;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDC_FrontRearAxleTorqueArbitration'
     */
    /* RelationalOperator: '<S142>/Comparison4' incorporates:
     *  Constant: '<S231>/Constant'
     *  SignalConversion generated from: '<S1>/VeTIMR_e_TrrnMdSt'
     */
    rtb_Logical2_b = (rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd == CeTMDR_e_Auto);

    /* Outputs for Atomic SubSystem: '<S142>/TurnOffDelaySample' */
    /* Outputs for Atomic SubSystem: '<S232>/EdgeFalling' */
    /* Logic: '<S233>/AND' incorporates:
     *  Logic: '<S233>/OR1'
     *  UnitDelay: '<S233>/Unit Delay'
     */
    rtb_AND_k = ((!rtb_Logical2_b) && (TMDR_ac_DW.UnitDelay_DSTATE_m));

    /* Update for UnitDelay: '<S233>/Unit Delay' */
    TMDR_ac_DW.UnitDelay_DSTATE_m = rtb_Logical2_b;

    /* End of Outputs for SubSystem: '<S232>/EdgeFalling' */

    /* Switch: '<S232>/Switch' incorporates:
     *  Constant: '<S128>/Calib'
     *  UnitDelay: '<S232>/Unit Delay'
     */
    if (rtb_AND_k)
    {
        TMDR_ac_DW.UnitDelay_DSTATE_i = KeTMDR_Cnt_OffDlySelTrrnMd;
    }
    else
    {
        /* Sum: '<S232>/Summation' incorporates:
         *  Constant: '<S232>/Constant Value'
         *  UnitDelay: '<S232>/Unit Delay'
         */
        tmp = ((sint32)TMDR_ac_DW.UnitDelay_DSTATE_i) - ((sint32)((uint16)1U));
        if (tmp < 0)
        {
            tmp = 0;
        }

        /* MinMax: '<S232>/Minimum' incorporates:
         *  Constant: '<S232>/Constant Value1'
         *  Sum: '<S232>/Summation'
         */
        if (((uint16)tmp) > ((uint16)0U))
        {
            TMDR_ac_DW.UnitDelay_DSTATE_i = (uint16)tmp;
        }
        else
        {
            TMDR_ac_DW.UnitDelay_DSTATE_i = ((uint16)0U);
        }

        /* End of MinMax: '<S232>/Minimum' */
    }

    /* End of Switch: '<S232>/Switch' */
    /* End of Outputs for SubSystem: '<S142>/TurnOffDelaySample' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDI_InputOvrrd'
     */
    /* Switch: '<S331>/Switch2' incorporates:
     *  Constant: '<S331>/ConstantValue'
     *  Constant: '<S347>/Calib'
     *  Constant: '<S350>/Calib'
     *  Selector: '<S331>/Selector'
     */
    if (KaTMDR_b_STRROvrdEnbl[(0)])
    {
        tmpRead_3 = KeTMDR_g_EVModeInhbtRsnOvrVal;
    }

    /* End of Switch: '<S331>/Switch2' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDC_FrontRearAxleTorqueArbitration'
     */
    /* S-Function (sfix_bitop): '<S29>/BitwiseLogicalOperator2' incorporates:
     *  Constant: '<S57>/Calib'
     */
    VeTMDC_g_EVModeInhbtRsnActv0 = tmpRead_3 & KeTMDR_g_EVModeInhibitRsnTrrn;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDI_InputOvrrd'
     */
    /* Switch: '<S331>/Switch3' incorporates:
     *  Constant: '<S331>/ConstantValue1'
     *  Constant: '<S347>/Calib'
     *  Constant: '<S349>/Calib'
     *  Selector: '<S331>/Selector1'
     */
    if (KaTMDR_b_STRROvrdEnbl[(1)])
    {
        tmpRead_4 = KeTMDR_g_EVModeInhbtRsn2OvrVal;
    }

    /* End of Switch: '<S331>/Switch3' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDC_FrontRearAxleTorqueArbitration'
     */
    /* S-Function (sfix_bitop): '<S29>/BitwiseLogicalOperator3' incorporates:
     *  Constant: '<S56>/Calib'
     */
    VeTMDC_g_EVModeInhbtRsn2Actv1 = tmpRead_4 & KeTMDR_g_EVModeInhibitRsn2Trrn;

    /* Switch: '<S31>/Switch1' incorporates:
     *  Constant: '<S29>/ConstantValue2'
     *  Constant: '<S29>/ConstantValue3'
     *  RelationalOperator: '<S29>/Comparison2'
     *  RelationalOperator: '<S29>/Comparison3'
     *  Switch: '<S31>/Switch'
     */
    if (VeTMDC_g_EVModeInhbtRsn2Actv1 > 0U)
    {
        /* Switch: '<S31>/Switch' incorporates:
         *  Constant: '<S29>/ConstantValue2'
         *  Constant: '<S31>/ConstantValue1'
         *  RelationalOperator: '<S29>/Comparison2'
         */
        if (VeTMDC_g_EVModeInhbtRsnActv0 > 0U)
        {
            tmpRead_4 = TMDR_ac_ConstB.FixPtBitwiseOperator1;
        }
        else
        {
            tmpRead_4 = 0U;
        }

        /* Switch: '<S31>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S86>/FixPt Bitwise Operator1'
         */
        VeTMDC_g_AWDShOffRsn = tmpRead_4 | 2U;
    }
    else if (VeTMDC_g_EVModeInhbtRsnActv0 > 0U)
    {
        /* Switch: '<S31>/Switch' incorporates:
         *  Switch: '<S31>/Switch1'
         */
        VeTMDC_g_AWDShOffRsn = TMDR_ac_ConstB.FixPtBitwiseOperator1;
    }
    else
    {
        /* Switch: '<S31>/Switch1' incorporates:
         *  Constant: '<S31>/ConstantValue1'
         *  Switch: '<S31>/Switch'
         */
        VeTMDC_g_AWDShOffRsn = 0U;
    }

    /* End of Switch: '<S31>/Switch1' */

    /* S-Function (sfix_bitop): '<S29>/BitwiseLogicalOperator4' incorporates:
     *  Constant: '<S59>/Calib'
     */
    VeTMDC_g_StrtDisAllowRsnActv2 = Switch4 & KeTMDR_g_StrtDisAllowRsnTrrn;

    /* Switch: '<S31>/Switch2' incorporates:
     *  Constant: '<S29>/ConstantValue1'
     *  RelationalOperator: '<S29>/Comparison5'
     */
    if (VeTMDC_g_StrtDisAllowRsnActv2 > 0U)
    {
        /* Switch: '<S31>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S88>/FixPt Bitwise Operator1'
         */
        VeTMDC_g_AWDShOffRsn = VeTMDC_g_AWDShOffRsn | 4U;
    }

    /* End of Switch: '<S31>/Switch2' */

    /* S-Function (sfix_bitop): '<S29>/BitwiseLogicalOperator5' incorporates:
     *  Constant: '<S58>/Calib'
     */
    VeTMDC_g_ImmedStopRsnActv3 = Switch5 & KeTMDR_g_ImmedStopRsnTrrn;

    /* Switch: '<S31>/Switch3' incorporates:
     *  Constant: '<S29>/ConstantValue4'
     *  RelationalOperator: '<S29>/Comparison6'
     */
    if (VeTMDC_g_ImmedStopRsnActv3 > 0U)
    {
        /* Switch: '<S31>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S89>/FixPt Bitwise Operator1'
         */
        VeTMDC_g_AWDShOffRsn = VeTMDC_g_AWDShOffRsn | 8U;
    }

    /* End of Switch: '<S31>/Switch3' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDI_InputOvrrd'
     */
    /* Switch: '<S331>/Switch6' incorporates:
     *  Constant: '<S331>/ConstantValue4'
     *  Constant: '<S347>/Calib'
     *  Constant: '<S348>/Calib'
     *  Selector: '<S331>/Selector4'
     */
    if (KaTMDR_b_STRROvrdEnbl[(4)])
    {
        tmpRead_5 = KeTMDR_g_BumpStrtRsnOvrVal;
    }

    /* End of Switch: '<S331>/Switch6' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDC_FrontRearAxleTorqueArbitration'
     */
    /* S-Function (sfix_bitop): '<S29>/BitwiseLogicalOperator6' incorporates:
     *  Constant: '<S55>/Calib'
     */
    VeTMDC_g_BumpStrtRsnActv4 = tmpRead_5 & KeTMDR_g_BumpStrtRsnTrrn;

    /* Switch: '<S31>/Switch4' incorporates:
     *  Constant: '<S29>/ConstantValue5'
     *  RelationalOperator: '<S29>/Comparison7'
     */
    if (VeTMDC_g_BumpStrtRsnActv4 > 0U)
    {
        /* Switch: '<S31>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S90>/FixPt Bitwise Operator1'
         */
        VeTMDC_g_AWDShOffRsn = VeTMDC_g_AWDShOffRsn | 16U;
    }

    /* End of Switch: '<S31>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Inport: '<Root>/VeINVR_b_MtrA_InvrtrTempFA' */
    (void)Rte_Read_VeINVR_b_MtrA_InvrtrTempFA_Value(&rtb_Logical2_a);

    /* Inport: '<Root>/VeINVR_b_MtrB_InvrtrTempFA' */
    (void)Rte_Read_VeINVR_b_MtrB_InvrtrTempFA_Value(&rtb_Comparison4_b1w);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDC_FrontRearAxleTorqueArbitration'
     */
    /* Switch: '<S61>/Switch1' incorporates:
     *  Switch: '<S61>/Switch'
     */
    if (rtb_Comparison4_b1w)
    {
        /* Switch: '<S61>/Switch' incorporates:
         *  Constant: '<S61>/ConstantValue1'
         */
        if (rtb_Logical2_a)
        {
            rtb_Switch1_a4 = TMDR_ac_ConstB.FixPtBitwiseOperator1_m;
        }
        else
        {
            rtb_Switch1_a4 = ((uint8)0U);
        }

        /* Switch: '<S61>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S63>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_a4 |= ((uint8)2U);
    }
    else if (rtb_Logical2_a)
    {
        /* Switch: '<S61>/Switch' incorporates:
         *  Switch: '<S61>/Switch1'
         */
        rtb_Switch1_a4 = TMDR_ac_ConstB.FixPtBitwiseOperator1_m;
    }
    else
    {
        /* Switch: '<S61>/Switch1' incorporates:
         *  Constant: '<S61>/ConstantValue1'
         *  Switch: '<S61>/Switch'
         */
        rtb_Switch1_a4 = ((uint8)0U);
    }

    /* End of Switch: '<S61>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrA_InvrtrSt_Value(&tmpRead_g);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDC_FrontRearAxleTorqueArbitration'
     */
    /* Switch: '<S61>/Switch2' incorporates:
     *  Constant: '<S54>/Constant'
     *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
     *  RelationalOperator: '<S29>/Comparison4'
     */
    if (tmpRead_g == CeINVR_e_InverterFaulted)
    {
        /* Switch: '<S61>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S64>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_a4 |= ((uint8)4U);
    }

    /* End of Switch: '<S61>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrB_InvrtrSt_Value(&tmpRead_h);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDC_FrontRearAxleTorqueArbitration'
     */
    /* Switch: '<S61>/Switch3' incorporates:
     *  Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt'
     *  RelationalOperator: '<S29>/Comparison1'
     */
    if (tmpRead_h == CeINVR_e_InverterFaulted)
    {
        /* Switch: '<S61>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S65>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_a4 |= ((uint8)8U);
    }

    /* End of Switch: '<S61>/Switch3' */

    /* Switch: '<S61>/Switch4' incorporates:
     *  Constant: '<S29>/FALSEConstant'
     *  Switch: '<S61>/Switch5'
     *  Switch: '<S61>/Switch6'
     *  Switch: '<S61>/Switch7'
     */
    if (false)
    {
        /* Switch: '<S61>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S66>/FixPt Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S67>/FixPt Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S68>/FixPt Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S69>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_a4 = (uint8)((((rtb_Switch1_a4 | ((uint8)16U)) | ((uint8)32U))
            | ((uint8)64U)) | ((uint8)128U));
    }

    /* End of Switch: '<S61>/Switch4' */

    /* S-Function (sfix_bitop): '<S29>/BitwiseLogicalOperator1' incorporates:
     *  Constant: '<S60>/Calib'
     */
    VeTMDC_y_EV_ShtOffRsn = (uint8)(rtb_Switch1_a4 & KeTMDR_y_EV_ShtOffRsn);

    /* Switch: '<S31>/Switch5' incorporates:
     *  Constant: '<S29>/ConstantValue6'
     *  RelationalOperator: '<S29>/Comparison8'
     */
    if (((uint32)VeTMDC_y_EV_ShtOffRsn) > 0U)
    {
        /* Switch: '<S31>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S91>/FixPt Bitwise Operator1'
         */
        VeTMDC_g_AWDShOffRsn = VeTMDC_g_AWDShOffRsn | 32U;
    }

    /* End of Switch: '<S31>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Inport: '<Root>/VeBTQR_b_RegenBrkAxleTrqReqFA' */
    (void)Rte_Read_VeBTQR_b_RegenBrkAxleTrqReqFA_Value(&rtb_AND_ng);

    /* Inport: '<Root>/VeBTQR_b_DrvrIntndedTotBrkTrqFA' */
    (void)Rte_Read_VeBTQR_b_DrvrIntndedTotBrkTrqFA_Value(&rtb_AND_n5);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDC_FrontRearAxleTorqueArbitration'
     */
    /* Switch: '<S41>/Switch1' incorporates:
     *  Switch: '<S41>/Switch'
     */
    if (rtb_AND_n5)
    {
        /* Switch: '<S41>/Switch' incorporates:
         *  Constant: '<S41>/ConstantValue1'
         */
        if (rtb_AND_ng)
        {
            rtb_Switch1_f = TMDR_ac_ConstB.FixPtBitwiseOperator1_f;
        }
        else
        {
            rtb_Switch1_f = ((uint16)0U);
        }

        /* Switch: '<S41>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S43>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_f |= ((uint16)2U);
    }
    else if (rtb_AND_ng)
    {
        /* Switch: '<S41>/Switch' incorporates:
         *  Switch: '<S41>/Switch1'
         */
        rtb_Switch1_f = TMDR_ac_ConstB.FixPtBitwiseOperator1_f;
    }
    else
    {
        /* Switch: '<S41>/Switch1' incorporates:
         *  Constant: '<S41>/ConstantValue1'
         *  Switch: '<S41>/Switch'
         */
        rtb_Switch1_f = ((uint16)0U);
    }

    /* End of Switch: '<S41>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Inport: '<Root>/VeBTQR_b_DrvrIntndedFricBrkTrqFA' */
    (void)Rte_Read_VeBTQR_b_DrvrIntndedFricBrkTrqFA_Value(&rtb_AND_g3);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDC_FrontRearAxleTorqueArbitration'
     */
    /* Switch: '<S41>/Switch2' */
    if (rtb_AND_g3)
    {
        /* Switch: '<S41>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S44>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_f |= ((uint16)4U);
    }

    /* End of Switch: '<S41>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Inport: '<Root>/VeBRKR_b_BrkPedalTravelFA' */
    (void)Rte_Read_VeBRKR_b_BrkPedalTravelFA_Value(&rtb_AND_gj);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDC_FrontRearAxleTorqueArbitration'
     */
    /* Switch: '<S41>/Switch3' */
    if (rtb_AND_gj)
    {
        /* Switch: '<S41>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S45>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_f |= ((uint16)8U);
    }

    /* End of Switch: '<S41>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Inport: '<Root>/VeBRKR_b_BrkPedalStat2FA' */
    (void)Rte_Read_VeBRKR_b_BrkPedalStat2FA_Value(&rtb_AND_l);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDC_FrontRearAxleTorqueArbitration'
     */
    /* Switch: '<S41>/Switch4' */
    if (rtb_AND_l)
    {
        /* Switch: '<S41>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S46>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_f |= ((uint16)16U);
    }

    /* End of Switch: '<S41>/Switch4' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Inport: '<Root>/VeBRKR_b_BrkPedalDscrtInptFA' */
    (void)Rte_Read_VeBRKR_b_BrkPedalDscrtInptFA_Value(&rtb_AND_gw);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDC_FrontRearAxleTorqueArbitration'
     */
    /* Switch: '<S41>/Switch5' */
    if (rtb_AND_gw)
    {
        /* Switch: '<S41>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S47>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_f |= ((uint16)32U);
    }

    /* End of Switch: '<S41>/Switch5' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Inport: '<Root>/VeBRKR_b_ABSActiveFA' */
    (void)Rte_Read_VeBRKR_b_ABSActiveFA_Value(&tmpRead_b);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDC_FrontRearAxleTorqueArbitration'
     */
    /* Switch: '<S41>/Switch6' */
    if (tmpRead_b)
    {
        /* Switch: '<S41>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S48>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_f |= ((uint16)64U);
    }

    /* End of Switch: '<S41>/Switch6' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Inport: '<Root>/VeBRKR_b_BrkPrssFA' */
    (void)Rte_Read_VeBRKR_b_BrkPrssFA_Value(&tmpRead_c);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDC_FrontRearAxleTorqueArbitration'
     */
    /* Switch: '<S41>/Switch7' */
    if (tmpRead_c)
    {
        /* Switch: '<S41>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S49>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_f |= ((uint16)128U);
    }

    /* End of Switch: '<S41>/Switch7' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Inport: '<Root>/VeBRKR_b_AHH_Ready_StatusFA' */
    (void)Rte_Read_VeBRKR_b_AHH_Ready_StatusFA_Value(&tmpRead_d);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDC_FrontRearAxleTorqueArbitration'
     */
    /* Switch: '<S41>/Switch8' */
    if (tmpRead_d)
    {
        /* Switch: '<S41>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S50>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_f |= ((uint16)256U);
    }

    /* End of Switch: '<S41>/Switch8' */

    /* S-Function (sfix_bitop): '<S28>/BitwiseLogicalOperator6' incorporates:
     *  Constant: '<S39>/Calib'
     */
    VeTMDC_d_BrkShtOffRsn = (uint16)(rtb_Switch1_f & KeTMDR_d_BrkShtOffRsn);

    /* Switch: '<S31>/Switch6' incorporates:
     *  Constant: '<S28>/ConstantValue1'
     *  RelationalOperator: '<S28>/Comparison7'
     */
    if (VeTMDC_d_BrkShtOffRsn > ((uint16)0U))
    {
        /* Switch: '<S31>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S92>/FixPt Bitwise Operator1'
         */
        VeTMDC_g_AWDShOffRsn = VeTMDC_g_AWDShOffRsn | 64U;
    }

    /* End of Switch: '<S31>/Switch6' */

    /* Switch: '<S101>/Switch1' incorporates:
     *  Switch: '<S101>/Switch'
     */
    if (Switch3_h)
    {
        /* Switch: '<S101>/Switch' incorporates:
         *  Constant: '<S101>/ConstantValue1'
         */
        if (Switch7_i)
        {
            rtb_Switch1_ip = TMDR_ac_ConstB.FixPtBitwiseOperator1_e;
        }
        else
        {
            rtb_Switch1_ip = ((uint8)0U);
        }

        /* Switch: '<S101>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S103>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_ip |= ((uint8)2U);
    }
    else if (Switch7_i)
    {
        /* Switch: '<S101>/Switch' incorporates:
         *  Switch: '<S101>/Switch1'
         */
        rtb_Switch1_ip = TMDR_ac_ConstB.FixPtBitwiseOperator1_e;
    }
    else
    {
        /* Switch: '<S101>/Switch1' incorporates:
         *  Constant: '<S101>/ConstantValue1'
         *  Switch: '<S101>/Switch'
         */
        rtb_Switch1_ip = ((uint8)0U);
    }

    /* End of Switch: '<S101>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Inport: '<Root>/VeCSVR_b_VehSpdFA' */
    (void)Rte_Read_VeCSVR_b_VehSpdFA_Value(&tmpRead_e);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDC_FrontRearAxleTorqueArbitration'
     */
    /* Switch: '<S101>/Switch2' */
    if (tmpRead_e)
    {
        /* Switch: '<S101>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S104>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_ip |= ((uint8)4U);
    }

    /* End of Switch: '<S101>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Inport: '<Root>/VeVSDR_b_StratNoFA' */
    (void)Rte_Read_VeVSDR_b_StratNoFA_Value(&tmpRead_f);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDC_FrontRearAxleTorqueArbitration'
     */
    /* Switch: '<S101>/Switch3' */
    if (tmpRead_f)
    {
        /* Switch: '<S101>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S105>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_ip |= ((uint8)8U);
    }

    /* End of Switch: '<S101>/Switch3' */

    /* Switch: '<S101>/Switch4' incorporates:
     *  Constant: '<S32>/FALSEConstant'
     *  Switch: '<S101>/Switch5'
     *  Switch: '<S101>/Switch6'
     *  Switch: '<S101>/Switch7'
     */
    if (false)
    {
        /* Switch: '<S101>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S106>/FixPt Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S107>/FixPt Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S108>/FixPt Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S109>/FixPt Bitwise Operator1'
         */
        rtb_Switch1_ip = (uint8)((((rtb_Switch1_ip | ((uint8)16U)) | ((uint8)32U))
            | ((uint8)64U)) | ((uint8)128U));
    }

    /* End of Switch: '<S101>/Switch4' */

    /* S-Function (sfix_bitop): '<S32>/BitwiseLogicalOperator1' incorporates:
     *  Constant: '<S99>/Calib'
     */
    VeTMDC_y_SpdShtOffRsn = (uint8)(rtb_Switch1_ip & KeTMDR_y_SpdShtOffRsn);

    /* Switch: '<S31>/Switch7' incorporates:
     *  Constant: '<S32>/ConstantValue8'
     *  RelationalOperator: '<S32>/Comparison8'
     */
    if (VeTMDC_y_SpdShtOffRsn > ((uint8)0U))
    {
        /* Switch: '<S31>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S93>/FixPt Bitwise Operator1'
         */
        VeTMDC_g_AWDShOffRsn = VeTMDC_g_AWDShOffRsn | 128U;
    }

    /* End of Switch: '<S31>/Switch7' */

    /* Switch: '<S31>/Switch8' */
    if (VeTMDD_b_TrrnMdNotAvailDiag)
    {
        /* Switch: '<S31>/Switch8' incorporates:
         *  S-Function (sfix_bitop): '<S94>/FixPt Bitwise Operator1'
         */
        VeTMDC_g_AWDShOffRsn = VeTMDC_g_AWDShOffRsn | 256U;
    }

    /* End of Switch: '<S31>/Switch8' */

    /* Switch: '<S31>/Switch9' */
    if (VeTMDD_b_EngOff4WD_Diag)
    {
        /* Switch: '<S31>/Switch9' incorporates:
         *  S-Function (sfix_bitop): '<S95>/FixPt Bitwise Operator1'
         */
        VeTMDC_g_AWDShOffRsn = VeTMDC_g_AWDShOffRsn | 512U;
    }

    /* End of Switch: '<S31>/Switch9' */

    /* RelationalOperator: '<S33>/Comparison10' incorporates:
     *  Constant: '<S114>/Calib'
     */
    VeTMDC_b_TCMShtOff4Lock = (((sint32)Switch1_l) == ((sint32)
        KeTMDR_d_TCMFail_4LockShtOff));

    /* Switch: '<S31>/Switch10' */
    if (VeTMDC_b_TCMShtOff4Lock)
    {
        /* Switch: '<S31>/Switch10' incorporates:
         *  S-Function (sfix_bitop): '<S87>/FixPt Bitwise Operator1'
         */
        VeTMDC_g_AWDShOffRsn = VeTMDC_g_AWDShOffRsn | 1024U;
    }

    /* End of Switch: '<S31>/Switch10' */

    /* S-Function (sfix_bitop): '<S31>/BitwiseLogicalOperator' incorporates:
     *  Constant: '<S97>/Calib'
     */
    VeTMDC_g_ShtOff4WhlDrvActv = VeTMDC_g_AWDShOffRsn & KeTMDR_g_ShtOff4WhlDrv;

    /* RelationalOperator: '<S31>/Comparison1' incorporates:
     *  Constant: '<S31>/ConstantValue7'
     */
    VeTMDC_b_ShtOffRv = (VeTMDC_g_ShtOff4WhlDrvActv > 0U);

    /* Logic: '<S31>/Logical2' */
    rtb_Logical2_a = !VeTMDC_b_ShtOffRv;

    /* RelationalOperator: '<S143>/Comparison4' incorporates:
     *  Constant: '<S235>/Constant'
     *  RelationalOperator: '<S142>/Comparison4'
     *  SignalConversion generated from: '<S1>/VeTIMR_e_TrrnMdSt'
     */
    rtb_Comparison4_b1w = (rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd ==
                           CeTMDR_e_Rock);

    /* Outputs for Atomic SubSystem: '<S143>/TurnOffDelaySample' */
    /* Outputs for Atomic SubSystem: '<S236>/EdgeFalling' */
    /* Logic: '<S237>/AND' incorporates:
     *  Logic: '<S237>/OR1'
     *  UnitDelay: '<S237>/Unit Delay'
     */
    rtb_AND_ng = ((!rtb_Comparison4_b1w) && (TMDR_ac_DW.UnitDelay_DSTATE_ev));

    /* Update for UnitDelay: '<S237>/Unit Delay' */
    TMDR_ac_DW.UnitDelay_DSTATE_ev = rtb_Comparison4_b1w;

    /* End of Outputs for SubSystem: '<S236>/EdgeFalling' */

    /* Switch: '<S236>/Switch' incorporates:
     *  Constant: '<S128>/Calib'
     *  UnitDelay: '<S236>/Unit Delay'
     */
    if (rtb_AND_ng)
    {
        TMDR_ac_DW.UnitDelay_DSTATE_cm = KeTMDR_Cnt_OffDlySelTrrnMd;
    }
    else
    {
        /* Sum: '<S236>/Summation' incorporates:
         *  Constant: '<S236>/Constant Value'
         *  UnitDelay: '<S236>/Unit Delay'
         */
        tmp = ((sint32)TMDR_ac_DW.UnitDelay_DSTATE_cm) - ((sint32)((uint16)1U));
        if (tmp < 0)
        {
            tmp = 0;
        }

        /* MinMax: '<S236>/Minimum' incorporates:
         *  Constant: '<S236>/Constant Value1'
         *  Sum: '<S236>/Summation'
         */
        if (((uint16)tmp) > ((uint16)0U))
        {
            TMDR_ac_DW.UnitDelay_DSTATE_cm = (uint16)tmp;
        }
        else
        {
            TMDR_ac_DW.UnitDelay_DSTATE_cm = ((uint16)0U);
        }

        /* End of MinMax: '<S236>/Minimum' */
    }

    /* End of Switch: '<S236>/Switch' */
    /* End of Outputs for SubSystem: '<S143>/TurnOffDelaySample' */

    /* RelationalOperator: '<S144>/Comparison4' incorporates:
     *  Constant: '<S239>/Constant'
     *  RelationalOperator: '<S142>/Comparison4'
     *  SignalConversion generated from: '<S1>/VeTIMR_e_TrrnMdSt'
     */
    rtb_AND_ng = (rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd == CeTMDR_e_Snow);

    /* Outputs for Atomic SubSystem: '<S144>/TurnOffDelaySample' */
    /* Outputs for Atomic SubSystem: '<S240>/EdgeFalling' */
    /* Logic: '<S241>/AND' incorporates:
     *  Logic: '<S241>/OR1'
     *  UnitDelay: '<S241>/Unit Delay'
     */
    rtb_AND_n5 = ((!rtb_AND_ng) && (TMDR_ac_DW.UnitDelay_DSTATE_ly));

    /* Update for UnitDelay: '<S241>/Unit Delay' */
    TMDR_ac_DW.UnitDelay_DSTATE_ly = rtb_AND_ng;

    /* End of Outputs for SubSystem: '<S240>/EdgeFalling' */

    /* Switch: '<S240>/Switch' incorporates:
     *  Constant: '<S128>/Calib'
     *  UnitDelay: '<S240>/Unit Delay'
     */
    if (rtb_AND_n5)
    {
        TMDR_ac_DW.UnitDelay_DSTATE_ot = KeTMDR_Cnt_OffDlySelTrrnMd;
    }
    else
    {
        /* Sum: '<S240>/Summation' incorporates:
         *  Constant: '<S240>/Constant Value'
         *  UnitDelay: '<S240>/Unit Delay'
         */
        tmp = ((sint32)TMDR_ac_DW.UnitDelay_DSTATE_ot) - ((sint32)((uint16)1U));
        if (tmp < 0)
        {
            tmp = 0;
        }

        /* MinMax: '<S240>/Minimum' incorporates:
         *  Constant: '<S240>/Constant Value1'
         *  Sum: '<S240>/Summation'
         */
        if (((uint16)tmp) > ((uint16)0U))
        {
            TMDR_ac_DW.UnitDelay_DSTATE_ot = (uint16)tmp;
        }
        else
        {
            TMDR_ac_DW.UnitDelay_DSTATE_ot = ((uint16)0U);
        }

        /* End of MinMax: '<S240>/Minimum' */
    }

    /* End of Switch: '<S240>/Switch' */
    /* End of Outputs for SubSystem: '<S144>/TurnOffDelaySample' */

    /* RelationalOperator: '<S145>/Comparison4' incorporates:
     *  Constant: '<S243>/Constant'
     *  RelationalOperator: '<S142>/Comparison4'
     *  SignalConversion generated from: '<S1>/VeTIMR_e_TrrnMdSt'
     */
    rtb_AND_n5 = (rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd == CeTMDR_e_Sport);

    /* Outputs for Atomic SubSystem: '<S145>/TurnOffDelaySample' */
    /* Outputs for Atomic SubSystem: '<S244>/EdgeFalling' */
    /* Logic: '<S245>/AND' incorporates:
     *  Logic: '<S245>/OR1'
     *  UnitDelay: '<S245>/Unit Delay'
     */
    rtb_AND_g3 = ((!rtb_AND_n5) && (TMDR_ac_DW.UnitDelay_DSTATE_hu));

    /* Update for UnitDelay: '<S245>/Unit Delay' */
    TMDR_ac_DW.UnitDelay_DSTATE_hu = rtb_AND_n5;

    /* End of Outputs for SubSystem: '<S244>/EdgeFalling' */

    /* Switch: '<S244>/Switch' incorporates:
     *  Constant: '<S128>/Calib'
     *  UnitDelay: '<S244>/Unit Delay'
     */
    if (rtb_AND_g3)
    {
        TMDR_ac_DW.UnitDelay_DSTATE_j = KeTMDR_Cnt_OffDlySelTrrnMd;
    }
    else
    {
        /* Sum: '<S244>/Summation' incorporates:
         *  Constant: '<S244>/Constant Value'
         *  UnitDelay: '<S244>/Unit Delay'
         */
        tmp = ((sint32)TMDR_ac_DW.UnitDelay_DSTATE_j) - ((sint32)((uint16)1U));
        if (tmp < 0)
        {
            tmp = 0;
        }

        /* MinMax: '<S244>/Minimum' incorporates:
         *  Constant: '<S244>/Constant Value1'
         *  Sum: '<S244>/Summation'
         */
        if (((uint16)tmp) > ((uint16)0U))
        {
            TMDR_ac_DW.UnitDelay_DSTATE_j = (uint16)tmp;
        }
        else
        {
            TMDR_ac_DW.UnitDelay_DSTATE_j = ((uint16)0U);
        }

        /* End of MinMax: '<S244>/Minimum' */
    }

    /* End of Switch: '<S244>/Switch' */
    /* End of Outputs for SubSystem: '<S145>/TurnOffDelaySample' */

    /* RelationalOperator: '<S146>/Comparison4' incorporates:
     *  Constant: '<S247>/Constant'
     *  RelationalOperator: '<S142>/Comparison4'
     *  SignalConversion generated from: '<S1>/VeTIMR_e_TrrnMdSt'
     */
    rtb_AND_g3 = (rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd == CeTMDR_e_MudSand);

    /* Outputs for Atomic SubSystem: '<S146>/TurnOffDelaySample' */
    /* Outputs for Atomic SubSystem: '<S248>/EdgeFalling' */
    /* Logic: '<S249>/AND' incorporates:
     *  Logic: '<S249>/OR1'
     *  UnitDelay: '<S249>/Unit Delay'
     */
    rtb_AND_gj = ((!rtb_AND_g3) && (TMDR_ac_DW.UnitDelay_DSTATE_e));

    /* Update for UnitDelay: '<S249>/Unit Delay' */
    TMDR_ac_DW.UnitDelay_DSTATE_e = rtb_AND_g3;

    /* End of Outputs for SubSystem: '<S248>/EdgeFalling' */

    /* Switch: '<S248>/Switch' incorporates:
     *  Constant: '<S128>/Calib'
     *  UnitDelay: '<S248>/Unit Delay'
     */
    if (rtb_AND_gj)
    {
        TMDR_ac_DW.UnitDelay_DSTATE_g1 = KeTMDR_Cnt_OffDlySelTrrnMd;
    }
    else
    {
        /* Sum: '<S248>/Summation' incorporates:
         *  Constant: '<S248>/Constant Value'
         *  UnitDelay: '<S248>/Unit Delay'
         */
        tmp = ((sint32)TMDR_ac_DW.UnitDelay_DSTATE_g1) - ((sint32)((uint16)1U));
        if (tmp < 0)
        {
            tmp = 0;
        }

        /* MinMax: '<S248>/Minimum' incorporates:
         *  Constant: '<S248>/Constant Value1'
         *  Sum: '<S248>/Summation'
         */
        if (((uint16)tmp) > ((uint16)0U))
        {
            TMDR_ac_DW.UnitDelay_DSTATE_g1 = (uint16)tmp;
        }
        else
        {
            TMDR_ac_DW.UnitDelay_DSTATE_g1 = ((uint16)0U);
        }

        /* End of MinMax: '<S248>/Minimum' */
    }

    /* End of Switch: '<S248>/Switch' */
    /* End of Outputs for SubSystem: '<S146>/TurnOffDelaySample' */

    /* RelationalOperator: '<S147>/Comparison4' incorporates:
     *  Constant: '<S251>/Constant'
     *  RelationalOperator: '<S142>/Comparison4'
     *  SignalConversion generated from: '<S1>/VeTIMR_e_TrrnMdSt'
     */
    rtb_AND_gj = (rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd == CeTMDR_e_Mud);

    /* Outputs for Atomic SubSystem: '<S147>/TurnOffDelaySample' */
    /* Outputs for Atomic SubSystem: '<S252>/EdgeFalling' */
    /* Logic: '<S253>/AND' incorporates:
     *  Logic: '<S253>/OR1'
     *  UnitDelay: '<S253>/Unit Delay'
     */
    rtb_AND_l = ((!rtb_AND_gj) && (TMDR_ac_DW.UnitDelay_DSTATE_f));

    /* Update for UnitDelay: '<S253>/Unit Delay' */
    TMDR_ac_DW.UnitDelay_DSTATE_f = rtb_AND_gj;

    /* End of Outputs for SubSystem: '<S252>/EdgeFalling' */

    /* Switch: '<S252>/Switch' incorporates:
     *  Constant: '<S128>/Calib'
     *  UnitDelay: '<S252>/Unit Delay'
     */
    if (rtb_AND_l)
    {
        TMDR_ac_DW.UnitDelay_DSTATE_p = KeTMDR_Cnt_OffDlySelTrrnMd;
    }
    else
    {
        /* Sum: '<S252>/Summation' incorporates:
         *  Constant: '<S252>/Constant Value'
         *  UnitDelay: '<S252>/Unit Delay'
         */
        tmp = ((sint32)TMDR_ac_DW.UnitDelay_DSTATE_p) - ((sint32)((uint16)1U));
        if (tmp < 0)
        {
            tmp = 0;
        }

        /* MinMax: '<S252>/Minimum' incorporates:
         *  Constant: '<S252>/Constant Value1'
         *  Sum: '<S252>/Summation'
         */
        if (((uint16)tmp) > ((uint16)0U))
        {
            TMDR_ac_DW.UnitDelay_DSTATE_p = (uint16)tmp;
        }
        else
        {
            TMDR_ac_DW.UnitDelay_DSTATE_p = ((uint16)0U);
        }

        /* End of MinMax: '<S252>/Minimum' */
    }

    /* End of Switch: '<S252>/Switch' */
    /* End of Outputs for SubSystem: '<S147>/TurnOffDelaySample' */

    /* RelationalOperator: '<S148>/Comparison4' incorporates:
     *  Constant: '<S255>/Constant'
     *  RelationalOperator: '<S142>/Comparison4'
     *  SignalConversion generated from: '<S1>/VeTIMR_e_TrrnMdSt'
     */
    rtb_AND_l = (rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd == CeTMDR_e_Sand);

    /* Outputs for Atomic SubSystem: '<S148>/TurnOffDelaySample' */
    /* Outputs for Atomic SubSystem: '<S256>/EdgeFalling' */
    /* Logic: '<S257>/AND' incorporates:
     *  Logic: '<S257>/OR1'
     *  UnitDelay: '<S257>/Unit Delay'
     */
    rtb_AND_gw = ((!rtb_AND_l) && (TMDR_ac_DW.UnitDelay_DSTATE_nx));

    /* Update for UnitDelay: '<S257>/Unit Delay' */
    TMDR_ac_DW.UnitDelay_DSTATE_nx = rtb_AND_l;

    /* End of Outputs for SubSystem: '<S256>/EdgeFalling' */

    /* Switch: '<S256>/Switch' incorporates:
     *  Constant: '<S128>/Calib'
     *  UnitDelay: '<S256>/Unit Delay'
     */
    if (rtb_AND_gw)
    {
        TMDR_ac_DW.UnitDelay_DSTATE_n = KeTMDR_Cnt_OffDlySelTrrnMd;
    }
    else
    {
        /* Sum: '<S256>/Summation' incorporates:
         *  Constant: '<S256>/Constant Value'
         *  UnitDelay: '<S256>/Unit Delay'
         */
        tmp = ((sint32)TMDR_ac_DW.UnitDelay_DSTATE_n) - ((sint32)((uint16)1U));
        if (tmp < 0)
        {
            tmp = 0;
        }

        /* MinMax: '<S256>/Minimum' incorporates:
         *  Constant: '<S256>/Constant Value1'
         *  Sum: '<S256>/Summation'
         */
        if (((uint16)tmp) > ((uint16)0U))
        {
            TMDR_ac_DW.UnitDelay_DSTATE_n = (uint16)tmp;
        }
        else
        {
            TMDR_ac_DW.UnitDelay_DSTATE_n = ((uint16)0U);
        }

        /* End of MinMax: '<S256>/Minimum' */
    }

    /* End of Switch: '<S256>/Switch' */
    /* End of Outputs for SubSystem: '<S148>/TurnOffDelaySample' */

    /* If: '<S25>/If' incorporates:
     *  Constant: '<S232>/Constant Value2'
     *  Constant: '<S236>/Constant Value2'
     *  Constant: '<S240>/Constant Value2'
     *  Constant: '<S244>/Constant Value2'
     *  Constant: '<S248>/Constant Value2'
     *  Constant: '<S252>/Constant Value2'
     *  Constant: '<S256>/Constant Value2'
     *  Constant: '<S259>/Constant'
     *  Logic: '<S142>/Logical1'
     *  Logic: '<S143>/Logical'
     *  Logic: '<S144>/Logical'
     *  Logic: '<S146>/Logical'
     *  Logic: '<S147>/Logical'
     *  Logic: '<S148>/Logical'
     *  Logic: '<S149>/Logical1'
     *  Logic: '<S232>/AND'
     *  Logic: '<S236>/AND'
     *  Logic: '<S240>/AND'
     *  Logic: '<S244>/AND'
     *  Logic: '<S248>/AND'
     *  Logic: '<S252>/AND'
     *  Logic: '<S256>/AND'
     *  Logic: '<S25>/Logical'
     *  RelationalOperator: '<S142>/Comparison4'
     *  RelationalOperator: '<S149>/Comparison4'
     *  RelationalOperator: '<S232>/Greater  Than'
     *  RelationalOperator: '<S236>/Greater  Than'
     *  RelationalOperator: '<S240>/Greater  Than'
     *  RelationalOperator: '<S244>/Greater  Than'
     *  RelationalOperator: '<S248>/Greater  Than'
     *  RelationalOperator: '<S252>/Greater  Than'
     *  RelationalOperator: '<S256>/Greater  Than'
     *  SignalConversion generated from: '<S1>/VeTIMR_e_TrrnMdSt'
     *  UnitDelay: '<S232>/Unit Delay'
     *  UnitDelay: '<S236>/Unit Delay'
     *  UnitDelay: '<S240>/Unit Delay'
     *  UnitDelay: '<S244>/Unit Delay'
     *  UnitDelay: '<S248>/Unit Delay'
     *  UnitDelay: '<S252>/Unit Delay'
     *  UnitDelay: '<S256>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeSRAR_b_Inhibi &&
            rtb_TmpSignalConversionAtVeSRAR_b_Inhi_l)
    {
        /* Outputs for IfAction SubSystem: '<S25>/TMDC_BatteryLimpHome' incorporates:
         *  ActionPort: '<S134>/ActionPort'
         */
        /* SignalConversion generated from: '<S134>/TrrnMdArb' incorporates:
         *  Constant: '<S171>/Constant'
         *  Merge: '<S25>/Merge'
         *  UnitDelay: '<S25>/UnitDelay1'
         */
        TMDR_ac_DW.UnitDelay1_DSTATE_i = CeTMDR_e_Auto;

        /* DataTypeConversion: '<S169>/DataTypeConversion' incorporates:
         *  Constant: '<S172>/Constant'
         *  Merge: '<S25>/Merge1'
         *  UnitDelay: '<S25>/UnitDelay'
         */
        TMDR_ac_DW.UnitDelay_DSTATE_pr = CeTMDR_e_Off;

        /* SignalConversion generated from: '<S134>/TorqSplt' incorporates:
         *  Constant: '<S134>/ConstantValue'
         *  UnitDelay: '<S25>/UnitDelay2'
         */
        TMDR_ac_DW.UnitDelay2_DSTATE = 1.0F;

        /* SignalConversion generated from: '<S134>/TargetSOC' incorporates:
         *  Constant: '<S134>/ConstantValue1'
         *  UnitDelay: '<S25>/UnitDelay3'
         */
        TMDR_ac_DW.UnitDelay3_DSTATE = 0.0F;

        /* Merge: '<S25>/Merge2' incorporates:
         *  Constant: '<S170>/Constant'
         *  SignalConversion generated from: '<S134>/StActv'
         */
        VeTMDC_e_StActv = CeTMDR_e_BatLimpHome;

        /* End of Outputs for SubSystem: '<S25>/TMDC_BatteryLimpHome' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S142>/TurnOffDelaySample' */
        if (rtb_TmpSignalConversionAtVeSRAR_b_Inhibi || (rtb_Logical2_b ||
                (TMDR_ac_DW.UnitDelay_DSTATE_i > ((uint16)0U))))
        {
            /* Outputs for IfAction SubSystem: '<S25>/TMDC_Auto' incorporates:
             *  ActionPort: '<S132>/ActionPort'
             */
            /* SignalConversion generated from: '<S132>/TrrnMdArb' incorporates:
             *  Constant: '<S155>/Constant'
             *  Merge: '<S25>/Merge'
             *  UnitDelay: '<S25>/UnitDelay1'
             */
            TMDR_ac_DW.UnitDelay1_DSTATE_i = CeTMDR_e_Auto;

            /* Switch: '<S132>/Switch2' incorporates:
             *  Switch: '<S132>/Switch'
             *  Switch: '<S132>/Switch1'
             */
            if (VeTMDC_b_ShtOffRv)
            {
                /* Switch: '<S132>/Switch2' incorporates:
                 *  Constant: '<S158>/Constant'
                 */
                TMDR_ac_DW.UnitDelay_DSTATE_pr = CeTMDR_e_Off;
            }
            else if (rtb_TmpSignalConversionAtVeTIMR_b_AWD__g)
            {
                /* Switch: '<S132>/Switch' incorporates:
                 *  Constant: '<S156>/Constant'
                 *  Switch: '<S132>/Switch2'
                 */
                TMDR_ac_DW.UnitDelay_DSTATE_pr = CeTMDR_e_AWD_Low;
            }
            else if (rtb_TmpSignalConversionAtVeTIMR_b_AWD_Lo)
            {
                /* Switch: '<S132>/Switch1' incorporates:
                 *  Constant: '<S154>/Constant'
                 *  Switch: '<S132>/Switch'
                 *  Switch: '<S132>/Switch2'
                 */
                TMDR_ac_DW.UnitDelay_DSTATE_pr = CeTMDR_e_AWD_Lock;
            }
            else
            {
                /* Outputs for Function Call SubSystem: '<S4>/Diagnostics' */
                /* Switch: '<S132>/Switch2' incorporates:
                 *  Constant: '<S13>/Constant'
                 *  RelationalOperator: '<S7>/Comparison5'
                 *  Switch: '<S132>/Switch'
                 */
                TMDR_ac_DW.UnitDelay_DSTATE_pr = CeTMDR_e_Off;

                /* End of Outputs for SubSystem: '<S4>/Diagnostics' */
            }

            /* End of Switch: '<S132>/Switch2' */

            /* Selector: '<S132>/Selector' incorporates:
             *  Constant: '<S160>/Calib'
             *  DataTypeConversion: '<S132>/DataTypeConversion'
             *  Switch: '<S132>/Switch2'
             *  UnitDelay: '<S25>/UnitDelay2'
             */
            TMDR_ac_DW.UnitDelay2_DSTATE = KaTMDR_r_TorqSpltTrrnLockLow[((sint32)
                ((uint32)(((uint32)TMDR_ac_DW.UnitDelay_DSTATE_pr) << 3U))) +
                ((sint32)TMDR_ac_ConstB.DTCBlk13)];

            /* SignalConversion generated from: '<S132>/TargetSOC' incorporates:
             *  Constant: '<S132>/ConstantValue'
             *  UnitDelay: '<S25>/UnitDelay3'
             */
            TMDR_ac_DW.UnitDelay3_DSTATE = 0.0F;

            /* Merge: '<S25>/Merge2' incorporates:
             *  Constant: '<S153>/Constant'
             *  SignalConversion generated from: '<S132>/StActv'
             */
            VeTMDC_e_StActv = CeTMDR_e_AutoActv;

            /* RelationalOperator: '<S132>/Comparison4' incorporates:
             *  Constant: '<S159>/Constant'
             *  Switch: '<S329>/Switch1'
             */
            rtb_Comparison4_d = (Switch1_m == CeDMDR_e_EV);

            /* End of Outputs for SubSystem: '<S25>/TMDC_Auto' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S143>/TurnOffDelaySample' */
            if (rtb_Logical2_a && (rtb_Comparison4_b1w ||
                                   (TMDR_ac_DW.UnitDelay_DSTATE_cm > ((uint16)0U))))
            {
                /* Outputs for IfAction SubSystem: '<S25>/TMDC_Rock' incorporates:
                 *  ActionPort: '<S138>/ActionPort'
                 */
                /* SignalConversion generated from: '<S138>/TrrnMdArb' incorporates:
                 *  Constant: '<S197>/Constant'
                 *  Merge: '<S25>/Merge'
                 *  UnitDelay: '<S25>/UnitDelay1'
                 */
                TMDR_ac_DW.UnitDelay1_DSTATE_i = CeTMDR_e_Rock;

                /* DataTypeConversion: '<S194>/DataTypeConversion' incorporates:
                 *  Constant: '<S198>/Constant'
                 *  Merge: '<S25>/Merge1'
                 *  UnitDelay: '<S25>/UnitDelay'
                 */
                TMDR_ac_DW.UnitDelay_DSTATE_pr = CeTMDR_e_AWD_Low;

                /* Selector: '<S138>/Selector' incorporates:
                 *  Constant: '<S199>/Calib'
                 *  UnitDelay: '<S25>/UnitDelay2'
                 */
                TMDR_ac_DW.UnitDelay2_DSTATE = KaTMDR_r_TorqSpltTrrnLockLow
                    [(TMDR_ac_ConstB.DataTypeConversion_l * 8) +
                    TMDR_ac_ConstB.DTCBlk38];

                /* SignalConversion generated from: '<S138>/TargetSOC' incorporates:
                 *  Constant: '<S200>/Calib'
                 *  UnitDelay: '<S25>/UnitDelay3'
                 */
                TMDR_ac_DW.UnitDelay3_DSTATE = KeTMDR_Pct_TargetSOCRock;

                /* Merge: '<S25>/Merge2' incorporates:
                 *  Constant: '<S196>/Constant'
                 *  SignalConversion generated from: '<S138>/StActv'
                 */
                VeTMDC_e_StActv = CeTMDR_e_RockActv;

                /* End of Outputs for SubSystem: '<S25>/TMDC_Rock' */
            }
            else
            {
                /* Outputs for Atomic SubSystem: '<S144>/TurnOffDelaySample' */
                if (rtb_Logical2_a && (rtb_AND_ng ||
                                       (TMDR_ac_DW.UnitDelay_DSTATE_ot >
                                        ((uint16)0U))))
                {
                    /* Outputs for IfAction SubSystem: '<S25>/TMDC_Snow' incorporates:
                     *  ActionPort: '<S140>/ActionPort'
                     */
                    /* SignalConversion generated from: '<S140>/TrrnMdArb' incorporates:
                     *  Constant: '<S215>/Constant'
                     *  Merge: '<S25>/Merge'
                     *  UnitDelay: '<S25>/UnitDelay1'
                     */
                    TMDR_ac_DW.UnitDelay1_DSTATE_i = CeTMDR_e_Snow;

                    /* Switch: '<S140>/Switch' */
                    if (rtb_TmpSignalConversionAtVeTIMR_b_AWD__g)
                    {
                        /* Switch: '<S140>/Switch' incorporates:
                         *  Constant: '<S216>/Constant'
                         */
                        TMDR_ac_DW.UnitDelay_DSTATE_pr = CeTMDR_e_AWD_Low;
                    }
                    else
                    {
                        /* Switch: '<S140>/Switch' incorporates:
                         *  Constant: '<S214>/Constant'
                         */
                        TMDR_ac_DW.UnitDelay_DSTATE_pr = CeTMDR_e_AWD_Lock;
                    }

                    /* End of Switch: '<S140>/Switch' */

                    /* Selector: '<S140>/Selector' incorporates:
                     *  Constant: '<S217>/Calib'
                     *  DataTypeConversion: '<S140>/DataTypeConversion1'
                     *  Switch: '<S140>/Switch'
                     *  UnitDelay: '<S25>/UnitDelay2'
                     */
                    TMDR_ac_DW.UnitDelay2_DSTATE = KaTMDR_r_TorqSpltTrrnLockLow
                        [((sint32)((uint32)(((uint32)
                             TMDR_ac_DW.UnitDelay_DSTATE_pr) << 3U))) + ((sint32)
                        TMDR_ac_ConstB.DTCBlk48)];

                    /* SignalConversion generated from: '<S140>/TargetSOC' incorporates:
                     *  Constant: '<S218>/Calib'
                     *  UnitDelay: '<S25>/UnitDelay3'
                     */
                    TMDR_ac_DW.UnitDelay3_DSTATE = KeTMDR_Pct_TargetSOCSnow;

                    /* Merge: '<S25>/Merge2' incorporates:
                     *  Constant: '<S213>/Constant'
                     *  SignalConversion generated from: '<S140>/StActv'
                     */
                    VeTMDC_e_StActv = CeTMDR_e_SnowActv;

                    /* End of Outputs for SubSystem: '<S25>/TMDC_Snow' */
                }
                else
                {
                    /* Outputs for Atomic SubSystem: '<S145>/TurnOffDelaySample' */
                    if (rtb_AND_n5 || (TMDR_ac_DW.UnitDelay_DSTATE_j > ((uint16)
                            0U)))
                    {
                        /* Outputs for IfAction SubSystem: '<S25>/TMDC_Sport' incorporates:
                         *  ActionPort: '<S141>/ActionPort'
                         */
                        /* SignalConversion generated from: '<S141>/TrrnMdArb' incorporates:
                         *  Constant: '<S224>/Constant'
                         *  Merge: '<S25>/Merge'
                         *  UnitDelay: '<S25>/UnitDelay1'
                         */
                        TMDR_ac_DW.UnitDelay1_DSTATE_i = CeTMDR_e_Sport;

                        /* Switch: '<S141>/Switch2' incorporates:
                         *  Logic: '<S141>/Logical'
                         *  Switch: '<S141>/Switch1'
                         */
                        if (rtb_TmpSignalConversionAtVeTIMR_b_AWD__g)
                        {
                            /* Switch: '<S141>/Switch2' incorporates:
                             *  Constant: '<S225>/Constant'
                             */
                            TMDR_ac_DW.UnitDelay_DSTATE_pr = CeTMDR_e_AWD_Low;
                        }
                        else if (rtb_Logical2_a &&
                                 rtb_TmpSignalConversionAtVeTIMR_b_AWD_Lo)
                        {
                            /* Switch: '<S141>/Switch1' incorporates:
                             *  Constant: '<S223>/Constant'
                             *  Switch: '<S141>/Switch2'
                             */
                            TMDR_ac_DW.UnitDelay_DSTATE_pr = CeTMDR_e_AWD_Lock;
                        }
                        else
                        {
                            /* Switch: '<S141>/Switch2' incorporates:
                             *  Constant: '<S226>/Constant'
                             *  Switch: '<S141>/Switch1'
                             */
                            TMDR_ac_DW.UnitDelay_DSTATE_pr = CeTMDR_e_Off;
                        }

                        /* End of Switch: '<S141>/Switch2' */

                        /* Selector: '<S141>/Selector' incorporates:
                         *  Constant: '<S228>/Calib'
                         *  DataTypeConversion: '<S141>/DataTypeConversion'
                         *  Switch: '<S141>/Switch2'
                         *  UnitDelay: '<S25>/UnitDelay2'
                         */
                        TMDR_ac_DW.UnitDelay2_DSTATE =
                            KaTMDR_r_TorqSpltTrrnLockLow[((sint32)((uint32)
                            (((uint32)TMDR_ac_DW.UnitDelay_DSTATE_pr) << 3U))) +
                            ((sint32)TMDR_ac_ConstB.DTCBlk53)];

                        /* SignalConversion generated from: '<S141>/TargetSOC' incorporates:
                         *  Constant: '<S229>/Calib'
                         *  UnitDelay: '<S25>/UnitDelay3'
                         */
                        TMDR_ac_DW.UnitDelay3_DSTATE = KeTMDR_Pct_TargetSOCSport;

                        /* Merge: '<S25>/Merge2' incorporates:
                         *  Constant: '<S222>/Constant'
                         *  SignalConversion generated from: '<S141>/StActv'
                         */
                        VeTMDC_e_StActv = CeTMDR_e_SportActv;

                        /* RelationalOperator: '<S141>/Comparison5' incorporates:
                         *  Constant: '<S227>/Constant'
                         *  Switch: '<S329>/Switch1'
                         */
                        rtb_Comparison5_mb = (Switch1_m != CeDMDR_e_EV);

                        /* End of Outputs for SubSystem: '<S25>/TMDC_Sport' */
                    }
                    else
                    {
                        /* Outputs for Atomic SubSystem: '<S146>/TurnOffDelaySample' */
                        if (rtb_Logical2_a && (rtb_AND_g3 ||
                                               (TMDR_ac_DW.UnitDelay_DSTATE_g1 >
                                                ((uint16)0U))))
                        {
                            /* Outputs for IfAction SubSystem: '<S25>/TMDC_MudSand' incorporates:
                             *  ActionPort: '<S137>/ActionPort'
                             */
                            /* SignalConversion generated from: '<S137>/TrrnMdArb' incorporates:
                             *  Constant: '<S189>/Constant'
                             *  Merge: '<S25>/Merge'
                             *  UnitDelay: '<S25>/UnitDelay1'
                             */
                            TMDR_ac_DW.UnitDelay1_DSTATE_i = CeTMDR_e_MudSand;

                            /* Switch: '<S137>/Switch' */
                            if (rtb_TmpSignalConversionAtVeTIMR_b_AWD__g)
                            {
                                /* Switch: '<S137>/Switch' incorporates:
                                 *  Constant: '<S190>/Constant'
                                 */
                                TMDR_ac_DW.UnitDelay_DSTATE_pr =
                                    CeTMDR_e_AWD_Low;
                            }
                            else
                            {
                                /* Switch: '<S137>/Switch' incorporates:
                                 *  Constant: '<S188>/Constant'
                                 */
                                TMDR_ac_DW.UnitDelay_DSTATE_pr =
                                    CeTMDR_e_AWD_Lock;
                            }

                            /* End of Switch: '<S137>/Switch' */

                            /* Selector: '<S137>/Selector' incorporates:
                             *  Constant: '<S191>/Calib'
                             *  DataTypeConversion: '<S137>/DataTypeConversion'
                             *  Switch: '<S137>/Switch'
                             *  UnitDelay: '<S25>/UnitDelay2'
                             */
                            TMDR_ac_DW.UnitDelay2_DSTATE =
                                KaTMDR_r_TorqSpltTrrnLockLow[((sint32)((uint32)
                                (((uint32)TMDR_ac_DW.UnitDelay_DSTATE_pr) << 3U)))
                                + ((sint32)TMDR_ac_ConstB.DTCBlk34)];

                            /* SignalConversion generated from: '<S137>/TargetSOC' incorporates:
                             *  Constant: '<S192>/Calib'
                             *  UnitDelay: '<S25>/UnitDelay3'
                             */
                            TMDR_ac_DW.UnitDelay3_DSTATE =
                                KeTMDR_Pct_TargetSOCMudSand;

                            /* Merge: '<S25>/Merge2' incorporates:
                             *  Constant: '<S187>/Constant'
                             *  SignalConversion generated from: '<S137>/StActv'
                             */
                            VeTMDC_e_StActv = CeTMDR_e_MudSandActv;

                            /* End of Outputs for SubSystem: '<S25>/TMDC_MudSand' */
                        }
                        else
                        {
                            /* Outputs for Atomic SubSystem: '<S147>/TurnOffDelaySample' */
                            if (rtb_Logical2_a && (rtb_AND_gj ||
                                                   (TMDR_ac_DW.UnitDelay_DSTATE_p
                                                    > ((uint16)0U))))
                            {
                                /* Outputs for IfAction SubSystem: '<S25>/TMDC_Mud' incorporates:
                                 *  ActionPort: '<S136>/ActionPort'
                                 */
                                /* SignalConversion generated from: '<S136>/TrrnMdArb' incorporates:
                                 *  Constant: '<S180>/Constant'
                                 *  Merge: '<S25>/Merge'
                                 *  UnitDelay: '<S25>/UnitDelay1'
                                 */
                                TMDR_ac_DW.UnitDelay1_DSTATE_i = CeTMDR_e_Mud;

                                /* Switch: '<S136>/Switch' */
                                if (rtb_TmpSignalConversionAtVeTIMR_b_AWD__g)
                                {
                                    /* Switch: '<S136>/Switch' incorporates:
                                     *  Constant: '<S181>/Constant'
                                     */
                                    TMDR_ac_DW.UnitDelay_DSTATE_pr =
                                        CeTMDR_e_AWD_Low;
                                }
                                else
                                {
                                    /* Switch: '<S136>/Switch' incorporates:
                                     *  Constant: '<S179>/Constant'
                                     */
                                    TMDR_ac_DW.UnitDelay_DSTATE_pr =
                                        CeTMDR_e_AWD_Lock;
                                }

                                /* End of Switch: '<S136>/Switch' */

                                /* Selector: '<S136>/Selector' incorporates:
                                 *  Constant: '<S182>/Calib'
                                 *  DataTypeConversion: '<S136>/DataTypeConversion'
                                 *  Switch: '<S136>/Switch'
                                 *  UnitDelay: '<S25>/UnitDelay2'
                                 */
                                TMDR_ac_DW.UnitDelay2_DSTATE =
                                    KaTMDR_r_TorqSpltTrrnLockLow[((sint32)
                                    ((uint32)(((uint32)
                                               TMDR_ac_DW.UnitDelay_DSTATE_pr) <<
                                              3U))) + ((sint32)
                                                       TMDR_ac_ConstB.DTCBlk29)];

                                /* SignalConversion generated from: '<S136>/TargetSOC' incorporates:
                                 *  Constant: '<S183>/Calib'
                                 *  UnitDelay: '<S25>/UnitDelay3'
                                 */
                                TMDR_ac_DW.UnitDelay3_DSTATE =
                                    KeTMDR_Pct_TargetSOCMudSand;

                                /* Merge: '<S25>/Merge2' incorporates:
                                 *  Constant: '<S178>/Constant'
                                 *  SignalConversion generated from: '<S136>/StActv'
                                 */
                                VeTMDC_e_StActv = CeTMDR_e_MudActv;

                                /* End of Outputs for SubSystem: '<S25>/TMDC_Mud' */
                            }
                            else
                            {
                                /* Outputs for Atomic SubSystem: '<S148>/TurnOffDelaySample' */
                                if (rtb_Logical2_a && (rtb_AND_l ||
                                                       (TMDR_ac_DW.UnitDelay_DSTATE_n
                                                        > ((uint16)0U))))
                                {
                                    /* Outputs for IfAction SubSystem: '<S25>/TMDC_Sand' incorporates:
                                     *  ActionPort: '<S139>/ActionPort'
                                     */
                                    /* SignalConversion generated from: '<S139>/TrrnMdArb' incorporates:
                                     *  Constant: '<S206>/Constant'
                                     *  Merge: '<S25>/Merge'
                                     *  UnitDelay: '<S25>/UnitDelay1'
                                     */
                                    TMDR_ac_DW.UnitDelay1_DSTATE_i =
                                        CeTMDR_e_Sand;

                                    /* Switch: '<S139>/Switch' */
                                    if (rtb_TmpSignalConversionAtVeTIMR_b_AWD__g)
                                    {
                                        /* Switch: '<S139>/Switch' incorporates:
                                         *  Constant: '<S207>/Constant'
                                         */
                                        TMDR_ac_DW.UnitDelay_DSTATE_pr =
                                            CeTMDR_e_AWD_Low;
                                    }
                                    else
                                    {
                                        /* Switch: '<S139>/Switch' incorporates:
                                         *  Constant: '<S205>/Constant'
                                         */
                                        TMDR_ac_DW.UnitDelay_DSTATE_pr =
                                            CeTMDR_e_AWD_Lock;
                                    }

                                    /* End of Switch: '<S139>/Switch' */

                                    /* Selector: '<S139>/Selector' incorporates:
                                     *  Constant: '<S208>/Calib'
                                     *  DataTypeConversion: '<S139>/DataTypeConversion'
                                     *  Switch: '<S139>/Switch'
                                     *  UnitDelay: '<S25>/UnitDelay2'
                                     */
                                    TMDR_ac_DW.UnitDelay2_DSTATE =
                                        KaTMDR_r_TorqSpltTrrnLockLow[((sint32)
                                        ((uint32)(((uint32)
                                                   TMDR_ac_DW.UnitDelay_DSTATE_pr)
                                                  << 3U))) + ((sint32)
                                        TMDR_ac_ConstB.DTCBlk43)];

                                    /* SignalConversion generated from: '<S139>/TargetSOC' incorporates:
                                     *  Constant: '<S209>/Calib'
                                     *  UnitDelay: '<S25>/UnitDelay3'
                                     */
                                    TMDR_ac_DW.UnitDelay3_DSTATE =
                                        KeTMDR_Pct_TargetSOCMudSand;

                                    /* Merge: '<S25>/Merge2' incorporates:
                                     *  Constant: '<S204>/Constant'
                                     *  SignalConversion generated from: '<S139>/StActv'
                                     */
                                    VeTMDC_e_StActv = CeTMDR_e_SandActv;

                                    /* End of Outputs for SubSystem: '<S25>/TMDC_Sand' */
                                }
                                else if (((VeTMDD_b_TrrnMdNotAvailDiag) ||
                                          (VeTMDC_b_ShtOffRv)) ||
                                         (rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd
                                          == CeTMDR_e_NotDefine))
                                {
                                    /* Outputs for IfAction SubSystem: '<S25>/TMDC_Auto_LockLowOff' incorporates:
                                     *  ActionPort: '<S133>/ActionPort'
                                     */
                                    /* SignalConversion generated from: '<S133>/TrrnMdArb' incorporates:
                                     *  Constant: '<S166>/Constant'
                                     *  Merge: '<S25>/Merge'
                                     *  UnitDelay: '<S25>/UnitDelay1'
                                     */
                                    TMDR_ac_DW.UnitDelay1_DSTATE_i =
                                        CeTMDR_e_Auto;

                                    /* DataTypeConversion: '<S162>/DataTypeConversion' incorporates:
                                     *  Constant: '<S165>/Constant'
                                     *  Merge: '<S25>/Merge1'
                                     *  UnitDelay: '<S25>/UnitDelay'
                                     */
                                    TMDR_ac_DW.UnitDelay_DSTATE_pr =
                                        CeTMDR_e_Off;

                                    /* Selector: '<S133>/Selector' incorporates:
                                     *  Constant: '<S167>/Calib'
                                     *  UnitDelay: '<S25>/UnitDelay2'
                                     */
                                    TMDR_ac_DW.UnitDelay2_DSTATE =
                                        KaTMDR_r_TorqSpltTrrnLockLow
                                        [(TMDR_ac_ConstB.DataTypeConversion * 8)
                                        + TMDR_ac_ConstB.DTCBlk20];

                                    /* SignalConversion generated from: '<S133>/TargetSOC' incorporates:
                                     *  Constant: '<S133>/ConstantValue'
                                     *  UnitDelay: '<S25>/UnitDelay3'
                                     */
                                    TMDR_ac_DW.UnitDelay3_DSTATE = 0.0F;

                                    /* Merge: '<S25>/Merge2' incorporates:
                                     *  Constant: '<S164>/Constant'
                                     *  SignalConversion generated from: '<S133>/StActv'
                                     */
                                    VeTMDC_e_StActv = CeTMDR_e_Auto_LockLowOff;

                                    /* End of Outputs for SubSystem: '<S25>/TMDC_Auto_LockLowOff' */
                                }
                                else
                                {
                                    /* Outputs for IfAction SubSystem: '<S25>/TMDC_HoldLastMode' incorporates:
                                     *  ActionPort: '<S135>/ActionPort'
                                     */
                                    /* Merge: '<S25>/Merge2' incorporates:
                                     *  Constant: '<S174>/Constant'
                                     *  SignalConversion generated from: '<S135>/StActv'
                                     */
                                    VeTMDC_e_StActv = CeTMDR_e_HoldLastMode;

                                    /* End of Outputs for SubSystem: '<S25>/TMDC_HoldLastMode' */
                                }

                                /* End of Outputs for SubSystem: '<S148>/TurnOffDelaySample' */
                            }

                            /* End of Outputs for SubSystem: '<S147>/TurnOffDelaySample' */
                        }

                        /* End of Outputs for SubSystem: '<S146>/TurnOffDelaySample' */
                    }

                    /* End of Outputs for SubSystem: '<S145>/TurnOffDelaySample' */
                }

                /* End of Outputs for SubSystem: '<S144>/TurnOffDelaySample' */
            }

            /* End of Outputs for SubSystem: '<S143>/TurnOffDelaySample' */
        }

        /* End of Outputs for SubSystem: '<S142>/TurnOffDelaySample' */
    }

    /* End of If: '<S25>/If' */

    /* Outport: '<Root>/VeTMDR_e_TrrnMd' incorporates:
     *  DataTypeConversion: '<S125>/DataTypeConversion'
     *  DataTypeConversion: '<S22>/DataTypeConversion'
     *  Merge: '<S25>/Merge'
     *  UnitDelay: '<S25>/UnitDelay1'
     */
    (void)Rte_Write_VeTMDR_e_TrrnMd_Value(TMDR_ac_DW.UnitDelay1_DSTATE_i);

    /* DataTypeConversion: '<S126>/DataTypeConversion' incorporates:
     *  Merge: '<S25>/Merge1'
     *  UnitDelay: '<S25>/UnitDelay'
     */
    TMDR_ac_B.DataTypeConversion = TMDR_ac_DW.UnitDelay_DSTATE_pr;

    /* Outport: '<Root>/VeTMDR_e_LockLowSt' incorporates:
     *  DataTypeConversion: '<S126>/DataTypeConversion'
     *  DataTypeConversion: '<S23>/DataTypeConversion'
     */
    (void)Rte_Write_VeTMDR_e_LockLowSt_Value(TMDR_ac_B.DataTypeConversion);

    /* Switch: '<S75>/Switch1' incorporates:
     *  Constant: '<S72>/Calib'
     *  Constant: '<S73>/Calib'
     *  Constant: '<S75>/ConstantValue2'
     *  Constant: '<S75>/ConstantValue3'
     *  RelationalOperator: '<S75>/Comparison1'
     *  RelationalOperator: '<S75>/Comparison5'
     *  S-Function (sfix_bitop): '<S30>/BitwiseLogicalOperator1'
     *  S-Function (sfix_bitop): '<S30>/BitwiseLogicalOperator2'
     *  Switch: '<S75>/Switch'
     */
    if ((Switch5 & KeTMDR_g_ImmedStopFltADW) >= 1U)
    {
        /* Switch: '<S75>/Switch' incorporates:
         *  Constant: '<S73>/Calib'
         *  Constant: '<S75>/ConstantValue1'
         *  Constant: '<S75>/ConstantValue2'
         *  RelationalOperator: '<S75>/Comparison5'
         *  S-Function (sfix_bitop): '<S30>/BitwiseLogicalOperator1'
         */
        if ((Switch4 & KeTMDR_g_StrtDisAllowFltAWD) >= 1U)
        {
            Switch4_0 = TMDR_ac_ConstB.FixPtBitwiseOperator1_p;
        }
        else
        {
            Switch4_0 = ((uint8)0U);
        }

        /* Switch: '<S75>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S77>/FixPt Bitwise Operator1'
         */
        VeTMDC_y_CondAWD_Flt = (uint8)(Switch4_0 | ((uint8)2U));
    }
    else if ((Switch4 & KeTMDR_g_StrtDisAllowFltAWD) >= 1U)
    {
        /* Switch: '<S75>/Switch' incorporates:
         *  Switch: '<S75>/Switch1'
         */
        VeTMDC_y_CondAWD_Flt = TMDR_ac_ConstB.FixPtBitwiseOperator1_p;
    }
    else
    {
        /* Switch: '<S75>/Switch1' incorporates:
         *  Constant: '<S75>/ConstantValue1'
         *  Switch: '<S75>/Switch'
         */
        VeTMDC_y_CondAWD_Flt = ((uint8)0U);
    }

    /* End of Switch: '<S75>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Inport: '<Root>/VeTINR_b_TCMLimphomeFaultsFA' */
    (void)Rte_Read_VeTINR_b_TCMLimphomeFaultsFA_Value(&tmpRead_8);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDC_FrontRearAxleTorqueArbitration'
     */
    /* Logic: '<S33>/Logical1' incorporates:
     *  Constant: '<S112>/Calib'
     *  Constant: '<S113>/Calib'
     *  RelationalOperator: '<S33>/Comparison1'
     *  RelationalOperator: '<S33>/Comparison2'
     */
    VeTMDC_b_TCMSetAWD_Flt = (((((sint32)Switch1_l) == ((sint32)
        KeTMDR_d_TCMFailDsblEV_FltAWD)) || (((sint32)Switch1_l) == ((sint32)
        KeTMDR_d_TCMFailF_EV_FltAWD))) || tmpRead_8);

    /* Switch: '<S75>/Switch2' */
    if (VeTMDC_b_TCMSetAWD_Flt)
    {
        /* Switch: '<S75>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S78>/FixPt Bitwise Operator1'
         */
        VeTMDC_y_CondAWD_Flt = (uint8)(VeTMDC_y_CondAWD_Flt | ((uint8)4U));
    }

    /* End of Switch: '<S75>/Switch2' */

    /* Switch: '<S75>/Switch3' incorporates:
     *  Constant: '<S74>/Calib'
     *  Constant: '<S75>/ConstantValue4'
     *  RelationalOperator: '<S75>/Comparison2'
     *  S-Function (sfix_bitop): '<S30>/BitwiseLogicalOperator'
     */
    if (((uint32)((sint32)(((sint32)rtb_Switch1_a4) & ((sint32)
            KeTMDR_y_EV_SetFltAWD)))) >= 1U)
    {
        /* Switch: '<S75>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S79>/FixPt Bitwise Operator1'
         */
        VeTMDC_y_CondAWD_Flt = (uint8)(VeTMDC_y_CondAWD_Flt | ((uint8)8U));
    }

    /* End of Switch: '<S75>/Switch3' */

    /* Switch: '<S75>/Switch4' */
    if (VeTMDD_b_TrrnMdNotAvailDiag)
    {
        /* Switch: '<S75>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S80>/FixPt Bitwise Operator1'
         */
        VeTMDC_y_CondAWD_Flt = (uint8)(VeTMDC_y_CondAWD_Flt | ((uint8)16U));
    }

    /* End of Switch: '<S75>/Switch4' */

    /* Switch: '<S75>/Switch5' incorporates:
     *  Logic: '<S30>/Logical'
     */
    if (rtb_TmpSignalConversionAtVeSRAR_b_Inhi_l &&
            rtb_TmpSignalConversionAtVeSRAR_b_Inhibi)
    {
        /* Switch: '<S75>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S81>/FixPt Bitwise Operator1'
         */
        VeTMDC_y_CondAWD_Flt = (uint8)(VeTMDC_y_CondAWD_Flt | ((uint8)32U));
    }

    /* End of Switch: '<S75>/Switch5' */

    /* Switch: '<S75>/Switch6' */
    if (rtb_TmpSignalConversionAtVeSRAR_b_Inhibi)
    {
        /* Switch: '<S75>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S82>/FixPt Bitwise Operator1'
         */
        VeTMDC_y_CondAWD_Flt = (uint8)(VeTMDC_y_CondAWD_Flt | ((uint8)64U));
    }

    /* End of Switch: '<S75>/Switch6' */

    /* S-Function (sfix_bitop): '<S28>/BitwiseLogicalOperator1' incorporates:
     *  Constant: '<S40>/Calib'
     */
    VeTMDC_d_BrkShtOffSndFlt = (uint16)(rtb_Switch1_f &
        KeTMDR_d_BrkShtOffRsnSndFlt);

    /* S-Function (sfix_bitop): '<S32>/BitwiseLogicalOperator2' incorporates:
     *  Constant: '<S100>/Calib'
     */
    VeTMDC_y_SpdShtOffSndFlt = (uint8)(rtb_Switch1_ip & KeTMDR_y_SpdShtOffSndFlt);

    /* Switch: '<S75>/Switch7' incorporates:
     *  Constant: '<S28>/ConstantValue12'
     *  Constant: '<S32>/ConstantValue11'
     *  Logic: '<S30>/Logical1'
     *  RelationalOperator: '<S28>/Comparison12'
     *  RelationalOperator: '<S32>/Comparison10'
     */
    if ((VeTMDC_d_BrkShtOffSndFlt > ((uint16)0U)) || (VeTMDC_y_SpdShtOffSndFlt >
         ((uint8)0U)))
    {
        /* Switch: '<S75>/Switch7' incorporates:
         *  S-Function (sfix_bitop): '<S83>/FixPt Bitwise Operator1'
         */
        VeTMDC_y_CondAWD_Flt = (uint8)(VeTMDC_y_CondAWD_Flt | ((uint8)128U));
    }

    /* End of Switch: '<S75>/Switch7' */

    /* RelationalOperator: '<S33>/Comparison9' incorporates:
     *  Constant: '<S115>/Calib'
     */
    VeTMDC_b_TCMShtOff4Low = (((sint32)Switch1_l) == ((sint32)
        KeTMDR_d_TCMFail_4LowShtOff));

    /* If: '<S24>/If' incorporates:
     *  Constant: '<S30>/ConstantValue9'
     *  Constant: '<S31>/ConstantValue9'
     *  RelationalOperator: '<S30>/Comparison11'
     *  RelationalOperator: '<S31>/Comparison11'
     */
    if (VeTMDC_y_CondAWD_Flt > ((uint8)0U))
    {
        /* Outputs for IfAction SubSystem: '<S24>/TRNC_AWD_Fault' incorporates:
         *  ActionPort: '<S36>/ActionPort'
         */
        /* Merge: '<S24>/Merge' incorporates:
         *  Constant: '<S121>/Constant'
         *  SignalConversion generated from: '<S36>/AWD_St'
         */
        TMDR_ac_B.Merge = CeTMDR_e_AWD_Fault;

        /* End of Outputs for SubSystem: '<S24>/TRNC_AWD_Fault' */
    }
    else if (VeTMDC_g_AWDShOffRsn > 0U)
    {
        /* Outputs for IfAction SubSystem: '<S24>/TRNC_AWD_NotAllow' incorporates:
         *  ActionPort: '<S37>/ActionPort'
         */
        /* Merge: '<S24>/Merge' incorporates:
         *  Constant: '<S123>/Constant'
         *  SignalConversion generated from: '<S37>/AWD_St'
         */
        TMDR_ac_B.Merge = CeTMDR_e_AWD_BothNotAllowed;

        /* End of Outputs for SubSystem: '<S24>/TRNC_AWD_NotAllow' */
    }
    else if (VeTMDC_b_TCMShtOff4Low)
    {
        /* Outputs for IfAction SubSystem: '<S24>/TRNC_AWD_4LowNotAllow' incorporates:
         *  ActionPort: '<S34>/ActionPort'
         */
        /* Merge: '<S24>/Merge' incorporates:
         *  Constant: '<S117>/Constant'
         *  SignalConversion generated from: '<S34>/AWD_St'
         */
        TMDR_ac_B.Merge = CeTMDR_e_AWD_4LockAllowed;

        /* End of Outputs for SubSystem: '<S24>/TRNC_AWD_4LowNotAllow' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S24>/TRNC_AWD_Allow' incorporates:
         *  ActionPort: '<S35>/ActionPort'
         */
        /* Merge: '<S24>/Merge' incorporates:
         *  Constant: '<S119>/Constant'
         *  SignalConversion generated from: '<S35>/AWD_St'
         */
        TMDR_ac_B.Merge = CeTMDR_e_AWD_BothAllowed;

        /* End of Outputs for SubSystem: '<S24>/TRNC_AWD_Allow' */
    }

    /* End of If: '<S24>/If' */

    /* Outport: '<Root>/VeTMDR_i_TrueTrrnMd' incorporates:
     *  Constant: '<S127>/Calib'
     *  DataTypeConversion: '<S25>/DataTypeConversion2'
     *  Merge: '<S25>/Merge'
     *  Selector: '<S25>/Selector2'
     *  UnitDelay: '<S25>/UnitDelay1'
     */
    (void)Rte_Write_VeTMDR_i_TrueTrrnMd_Value(KaTMDR_i_TrueTrrnMd
        [(TMDR_ac_DW.UnitDelay1_DSTATE_i)]);

    /* Gain: '<S130>/Gain' incorporates:
     *  UnitDelay: '<S25>/UnitDelay2'
     */
    TMDR_ac_B.Gain = 1.0F * TMDR_ac_DW.UnitDelay2_DSTATE;

    /* Outport: '<Root>/VeTMDR_Pct_TargetSOC' incorporates:
     *  Gain: '<S131>/Gain'
     *  UnitDelay: '<S25>/UnitDelay3'
     */
    (void)Rte_Write_VeTMDR_Pct_TargetSOC_Value(1.0F *
        TMDR_ac_DW.UnitDelay3_DSTATE);

    /* Gain: '<S129>/Gain' */
    TMDR_ac_B.Gain_l = ((true) && rtb_TmpSignalConversionAtVeTIMR_b_TrrnMd);

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Diagnostics'
     */
    /* If: '<S26>/If' incorporates:
     *  Constant: '<S13>/Constant'
     *  DataTypeConversion: '<S126>/DataTypeConversion'
     *  Inport: '<Root>/VeABCR_P_HV_AccPwr'
     *  Inport: '<Root>/VeBACR_P_BattPwrShift_Tact'
     *  Inport: '<Root>/VeESPR_e_EngineSpeedStatus'
     *  Inport: '<Root>/VeHSCR_r_DonutSpaceCoefB2'
     *  Inport: '<Root>/VeHSCR_r_DonutSpaceCoefCb'
     *  Inport: '<Root>/VeINVR_T_MtrA_Temp'
     *  RelationalOperator: '<S26>/Comparison5'
     *  RelationalOperator: '<S7>/Comparison5'
     */
    if (TMDR_ac_B.DataTypeConversion != CeTMDR_e_Off)
    {
        (void)Rte_Read_VeESPR_e_EngineSpeedStatus_Value(&tmpRead_a);

        /* Outputs for IfAction SubSystem: '<S26>/TMDC_TorqFloorArb' incorporates:
         *  ActionPort: '<S262>/ActionPort'
         */
        /* Switch: '<S265>/Switch5' incorporates:
         *  Constant: '<S271>/Constant'
         *  Inport: '<Root>/VeESPR_e_EngineSpeedStatus'
         *  Inport: '<Root>/VeTMMR_r_CoeffGrRatClchOncPost'
         *  Inport: '<Root>/VeTMMR_r_CoeffGrRatClchOncPre'
         *  RelationalOperator: '<S265>/Comparison4'
         */
        if (tmpRead_a == CeESPR_e_EngSpdInvalid)
        {
            /* Switch: '<S265>/Switch5' incorporates:
             *  Constant: '<S265>/ConstantValue3'
             */
            VeTMDC_n_NoDflt = 700.0F;
        }
        else
        {
            (void)Rte_Read_VeTMMR_r_CoeffGrRatClchOncPost_Value(&rtb_Product2);
            (void)Rte_Read_VeTMMR_r_CoeffGrRatClchOncPre_Value(&tmpRead_i);

            /* Product: '<S265>/Product2' incorporates:
             *  Constant: '<S275>/Calib'
             *  Inport: '<Root>/VeTMMR_r_CoeffGrRatClchOncPost'
             *  Inport: '<Root>/VeTMMR_r_CoeffGrRatClchOncPre'
             */
            rtb_Product2 *= ((float32)Rte_Prm_KeTSXR_r_FDRf_KeTSXR_r_FDRf()) *
                tmpRead_i;

            /* Outputs for Atomic SubSystem: '<S265>/ProtectedDivision1' */
            /* Switch: '<S278>/Switch1' incorporates:
             *  Constant: '<S278>/Constant Value'
             *  Constant: '<S278>/Constant Value1'
             *  Constant: '<S278>/Constant Value2'
             *  Constant: '<S278>/Constant Value3'
             *  Logic: '<S278>/AND'
             *  RelationalOperator: '<S278>/Greater Than or Equal '
             *  RelationalOperator: '<S278>/Greater Than or Equal 1'
             *  RelationalOperator: '<S278>/Not Equal'
             *  RelationalOperator: '<S278>/Not Equal1'
             *  Switch: '<S278>/Switch2'
             *  Switch: '<S278>/Switch3'
             */
            if ((rtb_TmpSignalConversionAtVeESPR_n_Engine != 0.0F) &&
                    (rtb_Product2 != 0.0F))
            {
                /* Switch: '<S265>/Switch5' incorporates:
                 *  Product: '<S278>/Division'
                 *  Switch: '<S278>/Switch1'
                 */
                VeTMDC_n_NoDflt = rtb_TmpSignalConversionAtVeESPR_n_Engine /
                    rtb_Product2;
            }
            else if (rtb_TmpSignalConversionAtVeESPR_n_Engine > 0.0F)
            {
                /* Switch: '<S278>/Switch2' incorporates:
                 *  Constant: '<S278>/MAXFLOAT'
                 *  Switch: '<S265>/Switch5'
                 */
                VeTMDC_n_NoDflt = 3.402823466E+38F;
            }
            else if (rtb_TmpSignalConversionAtVeESPR_n_Engine < 0.0F)
            {
                /* Switch: '<S278>/Switch3' incorporates:
                 *  Constant: '<S278>/MINFLOAT'
                 *  Switch: '<S265>/Switch5'
                 *  Switch: '<S278>/Switch2'
                 */
                VeTMDC_n_NoDflt = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S265>/Switch5' incorporates:
                 *  Constant: '<S278>/Constant Value4'
                 *  Switch: '<S278>/Switch2'
                 *  Switch: '<S278>/Switch3'
                 */
                VeTMDC_n_NoDflt = 0.0F;
            }

            /* End of Switch: '<S278>/Switch1' */
            /* End of Outputs for SubSystem: '<S265>/ProtectedDivision1' */
        }

        /* End of Switch: '<S265>/Switch5' */

        /* Outputs for Atomic SubSystem: '<S265>/DigitalLowpassResetEnabled1' */
        /* Outputs for Atomic SubSystem: '<S265>/DigitalLowpassResetEnabled' */
        /* Switch: '<S269>/Switch1' incorporates:
         *  Constant: '<S265>/FALSEConstant'
         *  Constant: '<S265>/TRUEConstant'
         *  Inport: '<Root>/VeWTAR_r_PRNDL_Coeff'
         *  Switch: '<S269>/Switch2'
         *  Switch: '<S270>/Switch1'
         *  Switch: '<S270>/Switch2'
         */
        if (false)
        {
            /* Switch: '<S269>/Switch1' incorporates:
             *  Constant: '<S265>/ConstantValue4'
             */
            VeTMDC_n_NoAvgAbs = 0.0F;

            /* Switch: '<S270>/Switch1' incorporates:
             *  Constant: '<S265>/ConstantValue6'
             */
            VeTMDC_phi_SlopeAngle = 0.0F;
        }
        else
        {
            if (true)
            {
                /* Switch: '<S265>/Switch1' incorporates:
                 *  Constant: '<S265>/ConstantValue2'
                 *  Constant: '<S265>/ConstantValue5'
                 *  Constant: '<S272>/Calib'
                 *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
                 *  RelationalOperator: '<S265>/Comparison5'
                 *  S-Function (sfix_bitop): '<S265>/BitwiseLogicalOperator'
                 *  Switch: '<S269>/Switch2'
                 */
                if ((KeTMDR_d_TrrnMdArbSel & ((uint16)1U)) >= ((uint16)1U))
                {
                    /* Switch: '<S265>/Switch4' incorporates:
                     *  Logic: '<S265>/Logical'
                     *  Switch: '<S265>/Switch2'
                     */
                    if (Switch7_i && Switch3_h)
                    {
                        /* Switch: '<S265>/Switch1' incorporates:
                         *  Switch: '<S265>/Switch4'
                         */
                        rtb_TmpSignalConversionAtVeESPR_n_Engine =
                            VeTMDC_n_NoDflt;
                    }
                    else
                    {
                        if (Switch7_i)
                        {
                            /* Switch: '<S265>/Switch2' */
                            rtb_TmpSignalConversionAtVeESPR_n_Engine = Switch2_n;
                        }
                        else
                        {
                            /* Switch: '<S265>/Switch2' */
                            rtb_TmpSignalConversionAtVeESPR_n_Engine = Switch1_b;
                        }

                        /* Switch: '<S265>/Switch3' */
                        if (Switch3_h)
                        {
                            Switch2_n = Switch1_b;
                        }

                        /* End of Switch: '<S265>/Switch3' */

                        /* Switch: '<S265>/Switch1' incorporates:
                         *  Abs: '<S265>/Abs'
                         *  Constant: '<S265>/ConstantValue'
                         *  Product: '<S265>/Product'
                         *  Sum: '<S265>/Sum'
                         *  Switch: '<S265>/Switch4'
                         */
                        rtb_TmpSignalConversionAtVeESPR_n_Engine = fabsf
                            ((rtb_TmpSignalConversionAtVeESPR_n_Engine +
                              Switch2_n) * 0.5F);
                    }

                    /* End of Switch: '<S265>/Switch4' */
                }
                else
                {
                    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value(&tmpRead_o);

                    /* Abs: '<S265>/Abs1' incorporates:
                     *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
                     */
                    rtb_TmpSignalConversionAtVeESPR_n_Engine = fabsf(tmpRead_o);

                    /* Outputs for Atomic SubSystem: '<S265>/ProtectedDivision' */
                    /* Switch: '<S277>/Switch1' incorporates:
                     *  Constant: '<S276>/Calib'
                     *  Constant: '<S277>/Constant Value'
                     *  Constant: '<S277>/Constant Value1'
                     *  Constant: '<S277>/Constant Value2'
                     *  Constant: '<S277>/Constant Value3'
                     *  Logic: '<S277>/AND'
                     *  RelationalOperator: '<S277>/Greater Than or Equal '
                     *  RelationalOperator: '<S277>/Greater Than or Equal 1'
                     *  RelationalOperator: '<S277>/Not Equal'
                     *  RelationalOperator: '<S277>/Not Equal1'
                     *  Switch: '<S277>/Switch2'
                     *  Switch: '<S277>/Switch3'
                     */
                    if ((rtb_TmpSignalConversionAtVeESPR_n_Engine != 0.0F) &&
                            (((float32)Rte_Prm_KeTSXR_r_FDRr_KeTSXR_r_FDRr()) !=
                             0.0F))
                    {
                        /* Switch: '<S265>/Switch1' incorporates:
                         *  Product: '<S277>/Division'
                         *  Switch: '<S277>/Switch1'
                         */
                        rtb_TmpSignalConversionAtVeESPR_n_Engine /= (float32)
                            Rte_Prm_KeTSXR_r_FDRr_KeTSXR_r_FDRr();
                    }
                    else if (rtb_TmpSignalConversionAtVeESPR_n_Engine > 0.0F)
                    {
                        /* Switch: '<S277>/Switch2' incorporates:
                         *  Constant: '<S277>/MAXFLOAT'
                         *  Switch: '<S265>/Switch1'
                         */
                        rtb_TmpSignalConversionAtVeESPR_n_Engine =
                            3.402823466E+38F;
                    }
                    else if (rtb_TmpSignalConversionAtVeESPR_n_Engine < 0.0F)
                    {
                        /* Switch: '<S277>/Switch3' incorporates:
                         *  Constant: '<S277>/MINFLOAT'
                         *  Switch: '<S265>/Switch1'
                         *  Switch: '<S277>/Switch2'
                         */
                        rtb_TmpSignalConversionAtVeESPR_n_Engine =
                            (-3.402823466E+38F);
                    }
                    else
                    {
                        /* Switch: '<S265>/Switch1' incorporates:
                         *  Constant: '<S277>/Constant Value4'
                         *  Switch: '<S277>/Switch2'
                         *  Switch: '<S277>/Switch3'
                         */
                        rtb_TmpSignalConversionAtVeESPR_n_Engine = 0.0F;
                    }

                    /* End of Switch: '<S277>/Switch1' */
                    /* End of Outputs for SubSystem: '<S265>/ProtectedDivision' */
                }

                /* End of Switch: '<S265>/Switch1' */

                /* Switch: '<S269>/Switch1' incorporates:
                 *  Constant: '<S273>/Calib'
                 *  Product: '<S269>/Multiplication'
                 *  Sum: '<S269>/Subtraction'
                 *  Sum: '<S269>/Summation'
                 *  Switch: '<S269>/Switch2'
                 *  UnitDelay: '<S269>/Unit Delay'
                 */
                VeTMDC_n_NoAvgAbs = ((rtb_TmpSignalConversionAtVeESPR_n_Engine -
                                      VeTMDC_n_NoAvgAbs) *
                                     KeTMDR_k_FiltCoeffNoAvrgAbs) +
                    VeTMDC_n_NoAvgAbs;
                (void)Rte_Read_VeWTAR_r_PRNDL_Coeff_Value(&tmpRead_9);

                /* Outputs for Function Call SubSystem: '<S4>/TMDI_InputOvrrd' */
                /* Switch: '<S330>/Switch7' incorporates:
                 *  Constant: '<S330>/ConstantValue1'
                 *  Constant: '<S343>/Calib'
                 *  Constant: '<S344>/Calib'
                 *  Inport: '<Root>/VeWTAR_r_PRNDL_Coeff'
                 *  Selector: '<S330>/Selector1'
                 */
                if (KaTMDR_b_PLTROvrdEnbl[(1)])
                {
                    tmpRead_6 = KeTMDR_b_EstSlopeAngleFAOvrdVal;
                }

                /* End of Switch: '<S330>/Switch7' */
                /* End of Outputs for SubSystem: '<S4>/TMDI_InputOvrrd' */

                /* Switch: '<S265>/Switch' incorporates:
                 *  Constant: '<S265>/ConstantValue1'
                 *  Constant: '<S330>/ConstantValue'
                 *  Constant: '<S343>/Calib'
                 *  Selector: '<S330>/Selector'
                 *  Switch: '<S270>/Switch2'
                 *  Switch: '<S330>/Switch1'
                 */
                if (tmpRead_6)
                {
                    rtb_UnitDelay_nw = 45.0F;
                }
                else
                {
                    /* Outputs for Function Call SubSystem: '<S4>/TMDI_InputOvrrd' */
                    if (KaTMDR_b_PLTROvrdEnbl[(0)])
                    {
                        /* Switch: '<S330>/Switch1' incorporates:
                         *  Constant: '<S345>/Calib'
                         */
                        rtb_UnitDelay_nw = KeTMDR_phi_EstSlopeAngleOvrdVal;
                    }

                    /* End of Outputs for SubSystem: '<S4>/TMDI_InputOvrrd' */
                }

                /* End of Switch: '<S265>/Switch' */

                /* Switch: '<S270>/Switch1' incorporates:
                 *  Constant: '<S274>/Calib'
                 *  Product: '<S265>/Product1'
                 *  Product: '<S270>/Multiplication'
                 *  Sum: '<S270>/Subtraction'
                 *  Sum: '<S270>/Summation'
                 *  Switch: '<S270>/Switch2'
                 *  UnitDelay: '<S270>/Unit Delay'
                 */
                VeTMDC_phi_SlopeAngle = (((rtb_UnitDelay_nw * tmpRead_9) -
                    VeTMDC_phi_SlopeAngle) * KeTMDR_k_FiltCoeffSlopeAngle) +
                    VeTMDC_phi_SlopeAngle;
            }
        }

        /* End of Switch: '<S269>/Switch1' */
        /* End of Outputs for SubSystem: '<S265>/DigitalLowpassResetEnabled' */
        /* End of Outputs for SubSystem: '<S265>/DigitalLowpassResetEnabled1' */

        /* Outputs for IfAction SubSystem: '<S266>/TrqFloor_at_Auto_or_Sport' incorporates:
         *  ActionPort: '<S285>/ActionPort'
         */
        /* If: '<S266>/If' incorporates:
         *  Constant: '<S235>/Constant'
         *  Constant: '<S239>/Constant'
         *  DataTypeConversion: '<S125>/DataTypeConversion'
         *  Merge: '<S25>/Merge'
         *  RelationalOperator: '<S143>/Comparison4'
         *  RelationalOperator: '<S144>/Comparison4'
         *  RelationalOperator: '<S266>/Comparison1'
         *  RelationalOperator: '<S266>/Comparison2'
         *  RelationalOperator: '<S266>/Comparison3'
         *  RelationalOperator: '<S266>/Comparison4'
         *  RelationalOperator: '<S266>/Comparison5'
         *  RelationalOperator: '<S285>/Comparison1'
         *  UnitDelay: '<S25>/UnitDelay1'
         */
        rtb_Switch2_fi = TMDR_ac_DW.UnitDelay1_DSTATE_i;

        /* End of Outputs for SubSystem: '<S266>/TrqFloor_at_Auto_or_Sport' */
        if (rtb_Switch2_fi == CeTMDR_e_Rock)
        {
            /* Outputs for IfAction SubSystem: '<S266>/TrqFloor_at_Rock' incorporates:
             *  ActionPort: '<S288>/ActionPort'
             */
            /* Merge: '<S266>/Merge1' incorporates:
             *  Lookup_n-D: '<S304>/Vector'
             *  Switch: '<S269>/Switch1'
             *  Switch: '<S270>/Switch1'
             */
            VeTMDC_M_TrqFloorRaw = look2_iflf_binlca_16a(VeTMDC_n_NoAvgAbs,
                VeTMDC_phi_SlopeAngle, ((const float32 *)
                &(KxTMDR_M_TrqFloorVehSpdGradeRock[0])), ((const float32 *)
                &(KyTMDR_M_TrqFloorVehSpdGradeRock[0])), ((const float32 *)
                &(KtTMDR_M_TrqFloorVehSpdGradeRock[0])), (const uint32*)
                TMDR_ac_ConstP.pooled6, 14U);

            /* Merge: '<S266>/Merge2' incorporates:
             *  Constant: '<S303>/Constant'
             *  SignalConversion generated from: '<S288>/VeTMDC_StActvTrqFloor'
             */
            VeTMDC_e_StActvTrqFloor = CeTMDR_e_RockActv;

            /* End of Outputs for SubSystem: '<S266>/TrqFloor_at_Rock' */
        }
        else if (rtb_Switch2_fi == CeTMDR_e_Snow)
        {
            /* Outputs for IfAction SubSystem: '<S266>/TrqFloor_at_Snow' incorporates:
             *  ActionPort: '<S290>/ActionPort'
             */
            /* Merge: '<S266>/Merge1' incorporates:
             *  Lookup_n-D: '<S310>/Vector'
             *  Switch: '<S269>/Switch1'
             *  Switch: '<S270>/Switch1'
             */
            VeTMDC_M_TrqFloorRaw = look2_iflf_binlca_16a(VeTMDC_n_NoAvgAbs,
                VeTMDC_phi_SlopeAngle, ((const float32 *)
                &(KxTMDR_M_TrqFloorVehSpdGradeSnow[0])), ((const float32 *)
                &(KyTMDR_M_TrqFloorVehSpdGradeSnow[0])), ((const float32 *)
                &(KtTMDR_M_TrqFloorVehSpdGradeSnow[0])), (const uint32*)
                TMDR_ac_ConstP.pooled6, 14U);

            /* Merge: '<S266>/Merge2' incorporates:
             *  Constant: '<S309>/Constant'
             *  SignalConversion generated from: '<S290>/VeTMDC_StActvTrqFloor'
             */
            VeTMDC_e_StActvTrqFloor = CeTMDR_e_SnowActv;

            /* End of Outputs for SubSystem: '<S266>/TrqFloor_at_Snow' */
        }
        else if (rtb_Switch2_fi == CeTMDR_e_MudSand)
        {
            /* Outputs for IfAction SubSystem: '<S266>/TrqFloor_at_Mud_Sand' incorporates:
             *  ActionPort: '<S287>/ActionPort'
             */
            /* Merge: '<S266>/Merge1' incorporates:
             *  Lookup_n-D: '<S301>/Vector'
             *  Switch: '<S269>/Switch1'
             *  Switch: '<S270>/Switch1'
             */
            VeTMDC_M_TrqFloorRaw = look2_iflf_binlca_16a(VeTMDC_n_NoAvgAbs,
                VeTMDC_phi_SlopeAngle, ((const float32 *)
                &(KxTMDR_M_TrqFloorVehSpdGradeMudSand[0])), ((const float32 *)
                &(KyTMDR_M_TrqFloorVehSpdGradeMudSand[0])), ((const float32 *)
                &(KtTMDR_M_TrqFloorVehSpdGradeMudSand[0])), (const uint32*)
                TMDR_ac_ConstP.pooled6, 14U);

            /* Merge: '<S266>/Merge2' incorporates:
             *  Constant: '<S300>/Constant'
             *  SignalConversion generated from: '<S287>/VeTMDC_StActvTrqFloor'
             */
            VeTMDC_e_StActvTrqFloor = CeTMDR_e_MudSandActv;

            /* End of Outputs for SubSystem: '<S266>/TrqFloor_at_Mud_Sand' */
        }
        else if (rtb_Switch2_fi == CeTMDR_e_Mud)
        {
            /* Outputs for IfAction SubSystem: '<S266>/TrqFloor_at_Mud' incorporates:
             *  ActionPort: '<S286>/ActionPort'
             */
            /* Merge: '<S266>/Merge1' incorporates:
             *  Lookup_n-D: '<S298>/Vector'
             *  Switch: '<S269>/Switch1'
             *  Switch: '<S270>/Switch1'
             */
            VeTMDC_M_TrqFloorRaw = look2_iflf_binlca_16a(VeTMDC_n_NoAvgAbs,
                VeTMDC_phi_SlopeAngle, ((const float32 *)
                &(KxTMDR_M_TrqFloorVehSpdGradeMud[0])), ((const float32 *)
                &(KyTMDR_M_TrqFloorVehSpdGradeMud[0])), ((const float32 *)
                &(KtTMDR_M_TrqFloorVehSpdGradeMud[0])), (const uint32*)
                TMDR_ac_ConstP.pooled6, 14U);

            /* Merge: '<S266>/Merge2' incorporates:
             *  Constant: '<S297>/Constant'
             *  SignalConversion generated from: '<S286>/VeTMDC_StActvTrqFloor'
             */
            VeTMDC_e_StActvTrqFloor = CeTMDR_e_MudActv;

            /* End of Outputs for SubSystem: '<S266>/TrqFloor_at_Mud' */
        }
        else if (rtb_Switch2_fi == CeTMDR_e_Sand)
        {
            /* Outputs for IfAction SubSystem: '<S266>/TrqFloor_at_Sand' incorporates:
             *  ActionPort: '<S289>/ActionPort'
             */
            /* Merge: '<S266>/Merge1' incorporates:
             *  Lookup_n-D: '<S307>/Vector'
             *  Switch: '<S269>/Switch1'
             *  Switch: '<S270>/Switch1'
             */
            VeTMDC_M_TrqFloorRaw = look2_iflf_binlca_16a(VeTMDC_n_NoAvgAbs,
                VeTMDC_phi_SlopeAngle, ((const float32 *)
                &(KxTMDR_M_TrqFloorVehSpdGradeSand[0])), ((const float32 *)
                &(KyTMDR_M_TrqFloorVehSpdGradeSand[0])), ((const float32 *)
                &(KtTMDR_M_TrqFloorVehSpdGradeSand[0])), (const uint32*)
                TMDR_ac_ConstP.pooled6, 14U);

            /* Merge: '<S266>/Merge2' incorporates:
             *  Constant: '<S306>/Constant'
             *  SignalConversion generated from: '<S289>/VeTMDC_StActvTrqFloor'
             */
            VeTMDC_e_StActvTrqFloor = CeTMDR_e_SandActv;

            /* End of Outputs for SubSystem: '<S266>/TrqFloor_at_Sand' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S266>/TrqFloor_at_Auto_or_Sport' incorporates:
             *  ActionPort: '<S285>/ActionPort'
             */
            /* Merge: '<S266>/Merge1' incorporates:
             *  Lookup_n-D: '<S295>/Vector'
             *  Switch: '<S269>/Switch1'
             *  Switch: '<S270>/Switch1'
             */
            VeTMDC_M_TrqFloorRaw = look2_iflf_binlca_16a(VeTMDC_n_NoAvgAbs,
                VeTMDC_phi_SlopeAngle, ((const float32 *)
                &(KxTMDR_M_TrqFloorVehSpdGrade[0])), ((const float32 *)
                &(KyTMDR_M_TrqFloorVehSpdGrade[0])), ((const float32 *)
                &(KtTMDR_M_TrqFloorVehSpdGrade[0])), (const uint32*)
                TMDR_ac_ConstP.pooled6, 14U);

            /* Switch: '<S285>/Switch' */
            if (rtb_Switch2_fi == CeTMDR_e_Sport)
            {
                /* Merge: '<S266>/Merge2' incorporates:
                 *  Constant: '<S293>/Constant'
                 */
                VeTMDC_e_StActvTrqFloor = CeTMDR_e_SportActv;
            }
            else
            {
                /* Merge: '<S266>/Merge2' incorporates:
                 *  Constant: '<S292>/Constant'
                 */
                VeTMDC_e_StActvTrqFloor = CeTMDR_e_AutoActv;
            }

            /* End of Switch: '<S285>/Switch' */
            /* End of Outputs for SubSystem: '<S266>/TrqFloor_at_Auto_or_Sport' */
        }

        /* End of If: '<S266>/If' */

        /* Outputs for Atomic SubSystem: '<S267>/Hysteresis' */
        /* Switch: '<S311>/Switch1' incorporates:
         *  Constant: '<S312>/Calib'
         *  Constant: '<S313>/Calib'
         *  DataTypeConversion: '<S267>/DataTypeConversion1'
         *  DataTypeConversion: '<S267>/DataTypeConversion2'
         *  RelationalOperator: '<S311>/Greater  Than'
         *  RelationalOperator: '<S311>/Greater  Than1'
         *  Switch: '<S311>/Switch2'
         */
        if (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd > ((float32)
                KeTMDR_v_VehSpdChrgLmt_RSP))
        {
            /* Switch: '<S311>/Switch1' incorporates:
             *  Constant: '<S311>/Constant Value'
             */
            VeTMDC_b_UseChrgLmtMtrA = true;
        }
        else
        {
            if (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd < ((float32)
                    KeTMDR_v_VehSpdChrgLmt_LSP))
            {
                /* Switch: '<S311>/Switch2' incorporates:
                 *  Constant: '<S311>/Constant Value1'
                 *  Switch: '<S311>/Switch1'
                 */
                VeTMDC_b_UseChrgLmtMtrA = false;
            }
        }

        /* End of Switch: '<S311>/Switch1' */
        /* End of Outputs for SubSystem: '<S267>/Hysteresis' */
        /* End of Outputs for SubSystem: '<S26>/TMDC_TorqFloorArb' */
        (void)Rte_Read_VeHSCR_r_DonutSpaceCoefCb_Value(&tmpRead_n);
        (void)Rte_Read_VeABCR_P_HV_AccPwr_Value(&tmpRead_l);
        (void)Rte_Read_VeINVR_T_MtrA_Temp_Value(&tmpRead_k);
        (void)Rte_Read_VeBACR_P_BattPwrShift_Tact_Value(&tmpRead_j);

        /* Outputs for IfAction SubSystem: '<S26>/TMDC_TorqFloorArb' incorporates:
         *  ActionPort: '<S262>/ActionPort'
         */
        /* Sum: '<S267>/Sum2' incorporates:
         *  Constant: '<S267>/ConstantValue3'
         *  Inport: '<Root>/VeABCR_P_HV_AccPwr'
         *  Inport: '<Root>/VeBACR_P_BattPwrShift_Tact'
         *  Inport: '<Root>/VeHSCR_r_DonutSpaceCoefCb'
         *  Inport: '<Root>/VeINVR_T_MtrA_Temp'
         *  Lookup_n-D: '<S315>/Vector'
         *  MinMax: '<S267>/MinMax3'
         */
        VeTMDC_P_Pb = (((0.0F - tmpRead_j) - fminf(0.0F, look1_iflf_binlca_16a
                         (tmpRead_k, ((const float32 *)
                           &(KxTMDR_P_ChrgPwrMtrA_Tmp[0])), ((const float32 *)
                           &(KtTMDR_P_ChrgPwrMtrA_Tmp[0])), 6U))) - tmpRead_l) -
            tmpRead_n;

        /* UnitDelay: '<S318>/Unit Delay' incorporates:
         *  Constant: '<S267>/ConstantValue2'
         *  MinMax: '<S267>/MinMax1'
         */
        rtb_UnitDelay_nw = fmaxf(VeTMDC_P_Pb, 0.0F);

        /* Switch: '<S317>/Switch' incorporates:
         *  DataTypeConversion: '<S317>/Data Type Conversion'
         */
        if (rtb_UnitDelay_nw >= 0.0F)
        {
            /* UnitDelay: '<S318>/Unit Delay' incorporates:
             *  Sqrt: '<S317>/Sqrt'
             */
            rtb_UnitDelay_nw = sqrtf(rtb_UnitDelay_nw);
        }
        else
        {
            /* UnitDelay: '<S318>/Unit Delay' incorporates:
             *  Constant: '<S317>/Zero'
             */
            rtb_UnitDelay_nw = 0.0F;
        }

        /* End of Switch: '<S317>/Switch' */
        /* End of Outputs for SubSystem: '<S26>/TMDC_TorqFloorArb' */
        (void)Rte_Read_VeHSCR_r_DonutSpaceCoefB2_Value(&tmpRead_m);

        /* Outputs for IfAction SubSystem: '<S26>/TMDC_TorqFloorArb' incorporates:
         *  ActionPort: '<S262>/ActionPort'
         */
        /* Sum: '<S267>/Sum1' incorporates:
         *  Inport: '<Root>/VeHSCR_r_DonutSpaceCoefB2'
         */
        rtb_UnitDelay_nw -= tmpRead_m;

        /* Outputs for Atomic SubSystem: '<S267>/ProtectedDivision' */
        /* Switch: '<S316>/Switch1' incorporates:
         *  Constant: '<S316>/Constant Value'
         *  Constant: '<S316>/Constant Value1'
         *  Constant: '<S316>/Constant Value2'
         *  Constant: '<S316>/Constant Value3'
         *  Logic: '<S316>/AND'
         *  RelationalOperator: '<S316>/Greater Than or Equal '
         *  RelationalOperator: '<S316>/Greater Than or Equal 1'
         *  RelationalOperator: '<S316>/Not Equal'
         *  RelationalOperator: '<S316>/Not Equal1'
         *  Switch: '<S316>/Switch2'
         *  Switch: '<S316>/Switch3'
         */
        if ((rtb_UnitDelay_nw != 0.0F) &&
                (rtb_TmpSignalConversionAtVeHSCR_r_DonutS != 0.0F))
        {
            /* Switch: '<S316>/Switch1' incorporates:
             *  Product: '<S316>/Division'
             */
            rtb_TmpSignalConversionAtVeHSCR_r_DonutS = rtb_UnitDelay_nw /
                rtb_TmpSignalConversionAtVeHSCR_r_DonutS;
        }
        else if (rtb_UnitDelay_nw > 0.0F)
        {
            /* Switch: '<S316>/Switch2' incorporates:
             *  Constant: '<S316>/MAXFLOAT'
             *  Switch: '<S316>/Switch1'
             */
            rtb_TmpSignalConversionAtVeHSCR_r_DonutS = 3.402823466E+38F;
        }
        else if (rtb_UnitDelay_nw < 0.0F)
        {
            /* Switch: '<S316>/Switch3' incorporates:
             *  Constant: '<S316>/MINFLOAT'
             *  Switch: '<S316>/Switch1'
             *  Switch: '<S316>/Switch2'
             */
            rtb_TmpSignalConversionAtVeHSCR_r_DonutS = (-3.402823466E+38F);
        }
        else
        {
            /* Switch: '<S316>/Switch1' incorporates:
             *  Constant: '<S316>/Constant Value4'
             *  Switch: '<S316>/Switch2'
             *  Switch: '<S316>/Switch3'
             */
            rtb_TmpSignalConversionAtVeHSCR_r_DonutS = 0.0F;
        }

        /* End of Switch: '<S316>/Switch1' */
        /* End of Outputs for SubSystem: '<S267>/ProtectedDivision' */

        /* MinMax: '<S267>/MinMax4' incorporates:
         *  Constant: '<S267>/ConstantValue1'
         */
        VeTMDC_M_TbmtTaChrg = fmaxf(rtb_TmpSignalConversionAtVeHSCR_r_DonutS,
            0.0F);

        /* Product: '<S267>/Product2' incorporates:
         *  Constant: '<S314>/Calib'
         */
        VeTMDC_M_TrqFloorMtrATemp = VeTMDC_M_TbmtTaChrg * ((float32)
            Rte_Prm_KeTSXR_r_FDRr_KeTSXR_r_FDRr());

        /* Switch: '<S267>/Switch1' */
        if (VeTMDC_b_UseChrgLmtMtrA)
        {
            /* Switch: '<S267>/Switch1' incorporates:
             *  MinMax: '<S267>/MinMax2'
             */
            VeTMDC_M_TrqFloorChrgLmt = fminf(VeTMDC_M_TrqFloorMtrATemp,
                VeTMDC_M_TrqFloorRaw);
        }
        else
        {
            /* Switch: '<S267>/Switch1' */
            VeTMDC_M_TrqFloorChrgLmt = VeTMDC_M_TrqFloorRaw;
        }

        /* End of Switch: '<S267>/Switch1' */

        /* Gain: '<S268>/Gain1' incorporates:
         *  Constant: '<S322>/Calib'
         */
        rtb_TmpSignalConversionAtVeHSCR_r_DonutS = (-1.0F) *
            KeTMDR_dM_TrqFloorLimGrad;

        /* Outputs for Atomic SubSystem: '<S268>/GradientLimiter' */
        /* Sum: '<S318>/Sum2' incorporates:
         *  UnitDelay: '<S318>/Unit Delay'
         */
        rtb_UnitDelay_nw = VeTMDC_M_TrqFloorChrgLmt -
            VeTMDC_M_TrqFloorAftLimGrad;

        /* Outputs for Atomic SubSystem: '<S318>/Limiter' */
        /* Switch: '<S325>/Switch1' incorporates:
         *  Constant: '<S322>/Calib'
         *  RelationalOperator: '<S325>/Relational Operator'
         */
        if (KeTMDR_dM_TrqFloorLimGrad < rtb_UnitDelay_nw)
        {
            /* Switch: '<S325>/Switch1' */
            rtb_UnitDelay_nw = KeTMDR_dM_TrqFloorLimGrad;
        }

        /* End of Switch: '<S325>/Switch1' */

        /* Switch: '<S325>/Switch' incorporates:
         *  RelationalOperator: '<S325>/Relational Operator1'
         */
        if (rtb_UnitDelay_nw > rtb_TmpSignalConversionAtVeHSCR_r_DonutS)
        {
            rtb_TmpSignalConversionAtVeHSCR_r_DonutS = rtb_UnitDelay_nw;
        }

        /* End of Switch: '<S325>/Switch' */
        /* End of Outputs for SubSystem: '<S318>/Limiter' */

        /* Sum: '<S318>/Sum3' incorporates:
         *  UnitDelay: '<S318>/Unit Delay'
         */
        VeTMDC_M_TrqFloorAftLimGrad = rtb_TmpSignalConversionAtVeHSCR_r_DonutS +
            VeTMDC_M_TrqFloorAftLimGrad;

        /* End of Outputs for SubSystem: '<S268>/GradientLimiter' */

        /* Outputs for Atomic SubSystem: '<S268>/Hysteresis' */
        /* Switch: '<S319>/Switch1' incorporates:
         *  Constant: '<S319>/Constant Value'
         *  Constant: '<S320>/Calib'
         *  Constant: '<S321>/Calib'
         *  RelationalOperator: '<S319>/Greater  Than'
         *  RelationalOperator: '<S319>/Greater  Than1'
         *  Switch: '<S319>/Switch2'
         *  UnitDelay: '<S319>/Unit Delay'
         */
        if (VeTMDC_M_TrqFloorAftLimGrad > KeTMDR_M_TrqFloorActvThrsh)
        {
            TMDR_ac_DW.UnitDelay_DSTATE_h = true;
        }
        else
        {
            if (VeTMDC_M_TrqFloorAftLimGrad < KeTMDR_M_TrqFloorDeactvThrsh)
            {
                /* Switch: '<S319>/Switch2' incorporates:
                 *  Constant: '<S319>/Constant Value1'
                 *  UnitDelay: '<S319>/Unit Delay'
                 */
                TMDR_ac_DW.UnitDelay_DSTATE_h = false;
            }
        }

        /* End of Switch: '<S319>/Switch1' */
        /* End of Outputs for SubSystem: '<S268>/Hysteresis' */

        /* Merge: '<S26>/Merge1' incorporates:
         *  Gain: '<S323>/Gain'
         */
        TMDR_ac_B.Merge1 = 1.0F * VeTMDC_M_TrqFloorAftLimGrad;

        /* Merge: '<S26>/Merge' incorporates:
         *  Gain: '<S324>/Gain'
         *  UnitDelay: '<S319>/Unit Delay'
         */
        TMDR_ac_B.Switch = ((true) && (TMDR_ac_DW.UnitDelay_DSTATE_h));

        /* End of Outputs for SubSystem: '<S26>/TMDC_TorqFloorArb' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S26>/TRNC_TorqFloorDeactive' incorporates:
         *  ActionPort: '<S263>/ActionPort'
         */
        /* Merge: '<S26>/Merge1' incorporates:
         *  Constant: '<S263>/ConstantValue2'
         *  SignalConversion generated from: '<S263>/TorqFloor'
         */
        TMDR_ac_B.Merge1 = 100000.0F;

        /* Merge: '<S26>/Merge' incorporates:
         *  Constant: '<S263>/FALSEConstant'
         *  SignalConversion generated from: '<S263>/TorqFloorActv'
         */
        TMDR_ac_B.Switch = false;

        /* End of Outputs for SubSystem: '<S26>/TRNC_TorqFloorDeactive' */
    }

    /* End of If: '<S26>/If' */

    /* Switch: '<S26>/Switch' incorporates:
     *  Logic: '<S26>/Logical'
     */
    if (rtb_TmpSignalConversionAtVeSRAR_b_Inhibi &&
            rtb_TmpSignalConversionAtVeSRAR_b_Inhi_l)
    {
        /* Switch: '<S26>/Switch' incorporates:
         *  Constant: '<S26>/TRUEConstant'
         */
        TMDR_ac_B.Switch = true;
    }

    /* End of Switch: '<S26>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<S3>/TMDR_FUNC' */
#elif Rte_SysCon_Variant_TMDR_MSG_Selec

    /* Outputs for Atomic SubSystem: '<S3>/TMDR_MSG' */
    /* DataStoreWrite: '<S5>/DSW_StatusByte_LostCommTrans' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_TCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_TCM_Value
        (&TMDR_ac_DW.StatusByte_LostCommTrans);

    /* DataStoreWrite: '<S5>/DSW_StatusByte_InvData_TCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommTrans'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommTrans_Value
        (&TMDR_ac_DW.StatusByte_InvData_TCM);

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/TMDC_MSG_FrontRearAxleTorqueArbitration'
     */
    /* RelationalOperator: '<S355>/Comparison1' incorporates:
     *  Constant: '<S377>/Constant'
     */
    rtb_TmpSignalConversionAtVeTIMR_b_AWD_Lo =
        (rtb_TmpSignalConversionAtVeFWDR_e_Tcase_ == CeFWDR_e_TfrCas4Low);

    /* DataTypeConversion: '<S399>/DataTypeConversion2' incorporates:
     *  RelationalOperator: '<S399>/GreaterThan'
     *  RelationalOperator: '<S399>/GreaterThan5'
     */
#if Rte_SysCon_Variant_TMDR_BEV_REPBSelec || Rte_SysCon_Variant_TMDR_COREBEVSelec

    /* Outputs for Atomic SubSystem: '<S399>/CountDownResetEnabled' */
    /* DataTypeConversion: '<S399>/DataTypeConversion2' incorporates:
     *  SignalConversion generated from: '<S1>/VeTIMR_e_TrrnMdSt'
     */
    rtb_DataTypeConversion2_d = (sint16)rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd;

    /* Switch: '<S413>/Switch1' incorporates:
     *  Constant: '<S399>/Constant'
     *  Constant: '<S413>/Constant Value'
     *  Constant: '<S426>/Calib'
     *  Logic: '<S413>/AND'
     *  RelationalOperator: '<S413>/Greater  Than'
     *  SignalConversion generated from: '<S1>/VeTIMR_e_TrrnMdSt'
     *  Switch: '<S413>/Switch2'
     *  UnitDelay: '<S399>/UnitDelay1'
     *  UnitDelay: '<S413>/Unit Delay'
     */
    if (((sint32)rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd) != ((sint32)
            TMDR_ac_DW.UnitDelay1_DSTATE_d))
    {
        TMDR_ac_DW.UnitDelay_DSTATE_o = KeTMDR_t_TrrnMdResetTh;
    }
    else
    {
        if ((true) && (TMDR_ac_DW.UnitDelay_DSTATE_o > ((uint16)0U)))
        {
            /* UnitDelay: '<S413>/Unit Delay' incorporates:
             *  Constant: '<S413>/Constant Value1'
             *  Sum: '<S413>/Subtraction'
             *  Switch: '<S413>/Switch2'
             */
            TMDR_ac_DW.UnitDelay_DSTATE_o -= ((uint16)1U);
        }
    }

    /* End of Switch: '<S413>/Switch1' */

    /* RelationalOperator: '<S413>/Greater  Than1' incorporates:
     *  Constant: '<S413>/Constant Value2'
     *  UnitDelay: '<S413>/Unit Delay'
     */
    rtb_GreaterThan1_p = (TMDR_ac_DW.UnitDelay_DSTATE_o > ((uint16)0U));

    /* Logic: '<S399>/AND3' incorporates:
     *  Constant: '<S429>/Calib'
     */
    rtb_AND3 = (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd > ((float32)
                 KeTMDR_v_SpdRockMdTh));

    /* End of Outputs for SubSystem: '<S399>/CountDownResetEnabled' */
#endif

    /* End of DataTypeConversion: '<S399>/DataTypeConversion2' */

    /* Logic: '<S355>/Logical' incorporates:
     *  Constant: '<S360>/Constant'
     *  Constant: '<S385>/Calib'
     *  Logic: '<S355>/Logical2'
     *  RelationalOperator: '<S355>/Comparison5'
     *  SignalConversion generated from: '<S1>/VeTIMR_e_TrrnMdSt'
     */
    VeTMDD_b_TrrnMdNotAvailDiag = ((KeTMDR_b_EnaTrrnMdDiag) &&
        (rtb_TmpSignalConversionAtVeTIMR_b_TrrnMd ||
         (rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd == CeTMDR_e_NotDefine)));

    /* Switch: '<S355>/Switch2' */
    if (VeTMDD_b_TrrnMdNotAvailDiag)
    {
        /* Switch: '<S355>/Switch2' incorporates:
         *  Constant: '<S372>/Constant'
         */
        rtb_Switch2_fi = CeTMDR_e_Auto;
    }
    else
    {
        /* Switch: '<S355>/Switch2' incorporates:
         *  SignalConversion generated from: '<S1>/VeTIMR_e_TrrnMdSt'
         */
        rtb_Switch2_fi = rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd;
    }

    /* End of Switch: '<S355>/Switch2' */

    /* RelationalOperator: '<S399>/GreaterThan1' incorporates:
     *  DataTypeConversion: '<S416>/DataTypeConversion'
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC'
     *  Inport: '<Root>/VeTIMR_b_Selector_Sys_Fail_Sts'
     *  Logic: '<S399>/AND'
     *  Logic: '<S399>/AND1'
     *  Logic: '<S399>/AND2'
     *  Logic: '<S399>/AND4'
     *  Logic: '<S399>/AND5'
     *  Logic: '<S399>/AND6'
     *  Logic: '<S399>/AND7'
     *  Logic: '<S399>/AND8'
     *  Logic: '<S399>/NOT'
     *  Logic: '<S399>/NOT2'
     *  Logic: '<S399>/OR'
     *  RelationalOperator: '<S399>/GreaterThan18'
     *  RelationalOperator: '<S399>/GreaterThan19'
     *  RelationalOperator: '<S399>/GreaterThan2'
     *  RelationalOperator: '<S399>/GreaterThan3'
     *  RelationalOperator: '<S399>/GreaterThan6'
     *  RelationalOperator: '<S399>/GreaterThan7'
     *  RelationalOperator: '<S399>/GreaterThan8'
     *  RelationalOperator: '<S399>/GreaterThan9'
     *  Switch: '<S399>/Switch2'
     *  Switch: '<S399>/Switch4'
     *  UnitDelay: '<S399>/UnitDelay'
     *  UnitDelay: '<S399>/UnitDelay3'
     */
#if Rte_SysCon_Variant_TMDR_BEV_REPBSelec || Rte_SysCon_Variant_TMDR_COREBEVSelec

    /* Logic: '<S399>/AND3' incorporates:
     *  Constant: '<S417>/Constant'
     */
    rtb_AND3 = (rtb_AND3 && (rtb_Switch2_fi == CeTMDR_e_Rock));
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Value(&tmpRead_0);
    (void)Rte_Read_VeTIMR_b_Selector_Sys_Fail_Sts_Value(&rtb_OR3);

    /* Logic: '<S412>/OR3' incorporates:
     *  Constant: '<S425>/Calib'
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC'
     *  Inport: '<Root>/VeTIMR_b_Selector_Sys_Fail_Sts'
     */
    rtb_OR3 = (rtb_OR3 && (KeTMDR_b_SelectorFaultDsbl));

    /* Logic: '<S399>/AND1' incorporates:
     *  Constant: '<S430>/Calib'
     */
    rtb_TmpSignalConversionAtVeTIMR_b_TrrnMd = ((tmpRead_0 <= KeTMDR_Pct_SOC_Low)
        && rtb_OR3);

    /* Logic: '<S399>/AND2' incorporates:
     *  Constant: '<S418>/Constant'
     */
    rtb_TmpSignalConversionAtVeTIMR_b_AWD__g = (rtb_OR3 && (rtb_Switch2_fi !=
        CeTMDR_e_Auto));
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value(&tmpRead_1);

    /* Logic: '<S412>/OR3' incorporates:
     *  Constant: '<S421>/Constant'
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    rtb_OR3 = (rtb_Switch2_fi == CeTMDR_e_Valet);

    /* RelationalOperator: '<S412>/Comparison1' incorporates:
     *  Constant: '<S427>/Calib'
     */
    rtb_Comparison1_g = (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd > ((float32)
                          KeTMDR_v_SpdValetMdTh));

    /* Logic: '<S399>/OR' incorporates:
     *  Constant: '<S417>/Constant'
     *  Constant: '<S420>/Constant'
     *  Constant: '<S423>/Constant'
     *  Constant: '<S424>/Calib'
     *  SignalConversion generated from: '<S1>/VeTIMR_e_RaceModeSts'
     */
    VeTMDC_b_TrrnMdCnd = ((((((((rtb_AND3 ||
        rtb_TmpSignalConversionAtVeTIMR_b_TrrnMd) ||
        rtb_TmpSignalConversionAtVeTIMR_b_AWD__g) || ((tmpRead_1 >
        KeTMDR_Pct_GasPedalNotPresPos) && rtb_OR3)) || (rtb_OR3 &&
        rtb_Comparison1_g)) || (rtb_TmpSignalConversionAtVeTIMR_e_RaceMo ==
        CeTIMR_e_RaceMode_Active)) || rtb_TmpSignalConversionAtVeSRAR_b_Inhibi) ||
                           ((rtb_Switch2_fi == CeTMDR_e_Sport) &&
                            rtb_TmpSignalConversionAtVeTIMR_b_AWD_Lo)) ||
                          ((!rtb_TmpSignalConversionAtVeTIMR_b_AWD_Lo) &&
                           (rtb_Switch2_fi == CeTMDR_e_Rock)));
    if (!VeTMDC_b_TrrnMdCnd)
    {
        TMDR_ac_DW.UnitDelay_DSTATE_dp = (sint16)rtb_Switch2_fi;
    }

    if (!rtb_GreaterThan1_p)
    {
        TMDR_ac_DW.UnitDelay3_DSTATE_c = TMDR_ac_DW.UnitDelay_DSTATE_dp;
    }

    /* VariantMerge generated from: '<S355>/ProgramArbTrrnMd' incorporates:
     *  UnitDelay: '<S399>/UnitDelay'
     *  UnitDelay: '<S399>/UnitDelay3'
     */
    rtb_VariantMerge_For_Variant_Source_Prog = (TeTMDR_e_TrrnMd)
        TMDR_ac_DW.UnitDelay3_DSTATE_c;

#endif

    /* End of RelationalOperator: '<S399>/GreaterThan1' */

    /* SignalConversion generated from: '<S355>/ProgramArbTrrnMd' */
#if !Rte_SysCon_Variant_TMDR_BEV_REPBSelec

    /* VariantMerge generated from: '<S355>/ProgramArbTrrnMd' incorporates:
     *  Switch: '<S355>/Switch2'
     */
    rtb_VariantMerge_For_Variant_Source_Prog = rtb_Switch2_fi;

#endif

    /* End of SignalConversion generated from: '<S355>/ProgramArbTrrnMd' */

    /* RelationalOperator: '<S355>/Comparison10' incorporates:
     *  RelationalOperator: '<S355>/Comparison11'
     *  RelationalOperator: '<S355>/Comparison12'
     *  RelationalOperator: '<S355>/Comparison13'
     *  RelationalOperator: '<S355>/Comparison14'
     *  RelationalOperator: '<S355>/Comparison6'
     *  RelationalOperator: '<S355>/Comparison7'
     *  RelationalOperator: '<S355>/Comparison8'
     *  RelationalOperator: '<S355>/Comparison9'
     */
#if Rte_SysCon_Variant_TMDR_REPBSelec

    /* RelationalOperator: '<S355>/Comparison10' incorporates:
     *  Constant: '<S365>/Constant'
     *  VariantMerge generated from: '<S355>/ProgramArbTrrnMd'
     */
    rtb_Comparison10 = (CeTMDR_e_Rock ==
                        rtb_VariantMerge_For_Variant_Source_Prog);

    /* RelationalOperator: '<S355>/Comparison11' incorporates:
     *  Constant: '<S368>/Constant'
     *  VariantMerge generated from: '<S355>/ProgramArbTrrnMd'
     */
    rtb_Comparison11 = (CeTMDR_e_Sand ==
                        rtb_VariantMerge_For_Variant_Source_Prog);

    /* RelationalOperator: '<S355>/Comparison12' incorporates:
     *  Constant: '<S367>/Constant'
     *  VariantMerge generated from: '<S355>/ProgramArbTrrnMd'
     */
    rtb_Comparison12 = (CeTMDR_e_MudSand ==
                        rtb_VariantMerge_For_Variant_Source_Prog);

    /* RelationalOperator: '<S355>/Comparison13' incorporates:
     *  Constant: '<S366>/Constant'
     *  VariantMerge generated from: '<S355>/ProgramArbTrrnMd'
     */
    rtb_Comparison13 = (CeTMDR_e_Mud == rtb_VariantMerge_For_Variant_Source_Prog);

    /* RelationalOperator: '<S355>/Comparison14' incorporates:
     *  Constant: '<S369>/Constant'
     *  VariantMerge generated from: '<S355>/ProgramArbTrrnMd'
     */
    rtb_Comparison14 = (CeTMDR_e_Sport ==
                        rtb_VariantMerge_For_Variant_Source_Prog);

    /* RelationalOperator: '<S355>/Comparison6' incorporates:
     *  Constant: '<S379>/Constant'
     *  VariantMerge generated from: '<S355>/ProgramArbTrrnMd'
     */
    rtb_Comparison6 = (CeTMDR_e_Auto == rtb_VariantMerge_For_Variant_Source_Prog);

    /* RelationalOperator: '<S355>/Comparison7' incorporates:
     *  Constant: '<S362>/Constant'
     *  VariantMerge generated from: '<S355>/ProgramArbTrrnMd'
     */
    rtb_Comparison7 = (CeTMDR_e_Valet ==
                       rtb_VariantMerge_For_Variant_Source_Prog);

    /* RelationalOperator: '<S355>/Comparison8' incorporates:
     *  Constant: '<S364>/Constant'
     *  VariantMerge generated from: '<S355>/ProgramArbTrrnMd'
     */
    rtb_Comparison8 = (CeTMDR_e_Snow == rtb_VariantMerge_For_Variant_Source_Prog);

    /* RelationalOperator: '<S355>/Comparison9' incorporates:
     *  Constant: '<S363>/Constant'
     *  VariantMerge generated from: '<S355>/ProgramArbTrrnMd'
     */
    rtb_Comparison9 = (CeTMDR_e_Tow == rtb_VariantMerge_For_Variant_Source_Prog);

#endif

    /* End of RelationalOperator: '<S355>/Comparison10' */

    /* RelationalOperator: '<S355>/Comparison3' incorporates:
     *  Constant: '<S378>/Constant'
     *  SignalConversion generated from: '<S1>/VeDMDR_e_DrvMdArb'
     */
    rtb_TmpSignalConversionAtVeTIMR_b_TrrnMd =
        (rtb_TmpSignalConversionAtVeDMDR_e_DrvMdA == CeDMDR_e_EV);

    /* RelationalOperator: '<S355>/Comparison4' incorporates:
     *  Constant: '<S376>/Constant'
     */
    rtb_GreaterThan1_p = (rtb_TmpSignalConversionAtVeFWDR_e_Tcase_ ==
                          CeFWDR_e_TfrCas4HI);

    /* If: '<S412>/If1' incorporates:
     *  Constant: '<S436>/Constant'
     *  Constant: '<S437>/Constant'
     *  Constant: '<S438>/Constant'
     *  Constant: '<S439>/Constant'
     *  Constant: '<S441>/Constant'
     *  Constant: '<S442>/Constant'
     *  Constant: '<S443>/Constant'
     *  Constant: '<S444>/Constant'
     *  Constant: '<S445>/Constant'
     *  DataTypeConversion: '<S415>/DataTypeConversion'
     *  Inport: '<Root>/VeTIMR_e_MaxBoostStatus'
     *  Inport: '<Root>/VeTIMR_e_TimeAttackStatus'
     *  Logic: '<S412>/Logical3'
     *  Logic: '<S412>/OR2'
     *  Logic: '<S412>/OR3'
     *  RelationalOperator: '<S412>/Comparison1'
     *  RelationalOperator: '<S412>/Comparison10'
     *  RelationalOperator: '<S412>/Comparison11'
     *  RelationalOperator: '<S412>/Comparison12'
     *  RelationalOperator: '<S412>/Comparison14'
     *  RelationalOperator: '<S412>/Comparison16'
     *  RelationalOperator: '<S412>/Comparison17'
     *  RelationalOperator: '<S412>/Comparison18'
     *  RelationalOperator: '<S412>/Comparison3'
     *  RelationalOperator: '<S412>/Comparison4'
     *  RelationalOperator: '<S412>/Comparison5'
     *  RelationalOperator: '<S412>/Comparison6'
     *  RelationalOperator: '<S412>/Comparison7'
     *  RelationalOperator: '<S412>/Comparison8'
     *  RelationalOperator: '<S412>/Comparison9'
     *  SignalConversion generated from: '<S1>/VeTIMR_e_CustomDrvMdSts'
     */
#if Rte_SysCon_Variant_TMDR_BEV_REPBSelec || Rte_SysCon_Variant_TMDR_COREBEVSelec

    (void)Rte_Read_VeTIMR_e_MaxBoostStatus_Value(&tmpRead_q);

    /* RelationalOperator: '<S412>/Comparison1' incorporates:
     *  Constant: '<S440>/Constant'
     *  Inport: '<Root>/VeTIMR_e_MaxBoostStatus'
     */
    rtb_Comparison1_g = (tmpRead_q == CeTIMR_e_Boost_On);

    /* Logic: '<S412>/OR3' incorporates:
     *  Constant: '<S431>/Constant'
     *  Constant: '<S432>/Constant'
     *  Constant: '<S433>/Constant'
     *  Constant: '<S434>/Constant'
     */
    rtb_OR3 = ((((rtb_TmpSignalConversionAtVeTIMR_e_LnchCt == CeTIMR_e_CONFIRMED)
                 || (rtb_TmpSignalConversionAtVeTIMR_e_LnchCt ==
                     CeTIMR_e_BRAKE_PRESSED)) ||
                (rtb_TmpSignalConversionAtVeTIMR_e_LnchCt ==
                 CeTIMR_e_FULL_THROTTLE)) ||
               (rtb_TmpSignalConversionAtVeTIMR_e_LnchCt == CeTIMR_e_IN_PROGRESS));
    (void)Rte_Read_VeTIMR_e_TimeAttackStatus_Value(&tmpRead_r);

    /* UnitDelay: '<S388>/Unit Delay' incorporates:
     *  Inport: '<Root>/VeTIMR_e_TimeAttackStatus'
     */
    rtb_UnitDelay_de = (tmpRead_r == CeTIMR_e_Boost_On);

    /* DataTypeConversion: '<S415>/DataTypeConversion' incorporates:
     *  UnitDelay: '<S399>/UnitDelay3'
     */
    rtb_DataTypeConversion_gs = (TeTMDR_e_TrrnMd)TMDR_ac_DW.UnitDelay3_DSTATE_c;
    if (rtb_TmpSignalConversionAtVeTIMR_e_RaceOp == CeTIMR_e_LaunchControl)
    {
        /* Outputs for IfAction SubSystem: '<S412>/Pass_Launch' incorporates:
         *  ActionPort: '<S449>/ActionPort'
         */
        /* Merge: '<S412>/Merge1' incorporates:
         *  Constant: '<S457>/Constant'
         *  SignalConversion generated from: '<S449>/Out1'
         */
        TMDR_ac_B.Merge1_p = CeTMDR_e_Launch;

        /* End of Outputs for SubSystem: '<S412>/Pass_Launch' */
    }
    else if (rtb_TmpSignalConversionAtVeTIMR_e_RaceOp == CeTIMR_e_LineLock)
    {
        /* Outputs for IfAction SubSystem: '<S412>/Pass_LineLock' incorporates:
         *  ActionPort: '<S450>/ActionPort'
         */
        /* Merge: '<S412>/Merge1' incorporates:
         *  Constant: '<S458>/Constant'
         *  SignalConversion generated from: '<S450>/Out1'
         */
        TMDR_ac_B.Merge1_p = CeTMDR_e_LineLock;

        /* End of Outputs for SubSystem: '<S412>/Pass_LineLock' */
    }
    else if (rtb_TmpSignalConversionAtVeTIMR_e_RaceOp == CeTIMR_e_Drift)
    {
        /* Outputs for IfAction SubSystem: '<S412>/Pass_Drift' incorporates:
         *  ActionPort: '<S447>/ActionPort'
         */
        /* Merge: '<S412>/Merge1' incorporates:
         *  Constant: '<S456>/Constant'
         *  SignalConversion generated from: '<S447>/Out1'
         */
        TMDR_ac_B.Merge1_p = CeTMDR_e_Drift;

        /* End of Outputs for SubSystem: '<S412>/Pass_Drift' */
    }
    else if (rtb_TmpSignalConversionAtVeTIMR_e_RaceOp == CeTIMR_e_Donut)
    {
        /* Outputs for IfAction SubSystem: '<S412>/Pass_Donut' incorporates:
         *  ActionPort: '<S446>/ActionPort'
         */
        /* Merge: '<S412>/Merge1' incorporates:
         *  Constant: '<S455>/Constant'
         *  SignalConversion generated from: '<S446>/Out1'
         */
        TMDR_ac_B.Merge1_p = CeTMDR_e_Donut;

        /* End of Outputs for SubSystem: '<S412>/Pass_Donut' */
    }
    else if (rtb_Comparison1_g)
    {
        /* Outputs for IfAction SubSystem: '<S412>/Pass_MaxBoostStatus' incorporates:
         *  ActionPort: '<S452>/ActionPort'
         */
        /* Merge: '<S412>/Merge1' incorporates:
         *  Constant: '<S460>/Constant'
         *  SignalConversion generated from: '<S452>/Out1'
         */
        TMDR_ac_B.Merge1_p = CeTMDR_e_MaxBoost;

        /* End of Outputs for SubSystem: '<S412>/Pass_MaxBoostStatus' */
    }
    else if (rtb_OR3)
    {
        /* Outputs for IfAction SubSystem: '<S412>/Pass_LnchCtrl_Sts' incorporates:
         *  ActionPort: '<S451>/ActionPort'
         */
        /* Merge: '<S412>/Merge1' incorporates:
         *  Constant: '<S459>/Constant'
         *  SignalConversion generated from: '<S451>/Out1'
         */
        TMDR_ac_B.Merge1_p = CeTMDR_e_Launch;

        /* End of Outputs for SubSystem: '<S412>/Pass_LnchCtrl_Sts' */
    }
    else if (rtb_UnitDelay_de)
    {
        /* Outputs for IfAction SubSystem: '<S412>/Pass_TimeAttack' incorporates:
         *  ActionPort: '<S453>/ActionPort'
         */
        /* Merge: '<S412>/Merge1' incorporates:
         *  Constant: '<S461>/Constant'
         *  SignalConversion generated from: '<S453>/Out1'
         */
        TMDR_ac_B.Merge1_p = CeTMDR_e_TimeAttack;

        /* End of Outputs for SubSystem: '<S412>/Pass_TimeAttack' */
    }
    else if (((((CeTMDR_e_Sport == rtb_TmpSignalConversionAtVeTIMR_e_Custom) ||
                (CeTMDR_e_Street == rtb_TmpSignalConversionAtVeTIMR_e_Custom)) ||
               (CeTMDR_e_Track == rtb_TmpSignalConversionAtVeTIMR_e_Custom)) ||
              (CeTMDR_e_ECO == rtb_TmpSignalConversionAtVeTIMR_e_Custom)) &&
             (CeTMDR_e_Custom == rtb_DataTypeConversion_gs))
    {
        /* Outputs for IfAction SubSystem: '<S412>/Pass_DrvMdReq' incorporates:
         *  ActionPort: '<S448>/ActionPort'
         */
        TMDR_ac_Pass_DrvMdReq(rtb_TmpSignalConversionAtVeTIMR_e_Custom,
                              &TMDR_ac_B.Merge1_p);

        /* End of Outputs for SubSystem: '<S412>/Pass_DrvMdReq' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S412>/Pass_TrrnMd' incorporates:
         *  ActionPort: '<S454>/ActionPort'
         */
        TMDR_ac_Pass_TrrnMd(rtb_DataTypeConversion_gs, &TMDR_ac_B.Merge1_p);

        /* End of Outputs for SubSystem: '<S412>/Pass_TrrnMd' */
    }

#endif

    /* End of If: '<S412>/If1' */

    /* SignalConversion generated from: '<S355>/ProgramArb1' incorporates:
     *  Constant: '<S371>/Constant'
     */
#if Rte_SysCon_Variant_TMDR_COREBEVSelec

    /* VariantMerge generated from: '<S355>/ProgramArb1' incorporates:
     *  Merge: '<S412>/Merge1'
     */
    TMDR_ac_B.VariantMerge_For_Variant_Source_Progra_n = TMDR_ac_B.Merge1_p;

#else

    TMDR_ac_B.Constant = CeTMDR_e_Auto;

    /* VariantMerge generated from: '<S355>/ProgramArb1' incorporates:
     *  Constant: '<S371>/Constant'
     *  SignalConversion generated from: '<S355>/ProgramArb1'
     */
    TMDR_ac_B.VariantMerge_For_Variant_Source_Progra_n = TMDR_ac_B.Constant;

#endif

    /* End of SignalConversion generated from: '<S355>/ProgramArb1' */

    /* If: '<S428>/If1' incorporates:
     *  Constant: '<S462>/Constant'
     *  Constant: '<S463>/Constant'
     *  Constant: '<S465>/Constant'
     *  Constant: '<S466>/Constant'
     *  Constant: '<S467>/Constant'
     *  Constant: '<S468>/Constant'
     *  Constant: '<S469>/Constant'
     *  Constant: '<S470>/Constant'
     *  Constant: '<S471>/Constant'
     *  Constant: '<S472>/Constant'
     *  Constant: '<S474>/Constant'
     *  Constant: '<S475>/Constant'
     *  DataTypeConversion: '<S414>/DataTypeConversion'
     *  Logic: '<S428>/Logical3'
     *  Logic: '<S428>/OR1'
     *  Logic: '<S428>/OR2'
     *  RelationalOperator: '<S428>/Comparison10'
     *  RelationalOperator: '<S428>/Comparison11'
     *  RelationalOperator: '<S428>/Comparison12'
     *  RelationalOperator: '<S428>/Comparison13'
     *  RelationalOperator: '<S428>/Comparison2'
     *  RelationalOperator: '<S428>/Comparison3'
     *  RelationalOperator: '<S428>/Comparison4'
     *  RelationalOperator: '<S428>/Comparison5'
     *  RelationalOperator: '<S428>/Comparison6'
     *  RelationalOperator: '<S428>/Comparison7'
     *  RelationalOperator: '<S428>/Comparison8'
     *  RelationalOperator: '<S428>/Comparison9'
     *  SignalConversion generated from: '<S1>/VeTIMR_e_CustomDrvMdSts'
     *  Switch: '<S428>/Switch'
     */
#if Rte_SysCon_Variant_TMDR_BEV_REPBSelec || Rte_SysCon_Variant_TMDR_COREBEVSelec

    /* DataTypeConversion: '<S414>/DataTypeConversion' incorporates:
     *  UnitDelay: '<S399>/UnitDelay3'
     */
    rtb_DataTypeConversion_nh = (TeTMDR_e_TrrnMd)TMDR_ac_DW.UnitDelay3_DSTATE_c;
    if (((((((CeTIMR_e_RaceMode_Active ==
              rtb_TmpSignalConversionAtVeTIMR_e_RaceMo) ||
             (rtb_TmpSignalConversionAtVeTIMR_e_RaceMo == CeTIMR_e_RaceMode_On))
            || (CeEBMR_e_eBoostEngaged ==
                rtb_TmpSignalConversionAtVeEBMR_e_eBoost)) ||
            (rtb_TmpSignalConversionAtVeEBMR_e_eBoost == CeEBMR_e_eBoostEnabled))
          || rtb_Comparison1_g) || rtb_OR3) || (rtb_DataTypeConversion_nh ==
            CeTMDR_e_Corsa))
    {
        /* Outputs for IfAction SubSystem: '<S428>/Pass_Drag' incorporates:
         *  ActionPort: '<S476>/ActionPort'
         */
        /* Switch: '<S428>/Switch' incorporates:
         *  Constant: '<S482>/Constant'
         *  SignalConversion generated from: '<S476>/Out1'
         */
        rtb_Switch_ax = CeTMDR_e_Drag;

        /* End of Outputs for SubSystem: '<S428>/Pass_Drag' */
    }
    else if (CeTMDR_e_Valet == rtb_DataTypeConversion_nh)
    {
        /* Outputs for IfAction SubSystem: '<S428>/Pass_ECO' incorporates:
         *  ActionPort: '<S478>/ActionPort'
         */
        /* Switch: '<S428>/Switch' incorporates:
         *  Constant: '<S483>/Constant'
         *  SignalConversion generated from: '<S478>/Out1'
         */
        rtb_Switch_ax = CeTMDR_e_ECO;

        /* End of Outputs for SubSystem: '<S428>/Pass_ECO' */
    }
    else if (CeTMDR_e_Auto == rtb_DataTypeConversion_nh)
    {
        /* Outputs for IfAction SubSystem: '<S428>/Pass_Street' incorporates:
         *  ActionPort: '<S479>/ActionPort'
         */
        /* Switch: '<S428>/Switch' incorporates:
         *  Constant: '<S484>/Constant'
         *  SignalConversion generated from: '<S479>/Out1'
         */
        rtb_Switch_ax = CeTMDR_e_Street;

        /* End of Outputs for SubSystem: '<S428>/Pass_Street' */
    }
    else if (((((CeTMDR_e_Sport == rtb_TmpSignalConversionAtVeTIMR_e_Custom) ||
                (CeTMDR_e_Street == rtb_TmpSignalConversionAtVeTIMR_e_Custom)) ||
               (CeTMDR_e_Track == rtb_TmpSignalConversionAtVeTIMR_e_Custom)) ||
              (CeTMDR_e_ECO == rtb_TmpSignalConversionAtVeTIMR_e_Custom)) &&
             (CeTMDR_e_Custom == rtb_DataTypeConversion_nh))
    {
        /* Outputs for IfAction SubSystem: '<S428>/Pass_DrvMdReq' incorporates:
         *  ActionPort: '<S477>/ActionPort'
         */
        TMDR_ac_Pass_DrvMdReq(rtb_TmpSignalConversionAtVeTIMR_e_Custom,
                              &rtb_Switch_ax);

        /* End of Outputs for SubSystem: '<S428>/Pass_DrvMdReq' */
    }
    else if (rtb_UnitDelay_de)
    {
        /* Outputs for IfAction SubSystem: '<S428>/Pass_Track' incorporates:
         *  ActionPort: '<S480>/ActionPort'
         */
        /* Switch: '<S428>/Switch' incorporates:
         *  Constant: '<S485>/Constant'
         *  SignalConversion generated from: '<S480>/Out1'
         */
        rtb_Switch_ax = CeTMDR_e_Track;

        /* End of Outputs for SubSystem: '<S428>/Pass_Track' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S428>/Pass_TrrnMd' incorporates:
         *  ActionPort: '<S481>/ActionPort'
         */
        TMDR_ac_Pass_TrrnMd(rtb_DataTypeConversion_nh, &rtb_Switch_ax);

        /* End of Outputs for SubSystem: '<S428>/Pass_TrrnMd' */
    }

    if (rtb_TmpSignalConversionAtVeSRAR_b_Inhibi)
    {
        /* Switch: '<S428>/Switch1' incorporates:
         *  Constant: '<S473>/Constant'
         *  RelationalOperator: '<S428>/Comparison1'
         */
        if (CeTMDR_e_ECO == rtb_DataTypeConversion_nh)
        {
            /* Switch: '<S428>/Switch' */
            rtb_Switch_ax = CeTMDR_e_ECO;
        }
        else
        {
            /* Switch: '<S428>/Switch' incorporates:
             *  Constant: '<S464>/Constant'
             */
            rtb_Switch_ax = CeTMDR_e_Street;
        }

        /* End of Switch: '<S428>/Switch1' */
    }

#endif

    /* End of If: '<S428>/If1' */

    /* SignalConversion generated from: '<S355>/ProgramArb' */
#if Rte_SysCon_Variant_TMDR_BEV_REPBSelec

    /* VariantMerge generated from: '<S355>/ProgramArb' incorporates:
     *  Switch: '<S428>/Switch'
     */
    TMDR_ac_B.VariantMerge_For_Variant_Source_Progra_o = rtb_Switch_ax;

#else

    /* VariantMerge generated from: '<S355>/ProgramArb' incorporates:
     *  Constant: '<S370>/Constant'
     *  SignalConversion generated from: '<S355>/ProgramArb'
     */
    TMDR_ac_B.VariantMerge_For_Variant_Source_Progra_o = CeTMDR_e_Auto;

#endif

    /* End of SignalConversion generated from: '<S355>/ProgramArb' */
    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* Inport: '<Root>/VeDMDR_i_DrvMdArbIdx' */
    (void)Rte_Read_VeDMDR_i_DrvMdArbIdx_Value(&tmpRead_2);

    /* Inport: '<Root>/VeFWDR_b_4HIPTActv' */
    (void)Rte_Read_VeFWDR_b_4HIPTActv_Value(&tmpRead);

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/TMDC_MSG_FrontRearAxleTorqueArbitration'
     */
    /* Outputs for Atomic SubSystem: '<S355>/EdgeRising' */
    /* Logic: '<S358>/AND' incorporates:
     *  Logic: '<S358>/OR1'
     *  UnitDelay: '<S358>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSRAR_b_Inhibi =
        (rtb_TmpSignalConversionAtVeTIMR_b_TrrnMd &&
         (!TMDR_ac_DW.UnitDelay_DSTATE_gu));

    /* Update for UnitDelay: '<S358>/Unit Delay' */
    TMDR_ac_DW.UnitDelay_DSTATE_gu = rtb_TmpSignalConversionAtVeTIMR_b_TrrnMd;

    /* End of Outputs for SubSystem: '<S355>/EdgeRising' */

    /* Outport: '<Root>/VeTMDR_e_TrrnMd' incorporates:
     *  DataTypeConversion: '<S359>/DataTypeConversion'
     *  VariantMerge generated from: '<S355>/ProgramArbTrrnMd'
     */
    (void)Rte_Write_VeTMDR_e_TrrnMd_Value
        (rtb_VariantMerge_For_Variant_Source_Prog);

    /* UnitDelay: '<S388>/Unit Delay' incorporates:
     *  Logic: '<S355>/Logical5'
     */
    rtb_UnitDelay_de = !rtb_TmpSignalConversionAtVeTIMR_b_TrrnMd;

    /* Logic: '<S355>/Logical4' incorporates:
     *  Constant: '<S401>/Constant1'
     *  Constant: '<S401>/Constant2'
     *  Constant: '<S402>/Constant1'
     *  Constant: '<S402>/Constant2'
     *  DataStoreRead: '<S401>/StatusByte_LostCommTrans'
     *  DataStoreRead: '<S402>/StatusByte_InvData_TCM'
     *  Logic: '<S355>/Logical3'
     *  Logic: '<S401>/LogicalOperator'
     *  Logic: '<S402>/LogicalOperator'
     *  RelationalOperator: '<S401>/RelationalOperator1'
     *  RelationalOperator: '<S401>/RelationalOperator2'
     *  RelationalOperator: '<S402>/RelationalOperator1'
     *  RelationalOperator: '<S402>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S401>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S401>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S402>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S402>/BitwiseOperator2'
     */
    rtb_OR3 = ((rtb_UnitDelay_de && rtb_TmpSignalConversionAtVeTIMR_b_AWD_Lo) &&
               ((((TMDR_ac_DW.StatusByte_LostCommTrans & ((uint8)1U)) <= ((uint8)
                   0U)) || ((TMDR_ac_DW.StatusByte_LostCommTrans & ((uint8)64U))
                            != ((uint8)0U))) &&
                (((TMDR_ac_DW.StatusByte_InvData_TCM & ((uint8)1U)) <= ((uint8)
                   0U)) || ((TMDR_ac_DW.StatusByte_InvData_TCM & ((uint8)64U))
                            != ((uint8)0U)))));

    /* Selector: '<S355>/Selector2' incorporates:
     *  Constant: '<S383>/Calib'
     *  DataTypeConversion: '<S355>/DataTypeConversion2'
     *  VariantMerge generated from: '<S355>/ProgramArbTrrnMd'
     */
    rtb_Switch1_a4 = KaTMDR_i_TrueTrrnMd
        [(rtb_VariantMerge_For_Variant_Source_Prog)];

    /* If: '<S355>/If1' incorporates:
     *  Logic: '<S355>/OR'
     *  Logic: '<S355>/OR1'
     */
#if Rte_SysCon_Variant_TMDR_REPBSelec

    if (rtb_Comparison6 || rtb_Comparison7)
    {
        /* Outputs for IfAction SubSystem: '<S355>/TargetSOC_Auto_Valet' incorporates:
         *  ActionPort: '<S389>/ActionPort'
         */
        /* VariantMerge generated from: '<S355>/TgtSOC_REPB_Arb' incorporates:
         *  Constant: '<S403>/Calib'
         *  SignalConversion generated from: '<S389>/Out1'
         */
        rtb_VariantMerge_For_Variant_Source_TgtS = KeTMDR_Pct_TgtSOC_AutoValet;

        /* End of Outputs for SubSystem: '<S355>/TargetSOC_Auto_Valet' */
    }
    else if (rtb_Comparison8)
    {
        /* Outputs for IfAction SubSystem: '<S355>/TargetSOC_Snow' incorporates:
         *  ActionPort: '<S393>/ActionPort'
         */
        /* VariantMerge generated from: '<S355>/TgtSOC_REPB_Arb' incorporates:
         *  Constant: '<S407>/Calib'
         *  SignalConversion generated from: '<S393>/Out1'
         */
        rtb_VariantMerge_For_Variant_Source_TgtS = KeTMDR_Pct_TgtSOC_Snow;

        /* End of Outputs for SubSystem: '<S355>/TargetSOC_Snow' */
    }
    else if (rtb_Comparison9)
    {
        /* Outputs for IfAction SubSystem: '<S355>/TargetSOC_Tow' incorporates:
         *  ActionPort: '<S395>/ActionPort'
         */
        /* VariantMerge generated from: '<S355>/TgtSOC_REPB_Arb' incorporates:
         *  Constant: '<S409>/Calib'
         *  SignalConversion generated from: '<S395>/Out1'
         */
        rtb_VariantMerge_For_Variant_Source_TgtS = KeTMDR_Pct_TgtSOC_Tow;

        /* End of Outputs for SubSystem: '<S355>/TargetSOC_Tow' */
    }
    else if (rtb_Comparison10)
    {
        /* Outputs for IfAction SubSystem: '<S355>/TargetSOC_ORLow' incorporates:
         *  ActionPort: '<S392>/ActionPort'
         */
        /* VariantMerge generated from: '<S355>/TgtSOC_REPB_Arb' incorporates:
         *  Constant: '<S406>/Calib'
         *  SignalConversion generated from: '<S392>/Out1'
         */
        rtb_VariantMerge_For_Variant_Source_TgtS = KeTMDR_Pct_TgtSOC_ORLow;

        /* End of Outputs for SubSystem: '<S355>/TargetSOC_ORLow' */
    }
    else if ((rtb_Comparison12 || rtb_Comparison13) || rtb_Comparison11)
    {
        /* Outputs for IfAction SubSystem: '<S355>/TargetSOC_ORHigh' incorporates:
         *  ActionPort: '<S391>/ActionPort'
         */
        /* VariantMerge generated from: '<S355>/TgtSOC_REPB_Arb' incorporates:
         *  Constant: '<S405>/Calib'
         *  SignalConversion generated from: '<S391>/Out1'
         */
        rtb_VariantMerge_For_Variant_Source_TgtS = KeTMDR_Pct_TgtSOC_ORHigh;

        /* End of Outputs for SubSystem: '<S355>/TargetSOC_ORHigh' */
    }
    else if (rtb_Comparison14)
    {
        /* Outputs for IfAction SubSystem: '<S355>/TargetSOC_Sport' incorporates:
         *  ActionPort: '<S394>/ActionPort'
         */
        /* VariantMerge generated from: '<S355>/TgtSOC_REPB_Arb' incorporates:
         *  Constant: '<S408>/Calib'
         *  SignalConversion generated from: '<S394>/Out1'
         */
        rtb_VariantMerge_For_Variant_Source_TgtS = KeTMDR_Pct_TgtSOC_Sport;

        /* End of Outputs for SubSystem: '<S355>/TargetSOC_Sport' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S355>/TargetSOC_NonEsp' incorporates:
         *  ActionPort: '<S390>/ActionPort'
         */
        /* VariantMerge generated from: '<S355>/TgtSOC_REPB_Arb' incorporates:
         *  Constant: '<S404>/Calib'
         *  SignalConversion generated from: '<S390>/Out1'
         */
        rtb_VariantMerge_For_Variant_Source_TgtS = KeTMDR_Pct_TgtSOC_NonEsp;

        /* End of Outputs for SubSystem: '<S355>/TargetSOC_NonEsp' */
    }

#endif

    /* End of If: '<S355>/If1' */

    /* Outputs for Atomic SubSystem: '<S355>/SignalLatchOnWithReset' */
    /* Logic: '<S388>/OR1' incorporates:
     *  Logic: '<S355>/Logical1'
     *  Logic: '<S388>/NOT'
     *  Logic: '<S388>/OR'
     *  UnitDelay: '<S355>/UnitDelay1'
     *  UnitDelay: '<S388>/Unit Delay'
     */
    TMDR_ac_DW.UnitDelay_DSTATE_a = ((TMDR_ac_DW.UnitDelay1_DSTATE_f) ||
        (((!rtb_GreaterThan1_p) && (!rtb_TmpSignalConversionAtVeSRAR_b_Inhibi)) &&
         (TMDR_ac_DW.UnitDelay_DSTATE_a)));

    /* End of Outputs for SubSystem: '<S355>/SignalLatchOnWithReset' */

    /* Selector: '<S355>/Selector3' incorporates:
     *  Constant: '<S381>/Calib'
     *  DataTypeConversion: '<S355>/DataTypeConversion5'
     *  VariantMerge generated from: '<S355>/ProgramArb1'
     */
    TMDR_ac_B.Selector3 = KaTMDR_e_ActualDrvMdToCAN
        [(TMDR_ac_B.VariantMerge_For_Variant_Source_Progra_n)];

    /* Selector: '<S355>/Selector4' incorporates:
     *  Constant: '<S382>/Calib'
     *  DataTypeConversion: '<S355>/DataTypeConversion6'
     *  VariantMerge generated from: '<S355>/ProgramArb'
     */
    TMDR_ac_B.Selector4 = KaTMDR_e_PropulsionMdToCAN
        [(TMDR_ac_B.VariantMerge_For_Variant_Source_Progra_o)];

    /* SignalConversion generated from: '<S355>/TgtSOC_REPB_Arb' */
#if Rte_SysCon_Variant_TMDR_COREBEVSelec

    /* VariantMerge generated from: '<S355>/TgtSOC_REPB_Arb' incorporates:
     *  Constant: '<S384>/Calib'
     */
    rtb_VariantMerge_For_Variant_Source_TgtS = KeTMDR_Pct_TgtSOCCOREBEV;

#endif

    /* End of SignalConversion generated from: '<S355>/TgtSOC_REPB_Arb' */

    /* Switch: '<S400>/Switch1' incorporates:
     *  Constant: '<S355>/ConstantValue'
     *  Constant: '<S355>/TRUEConstant'
     *  Switch: '<S400>/Switch2'
     *  UnitDelay: '<S400>/Unit Delay1'
     */
    if (rtb_TmpSignalConversionAtVeSRAR_b_Inhibi)
    {
        TMDR_ac_DW.UnitDelay1_DSTATE = 0.0F;
    }
    else
    {
        if (true)
        {
            /* Switch: '<S400>/Switch2' incorporates:
             *  UnitDelay: '<S400>/Unit Delay'
             *  UnitDelay: '<S400>/Unit Delay1'
             */
            TMDR_ac_DW.UnitDelay1_DSTATE = TMDR_ac_DW.UnitDelay_DSTATE;
        }
    }

    /* End of Switch: '<S400>/Switch1' */

    /* Switch: '<S355>/Switch3' incorporates:
     *  Constant: '<S374>/Constant'
     *  Constant: '<S380>/Calib'
     *  If: '<S355>/If'
     *  Logic: '<S355>/Logical6'
     *  Logic: '<S355>/Logical7'
     *  Logic: '<S355>/Logical8'
     *  RelationalOperator: '<S355>/Comparison2'
     *  Selector: '<S355>/Selector1'
     *  UnitDelay: '<S388>/Unit Delay'
     */
    if ((rtb_TmpSignalConversionAtVeFWDR_e_Tcase_ == CeFWDR_e_TfrCasNeutral) &&
            (TMDR_ac_DW.UnitDelay_DSTATE_a))
    {
        /* Switch: '<S355>/Switch3' incorporates:
         *  UnitDelay: '<S400>/Unit Delay1'
         */
        TMDR_ac_DW.UnitDelay_DSTATE = TMDR_ac_DW.UnitDelay1_DSTATE;
    }
    else if (rtb_OR3)
    {
        /* Outputs for IfAction SubSystem: '<S355>/TgtSOC_4Lo' incorporates:
         *  ActionPort: '<S396>/ActionPort'
         */
        /* If: '<S355>/If' incorporates:
         *  Constant: '<S410>/Calib'
         *  SignalConversion generated from: '<S396>/Out1'
         *  Switch: '<S355>/Switch3'
         */
        TMDR_ac_DW.UnitDelay_DSTATE = KeTMDR_Pct_TgtSOC_4Lo;

        /* End of Outputs for SubSystem: '<S355>/TgtSOC_4Lo' */
    }
    else if ((KaTMDR_b_HigherTgtSOCMd[(10 * ((sint32)tmpRead_2)) + ((sint32)
               rtb_Switch1_a4)]) || (tmpRead && rtb_UnitDelay_de))
    {
        /* Outputs for IfAction SubSystem: '<S355>/TgtSOC_Higher' incorporates:
         *  ActionPort: '<S397>/ActionPort'
         */
        /* If: '<S355>/If' incorporates:
         *  Constant: '<S411>/Calib'
         *  SignalConversion generated from: '<S397>/Out1'
         *  Switch: '<S355>/Switch3'
         */
        TMDR_ac_DW.UnitDelay_DSTATE = KeTMDR_Pct_TgtSOC_Higher;

        /* End of Outputs for SubSystem: '<S355>/TgtSOC_Higher' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S355>/TgtSOC_Normal' incorporates:
         *  ActionPort: '<S398>/ActionPort'
         */
        /* If: '<S355>/If' incorporates:
         *  Constant: '<S398>/ConstantValue'
         *  SignalConversion generated from: '<S398>/Out1'
         *  Switch: '<S355>/Switch3'
         */
        TMDR_ac_DW.UnitDelay_DSTATE = 0.0F;

        /* End of Outputs for SubSystem: '<S355>/TgtSOC_Normal' */
    }

    /* End of Switch: '<S355>/Switch3' */

    /* SignalConversion generated from: '<S355>/TgtSOC_REPB_Arb' */
#if !Rte_SysCon_Variant_TMDR_COREBEVSelec && !Rte_SysCon_Variant_TMDR_REPBSelec

    /* VariantMerge generated from: '<S355>/TgtSOC_REPB_Arb' */
    rtb_VariantMerge_For_Variant_Source_TgtS = TMDR_ac_DW.UnitDelay_DSTATE;

#endif

    /* End of SignalConversion generated from: '<S355>/TgtSOC_REPB_Arb' */

    /* Outport: '<Root>/VeTMDR_Pct_TargetSOC' incorporates:
     *  Gain: '<S386>/Gain'
     */
    (void)Rte_Write_VeTMDR_Pct_TargetSOC_Value(1.0F *
        rtb_VariantMerge_For_Variant_Source_TgtS);

    /* Outport: '<Root>/VeTMDR_i_TrueTrrnMd' incorporates:
     *  Gain: '<S387>/Gain'
     */
    (void)Rte_Write_VeTMDR_i_TrueTrrnMd_Value((uint8)(((uint32)((uint8)1U)) *
        ((uint32)rtb_Switch1_a4)));

    /* Switch: '<S355>/Switch' incorporates:
     *  Switch: '<S355>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeTIMR_b_AWD_Lo)
    {
        /* Outport: '<Root>/VeTMDR_e_LockLowSt' incorporates:
         *  Constant: '<S373>/Constant'
         */
        (void)Rte_Write_VeTMDR_e_LockLowSt_Value(CeTMDR_e_AWD_Low);
    }
    else
    {
        if (rtb_GreaterThan1_p)
        {
            /* Switch: '<S355>/Switch1' incorporates:
             *  Constant: '<S361>/Constant'
             */
            rtb_Logical2_m_tmp = CeTMDR_e_AWD_Lock;
        }
        else
        {
            /* Switch: '<S355>/Switch1' incorporates:
             *  Constant: '<S375>/Constant'
             */
            rtb_Logical2_m_tmp = CeTMDR_e_Off;
        }

        /* Outport: '<Root>/VeTMDR_e_LockLowSt' incorporates:
         *  Switch: '<S355>/Switch1'
         */
        (void)Rte_Write_VeTMDR_e_LockLowSt_Value(rtb_Logical2_m_tmp);
    }

    /* End of Switch: '<S355>/Switch' */

    /* RelationalOperator: '<S399>/GreaterThan4' incorporates:
     *  Logic: '<S399>/AND3'
     *  Logic: '<S399>/NOT1'
     */
#if Rte_SysCon_Variant_TMDR_BEV_REPBSelec || Rte_SysCon_Variant_TMDR_COREBEVSelec

    /* Logic: '<S399>/AND3' incorporates:
     *  UnitDelay: '<S399>/UnitDelay'
     */
    rtb_AND3 = (rtb_AND3 && (TMDR_ac_DW.UnitDelay_DSTATE_dp !=
                 TMDR_ac_ConstB.DataTypeConversion1));

#endif

    /* End of RelationalOperator: '<S399>/GreaterThan4' */

    /* SignalConversion generated from: '<S355>/ProgramArbRckFA' */
#if Rte_SysCon_Variant_TMDR_BEV_REPBSelec

    /* VariantMerge generated from: '<S355>/ProgramArbRckFA' */
    TMDR_ac_B.VariantMerge_For_Variant_Source_ProgramA = rtb_AND3;

#else

    /* VariantMerge generated from: '<S355>/ProgramArbRckFA' incorporates:
     *  Constant: '<S355>/Constant'
     *  SignalConversion generated from: '<S355>/ProgramArbRckFA'
     */
    TMDR_ac_B.VariantMerge_For_Variant_Source_ProgramA = false;

#endif

    /* End of SignalConversion generated from: '<S355>/ProgramArbRckFA' */

    /* Switch: '<S400>/Switch3' incorporates:
     *  Constant: '<S355>/ConstantValue'
     *  UnitDelay: '<S400>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeSRAR_b_Inhibi)
    {
        TMDR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }

    /* End of Switch: '<S400>/Switch3' */

    /* Update for UnitDelay: '<S399>/UnitDelay1' */
#if Rte_SysCon_Variant_TMDR_BEV_REPBSelec || Rte_SysCon_Variant_TMDR_COREBEVSelec

    TMDR_ac_DW.UnitDelay1_DSTATE_d = rtb_DataTypeConversion2_d;

#endif

    /* End of Update for UnitDelay: '<S399>/UnitDelay1' */

    /* Update for UnitDelay: '<S355>/UnitDelay1' */
    TMDR_ac_DW.UnitDelay1_DSTATE_f = rtb_OR3;

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<S3>/TMDR_MSG' */
#else

    /* Outputs for Atomic SubSystem: '<S3>/TMDR_NF' */
    /* Outputs for Atomic SubSystem: '<S6>/TMDR_NF' */
    /* SignalConversion generated from: '<S487>/Variant_TMDR_M182TrrnMd' incorporates:
     *  Inport: '<Root>/VeDMIR_e_DriveStyleSts'
     */
#if !Rte_SysCon_Variant_TMDR_M182TrrnMd

    /* VariantMerge generated from: '<S487>/Variant_TMDR_M182TrrnMd' incorporates:
     *  SignalConversion generated from: '<S1>/VeTIMR_e_TrrnMdSt'
     */
    rtb_VariantMerge_For_Variant_Source_Vari =
        rtb_TmpSignalConversionAtVeTIMR_e_TrrnMd;

#else

    /* Outputs for Atomic SubSystem: '<S487>/ITMDC_BypassSport' */
    (void)Rte_Read_VeDMIR_e_DriveStyleSts_Value(&tmpRead_p);

    /* Switch: '<S489>/Switch' incorporates:
     *  Constant: '<S493>/Constant'
     *  Inport: '<Root>/VeDMIR_e_DriveStyleSts'
     *  RelationalOperator: '<S489>/Equal'
     */
    if (tmpRead_p == CeDMIR_e_SportFun)
    {
        /* VariantMerge generated from: '<S487>/Variant_TMDR_M182TrrnMd' incorporates:
         *  Constant: '<S491>/Constant'
         *  SignalConversion generated from: '<S487>/Variant_TMDR_M182TrrnMd'
         */
        rtb_VariantMerge_For_Variant_Source_Vari = CeTMDR_e_Sport;
    }
    else
    {
        /* VariantMerge generated from: '<S487>/Variant_TMDR_M182TrrnMd' incorporates:
         *  Constant: '<S492>/Constant'
         *  SignalConversion generated from: '<S487>/Variant_TMDR_M182TrrnMd'
         */
        rtb_VariantMerge_For_Variant_Source_Vari = CeTMDR_e_Auto;
    }

    /* End of Switch: '<S489>/Switch' */
    /* End of Outputs for SubSystem: '<S487>/ITMDC_BypassSport' */
#endif

    /* End of SignalConversion generated from: '<S487>/Variant_TMDR_M182TrrnMd' */

    /* Outport: '<Root>/VeTMDR_e_TrrnMd' incorporates:
     *  DataTypeConversion: '<S488>/DataTypeConversion'
     *  VariantMerge generated from: '<S487>/Variant_TMDR_M182TrrnMd'
     */
    (void)Rte_Write_VeTMDR_e_TrrnMd_Value
        (rtb_VariantMerge_For_Variant_Source_Vari);

    /* Outport: '<Root>/VeTMDR_i_TrueTrrnMd' incorporates:
     *  Constant: '<S490>/Calib'
     *  DataTypeConversion: '<S487>/DataTypeConversion2'
     *  Selector: '<S487>/Selector2'
     *  VariantMerge generated from: '<S487>/Variant_TMDR_M182TrrnMd'
     */
    (void)Rte_Write_VeTMDR_i_TrueTrrnMd_Value(KaTMDR_i_TrueTrrnMd
        [(rtb_VariantMerge_For_Variant_Source_Vari)]);

    /* End of Outputs for SubSystem: '<S6>/TMDR_NF' */
    /* End of Outputs for SubSystem: '<S3>/TMDR_NF' */
#endif

    /* End of Outputs for SubSystem: '<S1>/TMDR_Arb' */

    /* SignalConversion generated from: '<S1>/TMDC_M_TorqFloor' */
#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    /* Outport: '<Root>/VeTMDR_M_TorqFloor' */
    (void)Rte_Write_VeTMDR_M_TorqFloor_Value(TMDR_ac_B.Merge1);

#endif

    /* End of SignalConversion generated from: '<S1>/TMDC_M_TorqFloor' */

    /* SignalConversion generated from: '<S1>/TMDC_b_RockMdFault' */
#if Rte_SysCon_Variant_TMDR_MSG_Selec

    /* Outport: '<Root>/VeTMDR_b_RockMdFault' */
    (void)Rte_Write_VeTMDR_b_RockMdFault_Value
        (TMDR_ac_B.VariantMerge_For_Variant_Source_ProgramA);

#endif

    /* End of SignalConversion generated from: '<S1>/TMDC_b_RockMdFault' */

    /* SignalConversion generated from: '<S1>/TMDC_b_TorqFloorActv' incorporates:
     *  SignalConversion generated from: '<S1>/TMDC_e_AWD_St'
     */
#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    /* Outport: '<Root>/VeTMDR_b_TorqFloorActv' */
    (void)Rte_Write_VeTMDR_b_TorqFloorActv_Value(TMDR_ac_B.Switch);

    /* Outport: '<Root>/VeTMDR_e_AWD_St' incorporates:
     *  Merge: '<S24>/Merge'
     */
    (void)Rte_Write_VeTMDR_e_AWD_St_Value(TMDR_ac_B.Merge);

#endif

    /* End of SignalConversion generated from: '<S1>/TMDC_b_TorqFloorActv' */

    /* SignalConversion generated from: '<S1>/TMDC_e_ActualDrvMd' incorporates:
     *  SignalConversion generated from: '<S1>/TMDC_e_Arb_TrrnMd'
     *  SignalConversion generated from: '<S1>/TMDC_e_CmbndDrvMd'
     *  SignalConversion generated from: '<S1>/TMDC_e_PropulsionMd'
     */
#if Rte_SysCon_Variant_TMDR_MSG_Selec

    /* Outport: '<Root>/VeTMDR_e_ActualDrvMd' incorporates:
     *  VariantMerge generated from: '<S355>/ProgramArb1'
     */
    (void)Rte_Write_VeTMDR_e_ActualDrvMd_Value
        (TMDR_ac_B.VariantMerge_For_Variant_Source_Progra_n);

    /* Outport: '<Root>/VeTMDR_e_Arb_TrrnMd' */
    (void)Rte_Write_VeTMDR_e_Arb_TrrnMd_Value(TMDR_ac_B.Selector4);

    /* Outport: '<Root>/VeTMDR_e_CmbndDrvMd' */
    (void)Rte_Write_VeTMDR_e_CmbndDrvMd_Value(TMDR_ac_B.Selector3);

    /* Outport: '<Root>/VeTMDR_e_PropulsionMd' incorporates:
     *  VariantMerge generated from: '<S355>/ProgramArb'
     */
    (void)Rte_Write_VeTMDR_e_PropulsionMd_Value
        (TMDR_ac_B.VariantMerge_For_Variant_Source_Progra_o);

#endif

    /* End of SignalConversion generated from: '<S1>/TMDC_e_ActualDrvMd' */

    /* SignalConversion generated from: '<S1>/TMDC_r_TorqSplit' incorporates:
     *  SignalConversion generated from: '<S1>/VeTMDC_b_TrrnMdStFA'
     */
#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    /* Outport: '<Root>/VeTMDR_r_TorqSplt' */
    (void)Rte_Write_VeTMDR_r_TorqSplt_Value(TMDR_ac_B.Gain);

    /* Outport: '<Root>/VeTMDR_b_TrrnMdStFA' */
    (void)Rte_Write_VeTMDR_b_TrrnMdStFA_Value(TMDR_ac_B.Gain_l);

#endif

    /* End of SignalConversion generated from: '<S1>/TMDC_r_TorqSplit' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, TMDR_CODE) TMDR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TMDR_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/TMDO_Init_Outputs'
     */
    /* SignalConversion generated from: '<S494>/VeTMDR_e_LockLowSt' incorporates:
     *  Constant: '<S496>/Constant'
     */
    TMDR_ac_B.OutportBufferForVeTMDR_e_LockLowSt = TMDR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S494>/VeTMDR_e_TrrnMd' incorporates:
     *  Constant: '<S498>/Constant'
     */
    TMDR_ac_B.OutportBufferForVeTMDR_e_TrrnMd = TMDR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S494>/VeTMDC_r_TorqSplt' */
    TMDR_ac_B.OutportBufferForVeTMDC_r_TorqSplt = TMDR_ac_ConstB.ConstantValue;

    /* SignalConversion generated from: '<S494>/VeTMDR_M_TorqFloor' */
    TMDR_ac_B.OutportBufferForVeTMDR_M_TorqFloor = TMDR_ac_ConstB.ConstantValue2;

    /* SignalConversion generated from: '<S494>/TMDR_b_TorqFloorActv' */
    TMDR_ac_B.OutportBufferForTMDR_b_TorqFloorActv =
        TMDR_ac_ConstB.FALSEConstant3;

    /* Outport: '<Root>/VeTMDR_t_TorqFloorBlnd_In' incorporates:
     *  Constant: '<S501>/Calib'
     *  SignalConversion generated from: '<S494>/VeTMDR_t_TorqFloorBlnd_In'
     */
    (void)Rte_Write_VeTMDR_t_TorqFloorBlnd_In_Value
        (KeTMDR_t_TorqFloorBlnd_InInit);

    /* Outport: '<Root>/VeTMDR_t_TorqFloorBlnd_Out' incorporates:
     *  Constant: '<S502>/Calib'
     *  SignalConversion generated from: '<S494>/TMDR_t_TorqFloorBlnd_Out'
     */
    (void)Rte_Write_VeTMDR_t_TorqFloorBlnd_Out_Value
        (KeTMDR_t_TorqFloorBlnd_OutInit);

    /* SignalConversion generated from: '<S494>/VeTMDC_b_AWD_St' incorporates:
     *  Constant: '<S499>/Constant'
     */
    TMDR_ac_B.OutportBufferForVeTMDC_b_AWD_St = TMDR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S494>/VeTMDR_Pct_TargetSOC' */
    TMDR_ac_B.OutportBufferForVeTMDR_Pct_TargetSOC =
        TMDR_ac_ConstB.ConstantValue1;

    /* SignalConversion generated from: '<S494>/VeTMDR_b_RockMdFault' */
    TMDR_ac_B.OutportBufferForVeTMDR_b_RockMdFault =
        TMDR_ac_ConstB.FALSEConstant2;

    /* SignalConversion generated from: '<S494>/VeTMDR_e_CmbndDrvMd' */
    TMDR_ac_B.OutportBufferForVeTMDR_e_CmbndDrvMd =
        TMDR_ac_ConstB.ConstantValue5;

    /* SignalConversion generated from: '<S494>/VeTMDR_e_Arb_TrrnMd' */
    TMDR_ac_B.OutportBufferForVeTMDR_e_Arb_TrrnMd =
        TMDR_ac_ConstB.ConstantValue4;

    /* SignalConversion generated from: '<S494>/VeTMDR_i_TrueTrrnMd' */
    TMDR_ac_B.OutportBufferForVeTMDR_i_TrueTrrnMd =
        TMDR_ac_ConstB.ConstantValue6;

    /* SignalConversion generated from: '<S494>/VeTMDR_e_PropulsionMd' incorporates:
     *  Constant: '<S497>/Constant'
     */
    TMDR_ac_B.OutportBufferForVeTMDR_e_PropulsionMd = TMDR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S494>/VeTMDR_e_ActualDrvMd' incorporates:
     *  Constant: '<S500>/Constant'
     */
    TMDR_ac_B.OutportBufferForVeTMDR_e_ActualDrvMd = TMDR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S494>/VeTMDR_b_TrrnMdStFA' */
    TMDR_ac_B.OutportBufferForVeTMDR_b_TrrnMdStFA =
        TMDR_ac_ConstB.FALSEConstant4;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeTMDR_b_TorqFloorActv' incorporates:
     *  SignalConversion generated from: '<S2>/TMDR_b_TorqFloorActv'
     */
    (void)Rte_Write_VeTMDR_b_TorqFloorActv_Value
        (TMDR_ac_B.OutportBufferForTMDR_b_TorqFloorActv);

    /* Outport: '<Root>/VeTMDR_M_TorqFloor' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMDR_M_TorqFloor'
     */
    (void)Rte_Write_VeTMDR_M_TorqFloor_Value
        (TMDR_ac_B.OutportBufferForVeTMDR_M_TorqFloor);

    /* Outport: '<Root>/VeTMDR_Pct_TargetSOC' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMDR_Pct_TargetSOC'
     */
    (void)Rte_Write_VeTMDR_Pct_TargetSOC_Value
        (TMDR_ac_B.OutportBufferForVeTMDR_Pct_TargetSOC);

    /* Outport: '<Root>/VeTMDR_e_AWD_St' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMDR_b_AWD_St'
     *  SignalConversion generated from: '<S494>/VeTMDC_b_AWD_St'
     */
    (void)Rte_Write_VeTMDR_e_AWD_St_Value
        (TMDR_ac_B.OutportBufferForVeTMDC_b_AWD_St);

    /* Outport: '<Root>/VeTMDR_b_RockMdFault' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMDR_b_RockMdFault'
     */
    (void)Rte_Write_VeTMDR_b_RockMdFault_Value
        (TMDR_ac_B.OutportBufferForVeTMDR_b_RockMdFault);

    /* Outport: '<Root>/VeTMDR_b_TrrnMdStFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMDR_b_TrrnMdStFA'
     */
    (void)Rte_Write_VeTMDR_b_TrrnMdStFA_Value
        (TMDR_ac_B.OutportBufferForVeTMDR_b_TrrnMdStFA);

    /* Outport: '<Root>/VeTMDR_e_ActualDrvMd' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMDR_e_ActualDrvMd'
     *  SignalConversion generated from: '<S494>/VeTMDR_e_ActualDrvMd'
     */
    (void)Rte_Write_VeTMDR_e_ActualDrvMd_Value
        (TMDR_ac_B.OutportBufferForVeTMDR_e_ActualDrvMd);

    /* Outport: '<Root>/VeTMDR_e_Arb_TrrnMd' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMDR_e_Arb_TrrnMd'
     */
    (void)Rte_Write_VeTMDR_e_Arb_TrrnMd_Value
        (TMDR_ac_B.OutportBufferForVeTMDR_e_Arb_TrrnMd);

    /* Outport: '<Root>/VeTMDR_e_CmbndDrvMd' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMDR_e_CmbndDrvMd'
     */
    (void)Rte_Write_VeTMDR_e_CmbndDrvMd_Value
        (TMDR_ac_B.OutportBufferForVeTMDR_e_CmbndDrvMd);

    /* Outport: '<Root>/VeTMDR_e_LockLowSt' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMDR_e_LockLowSt'
     *  SignalConversion generated from: '<S494>/VeTMDR_e_LockLowSt'
     */
    (void)Rte_Write_VeTMDR_e_LockLowSt_Value
        (TMDR_ac_B.OutportBufferForVeTMDR_e_LockLowSt);

    /* Outport: '<Root>/VeTMDR_e_PropulsionMd' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMDR_e_PropulsionMd'
     *  SignalConversion generated from: '<S494>/VeTMDR_e_PropulsionMd'
     */
    (void)Rte_Write_VeTMDR_e_PropulsionMd_Value
        (TMDR_ac_B.OutportBufferForVeTMDR_e_PropulsionMd);

    /* Outport: '<Root>/VeTMDR_e_TrrnMd' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMDR_e_TrrnMd'
     *  SignalConversion generated from: '<S494>/VeTMDR_e_TrrnMd'
     */
    (void)Rte_Write_VeTMDR_e_TrrnMd_Value
        (TMDR_ac_B.OutportBufferForVeTMDR_e_TrrnMd);

    /* Outport: '<Root>/VeTMDR_i_TrueTrrnMd' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMDR_i_TrueTrrnMd'
     */
    (void)Rte_Write_VeTMDR_i_TrueTrrnMd_Value
        (TMDR_ac_B.OutportBufferForVeTMDR_i_TrueTrrnMd);

    /* Outport: '<Root>/VeTMDR_r_TorqSplt' incorporates:
     *  SignalConversion generated from: '<S2>/VeTMDR_r_TorqSplt'
     */
    (void)Rte_Write_VeTMDR_r_TorqSplt_Value
        (TMDR_ac_B.OutportBufferForVeTMDC_r_TorqSplt);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, TMDR_CODE) TMDR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */

    /* custom signals */
#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    VeTMDC_e_StActv = CeTMDR_e_AutoActv;

#endif

#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    VeTMDC_e_StActvTrqFloor = CeTMDR_e_AutoActv;

#endif

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TMDR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/TMDO_Init_Outputs'
     */
    /* SystemInitialize for SignalConversion generated from: '<S494>/VeTMDR_e_LockLowSt' incorporates:
     *  Constant: '<S496>/Constant'
     */
    TMDR_ac_B.OutportBufferForVeTMDR_e_LockLowSt = TMDR_ac_ConstB.Constant_h;

    /* SystemInitialize for SignalConversion generated from: '<S494>/VeTMDR_e_TrrnMd' incorporates:
     *  Constant: '<S498>/Constant'
     */
    TMDR_ac_B.OutportBufferForVeTMDR_e_TrrnMd = TMDR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S494>/VeTMDC_r_TorqSplt' */
    TMDR_ac_B.OutportBufferForVeTMDC_r_TorqSplt = TMDR_ac_ConstB.ConstantValue;

    /* SystemInitialize for SignalConversion generated from: '<S494>/VeTMDR_M_TorqFloor' */
    TMDR_ac_B.OutportBufferForVeTMDR_M_TorqFloor = TMDR_ac_ConstB.ConstantValue2;

    /* SystemInitialize for SignalConversion generated from: '<S494>/TMDR_b_TorqFloorActv' */
    TMDR_ac_B.OutportBufferForTMDR_b_TorqFloorActv =
        TMDR_ac_ConstB.FALSEConstant3;

    /* SystemInitialize for Outport: '<Root>/VeTMDR_t_TorqFloorBlnd_In' incorporates:
     *  Constant: '<S501>/Calib'
     *  SignalConversion generated from: '<S494>/VeTMDR_t_TorqFloorBlnd_In'
     */
    (void)Rte_Write_VeTMDR_t_TorqFloorBlnd_In_Value
        (KeTMDR_t_TorqFloorBlnd_InInit);

    /* SystemInitialize for Outport: '<Root>/VeTMDR_t_TorqFloorBlnd_Out' incorporates:
     *  Constant: '<S502>/Calib'
     *  SignalConversion generated from: '<S494>/TMDR_t_TorqFloorBlnd_Out'
     */
    (void)Rte_Write_VeTMDR_t_TorqFloorBlnd_Out_Value
        (KeTMDR_t_TorqFloorBlnd_OutInit);

    /* SystemInitialize for SignalConversion generated from: '<S494>/VeTMDC_b_AWD_St' incorporates:
     *  Constant: '<S499>/Constant'
     */
    TMDR_ac_B.OutportBufferForVeTMDC_b_AWD_St = TMDR_ac_ConstB.Constant_o;

    /* SystemInitialize for SignalConversion generated from: '<S494>/VeTMDR_Pct_TargetSOC' */
    TMDR_ac_B.OutportBufferForVeTMDR_Pct_TargetSOC =
        TMDR_ac_ConstB.ConstantValue1;

    /* SystemInitialize for SignalConversion generated from: '<S494>/VeTMDR_b_RockMdFault' */
    TMDR_ac_B.OutportBufferForVeTMDR_b_RockMdFault =
        TMDR_ac_ConstB.FALSEConstant2;

    /* SystemInitialize for SignalConversion generated from: '<S494>/VeTMDR_e_CmbndDrvMd' */
    TMDR_ac_B.OutportBufferForVeTMDR_e_CmbndDrvMd =
        TMDR_ac_ConstB.ConstantValue5;

    /* SystemInitialize for SignalConversion generated from: '<S494>/VeTMDR_e_Arb_TrrnMd' */
    TMDR_ac_B.OutportBufferForVeTMDR_e_Arb_TrrnMd =
        TMDR_ac_ConstB.ConstantValue4;

    /* SystemInitialize for SignalConversion generated from: '<S494>/VeTMDR_i_TrueTrrnMd' */
    TMDR_ac_B.OutportBufferForVeTMDR_i_TrueTrrnMd =
        TMDR_ac_ConstB.ConstantValue6;

    /* SystemInitialize for SignalConversion generated from: '<S494>/VeTMDR_e_PropulsionMd' incorporates:
     *  Constant: '<S497>/Constant'
     */
    TMDR_ac_B.OutportBufferForVeTMDR_e_PropulsionMd = TMDR_ac_ConstB.Constant_d;

    /* SystemInitialize for SignalConversion generated from: '<S494>/VeTMDR_e_ActualDrvMd' incorporates:
     *  Constant: '<S500>/Constant'
     */
    TMDR_ac_B.OutportBufferForVeTMDR_e_ActualDrvMd = TMDR_ac_ConstB.Constant_p;

    /* SystemInitialize for SignalConversion generated from: '<S494>/VeTMDR_b_TrrnMdStFA' */
    TMDR_ac_B.OutportBufferForVeTMDR_b_TrrnMdStFA =
        TMDR_ac_ConstB.FALSEConstant4;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/TMDR_MedTED'
     */
    /* SystemInitialize for Atomic SubSystem: '<S1>/TMDR_Arb' */
#if Rte_SysCon_Variant_TMDR_FUNC_Selec

    /* SystemInitialize for Atomic SubSystem: '<S3>/TMDR_FUNC' */
    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TMDC_FrontRearAxleTorqueArbitration'
     */
    /* SystemInitialize for Merge: '<S24>/Merge' */
    TMDR_ac_B.Merge = CeTMDR_e_AWD_BothAllowed;

    /* SystemInitialize for Merge: '<S26>/Merge1' */
    TMDR_ac_B.Merge1 = 0.0F;

    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<S3>/TMDR_FUNC' */
#elif Rte_SysCon_Variant_TMDR_MSG_Selec

    /* SystemInitialize for Atomic SubSystem: '<S3>/TMDR_MSG' */
    /* SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/TMDC_MSG_FrontRearAxleTorqueArbitration'
     */
    /* Start for Constant: '<S371>/Constant' */
#if !Rte_SysCon_Variant_TMDR_COREBEVSelec

    /* Start for Constant: '<S371>/Constant' */
    TMDR_ac_B.Constant = CeTMDR_e_Auto;

#endif

    /* End of Start for Constant: '<S371>/Constant' */

    /* SystemInitialize for Merge: '<S412>/Merge1' */
#if Rte_SysCon_Variant_TMDR_BEV_REPBSelec || Rte_SysCon_Variant_TMDR_COREBEVSelec

    /* SystemInitialize for Merge: '<S412>/Merge1' */
    TMDR_ac_B.Merge1_p = CeTMDR_e_NotDefine;

#endif

    /* End of SystemInitialize for Merge: '<S412>/Merge1' */

    /* SystemInitialize for SignalConversion generated from: '<S355>/ProgramArb1' */
#if Rte_SysCon_Variant_TMDR_COREBEVSelec

    /* SystemInitialize for VariantMerge generated from: '<S355>/ProgramArb1' incorporates:
     *  Merge: '<S412>/Merge1'
     */
    TMDR_ac_B.VariantMerge_For_Variant_Source_Progra_n = TMDR_ac_B.Merge1_p;

#else

    /* SystemInitialize for VariantMerge generated from: '<S355>/ProgramArb1' incorporates:
     *  Constant: '<S371>/Constant'
     *  SignalConversion generated from: '<S355>/ProgramArb1'
     */
    TMDR_ac_B.VariantMerge_For_Variant_Source_Progra_n = TMDR_ac_B.Constant;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S355>/ProgramArb1' */
    /* End of SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<S3>/TMDR_MSG' */
#endif

    /* End of SystemInitialize for SubSystem: '<S1>/TMDR_Arb' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* SystemInitialize for Outport: '<Root>/VeTMDR_Pct_TargetSOC' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    (void)Rte_Write_VeTMDR_Pct_TargetSOC_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeTMDR_e_LockLowSt' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    (void)Rte_Write_VeTMDR_e_LockLowSt_Value(CeTMDR_e_Off);

    /* SystemInitialize for Outport: '<Root>/VeTMDR_e_TrrnMd' incorporates:
     *  Merge: '<Root>/Merge_4'
     */
    (void)Rte_Write_VeTMDR_e_TrrnMd_Value(CeTMDR_e_NotDefine);

    /* SystemInitialize for Outport: '<Root>/VeTMDR_b_RockMdFault' incorporates:
     *  Merge: '<Root>/Merge_5'
     */
    (void)Rte_Write_VeTMDR_b_RockMdFault_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeTMDR_e_CmbndDrvMd' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    (void)Rte_Write_VeTMDR_e_CmbndDrvMd_Value(((uint8)0U));

    /* SystemInitialize for Outport: '<Root>/VeTMDR_e_Arb_TrrnMd' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    (void)Rte_Write_VeTMDR_e_Arb_TrrnMd_Value(((uint8)0U));

    /* SystemInitialize for Outport: '<Root>/VeTMDR_i_TrueTrrnMd' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    (void)Rte_Write_VeTMDR_i_TrueTrrnMd_Value(((uint8)0U));

    /* SystemInitialize for Outport: '<Root>/VeTMDR_e_PropulsionMd' incorporates:
     *  Merge: '<Root>/Merge_9'
     */
    (void)Rte_Write_VeTMDR_e_PropulsionMd_Value(CeTMDR_e_NotDefine);

    /* SystemInitialize for Outport: '<Root>/VeTMDR_e_ActualDrvMd' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    (void)Rte_Write_VeTMDR_e_ActualDrvMd_Value(CeTMDR_e_NotDefine);

    /* SystemInitialize for Outport: '<Root>/VeTMDR_r_TorqSplt' incorporates:
     *  Merge: '<Root>/Merge_11'
     */
    (void)Rte_Write_VeTMDR_r_TorqSplt_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeTMDR_e_AWD_St' incorporates:
     *  Merge: '<Root>/Merge_17'
     */
    (void)Rte_Write_VeTMDR_e_AWD_St_Value(CeTMDR_e_AWD_BothAllowed);

    /* SystemInitialize for Outport: '<Root>/VeTMDR_M_TorqFloor' incorporates:
     *  Merge: '<Root>/Merge_12'
     */
    (void)Rte_Write_VeTMDR_M_TorqFloor_Value(0.0F);

    /* SystemInitialize for Outport: '<Root>/VeTMDR_b_TorqFloorActv' incorporates:
     *  Merge: '<Root>/Merge_13'
     */
    (void)Rte_Write_VeTMDR_b_TorqFloorActv_Value(false);

    /* SystemInitialize for Outport: '<Root>/VeTMDR_b_TrrnMdStFA' incorporates:
     *  Merge: '<Root>/Merge_16'
     */
    (void)Rte_Write_VeTMDR_b_TrrnMdStFA_Value(false);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
