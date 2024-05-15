/*
 * File: CSDR_ac.c
 *
 * Code generated for Simulink model 'CSDR_ac'.
 *
 * Model version                  : 9.77
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:18:37 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CSDR_ac.h"
#include "look1_iflf_binlca_16a.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_CSDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) HeCSDR_t_MedTED = 0.02F;/* Referenced by:
                                                                      * '<S28>/Calib'
                                                                      * '<S36>/Calib'
                                                                      * '<S103>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_Cf_ConvertRPMtoRPS = 0.017F;/* Referenced by:
                                                                      * '<S37>/Calib'
                                                                      * '<S104>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_Cf_ConvertRevToDeg = 360.0F;/* Referenced by:
                                                                      * '<S38>/Calib'
                                                                      * '<S105>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(uint16, CSDR_VAR_INIT) KeCSDR_Cnt_Clutch1SlipFailLmt = 40U;/* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(uint16, CSDR_VAR_INIT) KeCSDR_Cnt_Clutch1SlipPassLmt = 80U;/* Referenced by: '<S59>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(uint16, CSDR_VAR_INIT) KeCSDR_Cnt_Clutch2SlipFailLmt = 40U;/* Referenced by: '<S125>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(uint16, CSDR_VAR_INIT) KeCSDR_Cnt_Clutch2SlipPassLmt = 80U;/* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_K_C1CapTh = 0.85F;/* Referenced by: '<S29>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_K_C2CapTh = 0.85F;/* Referenced by: '<S30>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_M_C1SlipCorrectedTrqTh =
    400.0F;                            /* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_M_C1_TCR_ActlOvrdVal = 0.0F;/* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_M_C2SlipCorrectedTrqTh =
    150.0F;                            /* Referenced by: '<S127>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_M_C2_TCR_ActlOvrdVal = 0.0F;/* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT)
    KeCSDR_b_BuffrCrnkDiagFailingOvrdEnbl = 0;/* Referenced by: '<S191>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT)
    KeCSDR_b_BuffrCrnkDiagFailingOvrdVal = 0;/* Referenced by: '<S192>/Calib' */

#endif

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_C1_ClchAvailOvrdEnbl = 0;/* Referenced by: '<S223>/Calib' */
static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_C1_ClchAvailOvrdVal = 0;/* Referenced by: '<S224>/Calib' */

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_C1_DeactvtMSPRLearn = 1;/* Referenced by: '<S183>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_C1_DeactvtMSPRUnlearn = 1;/* Referenced by: '<S184>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_C1_EnaLostCommECMChk = 1;/* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_C1_SlipDetectedOvrdEnbl =
    0;                                 /* Referenced by: '<S193>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_C1_SlipDetectedOvrdVal =
    0;                                 /* Referenced by: '<S194>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_C1_SlipSpeedOvrdEnbl = 0;/* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_C1_TCR_ActlOvrdEnbl = 0;/* Referenced by: '<S196>/Calib' */

#endif

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_C2_ClchAvailOvrdEnbl = 0;/* Referenced by: '<S225>/Calib' */
static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_C2_ClchAvailOvrdVal = 0;/* Referenced by: '<S226>/Calib' */

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_C2_DeactvtMSPRLearn = 1;/* Referenced by: '<S185>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_C2_DeactvtMSPRUnlearn = 1;/* Referenced by: '<S186>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_C2_EnaLostCommECMChk = 1;/* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_C2_SlipDetectedOvrdEnbl =
    0;                                 /* Referenced by: '<S197>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_C2_SlipDetectedOvrdVal =
    0;                                 /* Referenced by: '<S198>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_C2_SlipSpeedOvrdEnbl = 0;/* Referenced by: '<S199>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_C2_TCR_ActlOvrdEnbl = 0;/* Referenced by: '<S200>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_EnblC1SlipDiag = 0;/* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_EnblC2SlipDiag = 0;/* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_EngStartStopStOvrdEnbl =
    0;                                 /* Referenced by: '<S201>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_EngineSpeedStatusOvrdEnbl
    = 0;                               /* Referenced by: '<S202>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_InptSpdSourceOvrdEnbl = 0;/* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_NC1_FAOvrdEnbl = 0;/* Referenced by: '<S204>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_NC1_FAOvrdVal = 0;/* Referenced by: '<S205>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_NC2_FAOvrdEnbl = 0;/* Referenced by: '<S206>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_NC2_FAOvrdVal = 0;/* Referenced by: '<S207>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_NVRAMC1SlipRstOvrd = 0;/* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_NVRAMC2SlipRstOvrd = 0;/* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_PMM_PowerModeOvrdEnbl = 0;/* Referenced by: '<S208>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT) KeCSDR_b_RngStOvrdEnbl = 0;/* Referenced by: '<S209>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT)
    KeCSDR_b_TransFrictElmntA_Slip_LtchEnbl = 0;/* Referenced by: '<S63>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(boolean, CSDR_VAR_INIT)
    KeCSDR_b_TransFrictElmntB_Slip_LtchEnbl = 0;/* Referenced by: '<S130>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(TeESSR_e_EngStartStopSt, CSDR_VAR_INIT)
    KeCSDR_e_EngStartStopStOvrdVal = CeESSR_e_EngOff;/* Referenced by: '<S210>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(TeESPR_e_EngSpdStatus, CSDR_VAR_INIT)
    KeCSDR_e_EngineSpeedStatusOvrdVal = CeESPR_e_EngSpdNormal;/* Referenced by: '<S211>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(TeTISR_e_InpSpdDfltSource, CSDR_VAR_INIT)
    KeCSDR_e_InptSpdSourceOvrdVal = CeTISR_e_EngSpeedFromCAN;/* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(TePMDR_e_PowerMode, CSDR_VAR_INIT)
    KeCSDR_e_PMM_PowerModeOvrdVal = CePMDR_e_PowerMode_Off;/* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(TeHSER_e_RngSt, CSDR_VAR_INIT) KeCSDR_e_RngStOvrdVal =
    CeHSER_e_Neutral;                  /* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_k_C1SlipFilterCoeff = 0.2F;/* Referenced by: '<S39>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_k_C2SlipFilterCoeff = 0.2F;/* Referenced by: '<S106>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_n_C1SlipDeadBandMax =
    100.0F;                            /* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_n_C1SlipDeadBandMin =
    -100.0F;                           /* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_n_C1Slip_MaxVal = -720.0F;/* Referenced by: '<S42>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_n_C1Slip_MinVal = -720.0F;/* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_n_C1_SlipSpeedOvrdVal =
    0.0F;                              /* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_n_C2SlipDeadBandMax =
    250.0F;                            /* Referenced by: '<S107>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_n_C2SlipDeadBandMin =
    -250.0F;                           /* Referenced by: '<S108>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_n_C2Slip_MaxVal = -720.0F;/* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_n_C2Slip_MinVal = -720.0F;/* Referenced by: '<S110>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_n_C2_SlipSpeedOvrdVal =
    0.0F;                              /* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_phi_NVRAMC1SlipRstOvrdVal =
    0.0F;                              /* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_phi_NVRAMC2SlipRstOvrdVal =
    0.0F;                              /* Referenced by: '<S131>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_t_DbncC1TrqCap = 1.0F;/* Referenced by: '<S31>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KeCSDR_t_DbncC2TrqCap = 1.0F;/* Referenced by: '<S32>/Calib' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KtCSDR_M_C1SlipCorrectedTrq[10] =
{
    0.0F, 100.0F, 200.0F, 300.0F, 400.0F, 500.0F, 550.0F, 600.0F, 650.0F, 700.0F
} ;                                    /* Referenced by: '<S65>/Vector' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KtCSDR_M_C2SlipCorrectedTrq[10] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 100.0F, 130.0F, 160.0F, 180.0F, 190.0F, 200.0F
} ;                                    /* Referenced by: '<S132>/Vector' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KtCSDR_phi_C1SlipHealingFctr[6] =
{
    0.0F, 0.0F, 0.0F, 360.0F, 360.0F, 360.0F
} ;                                    /* Referenced by: '<S84>/Vector' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KtCSDR_phi_C2SlipHealingFctr[6] =
{
    0.0F, 0.0F, 0.0F, 360.0F, 360.0F, 360.0F
} ;                                    /* Referenced by: '<S151>/Vector' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KtCSDR_scl_C1ActTrqRatio[10] =
{
    1.0F, 1.0F, 2.0F, 2.5F, 3.0F, 3.5F, 4.0F, 4.5F, 4.5F, 5.0F
} ;                                    /* Referenced by: '<S44>/Vector' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KtCSDR_scl_C2ActTrqRatio[10] =
{
    1.0F, 1.0F, 2.0F, 2.5F, 3.0F, 3.5F, 4.0F, 4.5F, 4.5F, 5.0F
} ;                                    /* Referenced by: '<S111>/Vector' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KxCSDR_M_C1SlipCorrectedTrq[10] =
{
    0.0F, 360.0F, 720.0F, 1800.0F, 3600.0F, 4680.0F, 6120.0F, 6840.0F, 7200.0F,
    10800.0F
} ;                                    /* Referenced by: '<S65>/Vector' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KxCSDR_M_C2SlipCorrectedTrq[10] =
{
    0.0F, 360.0F, 720.0F, 1800.0F, 3600.0F, 4680.0F, 6120.0F, 6840.0F, 7200.0F,
    10800.0F
} ;                                    /* Referenced by: '<S132>/Vector' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KxCSDR_phi_C1SlipHealingFctr[6] =
{
    0.0F, 0.1F, 0.5F, 1.0F, 2.0F, 10.0F
} ;                                    /* Referenced by: '<S84>/Vector' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KxCSDR_phi_C2SlipHealingFctr[6] =
{
    0.0F, 0.1F, 0.5F, 1.0F, 2.0F, 10.0F
} ;                                    /* Referenced by: '<S151>/Vector' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KxCSDR_scl_C1ActTrqRatio[10] =
{
    0.0F, 40.0F, 50.0F, 75.0F, 100.0F, 125.0F, 150.0F, 170.0F, 180.0F, 200.0F
} ;                                    /* Referenced by: '<S44>/Vector' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static volatile CONST(float32, CSDR_VAR_INIT) KxCSDR_scl_C2ActTrqRatio[10] =
{
    0.0F, 40.0F, 50.0F, 75.0F, 100.0F, 125.0F, 150.0F, 170.0F, 180.0F, 200.0F
} ;                                    /* Referenced by: '<S111>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_CSDR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CSDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, CSDR_VAR_INIT) VeCSDR_M_C1CorrectedSlipTrq;/* synthesized block */

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_M_C1_TCRActl;/* '<S7>/Switch11' */

#endif

static VAR(float32, CSDR_VAR_INIT) VeCSDR_M_C2CorrectedSlipTrq;/* synthesized block */

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_M_C2_TCRActl;/* '<S7>/Switch12' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_BuffrCrnkDiagFailing;/* '<S7>/Switch16' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C1SlipLatched;/* '<S86>/OR1' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C1TrqCapEnbld;/* '<S92>/Comparison' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C1UnlearnPause;/* '<S88>/Logical4' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C1UnlearnTrigger;/* '<S95>/AND' */

#endif

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C1_Avail_DS;/* '<Root>/DSM_1' */

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C1_ECMCommOk;/* '<S18>/Logical1' */

#endif

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C1_NA;/* synthesized block */

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C1_NoSlipLearn;/* '<S25>/Logical3' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C1_NoSlipUnlearn;/* '<S25>/Logical' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C1_SlipCompTrigger;/* '<S18>/Logical5' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C1_SlipDetected;/* '<S7>/Switch67' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C2SlipLatched;/* '<S153>/OR1' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C2TrqCapEnbld;/* '<S156>/Comparison' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C2UnlearnPause;/* '<S155>/Logical4' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C2UnlearnTrigger;/* '<S162>/AND' */

#endif

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C2_Avail_DS;/* '<Root>/DSM_3' */

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C2_ECMCommOk;/* '<S23>/Logical1' */

#endif

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C2_NA;/* synthesized block */

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C2_NoSlipLearn;/* '<S25>/Logical4' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C2_NoSlipUnlearn;/* '<S25>/Logical1' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C2_SlipCompTrigger;/* '<S23>/Logical5' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_C2_SlipDetected;/* '<S7>/Switch68' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_NC1_FA;/* '<S7>/Switch55' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_NC2_FA;/* '<S7>/Switch56' */

#endif

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_b_RstIntegrator;/* '<Root>/DSM_5' */

#if Rte_SysCon_Variant_CSDR_1

static VAR(TeHSER_e_RngSt, CSDR_VAR_INIT) VeCSDR_e_Clch_RngSt;/* '<S7>/Switch23' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(TeESSR_e_EngStartStopSt, CSDR_VAR_INIT) VeCSDR_e_EngStartStopSt;/* '<S7>/Switch13' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(TeESPR_e_EngSpdStatus, CSDR_VAR_INIT) VeCSDR_e_EngineSpeedStatus;/* '<S7>/Switch70' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(TeTISR_e_InpSpdDfltSource, CSDR_VAR_INIT) VeCSDR_e_InputSpdSource;/* '<S7>/Switch62' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(TePMDR_e_PowerMode, CSDR_VAR_INIT) VeCSDR_e_PMM_PowerMode;/* '<S7>/Switch32' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_n_C1SlipSpeed_Lmtd;/* '<S45>/Switch' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_n_C1_SlipSpeed;/* '<S7>/Switch6' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_n_C2SlipSpeed_Lmtd;/* '<S112>/Switch' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_n_C2_SlipSpeed;/* '<S7>/Switch7' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_n_DeadBandC1SlipSpeed;/* '<S34>/Switch1' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_n_DeadBandC2SlipSpeed;/* '<S101>/Switch1' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_n_FiltrdC1SlipSpeed;/* '<S46>/Switch1' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_n_FiltrdC2SlipSpeed;/* '<S113>/Switch1' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_n_RawC1SlipSpeed;/* '<S47>/Gain' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_n_RawC2SlipSpeed;/* '<S114>/Gain' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_phi_C1HealedSlip;/* '<S85>/Sum1' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_phi_C1HealingFctr;/* '<S84>/Vector' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_phi_C1Slip;/* '<S14>/Product3' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_phi_C1SlipIntegrated;/* '<S48>/Switch1' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_phi_C1SlipIntegrated_WithKey;/* '<S15>/Switch1' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_phi_C1SlipIntegrated_WithKeyOnEdge;/* '<S15>/Switch2' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_phi_C1SlipIntegrated_WithKey_CrnkFail;/* '<S15>/Logical2' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_phi_C1SlipIntegrated_WithKey_Final;/* '<S15>/Switch6' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_phi_C1SlipToIntegrate;/* '<S14>/Product2' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_phi_C2HealedSlip;/* '<S152>/Sum1' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_phi_C2HealingFctr;/* '<S151>/Vector' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_phi_C2Slip;/* '<S19>/Product3' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_phi_C2SlipIntegrated;/* '<S115>/Switch1' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_phi_C2SlipIntegrated_WithKey;/* '<S20>/Switch1' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_phi_C2SlipIntegrated_WithKeyOnEdge;/* '<S20>/Switch2' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(boolean, CSDR_VAR_INIT) VeCSDR_phi_C2SlipIntegrated_WithKey_CrnkFail;/* '<S20>/Logical2' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_phi_C2SlipIntegrated_WithKey_Final;/* '<S20>/Switch6' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_phi_C2SlipToIntegrate;/* '<S19>/Product2' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_scl_C1ActTrqRatio;/* '<S44>/Vector' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_scl_C2ActTrqRatio;/* '<S111>/Vector' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_t_C1TrCapDbncTmr;/* '<S94>/Switch1' */

#endif

#if Rte_SysCon_Variant_CSDR_1

static VAR(float32, CSDR_VAR_INIT) VeCSDR_t_C2TrCapDbncTmr;/* '<S161>/Switch1' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CSDR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_CSDR
#include "MemMap.h"

CONST(ConstB_CSDR_ac_T, CSDR_VAR_INIT) CSDR_ac_ConstB =
{
    CeDFIB_e_Init,                     /* '<S234>/Constant' */
    CeDFIB_e_Init                      /* '<S235>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_CSDR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CSDR
#include "MemMap.h"

VAR(B_CSDR_ac_T, CSDR_VAR_INIT) CSDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CSDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_CSDR
#include "MemMap.h"

VAR(DW_CSDR_ac_T, CSDR_VAR_INIT) CSDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_CSDR
#include "MemMap.h"
#if Rte_SysCon_Variant_CSDR_1

static FUNC(void, CSDR_CODE_LOCAL) CSDR_ac_ResetPokeOutput(VAR(boolean,
    AUTOMATIC) rtu_Enable);

#endif

#if Rte_SysCon_Variant_CSDR_1

static FUNC(void, CSDR_CODE_LOCAL) CSDR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CSDR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_CSDR_1

static FUNC(void, CSDR_CODE_LOCAL) CSDR_ac_Init_f(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CSDR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_CSDR_1

static FUNC(void, CSDR_CODE_LOCAL) CSDR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CSDR_VAR_INIT)
    rty_FaultSts);

#endif

/*
 * Output and update for enable system:
 *    '<S15>/ResetPokeOutput'
 *    '<S20>/ResetPokeOutput'
 */
#if Rte_SysCon_Variant_CSDR_1

static FUNC(void, CSDR_CODE_LOCAL) CSDR_ac_ResetPokeOutput(VAR(boolean,
    AUTOMATIC) rtu_Enable)
{
    /* Outputs for Enabled SubSystem: '<S15>/ResetPokeOutput' incorporates:
     *  EnablePort: '<S66>/Enable'
     */
    /* DataStoreWrite: '<S66>/Data Store Write1' */
    VeCSDR_b_RstIntegrator = ((!rtu_Enable) && (VeCSDR_b_RstIntegrator));

    /* End of Outputs for SubSystem: '<S15>/ResetPokeOutput' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S69>/Fail'
 *    '<S136>/Fail'
 */
#if Rte_SysCon_Variant_CSDR_1

static FUNC(void, CSDR_CODE_LOCAL) CSDR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CSDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S69>/Fail' incorporates:
     *  EnablePort: '<S73>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S73>/FaultSts' incorporates:
         *  Constant: '<S79>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S69>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S69>/Init'
 *    '<S136>/Init'
 */
#if Rte_SysCon_Variant_CSDR_1

static FUNC(void, CSDR_CODE_LOCAL) CSDR_ac_Init_f(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CSDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S69>/Init' incorporates:
     *  EnablePort: '<S74>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S74>/FaultSts' incorporates:
         *  Constant: '<S80>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S69>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S69>/Pass'
 *    '<S136>/Pass'
 */
#if Rte_SysCon_Variant_CSDR_1

static FUNC(void, CSDR_CODE_LOCAL) CSDR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, CSDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S69>/Pass' incorporates:
     *  EnablePort: '<S75>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S75>/FaultSts' incorporates:
         *  Constant: '<S81>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S69>/Pass' */
}

#endif

/* Model step function for TID1 */
FUNC(void, CSDR_CODE) CSDR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_CSDR_1

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_CSDR_1

    boolean rtb_Logical4_j;

#endif

#if Rte_SysCon_Variant_CSDR_1

    boolean rtb_Comparison2_b;

#endif

#if Rte_SysCon_Variant_CSDR_1

    float32 rtb_Switch1;

#endif

#if Rte_SysCon_Variant_CSDR_1

    boolean rtb_Logical2;

#endif

#if Rte_SysCon_Variant_CSDR_1

    boolean rtb_AND_ik;

#endif

#if Rte_SysCon_Variant_CSDR_1

    boolean rtb_Comparison2_o;

#endif

#if Rte_SysCon_Variant_CSDR_1

    boolean rtb_Logical2_d;

#endif

#if Rte_SysCon_Variant_CSDR_1

    boolean rtb_AND;

#endif

#if Rte_SysCon_Variant_CSDR_1

    boolean rtb_AND_gf;

#endif

#if Rte_SysCon_Variant_CSDR_1

    boolean rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

#endif

#if Rte_SysCon_Variant_CSDR_1

    boolean rtb_NOT4;

#endif

#if Rte_SysCon_Variant_CSDR_1

    boolean rtb_RelationalOperator3;

#endif

#if Rte_SysCon_Variant_CSDR_1

    boolean rtb_Logical1_o;

#endif

#if Rte_SysCon_Variant_CSDR_1

    boolean rtb_TmpSignalConversionAtVeDFIR_b_PostCo;

#endif

#if Rte_SysCon_Variant_CSDR_1

    boolean rtb_Logical5_j;

#endif

#if Rte_SysCon_Variant_CSDR_1

    boolean rtb_AND_m0;

#endif

#if Rte_SysCon_Variant_CSDR_1

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;

#endif

#if Rte_SysCon_Variant_CSDR_1

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_j;

#endif

#if Rte_SysCon_Variant_CSDR_1

    sint32 VeCSDR_b_C1_ECMCommOk_tmp;

#endif

#if Rte_SysCon_Variant_CSDR_1

    uint32 VeCSDR_b_C1_ECMCommOk_tmp_0;

#endif

#if Rte_SysCon_Variant_CSDR_1

    boolean rtb_Logical1_c_tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/CSDR_MedTED'
     */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommECM_A_BusB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommECM_A_BusB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommECM_A_BusB_Value
        (&CSDR_ac_DW.StatusByte_LostCommECM_A_BusB);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSDD'
     */
    /* Outputs for Atomic SubSystem: '<S6>/CSDD_CltchSlpDiag' */
    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_TransFrictElmntA_Slip' incorporates:
     *  Inport: '<Root>/VeCSLR_b_NC1Trigger'
     *  Inport: '<Root>/VeCSLR_b_NC1_FA'
     *  Inport: '<Root>/VeCSLR_b_NC2Trigger'
     *  Inport: '<Root>/VeCSLR_b_NC2_FA'
     *  Inport: '<Root>/VeCSLR_n_Clch1_SlipSpeed'
     *  Inport: '<Root>/VeCSLR_n_Clch2_SlipSpeed'
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  Inport: '<Root>/VeESPR_b_BuffrCrnkDiagFailing'
     *  Inport: '<Root>/VeESPR_e_EngineSpeedStatus'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  Inport: '<Root>/VeHCCR_M_Clch1_TorqEst'
     *  Inport: '<Root>/VeHCCR_M_Clch2_TorqEst'
     *  Inport: '<Root>/VeHSER_e_RngSt'
     *  Inport: '<Root>/VeHTDR_M_Clch1_TCR_Actl'
     *  Inport: '<Root>/VeHTDR_M_Clch2_TCR_Actl'
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     *  Inport: '<Root>/VeTCPR_b_C1_SlipDetected'
     *  Inport: '<Root>/VeTCPR_b_C2_SlipDetected'
     *  Inport: '<Root>/VeTISR_e_InpSpdSource'
     *  SignalConversion generated from: '<S1>/VeDFIR_b_IsDiagGlobalConditionsValid'
     *  SignalConversion generated from: '<S1>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_TransFrictElmntB_Slip'
     *  UnitDelay: '<S15>/Unit Delay'
     *  UnitDelay: '<S20>/Unit Delay'
     */
#if Rte_SysCon_Variant_CSDR_1

    /* Outputs for Atomic SubSystem: '<S9>/CSDD_CltchSlpDiag' */
    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_TransFrictElmntA_Slip' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_TransFrictElmntA_Slip'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_TransFrictElmntA_Slip_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_TransFrictElmntB_Slip' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_TransFrictElmntB_Slip'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_TransFrictElmntB_Slip_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_j);

    /* SignalConversion generated from: '<S1>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* SignalConversion generated from: '<S1>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);
    (void)Rte_Read_VeHCCR_M_Clch2_TorqEst_Value(&rtb_Switch1);
    (void)Rte_Read_VeHCCR_M_Clch1_TorqEst_Value(&tmpRead);
    (void)Rte_Read_VeCSLR_b_NC2Trigger_Value(&rtb_Logical2_d);
    (void)Rte_Read_VeCSLR_b_NC1Trigger_Value(&rtb_Logical2);
    (void)Rte_Read_VeESPR_e_EngineSpeedStatus_Value
        ((&(VeCSDR_e_EngineSpeedStatus)));
    (void)Rte_Read_VeTCPR_b_C2_SlipDetected_Value((&(VeCSDR_b_C2_SlipDetected)));
    (void)Rte_Read_VeTCPR_b_C1_SlipDetected_Value((&(VeCSDR_b_C1_SlipDetected)));
    (void)Rte_Read_VeESPR_b_BuffrCrnkDiagFailing_Value
        ((&(VeCSDR_b_BuffrCrnkDiagFailing)));
    (void)Rte_Read_VeTISR_e_InpSpdSource_Value((&(VeCSDR_e_InputSpdSource)));
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value((&(VeCSDR_e_PMM_PowerMode)));
    (void)Rte_Read_VeHTDR_M_Clch2_TCR_Actl_Value((&(VeCSDR_M_C2_TCRActl)));
    (void)Rte_Read_VeHTDR_M_Clch1_TCR_Actl_Value((&(VeCSDR_M_C1_TCRActl)));
    (void)Rte_Read_VeHSER_e_RngSt_Value((&(VeCSDR_e_Clch_RngSt)));
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value((&(VeCSDR_e_EngStartStopSt)));
    (void)Rte_Read_VeCSLR_n_Clch2_SlipSpeed_Value((&(VeCSDR_n_C2_SlipSpeed)));
    (void)Rte_Read_VeCSLR_n_Clch1_SlipSpeed_Value((&(VeCSDR_n_C1_SlipSpeed)));
    (void)Rte_Read_VeCSLR_b_NC2_FA_Value((&(VeCSDR_b_NC2_FA)));
    (void)Rte_Read_VeCSLR_b_NC1_FA_Value((&(VeCSDR_b_NC1_FA)));

    /* Outputs for Function Call SubSystem: '<S1>/CSDI_Internal_Var' */
    /* Switch: '<S7>/Switch55' incorporates:
     *  Constant: '<S204>/Calib'
     *  Inport: '<Root>/VeCSLR_b_NC1Trigger'
     *  Inport: '<Root>/VeCSLR_b_NC1_FA'
     *  Inport: '<Root>/VeCSLR_b_NC2Trigger'
     *  Inport: '<Root>/VeCSLR_b_NC2_FA'
     *  Inport: '<Root>/VeCSLR_n_Clch1_SlipSpeed'
     *  Inport: '<Root>/VeCSLR_n_Clch2_SlipSpeed'
     *  Inport: '<Root>/VeESPR_b_BuffrCrnkDiagFailing'
     *  Inport: '<Root>/VeESPR_e_EngineSpeedStatus'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  Inport: '<Root>/VeHCCR_M_Clch1_TorqEst'
     *  Inport: '<Root>/VeHCCR_M_Clch2_TorqEst'
     *  Inport: '<Root>/VeHSER_e_RngSt'
     *  Inport: '<Root>/VeHTDR_M_Clch1_TCR_Actl'
     *  Inport: '<Root>/VeHTDR_M_Clch2_TCR_Actl'
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     *  Inport: '<Root>/VeTCPR_b_C1_SlipDetected'
     *  Inport: '<Root>/VeTCPR_b_C2_SlipDetected'
     *  Inport: '<Root>/VeTISR_e_InpSpdSource'
     */
    if (KeCSDR_b_NC1_FAOvrdEnbl)
    {
        /* Switch: '<S7>/Switch55' incorporates:
         *  Constant: '<S205>/Calib'
         */
        VeCSDR_b_NC1_FA = KeCSDR_b_NC1_FAOvrdVal;
    }

    /* End of Switch: '<S7>/Switch55' */

    /* Switch: '<S7>/Switch56' incorporates:
     *  Constant: '<S206>/Calib'
     */
    if (KeCSDR_b_NC2_FAOvrdEnbl)
    {
        /* Switch: '<S7>/Switch56' incorporates:
         *  Constant: '<S207>/Calib'
         *  Inport: '<Root>/VeCSLR_b_NC2_FA'
         */
        VeCSDR_b_NC2_FA = KeCSDR_b_NC2_FAOvrdVal;
    }

    /* End of Switch: '<S7>/Switch56' */

    /* Switch: '<S7>/Switch6' incorporates:
     *  Constant: '<S195>/Calib'
     */
    if (KeCSDR_b_C1_SlipSpeedOvrdEnbl)
    {
        /* Switch: '<S7>/Switch6' incorporates:
         *  Constant: '<S215>/Calib'
         *  Inport: '<Root>/VeCSLR_n_Clch1_SlipSpeed'
         */
        VeCSDR_n_C1_SlipSpeed = KeCSDR_n_C1_SlipSpeedOvrdVal;
    }

    /* End of Switch: '<S7>/Switch6' */

    /* Switch: '<S7>/Switch7' incorporates:
     *  Constant: '<S199>/Calib'
     */
    if (KeCSDR_b_C2_SlipSpeedOvrdEnbl)
    {
        /* Switch: '<S7>/Switch7' incorporates:
         *  Constant: '<S216>/Calib'
         *  Inport: '<Root>/VeCSLR_n_Clch2_SlipSpeed'
         */
        VeCSDR_n_C2_SlipSpeed = KeCSDR_n_C2_SlipSpeedOvrdVal;
    }

    /* End of Switch: '<S7>/Switch7' */

    /* Switch: '<S7>/Switch13' incorporates:
     *  Constant: '<S201>/Calib'
     */
    if (KeCSDR_b_EngStartStopStOvrdEnbl)
    {
        /* Switch: '<S7>/Switch13' incorporates:
         *  Constant: '<S210>/Calib'
         *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
         */
        VeCSDR_e_EngStartStopSt = KeCSDR_e_EngStartStopStOvrdVal;
    }

    /* End of Switch: '<S7>/Switch13' */

    /* Switch: '<S7>/Switch23' incorporates:
     *  Constant: '<S209>/Calib'
     */
    if (KeCSDR_b_RngStOvrdEnbl)
    {
        /* Switch: '<S7>/Switch23' incorporates:
         *  Constant: '<S214>/Calib'
         *  Inport: '<Root>/VeHSER_e_RngSt'
         */
        VeCSDR_e_Clch_RngSt = KeCSDR_e_RngStOvrdVal;
    }

    /* End of Switch: '<S7>/Switch23' */

    /* Switch: '<S7>/Switch11' incorporates:
     *  Constant: '<S196>/Calib'
     */
    if (KeCSDR_b_C1_TCR_ActlOvrdEnbl)
    {
        /* Switch: '<S7>/Switch11' incorporates:
         *  Constant: '<S189>/Calib'
         *  Inport: '<Root>/VeHTDR_M_Clch1_TCR_Actl'
         */
        VeCSDR_M_C1_TCRActl = KeCSDR_M_C1_TCR_ActlOvrdVal;
    }

    /* End of Switch: '<S7>/Switch11' */

    /* Switch: '<S7>/Switch12' incorporates:
     *  Constant: '<S200>/Calib'
     */
    if (KeCSDR_b_C2_TCR_ActlOvrdEnbl)
    {
        /* Switch: '<S7>/Switch12' incorporates:
         *  Constant: '<S190>/Calib'
         *  Inport: '<Root>/VeHTDR_M_Clch2_TCR_Actl'
         */
        VeCSDR_M_C2_TCRActl = KeCSDR_M_C2_TCR_ActlOvrdVal;
    }

    /* End of Switch: '<S7>/Switch12' */

    /* Switch: '<S7>/Switch32' incorporates:
     *  Constant: '<S208>/Calib'
     */
    if (KeCSDR_b_PMM_PowerModeOvrdEnbl)
    {
        /* Switch: '<S7>/Switch32' incorporates:
         *  Constant: '<S213>/Calib'
         *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
         */
        VeCSDR_e_PMM_PowerMode = KeCSDR_e_PMM_PowerModeOvrdVal;
    }

    /* End of Switch: '<S7>/Switch32' */

    /* Switch: '<S7>/Switch62' incorporates:
     *  Constant: '<S203>/Calib'
     */
    if (KeCSDR_b_InptSpdSourceOvrdEnbl)
    {
        /* Switch: '<S7>/Switch62' incorporates:
         *  Constant: '<S212>/Calib'
         *  Inport: '<Root>/VeTISR_e_InpSpdSource'
         */
        VeCSDR_e_InputSpdSource = KeCSDR_e_InptSpdSourceOvrdVal;
    }

    /* End of Switch: '<S7>/Switch62' */

    /* Switch: '<S7>/Switch16' incorporates:
     *  Constant: '<S191>/Calib'
     */
    if (KeCSDR_b_BuffrCrnkDiagFailingOvrdEnbl)
    {
        /* Switch: '<S7>/Switch16' incorporates:
         *  Constant: '<S192>/Calib'
         *  Inport: '<Root>/VeESPR_b_BuffrCrnkDiagFailing'
         */
        VeCSDR_b_BuffrCrnkDiagFailing = KeCSDR_b_BuffrCrnkDiagFailingOvrdVal;
    }

    /* End of Switch: '<S7>/Switch16' */

    /* Switch: '<S7>/Switch67' incorporates:
     *  Constant: '<S193>/Calib'
     */
    if (KeCSDR_b_C1_SlipDetectedOvrdEnbl)
    {
        /* Switch: '<S7>/Switch67' incorporates:
         *  Constant: '<S194>/Calib'
         *  Inport: '<Root>/VeTCPR_b_C1_SlipDetected'
         */
        VeCSDR_b_C1_SlipDetected = KeCSDR_b_C1_SlipDetectedOvrdVal;
    }

    /* End of Switch: '<S7>/Switch67' */

    /* Switch: '<S7>/Switch68' incorporates:
     *  Constant: '<S197>/Calib'
     */
    if (KeCSDR_b_C2_SlipDetectedOvrdEnbl)
    {
        /* Switch: '<S7>/Switch68' incorporates:
         *  Constant: '<S198>/Calib'
         *  Inport: '<Root>/VeTCPR_b_C2_SlipDetected'
         */
        VeCSDR_b_C2_SlipDetected = KeCSDR_b_C2_SlipDetectedOvrdVal;
    }

    /* End of Switch: '<S7>/Switch68' */

    /* Switch: '<S7>/Switch70' incorporates:
     *  Constant: '<S202>/Calib'
     */
    if (KeCSDR_b_EngineSpeedStatusOvrdEnbl)
    {
        /* Switch: '<S7>/Switch70' incorporates:
         *  Constant: '<S211>/Calib'
         *  Inport: '<Root>/VeESPR_e_EngineSpeedStatus'
         */
        VeCSDR_e_EngineSpeedStatus = KeCSDR_e_EngineSpeedStatusOvrdVal;
    }

    /* End of Switch: '<S7>/Switch70' */
    /* End of Outputs for SubSystem: '<S1>/CSDI_Internal_Var' */

    /* Logic: '<S10>/Logical4' incorporates:
     *  Constant: '<S26>/Constant'
     *  Constant: '<S27>/Constant'
     *  RelationalOperator: '<S10>/Comparison4'
     *  RelationalOperator: '<S10>/Comparison5'
     */
    rtb_Logical4_j = ((((uint32)VeCSDR_e_PMM_PowerMode) ==
                       CePMDR_e_PowerMode_Run) || (((uint32)
                        VeCSDR_e_PMM_PowerMode) == CePMDR_e_PowerMode_Crank));

    /* If: '<S24>/If' incorporates:
     *  DataTypeConversion: '<S24>/Data Type Conversion'
     *  Switch: '<S7>/Switch23'
     */
    if (((sint32)VeCSDR_e_Clch_RngSt) == 3)
    {
        /* Outputs for IfAction SubSystem: '<S24>/M1' incorporates:
         *  ActionPort: '<S179>/Action Port'
         */
        /* RelationalOperator: '<S90>/Comparison2' incorporates:
         *  Constant: '<S179>/TRUE Constant'
         *  SignalConversion generated from: '<S179>/C1_LockedCntrl'
         */
        rtb_Comparison2_b = true;

        /* RelationalOperator: '<S158>/Comparison2' incorporates:
         *  Constant: '<S179>/FALSE Constant1'
         *  SignalConversion generated from: '<S179>/C2_LockedCntrl'
         */
        rtb_Comparison2_o = false;

        /* End of Outputs for SubSystem: '<S24>/M1' */
    }
    else if (((sint32)VeCSDR_e_Clch_RngSt) == 4)
    {
        /* Outputs for IfAction SubSystem: '<S24>/M2' incorporates:
         *  ActionPort: '<S180>/Action Port'
         */
        /* RelationalOperator: '<S90>/Comparison2' incorporates:
         *  Constant: '<S180>/FALSE Constant'
         *  SignalConversion generated from: '<S180>/C1_LockedCntrl'
         */
        rtb_Comparison2_b = false;

        /* RelationalOperator: '<S158>/Comparison2' incorporates:
         *  Constant: '<S180>/TRUE Constant'
         *  SignalConversion generated from: '<S180>/C2_LockedCntrl'
         */
        rtb_Comparison2_o = true;

        /* End of Outputs for SubSystem: '<S24>/M2' */
    }
    else if (((sint32)VeCSDR_e_Clch_RngSt) == 6)
    {
        /* Outputs for IfAction SubSystem: '<S24>/G1' incorporates:
         *  ActionPort: '<S175>/Action Port'
         */
        /* RelationalOperator: '<S90>/Comparison2' incorporates:
         *  Constant: '<S175>/TRUE Constant'
         *  SignalConversion generated from: '<S175>/C1_LockedCntrl'
         */
        rtb_Comparison2_b = true;

        /* RelationalOperator: '<S158>/Comparison2' incorporates:
         *  Constant: '<S175>/FALSE Constant'
         *  SignalConversion generated from: '<S175>/C2_LockedCntrl'
         */
        rtb_Comparison2_o = false;

        /* End of Outputs for SubSystem: '<S24>/G1' */
    }
    else if (((sint32)VeCSDR_e_Clch_RngSt) == 7)
    {
        /* Outputs for IfAction SubSystem: '<S24>/G2' incorporates:
         *  ActionPort: '<S176>/Action Port'
         */
        /* RelationalOperator: '<S90>/Comparison2' incorporates:
         *  Constant: '<S176>/TRUE Constant'
         *  SignalConversion generated from: '<S176>/C1_LockedCntrl'
         */
        rtb_Comparison2_b = true;

        /* RelationalOperator: '<S158>/Comparison2' incorporates:
         *  Constant: '<S176>/TRUE Constant1'
         *  SignalConversion generated from: '<S176>/C2_LockedCntrl'
         */
        rtb_Comparison2_o = true;

        /* End of Outputs for SubSystem: '<S24>/G2' */
    }
    else if (((sint32)VeCSDR_e_Clch_RngSt) == 8)
    {
        /* Outputs for IfAction SubSystem: '<S24>/G3' incorporates:
         *  ActionPort: '<S177>/Action Port'
         */
        /* RelationalOperator: '<S90>/Comparison2' incorporates:
         *  Constant: '<S177>/FALSE Constant'
         *  SignalConversion generated from: '<S177>/C1_LockedCntrl'
         */
        rtb_Comparison2_b = false;

        /* RelationalOperator: '<S158>/Comparison2' incorporates:
         *  Constant: '<S177>/TRUE Constant'
         *  SignalConversion generated from: '<S177>/C2_LockedCntrl'
         */
        rtb_Comparison2_o = true;

        /* End of Outputs for SubSystem: '<S24>/G3' */
    }
    else if (((sint32)VeCSDR_e_Clch_RngSt) == 9)
    {
        /* Outputs for IfAction SubSystem: '<S24>/G4' incorporates:
         *  ActionPort: '<S178>/Action Port'
         */
        /* RelationalOperator: '<S90>/Comparison2' incorporates:
         *  Constant: '<S178>/FALSE Constant'
         *  SignalConversion generated from: '<S178>/C1_LockedCntrl'
         */
        rtb_Comparison2_b = false;

        /* RelationalOperator: '<S158>/Comparison2' incorporates:
         *  Constant: '<S178>/TRUE Constant'
         *  SignalConversion generated from: '<S178>/C2_LockedCntrl'
         */
        rtb_Comparison2_o = true;

        /* End of Outputs for SubSystem: '<S24>/G4' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S24>/N_or_Else' incorporates:
         *  ActionPort: '<S181>/Action Port'
         */
        /* RelationalOperator: '<S90>/Comparison2' incorporates:
         *  Constant: '<S181>/FALSE Constant3'
         *  SignalConversion generated from: '<S181>/C1_LockedCntrl'
         */
        rtb_Comparison2_b = false;

        /* RelationalOperator: '<S158>/Comparison2' incorporates:
         *  Constant: '<S181>/FALSE Constant'
         *  SignalConversion generated from: '<S181>/C2_LockedCntrl'
         */
        rtb_Comparison2_o = false;

        /* End of Outputs for SubSystem: '<S24>/N_or_Else' */
    }

    /* End of If: '<S24>/If' */

    /* S-Function (sfix_bitop): '<S99>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S99>/StatusByte_LostCommECM_A_BusB'
     *  S-Function (sfix_bitop): '<S166>/Bitwise Operator2'
     */
    VeCSDR_b_C1_ECMCommOk_tmp = ((sint32)
        CSDR_ac_DW.StatusByte_LostCommECM_A_BusB) & 1;

    /* S-Function (sfix_bitop): '<S99>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S99>/StatusByte_LostCommECM_A_BusB'
     *  S-Function (sfix_bitop): '<S166>/Bitwise Operator1'
     */
    VeCSDR_b_C1_ECMCommOk_tmp_0 = ((uint32)
        CSDR_ac_DW.StatusByte_LostCommECM_A_BusB) & 64U;

    /* Logic: '<S18>/Logical1' incorporates:
     *  Constant: '<S100>/Calib'
     *  Constant: '<S99>/Constant1'
     *  Constant: '<S99>/Constant2'
     *  Logic: '<S18>/Logical'
     *  Logic: '<S99>/Logical Operator'
     *  RelationalOperator: '<S99>/Relational Operator1'
     *  RelationalOperator: '<S99>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S99>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S99>/Bitwise Operator2'
     */
    VeCSDR_b_C1_ECMCommOk = (((VeCSDR_b_C1_ECMCommOk_tmp <= 0) ||
        (VeCSDR_b_C1_ECMCommOk_tmp_0 != 0U)) || (!KeCSDR_b_C1_EnaLostCommECMChk));

    /* Outputs for Function Call SubSystem: '<S1>/CSDI_Internal_Var' */
    /* Logic: '<S18>/Logical5' incorporates:
     *  Gain: '<S217>/Gain'
     *  Logic: '<S18>/Logical8'
     */
    VeCSDR_b_C1_SlipCompTrigger = (((((!VeCSDR_b_NC1_FA) && rtb_Logical4_j) &&
        rtb_Comparison2_b) && (VeCSDR_b_C1_ECMCommOk)) && rtb_Logical2);

    /* End of Outputs for SubSystem: '<S1>/CSDI_Internal_Var' */

    /* Outputs for Enabled SubSystem: '<S10>/CSDD_C1SlipCalc' incorporates:
     *  EnablePort: '<S14>/Enable'
     */
    if (VeCSDR_b_C1_SlipCompTrigger)
    {
        /* Gain: '<S47>/Gain' */
        VeCSDR_n_RawC1SlipSpeed = VeCSDR_n_C1_SlipSpeed;

        /* Outputs for Atomic SubSystem: '<S14>/Limiter' */
        /* Switch: '<S45>/Switch1' incorporates:
         *  Constant: '<S42>/Calib'
         *  RelationalOperator: '<S45>/Relational Operator'
         */
        if (KeCSDR_n_C1Slip_MaxVal < VeCSDR_n_RawC1SlipSpeed)
        {
            /* Abs: '<S14>/Abs1' */
            VeCSDR_n_C1SlipSpeed_Lmtd = KeCSDR_n_C1Slip_MaxVal;
        }
        else
        {
            /* Abs: '<S14>/Abs1' */
            VeCSDR_n_C1SlipSpeed_Lmtd = VeCSDR_n_RawC1SlipSpeed;
        }

        /* End of Switch: '<S45>/Switch1' */

        /* Switch: '<S45>/Switch' incorporates:
         *  Constant: '<S43>/Calib'
         *  RelationalOperator: '<S45>/Relational Operator1'
         */
        if (VeCSDR_n_C1SlipSpeed_Lmtd <= KeCSDR_n_C1Slip_MinVal)
        {
            /* Switch: '<S45>/Switch' */
            VeCSDR_n_C1SlipSpeed_Lmtd = KeCSDR_n_C1Slip_MinVal;
        }

        /* End of Switch: '<S45>/Switch' */
        /* End of Outputs for SubSystem: '<S14>/Limiter' */

        /* Outputs for Atomic SubSystem: '<S14>/EdgeRising1' */
        /* Logic: '<S35>/OR1' incorporates:
         *  UnitDelay: '<S35>/Unit Delay'
         */
        rtb_Comparison2_b = !CSDR_ac_DW.UnitDelay_DSTATE_km;

        /* Update for UnitDelay: '<S35>/Unit Delay' incorporates:
         *  Constant: '<S14>/TRUE Constant'
         */
        CSDR_ac_DW.UnitDelay_DSTATE_km = true;

        /* Outputs for Atomic SubSystem: '<S14>/LowPass' */
        /* Switch: '<S46>/Switch1' incorporates:
         *  Logic: '<S35>/AND'
         */
        if (rtb_Comparison2_b)
        {
            /* Switch: '<S46>/Switch1' */
            VeCSDR_n_FiltrdC1SlipSpeed = VeCSDR_n_C1SlipSpeed_Lmtd;
        }
        else
        {
            /* Switch: '<S46>/Switch1' incorporates:
             *  Constant: '<S39>/Calib'
             *  Product: '<S46>/Multiplication'
             *  Sum: '<S46>/Subtraction'
             *  Sum: '<S46>/Summation'
             *  UnitDelay: '<S46>/Unit Delay'
             */
            VeCSDR_n_FiltrdC1SlipSpeed = ((VeCSDR_n_C1SlipSpeed_Lmtd -
                VeCSDR_n_FiltrdC1SlipSpeed) * KeCSDR_k_C1SlipFilterCoeff) +
                VeCSDR_n_FiltrdC1SlipSpeed;
        }

        /* End of Switch: '<S46>/Switch1' */
        /* End of Outputs for SubSystem: '<S14>/LowPass' */
        /* End of Outputs for SubSystem: '<S14>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S14>/DeadBand' */
        /* Switch: '<S34>/Switch1' incorporates:
         *  Constant: '<S40>/Calib'
         *  Constant: '<S41>/Calib'
         *  RelationalOperator: '<S34>/Greater  Than'
         *  RelationalOperator: '<S34>/Greater  Than1'
         *  Switch: '<S34>/Switch2'
         */
        if (VeCSDR_n_FiltrdC1SlipSpeed >= KeCSDR_n_C1SlipDeadBandMax)
        {
            /* Switch: '<S34>/Switch1' incorporates:
             *  Sum: '<S34>/Subtraction'
             */
            VeCSDR_n_DeadBandC1SlipSpeed = VeCSDR_n_FiltrdC1SlipSpeed -
                KeCSDR_n_C1SlipDeadBandMax;
        }
        else if (VeCSDR_n_FiltrdC1SlipSpeed <= KeCSDR_n_C1SlipDeadBandMin)
        {
            /* Switch: '<S34>/Switch2' incorporates:
             *  Constant: '<S41>/Calib'
             *  Sum: '<S34>/Subtraction1'
             *  Switch: '<S34>/Switch1'
             */
            VeCSDR_n_DeadBandC1SlipSpeed = VeCSDR_n_FiltrdC1SlipSpeed -
                KeCSDR_n_C1SlipDeadBandMin;
        }
        else
        {
            /* Switch: '<S34>/Switch1' incorporates:
             *  Constant: '<S34>/Constant Value'
             *  Switch: '<S34>/Switch2'
             */
            VeCSDR_n_DeadBandC1SlipSpeed = 0.0F;
        }

        /* End of Switch: '<S34>/Switch1' */
        /* End of Outputs for SubSystem: '<S14>/DeadBand' */

        /* Outputs for Function Call SubSystem: '<S1>/CSDI_Internal_Var' */
        /* Lookup_n-D: '<S44>/Vector' incorporates:
         *  Abs: '<S14>/Abs1'
         *  Abs: '<S14>/Abs2'
         *  Gain: '<S219>/Gain'
         *  Sum: '<S14>/Sum1'
         */
        VeCSDR_scl_C1ActTrqRatio = look1_iflf_binlca_16a(fabsf(tmpRead - fabsf
            (VeCSDR_M_C1_TCRActl)), ((const float32 *)
            &(KxCSDR_scl_C1ActTrqRatio[0])), ((const float32 *)
            &(KtCSDR_scl_C1ActTrqRatio[0])), 9U);

        /* End of Outputs for SubSystem: '<S1>/CSDI_Internal_Var' */

        /* Product: '<S14>/Product3' incorporates:
         *  Abs: '<S14>/Abs'
         *  Constant: '<S36>/Calib'
         *  Constant: '<S37>/Calib'
         *  Constant: '<S38>/Calib'
         *  Product: '<S14>/Product'
         *  Product: '<S14>/Product1'
         */
        VeCSDR_phi_C1Slip = fabsf((VeCSDR_n_DeadBandC1SlipSpeed *
            KeCSDR_Cf_ConvertRPMtoRPS) * HeCSDR_t_MedTED) *
            KeCSDR_Cf_ConvertRevToDeg;

        /* Product: '<S14>/Product2' */
        VeCSDR_phi_C1SlipToIntegrate = VeCSDR_phi_C1Slip *
            VeCSDR_scl_C1ActTrqRatio;
    }

    /* End of Outputs for SubSystem: '<S10>/CSDD_C1SlipCalc' */

    /* Outputs for Function Call SubSystem: '<S1>/CSDI_Internal_Var' */
    /* RelationalOperator: '<S92>/Comparison' incorporates:
     *  Abs: '<S92>/Abs3'
     *  Constant: '<S29>/Calib'
     *  Gain: '<S219>/Gain'
     *  Product: '<S92>/Product4'
     */
    VeCSDR_b_C1TrqCapEnbld = (fabsf(VeCSDR_M_C1_TCRActl) > (KeCSDR_K_C1CapTh *
        tmpRead));

    /* End of Outputs for SubSystem: '<S1>/CSDI_Internal_Var' */

    /* Logic: '<S92>/Logical2' */
    rtb_Logical2 = !VeCSDR_b_C1TrqCapEnbld;

    /* Outputs for Atomic SubSystem: '<S17>/Signal Latch On With Reset' */
    /* Logic: '<S86>/OR1' incorporates:
     *  Constant: '<S17>/Constant Value2'
     *  Logic: '<S86>/NOT'
     *  Logic: '<S86>/OR'
     *  RelationalOperator: '<S17>/Comparison5'
     *  UnitDelay: '<S86>/Unit Delay'
     */
    VeCSDR_b_C1SlipLatched = ((VeCSDR_n_DeadBandC1SlipSpeed != 0.0F) ||
        ((!rtb_Logical2) && (VeCSDR_b_C1SlipLatched)));

    /* End of Outputs for SubSystem: '<S17>/Signal Latch On With Reset' */

    /* Switch: '<S94>/Switch1' */
    if (VeCSDR_b_C1SlipLatched)
    {
        /* Switch: '<S94>/Switch1' incorporates:
         *  Constant: '<S90>/Constant Value'
         */
        VeCSDR_t_C1TrCapDbncTmr = 0.0F;
    }
    else
    {
        /* Switch: '<S94>/Switch1' incorporates:
         *  UnitDelay: '<S94>/Unit Delay'
         */
        VeCSDR_t_C1TrCapDbncTmr = CSDR_ac_DW.UnitDelay_DSTATE;
    }

    /* End of Switch: '<S94>/Switch1' */

    /* Lookup_n-D: '<S84>/Vector' incorporates:
     *  Switch: '<S94>/Switch1'
     */
    VeCSDR_phi_C1HealingFctr = look1_iflf_binlca_16a(VeCSDR_t_C1TrCapDbncTmr, ((
        const float32 *)&(KxCSDR_phi_C1SlipHealingFctr[0])), ((const float32 *)
        &(KtCSDR_phi_C1SlipHealingFctr[0])), 5U);

    /* Outputs for Atomic SubSystem: '<S91>/EdgeRising1' */
    /* Logic: '<S96>/AND' incorporates:
     *  Logic: '<S96>/OR1'
     *  UnitDelay: '<S96>/Unit Delay'
     */
    rtb_AND_m0 = !CSDR_ac_DW.UnitDelay_DSTATE_p;

    /* Update for UnitDelay: '<S96>/Unit Delay' incorporates:
     *  Constant: '<S91>/TRUE Constant1'
     */
    CSDR_ac_DW.UnitDelay_DSTATE_p = true;

    /* End of Outputs for SubSystem: '<S91>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S91>/EdgeRising3' */
    /* Logic: '<S97>/AND' incorporates:
     *  Logic: '<S97>/OR1'
     *  UnitDelay: '<S97>/Unit Delay'
     */
    rtb_AND_ik = (rtb_Logical2 && (!CSDR_ac_DW.UnitDelay_DSTATE_h));

    /* Update for UnitDelay: '<S97>/Unit Delay' */
    CSDR_ac_DW.UnitDelay_DSTATE_h = rtb_Logical2;

    /* End of Outputs for SubSystem: '<S91>/EdgeRising3' */

    /* RelationalOperator: '<S90>/Comparison2' incorporates:
     *  Constant: '<S31>/Calib'
     */
    rtb_Comparison2_b = (VeCSDR_t_C1TrCapDbncTmr == KeCSDR_t_DbncC1TrqCap);

    /* Switch: '<S98>/Switch1' incorporates:
     *  Constant: '<S91>/TRUE Constant1'
     */
    if (rtb_AND_m0)
    {
        CSDR_ac_DW.UnitDelay_DSTATE_b = true;
    }

    /* Logic: '<S91>/Logical5' incorporates:
     *  Logic: '<S91>/Logical12'
     *  Logic: '<S91>/Logical13'
     */
    rtb_AND_ik = (((!CSDR_ac_DW.UnitDelay_DSTATE_b) && rtb_AND_ik) ||
                  rtb_Comparison2_b);

    /* Outputs for Atomic SubSystem: '<S91>/EdgeRising' */
    /* Logic: '<S95>/AND' incorporates:
     *  Logic: '<S95>/OR1'
     *  UnitDelay: '<S95>/Unit Delay'
     */
    VeCSDR_b_C1UnlearnTrigger = (rtb_AND_ik && (!CSDR_ac_DW.UnitDelay_DSTATE_jq));

    /* Update for UnitDelay: '<S95>/Unit Delay' */
    CSDR_ac_DW.UnitDelay_DSTATE_jq = rtb_AND_ik;

    /* End of Outputs for SubSystem: '<S91>/EdgeRising' */

    /* Outputs for Enabled SubSystem: '<S16>/UnlearnActive1' incorporates:
     *  EnablePort: '<S85>/Enable'
     */
    if (VeCSDR_b_C1UnlearnTrigger)
    {
        /* Sum: '<S85>/Sum1' incorporates:
         *  DataStoreRead: '<S85>/Data Store Read1'
         */
        VeCSDR_phi_C1HealedSlip = CSDR_ac_DW.NeCSDR_phi_C1SlipIntegrated -
            VeCSDR_phi_C1HealingFctr;

        /* MinMax: '<S85>/MinMax2' incorporates:
         *  Constant: '<S85>/Constant Value1'
         *  DataStoreWrite: '<S85>/Data Store Write2'
         */
        CSDR_ac_DW.NeCSDR_phi_C1SlipIntegrated = fmaxf(0.0F,
            VeCSDR_phi_C1HealedSlip);
    }

    /* End of Outputs for SubSystem: '<S16>/UnlearnActive1' */

    /* Logic: '<S23>/Logical1' incorporates:
     *  Constant: '<S166>/Constant1'
     *  Constant: '<S166>/Constant2'
     *  Constant: '<S167>/Calib'
     *  Logic: '<S166>/Logical Operator'
     *  Logic: '<S23>/Logical'
     *  RelationalOperator: '<S166>/Relational Operator1'
     *  RelationalOperator: '<S166>/Relational Operator2'
     */
    VeCSDR_b_C2_ECMCommOk = (((VeCSDR_b_C1_ECMCommOk_tmp <= 0) ||
        (VeCSDR_b_C1_ECMCommOk_tmp_0 != 0U)) || (!KeCSDR_b_C2_EnaLostCommECMChk));

    /* Outputs for Function Call SubSystem: '<S1>/CSDI_Internal_Var' */
    /* Logic: '<S23>/Logical5' incorporates:
     *  Gain: '<S218>/Gain'
     *  Logic: '<S23>/Logical8'
     */
    VeCSDR_b_C2_SlipCompTrigger = (((((!VeCSDR_b_NC2_FA) && rtb_Logical4_j) &&
        rtb_Comparison2_o) && (VeCSDR_b_C2_ECMCommOk)) && rtb_Logical2_d);

    /* End of Outputs for SubSystem: '<S1>/CSDI_Internal_Var' */

    /* Outputs for Enabled SubSystem: '<S10>/CSDD_C2SlipCalc' incorporates:
     *  EnablePort: '<S19>/Enable'
     */
    if (VeCSDR_b_C2_SlipCompTrigger)
    {
        /* Gain: '<S114>/Gain' */
        VeCSDR_n_RawC2SlipSpeed = VeCSDR_n_C2_SlipSpeed;

        /* Outputs for Atomic SubSystem: '<S19>/Limiter' */
        /* Switch: '<S112>/Switch1' incorporates:
         *  Constant: '<S109>/Calib'
         *  RelationalOperator: '<S112>/Relational Operator'
         */
        if (KeCSDR_n_C2Slip_MaxVal < VeCSDR_n_RawC2SlipSpeed)
        {
            /* Abs: '<S19>/Abs1' */
            VeCSDR_n_C2SlipSpeed_Lmtd = KeCSDR_n_C2Slip_MaxVal;
        }
        else
        {
            /* Abs: '<S19>/Abs1' */
            VeCSDR_n_C2SlipSpeed_Lmtd = VeCSDR_n_RawC2SlipSpeed;
        }

        /* End of Switch: '<S112>/Switch1' */

        /* Switch: '<S112>/Switch' incorporates:
         *  Constant: '<S110>/Calib'
         *  RelationalOperator: '<S112>/Relational Operator1'
         */
        if (VeCSDR_n_C2SlipSpeed_Lmtd <= KeCSDR_n_C2Slip_MinVal)
        {
            /* Switch: '<S112>/Switch' */
            VeCSDR_n_C2SlipSpeed_Lmtd = KeCSDR_n_C2Slip_MinVal;
        }

        /* End of Switch: '<S112>/Switch' */
        /* End of Outputs for SubSystem: '<S19>/Limiter' */

        /* Outputs for Atomic SubSystem: '<S19>/EdgeRising1' */
        /* Logic: '<S102>/OR1' incorporates:
         *  UnitDelay: '<S102>/Unit Delay'
         */
        rtb_Comparison2_o = !CSDR_ac_DW.UnitDelay_DSTATE_fq;

        /* Update for UnitDelay: '<S102>/Unit Delay' incorporates:
         *  Constant: '<S19>/TRUE Constant'
         */
        CSDR_ac_DW.UnitDelay_DSTATE_fq = true;

        /* Outputs for Atomic SubSystem: '<S19>/LowPass' */
        /* Switch: '<S113>/Switch1' incorporates:
         *  Logic: '<S102>/AND'
         */
        if (rtb_Comparison2_o)
        {
            /* Switch: '<S113>/Switch1' */
            VeCSDR_n_FiltrdC2SlipSpeed = VeCSDR_n_C2SlipSpeed_Lmtd;
        }
        else
        {
            /* Switch: '<S113>/Switch1' incorporates:
             *  Constant: '<S106>/Calib'
             *  Product: '<S113>/Multiplication'
             *  Sum: '<S113>/Subtraction'
             *  Sum: '<S113>/Summation'
             *  UnitDelay: '<S113>/Unit Delay'
             */
            VeCSDR_n_FiltrdC2SlipSpeed = ((VeCSDR_n_C2SlipSpeed_Lmtd -
                VeCSDR_n_FiltrdC2SlipSpeed) * KeCSDR_k_C2SlipFilterCoeff) +
                VeCSDR_n_FiltrdC2SlipSpeed;
        }

        /* End of Switch: '<S113>/Switch1' */
        /* End of Outputs for SubSystem: '<S19>/LowPass' */
        /* End of Outputs for SubSystem: '<S19>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S19>/DeadBand' */
        /* Switch: '<S101>/Switch1' incorporates:
         *  Constant: '<S107>/Calib'
         *  Constant: '<S108>/Calib'
         *  RelationalOperator: '<S101>/Greater  Than'
         *  RelationalOperator: '<S101>/Greater  Than1'
         *  Switch: '<S101>/Switch2'
         */
        if (VeCSDR_n_FiltrdC2SlipSpeed >= KeCSDR_n_C2SlipDeadBandMax)
        {
            /* Switch: '<S101>/Switch1' incorporates:
             *  Sum: '<S101>/Subtraction'
             */
            VeCSDR_n_DeadBandC2SlipSpeed = VeCSDR_n_FiltrdC2SlipSpeed -
                KeCSDR_n_C2SlipDeadBandMax;
        }
        else if (VeCSDR_n_FiltrdC2SlipSpeed <= KeCSDR_n_C2SlipDeadBandMin)
        {
            /* Switch: '<S101>/Switch2' incorporates:
             *  Constant: '<S108>/Calib'
             *  Sum: '<S101>/Subtraction1'
             *  Switch: '<S101>/Switch1'
             */
            VeCSDR_n_DeadBandC2SlipSpeed = VeCSDR_n_FiltrdC2SlipSpeed -
                KeCSDR_n_C2SlipDeadBandMin;
        }
        else
        {
            /* Switch: '<S101>/Switch1' incorporates:
             *  Constant: '<S101>/Constant Value'
             *  Switch: '<S101>/Switch2'
             */
            VeCSDR_n_DeadBandC2SlipSpeed = 0.0F;
        }

        /* End of Switch: '<S101>/Switch1' */
        /* End of Outputs for SubSystem: '<S19>/DeadBand' */

        /* Outputs for Function Call SubSystem: '<S1>/CSDI_Internal_Var' */
        /* Lookup_n-D: '<S111>/Vector' incorporates:
         *  Abs: '<S19>/Abs1'
         *  Abs: '<S19>/Abs2'
         *  Gain: '<S220>/Gain'
         *  Sum: '<S19>/Sum1'
         */
        VeCSDR_scl_C2ActTrqRatio = look1_iflf_binlca_16a(fabsf(rtb_Switch1 -
            fabsf(VeCSDR_M_C2_TCRActl)), ((const float32 *)
            &(KxCSDR_scl_C2ActTrqRatio[0])), ((const float32 *)
            &(KtCSDR_scl_C2ActTrqRatio[0])), 9U);

        /* End of Outputs for SubSystem: '<S1>/CSDI_Internal_Var' */

        /* Product: '<S19>/Product3' incorporates:
         *  Abs: '<S19>/Abs'
         *  Constant: '<S103>/Calib'
         *  Constant: '<S104>/Calib'
         *  Constant: '<S105>/Calib'
         *  Product: '<S19>/Product'
         *  Product: '<S19>/Product1'
         */
        VeCSDR_phi_C2Slip = fabsf((VeCSDR_n_DeadBandC2SlipSpeed *
            KeCSDR_Cf_ConvertRPMtoRPS) * HeCSDR_t_MedTED) *
            KeCSDR_Cf_ConvertRevToDeg;

        /* Product: '<S19>/Product2' */
        VeCSDR_phi_C2SlipToIntegrate = VeCSDR_phi_C2Slip *
            VeCSDR_scl_C2ActTrqRatio;
    }

    /* End of Outputs for SubSystem: '<S10>/CSDD_C2SlipCalc' */

    /* Outputs for Function Call SubSystem: '<S1>/CSDI_Internal_Var' */
    /* RelationalOperator: '<S156>/Comparison' incorporates:
     *  Abs: '<S156>/Abs1'
     *  Constant: '<S30>/Calib'
     *  Gain: '<S220>/Gain'
     *  Product: '<S156>/Product4'
     */
    VeCSDR_b_C2TrqCapEnbld = (fabsf(VeCSDR_M_C2_TCRActl) > (KeCSDR_K_C2CapTh *
        rtb_Switch1));

    /* End of Outputs for SubSystem: '<S1>/CSDI_Internal_Var' */

    /* Logic: '<S156>/Logical2' */
    rtb_Logical2_d = !VeCSDR_b_C2TrqCapEnbld;

    /* Outputs for Atomic SubSystem: '<S22>/Signal Latch On With Reset' */
    /* Logic: '<S153>/OR1' incorporates:
     *  Constant: '<S22>/Constant Value2'
     *  Logic: '<S153>/NOT'
     *  Logic: '<S153>/OR'
     *  RelationalOperator: '<S22>/Comparison5'
     *  UnitDelay: '<S153>/Unit Delay'
     */
    VeCSDR_b_C2SlipLatched = ((VeCSDR_n_DeadBandC2SlipSpeed != 0.0F) ||
        ((!rtb_Logical2_d) && (VeCSDR_b_C2SlipLatched)));

    /* End of Outputs for SubSystem: '<S22>/Signal Latch On With Reset' */

    /* Switch: '<S161>/Switch1' */
    if (VeCSDR_b_C2SlipLatched)
    {
        /* Switch: '<S161>/Switch1' incorporates:
         *  Constant: '<S158>/Constant Value'
         */
        VeCSDR_t_C2TrCapDbncTmr = 0.0F;
    }
    else
    {
        /* Switch: '<S161>/Switch1' incorporates:
         *  UnitDelay: '<S161>/Unit Delay'
         */
        VeCSDR_t_C2TrCapDbncTmr = CSDR_ac_DW.UnitDelay_DSTATE_j;
    }

    /* End of Switch: '<S161>/Switch1' */

    /* Lookup_n-D: '<S151>/Vector' incorporates:
     *  Switch: '<S161>/Switch1'
     */
    VeCSDR_phi_C2HealingFctr = look1_iflf_binlca_16a(VeCSDR_t_C2TrCapDbncTmr, ((
        const float32 *)&(KxCSDR_phi_C2SlipHealingFctr[0])), ((const float32 *)
        &(KtCSDR_phi_C2SlipHealingFctr[0])), 5U);

    /* Outputs for Atomic SubSystem: '<S159>/EdgeRising1' */
    /* Logic: '<S163>/AND' incorporates:
     *  Logic: '<S163>/OR1'
     *  UnitDelay: '<S163>/Unit Delay'
     */
    rtb_AND_ik = !CSDR_ac_DW.UnitDelay_DSTATE_oc;

    /* Update for UnitDelay: '<S163>/Unit Delay' incorporates:
     *  Constant: '<S159>/TRUE Constant1'
     */
    CSDR_ac_DW.UnitDelay_DSTATE_oc = true;

    /* End of Outputs for SubSystem: '<S159>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S159>/EdgeRising3' */
    /* Logic: '<S164>/AND' incorporates:
     *  Logic: '<S164>/OR1'
     *  UnitDelay: '<S164>/Unit Delay'
     */
    rtb_AND = (rtb_Logical2_d && (!CSDR_ac_DW.UnitDelay_DSTATE_ji));

    /* Update for UnitDelay: '<S164>/Unit Delay' */
    CSDR_ac_DW.UnitDelay_DSTATE_ji = rtb_Logical2_d;

    /* End of Outputs for SubSystem: '<S159>/EdgeRising3' */

    /* RelationalOperator: '<S158>/Comparison2' incorporates:
     *  Constant: '<S32>/Calib'
     */
    rtb_Comparison2_o = (VeCSDR_t_C2TrCapDbncTmr == KeCSDR_t_DbncC2TrqCap);

    /* Switch: '<S165>/Switch1' incorporates:
     *  Constant: '<S159>/TRUE Constant1'
     */
    if (rtb_AND_ik)
    {
        CSDR_ac_DW.UnitDelay_DSTATE_c = true;
    }

    /* Logic: '<S159>/Logical5' incorporates:
     *  Logic: '<S159>/Logical12'
     *  Logic: '<S159>/Logical13'
     */
    rtb_AND = (((!CSDR_ac_DW.UnitDelay_DSTATE_c) && rtb_AND) ||
               rtb_Comparison2_o);

    /* Outputs for Atomic SubSystem: '<S159>/EdgeRising' */
    /* Logic: '<S162>/AND' incorporates:
     *  Logic: '<S162>/OR1'
     *  UnitDelay: '<S162>/Unit Delay'
     */
    VeCSDR_b_C2UnlearnTrigger = (rtb_AND && (!CSDR_ac_DW.UnitDelay_DSTATE_lk));

    /* Update for UnitDelay: '<S162>/Unit Delay' */
    CSDR_ac_DW.UnitDelay_DSTATE_lk = rtb_AND;

    /* End of Outputs for SubSystem: '<S159>/EdgeRising' */

    /* Outputs for Enabled SubSystem: '<S21>/UnlearnActive' incorporates:
     *  EnablePort: '<S152>/Enable'
     */
    if (VeCSDR_b_C2UnlearnTrigger)
    {
        /* Sum: '<S152>/Sum1' incorporates:
         *  DataStoreRead: '<S152>/Data Store Read1'
         */
        VeCSDR_phi_C2HealedSlip = CSDR_ac_DW.NeCSDR_phi_C2SlipIntegrated -
            VeCSDR_phi_C2HealingFctr;

        /* MinMax: '<S152>/MinMax2' incorporates:
         *  Constant: '<S152>/Constant Value1'
         *  DataStoreWrite: '<S152>/Data Store Write2'
         */
        CSDR_ac_DW.NeCSDR_phi_C2SlipIntegrated = fmaxf(0.0F,
            VeCSDR_phi_C2HealedSlip);
    }

    /* End of Outputs for SubSystem: '<S21>/UnlearnActive' */

    /* RelationalOperator: '<S15>/Comparison7' incorporates:
     *  Constant: '<S54>/Constant'
     */
    rtb_AND = (((uint32)VeCSDR_e_EngStartStopSt) == CeESSR_e_EngOff);

    /* Outputs for Atomic SubSystem: '<S15>/EdgeRising2' */
    /* Logic: '<S56>/AND' incorporates:
     *  Logic: '<S56>/OR1'
     *  UnitDelay: '<S56>/Unit Delay'
     */
    rtb_AND_gf = (rtb_AND && (!CSDR_ac_DW.UnitDelay_DSTATE_nq));

    /* Update for UnitDelay: '<S56>/Unit Delay' */
    CSDR_ac_DW.UnitDelay_DSTATE_nq = rtb_AND;

    /* End of Outputs for SubSystem: '<S15>/EdgeRising2' */

    /* Switch: '<S15>/Switch2' incorporates:
     *  Constant: '<S62>/Calib'
     *  Logic: '<S15>/Logical3'
     */
    if (rtb_AND_gf || (KeCSDR_b_NVRAMC1SlipRstOvrd))
    {
        /* Switch: '<S15>/Switch2' incorporates:
         *  DataStoreRead: '<S15>/Data Store Read3'
         */
        VeCSDR_phi_C1SlipIntegrated_WithKeyOnEdge =
            CSDR_ac_DW.NeCSDR_phi_C1SlipIntegrated;
    }

    /* End of Switch: '<S15>/Switch2' */

    /* RelationalOperator: '<S15>/Comparison6' incorporates:
     *  Constant: '<S53>/Constant'
     */
    rtb_AND = (((uint32)VeCSDR_e_EngStartStopSt) == CeESSR_e_EngOff);

    /* Outputs for Atomic SubSystem: '<S15>/EdgeRising1' */
    /* Logic: '<S55>/OR1' incorporates:
     *  UnitDelay: '<S55>/Unit Delay'
     */
    rtb_AND_gf = !CSDR_ac_DW.UnitDelay_DSTATE_f0;

    /* Update for UnitDelay: '<S55>/Unit Delay' */
    CSDR_ac_DW.UnitDelay_DSTATE_f0 = rtb_AND;

    /* End of Outputs for SubSystem: '<S15>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S15>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S15>/Signal Latch On With Reset4' */
    /* Logic: '<S68>/NOT' incorporates:
     *  Constant: '<S49>/Constant'
     *  Logic: '<S67>/NOT'
     *  RelationalOperator: '<S15>/Comparison2'
     */
    rtb_NOT4 = (((uint32)VeCSDR_e_EngStartStopSt) != CeESSR_e_EngRunning);

    /* End of Outputs for SubSystem: '<S15>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S15>/EdgeRising1' */
    /* Logic: '<S68>/OR1' incorporates:
     *  Logic: '<S55>/AND'
     *  Logic: '<S68>/NOT'
     *  Logic: '<S68>/OR'
     *  UnitDelay: '<S68>/Unit Delay'
     */
    CSDR_ac_DW.UnitDelay_DSTATE_hu = ((rtb_AND && rtb_AND_gf) || (rtb_NOT4 &&
        (CSDR_ac_DW.UnitDelay_DSTATE_hu)));

    /* End of Outputs for SubSystem: '<S15>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S15>/Signal Latch On With Reset4' */

    /* Outputs for Atomic SubSystem: '<S15>/Signal Latch On With Reset1' */
    /* Logic: '<S67>/OR1' incorporates:
     *  Constant: '<S50>/Constant'
     *  Constant: '<S52>/Constant'
     *  Logic: '<S15>/Logical5'
     *  Logic: '<S15>/Logical7'
     *  Logic: '<S67>/OR'
     *  RelationalOperator: '<S15>/Comparison3'
     *  RelationalOperator: '<S15>/Comparison5'
     *  UnitDelay: '<S15>/Unit Delay2'
     *  UnitDelay: '<S67>/Unit Delay'
     */
    CSDR_ac_DW.UnitDelay_DSTATE_fk = ((((((uint32)VeCSDR_e_EngineSpeedStatus) ==
        CeESPR_e_EngSpdDegraded) || (((uint32)VeCSDR_e_EngineSpeedStatus) ==
        CeESPR_e_EngSpdInvalid)) && (CSDR_ac_DW.UnitDelay2_DSTATE)) || (rtb_NOT4
        && (CSDR_ac_DW.UnitDelay_DSTATE_fk)));

    /* End of Outputs for SubSystem: '<S15>/Signal Latch On With Reset1' */

    /* Logic: '<S15>/Logical2' incorporates:
     *  Logic: '<S15>/Logical6'
     *  UnitDelay: '<S67>/Unit Delay'
     */
    VeCSDR_phi_C1SlipIntegrated_WithKey_CrnkFail =
        ((CSDR_ac_DW.UnitDelay_DSTATE_hu) && ((CSDR_ac_DW.UnitDelay_DSTATE_fk) ||
          (VeCSDR_b_BuffrCrnkDiagFailing)));

    /* RelationalOperator: '<S25>/Comparison4' incorporates:
     *  Constant: '<S182>/Constant'
     *  Switch: '<S7>/Switch62'
     */
    rtb_AND_gf = (((uint32)VeCSDR_e_InputSpdSource) == CeTISR_e_EngSpeedFromMSPR);

    /* Logic: '<S25>/Logical3' incorporates:
     *  Constant: '<S183>/Calib'
     */
    VeCSDR_b_C1_NoSlipLearn = ((KeCSDR_b_C1_DeactvtMSPRLearn) && rtb_AND_gf);

    /* Outputs for Atomic SubSystem: '<S15>/EdgeRising4' */
    /* Logic: '<S57>/OR1' incorporates:
     *  UnitDelay: '<S57>/Unit Delay'
     */
    rtb_AND = !CSDR_ac_DW.UnitDelay_DSTATE_m;

    /* Update for UnitDelay: '<S57>/Unit Delay' incorporates:
     *  Constant: '<S15>/TRUE Constant2'
     */
    CSDR_ac_DW.UnitDelay_DSTATE_m = true;

    /* Logic: '<S15>/Logical1' incorporates:
     *  Constant: '<S62>/Calib'
     *  DataStoreRead: '<S15>/Data Store Read'
     *  Logic: '<S57>/AND'
     */
    rtb_AND = ((((rtb_AND || (KeCSDR_b_NVRAMC1SlipRstOvrd)) ||
                 (VeCSDR_b_RstIntegrator)) ||
                (VeCSDR_phi_C1SlipIntegrated_WithKey_CrnkFail)) ||
               (VeCSDR_b_C1UnlearnTrigger));

    /* End of Outputs for SubSystem: '<S15>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S15>/Accumulator Reset' */
    /* Switch: '<S48>/Switch1' incorporates:
     *  Logic: '<S15>/Logical4'
     *  Logic: '<S15>/Logical8'
     *  Switch: '<S15>/Switch5'
     */
    if (rtb_AND)
    {
        /* Switch: '<S48>/Switch1' incorporates:
         *  DataStoreRead: '<S15>/Data Store Read1'
         */
        VeCSDR_phi_C1SlipIntegrated = CSDR_ac_DW.NeCSDR_phi_C1SlipIntegrated;
    }
    else
    {
        if (((VeCSDR_b_C1_SlipCompTrigger) && (VeCSDR_b_C1_SlipDetected)) &&
                (!VeCSDR_b_C1_NoSlipLearn))
        {
            /* Switch: '<S15>/Switch5' */
            rtb_Switch1 = VeCSDR_phi_C1SlipToIntegrate;
        }
        else
        {
            /* Switch: '<S15>/Switch5' incorporates:
             *  Constant: '<S15>/Constant Value1'
             */
            rtb_Switch1 = 0.0F;
        }

        /* Switch: '<S48>/Switch1' incorporates:
         *  Sum: '<S48>/Summation'
         *  UnitDelay: '<S48>/Unit Delay'
         */
        VeCSDR_phi_C1SlipIntegrated = rtb_Switch1 + VeCSDR_phi_C1SlipIntegrated;
    }

    /* End of Switch: '<S48>/Switch1' */
    /* End of Outputs for SubSystem: '<S15>/Accumulator Reset' */

    /* Switch: '<S15>/Switch1' */
    if (rtb_Logical4_j)
    {
        /* Switch: '<S15>/Switch1' */
        VeCSDR_phi_C1SlipIntegrated_WithKey = VeCSDR_phi_C1SlipIntegrated;
    }
    else
    {
        /* Switch: '<S15>/Switch1' incorporates:
         *  DataStoreRead: '<S15>/Data Store Read2'
         */
        VeCSDR_phi_C1SlipIntegrated_WithKey =
            CSDR_ac_DW.NeCSDR_phi_C1SlipIntegrated;
    }

    /* End of Switch: '<S15>/Switch1' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&rtb_Logical5_j);

    /* Switch: '<S15>/Switch6' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     */
    if (VeCSDR_phi_C1SlipIntegrated_WithKey_CrnkFail)
    {
        /* Switch: '<S15>/Switch6' */
        VeCSDR_phi_C1SlipIntegrated_WithKey_Final =
            VeCSDR_phi_C1SlipIntegrated_WithKeyOnEdge;
    }
    else
    {
        /* Switch: '<S15>/Switch6' */
        VeCSDR_phi_C1SlipIntegrated_WithKey_Final =
            VeCSDR_phi_C1SlipIntegrated_WithKey;
    }

    /* End of Switch: '<S15>/Switch6' */

    /* Switch: '<S15>/Switch4' incorporates:
     *  Constant: '<S62>/Calib'
     *  Constant: '<S64>/Calib'
     *  DataStoreWrite: '<S15>/Data Store Write'
     */
    if (KeCSDR_b_NVRAMC1SlipRstOvrd)
    {
        CSDR_ac_DW.NeCSDR_phi_C1SlipIntegrated =
            KeCSDR_phi_NVRAMC1SlipRstOvrdVal;
    }
    else
    {
        CSDR_ac_DW.NeCSDR_phi_C1SlipIntegrated =
            VeCSDR_phi_C1SlipIntegrated_WithKey_Final;
    }

    /* End of Switch: '<S15>/Switch4' */

    /* Outputs for Enabled SubSystem: '<S15>/ResetPokeOutput' */
    CSDR_ac_ResetPokeOutput(CSDR_ac_DW.UnitDelay_DSTATE_kk);

    /* End of Outputs for SubSystem: '<S15>/ResetPokeOutput' */

    /* Switch: '<S154>/Switch1' incorporates:
     *  Lookup_n-D: '<S65>/Vector'
     *  Switch: '<S48>/Switch1'
     *  UnitDelay: '<S15>/Unit Delay'
     */
    rtb_Switch1 = look1_iflf_binlca_16a(VeCSDR_phi_C1SlipIntegrated, ((const
        float32 *)&(KxCSDR_M_C1SlipCorrectedTrq[0])), ((const float32 *)
        &(KtCSDR_M_C1SlipCorrectedTrq[0])), 9U);

    /* RelationalOperator: '<S15>/Comparison4' incorporates:
     *  Constant: '<S51>/Constant'
     *  UnitDelay: '<S15>/Unit Delay2'
     */
    CSDR_ac_DW.UnitDelay2_DSTATE = (((uint32)VeCSDR_e_EngineSpeedStatus) ==
        CeESPR_e_EngSpdNormal);

    /* Logic: '<S33>/NOT4' incorporates:
     *  Constant: '<S61>/Calib'
     *  Logic: '<S15>/LogicalOperator'
     */
    rtb_NOT4 = ((KeCSDR_b_EnblC1SlipDiag) &&
                rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* Switch: '<S15>/Switch' */
    if (rtb_NOT4)
    {
        /* VariantMerge generated from: '<S9>/CorrectedC1TrqEst' */
        VeCSDR_M_C1CorrectedSlipTrq = rtb_Switch1;
    }
    else
    {
        /* VariantMerge generated from: '<S9>/CorrectedC1TrqEst' incorporates:
         *  Constant: '<S15>/Constant Value2'
         */
        VeCSDR_M_C1CorrectedSlipTrq = 0.0F;
    }

    /* End of Switch: '<S15>/Switch' */

    /* VariantMerge generated from: '<S9>/C1_NA' incorporates:
     *  Constant: '<S60>/Calib'
     *  Logic: '<S15>/Logical'
     *  RelationalOperator: '<S15>/Comparison1'
     *  Switch: '<S15>/Switch3'
     */
    VeCSDR_b_C1_NA = ((rtb_Switch1 >= KeCSDR_M_C1SlipCorrectedTrqTh) && rtb_NOT4);

    /* RelationalOperator: '<S69>/Relational Operator3' incorporates:
     *  Constant: '<S69>/Constant3'
     *  S-Function (sfix_bitop): '<S69>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S69>/EdgeFalling1' */
    /* Logic: '<S69>/Logical Operator' incorporates:
     *  Logic: '<S71>/OR1'
     */
    rtb_Logical1_c_tmp = !rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S69>/EdgeFalling1' */

    /* Logic: '<S69>/Logical1' incorporates:
     *  Constant: '<S63>/Calib'
     *  Constant: '<S69>/Constant1'
     *  Logic: '<S69>/Logical Operator'
     *  Logic: '<S69>/Logical10'
     *  Logic: '<S69>/Logical12'
     *  RelationalOperator: '<S69>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S69>/Bitwise Operator3'
     */
    rtb_Logical1_o = (rtb_NOT4 && ((!KeCSDR_b_TransFrictElmntA_Slip_LtchEnbl) ||
                       (((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Status) &
                          1U) == 0U) || rtb_Logical1_c_tmp)));

    /* Logic: '<S33>/NOT4' */
    rtb_NOT4 = (rtb_Logical5_j || rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outputs for Atomic SubSystem: '<S69>/EdgeFalling1' */
    /* Logic: '<S71>/AND' incorporates:
     *  UnitDelay: '<S71>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_PostCo = (rtb_Logical1_c_tmp &&
        (CSDR_ac_DW.UnitDelay_DSTATE_nn));

    /* Update for UnitDelay: '<S71>/Unit Delay' */
    CSDR_ac_DW.UnitDelay_DSTATE_nn = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S69>/EdgeFalling1' */

    /* Logic: '<S69>/Logical5' */
    rtb_Logical5_j = (rtb_NOT4 || rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outputs for Atomic SubSystem: '<S70>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S70>/Counter Reset  Enabled ' */
    /* Switch: '<S77>/Switch1' incorporates:
     *  Constant: '<S77>/Constant Value2'
     *  Constant: '<S78>/Constant Value2'
     *  Logic: '<S70>/Fail Counter Reset'
     *  Logic: '<S70>/NOT6'
     *  Switch: '<S77>/Switch2'
     *  Switch: '<S78>/Switch1'
     *  UnitDelay: '<S70>/Unit Delay'
     *  UnitDelay: '<S70>/Unit Delay1'
     *  UnitDelay: '<S77>/Unit Delay'
     *  UnitDelay: '<S78>/Unit Delay'
     */
    if ((rtb_Logical5_j || (CSDR_ac_DW.UnitDelay_DSTATE_ew)) ||
            (CSDR_ac_DW.UnitDelay1_DSTATE_l))
    {
        CSDR_ac_DW.UnitDelay_DSTATE_o = 0U;
        CSDR_ac_DW.UnitDelay_DSTATE_fn = 0U;
    }
    else
    {
        if (rtb_Logical1_o && (VeCSDR_b_C1_NA))
        {
            /* UnitDelay: '<S77>/Unit Delay' incorporates:
             *  Constant: '<S77>/Constant Value1'
             *  Sum: '<S77>/Subtraction'
             *  Switch: '<S77>/Switch2'
             */
            CSDR_ac_DW.UnitDelay_DSTATE_o = (uint16)(((uint32)
                CSDR_ac_DW.UnitDelay_DSTATE_o) + 1U);
        }

        /* Switch: '<S78>/Switch2' */
        if (rtb_Logical1_o)
        {
            /* UnitDelay: '<S78>/Unit Delay' incorporates:
             *  Constant: '<S78>/Constant Value1'
             *  Sum: '<S78>/Subtraction'
             *  Switch: '<S78>/Switch2'
             */
            CSDR_ac_DW.UnitDelay_DSTATE_fn = (uint16)(((uint32)
                CSDR_ac_DW.UnitDelay_DSTATE_fn) + 1U);
        }

        /* End of Switch: '<S78>/Switch2' */
    }

    /* End of Switch: '<S77>/Switch1' */
    /* End of Outputs for SubSystem: '<S70>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S70>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S70>/Greater Than or Equal ' incorporates:
     *  Constant: '<S58>/Calib'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    CSDR_ac_DW.UnitDelay1_DSTATE_l = (CSDR_ac_DW.UnitDelay_DSTATE_o >=
        KeCSDR_Cnt_Clutch1SlipFailLmt);

    /* Logic: '<S70>/NOT5' incorporates:
     *  Constant: '<S59>/Calib'
     *  Logic: '<S70>/NOT3'
     *  RelationalOperator: '<S70>/Less Than  or Equal'
     *  UnitDelay: '<S78>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_PostCo = ((CSDR_ac_DW.UnitDelay_DSTATE_fn >=
        KeCSDR_Cnt_Clutch1SlipPassLmt) && (!CSDR_ac_DW.UnitDelay1_DSTATE_l));

    /* Outputs for Enabled SubSystem: '<S69>/Fail' */
    CSDR_ac_Fail(CSDR_ac_DW.UnitDelay1_DSTATE_l,
                 &CSDR_ac_B.VariantMergeForOutportVeCSDR_e_FaultSts_);

    /* End of Outputs for SubSystem: '<S69>/Fail' */

    /* Outputs for Enabled SubSystem: '<S69>/Init' */
    CSDR_ac_Init_f(rtb_Logical5_j,
                   &CSDR_ac_B.VariantMergeForOutportVeCSDR_e_FaultSts_);

    /* End of Outputs for SubSystem: '<S69>/Init' */

    /* Outputs for Enabled SubSystem: '<S69>/Pass' */
    CSDR_ac_Pass(rtb_TmpSignalConversionAtVeDFIR_b_PostCo,
                 &CSDR_ac_B.VariantMergeForOutportVeCSDR_e_FaultSts_);

    /* End of Outputs for SubSystem: '<S69>/Pass' */

    /* RelationalOperator: '<S20>/Comparison7' incorporates:
     *  Constant: '<S120>/Constant'
     */
    rtb_Logical5_j = (((uint32)VeCSDR_e_EngStartStopSt) == CeESSR_e_EngOff);

    /* Outputs for Atomic SubSystem: '<S20>/EdgeRising2' */
    /* Logic: '<S123>/AND' incorporates:
     *  Logic: '<S123>/OR1'
     *  UnitDelay: '<S123>/Unit Delay'
     */
    rtb_Logical1_o = (rtb_Logical5_j && (!CSDR_ac_DW.UnitDelay_DSTATE_l1));

    /* Update for UnitDelay: '<S123>/Unit Delay' */
    CSDR_ac_DW.UnitDelay_DSTATE_l1 = rtb_Logical5_j;

    /* End of Outputs for SubSystem: '<S20>/EdgeRising2' */

    /* Switch: '<S20>/Switch2' incorporates:
     *  Constant: '<S129>/Calib'
     *  Logic: '<S20>/Logical3'
     */
    if (rtb_Logical1_o || (KeCSDR_b_NVRAMC2SlipRstOvrd))
    {
        /* Switch: '<S20>/Switch2' incorporates:
         *  DataStoreRead: '<S20>/Data Store Read3'
         */
        VeCSDR_phi_C2SlipIntegrated_WithKeyOnEdge =
            CSDR_ac_DW.NeCSDR_phi_C2SlipIntegrated;
    }

    /* End of Switch: '<S20>/Switch2' */

    /* RelationalOperator: '<S20>/Comparison6' incorporates:
     *  Constant: '<S119>/Constant'
     */
    rtb_Logical5_j = (((uint32)VeCSDR_e_EngStartStopSt) == CeESSR_e_EngOff);

    /* Outputs for Atomic SubSystem: '<S20>/EdgeRising1' */
    /* Logic: '<S122>/OR1' incorporates:
     *  UnitDelay: '<S122>/Unit Delay'
     */
    rtb_Logical1_o = !CSDR_ac_DW.UnitDelay_DSTATE_l5;

    /* Update for UnitDelay: '<S122>/Unit Delay' */
    CSDR_ac_DW.UnitDelay_DSTATE_l5 = rtb_Logical5_j;

    /* End of Outputs for SubSystem: '<S20>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S20>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S20>/Signal Latch On With Reset4' */
    /* Logic: '<S135>/NOT' incorporates:
     *  Constant: '<S117>/Constant'
     *  Logic: '<S134>/NOT'
     *  RelationalOperator: '<S20>/Comparison2'
     */
    rtb_RelationalOperator3 = (((uint32)VeCSDR_e_EngStartStopSt) !=
        CeESSR_e_EngRunning);

    /* End of Outputs for SubSystem: '<S20>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S20>/EdgeRising1' */
    /* Logic: '<S135>/OR1' incorporates:
     *  Logic: '<S122>/AND'
     *  Logic: '<S135>/NOT'
     *  Logic: '<S135>/OR'
     *  UnitDelay: '<S135>/Unit Delay'
     */
    CSDR_ac_DW.UnitDelay_DSTATE_go = ((rtb_Logical5_j && rtb_Logical1_o) ||
        (rtb_RelationalOperator3 && (CSDR_ac_DW.UnitDelay_DSTATE_go)));

    /* End of Outputs for SubSystem: '<S20>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S20>/Signal Latch On With Reset4' */

    /* Outputs for Atomic SubSystem: '<S20>/Signal Latch On With Reset1' */
    /* Logic: '<S134>/OR1' incorporates:
     *  Constant: '<S116>/Constant'
     *  Constant: '<S121>/Constant'
     *  Logic: '<S134>/OR'
     *  Logic: '<S20>/Logical5'
     *  Logic: '<S20>/Logical6'
     *  RelationalOperator: '<S20>/Comparison3'
     *  RelationalOperator: '<S20>/Comparison5'
     *  UnitDelay: '<S134>/Unit Delay'
     *  UnitDelay: '<S20>/Unit Delay2'
     */
    CSDR_ac_DW.UnitDelay_DSTATE_ok = ((((((uint32)VeCSDR_e_EngineSpeedStatus) ==
        CeESPR_e_EngSpdDegraded) || (((uint32)VeCSDR_e_EngineSpeedStatus) ==
        CeESPR_e_EngSpdInvalid)) && (CSDR_ac_DW.UnitDelay2_DSTATE_i)) ||
        (rtb_RelationalOperator3 && (CSDR_ac_DW.UnitDelay_DSTATE_ok)));

    /* End of Outputs for SubSystem: '<S20>/Signal Latch On With Reset1' */

    /* Logic: '<S20>/Logical2' incorporates:
     *  Logic: '<S20>/Logical7'
     */
    VeCSDR_phi_C2SlipIntegrated_WithKey_CrnkFail =
        ((CSDR_ac_DW.UnitDelay_DSTATE_go) && ((CSDR_ac_DW.UnitDelay_DSTATE_ok) ||
          (VeCSDR_b_BuffrCrnkDiagFailing)));

    /* Logic: '<S25>/Logical4' incorporates:
     *  Constant: '<S185>/Calib'
     */
    VeCSDR_b_C2_NoSlipLearn = ((KeCSDR_b_C2_DeactvtMSPRLearn) && rtb_AND_gf);

    /* Outputs for Atomic SubSystem: '<S20>/EdgeRising4' */
    /* Logic: '<S124>/OR1' incorporates:
     *  UnitDelay: '<S124>/Unit Delay'
     */
    rtb_Logical5_j = !CSDR_ac_DW.UnitDelay_DSTATE_fv;

    /* Update for UnitDelay: '<S124>/Unit Delay' incorporates:
     *  Constant: '<S20>/TRUE Constant2'
     */
    CSDR_ac_DW.UnitDelay_DSTATE_fv = true;

    /* Logic: '<S20>/Logical1' incorporates:
     *  Constant: '<S129>/Calib'
     *  DataStoreRead: '<S20>/Data Store Read'
     *  Logic: '<S124>/AND'
     */
    rtb_Logical5_j = ((((rtb_Logical5_j || (KeCSDR_b_NVRAMC2SlipRstOvrd)) ||
                        (VeCSDR_b_RstIntegrator)) ||
                       (VeCSDR_phi_C2SlipIntegrated_WithKey_CrnkFail)) ||
                      (VeCSDR_b_C2UnlearnTrigger));

    /* End of Outputs for SubSystem: '<S20>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S20>/Accumulator Reset' */
    /* Switch: '<S115>/Switch1' incorporates:
     *  Logic: '<S20>/Logical4'
     *  Logic: '<S20>/Logical8'
     *  Switch: '<S20>/Switch5'
     */
    if (rtb_Logical5_j)
    {
        /* Switch: '<S115>/Switch1' incorporates:
         *  DataStoreRead: '<S20>/Data Store Read1'
         */
        VeCSDR_phi_C2SlipIntegrated = CSDR_ac_DW.NeCSDR_phi_C2SlipIntegrated;
    }
    else
    {
        if (((VeCSDR_b_C2_SlipCompTrigger) && (VeCSDR_b_C2_SlipDetected)) &&
                (!VeCSDR_b_C2_NoSlipLearn))
        {
            /* Switch: '<S20>/Switch5' */
            rtb_Switch1 = VeCSDR_phi_C2SlipToIntegrate;
        }
        else
        {
            /* Switch: '<S20>/Switch5' incorporates:
             *  Constant: '<S20>/Constant Value2'
             */
            rtb_Switch1 = 0.0F;
        }

        /* Switch: '<S115>/Switch1' incorporates:
         *  Sum: '<S115>/Summation'
         *  UnitDelay: '<S115>/Unit Delay'
         */
        VeCSDR_phi_C2SlipIntegrated = rtb_Switch1 + VeCSDR_phi_C2SlipIntegrated;
    }

    /* End of Switch: '<S115>/Switch1' */
    /* End of Outputs for SubSystem: '<S20>/Accumulator Reset' */

    /* Switch: '<S20>/Switch1' */
    if (rtb_Logical4_j)
    {
        /* Switch: '<S20>/Switch1' */
        VeCSDR_phi_C2SlipIntegrated_WithKey = VeCSDR_phi_C2SlipIntegrated;
    }
    else
    {
        /* Switch: '<S20>/Switch1' incorporates:
         *  DataStoreRead: '<S20>/Data Store Read2'
         */
        VeCSDR_phi_C2SlipIntegrated_WithKey =
            CSDR_ac_DW.NeCSDR_phi_C2SlipIntegrated;
    }

    /* End of Switch: '<S20>/Switch1' */

    /* Switch: '<S20>/Switch6' */
    if (VeCSDR_phi_C2SlipIntegrated_WithKey_CrnkFail)
    {
        /* Switch: '<S20>/Switch6' */
        VeCSDR_phi_C2SlipIntegrated_WithKey_Final =
            VeCSDR_phi_C2SlipIntegrated_WithKeyOnEdge;
    }
    else
    {
        /* Switch: '<S20>/Switch6' */
        VeCSDR_phi_C2SlipIntegrated_WithKey_Final =
            VeCSDR_phi_C2SlipIntegrated_WithKey;
    }

    /* End of Switch: '<S20>/Switch6' */

    /* Switch: '<S20>/Switch4' incorporates:
     *  Constant: '<S129>/Calib'
     *  Constant: '<S131>/Calib'
     *  DataStoreWrite: '<S20>/Data Store Write'
     */
    if (KeCSDR_b_NVRAMC2SlipRstOvrd)
    {
        CSDR_ac_DW.NeCSDR_phi_C2SlipIntegrated =
            KeCSDR_phi_NVRAMC2SlipRstOvrdVal;
    }
    else
    {
        CSDR_ac_DW.NeCSDR_phi_C2SlipIntegrated =
            VeCSDR_phi_C2SlipIntegrated_WithKey_Final;
    }

    /* End of Switch: '<S20>/Switch4' */

    /* Outputs for Enabled SubSystem: '<S20>/ResetPokeOutput' */
    CSDR_ac_ResetPokeOutput(CSDR_ac_DW.UnitDelay_DSTATE_d);

    /* End of Outputs for SubSystem: '<S20>/ResetPokeOutput' */

    /* Switch: '<S154>/Switch1' incorporates:
     *  Lookup_n-D: '<S132>/Vector'
     *  Switch: '<S115>/Switch1'
     *  UnitDelay: '<S20>/Unit Delay'
     */
    rtb_Switch1 = look1_iflf_binlca_16a(VeCSDR_phi_C2SlipIntegrated, ((const
        float32 *)&(KxCSDR_M_C2SlipCorrectedTrq[0])), ((const float32 *)
        &(KtCSDR_M_C2SlipCorrectedTrq[0])), 9U);

    /* RelationalOperator: '<S20>/Comparison4' incorporates:
     *  Constant: '<S118>/Constant'
     *  UnitDelay: '<S20>/Unit Delay2'
     */
    CSDR_ac_DW.UnitDelay2_DSTATE_i = (((uint32)VeCSDR_e_EngineSpeedStatus) ==
        CeESPR_e_EngSpdNormal);

    /* UnitDelay: '<S160>/Unit Delay' incorporates:
     *  Constant: '<S128>/Calib'
     *  Logic: '<S20>/LogicalOperator'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = ((KeCSDR_b_EnblC2SlipDiag) &&
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* Switch: '<S20>/Switch' */
    if (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)
    {
        /* VariantMerge generated from: '<S9>/C2CorrectedSlipTrq' */
        VeCSDR_M_C2CorrectedSlipTrq = rtb_Switch1;
    }
    else
    {
        /* VariantMerge generated from: '<S9>/C2CorrectedSlipTrq' incorporates:
         *  Constant: '<S20>/Constant Value4'
         */
        VeCSDR_M_C2CorrectedSlipTrq = 0.0F;
    }

    /* End of Switch: '<S20>/Switch' */

    /* VariantMerge generated from: '<S9>/C2_NA' incorporates:
     *  Constant: '<S127>/Calib'
     *  Logic: '<S20>/Logical'
     *  RelationalOperator: '<S20>/Comparison1'
     *  Switch: '<S20>/Switch3'
     */
    VeCSDR_b_C2_NA = ((rtb_Switch1 >= KeCSDR_M_C2SlipCorrectedTrqTh) &&
                      rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* RelationalOperator: '<S136>/Relational Operator3' incorporates:
     *  Constant: '<S136>/Constant3'
     *  S-Function (sfix_bitop): '<S136>/Bitwise Operator2'
     */
    rtb_Logical4_j = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Stat_j) & 64U)
                      == 0U);

    /* Outputs for Atomic SubSystem: '<S136>/EdgeFalling1' */
    /* Logic: '<S136>/Logical Operator' incorporates:
     *  Logic: '<S138>/OR1'
     */
    rtb_Logical1_o = !rtb_Logical4_j;

    /* End of Outputs for SubSystem: '<S136>/EdgeFalling1' */

    /* Logic: '<S136>/Logical1' incorporates:
     *  Constant: '<S130>/Calib'
     *  Constant: '<S136>/Constant1'
     *  Logic: '<S136>/Logical Operator'
     *  Logic: '<S136>/Logical10'
     *  Logic: '<S136>/Logical12'
     *  RelationalOperator: '<S136>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S136>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
        (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
         ((!KeCSDR_b_TransFrictElmntB_Slip_LtchEnbl) || (((((uint32)
              rtb_TmpSignalConversionAtVeDMAB_y_Stat_j) & 1U) == 0U) ||
           rtb_Logical1_o)));

    /* Outputs for Atomic SubSystem: '<S136>/EdgeFalling1' */
    /* Logic: '<S138>/AND' incorporates:
     *  UnitDelay: '<S138>/Unit Delay'
     */
    rtb_Logical1_o = (rtb_Logical1_o && (CSDR_ac_DW.UnitDelay_DSTATE_k4));

    /* Update for UnitDelay: '<S138>/Unit Delay' */
    CSDR_ac_DW.UnitDelay_DSTATE_k4 = rtb_Logical4_j;

    /* End of Outputs for SubSystem: '<S136>/EdgeFalling1' */

    /* Logic: '<S136>/Logical5' */
    rtb_Logical4_j = (rtb_NOT4 || rtb_Logical1_o);

    /* UnitDelay: '<S137>/Unit Delay1' incorporates:
     *  UnitDelay: '<S70>/Unit Delay'
     */
    CSDR_ac_DW.UnitDelay_DSTATE_ew = CSDR_ac_DW.UnitDelay1_DSTATE_j;

    /* Outputs for Atomic SubSystem: '<S137>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S137>/Counter Reset  Enabled ' */
    /* Switch: '<S144>/Switch1' incorporates:
     *  Constant: '<S144>/Constant Value2'
     *  Constant: '<S145>/Constant Value2'
     *  Logic: '<S137>/Fail Counter Reset'
     *  Logic: '<S137>/NOT6'
     *  Switch: '<S144>/Switch2'
     *  Switch: '<S145>/Switch1'
     *  UnitDelay: '<S137>/Unit Delay'
     *  UnitDelay: '<S144>/Unit Delay'
     *  UnitDelay: '<S145>/Unit Delay'
     *  UnitDelay: '<S70>/Unit Delay'
     */
    if ((rtb_Logical4_j || (CSDR_ac_DW.UnitDelay_DSTATE_a)) ||
            (CSDR_ac_DW.UnitDelay_DSTATE_ew))
    {
        CSDR_ac_DW.UnitDelay_DSTATE_jz = 0U;
        CSDR_ac_DW.UnitDelay_DSTATE_k = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag && (VeCSDR_b_C2_NA))
        {
            /* UnitDelay: '<S144>/Unit Delay' incorporates:
             *  Constant: '<S144>/Constant Value1'
             *  Sum: '<S144>/Subtraction'
             *  Switch: '<S144>/Switch2'
             */
            CSDR_ac_DW.UnitDelay_DSTATE_jz = (uint16)(((uint32)
                CSDR_ac_DW.UnitDelay_DSTATE_jz) + 1U);
        }

        /* Switch: '<S145>/Switch2' */
        if (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)
        {
            /* UnitDelay: '<S145>/Unit Delay' incorporates:
             *  Constant: '<S145>/Constant Value1'
             *  Sum: '<S145>/Subtraction'
             *  Switch: '<S145>/Switch2'
             */
            CSDR_ac_DW.UnitDelay_DSTATE_k = (uint16)(((uint32)
                CSDR_ac_DW.UnitDelay_DSTATE_k) + 1U);
        }

        /* End of Switch: '<S145>/Switch2' */
    }

    /* End of Switch: '<S144>/Switch1' */
    /* End of Outputs for SubSystem: '<S137>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S137>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S137>/Greater Than or Equal ' incorporates:
     *  Constant: '<S125>/Calib'
     *  UnitDelay: '<S144>/Unit Delay'
     */
    CSDR_ac_DW.UnitDelay1_DSTATE_j = (CSDR_ac_DW.UnitDelay_DSTATE_jz >=
        KeCSDR_Cnt_Clutch2SlipFailLmt);

    /* Logic: '<S137>/NOT5' incorporates:
     *  Constant: '<S126>/Calib'
     *  Logic: '<S137>/NOT3'
     *  RelationalOperator: '<S137>/Less Than  or Equal'
     *  UnitDelay: '<S145>/Unit Delay'
     */
    CSDR_ac_DW.UnitDelay_DSTATE_a = ((CSDR_ac_DW.UnitDelay_DSTATE_k >=
        KeCSDR_Cnt_Clutch2SlipPassLmt) && (!CSDR_ac_DW.UnitDelay1_DSTATE_j));

    /* Outputs for Enabled SubSystem: '<S136>/Fail' */
    CSDR_ac_Fail(CSDR_ac_DW.UnitDelay1_DSTATE_j,
                 &CSDR_ac_B.VariantMergeForOutportVeCSDR_e_FaultSt_p);

    /* End of Outputs for SubSystem: '<S136>/Fail' */

    /* Outputs for Enabled SubSystem: '<S136>/Init' */
    CSDR_ac_Init_f(rtb_Logical4_j,
                   &CSDR_ac_B.VariantMergeForOutportVeCSDR_e_FaultSt_p);

    /* End of Outputs for SubSystem: '<S136>/Init' */

    /* Outputs for Enabled SubSystem: '<S136>/Pass' */
    CSDR_ac_Pass(CSDR_ac_DW.UnitDelay_DSTATE_a,
                 &CSDR_ac_B.VariantMergeForOutportVeCSDR_e_FaultSt_p);

    /* End of Outputs for SubSystem: '<S136>/Pass' */

    /* Logic: '<S25>/Logical' incorporates:
     *  Constant: '<S184>/Calib'
     */
    VeCSDR_b_C1_NoSlipUnlearn = ((KeCSDR_b_C1_DeactvtMSPRUnlearn) && rtb_AND_gf);

    /* Logic: '<S88>/Logical4' incorporates:
     *  Logic: '<S88>/Logical1'
     */
    VeCSDR_b_C1UnlearnPause = ((VeCSDR_b_C1_NoSlipUnlearn) ||
        (!VeCSDR_b_C1_SlipCompTrigger));

    /* Outputs for Atomic SubSystem: '<S89>/EdgeRising4' */
    /* Logic: '<S93>/AND' incorporates:
     *  Logic: '<S93>/OR1'
     *  UnitDelay: '<S93>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = !CSDR_ac_DW.UnitDelay_DSTATE_fh;

    /* Update for UnitDelay: '<S93>/Unit Delay' incorporates:
     *  Constant: '<S89>/TRUE Constant2'
     */
    CSDR_ac_DW.UnitDelay_DSTATE_fh = true;

    /* End of Outputs for SubSystem: '<S89>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S17>/StpWch_Rset_Enab' */
    /* Switch: '<S87>/Switch1' incorporates:
     *  Logic: '<S89>/Logical'
     *  Logic: '<S89>/Logical3'
     *  Logic: '<S89>/Logical9'
     *  Switch: '<S87>/Switch2'
     */
    if ((((VeCSDR_b_C1SlipLatched) || rtb_Logical2) || rtb_Comparison2_b) ||
            rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)
    {
        /* Switch: '<S154>/Switch1' incorporates:
         *  Constant: '<S87>/Constant Value2'
         */
        rtb_Switch1 = 0.0F;
    }
    else if ((!VeCSDR_b_C1UnlearnPause) && (VeCSDR_b_C1TrqCapEnbld))
    {
        /* Switch: '<S87>/Switch2' incorporates:
         *  Constant: '<S28>/Calib'
         *  Sum: '<S87>/Subtraction'
         *  Switch: '<S154>/Switch1'
         *  UnitDelay: '<S87>/Unit Delay'
         */
        rtb_Switch1 = HeCSDR_t_MedTED + CSDR_ac_DW.UnitDelay_DSTATE_g;
    }
    else
    {
        /* Switch: '<S154>/Switch1' incorporates:
         *  Switch: '<S87>/Switch2'
         *  UnitDelay: '<S87>/Unit Delay'
         */
        rtb_Switch1 = CSDR_ac_DW.UnitDelay_DSTATE_g;
    }

    /* End of Switch: '<S87>/Switch1' */

    /* Switch: '<S87>/Switch' incorporates:
     *  Constant: '<S87>/Constant Value3'
     *  RelationalOperator: '<S87>/Comparison1'
     *  UnitDelay: '<S87>/Unit Delay'
     */
    if (rtb_Switch1 < 10.0F)
    {
        CSDR_ac_DW.UnitDelay_DSTATE_g = rtb_Switch1;
    }

    /* End of Switch: '<S87>/Switch' */
    /* End of Outputs for SubSystem: '<S17>/StpWch_Rset_Enab' */

    /* Switch: '<S94>/Switch3' incorporates:
     *  Constant: '<S31>/Calib'
     *  Constant: '<S90>/Constant Value'
     *  MinMax: '<S87>/MinMax'
     *  UnitDelay: '<S87>/Unit Delay'
     *  UnitDelay: '<S94>/Unit Delay'
     */
    if (VeCSDR_b_C1SlipLatched)
    {
        CSDR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S17>/StpWch_Rset_Enab' */
        CSDR_ac_DW.UnitDelay_DSTATE = fminf(CSDR_ac_DW.UnitDelay_DSTATE_g,
            KeCSDR_t_DbncC1TrqCap);

        /* End of Outputs for SubSystem: '<S17>/StpWch_Rset_Enab' */
    }

    /* End of Switch: '<S94>/Switch3' */

    /* Switch: '<S98>/Switch1' incorporates:
     *  Switch: '<S98>/Switch3'
     *  UnitDelay: '<S98>/Unit Delay'
     */
    CSDR_ac_DW.UnitDelay_DSTATE_b = (rtb_AND_m0 || (VeCSDR_b_C1SlipLatched));

    /* Logic: '<S25>/Logical1' incorporates:
     *  Constant: '<S186>/Calib'
     */
    VeCSDR_b_C2_NoSlipUnlearn = ((KeCSDR_b_C2_DeactvtMSPRUnlearn) && rtb_AND_gf);

    /* Logic: '<S155>/Logical4' incorporates:
     *  Logic: '<S155>/Logical1'
     */
    VeCSDR_b_C2UnlearnPause = ((VeCSDR_b_C2_NoSlipUnlearn) ||
        (!VeCSDR_b_C2_SlipCompTrigger));

    /* Outputs for Atomic SubSystem: '<S157>/EdgeRising4' */
    /* Logic: '<S160>/AND' incorporates:
     *  Logic: '<S160>/OR1'
     *  UnitDelay: '<S160>/Unit Delay'
     */
    rtb_Comparison2_b = !CSDR_ac_DW.UnitDelay_DSTATE_jj;

    /* Update for UnitDelay: '<S160>/Unit Delay' incorporates:
     *  Constant: '<S157>/TRUE Constant2'
     */
    CSDR_ac_DW.UnitDelay_DSTATE_jj = true;

    /* End of Outputs for SubSystem: '<S157>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S22>/StpWch_Rset_Enab' */
    /* Switch: '<S154>/Switch1' incorporates:
     *  Logic: '<S157>/Logical'
     *  Logic: '<S157>/Logical3'
     *  Logic: '<S157>/Logical9'
     *  Switch: '<S154>/Switch2'
     */
    if ((((VeCSDR_b_C2SlipLatched) || rtb_Logical2_d) || rtb_Comparison2_o) ||
            rtb_Comparison2_b)
    {
        /* Switch: '<S154>/Switch1' incorporates:
         *  Constant: '<S154>/Constant Value2'
         */
        rtb_Switch1 = 0.0F;
    }
    else if ((!VeCSDR_b_C2UnlearnPause) && (VeCSDR_b_C2TrqCapEnbld))
    {
        /* Switch: '<S154>/Switch2' incorporates:
         *  Constant: '<S28>/Calib'
         *  Sum: '<S154>/Subtraction'
         *  Switch: '<S154>/Switch1'
         *  UnitDelay: '<S154>/Unit Delay'
         */
        rtb_Switch1 = HeCSDR_t_MedTED + CSDR_ac_DW.UnitDelay_DSTATE_f;
    }
    else
    {
        /* Switch: '<S154>/Switch1' incorporates:
         *  Switch: '<S154>/Switch2'
         *  UnitDelay: '<S154>/Unit Delay'
         */
        rtb_Switch1 = CSDR_ac_DW.UnitDelay_DSTATE_f;
    }

    /* End of Switch: '<S154>/Switch1' */

    /* Switch: '<S154>/Switch' incorporates:
     *  Constant: '<S154>/Constant Value3'
     *  RelationalOperator: '<S154>/Comparison1'
     *  UnitDelay: '<S154>/Unit Delay'
     */
    if (rtb_Switch1 < 10.0F)
    {
        CSDR_ac_DW.UnitDelay_DSTATE_f = rtb_Switch1;
    }

    /* End of Switch: '<S154>/Switch' */
    /* End of Outputs for SubSystem: '<S22>/StpWch_Rset_Enab' */

    /* Switch: '<S161>/Switch3' incorporates:
     *  Constant: '<S158>/Constant Value'
     *  Constant: '<S32>/Calib'
     *  MinMax: '<S154>/MinMax'
     *  UnitDelay: '<S154>/Unit Delay'
     *  UnitDelay: '<S161>/Unit Delay'
     */
    if (VeCSDR_b_C2SlipLatched)
    {
        CSDR_ac_DW.UnitDelay_DSTATE_j = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S22>/StpWch_Rset_Enab' */
        CSDR_ac_DW.UnitDelay_DSTATE_j = fminf(CSDR_ac_DW.UnitDelay_DSTATE_f,
            KeCSDR_t_DbncC2TrqCap);

        /* End of Outputs for SubSystem: '<S22>/StpWch_Rset_Enab' */
    }

    /* End of Switch: '<S161>/Switch3' */

    /* Switch: '<S165>/Switch1' incorporates:
     *  Switch: '<S165>/Switch3'
     *  UnitDelay: '<S165>/Unit Delay'
     */
    CSDR_ac_DW.UnitDelay_DSTATE_c = (rtb_AND_ik || (VeCSDR_b_C2SlipLatched));

    /* Update for UnitDelay: '<S15>/Unit Delay' */
    CSDR_ac_DW.UnitDelay_DSTATE_kk = rtb_AND;

    /* Update for UnitDelay: '<S70>/Unit Delay' */
    CSDR_ac_DW.UnitDelay_DSTATE_ew = rtb_TmpSignalConversionAtVeDFIR_b_PostCo;

    /* Update for UnitDelay: '<S20>/Unit Delay' */
    CSDR_ac_DW.UnitDelay_DSTATE_d = rtb_Logical5_j;

    /* End of Outputs for SubSystem: '<S9>/CSDD_CltchSlpDiag' */
#else

    /* Outputs for Atomic SubSystem: '<S9>/ClutchSlipDiagStub' */
    /* VariantMerge generated from: '<S9>/CorrectedC1TrqEst' incorporates:
     *  Constant: '<S11>/ConstantValue'
     */
    VeCSDR_M_C1CorrectedSlipTrq = 0.0F;

    /* VariantMerge generated from: '<S9>/C2CorrectedSlipTrq' incorporates:
     *  Constant: '<S11>/ConstantValue1'
     */
    VeCSDR_M_C2CorrectedSlipTrq = 0.0F;

    /* VariantMerge generated from: '<S9>/C1_NA' incorporates:
     *  Constant: '<S11>/FALSE Constant'
     */
    VeCSDR_b_C1_NA = false;

    /* VariantMerge generated from: '<S9>/C2_NA' incorporates:
     *  Constant: '<S11>/FALSE Constant1'
     */
    VeCSDR_b_C2_NA = false;

    /* VariantMerge generated from: '<S9>/VeCSDR_e_FaultSts_TransFrictElmntA_Slip' incorporates:
     *  Constant: '<S187>/Constant'
     */
    CSDR_ac_B.VariantMergeForOutportVeCSDR_e_FaultSts_ = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S9>/VeCSDR_e_FaultSts_TransFrictElmntB_Slip' incorporates:
     *  Constant: '<S188>/Constant'
     */
    CSDR_ac_B.VariantMergeForOutportVeCSDR_e_FaultSt_p = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S9>/ClutchSlipDiagStub' */
#endif

    /* End of SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_TransFrictElmntA_Slip' */
    /* End of Outputs for SubSystem: '<S6>/CSDD_CltchSlpDiag' */

    /* Logic: '<S6>/Logical7' incorporates:
     *  DataStoreWrite: '<S6>/DataStoreWrite'
     */
    VeCSDR_b_C1_Avail_DS = !VeCSDR_b_C1_NA;

    /* Logic: '<S6>/Logical5' incorporates:
     *  DataStoreWrite: '<S6>/DataStoreWrite1'
     */
    VeCSDR_b_C2_Avail_DS = !VeCSDR_b_C2_NA;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/CSDO_OutputsUpdate'
     */
    /* Switch: '<S8>/Switch1' incorporates:
     *  Constant: '<S223>/Calib'
     */
    if (KeCSDR_b_C1_ClchAvailOvrdEnbl)
    {
        /* SignalConversion generated from: '<S1>/Clch1_Avail' incorporates:
         *  Constant: '<S224>/Calib'
         *  Outport: '<Root>/VeCSDR_b_Clch1_Avail'
         */
        (void)Rte_Write_VeCSDR_b_Clch1_Avail_Value(KeCSDR_b_C1_ClchAvailOvrdVal);
    }
    else
    {
        /* SignalConversion generated from: '<S1>/Clch1_Avail' incorporates:
         *  DataStoreRead: '<S8>/DataStoreRead27'
         *  Outport: '<Root>/VeCSDR_b_Clch1_Avail'
         */
        (void)Rte_Write_VeCSDR_b_Clch1_Avail_Value(VeCSDR_b_C1_Avail_DS);
    }

    /* End of Switch: '<S8>/Switch1' */

    /* Switch: '<S8>/Switch' incorporates:
     *  Constant: '<S225>/Calib'
     */
    if (KeCSDR_b_C2_ClchAvailOvrdEnbl)
    {
        /* SignalConversion generated from: '<S1>/Clch2_Avail' incorporates:
         *  Constant: '<S226>/Calib'
         *  Outport: '<Root>/VeCSDR_b_Clch2_Avail'
         */
        (void)Rte_Write_VeCSDR_b_Clch2_Avail_Value(KeCSDR_b_C2_ClchAvailOvrdVal);
    }
    else
    {
        /* SignalConversion generated from: '<S1>/Clch2_Avail' incorporates:
         *  DataStoreRead: '<S8>/DataStoreRead33'
         *  Outport: '<Root>/VeCSDR_b_Clch2_Avail'
         */
        (void)Rte_Write_VeCSDR_b_Clch2_Avail_Value(VeCSDR_b_C2_Avail_DS);
    }

    /* End of Switch: '<S8>/Switch' */

    /* Outport: '<Root>/VeCSDR_M_CorrectedC1TrqEstFctr' incorporates:
     *  Gain: '<S228>/Gain'
     *  SignalConversion generated from: '<S1>/VeCSDR_M_CorrectedC1TrqEstFctr'
     */
    (void)Rte_Write_VeCSDR_M_CorrectedC1TrqEstFctr_Value
        (VeCSDR_M_C1CorrectedSlipTrq);

    /* Outport: '<Root>/VeCSDR_M_CorrectedC2TrqEstFctr' incorporates:
     *  Gain: '<S227>/Gain'
     *  SignalConversion generated from: '<S1>/VeCSDR_M_CorrectedC2TrqEstFctr'
     */
    (void)Rte_Write_VeCSDR_M_CorrectedC2TrqEstFctr_Value
        (VeCSDR_M_C2CorrectedSlipTrq);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeCSDR_e_FaultSts_TransFrictElmntA_Slip' incorporates:
     *  SignalConversion generated from: '<S1>/VeCSDR_e_FaultSts_TransFrictElmntA_Slip'
     *  VariantMerge generated from: '<S9>/VeCSDR_e_FaultSts_TransFrictElmntA_Slip'
     */
    (void)Rte_Write_VeCSDR_e_FaultSts_TransFrictElmntA_Slip_Value
        (CSDR_ac_B.VariantMergeForOutportVeCSDR_e_FaultSts_);

    /* Outport: '<Root>/VeCSDR_e_FaultSts_TransFrictElmntB_Slip' incorporates:
     *  SignalConversion generated from: '<S1>/VeCSDR_e_FaultSts_TransFrictElmntB_Slip'
     *  VariantMerge generated from: '<S9>/VeCSDR_e_FaultSts_TransFrictElmntB_Slip'
     */
    (void)Rte_Write_VeCSDR_e_FaultSts_TransFrictElmntB_Slip_Value
        (CSDR_ac_B.VariantMergeForOutportVeCSDR_e_FaultSt_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, CSDR_CODE) CSDR_PUP(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PUP' incorporates:
     *  SubSystem: '<Root>/CSDR_PUP'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CSDO_Init_Outputs'
     */
    /* Outport: '<Root>/VeCSDR_b_Clch1_Avail' incorporates:
     *  Constant: '<S229>/TRUE Constant'
     *  Logic: '<S231>/AND'
     *  SignalConversion generated from: '<S2>/Clch1_Avail'
     */
    (void)Rte_Write_VeCSDR_b_Clch1_Avail_Value(true);

    /* Outport: '<Root>/VeCSDR_b_Clch2_Avail' incorporates:
     *  Constant: '<S229>/TRUE Constant1'
     *  Logic: '<S230>/AND'
     *  SignalConversion generated from: '<S2>/Clch2_Avail'
     */
    (void)Rte_Write_VeCSDR_b_Clch2_Avail_Value(true);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PUP' */
}

/* Output function */
FUNC(void, CSDR_CODE) PokeCSDR_b_RstClutchSlipAdaption(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeCSDR_b_RstClutchSlipAdaption' */
    /* Chart: '<S5>/PokeCSDR_b_RstClutchSlipAdaptionChrt' */
    /* Gateway: PokeCSDR_b_RstClutchSlipAdaption/PokeCSDR_b_RstClutchSlipAdaptionChrt */
    /* During: PokeCSDR_b_RstClutchSlipAdaption/PokeCSDR_b_RstClutchSlipAdaptionChrt */
    /* Entry Internal: PokeCSDR_b_RstClutchSlipAdaption/PokeCSDR_b_RstClutchSlipAdaptionChrt */
    /* Transition: '<S236>:31' */
    CSDR_ac_DW.NeCSDR_phi_C1SlipIntegrated = 0.0F;
    CSDR_ac_DW.NeCSDR_phi_C2SlipIntegrated = 0.0F;
    VeCSDR_b_RstIntegrator = true;

    /* End of Outputs for SubSystem: '<Root>/PokeCSDR_b_RstClutchSlipAdaption' */
}

/* Output function */
FUNC(void, CSDR_CODE) CSDR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/CSDR_PwrOff'
     */
    /* Outport: '<Root>/NeCSDR_phi_C1SlipIntegrated_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCSDR_phi_C1SlipIntegrated'
     */
    (void)Rte_Write_NeCSDR_phi_C1SlipIntegrated_NeCSDR_phi_C1SlipIntegrated
        (CSDR_ac_DW.NeCSDR_phi_C1SlipIntegrated);

    /* Outport: '<Root>/NeCSDR_phi_C2SlipIntegrated_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCSDR_phi_C2SlipIntegrated'
     */
    (void)Rte_Write_NeCSDR_phi_C2SlipIntegrated_NeCSDR_phi_C2SlipIntegrated
        (CSDR_ac_DW.NeCSDR_phi_C2SlipIntegrated);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, CSDR_CODE) CSDR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CSDR_PwrOn'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/DSM_Init'
     */
    /* DataStoreWrite: '<S232>/NeCSDR_phi_C2SlipIntegrated' incorporates:
     *  Inport: '<Root>/NeCSDR_phi_C2SlipIntegrated_PM_In'
     */
    (void)Rte_Read_NeCSDR_phi_C2SlipIntegrated_Rx_NeCSDR_phi_C2SlipIntegrated
        (&CSDR_ac_DW.NeCSDR_phi_C2SlipIntegrated);

    /* DataStoreWrite: '<S232>/NeCSDR_phi_C1SlipIntegrated' incorporates:
     *  Inport: '<Root>/NeCSDR_phi_C1SlipIntegrated_PM_In'
     */
    (void)Rte_Read_NeCSDR_phi_C1SlipIntegrated_Rx_NeCSDR_phi_C1SlipIntegrated
        (&CSDR_ac_DW.NeCSDR_phi_C1SlipIntegrated);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S233>/VeCSDR_M_CorrectedC1TrqEstFctr_Out_Init' */
    CSDR_ac_B.OutportBufferForVeCSDR_M_CorrectedC1TrqE = 0.0F;

    /* SignalConversion generated from: '<S233>/VeCSDR_M_CorrectedC2TrqEstFctr_Out_Init' */
    CSDR_ac_B.OutportBufferForVeCSDR_M_CorrectedC2TrqE = 0.0F;

    /* SignalConversion generated from: '<S233>/VeCSDR_e_FaultSts_TransFrictElmntA_Slip' incorporates:
     *  Constant: '<S234>/Constant'
     */
    CSDR_ac_B.OutportBufferForVeCSDR_e_FaultSts_TransF = CSDR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S233>/VeCSDR_e_FaultSts_TransFrictElmntB_Slip' incorporates:
     *  Constant: '<S235>/Constant'
     */
    CSDR_ac_B.OutportBufferForVeCSDR_e_FaultSts_Tran_c =
        CSDR_ac_ConstB.Constant_c;

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeCSDR_e_FaultSts_TransFrictElmntA_Slip' incorporates:
     *  SignalConversion generated from: '<S233>/VeCSDR_e_FaultSts_TransFrictElmntA_Slip'
     *  SignalConversion generated from: '<S4>/R_VeCSDR_e_FaultSts_TransFrictElmntA_Slip'
     */
    (void)Rte_Write_VeCSDR_e_FaultSts_TransFrictElmntA_Slip_Value
        (CSDR_ac_B.OutportBufferForVeCSDR_e_FaultSts_TransF);

    /* Outport: '<Root>/VeCSDR_e_FaultSts_TransFrictElmntB_Slip' incorporates:
     *  SignalConversion generated from: '<S233>/VeCSDR_e_FaultSts_TransFrictElmntB_Slip'
     *  SignalConversion generated from: '<S4>/R_VeCSDR_e_FaultSts_TransFrictElmntB_Slip'
     */
    (void)Rte_Write_VeCSDR_e_FaultSts_TransFrictElmntB_Slip_Value
        (CSDR_ac_B.OutportBufferForVeCSDR_e_FaultSts_Tran_c);

    /* Outport: '<Root>/VeCSDR_M_CorrectedC1TrqEstFctr' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSDR_M_CorrectedC1TrqEstFctr_Out_Init'
     */
    (void)Rte_Write_VeCSDR_M_CorrectedC1TrqEstFctr_Value
        (CSDR_ac_B.OutportBufferForVeCSDR_M_CorrectedC1TrqE);

    /* Outport: '<Root>/VeCSDR_M_CorrectedC2TrqEstFctr' incorporates:
     *  SignalConversion generated from: '<S4>/VeCSDR_M_CorrectedC2TrqEstFctr_Out_Init'
     */
    (void)Rte_Write_VeCSDR_M_CorrectedC2TrqEstFctr_Value
        (CSDR_ac_B.OutportBufferForVeCSDR_M_CorrectedC2TrqE);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, CSDR_CODE) CSDR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/CSDR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S233>/VeCSDR_e_FaultSts_TransFrictElmntA_Slip' incorporates:
     *  Constant: '<S234>/Constant'
     */
    CSDR_ac_B.OutportBufferForVeCSDR_e_FaultSts_TransF = CSDR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S233>/VeCSDR_e_FaultSts_TransFrictElmntB_Slip' incorporates:
     *  Constant: '<S235>/Constant'
     */
    CSDR_ac_B.OutportBufferForVeCSDR_e_FaultSts_Tran_c =
        CSDR_ac_ConstB.Constant_c;

    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeCSDR_e_FaultSts_TransFrictElmntA_Slip' incorporates:
     *  Merge: '<Root>/M_VeCSDR_e_FaultSts_TransFrictElmntA_Slip'
     */
    (void)Rte_Write_VeCSDR_e_FaultSts_TransFrictElmntA_Slip_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeCSDR_e_FaultSts_TransFrictElmntB_Slip' incorporates:
     *  Merge: '<Root>/M_VeCSDR_e_FaultSts_TransFrictElmntB_Slip'
     */
    (void)Rte_Write_VeCSDR_e_FaultSts_TransFrictElmntB_Slip_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
