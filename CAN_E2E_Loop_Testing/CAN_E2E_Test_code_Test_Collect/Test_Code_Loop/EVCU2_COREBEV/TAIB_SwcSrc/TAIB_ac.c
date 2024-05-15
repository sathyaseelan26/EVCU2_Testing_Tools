/*
 * File: TAIB_ac.c
 *
 * Code generated for Simulink model 'TAIB_ac'.
 *
 * Model version                  : 4.345
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:16:13 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TAIB_ac.h"
#include "look1_iflf_binlca_19a.h"

/* Named constants for Chart: '<S48>/AntiSpkFil' */
#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_CEXVOP_Presence || Rte_SysCon_Variant_TAIB_CEXVOT_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_OEXVOP_Presence || Rte_SysCon_Variant_TAIB_OEXVOT_Presence
#define TAIB_ac_IN_FILTERING           ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_CEXVOP_Presence || Rte_SysCon_Variant_TAIB_CEXVOT_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_OEXVOP_Presence || Rte_SysCon_Variant_TAIB_OEXVOT_Presence
#define TAIB_ac_IN_NORMAL              ((uint8)2U)
#endif

/* Named constants for Chart: '<S309>/MalfunctioningDetection' */
#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence
#define TAIB_ac_IN_ERR_M0              ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence
#define TAIB_ac_IN_ERR_M0_FollowUp     ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence
#define TAIB_ac_IN_ERR_M1              ((uint8)3U)
#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence
#define TAIB_ac_IN_ERR_M1_FollowUp     ((uint8)4U)
#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence
#define TAIB_ac_IN_ERR_M2              ((uint8)5U)
#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence
#define TAIB_ac_IN_ERR_M2_FollowUp     ((uint8)6U)
#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence
#define TAIB_ac_IN_NOERR_STATE         ((uint8)7U)
#endif

/* Named constants for Chart: '<S309>/TimeoutLenghtMeasurement' */
#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence
#define TAIB_ac_IN_INVALID_STATE       ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence
#define TAIB_ac_IN_NORMAL_STATE        ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence
#define TAIB_ac_IN_TIMEOUT_END_STATE   ((uint8)3U)
#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence
#define TAIB_ac_IN_TIMEOUT_RUNNING_STATE ((uint8)4U)
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
#define START_SEC_CALIB_UNSPECIFIED_TAIB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_TAIB_5VAUX_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_5VAux1SpikeThd = 2U;
                         /* Referenced by: '<S189>/KeTAIB_Cnt_5VAux1SpikeThd' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_CEXV_OutPresSnsrSpikeThd
    = 2U;      /* Referenced by: '<S129>/KeTAIB_Cnt_CEXV_OutPresSnsrSpikeThd' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_CEXV_OutTempSnsrSpikeThd
    = 2U;      /* Referenced by: '<S155>/KeTAIB_Cnt_CEXV_OutTempSnsrSpikeThd' */

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_FailLim5VAux1 = 10U;
                          /* Referenced by: '<S167>/KeTAIB_Cnt_FailLim5VAux1' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_FailLimRadFanErrM0 =
    200U;            /* Referenced by: '<S324>/KeTAIB_Cnt_FailLimRadFanErrM0' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_FailLimRadFanErrM1 =
    200U;            /* Referenced by: '<S343>/KeTAIB_Cnt_FailLimRadFanErrM1' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_FailLimRadFanErrM2 =
    200U;            /* Referenced by: '<S362>/KeTAIB_Cnt_FailLimRadFanErrM2' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_HghRfrgtPresSnsrSpikeThd
    = 2U;      /* Referenced by: '<S102>/KeTAIB_Cnt_HghRfrgtPresSnsrSpikeThd' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_OEXV_InTempSnsrSpikeThd =
    2U;         /* Referenced by: '<S247>/KeTAIB_Cnt_OEXV_InTempSnsrSpikeThd' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOP_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_OEXV_OutPresSnsrSpikeThd
    = 2U;      /* Referenced by: '<S275>/KeTAIB_Cnt_OEXV_OutPresSnsrSpikeThd' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOT_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_OEXV_OutTempSnsrSpikeThd
    = 2U;      /* Referenced by: '<S301>/KeTAIB_Cnt_OEXV_OutTempSnsrSpikeThd' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_STBFailLimHghRfrgtPSnsr =
    1U;          /* Referenced by: '<S53>/KeTAIB_Cnt_STBFailLimHghRfrgtPSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_STBFailLimOEXV_InTSnsr =
    10U;         /* Referenced by: '<S198>/KeTAIB_Cnt_STBFailLimOEXV_InTSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_STBSmplLimHghRfrgtPSnsr =
    3U;          /* Referenced by: '<S54>/KeTAIB_Cnt_STBSmplLimHghRfrgtPSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_STBSmplLimOEXV_InTSnsr =
    15U;         /* Referenced by: '<S199>/KeTAIB_Cnt_STBSmplLimOEXV_InTSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_STGFailLimHghRfrgtPSnsr =
    1U;          /* Referenced by: '<S73>/KeTAIB_Cnt_STGFailLimHghRfrgtPSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_STGFailLimOEXV_InTSnsr =
    10U;         /* Referenced by: '<S218>/KeTAIB_Cnt_STGFailLimOEXV_InTSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_STGSmplLimHghRfrgtPSnsr =
    3U;          /* Referenced by: '<S75>/KeTAIB_Cnt_STGSmplLimHghRfrgtPSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_STGSmplLimOEXV_InTSnsr =
    15U;         /* Referenced by: '<S220>/KeTAIB_Cnt_STGSmplLimOEXV_InTSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_SmplLim5VAux1 = 15U;
                          /* Referenced by: '<S169>/KeTAIB_Cnt_SmplLim5VAux1' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_SmplLimRadFanErrM0 =
    250U;            /* Referenced by: '<S326>/KeTAIB_Cnt_SmplLimRadFanErrM0' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_SmplLimRadFanErrM1 =
    250U;            /* Referenced by: '<S345>/KeTAIB_Cnt_SmplLimRadFanErrM1' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(uint16, TAIB_VAR_INIT) KeTAIB_Cnt_SmplLimRadFanErrM2 =
    250U;            /* Referenced by: '<S364>/KeTAIB_Cnt_SmplLimRadFanErrM2' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_Pct_RadFanCmdOnThr = 7.0F;
                         /* Referenced by: '<S311>/KeTAIB_Pct_RadFanCmdOnThr' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_Pct_RadFanSts_DCInit = 0.0F;
                        /* Referenced by: '<S34>/KeTAIB_Pct_RadFanSts_DCInit' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_Pct_RadFanSts_DC_Byp =
    50.0F;             /* Referenced by: '<S384>/KeTAIB_Pct_RadFanSts_DC_Byp' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_T_CEXV_OutTempRcvry = 80.0F;
                        /* Referenced by: '<S152>/KeTAIB_T_CEXV_OutTempRcvry' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_T_CEXV_OutTempSnsrByp =
    80.0F;            /* Referenced by: '<S150>/KeTAIB_T_CEXV_OutTempSnsrByp' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_T_CEXV_OutTempSnsrInit =
    25.0F;            /* Referenced by: '<S21>/KeTAIB_T_CEXV_OutTempSnsrInit' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_T_OEXV_InTempRcvry = 80.0F;
                         /* Referenced by: '<S244>/KeTAIB_T_OEXV_InTempRcvry' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_T_OEXV_InTempSnsrByp =
    80.0F;             /* Referenced by: '<S242>/KeTAIB_T_OEXV_InTempSnsrByp' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_T_OEXV_InTempSnsrInit =
    25.0F;             /* Referenced by: '<S25>/KeTAIB_T_OEXV_InTempSnsrInit' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_T_OEXV_OutTempRcvry = 80.0F;
                        /* Referenced by: '<S298>/KeTAIB_T_OEXV_OutTempRcvry' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_T_OEXV_OutTempSnsrByp =
    80.0F;            /* Referenced by: '<S296>/KeTAIB_T_OEXV_OutTempSnsrByp' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_T_OEXV_OutTempSnsrInit =
    25.0F;            /* Referenced by: '<S29>/KeTAIB_T_OEXV_OutTempSnsrInit' */

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_U_5VAux1SpikeThd = 5.0F;
                           /* Referenced by: '<S190>/KeTAIB_U_5VAux1SpikeThd' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_U_CEXV_OutPresSnsrSpikeThd =
    1.0F;        /* Referenced by: '<S130>/KeTAIB_U_CEXV_OutPresSnsrSpikeThd' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_U_CEXV_OutTempSnsrSpikeThd =
    1.0F;        /* Referenced by: '<S156>/KeTAIB_U_CEXV_OutTempSnsrSpikeThd' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_U_HghRfrgtPresSnsrSpikeThd =
    1.0F;        /* Referenced by: '<S103>/KeTAIB_U_HghRfrgtPresSnsrSpikeThd' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_U_OEXV_InTempSnsrSpikeThd =
    1.0F;         /* Referenced by: '<S248>/KeTAIB_U_OEXV_InTempSnsrSpikeThd' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOP_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_U_OEXV_OutPresSnsrSpikeThd =
    1.0F;        /* Referenced by: '<S276>/KeTAIB_U_OEXV_OutPresSnsrSpikeThd' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_U_OEXV_OutTempSnsrSpikeThd =
    1.0F;        /* Referenced by: '<S302>/KeTAIB_U_OEXV_OutTempSnsrSpikeThd' */

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_U_STBCktHiFltLim_5VAux1 =
    5.25F;          /* Referenced by: '<S170>/KeTAIB_U_STBCktHiFltLim_5VAux1' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

static volatile CONST(float32, TAIB_VAR_INIT)
    KeTAIB_U_STBCktHiFltLim_CEXV_OutPSnsr = 4.95F;
             /* Referenced by: '<S116>/KeTAIB_U_STBCktHiFltLim_CEXV_OutPSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence

static volatile CONST(float32, TAIB_VAR_INIT)
    KeTAIB_U_STBCktHiFltLim_CEXV_OutTSnsr = 4.95F;
             /* Referenced by: '<S142>/KeTAIB_U_STBCktHiFltLim_CEXV_OutTSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(float32, TAIB_VAR_INIT)
    KeTAIB_U_STBCktHiFltLim_HghRfrgtPSnsr = 4.95F;
              /* Referenced by: '<S56>/KeTAIB_U_STBCktHiFltLim_HghRfrgtPSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(float32, TAIB_VAR_INIT)
    KeTAIB_U_STBCktHiFltLim_OEXV_InTSnsr = 4.95F;
              /* Referenced by: '<S201>/KeTAIB_U_STBCktHiFltLim_OEXV_InTSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOP_Presence

static volatile CONST(float32, TAIB_VAR_INIT)
    KeTAIB_U_STBCktHiFltLim_OEXV_OutPSnsr = 4.95F;
             /* Referenced by: '<S262>/KeTAIB_U_STBCktHiFltLim_OEXV_OutPSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOT_Presence

static volatile CONST(float32, TAIB_VAR_INIT)
    KeTAIB_U_STBCktHiFltLim_OEXV_OutTSnsr = 4.95F;
             /* Referenced by: '<S288>/KeTAIB_U_STBCktHiFltLim_OEXV_OutTSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_U_STGCktLowFltLim_5VAux1 =
    0.05F;         /* Referenced by: '<S171>/KeTAIB_U_STGCktLowFltLim_5VAux1' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

static volatile CONST(float32, TAIB_VAR_INIT)
    KeTAIB_U_STGCktLowFltLim_CEXV_OutPSnsr = 0.05F;
            /* Referenced by: '<S118>/KeTAIB_U_STGCktLowFltLim_CEXV_OutPSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence

static volatile CONST(float32, TAIB_VAR_INIT)
    KeTAIB_U_STGCktLowFltLim_CEXV_OutTSnsr = 0.05F;
            /* Referenced by: '<S144>/KeTAIB_U_STGCktLowFltLim_CEXV_OutTSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(float32, TAIB_VAR_INIT)
    KeTAIB_U_STGCktLowFltLim_HghRfrgtPSnsr = 0.05F;
             /* Referenced by: '<S76>/KeTAIB_U_STGCktLowFltLim_HghRfrgtPSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(float32, TAIB_VAR_INIT)
    KeTAIB_U_STGCktLowFltLim_OEXV_InTSnsr = 0.05F;
             /* Referenced by: '<S221>/KeTAIB_U_STGCktLowFltLim_OEXV_InTSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOP_Presence

static volatile CONST(float32, TAIB_VAR_INIT)
    KeTAIB_U_STGCktLowFltLim_OEXV_OutPSnsr = 0.05F;
            /* Referenced by: '<S264>/KeTAIB_U_STGCktLowFltLim_OEXV_OutPSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOT_Presence

static volatile CONST(float32, TAIB_VAR_INIT)
    KeTAIB_U_STGCktLowFltLim_OEXV_OutTSnsr = 0.05F;
            /* Referenced by: '<S290>/KeTAIB_U_STGCktLowFltLim_OEXV_OutTSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_CEXV_OutPresRcvryEnbl = 0;
                    /* Referenced by: '<S126>/KeTAIB_b_CEXV_OutPresRcvryEnbl' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_CEXV_OutPresSnsrBypEnbl =
    0;            /* Referenced by: '<S124>/KeTAIB_b_CEXV_OutPresSnsrBypEnbl' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_CEXV_OutTempRcvryEnbl = 0;
                    /* Referenced by: '<S153>/KeTAIB_b_CEXV_OutTempRcvryEnbl' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_CEXV_OutTempSnsrBypEnbl =
    0;            /* Referenced by: '<S151>/KeTAIB_b_CEXV_OutTempSnsrBypEnbl' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_DiagEnblRadFanErrM0 = 1;
                      /* Referenced by: '<S327>/KeTAIB_b_DiagEnblRadFanErrM0' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_DiagEnblRadFanErrM1 = 1;
                      /* Referenced by: '<S346>/KeTAIB_b_DiagEnblRadFanErrM1' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_DiagEnblRadFanErrM2 = 1;
                      /* Referenced by: '<S365>/KeTAIB_b_DiagEnblRadFanErrM2' */

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_DiagEnbl_5VAux1 = 1;
                          /* Referenced by: '<S172>/KeTAIB_b_DiagEnbl_5VAux1' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_HghRfrgPresSnsrBypEnbl =
    0;              /* Referenced by: '<S97>/KeTAIB_b_HghRfrgPresSnsrBypEnbl' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_HghRfrgtPresSnsrRcvryEnbl
    = 0;         /* Referenced by: '<S99>/KeTAIB_b_HghRfrgtPresSnsrRcvryEnbl' */

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_LtchEnbl5VAux1 = 0;
             /* Referenced by: '<S168>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_LtchEnblHghRfrgtPSnsrSTB =
    0;        /* Referenced by: '<S55>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_LtchEnblHghRfrgtPSnsrSTG =
    0;        /* Referenced by: '<S74>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_LtchEnblOEXVInTSnsrSTB =
    0;       /* Referenced by: '<S200>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_LtchEnblOEXVInTSnsrSTG =
    0;       /* Referenced by: '<S219>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_LtchEnblRadFanErrM0 = 0;
             /* Referenced by: '<S325>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_LtchEnblRadFanErrM1 = 0;
             /* Referenced by: '<S344>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_LtchEnblRadFanErrM2 = 0;
             /* Referenced by: '<S363>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_OEXV_InTempRcvryEnbl = 0;
                     /* Referenced by: '<S245>/KeTAIB_b_OEXV_InTempRcvryEnbl' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_OEXV_InTempSnsrBypEnbl =
    0;             /* Referenced by: '<S243>/KeTAIB_b_OEXV_InTempSnsrBypEnbl' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOP_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_OEXV_OutPresRcvryEnbl = 0;
                    /* Referenced by: '<S272>/KeTAIB_b_OEXV_OutPresRcvryEnbl' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOP_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_OEXV_OutPresSnsrBypEnbl =
    0;            /* Referenced by: '<S270>/KeTAIB_b_OEXV_OutPresSnsrBypEnbl' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOT_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_OEXV_OutTempRcvryEnbl = 0;
                    /* Referenced by: '<S299>/KeTAIB_b_OEXV_OutTempRcvryEnbl' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOT_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_OEXV_OutTempSnsrBypEnbl =
    0;            /* Referenced by: '<S297>/KeTAIB_b_OEXV_OutTempSnsrBypEnbl' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_RadFanStsPolarInvEnb = 0;
                     /* Referenced by: '<S381>/HeTAIB_b_RadFanStsPolarInvEnb' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_RadFanSts_DC_BypEnbl = 0;
                     /* Referenced by: '<S385>/KeTAIB_b_RadFanSts_DC_BypEnbl' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_RadFanSts_PW_BypEnbl = 0;
                     /* Referenced by: '<S386>/KeTAIB_b_RadFanSts_PW_BypEnbl' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_RadFanSts_Prd_BypEnbl = 0;
                    /* Referenced by: '<S387>/KeTAIB_b_RadFanSts_Prd_BypEnbl' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_RadFanSts_TiOut_Byp = 0;
                      /* Referenced by: '<S388>/KeTAIB_b_RadFanSts_TiOut_Byp' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_RadFanSts_TiOut_BypEnbl =
    0;            /* Referenced by: '<S389>/KeTAIB_b_RadFanSts_TiOut_BypEnbl' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_STBDiagEnbl_HghRfrgtPSnsr
    = 1;         /* Referenced by: '<S57>/KeTAIB_b_STBDiagEnbl_HghRfrgtPSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_STBDiagEnbl_OEXV_InTSnsr =
    1;           /* Referenced by: '<S202>/KeTAIB_b_STBDiagEnbl_OEXV_InTSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_STGDiagEnbl_HghRfrgtPSnsr
    = 1;         /* Referenced by: '<S77>/KeTAIB_b_STGDiagEnbl_HghRfrgtPSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(boolean, TAIB_VAR_INIT) KeTAIB_b_STGDiagEnbl_OEXV_InTSnsr =
    1;           /* Referenced by: '<S222>/KeTAIB_b_STGDiagEnbl_OEXV_InTSnsr' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_k_CEXV_OutPresSnsrFiltGx =
    0.8F;          /* Referenced by: '<S131>/KeTAIB_k_CEXV_OutPresSnsrFiltGx' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_k_CEXV_OutTempSnsrFiltGx =
    0.8F;          /* Referenced by: '<S157>/KeTAIB_k_CEXV_OutTempSnsrFiltGx' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_k_HghRfrgtPresSnsrFiltGx =
    0.8F;          /* Referenced by: '<S104>/KeTAIB_k_HghRfrgtPresSnsrFiltGx' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_k_OEXV_InTempSnsrFiltGx =
    0.8F;           /* Referenced by: '<S249>/KeTAIB_k_OEXV_InTempSnsrFiltGx' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOP_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_k_OEXV_OutPresSnsrFiltGx =
    0.8F;          /* Referenced by: '<S277>/KeTAIB_k_OEXV_OutPresSnsrFiltGx' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_k_OEXV_OutTempSnsrFiltGx =
    0.8F;          /* Referenced by: '<S303>/KeTAIB_k_OEXV_OutTempSnsrFiltGx' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_p_CEXV_OutPresRcvry = 80.0F;
                        /* Referenced by: '<S127>/KeTAIB_p_CEXV_OutPresRcvry' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_p_CEXV_OutPresSnsrByp =
    80.0F;            /* Referenced by: '<S125>/KeTAIB_p_CEXV_OutPresSnsrByp' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_p_CEXV_OutPresSnsrInit =
    100.0F;           /* Referenced by: '<S19>/KeTAIB_p_CEXV_OutPresSnsrInit' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_p_HghRfrgPresSnsrByp = 0.0F;
                        /* Referenced by: '<S98>/KeTAIB_p_HghRfrgPresSnsrByp' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_p_HghRfrgtPresSnsrInit =
    100.0F;           /* Referenced by: '<S17>/KeTAIB_p_HghRfrgtPresSnsrInit' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_p_HghRfrgtPresSnsrRcvry =
    80.0F;          /* Referenced by: '<S100>/KeTAIB_p_HghRfrgtPresSnsrRcvry' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOP_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_p_OEXV_OutPresRcvry = 80.0F;
                        /* Referenced by: '<S273>/KeTAIB_p_OEXV_OutPresRcvry' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOP_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_p_OEXV_OutPresSnsrByp =
    80.0F;            /* Referenced by: '<S271>/KeTAIB_p_OEXV_OutPresSnsrByp' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOP_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_p_OEXV_OutPresSnsrInit =
    100.0F;           /* Referenced by: '<S27>/KeTAIB_p_OEXV_OutPresSnsrInit' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_t_RadFanErrM0Thres = 8.8F;
                         /* Referenced by: '<S312>/KeTAIB_t_RadFanErrM0Thres' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_t_RadFanErrM1Thres = 8.0F;
                         /* Referenced by: '<S313>/KeTAIB_t_RadFanErrM1Thres' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_t_RadFanErrM2Thres = 11.7F;
                         /* Referenced by: '<S314>/KeTAIB_t_RadFanErrM2Thres' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_t_RadFanInvldlowThres =
    12.0F;            /* Referenced by: '<S315>/KeTAIB_t_RadFanInvldlowThres' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_t_RadFanRelHighThres = 4.0F;
                       /* Referenced by: '<S316>/KeTAIB_t_RadFanRelHighThres' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_t_RadFanSts_PWInit = 0.0F;
                          /* Referenced by: '<S35>/KeTAIB_t_RadFanSts_PWInit' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_t_RadFanSts_PW_Byp = 0.5F;
                         /* Referenced by: '<S390>/KeTAIB_t_RadFanSts_PW_Byp' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_t_RadFanSts_PrdInit = 0.0F;
                         /* Referenced by: '<S36>/KeTAIB_t_RadFanSts_PrdInit' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_t_RadFanSts_Prd_Byp = 1.0F;
                        /* Referenced by: '<S391>/KeTAIB_t_RadFanSts_Prd_Byp' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KeTAIB_t_RadFanTolerance = 0.25F;
                          /* Referenced by: '<S317>/KeTAIB_t_RadFanTolerance' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KtTAIB_T_CEXV_OutTempSnsrChartc[24]
    =
{
    191.0F, 150.0F, 140.0F, 130.0F, 120.0F, 110.0F, 100.0F, 90.0F, 80.0F, 70.0F,
    60.0F, 50.0F, 40.0F, 30.0F, 20.0F, 10.0F, 0.0F, -10.0F, -20.0F, -30.0F,
    -40.0F, -50.0F, -60.0F, -64.0F
} ;                                    /* Referenced by: '<S146>/Vector' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KtTAIB_T_OEXV_InTempSnsrChartc[24]
    =
{
    191.0F, 150.0F, 140.0F, 130.0F, 120.0F, 110.0F, 100.0F, 90.0F, 80.0F, 70.0F,
    60.0F, 50.0F, 40.0F, 30.0F, 20.0F, 10.0F, 0.0F, -10.0F, -20.0F, -30.0F,
    -40.0F, -50.0F, -60.0F, -64.0F
} ;                                    /* Referenced by: '<S238>/Vector' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KtTAIB_T_OEXV_OutTempSnsrChartc[24]
    =
{
    191.0F, 150.0F, 140.0F, 130.0F, 120.0F, 110.0F, 100.0F, 90.0F, 80.0F, 70.0F,
    60.0F, 50.0F, 40.0F, 30.0F, 20.0F, 10.0F, 0.0F, -10.0F, -20.0F, -30.0F,
    -40.0F, -50.0F, -60.0F, -64.0F
} ;                                    /* Referenced by: '<S292>/Vector' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KtTAIB_p_CEXV_OutPresSnsrChartc[24]
    =
{
    1910.0F, 1500.0F, 1400.0F, 1300.0F, 1200.0F, 1100.0F, 1000.0F, 900.0F,
    800.0F, 700.0F, 600.0F, 500.0F, 400.0F, 300.0F, 200.0F, 100.0F, 50.0F, 40.0F,
    30.0F, 20.0F, 15.0F, 10.0F, 5.0F, 0.0F
} ;                                    /* Referenced by: '<S120>/Vector' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KtTAIB_p_HghRfrgtPresSnsrChartc[24]
    =
{
    1910.0F, 1500.0F, 1400.0F, 1300.0F, 1200.0F, 1100.0F, 1000.0F, 900.0F,
    800.0F, 700.0F, 600.0F, 500.0F, 400.0F, 300.0F, 200.0F, 100.0F, 50.0F, 40.0F,
    30.0F, 20.0F, 15.0F, 10.0F, 5.0F, 0.0F
} ;                                    /* Referenced by: '<S93>/Vector' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOP_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KtTAIB_p_OEXV_OutPresSnsrChartc[24]
    =
{
    1910.0F, 1500.0F, 1400.0F, 1300.0F, 1200.0F, 1100.0F, 1000.0F, 900.0F,
    800.0F, 700.0F, 600.0F, 500.0F, 400.0F, 300.0F, 200.0F, 100.0F, 50.0F, 40.0F,
    30.0F, 20.0F, 15.0F, 10.0F, 5.0F, 0.0F
} ;                                    /* Referenced by: '<S266>/Vector' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KxTAIB_U_CEXV_OutPresSnsrChartc[24]
    =
{
    0.0F, 0.22F, 0.279F, 0.347F, 0.445F, 0.552F, 0.723F, 0.929F, 1.193F, 1.52F,
    1.916F, 2.366F, 2.849F, 3.338F, 3.788F, 4.164F, 4.457F, 4.668F, 4.804F,
    4.897F, 4.946F, 4.971F, 4.99F, 5.0F
} ;                                    /* Referenced by: '<S120>/Vector' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KxTAIB_U_CEXV_OutTempSnsrChartc[24]
    =
{
    0.0F, 0.22F, 0.279F, 0.347F, 0.445F, 0.552F, 0.723F, 0.929F, 1.193F, 1.52F,
    1.916F, 2.366F, 2.849F, 3.338F, 3.788F, 4.164F, 4.457F, 4.668F, 4.804F,
    4.897F, 4.946F, 4.971F, 4.99F, 5.0F
} ;                                    /* Referenced by: '<S146>/Vector' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KxTAIB_U_HghRfrgtPresSnsrChartc[24]
    =
{
    0.0F, 0.22F, 0.279F, 0.347F, 0.445F, 0.552F, 0.723F, 0.929F, 1.193F, 1.52F,
    1.916F, 2.366F, 2.849F, 3.338F, 3.788F, 4.164F, 4.457F, 4.668F, 4.804F,
    4.897F, 4.946F, 4.971F, 4.99F, 5.0F
} ;                                    /* Referenced by: '<S93>/Vector' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KxTAIB_U_OEXV_InTempSnsrChartc[24]
    =
{
    0.0F, 0.22F, 0.279F, 0.347F, 0.445F, 0.552F, 0.723F, 0.929F, 1.193F, 1.52F,
    1.916F, 2.366F, 2.849F, 3.338F, 3.788F, 4.164F, 4.457F, 4.668F, 4.804F,
    4.897F, 4.946F, 4.971F, 4.99F, 5.0F
} ;                                    /* Referenced by: '<S238>/Vector' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOP_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KxTAIB_U_OEXV_OutPresSnsrChartc[24]
    =
{
    0.0F, 0.22F, 0.279F, 0.347F, 0.445F, 0.552F, 0.723F, 0.929F, 1.193F, 1.52F,
    1.916F, 2.366F, 2.849F, 3.338F, 3.788F, 4.164F, 4.457F, 4.668F, 4.804F,
    4.897F, 4.946F, 4.971F, 4.99F, 5.0F
} ;                                    /* Referenced by: '<S266>/Vector' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOT_Presence

static volatile CONST(float32, TAIB_VAR_INIT) KxTAIB_U_OEXV_OutTempSnsrChartc[24]
    =
{
    0.0F, 0.22F, 0.279F, 0.347F, 0.445F, 0.552F, 0.723F, 0.929F, 1.193F, 1.52F,
    1.916F, 2.366F, 2.849F, 3.338F, 3.788F, 4.164F, 4.457F, 4.668F, 4.804F,
    4.897F, 4.946F, 4.971F, 4.99F, 5.0F
} ;                                    /* Referenced by: '<S292>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_TAIB
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TAIB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_TAIB_5VAUX_Presence

static VAR(uint16, TAIB_VAR_INIT) VeTAIB_Cnt_P0697Fail;/* '<S181>/Switch1' */

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence

static VAR(uint16, TAIB_VAR_INIT) VeTAIB_Cnt_P0697Smpl;/* '<S182>/Switch1' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static VAR(uint16, TAIB_VAR_INIT) VeTAIB_Cnt_RadFanFailErrM0;/* '<S336>/Switch1' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static VAR(uint16, TAIB_VAR_INIT) VeTAIB_Cnt_RadFanFailErrM1;/* '<S355>/Switch1' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static VAR(uint16, TAIB_VAR_INIT) VeTAIB_Cnt_RadFanFailErrM2;/* '<S374>/Switch1' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static VAR(uint16, TAIB_VAR_INIT) VeTAIB_Cnt_RadFanSmplErrM0;/* '<S337>/Switch1' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static VAR(uint16, TAIB_VAR_INIT) VeTAIB_Cnt_RadFanSmplErrM1;/* '<S356>/Switch1' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static VAR(uint16, TAIB_VAR_INIT) VeTAIB_Cnt_RadFanSmplErrM2;/* '<S375>/Switch1' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static VAR(uint16, TAIB_VAR_INIT) VeTAIB_Cnt_STBFailLimHghRfrgtPSnsr;/* '<S66>/Switch1' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static VAR(uint16, TAIB_VAR_INIT) VeTAIB_Cnt_STBFailLimOEXV_InTSnsr;/* '<S211>/Switch1' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static VAR(uint16, TAIB_VAR_INIT) VeTAIB_Cnt_STBSmplLimHghRfrgtPSnsr;/* '<S67>/Switch1' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static VAR(uint16, TAIB_VAR_INIT) VeTAIB_Cnt_STBSmplLimOEXV_InTSnsr;/* '<S212>/Switch1' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static VAR(uint16, TAIB_VAR_INIT) VeTAIB_Cnt_STGFailLimHghRfrgtPSnsr;/* '<S86>/Switch1' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static VAR(uint16, TAIB_VAR_INIT) VeTAIB_Cnt_STGFailLimOEXV_InTSnsr;/* '<S231>/Switch1' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static VAR(uint16, TAIB_VAR_INIT) VeTAIB_Cnt_STGSmplLimHghRfrgtPSnsr;/* '<S87>/Switch1' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static VAR(uint16, TAIB_VAR_INIT) VeTAIB_Cnt_STGSmplLimOEXV_InTSnsr;/* '<S232>/Switch1' */

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_U_5VAux1VoltRaw;/* '<S164>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_U_CEXV_OutPresSnsrVolt;/* '<S135>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_U_CEXV_OutPresSnsrVoltRaw;/* '<S112>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_U_CEXV_OutPresSnsrVoltXChartC[2];/* '<S111>/Gain' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_U_CEXV_OutTempSnsrVolt;/* '<S161>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_U_CEXV_OutTempSnsrVoltRaw;/* '<S139>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_U_CEXV_OutTempSnsrVoltXChartC[2];/* '<S138>/Gain' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_U_HghRfrgtPresSnsrVolt;/* '<S108>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_U_HghRfrgtPresSnsrVoltRaw;/* '<S48>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_U_HghRfrgtPresSnsrVoltXChartC[2];/* '<S47>/Gain' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_U_OEXV_InTempSnsrVolt;/* '<S253>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_U_OEXV_InTempSnsrVoltRaw;/* '<S194>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_U_OEXV_InTempSnsrVoltXChartC[2];/* '<S193>/Gain' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOP_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_U_OEXV_OutPresSnsrVolt;/* '<S281>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOP_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_U_OEXV_OutPresSnsrVoltRaw;/* '<S257>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOP_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_U_OEXV_OutPresSnsrVoltXChartC[2];/* '<S256>/Gain' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOT_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_U_OEXV_OutTempSnsrVolt;/* '<S307>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOT_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_U_OEXV_OutTempSnsrVoltRaw;/* '<S285>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOT_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_U_OEXV_OutTempSnsrVoltXChartC[2];/* '<S284>/Gain' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static VAR(boolean, TAIB_VAR_INIT) VeTAIB_b_RadFanDiagTrig;/* '<S309>/TimeoutLenghtMeasurement' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static VAR(boolean, TAIB_VAR_INIT) VeTAIB_b_RadFanFltCritM0;/* '<S309>/MalfunctioningDetection' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static VAR(boolean, TAIB_VAR_INIT) VeTAIB_b_RadFanFltCritM1;/* '<S309>/MalfunctioningDetection' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static VAR(boolean, TAIB_VAR_INIT) VeTAIB_b_RadFanFltCritM2;/* '<S309>/MalfunctioningDetection' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static VAR(TeTAIB_e_FltDtctnSt, TAIB_VAR_INIT) VeTAIB_e_RadFanFltDtctnSt;/* '<S309>/MalfunctioningDetection' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static VAR(TeTAIB_e_ToutMeasSt, TAIB_VAR_INIT) VeTAIB_e_RadFanToutMeasSt;/* '<S309>/TimeoutLenghtMeasurement' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_t_RadFanDiagIntervLenght;/* '<S309>/MalfunctioningDetection' */

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static VAR(float32, TAIB_VAR_INIT) VeTAIB_t_RadFanToutLenght;/* '<S309>/TimeoutLenghtMeasurement' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TAIB
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TAIB
#include "MemMap.h"

VAR(B_TAIB_ac_T, TAIB_VAR_INIT) TAIB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TAIB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TAIB
#include "MemMap.h"

VAR(DW_TAIB_ac_T, TAIB_VAR_INIT) TAIB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TAIB
#include "MemMap.h"
#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static FUNC(void, TAIB_CODE_LOCAL) TAIB_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TAIB_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static FUNC(void, TAIB_CODE_LOCAL) TAIB_ac_Init_g(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TAIB_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static FUNC(void, TAIB_CODE_LOCAL) TAIB_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TAIB_VAR_INIT)
    rty_FaultSts);

#endif

/*
 * Output and update for enable system:
 *    '<S58>/Fail'
 *    '<S78>/Fail'
 *    '<S173>/Fail'
 *    '<S203>/Fail'
 *    '<S223>/Fail'
 *    '<S328>/Fail'
 *    '<S347>/Fail'
 *    '<S366>/Fail'
 */
#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static FUNC(void, TAIB_CODE_LOCAL) TAIB_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TAIB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S58>/Fail' incorporates:
     *  EnablePort: '<S62>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S62>/FaultSts' incorporates:
         *  Constant: '<S68>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S58>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S58>/Init'
 *    '<S78>/Init'
 *    '<S173>/Init'
 *    '<S203>/Init'
 *    '<S223>/Init'
 *    '<S328>/Init'
 *    '<S347>/Init'
 *    '<S366>/Init'
 */
#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static FUNC(void, TAIB_CODE_LOCAL) TAIB_ac_Init_g(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TAIB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S58>/Init' incorporates:
     *  EnablePort: '<S63>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S63>/FaultSts' incorporates:
         *  Constant: '<S69>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S58>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S58>/Pass'
 *    '<S78>/Pass'
 *    '<S173>/Pass'
 *    '<S203>/Pass'
 *    '<S223>/Pass'
 *    '<S328>/Pass'
 *    '<S347>/Pass'
 *    '<S366>/Pass'
 */
#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_RADFANFB_Presence

static FUNC(void, TAIB_CODE_LOCAL) TAIB_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TAIB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S58>/Pass' incorporates:
     *  EnablePort: '<S64>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S64>/FaultSts' incorporates:
         *  Constant: '<S70>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S58>/Pass' */
}

#endif

/* Model step function for TID1 */
FUNC(void, TAIB_CODE) TAIB_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence || Rte_SysCon_Variant_TAIB_CEXVOT_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_OEXVOP_Presence || Rte_SysCon_Variant_TAIB_OEXVOT_Presence

    sint32 iU;

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

    IDTRAdcInpResData tmpRead;

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOP_Presence

    IDTRAdcInpResData tmpRead_0;

#endif

#if Rte_SysCon_Variant_TAIB_OEXVOT_Presence

    IDTRAdcInpResData tmpRead_1;

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

    IDTRAdcInpResData tmpRead_2;

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence

    IDTRAdcInpResData tmpRead_3;

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

    IDTRAdcInpResData tmpRead_4;

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    float32 tmpRead_5;

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence

    IDTRAdcInpResData tmpRead_6;

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_OEXVOT_Presence

    float32 rtb_Vector_b[2];

#endif

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

    float32 rtb_Vector_i[2];

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVOP_Presence

    float32 rtb_Vector_e[2];

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    boolean rtb_LogicalOperator_m;

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_CEXVOP_Presence || Rte_SysCon_Variant_TAIB_CEXVOT_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_OEXVOP_Presence || Rte_SysCon_Variant_TAIB_OEXVOT_Presence

    boolean rtb_TmpSignalConversionAtVeADFB_b_A2DFau;

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_CEXVOP_Presence || Rte_SysCon_Variant_TAIB_CEXVOT_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_OEXVOP_Presence || Rte_SysCon_Variant_TAIB_OEXVOT_Presence || Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence

    boolean rtb_RelationalOperator3_iz;

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    boolean rtb_Logical1_hb;

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    boolean rtb_RelationalOperator3_l;

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_DsblDi;

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_CEXVOP_Presence || Rte_SysCon_Variant_TAIB_CEXVOT_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_OEXVOP_Presence || Rte_SysCon_Variant_TAIB_OEXVOT_Presence || Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_PostCo;

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    boolean rtb_NOT4_c;

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence

    boolean rtb_AND_m;

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence

    boolean rtb_Logical1_fn;

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_CEXVOP_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_b;

#endif

#if Rte_SysCon_Variant_TAIB_HRPS_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_a;

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_pg;

#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_o;

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_k;

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_d;

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_m;

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    float32 rtb_TmpSignalConversionAtVeDIOR_h_Radi_l;

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    boolean rtb_TmpSignalConversionAtVeDIOR_h_Radi_j;

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    float32 rtb_TmpSignalConversionAtVeDIOR_h_Radi_p;

#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    float32 rtb_TmpSignalConversionAtVeDIOR_h_Radiat;

#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_CEXVOP_Presence || Rte_SysCon_Variant_TAIB_CEXVOT_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_OEXVOP_Presence || Rte_SysCon_Variant_TAIB_OEXVOT_Presence || Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    float32 tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/SigMngtAndCnvn'
     */
    /* SignalConversion generated from: '<S3>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  SignalConversion generated from: '<S3>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_CEXVOP_Presence || Rte_SysCon_Variant_TAIB_CEXVOT_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_OEXVOP_Presence || Rte_SysCon_Variant_TAIB_OEXVOT_Presence || Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    /* SignalConversion generated from: '<S3>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* SignalConversion generated from: '<S3>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

#endif

    /* End of SignalConversion generated from: '<S3>/VeDFIR_b_PostCodeClrDiagDsbl' */

    /* SignalConversion generated from: '<S3>/VeADFB_b_A2DFault' */
#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_CEXVOP_Presence || Rte_SysCon_Variant_TAIB_CEXVOT_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_OEXVOP_Presence || Rte_SysCon_Variant_TAIB_OEXVOT_Presence

    /* SignalConversion generated from: '<S3>/VeADFB_b_A2DFault' incorporates:
     *  Inport: '<Root>/VeADFB_b_A2DFault'
     */
    (void)Rte_Read_VeADFB_b_A2DFault_Value
        (&rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

#endif

    /* End of SignalConversion generated from: '<S3>/VeADFB_b_A2DFault' */

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_SnsrRefVolt3Ckt' */
#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_CEXVOP_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_SnsrRefVolt3Ckt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_SnsrRefVolt3Ckt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_SnsrRefVolt3Ckt_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

#endif

    /* End of SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_SnsrRefVolt3Ckt' */

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrALo' incorporates:
     *  SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrAHi'
     */
#if Rte_SysCon_Variant_TAIB_HRPS_Presence

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrALo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrALo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrALo_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_a);

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrAHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrAHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigPresSnsrAHi_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_b);

#endif

    /* End of SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_AC_RefrigPresSnsrALo' */

    /* SignalConversion generated from: '<S3>/VeDFIR_b_DsblDiagFailSafe' */
#if Rte_SysCon_Variant_TAIB_5VAUX_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    /* SignalConversion generated from: '<S3>/VeDFIR_b_DsblDiagFailSafe' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_DsblDi);

#endif

    /* End of SignalConversion generated from: '<S3>/VeDFIR_b_DsblDiagFailSafe' */
#if Rte_SysCon_Variant_TAIB_HRPS_Presence

    /* Outputs for Atomic SubSystem: '<S3>/AirCdngPSnsr' */
    /* Outputs for Atomic SubSystem: '<S37>/AirCdngPSnsr' */

    /* Logic: '<S51>/Logical Operator' incorporates:
     *  Constant: '<S51>/Constant1'
     *  Constant: '<S51>/Constant2'
     *  RelationalOperator: '<S51>/Relational Operator1'
     *  RelationalOperator: '<S51>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S51>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S51>/Bitwise Operator2'
     */
    rtb_LogicalOperator_m = (((((sint32)rtb_TmpSignalConversionAtVeDMAB_y_Status)
        & 1) > 0) && ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U)
                      == 0U));

    /* RelationalOperator: '<S58>/Relational Operator3' incorporates:
     *  Constant: '<S58>/Constant3'
     *  S-Function (sfix_bitop): '<S58>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_iz = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_b) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S58>/EdgeFalling1' */
    /* Logic: '<S58>/Logical Operator' incorporates:
     *  Logic: '<S60>/OR1'
     */
    rtb_AND_m = !rtb_RelationalOperator3_iz;

    /* End of Outputs for SubSystem: '<S58>/EdgeFalling1' */

    /* Logic: '<S49>/Logical Operator1' incorporates:
     *  Logic: '<S50>/Logical Operator1'
     */
    rtb_Logical1_fn = !rtb_TmpSignalConversionAtVeADFB_b_A2DFau;

    /* Logic: '<S58>/Logical1' incorporates:
     *  Constant: '<S55>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S57>/KeTAIB_b_STBDiagEnbl_HghRfrgtPSnsr'
     *  Constant: '<S58>/Constant1'
     *  Logic: '<S49>/Logical Operator'
     *  Logic: '<S49>/Logical Operator1'
     *  Logic: '<S49>/Logical Operator2'
     *  Logic: '<S58>/Logical Operator'
     *  Logic: '<S58>/Logical10'
     *  Logic: '<S58>/Logical12'
     *  RelationalOperator: '<S58>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S58>/Bitwise Operator3'
     */
    rtb_Logical1_hb = (((((!rtb_LogicalOperator_m) &&
                          (KeTAIB_b_STBDiagEnbl_HghRfrgtPSnsr)) &&
                         rtb_Logical1_fn) &&
                        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) &&
                       ((!KeTAIB_b_LtchEnblHghRfrgtPSnsrSTB) || (((((uint32)
                            rtb_TmpSignalConversionAtVeDMAB_y_Stat_b) & 1U) ==
                          0U) || rtb_AND_m)));

    /* End of Outputs for SubSystem: '<S37>/AirCdngPSnsr' */

    /* Inport: '<Root>/VeADCR_U_AcPressureSense_VsADCR_e_CnvnRes' */
    /* Gateway: SigMngtAndCnvn/AirCdngPSnsr/AirCdngPSnsr/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/AirCdngPSnsr/AirCdngPSnsr/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_AcPressureSense_VsADCR_e_CnvnRes(&tmpRead);

    /* Outputs for Atomic SubSystem: '<S37>/AirCdngPSnsr' */
    /* Chart: '<S48>/AntiSpkFil' incorporates:
     *  Constant: '<S102>/KeTAIB_Cnt_HghRfrgtPresSnsrSpikeThd'
     *  Constant: '<S103>/KeTAIB_U_HghRfrgtPresSnsrSpikeThd'
     */
    if (((uint32)TAIB_ac_DW.is_active_c14_TAIB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/AirCdngPSnsr/AirCdngPSnsr/SigAcqnAndFilSys/AntiSpkFil */
        TAIB_ac_DW.is_active_c14_TAIB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/AirCdngPSnsr/AirCdngPSnsr/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S101>:8' */
        TAIB_ac_DW.is_c14_TAIB_ac = TAIB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S101>:37' */
        TAIB_ac_B.InputRaw0_f = tmpRead.e_CnvnRes;
        VeTAIB_U_HghRfrgtPresSnsrVoltRaw = tmpRead.e_CnvnRes;
    }
    else if (((sint32)TAIB_ac_DW.is_c14_TAIB_ac) == 1)
    {
        /* During 'FILTERING': '<S101>:38' */
        if (TAIB_ac_B.Cnt_a >= ((float32)KeTAIB_Cnt_HghRfrgtPresSnsrSpikeThd))
        {
            /* Transition: '<S101>:40' */
            TAIB_ac_DW.is_c14_TAIB_ac = TAIB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S101>:37' */
            TAIB_ac_B.InputRaw0_f = tmpRead.e_CnvnRes;
            VeTAIB_U_HghRfrgtPresSnsrVoltRaw = tmpRead.e_CnvnRes;
        }
        else
        {
            TAIB_ac_B.Cnt_a++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S101>:37' */
        tmp = tmpRead.e_CnvnRes - TAIB_ac_B.InputRaw0_f;
        if ((tmp > KeTAIB_U_HghRfrgtPresSnsrSpikeThd) || (tmp <
                (-KeTAIB_U_HghRfrgtPresSnsrSpikeThd)))
        {
            /* Transition: '<S101>:39' */
            TAIB_ac_DW.is_c14_TAIB_ac = TAIB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S101>:38' */
            TAIB_ac_B.Cnt_a = 0.0F;
        }
        else
        {
            VeTAIB_U_HghRfrgtPresSnsrVoltRaw = tmpRead.e_CnvnRes;
            TAIB_ac_B.InputRaw0_f = tmpRead.e_CnvnRes;
        }
    }

    /* End of Chart: '<S48>/AntiSpkFil' */

    /* RelationalOperator: '<S49>/Relational Operator3' incorporates:
     *  Constant: '<S56>/KeTAIB_U_STBCktHiFltLim_HghRfrgtPSnsr'
     */
    rtb_RelationalOperator3_l = (VeTAIB_U_HghRfrgtPresSnsrVoltRaw >
        KeTAIB_U_STBCktHiFltLim_HghRfrgtPSnsr);

    /* Logic: '<S52>/NOT4' */
    rtb_NOT4_c = (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
                  rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outputs for Atomic SubSystem: '<S58>/EdgeFalling1' */
    /* Logic: '<S60>/AND' incorporates:
     *  UnitDelay: '<S60>/Unit Delay'
     */
    rtb_AND_m = (rtb_AND_m && (TAIB_ac_DW.UnitDelay_DSTATE_ct));

    /* Update for UnitDelay: '<S60>/Unit Delay' */
    TAIB_ac_DW.UnitDelay_DSTATE_ct = rtb_RelationalOperator3_iz;

    /* End of Outputs for SubSystem: '<S58>/EdgeFalling1' */

    /* Logic: '<S58>/Logical5' */
    rtb_RelationalOperator3_iz = (rtb_NOT4_c || rtb_AND_m);

    /* Outputs for Atomic SubSystem: '<S59>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S59>/Counter Reset  Enabled ' */
    /* Switch: '<S66>/Switch1' incorporates:
     *  Logic: '<S59>/Fail Counter Reset'
     *  Logic: '<S59>/NOT6'
     *  Switch: '<S66>/Switch2'
     *  Switch: '<S67>/Switch1'
     *  UnitDelay: '<S59>/Unit Delay'
     *  UnitDelay: '<S59>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3_iz || (TAIB_ac_DW.UnitDelay_DSTATE_o)) ||
            (TAIB_ac_DW.UnitDelay1_DSTATE_fl))
    {
        /* Switch: '<S66>/Switch1' incorporates:
         *  Constant: '<S66>/Constant Value2'
         */
        VeTAIB_Cnt_STBFailLimHghRfrgtPSnsr = 0U;

        /* Switch: '<S67>/Switch1' incorporates:
         *  Constant: '<S67>/Constant Value2'
         */
        VeTAIB_Cnt_STBSmplLimHghRfrgtPSnsr = 0U;
    }
    else
    {
        if (rtb_Logical1_hb && rtb_RelationalOperator3_l)
        {
            /* Switch: '<S66>/Switch1' incorporates:
             *  Constant: '<S66>/Constant Value1'
             *  Sum: '<S66>/Subtraction'
             *  Switch: '<S66>/Switch2'
             *  UnitDelay: '<S66>/Unit Delay'
             */
            VeTAIB_Cnt_STBFailLimHghRfrgtPSnsr = (uint16)(((uint32)
                VeTAIB_Cnt_STBFailLimHghRfrgtPSnsr) + 1U);
        }

        /* Switch: '<S67>/Switch2' */
        if (rtb_Logical1_hb)
        {
            /* Switch: '<S67>/Switch1' incorporates:
             *  Constant: '<S67>/Constant Value1'
             *  Sum: '<S67>/Subtraction'
             *  Switch: '<S67>/Switch2'
             *  UnitDelay: '<S67>/Unit Delay'
             */
            VeTAIB_Cnt_STBSmplLimHghRfrgtPSnsr = (uint16)(((uint32)
                VeTAIB_Cnt_STBSmplLimHghRfrgtPSnsr) + 1U);
        }

        /* End of Switch: '<S67>/Switch2' */
    }

    /* End of Switch: '<S66>/Switch1' */
    /* End of Outputs for SubSystem: '<S59>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S59>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S59>/Greater Than or Equal ' incorporates:
     *  Constant: '<S53>/KeTAIB_Cnt_STBFailLimHghRfrgtPSnsr'
     */
    TAIB_ac_DW.UnitDelay1_DSTATE_fl = (VeTAIB_Cnt_STBFailLimHghRfrgtPSnsr >=
        KeTAIB_Cnt_STBFailLimHghRfrgtPSnsr);

    /* Logic: '<S59>/NOT5' incorporates:
     *  Constant: '<S54>/KeTAIB_Cnt_STBSmplLimHghRfrgtPSnsr'
     *  Logic: '<S59>/NOT3'
     *  RelationalOperator: '<S59>/Less Than  or Equal'
     */
    rtb_Logical1_hb = ((VeTAIB_Cnt_STBSmplLimHghRfrgtPSnsr >=
                        KeTAIB_Cnt_STBSmplLimHghRfrgtPSnsr) &&
                       (!TAIB_ac_DW.UnitDelay1_DSTATE_fl));

    /* Switch: '<S72>/Switch1' incorporates:
     *  Constant: '<S65>/Constant Value'
     *  DataStoreWrite: '<S49>/Data Store Write1'
     *  Switch: '<S71>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TAIB_ac_DW.NeTAIB_Cnt_HghRfrgtPSnsrSTB_MFOP = 0U;
    }
    else
    {
        if (rtb_Logical1_hb)
        {
            /* MinMax: '<S65>/Minimum2' incorporates:
             *  DataStoreRead: '<S49>/Data Store Read1'
             *  Switch: '<S71>/Switch1'
             */
            if (VeTAIB_Cnt_STBFailLimHghRfrgtPSnsr >
                    TAIB_ac_DW.NeTAIB_Cnt_HghRfrgtPSnsrSTB_MFOP)
            {
                /* DataStoreWrite: '<S49>/Data Store Write1' incorporates:
                 *  Switch: '<S71>/Switch1'
                 */
                TAIB_ac_DW.NeTAIB_Cnt_HghRfrgtPSnsrSTB_MFOP =
                    VeTAIB_Cnt_STBFailLimHghRfrgtPSnsr;
            }

            /* End of MinMax: '<S65>/Minimum2' */
        }
    }

    /* End of Switch: '<S72>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S58>/Fail' */
    TAIB_ac_Fail(TAIB_ac_DW.UnitDelay1_DSTATE_fl, &TAIB_ac_B.Merge_c);

    /* End of Outputs for SubSystem: '<S58>/Fail' */

    /* Outputs for Enabled SubSystem: '<S58>/Init' */
    TAIB_ac_Init_g(rtb_RelationalOperator3_iz, &TAIB_ac_B.Merge_c);

    /* End of Outputs for SubSystem: '<S58>/Init' */

    /* Outputs for Enabled SubSystem: '<S58>/Pass' */
    TAIB_ac_Pass(rtb_Logical1_hb, &TAIB_ac_B.Merge_c);

    /* End of Outputs for SubSystem: '<S58>/Pass' */

    /* RelationalOperator: '<S78>/Relational Operator3' incorporates:
     *  Constant: '<S78>/Constant3'
     *  S-Function (sfix_bitop): '<S78>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_iz = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_a) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S78>/EdgeFalling1' */
    /* Logic: '<S78>/Logical Operator' incorporates:
     *  Logic: '<S80>/OR1'
     */
    rtb_AND_m = !rtb_RelationalOperator3_iz;

    /* End of Outputs for SubSystem: '<S78>/EdgeFalling1' */

    /* Logic: '<S78>/Logical1' incorporates:
     *  Constant: '<S74>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S77>/KeTAIB_b_STGDiagEnbl_HghRfrgtPSnsr'
     *  Constant: '<S78>/Constant1'
     *  Logic: '<S50>/Logical Operator'
     *  Logic: '<S50>/Logical Operator2'
     *  Logic: '<S78>/Logical Operator'
     *  Logic: '<S78>/Logical10'
     *  Logic: '<S78>/Logical12'
     *  RelationalOperator: '<S78>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S78>/Bitwise Operator3'
     */
    rtb_Logical1_fn = (((((!rtb_LogicalOperator_m) &&
                          (KeTAIB_b_STGDiagEnbl_HghRfrgtPSnsr)) &&
                         rtb_Logical1_fn) &&
                        rtb_TmpSignalConversionAtVeDFIR_b_IsDiag) &&
                       ((!KeTAIB_b_LtchEnblHghRfrgtPSnsrSTG) || (((((uint32)
                            rtb_TmpSignalConversionAtVeDMAB_y_Stat_a) & 1U) ==
                          0U) || rtb_AND_m)));

    /* RelationalOperator: '<S50>/Relational Operator1' incorporates:
     *  Constant: '<S76>/KeTAIB_U_STGCktLowFltLim_HghRfrgtPSnsr'
     */
    rtb_LogicalOperator_m = (VeTAIB_U_HghRfrgtPresSnsrVoltRaw <
        KeTAIB_U_STGCktLowFltLim_HghRfrgtPSnsr);

    /* Outputs for Atomic SubSystem: '<S78>/EdgeFalling1' */
    /* Logic: '<S80>/AND' incorporates:
     *  UnitDelay: '<S80>/Unit Delay'
     */
    rtb_AND_m = (rtb_AND_m && (TAIB_ac_DW.UnitDelay_DSTATE_lb));

    /* Update for UnitDelay: '<S80>/Unit Delay' */
    TAIB_ac_DW.UnitDelay_DSTATE_lb = rtb_RelationalOperator3_iz;

    /* End of Outputs for SubSystem: '<S78>/EdgeFalling1' */

    /* Logic: '<S78>/Logical5' */
    rtb_NOT4_c = (rtb_NOT4_c || rtb_AND_m);

    /* UnitDelay: '<S79>/Unit Delay1' incorporates:
     *  UnitDelay: '<S59>/Unit Delay'
     */
    TAIB_ac_DW.UnitDelay_DSTATE_o = TAIB_ac_DW.UnitDelay1_DSTATE_d;

    /* Outputs for Atomic SubSystem: '<S79>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S79>/Counter Reset  Enabled ' */
    /* Switch: '<S86>/Switch1' incorporates:
     *  Logic: '<S79>/Fail Counter Reset'
     *  Logic: '<S79>/NOT6'
     *  Switch: '<S86>/Switch2'
     *  Switch: '<S87>/Switch1'
     *  UnitDelay: '<S59>/Unit Delay'
     *  UnitDelay: '<S79>/Unit Delay'
     */
    if ((rtb_NOT4_c || (TAIB_ac_DW.UnitDelay_DSTATE_lu)) ||
            (TAIB_ac_DW.UnitDelay_DSTATE_o))
    {
        /* Switch: '<S86>/Switch1' incorporates:
         *  Constant: '<S86>/Constant Value2'
         */
        VeTAIB_Cnt_STGFailLimHghRfrgtPSnsr = 0U;

        /* Switch: '<S87>/Switch1' incorporates:
         *  Constant: '<S87>/Constant Value2'
         */
        VeTAIB_Cnt_STGSmplLimHghRfrgtPSnsr = 0U;
    }
    else
    {
        if (rtb_Logical1_fn && rtb_LogicalOperator_m)
        {
            /* Switch: '<S86>/Switch1' incorporates:
             *  Constant: '<S86>/Constant Value1'
             *  Sum: '<S86>/Subtraction'
             *  Switch: '<S86>/Switch2'
             *  UnitDelay: '<S86>/Unit Delay'
             */
            VeTAIB_Cnt_STGFailLimHghRfrgtPSnsr = (uint16)(((uint32)
                VeTAIB_Cnt_STGFailLimHghRfrgtPSnsr) + 1U);
        }

        /* Switch: '<S87>/Switch2' */
        if (rtb_Logical1_fn)
        {
            /* Switch: '<S87>/Switch1' incorporates:
             *  Constant: '<S87>/Constant Value1'
             *  Sum: '<S87>/Subtraction'
             *  Switch: '<S87>/Switch2'
             *  UnitDelay: '<S87>/Unit Delay'
             */
            VeTAIB_Cnt_STGSmplLimHghRfrgtPSnsr = (uint16)(((uint32)
                VeTAIB_Cnt_STGSmplLimHghRfrgtPSnsr) + 1U);
        }

        /* End of Switch: '<S87>/Switch2' */
    }

    /* End of Switch: '<S86>/Switch1' */
    /* End of Outputs for SubSystem: '<S79>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S79>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S79>/Greater Than or Equal ' incorporates:
     *  Constant: '<S73>/KeTAIB_Cnt_STGFailLimHghRfrgtPSnsr'
     */
    TAIB_ac_DW.UnitDelay1_DSTATE_d = (VeTAIB_Cnt_STGFailLimHghRfrgtPSnsr >=
        KeTAIB_Cnt_STGFailLimHghRfrgtPSnsr);

    /* Logic: '<S79>/NOT5' incorporates:
     *  Constant: '<S75>/KeTAIB_Cnt_STGSmplLimHghRfrgtPSnsr'
     *  Logic: '<S79>/NOT3'
     *  RelationalOperator: '<S79>/Less Than  or Equal'
     */
    TAIB_ac_DW.UnitDelay_DSTATE_lu = ((VeTAIB_Cnt_STGSmplLimHghRfrgtPSnsr >=
        KeTAIB_Cnt_STGSmplLimHghRfrgtPSnsr) && (!TAIB_ac_DW.UnitDelay1_DSTATE_d));

    /* Switch: '<S92>/Switch1' incorporates:
     *  Constant: '<S85>/Constant Value'
     *  DataStoreWrite: '<S50>/Data Store Write1'
     *  Switch: '<S91>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TAIB_ac_DW.NeTAIB_Cnt_HghRfrgtPSnsrSTG_MFOP = 0U;
    }
    else
    {
        if (TAIB_ac_DW.UnitDelay_DSTATE_lu)
        {
            /* MinMax: '<S85>/Minimum2' incorporates:
             *  DataStoreRead: '<S50>/Data Store Read1'
             *  Switch: '<S91>/Switch1'
             */
            if (VeTAIB_Cnt_STGFailLimHghRfrgtPSnsr >
                    TAIB_ac_DW.NeTAIB_Cnt_HghRfrgtPSnsrSTG_MFOP)
            {
                /* DataStoreWrite: '<S50>/Data Store Write1' incorporates:
                 *  Switch: '<S91>/Switch1'
                 */
                TAIB_ac_DW.NeTAIB_Cnt_HghRfrgtPSnsrSTG_MFOP =
                    VeTAIB_Cnt_STGFailLimHghRfrgtPSnsr;
            }

            /* End of MinMax: '<S85>/Minimum2' */
        }
    }

    /* End of Switch: '<S92>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S78>/Fail' */
    TAIB_ac_Fail(TAIB_ac_DW.UnitDelay1_DSTATE_d, &TAIB_ac_B.Merge_l);

    /* End of Outputs for SubSystem: '<S78>/Fail' */

    /* Outputs for Enabled SubSystem: '<S78>/Init' */
    TAIB_ac_Init_g(rtb_NOT4_c, &TAIB_ac_B.Merge_l);

    /* End of Outputs for SubSystem: '<S78>/Init' */

    /* Outputs for Enabled SubSystem: '<S78>/Pass' */
    TAIB_ac_Pass(TAIB_ac_DW.UnitDelay_DSTATE_lu, &TAIB_ac_B.Merge_l);

    /* End of Outputs for SubSystem: '<S78>/Pass' */

    /* Logic: '<S46>/Logical Operator1' incorporates:
     *  Constant: '<S61>/Constant'
     *  Constant: '<S81>/Constant'
     *  Merge: '<S58>/Merge'
     *  Merge: '<S78>/Merge'
     *  RelationalOperator: '<S58>/Relational Operator'
     *  RelationalOperator: '<S78>/Relational Operator'
     */
    rtb_NOT4_c = (((((uint32)TAIB_ac_B.Merge_l) == CeDFIB_e_Fail) || (((uint32)
                     TAIB_ac_B.Merge_c) == CeDFIB_e_Fail)) ||
                  rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* Switch: '<S107>/Switch' incorporates:
     *  Selector: '<S106>/Selector_R'
     */
    if (TAIB_ac_DW.UnitDelay_DSTATE_hw)
    {
        /* Assignment: '<S108>/Assignment_y' incorporates:
         *  Switch: '<S94>/Switch'
         */
        VeTAIB_U_HghRfrgtPresSnsrVolt = VeTAIB_U_HghRfrgtPresSnsrVoltRaw;
    }
    else
    {
        /* Assignment: '<S108>/Assignment_y' incorporates:
         *  Constant: '<S104>/KeTAIB_k_HghRfrgtPresSnsrFiltGx'
         *  Product: '<S107>/Product'
         *  Selector: '<S106>/Selector_u'
         *  Selector: '<S106>/Selector_x'
         *  Sum: '<S107>/Difference'
         *  Sum: '<S107>/Sum'
         *  Switch: '<S107>/Switch_E'
         *  Switch: '<S94>/Switch'
         */
        VeTAIB_U_HghRfrgtPresSnsrVolt = ((VeTAIB_U_HghRfrgtPresSnsrVoltRaw -
            VeTAIB_U_HghRfrgtPresSnsrVolt) * KeTAIB_k_HghRfrgtPresSnsrFiltGx) +
            VeTAIB_U_HghRfrgtPresSnsrVolt;
    }

    /* End of Switch: '<S107>/Switch' */

    /* Gain: '<S47>/Gain' */
    VeTAIB_U_HghRfrgtPresSnsrVoltXChartC[0] = VeTAIB_U_HghRfrgtPresSnsrVoltRaw;
    VeTAIB_U_HghRfrgtPresSnsrVoltXChartC[1] = VeTAIB_U_HghRfrgtPresSnsrVolt;

    /* Lookup_n-D: '<S93>/Vector' incorporates:
     *  Gain: '<S47>/Gain'
     */
    for (iU = 0; iU < 2; iU++)
    {
        rtb_Vector_e[iU] = look1_iflf_binlca_19a
            (VeTAIB_U_HghRfrgtPresSnsrVoltXChartC[(iU)], ((const float32 *)
              &(KxTAIB_U_HghRfrgtPresSnsrChartc[0])), ((const float32 *)
              &(KtTAIB_p_HghRfrgtPresSnsrChartc[0])), 23U);
    }

    /* End of Lookup_n-D: '<S93>/Vector' */

    /* Switch: '<S96>/Switch' incorporates:
     *  Logic: '<S46>/Logical Operator'
     *  Logic: '<S47>/Logical Operator1'
     */
    if (((!rtb_LogicalOperator_m) && (!rtb_RelationalOperator3_l)) &&
            (!rtb_NOT4_c))
    {
        /* Switch: '<S96>/Switch' */
        TAIB_ac_DW.VeTAIB_p_HghRfrgPresSnsrInit_DSTATE = rtb_Vector_e[1];
    }

    /* End of Switch: '<S96>/Switch' */

    /* Switch: '<S94>/Switch' incorporates:
     *  Constant: '<S97>/KeTAIB_b_HghRfrgPresSnsrBypEnbl'
     *  Constant: '<S99>/KeTAIB_b_HghRfrgtPresSnsrRcvryEnbl'
     *  Logic: '<S95>/Logical Operator'
     *  Switch: '<S95>/Switch'
     */
    if (KeTAIB_b_HghRfrgPresSnsrBypEnbl)
    {
        /* Outport: '<Root>/VeTAIB_p_HghRfrgtPresSnsr' incorporates:
         *  Constant: '<S98>/KeTAIB_p_HghRfrgPresSnsrByp'
         *  SignalConversion: '<S45>/Signal Conversion'
         */
        (void)Rte_Write_VeTAIB_p_HghRfrgtPresSnsr_Value
            (KeTAIB_p_HghRfrgPresSnsrByp);
    }
    else if ((KeTAIB_b_HghRfrgtPresSnsrRcvryEnbl) && rtb_NOT4_c)
    {
        /* Outport: '<Root>/VeTAIB_p_HghRfrgtPresSnsr' incorporates:
         *  Constant: '<S100>/KeTAIB_p_HghRfrgtPresSnsrRcvry'
         *  SignalConversion: '<S45>/Signal Conversion'
         *  Switch: '<S95>/Switch'
         */
        (void)Rte_Write_VeTAIB_p_HghRfrgtPresSnsr_Value
            (KeTAIB_p_HghRfrgtPresSnsrRcvry);
    }
    else
    {
        /* Outport: '<Root>/VeTAIB_p_HghRfrgtPresSnsr' incorporates:
         *  SignalConversion: '<S45>/Signal Conversion'
         *  Switch: '<S95>/Switch'
         */
        (void)Rte_Write_VeTAIB_p_HghRfrgtPresSnsr_Value
            (TAIB_ac_DW.VeTAIB_p_HghRfrgPresSnsrInit_DSTATE);
    }

    /* End of Switch: '<S94>/Switch' */

    /* Outport: '<Root>/VeTAIB_b_HghRfrgtPresSnsr_FA' incorporates:
     *  SignalConversion: '<S45>/Signal Conversion1'
     */
    (void)Rte_Write_VeTAIB_b_HghRfrgtPresSnsr_FA_Value(rtb_NOT4_c);

    /* Update for UnitDelay: '<S59>/Unit Delay' */
    TAIB_ac_DW.UnitDelay_DSTATE_o = rtb_Logical1_hb;

    /* End of Outputs for SubSystem: '<S37>/AirCdngPSnsr' */
    /* End of Outputs for SubSystem: '<S3>/AirCdngPSnsr' */
#endif

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

    /* Outputs for Atomic SubSystem: '<S3>/ChillerExpansValvRefOutPSnsr' */
    /* Inport: '<Root>/VeADCR_U_CexvRtosAn20_VsADCR_e_CnvnRes' */
    /* Gateway: SigMngtAndCnvn/ChillerExpansValvRefOutPSnsr/ChillerExpansValvRefOutPSnsr/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/ChillerExpansValvRefOutPSnsr/ChillerExpansValvRefOutPSnsr/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_CexvRtosAn20_VsADCR_e_CnvnRes(&tmpRead_4);

    /* Outputs for Atomic SubSystem: '<S38>/ChillerExpansValvRefOutPSnsr' */
    /* Chart: '<S112>/AntiSpkFil' incorporates:
     *  Constant: '<S129>/KeTAIB_Cnt_CEXV_OutPresSnsrSpikeThd'
     *  Constant: '<S130>/KeTAIB_U_CEXV_OutPresSnsrSpikeThd'
     */
    if (((uint32)TAIB_ac_DW.is_active_c5_TAIB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/ChillerExpansValvRefOutPSnsr/ChillerExpansValvRefOutPSnsr/SigAcqnAndFilSys/AntiSpkFil */
        TAIB_ac_DW.is_active_c5_TAIB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/ChillerExpansValvRefOutPSnsr/ChillerExpansValvRefOutPSnsr/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S128>:8' */
        TAIB_ac_DW.is_c5_TAIB_ac = TAIB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S128>:37' */
        TAIB_ac_B.InputRaw0_p = tmpRead_4.e_CnvnRes;
        VeTAIB_U_CEXV_OutPresSnsrVoltRaw = tmpRead_4.e_CnvnRes;
    }
    else if (((sint32)TAIB_ac_DW.is_c5_TAIB_ac) == 1)
    {
        /* During 'FILTERING': '<S128>:38' */
        if (TAIB_ac_B.Cnt_n >= ((float32)KeTAIB_Cnt_CEXV_OutPresSnsrSpikeThd))
        {
            /* Transition: '<S128>:40' */
            TAIB_ac_DW.is_c5_TAIB_ac = TAIB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S128>:37' */
            TAIB_ac_B.InputRaw0_p = tmpRead_4.e_CnvnRes;
            VeTAIB_U_CEXV_OutPresSnsrVoltRaw = tmpRead_4.e_CnvnRes;
        }
        else
        {
            TAIB_ac_B.Cnt_n++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S128>:37' */
        tmp = tmpRead_4.e_CnvnRes - TAIB_ac_B.InputRaw0_p;
        if ((tmp > KeTAIB_U_CEXV_OutPresSnsrSpikeThd) || (tmp <
                (-KeTAIB_U_CEXV_OutPresSnsrSpikeThd)))
        {
            /* Transition: '<S128>:39' */
            TAIB_ac_DW.is_c5_TAIB_ac = TAIB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S128>:38' */
            TAIB_ac_B.Cnt_n = 0.0F;
        }
        else
        {
            VeTAIB_U_CEXV_OutPresSnsrVoltRaw = tmpRead_4.e_CnvnRes;
            TAIB_ac_B.InputRaw0_p = tmpRead_4.e_CnvnRes;
        }
    }

    /* End of Chart: '<S112>/AntiSpkFil' */

    /* Switch: '<S134>/Switch' incorporates:
     *  Selector: '<S133>/Selector_R'
     */
    if (TAIB_ac_DW.UnitDelay_DSTATE_hw)
    {
        /* Assignment: '<S135>/Assignment_y' incorporates:
         *  Switch: '<S121>/Switch'
         */
        VeTAIB_U_CEXV_OutPresSnsrVolt = VeTAIB_U_CEXV_OutPresSnsrVoltRaw;
    }
    else
    {
        /* Assignment: '<S135>/Assignment_y' incorporates:
         *  Constant: '<S131>/KeTAIB_k_CEXV_OutPresSnsrFiltGx'
         *  Product: '<S134>/Product'
         *  Selector: '<S133>/Selector_u'
         *  Selector: '<S133>/Selector_x'
         *  Sum: '<S134>/Difference'
         *  Sum: '<S134>/Sum'
         *  Switch: '<S121>/Switch'
         *  Switch: '<S134>/Switch_E'
         */
        VeTAIB_U_CEXV_OutPresSnsrVolt = ((VeTAIB_U_CEXV_OutPresSnsrVoltRaw -
            VeTAIB_U_CEXV_OutPresSnsrVolt) * KeTAIB_k_CEXV_OutPresSnsrFiltGx) +
            VeTAIB_U_CEXV_OutPresSnsrVolt;
    }

    /* End of Switch: '<S134>/Switch' */

    /* Gain: '<S111>/Gain' */
    VeTAIB_U_CEXV_OutPresSnsrVoltXChartC[0] = VeTAIB_U_CEXV_OutPresSnsrVoltRaw;
    VeTAIB_U_CEXV_OutPresSnsrVoltXChartC[1] = VeTAIB_U_CEXV_OutPresSnsrVolt;

    /* Lookup_n-D: '<S120>/Vector' incorporates:
     *  Gain: '<S111>/Gain'
     */
    for (iU = 0; iU < 2; iU++)
    {
        rtb_Vector_i[iU] = look1_iflf_binlca_19a
            (VeTAIB_U_CEXV_OutPresSnsrVoltXChartC[(iU)], ((const float32 *)
              &(KxTAIB_U_CEXV_OutPresSnsrChartc[0])), ((const float32 *)
              &(KtTAIB_p_CEXV_OutPresSnsrChartc[0])), 23U);
    }

    /* End of Lookup_n-D: '<S120>/Vector' */

    /* Switch: '<S123>/Switch' incorporates:
     *  Constant: '<S116>/KeTAIB_U_STBCktHiFltLim_CEXV_OutPSnsr'
     *  Constant: '<S118>/KeTAIB_U_STGCktLowFltLim_CEXV_OutPSnsr'
     *  Logic: '<S110>/Logical Operator'
     *  Logic: '<S111>/Logical Operator'
     *  RelationalOperator: '<S113>/Relational Operator3'
     *  RelationalOperator: '<S114>/Relational Operator1'
     */
    if (((VeTAIB_U_CEXV_OutPresSnsrVoltRaw >=
            KeTAIB_U_STGCktLowFltLim_CEXV_OutPSnsr) &&
            (VeTAIB_U_CEXV_OutPresSnsrVoltRaw <=
             KeTAIB_U_STBCktHiFltLim_CEXV_OutPSnsr)) &&
            (!rtb_TmpSignalConversionAtVeADFB_b_A2DFau))
    {
        /* Switch: '<S123>/Switch' */
        TAIB_ac_DW.VeTAIB_p_CEXV_OutPresSnsrInit_DSTATE = rtb_Vector_i[1];
    }

    /* End of Switch: '<S123>/Switch' */

    /* Switch: '<S121>/Switch' incorporates:
     *  Constant: '<S124>/KeTAIB_b_CEXV_OutPresSnsrBypEnbl'
     *  Constant: '<S126>/KeTAIB_b_CEXV_OutPresRcvryEnbl'
     *  Logic: '<S122>/Logical Operator'
     *  Switch: '<S122>/Switch'
     */
    if (KeTAIB_b_CEXV_OutPresSnsrBypEnbl)
    {
        /* Outport: '<Root>/VeTAIB_p_CEXV_OutPresSnsr' incorporates:
         *  Constant: '<S125>/KeTAIB_p_CEXV_OutPresSnsrByp'
         *  SignalConversion: '<S109>/Signal Conversion'
         */
        (void)Rte_Write_VeTAIB_p_CEXV_OutPresSnsr_Value
            (KeTAIB_p_CEXV_OutPresSnsrByp);
    }
    else if ((KeTAIB_b_CEXV_OutPresRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeADFB_b_A2DFau)
    {
        /* Outport: '<Root>/VeTAIB_p_CEXV_OutPresSnsr' incorporates:
         *  Constant: '<S127>/KeTAIB_p_CEXV_OutPresRcvry'
         *  SignalConversion: '<S109>/Signal Conversion'
         *  Switch: '<S122>/Switch'
         */
        (void)Rte_Write_VeTAIB_p_CEXV_OutPresSnsr_Value
            (KeTAIB_p_CEXV_OutPresRcvry);
    }
    else
    {
        /* Outport: '<Root>/VeTAIB_p_CEXV_OutPresSnsr' incorporates:
         *  SignalConversion: '<S109>/Signal Conversion'
         *  Switch: '<S122>/Switch'
         */
        (void)Rte_Write_VeTAIB_p_CEXV_OutPresSnsr_Value
            (TAIB_ac_DW.VeTAIB_p_CEXV_OutPresSnsrInit_DSTATE);
    }

    /* End of Switch: '<S121>/Switch' */

    /* Outport: '<Root>/VeTAIB_b_CEXV_OutPresSnsr_FA' incorporates:
     *  SignalConversion: '<S109>/Signal Conversion1'
     */
    (void)Rte_Write_VeTAIB_b_CEXV_OutPresSnsr_FA_Value
        (rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* End of Outputs for SubSystem: '<S38>/ChillerExpansValvRefOutPSnsr' */
    /* End of Outputs for SubSystem: '<S3>/ChillerExpansValvRefOutPSnsr' */
#endif

#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence

    /* Outputs for Atomic SubSystem: '<S3>/ChillerExpansValvRefOutTSnsr' */
    /* Inport: '<Root>/VeADCR_U_CexvRtosAn47_VsADCR_e_CnvnRes' */
    /* Gateway: SigMngtAndCnvn/ChillerExpansValvRefOutTSnsr/ChillerExpansValvRefOutTSnsr/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/ChillerExpansValvRefOutTSnsr/ChillerExpansValvRefOutTSnsr/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_CexvRtosAn47_VsADCR_e_CnvnRes(&tmpRead_3);

    /* Outputs for Atomic SubSystem: '<S39>/ChillerExpansValvRefOutTSnsr' */
    /* Chart: '<S139>/AntiSpkFil' incorporates:
     *  Constant: '<S155>/KeTAIB_Cnt_CEXV_OutTempSnsrSpikeThd'
     *  Constant: '<S156>/KeTAIB_U_CEXV_OutTempSnsrSpikeThd'
     */
    if (((uint32)TAIB_ac_DW.is_active_c4_TAIB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/ChillerExpansValvRefOutTSnsr/ChillerExpansValvRefOutTSnsr/SigAcqnAndFilSys/AntiSpkFil */
        TAIB_ac_DW.is_active_c4_TAIB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/ChillerExpansValvRefOutTSnsr/ChillerExpansValvRefOutTSnsr/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S154>:8' */
        TAIB_ac_DW.is_c4_TAIB_ac = TAIB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S154>:37' */
        TAIB_ac_B.InputRaw0_k = tmpRead_3.e_CnvnRes;
        VeTAIB_U_CEXV_OutTempSnsrVoltRaw = tmpRead_3.e_CnvnRes;
    }
    else if (((sint32)TAIB_ac_DW.is_c4_TAIB_ac) == 1)
    {
        /* During 'FILTERING': '<S154>:38' */
        if (TAIB_ac_B.Cnt_hn >= ((float32)KeTAIB_Cnt_CEXV_OutTempSnsrSpikeThd))
        {
            /* Transition: '<S154>:40' */
            TAIB_ac_DW.is_c4_TAIB_ac = TAIB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S154>:37' */
            TAIB_ac_B.InputRaw0_k = tmpRead_3.e_CnvnRes;
            VeTAIB_U_CEXV_OutTempSnsrVoltRaw = tmpRead_3.e_CnvnRes;
        }
        else
        {
            TAIB_ac_B.Cnt_hn++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S154>:37' */
        tmp = tmpRead_3.e_CnvnRes - TAIB_ac_B.InputRaw0_k;
        if ((tmp > KeTAIB_U_CEXV_OutTempSnsrSpikeThd) || (tmp <
                (-KeTAIB_U_CEXV_OutTempSnsrSpikeThd)))
        {
            /* Transition: '<S154>:39' */
            TAIB_ac_DW.is_c4_TAIB_ac = TAIB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S154>:38' */
            TAIB_ac_B.Cnt_hn = 0.0F;
        }
        else
        {
            VeTAIB_U_CEXV_OutTempSnsrVoltRaw = tmpRead_3.e_CnvnRes;
            TAIB_ac_B.InputRaw0_k = tmpRead_3.e_CnvnRes;
        }
    }

    /* End of Chart: '<S139>/AntiSpkFil' */

    /* Switch: '<S160>/Switch' incorporates:
     *  Selector: '<S159>/Selector_R'
     */
    if (TAIB_ac_DW.UnitDelay_DSTATE_hw)
    {
        /* Assignment: '<S161>/Assignment_y' incorporates:
         *  Switch: '<S147>/Switch'
         */
        VeTAIB_U_CEXV_OutTempSnsrVolt = VeTAIB_U_CEXV_OutTempSnsrVoltRaw;
    }
    else
    {
        /* Assignment: '<S161>/Assignment_y' incorporates:
         *  Constant: '<S157>/KeTAIB_k_CEXV_OutTempSnsrFiltGx'
         *  Product: '<S160>/Product'
         *  Selector: '<S159>/Selector_u'
         *  Selector: '<S159>/Selector_x'
         *  Sum: '<S160>/Difference'
         *  Sum: '<S160>/Sum'
         *  Switch: '<S147>/Switch'
         *  Switch: '<S160>/Switch_E'
         */
        VeTAIB_U_CEXV_OutTempSnsrVolt = ((VeTAIB_U_CEXV_OutTempSnsrVoltRaw -
            VeTAIB_U_CEXV_OutTempSnsrVolt) * KeTAIB_k_CEXV_OutTempSnsrFiltGx) +
            VeTAIB_U_CEXV_OutTempSnsrVolt;
    }

    /* End of Switch: '<S160>/Switch' */

    /* Gain: '<S138>/Gain' */
    VeTAIB_U_CEXV_OutTempSnsrVoltXChartC[0] = VeTAIB_U_CEXV_OutTempSnsrVoltRaw;
    VeTAIB_U_CEXV_OutTempSnsrVoltXChartC[1] = VeTAIB_U_CEXV_OutTempSnsrVolt;

    /* Lookup_n-D: '<S146>/Vector' incorporates:
     *  Gain: '<S138>/Gain'
     */
    for (iU = 0; iU < 2; iU++)
    {
        rtb_Vector_b[iU] = look1_iflf_binlca_19a
            (VeTAIB_U_CEXV_OutTempSnsrVoltXChartC[(iU)], ((const float32 *)
              &(KxTAIB_U_CEXV_OutTempSnsrChartc[0])), ((const float32 *)
              &(KtTAIB_T_CEXV_OutTempSnsrChartc[0])), 23U);
    }

    /* End of Lookup_n-D: '<S146>/Vector' */

    /* Switch: '<S149>/Switch' incorporates:
     *  Constant: '<S142>/KeTAIB_U_STBCktHiFltLim_CEXV_OutTSnsr'
     *  Constant: '<S144>/KeTAIB_U_STGCktLowFltLim_CEXV_OutTSnsr'
     *  Logic: '<S137>/Logical Operator'
     *  Logic: '<S138>/Logical Operator'
     *  RelationalOperator: '<S140>/Relational Operator3'
     *  RelationalOperator: '<S141>/Relational Operator1'
     */
    if (((VeTAIB_U_CEXV_OutTempSnsrVoltRaw >=
            KeTAIB_U_STGCktLowFltLim_CEXV_OutTSnsr) &&
            (VeTAIB_U_CEXV_OutTempSnsrVoltRaw <=
             KeTAIB_U_STBCktHiFltLim_CEXV_OutTSnsr)) &&
            (!rtb_TmpSignalConversionAtVeADFB_b_A2DFau))
    {
        /* Switch: '<S149>/Switch' */
        TAIB_ac_DW.VeTAIB_T_CEXV_OutTempSnsrInit_DSTATE = rtb_Vector_b[1];
    }

    /* End of Switch: '<S149>/Switch' */

    /* Switch: '<S147>/Switch' incorporates:
     *  Constant: '<S151>/KeTAIB_b_CEXV_OutTempSnsrBypEnbl'
     *  Constant: '<S153>/KeTAIB_b_CEXV_OutTempRcvryEnbl'
     *  Logic: '<S148>/Logical Operator'
     *  Switch: '<S148>/Switch'
     */
    if (KeTAIB_b_CEXV_OutTempSnsrBypEnbl)
    {
        /* Outport: '<Root>/VeTAIB_T_CEXV_OutTempSnsr' incorporates:
         *  Constant: '<S150>/KeTAIB_T_CEXV_OutTempSnsrByp'
         *  SignalConversion: '<S136>/Signal Conversion'
         */
        (void)Rte_Write_VeTAIB_T_CEXV_OutTempSnsr_Value
            (KeTAIB_T_CEXV_OutTempSnsrByp);
    }
    else if ((KeTAIB_b_CEXV_OutTempRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeADFB_b_A2DFau)
    {
        /* Outport: '<Root>/VeTAIB_T_CEXV_OutTempSnsr' incorporates:
         *  Constant: '<S152>/KeTAIB_T_CEXV_OutTempRcvry'
         *  SignalConversion: '<S136>/Signal Conversion'
         *  Switch: '<S148>/Switch'
         */
        (void)Rte_Write_VeTAIB_T_CEXV_OutTempSnsr_Value
            (KeTAIB_T_CEXV_OutTempRcvry);
    }
    else
    {
        /* Outport: '<Root>/VeTAIB_T_CEXV_OutTempSnsr' incorporates:
         *  SignalConversion: '<S136>/Signal Conversion'
         *  Switch: '<S148>/Switch'
         */
        (void)Rte_Write_VeTAIB_T_CEXV_OutTempSnsr_Value
            (TAIB_ac_DW.VeTAIB_T_CEXV_OutTempSnsrInit_DSTATE);
    }

    /* End of Switch: '<S147>/Switch' */

    /* Outport: '<Root>/VeTAIB_b_CEXV_OutTempSnsr_FA' incorporates:
     *  SignalConversion: '<S136>/Signal Conversion1'
     */
    (void)Rte_Write_VeTAIB_b_CEXV_OutTempSnsr_FA_Value
        (rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* End of Outputs for SubSystem: '<S39>/ChillerExpansValvRefOutTSnsr' */
    /* End of Outputs for SubSystem: '<S3>/ChillerExpansValvRefOutTSnsr' */
#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence

    /* Outputs for Atomic SubSystem: '<S3>/FiveVAux1' */
    /* Outputs for Atomic SubSystem: '<S40>/5VAux1' */

    /* RelationalOperator: '<S173>/Relational Operator3' incorporates:
     *  Constant: '<S173>/Constant3'
     *  S-Function (sfix_bitop): '<S173>/Bitwise Operator2'
     */
    rtb_NOT4_c = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) ==
                  0U);

    /* Outputs for Atomic SubSystem: '<S173>/EdgeFalling1' */
    /* Logic: '<S173>/Logical Operator' incorporates:
     *  Logic: '<S175>/OR1'
     */
    rtb_Logical1_hb = !rtb_NOT4_c;

    /* End of Outputs for SubSystem: '<S173>/EdgeFalling1' */

    /* Logic: '<S173>/Logical1' incorporates:
     *  Constant: '<S168>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S172>/KeTAIB_b_DiagEnbl_5VAux1'
     *  Constant: '<S173>/Constant1'
     *  Logic: '<S165>/Logical Operator'
     *  Logic: '<S165>/Logical Operator1'
     *  Logic: '<S173>/Logical Operator'
     *  Logic: '<S173>/Logical10'
     *  Logic: '<S173>/Logical12'
     *  RelationalOperator: '<S173>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S173>/Bitwise Operator3'
     */
    rtb_RelationalOperator3_l = (((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
        (KeTAIB_b_DiagEnbl_5VAux1)) &&
        (!rtb_TmpSignalConversionAtVeADFB_b_A2DFau)) &&
        ((!KeTAIB_b_LtchEnbl5VAux1) || (((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 1U) == 0U) ||
        rtb_Logical1_hb)));

    /* End of Outputs for SubSystem: '<S40>/5VAux1' */

    /* Inport: '<Root>/VeADCR_U_Adc5vAux1Power_VsADCR_e_CnvnRes' */
    /* Gateway: SigMngtAndCnvn/FiveVAux1/5VAux1/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/FiveVAux1/5VAux1/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_Adc5vAux1Power_VsADCR_e_CnvnRes(&tmpRead_6);

    /* Outputs for Atomic SubSystem: '<S40>/5VAux1' */
    /* Chart: '<S164>/AntiSpkFil' incorporates:
     *  Constant: '<S189>/KeTAIB_Cnt_5VAux1SpikeThd'
     *  Constant: '<S190>/KeTAIB_U_5VAux1SpikeThd'
     */
    if (((uint32)TAIB_ac_DW.is_active_c6_TAIB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/FiveVAux1/5VAux1/SigAcqnAndFilSys/AntiSpkFil */
        TAIB_ac_DW.is_active_c6_TAIB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/FiveVAux1/5VAux1/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S188>:8' */
        TAIB_ac_DW.is_c6_TAIB_ac = TAIB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S188>:37' */
        TAIB_ac_B.InputRaw0_j = tmpRead_6.e_CnvnRes;
        VeTAIB_U_5VAux1VoltRaw = tmpRead_6.e_CnvnRes;
    }
    else if (((sint32)TAIB_ac_DW.is_c6_TAIB_ac) == 1)
    {
        /* During 'FILTERING': '<S188>:38' */
        if (TAIB_ac_B.Cnt_g >= ((float32)KeTAIB_Cnt_5VAux1SpikeThd))
        {
            /* Transition: '<S188>:40' */
            TAIB_ac_DW.is_c6_TAIB_ac = TAIB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S188>:37' */
            TAIB_ac_B.InputRaw0_j = tmpRead_6.e_CnvnRes;
            VeTAIB_U_5VAux1VoltRaw = tmpRead_6.e_CnvnRes;
        }
        else
        {
            TAIB_ac_B.Cnt_g++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S188>:37' */
        tmp = tmpRead_6.e_CnvnRes - TAIB_ac_B.InputRaw0_j;
        if ((tmp > KeTAIB_U_5VAux1SpikeThd) || (tmp < (-KeTAIB_U_5VAux1SpikeThd)))
        {
            /* Transition: '<S188>:39' */
            TAIB_ac_DW.is_c6_TAIB_ac = TAIB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S188>:38' */
            TAIB_ac_B.Cnt_g = 0.0F;
        }
        else
        {
            VeTAIB_U_5VAux1VoltRaw = tmpRead_6.e_CnvnRes;
            TAIB_ac_B.InputRaw0_j = tmpRead_6.e_CnvnRes;
        }
    }

    /* End of Chart: '<S164>/AntiSpkFil' */

    /* Outputs for Atomic SubSystem: '<S173>/EdgeFalling1' */
    /* Logic: '<S175>/AND' incorporates:
     *  UnitDelay: '<S175>/Unit Delay'
     */
    rtb_Logical1_hb = (rtb_Logical1_hb && (TAIB_ac_DW.UnitDelay_DSTATE_lhe));

    /* Update for UnitDelay: '<S175>/Unit Delay' */
    TAIB_ac_DW.UnitDelay_DSTATE_lhe = rtb_NOT4_c;

    /* End of Outputs for SubSystem: '<S173>/EdgeFalling1' */

    /* Logic: '<S173>/Logical5' incorporates:
     *  Logic: '<S166>/NOT4'
     */
    rtb_NOT4_c = ((rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
                   rtb_TmpSignalConversionAtVeDFIR_b_PostCo) || rtb_Logical1_hb);

    /* Outputs for Atomic SubSystem: '<S174>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S174>/Counter Reset  Enabled ' */
    /* Switch: '<S181>/Switch1' incorporates:
     *  Constant: '<S170>/KeTAIB_U_STBCktHiFltLim_5VAux1'
     *  Constant: '<S171>/KeTAIB_U_STGCktLowFltLim_5VAux1'
     *  Logic: '<S165>/Logical Operator2'
     *  Logic: '<S174>/Fail Counter Reset'
     *  Logic: '<S174>/NOT6'
     *  RelationalOperator: '<S165>/Relational Operator1'
     *  RelationalOperator: '<S165>/Relational Operator3'
     *  Switch: '<S181>/Switch2'
     *  Switch: '<S182>/Switch1'
     *  UnitDelay: '<S174>/Unit Delay'
     *  UnitDelay: '<S174>/Unit Delay1'
     */
    if ((rtb_NOT4_c || (TAIB_ac_DW.UnitDelay_DSTATE_lc)) ||
            (TAIB_ac_DW.UnitDelay1_DSTATE_n))
    {
        /* Switch: '<S181>/Switch1' incorporates:
         *  Constant: '<S181>/Constant Value2'
         */
        VeTAIB_Cnt_P0697Fail = 0U;

        /* Switch: '<S182>/Switch1' incorporates:
         *  Constant: '<S182>/Constant Value2'
         */
        VeTAIB_Cnt_P0697Smpl = 0U;
    }
    else
    {
        if (rtb_RelationalOperator3_l && ((VeTAIB_U_5VAux1VoltRaw <
                KeTAIB_U_STGCktLowFltLim_5VAux1) || (VeTAIB_U_5VAux1VoltRaw >
                KeTAIB_U_STBCktHiFltLim_5VAux1)))
        {
            /* Switch: '<S181>/Switch1' incorporates:
             *  Constant: '<S181>/Constant Value1'
             *  Sum: '<S181>/Subtraction'
             *  Switch: '<S181>/Switch2'
             *  UnitDelay: '<S181>/Unit Delay'
             */
            VeTAIB_Cnt_P0697Fail = (uint16)(((uint32)VeTAIB_Cnt_P0697Fail) + 1U);
        }

        /* Switch: '<S182>/Switch2' */
        if (rtb_RelationalOperator3_l)
        {
            /* Switch: '<S182>/Switch1' incorporates:
             *  Constant: '<S182>/Constant Value1'
             *  Sum: '<S182>/Subtraction'
             *  Switch: '<S182>/Switch2'
             *  UnitDelay: '<S182>/Unit Delay'
             */
            VeTAIB_Cnt_P0697Smpl = (uint16)(((uint32)VeTAIB_Cnt_P0697Smpl) + 1U);
        }

        /* End of Switch: '<S182>/Switch2' */
    }

    /* End of Switch: '<S181>/Switch1' */
    /* End of Outputs for SubSystem: '<S174>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S174>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S174>/Greater Than or Equal ' incorporates:
     *  Constant: '<S167>/KeTAIB_Cnt_FailLim5VAux1'
     */
    TAIB_ac_DW.UnitDelay1_DSTATE_n = (VeTAIB_Cnt_P0697Fail >=
        KeTAIB_Cnt_FailLim5VAux1);

    /* Logic: '<S174>/NOT5' incorporates:
     *  Constant: '<S169>/KeTAIB_Cnt_SmplLim5VAux1'
     *  Logic: '<S174>/NOT3'
     *  RelationalOperator: '<S174>/Less Than  or Equal'
     */
    TAIB_ac_DW.UnitDelay_DSTATE_lc = ((VeTAIB_Cnt_P0697Smpl >=
        KeTAIB_Cnt_SmplLim5VAux1) && (!TAIB_ac_DW.UnitDelay1_DSTATE_n));

    /* Switch: '<S187>/Switch1' incorporates:
     *  Constant: '<S180>/Constant Value'
     *  DataStoreWrite: '<S165>/Data Store Write1'
     *  Switch: '<S186>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TAIB_ac_DW.NeTAIB_Cnt_5VAux1_MFOP = 0U;
    }
    else
    {
        if (TAIB_ac_DW.UnitDelay_DSTATE_lc)
        {
            /* MinMax: '<S180>/Minimum2' incorporates:
             *  DataStoreRead: '<S165>/Data Store Read1'
             *  Switch: '<S186>/Switch1'
             */
            if (VeTAIB_Cnt_P0697Fail > TAIB_ac_DW.NeTAIB_Cnt_5VAux1_MFOP)
            {
                /* DataStoreWrite: '<S165>/Data Store Write1' incorporates:
                 *  Switch: '<S186>/Switch1'
                 */
                TAIB_ac_DW.NeTAIB_Cnt_5VAux1_MFOP = VeTAIB_Cnt_P0697Fail;
            }

            /* End of MinMax: '<S180>/Minimum2' */
        }
    }

    /* End of Switch: '<S187>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S173>/Fail' */
    TAIB_ac_Fail(TAIB_ac_DW.UnitDelay1_DSTATE_n, &TAIB_ac_B.Merge_om);

    /* End of Outputs for SubSystem: '<S173>/Fail' */

    /* Outputs for Enabled SubSystem: '<S173>/Init' */
    TAIB_ac_Init_g(rtb_NOT4_c, &TAIB_ac_B.Merge_om);

    /* End of Outputs for SubSystem: '<S173>/Init' */

    /* Outputs for Enabled SubSystem: '<S173>/Pass' */
    TAIB_ac_Pass(TAIB_ac_DW.UnitDelay_DSTATE_lc, &TAIB_ac_B.Merge_om);

    /* End of Outputs for SubSystem: '<S173>/Pass' */

    /* End of Outputs for SubSystem: '<S40>/5VAux1' */
    /* End of Outputs for SubSystem: '<S3>/FiveVAux1' */
#endif

    /* SignalConversion generated from: '<S3>/VeTAIB_T_CEXV_OutTempSnsrRaw' */
#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence

    /* Outport: '<Root>/VeTAIB_T_CEXV_OutTempSnsrRaw' */
    (void)Rte_Write_VeTAIB_T_CEXV_OutTempSnsrRaw_Value(rtb_Vector_b[0]);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTAIB_T_CEXV_OutTempSnsrRaw' */

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoGro' incorporates:
     *  Inport: '<Root>/VeADCR_U_OexvRtis_VsADCR_e_CnvnRes'
     *  SignalConversion generated from: '<S3>/VeTAIB_T_OEXV_InTempSnsrRaw'
     *  SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoBat'
     */
#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

    /* Outputs for Atomic SubSystem: '<S3>/OutsideExpansValvRefInTSnsr' */
    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoGro' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoGro'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoGro_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_o);

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoBat' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoBat'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoBat_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_pg);

    /* Outputs for Atomic SubSystem: '<S41>/OutsideExpansValvRefInTSnsr' */

    /* RelationalOperator: '<S203>/Relational Operator3' incorporates:
     *  Constant: '<S203>/Constant3'
     *  S-Function (sfix_bitop): '<S203>/Bitwise Operator2'
     */
    rtb_Logical1_fn = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Sta_pg) & 64U)
                       == 0U);

    /* Outputs for Atomic SubSystem: '<S203>/EdgeFalling1' */
    /* Logic: '<S203>/Logical Operator' incorporates:
     *  Logic: '<S205>/OR1'
     */
    rtb_RelationalOperator3_iz = !rtb_Logical1_fn;

    /* End of Outputs for SubSystem: '<S203>/EdgeFalling1' */

    /* Logic: '<S195>/Logical Operator1' incorporates:
     *  Logic: '<S196>/Logical Operator1'
     */
    rtb_LogicalOperator_m = !rtb_TmpSignalConversionAtVeADFB_b_A2DFau;

    /* Logic: '<S203>/Logical1' incorporates:
     *  Constant: '<S200>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S202>/KeTAIB_b_STBDiagEnbl_OEXV_InTSnsr'
     *  Constant: '<S203>/Constant1'
     *  Logic: '<S195>/Logical Operator'
     *  Logic: '<S195>/Logical Operator1'
     *  Logic: '<S203>/Logical Operator'
     *  Logic: '<S203>/Logical10'
     *  Logic: '<S203>/Logical12'
     *  RelationalOperator: '<S203>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S203>/Bitwise Operator3'
     */
    rtb_Logical1_hb = (((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
                         (KeTAIB_b_STBDiagEnbl_OEXV_InTSnsr)) &&
                        rtb_LogicalOperator_m) &&
                       ((!KeTAIB_b_LtchEnblOEXVInTSnsrSTB) || (((((uint32)
                            rtb_TmpSignalConversionAtVeDMAB_y_Sta_pg) & 1U) ==
                          0U) || rtb_RelationalOperator3_iz)));

    /* End of Outputs for SubSystem: '<S41>/OutsideExpansValvRefInTSnsr' */
    /* Gateway: SigMngtAndCnvn/OutsideExpansValvRefInTSnsr/OutsideExpansValvRefInTSnsr/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/OutsideExpansValvRefInTSnsr/OutsideExpansValvRefInTSnsr/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_OexvRtis_VsADCR_e_CnvnRes(&tmpRead_2);

    /* Outputs for Atomic SubSystem: '<S41>/OutsideExpansValvRefInTSnsr' */
    /* Chart: '<S194>/AntiSpkFil' incorporates:
     *  Constant: '<S247>/KeTAIB_Cnt_OEXV_InTempSnsrSpikeThd'
     *  Constant: '<S248>/KeTAIB_U_OEXV_InTempSnsrSpikeThd'
     *  Inport: '<Root>/VeADCR_U_OexvRtis_VsADCR_e_CnvnRes'
     */
    if (((uint32)TAIB_ac_DW.is_active_c9_TAIB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/OutsideExpansValvRefInTSnsr/OutsideExpansValvRefInTSnsr/SigAcqnAndFilSys/AntiSpkFil */
        TAIB_ac_DW.is_active_c9_TAIB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/OutsideExpansValvRefInTSnsr/OutsideExpansValvRefInTSnsr/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S246>:8' */
        TAIB_ac_DW.is_c9_TAIB_ac = TAIB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S246>:37' */
        TAIB_ac_B.InputRaw0_h = tmpRead_2.e_CnvnRes;
        VeTAIB_U_OEXV_InTempSnsrVoltRaw = tmpRead_2.e_CnvnRes;
    }
    else if (((sint32)TAIB_ac_DW.is_c9_TAIB_ac) == 1)
    {
        /* During 'FILTERING': '<S246>:38' */
        if (TAIB_ac_B.Cnt_hm >= ((float32)KeTAIB_Cnt_OEXV_InTempSnsrSpikeThd))
        {
            /* Transition: '<S246>:40' */
            TAIB_ac_DW.is_c9_TAIB_ac = TAIB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S246>:37' */
            TAIB_ac_B.InputRaw0_h = tmpRead_2.e_CnvnRes;
            VeTAIB_U_OEXV_InTempSnsrVoltRaw = tmpRead_2.e_CnvnRes;
        }
        else
        {
            TAIB_ac_B.Cnt_hm++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S246>:37' */
        tmp = tmpRead_2.e_CnvnRes - TAIB_ac_B.InputRaw0_h;
        if ((tmp > KeTAIB_U_OEXV_InTempSnsrSpikeThd) || (tmp <
                (-KeTAIB_U_OEXV_InTempSnsrSpikeThd)))
        {
            /* Transition: '<S246>:39' */
            TAIB_ac_DW.is_c9_TAIB_ac = TAIB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S246>:38' */
            TAIB_ac_B.Cnt_hm = 0.0F;
        }
        else
        {
            VeTAIB_U_OEXV_InTempSnsrVoltRaw = tmpRead_2.e_CnvnRes;
            TAIB_ac_B.InputRaw0_h = tmpRead_2.e_CnvnRes;
        }
    }

    /* End of Chart: '<S194>/AntiSpkFil' */

    /* RelationalOperator: '<S195>/Relational Operator3' incorporates:
     *  Constant: '<S201>/KeTAIB_U_STBCktHiFltLim_OEXV_InTSnsr'
     */
    rtb_RelationalOperator3_l = (VeTAIB_U_OEXV_InTempSnsrVoltRaw >
        KeTAIB_U_STBCktHiFltLim_OEXV_InTSnsr);

    /* Logic: '<S197>/NOT4' */
    rtb_NOT4_c = (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
                  rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outputs for Atomic SubSystem: '<S203>/EdgeFalling1' */
    /* Logic: '<S205>/AND' incorporates:
     *  UnitDelay: '<S205>/Unit Delay'
     */
    rtb_RelationalOperator3_iz = (rtb_RelationalOperator3_iz &&
        (TAIB_ac_DW.UnitDelay_DSTATE_eo));

    /* Update for UnitDelay: '<S205>/Unit Delay' */
    TAIB_ac_DW.UnitDelay_DSTATE_eo = rtb_Logical1_fn;

    /* End of Outputs for SubSystem: '<S203>/EdgeFalling1' */

    /* Logic: '<S203>/Logical5' */
    rtb_Logical1_fn = (rtb_NOT4_c || rtb_RelationalOperator3_iz);

    /* Outputs for Atomic SubSystem: '<S204>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S204>/Counter Reset  Enabled ' */
    /* Switch: '<S211>/Switch1' incorporates:
     *  Logic: '<S204>/Fail Counter Reset'
     *  Logic: '<S204>/NOT6'
     *  Switch: '<S211>/Switch2'
     *  Switch: '<S212>/Switch1'
     *  UnitDelay: '<S204>/Unit Delay'
     *  UnitDelay: '<S204>/Unit Delay1'
     */
    if ((rtb_Logical1_fn || (TAIB_ac_DW.UnitDelay_DSTATE_hd)) ||
            (TAIB_ac_DW.UnitDelay1_DSTATE_f))
    {
        /* Switch: '<S211>/Switch1' incorporates:
         *  Constant: '<S211>/Constant Value2'
         */
        VeTAIB_Cnt_STBFailLimOEXV_InTSnsr = 0U;

        /* Switch: '<S212>/Switch1' incorporates:
         *  Constant: '<S212>/Constant Value2'
         */
        VeTAIB_Cnt_STBSmplLimOEXV_InTSnsr = 0U;
    }
    else
    {
        if (rtb_Logical1_hb && rtb_RelationalOperator3_l)
        {
            /* Switch: '<S211>/Switch1' incorporates:
             *  Constant: '<S211>/Constant Value1'
             *  Sum: '<S211>/Subtraction'
             *  Switch: '<S211>/Switch2'
             *  UnitDelay: '<S211>/Unit Delay'
             */
            VeTAIB_Cnt_STBFailLimOEXV_InTSnsr = (uint16)(((uint32)
                VeTAIB_Cnt_STBFailLimOEXV_InTSnsr) + 1U);
        }

        /* Switch: '<S212>/Switch2' */
        if (rtb_Logical1_hb)
        {
            /* Switch: '<S212>/Switch1' incorporates:
             *  Constant: '<S212>/Constant Value1'
             *  Sum: '<S212>/Subtraction'
             *  Switch: '<S212>/Switch2'
             *  UnitDelay: '<S212>/Unit Delay'
             */
            VeTAIB_Cnt_STBSmplLimOEXV_InTSnsr = (uint16)(((uint32)
                VeTAIB_Cnt_STBSmplLimOEXV_InTSnsr) + 1U);
        }

        /* End of Switch: '<S212>/Switch2' */
    }

    /* End of Switch: '<S211>/Switch1' */
    /* End of Outputs for SubSystem: '<S204>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S204>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S204>/Greater Than or Equal ' incorporates:
     *  Constant: '<S198>/KeTAIB_Cnt_STBFailLimOEXV_InTSnsr'
     */
    TAIB_ac_DW.UnitDelay1_DSTATE_f = (VeTAIB_Cnt_STBFailLimOEXV_InTSnsr >=
        KeTAIB_Cnt_STBFailLimOEXV_InTSnsr);

    /* Logic: '<S204>/NOT5' incorporates:
     *  Constant: '<S199>/KeTAIB_Cnt_STBSmplLimOEXV_InTSnsr'
     *  Logic: '<S204>/NOT3'
     *  RelationalOperator: '<S204>/Less Than  or Equal'
     */
    rtb_Logical1_hb = ((VeTAIB_Cnt_STBSmplLimOEXV_InTSnsr >=
                        KeTAIB_Cnt_STBSmplLimOEXV_InTSnsr) &&
                       (!TAIB_ac_DW.UnitDelay1_DSTATE_f));

    /* Switch: '<S217>/Switch1' incorporates:
     *  Constant: '<S210>/Constant Value'
     *  DataStoreWrite: '<S195>/Data Store Write1'
     *  Switch: '<S216>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TAIB_ac_DW.NeTAIB_Cnt_OEXVInTSnsrSTB_MFOP = 0U;
    }
    else
    {
        if (rtb_Logical1_hb)
        {
            /* MinMax: '<S210>/Minimum2' incorporates:
             *  DataStoreRead: '<S195>/Data Store Read1'
             *  Switch: '<S216>/Switch1'
             */
            if (VeTAIB_Cnt_STBFailLimOEXV_InTSnsr >
                    TAIB_ac_DW.NeTAIB_Cnt_OEXVInTSnsrSTB_MFOP)
            {
                /* DataStoreWrite: '<S195>/Data Store Write1' incorporates:
                 *  Switch: '<S216>/Switch1'
                 */
                TAIB_ac_DW.NeTAIB_Cnt_OEXVInTSnsrSTB_MFOP =
                    VeTAIB_Cnt_STBFailLimOEXV_InTSnsr;
            }

            /* End of MinMax: '<S210>/Minimum2' */
        }
    }

    /* End of Switch: '<S217>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S203>/Fail' */
    TAIB_ac_Fail(TAIB_ac_DW.UnitDelay1_DSTATE_f, &TAIB_ac_B.Merge_h);

    /* End of Outputs for SubSystem: '<S203>/Fail' */

    /* Outputs for Enabled SubSystem: '<S203>/Init' */
    TAIB_ac_Init_g(rtb_Logical1_fn, &TAIB_ac_B.Merge_h);

    /* End of Outputs for SubSystem: '<S203>/Init' */

    /* Outputs for Enabled SubSystem: '<S203>/Pass' */
    TAIB_ac_Pass(rtb_Logical1_hb, &TAIB_ac_B.Merge_h);

    /* End of Outputs for SubSystem: '<S203>/Pass' */

    /* RelationalOperator: '<S223>/Relational Operator3' incorporates:
     *  Constant: '<S223>/Constant3'
     *  S-Function (sfix_bitop): '<S223>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_iz = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_o) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S223>/EdgeFalling1' */
    /* Logic: '<S223>/Logical Operator' incorporates:
     *  Logic: '<S225>/OR1'
     */
    rtb_AND_m = !rtb_RelationalOperator3_iz;

    /* End of Outputs for SubSystem: '<S223>/EdgeFalling1' */

    /* Logic: '<S223>/Logical1' incorporates:
     *  Constant: '<S219>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S222>/KeTAIB_b_STGDiagEnbl_OEXV_InTSnsr'
     *  Constant: '<S223>/Constant1'
     *  Logic: '<S196>/Logical Operator'
     *  Logic: '<S223>/Logical Operator'
     *  Logic: '<S223>/Logical10'
     *  Logic: '<S223>/Logical12'
     *  RelationalOperator: '<S223>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S223>/Bitwise Operator3'
     */
    rtb_Logical1_fn = (((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
                         (KeTAIB_b_STGDiagEnbl_OEXV_InTSnsr)) &&
                        rtb_LogicalOperator_m) &&
                       ((!KeTAIB_b_LtchEnblOEXVInTSnsrSTG) || (((((uint32)
                            rtb_TmpSignalConversionAtVeDMAB_y_Stat_o) & 1U) ==
                          0U) || rtb_AND_m)));

    /* RelationalOperator: '<S196>/Relational Operator1' incorporates:
     *  Constant: '<S221>/KeTAIB_U_STGCktLowFltLim_OEXV_InTSnsr'
     */
    rtb_LogicalOperator_m = (VeTAIB_U_OEXV_InTempSnsrVoltRaw <
        KeTAIB_U_STGCktLowFltLim_OEXV_InTSnsr);

    /* Outputs for Atomic SubSystem: '<S223>/EdgeFalling1' */
    /* Logic: '<S225>/AND' incorporates:
     *  UnitDelay: '<S225>/Unit Delay'
     */
    rtb_AND_m = (rtb_AND_m && (TAIB_ac_DW.UnitDelay_DSTATE_p));

    /* Update for UnitDelay: '<S225>/Unit Delay' */
    TAIB_ac_DW.UnitDelay_DSTATE_p = rtb_RelationalOperator3_iz;

    /* End of Outputs for SubSystem: '<S223>/EdgeFalling1' */

    /* Logic: '<S223>/Logical5' */
    rtb_NOT4_c = (rtb_NOT4_c || rtb_AND_m);

    /* UnitDelay: '<S224>/Unit Delay1' incorporates:
     *  UnitDelay: '<S204>/Unit Delay'
     */
    TAIB_ac_DW.UnitDelay_DSTATE_hd = TAIB_ac_DW.UnitDelay1_DSTATE_e5;

    /* Outputs for Atomic SubSystem: '<S224>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S224>/Counter Reset  Enabled ' */
    /* Switch: '<S231>/Switch1' incorporates:
     *  Logic: '<S224>/Fail Counter Reset'
     *  Logic: '<S224>/NOT6'
     *  Switch: '<S231>/Switch2'
     *  Switch: '<S232>/Switch1'
     *  UnitDelay: '<S204>/Unit Delay'
     *  UnitDelay: '<S224>/Unit Delay'
     */
    if ((rtb_NOT4_c || (TAIB_ac_DW.UnitDelay_DSTATE_jd)) ||
            (TAIB_ac_DW.UnitDelay_DSTATE_hd))
    {
        /* Switch: '<S231>/Switch1' incorporates:
         *  Constant: '<S231>/Constant Value2'
         */
        VeTAIB_Cnt_STGFailLimOEXV_InTSnsr = 0U;

        /* Switch: '<S232>/Switch1' incorporates:
         *  Constant: '<S232>/Constant Value2'
         */
        VeTAIB_Cnt_STGSmplLimOEXV_InTSnsr = 0U;
    }
    else
    {
        if (rtb_Logical1_fn && rtb_LogicalOperator_m)
        {
            /* Switch: '<S231>/Switch1' incorporates:
             *  Constant: '<S231>/Constant Value1'
             *  Sum: '<S231>/Subtraction'
             *  Switch: '<S231>/Switch2'
             *  UnitDelay: '<S231>/Unit Delay'
             */
            VeTAIB_Cnt_STGFailLimOEXV_InTSnsr = (uint16)(((uint32)
                VeTAIB_Cnt_STGFailLimOEXV_InTSnsr) + 1U);
        }

        /* Switch: '<S232>/Switch2' */
        if (rtb_Logical1_fn)
        {
            /* Switch: '<S232>/Switch1' incorporates:
             *  Constant: '<S232>/Constant Value1'
             *  Sum: '<S232>/Subtraction'
             *  Switch: '<S232>/Switch2'
             *  UnitDelay: '<S232>/Unit Delay'
             */
            VeTAIB_Cnt_STGSmplLimOEXV_InTSnsr = (uint16)(((uint32)
                VeTAIB_Cnt_STGSmplLimOEXV_InTSnsr) + 1U);
        }

        /* End of Switch: '<S232>/Switch2' */
    }

    /* End of Switch: '<S231>/Switch1' */
    /* End of Outputs for SubSystem: '<S224>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S224>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S224>/Greater Than or Equal ' incorporates:
     *  Constant: '<S218>/KeTAIB_Cnt_STGFailLimOEXV_InTSnsr'
     */
    TAIB_ac_DW.UnitDelay1_DSTATE_e5 = (VeTAIB_Cnt_STGFailLimOEXV_InTSnsr >=
        KeTAIB_Cnt_STGFailLimOEXV_InTSnsr);

    /* Logic: '<S224>/NOT5' incorporates:
     *  Constant: '<S220>/KeTAIB_Cnt_STGSmplLimOEXV_InTSnsr'
     *  Logic: '<S224>/NOT3'
     *  RelationalOperator: '<S224>/Less Than  or Equal'
     */
    TAIB_ac_DW.UnitDelay_DSTATE_jd = ((VeTAIB_Cnt_STGSmplLimOEXV_InTSnsr >=
        KeTAIB_Cnt_STGSmplLimOEXV_InTSnsr) && (!TAIB_ac_DW.UnitDelay1_DSTATE_e5));

    /* Switch: '<S237>/Switch1' incorporates:
     *  Constant: '<S230>/Constant Value'
     *  DataStoreWrite: '<S196>/Data Store Write1'
     *  Switch: '<S236>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TAIB_ac_DW.NeTAIB_Cnt_OEXVInTSnsrSTG_MFOP = 0U;
    }
    else
    {
        if (TAIB_ac_DW.UnitDelay_DSTATE_jd)
        {
            /* MinMax: '<S230>/Minimum2' incorporates:
             *  DataStoreRead: '<S196>/Data Store Read1'
             *  Switch: '<S236>/Switch1'
             */
            if (VeTAIB_Cnt_STGFailLimOEXV_InTSnsr >
                    TAIB_ac_DW.NeTAIB_Cnt_OEXVInTSnsrSTG_MFOP)
            {
                /* DataStoreWrite: '<S196>/Data Store Write1' incorporates:
                 *  Switch: '<S236>/Switch1'
                 */
                TAIB_ac_DW.NeTAIB_Cnt_OEXVInTSnsrSTG_MFOP =
                    VeTAIB_Cnt_STGFailLimOEXV_InTSnsr;
            }

            /* End of MinMax: '<S230>/Minimum2' */
        }
    }

    /* End of Switch: '<S237>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S223>/Fail' */
    TAIB_ac_Fail(TAIB_ac_DW.UnitDelay1_DSTATE_e5, &TAIB_ac_B.Merge_b);

    /* End of Outputs for SubSystem: '<S223>/Fail' */

    /* Outputs for Enabled SubSystem: '<S223>/Init' */
    TAIB_ac_Init_g(rtb_NOT4_c, &TAIB_ac_B.Merge_b);

    /* End of Outputs for SubSystem: '<S223>/Init' */

    /* Outputs for Enabled SubSystem: '<S223>/Pass' */
    TAIB_ac_Pass(TAIB_ac_DW.UnitDelay_DSTATE_jd, &TAIB_ac_B.Merge_b);

    /* End of Outputs for SubSystem: '<S223>/Pass' */

    /* Logic: '<S192>/Logical Operator1' incorporates:
     *  Constant: '<S206>/Constant'
     *  Constant: '<S226>/Constant'
     *  Merge: '<S203>/Merge'
     *  Merge: '<S223>/Merge'
     *  RelationalOperator: '<S203>/Relational Operator'
     *  RelationalOperator: '<S223>/Relational Operator'
     */
    rtb_NOT4_c = (((((uint32)TAIB_ac_B.Merge_b) == CeDFIB_e_Fail) || (((uint32)
                     TAIB_ac_B.Merge_h) == CeDFIB_e_Fail)) ||
                  rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* Switch: '<S252>/Switch' incorporates:
     *  Selector: '<S251>/Selector_R'
     */
    if (TAIB_ac_DW.UnitDelay_DSTATE_hw)
    {
        /* Assignment: '<S253>/Assignment_y' incorporates:
         *  Switch: '<S239>/Switch'
         */
        VeTAIB_U_OEXV_InTempSnsrVolt = VeTAIB_U_OEXV_InTempSnsrVoltRaw;
    }
    else
    {
        /* Assignment: '<S253>/Assignment_y' incorporates:
         *  Constant: '<S249>/KeTAIB_k_OEXV_InTempSnsrFiltGx'
         *  Product: '<S252>/Product'
         *  Selector: '<S251>/Selector_u'
         *  Selector: '<S251>/Selector_x'
         *  Sum: '<S252>/Difference'
         *  Sum: '<S252>/Sum'
         *  Switch: '<S239>/Switch'
         *  Switch: '<S252>/Switch_E'
         */
        VeTAIB_U_OEXV_InTempSnsrVolt = ((VeTAIB_U_OEXV_InTempSnsrVoltRaw -
            VeTAIB_U_OEXV_InTempSnsrVolt) * KeTAIB_k_OEXV_InTempSnsrFiltGx) +
            VeTAIB_U_OEXV_InTempSnsrVolt;
    }

    /* End of Switch: '<S252>/Switch' */

    /* Gain: '<S193>/Gain' */
    VeTAIB_U_OEXV_InTempSnsrVoltXChartC[0] = VeTAIB_U_OEXV_InTempSnsrVoltRaw;
    VeTAIB_U_OEXV_InTempSnsrVoltXChartC[1] = VeTAIB_U_OEXV_InTempSnsrVolt;

    /* Lookup_n-D: '<S238>/Vector' incorporates:
     *  Gain: '<S193>/Gain'
     */
    for (iU = 0; iU < 2; iU++)
    {
        rtb_Vector_b[iU] = look1_iflf_binlca_19a
            (VeTAIB_U_OEXV_InTempSnsrVoltXChartC[(iU)], ((const float32 *)
              &(KxTAIB_U_OEXV_InTempSnsrChartc[0])), ((const float32 *)
              &(KtTAIB_T_OEXV_InTempSnsrChartc[0])), 23U);
    }

    /* End of Lookup_n-D: '<S238>/Vector' */

    /* Switch: '<S241>/Switch' incorporates:
     *  Logic: '<S192>/Logical Operator'
     *  Logic: '<S193>/Logical Operator'
     */
    if (((!rtb_LogicalOperator_m) && (!rtb_RelationalOperator3_l)) &&
            (!rtb_NOT4_c))
    {
        /* Switch: '<S241>/Switch' */
        TAIB_ac_DW.VeTAIB_T_OEXV_InTempSnsrInit_DSTATE = rtb_Vector_b[1];
    }

    /* End of Switch: '<S241>/Switch' */

    /* Switch: '<S239>/Switch' incorporates:
     *  Constant: '<S243>/KeTAIB_b_OEXV_InTempSnsrBypEnbl'
     *  Constant: '<S245>/KeTAIB_b_OEXV_InTempRcvryEnbl'
     *  Logic: '<S240>/Logical Operator'
     *  Switch: '<S240>/Switch'
     */
    if (KeTAIB_b_OEXV_InTempSnsrBypEnbl)
    {
        /* Outport: '<Root>/VeTAIB_T_OEXV_InTempSnsr' incorporates:
         *  Constant: '<S242>/KeTAIB_T_OEXV_InTempSnsrByp'
         *  SignalConversion: '<S191>/Signal Conversion'
         */
        (void)Rte_Write_VeTAIB_T_OEXV_InTempSnsr_Value
            (KeTAIB_T_OEXV_InTempSnsrByp);
    }
    else if ((KeTAIB_b_OEXV_InTempRcvryEnbl) && rtb_NOT4_c)
    {
        /* Outport: '<Root>/VeTAIB_T_OEXV_InTempSnsr' incorporates:
         *  Constant: '<S244>/KeTAIB_T_OEXV_InTempRcvry'
         *  SignalConversion: '<S191>/Signal Conversion'
         *  Switch: '<S240>/Switch'
         */
        (void)Rte_Write_VeTAIB_T_OEXV_InTempSnsr_Value(KeTAIB_T_OEXV_InTempRcvry);
    }
    else
    {
        /* Outport: '<Root>/VeTAIB_T_OEXV_InTempSnsr' incorporates:
         *  SignalConversion: '<S191>/Signal Conversion'
         *  Switch: '<S240>/Switch'
         */
        (void)Rte_Write_VeTAIB_T_OEXV_InTempSnsr_Value
            (TAIB_ac_DW.VeTAIB_T_OEXV_InTempSnsrInit_DSTATE);
    }

    /* End of Switch: '<S239>/Switch' */

    /* Outport: '<Root>/VeTAIB_b_OEXV_InTempSnsr_FA' incorporates:
     *  SignalConversion: '<S191>/Signal Conversion1'
     */
    (void)Rte_Write_VeTAIB_b_OEXV_InTempSnsr_FA_Value(rtb_NOT4_c);

    /* Update for UnitDelay: '<S204>/Unit Delay' */
    TAIB_ac_DW.UnitDelay_DSTATE_hd = rtb_Logical1_hb;

    /* End of Outputs for SubSystem: '<S41>/OutsideExpansValvRefInTSnsr' */

    /* Outport: '<Root>/VeTAIB_T_OEXV_InTempSnsrRaw' */
    (void)Rte_Write_VeTAIB_T_OEXV_InTempSnsrRaw_Value(rtb_Vector_b[0]);

    /* End of Outputs for SubSystem: '<S3>/OutsideExpansValvRefInTSnsr' */
#endif

    /* End of SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_AC_RefrigTempSnsr5CktShotoGro' */

    /* SignalConversion generated from: '<S3>/VeTAIB_T_OEXV_OutTempSnsrRaw' incorporates:
     *  Inport: '<Root>/VeADCR_U_OexvRtos_VsADCR_e_CnvnRes'
     */
#if Rte_SysCon_Variant_TAIB_OEXVOT_Presence

    /* Outputs for Atomic SubSystem: '<S3>/OutsideExpansValvRefOutTSnsr' */
    /* Gateway: SigMngtAndCnvn/OutsideExpansValvRefOutTSnsr/OutsideExpansValvRefOutTSnsr/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/OutsideExpansValvRefOutTSnsr/OutsideExpansValvRefOutTSnsr/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_OexvRtos_VsADCR_e_CnvnRes(&tmpRead_1);

    /* Outputs for Atomic SubSystem: '<S43>/OutsideExpansValvRefOutTSnsr' */
    /* Chart: '<S285>/AntiSpkFil' incorporates:
     *  Constant: '<S301>/KeTAIB_Cnt_OEXV_OutTempSnsrSpikeThd'
     *  Constant: '<S302>/KeTAIB_U_OEXV_OutTempSnsrSpikeThd'
     *  Inport: '<Root>/VeADCR_U_OexvRtos_VsADCR_e_CnvnRes'
     */
    if (((uint32)TAIB_ac_DW.is_active_c2_TAIB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/OutsideExpansValvRefOutTSnsr/OutsideExpansValvRefOutTSnsr/SigAcqnAndFilSys/AntiSpkFil */
        TAIB_ac_DW.is_active_c2_TAIB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/OutsideExpansValvRefOutTSnsr/OutsideExpansValvRefOutTSnsr/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S300>:8' */
        TAIB_ac_DW.is_c2_TAIB_ac = TAIB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S300>:37' */
        TAIB_ac_B.InputRaw0 = tmpRead_1.e_CnvnRes;
        VeTAIB_U_OEXV_OutTempSnsrVoltRaw = tmpRead_1.e_CnvnRes;
    }
    else if (((sint32)TAIB_ac_DW.is_c2_TAIB_ac) == 1)
    {
        /* During 'FILTERING': '<S300>:38' */
        if (TAIB_ac_B.Cnt >= ((float32)KeTAIB_Cnt_OEXV_OutTempSnsrSpikeThd))
        {
            /* Transition: '<S300>:40' */
            TAIB_ac_DW.is_c2_TAIB_ac = TAIB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S300>:37' */
            TAIB_ac_B.InputRaw0 = tmpRead_1.e_CnvnRes;
            VeTAIB_U_OEXV_OutTempSnsrVoltRaw = tmpRead_1.e_CnvnRes;
        }
        else
        {
            TAIB_ac_B.Cnt++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S300>:37' */
        tmp = tmpRead_1.e_CnvnRes - TAIB_ac_B.InputRaw0;
        if ((tmp > KeTAIB_U_OEXV_OutTempSnsrSpikeThd) || (tmp <
                (-KeTAIB_U_OEXV_OutTempSnsrSpikeThd)))
        {
            /* Transition: '<S300>:39' */
            TAIB_ac_DW.is_c2_TAIB_ac = TAIB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S300>:38' */
            TAIB_ac_B.Cnt = 0.0F;
        }
        else
        {
            VeTAIB_U_OEXV_OutTempSnsrVoltRaw = tmpRead_1.e_CnvnRes;
            TAIB_ac_B.InputRaw0 = tmpRead_1.e_CnvnRes;
        }
    }

    /* End of Chart: '<S285>/AntiSpkFil' */

    /* Switch: '<S306>/Switch' incorporates:
     *  Selector: '<S305>/Selector_R'
     */
    if (TAIB_ac_DW.UnitDelay_DSTATE_hw)
    {
        /* Assignment: '<S307>/Assignment_y' incorporates:
         *  Switch: '<S293>/Switch'
         */
        VeTAIB_U_OEXV_OutTempSnsrVolt = VeTAIB_U_OEXV_OutTempSnsrVoltRaw;
    }
    else
    {
        /* Assignment: '<S307>/Assignment_y' incorporates:
         *  Constant: '<S303>/KeTAIB_k_OEXV_OutTempSnsrFiltGx'
         *  Product: '<S306>/Product'
         *  Selector: '<S305>/Selector_u'
         *  Selector: '<S305>/Selector_x'
         *  Sum: '<S306>/Difference'
         *  Sum: '<S306>/Sum'
         *  Switch: '<S293>/Switch'
         *  Switch: '<S306>/Switch_E'
         */
        VeTAIB_U_OEXV_OutTempSnsrVolt = ((VeTAIB_U_OEXV_OutTempSnsrVoltRaw -
            VeTAIB_U_OEXV_OutTempSnsrVolt) * KeTAIB_k_OEXV_OutTempSnsrFiltGx) +
            VeTAIB_U_OEXV_OutTempSnsrVolt;
    }

    /* End of Switch: '<S306>/Switch' */

    /* Gain: '<S284>/Gain' */
    VeTAIB_U_OEXV_OutTempSnsrVoltXChartC[0] = VeTAIB_U_OEXV_OutTempSnsrVoltRaw;
    VeTAIB_U_OEXV_OutTempSnsrVoltXChartC[1] = VeTAIB_U_OEXV_OutTempSnsrVolt;

    /* Lookup_n-D: '<S292>/Vector' incorporates:
     *  Gain: '<S284>/Gain'
     */
    for (iU = 0; iU < 2; iU++)
    {
        rtb_Vector_b[iU] = look1_iflf_binlca_19a
            (VeTAIB_U_OEXV_OutTempSnsrVoltXChartC[(iU)], ((const float32 *)
              &(KxTAIB_U_OEXV_OutTempSnsrChartc[0])), ((const float32 *)
              &(KtTAIB_T_OEXV_OutTempSnsrChartc[0])), 23U);
    }

    /* End of Lookup_n-D: '<S292>/Vector' */

    /* Switch: '<S295>/Switch' incorporates:
     *  Constant: '<S288>/KeTAIB_U_STBCktHiFltLim_OEXV_OutTSnsr'
     *  Constant: '<S290>/KeTAIB_U_STGCktLowFltLim_OEXV_OutTSnsr'
     *  Logic: '<S283>/Logical Operator'
     *  Logic: '<S284>/Logical Operator'
     *  RelationalOperator: '<S286>/Relational Operator3'
     *  RelationalOperator: '<S287>/Relational Operator1'
     */
    if (((VeTAIB_U_OEXV_OutTempSnsrVoltRaw >=
            KeTAIB_U_STGCktLowFltLim_OEXV_OutTSnsr) &&
            (VeTAIB_U_OEXV_OutTempSnsrVoltRaw <=
             KeTAIB_U_STBCktHiFltLim_OEXV_OutTSnsr)) &&
            (!rtb_TmpSignalConversionAtVeADFB_b_A2DFau))
    {
        /* Switch: '<S295>/Switch' */
        TAIB_ac_DW.VeTAIB_T_OEXV_OutTempSnsrInit_DSTATE = rtb_Vector_b[1];
    }

    /* End of Switch: '<S295>/Switch' */

    /* Switch: '<S293>/Switch' incorporates:
     *  Constant: '<S297>/KeTAIB_b_OEXV_OutTempSnsrBypEnbl'
     *  Constant: '<S299>/KeTAIB_b_OEXV_OutTempRcvryEnbl'
     *  Logic: '<S294>/Logical Operator'
     *  Switch: '<S294>/Switch'
     */
    if (KeTAIB_b_OEXV_OutTempSnsrBypEnbl)
    {
        /* Outport: '<Root>/VeTAIB_T_OEXV_OutTempSnsr' incorporates:
         *  Constant: '<S296>/KeTAIB_T_OEXV_OutTempSnsrByp'
         *  SignalConversion: '<S282>/Signal Conversion'
         */
        (void)Rte_Write_VeTAIB_T_OEXV_OutTempSnsr_Value
            (KeTAIB_T_OEXV_OutTempSnsrByp);
    }
    else if ((KeTAIB_b_OEXV_OutTempRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeADFB_b_A2DFau)
    {
        /* Outport: '<Root>/VeTAIB_T_OEXV_OutTempSnsr' incorporates:
         *  Constant: '<S298>/KeTAIB_T_OEXV_OutTempRcvry'
         *  SignalConversion: '<S282>/Signal Conversion'
         *  Switch: '<S294>/Switch'
         */
        (void)Rte_Write_VeTAIB_T_OEXV_OutTempSnsr_Value
            (KeTAIB_T_OEXV_OutTempRcvry);
    }
    else
    {
        /* Outport: '<Root>/VeTAIB_T_OEXV_OutTempSnsr' incorporates:
         *  SignalConversion: '<S282>/Signal Conversion'
         *  Switch: '<S294>/Switch'
         */
        (void)Rte_Write_VeTAIB_T_OEXV_OutTempSnsr_Value
            (TAIB_ac_DW.VeTAIB_T_OEXV_OutTempSnsrInit_DSTATE);
    }

    /* End of Switch: '<S293>/Switch' */

    /* Outport: '<Root>/VeTAIB_b_OEXV_OutTempSnsr_FA' incorporates:
     *  SignalConversion: '<S282>/Signal Conversion1'
     */
    (void)Rte_Write_VeTAIB_b_OEXV_OutTempSnsr_FA_Value
        (rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* End of Outputs for SubSystem: '<S43>/OutsideExpansValvRefOutTSnsr' */

    /* Outport: '<Root>/VeTAIB_T_OEXV_OutTempSnsrRaw' */
    (void)Rte_Write_VeTAIB_T_OEXV_OutTempSnsrRaw_Value(rtb_Vector_b[0]);

    /* End of Outputs for SubSystem: '<S3>/OutsideExpansValvRefOutTSnsr' */
#endif

    /* End of SignalConversion generated from: '<S3>/VeTAIB_T_OEXV_OutTempSnsrRaw' */

    /* SignalConversion generated from: '<S3>/VeTAIB_e_5VAux1_PassFail' */
#if Rte_SysCon_Variant_TAIB_5VAUX_Presence

    /* Outport: '<Root>/VeTAIB_e_FaultSts_SnsrRefVolt3Ckt' incorporates:
     *  Merge: '<S173>/Merge'
     */
    (void)Rte_Write_VeTAIB_e_FaultSts_SnsrRefVolt3Ckt_Value(TAIB_ac_B.Merge_om);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTAIB_e_5VAux1_PassFail' */

    /* SignalConversion generated from: '<S3>/VeTAIB_e_AirCdngPSnsrSTB_PassFail' incorporates:
     *  SignalConversion generated from: '<S3>/VeTAIB_e_AirCdngPSnsrSTG_PassFail'
     */
#if Rte_SysCon_Variant_TAIB_HRPS_Presence

    /* Outport: '<Root>/VeTAIB_e_FaultSts_AC_RefrigPresSnsrAHi' incorporates:
     *  Merge: '<S58>/Merge'
     */
    (void)Rte_Write_VeTAIB_e_FaultSts_AC_RefrigPresSnsrAHi_Value
        (TAIB_ac_B.Merge_c);

    /* Outport: '<Root>/VeTAIB_e_FaultSts_AC_RefrigPresSnsrALo' incorporates:
     *  Merge: '<S78>/Merge'
     */
    (void)Rte_Write_VeTAIB_e_FaultSts_AC_RefrigPresSnsrALo_Value
        (TAIB_ac_B.Merge_l);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTAIB_e_AirCdngPSnsrSTB_PassFail' */

    /* SignalConversion generated from: '<S3>/VeTAIB_e_OEXVInTSnsrSTB_PassFail' incorporates:
     *  SignalConversion generated from: '<S3>/VeTAIB_e_OEXVInTSnsrSTG_PassFail'
     */
#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

    /* Outport: '<Root>/VeTAIB_e_FaultSts_AC_RefrigTempSnsr5CktShotoBat' incorporates:
     *  Merge: '<S203>/Merge'
     */
    (void)Rte_Write_VeTAIB_e_FaultSts_AC_RefrigTempSnsr5CktShotoBat_Value
        (TAIB_ac_B.Merge_h);

    /* Outport: '<Root>/VeTAIB_e_FaultSts_AC_RefrigTempSnsr5CktShotoGro' incorporates:
     *  Merge: '<S223>/Merge'
     */
    (void)Rte_Write_VeTAIB_e_FaultSts_AC_RefrigTempSnsr5CktShotoGro_Value
        (TAIB_ac_B.Merge_b);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTAIB_e_OEXVInTSnsrSTB_PassFail' */

    /* SignalConversion generated from: '<S3>/VeDIOR_h_RadiatorFanFb_PWM_Inp_VeDIOR_t_PwmInp_PW' incorporates:
     *  SignalConversion generated from: '<S3>/VeTAIB_e_RadFanFdbkErrM0_PassFail'
     *  SignalConversion generated from: '<S3>/VeTAIB_e_RadFanFdbkErrM1_PassFail'
     *  SignalConversion generated from: '<S3>/VeTAIB_e_RadFanFdbkErrM2_PassFail'
     *  SignalConversion generated from: '<S3>/VeDIOR_h_RadiatorFanFb_PWM_Inp_VeDIOR_Pct_PwmInp_DC'
     *  SignalConversion generated from: '<S3>/VeDIOR_h_RadiatorFanFb_PWM_Inp_VeDIOR_b_PwmInp_TiOutSts'
     *  SignalConversion generated from: '<S3>/VeDIOR_h_RadiatorFanFb_PWM_Inp_VeDIOR_t_PwmInp_Prd'
     *  SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_RadFanDiagErrM0'
     *  SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_RadFanDiagErrM1'
     *  SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_RadFanDiagErrM2'
     */
#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    /* Outputs for Atomic SubSystem: '<S3>/RadFanFdbk' */
    /* SignalConversion generated from: '<S3>/VeDIOR_h_RadiatorFanFb_PWM_Inp_VeDIOR_t_PwmInp_PW' incorporates:
     *  Inport: '<Root>/VeDIOR_h_RadiatorFanFb_PWM_Inp_VeDIOR_t_PwmInp_PW'
     */
    (void)Rte_Read_VeDIOR_h_RadiatorFanFb_PWM_Inp_VeDIOR_t_PwmInp_PW
        (&rtb_TmpSignalConversionAtVeDIOR_h_Radiat);

    /* SignalConversion generated from: '<S3>/VeDIOR_h_RadiatorFanFb_PWM_Inp_VeDIOR_t_PwmInp_Prd' incorporates:
     *  Inport: '<Root>/VeDIOR_h_RadiatorFanFb_PWM_Inp_VeDIOR_t_PwmInp_Prd'
     */
    (void)Rte_Read_VeDIOR_h_RadiatorFanFb_PWM_Inp_VeDIOR_t_PwmInp_Prd
        (&rtb_TmpSignalConversionAtVeDIOR_h_Radi_l);

    /* SignalConversion generated from: '<S3>/VeDIOR_h_RadiatorFanFb_PWM_Inp_VeDIOR_Pct_PwmInp_DC' incorporates:
     *  Inport: '<Root>/VeDIOR_h_RadiatorFanFb_PWM_Inp_VeDIOR_Pct_PwmInp_DC'
     */
    (void)Rte_Read_VeDIOR_h_RadiatorFanFb_PWM_Inp_VeDIOR_Pct_PwmInp_DC
        (&rtb_TmpSignalConversionAtVeDIOR_h_Radi_p);

    /* SignalConversion generated from: '<S3>/VeDIOR_h_RadiatorFanFb_PWM_Inp_VeDIOR_b_PwmInp_TiOutSts' incorporates:
     *  Inport: '<Root>/VeDIOR_h_RadiatorFanFb_PWM_Inp_VeDIOR_b_PwmInp_TiOutSts'
     */
    (void)Rte_Read_VeDIOR_h_RadiatorFanFb_PWM_Inp_VeDIOR_b_PwmInp_TiOutSts
        (&rtb_TmpSignalConversionAtVeDIOR_h_Radi_j);

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_RadFanDiagErrM0' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RadFanDiagErrM0'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RadFanDiagErrM0_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_k);

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_RadFanDiagErrM1' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RadFanDiagErrM1'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RadFanDiagErrM1_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_d);

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_RadFanDiagErrM2' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RadFanDiagErrM2'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RadFanDiagErrM2_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_m);

    /* Outputs for Atomic SubSystem: '<S44>/RadFanFdbk' */

    /* RelationalOperator: '<S328>/Relational Operator3' incorporates:
     *  Constant: '<S328>/Constant3'
     *  S-Function (sfix_bitop): '<S328>/Bitwise Operator2'
     */
    rtb_NOT4_c = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Stat_k) & 64U) ==
                  0U);

    /* Outputs for Atomic SubSystem: '<S328>/EdgeFalling1' */
    /* Logic: '<S328>/Logical Operator' incorporates:
     *  Logic: '<S330>/OR1'
     */
    rtb_Logical1_hb = !rtb_NOT4_c;

    /* End of Outputs for SubSystem: '<S328>/EdgeFalling1' */

    /* Logic: '<S328>/Logical1' incorporates:
     *  Constant: '<S325>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S327>/KeTAIB_b_DiagEnblRadFanErrM0'
     *  Constant: '<S328>/Constant1'
     *  Logic: '<S319>/Logical Operator'
     *  Logic: '<S328>/Logical Operator'
     *  Logic: '<S328>/Logical10'
     *  Logic: '<S328>/Logical12'
     *  RelationalOperator: '<S328>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S328>/Bitwise Operator3'
     */
    rtb_RelationalOperator3_l = ((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
        (KeTAIB_b_DiagEnblRadFanErrM0)) && ((!KeTAIB_b_LtchEnblRadFanErrM0) ||
        (((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Stat_k) & 1U) == 0U) ||
         rtb_Logical1_hb)));

    /* Chart: '<S309>/TimeoutLenghtMeasurement' incorporates:
     *  Constant: '<S309>/s'
     *  Constant: '<S311>/KeTAIB_Pct_RadFanCmdOnThr'
     *  Constant: '<S315>/KeTAIB_t_RadFanInvldlowThres'
     *  Inport: '<Root>/VeFSCR_Pct_RadFanCmd'
     */
    /* Gateway: SigMngtAndCnvn/RadFanFdbk/RadFanFdbk/DiagSys/TimeoutLenghtMeasurement */
    /* During: SigMngtAndCnvn/RadFanFdbk/RadFanFdbk/DiagSys/TimeoutLenghtMeasurement */
    if (((uint32)TAIB_ac_DW.is_active_c8_TAIB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/RadFanFdbk/RadFanFdbk/DiagSys/TimeoutLenghtMeasurement */
        TAIB_ac_DW.is_active_c8_TAIB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/RadFanFdbk/RadFanFdbk/DiagSys/TimeoutLenghtMeasurement */
        /* Transition: '<S323>:646' */
        TAIB_ac_DW.is_c8_TAIB_ac = TAIB_ac_IN_NORMAL_STATE;

        /* Entry 'NORMAL_STATE': '<S323>:645' */
        VeTAIB_e_RadFanToutMeasSt = CeTAIB_e_Normal;
        VeTAIB_t_RadFanToutLenght = 0.0F;
        VeTAIB_b_RadFanDiagTrig = false;
    }
    else
    {
        (void)Rte_Read_VeFSCR_Pct_RadFanCmd_Value(&tmpRead_5);
        switch (TAIB_ac_DW.is_c8_TAIB_ac)
        {
          case TAIB_ac_IN_INVALID_STATE:
            /* During 'INVALID_STATE': '<S323>:649' */
            if ((!rtb_TmpSignalConversionAtVeDIOR_h_Radi_j) || (tmpRead_5 <=
                    KeTAIB_Pct_RadFanCmdOnThr))
            {
                /* Transition: '<S323>:650' */
                TAIB_ac_DW.is_c8_TAIB_ac = TAIB_ac_IN_NORMAL_STATE;

                /* Entry 'NORMAL_STATE': '<S323>:645' */
                VeTAIB_e_RadFanToutMeasSt = CeTAIB_e_Normal;
                VeTAIB_t_RadFanToutLenght = 0.0F;
                VeTAIB_b_RadFanDiagTrig = false;
            }
            else
            {
                VeTAIB_e_RadFanToutMeasSt = CeTAIB_e_Invalid;
            }
            break;

          case TAIB_ac_IN_NORMAL_STATE:
            /* During 'NORMAL_STATE': '<S323>:645' */
            if (rtb_TmpSignalConversionAtVeDIOR_h_Radi_j && (tmpRead_5 >
                    KeTAIB_Pct_RadFanCmdOnThr))
            {
                /* Transition: '<S323>:659' */
                TAIB_ac_DW.is_c8_TAIB_ac = TAIB_ac_IN_TIMEOUT_RUNNING_STATE;

                /* Entry 'TIMEOUT_RUNNING_STATE': '<S323>:653' */
                VeTAIB_e_RadFanToutMeasSt = CeTAIB_e_TimeoutRunning;
                VeTAIB_t_RadFanToutLenght = VeTAIB_t_RadFanToutLenght + 0.1F;
            }
            else
            {
                VeTAIB_e_RadFanToutMeasSt = CeTAIB_e_Normal;
                VeTAIB_t_RadFanToutLenght = 0.0F;
                VeTAIB_b_RadFanDiagTrig = false;
            }
            break;

          case TAIB_ac_IN_TIMEOUT_END_STATE:
            /* During 'TIMEOUT_END_STATE': '<S323>:642' */
            /* Transition: '<S323>:677' */
            TAIB_ac_DW.is_c8_TAIB_ac = TAIB_ac_IN_NORMAL_STATE;

            /* Entry 'NORMAL_STATE': '<S323>:645' */
            VeTAIB_e_RadFanToutMeasSt = CeTAIB_e_Normal;
            VeTAIB_t_RadFanToutLenght = 0.0F;
            VeTAIB_b_RadFanDiagTrig = false;
            break;

          default:
            /* During 'TIMEOUT_RUNNING_STATE': '<S323>:653' */
            if (tmpRead_5 <= KeTAIB_Pct_RadFanCmdOnThr)
            {
                /* Transition: '<S323>:660' */
                TAIB_ac_DW.is_c8_TAIB_ac = TAIB_ac_IN_NORMAL_STATE;

                /* Entry 'NORMAL_STATE': '<S323>:645' */
                VeTAIB_e_RadFanToutMeasSt = CeTAIB_e_Normal;
                VeTAIB_t_RadFanToutLenght = 0.0F;
                VeTAIB_b_RadFanDiagTrig = false;
            }
            else if (!rtb_TmpSignalConversionAtVeDIOR_h_Radi_j)
            {
                /* Transition: '<S323>:663' */
                TAIB_ac_DW.is_c8_TAIB_ac = TAIB_ac_IN_TIMEOUT_END_STATE;

                /* Entry 'TIMEOUT_END_STATE': '<S323>:642' */
                VeTAIB_e_RadFanToutMeasSt = CeTAIB_e_TimeoutEnd;
                VeTAIB_b_RadFanDiagTrig = true;
            }
            else if (VeTAIB_t_RadFanToutLenght > KeTAIB_t_RadFanInvldlowThres)
            {
                /* Transition: '<S323>:656' */
                TAIB_ac_DW.is_c8_TAIB_ac = TAIB_ac_IN_INVALID_STATE;

                /* Entry 'INVALID_STATE': '<S323>:649' */
                VeTAIB_e_RadFanToutMeasSt = CeTAIB_e_Invalid;
            }
            else
            {
                VeTAIB_e_RadFanToutMeasSt = CeTAIB_e_TimeoutRunning;
                VeTAIB_t_RadFanToutLenght = VeTAIB_t_RadFanToutLenght + 0.1F;
            }
            break;
        }
    }

    /* End of Chart: '<S309>/TimeoutLenghtMeasurement' */

    /* Chart: '<S309>/MalfunctioningDetection' incorporates:
     *  Constant: '<S309>/s'
     *  Constant: '<S312>/KeTAIB_t_RadFanErrM0Thres'
     *  Constant: '<S313>/KeTAIB_t_RadFanErrM1Thres'
     *  Constant: '<S314>/KeTAIB_t_RadFanErrM2Thres'
     *  Constant: '<S316>/KeTAIB_t_RadFanRelHighThres'
     *  Constant: '<S317>/KeTAIB_t_RadFanTolerance'
     */
    /* Gateway: SigMngtAndCnvn/RadFanFdbk/RadFanFdbk/DiagSys/MalfunctioningDetection */
    /* During: SigMngtAndCnvn/RadFanFdbk/RadFanFdbk/DiagSys/MalfunctioningDetection */
    if (((uint32)TAIB_ac_DW.is_active_c7_TAIB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/RadFanFdbk/RadFanFdbk/DiagSys/MalfunctioningDetection */
        TAIB_ac_DW.is_active_c7_TAIB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/RadFanFdbk/RadFanFdbk/DiagSys/MalfunctioningDetection */
        /* Transition: '<S318>:643' */
        TAIB_ac_DW.is_c7_TAIB_ac = TAIB_ac_IN_NOERR_STATE;

        /* Entry 'NOERR_STATE': '<S318>:642' */
        VeTAIB_e_RadFanFltDtctnSt = CeTAIB_e_NoErr;
        VeTAIB_b_RadFanFltCritM0 = false;
        VeTAIB_b_RadFanFltCritM1 = false;
        VeTAIB_b_RadFanFltCritM2 = false;
        VeTAIB_t_RadFanDiagIntervLenght = 0.0F;
    }
    else
    {
        switch (TAIB_ac_DW.is_c7_TAIB_ac)
        {
          case TAIB_ac_IN_ERR_M0:
            /* During 'ERR_M0': '<S318>:644' */
            tmp = KeTAIB_t_RadFanErrM0Thres + KeTAIB_t_RadFanTolerance;
            tmpRead_5 = KeTAIB_t_RadFanErrM0Thres - KeTAIB_t_RadFanTolerance;
            if ((VeTAIB_b_RadFanDiagTrig) && ((VeTAIB_t_RadFanToutLenght < tmp) &&
                 (VeTAIB_t_RadFanToutLenght > tmpRead_5)))
            {
                /* Transition: '<S318>:672' */
                TAIB_ac_DW.is_c7_TAIB_ac = TAIB_ac_IN_ERR_M0_FollowUp;

                /* Entry 'ERR_M0_FollowUp': '<S318>:665' */
                VeTAIB_e_RadFanFltDtctnSt = CeTAIB_e_ErrM0FU;
                VeTAIB_t_RadFanDiagIntervLenght = 0.0F;
            }
            else if ((VeTAIB_t_RadFanDiagIntervLenght >
                      ((KeTAIB_t_RadFanRelHighThres + KeTAIB_t_RadFanErrM0Thres)
                       + KeTAIB_t_RadFanTolerance)) || ((VeTAIB_b_RadFanDiagTrig)
                      && ((VeTAIB_t_RadFanToutLenght > tmp) ||
                          (VeTAIB_t_RadFanToutLenght < tmpRead_5))))
            {
                /* Transition: '<S318>:647' */
                TAIB_ac_DW.is_c7_TAIB_ac = TAIB_ac_IN_NOERR_STATE;

                /* Entry 'NOERR_STATE': '<S318>:642' */
                VeTAIB_e_RadFanFltDtctnSt = CeTAIB_e_NoErr;
                VeTAIB_b_RadFanFltCritM0 = false;
                VeTAIB_b_RadFanFltCritM1 = false;
                VeTAIB_b_RadFanFltCritM2 = false;
                VeTAIB_t_RadFanDiagIntervLenght = 0.0F;
            }
            else
            {
                VeTAIB_e_RadFanFltDtctnSt = CeTAIB_e_ErrM0;
                VeTAIB_b_RadFanFltCritM0 = true;
                VeTAIB_t_RadFanDiagIntervLenght =
                    VeTAIB_t_RadFanDiagIntervLenght + 0.1F;
            }
            break;

          case TAIB_ac_IN_ERR_M0_FollowUp:
            /* During 'ERR_M0_FollowUp': '<S318>:665' */
            /* Transition: '<S318>:668' */
            TAIB_ac_DW.is_c7_TAIB_ac = TAIB_ac_IN_ERR_M0;

            /* Entry 'ERR_M0': '<S318>:644' */
            VeTAIB_e_RadFanFltDtctnSt = CeTAIB_e_ErrM0;
            VeTAIB_b_RadFanFltCritM0 = true;
            VeTAIB_t_RadFanDiagIntervLenght = VeTAIB_t_RadFanDiagIntervLenght +
                0.1F;
            break;

          case TAIB_ac_IN_ERR_M1:
            /* During 'ERR_M1': '<S318>:675' */
            tmp = KeTAIB_t_RadFanErrM1Thres + KeTAIB_t_RadFanTolerance;
            tmpRead_5 = KeTAIB_t_RadFanErrM1Thres - KeTAIB_t_RadFanTolerance;
            if ((VeTAIB_b_RadFanDiagTrig) && ((VeTAIB_t_RadFanToutLenght < tmp) &&
                 (VeTAIB_t_RadFanToutLenght > tmpRead_5)))
            {
                /* Transition: '<S318>:676' */
                TAIB_ac_DW.is_c7_TAIB_ac = TAIB_ac_IN_ERR_M1_FollowUp;

                /* Entry 'ERR_M1_FollowUp': '<S318>:678' */
                VeTAIB_e_RadFanFltDtctnSt = CeTAIB_e_ErrM1FU;
                VeTAIB_t_RadFanDiagIntervLenght = 0.0F;
            }
            else if ((VeTAIB_t_RadFanDiagIntervLenght >
                      ((KeTAIB_t_RadFanRelHighThres + KeTAIB_t_RadFanErrM1Thres)
                       + KeTAIB_t_RadFanTolerance)) || ((VeTAIB_b_RadFanDiagTrig)
                      && ((VeTAIB_t_RadFanToutLenght > tmp) ||
                          (VeTAIB_t_RadFanToutLenght < tmpRead_5))))
            {
                /* Transition: '<S318>:697' */
                TAIB_ac_DW.is_c7_TAIB_ac = TAIB_ac_IN_NOERR_STATE;

                /* Entry 'NOERR_STATE': '<S318>:642' */
                VeTAIB_e_RadFanFltDtctnSt = CeTAIB_e_NoErr;
                VeTAIB_b_RadFanFltCritM0 = false;
                VeTAIB_b_RadFanFltCritM1 = false;
                VeTAIB_b_RadFanFltCritM2 = false;
                VeTAIB_t_RadFanDiagIntervLenght = 0.0F;
            }
            else
            {
                VeTAIB_e_RadFanFltDtctnSt = CeTAIB_e_ErrM1;
                VeTAIB_b_RadFanFltCritM1 = true;
                VeTAIB_t_RadFanDiagIntervLenght =
                    VeTAIB_t_RadFanDiagIntervLenght + 0.1F;
            }
            break;

          case TAIB_ac_IN_ERR_M1_FollowUp:
            /* During 'ERR_M1_FollowUp': '<S318>:678' */
            /* Transition: '<S318>:677' */
            TAIB_ac_DW.is_c7_TAIB_ac = TAIB_ac_IN_ERR_M1;

            /* Entry 'ERR_M1': '<S318>:675' */
            VeTAIB_e_RadFanFltDtctnSt = CeTAIB_e_ErrM1;
            VeTAIB_b_RadFanFltCritM1 = true;
            VeTAIB_t_RadFanDiagIntervLenght = VeTAIB_t_RadFanDiagIntervLenght +
                0.1F;
            break;

          case TAIB_ac_IN_ERR_M2:
            /* During 'ERR_M2': '<S318>:683' */
            tmp = KeTAIB_t_RadFanErrM2Thres + KeTAIB_t_RadFanTolerance;
            tmpRead_5 = KeTAIB_t_RadFanErrM2Thres - KeTAIB_t_RadFanTolerance;
            if ((VeTAIB_b_RadFanDiagTrig) && ((VeTAIB_t_RadFanToutLenght < tmp) &&
                 (VeTAIB_t_RadFanToutLenght > tmpRead_5)))
            {
                /* Transition: '<S318>:684' */
                TAIB_ac_DW.is_c7_TAIB_ac = TAIB_ac_IN_ERR_M2_FollowUp;

                /* Entry 'ERR_M2_FollowUp': '<S318>:686' */
                VeTAIB_e_RadFanFltDtctnSt = CeTAIB_e_ErrM2FU;
                VeTAIB_t_RadFanDiagIntervLenght = 0.0F;
            }
            else if ((VeTAIB_t_RadFanDiagIntervLenght >
                      ((KeTAIB_t_RadFanRelHighThres + KeTAIB_t_RadFanErrM2Thres)
                       + KeTAIB_t_RadFanTolerance)) || ((VeTAIB_b_RadFanDiagTrig)
                      && ((VeTAIB_t_RadFanToutLenght > tmp) ||
                          (VeTAIB_t_RadFanToutLenght < tmpRead_5))))
            {
                /* Transition: '<S318>:701' */
                TAIB_ac_DW.is_c7_TAIB_ac = TAIB_ac_IN_NOERR_STATE;

                /* Entry 'NOERR_STATE': '<S318>:642' */
                VeTAIB_e_RadFanFltDtctnSt = CeTAIB_e_NoErr;
                VeTAIB_b_RadFanFltCritM0 = false;
                VeTAIB_b_RadFanFltCritM1 = false;
                VeTAIB_b_RadFanFltCritM2 = false;
                VeTAIB_t_RadFanDiagIntervLenght = 0.0F;
            }
            else
            {
                VeTAIB_e_RadFanFltDtctnSt = CeTAIB_e_ErrM2;
                VeTAIB_b_RadFanFltCritM2 = true;
                VeTAIB_t_RadFanDiagIntervLenght =
                    VeTAIB_t_RadFanDiagIntervLenght + 0.1F;
            }
            break;

          case TAIB_ac_IN_ERR_M2_FollowUp:
            /* During 'ERR_M2_FollowUp': '<S318>:686' */
            /* Transition: '<S318>:685' */
            TAIB_ac_DW.is_c7_TAIB_ac = TAIB_ac_IN_ERR_M2;

            /* Entry 'ERR_M2': '<S318>:683' */
            VeTAIB_e_RadFanFltDtctnSt = CeTAIB_e_ErrM2;
            VeTAIB_b_RadFanFltCritM2 = true;
            VeTAIB_t_RadFanDiagIntervLenght = VeTAIB_t_RadFanDiagIntervLenght +
                0.1F;
            break;

          default:
            /* During 'NOERR_STATE': '<S318>:642' */
            if ((VeTAIB_b_RadFanDiagTrig) && ((VeTAIB_t_RadFanToutLenght <
                    (KeTAIB_t_RadFanErrM0Thres + KeTAIB_t_RadFanTolerance)) &&
                    (VeTAIB_t_RadFanToutLenght > (KeTAIB_t_RadFanErrM0Thres -
                    KeTAIB_t_RadFanTolerance))))
            {
                /* Transition: '<S318>:646' */
                TAIB_ac_DW.is_c7_TAIB_ac = TAIB_ac_IN_ERR_M0;

                /* Entry 'ERR_M0': '<S318>:644' */
                VeTAIB_e_RadFanFltDtctnSt = CeTAIB_e_ErrM0;
                VeTAIB_b_RadFanFltCritM0 = true;
                VeTAIB_t_RadFanDiagIntervLenght =
                    VeTAIB_t_RadFanDiagIntervLenght + 0.1F;
            }
            else if ((VeTAIB_b_RadFanDiagTrig) && ((VeTAIB_t_RadFanToutLenght <
                       (KeTAIB_t_RadFanErrM1Thres + KeTAIB_t_RadFanTolerance)) &&
                      (VeTAIB_t_RadFanToutLenght > (KeTAIB_t_RadFanErrM1Thres -
                        KeTAIB_t_RadFanTolerance))))
            {
                /* Transition: '<S318>:698' */
                TAIB_ac_DW.is_c7_TAIB_ac = TAIB_ac_IN_ERR_M1;

                /* Entry 'ERR_M1': '<S318>:675' */
                VeTAIB_e_RadFanFltDtctnSt = CeTAIB_e_ErrM1;
                VeTAIB_b_RadFanFltCritM1 = true;
                VeTAIB_t_RadFanDiagIntervLenght =
                    VeTAIB_t_RadFanDiagIntervLenght + 0.1F;
            }
            else if ((VeTAIB_b_RadFanDiagTrig) && ((VeTAIB_t_RadFanToutLenght <
                       (KeTAIB_t_RadFanErrM2Thres + KeTAIB_t_RadFanTolerance)) &&
                      (VeTAIB_t_RadFanToutLenght > (KeTAIB_t_RadFanErrM2Thres -
                        KeTAIB_t_RadFanTolerance))))
            {
                /* Transition: '<S318>:699' */
                TAIB_ac_DW.is_c7_TAIB_ac = TAIB_ac_IN_ERR_M2;

                /* Entry 'ERR_M2': '<S318>:683' */
                VeTAIB_e_RadFanFltDtctnSt = CeTAIB_e_ErrM2;
                VeTAIB_b_RadFanFltCritM2 = true;
                VeTAIB_t_RadFanDiagIntervLenght =
                    VeTAIB_t_RadFanDiagIntervLenght + 0.1F;
            }
            else
            {
                VeTAIB_e_RadFanFltDtctnSt = CeTAIB_e_NoErr;
                VeTAIB_b_RadFanFltCritM0 = false;
                VeTAIB_b_RadFanFltCritM1 = false;
                VeTAIB_b_RadFanFltCritM2 = false;
                VeTAIB_t_RadFanDiagIntervLenght = 0.0F;
            }
            break;
        }
    }

    /* End of Chart: '<S309>/MalfunctioningDetection' */

    /* Logic: '<S322>/NOT4' */
    rtb_TmpSignalConversionAtVeDFIR_b_DsblDi =
        (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
         rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outputs for Atomic SubSystem: '<S328>/EdgeFalling1' */
    /* Logic: '<S330>/AND' incorporates:
     *  UnitDelay: '<S330>/Unit Delay'
     */
    rtb_Logical1_hb = (rtb_Logical1_hb && (TAIB_ac_DW.UnitDelay_DSTATE_jl));

    /* Update for UnitDelay: '<S330>/Unit Delay' */
    TAIB_ac_DW.UnitDelay_DSTATE_jl = rtb_NOT4_c;

    /* End of Outputs for SubSystem: '<S328>/EdgeFalling1' */

    /* Logic: '<S328>/Logical5' */
    rtb_NOT4_c = (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi || rtb_Logical1_hb);

    /* Outputs for Atomic SubSystem: '<S329>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S329>/Counter Reset  Enabled ' */
    /* Switch: '<S336>/Switch1' incorporates:
     *  Logic: '<S329>/Fail Counter Reset'
     *  Logic: '<S329>/NOT6'
     *  Switch: '<S336>/Switch2'
     *  Switch: '<S337>/Switch1'
     *  UnitDelay: '<S329>/Unit Delay'
     *  UnitDelay: '<S329>/Unit Delay1'
     */
    if ((rtb_NOT4_c || (TAIB_ac_DW.UnitDelay_DSTATE_lh)) ||
            (TAIB_ac_DW.UnitDelay1_DSTATE))
    {
        /* Switch: '<S336>/Switch1' incorporates:
         *  Constant: '<S336>/Constant Value2'
         */
        VeTAIB_Cnt_RadFanFailErrM0 = 0U;

        /* Switch: '<S337>/Switch1' incorporates:
         *  Constant: '<S337>/Constant Value2'
         */
        VeTAIB_Cnt_RadFanSmplErrM0 = 0U;
    }
    else
    {
        if (rtb_RelationalOperator3_l && (VeTAIB_b_RadFanFltCritM0))
        {
            /* Switch: '<S336>/Switch1' incorporates:
             *  Constant: '<S336>/Constant Value1'
             *  Sum: '<S336>/Subtraction'
             *  Switch: '<S336>/Switch2'
             *  UnitDelay: '<S336>/Unit Delay'
             */
            VeTAIB_Cnt_RadFanFailErrM0 = (uint16)(((uint32)
                VeTAIB_Cnt_RadFanFailErrM0) + 1U);
        }

        /* Switch: '<S337>/Switch2' */
        if (rtb_RelationalOperator3_l)
        {
            /* Switch: '<S337>/Switch1' incorporates:
             *  Constant: '<S337>/Constant Value1'
             *  Sum: '<S337>/Subtraction'
             *  Switch: '<S337>/Switch2'
             *  UnitDelay: '<S337>/Unit Delay'
             */
            VeTAIB_Cnt_RadFanSmplErrM0 = (uint16)(((uint32)
                VeTAIB_Cnt_RadFanSmplErrM0) + 1U);
        }

        /* End of Switch: '<S337>/Switch2' */
    }

    /* End of Switch: '<S336>/Switch1' */
    /* End of Outputs for SubSystem: '<S329>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S329>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S329>/Greater Than or Equal ' incorporates:
     *  Constant: '<S324>/KeTAIB_Cnt_FailLimRadFanErrM0'
     */
    TAIB_ac_DW.UnitDelay1_DSTATE = (VeTAIB_Cnt_RadFanFailErrM0 >=
        KeTAIB_Cnt_FailLimRadFanErrM0);

    /* Logic: '<S329>/NOT5' incorporates:
     *  Constant: '<S326>/KeTAIB_Cnt_SmplLimRadFanErrM0'
     *  Logic: '<S329>/NOT3'
     *  RelationalOperator: '<S329>/Less Than  or Equal'
     */
    rtb_RelationalOperator3_l = ((VeTAIB_Cnt_RadFanSmplErrM0 >=
        KeTAIB_Cnt_SmplLimRadFanErrM0) && (!TAIB_ac_DW.UnitDelay1_DSTATE));

    /* Switch: '<S342>/Switch1' incorporates:
     *  Constant: '<S335>/Constant Value'
     *  DataStoreWrite: '<S319>/Data Store Write1'
     *  Switch: '<S341>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TAIB_ac_DW.NeTAIB_Cnt_RadFanErrM0_MFOP = 0U;
    }
    else
    {
        if (rtb_RelationalOperator3_l)
        {
            /* MinMax: '<S335>/Minimum2' incorporates:
             *  DataStoreRead: '<S319>/Data Store Read1'
             *  Switch: '<S341>/Switch1'
             */
            if (VeTAIB_Cnt_RadFanFailErrM0 >
                    TAIB_ac_DW.NeTAIB_Cnt_RadFanErrM0_MFOP)
            {
                /* DataStoreWrite: '<S319>/Data Store Write1' incorporates:
                 *  Switch: '<S341>/Switch1'
                 */
                TAIB_ac_DW.NeTAIB_Cnt_RadFanErrM0_MFOP =
                    VeTAIB_Cnt_RadFanFailErrM0;
            }

            /* End of MinMax: '<S335>/Minimum2' */
        }
    }

    /* End of Switch: '<S342>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S328>/Fail' */
    TAIB_ac_Fail(TAIB_ac_DW.UnitDelay1_DSTATE, &TAIB_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S328>/Fail' */

    /* Outputs for Enabled SubSystem: '<S328>/Init' */
    TAIB_ac_Init_g(rtb_NOT4_c, &TAIB_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S328>/Init' */

    /* Outputs for Enabled SubSystem: '<S328>/Pass' */
    TAIB_ac_Pass(rtb_RelationalOperator3_l, &TAIB_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S328>/Pass' */

    /* RelationalOperator: '<S347>/Relational Operator3' incorporates:
     *  Constant: '<S347>/Constant3'
     *  S-Function (sfix_bitop): '<S347>/Bitwise Operator2'
     */
    rtb_Logical1_hb = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Stat_d) & 64U)
                       == 0U);

    /* Outputs for Atomic SubSystem: '<S347>/EdgeFalling1' */
    /* Logic: '<S347>/Logical Operator' incorporates:
     *  Logic: '<S349>/OR1'
     */
    rtb_LogicalOperator_m = !rtb_Logical1_hb;

    /* End of Outputs for SubSystem: '<S347>/EdgeFalling1' */

    /* Logic: '<S347>/Logical1' incorporates:
     *  Constant: '<S344>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S346>/KeTAIB_b_DiagEnblRadFanErrM1'
     *  Constant: '<S347>/Constant1'
     *  Logic: '<S320>/Logical Operator'
     *  Logic: '<S347>/Logical Operator'
     *  Logic: '<S347>/Logical10'
     *  Logic: '<S347>/Logical12'
     *  RelationalOperator: '<S347>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S347>/Bitwise Operator3'
     */
    rtb_NOT4_c = ((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
                   (KeTAIB_b_DiagEnblRadFanErrM1)) &&
                  ((!KeTAIB_b_LtchEnblRadFanErrM1) || (((((uint32)
                       rtb_TmpSignalConversionAtVeDMAB_y_Stat_d) & 1U) == 0U) ||
                    rtb_LogicalOperator_m)));

    /* Outputs for Atomic SubSystem: '<S347>/EdgeFalling1' */
    /* Logic: '<S349>/AND' incorporates:
     *  UnitDelay: '<S349>/Unit Delay'
     */
    rtb_LogicalOperator_m = (rtb_LogicalOperator_m &&
        (TAIB_ac_DW.UnitDelay_DSTATE_gg));

    /* Update for UnitDelay: '<S349>/Unit Delay' */
    TAIB_ac_DW.UnitDelay_DSTATE_gg = rtb_Logical1_hb;

    /* End of Outputs for SubSystem: '<S347>/EdgeFalling1' */

    /* Logic: '<S347>/Logical5' */
    rtb_Logical1_hb = (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
                       rtb_LogicalOperator_m);

    /* UnitDelay: '<S348>/Unit Delay1' incorporates:
     *  UnitDelay: '<S329>/Unit Delay'
     */
    TAIB_ac_DW.UnitDelay_DSTATE_lh = TAIB_ac_DW.UnitDelay1_DSTATE_e;

    /* Outputs for Atomic SubSystem: '<S348>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S348>/Counter Reset  Enabled ' */
    /* Switch: '<S355>/Switch1' incorporates:
     *  Logic: '<S348>/Fail Counter Reset'
     *  Logic: '<S348>/NOT6'
     *  Switch: '<S355>/Switch2'
     *  Switch: '<S356>/Switch1'
     *  UnitDelay: '<S329>/Unit Delay'
     *  UnitDelay: '<S348>/Unit Delay'
     */
    if ((rtb_Logical1_hb || (TAIB_ac_DW.UnitDelay_DSTATE_j)) ||
            (TAIB_ac_DW.UnitDelay_DSTATE_lh))
    {
        /* Switch: '<S355>/Switch1' incorporates:
         *  Constant: '<S355>/Constant Value2'
         */
        VeTAIB_Cnt_RadFanFailErrM1 = 0U;

        /* Switch: '<S356>/Switch1' incorporates:
         *  Constant: '<S356>/Constant Value2'
         */
        VeTAIB_Cnt_RadFanSmplErrM1 = 0U;
    }
    else
    {
        if (rtb_NOT4_c && (VeTAIB_b_RadFanFltCritM1))
        {
            /* Switch: '<S355>/Switch1' incorporates:
             *  Constant: '<S355>/Constant Value1'
             *  Sum: '<S355>/Subtraction'
             *  Switch: '<S355>/Switch2'
             *  UnitDelay: '<S355>/Unit Delay'
             */
            VeTAIB_Cnt_RadFanFailErrM1 = (uint16)(((uint32)
                VeTAIB_Cnt_RadFanFailErrM1) + 1U);
        }

        /* Switch: '<S356>/Switch2' */
        if (rtb_NOT4_c)
        {
            /* Switch: '<S356>/Switch1' incorporates:
             *  Constant: '<S356>/Constant Value1'
             *  Sum: '<S356>/Subtraction'
             *  Switch: '<S356>/Switch2'
             *  UnitDelay: '<S356>/Unit Delay'
             */
            VeTAIB_Cnt_RadFanSmplErrM1 = (uint16)(((uint32)
                VeTAIB_Cnt_RadFanSmplErrM1) + 1U);
        }

        /* End of Switch: '<S356>/Switch2' */
    }

    /* End of Switch: '<S355>/Switch1' */
    /* End of Outputs for SubSystem: '<S348>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S348>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S348>/Greater Than or Equal ' incorporates:
     *  Constant: '<S343>/KeTAIB_Cnt_FailLimRadFanErrM1'
     */
    TAIB_ac_DW.UnitDelay1_DSTATE_e = (VeTAIB_Cnt_RadFanFailErrM1 >=
        KeTAIB_Cnt_FailLimRadFanErrM1);

    /* Logic: '<S348>/NOT5' incorporates:
     *  Constant: '<S345>/KeTAIB_Cnt_SmplLimRadFanErrM1'
     *  Logic: '<S348>/NOT3'
     *  RelationalOperator: '<S348>/Less Than  or Equal'
     */
    TAIB_ac_DW.UnitDelay_DSTATE_j = ((VeTAIB_Cnt_RadFanSmplErrM1 >=
        KeTAIB_Cnt_SmplLimRadFanErrM1) && (!TAIB_ac_DW.UnitDelay1_DSTATE_e));

    /* Switch: '<S361>/Switch1' incorporates:
     *  Constant: '<S354>/Constant Value'
     *  DataStoreWrite: '<S320>/Data Store Write1'
     *  Switch: '<S360>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TAIB_ac_DW.NeTAIB_Cnt_RadFanErrM1_MFOP = 0U;
    }
    else
    {
        if (TAIB_ac_DW.UnitDelay_DSTATE_j)
        {
            /* MinMax: '<S354>/Minimum2' incorporates:
             *  DataStoreRead: '<S320>/Data Store Read1'
             *  Switch: '<S360>/Switch1'
             */
            if (VeTAIB_Cnt_RadFanFailErrM1 >
                    TAIB_ac_DW.NeTAIB_Cnt_RadFanErrM1_MFOP)
            {
                /* DataStoreWrite: '<S320>/Data Store Write1' incorporates:
                 *  Switch: '<S360>/Switch1'
                 */
                TAIB_ac_DW.NeTAIB_Cnt_RadFanErrM1_MFOP =
                    VeTAIB_Cnt_RadFanFailErrM1;
            }

            /* End of MinMax: '<S354>/Minimum2' */
        }
    }

    /* End of Switch: '<S361>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S347>/Fail' */
    TAIB_ac_Fail(TAIB_ac_DW.UnitDelay1_DSTATE_e, &TAIB_ac_B.Merge_f);

    /* End of Outputs for SubSystem: '<S347>/Fail' */

    /* Outputs for Enabled SubSystem: '<S347>/Init' */
    TAIB_ac_Init_g(rtb_Logical1_hb, &TAIB_ac_B.Merge_f);

    /* End of Outputs for SubSystem: '<S347>/Init' */

    /* Outputs for Enabled SubSystem: '<S347>/Pass' */
    TAIB_ac_Pass(TAIB_ac_DW.UnitDelay_DSTATE_j, &TAIB_ac_B.Merge_f);

    /* End of Outputs for SubSystem: '<S347>/Pass' */

    /* RelationalOperator: '<S366>/Relational Operator3' incorporates:
     *  Constant: '<S366>/Constant3'
     *  S-Function (sfix_bitop): '<S366>/Bitwise Operator2'
     */
    rtb_NOT4_c = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Stat_m) & 64U) ==
                  0U);

    /* Outputs for Atomic SubSystem: '<S366>/EdgeFalling1' */
    /* Logic: '<S366>/Logical Operator' incorporates:
     *  Logic: '<S368>/OR1'
     */
    rtb_Logical1_hb = !rtb_NOT4_c;

    /* End of Outputs for SubSystem: '<S366>/EdgeFalling1' */

    /* Logic: '<S366>/Logical1' incorporates:
     *  Constant: '<S363>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S365>/KeTAIB_b_DiagEnblRadFanErrM2'
     *  Constant: '<S366>/Constant1'
     *  Logic: '<S321>/Logical Operator'
     *  Logic: '<S366>/Logical Operator'
     *  Logic: '<S366>/Logical10'
     *  Logic: '<S366>/Logical12'
     *  RelationalOperator: '<S366>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S366>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
        ((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
          (KeTAIB_b_DiagEnblRadFanErrM2)) && ((!KeTAIB_b_LtchEnblRadFanErrM2) ||
          (((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Stat_m) & 1U) == 0U) ||
           rtb_Logical1_hb)));

    /* Outputs for Atomic SubSystem: '<S366>/EdgeFalling1' */
    /* Logic: '<S368>/AND' incorporates:
     *  UnitDelay: '<S368>/Unit Delay'
     */
    rtb_Logical1_hb = (rtb_Logical1_hb && (TAIB_ac_DW.UnitDelay_DSTATE_nj));

    /* Update for UnitDelay: '<S368>/Unit Delay' */
    TAIB_ac_DW.UnitDelay_DSTATE_nj = rtb_NOT4_c;

    /* End of Outputs for SubSystem: '<S366>/EdgeFalling1' */

    /* Logic: '<S366>/Logical5' */
    rtb_TmpSignalConversionAtVeDFIR_b_DsblDi =
        (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi || rtb_Logical1_hb);

    /* UnitDelay: '<S367>/Unit Delay1' incorporates:
     *  UnitDelay: '<S329>/Unit Delay'
     */
    TAIB_ac_DW.UnitDelay_DSTATE_lh = TAIB_ac_DW.UnitDelay1_DSTATE_o;

    /* Outputs for Atomic SubSystem: '<S367>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S367>/Counter Reset  Enabled ' */
    /* Switch: '<S374>/Switch1' incorporates:
     *  Logic: '<S367>/Fail Counter Reset'
     *  Logic: '<S367>/NOT6'
     *  Switch: '<S374>/Switch2'
     *  Switch: '<S375>/Switch1'
     *  UnitDelay: '<S329>/Unit Delay'
     *  UnitDelay: '<S367>/Unit Delay'
     */
    if ((rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
            (TAIB_ac_DW.UnitDelay_DSTATE_lq)) || (TAIB_ac_DW.UnitDelay_DSTATE_lh))
    {
        /* Switch: '<S374>/Switch1' incorporates:
         *  Constant: '<S374>/Constant Value2'
         */
        VeTAIB_Cnt_RadFanFailErrM2 = 0U;

        /* Switch: '<S375>/Switch1' incorporates:
         *  Constant: '<S375>/Constant Value2'
         */
        VeTAIB_Cnt_RadFanSmplErrM2 = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
                (VeTAIB_b_RadFanFltCritM2))
        {
            /* Switch: '<S374>/Switch1' incorporates:
             *  Constant: '<S374>/Constant Value1'
             *  Sum: '<S374>/Subtraction'
             *  Switch: '<S374>/Switch2'
             *  UnitDelay: '<S374>/Unit Delay'
             */
            VeTAIB_Cnt_RadFanFailErrM2 = (uint16)(((uint32)
                VeTAIB_Cnt_RadFanFailErrM2) + 1U);
        }

        /* Switch: '<S375>/Switch2' */
        if (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)
        {
            /* Switch: '<S375>/Switch1' incorporates:
             *  Constant: '<S375>/Constant Value1'
             *  Sum: '<S375>/Subtraction'
             *  Switch: '<S375>/Switch2'
             *  UnitDelay: '<S375>/Unit Delay'
             */
            VeTAIB_Cnt_RadFanSmplErrM2 = (uint16)(((uint32)
                VeTAIB_Cnt_RadFanSmplErrM2) + 1U);
        }

        /* End of Switch: '<S375>/Switch2' */
    }

    /* End of Switch: '<S374>/Switch1' */
    /* End of Outputs for SubSystem: '<S367>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S367>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S367>/Greater Than or Equal ' incorporates:
     *  Constant: '<S362>/KeTAIB_Cnt_FailLimRadFanErrM2'
     */
    TAIB_ac_DW.UnitDelay1_DSTATE_o = (VeTAIB_Cnt_RadFanFailErrM2 >=
        KeTAIB_Cnt_FailLimRadFanErrM2);

    /* Logic: '<S367>/NOT5' incorporates:
     *  Constant: '<S364>/KeTAIB_Cnt_SmplLimRadFanErrM2'
     *  Logic: '<S367>/NOT3'
     *  RelationalOperator: '<S367>/Less Than  or Equal'
     */
    TAIB_ac_DW.UnitDelay_DSTATE_lq = ((VeTAIB_Cnt_RadFanSmplErrM2 >=
        KeTAIB_Cnt_SmplLimRadFanErrM2) && (!TAIB_ac_DW.UnitDelay1_DSTATE_o));

    /* Switch: '<S380>/Switch1' incorporates:
     *  Constant: '<S373>/Constant Value'
     *  DataStoreWrite: '<S321>/Data Store Write1'
     *  Switch: '<S379>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TAIB_ac_DW.NeTAIB_Cnt_RadFanErrM2_MFOP = 0U;
    }
    else
    {
        if (TAIB_ac_DW.UnitDelay_DSTATE_lq)
        {
            /* MinMax: '<S373>/Minimum2' incorporates:
             *  DataStoreRead: '<S321>/Data Store Read1'
             *  Switch: '<S379>/Switch1'
             */
            if (VeTAIB_Cnt_RadFanFailErrM2 >
                    TAIB_ac_DW.NeTAIB_Cnt_RadFanErrM2_MFOP)
            {
                /* DataStoreWrite: '<S321>/Data Store Write1' incorporates:
                 *  Switch: '<S379>/Switch1'
                 */
                TAIB_ac_DW.NeTAIB_Cnt_RadFanErrM2_MFOP =
                    VeTAIB_Cnt_RadFanFailErrM2;
            }

            /* End of MinMax: '<S373>/Minimum2' */
        }
    }

    /* End of Switch: '<S380>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S366>/Fail' */
    TAIB_ac_Fail(TAIB_ac_DW.UnitDelay1_DSTATE_o, &TAIB_ac_B.Merge_o);

    /* End of Outputs for SubSystem: '<S366>/Fail' */

    /* Outputs for Enabled SubSystem: '<S366>/Init' */
    TAIB_ac_Init_g(rtb_TmpSignalConversionAtVeDFIR_b_DsblDi, &TAIB_ac_B.Merge_o);

    /* End of Outputs for SubSystem: '<S366>/Init' */

    /* Outputs for Enabled SubSystem: '<S366>/Pass' */
    TAIB_ac_Pass(TAIB_ac_DW.UnitDelay_DSTATE_lq, &TAIB_ac_B.Merge_o);

    /* End of Outputs for SubSystem: '<S366>/Pass' */

    /* Outport: '<Root>/VeTAIB_b_RadFan_FA' incorporates:
     *  Constant: '<S331>/Constant'
     *  Constant: '<S350>/Constant'
     *  Constant: '<S369>/Constant'
     *  Logic: '<S309>/Logical Operator'
     *  Merge: '<S328>/Merge'
     *  Merge: '<S347>/Merge'
     *  Merge: '<S366>/Merge'
     *  RelationalOperator: '<S328>/Relational Operator'
     *  RelationalOperator: '<S347>/Relational Operator'
     *  RelationalOperator: '<S366>/Relational Operator'
     */
    (void)Rte_Write_VeTAIB_b_RadFan_FA_Value(((((uint32)TAIB_ac_B.Merge) ==
        CeDFIB_e_Fail) || (((uint32)TAIB_ac_B.Merge_f) == CeDFIB_e_Fail)) ||
        (((uint32)TAIB_ac_B.Merge_o) == CeDFIB_e_Fail));

    /* Switch: '<S392>/Switch' incorporates:
     *  Constant: '<S381>/HeTAIB_b_RadFanStsPolarInvEnb'
     *  Constant: '<S384>/KeTAIB_Pct_RadFanSts_DC_Byp'
     *  Constant: '<S385>/KeTAIB_b_RadFanSts_DC_BypEnbl'
     *  Switch: '<S396>/Switch'
     */
    if (KeTAIB_b_RadFanSts_DC_BypEnbl)
    {
        rtb_TmpSignalConversionAtVeDIOR_h_Radi_p = KeTAIB_Pct_RadFanSts_DC_Byp;
    }
    else
    {
        if (KeTAIB_b_RadFanStsPolarInvEnb)
        {
            /* Switch: '<S396>/Switch' incorporates:
             *  Constant: '<S383>/Constant'
             *  Sum: '<S383>/Add'
             */
            rtb_TmpSignalConversionAtVeDIOR_h_Radi_p = 100.0F -
                rtb_TmpSignalConversionAtVeDIOR_h_Radi_p;
        }
    }

    /* End of Switch: '<S392>/Switch' */

    /* Outport: '<Root>/VeTAIB_Pct_RadFanSts_DC' incorporates:
     *  SignalConversion: '<S310>/Signal Conversion1'
     */
    (void)Rte_Write_VeTAIB_Pct_RadFanSts_DC_Value
        (rtb_TmpSignalConversionAtVeDIOR_h_Radi_p);

    /* Switch: '<S393>/Switch' incorporates:
     *  Constant: '<S387>/KeTAIB_b_RadFanSts_Prd_BypEnbl'
     */
    if (KeTAIB_b_RadFanSts_Prd_BypEnbl)
    {
        /* Outport: '<Root>/VeTAIB_t_RadFanSts_Prd' incorporates:
         *  Constant: '<S391>/KeTAIB_t_RadFanSts_Prd_Byp'
         *  SignalConversion: '<S310>/Signal Conversion3'
         */
        (void)Rte_Write_VeTAIB_t_RadFanSts_Prd_Value(KeTAIB_t_RadFanSts_Prd_Byp);
    }
    else
    {
        /* Outport: '<Root>/VeTAIB_t_RadFanSts_Prd' incorporates:
         *  SignalConversion: '<S310>/Signal Conversion3'
         */
        (void)Rte_Write_VeTAIB_t_RadFanSts_Prd_Value
            (rtb_TmpSignalConversionAtVeDIOR_h_Radi_l);
    }

    /* End of Switch: '<S393>/Switch' */

    /* Switch: '<S394>/Switch' incorporates:
     *  Constant: '<S381>/HeTAIB_b_RadFanStsPolarInvEnb'
     *  Constant: '<S386>/KeTAIB_b_RadFanSts_PW_BypEnbl'
     *  Constant: '<S390>/KeTAIB_t_RadFanSts_PW_Byp'
     *  Switch: '<S397>/Switch'
     */
    if (KeTAIB_b_RadFanSts_PW_BypEnbl)
    {
        rtb_TmpSignalConversionAtVeDIOR_h_Radiat = KeTAIB_t_RadFanSts_PW_Byp;
    }
    else
    {
        if (KeTAIB_b_RadFanStsPolarInvEnb)
        {
            /* Switch: '<S397>/Switch' incorporates:
             *  Sum: '<S383>/Add1'
             */
            rtb_TmpSignalConversionAtVeDIOR_h_Radiat =
                rtb_TmpSignalConversionAtVeDIOR_h_Radi_l -
                rtb_TmpSignalConversionAtVeDIOR_h_Radiat;
        }
    }

    /* End of Switch: '<S394>/Switch' */

    /* Outport: '<Root>/VeTAIB_t_RadFanSts_PW' incorporates:
     *  SignalConversion: '<S310>/Signal Conversion4'
     */
    (void)Rte_Write_VeTAIB_t_RadFanSts_PW_Value
        (rtb_TmpSignalConversionAtVeDIOR_h_Radiat);

    /* Switch: '<S395>/Switch' incorporates:
     *  Constant: '<S389>/KeTAIB_b_RadFanSts_TiOut_BypEnbl'
     */
    if (KeTAIB_b_RadFanSts_TiOut_BypEnbl)
    {
        /* Outport: '<Root>/VeTAIB_b_RadFanSts_TiOutSts' incorporates:
         *  Constant: '<S388>/KeTAIB_b_RadFanSts_TiOut_Byp'
         *  SignalConversion: '<S310>/Signal Conversion5'
         */
        (void)Rte_Write_VeTAIB_b_RadFanSts_TiOutSts_Value
            (KeTAIB_b_RadFanSts_TiOut_Byp);
    }
    else
    {
        /* Outport: '<Root>/VeTAIB_b_RadFanSts_TiOutSts' incorporates:
         *  SignalConversion: '<S310>/Signal Conversion5'
         */
        (void)Rte_Write_VeTAIB_b_RadFanSts_TiOutSts_Value
            (rtb_TmpSignalConversionAtVeDIOR_h_Radi_j);
    }

    /* End of Switch: '<S395>/Switch' */

    /* Update for UnitDelay: '<S329>/Unit Delay' */
    TAIB_ac_DW.UnitDelay_DSTATE_lh = rtb_RelationalOperator3_l;

    /* End of Outputs for SubSystem: '<S44>/RadFanFdbk' */

    /* Outport: '<Root>/VeTAIB_e_FaultSts_RadFanDiagErrM0' incorporates:
     *  Merge: '<S328>/Merge'
     */
    (void)Rte_Write_VeTAIB_e_FaultSts_RadFanDiagErrM0_Value(TAIB_ac_B.Merge);

    /* Outport: '<Root>/VeTAIB_e_FaultSts_RadFanDiagErrM1' incorporates:
     *  Merge: '<S347>/Merge'
     */
    (void)Rte_Write_VeTAIB_e_FaultSts_RadFanDiagErrM1_Value(TAIB_ac_B.Merge_f);

    /* Outport: '<Root>/VeTAIB_e_FaultSts_RadFanDiagErrM2' incorporates:
     *  Merge: '<S366>/Merge'
     */
    (void)Rte_Write_VeTAIB_e_FaultSts_RadFanDiagErrM2_Value(TAIB_ac_B.Merge_o);

    /* End of Outputs for SubSystem: '<S3>/RadFanFdbk' */
#endif

    /* End of SignalConversion generated from: '<S3>/VeDIOR_h_RadiatorFanFb_PWM_Inp_VeDIOR_t_PwmInp_PW' */

    /* SignalConversion generated from: '<S3>/VeTAIB_p_CEXV_OutPresSnsrRaw' */
#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

    /* Outport: '<Root>/VeTAIB_p_CEXV_OutPresSnsrRaw' */
    (void)Rte_Write_VeTAIB_p_CEXV_OutPresSnsrRaw_Value(rtb_Vector_i[0]);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTAIB_p_CEXV_OutPresSnsrRaw' */

    /* SignalConversion generated from: '<S3>/VeTAIB_p_HghRfrgtPresSnsrRaw' */
#if Rte_SysCon_Variant_TAIB_HRPS_Presence

    /* Outport: '<Root>/VeTAIB_p_HghRfrgtPresSnsrRaw' */
    (void)Rte_Write_VeTAIB_p_HghRfrgtPresSnsrRaw_Value(rtb_Vector_e[0]);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTAIB_p_HghRfrgtPresSnsrRaw' */

    /* SignalConversion generated from: '<S3>/VeTAIB_p_OEXV_OutPresSnsrRaw' incorporates:
     *  Inport: '<Root>/VeADCR_U_OexvRpos_VsADCR_e_CnvnRes'
     */
#if Rte_SysCon_Variant_TAIB_OEXVOP_Presence

    /* Outputs for Atomic SubSystem: '<S3>/OutsideExpansValvRefOutPSnsr' */
    /* Gateway: SigMngtAndCnvn/OutsideExpansValvRefOutPSnsr/OutsideExpansValvRefOutPSnsr/SigAcqnAndFilSys/AntiSpkFil */
    /* During: SigMngtAndCnvn/OutsideExpansValvRefOutPSnsr/OutsideExpansValvRefOutPSnsr/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_OexvRpos_VsADCR_e_CnvnRes(&tmpRead_0);

    /* Outputs for Atomic SubSystem: '<S42>/OutsideExpansValvRefOutPSnsr' */
    /* Chart: '<S257>/AntiSpkFil' incorporates:
     *  Constant: '<S275>/KeTAIB_Cnt_OEXV_OutPresSnsrSpikeThd'
     *  Constant: '<S276>/KeTAIB_U_OEXV_OutPresSnsrSpikeThd'
     *  Inport: '<Root>/VeADCR_U_OexvRpos_VsADCR_e_CnvnRes'
     */
    if (((uint32)TAIB_ac_DW.is_active_c1_TAIB_ac) == 0U)
    {
        /* Entry: SigMngtAndCnvn/OutsideExpansValvRefOutPSnsr/OutsideExpansValvRefOutPSnsr/SigAcqnAndFilSys/AntiSpkFil */
        TAIB_ac_DW.is_active_c1_TAIB_ac = 1U;

        /* Entry Internal: SigMngtAndCnvn/OutsideExpansValvRefOutPSnsr/OutsideExpansValvRefOutPSnsr/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S274>:8' */
        TAIB_ac_DW.is_c1_TAIB_ac = TAIB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S274>:37' */
        TAIB_ac_B.InputRaw0_b = tmpRead_0.e_CnvnRes;
        VeTAIB_U_OEXV_OutPresSnsrVoltRaw = tmpRead_0.e_CnvnRes;
    }
    else if (((sint32)TAIB_ac_DW.is_c1_TAIB_ac) == 1)
    {
        /* During 'FILTERING': '<S274>:38' */
        if (TAIB_ac_B.Cnt_h >= ((float32)KeTAIB_Cnt_OEXV_OutPresSnsrSpikeThd))
        {
            /* Transition: '<S274>:40' */
            TAIB_ac_DW.is_c1_TAIB_ac = TAIB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S274>:37' */
            TAIB_ac_B.InputRaw0_b = tmpRead_0.e_CnvnRes;
            VeTAIB_U_OEXV_OutPresSnsrVoltRaw = tmpRead_0.e_CnvnRes;
        }
        else
        {
            TAIB_ac_B.Cnt_h++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S274>:37' */
        tmp = tmpRead_0.e_CnvnRes - TAIB_ac_B.InputRaw0_b;
        if ((tmp > KeTAIB_U_OEXV_OutPresSnsrSpikeThd) || (tmp <
                (-KeTAIB_U_OEXV_OutPresSnsrSpikeThd)))
        {
            /* Transition: '<S274>:39' */
            TAIB_ac_DW.is_c1_TAIB_ac = TAIB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S274>:38' */
            TAIB_ac_B.Cnt_h = 0.0F;
        }
        else
        {
            VeTAIB_U_OEXV_OutPresSnsrVoltRaw = tmpRead_0.e_CnvnRes;
            TAIB_ac_B.InputRaw0_b = tmpRead_0.e_CnvnRes;
        }
    }

    /* End of Chart: '<S257>/AntiSpkFil' */

    /* Switch: '<S280>/Switch' incorporates:
     *  Selector: '<S279>/Selector_R'
     */
    if (TAIB_ac_DW.UnitDelay_DSTATE_hw)
    {
        /* Assignment: '<S281>/Assignment_y' incorporates:
         *  Switch: '<S267>/Switch'
         */
        VeTAIB_U_OEXV_OutPresSnsrVolt = VeTAIB_U_OEXV_OutPresSnsrVoltRaw;
    }
    else
    {
        /* Assignment: '<S281>/Assignment_y' incorporates:
         *  Constant: '<S277>/KeTAIB_k_OEXV_OutPresSnsrFiltGx'
         *  Product: '<S280>/Product'
         *  Selector: '<S279>/Selector_u'
         *  Selector: '<S279>/Selector_x'
         *  Sum: '<S280>/Difference'
         *  Sum: '<S280>/Sum'
         *  Switch: '<S267>/Switch'
         *  Switch: '<S280>/Switch_E'
         */
        VeTAIB_U_OEXV_OutPresSnsrVolt = ((VeTAIB_U_OEXV_OutPresSnsrVoltRaw -
            VeTAIB_U_OEXV_OutPresSnsrVolt) * KeTAIB_k_OEXV_OutPresSnsrFiltGx) +
            VeTAIB_U_OEXV_OutPresSnsrVolt;
    }

    /* End of Switch: '<S280>/Switch' */

    /* Gain: '<S256>/Gain' */
    VeTAIB_U_OEXV_OutPresSnsrVoltXChartC[0] = VeTAIB_U_OEXV_OutPresSnsrVoltRaw;
    VeTAIB_U_OEXV_OutPresSnsrVoltXChartC[1] = VeTAIB_U_OEXV_OutPresSnsrVolt;

    /* Lookup_n-D: '<S266>/Vector' incorporates:
     *  Gain: '<S256>/Gain'
     */
    for (iU = 0; iU < 2; iU++)
    {
        rtb_Vector_e[iU] = look1_iflf_binlca_19a
            (VeTAIB_U_OEXV_OutPresSnsrVoltXChartC[(iU)], ((const float32 *)
              &(KxTAIB_U_OEXV_OutPresSnsrChartc[0])), ((const float32 *)
              &(KtTAIB_p_OEXV_OutPresSnsrChartc[0])), 23U);
    }

    /* End of Lookup_n-D: '<S266>/Vector' */

    /* Switch: '<S269>/Switch' incorporates:
     *  Constant: '<S262>/KeTAIB_U_STBCktHiFltLim_OEXV_OutPSnsr'
     *  Constant: '<S264>/KeTAIB_U_STGCktLowFltLim_OEXV_OutPSnsr'
     *  Logic: '<S255>/Logical Operator'
     *  Logic: '<S256>/Logical Operator'
     *  RelationalOperator: '<S258>/Relational Operator3'
     *  RelationalOperator: '<S259>/Relational Operator1'
     */
    if (((VeTAIB_U_OEXV_OutPresSnsrVoltRaw >=
            KeTAIB_U_STGCktLowFltLim_OEXV_OutPSnsr) &&
            (VeTAIB_U_OEXV_OutPresSnsrVoltRaw <=
             KeTAIB_U_STBCktHiFltLim_OEXV_OutPSnsr)) &&
            (!rtb_TmpSignalConversionAtVeADFB_b_A2DFau))
    {
        /* Switch: '<S269>/Switch' */
        TAIB_ac_DW.VeTAIB_p_OEXV_OutPresSnsrInit_DSTATE = rtb_Vector_e[1];
    }

    /* End of Switch: '<S269>/Switch' */

    /* Switch: '<S267>/Switch' incorporates:
     *  Constant: '<S270>/KeTAIB_b_OEXV_OutPresSnsrBypEnbl'
     *  Constant: '<S272>/KeTAIB_b_OEXV_OutPresRcvryEnbl'
     *  Logic: '<S268>/Logical Operator'
     *  Switch: '<S268>/Switch'
     */
    if (KeTAIB_b_OEXV_OutPresSnsrBypEnbl)
    {
        /* Outport: '<Root>/VeTAIB_p_OEXV_OutPresSnsr' incorporates:
         *  Constant: '<S271>/KeTAIB_p_OEXV_OutPresSnsrByp'
         *  SignalConversion: '<S254>/Signal Conversion'
         */
        (void)Rte_Write_VeTAIB_p_OEXV_OutPresSnsr_Value
            (KeTAIB_p_OEXV_OutPresSnsrByp);
    }
    else if ((KeTAIB_b_OEXV_OutPresRcvryEnbl) &&
             rtb_TmpSignalConversionAtVeADFB_b_A2DFau)
    {
        /* Outport: '<Root>/VeTAIB_p_OEXV_OutPresSnsr' incorporates:
         *  Constant: '<S273>/KeTAIB_p_OEXV_OutPresRcvry'
         *  SignalConversion: '<S254>/Signal Conversion'
         *  Switch: '<S268>/Switch'
         */
        (void)Rte_Write_VeTAIB_p_OEXV_OutPresSnsr_Value
            (KeTAIB_p_OEXV_OutPresRcvry);
    }
    else
    {
        /* Outport: '<Root>/VeTAIB_p_OEXV_OutPresSnsr' incorporates:
         *  SignalConversion: '<S254>/Signal Conversion'
         *  Switch: '<S268>/Switch'
         */
        (void)Rte_Write_VeTAIB_p_OEXV_OutPresSnsr_Value
            (TAIB_ac_DW.VeTAIB_p_OEXV_OutPresSnsrInit_DSTATE);
    }

    /* End of Switch: '<S267>/Switch' */

    /* Outport: '<Root>/VeTAIB_b_OEXV_OutPresSnsr_FA' incorporates:
     *  SignalConversion: '<S254>/Signal Conversion1'
     */
    (void)Rte_Write_VeTAIB_b_OEXV_OutPresSnsr_FA_Value
        (rtb_TmpSignalConversionAtVeADFB_b_A2DFau);

    /* End of Outputs for SubSystem: '<S42>/OutsideExpansValvRefOutPSnsr' */

    /* Outport: '<Root>/VeTAIB_p_OEXV_OutPresSnsrRaw' */
    (void)Rte_Write_VeTAIB_p_OEXV_OutPresSnsrRaw_Value(rtb_Vector_e[0]);

    /* End of Outputs for SubSystem: '<S3>/OutsideExpansValvRefOutPSnsr' */
#endif

    /* End of SignalConversion generated from: '<S3>/VeTAIB_p_OEXV_OutPresSnsrRaw' */

    /* Update for UnitDelay: '<S3>/Unit Delay' incorporates:
     *  Constant: '<S3>/Constant3'
     */
#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence || Rte_SysCon_Variant_TAIB_CEXVOT_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_OEXVOP_Presence || Rte_SysCon_Variant_TAIB_OEXVOT_Presence

    TAIB_ac_DW.UnitDelay_DSTATE_hw = false;

#endif

    /* End of Update for UnitDelay: '<S3>/Unit Delay' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, TAIB_CODE) TAIB_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/ADIB_PwrOff'
     */
    /* Outport: '<Root>/NeTAIB_Cnt_HghRfrgtPSnsrSTG_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_BCIMInternal_MFOP'
     */
    (void)
        Rte_Write_NeTAIB_Cnt_HghRfrgtPSnsrSTG_MFOP_NeTAIB_Cnt_HghRfrgtPSnsrSTG_MFOP
        (TAIB_ac_DW.NeTAIB_Cnt_HghRfrgtPSnsrSTG_MFOP);

    /* Outport: '<Root>/NeTAIB_Cnt_HghRfrgtPSnsrSTB_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_BCIMInternal_MSOF'
     */
    (void)
        Rte_Write_NeTAIB_Cnt_HghRfrgtPSnsrSTB_MFOP_NeTAIB_Cnt_HghRfrgtPSnsrSTB_MFOP
        (TAIB_ac_DW.NeTAIB_Cnt_HghRfrgtPSnsrSTB_MFOP);

    /* Outport: '<Root>/NeTAIB_Cnt_OEXVInTSnsrSTG_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_CPIMInternal_MFOP'
     */
    (void)
        Rte_Write_NeTAIB_Cnt_OEXVInTSnsrSTG_MFOP_NeTAIB_Cnt_OEXVInTSnsrSTG_MFOP
        (TAIB_ac_DW.NeTAIB_Cnt_OEXVInTSnsrSTG_MFOP);

    /* Outport: '<Root>/NeTAIB_Cnt_OEXVInTSnsrSTB_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_CPIMInternal_MSOF'
     */
    (void)
        Rte_Write_NeTAIB_Cnt_OEXVInTSnsrSTB_MFOP_NeTAIB_Cnt_OEXVInTSnsrSTB_MFOP
        (TAIB_ac_DW.NeTAIB_Cnt_OEXVInTSnsrSTB_MFOP);

    /* Outport: '<Root>/NeTAIB_Cnt_RadFanErrM0_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_ChgPrtLckFailHMFOP'
     */
    (void)Rte_Write_NeTAIB_Cnt_RadFanErrM0_MFOP_NeTAIB_Cnt_RadFanErrM0_MFOP
        (TAIB_ac_DW.NeTAIB_Cnt_RadFanErrM0_MFOP);

    /* Outport: '<Root>/NeTAIB_Cnt_RadFanErrM1_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_ChgPrtLckFailHMSOF'
     */
    (void)Rte_Write_NeTAIB_Cnt_RadFanErrM1_MFOP_NeTAIB_Cnt_RadFanErrM1_MFOP
        (TAIB_ac_DW.NeTAIB_Cnt_RadFanErrM1_MFOP);

    /* Outport: '<Root>/NeTAIB_Cnt_RadFanErrM2_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_ChgPrtLckFailHMFOP1'
     */
    (void)Rte_Write_NeTAIB_Cnt_RadFanErrM2_MFOP_NeTAIB_Cnt_RadFanErrM2_MFOP
        (TAIB_ac_DW.NeTAIB_Cnt_RadFanErrM2_MFOP);

    /* Outport: '<Root>/NeTAIB_Cnt_5VAux1_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S1>/NeCDMR_Cnt_ChgPrtLckFailHMSOF1'
     */
    (void)Rte_Write_NeTAIB_Cnt_5VAux1_MFOP_NeTAIB_Cnt_5VAux1_MFOP
        (TAIB_ac_DW.NeTAIB_Cnt_5VAux1_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Model initialize function */
FUNC(void, TAIB_CODE) TAIB_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/SigMngtAndCnvn'
     */
    /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence || Rte_SysCon_Variant_TAIB_CEXVOT_Presence || Rte_SysCon_Variant_TAIB_HRPS_Presence || Rte_SysCon_Variant_TAIB_OEXVIT_Presence || Rte_SysCon_Variant_TAIB_OEXVOP_Presence || Rte_SysCon_Variant_TAIB_OEXVOT_Presence

    TAIB_ac_DW.UnitDelay_DSTATE_hw = true;

#endif

    /* End of InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
#if Rte_SysCon_Variant_TAIB_HRPS_Presence
#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence
#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence
#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Outputs for Atomic SubSystem: '<Root>/Init' */
#if Rte_SysCon_Variant_TAIB_HRPS_Presence

    /* Outputs for Atomic SubSystem: '<S2>/AirCdngPSnsr_Init' */
    /* Outputs for Atomic SubSystem: '<S5>/AirCdngPSnsr_Init' */
    /* DataStoreWrite: '<S14>/NeCDMR_Cnt_BCIMInternal_MFOP1' incorporates:
     *  Inport: '<Root>/NeTAIB_Cnt_HghRfrgtPSnsrSTB_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeTAIB_Cnt_HghRfrgtPSnsrSTB_MFOP_Rx_NeTAIB_Cnt_HghRfrgtPSnsrSTB_MFOP
        (&TAIB_ac_DW.NeTAIB_Cnt_HghRfrgtPSnsrSTB_MFOP);

    /* DataStoreWrite: '<S14>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NeTAIB_Cnt_HghRfrgtPSnsrSTG_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeTAIB_Cnt_HghRfrgtPSnsrSTG_MFOP_Rx_NeTAIB_Cnt_HghRfrgtPSnsrSTG_MFOP
        (&TAIB_ac_DW.NeTAIB_Cnt_HghRfrgtPSnsrSTG_MFOP);

    /* StateWriter: '<S14>/State Writer' incorporates:
     *  Constant: '<S17>/KeTAIB_p_HghRfrgtPresSnsrInit'
     */
    TAIB_ac_DW.VeTAIB_p_HghRfrgPresSnsrInit_DSTATE =
        KeTAIB_p_HghRfrgtPresSnsrInit;

    /* Outport: '<Root>/VeTAIB_p_HghRfrgtPresSnsrRaw' incorporates:
     *  Constant: '<S17>/KeTAIB_p_HghRfrgtPresSnsrInit'
     *  SignalConversion: '<S14>/Signal Conversion'
     */
    (void)Rte_Write_VeTAIB_p_HghRfrgtPresSnsrRaw_Value
        (KeTAIB_p_HghRfrgtPresSnsrInit);

    /* Outport: '<Root>/VeTAIB_p_HghRfrgtPresSnsr' incorporates:
     *  Constant: '<S17>/KeTAIB_p_HghRfrgtPresSnsrInit'
     *  SignalConversion: '<S14>/Signal Conversion1'
     */
    (void)Rte_Write_VeTAIB_p_HghRfrgtPresSnsr_Value
        (KeTAIB_p_HghRfrgtPresSnsrInit);

    /* Outport: '<Root>/VeTAIB_e_FaultSts_AC_RefrigPresSnsrAHi' incorporates:
     *  Constant: '<S16>/Constant'
     */
    (void)Rte_Write_VeTAIB_e_FaultSts_AC_RefrigPresSnsrAHi_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeTAIB_e_FaultSts_AC_RefrigPresSnsrALo' incorporates:
     *  Constant: '<S15>/Constant'
     */
    (void)Rte_Write_VeTAIB_e_FaultSts_AC_RefrigPresSnsrALo_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S5>/AirCdngPSnsr_Init' */
    /* End of Outputs for SubSystem: '<S2>/AirCdngPSnsr_Init' */
#endif

#if Rte_SysCon_Variant_TAIB_OEXVOP_Presence

    /* Outputs for Atomic SubSystem: '<S2>/OutsideExpansValvRefOutPSnsr_Init' */
    /* Outputs for Atomic SubSystem: '<S9>/OutsideExpansValvRefOutPSnsr_Init' */
    /* StateWriter: '<S26>/State Writer' incorporates:
     *  Constant: '<S27>/KeTAIB_p_OEXV_OutPresSnsrInit'
     */
    TAIB_ac_DW.VeTAIB_p_OEXV_OutPresSnsrInit_DSTATE =
        KeTAIB_p_OEXV_OutPresSnsrInit;

    /* Outport: '<Root>/VeTAIB_p_OEXV_OutPresSnsrRaw' incorporates:
     *  Constant: '<S27>/KeTAIB_p_OEXV_OutPresSnsrInit'
     *  SignalConversion: '<S26>/Signal Conversion1'
     */
    (void)Rte_Write_VeTAIB_p_OEXV_OutPresSnsrRaw_Value
        (KeTAIB_p_OEXV_OutPresSnsrInit);

    /* Outport: '<Root>/VeTAIB_p_OEXV_OutPresSnsr' incorporates:
     *  Constant: '<S27>/KeTAIB_p_OEXV_OutPresSnsrInit'
     *  SignalConversion: '<S26>/Signal Conversion2'
     */
    (void)Rte_Write_VeTAIB_p_OEXV_OutPresSnsr_Value
        (KeTAIB_p_OEXV_OutPresSnsrInit);

    /* End of Outputs for SubSystem: '<S9>/OutsideExpansValvRefOutPSnsr_Init' */
    /* End of Outputs for SubSystem: '<S2>/OutsideExpansValvRefOutPSnsr_Init' */
#endif

#if Rte_SysCon_Variant_TAIB_CEXVOP_Presence

    /* Outputs for Atomic SubSystem: '<S2>/ChillerExpansValvRefOutPSnsr_Init' */
    /* Outputs for Atomic SubSystem: '<S6>/ChillerExpansValvRefOutPSnsr_Init' */
    /* StateWriter: '<S18>/State Writer' incorporates:
     *  Constant: '<S19>/KeTAIB_p_CEXV_OutPresSnsrInit'
     */
    TAIB_ac_DW.VeTAIB_p_CEXV_OutPresSnsrInit_DSTATE =
        KeTAIB_p_CEXV_OutPresSnsrInit;

    /* Outport: '<Root>/VeTAIB_p_CEXV_OutPresSnsrRaw' incorporates:
     *  Constant: '<S19>/KeTAIB_p_CEXV_OutPresSnsrInit'
     *  SignalConversion: '<S18>/Signal Conversion1'
     */
    (void)Rte_Write_VeTAIB_p_CEXV_OutPresSnsrRaw_Value
        (KeTAIB_p_CEXV_OutPresSnsrInit);

    /* Outport: '<Root>/VeTAIB_p_CEXV_OutPresSnsr' incorporates:
     *  Constant: '<S19>/KeTAIB_p_CEXV_OutPresSnsrInit'
     *  SignalConversion: '<S18>/Signal Conversion2'
     */
    (void)Rte_Write_VeTAIB_p_CEXV_OutPresSnsr_Value
        (KeTAIB_p_CEXV_OutPresSnsrInit);

    /* End of Outputs for SubSystem: '<S6>/ChillerExpansValvRefOutPSnsr_Init' */
    /* End of Outputs for SubSystem: '<S2>/ChillerExpansValvRefOutPSnsr_Init' */
#endif

#if Rte_SysCon_Variant_TAIB_OEXVOT_Presence

    /* Outputs for Atomic SubSystem: '<S2>/OutsideExpansValvRefOutTSnsr_Init' */
    /* Outputs for Atomic SubSystem: '<S10>/OutsideExpansValvRefOutTSnsr_Init' */
    /* StateWriter: '<S28>/State Writer' incorporates:
     *  Constant: '<S29>/KeTAIB_T_OEXV_OutTempSnsrInit'
     */
    TAIB_ac_DW.VeTAIB_T_OEXV_OutTempSnsrInit_DSTATE =
        KeTAIB_T_OEXV_OutTempSnsrInit;

    /* Outport: '<Root>/VeTAIB_T_OEXV_OutTempSnsrRaw' incorporates:
     *  Constant: '<S29>/KeTAIB_T_OEXV_OutTempSnsrInit'
     *  SignalConversion: '<S28>/Signal Conversion1'
     */
    (void)Rte_Write_VeTAIB_T_OEXV_OutTempSnsrRaw_Value
        (KeTAIB_T_OEXV_OutTempSnsrInit);

    /* Outport: '<Root>/VeTAIB_T_OEXV_OutTempSnsr' incorporates:
     *  Constant: '<S29>/KeTAIB_T_OEXV_OutTempSnsrInit'
     *  SignalConversion: '<S28>/Signal Conversion2'
     */
    (void)Rte_Write_VeTAIB_T_OEXV_OutTempSnsr_Value
        (KeTAIB_T_OEXV_OutTempSnsrInit);

    /* End of Outputs for SubSystem: '<S10>/OutsideExpansValvRefOutTSnsr_Init' */
    /* End of Outputs for SubSystem: '<S2>/OutsideExpansValvRefOutTSnsr_Init' */
#endif

#if Rte_SysCon_Variant_TAIB_CEXVOT_Presence

    /* Outputs for Atomic SubSystem: '<S2>/ChillerExpansValvRefOutTSnsr_Init' */
    /* Outputs for Atomic SubSystem: '<S7>/ChillerExpansValvRefOutTSnsr_Init' */
    /* StateWriter: '<S20>/State Writer' incorporates:
     *  Constant: '<S21>/KeTAIB_T_CEXV_OutTempSnsrInit'
     */
    TAIB_ac_DW.VeTAIB_T_CEXV_OutTempSnsrInit_DSTATE =
        KeTAIB_T_CEXV_OutTempSnsrInit;

    /* Outport: '<Root>/VeTAIB_T_CEXV_OutTempSnsrRaw' incorporates:
     *  Constant: '<S21>/KeTAIB_T_CEXV_OutTempSnsrInit'
     *  SignalConversion: '<S20>/Signal Conversion1'
     */
    (void)Rte_Write_VeTAIB_T_CEXV_OutTempSnsrRaw_Value
        (KeTAIB_T_CEXV_OutTempSnsrInit);

    /* Outport: '<Root>/VeTAIB_T_CEXV_OutTempSnsr' incorporates:
     *  Constant: '<S21>/KeTAIB_T_CEXV_OutTempSnsrInit'
     *  SignalConversion: '<S20>/Signal Conversion2'
     */
    (void)Rte_Write_VeTAIB_T_CEXV_OutTempSnsr_Value
        (KeTAIB_T_CEXV_OutTempSnsrInit);

    /* End of Outputs for SubSystem: '<S7>/ChillerExpansValvRefOutTSnsr_Init' */
    /* End of Outputs for SubSystem: '<S2>/ChillerExpansValvRefOutTSnsr_Init' */
#endif

#if Rte_SysCon_Variant_TAIB_RADFANFB_Presence

    /* Outputs for Atomic SubSystem: '<S2>/RadFanFdbk_Init' */
    /* Outputs for Atomic SubSystem: '<S11>/RadFanFdbk_Init' */
    /* DataStoreWrite: '<S30>/NeCDMR_Cnt_BCIMInternal_MFOP2' incorporates:
     *  Inport: '<Root>/NeTAIB_Cnt_RadFanErrM2_MFOP_PM_In'
     */
    (void)Rte_Read_NeTAIB_Cnt_RadFanErrM2_MFOP_Rx_NeTAIB_Cnt_RadFanErrM2_MFOP
        (&TAIB_ac_DW.NeTAIB_Cnt_RadFanErrM2_MFOP);

    /* DataStoreWrite: '<S30>/NeCDMR_Cnt_BCIMInternal_MFOP1' incorporates:
     *  Inport: '<Root>/NeTAIB_Cnt_RadFanErrM1_MFOP_PM_In'
     */
    (void)Rte_Read_NeTAIB_Cnt_RadFanErrM1_MFOP_Rx_NeTAIB_Cnt_RadFanErrM1_MFOP
        (&TAIB_ac_DW.NeTAIB_Cnt_RadFanErrM1_MFOP);

    /* DataStoreWrite: '<S30>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NeTAIB_Cnt_RadFanErrM0_MFOP_PM_In'
     */
    (void)Rte_Read_NeTAIB_Cnt_RadFanErrM0_MFOP_Rx_NeTAIB_Cnt_RadFanErrM0_MFOP
        (&TAIB_ac_DW.NeTAIB_Cnt_RadFanErrM0_MFOP);

    /* Outport: '<Root>/VeTAIB_Pct_RadFanSts_DC' incorporates:
     *  Constant: '<S34>/KeTAIB_Pct_RadFanSts_DCInit'
     *  SignalConversion: '<S30>/Signal Conversion2'
     */
    (void)Rte_Write_VeTAIB_Pct_RadFanSts_DC_Value(KeTAIB_Pct_RadFanSts_DCInit);

    /* Outport: '<Root>/VeTAIB_t_RadFanSts_Prd' incorporates:
     *  Constant: '<S36>/KeTAIB_t_RadFanSts_PrdInit'
     *  SignalConversion: '<S30>/Signal Conversion1'
     */
    (void)Rte_Write_VeTAIB_t_RadFanSts_Prd_Value(KeTAIB_t_RadFanSts_PrdInit);

    /* Outport: '<Root>/VeTAIB_t_RadFanSts_PW' incorporates:
     *  Constant: '<S35>/KeTAIB_t_RadFanSts_PWInit'
     *  SignalConversion: '<S30>/Signal Conversion3'
     */
    (void)Rte_Write_VeTAIB_t_RadFanSts_PW_Value(KeTAIB_t_RadFanSts_PWInit);

    /* Outport: '<Root>/VeTAIB_e_FaultSts_RadFanDiagErrM0' incorporates:
     *  Constant: '<S33>/Constant'
     */
    (void)Rte_Write_VeTAIB_e_FaultSts_RadFanDiagErrM0_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeTAIB_e_FaultSts_RadFanDiagErrM1' incorporates:
     *  Constant: '<S31>/Constant'
     */
    (void)Rte_Write_VeTAIB_e_FaultSts_RadFanDiagErrM1_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeTAIB_e_FaultSts_RadFanDiagErrM2' incorporates:
     *  Constant: '<S32>/Constant'
     */
    (void)Rte_Write_VeTAIB_e_FaultSts_RadFanDiagErrM2_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S11>/RadFanFdbk_Init' */
    /* End of Outputs for SubSystem: '<S2>/RadFanFdbk_Init' */
#endif

#if Rte_SysCon_Variant_TAIB_5VAUX_Presence

    /* Outputs for Atomic SubSystem: '<S2>/5VAux1_Init' */
    /* Outputs for Atomic SubSystem: '<S4>/5VAux1_Init' */
    /* DataStoreWrite: '<S12>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NeTAIB_Cnt_5VAux1_MFOP_PM_In'
     */
    (void)Rte_Read_NeTAIB_Cnt_5VAux1_MFOP_Rx_NeTAIB_Cnt_5VAux1_MFOP
        (&TAIB_ac_DW.NeTAIB_Cnt_5VAux1_MFOP);

    /* Outport: '<Root>/VeTAIB_e_FaultSts_SnsrRefVolt3Ckt' incorporates:
     *  Constant: '<S13>/Constant'
     */
    (void)Rte_Write_VeTAIB_e_FaultSts_SnsrRefVolt3Ckt_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S4>/5VAux1_Init' */
    /* End of Outputs for SubSystem: '<S2>/5VAux1_Init' */
#endif

#if Rte_SysCon_Variant_TAIB_OEXVIT_Presence

    /* Outputs for Atomic SubSystem: '<S2>/OutsideExpansValvRefInTSnsr_Init' */
    /* Outputs for Atomic SubSystem: '<S8>/OutsideExpansValvRefInTSnsr_Init' */
    /* DataStoreWrite: '<S22>/NeCDMR_Cnt_BCIMInternal_MFOP1' incorporates:
     *  Inport: '<Root>/NeTAIB_Cnt_OEXVInTSnsrSTB_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeTAIB_Cnt_OEXVInTSnsrSTB_MFOP_Rx_NeTAIB_Cnt_OEXVInTSnsrSTB_MFOP
        (&TAIB_ac_DW.NeTAIB_Cnt_OEXVInTSnsrSTB_MFOP);

    /* DataStoreWrite: '<S22>/NeCDMR_Cnt_BCIMInternal_MFOP' incorporates:
     *  Inport: '<Root>/NeTAIB_Cnt_OEXVInTSnsrSTG_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeTAIB_Cnt_OEXVInTSnsrSTG_MFOP_Rx_NeTAIB_Cnt_OEXVInTSnsrSTG_MFOP
        (&TAIB_ac_DW.NeTAIB_Cnt_OEXVInTSnsrSTG_MFOP);

    /* StateWriter: '<S22>/State Writer' incorporates:
     *  Constant: '<S25>/KeTAIB_T_OEXV_InTempSnsrInit'
     */
    TAIB_ac_DW.VeTAIB_T_OEXV_InTempSnsrInit_DSTATE =
        KeTAIB_T_OEXV_InTempSnsrInit;

    /* Outport: '<Root>/VeTAIB_T_OEXV_InTempSnsrRaw' incorporates:
     *  Constant: '<S25>/KeTAIB_T_OEXV_InTempSnsrInit'
     *  SignalConversion: '<S22>/Signal Conversion1'
     */
    (void)Rte_Write_VeTAIB_T_OEXV_InTempSnsrRaw_Value
        (KeTAIB_T_OEXV_InTempSnsrInit);

    /* Outport: '<Root>/VeTAIB_T_OEXV_InTempSnsr' incorporates:
     *  Constant: '<S25>/KeTAIB_T_OEXV_InTempSnsrInit'
     *  SignalConversion: '<S22>/Signal Conversion2'
     */
    (void)Rte_Write_VeTAIB_T_OEXV_InTempSnsr_Value(KeTAIB_T_OEXV_InTempSnsrInit);

    /* Outport: '<Root>/VeTAIB_e_FaultSts_AC_RefrigTempSnsr5CktShotoGro' incorporates:
     *  Constant: '<S24>/Constant'
     */
    (void)Rte_Write_VeTAIB_e_FaultSts_AC_RefrigTempSnsr5CktShotoGro_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeTAIB_e_FaultSts_AC_RefrigTempSnsr5CktShotoBat' incorporates:
     *  Constant: '<S23>/Constant'
     */
    (void)Rte_Write_VeTAIB_e_FaultSts_AC_RefrigTempSnsr5CktShotoBat_Value
        (CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S8>/OutsideExpansValvRefInTSnsr_Init' */
    /* End of Outputs for SubSystem: '<S2>/OutsideExpansValvRefInTSnsr_Init' */
#endif

    /* End of Outputs for SubSystem: '<Root>/Init' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
