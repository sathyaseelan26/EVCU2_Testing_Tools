/*
 * File: BTQR_ac.c
 *
 * Code generated for Simulink model 'BTQR_ac'.
 *
 * Model version                  : 9.110
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:10:36 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BTQR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_BTQR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) HeBTQR_t_MedTEB = 0.01F;/* Referenced by: '<S37>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(uint16, BTQR_VAR_INIT) KeBTQD_Cnt_ESPSignalFail = 30U;/* Referenced by: '<S30>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(uint16, BTQR_VAR_INIT) KeBTQD_Cnt_ESPSignalPass = 50U;/* Referenced by: '<S31>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQD_U_SysVoltLowerLimit = 9.0F;/* Referenced by: '<S38>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQD_U_SysVoltUpperLimit = 16.0F;/* Referenced by: '<S39>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(boolean, BTQR_VAR_INIT) KeBTQD_b_ESPSignalDiagEnbl = 0;/* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT)
    KeBTQR_Cf_RgenBrkTorqLDDeactvIdlSpd = -0.125F;/* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_Cf_RgenBrkTorqLDDeactvSEM =
    -0.125F;                           /* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT)
    KeBTQR_Cf_RgenBrkTorqLUDeactvIdlSpd = 1024.0F;/* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_Cf_RgenBrkTorqLUDeactvSEM =
    1024.0F;                           /* Referenced by: '<S81>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(uint16, BTQR_VAR_INIT) KeBTQR_Cnt_RegnBrkDeacDebSamples =
    25U;                               /* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_J_VehInertia = 99.4F;/* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_M_DrvrIntndedTotBrkTrqMax =
    100.0F;                            /* Referenced by: '<S96>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT)
    KeBTQR_M_OutputTrqDrvrIntGradThresh = 50.0F;/* Referenced by: '<S97>/Calib' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_Pct_AccPdlNotAppliedLim =
    1.0F;                              /* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_Pct_BrakePedalPctOvrr =
    0.0F;                              /* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_a_MaxDeclG = 0.686F;/* Referenced by: '<S119>/Calib' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(boolean, BTQR_VAR_INIT) KeBTQR_b_AVH_GC_GG_Sel = 0;/* Referenced by: '<S143>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(boolean, BTQR_VAR_INIT) KeBTQR_b_BrakePedalPctEnblOvrr = 0;/* Referenced by: '<S99>/Calib' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(boolean, BTQR_VAR_INIT) KeBTQR_b_CreepCancelEna = 0;/* Referenced by: '<S144>/Calib' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(boolean, BTQR_VAR_INIT) KeBTQR_b_DrvIntndBrkTrqILEOvrrd =
    0;                                 /* Referenced by: '<S145>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(boolean, BTQR_VAR_INIT) KeBTQR_b_ESCEvntActvFAInit = 0;/* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(boolean, BTQR_VAR_INIT) KeBTQR_b_ESCEvntActvInit = 0;/* Referenced by: '<S183>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(boolean, BTQR_VAR_INIT) KeBTQR_b_FricBrakeTestEnInit = 0;/* Referenced by: '<S184>/Calib' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(boolean, BTQR_VAR_INIT) KeBTQR_b_OneBrkBoxEnable = 1;/* Referenced by: '<S146>/Calib' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(boolean, BTQR_VAR_INIT) KeBTQR_b_OvrTransTrqRatio = 1;/* Referenced by: '<S147>/Calib' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(boolean, BTQR_VAR_INIT) KeBTQR_b_OvrTrqCnvRatio = 1;/* Referenced by: '<S148>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(boolean, BTQR_VAR_INIT) KeBTQR_b_RBS_U1003_LtchEnbl = 0;/* Referenced by: '<S32>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(boolean, BTQR_VAR_INIT) KeBTQR_b_RollsModeActInit = 0;/* Referenced by: '<S185>/Calib' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_dM_FakeBrkTrqRampInGrd =
    5000.0F;                           /* Referenced by: '<S169>/Calib' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_dM_FakeBrkTrqRampOutGrd =
    10000.0F;                          /* Referenced by: '<S149>/Calib' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_k_CreepCancelBlendLim =
    0.0F;                              /* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_k_RgnReqFlt = 0.8F;/* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT)
    KeBTQR_k_WhlSpInputSpdRatioFltrCnst = 0.5F;/* Referenced by: '<S120>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_l_VehWhlRadius = 0.3F;/* Referenced by: '<S121>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_m_BaseVehMass = 2495.0F;/* Referenced by: '<S122>/Calib' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_r_BrkFailSftNegGrd = -0.01F;/* Referenced by: '<S150>/Calib' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_r_BrkFailSftPosGrd = 0.01F;/* Referenced by: '<S151>/Calib' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_r_NVRatioLmtd = 0.46F;/* Referenced by: '<S152>/Calib' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_r_RgnReqFailSftNegGrd =
    -0.01F;                            /* Referenced by: '<S153>/Calib' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_r_RgnReqFailSftPosGrd =
    0.01F;                             /* Referenced by: '<S154>/Calib' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_r_TransTrqRatio = 1.0F;/* Referenced by: '<S155>/Calib' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_r_TrqCnvRatio = 1.0F;/* Referenced by: '<S156>/Calib' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_t_12p5_dT = 0.0125F;/* Referenced by: '<S157>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_t_DebnTimer = 2.0F;/* Referenced by: '<S41>/Calib' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_t_TiDebouncerSetRegnReqFA =
    3.0F;                              /* Referenced by: '<S158>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KeBTQR_v_MinVehSpdForNVRatio =
    10.0F;                             /* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KtBTQR_Cf_RegenRampIn4ESC[80] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F
} ;                                    /* Referenced by: '<S83>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KtBTQR_Cf_RegenRampOut4ESC[80] =
{
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -0.8F,
    -0.8F, -0.8F, -0.8F, -0.8F, -0.8F, -1.0F, -1.0F, -0.6F, -0.6F, -0.6F, -0.6F,
    -0.6F, -0.6F, -1.0F, -1.0F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -0.3F, -1.0F,
    -1.0F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -0.1F, -1.0F, -1.0F, -0.01F,
    -0.01F, -0.01F, -0.01F, -0.01F, -0.01F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F,
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F,
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F, -1.0F,
    -1.0F, -1.0F, -1.0F, -1.0F, -1.0F
} ;                                    /* Referenced by: '<S84>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KtBTQR_M_DrvrIntBrkTrqDwnNegGrd[8]
    =
{
    -0.01F, -0.01F, -0.01F, -0.01F, -0.01F, -0.01F, -0.01F, -0.01F
} ;                                    /* Referenced by: '<S101>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KtBTQR_M_DrvrIntBrkTrqDwnPosGrd[8]
    =
{
    -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F, -0.2F
} ;                                    /* Referenced by: '<S102>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KtBTQR_M_DrvrIntBrkTrqUpNegGrd[8] =
{
    0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F, 0.01F
} ;                                    /* Referenced by: '<S103>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KtBTQR_M_DrvrIntBrkTrqUpPosGrd[8] =
{
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F
} ;                                    /* Referenced by: '<S104>/Vector' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KtBTQR_M_OneBrkBoxPctToRgnBrk[8] =
{
    0.0F, 0.01F, 0.02F, 0.03F, 0.04F, 0.06F, 0.07F, 0.08F
} ;                                    /* Referenced by: '<S159>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KtBTQR_Pct_BrakePedalPct[100] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.3F,
    0.65F, 0.85F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.0F, 0.0F, 0.2F, 0.5F, 0.75F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.0F, 0.0F, 0.2F, 0.5F, 0.75F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 0.0F, 0.0F, 0.15F, 0.35F, 0.55F, 0.75F, 1.0F, 1.0F, 1.0F,
    1.0F, 0.0F, 0.0F, 0.15F, 0.35F, 0.55F, 0.75F, 1.0F, 1.0F, 1.0F, 1.0F, 0.0F,
    0.0F, 0.15F, 0.35F, 0.55F, 0.75F, 1.0F, 1.0F, 1.0F, 1.0F, 0.0F, 0.0F, 0.0F,
    0.2F, 0.4F, 0.6F, 0.85F, 1.0F, 1.0F, 1.0F, 0.0F, 0.0F, 0.15F, 0.35F, 0.55F,
    0.75F, 1.0F, 1.0F, 1.0F, 1.0F, 0.0F, 0.0F, 0.15F, 0.35F, 0.55F, 0.75F, 1.0F,
    1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S105>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KtBTQR_r_MassFactor[5] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S123>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KtBTQR_r_SlopeFactor[5] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S124>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KtBTQR_t_ReqRegnBrkFltConstT[54] =
{
    0.25F, 0.2F, 0.15F, 0.1F, 0.08F, 0.08F, 0.25F, 0.2F, 0.15F, 0.1F, 0.08F,
    0.08F, 0.25F, 0.2F, 0.15F, 0.1F, 0.08F, 0.08F, 0.1F, 0.1F, 0.1F, 0.1F, 0.1F,
    0.1F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    0.08F, 0.08F, 0.08F, 0.08F, 0.08F, 0.08F, 0.25F, 0.2F, 0.15F, 0.1F, 0.08F,
    0.08F, 0.25F, 0.2F, 0.15F, 0.1F, 0.08F, 0.08F
} ;                                    /* Referenced by: '<S111>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KxBTQR_Cf_RegenRampIn4ESC[8] =
{
    0.0F, 50.0F, 750.0F, 1250.0F, 2250.0F, 3250.0F, 3750.0F, 5000.0F
} ;                                    /* Referenced by: '<S83>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KxBTQR_Cf_RegenRampOut4ESC[8] =
{
    0.0F, 50.0F, 750.0F, 1250.0F, 2250.0F, 3250.0F, 3750.0F, 5000.0F
} ;                                    /* Referenced by: '<S84>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KxBTQR_M_DrvrIntBrkTrqDwnNegGrd[8]
    =
{
    11.0F, 15.0F, 20.0F, 25.0F, 35.0F, 45.0F, 70.0F, 80.0F
} ;                                    /* Referenced by: '<S101>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KxBTQR_M_DrvrIntBrkTrqDwnPosGrd[8]
    =
{
    11.0F, 15.0F, 20.0F, 25.0F, 35.0F, 45.0F, 70.0F, 80.0F
} ;                                    /* Referenced by: '<S102>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KxBTQR_M_DrvrIntBrkTrqUpNegGrd[8] =
{
    11.0F, 15.0F, 20.0F, 25.0F, 35.0F, 45.0F, 70.0F, 80.0F
} ;                                    /* Referenced by: '<S103>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KxBTQR_M_DrvrIntBrkTrqUpPosGrd[8] =
{
    11.0F, 15.0F, 20.0F, 25.0F, 35.0F, 45.0F, 70.0F, 80.0F
} ;                                    /* Referenced by: '<S104>/Vector' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KxBTQR_M_OneBrkBoxPctToRgnBrk[8] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 55.0F, 60.0F
} ;                                    /* Referenced by: '<S159>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KxBTQR_Pct_BrakePedalPct[10] =
{
    0.0F, 10.0F, 24.0F, 35.0F, 46.0F, 53.0F, 69.0F, 82.0F, 91.0F, 100.0F
} ;                                    /* Referenced by: '<S105>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KxBTQR_r_MassFactor[5] =
{
    1.0F, 1.05F, 1.1F, 1.15F, 1.2F
} ;                                    /* Referenced by: '<S123>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KxBTQR_r_SlopeFactor[5] =
{
    -45.0F, -30.0F, -20.0F, -10.0F, 0.0F
} ;                                    /* Referenced by: '<S124>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KxBTQR_t_ReqRegnBrkFltConstT[6] =
{
    0.0F, 10.0F, 20.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S111>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KyBTQR_Cf_RegenRampIn4ESC[10] =
{
    -200.0F, -150.0F, -100.0F, -50.0F, -25.0F, -10.0F, 0.0F, 20.0F, 30.0F, 50.0F
} ;                                    /* Referenced by: '<S83>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KyBTQR_Cf_RegenRampOut4ESC[10] =
{
    -200.0F, -150.0F, -100.0F, -50.0F, -25.0F, -10.0F, 0.0F, 20.0F, 30.0F, 50.0F
} ;                                    /* Referenced by: '<S84>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KyBTQR_Pct_BrakePedalPct[10] =
{
    0.0F, 4.8F, 5.8F, 7.0F, 8.1F, 10.0F, 13.8F, 19.1F, 28.4F, 47.0F
} ;                                    /* Referenced by: '<S105>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static volatile CONST(float32, BTQR_VAR_INIT) KyBTQR_t_ReqRegnBrkFltConstT[9] =
{
    -2.0F, -1.0F, -0.1F, -0.01F, -0.001F, -0.0001F, 0.0F, 1.0F, 2.0F
} ;                                    /* Referenced by: '<S111>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_BTQR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BTQR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_BTQR_1

static VAR(float32, BTQR_VAR_INIT) VeBTQC_Cf_RegnBrkTorqActv4SEM;/* '<S62>/Product1' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static VAR(float32, BTQR_VAR_INIT) VeBTQC_M_DrvrIntndedTotBrkTrqPreFilt;/* '<S95>/Sum3' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static VAR(float32, BTQR_VAR_INIT) VeBTQC_M_MaxOvrLayRegnBrkTorqFW;/* '<S64>/Product3' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static VAR(float32, BTQR_VAR_INIT) VeBTQC_M_MaxOvrLayRegnBrkTorqWhl;/* '<S64>/Product' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static VAR(float32, BTQR_VAR_INIT) VeBTQC_b_ESCstats;/* '<S62>/Product' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static VAR(boolean, BTQR_VAR_INIT) VeBTQC_b_ETRQCtrlActvRegen;/* '<S62>/Logical7' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static VAR(boolean, BTQR_VAR_INIT) VeBTQC_b_FakeBrkEna;/* '<S60>/Logical_Operator1' */

#endif

#if !Rte_SysCon_Variant_BTQR_1

static VAR(float32, BTQR_VAR_INIT) VeBTQC_k_FakeCreepFactor;/* '<S172>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static VAR(float32, BTQR_VAR_INIT) VeBTQC_n_EngineSpdRadpSec;/* '<S64>/Product7' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static VAR(float32, BTQR_VAR_INIT) VeBTQC_n_VehicleSpdRadpSec;/* '<S64>/Divide' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static VAR(float32, BTQR_VAR_INIT) VeBTQC_r_WhlSpInputSpdRatio;/* '<S117>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static VAR(float32, BTQR_VAR_INIT) VeBTQC_v_UnsgndVehicleSpeed;/* '<S135>/Switch' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static VAR(uint16, BTQR_VAR_INIT) VeBTQD_Cnt_ESPSystem_PerfFailCnt;/* '<S51>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static VAR(uint16, BTQR_VAR_INIT) VeBTQD_Cnt_ESPSystem_PerfSmpCnt;/* '<S52>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static VAR(float32, BTQR_VAR_INIT) VeBTQR_M_BrkTrqDwnGrd;/* '<S63>/Signal Conversion1' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static VAR(float32, BTQR_VAR_INIT) VeBTQR_M_BrkTrqUpGrd;/* '<S63>/Signal Conversion' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static VAR(float32, BTQR_VAR_INIT) VeBTQR_Pct_BrakePedalPctOvrr;/* '<S63>/Switch1' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static VAR(float32, BTQR_VAR_INIT) VeBTQR_Pct_BrkPdlTrqPctReq;/* '<S105>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static VAR(float32, BTQR_VAR_INIT) VeBTQR_r_MassFactor;/* '<S123>/Vector' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static VAR(float32, BTQR_VAR_INIT) VeBTQR_r_MassFactorFinal;/* '<S64>/Product2' */

#endif

#if Rte_SysCon_Variant_BTQR_1

static VAR(float32, BTQR_VAR_INIT) VeBTQR_r_SlopeFactor;/* '<S124>/Vector' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BTQR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_BTQR
#include "MemMap.h"

CONST(ConstB_BTQR_ac_T, BTQR_VAR_INIT) BTQR_ac_ConstB =
{
    CeDFIB_e_Init,                     /* '<S186>/Constant' */

#if Rte_SysCon_Variant_BTQR_2

    CeBTQR_e_NotEnabled                /* '<S181>/Constant' */
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_BTQR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_BTQR
#include "MemMap.h"

CONST(ConstP_BTQR_ac_T, BTQR_VAR_INIT) BTQR_ac_ConstP =
{

#if Rte_SysCon_Variant_BTQR_1

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S83>/Vector'
     *   '<S84>/Vector'
     */
    {
        7U, 9U
    },

#endif

#if Rte_SysCon_Variant_BTQR_1

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S105>/Vector'
     */
    {
        9U, 9U
    },

#endif

#if Rte_SysCon_Variant_BTQR_1

    /* Computed Parameter: Vector_maxIndex_h
     * Referenced by: '<S111>/Vector'
     */
    {
        5U, 8U
    },

#endif

#if !Rte_SysCon_Variant_BTQR_1

    /* Computed Parameter: Vector_maxIndex_f
     * Referenced by: '<S172>/Vector'
     */
    {
        5U, 5U
    },

#endif

#ifndef CONSTP_BTQR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_BTQR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BTQR
#include "MemMap.h"

VAR(B_BTQR_ac_T, BTQR_VAR_INIT) BTQR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BTQR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BTQR
#include "MemMap.h"

VAR(DW_BTQR_ac_T, BTQR_VAR_INIT) BTQR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BTQR
#include "MemMap.h"
#if Rte_SysCon_Variant_BTQR_1

static FUNC(void, BTQR_CODE_LOCAL) BTQR_ac_RegenInActive(VAR
    (TeBTQR_e_ReqTorqueOverLayActive, AUTOMATIC) rtu_In1, P2VAR
    (TeBTQR_e_ReqTorqueOverLayActive, AUTOMATIC, BTQR_VAR_INIT) rty_Out1);

#endif

/*
 * Output and update for action system:
 *    '<S66>/RegenInActive'
 *    '<S66>/RegenActive'
 */
#if Rte_SysCon_Variant_BTQR_1

static FUNC(void, BTQR_CODE_LOCAL) BTQR_ac_RegenInActive(VAR
    (TeBTQR_e_ReqTorqueOverLayActive, AUTOMATIC) rtu_In1, P2VAR
    (TeBTQR_e_ReqTorqueOverLayActive, AUTOMATIC, BTQR_VAR_INIT) rty_Out1)
{
    /* Inport: '<S134>/In1' */
    *rty_Out1 = rtu_In1;
}

#endif

/* Model step function for TID1 */
FUNC(void, BTQR_CODE) BTQR_MedTEB(void) /* Explicit Task: MedTEB */
{
    boolean rtb_Logical2_a;
    boolean rtb_TmpSignalConversionAtTmpVM_FcnCall_b;

#if !Rte_SysCon_Variant_BTQR_1

    sint8 rtPrevAction;

#endif

    boolean rtb_AND_b;

#if Rte_SysCon_Variant_BTQR_1

    boolean rtb_AND_ap;

#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean rtb_AND_a;

#endif

    float32 rtb_Sum2_ex;
    float32 rtb_Switch6;

#if Rte_SysCon_Variant_BTQR_1

    float32 rtb_Vector_g4;

#endif

#if Rte_SysCon_Variant_BTQR_1

    float32 rtb_Vector_a;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
#if !Rte_SysCon_Variant_BTQR_1 && Rte_SysCon_Variant_BTQR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Merge: '<Root>/Merge_21'
     */
    BTQR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy =
        Rte_IrvRead_BTQR_MedTEB_DrvrIntndedFricBrkTrq_Init_write_IRV();

#elif !(!Rte_SysCon_Variant_BTQR_1) || !Rte_SysCon_Variant_BTQR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
    BTQR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
#if !Rte_SysCon_Variant_BTQR_1

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Merge: '<Root>/Merge_19_Irv'
     */
    BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e =
        Rte_IrvRead_BTQR_MedTEB_DrvrIntndedFricBrkTrqFA_Init_write_IRV();

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
#if !Rte_SysCon_Variant_BTQR_1 && Rte_SysCon_Variant_BTQR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Merge: '<Root>/Merge_20'
     */
    BTQR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_a =
        Rte_IrvRead_BTQR_MedTEB_DrvrIntndedTotBrkTrq_Init_write_IRV();

#elif !(!Rte_SysCon_Variant_BTQR_1) || !Rte_SysCon_Variant_BTQR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
    BTQR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_a = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
#if !Rte_SysCon_Variant_BTQR_1

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Merge: '<Root>/Merge_16_Irv'
     */
    BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l =
        Rte_IrvRead_BTQR_MedTEB_DrvrIntndedTotBrkTrqFA_Init_write_IRV();

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
#if !Rte_SysCon_Variant_BTQR_1 && Rte_SysCon_Variant_BTQR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Merge: '<Root>/Merge_23'
     */
    BTQR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_k =
        Rte_IrvRead_BTQR_MedTEB_DrvrIntndedTotBrkTrqILE_Init_write_IRV();

#elif !(!Rte_SysCon_Variant_BTQR_1) || !Rte_SysCon_Variant_BTQR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
    BTQR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_k = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
#if !Rte_SysCon_Variant_BTQR_1

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Merge: '<Root>/Merge_22_Irv'
     */
    BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_b3 =
        Rte_IrvRead_BTQR_MedTEB_DrvrIntndedTotBrkTrqILEFA_Init_write_IRV();

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
#if !Rte_SysCon_Variant_BTQR_1 && Rte_SysCon_Variant_BTQR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Merge: '<Root>/Merge_5'
     */
    BTQR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_n =
        Rte_IrvRead_BTQR_MedTEB_RegenBrkAxleTrqReq_Init_write_IRV();

#elif !(!Rte_SysCon_Variant_BTQR_1) || !Rte_SysCon_Variant_BTQR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
    BTQR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_n = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
#if !Rte_SysCon_Variant_BTQR_1

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Merge: '<Root>/Merge_6_Irv'
     */
    BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_aj =
        Rte_IrvRead_BTQR_MedTEB_RegenBrkAxleTrqReqFA_Init_write_IRV();

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
#if !Rte_SysCon_Variant_BTQR_1 && Rte_SysCon_Variant_BTQR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Merge: '<Root>/Merge_11'
     */
    BTQR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i =
        Rte_IrvRead_BTQR_MedTEB_AVHSts_Init_write_IRV();

#elif !(!Rte_SysCon_Variant_BTQR_1) || !Rte_SysCon_Variant_BTQR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
    BTQR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i = CeBTQR_e_NotEnabled;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
#if !Rte_SysCon_Variant_BTQR_1

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys);

#endif

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeCSVR_v_VehSpd' */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value(&rtb_Switch6);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
#if !Rte_SysCon_Variant_BTQR_1

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VePLTR_e_EPBHoldSts'
     */
    (void)Rte_Read_VePLTR_e_EPBHoldSts_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ah);

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
#if !Rte_SysCon_Variant_BTQR_1 && Rte_SysCon_Variant_BTQR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Merge: '<Root>/Merge_12'
     */
    BTQR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_m =
        Rte_IrvRead_BTQR_MedTEB_HNGActv_Init_write_IRV();

#elif !(!Rte_SysCon_Variant_BTQR_1) || !Rte_SysCon_Variant_BTQR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
    BTQR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_m = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
#if !Rte_SysCon_Variant_BTQR_1

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeTINR_r_TCMTransTrqRatio'
     */
    (void)Rte_Read_VeTINR_r_TCMTransTrqRatio_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_c);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeTCCR_r_TR'
     */
    (void)Rte_Read_VeTCCR_r_TR_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i);

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Merge: '<Root>/Merge_15'
     */
    rtb_TmpSignalConversionAtTmpVM_FcnCall_b =
        Rte_IrvRead_BTQR_MedTEB_ESCEvntActvFA_Init_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
#if Rte_SysCon_Variant_BTQR_1

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeATRR_M_OutputTorqReqImmedHTDR'
     */
    (void)Rte_Read_VeATRR_M_OutputTorqReqImmedHTDR_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeDTRR_e_SumFWIDFst'
     */
    (void)Rte_Read_VeDTRR_e_SumFWIDFst_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oh);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeRGNR_M_RegenBrkOutTorqCap'
     */
    (void)Rte_Read_VeRGNR_M_RegenBrkOutTorqCap_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeOHSR_e_ILEState'
     */
    (void)Rte_Read_VeOHSR_e_ILEState_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kk);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mt);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Merge: '<Root>/Merge_14_Irv'
     */
    BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_g3 =
        Rte_IrvRead_BTQR_MedTEB_ESCEvntActv_Init_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Merge: '<Root>/Merge_18'
     */
    BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bi =
        Rte_IrvRead_BTQR_MedTEB_RollsModeAct_Init_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeBRKR_b_ImpndSkid'
     */
    (void)Rte_Read_VeBRKR_b_ImpndSkid_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nm);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeBRKR_b_ABSActiveFA'
     */
    (void)Rte_Read_VeBRKR_b_ABSActiveFA_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ay);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeBPSR_Pct_BrakePedalPct'
     */
    (void)Rte_Read_VeBPSR_Pct_BrakePedalPct_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bt);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeRGNR_M_RgnBrkOutTrq'
     */
    (void)Rte_Read_VeRGNR_M_RgnBrkOutTrq_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_n);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeCSVR_dn_TransOutSpddot'
     */
    (void)Rte_Read_VeCSVR_dn_TransOutSpddot_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd'
     */
    (void)Rte_Read_VeCSVR_n_TransOutSpdSgndFltrd_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gs);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Merge: '<Root>/Merge_17_Irv'
     */
    BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cn =
        Rte_IrvRead_BTQR_MedTEB_FricBrakeTestEnInit_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VePVMR_m_VehMassRLS'
     */
    (void)Rte_Read_VePVMR_m_VehMassRLS_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gf);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VePLTR_phi_EstSlopeAngle'
     */
    (void)Rte_Read_VePLTR_phi_EstSlopeAngle_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cy);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeRGNR_b_InhRgnAct'
     */
    (void)Rte_Read_VeRGNR_b_InhRgnAct_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mw);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_at);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VePMDR_U_HB_SysVolt'
     */
    (void)Rte_Read_VePMDR_U_HB_SysVolt_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VePMDR_b_RunCrankActiveAnalog'
     */
    (void)Rte_Read_VePMDR_b_RunCrankActiveAnalog_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f);

#endif

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/BTQR_MedTEB'
     */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommABSCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommABSCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommABSCM_Value
        (&BTQR_ac_DW.StatusByte_LostCommABSCM);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' */
#if Rte_SysCon_Variant_BTQR_1

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RBS_U1003'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RBS_U1003_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o);

#else

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeSRAR_b_BSMLoCBusOff_CANC_C2'
     */
    (void)Rte_Read_VeSRAR_b_BSMLoCBusOff_CANC_C2_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lx);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeBRKR_Pct_OneBrkBoxPdlPosn'
     */
    (void)Rte_Read_VeBRKR_Pct_OneBrkBoxPdlPosn_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nn);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44' incorporates:
     *  Inport: '<Root>/VeBRKR_b_OneBrkBoxPdlPosnFA'
     */
    (void)Rte_Read_VeBRKR_b_OneBrkBoxPdlPosnFA_Value
        (&BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_j);

#endif

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/BTQR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* Outputs for Atomic SubSystem: '<S27>/Variant_Subsystem' */
#if Rte_SysCon_Variant_BTQR_1

    /* Outputs for Atomic SubSystem: '<S58>/BTQR_FUNC' */
    /* Logic: '<S62>/Logical2' incorporates:
     *  Logic: '<S62>/Logical10'
     */
    rtb_Logical2_a = ((!BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nm) ||
                      (BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bi));

    /* Outputs for Atomic SubSystem: '<S62>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S85>/EdgeRising' */
    /* Logic: '<S91>/AND' incorporates:
     *  Logic: '<S91>/OR1'
     *  UnitDelay: '<S91>/Unit Delay'
     */
    rtb_AND_b = (rtb_Logical2_a && (!BTQR_ac_DW.UnitDelay_DSTATE_gc));

    /* Update for UnitDelay: '<S91>/Unit Delay' */
    BTQR_ac_DW.UnitDelay_DSTATE_gc = rtb_Logical2_a;

    /* End of Outputs for SubSystem: '<S85>/EdgeRising' */

    /* Switch: '<S85>/Switch1' incorporates:
     *  Constant: '<S82>/Calib'
     *  Constant: '<S85>/Constant Value'
     *  Constant: '<S85>/Constant Value1'
     *  Logic: '<S85>/OR'
     *  Logic: '<S85>/OR1'
     *  MinMax: '<S85>/Minimum'
     *  Sum: '<S85>/Summation'
     *  UnitDelay: '<S85>/Unit Delay'
     */
    if ((!rtb_Logical2_a) || rtb_AND_b)
    {
        BTQR_ac_DW.UnitDelay_DSTATE_po = 0U;
    }
    else if (KeBTQR_Cnt_RegnBrkDeacDebSamples < ((uint16)(((uint32)
                BTQR_ac_DW.UnitDelay_DSTATE_po) + 1U)))
    {
        /* MinMax: '<S85>/Minimum' incorporates:
         *  Constant: '<S82>/Calib'
         */
        BTQR_ac_DW.UnitDelay_DSTATE_po = KeBTQR_Cnt_RegnBrkDeacDebSamples;
    }
    else
    {
        /* MinMax: '<S85>/Minimum' incorporates:
         *  Constant: '<S85>/Constant Value'
         *  Sum: '<S85>/Summation'
         *  UnitDelay: '<S85>/Unit Delay'
         */
        BTQR_ac_DW.UnitDelay_DSTATE_po = (uint16)(((uint32)
            BTQR_ac_DW.UnitDelay_DSTATE_po) + 1U);
    }

    /* End of Switch: '<S85>/Switch1' */
    /* End of Outputs for SubSystem: '<S62>/Turn On Delay Sample' */

    /* Logic: '<S62>/Logical1' incorporates:
     *  Logic: '<S62>/Logical11'
     */
    rtb_AND_b = ((!BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ay) ||
                 (BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bi));

    /* Outputs for Atomic SubSystem: '<S62>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S86>/EdgeRising' */
    /* Logic: '<S92>/AND' incorporates:
     *  Logic: '<S92>/OR1'
     *  UnitDelay: '<S92>/Unit Delay'
     */
    rtb_AND_ap = (rtb_AND_b && (!BTQR_ac_DW.UnitDelay_DSTATE_i2));

    /* Update for UnitDelay: '<S92>/Unit Delay' */
    BTQR_ac_DW.UnitDelay_DSTATE_i2 = rtb_AND_b;

    /* End of Outputs for SubSystem: '<S86>/EdgeRising' */

    /* Switch: '<S86>/Switch1' incorporates:
     *  Constant: '<S82>/Calib'
     *  Constant: '<S86>/Constant Value'
     *  Constant: '<S86>/Constant Value1'
     *  Logic: '<S86>/OR'
     *  Logic: '<S86>/OR1'
     *  MinMax: '<S86>/Minimum'
     *  Sum: '<S86>/Summation'
     *  UnitDelay: '<S86>/Unit Delay'
     */
    if ((!rtb_AND_b) || rtb_AND_ap)
    {
        BTQR_ac_DW.UnitDelay_DSTATE_c1 = 0U;
    }
    else if (KeBTQR_Cnt_RegnBrkDeacDebSamples < ((uint16)(((uint32)
                BTQR_ac_DW.UnitDelay_DSTATE_c1) + 1U)))
    {
        /* MinMax: '<S86>/Minimum' incorporates:
         *  Constant: '<S82>/Calib'
         */
        BTQR_ac_DW.UnitDelay_DSTATE_c1 = KeBTQR_Cnt_RegnBrkDeacDebSamples;
    }
    else
    {
        /* MinMax: '<S86>/Minimum' incorporates:
         *  Constant: '<S86>/Constant Value'
         *  Sum: '<S86>/Summation'
         *  UnitDelay: '<S86>/Unit Delay'
         */
        BTQR_ac_DW.UnitDelay_DSTATE_c1 = (uint16)(((uint32)
            BTQR_ac_DW.UnitDelay_DSTATE_c1) + 1U);
    }

    /* End of Switch: '<S86>/Switch1' */
    /* End of Outputs for SubSystem: '<S62>/Turn On Delay Sample1' */

    /* Logic: '<S62>/Logical6' incorporates:
     *  Logic: '<S62>/Logical3'
     *  Logic: '<S62>/Logical4'
     *  Logic: '<S62>/Logical8'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44'
     */
    rtb_AND_ap = (((!BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_g3) &&
                   (!rtb_TmpSignalConversionAtTmpVM_FcnCall_b)) ||
                  (BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bi));

    /* Outputs for Atomic SubSystem: '<S62>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S87>/EdgeRising' */
    /* Logic: '<S93>/AND' incorporates:
     *  Logic: '<S93>/OR1'
     *  UnitDelay: '<S93>/Unit Delay'
     */
    rtb_AND_a = (rtb_AND_ap && (!BTQR_ac_DW.UnitDelay_DSTATE_gs));

    /* Update for UnitDelay: '<S93>/Unit Delay' */
    BTQR_ac_DW.UnitDelay_DSTATE_gs = rtb_AND_ap;

    /* End of Outputs for SubSystem: '<S87>/EdgeRising' */

    /* Switch: '<S87>/Switch1' incorporates:
     *  Constant: '<S82>/Calib'
     *  Constant: '<S87>/Constant Value'
     *  Constant: '<S87>/Constant Value1'
     *  Logic: '<S87>/OR'
     *  Logic: '<S87>/OR1'
     *  MinMax: '<S87>/Minimum'
     *  Sum: '<S87>/Summation'
     *  UnitDelay: '<S87>/Unit Delay'
     */
    if ((!rtb_AND_ap) || rtb_AND_a)
    {
        BTQR_ac_DW.UnitDelay_DSTATE_o = 0U;
    }
    else if (KeBTQR_Cnt_RegnBrkDeacDebSamples < ((uint16)(((uint32)
                BTQR_ac_DW.UnitDelay_DSTATE_o) + 1U)))
    {
        /* MinMax: '<S87>/Minimum' incorporates:
         *  Constant: '<S82>/Calib'
         */
        BTQR_ac_DW.UnitDelay_DSTATE_o = KeBTQR_Cnt_RegnBrkDeacDebSamples;
    }
    else
    {
        /* MinMax: '<S87>/Minimum' incorporates:
         *  Constant: '<S87>/Constant Value'
         *  Sum: '<S87>/Summation'
         *  UnitDelay: '<S87>/Unit Delay'
         */
        BTQR_ac_DW.UnitDelay_DSTATE_o = (uint16)(((uint32)
            BTQR_ac_DW.UnitDelay_DSTATE_o) + 1U);
    }

    /* End of Switch: '<S87>/Switch1' */
    /* End of Outputs for SubSystem: '<S62>/Turn On Delay Sample2' */

    /* Logic: '<S62>/Logical7' incorporates:
     *  Constant: '<S72>/Constant'
     *  Constant: '<S73>/Constant'
     *  RelationalOperator: '<S62>/Comparison1'
     *  RelationalOperator: '<S62>/Comparison4'
     */
    VeBTQC_b_ETRQCtrlActvRegen = ((((uint32)
        BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oh) == CeDTRR_e_OverRev)
        || (((uint32)BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_oh) ==
            CeDTRR_e_OverSpd));

    /* Outputs for Atomic SubSystem: '<S62>/GradientLimiter' */
    /* Sum: '<S75>/Sum2' incorporates:
     *  DataTypeConversion: '<S62>/Data Type Conversion7'
     *  Logic: '<S62>/Logical5'
     *  UnitDelay: '<S75>/Unit Delay'
     */
    rtb_Sum2_ex = ((float32)((!VeBTQC_b_ETRQCtrlActvRegen) ? 1 : 0)) -
        BTQR_ac_DW.UnitDelay_DSTATE_j3;

    /* Outputs for Atomic SubSystem: '<S75>/Limiter' */
    /* Switch: '<S88>/Switch1' incorporates:
     *  Constant: '<S81>/Calib'
     *  RelationalOperator: '<S88>/Relational Operator'
     */
    if (KeBTQR_Cf_RgenBrkTorqLUDeactvSEM < rtb_Sum2_ex)
    {
        /* UnitDelay: '<S76>/Unit Delay' */
        rtb_Sum2_ex = KeBTQR_Cf_RgenBrkTorqLUDeactvSEM;
    }

    /* End of Switch: '<S88>/Switch1' */

    /* Switch: '<S88>/Switch' incorporates:
     *  Constant: '<S79>/Calib'
     *  RelationalOperator: '<S88>/Relational Operator1'
     */
    if (rtb_Sum2_ex <= KeBTQR_Cf_RgenBrkTorqLDDeactvSEM)
    {
        rtb_Sum2_ex = KeBTQR_Cf_RgenBrkTorqLDDeactvSEM;
    }

    /* End of Switch: '<S88>/Switch' */
    /* End of Outputs for SubSystem: '<S75>/Limiter' */

    /* Sum: '<S75>/Sum3' incorporates:
     *  UnitDelay: '<S75>/Unit Delay'
     */
    BTQR_ac_DW.UnitDelay_DSTATE_j3 += rtb_Sum2_ex;

    /* End of Outputs for SubSystem: '<S62>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S62>/GradientLimiter1' */
    /* Sum: '<S76>/Sum2' incorporates:
     *  Constant: '<S71>/Constant'
     *  Constant: '<S74>/Constant'
     *  DataTypeConversion: '<S62>/Data Type Conversion6'
     *  Logic: '<S62>/Logical9'
     *  RelationalOperator: '<S62>/Comparison3'
     *  RelationalOperator: '<S62>/Comparison5'
     *  UnitDelay: '<S76>/Unit Delay'
     */
    rtb_Sum2_ex = ((float32)(((((uint32)
                       BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kk) !=
                      CeOHSR_e_CreepState) && (((uint32)
                       BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_kk) !=
                      CeOHSR_e_NeutralState)) ? 1 : 0)) -
        BTQR_ac_DW.UnitDelay_DSTATE_d;

    /* Outputs for Atomic SubSystem: '<S76>/Limiter' */
    /* Switch: '<S89>/Switch1' incorporates:
     *  Constant: '<S80>/Calib'
     *  RelationalOperator: '<S89>/Relational Operator'
     */
    if (KeBTQR_Cf_RgenBrkTorqLUDeactvIdlSpd < rtb_Sum2_ex)
    {
        /* Switch: '<S89>/Switch1' */
        rtb_Sum2_ex = KeBTQR_Cf_RgenBrkTorqLUDeactvIdlSpd;
    }

    /* End of Switch: '<S89>/Switch1' */

    /* Switch: '<S89>/Switch' incorporates:
     *  Constant: '<S78>/Calib'
     *  RelationalOperator: '<S89>/Relational Operator1'
     */
    if (rtb_Sum2_ex <= KeBTQR_Cf_RgenBrkTorqLDDeactvIdlSpd)
    {
        rtb_Sum2_ex = KeBTQR_Cf_RgenBrkTorqLDDeactvIdlSpd;
    }

    /* End of Switch: '<S89>/Switch' */
    /* End of Outputs for SubSystem: '<S76>/Limiter' */

    /* Sum: '<S76>/Sum3' incorporates:
     *  UnitDelay: '<S76>/Unit Delay'
     */
    BTQR_ac_DW.UnitDelay_DSTATE_d += rtb_Sum2_ex;

    /* End of Outputs for SubSystem: '<S62>/GradientLimiter1' */

    /* Lookup_n-D: '<S83>/Vector' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44'
     */
    rtb_Vector_g4 = look2_iflf_binlca_16a
        (BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gs,
         BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g, ((const float32 *)
          &(KxBTQR_Cf_RegenRampIn4ESC[0])), ((const float32 *)
          &(KyBTQR_Cf_RegenRampIn4ESC[0])), ((const float32 *)
          &(KtBTQR_Cf_RegenRampIn4ESC[0])), BTQR_ac_ConstP.pooled7, 8U);

    /* Lookup_n-D: '<S84>/Vector' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44'
     */
    rtb_Vector_a = look2_iflf_binlca_16a
        (BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gs,
         BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g, ((const float32 *)
          &(KxBTQR_Cf_RegenRampOut4ESC[0])), ((const float32 *)
          &(KyBTQR_Cf_RegenRampOut4ESC[0])), ((const float32 *)
          &(KtBTQR_Cf_RegenRampOut4ESC[0])), BTQR_ac_ConstP.pooled7, 8U);

    /* Outputs for Atomic SubSystem: '<S62>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S62>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S62>/Turn On Delay Sample2' */
    /* Product: '<S62>/Product' incorporates:
     *  Constant: '<S82>/Calib'
     *  DataTypeConversion: '<S62>/Data Type Conversion1'
     *  DataTypeConversion: '<S62>/Data Type Conversion3'
     *  DataTypeConversion: '<S62>/Data Type Conversion4'
     *  Logic: '<S85>/AND'
     *  Logic: '<S86>/AND'
     *  Logic: '<S87>/AND'
     *  RelationalOperator: '<S85>/Greater  Than'
     *  RelationalOperator: '<S86>/Greater  Than'
     *  RelationalOperator: '<S87>/Greater  Than'
     *  UnitDelay: '<S85>/Unit Delay'
     *  UnitDelay: '<S86>/Unit Delay'
     *  UnitDelay: '<S87>/Unit Delay'
     */
    VeBTQC_b_ESCstats = (((float32)((rtb_Logical2_a &&
                            (BTQR_ac_DW.UnitDelay_DSTATE_po >=
        KeBTQR_Cnt_RegnBrkDeacDebSamples)) ? 1 : 0)) * ((float32)((rtb_AND_b &&
                            (BTQR_ac_DW.UnitDelay_DSTATE_c1 >=
        KeBTQR_Cnt_RegnBrkDeacDebSamples)) ? 1 : 0))) * ((float32)((rtb_AND_ap &&
        (BTQR_ac_DW.UnitDelay_DSTATE_o >= KeBTQR_Cnt_RegnBrkDeacDebSamples)) ? 1
        : 0));

    /* End of Outputs for SubSystem: '<S62>/Turn On Delay Sample2' */
    /* End of Outputs for SubSystem: '<S62>/Turn On Delay Sample1' */
    /* End of Outputs for SubSystem: '<S62>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S62>/GradientLimiter2' */
    /* Sum: '<S77>/Sum2' incorporates:
     *  UnitDelay: '<S77>/Unit Delay'
     */
    rtb_Sum2_ex = VeBTQC_b_ESCstats - BTQR_ac_DW.UnitDelay_DSTATE_l;

    /* Outputs for Atomic SubSystem: '<S77>/Limiter' */
    /* Switch: '<S90>/Switch1' incorporates:
     *  RelationalOperator: '<S90>/Relational Operator'
     */
    if (rtb_Vector_g4 < rtb_Sum2_ex)
    {
        /* Switch: '<S110>/Switch1' */
        rtb_Sum2_ex = rtb_Vector_g4;
    }

    /* End of Switch: '<S90>/Switch1' */

    /* Switch: '<S90>/Switch' incorporates:
     *  RelationalOperator: '<S90>/Relational Operator1'
     */
    if (rtb_Sum2_ex > rtb_Vector_a)
    {
        rtb_Vector_a = rtb_Sum2_ex;
    }

    /* End of Switch: '<S90>/Switch' */
    /* End of Outputs for SubSystem: '<S77>/Limiter' */

    /* Sum: '<S77>/Sum3' incorporates:
     *  UnitDelay: '<S77>/Unit Delay'
     */
    BTQR_ac_DW.UnitDelay_DSTATE_l += rtb_Vector_a;

    /* End of Outputs for SubSystem: '<S62>/GradientLimiter2' */

    /* Product: '<S62>/Product1' incorporates:
     *  UnitDelay: '<S75>/Unit Delay'
     *  UnitDelay: '<S76>/Unit Delay'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    VeBTQC_Cf_RegnBrkTorqActv4SEM = (BTQR_ac_DW.UnitDelay_DSTATE_j3 *
        BTQR_ac_DW.UnitDelay_DSTATE_d) * BTQR_ac_DW.UnitDelay_DSTATE_l;

    /* Outputs for Atomic SubSystem: '<S70>/Limiter1' */
    /* Switch: '<S135>/Switch1' incorporates:
     *  Constant: '<S70>/Constant Value2'
     *  RelationalOperator: '<S135>/Relational Operator'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44'
     */
    if (1024.0F < rtb_Switch6)
    {
        /* Switch: '<S116>/Switch1' */
        rtb_Sum2_ex = 1024.0F;
    }
    else
    {
        /* Switch: '<S116>/Switch1' */
        rtb_Sum2_ex = rtb_Switch6;
    }

    /* End of Switch: '<S135>/Switch1' */

    /* Switch: '<S135>/Switch' incorporates:
     *  Constant: '<S70>/Constant Value4'
     *  RelationalOperator: '<S135>/Relational Operator1'
     */
    if (rtb_Sum2_ex > 0.0F)
    {
        /* Switch: '<S135>/Switch' */
        VeBTQC_v_UnsgndVehicleSpeed = rtb_Sum2_ex;
    }
    else
    {
        /* Switch: '<S135>/Switch' */
        VeBTQC_v_UnsgndVehicleSpeed = 0.0F;
    }

    /* End of Switch: '<S135>/Switch' */
    /* End of Outputs for SubSystem: '<S70>/Limiter1' */

    /* Switch: '<S65>/Switch' incorporates:
     *  Constant: '<S128>/Calib'
     *  Constant: '<S130>/Constant Value'
     *  Constant: '<S130>/Constant Value1'
     *  Constant: '<S130>/Constant Value2'
     *  Constant: '<S130>/Constant Value3'
     *  Logic: '<S130>/AND'
     *  RelationalOperator: '<S130>/Greater Than or Equal '
     *  RelationalOperator: '<S130>/Greater Than or Equal 1'
     *  RelationalOperator: '<S130>/Not Equal'
     *  RelationalOperator: '<S130>/Not Equal1'
     *  RelationalOperator: '<S65>/Comparison4'
     *  Switch: '<S130>/Switch1'
     *  Switch: '<S130>/Switch2'
     *  Switch: '<S130>/Switch3'
     */
    if (VeBTQC_v_UnsgndVehicleSpeed <= KeBTQR_v_MinVehSpdForNVRatio)
    {
        /* Switch: '<S65>/Switch' incorporates:
         *  Constant: '<S65>/Constant Value3'
         */
        BTQR_ac_B.VariantMergeForOutportVeBTQR_r_NVRatioLm = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S65>/Protected Division' */
        if ((BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mt != 0.0F) &&
                (VeBTQC_v_UnsgndVehicleSpeed != 0.0F))
        {
            /* Switch: '<S130>/Switch1' incorporates:
             *  Product: '<S130>/Division'
             */
            BTQR_ac_B.VariantMergeForOutportVeBTQR_r_NVRatioLm =
                BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mt /
                VeBTQC_v_UnsgndVehicleSpeed;
        }
        else if (BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mt > 0.0F)
        {
            /* Switch: '<S130>/Switch2' incorporates:
             *  Constant: '<S130>/MAXFLOAT'
             *  Switch: '<S130>/Switch1'
             */
            BTQR_ac_B.VariantMergeForOutportVeBTQR_r_NVRatioLm =
                3.402823466E+38F;
        }
        else if (BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mt < 0.0F)
        {
            /* Switch: '<S130>/Switch3' incorporates:
             *  Constant: '<S130>/MINFLOAT'
             *  Switch: '<S130>/Switch1'
             *  Switch: '<S130>/Switch2'
             */
            BTQR_ac_B.VariantMergeForOutportVeBTQR_r_NVRatioLm =
                -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S130>/Switch1' incorporates:
             *  Constant: '<S130>/Constant Value4'
             *  Switch: '<S130>/Switch2'
             *  Switch: '<S130>/Switch3'
             */
            BTQR_ac_B.VariantMergeForOutportVeBTQR_r_NVRatioLm = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S65>/Protected Division' */

        /* Outputs for Atomic SubSystem: '<S65>/Limiter' */
        /* Switch: '<S129>/Switch1' incorporates:
         *  Constant: '<S130>/Constant Value2'
         *  Constant: '<S130>/Constant Value3'
         *  Constant: '<S65>/Constant Value'
         *  RelationalOperator: '<S129>/Relational Operator'
         *  RelationalOperator: '<S130>/Greater Than or Equal '
         *  RelationalOperator: '<S130>/Greater Than or Equal 1'
         *  Switch: '<S130>/Switch1'
         *  Switch: '<S130>/Switch2'
         *  Switch: '<S130>/Switch3'
         */
        if (1024.0F < BTQR_ac_B.VariantMergeForOutportVeBTQR_r_NVRatioLm)
        {
            /* Switch: '<S129>/Switch1' */
            BTQR_ac_B.VariantMergeForOutportVeBTQR_r_NVRatioLm = 1024.0F;
        }

        /* End of Switch: '<S129>/Switch1' */

        /* Switch: '<S129>/Switch' incorporates:
         *  Constant: '<S65>/Constant Value1'
         *  RelationalOperator: '<S129>/Relational Operator1'
         */
        if (BTQR_ac_B.VariantMergeForOutportVeBTQR_r_NVRatioLm <= 0.0F)
        {
            /* Switch: '<S65>/Switch' */
            BTQR_ac_B.VariantMergeForOutportVeBTQR_r_NVRatioLm = 0.0F;
        }

        /* End of Switch: '<S129>/Switch' */
        /* End of Outputs for SubSystem: '<S65>/Limiter' */
    }

    /* End of Switch: '<S65>/Switch' */

    /* Switch: '<S63>/Switch' incorporates:
     *  Constant: '<S97>/Calib'
     *  RelationalOperator: '<S63>/Comparison1'
     */
    if (BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mj >=
            KeBTQR_M_OutputTrqDrvrIntGradThresh)
    {
        /* SignalConversion: '<S63>/Signal Conversion' incorporates:
         *  Lookup_n-D: '<S104>/Vector'
         *  Switch: '<S63>/Switch'
         *  Switch: '<S65>/Switch'
         */
        VeBTQR_M_BrkTrqUpGrd = look1_iflf_binlca_16a
            (BTQR_ac_B.VariantMergeForOutportVeBTQR_r_NVRatioLm, ((const float32
               *)&(KxBTQR_M_DrvrIntBrkTrqUpPosGrd[0])), ((const float32 *)
              &(KtBTQR_M_DrvrIntBrkTrqUpPosGrd[0])), 7U);

        /* SignalConversion: '<S63>/Signal Conversion1' incorporates:
         *  Lookup_n-D: '<S102>/Vector'
         *  Switch: '<S63>/Switch'
         *  Switch: '<S65>/Switch'
         */
        VeBTQR_M_BrkTrqDwnGrd = look1_iflf_binlca_16a
            (BTQR_ac_B.VariantMergeForOutportVeBTQR_r_NVRatioLm, ((const float32
               *)&(KxBTQR_M_DrvrIntBrkTrqDwnPosGrd[0])), ((const float32 *)
              &(KtBTQR_M_DrvrIntBrkTrqDwnPosGrd[0])), 7U);
    }
    else
    {
        /* SignalConversion: '<S63>/Signal Conversion' incorporates:
         *  Lookup_n-D: '<S103>/Vector'
         *  Switch: '<S63>/Switch'
         *  Switch: '<S65>/Switch'
         */
        VeBTQR_M_BrkTrqUpGrd = look1_iflf_binlca_16a
            (BTQR_ac_B.VariantMergeForOutportVeBTQR_r_NVRatioLm, ((const float32
               *)&(KxBTQR_M_DrvrIntBrkTrqUpNegGrd[0])), ((const float32 *)
              &(KtBTQR_M_DrvrIntBrkTrqUpNegGrd[0])), 7U);

        /* SignalConversion: '<S63>/Signal Conversion1' incorporates:
         *  Lookup_n-D: '<S101>/Vector'
         *  Switch: '<S63>/Switch'
         *  Switch: '<S65>/Switch'
         */
        VeBTQR_M_BrkTrqDwnGrd = look1_iflf_binlca_16a
            (BTQR_ac_B.VariantMergeForOutportVeBTQR_r_NVRatioLm, ((const float32
               *)&(KxBTQR_M_DrvrIntBrkTrqDwnNegGrd[0])), ((const float32 *)
              &(KtBTQR_M_DrvrIntBrkTrqDwnNegGrd[0])), 7U);
    }

    /* End of Switch: '<S63>/Switch' */

    /* Switch: '<S63>/Switch1' incorporates:
     *  Constant: '<S99>/Calib'
     */
    if (KeBTQR_b_BrakePedalPctEnblOvrr)
    {
        /* Switch: '<S63>/Switch1' incorporates:
         *  Constant: '<S98>/Calib'
         */
        VeBTQR_Pct_BrakePedalPctOvrr = KeBTQR_Pct_BrakePedalPctOvrr;
    }
    else
    {
        /* Switch: '<S63>/Switch1' */
        VeBTQR_Pct_BrakePedalPctOvrr =
            BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bt;
    }

    /* End of Switch: '<S63>/Switch1' */

    /* Lookup_n-D: '<S105>/Vector' incorporates:
     *  Switch: '<S63>/Switch1'
     *  Switch: '<S65>/Switch'
     */
    VeBTQR_Pct_BrkPdlTrqPctReq = look2_iflf_binlca_16a
        (VeBTQR_Pct_BrakePedalPctOvrr,
         BTQR_ac_B.VariantMergeForOutportVeBTQR_r_NVRatioLm, ((const float32 *)
          &(KxBTQR_Pct_BrakePedalPct[0])), ((const float32 *)
          &(KyBTQR_Pct_BrakePedalPct[0])), ((const float32 *)
          &(KtBTQR_Pct_BrakePedalPct[0])), BTQR_ac_ConstP.Vector_maxIndex, 10U);

    /* Product: '<S64>/Divide' incorporates:
     *  Constant: '<S121>/Calib'
     *  Constant: '<S64>/Constant Value6'
     *  Product: '<S64>/Product4'
     */
    VeBTQC_n_VehicleSpdRadpSec = (VeBTQC_v_UnsgndVehicleSpeed * 0.277F) /
        KeBTQR_l_VehWhlRadius;

    /* Product: '<S64>/Product7' incorporates:
     *  Constant: '<S64>/Constant Value7'
     *  Constant: '<S64>/Constant Value8'
     *  Product: '<S64>/Divide1'
     */
    VeBTQC_n_EngineSpdRadpSec =
        (BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b / 60.0F) * 6.28F;

    /* Outputs for Atomic SubSystem: '<S64>/Protected Division' */
    /* Switch: '<S127>/Switch1' incorporates:
     *  Constant: '<S127>/Constant Value'
     *  Constant: '<S127>/Constant Value1'
     *  Constant: '<S127>/Constant Value2'
     *  Constant: '<S127>/Constant Value3'
     *  Logic: '<S127>/AND'
     *  RelationalOperator: '<S127>/Greater Than or Equal '
     *  RelationalOperator: '<S127>/Greater Than or Equal 1'
     *  RelationalOperator: '<S127>/Not Equal'
     *  RelationalOperator: '<S127>/Not Equal1'
     *  Switch: '<S127>/Switch2'
     *  Switch: '<S127>/Switch3'
     */
    if ((VeBTQC_n_VehicleSpdRadpSec != 0.0F) && (VeBTQC_n_EngineSpdRadpSec !=
            0.0F))
    {
        /* Switch: '<S127>/Switch1' incorporates:
         *  Product: '<S127>/Division'
         */
        rtb_Sum2_ex = VeBTQC_n_VehicleSpdRadpSec / VeBTQC_n_EngineSpdRadpSec;
    }
    else if (VeBTQC_n_VehicleSpdRadpSec > 0.0F)
    {
        /* Switch: '<S127>/Switch2' incorporates:
         *  Constant: '<S127>/MAXFLOAT'
         *  Switch: '<S127>/Switch1'
         */
        rtb_Sum2_ex = 3.402823466E+38F;
    }
    else if (VeBTQC_n_VehicleSpdRadpSec < 0.0F)
    {
        /* Switch: '<S127>/Switch3' incorporates:
         *  Constant: '<S127>/MINFLOAT'
         *  Switch: '<S127>/Switch1'
         *  Switch: '<S127>/Switch2'
         */
        rtb_Sum2_ex = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S127>/Switch1' incorporates:
         *  Constant: '<S127>/Constant Value4'
         *  Switch: '<S127>/Switch2'
         *  Switch: '<S127>/Switch3'
         */
        rtb_Sum2_ex = 0.0F;
    }

    /* End of Switch: '<S127>/Switch1' */
    /* End of Outputs for SubSystem: '<S64>/Protected Division' */

    /* Outputs for Atomic SubSystem: '<S64>/Limiter2' */
    /* Switch: '<S125>/Switch1' incorporates:
     *  Constant: '<S64>/Constant Value4'
     *  RelationalOperator: '<S125>/Relational Operator'
     */
    if (1024.0F < rtb_Sum2_ex)
    {
        /* Switch: '<S116>/Switch1' */
        rtb_Sum2_ex = 1024.0F;
    }

    /* End of Switch: '<S125>/Switch1' */

    /* Switch: '<S125>/Switch' incorporates:
     *  Constant: '<S64>/Constant Value5'
     *  RelationalOperator: '<S125>/Relational Operator1'
     */
    if (rtb_Sum2_ex <= 0.0F)
    {
        rtb_Sum2_ex = 0.0F;
    }

    /* End of Switch: '<S125>/Switch' */
    /* End of Outputs for SubSystem: '<S64>/Limiter2' */

    /* Outputs for Atomic SubSystem: '<S64>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S117>/Switch1' incorporates:
     *  Constant: '<S120>/Calib'
     *  Product: '<S117>/Multiplication'
     *  Sum: '<S117>/Subtraction'
     *  Sum: '<S117>/Summation'
     *  UnitDelay: '<S117>/Unit Delay'
     */
    VeBTQC_r_WhlSpInputSpdRatio = ((rtb_Sum2_ex - VeBTQC_r_WhlSpInputSpdRatio) *
        KeBTQR_k_WhlSpInputSpdRatioFltrCnst) + VeBTQC_r_WhlSpInputSpdRatio;

    /* End of Outputs for SubSystem: '<S64>/Digital Lowpass Reset Enabled' */

    /* Product: '<S64>/Divide3' incorporates:
     *  Constant: '<S119>/Calib'
     *  Constant: '<S121>/Calib'
     *  Product: '<S64>/Product1'
     *  Switch: '<S64>/Switch'
     */
    rtb_Sum2_ex = (((float32)
                    ((!BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cn) ? 1 :
                     0)) * KeBTQR_a_MaxDeclG) / KeBTQR_l_VehWhlRadius;

    /* Outputs for Atomic SubSystem: '<S64>/Limiter3' */
    /* Switch: '<S126>/Switch1' incorporates:
     *  Constant: '<S64>/Constant Value15'
     *  RelationalOperator: '<S126>/Relational Operator'
     */
    if (1024.0F < rtb_Sum2_ex)
    {
        /* Switch: '<S116>/Switch1' */
        rtb_Sum2_ex = 1024.0F;
    }

    /* End of Switch: '<S126>/Switch1' */
    /* End of Outputs for SubSystem: '<S64>/Limiter3' */

    /* Lookup_n-D: '<S123>/Vector' incorporates:
     *  Constant: '<S122>/Calib'
     *  Constant: '<S64>/Constant Value11'
     *  MinMax: '<S64>/MinMax2'
     *  Product: '<S64>/Divide4'
     */
    VeBTQR_r_MassFactor = look1_iflf_binlca_16a(fmaxf
        (BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gf /
         KeBTQR_m_BaseVehMass, 1.0F), ((const float32 *)&(KxBTQR_r_MassFactor[0])),
        ((const float32 *)&(KtBTQR_r_MassFactor[0])), 4U);

    /* Lookup_n-D: '<S124>/Vector' incorporates:
     *  Constant: '<S64>/Constant Value10'
     *  MinMax: '<S64>/MinMax3'
     */
    VeBTQR_r_SlopeFactor = look1_iflf_binlca_16a(fminf
        (BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cy, 0.0F), ((const
        float32 *)&(KxBTQR_r_SlopeFactor[0])), ((const float32 *)
        &(KtBTQR_r_SlopeFactor[0])), 4U);

    /* Product: '<S64>/Product2' */
    VeBTQR_r_MassFactorFinal = VeBTQR_r_MassFactor * VeBTQR_r_SlopeFactor;

    /* Outputs for Atomic SubSystem: '<S64>/Limiter3' */
    /* Switch: '<S126>/Switch' incorporates:
     *  Constant: '<S64>/Constant Value16'
     *  RelationalOperator: '<S126>/Relational Operator1'
     */
    if (rtb_Sum2_ex <= 0.0F)
    {
        rtb_Sum2_ex = 0.0F;
    }

    /* End of Switch: '<S126>/Switch' */
    /* End of Outputs for SubSystem: '<S64>/Limiter3' */

    /* Product: '<S64>/Product' incorporates:
     *  Constant: '<S118>/Calib'
     */
    VeBTQC_M_MaxOvrLayRegnBrkTorqWhl = (KeBTQR_J_VehInertia * rtb_Sum2_ex) *
        VeBTQR_r_MassFactorFinal;

    /* Product: '<S64>/Product3' */
    VeBTQC_M_MaxOvrLayRegnBrkTorqFW = VeBTQC_r_WhlSpInputSpdRatio *
        VeBTQC_M_MaxOvrLayRegnBrkTorqWhl;

    /* Product: '<S63>/Product' */
    rtb_Sum2_ex = VeBTQR_Pct_BrkPdlTrqPctReq * VeBTQC_M_MaxOvrLayRegnBrkTorqFW;

    /* Outputs for Atomic SubSystem: '<S63>/Limiter' */
    /* Switch: '<S106>/Switch1' incorporates:
     *  Constant: '<S96>/Calib'
     *  RelationalOperator: '<S106>/Relational Operator'
     */
    if (KeBTQR_M_DrvrIntndedTotBrkTrqMax < rtb_Sum2_ex)
    {
        /* Switch: '<S116>/Switch1' */
        rtb_Sum2_ex = KeBTQR_M_DrvrIntndedTotBrkTrqMax;
    }

    /* End of Switch: '<S106>/Switch1' */

    /* Switch: '<S106>/Switch' incorporates:
     *  Constant: '<S63>/Constant Value1'
     *  RelationalOperator: '<S106>/Relational Operator1'
     */
    if (rtb_Sum2_ex > 0.0F)
    {
        /* Switch: '<S106>/Switch' */
        BTQR_ac_B.VariantMergeForOutportVeBTQR_M_DrvIntndT = rtb_Sum2_ex;
    }
    else
    {
        /* Switch: '<S106>/Switch' */
        BTQR_ac_B.VariantMergeForOutportVeBTQR_M_DrvIntndT = 0.0F;
    }

    /* End of Switch: '<S106>/Switch' */
    /* End of Outputs for SubSystem: '<S63>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S63>/GradientLimiter' */
    /* Sum: '<S95>/Sum2' incorporates:
     *  UnitDelay: '<S95>/Unit Delay'
     */
    rtb_Sum2_ex = BTQR_ac_B.VariantMergeForOutportVeBTQR_M_DrvIntndT -
        VeBTQC_M_DrvrIntndedTotBrkTrqPreFilt;

    /* Outputs for Atomic SubSystem: '<S95>/Limiter' */
    /* Switch: '<S110>/Switch1' incorporates:
     *  RelationalOperator: '<S110>/Relational Operator'
     */
    if (VeBTQR_M_BrkTrqUpGrd < rtb_Sum2_ex)
    {
        /* Switch: '<S110>/Switch1' */
        rtb_Sum2_ex = VeBTQR_M_BrkTrqUpGrd;
    }

    /* End of Switch: '<S110>/Switch1' */

    /* Switch: '<S110>/Switch' incorporates:
     *  RelationalOperator: '<S110>/Relational Operator1'
     */
    if (rtb_Sum2_ex <= VeBTQR_M_BrkTrqDwnGrd)
    {
        rtb_Sum2_ex = VeBTQR_M_BrkTrqDwnGrd;
    }

    /* End of Switch: '<S110>/Switch' */
    /* End of Outputs for SubSystem: '<S95>/Limiter' */

    /* Sum: '<S95>/Sum3' incorporates:
     *  UnitDelay: '<S95>/Unit Delay'
     */
    VeBTQC_M_DrvrIntndedTotBrkTrqPreFilt = rtb_Sum2_ex +
        VeBTQC_M_DrvrIntndedTotBrkTrqPreFilt;

    /* End of Outputs for SubSystem: '<S63>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S63>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S94>/Switch1' incorporates:
     *  Constant: '<S100>/Calib'
     *  Product: '<S94>/Multiplication'
     *  Sum: '<S94>/Subtraction'
     *  Sum: '<S94>/Summation'
     *  UnitDelay: '<S94>/Unit Delay'
     */
    BTQR_ac_DW.UnitDelay_DSTATE_c += (VeBTQC_M_DrvrIntndedTotBrkTrqPreFilt -
        BTQR_ac_DW.UnitDelay_DSTATE_c) * KeBTQR_k_RgnReqFlt;

    /* End of Outputs for SubSystem: '<S63>/Digital Lowpass Reset Enabled' */

    /* Switch: '<S116>/Switch1' incorporates:
     *  Gain: '<S107>/Gain'
     *  Lookup_n-D: '<S111>/Vector'
     *  Sum: '<S107>/Sum1'
     *  UnitDelay: '<S107>/Unit Delay'
     *  UnitDelay: '<S94>/Unit Delay'
     */
    rtb_Sum2_ex = look2_iflf_binlca_16a
        (-BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a,
         BTQR_ac_DW.UnitDelay_DSTATE_c - BTQR_ac_DW.UnitDelay_DSTATE_bm, ((const
           float32 *)&(KxBTQR_t_ReqRegnBrkFltConstT[0])), ((const float32 *)
          &(KyBTQR_t_ReqRegnBrkFltConstT[0])), ((const float32 *)
          &(KtBTQR_t_ReqRegnBrkFltConstT[0])), BTQR_ac_ConstP.Vector_maxIndex_h,
         6U);

    /* Product: '<S112>/Multiplication8' incorporates:
     *  UnitDelay: '<S94>/Unit Delay'
     */
    rtb_Vector_g4 = BTQR_ac_DW.UnitDelay_DSTATE_c * rtb_Sum2_ex;

    /* Sum: '<S112>/Subtraction4' incorporates:
     *  Constant: '<S112>/Constant11'
     */
    rtb_Vector_a = 1.0F - rtb_Sum2_ex;

    /* Outputs for Atomic SubSystem: '<S113>/Limiter1' */
    /* Switch: '<S115>/Switch1' incorporates:
     *  Gain: '<S107>/Gain'
     *  RelationalOperator: '<S115>/Relational Operator'
     *  UnitDelay: '<S112>/Unit Delay2'
     */
    if ((-BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a) <
            BTQR_ac_DW.UnitDelay2_DSTATE_o)
    {
        /* Switch: '<S116>/Switch1' */
        rtb_Sum2_ex = -BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a;
    }
    else
    {
        /* Switch: '<S116>/Switch1' */
        rtb_Sum2_ex = BTQR_ac_DW.UnitDelay2_DSTATE_o;
    }

    /* End of Switch: '<S115>/Switch1' */

    /* Switch: '<S115>/Switch' incorporates:
     *  Constant: '<S113>/Constant'
     *  RelationalOperator: '<S115>/Relational Operator1'
     */
    if (rtb_Sum2_ex <= 0.0F)
    {
        rtb_Sum2_ex = 0.0F;
    }

    /* End of Switch: '<S115>/Switch' */
    /* End of Outputs for SubSystem: '<S113>/Limiter1' */

    /* Sum: '<S112>/Summation6' incorporates:
     *  Product: '<S112>/Multiplication9'
     *  UnitDelay: '<S112>/Unit Delay2'
     */
    BTQR_ac_DW.UnitDelay2_DSTATE_o = (rtb_Vector_a * rtb_Sum2_ex) +
        rtb_Vector_g4;

    /* Outputs for Atomic SubSystem: '<S114>/Limiter1' */
    /* Switch: '<S116>/Switch1' incorporates:
     *  Gain: '<S107>/Gain'
     *  RelationalOperator: '<S116>/Relational Operator'
     *  UnitDelay: '<S112>/Unit Delay2'
     */
    if ((-BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a) <
            BTQR_ac_DW.UnitDelay2_DSTATE_o)
    {
        /* Switch: '<S116>/Switch1' */
        rtb_Sum2_ex = -BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a;
    }
    else
    {
        /* Switch: '<S116>/Switch1' */
        rtb_Sum2_ex = BTQR_ac_DW.UnitDelay2_DSTATE_o;
    }

    /* End of Switch: '<S116>/Switch1' */

    /* Switch: '<S116>/Switch' incorporates:
     *  Constant: '<S114>/Constant'
     *  RelationalOperator: '<S116>/Relational Operator1'
     *  UnitDelay: '<S107>/Unit Delay'
     */
    if (rtb_Sum2_ex > 0.0F)
    {
        BTQR_ac_DW.UnitDelay_DSTATE_bm = rtb_Sum2_ex;
    }
    else
    {
        BTQR_ac_DW.UnitDelay_DSTATE_bm = 0.0F;
    }

    /* End of Switch: '<S116>/Switch' */
    /* End of Outputs for SubSystem: '<S114>/Limiter1' */

    /* VariantMerge generated from: '<S58>/VeBTQR_M_DrvrIntndedTotBrkTrq' incorporates:
     *  Gain: '<S109>/Gain'
     */
    BTQR_ac_B.VariantMergeForOutportVeBTQR_M_DrvrIntnd =
        BTQR_ac_B.VariantMergeForOutportVeBTQR_M_DrvIntndT;

    /* Gain: '<S67>/Gain' incorporates:
     *  Gain: '<S63>/Gain'
     *  MinMax: '<S63>/MinMax1'
     *  Product: '<S62>/Product2'
     *  UnitDelay: '<S94>/Unit Delay'
     */
    BTQR_ac_B.Gain = VeBTQC_Cf_RegnBrkTorqActv4SEM * fminf
        (BTQR_ac_DW.UnitDelay_DSTATE_c,
         -BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a);

    /* Gain: '<S68>/Gain' incorporates:
     *  UnitDelay: '<S107>/Unit Delay'
     */
    BTQR_ac_B.Gain_m = BTQR_ac_DW.UnitDelay_DSTATE_bm;

    /* VariantMerge generated from: '<S58>/VeBTQR_M_RegenBrkAxleTrqReq' incorporates:
     *  Gain: '<S69>/Gain'
     *  Product: '<S62>/Product3'
     *  UnitDelay: '<S107>/Unit Delay'
     */
    BTQR_ac_B.VariantMergeForOutportVeBTQR_M_RegenBrkA =
        BTQR_ac_DW.UnitDelay_DSTATE_bm * VeBTQC_Cf_RegnBrkTorqActv4SEM;

    /* If: '<S66>/If' incorporates:
     *  Constant: '<S131>/Constant'
     *  Constant: '<S132>/Constant'
     */
    if (BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_n == 0.0F)
    {
        /* Outputs for IfAction SubSystem: '<S66>/RegenInActive' incorporates:
         *  ActionPort: '<S134>/Action Port'
         */
        BTQR_ac_RegenInActive(CeBTQR_e_NotApplied, &BTQR_ac_B.Merge_h);

        /* End of Outputs for SubSystem: '<S66>/RegenInActive' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S66>/RegenActive' incorporates:
         *  ActionPort: '<S133>/Action Port'
         */
        BTQR_ac_RegenInActive(CeBTQR_e_Applied, &BTQR_ac_B.Merge_h);

        /* End of Outputs for SubSystem: '<S66>/RegenActive' */
    }

    /* End of If: '<S66>/If' */
    /* End of Outputs for SubSystem: '<S58>/BTQR_FUNC' */
#else

    /* Outputs for Atomic SubSystem: '<S58>/BTQR_MSG' */
    /* Switch: '<S60>/Switch4' incorporates:
     *  Constant: '<S136>/Constant'
     *  Constant: '<S143>/Calib'
     *  RelationalOperator: '<S60>/Relational_Operator'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44'
     */
    if (KeBTQR_b_AVH_GC_GG_Sel)
    {
        rtb_Logical2_a = BTQR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_m;
    }
    else
    {
        rtb_Logical2_a = (((uint32)
                           BTQR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i) ==
                          CeBTQR_e_Active);
    }

    /* End of Switch: '<S60>/Switch4' */

    /* Logic: '<S60>/Logical_Operator1' incorporates:
     *  Constant: '<S137>/Constant'
     *  Constant: '<S142>/Calib'
     *  Constant: '<S144>/Calib'
     *  Logic: '<S60>/Logical_Operator2'
     *  RelationalOperator: '<S60>/Relational_Operator1'
     *  RelationalOperator: '<S60>/Relational_Operator6'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44'
     */
    VeBTQC_b_FakeBrkEna = (((rtb_Logical2_a || (((uint32)
        BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ah) ==
        CePLTR_e_EPBHoldSts_APPLIED)) &&
                            (BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys <
        KeBTQR_Pct_AccPdlNotAppliedLim)) && (KeBTQR_b_CreepCancelEna));

    /* Outputs for Atomic SubSystem: '<S60>/GradientLimiter1' */
    /* Sum: '<S138>/Sum2' incorporates:
     *  Switch: '<S60>/Switch3'
     *  UnitDelay: '<S138>/Unit Delay'
     */
    rtb_Sum2_ex = ((float32)
                   ((!BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e) ? 1 :
                    0)) - BTQR_ac_DW.UnitDelay_DSTATE_e;

    /* Outputs for Atomic SubSystem: '<S138>/Limiter' */
    /* Switch: '<S163>/Switch1' incorporates:
     *  Constant: '<S151>/Calib'
     *  RelationalOperator: '<S163>/Relational Operator'
     */
    if (KeBTQR_r_BrkFailSftPosGrd < rtb_Sum2_ex)
    {
        /* Switch: '<S60>/Switch' */
        rtb_Sum2_ex = KeBTQR_r_BrkFailSftPosGrd;
    }

    /* End of Switch: '<S163>/Switch1' */

    /* Switch: '<S163>/Switch' incorporates:
     *  Constant: '<S150>/Calib'
     *  RelationalOperator: '<S163>/Relational Operator1'
     */
    if (rtb_Sum2_ex <= KeBTQR_r_BrkFailSftNegGrd)
    {
        rtb_Sum2_ex = KeBTQR_r_BrkFailSftNegGrd;
    }

    /* End of Switch: '<S163>/Switch' */
    /* End of Outputs for SubSystem: '<S138>/Limiter' */

    /* Sum: '<S138>/Sum3' incorporates:
     *  UnitDelay: '<S138>/Unit Delay'
     */
    BTQR_ac_DW.UnitDelay_DSTATE_e += rtb_Sum2_ex;

    /* End of Outputs for SubSystem: '<S60>/GradientLimiter1' */

    /* Outputs for Atomic SubSystem: '<S60>/GradientLimiter2' */
    /* Sum: '<S139>/Sum2' incorporates:
     *  Switch: '<S60>/Switch2'
     *  UnitDelay: '<S139>/Unit Delay'
     */
    rtb_Sum2_ex = ((float32)
                   ((!BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l) ? 1 :
                    0)) - BTQR_ac_DW.UnitDelay_DSTATE_b;

    /* Outputs for Atomic SubSystem: '<S139>/Limiter' */
    /* Switch: '<S164>/Switch1' incorporates:
     *  Constant: '<S151>/Calib'
     *  RelationalOperator: '<S164>/Relational Operator'
     */
    if (KeBTQR_r_BrkFailSftPosGrd < rtb_Sum2_ex)
    {
        /* Switch: '<S60>/Switch' */
        rtb_Sum2_ex = KeBTQR_r_BrkFailSftPosGrd;
    }

    /* End of Switch: '<S164>/Switch1' */

    /* Switch: '<S164>/Switch' incorporates:
     *  Constant: '<S150>/Calib'
     *  RelationalOperator: '<S164>/Relational Operator1'
     */
    if (rtb_Sum2_ex <= KeBTQR_r_BrkFailSftNegGrd)
    {
        rtb_Sum2_ex = KeBTQR_r_BrkFailSftNegGrd;
    }

    /* End of Switch: '<S164>/Switch' */
    /* End of Outputs for SubSystem: '<S139>/Limiter' */

    /* Sum: '<S139>/Sum3' incorporates:
     *  UnitDelay: '<S139>/Unit Delay'
     */
    BTQR_ac_DW.UnitDelay_DSTATE_b += rtb_Sum2_ex;

    /* End of Outputs for SubSystem: '<S60>/GradientLimiter2' */

    /* Outputs for Atomic SubSystem: '<S60>/GradientLimiter3' */
    /* Sum: '<S140>/Sum2' incorporates:
     *  Switch: '<S60>/Switch5'
     *  UnitDelay: '<S140>/Unit Delay'
     */
    rtb_Sum2_ex = ((float32)
                   ((!BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_b3) ? 1 :
                    0)) - BTQR_ac_DW.UnitDelay_DSTATE_g;

    /* Outputs for Atomic SubSystem: '<S140>/Limiter' */
    /* Switch: '<S165>/Switch1' incorporates:
     *  Constant: '<S151>/Calib'
     *  RelationalOperator: '<S165>/Relational Operator'
     */
    if (KeBTQR_r_BrkFailSftPosGrd < rtb_Sum2_ex)
    {
        /* Switch: '<S60>/Switch' */
        rtb_Sum2_ex = KeBTQR_r_BrkFailSftPosGrd;
    }

    /* End of Switch: '<S165>/Switch1' */

    /* Switch: '<S165>/Switch' incorporates:
     *  Constant: '<S150>/Calib'
     *  RelationalOperator: '<S165>/Relational Operator1'
     */
    if (rtb_Sum2_ex <= KeBTQR_r_BrkFailSftNegGrd)
    {
        rtb_Sum2_ex = KeBTQR_r_BrkFailSftNegGrd;
    }

    /* End of Switch: '<S165>/Switch' */
    /* End of Outputs for SubSystem: '<S140>/Limiter' */

    /* Sum: '<S140>/Sum3' incorporates:
     *  UnitDelay: '<S140>/Unit Delay'
     */
    BTQR_ac_DW.UnitDelay_DSTATE_g += rtb_Sum2_ex;

    /* End of Outputs for SubSystem: '<S60>/GradientLimiter3' */

    /* Outputs for Atomic SubSystem: '<S60>/Turn_On_Delay_Time' */
    /* Outputs for Atomic SubSystem: '<S162>/EdgeRising' */
    /* Logic: '<S174>/AND' incorporates:
     *  Logic: '<S174>/OR1'
     *  UnitDelay: '<S174>/Unit Delay'
     */
    rtb_AND_b = ((BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_aj) &&
                 (!BTQR_ac_DW.UnitDelay_DSTATE_lk));

    /* Update for UnitDelay: '<S174>/Unit Delay' */
    BTQR_ac_DW.UnitDelay_DSTATE_lk =
        BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_aj;

    /* End of Outputs for SubSystem: '<S162>/EdgeRising' */

    /* Logic: '<S162>/OR1' incorporates:
     *  Logic: '<S162>/AND'
     */
    rtb_Logical2_a = !BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_aj;

    /* Switch: '<S162>/Switch1' incorporates:
     *  Constant: '<S157>/Calib'
     *  Constant: '<S158>/Calib'
     *  Constant: '<S162>/Constant Value1'
     *  Logic: '<S162>/OR'
     *  Logic: '<S162>/OR1'
     *  MinMax: '<S162>/Minimum'
     *  Sum: '<S162>/Summation'
     *  UnitDelay: '<S162>/Unit Delay'
     */
    if (rtb_Logical2_a || rtb_AND_b)
    {
        BTQR_ac_DW.UnitDelay_DSTATE_k = 0.0F;
    }
    else
    {
        BTQR_ac_DW.UnitDelay_DSTATE_k = fminf(KeBTQR_t_TiDebouncerSetRegnReqFA,
            KeBTQR_t_12p5_dT + BTQR_ac_DW.UnitDelay_DSTATE_k);
    }

    /* End of Switch: '<S162>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S60>/GradientLimiter4' */
    /* Sum: '<S141>/Sum2' incorporates:
     *  Constant: '<S158>/Calib'
     *  Logic: '<S162>/AND'
     *  RelationalOperator: '<S162>/Greater  Than'
     *  UnitDelay: '<S141>/Unit Delay'
     *  UnitDelay: '<S162>/Unit Delay'
     */
    rtb_Sum2_ex = ((float32)((rtb_Logical2_a || (BTQR_ac_DW.UnitDelay_DSTATE_k <
                      KeBTQR_t_TiDebouncerSetRegnReqFA)) ? 1 : 0)) -
        BTQR_ac_DW.UnitDelay_DSTATE_i4;

    /* End of Outputs for SubSystem: '<S60>/Turn_On_Delay_Time' */

    /* Outputs for Atomic SubSystem: '<S141>/Limiter' */
    /* Switch: '<S166>/Switch1' incorporates:
     *  Constant: '<S154>/Calib'
     *  RelationalOperator: '<S166>/Relational Operator'
     */
    if (KeBTQR_r_RgnReqFailSftPosGrd < rtb_Sum2_ex)
    {
        /* Switch: '<S60>/Switch' */
        rtb_Sum2_ex = KeBTQR_r_RgnReqFailSftPosGrd;
    }

    /* End of Switch: '<S166>/Switch1' */

    /* Switch: '<S166>/Switch' incorporates:
     *  Constant: '<S153>/Calib'
     *  RelationalOperator: '<S166>/Relational Operator1'
     */
    if (rtb_Sum2_ex <= KeBTQR_r_RgnReqFailSftNegGrd)
    {
        rtb_Sum2_ex = KeBTQR_r_RgnReqFailSftNegGrd;
    }

    /* End of Switch: '<S166>/Switch' */
    /* End of Outputs for SubSystem: '<S141>/Limiter' */

    /* Sum: '<S141>/Sum3' incorporates:
     *  UnitDelay: '<S141>/Unit Delay'
     */
    BTQR_ac_DW.UnitDelay_DSTATE_i4 += rtb_Sum2_ex;

    /* End of Outputs for SubSystem: '<S60>/GradientLimiter4' */

    /* If: '<S60>/If' incorporates:
     *  DataTypeConversion: '<S60>/Data Type Conversion'
     */
    rtPrevAction = BTQR_ac_DW.If_ActiveSubsystem;
    BTQR_ac_DW.If_ActiveSubsystem = (sint8)((!VeBTQC_b_FakeBrkEna) ? 1 : 0);
    if (BTQR_ac_DW.If_ActiveSubsystem == 0)
    {
        if (0 != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S60>/RampIn' incorporates:
             *  ActionPort: '<S160>/Action_Port'
             */
            /* InitializeConditions for If: '<S60>/If' incorporates:
             *  Switch: '<S160>/Switch2'
             *  UnitDelay: '<S160>/Unit Delay'
             *  UnitDelay: '<S160>/Unit Delay1'
             */
            BTQR_ac_DW.UnitDelay1_DSTATE = 0.0F;
            BTQR_ac_DW.UnitDelay_DSTATE_i = 0.0F;

            /* End of InitializeConditions for SubSystem: '<S60>/RampIn' */

            /* SystemReset for IfAction SubSystem: '<S60>/RampIn' incorporates:
             *  ActionPort: '<S160>/Action_Port'
             */
            /* SystemReset for Atomic SubSystem: '<S160>/EdgeRising' */
            /* SystemReset for If: '<S60>/If' incorporates:
             *  UnitDelay: '<S168>/Unit Delay'
             */
            BTQR_ac_DW.UnitDelay_DSTATE_h1 = false;

            /* End of SystemReset for SubSystem: '<S160>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S60>/RampIn' */
        }

        /* Outputs for IfAction SubSystem: '<S60>/RampIn' incorporates:
         *  ActionPort: '<S160>/Action_Port'
         */
        /* Outputs for Atomic SubSystem: '<S160>/EdgeRising' */
        /* Logic: '<S168>/AND' incorporates:
         *  Logic: '<S168>/OR1'
         *  UnitDelay: '<S168>/Unit Delay'
         */
        rtb_Logical2_a = ((VeBTQC_b_FakeBrkEna) &&
                          (!BTQR_ac_DW.UnitDelay_DSTATE_h1));

        /* Update for UnitDelay: '<S168>/Unit Delay' */
        BTQR_ac_DW.UnitDelay_DSTATE_h1 = VeBTQC_b_FakeBrkEna;

        /* End of Outputs for SubSystem: '<S160>/EdgeRising' */

        /* Switch: '<S160>/Switch2' incorporates:
         *  Sum: '<S160>/Add'
         *  UnitDelay: '<S160>/Unit Delay'
         *  UnitDelay: '<S160>/Unit Delay1'
         *  UnitDelay: '<S60>/Unit Delay2'
         */
        if (rtb_Logical2_a)
        {
            BTQR_ac_DW.UnitDelay_DSTATE_i = BTQR_ac_DW.UnitDelay2_DSTATE;
        }

        BTQR_ac_DW.UnitDelay_DSTATE_i += BTQR_ac_DW.UnitDelay1_DSTATE;

        /* End of Switch: '<S160>/Switch2' */

        /* Outputs for Atomic SubSystem: '<S160>/Protected_Division' */
        /* Switch: '<S173>/Switch1' incorporates:
         *  Constant: '<S171>/Calib'
         *  Constant: '<S173>/Constant Value1'
         *  RelationalOperator: '<S173>/Not Equal1'
         */
        if (((float32)Rte_Prm_KeTSXR_r_All_FDRratio_KeTSXR_r_All_FDRratio()) !=
                0.0F)
        {
            /* Switch: '<S173>/Switch1' incorporates:
             *  Constant: '<S160>/Constant_Value'
             *  Product: '<S173>/Division'
             */
            rtb_Sum2_ex = 1.0F / ((float32)
                                  Rte_Prm_KeTSXR_r_All_FDRratio_KeTSXR_r_All_FDRratio
                                  ());
        }
        else
        {
            /* Switch: '<S173>/Switch1' */
            rtb_Sum2_ex = 3.402823466E+38F;
        }

        /* End of Switch: '<S173>/Switch1' */
        /* End of Outputs for SubSystem: '<S160>/Protected_Division' */

        /* Lookup_n-D: '<S172>/Vector' incorporates:
         *  Product: '<S160>/Product1'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtBTQR_MedTEBInport44'
         *  UnitDelay: '<S160>/Unit Delay'
         */
        VeBTQC_k_FakeCreepFactor = look2_iflf_binlca_16a(rtb_Switch6,
            BTQR_ac_DW.UnitDelay_DSTATE_i * rtb_Sum2_ex,
            (Rte_Prm_KxCTCR_k_CreepCancelBlend_KxCTCR_k_CreepCancelBlend()),
            (Rte_Prm_KyCTCR_k_CreepCancelBlend_KyCTCR_k_CreepCancelBlend()),
            (Rte_Prm_KtCTCR_k_CreepCancelBlend_KtCTCR_k_CreepCancelBlend()),
            BTQR_ac_ConstP.Vector_maxIndex_f, 6U);

        /* Switch: '<S160>/Switch7' incorporates:
         *  Constant: '<S157>/Calib'
         *  Constant: '<S160>/Constant'
         *  Constant: '<S169>/Calib'
         *  Constant: '<S170>/Calib'
         *  Product: '<S160>/Product5'
         *  RelationalOperator: '<S160>/Relational_Operator5'
         *  UnitDelay: '<S160>/Unit Delay1'
         */
        if (VeBTQC_k_FakeCreepFactor <= KeBTQR_k_CreepCancelBlendLim)
        {
            BTQR_ac_DW.UnitDelay1_DSTATE = 0.0F;
        }
        else
        {
            BTQR_ac_DW.UnitDelay1_DSTATE = KeBTQR_t_12p5_dT *
                KeBTQR_dM_FakeBrkTrqRampInGrd;
        }

        /* End of Switch: '<S160>/Switch7' */
        /* End of Outputs for SubSystem: '<S60>/RampIn' */
    }

    /* End of If: '<S60>/If' */

    /* Switch: '<S60>/Switch7' incorporates:
     *  Constant: '<S149>/Calib'
     *  Constant: '<S157>/Calib'
     *  Product: '<S60>/Product5'
     *  Sum: '<S60>/Add1'
     *  UnitDelay: '<S160>/Unit Delay'
     *  UnitDelay: '<S60>/Unit Delay2'
     */
    if (VeBTQC_b_FakeBrkEna)
    {
        rtb_Switch6 = BTQR_ac_DW.UnitDelay_DSTATE_i;
    }
    else
    {
        rtb_Switch6 = BTQR_ac_DW.UnitDelay2_DSTATE - (KeBTQR_t_12p5_dT *
            KeBTQR_dM_FakeBrkTrqRampOutGrd);
    }

    /* End of Switch: '<S60>/Switch7' */

    /* MinMax: '<S60>/MinMax2' incorporates:
     *  UnitDelay: '<S60>/Unit Delay2'
     */
    BTQR_ac_DW.UnitDelay2_DSTATE = fmaxf(rtb_Switch6,
        BTQR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_a);

    /* Switch: '<S60>/Switch' incorporates:
     *  Constant: '<S147>/Calib'
     *  Constant: '<S155>/Calib'
     */
    if (KeBTQR_b_OvrTransTrqRatio)
    {
        rtb_Switch6 = KeBTQR_r_TransTrqRatio;
    }
    else
    {
        rtb_Switch6 = BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_c;
    }

    /* End of Switch: '<S60>/Switch' */

    /* Switch: '<S60>/Switch8' incorporates:
     *  Constant: '<S148>/Calib'
     *  Constant: '<S156>/Calib'
     */
    if (KeBTQR_b_OvrTrqCnvRatio)
    {
        rtb_Sum2_ex = KeBTQR_r_TrqCnvRatio;
    }
    else
    {
        rtb_Sum2_ex = BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i;
    }

    /* End of Switch: '<S60>/Switch8' */

    /* Product: '<S60>/Multiplication4' */
    BTQR_ac_B.SignalConversion1 = rtb_Switch6 * rtb_Sum2_ex;

    /* Switch: '<S60>/Switch6' incorporates:
     *  Product: '<S60>/Product3'
     *  UnitDelay: '<S139>/Unit Delay'
     *  UnitDelay: '<S60>/Unit Delay2'
     */
    rtb_Switch6 = BTQR_ac_DW.UnitDelay2_DSTATE * BTQR_ac_DW.UnitDelay_DSTATE_b;

    /* VariantMerge generated from: '<S58>/VeBTQR_M_DrvrIntndedTotBrkTrq' incorporates:
     *  Product: '<S60>/Multiplication1'
     */
    BTQR_ac_B.VariantMergeForOutportVeBTQR_M_DrvrIntnd =
        BTQR_ac_B.SignalConversion1 * rtb_Switch6;

    /* Product: '<S60>/Multiplication10' incorporates:
     *  Product: '<S60>/Product2'
     *  UnitDelay: '<S138>/Unit Delay'
     */
    BTQR_ac_B.Multiplication10 =
        (BTQR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy *
         BTQR_ac_DW.UnitDelay_DSTATE_e) * BTQR_ac_B.SignalConversion1;

    /* Switch: '<S60>/Switch6' incorporates:
     *  Constant: '<S145>/Calib'
     */
    if (!KeBTQR_b_DrvIntndBrkTrqILEOvrrd)
    {
        /* Switch: '<S60>/Switch6' incorporates:
         *  Product: '<S60>/Product1'
         *  UnitDelay: '<S140>/Unit Delay'
         */
        rtb_Switch6 = BTQR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_k *
            BTQR_ac_DW.UnitDelay_DSTATE_g;
    }

    /* End of Switch: '<S60>/Switch6' */

    /* VariantMerge generated from: '<S58>/VeBTQR_M_DrvIntndTotBrkOutTorqILE' incorporates:
     *  Product: '<S60>/Multiplication2'
     */
    BTQR_ac_B.VariantMergeForOutportVeBTQR_M_DrvIntndT =
        BTQR_ac_B.SignalConversion1 * rtb_Switch6;

    /* Switch: '<S60>/Switch9' incorporates:
     *  Constant: '<S146>/Calib'
     *  Logic: '<S60>/Logical_Operator3'
     */
    if ((BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lx) &&
            (KeBTQR_b_OneBrkBoxEnable))
    {
        /* VariantMerge generated from: '<S58>/VeBTQR_M_RegenBrkAxleTrqReq' incorporates:
         *  DataTypeConversion: '<S60>/Data Type Conversion1'
         *  Logic: '<S60>/Logical_Operator'
         *  Lookup_n-D: '<S159>/Vector'
         *  Product: '<S60>/Product6'
         */
        BTQR_ac_B.VariantMergeForOutportVeBTQR_M_RegenBrkA =
            look1_iflf_binlca_16a
            (BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_nn * ((float32)
              ((!BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_j) ? 1 : 0)),
             ((const float32 *)&(KxBTQR_M_OneBrkBoxPctToRgnBrk[0])), ((const
               float32 *)&(KtBTQR_M_OneBrkBoxPctToRgnBrk[0])), 7U);
    }
    else
    {
        /* VariantMerge generated from: '<S58>/VeBTQR_M_RegenBrkAxleTrqReq' incorporates:
         *  Constant: '<S60>/Constant_Value3'
         *  MinMax: '<S60>/MinMax1'
         *  Product: '<S60>/Multiplication3'
         *  Product: '<S60>/Product4'
         *  UnitDelay: '<S141>/Unit Delay'
         */
        BTQR_ac_B.VariantMergeForOutportVeBTQR_M_RegenBrkA = fmaxf
            (BTQR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_n *
             BTQR_ac_DW.UnitDelay_DSTATE_i4, 0.0F) * BTQR_ac_B.SignalConversion1;
    }

    /* End of Switch: '<S60>/Switch9' */

    /* VariantMerge generated from: '<S58>/VeBTQR_r_NVRatioLmtd' incorporates:
     *  Constant: '<S152>/Calib'
     *  Gain: '<S161>/Gain'
     */
    BTQR_ac_B.VariantMergeForOutportVeBTQR_r_NVRatioLm = KeBTQR_r_NVRatioLmtd;

    /* End of Outputs for SubSystem: '<S58>/BTQR_MSG' */
#endif

    /* End of Outputs for SubSystem: '<S27>/Variant_Subsystem' */

    /* SignalConversion generated from: '<S1>/VeBTQC_e_ReqTorqueOverLayActive' */
#if Rte_SysCon_Variant_BTQR_1

    /* Outputs for Function Call SubSystem: '<S1>/BTQD' */

    /* Outputs for Atomic SubSystem: '<S28>/Timer Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S42>/EdgeRising' */
    /* Logic: '<S43>/AND' incorporates:
     *  Logic: '<S43>/OR1'
     *  UnitDelay: '<S43>/Unit Delay'
     */
    rtb_Logical2_a = ((BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f) &&
                      (!BTQR_ac_DW.UnitDelay_DSTATE_h));

    /* Update for UnitDelay: '<S43>/Unit Delay' */
    BTQR_ac_DW.UnitDelay_DSTATE_h =
        BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f;

    /* End of Outputs for SubSystem: '<S42>/EdgeRising' */

    /* Switch: '<S42>/Switch1' incorporates:
     *  Constant: '<S37>/Calib'
     *  Constant: '<S41>/Calib'
     *  Constant: '<S42>/Constant Value3'
     *  Constant: '<S42>/Constant Value4'
     *  Logic: '<S42>/AND1'
     *  MinMax: '<S42>/Maximum'
     *  RelationalOperator: '<S42>/Greater  Than2'
     *  Sum: '<S42>/Subtraction'
     *  UnitDelay: '<S42>/Unit Delay'
     */
    if (rtb_Logical2_a && (BTQR_ac_DW.UnitDelay_DSTATE <= 0.0F))
    {
        BTQR_ac_DW.UnitDelay_DSTATE = KeBTQR_t_DebnTimer;
    }
    else
    {
        BTQR_ac_DW.UnitDelay_DSTATE = fmaxf(BTQR_ac_DW.UnitDelay_DSTATE -
            HeBTQR_t_MedTEB, 0.0F);
    }

    /* End of Switch: '<S42>/Switch1' */
    /* End of Outputs for SubSystem: '<S28>/Timer Reset Trigger Enabled' */

    /* RelationalOperator: '<S35>/Relational Operator3' incorporates:
     *  Constant: '<S35>/Constant3'
     *  S-Function (sfix_bitop): '<S35>/Bitwise Operator2'
     */
    rtb_AND_b = ((((uint32)BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o) &
                  64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S35>/EdgeFalling1' */
    /* Logic: '<S35>/Logical Operator' incorporates:
     *  Logic: '<S45>/OR1'
     */
    rtb_AND_ap = !rtb_AND_b;

    /* End of Outputs for SubSystem: '<S35>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S28>/Timer Reset Trigger Enabled' */
    /* Logic: '<S35>/Logical1' incorporates:
     *  Constant: '<S32>/Calib'
     *  Constant: '<S35>/Constant1'
     *  Constant: '<S36>/Constant1'
     *  Constant: '<S36>/Constant2'
     *  Constant: '<S38>/Calib'
     *  Constant: '<S39>/Calib'
     *  Constant: '<S40>/Calib'
     *  Constant: '<S42>/Constant Value2'
     *  DataStoreRead: '<S36>/StatusByte_LostCommABSCM'
     *  Logic: '<S28>/Logical1'
     *  Logic: '<S28>/Logical2'
     *  Logic: '<S28>/Logical3'
     *  Logic: '<S28>/Logical4'
     *  Logic: '<S28>/Logical_Operator'
     *  Logic: '<S35>/Logical Operator'
     *  Logic: '<S35>/Logical10'
     *  Logic: '<S35>/Logical12'
     *  Logic: '<S36>/Logical Operator'
     *  RelationalOperator: '<S28>/Comparison1'
     *  RelationalOperator: '<S28>/Comparison2'
     *  RelationalOperator: '<S35>/Relational Operator1'
     *  RelationalOperator: '<S36>/Relational Operator1'
     *  RelationalOperator: '<S36>/Relational Operator2'
     *  RelationalOperator: '<S42>/Greater  Than1'
     *  S-Function (sfix_bitop): '<S35>/Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S36>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S36>/Bitwise Operator2'
     *  UnitDelay: '<S42>/Unit Delay'
     */
    rtb_Logical2_a = ((((((((((sint32)BTQR_ac_DW.StatusByte_LostCommABSCM) & 1) <=
                            0) || ((((uint32)BTQR_ac_DW.StatusByte_LostCommABSCM)
        & 64U) != 0U)) && (!BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mw))
                         && (KeBTQD_b_ESPSignalDiagEnbl)) &&
                        ((KeBTQD_U_SysVoltUpperLimit >=
                          BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p) &&
                         (BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p >=
                          KeBTQD_U_SysVoltLowerLimit))) &&
                       (BTQR_ac_DW.UnitDelay_DSTATE <= 0.0F)) &&
                      ((!KeBTQR_b_RBS_U1003_LtchEnbl) || (((((uint32)
                           BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o) &
                          1U) == 0U) || rtb_AND_ap)));

    /* End of Outputs for SubSystem: '<S28>/Timer Reset Trigger Enabled' */

    /* Outputs for Atomic SubSystem: '<S35>/EdgeFalling1' */
    /* Logic: '<S45>/AND' incorporates:
     *  UnitDelay: '<S45>/Unit Delay'
     */
    rtb_AND_ap = (rtb_AND_ap && (BTQR_ac_DW.UnitDelay_DSTATE_gf));

    /* Update for UnitDelay: '<S45>/Unit Delay' */
    BTQR_ac_DW.UnitDelay_DSTATE_gf = rtb_AND_b;

    /* End of Outputs for SubSystem: '<S35>/EdgeFalling1' */

    /* Logic: '<S35>/Logical5' incorporates:
     *  Logic: '<S33>/NOT4'
     */
    rtb_AND_b = (((BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_at) ||
                  (BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k)) ||
                 rtb_AND_ap);

    /* Outputs for Atomic SubSystem: '<S44>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S44>/Counter Reset  Enabled ' */
    /* Switch: '<S51>/Switch1' incorporates:
     *  Logic: '<S34>/Logical7'
     *  Logic: '<S44>/Fail Counter Reset'
     *  Logic: '<S44>/NOT6'
     *  Switch: '<S51>/Switch2'
     *  Switch: '<S52>/Switch1'
     *  UnitDelay: '<S44>/Unit Delay'
     *  UnitDelay: '<S44>/Unit Delay1'
     */
    if ((rtb_AND_b || (BTQR_ac_DW.UnitDelay_DSTATE_gl)) ||
            (BTQR_ac_DW.UnitDelay1_DSTATE_n))
    {
        /* Switch: '<S51>/Switch1' incorporates:
         *  Constant: '<S51>/Constant Value2'
         */
        VeBTQD_Cnt_ESPSystem_PerfFailCnt = 0U;

        /* Switch: '<S52>/Switch1' incorporates:
         *  Constant: '<S52>/Constant Value2'
         */
        VeBTQD_Cnt_ESPSystem_PerfSmpCnt = 0U;
    }
    else
    {
        if (rtb_Logical2_a && (rtb_TmpSignalConversionAtTmpVM_FcnCall_b ||
                               (BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ay)))
        {
            /* Switch: '<S51>/Switch1' incorporates:
             *  Constant: '<S51>/Constant Value1'
             *  Sum: '<S51>/Subtraction'
             *  Switch: '<S51>/Switch2'
             *  UnitDelay: '<S51>/Unit Delay'
             */
            VeBTQD_Cnt_ESPSystem_PerfFailCnt = (uint16)(((uint32)
                VeBTQD_Cnt_ESPSystem_PerfFailCnt) + 1U);
        }

        /* Switch: '<S52>/Switch2' */
        if (rtb_Logical2_a)
        {
            /* Switch: '<S52>/Switch1' incorporates:
             *  Constant: '<S52>/Constant Value1'
             *  Sum: '<S52>/Subtraction'
             *  Switch: '<S52>/Switch2'
             *  UnitDelay: '<S52>/Unit Delay'
             */
            VeBTQD_Cnt_ESPSystem_PerfSmpCnt = (uint16)(((uint32)
                VeBTQD_Cnt_ESPSystem_PerfSmpCnt) + 1U);
        }

        /* End of Switch: '<S52>/Switch2' */
    }

    /* End of Switch: '<S51>/Switch1' */
    /* End of Outputs for SubSystem: '<S44>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S44>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S44>/Greater Than or Equal ' incorporates:
     *  Constant: '<S30>/Calib'
     */
    BTQR_ac_DW.UnitDelay1_DSTATE_n = (VeBTQD_Cnt_ESPSystem_PerfFailCnt >=
        KeBTQD_Cnt_ESPSignalFail);

    /* Logic: '<S44>/NOT5' incorporates:
     *  Constant: '<S31>/Calib'
     *  Logic: '<S44>/NOT3'
     *  RelationalOperator: '<S44>/Less Than  or Equal'
     */
    BTQR_ac_DW.UnitDelay_DSTATE_gl = ((VeBTQD_Cnt_ESPSystem_PerfSmpCnt >=
        KeBTQD_Cnt_ESPSignalPass) && (!BTQR_ac_DW.UnitDelay1_DSTATE_n));

    /* Switch: '<S57>/Switch1' incorporates:
     *  Constant: '<S50>/Constant Value'
     *  DataStoreWrite: '<S26>/Data_Store_Write1'
     *  Switch: '<S56>/Switch1'
     */
    if (BTQR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k)
    {
        BTQR_ac_DW.NeBTQD_Cnt_ESPSignalDiag_MFOP = 0U;
    }
    else
    {
        if (BTQR_ac_DW.UnitDelay_DSTATE_gl)
        {
            /* MinMax: '<S50>/Minimum2' incorporates:
             *  DataStoreRead: '<S26>/Data_Store_Read3'
             *  Switch: '<S56>/Switch1'
             */
            if (VeBTQD_Cnt_ESPSystem_PerfFailCnt >
                    BTQR_ac_DW.NeBTQD_Cnt_ESPSignalDiag_MFOP)
            {
                /* DataStoreWrite: '<S26>/Data_Store_Write1' incorporates:
                 *  Switch: '<S56>/Switch1'
                 */
                BTQR_ac_DW.NeBTQD_Cnt_ESPSignalDiag_MFOP =
                    VeBTQD_Cnt_ESPSystem_PerfFailCnt;
            }

            /* End of MinMax: '<S50>/Minimum2' */
        }
    }

    /* End of Switch: '<S57>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S35>/Fail' incorporates:
     *  EnablePort: '<S47>/Enable'
     */
    if (BTQR_ac_DW.UnitDelay1_DSTATE_n)
    {
        /* Merge: '<S35>/Merge' incorporates:
         *  Constant: '<S53>/Constant'
         *  SignalConversion generated from: '<S47>/FaultSts'
         */
        BTQR_ac_B.Merge = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S35>/Fail' */

    /* Outputs for Enabled SubSystem: '<S35>/Init' incorporates:
     *  EnablePort: '<S48>/Enable'
     */
    if (rtb_AND_b)
    {
        /* Merge: '<S35>/Merge' incorporates:
         *  Constant: '<S54>/Constant'
         *  SignalConversion generated from: '<S48>/FaultSts'
         */
        BTQR_ac_B.Merge = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S35>/Init' */

    /* Outputs for Enabled SubSystem: '<S35>/Pass' incorporates:
     *  EnablePort: '<S49>/Enable'
     */
    if (BTQR_ac_DW.UnitDelay_DSTATE_gl)
    {
        /* Merge: '<S35>/Merge' incorporates:
         *  Constant: '<S55>/Constant'
         *  SignalConversion generated from: '<S49>/FaultSts'
         */
        BTQR_ac_B.Merge = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S35>/Pass' */

    /* End of Outputs for SubSystem: '<S1>/BTQD' */

    /* Outport: '<Root>/VeBTQR_e_ReqTorqueOverLayActive' incorporates:
     *  Merge: '<S66>/Merge'
     */
    (void)Rte_Write_VeBTQR_e_ReqTorqueOverLayActive_Value(BTQR_ac_B.Merge_h);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S1>/VeBTQC_e_ReqTorqueOverLayActive' */

    /* Outport: '<Root>/VeBTQR_M_DrvIntndTotBrkOutTorqILE' incorporates:
     *  SignalConversion generated from: '<S1>/VeBTQR_M_DrvIntndTotBrkOutTorqILE'
     */
    (void)Rte_Write_VeBTQR_M_DrvIntndTotBrkOutTorqILE_Value
        (BTQR_ac_B.VariantMergeForOutportVeBTQR_M_DrvIntndT);

    /* SignalConversion generated from: '<S1>/VeBTQR_M_DrvrIntndedFricBrkTrq' */
#if !Rte_SysCon_Variant_BTQR_1

    /* Outport: '<Root>/VeBTQR_M_DrvrIntndedFricBrkTrq' */
    (void)Rte_Write_VeBTQR_M_DrvrIntndedFricBrkTrq_Value
        (BTQR_ac_B.Multiplication10);

#endif

    /* End of SignalConversion generated from: '<S1>/VeBTQR_M_DrvrIntndedFricBrkTrq' */

    /* Outport: '<Root>/VeBTQR_M_DrvrIntndedTotBrkTrq' incorporates:
     *  SignalConversion generated from: '<S1>/VeBTQR_M_DrvrIntndedTotBrkTrq'
     */
    (void)Rte_Write_VeBTQR_M_DrvrIntndedTotBrkTrq_Value
        (BTQR_ac_B.VariantMergeForOutportVeBTQR_M_DrvrIntnd);

    /* Outport: '<Root>/VeBTQR_M_RegenBrkAxleTrqReq' incorporates:
     *  SignalConversion generated from: '<S1>/VeBTQR_M_RegenBrkAxleTrqReq'
     */
    (void)Rte_Write_VeBTQR_M_RegenBrkAxleTrqReq_Value
        (BTQR_ac_B.VariantMergeForOutportVeBTQR_M_RegenBrkA);

    /* SignalConversion generated from: '<S1>/VeBTQR_M_RegenBrkAxleTrqReq4SEM' incorporates:
     *  SignalConversion generated from: '<S1>/VeBTQR_M_RegenBrkAxleTrqReqRaw'
     *  SignalConversion generated from: '<S1>/VeBTQR_e_FaultSts_RBS_U1003'
     */
#if Rte_SysCon_Variant_BTQR_1

    /* Outport: '<Root>/VeBTQR_M_RegenBrkAxleTrqReq4SEM' */
    (void)Rte_Write_VeBTQR_M_RegenBrkAxleTrqReq4SEM_Value(BTQR_ac_B.Gain);

    /* Outport: '<Root>/VeBTQR_M_RegenBrkAxleTrqReqRaw' */
    (void)Rte_Write_VeBTQR_M_RegenBrkAxleTrqReqRaw_Value(BTQR_ac_B.Gain_m);

    /* Outport: '<Root>/VeBTQR_e_FaultSts_RBS_U1003' incorporates:
     *  Merge: '<S35>/Merge'
     */
    (void)Rte_Write_VeBTQR_e_FaultSts_RBS_U1003_Value(BTQR_ac_B.Merge);

#endif

    /* End of SignalConversion generated from: '<S1>/VeBTQR_M_RegenBrkAxleTrqReq4SEM' */

    /* Outport: '<Root>/VeBTQR_r_NVRatioLmtd' incorporates:
     *  SignalConversion generated from: '<S1>/VeBTQR_r_NVRatioLmtd'
     */
    (void)Rte_Write_VeBTQR_r_NVRatioLmtd_Value
        (BTQR_ac_B.VariantMergeForOutportVeBTQR_r_NVRatioLm);

    /* SignalConversion generated from: '<S1>/VeBTQR_r_TrqDmnConvSumToAxl' */
#if !Rte_SysCon_Variant_BTQR_1

    /* Outport: '<Root>/VeBTQR_r_TrqDmnConvSumToAxl' */
    (void)Rte_Write_VeBTQR_r_TrqDmnConvSumToAxl_Value
        (BTQR_ac_B.SignalConversion1);

#endif

    /* End of SignalConversion generated from: '<S1>/VeBTQR_r_TrqDmnConvSumToAxl' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Output function */
#if Rte_SysCon_Variant_BTQR_2

FUNC(void, BTQR_CODE) FsftBTQR_M_BrkTrq_Driver(void)
{
    /* (no output/update code required) */
}

#endif

/* Output function */
#if Rte_SysCon_Variant_BTQR_2

FUNC(void, BTQR_CODE) FsftBTQR_M_DrvrIntndedFricBrkTrq(void)
{

#if Rte_SysCon_Variant_BTQR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftBTQR_M_DrvrIntndedFricBrkTrq' */
    /* Outport: '<Root>/VeBTQR_b_DrvrIntndedFricBrkTrqFA' incorporates:
     *  Chart: '<S5>/FsftBTQR_M_DrvrIntndedFricBrkTrqChrt'
     *  SignalConversion generated from: '<S5>/VeBTQR_b_DrvrIntndedFricBrkTrqFA'
     */
    /* Gateway: FsftBTQR_M_DrvrIntndedFricBrkTrq/FsftBTQR_M_DrvrIntndedFricBrkTrqChrt */
    /* During: FsftBTQR_M_DrvrIntndedFricBrkTrq/FsftBTQR_M_DrvrIntndedFricBrkTrqChrt */
    /* Entry Internal: FsftBTQR_M_DrvrIntndedFricBrkTrq/FsftBTQR_M_DrvrIntndedFricBrkTrqChrt */
    /* Transition: '<S188>:2' */
    (void)Rte_Write_VeBTQR_b_DrvrIntndedFricBrkTrqFA_Value(true);

    /* Merge: '<Root>/Merge_19_Irv' incorporates:
     *  Chart: '<S5>/FsftBTQR_M_DrvrIntndedFricBrkTrqChrt'
     *  SignalConversion generated from: '<S5>/VeBTQR_b_DrvrIntndedFricBrkTrqFA_write'
     */
    Rte_IrvWrite_FsftBTQR_M_DrvrIntndedFricBrkTrq_DrvrIntndedFricBrkTrqFA_Init_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftBTQR_M_DrvrIntndedFricBrkTrq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BTQR_2

FUNC(void, BTQR_CODE) FsftBTQR_M_DrvrIntndedTotBrkTrq(void)
{

#if Rte_SysCon_Variant_BTQR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftBTQR_M_DrvrIntndedTotBrkTrq' */
    /* Outport: '<Root>/VeBTQR_b_DrvrIntndedTotBrkTrqFA' incorporates:
     *  Chart: '<S6>/FsftBTQR_M_DrvrIntndedTotBrkTrqChrt'
     *  SignalConversion generated from: '<S6>/VeBTQR_b_DrvrIntndedTotBrkTrqFA'
     */
    /* Gateway: FsftBTQR_M_DrvrIntndedTotBrkTrq/FsftBTQR_M_DrvrIntndedTotBrkTrqChrt */
    /* During: FsftBTQR_M_DrvrIntndedTotBrkTrq/FsftBTQR_M_DrvrIntndedTotBrkTrqChrt */
    /* Entry Internal: FsftBTQR_M_DrvrIntndedTotBrkTrq/FsftBTQR_M_DrvrIntndedTotBrkTrqChrt */
    /* Transition: '<S189>:2' */
    (void)Rte_Write_VeBTQR_b_DrvrIntndedTotBrkTrqFA_Value(true);

    /* Merge: '<Root>/Merge_16_Irv' incorporates:
     *  Chart: '<S6>/FsftBTQR_M_DrvrIntndedTotBrkTrqChrt'
     *  SignalConversion generated from: '<S6>/VeBTQR_b_DrvrIntndedTotBrkTrqFA_write'
     */
    Rte_IrvWrite_FsftBTQR_M_DrvrIntndedTotBrkTrq_DrvrIntndedTotBrkTrqFA_Init_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftBTQR_M_DrvrIntndedTotBrkTrq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BTQR_2

FUNC(void, BTQR_CODE) FsftBTQR_M_DrvrIntndedTotBrkTrqILE(void)
{

#if Rte_SysCon_Variant_BTQR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftBTQR_M_DrvrIntndedTotBrkTrqILE' */
    /* Outport: '<Root>/VeBTQR_b_DrvIntndTotBrkOutTorqILEFA' incorporates:
     *  Chart: '<S7>/FsftBTQR_M_DrvrIntndedTotBrkTrqILEChrt'
     *  SignalConversion generated from: '<S7>/VeBTQR_b_DrvrIntndedTotBrkTrqILEFA'
     */
    /* Gateway: FsftBTQR_M_DrvrIntndedTotBrkTrqILE/FsftBTQR_M_DrvrIntndedTotBrkTrqILEChrt */
    /* During: FsftBTQR_M_DrvrIntndedTotBrkTrqILE/FsftBTQR_M_DrvrIntndedTotBrkTrqILEChrt */
    /* Entry Internal: FsftBTQR_M_DrvrIntndedTotBrkTrqILE/FsftBTQR_M_DrvrIntndedTotBrkTrqILEChrt */
    /* Transition: '<S190>:2' */
    (void)Rte_Write_VeBTQR_b_DrvIntndTotBrkOutTorqILEFA_Value(true);

    /* Merge: '<Root>/Merge_22_Irv' incorporates:
     *  Chart: '<S7>/FsftBTQR_M_DrvrIntndedTotBrkTrqILEChrt'
     *  SignalConversion generated from: '<S7>/VeBTQR_b_DrvrIntndedTotBrkTrqILEFA_write'
     */
    Rte_IrvWrite_FsftBTQR_M_DrvrIntndedTotBrkTrqILE_DrvrIntndedTotBrkTrqILEFA_Init_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftBTQR_M_DrvrIntndedTotBrkTrqILE' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BTQR_2

FUNC(void, BTQR_CODE) FsftBTQR_M_RegenBrkAxleTrqReq(void)
{

#if Rte_SysCon_Variant_BTQR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftBTQR_M_RegenBrkAxleTrqReq' */
    /* Outport: '<Root>/VeBTQR_b_RegenBrkAxleTrqReqFA' incorporates:
     *  Chart: '<S8>/FsftBTQR_M_RegenBrkAxleTrqReqChrt'
     *  SignalConversion generated from: '<S8>/VeBTQR_b_RegenBrkAxleTrqReqFA'
     */
    /* Gateway: FsftBTQR_M_RegenBrkAxleTrqReq/FsftBTQR_M_RegenBrkAxleTrqReqChrt */
    /* During: FsftBTQR_M_RegenBrkAxleTrqReq/FsftBTQR_M_RegenBrkAxleTrqReqChrt */
    /* Entry Internal: FsftBTQR_M_RegenBrkAxleTrqReq/FsftBTQR_M_RegenBrkAxleTrqReqChrt */
    /* Transition: '<S191>:2' */
    (void)Rte_Write_VeBTQR_b_RegenBrkAxleTrqReqFA_Value(true);

    /* Merge: '<Root>/Merge_6_Irv' incorporates:
     *  Chart: '<S8>/FsftBTQR_M_RegenBrkAxleTrqReqChrt'
     *  SignalConversion generated from: '<S8>/VeBTQR_b_RegenBrkAxleTrqReqFA_write'
     */
    Rte_IrvWrite_FsftBTQR_M_RegenBrkAxleTrqReq_RegenBrkAxleTrqReqFA_Init_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftBTQR_M_RegenBrkAxleTrqReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BTQR_2

FUNC(void, BTQR_CODE) FsftBTQR_M_RegenBrkFrontOffsetReq(void)
{

#if Rte_SysCon_Variant_BTQR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftBTQR_M_RegenBrkFrontOffsetReq' */
    /* Outport: '<Root>/VeBTQR_b_RegenBrkFrontOffsetReqFA' incorporates:
     *  Chart: '<S9>/FsftBTQR_M_RegenBrkFrontOffsetReqChrt'
     *  SignalConversion generated from: '<S9>/VeBTQR_b_RegenBrkFrontOffsetReqFA'
     */
    /* Gateway: FsftBTQR_M_RegenBrkFrontOffsetReq/FsftBTQR_M_RegenBrkFrontOffsetReqChrt */
    /* During: FsftBTQR_M_RegenBrkFrontOffsetReq/FsftBTQR_M_RegenBrkFrontOffsetReqChrt */
    /* Entry Internal: FsftBTQR_M_RegenBrkFrontOffsetReq/FsftBTQR_M_RegenBrkFrontOffsetReqChrt */
    /* Transition: '<S192>:2' */
    (void)Rte_Write_VeBTQR_b_RegenBrkFrontOffsetReqFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBTQR_M_RegenBrkFrontOffsetReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BTQR_2

FUNC(void, BTQR_CODE) FsftBTQR_M_RegenBrkRearOffsetReq(void)
{

#if Rte_SysCon_Variant_BTQR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftBTQR_M_RegenBrkRearOffsetReq' */
    /* Outport: '<Root>/VeBTQR_b_RegenBrkRearOffsetReqFA' incorporates:
     *  Chart: '<S10>/FsftBTQR_M_RegenBrkRearOffsetReqChrt'
     *  SignalConversion generated from: '<S10>/VeBTQR_b_RegenBrkRearOffsetReqFA'
     */
    /* Gateway: FsftBTQR_M_RegenBrkRearOffsetReq/FsftBTQR_M_RegenBrkRearOffsetReqChrt */
    /* During: FsftBTQR_M_RegenBrkRearOffsetReq/FsftBTQR_M_RegenBrkRearOffsetReqChrt */
    /* Entry Internal: FsftBTQR_M_RegenBrkRearOffsetReq/FsftBTQR_M_RegenBrkRearOffsetReqChrt */
    /* Transition: '<S193>:2' */
    (void)Rte_Write_VeBTQR_b_RegenBrkRearOffsetReqFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBTQR_M_RegenBrkRearOffsetReq' */
#endif

}

#endif

/* Output function */
FUNC(void, BTQR_CODE) FsftBTQR_b_ESCEvntActv(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftBTQR_b_ESCEvntActv' */
    /* Outport: '<Root>/VeBTQR_b_ESCEvntActv' incorporates:
     *  Chart: '<S11>/FsftBTQR_b_ESCEvntActvChrt'
     *  SignalConversion generated from: '<S11>/VeBTQR_b_ESCEvntActv'
     */
    /* Gateway: FsftBTQR_b_ESCEvntActv/FsftBTQR_b_ESCEvntActvChrt */
    /* During: FsftBTQR_b_ESCEvntActv/FsftBTQR_b_ESCEvntActvChrt */
    /* Entry Internal: FsftBTQR_b_ESCEvntActv/FsftBTQR_b_ESCEvntActvChrt */
    /* Transition: '<S194>:2' */
    (void)Rte_Write_VeBTQR_b_ESCEvntActv_Value(false);

    /* Merge: '<Root>/Merge_15' incorporates:
     *  Chart: '<S11>/FsftBTQR_b_ESCEvntActvChrt'
     *  SignalConversion generated from: '<S11>/VeBTQR_b_ESCEvntActvFA_write'
     */
    Rte_IrvWrite_FsftBTQR_b_ESCEvntActv_ESCEvntActvFA_Init_write_IRV(true);

    /* SignalConversion generated from: '<S11>/VeBTQR_b_ESCEvntActv_write' */
#if Rte_SysCon_Variant_BTQR_1

    /* Merge: '<Root>/Merge_14_Irv' */
    Rte_IrvWrite_FsftBTQR_b_ESCEvntActv_ESCEvntActv_Init_write_IRV(false);

#endif

    /* End of SignalConversion generated from: '<S11>/VeBTQR_b_ESCEvntActv_write' */
    /* End of Outputs for SubSystem: '<Root>/FsftBTQR_b_ESCEvntActv' */
}

/* Output function */
#if Rte_SysCon_Variant_BTQR_2

FUNC(void, BTQR_CODE) FsftBTQR_b_RegenBrkActive(void)
{

#if Rte_SysCon_Variant_BTQR_2

    /* Outputs for Function Call SubSystem: '<Root>/FsftBTQR_b_RegenBrkActive' */
    /* Outport: '<Root>/VeBTQR_b_RegenBrkActiveFA' incorporates:
     *  Chart: '<S12>/FsftBTQR_b_RegenBrkActiveChrt'
     *  SignalConversion generated from: '<S12>/VeBTQR_b_RegenBrkActiveFA'
     */
    /* Gateway: FsftBTQR_b_RegenBrkActive/FsftBTQR_b_RegenBrkActiveChrt */
    /* During: FsftBTQR_b_RegenBrkActive/FsftBTQR_b_RegenBrkActiveChrt */
    /* Entry Internal: FsftBTQR_b_RegenBrkActive/FsftBTQR_b_RegenBrkActiveChrt */
    /* Transition: '<S195>:2' */
    (void)Rte_Write_VeBTQR_b_RegenBrkActiveFA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftBTQR_b_RegenBrkActive' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BTQR_1

FUNC(void, BTQR_CODE) PokeBTQR_FricBrakeTest(VAR(uint16, AUTOMATIC)
    LeBTQR_e_FricBrakeTestTyp, VAR(boolean, AUTOMATIC)
    LeBTQR_b_FricBrakeTestEnabl)
{

#if !Rte_SysCon_Variant_BTQR_1

    UNUSED_PARAMETER(LeBTQR_b_FricBrakeTestEnabl);

#endif

    UNUSED_PARAMETER(LeBTQR_e_FricBrakeTestTyp);

#if Rte_SysCon_Variant_BTQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeBTQR_FricBrakeTest' */
    /* Outport: '<Root>/VeBTQR_b_FricBrakeTest_Enabled' incorporates:
     *  SignalConversion generated from: '<S13>/VeBTQR_b_FricBrakeTestEnabl'
     *  SignalConversion generated from: '<S13>/LeBTQR_b_FricBrakeTestEnabl'
     */
    /* Gateway: PokeBTQR_FricBrakeTest/PokeBTQR_FricBrakeTestChrt */
    /* During: PokeBTQR_FricBrakeTest/PokeBTQR_FricBrakeTestChrt */
    /* Entry Internal: PokeBTQR_FricBrakeTest/PokeBTQR_FricBrakeTestChrt */
    /* Transition: '<S196>:2' */
    (void)Rte_Write_VeBTQR_b_FricBrakeTest_Enabled_Value
        (LeBTQR_b_FricBrakeTestEnabl);

    /* Merge: '<Root>/Merge_17_Irv' incorporates:
     *  SignalConversion generated from: '<S13>/LeBTQR_b_FricBrakeTestEnabl'
     *  SignalConversion generated from: '<S13>/VeBTQR_b_FricBrakeTestEnabl_write'
     */
    Rte_IrvWrite_PokeBTQR_FricBrakeTest_FricBrakeTestEnInit_write_IRV
        (LeBTQR_b_FricBrakeTestEnabl);

    /* End of Outputs for SubSystem: '<Root>/PokeBTQR_FricBrakeTest' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BTQR_2

FUNC(void, BTQR_CODE) PokeBTQR_M_BrkTrq_Driver(VAR(float32, AUTOMATIC)
    LeBTQR_M_BrkTrq_Driver, VAR(boolean, AUTOMATIC) LeBTQR_b_BrkTrq_DriverFA)
{

#if Rte_SysCon_Variant_BTQR_2

    float32 rtb_LeBTQR_M_BrkTrq_Driver_out;

#endif

#if !Rte_SysCon_Variant_BTQR_2

    UNUSED_PARAMETER(LeBTQR_M_BrkTrq_Driver);

#endif

#if !Rte_SysCon_Variant_BTQR_2

    UNUSED_PARAMETER(LeBTQR_b_BrkTrq_DriverFA);

#endif

#if Rte_SysCon_Variant_BTQR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeBTQR_M_BrkTrq_Driver' */
    /* Chart: '<S14>/PokeBTQR_M_BrkTrq_DriverChrt' incorporates:
     *  SignalConversion generated from: '<S14>/LeBTQR_M_BrkTrq_Driver'
     *  SignalConversion generated from: '<S14>/LeBTQR_b_BrkTrq_DriverFA'
     */
    /* Gateway: PokeBTQR_M_BrkTrq_Driver/PokeBTQR_M_BrkTrq_DriverChrt */
    /* During: PokeBTQR_M_BrkTrq_Driver/PokeBTQR_M_BrkTrq_DriverChrt */
    /* Entry Internal: PokeBTQR_M_BrkTrq_Driver/PokeBTQR_M_BrkTrq_DriverChrt */
    /* Transition: '<S197>:2' */
    if (!LeBTQR_b_BrkTrq_DriverFA)
    {
        /* Transition: '<S197>:3' */
        /* Transition: '<S197>:15' */
        rtb_LeBTQR_M_BrkTrq_Driver_out = LeBTQR_M_BrkTrq_Driver;

        /* Transition: '<S197>:18' */
    }
    else
    {
        /* Transition: '<S197>:4' */
        rtb_LeBTQR_M_BrkTrq_Driver_out = 0.0F;
    }

    /* End of Chart: '<S14>/PokeBTQR_M_BrkTrq_DriverChrt' */

    /* Outport: '<Root>/VeBTQR_M_BrkTrq_Driver' incorporates:
     *  SignalConversion generated from: '<S14>/VeBTQR_M_BrkTrq_Driver'
     */
    (void)Rte_Write_VeBTQR_M_BrkTrq_Driver_Value(rtb_LeBTQR_M_BrkTrq_Driver_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBTQR_M_BrkTrq_Driver' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BTQR_2

FUNC(void, BTQR_CODE) PokeBTQR_M_DrvrIntndedFricBrkTrq(VAR(float32, AUTOMATIC)
    LeBTQR_M_DrvrIntndedFricBrkTrq, VAR(boolean, AUTOMATIC)
    LeBTQR_b_DrvrIntndedFricBrkTrqFA)
{

#if Rte_SysCon_Variant_BTQR_2

    float32 rtb_LeBTQR_M_DrvrIntndedFricBrkTrq_out;

#endif

#if Rte_SysCon_Variant_BTQR_2

    boolean rtb_LeBTQR_b_DrvrIntndedFricBrkTrqFA_o_b;

#endif

#if !Rte_SysCon_Variant_BTQR_2

    UNUSED_PARAMETER(LeBTQR_M_DrvrIntndedFricBrkTrq);

#endif

#if !Rte_SysCon_Variant_BTQR_2

    UNUSED_PARAMETER(LeBTQR_b_DrvrIntndedFricBrkTrqFA);

#endif

#if Rte_SysCon_Variant_BTQR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeBTQR_M_DrvrIntndedFricBrkTrq' */
    /* Chart: '<S15>/PokeBTQR_M_DrvrIntndedFricBrkTrqChrt' incorporates:
     *  SignalConversion generated from: '<S15>/LeBTQR_M_DrvrIntndedFricBrkTrq'
     *  SignalConversion generated from: '<S15>/LeBTQR_b_DrvrIntndedFricBrkTrqFA'
     */
    /* Gateway: PokeBTQR_M_DrvrIntndedFricBrkTrq/PokeBTQR_M_DrvrIntndedFricBrkTrqChrt */
    /* During: PokeBTQR_M_DrvrIntndedFricBrkTrq/PokeBTQR_M_DrvrIntndedFricBrkTrqChrt */
    /* Entry Internal: PokeBTQR_M_DrvrIntndedFricBrkTrq/PokeBTQR_M_DrvrIntndedFricBrkTrqChrt */
    /* Transition: '<S198>:2' */
    if (!LeBTQR_b_DrvrIntndedFricBrkTrqFA)
    {
        /* Transition: '<S198>:3' */
        /* Transition: '<S198>:15' */
        rtb_LeBTQR_M_DrvrIntndedFricBrkTrq_out = LeBTQR_M_DrvrIntndedFricBrkTrq;
        rtb_LeBTQR_b_DrvrIntndedFricBrkTrqFA_o_b = false;

        /* Transition: '<S198>:18' */
    }
    else
    {
        /* Transition: '<S198>:4' */
        rtb_LeBTQR_M_DrvrIntndedFricBrkTrq_out = 0.0F;
        rtb_LeBTQR_b_DrvrIntndedFricBrkTrqFA_o_b = true;
    }

    /* End of Chart: '<S15>/PokeBTQR_M_DrvrIntndedFricBrkTrqChrt' */

    /* Outport: '<Root>/VeBTQR_b_DrvrIntndedFricBrkTrqFA' incorporates:
     *  SignalConversion generated from: '<S15>/VeBTQR_b_DrvrIntndedFricBrkTrqFA'
     */
    (void)Rte_Write_VeBTQR_b_DrvrIntndedFricBrkTrqFA_Value
        (rtb_LeBTQR_b_DrvrIntndedFricBrkTrqFA_o_b);

    /* Merge: '<Root>/Merge_21' incorporates:
     *  SignalConversion generated from: '<S15>/VeBTQR_M_DrvrIntndedFricBrkTrq_write'
     * */
    Rte_IrvWrite_PokeBTQR_M_DrvrIntndedFricBrkTrq_DrvrIntndedFricBrkTrq_Init_write_IRV
        (rtb_LeBTQR_M_DrvrIntndedFricBrkTrq_out);

    /* Merge: '<Root>/Merge_19_Irv' incorporates:
     *  SignalConversion generated from: '<S15>/VeBTQR_b_DrvrIntndedFricBrkTrqFA_write'
     * */
    Rte_IrvWrite_PokeBTQR_M_DrvrIntndedFricBrkTrq_DrvrIntndedFricBrkTrqFA_Init_write_IRV
        (rtb_LeBTQR_b_DrvrIntndedFricBrkTrqFA_o_b);

    /* End of Outputs for SubSystem: '<Root>/PokeBTQR_M_DrvrIntndedFricBrkTrq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BTQR_2

FUNC(void, BTQR_CODE) PokeBTQR_M_DrvrIntndedTotBrkTrq(VAR(float32, AUTOMATIC)
    LeBTQR_M_DrvrIntndedTotBrkTrq, VAR(boolean, AUTOMATIC)
    LeBTQR_b_DrvrIntndedTotBrkTrqFA)
{

#if Rte_SysCon_Variant_BTQR_2

    float32 rtb_LeBTQR_M_DrvrIntndedTotBrkTrq_out;

#endif

#if Rte_SysCon_Variant_BTQR_2

    boolean rtb_LeBTQR_b_DrvrIntndedTotBrkTrqFA_out;

#endif

#if !Rte_SysCon_Variant_BTQR_2

    UNUSED_PARAMETER(LeBTQR_M_DrvrIntndedTotBrkTrq);

#endif

#if !Rte_SysCon_Variant_BTQR_2

    UNUSED_PARAMETER(LeBTQR_b_DrvrIntndedTotBrkTrqFA);

#endif

#if Rte_SysCon_Variant_BTQR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeBTQR_M_DrvrIntndedTotBrkTrq' */
    /* Chart: '<S16>/PokeBTQR_M_DrvrIntndedTotBrkTrqChrt' incorporates:
     *  SignalConversion generated from: '<S16>/LeBTQR_M_DrvrIntndedTotBrkTrq'
     *  SignalConversion generated from: '<S16>/LeBTQR_b_DrvrIntndedTotBrkTrqFA'
     */
    /* Gateway: PokeBTQR_M_DrvrIntndedTotBrkTrq/PokeBTQR_M_DrvrIntndedTotBrkTrqChrt */
    /* During: PokeBTQR_M_DrvrIntndedTotBrkTrq/PokeBTQR_M_DrvrIntndedTotBrkTrqChrt */
    /* Entry Internal: PokeBTQR_M_DrvrIntndedTotBrkTrq/PokeBTQR_M_DrvrIntndedTotBrkTrqChrt */
    /* Transition: '<S199>:2' */
    if (!LeBTQR_b_DrvrIntndedTotBrkTrqFA)
    {
        /* Transition: '<S199>:3' */
        /* Transition: '<S199>:15' */
        rtb_LeBTQR_M_DrvrIntndedTotBrkTrq_out = LeBTQR_M_DrvrIntndedTotBrkTrq;
        rtb_LeBTQR_b_DrvrIntndedTotBrkTrqFA_out = false;

        /* Transition: '<S199>:18' */
    }
    else
    {
        /* Transition: '<S199>:4' */
        rtb_LeBTQR_M_DrvrIntndedTotBrkTrq_out = 0.0F;
        rtb_LeBTQR_b_DrvrIntndedTotBrkTrqFA_out = true;
    }

    /* End of Chart: '<S16>/PokeBTQR_M_DrvrIntndedTotBrkTrqChrt' */

    /* Outport: '<Root>/VeBTQR_b_DrvrIntndedTotBrkTrqFA' incorporates:
     *  SignalConversion generated from: '<S16>/VeBTQR_b_DrvrIntndedTotBrkTrqFA'
     */
    (void)Rte_Write_VeBTQR_b_DrvrIntndedTotBrkTrqFA_Value
        (rtb_LeBTQR_b_DrvrIntndedTotBrkTrqFA_out);

    /* Merge: '<Root>/Merge_20' incorporates:
     *  SignalConversion generated from: '<S16>/VeBTQR_M_DrvrIntndedTotBrkTrq_write'
     * */
    Rte_IrvWrite_PokeBTQR_M_DrvrIntndedTotBrkTrq_DrvrIntndedTotBrkTrq_Init_write_IRV
        (rtb_LeBTQR_M_DrvrIntndedTotBrkTrq_out);

    /* Merge: '<Root>/Merge_16_Irv' incorporates:
     *  SignalConversion generated from: '<S16>/VeBTQR_b_DrvrIntndedTotBrkTrqFA_write'
     * */
    Rte_IrvWrite_PokeBTQR_M_DrvrIntndedTotBrkTrq_DrvrIntndedTotBrkTrqFA_Init_write_IRV
        (rtb_LeBTQR_b_DrvrIntndedTotBrkTrqFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBTQR_M_DrvrIntndedTotBrkTrq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BTQR_2

FUNC(void, BTQR_CODE) PokeBTQR_M_DrvrIntndedTotBrkTrqILE(VAR(float32, AUTOMATIC)
    LeBTQR_M_DrvrIntndedTotBrkTrqILE, VAR(boolean, AUTOMATIC)
    LeBTQR_b_DrvrIntndedTotBrkTrqILEFA)
{

#if Rte_SysCon_Variant_BTQR_2

    boolean rtb_LeBTQR_b_DrvrIntndedTotBrkTrqILEFA_o;

#endif

#if !Rte_SysCon_Variant_BTQR_2

    UNUSED_PARAMETER(LeBTQR_M_DrvrIntndedTotBrkTrqILE);

#endif

#if !Rte_SysCon_Variant_BTQR_2

    UNUSED_PARAMETER(LeBTQR_b_DrvrIntndedTotBrkTrqILEFA);

#endif

#if Rte_SysCon_Variant_BTQR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeBTQR_M_DrvrIntndedTotBrkTrqILE' */
    /* Chart: '<S17>/PokeBTQR_M_DrvrIntndedTotBrkTrqILEChrt' incorporates:
     *  SignalConversion generated from: '<S17>/LeBTQR_M_DrvrIntndedTotBrkTrqILE'
     *  SignalConversion generated from: '<S17>/LeBTQR_b_DrvrIntndedTotBrkTrqILEFA'
     */
    /* Gateway: PokeBTQR_M_DrvrIntndedTotBrkTrqILE/PokeBTQR_M_DrvrIntndedTotBrkTrqILEChrt */
    /* During: PokeBTQR_M_DrvrIntndedTotBrkTrqILE/PokeBTQR_M_DrvrIntndedTotBrkTrqILEChrt */
    /* Entry Internal: PokeBTQR_M_DrvrIntndedTotBrkTrqILE/PokeBTQR_M_DrvrIntndedTotBrkTrqILEChrt */
    /* Transition: '<S200>:2' */
    if (!LeBTQR_b_DrvrIntndedTotBrkTrqILEFA)
    {
        /* Transition: '<S200>:3' */
        /* Transition: '<S200>:15' */
        BTQR_ac_B.LeBTQR_M_DrvrIntndedTotBrkTrqILE_out =
            LeBTQR_M_DrvrIntndedTotBrkTrqILE;
        rtb_LeBTQR_b_DrvrIntndedTotBrkTrqILEFA_o = false;

        /* Transition: '<S200>:18' */
    }
    else
    {
        /* Transition: '<S200>:4' */
        rtb_LeBTQR_b_DrvrIntndedTotBrkTrqILEFA_o = true;
    }

    /* End of Chart: '<S17>/PokeBTQR_M_DrvrIntndedTotBrkTrqILEChrt' */

    /* Outport: '<Root>/VeBTQR_b_DrvIntndTotBrkOutTorqILEFA' incorporates:
     *  SignalConversion generated from: '<S17>/VeBTQR_b_DrvrIntndedTotBrkTrqILEFA'
     */
    (void)Rte_Write_VeBTQR_b_DrvIntndTotBrkOutTorqILEFA_Value
        (rtb_LeBTQR_b_DrvrIntndedTotBrkTrqILEFA_o);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S17>/VeBTQR_M_DrvrIntndedTotBrkTrqILE_write'
     * */
    Rte_IrvWrite_PokeBTQR_M_DrvrIntndedTotBrkTrqILE_DrvrIntndedTotBrkTrqILE_Init_write_IRV
        (BTQR_ac_B.LeBTQR_M_DrvrIntndedTotBrkTrqILE_out);

    /* Merge: '<Root>/Merge_22_Irv' incorporates:
     *  SignalConversion generated from: '<S17>/VeBTQR_b_DrvrIntndedTotBrkTrqILEFA_write'
     * */
    Rte_IrvWrite_PokeBTQR_M_DrvrIntndedTotBrkTrqILE_DrvrIntndedTotBrkTrqILEFA_Init_write_IRV
        (rtb_LeBTQR_b_DrvrIntndedTotBrkTrqILEFA_o);

    /* End of Outputs for SubSystem: '<Root>/PokeBTQR_M_DrvrIntndedTotBrkTrqILE' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BTQR_2

FUNC(void, BTQR_CODE) PokeBTQR_M_RegenBrkAxleTrqReq(VAR(float32, AUTOMATIC)
    LeBTQR_M_RegenBrkAxleTrqReq, VAR(boolean, AUTOMATIC)
    LeBTQR_b_RegenBrkAxleTrqReqFA)
{

#if Rte_SysCon_Variant_BTQR_2

    boolean rtb_LeBTQR_b_RegenBrkAxleTrqReqFA_out;

#endif

#if !Rte_SysCon_Variant_BTQR_2

    UNUSED_PARAMETER(LeBTQR_M_RegenBrkAxleTrqReq);

#endif

#if !Rte_SysCon_Variant_BTQR_2

    UNUSED_PARAMETER(LeBTQR_b_RegenBrkAxleTrqReqFA);

#endif

#if Rte_SysCon_Variant_BTQR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeBTQR_M_RegenBrkAxleTrqReq' */
    /* Chart: '<S18>/PokeBTQR_M_RegenBrkAxleTrqReqChrt' incorporates:
     *  SignalConversion generated from: '<S18>/LeBTQR_M_RegenBrkAxleTrqReq'
     *  SignalConversion generated from: '<S18>/LeBTQR_b_RegenBrkAxleTrqReqFA'
     */
    /* Gateway: PokeBTQR_M_RegenBrkAxleTrqReq/PokeBTQR_M_RegenBrkAxleTrqReqChrt */
    /* During: PokeBTQR_M_RegenBrkAxleTrqReq/PokeBTQR_M_RegenBrkAxleTrqReqChrt */
    /* Entry Internal: PokeBTQR_M_RegenBrkAxleTrqReq/PokeBTQR_M_RegenBrkAxleTrqReqChrt */
    /* Transition: '<S201>:2' */
    if (!LeBTQR_b_RegenBrkAxleTrqReqFA)
    {
        /* Transition: '<S201>:3' */
        /* Transition: '<S201>:15' */
        BTQR_ac_B.LeBTQR_M_RegenBrkAxleTrqReq_out = LeBTQR_M_RegenBrkAxleTrqReq;
        rtb_LeBTQR_b_RegenBrkAxleTrqReqFA_out = false;

        /* Transition: '<S201>:18' */
    }
    else
    {
        /* Transition: '<S201>:4' */
        rtb_LeBTQR_b_RegenBrkAxleTrqReqFA_out = true;
    }

    /* End of Chart: '<S18>/PokeBTQR_M_RegenBrkAxleTrqReqChrt' */

    /* Outport: '<Root>/VeBTQR_b_RegenBrkAxleTrqReqFA' incorporates:
     *  SignalConversion generated from: '<S18>/VeBTQR_b_RegenBrkAxleTrqReqFA'
     */
    (void)Rte_Write_VeBTQR_b_RegenBrkAxleTrqReqFA_Value
        (rtb_LeBTQR_b_RegenBrkAxleTrqReqFA_out);

    /* Merge: '<Root>/Merge_5' incorporates:
     *  SignalConversion generated from: '<S18>/VeBTQR_M_RegenBrkAxleTrqReq_write'
     * */
    Rte_IrvWrite_PokeBTQR_M_RegenBrkAxleTrqReq_RegenBrkAxleTrqReq_Init_write_IRV
        (BTQR_ac_B.LeBTQR_M_RegenBrkAxleTrqReq_out);

    /* Merge: '<Root>/Merge_6_Irv' incorporates:
     *  SignalConversion generated from: '<S18>/VeBTQR_b_RegenBrkAxleTrqReqFA_write'
     * */
    Rte_IrvWrite_PokeBTQR_M_RegenBrkAxleTrqReq_RegenBrkAxleTrqReqFA_Init_write_IRV
        (rtb_LeBTQR_b_RegenBrkAxleTrqReqFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBTQR_M_RegenBrkAxleTrqReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BTQR_2

FUNC(void, BTQR_CODE) PokeBTQR_M_RegenBrkFrontOffsetReq(VAR(float32, AUTOMATIC)
    LeBTQR_M_RegenBrkFrontOffsetReq, VAR(boolean, AUTOMATIC)
    LeBTQR_b_RegenBrkFrontOffsetReqFA)
{

#if Rte_SysCon_Variant_BTQR_2

    boolean rtb_LeBTQR_b_RegenBrkFrontOffsetReqFA_ou;

#endif

#if !Rte_SysCon_Variant_BTQR_2

    UNUSED_PARAMETER(LeBTQR_M_RegenBrkFrontOffsetReq);

#endif

#if !Rte_SysCon_Variant_BTQR_2

    UNUSED_PARAMETER(LeBTQR_b_RegenBrkFrontOffsetReqFA);

#endif

#if Rte_SysCon_Variant_BTQR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeBTQR_M_RegenBrkFrontOffsetReq' */
    /* Chart: '<S19>/PokeBTQR_M_RegenBrkFrontOffsetReqChrt' incorporates:
     *  SignalConversion generated from: '<S19>/LeBTQR_M_RegenBrkFrontOffsetReq'
     *  SignalConversion generated from: '<S19>/LeBTQR_b_RegenBrkFrontOffsetReqFA'
     */
    /* Gateway: PokeBTQR_M_RegenBrkFrontOffsetReq/PokeBTQR_M_RegenBrkFrontOffsetReqChrt */
    /* During: PokeBTQR_M_RegenBrkFrontOffsetReq/PokeBTQR_M_RegenBrkFrontOffsetReqChrt */
    /* Entry Internal: PokeBTQR_M_RegenBrkFrontOffsetReq/PokeBTQR_M_RegenBrkFrontOffsetReqChrt */
    /* Transition: '<S202>:2' */
    if (!LeBTQR_b_RegenBrkFrontOffsetReqFA)
    {
        /* Transition: '<S202>:3' */
        /* Transition: '<S202>:15' */
        BTQR_ac_B.LeBTQR_M_RegenBrkFrontOffsetReq_out =
            LeBTQR_M_RegenBrkFrontOffsetReq;
        rtb_LeBTQR_b_RegenBrkFrontOffsetReqFA_ou = false;

        /* Transition: '<S202>:18' */
    }
    else
    {
        /* Transition: '<S202>:4' */
        rtb_LeBTQR_b_RegenBrkFrontOffsetReqFA_ou = true;
    }

    /* End of Chart: '<S19>/PokeBTQR_M_RegenBrkFrontOffsetReqChrt' */

    /* Outport: '<Root>/VeBTQR_M_RegenBrkFrontOffsetReq' incorporates:
     *  SignalConversion generated from: '<S19>/VeBTQR_M_RegenBrkFrontOffsetReq'
     */
    (void)Rte_Write_VeBTQR_M_RegenBrkFrontOffsetReq_Value
        (BTQR_ac_B.LeBTQR_M_RegenBrkFrontOffsetReq_out);

    /* Outport: '<Root>/VeBTQR_b_RegenBrkFrontOffsetReqFA' incorporates:
     *  SignalConversion generated from: '<S19>/VeBTQR_b_RegenBrkFrontOffsetReqFA'
     */
    (void)Rte_Write_VeBTQR_b_RegenBrkFrontOffsetReqFA_Value
        (rtb_LeBTQR_b_RegenBrkFrontOffsetReqFA_ou);

    /* End of Outputs for SubSystem: '<Root>/PokeBTQR_M_RegenBrkFrontOffsetReq' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BTQR_2

FUNC(void, BTQR_CODE) PokeBTQR_M_RegenBrkRearOffsetReq(VAR(float32, AUTOMATIC)
    LeBTQR_M_RegenBrkRearOffsetReq, VAR(boolean, AUTOMATIC)
    LeBTQR_b_RegenBrkRearOffsetReqFA)
{

#if Rte_SysCon_Variant_BTQR_2

    boolean rtb_LeBTQR_b_RegenBrkRearOffsetReqFA_out;

#endif

#if !Rte_SysCon_Variant_BTQR_2

    UNUSED_PARAMETER(LeBTQR_M_RegenBrkRearOffsetReq);

#endif

#if !Rte_SysCon_Variant_BTQR_2

    UNUSED_PARAMETER(LeBTQR_b_RegenBrkRearOffsetReqFA);

#endif

#if Rte_SysCon_Variant_BTQR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeBTQR_M_RegenBrkRearOffsetReq' */
    /* Chart: '<S20>/PokeBTQR_M_RegenBrkRearOffsetReqChrt' incorporates:
     *  SignalConversion generated from: '<S20>/LeBTQR_M_RegenBrkRearOffsetReq'
     *  SignalConversion generated from: '<S20>/LeBTQR_b_RegenBrkRearOffsetReqFA'
     */
    /* Gateway: PokeBTQR_M_RegenBrkRearOffsetReq/PokeBTQR_M_RegenBrkRearOffsetReqChrt */
    /* During: PokeBTQR_M_RegenBrkRearOffsetReq/PokeBTQR_M_RegenBrkRearOffsetReqChrt */
    /* Entry Internal: PokeBTQR_M_RegenBrkRearOffsetReq/PokeBTQR_M_RegenBrkRearOffsetReqChrt */
    /* Transition: '<S203>:2' */
    if (!LeBTQR_b_RegenBrkRearOffsetReqFA)
    {
        /* Transition: '<S203>:3' */
        /* Transition: '<S203>:15' */
        BTQR_ac_B.LeBTQR_M_RegenBrkRearOffsetReq_out =
            LeBTQR_M_RegenBrkRearOffsetReq;
        rtb_LeBTQR_b_RegenBrkRearOffsetReqFA_out = false;

        /* Transition: '<S203>:18' */
    }
    else
    {
        /* Transition: '<S203>:4' */
        rtb_LeBTQR_b_RegenBrkRearOffsetReqFA_out = true;
    }

    /* End of Chart: '<S20>/PokeBTQR_M_RegenBrkRearOffsetReqChrt' */

    /* Outport: '<Root>/VeBTQR_M_RegenBrkRearOffsetReq' incorporates:
     *  SignalConversion generated from: '<S20>/VeBTQR_M_RegenBrkRearOffsetReq'
     */
    (void)Rte_Write_VeBTQR_M_RegenBrkRearOffsetReq_Value
        (BTQR_ac_B.LeBTQR_M_RegenBrkRearOffsetReq_out);

    /* Outport: '<Root>/VeBTQR_b_RegenBrkRearOffsetReqFA' incorporates:
     *  SignalConversion generated from: '<S20>/VeBTQR_b_RegenBrkRearOffsetReqFA'
     */
    (void)Rte_Write_VeBTQR_b_RegenBrkRearOffsetReqFA_Value
        (rtb_LeBTQR_b_RegenBrkRearOffsetReqFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBTQR_M_RegenBrkRearOffsetReq' */
#endif

}

#endif

/* Output function */
FUNC(void, BTQR_CODE) PokeBTQR_b_ESCEvntActv(VAR(boolean, AUTOMATIC)
    LeBTQR_b_ESCEvntActv, VAR(boolean, AUTOMATIC) LeBTQR_b_ESCEvntActvFA)
{
    boolean rtb_LeBTQR_b_ESCEvntActvFA_out;

#if Rte_SysCon_Variant_BTQR_1

    boolean rtb_SignalConversion_VeBTQR_b_ESCEvntAct;

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeBTQR_b_ESCEvntActv' */
    /* Chart: '<S21>/PokeBTQR_b_ESCEvntActvChrt' incorporates:
     *  SignalConversion generated from: '<S21>/LeBTQR_b_ESCEvntActvFA'
     *  SignalConversion generated from: '<S21>/LeBTQR_b_ESCEvntActv'
     */
    /* Gateway: PokeBTQR_b_ESCEvntActv/PokeBTQR_b_ESCEvntActvChrt */
    /* During: PokeBTQR_b_ESCEvntActv/PokeBTQR_b_ESCEvntActvChrt */
    /* Entry Internal: PokeBTQR_b_ESCEvntActv/PokeBTQR_b_ESCEvntActvChrt */
    /* Transition: '<S204>:2' */
    if (!LeBTQR_b_ESCEvntActvFA)
    {
        /* Transition: '<S204>:3' */
        /* Transition: '<S204>:15' */
        BTQR_ac_B.LeBTQR_b_ESCEvntActv_out = LeBTQR_b_ESCEvntActv;
        rtb_LeBTQR_b_ESCEvntActvFA_out = false;

        /* Transition: '<S204>:18' */
    }
    else
    {
        /* Transition: '<S204>:4' */
        rtb_LeBTQR_b_ESCEvntActvFA_out = true;
    }

    /* End of Chart: '<S21>/PokeBTQR_b_ESCEvntActvChrt' */

    /* Outport: '<Root>/VeBTQR_b_ESCEvntActv' incorporates:
     *  SignalConversion generated from: '<S21>/VeBTQR_b_ESCEvntActv'
     */
    (void)Rte_Write_VeBTQR_b_ESCEvntActv_Value
        (BTQR_ac_B.LeBTQR_b_ESCEvntActv_out);

    /* SignalConversion generated from: '<S21>/PokeBTQR_b_ESCEvntActvChrt' */
#if Rte_SysCon_Variant_BTQR_1

    /* SignalConversion generated from: '<S21>/PokeBTQR_b_ESCEvntActvChrt' */
    rtb_SignalConversion_VeBTQR_b_ESCEvntAct =
        BTQR_ac_B.LeBTQR_b_ESCEvntActv_out;

#endif

    /* End of SignalConversion generated from: '<S21>/PokeBTQR_b_ESCEvntActvChrt' */

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S21>/VeBTQR_b_ESCEvntActvFA_write'
     * */
    Rte_IrvWrite_PokeBTQR_b_ESCEvntActv_ESCEvntActvFA_Init_write_IRV
        (rtb_LeBTQR_b_ESCEvntActvFA_out);

    /* SignalConversion generated from: '<S21>/VeBTQR_b_ESCEvntActv_write' */
#if Rte_SysCon_Variant_BTQR_1

    /* Merge: '<Root>/Merge_14_Irv' */
    Rte_IrvWrite_PokeBTQR_b_ESCEvntActv_ESCEvntActv_Init_write_IRV
        (rtb_SignalConversion_VeBTQR_b_ESCEvntAct);

#endif

    /* End of SignalConversion generated from: '<S21>/VeBTQR_b_ESCEvntActv_write' */
    /* End of Outputs for SubSystem: '<Root>/PokeBTQR_b_ESCEvntActv' */
}

/* Output function */
#if Rte_SysCon_Variant_BTQR_2

FUNC(void, BTQR_CODE) PokeBTQR_b_HNGActv(VAR(boolean, AUTOMATIC)
    LeBTQR_b_HNGActv)
{

#if !Rte_SysCon_Variant_BTQR_2

    UNUSED_PARAMETER(LeBTQR_b_HNGActv);

#endif

#if Rte_SysCon_Variant_BTQR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeBTQR_b_HNGActv' */
    /* Merge: '<Root>/Merge_12' incorporates:
     *  SignalConversion generated from: '<S22>/LeBTQR_b_HNGActv'
     *  SignalConversion generated from: '<S22>/VeBTQR_b_HNGActv_write'
     */
    /* Gateway: PokeBTQR_b_HNGActv/PokeBTQR_b_HNGActvChrt */
    /* During: PokeBTQR_b_HNGActv/PokeBTQR_b_HNGActvChrt */
    /* Entry Internal: PokeBTQR_b_HNGActv/PokeBTQR_b_HNGActvChrt */
    /* Transition: '<S205>:2' */
    Rte_IrvWrite_PokeBTQR_b_HNGActv_HNGActv_Init_write_IRV(LeBTQR_b_HNGActv);

    /* End of Outputs for SubSystem: '<Root>/PokeBTQR_b_HNGActv' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BTQR_2

FUNC(void, BTQR_CODE) PokeBTQR_b_RegenBrkActive(VAR(boolean, AUTOMATIC)
    LeBTQR_b_RegenBrkActive, VAR(boolean, AUTOMATIC) LeBTQR_b_RegenBrkActiveFA)
{

#if Rte_SysCon_Variant_BTQR_2

    boolean rtb_LeBTQR_b_RegenBrkActiveFA_out;

#endif

#if !Rte_SysCon_Variant_BTQR_2

    UNUSED_PARAMETER(LeBTQR_b_RegenBrkActive);

#endif

#if !Rte_SysCon_Variant_BTQR_2

    UNUSED_PARAMETER(LeBTQR_b_RegenBrkActiveFA);

#endif

#if Rte_SysCon_Variant_BTQR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeBTQR_b_RegenBrkActive' */
    /* Chart: '<S23>/PokeBTQR_b_RegenBrkActiveChrt' incorporates:
     *  SignalConversion generated from: '<S23>/LeBTQR_b_RegenBrkActiveFA'
     *  SignalConversion generated from: '<S23>/LeBTQR_b_RegenBrkActive'
     */
    /* Gateway: PokeBTQR_b_RegenBrkActive/PokeBTQR_b_RegenBrkActiveChrt */
    /* During: PokeBTQR_b_RegenBrkActive/PokeBTQR_b_RegenBrkActiveChrt */
    /* Entry Internal: PokeBTQR_b_RegenBrkActive/PokeBTQR_b_RegenBrkActiveChrt */
    /* Transition: '<S206>:2' */
    if (!LeBTQR_b_RegenBrkActiveFA)
    {
        /* Transition: '<S206>:3' */
        /* Transition: '<S206>:15' */
        BTQR_ac_B.LeBTQR_b_RegenBrkActive_out = LeBTQR_b_RegenBrkActive;
        rtb_LeBTQR_b_RegenBrkActiveFA_out = false;

        /* Transition: '<S206>:18' */
    }
    else
    {
        /* Transition: '<S206>:4' */
        rtb_LeBTQR_b_RegenBrkActiveFA_out = true;
    }

    /* End of Chart: '<S23>/PokeBTQR_b_RegenBrkActiveChrt' */

    /* Outport: '<Root>/VeBTQR_b_RegenBrkActive' incorporates:
     *  SignalConversion generated from: '<S23>/VeBTQR_b_RegenBrkActive'
     */
    (void)Rte_Write_VeBTQR_b_RegenBrkActive_Value
        (BTQR_ac_B.LeBTQR_b_RegenBrkActive_out);

    /* Outport: '<Root>/VeBTQR_b_RegenBrkActiveFA' incorporates:
     *  SignalConversion generated from: '<S23>/VeBTQR_b_RegenBrkActiveFA'
     */
    (void)Rte_Write_VeBTQR_b_RegenBrkActiveFA_Value
        (rtb_LeBTQR_b_RegenBrkActiveFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeBTQR_b_RegenBrkActive' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BTQR_1

FUNC(void, BTQR_CODE) PokeBTQR_b_RollsModeAct(VAR(boolean, AUTOMATIC)
    LeBTQR_b_RollsModeAct)
{

#if !Rte_SysCon_Variant_BTQR_1

    UNUSED_PARAMETER(LeBTQR_b_RollsModeAct);

#endif

#if Rte_SysCon_Variant_BTQR_1

    /* Outputs for Function Call SubSystem: '<Root>/PokeBTQR_b_RollsModeAct' */
    /* Merge: '<Root>/Merge_18' incorporates:
     *  SignalConversion generated from: '<S24>/LeBTQR_b_RollsModeAct'
     *  SignalConversion generated from: '<S24>/VeBTQR_b_RollsModeAct_write'
     */
    /* Gateway: PokeBTQR_b_RollsModeAct/PokeBTQR_b_RollsModeActChrt */
    /* During: PokeBTQR_b_RollsModeAct/PokeBTQR_b_RollsModeActChrt */
    /* Entry Internal: PokeBTQR_b_RollsModeAct/PokeBTQR_b_RollsModeActChrt */
    /* Transition: '<S207>:2' */
    Rte_IrvWrite_PokeBTQR_b_RollsModeAct_RollsModeAct_Init_write_IRV
        (LeBTQR_b_RollsModeAct);

    /* End of Outputs for SubSystem: '<Root>/PokeBTQR_b_RollsModeAct' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_BTQR_2

FUNC(void, BTQR_CODE) PokeBTQR_e_AVHSts(VAR(TeBTQR_e_AVHSts, AUTOMATIC)
    LeBTQR_e_AVHSts)
{

#if !Rte_SysCon_Variant_BTQR_2

    UNUSED_PARAMETER(LeBTQR_e_AVHSts);

#endif

#if Rte_SysCon_Variant_BTQR_2

    /* Outputs for Function Call SubSystem: '<Root>/PokeBTQR_e_AVHSts' */
    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S25>/LeBTQR_e_AVHSts'
     *  SignalConversion generated from: '<S25>/VeBTQR_e_AVHSts_write'
     */
    /* Gateway: PokeBTQR_e_AVHSts/PokeBTQR_e_AVHStsChrt */
    /* During: PokeBTQR_e_AVHSts/PokeBTQR_e_AVHStsChrt */
    /* Entry Internal: PokeBTQR_e_AVHSts/PokeBTQR_e_AVHStsChrt */
    /* Transition: '<S208>:2' */
    Rte_IrvWrite_PokeBTQR_e_AVHSts_AVHSts_Init_write_IRV(LeBTQR_e_AVHSts);

    /* End of Outputs for SubSystem: '<Root>/PokeBTQR_e_AVHSts' */
#endif

}

#endif

/* Output function */
FUNC(void, BTQR_CODE) BTQR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/BTQR_PwrOff'
     */
    /* Outport: '<Root>/NeBTQD_Cnt_ESPSignalDiag_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeBTQD_Cnt_ESPSignalDiag_MFOP'
     */
    (void)Rte_Write_NeBTQD_Cnt_ESPSignalDiag_MFOP_NeBTQD_Cnt_ESPSignalDiag_MFOP
        (BTQR_ac_DW.NeBTQD_Cnt_ESPSignalDiag_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, BTQR_CODE) BTQR_PwrOn(void)
{

#if Rte_SysCon_Variant_BTQR_2

    float32 rtb_OutportBufferForDrvrIntndedFricBrkTr;

#endif

#if Rte_SysCon_Variant_BTQR_2

    float32 rtb_OutportBufferForDrvrIntndedTotBrkTrq;

#endif

#if Rte_SysCon_Variant_BTQR_2

    float32 rtb_OutportBufferForDrvrIntndedTotBrkT_j;

#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean rtb_OutportBufferForFricBrakeTestEnInit_;

#endif

#if Rte_SysCon_Variant_BTQR_2

    boolean rtb_OutportBufferForHNGActv_Init_write;

#endif

#if Rte_SysCon_Variant_BTQR_2

    float32 rtb_OutportBufferForRegenBrkAxleTrqReq_I;

#endif

#if Rte_SysCon_Variant_BTQR_1

    boolean rtb_OutportBufferForRollsModeAct_Init_wr;

#endif

#if Rte_SysCon_Variant_BTQR_2

    TeBTQR_e_AVHSts rtb_OutportBufferForAVHSts_Init_write;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/BTQR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S176>/NeBTQD_Cnt_ESPSignalDiag_MFOP' incorporates:
     *  Inport: '<Root>/NeBTQD_Cnt_ESPSignalDiag_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeBTQD_Cnt_ESPSignalDiag_MFOP_Rx_NeBTQD_Cnt_ESPSignalDiag_MFOP(
        &BTQR_ac_DW.NeBTQD_Cnt_ESPSignalDiag_MFOP);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Init_BTQI'
     */
    /* SignalConversion generated from: '<S177>/RegenBrkAxleTrqReq_Init' incorporates:
     *  SignalConversion generated from: '<S177>/DrvrIntndedTotBrkTrq_Init'
     */
#if Rte_SysCon_Variant_BTQR_2

    /* SignalConversion generated from: '<S177>/RegenBrkAxleTrqReq_Init' */
    BTQR_ac_B.OutportBufferForRegenBrkAxleTrqReq_Init = 0.0F;

    /* SignalConversion generated from: '<S177>/DrvrIntndedTotBrkTrq_Init' */
    BTQR_ac_B.OutportBufferForDrvrIntndedTotBrkTrq_Ini = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S177>/RegenBrkAxleTrqReq_Init' */

    /* SignalConversion generated from: '<S177>/RegenBrkAxleTrqReqFA_Init' */
    BTQR_ac_B.OutportBufferForRegenBrkAxleTrqReqFA_Ini = false;

    /* SignalConversion generated from: '<S177>/DrvrIntndedTotBrkTrqFA_Init' */
    BTQR_ac_B.OutportBufferForDrvrIntndedTotBrkTrqFA_I = false;

    /* SignalConversion generated from: '<S177>/DrvrIntndedFricBrkTrq_Init' incorporates:
     *  SignalConversion generated from: '<S177>/DrvrIntndedTotBrkTrqILE_Init'
     */
#if Rte_SysCon_Variant_BTQR_2

    /* SignalConversion generated from: '<S177>/DrvrIntndedFricBrkTrq_Init' */
    BTQR_ac_B.OutportBufferForDrvrIntndedFricBrkTrq_In = 0.0F;

    /* SignalConversion generated from: '<S177>/DrvrIntndedTotBrkTrqILE_Init' */
    BTQR_ac_B.OutportBufferForDrvrIntndedTotBrkTrqILE_ = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S177>/DrvrIntndedFricBrkTrq_Init' */

    /* SignalConversion generated from: '<S177>/DrvrIntndedFricBrkTrqFA_Init' */
    BTQR_ac_B.OutportBufferForDrvrIntndedFricBrkTrqFA_ = false;

    /* SignalConversion generated from: '<S177>/DrvrIntndedTotBrkTrqILEFA_Init' */
    BTQR_ac_B.OutportBufferForDrvrIntndedTotBrkTrqILEF = false;

    /* SignalConversion generated from: '<S177>/RegenBrkActive_Init' */
    BTQR_ac_B.OutportBufferForRegenBrkActive_Init = false;

    /* SignalConversion generated from: '<S177>/RegenBrkActiveFA_Init' */
    BTQR_ac_B.OutportBufferForRegenBrkActiveFA_Init = false;

    /* SignalConversion generated from: '<S177>/RegenBrkFrontOffsetReq_Init' */
    BTQR_ac_B.OutportBufferForRegenBrkFrontOffsetReq_I = 0.0F;

    /* SignalConversion generated from: '<S177>/RegenBrkFrontOffsetReqFA_Init' */
    BTQR_ac_B.OutportBufferForRegenBrkFrontOffsetReqFA = false;

    /* SignalConversion generated from: '<S177>/RegenBrkRearOffsetReq_Init' */
    BTQR_ac_B.OutportBufferForRegenBrkRearOffsetReq_In = 0.0F;

    /* SignalConversion generated from: '<S177>/RegenBrkRearOffsetReqFA_Init' */
    BTQR_ac_B.OutportBufferForRegenBrkRearOffsetReqFA_ = false;

    /* SignalConversion generated from: '<S177>/AVHSts_Init' incorporates:
     *  SignalConversion generated from: '<S177>/BrkTrq_Driver_Init'
     *  SignalConversion generated from: '<S177>/HNGActv_Init'
     */
#if Rte_SysCon_Variant_BTQR_2

    /* SignalConversion generated from: '<S177>/AVHSts_Init' incorporates:
     *  Constant: '<S181>/Constant'
     */
    BTQR_ac_B.OutportBufferForAVHSts_Init = BTQR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S177>/HNGActv_Init' */
    BTQR_ac_B.OutportBufferForHNGActv_Init = false;

    /* SignalConversion generated from: '<S177>/BrkTrq_Driver_Init' */
    BTQR_ac_B.OutportBufferForBrkTrq_Driver_Init = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S177>/AVHSts_Init' */

    /* SignalConversion generated from: '<S177>/VariantSource' incorporates:
     *  Constant: '<S177>/FALSE_Constant10'
     *  Constant: '<S177>/FALSE_Constant11'
     *  Constant: '<S182>/Calib'
     *  Constant: '<S183>/Calib'
     */
#if Rte_SysCon_Variant_BTQR_1

    BTQR_ac_B.FALSE_Constant10 = KeBTQR_b_ESCEvntActvInit;

    /* VariantMerge generated from: '<S177>/VariantSource' incorporates:
     *  Constant: '<S177>/FALSE_Constant10'
     */
    BTQR_ac_B.VariantMerge_For_Variant_Source_VariantS =
        BTQR_ac_B.FALSE_Constant10;

#else

    BTQR_ac_B.Calib_n = false;

    /* VariantMerge generated from: '<S177>/VariantSource' incorporates:
     *  Constant: '<S177>/FALSE_Constant11'
     *  Constant: '<S182>/Calib'
     *  SignalConversion generated from: '<S177>/VariantSource'
     */
    BTQR_ac_B.VariantMerge_For_Variant_Source_VariantS = BTQR_ac_B.Calib_n;
    BTQR_ac_B.FALSE_Constant10 = false;

#endif

    /* End of SignalConversion generated from: '<S177>/VariantSource' */

    /* SignalConversion generated from: '<S177>/VariantSource1' incorporates:
     *  Constant: '<S182>/Calib'
     *  Constant: '<S184>/Calib'
     *  Constant: '<S185>/Calib'
     *  SignalConversion generated from: '<S177>/FricBrakeTestEnInit'
     *  SignalConversion generated from: '<S177>/RollsModeAct_Init'
     */
#if Rte_SysCon_Variant_BTQR_1

    BTQR_ac_B.Calib_n = KeBTQR_b_ESCEvntActvFAInit;

    /* VariantMerge generated from: '<S177>/VariantSource1' incorporates:
     *  Constant: '<S182>/Calib'
     */
    BTQR_ac_B.VariantMerge_For_Variant_Source_Varian_c = BTQR_ac_B.Calib_n;
    BTQR_ac_B.Calib = KeBTQR_b_RollsModeActInit;

    /* SignalConversion generated from: '<S177>/RollsModeAct_Init' incorporates:
     *  Constant: '<S185>/Calib'
     */
    BTQR_ac_B.OutportBufferForRollsModeAct_Init = BTQR_ac_B.Calib;
    BTQR_ac_B.Calib_f = KeBTQR_b_FricBrakeTestEnInit;

    /* SignalConversion generated from: '<S177>/FricBrakeTestEnInit' incorporates:
     *  Constant: '<S184>/Calib'
     */
    BTQR_ac_B.OutportBufferForFricBrakeTestEnInit = BTQR_ac_B.Calib_f;

#else

    /* VariantMerge generated from: '<S177>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S177>/VariantSource1'
     */
    BTQR_ac_B.VariantMerge_For_Variant_Source_Varian_c =
        BTQR_ac_B.FALSE_Constant10;

#endif

    /* End of SignalConversion generated from: '<S177>/VariantSource1' */

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/BTQO_InitFUNC'
     */
    /* SignalConversion generated from: '<S175>/VeBTQR_M_DrvrIntndedFricBrkTrq_Out' */
    BTQR_ac_B.OutportBufferForVeBTQR_M_DrvrIntndedFric = 0.0F;

    /* SignalConversion generated from: '<S175>/VariantSource' incorporates:
     *  Constant: '<S179>/Constant'
     *  Constant: '<S180>/Constant'
     */
#if Rte_SysCon_Variant_BTQR_1

    BTQR_ac_B.Constant = CeBTQR_e_NotApplied;

    /* VariantMerge generated from: '<S175>/VariantSource' incorporates:
     *  Constant: '<S179>/Constant'
     */
    BTQR_ac_B.VariantMerge_For_Variant_Source_Varian_a = BTQR_ac_B.Constant;

#else

    BTQR_ac_B.Constant_b = CeBTQR_e_SNA1;

    /* VariantMerge generated from: '<S175>/VariantSource' incorporates:
     *  Constant: '<S180>/Constant'
     *  SignalConversion generated from: '<S175>/VariantSource'
     */
    BTQR_ac_B.VariantMerge_For_Variant_Source_Varian_a = BTQR_ac_B.Constant_b;

#endif

    /* End of SignalConversion generated from: '<S175>/VariantSource' */

    /* SignalConversion generated from: '<S175>/VeBTQI_M_RegenBrkAxleTrqReq_Out' */
    BTQR_ac_B.OutportBufferForVeBTQI_M_RegenBrkAxleTrq = 0.0F;

    /* SignalConversion generated from: '<S175>/VeBTQI_M_DrvrIntndedTotBrkTrq_Out' */
    BTQR_ac_B.OutportBufferForVeBTQI_M_DrvrIntndedTotB = 0.0F;

    /* SignalConversion generated from: '<S175>/VeBTQI_M_RegenBrkAxleTrqReqRaw' */
    BTQR_ac_B.OutportBufferForVeBTQI_M_RegenBrkAxleT_o = 0.0F;

    /* SignalConversion generated from: '<S175>/VeBTQI_M_DrvIntndTotBrkOutTorqILE_Out' */
    BTQR_ac_B.OutportBufferForVeBTQI_M_DrvIntndTotBrkO = 0.0F;

    /* SignalConversion generated from: '<S175>/VeBTQR_r_TrqDmnConvSumToAxl' */
    BTQR_ac_B.OutportBufferForVeBTQR_r_TrqDmnConvSumTo = 1.0F;

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S178>/VeBTQR_r_NVRatioLmtd_Out_Init' */
    BTQR_ac_B.OutportBufferForVeBTQR_r_NVRatioLmtd_Out = 0.0F;

    /* SignalConversion generated from: '<S178>/VeBTQR_M_RegenBrkAxleTrqReq4SEM_Out_Init' */
    BTQR_ac_B.OutportBufferForVeBTQR_M_RegenBrkAxleTrq = 0.0F;

    /* SignalConversion generated from: '<S178>/VeBTQR_e_FaultSts_RBS_U1003' incorporates:
     *  Constant: '<S186>/Constant'
     */
    BTQR_ac_B.OutportBufferForVeBTQR_e_FaultSts_RBS_U1 = BTQR_ac_ConstB.Constant;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* SignalConversion generated from: '<S3>/AVHSts_Init_write' incorporates:
     *  SignalConversion generated from: '<S3>/BrkTrq_Driver_Init'
     */
#if Rte_SysCon_Variant_BTQR_2

    /* SignalConversion generated from: '<S3>/AVHSts_Init_write' incorporates:
     *  SignalConversion generated from: '<S177>/AVHSts_Init'
     */
    rtb_OutportBufferForAVHSts_Init_write =
        BTQR_ac_B.OutportBufferForAVHSts_Init;

    /* Outport: '<Root>/VeBTQR_M_BrkTrq_Driver' */
    (void)Rte_Write_VeBTQR_M_BrkTrq_Driver_Value
        (BTQR_ac_B.OutportBufferForBrkTrq_Driver_Init);

#endif

    /* End of SignalConversion generated from: '<S3>/AVHSts_Init_write' */

    /* Outport: '<Root>/VeBTQR_b_DrvrIntndedFricBrkTrqFA' incorporates:
     *  SignalConversion generated from: '<S3>/DrvrIntndedFricBrkTrqFA_Init'
     */
    (void)Rte_Write_VeBTQR_b_DrvrIntndedFricBrkTrqFA_Value
        (BTQR_ac_B.OutportBufferForDrvrIntndedFricBrkTrqFA_);

    /* SignalConversion generated from: '<S3>/DrvrIntndedFricBrkTrq_Init_write' */
#if Rte_SysCon_Variant_BTQR_2

    /* SignalConversion generated from: '<S3>/DrvrIntndedFricBrkTrq_Init_write' */
    rtb_OutportBufferForDrvrIntndedFricBrkTr =
        BTQR_ac_B.OutportBufferForDrvrIntndedFricBrkTrq_In;

#endif

    /* End of SignalConversion generated from: '<S3>/DrvrIntndedFricBrkTrq_Init_write' */

    /* Outport: '<Root>/VeBTQR_b_DrvrIntndedTotBrkTrqFA' incorporates:
     *  SignalConversion generated from: '<S3>/DrvrIntndedTotBrkTrqFA_Init'
     */
    (void)Rte_Write_VeBTQR_b_DrvrIntndedTotBrkTrqFA_Value
        (BTQR_ac_B.OutportBufferForDrvrIntndedTotBrkTrqFA_I);

    /* Outport: '<Root>/VeBTQR_b_DrvIntndTotBrkOutTorqILEFA' incorporates:
     *  SignalConversion generated from: '<S3>/DrvrIntndedTotBrkTrqILEFA_Init'
     */
    (void)Rte_Write_VeBTQR_b_DrvIntndTotBrkOutTorqILEFA_Value
        (BTQR_ac_B.OutportBufferForDrvrIntndedTotBrkTrqILEF);

    /* SignalConversion generated from: '<S3>/DrvrIntndedTotBrkTrqILE_Init_write' incorporates:
     *  SignalConversion generated from: '<S3>/DrvrIntndedTotBrkTrq_Init_write'
     */
#if Rte_SysCon_Variant_BTQR_2

    /* SignalConversion generated from: '<S3>/DrvrIntndedTotBrkTrqILE_Init_write' */
    rtb_OutportBufferForDrvrIntndedTotBrkTrq =
        BTQR_ac_B.OutportBufferForDrvrIntndedTotBrkTrqILE_;

    /* SignalConversion generated from: '<S3>/DrvrIntndedTotBrkTrq_Init_write' */
    rtb_OutportBufferForDrvrIntndedTotBrkT_j =
        BTQR_ac_B.OutportBufferForDrvrIntndedTotBrkTrq_Ini;

#endif

    /* End of SignalConversion generated from: '<S3>/DrvrIntndedTotBrkTrqILE_Init_write' */

    /* Outport: '<Root>/VeBTQR_b_ESCEvntActv' incorporates:
     *  SignalConversion generated from: '<S3>/ESCEvntActv_Init'
     */
    (void)Rte_Write_VeBTQR_b_ESCEvntActv_Value
        (BTQR_ac_B.VariantMerge_For_Variant_Source_VariantS);

    /* SignalConversion generated from: '<S3>/FricBrakeTestEnInit' incorporates:
     *  SignalConversion generated from: '<S3>/FricBrakeTestEnInit_write'
     */
#if Rte_SysCon_Variant_BTQR_1

    /* Outport: '<Root>/VeBTQR_b_FricBrakeTest_Enabled' */
    (void)Rte_Write_VeBTQR_b_FricBrakeTest_Enabled_Value
        (BTQR_ac_B.OutportBufferForFricBrakeTestEnInit);

    /* SignalConversion generated from: '<S3>/FricBrakeTestEnInit_write' */
    rtb_OutportBufferForFricBrakeTestEnInit_ =
        BTQR_ac_B.OutportBufferForFricBrakeTestEnInit;

#endif

    /* End of SignalConversion generated from: '<S3>/FricBrakeTestEnInit' */

    /* SignalConversion generated from: '<S3>/HNGActv_Init_write' */
#if Rte_SysCon_Variant_BTQR_2

    /* SignalConversion generated from: '<S3>/HNGActv_Init_write' */
    rtb_OutportBufferForHNGActv_Init_write =
        BTQR_ac_B.OutportBufferForHNGActv_Init;

#endif

    /* End of SignalConversion generated from: '<S3>/HNGActv_Init_write' */

    /* Outport: '<Root>/VeBTQR_e_FaultSts_RBS_U1003' incorporates:
     *  SignalConversion generated from: '<S178>/VeBTQR_e_FaultSts_RBS_U1003'
     *  SignalConversion generated from: '<S3>/R_VeBTQR_e_FaultSts_RBS_U1003'
     */
    (void)Rte_Write_VeBTQR_e_FaultSts_RBS_U1003_Value
        (BTQR_ac_B.OutportBufferForVeBTQR_e_FaultSts_RBS_U1);

    /* Outport: '<Root>/VeBTQR_b_RegenBrkActiveFA' incorporates:
     *  SignalConversion generated from: '<S3>/RegenBrkActiveFA_Init'
     */
    (void)Rte_Write_VeBTQR_b_RegenBrkActiveFA_Value
        (BTQR_ac_B.OutportBufferForRegenBrkActiveFA_Init);

    /* Outport: '<Root>/VeBTQR_b_RegenBrkActive' incorporates:
     *  SignalConversion generated from: '<S3>/RegenBrkActive_Init'
     */
    (void)Rte_Write_VeBTQR_b_RegenBrkActive_Value
        (BTQR_ac_B.OutportBufferForRegenBrkActive_Init);

    /* Outport: '<Root>/VeBTQR_b_RegenBrkAxleTrqReqFA' incorporates:
     *  SignalConversion generated from: '<S3>/RegenBrkAxleTrqReqFA_Init'
     */
    (void)Rte_Write_VeBTQR_b_RegenBrkAxleTrqReqFA_Value
        (BTQR_ac_B.OutportBufferForRegenBrkAxleTrqReqFA_Ini);

    /* SignalConversion generated from: '<S3>/RegenBrkAxleTrqReq_Init_write' */
#if Rte_SysCon_Variant_BTQR_2

    /* SignalConversion generated from: '<S3>/RegenBrkAxleTrqReq_Init_write' */
    rtb_OutportBufferForRegenBrkAxleTrqReq_I =
        BTQR_ac_B.OutportBufferForRegenBrkAxleTrqReq_Init;

#endif

    /* End of SignalConversion generated from: '<S3>/RegenBrkAxleTrqReq_Init_write' */

    /* Outport: '<Root>/VeBTQR_b_RegenBrkFrontOffsetReqFA' incorporates:
     *  SignalConversion generated from: '<S3>/RegenBrkFrontOffsetReqFA_Init'
     */
    (void)Rte_Write_VeBTQR_b_RegenBrkFrontOffsetReqFA_Value
        (BTQR_ac_B.OutportBufferForRegenBrkFrontOffsetReqFA);

    /* Outport: '<Root>/VeBTQR_M_RegenBrkFrontOffsetReq' incorporates:
     *  SignalConversion generated from: '<S3>/RegenBrkFrontOffsetReq_Init'
     */
    (void)Rte_Write_VeBTQR_M_RegenBrkFrontOffsetReq_Value
        (BTQR_ac_B.OutportBufferForRegenBrkFrontOffsetReq_I);

    /* Outport: '<Root>/VeBTQR_b_RegenBrkRearOffsetReqFA' incorporates:
     *  SignalConversion generated from: '<S3>/RegenBrkRearOffsetReqFA_Init'
     */
    (void)Rte_Write_VeBTQR_b_RegenBrkRearOffsetReqFA_Value
        (BTQR_ac_B.OutportBufferForRegenBrkRearOffsetReqFA_);

    /* Outport: '<Root>/VeBTQR_M_RegenBrkRearOffsetReq' incorporates:
     *  SignalConversion generated from: '<S3>/RegenBrkRearOffsetReq_Init'
     */
    (void)Rte_Write_VeBTQR_M_RegenBrkRearOffsetReq_Value
        (BTQR_ac_B.OutportBufferForRegenBrkRearOffsetReq_In);

    /* SignalConversion generated from: '<S3>/RollsModeAct_Init_write' */
#if Rte_SysCon_Variant_BTQR_1

    /* SignalConversion generated from: '<S3>/RollsModeAct_Init_write' */
    rtb_OutportBufferForRollsModeAct_Init_wr =
        BTQR_ac_B.OutportBufferForRollsModeAct_Init;

#endif

    /* End of SignalConversion generated from: '<S3>/RollsModeAct_Init_write' */

    /* Outport: '<Root>/VeBTQR_M_DrvIntndTotBrkOutTorqILE' incorporates:
     *  SignalConversion generated from: '<S3>/VeBTQI_M_DrvIntndTotBrkOutTorqILE_Out'
     */
    (void)Rte_Write_VeBTQR_M_DrvIntndTotBrkOutTorqILE_Value
        (BTQR_ac_B.OutportBufferForVeBTQI_M_DrvIntndTotBrkO);

    /* Outport: '<Root>/VeBTQR_M_DrvrIntndedTotBrkTrq' incorporates:
     *  SignalConversion generated from: '<S3>/VeBTQI_M_DrvrIntndedTotBrkTrq_Out'
     */
    (void)Rte_Write_VeBTQR_M_DrvrIntndedTotBrkTrq_Value
        (BTQR_ac_B.OutportBufferForVeBTQI_M_DrvrIntndedTotB);

    /* Outport: '<Root>/VeBTQR_M_RegenBrkAxleTrqReqRaw' incorporates:
     *  SignalConversion generated from: '<S3>/VeBTQI_M_RegenBrkAxleTrqReqRaw'
     */
    (void)Rte_Write_VeBTQR_M_RegenBrkAxleTrqReqRaw_Value
        (BTQR_ac_B.OutportBufferForVeBTQI_M_RegenBrkAxleT_o);

    /* Outport: '<Root>/VeBTQR_M_RegenBrkAxleTrqReq' incorporates:
     *  SignalConversion generated from: '<S3>/VeBTQI_M_RegenBrkAxleTrqReq_Out'
     */
    (void)Rte_Write_VeBTQR_M_RegenBrkAxleTrqReq_Value
        (BTQR_ac_B.OutportBufferForVeBTQI_M_RegenBrkAxleTrq);

    /* Outport: '<Root>/VeBTQR_e_ReqTorqueOverLayActive' incorporates:
     *  SignalConversion generated from: '<S3>/VeBTQI_e_ReqTorqueOverLayActive'
     *  VariantMerge generated from: '<S175>/VariantSource'
     */
    (void)Rte_Write_VeBTQR_e_ReqTorqueOverLayActive_Value
        (BTQR_ac_B.VariantMerge_For_Variant_Source_Varian_a);

    /* Outport: '<Root>/VeBTQR_M_DrvrIntndedFricBrkTrq' incorporates:
     *  SignalConversion generated from: '<S3>/VeBTQR_M_DrvrIntndedFricBrkTrq_Out'
     */
    (void)Rte_Write_VeBTQR_M_DrvrIntndedFricBrkTrq_Value
        (BTQR_ac_B.OutportBufferForVeBTQR_M_DrvrIntndedFric);

    /* Outport: '<Root>/VeBTQR_M_RegenBrkAxleTrqReq4SEM' incorporates:
     *  SignalConversion generated from: '<S3>/VeBTQR_M_RegenBrkAxleTrqReq4SEM_Out_Init'
     */
    (void)Rte_Write_VeBTQR_M_RegenBrkAxleTrqReq4SEM_Value
        (BTQR_ac_B.OutportBufferForVeBTQR_M_RegenBrkAxleTrq);

    /* Outport: '<Root>/VeBTQR_r_NVRatioLmtd' incorporates:
     *  SignalConversion generated from: '<S3>/VeBTQR_r_NVRatioLmtd_Out_Init'
     */
    (void)Rte_Write_VeBTQR_r_NVRatioLmtd_Value
        (BTQR_ac_B.OutportBufferForVeBTQR_r_NVRatioLmtd_Out);

    /* Outport: '<Root>/VeBTQR_r_TrqDmnConvSumToAxl' incorporates:
     *  SignalConversion generated from: '<S3>/VeBTQR_r_TrqDmnConvSumToAxl'
     */
    (void)Rte_Write_VeBTQR_r_TrqDmnConvSumToAxl_Value
        (BTQR_ac_B.OutportBufferForVeBTQR_r_TrqDmnConvSumTo);

    /* SignalConversion generated from: '<S3>/AVHSts_Init_write' */
#if Rte_SysCon_Variant_BTQR_2

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S3>/AVHSts_Init_write'
     */
    Rte_IrvWrite_BTQR_PwrOn_AVHSts_Init_write_IRV
        (rtb_OutportBufferForAVHSts_Init_write);

#endif

    /* End of SignalConversion generated from: '<S3>/AVHSts_Init_write' */

    /* Merge: '<Root>/Merge_19_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/DrvrIntndedFricBrkTrqFA_Init_write'
     * */
    Rte_IrvWrite_BTQR_PwrOn_DrvrIntndedFricBrkTrqFA_Init_write_IRV
        (BTQR_ac_B.OutportBufferForDrvrIntndedFricBrkTrqFA_);

    /* SignalConversion generated from: '<S3>/DrvrIntndedFricBrkTrq_Init_write' */
#if Rte_SysCon_Variant_BTQR_2

    /* Merge: '<Root>/Merge_21' */
    Rte_IrvWrite_BTQR_PwrOn_DrvrIntndedFricBrkTrq_Init_write_IRV
        (rtb_OutportBufferForDrvrIntndedFricBrkTr);

#endif

    /* End of SignalConversion generated from: '<S3>/DrvrIntndedFricBrkTrq_Init_write' */

    /* Merge: '<Root>/Merge_16_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/DrvrIntndedTotBrkTrqFA_Init_write'
     * */
    Rte_IrvWrite_BTQR_PwrOn_DrvrIntndedTotBrkTrqFA_Init_write_IRV
        (BTQR_ac_B.OutportBufferForDrvrIntndedTotBrkTrqFA_I);

    /* Merge: '<Root>/Merge_22_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/DrvrIntndedTotBrkTrqILEFA_Init_write'
     * */
    Rte_IrvWrite_BTQR_PwrOn_DrvrIntndedTotBrkTrqILEFA_Init_write_IRV
        (BTQR_ac_B.OutportBufferForDrvrIntndedTotBrkTrqILEF);

    /* SignalConversion generated from: '<S3>/DrvrIntndedTotBrkTrqILE_Init_write' incorporates:
     *  SignalConversion generated from: '<S3>/DrvrIntndedTotBrkTrq_Init_write'
     */
#if Rte_SysCon_Variant_BTQR_2

    /* Merge: '<Root>/Merge_23' */
    Rte_IrvWrite_BTQR_PwrOn_DrvrIntndedTotBrkTrqILE_Init_write_IRV
        (rtb_OutportBufferForDrvrIntndedTotBrkTrq);

    /* Merge: '<Root>/Merge_20' */
    Rte_IrvWrite_BTQR_PwrOn_DrvrIntndedTotBrkTrq_Init_write_IRV
        (rtb_OutportBufferForDrvrIntndedTotBrkT_j);

#endif

    /* End of SignalConversion generated from: '<S3>/DrvrIntndedTotBrkTrqILE_Init_write' */

    /* Merge: '<Root>/Merge_15' incorporates:
     *  SignalConversion generated from: '<S3>/ESCEvntActvFA_Init_write'
     * */
    Rte_IrvWrite_BTQR_PwrOn_ESCEvntActvFA_Init_write_IRV
        (BTQR_ac_B.VariantMerge_For_Variant_Source_Varian_c);

    /* Merge: '<Root>/Merge_14_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/ESCEvntActv_Init_write'
     * */
    Rte_IrvWrite_BTQR_PwrOn_ESCEvntActv_Init_write_IRV
        (BTQR_ac_B.VariantMerge_For_Variant_Source_VariantS);

    /* SignalConversion generated from: '<S3>/FricBrakeTestEnInit_write' */
#if Rte_SysCon_Variant_BTQR_1

    /* Merge: '<Root>/Merge_17_Irv' */
    Rte_IrvWrite_BTQR_PwrOn_FricBrakeTestEnInit_write_IRV
        (rtb_OutportBufferForFricBrakeTestEnInit_);

#endif

    /* End of SignalConversion generated from: '<S3>/FricBrakeTestEnInit_write' */

    /* SignalConversion generated from: '<S3>/HNGActv_Init_write' */
#if Rte_SysCon_Variant_BTQR_2

    /* Merge: '<Root>/Merge_12' */
    Rte_IrvWrite_BTQR_PwrOn_HNGActv_Init_write_IRV
        (rtb_OutportBufferForHNGActv_Init_write);

#endif

    /* End of SignalConversion generated from: '<S3>/HNGActv_Init_write' */

    /* Merge: '<Root>/Merge_6_Irv' incorporates:
     *  SignalConversion generated from: '<S3>/RegenBrkAxleTrqReqFA_Init_write'
     * */
    Rte_IrvWrite_BTQR_PwrOn_RegenBrkAxleTrqReqFA_Init_write_IRV
        (BTQR_ac_B.OutportBufferForRegenBrkAxleTrqReqFA_Ini);

    /* SignalConversion generated from: '<S3>/RegenBrkAxleTrqReq_Init_write' */
#if Rte_SysCon_Variant_BTQR_2

    /* Merge: '<Root>/Merge_5' */
    Rte_IrvWrite_BTQR_PwrOn_RegenBrkAxleTrqReq_Init_write_IRV
        (rtb_OutportBufferForRegenBrkAxleTrqReq_I);

#endif

    /* End of SignalConversion generated from: '<S3>/RegenBrkAxleTrqReq_Init_write' */

    /* SignalConversion generated from: '<S3>/RollsModeAct_Init_write' */
#if Rte_SysCon_Variant_BTQR_1

    /* Merge: '<Root>/Merge_18' */
    Rte_IrvWrite_BTQR_PwrOn_RollsModeAct_Init_write_IRV
        (rtb_OutportBufferForRollsModeAct_Init_wr);

#endif

    /* End of SignalConversion generated from: '<S3>/RollsModeAct_Init_write' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, BTQR_CODE) BTQR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {

#if Rte_SysCon_Variant_BTQR_2

        BTQR_ac_B.OutportBufferForAVHSts_Init = CeBTQR_e_NotEnabled;

#endif

        BTQR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i = CeBTQR_e_NotEnabled;
    }

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/BTQR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Init_BTQI'
     */
    /* Start for Constant: '<S183>/Calib' incorporates:
     *  Constant: '<S177>/FALSE_Constant10'
     *  Constant: '<S177>/FALSE_Constant11'
     */
#if Rte_SysCon_Variant_BTQR_1

    /* Start for Constant: '<S177>/FALSE_Constant10' */
    BTQR_ac_B.FALSE_Constant10 = KeBTQR_b_ESCEvntActvInit;

#else

    /* Start for Constant: '<S182>/Calib' incorporates:
     *  Constant: '<S177>/FALSE_Constant11'
     */
    BTQR_ac_B.Calib_n = false;

    /* Start for Constant: '<S177>/FALSE_Constant10' */
    BTQR_ac_B.FALSE_Constant10 = false;

#endif

    /* End of Start for Constant: '<S183>/Calib' */

    /* SystemInitialize for SignalConversion generated from: '<S177>/VariantSource' incorporates:
     *  Constant: '<S182>/Calib'
     *  Constant: '<S184>/Calib'
     *  Constant: '<S185>/Calib'
     */
#if Rte_SysCon_Variant_BTQR_1

    BTQR_ac_B.Calib_n = KeBTQR_b_ESCEvntActvFAInit;
    BTQR_ac_B.Calib = KeBTQR_b_RollsModeActInit;
    BTQR_ac_B.Calib_f = KeBTQR_b_FricBrakeTestEnInit;

    /* SystemInitialize for VariantMerge generated from: '<S177>/VariantSource' incorporates:
     *  Constant: '<S182>/Calib'
     *  Constant: '<S184>/Calib'
     *  Constant: '<S185>/Calib'
     */
    BTQR_ac_B.VariantMerge_For_Variant_Source_VariantS =
        BTQR_ac_B.FALSE_Constant10;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S177>/VariantSource' */

    /* SystemInitialize for SignalConversion generated from: '<S177>/AVHSts_Init' incorporates:
     *  SignalConversion generated from: '<S177>/BrkTrq_Driver_Init'
     *  SignalConversion generated from: '<S177>/HNGActv_Init'
     */
#if Rte_SysCon_Variant_BTQR_2

    /* SystemInitialize for SignalConversion generated from: '<S177>/AVHSts_Init' incorporates:
     *  Constant: '<S181>/Constant'
     */
    BTQR_ac_B.OutportBufferForAVHSts_Init = BTQR_ac_ConstB.Constant_l;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S177>/AVHSts_Init' */

    /* SystemInitialize for SignalConversion generated from: '<S177>/VariantSource' incorporates:
     *  Constant: '<S179>/Constant'
     *  SignalConversion generated from: '<S177>/FricBrakeTestEnInit'
     *  SignalConversion generated from: '<S177>/RollsModeAct_Init'
     *  SignalConversion generated from: '<S177>/VariantSource1'
     */
#if !Rte_SysCon_Variant_BTQR_1

    /* SystemInitialize for VariantMerge generated from: '<S177>/VariantSource' */
    BTQR_ac_B.VariantMerge_For_Variant_Source_VariantS = BTQR_ac_B.Calib_n;

#else

    /* SystemInitialize for Function Call SubSystem: '<S3>/BTQO_InitFUNC' */
    /* SystemInitialize for VariantMerge generated from: '<S177>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S177>/VariantSource1'
     */
    BTQR_ac_B.VariantMerge_For_Variant_Source_Varian_c = BTQR_ac_B.Calib_n;

    /* SystemInitialize for SignalConversion generated from: '<S177>/RollsModeAct_Init' */
    BTQR_ac_B.OutportBufferForRollsModeAct_Init = BTQR_ac_B.Calib;

    /* SystemInitialize for SignalConversion generated from: '<S177>/FricBrakeTestEnInit' */
    BTQR_ac_B.OutportBufferForFricBrakeTestEnInit = BTQR_ac_B.Calib_f;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S177>/VariantSource' */

    /* SystemInitialize for SignalConversion generated from: '<S177>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S175>/VariantSource'
     */
#if !Rte_SysCon_Variant_BTQR_1

    /* SystemInitialize for VariantMerge generated from: '<S177>/VariantSource1' */
    BTQR_ac_B.VariantMerge_For_Variant_Source_Varian_c =
        BTQR_ac_B.FALSE_Constant10;

#else

    /* SystemInitialize for Function Call SubSystem: '<S3>/BTQO_InitFUNC' */
    /* SystemInitialize for VariantMerge generated from: '<S175>/VariantSource' incorporates:
     *  Constant: '<S179>/Constant'
     *  SignalConversion generated from: '<S175>/VariantSource'
     */
    BTQR_ac_B.VariantMerge_For_Variant_Source_Varian_a = BTQR_ac_B.Constant;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S177>/VariantSource1' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/BTQR_MedTEB'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* SystemInitialize for Atomic SubSystem: '<S27>/Variant_Subsystem' */
    /* SystemInitialize for SignalConversion generated from: '<S175>/VariantSource' incorporates:
     *  Constant: '<S180>/Constant'
     */
#if !Rte_SysCon_Variant_BTQR_1

    /* SystemInitialize for Atomic SubSystem: '<S58>/BTQR_MSG' */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/BTQO_InitFUNC'
     */
    BTQR_ac_B.Constant_b = CeBTQR_e_SNA1;

    /* SystemInitialize for VariantMerge generated from: '<S175>/VariantSource' incorporates:
     *  Constant: '<S180>/Constant'
     * */
    BTQR_ac_B.VariantMerge_For_Variant_Source_Varian_a = BTQR_ac_B.Constant_b;

    /* Start for If: '<S60>/If' */
    BTQR_ac_DW.If_ActiveSubsystem = -1;

    /* SystemInitialize for Atomic SubSystem: '<S60>/GradientLimiter1' */
    /* InitializeConditions for UnitDelay: '<S138>/Unit Delay' */
    BTQR_ac_DW.UnitDelay_DSTATE_e = 1.0F;

    /* End of SystemInitialize for SubSystem: '<S60>/GradientLimiter1' */

    /* SystemInitialize for Atomic SubSystem: '<S60>/GradientLimiter2' */
    /* InitializeConditions for UnitDelay: '<S139>/Unit Delay' */
    BTQR_ac_DW.UnitDelay_DSTATE_b = 1.0F;

    /* End of SystemInitialize for SubSystem: '<S60>/GradientLimiter2' */

    /* SystemInitialize for Atomic SubSystem: '<S60>/GradientLimiter3' */
    /* InitializeConditions for UnitDelay: '<S140>/Unit Delay' */
    BTQR_ac_DW.UnitDelay_DSTATE_g = 1.0F;

    /* End of SystemInitialize for SubSystem: '<S60>/GradientLimiter3' */

    /* SystemInitialize for Atomic SubSystem: '<S60>/GradientLimiter4' */
    /* InitializeConditions for UnitDelay: '<S141>/Unit Delay' */
    BTQR_ac_DW.UnitDelay_DSTATE_i4 = 1.0F;

    /* End of SystemInitialize for SubSystem: '<S60>/GradientLimiter4' */
    /* End of SystemInitialize for SubSystem: '<S58>/BTQR_MSG' */
#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S175>/VariantSource' */
    /* End of SystemInitialize for SubSystem: '<S27>/Variant_Subsystem' */
    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* SystemInitialize for SignalConversion generated from: '<S175>/VeBTQR_r_TrqDmnConvSumToAxl' */
    BTQR_ac_B.OutportBufferForVeBTQR_r_TrqDmnConvSumTo = 1.0F;

    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S178>/VeBTQR_e_FaultSts_RBS_U1003' incorporates:
     *  Constant: '<S186>/Constant'
     */
    BTQR_ac_B.OutportBufferForVeBTQR_e_FaultSts_RBS_U1 = BTQR_ac_ConstB.Constant;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/BTQR_MedTEB'
     */
#if Rte_SysCon_Variant_BTQR_1
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* SystemInitialize for Outport: '<Root>/VeBTQR_e_ReqTorqueOverLayActive' incorporates:
     *  Merge: '<Root>/Merge_26'
     */
    (void)Rte_Write_VeBTQR_e_ReqTorqueOverLayActive_Value(CeBTQR_e_NotApplied);

    /* SystemInitialize for Outport: '<Root>/VeBTQR_e_FaultSts_RBS_U1003' incorporates:
     *  Merge: '<Root>/M_VeBTQR_e_FaultSts_RBS_U1003'
     */
    (void)Rte_Write_VeBTQR_e_FaultSts_RBS_U1003_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
