/*
 * File: HCCR_ac.c
 *
 * Code generated for Simulink model 'HCCR_ac'.
 *
 * Model version                  : 9.82
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:46:13 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "HCCR_ac.h"
#include "look1_iflf_binlca_16a.h"
#include "look2_iflf_binlca_16a.h"

/* Named constants for Chart: '<S522>/AuxPumpCntrl' */
#if Rte_SysCon_Variant_HCCR_LPresCntrl
#define HCCR_ac_IN_AuxPrime_On         ((uint8)1U)
#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl
#define HCCR_ac_IN_AuxPump_Off         ((uint8)2U)
#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl
#define HCCR_ac_IN_AuxPump_on          ((uint8)3U)
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
#define START_SEC_CALIB_UNSPECIFIED_HCCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(boolean, HCCR_VAR_INIT) HeHCCR_b_EnblClchStRstC1 = 1;/* Referenced by: '<S227>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(boolean, HCCR_VAR_INIT) HeHCCR_b_EnblClchStRstC2 = 1;/* Referenced by: '<S228>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(boolean, HCCR_VAR_INIT) HeHCCR_b_EnblClchStRstC3 = 1;/* Referenced by: '<S229>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_C1STN

static volatile CONST(boolean, HCCR_VAR_INIT) HeHCCR_b_NC1AdptvSpdTmrDsbl = 1;/* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3 && Rte_SysCon_Variant_HCCR_C3STN

static volatile CONST(boolean, HCCR_VAR_INIT) HeHCCR_b_NC3AdptvSpdTmrDsbl = 1;/* Referenced by: '<S149>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2

static volatile CONST(boolean, HCCR_VAR_INIT) HeHCCR_b_TMMRTorqEstOvrdEnbl = 0;/* Referenced by: '<S419>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static volatile CONST(TeHCCR_e_MtrXFrontRearMapping, HCCR_VAR_INIT)
    HeHCCR_e_MtrX_to_EOPFront = CeHCCR_e_MtrC;/* Referenced by: '<S56>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static volatile CONST(TeHCCR_e_MtrXFrontRearMapping, HCCR_VAR_INIT)
    HeHCCR_e_MtrX_to_EOPRear = CeHCCR_e_MtrB;/* Referenced by: '<S57>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3 || Rte_SysCon_Variant_HCCR_LPresCntrl || Rte_SysCon_Variant_HCCR_PmpCEDMGen2 || Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) HeHCCR_t_MedTED_dT = 0.02F;/* Referenced by:
                                                                      * '<S230>/Calib'
                                                                      * '<S22>/Calib'
                                                                      * '<S38>/Calib'
                                                                      * '<S518>/Calib'
                                                                      * '<S188>/Calib'
                                                                      * '<S207>/Calib'
                                                                      * '<S537>/Calib'
                                                                      * '<S557>/Calib'
                                                                      * '<S568>/Calib'
                                                                      * '<S150>/Calib'
                                                                      * '<S401>/Calib'
                                                                      * '<S412>/Calib'
                                                                      * '<S92>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_M_C1_MinActTorq[5] =
{
    5.0F, 5.0F, 5.0F, 5.0F, 10.0F
} ;                                    /* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_M_C1_MinLockedTorq[10] =
{
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F
} ;                                    /* Referenced by: '<S74>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_M_C2_MinActTorq[5] =
{
    10.0F, 10.0F, 10.0F, 10.0F, 10.0F
} ;                                    /* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_M_C2_MinLockedTorq[10] =
{
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F
} ;                                    /* Referenced by: '<S117>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_M_C3_MinActTorq[5] =
{
    10.0F, 10.0F, 10.0F, 10.0F, 10.0F
} ;                                    /* Referenced by: '<S133>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_M_C3_MinLockedTorq[10] =
{
    20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F
} ;                                    /* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_dn_MaxClNearSyncRt[5] =
{
    3000.0F, 3000.0F, 3000.0F, 3000.0F, 3000.0F
} ;                                    /* Referenced by:
                                        * '<S75>/Calib'
                                        * '<S118>/Calib'
                                        * '<S135>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_dn_MaxClSlRt[10] =
{
    3000.0F, 4000.0F, 3000.0F, 4000.0F, 3000.0F, 4000.0F, 3000.0F, 4000.0F,
    3000.0F, 4000.0F
} ;                                    /* Referenced by:
                                        * '<S76>/Calib'
                                        * '<S119>/Calib'
                                        * '<S136>/Calib'
                                        */

#endif

#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_ClchEngy) || (Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy)

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_h_ClchMassSpecHeat[2] =
{
    450.042328F, 307.10672F
} ;                                    /* Referenced by:
                                        * '<S189>/Calib'
                                        * '<S208>/Calib'
                                        */

#endif

#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_ClchEngy) || (Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy)

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_h_H_SurfaceArea[12] =
{
    445.628815F, 44.5628815F, 44.5628815F, 273.141815F, 27.3141804F, 27.3141804F,
    81.2007217F, 8.12007F, 8.12007F, 123.645538F, 12.3645496F, 12.3645496F
} ;                                    /* Referenced by:
                                        * '<S193>/Calib'
                                        * '<S212>/Calib'
                                        */

#endif

#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_ClchEngy) || (Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy)

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_h_HeatTransferIndex[6] =
{
    13.0F, 12.0F, 10.5F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S190>/Calib'
                                        * '<S209>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_n_C1_MaxLockedSl[10] =
{
    125.0F, 200.0F, 125.0F, 200.0F, 300.0F, 400.0F, 300.0F, 400.0F, 100.0F,
    200.0F
} ;                                    /* Referenced by: '<S77>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_n_C1_MaxLockedSl_Fail[2] =
{
    -1.0F, -1.0F
} ;                                    /* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_n_C1_MaxNearSyncSl[5] =
{
    500.0F, 500.0F, 150.0F, 150.0F, 150.0F
} ;                                    /* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_n_C2_MaxLockedSl[10] =
{
    125.0F, 200.0F, 125.0F, 200.0F, 300.0F, 400.0F, 300.0F, 400.0F, 100.0F,
    200.0F
} ;                                    /* Referenced by: '<S120>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_n_C2_MaxLockedSl_Fail[2] =
{
    -1.0F, -1.0F
} ;                                    /* Referenced by: '<S121>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_n_C2_MaxNearSyncSl[5] =
{
    175.0F, 175.0F, 550.0F, 550.0F, 150.0F
} ;                                    /* Referenced by: '<S122>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_n_C3_MaxLockedSl[10] =
{
    125.0F, 200.0F, 125.0F, 200.0F, 300.0F, 400.0F, 300.0F, 400.0F, 100.0F,
    200.0F
} ;                                    /* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_n_C3_MaxLockedSl_Fail[2] =
{
    -1.0F, -1.0F
} ;                                    /* Referenced by: '<S138>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_n_C3_MaxNearSyncSl[5] =
{
    175.0F, 175.0F, 550.0F, 550.0F, 150.0F
} ;                                    /* Referenced by: '<S139>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_t_MinClLockedHold[5] =
{
    0.05F, 0.05F, 0.025F, 0.025F, 0.05F
} ;                                    /* Referenced by:
                                        * '<S80>/Calib'
                                        * '<S123>/Calib'
                                        * '<S140>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

static volatile CONST(float32, HCCR_VAR_INIT) KaHCCR_t_MinClNearSyncHold[5] =
{
    0.075F, 0.075F, 0.075F, 0.075F, 0.075F
} ;                                    /* Referenced by:
                                        * '<S81>/Calib'
                                        * '<S124>/Calib'
                                        * '<S141>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_Cnt_C2CShfts_TchPtLrn =
    100.0F;                            /* Referenced by:
                                        * '<S320>/Calib'
                                        * '<S396>/Calib'
                                        * '<S407>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_K_AuxPumpVolPerRev = 5.5F;/* Referenced by:
                                                                      * '<S501>/Calib'
                                                                      * '<S541>/Calib'
                                                                      * '<S549>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_K_MainPumpVolPerRev = 8.25F;/* Referenced by: '<S515>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_ClchEngy

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_M_C1_DeltaEMaxOvrrd = 0.0F;/* Referenced by: '<S172>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_M_C1_TTQRTorqEstOvrdVal =
    0.0F;                              /* Referenced by: '<S420>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_M_C1_TorqEstFillDtctd =
    0.1F;                              /* Referenced by: '<S344>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_M_C1_TorqEstOvrrd = 0.0F;/* Referenced by: '<S326>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_ClchEngy

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_M_C2_DeltaEMaxOvrrd = 0.0F;/* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_M_C2_TTQRTorqEstOvrdVal =
    0.0F;                              /* Referenced by: '<S421>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_M_C2_TorqEstFillDtctd =
    0.1F;                              /* Referenced by: '<S345>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_M_C2_TorqEstOvrrd = 0.0F;/* Referenced by: '<S331>/Calib' */

#endif

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_M_C3_MaxEnergy = 0.0F;/* Referenced by: '<S598>/Calib' */

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_M_C3_TTQRTorqEstOvrdVal =
    0.0F;                              /* Referenced by: '<S422>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_M_C3_TorqEstFillDtctd =
    0.1F;                              /* Referenced by: '<S346>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_M_C3_TorqEstOvrrd = 0.0F;/* Referenced by: '<S336>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1_C2_C3_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_Pct_AccelPdlPosnOvrdVal =
    0.0F;                              /* Referenced by: '<S423>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_Pct_PdlThrshForFillDtct =
    1.0F;                              /* Referenced by: '<S376>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_ClchEngy

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_T_C1TempOvrdVal = 0.0F;/* Referenced by: '<S587>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_ClchEngy

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_T_C1_MaxTemp = 180.0F;/* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_ClchEngy

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_T_C2TempOvrdVal = 0.0F;/* Referenced by: '<S588>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_T_C2_MaxTemp = 180.0F;/* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1_C2_C3_LPresCntrl_ClchEngy

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_T_TransOilTempOvrdVal =
    0.0F;                              /* Referenced by: '<S424>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_T_dryRunMinTempEOPA = 70.0F;/* Referenced by: '<S23>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_T_dryRunMinTempEOPB = 70.0F;/* Referenced by: '<S39>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_V_LowVolDsrdFlwOvrd = 0.1F;/* Referenced by: '<S514>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_V_TotalTransFluidVol =
    3500.0F;                           /* Referenced by:
                                        * '<S519>/Calib'
                                        * '<S506>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_HCCR_C1_C2_C3_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_AccelPdlPosnOvrdEnbl = 0;/* Referenced by: '<S425>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_AuxPmpSpdDsrdRwOvrdEnbl =
    0;                                 /* Referenced by: '<S546>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_AuxPumpAvailOvrdEnbl = 0;/* Referenced by: '<S426>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_AuxPumpAvailOvrdVal = 0;/* Referenced by: '<S427>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_AuxPumpSpdOvrdEnbl = 0;/* Referenced by: '<S428>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_BrkPdlDscInpStOvrdEnbl =
    0;                                 /* Referenced by: '<S429>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_ClchEngy

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C1TempOvrdEnbl = 0;/* Referenced by: '<S589>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_ClchEngy

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C1_DeltaEMaxOvrrdEnbl = 0;/* Referenced by: '<S176>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C1_FillCmndOvrdEnbl = 0;/* Referenced by: '<S430>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C1_ForceTchPtDtct = 0;/* Referenced by: '<S377>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1_ClchEngy

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C1_SlipSpeedOvrdEnbl = 0;/* Referenced by: '<S431>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C1_StatControlOvrdEnbl =
    0;                                 /* Referenced by: '<S432>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C1_TRNRStatOvrdEnbl = 0;/* Referenced by: '<S433>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C1_TTQRTorqEstOvrdEnbl =
    0;                                 /* Referenced by: '<S434>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C1_TchPtDtctd_Ovrd = 0;/* Referenced by: '<S378>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C1_TchPtEst_Enbl = 0;/* Referenced by: '<S379>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C1_TorqEstOvrrdEnbl = 0;/* Referenced by: '<S327>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C1_UseShftCntForLrn = 0;/* Referenced by: '<S397>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C1_VirtualClch = 0;/* Referenced by: '<S347>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C2CShiftActiveOvrdEnbl =
    0;                                 /* Referenced by: '<S435>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C2CShiftActiveOvrdVal = 0;/* Referenced by: '<S436>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_ClchEngy

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C2TempOvrdEnbl = 0;/* Referenced by: '<S590>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_ClchEngy

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C2_DeltaEMaxOvrrdEnbl = 0;/* Referenced by: '<S177>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C2_FillCmndOvrdEnbl = 0;/* Referenced by: '<S437>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C2_ForceTchPtDtct = 0;/* Referenced by: '<S380>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2_ClchEngy

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C2_SlipSpeedOvrdEnbl = 0;/* Referenced by: '<S438>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C2_StatControlOvrdEnbl =
    0;                                 /* Referenced by: '<S439>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C2_TRNRStatOvrdEnbl = 0;/* Referenced by: '<S440>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C2_TTQRTorqEstOvrdEnbl =
    0;                                 /* Referenced by: '<S441>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C2_TchPtDtctd_Ovrd = 0;/* Referenced by: '<S381>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C2_TchPtEst_Enbl = 0;/* Referenced by: '<S382>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C2_TorqEstOvrrdEnbl = 0;/* Referenced by: '<S332>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C2_UseShftCntForLrn = 0;/* Referenced by: '<S408>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C2_VirtualClch = 0;/* Referenced by: '<S348>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C3_FillCmndOvrdEnbl = 0;/* Referenced by: '<S442>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C3_SlipSpeedOvrdEnbl = 0;/* Referenced by: '<S443>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C3_StatControlOvrdEnbl =
    0;                                 /* Referenced by: '<S444>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C3_TRNRStatOvrdEnbl = 0;/* Referenced by: '<S445>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C3_TTQRTorqEstOvrdEnbl =
    0;                                 /* Referenced by: '<S446>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C3_TorqEstOvrrdEnbl = 0;/* Referenced by: '<S337>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_C3_VirtualClch = 1;/* Referenced by: '<S349>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_Clch1_StatOvrrdEnbl = 0;/* Referenced by: '<S235>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_Clch2_StatOvrrdEnbl = 0;/* Referenced by: '<S261>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_Clch3_StatOvrrdEnbl = 0;/* Referenced by: '<S287>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_EngStartStopStOvrdEnbl =
    0;                                 /* Referenced by: '<S447>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_InputAcceltnOvrdEnbl = 0;/* Referenced by: '<S448>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_InputSpdDsrdM1OvrdEnbl =
    0;                                 /* Referenced by: '<S449>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_InputSpdDsrdM2OvrdEnbl =
    0;                                 /* Referenced by: '<S450>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntr_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_InputSpeedOvrdEnbl = 0;/* Referenced by: '<S451>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_LinePresMinOvrrdEnbl = 1;/* Referenced by: '<S533>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_MtrAFlowCmdOvrdEnbl = 0;/* Referenced by: '<S452>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_MtrBFlowCmdOvrdEnbl = 0;/* Referenced by: '<S453>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_NC1dotOvrdEnbl = 0;/* Referenced by: '<S454>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_NC2dotOvrdEnbl = 0;/* Referenced by: '<S455>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_NC3dotOvrdEnbl = 0;/* Referenced by: '<S456>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntr_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_OutputSpdOvrdEnbl = 0;/* Referenced by: '<S457>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_PropSysActvOvrdEnbl = 0;/* Referenced by: '<S458>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_PropSysActvOvrdVal = 0;/* Referenced by: '<S459>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1_C3_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_RngStOvrdEnbl = 0;/* Referenced by: '<S460>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_RstAllC2C_ShftCnt = 0;/* Referenced by: '<S321>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_RstTchPtDtctdFlg = 0;/* Referenced by: '<S322>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_RunCrankActiveOvrdEnbl =
    0;                                 /* Referenced by: '<S461>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_RunCrankActiveOvrdVal = 0;/* Referenced by: '<S462>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_RunCrank_AuxPumpEnbl = 1;/* Referenced by: '<S581>/Calib' */

#endif

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_SCA1_ActuatorSt_OvrdEnbl =
    0;                                 /* Referenced by: '<S599>/Calib' */
static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_SCA1_StatOvrdEnbl = 0;/* Referenced by: '<S600>/Calib' */
static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_SCA2_ActuatorSt_OvrdEnbl =
    0;                                 /* Referenced by: '<S601>/Calib' */
static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_SCA2_StatOvrdEnbl = 0;/* Referenced by: '<S602>/Calib' */

#if Rte_SysCon_Variant_HCCR_C1STN_C3STN

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_TRNRGearRatMonOvrdEnbl =
    0;                                 /* Referenced by: '<S463>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1STN_C3STN

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_TRNRGearRatMonOvrdVal = 1;/* Referenced by: '<S464>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1_C2_C3_LPresCntrl_ClchEngy

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_TransOilTempOvrdEnbl = 0;/* Referenced by: '<S465>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_TrnOffAuxPmp_OvrrdEnbl =
    0;                                 /* Referenced by: '<S558>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_TrnOffAuxPmp_OvrrdVal = 0;/* Referenced by: '<S559>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_TrnOnAuxPmp_OvrrdEnbl = 0;/* Referenced by: '<S569>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_TrnOnAuxPmp_OvrrdVal = 0;/* Referenced by: '<S570>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

static volatile CONST(boolean, HCCR_VAR_INIT) KeHCCR_b_UseTransOilTemp = 0;/* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dV_Aux2MainPmpFlowMargin =
    20.0F;                             /* Referenced by: '<S571>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dV_AuxPumpTurnOffThresh =
    20.0F;                             /* Referenced by: '<S560>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dV_AuxPumpTurnOnThresh =
    -20.0F;                            /* Referenced by: '<S572>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dV_Main2AuxPmpFlowMargin =
    20.0F;                             /* Referenced by: '<S561>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dV_MinAuxPumpTurnOffCap =
    10.0F;                             /* Referenced by: '<S562>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dV_MinAuxPumpTurnOnCap =
    20.0F;                             /* Referenced by: '<S573>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dV_MtrAFlowCmdOvrdVal =
    0.0F;                              /* Referenced by: '<S466>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dV_MtrBFlowCmdOvrdVal =
    0.0F;                              /* Referenced by: '<S467>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dV_dryRunFlowStepEOPA =
    3.0F;                              /* Referenced by: '<S24>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dV_dryRunFlowStepEOPB =
    3.0F;                              /* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dV_dryRunMaxFlowEOPA =
    50.0F;                             /* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dV_dryRunMaxFlowEOPB =
    50.0F;                             /* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dV_dryRunRcvryFlowEOPA =
    4.0F;                              /* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dV_dryRunRcvryFlowEOPB =
    4.0F;                              /* Referenced by: '<S42>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dn_C1_NiDotThrsh_KissPt =
    5.0F;                              /* Referenced by: '<S383>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dn_C2_NiDotThrsh_KissPt =
    5.0F;                              /* Referenced by: '<S384>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dn_InputAcceltnOvrdVal =
    0.0F;                              /* Referenced by: '<S468>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dn_NC1dotOvrdVal = 0.0F;/* Referenced by: '<S469>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dn_NC2dotOvrdVal = 0.0F;/* Referenced by: '<S470>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_dn_NC3dotOvrdVal = 0.0F;/* Referenced by: '<S471>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(TeBRKR_e_BrkPdl_Stat, HCCR_VAR_INIT)
    KeHCCR_e_BrkPdlDscInpStOvrdVal = CeBRKR_e_BrkNotApplied;/* Referenced by: '<S472>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(TeHSER_e_ClchFillCmnd, HCCR_VAR_INIT)
    KeHCCR_e_C1_FillCmndOvrdVal = CeHSER_e_ClchExhstCmpltly;/* Referenced by: '<S473>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(TeHSER_e_ClutchStatCntrl, HCCR_VAR_INIT)
    KeHCCR_e_C1_StatControlOvrdVal = CeHSER_e_ClchStatCntrl_Else;/* Referenced by: '<S474>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(TeHCCR_e_ClutchStatus, HCCR_VAR_INIT)
    KeHCCR_e_C1_TRNRStatOvrdVal = CeHCCR_e_ClReleased;/* Referenced by: '<S475>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(TeHSER_e_ClchFillCmnd, HCCR_VAR_INIT)
    KeHCCR_e_C2_FillCmndOvrdVal = CeHSER_e_ClchExhstCmpltly;/* Referenced by: '<S476>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(TeHSER_e_ClutchStatCntrl, HCCR_VAR_INIT)
    KeHCCR_e_C2_StatControlOvrdVal = CeHSER_e_ClchStatCntrl_Else;/* Referenced by: '<S477>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(TeHCCR_e_ClutchStatus, HCCR_VAR_INIT)
    KeHCCR_e_C2_TRNRStatOvrdVal = CeHCCR_e_ClActuated;/* Referenced by: '<S478>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(TeHSER_e_ClchFillCmnd, HCCR_VAR_INIT)
    KeHCCR_e_C3_FillCmndOvrdVal = CeHSER_e_ClchExhstCmpltly;/* Referenced by: '<S479>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(TeHSER_e_ClutchStatCntrl, HCCR_VAR_INIT)
    KeHCCR_e_C3_StatControlOvrdVal = CeHSER_e_ClchStatCntrl_Else;/* Referenced by: '<S480>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(TeHCCR_e_ClutchStatus, HCCR_VAR_INIT)
    KeHCCR_e_C3_TRNRStatOvrdVal = CeHCCR_e_ClActuated;/* Referenced by: '<S481>/Calib' */

#endif

static volatile CONST(TeHCCR_e_ClutchStatus, HCCR_VAR_INIT)
    KeHCCR_e_Clch1_DefaultStat = CeHCCR_e_ClReleased;/* Referenced by: '<S603>/Calib' */

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(TeHCCR_e_ClutchStatus, HCCR_VAR_INIT)
    KeHCCR_e_Clch1_LockStat = CeHCCR_e_ClActuated;/* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(TeHCCR_e_ClutchStatus, HCCR_VAR_INIT)
    KeHCCR_e_Clch1_StatOvrrd = CeHCCR_e_ClReleased;/* Referenced by: '<S236>/Calib' */

#endif

static volatile CONST(TeHCCR_e_ClutchStatus, HCCR_VAR_INIT)
    KeHCCR_e_Clch2_DefaultStat = CeHCCR_e_ClReleased;/* Referenced by: '<S604>/Calib' */

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(TeHCCR_e_ClutchStatus, HCCR_VAR_INIT)
    KeHCCR_e_Clch2_StatOvrrd = CeHCCR_e_ClReleased;/* Referenced by: '<S262>/Calib' */

#endif

static volatile CONST(TeHCCR_e_ClutchStatus, HCCR_VAR_INIT)
    KeHCCR_e_Clch3_DefaultStat = CeHCCR_e_ClReleased;/* Referenced by: '<S605>/Calib' */

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(TeHCCR_e_ClutchStatus, HCCR_VAR_INIT)
    KeHCCR_e_Clch3_StatOvrrd = CeHCCR_e_ClReleased;/* Referenced by: '<S288>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(TeESSR_e_EngStartStopSt, HCCR_VAR_INIT)
    KeHCCR_e_EngStartStopStOvrdVal = CeESSR_e_EngOff;/* Referenced by: '<S482>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1_C3_TPEst

static volatile CONST(TeHSER_e_RngSt, HCCR_VAR_INIT) KeHCCR_e_RngStOvrdVal =
    CeHSER_e_Neutral;                  /* Referenced by: '<S483>/Calib' */

#endif

static volatile CONST(TeHCCR_e_ActuatorSt, HCCR_VAR_INIT)
    KeHCCR_e_SCA1_ActuatorSt_OvrdVal = CeHCCR_e_SCA_Initializing_Md;/* Referenced by: '<S606>/Calib' */
static volatile CONST(TeHCCR_e_ActuatorSt, HCCR_VAR_INIT)
    KeHCCR_e_SCA1_StatOvrdVal = CeHCCR_e_SCA_Initializing_Md;/* Referenced by: '<S607>/Calib' */
static volatile CONST(TeHCCR_e_ActuatorSt, HCCR_VAR_INIT)
    KeHCCR_e_SCA2_ActuatorSt_OvrdVal = CeHCCR_e_SCA_Initializing_Md;/* Referenced by: '<S608>/Calib' */
static volatile CONST(TeHCCR_e_ActuatorSt, HCCR_VAR_INIT)
    KeHCCR_e_SCA2_StatOvrdVal = CeHCCR_e_SCA_Initializing_Md;/* Referenced by: '<S609>/Calib' */

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_l_C1_PosnDelta_Thresh =
    0.035F;                            /* Referenced by: '<S385>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_l_C2_PosnDelta_Thresh =
    0.035F;                            /* Referenced by: '<S386>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_n_AuxPmpSpdDsrdRwOvrdVal =
    10.0F;                             /* Referenced by: '<S547>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_n_AuxPumpSpdMin = 0.0F;/* Referenced by: '<S550>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_n_AuxPumpSpdOvrdVal = 0.0F;/* Referenced by: '<S484>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_n_C1_MaxNearSyncSl_Fail =
    -1.0F;                             /* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_n_C1_NiThrsh_KissPt = 20.0F;/* Referenced by: '<S387>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1_ClchEngy

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_n_C1_SlipSpeedOvrdVal =
    0.0F;                              /* Referenced by: '<S485>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_n_C2_MaxNearSyncSl_Fail =
    -1.0F;                             /* Referenced by: '<S125>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_n_C2_NiThrsh_KissPt = 20.0F;/* Referenced by: '<S388>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C2_ClchEngy

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_n_C2_SlipSpeedOvrdVal =
    0.0F;                              /* Referenced by: '<S486>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_n_C3_MaxNearSyncSl_Fail =
    -1.0F;                             /* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_n_C3_SlipSpeedOvrdVal =
    0.0F;                              /* Referenced by: '<S487>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_n_InputSpdDsrdM1OvrdVal =
    0.0F;                              /* Referenced by: '<S488>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_n_InputSpdDsrdM2OvrdVal =
    0.0F;                              /* Referenced by: '<S489>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntr_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_n_InputSpeedOvrdVal = 0.0F;/* Referenced by: '<S490>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_C1STN

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_n_NC1MinMaxLckdSI = 5.0F;/* Referenced by:
                                                                      * '<S103>/Calib'
                                                                      * '<S105>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HCCR_C3 && Rte_SysCon_Variant_HCCR_C3STN

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_n_NC3MinMaxLckdSI = 5.0F;/* Referenced by:
                                                                      * '<S161>/Calib'
                                                                      * '<S163>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_n_OutSpdThreshForTchPtEst =
    2.0F;                              /* Referenced by: '<S389>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntr_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_n_OutputSpdOvrdVal = 0.0F;/* Referenced by: '<S491>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_n_PumpOffVal = 0.0F;/* Referenced by: '<S577>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_p_C1_MaxPressAllwd =
    3000.0F;                           /* Referenced by: '<S390>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_p_C1_PresDelta_Thresh =
    200.0F;                            /* Referenced by: '<S391>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_p_C2_MinPressAllwd =
    9000.0F;                           /* Referenced by: '<S392>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_p_C2_PresDelta_Thresh =
    200.0F;                            /* Referenced by: '<S393>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_p_MxLnPresToTrnOffAuxPmp =
    2000.0F;                           /* Referenced by: '<S563>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_p_MxLnPresToTrnOnAuxPmp =
    1200.0F;                           /* Referenced by: '<S574>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_C1STN

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_r_C1_FctrMnHldTm_STN =
    -0.001F;                           /* Referenced by: '<S108>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3 && Rte_SysCon_Variant_HCCR_C3STN

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_r_C3_FctrMnHldTm_STN =
    -0.001F;                           /* Referenced by: '<S166>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_r_MainPumpGR2No = 1.15F;/* Referenced by: '<S516>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_C1STN

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_r_NC1FctrMaxLckdSI = 0.1F;/* Referenced by:
                                                                      * '<S104>/Calib'
                                                                      * '<S106>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_C1STN

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_r_NC1FctrMaxLckdSI_STN =
    0.05F;                             /* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3 && Rte_SysCon_Variant_HCCR_C3STN

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_r_NC3FctrMaxLckdSI = 0.1F;/* Referenced by:
                                                                      * '<S162>/Calib'
                                                                      * '<S164>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HCCR_C3 && Rte_SysCon_Variant_HCCR_C3STN

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_r_NC3FctrMaxLckdSI_STN =
    0.05F;                             /* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_t_AuxPmpTurnOffDelay = 0.1F;/* Referenced by: '<S564>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_t_AuxPmpTurnOnPulse = 0.1F;/* Referenced by: '<S575>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_t_AuxPumpAvailDelay = 1.0F;/* Referenced by: '<S538>/Calib' */

#endif

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_t_C1_FillTime = 0.35F;/* Referenced by: '<S610>/Calib' */

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_t_C1_FillTmDeltaThresh =
    0.025F;                            /* Referenced by: '<S394>/Calib' */

#endif

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_t_C2_FillTime = 0.1F;/* Referenced by: '<S611>/Calib' */

#if Rte_SysCon_Variant_HCCR_TPEst

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_t_C2_FillTmDeltaThresh =
    0.025F;                            /* Referenced by: '<S395>/Calib' */

#endif

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_t_C3_FillTime = 0.0F;/* Referenced by: '<S612>/Calib' */

#if Rte_SysCon_Variant_HCCR_ClchEngy

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_t_EngOffTimeLmt = 120.0F;/* Referenced by:
                                                                      * '<S591>/Calib'
                                                                      * '<S593>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_C1STN

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_t_MaxTm_C1MaxLckdSL = 0.1F;/* Referenced by: '<S93>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_C3 && Rte_SysCon_Variant_HCCR_C3STN

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_t_MaxTm_C3MaxLckdSL = 0.1F;/* Referenced by: '<S151>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_t_dryRunMinTimeEOPA = 2.0F;/* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_t_dryRunMinTimeEOPB = 2.0F;/* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_t_dryRunStepTimeEOPA = 1.0F;/* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static volatile CONST(float32, HCCR_VAR_INIT) KeHCCR_t_dryRunStepTimeEOPB = 1.0F;/* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KtHCCR_K_AuxPumpLeakage[5] =
{
    0.0F, 0.1F, 0.2F, 0.25F, 0.3F
} ;                                    /* Referenced by:
                                        * '<S499>/Vector'
                                        * '<S551>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KtHCCR_K_AuxPumpVolumetricEff[25] =
{
    0.88F, 0.89F, 0.895F, 0.9F, 0.91F, 0.87F, 0.88F, 0.885F, 0.89F, 0.9F, 0.85F,
    0.86F, 0.865F, 0.875F, 0.88F, 0.84F, 0.85F, 0.855F, 0.86F, 0.87F, 0.83F,
    0.84F, 0.845F, 0.85F, 0.86F
} ;                                    /* Referenced by:
                                        * '<S502>/Vector'
                                        * '<S542>/Vector'
                                        * '<S552>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KtHCCR_K_Flow_UpperSump[6] =
{
    0.2F, 0.35F, 0.7F, 0.75F, 0.8F, 0.85F
} ;                                    /* Referenced by: '<S507>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KtHCCR_K_MainPumpLeakage[5] =
{
    0.0F, 0.1F, 0.2F, 0.25F, 0.3F
} ;                                    /* Referenced by: '<S500>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KtHCCR_K_MainPumpVolumetricEff[25]
    =
{
    0.88F, 0.89F, 0.895F, 0.9F, 0.91F, 0.87F, 0.88F, 0.885F, 0.89F, 0.9F, 0.85F,
    0.86F, 0.865F, 0.875F, 0.88F, 0.84F, 0.85F, 0.855F, 0.86F, 0.87F, 0.83F,
    0.84F, 0.845F, 0.85F, 0.86F
} ;                                    /* Referenced by: '<S517>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KtHCCR_K_TransitVolFactor[49] =
{
    0.38F, 0.39F, 0.4F, 0.41F, 0.42F, 0.42F, 0.42F, 0.4F, 0.42F, 0.44F, 0.47F,
    0.5F, 0.5F, 0.5F, 0.5F, 0.52F, 0.54F, 0.57F, 0.6F, 0.6F, 0.6F, 0.6F, 0.62F,
    0.64F, 0.67F, 0.7F, 0.7F, 0.7F, 0.7F, 0.72F, 0.74F, 0.77F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.81F, 0.82F, 0.83F, 0.84F, 0.84F, 0.84F, 0.8F, 0.81F, 0.82F, 0.83F,
    0.84F, 0.84F, 0.84F
} ;                                    /* Referenced by: '<S508>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static volatile CONST(float32, HCCR_VAR_INIT) KtHCCR_dV_LubFlowEOPA[5] =
{
    4.0F, 4.0F, 4.0F, 4.0F, 4.0F
} ;                                    /* Referenced by: '<S29>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static volatile CONST(float32, HCCR_VAR_INIT) KtHCCR_dV_LubFlowEOPB[5] =
{
    4.0F, 4.0F, 4.0F, 4.0F, 4.0F
} ;                                    /* Referenced by: '<S45>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KtHCCR_dV_Ni_No_BaseLub[49] =
{
    0.0F, 75.0F, 75.0F, 70.0F, 45.0F, 0.0F, 0.0F, 0.0F, 0.0F, 90.0F, 100.0F,
    120.0F, 130.0F, 0.0F, 0.0F, 60.0F, 65.0F, 65.0F, 70.0F, 70.0F, 0.0F, 0.0F,
    100.0F, 105.0F, 105.0F, 110.0F, 110.0F, 0.0F, 0.0F, 95.0F, 100.0F, 105.0F,
    110.0F, 110.0F, 0.0F, 0.0F, 90.0F, 95.0F, 95.0F, 100.0F, 100.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S509>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KtHCCR_n_AuxPumpPrimeSpd[6] =
{
    450.0F, 550.0F, 650.0F, 750.0F, 750.0F, 800.0F
} ;                                    /* Referenced by: '<S579>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KtHCCR_n_AuxPumpSpdMax[6] =
{
    500.0F, 800.0F, 2200.0F, 3000.0F, 3500.0F, 3500.0F
} ;                                    /* Referenced by: '<S553>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KtHCCR_n_MaxAuxPumpSpd[6] =
{
    500.0F, 800.0F, 2000.0F, 2700.0F, 3500.0F, 3500.0F
} ;                                    /* Referenced by: '<S543>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(float32, HCCR_VAR_INIT) KtHCCR_t_C1MinNearSyncNLockedTime
    [25] =
{
    0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F,
    0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F,
    0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F
} ;                                    /* Referenced by: '<S237>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(float32, HCCR_VAR_INIT) KtHCCR_t_C2MinNearSyncNLockedTime
    [25] =
{
    0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F,
    0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F,
    0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F
} ;                                    /* Referenced by: '<S263>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(float32, HCCR_VAR_INIT) KtHCCR_t_C3MinNearSyncNLockedTime
    [25] =
{
    0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F,
    0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F,
    0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F, 0.025F
} ;                                    /* Referenced by: '<S289>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KtHCCR_t_DrySump_Time[7] =
{
    150.0F, 700.0F, 550.0F, 450.0F, 250.0F, 150.0F, 50.0F
} ;                                    /* Referenced by: '<S510>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KxHCCR_K_AuxPumpLeakage[5] =
{
    -40.0F, 0.0F, 30.0F, 75.0F, 120.0F
} ;                                    /* Referenced by:
                                        * '<S499>/Vector'
                                        * '<S551>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KxHCCR_K_AuxPumpVolumetricEff[5] =
{
    -40.0F, 0.0F, 32.0F, 74.0F, 130.0F
} ;                                    /* Referenced by:
                                        * '<S502>/Vector'
                                        * '<S542>/Vector'
                                        * '<S552>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KxHCCR_K_Flow_UpperSump[6] =
{
    -40.0F, 0.1F, 40.0F, 80.0F, 120.0F, 150.0F
} ;                                    /* Referenced by: '<S507>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KxHCCR_K_MainPumpLeakage[5] =
{
    -40.0F, 0.0F, 30.0F, 75.0F, 120.0F
} ;                                    /* Referenced by: '<S500>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KxHCCR_K_MainPumpVolumetricEff[5] =
{
    -40.0F, 0.0F, 32.0F, 74.0F, 130.0F
} ;                                    /* Referenced by: '<S517>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KxHCCR_K_TransitVolFactor[7] =
{
    -11.0F, 0.0F, 1000.0F, 2000.0F, 4000.0F, 6000.0F, 6100.0F
} ;                                    /* Referenced by: '<S508>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static volatile CONST(float32, HCCR_VAR_INIT) KxHCCR_dV_LubFlowEOPA[5] =
{
    0.0F, 1000.0F, 4000.0F, 8000.0F, 16000.0F
} ;                                    /* Referenced by: '<S29>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static volatile CONST(float32, HCCR_VAR_INIT) KxHCCR_dV_LubFlowEOPB[5] =
{
    0.0F, 1000.0F, 4000.0F, 8000.0F, 16000.0F
} ;                                    /* Referenced by: '<S45>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KxHCCR_dV_Ni_No_BaseLub[7] =
{
    -11.0F, 0.0F, 700.0F, 1100.0F, 2000.0F, 3000.0F, 3100.0F
} ;                                    /* Referenced by: '<S509>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KxHCCR_n_AuxPumpPrimeSpd[6] =
{
    -40.0F, 0.0F, 32.0F, 74.0F, 100.0F, 130.0F
} ;                                    /* Referenced by: '<S579>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KxHCCR_n_AuxPumpSpdMax[6] =
{
    -40.0F, 0.1F, 32.0F, 74.0F, 130.0F, 150.0F
} ;                                    /* Referenced by: '<S553>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KxHCCR_n_MaxAuxPumpSpd[6] =
{
    -40.0F, 0.1F, 40.0F, 80.0F, 120.0F, 150.0F
} ;                                    /* Referenced by: '<S543>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(float32, HCCR_VAR_INIT) KxHCCR_t_C1MinNearSyncNLockedTime
    [5] =
{
    20.0F, 30.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S237>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(float32, HCCR_VAR_INIT) KxHCCR_t_C2MinNearSyncNLockedTime
    [5] =
{
    20.0F, 30.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S263>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(float32, HCCR_VAR_INIT) KxHCCR_t_C3MinNearSyncNLockedTime
    [5] =
{
    20.0F, 30.0F, 60.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S289>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KxHCCR_t_DrySump_Time[7] =
{
    -20.0F, 0.1F, 10.0F, 30.0F, 50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S510>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KyHCCR_K_AuxPumpVolumetricEff[5] =
{
    500.0F, 1000.0F, 1500.0F, 2500.0F, 3500.0F
} ;                                    /* Referenced by:
                                        * '<S502>/Vector'
                                        * '<S542>/Vector'
                                        * '<S552>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KyHCCR_K_MainPumpVolumetricEff[5] =
{
    500.0F, 1000.0F, 1500.0F, 2500.0F, 3500.0F
} ;                                    /* Referenced by: '<S517>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KyHCCR_K_TransitVolFactor[7] =
{
    -100.0F, 0.0F, 300.0F, 500.0F, 800.0F, 1500.0F, 2000.0F
} ;                                    /* Referenced by: '<S508>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static volatile CONST(float32, HCCR_VAR_INIT) KyHCCR_dV_Ni_No_BaseLub[7] =
{
    -100.0F, 0.0F, 50.0F, 100.0F, 200.0F, 380.0F, 400.0F
} ;                                    /* Referenced by: '<S509>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static volatile CONST(float32, HCCR_VAR_INIT) KyHCCR_t_C1MinNearSyncNLockedTime
    [5] =
{
    0.05F, 1.0F, 2.0F, 5.0F, 6.0F
} ;                                    /* Referenced by: '<S237>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static volatile CONST(float32, HCCR_VAR_INIT) KyHCCR_t_C2MinNearSyncNLockedTime
    [5] =
{
    0.05F, 1.0F, 2.0F, 5.0F, 6.0F
} ;                                    /* Referenced by: '<S263>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static volatile CONST(float32, HCCR_VAR_INIT) KyHCCR_t_C3MinNearSyncNLockedTime
    [5] =
{
    0.05F, 1.0F, 2.0F, 5.0F, 6.0F
} ;                                    /* Referenced by: '<S289>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_HCCR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HCCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_K_AuxPumpLeakage;/* '<S499>/Vector' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static VAR(float32, HCCR_VAR_INIT) VeHCCR_M_C1MinActTorq_Sel;/* '<S70>/Selector9' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static VAR(float32, HCCR_VAR_INIT) VeHCCR_M_C1MinLockedTorq_Sel;/* '<S70>/Selector4' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static VAR(float32, HCCR_VAR_INIT) VeHCCR_M_C1_TorqEst;/* '<S11>/Switch37' */

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_ClchEngy

static VAR(float32, HCCR_VAR_INIT) VeHCCR_M_C1_TorqEst_DS;/* '<Root>/DSM_9' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static VAR(float32, HCCR_VAR_INIT) VeHCCR_M_C2MinActTorq_Sel;/* '<S113>/Selector14' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static VAR(float32, HCCR_VAR_INIT) VeHCCR_M_C2MinLockedTorq_Sel;/* '<S113>/Selector5' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static VAR(float32, HCCR_VAR_INIT) VeHCCR_M_C2_TorqEst;/* '<S11>/Switch39' */

#endif

#if Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_ClchEngy

static VAR(float32, HCCR_VAR_INIT) VeHCCR_M_C2_TorqEst_DS;/* '<Root>/DSM_17' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static VAR(float32, HCCR_VAR_INIT) VeHCCR_M_C3MinActTorq_Sel;/* '<S129>/Selector14' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static VAR(float32, HCCR_VAR_INIT) VeHCCR_M_C3MinLockedTorq_Sel;/* '<S129>/Selector5' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static VAR(float32, HCCR_VAR_INIT) VeHCCR_M_C3_TorqEst;/* '<S11>/Switch46' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static VAR(float32, HCCR_VAR_INIT) VeHCCR_M_C3_TorqEst_DS;/* '<Root>/DSM_19' */

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C1_C2_C3_TPEst || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3 || Rte_SysCon_Variant_HCCR_TPEst

static VAR(float32, HCCR_VAR_INIT) VeHCCR_Pct_AccelPedalActPosition;/* '<S11>/Switch3' */

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C1_C2_C3_LPresCntrl_ClchEngy || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3 || Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_T_TransOilTemp;/* '<S11>/Switch15' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_V_Vol_LowSump;/* '<S520>/Switch' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_AuxPumpAvail;/* '<S539>/AND' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_AuxPumpEnbl;/* '<S532>/Switch' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_AuxPump_Avail;/* '<S528>/Logical' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_Aux_Pump_Avail;/* '<S11>/Switch43' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_C1RngSt;/* '<S366>/Comparison6' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_C1TchPtDtctFlg;/* '<S366>/Logical4' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_C1_TchPtDtct_CndTru;/* '<S366>/Logical2' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_C1_TchPtDtctn;/* '<S366>/Logical6' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_C2CShiftActive;/* '<S11>/Switch25' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_C2RngSt;/* '<S366>/Comparison2' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_C2TchPtDtctFlg;/* '<S366>/Logical3' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_C2_TchPtDtct_CndTru;/* '<S366>/Logical1' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_C2_TchPtDtctn;/* '<S366>/Logical5' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_PropSysActv;/* '<S11>/Switch17' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_RunCrankActive;/* '<S11>/Switch20' */

#endif

#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_C1STN) || Rte_SysCon_Variant_HCCR_C1STN_C3STN || (Rte_SysCon_Variant_HCCR_C3 && Rte_SysCon_Variant_HCCR_C3STN)

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_TRNRGearRatMot;/* '<S11>/Switch71' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_TchPtFlgs_Reset;/* '<S316>/Logical1' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_TrnOnPrimeAuxPmp;/* '<S522>/NOT' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_TurnOffAuxPump;/* '<S527>/Switch' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_TurnOffAuxPump_Raw;/* '<S527>/NOT2' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_TurnOnAuxPump;/* '<S528>/Switch' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_TurnOnAuxPump_Raw;/* '<S528>/NOT2' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_dryRunEOPA;/* '<S15>/Logical Operator1' */

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static VAR(boolean, HCCR_VAR_INIT) VeHCCR_b_dryRunEOPB;/* '<S16>/Logical Operator1' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dV_ActAuxPumpFlow;/* '<S496>/Multiplication2' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dV_ActMainPumpFlow;/* '<S498>/Multiplication1' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dV_AuxFlowRt;/* '<S496>/MinMax1' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dV_DrySump_FlowRtReq;/* '<S511>/Switch1' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dV_DsrdFlow;/* '<S505>/MinMax1' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dV_DsrdFlow_Raw;/* '<S503>/Sum4' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dV_EffDsrdFlow;/* '<S548>/Subtraction' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dV_Flow_LowSump;/* '<S494>/Sum1' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dV_Flow_UpperSump;/* '<S505>/Switch' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dV_MainFlowRt;/* '<S498>/MinMax1' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dV_MaxAuxFlowCap;/* '<S525>/Subtraction1' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dV_MaxAuxPumpFlow;/* '<S525>/Multiplication2' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dV_MtrA_CoolFlwCmd;/* '<S11>/Switch44' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dV_MtrB_CoolFlwCmd;/* '<S11>/Switch45' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dV_TotalTransFluidVolDly;/* '<S521>/Switch1' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dV_TransFluid_EffFlow;/* '<S493>/Sum3' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dV_UpperSump_FlowRt;/* '<S503>/Product3' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dn_C1MaxNearSyncRt_Sel;/* '<S70>/Selector8' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dn_C1MaxSlRt_Sel;/* '<S70>/Selector6' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dn_C2MaxNearSyncRt_Sel;/* '<S113>/Selector8' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dn_C2MaxSlRt_Sel;/* '<S113>/Selector6' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dn_C3MaxNearSyncRt_Sel;/* '<S129>/Selector8' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dn_C3MaxSlRt_Sel;/* '<S129>/Selector6' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dn_InputAcceltn;/* '<S11>/Switch34' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dn_NC1dot;/* '<S11>/Switch4' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dn_NC2dot;/* '<S11>/Switch5' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static VAR(float32, HCCR_VAR_INIT) VeHCCR_dn_NC3dot;/* '<S11>/Switch49' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static VAR(TeBRKR_e_BrkPdl_Stat, HCCR_VAR_INIT) VeHCCR_e_BrkPedalDscrtInpt;/* '<S11>/Switch8' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static VAR(TeHSER_e_ClchFillCmnd, HCCR_VAR_INIT) VeHCCR_e_C1_FillCmnd;/* '<S11>/Switch18' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static VAR(TeHCCR_e_ClutchStatus, HCCR_VAR_INIT) VeHCCR_e_C1_St;/* '<S234>/Merge' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static VAR(TeHCCR_e_ClutchStatus, HCCR_VAR_INIT) VeHCCR_e_C1_Stat;/* '<S11>/Switch40' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static VAR(TeHSER_e_ClutchStatCntrl, HCCR_VAR_INIT) VeHCCR_e_C1_StatControl;/* '<S11>/Switch51' */

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_ClchEngy

static VAR(TeHCCR_e_ClutchStatus, HCCR_VAR_INIT) VeHCCR_e_C1_Stat_DS;/* '<Root>/DSM_4' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static VAR(TeHSER_e_ClchFillCmnd, HCCR_VAR_INIT) VeHCCR_e_C2_FillCmnd;/* '<S11>/Switch19' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static VAR(TeHCCR_e_ClutchStatus, HCCR_VAR_INIT) VeHCCR_e_C2_St;/* '<S260>/Merge' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static VAR(TeHCCR_e_ClutchStatus, HCCR_VAR_INIT) VeHCCR_e_C2_Stat;/* '<S11>/Switch41' */

#endif

#if Rte_SysCon_Variant_HCCR_C2

static VAR(TeHSER_e_ClutchStatCntrl, HCCR_VAR_INIT) VeHCCR_e_C2_StatControl;/* '<S11>/Switch52' */

#endif

#if Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_ClchEngy

static VAR(TeHCCR_e_ClutchStatus, HCCR_VAR_INIT) VeHCCR_e_C2_Stat_DS;/* '<Root>/DSM_12' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static VAR(TeHSER_e_ClchFillCmnd, HCCR_VAR_INIT) VeHCCR_e_C3_FillCmnd;/* '<S11>/Switch50' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static VAR(TeHCCR_e_ClutchStatus, HCCR_VAR_INIT) VeHCCR_e_C3_St;/* '<S286>/Merge' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static VAR(TeHCCR_e_ClutchStatus, HCCR_VAR_INIT) VeHCCR_e_C3_Stat;/* '<S11>/Switch47' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static VAR(TeHSER_e_ClutchStatCntrl, HCCR_VAR_INIT) VeHCCR_e_C3_StatControl;/* '<S11>/Switch53' */

#endif

#if Rte_SysCon_Variant_HCCR_C3

static VAR(TeHCCR_e_ClutchStatus, HCCR_VAR_INIT) VeHCCR_e_C3_Stat_DS;/* '<Root>/DSM_18' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static VAR(TeHCCR_e_ClchFillDtctStat, HCCR_VAR_INIT)
    VeHCCR_e_ClchFillDtctStat_DS;      /* '<Root>/DSM_20' */

#endif

#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_C1STN) || Rte_SysCon_Variant_HCCR_C1_C3_TPEst || (Rte_SysCon_Variant_HCCR_C3 && Rte_SysCon_Variant_HCCR_C3STN) || Rte_SysCon_Variant_HCCR_TPEst

static VAR(TeHSER_e_RngSt, HCCR_VAR_INIT) VeHCCR_e_Clch_RngSt;/* '<S11>/Switch23' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static VAR(TeESSR_e_EngStartStopSt, HCCR_VAR_INIT) VeHCCR_e_EngStartStopSt;/* '<S11>/Switch13' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_n_ActMainPumpSpd;/* '<S498>/Multiplication3' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_n_AuxPumpSpdDsrdRaw;/* '<S526>/Switch' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_n_AuxPumpSpdDsrd_Raw;/* '<S554>/Switch' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_n_AuxPumpSpdFltrd;/* '<S11>/Switch42' */

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static VAR(float32, HCCR_VAR_INIT) VeHCCR_n_AuxPumpSpd_NoLim;/* '<S556>/Switch1' */

#endif

#if Rte_SysCon_Variant_HCCR_C1

static VAR(float32, HCCR_VAR_INIT) VeHCCR_n_C1MaxLockedSl_Sel;/* '<S69>/Gain' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static VAR(float32, HCCR_VAR_INIT) VeHCCR_p_C1_ClPresEst_DS;/* '<Root>/DSM_3' */

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static VAR(float32, HCCR_VAR_INIT) VeHCCR_p_C2_ClPresEst_DS;/* '<Root>/DSM_11' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HCCR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_HCCR
#include "MemMap.h"

CONST(ConstB_HCCR_ac_T, HCCR_VAR_INIT) HCCR_ac_ConstB =
{
    CeHCCR_e_ClReleased,               /* '<S595>/Constant' */

#if Rte_SysCon_Variant_HCCR_TPEst

    /* Start of '<S399>/C1_PresPosnPt' */
    {
        1                              /* '<S404>/TRUE Constant' */
    }
    ,

    /* End of '<S399>/C1_PresPosnPt' */
#endif

#if Rte_SysCon_Variant_HCCR_TPEst

    /* Start of '<S410>/C2_PresPosnPt' */
    {
        1                              /* '<S415>/TRUE Constant' */
    }
    /* End of '<S410>/C2_PresPosnPt' */
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_HCCR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_HCCR
#include "MemMap.h"

CONST(ConstP_HCCR_ac_T, HCCR_VAR_INIT) HCCR_ac_ConstP =
{

#if Rte_SysCon_Variant_HCCR_LPresCntrl

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S508>/Vector'
     *   '<S509>/Vector'
     */
    {
        6U, 6U
    },

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3 || Rte_SysCon_Variant_HCCR_LPresCntrl

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S237>/Vector'
     *   '<S263>/Vector'
     *   '<S289>/Vector'
     *   '<S502>/Vector'
     *   '<S517>/Vector'
     *   '<S542>/Vector'
     *   '<S552>/Vector'
     */
    {
        4U, 4U
    },

#endif

#ifndef CONSTP_HCCR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_HCCR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HCCR
#include "MemMap.h"

VAR(B_HCCR_ac_T, HCCR_VAR_INIT) HCCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HCCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_HCCR
#include "MemMap.h"

VAR(DW_HCCR_ac_T, HCCR_VAR_INIT) HCCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_HCCR
#include "MemMap.h"
#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_C1STN) || (Rte_SysCon_Variant_HCCR_C3 && Rte_SysCon_Variant_HCCR_C3STN)

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_GearRatEnabled(VAR(float32, AUTOMATIC)
    rtu_n_CalRaw, VAR(float32, AUTOMATIC) rtu_t_Raw, P2VAR(float32, AUTOMATIC,
    HCCR_VAR_INIT) rty_n_C1MaxLockedSl, P2VAR(float32, AUTOMATIC, HCCR_VAR_INIT)
    rty_t_MinLockedHold);

#endif

#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_C1STN) || (Rte_SysCon_Variant_HCCR_C3 && Rte_SysCon_Variant_HCCR_C3STN)

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_NoC2C(VAR(float32, AUTOMATIC)
    rtu_CalPreProc, P2VAR(float32, AUTOMATIC, HCCR_VAR_INIT) rty_CalPostProc);

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_HCCC_Aux_Pmp_Off(P2VAR(float32,
    AUTOMATIC, HCCR_VAR_INIT) rty_HCCR_n_AuxPumpSpdDsrd);

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_HCCC_Aux_Pmp_On(VAR(float32,
    AUTOMATIC) rtu_HCCR_n_AuxPumpSpdDsrdRaw, P2VAR(float32, AUTOMATIC,
    HCCR_VAR_INIT) rty_HCCR_n_AuxPumpSpdDsrd);

#endif

#if Rte_SysCon_Variant_HCCR_LPresCntrl

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_HCCC_Aux_Prime_On(VAR(float32,
    AUTOMATIC) rtu_TFTR_T_TransOilTemp, P2VAR(float32, AUTOMATIC, HCCR_VAR_INIT)
    rty_HCCR_n_AuxPumpSpdDsrd);

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_IfActionSubsystem(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, HCCR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_Cl_Locked_Stat(P2VAR
    (TeHCCR_e_ClutchStatus, AUTOMATIC, HCCR_VAR_INIT) rty_ClutchStat);

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_Cl_Synced_Stat(P2VAR
    (TeHCCR_e_ClutchStatus, AUTOMATIC, HCCR_VAR_INIT) rty_ClutchStat);

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_Cl_NearSynced_Stat(P2VAR
    (TeHCCR_e_ClutchStatus, AUTOMATIC, HCCR_VAR_INIT) rty_ClutchStat);

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_Cl_Actuated_Stat(P2VAR
    (TeHCCR_e_ClutchStatus, AUTOMATIC, HCCR_VAR_INIT) rty_ClutchStat);

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_Cl_Released_Stat(P2VAR
    (TeHCCR_e_ClutchStatus, AUTOMATIC, HCCR_VAR_INIT) rty_ClutchStat);

#endif

#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_ClchEngy) || (Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy)

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_CalcHeatDissip(VAR(float32, AUTOMATIC)
    rtu_ClchTemp, VAR(float32, AUTOMATIC) rtu_OilTemp, VAR(sint16, AUTOMATIC)
    rtu_ClchStatus, VAR(float32, AUTOMATIC) rtu_ClchX, P2VAR
    (B_CalcHeatDissip_HCCR_ac_T, AUTOMATIC, HCCR_VAR_INIT) localB);

#endif

#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_ClchEngy) || (Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy)

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_ClchActuated_St(P2VAR(sint16,
    AUTOMATIC, HCCR_VAR_INIT) rty_Out1);

#endif

#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_ClchEngy) || (Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy)

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_ClchLocked_St(P2VAR(sint16, AUTOMATIC,
    HCCR_VAR_INIT) rty_Out1);

#endif

#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_ClchEngy) || (Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy)

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_ClchDflt_St(P2VAR(sint16, AUTOMATIC,
    HCCR_VAR_INIT) rty_Out1);

#endif

#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_ClchEngy) || (Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy)

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_CalcHeatAccum(VAR(float32, AUTOMATIC)
    rtu_ClchSlip, VAR(float32, AUTOMATIC) rtu_EstClchTorq, P2VAR(float32,
    AUTOMATIC, HCCR_VAR_INIT) rty_ClchPwr);

#endif

#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_ClchEngy) || (Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy)

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_NoHeatAccum(P2VAR(float32, AUTOMATIC,
    HCCR_VAR_INIT) rty_ClchPwr);

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_HCCC_FillDetect_C1(VAR(boolean,
    AUTOMATIC) rtu_ClchType, VAR(TeHSER_e_ClchFillCmnd, AUTOMATIC) rtu_FillCmnd,
    VAR(float32, AUTOMATIC) rtu_Cx_TorqEst_DS, VAR(float32, AUTOMATIC)
    rtu_TorqEstThrshFillDtctd, P2VAR(B_HCCC_FillDetect_C1_HCCR_ac_T, AUTOMATIC,
    HCCR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_C2_PresPosnPt(VAR(float32, AUTOMATIC)
    rtu_PresAct, VAR(float32, AUTOMATIC) rtu_PosnEst, VAR(float32, AUTOMATIC)
    rtu_PresAct_Stored, VAR(float32, AUTOMATIC) rtu_PosnAct_Stored, VAR(float32,
    AUTOMATIC) rtu_PresDelta_Thresh, VAR(float32, AUTOMATIC)
    rtu_PosnDelta_Thresh, P2VAR(B_C2_PresPosnPt_HCCR_ac_T, AUTOMATIC,
    HCCR_VAR_INIT) localB);

#endif

/*
 * Output and update for action system:
 *    '<S86>/GearRatEnabled'
 *    '<S143>/GearRatEnabled'
 */
#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_C1STN) || (Rte_SysCon_Variant_HCCR_C3 && Rte_SysCon_Variant_HCCR_C3STN)

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_GearRatEnabled(VAR(float32, AUTOMATIC)
    rtu_n_CalRaw, VAR(float32, AUTOMATIC) rtu_t_Raw, P2VAR(float32, AUTOMATIC,
    HCCR_VAR_INIT) rty_n_C1MaxLockedSl, P2VAR(float32, AUTOMATIC, HCCR_VAR_INIT)
    rty_t_MinLockedHold)
{
    /* Inport: '<S90>/n_CalRaw' */
    *rty_n_C1MaxLockedSl = rtu_n_CalRaw;

    /* Inport: '<S90>/t_Raw' */
    *rty_t_MinLockedHold = rtu_t_Raw;
}

#endif

/*
 * Output and update for action system:
 *    '<S89>/NoC2C'
 *    '<S147>/NoC2C'
 */
#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_C1STN) || (Rte_SysCon_Variant_HCCR_C3 && Rte_SysCon_Variant_HCCR_C3STN)

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_NoC2C(VAR(float32, AUTOMATIC)
    rtu_CalPreProc, P2VAR(float32, AUTOMATIC, HCCR_VAR_INIT) rty_CalPostProc)
{
    /* Inport: '<S100>/CalPreProc' */
    *rty_CalPostProc = rtu_CalPreProc;
}

#endif

/* Output and update for function-call system: '<S522>/HCCC_Aux_Pmp_Off' */
#if Rte_SysCon_Variant_HCCR_LPresCntrl

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_HCCC_Aux_Pmp_Off(P2VAR(float32,
    AUTOMATIC, HCCR_VAR_INIT) rty_HCCR_n_AuxPumpSpdDsrd)
{
    /* SignalConversion generated from: '<S529>/HCCR_n_AuxPumpSpdDsrd' incorporates:
     *  Constant: '<S577>/Calib'
     */
    *rty_HCCR_n_AuxPumpSpdDsrd = KeHCCR_n_PumpOffVal;
}

#endif

/* Output and update for function-call system: '<S522>/HCCC_Aux_Pmp_On' */
#if Rte_SysCon_Variant_HCCR_LPresCntrl

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_HCCC_Aux_Pmp_On(VAR(float32,
    AUTOMATIC) rtu_HCCR_n_AuxPumpSpdDsrdRaw, P2VAR(float32, AUTOMATIC,
    HCCR_VAR_INIT) rty_HCCR_n_AuxPumpSpdDsrd)
{
    /* Gain: '<S578>/Gain' */
    *rty_HCCR_n_AuxPumpSpdDsrd = rtu_HCCR_n_AuxPumpSpdDsrdRaw;
}

#endif

/* Output and update for function-call system: '<S522>/HCCC_Aux_Prime_On' */
#if Rte_SysCon_Variant_HCCR_LPresCntrl

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_HCCC_Aux_Prime_On(VAR(float32,
    AUTOMATIC) rtu_TFTR_T_TransOilTemp, P2VAR(float32, AUTOMATIC, HCCR_VAR_INIT)
    rty_HCCR_n_AuxPumpSpdDsrd)
{
    /* Gain: '<S580>/Gain' incorporates:
     *  Lookup_n-D: '<S579>/Vector'
     */
    *rty_HCCR_n_AuxPumpSpdDsrd = look1_iflf_binlca_16a(rtu_TFTR_T_TransOilTemp,
        ((const float32 *)&(KxHCCR_n_AuxPumpPrimeSpd[0])), ((const float32 *)
        &(KtHCCR_n_AuxPumpPrimeSpd[0])), 5U);
}

#endif

/*
 * Output and update for action system:
 *    '<S17>/If Action Subsystem'
 *    '<S17>/If Action Subsystem1'
 *    '<S17>/If Action Subsystem2'
 *    '<S17>/If Action Subsystem3'
 *    '<S17>/If Action Subsystem4'
 *    '<S17>/If Action Subsystem5'
 */
#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_IfActionSubsystem(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, HCCR_VAR_INIT) rty_Out1)
{
    /* Inport: '<S58>/In1' */
    *rty_Out1 = rtu_In1;
}

#endif

/*
 * Output and update for action system:
 *    '<S234>/Cl_Locked_Stat'
 *    '<S260>/Cl_Locked_Stat'
 *    '<S286>/Cl_Locked_Stat'
 */
#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_Cl_Locked_Stat(P2VAR
    (TeHCCR_e_ClutchStatus, AUTOMATIC, HCCR_VAR_INIT) rty_ClutchStat)
{
    /* SignalConversion generated from: '<S241>/ClutchStat' incorporates:
     *  Constant: '<S249>/Constant'
     */
    *rty_ClutchStat = CeHCCR_e_ClLocked;
}

#endif

/*
 * Output and update for action system:
 *    '<S234>/Cl_Synced_Stat'
 *    '<S260>/Cl_Synced_Stat'
 *    '<S286>/Cl_Synced_Stat'
 */
#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_Cl_Synced_Stat(P2VAR
    (TeHCCR_e_ClutchStatus, AUTOMATIC, HCCR_VAR_INIT) rty_ClutchStat)
{
    /* SignalConversion generated from: '<S244>/ClutchStat' incorporates:
     *  Constant: '<S252>/Constant'
     */
    *rty_ClutchStat = CeHCCR_e_ClSynched;
}

#endif

/*
 * Output and update for action system:
 *    '<S234>/Cl_NearSynced_Stat'
 *    '<S260>/Cl_NearSynced_Stat'
 *    '<S286>/Cl_NearSynced_Stat'
 */
#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_Cl_NearSynced_Stat(P2VAR
    (TeHCCR_e_ClutchStatus, AUTOMATIC, HCCR_VAR_INIT) rty_ClutchStat)
{
    /* SignalConversion generated from: '<S242>/ClutchStat' incorporates:
     *  Constant: '<S250>/Constant'
     */
    *rty_ClutchStat = CeHCCR_e_ClNearSynched;
}

#endif

/*
 * Output and update for action system:
 *    '<S234>/Cl_Actuated_Stat'
 *    '<S260>/Cl_Actuated_Stat'
 *    '<S286>/Cl_Actuated_Stat'
 */
#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_Cl_Actuated_Stat(P2VAR
    (TeHCCR_e_ClutchStatus, AUTOMATIC, HCCR_VAR_INIT) rty_ClutchStat)
{
    /* SignalConversion generated from: '<S240>/ClutchStat' incorporates:
     *  Constant: '<S248>/Constant'
     */
    *rty_ClutchStat = CeHCCR_e_ClActuated;
}

#endif

/*
 * Output and update for action system:
 *    '<S234>/Cl_Released_Stat'
 *    '<S260>/Cl_Released_Stat'
 *    '<S286>/Cl_Released_Stat'
 */
#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_Cl_Released_Stat(P2VAR
    (TeHCCR_e_ClutchStatus, AUTOMATIC, HCCR_VAR_INIT) rty_ClutchStat)
{
    /* SignalConversion generated from: '<S243>/ClutchStat' incorporates:
     *  Constant: '<S251>/Constant'
     */
    *rty_ClutchStat = CeHCCR_e_ClReleased;
}

#endif

/*
 * Output and update for atomic system:
 *    '<S181>/CalcHeatDissip'
 *    '<S200>/CalcHeatDissip'
 */
#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_ClchEngy) || (Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy)

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_CalcHeatDissip(VAR(float32, AUTOMATIC)
    rtu_ClchTemp, VAR(float32, AUTOMATIC) rtu_OilTemp, VAR(sint16, AUTOMATIC)
    rtu_ClchStatus, VAR(float32, AUTOMATIC) rtu_ClchX, P2VAR
    (B_CalcHeatDissip_HCCR_ac_T, AUTOMATIC, HCCR_VAR_INIT) localB)
{
    /* Product: '<S183>/Division' incorporates:
     *  Constant: '<S193>/Calib'
     *  Selector: '<S183>/Selector'
     *  Sum: '<S183>/Subtraction'
     */
    localB->Division = KaHCCR_h_H_SurfaceArea[(((((sint32)rtu_ClchX) - 1) * 6) +
        ((sint32)rtu_ClchStatus)) - 1] * (rtu_ClchTemp - rtu_OilTemp);
}

#endif

/*
 * Output and update for action system:
 *    '<S187>/ClchActuated_St'
 *    '<S206>/ClchActuated_St'
 */
#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_ClchEngy) || (Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy)

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_ClchActuated_St(P2VAR(sint16,
    AUTOMATIC, HCCR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S196>/Out1' incorporates:
     *  Constant: '<S196>/Constant Value'
     */
    *rty_Out1 = 1;
}

#endif

/*
 * Output and update for action system:
 *    '<S187>/ClchLocked_St'
 *    '<S206>/ClchLocked_St'
 */
#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_ClchEngy) || (Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy)

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_ClchLocked_St(P2VAR(sint16, AUTOMATIC,
    HCCR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S198>/Out1' incorporates:
     *  Constant: '<S198>/Constant Value'
     */
    *rty_Out1 = 2;
}

#endif

/*
 * Output and update for action system:
 *    '<S187>/ClchDflt_St'
 *    '<S206>/ClchDflt_St'
 */
#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_ClchEngy) || (Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy)

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_ClchDflt_St(P2VAR(sint16, AUTOMATIC,
    HCCR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S197>/Out1' incorporates:
     *  Constant: '<S197>/Constant Value'
     */
    *rty_Out1 = 3;
}

#endif

/*
 * Output and update for action system:
 *    '<S181>/CalcHeatAccum'
 *    '<S200>/CalcHeatAccum'
 */
#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_ClchEngy) || (Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy)

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_CalcHeatAccum(VAR(float32, AUTOMATIC)
    rtu_ClchSlip, VAR(float32, AUTOMATIC) rtu_EstClchTorq, P2VAR(float32,
    AUTOMATIC, HCCR_VAR_INIT) rty_ClchPwr)
{
    /* Product: '<S182>/Division' incorporates:
     *  Constant: '<S182>/Constant Value1'
     *  Product: '<S182>/Multiplication2'
     */
    *rty_ClchPwr = (rtu_ClchSlip * 0.10472F) * rtu_EstClchTorq;
}

#endif

/*
 * Output and update for action system:
 *    '<S181>/NoHeatAccum'
 *    '<S200>/NoHeatAccum'
 */
#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_ClchEngy) || (Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy)

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_NoHeatAccum(P2VAR(float32, AUTOMATIC,
    HCCR_VAR_INIT) rty_ClchPwr)
{
    /* SignalConversion generated from: '<S191>/ClchPwr' incorporates:
     *  Constant: '<S191>/Constant Value'
     */
    *rty_ClchPwr = 0.0F;
}

#endif

/*
 * Output and update for atomic system:
 *    '<S350>/HCCC_FillDetect_C1'
 *    '<S355>/HCCC_FillDetect_C2'
 *    '<S360>/HCCC_FillDetect_C3'
 * Common block description:
 *   x.x
 */
#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_HCCC_FillDetect_C1(VAR(boolean,
    AUTOMATIC) rtu_ClchType, VAR(TeHSER_e_ClchFillCmnd, AUTOMATIC) rtu_FillCmnd,
    VAR(float32, AUTOMATIC) rtu_Cx_TorqEst_DS, VAR(float32, AUTOMATIC)
    rtu_TorqEstThrshFillDtctd, P2VAR(B_HCCC_FillDetect_C1_HCCR_ac_T, AUTOMATIC,
    HCCR_VAR_INIT) localB)
{
    /* If: '<S351>/If' */
    if (rtu_ClchType)
    {
        /* Outputs for IfAction SubSystem: '<S351>/Clch_FillDtm_Vrtl' incorporates:
         *  ActionPort: '<S353>/Action Port'
         */
        /* Merge: '<S351>/Merge1' incorporates:
         *  Constant: '<S354>/Constant'
         *  Logic: '<S353>/Logical'
         *  RelationalOperator: '<S353>/Comparison1'
         *  RelationalOperator: '<S353>/Equal3'
         */
        localB->Merge1 = ((((uint32)rtu_FillCmnd) != CeHSER_e_ClchExhstCmpltly) &&
                          (rtu_Cx_TorqEst_DS >= rtu_TorqEstThrshFillDtctd));

        /* End of Outputs for SubSystem: '<S351>/Clch_FillDtm_Vrtl' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S351>/Clch_FillDtm_Dflt' incorporates:
         *  ActionPort: '<S352>/Action Port'
         */
        /* Merge: '<S351>/Merge1' incorporates:
         *  Constant: '<S352>/FALSE Constant'
         *  SignalConversion generated from: '<S352>/FillCmptDetected'
         */
        localB->Merge1 = false;

        /* End of Outputs for SubSystem: '<S351>/Clch_FillDtm_Dflt' */
    }

    /* End of If: '<S351>/If' */
}

#endif

/*
 * Output and update for atomic system:
 *    '<S410>/C2_PresPosnPt'
 *    '<S399>/C1_PresPosnPt'
 */
#if Rte_SysCon_Variant_HCCR_TPEst

static FUNC(void, HCCR_CODE_LOCAL) HCCR_ac_C2_PresPosnPt(VAR(float32, AUTOMATIC)
    rtu_PresAct, VAR(float32, AUTOMATIC) rtu_PosnEst, VAR(float32, AUTOMATIC)
    rtu_PresAct_Stored, VAR(float32, AUTOMATIC) rtu_PosnAct_Stored, VAR(float32,
    AUTOMATIC) rtu_PresDelta_Thresh, VAR(float32, AUTOMATIC)
    rtu_PosnDelta_Thresh, P2VAR(B_C2_PresPosnPt_HCCR_ac_T, AUTOMATIC,
    HCCR_VAR_INIT) localB)
{
    /* Switch: '<S415>/Switch' incorporates:
     *  RelationalOperator: '<S415>/Comparison'
     *  Sum: '<S415>/Sum1'
     */
    if ((rtu_PresAct - rtu_PresAct_Stored) > rtu_PresDelta_Thresh)
    {
        /* Switch: '<S415>/Switch' */
        localB->Switch = rtu_PresAct;
    }
    else
    {
        /* Switch: '<S415>/Switch' */
        localB->Switch = rtu_PresAct_Stored;
    }

    /* End of Switch: '<S415>/Switch' */

    /* Switch: '<S415>/Switch1' incorporates:
     *  RelationalOperator: '<S415>/Comparison1'
     *  Sum: '<S415>/Sum2'
     */
    if ((rtu_PosnEst - rtu_PosnAct_Stored) > rtu_PosnDelta_Thresh)
    {
        /* Switch: '<S415>/Switch1' */
        localB->Switch1 = rtu_PosnEst;
    }
    else
    {
        /* Switch: '<S415>/Switch1' */
        localB->Switch1 = rtu_PosnAct_Stored;
    }

    /* End of Switch: '<S415>/Switch1' */
}

#endif

/* Model step function for TID1 */
FUNC(void, HCCR_CODE) HCCR_MedTED(void) /* Explicit Task: MedTED */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

    float32 rtb_TmpSignalConversionAtVeMSPR_n_MtrA_S;

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

    float32 rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S;

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

    float32 rtb_TmpSignalConversionAtVeMSPR_n_MtrC_S;

#endif

#if Rte_SysCon_Variant_HCCR_ClchEngy

    float32 rtb_VM_Conditional_Signal_CSLR_n_NC1_0;

#endif

#if (!Rte_SysCon_Variant_HCCR_C1 && !Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy) || (!Rte_SysCon_Variant_HCCR_C1_C2_C3_LPresCntrl_ClchEngy && Rte_SysCon_Variant_HCCR_ClchEngy) || (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_ClchEngy) || (Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy)

    float32 rtb_VM_Conditional_Signal_TFTR_T_TransOi;

#endif

#if Rte_SysCon_Variant_HCCR_ClchEngy

    float32 rtb_VM_Conditional_Signal_CSLR_n_NC2_1;

#endif

#if Rte_SysCon_Variant_HCCR_C1

    float32 rtb_VeHCCR_n_C1MaxLockedSl_SelRaw_g;

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

    TeTAPR_e_TransAuxPmp_FalseTrueSNA tmpRead;

#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

    TeTAPR_e_TransAuxPmp_FalseTrueSNA tmpRead_0;

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3 || Rte_SysCon_Variant_HCCR_PmpCEDMGen2 || Rte_SysCon_Variant_HCCR_TPEst

    boolean rtb_VM_Conditional_Signal_PMDR_b_RunCran;

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

    boolean rtb_TmpSignalConversionAtVaCSLR_b_ClchSt[4];

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

    float32 rtb_Switch3_c4;

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

    sint8 rtb_DataTypeConversion_k;

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2

    sint16 rtb_remap_M1XN_h;

#endif

#if Rte_SysCon_Variant_HCCR_C3 && Rte_SysCon_Variant_HCCR_C3STN

    float32 rtb_Abs;

#endif

#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_C1STN) || (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_ClchEngy) || (Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy) || Rte_SysCon_Variant_HCCR_C3

    sint16 rtb_TmpSignalConversionAtVeTMMR_i_ClchId;

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3 || Rte_SysCon_Variant_HCCR_LPresCntrl || Rte_SysCon_Variant_HCCR_PmpCEDMGen2 || Rte_SysCon_Variant_HCCR_TPEst

    boolean rtb_Comparison1_ng;

#endif

#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_C1STN) || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_LPresCntrl

    float32 rtb_Subtraction1_l;

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

    float32 rtb_Abs_h;

#endif

#if Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_ClchEngy

    float32 rtb_Subtraction_p;

#endif

#if Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy

    float32 rtb_Subtraction_h;

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

    boolean rtb_TmpSignalConversionAtVaCSLR_b_NCx_Sl[4];

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C3 || Rte_SysCon_Variant_HCCR_LPresCntrl

    float32 rtb_VeHCCR_n_C1MaxLockedSl_SelRaw;

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

    float32 rtb_Switch_p;

#endif

#if Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3 || Rte_SysCon_Variant_HCCR_PmpCEDMGen2

    float32 rtb_Abs2;

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

    boolean rtb_AND2;

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

    boolean rtb_AND3;

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

    boolean rtb_Logical1;

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3 || Rte_SysCon_Variant_HCCR_TPEst

    boolean rtb_Logical_j;

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3 || Rte_SysCon_Variant_HCCR_LPresCntrl || Rte_SysCon_Variant_HCCR_PmpCEDMGen2 || Rte_SysCon_Variant_HCCR_TPEst

    boolean rtb_Logical2_k;

#endif

#if Rte_SysCon_Variant_HCCR_TPEst

    boolean rtb_Merge1;

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3 || Rte_SysCon_Variant_HCCR_TPEst

    boolean rtb_AND_b0;

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3 || Rte_SysCon_Variant_HCCR_PmpCEDMGen2

    float32 rtb_Vector;

#endif

#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

    sint32 VeHCCR_M_C1MinLockedTorq_Sel_tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/HCCR_MedTED'
     */
    /* SignalConversion generated from: '<S1>/VaCSLR_b_ClchStRst' */
#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

    /* SignalConversion generated from: '<S1>/VaCSLR_b_ClchStRst' incorporates:
     *  Inport: '<Root>/VaCSLR_b_ClchStRst'
     */
    (void)Rte_Read_VaCSLR_b_ClchStRst_Value
        (rtb_TmpSignalConversionAtVaCSLR_b_ClchSt);

#endif

    /* End of SignalConversion generated from: '<S1>/VaCSLR_b_ClchStRst' */

    /* SignalConversion generated from: '<S1>/VeTMMR_i_ClchIdxOffg' */
#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_C1STN) || (Rte_SysCon_Variant_HCCR_C3 && Rte_SysCon_Variant_HCCR_C3STN)

    /* SignalConversion generated from: '<S1>/VeTMMR_i_ClchIdxOffg' incorporates:
     *  Inport: '<Root>/VeTMMR_i_ClchIdxOffg'
     */
    (void)Rte_Read_VeTMMR_i_ClchIdxOffg_Value
        (&rtb_TmpSignalConversionAtVeTMMR_i_ClchId);

#endif

    /* End of SignalConversion generated from: '<S1>/VeTMMR_i_ClchIdxOffg' */

    /* SignalConversion generated from: '<S1>/VaCSLR_b_NCx_SlipSpdFailing' */
#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

    /* SignalConversion generated from: '<S1>/VaCSLR_b_NCx_SlipSpdFailing' incorporates:
     *  Inport: '<Root>/VaCSLR_b_NCx_SlipSpdFailing'
     */
    (void)Rte_Read_VaCSLR_b_NCx_SlipSpdFailing_Value
        (rtb_TmpSignalConversionAtVaCSLR_b_NCx_Sl);

#endif

    /* End of SignalConversion generated from: '<S1>/VaCSLR_b_NCx_SlipSpdFailing' */

    /* SignalConversion generated from: '<S1>/VeMSPR_n_MtrA_Spd' incorporates:
     *  SignalConversion generated from: '<S1>/VeMSPR_n_MtrB_Spd'
     *  SignalConversion generated from: '<S1>/VeMSPR_n_MtrC_Spd'
     */
#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

    /* SignalConversion generated from: '<S1>/VeMSPR_n_MtrA_Spd' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
     */
    (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value
        (&rtb_TmpSignalConversionAtVeMSPR_n_MtrA_S);

    /* SignalConversion generated from: '<S1>/VeMSPR_n_MtrB_Spd' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
     */
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value
        (&rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S);

    /* SignalConversion generated from: '<S1>/VeMSPR_n_MtrC_Spd' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrC_Spd'
     */
    (void)Rte_Read_VeMSPR_n_MtrC_Spd_Value
        (&rtb_TmpSignalConversionAtVeMSPR_n_MtrC_S);

#endif

    /* End of SignalConversion generated from: '<S1>/VeMSPR_n_MtrA_Spd' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HCCI_Internal_Var'
     */
    /* Switch: '<S11>/Switch3' incorporates:
     *  Constant: '<S425>/Calib'
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
#if Rte_SysCon_Variant_HCCR_C1_C2_C3_TPEst

    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        ((&(VeHCCR_Pct_AccelPedalActPosition)));
    if (KeHCCR_b_AccelPdlPosnOvrdEnbl)
    {
        /* Switch: '<S11>/Switch3' incorporates:
         *  Constant: '<S423>/Calib'
         */
        VeHCCR_Pct_AccelPedalActPosition = KeHCCR_Pct_AccelPdlPosnOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch3' */

    /* Switch: '<S11>/Switch8' incorporates:
     *  Constant: '<S429>/Calib'
     *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
     */
#if Rte_SysCon_Variant_HCCR_TPEst

    (void)Rte_Read_VeBRKR_e_BrkPedalDscrtInpt_Value
        ((&(VeHCCR_e_BrkPedalDscrtInpt)));
    if (KeHCCR_b_BrkPdlDscInpStOvrdEnbl)
    {
        /* Switch: '<S11>/Switch8' incorporates:
         *  Constant: '<S472>/Calib'
         */
        VeHCCR_e_BrkPedalDscrtInpt = KeHCCR_e_BrkPdlDscInpStOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch8' */

    /* Switch: '<S11>/Switch4' incorporates:
     *  Constant: '<S454>/Calib'
     *  Inport: '<Root>/VeCSLR_dn_NC1dot'
     */
#if Rte_SysCon_Variant_HCCR_C1

    (void)Rte_Read_VeCSLR_dn_NC1dot_Value((&(VeHCCR_dn_NC1dot)));
    if (KeHCCR_b_NC1dotOvrdEnbl)
    {
        /* Switch: '<S11>/Switch4' incorporates:
         *  Constant: '<S469>/Calib'
         */
        VeHCCR_dn_NC1dot = KeHCCR_dn_NC1dotOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch4' */

    /* Switch: '<S11>/Switch5' incorporates:
     *  Constant: '<S455>/Calib'
     *  Inport: '<Root>/VeCSLR_dn_NC2dot'
     */
#if Rte_SysCon_Variant_HCCR_C2

    (void)Rte_Read_VeCSLR_dn_NC2dot_Value((&(VeHCCR_dn_NC2dot)));
    if (KeHCCR_b_NC2dotOvrdEnbl)
    {
        /* Switch: '<S11>/Switch5' incorporates:
         *  Constant: '<S470>/Calib'
         */
        VeHCCR_dn_NC2dot = KeHCCR_dn_NC2dotOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch5' */

    /* Switch: '<S11>/Switch49' incorporates:
     *  Constant: '<S456>/Calib'
     *  Inport: '<Root>/VeCSLR_dn_NC3dot'
     */
#if Rte_SysCon_Variant_HCCR_C3

    (void)Rte_Read_VeCSLR_dn_NC3dot_Value((&(VeHCCR_dn_NC3dot)));
    if (KeHCCR_b_NC3dotOvrdEnbl)
    {
        /* Switch: '<S11>/Switch49' incorporates:
         *  Constant: '<S471>/Calib'
         */
        VeHCCR_dn_NC3dot = KeHCCR_dn_NC3dotOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch49' */

    /* Switch: '<S11>/Switch6' incorporates:
     *  Constant: '<S431>/Calib'
     *  Inport: '<Root>/VeCSLR_n_Clch1_SlipSpeed'
     */
#if Rte_SysCon_Variant_HCCR_C1_ClchEngy

    (void)Rte_Read_VeCSLR_n_Clch1_SlipSpeed_Value
        (&HCCR_ac_B.VeHCCR_n_C1_SlipSpeed);
    if (KeHCCR_b_C1_SlipSpeedOvrdEnbl)
    {
        /* Switch: '<S11>/Switch6' incorporates:
         *  Constant: '<S485>/Calib'
         */
        HCCR_ac_B.VeHCCR_n_C1_SlipSpeed = KeHCCR_n_C1_SlipSpeedOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch6' */

    /* Switch: '<S11>/Switch7' incorporates:
     *  Constant: '<S438>/Calib'
     *  Inport: '<Root>/VeCSLR_n_Clch2_SlipSpeed'
     */
#if Rte_SysCon_Variant_HCCR_C2_ClchEngy

    (void)Rte_Read_VeCSLR_n_Clch2_SlipSpeed_Value
        (&HCCR_ac_B.VeHCCR_n_C2_SlipSpeed);
    if (KeHCCR_b_C2_SlipSpeedOvrdEnbl)
    {
        /* Switch: '<S11>/Switch7' incorporates:
         *  Constant: '<S486>/Calib'
         */
        HCCR_ac_B.VeHCCR_n_C2_SlipSpeed = KeHCCR_n_C2_SlipSpeedOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch7' */

    /* Switch: '<S11>/Switch48' incorporates:
     *  Constant: '<S443>/Calib'
     *  Inport: '<Root>/VeCSLR_n_Clch3_SlipSpeed'
     */
#if Rte_SysCon_Variant_HCCR_C3

    (void)Rte_Read_VeCSLR_n_Clch3_SlipSpeed_Value
        (&HCCR_ac_B.VeHCCR_n_C3_SlipSpeed);
    if (KeHCCR_b_C3_SlipSpeedOvrdEnbl)
    {
        /* Switch: '<S11>/Switch48' incorporates:
         *  Constant: '<S487>/Calib'
         */
        HCCR_ac_B.VeHCCR_n_C3_SlipSpeed = KeHCCR_n_C3_SlipSpeedOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch48' */

    /* Switch: '<S11>/Switch13' incorporates:
     *  Constant: '<S447>/Calib'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
#if Rte_SysCon_Variant_HCCR_TPEst

    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value((&(VeHCCR_e_EngStartStopSt)));
    if (KeHCCR_b_EngStartStopStOvrdEnbl)
    {
        /* Switch: '<S11>/Switch13' incorporates:
         *  Constant: '<S482>/Calib'
         */
        VeHCCR_e_EngStartStopSt = KeHCCR_e_EngStartStopStOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch13' */

    /* Switch: '<S11>/Switch17' incorporates:
     *  Constant: '<S458>/Calib'
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
#if Rte_SysCon_Variant_HCCR_LPresCntrl

    (void)Rte_Read_VeHPMR_b_PropSysActv_Value((&(VeHCCR_b_PropSysActv)));
    if (KeHCCR_b_PropSysActvOvrdEnbl)
    {
        /* Switch: '<S11>/Switch17' incorporates:
         *  Constant: '<S459>/Calib'
         */
        VeHCCR_b_PropSysActv = KeHCCR_b_PropSysActvOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch17' */

    /* Switch: '<S11>/Switch25' incorporates:
     *  Constant: '<S435>/Calib'
     *  Inport: '<Root>/VeHSER_b_C2CShiftActive'
     */
#if Rte_SysCon_Variant_HCCR_TPEst

    (void)Rte_Read_VeHSER_b_C2CShiftActive_Value((&(VeHCCR_b_C2CShiftActive)));
    if (KeHCCR_b_C2CShiftActiveOvrdEnbl)
    {
        /* Switch: '<S11>/Switch25' incorporates:
         *  Constant: '<S436>/Calib'
         */
        VeHCCR_b_C2CShiftActive = KeHCCR_b_C2CShiftActiveOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch25' */

    /* Switch: '<S11>/Switch18' incorporates:
     *  Constant: '<S430>/Calib'
     *  Inport: '<Root>/VeHSER_e_Clch1_FillCmnd'
     */
#if Rte_SysCon_Variant_HCCR_C1

    (void)Rte_Read_VeHSER_e_Clch1_FillCmnd_Value((&(VeHCCR_e_C1_FillCmnd)));
    if (KeHCCR_b_C1_FillCmndOvrdEnbl)
    {
        /* Switch: '<S11>/Switch18' incorporates:
         *  Constant: '<S473>/Calib'
         */
        VeHCCR_e_C1_FillCmnd = KeHCCR_e_C1_FillCmndOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch18' */

    /* Switch: '<S11>/Switch19' incorporates:
     *  Constant: '<S437>/Calib'
     *  Inport: '<Root>/VeHSER_e_Clch2_FillCmnd'
     */
#if Rte_SysCon_Variant_HCCR_C2

    (void)Rte_Read_VeHSER_e_Clch2_FillCmnd_Value((&(VeHCCR_e_C2_FillCmnd)));
    if (KeHCCR_b_C2_FillCmndOvrdEnbl)
    {
        /* Switch: '<S11>/Switch19' incorporates:
         *  Constant: '<S476>/Calib'
         */
        VeHCCR_e_C2_FillCmnd = KeHCCR_e_C2_FillCmndOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch19' */

    /* Switch: '<S11>/Switch50' incorporates:
     *  Constant: '<S442>/Calib'
     *  Inport: '<Root>/VeHSER_e_Clch3_FillCmnd'
     */
#if Rte_SysCon_Variant_HCCR_C3

    (void)Rte_Read_VeHSER_e_Clch3_FillCmnd_Value((&(VeHCCR_e_C3_FillCmnd)));
    if (KeHCCR_b_C3_FillCmndOvrdEnbl)
    {
        /* Switch: '<S11>/Switch50' incorporates:
         *  Constant: '<S479>/Calib'
         */
        VeHCCR_e_C3_FillCmnd = KeHCCR_e_C3_FillCmndOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch50' */

    /* Switch: '<S11>/Switch51' incorporates:
     *  Constant: '<S432>/Calib'
     *  Inport: '<Root>/VeHSER_e_Clch1_StatControl'
     */
#if Rte_SysCon_Variant_HCCR_C1

    (void)Rte_Read_VeHSER_e_Clch1_StatControl_Value((&(VeHCCR_e_C1_StatControl)));
    if (KeHCCR_b_C1_StatControlOvrdEnbl)
    {
        /* Switch: '<S11>/Switch51' incorporates:
         *  Constant: '<S474>/Calib'
         */
        VeHCCR_e_C1_StatControl = KeHCCR_e_C1_StatControlOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch51' */

    /* Switch: '<S11>/Switch52' incorporates:
     *  Constant: '<S439>/Calib'
     *  Inport: '<Root>/VeHSER_e_Clch2_StatControl'
     */
#if Rte_SysCon_Variant_HCCR_C2

    (void)Rte_Read_VeHSER_e_Clch2_StatControl_Value((&(VeHCCR_e_C2_StatControl)));
    if (KeHCCR_b_C2_StatControlOvrdEnbl)
    {
        /* Switch: '<S11>/Switch52' incorporates:
         *  Constant: '<S477>/Calib'
         */
        VeHCCR_e_C2_StatControl = KeHCCR_e_C2_StatControlOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch52' */

    /* Switch: '<S11>/Switch53' incorporates:
     *  Constant: '<S444>/Calib'
     *  Inport: '<Root>/VeHSER_e_Clch3_StatControl'
     */
#if Rte_SysCon_Variant_HCCR_C3

    (void)Rte_Read_VeHSER_e_Clch3_StatControl_Value((&(VeHCCR_e_C3_StatControl)));
    if (KeHCCR_b_C3_StatControlOvrdEnbl)
    {
        /* Switch: '<S11>/Switch53' incorporates:
         *  Constant: '<S480>/Calib'
         */
        VeHCCR_e_C3_StatControl = KeHCCR_e_C3_StatControlOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch53' */

    /* Switch: '<S11>/Switch23' incorporates:
     *  Constant: '<S460>/Calib'
     *  Inport: '<Root>/VeHSER_e_RngSt'
     */
#if Rte_SysCon_Variant_HCCR_C1_C3_TPEst

    (void)Rte_Read_VeHSER_e_RngSt_Value((&(VeHCCR_e_Clch_RngSt)));
    if (KeHCCR_b_RngStOvrdEnbl)
    {
        /* Switch: '<S11>/Switch23' incorporates:
         *  Constant: '<S483>/Calib'
         */
        VeHCCR_e_Clch_RngSt = KeHCCR_e_RngStOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch23' */

    /* Switch: '<S11>/Switch26' incorporates:
     *  Constant: '<S449>/Calib'
     *  Constant: '<S450>/Calib'
     *  Inport: '<Root>/VeOHSR_n_InputSpeedDsrdM1'
     *  Inport: '<Root>/VeOHSR_n_InputSpeedDsrdM2'
     *  Switch: '<S11>/Switch31'
     */
#if Rte_SysCon_Variant_HCCR_TPEst

    (void)Rte_Read_VeOHSR_n_InputSpeedDsrdM1_Value
        (&HCCR_ac_B.VeHCCR_n_InputSpeedDsrdM1);
    if (KeHCCR_b_InputSpdDsrdM1OvrdEnbl)
    {
        /* Switch: '<S11>/Switch26' incorporates:
         *  Constant: '<S488>/Calib'
         */
        HCCR_ac_B.VeHCCR_n_InputSpeedDsrdM1 = KeHCCR_n_InputSpdDsrdM1OvrdVal;
    }

    (void)Rte_Read_VeOHSR_n_InputSpeedDsrdM2_Value
        (&HCCR_ac_B.VeHCCR_n_InputSpeedDsrdM2);
    if (KeHCCR_b_InputSpdDsrdM2OvrdEnbl)
    {
        /* Switch: '<S11>/Switch31' incorporates:
         *  Constant: '<S489>/Calib'
         */
        HCCR_ac_B.VeHCCR_n_InputSpeedDsrdM2 = KeHCCR_n_InputSpdDsrdM2OvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch26' */

    /* Switch: '<S11>/Switch20' incorporates:
     *  Constant: '<S426>/Calib'
     *  Constant: '<S428>/Calib'
     *  Constant: '<S461>/Calib'
     *  Inport: '<Root>/VePMDR_b_RunCrankActive'
     *  Inport: '<Root>/VeTAPR_b_TransAuxPump_NotFlty'
     *  Inport: '<Root>/VeTAPR_n_AuxPumpSpdFltrd'
     *  Switch: '<S11>/Switch42'
     *  Switch: '<S11>/Switch43'
     */
#if Rte_SysCon_Variant_HCCR_LPresCntrl

    (void)Rte_Read_VePMDR_b_RunCrankActive_Value((&(VeHCCR_b_RunCrankActive)));
    if (KeHCCR_b_RunCrankActiveOvrdEnbl)
    {
        /* Switch: '<S11>/Switch20' incorporates:
         *  Constant: '<S462>/Calib'
         */
        VeHCCR_b_RunCrankActive = KeHCCR_b_RunCrankActiveOvrdVal;
    }

    (void)Rte_Read_VeTAPR_b_TransAuxPump_NotFlty_Value
        ((&(VeHCCR_b_Aux_Pump_Avail)));
    if (KeHCCR_b_AuxPumpAvailOvrdEnbl)
    {
        /* Switch: '<S11>/Switch43' incorporates:
         *  Constant: '<S427>/Calib'
         */
        VeHCCR_b_Aux_Pump_Avail = KeHCCR_b_AuxPumpAvailOvrdVal;
    }

    (void)Rte_Read_VeTAPR_n_AuxPumpSpdFltrd_Value((&(VeHCCR_n_AuxPumpSpdFltrd)));
    if (KeHCCR_b_AuxPumpSpdOvrdEnbl)
    {
        /* Switch: '<S11>/Switch42' incorporates:
         *  Constant: '<S484>/Calib'
         */
        VeHCCR_n_AuxPumpSpdFltrd = KeHCCR_n_AuxPumpSpdOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch20' */

    /* Switch: '<S11>/Switch15' incorporates:
     *  Constant: '<S465>/Calib'
     *  Inport: '<Root>/VeTFTR_T_TransOilTemp'
     */
#if Rte_SysCon_Variant_HCCR_C1_C2_C3_LPresCntrl_ClchEngy

    (void)Rte_Read_VeTFTR_T_TransOilTemp_Value((&(VeHCCR_T_TransOilTemp)));
    if (KeHCCR_b_TransOilTempOvrdEnbl)
    {
        /* Switch: '<S11>/Switch15' incorporates:
         *  Constant: '<S424>/Calib'
         */
        VeHCCR_T_TransOilTemp = KeHCCR_T_TransOilTempOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch15' */

    /* Switch: '<S11>/Switch44' incorporates:
     *  Constant: '<S452>/Calib'
     *  Constant: '<S453>/Calib'
     *  Inport: '<Root>/VeTHMR_dV_MtrA_CoolFlwCmd'
     *  Inport: '<Root>/VeTHMR_dV_MtrB_CoolFlwCmd'
     *  Switch: '<S11>/Switch45'
     */
#if Rte_SysCon_Variant_HCCR_LPresCntrl

    (void)Rte_Read_VeTHMR_dV_MtrA_CoolFlwCmd_Value((&(VeHCCR_dV_MtrA_CoolFlwCmd)));
    if (KeHCCR_b_MtrAFlowCmdOvrdEnbl)
    {
        /* Switch: '<S11>/Switch44' incorporates:
         *  Constant: '<S466>/Calib'
         */
        VeHCCR_dV_MtrA_CoolFlwCmd = KeHCCR_dV_MtrAFlowCmdOvrdVal;
    }

    (void)Rte_Read_VeTHMR_dV_MtrB_CoolFlwCmd_Value((&(VeHCCR_dV_MtrB_CoolFlwCmd)));
    if (KeHCCR_b_MtrBFlowCmdOvrdEnbl)
    {
        /* Switch: '<S11>/Switch45' incorporates:
         *  Constant: '<S467>/Calib'
         */
        VeHCCR_dV_MtrB_CoolFlwCmd = KeHCCR_dV_MtrBFlowCmdOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch44' */

    /* Switch: '<S11>/Switch34' incorporates:
     *  Constant: '<S448>/Calib'
     *  Inport: '<Root>/VeTISR_dn_InputAcceltn'
     */
#if Rte_SysCon_Variant_HCCR_TPEst

    (void)Rte_Read_VeTISR_dn_InputAcceltn_Value((&(VeHCCR_dn_InputAcceltn)));
    if (KeHCCR_b_InputAcceltnOvrdEnbl)
    {
        /* Switch: '<S11>/Switch34' incorporates:
         *  Constant: '<S468>/Calib'
         */
        VeHCCR_dn_InputAcceltn = KeHCCR_dn_InputAcceltnOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch34' */

    /* Switch: '<S11>/Switch35' incorporates:
     *  Constant: '<S451>/Calib'
     *  Constant: '<S457>/Calib'
     *  Inport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd'
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     *  Switch: '<S11>/Switch28'
     */
#if Rte_SysCon_Variant_HCCR_LPresCntr_TPEst

    (void)Rte_Read_VeTISR_n_InputSpeed_Value(&HCCR_ac_B.VeHCCR_n_InputSpd);
    if (KeHCCR_b_InputSpeedOvrdEnbl)
    {
        /* Switch: '<S11>/Switch35' incorporates:
         *  Constant: '<S490>/Calib'
         */
        HCCR_ac_B.VeHCCR_n_InputSpd = KeHCCR_n_InputSpeedOvrdVal;
    }

    (void)Rte_Read_VeCSVR_n_TransOutSpdSgndFltrd_Value
        (&HCCR_ac_B.VeHCCR_n_OutputSpd);
    if (KeHCCR_b_OutputSpdOvrdEnbl)
    {
        /* Switch: '<S11>/Switch28' incorporates:
         *  Constant: '<S491>/Calib'
         */
        HCCR_ac_B.VeHCCR_n_OutputSpd = KeHCCR_n_OutputSpdOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch35' */

    /* Switch: '<S11>/Switch40' incorporates:
     *  Constant: '<S433>/Calib'
     *  Inport: '<Root>/VeTRNR_e_C1Stat'
     */
#if Rte_SysCon_Variant_HCCR_C1

    (void)Rte_Read_VeTRNR_e_C1Stat_Value((&(VeHCCR_e_C1_Stat)));
    if (KeHCCR_b_C1_TRNRStatOvrdEnbl)
    {
        /* Switch: '<S11>/Switch40' incorporates:
         *  Constant: '<S475>/Calib'
         */
        VeHCCR_e_C1_Stat = KeHCCR_e_C1_TRNRStatOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch40' */

    /* Switch: '<S11>/Switch41' incorporates:
     *  Constant: '<S440>/Calib'
     *  Inport: '<Root>/VeTRNR_e_C2Stat'
     */
#if Rte_SysCon_Variant_HCCR_C2

    (void)Rte_Read_VeTRNR_e_C2Stat_Value((&(VeHCCR_e_C2_Stat)));
    if (KeHCCR_b_C2_TRNRStatOvrdEnbl)
    {
        /* Switch: '<S11>/Switch41' incorporates:
         *  Constant: '<S478>/Calib'
         */
        VeHCCR_e_C2_Stat = KeHCCR_e_C2_TRNRStatOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch41' */

    /* Switch: '<S11>/Switch47' incorporates:
     *  Constant: '<S445>/Calib'
     *  Inport: '<Root>/VeTRNR_e_C3Stat'
     */
#if Rte_SysCon_Variant_HCCR_C3

    (void)Rte_Read_VeTRNR_e_C3Stat_Value((&(VeHCCR_e_C3_Stat)));
    if (KeHCCR_b_C3_TRNRStatOvrdEnbl)
    {
        /* Switch: '<S11>/Switch47' incorporates:
         *  Constant: '<S481>/Calib'
         */
        VeHCCR_e_C3_Stat = KeHCCR_e_C3_TRNRStatOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch47' */

    /* Switch: '<S11>/Switch37' incorporates:
     *  Constant: '<S434>/Calib'
     *  Inport: '<Root>/VeHSER_M_Clch1_TorqCmnd'
     *  Inport: '<Root>/VeTMMR_M_Clch1TorqEst'
     */
#if Rte_SysCon_Variant_HCCR_C1

    if (KeHCCR_b_C1_TTQRTorqEstOvrdEnbl)
    {
        /* Switch: '<S11>/Switch37' incorporates:
         *  Constant: '<S420>/Calib'
         *  Inport: '<Root>/VeHSER_M_Clch1_TorqCmnd'
         */
        VeHCCR_M_C1_TorqEst = KeHCCR_M_C1_TTQRTorqEstOvrdVal;
    }
    else
    {
        (void)Rte_Read_VeTMMR_M_Clch1TorqEst_Value
            (&rtb_VeHCCR_n_C1MaxLockedSl_SelRaw);
        (void)Rte_Read_VeHSER_M_Clch1_TorqCmnd_Value((&(VeHCCR_M_C1_TorqEst)));

        /* Switch: '<S11>/Switch1' incorporates:
         *  Constant: '<S419>/Calib'
         *  Inport: '<Root>/VeHSER_M_Clch1_TorqCmnd'
         *  Inport: '<Root>/VeTMMR_M_Clch1TorqEst'
         */
        if (HeHCCR_b_TMMRTorqEstOvrdEnbl)
        {
            /* Switch: '<S11>/Switch37' */
            VeHCCR_M_C1_TorqEst = rtb_VeHCCR_n_C1MaxLockedSl_SelRaw;
        }

        /* End of Switch: '<S11>/Switch1' */
    }

#endif

    /* End of Switch: '<S11>/Switch37' */

    /* Switch: '<S11>/Switch39' incorporates:
     *  Constant: '<S441>/Calib'
     *  Inport: '<Root>/VeHSER_M_Clch2_TorqCmnd'
     *  Inport: '<Root>/VeTMMR_M_Clch2TorqEst'
     */
#if Rte_SysCon_Variant_HCCR_C2

    if (KeHCCR_b_C2_TTQRTorqEstOvrdEnbl)
    {
        /* Switch: '<S11>/Switch39' incorporates:
         *  Constant: '<S421>/Calib'
         *  Inport: '<Root>/VeHSER_M_Clch2_TorqCmnd'
         */
        VeHCCR_M_C2_TorqEst = KeHCCR_M_C2_TTQRTorqEstOvrdVal;
    }
    else
    {
        (void)Rte_Read_VeTMMR_M_Clch2TorqEst_Value(&rtb_Subtraction1_l);
        (void)Rte_Read_VeHSER_M_Clch2_TorqCmnd_Value((&(VeHCCR_M_C2_TorqEst)));

        /* Switch: '<S11>/Switch2' incorporates:
         *  Constant: '<S419>/Calib'
         *  Inport: '<Root>/VeHSER_M_Clch2_TorqCmnd'
         *  Inport: '<Root>/VeTMMR_M_Clch2TorqEst'
         */
        if (HeHCCR_b_TMMRTorqEstOvrdEnbl)
        {
            /* Switch: '<S11>/Switch39' */
            VeHCCR_M_C2_TorqEst = rtb_Subtraction1_l;
        }

        /* End of Switch: '<S11>/Switch2' */
    }

#endif

    /* End of Switch: '<S11>/Switch39' */

    /* Switch: '<S11>/Switch46' incorporates:
     *  Constant: '<S446>/Calib'
     *  Inport: '<Root>/VeHSER_M_Clch3_TorqCmnd'
     */
#if Rte_SysCon_Variant_HCCR_C3

    (void)Rte_Read_VeHSER_M_Clch3_TorqCmnd_Value((&(VeHCCR_M_C3_TorqEst)));
    if (KeHCCR_b_C3_TTQRTorqEstOvrdEnbl)
    {
        /* Switch: '<S11>/Switch46' incorporates:
         *  Constant: '<S422>/Calib'
         */
        VeHCCR_M_C3_TorqEst = KeHCCR_M_C3_TTQRTorqEstOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch46' */

    /* Switch: '<S11>/Switch71' incorporates:
     *  Constant: '<S463>/Calib'
     *  Inport: '<Root>/VeTRNR_b_EnblGearRatMon'
     */
#if Rte_SysCon_Variant_HCCR_C1STN_C3STN

    (void)Rte_Read_VeTRNR_b_EnblGearRatMon_Value((&(VeHCCR_b_TRNRGearRatMot)));
    if (KeHCCR_b_TRNRGearRatMonOvrdEnbl)
    {
        /* Switch: '<S11>/Switch71' incorporates:
         *  Constant: '<S464>/Calib'
         */
        VeHCCR_b_TRNRGearRatMot = KeHCCR_b_TRNRGearRatMonOvrdVal;
    }

#endif

    /* End of Switch: '<S11>/Switch71' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HCCC_CalMngr'
     */
#if Rte_SysCon_Variant_HCCR_C1

    /* Outputs for Atomic SubSystem: '<S64>/HCCC_C1StatCAL' */
    /* Outputs for Atomic SubSystem: '<S66>/HCCC_C1StatCAL' */
    /* DataTypeConversion: '<S70>/Data Type Conversion' incorporates:
     *  Constant: '<S71>/Constant'
     *  Constant: '<S72>/Constant'
     *  DataStoreRead: '<S70>/Data Store Read1'
     *  Logic: '<S70>/Logical1'
     *  RelationalOperator: '<S70>/Comparison1'
     *  RelationalOperator: '<S70>/Comparison4'
     */
    rtb_DataTypeConversion_k = (sint8)(((((uint32)VeHCCR_e_C1_Stat_DS) ==
        CeHCCR_e_ClLocked) || (((uint32)VeHCCR_e_C1_Stat_DS) ==
        CeHCCR_e_ClSynched)) ? 1 : 0);

    /* Switch: '<S84>/remap_M1XN' incorporates:
     *  Constant: '<S111>/Constant'
     *  Constant: '<S112>/Constant'
     *  RelationalOperator: '<S84>/Comparison1'
     *  RelationalOperator: '<S84>/Comparison9'
     *  Switch: '<S11>/Switch51'
     *  Switch: '<S84>/remap_bumpstart'
     */
    if (CeHSER_e_M1XN == ((uint32)VeHCCR_e_C1_StatControl))
    {
        /* Switch: '<S84>/remap_M1XN' incorporates:
         *  Constant: '<S84>/Constant Value1'
         */
        rtb_remap_M1XN_h = 1;
    }
    else if (CeHSER_e_BmpStrt == ((uint32)VeHCCR_e_C1_StatControl))
    {
        /* Switch: '<S84>/remap_bumpstart' incorporates:
         *  Constant: '<S84>/Constant Value'
         *  Switch: '<S84>/remap_M1XN'
         */
        rtb_remap_M1XN_h = 0;
    }
    else
    {
        /* Switch: '<S84>/remap_M1XN' incorporates:
         *  Switch: '<S84>/remap_bumpstart'
         */
        rtb_remap_M1XN_h = (sint16)VeHCCR_e_C1_StatControl;
    }

    /* End of Switch: '<S84>/remap_M1XN' */

    /* Switch: '<S70>/swtchSpeedFailOvrrd' */
    if (rtb_TmpSignalConversionAtVaCSLR_b_NCx_Sl[0])
    {
        /* Switch: '<S70>/swtchSpeedFailOvrrd' incorporates:
         *  Constant: '<S78>/Calib'
         *  Selector: '<S70>/Selector2'
         */
        rtb_VeHCCR_n_C1MaxLockedSl_SelRaw = KaHCCR_n_C1_MaxLockedSl_Fail
            [(rtb_DataTypeConversion_k)];
    }
    else
    {
        /* Switch: '<S70>/swtchSpeedFailOvrrd' incorporates:
         *  Constant: '<S77>/Calib'
         *  Selector: '<S70>/Selector1'
         */
        rtb_VeHCCR_n_C1MaxLockedSl_SelRaw = KaHCCR_n_C1_MaxLockedSl
            [(rtb_remap_M1XN_h * 2) + ((sint16)rtb_DataTypeConversion_k)];
    }

    /* End of Switch: '<S70>/swtchSpeedFailOvrrd' */

    /* Outputs for Atomic SubSystem: '<S70>/MaxLckdProc' */
#if Rte_SysCon_Variant_HCCR_C1STN

    /* Outputs for Atomic SubSystem: '<S83>/MaxLckdProc' */
    /* Logic: '<S86>/Logical' incorporates:
     *  Constant: '<S86>/Constant Value'
     *  Constant: '<S87>/Constant'
     *  RelationalOperator: '<S86>/Comparison1'
     *  RelationalOperator: '<S86>/Comparison4'
     *  Switch: '<S11>/Switch23'
     */
    rtb_Logical_j = ((((uint32)VeHCCR_e_Clch_RngSt) == CeHSER_e_ShiftToNeutEngOn)
                     && (rtb_TmpSignalConversionAtVeTMMR_i_ClchId == 6));

    /* Logic: '<S86>/Logical2' */
    rtb_Logical2_k = !rtb_Logical_j;

    /* Outputs for Atomic SubSystem: '<S86>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S96>/EdgeRising' */
    /* Logic: '<S110>/AND' incorporates:
     *  Logic: '<S110>/OR1'
     *  UnitDelay: '<S110>/Unit Delay'
     */
    rtb_AND_b0 = (rtb_Logical2_k && (!HCCR_ac_DW.UnitDelay_DSTATE_nh));

    /* Update for UnitDelay: '<S110>/Unit Delay' */
    HCCR_ac_DW.UnitDelay_DSTATE_nh = rtb_Logical2_k;

    /* End of Outputs for SubSystem: '<S96>/EdgeRising' */

    /* Logic: '<S96>/OR1' incorporates:
     *  Logic: '<S96>/AND'
     */
    rtb_Logical2_k = !rtb_Logical2_k;

    /* Switch: '<S96>/Switch1' incorporates:
     *  Constant: '<S92>/Calib'
     *  Constant: '<S93>/Calib'
     *  Constant: '<S96>/Constant Value1'
     *  Logic: '<S96>/OR'
     *  Logic: '<S96>/OR1'
     *  MinMax: '<S96>/Minimum'
     *  Sum: '<S96>/Summation'
     *  UnitDelay: '<S96>/Unit Delay'
     */
    if (rtb_Logical2_k || rtb_AND_b0)
    {
        HCCR_ac_DW.UnitDelay_DSTATE_dx = 0.0F;
    }
    else
    {
        HCCR_ac_DW.UnitDelay_DSTATE_dx = fminf(KeHCCR_t_MaxTm_C1MaxLckdSL,
            HeHCCR_t_MedTED_dT + HCCR_ac_DW.UnitDelay_DSTATE_dx);
    }

    /* End of Switch: '<S96>/Switch1' */
    /* End of Outputs for SubSystem: '<S86>/Turn On Delay Time' */

    /* Outputs for IfAction SubSystem: '<S86>/GearRatDisabled' incorporates:
     *  ActionPort: '<S89>/Action Port'
     */
    /* Outputs for IfAction SubSystem: '<S89>/TorquePhase' incorporates:
     *  ActionPort: '<S102>/Action Port'
     */
    /* If: '<S89>/If' incorporates:
     *  Abs: '<S102>/Abs'
     *  Abs: '<S86>/Abs'
     *  If: '<S86>/If'
     */
    rtb_Subtraction1_l = fabsf(HCCR_ac_B.VeHCCR_n_C1_SlipSpeed);

    /* End of Outputs for SubSystem: '<S89>/TorquePhase' */
    /* End of Outputs for SubSystem: '<S86>/GearRatDisabled' */

    /* Outputs for Atomic SubSystem: '<S86>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S86>/Turn On Delay Time' */
    /* Logic: '<S95>/OR' incorporates:
     *  Abs: '<S86>/Abs'
     *  Constant: '<S88>/Constant'
     *  Constant: '<S93>/Calib'
     *  DataStoreRead: '<S70>/Data Store Read1'
     *  Logic: '<S86>/Logical1'
     *  Logic: '<S86>/Logical4'
     *  Logic: '<S95>/NOT'
     *  Logic: '<S95>/OR1'
     *  Logic: '<S96>/AND'
     *  RelationalOperator: '<S70>/Comparison4'
     *  RelationalOperator: '<S86>/Comparison2'
     *  RelationalOperator: '<S86>/Comparison3'
     *  RelationalOperator: '<S96>/Greater  Than'
     *  UnitDelay: '<S95>/Unit Delay'
     *  UnitDelay: '<S96>/Unit Delay'
     */
    HCCR_ac_DW.UnitDelay_DSTATE_iz = (((rtb_Logical2_k ||
        (HCCR_ac_DW.UnitDelay_DSTATE_dx < KeHCCR_t_MaxTm_C1MaxLckdSL)) &&
        ((rtb_Subtraction1_l <= rtb_VeHCCR_n_C1MaxLockedSl_SelRaw) || (((uint32)
        VeHCCR_e_C1_Stat_DS) == CeHCCR_e_ClLocked))) && (rtb_Logical_j ||
        (HCCR_ac_DW.UnitDelay_DSTATE_iz)));

    /* End of Outputs for SubSystem: '<S86>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S86>/Signal Latch On With Reset' */

    /* If: '<S86>/If' incorporates:
     *  Constant: '<S80>/Calib'
     *  Constant: '<S91>/Calib'
     *  Logic: '<S86>/Logical3'
     *  Selector: '<S70>/Selector3'
     */
    if ((HeHCCR_b_NC1AdptvSpdTmrDsbl) || (VeHCCR_b_TRNRGearRatMot))
    {
        /* Outputs for IfAction SubSystem: '<S86>/GearRatEnabled' incorporates:
         *  ActionPort: '<S90>/Action Port'
         */
        HCCR_ac_GearRatEnabled(rtb_VeHCCR_n_C1MaxLockedSl_SelRaw,
                               KaHCCR_t_MinClLockedHold[(rtb_remap_M1XN_h)],
                               &rtb_VeHCCR_n_C1MaxLockedSl_SelRaw_g,
                               &HCCR_ac_B.VeHCCR_t_C1MinLockedHold_SelRaw);

        /* End of Outputs for SubSystem: '<S86>/GearRatEnabled' */
    }
    else if (HCCR_ac_DW.UnitDelay_DSTATE_iz)
    {
        /* Outputs for IfAction SubSystem: '<S86>/STN_and_IdxOffg' incorporates:
         *  ActionPort: '<S94>/Action Port'
         */
        /* VariantMerge generated from: '<S83>/n_C1MaxLockedSl' incorporates:
         *  Constant: '<S109>/Calib'
         *  Product: '<S94>/Product'
         */
        rtb_VeHCCR_n_C1MaxLockedSl_SelRaw_g = rtb_VeHCCR_n_C1MaxLockedSl_SelRaw *
            KeHCCR_r_NC1FctrMaxLckdSI_STN;

        /* VariantMerge generated from: '<S83>/t_C1_MinLockedHold' incorporates:
         *  Constant: '<S108>/Calib'
         *  Constant: '<S80>/Calib'
         *  Product: '<S94>/Product1'
         *  Selector: '<S70>/Selector3'
         */
        HCCR_ac_B.VeHCCR_t_C1MinLockedHold_SelRaw = KaHCCR_t_MinClLockedHold
            [(rtb_remap_M1XN_h)] * KeHCCR_r_C1_FctrMnHldTm_STN;

        /* End of Outputs for SubSystem: '<S86>/STN_and_IdxOffg' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S86>/GearRatDisabled' incorporates:
         *  ActionPort: '<S89>/Action Port'
         */
        /* RelationalOperator: '<S89>/Comparison4' incorporates:
         *  Constant: '<S97>/Constant'
         *  RelationalOperator: '<S84>/Comparison1'
         *  Switch: '<S11>/Switch51'
         */
        rtb_Logical2_k = (((uint32)VeHCCR_e_C1_StatControl) ==
                          CeHSER_e_ONComing_C2CTrqPhs);

        /* Outputs for Atomic SubSystem: '<S89>/EdgeRising' */
        /* Logic: '<S99>/AND' incorporates:
         *  Logic: '<S99>/OR1'
         *  UnitDelay: '<S99>/Unit Delay'
         */
        rtb_Logical_j = (rtb_Logical2_k && (!HCCR_ac_DW.UnitDelay_DSTATE_n2));

        /* Update for UnitDelay: '<S99>/Unit Delay' */
        HCCR_ac_DW.UnitDelay_DSTATE_n2 = rtb_Logical2_k;

        /* End of Outputs for SubSystem: '<S89>/EdgeRising' */

        /* If: '<S89>/If' incorporates:
         *  Constant: '<S98>/Constant'
         *  RelationalOperator: '<S84>/Comparison1'
         *  RelationalOperator: '<S89>/Comparison1'
         *  Switch: '<S11>/Switch51'
         */
        if (rtb_Logical2_k)
        {
            /* Outputs for IfAction SubSystem: '<S89>/TorquePhase' incorporates:
             *  ActionPort: '<S102>/Action Port'
             */
            /* Switch: '<S107>/Switch1' incorporates:
             *  Constant: '<S102>/Constant Value'
             */
            if (rtb_Logical_j)
            {
                HCCR_ac_DW.UnitDelay_DSTATE_gk = 0.0F;
            }

            /* MinMax: '<S102>/MinMax2' */
            HCCR_ac_B.MinMax2_e = fmaxf(rtb_Subtraction1_l,
                HCCR_ac_DW.UnitDelay_DSTATE_gk);

            /* VariantMerge generated from: '<S83>/n_C1MaxLockedSl' incorporates:
             *  Constant: '<S105>/Calib'
             *  Constant: '<S106>/Calib'
             *  MinMax: '<S102>/MinMax'
             *  MinMax: '<S102>/MinMax1'
             *  Product: '<S102>/Product'
             */
            rtb_VeHCCR_n_C1MaxLockedSl_SelRaw_g = fminf
                (rtb_VeHCCR_n_C1MaxLockedSl_SelRaw, fmaxf(HCCR_ac_B.MinMax2_e *
                  KeHCCR_r_NC1FctrMaxLckdSI, KeHCCR_n_NC1MinMaxLckdSI));

            /* Switch: '<S107>/Switch3' */
            if (rtb_Logical_j)
            {
                /* Switch: '<S107>/Switch1' incorporates:
                 *  Constant: '<S102>/Constant Value'
                 *  UnitDelay: '<S107>/Unit Delay'
                 */
                HCCR_ac_DW.UnitDelay_DSTATE_gk = 0.0F;
            }
            else
            {
                /* Switch: '<S107>/Switch1' incorporates:
                 *  UnitDelay: '<S107>/Unit Delay'
                 */
                HCCR_ac_DW.UnitDelay_DSTATE_gk = HCCR_ac_B.MinMax2_e;
            }

            /* End of Switch: '<S107>/Switch3' */
            /* End of Outputs for SubSystem: '<S89>/TorquePhase' */
        }
        else if (((uint32)VeHCCR_e_C1_StatControl) ==
                 CeHSER_e_ONComing_C2CSpdPhs)
        {
            /* Outputs for IfAction SubSystem: '<S89>/SpeedPhase' incorporates:
             *  ActionPort: '<S101>/Action Port'
             */
            /* VariantMerge generated from: '<S83>/n_C1MaxLockedSl' incorporates:
             *  Constant: '<S103>/Calib'
             *  Constant: '<S104>/Calib'
             *  MinMax: '<S101>/MinMax'
             *  MinMax: '<S101>/MinMax1'
             *  Product: '<S101>/Product'
             */
            rtb_VeHCCR_n_C1MaxLockedSl_SelRaw_g = fminf
                (rtb_VeHCCR_n_C1MaxLockedSl_SelRaw, fmaxf(HCCR_ac_B.MinMax2_e *
                  KeHCCR_r_NC1FctrMaxLckdSI, KeHCCR_n_NC1MinMaxLckdSI));

            /* End of Outputs for SubSystem: '<S89>/SpeedPhase' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S89>/NoC2C' incorporates:
             *  ActionPort: '<S100>/Action Port'
             */
            HCCR_ac_NoC2C(rtb_VeHCCR_n_C1MaxLockedSl_SelRaw,
                          &rtb_VeHCCR_n_C1MaxLockedSl_SelRaw_g);

            /* End of Outputs for SubSystem: '<S89>/NoC2C' */
        }

        /* VariantMerge generated from: '<S83>/t_C1_MinLockedHold' incorporates:
         *  Constant: '<S80>/Calib'
         *  Inport: '<S89>/t_Raw'
         *  Selector: '<S70>/Selector3'
         */
        HCCR_ac_B.VeHCCR_t_C1MinLockedHold_SelRaw = KaHCCR_t_MinClLockedHold
            [(rtb_remap_M1XN_h)];

        /* End of Outputs for SubSystem: '<S86>/GearRatDisabled' */
    }

    /* End of Outputs for SubSystem: '<S83>/MaxLckdProc' */
    /* End of Outputs for SubSystem: '<S70>/MaxLckdProc' */
#else

    /* Outputs for Atomic SubSystem: '<S83>/DisableC1STN' */
    /* VariantMerge generated from: '<S83>/n_C1MaxLockedSl' incorporates:
     *  Inport: '<S85>/n_CalRaw'
     */
    rtb_VeHCCR_n_C1MaxLockedSl_SelRaw_g = rtb_VeHCCR_n_C1MaxLockedSl_SelRaw;

    /* VariantMerge generated from: '<S83>/t_C1_MinLockedHold' incorporates:
     *  Constant: '<S80>/Calib'
     *  Inport: '<S85>/t_MinLockedHold_Raw'
     *  Selector: '<S70>/Selector3'
     */
    HCCR_ac_B.VeHCCR_t_C1MinLockedHold_SelRaw = KaHCCR_t_MinClLockedHold
        [(rtb_remap_M1XN_h)];

    /* End of Outputs for SubSystem: '<S83>/DisableC1STN' */
#endif

    /* Selector: '<S70>/Selector4' incorporates:
     *  Constant: '<S74>/Calib'
     *  Constant: '<S76>/Calib'
     *  Selector: '<S70>/Selector6'
     */
    VeHCCR_M_C1MinLockedTorq_Sel_tmp = ((sint32)rtb_remap_M1XN_h) * 2;

    /* Selector: '<S70>/Selector4' incorporates:
     *  Constant: '<S74>/Calib'
     */
    VeHCCR_M_C1MinLockedTorq_Sel =
        KaHCCR_M_C1_MinLockedTorq[VeHCCR_M_C1MinLockedTorq_Sel_tmp + ((sint32)
        rtb_DataTypeConversion_k)];

    /* Selector: '<S70>/Selector6' incorporates:
     *  Constant: '<S76>/Calib'
     */
    VeHCCR_dn_C1MaxSlRt_Sel =
        KaHCCR_dn_MaxClSlRt[VeHCCR_M_C1MinLockedTorq_Sel_tmp + ((sint32)
        rtb_DataTypeConversion_k)];

    /* Selector: '<S70>/Selector7' incorporates:
     *  Constant: '<S81>/Calib'
     */
    HCCR_ac_B.VeHCCR_t_C1MinNearSyncHold_Sel = KaHCCR_t_MinClNearSyncHold
        [(rtb_remap_M1XN_h)];

    /* Selector: '<S70>/Selector8' incorporates:
     *  Constant: '<S75>/Calib'
     */
    VeHCCR_dn_C1MaxNearSyncRt_Sel = KaHCCR_dn_MaxClNearSyncRt[(rtb_remap_M1XN_h)];

    /* Selector: '<S70>/Selector9' incorporates:
     *  Constant: '<S73>/Calib'
     */
    VeHCCR_M_C1MinActTorq_Sel = KaHCCR_M_C1_MinActTorq[(rtb_remap_M1XN_h)];

    /* Switch: '<S70>/swtchSpeedFailOvrrd2' */
    if (rtb_TmpSignalConversionAtVaCSLR_b_NCx_Sl[0])
    {
        /* Switch: '<S70>/swtchSpeedFailOvrrd2' incorporates:
         *  Constant: '<S82>/Calib'
         */
        HCCR_ac_B.VeHCCR_n_C1MaxNearSyncSl_Sel = KeHCCR_n_C1_MaxNearSyncSl_Fail;
    }
    else
    {
        /* Switch: '<S70>/swtchSpeedFailOvrrd2' incorporates:
         *  Constant: '<S79>/Calib'
         *  Selector: '<S70>/Selector11'
         */
        HCCR_ac_B.VeHCCR_n_C1MaxNearSyncSl_Sel = KaHCCR_n_C1_MaxNearSyncSl
            [(rtb_remap_M1XN_h)];
    }

    /* End of Switch: '<S70>/swtchSpeedFailOvrrd2' */
    /* End of Outputs for SubSystem: '<S66>/HCCC_C1StatCAL' */
    /* End of Outputs for SubSystem: '<S64>/HCCC_C1StatCAL' */
#endif

#if Rte_SysCon_Variant_HCCR_C2

    /* Outputs for Atomic SubSystem: '<S64>/HCCC_C2StatCAL Subsystem' */
    /* Outputs for Atomic SubSystem: '<S67>/HCCC_C2StatCAL' */
    /* DataTypeConversion: '<S113>/Data Type Conversion' incorporates:
     *  Constant: '<S114>/Constant'
     *  Constant: '<S115>/Constant'
     *  DataStoreRead: '<S113>/Data Store Read1'
     *  Logic: '<S113>/Logical1'
     *  RelationalOperator: '<S113>/Comparison1'
     *  RelationalOperator: '<S113>/Comparison4'
     */
    rtb_DataTypeConversion_k = (sint8)(((((uint32)VeHCCR_e_C2_Stat_DS) ==
        CeHCCR_e_ClLocked) || (((uint32)VeHCCR_e_C2_Stat_DS) ==
        CeHCCR_e_ClSynched)) ? 1 : 0);

    /* Switch: '<S126>/remap_M1XN' incorporates:
     *  Constant: '<S127>/Constant'
     *  Constant: '<S128>/Constant'
     *  RelationalOperator: '<S126>/Comparison1'
     *  RelationalOperator: '<S126>/Comparison9'
     *  Switch: '<S11>/Switch52'
     *  Switch: '<S126>/remap_bumpstart'
     */
    if (CeHSER_e_M1XN == ((uint32)VeHCCR_e_C2_StatControl))
    {
        /* Switch: '<S126>/remap_M1XN' incorporates:
         *  Constant: '<S126>/Constant Value1'
         */
        rtb_remap_M1XN_h = 1;
    }
    else if (CeHSER_e_BmpStrt == ((uint32)VeHCCR_e_C2_StatControl))
    {
        /* Switch: '<S126>/remap_bumpstart' incorporates:
         *  Constant: '<S126>/Constant Value'
         *  Switch: '<S126>/remap_M1XN'
         */
        rtb_remap_M1XN_h = 0;
    }
    else
    {
        /* Switch: '<S126>/remap_M1XN' incorporates:
         *  Switch: '<S126>/remap_bumpstart'
         */
        rtb_remap_M1XN_h = (sint16)VeHCCR_e_C2_StatControl;
    }

    /* End of Switch: '<S126>/remap_M1XN' */

    /* Selector: '<S113>/Selector14' incorporates:
     *  Constant: '<S116>/Calib'
     */
    VeHCCR_M_C2MinActTorq_Sel = KaHCCR_M_C2_MinActTorq[(rtb_remap_M1XN_h)];

    /* Selector: '<S113>/Selector3' incorporates:
     *  Constant: '<S123>/Calib'
     */
    HCCR_ac_B.VeHCCR_t_C2MinLockedHold_Sel = KaHCCR_t_MinClLockedHold
        [(rtb_remap_M1XN_h)];

    /* Selector: '<S113>/Selector5' incorporates:
     *  Constant: '<S117>/Calib'
     *  Constant: '<S119>/Calib'
     *  Constant: '<S120>/Calib'
     *  Selector: '<S113>/Selector2'
     *  Selector: '<S113>/Selector6'
     *  Switch: '<S113>/swtchSpeedFailOvrrd'
     */
    VeHCCR_M_C1MinLockedTorq_Sel_tmp = (((sint32)rtb_remap_M1XN_h) * 2) +
        ((sint32)rtb_DataTypeConversion_k);

    /* Selector: '<S113>/Selector5' incorporates:
     *  Constant: '<S117>/Calib'
     */
    VeHCCR_M_C2MinLockedTorq_Sel = KaHCCR_M_C2_MinLockedTorq
        [(VeHCCR_M_C1MinLockedTorq_Sel_tmp)];

    /* Selector: '<S113>/Selector6' incorporates:
     *  Constant: '<S119>/Calib'
     */
    VeHCCR_dn_C2MaxSlRt_Sel = KaHCCR_dn_MaxClSlRt
        [(VeHCCR_M_C1MinLockedTorq_Sel_tmp)];

    /* Selector: '<S113>/Selector7' incorporates:
     *  Constant: '<S124>/Calib'
     */
    HCCR_ac_B.VeHCCR_t_C2MinNearSyncHold_Sel = KaHCCR_t_MinClNearSyncHold
        [(rtb_remap_M1XN_h)];

    /* Selector: '<S113>/Selector8' incorporates:
     *  Constant: '<S118>/Calib'
     */
    VeHCCR_dn_C2MaxNearSyncRt_Sel = KaHCCR_dn_MaxClNearSyncRt[(rtb_remap_M1XN_h)];

    /* Switch: '<S113>/swtchSpeedFailOvrrd' */
    if (rtb_TmpSignalConversionAtVaCSLR_b_NCx_Sl[1])
    {
        /* Switch: '<S113>/swtchSpeedFailOvrrd' incorporates:
         *  Constant: '<S121>/Calib'
         *  Selector: '<S113>/Selector4'
         */
        HCCR_ac_B.VeHCCR_n_C2MaxLockedSl_Sel = KaHCCR_n_C2_MaxLockedSl_Fail
            [(rtb_DataTypeConversion_k)];
    }
    else
    {
        /* Switch: '<S113>/swtchSpeedFailOvrrd' incorporates:
         *  Constant: '<S120>/Calib'
         *  Selector: '<S113>/Selector2'
         */
        HCCR_ac_B.VeHCCR_n_C2MaxLockedSl_Sel = KaHCCR_n_C2_MaxLockedSl
            [(VeHCCR_M_C1MinLockedTorq_Sel_tmp)];
    }

    /* Switch: '<S113>/swtchSpeedFailOvrrd2' */
    if (rtb_TmpSignalConversionAtVaCSLR_b_NCx_Sl[1])
    {
        /* Switch: '<S113>/swtchSpeedFailOvrrd2' incorporates:
         *  Constant: '<S125>/Calib'
         */
        HCCR_ac_B.VeHCCR_n_C2MaxNearSyncSl_Sel = KeHCCR_n_C2_MaxNearSyncSl_Fail;
    }
    else
    {
        /* Switch: '<S113>/swtchSpeedFailOvrrd2' incorporates:
         *  Constant: '<S122>/Calib'
         *  Selector: '<S113>/Selector13'
         */
        HCCR_ac_B.VeHCCR_n_C2MaxNearSyncSl_Sel = KaHCCR_n_C2_MaxNearSyncSl
            [(rtb_remap_M1XN_h)];
    }

    /* End of Switch: '<S113>/swtchSpeedFailOvrrd2' */
    /* End of Outputs for SubSystem: '<S67>/HCCC_C2StatCAL' */
    /* End of Outputs for SubSystem: '<S64>/HCCC_C2StatCAL Subsystem' */
#endif

#if Rte_SysCon_Variant_HCCR_C3

    /* Outputs for Atomic SubSystem: '<S64>/HCCC_C3StatCAL Subsystem' */
    /* Outputs for Atomic SubSystem: '<S68>/HCCC_C3StatCAL' */
    /* DataTypeConversion: '<S129>/Data Type Conversion' incorporates:
     *  Constant: '<S130>/Constant'
     *  Constant: '<S131>/Constant'
     *  DataStoreRead: '<S129>/Data Store Read1'
     *  Logic: '<S129>/Logical1'
     *  RelationalOperator: '<S129>/Comparison1'
     *  RelationalOperator: '<S129>/Comparison4'
     */
    rtb_DataTypeConversion_k = (sint8)(((((uint32)VeHCCR_e_C3_Stat_DS) ==
        CeHCCR_e_ClLocked) || (((uint32)VeHCCR_e_C3_Stat_DS) ==
        CeHCCR_e_ClSynched)) ? 1 : 0);

    /* Abs: '<S143>/Abs' incorporates:
     *  RelationalOperator: '<S143>/Comparison1'
     */
#if Rte_SysCon_Variant_HCCR_C3STN

    /* Abs: '<S143>/Abs' */
    rtb_Abs = fabsf(HCCR_ac_B.VeHCCR_n_C3_SlipSpeed);

    /* RelationalOperator: '<S143>/Comparison1' incorporates:
     *  Constant: '<S143>/Constant Value'
     */
    rtb_Comparison1_ng = (rtb_TmpSignalConversionAtVeTMMR_i_ClchId == 6);

#endif

    /* End of Abs: '<S143>/Abs' */

    /* Switch: '<S144>/remap_M1XN' incorporates:
     *  Constant: '<S169>/Constant'
     *  Constant: '<S170>/Constant'
     *  RelationalOperator: '<S144>/Comparison1'
     *  RelationalOperator: '<S144>/Comparison9'
     *  Switch: '<S11>/Switch53'
     *  Switch: '<S144>/remap_bumpstart'
     */
    if (CeHSER_e_M1XN == ((uint32)VeHCCR_e_C3_StatControl))
    {
        /* Switch: '<S144>/remap_M1XN' incorporates:
         *  Constant: '<S144>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeTMMR_i_ClchId = 1;
    }
    else if (CeHSER_e_BmpStrt == ((uint32)VeHCCR_e_C3_StatControl))
    {
        /* Switch: '<S144>/remap_bumpstart' incorporates:
         *  Constant: '<S144>/Constant Value'
         *  Switch: '<S144>/remap_M1XN'
         */
        rtb_TmpSignalConversionAtVeTMMR_i_ClchId = 0;
    }
    else
    {
        /* Switch: '<S144>/remap_M1XN' incorporates:
         *  Switch: '<S144>/remap_bumpstart'
         */
        rtb_TmpSignalConversionAtVeTMMR_i_ClchId = (sint16)
            VeHCCR_e_C3_StatControl;
    }

    /* End of Switch: '<S144>/remap_M1XN' */

    /* Switch: '<S129>/swtchSpeedFailOvrrd' */
    if (rtb_TmpSignalConversionAtVaCSLR_b_NCx_Sl[2])
    {
        /* Switch: '<S129>/swtchSpeedFailOvrrd' incorporates:
         *  Constant: '<S138>/Calib'
         *  Selector: '<S129>/Selector4'
         */
        rtb_VeHCCR_n_C1MaxLockedSl_SelRaw = KaHCCR_n_C3_MaxLockedSl_Fail
            [(rtb_DataTypeConversion_k)];
    }
    else
    {
        /* Switch: '<S129>/swtchSpeedFailOvrrd' incorporates:
         *  Constant: '<S137>/Calib'
         *  Selector: '<S129>/Selector2'
         */
        rtb_VeHCCR_n_C1MaxLockedSl_SelRaw = KaHCCR_n_C3_MaxLockedSl
            [(rtb_TmpSignalConversionAtVeTMMR_i_ClchId * 2) + ((sint16)
            rtb_DataTypeConversion_k)];
    }

    /* End of Switch: '<S129>/swtchSpeedFailOvrrd' */

    /* If: '<S143>/If' incorporates:
     *  Constant: '<S140>/Calib'
     *  Constant: '<S149>/Calib'
     *  Logic: '<S143>/Logical'
     *  Logic: '<S143>/Logical1'
     *  Logic: '<S143>/Logical2'
     *  Logic: '<S143>/Logical3'
     *  Logic: '<S143>/Logical4'
     *  RelationalOperator: '<S143>/Comparison2'
     *  RelationalOperator: '<S143>/Comparison3'
     *  RelationalOperator: '<S143>/Comparison4'
     *  Selector: '<S129>/Selector3'
     */
#if Rte_SysCon_Variant_HCCR_C3STN

    /* Outputs for Atomic SubSystem: '<S143>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S143>/Turn On Delay Time' */
    /* Logic: '<S143>/Logical' incorporates:
     *  Constant: '<S145>/Constant'
     *  Switch: '<S11>/Switch23'
     */
    rtb_Comparison1_ng = ((((uint32)VeHCCR_e_Clch_RngSt) ==
                           CeHSER_e_ShiftToNeutEngOn) && rtb_Comparison1_ng);

    /* Logic: '<S143>/Logical2' */
    rtb_Logical2_k = !rtb_Comparison1_ng;

    /* Outputs for Atomic SubSystem: '<S154>/EdgeRising' */
    /* Logic: '<S168>/AND' incorporates:
     *  Logic: '<S168>/OR1'
     *  UnitDelay: '<S168>/Unit Delay'
     */
    rtb_Logical_j = (rtb_Logical2_k && (!HCCR_ac_DW.UnitDelay_DSTATE_ef));

    /* Update for UnitDelay: '<S168>/Unit Delay' */
    HCCR_ac_DW.UnitDelay_DSTATE_ef = rtb_Logical2_k;

    /* End of Outputs for SubSystem: '<S154>/EdgeRising' */

    /* Logic: '<S154>/OR1' incorporates:
     *  Logic: '<S154>/AND'
     */
    rtb_Logical2_k = !rtb_Logical2_k;

    /* Switch: '<S154>/Switch1' incorporates:
     *  Constant: '<S150>/Calib'
     *  Constant: '<S151>/Calib'
     *  Constant: '<S154>/Constant Value1'
     *  Logic: '<S154>/OR'
     *  Logic: '<S154>/OR1'
     *  MinMax: '<S154>/Minimum'
     *  Sum: '<S154>/Summation'
     *  UnitDelay: '<S154>/Unit Delay'
     */
    if (rtb_Logical2_k || rtb_Logical_j)
    {
        HCCR_ac_DW.UnitDelay_DSTATE_ja = 0.0F;
    }
    else
    {
        HCCR_ac_DW.UnitDelay_DSTATE_ja = fminf(KeHCCR_t_MaxTm_C3MaxLckdSL,
            HeHCCR_t_MedTED_dT + HCCR_ac_DW.UnitDelay_DSTATE_ja);
    }

    /* End of Switch: '<S154>/Switch1' */

    /* Logic: '<S153>/OR' incorporates:
     *  Constant: '<S146>/Constant'
     *  Constant: '<S151>/Calib'
     *  DataStoreRead: '<S129>/Data Store Read1'
     *  Logic: '<S153>/NOT'
     *  Logic: '<S153>/OR1'
     *  Logic: '<S154>/AND'
     *  RelationalOperator: '<S129>/Comparison4'
     *  RelationalOperator: '<S154>/Greater  Than'
     *  UnitDelay: '<S153>/Unit Delay'
     *  UnitDelay: '<S154>/Unit Delay'
     */
    HCCR_ac_DW.UnitDelay_DSTATE_ar = (((rtb_Logical2_k ||
        (HCCR_ac_DW.UnitDelay_DSTATE_ja < KeHCCR_t_MaxTm_C3MaxLckdSL)) &&
        ((rtb_Abs <= rtb_VeHCCR_n_C1MaxLockedSl_SelRaw) || (((uint32)
        VeHCCR_e_C3_Stat_DS) == CeHCCR_e_ClLocked))) && (rtb_Comparison1_ng ||
        (HCCR_ac_DW.UnitDelay_DSTATE_ar)));
    if ((HeHCCR_b_NC3AdptvSpdTmrDsbl) || (VeHCCR_b_TRNRGearRatMot))
    {
        /* Outputs for IfAction SubSystem: '<S143>/GearRatEnabled' incorporates:
         *  ActionPort: '<S148>/Action Port'
         */
        HCCR_ac_GearRatEnabled(rtb_VeHCCR_n_C1MaxLockedSl_SelRaw,
                               KaHCCR_t_MinClLockedHold
                               [(rtb_TmpSignalConversionAtVeTMMR_i_ClchId)],
                               &HCCR_ac_B.VariantMerge_For_Variant_Source_Variant_,
                               &HCCR_ac_B.VariantMerge_For_Variant_Source_Varian_g);

        /* End of Outputs for SubSystem: '<S143>/GearRatEnabled' */
    }
    else if (HCCR_ac_DW.UnitDelay_DSTATE_ar)
    {
        /* Outputs for IfAction SubSystem: '<S143>/STN_and_IdxOffg' incorporates:
         *  ActionPort: '<S152>/Action Port'
         */
        /* VariantMerge generated from: '<S129>/Variant_Source' incorporates:
         *  Constant: '<S167>/Calib'
         *  Product: '<S152>/Product'
         */
        HCCR_ac_B.VariantMerge_For_Variant_Source_Variant_ =
            rtb_VeHCCR_n_C1MaxLockedSl_SelRaw * KeHCCR_r_NC3FctrMaxLckdSI_STN;

        /* VariantMerge generated from: '<S129>/Variant_Source1' incorporates:
         *  Constant: '<S140>/Calib'
         *  Constant: '<S166>/Calib'
         *  Product: '<S152>/Product1'
         *  Selector: '<S129>/Selector3'
         */
        HCCR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
            KaHCCR_t_MinClLockedHold[(rtb_TmpSignalConversionAtVeTMMR_i_ClchId)]
            * KeHCCR_r_C3_FctrMnHldTm_STN;

        /* End of Outputs for SubSystem: '<S143>/STN_and_IdxOffg' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S143>/GearRatDisabled' incorporates:
         *  ActionPort: '<S147>/Action Port'
         */
        /* RelationalOperator: '<S147>/Comparison4' incorporates:
         *  Constant: '<S155>/Constant'
         *  RelationalOperator: '<S144>/Comparison1'
         *  Switch: '<S11>/Switch53'
         */
        rtb_Logical2_k = (((uint32)VeHCCR_e_C3_StatControl) ==
                          CeHSER_e_ONComing_C2CTrqPhs);

        /* Outputs for Atomic SubSystem: '<S147>/EdgeRising' */
        /* Logic: '<S157>/AND' incorporates:
         *  Logic: '<S157>/OR1'
         *  UnitDelay: '<S157>/Unit Delay'
         */
        rtb_Comparison1_ng = (rtb_Logical2_k &&
                              (!HCCR_ac_DW.UnitDelay_DSTATE_fdf));

        /* Update for UnitDelay: '<S157>/Unit Delay' */
        HCCR_ac_DW.UnitDelay_DSTATE_fdf = rtb_Logical2_k;

        /* End of Outputs for SubSystem: '<S147>/EdgeRising' */

        /* If: '<S147>/If' incorporates:
         *  Constant: '<S156>/Constant'
         *  RelationalOperator: '<S144>/Comparison1'
         *  RelationalOperator: '<S147>/Comparison1'
         *  Switch: '<S11>/Switch53'
         */
        if (rtb_Logical2_k)
        {
            /* Outputs for IfAction SubSystem: '<S147>/TorquePhase' incorporates:
             *  ActionPort: '<S160>/Action Port'
             */
            /* Switch: '<S165>/Switch1' incorporates:
             *  Constant: '<S160>/Constant Value'
             */
            if (rtb_Comparison1_ng)
            {
                HCCR_ac_DW.UnitDelay_DSTATE_d2 = 0.0F;
            }

            /* MinMax: '<S160>/MinMax2' incorporates:
             *  Abs: '<S160>/Abs'
             */
            HCCR_ac_B.MinMax2 = fmaxf(fabsf(HCCR_ac_B.VeHCCR_n_C3_SlipSpeed),
                HCCR_ac_DW.UnitDelay_DSTATE_d2);

            /* VariantMerge generated from: '<S129>/Variant_Source' incorporates:
             *  Constant: '<S163>/Calib'
             *  Constant: '<S164>/Calib'
             *  MinMax: '<S160>/MinMax'
             *  MinMax: '<S160>/MinMax1'
             *  Product: '<S160>/Product'
             */
            HCCR_ac_B.VariantMerge_For_Variant_Source_Variant_ = fminf
                (rtb_VeHCCR_n_C1MaxLockedSl_SelRaw, fmaxf(HCCR_ac_B.MinMax2 *
                  KeHCCR_r_NC3FctrMaxLckdSI, KeHCCR_n_NC3MinMaxLckdSI));

            /* Switch: '<S165>/Switch3' */
            if (rtb_Comparison1_ng)
            {
                /* Switch: '<S165>/Switch1' incorporates:
                 *  Constant: '<S160>/Constant Value'
                 *  UnitDelay: '<S165>/Unit Delay'
                 */
                HCCR_ac_DW.UnitDelay_DSTATE_d2 = 0.0F;
            }
            else
            {
                /* Switch: '<S165>/Switch1' incorporates:
                 *  UnitDelay: '<S165>/Unit Delay'
                 */
                HCCR_ac_DW.UnitDelay_DSTATE_d2 = HCCR_ac_B.MinMax2;
            }

            /* End of Switch: '<S165>/Switch3' */
            /* End of Outputs for SubSystem: '<S147>/TorquePhase' */
        }
        else if (((uint32)VeHCCR_e_C3_StatControl) ==
                 CeHSER_e_ONComing_C2CSpdPhs)
        {
            /* Outputs for IfAction SubSystem: '<S147>/SpeedPhase' incorporates:
             *  ActionPort: '<S159>/Action Port'
             */
            /* VariantMerge generated from: '<S129>/Variant_Source' incorporates:
             *  Constant: '<S161>/Calib'
             *  Constant: '<S162>/Calib'
             *  MinMax: '<S159>/MinMax'
             *  MinMax: '<S159>/MinMax1'
             *  Product: '<S159>/Product'
             */
            HCCR_ac_B.VariantMerge_For_Variant_Source_Variant_ = fminf
                (rtb_VeHCCR_n_C1MaxLockedSl_SelRaw, fmaxf(HCCR_ac_B.MinMax2 *
                  KeHCCR_r_NC3FctrMaxLckdSI, KeHCCR_n_NC3MinMaxLckdSI));

            /* End of Outputs for SubSystem: '<S147>/SpeedPhase' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S147>/NoC2C' incorporates:
             *  ActionPort: '<S158>/Action Port'
             */
            HCCR_ac_NoC2C(rtb_VeHCCR_n_C1MaxLockedSl_SelRaw,
                          &HCCR_ac_B.VariantMerge_For_Variant_Source_Variant_);

            /* End of Outputs for SubSystem: '<S147>/NoC2C' */
        }

        /* End of If: '<S147>/If' */

        /* VariantMerge generated from: '<S129>/Variant_Source1' incorporates:
         *  Constant: '<S140>/Calib'
         *  Inport: '<S147>/t_Raw'
         *  Selector: '<S129>/Selector3'
         */
        HCCR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
            KaHCCR_t_MinClLockedHold[(rtb_TmpSignalConversionAtVeTMMR_i_ClchId)];

        /* End of Outputs for SubSystem: '<S143>/GearRatDisabled' */
    }

    /* End of Outputs for SubSystem: '<S143>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S143>/Signal Latch On With Reset' */
#endif

    /* End of If: '<S143>/If' */

    /* Selector: '<S129>/Selector14' incorporates:
     *  Constant: '<S133>/Calib'
     */
    VeHCCR_M_C3MinActTorq_Sel = KaHCCR_M_C3_MinActTorq
        [(rtb_TmpSignalConversionAtVeTMMR_i_ClchId)];

    /* Selector: '<S129>/Selector5' incorporates:
     *  Constant: '<S134>/Calib'
     *  Constant: '<S136>/Calib'
     *  Selector: '<S129>/Selector6'
     */
    VeHCCR_M_C1MinLockedTorq_Sel_tmp = (((sint32)
        rtb_TmpSignalConversionAtVeTMMR_i_ClchId) * 2) + ((sint32)
        rtb_DataTypeConversion_k);

    /* Selector: '<S129>/Selector5' incorporates:
     *  Constant: '<S134>/Calib'
     */
    VeHCCR_M_C3MinLockedTorq_Sel = KaHCCR_M_C3_MinLockedTorq
        [(VeHCCR_M_C1MinLockedTorq_Sel_tmp)];

    /* Selector: '<S129>/Selector6' incorporates:
     *  Constant: '<S136>/Calib'
     */
    VeHCCR_dn_C3MaxSlRt_Sel = KaHCCR_dn_MaxClSlRt
        [(VeHCCR_M_C1MinLockedTorq_Sel_tmp)];

    /* Selector: '<S129>/Selector7' incorporates:
     *  Constant: '<S141>/Calib'
     */
    HCCR_ac_B.VeHCCR_t_C3MinNearSyncHold_Sel = KaHCCR_t_MinClNearSyncHold
        [(rtb_TmpSignalConversionAtVeTMMR_i_ClchId)];

    /* Selector: '<S129>/Selector8' incorporates:
     *  Constant: '<S135>/Calib'
     */
    VeHCCR_dn_C3MaxNearSyncRt_Sel = KaHCCR_dn_MaxClNearSyncRt
        [(rtb_TmpSignalConversionAtVeTMMR_i_ClchId)];

    /* SignalConversion generated from: '<S129>/Variant_Source1' incorporates:
     *  SignalConversion generated from: '<S129>/Variant_Source'
     */
#if !Rte_SysCon_Variant_HCCR_C3STN

    /* VariantMerge generated from: '<S129>/Variant_Source1' incorporates:
     *  Constant: '<S140>/Calib'
     *  Selector: '<S129>/Selector3'
     */
    HCCR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
        KaHCCR_t_MinClLockedHold[(rtb_TmpSignalConversionAtVeTMMR_i_ClchId)];

    /* VariantMerge generated from: '<S129>/Variant_Source' */
    HCCR_ac_B.VariantMerge_For_Variant_Source_Variant_ =
        rtb_VeHCCR_n_C1MaxLockedSl_SelRaw;

#endif

    /* End of SignalConversion generated from: '<S129>/Variant_Source1' */

    /* Switch: '<S129>/swtchSpeedFailOvrrd2' */
    if (rtb_TmpSignalConversionAtVaCSLR_b_NCx_Sl[2])
    {
        /* Switch: '<S129>/swtchSpeedFailOvrrd2' incorporates:
         *  Constant: '<S142>/Calib'
         */
        HCCR_ac_B.VeHCCR_n_C3MaxNearSyncSl_Sel = KeHCCR_n_C3_MaxNearSyncSl_Fail;
    }
    else
    {
        /* Switch: '<S129>/swtchSpeedFailOvrrd2' incorporates:
         *  Constant: '<S139>/Calib'
         *  Selector: '<S129>/Selector13'
         */
        HCCR_ac_B.VeHCCR_n_C3MaxNearSyncSl_Sel = KaHCCR_n_C3_MaxNearSyncSl
            [(rtb_TmpSignalConversionAtVeTMMR_i_ClchId)];
    }

    /* End of Switch: '<S129>/swtchSpeedFailOvrrd2' */
    /* End of Outputs for SubSystem: '<S68>/HCCC_C3StatCAL' */
    /* End of Outputs for SubSystem: '<S64>/HCCC_C3StatCAL Subsystem' */
#endif

    /* Gain: '<S69>/Gain' */
#if Rte_SysCon_Variant_HCCR_C1

    /* Gain: '<S69>/Gain' */
    VeHCCR_n_C1MaxLockedSl_Sel = rtb_VeHCCR_n_C1MaxLockedSl_SelRaw_g;

#endif

    /* End of Gain: '<S69>/Gain' */
#if Rte_SysCon_Variant_HCCR_LPresCntrl

    /* Outputs for Function Call SubSystem: '<S1>/SiEVT' */
    /* Product: '<S496>/Multiplication2' incorporates:
     *  Constant: '<S501>/Calib'
     *  Lookup_n-D: '<S502>/Vector'
     *  Switch: '<S11>/Switch15'
     *  Switch: '<S11>/Switch42'
     */
    VeHCCR_dV_ActAuxPumpFlow = (VeHCCR_n_AuxPumpSpdFltrd *
        KeHCCR_K_AuxPumpVolPerRev) * look2_iflf_binlca_16a(VeHCCR_T_TransOilTemp,
        VeHCCR_n_AuxPumpSpdFltrd, ((const float32 *)
        &(KxHCCR_K_AuxPumpVolumetricEff[0])), ((const float32 *)
        &(KyHCCR_K_AuxPumpVolumetricEff[0])), ((const float32 *)
        &(KtHCCR_K_AuxPumpVolumetricEff[0])), HCCR_ac_ConstP.pooled8, 5U);

    /* Outputs for Atomic SubSystem: '<S522>/HCCC_AuxPmpSpdDsrd' */
    /* Lookup_n-D: '<S499>/Vector' incorporates:
     *  Lookup_n-D: '<S551>/Vector'
     *  Switch: '<S11>/Switch15'
     */
    VeHCCR_K_AuxPumpLeakage = look1_iflf_binlca_16a(VeHCCR_T_TransOilTemp, ((
        const float32 *)&(KxHCCR_K_AuxPumpLeakage[0])), ((const float32 *)
        &(KtHCCR_K_AuxPumpLeakage[0])), 4U);

    /* End of Outputs for SubSystem: '<S522>/HCCC_AuxPmpSpdDsrd' */

    /* MinMax: '<S496>/MinMax1' incorporates:
     *  Constant: '<S496>/Constant Value'
     *  Sum: '<S496>/Subtraction1'
     */
    VeHCCR_dV_AuxFlowRt = fmaxf(VeHCCR_dV_ActAuxPumpFlow, 0.0F);

    /* Sum: '<S503>/Sum5' incorporates:
     *  Constant: '<S506>/Calib'
     *  Switch: '<S513>/Switch2'
     *  UnitDelay: '<S513>/Unit Delay'
     */
    HCCR_ac_B.Gain_e = KeHCCR_V_TotalTransFluidVol -
        HCCR_ac_DW.UnitDelay_DSTATE_a5;

    /* Product: '<S503>/Product3' incorporates:
     *  Lookup_n-D: '<S507>/Vector'
     *  Lookup_n-D: '<S508>/Vector'
     *  Switch: '<S11>/Switch15'
     *  Switch: '<S11>/Switch28'
     *  Switch: '<S11>/Switch35'
     */
    VeHCCR_dV_UpperSump_FlowRt = (HCCR_ac_B.Gain_e * look1_iflf_binlca_16a
        (VeHCCR_T_TransOilTemp, ((const float32 *)&(KxHCCR_K_Flow_UpperSump[0])),
         ((const float32 *)&(KtHCCR_K_Flow_UpperSump[0])), 5U)) *
        look2_iflf_binlca_16a(HCCR_ac_B.VeHCCR_n_InputSpd,
        HCCR_ac_B.VeHCCR_n_OutputSpd, ((const float32 *)
        &(KxHCCR_K_TransitVolFactor[0])), ((const float32 *)
        &(KyHCCR_K_TransitVolFactor[0])), ((const float32 *)
        &(KtHCCR_K_TransitVolFactor[0])), HCCR_ac_ConstP.pooled7, 7U);

    /* Product: '<S498>/Multiplication3' incorporates:
     *  Constant: '<S516>/Calib'
     */
    VeHCCR_n_ActMainPumpSpd = HCCR_ac_B.VeHCCR_n_OutputSpd *
        KeHCCR_r_MainPumpGR2No;

    /* Product: '<S498>/Multiplication1' incorporates:
     *  Constant: '<S515>/Calib'
     *  Lookup_n-D: '<S517>/Vector'
     *  Product: '<S498>/Multiplication3'
     *  Switch: '<S11>/Switch15'
     */
    VeHCCR_dV_ActMainPumpFlow = (VeHCCR_n_ActMainPumpSpd *
        KeHCCR_K_MainPumpVolPerRev) * look2_iflf_binlca_16a
        (VeHCCR_T_TransOilTemp, VeHCCR_n_ActMainPumpSpd, ((const float32 *)
          &(KxHCCR_K_MainPumpVolumetricEff[0])), ((const float32 *)
          &(KyHCCR_K_MainPumpVolumetricEff[0])), ((const float32 *)
          &(KtHCCR_K_MainPumpVolumetricEff[0])), HCCR_ac_ConstP.pooled8, 5U);

    /* MinMax: '<S498>/MinMax1' incorporates:
     *  Constant: '<S493>/Constant Value1'
     *  Constant: '<S498>/Constant Value'
     *  Lookup_n-D: '<S500>/Vector'
     *  Product: '<S498>/Multiplication2'
     *  Sum: '<S498>/Subtraction1'
     *  Switch: '<S11>/Switch15'
     */
    VeHCCR_dV_MainFlowRt = fmaxf(VeHCCR_dV_ActMainPumpFlow -
        (look1_iflf_binlca_16a(VeHCCR_T_TransOilTemp, ((const float32 *)
        &(KxHCCR_K_MainPumpLeakage[0])), ((const float32 *)
        &(KtHCCR_K_MainPumpLeakage[0])), 4U) * 0.0F), 0.0F);

    /* Sum: '<S493>/Sum3' */
    VeHCCR_dV_TransFluid_EffFlow = VeHCCR_dV_MainFlowRt + VeHCCR_dV_AuxFlowRt;

    /* Sum: '<S494>/Sum1' */
    VeHCCR_dV_Flow_LowSump = VeHCCR_dV_UpperSump_FlowRt -
        VeHCCR_dV_TransFluid_EffFlow;

    /* Switch: '<S521>/Switch1' incorporates:
     *  Switch: '<S521>/Switch2'
     *  UnitDelay: '<S521>/Unit Delay'
     */
    VeHCCR_dV_TotalTransFluidVolDly = HCCR_ac_DW.UnitDelay_DSTATE_jl;

    /* Sum: '<S494>/Sum' incorporates:
     *  Constant: '<S518>/Calib'
     *  Product: '<S494>/Product'
     */
    VeHCCR_n_AuxPumpSpdDsrd_Raw = (VeHCCR_dV_Flow_LowSump * HeHCCR_t_MedTED_dT)
        + VeHCCR_dV_TotalTransFluidVolDly;

    /* Outputs for Atomic SubSystem: '<S494>/Limiter' */
    /* Switch: '<S520>/Switch1' incorporates:
     *  Constant: '<S519>/Calib'
     *  RelationalOperator: '<S520>/Relational Operator'
     */
    if (KeHCCR_V_TotalTransFluidVol < VeHCCR_n_AuxPumpSpdDsrd_Raw)
    {
        /* Switch: '<S554>/Switch1' */
        VeHCCR_n_AuxPumpSpdDsrd_Raw = KeHCCR_V_TotalTransFluidVol;
    }

    /* End of Switch: '<S520>/Switch1' */

    /* Switch: '<S520>/Switch' incorporates:
     *  Constant: '<S494>/Constant Value'
     *  RelationalOperator: '<S520>/Relational Operator1'
     */
    if (VeHCCR_n_AuxPumpSpdDsrd_Raw > 0.0F)
    {
        /* Switch: '<S520>/Switch' */
        VeHCCR_V_Vol_LowSump = VeHCCR_n_AuxPumpSpdDsrd_Raw;
    }
    else
    {
        /* Switch: '<S520>/Switch' */
        VeHCCR_V_Vol_LowSump = 0.0F;
    }

    /* End of Switch: '<S520>/Switch' */
    /* End of Outputs for SubSystem: '<S494>/Limiter' */

    /* Lookup_n-D: '<S510>/Vector' incorporates:
     *  Switch: '<S11>/Switch28'
     */
    rtb_VeHCCR_n_C1MaxLockedSl_SelRaw = look1_iflf_binlca_16a
        (HCCR_ac_B.VeHCCR_n_OutputSpd, ((const float32 *)
          &(KxHCCR_t_DrySump_Time[0])), ((const float32 *)
          &(KtHCCR_t_DrySump_Time[0])), 6U);

    /* Outputs for Atomic SubSystem: '<S503>/Protected Division' */
    /* Switch: '<S511>/Switch1' incorporates:
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
    if ((VeHCCR_V_Vol_LowSump != 0.0F) && (rtb_VeHCCR_n_C1MaxLockedSl_SelRaw !=
            0.0F))
    {
        /* Switch: '<S511>/Switch1' incorporates:
         *  Product: '<S511>/Division'
         */
        VeHCCR_dV_DrySump_FlowRtReq = VeHCCR_V_Vol_LowSump /
            rtb_VeHCCR_n_C1MaxLockedSl_SelRaw;
    }
    else if (VeHCCR_V_Vol_LowSump > 0.0F)
    {
        /* Switch: '<S511>/Switch2' incorporates:
         *  Constant: '<S511>/MAXFLOAT'
         *  Switch: '<S511>/Switch1'
         */
        VeHCCR_dV_DrySump_FlowRtReq = 3.402823466E+38F;
    }
    else if (VeHCCR_V_Vol_LowSump < 0.0F)
    {
        /* Switch: '<S511>/Switch3' incorporates:
         *  Constant: '<S511>/MINFLOAT'
         *  Switch: '<S511>/Switch1'
         *  Switch: '<S511>/Switch2'
         */
        VeHCCR_dV_DrySump_FlowRtReq = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S511>/Switch1' incorporates:
         *  Constant: '<S511>/Constant Value4'
         *  Switch: '<S511>/Switch2'
         *  Switch: '<S511>/Switch3'
         */
        VeHCCR_dV_DrySump_FlowRtReq = 0.0F;
    }

    /* End of Switch: '<S511>/Switch1' */
    /* End of Outputs for SubSystem: '<S503>/Protected Division' */

    /* Sum: '<S503>/Sum4' incorporates:
     *  Lookup_n-D: '<S509>/Vector'
     *  Switch: '<S11>/Switch28'
     *  Switch: '<S11>/Switch35'
     */
    VeHCCR_dV_DsrdFlow_Raw = ((VeHCCR_dV_MtrA_CoolFlwCmd +
        VeHCCR_dV_MtrB_CoolFlwCmd) + look2_iflf_binlca_16a
        (HCCR_ac_B.VeHCCR_n_InputSpd, HCCR_ac_B.VeHCCR_n_OutputSpd, ((const
        float32 *)&(KxHCCR_dV_Ni_No_BaseLub[0])), ((const float32 *)
        &(KyHCCR_dV_Ni_No_BaseLub[0])), ((const float32 *)
        &(KtHCCR_dV_Ni_No_BaseLub[0])), HCCR_ac_ConstP.pooled7, 7U)) +
        VeHCCR_dV_DrySump_FlowRtReq;

    /* Switch: '<S505>/Switch' incorporates:
     *  Constant: '<S514>/Calib'
     *  RelationalOperator: '<S505>/Comparison2'
     */
    if (VeHCCR_V_Vol_LowSump < KeHCCR_V_LowVolDsrdFlwOvrd)
    {
        /* Switch: '<S505>/Switch' */
        VeHCCR_dV_Flow_UpperSump = VeHCCR_dV_UpperSump_FlowRt;
    }
    else
    {
        /* Switch: '<S505>/Switch' incorporates:
         *  Constant: '<S505>/Constant Value1'
         */
        VeHCCR_dV_Flow_UpperSump = 99999.0F;
    }

    /* End of Switch: '<S505>/Switch' */

    /* MinMax: '<S505>/MinMax1' */
    VeHCCR_dV_DsrdFlow = fminf(VeHCCR_dV_DsrdFlow_Raw, VeHCCR_dV_Flow_UpperSump);

    /* Switch: '<S513>/Switch3' incorporates:
     *  UnitDelay: '<S513>/Unit Delay'
     */
    HCCR_ac_DW.UnitDelay_DSTATE_a5 = VeHCCR_V_Vol_LowSump;

    /* Switch: '<S521>/Switch3' incorporates:
     *  UnitDelay: '<S521>/Unit Delay'
     */
    HCCR_ac_DW.UnitDelay_DSTATE_jl = VeHCCR_V_Vol_LowSump;

    /* Switch: '<S522>/Switch1' incorporates:
     *  Constant: '<S533>/Calib'
     */
    rtb_Comparison1_ng = ((!KeHCCR_b_LinePresMinOvrrdEnbl) ||
                          (VeHCCR_b_PropSysActv));

    /* Switch: '<S554>/Switch1' incorporates:
     *  Lookup_n-D: '<S543>/Vector'
     *  Switch: '<S11>/Switch15'
     */
    VeHCCR_n_AuxPumpSpdDsrd_Raw = look1_iflf_binlca_16a(VeHCCR_T_TransOilTemp,
        ((const float32 *)&(KxHCCR_n_MaxAuxPumpSpd[0])), ((const float32 *)
        &(KtHCCR_n_MaxAuxPumpSpd[0])), 5U);

    /* Product: '<S525>/Multiplication2' incorporates:
     *  Constant: '<S541>/Calib'
     *  Lookup_n-D: '<S542>/Vector'
     *  Switch: '<S11>/Switch15'
     *  Switch: '<S554>/Switch1'
     */
    VeHCCR_dV_MaxAuxPumpFlow = (VeHCCR_n_AuxPumpSpdDsrd_Raw *
        KeHCCR_K_AuxPumpVolPerRev) * look2_iflf_binlca_16a(VeHCCR_T_TransOilTemp,
        VeHCCR_n_AuxPumpSpdDsrd_Raw, ((const float32 *)
        &(KxHCCR_K_AuxPumpVolumetricEff[0])), ((const float32 *)
        &(KyHCCR_K_AuxPumpVolumetricEff[0])), ((const float32 *)
        &(KtHCCR_K_AuxPumpVolumetricEff[0])), HCCR_ac_ConstP.pooled8, 5U);

    /* Sum: '<S525>/Subtraction1' */
    VeHCCR_dV_MaxAuxFlowCap = VeHCCR_dV_MaxAuxPumpFlow;

    /* Switch: '<S532>/Switch' incorporates:
     *  Constant: '<S581>/Calib'
     */
    VeHCCR_b_AuxPumpEnbl = ((!KeHCCR_b_RunCrank_AuxPumpEnbl) ||
                            (VeHCCR_b_RunCrankActive));

    /* Outputs for Atomic SubSystem: '<S524>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S539>/EdgeFalling1' */
    /* UnitDelay: '<S566>/Unit Delay' incorporates:
     *  UnitDelay: '<S540>/Unit Delay'
     */
    rtb_Logical2_k = HCCR_ac_DW.UnitDelay_DSTATE_mq;

    /* Update for UnitDelay: '<S540>/Unit Delay' */
    HCCR_ac_DW.UnitDelay_DSTATE_mq = VeHCCR_b_Aux_Pump_Avail;

    /* Switch: '<S539>/Switch' incorporates:
     *  Constant: '<S537>/Calib'
     *  Constant: '<S538>/Calib'
     *  Constant: '<S539>/Constant Value1'
     *  Logic: '<S540>/AND'
     *  Logic: '<S540>/OR1'
     *  MinMax: '<S539>/Minimum'
     *  Sum: '<S539>/Summation'
     *  UnitDelay: '<S539>/Unit Delay'
     */
    if ((!VeHCCR_b_Aux_Pump_Avail) && rtb_Logical2_k)
    {
        HCCR_ac_DW.UnitDelay_DSTATE_bw = KeHCCR_t_AuxPumpAvailDelay;
    }
    else
    {
        HCCR_ac_DW.UnitDelay_DSTATE_bw = fmaxf(HCCR_ac_DW.UnitDelay_DSTATE_bw -
            HeHCCR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S539>/Switch' */
    /* End of Outputs for SubSystem: '<S539>/EdgeFalling1' */

    /* Logic: '<S539>/AND' incorporates:
     *  Constant: '<S539>/Constant Value2'
     *  RelationalOperator: '<S539>/Greater  Than'
     *  UnitDelay: '<S539>/Unit Delay'
     */
    VeHCCR_b_AuxPumpAvail = ((VeHCCR_b_Aux_Pump_Avail) ||
        (HCCR_ac_DW.UnitDelay_DSTATE_bw > 0.0F));

    /* End of Outputs for SubSystem: '<S524>/Turn Off Delay Time' */

    /* Logic: '<S528>/Logical' incorporates:
     *  Constant: '<S495>/Constant Value1'
     *  Constant: '<S573>/Calib'
     *  Constant: '<S574>/Calib'
     *  RelationalOperator: '<S528>/Greater  Than'
     *  RelationalOperator: '<S528>/Greater  Than2'
     */
    VeHCCR_b_AuxPump_Avail = ((((VeHCCR_dV_MaxAuxFlowCap >=
        KeHCCR_dV_MinAuxPumpTurnOnCap) && (0.0F < KeHCCR_p_MxLnPresToTrnOnAuxPmp))
        && (VeHCCR_b_AuxPumpEnbl)) && (VeHCCR_b_AuxPumpAvail));

    /* Logic: '<S528>/NOT2' incorporates:
     *  Constant: '<S571>/Calib'
     *  Constant: '<S572>/Calib'
     *  Logic: '<S528>/NOT'
     *  RelationalOperator: '<S528>/Greater  Than1'
     *  RelationalOperator: '<S528>/Greater  Than3'
     *  Sum: '<S528>/Subtraction'
     *  Sum: '<S528>/Subtraction1'
     */
    VeHCCR_b_TurnOnAuxPump_Raw = ((rtb_Comparison1_ng && ((VeHCCR_dV_DsrdFlow >=
        (VeHCCR_dV_MainFlowRt + KeHCCR_dV_AuxPumpTurnOnThresh)) &&
        ((KeHCCR_dV_Aux2MainPmpFlowMargin + VeHCCR_dV_MainFlowRt) <=
         VeHCCR_dV_MaxAuxFlowCap))) && (VeHCCR_b_AuxPump_Avail));

    /* Outputs for Atomic SubSystem: '<S528>/EdgeRising' */
    /* UnitDelay: '<S566>/Unit Delay' incorporates:
     *  UnitDelay: '<S567>/Unit Delay'
     */
    rtb_Logical2_k = HCCR_ac_DW.UnitDelay_DSTATE_b4;

    /* Update for UnitDelay: '<S567>/Unit Delay' */
    HCCR_ac_DW.UnitDelay_DSTATE_b4 = VeHCCR_b_TurnOnAuxPump_Raw;

    /* Outputs for Atomic SubSystem: '<S528>/Timer Reset Enabled' */
    /* Switch: '<S576>/Switch1' incorporates:
     *  Constant: '<S568>/Calib'
     *  Constant: '<S575>/Calib'
     *  Constant: '<S576>/Constant Value3'
     *  Constant: '<S576>/Constant Value4'
     *  Logic: '<S567>/AND'
     *  Logic: '<S567>/OR1'
     *  Logic: '<S576>/AND1'
     *  MinMax: '<S576>/Maximum'
     *  RelationalOperator: '<S576>/Greater  Than2'
     *  Sum: '<S576>/Subtraction'
     *  UnitDelay: '<S576>/Unit Delay'
     */
    if (((VeHCCR_b_TurnOnAuxPump_Raw) && (!rtb_Logical2_k)) &&
            (HCCR_ac_DW.UnitDelay_DSTATE_iv <= 0.0F))
    {
        HCCR_ac_DW.UnitDelay_DSTATE_iv = KeHCCR_t_AuxPmpTurnOnPulse;
    }
    else
    {
        HCCR_ac_DW.UnitDelay_DSTATE_iv = fmaxf(HCCR_ac_DW.UnitDelay_DSTATE_iv -
            HeHCCR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S576>/Switch1' */
    /* End of Outputs for SubSystem: '<S528>/Timer Reset Enabled' */
    /* End of Outputs for SubSystem: '<S528>/EdgeRising' */

    /* Switch: '<S528>/Switch' incorporates:
     *  Constant: '<S569>/Calib'
     */
    if (KeHCCR_b_TrnOnAuxPmp_OvrrdEnbl)
    {
        /* Switch: '<S528>/Switch' incorporates:
         *  Constant: '<S570>/Calib'
         */
        VeHCCR_b_TurnOnAuxPump = KeHCCR_b_TrnOnAuxPmp_OvrrdVal;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S528>/Timer Reset Enabled' */
        /* Switch: '<S528>/Switch' incorporates:
         *  Constant: '<S576>/Constant Value2'
         *  RelationalOperator: '<S576>/Greater  Than1'
         *  UnitDelay: '<S576>/Unit Delay'
         */
        VeHCCR_b_TurnOnAuxPump = (HCCR_ac_DW.UnitDelay_DSTATE_iv > 0.0F);

        /* End of Outputs for SubSystem: '<S528>/Timer Reset Enabled' */
    }

    /* End of Switch: '<S528>/Switch' */

    /* Logic: '<S527>/NOT2' incorporates:
     *  Constant: '<S495>/Constant Value1'
     *  Constant: '<S560>/Calib'
     *  Constant: '<S561>/Calib'
     *  Constant: '<S562>/Calib'
     *  Constant: '<S563>/Calib'
     *  Logic: '<S527>/Logical2'
     *  Logic: '<S527>/NOT'
     *  Logic: '<S527>/NOT3'
     *  Logic: '<S527>/NOT4'
     *  RelationalOperator: '<S527>/Greater  Than'
     *  RelationalOperator: '<S527>/Greater  Than1'
     *  RelationalOperator: '<S527>/Greater  Than2'
     *  RelationalOperator: '<S527>/Greater  Than4'
     *  Sum: '<S527>/Subtraction'
     *  Sum: '<S527>/Subtraction1'
     */
    VeHCCR_b_TurnOffAuxPump_Raw = ((((((!rtb_Comparison1_ng) ||
        ((VeHCCR_dV_MainFlowRt >= (VeHCCR_dV_DsrdFlow +
        KeHCCR_dV_AuxPumpTurnOffThresh)) || (VeHCCR_dV_MainFlowRt >
        (KeHCCR_dV_Main2AuxPmpFlowMargin + VeHCCR_dV_MaxAuxFlowCap)))) ||
        (VeHCCR_dV_MaxAuxFlowCap < KeHCCR_dV_MinAuxPumpTurnOffCap)) || (0.0F >=
        KeHCCR_p_MxLnPresToTrnOffAuxPmp)) || (!VeHCCR_b_AuxPumpEnbl)) ||
        (!VeHCCR_b_AuxPumpAvail));

    /* Outputs for Atomic SubSystem: '<S527>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S565>/EdgeRising' */
    /* UnitDelay: '<S566>/Unit Delay' */
    rtb_Logical2_k = HCCR_ac_DW.UnitDelay_DSTATE_bc;

    /* Update for UnitDelay: '<S566>/Unit Delay' */
    HCCR_ac_DW.UnitDelay_DSTATE_bc = VeHCCR_b_TurnOffAuxPump_Raw;

    /* Switch: '<S565>/Switch1' incorporates:
     *  Constant: '<S557>/Calib'
     *  Constant: '<S564>/Calib'
     *  Constant: '<S565>/Constant Value1'
     *  Logic: '<S565>/OR'
     *  Logic: '<S565>/OR1'
     *  Logic: '<S566>/AND'
     *  Logic: '<S566>/OR1'
     *  MinMax: '<S565>/Minimum'
     *  Sum: '<S565>/Summation'
     *  UnitDelay: '<S565>/Unit Delay'
     */
    if ((!VeHCCR_b_TurnOffAuxPump_Raw) || ((VeHCCR_b_TurnOffAuxPump_Raw) &&
            (!rtb_Logical2_k)))
    {
        HCCR_ac_DW.UnitDelay_DSTATE_kz = 0.0F;
    }
    else
    {
        HCCR_ac_DW.UnitDelay_DSTATE_kz = fminf(KeHCCR_t_AuxPmpTurnOffDelay,
            HeHCCR_t_MedTED_dT + HCCR_ac_DW.UnitDelay_DSTATE_kz);
    }

    /* End of Switch: '<S565>/Switch1' */
    /* End of Outputs for SubSystem: '<S565>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S527>/Turn On Delay Time' */

    /* Switch: '<S527>/Switch' incorporates:
     *  Constant: '<S558>/Calib'
     */
    if (KeHCCR_b_TrnOffAuxPmp_OvrrdEnbl)
    {
        /* Switch: '<S527>/Switch' incorporates:
         *  Constant: '<S559>/Calib'
         */
        VeHCCR_b_TurnOffAuxPump = KeHCCR_b_TrnOffAuxPmp_OvrrdVal;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S527>/Turn On Delay Time' */
        /* Switch: '<S527>/Switch' incorporates:
         *  Constant: '<S564>/Calib'
         *  Logic: '<S565>/AND'
         *  RelationalOperator: '<S565>/Greater  Than'
         *  UnitDelay: '<S565>/Unit Delay'
         */
        VeHCCR_b_TurnOffAuxPump = ((VeHCCR_b_TurnOffAuxPump_Raw) &&
            (HCCR_ac_DW.UnitDelay_DSTATE_kz >= KeHCCR_t_AuxPmpTurnOffDelay));

        /* End of Outputs for SubSystem: '<S527>/Turn On Delay Time' */
    }

    /* End of Switch: '<S527>/Switch' */

    /* Logic: '<S522>/NOT' incorporates:
     *  Constant: '<S522>/FALSE Constant'
     */
    VeHCCR_b_TrnOnPrimeAuxPmp = false;

    /* Outputs for Atomic SubSystem: '<S522>/HCCC_AuxPmpSpdDsrd' */
    /* Outputs for Atomic SubSystem: '<S544>/HCCC_Dftial_Flw' */
    /* Sum: '<S548>/Subtraction' */
    VeHCCR_dV_EffDsrdFlow = VeHCCR_dV_DsrdFlow - VeHCCR_dV_MainFlowRt;

    /* End of Outputs for SubSystem: '<S544>/HCCC_Dftial_Flw' */

    /* Lookup_n-D: '<S552>/Vector' incorporates:
     *  Switch: '<S11>/Switch15'
     *  UnitDelay: '<S545>/Unit Delay'
     */
    rtb_VeHCCR_n_C1MaxLockedSl_SelRaw = look2_iflf_binlca_16a
        (VeHCCR_T_TransOilTemp, VeHCCR_n_AuxPumpSpd_NoLim, ((const float32 *)
          &(KxHCCR_K_AuxPumpVolumetricEff[0])), ((const float32 *)
          &(KyHCCR_K_AuxPumpVolumetricEff[0])), ((const float32 *)
          &(KtHCCR_K_AuxPumpVolumetricEff[0])), HCCR_ac_ConstP.pooled8, 5U);

    /* Lookup_n-D: '<S553>/Vector' incorporates:
     *  Switch: '<S11>/Switch15'
     */
    VeHCCR_n_AuxPumpSpdDsrd_Raw = look1_iflf_binlca_16a(VeHCCR_T_TransOilTemp,
        ((const float32 *)&(KxHCCR_n_AuxPumpSpdMax[0])), ((const float32 *)
        &(KtHCCR_n_AuxPumpSpdMax[0])), 5U);

    /* Outputs for Atomic SubSystem: '<S545>/Protected Division' */
    /* Switch: '<S555>/Switch1' incorporates:
     *  Constant: '<S549>/Calib'
     *  Constant: '<S555>/Constant Value'
     *  Constant: '<S555>/Constant Value1'
     *  Constant: '<S555>/Constant Value2'
     *  Constant: '<S555>/Constant Value3'
     *  Logic: '<S555>/AND'
     *  RelationalOperator: '<S555>/Greater Than or Equal '
     *  RelationalOperator: '<S555>/Greater Than or Equal 1'
     *  RelationalOperator: '<S555>/Not Equal'
     *  RelationalOperator: '<S555>/Not Equal1'
     *  Sum: '<S545>/Subtraction1'
     *  Switch: '<S555>/Switch2'
     *  Switch: '<S555>/Switch3'
     */
    if ((VeHCCR_dV_EffDsrdFlow != 0.0F) && (KeHCCR_K_AuxPumpVolPerRev != 0.0F))
    {
        /* Switch: '<S555>/Switch1' incorporates:
         *  Product: '<S555>/Division'
         */
        rtb_Subtraction1_l = VeHCCR_dV_EffDsrdFlow / KeHCCR_K_AuxPumpVolPerRev;
    }
    else if (VeHCCR_dV_EffDsrdFlow > 0.0F)
    {
        /* Switch: '<S555>/Switch2' incorporates:
         *  Constant: '<S555>/MAXFLOAT'
         *  Switch: '<S555>/Switch1'
         */
        rtb_Subtraction1_l = 3.402823466E+38F;
    }
    else if (VeHCCR_dV_EffDsrdFlow < 0.0F)
    {
        /* Switch: '<S555>/Switch3' incorporates:
         *  Constant: '<S555>/MINFLOAT'
         *  Switch: '<S555>/Switch1'
         *  Switch: '<S555>/Switch2'
         */
        rtb_Subtraction1_l = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S555>/Switch1' incorporates:
         *  Constant: '<S555>/Constant Value4'
         *  Switch: '<S555>/Switch2'
         *  Switch: '<S555>/Switch3'
         */
        rtb_Subtraction1_l = 0.0F;
    }

    /* End of Switch: '<S555>/Switch1' */
    /* End of Outputs for SubSystem: '<S545>/Protected Division' */

    /* Outputs for Atomic SubSystem: '<S545>/Protected Division1' */
    /* Switch: '<S556>/Switch1' incorporates:
     *  Constant: '<S556>/Constant Value'
     *  Constant: '<S556>/Constant Value1'
     *  Constant: '<S556>/Constant Value2'
     *  Constant: '<S556>/Constant Value3'
     *  Logic: '<S556>/AND'
     *  RelationalOperator: '<S556>/Greater Than or Equal '
     *  RelationalOperator: '<S556>/Greater Than or Equal 1'
     *  RelationalOperator: '<S556>/Not Equal'
     *  RelationalOperator: '<S556>/Not Equal1'
     *  Switch: '<S556>/Switch2'
     *  Switch: '<S556>/Switch3'
     */
    if ((rtb_Subtraction1_l != 0.0F) && (rtb_VeHCCR_n_C1MaxLockedSl_SelRaw !=
            0.0F))
    {
        /* Switch: '<S556>/Switch1' incorporates:
         *  Product: '<S556>/Division'
         */
        VeHCCR_n_AuxPumpSpd_NoLim = rtb_Subtraction1_l /
            rtb_VeHCCR_n_C1MaxLockedSl_SelRaw;
    }
    else if (rtb_Subtraction1_l > 0.0F)
    {
        /* Switch: '<S556>/Switch2' incorporates:
         *  Constant: '<S556>/MAXFLOAT'
         *  Switch: '<S556>/Switch1'
         */
        VeHCCR_n_AuxPumpSpd_NoLim = 3.402823466E+38F;
    }
    else if (rtb_Subtraction1_l < 0.0F)
    {
        /* Switch: '<S556>/Switch3' incorporates:
         *  Constant: '<S556>/MINFLOAT'
         *  Switch: '<S556>/Switch1'
         *  Switch: '<S556>/Switch2'
         */
        VeHCCR_n_AuxPumpSpd_NoLim = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S556>/Switch1' incorporates:
         *  Constant: '<S556>/Constant Value4'
         *  Switch: '<S556>/Switch2'
         *  Switch: '<S556>/Switch3'
         */
        VeHCCR_n_AuxPumpSpd_NoLim = 0.0F;
    }

    /* End of Switch: '<S556>/Switch1' */
    /* End of Outputs for SubSystem: '<S545>/Protected Division1' */

    /* Outputs for Atomic SubSystem: '<S545>/Limiter' */
    /* Switch: '<S554>/Switch1' incorporates:
     *  RelationalOperator: '<S554>/Relational Operator'
     */
    if (VeHCCR_n_AuxPumpSpdDsrd_Raw >= VeHCCR_n_AuxPumpSpd_NoLim)
    {
        /* Switch: '<S554>/Switch1' */
        VeHCCR_n_AuxPumpSpdDsrd_Raw = VeHCCR_n_AuxPumpSpd_NoLim;
    }

    /* End of Switch: '<S554>/Switch1' */

    /* Switch: '<S554>/Switch' incorporates:
     *  Constant: '<S550>/Calib'
     *  RelationalOperator: '<S554>/Relational Operator1'
     */
    if (VeHCCR_n_AuxPumpSpdDsrd_Raw <= KeHCCR_n_AuxPumpSpdMin)
    {
        /* Switch: '<S554>/Switch' */
        VeHCCR_n_AuxPumpSpdDsrd_Raw = KeHCCR_n_AuxPumpSpdMin;
    }

    /* End of Switch: '<S554>/Switch' */
    /* End of Outputs for SubSystem: '<S545>/Limiter' */

    /* Switch: '<S526>/Switch' incorporates:
     *  Constant: '<S546>/Calib'
     */
    if (KeHCCR_b_AuxPmpSpdDsrdRwOvrdEnbl)
    {
        /* Switch: '<S526>/Switch' incorporates:
         *  Constant: '<S547>/Calib'
         */
        VeHCCR_n_AuxPumpSpdDsrdRaw = KeHCCR_n_AuxPmpSpdDsrdRwOvrdVal;
    }
    else
    {
        /* Switch: '<S526>/Switch' incorporates:
         *  Constant: '<S526>/Constant Value'
         *  MinMax: '<S526>/MinMax1'
         */
        VeHCCR_n_AuxPumpSpdDsrdRaw = fmaxf(VeHCCR_n_AuxPumpSpdDsrd_Raw, 0.0F);
    }

    /* End of Switch: '<S526>/Switch' */
    /* End of Outputs for SubSystem: '<S522>/HCCC_AuxPmpSpdDsrd' */

    /* Chart: '<S522>/AuxPumpCntrl' incorporates:
     *  Gain: '<S534>/Gain'
     *  Gain: '<S535>/Gain'
     *  Gain: '<S536>/Gain'
     */
    /* Gateway: HCCR_MedTED/SiEVT/HCCC_Pump_Cntrl/HCCC_AuxPumpCntrl/AuxPumpCntrl */
    /* During: HCCR_MedTED/SiEVT/HCCC_Pump_Cntrl/HCCC_AuxPumpCntrl/AuxPumpCntrl */
    if (((uint32)HCCR_ac_DW.is_active_c42_HCCR_ac) == 0U)
    {
        /* Entry: HCCR_MedTED/SiEVT/HCCC_Pump_Cntrl/HCCC_AuxPumpCntrl/AuxPumpCntrl */
        HCCR_ac_DW.is_active_c42_HCCR_ac = 1U;

        /* Entry Internal: HCCR_MedTED/SiEVT/HCCC_Pump_Cntrl/HCCC_AuxPumpCntrl/AuxPumpCntrl */
        /* Transition: '<S523>:6' */
        HCCR_ac_DW.is_c42_HCCR_ac = HCCR_ac_IN_AuxPump_Off;

        /* Outputs for Function Call SubSystem: '<S522>/HCCC_Aux_Pmp_Off' */
        /* Entry 'AuxPump_Off': '<S523>:1' */
        /* Event: '<S523>:15' */
        HCCR_ac_HCCC_Aux_Pmp_Off(&HCCR_ac_B.Merge_n);

        /* End of Outputs for SubSystem: '<S522>/HCCC_Aux_Pmp_Off' */
    }
    else
    {
        switch (HCCR_ac_DW.is_c42_HCCR_ac)
        {
          case HCCR_ac_IN_AuxPrime_On:
            /* During 'AuxPrime_On': '<S523>:3' */
            if ((!VeHCCR_b_TrnOnPrimeAuxPmp) && (!VeHCCR_b_TurnOnAuxPump))
            {
                /* Transition: '<S523>:8' */
                /* Transition: '<S523>:23' */
                HCCR_ac_DW.is_c42_HCCR_ac = HCCR_ac_IN_AuxPump_Off;

                /* Outputs for Function Call SubSystem: '<S522>/HCCC_Aux_Pmp_Off' */
                /* Entry 'AuxPump_Off': '<S523>:1' */
                /* Event: '<S523>:15' */
                HCCR_ac_HCCC_Aux_Pmp_Off(&HCCR_ac_B.Merge_n);

                /* End of Outputs for SubSystem: '<S522>/HCCC_Aux_Pmp_Off' */
            }
            else if (VeHCCR_b_TurnOnAuxPump)
            {
                /* Transition: '<S523>:9' */
                HCCR_ac_DW.is_c42_HCCR_ac = HCCR_ac_IN_AuxPump_on;

                /* Outputs for Function Call SubSystem: '<S522>/HCCC_Aux_Pmp_On' */
                /* Entry 'AuxPump_on': '<S523>:2' */
                /* Event: '<S523>:16' */
                HCCR_ac_HCCC_Aux_Pmp_On(VeHCCR_n_AuxPumpSpdDsrdRaw,
                                        &HCCR_ac_B.Merge_n);

                /* End of Outputs for SubSystem: '<S522>/HCCC_Aux_Pmp_On' */
            }
            else
            {
                /* Outputs for Function Call SubSystem: '<S522>/HCCC_Aux_Prime_On' */
                /* Event: '<S523>:17' */
                HCCR_ac_HCCC_Aux_Prime_On(VeHCCR_T_TransOilTemp,
                    &HCCR_ac_B.Merge_n);

                /* End of Outputs for SubSystem: '<S522>/HCCC_Aux_Prime_On' */
            }
            break;

          case HCCR_ac_IN_AuxPump_Off:
            /* During 'AuxPump_Off': '<S523>:1' */
            if (VeHCCR_b_TrnOnPrimeAuxPmp)
            {
                /* Transition: '<S523>:7' */
                /* Transition: '<S523>:36' */
                /* Transition: '<S523>:37' */
                HCCR_ac_DW.is_c42_HCCR_ac = HCCR_ac_IN_AuxPrime_On;

                /* Outputs for Function Call SubSystem: '<S522>/HCCC_Aux_Prime_On' */
                /* Entry 'AuxPrime_On': '<S523>:3' */
                /* Event: '<S523>:17' */
                HCCR_ac_HCCC_Aux_Prime_On(VeHCCR_T_TransOilTemp,
                    &HCCR_ac_B.Merge_n);

                /* End of Outputs for SubSystem: '<S522>/HCCC_Aux_Prime_On' */
            }
            else
            {
                if (VeHCCR_b_TurnOnAuxPump)
                {
                    /* Transition: '<S523>:4' */
                    /* Transition: '<S523>:41' */
                    /* Transition: '<S523>:40' */
                    HCCR_ac_DW.is_c42_HCCR_ac = HCCR_ac_IN_AuxPump_on;

                    /* Outputs for Function Call SubSystem: '<S522>/HCCC_Aux_Pmp_On' */
                    /* Entry 'AuxPump_on': '<S523>:2' */
                    /* Event: '<S523>:16' */
                    HCCR_ac_HCCC_Aux_Pmp_On(VeHCCR_n_AuxPumpSpdDsrdRaw,
                                            &HCCR_ac_B.Merge_n);

                    /* End of Outputs for SubSystem: '<S522>/HCCC_Aux_Pmp_On' */
                }
            }
            break;

          default:
            /* During 'AuxPump_on': '<S523>:2' */
            rtb_Logical2_k = !VeHCCR_b_TurnOnAuxPump;
            if (((VeHCCR_b_TurnOffAuxPump) && (!VeHCCR_b_TrnOnPrimeAuxPmp)) &&
                    rtb_Logical2_k)
            {
                /* Transition: '<S523>:5' */
                HCCR_ac_DW.is_c42_HCCR_ac = HCCR_ac_IN_AuxPump_Off;

                /* Outputs for Function Call SubSystem: '<S522>/HCCC_Aux_Pmp_Off' */
                /* Entry 'AuxPump_Off': '<S523>:1' */
                /* Event: '<S523>:15' */
                HCCR_ac_HCCC_Aux_Pmp_Off(&HCCR_ac_B.Merge_n);

                /* End of Outputs for SubSystem: '<S522>/HCCC_Aux_Pmp_Off' */
            }
            else if (((VeHCCR_b_TurnOffAuxPump) && (VeHCCR_b_TrnOnPrimeAuxPmp)) &&
                     rtb_Logical2_k)
            {
                /* Transition: '<S523>:10' */
                /* Transition: '<S523>:33' */
                /* Transition: '<S523>:34' */
                HCCR_ac_DW.is_c42_HCCR_ac = HCCR_ac_IN_AuxPrime_On;

                /* Outputs for Function Call SubSystem: '<S522>/HCCC_Aux_Prime_On' */
                /* Entry 'AuxPrime_On': '<S523>:3' */
                /* Event: '<S523>:17' */
                HCCR_ac_HCCC_Aux_Prime_On(VeHCCR_T_TransOilTemp,
                    &HCCR_ac_B.Merge_n);

                /* End of Outputs for SubSystem: '<S522>/HCCC_Aux_Prime_On' */
            }
            else
            {
                /* Outputs for Function Call SubSystem: '<S522>/HCCC_Aux_Pmp_On' */
                /* Event: '<S523>:16' */
                HCCR_ac_HCCC_Aux_Pmp_On(VeHCCR_n_AuxPumpSpdDsrdRaw,
                                        &HCCR_ac_B.Merge_n);

                /* End of Outputs for SubSystem: '<S522>/HCCC_Aux_Pmp_On' */
            }
            break;
        }
    }

    /* End of Chart: '<S522>/AuxPumpCntrl' */
    /* End of Outputs for SubSystem: '<S1>/SiEVT' */
#endif

#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

    /* Outputs for Function Call SubSystem: '<S1>/EDMGen2' */
    /* If: '<S17>/If' incorporates:
     *  Constant: '<S50>/Constant'
     *  Constant: '<S51>/Constant'
     *  Constant: '<S52>/Constant'
     *  Constant: '<S56>/Calib'
     *  RelationalOperator: '<S17>/Relational Operator'
     *  RelationalOperator: '<S17>/Relational Operator1'
     *  RelationalOperator: '<S17>/Relational Operator2'
     */
    if (((uint32)HeHCCR_e_MtrX_to_EOPFront) == CeHCCR_e_MtrA)
    {
        /* Outputs for IfAction SubSystem: '<S17>/If Action Subsystem' incorporates:
         *  ActionPort: '<S58>/Action Port'
         */
        HCCR_ac_IfActionSubsystem(rtb_TmpSignalConversionAtVeMSPR_n_MtrA_S,
            &HCCR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S17>/If Action Subsystem' */
    }
    else if (((uint32)HeHCCR_e_MtrX_to_EOPFront) == CeHCCR_e_MtrB)
    {
        /* Outputs for IfAction SubSystem: '<S17>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S59>/Action Port'
         */
        HCCR_ac_IfActionSubsystem(rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S,
            &HCCR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S17>/If Action Subsystem1' */
    }
    else
    {
        if (((uint32)HeHCCR_e_MtrX_to_EOPFront) == CeHCCR_e_MtrC)
        {
            /* Outputs for IfAction SubSystem: '<S17>/If Action Subsystem2' incorporates:
             *  ActionPort: '<S60>/Action Port'
             */
            HCCR_ac_IfActionSubsystem(rtb_TmpSignalConversionAtVeMSPR_n_MtrC_S,
                &HCCR_ac_B.Merge);

            /* End of Outputs for SubSystem: '<S17>/If Action Subsystem2' */
        }
    }

    /* End of If: '<S17>/If' */
    /* End of Outputs for SubSystem: '<S1>/EDMGen2' */

    /* Inport: '<Root>/VePMIR_T_TransAuxPumpOilTemp' */
    (void)Rte_Read_VePMIR_T_TransAuxPumpOilTemp_Value(&rtb_Abs2);

    /* Inport: '<Root>/VePMIR_e_TransAuxPumpDryRun' */
    (void)Rte_Read_VePMIR_e_TransAuxPumpDryRun_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S1>/EDMGen2' */
    /* Lookup_n-D: '<S29>/Vector' incorporates:
     *  Merge: '<S17>/Merge'
     */
    HCCR_ac_B.Vector_l = look1_iflf_binlca_16a(HCCR_ac_B.Merge, ((const float32 *)
        &(KxHCCR_dV_LubFlowEOPA[0])), ((const float32 *)&(KtHCCR_dV_LubFlowEOPA
        [0])), 4U);

    /* RelationalOperator: '<S16>/Relational Operator' incorporates:
     *  Constant: '<S23>/Calib'
     *  RelationalOperator: '<S15>/Relational Operator'
     */
    rtb_Logical2_k = (rtb_Abs2 > KeHCCR_T_dryRunMinTempEOPA);

    /* SignalConversion generated from: '<S5>/PMDR_b_RunCrankActv' */
#if Rte_SysCon_Variant_HCCR_LPresCntrl && Rte_SysCon_Variant_HCCR_PmpCEDMGen2

    /* VariantMerge generated from: '<S5>/PMDR_b_RunCrankActv' */
    rtb_VM_Conditional_Signal_PMDR_b_RunCran = VeHCCR_b_RunCrankActive;

#elif !Rte_SysCon_Variant_HCCR_LPresCntrl || !Rte_SysCon_Variant_HCCR_PmpCEDMGen2

    /* VariantMerge generated from: '<S5>/PMDR_b_RunCrankActv' incorporates:
     *  SignalConversion generated from: '<S5>/PMDR_b_RunCrankActv'
     */
    rtb_VM_Conditional_Signal_PMDR_b_RunCran = false;

#endif

    /* End of SignalConversion generated from: '<S5>/PMDR_b_RunCrankActv' */

    /* Outputs for Atomic SubSystem: '<S15>/EdgeRising' */
    /* Logic: '<S18>/OR1' incorporates:
     *  UnitDelay: '<S18>/Unit Delay'
     */
    rtb_Comparison1_ng = !HCCR_ac_DW.UnitDelay_DSTATE_ms;

    /* Update for UnitDelay: '<S18>/Unit Delay' */
    HCCR_ac_DW.UnitDelay_DSTATE_ms = rtb_VM_Conditional_Signal_PMDR_b_RunCran;

    /* Outputs for Atomic SubSystem: '<S15>/Signal Latch On With Reset' */
    /* Logic: '<S31>/OR1' incorporates:
     *  Logic: '<S18>/AND'
     *  Logic: '<S31>/NOT'
     *  Logic: '<S31>/OR'
     *  UnitDelay: '<S15>/Unit Delay'
     *  UnitDelay: '<S31>/Unit Delay'
     */
    HCCR_ac_DW.UnitDelay_DSTATE_ak = ((rtb_VM_Conditional_Signal_PMDR_b_RunCran &&
        rtb_Comparison1_ng) || ((!HCCR_ac_DW.UnitDelay_DSTATE_or) &&
        (HCCR_ac_DW.UnitDelay_DSTATE_ak)));

    /* End of Outputs for SubSystem: '<S15>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S15>/EdgeRising' */

    /* Logic: '<S15>/Logical Operator' incorporates:
     *  UnitDelay: '<S15>/Unit Delay'
     *  UnitDelay: '<S31>/Unit Delay'
     */
    HCCR_ac_DW.UnitDelay_DSTATE_or = (rtb_Logical2_k &&
        (HCCR_ac_DW.UnitDelay_DSTATE_ak));

    /* Logic: '<S15>/Logical Operator1' incorporates:
     *  Constant: '<S21>/Constant'
     *  Inport: '<Root>/VePMIR_e_TransAuxPumpDryRun'
     *  Logic: '<S15>/Logical Operator2'
     *  RelationalOperator: '<S15>/Relational Operator1'
     *  UnitDelay: '<S15>/Unit Delay'
     */
    VeHCCR_b_dryRunEOPA = (((((uint32)tmpRead) == CeTAPR_e_TAP_FalseTrueSNA_True)
                            && rtb_Logical2_k) ||
                           (HCCR_ac_DW.UnitDelay_DSTATE_or));

    /* Outputs for Atomic SubSystem: '<S15>/EdgeRising2' */
    /* Logic: '<S20>/AND' incorporates:
     *  Logic: '<S20>/OR1'
     *  UnitDelay: '<S20>/Unit Delay'
     */
    rtb_Logical2_k = ((VeHCCR_b_dryRunEOPA) && (!HCCR_ac_DW.UnitDelay_DSTATE_c));

    /* Update for UnitDelay: '<S20>/Unit Delay' */
    HCCR_ac_DW.UnitDelay_DSTATE_c = VeHCCR_b_dryRunEOPA;

    /* End of Outputs for SubSystem: '<S15>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S15>/Timer Retrigger Reset Enabled2' */
    /* Switch: '<S32>/Switch1' incorporates:
     *  Constant: '<S22>/Calib'
     *  Constant: '<S32>/Constant Value4'
     *  Logic: '<S15>/Logical Operator3'
     *  MinMax: '<S32>/Maximum'
     *  Sum: '<S32>/Subtraction'
     *  UnitDelay: '<S15>/Unit Delay3'
     *  UnitDelay: '<S32>/Unit Delay'
     */
    if ((HCCR_ac_DW.UnitDelay3_DSTATE) || rtb_Logical2_k)
    {
        /* Switch: '<S15>/Switch1' */
        if (rtb_Logical2_k)
        {
            /* UnitDelay: '<S32>/Unit Delay' incorporates:
             *  Constant: '<S27>/Calib'
             *  Switch: '<S15>/Switch1'
             */
            HCCR_ac_DW.UnitDelay_DSTATE_e = KeHCCR_t_dryRunMinTimeEOPA;
        }
        else
        {
            /* UnitDelay: '<S32>/Unit Delay' incorporates:
             *  Constant: '<S22>/Calib'
             *  Constant: '<S28>/Calib'
             *  Sum: '<S15>/Add1'
             *  Switch: '<S15>/Switch1'
             */
            HCCR_ac_DW.UnitDelay_DSTATE_e = KeHCCR_t_dryRunStepTimeEOPA -
                HeHCCR_t_MedTED_dT;
        }

        /* End of Switch: '<S15>/Switch1' */
    }
    else
    {
        HCCR_ac_DW.UnitDelay_DSTATE_e = fmaxf(HCCR_ac_DW.UnitDelay_DSTATE_e -
            HeHCCR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S32>/Switch1' */

    /* Logic: '<S15>/Logical Operator4' incorporates:
     *  Constant: '<S32>/Constant Value2'
     *  Logic: '<S15>/dryRunActive'
     *  Logic: '<S15>/timer_expired'
     *  RelationalOperator: '<S32>/Greater  Than1'
     *  UnitDelay: '<S15>/Unit Delay3'
     *  UnitDelay: '<S32>/Unit Delay'
     */
    HCCR_ac_DW.UnitDelay3_DSTATE = ((!VeHCCR_b_dryRunEOPA) &&
        (HCCR_ac_DW.UnitDelay_DSTATE_e <= 0.0F));

    /* End of Outputs for SubSystem: '<S15>/Timer Retrigger Reset Enabled2' */

    /* Outputs for Atomic SubSystem: '<S15>/EdgeRising1' */
    /* Logic: '<S19>/AND' incorporates:
     *  Logic: '<S19>/OR1'
     *  UnitDelay: '<S19>/Unit Delay'
     */
    rtb_Logical2_k = !HCCR_ac_DW.UnitDelay_DSTATE_ay;

    /* Update for UnitDelay: '<S19>/Unit Delay' incorporates:
     *  Constant: '<S15>/TRUE Constant1'
     */
    HCCR_ac_DW.UnitDelay_DSTATE_ay = true;

    /* End of Outputs for SubSystem: '<S15>/EdgeRising1' */

    /* Switch: '<S15>/Switch4' incorporates:
     *  Switch: '<S15>/Switch3'
     *  UnitDelay: '<S15>/Unit Delay3'
     */
    if (VeHCCR_b_dryRunEOPA)
    {
        /* MinMax: '<S16>/MinMax' incorporates:
         *  Constant: '<S26>/Calib'
         */
        HCCR_ac_B.Gain_dt = KeHCCR_dV_dryRunRcvryFlowEOPA;
    }
    else
    {
        if (HCCR_ac_DW.UnitDelay3_DSTATE)
        {
            /* Switch: '<S15>/Switch3' incorporates:
             *  Constant: '<S24>/Calib'
             */
            rtb_Abs2 = KeHCCR_dV_dryRunFlowStepEOPA;
        }
        else
        {
            /* Switch: '<S15>/Switch3' incorporates:
             *  Constant: '<S15>/Constant2'
             */
            rtb_Abs2 = 0.0F;
        }

        /* Switch: '<S33>/Switch1' incorporates:
         *  Constant: '<S25>/Calib'
         */
        if (rtb_Logical2_k)
        {
            HCCR_ac_DW.UnitDelay_DSTATE_b = KeHCCR_dV_dryRunMaxFlowEOPA;
        }

        /* MinMax: '<S16>/MinMax' incorporates:
         *  Sum: '<S15>/Add'
         */
        HCCR_ac_B.Gain_dt = rtb_Abs2 + HCCR_ac_DW.UnitDelay_DSTATE_b;
    }

    /* End of Switch: '<S15>/Switch4' */

    /* MinMax: '<S16>/MinMax' incorporates:
     *  Constant: '<S25>/Calib'
     *  MinMax: '<S15>/MinMax'
     */
    HCCR_ac_B.Gain_dt = fminf(KeHCCR_dV_dryRunMaxFlowEOPA, HCCR_ac_B.Gain_dt);

    /* Gain: '<S30>/Gain' */
    HCCR_ac_B.Gain_d = HCCR_ac_B.Gain_dt;

    /* Switch: '<S33>/Switch3' */
    if (rtb_Logical2_k)
    {
        /* Switch: '<S33>/Switch1' incorporates:
         *  Constant: '<S25>/Calib'
         *  UnitDelay: '<S33>/Unit Delay'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_b = KeHCCR_dV_dryRunMaxFlowEOPA;
    }
    else
    {
        /* Switch: '<S33>/Switch1' incorporates:
         *  UnitDelay: '<S33>/Unit Delay'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_b = HCCR_ac_B.Gain_dt;
    }

    /* End of Switch: '<S33>/Switch3' */

    /* If: '<S17>/If2' incorporates:
     *  Constant: '<S53>/Constant'
     *  Constant: '<S54>/Constant'
     *  Constant: '<S55>/Constant'
     *  Constant: '<S57>/Calib'
     *  RelationalOperator: '<S17>/Relational Operator3'
     *  RelationalOperator: '<S17>/Relational Operator4'
     *  RelationalOperator: '<S17>/Relational Operator5'
     */
    if (((uint32)HeHCCR_e_MtrX_to_EOPRear) == CeHCCR_e_MtrA)
    {
        /* Outputs for IfAction SubSystem: '<S17>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S61>/Action Port'
         */
        HCCR_ac_IfActionSubsystem(rtb_TmpSignalConversionAtVeMSPR_n_MtrA_S,
            &HCCR_ac_B.Merge1);

        /* End of Outputs for SubSystem: '<S17>/If Action Subsystem3' */
    }
    else if (((uint32)HeHCCR_e_MtrX_to_EOPRear) == CeHCCR_e_MtrB)
    {
        /* Outputs for IfAction SubSystem: '<S17>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S62>/Action Port'
         */
        HCCR_ac_IfActionSubsystem(rtb_TmpSignalConversionAtVeMSPR_n_MtrB_S,
            &HCCR_ac_B.Merge1);

        /* End of Outputs for SubSystem: '<S17>/If Action Subsystem4' */
    }
    else
    {
        if (((uint32)HeHCCR_e_MtrX_to_EOPRear) == CeHCCR_e_MtrC)
        {
            /* Outputs for IfAction SubSystem: '<S17>/If Action Subsystem5' incorporates:
             *  ActionPort: '<S63>/Action Port'
             */
            HCCR_ac_IfActionSubsystem(rtb_TmpSignalConversionAtVeMSPR_n_MtrC_S,
                &HCCR_ac_B.Merge1);

            /* End of Outputs for SubSystem: '<S17>/If Action Subsystem5' */
        }
    }

    /* End of If: '<S17>/If2' */
    /* End of Outputs for SubSystem: '<S1>/EDMGen2' */

    /* Inport: '<Root>/VePMIR_T_TransAuxPump2OilTemp' */
    (void)Rte_Read_VePMIR_T_TransAuxPump2OilTemp_Value(&rtb_Vector);

    /* Inport: '<Root>/VePMIR_e_TransAuxPump2DryRun' */
    (void)Rte_Read_VePMIR_e_TransAuxPump2DryRun_Value(&tmpRead_0);

    /* Outputs for Function Call SubSystem: '<S1>/EDMGen2' */
    /* Lookup_n-D: '<S45>/Vector' incorporates:
     *  Merge: '<S17>/Merge1'
     */
    HCCR_ac_B.Vector_lu = look1_iflf_binlca_16a(HCCR_ac_B.Merge1, ((const
        float32 *)&(KxHCCR_dV_LubFlowEOPB[0])), ((const float32 *)
        &(KtHCCR_dV_LubFlowEOPB[0])), 4U);

    /* RelationalOperator: '<S16>/Relational Operator' incorporates:
     *  Constant: '<S39>/Calib'
     */
    rtb_Logical2_k = (rtb_Vector > KeHCCR_T_dryRunMinTempEOPB);

    /* Outputs for Atomic SubSystem: '<S16>/EdgeRising' */
    /* Logic: '<S34>/OR1' incorporates:
     *  UnitDelay: '<S34>/Unit Delay'
     */
    rtb_Comparison1_ng = !HCCR_ac_DW.UnitDelay_DSTATE_p2;

    /* Update for UnitDelay: '<S34>/Unit Delay' */
    HCCR_ac_DW.UnitDelay_DSTATE_p2 = rtb_VM_Conditional_Signal_PMDR_b_RunCran;

    /* Outputs for Atomic SubSystem: '<S16>/Signal Latch On With Reset' */
    /* Logic: '<S47>/OR1' incorporates:
     *  Logic: '<S34>/AND'
     *  Logic: '<S47>/NOT'
     *  Logic: '<S47>/OR'
     *  UnitDelay: '<S16>/Unit Delay'
     *  UnitDelay: '<S47>/Unit Delay'
     */
    HCCR_ac_DW.UnitDelay_DSTATE_g0 = ((rtb_VM_Conditional_Signal_PMDR_b_RunCran &&
        rtb_Comparison1_ng) || ((!HCCR_ac_DW.UnitDelay_DSTATE_gn) &&
        (HCCR_ac_DW.UnitDelay_DSTATE_g0)));

    /* End of Outputs for SubSystem: '<S16>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S16>/EdgeRising' */

    /* Logic: '<S16>/Logical Operator' incorporates:
     *  UnitDelay: '<S16>/Unit Delay'
     *  UnitDelay: '<S47>/Unit Delay'
     */
    HCCR_ac_DW.UnitDelay_DSTATE_gn = (rtb_Logical2_k &&
        (HCCR_ac_DW.UnitDelay_DSTATE_g0));

    /* Logic: '<S16>/Logical Operator1' incorporates:
     *  Constant: '<S37>/Constant'
     *  Inport: '<Root>/VePMIR_e_TransAuxPump2DryRun'
     *  Logic: '<S16>/Logical Operator2'
     *  RelationalOperator: '<S16>/Relational Operator1'
     *  UnitDelay: '<S16>/Unit Delay'
     */
    VeHCCR_b_dryRunEOPB = (((((uint32)tmpRead_0) ==
        CeTAPR_e_TAP_FalseTrueSNA_True) && rtb_Logical2_k) ||
                           (HCCR_ac_DW.UnitDelay_DSTATE_gn));

    /* Outputs for Atomic SubSystem: '<S16>/EdgeRising2' */
    /* Logic: '<S36>/AND' incorporates:
     *  Logic: '<S36>/OR1'
     *  UnitDelay: '<S36>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_PMDR_b_RunCran = ((VeHCCR_b_dryRunEOPB) &&
        (!HCCR_ac_DW.UnitDelay_DSTATE_ah));

    /* Update for UnitDelay: '<S36>/Unit Delay' */
    HCCR_ac_DW.UnitDelay_DSTATE_ah = VeHCCR_b_dryRunEOPB;

    /* End of Outputs for SubSystem: '<S16>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S16>/Timer Retrigger Reset Enabled2' */
    /* Switch: '<S48>/Switch1' incorporates:
     *  Constant: '<S38>/Calib'
     *  Constant: '<S48>/Constant Value4'
     *  Logic: '<S16>/Logical Operator3'
     *  MinMax: '<S48>/Maximum'
     *  Sum: '<S48>/Subtraction'
     *  UnitDelay: '<S16>/Unit Delay3'
     *  UnitDelay: '<S48>/Unit Delay'
     */
    if ((HCCR_ac_DW.UnitDelay3_DSTATE_c) ||
            rtb_VM_Conditional_Signal_PMDR_b_RunCran)
    {
        /* Switch: '<S16>/Switch1' */
        if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
        {
            /* UnitDelay: '<S48>/Unit Delay' incorporates:
             *  Constant: '<S43>/Calib'
             *  Switch: '<S16>/Switch1'
             */
            HCCR_ac_DW.UnitDelay_DSTATE_kq = KeHCCR_t_dryRunMinTimeEOPB;
        }
        else
        {
            /* UnitDelay: '<S48>/Unit Delay' incorporates:
             *  Constant: '<S38>/Calib'
             *  Constant: '<S44>/Calib'
             *  Sum: '<S16>/Add1'
             *  Switch: '<S16>/Switch1'
             */
            HCCR_ac_DW.UnitDelay_DSTATE_kq = KeHCCR_t_dryRunStepTimeEOPB -
                HeHCCR_t_MedTED_dT;
        }

        /* End of Switch: '<S16>/Switch1' */
    }
    else
    {
        HCCR_ac_DW.UnitDelay_DSTATE_kq = fmaxf(HCCR_ac_DW.UnitDelay_DSTATE_kq -
            HeHCCR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S48>/Switch1' */

    /* Logic: '<S16>/Logical Operator4' incorporates:
     *  Constant: '<S48>/Constant Value2'
     *  Logic: '<S16>/dryRunActive'
     *  Logic: '<S16>/timer_expired'
     *  RelationalOperator: '<S48>/Greater  Than1'
     *  UnitDelay: '<S16>/Unit Delay3'
     *  UnitDelay: '<S48>/Unit Delay'
     */
    HCCR_ac_DW.UnitDelay3_DSTATE_c = ((!VeHCCR_b_dryRunEOPB) &&
        (HCCR_ac_DW.UnitDelay_DSTATE_kq <= 0.0F));

    /* End of Outputs for SubSystem: '<S16>/Timer Retrigger Reset Enabled2' */

    /* Outputs for Atomic SubSystem: '<S16>/EdgeRising1' */
    /* Logic: '<S35>/AND' incorporates:
     *  Logic: '<S35>/OR1'
     *  UnitDelay: '<S35>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_PMDR_b_RunCran = !HCCR_ac_DW.UnitDelay_DSTATE_fd;

    /* Update for UnitDelay: '<S35>/Unit Delay' incorporates:
     *  Constant: '<S16>/TRUE Constant1'
     */
    HCCR_ac_DW.UnitDelay_DSTATE_fd = true;

    /* End of Outputs for SubSystem: '<S16>/EdgeRising1' */

    /* Switch: '<S16>/Switch4' incorporates:
     *  Switch: '<S16>/Switch3'
     *  UnitDelay: '<S16>/Unit Delay3'
     */
    if (VeHCCR_b_dryRunEOPB)
    {
        /* MinMax: '<S16>/MinMax' incorporates:
         *  Constant: '<S42>/Calib'
         */
        HCCR_ac_B.Gain_dt = KeHCCR_dV_dryRunRcvryFlowEOPB;
    }
    else
    {
        if (HCCR_ac_DW.UnitDelay3_DSTATE_c)
        {
            /* Switch: '<S16>/Switch3' incorporates:
             *  Constant: '<S40>/Calib'
             */
            rtb_Abs2 = KeHCCR_dV_dryRunFlowStepEOPB;
        }
        else
        {
            /* Switch: '<S16>/Switch3' incorporates:
             *  Constant: '<S16>/Constant2'
             */
            rtb_Abs2 = 0.0F;
        }

        /* Switch: '<S49>/Switch1' incorporates:
         *  Constant: '<S41>/Calib'
         */
        if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
        {
            HCCR_ac_DW.UnitDelay_DSTATE_ks = KeHCCR_dV_dryRunMaxFlowEOPB;
        }

        /* MinMax: '<S16>/MinMax' incorporates:
         *  Sum: '<S16>/Add2'
         */
        HCCR_ac_B.Gain_dt = rtb_Abs2 + HCCR_ac_DW.UnitDelay_DSTATE_ks;
    }

    /* End of Switch: '<S16>/Switch4' */

    /* MinMax: '<S16>/MinMax' incorporates:
     *  Constant: '<S41>/Calib'
     */
    HCCR_ac_B.Gain_dt = fminf(KeHCCR_dV_dryRunMaxFlowEOPB, HCCR_ac_B.Gain_dt);

    /* Switch: '<S49>/Switch3' */
    if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
    {
        /* Switch: '<S49>/Switch1' incorporates:
         *  Constant: '<S41>/Calib'
         *  UnitDelay: '<S49>/Unit Delay'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_ks = KeHCCR_dV_dryRunMaxFlowEOPB;
    }
    else
    {
        /* Switch: '<S49>/Switch1' incorporates:
         *  UnitDelay: '<S49>/Unit Delay'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_ks = HCCR_ac_B.Gain_dt;
    }

    /* End of Switch: '<S49>/Switch3' */
    /* End of Outputs for SubSystem: '<S1>/EDMGen2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HCCC_EstClchTrq'
     */
#if Rte_SysCon_Variant_HCCR_C1

    /* Outputs for Atomic SubSystem: '<S9>/Clch1_TorqEst Subsystem' */
    /* Outputs for Atomic SubSystem: '<S312>/Clch1_TorqEst' */
    /* Switch: '<S325>/Switch4' incorporates:
     *  Constant: '<S326>/Calib'
     *  Constant: '<S327>/Calib'
     *  DataStoreWrite: '<S325>/Data Store Write1'
     *  Inport: '<Root>/VeCSDR_M_CorrectedC1TrqEstFctr'
     */
    if (KeHCCR_b_C1_TorqEstOvrrdEnbl)
    {
        VeHCCR_M_C1_TorqEst_DS = KeHCCR_M_C1_TorqEstOvrrd;
    }
    else
    {
        (void)Rte_Read_VeCSDR_M_CorrectedC1TrqEstFctr_Value(&rtb_Abs_h);

        /* Sum: '<S325>/Sum1' incorporates:
         *  Inport: '<Root>/VeCSDR_M_CorrectedC1TrqEstFctr'
         */
        VeHCCR_M_C1_TorqEst_DS = VeHCCR_M_C1_TorqEst - rtb_Abs_h;

        /* Outputs for Atomic SubSystem: '<S325>/Limiter' */
        /* Switch: '<S328>/Switch1' incorporates:
         *  RelationalOperator: '<S328>/Relational Operator'
         */
        if (VeHCCR_M_C1_TorqEst < VeHCCR_M_C1_TorqEst_DS)
        {
            /* Switch: '<S328>/Switch1' */
            VeHCCR_M_C1_TorqEst_DS = VeHCCR_M_C1_TorqEst;
        }

        /* End of Switch: '<S328>/Switch1' */

        /* Switch: '<S328>/Switch' incorporates:
         *  Constant: '<S325>/Constant Value'
         *  DataStoreWrite: '<S325>/Data Store Write1'
         *  RelationalOperator: '<S328>/Relational Operator1'
         */
        if (VeHCCR_M_C1_TorqEst_DS <= 0.0F)
        {
            VeHCCR_M_C1_TorqEst_DS = 0.0F;
        }

        /* End of Switch: '<S328>/Switch' */
        /* End of Outputs for SubSystem: '<S325>/Limiter' */
    }

    /* End of Switch: '<S325>/Switch4' */

    /* Gain: '<S329>/Gain' incorporates:
     *  DataStoreWrite: '<S325>/Data Store Write1'
     */
    HCCR_ac_B.Gain_h = VeHCCR_M_C1_TorqEst_DS;

    /* End of Outputs for SubSystem: '<S312>/Clch1_TorqEst' */
    /* End of Outputs for SubSystem: '<S9>/Clch1_TorqEst Subsystem' */
#endif

#if Rte_SysCon_Variant_HCCR_C2

    /* Outputs for Atomic SubSystem: '<S9>/Clch2_TorqEst Subsystem' */
    /* Outputs for Atomic SubSystem: '<S313>/Clch2_TorqEst' */
    /* Switch: '<S330>/Switch5' incorporates:
     *  Constant: '<S331>/Calib'
     *  Constant: '<S332>/Calib'
     *  DataStoreWrite: '<S330>/Data Store Write11'
     *  Inport: '<Root>/VeCSDR_M_CorrectedC2TrqEstFctr'
     */
    if (KeHCCR_b_C2_TorqEstOvrrdEnbl)
    {
        VeHCCR_M_C2_TorqEst_DS = KeHCCR_M_C2_TorqEstOvrrd;
    }
    else
    {
        (void)Rte_Read_VeCSDR_M_CorrectedC2TrqEstFctr_Value(&rtb_Switch_p);

        /* Sum: '<S330>/Sum2' incorporates:
         *  Inport: '<Root>/VeCSDR_M_CorrectedC2TrqEstFctr'
         */
        VeHCCR_M_C2_TorqEst_DS = VeHCCR_M_C2_TorqEst - rtb_Switch_p;

        /* Outputs for Atomic SubSystem: '<S330>/Limiter1' */
        /* Switch: '<S333>/Switch1' incorporates:
         *  RelationalOperator: '<S333>/Relational Operator'
         */
        if (VeHCCR_M_C2_TorqEst < VeHCCR_M_C2_TorqEst_DS)
        {
            /* Switch: '<S333>/Switch1' */
            VeHCCR_M_C2_TorqEst_DS = VeHCCR_M_C2_TorqEst;
        }

        /* End of Switch: '<S333>/Switch1' */

        /* Switch: '<S333>/Switch' incorporates:
         *  Constant: '<S330>/Constant Value4'
         *  DataStoreWrite: '<S330>/Data Store Write11'
         *  RelationalOperator: '<S333>/Relational Operator1'
         */
        if (VeHCCR_M_C2_TorqEst_DS <= 0.0F)
        {
            VeHCCR_M_C2_TorqEst_DS = 0.0F;
        }

        /* End of Switch: '<S333>/Switch' */
        /* End of Outputs for SubSystem: '<S330>/Limiter1' */
    }

    /* End of Switch: '<S330>/Switch5' */

    /* Gain: '<S334>/Gain' incorporates:
     *  DataStoreWrite: '<S330>/Data Store Write11'
     */
    HCCR_ac_B.Gain_m = VeHCCR_M_C2_TorqEst_DS;

    /* End of Outputs for SubSystem: '<S313>/Clch2_TorqEst' */
    /* End of Outputs for SubSystem: '<S9>/Clch2_TorqEst Subsystem' */
#endif

#if Rte_SysCon_Variant_HCCR_C3

    /* Outputs for Atomic SubSystem: '<S9>/Clch3_TorqEst' */
    /* Outputs for Atomic SubSystem: '<S314>/Clch3_TorqEst' */
    /* Switch: '<S335>/Switch7' incorporates:
     *  Constant: '<S335>/Constant Value5'
     *  Constant: '<S336>/Calib'
     *  Constant: '<S337>/Calib'
     *  DataStoreWrite: '<S335>/Data Store Write3'
     *  RelationalOperator: '<S338>/Relational Operator1'
     *  Switch: '<S338>/Switch'
     *  Switch: '<S338>/Switch1'
     */
    if (KeHCCR_b_C3_TorqEstOvrrdEnbl)
    {
        VeHCCR_M_C3_TorqEst_DS = KeHCCR_M_C3_TorqEstOvrrd;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S335>/Limiter2' */
        if (VeHCCR_M_C3_TorqEst > 0.0F)
        {
            /* Switch: '<S338>/Switch' incorporates:
             *  DataStoreWrite: '<S335>/Data Store Write3'
             *  Switch: '<S338>/Switch1'
             */
            VeHCCR_M_C3_TorqEst_DS = VeHCCR_M_C3_TorqEst;
        }
        else
        {
            VeHCCR_M_C3_TorqEst_DS = 0.0F;
        }

        /* End of Outputs for SubSystem: '<S335>/Limiter2' */
    }

    /* End of Switch: '<S335>/Switch7' */

    /* Gain: '<S339>/Gain' incorporates:
     *  DataStoreWrite: '<S335>/Data Store Write3'
     */
    HCCR_ac_B.Gain_n = VeHCCR_M_C3_TorqEst_DS;

    /* End of Outputs for SubSystem: '<S314>/Clch3_TorqEst' */
    /* End of Outputs for SubSystem: '<S9>/Clch3_TorqEst' */
#endif

#if Rte_SysCon_Variant_HCCR_TPEst

    /* Outputs for Atomic SubSystem: '<S9>/C2ShiftActv Subsystem' */
    /* Outputs for Atomic SubSystem: '<S311>/Subsystem' */
    /* Outputs for Atomic SubSystem: '<S316>/EdgeRising' */
    /* Logic: '<S319>/AND' incorporates:
     *  Logic: '<S319>/OR1'
     *  UnitDelay: '<S319>/Unit Delay'
     */
    rtb_VM_Conditional_Signal_PMDR_b_RunCran = ((VeHCCR_b_C2CShiftActive) &&
        (!HCCR_ac_DW.UnitDelay_DSTATE_kv));

    /* Update for UnitDelay: '<S319>/Unit Delay' */
    HCCR_ac_DW.UnitDelay_DSTATE_kv = VeHCCR_b_C2CShiftActive;

    /* End of Outputs for SubSystem: '<S316>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S316>/C2CShft_ActiveCnt' */
    /* Outputs for Atomic SubSystem: '<S317>/EdgeRising' */
    /* Update for UnitDelay: '<S323>/Unit Delay' incorporates:
     *  Constant: '<S316>/FALSE Constant'
     */
    HCCR_ac_DW.UnitDelay_DSTATE_m0 = false;

    /* End of Outputs for SubSystem: '<S317>/EdgeRising' */

    /* Switch: '<S317>/Switch2' incorporates:
     *  Switch: '<S317>/Switch1'
     */
    if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
    {
        /* UnitDelay: '<S317>/Unit Delay' incorporates:
         *  Constant: '<S317>/Constant Value1'
         *  Sum: '<S317>/Subtraction'
         *  Switch: '<S317>/Switch2'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_nv = (uint16)(((uint32)
            HCCR_ac_DW.UnitDelay_DSTATE_nv) + 1U);
    }

    /* End of Switch: '<S317>/Switch2' */
    /* End of Outputs for SubSystem: '<S316>/C2CShft_ActiveCnt' */

    /* Switch: '<S316>/Switch' incorporates:
     *  Constant: '<S316>/Constant Value2'
     *  Constant: '<S321>/Calib'
     *  DataStoreWrite: '<S316>/Data Store Write2'
     *  UnitDelay: '<S317>/Unit Delay'
     */
    if (KeHCCR_b_RstAllC2C_ShftCnt)
    {
        HCCR_ac_DW.NeHCCR_Cnt_AllC2CShifts = 0U;
    }
    else
    {
        HCCR_ac_DW.NeHCCR_Cnt_AllC2CShifts = HCCR_ac_DW.UnitDelay_DSTATE_nv;
    }

    /* End of Switch: '<S316>/Switch' */

    /* Logic: '<S316>/Logical' incorporates:
     *  Constant: '<S320>/Calib'
     *  DataStoreRead: '<S316>/Data Store Read3'
     *  DataStoreRead: '<S316>/Data Store Read5'
     *  DataStoreRead: '<S316>/Data Store Read9'
     *  RelationalOperator: '<S316>/Comparison11'
     */
    rtb_Logical2_k = (((HCCR_ac_DW.NeHCCR_b_C2TchPt_DtctFlg_DS) &&
                       (HCCR_ac_DW.NeHCCR_b_C1TchPt_DtctFlg_DS)) && (((float32)
                        HCCR_ac_DW.NeHCCR_Cnt_C2CShifts_TchPtLrn) >
                       KeHCCR_Cnt_C2CShfts_TchPtLrn));

    /* Logic: '<S316>/Logical1' incorporates:
     *  Constant: '<S322>/Calib'
     */
    VeHCCR_b_TchPtFlgs_Reset = (rtb_Logical2_k || (KeHCCR_b_RstTchPtDtctdFlg));

    /* Switch: '<S316>/Switch3' incorporates:
     *  Constant: '<S316>/FALSE Constant1'
     *  DataStoreWrite: '<S316>/Data Store Write6'
     *  DataStoreWrite: '<S316>/Data Store Write7'
     *  Switch: '<S316>/Switch6'
     */
    if (VeHCCR_b_TchPtFlgs_Reset)
    {
        HCCR_ac_DW.NeHCCR_b_C2TchPt_DtctFlg_DS = false;
        HCCR_ac_DW.NeHCCR_b_C1TchPt_DtctFlg_DS = false;
    }

    /* End of Switch: '<S316>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S316>/C2CShft_TchPLrnCnt' */
    /* Outputs for Atomic SubSystem: '<S318>/EdgeRising' */
    /* Logic: '<S324>/OR1' incorporates:
     *  UnitDelay: '<S324>/Unit Delay'
     */
    rtb_Comparison1_ng = !HCCR_ac_DW.UnitDelay_DSTATE_mm;

    /* Update for UnitDelay: '<S324>/Unit Delay' */
    HCCR_ac_DW.UnitDelay_DSTATE_mm = rtb_Logical2_k;

    /* Switch: '<S318>/Switch1' incorporates:
     *  Constant: '<S318>/Constant Value2'
     *  Logic: '<S324>/AND'
     *  Switch: '<S318>/Switch2'
     *  UnitDelay: '<S318>/Unit Delay'
     */
    if (rtb_Logical2_k && rtb_Comparison1_ng)
    {
        HCCR_ac_DW.UnitDelay_DSTATE_lp = 0U;
    }
    else
    {
        if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
        {
            /* UnitDelay: '<S318>/Unit Delay' incorporates:
             *  Constant: '<S318>/Constant Value1'
             *  Sum: '<S318>/Subtraction'
             *  Switch: '<S318>/Switch2'
             */
            HCCR_ac_DW.UnitDelay_DSTATE_lp = (uint16)(((uint32)
                HCCR_ac_DW.UnitDelay_DSTATE_lp) + 1U);
        }
    }

    /* End of Switch: '<S318>/Switch1' */
    /* End of Outputs for SubSystem: '<S318>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S316>/C2CShft_TchPLrnCnt' */

    /* DataStoreWrite: '<S316>/Data Store Write8' incorporates:
     *  UnitDelay: '<S318>/Unit Delay'
     */
    HCCR_ac_DW.NeHCCR_Cnt_C2CShifts_TchPtLrn = HCCR_ac_DW.UnitDelay_DSTATE_lp;

    /* End of Outputs for SubSystem: '<S311>/Subsystem' */
    /* End of Outputs for SubSystem: '<S9>/C2ShiftActv Subsystem' */
#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HCCC_ClchStatMtor'
     */
    /* Switch: '<S8>/Switch3' incorporates:
     *  Constant: '<S231>/Calib'
     */
#if Rte_SysCon_Variant_HCCR_C1 || Rte_SysCon_Variant_HCCR_C2 || Rte_SysCon_Variant_HCCR_C3

    if (KeHCCR_b_UseTransOilTemp)
    {
        /* Switch: '<S8>/Switch3' */
        rtb_Switch3_c4 = VeHCCR_T_TransOilTemp;
    }
    else
    {
        /* Switch: '<S8>/Switch3' */
        rtb_Switch3_c4 = VeHCCR_Pct_AccelPedalActPosition;
    }

#endif

    /* End of Switch: '<S8>/Switch3' */

    /* Logic: '<S8>/Logical Operator2' incorporates:
     *  Switch: '<S307>/Switch3'
     */
#if Rte_SysCon_Variant_HCCR_C3

    /* Outputs for Atomic SubSystem: '<S8>/Clch3_StatMtor Subsystem' */
    /* Logic: '<S8>/Logical Operator2' incorporates:
     *  Constant: '<S229>/Calib'
     */
    rtb_VM_Conditional_Signal_PMDR_b_RunCran =
        ((rtb_TmpSignalConversionAtVaCSLR_b_ClchSt[2]) &&
         (HeHCCR_b_EnblClchStRstC3));

    /* Outputs for Atomic SubSystem: '<S220>/Subsystem2' */
    /* Lookup_n-D: '<S289>/Vector' incorporates:
     *  DataTypeConversion: '<S285>/Data Type Conversion2'
     *  Switch: '<S11>/Switch53'
     *  Switch: '<S8>/Switch3'
     */
    rtb_Vector = look2_iflf_binlca_16a(rtb_Switch3_c4, (float32)
        VeHCCR_e_C3_StatControl, ((const float32 *)
        &(KxHCCR_t_C3MinNearSyncNLockedTime[0])), ((const float32 *)
        &(KyHCCR_t_C3MinNearSyncNLockedTime[0])), ((const float32 *)
        &(KtHCCR_t_C3MinNearSyncNLockedTime[0])), HCCR_ac_ConstP.pooled8, 5U);

    /* Outputs for Atomic SubSystem: '<S285>/HCCL_DtrmnC3Stat' */
    /* Abs: '<S286>/Abs' */
    rtb_Abs_h = fabsf(HCCR_ac_B.VeHCCR_n_C3_SlipSpeed);

    /* Switch: '<S299>/Switch' incorporates:
     *  Abs: '<S286>/Abs1'
     */
    rtb_Switch_p = fabsf(VeHCCR_dn_NC3dot);

    /* Logic: '<S286>/AND' incorporates:
     *  RelationalOperator: '<S286>/Greater  Than1'
     *  RelationalOperator: '<S286>/Greater  Than4'
     */
    rtb_Comparison1_ng = ((rtb_Abs_h >
                           HCCR_ac_B.VariantMerge_For_Variant_Source_Variant_) ||
                          (rtb_Switch_p > VeHCCR_dn_C3MaxSlRt_Sel));

    /* Abs: '<S286>/Abs2' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read1'
     */
    rtb_Abs2 = fabsf(VeHCCR_M_C3_TorqEst_DS);

    /* Switch: '<S310>/Switch1' incorporates:
     *  RelationalOperator: '<S286>/Greater  Than'
     */
    rtb_Logical2_k = (rtb_Abs2 > VeHCCR_M_C3MinLockedTorq_Sel);

    /* Outputs for Atomic SubSystem: '<S286>/ClLockedTimer' */
    /* Switch: '<S290>/Switch1' incorporates:
     *  Constant: '<S230>/Calib'
     *  Constant: '<S290>/Constant Value4'
     *  MinMax: '<S290>/Maximum'
     *  Sum: '<S290>/Subtraction'
     *  UnitDelay: '<S290>/Unit Delay'
     */
    if (rtb_Comparison1_ng)
    {
        HCCR_ac_DW.UnitDelay_DSTATE_o = rtb_Vector;
    }
    else
    {
        HCCR_ac_DW.UnitDelay_DSTATE_o = fmaxf(HCCR_ac_DW.UnitDelay_DSTATE_o -
            HeHCCR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S290>/Switch1' */

    /* Logic: '<S286>/NOT' incorporates:
     *  Constant: '<S290>/Constant Value2'
     *  Logic: '<S290>/Logical1'
     *  RelationalOperator: '<S290>/Greater  Than1'
     *  UnitDelay: '<S290>/Unit Delay'
     */
    rtb_Logical_j = ((!rtb_Comparison1_ng) && (HCCR_ac_DW.UnitDelay_DSTATE_o <=
                      0.0F));

    /* End of Outputs for SubSystem: '<S286>/ClLockedTimer' */

    /* Outputs for Atomic SubSystem: '<S286>/SyncTurnOffDelay' */
    /* Outputs for Atomic SubSystem: '<S298>/Edge Falling with Resetable Delay' */
    /* Switch: '<S307>/Switch1' */
    if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
    {
        /* Switch: '<S307>/Switch1' incorporates:
         *  Constant: '<S305>/Constant1'
         */
        rtb_AND_b0 = false;
    }
    else
    {
        /* Switch: '<S307>/Switch1' incorporates:
         *  UnitDelay: '<S307>/Unit Delay'
         */
        rtb_AND_b0 = HCCR_ac_DW.UnitDelay_DSTATE_gu;
    }

    /* End of Switch: '<S307>/Switch1' */
    rtb_Comparison1_ng = !rtb_VM_Conditional_Signal_PMDR_b_RunCran;

    /* Switch: '<S307>/Switch3' incorporates:
     *  UnitDelay: '<S307>/Unit Delay'
     */
    HCCR_ac_DW.UnitDelay_DSTATE_gu = (rtb_Comparison1_ng && rtb_Logical_j);

    /* Switch: '<S298>/Switch' incorporates:
     *  Logic: '<S305>/AND'
     *  Logic: '<S305>/OR1'
     *  Switch: '<S306>/Switch1'
     */
    if ((!rtb_Logical_j) && rtb_AND_b0)
    {
        /* Switch: '<S306>/Switch1' incorporates:
         *  Switch: '<S298>/Switch'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_g =
            HCCR_ac_B.VariantMerge_For_Variant_Source_Varian_g;
    }
    else
    {
        if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
        {
            /* Switch: '<S306>/Switch1' incorporates:
             *  Constant: '<S298>/Constant1'
             */
            HCCR_ac_DW.UnitDelay_DSTATE_g = 0.0F;
        }

        /* Switch: '<S306>/Switch1' incorporates:
         *  Constant: '<S230>/Calib'
         *  Constant: '<S298>/Constant Value1'
         *  MinMax: '<S298>/Minimum'
         *  Sum: '<S298>/Summation'
         *  Switch: '<S298>/Switch'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_g = fmaxf(HCCR_ac_DW.UnitDelay_DSTATE_g -
            HeHCCR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S298>/Switch' */
    /* End of Outputs for SubSystem: '<S298>/Edge Falling with Resetable Delay' */

    /* Logic: '<S298>/AND' incorporates:
     *  Constant: '<S298>/Constant Value2'
     *  RelationalOperator: '<S298>/Greater  Than'
     */
    rtb_Logical_j = (rtb_Logical_j || (HCCR_ac_DW.UnitDelay_DSTATE_g > 0.0F));

    /* Switch: '<S306>/Switch3' */
    if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
    {
        /* Switch: '<S306>/Switch1' incorporates:
         *  Constant: '<S298>/Constant1'
         *  UnitDelay: '<S306>/Unit Delay'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_g = 0.0F;
    }

    /* End of Switch: '<S306>/Switch3' */
    /* End of Outputs for SubSystem: '<S286>/SyncTurnOffDelay' */

    /* Logic: '<S286>/AND1' incorporates:
     *  Constant: '<S226>/Constant'
     *  RelationalOperator: '<S286>/Greater  Than8'
     *  Switch: '<S11>/Switch47'
     */
    rtb_AND_b0 = ((rtb_Logical2_k && (((uint32)VeHCCR_e_C3_Stat) >=
                    CeHCCR_e_ClActuated)) && rtb_Logical_j);

    /* Logic: '<S286>/AND2' incorporates:
     *  RelationalOperator: '<S286>/Greater  Than5'
     *  RelationalOperator: '<S286>/Greater  Than6'
     */
    rtb_AND2 = ((rtb_Abs_h > HCCR_ac_B.VeHCCR_n_C3MaxNearSyncSl_Sel) ||
                (rtb_Switch_p > VeHCCR_dn_C3MaxNearSyncRt_Sel));

    /* Logic: '<S286>/AND3' incorporates:
     *  Constant: '<S297>/Constant'
     *  RelationalOperator: '<S286>/Greater  Than7'
     *  RelationalOperator: '<S286>/Greater  Than8'
     *  Switch: '<S11>/Switch47'
     */
    rtb_AND3 = ((((uint32)VeHCCR_e_C3_Stat) == CeHCCR_e_ClLocked) &&
                rtb_Logical2_k);

    /* Outputs for Atomic SubSystem: '<S286>/ClLockedTimer1' */
    /* Switch: '<S291>/Switch1' incorporates:
     *  Constant: '<S230>/Calib'
     *  Constant: '<S291>/Constant Value4'
     *  MinMax: '<S291>/Maximum'
     *  Sum: '<S291>/Subtraction'
     *  UnitDelay: '<S291>/Unit Delay'
     */
    if (rtb_AND2)
    {
        HCCR_ac_DW.UnitDelay_DSTATE_m = rtb_Vector;
    }
    else
    {
        HCCR_ac_DW.UnitDelay_DSTATE_m = fmaxf(HCCR_ac_DW.UnitDelay_DSTATE_m -
            HeHCCR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S291>/Switch1' */

    /* Logic: '<S286>/NOT1' incorporates:
     *  Constant: '<S291>/Constant Value2'
     *  Logic: '<S291>/Logical1'
     *  RelationalOperator: '<S291>/Greater  Than1'
     *  UnitDelay: '<S291>/Unit Delay'
     */
    rtb_AND2 = ((!rtb_AND2) && (HCCR_ac_DW.UnitDelay_DSTATE_m <= 0.0F));

    /* End of Outputs for SubSystem: '<S286>/ClLockedTimer1' */

    /* Outputs for Atomic SubSystem: '<S286>/SyncTurnOffDelay1' */
    /* Outputs for Atomic SubSystem: '<S299>/Edge Falling with Resetable Delay' */
    /* Switch: '<S310>/Switch1' */
    if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
    {
        /* Switch: '<S310>/Switch1' incorporates:
         *  Constant: '<S308>/Constant1'
         */
        rtb_Logical2_k = false;
    }
    else
    {
        /* Switch: '<S310>/Switch1' incorporates:
         *  UnitDelay: '<S310>/Unit Delay'
         */
        rtb_Logical2_k = HCCR_ac_DW.UnitDelay_DSTATE_al;
    }

    /* End of Switch: '<S310>/Switch1' */

    /* Switch: '<S310>/Switch3' incorporates:
     *  UnitDelay: '<S310>/Unit Delay'
     */
    HCCR_ac_DW.UnitDelay_DSTATE_al = (rtb_Comparison1_ng && rtb_AND2);

    /* Switch: '<S299>/Switch' incorporates:
     *  Logic: '<S308>/AND'
     *  Logic: '<S308>/OR1'
     *  Switch: '<S309>/Switch1'
     */
    if ((!rtb_AND2) && rtb_Logical2_k)
    {
        /* Switch: '<S299>/Switch' */
        rtb_Switch_p = HCCR_ac_B.VeHCCR_t_C3MinNearSyncHold_Sel;
    }
    else
    {
        if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
        {
            /* Switch: '<S309>/Switch1' incorporates:
             *  Constant: '<S299>/Constant1'
             */
            HCCR_ac_DW.UnitDelay_DSTATE_k = 0.0F;
        }

        /* Switch: '<S299>/Switch' incorporates:
         *  Constant: '<S230>/Calib'
         *  Constant: '<S299>/Constant Value1'
         *  MinMax: '<S299>/Minimum'
         *  Sum: '<S299>/Summation'
         */
        rtb_Switch_p = fmaxf(HCCR_ac_DW.UnitDelay_DSTATE_k - HeHCCR_t_MedTED_dT,
                             0.0F);
    }

    /* End of Switch: '<S299>/Switch' */
    /* End of Outputs for SubSystem: '<S299>/Edge Falling with Resetable Delay' */

    /* Switch: '<S309>/Switch3' */
    if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
    {
        /* Switch: '<S309>/Switch1' incorporates:
         *  Constant: '<S299>/Constant1'
         *  UnitDelay: '<S309>/Unit Delay'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_k = 0.0F;
    }
    else
    {
        /* Switch: '<S309>/Switch1' incorporates:
         *  UnitDelay: '<S309>/Unit Delay'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_k = rtb_Switch_p;
    }

    /* End of Switch: '<S309>/Switch3' */
    /* End of Outputs for SubSystem: '<S286>/SyncTurnOffDelay1' */

    /* If: '<S286>/If' incorporates:
     *  Constant: '<S299>/Constant Value2'
     *  Logic: '<S286>/AND4'
     *  Logic: '<S299>/AND'
     *  RelationalOperator: '<S286>/Greater  Than2'
     *  RelationalOperator: '<S299>/Greater  Than'
     */
    if (rtb_AND3 || rtb_AND_b0)
    {
        /* Outputs for IfAction SubSystem: '<S286>/Cl_Locked_Stat' incorporates:
         *  ActionPort: '<S293>/Action Port'
         */
        HCCR_ac_Cl_Locked_Stat((&(VeHCCR_e_C3_St)));

        /* End of Outputs for SubSystem: '<S286>/Cl_Locked_Stat' */
    }
    else if (rtb_Logical_j)
    {
        /* Outputs for IfAction SubSystem: '<S286>/Cl_Synced_Stat' incorporates:
         *  ActionPort: '<S296>/Action Port'
         */
        HCCR_ac_Cl_Synced_Stat((&(VeHCCR_e_C3_St)));

        /* End of Outputs for SubSystem: '<S286>/Cl_Synced_Stat' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S286>/SyncTurnOffDelay1' */
        if (rtb_AND2 || (rtb_Switch_p > 0.0F))
        {
            /* Outputs for IfAction SubSystem: '<S286>/Cl_NearSynced_Stat' incorporates:
             *  ActionPort: '<S294>/Action Port'
             */
            HCCR_ac_Cl_NearSynced_Stat((&(VeHCCR_e_C3_St)));

            /* End of Outputs for SubSystem: '<S286>/Cl_NearSynced_Stat' */
        }
        else if (rtb_Abs2 > VeHCCR_M_C3MinActTorq_Sel)
        {
            /* Outputs for IfAction SubSystem: '<S286>/Cl_Actuated_Stat' incorporates:
             *  ActionPort: '<S292>/Action Port'
             */
            HCCR_ac_Cl_Actuated_Stat((&(VeHCCR_e_C3_St)));

            /* End of Outputs for SubSystem: '<S286>/Cl_Actuated_Stat' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S286>/Cl_Released_Stat' incorporates:
             *  ActionPort: '<S295>/Action Port'
             */
            HCCR_ac_Cl_Released_Stat((&(VeHCCR_e_C3_St)));

            /* End of Outputs for SubSystem: '<S286>/Cl_Released_Stat' */
        }

        /* End of Outputs for SubSystem: '<S286>/SyncTurnOffDelay1' */
    }

    /* End of If: '<S286>/If' */
    /* End of Outputs for SubSystem: '<S285>/HCCL_DtrmnC3Stat' */

    /* Switch: '<S285>/Switch2' incorporates:
     *  Constant: '<S287>/Calib'
     *  Constant: '<S288>/Calib'
     *  DataStoreWrite: '<S8>/Data Store Write1'
     *  Merge: '<S286>/Merge'
     */
    if (KeHCCR_b_Clch3_StatOvrrdEnbl)
    {
        VeHCCR_e_C3_Stat_DS = KeHCCR_e_Clch3_StatOvrrd;
    }
    else
    {
        VeHCCR_e_C3_Stat_DS = VeHCCR_e_C3_St;
    }

    /* End of Switch: '<S285>/Switch2' */
    /* End of Outputs for SubSystem: '<S220>/Subsystem2' */
    /* End of Outputs for SubSystem: '<S8>/Clch3_StatMtor Subsystem' */
#endif

    /* End of Logic: '<S8>/Logical Operator2' */

    /* Logic: '<S8>/Logical Operator1' incorporates:
     *  Switch: '<S281>/Switch3'
     */
#if Rte_SysCon_Variant_HCCR_C2

    /* Outputs for Atomic SubSystem: '<S8>/Clch2_StatMtor Subsystem' */
    /* Logic: '<S8>/Logical Operator1' incorporates:
     *  Constant: '<S228>/Calib'
     */
    rtb_VM_Conditional_Signal_PMDR_b_RunCran =
        ((rtb_TmpSignalConversionAtVaCSLR_b_ClchSt[1]) &&
         (HeHCCR_b_EnblClchStRstC2));

    /* Outputs for Atomic SubSystem: '<S219>/Subsystem1' */
    /* Lookup_n-D: '<S263>/Vector' incorporates:
     *  DataTypeConversion: '<S259>/Data Type Conversion'
     *  Switch: '<S11>/Switch52'
     *  Switch: '<S8>/Switch3'
     */
    rtb_Vector = look2_iflf_binlca_16a(rtb_Switch3_c4, (float32)
        VeHCCR_e_C2_StatControl, ((const float32 *)
        &(KxHCCR_t_C2MinNearSyncNLockedTime[0])), ((const float32 *)
        &(KyHCCR_t_C2MinNearSyncNLockedTime[0])), ((const float32 *)
        &(KtHCCR_t_C2MinNearSyncNLockedTime[0])), HCCR_ac_ConstP.pooled8, 5U);

    /* Outputs for Atomic SubSystem: '<S259>/HCCL_DtrmnC2Stat' */
    /* Abs: '<S260>/Abs' */
    rtb_Abs_h = fabsf(HCCR_ac_B.VeHCCR_n_C2_SlipSpeed);

    /* Switch: '<S273>/Switch' incorporates:
     *  Abs: '<S260>/Abs1'
     */
    rtb_Switch_p = fabsf(VeHCCR_dn_NC2dot);

    /* Logic: '<S260>/AND' incorporates:
     *  RelationalOperator: '<S260>/Greater  Than1'
     *  RelationalOperator: '<S260>/Greater  Than4'
     */
    rtb_Comparison1_ng = ((rtb_Abs_h > HCCR_ac_B.VeHCCR_n_C2MaxLockedSl_Sel) ||
                          (rtb_Switch_p > VeHCCR_dn_C2MaxSlRt_Sel));

    /* Abs: '<S260>/Abs2' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read9'
     */
    rtb_Abs2 = fabsf(VeHCCR_M_C2_TorqEst_DS);

    /* Switch: '<S284>/Switch1' incorporates:
     *  RelationalOperator: '<S260>/Greater  Than'
     */
    rtb_Logical2_k = (rtb_Abs2 > VeHCCR_M_C2MinLockedTorq_Sel);

    /* Outputs for Atomic SubSystem: '<S260>/ClLockedTimer' */
    /* Switch: '<S264>/Switch1' incorporates:
     *  Constant: '<S230>/Calib'
     *  Constant: '<S264>/Constant Value4'
     *  MinMax: '<S264>/Maximum'
     *  Sum: '<S264>/Subtraction'
     *  UnitDelay: '<S264>/Unit Delay'
     */
    if (rtb_Comparison1_ng)
    {
        HCCR_ac_DW.UnitDelay_DSTATE_a = rtb_Vector;
    }
    else
    {
        HCCR_ac_DW.UnitDelay_DSTATE_a = fmaxf(HCCR_ac_DW.UnitDelay_DSTATE_a -
            HeHCCR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S264>/Switch1' */

    /* Logic: '<S260>/NOT' incorporates:
     *  Constant: '<S264>/Constant Value2'
     *  Logic: '<S264>/Logical1'
     *  RelationalOperator: '<S264>/Greater  Than1'
     *  UnitDelay: '<S264>/Unit Delay'
     */
    rtb_Logical_j = ((!rtb_Comparison1_ng) && (HCCR_ac_DW.UnitDelay_DSTATE_a <=
                      0.0F));

    /* End of Outputs for SubSystem: '<S260>/ClLockedTimer' */

    /* Outputs for Atomic SubSystem: '<S260>/SyncTurnOffDelay' */
    /* Outputs for Atomic SubSystem: '<S272>/Edge Falling with Resetable Delay' */
    /* Switch: '<S281>/Switch1' */
    if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
    {
        /* Switch: '<S281>/Switch1' incorporates:
         *  Constant: '<S279>/Constant1'
         */
        rtb_AND_b0 = false;
    }
    else
    {
        /* Switch: '<S281>/Switch1' incorporates:
         *  UnitDelay: '<S281>/Unit Delay'
         */
        rtb_AND_b0 = HCCR_ac_DW.UnitDelay_DSTATE_lu;
    }

    /* End of Switch: '<S281>/Switch1' */
    rtb_Comparison1_ng = !rtb_VM_Conditional_Signal_PMDR_b_RunCran;

    /* Switch: '<S281>/Switch3' incorporates:
     *  UnitDelay: '<S281>/Unit Delay'
     */
    HCCR_ac_DW.UnitDelay_DSTATE_lu = (rtb_Comparison1_ng && rtb_Logical_j);

    /* Switch: '<S272>/Switch' incorporates:
     *  Logic: '<S279>/AND'
     *  Logic: '<S279>/OR1'
     *  Switch: '<S280>/Switch1'
     */
    if ((!rtb_Logical_j) && rtb_AND_b0)
    {
        /* Switch: '<S280>/Switch1' incorporates:
         *  Switch: '<S272>/Switch'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_d = HCCR_ac_B.VeHCCR_t_C2MinLockedHold_Sel;
    }
    else
    {
        if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
        {
            /* Switch: '<S280>/Switch1' incorporates:
             *  Constant: '<S272>/Constant1'
             */
            HCCR_ac_DW.UnitDelay_DSTATE_d = 0.0F;
        }

        /* Switch: '<S280>/Switch1' incorporates:
         *  Constant: '<S230>/Calib'
         *  Constant: '<S272>/Constant Value1'
         *  MinMax: '<S272>/Minimum'
         *  Sum: '<S272>/Summation'
         *  Switch: '<S272>/Switch'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_d = fmaxf(HCCR_ac_DW.UnitDelay_DSTATE_d -
            HeHCCR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S272>/Switch' */
    /* End of Outputs for SubSystem: '<S272>/Edge Falling with Resetable Delay' */

    /* Logic: '<S272>/AND' incorporates:
     *  Constant: '<S272>/Constant Value2'
     *  RelationalOperator: '<S272>/Greater  Than'
     */
    rtb_Logical_j = (rtb_Logical_j || (HCCR_ac_DW.UnitDelay_DSTATE_d > 0.0F));

    /* Switch: '<S280>/Switch3' */
    if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
    {
        /* Switch: '<S280>/Switch1' incorporates:
         *  Constant: '<S272>/Constant1'
         *  UnitDelay: '<S280>/Unit Delay'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_d = 0.0F;
    }

    /* End of Switch: '<S280>/Switch3' */
    /* End of Outputs for SubSystem: '<S260>/SyncTurnOffDelay' */

    /* Logic: '<S260>/AND1' incorporates:
     *  Constant: '<S225>/Constant'
     *  RelationalOperator: '<S260>/Greater  Than8'
     *  Switch: '<S11>/Switch41'
     */
    rtb_AND_b0 = ((rtb_Logical2_k && (((uint32)VeHCCR_e_C2_Stat) >=
                    CeHCCR_e_ClActuated)) && rtb_Logical_j);

    /* Logic: '<S260>/AND2' incorporates:
     *  RelationalOperator: '<S260>/Greater  Than5'
     *  RelationalOperator: '<S260>/Greater  Than6'
     */
    rtb_AND2 = ((rtb_Abs_h > HCCR_ac_B.VeHCCR_n_C2MaxNearSyncSl_Sel) ||
                (rtb_Switch_p > VeHCCR_dn_C2MaxNearSyncRt_Sel));

    /* Logic: '<S260>/AND3' incorporates:
     *  Constant: '<S271>/Constant'
     *  RelationalOperator: '<S260>/Greater  Than7'
     *  RelationalOperator: '<S260>/Greater  Than8'
     *  Switch: '<S11>/Switch41'
     */
    rtb_AND3 = ((((uint32)VeHCCR_e_C2_Stat) == CeHCCR_e_ClLocked) &&
                rtb_Logical2_k);

    /* Outputs for Atomic SubSystem: '<S260>/ClLockedTimer1' */
    /* Switch: '<S265>/Switch1' incorporates:
     *  Constant: '<S230>/Calib'
     *  Constant: '<S265>/Constant Value4'
     *  MinMax: '<S265>/Maximum'
     *  Sum: '<S265>/Subtraction'
     *  UnitDelay: '<S265>/Unit Delay'
     */
    if (rtb_AND2)
    {
        HCCR_ac_DW.UnitDelay_DSTATE_n5 = rtb_Vector;
    }
    else
    {
        HCCR_ac_DW.UnitDelay_DSTATE_n5 = fmaxf(HCCR_ac_DW.UnitDelay_DSTATE_n5 -
            HeHCCR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S265>/Switch1' */

    /* Logic: '<S260>/NOT1' incorporates:
     *  Constant: '<S265>/Constant Value2'
     *  Logic: '<S265>/Logical1'
     *  RelationalOperator: '<S265>/Greater  Than1'
     *  UnitDelay: '<S265>/Unit Delay'
     */
    rtb_AND2 = ((!rtb_AND2) && (HCCR_ac_DW.UnitDelay_DSTATE_n5 <= 0.0F));

    /* End of Outputs for SubSystem: '<S260>/ClLockedTimer1' */

    /* Outputs for Atomic SubSystem: '<S260>/SyncTurnOffDelay1' */
    /* Outputs for Atomic SubSystem: '<S273>/Edge Falling with Resetable Delay' */
    /* Switch: '<S284>/Switch1' */
    if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
    {
        /* Switch: '<S284>/Switch1' incorporates:
         *  Constant: '<S282>/Constant1'
         */
        rtb_Logical2_k = false;
    }
    else
    {
        /* Switch: '<S284>/Switch1' incorporates:
         *  UnitDelay: '<S284>/Unit Delay'
         */
        rtb_Logical2_k = HCCR_ac_DW.UnitDelay_DSTATE_a2;
    }

    /* End of Switch: '<S284>/Switch1' */

    /* Switch: '<S284>/Switch3' incorporates:
     *  UnitDelay: '<S284>/Unit Delay'
     */
    HCCR_ac_DW.UnitDelay_DSTATE_a2 = (rtb_Comparison1_ng && rtb_AND2);

    /* Switch: '<S273>/Switch' incorporates:
     *  Logic: '<S282>/AND'
     *  Logic: '<S282>/OR1'
     *  Switch: '<S283>/Switch1'
     */
    if ((!rtb_AND2) && rtb_Logical2_k)
    {
        /* Switch: '<S273>/Switch' */
        rtb_Switch_p = HCCR_ac_B.VeHCCR_t_C2MinNearSyncHold_Sel;
    }
    else
    {
        if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
        {
            /* Switch: '<S283>/Switch1' incorporates:
             *  Constant: '<S273>/Constant1'
             */
            HCCR_ac_DW.UnitDelay_DSTATE_n = 0.0F;
        }

        /* Switch: '<S273>/Switch' incorporates:
         *  Constant: '<S230>/Calib'
         *  Constant: '<S273>/Constant Value1'
         *  MinMax: '<S273>/Minimum'
         *  Sum: '<S273>/Summation'
         */
        rtb_Switch_p = fmaxf(HCCR_ac_DW.UnitDelay_DSTATE_n - HeHCCR_t_MedTED_dT,
                             0.0F);
    }

    /* End of Switch: '<S273>/Switch' */
    /* End of Outputs for SubSystem: '<S273>/Edge Falling with Resetable Delay' */

    /* Switch: '<S283>/Switch3' */
    if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
    {
        /* Switch: '<S283>/Switch1' incorporates:
         *  Constant: '<S273>/Constant1'
         *  UnitDelay: '<S283>/Unit Delay'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_n = 0.0F;
    }
    else
    {
        /* Switch: '<S283>/Switch1' incorporates:
         *  UnitDelay: '<S283>/Unit Delay'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_n = rtb_Switch_p;
    }

    /* End of Switch: '<S283>/Switch3' */
    /* End of Outputs for SubSystem: '<S260>/SyncTurnOffDelay1' */

    /* If: '<S260>/If' incorporates:
     *  Constant: '<S273>/Constant Value2'
     *  Logic: '<S260>/AND4'
     *  Logic: '<S273>/AND'
     *  RelationalOperator: '<S260>/Greater  Than2'
     *  RelationalOperator: '<S273>/Greater  Than'
     */
    if (rtb_AND3 || rtb_AND_b0)
    {
        /* Outputs for IfAction SubSystem: '<S260>/Cl_Locked_Stat' incorporates:
         *  ActionPort: '<S267>/Action Port'
         */
        HCCR_ac_Cl_Locked_Stat((&(VeHCCR_e_C2_St)));

        /* End of Outputs for SubSystem: '<S260>/Cl_Locked_Stat' */
    }
    else if (rtb_Logical_j)
    {
        /* Outputs for IfAction SubSystem: '<S260>/Cl_Synced_Stat' incorporates:
         *  ActionPort: '<S270>/Action Port'
         */
        HCCR_ac_Cl_Synced_Stat((&(VeHCCR_e_C2_St)));

        /* End of Outputs for SubSystem: '<S260>/Cl_Synced_Stat' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S260>/SyncTurnOffDelay1' */
        if (rtb_AND2 || (rtb_Switch_p > 0.0F))
        {
            /* Outputs for IfAction SubSystem: '<S260>/Cl_NearSynced_Stat' incorporates:
             *  ActionPort: '<S268>/Action Port'
             */
            HCCR_ac_Cl_NearSynced_Stat((&(VeHCCR_e_C2_St)));

            /* End of Outputs for SubSystem: '<S260>/Cl_NearSynced_Stat' */
        }
        else if (rtb_Abs2 > VeHCCR_M_C2MinActTorq_Sel)
        {
            /* Outputs for IfAction SubSystem: '<S260>/Cl_Actuated_Stat' incorporates:
             *  ActionPort: '<S266>/Action Port'
             */
            HCCR_ac_Cl_Actuated_Stat((&(VeHCCR_e_C2_St)));

            /* End of Outputs for SubSystem: '<S260>/Cl_Actuated_Stat' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S260>/Cl_Released_Stat' incorporates:
             *  ActionPort: '<S269>/Action Port'
             */
            HCCR_ac_Cl_Released_Stat((&(VeHCCR_e_C2_St)));

            /* End of Outputs for SubSystem: '<S260>/Cl_Released_Stat' */
        }

        /* End of Outputs for SubSystem: '<S260>/SyncTurnOffDelay1' */
    }

    /* End of If: '<S260>/If' */
    /* End of Outputs for SubSystem: '<S259>/HCCL_DtrmnC2Stat' */

    /* Switch: '<S259>/Switch' incorporates:
     *  Constant: '<S261>/Calib'
     *  Constant: '<S262>/Calib'
     *  DataStoreWrite: '<S8>/Data Store Write3'
     *  Merge: '<S260>/Merge'
     */
    if (KeHCCR_b_Clch2_StatOvrrdEnbl)
    {
        VeHCCR_e_C2_Stat_DS = KeHCCR_e_Clch2_StatOvrrd;
    }
    else
    {
        VeHCCR_e_C2_Stat_DS = VeHCCR_e_C2_St;
    }

    /* End of Switch: '<S259>/Switch' */
    /* End of Outputs for SubSystem: '<S219>/Subsystem1' */
    /* End of Outputs for SubSystem: '<S8>/Clch2_StatMtor Subsystem' */
#endif

    /* End of Logic: '<S8>/Logical Operator1' */

    /* Outputs for Atomic SubSystem: '<S8>/Clch1_StatMtor Subsystem' */
    /* Logic: '<S8>/Logical Operator' incorporates:
     *  DataTypeConversion: '<S222>/DataTypeConversion'
     *  Switch: '<S255>/Switch3'
     */
#if Rte_SysCon_Variant_HCCR_C1

    /* Logic: '<S8>/Logical Operator' incorporates:
     *  Constant: '<S227>/Calib'
     */
    rtb_VM_Conditional_Signal_PMDR_b_RunCran =
        ((rtb_TmpSignalConversionAtVaCSLR_b_ClchSt[0]) &&
         (HeHCCR_b_EnblClchStRstC1));

    /* Outputs for Atomic SubSystem: '<S218>/Subsystem1' */
    /* Lookup_n-D: '<S237>/Vector' incorporates:
     *  DataTypeConversion: '<S233>/Data Type Conversion'
     *  Switch: '<S11>/Switch51'
     *  Switch: '<S8>/Switch3'
     */
    rtb_Switch3_c4 = look2_iflf_binlca_16a(rtb_Switch3_c4, (float32)
        VeHCCR_e_C1_StatControl, ((const float32 *)
        &(KxHCCR_t_C1MinNearSyncNLockedTime[0])), ((const float32 *)
        &(KyHCCR_t_C1MinNearSyncNLockedTime[0])), ((const float32 *)
        &(KtHCCR_t_C1MinNearSyncNLockedTime[0])), HCCR_ac_ConstP.pooled8, 5U);

    /* Outputs for Atomic SubSystem: '<S233>/HCCL_DtrmnC1Stat' */
    /* Abs: '<S234>/Abs' */
    rtb_Vector = fabsf(HCCR_ac_B.VeHCCR_n_C1_SlipSpeed);

    /* Switch: '<S247>/Switch' incorporates:
     *  Abs: '<S234>/Abs1'
     */
    rtb_Abs_h = fabsf(VeHCCR_dn_NC1dot);

    /* Logic: '<S234>/AND' incorporates:
     *  RelationalOperator: '<S234>/Greater  Than1'
     *  RelationalOperator: '<S234>/Greater  Than4'
     */
    rtb_Comparison1_ng = ((rtb_Vector > VeHCCR_n_C1MaxLockedSl_Sel) ||
                          (rtb_Abs_h > VeHCCR_dn_C1MaxSlRt_Sel));

    /* Abs: '<S234>/Abs2' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read8'
     */
    rtb_Switch_p = fabsf(VeHCCR_M_C1_TorqEst_DS);

    /* Switch: '<S258>/Switch1' incorporates:
     *  RelationalOperator: '<S234>/Greater  Than'
     */
    rtb_Logical2_k = (rtb_Switch_p > VeHCCR_M_C1MinLockedTorq_Sel);

    /* Outputs for Atomic SubSystem: '<S234>/ClLockedTimer' */
    /* Switch: '<S238>/Switch1' incorporates:
     *  Constant: '<S230>/Calib'
     *  Constant: '<S238>/Constant Value4'
     *  MinMax: '<S238>/Maximum'
     *  Sum: '<S238>/Subtraction'
     *  UnitDelay: '<S238>/Unit Delay'
     */
    if (rtb_Comparison1_ng)
    {
        HCCR_ac_DW.UnitDelay_DSTATE_i = rtb_Switch3_c4;
    }
    else
    {
        HCCR_ac_DW.UnitDelay_DSTATE_i = fmaxf(HCCR_ac_DW.UnitDelay_DSTATE_i -
            HeHCCR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S238>/Switch1' */

    /* Logic: '<S234>/NOT' incorporates:
     *  Constant: '<S238>/Constant Value2'
     *  Logic: '<S238>/Logical1'
     *  RelationalOperator: '<S238>/Greater  Than1'
     *  UnitDelay: '<S238>/Unit Delay'
     */
    rtb_Logical_j = ((!rtb_Comparison1_ng) && (HCCR_ac_DW.UnitDelay_DSTATE_i <=
                      0.0F));

    /* End of Outputs for SubSystem: '<S234>/ClLockedTimer' */

    /* Outputs for Atomic SubSystem: '<S234>/SyncTurnOffDelay' */
    /* Outputs for Atomic SubSystem: '<S246>/Edge Falling with Resetable Delay' */
    /* Switch: '<S255>/Switch1' */
    if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
    {
        /* Switch: '<S255>/Switch1' incorporates:
         *  Constant: '<S253>/Constant1'
         */
        rtb_AND_b0 = false;
    }
    else
    {
        /* Switch: '<S255>/Switch1' incorporates:
         *  UnitDelay: '<S255>/Unit Delay'
         */
        rtb_AND_b0 = HCCR_ac_DW.UnitDelay_DSTATE_ki;
    }

    /* End of Switch: '<S255>/Switch1' */
    rtb_Comparison1_ng = !rtb_VM_Conditional_Signal_PMDR_b_RunCran;

    /* Switch: '<S255>/Switch3' incorporates:
     *  UnitDelay: '<S255>/Unit Delay'
     */
    HCCR_ac_DW.UnitDelay_DSTATE_ki = (rtb_Comparison1_ng && rtb_Logical_j);

    /* Switch: '<S246>/Switch' incorporates:
     *  Logic: '<S253>/AND'
     *  Logic: '<S253>/OR1'
     *  Switch: '<S254>/Switch1'
     */
    if ((!rtb_Logical_j) && rtb_AND_b0)
    {
        /* Switch: '<S254>/Switch1' incorporates:
         *  Switch: '<S246>/Switch'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_p =
            HCCR_ac_B.VeHCCR_t_C1MinLockedHold_SelRaw;
    }
    else
    {
        if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
        {
            /* Switch: '<S254>/Switch1' incorporates:
             *  Constant: '<S246>/Constant1'
             */
            HCCR_ac_DW.UnitDelay_DSTATE_p = 0.0F;
        }

        /* Switch: '<S254>/Switch1' incorporates:
         *  Constant: '<S230>/Calib'
         *  Constant: '<S246>/Constant Value1'
         *  MinMax: '<S246>/Minimum'
         *  Sum: '<S246>/Summation'
         *  Switch: '<S246>/Switch'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_p = fmaxf(HCCR_ac_DW.UnitDelay_DSTATE_p -
            HeHCCR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S246>/Switch' */
    /* End of Outputs for SubSystem: '<S246>/Edge Falling with Resetable Delay' */

    /* Logic: '<S246>/AND' incorporates:
     *  Constant: '<S246>/Constant Value2'
     *  RelationalOperator: '<S246>/Greater  Than'
     */
    rtb_Logical_j = (rtb_Logical_j || (HCCR_ac_DW.UnitDelay_DSTATE_p > 0.0F));

    /* Switch: '<S254>/Switch3' */
    if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
    {
        /* Switch: '<S254>/Switch1' incorporates:
         *  Constant: '<S246>/Constant1'
         *  UnitDelay: '<S254>/Unit Delay'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_p = 0.0F;
    }

    /* End of Switch: '<S254>/Switch3' */
    /* End of Outputs for SubSystem: '<S234>/SyncTurnOffDelay' */

    /* Logic: '<S234>/AND1' incorporates:
     *  Constant: '<S232>/Calib'
     *  RelationalOperator: '<S234>/Greater  Than8'
     *  Switch: '<S11>/Switch40'
     */
    rtb_AND_b0 = ((rtb_Logical2_k && (VeHCCR_e_C1_Stat >=
                    KeHCCR_e_Clch1_LockStat)) && rtb_Logical_j);

    /* Logic: '<S234>/AND2' incorporates:
     *  RelationalOperator: '<S234>/Greater  Than5'
     *  RelationalOperator: '<S234>/Greater  Than6'
     */
    rtb_AND2 = ((rtb_Vector > HCCR_ac_B.VeHCCR_n_C1MaxNearSyncSl_Sel) ||
                (rtb_Abs_h > VeHCCR_dn_C1MaxNearSyncRt_Sel));

    /* Logic: '<S234>/AND3' incorporates:
     *  Constant: '<S245>/Constant'
     *  RelationalOperator: '<S234>/Greater  Than7'
     *  RelationalOperator: '<S234>/Greater  Than8'
     *  Switch: '<S11>/Switch40'
     */
    rtb_AND3 = ((((uint32)VeHCCR_e_C1_Stat) == CeHCCR_e_ClLocked) &&
                rtb_Logical2_k);

    /* Outputs for Atomic SubSystem: '<S234>/ClLockedTimer1' */
    /* Switch: '<S239>/Switch1' incorporates:
     *  Constant: '<S230>/Calib'
     *  Constant: '<S239>/Constant Value4'
     *  MinMax: '<S239>/Maximum'
     *  Sum: '<S239>/Subtraction'
     *  UnitDelay: '<S239>/Unit Delay'
     */
    if (rtb_AND2)
    {
        HCCR_ac_DW.UnitDelay_DSTATE_j = rtb_Switch3_c4;
    }
    else
    {
        HCCR_ac_DW.UnitDelay_DSTATE_j = fmaxf(HCCR_ac_DW.UnitDelay_DSTATE_j -
            HeHCCR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S239>/Switch1' */

    /* Logic: '<S234>/NOT1' incorporates:
     *  Constant: '<S239>/Constant Value2'
     *  Logic: '<S239>/Logical1'
     *  RelationalOperator: '<S239>/Greater  Than1'
     *  UnitDelay: '<S239>/Unit Delay'
     */
    rtb_AND2 = ((!rtb_AND2) && (HCCR_ac_DW.UnitDelay_DSTATE_j <= 0.0F));

    /* End of Outputs for SubSystem: '<S234>/ClLockedTimer1' */

    /* Outputs for Atomic SubSystem: '<S234>/SyncTurnOffDelay1' */
    /* Outputs for Atomic SubSystem: '<S247>/Edge Falling with Resetable Delay' */
    /* Switch: '<S258>/Switch1' */
    if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
    {
        /* Switch: '<S258>/Switch1' incorporates:
         *  Constant: '<S256>/Constant1'
         */
        rtb_Logical2_k = false;
    }
    else
    {
        /* Switch: '<S258>/Switch1' incorporates:
         *  UnitDelay: '<S258>/Unit Delay'
         */
        rtb_Logical2_k = HCCR_ac_DW.UnitDelay_DSTATE_h;
    }

    /* End of Switch: '<S258>/Switch1' */

    /* Switch: '<S258>/Switch3' incorporates:
     *  UnitDelay: '<S258>/Unit Delay'
     */
    HCCR_ac_DW.UnitDelay_DSTATE_h = (rtb_Comparison1_ng && rtb_AND2);

    /* Switch: '<S247>/Switch' incorporates:
     *  Logic: '<S256>/AND'
     *  Logic: '<S256>/OR1'
     *  Switch: '<S257>/Switch1'
     */
    if ((!rtb_AND2) && rtb_Logical2_k)
    {
        /* Switch: '<S247>/Switch' */
        rtb_Abs_h = HCCR_ac_B.VeHCCR_t_C1MinNearSyncHold_Sel;
    }
    else
    {
        if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
        {
            /* Switch: '<S257>/Switch1' incorporates:
             *  Constant: '<S247>/Constant1'
             */
            HCCR_ac_DW.UnitDelay_DSTATE_ke = 0.0F;
        }

        /* Switch: '<S247>/Switch' incorporates:
         *  Constant: '<S230>/Calib'
         *  Constant: '<S247>/Constant Value1'
         *  MinMax: '<S247>/Minimum'
         *  Sum: '<S247>/Summation'
         */
        rtb_Abs_h = fmaxf(HCCR_ac_DW.UnitDelay_DSTATE_ke - HeHCCR_t_MedTED_dT,
                          0.0F);
    }

    /* End of Switch: '<S247>/Switch' */
    /* End of Outputs for SubSystem: '<S247>/Edge Falling with Resetable Delay' */

    /* Switch: '<S257>/Switch3' */
    if (rtb_VM_Conditional_Signal_PMDR_b_RunCran)
    {
        /* Switch: '<S257>/Switch1' incorporates:
         *  Constant: '<S247>/Constant1'
         *  UnitDelay: '<S257>/Unit Delay'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_ke = 0.0F;
    }
    else
    {
        /* Switch: '<S257>/Switch1' incorporates:
         *  UnitDelay: '<S257>/Unit Delay'
         */
        HCCR_ac_DW.UnitDelay_DSTATE_ke = rtb_Abs_h;
    }

    /* End of Switch: '<S257>/Switch3' */
    /* End of Outputs for SubSystem: '<S234>/SyncTurnOffDelay1' */

    /* If: '<S234>/If' incorporates:
     *  Constant: '<S247>/Constant Value2'
     *  Logic: '<S234>/AND4'
     *  Logic: '<S247>/AND'
     *  RelationalOperator: '<S234>/Greater  Than2'
     *  RelationalOperator: '<S247>/Greater  Than'
     */
    if (rtb_AND3 || rtb_AND_b0)
    {
        /* Outputs for IfAction SubSystem: '<S234>/Cl_Locked_Stat' incorporates:
         *  ActionPort: '<S241>/Action Port'
         */
        HCCR_ac_Cl_Locked_Stat((&(VeHCCR_e_C1_St)));

        /* End of Outputs for SubSystem: '<S234>/Cl_Locked_Stat' */
    }
    else if (rtb_Logical_j)
    {
        /* Outputs for IfAction SubSystem: '<S234>/Cl_Synced_Stat' incorporates:
         *  ActionPort: '<S244>/Action Port'
         */
        HCCR_ac_Cl_Synced_Stat((&(VeHCCR_e_C1_St)));

        /* End of Outputs for SubSystem: '<S234>/Cl_Synced_Stat' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S234>/SyncTurnOffDelay1' */
        if (rtb_AND2 || (rtb_Abs_h > 0.0F))
        {
            /* Outputs for IfAction SubSystem: '<S234>/Cl_NearSynced_Stat' incorporates:
             *  ActionPort: '<S242>/Action Port'
             */
            HCCR_ac_Cl_NearSynced_Stat((&(VeHCCR_e_C1_St)));

            /* End of Outputs for SubSystem: '<S234>/Cl_NearSynced_Stat' */
        }
        else if (rtb_Switch_p > VeHCCR_M_C1MinActTorq_Sel)
        {
            /* Outputs for IfAction SubSystem: '<S234>/Cl_Actuated_Stat' incorporates:
             *  ActionPort: '<S240>/Action Port'
             */
            HCCR_ac_Cl_Actuated_Stat((&(VeHCCR_e_C1_St)));

            /* End of Outputs for SubSystem: '<S234>/Cl_Actuated_Stat' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S234>/Cl_Released_Stat' incorporates:
             *  ActionPort: '<S243>/Action Port'
             */
            HCCR_ac_Cl_Released_Stat((&(VeHCCR_e_C1_St)));

            /* End of Outputs for SubSystem: '<S234>/Cl_Released_Stat' */
        }

        /* End of Outputs for SubSystem: '<S234>/SyncTurnOffDelay1' */
    }

    /* End of If: '<S234>/If' */
    /* End of Outputs for SubSystem: '<S233>/HCCL_DtrmnC1Stat' */

    /* Switch: '<S233>/Switch' incorporates:
     *  Constant: '<S235>/Calib'
     *  Constant: '<S236>/Calib'
     *  DataStoreWrite: '<S8>/Data Store Write5'
     *  Merge: '<S234>/Merge'
     */
    if (KeHCCR_b_Clch1_StatOvrrdEnbl)
    {
        VeHCCR_e_C1_Stat_DS = KeHCCR_e_Clch1_StatOvrrd;
    }
    else
    {
        VeHCCR_e_C1_Stat_DS = VeHCCR_e_C1_St;
    }

    /* End of Switch: '<S233>/Switch' */
    /* End of Outputs for SubSystem: '<S218>/Subsystem1' */

    /* DataTypeConversion: '<S222>/DataTypeConversion' incorporates:
     *  DataStoreWrite: '<S8>/Data Store Write5'
     *  Switch: '<S233>/Switch'
     */
    HCCR_ac_B.DataTypeConversion = VeHCCR_e_C1_Stat_DS;

#endif

    /* End of Logic: '<S8>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S8>/Clch1_StatMtor Subsystem' */

    /* DataTypeConversion: '<S223>/DataTypeConversion' */
#if Rte_SysCon_Variant_HCCR_C3

    /* DataTypeConversion: '<S223>/DataTypeConversion' incorporates:
     *  DataStoreWrite: '<S8>/Data Store Write1'
     *  Switch: '<S285>/Switch2'
     */
    HCCR_ac_B.DataTypeConversion_m = VeHCCR_e_C3_Stat_DS;

#endif

    /* End of DataTypeConversion: '<S223>/DataTypeConversion' */

    /* DataTypeConversion: '<S224>/DataTypeConversion' */
#if Rte_SysCon_Variant_HCCR_C2

    /* DataTypeConversion: '<S224>/DataTypeConversion' incorporates:
     *  DataStoreWrite: '<S8>/Data Store Write3'
     *  Switch: '<S259>/Switch'
     */
    HCCR_ac_B.DataTypeConversion_n = VeHCCR_e_C2_Stat_DS;

#endif

    /* End of DataTypeConversion: '<S224>/DataTypeConversion' */
#if Rte_SysCon_Variant_HCCR_ClchEngy

    /* Outputs for Function Call SubSystem: '<S1>/HCCC_CalcClchEngy1' */

    /* SignalConversion generated from: '<S7>/CSLR_n_NC1' */
#if Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_C1_ClchEngy && Rte_SysCon_Variant_HCCR_ClchEngy

    /* VariantMerge generated from: '<S7>/CSLR_n_NC1' */
    rtb_VM_Conditional_Signal_CSLR_n_NC1_0 = HCCR_ac_B.VeHCCR_n_C1_SlipSpeed;

#elif !Rte_SysCon_Variant_HCCR_C1 || !Rte_SysCon_Variant_HCCR_C1_ClchEngy || !Rte_SysCon_Variant_HCCR_ClchEngy

    /* VariantMerge generated from: '<S7>/CSLR_n_NC1' */
    rtb_VM_Conditional_Signal_CSLR_n_NC1_0 = 0.0F;

#endif

    /* SignalConversion generated from: '<S7>/TFTR_T_TransOilTemp' */
#if (Rte_SysCon_Variant_HCCR_C1 && Rte_SysCon_Variant_HCCR_C1_C2_C3_LPresCntrl_ClchEngy && Rte_SysCon_Variant_HCCR_ClchEngy) || (Rte_SysCon_Variant_HCCR_C1_C2_C3_LPresCntrl_ClchEngy && Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_ClchEngy)

    /* VariantMerge generated from: '<S7>/TFTR_T_TransOilTemp' */
    rtb_VM_Conditional_Signal_TFTR_T_TransOi = VeHCCR_T_TransOilTemp;

#elif (!Rte_SysCon_Variant_HCCR_C1 && !Rte_SysCon_Variant_HCCR_C2) || !Rte_SysCon_Variant_HCCR_C1_C2_C3_LPresCntrl_ClchEngy || !Rte_SysCon_Variant_HCCR_ClchEngy

    /* VariantMerge generated from: '<S7>/TFTR_T_TransOilTemp' */
    rtb_VM_Conditional_Signal_TFTR_T_TransOi = 0.0F;

#endif

    /* DataStoreWrite: '<S7>/Data Store Write1' incorporates:
     *  Constant: '<S7>/Constant Value'
     *  DataStoreRead: '<S7>/Data Store Read8'
     */
#if Rte_SysCon_Variant_HCCR_C1

    /* Outputs for Atomic SubSystem: '<S7>/Subsystem' */
    /* Outputs for Atomic SubSystem: '<S178>/Subsystem' */
    /* If: '<S181>/If' incorporates:
     *  Constant: '<S184>/Constant'
     *  Constant: '<S185>/Constant'
     *  Constant: '<S186>/Constant'
     *  DataStoreRead: '<S7>/Data Store Read11'
     *  DataStoreRead: '<S7>/Data Store Read4'
     *  Logic: '<S181>/Logical1'
     *  RelationalOperator: '<S181>/Equal'
     *  RelationalOperator: '<S181>/Equal1'
     *  RelationalOperator: '<S181>/Equal2'
     */
    if (((((uint32)VeHCCR_e_C1_Stat_DS) == CeHCCR_e_ClActuated) || (((uint32)
            VeHCCR_e_C1_Stat_DS) == CeHCCR_e_ClNearSynched)) || (((uint32)
            VeHCCR_e_C1_Stat_DS) == CeHCCR_e_ClSynched))
    {
        /* Outputs for IfAction SubSystem: '<S181>/CalcHeatAccum' incorporates:
         *  ActionPort: '<S182>/Action Port'
         */
        HCCR_ac_CalcHeatAccum(rtb_VM_Conditional_Signal_CSLR_n_NC1_0,
                              VeHCCR_M_C1_TorqEst_DS, &rtb_Subtraction_p);

        /* End of Outputs for SubSystem: '<S181>/CalcHeatAccum' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S181>/NoHeatAccum' incorporates:
         *  ActionPort: '<S191>/Action Port'
         */
        HCCR_ac_NoHeatAccum(&rtb_Subtraction_p);

        /* End of Outputs for SubSystem: '<S181>/NoHeatAccum' */
    }

    /* End of If: '<S181>/If' */

    /* Sum: '<S181>/Subtraction' incorporates:
     *  Abs: '<S181>/Abs'
     */
    rtb_Subtraction_p = fabsf(rtb_Subtraction_p);

    /* If: '<S187>/If' incorporates:
     *  Constant: '<S194>/Constant'
     *  Constant: '<S195>/Constant'
     *  DataStoreRead: '<S7>/Data Store Read11'
     *  RelationalOperator: '<S181>/Equal'
     *  RelationalOperator: '<S187>/Equal'
     *  RelationalOperator: '<S187>/Equal1'
     */
    if (CeHCCR_e_ClActuated == ((uint32)VeHCCR_e_C1_Stat_DS))
    {
        /* Outputs for IfAction SubSystem: '<S187>/ClchActuated_St' incorporates:
         *  ActionPort: '<S196>/Action Port'
         */
        HCCR_ac_ClchActuated_St(&rtb_TmpSignalConversionAtVeTMMR_i_ClchId);

        /* End of Outputs for SubSystem: '<S187>/ClchActuated_St' */
    }
    else if (((uint32)VeHCCR_e_C1_Stat_DS) == CeHCCR_e_ClLocked)
    {
        /* Outputs for IfAction SubSystem: '<S187>/ClchLocked_St' incorporates:
         *  ActionPort: '<S198>/Action Port'
         */
        HCCR_ac_ClchLocked_St(&rtb_TmpSignalConversionAtVeTMMR_i_ClchId);

        /* End of Outputs for SubSystem: '<S187>/ClchLocked_St' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S187>/ClchDflt_St' incorporates:
         *  ActionPort: '<S197>/Action Port'
         */
        HCCR_ac_ClchDflt_St(&rtb_TmpSignalConversionAtVeTMMR_i_ClchId);

        /* End of Outputs for SubSystem: '<S187>/ClchDflt_St' */
    }

    /* End of If: '<S187>/If' */

    /* Outputs for Atomic SubSystem: '<S181>/CalcHeatDissip' */
    HCCR_ac_CalcHeatDissip(HCCR_ac_DW.NeHCCR_T_C1_Temp_DS,
                           rtb_VM_Conditional_Signal_TFTR_T_TransOi,
                           rtb_TmpSignalConversionAtVeTMMR_i_ClchId, 1.0F,
                           &HCCR_ac_B.CalcHeatDissip);

    /* End of Outputs for SubSystem: '<S181>/CalcHeatDissip' */

    /* Product: '<S181>/Product' incorporates:
     *  Constant: '<S188>/Calib'
     *  Constant: '<S190>/Calib'
     *  Constant: '<S7>/Constant Value'
     *  DataStoreRead: '<S7>/Data Store Read8'
     *  Selector: '<S181>/Selector2'
     *  Sum: '<S181>/Subtraction1'
     */
    rtb_Subtraction_p = ((rtb_Subtraction_p - HCCR_ac_B.CalcHeatDissip.Division)
                         * HeHCCR_t_MedTED_dT) *
        KaHCCR_h_HeatTransferIndex[rtb_TmpSignalConversionAtVeTMMR_i_ClchId - 1];

    /* Outputs for Atomic SubSystem: '<S181>/Protected_Division' */
    /* Switch: '<S192>/Switch1' incorporates:
     *  Constant: '<S189>/Calib'
     *  Constant: '<S192>/Constant Value'
     *  Constant: '<S192>/Constant Value1'
     *  Constant: '<S192>/Constant Value2'
     *  Constant: '<S192>/Constant Value3'
     *  Constant: '<S7>/Constant Value'
     *  Logic: '<S192>/AND'
     *  RelationalOperator: '<S192>/Greater Than or Equal '
     *  RelationalOperator: '<S192>/Greater Than or Equal 1'
     *  RelationalOperator: '<S192>/Not Equal'
     *  RelationalOperator: '<S192>/Not Equal1'
     *  Selector: '<S181>/Selector'
     *  Switch: '<S192>/Switch2'
     *  Switch: '<S192>/Switch3'
     */
    if ((rtb_Subtraction_p != 0.0F) && (KaHCCR_h_ClchMassSpecHeat[0] != 0.0F))
    {
        /* Switch: '<S192>/Switch1' incorporates:
         *  Product: '<S192>/Division'
         */
        rtb_Subtraction_p /= KaHCCR_h_ClchMassSpecHeat[0];
    }
    else if (rtb_Subtraction_p > 0.0F)
    {
        /* Switch: '<S192>/Switch2' incorporates:
         *  Constant: '<S192>/MAXFLOAT'
         *  Switch: '<S192>/Switch1'
         */
        rtb_Subtraction_p = 3.402823466E+38F;
    }
    else if (rtb_Subtraction_p < 0.0F)
    {
        /* Switch: '<S192>/Switch3' incorporates:
         *  Constant: '<S192>/MINFLOAT'
         *  Switch: '<S192>/Switch1'
         *  Switch: '<S192>/Switch2'
         */
        rtb_Subtraction_p = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S192>/Switch1' incorporates:
         *  Constant: '<S192>/Constant Value4'
         *  Switch: '<S192>/Switch2'
         *  Switch: '<S192>/Switch3'
         */
        rtb_Subtraction_p = 0.0F;
    }

    /* End of Switch: '<S192>/Switch1' */
    /* End of Outputs for SubSystem: '<S181>/Protected_Division' */

    /* Sum: '<S181>/Subtraction2' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read8'
     */
    rtb_Switch3_c4 = HCCR_ac_DW.NeHCCR_T_C1_Temp_DS + rtb_Subtraction_p;

    /* Product: '<S181>/Multiplication' incorporates:
     *  Constant: '<S174>/Calib'
     *  Constant: '<S181>/Constant Value'
     *  Constant: '<S189>/Calib'
     *  Constant: '<S7>/Constant Value'
     *  MinMax: '<S181>/Maximum'
     *  Selector: '<S181>/Selector'
     *  Sum: '<S181>/Subtraction'
     */
    rtb_Subtraction_p = fmaxf(0.0F, KeHCCR_T_C1_MaxTemp - rtb_Switch3_c4) *
        KaHCCR_h_ClchMassSpecHeat[0];

    /* End of Outputs for SubSystem: '<S178>/Subsystem' */
    HCCR_ac_DW.NeHCCR_T_C1_Temp_DS = rtb_Switch3_c4;

    /* End of Outputs for SubSystem: '<S7>/Subsystem' */
#endif

    /* End of DataStoreWrite: '<S7>/Data Store Write1' */

    /* SignalConversion generated from: '<S7>/CSLR_n_NC2' */
#if Rte_SysCon_Variant_HCCR_C2 && Rte_SysCon_Variant_HCCR_C2_ClchEngy && Rte_SysCon_Variant_HCCR_ClchEngy

    /* VariantMerge generated from: '<S7>/CSLR_n_NC2' */
    rtb_VM_Conditional_Signal_CSLR_n_NC2_1 = HCCR_ac_B.VeHCCR_n_C2_SlipSpeed;

#elif !Rte_SysCon_Variant_HCCR_C2 || !Rte_SysCon_Variant_HCCR_C2_ClchEngy || !Rte_SysCon_Variant_HCCR_ClchEngy

    /* VariantMerge generated from: '<S7>/CSLR_n_NC2' */
    rtb_VM_Conditional_Signal_CSLR_n_NC2_1 = 0.0F;

#endif

    /* DataStoreWrite: '<S7>/Data Store Write2' incorporates:
     *  Constant: '<S7>/Constant Value1'
     *  DataStoreRead: '<S7>/Data Store Read9'
     */
#if Rte_SysCon_Variant_HCCR_C2

    /* Outputs for Atomic SubSystem: '<S7>/Subsystem1' */
    /* Outputs for Atomic SubSystem: '<S179>/Subsystem1' */
    /* If: '<S200>/If' incorporates:
     *  Constant: '<S203>/Constant'
     *  Constant: '<S204>/Constant'
     *  Constant: '<S205>/Constant'
     *  DataStoreRead: '<S7>/Data Store Read1'
     *  DataStoreRead: '<S7>/Data Store Read5'
     *  Logic: '<S200>/Logical1'
     *  RelationalOperator: '<S200>/Equal'
     *  RelationalOperator: '<S200>/Equal1'
     *  RelationalOperator: '<S200>/Equal2'
     */
    if (((((uint32)VeHCCR_e_C2_Stat_DS) == CeHCCR_e_ClActuated) || (((uint32)
            VeHCCR_e_C2_Stat_DS) == CeHCCR_e_ClNearSynched)) || (((uint32)
            VeHCCR_e_C2_Stat_DS) == CeHCCR_e_ClSynched))
    {
        /* Outputs for IfAction SubSystem: '<S200>/CalcHeatAccum' incorporates:
         *  ActionPort: '<S201>/Action Port'
         */
        HCCR_ac_CalcHeatAccum(rtb_VM_Conditional_Signal_CSLR_n_NC2_1,
                              VeHCCR_M_C2_TorqEst_DS, &rtb_Subtraction_h);

        /* End of Outputs for SubSystem: '<S200>/CalcHeatAccum' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S200>/NoHeatAccum' incorporates:
         *  ActionPort: '<S210>/Action Port'
         */
        HCCR_ac_NoHeatAccum(&rtb_Subtraction_h);

        /* End of Outputs for SubSystem: '<S200>/NoHeatAccum' */
    }

    /* End of If: '<S200>/If' */

    /* Sum: '<S200>/Subtraction' incorporates:
     *  Abs: '<S200>/Abs'
     */
    rtb_Subtraction_h = fabsf(rtb_Subtraction_h);

    /* If: '<S206>/If' incorporates:
     *  Constant: '<S213>/Constant'
     *  Constant: '<S214>/Constant'
     *  DataStoreRead: '<S7>/Data Store Read1'
     *  RelationalOperator: '<S200>/Equal'
     *  RelationalOperator: '<S206>/Equal'
     *  RelationalOperator: '<S206>/Equal1'
     */
    if (CeHCCR_e_ClActuated == ((uint32)VeHCCR_e_C2_Stat_DS))
    {
        /* Outputs for IfAction SubSystem: '<S206>/ClchActuated_St' incorporates:
         *  ActionPort: '<S215>/Action Port'
         */
        HCCR_ac_ClchActuated_St(&rtb_TmpSignalConversionAtVeTMMR_i_ClchId);

        /* End of Outputs for SubSystem: '<S206>/ClchActuated_St' */
    }
    else if (((uint32)VeHCCR_e_C2_Stat_DS) == CeHCCR_e_ClLocked)
    {
        /* Outputs for IfAction SubSystem: '<S206>/ClchLocked_St' incorporates:
         *  ActionPort: '<S217>/Action Port'
         */
        HCCR_ac_ClchLocked_St(&rtb_TmpSignalConversionAtVeTMMR_i_ClchId);

        /* End of Outputs for SubSystem: '<S206>/ClchLocked_St' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S206>/ClchDflt_St' incorporates:
         *  ActionPort: '<S216>/Action Port'
         */
        HCCR_ac_ClchDflt_St(&rtb_TmpSignalConversionAtVeTMMR_i_ClchId);

        /* End of Outputs for SubSystem: '<S206>/ClchDflt_St' */
    }

    /* End of If: '<S206>/If' */

    /* Outputs for Atomic SubSystem: '<S200>/CalcHeatDissip' */
    HCCR_ac_CalcHeatDissip(HCCR_ac_DW.NeHCCR_T_C2_Temp_DS,
                           rtb_VM_Conditional_Signal_TFTR_T_TransOi,
                           rtb_TmpSignalConversionAtVeTMMR_i_ClchId, 2.0F,
                           &HCCR_ac_B.CalcHeatDissip_c);

    /* End of Outputs for SubSystem: '<S200>/CalcHeatDissip' */

    /* Product: '<S200>/Product' incorporates:
     *  Constant: '<S207>/Calib'
     *  Constant: '<S209>/Calib'
     *  Constant: '<S7>/Constant Value1'
     *  DataStoreRead: '<S7>/Data Store Read9'
     *  Selector: '<S200>/Selector2'
     *  Sum: '<S200>/Subtraction1'
     */
    rtb_Subtraction_h = ((rtb_Subtraction_h -
                          HCCR_ac_B.CalcHeatDissip_c.Division) *
                         HeHCCR_t_MedTED_dT) *
        KaHCCR_h_HeatTransferIndex[rtb_TmpSignalConversionAtVeTMMR_i_ClchId + 2];

    /* Outputs for Atomic SubSystem: '<S200>/Protected_Division' */
    /* Switch: '<S211>/Switch1' incorporates:
     *  Constant: '<S208>/Calib'
     *  Constant: '<S211>/Constant Value'
     *  Constant: '<S211>/Constant Value1'
     *  Constant: '<S211>/Constant Value2'
     *  Constant: '<S211>/Constant Value3'
     *  Logic: '<S211>/AND'
     *  RelationalOperator: '<S211>/Greater Than or Equal '
     *  RelationalOperator: '<S211>/Greater Than or Equal 1'
     *  RelationalOperator: '<S211>/Not Equal'
     *  RelationalOperator: '<S211>/Not Equal1'
     *  Selector: '<S200>/Selector'
     *  Switch: '<S211>/Switch2'
     *  Switch: '<S211>/Switch3'
     */
    if ((rtb_Subtraction_h != 0.0F) && (KaHCCR_h_ClchMassSpecHeat[1] != 0.0F))
    {
        /* Switch: '<S211>/Switch1' incorporates:
         *  Product: '<S211>/Division'
         */
        rtb_Subtraction_h /= KaHCCR_h_ClchMassSpecHeat[1];
    }
    else if (rtb_Subtraction_h > 0.0F)
    {
        /* Switch: '<S211>/Switch2' incorporates:
         *  Constant: '<S211>/MAXFLOAT'
         *  Switch: '<S211>/Switch1'
         */
        rtb_Subtraction_h = 3.402823466E+38F;
    }
    else if (rtb_Subtraction_h < 0.0F)
    {
        /* Switch: '<S211>/Switch3' incorporates:
         *  Constant: '<S211>/MINFLOAT'
         *  Switch: '<S211>/Switch1'
         *  Switch: '<S211>/Switch2'
         */
        rtb_Subtraction_h = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S211>/Switch1' incorporates:
         *  Constant: '<S211>/Constant Value4'
         *  Switch: '<S211>/Switch2'
         *  Switch: '<S211>/Switch3'
         */
        rtb_Subtraction_h = 0.0F;
    }

    /* End of Switch: '<S211>/Switch1' */
    /* End of Outputs for SubSystem: '<S200>/Protected_Division' */

    /* Sum: '<S200>/Subtraction2' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read9'
     */
    rtb_Switch3_c4 = HCCR_ac_DW.NeHCCR_T_C2_Temp_DS + rtb_Subtraction_h;

    /* Product: '<S200>/Multiplication' incorporates:
     *  Constant: '<S175>/Calib'
     *  Constant: '<S200>/Constant Value'
     *  Constant: '<S208>/Calib'
     *  MinMax: '<S200>/Maximum'
     *  Selector: '<S200>/Selector'
     *  Sum: '<S200>/Subtraction'
     */
    rtb_Subtraction_h = fmaxf(0.0F, KeHCCR_T_C2_MaxTemp - rtb_Switch3_c4) *
        KaHCCR_h_ClchMassSpecHeat[1];

    /* End of Outputs for SubSystem: '<S179>/Subsystem1' */
    HCCR_ac_DW.NeHCCR_T_C2_Temp_DS = rtb_Switch3_c4;

    /* End of Outputs for SubSystem: '<S7>/Subsystem1' */
#endif

    /* End of DataStoreWrite: '<S7>/Data Store Write2' */

    /* SignalConversion generated from: '<S7>/Switch' */
#if Rte_SysCon_Variant_HCCR_C1

    /* VariantMerge generated from: '<S7>/Switch1' */
    HCCR_ac_B.Switch1 = rtb_Subtraction_p;

#else

    /* VariantMerge generated from: '<S7>/Switch1' */
    HCCR_ac_B.Switch1 = 0.0F;

#endif

    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S176>/Calib'
     */
    if (KeHCCR_b_C1_DeltaEMaxOvrrdEnbl)
    {
        /* Switch: '<S7>/Switch' incorporates:
         *  Constant: '<S172>/Calib'
         */
        HCCR_ac_B.Switch_j = KeHCCR_M_C1_DeltaEMaxOvrrd;
    }
    else
    {
        /* Switch: '<S7>/Switch' */
        HCCR_ac_B.Switch_j = HCCR_ac_B.Switch1;
    }

    /* End of Switch: '<S7>/Switch' */

    /* SignalConversion generated from: '<S7>/Switch1' */
#if Rte_SysCon_Variant_HCCR_C2

    /* VariantMerge generated from: '<S7>/Switch1' */
    HCCR_ac_B.Switch1 = rtb_Subtraction_h;

#else

    /* VariantMerge generated from: '<S7>/Switch1' */
    HCCR_ac_B.Switch1 = 0.0F;

#endif

    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S177>/Calib'
     */
    if (KeHCCR_b_C2_DeltaEMaxOvrrdEnbl)
    {
        /* Switch: '<S7>/Switch1' incorporates:
         *  Constant: '<S173>/Calib'
         */
        HCCR_ac_B.Switch1 = KeHCCR_M_C2_DeltaEMaxOvrrd;
    }

    /* End of Switch: '<S7>/Switch1' */

    /* End of Outputs for SubSystem: '<S1>/HCCC_CalcClchEngy1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HCCC_FillDtction'
     */
#if Rte_SysCon_Variant_HCCR_C1

    /* Outputs for Atomic SubSystem: '<S10>/C1 FillDetection' */
    /* Outputs for Atomic SubSystem: '<S340>/Clch1 Subsystem' */
    /* Outputs for Atomic SubSystem: '<S350>/HCCC_FillDetect_C1' */
    /* Constant: '<S347>/Calib' incorporates:
     *  Constant: '<S344>/Calib'
     *  DataStoreRead: '<S10>/Data Store Read4'
     */
    HCCR_ac_HCCC_FillDetect_C1(KeHCCR_b_C1_VirtualClch, VeHCCR_e_C1_FillCmnd,
        VeHCCR_M_C1_TorqEst_DS, KeHCCR_M_C1_TorqEstFillDtctd,
        &HCCR_ac_B.HCCC_FillDetect_C1);

    /* End of Outputs for SubSystem: '<S350>/HCCC_FillDetect_C1' */
    /* End of Outputs for SubSystem: '<S340>/Clch1 Subsystem' */
    /* End of Outputs for SubSystem: '<S10>/C1 FillDetection' */
#endif

#if Rte_SysCon_Variant_HCCR_C2

    /* Outputs for Atomic SubSystem: '<S10>/C2 FillDetection' */
    /* Outputs for Atomic SubSystem: '<S341>/Clch2 Subsytem' */
    /* Outputs for Atomic SubSystem: '<S355>/HCCC_FillDetect_C2' */
    /* Constant: '<S348>/Calib' incorporates:
     *  Constant: '<S345>/Calib'
     *  DataStoreRead: '<S10>/Data Store Read10'
     */
    HCCR_ac_HCCC_FillDetect_C1(KeHCCR_b_C2_VirtualClch, VeHCCR_e_C2_FillCmnd,
        VeHCCR_M_C2_TorqEst_DS, KeHCCR_M_C2_TorqEstFillDtctd,
        &HCCR_ac_B.HCCC_FillDetect_C2);

    /* End of Outputs for SubSystem: '<S355>/HCCC_FillDetect_C2' */
    /* End of Outputs for SubSystem: '<S341>/Clch2 Subsytem' */
    /* End of Outputs for SubSystem: '<S10>/C2 FillDetection' */
#endif

#if Rte_SysCon_Variant_HCCR_C3

    /* Outputs for Atomic SubSystem: '<S10>/C3 FillDetection ' */
    /* Outputs for Atomic SubSystem: '<S342>/Clch3 Subsystem' */
    /* Outputs for Atomic SubSystem: '<S360>/HCCC_FillDetect_C3' */
    /* Constant: '<S349>/Calib' incorporates:
     *  Constant: '<S346>/Calib'
     *  DataStoreRead: '<S10>/Data Store Read11'
     */
    HCCR_ac_HCCC_FillDetect_C1(KeHCCR_b_C3_VirtualClch, VeHCCR_e_C3_FillCmnd,
        VeHCCR_M_C3_TorqEst_DS, KeHCCR_M_C3_TorqEstFillDtctd,
        &HCCR_ac_B.HCCC_FillDetect_C3);

    /* End of Outputs for SubSystem: '<S360>/HCCC_FillDetect_C3' */
    /* End of Outputs for SubSystem: '<S342>/Clch3 Subsystem' */
    /* End of Outputs for SubSystem: '<S10>/C3 FillDetection ' */
#endif

#if Rte_SysCon_Variant_HCCR_TPEst

    /* Outputs for Atomic SubSystem: '<S10>/EnableTouchPEst' */
    /* Inport: '<Root>/VeCSDR_b_Clch2_Avail' */
    (void)Rte_Read_VeCSDR_b_Clch2_Avail_Value(&rtb_Merge1);

    /* Outputs for Atomic SubSystem: '<S343>/EnableTouchPEst Subsystem' */
    /* Switch: '<S369>/Switch' incorporates:
     *  Constant: '<S407>/Calib'
     *  Constant: '<S408>/Calib'
     *  DataStoreRead: '<S10>/Data Store Read9'
     *  DataStoreRead: '<S369>/Data Store Read6'
     *  RelationalOperator: '<S369>/Comparison11'
     *  RelationalOperator: '<S369>/Comparison3'
     */
    if (KeHCCR_b_C2_UseShftCntForLrn)
    {
        rtb_Logical2_k = (((float32)HCCR_ac_DW.NeHCCR_Cnt_C2CShifts_TchPtLrn) >=
                          KeHCCR_Cnt_C2CShfts_TchPtLrn);
    }
    else
    {
        rtb_Logical2_k = !HCCR_ac_DW.NeHCCR_b_C2TchPt_DtctFlg_DS;
    }

    /* End of Switch: '<S369>/Switch' */

    /* Logic: '<S366>/Logical3' incorporates:
     *  Constant: '<S381>/Calib'
     */
    VeHCCR_b_C2TchPtDtctFlg = ((KeHCCR_b_C2_TchPtDtctd_Ovrd) || rtb_Logical2_k);

    /* RelationalOperator: '<S366>/Comparison2' incorporates:
     *  Constant: '<S373>/Constant'
     */
    VeHCCR_b_C2RngSt = (((uint32)VeHCCR_e_Clch_RngSt) == CeHSER_e_M1);

    /* RelationalOperator: '<S366>/Comparison1' incorporates:
     *  Constant: '<S372>/Constant'
     *  Switch: '<S11>/Switch13'
     */
    rtb_VM_Conditional_Signal_PMDR_b_RunCran = (((uint32)VeHCCR_e_EngStartStopSt)
        == CeESSR_e_EngRunning);

    /* RelationalOperator: '<S366>/Comparison10' incorporates:
     *  Constant: '<S371>/Constant'
     *  Switch: '<S11>/Switch8'
     */
    rtb_Comparison1_ng = (((uint32)VeHCCR_e_BrkPedalDscrtInpt) ==
                          CeBRKR_e_BrkApplied);

    /* RelationalOperator: '<S366>/Comparison5' incorporates:
     *  Constant: '<S389>/Calib'
     */
    rtb_Logical_j = (HCCR_ac_B.VeHCCR_n_OutputSpd <=
                     KeHCCR_n_OutSpdThreshForTchPtEst);

    /* RelationalOperator: '<S366>/Comparison9' incorporates:
     *  Constant: '<S376>/Calib'
     */
    rtb_AND_b0 = (VeHCCR_Pct_AccelPedalActPosition <=
                  KeHCCR_Pct_PdlThrshForFillDtct);

    /* Logic: '<S366>/Logical1' incorporates:
     *  Constant: '<S382>/Calib'
     *  Constant: '<S392>/Calib'
     *  DataStoreRead: '<S366>/Data Store Read7'
     *  DataStoreRead: '<S366>/Data Store Read8'
     *  Logic: '<S366>/Logical8'
     *  RelationalOperator: '<S366>/Comparison3'
     *  RelationalOperator: '<S366>/Comparison4'
     */
    VeHCCR_b_C2_TchPtDtct_CndTru = ((((((((((VeHCCR_b_C2TchPtDtctFlg) &&
        rtb_Merge1) && (VeHCCR_b_C2RngSt)) &&
        rtb_VM_Conditional_Signal_PMDR_b_RunCran) && rtb_Comparison1_ng) &&
        rtb_Logical_j) && rtb_AND_b0) && (VeHCCR_p_C2_ClPresEst_DS >=
        KeHCCR_p_C2_MinPressAllwd)) && (KeHCCR_b_C2_TchPtEst_Enbl)) &&
        (!HCCR_ac_DW.NeHCCR_b_C2TchPt_DtctFlg_DS));

    /* Logic: '<S366>/Logical5' incorporates:
     *  Constant: '<S380>/Calib'
     */
    VeHCCR_b_C2_TchPtDtctn = ((KeHCCR_b_C2_ForceTchPtDtct) ||
        (VeHCCR_b_C2_TchPtDtct_CndTru));

    /* End of Outputs for SubSystem: '<S343>/EnableTouchPEst Subsystem' */

    /* Inport: '<Root>/VeCSDR_b_Clch1_Avail' */
    (void)Rte_Read_VeCSDR_b_Clch1_Avail_Value(&rtb_Logical1);

    /* Outputs for Atomic SubSystem: '<S343>/EnableTouchPEst Subsystem' */
    /* Switch: '<S367>/Switch' incorporates:
     *  Constant: '<S396>/Calib'
     *  Constant: '<S397>/Calib'
     *  DataStoreRead: '<S10>/Data Store Read8'
     *  DataStoreRead: '<S367>/Data Store Read6'
     *  RelationalOperator: '<S367>/Comparison11'
     *  RelationalOperator: '<S367>/Comparison3'
     */
    if (KeHCCR_b_C1_UseShftCntForLrn)
    {
        rtb_Logical2_k = (((float32)HCCR_ac_DW.NeHCCR_Cnt_C2CShifts_TchPtLrn) >=
                          KeHCCR_Cnt_C2CShfts_TchPtLrn);
    }
    else
    {
        rtb_Logical2_k = !HCCR_ac_DW.NeHCCR_b_C1TchPt_DtctFlg_DS;
    }

    /* End of Switch: '<S367>/Switch' */

    /* Logic: '<S366>/Logical4' incorporates:
     *  Constant: '<S378>/Calib'
     */
    VeHCCR_b_C1TchPtDtctFlg = ((KeHCCR_b_C1_TchPtDtctd_Ovrd) || rtb_Logical2_k);

    /* RelationalOperator: '<S366>/Comparison6' incorporates:
     *  Constant: '<S374>/Constant'
     */
    VeHCCR_b_C1RngSt = (((uint32)VeHCCR_e_Clch_RngSt) == CeHSER_e_M2);

    /* Logic: '<S366>/Logical2' incorporates:
     *  Constant: '<S379>/Calib'
     *  Constant: '<S390>/Calib'
     *  DataStoreRead: '<S366>/Data Store Read39'
     *  DataStoreRead: '<S366>/Data Store Read6'
     *  Logic: '<S366>/Logical7'
     *  RelationalOperator: '<S366>/Comparison7'
     *  RelationalOperator: '<S366>/Comparison8'
     */
    VeHCCR_b_C1_TchPtDtct_CndTru = ((((((((((VeHCCR_b_C1TchPtDtctFlg) &&
        rtb_Logical1) && (VeHCCR_b_C1RngSt)) &&
        rtb_VM_Conditional_Signal_PMDR_b_RunCran) && rtb_Comparison1_ng) &&
        rtb_Logical_j) && rtb_AND_b0) && (VeHCCR_p_C1_ClPresEst_DS <=
        KeHCCR_p_C1_MaxPressAllwd)) && (KeHCCR_b_C1_TchPtEst_Enbl)) &&
        (!HCCR_ac_DW.NeHCCR_b_C1TchPt_DtctFlg_DS));

    /* Logic: '<S366>/Logical6' incorporates:
     *  Constant: '<S377>/Calib'
     */
    VeHCCR_b_C1_TchPtDtctn = ((KeHCCR_b_C1_ForceTchPtDtct) ||
        (VeHCCR_b_C1_TchPtDtct_CndTru));

    /* If: '<S366>/If' */
    if (VeHCCR_b_C2_TchPtDtctn)
    {
        /* Outputs for IfAction SubSystem: '<S366>/C2_TouchP_Learning' incorporates:
         *  ActionPort: '<S370>/Action Port'
         */
        /* Logic: '<S370>/Logical1' incorporates:
         *  Abs: '<S370>/Abs'
         *  Abs: '<S370>/Abs1'
         *  Constant: '<S384>/Calib'
         *  Constant: '<S388>/Calib'
         *  RelationalOperator: '<S370>/Comparison3'
         *  RelationalOperator: '<S370>/Equal5'
         *  Sum: '<S370>/Sum1'
         */
        rtb_Logical1 = ((fabsf(HCCR_ac_B.VeHCCR_n_InputSpeedDsrdM1 -
                               HCCR_ac_B.VeHCCR_n_InputSpd) <
                         KeHCCR_n_C2_NiThrsh_KissPt) && (fabsf
                         (VeHCCR_dn_InputAcceltn) <
                         KeHCCR_dn_C2_NiDotThrsh_KissPt));

        /* If: '<S370>/If' incorporates:
         *  Constant: '<S10>/HCCR_l_C2_PosnEst'
         *  Constant: '<S386>/Calib'
         *  Constant: '<S393>/Calib'
         *  DataStoreRead: '<S10>/Data Store Read6'
         *  DataStoreRead: '<S366>/Data Store Read3'
         *  DataStoreRead: '<S366>/Data Store Read4'
         */
        if (rtb_Logical1)
        {
            /* Outputs for IfAction SubSystem: '<S370>/C2_TouchP_Updt_Dft' incorporates:
             *  ActionPort: '<S411>/Action Port'
             */
            /* DataStoreWrite: '<S411>/Data Store Write3' incorporates:
             *  Constant: '<S417>/Constant'
             */
            VeHCCR_e_ClchFillDtctStat_DS = CeHCCR_e_C2_FillDtctInProg;

            /* Merge: '<S370>/Merge1' incorporates:
             *  Constant: '<S411>/FALSE Constant'
             *  SignalConversion generated from: '<S411>/Reset'
             */
            rtb_Merge1 = false;

            /* End of Outputs for SubSystem: '<S370>/C2_TouchP_Updt_Dft' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S370>/C2_TouchP_Updt' incorporates:
             *  ActionPort: '<S410>/Action Port'
             */
            /* DataStoreWrite: '<S410>/Data Store Write3' incorporates:
             *  Constant: '<S416>/Constant'
             */
            VeHCCR_e_ClchFillDtctStat_DS = CeHCCR_e_C2_FillDtctCmpt;

            /* Merge: '<S370>/Merge1' incorporates:
             *  Constant: '<S410>/TRUE Constant'
             *  SignalConversion generated from: '<S410>/Reset'
             */
            rtb_Merge1 = true;

            /* Outputs for Atomic SubSystem: '<S410>/C2_PresPosnPt' */
            HCCR_ac_C2_PresPosnPt(VeHCCR_p_C2_ClPresEst_DS, 0.0F,
                                  HCCR_ac_DW.NeHCCR_p_C2_TchPt_PresEst_DS,
                                  HCCR_ac_DW.NeHCCR_l_C2_TchPt_PosnEst_DS,
                                  KeHCCR_p_C2_PresDelta_Thresh,
                                  KeHCCR_l_C2_PosnDelta_Thresh,
                                  &HCCR_ac_B.C2_PresPosnPt);

            /* End of Outputs for SubSystem: '<S410>/C2_PresPosnPt' */

            /* SignalConversion generated from: '<S410>/C2TchPt_DtctFlg' incorporates:
             *  Constant: '<S10>/HCCR_l_C2_PosnEst'
             *  Constant: '<S386>/Calib'
             *  Constant: '<S393>/Calib'
             *  DataStoreRead: '<S10>/Data Store Read6'
             *  DataStoreRead: '<S366>/Data Store Read3'
             *  DataStoreRead: '<S366>/Data Store Read4'
             */
            HCCR_ac_B.OutportBufferForC2TchPt_DtctFlg_b = true;

            /* End of Outputs for SubSystem: '<S370>/C2_TouchP_Updt' */
        }

        /* End of If: '<S370>/If' */

        /* Outputs for Atomic SubSystem: '<S370>/C2_FillPress_Time' */
        /* Outputs for Atomic SubSystem: '<S409>/EdgeRising' */
        /* Logic: '<S414>/OR1' incorporates:
         *  UnitDelay: '<S414>/Unit Delay'
         */
        rtb_VM_Conditional_Signal_PMDR_b_RunCran =
            !HCCR_ac_DW.UnitDelay_DSTATE_nb;

        /* Update for UnitDelay: '<S414>/Unit Delay' */
        HCCR_ac_DW.UnitDelay_DSTATE_nb = rtb_Merge1;

        /* Switch: '<S409>/Switch1' incorporates:
         *  Constant: '<S409>/Constant Value2'
         *  Logic: '<S414>/AND'
         *  Switch: '<S409>/Switch2'
         *  UnitDelay: '<S409>/Unit Delay'
         */
        if (rtb_Merge1 && rtb_VM_Conditional_Signal_PMDR_b_RunCran)
        {
            HCCR_ac_DW.UnitDelay_DSTATE_f = 0.0F;
        }
        else
        {
            if (rtb_Logical1)
            {
                /* UnitDelay: '<S409>/Unit Delay' incorporates:
                 *  Constant: '<S412>/Calib'
                 *  Sum: '<S409>/Subtraction'
                 *  Switch: '<S409>/Switch2'
                 */
                HCCR_ac_DW.UnitDelay_DSTATE_f += HeHCCR_t_MedTED_dT;
            }
        }

        /* End of Switch: '<S409>/Switch1' */
        /* End of Outputs for SubSystem: '<S409>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S370>/C2_FillPress_Time' */

        /* Merge: '<S366>/Merge4' incorporates:
         *  SignalConversion generated from: '<S370>/C2TchPt_DtctFlg'
         */
        HCCR_ac_B.Merge4 = HCCR_ac_B.OutportBufferForC2TchPt_DtctFlg_b;

        /* Switch: '<S370>/Switch' incorporates:
         *  Constant: '<S395>/Calib'
         *  DataStoreRead: '<S366>/Data Store Read5'
         *  RelationalOperator: '<S370>/Comparison'
         *  Sum: '<S370>/Sum2'
         *  UnitDelay: '<S409>/Unit Delay'
         */
        if ((HCCR_ac_DW.UnitDelay_DSTATE_f -
                HCCR_ac_DW.NeHCCR_t_C2_FillTimeEst_DS) >
                KeHCCR_t_C2_FillTmDeltaThresh)
        {
            /* Switch: '<S370>/Switch' */
            HCCR_ac_B.Switch_k = HCCR_ac_DW.UnitDelay_DSTATE_f;
        }
        else
        {
            /* Switch: '<S370>/Switch' */
            HCCR_ac_B.Switch_k = HCCR_ac_DW.NeHCCR_t_C2_FillTimeEst_DS;
        }

        /* End of Switch: '<S370>/Switch' */
        /* End of Outputs for SubSystem: '<S366>/C2_TouchP_Learning' */
    }
    else if (VeHCCR_b_C1_TchPtDtctn)
    {
        /* Outputs for IfAction SubSystem: '<S366>/C1_TouchP_Learning' incorporates:
         *  ActionPort: '<S368>/Action Port'
         */
        /* Logic: '<S368>/Logical1' incorporates:
         *  Abs: '<S368>/Abs'
         *  Abs: '<S368>/Abs1'
         *  Constant: '<S383>/Calib'
         *  Constant: '<S387>/Calib'
         *  RelationalOperator: '<S368>/Comparison3'
         *  RelationalOperator: '<S368>/Equal5'
         *  Sum: '<S368>/Sum1'
         */
        rtb_Logical1 = ((fabsf(HCCR_ac_B.VeHCCR_n_InputSpeedDsrdM2 -
                               HCCR_ac_B.VeHCCR_n_InputSpd) <
                         KeHCCR_n_C1_NiThrsh_KissPt) && (fabsf
                         (VeHCCR_dn_InputAcceltn) <
                         KeHCCR_dn_C1_NiDotThrsh_KissPt));

        /* If: '<S368>/If' incorporates:
         *  Constant: '<S10>/HCCR_l_C1_PosnEst'
         *  Constant: '<S385>/Calib'
         *  Constant: '<S391>/Calib'
         *  DataStoreRead: '<S10>/Data Store Read5'
         *  DataStoreRead: '<S366>/Data Store Read'
         *  DataStoreRead: '<S366>/Data Store Read1'
         */
        if (rtb_Logical1)
        {
            /* Outputs for IfAction SubSystem: '<S368>/C1_TouchP_Updt_Dft' incorporates:
             *  ActionPort: '<S400>/Action Port'
             */
            /* DataStoreWrite: '<S400>/Data Store Write3' incorporates:
             *  Constant: '<S406>/Constant'
             */
            VeHCCR_e_ClchFillDtctStat_DS = CeHCCR_e_C1_FillDtctInProg;

            /* Merge: '<S368>/Merge1' incorporates:
             *  Constant: '<S400>/FALSE Constant'
             *  SignalConversion generated from: '<S400>/Reset'
             */
            rtb_Merge1 = false;

            /* End of Outputs for SubSystem: '<S368>/C1_TouchP_Updt_Dft' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S368>/C1_TouchP_Updt' incorporates:
             *  ActionPort: '<S399>/Action Port'
             */
            /* DataStoreWrite: '<S399>/Data Store Write3' incorporates:
             *  Constant: '<S405>/Constant'
             */
            VeHCCR_e_ClchFillDtctStat_DS = CeHCCR_e_C2_FillDtctCmpt;

            /* Merge: '<S368>/Merge1' incorporates:
             *  Constant: '<S399>/TRUE Constant'
             *  SignalConversion generated from: '<S399>/Reset'
             */
            rtb_Merge1 = true;

            /* Outputs for Atomic SubSystem: '<S399>/C1_PresPosnPt' */
            HCCR_ac_C2_PresPosnPt(VeHCCR_p_C1_ClPresEst_DS, 0.0F,
                                  HCCR_ac_DW.NeHCCR_p_C1_TchPt_PresEst_DS,
                                  HCCR_ac_DW.NeHCCR_l_C1_TchPt_PosnEst_DS,
                                  KeHCCR_p_C1_PresDelta_Thresh,
                                  KeHCCR_l_C1_PosnDelta_Thresh,
                                  &HCCR_ac_B.C1_PresPosnPt);

            /* End of Outputs for SubSystem: '<S399>/C1_PresPosnPt' */

            /* SignalConversion generated from: '<S399>/C2TchPt_DtctFlg' incorporates:
             *  Constant: '<S10>/HCCR_l_C1_PosnEst'
             *  Constant: '<S385>/Calib'
             *  Constant: '<S391>/Calib'
             *  DataStoreRead: '<S10>/Data Store Read5'
             *  DataStoreRead: '<S366>/Data Store Read'
             *  DataStoreRead: '<S366>/Data Store Read1'
             */
            HCCR_ac_B.OutportBufferForC2TchPt_DtctFlg =
                HCCR_ac_ConstB.C1_PresPosnPt.TRUEConstant;

            /* End of Outputs for SubSystem: '<S368>/C1_TouchP_Updt' */
        }

        /* End of If: '<S368>/If' */

        /* Outputs for Atomic SubSystem: '<S368>/C1_FillPress_Time' */
        /* Outputs for Atomic SubSystem: '<S398>/EdgeRising' */
        /* Logic: '<S403>/OR1' incorporates:
         *  UnitDelay: '<S403>/Unit Delay'
         */
        rtb_VM_Conditional_Signal_PMDR_b_RunCran =
            !HCCR_ac_DW.UnitDelay_DSTATE_f4;

        /* Update for UnitDelay: '<S403>/Unit Delay' */
        HCCR_ac_DW.UnitDelay_DSTATE_f4 = rtb_Merge1;

        /* Switch: '<S398>/Switch1' incorporates:
         *  Constant: '<S398>/Constant Value2'
         *  Logic: '<S403>/AND'
         *  Switch: '<S398>/Switch2'
         *  UnitDelay: '<S398>/Unit Delay'
         */
        if (rtb_Merge1 && rtb_VM_Conditional_Signal_PMDR_b_RunCran)
        {
            HCCR_ac_DW.UnitDelay_DSTATE_l = 0.0F;
        }
        else
        {
            if (rtb_Logical1)
            {
                /* UnitDelay: '<S398>/Unit Delay' incorporates:
                 *  Constant: '<S401>/Calib'
                 *  Sum: '<S398>/Subtraction'
                 *  Switch: '<S398>/Switch2'
                 */
                HCCR_ac_DW.UnitDelay_DSTATE_l += HeHCCR_t_MedTED_dT;
            }
        }

        /* End of Switch: '<S398>/Switch1' */
        /* End of Outputs for SubSystem: '<S398>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S368>/C1_FillPress_Time' */

        /* Merge: '<S366>/Merge5' incorporates:
         *  SignalConversion generated from: '<S368>/C2TchPt_DtctFlg'
         */
        HCCR_ac_B.Merge5 = HCCR_ac_B.OutportBufferForC2TchPt_DtctFlg;

        /* Switch: '<S368>/Switch' incorporates:
         *  Constant: '<S394>/Calib'
         *  DataStoreRead: '<S366>/Data Store Read2'
         *  RelationalOperator: '<S368>/Comparison'
         *  Sum: '<S368>/Sum2'
         *  UnitDelay: '<S398>/Unit Delay'
         */
        if ((HCCR_ac_DW.UnitDelay_DSTATE_l -
                HCCR_ac_DW.NeHCCR_t_C1_FillTimeEst_DS) >
                KeHCCR_t_C1_FillTmDeltaThresh)
        {
            /* Switch: '<S368>/Switch' */
            HCCR_ac_B.Switch = HCCR_ac_DW.UnitDelay_DSTATE_l;
        }
        else
        {
            /* Switch: '<S368>/Switch' */
            HCCR_ac_B.Switch = HCCR_ac_DW.NeHCCR_t_C1_FillTimeEst_DS;
        }

        /* End of Switch: '<S368>/Switch' */
        /* End of Outputs for SubSystem: '<S366>/C1_TouchP_Learning' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S366>/FillDtctDsbl' incorporates:
         *  ActionPort: '<S375>/Action Port'
         */
        /* DataStoreWrite: '<S375>/Data Store Write3' incorporates:
         *  Constant: '<S418>/Constant'
         */
        VeHCCR_e_ClchFillDtctStat_DS = CeHCCR_e_FillDtctNotActv;

        /* Merge: '<S366>/Merge4' incorporates:
         *  DataStoreRead: '<S375>/Data Store Read9'
         */
        HCCR_ac_B.Merge4 = HCCR_ac_DW.NeHCCR_b_C2TchPt_DtctFlg_DS;

        /* Merge: '<S366>/Merge5' incorporates:
         *  DataStoreRead: '<S375>/Data Store Read8'
         */
        HCCR_ac_B.Merge5 = HCCR_ac_DW.NeHCCR_b_C1TchPt_DtctFlg_DS;

        /* End of Outputs for SubSystem: '<S366>/FillDtctDsbl' */
    }

    /* End of If: '<S366>/If' */

    /* DataStoreWrite: '<S366>/Data Store Write' */
    HCCR_ac_DW.NeHCCR_p_C1_TchPt_PresEst_DS = HCCR_ac_B.C1_PresPosnPt.Switch;

    /* DataStoreWrite: '<S366>/Data Store Write1' */
    HCCR_ac_DW.NeHCCR_l_C1_TchPt_PosnEst_DS = HCCR_ac_B.C1_PresPosnPt.Switch1;

    /* DataStoreWrite: '<S366>/Data Store Write2' */
    HCCR_ac_DW.NeHCCR_t_C1_FillTimeEst_DS = HCCR_ac_B.Switch;

    /* DataStoreWrite: '<S366>/Data Store Write3' */
    HCCR_ac_DW.NeHCCR_p_C2_TchPt_PresEst_DS = HCCR_ac_B.C2_PresPosnPt.Switch;

    /* DataStoreWrite: '<S366>/Data Store Write4' */
    HCCR_ac_DW.NeHCCR_l_C2_TchPt_PosnEst_DS = HCCR_ac_B.C2_PresPosnPt.Switch1;

    /* DataStoreWrite: '<S366>/Data Store Write5' */
    HCCR_ac_DW.NeHCCR_t_C2_FillTimeEst_DS = HCCR_ac_B.Switch_k;

    /* DataStoreWrite: '<S366>/Data Store Write6' */
    HCCR_ac_DW.NeHCCR_b_C2TchPt_DtctFlg_DS = HCCR_ac_B.Merge4;

    /* DataStoreWrite: '<S366>/Data Store Write7' */
    HCCR_ac_DW.NeHCCR_b_C1TchPt_DtctFlg_DS = HCCR_ac_B.Merge5;

    /* End of Outputs for SubSystem: '<S343>/EnableTouchPEst Subsystem' */
    /* End of Outputs for SubSystem: '<S10>/EnableTouchPEst' */
#endif

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HCCO_OutputsUpdate'
     */
    /* SignalConversion generated from: '<S12>/Clch4_FillCmptDetected' */
    HCCR_ac_B.OutportBufferForClch4_FillCmptDetected_c = false;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* SignalConversion generated from: '<S1>/Clch1_Stat' */
#if Rte_SysCon_Variant_HCCR_C1

    /* Outport: '<Root>/VeHCCR_e_Clch1_Stat' incorporates:
     *  DataTypeConversion: '<S222>/DataTypeConversion'
     */
    (void)Rte_Write_VeHCCR_e_Clch1_Stat_Value(HCCR_ac_B.DataTypeConversion);

#endif

    /* End of SignalConversion generated from: '<S1>/Clch1_Stat' */

    /* SignalConversion generated from: '<S1>/Clch2_Stat' */
#if Rte_SysCon_Variant_HCCR_C2

    /* Outport: '<Root>/VeHCCR_e_Clch2_Stat' incorporates:
     *  DataTypeConversion: '<S224>/DataTypeConversion'
     */
    (void)Rte_Write_VeHCCR_e_Clch2_Stat_Value(HCCR_ac_B.DataTypeConversion_n);

#endif

    /* End of SignalConversion generated from: '<S1>/Clch2_Stat' */

    /* SignalConversion generated from: '<S1>/Clch3_Stat' */
#if Rte_SysCon_Variant_HCCR_C3

    /* Outport: '<Root>/VeHCCR_e_Clch3_Stat' incorporates:
     *  DataTypeConversion: '<S223>/DataTypeConversion'
     */
    (void)Rte_Write_VeHCCR_e_Clch3_Stat_Value(HCCR_ac_B.DataTypeConversion_m);

#endif

    /* End of SignalConversion generated from: '<S1>/Clch3_Stat' */

    /* Outport: '<Root>/VeHCCR_b_Clch4_FillCmptDetected' incorporates:
     *  SignalConversion generated from: '<S1>/Clch4_FillCmptDetected'
     */
    (void)Rte_Write_VeHCCR_b_Clch4_FillCmptDetected_Value
        (HCCR_ac_B.OutportBufferForClch4_FillCmptDetected_c);

    /* SignalConversion generated from: '<S1>/HCCC_M_C1_TorqEst' */
#if Rte_SysCon_Variant_HCCR_C1

    /* Outport: '<Root>/VeHCCR_M_Clch1_TorqEst' */
    (void)Rte_Write_VeHCCR_M_Clch1_TorqEst_Value(HCCR_ac_B.Gain_h);

#endif

    /* End of SignalConversion generated from: '<S1>/HCCC_M_C1_TorqEst' */

    /* SignalConversion generated from: '<S1>/HCCC_M_C2_TorqEst' */
#if Rte_SysCon_Variant_HCCR_C2

    /* Outport: '<Root>/VeHCCR_M_Clch2_TorqEst' */
    (void)Rte_Write_VeHCCR_M_Clch2_TorqEst_Value(HCCR_ac_B.Gain_m);

#endif

    /* End of SignalConversion generated from: '<S1>/HCCC_M_C2_TorqEst' */

    /* SignalConversion generated from: '<S1>/HCCC_M_C3_TorqEst' */
#if Rte_SysCon_Variant_HCCR_C3

    /* Outport: '<Root>/VeHCCR_M_Clch3_TorqEst' */
    (void)Rte_Write_VeHCCR_M_Clch3_TorqEst_Value(HCCR_ac_B.Gain_n);

#endif

    /* End of SignalConversion generated from: '<S1>/HCCC_M_C3_TorqEst' */

    /* SignalConversion generated from: '<S1>/HCCR_E_MaxEnergyClch1' incorporates:
     *  SignalConversion generated from: '<S1>/HCCR_E_MaxEnergyClch2'
     */
#if Rte_SysCon_Variant_HCCR_ClchEngy

    /* Outport: '<Root>/VeHCCR_E_MaxEnergyClch1' */
    (void)Rte_Write_VeHCCR_E_MaxEnergyClch1_Value(HCCR_ac_B.Switch_j);

    /* Outport: '<Root>/VeHCCR_E_MaxEnergyClch2' */
    (void)Rte_Write_VeHCCR_E_MaxEnergyClch2_Value(HCCR_ac_B.Switch1);

#endif

    /* End of SignalConversion generated from: '<S1>/HCCR_E_MaxEnergyClch1' */

    /* SignalConversion generated from: '<S1>/HCCR_V_UpperSump_Vol' */
#if Rte_SysCon_Variant_HCCR_LPresCntrl

    /* Outport: '<Root>/VeHCCR_V_UpperSump_Vol' */
    (void)Rte_Write_VeHCCR_V_UpperSump_Vol_Value(HCCR_ac_B.Gain_e);

#endif

    /* End of SignalConversion generated from: '<S1>/HCCR_V_UpperSump_Vol' */

    /* SignalConversion generated from: '<S1>/HCCR_b_Clch1_FillCmptDetected' */
#if Rte_SysCon_Variant_HCCR_C1

    /* Outport: '<Root>/VeHCCR_b_Clch1_FillCmptDetected' */
    (void)Rte_Write_VeHCCR_b_Clch1_FillCmptDetected_Value
        (HCCR_ac_B.HCCC_FillDetect_C1.Merge1);

#endif

    /* End of SignalConversion generated from: '<S1>/HCCR_b_Clch1_FillCmptDetected' */

    /* SignalConversion generated from: '<S1>/HCCR_b_Clch2_FillCmptDetected' */
#if Rte_SysCon_Variant_HCCR_C2

    /* Outport: '<Root>/VeHCCR_b_Clch2_FillCmptDetected' */
    (void)Rte_Write_VeHCCR_b_Clch2_FillCmptDetected_Value
        (HCCR_ac_B.HCCC_FillDetect_C2.Merge1);

#endif

    /* End of SignalConversion generated from: '<S1>/HCCR_b_Clch2_FillCmptDetected' */

    /* SignalConversion generated from: '<S1>/HCCR_b_Clch3_FillCmptDetected' */
#if Rte_SysCon_Variant_HCCR_C3

    /* Outport: '<Root>/VeHCCR_b_Clch3_FillCmptDetected' */
    (void)Rte_Write_VeHCCR_b_Clch3_FillCmptDetected_Value
        (HCCR_ac_B.HCCC_FillDetect_C3.Merge1);

#endif

    /* End of SignalConversion generated from: '<S1>/HCCR_b_Clch3_FillCmptDetected' */

    /* SignalConversion generated from: '<S1>/HCCR_n_AuxPumpSpdDsrd' */
#if Rte_SysCon_Variant_HCCR_LPresCntrl

    /* Outport: '<Root>/VeHCCR_n_AuxPumpSpdDsrd' */
    (void)Rte_Write_VeHCCR_n_AuxPumpSpdDsrd_Value(HCCR_ac_B.Merge_n);

#endif

    /* End of SignalConversion generated from: '<S1>/HCCR_n_AuxPumpSpdDsrd' */

    /* SignalConversion generated from: '<S1>/VeHCCR_dV_FlowLimiterPump1' incorporates:
     *  SignalConversion generated from: '<S1>/VeHCCR_dV_FlowLimiterPump2'
     *  SignalConversion generated from: '<S1>/VeHCCR_dV_LubFlowPump1'
     *  SignalConversion generated from: '<S1>/VeHCCR_dV_LubFlowPump2'
     */
#if Rte_SysCon_Variant_HCCR_PmpCEDMGen2

    /* Outport: '<Root>/VeHCCR_dV_FlowLimiterPump1' */
    (void)Rte_Write_VeHCCR_dV_FlowLimiterPump1_Value(HCCR_ac_B.Gain_d);

    /* Outport: '<Root>/VeHCCR_dV_FlowLimiterPump2' */
    (void)Rte_Write_VeHCCR_dV_FlowLimiterPump2_Value(HCCR_ac_B.Gain_dt);

    /* Outport: '<Root>/VeHCCR_dV_LubFlowPump1' */
    (void)Rte_Write_VeHCCR_dV_LubFlowPump1_Value(HCCR_ac_B.Vector_l);

    /* Outport: '<Root>/VeHCCR_dV_LubFlowPump2' */
    (void)Rte_Write_VeHCCR_dV_LubFlowPump2_Value(HCCR_ac_B.Vector_lu);

#endif

    /* End of SignalConversion generated from: '<S1>/VeHCCR_dV_FlowLimiterPump1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, HCCR_CODE) HCCR_PUP(void)
{

#if Rte_SysCon_Variant_HCCR_ClchEngy

    float32 rtb_MinMax1;

#endif

#if Rte_SysCon_Variant_HCCR_ClchEngy

    float32 rtb_TmpSignalConversionAtVeENGR_t_EngOff;

#endif

    TeHCCR_e_ActuatorSt tmp;

    /* RootInportFunctionCallGenerator generated from: '<Root>/PUP' incorporates:
     *  SubSystem: '<Root>/HCCR_PUP'
     */
    /* SignalConversion generated from: '<S2>/VeENGR_t_EngOffTime' */
#if Rte_SysCon_Variant_HCCR_ClchEngy

    /* S-Function (fcgen): '<S2>/FcnCallGen' */
    /* SignalConversion generated from: '<S2>/VeENGR_t_EngOffTime' incorporates:
     *  Inport: '<Root>/VeENGR_t_EngOffTime'
     */
    (void)Rte_Read_VeENGR_t_EngOffTime_Value
        (&rtb_TmpSignalConversionAtVeENGR_t_EngOff);

    /* Outputs for Function Call SubSystem: '<S2>/HCCI_InitClchEngy' */
    /* Switch: '<S582>/Switch24' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S589>/Calib'
     *  DataStoreRead: '<S582>/Data Store Read1'
     *  DataStoreWrite: '<S582>/Data Store Write1'
     *  Product: '<S585>/Product'
     *  Sum: '<S585>/Sum1'
     *  Sum: '<S585>/Sum2'
     *  UnitDelay: '<S582>/Unit Delay'
     */
    if (KeHCCR_b_C1TempOvrdEnbl)
    {
        HCCR_ac_DW.NeHCCR_T_C1_Temp_DS = KeHCCR_T_C1TempOvrdVal;
    }
    else
    {
        /* MinMax: '<S585>/MinMax1' incorporates:
         *  Constant: '<S591>/Calib'
         */
        rtb_MinMax1 = fmaxf(rtb_TmpSignalConversionAtVeENGR_t_EngOff,
                            KeHCCR_t_EngOffTimeLmt);

        /* Outputs for Atomic SubSystem: '<S585>/Protected Division' */
        /* Switch: '<S592>/Switch1' incorporates:
         *  Constant: '<S591>/Calib'
         *  Constant: '<S592>/Constant Value'
         *  Constant: '<S592>/Constant Value1'
         *  Constant: '<S592>/Constant Value2'
         *  Constant: '<S592>/Constant Value3'
         *  Logic: '<S592>/AND'
         *  RelationalOperator: '<S592>/Greater Than or Equal '
         *  RelationalOperator: '<S592>/Greater Than or Equal 1'
         *  RelationalOperator: '<S592>/Not Equal'
         *  RelationalOperator: '<S592>/Not Equal1'
         *  Switch: '<S592>/Switch2'
         *  Switch: '<S592>/Switch3'
         */
        if ((rtb_MinMax1 != 0.0F) && (KeHCCR_t_EngOffTimeLmt != 0.0F))
        {
            /* Switch: '<S592>/Switch1' incorporates:
             *  Product: '<S592>/Division'
             */
            rtb_MinMax1 /= KeHCCR_t_EngOffTimeLmt;
        }
        else if (rtb_MinMax1 > 0.0F)
        {
            /* Switch: '<S592>/Switch2' incorporates:
             *  Constant: '<S592>/MAXFLOAT'
             *  Switch: '<S592>/Switch1'
             */
            rtb_MinMax1 = 3.402823466E+38F;
        }
        else if (rtb_MinMax1 < 0.0F)
        {
            /* Switch: '<S592>/Switch3' incorporates:
             *  Constant: '<S592>/MINFLOAT'
             *  Switch: '<S592>/Switch1'
             *  Switch: '<S592>/Switch2'
             */
            rtb_MinMax1 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S592>/Switch1' incorporates:
             *  Constant: '<S592>/Constant Value4'
             *  Switch: '<S592>/Switch2'
             *  Switch: '<S592>/Switch3'
             */
            rtb_MinMax1 = 0.0F;
        }

        /* End of Switch: '<S592>/Switch1' */
        /* End of Outputs for SubSystem: '<S585>/Protected Division' */
        HCCR_ac_DW.NeHCCR_T_C1_Temp_DS -= (HCCR_ac_DW.NeHCCR_T_C1_Temp_DS -
            HCCR_ac_DW.UnitDelay_DSTATE) * rtb_MinMax1;
    }

    /* End of Switch: '<S582>/Switch24' */

    /* Switch: '<S582>/Switch1' incorporates:
     *  Constant: '<S588>/Calib'
     *  Constant: '<S590>/Calib'
     *  DataStoreRead: '<S582>/Data Store Read'
     *  DataStoreWrite: '<S582>/Data Store Write2'
     *  Product: '<S586>/Product'
     *  Sum: '<S586>/Sum1'
     *  Sum: '<S586>/Sum2'
     *  UnitDelay: '<S582>/Unit Delay'
     */
    if (KeHCCR_b_C2TempOvrdEnbl)
    {
        HCCR_ac_DW.NeHCCR_T_C2_Temp_DS = KeHCCR_T_C2TempOvrdVal;
    }
    else
    {
        /* MinMax: '<S586>/MinMax1' incorporates:
         *  Constant: '<S593>/Calib'
         */
        rtb_TmpSignalConversionAtVeENGR_t_EngOff = fmaxf
            (rtb_TmpSignalConversionAtVeENGR_t_EngOff, KeHCCR_t_EngOffTimeLmt);

        /* Outputs for Atomic SubSystem: '<S586>/Protected Division' */
        /* Switch: '<S594>/Switch1' incorporates:
         *  Constant: '<S593>/Calib'
         *  Constant: '<S594>/Constant Value'
         *  Constant: '<S594>/Constant Value1'
         *  Constant: '<S594>/Constant Value2'
         *  Constant: '<S594>/Constant Value3'
         *  Logic: '<S594>/AND'
         *  RelationalOperator: '<S594>/Greater Than or Equal '
         *  RelationalOperator: '<S594>/Greater Than or Equal 1'
         *  RelationalOperator: '<S594>/Not Equal'
         *  RelationalOperator: '<S594>/Not Equal1'
         *  Switch: '<S594>/Switch2'
         *  Switch: '<S594>/Switch3'
         */
        if ((rtb_TmpSignalConversionAtVeENGR_t_EngOff != 0.0F) &&
                (KeHCCR_t_EngOffTimeLmt != 0.0F))
        {
            /* Switch: '<S594>/Switch1' incorporates:
             *  Product: '<S594>/Division'
             */
            rtb_TmpSignalConversionAtVeENGR_t_EngOff /= KeHCCR_t_EngOffTimeLmt;
        }
        else if (rtb_TmpSignalConversionAtVeENGR_t_EngOff > 0.0F)
        {
            /* Switch: '<S594>/Switch2' incorporates:
             *  Constant: '<S594>/MAXFLOAT'
             *  Switch: '<S594>/Switch1'
             */
            rtb_TmpSignalConversionAtVeENGR_t_EngOff = 3.402823466E+38F;
        }
        else if (rtb_TmpSignalConversionAtVeENGR_t_EngOff < 0.0F)
        {
            /* Switch: '<S594>/Switch3' incorporates:
             *  Constant: '<S594>/MINFLOAT'
             *  Switch: '<S594>/Switch1'
             *  Switch: '<S594>/Switch2'
             */
            rtb_TmpSignalConversionAtVeENGR_t_EngOff = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S594>/Switch1' incorporates:
             *  Constant: '<S594>/Constant Value4'
             *  Switch: '<S594>/Switch2'
             *  Switch: '<S594>/Switch3'
             */
            rtb_TmpSignalConversionAtVeENGR_t_EngOff = 0.0F;
        }

        /* End of Switch: '<S594>/Switch1' */
        /* End of Outputs for SubSystem: '<S586>/Protected Division' */
        HCCR_ac_DW.NeHCCR_T_C2_Temp_DS -= (HCCR_ac_DW.NeHCCR_T_C2_Temp_DS -
            HCCR_ac_DW.UnitDelay_DSTATE) *
            rtb_TmpSignalConversionAtVeENGR_t_EngOff;
    }

    /* End of Switch: '<S582>/Switch1' */

    /* Update for UnitDelay: '<S582>/Unit Delay' incorporates:
     *  Inport: '<Root>/VeTFTR_T_TransOilTemp'
     */
    (void)Rte_Read_VeTFTR_T_TransOilTemp_Value(&HCCR_ac_DW.UnitDelay_DSTATE);

    /* End of Outputs for SubSystem: '<S2>/HCCI_InitClchEngy' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeENGR_t_EngOffTime' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/HCCO_OutputsInit'
     */
    /* Outport: '<Root>/VeHCCR_Pct_AuxPumpSpdDsrd' incorporates:
     *  SignalConversion generated from: '<S583>/AuxPumpSpdDsrd_Pct'
     */
    (void)Rte_Write_VeHCCR_Pct_AuxPumpSpdDsrd_Value(0.0F);

    /* Outport: '<Root>/VeHCCR_p_PredLinePress' incorporates:
     *  SignalConversion generated from: '<S583>/PredLinePress'
     */
    (void)Rte_Write_VeHCCR_p_PredLinePress_Value(0.0F);

    /* Outport: '<Root>/VeHCCR_p_TransMnPressCmd' incorporates:
     *  SignalConversion generated from: '<S583>/TransMnPressCmd'
     */
    (void)Rte_Write_VeHCCR_p_TransMnPressCmd_Value(0.0F);

    /* Outport: '<Root>/VeHCCR_p_LinePres' incorporates:
     *  SignalConversion generated from: '<S583>/LinePres'
     */
    (void)Rte_Write_VeHCCR_p_LinePres_Value(0.0F);

    /* Switch: '<S583>/Switch3' incorporates:
     *  Constant: '<S599>/Calib'
     *  Constant: '<S600>/Calib'
     *  Switch: '<S583>/Switch7'
     */
    if (KeHCCR_b_SCA1_StatOvrdEnbl)
    {
        /* Outport: '<Root>/VeHCCR_e_SCA1_St' incorporates:
         *  Constant: '<S607>/Calib'
         */
        (void)Rte_Write_VeHCCR_e_SCA1_St_Value(KeHCCR_e_SCA1_StatOvrdVal);
    }
    else
    {
        if (KeHCCR_b_SCA1_ActuatorSt_OvrdEnbl)
        {
            /* Switch: '<S583>/Switch7' incorporates:
             *  Constant: '<S606>/Calib'
             */
            tmp = KeHCCR_e_SCA1_ActuatorSt_OvrdVal;
        }
        else
        {
            /* Switch: '<S583>/Switch7' incorporates:
             *  Constant: '<S596>/Constant'
             */
            tmp = CeHCCR_e_SCA_Initializing_Md;
        }

        /* Outport: '<Root>/VeHCCR_e_SCA1_St' incorporates:
         *  Switch: '<S583>/Switch7'
         */
        (void)Rte_Write_VeHCCR_e_SCA1_St_Value(tmp);
    }

    /* End of Switch: '<S583>/Switch3' */

    /* Switch: '<S583>/Switch2' incorporates:
     *  Constant: '<S601>/Calib'
     *  Constant: '<S602>/Calib'
     *  Switch: '<S583>/Switch8'
     */
    if (KeHCCR_b_SCA2_StatOvrdEnbl)
    {
        /* Outport: '<Root>/VeHCCR_e_SCA2_St' incorporates:
         *  Constant: '<S609>/Calib'
         */
        (void)Rte_Write_VeHCCR_e_SCA2_St_Value(KeHCCR_e_SCA2_StatOvrdVal);
    }
    else
    {
        if (KeHCCR_b_SCA2_ActuatorSt_OvrdEnbl)
        {
            /* Switch: '<S583>/Switch8' incorporates:
             *  Constant: '<S608>/Calib'
             */
            tmp = KeHCCR_e_SCA2_ActuatorSt_OvrdVal;
        }
        else
        {
            /* Switch: '<S583>/Switch8' incorporates:
             *  Constant: '<S597>/Constant'
             */
            tmp = CeHCCR_e_SCA_Initializing_Md;
        }

        /* Outport: '<Root>/VeHCCR_e_SCA2_St' incorporates:
         *  Switch: '<S583>/Switch8'
         */
        (void)Rte_Write_VeHCCR_e_SCA2_St_Value(tmp);
    }

    /* End of Switch: '<S583>/Switch2' */

    /* Outport: '<Root>/VeHCCR_t_FlTmClch1' incorporates:
     *  Constant: '<S610>/Calib'
     *  SignalConversion generated from: '<S583>/FlTmClch1'
     */
    (void)Rte_Write_VeHCCR_t_FlTmClch1_Value(KeHCCR_t_C1_FillTime);

    /* Outport: '<Root>/VeHCCR_t_FlTmClch2' incorporates:
     *  Constant: '<S611>/Calib'
     *  SignalConversion generated from: '<S583>/FlTmClch2'
     */
    (void)Rte_Write_VeHCCR_t_FlTmClch2_Value(KeHCCR_t_C2_FillTime);

    /* Outport: '<Root>/VeHCCR_t_FlTmClch3' incorporates:
     *  Constant: '<S612>/Calib'
     *  SignalConversion generated from: '<S583>/FlTmClch3'
     */
    (void)Rte_Write_VeHCCR_t_FlTmClch3_Value(KeHCCR_t_C3_FillTime);

    /* Outport: '<Root>/VeHCCR_t_FlTmClch4' incorporates:
     *  Constant: '<S583>/Constant Value5'
     *  Gain: '<S613>/Gain'
     */
    (void)Rte_Write_VeHCCR_t_FlTmClch4_Value(0.0F);

    /* SignalConversion generated from: '<S583>/VeHCCR_dV_LubFlowPump1' */
    HCCR_ac_B.OutportBufferForVeHCCR_dV_LubFlowPump1 = 0.0F;

    /* SignalConversion generated from: '<S583>/VeHCCR_dV_FlowLimiterPump1' */
    HCCR_ac_B.OutportBufferForVeHCCR_dV_FlowLimiterPum = 9999.0F;

    /* SignalConversion generated from: '<S583>/VeHCCR_dV_LubFlowPump2' */
    HCCR_ac_B.OutportBufferForVeHCCR_dV_LubFlowPump2 = 0.0F;

    /* SignalConversion generated from: '<S583>/VeHCCR_dV_FlowLimiterPump2' */
    HCCR_ac_B.OutportBufferForVeHCCR_dV_FlowLimiterP_g = 9999.0F;

    /* SignalConversion generated from: '<S583>/AuxPumpSpdDsrd_RPM' */
    HCCR_ac_B.OutportBufferForAuxPumpSpdDsrd_RPM = 0.0F;

    /* SignalConversion generated from: '<S583>/VeHCCR_V_UpperSump_Vol_out' */
    HCCR_ac_B.OutportBufferForVeHCCR_V_UpperSump_Vol_o = 0.0F;

    /* SignalConversion generated from: '<S583>/Clch1_TorqEst' */
    HCCR_ac_B.OutportBufferForClch1_TorqEst = 0.0F;

    /* SignalConversion generated from: '<S583>/Clch2_TorqEst' */
    HCCR_ac_B.OutportBufferForClch2_TorqEst = 0.0F;

    /* SignalConversion generated from: '<S583>/Clch3_TorqEst' */
    HCCR_ac_B.OutportBufferForClch3_TorqEst = 0.0F;

    /* Outport: '<Root>/VeHCCR_M_Clch4_TorqEst' incorporates:
     *  SignalConversion generated from: '<S583>/Clch4_TorqEst'
     */
    (void)Rte_Write_VeHCCR_M_Clch4_TorqEst_Value(0.0F);

    /* SignalConversion generated from: '<S583>/MaxEnergyClch1' */
    HCCR_ac_B.OutportBufferForMaxEnergyClch1 = 0.0F;

    /* SignalConversion generated from: '<S583>/MaxEnergyClch2' */
    HCCR_ac_B.OutportBufferForMaxEnergyClch2 = 0.0F;

    /* Outport: '<Root>/VeHCCR_E_MaxEnergyClch3' incorporates:
     *  Constant: '<S598>/Calib'
     *  SignalConversion generated from: '<S583>/MaxEnergyClch3'
     */
    (void)Rte_Write_VeHCCR_E_MaxEnergyClch3_Value(KeHCCR_M_C3_MaxEnergy);

    /* Outport: '<Root>/VeHCCR_E_MaxEnergyClch4' incorporates:
     *  SignalConversion generated from: '<S583>/MaxEnergyClch4'
     */
    (void)Rte_Write_VeHCCR_E_MaxEnergyClch4_Value(0.0F);

    /* SignalConversion generated from: '<S583>/Clch1_Stat' incorporates:
     *  Constant: '<S603>/Calib'
     */
    HCCR_ac_B.OutportBufferForClch1_Stat = KeHCCR_e_Clch1_DefaultStat;

    /* SignalConversion generated from: '<S583>/Clch2_Stat' incorporates:
     *  Constant: '<S604>/Calib'
     */
    HCCR_ac_B.OutportBufferForClch2_Stat = KeHCCR_e_Clch2_DefaultStat;

    /* SignalConversion generated from: '<S583>/Clch3_Stat' incorporates:
     *  Constant: '<S605>/Calib'
     */
    HCCR_ac_B.OutportBufferForClch3_Stat = KeHCCR_e_Clch3_DefaultStat;

    /* Outport: '<Root>/VeHCCR_e_Clch4_Stat' incorporates:
     *  Constant: '<S595>/Constant'
     *  SignalConversion generated from: '<S583>/Clch4_Stat'
     */
    (void)Rte_Write_VeHCCR_e_Clch4_Stat_Value(HCCR_ac_ConstB.Constant_n);

    /* SignalConversion generated from: '<S583>/Clch1_FillCmptDetected' */
    HCCR_ac_B.OutportBufferForClch1_FillCmptDetected = false;

    /* SignalConversion generated from: '<S583>/Clch2_FillCmptDetected' */
    HCCR_ac_B.OutportBufferForClch2_FillCmptDetected = false;

    /* SignalConversion generated from: '<S583>/Clch3_FillCmptDetected' */
    HCCR_ac_B.OutportBufferForClch3_FillCmptDetected = false;

    /* SignalConversion generated from: '<S583>/Clch4_FillCmptDetected' */
    HCCR_ac_B.OutportBufferForClch4_FillCmptDetected = false;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeHCCR_n_AuxPumpSpdDsrd' incorporates:
     *  SignalConversion generated from: '<S2>/AuxPumpSpdDsrd_RPM'
     */
    (void)Rte_Write_VeHCCR_n_AuxPumpSpdDsrd_Value
        (HCCR_ac_B.OutportBufferForAuxPumpSpdDsrd_RPM);

    /* Outport: '<Root>/VeHCCR_b_Clch1_FillCmptDetected' incorporates:
     *  SignalConversion generated from: '<S2>/Clch1_FillCmptDetected'
     */
    (void)Rte_Write_VeHCCR_b_Clch1_FillCmptDetected_Value
        (HCCR_ac_B.OutportBufferForClch1_FillCmptDetected);

    /* Outport: '<Root>/VeHCCR_e_Clch1_Stat' incorporates:
     *  SignalConversion generated from: '<S2>/Clch1_Stat'
     *  SignalConversion generated from: '<S583>/Clch1_Stat'
     */
    (void)Rte_Write_VeHCCR_e_Clch1_Stat_Value
        (HCCR_ac_B.OutportBufferForClch1_Stat);

    /* Outport: '<Root>/VeHCCR_M_Clch1_TorqEst' incorporates:
     *  SignalConversion generated from: '<S2>/Clch1_TorqEst'
     */
    (void)Rte_Write_VeHCCR_M_Clch1_TorqEst_Value
        (HCCR_ac_B.OutportBufferForClch1_TorqEst);

    /* Outport: '<Root>/VeHCCR_b_Clch2_FillCmptDetected' incorporates:
     *  SignalConversion generated from: '<S2>/Clch2_FillCmptDetected'
     */
    (void)Rte_Write_VeHCCR_b_Clch2_FillCmptDetected_Value
        (HCCR_ac_B.OutportBufferForClch2_FillCmptDetected);

    /* Outport: '<Root>/VeHCCR_e_Clch2_Stat' incorporates:
     *  SignalConversion generated from: '<S2>/Clch2_Stat'
     *  SignalConversion generated from: '<S583>/Clch2_Stat'
     */
    (void)Rte_Write_VeHCCR_e_Clch2_Stat_Value
        (HCCR_ac_B.OutportBufferForClch2_Stat);

    /* Outport: '<Root>/VeHCCR_M_Clch2_TorqEst' incorporates:
     *  SignalConversion generated from: '<S2>/Clch2_TorqEst'
     */
    (void)Rte_Write_VeHCCR_M_Clch2_TorqEst_Value
        (HCCR_ac_B.OutportBufferForClch2_TorqEst);

    /* Outport: '<Root>/VeHCCR_b_Clch3_FillCmptDetected' incorporates:
     *  SignalConversion generated from: '<S2>/Clch3_FillCmptDetected'
     */
    (void)Rte_Write_VeHCCR_b_Clch3_FillCmptDetected_Value
        (HCCR_ac_B.OutportBufferForClch3_FillCmptDetected);

    /* Outport: '<Root>/VeHCCR_e_Clch3_Stat' incorporates:
     *  SignalConversion generated from: '<S2>/Clch3_Stat'
     *  SignalConversion generated from: '<S583>/Clch3_Stat'
     */
    (void)Rte_Write_VeHCCR_e_Clch3_Stat_Value
        (HCCR_ac_B.OutportBufferForClch3_Stat);

    /* Outport: '<Root>/VeHCCR_M_Clch3_TorqEst' incorporates:
     *  SignalConversion generated from: '<S2>/Clch3_TorqEst'
     */
    (void)Rte_Write_VeHCCR_M_Clch3_TorqEst_Value
        (HCCR_ac_B.OutportBufferForClch3_TorqEst);

    /* Outport: '<Root>/VeHCCR_b_Clch4_FillCmptDetected' incorporates:
     *  SignalConversion generated from: '<S2>/Clch4_FillCmptDetected'
     */
    (void)Rte_Write_VeHCCR_b_Clch4_FillCmptDetected_Value
        (HCCR_ac_B.OutportBufferForClch4_FillCmptDetected);

    /* Outport: '<Root>/VeHCCR_E_MaxEnergyClch1' incorporates:
     *  SignalConversion generated from: '<S2>/MaxEnergyClch1'
     */
    (void)Rte_Write_VeHCCR_E_MaxEnergyClch1_Value
        (HCCR_ac_B.OutportBufferForMaxEnergyClch1);

    /* Outport: '<Root>/VeHCCR_E_MaxEnergyClch2' incorporates:
     *  SignalConversion generated from: '<S2>/MaxEnergyClch2'
     */
    (void)Rte_Write_VeHCCR_E_MaxEnergyClch2_Value
        (HCCR_ac_B.OutportBufferForMaxEnergyClch2);

    /* Outport: '<Root>/VeHCCR_V_UpperSump_Vol' incorporates:
     *  SignalConversion generated from: '<S2>/VeHCCR_V_UpperSump_Vol_out'
     */
    (void)Rte_Write_VeHCCR_V_UpperSump_Vol_Value
        (HCCR_ac_B.OutportBufferForVeHCCR_V_UpperSump_Vol_o);

    /* Outport: '<Root>/VeHCCR_dV_FlowLimiterPump1' incorporates:
     *  SignalConversion generated from: '<S2>/VeHCCR_dV_FlowLimiterPump1'
     */
    (void)Rte_Write_VeHCCR_dV_FlowLimiterPump1_Value
        (HCCR_ac_B.OutportBufferForVeHCCR_dV_FlowLimiterPum);

    /* Outport: '<Root>/VeHCCR_dV_FlowLimiterPump2' incorporates:
     *  SignalConversion generated from: '<S2>/VeHCCR_dV_FlowLimiterPump2'
     */
    (void)Rte_Write_VeHCCR_dV_FlowLimiterPump2_Value
        (HCCR_ac_B.OutportBufferForVeHCCR_dV_FlowLimiterP_g);

    /* Outport: '<Root>/VeHCCR_dV_LubFlowPump1' incorporates:
     *  SignalConversion generated from: '<S2>/VeHCCR_dV_LubFlowPump1'
     */
    (void)Rte_Write_VeHCCR_dV_LubFlowPump1_Value
        (HCCR_ac_B.OutportBufferForVeHCCR_dV_LubFlowPump1);

    /* Outport: '<Root>/VeHCCR_dV_LubFlowPump2' incorporates:
     *  SignalConversion generated from: '<S2>/VeHCCR_dV_LubFlowPump2'
     */
    (void)Rte_Write_VeHCCR_dV_LubFlowPump2_Value
        (HCCR_ac_B.OutportBufferForVeHCCR_dV_LubFlowPump2);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PUP' */
}

/* Output function */
FUNC(void, HCCR_CODE) HCCR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/HCCR_PwrOff'
     */
    /* Outport: '<Root>/NeHCCR_Cnt_AllC2CShifts_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeHCCR_Cnt_AllC2CShifts'
     */
    (void)Rte_Write_NeHCCR_Cnt_AllC2CShifts_NeHCCR_Cnt_AllC2CShifts
        (HCCR_ac_DW.NeHCCR_Cnt_AllC2CShifts);

    /* Outport: '<Root>/NeHCCR_t_C2_FillTimeEst_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeHCCR_t_C2_FillTimeEst_DS'
     */
    (void)Rte_Write_NeHCCR_t_C2_FillTimeEst_DS_NeHCCR_t_C2_FillTimeEst_DS
        (HCCR_ac_DW.NeHCCR_t_C2_FillTimeEst_DS);

    /* Outport: '<Root>/NeHCCR_b_C2TchPt_DtctFlg_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeHCCR_b_C2TchPt_DtctFlg_DS'
     */
    (void)Rte_Write_NeHCCR_b_C2TchPt_DtctFlg_DS_NeHCCR_b_C2TchPt_DtctFlg_DS
        (HCCR_ac_DW.NeHCCR_b_C2TchPt_DtctFlg_DS);

    /* Outport: '<Root>/NeHCCR_l_C2_TchPt_PosnEst_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeHCCR_l_C2_TchPt_PosnEst_DS'
     */
    (void)Rte_Write_NeHCCR_l_C2_TchPt_PosnEst_DS_NeHCCR_l_C2_TchPt_PosnEst_DS
        (HCCR_ac_DW.NeHCCR_l_C2_TchPt_PosnEst_DS);

    /* Outport: '<Root>/NeHCCR_p_C2_TchPt_PresEst_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeHCCR_p_C2_TchPt_PresEst_DS'
     */
    (void)Rte_Write_NeHCCR_p_C2_TchPt_PresEst_DS_NeHCCR_p_C2_TchPt_PresEst_DS
        (HCCR_ac_DW.NeHCCR_p_C2_TchPt_PresEst_DS);

    /* Outport: '<Root>/NeHCCR_T_C2_Temp_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeHCCR_T_C2_Temp_DS'
     */
    (void)Rte_Write_NeHCCR_T_C2_Temp_DS_NeHCCR_T_C2_Temp_DS
        (HCCR_ac_DW.NeHCCR_T_C2_Temp_DS);

    /* Outport: '<Root>/NeHCCR_t_C1_FillTimeEst_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeHCCR_t_C1_FillTimeEst_DS'
     */
    (void)Rte_Write_NeHCCR_t_C1_FillTimeEst_DS_NeHCCR_t_C1_FillTimeEst_DS
        (HCCR_ac_DW.NeHCCR_t_C1_FillTimeEst_DS);

    /* Outport: '<Root>/NeHCCR_Cnt_C2CShifts_TchPtLrn_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeHCCR_Cnt_C2CShifts_TchPtLrn'
     */
    (void)Rte_Write_NeHCCR_Cnt_C2CShifts_TchPtLrn_NeHCCR_Cnt_C2CShifts_TchPtLrn
        (HCCR_ac_DW.NeHCCR_Cnt_C2CShifts_TchPtLrn);

    /* Outport: '<Root>/NeHCCR_b_C1TchPt_DtctFlg_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeHCCR_b_C1TchPt_DtctFlg_DS'
     */
    (void)Rte_Write_NeHCCR_b_C1TchPt_DtctFlg_DS_NeHCCR_b_C1TchPt_DtctFlg_DS
        (HCCR_ac_DW.NeHCCR_b_C1TchPt_DtctFlg_DS);

    /* Outport: '<Root>/NeHCCR_l_C1_TchPt_PosnEst_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeHCCR_l_C1_TchPt_PosnEst_DS'
     */
    (void)Rte_Write_NeHCCR_l_C1_TchPt_PosnEst_DS_NeHCCR_l_C1_TchPt_PosnEst_DS
        (HCCR_ac_DW.NeHCCR_l_C1_TchPt_PosnEst_DS);

    /* Outport: '<Root>/NeHCCR_p_C1_TchPt_PresEst_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeHCCR_p_C1_TchPt_PresEst_DS'
     */
    (void)Rte_Write_NeHCCR_p_C1_TchPt_PresEst_DS_NeHCCR_p_C1_TchPt_PresEst_DS
        (HCCR_ac_DW.NeHCCR_p_C1_TchPt_PresEst_DS);

    /* Outport: '<Root>/NeHCCR_T_C1_Temp_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeHCCR_T_C1_Temp_DS'
     */
    (void)Rte_Write_NeHCCR_T_C1_Temp_DS_NeHCCR_T_C1_Temp_DS
        (HCCR_ac_DW.NeHCCR_T_C1_Temp_DS);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, HCCR_CODE) HCCR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/HCCR_PwrOn'
     */
    /* S-Function (fcgen): '<S4>/Function-Call Generator' incorporates:
     *  SubSystem: '<S4>/DSM_Init'
     */
    /* DataStoreWrite: '<S614>/NeHCCR_T_C1_Temp_DS' incorporates:
     *  Inport: '<Root>/NeHCCR_T_C1_Temp_DS_PM_In'
     */
    (void)Rte_Read_NeHCCR_T_C1_Temp_DS_Rx_NeHCCR_T_C1_Temp_DS
        (&HCCR_ac_DW.NeHCCR_T_C1_Temp_DS);

    /* DataStoreWrite: '<S614>/NeHCCR_p_C1_TchPt_PresEst_DS' incorporates:
     *  Inport: '<Root>/NeHCCR_p_C1_TchPt_PresEst_DS_PM_In'
     */
    (void)Rte_Read_NeHCCR_p_C1_TchPt_PresEst_DS_Rx_NeHCCR_p_C1_TchPt_PresEst_DS(
        &HCCR_ac_DW.NeHCCR_p_C1_TchPt_PresEst_DS);

    /* DataStoreWrite: '<S614>/NeHCCR_l_C1_TchPt_PosnEst_DS' incorporates:
     *  Inport: '<Root>/NeHCCR_l_C1_TchPt_PosnEst_DS_PM_In'
     */
    (void)Rte_Read_NeHCCR_l_C1_TchPt_PosnEst_DS_Rx_NeHCCR_l_C1_TchPt_PosnEst_DS(
        &HCCR_ac_DW.NeHCCR_l_C1_TchPt_PosnEst_DS);

    /* DataStoreWrite: '<S614>/NeHCCR_b_C1TchPt_DtctFlg_DS' incorporates:
     *  Inport: '<Root>/NeHCCR_b_C1TchPt_DtctFlg_DS_PM_In'
     */
    (void)Rte_Read_NeHCCR_b_C1TchPt_DtctFlg_DS_Rx_NeHCCR_b_C1TchPt_DtctFlg_DS
        (&HCCR_ac_DW.NeHCCR_b_C1TchPt_DtctFlg_DS);

    /* DataStoreWrite: '<S614>/NeHCCR_Cnt_C2CShifts_TchPtLrn' incorporates:
     *  Inport: '<Root>/NeHCCR_Cnt_C2CShifts_TchPtLrn_PM_In'
     */
    (void)
        Rte_Read_NeHCCR_Cnt_C2CShifts_TchPtLrn_Rx_NeHCCR_Cnt_C2CShifts_TchPtLrn(
        &HCCR_ac_DW.NeHCCR_Cnt_C2CShifts_TchPtLrn);

    /* DataStoreWrite: '<S614>/NeHCCR_t_C1_FillTimeEst_DS' incorporates:
     *  Inport: '<Root>/NeHCCR_t_C1_FillTimeEst_DS_PM_In'
     */
    (void)Rte_Read_NeHCCR_t_C1_FillTimeEst_DS_Rx_NeHCCR_t_C1_FillTimeEst_DS
        (&HCCR_ac_DW.NeHCCR_t_C1_FillTimeEst_DS);

    /* DataStoreWrite: '<S614>/NeHCCR_T_C2_Temp_DS' incorporates:
     *  Inport: '<Root>/NeHCCR_T_C2_Temp_DS_PM_In'
     */
    (void)Rte_Read_NeHCCR_T_C2_Temp_DS_Rx_NeHCCR_T_C2_Temp_DS
        (&HCCR_ac_DW.NeHCCR_T_C2_Temp_DS);

    /* DataStoreWrite: '<S614>/NeHCCR_p_C2_TchPt_PresEst_DS' incorporates:
     *  Inport: '<Root>/NeHCCR_p_C2_TchPt_PresEst_DS_PM_In'
     */
    (void)Rte_Read_NeHCCR_p_C2_TchPt_PresEst_DS_Rx_NeHCCR_p_C2_TchPt_PresEst_DS(
        &HCCR_ac_DW.NeHCCR_p_C2_TchPt_PresEst_DS);

    /* DataStoreWrite: '<S614>/NeHCCR_l_C2_TchPt_PosnEst_DS' incorporates:
     *  Inport: '<Root>/NeHCCR_l_C2_TchPt_PosnEst_DS_PM_In'
     */
    (void)Rte_Read_NeHCCR_l_C2_TchPt_PosnEst_DS_Rx_NeHCCR_l_C2_TchPt_PosnEst_DS(
        &HCCR_ac_DW.NeHCCR_l_C2_TchPt_PosnEst_DS);

    /* DataStoreWrite: '<S614>/NeHCCR_b_C2TchPt_DtctFlg_DS' incorporates:
     *  Inport: '<Root>/NeHCCR_b_C2TchPt_DtctFlg_DS_PM_In'
     */
    (void)Rte_Read_NeHCCR_b_C2TchPt_DtctFlg_DS_Rx_NeHCCR_b_C2TchPt_DtctFlg_DS
        (&HCCR_ac_DW.NeHCCR_b_C2TchPt_DtctFlg_DS);

    /* DataStoreWrite: '<S614>/NeHCCR_t_C2_FillTimeEst_DS' incorporates:
     *  Inport: '<Root>/NeHCCR_t_C2_FillTimeEst_DS_PM_In'
     */
    (void)Rte_Read_NeHCCR_t_C2_FillTimeEst_DS_Rx_NeHCCR_t_C2_FillTimeEst_DS
        (&HCCR_ac_DW.NeHCCR_t_C2_FillTimeEst_DS);

    /* DataStoreWrite: '<S614>/NeHCCR_Cnt_AllC2CShifts' incorporates:
     *  Inport: '<Root>/NeHCCR_Cnt_AllC2CShifts_PM_In'
     */
    (void)Rte_Read_NeHCCR_Cnt_AllC2CShifts_Rx_NeHCCR_Cnt_AllC2CShifts
        (&HCCR_ac_DW.NeHCCR_Cnt_AllC2CShifts);

    /* End of Outputs for S-Function (fcgen): '<S4>/Function-Call Generator' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, HCCR_CODE) HCCR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PUP' incorporates:
     *  SubSystem: '<Root>/HCCR_PUP'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/HCCO_OutputsInit'
     */
    /* SystemInitialize for Outport: '<Root>/VeHCCR_t_FlTmClch1' incorporates:
     *  Constant: '<S610>/Calib'
     *  SignalConversion generated from: '<S583>/FlTmClch1'
     */
    (void)Rte_Write_VeHCCR_t_FlTmClch1_Value(KeHCCR_t_C1_FillTime);

    /* SystemInitialize for Outport: '<Root>/VeHCCR_t_FlTmClch2' incorporates:
     *  Constant: '<S611>/Calib'
     *  SignalConversion generated from: '<S583>/FlTmClch2'
     */
    (void)Rte_Write_VeHCCR_t_FlTmClch2_Value(KeHCCR_t_C2_FillTime);

    /* SystemInitialize for Outport: '<Root>/VeHCCR_t_FlTmClch3' incorporates:
     *  Constant: '<S612>/Calib'
     *  SignalConversion generated from: '<S583>/FlTmClch3'
     */
    (void)Rte_Write_VeHCCR_t_FlTmClch3_Value(KeHCCR_t_C3_FillTime);

    /* SystemInitialize for SignalConversion generated from: '<S583>/VeHCCR_dV_FlowLimiterPump1' */
    HCCR_ac_B.OutportBufferForVeHCCR_dV_FlowLimiterPum = 9999.0F;

    /* SystemInitialize for SignalConversion generated from: '<S583>/VeHCCR_dV_FlowLimiterPump2' */
    HCCR_ac_B.OutportBufferForVeHCCR_dV_FlowLimiterP_g = 9999.0F;

    /* SystemInitialize for Outport: '<Root>/VeHCCR_E_MaxEnergyClch3' incorporates:
     *  Constant: '<S598>/Calib'
     *  SignalConversion generated from: '<S583>/MaxEnergyClch3'
     */
    (void)Rte_Write_VeHCCR_E_MaxEnergyClch3_Value(KeHCCR_M_C3_MaxEnergy);

    /* SystemInitialize for SignalConversion generated from: '<S583>/Clch1_Stat' incorporates:
     *  Constant: '<S603>/Calib'
     */
    HCCR_ac_B.OutportBufferForClch1_Stat = KeHCCR_e_Clch1_DefaultStat;

    /* SystemInitialize for SignalConversion generated from: '<S583>/Clch2_Stat' incorporates:
     *  Constant: '<S604>/Calib'
     */
    HCCR_ac_B.OutportBufferForClch2_Stat = KeHCCR_e_Clch2_DefaultStat;

    /* SystemInitialize for SignalConversion generated from: '<S583>/Clch3_Stat' incorporates:
     *  Constant: '<S605>/Calib'
     */
    HCCR_ac_B.OutportBufferForClch3_Stat = KeHCCR_e_Clch3_DefaultStat;

    /* SystemInitialize for Outport: '<Root>/VeHCCR_e_Clch4_Stat' incorporates:
     *  Constant: '<S595>/Constant'
     *  SignalConversion generated from: '<S583>/Clch4_Stat'
     */
    (void)Rte_Write_VeHCCR_e_Clch4_Stat_Value(HCCR_ac_ConstB.Constant_n);

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PUP' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/HCCR_MedTED'
     */
#if Rte_SysCon_Variant_HCCR_ClchEngy
#endif

    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/HCCC_FillDtction'
     */
#if Rte_SysCon_Variant_HCCR_TPEst

    /* SystemInitialize for Atomic SubSystem: '<S10>/EnableTouchPEst' */
    /* SystemInitialize for Atomic SubSystem: '<S343>/EnableTouchPEst Subsystem' */
    /* SystemInitialize for IfAction SubSystem: '<S366>/C1_TouchP_Learning' */
    /* SystemInitialize for IfAction SubSystem: '<S368>/C1_TouchP_Updt' */
    /* SystemInitialize for SignalConversion generated from: '<S399>/C2TchPt_DtctFlg' */
    HCCR_ac_B.OutportBufferForC2TchPt_DtctFlg =
        HCCR_ac_ConstB.C1_PresPosnPt.TRUEConstant;

    /* End of SystemInitialize for SubSystem: '<S368>/C1_TouchP_Updt' */
    /* End of SystemInitialize for SubSystem: '<S366>/C1_TouchP_Learning' */

    /* SystemInitialize for IfAction SubSystem: '<S366>/C2_TouchP_Learning' */
    /* SystemInitialize for IfAction SubSystem: '<S370>/C2_TouchP_Updt' */
    /* SystemInitialize for SignalConversion generated from: '<S410>/C2TchPt_DtctFlg' */
    HCCR_ac_B.OutportBufferForC2TchPt_DtctFlg_b = true;

    /* End of SystemInitialize for SubSystem: '<S370>/C2_TouchP_Updt' */
    /* End of SystemInitialize for SubSystem: '<S366>/C2_TouchP_Learning' */
    /* End of SystemInitialize for SubSystem: '<S343>/EnableTouchPEst Subsystem' */
    /* End of SystemInitialize for SubSystem: '<S10>/EnableTouchPEst' */
    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* SystemInitialize for Outport: '<Root>/VeHCCR_e_Clch1_Stat' incorporates:
     *  Merge: '<Root>/Merge_5'
     */
    (void)Rte_Write_VeHCCR_e_Clch1_Stat_Value(CeHCCR_e_ClInvalid);

    /* SystemInitialize for Outport: '<Root>/VeHCCR_e_Clch2_Stat' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    (void)Rte_Write_VeHCCR_e_Clch2_Stat_Value(CeHCCR_e_ClInvalid);

    /* SystemInitialize for Outport: '<Root>/VeHCCR_e_Clch3_Stat' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    (void)Rte_Write_VeHCCR_e_Clch3_Stat_Value(CeHCCR_e_ClInvalid);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
