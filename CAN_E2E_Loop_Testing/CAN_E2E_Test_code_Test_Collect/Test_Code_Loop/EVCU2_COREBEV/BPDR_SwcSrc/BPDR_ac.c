/*
 * File: BPDR_ac.c
 *
 * Code generated for Simulink model 'BPDR_ac'.
 *
 * Model version                  : 9.98
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:08:53 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BPDR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_BPDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) HeBPDR_t_MedTED = 0.02F;/* Referenced by:
                                                                      * '<S141>/Calib'
                                                                      * '<S28>/Calib'
                                                                      * '<S59>/Calib'
                                                                      * '<S78>/Calib'
                                                                      * '<S109>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT) KaBPDR_b_AutoStartStForFail[29] =
{
    0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S209>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT) KaBPDR_b_AutoStartStForPass[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S210>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT) KaBPDR_b_EngStrtStpMdForFail[16] =
{
    0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S211>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT)
    KaBPDR_b_EngStrtStpStBeltLearnNotAllwd[29] =
{
    1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1
} ;                                    /* Referenced by: '<S130>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT)
    KaBPDR_b_EngStrtStpStBeltUnlearnNotAllwd[29] =
{
    1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1
} ;                                    /* Referenced by: '<S131>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_Cf_ConvertRPMtoRPS = 0.017F;/* Referenced by:
                                                                      * '<S30>/Calib'
                                                                      * '<S80>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_Cf_ConvertRevToDeg = 360.0F;/* Referenced by:
                                                                      * '<S31>/Calib'
                                                                      * '<S81>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(uint16, BPDR_VAR_INIT) KeBPDR_Cnt_BeltSlipFailLmt = 40U;/* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(uint16, BPDR_VAR_INIT) KeBPDR_Cnt_BeltSlipPassLmt = 80U;/* Referenced by: '<S168>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(uint16, BPDR_VAR_INIT) KeBPDR_Cnt_BeltSlipSmplLmt = 100U;/* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(uint8, BPDR_VAR_INIT) KeBPDR_Cnt_P0A92_FailCnt = 4U;/* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(uint8, BPDR_VAR_INIT) KeBPDR_Cnt_P0A92_SmpCnt = 8U;/* Referenced by: '<S171>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_K_NegSlipCapTh = 0.85F;/* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_K_PosSlipCapTh = 0.85F;/* Referenced by: '<S143>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT)
    KeBPDR_M_MaxHDTRNegTqLimForBltMissDet = -10.0F;/* Referenced by: '<S32>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT)
    KeBPDR_M_MinHDTRPosTqLimForBltMissDet = 10.0F;/* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_M_MtrATrqThrshld = 0.0F;/* Referenced by: '<S183>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_M_NegSlipCorrectedTrqThLSP =
    -100.0F;                           /* Referenced by: '<S193>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_M_NegSlipCorrectedTrqThRSP =
    -80.0F;                            /* Referenced by: '<S194>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_M_PosSlipCorrectedTrqThLSP =
    80.0F;                             /* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_M_PosSlipCorrectedTrqThRSP =
    100.0F;                            /* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT) KeBPDR_b_EnaLosCommECMChk = 0;/* Referenced by:
                                                                      * '<S128>/Calib'
                                                                      * '<S184>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT) KeBPDR_b_EnblNegSlipDiag = 0;/* Referenced by:
                                                                      * '<S60>/Calib'
                                                                      * '<S61>/Calib'
                                                                      * '<S197>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT) KeBPDR_b_EnblPosSlipDiag = 0;/* Referenced by:
                                                                      * '<S110>/Calib'
                                                                      * '<S111>/Calib'
                                                                      * '<S198>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT) KeBPDR_b_EnblStartWSlipDiag = 0;/* Referenced by: '<S172>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT)
    KeBPDR_b_HybridGenPerf_Slip_LtchEnbl = 0;/* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT) KeBPDR_b_IUMPR_P0A92_Enb = 1;/* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT) KeBPDR_b_LOC_ECMAtlantis_Slct = 0;/* Referenced by:
                                                                      * '<S129>/Calib'
                                                                      * '<S185>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT) KeBPDR_b_NVRAMNegSlipRstOvrd = 0;/* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT) KeBPDR_b_NVRAMPosSlipRstOvrd = 0;/* Referenced by: '<S112>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT) KeBPDR_b_P0A92_EngStsOvrd = 0;/* Referenced by: '<S186>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT) KeBPDR_b_P0A92_MtrTrqOvrd = 0;/* Referenced by: '<S187>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT) KeBPDR_b_P0A92_SlipSpdOvrd = 0;/* Referenced by: '<S188>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT) KeBPDR_b_P0A92_SpdValidVOvrd = 0;/* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT) KeBPDR_b_RstSlipBufCrkFaildAtStart
    = 1;                               /* Referenced by:
                                        * '<S63>/Calib'
                                        * '<S113>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT)
    KeBPDR_b_StarterGenMechPerf_Slip_LtchEnbl = 0;/* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(boolean, BPDR_VAR_INIT) KeBPDR_b_UseRawBeltSlipForBeltDiag
    = 0;                               /* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_k_NegBeltSlipFilterCoeff =
    1.0F;                              /* Referenced by: '<S33>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_k_PosBeltSlipFilterCoeff =
    1.0F;                              /* Referenced by: '<S83>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_n_BeltSlipSpdThrshld = 0.0F;/* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_n_NegBeltSlip_MaxVal =
    1000.0F;                           /* Referenced by: '<S34>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_n_NegBeltSlip_MinVal =
    -1000.0F;                          /* Referenced by: '<S35>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_n_NegSlipDeadBandMax =
    1001.0F;                           /* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT)
    KeBPDR_n_NegSlipDeadBandMinStrtStop = -10000.0F;/* Referenced by: '<S37>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_n_PosBeltSlip_MaxVal =
    1000.0F;                           /* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_n_PosBeltSlip_MinVal =
    -1000.0F;                          /* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT)
    KeBPDR_n_PosSlipDeadBandMaxStrtStop = 10000.0F;/* Referenced by: '<S86>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_n_PosSlipDeadBandMin =
    -1001.0F;                          /* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_phi_NVRAMNegSlipRstOvrdVal =
    0.0F;                              /* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_phi_NVRAMPosSlipRstOvrdVal =
    0.0F;                              /* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_t_BltMissNegDetDly = 1.0F;/* Referenced by: '<S38>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_t_BltMissPosDetDly = 1.0F;/* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_t_DbncNegSlipTrqCap = 5.0F;/* Referenced by: '<S144>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_t_DbncPosSlipTrqCap = 5.0F;/* Referenced by: '<S145>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_t_NegSlipFreezeDly = 0.25F;/* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KeBPDR_t_PosSlipFreezeDly = 0.25F;/* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KtBPDR_M_NegSlipCorrectedTrq[10] =
{
    0.0F, -10.0F, -20.0F, -30.0F, -40.0F, -50.0F, -55.0F, -60.0F, -65.0F, -70.0F
} ;                                    /* Referenced by:
                                        * '<S66>/Vector'
                                        * '<S67>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KtBPDR_M_PosSlipCorrectedTrq[10] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 55.0F, 60.0F, 65.0F, 70.0F
} ;                                    /* Referenced by:
                                        * '<S116>/Vector'
                                        * '<S117>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KtBPDR_n_NegSlipDeadBandMin[5] =
{
    -130.0F, -130.0F, -139.0F, -150.0F, -161.0F
} ;                                    /* Referenced by: '<S39>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KtBPDR_n_PosSlipDeadBandMax[5] =
{
    127.0F, 127.0F, 136.0F, 147.0F, 158.0F
} ;                                    /* Referenced by: '<S89>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KtBPDR_phi_NegSlipRecovery[6] =
{
    0.0F, 0.0F, 0.0F, 30.0F, 60.0F, 60.0F
} ;                                    /* Referenced by: '<S146>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KtBPDR_phi_PosSlipRecovery[6] =
{
    0.0F, 0.0F, 0.0F, 30.0F, 60.0F, 60.0F
} ;                                    /* Referenced by: '<S147>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KtBPDR_scl_NegSlipActTrqRatio[10] =
{
    1.0F, 1.0F, 2.0F, 2.5F, 3.0F, 3.5F, 4.0F, 4.5F, 4.5F, 5.0F
} ;                                    /* Referenced by: '<S40>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KtBPDR_scl_NegSlipActTrqRatioLoTq
    [7] =
{
    1.0F, 1.0F, 0.0F, 0.0F, 0.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S41>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KtBPDR_scl_PosSlipActTrqRatio[10] =
{
    1.0F, 1.0F, 2.0F, 2.5F, 3.0F, 3.5F, 4.0F, 4.5F, 4.5F, 5.0F
} ;                                    /* Referenced by: '<S90>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KtBPDR_scl_PosSlipActTrqRatioLoTq
    [7] =
{
    1.0F, 1.0F, 0.0F, 0.0F, 0.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S91>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KxBPDR_M_NegSlipCorrectedTrq[10] =
{
    0.0F, 360.0F, 720.0F, 1800.0F, 3600.0F, 4680.0F, 6120.0F, 6840.0F, 7200.0F,
    10800.0F
} ;                                    /* Referenced by:
                                        * '<S66>/Vector'
                                        * '<S67>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KxBPDR_M_PosSlipCorrectedTrq[10] =
{
    0.0F, 360.0F, 720.0F, 1800.0F, 3600.0F, 4680.0F, 6120.0F, 6840.0F, 7200.0F,
    10800.0F
} ;                                    /* Referenced by:
                                        * '<S116>/Vector'
                                        * '<S117>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KxBPDR_n_NegSlipDeadBandMin[5] =
{
    0.0F, 3042.0F, 4000.0F, 5000.0F, 6000.0F
} ;                                    /* Referenced by: '<S39>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KxBPDR_n_PosSlipDeadBandMax[5] =
{
    0.0F, 3042.0F, 4000.0F, 5000.0F, 6000.0F
} ;                                    /* Referenced by: '<S89>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KxBPDR_phi_NegSlipRecovery[6] =
{
    0.0F, 0.1F, 0.5F, 1.0F, 2.0F, 10.0F
} ;                                    /* Referenced by: '<S146>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KxBPDR_phi_PosSlipRecovery[6] =
{
    0.0F, 0.1F, 0.5F, 1.0F, 2.0F, 10.0F
} ;                                    /* Referenced by: '<S147>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KxBPDR_scl_NegSlipActTrqRatio[10] =
{
    0.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F, 200.0F
} ;                                    /* Referenced by: '<S40>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KxBPDR_scl_NegSlipActTrqRatioLoTq
    [7] =
{
    -30.0F, -10.01F, -10.0F, 0.0F, 10.0F, 10.01F, 30.0F
} ;                                    /* Referenced by: '<S41>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KxBPDR_scl_PosSlipActTrqRatio[10] =
{
    0.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F, 200.0F
} ;                                    /* Referenced by: '<S90>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static volatile CONST(float32, BPDR_VAR_INIT) KxBPDR_scl_PosSlipActTrqRatioLoTq
    [7] =
{
    -30.0F, -10.01F, -10.0F, 0.0F, 10.0F, 10.01F, 30.0F
} ;                                    /* Referenced by: '<S91>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_BPDR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BPDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_BPDR_1

static VAR(uint16, BPDR_VAR_INIT) VeBPDR_Cnt_P0A92_FailCnt;/* '<S241>/Switch1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(uint16, BPDR_VAR_INIT) VeBPDR_Cnt_P0A92_MFOP;/* '<S247>/Switch1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(uint16, BPDR_VAR_INIT) VeBPDR_Cnt_P0A92_SmpCnt;/* '<S242>/Switch1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_M_CorrectedNegTrqCnfrmd;/* '<S70>/Switch' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_BltMissDetNegEna;/* '<S44>/AND' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_BltMissDetPosEna;/* '<S94>/AND' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_ChgOfMindStart;/* '<S213>/OR1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_FailCritMet;/* '<S199>/AND' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_FailCritMetLtch;/* '<S214>/OR1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_LostNegCapacity;/* '<S166>/Logical1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_LostPosCapacity;/* '<S166>/Logical' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_NegCapUnlearnActv;/* '<S12>/Merge' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_NegSlipDetectedDly;/* '<S74>/AND' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_NegSlipIntegrated_WithKey_CrnkFail;/* '<S15>/Logical2' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_NegSlip_CrnkFail;/* '<S15>/Logical9' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_NegSlipped;/* '<S12>/Comparison4' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_NegSlippedLatched;/* '<S151>/OR1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_NegUnlearnPause;/* '<S132>/Logical1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_NrStartsWSlipFltDtct;/* '<S178>/Relational Operator1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_P0A92_EnbCndtn;/* '<S165>/Logical' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_PassCritMet;/* '<S177>/Logical2' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_PosCapUnlearnActv;/* '<S12>/Merge1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_PosSlipDetectedDly;/* '<S124>/AND' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_PosSlipIntegrated_WithKey_CrnkFail;/* '<S17>/Logical2' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_PosSlipLtch;/* '<S212>/OR1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_PosSlip_CrnkFail;/* '<S17>/Logical8' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_PosSlipped;/* '<S12>/Comparison5' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_PosSlippedLatched;/* '<S150>/OR1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_PosUnlearnPause;/* '<S132>/Logical2' */

#endif

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_RstIntegrator;/* '<Root>/DSM_3' */

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_StartStopStateActvNoLearn;/* '<S19>/Selector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_StartStopStateActvNoUnlearn;/* '<S19>/Selector1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_UpdMemoryForCrnkFail;/* '<S17>/Logical3' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(boolean, BPDR_VAR_INIT) VeBPDR_b_UpdMemoryForCrnkFail_Neg;/* '<S15>/Logical3' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_n_DeadBandNegBeltSlipSpeed;/* '<S26>/Switch1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_n_DeadBandPosBeltSlipSpeed;/* '<S76>/Switch1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_n_FiltrdNegSlipSpeed;/* '<S43>/Switch1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_n_FiltrdPosSlipSpeed;/* '<S93>/Switch1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_n_NegBeltSlipSpeed_Lmtd;/* '<S42>/Switch' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_n_NegSlipDeadBandMin;/* '<S39>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_n_PosBeltSlipSpeed_Lmtd;/* '<S92>/Switch' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_n_PosSlipDeadBandMax;/* '<S89>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_phi_NegBeltSlip;/* '<S14>/Product3' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_phi_NegSlipAcc;/* '<S46>/Switch1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_phi_NegSlipIntegrated_WithKey;/* '<S15>/Switch1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_phi_NegSlipIntegrated_WithKeyOnEdge;/* '<S15>/Switch2' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_phi_NegSlipIntegrated_WithKey_Final;/* '<S15>/Switch6' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_phi_NegSlipRecovery;/* '<S146>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_phi_NegSlipToIntegrate;/* '<S14>/Product2' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_phi_PosBeltSlip;/* '<S16>/Product3' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_phi_PosSlipAcc;/* '<S96>/Switch1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_phi_PosSlipIntegrated_WithKey;/* '<S17>/Switch1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_phi_PosSlipIntegrated_WithKeyOnEdge;/* '<S17>/Switch2' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_phi_PosSlipIntegrated_WithKey_Final;/* '<S17>/Switch6' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_phi_PosSlipRecovery;/* '<S147>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_phi_PosSlipToIntegrate;/* '<S16>/Product2' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_scl_NegSlipActTrqRatio;/* '<S40>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_scl_NegSlipActTrqRatioLoTq;/* '<S41>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_scl_PosSlipActTrqRatio;/* '<S90>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_scl_PosSlipActTrqRatioLoTq;/* '<S91>/Vector' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_t_NegSlipDbncTmr;/* '<S155>/Switch1' */

#endif

#if Rte_SysCon_Variant_BPDR_1

static VAR(float32, BPDR_VAR_INIT) VeBPDR_t_PosSlipDbncTmr;/* '<S154>/Switch1' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BPDR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_BPDR
#include "MemMap.h"

CONST(ConstB_BPDR_ac_T, BPDR_VAR_INIT) BPDR_ac_ConstB =
{
    CeDFIB_e_Init,                     /* '<S258>/Constant' */
    CeDFIB_e_Init                      /* '<S259>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_BPDR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BPDR
#include "MemMap.h"

VAR(B_BPDR_ac_T, BPDR_VAR_INIT) BPDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BPDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BPDR
#include "MemMap.h"

VAR(DW_BPDR_ac_T, BPDR_VAR_INIT) BPDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BPDR
#include "MemMap.h"
#if Rte_SysCon_Variant_BPDR_1

static FUNC(void, BPDR_CODE_LOCAL) BPDR_ac_ResetPokeOutput(VAR(boolean,
    AUTOMATIC) rtu_Enable);

#endif

#if Rte_SysCon_Variant_BPDR_1

static FUNC(void, BPDR_CODE_LOCAL) BPDR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BPDR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_BPDR_1

static FUNC(void, BPDR_CODE_LOCAL) BPDR_ac_Init_e(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BPDR_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_BPDR_1

static FUNC(void, BPDR_CODE_LOCAL) BPDR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BPDR_VAR_INIT)
    rty_FaultSts);

#endif

/*
 * Output and update for enable system:
 *    '<S15>/ResetPokeOutput'
 *    '<S17>/ResetPokeOutput'
 */
#if Rte_SysCon_Variant_BPDR_1

static FUNC(void, BPDR_CODE_LOCAL) BPDR_ac_ResetPokeOutput(VAR(boolean,
    AUTOMATIC) rtu_Enable)
{
    /* Outputs for Enabled SubSystem: '<S15>/ResetPokeOutput' incorporates:
     *  EnablePort: '<S68>/Enable'
     */
    /* DataStoreWrite: '<S68>/Data Store Write1' */
    VeBPDR_b_RstIntegrator = ((!rtu_Enable) && (VeBPDR_b_RstIntegrator));

    /* End of Outputs for SubSystem: '<S15>/ResetPokeOutput' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S178>/Fail'
 *    '<S179>/Fail'
 */
#if Rte_SysCon_Variant_BPDR_1

static FUNC(void, BPDR_CODE_LOCAL) BPDR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BPDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S178>/Fail' incorporates:
     *  EnablePort: '<S221>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S221>/FaultSts' incorporates:
         *  Constant: '<S229>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S178>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S178>/Init'
 *    '<S179>/Init'
 */
#if Rte_SysCon_Variant_BPDR_1

static FUNC(void, BPDR_CODE_LOCAL) BPDR_ac_Init_e(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BPDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S178>/Init' incorporates:
     *  EnablePort: '<S222>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S222>/FaultSts' incorporates:
         *  Constant: '<S230>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S178>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S178>/Pass'
 *    '<S179>/Pass'
 */
#if Rte_SysCon_Variant_BPDR_1

static FUNC(void, BPDR_CODE_LOCAL) BPDR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, BPDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S178>/Pass' incorporates:
     *  EnablePort: '<S223>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S223>/FaultSts' incorporates:
         *  Constant: '<S231>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S178>/Pass' */
}

#endif

/* Model step function for TID1 */
FUNC(void, BPDR_CODE) BPDR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_Comparison7;

#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_Logical12_g;

#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_Comparison1;

#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_Logical1;

#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_AND_kd;

#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_Logical5;

#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_AND_bz;

#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_Comparison7_d;

#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_AND_d;

#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_AND_nf;

#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_Comparison2_b;

#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_FailCounterReset_g;

#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_RelationalOperator3_j;

#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_OR1_l3;

#endif

#if Rte_SysCon_Variant_BPDR_1

    float32 rtb_Switch1;

#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_OR1_mi;

#endif

#if Rte_SysCon_Variant_BPDR_1

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_e;

#endif

#if Rte_SysCon_Variant_BPDR_1

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;

#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_AND_o0;

#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_OR1_fr;

#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_AND_ll;

#endif

#if Rte_SysCon_Variant_BPDR_1

    boolean rtb_AND_jv0;

#endif

#if Rte_SysCon_Variant_BPDR_1

    float32 rtb_Switch_kv;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/BPDR_MedTED'
     */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommECM_PCM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommECM_PCM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommECM_PCM_A_Value
        (&BPDR_ac_DW.StatusByte_LostCommECM_PCM_A);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommECM_A_BusB' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommECM_A_BusB'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommECM_A_BusB_Value
        (&BPDR_ac_DW.StatusByte_LostCommECM_A_BusB);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Diagnostic'
     */
    /* Outputs for Atomic SubSystem: '<S6>/BeltSlipDiag' */
    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_HybridGenPerf_Slip' incorporates:
     *  Inport: '<Root>/VeBCPR_M_BeltCapMaxBPDR'
     *  Inport: '<Root>/VeBCPR_M_BeltCapMinBPDR'
     *  Inport: '<Root>/VeBCPR_M_BeltTrqMaxHTDR_Rot'
     *  Inport: '<Root>/VeBCPR_M_BeltTrqMinHTDR_Rot'
     *  Inport: '<Root>/VeBCPR_b_BeltSlipSpd_FA'
     *  Inport: '<Root>/VeBCPR_b_BeltSlipTrigger'
     *  Inport: '<Root>/VeBCPR_b_NegSlipDetected'
     *  Inport: '<Root>/VeBCPR_b_PosSlipDetected'
     *  Inport: '<Root>/VeBCPR_n_BeltSlipSpd'
     *  Inport: '<Root>/VeBCPR_n_BeltSlipSpdFilt'
     *  Inport: '<Root>/VeBCPR_n_Ni_BCPR'
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  Inport: '<Root>/VeESPR_b_BuffrCrnkDiagFailing'
     *  Inport: '<Root>/VeESPR_e_EngineSpeedStatus'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  Inport: '<Root>/VeESSR_e_EngStrtStpMd'
     *  Inport: '<Root>/VeHTDR_M_MtrA_TorqCmnd'
     *  Inport: '<Root>/VeMTIR_M_MtrA_TorqAchieved'
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     *  Inport: '<Root>/VeTISR_e_InpSpdSource'
     *  Inport: '<S5>/VeBCPR_M_BeltCapMaxBPDR'
     *  Inport: '<S5>/VeBCPR_M_BeltCapMinBPDR'
     *  Inport: '<S5>/VeBCPR_M_BeltTrqMaxHTDR_Rot'
     *  Inport: '<S5>/VeBCPR_M_BeltTrqMinHTDR_Rot'
     *  Inport: '<S5>/VeBCPR_b_BeltSlipSpd_FA'
     *  Inport: '<S5>/VeBCPR_b_BeltSlipTrigger'
     *  Inport: '<S5>/VeBCPR_b_NegSlipDetected'
     *  Inport: '<S5>/VeBCPR_b_PosSlipDetected'
     *  Inport: '<S5>/VeBCPR_n_BeltSlipSpd'
     *  Inport: '<S5>/VeBCPR_n_BeltSlipSpdFilt'
     *  Inport: '<S5>/VeBCPR_n_Ni_BCPR'
     *  Inport: '<S5>/VeDFIR_b_DsblDiagFailSafe'
     *  Inport: '<S5>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  Inport: '<S5>/VeESPR_b_BuffrCrnkDiagFailing'
     *  Inport: '<S5>/VeESPR_e_EngineSpeedStatus'
     *  Inport: '<S5>/VeESSR_e_EngStartStopSt'
     *  Inport: '<S5>/VeESSR_e_EngStrtStpMd'
     *  Inport: '<S5>/VeHTDR_M_MtrA_TorqCmnd'
     *  Inport: '<S5>/VeMTIR_M_MtrA_TorqAchieved'
     *  Inport: '<S5>/VePMDR_e_PMM_PowerMode'
     *  Inport: '<S5>/VeTISR_e_InpSpdSource'
     *  SignalConversion generated from: '<S1>/VeDFIR_b_IsDiagGlobalConditionsValid'
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_StarterGenMechPerf_Slip'
     *  UnitDelay: '<S15>/Unit Delay'
     *  UnitDelay: '<S17>/Unit Delay'
     */
#if Rte_SysCon_Variant_BPDR_1

    /* Outputs for Atomic SubSystem: '<S8>/BeltSlipDiag' */
    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_HybridGenPerf_Slip' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HybridGenPerf_Slip'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HybridGenPerf_Slip_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_StarterGenMechPerf_Slip' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_StarterGenMechPerf_Slip'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_StarterGenMechPerf_Slip_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_e);

    /* SignalConversion generated from: '<S1>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);
    (void)Rte_Read_VeMTIR_M_MtrA_TorqAchieved_Value
        (&BPDR_ac_B.VeMTIR_M_MtrA_TorqAchieved);
    (void)Rte_Read_VeBCPR_M_BeltTrqMaxHTDR_Rot_Value
        (&BPDR_ac_B.VeBCPR_M_BeltTrqMaxHTDR_Rot);
    (void)Rte_Read_VeBCPR_M_BeltTrqMinHTDR_Rot_Value
        (&BPDR_ac_B.VeBCPR_M_BeltTrqMinHTDR_Rot);
    (void)Rte_Read_VeBCPR_M_BeltCapMaxBPDR_Value
        (&BPDR_ac_B.VeBCPR_M_BeltCapMaxBPDR);
    (void)Rte_Read_VeBCPR_M_BeltCapMinBPDR_Value
        (&BPDR_ac_B.VeBCPR_M_BeltCapMinBPDR);
    (void)Rte_Read_VeESSR_e_EngStrtStpMd_Value(&BPDR_ac_B.VeESSR_e_EngStrtStpMd);
    (void)Rte_Read_VeTISR_e_InpSpdSource_Value(&BPDR_ac_B.VeTISR_e_InpSpdSource);
    (void)Rte_Read_VeBCPR_b_BeltSlipTrigger_Value
        (&BPDR_ac_B.VeBCPR_b_BeltSlipTrigger);
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&BPDR_ac_B.VeDFIR_b_PostCodeClrDiagDsbl);
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        (&BPDR_ac_B.VeDFIR_b_DsblDiagFailSafe);
    (void)Rte_Read_VeESPR_e_EngineSpeedStatus_Value
        (&BPDR_ac_B.VeESPR_e_EngineSpeedStatus);
    (void)Rte_Read_VeBCPR_b_NegSlipDetected_Value
        (&BPDR_ac_B.VeBCPR_b_NegSlipDetected);
    (void)Rte_Read_VeBCPR_b_PosSlipDetected_Value
        (&BPDR_ac_B.VeBCPR_b_PosSlipDetected);
    (void)Rte_Read_VeESPR_b_BuffrCrnkDiagFailing_Value
        (&BPDR_ac_B.VeESPR_b_BuffrCrnkDiagFailing);
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&BPDR_ac_B.VeESSR_e_EngStartStopSt);
    (void)Rte_Read_VeBCPR_n_Ni_BCPR_Value(&BPDR_ac_B.VeBCPR_n_Ni_BCPR);
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value
        (&BPDR_ac_B.VePMDR_e_PMM_PowerMode);
    (void)Rte_Read_VeHTDR_M_MtrA_TorqCmnd_Value
        (&BPDR_ac_B.VeHTDR_M_MtrA_TorqCmnd);
    (void)Rte_Read_VeBCPR_n_BeltSlipSpdFilt_Value
        (&BPDR_ac_B.VeBCPR_n_BeltSlipSpdFilt);
    (void)Rte_Read_VeBCPR_n_BeltSlipSpd_Value(&BPDR_ac_B.VeBCPR_n_BeltSlipSpd);
    (void)Rte_Read_VeBCPR_b_BeltSlipSpd_FA_Value
        (&BPDR_ac_B.VeBCPR_b_BeltSlipSpd_FA);

    /* RelationalOperator: '<S15>/Comparison7' incorporates:
     *  Constant: '<S53>/Constant'
     *  Inport: '<Root>/VeBCPR_M_BeltCapMaxBPDR'
     *  Inport: '<Root>/VeBCPR_M_BeltCapMinBPDR'
     *  Inport: '<Root>/VeBCPR_M_BeltTrqMaxHTDR_Rot'
     *  Inport: '<Root>/VeBCPR_M_BeltTrqMinHTDR_Rot'
     *  Inport: '<Root>/VeBCPR_b_BeltSlipSpd_FA'
     *  Inport: '<Root>/VeBCPR_b_BeltSlipTrigger'
     *  Inport: '<Root>/VeBCPR_b_NegSlipDetected'
     *  Inport: '<Root>/VeBCPR_b_PosSlipDetected'
     *  Inport: '<Root>/VeBCPR_n_BeltSlipSpd'
     *  Inport: '<Root>/VeBCPR_n_BeltSlipSpdFilt'
     *  Inport: '<Root>/VeBCPR_n_Ni_BCPR'
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  Inport: '<Root>/VeESPR_b_BuffrCrnkDiagFailing'
     *  Inport: '<Root>/VeESPR_e_EngineSpeedStatus'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  Inport: '<Root>/VeESSR_e_EngStrtStpMd'
     *  Inport: '<Root>/VeHTDR_M_MtrA_TorqCmnd'
     *  Inport: '<Root>/VeMTIR_M_MtrA_TorqAchieved'
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     *  Inport: '<Root>/VeTISR_e_InpSpdSource'
     *  Inport: '<S5>/VeBCPR_M_BeltCapMaxBPDR'
     *  Inport: '<S5>/VeBCPR_M_BeltCapMinBPDR'
     *  Inport: '<S5>/VeBCPR_M_BeltTrqMaxHTDR_Rot'
     *  Inport: '<S5>/VeBCPR_M_BeltTrqMinHTDR_Rot'
     *  Inport: '<S5>/VeBCPR_b_BeltSlipSpd_FA'
     *  Inport: '<S5>/VeBCPR_b_BeltSlipTrigger'
     *  Inport: '<S5>/VeBCPR_b_NegSlipDetected'
     *  Inport: '<S5>/VeBCPR_b_PosSlipDetected'
     *  Inport: '<S5>/VeBCPR_n_BeltSlipSpd'
     *  Inport: '<S5>/VeBCPR_n_BeltSlipSpdFilt'
     *  Inport: '<S5>/VeBCPR_n_Ni_BCPR'
     *  Inport: '<S5>/VeDFIR_b_DsblDiagFailSafe'
     *  Inport: '<S5>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  Inport: '<S5>/VeESPR_b_BuffrCrnkDiagFailing'
     *  Inport: '<S5>/VeESPR_e_EngineSpeedStatus'
     *  Inport: '<S5>/VeESSR_e_EngStartStopSt'
     *  Inport: '<S5>/VeESSR_e_EngStrtStpMd'
     *  Inport: '<S5>/VeHTDR_M_MtrA_TorqCmnd'
     *  Inport: '<S5>/VeMTIR_M_MtrA_TorqAchieved'
     *  Inport: '<S5>/VePMDR_e_PMM_PowerMode'
     *  Inport: '<S5>/VeTISR_e_InpSpdSource'
     */
    rtb_Comparison7 = (((uint32)BPDR_ac_B.VeESSR_e_EngStartStopSt) ==
                       CeESSR_e_EngOff);

    /* Outputs for Atomic SubSystem: '<S15>/EdgeRising2' */
    /* Logic: '<S57>/OR1' incorporates:
     *  UnitDelay: '<S57>/Unit Delay'
     */
    rtb_OR1_l3 = !BPDR_ac_DW.UnitDelay_DSTATE_p5;

    /* Update for UnitDelay: '<S57>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_p5 = rtb_Comparison7;

    /* End of Outputs for SubSystem: '<S15>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S15>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S74>/EdgeFalling1' */
    /* Logic: '<S75>/AND' incorporates:
     *  Logic: '<S75>/OR1'
     *  UnitDelay: '<S75>/Unit Delay'
     */
    rtb_AND_o0 = ((!BPDR_ac_B.VeBCPR_b_NegSlipDetected) &&
                  (BPDR_ac_DW.UnitDelay_DSTATE_ch));

    /* Update for UnitDelay: '<S75>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_ch = BPDR_ac_B.VeBCPR_b_NegSlipDetected;

    /* End of Outputs for SubSystem: '<S74>/EdgeFalling1' */

    /* Switch: '<S74>/Switch' incorporates:
     *  Constant: '<S59>/Calib'
     *  Constant: '<S65>/Calib'
     *  Constant: '<S74>/Constant Value1'
     *  MinMax: '<S74>/Minimum'
     *  Sum: '<S74>/Summation'
     *  UnitDelay: '<S74>/Unit Delay'
     */
    if (rtb_AND_o0)
    {
        BPDR_ac_DW.UnitDelay_DSTATE_b = KeBPDR_t_NegSlipFreezeDly;
    }
    else
    {
        BPDR_ac_DW.UnitDelay_DSTATE_b = fmaxf(BPDR_ac_DW.UnitDelay_DSTATE_b -
            HeBPDR_t_MedTED, 0.0F);
    }

    /* End of Switch: '<S74>/Switch' */

    /* Logic: '<S74>/AND' incorporates:
     *  Constant: '<S74>/Constant Value2'
     *  RelationalOperator: '<S74>/Greater  Than'
     *  UnitDelay: '<S74>/Unit Delay'
     */
    VeBPDR_b_NegSlipDetectedDly = ((BPDR_ac_B.VeBCPR_b_NegSlipDetected) ||
        (BPDR_ac_DW.UnitDelay_DSTATE_b > 0.0F));

    /* End of Outputs for SubSystem: '<S15>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S15>/EdgeFalling' */
    /* Logic: '<S55>/AND' incorporates:
     *  Logic: '<S55>/OR1'
     *  UnitDelay: '<S55>/Unit Delay'
     */
    rtb_AND_bz = ((!VeBPDR_b_NegSlipDetectedDly) &&
                  (BPDR_ac_DW.UnitDelay_DSTATE_kf));

    /* Update for UnitDelay: '<S55>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_kf = VeBPDR_b_NegSlipDetectedDly;

    /* End of Outputs for SubSystem: '<S15>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S157>/EdgeRising4' */
    /* Logic: '<S163>/AND' incorporates:
     *  Logic: '<S163>/OR1'
     *  UnitDelay: '<S163>/Unit Delay'
     */
    rtb_AND_o0 = !BPDR_ac_DW.UnitDelay_DSTATE_bn;

    /* Update for UnitDelay: '<S163>/Unit Delay' incorporates:
     *  Constant: '<S157>/TRUE Constant2'
     */
    BPDR_ac_DW.UnitDelay_DSTATE_bn = true;

    /* End of Outputs for SubSystem: '<S157>/EdgeRising4' */

    /* RelationalOperator: '<S12>/Comparison1' incorporates:
     *  Constant: '<S142>/Calib'
     *  Product: '<S12>/Product1'
     */
    rtb_Comparison1 = (BPDR_ac_B.VeHTDR_M_MtrA_TorqCmnd <=
                       (KeBPDR_K_NegSlipCapTh *
                        BPDR_ac_B.VeBCPR_M_BeltCapMinBPDR));

    /* Logic: '<S12>/Logical1' */
    rtb_Logical1 = !rtb_Comparison1;

    /* Outputs for Atomic SubSystem: '<S12>/EdgeRising2' */
    /* Logic: '<S137>/AND' incorporates:
     *  Logic: '<S137>/OR1'
     *  UnitDelay: '<S137>/Unit Delay'
     */
    rtb_AND_kd = (rtb_Logical1 && (!BPDR_ac_DW.UnitDelay_DSTATE_ip));

    /* Update for UnitDelay: '<S137>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_ip = rtb_Logical1;

    /* End of Outputs for SubSystem: '<S12>/EdgeRising2' */

    /* Switch: '<S24>/Switch1' incorporates:
     *  Constant: '<S25>/Calib'
     */
    if (KeBPDR_b_UseRawBeltSlipForBeltDiag)
    {
        /* Switch: '<S24>/Switch1' */
        rtb_Switch1 = BPDR_ac_B.VeBCPR_n_BeltSlipSpd;
    }
    else
    {
        /* Switch: '<S24>/Switch1' */
        rtb_Switch1 = BPDR_ac_B.VeBCPR_n_BeltSlipSpdFilt;
    }

    /* End of Switch: '<S24>/Switch1' */

    /* Selector: '<S19>/Selector' incorporates:
     *  Constant: '<S130>/Calib'
     */
    VeBPDR_b_StartStopStateActvNoLearn = KaBPDR_b_EngStrtStpStBeltLearnNotAllwd
        [(BPDR_ac_B.VeESSR_e_EngStartStopSt)];

    /* Logic: '<S178>/Logical12' incorporates:
     *  Constant: '<S22>/Constant'
     *  Constant: '<S23>/Constant'
     *  Logic: '<S11>/Logical4'
     *  RelationalOperator: '<S11>/Comparison4'
     *  RelationalOperator: '<S11>/Comparison5'
     */
    rtb_Logical12_g = ((((uint32)BPDR_ac_B.VePMDR_e_PMM_PowerMode) ==
                        CePMDR_e_PowerMode_Run) || (((uint32)
                         BPDR_ac_B.VePMDR_e_PMM_PowerMode) ==
                        CePMDR_e_PowerMode_Crank));

    /* Switch: '<S18>/Switch' incorporates:
     *  Constant: '<S126>/Constant1'
     *  Constant: '<S126>/Constant2'
     *  Constant: '<S127>/Constant1'
     *  Constant: '<S127>/Constant2'
     *  Constant: '<S129>/Calib'
     *  DataStoreRead: '<S126>/StatusByte_LostCommECM_A_BusB'
     *  DataStoreRead: '<S127>/StatusByte_LostCommECM_PCM_A'
     *  Logic: '<S126>/Logical Operator'
     *  Logic: '<S127>/Logical Operator'
     *  RelationalOperator: '<S126>/Relational Operator1'
     *  RelationalOperator: '<S126>/Relational Operator2'
     *  RelationalOperator: '<S127>/Relational Operator1'
     *  RelationalOperator: '<S127>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S126>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S126>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S127>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S127>/Bitwise Operator2'
     */
    if (KeBPDR_b_LOC_ECMAtlantis_Slct)
    {
        rtb_AND_nf = (((((sint32)BPDR_ac_DW.StatusByte_LostCommECM_PCM_A) & 1) >
                       0) && ((((uint32)BPDR_ac_DW.StatusByte_LostCommECM_PCM_A)
                               & 64U) == 0U));
    }
    else
    {
        rtb_AND_nf = (((((sint32)BPDR_ac_DW.StatusByte_LostCommECM_A_BusB) & 1) >
                       0) && ((((uint32)BPDR_ac_DW.StatusByte_LostCommECM_A_BusB)
                               & 64U) == 0U));
    }

    /* End of Switch: '<S18>/Switch' */

    /* Logic: '<S18>/Logical8' incorporates:
     *  Logic: '<S165>/Logical8'
     */
    rtb_RelationalOperator3_j = !BPDR_ac_B.VeBCPR_b_BeltSlipSpd_FA;

    /* Logic: '<S18>/Logical5' incorporates:
     *  Constant: '<S128>/Calib'
     *  Logic: '<S18>/Logical2'
     *  Logic: '<S18>/Logical4'
     *  Logic: '<S18>/Logical8'
     */
    rtb_Logical5 = (((rtb_RelationalOperator3_j && rtb_Logical12_g) &&
                     (BPDR_ac_B.VeBCPR_b_BeltSlipTrigger)) && ((!rtb_AND_nf) ||
                     (KeBPDR_b_EnaLosCommECMChk)));

    /* Outputs for Enabled SubSystem: '<S11>/BPDR_NegSlipComp' incorporates:
     *  EnablePort: '<S14>/Enable'
     */
    if (rtb_Logical5)
    {
        /* Lookup_n-D: '<S39>/Vector' incorporates:
         *  Inport: '<S5>/VeBCPR_n_Ni_BCPR'
         */
        VeBPDR_n_NegSlipDeadBandMin = look1_iflf_binlca_16a
            (BPDR_ac_B.VeBCPR_n_Ni_BCPR, ((const float32 *)
              &(KxBPDR_n_NegSlipDeadBandMin[0])), ((const float32 *)
              &(KtBPDR_n_NegSlipDeadBandMin[0])), 4U);

        /* Outputs for Atomic SubSystem: '<S14>/Limiter' */
        /* Switch: '<S42>/Switch1' incorporates:
         *  Constant: '<S34>/Calib'
         *  RelationalOperator: '<S42>/Relational Operator'
         */
        if (KeBPDR_n_NegBeltSlip_MaxVal < rtb_Switch1)
        {
            /* Switch: '<S29>/Switch1' */
            VeBPDR_n_NegBeltSlipSpeed_Lmtd = KeBPDR_n_NegBeltSlip_MaxVal;
        }
        else
        {
            /* Switch: '<S29>/Switch1' */
            VeBPDR_n_NegBeltSlipSpeed_Lmtd = rtb_Switch1;
        }

        /* End of Switch: '<S42>/Switch1' */

        /* Switch: '<S42>/Switch' incorporates:
         *  Constant: '<S35>/Calib'
         *  RelationalOperator: '<S42>/Relational Operator1'
         */
        if (VeBPDR_n_NegBeltSlipSpeed_Lmtd <= KeBPDR_n_NegBeltSlip_MinVal)
        {
            /* Switch: '<S42>/Switch' */
            VeBPDR_n_NegBeltSlipSpeed_Lmtd = KeBPDR_n_NegBeltSlip_MinVal;
        }

        /* End of Switch: '<S42>/Switch' */
        /* End of Outputs for SubSystem: '<S14>/Limiter' */

        /* Outputs for Atomic SubSystem: '<S14>/EdgeRising1' */
        /* Logic: '<S27>/OR1' incorporates:
         *  UnitDelay: '<S27>/Unit Delay'
         */
        rtb_OR1_fr = !BPDR_ac_DW.UnitDelay_DSTATE_lk;

        /* Update for UnitDelay: '<S27>/Unit Delay' incorporates:
         *  Constant: '<S14>/TRUE Constant'
         */
        BPDR_ac_DW.UnitDelay_DSTATE_lk = true;

        /* Outputs for Atomic SubSystem: '<S14>/LowPass' */
        /* Switch: '<S43>/Switch1' incorporates:
         *  Logic: '<S27>/AND'
         */
        if (rtb_OR1_fr)
        {
            /* Switch: '<S43>/Switch1' */
            VeBPDR_n_FiltrdNegSlipSpeed = VeBPDR_n_NegBeltSlipSpeed_Lmtd;
        }
        else
        {
            /* Switch: '<S43>/Switch1' incorporates:
             *  Constant: '<S33>/Calib'
             *  Product: '<S43>/Multiplication'
             *  Sum: '<S43>/Subtraction'
             *  Sum: '<S43>/Summation'
             *  UnitDelay: '<S43>/Unit Delay'
             */
            VeBPDR_n_FiltrdNegSlipSpeed = ((VeBPDR_n_NegBeltSlipSpeed_Lmtd -
                VeBPDR_n_FiltrdNegSlipSpeed) * KeBPDR_k_NegBeltSlipFilterCoeff)
                + VeBPDR_n_FiltrdNegSlipSpeed;
        }

        /* End of Switch: '<S43>/Switch1' */
        /* End of Outputs for SubSystem: '<S14>/LowPass' */
        /* End of Outputs for SubSystem: '<S14>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S14>/DeadBand' */
        /* Switch: '<S26>/Switch1' incorporates:
         *  Constant: '<S36>/Calib'
         *  RelationalOperator: '<S26>/Greater  Than'
         *  Switch: '<S14>/Switch'
         */
        if (VeBPDR_n_FiltrdNegSlipSpeed >= KeBPDR_n_NegSlipDeadBandMax)
        {
            /* Switch: '<S26>/Switch1' incorporates:
             *  Sum: '<S26>/Subtraction'
             */
            VeBPDR_n_DeadBandNegBeltSlipSpeed = VeBPDR_n_FiltrdNegSlipSpeed -
                KeBPDR_n_NegSlipDeadBandMax;
        }
        else
        {
            if (VeBPDR_b_StartStopStateActvNoLearn)
            {
                /* Switch: '<S14>/Switch' incorporates:
                 *  Constant: '<S37>/Calib'
                 */
                rtb_Switch_kv = KeBPDR_n_NegSlipDeadBandMinStrtStop;
            }
            else
            {
                /* Switch: '<S14>/Switch' */
                rtb_Switch_kv = VeBPDR_n_NegSlipDeadBandMin;
            }

            /* Switch: '<S26>/Switch2' incorporates:
             *  RelationalOperator: '<S26>/Greater  Than1'
             */
            if (VeBPDR_n_FiltrdNegSlipSpeed <= rtb_Switch_kv)
            {
                /* Switch: '<S26>/Switch1' incorporates:
                 *  Sum: '<S26>/Subtraction1'
                 *  Switch: '<S26>/Switch2'
                 */
                VeBPDR_n_DeadBandNegBeltSlipSpeed = VeBPDR_n_FiltrdNegSlipSpeed
                    - rtb_Switch_kv;
            }
            else
            {
                /* Switch: '<S26>/Switch1' incorporates:
                 *  Constant: '<S26>/Constant Value'
                 *  Switch: '<S26>/Switch2'
                 */
                VeBPDR_n_DeadBandNegBeltSlipSpeed = 0.0F;
            }

            /* End of Switch: '<S26>/Switch2' */
        }

        /* End of Switch: '<S26>/Switch1' */
        /* End of Outputs for SubSystem: '<S14>/DeadBand' */

        /* Logic: '<S14>/Logical' incorporates:
         *  Constant: '<S14>/Constant Value'
         *  Constant: '<S32>/Calib'
         *  RelationalOperator: '<S14>/Comparison1'
         *  RelationalOperator: '<S14>/Comparison2'
         */
        rtb_OR1_fr = ((BPDR_ac_B.VeBCPR_M_BeltTrqMinHTDR_Rot >=
                       KeBPDR_M_MaxHDTRNegTqLimForBltMissDet) &&
                      (VeBPDR_n_DeadBandNegBeltSlipSpeed != 0.0F));

        /* Outputs for Atomic SubSystem: '<S14>/Turn On Delay Time' */
        /* Outputs for Atomic SubSystem: '<S44>/EdgeRising' */
        /* Logic: '<S45>/AND' incorporates:
         *  Logic: '<S45>/OR1'
         *  UnitDelay: '<S45>/Unit Delay'
         */
        rtb_AND_ll = (rtb_OR1_fr && (!BPDR_ac_DW.UnitDelay_DSTATE_aq));

        /* Update for UnitDelay: '<S45>/Unit Delay' */
        BPDR_ac_DW.UnitDelay_DSTATE_aq = rtb_OR1_fr;

        /* End of Outputs for SubSystem: '<S44>/EdgeRising' */

        /* Switch: '<S44>/Switch1' incorporates:
         *  Constant: '<S28>/Calib'
         *  Constant: '<S38>/Calib'
         *  Constant: '<S44>/Constant Value1'
         *  Logic: '<S44>/OR'
         *  Logic: '<S44>/OR1'
         *  MinMax: '<S44>/Minimum'
         *  Sum: '<S44>/Summation'
         *  UnitDelay: '<S44>/Unit Delay'
         */
        if ((!rtb_OR1_fr) || rtb_AND_ll)
        {
            BPDR_ac_DW.UnitDelay_DSTATE_f = 0.0F;
        }
        else
        {
            BPDR_ac_DW.UnitDelay_DSTATE_f = fminf(KeBPDR_t_BltMissNegDetDly,
                HeBPDR_t_MedTED + BPDR_ac_DW.UnitDelay_DSTATE_f);
        }

        /* End of Switch: '<S44>/Switch1' */

        /* Logic: '<S44>/AND' incorporates:
         *  Constant: '<S38>/Calib'
         *  RelationalOperator: '<S44>/Greater  Than'
         *  UnitDelay: '<S44>/Unit Delay'
         */
        VeBPDR_b_BltMissDetNegEna = (rtb_OR1_fr &&
            (BPDR_ac_DW.UnitDelay_DSTATE_f >= KeBPDR_t_BltMissNegDetDly));

        /* End of Outputs for SubSystem: '<S14>/Turn On Delay Time' */

        /* Lookup_n-D: '<S40>/Vector' incorporates:
         *  Abs: '<S14>/Abs1'
         *  Sum: '<S14>/Sum1'
         */
        VeBPDR_scl_NegSlipActTrqRatio = look1_iflf_binlca_16a(fabsf
            (BPDR_ac_B.VeHTDR_M_MtrA_TorqCmnd -
             BPDR_ac_B.VeBCPR_M_BeltCapMinBPDR), ((const float32 *)
            &(KxBPDR_scl_NegSlipActTrqRatio[0])), ((const float32 *)
            &(KtBPDR_scl_NegSlipActTrqRatio[0])), 9U);

        /* Lookup_n-D: '<S41>/Vector' incorporates:
         *  Inport: '<S5>/VeHTDR_M_MtrA_TorqCmnd'
         */
        VeBPDR_scl_NegSlipActTrqRatioLoTq = look1_iflf_binlca_16a
            (BPDR_ac_B.VeHTDR_M_MtrA_TorqCmnd, ((const float32 *)
              &(KxBPDR_scl_NegSlipActTrqRatioLoTq[0])), ((const float32 *)
              &(KtBPDR_scl_NegSlipActTrqRatioLoTq[0])), 6U);

        /* Product: '<S14>/Product3' incorporates:
         *  Abs: '<S14>/Abs'
         *  Constant: '<S28>/Calib'
         *  Constant: '<S30>/Calib'
         *  Constant: '<S31>/Calib'
         *  Product: '<S14>/Product'
         *  Product: '<S14>/Product1'
         */
        VeBPDR_phi_NegBeltSlip = fabsf((VeBPDR_n_DeadBandNegBeltSlipSpeed *
            KeBPDR_Cf_ConvertRPMtoRPS) * HeBPDR_t_MedTED) *
            KeBPDR_Cf_ConvertRevToDeg;

        /* Product: '<S14>/Product2' incorporates:
         *  MinMax: '<S14>/MinMax1'
         *  Switch: '<S29>/Switch1'
         */
        VeBPDR_phi_NegSlipToIntegrate = (VeBPDR_phi_NegBeltSlip *
            VeBPDR_scl_NegSlipActTrqRatio) * fmaxf
            (VeBPDR_scl_NegSlipActTrqRatioLoTq, (float32)
             VeBPDR_b_BltMissDetNegEna);
    }

    /* End of Outputs for SubSystem: '<S11>/BPDR_NegSlipComp' */

    /* RelationalOperator: '<S12>/Comparison4' incorporates:
     *  Constant: '<S12>/Constant Value1'
     */
    VeBPDR_b_NegSlipped = (VeBPDR_n_DeadBandNegBeltSlipSpeed != 0.0F);

    /* Outputs for Atomic SubSystem: '<S12>/Signal Latch On With Reset1' */
    /* Logic: '<S151>/OR1' incorporates:
     *  Logic: '<S151>/NOT'
     *  Logic: '<S151>/OR'
     *  UnitDelay: '<S151>/Unit Delay'
     */
    VeBPDR_b_NegSlippedLatched = ((VeBPDR_b_NegSlipped) || ((!rtb_Logical1) &&
        (VeBPDR_b_NegSlippedLatched)));

    /* End of Outputs for SubSystem: '<S12>/Signal Latch On With Reset1' */

    /* Switch: '<S155>/Switch1' */
    if (VeBPDR_b_NegSlippedLatched)
    {
        /* Switch: '<S155>/Switch1' incorporates:
         *  Constant: '<S12>/Constant Value3'
         */
        VeBPDR_t_NegSlipDbncTmr = 0.0F;
    }
    else
    {
        /* Switch: '<S155>/Switch1' incorporates:
         *  UnitDelay: '<S155>/Unit Delay'
         */
        VeBPDR_t_NegSlipDbncTmr = BPDR_ac_DW.UnitDelay_DSTATE;
    }

    /* End of Switch: '<S155>/Switch1' */

    /* RelationalOperator: '<S12>/Comparison6' incorporates:
     *  Constant: '<S144>/Calib'
     */
    rtb_OR1_fr = (VeBPDR_t_NegSlipDbncTmr == KeBPDR_t_DbncNegSlipTrqCap);

    /* Switch: '<S164>/Switch1' incorporates:
     *  Constant: '<S157>/TRUE Constant2'
     */
    if (rtb_AND_o0)
    {
        BPDR_ac_DW.UnitDelay_DSTATE_k = true;
    }

    /* Logic: '<S12>/Logical6' incorporates:
     *  Logic: '<S12>/Logical14'
     *  Logic: '<S12>/Logical15'
     */
    rtb_AND_kd = (((!BPDR_ac_DW.UnitDelay_DSTATE_k) && rtb_AND_kd) || rtb_OR1_fr);

    /* Outputs for Atomic SubSystem: '<S12>/EdgeRising1' */
    /* Logic: '<S136>/OR1' incorporates:
     *  UnitDelay: '<S136>/Unit Delay'
     */
    rtb_AND_ll = !BPDR_ac_DW.UnitDelay_DSTATE_id;

    /* Update for UnitDelay: '<S136>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_id = rtb_AND_kd;

    /* End of Outputs for SubSystem: '<S12>/EdgeRising1' */

    /* Lookup_n-D: '<S146>/Vector' incorporates:
     *  Switch: '<S155>/Switch1'
     */
    VeBPDR_phi_NegSlipRecovery = look1_iflf_binlca_16a(VeBPDR_t_NegSlipDbncTmr,
        ((const float32 *)&(KxBPDR_phi_NegSlipRecovery[0])), ((const float32 *)
        &(KtBPDR_phi_NegSlipRecovery[0])), 5U);

    /* Outputs for Atomic SubSystem: '<S12>/EdgeRising1' */
    /* If: '<S12>/If1' incorporates:
     *  Logic: '<S136>/AND'
     */
    if (rtb_AND_kd && rtb_AND_ll)
    {
        /* Outputs for IfAction SubSystem: '<S12>/Negative_Capacity_Recovery' incorporates:
         *  ActionPort: '<S148>/Action Port'
         */
        /* Sum: '<S148>/Sum1' incorporates:
         *  DataStoreRead: '<S148>/Data Store Read2'
         */
        rtb_Switch_kv = BPDR_ac_DW.NeBPDR_phi_NegSlipIntegrated -
            VeBPDR_phi_NegSlipRecovery;

        /* Outputs for Atomic SubSystem: '<S148>/Limiter' */
        /* Switch: '<S159>/Switch1' incorporates:
         *  Constant: '<S148>/Constant Value1'
         *  RelationalOperator: '<S159>/Relational Operator'
         */
        if (10000.0F < rtb_Switch_kv)
        {
            /* Switch: '<S159>/Switch1' */
            rtb_Switch_kv = 10000.0F;
        }

        /* End of Switch: '<S159>/Switch1' */

        /* Switch: '<S159>/Switch' incorporates:
         *  Constant: '<S148>/Constant Value'
         *  DataStoreWrite: '<S148>/Data Store Write'
         *  RelationalOperator: '<S159>/Relational Operator1'
         */
        if (rtb_Switch_kv > 0.0F)
        {
            BPDR_ac_DW.NeBPDR_phi_NegSlipIntegrated = rtb_Switch_kv;
        }
        else
        {
            BPDR_ac_DW.NeBPDR_phi_NegSlipIntegrated = 0.0F;
        }

        /* End of Switch: '<S159>/Switch' */
        /* End of Outputs for SubSystem: '<S148>/Limiter' */

        /* Merge: '<S12>/Merge' incorporates:
         *  Constant: '<S148>/TRUE Constant'
         *  SignalConversion generated from: '<S148>/NegCapUnlearnActv'
         */
        VeBPDR_b_NegCapUnlearnActv = true;

        /* End of Outputs for SubSystem: '<S12>/Negative_Capacity_Recovery' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S12>/DoNothing1' incorporates:
         *  ActionPort: '<S134>/Action Port'
         */
        /* Merge: '<S12>/Merge' incorporates:
         *  Constant: '<S134>/FALSE Constant'
         *  SignalConversion generated from: '<S134>/NegCapUnlearnActv'
         */
        VeBPDR_b_NegCapUnlearnActv = false;

        /* End of Outputs for SubSystem: '<S12>/DoNothing1' */
    }

    /* End of If: '<S12>/If1' */
    /* End of Outputs for SubSystem: '<S12>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S15>/EdgeRising2' */
    /* Logic: '<S15>/Logical3' incorporates:
     *  Constant: '<S62>/Calib'
     *  Logic: '<S57>/AND'
     */
    VeBPDR_b_UpdMemoryForCrnkFail_Neg = (((((rtb_Comparison7 && rtb_OR1_l3) ||
        (KeBPDR_b_NVRAMNegSlipRstOvrd)) || rtb_AND_bz) ||
        (VeBPDR_b_NegCapUnlearnActv)) || (VeBPDR_b_BltMissDetNegEna));

    /* End of Outputs for SubSystem: '<S15>/EdgeRising2' */

    /* Switch: '<S15>/Switch2' */
    if (VeBPDR_b_UpdMemoryForCrnkFail_Neg)
    {
        /* Switch: '<S15>/Switch2' incorporates:
         *  DataStoreRead: '<S15>/Data Store Read3'
         */
        VeBPDR_phi_NegSlipIntegrated_WithKeyOnEdge =
            BPDR_ac_DW.NeBPDR_phi_NegSlipIntegrated;
    }

    /* End of Switch: '<S15>/Switch2' */

    /* RelationalOperator: '<S15>/Comparison6' incorporates:
     *  Constant: '<S52>/Constant'
     */
    rtb_Comparison7 = (((uint32)BPDR_ac_B.VeESSR_e_EngStartStopSt) ==
                       CeESSR_e_EngOff);

    /* Outputs for Atomic SubSystem: '<S15>/EdgeRising1' */
    /* Logic: '<S56>/OR1' incorporates:
     *  UnitDelay: '<S56>/Unit Delay'
     */
    rtb_OR1_l3 = !BPDR_ac_DW.UnitDelay_DSTATE_a4;

    /* Update for UnitDelay: '<S56>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_a4 = rtb_Comparison7;

    /* End of Outputs for SubSystem: '<S15>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S15>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S15>/Signal Latch On With Reset4' */
    /* Logic: '<S73>/NOT' incorporates:
     *  Constant: '<S48>/Constant'
     *  Logic: '<S72>/NOT'
     *  RelationalOperator: '<S15>/Comparison2'
     */
    rtb_AND_bz = (((uint32)BPDR_ac_B.VeESSR_e_EngStartStopSt) !=
                  CeESSR_e_EngRunning);

    /* End of Outputs for SubSystem: '<S15>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S15>/EdgeRising1' */
    /* Logic: '<S73>/OR1' incorporates:
     *  Logic: '<S56>/AND'
     *  Logic: '<S73>/NOT'
     *  Logic: '<S73>/OR'
     *  UnitDelay: '<S73>/Unit Delay'
     */
    BPDR_ac_DW.UnitDelay_DSTATE_d4 = ((rtb_Comparison7 && rtb_OR1_l3) ||
        (rtb_AND_bz && (BPDR_ac_DW.UnitDelay_DSTATE_d4)));

    /* End of Outputs for SubSystem: '<S15>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S15>/Signal Latch On With Reset4' */

    /* Outputs for Atomic SubSystem: '<S15>/Signal Latch On With Reset1' */
    /* Logic: '<S72>/OR1' incorporates:
     *  Constant: '<S49>/Constant'
     *  Constant: '<S51>/Constant'
     *  Logic: '<S15>/Logical5'
     *  Logic: '<S15>/Logical7'
     *  Logic: '<S72>/OR'
     *  RelationalOperator: '<S15>/Comparison3'
     *  RelationalOperator: '<S15>/Comparison5'
     *  UnitDelay: '<S15>/Unit Delay2'
     *  UnitDelay: '<S72>/Unit Delay'
     */
    BPDR_ac_DW.UnitDelay_DSTATE_fj = ((((((uint32)
        BPDR_ac_B.VeESPR_e_EngineSpeedStatus) == CeESPR_e_EngSpdDegraded) ||
        (((uint32)BPDR_ac_B.VeESPR_e_EngineSpeedStatus) ==
         CeESPR_e_EngSpdInvalid)) && (BPDR_ac_DW.UnitDelay2_DSTATE_n)) ||
        (rtb_AND_bz && (BPDR_ac_DW.UnitDelay_DSTATE_fj)));

    /* End of Outputs for SubSystem: '<S15>/Signal Latch On With Reset1' */

    /* Logic: '<S15>/Logical2' incorporates:
     *  Constant: '<S63>/Calib'
     *  Logic: '<S15>/Logical6'
     */
    VeBPDR_b_NegSlipIntegrated_WithKey_CrnkFail =
        (((BPDR_ac_DW.UnitDelay_DSTATE_d4) &&
          (KeBPDR_b_RstSlipBufCrkFaildAtStart)) &&
         ((BPDR_ac_DW.UnitDelay_DSTATE_fj) ||
          (BPDR_ac_B.VeESPR_b_BuffrCrnkDiagFailing)));

    /* Logic: '<S15>/Logical9' incorporates:
     *  Constant: '<S47>/Constant'
     *  Constant: '<S54>/Constant'
     *  Logic: '<S15>/Logical4'
     *  Logic: '<S15>/Logical8'
     *  RelationalOperator: '<S15>/Comparison1'
     *  RelationalOperator: '<S15>/Comparison10'
     */
    VeBPDR_b_NegSlip_CrnkFail = ((VeBPDR_b_NegSlipIntegrated_WithKey_CrnkFail) ||
        (((BPDR_ac_B.VeESPR_b_BuffrCrnkDiagFailing) || (((uint32)
        BPDR_ac_B.VeESPR_e_EngineSpeedStatus) != CeESPR_e_EngSpdNormal)) &&
         (((uint32)BPDR_ac_B.VeESSR_e_EngStartStopSt) == CeESSR_e_EngRunning)));

    /* Outputs for Atomic SubSystem: '<S15>/EdgeRising4' */
    /* Logic: '<S58>/OR1' incorporates:
     *  UnitDelay: '<S58>/Unit Delay'
     */
    rtb_Comparison7 = !BPDR_ac_DW.UnitDelay_DSTATE_ko;

    /* Update for UnitDelay: '<S58>/Unit Delay' incorporates:
     *  Constant: '<S15>/TRUE Constant2'
     */
    BPDR_ac_DW.UnitDelay_DSTATE_ko = true;

    /* Logic: '<S15>/Logical1' incorporates:
     *  Constant: '<S62>/Calib'
     *  DataStoreRead: '<S15>/Data Store Read4'
     *  Logic: '<S58>/AND'
     */
    rtb_Comparison7 = ((((rtb_Comparison7 || (KeBPDR_b_NVRAMNegSlipRstOvrd)) ||
                         (VeBPDR_b_RstIntegrator)) || (VeBPDR_b_NegSlip_CrnkFail))
                       || (VeBPDR_b_NegCapUnlearnActv));

    /* End of Outputs for SubSystem: '<S15>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S15>/Accumulator Reset' */
    /* Switch: '<S46>/Switch1' incorporates:
     *  Logic: '<S15>/Logical'
     *  Switch: '<S15>/Switch5'
     */
    if (rtb_Comparison7)
    {
        /* Switch: '<S46>/Switch1' incorporates:
         *  DataStoreRead: '<S15>/Data Store Read1'
         */
        VeBPDR_phi_NegSlipAcc = BPDR_ac_DW.NeBPDR_phi_NegSlipIntegrated;
    }
    else
    {
        if ((BPDR_ac_B.VeBCPR_b_NegSlipDetected) && rtb_Logical5)
        {
            /* Switch: '<S15>/Switch5' */
            rtb_Switch_kv = VeBPDR_phi_NegSlipToIntegrate;
        }
        else
        {
            /* Switch: '<S15>/Switch5' incorporates:
             *  Constant: '<S15>/Constant Value1'
             */
            rtb_Switch_kv = 0.0F;
        }

        /* Switch: '<S46>/Switch1' incorporates:
         *  Sum: '<S46>/Summation'
         *  UnitDelay: '<S46>/Unit Delay'
         */
        VeBPDR_phi_NegSlipAcc = rtb_Switch_kv + VeBPDR_phi_NegSlipAcc;
    }

    /* End of Switch: '<S46>/Switch1' */
    /* End of Outputs for SubSystem: '<S15>/Accumulator Reset' */

    /* Switch: '<S15>/Switch1' */
    if (rtb_Logical12_g)
    {
        /* Switch: '<S15>/Switch1' */
        VeBPDR_phi_NegSlipIntegrated_WithKey = VeBPDR_phi_NegSlipAcc;
    }
    else
    {
        /* Switch: '<S15>/Switch1' incorporates:
         *  DataStoreRead: '<S15>/Data Store Read2'
         */
        VeBPDR_phi_NegSlipIntegrated_WithKey =
            BPDR_ac_DW.NeBPDR_phi_NegSlipIntegrated;
    }

    /* End of Switch: '<S15>/Switch1' */

    /* Switch: '<S15>/Switch6' */
    if (VeBPDR_b_NegSlip_CrnkFail)
    {
        /* Switch: '<S15>/Switch6' */
        VeBPDR_phi_NegSlipIntegrated_WithKey_Final =
            VeBPDR_phi_NegSlipIntegrated_WithKeyOnEdge;
    }
    else
    {
        /* Switch: '<S15>/Switch6' */
        VeBPDR_phi_NegSlipIntegrated_WithKey_Final =
            VeBPDR_phi_NegSlipIntegrated_WithKey;
    }

    /* End of Switch: '<S15>/Switch6' */

    /* Switch: '<S15>/Switch4' incorporates:
     *  Constant: '<S62>/Calib'
     *  Constant: '<S64>/Calib'
     *  DataStoreWrite: '<S15>/Data Store Write'
     */
    if (KeBPDR_b_NVRAMNegSlipRstOvrd)
    {
        BPDR_ac_DW.NeBPDR_phi_NegSlipIntegrated =
            KeBPDR_phi_NVRAMNegSlipRstOvrdVal;
    }
    else
    {
        BPDR_ac_DW.NeBPDR_phi_NegSlipIntegrated =
            VeBPDR_phi_NegSlipIntegrated_WithKey_Final;
    }

    /* End of Switch: '<S15>/Switch4' */

    /* Outputs for Enabled SubSystem: '<S15>/ResetPokeOutput' */
    BPDR_ac_ResetPokeOutput(BPDR_ac_DW.UnitDelay_DSTATE_m);

    /* End of Outputs for SubSystem: '<S15>/ResetPokeOutput' */

    /* RelationalOperator: '<S15>/Comparison4' incorporates:
     *  Constant: '<S50>/Constant'
     *  UnitDelay: '<S15>/Unit Delay'
     *  UnitDelay: '<S15>/Unit Delay2'
     */
    BPDR_ac_DW.UnitDelay2_DSTATE_n = (((uint32)
        BPDR_ac_B.VeESPR_e_EngineSpeedStatus) == CeESPR_e_EngSpdNormal);

    /* Switch: '<S69>/Switch' incorporates:
     *  Constant: '<S60>/Calib'
     *  Switch: '<S70>/Switch'
     */
    if (KeBPDR_b_EnblNegSlipDiag)
    {
        /* VariantMerge generated from: '<S8>/BeltCapMinCorrection' incorporates:
         *  Lookup_n-D: '<S66>/Vector'
         *  Switch: '<S46>/Switch1'
         */
        BPDR_ac_B.VariantMergeForOutportBeltCapMinCorrecti =
            look1_iflf_binlca_16a(VeBPDR_phi_NegSlipAcc, ((const float32 *)
            &(KxBPDR_M_NegSlipCorrectedTrq[0])), ((const float32 *)
            &(KtBPDR_M_NegSlipCorrectedTrq[0])), 9U);

        /* Switch: '<S70>/Switch' incorporates:
         *  Lookup_n-D: '<S67>/Vector'
         *  Switch: '<S15>/Switch2'
         */
        VeBPDR_M_CorrectedNegTrqCnfrmd = look1_iflf_binlca_16a
            (VeBPDR_phi_NegSlipIntegrated_WithKeyOnEdge, ((const float32 *)
              &(KxBPDR_M_NegSlipCorrectedTrq[0])), ((const float32 *)
              &(KtBPDR_M_NegSlipCorrectedTrq[0])), 9U);
    }
    else
    {
        /* VariantMerge generated from: '<S8>/BeltCapMinCorrection' incorporates:
         *  Constant: '<S15>/Constant Value2'
         */
        BPDR_ac_B.VariantMergeForOutportBeltCapMinCorrecti = 0.0F;

        /* Switch: '<S70>/Switch' incorporates:
         *  Constant: '<S15>/Constant Value11'
         */
        VeBPDR_M_CorrectedNegTrqCnfrmd = 0.0F;
    }

    /* End of Switch: '<S69>/Switch' */

    /* RelationalOperator: '<S17>/Comparison7' incorporates:
     *  Constant: '<S103>/Constant'
     */
    rtb_Comparison7_d = (((uint32)BPDR_ac_B.VeESSR_e_EngStartStopSt) ==
                         CeESSR_e_EngOff);

    /* Outputs for Atomic SubSystem: '<S17>/EdgeRising2' */
    /* Logic: '<S107>/OR1' incorporates:
     *  UnitDelay: '<S107>/Unit Delay'
     */
    rtb_OR1_mi = !BPDR_ac_DW.UnitDelay_DSTATE_ho;

    /* Update for UnitDelay: '<S107>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_ho = rtb_Comparison7_d;

    /* End of Outputs for SubSystem: '<S17>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S17>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S124>/EdgeFalling1' */
    /* Logic: '<S125>/AND' incorporates:
     *  Logic: '<S125>/OR1'
     *  UnitDelay: '<S125>/Unit Delay'
     */
    rtb_OR1_l3 = ((!BPDR_ac_B.VeBCPR_b_PosSlipDetected) &&
                  (BPDR_ac_DW.UnitDelay_DSTATE_a1));

    /* Update for UnitDelay: '<S125>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_a1 = BPDR_ac_B.VeBCPR_b_PosSlipDetected;

    /* End of Outputs for SubSystem: '<S124>/EdgeFalling1' */

    /* Switch: '<S124>/Switch' incorporates:
     *  Constant: '<S109>/Calib'
     *  Constant: '<S115>/Calib'
     *  Constant: '<S124>/Constant Value1'
     *  MinMax: '<S124>/Minimum'
     *  Sum: '<S124>/Summation'
     *  UnitDelay: '<S124>/Unit Delay'
     */
    if (rtb_OR1_l3)
    {
        BPDR_ac_DW.UnitDelay_DSTATE_i = KeBPDR_t_PosSlipFreezeDly;
    }
    else
    {
        BPDR_ac_DW.UnitDelay_DSTATE_i = fmaxf(BPDR_ac_DW.UnitDelay_DSTATE_i -
            HeBPDR_t_MedTED, 0.0F);
    }

    /* End of Switch: '<S124>/Switch' */

    /* Logic: '<S124>/AND' incorporates:
     *  Constant: '<S124>/Constant Value2'
     *  RelationalOperator: '<S124>/Greater  Than'
     *  UnitDelay: '<S124>/Unit Delay'
     */
    VeBPDR_b_PosSlipDetectedDly = ((BPDR_ac_B.VeBCPR_b_PosSlipDetected) ||
        (BPDR_ac_DW.UnitDelay_DSTATE_i > 0.0F));

    /* End of Outputs for SubSystem: '<S17>/Turn Off Delay Time' */

    /* Outputs for Atomic SubSystem: '<S17>/EdgeFalling' */
    /* Logic: '<S105>/AND' incorporates:
     *  Logic: '<S105>/OR1'
     *  UnitDelay: '<S105>/Unit Delay'
     */
    rtb_AND_nf = ((!VeBPDR_b_PosSlipDetectedDly) &&
                  (BPDR_ac_DW.UnitDelay_DSTATE_ddl));

    /* Update for UnitDelay: '<S105>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_ddl = VeBPDR_b_PosSlipDetectedDly;

    /* End of Outputs for SubSystem: '<S17>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S156>/EdgeRising4' */
    /* Logic: '<S161>/AND' incorporates:
     *  Logic: '<S161>/OR1'
     *  UnitDelay: '<S161>/Unit Delay'
     */
    rtb_OR1_l3 = !BPDR_ac_DW.UnitDelay_DSTATE_ab;

    /* Update for UnitDelay: '<S161>/Unit Delay' incorporates:
     *  Constant: '<S156>/TRUE Constant2'
     */
    BPDR_ac_DW.UnitDelay_DSTATE_ab = true;

    /* End of Outputs for SubSystem: '<S156>/EdgeRising4' */

    /* RelationalOperator: '<S12>/Comparison3' incorporates:
     *  Constant: '<S143>/Calib'
     *  Product: '<S12>/Product4'
     */
    rtb_AND_bz = (BPDR_ac_B.VeHTDR_M_MtrA_TorqCmnd >= (KeBPDR_K_PosSlipCapTh *
                   BPDR_ac_B.VeBCPR_M_BeltCapMaxBPDR));

    /* Logic: '<S12>/Logical2' */
    rtb_AND_kd = !rtb_AND_bz;

    /* Outputs for Atomic SubSystem: '<S12>/EdgeRising3' */
    /* Logic: '<S138>/AND' incorporates:
     *  Logic: '<S138>/OR1'
     *  UnitDelay: '<S138>/Unit Delay'
     */
    rtb_AND_d = (rtb_AND_kd && (!BPDR_ac_DW.UnitDelay_DSTATE_mh));

    /* Update for UnitDelay: '<S138>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_mh = rtb_AND_kd;

    /* End of Outputs for SubSystem: '<S12>/EdgeRising3' */

    /* Outputs for Enabled SubSystem: '<S11>/BPDR_PosSlipComp' incorporates:
     *  EnablePort: '<S16>/Enable'
     */
    if (rtb_Logical5)
    {
        /* Lookup_n-D: '<S89>/Vector' incorporates:
         *  Inport: '<S5>/VeBCPR_n_Ni_BCPR'
         */
        VeBPDR_n_PosSlipDeadBandMax = look1_iflf_binlca_16a
            (BPDR_ac_B.VeBCPR_n_Ni_BCPR, ((const float32 *)
              &(KxBPDR_n_PosSlipDeadBandMax[0])), ((const float32 *)
              &(KtBPDR_n_PosSlipDeadBandMax[0])), 4U);

        /* Switch: '<S16>/Switch' */
        if (VeBPDR_b_StartStopStateActvNoLearn)
        {
            /* Switch: '<S16>/Switch' incorporates:
             *  Constant: '<S86>/Calib'
             */
            rtb_Switch_kv = KeBPDR_n_PosSlipDeadBandMaxStrtStop;
        }
        else
        {
            /* Switch: '<S16>/Switch' */
            rtb_Switch_kv = VeBPDR_n_PosSlipDeadBandMax;
        }

        /* End of Switch: '<S16>/Switch' */

        /* Outputs for Atomic SubSystem: '<S16>/Limiter' */
        /* Switch: '<S92>/Switch1' incorporates:
         *  Constant: '<S84>/Calib'
         *  RelationalOperator: '<S92>/Relational Operator'
         */
        if (KeBPDR_n_PosBeltSlip_MaxVal < rtb_Switch1)
        {
            /* Switch: '<S79>/Switch1' */
            rtb_Switch1 = KeBPDR_n_PosBeltSlip_MaxVal;
        }

        /* End of Switch: '<S92>/Switch1' */

        /* Switch: '<S92>/Switch' incorporates:
         *  Constant: '<S85>/Calib'
         *  RelationalOperator: '<S92>/Relational Operator1'
         */
        if (rtb_Switch1 > KeBPDR_n_PosBeltSlip_MinVal)
        {
            /* Switch: '<S92>/Switch' */
            VeBPDR_n_PosBeltSlipSpeed_Lmtd = rtb_Switch1;
        }
        else
        {
            /* Switch: '<S92>/Switch' */
            VeBPDR_n_PosBeltSlipSpeed_Lmtd = KeBPDR_n_PosBeltSlip_MinVal;
        }

        /* End of Switch: '<S92>/Switch' */
        /* End of Outputs for SubSystem: '<S16>/Limiter' */

        /* Outputs for Atomic SubSystem: '<S16>/EdgeRising1' */
        /* Logic: '<S77>/OR1' incorporates:
         *  UnitDelay: '<S77>/Unit Delay'
         */
        rtb_AND_ll = !BPDR_ac_DW.UnitDelay_DSTATE_nf;

        /* Update for UnitDelay: '<S77>/Unit Delay' incorporates:
         *  Constant: '<S16>/TRUE Constant'
         */
        BPDR_ac_DW.UnitDelay_DSTATE_nf = true;

        /* Outputs for Atomic SubSystem: '<S16>/LowPass' */
        /* Switch: '<S93>/Switch1' incorporates:
         *  Logic: '<S77>/AND'
         */
        if (rtb_AND_ll)
        {
            /* Switch: '<S93>/Switch1' */
            VeBPDR_n_FiltrdPosSlipSpeed = VeBPDR_n_PosBeltSlipSpeed_Lmtd;
        }
        else
        {
            /* Switch: '<S93>/Switch1' incorporates:
             *  Constant: '<S83>/Calib'
             *  Product: '<S93>/Multiplication'
             *  Sum: '<S93>/Subtraction'
             *  Sum: '<S93>/Summation'
             *  UnitDelay: '<S93>/Unit Delay'
             */
            VeBPDR_n_FiltrdPosSlipSpeed = ((VeBPDR_n_PosBeltSlipSpeed_Lmtd -
                VeBPDR_n_FiltrdPosSlipSpeed) * KeBPDR_k_PosBeltSlipFilterCoeff)
                + VeBPDR_n_FiltrdPosSlipSpeed;
        }

        /* End of Switch: '<S93>/Switch1' */
        /* End of Outputs for SubSystem: '<S16>/LowPass' */
        /* End of Outputs for SubSystem: '<S16>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S16>/DeadBand' */
        /* Switch: '<S76>/Switch1' incorporates:
         *  Constant: '<S87>/Calib'
         *  RelationalOperator: '<S76>/Greater  Than'
         *  RelationalOperator: '<S76>/Greater  Than1'
         *  Switch: '<S76>/Switch2'
         */
        if (VeBPDR_n_FiltrdPosSlipSpeed >= rtb_Switch_kv)
        {
            /* Switch: '<S76>/Switch1' incorporates:
             *  Sum: '<S76>/Subtraction'
             */
            VeBPDR_n_DeadBandPosBeltSlipSpeed = VeBPDR_n_FiltrdPosSlipSpeed -
                rtb_Switch_kv;
        }
        else if (VeBPDR_n_FiltrdPosSlipSpeed <= KeBPDR_n_PosSlipDeadBandMin)
        {
            /* Switch: '<S76>/Switch2' incorporates:
             *  Constant: '<S87>/Calib'
             *  Sum: '<S76>/Subtraction1'
             *  Switch: '<S76>/Switch1'
             */
            VeBPDR_n_DeadBandPosBeltSlipSpeed = VeBPDR_n_FiltrdPosSlipSpeed -
                KeBPDR_n_PosSlipDeadBandMin;
        }
        else
        {
            /* Switch: '<S76>/Switch1' incorporates:
             *  Constant: '<S76>/Constant Value'
             *  Switch: '<S76>/Switch2'
             */
            VeBPDR_n_DeadBandPosBeltSlipSpeed = 0.0F;
        }

        /* End of Switch: '<S76>/Switch1' */
        /* End of Outputs for SubSystem: '<S16>/DeadBand' */

        /* Logic: '<S16>/Logical' incorporates:
         *  Constant: '<S16>/Constant Value'
         *  Constant: '<S82>/Calib'
         *  RelationalOperator: '<S16>/Comparison1'
         *  RelationalOperator: '<S16>/Comparison3'
         */
        rtb_AND_ll = ((BPDR_ac_B.VeBCPR_M_BeltTrqMaxHTDR_Rot <=
                       KeBPDR_M_MinHDTRPosTqLimForBltMissDet) &&
                      (VeBPDR_n_DeadBandPosBeltSlipSpeed != 0.0F));

        /* Outputs for Atomic SubSystem: '<S16>/Turn On Delay Time' */
        /* Outputs for Atomic SubSystem: '<S94>/EdgeRising' */
        /* Logic: '<S95>/AND' incorporates:
         *  Logic: '<S95>/OR1'
         *  UnitDelay: '<S95>/Unit Delay'
         */
        rtb_AND_jv0 = (rtb_AND_ll && (!BPDR_ac_DW.UnitDelay_DSTATE_bw));

        /* Update for UnitDelay: '<S95>/Unit Delay' */
        BPDR_ac_DW.UnitDelay_DSTATE_bw = rtb_AND_ll;

        /* End of Outputs for SubSystem: '<S94>/EdgeRising' */

        /* Switch: '<S94>/Switch1' incorporates:
         *  Constant: '<S78>/Calib'
         *  Constant: '<S88>/Calib'
         *  Constant: '<S94>/Constant Value1'
         *  Logic: '<S94>/OR'
         *  Logic: '<S94>/OR1'
         *  MinMax: '<S94>/Minimum'
         *  Sum: '<S94>/Summation'
         *  UnitDelay: '<S94>/Unit Delay'
         */
        if ((!rtb_AND_ll) || rtb_AND_jv0)
        {
            BPDR_ac_DW.UnitDelay_DSTATE_d = 0.0F;
        }
        else
        {
            BPDR_ac_DW.UnitDelay_DSTATE_d = fminf(KeBPDR_t_BltMissPosDetDly,
                HeBPDR_t_MedTED + BPDR_ac_DW.UnitDelay_DSTATE_d);
        }

        /* End of Switch: '<S94>/Switch1' */

        /* Logic: '<S94>/AND' incorporates:
         *  Constant: '<S88>/Calib'
         *  RelationalOperator: '<S94>/Greater  Than'
         *  UnitDelay: '<S94>/Unit Delay'
         */
        VeBPDR_b_BltMissDetPosEna = (rtb_AND_ll &&
            (BPDR_ac_DW.UnitDelay_DSTATE_d >= KeBPDR_t_BltMissPosDetDly));

        /* End of Outputs for SubSystem: '<S16>/Turn On Delay Time' */

        /* Lookup_n-D: '<S90>/Vector' incorporates:
         *  Abs: '<S16>/Abs1'
         *  Sum: '<S16>/Sum1'
         */
        VeBPDR_scl_PosSlipActTrqRatio = look1_iflf_binlca_16a(fabsf
            (BPDR_ac_B.VeBCPR_M_BeltCapMaxBPDR -
             BPDR_ac_B.VeHTDR_M_MtrA_TorqCmnd), ((const float32 *)
            &(KxBPDR_scl_PosSlipActTrqRatio[0])), ((const float32 *)
            &(KtBPDR_scl_PosSlipActTrqRatio[0])), 9U);

        /* Lookup_n-D: '<S91>/Vector' incorporates:
         *  Inport: '<S5>/VeHTDR_M_MtrA_TorqCmnd'
         */
        VeBPDR_scl_PosSlipActTrqRatioLoTq = look1_iflf_binlca_16a
            (BPDR_ac_B.VeHTDR_M_MtrA_TorqCmnd, ((const float32 *)
              &(KxBPDR_scl_PosSlipActTrqRatioLoTq[0])), ((const float32 *)
              &(KtBPDR_scl_PosSlipActTrqRatioLoTq[0])), 6U);

        /* Product: '<S16>/Product3' incorporates:
         *  Abs: '<S16>/Abs'
         *  Constant: '<S78>/Calib'
         *  Constant: '<S80>/Calib'
         *  Constant: '<S81>/Calib'
         *  Product: '<S16>/Product'
         *  Product: '<S16>/Product1'
         */
        VeBPDR_phi_PosBeltSlip = fabsf((VeBPDR_n_DeadBandPosBeltSlipSpeed *
            KeBPDR_Cf_ConvertRPMtoRPS) * HeBPDR_t_MedTED) *
            KeBPDR_Cf_ConvertRevToDeg;

        /* Product: '<S16>/Product2' incorporates:
         *  MinMax: '<S16>/MinMax1'
         *  Switch: '<S79>/Switch1'
         */
        VeBPDR_phi_PosSlipToIntegrate = (VeBPDR_phi_PosBeltSlip *
            VeBPDR_scl_PosSlipActTrqRatio) * fmaxf
            (VeBPDR_scl_PosSlipActTrqRatioLoTq, (float32)
             VeBPDR_b_BltMissDetPosEna);
    }

    /* End of Outputs for SubSystem: '<S11>/BPDR_PosSlipComp' */

    /* RelationalOperator: '<S12>/Comparison5' incorporates:
     *  Constant: '<S12>/Constant Value2'
     */
    VeBPDR_b_PosSlipped = (VeBPDR_n_DeadBandPosBeltSlipSpeed != 0.0F);

    /* Outputs for Atomic SubSystem: '<S12>/Signal Latch On With Reset' */
    /* Logic: '<S150>/OR1' incorporates:
     *  Logic: '<S150>/NOT'
     *  Logic: '<S150>/OR'
     *  UnitDelay: '<S150>/Unit Delay'
     */
    VeBPDR_b_PosSlippedLatched = ((VeBPDR_b_PosSlipped) || ((!rtb_AND_kd) &&
        (VeBPDR_b_PosSlippedLatched)));

    /* End of Outputs for SubSystem: '<S12>/Signal Latch On With Reset' */

    /* Switch: '<S154>/Switch1' */
    if (VeBPDR_b_PosSlippedLatched)
    {
        /* Switch: '<S154>/Switch1' incorporates:
         *  Constant: '<S12>/Constant Value'
         */
        VeBPDR_t_PosSlipDbncTmr = 0.0F;
    }
    else
    {
        /* Switch: '<S154>/Switch1' incorporates:
         *  UnitDelay: '<S154>/Unit Delay'
         */
        VeBPDR_t_PosSlipDbncTmr = BPDR_ac_DW.UnitDelay_DSTATE_c;
    }

    /* End of Switch: '<S154>/Switch1' */

    /* RelationalOperator: '<S12>/Comparison2' incorporates:
     *  Constant: '<S145>/Calib'
     */
    rtb_AND_ll = (VeBPDR_t_PosSlipDbncTmr == KeBPDR_t_DbncPosSlipTrqCap);

    /* Switch: '<S162>/Switch1' incorporates:
     *  Constant: '<S156>/TRUE Constant2'
     */
    if (rtb_OR1_l3)
    {
        BPDR_ac_DW.UnitDelay_DSTATE_ne = true;
    }

    /* Logic: '<S12>/Logical5' incorporates:
     *  Logic: '<S12>/Logical12'
     *  Logic: '<S12>/Logical13'
     */
    rtb_AND_d = (((!BPDR_ac_DW.UnitDelay_DSTATE_ne) && rtb_AND_d) || rtb_AND_ll);

    /* Outputs for Atomic SubSystem: '<S12>/EdgeRising' */
    /* Logic: '<S135>/OR1' incorporates:
     *  UnitDelay: '<S135>/Unit Delay'
     */
    rtb_AND_jv0 = !BPDR_ac_DW.UnitDelay_DSTATE_co;

    /* Update for UnitDelay: '<S135>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_co = rtb_AND_d;

    /* End of Outputs for SubSystem: '<S12>/EdgeRising' */

    /* Lookup_n-D: '<S147>/Vector' incorporates:
     *  Switch: '<S154>/Switch1'
     */
    VeBPDR_phi_PosSlipRecovery = look1_iflf_binlca_16a(VeBPDR_t_PosSlipDbncTmr,
        ((const float32 *)&(KxBPDR_phi_PosSlipRecovery[0])), ((const float32 *)
        &(KtBPDR_phi_PosSlipRecovery[0])), 5U);

    /* Outputs for Atomic SubSystem: '<S12>/EdgeRising' */
    /* If: '<S12>/If' incorporates:
     *  Logic: '<S135>/AND'
     */
    if (rtb_AND_d && rtb_AND_jv0)
    {
        /* Outputs for IfAction SubSystem: '<S12>/Positive_Capacity_Recovery' incorporates:
         *  ActionPort: '<S149>/Action Port'
         */
        /* Sum: '<S149>/Sum1' incorporates:
         *  DataStoreRead: '<S149>/Data Store Read2'
         */
        rtb_Switch1 = BPDR_ac_DW.NeBPDR_phi_PosSlipIntegrated -
            VeBPDR_phi_PosSlipRecovery;

        /* Outputs for Atomic SubSystem: '<S149>/Limiter' */
        /* Switch: '<S160>/Switch1' incorporates:
         *  Constant: '<S149>/Constant Value1'
         *  RelationalOperator: '<S160>/Relational Operator'
         */
        if (10000.0F < rtb_Switch1)
        {
            /* Switch: '<S160>/Switch1' */
            rtb_Switch1 = 10000.0F;
        }

        /* End of Switch: '<S160>/Switch1' */

        /* Switch: '<S160>/Switch' incorporates:
         *  Constant: '<S149>/Constant Value'
         *  DataStoreWrite: '<S149>/Data Store Write'
         *  RelationalOperator: '<S160>/Relational Operator1'
         */
        if (rtb_Switch1 > 0.0F)
        {
            BPDR_ac_DW.NeBPDR_phi_PosSlipIntegrated = rtb_Switch1;
        }
        else
        {
            BPDR_ac_DW.NeBPDR_phi_PosSlipIntegrated = 0.0F;
        }

        /* End of Switch: '<S160>/Switch' */
        /* End of Outputs for SubSystem: '<S149>/Limiter' */

        /* Merge: '<S12>/Merge1' incorporates:
         *  Constant: '<S149>/TRUE Constant'
         *  SignalConversion generated from: '<S149>/PosCapUnlearnActv'
         */
        VeBPDR_b_PosCapUnlearnActv = true;

        /* End of Outputs for SubSystem: '<S12>/Positive_Capacity_Recovery' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S12>/DoNothing' incorporates:
         *  ActionPort: '<S133>/Action Port'
         */
        /* Merge: '<S12>/Merge1' incorporates:
         *  Constant: '<S133>/FALSE Constant'
         *  SignalConversion generated from: '<S133>/PosCapUnlearnActv'
         */
        VeBPDR_b_PosCapUnlearnActv = false;

        /* End of Outputs for SubSystem: '<S12>/DoNothing' */
    }

    /* End of If: '<S12>/If' */
    /* End of Outputs for SubSystem: '<S12>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S17>/EdgeRising2' */
    /* Logic: '<S17>/Logical3' incorporates:
     *  Constant: '<S112>/Calib'
     *  Logic: '<S107>/AND'
     */
    VeBPDR_b_UpdMemoryForCrnkFail = (((((rtb_Comparison7_d && rtb_OR1_mi) ||
        (KeBPDR_b_NVRAMPosSlipRstOvrd)) || rtb_AND_nf) ||
        (VeBPDR_b_PosCapUnlearnActv)) || (VeBPDR_b_BltMissDetPosEna));

    /* End of Outputs for SubSystem: '<S17>/EdgeRising2' */

    /* Switch: '<S17>/Switch2' */
    if (VeBPDR_b_UpdMemoryForCrnkFail)
    {
        /* Switch: '<S17>/Switch2' incorporates:
         *  DataStoreRead: '<S17>/Data Store Read3'
         */
        VeBPDR_phi_PosSlipIntegrated_WithKeyOnEdge =
            BPDR_ac_DW.NeBPDR_phi_PosSlipIntegrated;
    }

    /* End of Switch: '<S17>/Switch2' */

    /* RelationalOperator: '<S17>/Comparison6' incorporates:
     *  Constant: '<S102>/Constant'
     */
    rtb_Comparison7_d = (((uint32)BPDR_ac_B.VeESSR_e_EngStartStopSt) ==
                         CeESSR_e_EngOff);

    /* Outputs for Atomic SubSystem: '<S17>/EdgeRising1' */
    /* Logic: '<S106>/OR1' incorporates:
     *  UnitDelay: '<S106>/Unit Delay'
     */
    rtb_OR1_mi = !BPDR_ac_DW.UnitDelay_DSTATE_n2;

    /* Update for UnitDelay: '<S106>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_n2 = rtb_Comparison7_d;

    /* End of Outputs for SubSystem: '<S17>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S17>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S17>/Signal Latch On With Reset4' */
    /* Logic: '<S123>/NOT' incorporates:
     *  Constant: '<S98>/Constant'
     *  Logic: '<S122>/NOT'
     *  RelationalOperator: '<S17>/Comparison2'
     */
    rtb_AND_nf = (((uint32)BPDR_ac_B.VeESSR_e_EngStartStopSt) !=
                  CeESSR_e_EngRunning);

    /* End of Outputs for SubSystem: '<S17>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S17>/EdgeRising1' */
    /* Logic: '<S123>/OR1' incorporates:
     *  Logic: '<S106>/AND'
     *  Logic: '<S123>/NOT'
     *  Logic: '<S123>/OR'
     *  UnitDelay: '<S123>/Unit Delay'
     */
    BPDR_ac_DW.UnitDelay_DSTATE_b2 = ((rtb_Comparison7_d && rtb_OR1_mi) ||
        (rtb_AND_nf && (BPDR_ac_DW.UnitDelay_DSTATE_b2)));

    /* End of Outputs for SubSystem: '<S17>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S17>/Signal Latch On With Reset4' */

    /* Outputs for Atomic SubSystem: '<S17>/Signal Latch On With Reset1' */
    /* Logic: '<S122>/OR1' incorporates:
     *  Constant: '<S101>/Constant'
     *  Constant: '<S99>/Constant'
     *  Logic: '<S122>/OR'
     *  Logic: '<S17>/Logical5'
     *  Logic: '<S17>/Logical7'
     *  RelationalOperator: '<S17>/Comparison3'
     *  RelationalOperator: '<S17>/Comparison5'
     *  UnitDelay: '<S122>/Unit Delay'
     *  UnitDelay: '<S17>/Unit Delay2'
     */
    BPDR_ac_DW.UnitDelay_DSTATE_ig = ((((((uint32)
        BPDR_ac_B.VeESPR_e_EngineSpeedStatus) == CeESPR_e_EngSpdDegraded) ||
        (((uint32)BPDR_ac_B.VeESPR_e_EngineSpeedStatus) ==
         CeESPR_e_EngSpdInvalid)) && (BPDR_ac_DW.UnitDelay2_DSTATE_k)) ||
        (rtb_AND_nf && (BPDR_ac_DW.UnitDelay_DSTATE_ig)));

    /* End of Outputs for SubSystem: '<S17>/Signal Latch On With Reset1' */

    /* Logic: '<S17>/Logical2' incorporates:
     *  Constant: '<S113>/Calib'
     *  Logic: '<S17>/Logical6'
     *  UnitDelay: '<S122>/Unit Delay'
     */
    VeBPDR_b_PosSlipIntegrated_WithKey_CrnkFail =
        (((BPDR_ac_DW.UnitDelay_DSTATE_b2) &&
          (KeBPDR_b_RstSlipBufCrkFaildAtStart)) &&
         ((BPDR_ac_DW.UnitDelay_DSTATE_ig) ||
          (BPDR_ac_B.VeESPR_b_BuffrCrnkDiagFailing)));

    /* Logic: '<S17>/Logical8' incorporates:
     *  Constant: '<S104>/Constant'
     *  Constant: '<S97>/Constant'
     *  Logic: '<S17>/Logical4'
     *  Logic: '<S17>/Logical9'
     *  RelationalOperator: '<S17>/Comparison1'
     *  RelationalOperator: '<S17>/Comparison10'
     */
    VeBPDR_b_PosSlip_CrnkFail = ((VeBPDR_b_PosSlipIntegrated_WithKey_CrnkFail) ||
        (((BPDR_ac_B.VeESPR_b_BuffrCrnkDiagFailing) || (((uint32)
        BPDR_ac_B.VeESPR_e_EngineSpeedStatus) != CeESPR_e_EngSpdNormal)) &&
         (((uint32)BPDR_ac_B.VeESSR_e_EngStartStopSt) == CeESSR_e_EngRunning)));

    /* Outputs for Atomic SubSystem: '<S17>/EdgeRising4' */
    /* Logic: '<S108>/OR1' incorporates:
     *  UnitDelay: '<S108>/Unit Delay'
     */
    rtb_Comparison7_d = !BPDR_ac_DW.UnitDelay_DSTATE_hc;

    /* Update for UnitDelay: '<S108>/Unit Delay' incorporates:
     *  Constant: '<S17>/TRUE Constant2'
     */
    BPDR_ac_DW.UnitDelay_DSTATE_hc = true;

    /* Logic: '<S17>/Logical1' incorporates:
     *  Constant: '<S112>/Calib'
     *  DataStoreRead: '<S17>/Data Store Read4'
     *  Logic: '<S108>/AND'
     */
    rtb_Comparison7_d = ((((rtb_Comparison7_d || (KeBPDR_b_NVRAMPosSlipRstOvrd))
                           || (VeBPDR_b_RstIntegrator)) ||
                          (VeBPDR_b_PosSlip_CrnkFail)) ||
                         (VeBPDR_b_PosCapUnlearnActv));

    /* End of Outputs for SubSystem: '<S17>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S17>/Accumulator Reset' */
    /* Switch: '<S96>/Switch1' incorporates:
     *  Logic: '<S17>/Logical'
     *  Switch: '<S17>/Switch5'
     */
    if (rtb_Comparison7_d)
    {
        /* Switch: '<S96>/Switch1' incorporates:
         *  DataStoreRead: '<S17>/Data Store Read1'
         */
        VeBPDR_phi_PosSlipAcc = BPDR_ac_DW.NeBPDR_phi_PosSlipIntegrated;
    }
    else
    {
        if ((BPDR_ac_B.VeBCPR_b_PosSlipDetected) && rtb_Logical5)
        {
            /* Switch: '<S17>/Switch5' */
            rtb_Switch_kv = VeBPDR_phi_PosSlipToIntegrate;
        }
        else
        {
            /* Switch: '<S17>/Switch5' incorporates:
             *  Constant: '<S17>/Constant Value1'
             */
            rtb_Switch_kv = 0.0F;
        }

        /* Switch: '<S96>/Switch1' incorporates:
         *  Sum: '<S96>/Summation'
         *  UnitDelay: '<S96>/Unit Delay'
         */
        VeBPDR_phi_PosSlipAcc = rtb_Switch_kv + VeBPDR_phi_PosSlipAcc;
    }

    /* End of Switch: '<S96>/Switch1' */
    /* End of Outputs for SubSystem: '<S17>/Accumulator Reset' */

    /* Switch: '<S17>/Switch1' */
    if (rtb_Logical12_g)
    {
        /* Switch: '<S17>/Switch1' */
        VeBPDR_phi_PosSlipIntegrated_WithKey = VeBPDR_phi_PosSlipAcc;
    }
    else
    {
        /* Switch: '<S17>/Switch1' incorporates:
         *  DataStoreRead: '<S17>/Data Store Read2'
         */
        VeBPDR_phi_PosSlipIntegrated_WithKey =
            BPDR_ac_DW.NeBPDR_phi_PosSlipIntegrated;
    }

    /* End of Switch: '<S17>/Switch1' */

    /* Switch: '<S17>/Switch6' */
    if (VeBPDR_b_PosSlip_CrnkFail)
    {
        /* Switch: '<S17>/Switch6' */
        VeBPDR_phi_PosSlipIntegrated_WithKey_Final =
            VeBPDR_phi_PosSlipIntegrated_WithKeyOnEdge;
    }
    else
    {
        /* Switch: '<S17>/Switch6' */
        VeBPDR_phi_PosSlipIntegrated_WithKey_Final =
            VeBPDR_phi_PosSlipIntegrated_WithKey;
    }

    /* End of Switch: '<S17>/Switch6' */

    /* Switch: '<S17>/Switch4' incorporates:
     *  Constant: '<S112>/Calib'
     *  Constant: '<S114>/Calib'
     *  DataStoreWrite: '<S17>/Data Store Write'
     */
    if (KeBPDR_b_NVRAMPosSlipRstOvrd)
    {
        BPDR_ac_DW.NeBPDR_phi_PosSlipIntegrated =
            KeBPDR_phi_NVRAMPosSlipRstOvrdVal;
    }
    else
    {
        BPDR_ac_DW.NeBPDR_phi_PosSlipIntegrated =
            VeBPDR_phi_PosSlipIntegrated_WithKey_Final;
    }

    /* End of Switch: '<S17>/Switch4' */

    /* Outputs for Enabled SubSystem: '<S17>/ResetPokeOutput' */
    BPDR_ac_ResetPokeOutput(BPDR_ac_DW.UnitDelay_DSTATE_gh);

    /* End of Outputs for SubSystem: '<S17>/ResetPokeOutput' */

    /* RelationalOperator: '<S17>/Comparison4' incorporates:
     *  Constant: '<S100>/Constant'
     *  UnitDelay: '<S17>/Unit Delay'
     *  UnitDelay: '<S17>/Unit Delay2'
     */
    BPDR_ac_DW.UnitDelay2_DSTATE_k = (((uint32)
        BPDR_ac_B.VeESPR_e_EngineSpeedStatus) == CeESPR_e_EngSpdNormal);

    /* Switch: '<S119>/Switch' incorporates:
     *  Constant: '<S110>/Calib'
     *  Switch: '<S120>/Switch'
     */
    if (KeBPDR_b_EnblPosSlipDiag)
    {
        /* VariantMerge generated from: '<S8>/BeltCapMaxCorrection' incorporates:
         *  Lookup_n-D: '<S116>/Vector'
         *  Switch: '<S96>/Switch1'
         */
        BPDR_ac_B.VariantMergeForOutportBeltCapMaxCorrecti =
            look1_iflf_binlca_16a(VeBPDR_phi_PosSlipAcc, ((const float32 *)
            &(KxBPDR_M_PosSlipCorrectedTrq[0])), ((const float32 *)
            &(KtBPDR_M_PosSlipCorrectedTrq[0])), 9U);

        /* Switch: '<S120>/Switch' incorporates:
         *  Lookup_n-D: '<S117>/Vector'
         *  Switch: '<S17>/Switch2'
         */
        rtb_Switch1 = look1_iflf_binlca_16a
            (VeBPDR_phi_PosSlipIntegrated_WithKeyOnEdge, ((const float32 *)
              &(KxBPDR_M_PosSlipCorrectedTrq[0])), ((const float32 *)
              &(KtBPDR_M_PosSlipCorrectedTrq[0])), 9U);
    }
    else
    {
        /* VariantMerge generated from: '<S8>/BeltCapMaxCorrection' incorporates:
         *  Constant: '<S17>/Constant Value2'
         */
        BPDR_ac_B.VariantMergeForOutportBeltCapMaxCorrecti = 0.0F;

        /* Switch: '<S120>/Switch' incorporates:
         *  Constant: '<S17>/Constant Value11'
         */
        rtb_Switch1 = 0.0F;
    }

    /* End of Switch: '<S119>/Switch' */

    /* Selector: '<S19>/Selector1' incorporates:
     *  Constant: '<S131>/Calib'
     */
    VeBPDR_b_StartStopStateActvNoUnlearn =
        KaBPDR_b_EngStrtStpStBeltUnlearnNotAllwd
        [(BPDR_ac_B.VeESSR_e_EngStartStopSt)];

    /* RelationalOperator: '<S178>/Relational Operator3' incorporates:
     *  Constant: '<S178>/Constant3'
     *  S-Function (sfix_bitop): '<S178>/Bitwise Operator2'
     */
    rtb_AND_nf = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Stat_e) & 64U) ==
                  0U);

    /* Outputs for Atomic SubSystem: '<S178>/EdgeFalling1' */
    /* Logic: '<S178>/Logical Operator' incorporates:
     *  Logic: '<S219>/OR1'
     */
    rtb_AND_jv0 = !rtb_AND_nf;

    /* End of Outputs for SubSystem: '<S178>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S177>/EdgeRising3' */
    /* Logic: '<S201>/AND' incorporates:
     *  Logic: '<S201>/OR1'
     *  UnitDelay: '<S201>/Unit Delay'
     */
    rtb_OR1_mi = !BPDR_ac_DW.UnitDelay_DSTATE_jv;

    /* Update for UnitDelay: '<S201>/Unit Delay' incorporates:
     *  Constant: '<S177>/TRUE Constant1'
     */
    BPDR_ac_DW.UnitDelay_DSTATE_jv = true;

    /* End of Outputs for SubSystem: '<S177>/EdgeRising3' */

    /* Switch: '<S216>/Switch1' */
    if (rtb_OR1_mi)
    {
        /* RelationalOperator: '<S177>/Comparison2' incorporates:
         *  Constant: '<S204>/Constant'
         *  Switch: '<S216>/Switch1'
         */
        BPDR_ac_DW.UnitDelay_DSTATE_o = CeESSR_e_EngOff;
    }

    /* End of Switch: '<S216>/Switch1' */

    /* RelationalOperator: '<S177>/Comparison2' incorporates:
     *  Constant: '<S205>/Constant'
     */
    rtb_Comparison2_b = (((uint32)BPDR_ac_DW.UnitDelay_DSTATE_o) ==
                         CeESSR_e_EngRunning);

    /* Outputs for Atomic SubSystem: '<S177>/Signal Latch On With Reset4' */
    /* VariantMerge generated from: '<S8>/PosSlipLtchForFail' incorporates:
     *  Logic: '<S215>/NOT'
     *  Logic: '<S215>/OR'
     *  Logic: '<S215>/OR1'
     *  UnitDelay: '<S215>/Unit Delay'
     */
    BPDR_ac_B.VariantMergeForOutportPosSlipLtchForFail =
        ((BPDR_ac_B.VeBCPR_b_PosSlipDetected) || ((!rtb_Comparison2_b) &&
          (BPDR_ac_DW.UnitDelay_DSTATE_ma)));

    /* Update for UnitDelay: '<S215>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_ma =
        BPDR_ac_B.VariantMergeForOutportPosSlipLtchForFail;

    /* End of Outputs for SubSystem: '<S177>/Signal Latch On With Reset4' */

    /* Outputs for Atomic SubSystem: '<S177>/Signal Latch On With Reset3' */
    /* Logic: '<S214>/OR1' incorporates:
     *  Constant: '<S203>/Constant'
     *  Constant: '<S207>/Constant'
     *  Constant: '<S209>/Calib'
     *  Constant: '<S211>/Calib'
     *  DataTypeConversion: '<S177>/Data Type Conversion1'
     *  DataTypeConversion: '<S177>/Data Type Conversion2'
     *  Inport: '<S5>/VeESSR_e_EngStartStopSt'
     *  Inport: '<S5>/VeESSR_e_EngStrtStpMd'
     *  Logic: '<S177>/Logical3'
     *  Logic: '<S177>/Logical4'
     *  Logic: '<S214>/NOT'
     *  Logic: '<S214>/OR'
     *  RelationalOperator: '<S177>/Comparison5'
     *  RelationalOperator: '<S177>/Comparison6'
     *  Selector: '<S177>/Selector'
     *  Selector: '<S177>/Selector2'
     *  UnitDelay: '<S214>/Unit Delay'
     */
    VeBPDR_b_FailCritMetLtch =
        ((((BPDR_ac_B.VariantMergeForOutportPosSlipLtchForFail) &&
           (KaBPDR_b_AutoStartStForFail[(BPDR_ac_B.VeESSR_e_EngStartStopSt)])) &&
          (KaBPDR_b_EngStrtStpMdForFail[(BPDR_ac_B.VeESSR_e_EngStrtStpMd)])) ||
         (((((uint32)BPDR_ac_B.VeESSR_e_EngStartStopSt) != CeESSR_e_EngRunning) &&
           (((uint32)BPDR_ac_B.VeESSR_e_EngStartStopSt) != CeESSR_e_EngOff)) &&
          (BPDR_ac_DW.UnitDelay_DSTATE_bd)));

    /* Update for UnitDelay: '<S214>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_bd = VeBPDR_b_FailCritMetLtch;

    /* End of Outputs for SubSystem: '<S177>/Signal Latch On With Reset3' */

    /* Outputs for Atomic SubSystem: '<S177>/EdgeRising1' */
    /* Logic: '<S199>/AND' incorporates:
     *  Logic: '<S199>/OR1'
     *  UnitDelay: '<S199>/Unit Delay'
     */
    VeBPDR_b_FailCritMet = ((VeBPDR_b_FailCritMetLtch) &&
                            (!BPDR_ac_DW.UnitDelay_DSTATE_dd));

    /* Update for UnitDelay: '<S199>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_dd = VeBPDR_b_FailCritMetLtch;

    /* End of Outputs for SubSystem: '<S177>/EdgeRising1' */

    /* RelationalOperator: '<S177>/Comparison4' incorporates:
     *  Constant: '<S202>/Constant'
     */
    rtb_Logical12_g = (((uint32)BPDR_ac_B.VeESSR_e_EngStartStopSt) ==
                       CeESSR_e_EngRunning);

    /* Outputs for Atomic SubSystem: '<S177>/EdgeRising2' */
    /* Logic: '<S200>/OR1' incorporates:
     *  UnitDelay: '<S200>/Unit Delay'
     */
    rtb_AND_d = !BPDR_ac_DW.UnitDelay_DSTATE_ej;

    /* Update for UnitDelay: '<S200>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_ej = rtb_Logical12_g;

    /* End of Outputs for SubSystem: '<S177>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S177>/Signal Latch On With Reset2' */
    /* Outputs for Atomic SubSystem: '<S177>/Signal Latch On With Reset1' */
    /* Logic: '<S212>/NOT' incorporates:
     *  Constant: '<S206>/Constant'
     *  Logic: '<S177>/Logical1'
     *  Logic: '<S213>/NOT'
     *  RelationalOperator: '<S177>/Comparison3'
     */
    rtb_Comparison2_b = ((!rtb_Comparison2_b) && (((uint32)
                           BPDR_ac_DW.UnitDelay_DSTATE_o) != CeESSR_e_EngOff));

    /* End of Outputs for SubSystem: '<S177>/Signal Latch On With Reset2' */

    /* Logic: '<S212>/OR1' incorporates:
     *  Logic: '<S212>/NOT'
     *  Logic: '<S212>/OR'
     *  UnitDelay: '<S212>/Unit Delay'
     */
    VeBPDR_b_PosSlipLtch = ((BPDR_ac_B.VeBCPR_b_PosSlipDetected) ||
                            (rtb_Comparison2_b &&
        (BPDR_ac_DW.UnitDelay_DSTATE_dm)));

    /* Update for UnitDelay: '<S212>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_dm = VeBPDR_b_PosSlipLtch;

    /* End of Outputs for SubSystem: '<S177>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S177>/Signal Latch On With Reset2' */
    /* Logic: '<S213>/OR1' incorporates:
     *  Constant: '<S208>/Constant'
     *  Logic: '<S213>/OR'
     *  RelationalOperator: '<S177>/Comparison1'
     *  UnitDelay: '<S213>/Unit Delay'
     */
    VeBPDR_b_ChgOfMindStart = ((((uint32)BPDR_ac_B.VeESSR_e_EngStartStopSt) ==
        CeESSR_e_RestartPrepSt) || (rtb_Comparison2_b &&
        (BPDR_ac_DW.UnitDelay_DSTATE_pu)));

    /* Update for UnitDelay: '<S213>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_pu = VeBPDR_b_ChgOfMindStart;

    /* End of Outputs for SubSystem: '<S177>/Signal Latch On With Reset2' */

    /* Outputs for Atomic SubSystem: '<S177>/EdgeRising2' */
    /* Logic: '<S177>/Logical2' incorporates:
     *  Constant: '<S210>/Calib'
     *  Logic: '<S177>/Logical5'
     *  Logic: '<S177>/Logical6'
     *  Logic: '<S200>/AND'
     *  Selector: '<S177>/Selector1'
     */
    VeBPDR_b_PassCritMet = ((((rtb_Logical12_g && rtb_AND_d) &&
        (KaBPDR_b_AutoStartStForPass[(BPDR_ac_DW.UnitDelay_DSTATE_o)])) &&
        (!VeBPDR_b_PosSlipLtch)) && (!VeBPDR_b_ChgOfMindStart));

    /* End of Outputs for SubSystem: '<S177>/EdgeRising2' */

    /* Logic: '<S178>/OR7' incorporates:
     *  Constant: '<S172>/Calib'
     *  Constant: '<S175>/Calib'
     *  Constant: '<S178>/Constant1'
     *  Logic: '<S13>/Logical4'
     *  Logic: '<S13>/Logical6'
     *  Logic: '<S178>/Logical Operator'
     *  Logic: '<S178>/Logical10'
     *  Logic: '<S178>/Logical12'
     *  Logic: '<S178>/OR1'
     *  RelationalOperator: '<S178>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S178>/Bitwise Operator3'
     *  UnitDelay: '<S13>/Unit Delay7'
     */
    rtb_AND_d = (((BPDR_ac_DW.UnitDelay7_DSTATE) &&
                  ((!KeBPDR_b_StarterGenMechPerf_Slip_LtchEnbl) || (((((uint32)
                       rtb_TmpSignalConversionAtVeDMAB_y_Stat_e) & 1U) == 0U) ||
                    rtb_AND_jv0))) && ((((VeBPDR_b_FailCritMet) ||
                    (VeBPDR_b_PassCritMet)) && (KeBPDR_b_EnblStartWSlipDiag)) &&
                  rtb_TmpSignalConversionAtVeDFIR_b_IsDiag));

    /* Logic: '<S176>/NOT4' */
    rtb_Logical12_g = ((BPDR_ac_B.VeDFIR_b_DsblDiagFailSafe) ||
                       (BPDR_ac_B.VeDFIR_b_PostCodeClrDiagDsbl));

    /* Outputs for Atomic SubSystem: '<S178>/EdgeFalling1' */
    /* Logic: '<S219>/AND' incorporates:
     *  UnitDelay: '<S219>/Unit Delay'
     */
    rtb_AND_jv0 = (rtb_AND_jv0 && (BPDR_ac_DW.UnitDelay_DSTATE_p3));

    /* Update for UnitDelay: '<S219>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_p3 = rtb_AND_nf;

    /* End of Outputs for SubSystem: '<S178>/EdgeFalling1' */

    /* Logic: '<S178>/OR6' incorporates:
     *  Logic: '<S178>/OR2'
     *  Logic: '<S178>/OR3'
     *  UnitDelay: '<S13>/Unit Delay7'
     */
    rtb_AND_jv0 = ((!BPDR_ac_DW.UnitDelay7_DSTATE) || (rtb_Logical12_g ||
                    rtb_AND_jv0));

    /* Logic: '<S178>/OR4' incorporates:
     *  UnitDelay: '<S178>/Unit Delay'
     */
    rtb_AND_nf = (rtb_AND_jv0 || (BPDR_ac_DW.UnitDelay_DSTATE_l1));

    /* UnitDelay: '<S217>/Unit Delay' incorporates:
     *  UnitDelay: '<S178>/Unit Delay'
     */
    BPDR_ac_DW.UnitDelay_DSTATE_l1 = BPDR_ac_DW.UnitDelay_DSTATE_nl;

    /* Logic: '<S217>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S178>/Unit Delay'
     *  UnitDelay: '<S217>/Unit Delay1'
     */
    rtb_Comparison2_b = ((rtb_AND_nf || (BPDR_ac_DW.UnitDelay_DSTATE_l1)) ||
                         (BPDR_ac_DW.UnitDelay1_DSTATE_gi));

    /* Outputs for Atomic SubSystem: '<S217>/Counter Reset  Enabled ' */
    /* Switch: '<S225>/Switch1' incorporates:
     *  Constant: '<S225>/Constant Value2'
     *  Logic: '<S178>/OR7'
     *  Logic: '<S217>/NOT6'
     *  Switch: '<S225>/Switch2'
     *  UnitDelay: '<S225>/Unit Delay'
     */
    if (rtb_Comparison2_b)
    {
        BPDR_ac_DW.UnitDelay_DSTATE_j0 = 0U;
    }
    else
    {
        if (rtb_AND_d && (VeBPDR_b_FailCritMet))
        {
            /* UnitDelay: '<S225>/Unit Delay' incorporates:
             *  Constant: '<S225>/Constant Value1'
             *  Sum: '<S225>/Subtraction'
             *  Switch: '<S225>/Switch2'
             */
            BPDR_ac_DW.UnitDelay_DSTATE_j0 = (uint16)(((uint32)
                BPDR_ac_DW.UnitDelay_DSTATE_j0) + 1U);
        }
    }

    /* End of Switch: '<S225>/Switch1' */
    /* End of Outputs for SubSystem: '<S217>/Counter Reset  Enabled ' */

    /* UnitDelay: '<S218>/Unit Delay1' incorporates:
     *  UnitDelay: '<S178>/Unit Delay'
     */
    BPDR_ac_DW.UnitDelay_DSTATE_l1 = BPDR_ac_DW.UnitDelay1_DSTATE_j;

    /* Logic: '<S218>/Fail Counter Reset' incorporates:
     *  Logic: '<S178>/OR5'
     *  UnitDelay: '<S178>/Unit Delay'
     *  UnitDelay: '<S178>/Unit Delay2'
     *  UnitDelay: '<S218>/Unit Delay'
     */
    rtb_FailCounterReset_g = (((rtb_AND_jv0 || (BPDR_ac_DW.UnitDelay2_DSTATE_b))
        || (BPDR_ac_DW.UnitDelay_DSTATE_nh)) || (BPDR_ac_DW.UnitDelay_DSTATE_l1));

    /* Outputs for Atomic SubSystem: '<S218>/Counter Reset  Enabled ' */
    /* Switch: '<S227>/Switch1' incorporates:
     *  Constant: '<S227>/Constant Value2'
     *  Logic: '<S218>/NOT6'
     *  Switch: '<S227>/Switch2'
     *  UnitDelay: '<S227>/Unit Delay'
     */
    if (rtb_FailCounterReset_g)
    {
        BPDR_ac_DW.UnitDelay_DSTATE_h1 = 0U;
    }
    else
    {
        if (rtb_AND_d && (VeBPDR_b_PassCritMet))
        {
            /* UnitDelay: '<S227>/Unit Delay' incorporates:
             *  Constant: '<S227>/Constant Value1'
             *  Sum: '<S227>/Subtraction'
             *  Switch: '<S227>/Switch2'
             */
            BPDR_ac_DW.UnitDelay_DSTATE_h1 = (uint16)(((uint32)
                BPDR_ac_DW.UnitDelay_DSTATE_h1) + 1U);
        }
    }

    /* End of Switch: '<S227>/Switch1' */
    /* End of Outputs for SubSystem: '<S218>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S218>/Greater Than or Equal ' incorporates:
     *  Constant: '<S168>/Calib'
     *  UnitDelay: '<S227>/Unit Delay'
     */
    BPDR_ac_DW.UnitDelay1_DSTATE_j = (BPDR_ac_DW.UnitDelay_DSTATE_h1 >=
        KeBPDR_Cnt_BeltSlipPassLmt);

    /* Switch: '<S233>/Switch1' incorporates:
     *  Constant: '<S224>/Constant Value'
     *  DataStoreWrite: '<S13>/Data Store Write2'
     *  Switch: '<S232>/Switch1'
     */
    if (BPDR_ac_B.VeDFIR_b_PostCodeClrDiagDsbl)
    {
        BPDR_ac_DW.NeBPDR_Cnt_BeltSlip_MFOP = 0U;
    }
    else
    {
        if (BPDR_ac_DW.UnitDelay1_DSTATE_j)
        {
            /* MinMax: '<S224>/Minimum2' incorporates:
             *  DataStoreRead: '<S13>/Data Store Read1'
             *  Switch: '<S232>/Switch1'
             *  UnitDelay: '<S225>/Unit Delay'
             */
            if (BPDR_ac_DW.UnitDelay_DSTATE_j0 >
                    BPDR_ac_DW.NeBPDR_Cnt_BeltSlip_MFOP)
            {
                /* DataStoreWrite: '<S13>/Data Store Write2' incorporates:
                 *  Switch: '<S232>/Switch1'
                 */
                BPDR_ac_DW.NeBPDR_Cnt_BeltSlip_MFOP =
                    BPDR_ac_DW.UnitDelay_DSTATE_j0;
            }

            /* End of MinMax: '<S224>/Minimum2' */
        }
    }

    /* End of Switch: '<S233>/Switch1' */

    /* Switch: '<S165>/Switch' incorporates:
     *  Constant: '<S181>/Constant1'
     *  Constant: '<S181>/Constant2'
     *  Constant: '<S182>/Constant1'
     *  Constant: '<S182>/Constant2'
     *  Constant: '<S185>/Calib'
     *  DataStoreRead: '<S181>/StatusByte_LostCommECM_A_BusB'
     *  DataStoreRead: '<S182>/StatusByte_LostCommECM_PCM_A'
     *  Logic: '<S181>/Logical Operator'
     *  Logic: '<S182>/Logical Operator'
     *  RelationalOperator: '<S181>/Relational Operator1'
     *  RelationalOperator: '<S181>/Relational Operator2'
     *  RelationalOperator: '<S182>/Relational Operator1'
     *  RelationalOperator: '<S182>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S181>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S181>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S182>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S182>/Bitwise Operator2'
     */
    if (KeBPDR_b_LOC_ECMAtlantis_Slct)
    {
        rtb_AND_nf = (((((sint32)BPDR_ac_DW.StatusByte_LostCommECM_PCM_A) & 1) >
                       0) && ((((uint32)BPDR_ac_DW.StatusByte_LostCommECM_PCM_A)
                               & 64U) == 0U));
    }
    else
    {
        rtb_AND_nf = (((((sint32)BPDR_ac_DW.StatusByte_LostCommECM_A_BusB) & 1) >
                       0) && ((((uint32)BPDR_ac_DW.StatusByte_LostCommECM_A_BusB)
                               & 64U) == 0U));
    }

    /* End of Switch: '<S165>/Switch' */

    /* UnitDelay: '<S140>/Unit Delay' incorporates:
     *  Constant: '<S184>/Calib'
     *  Logic: '<S165>/Logical5'
     *  Logic: '<S165>/Logical6'
     */
    rtb_AND_nf = ((!rtb_AND_nf) || (KeBPDR_b_EnaLosCommECMChk));

    /* Logic: '<S165>/Logical' incorporates:
     *  Abs: '<S165>/Abs'
     *  Abs: '<S165>/Abs1'
     *  Constant: '<S180>/Constant'
     *  Constant: '<S183>/Calib'
     *  Constant: '<S186>/Calib'
     *  Constant: '<S187>/Calib'
     *  Constant: '<S188>/Calib'
     *  Constant: '<S189>/Calib'
     *  Constant: '<S190>/Calib'
     *  Logic: '<S165>/Logical1'
     *  Logic: '<S165>/Logical2'
     *  Logic: '<S165>/Logical3'
     *  Logic: '<S165>/Logical4'
     *  RelationalOperator: '<S165>/Comparison1'
     *  RelationalOperator: '<S165>/Comparison2'
     *  RelationalOperator: '<S165>/Comparison3'
     */
    VeBPDR_b_P0A92_EnbCndtn = (((((((((uint32)BPDR_ac_B.VeESSR_e_EngStartStopSt)
        == CeESSR_e_EngRunning) || (KeBPDR_b_P0A92_EngStsOvrd)) &&
        (rtb_RelationalOperator3_j || (KeBPDR_b_P0A92_SpdValidVOvrd))) &&
        ((fabsf(BPDR_ac_B.VeBCPR_n_BeltSlipSpd) > KeBPDR_n_BeltSlipSpdThrshld) ||
         (KeBPDR_b_P0A92_SlipSpdOvrd))) && ((fabsf
        (BPDR_ac_B.VeMTIR_M_MtrA_TorqAchieved) > KeBPDR_M_MtrATrqThrshld) ||
        (KeBPDR_b_P0A92_MtrTrqOvrd))) && rtb_AND_nf) &&
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* Outputs for Atomic SubSystem: '<S166>/Hysteresis' */
    /* Switch: '<S191>/Switch1' incorporates:
     *  Constant: '<S191>/Constant Value'
     *  Constant: '<S195>/Calib'
     *  Constant: '<S196>/Calib'
     *  RelationalOperator: '<S191>/Greater  Than'
     *  RelationalOperator: '<S191>/Greater  Than1'
     *  UnitDelay: '<S191>/Unit Delay'
     */
    if (rtb_Switch1 > KeBPDR_M_PosSlipCorrectedTrqThRSP)
    {
        BPDR_ac_DW.UnitDelay_DSTATE_gy = true;
    }
    else
    {
        BPDR_ac_DW.UnitDelay_DSTATE_gy = ((rtb_Switch1 >=
            KeBPDR_M_PosSlipCorrectedTrqThLSP) &&
            (BPDR_ac_DW.UnitDelay_DSTATE_gy));
    }

    /* End of Switch: '<S191>/Switch1' */
    /* End of Outputs for SubSystem: '<S166>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S166>/Hysteresis1' */
    /* Switch: '<S192>/Switch1' incorporates:
     *  Constant: '<S192>/Constant Value'
     *  Constant: '<S193>/Calib'
     *  Constant: '<S194>/Calib'
     *  RelationalOperator: '<S192>/Greater  Than'
     *  RelationalOperator: '<S192>/Greater  Than1'
     *  UnitDelay: '<S192>/Unit Delay'
     */
    if (VeBPDR_M_CorrectedNegTrqCnfrmd > KeBPDR_M_NegSlipCorrectedTrqThRSP)
    {
        BPDR_ac_DW.UnitDelay_DSTATE_jb = true;
    }
    else
    {
        BPDR_ac_DW.UnitDelay_DSTATE_jb = ((VeBPDR_M_CorrectedNegTrqCnfrmd >=
            KeBPDR_M_NegSlipCorrectedTrqThLSP) &&
            (BPDR_ac_DW.UnitDelay_DSTATE_jb));
    }

    /* End of Switch: '<S192>/Switch1' */
    /* End of Outputs for SubSystem: '<S166>/Hysteresis1' */

    /* Logic: '<S166>/Logical' incorporates:
     *  Constant: '<S198>/Calib'
     *  UnitDelay: '<S191>/Unit Delay'
     */
    VeBPDR_b_LostPosCapacity = ((BPDR_ac_DW.UnitDelay_DSTATE_gy) &&
        (KeBPDR_b_EnblPosSlipDiag));

    /* Logic: '<S166>/Logical1' incorporates:
     *  Constant: '<S197>/Calib'
     *  Logic: '<S166>/Logical5'
     *  UnitDelay: '<S192>/Unit Delay'
     */
    VeBPDR_b_LostNegCapacity = ((!BPDR_ac_DW.UnitDelay_DSTATE_jb) &&
        (KeBPDR_b_EnblNegSlipDiag));

    /* VariantMerge generated from: '<S8>/BeltSlipFltInhtStatus' incorporates:
     *  Constant: '<S174>/Calib'
     *  Logic: '<S13>/Logical1'
     *  Logic: '<S13>/Logical5'
     */
    BPDR_ac_B.VariantMergeForOutportBeltSlipFltInhtSta = ((!rtb_AND_nf) &&
        (KeBPDR_b_IUMPR_P0A92_Enb));

    /* Switch: '<S216>/Switch3' */
    if (rtb_OR1_mi)
    {
        /* RelationalOperator: '<S177>/Comparison2' incorporates:
         *  Constant: '<S204>/Constant'
         *  Switch: '<S216>/Switch3'
         *  UnitDelay: '<S216>/Unit Delay'
         */
        BPDR_ac_DW.UnitDelay_DSTATE_o = CeESSR_e_EngOff;
    }
    else
    {
        /* RelationalOperator: '<S177>/Comparison2' incorporates:
         *  Inport: '<S5>/VeESSR_e_EngStartStopSt'
         *  Switch: '<S216>/Switch3'
         *  UnitDelay: '<S216>/Unit Delay'
         */
        BPDR_ac_DW.UnitDelay_DSTATE_o = BPDR_ac_B.VeESSR_e_EngStartStopSt;
    }

    /* End of Switch: '<S216>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S217>/Counter Reset  Enabled 1' */
    /* Switch: '<S226>/Switch1' incorporates:
     *  Constant: '<S226>/Constant Value2'
     *  Logic: '<S178>/OR7'
     *  Switch: '<S226>/Switch2'
     *  UnitDelay: '<S226>/Unit Delay'
     */
    if (rtb_Comparison2_b)
    {
        BPDR_ac_DW.UnitDelay_DSTATE_l = 0U;
    }
    else
    {
        if (rtb_AND_d)
        {
            /* UnitDelay: '<S226>/Unit Delay' incorporates:
             *  Constant: '<S226>/Constant Value1'
             *  Sum: '<S226>/Subtraction'
             *  Switch: '<S226>/Switch2'
             */
            BPDR_ac_DW.UnitDelay_DSTATE_l = (uint16)(((uint32)
                BPDR_ac_DW.UnitDelay_DSTATE_l) + 1U);
        }
    }

    /* End of Switch: '<S226>/Switch1' */
    /* End of Outputs for SubSystem: '<S217>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S217>/Greater Than or Equal ' incorporates:
     *  Constant: '<S167>/Calib'
     *  UnitDelay: '<S225>/Unit Delay'
     */
    BPDR_ac_DW.UnitDelay1_DSTATE_gi = (BPDR_ac_DW.UnitDelay_DSTATE_j0 >=
        KeBPDR_Cnt_BeltSlipFailLmt);

    /* Outputs for Atomic SubSystem: '<S218>/Counter Reset  Enabled 1' */
    /* Switch: '<S228>/Switch1' incorporates:
     *  Constant: '<S228>/Constant Value2'
     *  Switch: '<S228>/Switch2'
     *  UnitDelay: '<S228>/Unit Delay'
     */
    if (rtb_FailCounterReset_g)
    {
        BPDR_ac_DW.UnitDelay_DSTATE_ee = 0U;
    }
    else
    {
        if (rtb_AND_d)
        {
            /* UnitDelay: '<S228>/Unit Delay' incorporates:
             *  Constant: '<S228>/Constant Value1'
             *  Sum: '<S228>/Subtraction'
             *  Switch: '<S228>/Switch2'
             */
            BPDR_ac_DW.UnitDelay_DSTATE_ee = (uint16)(((uint32)
                BPDR_ac_DW.UnitDelay_DSTATE_ee) + 1U);
        }
    }

    /* End of Switch: '<S228>/Switch1' */
    /* End of Outputs for SubSystem: '<S218>/Counter Reset  Enabled 1' */

    /* Logic: '<S218>/NOT5' incorporates:
     *  Constant: '<S169>/Calib'
     *  Logic: '<S218>/NOT3'
     *  RelationalOperator: '<S218>/Less Than  or Equal'
     *  UnitDelay: '<S218>/Unit Delay'
     *  UnitDelay: '<S228>/Unit Delay'
     */
    BPDR_ac_DW.UnitDelay_DSTATE_nh = ((BPDR_ac_DW.UnitDelay_DSTATE_ee >=
        KeBPDR_Cnt_BeltSlipSmplLmt) && (!BPDR_ac_DW.UnitDelay1_DSTATE_j));

    /* Outputs for Enabled SubSystem: '<S178>/Fail' */
    BPDR_ac_Fail(BPDR_ac_DW.UnitDelay1_DSTATE_gi,
                 &BPDR_ac_B.VariantMergeForOutportVeBPDR_e_FaultSt_c);

    /* End of Outputs for SubSystem: '<S178>/Fail' */

    /* Outputs for Enabled SubSystem: '<S178>/Init' */
    BPDR_ac_Init_e(rtb_AND_jv0,
                   &BPDR_ac_B.VariantMergeForOutportVeBPDR_e_FaultSt_c);

    /* End of Outputs for SubSystem: '<S178>/Init' */

    /* Outputs for Enabled SubSystem: '<S178>/Pass' */
    BPDR_ac_Pass(BPDR_ac_DW.UnitDelay1_DSTATE_j,
                 &BPDR_ac_B.VariantMergeForOutportVeBPDR_e_FaultSt_c);

    /* End of Outputs for SubSystem: '<S178>/Pass' */

    /* RelationalOperator: '<S178>/Relational Operator1' incorporates:
     *  Constant: '<S220>/Constant'
     *  VariantMerge generated from: '<S8>/VeBPDR_e_FaultSts_StarterGenMechPerf_Slip'
     */
    VeBPDR_b_NrStartsWSlipFltDtct = (((uint32)
        BPDR_ac_B.VariantMergeForOutportVeBPDR_e_FaultSt_c) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S179>/Relational Operator3' incorporates:
     *  Constant: '<S179>/Constant3'
     *  S-Function (sfix_bitop): '<S179>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_j = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S179>/EdgeFalling1' */
    /* Logic: '<S179>/Logical Operator' incorporates:
     *  Logic: '<S235>/OR1'
     */
    rtb_OR1_mi = !rtb_RelationalOperator3_j;

    /* End of Outputs for SubSystem: '<S179>/EdgeFalling1' */

    /* Logic: '<S179>/Logical1' incorporates:
     *  Constant: '<S173>/Calib'
     *  Constant: '<S179>/Constant1'
     *  Logic: '<S179>/Logical Operator'
     *  Logic: '<S179>/Logical10'
     *  Logic: '<S179>/Logical12'
     *  RelationalOperator: '<S179>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S179>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = ((VeBPDR_b_P0A92_EnbCndtn) &&
        ((!KeBPDR_b_HybridGenPerf_Slip_LtchEnbl) || (((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 1U) == 0U) || rtb_OR1_mi)));

    /* Outputs for Atomic SubSystem: '<S179>/EdgeFalling1' */
    /* Logic: '<S235>/AND' incorporates:
     *  UnitDelay: '<S235>/Unit Delay'
     */
    rtb_OR1_mi = (rtb_OR1_mi && (BPDR_ac_DW.UnitDelay_DSTATE_bx));

    /* Update for UnitDelay: '<S235>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_bx = rtb_RelationalOperator3_j;

    /* End of Outputs for SubSystem: '<S179>/EdgeFalling1' */

    /* Logic: '<S179>/Logical5' */
    rtb_RelationalOperator3_j = (rtb_Logical12_g || rtb_OR1_mi);

    /* UnitDelay: '<S234>/Unit Delay1' incorporates:
     *  UnitDelay: '<S178>/Unit Delay'
     */
    BPDR_ac_DW.UnitDelay_DSTATE_l1 = BPDR_ac_DW.UnitDelay1_DSTATE_n;

    /* Outputs for Atomic SubSystem: '<S234>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S234>/Counter Reset  Enabled ' */
    /* Switch: '<S241>/Switch1' incorporates:
     *  Logic: '<S166>/Logical2'
     *  Logic: '<S234>/Fail Counter Reset'
     *  Logic: '<S234>/NOT6'
     *  Switch: '<S241>/Switch2'
     *  Switch: '<S242>/Switch1'
     *  UnitDelay: '<S178>/Unit Delay'
     *  UnitDelay: '<S234>/Unit Delay'
     */
    if ((rtb_RelationalOperator3_j || (BPDR_ac_DW.UnitDelay_DSTATE_bl)) ||
            (BPDR_ac_DW.UnitDelay_DSTATE_l1))
    {
        /* Switch: '<S241>/Switch1' incorporates:
         *  Constant: '<S241>/Constant Value2'
         */
        VeBPDR_Cnt_P0A92_FailCnt = 0U;

        /* Switch: '<S242>/Switch1' incorporates:
         *  Constant: '<S242>/Constant Value2'
         */
        VeBPDR_Cnt_P0A92_SmpCnt = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
                ((VeBPDR_b_LostPosCapacity) || (VeBPDR_b_LostNegCapacity)))
        {
            /* Switch: '<S241>/Switch1' incorporates:
             *  Constant: '<S241>/Constant Value1'
             *  Sum: '<S241>/Subtraction'
             *  Switch: '<S241>/Switch2'
             *  UnitDelay: '<S241>/Unit Delay'
             */
            VeBPDR_Cnt_P0A92_FailCnt = (uint16)(((uint32)
                VeBPDR_Cnt_P0A92_FailCnt) + 1U);
        }

        /* Switch: '<S242>/Switch2' */
        if (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)
        {
            /* Switch: '<S242>/Switch1' incorporates:
             *  Constant: '<S242>/Constant Value1'
             *  Sum: '<S242>/Subtraction'
             *  Switch: '<S242>/Switch2'
             *  UnitDelay: '<S242>/Unit Delay'
             */
            VeBPDR_Cnt_P0A92_SmpCnt = (uint16)(((uint32)VeBPDR_Cnt_P0A92_SmpCnt)
                + 1U);
        }

        /* End of Switch: '<S242>/Switch2' */
    }

    /* End of Switch: '<S241>/Switch1' */
    /* End of Outputs for SubSystem: '<S234>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S234>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S234>/Greater Than or Equal ' incorporates:
     *  Constant: '<S170>/Calib'
     */
    BPDR_ac_DW.UnitDelay1_DSTATE_n = (VeBPDR_Cnt_P0A92_FailCnt >= ((uint16)
        KeBPDR_Cnt_P0A92_FailCnt));

    /* Logic: '<S234>/NOT5' incorporates:
     *  Constant: '<S171>/Calib'
     *  Logic: '<S234>/NOT3'
     *  RelationalOperator: '<S234>/Less Than  or Equal'
     */
    BPDR_ac_DW.UnitDelay_DSTATE_bl = ((VeBPDR_Cnt_P0A92_SmpCnt >= ((uint16)
        KeBPDR_Cnt_P0A92_SmpCnt)) && (!BPDR_ac_DW.UnitDelay1_DSTATE_n));

    /* Outputs for Enabled SubSystem: '<S179>/Fail' */
    BPDR_ac_Fail(BPDR_ac_DW.UnitDelay1_DSTATE_n,
                 &BPDR_ac_B.VariantMergeForOutportVeBPDR_e_FaultSts_);

    /* End of Outputs for SubSystem: '<S179>/Fail' */

    /* Outputs for Enabled SubSystem: '<S179>/Init' */
    BPDR_ac_Init_e(rtb_RelationalOperator3_j,
                   &BPDR_ac_B.VariantMergeForOutportVeBPDR_e_FaultSts_);

    /* End of Outputs for SubSystem: '<S179>/Init' */

    /* Outputs for Enabled SubSystem: '<S179>/Pass' */
    BPDR_ac_Pass(BPDR_ac_DW.UnitDelay_DSTATE_bl,
                 &BPDR_ac_B.VariantMergeForOutportVeBPDR_e_FaultSts_);

    /* End of Outputs for SubSystem: '<S179>/Pass' */

    /* VariantMerge generated from: '<S8>/BeltSlipFltDtct' incorporates:
     *  Constant: '<S236>/Constant'
     *  RelationalOperator: '<S179>/Relational Operator'
     *  VariantMerge generated from: '<S8>/VeBPDR_e_FaultSts_HybridGenPerf_Slip'
     */
    BPDR_ac_B.VariantMergeForOutportBeltSlipFltDtct = (((uint32)
        BPDR_ac_B.VariantMergeForOutportVeBPDR_e_FaultSts_) == CeDFIB_e_Fail);

    /* Switch: '<S247>/Switch1' incorporates:
     *  Switch: '<S246>/Switch1'
     */
    if (BPDR_ac_B.VeDFIR_b_PostCodeClrDiagDsbl)
    {
        /* Switch: '<S247>/Switch1' incorporates:
         *  Constant: '<S240>/Constant Value'
         */
        VeBPDR_Cnt_P0A92_MFOP = 0U;
    }
    else
    {
        if (BPDR_ac_DW.UnitDelay_DSTATE_bl)
        {
            /* MinMax: '<S240>/Minimum2' incorporates:
             *  Switch: '<S246>/Switch1'
             *  UnitDelay: '<S13>/Unit Delay2'
             */
            if (VeBPDR_Cnt_P0A92_FailCnt > VeBPDR_Cnt_P0A92_MFOP)
            {
                /* Switch: '<S247>/Switch1' incorporates:
                 *  Switch: '<S246>/Switch1'
                 */
                VeBPDR_Cnt_P0A92_MFOP = VeBPDR_Cnt_P0A92_FailCnt;
            }

            /* End of MinMax: '<S240>/Minimum2' */
        }
    }

    /* End of Switch: '<S247>/Switch1' */

    /* VariantMerge generated from: '<S8>/NrStartsWSlipFltInhtStatus' incorporates:
     *  Constant: '<S13>/FALSE Constant1'
     */
    BPDR_ac_B.VariantMergeForOutportNrStartsWSlipFltIn = false;

    /* UnitDelay: '<S140>/Unit Delay' incorporates:
     *  Constant: '<S158>/Constant'
     *  Inport: '<S5>/VeTISR_e_InpSpdSource'
     *  RelationalOperator: '<S132>/Comparison4'
     */
    rtb_AND_nf = (((uint32)BPDR_ac_B.VeTISR_e_InpSpdSource) ==
                  CeTISR_e_EngSpeedFromMSPR);

    /* Logic: '<S132>/Logical5' incorporates:
     *  Logic: '<S132>/Logical3'
     */
    rtb_Logical5 = !rtb_Logical5;

    /* Logic: '<S132>/Logical1' incorporates:
     *  Logic: '<S132>/Logical5'
     */
    VeBPDR_b_NegUnlearnPause = ((rtb_Logical5 ||
        (VeBPDR_b_StartStopStateActvNoUnlearn)) || rtb_AND_nf);

    /* Logic: '<S132>/Logical2' */
    VeBPDR_b_PosUnlearnPause = ((rtb_AND_nf ||
        (VeBPDR_b_StartStopStateActvNoUnlearn)) || rtb_Logical5);

    /* Outputs for Atomic SubSystem: '<S12>/EdgeRising4' */
    /* Logic: '<S139>/AND' incorporates:
     *  Logic: '<S139>/OR1'
     *  UnitDelay: '<S139>/Unit Delay'
     */
    rtb_Logical5 = !BPDR_ac_DW.UnitDelay_DSTATE_gq;

    /* Update for UnitDelay: '<S139>/Unit Delay' incorporates:
     *  Constant: '<S12>/TRUE Constant2'
     */
    BPDR_ac_DW.UnitDelay_DSTATE_gq = true;

    /* End of Outputs for SubSystem: '<S12>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S12>/EdgeRising5' */
    /* Logic: '<S140>/AND' incorporates:
     *  Logic: '<S140>/OR1'
     *  UnitDelay: '<S140>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = !BPDR_ac_DW.UnitDelay_DSTATE_mc;

    /* Update for UnitDelay: '<S140>/Unit Delay' incorporates:
     *  Constant: '<S12>/TRUE Constant3'
     */
    BPDR_ac_DW.UnitDelay_DSTATE_mc = true;

    /* End of Outputs for SubSystem: '<S12>/EdgeRising5' */

    /* Outputs for Atomic SubSystem: '<S12>/Stop_Watch_Reset_Enabled' */
    /* Switch: '<S152>/Switch1' incorporates:
     *  Logic: '<S12>/Logical'
     *  Logic: '<S12>/Logical3'
     *  Logic: '<S12>/Logical9'
     *  Switch: '<S152>/Switch2'
     */
    if ((((VeBPDR_b_PosSlippedLatched) || rtb_AND_kd) || rtb_AND_ll) ||
            rtb_Logical5)
    {
        /* Switch: '<S153>/Switch1' incorporates:
         *  Constant: '<S152>/Constant Value2'
         */
        rtb_Switch1 = 0.0F;
    }
    else if ((!VeBPDR_b_PosUnlearnPause) && rtb_AND_bz)
    {
        /* Switch: '<S152>/Switch2' incorporates:
         *  Constant: '<S141>/Calib'
         *  Sum: '<S152>/Subtraction'
         *  Switch: '<S153>/Switch1'
         *  UnitDelay: '<S152>/Unit Delay'
         */
        rtb_Switch1 = HeBPDR_t_MedTED + BPDR_ac_DW.UnitDelay_DSTATE_ps;
    }
    else
    {
        /* Switch: '<S153>/Switch1' incorporates:
         *  Switch: '<S152>/Switch2'
         *  UnitDelay: '<S152>/Unit Delay'
         */
        rtb_Switch1 = BPDR_ac_DW.UnitDelay_DSTATE_ps;
    }

    /* End of Switch: '<S152>/Switch1' */

    /* Switch: '<S152>/Switch' incorporates:
     *  Constant: '<S152>/Constant Value3'
     *  RelationalOperator: '<S152>/Comparison1'
     *  UnitDelay: '<S152>/Unit Delay'
     */
    if (rtb_Switch1 < 10.0F)
    {
        BPDR_ac_DW.UnitDelay_DSTATE_ps = rtb_Switch1;
    }

    /* End of Switch: '<S152>/Switch' */
    /* End of Outputs for SubSystem: '<S12>/Stop_Watch_Reset_Enabled' */

    /* Outputs for Atomic SubSystem: '<S12>/Stop_Watch_Reset_Enabled1' */
    /* Switch: '<S153>/Switch1' incorporates:
     *  Logic: '<S12>/Logical10'
     *  Logic: '<S12>/Logical11'
     *  Logic: '<S12>/Logical7'
     *  Switch: '<S153>/Switch2'
     */
    if ((((VeBPDR_b_NegSlippedLatched) || rtb_Logical1) || rtb_OR1_fr) ||
            rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)
    {
        /* Switch: '<S153>/Switch1' incorporates:
         *  Constant: '<S153>/Constant Value2'
         */
        rtb_Switch1 = 0.0F;
    }
    else if ((!VeBPDR_b_NegUnlearnPause) && rtb_Comparison1)
    {
        /* Switch: '<S153>/Switch2' incorporates:
         *  Constant: '<S141>/Calib'
         *  Sum: '<S153>/Subtraction'
         *  Switch: '<S153>/Switch1'
         *  UnitDelay: '<S153>/Unit Delay'
         */
        rtb_Switch1 = HeBPDR_t_MedTED + BPDR_ac_DW.UnitDelay_DSTATE_p;
    }
    else
    {
        /* Switch: '<S153>/Switch1' incorporates:
         *  Switch: '<S153>/Switch2'
         *  UnitDelay: '<S153>/Unit Delay'
         */
        rtb_Switch1 = BPDR_ac_DW.UnitDelay_DSTATE_p;
    }

    /* End of Switch: '<S153>/Switch1' */

    /* Switch: '<S153>/Switch' incorporates:
     *  Constant: '<S153>/Constant Value3'
     *  RelationalOperator: '<S153>/Comparison1'
     *  UnitDelay: '<S153>/Unit Delay'
     */
    if (rtb_Switch1 < 10.0F)
    {
        BPDR_ac_DW.UnitDelay_DSTATE_p = rtb_Switch1;
    }

    /* End of Switch: '<S153>/Switch' */
    /* End of Outputs for SubSystem: '<S12>/Stop_Watch_Reset_Enabled1' */

    /* Switch: '<S154>/Switch3' incorporates:
     *  Constant: '<S12>/Constant Value'
     *  Constant: '<S145>/Calib'
     *  MinMax: '<S152>/MinMax'
     *  UnitDelay: '<S152>/Unit Delay'
     *  UnitDelay: '<S154>/Unit Delay'
     */
    if (VeBPDR_b_PosSlippedLatched)
    {
        BPDR_ac_DW.UnitDelay_DSTATE_c = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S12>/Stop_Watch_Reset_Enabled' */
        BPDR_ac_DW.UnitDelay_DSTATE_c = fminf(BPDR_ac_DW.UnitDelay_DSTATE_ps,
            KeBPDR_t_DbncPosSlipTrqCap);

        /* End of Outputs for SubSystem: '<S12>/Stop_Watch_Reset_Enabled' */
    }

    /* End of Switch: '<S154>/Switch3' */

    /* Switch: '<S155>/Switch3' incorporates:
     *  Constant: '<S12>/Constant Value3'
     *  Constant: '<S144>/Calib'
     *  MinMax: '<S153>/MinMax'
     *  UnitDelay: '<S153>/Unit Delay'
     *  UnitDelay: '<S155>/Unit Delay'
     */
    if (VeBPDR_b_NegSlippedLatched)
    {
        BPDR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S12>/Stop_Watch_Reset_Enabled1' */
        BPDR_ac_DW.UnitDelay_DSTATE = fminf(BPDR_ac_DW.UnitDelay_DSTATE_p,
            KeBPDR_t_DbncNegSlipTrqCap);

        /* End of Outputs for SubSystem: '<S12>/Stop_Watch_Reset_Enabled1' */
    }

    /* End of Switch: '<S155>/Switch3' */

    /* Switch: '<S162>/Switch1' incorporates:
     *  Switch: '<S162>/Switch3'
     *  UnitDelay: '<S162>/Unit Delay'
     */
    BPDR_ac_DW.UnitDelay_DSTATE_ne = (rtb_OR1_l3 || (VeBPDR_b_PosSlippedLatched));

    /* Switch: '<S164>/Switch1' incorporates:
     *  Switch: '<S164>/Switch3'
     *  UnitDelay: '<S164>/Unit Delay'
     */
    BPDR_ac_DW.UnitDelay_DSTATE_k = (rtb_AND_o0 || (VeBPDR_b_NegSlippedLatched));

    /* Update for UnitDelay: '<S15>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_m = rtb_Comparison7;

    /* Update for UnitDelay: '<S17>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_gh = rtb_Comparison7_d;

    /* Update for UnitDelay: '<S13>/Unit Delay7' incorporates:
     *  Constant: '<S13>/TRUE Constant4'
     */
    BPDR_ac_DW.UnitDelay7_DSTATE = true;

    /* Update for UnitDelay: '<S178>/Unit Delay' */
    BPDR_ac_DW.UnitDelay_DSTATE_l1 = BPDR_ac_DW.UnitDelay1_DSTATE_j;

    /* Update for UnitDelay: '<S217>/Unit Delay' incorporates:
     *  Constant: '<S169>/Calib'
     *  Logic: '<S217>/NOT3'
     *  Logic: '<S217>/NOT5'
     *  RelationalOperator: '<S217>/Less Than  or Equal'
     *  UnitDelay: '<S226>/Unit Delay'
     */
    BPDR_ac_DW.UnitDelay_DSTATE_nl = ((BPDR_ac_DW.UnitDelay_DSTATE_l >=
        KeBPDR_Cnt_BeltSlipSmplLmt) && (!BPDR_ac_DW.UnitDelay1_DSTATE_gi));

    /* Update for UnitDelay: '<S178>/Unit Delay2' */
    BPDR_ac_DW.UnitDelay2_DSTATE_b = BPDR_ac_DW.UnitDelay1_DSTATE_gi;

    /* End of Outputs for SubSystem: '<S8>/BeltSlipDiag' */
    /* End of Outputs for SubSystem: '<S6>/BeltSlipDiag' */
#else

    /* Outputs for Atomic SubSystem: '<S8>/BeltSlipDiagStub' */
    /* VariantMerge generated from: '<S8>/BeltCapMaxCorrection' incorporates:
     *  Constant: '<S10>/Constant Value'
     */
    BPDR_ac_B.VariantMergeForOutportBeltCapMaxCorrecti = 0.0F;

    /* VariantMerge generated from: '<S8>/BeltCapMinCorrection' incorporates:
     *  Constant: '<S10>/Constant Value1'
     */
    BPDR_ac_B.VariantMergeForOutportBeltCapMinCorrecti = 0.0F;

    /* VariantMerge generated from: '<S8>/PosSlipLtchForFail' incorporates:
     *  Constant: '<S10>/FALSE Constant'
     */
    BPDR_ac_B.VariantMergeForOutportPosSlipLtchForFail = false;

    /* VariantMerge generated from: '<S8>/BeltSlipFltInhtStatus' incorporates:
     *  Constant: '<S10>/FALSE Constant1'
     */
    BPDR_ac_B.VariantMergeForOutportBeltSlipFltInhtSta = false;

    /* VariantMerge generated from: '<S8>/NrStartsWSlipFltInhtStatus' incorporates:
     *  Constant: '<S10>/FALSE Constant2'
     */
    BPDR_ac_B.VariantMergeForOutportNrStartsWSlipFltIn = false;

    /* VariantMerge generated from: '<S8>/BeltSlipFltDtct' incorporates:
     *  Constant: '<S10>/FALSE Constant3'
     */
    BPDR_ac_B.VariantMergeForOutportBeltSlipFltDtct = false;

    /* VariantMerge generated from: '<S8>/VeBPDR_e_FaultSts_HybridGenPerf_Slip' incorporates:
     *  Constant: '<S248>/Constant'
     */
    BPDR_ac_B.VariantMergeForOutportVeBPDR_e_FaultSts_ = CeDFIB_e_Init;

    /* VariantMerge generated from: '<S8>/VeBPDR_e_FaultSts_StarterGenMechPerf_Slip' incorporates:
     *  Constant: '<S249>/Constant'
     */
    BPDR_ac_B.VariantMergeForOutportVeBPDR_e_FaultSt_c = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S8>/BeltSlipDiagStub' */
#endif

    /* End of SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_HybridGenPerf_Slip' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outport: '<Root>/VeBPDR_M_BeltCapMaxCorrection' incorporates:
     *  Gain: '<S255>/Gain'
     *  SignalConversion generated from: '<S1>/VeBPDR_M_BeltCapMaxCorrection'
     */
    (void)Rte_Write_VeBPDR_M_BeltCapMaxCorrection_Value
        (BPDR_ac_B.VariantMergeForOutportBeltCapMaxCorrecti);

    /* Outport: '<Root>/VeBPDR_M_BeltCapMinCorrection' incorporates:
     *  Gain: '<S252>/Gain'
     *  SignalConversion generated from: '<S1>/VeBPDR_M_BeltCapMinCorrection'
     */
    (void)Rte_Write_VeBPDR_M_BeltCapMinCorrection_Value
        (BPDR_ac_B.VariantMergeForOutportBeltCapMinCorrecti);

    /* Outport: '<Root>/VeBPDR_b_BeltSlipFltDtct' incorporates:
     *  Gain: '<S250>/Gain'
     *  SignalConversion generated from: '<S1>/VeBPDR_b_BeltSlipFltDtct'
     */
    (void)Rte_Write_VeBPDR_b_BeltSlipFltDtct_Value
        (BPDR_ac_B.VariantMergeForOutportBeltSlipFltDtct);

    /* Outport: '<Root>/VeBPDR_b_BeltSlipFltInhtStatus' incorporates:
     *  Gain: '<S253>/Gain'
     *  SignalConversion generated from: '<S1>/VeBPDR_b_BeltSlipFltInhtStatus'
     */
    (void)Rte_Write_VeBPDR_b_BeltSlipFltInhtStatus_Value
        (BPDR_ac_B.VariantMergeForOutportBeltSlipFltInhtSta);

    /* Outport: '<Root>/VeBPDR_b_NrStartsWSlipFltInhtStatus' incorporates:
     *  Gain: '<S254>/Gain'
     *  SignalConversion generated from: '<S1>/VeBPDR_b_NrStartsWSlipFltInhtStatus'
     */
    (void)Rte_Write_VeBPDR_b_NrStartsWSlipFltInhtStatus_Value
        (BPDR_ac_B.VariantMergeForOutportNrStartsWSlipFltIn);

    /* Outport: '<Root>/VeBPDR_b_PosSlipDetectedLtchForSTRR' incorporates:
     *  Gain: '<S251>/Gain'
     *  SignalConversion generated from: '<S1>/VeBPDR_b_PosSlipDetectedLtchForSTRR'
     */
    (void)Rte_Write_VeBPDR_b_PosSlipDetectedLtchForSTRR_Value
        (BPDR_ac_B.VariantMergeForOutportPosSlipLtchForFail);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeBPDR_e_FaultSts_HybridGenPerf_Slip' incorporates:
     *  SignalConversion generated from: '<S1>/VeBPDR_e_FaultSts_HybridGenPerf_Slip'
     *  VariantMerge generated from: '<S8>/VeBPDR_e_FaultSts_HybridGenPerf_Slip'
     */
    (void)Rte_Write_VeBPDR_e_FaultSts_HybridGenPerf_Slip_Value
        (BPDR_ac_B.VariantMergeForOutportVeBPDR_e_FaultSts_);

    /* Outport: '<Root>/VeBPDR_e_FaultSts_StarterGenMechPerf_Slip' incorporates:
     *  SignalConversion generated from: '<S1>/VeBPDR_e_FaultSts_StarterGenMechPerf_Slip'
     *  VariantMerge generated from: '<S8>/VeBPDR_e_FaultSts_StarterGenMechPerf_Slip'
     */
    (void)Rte_Write_VeBPDR_e_FaultSts_StarterGenMechPerf_Slip_Value
        (BPDR_ac_B.VariantMergeForOutportVeBPDR_e_FaultSt_c);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output'
     */
    /* Outport: '<Root>/VeBPDR_phi_NegSlipIntegrated' incorporates:
     *  DataStoreRead: '<S7>/DataStoreRead4'
     *  SignalConversion generated from: '<S1>/VeBPDR_phi_NegSlipIntegrated'
     */
    (void)Rte_Write_VeBPDR_phi_NegSlipIntegrated_Value
        (BPDR_ac_DW.NeBPDR_phi_NegSlipIntegrated);

    /* Outport: '<Root>/VeBPDR_phi_PosSlipIntegrated' incorporates:
     *  DataStoreRead: '<S7>/DataStoreRead2'
     *  SignalConversion generated from: '<S1>/VeBPDR_phi_PosSlipIntegrated'
     */
    (void)Rte_Write_VeBPDR_phi_PosSlipIntegrated_Value
        (BPDR_ac_DW.NeBPDR_phi_PosSlipIntegrated);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, BPDR_CODE) PokeBPDR_b_RstSlipAdaption(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeBPDR_b_RstSlipAdaption' */
    /* Chart: '<S4>/PokeBPDR_b_RstSlipAdaptionChrt' */
    /* Gateway: PokeBPDR_b_RstSlipAdaption/PokeBPDR_b_RstSlipAdaptionChrt */
    /* During: PokeBPDR_b_RstSlipAdaption/PokeBPDR_b_RstSlipAdaptionChrt */
    /* Entry Internal: PokeBPDR_b_RstSlipAdaption/PokeBPDR_b_RstSlipAdaptionChrt */
    /* Transition: '<S260>:31' */
    BPDR_ac_DW.NeBPDR_phi_PosSlipIntegrated = 0.0F;
    BPDR_ac_DW.NeBPDR_phi_NegSlipIntegrated = 0.0F;
    VeBPDR_b_RstIntegrator = true;

    /* End of Outputs for SubSystem: '<Root>/PokeBPDR_b_RstSlipAdaption' */
}

/* Output function */
FUNC(void, BPDR_CODE) BPDR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/BPDR_PwrOff'
     */
    /* Outport: '<Root>/NeBPDR_phi_NegSlipIntegrated_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeBPDR_phi_NegSlipIntegrated'
     */
    (void)Rte_Write_NeBPDR_phi_NegSlipIntegrated_NeBPDR_phi_NegSlipIntegrated
        (BPDR_ac_DW.NeBPDR_phi_NegSlipIntegrated);

    /* Outport: '<Root>/NeBPDR_phi_PosSlipIntegrated_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeBPDR_phi_PosSlipIntegrated'
     */
    (void)Rte_Write_NeBPDR_phi_PosSlipIntegrated_NeBPDR_phi_PosSlipIntegrated
        (BPDR_ac_DW.NeBPDR_phi_PosSlipIntegrated);

    /* Outport: '<Root>/NeBPDR_Cnt_BeltSlip_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeBPDR_Cnt_BeltSlip_MFOP'
     */
    (void)Rte_Write_NeBPDR_Cnt_BeltSlip_MFOP_NeBPDR_Cnt_BeltSlip_MFOP
        (BPDR_ac_DW.NeBPDR_Cnt_BeltSlip_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, BPDR_CODE) BPDR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/BPDR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/DSM_Init'
     */
    /* DataStoreWrite: '<S256>/NeBPDR_Cnt_BeltSlip_MFOP' incorporates:
     *  Inport: '<Root>/NeBPDR_Cnt_BeltSlip_MFOP_PM_In'
     */
    (void)Rte_Read_NeBPDR_Cnt_BeltSlip_MFOP_Rx_NeBPDR_Cnt_BeltSlip_MFOP
        (&BPDR_ac_DW.NeBPDR_Cnt_BeltSlip_MFOP);

    /* DataStoreWrite: '<S256>/NeBPDR_phi_PosSlipIntegrated' incorporates:
     *  Inport: '<Root>/NeBPDR_phi_PosSlipIntegrated_PM_In'
     */
    (void)Rte_Read_NeBPDR_phi_PosSlipIntegrated_Rx_NeBPDR_phi_PosSlipIntegrated(
        &BPDR_ac_DW.NeBPDR_phi_PosSlipIntegrated);

    /* DataStoreWrite: '<S256>/NeBPDR_phi_NegSlipIntegrated' incorporates:
     *  Inport: '<Root>/NeBPDR_phi_NegSlipIntegrated_PM_In'
     */
    (void)Rte_Read_NeBPDR_phi_NegSlipIntegrated_Rx_NeBPDR_phi_NegSlipIntegrated(
        &BPDR_ac_DW.NeBPDR_phi_NegSlipIntegrated);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S257>/VeBPDR_phi_PosSlipIntegrated_Out_Init' */
    BPDR_ac_B.OutportBufferForVeBPDR_phi_PosSlipIntegr = 0.0F;

    /* SignalConversion generated from: '<S257>/VeBPDR_phi_NegSlipIntegrated_Out_Init' */
    BPDR_ac_B.OutportBufferForVeBPDR_phi_NegSlipIntegr = 0.0F;

    /* SignalConversion generated from: '<S257>/VeBPDR_M_BeltCapMaxCorrection_Out_Init' */
    BPDR_ac_B.OutportBufferForVeBPDR_M_BeltCapMaxCorre = 0.0F;

    /* SignalConversion generated from: '<S257>/VeBPDR_M_BeltCapMinCorrection_Out_Init' */
    BPDR_ac_B.OutportBufferForVeBPDR_M_BeltCapMinCorre = 0.0F;

    /* SignalConversion generated from: '<S257>/VeBPDR_b_PosSlipDetectedLtchForSTRR_Out_Init' */
    BPDR_ac_B.OutportBufferForVeBPDR_b_PosSlipDetected = false;

    /* SignalConversion generated from: '<S257>/VeBPDR_b_BeltSlipFltInhtStatus_Out_Init' */
    BPDR_ac_B.OutportBufferForVeBPDR_b_BeltSlipFltInht = false;

    /* SignalConversion generated from: '<S257>/VeBPDR_b_NrStartsWSlipFltInhtStatus_Out_Init' */
    BPDR_ac_B.OutportBufferForVeBPDR_b_NrStartsWSlipFl = false;

    /* SignalConversion generated from: '<S257>/VeBPDR_b_BeltSlipFltDtct_Out_Init' */
    BPDR_ac_B.OutportBufferForVeBPDR_b_BeltSlipFltDtct = false;

    /* SignalConversion generated from: '<S257>/VeBPDR_e_FaultSts_HybridGenPerf_Slip' incorporates:
     *  Constant: '<S258>/Constant'
     */
    BPDR_ac_B.OutportBufferForVeBPDR_e_FaultSts_Hybrid = BPDR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S257>/VeBPDR_e_FaultSts_StarterGenMechPerf_Slip' incorporates:
     *  Constant: '<S259>/Constant'
     */
    BPDR_ac_B.OutportBufferForVeBPDR_e_FaultSts_Starte =
        BPDR_ac_ConstB.Constant_b;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeBPDR_e_FaultSts_HybridGenPerf_Slip' incorporates:
     *  SignalConversion generated from: '<S257>/VeBPDR_e_FaultSts_HybridGenPerf_Slip'
     *  SignalConversion generated from: '<S3>/R_VeBPDR_e_FaultSts_HybridGenPerf_Slip'
     */
    (void)Rte_Write_VeBPDR_e_FaultSts_HybridGenPerf_Slip_Value
        (BPDR_ac_B.OutportBufferForVeBPDR_e_FaultSts_Hybrid);

    /* Outport: '<Root>/VeBPDR_e_FaultSts_StarterGenMechPerf_Slip' incorporates:
     *  SignalConversion generated from: '<S257>/VeBPDR_e_FaultSts_StarterGenMechPerf_Slip'
     *  SignalConversion generated from: '<S3>/R_VeBPDR_e_FaultSts_StarterGenMechPerf_Slip'
     */
    (void)Rte_Write_VeBPDR_e_FaultSts_StarterGenMechPerf_Slip_Value
        (BPDR_ac_B.OutportBufferForVeBPDR_e_FaultSts_Starte);

    /* Outport: '<Root>/VeBPDR_M_BeltCapMaxCorrection' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPDR_M_BeltCapMaxCorrection_Out_Init'
     */
    (void)Rte_Write_VeBPDR_M_BeltCapMaxCorrection_Value
        (BPDR_ac_B.OutportBufferForVeBPDR_M_BeltCapMaxCorre);

    /* Outport: '<Root>/VeBPDR_M_BeltCapMinCorrection' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPDR_M_BeltCapMinCorrection_Out_Init'
     */
    (void)Rte_Write_VeBPDR_M_BeltCapMinCorrection_Value
        (BPDR_ac_B.OutportBufferForVeBPDR_M_BeltCapMinCorre);

    /* Outport: '<Root>/VeBPDR_b_BeltSlipFltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPDR_b_BeltSlipFltDtct_Out_Init'
     */
    (void)Rte_Write_VeBPDR_b_BeltSlipFltDtct_Value
        (BPDR_ac_B.OutportBufferForVeBPDR_b_BeltSlipFltDtct);

    /* Outport: '<Root>/VeBPDR_b_BeltSlipFltInhtStatus' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPDR_b_BeltSlipFltInhtStatus_Out_Init'
     */
    (void)Rte_Write_VeBPDR_b_BeltSlipFltInhtStatus_Value
        (BPDR_ac_B.OutportBufferForVeBPDR_b_BeltSlipFltInht);

    /* Outport: '<Root>/VeBPDR_b_NrStartsWSlipFltInhtStatus' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPDR_b_NrStartsWSlipFltInhtStatus_Out_Init'
     */
    (void)Rte_Write_VeBPDR_b_NrStartsWSlipFltInhtStatus_Value
        (BPDR_ac_B.OutportBufferForVeBPDR_b_NrStartsWSlipFl);

    /* Outport: '<Root>/VeBPDR_b_PosSlipDetectedLtchForSTRR' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPDR_b_PosSlipDetectedLtchForSTRR_Out_Init'
     */
    (void)Rte_Write_VeBPDR_b_PosSlipDetectedLtchForSTRR_Value
        (BPDR_ac_B.OutportBufferForVeBPDR_b_PosSlipDetected);

    /* Outport: '<Root>/VeBPDR_phi_NegSlipIntegrated' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPDR_phi_NegSlipIntegrated_Out_Init'
     */
    (void)Rte_Write_VeBPDR_phi_NegSlipIntegrated_Value
        (BPDR_ac_B.OutportBufferForVeBPDR_phi_NegSlipIntegr);

    /* Outport: '<Root>/VeBPDR_phi_PosSlipIntegrated' incorporates:
     *  SignalConversion generated from: '<S3>/VeBPDR_phi_PosSlipIntegrated_Out_Init'
     */
    (void)Rte_Write_VeBPDR_phi_PosSlipIntegrated_Value
        (BPDR_ac_B.OutportBufferForVeBPDR_phi_PosSlipIntegr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, BPDR_CODE) BPDR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/BPDR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S257>/VeBPDR_e_FaultSts_HybridGenPerf_Slip' incorporates:
     *  Constant: '<S258>/Constant'
     */
    BPDR_ac_B.OutportBufferForVeBPDR_e_FaultSts_Hybrid = BPDR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S257>/VeBPDR_e_FaultSts_StarterGenMechPerf_Slip' incorporates:
     *  Constant: '<S259>/Constant'
     */
    BPDR_ac_B.OutportBufferForVeBPDR_e_FaultSts_Starte =
        BPDR_ac_ConstB.Constant_b;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeBPDR_e_FaultSts_HybridGenPerf_Slip' incorporates:
     *  Merge: '<Root>/M_VeBPDR_e_FaultSts_HybridGenPerf_Slip'
     */
    (void)Rte_Write_VeBPDR_e_FaultSts_HybridGenPerf_Slip_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeBPDR_e_FaultSts_StarterGenMechPerf_Slip' incorporates:
     *  Merge: '<Root>/M_VeBPDR_e_FaultSts_StarterGenMechPerf_Slip'
     */
    (void)Rte_Write_VeBPDR_e_FaultSts_StarterGenMechPerf_Slip_Value
        (CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
