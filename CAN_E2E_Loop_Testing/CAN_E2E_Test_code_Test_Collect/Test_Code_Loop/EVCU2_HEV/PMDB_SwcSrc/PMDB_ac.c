/*
 * File: PMDB_ac.c
 *
 * Code generated for Simulink model 'PMDB_ac'.
 *
 * Model version                  : 1.212
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:06:10 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PMDB_ac.h"
#include "look1_iflf_binlca_19a.h"

/* Named constants for Chart: '<S43>/AntiSpkFil' */
#if Rte_SysCon_Variant_PMDB_BF1_Presence || Rte_SysCon_Variant_PMDB_BF2_Presence || Rte_SysCon_Variant_PMDB_BPCMWup_Presence || Rte_SysCon_Variant_PMDB_HB_Presence || Rte_SysCon_Variant_PMDB_IGNACC_Presence || Rte_SysCon_Variant_PMDB_IGNRUN_Presence || Rte_SysCon_Variant_PMDB_PCUPURDF_Presence || Rte_SysCon_Variant_PMDB_PWRPanel_Presence
#define PMDB_ac_IN_FILTERING           ((uint8)1U)
#endif

#if Rte_SysCon_Variant_PMDB_BF1_Presence || Rte_SysCon_Variant_PMDB_BF2_Presence || Rte_SysCon_Variant_PMDB_BPCMWup_Presence || Rte_SysCon_Variant_PMDB_HB_Presence || Rte_SysCon_Variant_PMDB_IGNACC_Presence || Rte_SysCon_Variant_PMDB_IGNRUN_Presence || Rte_SysCon_Variant_PMDB_PCUPURDF_Presence || Rte_SysCon_Variant_PMDB_PWRPanel_Presence
#define PMDB_ac_IN_NORMAL              ((uint8)2U)
#endif

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2019a.
//
// PROD Model Config Ver#19a.1 2/14/2020
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_PMDB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_PMDB_BF1_Presence

static volatile CONST(uint8, PMDB_VAR_INIT) KePMDB_Cnt_BF1SysSnsrSpikeThd = 2U;/* Referenced by: '<S53>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BF2_Presence

static volatile CONST(uint8, PMDB_VAR_INIT) KePMDB_Cnt_BF2SysSnsrSpikeThd = 2U;/* Referenced by: '<S72>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(uint8, PMDB_VAR_INIT) KePMDB_Cnt_BpcmWakeupSpikeThd = 2U;
                     /* Referenced by: '<S144>/KePMDB_Cnt_BpcmWakeupSpikeThd' */

#endif

#if Rte_SysCon_Variant_PMDB_HB_Presence

static volatile CONST(uint8, PMDB_VAR_INIT) KePMDB_Cnt_HBSysSnsrSpikeThd = 2U;/* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNACC_Presence

static volatile CONST(uint8, PMDB_VAR_INIT) KePMDB_Cnt_IgnAccRunSnsrSpikeThd =
    2U;                                /* Referenced by: '<S201>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUN_Presence

static volatile CONST(uint8, PMDB_VAR_INIT) KePMDB_Cnt_IgnRunCrnkSnsrSpikeThd =
    2U;                                /* Referenced by: '<S230>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_PCUPURDF_Presence

static volatile CONST(uint8, PMDB_VAR_INIT) KePMDB_Cnt_PcuPurdfSpikeThd = 2U;/* Referenced by: '<S23>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_PWRPanel_Presence

static volatile CONST(uint8, PMDB_VAR_INIT) KePMDB_Cnt_PwrPanSwSysSnsrSpikeThd =
    2U;                                /* Referenced by: '<S274>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(uint16, PMDB_VAR_INIT) KePMDB_Cnt_STBFailLimBpcmWakeup =
    10U;                               /* Referenced by: '<S90>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(uint16, PMDB_VAR_INIT) KePMDB_Cnt_STBSmplLimBpcmWakeup =
    10U;                               /* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_Cnt_STGFailLimBpcmWakeup =
    10.0F;                             /* Referenced by: '<S110>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_Cnt_STGSmplLimBpcmWakeup =
    10.0F;                             /* Referenced by: '<S111>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BF1_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_BF1SysSnsrByp = 12.0F;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BF1_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_BF1SysSnsrRcvry = 1.0F;
                         /* Referenced by: '<S50>/KeTAIB_T_OEXV_OutTempRcvry' */

#endif

#if Rte_SysCon_Variant_PMDB_BF1_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_BF1SysSnsrSpikeThd = 1.0F;/* Referenced by: '<S54>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BF1_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_BF1_SysVoltInit = 12.0F;/* Referenced by: '<S294>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BF2_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_BF2SysSnsrByp = 12.0F;/* Referenced by: '<S67>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BF2_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_BF2SysSnsrRcvry = 1.0F;
                         /* Referenced by: '<S69>/KeTAIB_T_OEXV_OutTempRcvry' */

#endif

#if Rte_SysCon_Variant_PMDB_BF2_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_BF2SysSnsrSpikeThd = 1.0F;/* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BF2_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_BF2_SysVoltInit = 12.0F;/* Referenced by: '<S296>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_BpcmWakeupSpikeThd =
    12.0F;             /* Referenced by: '<S145>/KePMDB_U_BpcmWakeupSpikeThd' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_BpcmWakeupThresholdHigh =
    12.0F;                 /* Referenced by: '<S131>/KeDMIB_e_PadLvrStsRcvry' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_BpcmWakeupThresholdLow =
    12.0F;                 /* Referenced by: '<S132>/KeDMIB_e_PadLvrStsRcvry' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_BpcmWakeupVoltInit =
    12.0F;                             /* Referenced by: '<S300>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_HB_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_HBSysSnsrByp = 12.0F;/* Referenced by: '<S177>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_HB_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_HBSysSnsrRcvry = 1.0F;
                        /* Referenced by: '<S179>/KeTAIB_T_OEXV_OutTempRcvry' */

#endif

#if Rte_SysCon_Variant_PMDB_HB_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_HBSysSnsrSpikeThd = 1.0F;/* Referenced by: '<S183>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_HB_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_HB_SysVoltInit = 12.0F;/* Referenced by: '<S305>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNACC_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_IgnAccRunInit = 12.0F;/* Referenced by: '<S307>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNACC_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_IgnAccRunSnsrByp = 1.0F;/* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNACC_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_IgnAccRunSnsrRcvry = 1.0F;
                        /* Referenced by: '<S198>/KeTAIB_T_OEXV_OutTempRcvry' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNACC_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_IgnAccRunSnsrSpikeThd =
    12.0F;                             /* Referenced by: '<S202>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUN_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_IgnRunCrnkInit = 12.0F;/* Referenced by: '<S311>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUN_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_IgnRunCrnkSnsrByp = 1.0F;/* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUN_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_IgnRunCrnkSnsrRcvry =
    1.0F;               /* Referenced by: '<S227>/KeTAIB_T_OEXV_OutTempRcvry' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUN_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_IgnRunCrnkSnsrSpikeThd =
    12.0F;                             /* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_PCUPURDF_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_PcuPurdfHysHighLim = 5.0F;/* Referenced by: '<S10>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_PCUPURDF_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_PcuPurdfHysLowLim = 0.0F;/* Referenced by: '<S11>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_PCUPURDF_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_PcuPurdfInit = 12.0F;/* Referenced by: '<S317>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_PCUPURDF_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_PcuPurdfSpikeThd = 1.0F;/* Referenced by: '<S24>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_PWRPanel_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_PwrPanSwHysHighLim = 4.0F;/* Referenced by: '<S261>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_PWRPanel_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_PwrPanSwHysLowLim = 1.0F;/* Referenced by: '<S262>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_PWRPanel_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_PwrPanSwInit = 0.0F;/* Referenced by: '<S319>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_PWRPanel_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_PwrPanSwSysSnsrSpikeThd =
    2.0F;                              /* Referenced by: '<S275>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_U_STBCktHiFltLimBpcmWakeup =
    0.166F;                            /* Referenced by: '<S92>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(float32, PMDB_VAR_INIT)
    KePMDB_U_STGCktLowFltLim_BpcmWakeup = 0.166F;/* Referenced by: '<S112>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BF1_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_BF1SysSnsrBypEnbl = 0;/* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BF1_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_BF1SysSnsrRcvryEnbl = 0;
                         /* Referenced by: '<S51>/KeTAIB_T_OEXV_OutTempRcvry' */

#endif

#if Rte_SysCon_Variant_PMDB_BF2_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_BF2SysSnsrBypEnbl = 0;/* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BF2_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_BF2SysSnsrRcvryEnbl = 0;
                     /* Referenced by: '<S70>/KeTAIB_b_OEXV_OutTempRcvryEnbl' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT)
    KePMDB_b_BPCMWakeUpDigInpPolarInvEnbl = 0;/* Referenced by: '<S158>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_BPCMWakeUpFiltdEnbl = 0;/* Referenced by: '<S154>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_BPCMWakeUpInit = 0;/* Referenced by: '<S301>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_BPCMWakeUpPolarInvEnbl =
    0;                                 /* Referenced by: '<S139>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_BpcmDigWakeupByp = 0;/* Referenced by: '<S156>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_BpcmDigWakeupBypEnbl = 0;/* Referenced by: '<S157>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_BpcmWakeupByp = 0;
                             /* Referenced by: '<S138>/KeDMIB_e_PadLvrStsByp' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_BpcmWakeupBypEnbl = 0;
                         /* Referenced by: '<S137>/KeDMIB_b_PadLvrStsBypEnbl' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_BpcmWakeupRcvry = 1;
                          /* Referenced by: '<S141>/KePMDB_b_BpcmWakeupRcvry' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_BpcmWakeupRcvryEnbl = 0;
                       /* Referenced by: '<S142>/KeDMIB_b_PadLvrStsRcvryEnbl' */

#endif

#if Rte_SysCon_Variant_PMDB_ESTOP_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_EStopByp = 0;/* Referenced by: '<S166>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_ESTOP_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_EStopBypEnbl = 0;/* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_ESTOP_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_EStopFiltdEnbl = 0;/* Referenced by: '<S164>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_ESTOP_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_EStopInit = 0;/* Referenced by: '<S303>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_ESTOP_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_EStopPolarInvEnbl = 0;/* Referenced by: '<S168>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_HB_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_HBSysSnsrBypEnbl = 0;/* Referenced by: '<S178>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_HB_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_HBSysSnsrRcvryEnbl = 0;
                    /* Referenced by: '<S180>/KeTAIB_b_OEXV_OutTempRcvryEnbl' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNACCDIG_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_IgnAccRunByp = 0;/* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNACCDIG_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_IgnAccRunBypEnbl = 0;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNACCDIG_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_IgnAccRunFiltdEnbl = 0;/* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNACCDIG_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_IgnAccRunInit = 0;/* Referenced by: '<S309>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNACCDIG_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_IgnAccRunPolarInvEnbl = 0;/* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNACC_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_IgnAccRunSnsrBypEnbl = 0;/* Referenced by: '<S197>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNACC_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_IgnAccRunSnsrRcvryEnbl =
    0;              /* Referenced by: '<S199>/KeTAIB_b_OEXV_OutTempRcvryEnbl' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUNDIG_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_IgnRunCrnkByp = 0;/* Referenced by: '<S243>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUNDIG_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_IgnRunCrnkBypEnbl = 0;/* Referenced by: '<S244>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUNDIG_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_IgnRunCrnkFiltdEnbl = 1;/* Referenced by: '<S241>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUNDIG_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_IgnRunCrnkInit = 0;/* Referenced by: '<S313>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUNDIG_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_IgnRunCrnkPolarInvEnbl =
    0;                                 /* Referenced by: '<S245>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUN_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_IgnRunCrnkSnsrBypEnbl = 0;/* Referenced by: '<S226>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUN_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_IgnRunCrnkSnsrRcvryEnbl =
    0;              /* Referenced by: '<S228>/KeTAIB_b_OEXV_OutTempRcvryEnbl' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_LtchEnblBpcmWakeupSTB = 0;
              /* Referenced by: '<S94>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_LtchEnblBpcmWakeupSTG = 0;
             /* Referenced by: '<S114>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_PMDB_OBCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_OBCMWupByp = 0;/* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_OBCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_OBCMWupBypEnbl = 0;/* Referenced by: '<S254>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_OBCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_OBCMWupFiltdEnbl = 0;/* Referenced by: '<S251>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_OBCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_OBCMWupInit = 0;/* Referenced by: '<S315>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_OBCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_OBCMWupPolarInvEnbl = 0;/* Referenced by: '<S255>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_PCUPURDF_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_PcuPurdfByp = 1;/* Referenced by: '<S16>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_PCUPURDF_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_PcuPurdfBypEnbl = 0;/* Referenced by: '<S17>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_PCUPURDF_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_PcuPurdfPolarInvEnbl = 0;/* Referenced by: '<S18>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_PCUPURDF_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_PcuPurdfRcvry = 1;
                         /* Referenced by: '<S20>/KeTAIB_T_OEXV_OutTempRcvry' */

#endif

#if Rte_SysCon_Variant_PMDB_PCUPURDF_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_PcuPurdfRcvryEnbl = 0;
                     /* Referenced by: '<S21>/KeTAIB_b_OEXV_OutTempRcvryEnbl' */

#endif

#if Rte_SysCon_Variant_PMDB_PWRPanel_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_PwrPanSwPolarInvEnbl = 0;/* Referenced by: '<S269>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_PWRPanel_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_PwrPanSwSnsrRcvry = 1;
                        /* Referenced by: '<S271>/KeTAIB_T_OEXV_OutTempRcvry' */

#endif

#if Rte_SysCon_Variant_PMDB_PWRPanel_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_PwrPanSwSnsrRcvryEnbl = 0;
                    /* Referenced by: '<S272>/KeTAIB_b_OEXV_OutTempRcvryEnbl' */

#endif

#if Rte_SysCon_Variant_PMDB_PWRPanel_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_PwrPanSwSysSnsrByp = 1;/* Referenced by: '<S267>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_PWRPanel_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_PwrPanSwSysSnsrBypEnbl =
    0;                                 /* Referenced by: '<S268>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_STBDiagEnblBpcmWakeup = 1;/* Referenced by: '<S93>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_STGDiagEnbl_BpcmWakeup =
    1;                                 /* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(boolean, PMDB_VAR_INIT) KePMDB_b_SmtPwrPanSrcSeln = 0;/* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BF1_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_k_BF1SysSnsrFiltGx = 1.0F;/* Referenced by: '<S55>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BF2_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_k_BF2SysSnsrFiltGx = 1.0F;/* Referenced by: '<S74>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_k_BpcmWakeupFiltGx = 1.0F;/* Referenced by: '<S146>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_HB_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_k_HBSysSnsrFiltGx = 1.0F;/* Referenced by: '<S184>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNACC_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_k_IgnAccRunSnsrFiltGx =
    1.0F;                              /* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUN_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_k_IgnRunCrnkSnsrFiltGx =
    1.0F;                              /* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_PCUPURDF_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_k_PcuPurdfFiltGx = 1.0F;/* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_PWRPanel_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KePMDB_k_PwrPanSwSysSnsrFiltGx =
    1.0F;                              /* Referenced by: '<S276>/Calib' */

#endif

#if Rte_SysCon_Variant_PMDB_BF1_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KtPMDB_U_BF1SysSnsrChartc[8] =
{
    0.0F, 0.347F, 0.723F, 1.52F, 2.849F, 4.164F, 4.804F, 5.0F
} ;                                    /* Referenced by: '<S44>/Vector' */

#endif

#if Rte_SysCon_Variant_PMDB_BF2_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KtPMDB_U_BF2SysSnsrChartc[8] =
{
    0.0F, 0.347F, 0.723F, 1.52F, 2.849F, 4.164F, 4.804F, 5.0F
} ;                                    /* Referenced by: '<S63>/Vector' */

#endif

#if Rte_SysCon_Variant_PMDB_HB_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KtPMDB_U_HBSysSnsrChartc[8] =
{
    0.0F, 0.347F, 0.723F, 1.52F, 2.849F, 4.164F, 4.804F, 5.0F
} ;                                    /* Referenced by: '<S173>/Vector' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNACC_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KtPMDB_U_IgnAccRunSnsrChartc[8] =
{
    0.0F, 0.347F, 0.723F, 1.52F, 2.849F, 4.164F, 4.804F, 5.0F
} ;                                    /* Referenced by: '<S192>/Vector' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUN_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KtPMDB_U_IgnRunCrnkSnsrChartc[8] =
{
    0.0F, 0.347F, 0.723F, 1.52F, 2.849F, 4.164F, 4.804F, 5.0F
} ;                                    /* Referenced by: '<S221>/Vector' */

#endif

#if Rte_SysCon_Variant_PMDB_BF1_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KxPMDB_U_BF1SysSnsrChartc[8] =
{
    0.0F, 0.347F, 0.723F, 1.52F, 2.849F, 4.164F, 4.804F, 5.0F
} ;                                    /* Referenced by: '<S44>/Vector' */

#endif

#if Rte_SysCon_Variant_PMDB_BF2_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KxPMDB_U_BF2SysSnsrChartc[8] =
{
    0.0F, 0.347F, 0.723F, 1.52F, 2.849F, 4.164F, 4.804F, 5.0F
} ;                                    /* Referenced by: '<S63>/Vector' */

#endif

#if Rte_SysCon_Variant_PMDB_HB_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KxPMDB_U_HBSysSnsrChartc[8] =
{
    0.0F, 0.347F, 0.723F, 1.52F, 2.849F, 4.164F, 4.804F, 5.0F
} ;                                    /* Referenced by: '<S173>/Vector' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNACC_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KxPMDB_U_IgnAccRunSnsrChartc[8] =
{
    0.0F, 0.347F, 0.723F, 1.52F, 2.849F, 4.164F, 4.804F, 5.0F
} ;                                    /* Referenced by: '<S192>/Vector' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUN_Presence

static volatile CONST(float32, PMDB_VAR_INIT) KxPMDB_U_IgnRunCrnkSnsrChartc[8] =
{
    0.0F, 0.347F, 0.723F, 1.52F, 2.849F, 4.164F, 4.804F, 5.0F
} ;                                    /* Referenced by: '<S221>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_PMDB
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PMDB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static VAR(uint16, PMDB_VAR_INIT) VePMDB_Cnt_STBFailLimBpcmWakeup;/* '<S103>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static VAR(uint16, PMDB_VAR_INIT) VePMDB_Cnt_STBSmplLimBpcmWakeup;/* '<S104>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static VAR(uint16, PMDB_VAR_INIT) VePMDB_Cnt_STGFailLimBpcmWakeup;/* '<S123>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static VAR(uint16, PMDB_VAR_INIT) VePMDB_Cnt_STGSmplLimBpcmWakeup;/* '<S124>/Switch1' */

#endif

#if Rte_SysCon_Variant_PMDB_BF1_Presence

static VAR(float32, PMDB_VAR_INIT) VePMDB_U_BF1SysSnsrVolt;/* '<S59>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_PMDB_BF1_Presence

static VAR(float32, PMDB_VAR_INIT) VePMDB_U_BF1SysSnsrVoltRaw;/* '<S43>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_PMDB_BF2_Presence

static VAR(float32, PMDB_VAR_INIT) VePMDB_U_BF2SysSnsrVolt;/* '<S78>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_PMDB_BF2_Presence

static VAR(float32, PMDB_VAR_INIT) VePMDB_U_BF2SysSnsrVoltRaw;/* '<S62>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static VAR(float32, PMDB_VAR_INIT) VePMDB_U_BpcmWakeupVoltRaw;/* '<S86>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static VAR(float32, PMDB_VAR_INIT) VePMDB_U_BpcmWkpVolt;/* '<S150>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_PMDB_HB_Presence

static VAR(float32, PMDB_VAR_INIT) VePMDB_U_HBSysSnsrVolt;/* '<S188>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_PMDB_HB_Presence

static VAR(float32, PMDB_VAR_INIT) VePMDB_U_HBSysSnsrVoltRaw;/* '<S172>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNACC_Presence

static VAR(float32, PMDB_VAR_INIT) VePMDB_U_IgnAccRunSnsrVolt;/* '<S207>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNACC_Presence

static VAR(float32, PMDB_VAR_INIT) VePMDB_U_IgnAccRunSnsrVoltRaw;/* '<S191>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUN_Presence

static VAR(float32, PMDB_VAR_INIT) VePMDB_U_IgnRunCrnkSnsrVolt;/* '<S236>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUN_Presence

static VAR(float32, PMDB_VAR_INIT) VePMDB_U_IgnRunCrnkSnsrVoltRaw;/* '<S220>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_PMDB_PWRPanel_Presence

static VAR(float32, PMDB_VAR_INIT) VePMDB_U_PwrPanSwSysSnsrVolt;/* '<S280>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_PMDB_PWRPanel_Presence

static VAR(float32, PMDB_VAR_INIT) VePMDB_U_PwrPanSwSysSnsrVoltRaw;/* '<S259>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static VAR(boolean, PMDB_VAR_INIT) VePMDB_b_BpcmWakeup;/* '<S133>/Switch' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static VAR(boolean, PMDB_VAR_INIT) VePMDB_b_BpcmWakeupSTB_FltDtct;/* '<S95>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static VAR(boolean, PMDB_VAR_INIT) VePMDB_b_BpcmWakeupSTG_FltDtct;/* '<S115>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static VAR(boolean, PMDB_VAR_INIT) VePMDB_b_SmtPwrPanWakeup;/* '<S155>/Switch' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PMDB
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PMDB
#include "MemMap.h"

VAR(B_PMDB_ac_T, PMDB_VAR_INIT) PMDB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PMDB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PMDB
#include "MemMap.h"

VAR(DW_PMDB_ac_T, PMDB_VAR_INIT) PMDB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PMDB
#include "MemMap.h"
#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static FUNC(void, PMDB_CODE_LOCAL) PMDB_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PMDB_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static FUNC(void, PMDB_CODE_LOCAL) PMDB_ac_Init_e(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PMDB_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static FUNC(void, PMDB_CODE_LOCAL) PMDB_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PMDB_VAR_INIT)
    rty_FaultSts);

#endif

/*
 * Output and update for enable system:
 *    '<S95>/Fail'
 *    '<S115>/Fail'
 */
#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static FUNC(void, PMDB_CODE_LOCAL) PMDB_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PMDB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S95>/Fail' incorporates:
     *  EnablePort: '<S99>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S99>/FaultSts' incorporates:
         *  Constant: '<S105>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S95>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S95>/Init'
 *    '<S115>/Init'
 */
#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static FUNC(void, PMDB_CODE_LOCAL) PMDB_ac_Init_e(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PMDB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S95>/Init' incorporates:
     *  EnablePort: '<S100>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S100>/FaultSts' incorporates:
         *  Constant: '<S106>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S95>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S95>/Pass'
 *    '<S115>/Pass'
 */
#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

static FUNC(void, PMDB_CODE_LOCAL) PMDB_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PMDB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S95>/Pass' incorporates:
     *  EnablePort: '<S101>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S101>/FaultSts' incorporates:
         *  Constant: '<S107>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S95>/Pass' */
}

#endif

/* Model step function for TID1 */
FUNC(void, PMDB_CODE) PMDB_FastTEF(void) /* Explicit Task: FastTEF */
{

#if Rte_SysCon_Variant_PMDB_BF1_Presence

    IDTRAdcInpResData tmpRead;

#endif

#if Rte_SysCon_Variant_PMDB_BF2_Presence

    IDTRAdcInpResData tmpRead_0;

#endif

#if Rte_SysCon_Variant_PMDB_HB_Presence

    IDTRAdcInpResData tmpRead_1;

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUN_Presence

    IDTRAdcInpResData tmpRead_2;

#endif

#if Rte_SysCon_Variant_PMDB_IGNACC_Presence

    IDTRAdcInpResData tmpRead_3;

#endif

#if Rte_SysCon_Variant_PMDB_PWRPanel_Presence

    IDTRAdcInpResData tmpRead_4;

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

    IDTRAdcInpResData tmpRead_5;

#endif

#if Rte_SysCon_Variant_PMDB_BF1_Presence

    float32 rtb_Vector_c[2];

#endif

#if Rte_SysCon_Variant_PMDB_BF2_Presence

    float32 rtb_Vector_p[2];

#endif

#if Rte_SysCon_Variant_PMDB_HB_Presence

    float32 rtb_Vector_e[2];

#endif

#if Rte_SysCon_Variant_PMDB_IGNACC_Presence

    float32 rtb_Vector_l[2];

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUN_Presence

    float32 rtb_Vector[2];

#endif

#if Rte_SysCon_Variant_PMDB_BF1_Presence || Rte_SysCon_Variant_PMDB_BF2_Presence || Rte_SysCon_Variant_PMDB_HB_Presence || Rte_SysCon_Variant_PMDB_IGNACC_Presence || Rte_SysCon_Variant_PMDB_IGNRUN_Presence

    float32 rtb_TmpSignalConversionAtVectorInport1_l[2];

#endif

#if Rte_SysCon_Variant_PMDB_BF1_Presence || Rte_SysCon_Variant_PMDB_BF2_Presence || Rte_SysCon_Variant_PMDB_BPCMWup_Presence || Rte_SysCon_Variant_PMDB_HB_Presence || Rte_SysCon_Variant_PMDB_IGNACC_Presence || Rte_SysCon_Variant_PMDB_IGNRUN_Presence || Rte_SysCon_Variant_PMDB_PWRPanel_Presence

    boolean rtb_TmpSignalConversionAtVeADFB_b_A2DF_o;

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

    boolean rtb_RelationalOperator3;

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

    boolean rtb_Logical1;

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_PostCo;

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

    boolean rtb_NOT4;

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

    boolean rtb_AND_j;

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

    boolean rtb_RelationalOperator1_c;

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

    boolean rtb_AND;

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_c;

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence || Rte_SysCon_Variant_PMDB_ESTOP_Presence || Rte_SysCon_Variant_PMDB_IGNACCDIG_Presence || Rte_SysCon_Variant_PMDB_IGNRUNDIG_Presence || Rte_SysCon_Variant_PMDB_OBCMWup_Presence

    boolean rtb_Switch_ij[2];

#endif

#if Rte_SysCon_Variant_PMDB_IGNACCDIG_Presence

    boolean rtb_TmpSignalConversionAtVeDIOR_b_IgnRun;

#endif

#if Rte_SysCon_Variant_PMDB_IGNACCDIG_Presence

    boolean rtb_TmpSignalConversionAtVeDIOR_b_IgnR_m;

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUNDIG_Presence

    boolean rtb_TmpSignalConversionAtVeDIOR_b_Ign_l0;

#endif

#if Rte_SysCon_Variant_PMDB_IGNRUNDIG_Presence

    boolean rtb_TmpSignalConversionAtVeDIOR_b_IgnR_f;

#endif

#if Rte_SysCon_Variant_PMDB_ESTOP_Presence

    boolean rtb_TmpSignalConversionAtVeDIOR_b_EStopD;

#endif

#if Rte_SysCon_Variant_PMDB_ESTOP_Presence

    boolean rtb_TmpSignalConversionAtVeDIOR_b_ESto_g;

#endif

#if Rte_SysCon_Variant_PMDB_OBCMWup_Presence

    boolean rtb_TmpSignalConversionAtVeDIOR_b_IdcmDi;

#endif

#if Rte_SysCon_Variant_PMDB_OBCMWup_Presence

    boolean rtb_TmpSignalConversionAtVeDIOR_b_Idcm_f;

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

    boolean rtb_TmpSignalConversionAtVeDIOR_b_BpcmWk;

#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

    boolean rtb_TmpSignalConversionAtVeDIOR_b_Bpcm_h;

#endif

#if Rte_SysCon_Variant_PMDB_BF1_Presence || Rte_SysCon_Variant_PMDB_BF2_Presence || Rte_SysCon_Variant_PMDB_BPCMWup_Presence || Rte_SysCon_Variant_PMDB_ESTOP_Presence || Rte_SysCon_Variant_PMDB_HB_Presence || Rte_SysCon_Variant_PMDB_IGNACCDIG_Presence || Rte_SysCon_Variant_PMDB_IGNACC_Presence || Rte_SysCon_Variant_PMDB_IGNRUNDIG_Presence || Rte_SysCon_Variant_PMDB_IGNRUN_Presence || Rte_SysCon_Variant_PMDB_OBCMWup_Presence

    sint32 i;

#endif

#if Rte_SysCon_Variant_PMDB_BF1_Presence || Rte_SysCon_Variant_PMDB_BF2_Presence || Rte_SysCon_Variant_PMDB_BPCMWup_Presence || Rte_SysCon_Variant_PMDB_HB_Presence || Rte_SysCon_Variant_PMDB_IGNACC_Presence || Rte_SysCon_Variant_PMDB_IGNRUN_Presence || Rte_SysCon_Variant_PMDB_PWRPanel_Presence

    float32 tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/5 ms'
     */
    /* UnitDelay: '<S2>/Unit Delay' incorporates:
     *  SignalConversion generated from: '<S2>/VeADFB_b_A2DFault'
     */
#if Rte_SysCon_Variant_PMDB_BF1_Presence || Rte_SysCon_Variant_PMDB_BF2_Presence || Rte_SysCon_Variant_PMDB_BPCMWup_Presence || Rte_SysCon_Variant_PMDB_HB_Presence || Rte_SysCon_Variant_PMDB_IGNACC_Presence || Rte_SysCon_Variant_PMDB_IGNRUN_Presence || Rte_SysCon_Variant_PMDB_PWRPanel_Presence

    /* SignalConversion generated from: '<S2>/VeADFB_b_A2DFault' incorporates:
     *  Inport: '<Root>/VeADFB_b_A2DFault'
     */
    (void)Rte_Read_VeADFB_b_A2DFault_Value
        (&rtb_TmpSignalConversionAtVeADFB_b_A2DF_o);

#endif

    /* End of UnitDelay: '<S2>/Unit Delay' */
#if Rte_SysCon_Variant_PMDB_BF1_Presence

    /* Outputs for Atomic SubSystem: '<S2>/BF1' */
    /* Inport: '<Root>/VeADCR_U_Ubd1Monitor_VsADCR_e_CnvnRes' */
    /* Gateway: 5 ms/BF1/BF1/SigAcqnAndFilSys/AntiSpkFil */
    /* During: 5 ms/BF1/BF1/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_Ubd1Monitor_VsADCR_e_CnvnRes(&tmpRead);

    /* Outputs for Atomic SubSystem: '<S30>/BF1' */
    /* Chart: '<S43>/AntiSpkFil' incorporates:
     *  Constant: '<S53>/Calib'
     *  Constant: '<S54>/Calib'
     */
    if (((uint32)PMDB_ac_DW.is_active_c2_PMDB_ac) == 0U)
    {
        /* Entry: 5 ms/BF1/BF1/SigAcqnAndFilSys/AntiSpkFil */
        PMDB_ac_DW.is_active_c2_PMDB_ac = 1U;

        /* Entry Internal: 5 ms/BF1/BF1/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S52>:8' */
        PMDB_ac_DW.is_c2_PMDB_ac = PMDB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S52>:37' */
        PMDB_ac_B.InputRaw0_p = tmpRead.e_CnvnRes;
        VePMDB_U_BF1SysSnsrVoltRaw = tmpRead.e_CnvnRes;
    }
    else if (((sint32)PMDB_ac_DW.is_c2_PMDB_ac) == 1)
    {
        /* During 'FILTERING': '<S52>:38' */
        if (PMDB_ac_B.Cnt_ms >= ((float32)KePMDB_Cnt_BF1SysSnsrSpikeThd))
        {
            /* Transition: '<S52>:40' */
            PMDB_ac_DW.is_c2_PMDB_ac = PMDB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S52>:37' */
            PMDB_ac_B.InputRaw0_p = tmpRead.e_CnvnRes;
            VePMDB_U_BF1SysSnsrVoltRaw = tmpRead.e_CnvnRes;
        }
        else
        {
            PMDB_ac_B.Cnt_ms++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S52>:37' */
        tmp = tmpRead.e_CnvnRes - PMDB_ac_B.InputRaw0_p;
        if ((tmp > KePMDB_U_BF1SysSnsrSpikeThd) || (tmp <
                (-KePMDB_U_BF1SysSnsrSpikeThd)))
        {
            /* Transition: '<S52>:39' */
            PMDB_ac_DW.is_c2_PMDB_ac = PMDB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S52>:38' */
            PMDB_ac_B.Cnt_ms = 0.0F;
        }
        else
        {
            VePMDB_U_BF1SysSnsrVoltRaw = tmpRead.e_CnvnRes;
            PMDB_ac_B.InputRaw0_p = tmpRead.e_CnvnRes;
        }
    }

    /* End of Chart: '<S43>/AntiSpkFil' */

    /* Switch: '<S58>/Switch' incorporates:
     *  Selector: '<S57>/Selector_R'
     */
    if (PMDB_ac_DW.UnitDelay_DSTATE_c)
    {
        /* Assignment: '<S59>/Assignment_y' incorporates:
         *  Switch: '<S45>/Switch'
         */
        VePMDB_U_BF1SysSnsrVolt = VePMDB_U_BF1SysSnsrVoltRaw;
    }
    else
    {
        /* Assignment: '<S59>/Assignment_y' incorporates:
         *  Constant: '<S55>/Calib'
         *  Product: '<S58>/Product'
         *  Selector: '<S57>/Selector_u'
         *  Selector: '<S57>/Selector_x'
         *  Sum: '<S58>/Difference'
         *  Sum: '<S58>/Sum'
         *  Switch: '<S45>/Switch'
         *  Switch: '<S58>/Switch_E'
         */
        VePMDB_U_BF1SysSnsrVolt = ((VePMDB_U_BF1SysSnsrVoltRaw -
            VePMDB_U_BF1SysSnsrVolt) * KePMDB_k_BF1SysSnsrFiltGx) +
            VePMDB_U_BF1SysSnsrVolt;
    }

    /* End of Switch: '<S58>/Switch' */

    /* SignalConversion generated from: '<S44>/Vector' */
    rtb_TmpSignalConversionAtVectorInport1_l[0] = VePMDB_U_BF1SysSnsrVoltRaw;
    rtb_TmpSignalConversionAtVectorInport1_l[1] = VePMDB_U_BF1SysSnsrVolt;

    /* Lookup_n-D: '<S44>/Vector' */
    for (i = 0; i < 2; i++)
    {
        rtb_Vector_c[i] = look1_iflf_binlca_19a
            (rtb_TmpSignalConversionAtVectorInport1_l[i], ((const float32 *)
              &(KxPMDB_U_BF1SysSnsrChartc[0])), ((const float32 *)
              &(KtPMDB_U_BF1SysSnsrChartc[0])), 7U);
    }

    /* End of Lookup_n-D: '<S44>/Vector' */

    /* Switch: '<S47>/Switch' incorporates:
     *  UnitDelay: '<S42>/VePMDB_U_BF1SysSnsrInit'
     */
    if (!rtb_TmpSignalConversionAtVeADFB_b_A2DF_o)
    {
        PMDB_ac_DW.VePMDB_U_BF1SysSnsrInit_DSTATE = rtb_Vector_c[1];
    }

    /* End of Switch: '<S47>/Switch' */

    /* Switch: '<S45>/Switch' incorporates:
     *  Constant: '<S49>/Calib'
     *  Constant: '<S51>/KeTAIB_T_OEXV_OutTempRcvry'
     *  Logic: '<S46>/Logical Operator'
     *  Switch: '<S46>/Switch'
     */
    if (KePMDB_b_BF1SysSnsrBypEnbl)
    {
        /* Outport: '<Root>/VePMDB_U_BF1_SysVolt' incorporates:
         *  Constant: '<S48>/Calib'
         *  SignalConversion: '<S41>/Signal Conversion'
         */
        (void)Rte_Write_VePMDB_U_BF1_SysVolt_Value(KePMDB_U_BF1SysSnsrByp);
    }
    else if ((KePMDB_b_BF1SysSnsrRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeADFB_b_A2DF_o)
    {
        /* Outport: '<Root>/VePMDB_U_BF1_SysVolt' incorporates:
         *  Constant: '<S50>/KeTAIB_T_OEXV_OutTempRcvry'
         *  SignalConversion: '<S41>/Signal Conversion'
         *  Switch: '<S46>/Switch'
         */
        (void)Rte_Write_VePMDB_U_BF1_SysVolt_Value(KePMDB_U_BF1SysSnsrRcvry);
    }
    else
    {
        /* Outport: '<Root>/VePMDB_U_BF1_SysVolt' incorporates:
         *  SignalConversion: '<S41>/Signal Conversion'
         *  Switch: '<S46>/Switch'
         *  UnitDelay: '<S42>/VePMDB_U_BF1SysSnsrInit'
         */
        (void)Rte_Write_VePMDB_U_BF1_SysVolt_Value
            (PMDB_ac_DW.VePMDB_U_BF1SysSnsrInit_DSTATE);
    }

    /* End of Switch: '<S45>/Switch' */

    /* Outport: '<Root>/VePMDB_b_BF1_SysVoltFA' incorporates:
     *  SignalConversion: '<S41>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_b_BF1_SysVoltFA_Value
        (rtb_TmpSignalConversionAtVeADFB_b_A2DF_o);

    /* End of Outputs for SubSystem: '<S30>/BF1' */
    /* End of Outputs for SubSystem: '<S2>/BF1' */
#endif

#if Rte_SysCon_Variant_PMDB_BF2_Presence

    /* Outputs for Atomic SubSystem: '<S2>/BF2' */
    /* Inport: '<Root>/VeADCR_U_Ubd2Monitor_VsADCR_e_CnvnRes' */
    /* Gateway: 5 ms/BF2/BF2/SigAcqnAndFilSys/AntiSpkFil */
    /* During: 5 ms/BF2/BF2/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_Ubd2Monitor_VsADCR_e_CnvnRes(&tmpRead_0);

    /* Outputs for Atomic SubSystem: '<S31>/BF2' */
    /* Chart: '<S62>/AntiSpkFil' incorporates:
     *  Constant: '<S72>/Calib'
     *  Constant: '<S73>/Calib'
     */
    if (((uint32)PMDB_ac_DW.is_active_c4_PMDB_ac) == 0U)
    {
        /* Entry: 5 ms/BF2/BF2/SigAcqnAndFilSys/AntiSpkFil */
        PMDB_ac_DW.is_active_c4_PMDB_ac = 1U;

        /* Entry Internal: 5 ms/BF2/BF2/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S71>:8' */
        PMDB_ac_DW.is_c4_PMDB_ac = PMDB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S71>:37' */
        PMDB_ac_B.InputRaw0_hq = tmpRead_0.e_CnvnRes;
        VePMDB_U_BF2SysSnsrVoltRaw = tmpRead_0.e_CnvnRes;
    }
    else if (((sint32)PMDB_ac_DW.is_c4_PMDB_ac) == 1)
    {
        /* During 'FILTERING': '<S71>:38' */
        if (PMDB_ac_B.Cnt_j >= ((float32)KePMDB_Cnt_BF2SysSnsrSpikeThd))
        {
            /* Transition: '<S71>:40' */
            PMDB_ac_DW.is_c4_PMDB_ac = PMDB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S71>:37' */
            PMDB_ac_B.InputRaw0_hq = tmpRead_0.e_CnvnRes;
            VePMDB_U_BF2SysSnsrVoltRaw = tmpRead_0.e_CnvnRes;
        }
        else
        {
            PMDB_ac_B.Cnt_j++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S71>:37' */
        tmp = tmpRead_0.e_CnvnRes - PMDB_ac_B.InputRaw0_hq;
        if ((tmp > KePMDB_U_BF2SysSnsrSpikeThd) || (tmp <
                (-KePMDB_U_BF2SysSnsrSpikeThd)))
        {
            /* Transition: '<S71>:39' */
            PMDB_ac_DW.is_c4_PMDB_ac = PMDB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S71>:38' */
            PMDB_ac_B.Cnt_j = 0.0F;
        }
        else
        {
            VePMDB_U_BF2SysSnsrVoltRaw = tmpRead_0.e_CnvnRes;
            PMDB_ac_B.InputRaw0_hq = tmpRead_0.e_CnvnRes;
        }
    }

    /* End of Chart: '<S62>/AntiSpkFil' */

    /* Switch: '<S77>/Switch' incorporates:
     *  Selector: '<S76>/Selector_R'
     */
    if (PMDB_ac_DW.UnitDelay_DSTATE_c)
    {
        /* Assignment: '<S78>/Assignment_y' incorporates:
         *  Switch: '<S64>/Switch'
         */
        VePMDB_U_BF2SysSnsrVolt = VePMDB_U_BF2SysSnsrVoltRaw;
    }
    else
    {
        /* Assignment: '<S78>/Assignment_y' incorporates:
         *  Constant: '<S74>/Calib'
         *  Product: '<S77>/Product'
         *  Selector: '<S76>/Selector_u'
         *  Selector: '<S76>/Selector_x'
         *  Sum: '<S77>/Difference'
         *  Sum: '<S77>/Sum'
         *  Switch: '<S64>/Switch'
         *  Switch: '<S77>/Switch_E'
         */
        VePMDB_U_BF2SysSnsrVolt = ((VePMDB_U_BF2SysSnsrVoltRaw -
            VePMDB_U_BF2SysSnsrVolt) * KePMDB_k_BF2SysSnsrFiltGx) +
            VePMDB_U_BF2SysSnsrVolt;
    }

    /* End of Switch: '<S77>/Switch' */

    /* SignalConversion generated from: '<S63>/Vector' */
    rtb_TmpSignalConversionAtVectorInport1_l[0] = VePMDB_U_BF2SysSnsrVoltRaw;
    rtb_TmpSignalConversionAtVectorInport1_l[1] = VePMDB_U_BF2SysSnsrVolt;

    /* Lookup_n-D: '<S63>/Vector' */
    for (i = 0; i < 2; i++)
    {
        rtb_Vector_p[i] = look1_iflf_binlca_19a
            (rtb_TmpSignalConversionAtVectorInport1_l[i], ((const float32 *)
              &(KxPMDB_U_BF2SysSnsrChartc[0])), ((const float32 *)
              &(KtPMDB_U_BF2SysSnsrChartc[0])), 7U);
    }

    /* End of Lookup_n-D: '<S63>/Vector' */

    /* Switch: '<S66>/Switch' incorporates:
     *  UnitDelay: '<S61>/VePMDB_U_BF2SysSnsrInit'
     */
    if (!rtb_TmpSignalConversionAtVeADFB_b_A2DF_o)
    {
        PMDB_ac_DW.VePMDB_U_BF2SysSnsrInit_DSTATE = rtb_Vector_p[1];
    }

    /* End of Switch: '<S66>/Switch' */

    /* Switch: '<S64>/Switch' incorporates:
     *  Constant: '<S68>/Calib'
     *  Constant: '<S70>/KeTAIB_b_OEXV_OutTempRcvryEnbl'
     *  Logic: '<S65>/Logical Operator'
     *  Switch: '<S65>/Switch'
     */
    if (KePMDB_b_BF2SysSnsrBypEnbl)
    {
        /* Outport: '<Root>/VePMDB_U_BF2_SysVolt' incorporates:
         *  Constant: '<S67>/Calib'
         *  SignalConversion: '<S60>/Signal Conversion'
         */
        (void)Rte_Write_VePMDB_U_BF2_SysVolt_Value(KePMDB_U_BF2SysSnsrByp);
    }
    else if ((KePMDB_b_BF2SysSnsrRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeADFB_b_A2DF_o)
    {
        /* Outport: '<Root>/VePMDB_U_BF2_SysVolt' incorporates:
         *  Constant: '<S69>/KeTAIB_T_OEXV_OutTempRcvry'
         *  SignalConversion: '<S60>/Signal Conversion'
         *  Switch: '<S65>/Switch'
         */
        (void)Rte_Write_VePMDB_U_BF2_SysVolt_Value(KePMDB_U_BF2SysSnsrRcvry);
    }
    else
    {
        /* Outport: '<Root>/VePMDB_U_BF2_SysVolt' incorporates:
         *  SignalConversion: '<S60>/Signal Conversion'
         *  Switch: '<S65>/Switch'
         *  UnitDelay: '<S61>/VePMDB_U_BF2SysSnsrInit'
         */
        (void)Rte_Write_VePMDB_U_BF2_SysVolt_Value
            (PMDB_ac_DW.VePMDB_U_BF2SysSnsrInit_DSTATE);
    }

    /* End of Switch: '<S64>/Switch' */

    /* Outport: '<Root>/VePMDB_b_BF2_SysVoltFA' incorporates:
     *  SignalConversion: '<S60>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_b_BF2_SysVoltFA_Value
        (rtb_TmpSignalConversionAtVeADFB_b_A2DF_o);

    /* End of Outputs for SubSystem: '<S31>/BF2' */
    /* End of Outputs for SubSystem: '<S2>/BF2' */
#endif

    /* SignalConversion generated from: '<S2>/VeDIOR_b_BpcmWkDigInpImdtVal' incorporates:
     *  Inport: '<Root>/VeADCR_U_BpcmWakeup_VsADCR_e_CnvnRes'
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  SignalConversion generated from: '<S2>/VeDFIR_b_IsDiagGlobalConditionsValid'
     *  SignalConversion generated from: '<S2>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  SignalConversion generated from: '<S2>/VeDIOR_b_BpcmWkDigInpFiltdVal'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_CtrlModWkUpCktHi'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_CtrlModWkUpCktLo'
     */
#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

    /* Outputs for Atomic SubSystem: '<S2>/BPCMWakeUp' */
    /* SignalConversion generated from: '<S2>/VeDIOR_b_BpcmWkDigInpImdtVal' incorporates:
     *  Inport: '<Root>/VeDIOR_b_BpcmWkDigInpImdtVal_VeDIOR_b_DigInpImdtVal'
     */
    (void)Rte_Read_VeDIOR_b_BpcmWkDigInpImdtVal_VeDIOR_b_DigInpImdtVal
        (&rtb_TmpSignalConversionAtVeDIOR_b_BpcmWk);

    /* SignalConversion generated from: '<S2>/VeDIOR_b_BpcmWkDigInpFiltdVal' incorporates:
     *  Inport: '<Root>/VeDIOR_b_BpcmWkDigInpFiltdVal_VeDIOR_b_DigInpFiltdVal'
     */
    (void)Rte_Read_VeDIOR_b_BpcmWkDigInpFiltdVal_VeDIOR_b_DigInpFiltdVal
        (&rtb_TmpSignalConversionAtVeDIOR_b_Bpcm_h);

    /* SignalConversion generated from: '<S2>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* SignalConversion generated from: '<S2>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_CtrlModWkUpCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CtrlModWkUpCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CtrlModWkUpCktHi_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_CtrlModWkUpCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CtrlModWkUpCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CtrlModWkUpCktLo_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_c);

    /* Outputs for Atomic SubSystem: '<S32>/BPCMWakeUp' */

    /* RelationalOperator: '<S95>/Relational Operator3' incorporates:
     *  Constant: '<S95>/Constant3'
     *  S-Function (sfix_bitop): '<S95>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U);

    /* Logic: '<S87>/Logical Operator' incorporates:
     *  Logic: '<S87>/Logical Operator1'
     *  Logic: '<S88>/Logical Operator'
     */
    rtb_RelationalOperator1_c = (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
        (!rtb_TmpSignalConversionAtVeADFB_b_A2DF_o));

    /* Logic: '<S95>/Logical1' incorporates:
     *  Constant: '<S93>/Calib'
     *  Constant: '<S94>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S95>/Constant1'
     *  Logic: '<S87>/Logical Operator'
     *  Logic: '<S95>/Logical Operator'
     *  Logic: '<S95>/Logical10'
     *  Logic: '<S95>/Logical12'
     *  RelationalOperator: '<S95>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S95>/Bitwise Operator3'
     */
    rtb_Logical1 = ((rtb_RelationalOperator1_c &&
                     (KePMDB_b_STBDiagEnblBpcmWakeup)) &&
                    ((!KePMDB_b_LtchEnblBpcmWakeupSTB) || (((((uint32)
                         rtb_TmpSignalConversionAtVeDMAB_y_Status) & 1U) == 0U) ||
                      (!rtb_RelationalOperator3))));

    /* End of Outputs for SubSystem: '<S32>/BPCMWakeUp' */
    /* Gateway: 5 ms/BPCMWakeUp/BPCMWakeUp/Analog Input/SigAcqnAndFilSys/AntiSpkFil */
    /* During: 5 ms/BPCMWakeUp/BPCMWakeUp/Analog Input/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_BpcmWakeup_VsADCR_e_CnvnRes(&tmpRead_5);

    /* Outputs for Atomic SubSystem: '<S32>/BPCMWakeUp' */
    /* Chart: '<S86>/AntiSpkFil' incorporates:
     *  Constant: '<S144>/KePMDB_Cnt_BpcmWakeupSpikeThd'
     *  Constant: '<S145>/KePMDB_U_BpcmWakeupSpikeThd'
     *  Inport: '<Root>/VeADCR_U_BpcmWakeup_VsADCR_e_CnvnRes'
     */
    if (((uint32)PMDB_ac_DW.is_active_c6_PMDB_ac) == 0U)
    {
        /* Entry: 5 ms/BPCMWakeUp/BPCMWakeUp/Analog Input/SigAcqnAndFilSys/AntiSpkFil */
        PMDB_ac_DW.is_active_c6_PMDB_ac = 1U;

        /* Entry Internal: 5 ms/BPCMWakeUp/BPCMWakeUp/Analog Input/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S143>:8' */
        PMDB_ac_DW.is_c6_PMDB_ac = PMDB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S143>:37' */
        PMDB_ac_B.InputRaw0_de = tmpRead_5.e_CnvnRes;
        VePMDB_U_BpcmWakeupVoltRaw = tmpRead_5.e_CnvnRes;
    }
    else if (((sint32)PMDB_ac_DW.is_c6_PMDB_ac) == 1)
    {
        /* During 'FILTERING': '<S143>:38' */
        if (PMDB_ac_B.Cnt_mv >= ((float32)KePMDB_Cnt_BpcmWakeupSpikeThd))
        {
            /* Transition: '<S143>:40' */
            PMDB_ac_DW.is_c6_PMDB_ac = PMDB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S143>:37' */
            PMDB_ac_B.InputRaw0_de = tmpRead_5.e_CnvnRes;
            VePMDB_U_BpcmWakeupVoltRaw = tmpRead_5.e_CnvnRes;
        }
        else
        {
            PMDB_ac_B.Cnt_mv++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S143>:37' */
        tmp = tmpRead_5.e_CnvnRes - PMDB_ac_B.InputRaw0_de;
        if ((tmp > KePMDB_U_BpcmWakeupSpikeThd) || (tmp <
                (-KePMDB_U_BpcmWakeupSpikeThd)))
        {
            /* Transition: '<S143>:39' */
            PMDB_ac_DW.is_c6_PMDB_ac = PMDB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S143>:38' */
            PMDB_ac_B.Cnt_mv = 0.0F;
        }
        else
        {
            VePMDB_U_BpcmWakeupVoltRaw = tmpRead_5.e_CnvnRes;
            PMDB_ac_B.InputRaw0_de = tmpRead_5.e_CnvnRes;
        }
    }

    /* End of Chart: '<S86>/AntiSpkFil' */
    /* End of Outputs for SubSystem: '<S32>/BPCMWakeUp' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&rtb_NOT4);

    /* Outputs for Atomic SubSystem: '<S32>/BPCMWakeUp' */
    /* RelationalOperator: '<S87>/Relational Operator2' incorporates:
     *  Constant: '<S92>/Calib'
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = (VePMDB_U_BpcmWakeupVoltRaw >
        KePMDB_U_STBCktHiFltLimBpcmWakeup);

    /* Logic: '<S89>/NOT4' */
    rtb_NOT4 = (rtb_NOT4 || rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outputs for Atomic SubSystem: '<S95>/EdgeFalling1' */
    /* Logic: '<S97>/AND' incorporates:
     *  Logic: '<S97>/OR1'
     *  UnitDelay: '<S97>/Unit Delay'
     */
    rtb_AND_j = ((!rtb_RelationalOperator3) && (PMDB_ac_DW.UnitDelay_DSTATE_cs));

    /* Update for UnitDelay: '<S97>/Unit Delay' */
    PMDB_ac_DW.UnitDelay_DSTATE_cs = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S95>/EdgeFalling1' */

    /* Logic: '<S95>/Logical5' */
    rtb_AND_j = (rtb_NOT4 || rtb_AND_j);

    /* Outputs for Atomic SubSystem: '<S96>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S96>/Counter Reset  Enabled ' */
    /* Switch: '<S103>/Switch1' incorporates:
     *  Logic: '<S96>/Fail Counter Reset'
     *  Logic: '<S96>/NOT6'
     *  Switch: '<S103>/Switch2'
     *  Switch: '<S104>/Switch1'
     *  UnitDelay: '<S96>/Unit Delay'
     *  UnitDelay: '<S96>/Unit Delay1'
     */
    if ((rtb_AND_j || (PMDB_ac_DW.UnitDelay_DSTATE_e)) ||
            (PMDB_ac_DW.UnitDelay1_DSTATE))
    {
        /* Switch: '<S103>/Switch1' incorporates:
         *  Constant: '<S103>/Constant Value2'
         */
        VePMDB_Cnt_STBFailLimBpcmWakeup = 0U;

        /* Switch: '<S104>/Switch1' incorporates:
         *  Constant: '<S104>/Constant Value2'
         */
        VePMDB_Cnt_STBSmplLimBpcmWakeup = 0U;
    }
    else
    {
        if (rtb_Logical1 && rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)
        {
            /* Switch: '<S103>/Switch1' incorporates:
             *  Constant: '<S103>/Constant Value1'
             *  Sum: '<S103>/Subtraction'
             *  Switch: '<S103>/Switch2'
             *  UnitDelay: '<S103>/Unit Delay'
             */
            VePMDB_Cnt_STBFailLimBpcmWakeup = (uint16)(((uint32)
                VePMDB_Cnt_STBFailLimBpcmWakeup) + 1U);
        }

        /* Switch: '<S104>/Switch2' */
        if (rtb_Logical1)
        {
            /* Switch: '<S104>/Switch1' incorporates:
             *  Constant: '<S104>/Constant Value1'
             *  Sum: '<S104>/Subtraction'
             *  Switch: '<S104>/Switch2'
             *  UnitDelay: '<S104>/Unit Delay'
             */
            VePMDB_Cnt_STBSmplLimBpcmWakeup = (uint16)(((uint32)
                VePMDB_Cnt_STBSmplLimBpcmWakeup) + 1U);
        }

        /* End of Switch: '<S104>/Switch2' */
    }

    /* End of Switch: '<S103>/Switch1' */
    /* End of Outputs for SubSystem: '<S96>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S96>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S96>/Greater Than or Equal ' incorporates:
     *  Constant: '<S90>/Calib'
     */
    PMDB_ac_DW.UnitDelay1_DSTATE = (VePMDB_Cnt_STBFailLimBpcmWakeup >=
        KePMDB_Cnt_STBFailLimBpcmWakeup);

    /* Logic: '<S96>/NOT5' incorporates:
     *  Constant: '<S91>/Calib'
     *  Logic: '<S96>/NOT3'
     *  RelationalOperator: '<S96>/Less Than  or Equal'
     */
    rtb_RelationalOperator3 = ((VePMDB_Cnt_STBSmplLimBpcmWakeup >=
        KePMDB_Cnt_STBSmplLimBpcmWakeup) && (!PMDB_ac_DW.UnitDelay1_DSTATE));

    /* Switch: '<S109>/Switch1' incorporates:
     *  Constant: '<S102>/Constant Value'
     *  DataStoreWrite: '<S87>/Data Store Write1'
     *  Switch: '<S108>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        PMDB_ac_DW.NePMDB_Cnt_BpcmWakeupSTB_MFOP = 0U;
    }
    else
    {
        if (rtb_RelationalOperator3)
        {
            /* MinMax: '<S102>/Minimum2' incorporates:
             *  DataStoreRead: '<S87>/Data Store Read1'
             *  Switch: '<S108>/Switch1'
             */
            if (VePMDB_Cnt_STBFailLimBpcmWakeup >
                    PMDB_ac_DW.NePMDB_Cnt_BpcmWakeupSTB_MFOP)
            {
                /* DataStoreWrite: '<S87>/Data Store Write1' incorporates:
                 *  Switch: '<S108>/Switch1'
                 */
                PMDB_ac_DW.NePMDB_Cnt_BpcmWakeupSTB_MFOP =
                    VePMDB_Cnt_STBFailLimBpcmWakeup;
            }

            /* End of MinMax: '<S102>/Minimum2' */
        }
    }

    /* End of Switch: '<S109>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S95>/Fail' */
    PMDB_ac_Fail(PMDB_ac_DW.UnitDelay1_DSTATE, &PMDB_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S95>/Fail' */

    /* Outputs for Enabled SubSystem: '<S95>/Init' */
    PMDB_ac_Init_e(rtb_AND_j, &PMDB_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S95>/Init' */

    /* Outputs for Enabled SubSystem: '<S95>/Pass' */
    PMDB_ac_Pass(rtb_RelationalOperator3, &PMDB_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S95>/Pass' */

    /* RelationalOperator: '<S95>/Relational Operator' incorporates:
     *  Constant: '<S98>/Constant'
     *  Merge: '<S95>/Merge'
     */
    VePMDB_b_BpcmWakeupSTB_FltDtct = (((uint32)PMDB_ac_B.Merge) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S115>/Relational Operator3' incorporates:
     *  Constant: '<S115>/Constant3'
     *  S-Function (sfix_bitop): '<S115>/Bitwise Operator2'
     */
    rtb_AND_j = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Stat_c) & 64U) ==
                 0U);

    /* Outputs for Atomic SubSystem: '<S115>/EdgeFalling1' */
    /* Logic: '<S115>/Logical Operator' incorporates:
     *  Logic: '<S117>/OR1'
     */
    rtb_AND = !rtb_AND_j;

    /* End of Outputs for SubSystem: '<S115>/EdgeFalling1' */

    /* Logic: '<S115>/Logical1' incorporates:
     *  Constant: '<S113>/Calib'
     *  Constant: '<S114>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S115>/Constant1'
     *  Logic: '<S115>/Logical Operator'
     *  Logic: '<S115>/Logical10'
     *  Logic: '<S115>/Logical12'
     *  Logic: '<S88>/Logical Operator'
     *  RelationalOperator: '<S115>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S115>/Bitwise Operator3'
     */
    rtb_Logical1 = ((rtb_RelationalOperator1_c &&
                     (KePMDB_b_STGDiagEnbl_BpcmWakeup)) &&
                    ((!KePMDB_b_LtchEnblBpcmWakeupSTG) || (((((uint32)
                         rtb_TmpSignalConversionAtVeDMAB_y_Stat_c) & 1U) == 0U) ||
                      rtb_AND)));

    /* RelationalOperator: '<S88>/Relational Operator1' incorporates:
     *  Constant: '<S112>/Calib'
     */
    rtb_RelationalOperator1_c = (VePMDB_U_BpcmWakeupVoltRaw <
        KePMDB_U_STGCktLowFltLim_BpcmWakeup);

    /* Outputs for Atomic SubSystem: '<S115>/EdgeFalling1' */
    /* Logic: '<S117>/AND' incorporates:
     *  UnitDelay: '<S117>/Unit Delay'
     */
    rtb_AND = (rtb_AND && (PMDB_ac_DW.UnitDelay_DSTATE_hz));

    /* Update for UnitDelay: '<S117>/Unit Delay' */
    PMDB_ac_DW.UnitDelay_DSTATE_hz = rtb_AND_j;

    /* End of Outputs for SubSystem: '<S115>/EdgeFalling1' */

    /* Logic: '<S115>/Logical5' */
    rtb_NOT4 = (rtb_NOT4 || rtb_AND);

    /* UnitDelay: '<S116>/Unit Delay1' incorporates:
     *  UnitDelay: '<S96>/Unit Delay'
     */
    PMDB_ac_DW.UnitDelay_DSTATE_e = PMDB_ac_DW.UnitDelay1_DSTATE_f;

    /* Outputs for Atomic SubSystem: '<S116>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S116>/Counter Reset  Enabled ' */
    /* Switch: '<S123>/Switch1' incorporates:
     *  Logic: '<S116>/Fail Counter Reset'
     *  Logic: '<S116>/NOT6'
     *  Switch: '<S123>/Switch2'
     *  Switch: '<S124>/Switch1'
     *  UnitDelay: '<S116>/Unit Delay'
     *  UnitDelay: '<S96>/Unit Delay'
     */
    if ((rtb_NOT4 || (PMDB_ac_DW.UnitDelay_DSTATE_it)) ||
            (PMDB_ac_DW.UnitDelay_DSTATE_e))
    {
        /* Switch: '<S123>/Switch1' incorporates:
         *  Constant: '<S123>/Constant Value2'
         */
        VePMDB_Cnt_STGFailLimBpcmWakeup = 0U;

        /* Switch: '<S124>/Switch1' incorporates:
         *  Constant: '<S124>/Constant Value2'
         */
        VePMDB_Cnt_STGSmplLimBpcmWakeup = 0U;
    }
    else
    {
        if (rtb_Logical1 && rtb_RelationalOperator1_c)
        {
            /* Switch: '<S123>/Switch1' incorporates:
             *  Constant: '<S123>/Constant Value1'
             *  Sum: '<S123>/Subtraction'
             *  Switch: '<S123>/Switch2'
             *  UnitDelay: '<S123>/Unit Delay'
             */
            VePMDB_Cnt_STGFailLimBpcmWakeup = (uint16)(((uint32)
                VePMDB_Cnt_STGFailLimBpcmWakeup) + 1U);
        }

        /* Switch: '<S124>/Switch2' */
        if (rtb_Logical1)
        {
            /* Switch: '<S124>/Switch1' incorporates:
             *  Constant: '<S124>/Constant Value1'
             *  Sum: '<S124>/Subtraction'
             *  Switch: '<S124>/Switch2'
             *  UnitDelay: '<S124>/Unit Delay'
             */
            VePMDB_Cnt_STGSmplLimBpcmWakeup = (uint16)(((uint32)
                VePMDB_Cnt_STGSmplLimBpcmWakeup) + 1U);
        }

        /* End of Switch: '<S124>/Switch2' */
    }

    /* End of Switch: '<S123>/Switch1' */
    /* End of Outputs for SubSystem: '<S116>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S116>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S116>/Greater Than or Equal ' incorporates:
     *  Constant: '<S110>/Calib'
     */
    PMDB_ac_DW.UnitDelay1_DSTATE_f = (((float32)VePMDB_Cnt_STGFailLimBpcmWakeup)
        >= KePMDB_Cnt_STGFailLimBpcmWakeup);

    /* Logic: '<S116>/NOT5' incorporates:
     *  Constant: '<S111>/Calib'
     *  Logic: '<S116>/NOT3'
     *  RelationalOperator: '<S116>/Less Than  or Equal'
     */
    PMDB_ac_DW.UnitDelay_DSTATE_it = ((((float32)VePMDB_Cnt_STGSmplLimBpcmWakeup)
        >= KePMDB_Cnt_STGSmplLimBpcmWakeup) && (!PMDB_ac_DW.UnitDelay1_DSTATE_f));

    /* Switch: '<S129>/Switch1' incorporates:
     *  Constant: '<S122>/Constant Value'
     *  DataStoreWrite: '<S88>/Data Store Write1'
     *  Switch: '<S128>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        PMDB_ac_DW.NePMDB_Cnt_BpcmWakeupSTG_MFOP = 0U;
    }
    else
    {
        if (PMDB_ac_DW.UnitDelay_DSTATE_it)
        {
            /* MinMax: '<S122>/Minimum2' incorporates:
             *  DataStoreRead: '<S88>/Data Store Read1'
             *  Switch: '<S128>/Switch1'
             */
            if (VePMDB_Cnt_STGFailLimBpcmWakeup >
                    PMDB_ac_DW.NePMDB_Cnt_BpcmWakeupSTG_MFOP)
            {
                /* DataStoreWrite: '<S88>/Data Store Write1' incorporates:
                 *  Switch: '<S128>/Switch1'
                 */
                PMDB_ac_DW.NePMDB_Cnt_BpcmWakeupSTG_MFOP =
                    VePMDB_Cnt_STGFailLimBpcmWakeup;
            }

            /* End of MinMax: '<S122>/Minimum2' */
        }
    }

    /* End of Switch: '<S129>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S115>/Fail' */
    PMDB_ac_Fail(PMDB_ac_DW.UnitDelay1_DSTATE_f, &PMDB_ac_B.Merge_p);

    /* End of Outputs for SubSystem: '<S115>/Fail' */

    /* Outputs for Enabled SubSystem: '<S115>/Init' */
    PMDB_ac_Init_e(rtb_NOT4, &PMDB_ac_B.Merge_p);

    /* End of Outputs for SubSystem: '<S115>/Init' */

    /* Outputs for Enabled SubSystem: '<S115>/Pass' */
    PMDB_ac_Pass(PMDB_ac_DW.UnitDelay_DSTATE_it, &PMDB_ac_B.Merge_p);

    /* End of Outputs for SubSystem: '<S115>/Pass' */

    /* RelationalOperator: '<S115>/Relational Operator' incorporates:
     *  Constant: '<S118>/Constant'
     *  Merge: '<S115>/Merge'
     */
    VePMDB_b_BpcmWakeupSTG_FltDtct = (((uint32)PMDB_ac_B.Merge_p) ==
        CeDFIB_e_Fail);

    /* Logic: '<S84>/Logical Operator' */
    rtb_TmpSignalConversionAtVeDFIR_b_PostCo = (rtb_RelationalOperator1_c ||
        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* Logic: '<S84>/Logical Operator1' */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag = (((VePMDB_b_BpcmWakeupSTG_FltDtct)
        || (VePMDB_b_BpcmWakeupSTB_FltDtct)) ||
        rtb_TmpSignalConversionAtVeADFB_b_A2DF_o);

    /* Outputs for Atomic SubSystem: '<S85>/Hysteresis_1' */
    /* Switch: '<S130>/Switch1' incorporates:
     *  Constant: '<S130>/Constant Value'
     *  Constant: '<S131>/KeDMIB_e_PadLvrStsRcvry'
     *  Constant: '<S132>/KeDMIB_e_PadLvrStsRcvry'
     *  RelationalOperator: '<S130>/Greater  Than'
     *  RelationalOperator: '<S130>/Greater  Than1'
     *  UnitDelay: '<S130>/Unit Delay'
     */
    if (VePMDB_U_BpcmWakeupVoltRaw >= KePMDB_U_BpcmWakeupThresholdHigh)
    {
        PMDB_ac_DW.UnitDelay_DSTATE_l = true;
    }
    else
    {
        PMDB_ac_DW.UnitDelay_DSTATE_l = ((VePMDB_U_BpcmWakeupVoltRaw >
            KePMDB_U_BpcmWakeupThresholdLow) && (PMDB_ac_DW.UnitDelay_DSTATE_l));
    }

    /* End of Switch: '<S130>/Switch1' */
    /* End of Outputs for SubSystem: '<S85>/Hysteresis_1' */

    /* Switch: '<S136>/Switch' incorporates:
     *  Logic: '<S85>/Logical Operator1'
     */
    if ((!rtb_TmpSignalConversionAtVeDFIR_b_PostCo) &&
            (!rtb_TmpSignalConversionAtVeDFIR_b_IsDiag))
    {
        /* Switch: '<S140>/Switch' incorporates:
         *  Constant: '<S139>/Calib'
         */
        if (KePMDB_b_BPCMWakeUpPolarInvEnbl)
        {
            /* Switch: '<S136>/Switch' incorporates:
             *  Logic: '<S134>/Logical Operator'
             *  Switch: '<S140>/Switch'
             *  UnitDelay: '<S130>/Unit Delay'
             */
            PMDB_ac_DW.UnitDelay1_DSTATE_j = !PMDB_ac_DW.UnitDelay_DSTATE_l;
        }
        else
        {
            /* Switch: '<S136>/Switch' incorporates:
             *  Switch: '<S140>/Switch'
             *  UnitDelay: '<S130>/Unit Delay'
             */
            PMDB_ac_DW.UnitDelay1_DSTATE_j = PMDB_ac_DW.UnitDelay_DSTATE_l;
        }

        /* End of Switch: '<S140>/Switch' */
    }

    /* End of Switch: '<S136>/Switch' */

    /* Switch: '<S133>/Switch' incorporates:
     *  Constant: '<S137>/KeDMIB_b_PadLvrStsBypEnbl'
     *  Constant: '<S142>/KeDMIB_b_PadLvrStsRcvryEnbl'
     *  Logic: '<S135>/Logical Operator'
     *  Switch: '<S135>/Switch'
     */
    if (KePMDB_b_BpcmWakeupBypEnbl)
    {
        /* Switch: '<S133>/Switch' incorporates:
         *  Constant: '<S138>/KeDMIB_e_PadLvrStsByp'
         */
        VePMDB_b_BpcmWakeup = KePMDB_b_BpcmWakeupByp;
    }
    else if ((KePMDB_b_BpcmWakeupRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)
    {
        /* Switch: '<S135>/Switch' incorporates:
         *  Constant: '<S141>/KePMDB_b_BpcmWakeupRcvry'
         *  Switch: '<S133>/Switch'
         */
        VePMDB_b_BpcmWakeup = KePMDB_b_BpcmWakeupRcvry;
    }
    else
    {
        /* Switch: '<S133>/Switch' incorporates:
         *  Switch: '<S135>/Switch'
         */
        VePMDB_b_BpcmWakeup = PMDB_ac_DW.UnitDelay1_DSTATE_j;
    }

    /* End of Switch: '<S133>/Switch' */

    /* Switch: '<S149>/Switch' incorporates:
     *  Selector: '<S148>/Selector_R'
     */
    if (PMDB_ac_DW.UnitDelay_DSTATE_c)
    {
        /* Assignment: '<S150>/Assignment_y' incorporates:
         *  Switch: '<S149>/Switch'
         */
        VePMDB_U_BpcmWkpVolt = VePMDB_U_BpcmWakeupVoltRaw;
    }
    else
    {
        /* Assignment: '<S150>/Assignment_y' incorporates:
         *  Constant: '<S146>/Calib'
         *  Product: '<S149>/Product'
         *  Selector: '<S148>/Selector_u'
         *  Selector: '<S148>/Selector_x'
         *  Sum: '<S149>/Difference'
         *  Sum: '<S149>/Sum'
         *  Switch: '<S149>/Switch'
         *  Switch: '<S149>/Switch_E'
         */
        VePMDB_U_BpcmWkpVolt = ((VePMDB_U_BpcmWakeupVoltRaw -
            VePMDB_U_BpcmWkpVolt) * KePMDB_k_BpcmWakeupFiltGx) +
            VePMDB_U_BpcmWkpVolt;
    }

    /* End of Switch: '<S149>/Switch' */

    /* Outport: '<Root>/VePMDB_b_BpcmWakeupFA' incorporates:
     *  SignalConversion: '<S80>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_b_BpcmWakeupFA_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* Outport: '<Root>/VePMDB_U_BpcmWakeupVolt' incorporates:
     *  SignalConversion: '<S80>/Signal Conversion2'
     */
    (void)Rte_Write_VePMDB_U_BpcmWakeupVolt_Value(VePMDB_U_BpcmWkpVolt);

    /* Switch: '<S152>/Switch' incorporates:
     *  Constant: '<S157>/Calib'
     *  Constant: '<S158>/Calib'
     *  Switch: '<S159>/Switch'
     */
    if (KePMDB_b_BpcmDigWakeupBypEnbl)
    {
        /* Switch: '<S152>/Switch' incorporates:
         *  Constant: '<S156>/Calib'
         */
        for (i = 0; i < 2; i++)
        {
            rtb_Switch_ij[i] = KePMDB_b_BpcmDigWakeupByp;
        }
    }
    else if (KePMDB_b_BPCMWakeUpDigInpPolarInvEnbl)
    {
        /* Switch: '<S152>/Switch' incorporates:
         *  Logic: '<S153>/Logical Operator'
         *  Switch: '<S159>/Switch'
         */
        rtb_Switch_ij[0] = !rtb_TmpSignalConversionAtVeDIOR_b_BpcmWk;
        rtb_Switch_ij[1] = !rtb_TmpSignalConversionAtVeDIOR_b_Bpcm_h;
    }
    else
    {
        /* Switch: '<S152>/Switch' incorporates:
         *  Switch: '<S159>/Switch'
         */
        rtb_Switch_ij[0] = rtb_TmpSignalConversionAtVeDIOR_b_BpcmWk;
        rtb_Switch_ij[1] = rtb_TmpSignalConversionAtVeDIOR_b_Bpcm_h;
    }

    /* End of Switch: '<S152>/Switch' */

    /* Switch: '<S155>/Switch' incorporates:
     *  Constant: '<S154>/Calib'
     */
    if (KePMDB_b_BPCMWakeUpFiltdEnbl)
    {
        /* Switch: '<S155>/Switch' */
        VePMDB_b_SmtPwrPanWakeup = rtb_Switch_ij[1];
    }
    else
    {
        /* Switch: '<S155>/Switch' */
        VePMDB_b_SmtPwrPanWakeup = rtb_Switch_ij[0];
    }

    /* End of Switch: '<S155>/Switch' */

    /* Switch: '<S83>/Switch' incorporates:
     *  Constant: '<S82>/Calib'
     */
    if (KePMDB_b_SmtPwrPanSrcSeln)
    {
        /* Outport: '<Root>/VePMDB_b_SmtPwrPanWakeUp' */
        (void)Rte_Write_VePMDB_b_SmtPwrPanWakeUp_Value(VePMDB_b_BpcmWakeup);
    }
    else
    {
        /* Outport: '<Root>/VePMDB_b_SmtPwrPanWakeUp' */
        (void)Rte_Write_VePMDB_b_SmtPwrPanWakeUp_Value(VePMDB_b_SmtPwrPanWakeup);
    }

    /* End of Switch: '<S83>/Switch' */

    /* Update for UnitDelay: '<S96>/Unit Delay' */
    PMDB_ac_DW.UnitDelay_DSTATE_e = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S32>/BPCMWakeUp' */
    /* End of Outputs for SubSystem: '<S2>/BPCMWakeUp' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeDIOR_b_BpcmWkDigInpImdtVal' */
#if Rte_SysCon_Variant_PMDB_HB_Presence

    /* Outputs for Atomic SubSystem: '<S2>/HB' */
    /* Inport: '<Root>/VeADCR_U_Ubd3Monitor_VsADCR_e_CnvnRes' */
    /* Gateway: 5 ms/HB/HB/SigAcqnAndFilSys/AntiSpkFil */
    /* During: 5 ms/HB/HB/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_Ubd3Monitor_VsADCR_e_CnvnRes(&tmpRead_1);

    /* Outputs for Atomic SubSystem: '<S34>/HB' */
    /* Chart: '<S172>/AntiSpkFil' incorporates:
     *  Constant: '<S182>/Calib'
     *  Constant: '<S183>/Calib'
     */
    if (((uint32)PMDB_ac_DW.is_active_c9_PMDB_ac) == 0U)
    {
        /* Entry: 5 ms/HB/HB/SigAcqnAndFilSys/AntiSpkFil */
        PMDB_ac_DW.is_active_c9_PMDB_ac = 1U;

        /* Entry Internal: 5 ms/HB/HB/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S181>:8' */
        PMDB_ac_DW.is_c9_PMDB_ac = PMDB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S181>:37' */
        PMDB_ac_B.InputRaw0_h = tmpRead_1.e_CnvnRes;
        VePMDB_U_HBSysSnsrVoltRaw = tmpRead_1.e_CnvnRes;
    }
    else if (((sint32)PMDB_ac_DW.is_c9_PMDB_ac) == 1)
    {
        /* During 'FILTERING': '<S181>:38' */
        if (PMDB_ac_B.Cnt_c >= ((float32)KePMDB_Cnt_HBSysSnsrSpikeThd))
        {
            /* Transition: '<S181>:40' */
            PMDB_ac_DW.is_c9_PMDB_ac = PMDB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S181>:37' */
            PMDB_ac_B.InputRaw0_h = tmpRead_1.e_CnvnRes;
            VePMDB_U_HBSysSnsrVoltRaw = tmpRead_1.e_CnvnRes;
        }
        else
        {
            PMDB_ac_B.Cnt_c++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S181>:37' */
        tmp = tmpRead_1.e_CnvnRes - PMDB_ac_B.InputRaw0_h;
        if ((tmp > KePMDB_U_HBSysSnsrSpikeThd) || (tmp <
                (-KePMDB_U_HBSysSnsrSpikeThd)))
        {
            /* Transition: '<S181>:39' */
            PMDB_ac_DW.is_c9_PMDB_ac = PMDB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S181>:38' */
            PMDB_ac_B.Cnt_c = 0.0F;
        }
        else
        {
            VePMDB_U_HBSysSnsrVoltRaw = tmpRead_1.e_CnvnRes;
            PMDB_ac_B.InputRaw0_h = tmpRead_1.e_CnvnRes;
        }
    }

    /* End of Chart: '<S172>/AntiSpkFil' */

    /* Switch: '<S187>/Switch' incorporates:
     *  Selector: '<S186>/Selector_R'
     */
    if (PMDB_ac_DW.UnitDelay_DSTATE_c)
    {
        /* Assignment: '<S188>/Assignment_y' incorporates:
         *  Switch: '<S174>/Switch'
         */
        VePMDB_U_HBSysSnsrVolt = VePMDB_U_HBSysSnsrVoltRaw;
    }
    else
    {
        /* Assignment: '<S188>/Assignment_y' incorporates:
         *  Constant: '<S184>/Calib'
         *  Product: '<S187>/Product'
         *  Selector: '<S186>/Selector_u'
         *  Selector: '<S186>/Selector_x'
         *  Sum: '<S187>/Difference'
         *  Sum: '<S187>/Sum'
         *  Switch: '<S174>/Switch'
         *  Switch: '<S187>/Switch_E'
         */
        VePMDB_U_HBSysSnsrVolt = ((VePMDB_U_HBSysSnsrVoltRaw -
            VePMDB_U_HBSysSnsrVolt) * KePMDB_k_HBSysSnsrFiltGx) +
            VePMDB_U_HBSysSnsrVolt;
    }

    /* End of Switch: '<S187>/Switch' */

    /* SignalConversion generated from: '<S173>/Vector' */
    rtb_TmpSignalConversionAtVectorInport1_l[0] = VePMDB_U_HBSysSnsrVoltRaw;
    rtb_TmpSignalConversionAtVectorInport1_l[1] = VePMDB_U_HBSysSnsrVolt;

    /* Lookup_n-D: '<S173>/Vector' */
    for (i = 0; i < 2; i++)
    {
        rtb_Vector_e[i] = look1_iflf_binlca_19a
            (rtb_TmpSignalConversionAtVectorInport1_l[i], ((const float32 *)
              &(KxPMDB_U_HBSysSnsrChartc[0])), ((const float32 *)
              &(KtPMDB_U_HBSysSnsrChartc[0])), 7U);
    }

    /* End of Lookup_n-D: '<S173>/Vector' */

    /* Switch: '<S176>/Switch' incorporates:
     *  UnitDelay: '<S171>/VePMDB_U_HBSysSnsrInit'
     */
    if (!rtb_TmpSignalConversionAtVeADFB_b_A2DF_o)
    {
        PMDB_ac_DW.VePMDB_U_HBSysSnsrInit_DSTATE = rtb_Vector_e[1];
    }

    /* End of Switch: '<S176>/Switch' */

    /* Switch: '<S174>/Switch' incorporates:
     *  Constant: '<S178>/Calib'
     *  Constant: '<S180>/KeTAIB_b_OEXV_OutTempRcvryEnbl'
     *  Logic: '<S175>/Logical Operator'
     *  Switch: '<S175>/Switch'
     */
    if (KePMDB_b_HBSysSnsrBypEnbl)
    {
        /* Outport: '<Root>/VePMDB_U_HB_SysVolt' incorporates:
         *  Constant: '<S177>/Calib'
         *  SignalConversion: '<S170>/Signal Conversion'
         */
        (void)Rte_Write_VePMDB_U_HB_SysVolt_Value(KePMDB_U_HBSysSnsrByp);
    }
    else if ((KePMDB_b_HBSysSnsrRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeADFB_b_A2DF_o)
    {
        /* Outport: '<Root>/VePMDB_U_HB_SysVolt' incorporates:
         *  Constant: '<S179>/KeTAIB_T_OEXV_OutTempRcvry'
         *  SignalConversion: '<S170>/Signal Conversion'
         *  Switch: '<S175>/Switch'
         */
        (void)Rte_Write_VePMDB_U_HB_SysVolt_Value(KePMDB_U_HBSysSnsrRcvry);
    }
    else
    {
        /* Outport: '<Root>/VePMDB_U_HB_SysVolt' incorporates:
         *  SignalConversion: '<S170>/Signal Conversion'
         *  Switch: '<S175>/Switch'
         *  UnitDelay: '<S171>/VePMDB_U_HBSysSnsrInit'
         */
        (void)Rte_Write_VePMDB_U_HB_SysVolt_Value
            (PMDB_ac_DW.VePMDB_U_HBSysSnsrInit_DSTATE);
    }

    /* End of Switch: '<S174>/Switch' */

    /* Outport: '<Root>/VePMDB_b_HB_SysVoltFA' incorporates:
     *  SignalConversion: '<S170>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_b_HB_SysVoltFA_Value
        (rtb_TmpSignalConversionAtVeADFB_b_A2DF_o);

    /* End of Outputs for SubSystem: '<S34>/HB' */
    /* End of Outputs for SubSystem: '<S2>/HB' */
#endif

#if Rte_SysCon_Variant_PMDB_IGNACC_Presence

    /* Outputs for Atomic SubSystem: '<S2>/IgnAccRun' */
    /* Inport: '<Root>/VeADCR_U_IgnRun_VsADCR_e_CnvnRes' */
    /* Gateway: 5 ms/IgnAccRun/IgnAccRun/SigAcqnAndFilSys/AntiSpkFil */
    /* During: 5 ms/IgnAccRun/IgnAccRun/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_IgnRun_VsADCR_e_CnvnRes(&tmpRead_3);

    /* Outputs for Atomic SubSystem: '<S35>/IgnAccRun' */
    /* Chart: '<S191>/AntiSpkFil' incorporates:
     *  Constant: '<S201>/Calib'
     *  Constant: '<S202>/Calib'
     */
    if (((uint32)PMDB_ac_DW.is_active_c17_PMDB_ac) == 0U)
    {
        /* Entry: 5 ms/IgnAccRun/IgnAccRun/SigAcqnAndFilSys/AntiSpkFil */
        PMDB_ac_DW.is_active_c17_PMDB_ac = 1U;

        /* Entry Internal: 5 ms/IgnAccRun/IgnAccRun/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S200>:8' */
        PMDB_ac_DW.is_c17_PMDB_ac = PMDB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S200>:37' */
        PMDB_ac_B.InputRaw0_g = tmpRead_3.e_CnvnRes;
        VePMDB_U_IgnAccRunSnsrVoltRaw = tmpRead_3.e_CnvnRes;
    }
    else if (((sint32)PMDB_ac_DW.is_c17_PMDB_ac) == 1)
    {
        /* During 'FILTERING': '<S200>:38' */
        if (PMDB_ac_B.Cnt_g >= ((float32)KePMDB_Cnt_IgnAccRunSnsrSpikeThd))
        {
            /* Transition: '<S200>:40' */
            PMDB_ac_DW.is_c17_PMDB_ac = PMDB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S200>:37' */
            PMDB_ac_B.InputRaw0_g = tmpRead_3.e_CnvnRes;
            VePMDB_U_IgnAccRunSnsrVoltRaw = tmpRead_3.e_CnvnRes;
        }
        else
        {
            PMDB_ac_B.Cnt_g++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S200>:37' */
        tmp = tmpRead_3.e_CnvnRes - PMDB_ac_B.InputRaw0_g;
        if ((tmp > KePMDB_U_IgnAccRunSnsrSpikeThd) || (tmp <
                (-KePMDB_U_IgnAccRunSnsrSpikeThd)))
        {
            /* Transition: '<S200>:39' */
            PMDB_ac_DW.is_c17_PMDB_ac = PMDB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S200>:38' */
            PMDB_ac_B.Cnt_g = 0.0F;
        }
        else
        {
            VePMDB_U_IgnAccRunSnsrVoltRaw = tmpRead_3.e_CnvnRes;
            PMDB_ac_B.InputRaw0_g = tmpRead_3.e_CnvnRes;
        }
    }

    /* End of Chart: '<S191>/AntiSpkFil' */

    /* Switch: '<S206>/Switch' incorporates:
     *  Selector: '<S205>/Selector_R'
     */
    if (PMDB_ac_DW.UnitDelay_DSTATE_c)
    {
        /* Assignment: '<S207>/Assignment_y' incorporates:
         *  Switch: '<S193>/Switch'
         */
        VePMDB_U_IgnAccRunSnsrVolt = VePMDB_U_IgnAccRunSnsrVoltRaw;
    }
    else
    {
        /* Assignment: '<S207>/Assignment_y' incorporates:
         *  Constant: '<S203>/Calib'
         *  Product: '<S206>/Product'
         *  Selector: '<S205>/Selector_u'
         *  Selector: '<S205>/Selector_x'
         *  Sum: '<S206>/Difference'
         *  Sum: '<S206>/Sum'
         *  Switch: '<S193>/Switch'
         *  Switch: '<S206>/Switch_E'
         */
        VePMDB_U_IgnAccRunSnsrVolt = ((VePMDB_U_IgnAccRunSnsrVoltRaw -
            VePMDB_U_IgnAccRunSnsrVolt) * KePMDB_k_IgnAccRunSnsrFiltGx) +
            VePMDB_U_IgnAccRunSnsrVolt;
    }

    /* End of Switch: '<S206>/Switch' */

    /* SignalConversion generated from: '<S192>/Vector' */
    rtb_TmpSignalConversionAtVectorInport1_l[0] = VePMDB_U_IgnAccRunSnsrVoltRaw;
    rtb_TmpSignalConversionAtVectorInport1_l[1] = VePMDB_U_IgnAccRunSnsrVolt;

    /* Lookup_n-D: '<S192>/Vector' */
    for (i = 0; i < 2; i++)
    {
        rtb_Vector_l[i] = look1_iflf_binlca_19a
            (rtb_TmpSignalConversionAtVectorInport1_l[i], ((const float32 *)
              &(KxPMDB_U_IgnAccRunSnsrChartc[0])), ((const float32 *)
              &(KtPMDB_U_IgnAccRunSnsrChartc[0])), 7U);
    }

    /* End of Lookup_n-D: '<S192>/Vector' */

    /* Switch: '<S195>/Switch' incorporates:
     *  UnitDelay: '<S190>/VePMDB_U_IgnAccRunSnsrInit'
     */
    if (!rtb_TmpSignalConversionAtVeADFB_b_A2DF_o)
    {
        PMDB_ac_DW.VePMDB_U_IgnAccRunSnsrInit_DSTATE = rtb_Vector_l[1];
    }

    /* End of Switch: '<S195>/Switch' */

    /* Switch: '<S193>/Switch' incorporates:
     *  Constant: '<S197>/Calib'
     *  Constant: '<S199>/KeTAIB_b_OEXV_OutTempRcvryEnbl'
     *  Logic: '<S194>/Logical Operator'
     *  Switch: '<S194>/Switch'
     */
    if (KePMDB_b_IgnAccRunSnsrBypEnbl)
    {
        /* Outport: '<Root>/VePMDB_U_IgnAccRun' incorporates:
         *  Constant: '<S196>/Calib'
         *  SignalConversion: '<S189>/Signal Conversion'
         */
        (void)Rte_Write_VePMDB_U_IgnAccRun_Value(KePMDB_U_IgnAccRunSnsrByp);
    }
    else if ((KePMDB_b_IgnAccRunSnsrRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeADFB_b_A2DF_o)
    {
        /* Outport: '<Root>/VePMDB_U_IgnAccRun' incorporates:
         *  Constant: '<S198>/KeTAIB_T_OEXV_OutTempRcvry'
         *  SignalConversion: '<S189>/Signal Conversion'
         *  Switch: '<S194>/Switch'
         */
        (void)Rte_Write_VePMDB_U_IgnAccRun_Value(KePMDB_U_IgnAccRunSnsrRcvry);
    }
    else
    {
        /* Outport: '<Root>/VePMDB_U_IgnAccRun' incorporates:
         *  SignalConversion: '<S189>/Signal Conversion'
         *  Switch: '<S194>/Switch'
         *  UnitDelay: '<S190>/VePMDB_U_IgnAccRunSnsrInit'
         */
        (void)Rte_Write_VePMDB_U_IgnAccRun_Value
            (PMDB_ac_DW.VePMDB_U_IgnAccRunSnsrInit_DSTATE);
    }

    /* End of Switch: '<S193>/Switch' */

    /* Outport: '<Root>/VePMDB_b_IgnAccRunFA' incorporates:
     *  SignalConversion: '<S189>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_b_IgnAccRunFA_Value
        (rtb_TmpSignalConversionAtVeADFB_b_A2DF_o);

    /* End of Outputs for SubSystem: '<S35>/IgnAccRun' */
    /* End of Outputs for SubSystem: '<S2>/IgnAccRun' */
#endif

#if Rte_SysCon_Variant_PMDB_IGNRUN_Presence

    /* Outputs for Atomic SubSystem: '<S2>/IgnRunCrnk' */
    /* Inport: '<Root>/VeADCR_U_IgnRunStrat_VsADCR_e_CnvnRes' */
    /* Gateway: 5 ms/IgnRunCrnk/IgnRunCrnk/SigAcqnAndFilSys/AntiSpkFil */
    /* During: 5 ms/IgnRunCrnk/IgnRunCrnk/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_IgnRunStrat_VsADCR_e_CnvnRes(&tmpRead_2);

    /* Outputs for Atomic SubSystem: '<S37>/IgnRunCrnk' */
    /* Chart: '<S220>/AntiSpkFil' incorporates:
     *  Constant: '<S230>/Calib'
     *  Constant: '<S231>/Calib'
     */
    if (((uint32)PMDB_ac_DW.is_active_c13_PMDB_ac) == 0U)
    {
        /* Entry: 5 ms/IgnRunCrnk/IgnRunCrnk/SigAcqnAndFilSys/AntiSpkFil */
        PMDB_ac_DW.is_active_c13_PMDB_ac = 1U;

        /* Entry Internal: 5 ms/IgnRunCrnk/IgnRunCrnk/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S229>:8' */
        PMDB_ac_DW.is_c13_PMDB_ac = PMDB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S229>:37' */
        PMDB_ac_B.InputRaw0_d = tmpRead_2.e_CnvnRes;
        VePMDB_U_IgnRunCrnkSnsrVoltRaw = tmpRead_2.e_CnvnRes;
    }
    else if (((sint32)PMDB_ac_DW.is_c13_PMDB_ac) == 1)
    {
        /* During 'FILTERING': '<S229>:38' */
        if (PMDB_ac_B.Cnt_f >= ((float32)KePMDB_Cnt_IgnRunCrnkSnsrSpikeThd))
        {
            /* Transition: '<S229>:40' */
            PMDB_ac_DW.is_c13_PMDB_ac = PMDB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S229>:37' */
            PMDB_ac_B.InputRaw0_d = tmpRead_2.e_CnvnRes;
            VePMDB_U_IgnRunCrnkSnsrVoltRaw = tmpRead_2.e_CnvnRes;
        }
        else
        {
            PMDB_ac_B.Cnt_f++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S229>:37' */
        tmp = tmpRead_2.e_CnvnRes - PMDB_ac_B.InputRaw0_d;
        if ((tmp > KePMDB_U_IgnRunCrnkSnsrSpikeThd) || (tmp <
                (-KePMDB_U_IgnRunCrnkSnsrSpikeThd)))
        {
            /* Transition: '<S229>:39' */
            PMDB_ac_DW.is_c13_PMDB_ac = PMDB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S229>:38' */
            PMDB_ac_B.Cnt_f = 0.0F;
        }
        else
        {
            VePMDB_U_IgnRunCrnkSnsrVoltRaw = tmpRead_2.e_CnvnRes;
            PMDB_ac_B.InputRaw0_d = tmpRead_2.e_CnvnRes;
        }
    }

    /* End of Chart: '<S220>/AntiSpkFil' */

    /* Switch: '<S235>/Switch' incorporates:
     *  Selector: '<S234>/Selector_R'
     */
    if (PMDB_ac_DW.UnitDelay_DSTATE_c)
    {
        /* Assignment: '<S236>/Assignment_y' incorporates:
         *  Switch: '<S222>/Switch'
         */
        VePMDB_U_IgnRunCrnkSnsrVolt = VePMDB_U_IgnRunCrnkSnsrVoltRaw;
    }
    else
    {
        /* Assignment: '<S236>/Assignment_y' incorporates:
         *  Constant: '<S232>/Calib'
         *  Product: '<S235>/Product'
         *  Selector: '<S234>/Selector_u'
         *  Selector: '<S234>/Selector_x'
         *  Sum: '<S235>/Difference'
         *  Sum: '<S235>/Sum'
         *  Switch: '<S222>/Switch'
         *  Switch: '<S235>/Switch_E'
         */
        VePMDB_U_IgnRunCrnkSnsrVolt = ((VePMDB_U_IgnRunCrnkSnsrVoltRaw -
            VePMDB_U_IgnRunCrnkSnsrVolt) * KePMDB_k_IgnRunCrnkSnsrFiltGx) +
            VePMDB_U_IgnRunCrnkSnsrVolt;
    }

    /* End of Switch: '<S235>/Switch' */

    /* SignalConversion generated from: '<S221>/Vector' */
    rtb_TmpSignalConversionAtVectorInport1_l[0] = VePMDB_U_IgnRunCrnkSnsrVoltRaw;
    rtb_TmpSignalConversionAtVectorInport1_l[1] = VePMDB_U_IgnRunCrnkSnsrVolt;

    /* Lookup_n-D: '<S221>/Vector' */
    for (i = 0; i < 2; i++)
    {
        rtb_Vector[i] = look1_iflf_binlca_19a
            (rtb_TmpSignalConversionAtVectorInport1_l[i], ((const float32 *)
              &(KxPMDB_U_IgnRunCrnkSnsrChartc[0])), ((const float32 *)
              &(KtPMDB_U_IgnRunCrnkSnsrChartc[0])), 7U);
    }

    /* End of Lookup_n-D: '<S221>/Vector' */

    /* Switch: '<S224>/Switch' incorporates:
     *  UnitDelay: '<S219>/VePMDB_U_IgnRunCrnkSnsrInit'
     */
    if (!rtb_TmpSignalConversionAtVeADFB_b_A2DF_o)
    {
        PMDB_ac_DW.VePMDB_U_IgnRunCrnkSnsrInit_DSTATE = rtb_Vector[1];
    }

    /* End of Switch: '<S224>/Switch' */

    /* Switch: '<S222>/Switch' incorporates:
     *  Constant: '<S226>/Calib'
     *  Constant: '<S228>/KeTAIB_b_OEXV_OutTempRcvryEnbl'
     *  Logic: '<S223>/Logical Operator'
     *  Switch: '<S223>/Switch'
     */
    if (KePMDB_b_IgnRunCrnkSnsrBypEnbl)
    {
        /* Outport: '<Root>/VePMDB_U_IgnRunCrnk' incorporates:
         *  Constant: '<S225>/Calib'
         *  SignalConversion: '<S218>/Signal Conversion'
         */
        (void)Rte_Write_VePMDB_U_IgnRunCrnk_Value(KePMDB_U_IgnRunCrnkSnsrByp);
    }
    else if ((KePMDB_b_IgnRunCrnkSnsrRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeADFB_b_A2DF_o)
    {
        /* Outport: '<Root>/VePMDB_U_IgnRunCrnk' incorporates:
         *  Constant: '<S227>/KeTAIB_T_OEXV_OutTempRcvry'
         *  SignalConversion: '<S218>/Signal Conversion'
         *  Switch: '<S223>/Switch'
         */
        (void)Rte_Write_VePMDB_U_IgnRunCrnk_Value(KePMDB_U_IgnRunCrnkSnsrRcvry);
    }
    else
    {
        /* Outport: '<Root>/VePMDB_U_IgnRunCrnk' incorporates:
         *  SignalConversion: '<S218>/Signal Conversion'
         *  Switch: '<S223>/Switch'
         *  UnitDelay: '<S219>/VePMDB_U_IgnRunCrnkSnsrInit'
         */
        (void)Rte_Write_VePMDB_U_IgnRunCrnk_Value
            (PMDB_ac_DW.VePMDB_U_IgnRunCrnkSnsrInit_DSTATE);
    }

    /* End of Switch: '<S222>/Switch' */

    /* Outport: '<Root>/VePMDB_b_IgnRunCrnkFA' incorporates:
     *  SignalConversion: '<S218>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_b_IgnRunCrnkFA_Value
        (rtb_TmpSignalConversionAtVeADFB_b_A2DF_o);

    /* End of Outputs for SubSystem: '<S37>/IgnRunCrnk' */
    /* End of Outputs for SubSystem: '<S2>/IgnRunCrnk' */
#endif

    /* SignalConversion generated from: '<S2>/VePMDB_U_BF1SysSnsrRaw' */
#if Rte_SysCon_Variant_PMDB_BF1_Presence

    /* Outport: '<Root>/VePMDB_U_BF1_SysVoltRaw' */
    (void)Rte_Write_VePMDB_U_BF1_SysVoltRaw_Value(rtb_Vector_c[0]);

#endif

    /* End of SignalConversion generated from: '<S2>/VePMDB_U_BF1SysSnsrRaw' */

    /* SignalConversion generated from: '<S2>/VePMDB_U_BF2SysSnsrRaw' */
#if Rte_SysCon_Variant_PMDB_BF2_Presence

    /* Outport: '<Root>/VePMDB_U_BF2_SysVoltRaw' */
    (void)Rte_Write_VePMDB_U_BF2_SysVoltRaw_Value(rtb_Vector_p[0]);

#endif

    /* End of SignalConversion generated from: '<S2>/VePMDB_U_BF2SysSnsrRaw' */

    /* SignalConversion generated from: '<S2>/VePMDB_U_HBSysSnsrRaw' */
#if Rte_SysCon_Variant_PMDB_HB_Presence

    /* Outport: '<Root>/VePMDB_U_HB_SysVoltRaw' */
    (void)Rte_Write_VePMDB_U_HB_SysVoltRaw_Value(rtb_Vector_e[0]);

#endif

    /* End of SignalConversion generated from: '<S2>/VePMDB_U_HBSysSnsrRaw' */

    /* SignalConversion generated from: '<S2>/VePMDB_U_IgnAccRunSnsrRaw' */
#if Rte_SysCon_Variant_PMDB_IGNACC_Presence

    /* Outport: '<Root>/VePMDB_U_IgnAccRunRaw' */
    (void)Rte_Write_VePMDB_U_IgnAccRunRaw_Value(rtb_Vector_l[0]);

#endif

    /* End of SignalConversion generated from: '<S2>/VePMDB_U_IgnAccRunSnsrRaw' */

    /* SignalConversion generated from: '<S2>/VePMDB_U_IgnRunCrnkSnsrRaw' */
#if Rte_SysCon_Variant_PMDB_IGNRUN_Presence

    /* Outport: '<Root>/VePMDB_U_IgnRunCrnkRaw' */
    (void)Rte_Write_VePMDB_U_IgnRunCrnkRaw_Value(rtb_Vector[0]);

#endif

    /* End of SignalConversion generated from: '<S2>/VePMDB_U_IgnRunCrnkSnsrRaw' */

    /* SignalConversion generated from: '<S2>/VePMDB_b_BpcmWakeupFailg' incorporates:
     *  SignalConversion generated from: '<S2>/VePMDB_e_BPCMWakeUpSTB_PassFail'
     *  SignalConversion generated from: '<S2>/VePMDB_e_BPCMWakeUpSTG_PassFail'
     */
#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

    /* Outport: '<Root>/VePMDB_b_BpcmWakeupFailg' */
    (void)Rte_Write_VePMDB_b_BpcmWakeupFailg_Value
        (rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outport: '<Root>/VePMDB_e_FaultSts_CtrlModWkUpCktHi' incorporates:
     *  Merge: '<S95>/Merge'
     */
    (void)Rte_Write_VePMDB_e_FaultSts_CtrlModWkUpCktHi_Value(PMDB_ac_B.Merge);

    /* Outport: '<Root>/VePMDB_e_FaultSts_CtrlModWkUpCktLo' incorporates:
     *  Merge: '<S115>/Merge'
     */
    (void)Rte_Write_VePMDB_e_FaultSts_CtrlModWkUpCktLo_Value(PMDB_ac_B.Merge_p);

#endif

    /* End of SignalConversion generated from: '<S2>/VePMDB_b_BpcmWakeupFailg' */
#if Rte_SysCon_Variant_PMDB_PWRPanel_Presence

    /* Outputs for Atomic SubSystem: '<S2>/PowerPanelSwich' */
    /* Inport: '<Root>/VeADCR_U_PowerPanelElsdTemp_VsADCR_e_CnvnRes' */
    /* Gateway: 5 ms/PowerPanelSwich/PowerPanelSwich/SigAcqnAndFilSys/AntiSpkFil */
    /* During: 5 ms/PowerPanelSwich/PowerPanelSwich/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_PowerPanelElsdTemp_VsADCR_e_CnvnRes(&tmpRead_4);

    /* Outputs for Atomic SubSystem: '<S40>/PowerPanelSwich' */
    /* Chart: '<S259>/AntiSpkFil' incorporates:
     *  Constant: '<S274>/Calib'
     *  Constant: '<S275>/Calib'
     */
    if (((uint32)PMDB_ac_DW.is_active_c1_PMDB_ac) == 0U)
    {
        /* Entry: 5 ms/PowerPanelSwich/PowerPanelSwich/SigAcqnAndFilSys/AntiSpkFil */
        PMDB_ac_DW.is_active_c1_PMDB_ac = 1U;

        /* Entry Internal: 5 ms/PowerPanelSwich/PowerPanelSwich/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S273>:8' */
        PMDB_ac_DW.is_c1_PMDB_ac = PMDB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S273>:37' */
        PMDB_ac_B.InputRaw0_a = tmpRead_4.e_CnvnRes;
        VePMDB_U_PwrPanSwSysSnsrVoltRaw = tmpRead_4.e_CnvnRes;
    }
    else if (((sint32)PMDB_ac_DW.is_c1_PMDB_ac) == 1)
    {
        /* During 'FILTERING': '<S273>:38' */
        if (PMDB_ac_B.Cnt_m >= ((float32)KePMDB_Cnt_PwrPanSwSysSnsrSpikeThd))
        {
            /* Transition: '<S273>:40' */
            PMDB_ac_DW.is_c1_PMDB_ac = PMDB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S273>:37' */
            PMDB_ac_B.InputRaw0_a = tmpRead_4.e_CnvnRes;
            VePMDB_U_PwrPanSwSysSnsrVoltRaw = tmpRead_4.e_CnvnRes;
        }
        else
        {
            PMDB_ac_B.Cnt_m++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S273>:37' */
        tmp = tmpRead_4.e_CnvnRes - PMDB_ac_B.InputRaw0_a;
        if ((tmp > KePMDB_U_PwrPanSwSysSnsrSpikeThd) || (tmp <
                (-KePMDB_U_PwrPanSwSysSnsrSpikeThd)))
        {
            /* Transition: '<S273>:39' */
            PMDB_ac_DW.is_c1_PMDB_ac = PMDB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S273>:38' */
            PMDB_ac_B.Cnt_m = 0.0F;
        }
        else
        {
            VePMDB_U_PwrPanSwSysSnsrVoltRaw = tmpRead_4.e_CnvnRes;
            PMDB_ac_B.InputRaw0_a = tmpRead_4.e_CnvnRes;
        }
    }

    /* End of Chart: '<S259>/AntiSpkFil' */

    /* Switch: '<S279>/Switch' incorporates:
     *  Selector: '<S278>/Selector_R'
     */
    if (PMDB_ac_DW.UnitDelay_DSTATE_c)
    {
        /* Assignment: '<S280>/Assignment_y' incorporates:
         *  Switch: '<S279>/Switch'
         */
        VePMDB_U_PwrPanSwSysSnsrVolt = VePMDB_U_PwrPanSwSysSnsrVoltRaw;
    }
    else
    {
        /* Assignment: '<S280>/Assignment_y' incorporates:
         *  Constant: '<S276>/Calib'
         *  Product: '<S279>/Product'
         *  Selector: '<S278>/Selector_u'
         *  Selector: '<S278>/Selector_x'
         *  Sum: '<S279>/Difference'
         *  Sum: '<S279>/Sum'
         *  Switch: '<S279>/Switch'
         *  Switch: '<S279>/Switch_E'
         */
        VePMDB_U_PwrPanSwSysSnsrVolt = ((VePMDB_U_PwrPanSwSysSnsrVoltRaw -
            VePMDB_U_PwrPanSwSysSnsrVolt) * KePMDB_k_PwrPanSwSysSnsrFiltGx) +
            VePMDB_U_PwrPanSwSysSnsrVolt;
    }

    /* End of Switch: '<S279>/Switch' */

    /* Outputs for Atomic SubSystem: '<S258>/Hysteresis_1' */
    /* Switch: '<S260>/Switch1' incorporates:
     *  Constant: '<S260>/Constant Value'
     *  Constant: '<S261>/Calib'
     *  Constant: '<S262>/Calib'
     *  RelationalOperator: '<S260>/Greater  Than'
     *  RelationalOperator: '<S260>/Greater  Than1'
     *  UnitDelay: '<S260>/Unit Delay'
     */
    if (VePMDB_U_PwrPanSwSysSnsrVolt >= KePMDB_U_PwrPanSwHysHighLim)
    {
        PMDB_ac_DW.UnitDelay_DSTATE_h = true;
    }
    else
    {
        PMDB_ac_DW.UnitDelay_DSTATE_h = ((VePMDB_U_PwrPanSwSysSnsrVolt >
            KePMDB_U_PwrPanSwHysLowLim) && (PMDB_ac_DW.UnitDelay_DSTATE_h));
    }

    /* End of Switch: '<S260>/Switch1' */
    /* End of Outputs for SubSystem: '<S258>/Hysteresis_1' */

    /* Switch: '<S266>/Switch' */
    if (!rtb_TmpSignalConversionAtVeADFB_b_A2DF_o)
    {
        /* Switch: '<S270>/Switch' incorporates:
         *  Constant: '<S269>/Calib'
         */
        if (KePMDB_b_PwrPanSwPolarInvEnbl)
        {
            /* UnitDelay: '<S258>/VePMDB_b_PwrPanSwInit' incorporates:
             *  Logic: '<S264>/Logical Operator'
             *  Switch: '<S270>/Switch'
             *  UnitDelay: '<S260>/Unit Delay'
             */
            PMDB_ac_DW.VePMDB_b_PwrPanSwInit_DSTATE =
                !PMDB_ac_DW.UnitDelay_DSTATE_h;
        }
        else
        {
            /* UnitDelay: '<S258>/VePMDB_b_PwrPanSwInit' incorporates:
             *  Switch: '<S270>/Switch'
             *  UnitDelay: '<S260>/Unit Delay'
             */
            PMDB_ac_DW.VePMDB_b_PwrPanSwInit_DSTATE =
                PMDB_ac_DW.UnitDelay_DSTATE_h;
        }

        /* End of Switch: '<S270>/Switch' */
    }

    /* End of Switch: '<S266>/Switch' */

    /* Switch: '<S263>/Switch' incorporates:
     *  Constant: '<S268>/Calib'
     *  Constant: '<S272>/KeTAIB_b_OEXV_OutTempRcvryEnbl'
     *  Logic: '<S265>/Logical Operator'
     *  Switch: '<S265>/Switch'
     */
    if (KePMDB_b_PwrPanSwSysSnsrBypEnbl)
    {
        /* Outport: '<Root>/VePMDB_b_PwrPanSwStatus' incorporates:
         *  Constant: '<S267>/Calib'
         */
        (void)Rte_Write_VePMDB_b_PwrPanSwStatus_Value
            (KePMDB_b_PwrPanSwSysSnsrByp);
    }
    else if ((KePMDB_b_PwrPanSwSnsrRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeADFB_b_A2DF_o)
    {
        /* Outport: '<Root>/VePMDB_b_PwrPanSwStatus' incorporates:
         *  Constant: '<S271>/KeTAIB_T_OEXV_OutTempRcvry'
         *  Switch: '<S265>/Switch'
         */
        (void)Rte_Write_VePMDB_b_PwrPanSwStatus_Value(KePMDB_b_PwrPanSwSnsrRcvry);
    }
    else
    {
        /* Outport: '<Root>/VePMDB_b_PwrPanSwStatus' incorporates:
         *  Switch: '<S265>/Switch'
         *  UnitDelay: '<S258>/VePMDB_b_PwrPanSwInit'
         */
        (void)Rte_Write_VePMDB_b_PwrPanSwStatus_Value
            (PMDB_ac_DW.VePMDB_b_PwrPanSwInit_DSTATE);
    }

    /* End of Switch: '<S263>/Switch' */

    /* Outport: '<Root>/VePMDB_U_PwrPanSw_SysVolt' incorporates:
     *  SignalConversion: '<S257>/Signal Conversion'
     */
    (void)Rte_Write_VePMDB_U_PwrPanSw_SysVolt_Value(VePMDB_U_PwrPanSwSysSnsrVolt);

    /* Outport: '<Root>/VePMDB_U_PwrPanSw_SysVoltRaw' incorporates:
     *  SignalConversion: '<S257>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_U_PwrPanSw_SysVoltRaw_Value
        (VePMDB_U_PwrPanSwSysSnsrVoltRaw);

    /* Outport: '<Root>/VePMDB_b_PwrPanSw_SysVoltFA' incorporates:
     *  SignalConversion: '<S257>/Signal Conversion2'
     */
    (void)Rte_Write_VePMDB_b_PwrPanSw_SysVoltFA_Value
        (rtb_TmpSignalConversionAtVeADFB_b_A2DF_o);

    /* End of Outputs for SubSystem: '<S40>/PowerPanelSwich' */
    /* End of Outputs for SubSystem: '<S2>/PowerPanelSwich' */
#endif

    /* SignalConversion generated from: '<S2>/VeDIOR_b_IgnRunDigInpImdtVal' incorporates:
     *  SignalConversion generated from: '<S2>/VeDIOR_b_IgnRunDigInpFiltdVal'
     */
#if Rte_SysCon_Variant_PMDB_IGNACCDIG_Presence

    /* Outputs for Atomic SubSystem: '<S2>/IgnAccRunDig' */
    /* SignalConversion generated from: '<S2>/VeDIOR_b_IgnRunDigInpImdtVal' incorporates:
     *  Inport: '<Root>/VeDIOR_b_IgnRunDigInpImdtVal_VeDIOR_b_DigInpImdtVal'
     */
    (void)Rte_Read_VeDIOR_b_IgnRunDigInpImdtVal_VeDIOR_b_DigInpImdtVal
        (&rtb_TmpSignalConversionAtVeDIOR_b_IgnRun);

    /* SignalConversion generated from: '<S2>/VeDIOR_b_IgnRunDigInpFiltdVal' incorporates:
     *  Inport: '<Root>/VeDIOR_b_IgnRunDigInpFiltdVal_VeDIOR_b_DigInpFiltdVal'
     */
    (void)Rte_Read_VeDIOR_b_IgnRunDigInpFiltdVal_VeDIOR_b_DigInpFiltdVal
        (&rtb_TmpSignalConversionAtVeDIOR_b_IgnR_m);

    /* Outputs for Atomic SubSystem: '<S36>/IgnAccRunDig' */
    /* Switch: '<S210>/Switch' incorporates:
     *  Constant: '<S215>/Calib'
     *  Constant: '<S216>/Calib'
     *  Switch: '<S217>/Switch'
     */
    if (KePMDB_b_IgnAccRunBypEnbl)
    {
        /* Switch: '<S210>/Switch' incorporates:
         *  Constant: '<S214>/Calib'
         */
        for (i = 0; i < 2; i++)
        {
            rtb_Switch_ij[i] = KePMDB_b_IgnAccRunByp;
        }
    }
    else if (KePMDB_b_IgnAccRunPolarInvEnbl)
    {
        /* Switch: '<S210>/Switch' incorporates:
         *  Logic: '<S211>/Logical Operator'
         *  Switch: '<S217>/Switch'
         */
        rtb_Switch_ij[0] = !rtb_TmpSignalConversionAtVeDIOR_b_IgnRun;
        rtb_Switch_ij[1] = !rtb_TmpSignalConversionAtVeDIOR_b_IgnR_m;
    }
    else
    {
        /* Switch: '<S210>/Switch' incorporates:
         *  Switch: '<S217>/Switch'
         */
        rtb_Switch_ij[0] = rtb_TmpSignalConversionAtVeDIOR_b_IgnRun;
        rtb_Switch_ij[1] = rtb_TmpSignalConversionAtVeDIOR_b_IgnR_m;
    }

    /* End of Switch: '<S210>/Switch' */

    /* Switch: '<S213>/Switch' incorporates:
     *  Constant: '<S212>/Calib'
     */
    if (KePMDB_b_IgnAccRunFiltdEnbl)
    {
        /* Outport: '<Root>/VePMDB_b_IgnAccRun' */
        (void)Rte_Write_VePMDB_b_IgnAccRun_Value(rtb_Switch_ij[1]);
    }
    else
    {
        /* Outport: '<Root>/VePMDB_b_IgnAccRun' */
        (void)Rte_Write_VePMDB_b_IgnAccRun_Value(rtb_Switch_ij[0]);
    }

    /* End of Switch: '<S213>/Switch' */
    /* End of Outputs for SubSystem: '<S36>/IgnAccRunDig' */
    /* End of Outputs for SubSystem: '<S2>/IgnAccRunDig' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeDIOR_b_IgnRunDigInpImdtVal' */

    /* SignalConversion generated from: '<S2>/VeDIOR_b_IgnRunStratDigInpImdtVal' incorporates:
     *  SignalConversion generated from: '<S2>/VeDIOR_b_IgnRunStartDigInpFiltdVal'
     */
#if Rte_SysCon_Variant_PMDB_IGNRUNDIG_Presence

    /* Outputs for Atomic SubSystem: '<S2>/IgnRunCrnkDig' */
    /* SignalConversion generated from: '<S2>/VeDIOR_b_IgnRunStratDigInpImdtVal' incorporates:
     *  Inport: '<Root>/VeDIOR_b_IgnRunStratDigInpImdtVal_VeDIOR_b_DigInpImdtVal'
     */
    (void)Rte_Read_VeDIOR_b_IgnRunStratDigInpImdtVal_VeDIOR_b_DigInpImdtVal
        (&rtb_TmpSignalConversionAtVeDIOR_b_Ign_l0);

    /* SignalConversion generated from: '<S2>/VeDIOR_b_IgnRunStartDigInpFiltdVal' incorporates:
     *  Inport: '<Root>/VeDIOR_b_IgnRunStartDigInpFiltdVal_VeDIOR_b_DigInpFiltdVal'
     */
    (void)Rte_Read_VeDIOR_b_IgnRunStartDigInpFiltdVal_VeDIOR_b_DigInpFiltdVal
        (&rtb_TmpSignalConversionAtVeDIOR_b_IgnR_f);

    /* Outputs for Atomic SubSystem: '<S38>/IgnRunCrnkDig' */
    /* Switch: '<S239>/Switch' incorporates:
     *  Constant: '<S244>/Calib'
     *  Constant: '<S245>/Calib'
     *  Switch: '<S246>/Switch'
     */
    if (KePMDB_b_IgnRunCrnkBypEnbl)
    {
        /* Switch: '<S239>/Switch' incorporates:
         *  Constant: '<S243>/Calib'
         */
        for (i = 0; i < 2; i++)
        {
            rtb_Switch_ij[i] = KePMDB_b_IgnRunCrnkByp;
        }
    }
    else if (KePMDB_b_IgnRunCrnkPolarInvEnbl)
    {
        /* Switch: '<S239>/Switch' incorporates:
         *  Logic: '<S240>/Logical Operator'
         *  Switch: '<S246>/Switch'
         */
        rtb_Switch_ij[0] = !rtb_TmpSignalConversionAtVeDIOR_b_Ign_l0;
        rtb_Switch_ij[1] = !rtb_TmpSignalConversionAtVeDIOR_b_IgnR_f;
    }
    else
    {
        /* Switch: '<S239>/Switch' incorporates:
         *  Switch: '<S246>/Switch'
         */
        rtb_Switch_ij[0] = rtb_TmpSignalConversionAtVeDIOR_b_Ign_l0;
        rtb_Switch_ij[1] = rtb_TmpSignalConversionAtVeDIOR_b_IgnR_f;
    }

    /* End of Switch: '<S239>/Switch' */

    /* Switch: '<S242>/Switch' incorporates:
     *  Constant: '<S241>/Calib'
     */
    if (KePMDB_b_IgnRunCrnkFiltdEnbl)
    {
        /* Outport: '<Root>/VePMDB_b_IgnRunCrnk' */
        (void)Rte_Write_VePMDB_b_IgnRunCrnk_Value(rtb_Switch_ij[1]);
    }
    else
    {
        /* Outport: '<Root>/VePMDB_b_IgnRunCrnk' */
        (void)Rte_Write_VePMDB_b_IgnRunCrnk_Value(rtb_Switch_ij[0]);
    }

    /* End of Switch: '<S242>/Switch' */
    /* End of Outputs for SubSystem: '<S38>/IgnRunCrnkDig' */
    /* End of Outputs for SubSystem: '<S2>/IgnRunCrnkDig' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeDIOR_b_IgnRunStratDigInpImdtVal' */

    /* SignalConversion generated from: '<S2>/VeDIOR_b_EStopDigInpImdtVal' incorporates:
     *  SignalConversion generated from: '<S2>/VeDIOR_b_EStopDigInpFiltdVal'
     */
#if Rte_SysCon_Variant_PMDB_ESTOP_Presence

    /* Outputs for Atomic SubSystem: '<S2>/EStop' */
    /* SignalConversion generated from: '<S2>/VeDIOR_b_EStopDigInpImdtVal' incorporates:
     *  Inport: '<Root>/VeDIOR_b_EstopDigInpImdtVal_VeDIOR_b_DigInpImdtVal'
     */
    (void)Rte_Read_VeDIOR_b_EstopDigInpImdtVal_VeDIOR_b_DigInpImdtVal
        (&rtb_TmpSignalConversionAtVeDIOR_b_EStopD);

    /* SignalConversion generated from: '<S2>/VeDIOR_b_EStopDigInpFiltdVal' incorporates:
     *  Inport: '<Root>/VeDIOR_b_EstopDigInpFiltdVal_VeDIOR_b_DigInpFiltdVal'
     */
    (void)Rte_Read_VeDIOR_b_EstopDigInpFiltdVal_VeDIOR_b_DigInpFiltdVal
        (&rtb_TmpSignalConversionAtVeDIOR_b_ESto_g);

    /* Outputs for Atomic SubSystem: '<S33>/EStop' */
    /* Switch: '<S162>/Switch' incorporates:
     *  Constant: '<S167>/Calib'
     *  Constant: '<S168>/Calib'
     *  Switch: '<S169>/Switch'
     */
    if (KePMDB_b_EStopBypEnbl)
    {
        /* Switch: '<S162>/Switch' incorporates:
         *  Constant: '<S166>/Calib'
         */
        for (i = 0; i < 2; i++)
        {
            rtb_Switch_ij[i] = KePMDB_b_EStopByp;
        }
    }
    else if (KePMDB_b_EStopPolarInvEnbl)
    {
        /* Switch: '<S162>/Switch' incorporates:
         *  Logic: '<S163>/Logical Operator'
         *  Switch: '<S169>/Switch'
         */
        rtb_Switch_ij[0] = !rtb_TmpSignalConversionAtVeDIOR_b_EStopD;
        rtb_Switch_ij[1] = !rtb_TmpSignalConversionAtVeDIOR_b_ESto_g;
    }
    else
    {
        /* Switch: '<S162>/Switch' incorporates:
         *  Switch: '<S169>/Switch'
         */
        rtb_Switch_ij[0] = rtb_TmpSignalConversionAtVeDIOR_b_EStopD;
        rtb_Switch_ij[1] = rtb_TmpSignalConversionAtVeDIOR_b_ESto_g;
    }

    /* End of Switch: '<S162>/Switch' */

    /* Switch: '<S165>/Switch' incorporates:
     *  Constant: '<S164>/Calib'
     */
    if (KePMDB_b_EStopFiltdEnbl)
    {
        /* Outport: '<Root>/VePMDB_b_EStop' */
        (void)Rte_Write_VePMDB_b_EStop_Value(rtb_Switch_ij[1]);
    }
    else
    {
        /* Outport: '<Root>/VePMDB_b_EStop' */
        (void)Rte_Write_VePMDB_b_EStop_Value(rtb_Switch_ij[0]);
    }

    /* End of Switch: '<S165>/Switch' */
    /* End of Outputs for SubSystem: '<S33>/EStop' */
    /* End of Outputs for SubSystem: '<S2>/EStop' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeDIOR_b_EStopDigInpImdtVal' */

    /* SignalConversion generated from: '<S2>/VeDIOR_b_IdcmDigInpImdtVal' incorporates:
     *  SignalConversion generated from: '<S2>/VeDIOR_b_IdcmDigInpFiltdVal'
     */
#if Rte_SysCon_Variant_PMDB_OBCMWup_Presence

    /* Outputs for Atomic SubSystem: '<S2>/OBCMWup' */
    /* SignalConversion generated from: '<S2>/VeDIOR_b_IdcmDigInpImdtVal' incorporates:
     *  Inport: '<Root>/VeDIOR_b_IdcmDigInpImdtVal_VeDIOR_b_DigInpImdtVal'
     */
    (void)Rte_Read_VeDIOR_b_IdcmDigInpImdtVal_VeDIOR_b_DigInpImdtVal
        (&rtb_TmpSignalConversionAtVeDIOR_b_IdcmDi);

    /* SignalConversion generated from: '<S2>/VeDIOR_b_IdcmDigInpFiltdVal' incorporates:
     *  Inport: '<Root>/VeDIOR_b_IdcmDigInpFiltdVal_VeDIOR_b_DigInpFiltdVal'
     */
    (void)Rte_Read_VeDIOR_b_IdcmDigInpFiltdVal_VeDIOR_b_DigInpFiltdVal
        (&rtb_TmpSignalConversionAtVeDIOR_b_Idcm_f);

    /* Outputs for Atomic SubSystem: '<S39>/OBCMWup' */
    /* Switch: '<S249>/Switch' incorporates:
     *  Constant: '<S254>/Calib'
     *  Constant: '<S255>/Calib'
     *  Switch: '<S256>/Switch'
     */
    if (KePMDB_b_OBCMWupBypEnbl)
    {
        /* Switch: '<S249>/Switch' incorporates:
         *  Constant: '<S253>/Calib'
         */
        for (i = 0; i < 2; i++)
        {
            rtb_Switch_ij[i] = KePMDB_b_OBCMWupByp;
        }
    }
    else if (KePMDB_b_OBCMWupPolarInvEnbl)
    {
        /* Switch: '<S249>/Switch' incorporates:
         *  Logic: '<S250>/Logical Operator'
         *  Switch: '<S256>/Switch'
         */
        rtb_Switch_ij[0] = !rtb_TmpSignalConversionAtVeDIOR_b_IdcmDi;
        rtb_Switch_ij[1] = !rtb_TmpSignalConversionAtVeDIOR_b_Idcm_f;
    }
    else
    {
        /* Switch: '<S249>/Switch' incorporates:
         *  Switch: '<S256>/Switch'
         */
        rtb_Switch_ij[0] = rtb_TmpSignalConversionAtVeDIOR_b_IdcmDi;
        rtb_Switch_ij[1] = rtb_TmpSignalConversionAtVeDIOR_b_Idcm_f;
    }

    /* End of Switch: '<S249>/Switch' */

    /* Switch: '<S252>/Switch' incorporates:
     *  Constant: '<S251>/Calib'
     */
    if (KePMDB_b_OBCMWupFiltdEnbl)
    {
        /* Outport: '<Root>/VePMDB_b_OBCMWup' */
        (void)Rte_Write_VePMDB_b_OBCMWup_Value(rtb_Switch_ij[1]);
    }
    else
    {
        /* Outport: '<Root>/VePMDB_b_OBCMWup' */
        (void)Rte_Write_VePMDB_b_OBCMWup_Value(rtb_Switch_ij[0]);
    }

    /* End of Switch: '<S252>/Switch' */
    /* End of Outputs for SubSystem: '<S39>/OBCMWup' */
    /* End of Outputs for SubSystem: '<S2>/OBCMWup' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeDIOR_b_IdcmDigInpImdtVal' */

    /* Update for UnitDelay: '<S2>/Unit Delay' incorporates:
     *  Constant: '<S2>/Constant3'
     */
#if Rte_SysCon_Variant_PMDB_BF1_Presence || Rte_SysCon_Variant_PMDB_BF2_Presence || Rte_SysCon_Variant_PMDB_BPCMWup_Presence || Rte_SysCon_Variant_PMDB_HB_Presence || Rte_SysCon_Variant_PMDB_IGNACC_Presence || Rte_SysCon_Variant_PMDB_IGNRUN_Presence || Rte_SysCon_Variant_PMDB_PWRPanel_Presence

    PMDB_ac_DW.UnitDelay_DSTATE_c = false;

#endif

    /* End of Update for UnitDelay: '<S2>/Unit Delay' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Model step function for TID2 */
FUNC(void, PMDB_CODE) PMDB_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_PMDB_PCUPURDF_Presence

    IDTRAdcInpResData tmpRead;

#endif

#if Rte_SysCon_Variant_PMDB_PCUPURDF_Presence

    boolean rtb_TmpSignalConversionAtVeADFB_b_A2DFau;

#endif

#if Rte_SysCon_Variant_PMDB_PCUPURDF_Presence

    float32 tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/20 ms'
     */
    /* UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Constant: '<S1>/Constant3'
     *  Inport: '<Root>/VeADCR_U_PcuPurdf_VsADCR_e_CnvnRes'
     *  SignalConversion generated from: '<S1>/VeADFB_b_A2DFault'
     */
#if Rte_SysCon_Variant_PMDB_PCUPURDF_Presence

    /* Outputs for Atomic SubSystem: '<S1>/PCU Power Up Relay Diag Feedback' */
    /* SignalConversion generated from: '<S1>/VeADFB_b_A2DFault' incorporates:
     *  Inport: '<Root>/VeADFB_b_A2DFault'
     */
    (void)Rte_Read_VeADFB_b_A2DFault_Value
        (&rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* Gateway: 20 ms/PCU Power Up Relay Diag Feedback/PCU Power Up Relay Diag Feedback/SigAcqnAndFilSys/AntiSpkFil */
    /* During: 20 ms/PCU Power Up Relay Diag Feedback/PCU Power Up Relay Diag Feedback/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_PcuPurdf_VsADCR_e_CnvnRes(&tmpRead);

    /* Outputs for Atomic SubSystem: '<S5>/PCU Power Up Relay Diag Feedback' */
    /* Chart: '<S8>/AntiSpkFil' incorporates:
     *  Constant: '<S23>/Calib'
     *  Constant: '<S24>/Calib'
     *  Inport: '<Root>/VeADCR_U_PcuPurdf_VsADCR_e_CnvnRes'
     */
    if (((uint32)PMDB_ac_DW.is_active_c12_PMDB_ac) == 0U)
    {
        /* Entry: 20 ms/PCU Power Up Relay Diag Feedback/PCU Power Up Relay Diag Feedback/SigAcqnAndFilSys/AntiSpkFil */
        PMDB_ac_DW.is_active_c12_PMDB_ac = 1U;

        /* Entry Internal: 20 ms/PCU Power Up Relay Diag Feedback/PCU Power Up Relay Diag Feedback/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S22>:8' */
        PMDB_ac_DW.is_c12_PMDB_ac = PMDB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S22>:37' */
        PMDB_ac_B.InputRaw0 = tmpRead.e_CnvnRes;
        PMDB_ac_B.InputRawFild = tmpRead.e_CnvnRes;
    }
    else if (((uint32)PMDB_ac_DW.is_c12_PMDB_ac) == PMDB_ac_IN_FILTERING)
    {
        /* During 'FILTERING': '<S22>:38' */
        if (PMDB_ac_B.Cnt >= ((float32)KePMDB_Cnt_PcuPurdfSpikeThd))
        {
            /* Transition: '<S22>:40' */
            PMDB_ac_DW.is_c12_PMDB_ac = PMDB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S22>:37' */
            PMDB_ac_B.InputRaw0 = tmpRead.e_CnvnRes;
            PMDB_ac_B.InputRawFild = tmpRead.e_CnvnRes;
        }
        else
        {
            PMDB_ac_B.Cnt++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S22>:37' */
        tmp = tmpRead.e_CnvnRes - PMDB_ac_B.InputRaw0;
        if ((tmp > KePMDB_U_PcuPurdfSpikeThd) || (tmp <
                (-KePMDB_U_PcuPurdfSpikeThd)))
        {
            /* Transition: '<S22>:39' */
            PMDB_ac_DW.is_c12_PMDB_ac = PMDB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S22>:38' */
            PMDB_ac_B.Cnt = 0.0F;
        }
        else
        {
            PMDB_ac_B.InputRawFild = tmpRead.e_CnvnRes;
            PMDB_ac_B.InputRaw0 = tmpRead.e_CnvnRes;
        }
    }

    /* End of Chart: '<S8>/AntiSpkFil' */

    /* Switch: '<S28>/Switch' */
    if (PMDB_ac_DW.UnitDelay_DSTATE_d)
    {
        /* Assignment: '<S29>/Assignment_y' incorporates:
         *  Switch: '<S28>/Switch'
         *  UnitDelay: '<S29>/Unit_Delay_y'
         */
        PMDB_ac_DW.Unit_Delay_y_DSTATE = PMDB_ac_B.InputRawFild;
    }
    else
    {
        /* Assignment: '<S29>/Assignment_y' incorporates:
         *  Constant: '<S25>/Calib'
         *  Product: '<S28>/Product'
         *  Selector: '<S27>/Selector_u'
         *  Selector: '<S27>/Selector_x'
         *  Sum: '<S28>/Difference'
         *  Sum: '<S28>/Sum'
         *  Switch: '<S28>/Switch'
         *  Switch: '<S28>/Switch_E'
         *  UnitDelay: '<S29>/Unit_Delay_y'
         */
        PMDB_ac_DW.Unit_Delay_y_DSTATE += (PMDB_ac_B.InputRawFild -
            PMDB_ac_DW.Unit_Delay_y_DSTATE) * KePMDB_k_PcuPurdfFiltGx;
    }

    /* End of Switch: '<S28>/Switch' */

    /* Outputs for Atomic SubSystem: '<S7>/Hysteresis_1' */
    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S10>/Calib'
     *  Constant: '<S11>/Calib'
     *  Constant: '<S9>/Constant Value'
     *  RelationalOperator: '<S9>/Greater  Than'
     *  RelationalOperator: '<S9>/Greater  Than1'
     *  UnitDelay: '<S29>/Unit_Delay_y'
     *  UnitDelay: '<S9>/Unit Delay'
     */
    if (PMDB_ac_DW.Unit_Delay_y_DSTATE >= KePMDB_U_PcuPurdfHysHighLim)
    {
        PMDB_ac_DW.UnitDelay_DSTATE_n = true;
    }
    else
    {
        PMDB_ac_DW.UnitDelay_DSTATE_n = ((PMDB_ac_DW.Unit_Delay_y_DSTATE >
            KePMDB_U_PcuPurdfHysLowLim) && (PMDB_ac_DW.UnitDelay_DSTATE_n));
    }

    /* End of Switch: '<S9>/Switch1' */
    /* End of Outputs for SubSystem: '<S7>/Hysteresis_1' */

    /* Switch: '<S15>/Switch' */
    if (!rtb_TmpSignalConversionAtVeADFB_b_A2DFau)
    {
        /* Switch: '<S19>/Switch' incorporates:
         *  Constant: '<S18>/Calib'
         */
        if (KePMDB_b_PcuPurdfPolarInvEnbl)
        {
            /* UnitDelay: '<S7>/VePMDB_b_PcuPurdfInit' incorporates:
             *  Logic: '<S13>/Logical Operator'
             *  Switch: '<S19>/Switch'
             *  UnitDelay: '<S9>/Unit Delay'
             */
            PMDB_ac_DW.VePMDB_b_PcuPurdfInit_DSTATE =
                !PMDB_ac_DW.UnitDelay_DSTATE_n;
        }
        else
        {
            /* UnitDelay: '<S7>/VePMDB_b_PcuPurdfInit' incorporates:
             *  Switch: '<S19>/Switch'
             *  UnitDelay: '<S9>/Unit Delay'
             */
            PMDB_ac_DW.VePMDB_b_PcuPurdfInit_DSTATE =
                PMDB_ac_DW.UnitDelay_DSTATE_n;
        }

        /* End of Switch: '<S19>/Switch' */
    }

    /* End of Switch: '<S15>/Switch' */

    /* Switch: '<S12>/Switch' incorporates:
     *  Constant: '<S17>/Calib'
     *  Constant: '<S21>/KeTAIB_b_OEXV_OutTempRcvryEnbl'
     *  Logic: '<S14>/Logical Operator'
     *  Switch: '<S14>/Switch'
     */
    if (KePMDB_b_PcuPurdfBypEnbl)
    {
        /* Outport: '<Root>/VePMDB_b_PcuPurdfSts' incorporates:
         *  Constant: '<S16>/Calib'
         */
        (void)Rte_Write_VePMDB_b_PcuPurdfSts_Value(KePMDB_b_PcuPurdfByp);
    }
    else if ((KePMDB_b_PcuPurdfRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeADFB_b_A2DFau)
    {
        /* Outport: '<Root>/VePMDB_b_PcuPurdfSts' incorporates:
         *  Constant: '<S20>/KeTAIB_T_OEXV_OutTempRcvry'
         *  Switch: '<S14>/Switch'
         */
        (void)Rte_Write_VePMDB_b_PcuPurdfSts_Value(KePMDB_b_PcuPurdfRcvry);
    }
    else
    {
        /* Outport: '<Root>/VePMDB_b_PcuPurdfSts' incorporates:
         *  Switch: '<S14>/Switch'
         *  UnitDelay: '<S7>/VePMDB_b_PcuPurdfInit'
         */
        (void)Rte_Write_VePMDB_b_PcuPurdfSts_Value
            (PMDB_ac_DW.VePMDB_b_PcuPurdfInit_DSTATE);
    }

    /* End of Switch: '<S12>/Switch' */

    /* Outport: '<Root>/VePMDB_U_PcuPurdfVolt' incorporates:
     *  SignalConversion: '<S6>/Signal Conversion'
     *  UnitDelay: '<S29>/Unit_Delay_y'
     */
    (void)Rte_Write_VePMDB_U_PcuPurdfVolt_Value(PMDB_ac_DW.Unit_Delay_y_DSTATE);

    /* Outport: '<Root>/VePMDB_U_PcuPurdfRaw' incorporates:
     *  SignalConversion: '<S6>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_U_PcuPurdfRaw_Value(PMDB_ac_B.InputRawFild);

    /* Outport: '<Root>/VePMDB_b_PcuPurdfFA' incorporates:
     *  SignalConversion: '<S6>/Signal Conversion2'
     */
    (void)Rte_Write_VePMDB_b_PcuPurdfFA_Value
        (rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* End of Outputs for SubSystem: '<S5>/PCU Power Up Relay Diag Feedback' */
    PMDB_ac_DW.UnitDelay_DSTATE_d = false;

    /* End of Outputs for SubSystem: '<S1>/PCU Power Up Relay Diag Feedback' */
#endif

    /* End of UnitDelay: '<S1>/Unit Delay' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, PMDB_CODE) PMDB_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/ADIB_PwrOff'
     */
    /* Outport: '<Root>/NePMDB_Cnt_BpcmWakeupSTG_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCDMR_Cnt_BCIMInternal_MFOP'
     */
    (void)Rte_Write_NePMDB_Cnt_BpcmWakeupSTG_MFOP_NePMDB_Cnt_BpcmWakeupSTG_MFOP
        (PMDB_ac_DW.NePMDB_Cnt_BpcmWakeupSTG_MFOP);

    /* Outport: '<Root>/NePMDB_Cnt_BpcmWakeupSTB_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeCDMR_Cnt_BCIMInternal_MSOF'
     */
    (void)Rte_Write_NePMDB_Cnt_BpcmWakeupSTB_MFOP_NePMDB_Cnt_BpcmWakeupSTB_MFOP
        (PMDB_ac_DW.NePMDB_Cnt_BpcmWakeupSTB_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Model initialize function */
FUNC(void, PMDB_CODE) PMDB_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/5 ms'
     */
    /* InitializeConditions for UnitDelay: '<S2>/Unit Delay' */
#if Rte_SysCon_Variant_PMDB_BF1_Presence || Rte_SysCon_Variant_PMDB_BF2_Presence || Rte_SysCon_Variant_PMDB_BPCMWup_Presence || Rte_SysCon_Variant_PMDB_HB_Presence || Rte_SysCon_Variant_PMDB_IGNACC_Presence || Rte_SysCon_Variant_PMDB_IGNRUN_Presence || Rte_SysCon_Variant_PMDB_PWRPanel_Presence

    PMDB_ac_DW.UnitDelay_DSTATE_c = true;

#endif

    /* End of InitializeConditions for UnitDelay: '<S2>/Unit Delay' */
#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/20 ms'
     */
    /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
#if Rte_SysCon_Variant_PMDB_PCUPURDF_Presence

    /* SystemInitialize for Atomic SubSystem: '<S1>/PCU Power Up Relay Diag Feedback' */
    PMDB_ac_DW.UnitDelay_DSTATE_d = true;

    /* End of SystemInitialize for SubSystem: '<S1>/PCU Power Up Relay Diag Feedback' */
#endif

    /* End of InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Outputs for Atomic SubSystem: '<Root>/Init' */
#if Rte_SysCon_Variant_PMDB_BF1_Presence

    /* Outputs for Atomic SubSystem: '<S4>/BF1_SysVolt' */
    /* Outputs for Atomic SubSystem: '<S281>/BF1_SysVolt' */
    /* Outport: '<Root>/VePMDB_U_BF1_SysVolt' incorporates:
     *  Constant: '<S294>/Calib'
     *  SignalConversion: '<S293>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_U_BF1_SysVolt_Value(KePMDB_U_BF1_SysVoltInit);

    /* Outport: '<Root>/VePMDB_U_BF1_SysVoltRaw' incorporates:
     *  Constant: '<S294>/Calib'
     *  SignalConversion: '<S293>/Signal Conversion2'
     */
    (void)Rte_Write_VePMDB_U_BF1_SysVoltRaw_Value(KePMDB_U_BF1_SysVoltInit);

    /* End of Outputs for SubSystem: '<S281>/BF1_SysVolt' */
    /* End of Outputs for SubSystem: '<S4>/BF1_SysVolt' */
#endif

#if Rte_SysCon_Variant_PMDB_BF2_Presence

    /* Outputs for Atomic SubSystem: '<S4>/BF2_SysVolt' */
    /* Outputs for Atomic SubSystem: '<S282>/BF2_SysVolt' */
    /* Outport: '<Root>/VePMDB_U_BF2_SysVolt' incorporates:
     *  Constant: '<S296>/Calib'
     *  SignalConversion: '<S295>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_U_BF2_SysVolt_Value(KePMDB_U_BF2_SysVoltInit);

    /* Outport: '<Root>/VePMDB_U_BF2_SysVoltRaw' incorporates:
     *  Constant: '<S296>/Calib'
     *  SignalConversion: '<S295>/Signal Conversion2'
     */
    (void)Rte_Write_VePMDB_U_BF2_SysVoltRaw_Value(KePMDB_U_BF2_SysVoltInit);

    /* End of Outputs for SubSystem: '<S282>/BF2_SysVolt' */
    /* End of Outputs for SubSystem: '<S4>/BF2_SysVolt' */
#endif

#if Rte_SysCon_Variant_PMDB_HB_Presence

    /* Outputs for Atomic SubSystem: '<S4>/HB_SysVolt' */
    /* Outputs for Atomic SubSystem: '<S285>/HB_SysVolt' */
    /* Outport: '<Root>/VePMDB_U_HB_SysVolt' incorporates:
     *  Constant: '<S305>/Calib'
     *  SignalConversion: '<S304>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_U_HB_SysVolt_Value(KePMDB_U_HB_SysVoltInit);

    /* Outport: '<Root>/VePMDB_U_HB_SysVoltRaw' incorporates:
     *  Constant: '<S305>/Calib'
     *  SignalConversion: '<S304>/Signal Conversion2'
     */
    (void)Rte_Write_VePMDB_U_HB_SysVoltRaw_Value(KePMDB_U_HB_SysVoltInit);

    /* End of Outputs for SubSystem: '<S285>/HB_SysVolt' */
    /* End of Outputs for SubSystem: '<S4>/HB_SysVolt' */
#endif

#if Rte_SysCon_Variant_PMDB_IGNRUN_Presence

    /* Outputs for Atomic SubSystem: '<S4>/IgnRunCrnk' */
    /* Outputs for Atomic SubSystem: '<S288>/IgnRunCrnk' */
    /* Outport: '<Root>/VePMDB_U_IgnRunCrnk' incorporates:
     *  Constant: '<S311>/Calib'
     *  SignalConversion: '<S310>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_U_IgnRunCrnk_Value(KePMDB_U_IgnRunCrnkInit);

    /* Outport: '<Root>/VePMDB_U_IgnRunCrnkRaw' incorporates:
     *  Constant: '<S311>/Calib'
     *  SignalConversion: '<S310>/Signal Conversion2'
     */
    (void)Rte_Write_VePMDB_U_IgnRunCrnkRaw_Value(KePMDB_U_IgnRunCrnkInit);

    /* End of Outputs for SubSystem: '<S288>/IgnRunCrnk' */
    /* End of Outputs for SubSystem: '<S4>/IgnRunCrnk' */
#endif

#if Rte_SysCon_Variant_PMDB_IGNACC_Presence

    /* Outputs for Atomic SubSystem: '<S4>/IgnAccRun' */
    /* Outputs for Atomic SubSystem: '<S286>/IgnAccRun' */
    /* Outport: '<Root>/VePMDB_U_IgnAccRun' incorporates:
     *  Constant: '<S307>/Calib'
     *  SignalConversion: '<S306>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_U_IgnAccRun_Value(KePMDB_U_IgnAccRunInit);

    /* Outport: '<Root>/VePMDB_U_IgnAccRunRaw' incorporates:
     *  Constant: '<S307>/Calib'
     *  SignalConversion: '<S306>/Signal Conversion2'
     */
    (void)Rte_Write_VePMDB_U_IgnAccRunRaw_Value(KePMDB_U_IgnAccRunInit);

    /* End of Outputs for SubSystem: '<S286>/IgnAccRun' */
    /* End of Outputs for SubSystem: '<S4>/IgnAccRun' */
#endif

#if Rte_SysCon_Variant_PMDB_ESTOP_Presence

    /* Outputs for Atomic SubSystem: '<S4>/EStop' */
    /* Outputs for Atomic SubSystem: '<S284>/EStop' */
    /* Outport: '<Root>/VePMDB_b_EStop' incorporates:
     *  Constant: '<S303>/Calib'
     *  SignalConversion: '<S302>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_b_EStop_Value(KePMDB_b_EStopInit);

    /* End of Outputs for SubSystem: '<S284>/EStop' */
    /* End of Outputs for SubSystem: '<S4>/EStop' */
#endif

#if Rte_SysCon_Variant_PMDB_IGNRUNDIG_Presence

    /* Outputs for Atomic SubSystem: '<S4>/IgnRunCrnkDig' */
    /* Outputs for Atomic SubSystem: '<S289>/IgnRunCrnkDig' */
    /* Outport: '<Root>/VePMDB_b_IgnRunCrnk' incorporates:
     *  Constant: '<S313>/Calib'
     *  SignalConversion: '<S312>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_b_IgnRunCrnk_Value(KePMDB_b_IgnRunCrnkInit);

    /* End of Outputs for SubSystem: '<S289>/IgnRunCrnkDig' */
    /* End of Outputs for SubSystem: '<S4>/IgnRunCrnkDig' */
#endif

#if Rte_SysCon_Variant_PMDB_IGNACCDIG_Presence

    /* Outputs for Atomic SubSystem: '<S4>/IgnAccRunDig' */
    /* Outputs for Atomic SubSystem: '<S287>/IgnAccRunDig' */
    /* Outport: '<Root>/VePMDB_b_IgnAccRun' incorporates:
     *  Constant: '<S309>/Calib'
     *  SignalConversion: '<S308>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_b_IgnAccRun_Value(KePMDB_b_IgnAccRunInit);

    /* End of Outputs for SubSystem: '<S287>/IgnAccRunDig' */
    /* End of Outputs for SubSystem: '<S4>/IgnAccRunDig' */
#endif

#if Rte_SysCon_Variant_PMDB_OBCMWup_Presence

    /* Outputs for Atomic SubSystem: '<S4>/OBCMWup' */
    /* Outputs for Atomic SubSystem: '<S290>/OBCMWup' */
    /* Outport: '<Root>/VePMDB_b_OBCMWup' incorporates:
     *  Constant: '<S315>/Calib'
     *  SignalConversion: '<S314>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_b_OBCMWup_Value(KePMDB_b_OBCMWupInit);

    /* End of Outputs for SubSystem: '<S290>/OBCMWup' */
    /* End of Outputs for SubSystem: '<S4>/OBCMWup' */
#endif

#if Rte_SysCon_Variant_PMDB_BPCMWup_Presence

    /* Outputs for Atomic SubSystem: '<S4>/BPCMWakeUp' */
    /* Outputs for Atomic SubSystem: '<S283>/BPCMWakeUp' */
    /* DataStoreWrite: '<S297>/NeCDMR_Cnt_BCIMInternal_MFOP1' incorporates:
     *  Inport: '<Root>/NePMDB_Cnt_BpcmWakeupSTB_MFOP_PM_In'
     */
    (void)
        Rte_Read_NePMDB_Cnt_BpcmWakeupSTB_MFOP_Rx_NePMDB_Cnt_BpcmWakeupSTB_MFOP(
        &PMDB_ac_DW.NePMDB_Cnt_BpcmWakeupSTB_MFOP);

    /* DataStoreWrite: '<S297>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NePMDB_Cnt_BpcmWakeupSTG_MFOP_PM_In'
     */
    (void)
        Rte_Read_NePMDB_Cnt_BpcmWakeupSTG_MFOP_Rx_NePMDB_Cnt_BpcmWakeupSTG_MFOP(
        &PMDB_ac_DW.NePMDB_Cnt_BpcmWakeupSTG_MFOP);

    /* Outport: '<Root>/VePMDB_b_SmtPwrPanWakeUp' incorporates:
     *  Constant: '<S301>/Calib'
     *  SignalConversion: '<S297>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_b_SmtPwrPanWakeUp_Value(KePMDB_b_BPCMWakeUpInit);

    /* Outport: '<Root>/VePMDB_b_BpcmWakeupFailg' incorporates:
     *  Constant: '<S301>/Calib'
     *  SignalConversion: '<S297>/Signal Conversion3'
     */
    (void)Rte_Write_VePMDB_b_BpcmWakeupFailg_Value(KePMDB_b_BPCMWakeUpInit);

    /* Outport: '<Root>/VePMDB_b_BpcmWakeupFA' incorporates:
     *  Constant: '<S301>/Calib'
     *  SignalConversion: '<S297>/Signal Conversion4'
     */
    (void)Rte_Write_VePMDB_b_BpcmWakeupFA_Value(KePMDB_b_BPCMWakeUpInit);

    /* Outport: '<Root>/VePMDB_e_FaultSts_CtrlModWkUpCktHi' incorporates:
     *  Constant: '<S299>/Constant'
     */
    (void)Rte_Write_VePMDB_e_FaultSts_CtrlModWkUpCktHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VePMDB_e_FaultSts_CtrlModWkUpCktLo' incorporates:
     *  Constant: '<S298>/Constant'
     */
    (void)Rte_Write_VePMDB_e_FaultSts_CtrlModWkUpCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VePMDB_U_BpcmWakeupVolt' incorporates:
     *  Constant: '<S300>/Calib'
     *  SignalConversion: '<S297>/Signal Conversion2'
     */
    (void)Rte_Write_VePMDB_U_BpcmWakeupVolt_Value(KePMDB_U_BpcmWakeupVoltInit);

    /* End of Outputs for SubSystem: '<S283>/BPCMWakeUp' */
    /* End of Outputs for SubSystem: '<S4>/BPCMWakeUp' */
#endif

#if Rte_SysCon_Variant_PMDB_PWRPanel_Presence

    /* Outputs for Atomic SubSystem: '<S4>/PwrPanSw' */
    /* Outputs for Atomic SubSystem: '<S292>/PwrPanSw' */
    /* Outport: '<Root>/VePMDB_U_PwrPanSw_SysVolt' incorporates:
     *  Constant: '<S319>/Calib'
     *  SignalConversion: '<S318>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_U_PwrPanSw_SysVolt_Value(KePMDB_U_PwrPanSwInit);

    /* Outport: '<Root>/VePMDB_U_PwrPanSw_SysVoltRaw' incorporates:
     *  Constant: '<S319>/Calib'
     *  SignalConversion: '<S318>/Signal Conversion2'
     */
    (void)Rte_Write_VePMDB_U_PwrPanSw_SysVoltRaw_Value(KePMDB_U_PwrPanSwInit);

    /* End of Outputs for SubSystem: '<S292>/PwrPanSw' */
    /* End of Outputs for SubSystem: '<S4>/PwrPanSw' */
#endif

#if Rte_SysCon_Variant_PMDB_PCUPURDF_Presence

    /* Outputs for Atomic SubSystem: '<S4>/PcuPurdf' */
    /* Outputs for Atomic SubSystem: '<S291>/PcuPurdf' */
    /* Outport: '<Root>/VePMDB_U_PcuPurdfVolt' incorporates:
     *  Constant: '<S317>/Calib'
     *  SignalConversion: '<S316>/Signal Conversion1'
     */
    (void)Rte_Write_VePMDB_U_PcuPurdfVolt_Value(KePMDB_U_PcuPurdfInit);

    /* Outport: '<Root>/VePMDB_U_PcuPurdfRaw' incorporates:
     *  Constant: '<S317>/Calib'
     *  SignalConversion: '<S316>/Signal Conversion2'
     */
    (void)Rte_Write_VePMDB_U_PcuPurdfRaw_Value(KePMDB_U_PcuPurdfInit);

    /* End of Outputs for SubSystem: '<S291>/PcuPurdf' */
    /* End of Outputs for SubSystem: '<S4>/PcuPurdf' */
#endif

    /* End of Outputs for SubSystem: '<Root>/Init' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
