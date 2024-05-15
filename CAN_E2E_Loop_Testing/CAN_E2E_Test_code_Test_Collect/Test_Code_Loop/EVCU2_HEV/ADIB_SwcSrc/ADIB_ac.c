/*
 * File: ADIB_ac.c
 *
 * Code generated for Simulink model 'ADIB_ac'.
 *
 * Model version                  : 4.653
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:04:55 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ADIB_ac.h"
#include "look1_iflf_binlcapw.h"
#include "look2_iflf_binlcapw.h"

/* Named constants for Chart: '<S120>/AntiSpkFil' */
#if Rte_SysCon_Variant_ADIB_WED_Presence
#define ADIB_ac_IN_FILTERING           ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence
#define ADIB_ac_IN_NORMAL              ((uint8)2U)
#endif

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_ADIB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint16, ADIB_VAR_INIT) KeADIB_Cnt_ElcFltFailLimLtWED =
    100U;                              /* Referenced by: '<S263>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint16, ADIB_VAR_INIT) KeADIB_Cnt_ElcFltFailLimRtWED =
    100U;                              /* Referenced by: '<S285>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint16, ADIB_VAR_INIT) KeADIB_Cnt_ElcFltSmplLimLtWED =
    150U;                              /* Referenced by: '<S264>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint16, ADIB_VAR_INIT) KeADIB_Cnt_ElcFltSmplLimRtWED =
    150U;                              /* Referenced by: '<S286>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint16, ADIB_VAR_INIT)
    KeADIB_Cnt_ElectricalFailLimWED_Pwm_PosnSns1 = 10U;
             /* Referenced by: '<S166>/KeADIB_Cnt_STGFailLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint16, ADIB_VAR_INIT)
    KeADIB_Cnt_ElectricalFailLimWED_Pwm_PosnSns2 = 10U;
                /* Referenced by: '<S217>/KeTAIB_Cnt_STGFailLimCEXV_OutTSnsr' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint16, ADIB_VAR_INIT)
    KeADIB_Cnt_ElectricalSmplLimWED_Pwm_PosnSns1 = 15U;
             /* Referenced by: '<S167>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint16, ADIB_VAR_INIT)
    KeADIB_Cnt_ElectricalSmplLimWED_Pwm_PosnSns2 = 15U;
                /* Referenced by: '<S218>/KeTAIB_Cnt_STGSmplLimCEXV_OutTSnsr' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint16, ADIB_VAR_INIT)
    KeADIB_Cnt_OofRFailLimWED_Pwm_PosnSns1 = 10U;
            /* Referenced by: '<S185>/KeADIB_Cnt_OofRFailLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint16, ADIB_VAR_INIT)
    KeADIB_Cnt_OofRFailLimWED_Pwm_PosnSns2 = 200U;
                /* Referenced by: '<S236>/KeTAIB_Cnt_STGFailLimCEXV_OutTSnsr' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint16, ADIB_VAR_INIT)
    KeADIB_Cnt_OofRSmplLimWED_Pwm_PosnSns1 = 15U;
            /* Referenced by: '<S186>/KeADIB_Cnt_OofRSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint16, ADIB_VAR_INIT)
    KeADIB_Cnt_OofRSmplLimWED_Pwm_PosnSns2 = 250U;
                /* Referenced by: '<S237>/KeTAIB_Cnt_STGSmplLimCEXV_OutTSnsr' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_Cnt_WEDHBSnsrCurLftSpikeThd
    = 2.0F;     /* Referenced by: '<S126>/KeADIB_Cnt_WEDHBSnsrCurLftSpikeThd' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_Cnt_WEDHBSnsrCurRgtSpikeThd
    = 2.0F;     /* Referenced by: '<S140>/KeADIB_Cnt_WEDHBSnsrCurRgtSpikeThd' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_I_LtWEDCurrLimInit = 0.0F;/* Referenced by: '<S311>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_I_RtWEDCurrLimInit = 0.0F;/* Referenced by: '<S312>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_I_WEDHBCurLftByp = 80.0F;/* Referenced by:
                                                                      * '<S123>/KeADIB_I_WEDHBCurLftByp'
                                                                      * '<S137>/KeADIB_b_WEDHBCurRgtByp'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_I_WEDLtCurrLim = 0.0F;/* Referenced by: '<S70>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_I_WEDRtCurrLim = 0.0F;/* Referenced by: '<S93>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_Pct_LtWEDDutyCycleInit =
    0.0F;                              /* Referenced by: '<S313>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_Pct_RtWEDDutyCycleInit =
    0.0F;                              /* Referenced by: '<S314>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_Pct_WEDLtCmdByp = 0.0F;/* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_Pct_WEDRtCmdByp = 0.0F;/* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_Pct_WED_Pwm_PosnSns1_DCInit
    = 0.0F;     /* Referenced by: '<S323>/KeADIB_Pct_WED_Pwm_PosnSns1_DCInit' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT)
    KeADIB_Pct_WED_Pwm_PosnSns1_DCRcvry = 50.0F;
                /* Referenced by: '<S20>/KeADIB_Pct_WED_Pwm_PosnSns1_DCRcvry' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_Pct_WED_Pwm_PosnSns1_DC_Byp
    = 50.0F;     /* Referenced by: '<S22>/KeADIB_Pct_WED_Pwm_PosnSns1_DC_Byp' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT)
    KeADIB_Pct_WED_Pwm_PosnSns1_DC_RngHiLim = 99.0F;
           /* Referenced by: '<S160>/KeADIB_Pct_WED_Pwm_PosnSns1_DC_RngHiLim' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT)
    KeADIB_Pct_WED_Pwm_PosnSns1_DC_RngLoLim = 1.0F;
           /* Referenced by: '<S161>/KeADIB_Pct_WED_Pwm_PosnSns1_DC_RngLoLim' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_Pct_WED_Pwm_PosnSns2_DCInit
    = 0.0F;            /* Referenced by: '<S332>/KeTAIB_Pct_RadFanSts_DCInit' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT)
    KeADIB_Pct_WED_Pwm_PosnSns2_DCRcvry = 0.0F;
                /* Referenced by: '<S48>/VeADIB_Pct_WED_Pwm_PosnSns2_DCRcvry' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_Pct_WED_Pwm_PosnSns2_DC_Byp
    = 50.0F;     /* Referenced by: '<S50>/KeADIB_Pct_WED_Pwm_PosnSns2_DC_Byp' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT)
    KeADIB_Pct_WED_Pwm_PosnSns2_DC_RngHiLim = 99.0F;
           /* Referenced by: '<S214>/KeADIB_Pct_WED_Pwm_PosnSns2_DC_RngHiLim' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT)
    KeADIB_Pct_WED_Pwm_PosnSns2_DC_RngLoLim = 1.0F;
               /* Referenced by: '<S213>/KeADIB_ut_WED_Pwm_PosnSns2_RngLoLim' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_U_WEDHBSnsrCurLftSpikeThd =
    1.0F;         /* Referenced by: '<S127>/KeADIB_U_WEDHBSnsrCurLftSpikeThd' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_U_WEDHBSnsrCurRgtSpikeThd =
    1.0F;         /* Referenced by: '<S141>/KeADIB_U_WEDHBSnsrCurRgtSpikeThd' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_ElcFltDiagEnbl_LtWED = 1;/* Referenced by: '<S265>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_ElcFltDiagEnbl_RtWED = 1;/* Referenced by: '<S287>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_ElectricalDiagEnbl_WED_Pwm_PosnSns1 = 1;
             /* Referenced by: '<S169>/KeADIB_b_STGDiagEnbl_WED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_ElectricalDiagEnbl_WED_Pwm_PosnSns2 = 1;
                /* Referenced by: '<S220>/KeTAIB_b_STGDiagEnbl_CEXV_OutTSnsr' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_LtWEDEnblInit = 0;/* Referenced by: '<S315>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_LtchEnblLtWEDElecFlt = 1;
             /* Referenced by: '<S266>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_LtchEnblRtWEDElecFlt = 1;
             /* Referenced by: '<S288>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_LtchEnblWEDPosnSnsr1ElecFlt = 1;
             /* Referenced by: '<S168>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_LtchEnblWEDPosnSnsr1OofR =
    1;       /* Referenced by: '<S187>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_LtchEnblWEDPosnSnsr2ElecFlt = 1;
             /* Referenced by: '<S219>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_LtchEnblWEDPosnSnsr2OofR =
    1;       /* Referenced by: '<S238>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_OofRDiagEnblWED_Pwm_PosnSns1 = 1;
             /* Referenced by: '<S188>/KeADIB_b_OofRDiagEnblWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_OofRDiagEnblWED_Pwm_PosnSns2 = 1;
                /* Referenced by: '<S239>/KeTAIB_b_STGDiagEnbl_CEXV_OutTSnsr' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_RtWEDEnblInit = 0;/* Referenced by: '<S316>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDHBCurLftBypEnbl = 0;
                       /* Referenced by: '<S124>/KeADIB_b_WEDHBCurLftBypEnbl' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDHBCurRgtBypEnbl = 0;
                       /* Referenced by: '<S138>/KeADIB_b_WEDHBCurRgtBypEnbl' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDLtBypEnbl = 0;/* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDLtCircHiBypEnbl = 0;/* Referenced by: '<S75>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDLtCircLoBypEnbl = 0;/* Referenced by: '<S76>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDLtCircOpenBypEnbl = 0;/* Referenced by: '<S77>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDLtCmdBypEnbl = 0;/* Referenced by: '<S92>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDLtDrvrOvrTempBypEnbl =
    0;                                 /* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WEDLtDrvrOvrTempWarnBypEnbl = 0;/* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDLtDrvrOvrVoltBypEnbl =
    0;                                 /* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDLtDrvrUndrVoltBypEnbl =
    0;                                 /* Referenced by: '<S81>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDLtEnblReq = 0;/* Referenced by: '<S71>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDLtShoLoadBypEnbl = 0;/* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDRtCircLoBypEnbl = 0;/* Referenced by: '<S99>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDRtCircOpenBypEnbl = 0;/* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDRtCmdBypEnbl = 0;/* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDRtDrvrOvrTempBypEnbl =
    0;                                 /* Referenced by: '<S101>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WEDRtDrvrOvrTempWarnBypEnbl = 0;/* Referenced by: '<S102>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDRtDrvrOvrVoltBypEnbl =
    0;                                 /* Referenced by: '<S103>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDRtDrvrUndrVoltBypEnbl =
    0;                                 /* Referenced by: '<S104>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDRtEnblReq = 0;/* Referenced by: '<S94>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT) KeADIB_b_WEDRtShoLoadBypEnbl = 0;/* Referenced by: '<S105>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns1PolarInvEnb = 0;
               /* Referenced by: '<S14>/KeADIB_b_WED_Pwm_PosnSns1PolarInvEnb' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns1_DCRcvryEnbl = 0;
              /* Referenced by: '<S21>/KeADIB_b_WED_Pwm_PosnSns1_DCRcvryEnbl' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns1_DC_BypEnbl = 0;
               /* Referenced by: '<S23>/KeADIB_b_WED_Pwm_PosnSns1_DC_BypEnbl' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns1_IsPinHiInit = 1;
             /* Referenced by: '<S324>/KeADIB_b_WED_Pwm_PosnSns1_IsPinHiInit' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns1_IsPinHi_Byp = 0;
              /* Referenced by: '<S24>/KeADIB_b_WED_Pwm_PosnSns1_IsPinHi_Byp' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns1_IsPinHi_BypEnbl = 0;
          /* Referenced by: '<S25>/KeADIB_b_WED_Pwm_PosnSns1_IsPinHi_BypEnbl' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns1_PW_BypEnbl = 0;
               /* Referenced by: '<S26>/KeADIB_b_WED_Pwm_PosnSns1_PW_BypEnbl' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns1_Prd_BypEnbl = 1;
              /* Referenced by: '<S27>/KeADIB_b_WED_Pwm_PosnSns1_Prd_BypEnbl' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns1_TiOut_Byp = 0;
                /* Referenced by: '<S28>/KeADIB_b_WED_Pwm_PosnSns1_TiOut_Byp' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns1_TiOut_BypEnbl = 0;
            /* Referenced by: '<S29>/KeADIB_b_WED_Pwm_PosnSns1_TiOut_BypEnbl' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns2PolarInvEnb = 0;
               /* Referenced by: '<S42>/KeADIB_b_WED_Pwm_PosnSns2PolarInvEnb' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns2_DCRcvryEnbl = 0;
            /* Referenced by: '<S49>/VeADIB_Pct_WED_Pwm_PosnSns2_DCRcvryEnbl' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns2_DC_BypEnbl = 0;
               /* Referenced by: '<S51>/KeADIB_b_WED_Pwm_PosnSns2_DC_BypEnbl' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns2_IsPinHiInit = 1;
                       /* Referenced by: '<S333>/KeTAIB_Pct_RadFanSts_DCInit' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns2_IsPinHi_Byp = 0;
              /* Referenced by: '<S52>/KeADIB_b_WED_Pwm_PosnSns2_IsPinHi_Byp' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns2_IsPinHi_BypEnbl = 0;
          /* Referenced by: '<S53>/KeADIB_b_WED_Pwm_PosnSns2_IsPinHi_BypEnbl' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns2_PW_BypEnbl = 0;
               /* Referenced by: '<S54>/KeADIB_b_WED_Pwm_PosnSns2_PW_BypEnbl' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns2_Prd_BypEnbl = 0;
              /* Referenced by: '<S55>/KeADIB_b_WED_Pwm_PosnSns2_Prd_BypEnbl' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns2_TiOut_Byp = 0;
                /* Referenced by: '<S56>/KeADIB_b_WED_Pwm_PosnSns2_TiOut_Byp' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(boolean, ADIB_VAR_INIT)
    KeADIB_b_WED_Pwm_PosnSns2_TiOut_BypEnbl = 0;
            /* Referenced by: '<S57>/KeADIB_b_WED_Pwm_PosnSns2_TiOut_BypEnbl' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_k_WEDHBSnsrCurLftFiltGx =
    0.8F;           /* Referenced by: '<S128>/KeADIB_k_WEDHBSnsrCurLftFiltGx' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_k_WEDHBSnsrCurRgtFiltGx =
    0.8F;           /* Referenced by: '<S142>/KeADIB_k_WEDHBSnsrCurRgtFiltGx' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_t_LtWEDPrdInit = 10000.0F;/* Referenced by: '<S317>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_t_RtWEDPrdInit = 10000.0F;/* Referenced by: '<S318>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_ut_WEDLtPrd = 10000.0F;/* Referenced by: '<S72>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_ut_WEDRtPrd = 10000.0F;/* Referenced by: '<S95>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_ut_WED_Pwm_PosnSns1_PWInit =
    0.0F;        /* Referenced by: '<S325>/KeADIB_ut_WED_Pwm_PosnSns1_PWInit' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_ut_WED_Pwm_PosnSns1_PW_Byp =
    0.5F;         /* Referenced by: '<S30>/KeADIB_ut_WED_Pwm_PosnSns1_PW_Byp' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_ut_WED_Pwm_PosnSns1_PrdInit
    = 0.0F;     /* Referenced by: '<S326>/KeADIB_ut_WED_Pwm_PosnSns1_PrdInit' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_ut_WED_Pwm_PosnSns1_Prd_Byp
    = 0.1F;      /* Referenced by: '<S31>/KeADIB_ut_WED_Pwm_PosnSns1_Prd_Byp' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT)
    KeADIB_ut_WED_Pwm_PosnSns1_RngHiLim = 0.5F;
               /* Referenced by: '<S162>/KeADIB_ut_WED_Pwm_PosnSns1_RngHiLim' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT)
    KeADIB_ut_WED_Pwm_PosnSns1_RngLoLim = 0.01F;
               /* Referenced by: '<S163>/KeADIB_ut_WED_Pwm_PosnSns1_RngLoLim' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_ut_WED_Pwm_PosnSns2_PWInit =
    0.0F;        /* Referenced by: '<S330>/KeADIB_ut_WED_Pwm_PosnSns2_PWInit' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_ut_WED_Pwm_PosnSns2_PW_Byp =
    0.5F;         /* Referenced by: '<S58>/KeADIB_ut_WED_Pwm_PosnSns2_PW_Byp' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_ut_WED_Pwm_PosnSns2_PrdInit
    = 0.0F;     /* Referenced by: '<S331>/KeADIB_ut_WED_Pwm_PosnSns2_PrdInit' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KeADIB_ut_WED_Pwm_PosnSns2_Prd_Byp
    = 1.0F;      /* Referenced by: '<S59>/KeADIB_ut_WED_Pwm_PosnSns2_Prd_Byp' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT)
    KeADIB_ut_WED_Pwm_PosnSns2_RngHiLim = 11.7F;
               /* Referenced by: '<S211>/KeADIB_ut_WED_Pwm_PosnSns2_RngHiLim' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT)
    KeADIB_ut_WED_Pwm_PosnSns2_RngLoLim = 8.0F;
               /* Referenced by: '<S212>/KeADIB_ut_WED_Pwm_PosnSns2_RngLoLim' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint8, ADIB_VAR_INIT) KeADIB_y_WEDLtCircHiByp = 0U;/* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint8, ADIB_VAR_INIT) KeADIB_y_WEDLtCircLoByp = 0U;/* Referenced by: '<S83>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint8, ADIB_VAR_INIT) KeADIB_y_WEDLtCircOpenByp = 0U;/* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint8, ADIB_VAR_INIT) KeADIB_y_WEDLtDrvrOvrTempByp = 0U;/* Referenced by: '<S86>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint8, ADIB_VAR_INIT) KeADIB_y_WEDLtDrvrOvrTempWarnByp =
    0U;                                /* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint8, ADIB_VAR_INIT) KeADIB_y_WEDLtDrvrOvrVoltByp = 0U;/* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint8, ADIB_VAR_INIT) KeADIB_y_WEDLtDrvrUndrVoltByp = 0U;/* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint8, ADIB_VAR_INIT) KeADIB_y_WEDLtShoLoadByp = 0U;/* Referenced by: '<S90>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint8, ADIB_VAR_INIT) KeADIB_y_WEDRtCircHiByp = 0U;/* Referenced by: '<S107>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint8, ADIB_VAR_INIT) KeADIB_y_WEDRtCircLoByp = 0U;/* Referenced by: '<S106>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint8, ADIB_VAR_INIT) KeADIB_y_WEDRtCircOpenByp = 0U;/* Referenced by: '<S108>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint8, ADIB_VAR_INIT) KeADIB_y_WEDRtDrvrOvrTempByp = 0U;/* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint8, ADIB_VAR_INIT) KeADIB_y_WEDRtDrvrOvrTempWarnByp =
    0U;                                /* Referenced by: '<S110>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint8, ADIB_VAR_INIT) KeADIB_y_WEDRtDrvrOvrVoltByp = 0U;/* Referenced by: '<S111>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint8, ADIB_VAR_INIT) KeADIB_y_WEDRtDrvrUndrVoltByp = 0U;/* Referenced by: '<S112>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(uint8, ADIB_VAR_INIT) KeADIB_y_WEDRtShoLoadByp = 0U;/* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KtADIB_I_WEDHBSnsrCurLftChartc[24]
    =
{
    191.0F, 150.0F, 140.0F, 130.0F, 120.0F, 110.0F, 100.0F, 90.0F, 80.0F, 70.0F,
    60.0F, 50.0F, 40.0F, 30.0F, 20.0F, 10.0F, 0.0F, -10.0F, -20.0F, -30.0F,
    -40.0F, -50.0F, -60.0F, -64.0F
} ;                                    /* Referenced by: '<S121>/Vector' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KtADIB_I_WEDHBSnsrCurRgtChartc[24]
    =
{
    191.0F, 150.0F, 140.0F, 130.0F, 120.0F, 110.0F, 100.0F, 90.0F, 80.0F, 70.0F,
    60.0F, 50.0F, 40.0F, 30.0F, 20.0F, 10.0F, 0.0F, -10.0F, -20.0F, -30.0F,
    -40.0F, -50.0F, -60.0F, -64.0F
} ;                                    /* Referenced by: '<S135>/Vector' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KtADIB_Pct_WEDPosnSns1Chartc[18] =
{
    0.0F, 16.8F, 21.9F, 75.38F, 80.29F, 100.0F, 0.0F, 17.61F, 22.4F, 77.64F,
    81.73F, 100.0F, 0.0F, 16.8F, 21.9F, 75.38F, 80.29F, 100.0F
} ;                                    /* Referenced by: '<S19>/Vector' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KtADIB_Pct_WEDPosnSns2Chartc[18] =
{
    0.0F, 16.8F, 21.9F, 75.38F, 80.29F, 100.0F, 0.0F, 17.61F, 22.4F, 77.64F,
    81.73F, 100.0F, 0.0F, 16.8F, 21.9F, 75.38F, 80.29F, 100.0F
} ;                                    /* Referenced by: '<S47>/Vector' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KxADIB_Pct_WEDPosSns1RoughChartc[6]
    =
{
    0.0F, 17.61F, 22.4F, 77.64F, 81.73F, 100.0F
} ;                                    /* Referenced by: '<S19>/Vector' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KxADIB_Pct_WEDPosSns2RoughChartc[6]
    =
{
    0.0F, 17.61F, 22.4F, 77.64F, 81.73F, 100.0F
} ;                                    /* Referenced by: '<S47>/Vector' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KxADIB_U_WEDHBSnsrCurLftChartc[24]
    =
{
    0.0F, 0.22F, 0.279F, 0.347F, 0.445F, 0.552F, 0.723F, 0.929F, 1.193F, 1.52F,
    1.916F, 2.366F, 2.849F, 3.338F, 3.788F, 4.164F, 4.457F, 4.668F, 4.804F,
    4.897F, 4.946F, 4.971F, 4.99F, 5.0F
} ;                                    /* Referenced by: '<S121>/Vector' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KxADIB_U_WEDHBSnsrCurRgtChartc[24]
    =
{
    0.0F, 0.22F, 0.279F, 0.347F, 0.445F, 0.552F, 0.723F, 0.929F, 1.193F, 1.52F,
    1.916F, 2.366F, 2.849F, 3.338F, 3.788F, 4.164F, 4.457F, 4.668F, 4.804F,
    4.897F, 4.946F, 4.971F, 4.99F, 5.0F
} ;                                    /* Referenced by: '<S135>/Vector' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KyADIB_I_WEDLeftCurrActChartc[3] =
{
    -7.0F, 0.0F, 7.0F
} ;                                    /* Referenced by: '<S47>/Vector' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static volatile CONST(float32, ADIB_VAR_INIT) KyADIB_I_WEDRightCurrActChartc[3] =
{
    -7.0F, 0.0F, 7.0F
} ;                                    /* Referenced by: '<S19>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_ADIB
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADIB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(uint16, ADIB_VAR_INIT) VeADIB_Cnt_ElcFltFailLtWED;/* '<S275>/Switch1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(uint16, ADIB_VAR_INIT) VeADIB_Cnt_ElcFltFailRtWED;/* '<S297>/Switch1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(uint16, ADIB_VAR_INIT) VeADIB_Cnt_ElcFltSmplLtWED;/* '<S276>/Switch1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(uint16, ADIB_VAR_INIT) VeADIB_Cnt_ElcFltSmplRtWED;/* '<S298>/Switch1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(uint16, ADIB_VAR_INIT) VeADIB_Cnt_ElectricalFailWED_Pwm_PosnSns1;/* '<S178>/Switch1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(uint16, ADIB_VAR_INIT) VeADIB_Cnt_ElectricalFailWED_Pwm_PosnSns2;/* '<S229>/Switch1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(uint16, ADIB_VAR_INIT) VeADIB_Cnt_ElectricalSmplWED_Pwm_PosnSns1;/* '<S179>/Switch1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(uint16, ADIB_VAR_INIT) VeADIB_Cnt_ElectricalSmplWED_Pwm_PosnSns2;/* '<S230>/Switch1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(uint16, ADIB_VAR_INIT) VeADIB_Cnt_OofRFailWED_Pwm_PosnSns1;/* '<S197>/Switch1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(uint16, ADIB_VAR_INIT) VeADIB_Cnt_OofRFailWED_Pwm_PosnSns2;/* '<S248>/Switch1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(uint16, ADIB_VAR_INIT) VeADIB_Cnt_OofRSamplWED_Pwm_PosnSns1;/* '<S198>/Switch1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(uint16, ADIB_VAR_INIT) VeADIB_Cnt_OofRSamplWED_Pwm_PosnSns2;/* '<S249>/Switch1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(float32, ADIB_VAR_INIT) VeADIB_U_WEDHBSnsrCurLftVolt;/* '<S132>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(float32, ADIB_VAR_INIT) VeADIB_U_WEDHBSnsrCurLftVoltRaw;/* '<S120>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(float32, ADIB_VAR_INIT) VeADIB_U_WEDHBSnsrCurRgtVolt;/* '<S146>/Assignment_y' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(float32, ADIB_VAR_INIT) VeADIB_U_WEDHBSnsrCurRgtVoltRaw;/* '<S134>/AntiSpkFil' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(boolean, ADIB_VAR_INIT) VeADIB_b_Fault_Criteria_DC_PosOutofRange1;/* '<S154>/AND3' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(boolean, ADIB_VAR_INIT) VeADIB_b_Fault_Criteria_DC_PosOutofRange2;/* '<S205>/AND4' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(boolean, ADIB_VAR_INIT) VeADIB_b_Fault_Criteria_Prd_PosOutofRange1;/* '<S154>/AND2' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(boolean, ADIB_VAR_INIT) VeADIB_b_Fault_Criteria_Prd_PosOutofRange2;/* '<S205>/AND2' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(boolean, ADIB_VAR_INIT) VeADIB_b_WED_Pwm_PosnSns1_Fault_Crtieria_STB;/* '<S154>/AND4' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(boolean, ADIB_VAR_INIT) VeADIB_b_WED_Pwm_PosnSns1_Fault_Crtieria_STG;/* '<S154>/AND1' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(boolean, ADIB_VAR_INIT) VeADIB_b_WED_Pwm_PosnSns2_Fault_Crtieria_STB;/* '<S205>/AND3' */

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static VAR(boolean, ADIB_VAR_INIT) VeADIB_b_WED_Pwm_PosnSns2_Fault_Crtieria_STG;/* '<S205>/AND1' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADIB
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ADIB
#include "MemMap.h"

CONST(ConstP_ADIB_ac_T, ADIB_VAR_INIT) ADIB_ac_ConstP =
{

#if Rte_SysCon_Variant_ADIB_WED_Presence

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S19>/Vector'
     *   '<S47>/Vector'
     */
    {
        5U, 2U
    },

#endif

#ifndef CONSTP_ADIB_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_ADIB
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADIB
#include "MemMap.h"

VAR(B_ADIB_ac_T, ADIB_VAR_INIT) ADIB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADIB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADIB
#include "MemMap.h"

VAR(DW_ADIB_ac_T, ADIB_VAR_INIT) ADIB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADIB
#include "MemMap.h"
#if Rte_SysCon_Variant_ADIB_WED_Presence

static FUNC(void, ADIB_CODE_LOCAL) ADIB_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, ADIB_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static FUNC(void, ADIB_CODE_LOCAL) ADIB_ac_Init_o(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, ADIB_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static FUNC(void, ADIB_CODE_LOCAL) ADIB_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, ADIB_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

static FUNC(void, ADIB_CODE_LOCAL) ADIB_ac_ClosedInterval1(VAR(float32,
    AUTOMATIC) rtu_VeADIB_ut_WED_Pwm_PosnSns1_, VAR(float32, AUTOMATIC) rtu_MN,
    VAR(float32, AUTOMATIC) rtu_MX, P2VAR(B_ClosedInterval1_ADIB_ac_T, AUTOMATIC,
    ADIB_VAR_INIT) localB);

#endif

/*
 * Output and update for enable system:
 *    '<S170>/Fail'
 *    '<S189>/Fail'
 *    '<S221>/Fail'
 *    '<S240>/Fail'
 *    '<S267>/Fail'
 *    '<S289>/Fail'
 */
#if Rte_SysCon_Variant_ADIB_WED_Presence

static FUNC(void, ADIB_CODE_LOCAL) ADIB_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, ADIB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S170>/Fail' incorporates:
     *  EnablePort: '<S174>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S174>/FaultSts' incorporates:
         *  Constant: '<S180>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S170>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S170>/Init'
 *    '<S189>/Init'
 *    '<S221>/Init'
 *    '<S240>/Init'
 *    '<S267>/Init'
 *    '<S289>/Init'
 */
#if Rte_SysCon_Variant_ADIB_WED_Presence

static FUNC(void, ADIB_CODE_LOCAL) ADIB_ac_Init_o(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, ADIB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S170>/Init' incorporates:
     *  EnablePort: '<S175>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S175>/FaultSts' incorporates:
         *  Constant: '<S181>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S170>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S170>/Pass'
 *    '<S189>/Pass'
 *    '<S221>/Pass'
 *    '<S240>/Pass'
 *    '<S267>/Pass'
 *    '<S289>/Pass'
 */
#if Rte_SysCon_Variant_ADIB_WED_Presence

static FUNC(void, ADIB_CODE_LOCAL) ADIB_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, ADIB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S170>/Pass' incorporates:
     *  EnablePort: '<S176>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S176>/FaultSts' incorporates:
         *  Constant: '<S182>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S170>/Pass' */
}

#endif

/*
 * Output and update for atomic system:
 *    '<S154>/ClosedInterval1'
 *    '<S154>/ClosedInterval2'
 *    '<S205>/ClosedInterval1'
 *    '<S205>/ClosedInterval2'
 */
#if Rte_SysCon_Variant_ADIB_WED_Presence

static FUNC(void, ADIB_CODE_LOCAL) ADIB_ac_ClosedInterval1(VAR(float32,
    AUTOMATIC) rtu_VeADIB_ut_WED_Pwm_PosnSns1_, VAR(float32, AUTOMATIC) rtu_MN,
    VAR(float32, AUTOMATIC) rtu_MX, P2VAR(B_ClosedInterval1_ADIB_ac_T, AUTOMATIC,
    ADIB_VAR_INIT) localB)
{
    /* Logic: '<S156>/Logical Operator' incorporates:
     *  RelationalOperator: '<S156>/Relatonal Operator'
     *  RelationalOperator: '<S156>/Relatonal Operator1'
     */
    localB->LogicalOperator = ((rtu_VeADIB_ut_WED_Pwm_PosnSns1_ >= rtu_MN) &&
        (rtu_VeADIB_ut_WED_Pwm_PosnSns1_ <= rtu_MX));
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_ADIB_WED_Presence

FUNC(void, ADIB_CODE) ADIB_FastTEA(void) /* Explicit Task: FastTEA */
{

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean tmpRead;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean tmpRead_0;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean tmpRead_1;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean tmpRead_2;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    IDTRAdcInpResData tmpRead_3;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    IDTRAdcInpResData tmpRead_4;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    float32 tmpRead_5;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    float32 tmpRead_6;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    IDTCondPresence tmpRead_7;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    IDTCondPresence tmpRead_8;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    IDTCondPresence tmpRead_9;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    IDTCondPresence tmpRead_a;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    IDTCondPresence tmpRead_b;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    IDTCondPresence tmpRead_c;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    IDTCondPresence tmpRead_d;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    IDTCondPresence tmpRead_e;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    IDTCondPresence tmpRead_f;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    IDTCondPresence tmpRead_g;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    IDTCondPresence tmpRead_h;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    IDTCondPresence tmpRead_i;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    IDTCondPresence tmpRead_j;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    IDTCondPresence tmpRead_k;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    IDTCondPresence tmpRead_l;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    IDTCondPresence tmpRead_m;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean rtb_TmpSignalConversionAtVeA_cn;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    float32 rtb_Switch_a;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    float32 rtb_Unit_Delay_y;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean rtb_TmpSignalConversionAtVeADFB;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    float32 rtb_Switch[2];

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    float32 rtb_TmpSignalConversionAtVeDI_i;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    float32 rtb_TmpSignalConversionAtVeDI_e;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    float32 rtb_TmpSignalConversionAtVeDI_d;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    float32 rtb_TmpSignalConversionAtVeDI_m;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    float32 rtb_TmpSignalConversionAtVeDIOR;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    float32 rtb_TmpSignalConversionAtVeD_md;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    sint32 i;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    float32 Switch_j;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    float32 Switch_he[2];

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    float32 Switch_h[2];

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean LogicalOperator_g;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean LogicalOperator_h;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    uint8 tmp;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEA' */
    /* Outputs for Function Call SubSystem: '<Root>/ADIB_FastTEA' */
    /* SignalConversion generated from: '<S1>/VeDIOR_Pct_WED_Pwm_PosnSns1_PwmInp_DC' incorporates:
     *  Inport: '<Root>/VeDIOR_h_WheelEnd1EvADC_PWM_Inp_VeDIOR_Pct_PwmInp_DC'
     */
    (void)Rte_Read_VeDIOR_h_WheelEnd1EvADC_PWM_Inp_VeDIOR_Pct_PwmInp_DC
        (&rtb_TmpSignalConversionAtVeDIOR);

    /* SignalConversion generated from: '<S1>/VeDIOR_t_WED_Pwm_PosnSns1_PwmInp_PW' incorporates:
     *  Inport: '<Root>/VeDIOR_h_WheelEnd1EvADC_PWM_Inp_VeDIOR_t_PwmInp_PW'
     */
    (void)Rte_Read_VeDIOR_h_WheelEnd1EvADC_PWM_Inp_VeDIOR_t_PwmInp_PW
        (&rtb_TmpSignalConversionAtVeD_md);

    /* SignalConversion generated from: '<S1>/VeDIOR_t_WED_Pwm_PosnSns1_PwmInp_Prd' incorporates:
     *  Inport: '<Root>/VeDIOR_h_WheelEnd1EvADC_PWM_Inp_VeDIOR_t_PwmInp_Prd'
     */
    (void)Rte_Read_VeDIOR_h_WheelEnd1EvADC_PWM_Inp_VeDIOR_t_PwmInp_Prd
        (&rtb_TmpSignalConversionAtVeDI_e);

    /* SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns1_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns1_FA1'
     */
    rtb_TmpSignalConversionAtVeA_cn =
        Rte_IrvRead_ADIB_FastTEA_VeADIB_b_WED_Pwm_PosnSns1_FA1_IRV();

    /* SignalConversion generated from: '<S1>/VeDIOR_Pct_WED_Pwm_PosnSns2_PwmInp_DC' incorporates:
     *  Inport: '<Root>/VeDIOR_h_WheelEnd2EvADC_PWM_Inp_VeDIOR_Pct_PwmInp_DC'
     */
    (void)Rte_Read_VeDIOR_h_WheelEnd2EvADC_PWM_Inp_VeDIOR_Pct_PwmInp_DC
        (&rtb_TmpSignalConversionAtVeDI_d);

    /* SignalConversion generated from: '<S1>/VeDIOR_t_WED_Pwm_PosnSns2_PwmInp_PW' incorporates:
     *  Inport: '<Root>/VeDIOR_h_WheelEnd2EvADC_PWM_Inp_VeDIOR_t_PwmInp_PW'
     */
    (void)Rte_Read_VeDIOR_h_WheelEnd2EvADC_PWM_Inp_VeDIOR_t_PwmInp_PW
        (&rtb_TmpSignalConversionAtVeDI_m);

    /* SignalConversion generated from: '<S1>/VeDIOR_t_WED_Pwm_PosnSns2_PwmInp_Prd' incorporates:
     *  Inport: '<Root>/VeDIOR_h_WheelEnd2EvADC_PWM_Inp_VeDIOR_t_PwmInp_Prd'
     */
    (void)Rte_Read_VeDIOR_h_WheelEnd2EvADC_PWM_Inp_VeDIOR_t_PwmInp_Prd
        (&rtb_TmpSignalConversionAtVeDI_i);

    /* SignalConversion generated from: '<S1>/VeADFB_b_A2DFault' incorporates:
     *  Inport: '<Root>/VeADFB_b_A2DFault'
     */
    (void)Rte_Read_VeADFB_b_A2DFault_Value(&rtb_TmpSignalConversionAtVeADFB);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ADIB_FastTEA_StartCheckpoint'
     */
    /* FunctionCaller: '<S4>/ADIB_FastTEA_StartCheckpoint' */
    Rte_Call_ADIB_FastTEA_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* Outputs for Atomic SubSystem: '<S6>/WED_HBridgeFeedback' */
    /* Outputs for Atomic SubSystem: '<S10>/WED_HBridgeFeedback' */
    /* Switch: '<S145>/Switch' incorporates:
     *  UnitDelay: '<S132>/Unit_Delay_y'
     */
    rtb_Switch_a = ADIB_ac_DW.Unit_Delay_y_DSTATE;

    /* End of Outputs for SubSystem: '<S10>/WED_HBridgeFeedback' */
    /* End of Outputs for SubSystem: '<S6>/WED_HBridgeFeedback' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ADIB_FastTEA' */

    /* Inport: '<Root>/VeADCR_U_Motor1_VsADCR_e_CnvnRes' */
    /* Gateway: ADIB_FastTEA/Subsystem/WED_HBridgeFeedback/WED_HBridgeFeedback/WEDLT_H-BridgeFeedback/SigAcqnAndFilSys/AntiSpkFil */
    /* During: ADIB_FastTEA/Subsystem/WED_HBridgeFeedback/WED_HBridgeFeedback/WEDLT_H-BridgeFeedback/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_Motor1_VsADCR_e_CnvnRes(&tmpRead_3);

    /* Outputs for Function Call SubSystem: '<Root>/ADIB_FastTEA' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* Outputs for Atomic SubSystem: '<S6>/WED_HBridgeFeedback' */
    /* Outputs for Atomic SubSystem: '<S10>/WED_HBridgeFeedback' */
    /* Chart: '<S120>/AntiSpkFil' incorporates:
     *  Constant: '<S126>/KeADIB_Cnt_WEDHBSnsrCurLftSpikeThd'
     *  Constant: '<S127>/KeADIB_U_WEDHBSnsrCurLftSpikeThd'
     */
    if (((uint32)ADIB_ac_DW.is_active_c14_ADIB_ac) == 0U)
    {
        /* Entry: ADIB_FastTEA/Subsystem/WED_HBridgeFeedback/WED_HBridgeFeedback/WEDLT_H-BridgeFeedback/SigAcqnAndFilSys/AntiSpkFil */
        ADIB_ac_DW.is_active_c14_ADIB_ac = 1U;

        /* Entry Internal: ADIB_FastTEA/Subsystem/WED_HBridgeFeedback/WED_HBridgeFeedback/WEDLT_H-BridgeFeedback/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S125>:8' */
        ADIB_ac_DW.is_c14_ADIB_ac = ADIB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S125>:37' */
        ADIB_ac_B.InputRaw0_n = tmpRead_3.e_CnvnRes;
        VeADIB_U_WEDHBSnsrCurLftVoltRaw = tmpRead_3.e_CnvnRes;
    }
    else if (((uint32)ADIB_ac_DW.is_c14_ADIB_ac) == ADIB_ac_IN_FILTERING)
    {
        /* During 'FILTERING': '<S125>:38' */
        if (ADIB_ac_B.Cnt_c >= KeADIB_Cnt_WEDHBSnsrCurLftSpikeThd)
        {
            /* Transition: '<S125>:40' */
            ADIB_ac_DW.is_c14_ADIB_ac = ADIB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S125>:37' */
            ADIB_ac_B.InputRaw0_n = tmpRead_3.e_CnvnRes;
            VeADIB_U_WEDHBSnsrCurLftVoltRaw = tmpRead_3.e_CnvnRes;
        }
        else
        {
            ADIB_ac_B.Cnt_c++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S125>:37' */
        Switch_j = tmpRead_3.e_CnvnRes - ADIB_ac_B.InputRaw0_n;
        if ((Switch_j > KeADIB_U_WEDHBSnsrCurLftSpikeThd) || (Switch_j <
                (-KeADIB_U_WEDHBSnsrCurLftSpikeThd)))
        {
            /* Transition: '<S125>:39' */
            ADIB_ac_DW.is_c14_ADIB_ac = ADIB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S125>:38' */
            ADIB_ac_B.Cnt_c = 0.0F;
        }
        else
        {
            VeADIB_U_WEDHBSnsrCurLftVoltRaw = tmpRead_3.e_CnvnRes;
            ADIB_ac_B.InputRaw0_n = tmpRead_3.e_CnvnRes;
        }
    }

    /* End of Chart: '<S120>/AntiSpkFil' */

    /* Switch: '<S131>/Switch' incorporates:
     *  UnitDelay: '<S6>/Unit Delay'
     */
    if (ADIB_ac_DW.UnitDelay_DSTATE_g)
    {
        /* Assignment: '<S132>/Assignment_y' */
        VeADIB_U_WEDHBSnsrCurLftVolt = VeADIB_U_WEDHBSnsrCurLftVoltRaw;
    }
    else
    {
        /* Assignment: '<S132>/Assignment_y' incorporates:
         *  Constant: '<S128>/KeADIB_k_WEDHBSnsrCurLftFiltGx'
         *  Product: '<S131>/Product'
         *  Selector: '<S130>/Selector_u'
         *  Selector: '<S130>/Selector_x'
         *  Sum: '<S131>/Difference'
         *  Sum: '<S131>/Sum'
         *  Switch: '<S131>/Switch_E'
         */
        VeADIB_U_WEDHBSnsrCurLftVolt = ((VeADIB_U_WEDHBSnsrCurLftVoltRaw -
            rtb_Switch_a) * KeADIB_k_WEDHBSnsrCurLftFiltGx) + rtb_Switch_a;
    }

    /* End of Switch: '<S131>/Switch' */

    /* Switch: '<S122>/Switch' incorporates:
     *  Constant: '<S124>/KeADIB_b_WEDHBCurLftBypEnbl'
     */
    if (KeADIB_b_WEDHBCurLftBypEnbl)
    {
        /* Switch: '<S122>/Switch' incorporates:
         *  Constant: '<S123>/KeADIB_I_WEDHBCurLftByp'
         */
        rtb_Switch_a = KeADIB_I_WEDHBCurLftByp;
    }
    else
    {
        /* Switch: '<S122>/Switch' incorporates:
         *  Assignment: '<S132>/Assignment_y'
         *  Lookup_n-D: '<S121>/Vector'
         */
        rtb_Switch_a = look1_iflf_binlcapw(VeADIB_U_WEDHBSnsrCurLftVolt, ((const
            float32 *)&(KxADIB_U_WEDHBSnsrCurLftChartc[0])), ((const float32 *)
            &(KtADIB_I_WEDHBSnsrCurLftChartc[0])), 23U);
    }

    /* End of Switch: '<S122>/Switch' */

    /* Logic: '<S117>/Logical Operator' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_b_LtWED_FA'
     *  SignalConversion generated from: '<S2>/VeADIB_b_LtWED_FA'
     */
    LogicalOperator_g = ((Rte_IrvRead_ADIB_FastTEA_VeADIB_b_LtWED_FA_IRV()) ||
                         rtb_TmpSignalConversionAtVeADFB);

    /* UnitDelay: '<S146>/Unit_Delay_y' */
    rtb_Unit_Delay_y = ADIB_ac_DW.Unit_Delay_y_DSTATE_j;

    /* End of Outputs for SubSystem: '<S10>/WED_HBridgeFeedback' */
    /* End of Outputs for SubSystem: '<S6>/WED_HBridgeFeedback' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ADIB_FastTEA' */

    /* Inport: '<Root>/VeADCR_U_Motor2_VsADCR_e_CnvnRes' */
    /* Gateway: ADIB_FastTEA/Subsystem/WED_HBridgeFeedback/WED_HBridgeFeedback/WEDRT_H-BridgeFeedback/SigAcqnAndFilSys/AntiSpkFil */
    /* During: ADIB_FastTEA/Subsystem/WED_HBridgeFeedback/WED_HBridgeFeedback/WEDRT_H-BridgeFeedback/SigAcqnAndFilSys/AntiSpkFil */
    (void)Rte_Read_VeADCR_U_Motor2_VsADCR_e_CnvnRes(&tmpRead_4);

    /* Outputs for Function Call SubSystem: '<Root>/ADIB_FastTEA' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* Outputs for Atomic SubSystem: '<S6>/WED_HBridgeFeedback' */
    /* Outputs for Atomic SubSystem: '<S10>/WED_HBridgeFeedback' */
    /* Chart: '<S134>/AntiSpkFil' incorporates:
     *  Constant: '<S140>/KeADIB_Cnt_WEDHBSnsrCurRgtSpikeThd'
     *  Constant: '<S141>/KeADIB_U_WEDHBSnsrCurRgtSpikeThd'
     */
    if (((uint32)ADIB_ac_DW.is_active_c1_ADIB_ac) == 0U)
    {
        /* Entry: ADIB_FastTEA/Subsystem/WED_HBridgeFeedback/WED_HBridgeFeedback/WEDRT_H-BridgeFeedback/SigAcqnAndFilSys/AntiSpkFil */
        ADIB_ac_DW.is_active_c1_ADIB_ac = 1U;

        /* Entry Internal: ADIB_FastTEA/Subsystem/WED_HBridgeFeedback/WED_HBridgeFeedback/WEDRT_H-BridgeFeedback/SigAcqnAndFilSys/AntiSpkFil */
        /* Transition: '<S139>:8' */
        ADIB_ac_DW.is_c1_ADIB_ac = ADIB_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S139>:37' */
        ADIB_ac_B.InputRaw0 = tmpRead_4.e_CnvnRes;
        VeADIB_U_WEDHBSnsrCurRgtVoltRaw = tmpRead_4.e_CnvnRes;
    }
    else if (((uint32)ADIB_ac_DW.is_c1_ADIB_ac) == ADIB_ac_IN_FILTERING)
    {
        /* During 'FILTERING': '<S139>:38' */
        if (ADIB_ac_B.Cnt >= KeADIB_Cnt_WEDHBSnsrCurRgtSpikeThd)
        {
            /* Transition: '<S139>:40' */
            ADIB_ac_DW.is_c1_ADIB_ac = ADIB_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S139>:37' */
            ADIB_ac_B.InputRaw0 = tmpRead_4.e_CnvnRes;
            VeADIB_U_WEDHBSnsrCurRgtVoltRaw = tmpRead_4.e_CnvnRes;
        }
        else
        {
            ADIB_ac_B.Cnt++;
        }
    }
    else
    {
        /* During 'NORMAL': '<S139>:37' */
        Switch_j = tmpRead_4.e_CnvnRes - ADIB_ac_B.InputRaw0;
        if ((Switch_j > KeADIB_U_WEDHBSnsrCurRgtSpikeThd) || (Switch_j <
                (-KeADIB_U_WEDHBSnsrCurRgtSpikeThd)))
        {
            /* Transition: '<S139>:39' */
            ADIB_ac_DW.is_c1_ADIB_ac = ADIB_ac_IN_FILTERING;

            /* Entry 'FILTERING': '<S139>:38' */
            ADIB_ac_B.Cnt = 0.0F;
        }
        else
        {
            VeADIB_U_WEDHBSnsrCurRgtVoltRaw = tmpRead_4.e_CnvnRes;
            ADIB_ac_B.InputRaw0 = tmpRead_4.e_CnvnRes;
        }
    }

    /* End of Chart: '<S134>/AntiSpkFil' */

    /* Switch: '<S145>/Switch' incorporates:
     *  UnitDelay: '<S6>/Unit Delay'
     */
    if (ADIB_ac_DW.UnitDelay_DSTATE_g)
    {
        /* Assignment: '<S146>/Assignment_y' */
        VeADIB_U_WEDHBSnsrCurRgtVolt = VeADIB_U_WEDHBSnsrCurRgtVoltRaw;
    }
    else
    {
        /* Assignment: '<S146>/Assignment_y' incorporates:
         *  Constant: '<S142>/KeADIB_k_WEDHBSnsrCurRgtFiltGx'
         *  Product: '<S145>/Product'
         *  Selector: '<S144>/Selector_u'
         *  Selector: '<S144>/Selector_x'
         *  Sum: '<S145>/Difference'
         *  Sum: '<S145>/Sum'
         *  Switch: '<S145>/Switch_E'
         */
        VeADIB_U_WEDHBSnsrCurRgtVolt = ((VeADIB_U_WEDHBSnsrCurRgtVoltRaw -
            rtb_Unit_Delay_y) * KeADIB_k_WEDHBSnsrCurRgtFiltGx) +
            rtb_Unit_Delay_y;
    }

    /* End of Switch: '<S145>/Switch' */

    /* Switch: '<S136>/Switch' incorporates:
     *  Constant: '<S138>/KeADIB_b_WEDHBCurRgtBypEnbl'
     */
    if (KeADIB_b_WEDHBCurRgtBypEnbl)
    {
        /* Switch: '<S136>/Switch' incorporates:
         *  Constant: '<S137>/KeADIB_b_WEDHBCurRgtByp'
         */
        Switch_j = KeADIB_I_WEDHBCurLftByp;
    }
    else
    {
        /* Switch: '<S136>/Switch' incorporates:
         *  Assignment: '<S146>/Assignment_y'
         *  Lookup_n-D: '<S135>/Vector'
         */
        Switch_j = look1_iflf_binlcapw(VeADIB_U_WEDHBSnsrCurRgtVolt, ((const
            float32 *)&(KxADIB_U_WEDHBSnsrCurRgtChartc[0])), ((const float32 *)
            &(KtADIB_I_WEDHBSnsrCurRgtChartc[0])), 23U);
    }

    /* End of Switch: '<S136>/Switch' */

    /* Logic: '<S118>/Logical Operator' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_b_RtWED_FA'
     *  SignalConversion generated from: '<S2>/VeADIB_b_RtWED_FA'
     */
    LogicalOperator_h = ((Rte_IrvRead_ADIB_FastTEA_VeADIB_b_RtWED_FA_IRV()) ||
                         rtb_TmpSignalConversionAtVeADFB);

    /* Update for UnitDelay: '<S132>/Unit_Delay_y' */
    ADIB_ac_DW.Unit_Delay_y_DSTATE = VeADIB_U_WEDHBSnsrCurLftVolt;

    /* Update for UnitDelay: '<S146>/Unit_Delay_y' */
    ADIB_ac_DW.Unit_Delay_y_DSTATE_j = VeADIB_U_WEDHBSnsrCurRgtVolt;

    /* End of Outputs for SubSystem: '<S10>/WED_HBridgeFeedback' */
    /* End of Outputs for SubSystem: '<S6>/WED_HBridgeFeedback' */

    /* Outputs for Atomic SubSystem: '<S6>/WEDPwmPositionSense2' */
    /* Outputs for Atomic SubSystem: '<S8>/WEDPwmPositionSense2' */
    /* Logic: '<S45>/AND' incorporates:
     *  Constant: '<S49>/VeADIB_Pct_WED_Pwm_PosnSns2_DCRcvryEnbl'
     *  SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns2_FA'
     *  SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns2_FA1'
     */
    rtb_TmpSignalConversionAtVeADFB = ((KeADIB_b_WED_Pwm_PosnSns2_DCRcvryEnbl) &&
        (Rte_IrvRead_ADIB_FastTEA_VeADIB_b_WED_Pwm_PosnSns2_FA1_IRV()));

    /* Switch: '<S60>/Switch' incorporates:
     *  Constant: '<S42>/KeADIB_b_WED_Pwm_PosnSns2PolarInvEnb'
     *  Constant: '<S51>/KeADIB_b_WED_Pwm_PosnSns2_DC_BypEnbl'
     *  Switch: '<S65>/Switch'
     */
    if (KeADIB_b_WED_Pwm_PosnSns2_DC_BypEnbl)
    {
        /* Switch: '<S60>/Switch' incorporates:
         *  Constant: '<S50>/KeADIB_Pct_WED_Pwm_PosnSns2_DC_Byp'
         */
        rtb_TmpSignalConversionAtVeDI_d = KeADIB_Pct_WED_Pwm_PosnSns2_DC_Byp;
    }
    else
    {
        if (KeADIB_b_WED_Pwm_PosnSns2PolarInvEnb)
        {
            /* Switch: '<S60>/Switch' incorporates:
             *  Constant: '<S44>/Constant'
             *  Sum: '<S44>/Add'
             *  Switch: '<S65>/Switch'
             */
            rtb_TmpSignalConversionAtVeDI_d = 100.0F -
                rtb_TmpSignalConversionAtVeDI_d;
        }
    }

    /* End of Switch: '<S60>/Switch' */

    /* Lookup_n-D: '<S47>/Vector' incorporates:
     *  Switch: '<S122>/Switch'
     *  Switch: '<S60>/Switch'
     */
    ADIB_ac_B.Vector_h = look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeDI_d,
        rtb_Switch_a, ((const float32 *)&(KxADIB_Pct_WEDPosSns2RoughChartc[0])),
        ((const float32 *)&(KyADIB_I_WEDLeftCurrActChartc[0])), ((const float32 *)
        &(KtADIB_Pct_WEDPosnSns2Chartc[0])), ADIB_ac_ConstP.pooled3, 6U);

    /* Switch: '<S46>/Switch' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns2_FualtCriteria'
     *  SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns2_FualtCriteria'
     */
    if (Rte_IrvRead_ADIB_FastTEA_VeADIB_b_WED_Pwm_PosnSns2_FualtCriteria_IRV())
    {
        /* Switch: '<S46>/Switch' incorporates:
         *  UnitDelay: '<S41>/VeADIB_Pct_WED_Pwm_PosnSns2_Init'
         */
        rtb_Switch[0] = ADIB_ac_DW.VeADIB_Pct_WED_Pwm_PosnSns2_Ini[0];
        rtb_Switch[1] = ADIB_ac_DW.VeADIB_Pct_WED_Pwm_PosnSns2_Ini[1];
    }
    else
    {
        /* Switch: '<S46>/Switch' */
        rtb_Switch[0] = rtb_TmpSignalConversionAtVeDI_d;
        rtb_Switch[1] = ADIB_ac_B.Vector_h;
    }

    /* End of Switch: '<S46>/Switch' */
    for (i = 0; i < 2; i++)
    {
        /* Switch: '<S45>/Switch' */
        if (rtb_TmpSignalConversionAtVeADFB)
        {
            /* Switch: '<S45>/Switch' incorporates:
             *  Constant: '<S48>/VeADIB_Pct_WED_Pwm_PosnSns2_DCRcvry'
             */
            Switch_h[i] = KeADIB_Pct_WED_Pwm_PosnSns2_DCRcvry;
        }
        else
        {
            /* Switch: '<S45>/Switch' */
            Switch_h[i] = rtb_Switch[i];
        }

        /* End of Switch: '<S45>/Switch' */
    }

    /* Switch: '<S61>/Switch' incorporates:
     *  Constant: '<S55>/KeADIB_b_WED_Pwm_PosnSns2_Prd_BypEnbl'
     */
    if (KeADIB_b_WED_Pwm_PosnSns2_Prd_BypEnbl)
    {
        /* Switch: '<S61>/Switch' incorporates:
         *  Constant: '<S59>/KeADIB_ut_WED_Pwm_PosnSns2_Prd_Byp'
         */
        ADIB_ac_B.VeADIB_ut_WED_Pwm_PosnSns2_Prd =
            KeADIB_ut_WED_Pwm_PosnSns2_Prd_Byp;
    }
    else
    {
        /* Switch: '<S61>/Switch' */
        ADIB_ac_B.VeADIB_ut_WED_Pwm_PosnSns2_Prd =
            rtb_TmpSignalConversionAtVeDI_i;
    }

    /* End of Switch: '<S61>/Switch' */
    /* End of Outputs for SubSystem: '<S8>/WEDPwmPositionSense2' */
    /* End of Outputs for SubSystem: '<S6>/WEDPwmPositionSense2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ADIB_FastTEA' */

    /* Inport: '<Root>/VeDIOR_h_WheelEnd2EvADC_PWM_Inp_VeDIOR_b_PwmInp_TiOutSts' */
    (void)Rte_Read_VeDIOR_h_WheelEnd2EvADC_PWM_Inp_VeDIOR_b_PwmInp_TiOutSts
        (&tmpRead_2);

    /* Inport: '<Root>/VeDIOR_h_WheelEnd2EvADC_PWM_Inp_VeDIOR_b_IsPinHi' */
    (void)Rte_Read_VeDIOR_h_WheelEnd2EvADC_PWM_Inp_VeDIOR_b_IsPinHi(&tmpRead_1);

    /* Outputs for Function Call SubSystem: '<Root>/ADIB_FastTEA' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* Outputs for Atomic SubSystem: '<S6>/WEDPwmPositionSense2' */
    /* Outputs for Atomic SubSystem: '<S8>/WEDPwmPositionSense2' */
    /* Switch: '<S63>/Switch' incorporates:
     *  Constant: '<S57>/KeADIB_b_WED_Pwm_PosnSns2_TiOut_BypEnbl'
     */
    if (KeADIB_b_WED_Pwm_PosnSns2_TiOut_BypEnbl)
    {
        /* Switch: '<S63>/Switch' incorporates:
         *  Constant: '<S56>/KeADIB_b_WED_Pwm_PosnSns2_TiOut_Byp'
         */
        ADIB_ac_B.VeADIB_b_WED_Pwm_PosnSns2_TiOut =
            KeADIB_b_WED_Pwm_PosnSns2_TiOut_Byp;
    }
    else
    {
        /* Switch: '<S63>/Switch' */
        ADIB_ac_B.VeADIB_b_WED_Pwm_PosnSns2_TiOut = tmpRead_2;
    }

    /* End of Switch: '<S63>/Switch' */

    /* Switch: '<S64>/Switch' incorporates:
     *  Constant: '<S53>/KeADIB_b_WED_Pwm_PosnSns2_IsPinHi_BypEnbl'
     */
    if (KeADIB_b_WED_Pwm_PosnSns2_IsPinHi_BypEnbl)
    {
        /* Switch: '<S64>/Switch' incorporates:
         *  Constant: '<S52>/KeADIB_b_WED_Pwm_PosnSns2_IsPinHi_Byp'
         */
        ADIB_ac_B.VeADIB_b_WED_Pwm_PosnSns2_IsPin =
            KeADIB_b_WED_Pwm_PosnSns2_IsPinHi_Byp;
    }
    else
    {
        /* Switch: '<S64>/Switch' */
        ADIB_ac_B.VeADIB_b_WED_Pwm_PosnSns2_IsPin = tmpRead_1;
    }

    /* End of Switch: '<S64>/Switch' */

    /* Update for UnitDelay: '<S41>/VeADIB_Pct_WED_Pwm_PosnSns2_Init' */
    for (i = 0; i < 2; i++)
    {
        ADIB_ac_DW.VeADIB_Pct_WED_Pwm_PosnSns2_Ini[i] = rtb_Switch[i];
    }

    /* End of Update for UnitDelay: '<S41>/VeADIB_Pct_WED_Pwm_PosnSns2_Init' */
    /* End of Outputs for SubSystem: '<S8>/WEDPwmPositionSense2' */
    /* End of Outputs for SubSystem: '<S6>/WEDPwmPositionSense2' */

    /* Outputs for Atomic SubSystem: '<S6>/WEDPwmPositionSense1' */
    /* Outputs for Atomic SubSystem: '<S7>/WEDPwmPositionSense1' */
    /* Logic: '<S13>/OR' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns1_FualtCriteria'
     *  SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns1_FaultCriteria'
     */
    rtb_TmpSignalConversionAtVeADFB =
        ((Rte_IrvRead_ADIB_FastTEA_VeADIB_b_WED_Pwm_PosnSns1_FaultCriteria_IRV())
         || rtb_TmpSignalConversionAtVeA_cn);

    /* Logic: '<S17>/AND' incorporates:
     *  Constant: '<S21>/KeADIB_b_WED_Pwm_PosnSns1_DCRcvryEnbl'
     */
    rtb_TmpSignalConversionAtVeA_cn = ((KeADIB_b_WED_Pwm_PosnSns1_DCRcvryEnbl) &&
        rtb_TmpSignalConversionAtVeA_cn);

    /* Switch: '<S32>/Switch' incorporates:
     *  Constant: '<S14>/KeADIB_b_WED_Pwm_PosnSns1PolarInvEnb'
     *  Constant: '<S23>/KeADIB_b_WED_Pwm_PosnSns1_DC_BypEnbl'
     *  Switch: '<S37>/Switch'
     */
    if (KeADIB_b_WED_Pwm_PosnSns1_DC_BypEnbl)
    {
        /* Switch: '<S32>/Switch' incorporates:
         *  Constant: '<S22>/KeADIB_Pct_WED_Pwm_PosnSns1_DC_Byp'
         */
        rtb_TmpSignalConversionAtVeDIOR = KeADIB_Pct_WED_Pwm_PosnSns1_DC_Byp;
    }
    else
    {
        if (KeADIB_b_WED_Pwm_PosnSns1PolarInvEnb)
        {
            /* Switch: '<S32>/Switch' incorporates:
             *  Constant: '<S16>/Constant'
             *  Sum: '<S16>/Add'
             *  Switch: '<S37>/Switch'
             */
            rtb_TmpSignalConversionAtVeDIOR = 100.0F -
                rtb_TmpSignalConversionAtVeDIOR;
        }
    }

    /* End of Switch: '<S32>/Switch' */

    /* Lookup_n-D: '<S19>/Vector' incorporates:
     *  Switch: '<S136>/Switch'
     *  Switch: '<S32>/Switch'
     */
    ADIB_ac_B.Vector_e = look2_iflf_binlcapw(rtb_TmpSignalConversionAtVeDIOR,
        Switch_j, ((const float32 *)&(KxADIB_Pct_WEDPosSns1RoughChartc[0])), ((
        const float32 *)&(KyADIB_I_WEDRightCurrActChartc[0])), ((const float32 *)
        &(KtADIB_Pct_WEDPosnSns1Chartc[0])), ADIB_ac_ConstP.pooled3, 6U);

    /* Switch: '<S18>/Switch' */
    if (rtb_TmpSignalConversionAtVeADFB)
    {
        /* Switch: '<S18>/Switch' incorporates:
         *  UnitDelay: '<S13>/VeADIB_Pct_WED_Pwm_PosnSns1_Init'
         */
        rtb_Switch[0] = ADIB_ac_DW.VeADIB_Pct_WED_Pwm_PosnSns1_Ini[0];
        rtb_Switch[1] = ADIB_ac_DW.VeADIB_Pct_WED_Pwm_PosnSns1_Ini[1];
    }
    else
    {
        /* Switch: '<S18>/Switch' */
        rtb_Switch[0] = rtb_TmpSignalConversionAtVeDIOR;
        rtb_Switch[1] = ADIB_ac_B.Vector_e;
    }

    /* End of Switch: '<S18>/Switch' */
    for (i = 0; i < 2; i++)
    {
        /* Switch: '<S17>/Switch' */
        if (rtb_TmpSignalConversionAtVeA_cn)
        {
            /* Switch: '<S17>/Switch' incorporates:
             *  Constant: '<S20>/KeADIB_Pct_WED_Pwm_PosnSns1_DCRcvry'
             */
            Switch_he[i] = KeADIB_Pct_WED_Pwm_PosnSns1_DCRcvry;
        }
        else
        {
            /* Switch: '<S17>/Switch' */
            Switch_he[i] = rtb_Switch[i];
        }

        /* End of Switch: '<S17>/Switch' */
    }

    /* Switch: '<S33>/Switch' incorporates:
     *  Constant: '<S27>/KeADIB_b_WED_Pwm_PosnSns1_Prd_BypEnbl'
     */
    if (KeADIB_b_WED_Pwm_PosnSns1_Prd_BypEnbl)
    {
        /* Switch: '<S33>/Switch' incorporates:
         *  Constant: '<S31>/KeADIB_ut_WED_Pwm_PosnSns1_Prd_Byp'
         */
        ADIB_ac_B.Switch_a = KeADIB_ut_WED_Pwm_PosnSns1_Prd_Byp;
    }
    else
    {
        /* Switch: '<S33>/Switch' */
        ADIB_ac_B.Switch_a = rtb_TmpSignalConversionAtVeDI_e;
    }

    /* End of Switch: '<S33>/Switch' */
    /* End of Outputs for SubSystem: '<S7>/WEDPwmPositionSense1' */
    /* End of Outputs for SubSystem: '<S6>/WEDPwmPositionSense1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ADIB_FastTEA' */

    /* Inport: '<Root>/VeDIOR_h_WheelEnd1EvADC_PWM_Inp_VeDIOR_b_PwmInp_TiOutSts' */
    (void)Rte_Read_VeDIOR_h_WheelEnd1EvADC_PWM_Inp_VeDIOR_b_PwmInp_TiOutSts
        (&tmpRead_0);

    /* Inport: '<Root>/VeDIOR_h_WheelEnd1EvADC_PWM_Inp_VeDIOR_b_IsPinHi' */
    (void)Rte_Read_VeDIOR_h_WheelEnd1EvADC_PWM_Inp_VeDIOR_b_IsPinHi(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/ADIB_FastTEA' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* Outputs for Atomic SubSystem: '<S6>/WEDPwmPositionSense1' */
    /* Outputs for Atomic SubSystem: '<S7>/WEDPwmPositionSense1' */
    /* Switch: '<S35>/Switch' incorporates:
     *  Constant: '<S29>/KeADIB_b_WED_Pwm_PosnSns1_TiOut_BypEnbl'
     */
    if (KeADIB_b_WED_Pwm_PosnSns1_TiOut_BypEnbl)
    {
        /* Switch: '<S35>/Switch' incorporates:
         *  Constant: '<S28>/KeADIB_b_WED_Pwm_PosnSns1_TiOut_Byp'
         */
        ADIB_ac_B.Switch_c = KeADIB_b_WED_Pwm_PosnSns1_TiOut_Byp;
    }
    else
    {
        /* Switch: '<S35>/Switch' */
        ADIB_ac_B.Switch_c = tmpRead_0;
    }

    /* End of Switch: '<S35>/Switch' */

    /* Switch: '<S36>/Switch' incorporates:
     *  Constant: '<S25>/KeADIB_b_WED_Pwm_PosnSns1_IsPinHi_BypEnbl'
     */
    if (KeADIB_b_WED_Pwm_PosnSns1_IsPinHi_BypEnbl)
    {
        /* Switch: '<S36>/Switch' incorporates:
         *  Constant: '<S24>/KeADIB_b_WED_Pwm_PosnSns1_IsPinHi_Byp'
         */
        ADIB_ac_B.Switch_m = KeADIB_b_WED_Pwm_PosnSns1_IsPinHi_Byp;
    }
    else
    {
        /* Switch: '<S36>/Switch' */
        ADIB_ac_B.Switch_m = tmpRead;
    }

    /* End of Switch: '<S36>/Switch' */

    /* Update for UnitDelay: '<S13>/VeADIB_Pct_WED_Pwm_PosnSns1_Init' */
    for (i = 0; i < 2; i++)
    {
        ADIB_ac_DW.VeADIB_Pct_WED_Pwm_PosnSns1_Ini[i] = rtb_Switch[i];
    }

    /* End of Update for UnitDelay: '<S13>/VeADIB_Pct_WED_Pwm_PosnSns1_Init' */
    /* End of Outputs for SubSystem: '<S7>/WEDPwmPositionSense1' */
    /* End of Outputs for SubSystem: '<S6>/WEDPwmPositionSense1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ADIB_FastTEA' */

    /* Inport: '<Root>/VeDIOR_b_Hbrdg_LWEDDiagFltOutp_DrvrUndrVoltDtctd' */
    (void)Rte_Read_VeDIOR_b_Hbrdg_LWEDDiagFltOutp_DrvrUndrVoltDtctd(&tmpRead_m);

    /* Inport: '<Root>/VeDIOR_b_Hbrdg_RWEDDiagFltOutp_DrvrUndrVoltDtctd' */
    (void)Rte_Read_VeDIOR_b_Hbrdg_RWEDDiagFltOutp_DrvrUndrVoltDtctd(&tmpRead_l);

    /* Inport: '<Root>/VeDIOR_b_Hbrdg_RWEDDiagFltOutp_DrvrOvrVoltDtctd' */
    (void)Rte_Read_VeDIOR_b_Hbrdg_RWEDDiagFltOutp_DrvrOvrVoltDtctd(&tmpRead_k);

    /* Inport: '<Root>/VeDIOR_b_Hbrdg_RWEDDiagFltOutp_DrvrOvrTempDtctd' */
    (void)Rte_Read_VeDIOR_b_Hbrdg_RWEDDiagFltOutp_DrvrOvrTempDtctd(&tmpRead_j);

    /* Inport: '<Root>/VeDIOR_b_Hbrdg_RWEDDiagFltOutp_DrvrOvrTempWarn' */
    (void)Rte_Read_VeDIOR_b_Hbrdg_RWEDDiagFltOutp_DrvrOvrTempWarn(&tmpRead_i);

    /* Inport: '<Root>/VeDIOR_b_Hbrdg_RWEDDiagFltCircDtctd_ShoLoad' */
    (void)Rte_Read_VeDIOR_b_Hbrdg_RWEDDiagFltCircDtctd_ShoLoad(&tmpRead_h);

    /* Inport: '<Root>/VeDIOR_b_Hbrdg_LWEDDiagFltOutp_DrvrOvrVoltDtctd' */
    (void)Rte_Read_VeDIOR_b_Hbrdg_LWEDDiagFltOutp_DrvrOvrVoltDtctd(&tmpRead_g);

    /* Inport: '<Root>/VeDIOR_b_Hbrdg_LWEDDiagFltOutp_DrvrOvrTempDtctd' */
    (void)Rte_Read_VeDIOR_b_Hbrdg_LWEDDiagFltOutp_DrvrOvrTempDtctd(&tmpRead_f);

    /* Inport: '<Root>/VeDIOR_b_Hbrdg_LWEDDiagFltOutp_DrvrOvrTempWarn' */
    (void)Rte_Read_VeDIOR_b_Hbrdg_LWEDDiagFltOutp_DrvrOvrTempWarn(&tmpRead_e);

    /* Inport: '<Root>/VeDIOR_b_Hbrdg_LWEDDiagFltCircDtctd_ShoLoad' */
    (void)Rte_Read_VeDIOR_b_Hbrdg_LWEDDiagFltCircDtctd_ShoLoad(&tmpRead_d);

    /* Inport: '<Root>/VeDIOR_b_Hbrdg_RWEDDiagFltCircDtctd_CircOpen' */
    (void)Rte_Read_VeDIOR_b_Hbrdg_RWEDDiagFltCircDtctd_CircOpen(&tmpRead_c);

    /* Inport: '<Root>/VeDIOR_b_Hbrdg_LWEDDiagFltCircDtctd_CircOpen' */
    (void)Rte_Read_VeDIOR_b_Hbrdg_LWEDDiagFltCircDtctd_CircOpen(&tmpRead_b);

    /* Inport: '<Root>/VeDIOR_b_Hbrdg_RWEDDiagFltCircDtctd_CircShoHi' */
    (void)Rte_Read_VeDIOR_b_Hbrdg_RWEDDiagFltCircDtctd_CircShoHi(&tmpRead_a);

    /* Inport: '<Root>/VeDIOR_b_Hbrdg_RWEDDiagFltCircDtctd_CircShoLo' */
    (void)Rte_Read_VeDIOR_b_Hbrdg_RWEDDiagFltCircDtctd_CircShoLo(&tmpRead_9);

    /* Inport: '<Root>/VeDIOR_b_Hbrdg_LWEDDiagFltCircDtctd_CircShoHi' */
    (void)Rte_Read_VeDIOR_b_Hbrdg_LWEDDiagFltCircDtctd_CircShoHi(&tmpRead_8);

    /* Inport: '<Root>/VeDIOR_b_Hbrdg_LWEDDiagFltCircDtctd_CircShoLo' */
    (void)Rte_Read_VeDIOR_b_Hbrdg_LWEDDiagFltCircDtctd_CircShoLo(&tmpRead_7);

    /* Inport: '<Root>/VeADAR_DC_LeftSlndPWMCmd' */
    (void)Rte_Read_VeADAR_DC_LeftSlndPWMCmd_Value(&tmpRead_6);

    /* Inport: '<Root>/VeADAR_DC_RightSlndPWMCmd' */
    (void)Rte_Read_VeADAR_DC_RightSlndPWMCmd_Value(&tmpRead_5);

    /* Outputs for Function Call SubSystem: '<Root>/ADIB_FastTEA' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* Outputs for Atomic SubSystem: '<S6>/WED_Command' */
    /* Outputs for Atomic SubSystem: '<S9>/WED_Command' */
    /* Switch: '<S73>/Switch1' incorporates:
     *  Constant: '<S76>/Calib'
     *  Constant: '<S83>/Calib'
     */
    if (KeADIB_b_WEDLtCircLoBypEnbl)
    {
        tmp = KeADIB_y_WEDLtCircLoByp;
    }
    else
    {
        tmp = tmpRead_7.CircShoLo;
    }

    /* Outport: '<Root>/VeADIB_y_WEDLtCircLo' incorporates:
     *  Switch: '<S73>/Switch1'
     */
    (void)Rte_Write_VeADIB_y_WEDLtCircLo_Value(tmp);

    /* Switch: '<S73>/Switch2' incorporates:
     *  Constant: '<S75>/Calib'
     *  Constant: '<S84>/Calib'
     */
    if (KeADIB_b_WEDLtCircHiBypEnbl)
    {
        tmp = KeADIB_y_WEDLtCircHiByp;
    }
    else
    {
        tmp = tmpRead_8.CircShoHi;
    }

    /* Outport: '<Root>/VeADIB_y_WEDLtCircHi' incorporates:
     *  Switch: '<S73>/Switch2'
     */
    (void)Rte_Write_VeADIB_y_WEDLtCircHi_Value(tmp);

    /* Switch: '<S73>/Switch3' incorporates:
     *  Constant: '<S77>/Calib'
     *  Constant: '<S85>/Calib'
     */
    if (KeADIB_b_WEDLtCircOpenBypEnbl)
    {
        tmp = KeADIB_y_WEDLtCircOpenByp;
    }
    else
    {
        tmp = tmpRead_b.CircOpen;
    }

    /* Outport: '<Root>/VeADIB_y_WEDLtCircOpen' incorporates:
     *  Switch: '<S73>/Switch3'
     */
    (void)Rte_Write_VeADIB_y_WEDLtCircOpen_Value(tmp);

    /* Switch: '<S73>/Switch4' incorporates:
     *  Constant: '<S82>/Calib'
     *  Constant: '<S90>/Calib'
     */
    if (KeADIB_b_WEDLtShoLoadBypEnbl)
    {
        tmp = KeADIB_y_WEDLtShoLoadByp;
    }
    else
    {
        tmp = tmpRead_d.ShoLoad;
    }

    /* Outport: '<Root>/VeADIB_y_WEDLtShoLoad' incorporates:
     *  Switch: '<S73>/Switch4'
     */
    (void)Rte_Write_VeADIB_y_WEDLtShoLoad_Value(tmp);

    /* Switch: '<S73>/Switch9' incorporates:
     *  Constant: '<S79>/Calib'
     *  Constant: '<S87>/Calib'
     */
    if (KeADIB_b_WEDLtDrvrOvrTempWarnBypEnbl)
    {
        tmp = KeADIB_y_WEDLtDrvrOvrTempWarnByp;
    }
    else
    {
        tmp = tmpRead_e.DrvrOvrTempWarn;
    }

    /* Outport: '<Root>/VeADIB_y_WEDLtDrvrOvrTempWarn' incorporates:
     *  Switch: '<S73>/Switch9'
     */
    (void)Rte_Write_VeADIB_y_WEDLtDrvrOvrTempWarn_Value(tmp);

    /* Switch: '<S73>/Switch10' incorporates:
     *  Constant: '<S78>/Calib'
     *  Constant: '<S86>/Calib'
     */
    if (KeADIB_b_WEDLtDrvrOvrTempBypEnbl)
    {
        tmp = KeADIB_y_WEDLtDrvrOvrTempByp;
    }
    else
    {
        tmp = tmpRead_f.DrvrOvrTempDtctd;
    }

    /* Outport: '<Root>/VeADIB_y_WEDLtDrvrOvrTemp' incorporates:
     *  Switch: '<S73>/Switch10'
     */
    (void)Rte_Write_VeADIB_y_WEDLtDrvrOvrTemp_Value(tmp);

    /* Switch: '<S73>/Switch11' incorporates:
     *  Constant: '<S80>/Calib'
     *  Constant: '<S88>/Calib'
     */
    if (KeADIB_b_WEDLtDrvrOvrVoltBypEnbl)
    {
        tmp = KeADIB_y_WEDLtDrvrOvrVoltByp;
    }
    else
    {
        tmp = tmpRead_g.DrvrOvrVoltDtctd;
    }

    /* Outport: '<Root>/VeADIB_y_WEDLtDrvrOvrVolt' incorporates:
     *  Switch: '<S73>/Switch11'
     */
    (void)Rte_Write_VeADIB_y_WEDLtDrvrOvrVolt_Value(tmp);

    /* Switch: '<S73>/Switch12' incorporates:
     *  Constant: '<S81>/Calib'
     *  Constant: '<S89>/Calib'
     */
    if (KeADIB_b_WEDLtDrvrUndrVoltBypEnbl)
    {
        tmp = KeADIB_y_WEDLtDrvrUndrVoltByp;
    }
    else
    {
        tmp = tmpRead_m.DrvrUndrVoltDtctd;
    }

    /* Outport: '<Root>/VeADIB_y_WEDLtDrvrUndrVolt' incorporates:
     *  Switch: '<S73>/Switch12'
     */
    (void)Rte_Write_VeADIB_y_WEDLtDrvrUndrVolt_Value(tmp);

    /* Switch: '<S74>/Switch1' incorporates:
     *  Constant: '<S92>/Calib'
     */
    if (KeADIB_b_WEDLtCmdBypEnbl)
    {
        /* FunctionCaller: '<S68>/ServDIOR_Hbrdg_LtWheelEndDisconnect_SetDIOR_DutyCyc' */
        Rte_Call_ServDIOR_Hbrdg_LtWheelEndDisconnect_SetDIOR_DutyCyc
            (KeADIB_Pct_WEDLtCmdByp);
    }
    else
    {
        /* FunctionCaller: '<S68>/ServDIOR_Hbrdg_LtWheelEndDisconnect_SetDIOR_DutyCyc' */
        Rte_Call_ServDIOR_Hbrdg_LtWheelEndDisconnect_SetDIOR_DutyCyc(tmpRead_6);
    }

    /* End of Switch: '<S74>/Switch1' */

    /* FunctionCaller: '<S68>/ServDIOR_Hbrdg_LtWheelEndDisconnect_SetDIOR_CurrLim' */
    Rte_Call_ServDIOR_Hbrdg_LtWheelEndDisconnect_SetDIOR_CurrLim
        (KeADIB_I_WEDLtCurrLim);

    /* FunctionCaller: '<S68>/ServDIOR_Hbrdg_LtWheelEndDisconnect_SetDIOR_EnblSt' */
    Rte_Call_ServDIOR_Hbrdg_LtWheelEndDisconnect_SetDIOR_EnblSt
        (KeADIB_b_WEDLtEnblReq);

    /* FunctionCaller: '<S68>/ServDIOR_Hbrdg_LtWheelEndDisconnect_SetDIOR_Prd' */
    Rte_Call_ServDIOR_Hbrdg_LtWheelEndDisconnect_SetDIOR_Prd(KeADIB_ut_WEDLtPrd);

    /* Switch: '<S96>/Switch1' incorporates:
     *  Constant: '<S106>/Calib'
     *  Constant: '<S99>/Calib'
     */
    if (KeADIB_b_WEDRtCircLoBypEnbl)
    {
        tmp = KeADIB_y_WEDRtCircLoByp;
    }
    else
    {
        tmp = tmpRead_9.CircShoLo;
    }

    /* Outport: '<Root>/VeADIB_y_WEDRtCircLo' incorporates:
     *  Switch: '<S96>/Switch1'
     */
    (void)Rte_Write_VeADIB_y_WEDRtCircLo_Value(tmp);

    /* Switch: '<S96>/Switch2' incorporates:
     *  Constant: '<S107>/Calib'
     *  Constant: '<S98>/Calib'
     */
    if (KeADIB_b_WEDLtBypEnbl)
    {
        tmp = KeADIB_y_WEDRtCircHiByp;
    }
    else
    {
        tmp = tmpRead_a.CircShoHi;
    }

    /* Outport: '<Root>/VeADIB_y_WEDRtCircHi' incorporates:
     *  Switch: '<S96>/Switch2'
     */
    (void)Rte_Write_VeADIB_y_WEDRtCircHi_Value(tmp);

    /* Switch: '<S96>/Switch3' incorporates:
     *  Constant: '<S100>/Calib'
     *  Constant: '<S108>/Calib'
     */
    if (KeADIB_b_WEDRtCircOpenBypEnbl)
    {
        tmp = KeADIB_y_WEDRtCircOpenByp;
    }
    else
    {
        tmp = tmpRead_c.CircOpen;
    }

    /* Outport: '<Root>/VeADIB_y_WEDRtCircOpen' incorporates:
     *  Switch: '<S96>/Switch3'
     */
    (void)Rte_Write_VeADIB_y_WEDRtCircOpen_Value(tmp);

    /* Switch: '<S96>/Switch4' incorporates:
     *  Constant: '<S105>/Calib'
     *  Constant: '<S113>/Calib'
     */
    if (KeADIB_b_WEDRtShoLoadBypEnbl)
    {
        tmp = KeADIB_y_WEDRtShoLoadByp;
    }
    else
    {
        tmp = tmpRead_h.ShoLoad;
    }

    /* Outport: '<Root>/VeADIB_y_WEDRtShoLoad' incorporates:
     *  Switch: '<S96>/Switch4'
     */
    (void)Rte_Write_VeADIB_y_WEDRtShoLoad_Value(tmp);

    /* Switch: '<S96>/Switch9' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S110>/Calib'
     */
    if (KeADIB_b_WEDRtDrvrOvrTempWarnBypEnbl)
    {
        tmp = KeADIB_y_WEDRtDrvrOvrTempWarnByp;
    }
    else
    {
        tmp = tmpRead_i.DrvrOvrTempWarn;
    }

    /* Outport: '<Root>/VeADIB_y_WEDRtDrvrOvrTempWarn' incorporates:
     *  Switch: '<S96>/Switch9'
     */
    (void)Rte_Write_VeADIB_y_WEDRtDrvrOvrTempWarn_Value(tmp);

    /* Switch: '<S96>/Switch10' incorporates:
     *  Constant: '<S101>/Calib'
     *  Constant: '<S109>/Calib'
     */
    if (KeADIB_b_WEDRtDrvrOvrTempBypEnbl)
    {
        tmp = KeADIB_y_WEDRtDrvrOvrTempByp;
    }
    else
    {
        tmp = tmpRead_j.DrvrOvrTempDtctd;
    }

    /* Outport: '<Root>/VeADIB_y_WEDRtDrvrOvrTemp' incorporates:
     *  Switch: '<S96>/Switch10'
     */
    (void)Rte_Write_VeADIB_y_WEDRtDrvrOvrTemp_Value(tmp);

    /* Switch: '<S96>/Switch11' incorporates:
     *  Constant: '<S103>/Calib'
     *  Constant: '<S111>/Calib'
     */
    if (KeADIB_b_WEDRtDrvrOvrVoltBypEnbl)
    {
        tmp = KeADIB_y_WEDRtDrvrOvrVoltByp;
    }
    else
    {
        tmp = tmpRead_k.DrvrOvrVoltDtctd;
    }

    /* Outport: '<Root>/VeADIB_y_WEDRtDrvrOvrVolt' incorporates:
     *  Switch: '<S96>/Switch11'
     */
    (void)Rte_Write_VeADIB_y_WEDRtDrvrOvrVolt_Value(tmp);

    /* Switch: '<S96>/Switch12' incorporates:
     *  Constant: '<S104>/Calib'
     *  Constant: '<S112>/Calib'
     */
    if (KeADIB_b_WEDRtDrvrUndrVoltBypEnbl)
    {
        tmp = KeADIB_y_WEDRtDrvrUndrVoltByp;
    }
    else
    {
        tmp = tmpRead_l.DrvrUndrVoltDtctd;
    }

    /* Outport: '<Root>/VeADIB_y_WEDRtDrvrUndrVolt' incorporates:
     *  Switch: '<S96>/Switch12'
     */
    (void)Rte_Write_VeADIB_y_WEDRtDrvrUndrVolt_Value(tmp);

    /* Switch: '<S97>/Switch1' incorporates:
     *  Constant: '<S115>/Calib'
     */
    if (KeADIB_b_WEDRtCmdBypEnbl)
    {
        /* FunctionCaller: '<S69>/ServDIOR_Hbrdg_RtWheelEndDisconnect_SetDIOR_DutyCyc' */
        Rte_Call_ServDIOR_Hbrdg_RtWheelEndDisconnect_SetDIOR_DutyCyc
            (KeADIB_Pct_WEDRtCmdByp);
    }
    else
    {
        /* FunctionCaller: '<S69>/ServDIOR_Hbrdg_RtWheelEndDisconnect_SetDIOR_DutyCyc' */
        Rte_Call_ServDIOR_Hbrdg_RtWheelEndDisconnect_SetDIOR_DutyCyc(tmpRead_5);
    }

    /* End of Switch: '<S97>/Switch1' */

    /* FunctionCaller: '<S69>/ServDIOR_Hbrdg_RtWheelEndDisconnect_SetDIOR_CurrLim' */
    Rte_Call_ServDIOR_Hbrdg_RtWheelEndDisconnect_SetDIOR_CurrLim
        (KeADIB_I_WEDRtCurrLim);

    /* FunctionCaller: '<S69>/ServDIOR_Hbrdg_RtWheelEndDisconnect_SetDIOR_EnblSt' */
    Rte_Call_ServDIOR_Hbrdg_RtWheelEndDisconnect_SetDIOR_EnblSt
        (KeADIB_b_WEDRtEnblReq);

    /* FunctionCaller: '<S69>/ServDIOR_Hbrdg_RtWheelEndDisconnect_SetDIOR_Prd' */
    Rte_Call_ServDIOR_Hbrdg_RtWheelEndDisconnect_SetDIOR_Prd(KeADIB_ut_WEDRtPrd);

    /* End of Outputs for SubSystem: '<S9>/WED_Command' */
    /* End of Outputs for SubSystem: '<S6>/WED_Command' */

    /* Update for UnitDelay: '<S6>/Unit Delay' incorporates:
     *  Constant: '<S6>/Constant3'
     */
    ADIB_ac_DW.UnitDelay_DSTATE_g = false;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeADIB_I_WEDLeftCurrAct' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_I_WEDLeftCurrAct'
     */
    (void)Rte_Write_VeADIB_I_WEDLeftCurrAct_Value(rtb_Switch_a);

    /* Outport: '<Root>/VeADIB_I_WEDRightCurrAct' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_I_WEDRightCurrAct'
     */
    (void)Rte_Write_VeADIB_I_WEDRightCurrAct_Value(Switch_j);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* Outport: '<Root>/VeADIB_Pct_WEDPosnSnsLeft' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_Pct_WEDPosnSnsLeft'
     *  SignalConversion generated from: '<S6>/VeADIB_Pct_WEDPosnSnsLeft'
     */
    (void)Rte_Write_VeADIB_Pct_WEDPosnSnsLeft_Value(Switch_h[1]);

    /* Outport: '<Root>/VeADIB_Pct_WEDPosnSnsRight' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_Pct_WEDPosnSnsRight'
     *  SignalConversion generated from: '<S6>/VeADIB_Pct_WEDPosnSnsRight'
     */
    (void)Rte_Write_VeADIB_Pct_WEDPosnSnsRight_Value(Switch_he[1]);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeADIB_Pct_WED_Pwm_PosnSns1_DC' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_Pct_WED_Pwm_PosnSns1_DC'
     */
    (void)Rte_Write_VeADIB_Pct_WED_Pwm_PosnSns1_DC_Value(Switch_he[0]);

    /* Outport: '<Root>/VeADIB_Pct_WED_Pwm_PosnSns2_DC' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_Pct_WED_Pwm_PosnSns2_DC'
     */
    (void)Rte_Write_VeADIB_Pct_WED_Pwm_PosnSns2_DC_Value(Switch_h[0]);

    /* Outport: '<Root>/VeADIB_b_WEDLeftCurrActFA' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_b_WEDLeftCurrActFA'
     */
    (void)Rte_Write_VeADIB_b_WEDLeftCurrActFA_Value(LogicalOperator_g);

    /* Outport: '<Root>/VeADIB_b_WEDRightCurrActFA' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_b_WEDRightCurrActFA'
     */
    (void)Rte_Write_VeADIB_b_WEDRightCurrActFA_Value(LogicalOperator_h);

    /* Outport: '<Root>/VeADIB_b_WED_Pwm_PosnSns1_IsPinHi' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns1_IsPinHi'
     */
    (void)Rte_Write_VeADIB_b_WED_Pwm_PosnSns1_IsPinHi_Value(ADIB_ac_B.Switch_m);

    /* Outport: '<Root>/VeADIB_b_WED_Pwm_PosnSns1_TiOut' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns1_TiOut'
     */
    (void)Rte_Write_VeADIB_b_WED_Pwm_PosnSns1_TiOut_Value(ADIB_ac_B.Switch_c);

    /* Outport: '<Root>/VeADIB_b_WED_Pwm_PosnSns2_IsPinHi' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns2_IsPinHi'
     */
    (void)Rte_Write_VeADIB_b_WED_Pwm_PosnSns2_IsPinHi_Value
        (ADIB_ac_B.VeADIB_b_WED_Pwm_PosnSns2_IsPin);

    /* Outport: '<Root>/VeADIB_b_WED_Pwm_PosnSns2_TiOut' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns2_TiOut'
     */
    (void)Rte_Write_VeADIB_b_WED_Pwm_PosnSns2_TiOut_Value
        (ADIB_ac_B.VeADIB_b_WED_Pwm_PosnSns2_TiOut);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* Outputs for Atomic SubSystem: '<S6>/WEDPwmPositionSense1' */
    /* Outputs for Atomic SubSystem: '<S7>/WEDPwmPositionSense1' */
    /* Switch: '<S34>/Switch' incorporates:
     *  Constant: '<S14>/KeADIB_b_WED_Pwm_PosnSns1PolarInvEnb'
     *  Constant: '<S26>/KeADIB_b_WED_Pwm_PosnSns1_PW_BypEnbl'
     *  Constant: '<S30>/KeADIB_ut_WED_Pwm_PosnSns1_PW_Byp'
     *  Switch: '<S38>/Switch'
     */
    if (KeADIB_b_WED_Pwm_PosnSns1_PW_BypEnbl)
    {
        rtb_TmpSignalConversionAtVeD_md = KeADIB_ut_WED_Pwm_PosnSns1_PW_Byp;
    }
    else
    {
        if (KeADIB_b_WED_Pwm_PosnSns1PolarInvEnb)
        {
            /* Switch: '<S38>/Switch' incorporates:
             *  Sum: '<S16>/Add1'
             */
            rtb_TmpSignalConversionAtVeD_md = rtb_TmpSignalConversionAtVeDI_e -
                rtb_TmpSignalConversionAtVeD_md;
        }
    }

    /* End of Switch: '<S34>/Switch' */
    /* End of Outputs for SubSystem: '<S7>/WEDPwmPositionSense1' */
    /* End of Outputs for SubSystem: '<S6>/WEDPwmPositionSense1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeADIB_ut_WED_Pwm_PosnSns1_PW' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_ut_WED_Pwm_PosnSns1_PW'
     */
    (void)Rte_Write_VeADIB_ut_WED_Pwm_PosnSns1_PW_Value
        (rtb_TmpSignalConversionAtVeD_md);

    /* Outport: '<Root>/VeADIB_ut_WED_Pwm_PosnSns1_Prd' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_ut_WED_Pwm_PosnSns1_Prd'
     */
    (void)Rte_Write_VeADIB_ut_WED_Pwm_PosnSns1_Prd_Value(ADIB_ac_B.Switch_a);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* Outputs for Atomic SubSystem: '<S6>/WEDPwmPositionSense2' */
    /* Outputs for Atomic SubSystem: '<S8>/WEDPwmPositionSense2' */
    /* Switch: '<S62>/Switch' incorporates:
     *  Constant: '<S42>/KeADIB_b_WED_Pwm_PosnSns2PolarInvEnb'
     *  Constant: '<S54>/KeADIB_b_WED_Pwm_PosnSns2_PW_BypEnbl'
     *  Constant: '<S58>/KeADIB_ut_WED_Pwm_PosnSns2_PW_Byp'
     *  Switch: '<S66>/Switch'
     */
    if (KeADIB_b_WED_Pwm_PosnSns2_PW_BypEnbl)
    {
        rtb_TmpSignalConversionAtVeDI_m = KeADIB_ut_WED_Pwm_PosnSns2_PW_Byp;
    }
    else
    {
        if (KeADIB_b_WED_Pwm_PosnSns2PolarInvEnb)
        {
            /* Switch: '<S66>/Switch' incorporates:
             *  Sum: '<S44>/Add1'
             */
            rtb_TmpSignalConversionAtVeDI_m = rtb_TmpSignalConversionAtVeDI_i -
                rtb_TmpSignalConversionAtVeDI_m;
        }
    }

    /* End of Switch: '<S62>/Switch' */
    /* End of Outputs for SubSystem: '<S8>/WEDPwmPositionSense2' */
    /* End of Outputs for SubSystem: '<S6>/WEDPwmPositionSense2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeADIB_ut_WED_Pwm_PosnSns2_PW' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_ut_WED_Pwm_PosnSns2_PW'
     */
    (void)Rte_Write_VeADIB_ut_WED_Pwm_PosnSns2_PW_Value
        (rtb_TmpSignalConversionAtVeDI_m);

    /* Outport: '<Root>/VeADIB_ut_WED_Pwm_PosnSns2_Prd' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_ut_WED_Pwm_PosnSns2_Prd'
     */
    (void)Rte_Write_VeADIB_ut_WED_Pwm_PosnSns2_Prd_Value
        (ADIB_ac_B.VeADIB_ut_WED_Pwm_PosnSns2_Prd);

    /* SignalConversion generated from: '<S1>/VeADIB_Pct_WED_Pwm_PosnSns1_DCReal' */
    Rte_IrvWrite_ADIB_FastTEA_VeADIB_Pct_WED_Pwm_PosnSns1_DCReal_IRV
        (ADIB_ac_B.Vector_e);

    /* SignalConversion generated from: '<S1>/VeADIB_Pct_WED_Pwm_PosnSns2_DCReal' */
    Rte_IrvWrite_ADIB_FastTEA_VeADIB_Pct_WED_Pwm_PosnSns2_DCReal_IRV
        (ADIB_ac_B.Vector_h);

    /* SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns1_IsPinHi1' */
    Rte_IrvWrite_ADIB_FastTEA_VeADIB_b_WED_Pwm_PosnSns1_IsPinHi1_IRV
        (ADIB_ac_B.Switch_m);

    /* SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns1_TiOut1' */
    Rte_IrvWrite_ADIB_FastTEA_VeADIB_b_WED_Pwm_PosnSns1_TiOut1_IRV
        (ADIB_ac_B.Switch_c);

    /* SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns2_IsPinHi1' */
    Rte_IrvWrite_ADIB_FastTEA_VeADIB_b_WED_Pwm_PosnSns2_IsPinHi1_IRV
        (ADIB_ac_B.VeADIB_b_WED_Pwm_PosnSns2_IsPin);

    /* SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns2_TiOut1' */
    Rte_IrvWrite_ADIB_FastTEA_VeADIB_b_WED_Pwm_PosnSns2_TiOut1_IRV
        (ADIB_ac_B.VeADIB_b_WED_Pwm_PosnSns2_TiOut);

    /* SignalConversion generated from: '<S1>/VeADIB_ut_WED_Pwm_PosnSns1_Prd1' */
    Rte_IrvWrite_ADIB_FastTEA_VeADIB_ut_WED_Pwm_PosnSns1_Prd1_IRV
        (ADIB_ac_B.Switch_a);

    /* SignalConversion generated from: '<S1>/VeADIB_ut_WED_Pwm_PosnSns2_Prd1' */
    Rte_IrvWrite_ADIB_FastTEA_VeADIB_ut_WED_Pwm_PosnSns2_Prd1_IRV
        (ADIB_ac_B.VeADIB_ut_WED_Pwm_PosnSns2_Prd);

    /* Outputs for Atomic SubSystem: '<S1>/ADIB_FastTEA_StopCheckpoint' */
    /* FunctionCaller: '<S5>/ADIB_FastTEA_StopCheckpoint' */
    Rte_Call_ADIB_FastTEA_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S1>/ADIB_FastTEA_StopCheckpoint' */
    /* End of Outputs for SubSystem: '<Root>/ADIB_FastTEA' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEA' */
#endif

}

#endif

/* Model step function for TID2 */
FUNC(void, ADIB_CODE) ADIB_MedTEB(void) /* Explicit Task: MedTEB */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_ADIB_WED_Presence

    float32 rtb_TmpSignalConversionAtVeADIB;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    float32 rtb_TmpSignalConversionAtVeAD_d;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    float32 rtb_TmpSignalConversionAtVeAD_g;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    float32 rtb_TmpSignalConversionAtVeAD_o;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean rtb_TmpSignalConversionAtVeAD_p;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean rtb_TmpSignalConversionAtVeA_pc;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean rtb_TmpSignalConversionAtVeA_jo;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean rtb_TmpSignalConversionAtVeA_cy;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean rtb_OR2_c;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean rtb_RelationalOperator3_d;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean rtb_TmpSignalConversionAtVeDF_g;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean rtb_TmpSignalConversionAtVeDF_i;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean rtb_NOT4_p;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean rtb_AND_a;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean rtb_AND_e;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean rtb_GreaterThanorEqual;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean rtb_GreaterThanorEqual_h;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    uint8 rtb_TmpSignalConversionAtVeDM_k;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    uint8 rtb_TmpSignalConversionAtVeD_gy;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    uint8 rtb_TmpSignalConversionAtVeDM_n;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    uint8 rtb_TmpSignalConversionAtVeDM_m;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    uint8 rtb_TmpSignalConversionAtVeDM_f;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    uint8 rtb_TmpSignalConversionAtVeD_ev;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    uint8 rtb_TmpSignalConversionAtVeDM_p;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    uint8 rtb_TmpSignalConversionAtVeDM_o;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    uint8 rtb_TmpSignalConversionAtVeDM_d;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    uint8 rtb_TmpSignalConversionAtVeD_mz;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    uint8 rtb_TmpSignalConversionAtVeDM_e;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    uint16 rtb_TmpSignalConversionAtVeNV_p;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    uint16 rtb_TmpSignalConversionAtVeNV_f;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    uint16 rtb_TmpSignalConversionAtVeNV_d;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    uint16 rtb_TmpSignalConversionAtVeNV_i;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    uint16 rtb_TmpSignalConversionAtVeNV_l;

#endif

#if Rte_SysCon_Variant_ADIB_WED_Presence

    boolean OutportBufferForVeADIB_b_WED_Pw;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ADIB_MedTEB'
     */
    /* SignalConversion generated from: '<S2>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  SignalConversion generated from: '<S2>/VeADIB_Pct_WED_Pwm_PosnSns1_PwmInp_DC'
     *  SignalConversion generated from: '<S2>/VeADIB_Pct_WED_Pwm_PosnSns2_DCRough'
     *  SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns1_IsPinHi'
     *  SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns1_TiOut'
     *  SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns2_IsPinHi'
     *  SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns2_TiOut'
     *  SignalConversion generated from: '<S2>/VeADIB_ut_WED_Pwm_PosnSns1_Prd'
     *  SignalConversion generated from: '<S2>/VeADIB_ut_WED_Pwm_PosnSns2_Prd'
     *  SignalConversion generated from: '<S2>/VeDFIR_b_DsblDiagFailSafe'
     *  SignalConversion generated from: '<S2>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_LF_WHL_HubDisConActCntrl'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsrCktPerf'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsr'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_RF_WHL_HubDisConActCntrl'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsrCktPerf'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsr'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_SnsrRefVolt5CktHi'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_SnsrRefVolt5CktLo'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_SnsrRefVolt6CktHi'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_SnsrRefVolt6CktLo'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_SysVoltHi'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_SysVoltLo'
     *  SignalConversion generated from: '<S2>/VeNVMB_Cnt_LtWEDElecFlt_MFOP'
     *  SignalConversion generated from: '<S2>/VeNVMB_Cnt_RtWEDElecFlt_MFOP'
     *  SignalConversion generated from: '<S2>/VeNVMB_Cnt_WEDPosnSnsr1ElecFlt_MFOP'
     *  SignalConversion generated from: '<S2>/VeNVMB_Cnt_WEDPosnSnsr1PosnOOR_MFOP'
     *  SignalConversion generated from: '<S2>/VeNVMB_Cnt_WEDPosnSnsr2ElecFlt_MFOP'
     *  SignalConversion generated from: '<S2>/VeNVMB_Cnt_WEDPosnSnsr2PosnOOR_MFOP'
     */
#if Rte_SysCon_Variant_ADIB_WED_Presence

    /* SignalConversion generated from: '<S2>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_TmpSignalConversionAtVeDFIR);

    /* SignalConversion generated from: '<S2>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDF_i);

    /* SignalConversion generated from: '<S2>/VeDFIR_b_DsblDiagFailSafe' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        (&rtb_TmpSignalConversionAtVeDF_g);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_SnsrRefVolt6CktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_SnsrRefVolt6CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_SnsrRefVolt6CktLo_Value
        (&rtb_TmpSignalConversionAtVeDMAB);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_SnsrRefVolt6CktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_SnsrRefVolt6CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_SnsrRefVolt6CktHi_Value
        (&rtb_TmpSignalConversionAtVeDM_k);

    /* SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns1_TiOut' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns1_TiOut1'
     */
    rtb_TmpSignalConversionAtVeAD_p =
        Rte_IrvRead_ADIB_MedTEB_VeADIB_b_WED_Pwm_PosnSns1_TiOut1_IRV();

    /* SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns1_IsPinHi' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns1_IsPinHi1'
     */
    rtb_TmpSignalConversionAtVeA_pc =
        Rte_IrvRead_ADIB_MedTEB_VeADIB_b_WED_Pwm_PosnSns1_IsPinHi1_IRV();

    /* SignalConversion generated from: '<S2>/VeADIB_ut_WED_Pwm_PosnSns1_Prd' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_ut_WED_Pwm_PosnSns1_Prd1'
     */
    rtb_TmpSignalConversionAtVeADIB =
        Rte_IrvRead_ADIB_MedTEB_VeADIB_ut_WED_Pwm_PosnSns1_Prd1_IRV();

    /* SignalConversion generated from: '<S2>/VeADIB_Pct_WED_Pwm_PosnSns1_PwmInp_DC' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_Pct_WED_Pwm_PosnSns1_DCReal'
     */
    rtb_TmpSignalConversionAtVeAD_d =
        Rte_IrvRead_ADIB_MedTEB_VeADIB_Pct_WED_Pwm_PosnSns1_DCReal_IRV();

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsr' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsr'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsr_Value
        (&rtb_TmpSignalConversionAtVeD_gy);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsrCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsrCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsrCktPerf_Value
        (&rtb_TmpSignalConversionAtVeDM_n);

    /* SignalConversion generated from: '<S2>/VeNVMB_Cnt_WEDPosnSnsr1ElecFlt_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_WEDPosnSnsr1ElecFlt_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_WEDPosnSnsr1ElecFlt_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB);

    /* SignalConversion generated from: '<S2>/VeNVMB_Cnt_WEDPosnSnsr1PosnOOR_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_WEDPosnSnsr1PosnOOR_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_WEDPosnSnsr1PosnOOR_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNV_p);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_SnsrRefVolt5CktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_SnsrRefVolt5CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_SnsrRefVolt5CktLo_Value
        (&rtb_TmpSignalConversionAtVeDM_m);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_SnsrRefVolt5CktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_SnsrRefVolt5CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_SnsrRefVolt5CktHi_Value
        (&rtb_TmpSignalConversionAtVeDM_f);

    /* SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns2_TiOut' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns2_TiOut1'
     */
    rtb_TmpSignalConversionAtVeA_jo =
        Rte_IrvRead_ADIB_MedTEB_VeADIB_b_WED_Pwm_PosnSns2_TiOut1_IRV();

    /* SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns2_IsPinHi' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns2_IsPinHi1'
     */
    rtb_TmpSignalConversionAtVeA_cy =
        Rte_IrvRead_ADIB_MedTEB_VeADIB_b_WED_Pwm_PosnSns2_IsPinHi1_IRV();

    /* SignalConversion generated from: '<S2>/VeADIB_ut_WED_Pwm_PosnSns2_Prd' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_ut_WED_Pwm_PosnSns2_Prd1'
     */
    rtb_TmpSignalConversionAtVeAD_g =
        Rte_IrvRead_ADIB_MedTEB_VeADIB_ut_WED_Pwm_PosnSns2_Prd1_IRV();

    /* SignalConversion generated from: '<S2>/VeADIB_Pct_WED_Pwm_PosnSns2_DCRough' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIB_Pct_WED_Pwm_PosnSns2_DCReal'
     */
    rtb_TmpSignalConversionAtVeAD_o =
        Rte_IrvRead_ADIB_MedTEB_VeADIB_Pct_WED_Pwm_PosnSns2_DCReal_IRV();

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsr' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsr'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsr_Value
        (&rtb_TmpSignalConversionAtVeD_ev);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsrCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsrCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsrCktPerf_Value
        (&rtb_TmpSignalConversionAtVeDM_p);

    /* SignalConversion generated from: '<S2>/VeNVMB_Cnt_WEDPosnSnsr2ElecFlt_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_WEDPosnSnsr2ElecFlt_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_WEDPosnSnsr2ElecFlt_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNV_f);

    /* SignalConversion generated from: '<S2>/VeNVMB_Cnt_WEDPosnSnsr2PosnOOR_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_WEDPosnSnsr2PosnOOR_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_WEDPosnSnsr2PosnOOR_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNV_d);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_SysVoltLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_SysVoltLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_SysVoltLo_Value
        (&rtb_TmpSignalConversionAtVeDM_d);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_SysVoltHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_SysVoltHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_SysVoltHi_Value
        (&rtb_TmpSignalConversionAtVeDM_o);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_LF_WHL_HubDisConActCntrl' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LF_WHL_HubDisConActCntrl'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LF_WHL_HubDisConActCntrl_Value
        (&rtb_TmpSignalConversionAtVeDM_e);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_RF_WHL_HubDisConActCntrl' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RF_WHL_HubDisConActCntrl'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RF_WHL_HubDisConActCntrl_Value
        (&rtb_TmpSignalConversionAtVeD_mz);

    /* SignalConversion generated from: '<S2>/VeNVMB_Cnt_RtWEDElecFlt_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_RtWEDElecFlt_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_RtWEDElecFlt_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNV_l);

    /* SignalConversion generated from: '<S2>/VeNVMB_Cnt_LtWEDElecFlt_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_LtWEDElecFlt_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_LtWEDElecFlt_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNV_i);

#endif

    /* End of SignalConversion generated from: '<S2>/VeDFIR_b_IsDiagGlobalConditionsValid' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ADIB_MedTEB_StartCheckpoint'
     */
    /* FunctionCaller: '<S147>/ADIB_MedTEB_StartCheckpoint' */
    Rte_Call_ADIB_MedTEB_StartCheckpoint_CheckpointReached();

    /* SignalConversion generated from: '<S149>/VeADIB_b_WED_Pwm_PosnSns1_FA' incorporates:
     *  Constant: '<S160>/KeADIB_Pct_WED_Pwm_PosnSns1_DC_RngHiLim'
     *  Constant: '<S161>/KeADIB_Pct_WED_Pwm_PosnSns1_DC_RngLoLim'
     *  Constant: '<S162>/KeADIB_ut_WED_Pwm_PosnSns1_RngHiLim'
     *  Constant: '<S163>/KeADIB_ut_WED_Pwm_PosnSns1_RngLoLim'
     *  Constant: '<S211>/KeADIB_ut_WED_Pwm_PosnSns2_RngHiLim'
     *  Constant: '<S212>/KeADIB_ut_WED_Pwm_PosnSns2_RngLoLim'
     *  Constant: '<S213>/KeADIB_ut_WED_Pwm_PosnSns2_RngLoLim'
     *  Constant: '<S214>/KeADIB_Pct_WED_Pwm_PosnSns2_DC_RngHiLim'
     *  SignalConversion generated from: '<S149>/VeADIB_b_WED_Pwm_PosnSns2_FA'
     *  SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns1_FA'
     *  SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns2_FA'
     *  SignalConversion generated from: '<S2>/VeADIB_e_LtWED_PassFail'
     *  SignalConversion generated from: '<S2>/VeADIB_e_RtWED_PassFail'
     *  SignalConversion generated from: '<S2>/VeADIB_e_WED_Pwm_PosnSns1CircLo_PassFail'
     *  SignalConversion generated from: '<S2>/VeADIB_e_WED_Pwm_PosnSns1OofR_PassFail'
     *  SignalConversion generated from: '<S2>/VeADIB_e_WED_Pwm_PosnSns2CircLoHi_PassFail'
     *  SignalConversion generated from: '<S2>/VeADIB_e_WED_Pwm_PosnSns2OofR_PassFail'
     *  SignalConversion generated from: '<S2>/VeADIB_b_LtWED_FA'
     *  SignalConversion generated from: '<S2>/VeADIB_b_RtWED_FA'
     *  SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns1_FA1'
     *  SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns1_FaultCriteria'
     *  SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns2_FA1'
     *  SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns2_FualtCriteria'
     */
#if Rte_SysCon_Variant_ADIB_WED_Presence

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Function-Call Subsystem'
     */
    /* Outputs for Atomic SubSystem: '<S149>/WED_Command' */
    /* Outputs for Atomic SubSystem: '<S149>/WEDPwmPositionSense2' */
    /* Outputs for Atomic SubSystem: '<S149>/WEDPwmPositionSense1' */
    /* Outputs for Atomic SubSystem: '<S150>/WEDPwmPositionSense1' */

    /* Logic: '<S154>/AND1' incorporates:
     *  Logic: '<S154>/NOT'
     */
    VeADIB_b_WED_Pwm_PosnSns1_Fault_Crtieria_STG =
        (rtb_TmpSignalConversionAtVeAD_p && (!rtb_TmpSignalConversionAtVeA_pc));

    /* Outputs for Atomic SubSystem: '<S154>/ClosedInterval1' */
    ADIB_ac_ClosedInterval1(rtb_TmpSignalConversionAtVeADIB,
                            KeADIB_ut_WED_Pwm_PosnSns1_RngLoLim,
                            KeADIB_ut_WED_Pwm_PosnSns1_RngHiLim,
                            &ADIB_ac_B.ClosedInterval1);

    /* End of Outputs for SubSystem: '<S154>/ClosedInterval1' */

    /* Logic: '<S154>/NOT1' incorporates:
     *  Constant: '<S162>/KeADIB_ut_WED_Pwm_PosnSns1_RngHiLim'
     *  Constant: '<S163>/KeADIB_ut_WED_Pwm_PosnSns1_RngLoLim'
     *  Logic: '<S154>/NOT3'
     */
    OutportBufferForVeADIB_b_WED_Pw = !rtb_TmpSignalConversionAtVeAD_p;

    /* Logic: '<S154>/AND2' incorporates:
     *  Logic: '<S154>/NOT1'
     *  Logic: '<S154>/NOT2'
     */
    VeADIB_b_Fault_Criteria_Prd_PosOutofRange1 =
        (OutportBufferForVeADIB_b_WED_Pw &&
         (!ADIB_ac_B.ClosedInterval1.LogicalOperator));

    /* Outputs for Atomic SubSystem: '<S154>/ClosedInterval2' */
    ADIB_ac_ClosedInterval1(rtb_TmpSignalConversionAtVeAD_d,
                            KeADIB_Pct_WED_Pwm_PosnSns1_DC_RngLoLim,
                            KeADIB_Pct_WED_Pwm_PosnSns1_DC_RngHiLim,
                            &ADIB_ac_B.ClosedInterval2);

    /* End of Outputs for SubSystem: '<S154>/ClosedInterval2' */

    /* Logic: '<S154>/AND3' incorporates:
     *  Constant: '<S160>/KeADIB_Pct_WED_Pwm_PosnSns1_DC_RngHiLim'
     *  Constant: '<S161>/KeADIB_Pct_WED_Pwm_PosnSns1_DC_RngLoLim'
     *  Logic: '<S154>/NOT4'
     */
    VeADIB_b_Fault_Criteria_DC_PosOutofRange1 = (OutportBufferForVeADIB_b_WED_Pw
        && (!ADIB_ac_B.ClosedInterval2.LogicalOperator));

    /* Logic: '<S154>/AND4' */
    VeADIB_b_WED_Pwm_PosnSns1_Fault_Crtieria_STB =
        (rtb_TmpSignalConversionAtVeA_pc && rtb_TmpSignalConversionAtVeAD_p);

    /* Logic: '<S154>/OR2' incorporates:
     *  Constant: '<S158>/Constant1'
     *  Constant: '<S158>/Constant2'
     *  Constant: '<S159>/Constant1'
     *  Constant: '<S159>/Constant2'
     *  Logic: '<S158>/Logical Operator'
     *  Logic: '<S159>/Logical Operator'
     *  RelationalOperator: '<S158>/Relational Operator1'
     *  RelationalOperator: '<S158>/Relational Operator2'
     *  RelationalOperator: '<S159>/Relational Operator1'
     *  RelationalOperator: '<S159>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S158>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S158>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S159>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S159>/Bitwise Operator2'
     */
    rtb_OR2_c = ((((((sint32)rtb_TmpSignalConversionAtVeDMAB) & 1) > 0) &&
                  ((((uint32)rtb_TmpSignalConversionAtVeDMAB) & 64U) == 0U)) ||
                 (((((sint32)rtb_TmpSignalConversionAtVeDM_k) & 1) > 0) &&
                  ((((uint32)rtb_TmpSignalConversionAtVeDM_k) & 64U) == 0U)));

    /* RelationalOperator: '<S170>/Relational Operator3' incorporates:
     *  Constant: '<S170>/Constant3'
     *  S-Function (sfix_bitop): '<S170>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_d = ((((uint32)rtb_TmpSignalConversionAtVeD_gy) &
        64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S170>/EdgeFalling1' */
    /* Logic: '<S170>/Logical Operator' incorporates:
     *  Logic: '<S172>/OR1'
     */
    rtb_NOT4_p = !rtb_RelationalOperator3_d;

    /* End of Outputs for SubSystem: '<S170>/EdgeFalling1' */

    /* Logic: '<S170>/Logical1' incorporates:
     *  Constant: '<S168>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S169>/KeADIB_b_STGDiagEnbl_WED_Pwm_PosnSns1'
     *  Constant: '<S170>/Constant1'
     *  Logic: '<S155>/Logical Operator'
     *  Logic: '<S155>/NOT'
     *  Logic: '<S170>/Logical Operator'
     *  Logic: '<S170>/Logical10'
     *  Logic: '<S170>/Logical12'
     *  RelationalOperator: '<S170>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S170>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeA_pc = ((((!rtb_OR2_c) &&
        rtb_TmpSignalConversionAtVeDFIR) &&
        (KeADIB_b_ElectricalDiagEnbl_WED_Pwm_PosnSns1)) &&
        ((!KeADIB_b_LtchEnblWEDPosnSnsr1ElecFlt) || (((((uint32)
        rtb_TmpSignalConversionAtVeD_gy) & 1U) == 0U) || rtb_NOT4_p)));

    /* Logic: '<S154>/OR' */
    rtb_TmpSignalConversionAtVeAD_p =
        ((VeADIB_b_WED_Pwm_PosnSns1_Fault_Crtieria_STB) ||
         (VeADIB_b_WED_Pwm_PosnSns1_Fault_Crtieria_STG));

    /* Logic: '<S165>/NOT4' */
    OutportBufferForVeADIB_b_WED_Pw = (rtb_TmpSignalConversionAtVeDF_g ||
        rtb_TmpSignalConversionAtVeDF_i);

    /* Outputs for Atomic SubSystem: '<S170>/EdgeFalling1' */
    /* Logic: '<S172>/AND' incorporates:
     *  UnitDelay: '<S172>/Unit Delay'
     */
    rtb_AND_a = (rtb_NOT4_p && (ADIB_ac_DW.UnitDelay_DSTATE_c3));

    /* Update for UnitDelay: '<S172>/Unit Delay' */
    ADIB_ac_DW.UnitDelay_DSTATE_c3 = rtb_RelationalOperator3_d;

    /* End of Outputs for SubSystem: '<S170>/EdgeFalling1' */

    /* Logic: '<S170>/Logical5' incorporates:
     *  Logic: '<S165>/NOT4'
     */
    rtb_AND_a = (OutportBufferForVeADIB_b_WED_Pw || rtb_AND_a);

    /* Outputs for Atomic SubSystem: '<S171>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S171>/Counter Reset  Enabled ' */
    /* Switch: '<S178>/Switch1' incorporates:
     *  Logic: '<S171>/Fail Counter Reset'
     *  Logic: '<S171>/NOT6'
     *  Switch: '<S178>/Switch2'
     *  Switch: '<S179>/Switch1'
     *  UnitDelay: '<S171>/Unit Delay'
     *  UnitDelay: '<S171>/Unit Delay1'
     */
    if ((rtb_AND_a || (ADIB_ac_DW.UnitDelay_DSTATE_d)) ||
            (ADIB_ac_DW.UnitDelay1_DSTATE_p))
    {
        /* Switch: '<S178>/Switch1' incorporates:
         *  Constant: '<S178>/Constant Value2'
         */
        VeADIB_Cnt_ElectricalFailWED_Pwm_PosnSns1 = 0U;

        /* Switch: '<S179>/Switch1' incorporates:
         *  Constant: '<S179>/Constant Value2'
         */
        VeADIB_Cnt_ElectricalSmplWED_Pwm_PosnSns1 = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeA_pc && rtb_TmpSignalConversionAtVeAD_p)
        {
            /* Switch: '<S178>/Switch1' incorporates:
             *  Constant: '<S178>/Constant Value1'
             *  Sum: '<S178>/Subtraction'
             *  Switch: '<S178>/Switch2'
             *  UnitDelay: '<S178>/Unit Delay'
             */
            VeADIB_Cnt_ElectricalFailWED_Pwm_PosnSns1 = (uint16)(((uint32)
                VeADIB_Cnt_ElectricalFailWED_Pwm_PosnSns1) + 1U);
        }

        /* Switch: '<S179>/Switch2' */
        if (rtb_TmpSignalConversionAtVeA_pc)
        {
            /* Switch: '<S179>/Switch1' incorporates:
             *  Constant: '<S179>/Constant Value1'
             *  Sum: '<S179>/Subtraction'
             *  Switch: '<S179>/Switch2'
             *  UnitDelay: '<S179>/Unit Delay'
             */
            VeADIB_Cnt_ElectricalSmplWED_Pwm_PosnSns1 = (uint16)(((uint32)
                VeADIB_Cnt_ElectricalSmplWED_Pwm_PosnSns1) + 1U);
        }

        /* End of Switch: '<S179>/Switch2' */
    }

    /* End of Switch: '<S178>/Switch1' */
    /* End of Outputs for SubSystem: '<S171>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S171>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S171>/Greater Than or Equal ' incorporates:
     *  Constant: '<S166>/KeADIB_Cnt_STGFailLimWED_Pwm_PosnSns1'
     */
    rtb_TmpSignalConversionAtVeA_pc = (VeADIB_Cnt_ElectricalFailWED_Pwm_PosnSns1
        >= KeADIB_Cnt_ElectricalFailLimWED_Pwm_PosnSns1);

    /* Logic: '<S171>/NOT5' incorporates:
     *  Constant: '<S167>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Logic: '<S171>/NOT3'
     *  RelationalOperator: '<S171>/Less Than  or Equal'
     */
    rtb_RelationalOperator3_d = ((VeADIB_Cnt_ElectricalSmplWED_Pwm_PosnSns1 >=
        KeADIB_Cnt_ElectricalSmplLimWED_Pwm_PosnSns1) &&
        (!rtb_TmpSignalConversionAtVeA_pc));

    /* Outputs for Enabled SubSystem: '<S170>/Fail' */
    ADIB_ac_Fail(rtb_TmpSignalConversionAtVeA_pc, &ADIB_ac_B.Merge_ag);

    /* End of Outputs for SubSystem: '<S170>/Fail' */

    /* Outputs for Enabled SubSystem: '<S170>/Init' */
    ADIB_ac_Init_o(rtb_AND_a, &ADIB_ac_B.Merge_ag);

    /* End of Outputs for SubSystem: '<S170>/Init' */

    /* Outputs for Enabled SubSystem: '<S170>/Pass' */
    ADIB_ac_Pass(rtb_RelationalOperator3_d, &ADIB_ac_B.Merge_ag);

    /* End of Outputs for SubSystem: '<S170>/Pass' */

    /* Switch: '<S184>/Switch1' incorporates:
     *  Switch: '<S183>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDF_i)
    {
        /* Outport: '<Root>/VeADIB_Cnt_WEDPosnSnsr1ElecFlt_MFOP' incorporates:
         *  Constant: '<S177>/Constant Value'
         */
        (void)Rte_Write_VeADIB_Cnt_WEDPosnSnsr1ElecFlt_MFOP_Value((uint16)0U);
    }
    else
    {
        if (rtb_RelationalOperator3_d)
        {
            /* MinMax: '<S177>/Minimum2' incorporates:
             *  Switch: '<S183>/Switch1'
             */
            if (VeADIB_Cnt_ElectricalFailWED_Pwm_PosnSns1 >
                    rtb_TmpSignalConversionAtVeNVMB)
            {
                /* Switch: '<S183>/Switch1' */
                rtb_TmpSignalConversionAtVeNVMB =
                    VeADIB_Cnt_ElectricalFailWED_Pwm_PosnSns1;
            }

            /* End of MinMax: '<S177>/Minimum2' */
        }

        /* Outport: '<Root>/VeADIB_Cnt_WEDPosnSnsr1ElecFlt_MFOP' */
        (void)Rte_Write_VeADIB_Cnt_WEDPosnSnsr1ElecFlt_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB);
    }

    /* End of Switch: '<S184>/Switch1' */

    /* RelationalOperator: '<S189>/Relational Operator3' incorporates:
     *  Constant: '<S189>/Constant3'
     *  S-Function (sfix_bitop): '<S189>/Bitwise Operator2'
     */
    rtb_AND_a = ((((uint32)rtb_TmpSignalConversionAtVeDM_n) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S189>/EdgeFalling1' */
    /* Logic: '<S189>/Logical Operator' incorporates:
     *  Logic: '<S191>/OR1'
     */
    rtb_NOT4_p = !rtb_AND_a;

    /* End of Outputs for SubSystem: '<S189>/EdgeFalling1' */

    /* Logic: '<S189>/Logical1' incorporates:
     *  Constant: '<S187>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S188>/KeADIB_b_OofRDiagEnblWED_Pwm_PosnSns1'
     *  Constant: '<S189>/Constant1'
     *  Logic: '<S164>/Logical Operator'
     *  Logic: '<S164>/NOT'
     *  Logic: '<S189>/Logical Operator'
     *  Logic: '<S189>/Logical10'
     *  Logic: '<S189>/Logical12'
     *  RelationalOperator: '<S189>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S189>/Bitwise Operator3'
     */
    rtb_OR2_c = ((((!rtb_OR2_c) && rtb_TmpSignalConversionAtVeDFIR) &&
                  (KeADIB_b_OofRDiagEnblWED_Pwm_PosnSns1)) &&
                 ((!KeADIB_b_LtchEnblWEDPosnSnsr1OofR) || (((((uint32)
                      rtb_TmpSignalConversionAtVeDM_n) & 1U) == 0U) ||
                   rtb_NOT4_p)));

    /* Outputs for Atomic SubSystem: '<S189>/EdgeFalling1' */
    /* Logic: '<S191>/AND' incorporates:
     *  UnitDelay: '<S191>/Unit Delay'
     */
    rtb_AND_e = (rtb_NOT4_p && (ADIB_ac_DW.UnitDelay_DSTATE_py));

    /* Update for UnitDelay: '<S191>/Unit Delay' */
    ADIB_ac_DW.UnitDelay_DSTATE_py = rtb_AND_a;

    /* End of Outputs for SubSystem: '<S189>/EdgeFalling1' */

    /* Logic: '<S189>/Logical5' incorporates:
     *  Logic: '<S165>/NOT4'
     */
    rtb_NOT4_p = (OutportBufferForVeADIB_b_WED_Pw || rtb_AND_e);

    /* Logic: '<S190>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S190>/Unit Delay'
     *  UnitDelay: '<S190>/Unit Delay1'
     */
    rtb_AND_e = ((rtb_NOT4_p || (ADIB_ac_DW.UnitDelay_DSTATE_o3)) ||
                 (ADIB_ac_DW.UnitDelay1_DSTATE_f));

    /* Logic: '<S154>/OR1' */
    rtb_AND_a = ((VeADIB_b_Fault_Criteria_DC_PosOutofRange1) ||
                 (VeADIB_b_Fault_Criteria_Prd_PosOutofRange1));

    /* Outputs for Atomic SubSystem: '<S190>/Counter Reset  Enabled ' */
    /* Outputs for Atomic SubSystem: '<S190>/Counter Reset  Enabled 1' */
    /* Switch: '<S198>/Switch1' incorporates:
     *  Switch: '<S197>/Switch1'
     *  Switch: '<S198>/Switch2'
     */
    if (rtb_AND_e)
    {
        /* Switch: '<S198>/Switch1' incorporates:
         *  Constant: '<S198>/Constant Value2'
         */
        VeADIB_Cnt_OofRSamplWED_Pwm_PosnSns1 = 0U;

        /* Switch: '<S197>/Switch1' incorporates:
         *  Constant: '<S197>/Constant Value2'
         */
        VeADIB_Cnt_OofRFailWED_Pwm_PosnSns1 = 0U;
    }
    else
    {
        if (rtb_OR2_c)
        {
            /* Switch: '<S198>/Switch1' incorporates:
             *  Constant: '<S198>/Constant Value1'
             *  Sum: '<S198>/Subtraction'
             *  Switch: '<S198>/Switch2'
             *  UnitDelay: '<S198>/Unit Delay'
             */
            VeADIB_Cnt_OofRSamplWED_Pwm_PosnSns1 = (uint16)(((uint32)
                VeADIB_Cnt_OofRSamplWED_Pwm_PosnSns1) + 1U);
        }

        /* Switch: '<S197>/Switch2' incorporates:
         *  Logic: '<S190>/NOT6'
         */
        if (rtb_OR2_c && rtb_AND_a)
        {
            /* Switch: '<S197>/Switch1' incorporates:
             *  Constant: '<S197>/Constant Value1'
             *  Sum: '<S197>/Subtraction'
             *  Switch: '<S197>/Switch2'
             *  UnitDelay: '<S197>/Unit Delay'
             */
            VeADIB_Cnt_OofRFailWED_Pwm_PosnSns1 = (uint16)(((uint32)
                VeADIB_Cnt_OofRFailWED_Pwm_PosnSns1) + 1U);
        }

        /* End of Switch: '<S197>/Switch2' */
    }

    /* End of Switch: '<S198>/Switch1' */
    /* End of Outputs for SubSystem: '<S190>/Counter Reset  Enabled 1' */
    /* End of Outputs for SubSystem: '<S190>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S190>/Greater Than or Equal ' incorporates:
     *  Constant: '<S185>/KeADIB_Cnt_OofRFailLimWED_Pwm_PosnSns1'
     */
    rtb_OR2_c = (VeADIB_Cnt_OofRFailWED_Pwm_PosnSns1 >=
                 KeADIB_Cnt_OofRFailLimWED_Pwm_PosnSns1);

    /* Logic: '<S190>/NOT5' incorporates:
     *  Constant: '<S186>/KeADIB_Cnt_OofRSmplLimWED_Pwm_PosnSns1'
     *  Logic: '<S190>/NOT3'
     *  RelationalOperator: '<S190>/Less Than  or Equal'
     */
    rtb_AND_e = ((VeADIB_Cnt_OofRSamplWED_Pwm_PosnSns1 >=
                  KeADIB_Cnt_OofRSmplLimWED_Pwm_PosnSns1) && (!rtb_OR2_c));

    /* Outputs for Enabled SubSystem: '<S189>/Pass' */
    ADIB_ac_Pass(rtb_AND_e, &ADIB_ac_B.Merge_h);

    /* End of Outputs for SubSystem: '<S189>/Pass' */

    /* Outputs for Enabled SubSystem: '<S189>/Fail' */
    ADIB_ac_Fail(rtb_OR2_c, &ADIB_ac_B.Merge_h);

    /* End of Outputs for SubSystem: '<S189>/Fail' */

    /* Outputs for Enabled SubSystem: '<S189>/Init' */
    ADIB_ac_Init_o(rtb_NOT4_p, &ADIB_ac_B.Merge_h);

    /* End of Outputs for SubSystem: '<S189>/Init' */

    /* Logic: '<S154>/Logical Operator' incorporates:
     *  Constant: '<S173>/Constant'
     *  Constant: '<S192>/Constant'
     *  Merge: '<S170>/Merge'
     *  Merge: '<S189>/Merge'
     *  RelationalOperator: '<S170>/Relational Operator'
     *  RelationalOperator: '<S189>/Relational Operator'
     */
    ADIB_ac_B.LogicalOperator = ((((uint32)ADIB_ac_B.Merge_ag) == CeDFIB_e_Fail)
        || (((uint32)ADIB_ac_B.Merge_h) == CeDFIB_e_Fail));

    /* Logic: '<S154>/Logical Operator1' */
    ADIB_ac_B.LogicalOperator1_o = (rtb_AND_a || rtb_TmpSignalConversionAtVeAD_p);

    /* Switch: '<S203>/Switch1' incorporates:
     *  Switch: '<S202>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDF_i)
    {
        /* Outport: '<Root>/VeADIB_Cnt_WEDPosnSnsr1PosnOOR_MFOP' incorporates:
         *  Constant: '<S196>/Constant Value'
         */
        (void)Rte_Write_VeADIB_Cnt_WEDPosnSnsr1PosnOOR_MFOP_Value((uint16)0U);
    }
    else
    {
        if (rtb_AND_e)
        {
            /* MinMax: '<S196>/Minimum2' incorporates:
             *  Switch: '<S202>/Switch1'
             */
            if (VeADIB_Cnt_OofRFailWED_Pwm_PosnSns1 >
                    rtb_TmpSignalConversionAtVeNV_p)
            {
                /* Switch: '<S202>/Switch1' */
                rtb_TmpSignalConversionAtVeNV_p =
                    VeADIB_Cnt_OofRFailWED_Pwm_PosnSns1;
            }

            /* End of MinMax: '<S196>/Minimum2' */
        }

        /* Outport: '<Root>/VeADIB_Cnt_WEDPosnSnsr1PosnOOR_MFOP' */
        (void)Rte_Write_VeADIB_Cnt_WEDPosnSnsr1PosnOOR_MFOP_Value
            (rtb_TmpSignalConversionAtVeNV_p);
    }

    /* End of Switch: '<S203>/Switch1' */

    /* Update for UnitDelay: '<S171>/Unit Delay' */
    ADIB_ac_DW.UnitDelay_DSTATE_d = rtb_RelationalOperator3_d;

    /* Update for UnitDelay: '<S171>/Unit Delay1' */
    ADIB_ac_DW.UnitDelay1_DSTATE_p = rtb_TmpSignalConversionAtVeA_pc;

    /* Update for UnitDelay: '<S190>/Unit Delay' */
    ADIB_ac_DW.UnitDelay_DSTATE_o3 = rtb_AND_e;

    /* Update for UnitDelay: '<S190>/Unit Delay1' */
    ADIB_ac_DW.UnitDelay1_DSTATE_f = rtb_OR2_c;

    /* End of Outputs for SubSystem: '<S150>/WEDPwmPositionSense1' */

    /* SignalConversion generated from: '<S149>/VeADIB_b_WED_Pwm_PosnSns1_FA' */
    OutportBufferForVeADIB_b_WED_Pw = ADIB_ac_B.LogicalOperator;

    /* Outputs for Atomic SubSystem: '<S151>/WEDPwmPositionSense2' */

    /* Logic: '<S205>/AND1' incorporates:
     *  Logic: '<S205>/NOT'
     */
    VeADIB_b_WED_Pwm_PosnSns2_Fault_Crtieria_STG =
        (rtb_TmpSignalConversionAtVeA_jo && (!rtb_TmpSignalConversionAtVeA_cy));

    /* Outputs for Atomic SubSystem: '<S205>/ClosedInterval1' */
    ADIB_ac_ClosedInterval1(rtb_TmpSignalConversionAtVeAD_g,
                            KeADIB_ut_WED_Pwm_PosnSns2_RngLoLim,
                            KeADIB_ut_WED_Pwm_PosnSns2_RngHiLim,
                            &ADIB_ac_B.ClosedInterval1_h);

    /* End of Outputs for SubSystem: '<S205>/ClosedInterval1' */

    /* Logic: '<S205>/NOT1' incorporates:
     *  Constant: '<S211>/KeADIB_ut_WED_Pwm_PosnSns2_RngHiLim'
     *  Constant: '<S212>/KeADIB_ut_WED_Pwm_PosnSns2_RngLoLim'
     *  Logic: '<S205>/NOT3'
     */
    rtb_TmpSignalConversionAtVeAD_p = !rtb_TmpSignalConversionAtVeA_jo;

    /* Logic: '<S205>/AND2' incorporates:
     *  Logic: '<S205>/NOT1'
     *  Logic: '<S205>/NOT2'
     */
    VeADIB_b_Fault_Criteria_Prd_PosOutofRange2 =
        (rtb_TmpSignalConversionAtVeAD_p &&
         (!ADIB_ac_B.ClosedInterval1_h.LogicalOperator));

    /* Logic: '<S205>/AND3' */
    VeADIB_b_WED_Pwm_PosnSns2_Fault_Crtieria_STB =
        (rtb_TmpSignalConversionAtVeA_cy && rtb_TmpSignalConversionAtVeA_jo);

    /* Outputs for Atomic SubSystem: '<S205>/ClosedInterval2' */
    ADIB_ac_ClosedInterval1(rtb_TmpSignalConversionAtVeAD_o,
                            KeADIB_Pct_WED_Pwm_PosnSns2_DC_RngLoLim,
                            KeADIB_Pct_WED_Pwm_PosnSns2_DC_RngHiLim,
                            &ADIB_ac_B.ClosedInterval2_f);

    /* End of Outputs for SubSystem: '<S205>/ClosedInterval2' */

    /* Logic: '<S205>/AND4' incorporates:
     *  Constant: '<S213>/KeADIB_ut_WED_Pwm_PosnSns2_RngLoLim'
     *  Constant: '<S214>/KeADIB_Pct_WED_Pwm_PosnSns2_DC_RngHiLim'
     *  Logic: '<S205>/NOT4'
     */
    VeADIB_b_Fault_Criteria_DC_PosOutofRange2 = (rtb_TmpSignalConversionAtVeAD_p
        && (!ADIB_ac_B.ClosedInterval2_f.LogicalOperator));

    /* RelationalOperator: '<S221>/Relational Operator3' incorporates:
     *  Constant: '<S221>/Constant3'
     *  S-Function (sfix_bitop): '<S221>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeAD_p = ((((uint32)rtb_TmpSignalConversionAtVeD_ev)
        & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S221>/EdgeFalling1' */
    /* Logic: '<S221>/Logical Operator' incorporates:
     *  Logic: '<S223>/OR1'
     */
    rtb_OR2_c = !rtb_TmpSignalConversionAtVeAD_p;

    /* End of Outputs for SubSystem: '<S221>/EdgeFalling1' */

    /* Logic: '<S206>/Logical Operator' incorporates:
     *  Constant: '<S209>/Constant1'
     *  Constant: '<S209>/Constant2'
     *  Constant: '<S210>/Constant1'
     *  Constant: '<S210>/Constant2'
     *  Logic: '<S205>/OR2'
     *  Logic: '<S206>/NOT'
     *  Logic: '<S209>/Logical Operator'
     *  Logic: '<S210>/Logical Operator'
     *  Logic: '<S215>/Logical Operator'
     *  RelationalOperator: '<S209>/Relational Operator1'
     *  RelationalOperator: '<S209>/Relational Operator2'
     *  RelationalOperator: '<S210>/Relational Operator1'
     *  RelationalOperator: '<S210>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S209>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S209>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S210>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S210>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_d = (((((((sint32)rtb_TmpSignalConversionAtVeDM_m) &
        1) <= 0) || ((((uint32)rtb_TmpSignalConversionAtVeDM_m) & 64U) != 0U)) &&
        (((((sint32)rtb_TmpSignalConversionAtVeDM_f) & 1) <= 0) || ((((uint32)
        rtb_TmpSignalConversionAtVeDM_f) & 64U) != 0U))) &&
        rtb_TmpSignalConversionAtVeDFIR);

    /* Logic: '<S221>/Logical1' incorporates:
     *  Constant: '<S219>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S220>/KeTAIB_b_STGDiagEnbl_CEXV_OutTSnsr'
     *  Constant: '<S221>/Constant1'
     *  Logic: '<S206>/Logical Operator'
     *  Logic: '<S221>/Logical Operator'
     *  Logic: '<S221>/Logical10'
     *  Logic: '<S221>/Logical12'
     *  RelationalOperator: '<S221>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S221>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeA_cy = ((rtb_RelationalOperator3_d &&
        (KeADIB_b_ElectricalDiagEnbl_WED_Pwm_PosnSns2)) &&
        ((!KeADIB_b_LtchEnblWEDPosnSnsr2ElecFlt) || (((((uint32)
        rtb_TmpSignalConversionAtVeD_ev) & 1U) == 0U) || rtb_OR2_c)));

    /* Logic: '<S205>/OR' */
    rtb_TmpSignalConversionAtVeA_jo =
        ((VeADIB_b_WED_Pwm_PosnSns2_Fault_Crtieria_STB) ||
         (VeADIB_b_WED_Pwm_PosnSns2_Fault_Crtieria_STG));

    /* Logic: '<S216>/NOT4' */
    rtb_TmpSignalConversionAtVeA_pc = (rtb_TmpSignalConversionAtVeDF_g ||
        rtb_TmpSignalConversionAtVeDF_i);

    /* Outputs for Atomic SubSystem: '<S221>/EdgeFalling1' */
    /* Logic: '<S223>/AND' incorporates:
     *  UnitDelay: '<S223>/Unit Delay'
     */
    rtb_NOT4_p = (rtb_OR2_c && (ADIB_ac_DW.UnitDelay_DSTATE_aq));

    /* Update for UnitDelay: '<S223>/Unit Delay' */
    ADIB_ac_DW.UnitDelay_DSTATE_aq = rtb_TmpSignalConversionAtVeAD_p;

    /* End of Outputs for SubSystem: '<S221>/EdgeFalling1' */

    /* Logic: '<S221>/Logical5' incorporates:
     *  Logic: '<S216>/NOT4'
     */
    rtb_NOT4_p = (rtb_TmpSignalConversionAtVeA_pc || rtb_NOT4_p);

    /* Outputs for Atomic SubSystem: '<S222>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S222>/Counter Reset  Enabled ' */
    /* Switch: '<S229>/Switch1' incorporates:
     *  Logic: '<S222>/Fail Counter Reset'
     *  Logic: '<S222>/NOT6'
     *  Switch: '<S229>/Switch2'
     *  Switch: '<S230>/Switch1'
     *  UnitDelay: '<S222>/Unit Delay'
     *  UnitDelay: '<S222>/Unit Delay1'
     */
    if ((rtb_NOT4_p || (ADIB_ac_DW.UnitDelay_DSTATE_o)) ||
            (ADIB_ac_DW.UnitDelay1_DSTATE_o))
    {
        /* Switch: '<S229>/Switch1' incorporates:
         *  Constant: '<S229>/Constant Value2'
         */
        VeADIB_Cnt_ElectricalFailWED_Pwm_PosnSns2 = 0U;

        /* Switch: '<S230>/Switch1' incorporates:
         *  Constant: '<S230>/Constant Value2'
         */
        VeADIB_Cnt_ElectricalSmplWED_Pwm_PosnSns2 = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeA_cy && rtb_TmpSignalConversionAtVeA_jo)
        {
            /* Switch: '<S229>/Switch1' incorporates:
             *  Constant: '<S229>/Constant Value1'
             *  Sum: '<S229>/Subtraction'
             *  Switch: '<S229>/Switch2'
             *  UnitDelay: '<S229>/Unit Delay'
             */
            VeADIB_Cnt_ElectricalFailWED_Pwm_PosnSns2 = (uint16)(((uint32)
                VeADIB_Cnt_ElectricalFailWED_Pwm_PosnSns2) + 1U);
        }

        /* Switch: '<S230>/Switch2' */
        if (rtb_TmpSignalConversionAtVeA_cy)
        {
            /* Switch: '<S230>/Switch1' incorporates:
             *  Constant: '<S230>/Constant Value1'
             *  Sum: '<S230>/Subtraction'
             *  Switch: '<S230>/Switch2'
             *  UnitDelay: '<S230>/Unit Delay'
             */
            VeADIB_Cnt_ElectricalSmplWED_Pwm_PosnSns2 = (uint16)(((uint32)
                VeADIB_Cnt_ElectricalSmplWED_Pwm_PosnSns2) + 1U);
        }

        /* End of Switch: '<S230>/Switch2' */
    }

    /* End of Switch: '<S229>/Switch1' */
    /* End of Outputs for SubSystem: '<S222>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S222>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S222>/Greater Than or Equal ' incorporates:
     *  Constant: '<S217>/KeTAIB_Cnt_STGFailLimCEXV_OutTSnsr'
     */
    rtb_TmpSignalConversionAtVeA_cy = (VeADIB_Cnt_ElectricalFailWED_Pwm_PosnSns2
        >= KeADIB_Cnt_ElectricalFailLimWED_Pwm_PosnSns2);

    /* Logic: '<S222>/NOT5' incorporates:
     *  Constant: '<S218>/KeTAIB_Cnt_STGSmplLimCEXV_OutTSnsr'
     *  Logic: '<S222>/NOT3'
     *  RelationalOperator: '<S222>/Less Than  or Equal'
     */
    rtb_TmpSignalConversionAtVeAD_p =
        ((VeADIB_Cnt_ElectricalSmplWED_Pwm_PosnSns2 >=
          KeADIB_Cnt_ElectricalSmplLimWED_Pwm_PosnSns2) &&
         (!rtb_TmpSignalConversionAtVeA_cy));

    /* Outputs for Enabled SubSystem: '<S221>/Fail' */
    ADIB_ac_Fail(rtb_TmpSignalConversionAtVeA_cy, &ADIB_ac_B.Merge_l);

    /* End of Outputs for SubSystem: '<S221>/Fail' */

    /* Outputs for Enabled SubSystem: '<S221>/Init' */
    ADIB_ac_Init_o(rtb_NOT4_p, &ADIB_ac_B.Merge_l);

    /* End of Outputs for SubSystem: '<S221>/Init' */

    /* Outputs for Enabled SubSystem: '<S221>/Pass' */
    ADIB_ac_Pass(rtb_TmpSignalConversionAtVeAD_p, &ADIB_ac_B.Merge_l);

    /* End of Outputs for SubSystem: '<S221>/Pass' */

    /* Switch: '<S235>/Switch1' incorporates:
     *  Switch: '<S234>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDF_i)
    {
        /* Outport: '<Root>/VeADIB_Cnt_WEDPosnSnsr2ElecFlt_MFOP' incorporates:
         *  Constant: '<S228>/Constant Value'
         */
        (void)Rte_Write_VeADIB_Cnt_WEDPosnSnsr2ElecFlt_MFOP_Value((uint16)0U);
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeAD_p)
        {
            /* MinMax: '<S228>/Minimum2' incorporates:
             *  Switch: '<S234>/Switch1'
             */
            if (VeADIB_Cnt_ElectricalFailWED_Pwm_PosnSns2 >
                    rtb_TmpSignalConversionAtVeNV_f)
            {
                /* Switch: '<S234>/Switch1' */
                rtb_TmpSignalConversionAtVeNV_f =
                    VeADIB_Cnt_ElectricalFailWED_Pwm_PosnSns2;
            }

            /* End of MinMax: '<S228>/Minimum2' */
        }

        /* Outport: '<Root>/VeADIB_Cnt_WEDPosnSnsr2ElecFlt_MFOP' */
        (void)Rte_Write_VeADIB_Cnt_WEDPosnSnsr2ElecFlt_MFOP_Value
            (rtb_TmpSignalConversionAtVeNV_f);
    }

    /* End of Switch: '<S235>/Switch1' */

    /* RelationalOperator: '<S240>/Relational Operator3' incorporates:
     *  Constant: '<S240>/Constant3'
     *  S-Function (sfix_bitop): '<S240>/Bitwise Operator2'
     */
    rtb_NOT4_p = ((((uint32)rtb_TmpSignalConversionAtVeDM_p) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S240>/EdgeFalling1' */
    /* Logic: '<S240>/Logical Operator' incorporates:
     *  Logic: '<S242>/OR1'
     */
    rtb_OR2_c = !rtb_NOT4_p;

    /* End of Outputs for SubSystem: '<S240>/EdgeFalling1' */

    /* Logic: '<S240>/Logical1' incorporates:
     *  Constant: '<S238>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S239>/KeTAIB_b_STGDiagEnbl_CEXV_OutTSnsr'
     *  Constant: '<S240>/Constant1'
     *  Logic: '<S215>/Logical Operator'
     *  Logic: '<S240>/Logical Operator'
     *  Logic: '<S240>/Logical10'
     *  Logic: '<S240>/Logical12'
     *  RelationalOperator: '<S240>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S240>/Bitwise Operator3'
     */
    rtb_RelationalOperator3_d = ((rtb_RelationalOperator3_d &&
        (KeADIB_b_OofRDiagEnblWED_Pwm_PosnSns2)) &&
        ((!KeADIB_b_LtchEnblWEDPosnSnsr2OofR) || (((((uint32)
        rtb_TmpSignalConversionAtVeDM_p) & 1U) == 0U) || rtb_OR2_c)));

    /* Outputs for Atomic SubSystem: '<S240>/EdgeFalling1' */
    /* Logic: '<S242>/AND' incorporates:
     *  UnitDelay: '<S242>/Unit Delay'
     */
    rtb_OR2_c = (rtb_OR2_c && (ADIB_ac_DW.UnitDelay_DSTATE_lx));

    /* Update for UnitDelay: '<S242>/Unit Delay' */
    ADIB_ac_DW.UnitDelay_DSTATE_lx = rtb_NOT4_p;

    /* End of Outputs for SubSystem: '<S240>/EdgeFalling1' */

    /* Logic: '<S240>/Logical5' incorporates:
     *  Logic: '<S216>/NOT4'
     */
    rtb_TmpSignalConversionAtVeA_pc = (rtb_TmpSignalConversionAtVeA_pc ||
        rtb_OR2_c);

    /* Logic: '<S241>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S241>/Unit Delay'
     *  UnitDelay: '<S241>/Unit Delay1'
     */
    rtb_OR2_c = ((rtb_TmpSignalConversionAtVeA_pc ||
                  (ADIB_ac_DW.UnitDelay_DSTATE_b)) ||
                 (ADIB_ac_DW.UnitDelay1_DSTATE_h));

    /* Logic: '<S205>/OR1' */
    rtb_NOT4_p = ((VeADIB_b_Fault_Criteria_DC_PosOutofRange2) ||
                  (VeADIB_b_Fault_Criteria_Prd_PosOutofRange2));

    /* Outputs for Atomic SubSystem: '<S241>/Counter Reset  Enabled ' */
    /* Outputs for Atomic SubSystem: '<S241>/Counter Reset  Enabled 1' */
    /* Switch: '<S249>/Switch1' incorporates:
     *  Switch: '<S248>/Switch1'
     *  Switch: '<S249>/Switch2'
     */
    if (rtb_OR2_c)
    {
        /* Switch: '<S249>/Switch1' incorporates:
         *  Constant: '<S249>/Constant Value2'
         */
        VeADIB_Cnt_OofRSamplWED_Pwm_PosnSns2 = 0U;

        /* Switch: '<S248>/Switch1' incorporates:
         *  Constant: '<S248>/Constant Value2'
         */
        VeADIB_Cnt_OofRFailWED_Pwm_PosnSns2 = 0U;
    }
    else
    {
        if (rtb_RelationalOperator3_d)
        {
            /* Switch: '<S249>/Switch1' incorporates:
             *  Constant: '<S249>/Constant Value1'
             *  Sum: '<S249>/Subtraction'
             *  Switch: '<S249>/Switch2'
             *  UnitDelay: '<S249>/Unit Delay'
             */
            VeADIB_Cnt_OofRSamplWED_Pwm_PosnSns2 = (uint16)(((uint32)
                VeADIB_Cnt_OofRSamplWED_Pwm_PosnSns2) + 1U);
        }

        /* Switch: '<S248>/Switch2' incorporates:
         *  Logic: '<S241>/NOT6'
         */
        if (rtb_RelationalOperator3_d && rtb_NOT4_p)
        {
            /* Switch: '<S248>/Switch1' incorporates:
             *  Constant: '<S248>/Constant Value1'
             *  Sum: '<S248>/Subtraction'
             *  Switch: '<S248>/Switch2'
             *  UnitDelay: '<S248>/Unit Delay'
             */
            VeADIB_Cnt_OofRFailWED_Pwm_PosnSns2 = (uint16)(((uint32)
                VeADIB_Cnt_OofRFailWED_Pwm_PosnSns2) + 1U);
        }

        /* End of Switch: '<S248>/Switch2' */
    }

    /* End of Switch: '<S249>/Switch1' */
    /* End of Outputs for SubSystem: '<S241>/Counter Reset  Enabled 1' */
    /* End of Outputs for SubSystem: '<S241>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S241>/Greater Than or Equal ' incorporates:
     *  Constant: '<S236>/KeTAIB_Cnt_STGFailLimCEXV_OutTSnsr'
     */
    rtb_RelationalOperator3_d = (VeADIB_Cnt_OofRFailWED_Pwm_PosnSns2 >=
        KeADIB_Cnt_OofRFailLimWED_Pwm_PosnSns2);

    /* Logic: '<S241>/NOT5' incorporates:
     *  Constant: '<S237>/KeTAIB_Cnt_STGSmplLimCEXV_OutTSnsr'
     *  Logic: '<S241>/NOT3'
     *  RelationalOperator: '<S241>/Less Than  or Equal'
     */
    rtb_OR2_c = ((VeADIB_Cnt_OofRSamplWED_Pwm_PosnSns2 >=
                  KeADIB_Cnt_OofRSmplLimWED_Pwm_PosnSns2) &&
                 (!rtb_RelationalOperator3_d));

    /* Outputs for Enabled SubSystem: '<S240>/Pass' */
    ADIB_ac_Pass(rtb_OR2_c, &ADIB_ac_B.Merge_f);

    /* End of Outputs for SubSystem: '<S240>/Pass' */

    /* Outputs for Enabled SubSystem: '<S240>/Fail' */
    ADIB_ac_Fail(rtb_RelationalOperator3_d, &ADIB_ac_B.Merge_f);

    /* End of Outputs for SubSystem: '<S240>/Fail' */

    /* Outputs for Enabled SubSystem: '<S240>/Init' */
    ADIB_ac_Init_o(rtb_TmpSignalConversionAtVeA_pc, &ADIB_ac_B.Merge_f);

    /* End of Outputs for SubSystem: '<S240>/Init' */

    /* Logic: '<S205>/Logical Operator' incorporates:
     *  Constant: '<S224>/Constant'
     *  Constant: '<S243>/Constant'
     *  Merge: '<S221>/Merge'
     *  Merge: '<S240>/Merge'
     *  RelationalOperator: '<S221>/Relational Operator'
     *  RelationalOperator: '<S240>/Relational Operator'
     */
    ADIB_ac_B.VeADIB_b_WED_Pwm_PosnSns2_FA = ((((uint32)ADIB_ac_B.Merge_l) ==
        CeDFIB_e_Fail) || (((uint32)ADIB_ac_B.Merge_f) == CeDFIB_e_Fail));

    /* Logic: '<S205>/Logical Operator1' */
    ADIB_ac_B.LogicalOperator1 = (rtb_NOT4_p || rtb_TmpSignalConversionAtVeA_jo);

    /* Switch: '<S254>/Switch1' incorporates:
     *  Switch: '<S253>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDF_i)
    {
        /* Outport: '<Root>/VeADIB_Cnt_WEDPosnSnsr2PosnOOR_MFOP' incorporates:
         *  Constant: '<S247>/Constant Value'
         */
        (void)Rte_Write_VeADIB_Cnt_WEDPosnSnsr2PosnOOR_MFOP_Value((uint16)0U);
    }
    else
    {
        if (rtb_OR2_c)
        {
            /* MinMax: '<S247>/Minimum2' incorporates:
             *  Switch: '<S253>/Switch1'
             */
            if (VeADIB_Cnt_OofRFailWED_Pwm_PosnSns2 >
                    rtb_TmpSignalConversionAtVeNV_d)
            {
                /* Switch: '<S253>/Switch1' */
                rtb_TmpSignalConversionAtVeNV_d =
                    VeADIB_Cnt_OofRFailWED_Pwm_PosnSns2;
            }

            /* End of MinMax: '<S247>/Minimum2' */
        }

        /* Outport: '<Root>/VeADIB_Cnt_WEDPosnSnsr2PosnOOR_MFOP' */
        (void)Rte_Write_VeADIB_Cnt_WEDPosnSnsr2PosnOOR_MFOP_Value
            (rtb_TmpSignalConversionAtVeNV_d);
    }

    /* End of Switch: '<S254>/Switch1' */

    /* Update for UnitDelay: '<S222>/Unit Delay' */
    ADIB_ac_DW.UnitDelay_DSTATE_o = rtb_TmpSignalConversionAtVeAD_p;

    /* Update for UnitDelay: '<S222>/Unit Delay1' */
    ADIB_ac_DW.UnitDelay1_DSTATE_o = rtb_TmpSignalConversionAtVeA_cy;

    /* Update for UnitDelay: '<S241>/Unit Delay' */
    ADIB_ac_DW.UnitDelay_DSTATE_b = rtb_OR2_c;

    /* Update for UnitDelay: '<S241>/Unit Delay1' */
    ADIB_ac_DW.UnitDelay1_DSTATE_h = rtb_RelationalOperator3_d;

    /* End of Outputs for SubSystem: '<S151>/WEDPwmPositionSense2' */

    /* SignalConversion generated from: '<S149>/VeADIB_b_WED_Pwm_PosnSns2_FA' */
    rtb_RelationalOperator3_d = ADIB_ac_B.VeADIB_b_WED_Pwm_PosnSns2_FA;

    /* Outputs for Atomic SubSystem: '<S152>/WED_Command' */

    /* RelationalOperator: '<S267>/Relational Operator3' incorporates:
     *  Constant: '<S267>/Constant3'
     *  S-Function (sfix_bitop): '<S267>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeAD_p = ((((uint32)rtb_TmpSignalConversionAtVeD_mz)
        & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S267>/EdgeFalling1' */
    /* Logic: '<S267>/Logical Operator' incorporates:
     *  Logic: '<S269>/OR1'
     */
    rtb_TmpSignalConversionAtVeA_pc = !rtb_TmpSignalConversionAtVeAD_p;

    /* End of Outputs for SubSystem: '<S267>/EdgeFalling1' */

    /* Logic: '<S262>/Logical Operator' incorporates:
     *  Constant: '<S256>/Constant1'
     *  Constant: '<S256>/Constant2'
     *  Constant: '<S257>/Constant1'
     *  Constant: '<S257>/Constant2'
     *  Logic: '<S255>/OR2'
     *  Logic: '<S256>/Logical Operator'
     *  Logic: '<S257>/Logical Operator'
     *  Logic: '<S262>/NOT'
     *  Logic: '<S284>/Logical Operator'
     *  RelationalOperator: '<S256>/Relational Operator1'
     *  RelationalOperator: '<S256>/Relational Operator2'
     *  RelationalOperator: '<S257>/Relational Operator1'
     *  RelationalOperator: '<S257>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S256>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S256>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S257>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S257>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeDFIR = (((((((sint32)
        rtb_TmpSignalConversionAtVeDM_d) & 1) <= 0) || ((((uint32)
        rtb_TmpSignalConversionAtVeDM_d) & 64U) != 0U)) && (((((sint32)
        rtb_TmpSignalConversionAtVeDM_o) & 1) <= 0) || ((((uint32)
        rtb_TmpSignalConversionAtVeDM_o) & 64U) != 0U))) &&
        rtb_TmpSignalConversionAtVeDFIR);

    /* Logic: '<S267>/Logical1' incorporates:
     *  Constant: '<S265>/Calib'
     *  Constant: '<S266>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S267>/Constant1'
     *  Logic: '<S262>/Logical Operator'
     *  Logic: '<S267>/Logical Operator'
     *  Logic: '<S267>/Logical10'
     *  Logic: '<S267>/Logical12'
     *  RelationalOperator: '<S267>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S267>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeA_jo = ((rtb_TmpSignalConversionAtVeDFIR &&
        (KeADIB_b_ElcFltDiagEnbl_LtWED)) && ((!KeADIB_b_LtchEnblLtWEDElecFlt) ||
        (((((uint32)rtb_TmpSignalConversionAtVeD_mz) & 1U) == 0U) ||
         rtb_TmpSignalConversionAtVeA_pc)));

    /* Outputs for Atomic SubSystem: '<S267>/EdgeFalling1' */
    /* Logic: '<S269>/AND' incorporates:
     *  UnitDelay: '<S269>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeA_pc = (rtb_TmpSignalConversionAtVeA_pc &&
        (ADIB_ac_DW.UnitDelay_DSTATE_c));

    /* Update for UnitDelay: '<S269>/Unit Delay' */
    ADIB_ac_DW.UnitDelay_DSTATE_c = rtb_TmpSignalConversionAtVeAD_p;

    /* End of Outputs for SubSystem: '<S267>/EdgeFalling1' */

    /* Logic: '<S267>/Logical5' incorporates:
     *  Logic: '<S261>/NOT4'
     */
    rtb_TmpSignalConversionAtVeAD_p = ((rtb_TmpSignalConversionAtVeDF_g ||
        rtb_TmpSignalConversionAtVeDF_i) || rtb_TmpSignalConversionAtVeA_pc);

    /* Outputs for Atomic SubSystem: '<S268>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S268>/Counter Reset  Enabled ' */
    /* Switch: '<S275>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_b_Hbrdg_LtWheelEndDisconnectDiagCmn_b_FailrPrsnt'
     *  Logic: '<S268>/Fail Counter Reset'
     *  Switch: '<S276>/Switch1'
     *  UnitDelay: '<S268>/Unit Delay'
     *  UnitDelay: '<S268>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVeAD_p || (ADIB_ac_DW.UnitDelay_DSTATE_hj)) ||
        (ADIB_ac_DW.UnitDelay1_DSTATE))
    {
        /* Switch: '<S275>/Switch1' incorporates:
         *  Constant: '<S275>/Constant Value2'
         */
        VeADIB_Cnt_ElcFltFailLtWED = 0U;

        /* Switch: '<S276>/Switch1' incorporates:
         *  Constant: '<S276>/Constant Value2'
         */
        VeADIB_Cnt_ElcFltSmplLtWED = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_b_Hbrdg_LtWheelEndDisconnectDiagCmn_b_FailrPrsnt
            (&rtb_GreaterThanorEqual);

        /* Switch: '<S275>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_b_Hbrdg_LtWheelEndDisconnectDiagCmn_b_FailrPrsnt'
         *  Logic: '<S268>/NOT6'
         */
        if (rtb_TmpSignalConversionAtVeA_jo && rtb_GreaterThanorEqual)
        {
            /* Switch: '<S275>/Switch1' incorporates:
             *  Constant: '<S275>/Constant Value1'
             *  Sum: '<S275>/Subtraction'
             *  Switch: '<S275>/Switch2'
             *  UnitDelay: '<S275>/Unit Delay'
             */
            VeADIB_Cnt_ElcFltFailLtWED = (uint16)(((uint32)
                VeADIB_Cnt_ElcFltFailLtWED) + 1U);
        }

        /* End of Switch: '<S275>/Switch2' */

        /* Switch: '<S276>/Switch2' */
        if (rtb_TmpSignalConversionAtVeA_jo)
        {
            /* Switch: '<S276>/Switch1' incorporates:
             *  Constant: '<S276>/Constant Value1'
             *  Sum: '<S276>/Subtraction'
             *  Switch: '<S276>/Switch2'
             *  UnitDelay: '<S276>/Unit Delay'
             */
            VeADIB_Cnt_ElcFltSmplLtWED = (uint16)(((uint32)
                VeADIB_Cnt_ElcFltSmplLtWED) + 1U);
        }

        /* End of Switch: '<S276>/Switch2' */
    }

    /* End of Switch: '<S275>/Switch1' */
    /* End of Outputs for SubSystem: '<S268>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S268>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S268>/Greater Than or Equal ' incorporates:
     *  Constant: '<S263>/Calib'
     */
    rtb_GreaterThanorEqual = (VeADIB_Cnt_ElcFltFailLtWED >=
        KeADIB_Cnt_ElcFltFailLimLtWED);

    /* Logic: '<S268>/NOT5' incorporates:
     *  Constant: '<S264>/Calib'
     *  Logic: '<S268>/NOT3'
     *  RelationalOperator: '<S268>/Less Than  or Equal'
     */
    rtb_TmpSignalConversionAtVeA_jo = ((VeADIB_Cnt_ElcFltSmplLtWED >=
        KeADIB_Cnt_ElcFltSmplLimLtWED) && (!rtb_GreaterThanorEqual));

    /* Outputs for Enabled SubSystem: '<S267>/Fail' */
    ADIB_ac_Fail(rtb_GreaterThanorEqual, &ADIB_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S267>/Fail' */

    /* Outputs for Enabled SubSystem: '<S267>/Init' */
    ADIB_ac_Init_o(rtb_TmpSignalConversionAtVeAD_p, &ADIB_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S267>/Init' */

    /* Outputs for Enabled SubSystem: '<S267>/Pass' */
    ADIB_ac_Pass(rtb_TmpSignalConversionAtVeA_jo, &ADIB_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S267>/Pass' */

    /* RelationalOperator: '<S267>/Relational Operator' incorporates:
     *  Constant: '<S270>/Constant'
     *  Merge: '<S267>/Merge'
     */
    ADIB_ac_B.RelationalOperator = (((uint32)ADIB_ac_B.Merge) == CeDFIB_e_Fail);

    /* Switch: '<S281>/Switch1' incorporates:
     *  Switch: '<S280>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDF_i)
    {
        /* Outport: '<Root>/VeADIB_Cnt_LtWEDElecFlt_MFOP' incorporates:
         *  Constant: '<S274>/Constant Value'
         */
        (void)Rte_Write_VeADIB_Cnt_LtWEDElecFlt_MFOP_Value((uint16)0U);
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeA_jo)
        {
            /* MinMax: '<S274>/Minimum2' incorporates:
             *  Switch: '<S280>/Switch1'
             */
            if (VeADIB_Cnt_ElcFltFailLtWED > rtb_TmpSignalConversionAtVeNV_i)
            {
                /* Switch: '<S280>/Switch1' */
                rtb_TmpSignalConversionAtVeNV_i = VeADIB_Cnt_ElcFltFailLtWED;
            }

            /* End of MinMax: '<S274>/Minimum2' */
        }

        /* Outport: '<Root>/VeADIB_Cnt_LtWEDElecFlt_MFOP' */
        (void)Rte_Write_VeADIB_Cnt_LtWEDElecFlt_MFOP_Value
            (rtb_TmpSignalConversionAtVeNV_i);
    }

    /* End of Switch: '<S281>/Switch1' */

    /* RelationalOperator: '<S289>/Relational Operator3' incorporates:
     *  Constant: '<S289>/Constant3'
     *  S-Function (sfix_bitop): '<S289>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeAD_p = ((((uint32)rtb_TmpSignalConversionAtVeDM_e)
        & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S289>/EdgeFalling1' */
    /* Logic: '<S289>/Logical Operator' incorporates:
     *  Logic: '<S291>/OR1'
     */
    rtb_TmpSignalConversionAtVeA_pc = !rtb_TmpSignalConversionAtVeAD_p;

    /* End of Outputs for SubSystem: '<S289>/EdgeFalling1' */

    /* Logic: '<S289>/Logical1' incorporates:
     *  Constant: '<S287>/Calib'
     *  Constant: '<S288>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S289>/Constant1'
     *  Logic: '<S284>/Logical Operator'
     *  Logic: '<S289>/Logical Operator'
     *  Logic: '<S289>/Logical10'
     *  Logic: '<S289>/Logical12'
     *  RelationalOperator: '<S289>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S289>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeDFIR = ((rtb_TmpSignalConversionAtVeDFIR &&
        (KeADIB_b_ElcFltDiagEnbl_RtWED)) && ((!KeADIB_b_LtchEnblRtWEDElecFlt) ||
        (((((uint32)rtb_TmpSignalConversionAtVeDM_e) & 1U) == 0U) ||
         rtb_TmpSignalConversionAtVeA_pc)));

    /* Outputs for Atomic SubSystem: '<S289>/EdgeFalling1' */
    /* Logic: '<S291>/AND' incorporates:
     *  UnitDelay: '<S291>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeA_cy = (rtb_TmpSignalConversionAtVeA_pc &&
        (ADIB_ac_DW.UnitDelay_DSTATE_e));

    /* Update for UnitDelay: '<S291>/Unit Delay' */
    ADIB_ac_DW.UnitDelay_DSTATE_e = rtb_TmpSignalConversionAtVeAD_p;

    /* End of Outputs for SubSystem: '<S289>/EdgeFalling1' */

    /* Logic: '<S289>/Logical5' incorporates:
     *  Logic: '<S283>/NOT4'
     */
    rtb_TmpSignalConversionAtVeDF_g = ((rtb_TmpSignalConversionAtVeDF_g ||
        rtb_TmpSignalConversionAtVeDF_i) || rtb_TmpSignalConversionAtVeA_cy);

    /* Outputs for Atomic SubSystem: '<S290>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S290>/Counter Reset  Enabled ' */
    /* Switch: '<S297>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_b_Hbrdg_RtWheelEndDisconnectDiagCmn_b_FailrPrsnt'
     *  Logic: '<S290>/Fail Counter Reset'
     *  Switch: '<S298>/Switch1'
     *  UnitDelay: '<S290>/Unit Delay'
     *  UnitDelay: '<S290>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVeDF_g || (ADIB_ac_DW.UnitDelay_DSTATE_fe)) ||
        (ADIB_ac_DW.UnitDelay1_DSTATE_k))
    {
        /* Switch: '<S297>/Switch1' incorporates:
         *  Constant: '<S297>/Constant Value2'
         */
        VeADIB_Cnt_ElcFltFailRtWED = 0U;

        /* Switch: '<S298>/Switch1' incorporates:
         *  Constant: '<S298>/Constant Value2'
         */
        VeADIB_Cnt_ElcFltSmplRtWED = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_b_Hbrdg_RtWheelEndDisconnectDiagCmn_b_FailrPrsnt
            (&rtb_GreaterThanorEqual_h);

        /* Switch: '<S297>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_b_Hbrdg_RtWheelEndDisconnectDiagCmn_b_FailrPrsnt'
         *  Logic: '<S290>/NOT6'
         */
        if (rtb_TmpSignalConversionAtVeDFIR && rtb_GreaterThanorEqual_h)
        {
            /* Switch: '<S297>/Switch1' incorporates:
             *  Constant: '<S297>/Constant Value1'
             *  Sum: '<S297>/Subtraction'
             *  Switch: '<S297>/Switch2'
             *  UnitDelay: '<S297>/Unit Delay'
             */
            VeADIB_Cnt_ElcFltFailRtWED = (uint16)(((uint32)
                VeADIB_Cnt_ElcFltFailRtWED) + 1U);
        }

        /* End of Switch: '<S297>/Switch2' */

        /* Switch: '<S298>/Switch2' */
        if (rtb_TmpSignalConversionAtVeDFIR)
        {
            /* Switch: '<S298>/Switch1' incorporates:
             *  Constant: '<S298>/Constant Value1'
             *  Sum: '<S298>/Subtraction'
             *  Switch: '<S298>/Switch2'
             *  UnitDelay: '<S298>/Unit Delay'
             */
            VeADIB_Cnt_ElcFltSmplRtWED = (uint16)(((uint32)
                VeADIB_Cnt_ElcFltSmplRtWED) + 1U);
        }

        /* End of Switch: '<S298>/Switch2' */
    }

    /* End of Switch: '<S297>/Switch1' */
    /* End of Outputs for SubSystem: '<S290>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S290>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S290>/Greater Than or Equal ' incorporates:
     *  Constant: '<S285>/Calib'
     */
    rtb_GreaterThanorEqual_h = (VeADIB_Cnt_ElcFltFailRtWED >=
        KeADIB_Cnt_ElcFltFailLimRtWED);

    /* Logic: '<S290>/NOT5' incorporates:
     *  Constant: '<S286>/Calib'
     *  Logic: '<S290>/NOT3'
     *  RelationalOperator: '<S290>/Less Than  or Equal'
     */
    rtb_TmpSignalConversionAtVeDFIR = ((VeADIB_Cnt_ElcFltSmplRtWED >=
        KeADIB_Cnt_ElcFltSmplLimRtWED) && (!rtb_GreaterThanorEqual_h));

    /* Outputs for Enabled SubSystem: '<S289>/Fail' */
    ADIB_ac_Fail(rtb_GreaterThanorEqual_h, &ADIB_ac_B.Merge_a);

    /* End of Outputs for SubSystem: '<S289>/Fail' */

    /* Outputs for Enabled SubSystem: '<S289>/Init' */
    ADIB_ac_Init_o(rtb_TmpSignalConversionAtVeDF_g, &ADIB_ac_B.Merge_a);

    /* End of Outputs for SubSystem: '<S289>/Init' */

    /* Outputs for Enabled SubSystem: '<S289>/Pass' */
    ADIB_ac_Pass(rtb_TmpSignalConversionAtVeDFIR, &ADIB_ac_B.Merge_a);

    /* End of Outputs for SubSystem: '<S289>/Pass' */

    /* RelationalOperator: '<S289>/Relational Operator' incorporates:
     *  Constant: '<S292>/Constant'
     *  Merge: '<S289>/Merge'
     */
    ADIB_ac_B.RelationalOperator_d = (((uint32)ADIB_ac_B.Merge_a) ==
        CeDFIB_e_Fail);

    /* Switch: '<S303>/Switch1' incorporates:
     *  Switch: '<S302>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDF_i)
    {
        /* Outport: '<Root>/VeADIB_Cnt_RtWEDElecFlt_MFOP' incorporates:
         *  Constant: '<S296>/Constant Value'
         */
        (void)Rte_Write_VeADIB_Cnt_RtWEDElecFlt_MFOP_Value((uint16)0U);
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeDFIR)
        {
            /* MinMax: '<S296>/Minimum2' incorporates:
             *  Switch: '<S302>/Switch1'
             */
            if (VeADIB_Cnt_ElcFltFailRtWED > rtb_TmpSignalConversionAtVeNV_l)
            {
                /* Switch: '<S302>/Switch1' */
                rtb_TmpSignalConversionAtVeNV_l = VeADIB_Cnt_ElcFltFailRtWED;
            }

            /* End of MinMax: '<S296>/Minimum2' */
        }

        /* Outport: '<Root>/VeADIB_Cnt_RtWEDElecFlt_MFOP' */
        (void)Rte_Write_VeADIB_Cnt_RtWEDElecFlt_MFOP_Value
            (rtb_TmpSignalConversionAtVeNV_l);
    }

    /* End of Switch: '<S303>/Switch1' */

    /* Update for UnitDelay: '<S268>/Unit Delay' */
    ADIB_ac_DW.UnitDelay_DSTATE_hj = rtb_TmpSignalConversionAtVeA_jo;

    /* Update for UnitDelay: '<S268>/Unit Delay1' */
    ADIB_ac_DW.UnitDelay1_DSTATE = rtb_GreaterThanorEqual;

    /* Update for UnitDelay: '<S290>/Unit Delay' */
    ADIB_ac_DW.UnitDelay_DSTATE_fe = rtb_TmpSignalConversionAtVeDFIR;

    /* Update for UnitDelay: '<S290>/Unit Delay1' */
    ADIB_ac_DW.UnitDelay1_DSTATE_k = rtb_GreaterThanorEqual_h;

    /* End of Outputs for SubSystem: '<S152>/WED_Command' */

    /* Outport: '<Root>/VeADIB_b_WED_Pwm_PosnSns1_FA' */
    (void)Rte_Write_VeADIB_b_WED_Pwm_PosnSns1_FA_Value
        (OutportBufferForVeADIB_b_WED_Pw);

    /* Outport: '<Root>/VeADIB_b_WED_Pwm_PosnSns2_FA' */
    (void)Rte_Write_VeADIB_b_WED_Pwm_PosnSns2_FA_Value(rtb_RelationalOperator3_d);

    /* Outport: '<Root>/VeADIB_e_FaultSts_LF_WHL_HubDisConActCntrl' incorporates:
     *  Merge: '<S267>/Merge'
     */
    (void)Rte_Write_VeADIB_e_FaultSts_LF_WHL_HubDisConActCntrl_Value
        (ADIB_ac_B.Merge);

    /* Outport: '<Root>/VeADIB_e_FaultSts_RF_WHL_HubDisConActCntrl' incorporates:
     *  Merge: '<S289>/Merge'
     */
    (void)Rte_Write_VeADIB_e_FaultSts_RF_WHL_HubDisConActCntrl_Value
        (ADIB_ac_B.Merge_a);

    /* Outport: '<Root>/VeADIB_e_FaultSts_RF_WHL_HubDisConActPosSnsr' incorporates:
     *  Merge: '<S170>/Merge'
     */
    (void)Rte_Write_VeADIB_e_FaultSts_RF_WHL_HubDisConActPosSnsr_Value
        (ADIB_ac_B.Merge_ag);

    /* Outport: '<Root>/VeADIB_e_FaultSts_RF_WHL_HubDisConActPosSnsrCktPerf' incorporates:
     *  Merge: '<S189>/Merge'
     */
    (void)Rte_Write_VeADIB_e_FaultSts_RF_WHL_HubDisConActPosSnsrCktPerf_Value
        (ADIB_ac_B.Merge_h);

    /* Outport: '<Root>/VeADIB_e_FaultSts_LF_WHL_HubDisConActPosSnsr' incorporates:
     *  Merge: '<S221>/Merge'
     */
    (void)Rte_Write_VeADIB_e_FaultSts_LF_WHL_HubDisConActPosSnsr_Value
        (ADIB_ac_B.Merge_l);

    /* Outport: '<Root>/VeADIB_e_FaultSts_LF_WHL_HubDisConActPosSnsrCktPerf' incorporates:
     *  Merge: '<S240>/Merge'
     */
    (void)Rte_Write_VeADIB_e_FaultSts_LF_WHL_HubDisConActPosSnsrCktPerf_Value
        (ADIB_ac_B.Merge_f);

    /* SignalConversion generated from: '<S2>/VeADIB_b_LtWED_FA' */
    Rte_IrvWrite_ADIB_MedTEB_VeADIB_b_LtWED_FA_IRV(ADIB_ac_B.RelationalOperator);

    /* SignalConversion generated from: '<S2>/VeADIB_b_RtWED_FA' */
    Rte_IrvWrite_ADIB_MedTEB_VeADIB_b_RtWED_FA_IRV
        (ADIB_ac_B.RelationalOperator_d);

    /* SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns1_FA1' */
    Rte_IrvWrite_ADIB_MedTEB_VeADIB_b_WED_Pwm_PosnSns1_FA1_IRV
        (ADIB_ac_B.LogicalOperator);

    /* SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns1_FaultCriteria' */
    Rte_IrvWrite_ADIB_MedTEB_VeADIB_b_WED_Pwm_PosnSns1_FaultCriteria_IRV
        (ADIB_ac_B.LogicalOperator1_o);

    /* SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns2_FA1' */
    Rte_IrvWrite_ADIB_MedTEB_VeADIB_b_WED_Pwm_PosnSns2_FA1_IRV
        (ADIB_ac_B.VeADIB_b_WED_Pwm_PosnSns2_FA);

    /* SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns2_FualtCriteria' */
    Rte_IrvWrite_ADIB_MedTEB_VeADIB_b_WED_Pwm_PosnSns2_FualtCriteria_IRV
        (ADIB_ac_B.LogicalOperator1);

    /* End of Outputs for SubSystem: '<S149>/WEDPwmPositionSense1' */
    /* End of Outputs for SubSystem: '<S149>/WEDPwmPositionSense2' */
    /* End of Outputs for SubSystem: '<S149>/WED_Command' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S149>/VeADIB_b_WED_Pwm_PosnSns1_FA' */

    /* Outputs for Atomic SubSystem: '<S2>/ADIB_MedTEB_StopCheckpoint' */
    /* FunctionCaller: '<S148>/ADIB_MedTEB_StopCheckpoint' */
    Rte_Call_ADIB_MedTEB_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S2>/ADIB_MedTEB_StopCheckpoint' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model initialize function */
FUNC(void, ADIB_CODE) ADIB_ac_Init(void)
{
    /* Outputs for Atomic SubSystem: '<Root>/Init' */
    /* SystemInitialize for SignalConversion generated from: '<S2>/VeADIB_b_LtWED_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeADIB_b_RtWED_FA'
     *  SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns1_FA1'
     *  SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns1_FaultCriteria'
     *  SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns2_FA1'
     *  SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns2_FualtCriteria'
     */
#if Rte_SysCon_Variant_ADIB_WED_Presence

    /* Outputs for Atomic SubSystem: '<S3>/WED Command' */
    /* Outputs for Atomic SubSystem: '<S3>/WED_HBFeedback' */
    /* Outputs for Atomic SubSystem: '<S3>/WED_Pwm_PosnSns2' */
    /* Outputs for Atomic SubSystem: '<S3>/WED_Pwm_PosnSns1' */
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ADIB_MedTEB'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Function-Call Subsystem'
     */
    /* SystemInitialize for Atomic SubSystem: '<S149>/WED_Command' */
    /* SystemInitialize for Atomic SubSystem: '<S149>/WEDPwmPositionSense2' */
    /* SystemInitialize for Atomic SubSystem: '<S149>/WEDPwmPositionSense1' */
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEA' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/ADIB_FastTEA' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem'
     */
    /* InitializeConditions for UnitDelay: '<S6>/Unit Delay' */
    ADIB_ac_DW.UnitDelay_DSTATE_g = true;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* SystemInitialize for SignalConversion generated from: '<S1>/VeADIB_Pct_WED_Pwm_PosnSns1_DCReal' */
    Rte_IrvWrite_ADIB_ac_Init_VeADIB_Pct_WED_Pwm_PosnSns1_DCReal_IRV
        (ADIB_ac_B.Vector_e);

    /* SystemInitialize for SignalConversion generated from: '<S1>/VeADIB_Pct_WED_Pwm_PosnSns2_DCReal' */
    Rte_IrvWrite_ADIB_ac_Init_VeADIB_Pct_WED_Pwm_PosnSns2_DCReal_IRV
        (ADIB_ac_B.Vector_h);

    /* SystemInitialize for SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns1_IsPinHi1' */
    Rte_IrvWrite_ADIB_ac_Init_VeADIB_b_WED_Pwm_PosnSns1_IsPinHi1_IRV
        (ADIB_ac_B.Switch_m);

    /* SystemInitialize for SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns1_TiOut1' */
    Rte_IrvWrite_ADIB_ac_Init_VeADIB_b_WED_Pwm_PosnSns1_TiOut1_IRV
        (ADIB_ac_B.Switch_c);

    /* SystemInitialize for SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns2_IsPinHi1' */
    Rte_IrvWrite_ADIB_ac_Init_VeADIB_b_WED_Pwm_PosnSns2_IsPinHi1_IRV
        (ADIB_ac_B.VeADIB_b_WED_Pwm_PosnSns2_IsPin);

    /* SystemInitialize for SignalConversion generated from: '<S1>/VeADIB_b_WED_Pwm_PosnSns2_TiOut1' */
    Rte_IrvWrite_ADIB_ac_Init_VeADIB_b_WED_Pwm_PosnSns2_TiOut1_IRV
        (ADIB_ac_B.VeADIB_b_WED_Pwm_PosnSns2_TiOut);

    /* SystemInitialize for SignalConversion generated from: '<S1>/VeADIB_ut_WED_Pwm_PosnSns1_Prd1' */
    Rte_IrvWrite_ADIB_ac_Init_VeADIB_ut_WED_Pwm_PosnSns1_Prd1_IRV
        (ADIB_ac_B.Switch_a);

    /* SystemInitialize for SignalConversion generated from: '<S1>/VeADIB_ut_WED_Pwm_PosnSns2_Prd1' */
    Rte_IrvWrite_ADIB_ac_Init_VeADIB_ut_WED_Pwm_PosnSns2_Prd1_IRV
        (ADIB_ac_B.VeADIB_ut_WED_Pwm_PosnSns2_Prd);

    /* End of SystemInitialize for SubSystem: '<Root>/ADIB_FastTEA' */

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeADIB_b_LtWED_FA' */
    Rte_IrvWrite_ADIB_ac_Init_VeADIB_b_LtWED_FA_IRV(ADIB_ac_B.RelationalOperator);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeADIB_b_RtWED_FA' */
    Rte_IrvWrite_ADIB_ac_Init_VeADIB_b_RtWED_FA_IRV
        (ADIB_ac_B.RelationalOperator_d);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns1_FA1' */
    Rte_IrvWrite_ADIB_ac_Init_VeADIB_b_WED_Pwm_PosnSns1_FA1_IRV
        (ADIB_ac_B.LogicalOperator);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns1_FaultCriteria' */
    Rte_IrvWrite_ADIB_ac_Init_VeADIB_b_WED_Pwm_PosnSns1_FaultCriteria_IRV
        (ADIB_ac_B.LogicalOperator1_o);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns2_FA1' */
    Rte_IrvWrite_ADIB_ac_Init_VeADIB_b_WED_Pwm_PosnSns2_FA1_IRV
        (ADIB_ac_B.VeADIB_b_WED_Pwm_PosnSns2_FA);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeADIB_b_WED_Pwm_PosnSns2_FualtCriteria' */
    Rte_IrvWrite_ADIB_ac_Init_VeADIB_b_WED_Pwm_PosnSns2_FualtCriteria_IRV
        (ADIB_ac_B.LogicalOperator1);

    /* Outputs for Atomic SubSystem: '<S306>/_Init' */
    /* Outport: '<Root>/VeADIB_Pct_WED_Pwm_PosnSns1_DC' incorporates:
     *  Constant: '<S323>/KeADIB_Pct_WED_Pwm_PosnSns1_DCInit'
     *  SignalConversion: '<S320>/Signal Conversion2'
     */
    (void)Rte_Write_VeADIB_Pct_WED_Pwm_PosnSns1_DC_Value
        (KeADIB_Pct_WED_Pwm_PosnSns1_DCInit);

    /* Outport: '<Root>/VeADIB_Pct_WEDPosnSnsRight' incorporates:
     *  Constant: '<S323>/KeADIB_Pct_WED_Pwm_PosnSns1_DCInit'
     *  SignalConversion: '<S320>/Signal Conversion4'
     */
    (void)Rte_Write_VeADIB_Pct_WEDPosnSnsRight_Value
        (KeADIB_Pct_WED_Pwm_PosnSns1_DCInit);

    /* Outport: '<Root>/VeADIB_ut_WED_Pwm_PosnSns1_Prd' incorporates:
     *  Constant: '<S326>/KeADIB_ut_WED_Pwm_PosnSns1_PrdInit'
     *  SignalConversion: '<S320>/Signal Conversion1'
     */
    (void)Rte_Write_VeADIB_ut_WED_Pwm_PosnSns1_Prd_Value
        (KeADIB_ut_WED_Pwm_PosnSns1_PrdInit);

    /* Outport: '<Root>/VeADIB_ut_WED_Pwm_PosnSns1_PW' incorporates:
     *  Constant: '<S325>/KeADIB_ut_WED_Pwm_PosnSns1_PWInit'
     *  SignalConversion: '<S320>/Signal Conversion3'
     */
    (void)Rte_Write_VeADIB_ut_WED_Pwm_PosnSns1_PW_Value
        (KeADIB_ut_WED_Pwm_PosnSns1_PWInit);

    /* Outport: '<Root>/VeADIB_b_WED_Pwm_PosnSns1_IsPinHi' incorporates:
     *  Constant: '<S324>/KeADIB_b_WED_Pwm_PosnSns1_IsPinHiInit'
     */
    (void)Rte_Write_VeADIB_b_WED_Pwm_PosnSns1_IsPinHi_Value
        (KeADIB_b_WED_Pwm_PosnSns1_IsPinHiInit);

    /* Outport: '<Root>/VeADIB_e_FaultSts_RF_WHL_HubDisConActPosSnsr' incorporates:
     *  Constant: '<S321>/Constant'
     */
    (void)Rte_Write_VeADIB_e_FaultSts_RF_WHL_HubDisConActPosSnsr_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeADIB_e_FaultSts_RF_WHL_HubDisConActPosSnsrCktPerf' incorporates:
     *  Constant: '<S322>/Constant'
     */
    (void)Rte_Write_VeADIB_e_FaultSts_RF_WHL_HubDisConActPosSnsrCktPerf_Value
        (CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S306>/_Init' */

    /* Outputs for Atomic SubSystem: '<S307>/_Init' */
    /* Outport: '<Root>/VeADIB_Pct_WED_Pwm_PosnSns2_DC' incorporates:
     *  Constant: '<S332>/KeTAIB_Pct_RadFanSts_DCInit'
     *  SignalConversion: '<S327>/Signal Conversion2'
     */
    (void)Rte_Write_VeADIB_Pct_WED_Pwm_PosnSns2_DC_Value
        (KeADIB_Pct_WED_Pwm_PosnSns2_DCInit);

    /* Outport: '<Root>/VeADIB_Pct_WEDPosnSnsLeft' incorporates:
     *  Constant: '<S332>/KeTAIB_Pct_RadFanSts_DCInit'
     *  SignalConversion: '<S327>/Signal Conversion4'
     */
    (void)Rte_Write_VeADIB_Pct_WEDPosnSnsLeft_Value
        (KeADIB_Pct_WED_Pwm_PosnSns2_DCInit);

    /* Outport: '<Root>/VeADIB_ut_WED_Pwm_PosnSns2_Prd' incorporates:
     *  Constant: '<S331>/KeADIB_ut_WED_Pwm_PosnSns2_PrdInit'
     *  SignalConversion: '<S327>/Signal Conversion1'
     */
    (void)Rte_Write_VeADIB_ut_WED_Pwm_PosnSns2_Prd_Value
        (KeADIB_ut_WED_Pwm_PosnSns2_PrdInit);

    /* Outport: '<Root>/VeADIB_ut_WED_Pwm_PosnSns2_PW' incorporates:
     *  Constant: '<S330>/KeADIB_ut_WED_Pwm_PosnSns2_PWInit'
     *  SignalConversion: '<S327>/Signal Conversion3'
     */
    (void)Rte_Write_VeADIB_ut_WED_Pwm_PosnSns2_PW_Value
        (KeADIB_ut_WED_Pwm_PosnSns2_PWInit);

    /* Outport: '<Root>/VeADIB_b_WED_Pwm_PosnSns2_IsPinHi' incorporates:
     *  Constant: '<S333>/KeTAIB_Pct_RadFanSts_DCInit'
     */
    (void)Rte_Write_VeADIB_b_WED_Pwm_PosnSns2_IsPinHi_Value
        (KeADIB_b_WED_Pwm_PosnSns2_IsPinHiInit);

    /* Outport: '<Root>/VeADIB_e_FaultSts_LF_WHL_HubDisConActPosSnsr' incorporates:
     *  Constant: '<S328>/Constant'
     */
    (void)Rte_Write_VeADIB_e_FaultSts_LF_WHL_HubDisConActPosSnsr_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeADIB_e_FaultSts_LF_WHL_HubDisConActPosSnsrCktPerf' incorporates:
     *  Constant: '<S329>/Constant'
     */
    (void)Rte_Write_VeADIB_e_FaultSts_LF_WHL_HubDisConActPosSnsrCktPerf_Value
        (CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S307>/_Init' */

    /* Outputs for Atomic SubSystem: '<S304>/WED Command' */
    /* Outport: '<Root>/VeADIB_e_FaultSts_LF_WHL_HubDisConActCntrl' incorporates:
     *  Constant: '<S309>/Constant'
     */
    (void)Rte_Write_VeADIB_e_FaultSts_LF_WHL_HubDisConActCntrl_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeADIB_e_FaultSts_RF_WHL_HubDisConActCntrl' incorporates:
     *  Constant: '<S310>/Constant'
     */
    (void)Rte_Write_VeADIB_e_FaultSts_RF_WHL_HubDisConActCntrl_Value
        (CeDFIB_e_Init);

    /* FunctionCaller: '<S308>/ServDIOR_Hbrdg_LtWheelEndDisconnect_SetDIOR_CurrLim' */
    Rte_Call_ServDIOR_Hbrdg_LtWheelEndDisconnect_SetDIOR_CurrLim
        (KeADIB_I_LtWEDCurrLimInit);

    /* FunctionCaller: '<S308>/ServDIOR_Hbrdg_RtWheelEndDisconnect_SetDIOR_CurrLim' */
    Rte_Call_ServDIOR_Hbrdg_RtWheelEndDisconnect_SetDIOR_CurrLim
        (KeADIB_I_RtWEDCurrLimInit);

    /* FunctionCaller: '<S308>/ServDIOR_Hbrdg_LtWheelEndDisconnect_SetDIOR_DutyCyc' */
    Rte_Call_ServDIOR_Hbrdg_LtWheelEndDisconnect_SetDIOR_DutyCyc
        (KeADIB_Pct_LtWEDDutyCycleInit);

    /* FunctionCaller: '<S308>/ServDIOR_Hbrdg_RtWheelEndDisconnect_SetDIOR_DutyCyc' */
    Rte_Call_ServDIOR_Hbrdg_RtWheelEndDisconnect_SetDIOR_DutyCyc
        (KeADIB_Pct_RtWEDDutyCycleInit);

    /* FunctionCaller: '<S308>/ServDIOR_Hbrdg_LtWheelEndDisconnect_SetDIOR_EnblSt' */
    Rte_Call_ServDIOR_Hbrdg_LtWheelEndDisconnect_SetDIOR_EnblSt
        (KeADIB_b_LtWEDEnblInit);

    /* FunctionCaller: '<S308>/ServDIOR_Hbrdg_RtWheelEndDisconnect_SetDIOR_EnblSt' */
    Rte_Call_ServDIOR_Hbrdg_RtWheelEndDisconnect_SetDIOR_EnblSt
        (KeADIB_b_RtWEDEnblInit);

    /* FunctionCaller: '<S308>/ServDIOR_Hbrdg_LtWheelEndDisconnect_SetDIOR_Prd' */
    Rte_Call_ServDIOR_Hbrdg_LtWheelEndDisconnect_SetDIOR_Prd
        (KeADIB_t_LtWEDPrdInit);

    /* FunctionCaller: '<S308>/ServDIOR_Hbrdg_RtWheelEndDisconnect_SetDIOR_Prd' */
    Rte_Call_ServDIOR_Hbrdg_RtWheelEndDisconnect_SetDIOR_Prd
        (KeADIB_t_RtWEDPrdInit);

    /* End of Outputs for SubSystem: '<S304>/WED Command' */
    /* End of Outputs for SubSystem: '<S3>/WED_Pwm_PosnSns1' */
    /* End of Outputs for SubSystem: '<S3>/WED_Pwm_PosnSns2' */
    /* End of Outputs for SubSystem: '<S3>/WED_HBFeedback' */
    /* End of Outputs for SubSystem: '<S3>/WED Command' */
#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S2>/VeADIB_b_LtWED_FA' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEA' */
    /* End of SystemInitialize for SubSystem: '<S149>/WEDPwmPositionSense1' */
    /* End of SystemInitialize for SubSystem: '<S149>/WEDPwmPositionSense2' */
    /* End of SystemInitialize for SubSystem: '<S149>/WED_Command' */
    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* End of Outputs for SubSystem: '<Root>/Init' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
