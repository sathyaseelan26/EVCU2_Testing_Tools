/*
 * File: COUB_ac.c
 *
 * Code generated for Simulink model 'COUB_ac'.
 *
 * Model version                  : 1.575
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:17:19 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "COUB_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2019a.
//
// PROD Model Config Ver#19a.1 2/14/2020
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_COUB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_COUB_OILPUMP_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_DiagFailLimElecOilPmpCmd
    = 5U;                              /* Referenced by: '<S140>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_OILPUMP_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_DiagSmplLimElecOilPmpCmd
    = 30U;                             /* Referenced by: '<S141>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

static volatile CONST(uint16, COUB_VAR_INIT)
    KeCOUB_Cnt_FltDtctnFailLimThermSysEnbl = 100U;/* Referenced by: '<S260>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

static volatile CONST(uint16, COUB_VAR_INIT)
    KeCOUB_Cnt_FltDtctnSmplLimThermSysEnbl = 150U;/* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_OCFailLimChillrShtOff =
    100U;                              /* Referenced by: '<S415>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_OCFailLimFtRfgtShtOffVlv
    = 100U;                            /* Referenced by: '<S484>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_OCFailLimHiTempShtOffVlv
    = 100U;                            /* Referenced by: '<S553>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_OCFailLimRadrFanCtrl =
    100U;                              /* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_OCFailLimePTWakeUpEnbl =
    100U;                              /* Referenced by: '<S328>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_OCSmplLimChillrShtOff =
    150U;                              /* Referenced by: '<S416>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_OCSmplLimFtRfgtShtOffVlv
    = 150U;                            /* Referenced by: '<S485>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_OCSmplLimHiTempShtOffVlv
    = 150U;                            /* Referenced by: '<S554>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_OCSmplLimRadrFanCtrl =
    150U;                              /* Referenced by: '<S233>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_OCSmplLimePTWakeUpEnbl =
    150U;                              /* Referenced by: '<S329>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_STBFailLimACSwitchRelay =
    100U;                              /* Referenced by: '<S93>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_STBFailLimChillrShtOff =
    100U;                              /* Referenced by: '<S377>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static volatile CONST(uint16, COUB_VAR_INIT)
    KeCOUB_Cnt_STBFailLimFtRfgtShtOffVlv = 100U;/* Referenced by: '<S446>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static volatile CONST(uint16, COUB_VAR_INIT)
    KeCOUB_Cnt_STBFailLimHiTempShtOffVlv = 100U;/* Referenced by: '<S515>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_STBFailLimRadrFanCtrl =
    100U;                              /* Referenced by: '<S194>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_STBFailLimePTWakeUpEnbl =
    100U;                              /* Referenced by: '<S290>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_STBSmplLimACSwitchRelay =
    150U;                              /* Referenced by: '<S94>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_STBSmplLimChillrShtOff =
    150U;                              /* Referenced by: '<S378>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static volatile CONST(uint16, COUB_VAR_INIT)
    KeCOUB_Cnt_STBSmplLimFtRfgtShtOffVlv = 150U;/* Referenced by: '<S447>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static volatile CONST(uint16, COUB_VAR_INIT)
    KeCOUB_Cnt_STBSmplLimHiTempShtOffVlv = 150U;/* Referenced by: '<S516>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_STBSmplLimRadrFanCtrl =
    150U;                              /* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_STBSmplLimePTWakeUpEnbl =
    150U;                              /* Referenced by: '<S291>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_STGFailLimACSwitchRelay =
    100U;                              /* Referenced by: '<S112>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_STGFailLimChillrShtOff =
    100U;                              /* Referenced by: '<S396>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static volatile CONST(uint16, COUB_VAR_INIT)
    KeCOUB_Cnt_STGFailLimFtRfgtShtOffVlv = 100U;/* Referenced by: '<S465>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static volatile CONST(uint16, COUB_VAR_INIT)
    KeCOUB_Cnt_STGFailLimHiTempShtOffVlv = 100U;/* Referenced by: '<S534>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_STGFailLimRadrFanCtrl =
    100U;                              /* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_STGFailLimePTWakeUpEnbl =
    100U;                              /* Referenced by: '<S309>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_STGSmplLimACSwitchRelay =
    150U;                              /* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_STGSmplLimChillrShtOff =
    150U;                              /* Referenced by: '<S397>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static volatile CONST(uint16, COUB_VAR_INIT)
    KeCOUB_Cnt_STGSmplLimFtRfgtShtOffVlv = 150U;/* Referenced by: '<S466>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static volatile CONST(uint16, COUB_VAR_INIT)
    KeCOUB_Cnt_STGSmplLimHiTempShtOffVlv = 150U;/* Referenced by: '<S535>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_STGSmplLimRadrFanCtrl =
    150U;                              /* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static volatile CONST(uint16, COUB_VAR_INIT) KeCOUB_Cnt_STGSmplLimePTWakeUpEnbl =
    150U;                              /* Referenced by: '<S310>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_Pct_AC_PwrSwRlyDCByp = 0.0F;/* Referenced by: '<S131>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_Pct_AC_PwrSwRlyDCFullPwm =
    0.0F;                              /* Referenced by: '<S133>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_Pct_AC_PwrSwRlyDCZeroPwm =
    0.0F;                              /* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_CNTCTRCMD_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_Pct_CntctrCmdBidrnlDCByp =
    70.0F;                             /* Referenced by: '<S361>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_OILPUMP_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_Pct_ElecOilPmpDCByp = 0.0F;/* Referenced by: '<S159>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_OILPUMPRLY_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_Pct_ElecOilPmpRlyDCByp =
    0.0F;                              /* Referenced by: '<S166>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_PCURLYCNTRL_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_Pct_PCUCmdRlyDCFullPwm =
    0.0F;                              /* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_PCURLYCNTRL_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_Pct_PCUCmdRlyDCZeroPwm =
    0.0F;                              /* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_PCURLYCNTRL_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_Pct_PCURlyCmdByp = 0.0F;/* Referenced by: '<S172>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_PCURLYCNTRL_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_Pct_PCURlyCntrlPWMDCInit =
    0.0F;                              /* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_POWERPANELBOX_Presence

static volatile CONST(float32, COUB_VAR_INIT)
    KeCOUB_Pct_PowerPanelBoxCmdRlyDCFullPwm = 0.0F;/* Referenced by: '<S185>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_POWERPANELBOX_Presence

static volatile CONST(float32, COUB_VAR_INIT)
    KeCOUB_Pct_PowerPanelBoxCmdRlyDCZeroPwm = 0.0F;/* Referenced by: '<S186>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_POWERPANELBOX_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_Pct_PowerPanelBoxCtrlDCByp =
    0.0F;                              /* Referenced by: '<S183>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_POWERPANELLED_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_Pct_PowerPanelLEDDCByp =
    0.0F;                              /* Referenced by: '<S178>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_Pct_RadFanDCByp = 0.0F;/* Referenced by: '<S251>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_AC_PwrSwRlyDCBypEnbl = 0;/* Referenced by: '<S132>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_ChillrShtOffVlvByp = 0;/* Referenced by: '<S434>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_ChillrShtOffVlvBypEnbl =
    0;                                 /* Referenced by: '<S435>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_ChillrShtOffVlvInit = 0;/* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT)
    KeCOUB_b_ChillrShtOffVlvPolarInvEnb = 0;/* Referenced by: '<S436>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_CNTCTRCMD_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_CntctrCmdBidrnlDCBypEnbl =
    0;                                 /* Referenced by: '<S362>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_CNTCTRCMD_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_CntctrCmdBidrnlEnblSt = 1;/* Referenced by: '<S29>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_CNTCTRCMD_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_CntctrCmdBidrnlPolarity =
    1;                                 /* Referenced by: '<S30>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_CNTCTRCMD_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_CntctrCmdBidrnlPrdBypEnbl
    = 0;                               /* Referenced by: '<S360>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_OILPUMP_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_DiagEnbl_ElecOilPmpCmd =
    1;                                 /* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_OILPUMP_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_ElecOilPmpCmdEnblSt = 0;/* Referenced by: '<S33>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_OILPUMP_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_ElecOilPmpCmdPolarity = 0;/* Referenced by: '<S34>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_OILPUMP_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_ElecOilPmpDCBypEnbl = 0;/* Referenced by: '<S160>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_OILPUMPRLY_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_ElecOilPmpRlyDCBypEnbl =
    0;                                 /* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_OILPUMPRLY_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_ElecOilPmpRlyPrdBypEnbl =
    0;                                 /* Referenced by: '<S164>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

static volatile CONST(boolean, COUB_VAR_INIT)
    KeCOUB_b_FltDtctnDiagEnblThermSysEnbl = 1;/* Referenced by: '<S261>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_FtRfgtShtOffVlvByp = 0;/* Referenced by: '<S503>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_FtRfgtShtOffVlvBypEnbl =
    0;                                 /* Referenced by: '<S504>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT)
    KeCOUB_b_FtRfgtShtOffVlvPolarInvEnb = 0;/* Referenced by: '<S505>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_FtRfgtShtoffInit = 0;/* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_HiTempShtOffVlvByp = 0;/* Referenced by: '<S572>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_HiTempShtOffVlvBypEnbl =
    0;                                 /* Referenced by: '<S573>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_HiTempShtOffVlvInit = 0;/* Referenced by: '<S45>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT)
    KeCOUB_b_HiTempShtOffVlvPolarInvEnb = 0;/* Referenced by: '<S574>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_LtchEnblACSwitchRelaySTB =
    0;        /* Referenced by: '<S96>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_COUB_OILPUMP_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_LtchEnblElecOilPmpCmd = 0;
             /* Referenced by: '<S143>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_LtchEnblOCChillrShtOffVlv
    = 0;     /* Referenced by: '<S418>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_LtchEnblOCFtRfgtShtOffVlv
    = 0;     /* Referenced by: '<S487>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_LtchEnblOCHiTempShtOffVlv
    = 0;     /* Referenced by: '<S556>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_LtchEnblOCRadrFanCtrl = 0;
             /* Referenced by: '<S235>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_LtchEnblOCePTWakeUpEnbl =
    0;       /* Referenced by: '<S331>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT)
    KeCOUB_b_LtchEnblSTBChillrShtOffVlv = 0;
             /* Referenced by: '<S380>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT)
    KeCOUB_b_LtchEnblSTBFtRfgtShtOffVlv = 0;
             /* Referenced by: '<S449>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT)
    KeCOUB_b_LtchEnblSTBHiTempShtOffVlv = 0;
             /* Referenced by: '<S518>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_LtchEnblSTBRadrFanCtrl =
    0;       /* Referenced by: '<S197>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_LtchEnblSTBePTWakeUpEnbl =
    0;       /* Referenced by: '<S293>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_LtchEnblSTGACSwitchRelay =
    0;       /* Referenced by: '<S115>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT)
    KeCOUB_b_LtchEnblSTGChillrShtOffVlv = 0;
             /* Referenced by: '<S399>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT)
    KeCOUB_b_LtchEnblSTGFtRfgtShtOffVlv = 0;
             /* Referenced by: '<S468>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT)
    KeCOUB_b_LtchEnblSTGHiTempShtOffVlv = 0;
             /* Referenced by: '<S537>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_LtchEnblSTGRadrFanCtrl =
    0;       /* Referenced by: '<S216>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_LtchEnblSTGePTWakeUpEnbl =
    0;       /* Referenced by: '<S312>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_LtchEnblThermSysEnbl = 0;
             /* Referenced by: '<S262>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_OCDiagEnbl_ChillrShtOff =
    1;                                 /* Referenced by: '<S417>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT)
    KeCOUB_b_OCDiagEnbl_FtRfgtShtOffVlv = 1;/* Referenced by: '<S486>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT)
    KeCOUB_b_OCDiagEnbl_HiTempShtOffVlv = 1;/* Referenced by: '<S555>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_OCDiagEnbl_RadrFanCtrl =
    1;                                 /* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_OCDiagEnbl_ePTWakeUpEnbl =
    1;                                 /* Referenced by: '<S330>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_PCURLYCNTRL_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_PCURlyCmdBypEnbl = 0;/* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_PCURLYCNTRL_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_PCURlyCntrlPolInit = 0;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_PCURLYCNTRL_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_PCURlyCntrlSetEnblStInit =
    0;                                 /* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_POWERPANELBOX_Presence

static volatile CONST(boolean, COUB_VAR_INIT)
    KeCOUB_b_PowerPanelBoxCtrlDCBypEnbl = 1;/* Referenced by: '<S184>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence || Rte_SysCon_Variant_COUB_POWERPANELBOX_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_PowerPanelBoxEnblSt = 1;/* Referenced by:
                                                                      * '<S20>/Calib'
                                                                      * '<S56>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence || Rte_SysCon_Variant_COUB_POWERPANELBOX_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_PowerPanelBoxPolarity = 0;/* Referenced by:
                                                                      * '<S21>/Calib'
                                                                      * '<S57>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_COUB_POWERPANELLED_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_PowerPanelLEDDCBypEnbl =
    1;                                 /* Referenced by: '<S179>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_POWERPANELLED_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_PowerPanelLEDEnblSt = 1;/* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_POWERPANELLED_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_PowerPanelLEDPolarity = 0;/* Referenced by: '<S53>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_RadFanDCBypEnbl = 0;/* Referenced by: '<S252>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_RadFanEnblSt = 1;/* Referenced by: '<S63>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_RadFanPolarity = 1;/* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_STBDiagEnbl_ACSwitchRelay
    = 1;                               /* Referenced by: '<S95>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_STBDiagEnbl_ChillrShtOff =
    1;                                 /* Referenced by: '<S379>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT)
    KeCOUB_b_STBDiagEnbl_FtRfgtShtOffVlv = 1;/* Referenced by: '<S448>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT)
    KeCOUB_b_STBDiagEnbl_HiTempShtOffVlv = 1;/* Referenced by: '<S517>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_STBDiagEnbl_RadrFanCtrl =
    1;                                 /* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_STBDiagEnbl_ePTWakeUpEnbl
    = 1;                               /* Referenced by: '<S292>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_STGDiagEnbl_ACSwitchRelay
    = 1;                               /* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_STGDiagEnbl_ChillrShtOff =
    1;                                 /* Referenced by: '<S398>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT)
    KeCOUB_b_STGDiagEnbl_FtRfgtShtOffVlv = 1;/* Referenced by: '<S467>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static volatile CONST(boolean, COUB_VAR_INIT)
    KeCOUB_b_STGDiagEnbl_HiTempShtOffVlv = 1;/* Referenced by: '<S536>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_STGDiagEnbl_RadrFanCtrl =
    1;                                 /* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_STGDiagEnbl_ePTWakeUpEnbl
    = 1;                               /* Referenced by: '<S311>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_ThermSysEnblByp = 0;/* Referenced by: '<S278>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_ThermSysEnblBypEnbl = 0;/* Referenced by: '<S279>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_ThermSysEnblInit = 0;/* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_ThermSysEnblPolarInvEnb =
    0;                                 /* Referenced by: '<S280>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_ePTWakeUpEnblByp = 0;/* Referenced by: '<S347>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_ePTWakeUpEnblBypEnbl = 0;/* Referenced by: '<S348>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_ePTWakeUpEnblInit = 0;/* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static volatile CONST(boolean, COUB_VAR_INIT) KeCOUB_b_ePTWakeUpEnblPolarInvEnb =
    1;                                 /* Referenced by: '<S349>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_OILPUMP_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_t_ElecOilPmpCmdPrd =
    10000.0F;                          /* Referenced by: '<S35>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_OILPUMPRLY_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_t_ElecOilPmpRlyPrdByp =
    10000.0F;                          /* Referenced by: '<S165>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_PCURLYCNTRL_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_t_PCURlyCntrlPrdInit = 0.0F;/* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence || Rte_SysCon_Variant_COUB_POWERPANELBOX_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_t_PowerPanelBoxPrd =
    10000.0F;                          /* Referenced by:
                                        * '<S22>/Calib'
                                        * '<S58>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_COUB_POWERPANELLED_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_t_PowerPanelLEDPrd =
    10000.0F;                          /* Referenced by: '<S54>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_t_RadFanPrd = 10000.0F;/* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_COUB_CNTCTRCMD_Presence

static volatile CONST(float32, COUB_VAR_INIT) KeCOUB_ut_CntctrCmdBidrnlPrdByp =
    5000.0F;                           /* Referenced by: '<S359>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_COUB
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_COUB
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_COUB_OILPUMP_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_DiagFailLimElecOilPmpCmd;/* '<S152>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_OILPUMP_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_DiagSmplLimElecOilPmpCmd;/* '<S153>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_FltDtctnFailLimThermSysEnbl;/* '<S271>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_FltDtctnSmplLimThermSysEnbl;/* '<S272>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_OCFailLimFtRfgtShtOffVlv;/* '<S496>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_OCFailLimHiTempShtOffVlv;/* '<S565>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_OCFailLimRadrFanCtrl;/* '<S244>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_OCFailLimePTWakeUpEnbl;/* '<S340>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_OCSmplLimFtRfgtShtOffVlv;/* '<S497>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_OCSmplLimHiTempShtOffVlv;/* '<S566>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_OCSmplLimRadrFanCtrl;/* '<S245>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_OCSmplLimePTWakeUpEnbl;/* '<S341>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STBFailLimACSwitchRelay;/* '<S105>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STBFailLimChillrShtOffVlvVlv;/* '<S389>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STBFailLimFtRfgtShtOffVlv;/* '<S458>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STBFailLimHiTempShtOffVlv;/* '<S527>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STBFailLimRadrFanCtrl;/* '<S206>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STBFailLimePTWakeUpEnbl;/* '<S302>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STBSmplLimACSwitchRelay;/* '<S106>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STBSmplLimChillrShtOffVlvVlv;/* '<S390>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STBSmplLimFtRfgtShtOffVlv;/* '<S459>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STBSmplLimHiTempShtOffVlv;/* '<S528>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STBSmplLimRadrFanCtrl;/* '<S207>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STBSmplLimePTWakeUpEnbl;/* '<S303>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STGFailLimACSwitchRelay;/* '<S124>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STGFailLimChillrShtOffVlvVlv;/* '<S408>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STGFailLimFtRfgtShtOffVlv;/* '<S477>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STGFailLimHiTempShtOffVlv;/* '<S546>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STGFailLimRadrFanCtrl;/* '<S225>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STGFailLimePTWakeUpEnbl;/* '<S321>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STGSmplLimACSwitchRelay;/* '<S125>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STGSmplLimChillrShtOffVlvVlv;/* '<S409>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STGSmplLimFtRfgtShtOffVlv;/* '<S478>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STGSmplLimHiTempShtOffVlv;/* '<S547>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STGSmplLimRadrFanCtrl;/* '<S226>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

static VAR(uint16, COUB_VAR_INIT) VeCOUB_Cnt_STGSmplLimePTWakeUpEnbl;/* '<S322>/Switch1' */

#endif

#if Rte_SysCon_Variant_COUB_CNTCTRCMD_Presence

static VAR(float32, COUB_VAR_INIT) VeCOUB_Pct_CntctrCmdBidrnlDCCmd;/* '<S357>/Switch' */

#endif

#if Rte_SysCon_Variant_COUB_CNTCTRCMD_Presence

static VAR(float32, COUB_VAR_INIT) VeCOUB_ut_CntctrCmdBidrnlPrdCmd;/* '<S356>/Switch' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_COUB
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_COUB
#include "MemMap.h"

VAR(B_COUB_ac_T, COUB_VAR_INIT) COUB_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_COUB
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_COUB
#include "MemMap.h"

VAR(DW_COUB_ac_T, COUB_VAR_INIT) COUB_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_COUB
#include "MemMap.h"
#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence || Rte_SysCon_Variant_COUB_CSOV_Presence || Rte_SysCon_Variant_COUB_EPTWUP_Presence || Rte_SysCon_Variant_COUB_FRSOV_Presence || Rte_SysCon_Variant_COUB_HTSOV_Presence || Rte_SysCon_Variant_COUB_OILPUMP_Presence || Rte_SysCon_Variant_COUB_RADFAN_Presence || Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

static FUNC(void, COUB_CODE_LOCAL) COUB_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, COUB_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence || Rte_SysCon_Variant_COUB_CSOV_Presence || Rte_SysCon_Variant_COUB_EPTWUP_Presence || Rte_SysCon_Variant_COUB_FRSOV_Presence || Rte_SysCon_Variant_COUB_HTSOV_Presence || Rte_SysCon_Variant_COUB_OILPUMP_Presence || Rte_SysCon_Variant_COUB_RADFAN_Presence || Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

static FUNC(void, COUB_CODE_LOCAL) COUB_ac_Init_i(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, COUB_VAR_INIT)
    rty_FaultSts);

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence || Rte_SysCon_Variant_COUB_CSOV_Presence || Rte_SysCon_Variant_COUB_EPTWUP_Presence || Rte_SysCon_Variant_COUB_FRSOV_Presence || Rte_SysCon_Variant_COUB_HTSOV_Presence || Rte_SysCon_Variant_COUB_OILPUMP_Presence || Rte_SysCon_Variant_COUB_RADFAN_Presence || Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

static FUNC(void, COUB_CODE_LOCAL) COUB_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, COUB_VAR_INIT)
    rty_FaultSts);

#endif

/*
 * Output and update for enable system:
 *    '<S381>/Fail'
 *    '<S400>/Fail'
 *    '<S419>/Fail'
 *    '<S450>/Fail'
 *    '<S469>/Fail'
 *    '<S488>/Fail'
 *    '<S519>/Fail'
 *    '<S538>/Fail'
 *    '<S557>/Fail'
 *    '<S97>/Fail'
 *    ...
 */
#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence || Rte_SysCon_Variant_COUB_CSOV_Presence || Rte_SysCon_Variant_COUB_EPTWUP_Presence || Rte_SysCon_Variant_COUB_FRSOV_Presence || Rte_SysCon_Variant_COUB_HTSOV_Presence || Rte_SysCon_Variant_COUB_OILPUMP_Presence || Rte_SysCon_Variant_COUB_RADFAN_Presence || Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

static FUNC(void, COUB_CODE_LOCAL) COUB_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, COUB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S381>/Fail' incorporates:
     *  EnablePort: '<S385>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S385>/FaultSts' incorporates:
         *  Constant: '<S391>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S381>/Fail' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S381>/Init'
 *    '<S400>/Init'
 *    '<S419>/Init'
 *    '<S450>/Init'
 *    '<S469>/Init'
 *    '<S488>/Init'
 *    '<S519>/Init'
 *    '<S538>/Init'
 *    '<S557>/Init'
 *    '<S97>/Init'
 *    ...
 */
#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence || Rte_SysCon_Variant_COUB_CSOV_Presence || Rte_SysCon_Variant_COUB_EPTWUP_Presence || Rte_SysCon_Variant_COUB_FRSOV_Presence || Rte_SysCon_Variant_COUB_HTSOV_Presence || Rte_SysCon_Variant_COUB_OILPUMP_Presence || Rte_SysCon_Variant_COUB_RADFAN_Presence || Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

static FUNC(void, COUB_CODE_LOCAL) COUB_ac_Init_i(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, COUB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S381>/Init' incorporates:
     *  EnablePort: '<S386>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S386>/FaultSts' incorporates:
         *  Constant: '<S392>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S381>/Init' */
}

#endif

/*
 * Output and update for enable system:
 *    '<S381>/Pass'
 *    '<S400>/Pass'
 *    '<S419>/Pass'
 *    '<S450>/Pass'
 *    '<S469>/Pass'
 *    '<S488>/Pass'
 *    '<S519>/Pass'
 *    '<S538>/Pass'
 *    '<S557>/Pass'
 *    '<S97>/Pass'
 *    ...
 */
#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence || Rte_SysCon_Variant_COUB_CSOV_Presence || Rte_SysCon_Variant_COUB_EPTWUP_Presence || Rte_SysCon_Variant_COUB_FRSOV_Presence || Rte_SysCon_Variant_COUB_HTSOV_Presence || Rte_SysCon_Variant_COUB_OILPUMP_Presence || Rte_SysCon_Variant_COUB_RADFAN_Presence || Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

static FUNC(void, COUB_CODE_LOCAL) COUB_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, COUB_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S381>/Pass' incorporates:
     *  EnablePort: '<S387>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S387>/FaultSts' incorporates:
         *  Constant: '<S393>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S381>/Pass' */
}

#endif

/* Model step function for TID1 */
FUNC(void, COUB_CODE) COUB_MedTEB(void) /* Explicit Task: MedTEB */
{

#if Rte_SysCon_Variant_COUB_CNTCTRCMD_Presence

    float32 rtb_TmpSignalConversionAtVeHPMR_f_Cntctr;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/SigMngt10ms'
     */
    /* SignalConversion generated from: '<S3>/VeHPMR_f_CntctrCmd_PWM' */
#if Rte_SysCon_Variant_COUB_CNTCTRCMD_Presence

    /* SignalConversion generated from: '<S3>/VeHPMR_f_CntctrCmd_PWM' incorporates:
     *  Inport: '<Root>/VeHPMR_f_CntctrCmd_PWM'
     */
    (void)Rte_Read_VeHPMR_f_CntctrCmd_PWM_Value
        (&rtb_TmpSignalConversionAtVeHPMR_f_Cntctr);

#endif

    /* End of SignalConversion generated from: '<S3>/VeHPMR_f_CntctrCmd_PWM' */

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/COUB_MedTEB_StartCheckpoint'
     */
    /* FunctionCaller: '<S351>/COUB_MedTEB_StartCheckpoint' */
    Rte_Call_COUB_MedTEB_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Subsystem'
     */
#if Rte_SysCon_Variant_COUB_CNTCTRCMD_Presence

    /* Outputs for Atomic SubSystem: '<S353>/CntctrCmdBidrnl' */
    /* Inport: '<Root>/VeHPMR_DC_BattPackCntctrCmd' */
    (void)Rte_Read_VeHPMR_DC_BattPackCntctrCmd_Value
        ((&(VeCOUB_Pct_CntctrCmdBidrnlDCCmd)));

    /* Outputs for Atomic SubSystem: '<S354>/CntctrCmdBidrnl' */
    /* Switch: '<S357>/Switch' incorporates:
     *  Constant: '<S362>/Calib'
     */
    if (KeCOUB_b_CntctrCmdBidrnlDCBypEnbl)
    {
        /* Switch: '<S357>/Switch' incorporates:
         *  Constant: '<S361>/Calib'
         *  Inport: '<Root>/VeHPMR_DC_BattPackCntctrCmd'
         */
        VeCOUB_Pct_CntctrCmdBidrnlDCCmd = KeCOUB_Pct_CntctrCmdBidrnlDCByp;
    }

    /* End of Switch: '<S357>/Switch' */

    /* FunctionCaller: '<S355>/SetDIOR_e_RadrFanCtrl_SetDIOR_PWM_DC' */
    Rte_Call_SetDIOR_e_CntctrCmdBidrnlCtrl_SetDIOR_PWM_DC
        (VeCOUB_Pct_CntctrCmdBidrnlDCCmd);

    /* Switch: '<S356>/Switch' incorporates:
     *  Constant: '<S358>/Constant Value1'
     *  Constant: '<S360>/Calib'
     *  RelationalOperator: '<S358>/Not Equal1'
     *  Switch: '<S358>/Switch1'
     */
    if (KeCOUB_b_CntctrCmdBidrnlPrdBypEnbl)
    {
        /* Switch: '<S356>/Switch' incorporates:
         *  Constant: '<S359>/Calib'
         */
        VeCOUB_ut_CntctrCmdBidrnlPrdCmd = KeCOUB_ut_CntctrCmdBidrnlPrdByp;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S355>/Protected Division' */
        if (rtb_TmpSignalConversionAtVeHPMR_f_Cntctr != 0.0F)
        {
            /* Switch: '<S358>/Switch1' incorporates:
             *  Constant: '<S355>/Constant'
             *  Product: '<S358>/Division'
             */
            rtb_TmpSignalConversionAtVeHPMR_f_Cntctr = 1.0F /
                rtb_TmpSignalConversionAtVeHPMR_f_Cntctr;
        }
        else
        {
            /* Switch: '<S358>/Switch1' */
            rtb_TmpSignalConversionAtVeHPMR_f_Cntctr = 3.402823466E+38F;
        }

        /* End of Outputs for SubSystem: '<S355>/Protected Division' */

        /* Switch: '<S356>/Switch' incorporates:
         *  Gain: '<S355>/s_to_us'
         */
        VeCOUB_ut_CntctrCmdBidrnlPrdCmd = 1.0E+6F *
            rtb_TmpSignalConversionAtVeHPMR_f_Cntctr;
    }

    /* End of Switch: '<S356>/Switch' */

    /* FunctionCaller: '<S355>/SetDIOR_e_RadrFanCtrl_SetDIOR_PWM_Prd' */
    Rte_Call_SetDIOR_e_CntctrCmdBidrnlCtrl_SetDIOR_PWM_Prd
        (VeCOUB_ut_CntctrCmdBidrnlPrdCmd);

    /* End of Outputs for SubSystem: '<S354>/CntctrCmdBidrnl' */
    /* End of Outputs for SubSystem: '<S353>/CntctrCmdBidrnl' */
#endif

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outputs for Atomic SubSystem: '<S3>/COUB_MedTEB_StopCheckpoint' */
    /* FunctionCaller: '<S352>/COUB_MedTEB_StopCheckpoint' */
    Rte_Call_COUB_MedTEB_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S3>/COUB_MedTEB_StopCheckpoint' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model step function for TID2 */
FUNC(void, COUB_CODE) COUB_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

    IDTCondPresence tmpRead;

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

    IDTCondPresence tmpRead_0;

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

    IDTCondPresence tmpRead_1;

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

    IDTCondPresence tmpRead_2;

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

    IDTCondPresence tmpRead_3;

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

    IDTCondPresence tmpRead_4;

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

    IDTCondPresence tmpRead_5;

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

    IDTCondPresence tmpRead_6;

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

    IDTCondPresence tmpRead_7;

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence || Rte_SysCon_Variant_COUB_FRSOV_Presence || Rte_SysCon_Variant_COUB_HTSOV_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i;

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence || Rte_SysCon_Variant_COUB_FRSOV_Presence

    boolean rtb_RelationalOperator3_n;

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence || Rte_SysCon_Variant_COUB_FRSOV_Presence

    boolean rtb_Logical1_f2;

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence || Rte_SysCon_Variant_COUB_FRSOV_Presence || Rte_SysCon_Variant_COUB_HTSOV_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_Dsbl_g;

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence || Rte_SysCon_Variant_COUB_FRSOV_Presence || Rte_SysCon_Variant_COUB_HTSOV_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_Post_n;

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence || Rte_SysCon_Variant_COUB_FRSOV_Presence

    boolean rtb_NOT4_gl;

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

    boolean rtb_AND_ij;

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

    boolean rtb_AND_m;

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_fd;

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_ey;

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_n;

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_ol;

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_kz;

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_ba;

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_e1;

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_pb;

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_pu;

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence || Rte_SysCon_Variant_COUB_FRSOV_Presence || Rte_SysCon_Variant_COUB_HTSOV_Presence

    boolean rtb_TmpSignalConversionAtVeDIOR_ChillrSh;

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB_Cnt_STBC;

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB_Cnt_STGC;

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB_Cnt_OCCh;

#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence || Rte_SysCon_Variant_COUB_FRSOV_Presence || Rte_SysCon_Variant_COUB_HTSOV_Presence

    boolean rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf;

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence || Rte_SysCon_Variant_COUB_HTSOV_Presence

    boolean rtb_TmpSignalConversionAtVeDIOR_FtRfgtSh;

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB_Cnt_STBF;

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB_Cnt_STGF;

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB_Cnt_FtRf;

#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence || Rte_SysCon_Variant_COUB_HTSOV_Presence

    boolean rtb_TmpSignalConversionAtVeRCVR_b_FtRfgt;

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

    boolean rtb_TmpSignalConversionAtVeDIOR_SpareHsd;

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB_Cnt_Hi_l;

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB_Cnt_Hi_i;

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB_Cnt_HiTe;

#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

    boolean rtb_TmpSignalConversionAtVeRCVR_b_HT_Sht;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/SigMngt20ms'
     */
    /* SignalConversion generated from: '<S4>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  SignalConversion generated from: '<S4>/VeDFIR_b_DsblDiagFailSafe'
     *  SignalConversion generated from: '<S4>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
#if Rte_SysCon_Variant_COUB_CSOV_Presence || Rte_SysCon_Variant_COUB_FRSOV_Presence || Rte_SysCon_Variant_COUB_HTSOV_Presence

    /* SignalConversion generated from: '<S4>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i);

    /* SignalConversion generated from: '<S4>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_Post_n);

    /* SignalConversion generated from: '<S4>/VeDFIR_b_DsblDiagFailSafe' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_Dsbl_g);

#endif

    /* End of SignalConversion generated from: '<S4>/VeDFIR_b_IsDiagGlobalConditionsValid' */

    /* SignalConversion generated from: '<S4>/VeRCVR_b_FtRfgtShtoff_VlvCmd' incorporates:
     *  SignalConversion generated from: '<S4>/VeDIOR_FtRfgtShtOffVlvDiagCmn_b_FailrPrsnt'
     *  SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_EvapRefriShutoffCtrlCktFlt'
     *  SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_EvapRefriShutoffCtrlshrtBattFlt'
     *  SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_EvapRefrishutoffCtrlShrtGndFlt'
     *  SignalConversion generated from: '<S4>/VeNVMB_Cnt_FtRfgtShtOffVlvOC_MFOP'
     *  SignalConversion generated from: '<S4>/VeNVMB_Cnt_STBFtRfgtShtOffVlv_MFOP'
     *  SignalConversion generated from: '<S4>/VeNVMB_Cnt_STGFtRfgtShtOffVlv_MFOP'
     */
#if Rte_SysCon_Variant_COUB_FRSOV_Presence

    /* SignalConversion generated from: '<S4>/VeRCVR_b_FtRfgtShtoff_VlvCmd' incorporates:
     *  Inport: '<Root>/VeRCVR_b_FtRfgtShtoff_VlvCmd'
     */
    (void)Rte_Read_VeRCVR_b_FtRfgtShtoff_VlvCmd_Value
        (&rtb_TmpSignalConversionAtVeRCVR_b_FtRfgt);

    /* SignalConversion generated from: '<S4>/VeDIOR_FtRfgtShtOffVlvDiagCmn_b_FailrPrsnt' incorporates:
     *  Inport: '<Root>/VeDIOR_FtRfgtShtOffVlvDiagCmn_b_FailrPrsnt'
     */
    (void)Rte_Read_VeDIOR_FtRfgtShtOffVlvDiagCmn_b_FailrPrsnt
        (&rtb_TmpSignalConversionAtVeDIOR_FtRfgtSh);

    /* SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_EvapRefriShutoffCtrlCktFlt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EvapRefriShutoffCtrlCktFlt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EvapRefriShutoffCtrlCktFlt_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_ba);

    /* SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_EvapRefrishutoffCtrlShrtGndFlt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EvapRefrishutoffCtrlShrtGndFlt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EvapRefrishutoffCtrlShrtGndFlt_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_kz);

    /* SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_EvapRefriShutoffCtrlshrtBattFlt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EvapRefriShutoffCtrlshrtBattFlt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EvapRefriShutoffCtrlshrtBattFlt_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_ol);

    /* SignalConversion generated from: '<S4>/VeNVMB_Cnt_FtRfgtShtOffVlvOC_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_FtRfgtShtOffVlvOC_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_FtRfgtShtOffVlvOC_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB_Cnt_FtRf);

    /* SignalConversion generated from: '<S4>/VeNVMB_Cnt_STGFtRfgtShtOffVlv_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_STGFtRfgtShtOffVlv_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_STGFtRfgtShtOffVlv_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB_Cnt_STGF);

    /* SignalConversion generated from: '<S4>/VeNVMB_Cnt_STBFtRfgtShtOffVlv_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_STBFtRfgtShtOffVlv_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_STBFtRfgtShtOffVlv_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB_Cnt_STBF);

#endif

    /* End of SignalConversion generated from: '<S4>/VeRCVR_b_FtRfgtShtoff_VlvCmd' */

    /* SignalConversion generated from: '<S4>/VeRCVR_b_ChlrRfgtShtoff_VlvCmd ' incorporates:
     *  SignalConversion generated from: '<S4>/VeDIOR_ChillrShtOffVlvDiagCmn_b_FailrPrsnt'
     *  SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_CoolCtrlVlv1CktHi'
     *  SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_CoolCtrlVlv1CktLo'
     *  SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_CoolCtrlVlv1Ckt'
     *  SignalConversion generated from: '<S4>/VeNVMB_Cnt_OCChillrShtOffVlv_MFOP'
     *  SignalConversion generated from: '<S4>/VeNVMB_Cnt_STBChillrShtOffVlv_MFOP'
     *  SignalConversion generated from: '<S4>/VeNVMB_Cnt_STGChillrShtOffVlv_MFOP'
     */
#if Rte_SysCon_Variant_COUB_CSOV_Presence

    /* SignalConversion generated from: '<S4>/VeRCVR_b_ChlrRfgtShtoff_VlvCmd ' incorporates:
     *  Inport: '<Root>/VeRCVR_b_ChlrRfgtShtoff_VlvCmd'
     */
    (void)Rte_Read_VeRCVR_b_ChlrRfgtShtoff_VlvCmd_Value
        (&rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf);

    /* SignalConversion generated from: '<S4>/VeDIOR_ChillrShtOffVlvDiagCmn_b_FailrPrsnt' incorporates:
     *  Inport: '<Root>/VeDIOR_ChillrShtOffVlvDiagCmn_b_FailrPrsnt'
     */
    (void)Rte_Read_VeDIOR_ChillrShtOffVlvDiagCmn_b_FailrPrsnt
        (&rtb_TmpSignalConversionAtVeDIOR_ChillrSh);

    /* SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_CoolCtrlVlv1Ckt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolCtrlVlv1Ckt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolCtrlVlv1Ckt_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_n);

    /* SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_CoolCtrlVlv1CktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolCtrlVlv1CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolCtrlVlv1CktLo_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_ey);

    /* SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_CoolCtrlVlv1CktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolCtrlVlv1CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolCtrlVlv1CktHi_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_fd);

    /* SignalConversion generated from: '<S4>/VeNVMB_Cnt_OCChillrShtOffVlv_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_OCChillrShtOffVlv_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_OCChillrShtOffVlv_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB_Cnt_OCCh);

    /* SignalConversion generated from: '<S4>/VeNVMB_Cnt_STGChillrShtOffVlv_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_STGChillrShtOffVlv_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_STGChillrShtOffVlv_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB_Cnt_STGC);

    /* SignalConversion generated from: '<S4>/VeNVMB_Cnt_STBChillrShtOffVlv_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_STBChillrShtOffVlv_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_STBChillrShtOffVlv_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB_Cnt_STBC);

#endif

    /* End of SignalConversion generated from: '<S4>/VeRCVR_b_ChlrRfgtShtoff_VlvCmd ' */

    /* SignalConversion generated from: '<S4>/VeRCVR_b_HT_Shtoff_VlvCmd' incorporates:
     *  SignalConversion generated from: '<S4>/VeDIOR_SpareHsd3DiagCmnDiagCmn_b_FailrPrsnt'
     *  SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_CoolantVlvB_CktHi'
     *  SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_CoolantVlvB_CktLo'
     *  SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_CoolantVlvB_Ckt'
     *  SignalConversion generated from: '<S4>/VeNVMB_Cnt_HiTempShtOffVlvOC_MFOP'
     *  SignalConversion generated from: '<S4>/VeNVMB_Cnt_HiTempShtOffVlvSTB_MFOP'
     *  SignalConversion generated from: '<S4>/VeNVMB_Cnt_HiTempShtOffVlvSTG_MFOP'
     */
#if Rte_SysCon_Variant_COUB_HTSOV_Presence

    /* SignalConversion generated from: '<S4>/VeRCVR_b_HT_Shtoff_VlvCmd' incorporates:
     *  Inport: '<Root>/VeRCVR_b_HT_Shtoff_VlvCmd'
     */
    (void)Rte_Read_VeRCVR_b_HT_Shtoff_VlvCmd_Value
        (&rtb_TmpSignalConversionAtVeRCVR_b_HT_Sht);

    /* SignalConversion generated from: '<S4>/VeDIOR_SpareHsd3DiagCmnDiagCmn_b_FailrPrsnt' incorporates:
     *  Inport: '<Root>/VeDIOR_SpareHsd3DiagCmnDiagCmn_b_FailrPrsnt'
     */
    (void)Rte_Read_VeDIOR_SpareHsd3DiagCmnDiagCmn_b_FailrPrsnt
        (&rtb_TmpSignalConversionAtVeDIOR_SpareHsd);

    /* SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_CoolantVlvB_Ckt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvB_Ckt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvB_Ckt_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_pu);

    /* SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_CoolantVlvB_CktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvB_CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvB_CktLo_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_pb);

    /* SignalConversion generated from: '<S4>/VeDMAB_y_StatusByte_CoolantVlvB_CktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CoolantVlvB_CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CoolantVlvB_CktHi_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_e1);

    /* SignalConversion generated from: '<S4>/VeNVMB_Cnt_HiTempShtOffVlvOC_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_HiTempShtOffVlvOC_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_HiTempShtOffVlvOC_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB_Cnt_HiTe);

    /* SignalConversion generated from: '<S4>/VeNVMB_Cnt_HiTempShtOffVlvSTG_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_HiTempShtOffVlvSTG_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_HiTempShtOffVlvSTG_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB_Cnt_Hi_i);

    /* SignalConversion generated from: '<S4>/VeNVMB_Cnt_HiTempShtOffVlvSTB_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_HiTempShtOffVlvSTB_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_HiTempShtOffVlvSTB_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB_Cnt_Hi_l);

#endif

    /* End of SignalConversion generated from: '<S4>/VeRCVR_b_HT_Shtoff_VlvCmd' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/COUB_MedTED_StartCheckpoint'
     */
    /* FunctionCaller: '<S363>/COUB_MedTED_StartCheckpoint' */
    Rte_Call_COUB_MedTED_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Subsystem'
     */
#if Rte_SysCon_Variant_COUB_CSOV_Presence

    /* Outputs for Atomic SubSystem: '<S365>/ChillrShtOffVlv' */
    /* Outputs for Atomic SubSystem: '<S366>/ChillrShtOffVlv' */

    /* RelationalOperator: '<S381>/Relational Operator3' incorporates:
     *  Constant: '<S381>/Constant3'
     *  S-Function (sfix_bitop): '<S381>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_n = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_fd) & 64U) == 0U);

    /* Logic: '<S381>/Logical1' incorporates:
     *  Constant: '<S379>/Calib'
     *  Constant: '<S380>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S381>/Constant1'
     *  Logic: '<S373>/Logical Operator'
     *  Logic: '<S381>/Logical Operator'
     *  Logic: '<S381>/Logical10'
     *  Logic: '<S381>/Logical12'
     *  RelationalOperator: '<S381>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S381>/Bitwise Operator3'
     */
    rtb_Logical1_f2 = ((rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i &&
                        (KeCOUB_b_STBDiagEnbl_ChillrShtOff)) &&
                       ((!KeCOUB_b_LtchEnblSTBChillrShtOffVlv) || (((((uint32)
                            rtb_TmpSignalConversionAtVeDMAB_y_Sta_fd) & 1U) ==
                          0U) || (!rtb_RelationalOperator3_n))));

    /* Logic: '<S376>/NOT4' */
    rtb_NOT4_gl = (rtb_TmpSignalConversionAtVeDFIR_b_Dsbl_g ||
                   rtb_TmpSignalConversionAtVeDFIR_b_Post_n);

    /* Outputs for Atomic SubSystem: '<S381>/EdgeFalling1' */
    /* Logic: '<S383>/AND' incorporates:
     *  Logic: '<S383>/OR1'
     *  UnitDelay: '<S383>/Unit Delay'
     */
    rtb_AND_ij = ((!rtb_RelationalOperator3_n) &&
                  (COUB_ac_DW.UnitDelay_DSTATE_gh));

    /* Update for UnitDelay: '<S383>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_gh = rtb_RelationalOperator3_n;

    /* End of Outputs for SubSystem: '<S381>/EdgeFalling1' */

    /* Logic: '<S381>/Logical5' */
    rtb_RelationalOperator3_n = (rtb_NOT4_gl || rtb_AND_ij);

    /* Outputs for Atomic SubSystem: '<S382>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S382>/Counter Reset  Enabled ' */
    /* Switch: '<S389>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_CSOVFltCircDtctd_CircShoHi'
     *  Logic: '<S382>/Fail Counter Reset'
     *  Switch: '<S390>/Switch1'
     *  UnitDelay: '<S382>/Unit Delay'
     *  UnitDelay: '<S382>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3_n || (COUB_ac_DW.UnitDelay_DSTATE_nc)) ||
            (COUB_ac_DW.UnitDelay1_DSTATE_i))
    {
        /* Switch: '<S389>/Switch1' incorporates:
         *  Constant: '<S389>/Constant Value2'
         */
        VeCOUB_Cnt_STBFailLimChillrShtOffVlvVlv = 0U;

        /* Switch: '<S390>/Switch1' incorporates:
         *  Constant: '<S390>/Constant Value2'
         */
        VeCOUB_Cnt_STBSmplLimChillrShtOffVlvVlv = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_CSOVFltCircDtctd_CircShoHi(&tmpRead_3);

        /* Switch: '<S389>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_CSOVFltCircDtctd_CircShoHi'
         *  Logic: '<S373>/Logical Operator1'
         *  Logic: '<S382>/NOT6'
         */
        if (rtb_Logical1_f2 && ((((sint32)tmpRead_3.CircShoHi) != 0) &&
                                rtb_TmpSignalConversionAtVeDIOR_ChillrSh))
        {
            /* Switch: '<S389>/Switch1' incorporates:
             *  Constant: '<S389>/Constant Value1'
             *  Sum: '<S389>/Subtraction'
             *  Switch: '<S389>/Switch2'
             *  UnitDelay: '<S389>/Unit Delay'
             */
            VeCOUB_Cnt_STBFailLimChillrShtOffVlvVlv = (uint16)(((uint32)
                VeCOUB_Cnt_STBFailLimChillrShtOffVlvVlv) + 1U);
        }

        /* End of Switch: '<S389>/Switch2' */

        /* Switch: '<S390>/Switch2' */
        if (rtb_Logical1_f2)
        {
            /* Switch: '<S390>/Switch1' incorporates:
             *  Constant: '<S390>/Constant Value1'
             *  Sum: '<S390>/Subtraction'
             *  Switch: '<S390>/Switch2'
             *  UnitDelay: '<S390>/Unit Delay'
             */
            VeCOUB_Cnt_STBSmplLimChillrShtOffVlvVlv = (uint16)(((uint32)
                VeCOUB_Cnt_STBSmplLimChillrShtOffVlvVlv) + 1U);
        }

        /* End of Switch: '<S390>/Switch2' */
    }

    /* End of Switch: '<S389>/Switch1' */
    /* End of Outputs for SubSystem: '<S382>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S382>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S382>/Greater Than or Equal ' incorporates:
     *  Constant: '<S377>/Calib'
     */
    COUB_ac_DW.UnitDelay1_DSTATE_i = (VeCOUB_Cnt_STBFailLimChillrShtOffVlvVlv >=
        KeCOUB_Cnt_STBFailLimChillrShtOff);

    /* Logic: '<S382>/NOT5' incorporates:
     *  Constant: '<S378>/Calib'
     *  Logic: '<S382>/NOT3'
     *  RelationalOperator: '<S382>/Less Than  or Equal'
     */
    rtb_Logical1_f2 = ((VeCOUB_Cnt_STBSmplLimChillrShtOffVlvVlv >=
                        KeCOUB_Cnt_STBSmplLimChillrShtOff) &&
                       (!COUB_ac_DW.UnitDelay1_DSTATE_i));

    /* Outputs for Enabled SubSystem: '<S381>/Fail' */
    COUB_ac_Fail(COUB_ac_DW.UnitDelay1_DSTATE_i, &COUB_ac_B.Merge_ei);

    /* End of Outputs for SubSystem: '<S381>/Fail' */

    /* Outputs for Enabled SubSystem: '<S381>/Init' */
    COUB_ac_Init_i(rtb_RelationalOperator3_n, &COUB_ac_B.Merge_ei);

    /* End of Outputs for SubSystem: '<S381>/Init' */

    /* Outputs for Enabled SubSystem: '<S381>/Pass' */
    COUB_ac_Pass(rtb_Logical1_f2, &COUB_ac_B.Merge_ei);

    /* End of Outputs for SubSystem: '<S381>/Pass' */

    /* RelationalOperator: '<S381>/Relational Operator' incorporates:
     *  Constant: '<S384>/Constant'
     *  Merge: '<S381>/Merge'
     */
    COUB_ac_B.RelationalOperator_n = (((uint32)COUB_ac_B.Merge_ei) ==
        CeDFIB_e_Fail);

    /* Switch: '<S395>/Switch1' incorporates:
     *  Switch: '<S394>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_Post_n)
    {
        /* Outport: '<Root>/VeCOUB_Cnt_STBChillrShtOffVlv_MFOP' incorporates:
         *  Constant: '<S388>/Constant Value'
         */
        (void)Rte_Write_VeCOUB_Cnt_STBChillrShtOffVlv_MFOP_Value((uint16)0U);
    }
    else if (rtb_Logical1_f2)
    {
        /* MinMax: '<S388>/Minimum2' incorporates:
         *  Switch: '<S394>/Switch1'
         */
        if (VeCOUB_Cnt_STBFailLimChillrShtOffVlvVlv >
                rtb_TmpSignalConversionAtVeNVMB_Cnt_STBC)
        {
            /* Outport: '<Root>/VeCOUB_Cnt_STBChillrShtOffVlv_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_STBChillrShtOffVlv_MFOP_Value
                (VeCOUB_Cnt_STBFailLimChillrShtOffVlvVlv);
        }
        else
        {
            /* Outport: '<Root>/VeCOUB_Cnt_STBChillrShtOffVlv_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_STBChillrShtOffVlv_MFOP_Value
                (rtb_TmpSignalConversionAtVeNVMB_Cnt_STBC);
        }

        /* End of MinMax: '<S388>/Minimum2' */
    }
    else
    {
        /* Outport: '<Root>/VeCOUB_Cnt_STBChillrShtOffVlv_MFOP' incorporates:
         *  Switch: '<S394>/Switch1'
         */
        (void)Rte_Write_VeCOUB_Cnt_STBChillrShtOffVlv_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB_Cnt_STBC);
    }

    /* End of Switch: '<S395>/Switch1' */

    /* RelationalOperator: '<S400>/Relational Operator3' incorporates:
     *  Constant: '<S400>/Constant3'
     *  S-Function (sfix_bitop): '<S400>/Bitwise Operator2'
     */
    rtb_AND_ij = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Sta_ey) & 64U) ==
                  0U);

    /* Outputs for Atomic SubSystem: '<S400>/EdgeFalling1' */
    /* Logic: '<S400>/Logical Operator' incorporates:
     *  Logic: '<S402>/OR1'
     */
    rtb_AND_m = !rtb_AND_ij;

    /* End of Outputs for SubSystem: '<S400>/EdgeFalling1' */

    /* Logic: '<S400>/Logical1' incorporates:
     *  Constant: '<S398>/Calib'
     *  Constant: '<S399>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S400>/Constant1'
     *  Logic: '<S374>/Logical Operator'
     *  Logic: '<S400>/Logical Operator'
     *  Logic: '<S400>/Logical10'
     *  Logic: '<S400>/Logical12'
     *  RelationalOperator: '<S400>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S400>/Bitwise Operator3'
     */
    rtb_RelationalOperator3_n = ((rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i &&
        (KeCOUB_b_STGDiagEnbl_ChillrShtOff)) &&
        ((!KeCOUB_b_LtchEnblSTGChillrShtOffVlv) || (((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_ey) & 1U) == 0U) || rtb_AND_m)));

    /* Outputs for Atomic SubSystem: '<S400>/EdgeFalling1' */
    /* Logic: '<S402>/AND' incorporates:
     *  UnitDelay: '<S402>/Unit Delay'
     */
    rtb_AND_m = (rtb_AND_m && (COUB_ac_DW.UnitDelay_DSTATE_gl));

    /* Update for UnitDelay: '<S402>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_gl = rtb_AND_ij;

    /* End of Outputs for SubSystem: '<S400>/EdgeFalling1' */

    /* Logic: '<S400>/Logical5' */
    rtb_AND_ij = (rtb_NOT4_gl || rtb_AND_m);

    /* UnitDelay: '<S401>/Unit Delay1' incorporates:
     *  UnitDelay: '<S382>/Unit Delay'
     */
    COUB_ac_DW.UnitDelay_DSTATE_nc = COUB_ac_DW.UnitDelay1_DSTATE_g2;

    /* Outputs for Atomic SubSystem: '<S401>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S401>/Counter Reset  Enabled ' */
    /* Switch: '<S408>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_CSOVFltCircDtctd_CircShoLo'
     *  Logic: '<S401>/Fail Counter Reset'
     *  Switch: '<S409>/Switch1'
     *  UnitDelay: '<S382>/Unit Delay'
     *  UnitDelay: '<S401>/Unit Delay'
     */
    if ((rtb_AND_ij || (COUB_ac_DW.UnitDelay_DSTATE_kr)) ||
            (COUB_ac_DW.UnitDelay_DSTATE_nc))
    {
        /* Switch: '<S408>/Switch1' incorporates:
         *  Constant: '<S408>/Constant Value2'
         */
        VeCOUB_Cnt_STGFailLimChillrShtOffVlvVlv = 0U;

        /* Switch: '<S409>/Switch1' incorporates:
         *  Constant: '<S409>/Constant Value2'
         */
        VeCOUB_Cnt_STGSmplLimChillrShtOffVlvVlv = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_CSOVFltCircDtctd_CircShoLo(&tmpRead_2);

        /* Switch: '<S408>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_CSOVFltCircDtctd_CircShoLo'
         *  Logic: '<S374>/Logical Operator1'
         *  Logic: '<S401>/NOT6'
         */
        if (rtb_RelationalOperator3_n && ((((sint32)tmpRead_2.CircShoLo) != 0) &&
             rtb_TmpSignalConversionAtVeDIOR_ChillrSh))
        {
            /* Switch: '<S408>/Switch1' incorporates:
             *  Constant: '<S408>/Constant Value1'
             *  Sum: '<S408>/Subtraction'
             *  Switch: '<S408>/Switch2'
             *  UnitDelay: '<S408>/Unit Delay'
             */
            VeCOUB_Cnt_STGFailLimChillrShtOffVlvVlv = (uint16)(((uint32)
                VeCOUB_Cnt_STGFailLimChillrShtOffVlvVlv) + 1U);
        }

        /* End of Switch: '<S408>/Switch2' */

        /* Switch: '<S409>/Switch2' */
        if (rtb_RelationalOperator3_n)
        {
            /* Switch: '<S409>/Switch1' incorporates:
             *  Constant: '<S409>/Constant Value1'
             *  Sum: '<S409>/Subtraction'
             *  Switch: '<S409>/Switch2'
             *  UnitDelay: '<S409>/Unit Delay'
             */
            VeCOUB_Cnt_STGSmplLimChillrShtOffVlvVlv = (uint16)(((uint32)
                VeCOUB_Cnt_STGSmplLimChillrShtOffVlvVlv) + 1U);
        }

        /* End of Switch: '<S409>/Switch2' */
    }

    /* End of Switch: '<S408>/Switch1' */
    /* End of Outputs for SubSystem: '<S401>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S401>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S401>/Greater Than or Equal ' incorporates:
     *  Constant: '<S396>/Calib'
     */
    COUB_ac_DW.UnitDelay1_DSTATE_g2 = (VeCOUB_Cnt_STGFailLimChillrShtOffVlvVlv >=
        KeCOUB_Cnt_STGFailLimChillrShtOff);

    /* Logic: '<S401>/NOT5' incorporates:
     *  Constant: '<S397>/Calib'
     *  Logic: '<S401>/NOT3'
     *  RelationalOperator: '<S401>/Less Than  or Equal'
     */
    COUB_ac_DW.UnitDelay_DSTATE_kr = ((VeCOUB_Cnt_STGSmplLimChillrShtOffVlvVlv >=
        KeCOUB_Cnt_STGSmplLimChillrShtOff) && (!COUB_ac_DW.UnitDelay1_DSTATE_g2));

    /* Outputs for Enabled SubSystem: '<S400>/Fail' */
    COUB_ac_Fail(COUB_ac_DW.UnitDelay1_DSTATE_g2, &COUB_ac_B.Merge_a);

    /* End of Outputs for SubSystem: '<S400>/Fail' */

    /* Outputs for Enabled SubSystem: '<S400>/Init' */
    COUB_ac_Init_i(rtb_AND_ij, &COUB_ac_B.Merge_a);

    /* End of Outputs for SubSystem: '<S400>/Init' */

    /* Outputs for Enabled SubSystem: '<S400>/Pass' */
    COUB_ac_Pass(COUB_ac_DW.UnitDelay_DSTATE_kr, &COUB_ac_B.Merge_a);

    /* End of Outputs for SubSystem: '<S400>/Pass' */

    /* RelationalOperator: '<S400>/Relational Operator' incorporates:
     *  Constant: '<S403>/Constant'
     *  Merge: '<S400>/Merge'
     */
    COUB_ac_B.RelationalOperator_ai = (((uint32)COUB_ac_B.Merge_a) ==
        CeDFIB_e_Fail);

    /* Switch: '<S414>/Switch1' incorporates:
     *  Switch: '<S413>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_Post_n)
    {
        /* Outport: '<Root>/VeCOUB_Cnt_STGChillrShtOffVlv_MFOP' incorporates:
         *  Constant: '<S407>/Constant Value'
         */
        (void)Rte_Write_VeCOUB_Cnt_STGChillrShtOffVlv_MFOP_Value((uint16)0U);
    }
    else if (COUB_ac_DW.UnitDelay_DSTATE_kr)
    {
        /* MinMax: '<S407>/Minimum2' incorporates:
         *  Switch: '<S413>/Switch1'
         */
        if (VeCOUB_Cnt_STGFailLimChillrShtOffVlvVlv >
                rtb_TmpSignalConversionAtVeNVMB_Cnt_STGC)
        {
            /* Outport: '<Root>/VeCOUB_Cnt_STGChillrShtOffVlv_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_STGChillrShtOffVlv_MFOP_Value
                (VeCOUB_Cnt_STGFailLimChillrShtOffVlvVlv);
        }
        else
        {
            /* Outport: '<Root>/VeCOUB_Cnt_STGChillrShtOffVlv_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_STGChillrShtOffVlv_MFOP_Value
                (rtb_TmpSignalConversionAtVeNVMB_Cnt_STGC);
        }

        /* End of MinMax: '<S407>/Minimum2' */
    }
    else
    {
        /* Outport: '<Root>/VeCOUB_Cnt_STGChillrShtOffVlv_MFOP' incorporates:
         *  Switch: '<S413>/Switch1'
         */
        (void)Rte_Write_VeCOUB_Cnt_STGChillrShtOffVlv_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB_Cnt_STGC);
    }

    /* End of Switch: '<S414>/Switch1' */

    /* RelationalOperator: '<S419>/Relational Operator3' incorporates:
     *  Constant: '<S419>/Constant3'
     *  S-Function (sfix_bitop): '<S419>/Bitwise Operator2'
     */
    rtb_AND_ij = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Stat_n) & 64U) ==
                  0U);

    /* Outputs for Atomic SubSystem: '<S419>/EdgeFalling1' */
    /* Logic: '<S419>/Logical Operator' incorporates:
     *  Logic: '<S421>/OR1'
     */
    rtb_AND_m = !rtb_AND_ij;

    /* End of Outputs for SubSystem: '<S419>/EdgeFalling1' */

    /* Logic: '<S419>/Logical1' incorporates:
     *  Constant: '<S417>/Calib'
     *  Constant: '<S418>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S419>/Constant1'
     *  Logic: '<S375>/Logical Operator'
     *  Logic: '<S419>/Logical Operator'
     *  Logic: '<S419>/Logical10'
     *  Logic: '<S419>/Logical12'
     *  RelationalOperator: '<S419>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S419>/Bitwise Operator3'
     */
    rtb_RelationalOperator3_n = ((rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i &&
        (KeCOUB_b_OCDiagEnbl_ChillrShtOff)) &&
        ((!KeCOUB_b_LtchEnblOCChillrShtOffVlv) || (((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_n) & 1U) == 0U) || rtb_AND_m)));

    /* Outputs for Atomic SubSystem: '<S419>/EdgeFalling1' */
    /* Logic: '<S421>/AND' incorporates:
     *  UnitDelay: '<S421>/Unit Delay'
     */
    rtb_AND_m = (rtb_AND_m && (COUB_ac_DW.UnitDelay_DSTATE_b0));

    /* Update for UnitDelay: '<S421>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_b0 = rtb_AND_ij;

    /* End of Outputs for SubSystem: '<S419>/EdgeFalling1' */

    /* Logic: '<S419>/Logical5' */
    rtb_NOT4_gl = (rtb_NOT4_gl || rtb_AND_m);

    /* UnitDelay: '<S420>/Unit Delay1' incorporates:
     *  UnitDelay: '<S382>/Unit Delay'
     */
    COUB_ac_DW.UnitDelay_DSTATE_nc = COUB_ac_DW.UnitDelay1_DSTATE_al;

    /* Outputs for Atomic SubSystem: '<S420>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S420>/Counter Reset  Enabled ' */
    /* Switch: '<S427>/Switch1' incorporates:
     *  Constant: '<S427>/Constant Value2'
     *  Constant: '<S428>/Constant Value2'
     *  Inport: '<Root>/VeDIOR_CSOVFltCircDtctd_CircOpen'
     *  Logic: '<S420>/Fail Counter Reset'
     *  Switch: '<S428>/Switch1'
     *  UnitDelay: '<S382>/Unit Delay'
     *  UnitDelay: '<S420>/Unit Delay'
     *  UnitDelay: '<S427>/Unit Delay'
     *  UnitDelay: '<S428>/Unit Delay'
     */
    if ((rtb_NOT4_gl || (COUB_ac_DW.UnitDelay_DSTATE_fx)) ||
            (COUB_ac_DW.UnitDelay_DSTATE_nc))
    {
        COUB_ac_DW.UnitDelay_DSTATE_lo = 0U;
        COUB_ac_DW.UnitDelay_DSTATE_ml = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_CSOVFltCircDtctd_CircOpen(&tmpRead_4);

        /* Switch: '<S427>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_CSOVFltCircDtctd_CircOpen'
         *  Logic: '<S375>/Logical Operator1'
         *  Logic: '<S420>/NOT6'
         */
        if (rtb_RelationalOperator3_n && ((((sint32)tmpRead_4.CircOpen) != 0) &&
             rtb_TmpSignalConversionAtVeDIOR_ChillrSh))
        {
            /* UnitDelay: '<S427>/Unit Delay' incorporates:
             *  Constant: '<S427>/Constant Value1'
             *  Sum: '<S427>/Subtraction'
             *  Switch: '<S427>/Switch2'
             */
            COUB_ac_DW.UnitDelay_DSTATE_lo = (uint16)(((uint32)
                COUB_ac_DW.UnitDelay_DSTATE_lo) + 1U);
        }

        /* End of Switch: '<S427>/Switch2' */

        /* Switch: '<S428>/Switch2' */
        if (rtb_RelationalOperator3_n)
        {
            /* UnitDelay: '<S428>/Unit Delay' incorporates:
             *  Constant: '<S428>/Constant Value1'
             *  Sum: '<S428>/Subtraction'
             *  Switch: '<S428>/Switch2'
             */
            COUB_ac_DW.UnitDelay_DSTATE_ml = (uint16)(((uint32)
                COUB_ac_DW.UnitDelay_DSTATE_ml) + 1U);
        }

        /* End of Switch: '<S428>/Switch2' */
    }

    /* End of Switch: '<S427>/Switch1' */
    /* End of Outputs for SubSystem: '<S420>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S420>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S420>/Greater Than or Equal ' incorporates:
     *  Constant: '<S415>/Calib'
     *  UnitDelay: '<S427>/Unit Delay'
     */
    COUB_ac_DW.UnitDelay1_DSTATE_al = (COUB_ac_DW.UnitDelay_DSTATE_lo >=
        KeCOUB_Cnt_OCFailLimChillrShtOff);

    /* Logic: '<S420>/NOT5' incorporates:
     *  Constant: '<S416>/Calib'
     *  Logic: '<S420>/NOT3'
     *  RelationalOperator: '<S420>/Less Than  or Equal'
     *  UnitDelay: '<S428>/Unit Delay'
     */
    COUB_ac_DW.UnitDelay_DSTATE_fx = ((COUB_ac_DW.UnitDelay_DSTATE_ml >=
        KeCOUB_Cnt_OCSmplLimChillrShtOff) && (!COUB_ac_DW.UnitDelay1_DSTATE_al));

    /* Outputs for Enabled SubSystem: '<S419>/Fail' */
    COUB_ac_Fail(COUB_ac_DW.UnitDelay1_DSTATE_al, &COUB_ac_B.Merge_f);

    /* End of Outputs for SubSystem: '<S419>/Fail' */

    /* Outputs for Enabled SubSystem: '<S419>/Init' */
    COUB_ac_Init_i(rtb_NOT4_gl, &COUB_ac_B.Merge_f);

    /* End of Outputs for SubSystem: '<S419>/Init' */

    /* Outputs for Enabled SubSystem: '<S419>/Pass' */
    COUB_ac_Pass(COUB_ac_DW.UnitDelay_DSTATE_fx, &COUB_ac_B.Merge_f);

    /* End of Outputs for SubSystem: '<S419>/Pass' */

    /* RelationalOperator: '<S419>/Relational Operator' incorporates:
     *  Constant: '<S422>/Constant'
     *  Merge: '<S419>/Merge'
     */
    COUB_ac_B.RelationalOperator_li = (((uint32)COUB_ac_B.Merge_f) ==
        CeDFIB_e_Fail);

    /* Switch: '<S433>/Switch1' incorporates:
     *  Switch: '<S432>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_Post_n)
    {
        /* Outport: '<Root>/VeCOUB_Cnt_OCChillrShtOffVlv_MFOP' incorporates:
         *  Constant: '<S426>/Constant Value'
         */
        (void)Rte_Write_VeCOUB_Cnt_OCChillrShtOffVlv_MFOP_Value((uint16)0U);
    }
    else if (COUB_ac_DW.UnitDelay_DSTATE_fx)
    {
        /* MinMax: '<S426>/Minimum2' incorporates:
         *  Switch: '<S432>/Switch1'
         *  UnitDelay: '<S427>/Unit Delay'
         */
        if (COUB_ac_DW.UnitDelay_DSTATE_lo >
                rtb_TmpSignalConversionAtVeNVMB_Cnt_OCCh)
        {
            /* Outport: '<Root>/VeCOUB_Cnt_OCChillrShtOffVlv_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_OCChillrShtOffVlv_MFOP_Value
                (COUB_ac_DW.UnitDelay_DSTATE_lo);
        }
        else
        {
            /* Outport: '<Root>/VeCOUB_Cnt_OCChillrShtOffVlv_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_OCChillrShtOffVlv_MFOP_Value
                (rtb_TmpSignalConversionAtVeNVMB_Cnt_OCCh);
        }

        /* End of MinMax: '<S426>/Minimum2' */
    }
    else
    {
        /* Outport: '<Root>/VeCOUB_Cnt_OCChillrShtOffVlv_MFOP' incorporates:
         *  Switch: '<S432>/Switch1'
         */
        (void)Rte_Write_VeCOUB_Cnt_OCChillrShtOffVlv_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB_Cnt_OCCh);
    }

    /* End of Switch: '<S433>/Switch1' */

    /* Switch: '<S371>/Switch' incorporates:
     *  Constant: '<S435>/Calib'
     *  Constant: '<S436>/Calib'
     *  Switch: '<S437>/Switch'
     */
    if (KeCOUB_b_ChillrShtOffVlvBypEnbl)
    {
        /* FunctionCaller: '<S369>/SetDIOR_b_ChillrShtOffVlv_St' */
        Rte_Call_SetDIOR_b_ChillrShtOffVlv_St(KeCOUB_b_ChillrShtOffVlvByp);
    }
    else
    {
        if (KeCOUB_b_ChillrShtOffVlvPolarInvEnb)
        {
            /* Switch: '<S437>/Switch' incorporates:
             *  Logic: '<S372>/Logical Operator'
             */
            rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf =
                !rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf;
        }

        /* FunctionCaller: '<S369>/SetDIOR_b_ChillrShtOffVlv_St' */
        Rte_Call_SetDIOR_b_ChillrShtOffVlv_St
            (rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf);
    }

    /* End of Switch: '<S371>/Switch' */

    /* Update for UnitDelay: '<S382>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_nc = rtb_Logical1_f2;

    /* End of Outputs for SubSystem: '<S366>/ChillrShtOffVlv' */
    /* End of Outputs for SubSystem: '<S365>/ChillrShtOffVlv' */
#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence

    /* Outputs for Atomic SubSystem: '<S365>/FtRfgtShtOffVlv' */
    /* Outputs for Atomic SubSystem: '<S367>/FtRfgtShtOffVlv' */

    /* RelationalOperator: '<S450>/Relational Operator3' incorporates:
     *  Constant: '<S450>/Constant3'
     *  S-Function (sfix_bitop): '<S450>/Bitwise Operator2'
     */
    rtb_NOT4_gl = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Sta_ol) & 64U) ==
                   0U);

    /* Outputs for Atomic SubSystem: '<S450>/EdgeFalling1' */
    /* Logic: '<S450>/Logical Operator' incorporates:
     *  Logic: '<S452>/OR1'
     */
    rtb_Logical1_f2 = !rtb_NOT4_gl;

    /* End of Outputs for SubSystem: '<S450>/EdgeFalling1' */

    /* Logic: '<S450>/Logical1' incorporates:
     *  Constant: '<S448>/Calib'
     *  Constant: '<S449>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S450>/Constant1'
     *  Logic: '<S442>/Logical Operator'
     *  Logic: '<S450>/Logical Operator'
     *  Logic: '<S450>/Logical10'
     *  Logic: '<S450>/Logical12'
     *  RelationalOperator: '<S450>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S450>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeDIOR_ChillrSh =
        ((rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i &&
          (KeCOUB_b_STBDiagEnbl_FtRfgtShtOffVlv)) &&
         ((!KeCOUB_b_LtchEnblSTBFtRfgtShtOffVlv) || (((((uint32)
              rtb_TmpSignalConversionAtVeDMAB_y_Sta_ol) & 1U) == 0U) ||
           rtb_Logical1_f2)));

    /* Logic: '<S445>/NOT4' */
    rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf =
        (rtb_TmpSignalConversionAtVeDFIR_b_Dsbl_g ||
         rtb_TmpSignalConversionAtVeDFIR_b_Post_n);

    /* Outputs for Atomic SubSystem: '<S450>/EdgeFalling1' */
    /* Logic: '<S452>/AND' incorporates:
     *  UnitDelay: '<S452>/Unit Delay'
     */
    rtb_Logical1_f2 = (rtb_Logical1_f2 && (COUB_ac_DW.UnitDelay_DSTATE_bb));

    /* Update for UnitDelay: '<S452>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_bb = rtb_NOT4_gl;

    /* End of Outputs for SubSystem: '<S450>/EdgeFalling1' */

    /* Logic: '<S450>/Logical5' */
    rtb_NOT4_gl = (rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf || rtb_Logical1_f2);

    /* Outputs for Atomic SubSystem: '<S451>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S451>/Counter Reset  Enabled ' */
    /* Switch: '<S458>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_FRSOVFltCircDtctd_CircShoHi'
     *  Logic: '<S451>/Fail Counter Reset'
     *  Switch: '<S459>/Switch1'
     *  UnitDelay: '<S451>/Unit Delay'
     *  UnitDelay: '<S451>/Unit Delay1'
     */
    if ((rtb_NOT4_gl || (COUB_ac_DW.UnitDelay_DSTATE_ow)) ||
            (COUB_ac_DW.UnitDelay1_DSTATE_an))
    {
        /* Switch: '<S458>/Switch1' incorporates:
         *  Constant: '<S458>/Constant Value2'
         */
        VeCOUB_Cnt_STBFailLimFtRfgtShtOffVlv = 0U;

        /* Switch: '<S459>/Switch1' incorporates:
         *  Constant: '<S459>/Constant Value2'
         */
        VeCOUB_Cnt_STBSmplLimFtRfgtShtOffVlv = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_FRSOVFltCircDtctd_CircShoHi(&tmpRead_0);

        /* Switch: '<S458>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_FRSOVFltCircDtctd_CircShoHi'
         *  Logic: '<S442>/Logical Operator1'
         *  Logic: '<S451>/NOT6'
         */
        if (rtb_TmpSignalConversionAtVeDIOR_ChillrSh && ((((sint32)
                tmpRead_0.CircShoHi) != 0) &&
                rtb_TmpSignalConversionAtVeDIOR_FtRfgtSh))
        {
            /* Switch: '<S458>/Switch1' incorporates:
             *  Constant: '<S458>/Constant Value1'
             *  Sum: '<S458>/Subtraction'
             *  Switch: '<S458>/Switch2'
             *  UnitDelay: '<S458>/Unit Delay'
             */
            VeCOUB_Cnt_STBFailLimFtRfgtShtOffVlv = (uint16)(((uint32)
                VeCOUB_Cnt_STBFailLimFtRfgtShtOffVlv) + 1U);
        }

        /* End of Switch: '<S458>/Switch2' */

        /* Switch: '<S459>/Switch2' */
        if (rtb_TmpSignalConversionAtVeDIOR_ChillrSh)
        {
            /* Switch: '<S459>/Switch1' incorporates:
             *  Constant: '<S459>/Constant Value1'
             *  Sum: '<S459>/Subtraction'
             *  Switch: '<S459>/Switch2'
             *  UnitDelay: '<S459>/Unit Delay'
             */
            VeCOUB_Cnt_STBSmplLimFtRfgtShtOffVlv = (uint16)(((uint32)
                VeCOUB_Cnt_STBSmplLimFtRfgtShtOffVlv) + 1U);
        }

        /* End of Switch: '<S459>/Switch2' */
    }

    /* End of Switch: '<S458>/Switch1' */
    /* End of Outputs for SubSystem: '<S451>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S451>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S451>/Greater Than or Equal ' incorporates:
     *  Constant: '<S446>/Calib'
     */
    COUB_ac_DW.UnitDelay1_DSTATE_an = (VeCOUB_Cnt_STBFailLimFtRfgtShtOffVlv >=
        KeCOUB_Cnt_STBFailLimFtRfgtShtOffVlv);

    /* Logic: '<S451>/NOT5' incorporates:
     *  Constant: '<S447>/Calib'
     *  Logic: '<S451>/NOT3'
     *  RelationalOperator: '<S451>/Less Than  or Equal'
     */
    rtb_TmpSignalConversionAtVeDIOR_ChillrSh =
        ((VeCOUB_Cnt_STBSmplLimFtRfgtShtOffVlv >=
          KeCOUB_Cnt_STBSmplLimFtRfgtShtOffVlv) &&
         (!COUB_ac_DW.UnitDelay1_DSTATE_an));

    /* Outputs for Enabled SubSystem: '<S450>/Fail' */
    COUB_ac_Fail(COUB_ac_DW.UnitDelay1_DSTATE_an, &COUB_ac_B.Merge_dm);

    /* End of Outputs for SubSystem: '<S450>/Fail' */

    /* Outputs for Enabled SubSystem: '<S450>/Init' */
    COUB_ac_Init_i(rtb_NOT4_gl, &COUB_ac_B.Merge_dm);

    /* End of Outputs for SubSystem: '<S450>/Init' */

    /* Outputs for Enabled SubSystem: '<S450>/Pass' */
    COUB_ac_Pass(rtb_TmpSignalConversionAtVeDIOR_ChillrSh, &COUB_ac_B.Merge_dm);

    /* End of Outputs for SubSystem: '<S450>/Pass' */

    /* RelationalOperator: '<S450>/Relational Operator' incorporates:
     *  Constant: '<S453>/Constant'
     *  Merge: '<S450>/Merge'
     */
    COUB_ac_B.RelationalOperator_m = (((uint32)COUB_ac_B.Merge_dm) ==
        CeDFIB_e_Fail);

    /* Switch: '<S464>/Switch1' incorporates:
     *  Switch: '<S463>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_Post_n)
    {
        /* Outport: '<Root>/VeCOUB_Cnt_STBFtRfgtShtOffVlv_MFOP' incorporates:
         *  Constant: '<S457>/Constant Value'
         */
        (void)Rte_Write_VeCOUB_Cnt_STBFtRfgtShtOffVlv_MFOP_Value((uint16)0U);
    }
    else if (rtb_TmpSignalConversionAtVeDIOR_ChillrSh)
    {
        /* MinMax: '<S457>/Minimum2' incorporates:
         *  Switch: '<S463>/Switch1'
         */
        if (VeCOUB_Cnt_STBFailLimFtRfgtShtOffVlv >
                rtb_TmpSignalConversionAtVeNVMB_Cnt_STBF)
        {
            /* Outport: '<Root>/VeCOUB_Cnt_STBFtRfgtShtOffVlv_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_STBFtRfgtShtOffVlv_MFOP_Value
                (VeCOUB_Cnt_STBFailLimFtRfgtShtOffVlv);
        }
        else
        {
            /* Outport: '<Root>/VeCOUB_Cnt_STBFtRfgtShtOffVlv_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_STBFtRfgtShtOffVlv_MFOP_Value
                (rtb_TmpSignalConversionAtVeNVMB_Cnt_STBF);
        }

        /* End of MinMax: '<S457>/Minimum2' */
    }
    else
    {
        /* Outport: '<Root>/VeCOUB_Cnt_STBFtRfgtShtOffVlv_MFOP' incorporates:
         *  Switch: '<S463>/Switch1'
         */
        (void)Rte_Write_VeCOUB_Cnt_STBFtRfgtShtOffVlv_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB_Cnt_STBF);
    }

    /* End of Switch: '<S464>/Switch1' */

    /* RelationalOperator: '<S469>/Relational Operator3' incorporates:
     *  Constant: '<S469>/Constant3'
     *  S-Function (sfix_bitop): '<S469>/Bitwise Operator2'
     */
    rtb_Logical1_f2 = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Sta_kz) & 64U)
                       == 0U);

    /* Outputs for Atomic SubSystem: '<S469>/EdgeFalling1' */
    /* Logic: '<S469>/Logical Operator' incorporates:
     *  Logic: '<S471>/OR1'
     */
    rtb_RelationalOperator3_n = !rtb_Logical1_f2;

    /* End of Outputs for SubSystem: '<S469>/EdgeFalling1' */

    /* Logic: '<S469>/Logical1' incorporates:
     *  Constant: '<S467>/Calib'
     *  Constant: '<S468>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S469>/Constant1'
     *  Logic: '<S443>/Logical Operator'
     *  Logic: '<S469>/Logical Operator'
     *  Logic: '<S469>/Logical10'
     *  Logic: '<S469>/Logical12'
     *  RelationalOperator: '<S469>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S469>/Bitwise Operator3'
     */
    rtb_NOT4_gl = ((rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i &&
                    (KeCOUB_b_STGDiagEnbl_FtRfgtShtOffVlv)) &&
                   ((!KeCOUB_b_LtchEnblSTGFtRfgtShtOffVlv) || (((((uint32)
                        rtb_TmpSignalConversionAtVeDMAB_y_Sta_kz) & 1U) == 0U) ||
                     rtb_RelationalOperator3_n)));

    /* Outputs for Atomic SubSystem: '<S469>/EdgeFalling1' */
    /* Logic: '<S471>/AND' incorporates:
     *  UnitDelay: '<S471>/Unit Delay'
     */
    rtb_RelationalOperator3_n = (rtb_RelationalOperator3_n &&
        (COUB_ac_DW.UnitDelay_DSTATE_el));

    /* Update for UnitDelay: '<S471>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_el = rtb_Logical1_f2;

    /* End of Outputs for SubSystem: '<S469>/EdgeFalling1' */

    /* Logic: '<S469>/Logical5' */
    rtb_Logical1_f2 = (rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf ||
                       rtb_RelationalOperator3_n);

    /* UnitDelay: '<S470>/Unit Delay1' incorporates:
     *  UnitDelay: '<S451>/Unit Delay'
     */
    COUB_ac_DW.UnitDelay_DSTATE_ow = COUB_ac_DW.UnitDelay1_DSTATE_fc;

    /* Outputs for Atomic SubSystem: '<S470>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S470>/Counter Reset  Enabled ' */
    /* Switch: '<S477>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_FRSOVFltCircDtctd_CircShoLo'
     *  Logic: '<S470>/Fail Counter Reset'
     *  Switch: '<S478>/Switch1'
     *  UnitDelay: '<S451>/Unit Delay'
     *  UnitDelay: '<S470>/Unit Delay'
     */
    if ((rtb_Logical1_f2 || (COUB_ac_DW.UnitDelay_DSTATE_fa)) ||
            (COUB_ac_DW.UnitDelay_DSTATE_ow))
    {
        /* Switch: '<S477>/Switch1' incorporates:
         *  Constant: '<S477>/Constant Value2'
         */
        VeCOUB_Cnt_STGFailLimFtRfgtShtOffVlv = 0U;

        /* Switch: '<S478>/Switch1' incorporates:
         *  Constant: '<S478>/Constant Value2'
         */
        VeCOUB_Cnt_STGSmplLimFtRfgtShtOffVlv = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_FRSOVFltCircDtctd_CircShoLo(&tmpRead);

        /* Switch: '<S477>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_FRSOVFltCircDtctd_CircShoLo'
         *  Logic: '<S443>/Logical Operator1'
         *  Logic: '<S470>/NOT6'
         */
        if (rtb_NOT4_gl && ((((sint32)tmpRead.CircShoLo) != 0) &&
                            rtb_TmpSignalConversionAtVeDIOR_FtRfgtSh))
        {
            /* Switch: '<S477>/Switch1' incorporates:
             *  Constant: '<S477>/Constant Value1'
             *  Sum: '<S477>/Subtraction'
             *  Switch: '<S477>/Switch2'
             *  UnitDelay: '<S477>/Unit Delay'
             */
            VeCOUB_Cnt_STGFailLimFtRfgtShtOffVlv = (uint16)(((uint32)
                VeCOUB_Cnt_STGFailLimFtRfgtShtOffVlv) + 1U);
        }

        /* End of Switch: '<S477>/Switch2' */

        /* Switch: '<S478>/Switch2' */
        if (rtb_NOT4_gl)
        {
            /* Switch: '<S478>/Switch1' incorporates:
             *  Constant: '<S478>/Constant Value1'
             *  Sum: '<S478>/Subtraction'
             *  Switch: '<S478>/Switch2'
             *  UnitDelay: '<S478>/Unit Delay'
             */
            VeCOUB_Cnt_STGSmplLimFtRfgtShtOffVlv = (uint16)(((uint32)
                VeCOUB_Cnt_STGSmplLimFtRfgtShtOffVlv) + 1U);
        }

        /* End of Switch: '<S478>/Switch2' */
    }

    /* End of Switch: '<S477>/Switch1' */
    /* End of Outputs for SubSystem: '<S470>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S470>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S470>/Greater Than or Equal ' incorporates:
     *  Constant: '<S465>/Calib'
     */
    COUB_ac_DW.UnitDelay1_DSTATE_fc = (VeCOUB_Cnt_STGFailLimFtRfgtShtOffVlv >=
        KeCOUB_Cnt_STGFailLimFtRfgtShtOffVlv);

    /* Logic: '<S470>/NOT5' incorporates:
     *  Constant: '<S466>/Calib'
     *  Logic: '<S470>/NOT3'
     *  RelationalOperator: '<S470>/Less Than  or Equal'
     */
    COUB_ac_DW.UnitDelay_DSTATE_fa = ((VeCOUB_Cnt_STGSmplLimFtRfgtShtOffVlv >=
        KeCOUB_Cnt_STGSmplLimFtRfgtShtOffVlv) &&
        (!COUB_ac_DW.UnitDelay1_DSTATE_fc));

    /* Outputs for Enabled SubSystem: '<S469>/Fail' */
    COUB_ac_Fail(COUB_ac_DW.UnitDelay1_DSTATE_fc, &COUB_ac_B.Merge_j2);

    /* End of Outputs for SubSystem: '<S469>/Fail' */

    /* Outputs for Enabled SubSystem: '<S469>/Init' */
    COUB_ac_Init_i(rtb_Logical1_f2, &COUB_ac_B.Merge_j2);

    /* End of Outputs for SubSystem: '<S469>/Init' */

    /* Outputs for Enabled SubSystem: '<S469>/Pass' */
    COUB_ac_Pass(COUB_ac_DW.UnitDelay_DSTATE_fa, &COUB_ac_B.Merge_j2);

    /* End of Outputs for SubSystem: '<S469>/Pass' */

    /* RelationalOperator: '<S469>/Relational Operator' incorporates:
     *  Constant: '<S472>/Constant'
     *  Merge: '<S469>/Merge'
     */
    COUB_ac_B.RelationalOperator_ln = (((uint32)COUB_ac_B.Merge_j2) ==
        CeDFIB_e_Fail);

    /* Switch: '<S483>/Switch1' incorporates:
     *  Switch: '<S482>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_Post_n)
    {
        /* Outport: '<Root>/VeCOUB_Cnt_STGFtRfgtShtOffVlv_MFOP' incorporates:
         *  Constant: '<S476>/Constant Value'
         */
        (void)Rte_Write_VeCOUB_Cnt_STGFtRfgtShtOffVlv_MFOP_Value((uint16)0U);
    }
    else if (COUB_ac_DW.UnitDelay_DSTATE_fa)
    {
        /* MinMax: '<S476>/Minimum2' incorporates:
         *  Switch: '<S482>/Switch1'
         */
        if (VeCOUB_Cnt_STGFailLimFtRfgtShtOffVlv >
                rtb_TmpSignalConversionAtVeNVMB_Cnt_STGF)
        {
            /* Outport: '<Root>/VeCOUB_Cnt_STGFtRfgtShtOffVlv_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_STGFtRfgtShtOffVlv_MFOP_Value
                (VeCOUB_Cnt_STGFailLimFtRfgtShtOffVlv);
        }
        else
        {
            /* Outport: '<Root>/VeCOUB_Cnt_STGFtRfgtShtOffVlv_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_STGFtRfgtShtOffVlv_MFOP_Value
                (rtb_TmpSignalConversionAtVeNVMB_Cnt_STGF);
        }

        /* End of MinMax: '<S476>/Minimum2' */
    }
    else
    {
        /* Outport: '<Root>/VeCOUB_Cnt_STGFtRfgtShtOffVlv_MFOP' incorporates:
         *  Switch: '<S482>/Switch1'
         */
        (void)Rte_Write_VeCOUB_Cnt_STGFtRfgtShtOffVlv_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB_Cnt_STGF);
    }

    /* End of Switch: '<S483>/Switch1' */

    /* RelationalOperator: '<S488>/Relational Operator3' incorporates:
     *  Constant: '<S488>/Constant3'
     *  S-Function (sfix_bitop): '<S488>/Bitwise Operator2'
     */
    rtb_Logical1_f2 = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Sta_ba) & 64U)
                       == 0U);

    /* Outputs for Atomic SubSystem: '<S488>/EdgeFalling1' */
    /* Logic: '<S488>/Logical Operator' incorporates:
     *  Logic: '<S490>/OR1'
     */
    rtb_RelationalOperator3_n = !rtb_Logical1_f2;

    /* End of Outputs for SubSystem: '<S488>/EdgeFalling1' */

    /* Logic: '<S488>/Logical1' incorporates:
     *  Constant: '<S486>/Calib'
     *  Constant: '<S487>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S488>/Constant1'
     *  Logic: '<S444>/Logical Operator'
     *  Logic: '<S488>/Logical Operator'
     *  Logic: '<S488>/Logical10'
     *  Logic: '<S488>/Logical12'
     *  RelationalOperator: '<S488>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S488>/Bitwise Operator3'
     */
    rtb_NOT4_gl = ((rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i &&
                    (KeCOUB_b_OCDiagEnbl_FtRfgtShtOffVlv)) &&
                   ((!KeCOUB_b_LtchEnblOCFtRfgtShtOffVlv) || (((((uint32)
                        rtb_TmpSignalConversionAtVeDMAB_y_Sta_ba) & 1U) == 0U) ||
                     rtb_RelationalOperator3_n)));

    /* Outputs for Atomic SubSystem: '<S488>/EdgeFalling1' */
    /* Logic: '<S490>/AND' incorporates:
     *  UnitDelay: '<S490>/Unit Delay'
     */
    rtb_RelationalOperator3_n = (rtb_RelationalOperator3_n &&
        (COUB_ac_DW.UnitDelay_DSTATE_a4));

    /* Update for UnitDelay: '<S490>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_a4 = rtb_Logical1_f2;

    /* End of Outputs for SubSystem: '<S488>/EdgeFalling1' */

    /* Logic: '<S488>/Logical5' */
    rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf =
        (rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf || rtb_RelationalOperator3_n);

    /* UnitDelay: '<S489>/Unit Delay1' incorporates:
     *  UnitDelay: '<S451>/Unit Delay'
     */
    COUB_ac_DW.UnitDelay_DSTATE_ow = COUB_ac_DW.UnitDelay1_DSTATE_pz;

    /* Outputs for Atomic SubSystem: '<S489>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S489>/Counter Reset  Enabled ' */
    /* Switch: '<S496>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_FRSOVFltCircDtctd_CircOpen'
     *  Logic: '<S489>/Fail Counter Reset'
     *  Switch: '<S497>/Switch1'
     *  UnitDelay: '<S451>/Unit Delay'
     *  UnitDelay: '<S489>/Unit Delay'
     */
    if ((rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf ||
            (COUB_ac_DW.UnitDelay_DSTATE_gs)) || (COUB_ac_DW.UnitDelay_DSTATE_ow))
    {
        /* Switch: '<S496>/Switch1' incorporates:
         *  Constant: '<S496>/Constant Value2'
         */
        VeCOUB_Cnt_OCFailLimFtRfgtShtOffVlv = 0U;

        /* Switch: '<S497>/Switch1' incorporates:
         *  Constant: '<S497>/Constant Value2'
         */
        VeCOUB_Cnt_OCSmplLimFtRfgtShtOffVlv = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_FRSOVFltCircDtctd_CircOpen(&tmpRead_1);

        /* Switch: '<S496>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_FRSOVFltCircDtctd_CircOpen'
         *  Logic: '<S444>/Logical Operator1'
         *  Logic: '<S489>/NOT6'
         */
        if (rtb_NOT4_gl && ((((sint32)tmpRead_1.CircOpen) != 0) &&
                            rtb_TmpSignalConversionAtVeDIOR_FtRfgtSh))
        {
            /* Switch: '<S496>/Switch1' incorporates:
             *  Constant: '<S496>/Constant Value1'
             *  Sum: '<S496>/Subtraction'
             *  Switch: '<S496>/Switch2'
             *  UnitDelay: '<S496>/Unit Delay'
             */
            VeCOUB_Cnt_OCFailLimFtRfgtShtOffVlv = (uint16)(((uint32)
                VeCOUB_Cnt_OCFailLimFtRfgtShtOffVlv) + 1U);
        }

        /* End of Switch: '<S496>/Switch2' */

        /* Switch: '<S497>/Switch2' */
        if (rtb_NOT4_gl)
        {
            /* Switch: '<S497>/Switch1' incorporates:
             *  Constant: '<S497>/Constant Value1'
             *  Sum: '<S497>/Subtraction'
             *  Switch: '<S497>/Switch2'
             *  UnitDelay: '<S497>/Unit Delay'
             */
            VeCOUB_Cnt_OCSmplLimFtRfgtShtOffVlv = (uint16)(((uint32)
                VeCOUB_Cnt_OCSmplLimFtRfgtShtOffVlv) + 1U);
        }

        /* End of Switch: '<S497>/Switch2' */
    }

    /* End of Switch: '<S496>/Switch1' */
    /* End of Outputs for SubSystem: '<S489>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S489>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S489>/Greater Than or Equal ' incorporates:
     *  Constant: '<S484>/Calib'
     */
    COUB_ac_DW.UnitDelay1_DSTATE_pz = (VeCOUB_Cnt_OCFailLimFtRfgtShtOffVlv >=
        KeCOUB_Cnt_OCFailLimFtRfgtShtOffVlv);

    /* Logic: '<S489>/NOT5' incorporates:
     *  Constant: '<S485>/Calib'
     *  Logic: '<S489>/NOT3'
     *  RelationalOperator: '<S489>/Less Than  or Equal'
     */
    COUB_ac_DW.UnitDelay_DSTATE_gs = ((VeCOUB_Cnt_OCSmplLimFtRfgtShtOffVlv >=
        KeCOUB_Cnt_OCSmplLimFtRfgtShtOffVlv) &&
        (!COUB_ac_DW.UnitDelay1_DSTATE_pz));

    /* Outputs for Enabled SubSystem: '<S488>/Fail' */
    COUB_ac_Fail(COUB_ac_DW.UnitDelay1_DSTATE_pz, &COUB_ac_B.Merge_dh);

    /* End of Outputs for SubSystem: '<S488>/Fail' */

    /* Outputs for Enabled SubSystem: '<S488>/Init' */
    COUB_ac_Init_i(rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf, &COUB_ac_B.Merge_dh);

    /* End of Outputs for SubSystem: '<S488>/Init' */

    /* Outputs for Enabled SubSystem: '<S488>/Pass' */
    COUB_ac_Pass(COUB_ac_DW.UnitDelay_DSTATE_gs, &COUB_ac_B.Merge_dh);

    /* End of Outputs for SubSystem: '<S488>/Pass' */

    /* RelationalOperator: '<S488>/Relational Operator' incorporates:
     *  Constant: '<S491>/Constant'
     *  Merge: '<S488>/Merge'
     */
    COUB_ac_B.RelationalOperator_o = (((uint32)COUB_ac_B.Merge_dh) ==
        CeDFIB_e_Fail);

    /* Switch: '<S502>/Switch1' incorporates:
     *  Switch: '<S501>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_Post_n)
    {
        /* Outport: '<Root>/VeCOUB_Cnt_FtRfgtShtOffVlvOC_MFOP' incorporates:
         *  Constant: '<S495>/Constant Value'
         */
        (void)Rte_Write_VeCOUB_Cnt_FtRfgtShtOffVlvOC_MFOP_Value((uint16)0U);
    }
    else if (COUB_ac_DW.UnitDelay_DSTATE_gs)
    {
        /* MinMax: '<S495>/Minimum2' incorporates:
         *  Switch: '<S501>/Switch1'
         */
        if (VeCOUB_Cnt_OCFailLimFtRfgtShtOffVlv >
                rtb_TmpSignalConversionAtVeNVMB_Cnt_FtRf)
        {
            /* Outport: '<Root>/VeCOUB_Cnt_FtRfgtShtOffVlvOC_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_FtRfgtShtOffVlvOC_MFOP_Value
                (VeCOUB_Cnt_OCFailLimFtRfgtShtOffVlv);
        }
        else
        {
            /* Outport: '<Root>/VeCOUB_Cnt_FtRfgtShtOffVlvOC_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_FtRfgtShtOffVlvOC_MFOP_Value
                (rtb_TmpSignalConversionAtVeNVMB_Cnt_FtRf);
        }

        /* End of MinMax: '<S495>/Minimum2' */
    }
    else
    {
        /* Outport: '<Root>/VeCOUB_Cnt_FtRfgtShtOffVlvOC_MFOP' incorporates:
         *  Switch: '<S501>/Switch1'
         */
        (void)Rte_Write_VeCOUB_Cnt_FtRfgtShtOffVlvOC_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB_Cnt_FtRf);
    }

    /* End of Switch: '<S502>/Switch1' */

    /* Switch: '<S440>/Switch' incorporates:
     *  Constant: '<S504>/Calib'
     *  Constant: '<S505>/Calib'
     *  Switch: '<S506>/Switch'
     */
    if (KeCOUB_b_FtRfgtShtOffVlvBypEnbl)
    {
        /* FunctionCaller: '<S438>/SetDIOR_b_FtRfgtShtOffVlv_St' */
        Rte_Call_SetDIOR_b_FrntRefrigShtOffVlv_St(KeCOUB_b_FtRfgtShtOffVlvByp);
    }
    else
    {
        if (KeCOUB_b_FtRfgtShtOffVlvPolarInvEnb)
        {
            /* Switch: '<S506>/Switch' incorporates:
             *  Logic: '<S441>/Logical Operator'
             */
            rtb_TmpSignalConversionAtVeRCVR_b_FtRfgt =
                !rtb_TmpSignalConversionAtVeRCVR_b_FtRfgt;
        }

        /* FunctionCaller: '<S438>/SetDIOR_b_FtRfgtShtOffVlv_St' */
        Rte_Call_SetDIOR_b_FrntRefrigShtOffVlv_St
            (rtb_TmpSignalConversionAtVeRCVR_b_FtRfgt);
    }

    /* End of Switch: '<S440>/Switch' */

    /* Update for UnitDelay: '<S451>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_ow = rtb_TmpSignalConversionAtVeDIOR_ChillrSh;

    /* End of Outputs for SubSystem: '<S367>/FtRfgtShtOffVlv' */
    /* End of Outputs for SubSystem: '<S365>/FtRfgtShtOffVlv' */
#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

    /* Outputs for Atomic SubSystem: '<S365>/HiTempShtOffVlv' */
    /* Outputs for Atomic SubSystem: '<S368>/HiTempShtOffVlv' */

    /* RelationalOperator: '<S519>/Relational Operator3' incorporates:
     *  Constant: '<S519>/Constant3'
     *  S-Function (sfix_bitop): '<S519>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeDIOR_FtRfgtSh = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_e1) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S519>/EdgeFalling1' */
    /* Logic: '<S519>/Logical Operator' incorporates:
     *  Logic: '<S521>/OR1'
     */
    rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf =
        !rtb_TmpSignalConversionAtVeDIOR_FtRfgtSh;

    /* End of Outputs for SubSystem: '<S519>/EdgeFalling1' */

    /* Logic: '<S519>/Logical1' incorporates:
     *  Constant: '<S517>/Calib'
     *  Constant: '<S518>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S519>/Constant1'
     *  Logic: '<S511>/Logical Operator'
     *  Logic: '<S519>/Logical Operator'
     *  Logic: '<S519>/Logical10'
     *  Logic: '<S519>/Logical12'
     *  RelationalOperator: '<S519>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S519>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeRCVR_b_FtRfgt =
        ((rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i &&
          (KeCOUB_b_STBDiagEnbl_HiTempShtOffVlv)) &&
         ((!KeCOUB_b_LtchEnblSTBHiTempShtOffVlv) || (((((uint32)
              rtb_TmpSignalConversionAtVeDMAB_y_Sta_e1) & 1U) == 0U) ||
           rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf)));

    /* Logic: '<S514>/NOT4' */
    rtb_TmpSignalConversionAtVeDFIR_b_Dsbl_g =
        (rtb_TmpSignalConversionAtVeDFIR_b_Dsbl_g ||
         rtb_TmpSignalConversionAtVeDFIR_b_Post_n);

    /* Outputs for Atomic SubSystem: '<S519>/EdgeFalling1' */
    /* Logic: '<S521>/AND' incorporates:
     *  UnitDelay: '<S521>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf =
        (rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf &&
         (COUB_ac_DW.UnitDelay_DSTATE_oo));

    /* Update for UnitDelay: '<S521>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_oo = rtb_TmpSignalConversionAtVeDIOR_FtRfgtSh;

    /* End of Outputs for SubSystem: '<S519>/EdgeFalling1' */

    /* Logic: '<S519>/Logical5' */
    rtb_TmpSignalConversionAtVeDIOR_FtRfgtSh =
        (rtb_TmpSignalConversionAtVeDFIR_b_Dsbl_g ||
         rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf);

    /* Outputs for Atomic SubSystem: '<S520>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S520>/Counter Reset  Enabled ' */
    /* Switch: '<S527>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_SpareHsd3FltCircDtctd_CircShoHi'
     *  Logic: '<S520>/Fail Counter Reset'
     *  Switch: '<S528>/Switch1'
     *  UnitDelay: '<S520>/Unit Delay'
     *  UnitDelay: '<S520>/Unit Delay1'
     */
    if ((rtb_TmpSignalConversionAtVeDIOR_FtRfgtSh ||
            (COUB_ac_DW.UnitDelay_DSTATE_fj)) || (COUB_ac_DW.UnitDelay1_DSTATE_a))
    {
        /* Switch: '<S527>/Switch1' incorporates:
         *  Constant: '<S527>/Constant Value2'
         */
        VeCOUB_Cnt_STBFailLimHiTempShtOffVlv = 0U;

        /* Switch: '<S528>/Switch1' incorporates:
         *  Constant: '<S528>/Constant Value2'
         */
        VeCOUB_Cnt_STBSmplLimHiTempShtOffVlv = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_SpareHsd3FltCircDtctd_CircShoHi(&tmpRead_6);

        /* Switch: '<S527>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_SpareHsd3FltCircDtctd_CircShoHi'
         *  Logic: '<S511>/Logical Operator1'
         *  Logic: '<S520>/NOT6'
         */
        if (rtb_TmpSignalConversionAtVeRCVR_b_FtRfgt && ((((sint32)
                tmpRead_6.CircShoHi) != 0) &&
                rtb_TmpSignalConversionAtVeDIOR_SpareHsd))
        {
            /* Switch: '<S527>/Switch1' incorporates:
             *  Constant: '<S527>/Constant Value1'
             *  Sum: '<S527>/Subtraction'
             *  Switch: '<S527>/Switch2'
             *  UnitDelay: '<S527>/Unit Delay'
             */
            VeCOUB_Cnt_STBFailLimHiTempShtOffVlv = (uint16)(((uint32)
                VeCOUB_Cnt_STBFailLimHiTempShtOffVlv) + 1U);
        }

        /* End of Switch: '<S527>/Switch2' */

        /* Switch: '<S528>/Switch2' */
        if (rtb_TmpSignalConversionAtVeRCVR_b_FtRfgt)
        {
            /* Switch: '<S528>/Switch1' incorporates:
             *  Constant: '<S528>/Constant Value1'
             *  Sum: '<S528>/Subtraction'
             *  Switch: '<S528>/Switch2'
             *  UnitDelay: '<S528>/Unit Delay'
             */
            VeCOUB_Cnt_STBSmplLimHiTempShtOffVlv = (uint16)(((uint32)
                VeCOUB_Cnt_STBSmplLimHiTempShtOffVlv) + 1U);
        }

        /* End of Switch: '<S528>/Switch2' */
    }

    /* End of Switch: '<S527>/Switch1' */
    /* End of Outputs for SubSystem: '<S520>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S520>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S520>/Greater Than or Equal ' incorporates:
     *  Constant: '<S515>/Calib'
     */
    COUB_ac_DW.UnitDelay1_DSTATE_a = (VeCOUB_Cnt_STBFailLimHiTempShtOffVlv >=
        KeCOUB_Cnt_STBFailLimHiTempShtOffVlv);

    /* Logic: '<S520>/NOT5' incorporates:
     *  Constant: '<S516>/Calib'
     *  Logic: '<S520>/NOT3'
     *  RelationalOperator: '<S520>/Less Than  or Equal'
     */
    rtb_TmpSignalConversionAtVeRCVR_b_FtRfgt =
        ((VeCOUB_Cnt_STBSmplLimHiTempShtOffVlv >=
          KeCOUB_Cnt_STBSmplLimHiTempShtOffVlv) &&
         (!COUB_ac_DW.UnitDelay1_DSTATE_a));

    /* Outputs for Enabled SubSystem: '<S519>/Fail' */
    COUB_ac_Fail(COUB_ac_DW.UnitDelay1_DSTATE_a, &COUB_ac_B.Merge_p1);

    /* End of Outputs for SubSystem: '<S519>/Fail' */

    /* Outputs for Enabled SubSystem: '<S519>/Init' */
    COUB_ac_Init_i(rtb_TmpSignalConversionAtVeDIOR_FtRfgtSh, &COUB_ac_B.Merge_p1);

    /* End of Outputs for SubSystem: '<S519>/Init' */

    /* Outputs for Enabled SubSystem: '<S519>/Pass' */
    COUB_ac_Pass(rtb_TmpSignalConversionAtVeRCVR_b_FtRfgt, &COUB_ac_B.Merge_p1);

    /* End of Outputs for SubSystem: '<S519>/Pass' */

    /* RelationalOperator: '<S519>/Relational Operator' incorporates:
     *  Constant: '<S522>/Constant'
     *  Merge: '<S519>/Merge'
     */
    COUB_ac_B.RelationalOperator_km = (((uint32)COUB_ac_B.Merge_p1) ==
        CeDFIB_e_Fail);

    /* Switch: '<S533>/Switch1' incorporates:
     *  Switch: '<S532>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_Post_n)
    {
        /* Outport: '<Root>/VeCOUB_Cnt_HiTempShtOffVlvSTB_MFOP' incorporates:
         *  Constant: '<S526>/Constant Value'
         */
        (void)Rte_Write_VeCOUB_Cnt_HiTempShtOffVlvSTB_MFOP_Value((uint16)0U);
    }
    else if (rtb_TmpSignalConversionAtVeRCVR_b_FtRfgt)
    {
        /* MinMax: '<S526>/Minimum2' incorporates:
         *  Switch: '<S532>/Switch1'
         */
        if (VeCOUB_Cnt_STBFailLimHiTempShtOffVlv >
                rtb_TmpSignalConversionAtVeNVMB_Cnt_Hi_l)
        {
            /* Outport: '<Root>/VeCOUB_Cnt_HiTempShtOffVlvSTB_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_HiTempShtOffVlvSTB_MFOP_Value
                (VeCOUB_Cnt_STBFailLimHiTempShtOffVlv);
        }
        else
        {
            /* Outport: '<Root>/VeCOUB_Cnt_HiTempShtOffVlvSTB_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_HiTempShtOffVlvSTB_MFOP_Value
                (rtb_TmpSignalConversionAtVeNVMB_Cnt_Hi_l);
        }

        /* End of MinMax: '<S526>/Minimum2' */
    }
    else
    {
        /* Outport: '<Root>/VeCOUB_Cnt_HiTempShtOffVlvSTB_MFOP' incorporates:
         *  Switch: '<S532>/Switch1'
         */
        (void)Rte_Write_VeCOUB_Cnt_HiTempShtOffVlvSTB_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB_Cnt_Hi_l);
    }

    /* End of Switch: '<S533>/Switch1' */

    /* RelationalOperator: '<S538>/Relational Operator3' incorporates:
     *  Constant: '<S538>/Constant3'
     *  S-Function (sfix_bitop): '<S538>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_pb) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S538>/EdgeFalling1' */
    /* Logic: '<S538>/Logical Operator' incorporates:
     *  Logic: '<S540>/OR1'
     */
    rtb_TmpSignalConversionAtVeDIOR_ChillrSh =
        !rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf;

    /* End of Outputs for SubSystem: '<S538>/EdgeFalling1' */

    /* Logic: '<S538>/Logical1' incorporates:
     *  Constant: '<S536>/Calib'
     *  Constant: '<S537>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S538>/Constant1'
     *  Logic: '<S512>/Logical Operator'
     *  Logic: '<S538>/Logical Operator'
     *  Logic: '<S538>/Logical10'
     *  Logic: '<S538>/Logical12'
     *  RelationalOperator: '<S538>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S538>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeDIOR_FtRfgtSh =
        ((rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i &&
          (KeCOUB_b_STGDiagEnbl_HiTempShtOffVlv)) &&
         ((!KeCOUB_b_LtchEnblSTGHiTempShtOffVlv) || (((((uint32)
              rtb_TmpSignalConversionAtVeDMAB_y_Sta_pb) & 1U) == 0U) ||
           rtb_TmpSignalConversionAtVeDIOR_ChillrSh)));

    /* Outputs for Atomic SubSystem: '<S538>/EdgeFalling1' */
    /* Logic: '<S540>/AND' incorporates:
     *  UnitDelay: '<S540>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDIOR_ChillrSh =
        (rtb_TmpSignalConversionAtVeDIOR_ChillrSh &&
         (COUB_ac_DW.UnitDelay_DSTATE_at));

    /* Update for UnitDelay: '<S540>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_at = rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf;

    /* End of Outputs for SubSystem: '<S538>/EdgeFalling1' */

    /* Logic: '<S538>/Logical5' */
    rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf =
        (rtb_TmpSignalConversionAtVeDFIR_b_Dsbl_g ||
         rtb_TmpSignalConversionAtVeDIOR_ChillrSh);

    /* UnitDelay: '<S539>/Unit Delay1' incorporates:
     *  UnitDelay: '<S520>/Unit Delay'
     */
    COUB_ac_DW.UnitDelay_DSTATE_fj = COUB_ac_DW.UnitDelay1_DSTATE_pd;

    /* Outputs for Atomic SubSystem: '<S539>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S539>/Counter Reset  Enabled ' */
    /* Switch: '<S546>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_SpareHsd3FltCircDtctd_CircShoLo'
     *  Logic: '<S539>/Fail Counter Reset'
     *  Switch: '<S547>/Switch1'
     *  UnitDelay: '<S520>/Unit Delay'
     *  UnitDelay: '<S539>/Unit Delay'
     */
    if ((rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf ||
            (COUB_ac_DW.UnitDelay_DSTATE_ef)) || (COUB_ac_DW.UnitDelay_DSTATE_fj))
    {
        /* Switch: '<S546>/Switch1' incorporates:
         *  Constant: '<S546>/Constant Value2'
         */
        VeCOUB_Cnt_STGFailLimHiTempShtOffVlv = 0U;

        /* Switch: '<S547>/Switch1' incorporates:
         *  Constant: '<S547>/Constant Value2'
         */
        VeCOUB_Cnt_STGSmplLimHiTempShtOffVlv = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_SpareHsd3FltCircDtctd_CircShoLo(&tmpRead_5);

        /* Switch: '<S546>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_SpareHsd3FltCircDtctd_CircShoLo'
         *  Logic: '<S512>/Logical Operator1'
         *  Logic: '<S539>/NOT6'
         */
        if (rtb_TmpSignalConversionAtVeDIOR_FtRfgtSh && ((((sint32)
                tmpRead_5.CircShoLo) != 0) &&
                rtb_TmpSignalConversionAtVeDIOR_SpareHsd))
        {
            /* Switch: '<S546>/Switch1' incorporates:
             *  Constant: '<S546>/Constant Value1'
             *  Sum: '<S546>/Subtraction'
             *  Switch: '<S546>/Switch2'
             *  UnitDelay: '<S546>/Unit Delay'
             */
            VeCOUB_Cnt_STGFailLimHiTempShtOffVlv = (uint16)(((uint32)
                VeCOUB_Cnt_STGFailLimHiTempShtOffVlv) + 1U);
        }

        /* End of Switch: '<S546>/Switch2' */

        /* Switch: '<S547>/Switch2' */
        if (rtb_TmpSignalConversionAtVeDIOR_FtRfgtSh)
        {
            /* Switch: '<S547>/Switch1' incorporates:
             *  Constant: '<S547>/Constant Value1'
             *  Sum: '<S547>/Subtraction'
             *  Switch: '<S547>/Switch2'
             *  UnitDelay: '<S547>/Unit Delay'
             */
            VeCOUB_Cnt_STGSmplLimHiTempShtOffVlv = (uint16)(((uint32)
                VeCOUB_Cnt_STGSmplLimHiTempShtOffVlv) + 1U);
        }

        /* End of Switch: '<S547>/Switch2' */
    }

    /* End of Switch: '<S546>/Switch1' */
    /* End of Outputs for SubSystem: '<S539>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S539>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S539>/Greater Than or Equal ' incorporates:
     *  Constant: '<S534>/Calib'
     */
    COUB_ac_DW.UnitDelay1_DSTATE_pd = (VeCOUB_Cnt_STGFailLimHiTempShtOffVlv >=
        KeCOUB_Cnt_STGFailLimHiTempShtOffVlv);

    /* Logic: '<S539>/NOT5' incorporates:
     *  Constant: '<S535>/Calib'
     *  Logic: '<S539>/NOT3'
     *  RelationalOperator: '<S539>/Less Than  or Equal'
     */
    COUB_ac_DW.UnitDelay_DSTATE_ef = ((VeCOUB_Cnt_STGSmplLimHiTempShtOffVlv >=
        KeCOUB_Cnt_STGSmplLimHiTempShtOffVlv) &&
        (!COUB_ac_DW.UnitDelay1_DSTATE_pd));

    /* Outputs for Enabled SubSystem: '<S538>/Fail' */
    COUB_ac_Fail(COUB_ac_DW.UnitDelay1_DSTATE_pd, &COUB_ac_B.Merge_l);

    /* End of Outputs for SubSystem: '<S538>/Fail' */

    /* Outputs for Enabled SubSystem: '<S538>/Init' */
    COUB_ac_Init_i(rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf, &COUB_ac_B.Merge_l);

    /* End of Outputs for SubSystem: '<S538>/Init' */

    /* Outputs for Enabled SubSystem: '<S538>/Pass' */
    COUB_ac_Pass(COUB_ac_DW.UnitDelay_DSTATE_ef, &COUB_ac_B.Merge_l);

    /* End of Outputs for SubSystem: '<S538>/Pass' */

    /* RelationalOperator: '<S538>/Relational Operator' incorporates:
     *  Constant: '<S541>/Constant'
     *  Merge: '<S538>/Merge'
     */
    COUB_ac_B.RelationalOperator_ld = (((uint32)COUB_ac_B.Merge_l) ==
        CeDFIB_e_Fail);

    /* Switch: '<S552>/Switch1' incorporates:
     *  Switch: '<S551>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_Post_n)
    {
        /* Outport: '<Root>/VeCOUB_Cnt_HiTempShtOffVlvSTG_MFOP' incorporates:
         *  Constant: '<S545>/Constant Value'
         */
        (void)Rte_Write_VeCOUB_Cnt_HiTempShtOffVlvSTG_MFOP_Value((uint16)0U);
    }
    else if (COUB_ac_DW.UnitDelay_DSTATE_ef)
    {
        /* MinMax: '<S545>/Minimum2' incorporates:
         *  Switch: '<S551>/Switch1'
         */
        if (VeCOUB_Cnt_STGFailLimHiTempShtOffVlv >
                rtb_TmpSignalConversionAtVeNVMB_Cnt_Hi_i)
        {
            /* Outport: '<Root>/VeCOUB_Cnt_HiTempShtOffVlvSTG_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_HiTempShtOffVlvSTG_MFOP_Value
                (VeCOUB_Cnt_STGFailLimHiTempShtOffVlv);
        }
        else
        {
            /* Outport: '<Root>/VeCOUB_Cnt_HiTempShtOffVlvSTG_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_HiTempShtOffVlvSTG_MFOP_Value
                (rtb_TmpSignalConversionAtVeNVMB_Cnt_Hi_i);
        }

        /* End of MinMax: '<S545>/Minimum2' */
    }
    else
    {
        /* Outport: '<Root>/VeCOUB_Cnt_HiTempShtOffVlvSTG_MFOP' incorporates:
         *  Switch: '<S551>/Switch1'
         */
        (void)Rte_Write_VeCOUB_Cnt_HiTempShtOffVlvSTG_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB_Cnt_Hi_i);
    }

    /* End of Switch: '<S552>/Switch1' */

    /* RelationalOperator: '<S557>/Relational Operator3' incorporates:
     *  Constant: '<S557>/Constant3'
     *  S-Function (sfix_bitop): '<S557>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeDIOR_FtRfgtSh = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_pu) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S557>/EdgeFalling1' */
    /* Logic: '<S557>/Logical Operator' incorporates:
     *  Logic: '<S559>/OR1'
     */
    rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf =
        !rtb_TmpSignalConversionAtVeDIOR_FtRfgtSh;

    /* End of Outputs for SubSystem: '<S557>/EdgeFalling1' */

    /* Logic: '<S557>/Logical1' incorporates:
     *  Constant: '<S555>/Calib'
     *  Constant: '<S556>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S557>/Constant1'
     *  Logic: '<S513>/Logical Operator'
     *  Logic: '<S557>/Logical Operator'
     *  Logic: '<S557>/Logical10'
     *  Logic: '<S557>/Logical12'
     *  RelationalOperator: '<S557>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S557>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i =
        ((rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i &&
          (KeCOUB_b_OCDiagEnbl_HiTempShtOffVlv)) &&
         ((!KeCOUB_b_LtchEnblOCHiTempShtOffVlv) || (((((uint32)
              rtb_TmpSignalConversionAtVeDMAB_y_Sta_pu) & 1U) == 0U) ||
           rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf)));

    /* Outputs for Atomic SubSystem: '<S557>/EdgeFalling1' */
    /* Logic: '<S559>/AND' incorporates:
     *  UnitDelay: '<S559>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf =
        (rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf &&
         (COUB_ac_DW.UnitDelay_DSTATE_mf));

    /* Update for UnitDelay: '<S559>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_mf = rtb_TmpSignalConversionAtVeDIOR_FtRfgtSh;

    /* End of Outputs for SubSystem: '<S557>/EdgeFalling1' */

    /* Logic: '<S557>/Logical5' */
    rtb_TmpSignalConversionAtVeDFIR_b_Dsbl_g =
        (rtb_TmpSignalConversionAtVeDFIR_b_Dsbl_g ||
         rtb_TmpSignalConversionAtVeRCVR_b_ChlrRf);

    /* UnitDelay: '<S558>/Unit Delay1' incorporates:
     *  UnitDelay: '<S520>/Unit Delay'
     */
    COUB_ac_DW.UnitDelay_DSTATE_fj = COUB_ac_DW.UnitDelay1_DSTATE_f;

    /* Outputs for Atomic SubSystem: '<S558>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S558>/Counter Reset  Enabled ' */
    /* Switch: '<S565>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_SpareHsd3FltCircDtctd_CircOpen'
     *  Logic: '<S558>/Fail Counter Reset'
     *  Switch: '<S566>/Switch1'
     *  UnitDelay: '<S520>/Unit Delay'
     *  UnitDelay: '<S558>/Unit Delay'
     */
    if ((rtb_TmpSignalConversionAtVeDFIR_b_Dsbl_g ||
            (COUB_ac_DW.UnitDelay_DSTATE_ie)) || (COUB_ac_DW.UnitDelay_DSTATE_fj))
    {
        /* Switch: '<S565>/Switch1' incorporates:
         *  Constant: '<S565>/Constant Value2'
         */
        VeCOUB_Cnt_OCFailLimHiTempShtOffVlv = 0U;

        /* Switch: '<S566>/Switch1' incorporates:
         *  Constant: '<S566>/Constant Value2'
         */
        VeCOUB_Cnt_OCSmplLimHiTempShtOffVlv = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_SpareHsd3FltCircDtctd_CircOpen(&tmpRead_7);

        /* Switch: '<S565>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_SpareHsd3FltCircDtctd_CircOpen'
         *  Logic: '<S513>/Logical Operator1'
         *  Logic: '<S558>/NOT6'
         */
        if (rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i && ((((sint32)
                tmpRead_7.CircOpen) != 0) &&
                rtb_TmpSignalConversionAtVeDIOR_SpareHsd))
        {
            /* Switch: '<S565>/Switch1' incorporates:
             *  Constant: '<S565>/Constant Value1'
             *  Sum: '<S565>/Subtraction'
             *  Switch: '<S565>/Switch2'
             *  UnitDelay: '<S565>/Unit Delay'
             */
            VeCOUB_Cnt_OCFailLimHiTempShtOffVlv = (uint16)(((uint32)
                VeCOUB_Cnt_OCFailLimHiTempShtOffVlv) + 1U);
        }

        /* End of Switch: '<S565>/Switch2' */

        /* Switch: '<S566>/Switch2' */
        if (rtb_TmpSignalConversionAtVeDFIR_b_IsDi_i)
        {
            /* Switch: '<S566>/Switch1' incorporates:
             *  Constant: '<S566>/Constant Value1'
             *  Sum: '<S566>/Subtraction'
             *  Switch: '<S566>/Switch2'
             *  UnitDelay: '<S566>/Unit Delay'
             */
            VeCOUB_Cnt_OCSmplLimHiTempShtOffVlv = (uint16)(((uint32)
                VeCOUB_Cnt_OCSmplLimHiTempShtOffVlv) + 1U);
        }

        /* End of Switch: '<S566>/Switch2' */
    }

    /* End of Switch: '<S565>/Switch1' */
    /* End of Outputs for SubSystem: '<S558>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S558>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S558>/Greater Than or Equal ' incorporates:
     *  Constant: '<S553>/Calib'
     */
    COUB_ac_DW.UnitDelay1_DSTATE_f = (VeCOUB_Cnt_OCFailLimHiTempShtOffVlv >=
        KeCOUB_Cnt_OCFailLimHiTempShtOffVlv);

    /* Logic: '<S558>/NOT5' incorporates:
     *  Constant: '<S554>/Calib'
     *  Logic: '<S558>/NOT3'
     *  RelationalOperator: '<S558>/Less Than  or Equal'
     */
    COUB_ac_DW.UnitDelay_DSTATE_ie = ((VeCOUB_Cnt_OCSmplLimHiTempShtOffVlv >=
        KeCOUB_Cnt_OCSmplLimHiTempShtOffVlv) && (!COUB_ac_DW.UnitDelay1_DSTATE_f));

    /* Outputs for Enabled SubSystem: '<S557>/Fail' */
    COUB_ac_Fail(COUB_ac_DW.UnitDelay1_DSTATE_f, &COUB_ac_B.Merge_ix);

    /* End of Outputs for SubSystem: '<S557>/Fail' */

    /* Outputs for Enabled SubSystem: '<S557>/Init' */
    COUB_ac_Init_i(rtb_TmpSignalConversionAtVeDFIR_b_Dsbl_g, &COUB_ac_B.Merge_ix);

    /* End of Outputs for SubSystem: '<S557>/Init' */

    /* Outputs for Enabled SubSystem: '<S557>/Pass' */
    COUB_ac_Pass(COUB_ac_DW.UnitDelay_DSTATE_ie, &COUB_ac_B.Merge_ix);

    /* End of Outputs for SubSystem: '<S557>/Pass' */

    /* RelationalOperator: '<S557>/Relational Operator' incorporates:
     *  Constant: '<S560>/Constant'
     *  Merge: '<S557>/Merge'
     */
    COUB_ac_B.RelationalOperator_a = (((uint32)COUB_ac_B.Merge_ix) ==
        CeDFIB_e_Fail);

    /* Switch: '<S571>/Switch1' incorporates:
     *  Switch: '<S570>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_Post_n)
    {
        /* Outport: '<Root>/VeCOUB_Cnt_HiTempShtOffVlvOC_MFOP' incorporates:
         *  Constant: '<S564>/Constant Value'
         */
        (void)Rte_Write_VeCOUB_Cnt_HiTempShtOffVlvOC_MFOP_Value((uint16)0U);
    }
    else if (COUB_ac_DW.UnitDelay_DSTATE_ie)
    {
        /* MinMax: '<S564>/Minimum2' incorporates:
         *  Switch: '<S570>/Switch1'
         */
        if (VeCOUB_Cnt_OCFailLimHiTempShtOffVlv >
                rtb_TmpSignalConversionAtVeNVMB_Cnt_HiTe)
        {
            /* Outport: '<Root>/VeCOUB_Cnt_HiTempShtOffVlvOC_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_HiTempShtOffVlvOC_MFOP_Value
                (VeCOUB_Cnt_OCFailLimHiTempShtOffVlv);
        }
        else
        {
            /* Outport: '<Root>/VeCOUB_Cnt_HiTempShtOffVlvOC_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_HiTempShtOffVlvOC_MFOP_Value
                (rtb_TmpSignalConversionAtVeNVMB_Cnt_HiTe);
        }

        /* End of MinMax: '<S564>/Minimum2' */
    }
    else
    {
        /* Outport: '<Root>/VeCOUB_Cnt_HiTempShtOffVlvOC_MFOP' incorporates:
         *  Switch: '<S570>/Switch1'
         */
        (void)Rte_Write_VeCOUB_Cnt_HiTempShtOffVlvOC_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB_Cnt_HiTe);
    }

    /* End of Switch: '<S571>/Switch1' */

    /* Switch: '<S509>/Switch' incorporates:
     *  Constant: '<S573>/Calib'
     *  Constant: '<S574>/Calib'
     *  Switch: '<S575>/Switch'
     */
    if (KeCOUB_b_HiTempShtOffVlvBypEnbl)
    {
        /* FunctionCaller: '<S507>/SetDIOR_b_HiTempShtOffVlv_St' */
        Rte_Call_SetDIOR_b_SpareHsd3OutpSt_St(KeCOUB_b_HiTempShtOffVlvByp);
    }
    else
    {
        if (KeCOUB_b_HiTempShtOffVlvPolarInvEnb)
        {
            /* Switch: '<S575>/Switch' incorporates:
             *  Logic: '<S510>/Logical Operator'
             */
            rtb_TmpSignalConversionAtVeRCVR_b_HT_Sht =
                !rtb_TmpSignalConversionAtVeRCVR_b_HT_Sht;
        }

        /* FunctionCaller: '<S507>/SetDIOR_b_HiTempShtOffVlv_St' */
        Rte_Call_SetDIOR_b_SpareHsd3OutpSt_St
            (rtb_TmpSignalConversionAtVeRCVR_b_HT_Sht);
    }

    /* End of Switch: '<S509>/Switch' */

    /* Update for UnitDelay: '<S520>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_fj = rtb_TmpSignalConversionAtVeRCVR_b_FtRfgt;

    /* End of Outputs for SubSystem: '<S368>/HiTempShtOffVlv' */
    /* End of Outputs for SubSystem: '<S365>/HiTempShtOffVlv' */
#endif

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* SignalConversion generated from: '<S4>/VeCOUB_b_ChillrShtOffVlvOC_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCOUB_b_ChillrShtOffVlvSTB_FA'
     *  SignalConversion generated from: '<S4>/VeCOUB_b_ChillrShtOffVlvSTG_FA'
     */
#if Rte_SysCon_Variant_COUB_CSOV_Presence

    /* Outport: '<Root>/VeCOUB_b_OCDiagFA_ChillerShutOffValveCtrl' */
    (void)Rte_Write_VeCOUB_b_OCDiagFA_ChillerShutOffValveCtrl_Value
        (COUB_ac_B.RelationalOperator_li);

    /* Outport: '<Root>/VeCOUB_b_STBDiagFA_ChillerShutOffValveCtrl' */
    (void)Rte_Write_VeCOUB_b_STBDiagFA_ChillerShutOffValveCtrl_Value
        (COUB_ac_B.RelationalOperator_n);

    /* Outport: '<Root>/VeCOUB_b_STGDiagFA_ChillerShutOffValveCtrl' */
    (void)Rte_Write_VeCOUB_b_STGDiagFA_ChillerShutOffValveCtrl_Value
        (COUB_ac_B.RelationalOperator_ai);

#endif

    /* End of SignalConversion generated from: '<S4>/VeCOUB_b_ChillrShtOffVlvOC_FA' */

    /* SignalConversion generated from: '<S4>/VeCOUB_b_FtRfgtShtOffVlvOC_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCOUB_b_FtRfgtShtOffVlvSTB_FA'
     *  SignalConversion generated from: '<S4>/VeCOUB_b_FtRfgtShtOffVlvSTG_FA'
     */
#if Rte_SysCon_Variant_COUB_FRSOV_Presence

    /* Outport: '<Root>/VeCOUB_b_OCDiagFA_FrontRefShutOffValveCtrl' */
    (void)Rte_Write_VeCOUB_b_OCDiagFA_FrontRefShutOffValveCtrl_Value
        (COUB_ac_B.RelationalOperator_o);

    /* Outport: '<Root>/VeCOUB_b_STBDiagFA_FrontRefShutOffValveCtrl' */
    (void)Rte_Write_VeCOUB_b_STBDiagFA_FrontRefShutOffValveCtrl_Value
        (COUB_ac_B.RelationalOperator_m);

    /* Outport: '<Root>/VeCOUB_b_STGDiagFA_FrontRefShutOffValveCtrl' */
    (void)Rte_Write_VeCOUB_b_STGDiagFA_FrontRefShutOffValveCtrl_Value
        (COUB_ac_B.RelationalOperator_ln);

#endif

    /* End of SignalConversion generated from: '<S4>/VeCOUB_b_FtRfgtShtOffVlvOC_FA' */

    /* SignalConversion generated from: '<S4>/VeCOUB_b_HiTempShtOffVlvOC_FA' incorporates:
     *  SignalConversion generated from: '<S4>/VeCOUB_b_HiTempShtOffVlvSTB_FA'
     *  SignalConversion generated from: '<S4>/VeCOUB_b_HiTempShtOffVlvSTG_FA'
     */
#if Rte_SysCon_Variant_COUB_HTSOV_Presence

    /* Outport: '<Root>/VeCOUB_b_OCDiagFA_HighTempShutOffValveCtrl' */
    (void)Rte_Write_VeCOUB_b_OCDiagFA_HighTempShutOffValveCtrl_Value
        (COUB_ac_B.RelationalOperator_a);

    /* Outport: '<Root>/VeCOUB_b_STBDiagFA_HighTempShutOffValveCtrl' */
    (void)Rte_Write_VeCOUB_b_STBDiagFA_HighTempShutOffValveCtrl_Value
        (COUB_ac_B.RelationalOperator_km);

    /* Outport: '<Root>/VeCOUB_b_STGDiagFA_HighTempShutOffValveCtrl' */
    (void)Rte_Write_VeCOUB_b_STGDiagFA_HighTempShutOffValveCtrl_Value
        (COUB_ac_B.RelationalOperator_ld);

#endif

    /* End of SignalConversion generated from: '<S4>/VeCOUB_b_HiTempShtOffVlvOC_FA' */

    /* SignalConversion generated from: '<S4>/VeCOUB_e_ChillrShtOffVlvOC_PassFail' incorporates:
     *  SignalConversion generated from: '<S4>/VeCOUB_e_ChillrShtOffVlvSTB_PassFail'
     *  SignalConversion generated from: '<S4>/VeCOUB_e_ChillrShtOffVlvSTG_PassFail'
     */
#if Rte_SysCon_Variant_COUB_CSOV_Presence

    /* Outport: '<Root>/VeCOUB_e_FaultSts_CoolCtrlVlv1Ckt' incorporates:
     *  Merge: '<S419>/Merge'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_CoolCtrlVlv1Ckt_Value(COUB_ac_B.Merge_f);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_CoolCtrlVlv1CktHi' incorporates:
     *  Merge: '<S381>/Merge'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_CoolCtrlVlv1CktHi_Value(COUB_ac_B.Merge_ei);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_CoolCtrlVlv1CktLo' incorporates:
     *  Merge: '<S400>/Merge'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_CoolCtrlVlv1CktLo_Value(COUB_ac_B.Merge_a);

#endif

    /* End of SignalConversion generated from: '<S4>/VeCOUB_e_ChillrShtOffVlvOC_PassFail' */

    /* SignalConversion generated from: '<S4>/VeCOUB_e_FtRfgtShtOffVlvOC_PassFail' incorporates:
     *  SignalConversion generated from: '<S4>/VeCOUB_e_FtRfgtShtOffVlvSTB_PassFail'
     *  SignalConversion generated from: '<S4>/VeCOUB_e_FtRfgtShtOffVlvSTG_PassFail'
     */
#if Rte_SysCon_Variant_COUB_FRSOV_Presence

    /* Outport: '<Root>/VeCOUB_e_FaultSts_EvapRefriShutoffCtrlCktFlt' incorporates:
     *  Merge: '<S488>/Merge'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_EvapRefriShutoffCtrlCktFlt_Value
        (COUB_ac_B.Merge_dh);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_EvapRefriShutoffCtrlshrtBattFlt' incorporates:
     *  Merge: '<S450>/Merge'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_EvapRefriShutoffCtrlshrtBattFlt_Value
        (COUB_ac_B.Merge_dm);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_EvapRefrishutoffCtrlShrtGndFlt' incorporates:
     *  Merge: '<S469>/Merge'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_EvapRefrishutoffCtrlShrtGndFlt_Value
        (COUB_ac_B.Merge_j2);

#endif

    /* End of SignalConversion generated from: '<S4>/VeCOUB_e_FtRfgtShtOffVlvOC_PassFail' */

    /* SignalConversion generated from: '<S4>/VeCOUB_e_HiTempShtOffVlvOC_PassFail' incorporates:
     *  SignalConversion generated from: '<S4>/VeCOUB_e_HiTempShtOffVlvSTB_PassFail'
     *  SignalConversion generated from: '<S4>/VeCOUB_e_HiTempShtOffVlvSTG_PassFail'
     */
#if Rte_SysCon_Variant_COUB_HTSOV_Presence

    /* Outport: '<Root>/VeCOUB_e_FaultSts_CoolantVlvB_Ckt' incorporates:
     *  Merge: '<S557>/Merge'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_CoolantVlvB_Ckt_Value(COUB_ac_B.Merge_ix);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_CoolantVlvB_CktHi' incorporates:
     *  Merge: '<S519>/Merge'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_CoolantVlvB_CktHi_Value(COUB_ac_B.Merge_p1);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_CoolantVlvB_CktLo' incorporates:
     *  Merge: '<S538>/Merge'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_CoolantVlvB_CktLo_Value(COUB_ac_B.Merge_l);

#endif

    /* End of SignalConversion generated from: '<S4>/VeCOUB_e_HiTempShtOffVlvOC_PassFail' */

    /* Outputs for Atomic SubSystem: '<S4>/COUB_MedTED_StopCheckpoint' */
    /* FunctionCaller: '<S364>/COUB_MedTED_StopCheckpoint' */
    Rte_Call_COUB_MedTED_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S4>/COUB_MedTED_StopCheckpoint' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Model step function for TID3 */
FUNC(void, COUB_CODE) COUB_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_COUB_OILPUMPRLY_Presence

    float32 tmpRead_0;

#endif

#if Rte_SysCon_Variant_COUB_OILPUMPRLY_Presence

    float32 tmpRead_1;

#endif

#if Rte_SysCon_Variant_COUB_OILPUMP_Presence || Rte_SysCon_Variant_COUB_POWERPANELLED_Presence

    float32 tmpRead_2;

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

    IDTCondPresence tmpRead_3;

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

    IDTCondPresence tmpRead_4;

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

    IDTCondPresence tmpRead_5;

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

    IDTCondPresence tmpRead_6;

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

    IDTCondPresence tmpRead_7;

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

    IDTCondPresence tmpRead_8;

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

    IDTCondPresence tmpRead_9;

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

    IDTCondPresence tmpRead_a;

#endif

#if Rte_SysCon_Variant_COUB_PCURLYCNTRL_Presence

    boolean tmpRead_b;

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence || Rte_SysCon_Variant_COUB_EPTWUP_Presence || Rte_SysCon_Variant_COUB_OILPUMP_Presence || Rte_SysCon_Variant_COUB_RADFAN_Presence || Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_IsDiag;

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

    boolean rtb_RelationalOperator3_g;

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence || Rte_SysCon_Variant_COUB_RADFAN_Presence

    boolean rtb_Logical1_gc;

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence || Rte_SysCon_Variant_COUB_EPTWUP_Presence || Rte_SysCon_Variant_COUB_OILPUMP_Presence || Rte_SysCon_Variant_COUB_RADFAN_Presence || Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_DsblDi;

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence || Rte_SysCon_Variant_COUB_EPTWUP_Presence || Rte_SysCon_Variant_COUB_OILPUMP_Presence || Rte_SysCon_Variant_COUB_RADFAN_Presence || Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

    boolean rtb_TmpSignalConversionAtVeDFIR_b_PostCo;

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence || Rte_SysCon_Variant_COUB_OILPUMP_Presence || Rte_SysCon_Variant_COUB_RADFAN_Presence

    boolean rtb_NOT4_lj;

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

    boolean rtb_AND_n;

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

    boolean rtb_AND_p;

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence || Rte_SysCon_Variant_COUB_OILPUMP_Presence || Rte_SysCon_Variant_COUB_RADFAN_Presence

    boolean rtb_RelationalOperator3_h;

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence || Rte_SysCon_Variant_COUB_OILPUMP_Presence || Rte_SysCon_Variant_COUB_RADFAN_Presence || Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

    boolean rtb_NOT4_k;

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence || Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

    boolean rtb_RelationalOperator3;

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_j;

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_gf;

#endif

#if Rte_SysCon_Variant_COUB_OILPUMP_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_ld;

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_d;

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_h;

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_c;

#endif

#if Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_dy;

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Sta_dz;

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Stat_m;

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence || Rte_SysCon_Variant_COUB_OILPUMP_Presence || Rte_SysCon_Variant_COUB_RADFAN_Presence || Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

    boolean rtb_TmpSignalConversionAtVeDIOR_Spare4Ls;

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB_Cnt_AC_m;

#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB_Cnt_ACSw;

#endif

#if Rte_SysCon_Variant_COUB_OILPUMP_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB_Cnt_Elec;

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence || Rte_SysCon_Variant_COUB_RADFAN_Presence || Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

    boolean rtb_TmpSignalConversionAtVeDIOR_RadrFanC;

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB_Cnt_Ra_j;

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB_Cnt_Ra_m;

#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB_Cnt_Radr;

#endif

#if Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB_Cnt_Ther;

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence || Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

    boolean rtb_TmpSignalConversionAtVeAPMR_b_EnblTh;

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

    boolean rtb_TmpSignalConversionAtVeDIOR_ePTWakeU;

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB_Cnt_eP_b;

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB_Cnt_eP_d;

#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

    uint16 rtb_TmpSignalConversionAtVeNVMB_Cnt_ePTW;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/SigMngt100ms'
     */
    /* SignalConversion generated from: '<S2>/VeDFIR_b_IsDiagGlobalConditionValid' incorporates:
     *  SignalConversion generated from: '<S2>/VeDFIR_b_DsblDiagFailSafe'
     *  SignalConversion generated from: '<S2>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence || Rte_SysCon_Variant_COUB_EPTWUP_Presence || Rte_SysCon_Variant_COUB_OILPUMP_Presence || Rte_SysCon_Variant_COUB_RADFAN_Presence || Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

    /* SignalConversion generated from: '<S2>/VeDFIR_b_IsDiagGlobalConditionValid' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_IsDiag);

    /* SignalConversion generated from: '<S2>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* SignalConversion generated from: '<S2>/VeDFIR_b_DsblDiagFailSafe' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_DsblDi);

#endif

    /* End of SignalConversion generated from: '<S2>/VeDFIR_b_IsDiagGlobalConditionValid' */

    /* SignalConversion generated from: '<S2>/VeDIOR_ePTWakeUpEnblDiagCmn_b_FailrPrsnt' incorporates:
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_EVWakeup1CktOpen'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_EVWakeup1CktShortBatt'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_EVWakeup1CktShortGrnd'
     *  SignalConversion generated from: '<S2>/VeNVMB_Cnt_ePTWakeUpEnblOC_MFOP'
     *  SignalConversion generated from: '<S2>/VeNVMB_Cnt_ePTWakeUpEnblSTB_MFOP'
     *  SignalConversion generated from: '<S2>/VeNVMB_Cnt_ePTWakeUpEnblSTG_MFOP'
     */
#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

    /* SignalConversion generated from: '<S2>/VeDIOR_ePTWakeUpEnblDiagCmn_b_FailrPrsnt' incorporates:
     *  Inport: '<Root>/VeDIOR_ePTWakeUpEnblDiagCmn_b_FailrPrsnt'
     */
    (void)Rte_Read_VeDIOR_ePTWakeUpEnblDiagCmn_b_FailrPrsnt
        (&rtb_TmpSignalConversionAtVeDIOR_ePTWakeU);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_EVWakeup1CktOpen' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EVWakeup1CktOpen'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EVWakeup1CktOpen_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_EVWakeup1CktShortGrnd' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EVWakeup1CktShortGrnd'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EVWakeup1CktShortGrnd_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_m);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_EVWakeup1CktShortBatt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_EVWakeup1CktShortBatt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_EVWakeup1CktShortBatt_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_dz);

    /* SignalConversion generated from: '<S2>/VeNVMB_Cnt_ePTWakeUpEnblOC_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_ePTWakeUpEnblOC_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_ePTWakeUpEnblOC_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB_Cnt_ePTW);

    /* SignalConversion generated from: '<S2>/VeNVMB_Cnt_ePTWakeUpEnblSTG_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_ePTWakeUpEnblSTG_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_ePTWakeUpEnblSTG_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB_Cnt_eP_d);

    /* SignalConversion generated from: '<S2>/VeNVMB_Cnt_ePTWakeUpEnblSTB_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_ePTWakeUpEnblSTB_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_ePTWakeUpEnblSTB_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB_Cnt_eP_b);

#endif

    /* End of SignalConversion generated from: '<S2>/VeDIOR_ePTWakeUpEnblDiagCmn_b_FailrPrsnt' */

    /* SignalConversion generated from: '<S2>/VeAPMR_b_EnblThrmlRelay' incorporates:
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt'
     *  SignalConversion generated from: '<S2>/VeNVMB_Cnt_ThermSysEnbl_MFOP'
     */
#if Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

    /* SignalConversion generated from: '<S2>/VeAPMR_b_EnblThrmlRelay' incorporates:
     *  Inport: '<Root>/VeAPMR_b_EnblThrmlRelay'
     */
    (void)Rte_Read_VeAPMR_b_EnblThrmlRelay_Value
        (&rtb_TmpSignalConversionAtVeAPMR_b_EnblTh);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ThrmlRlyCtrlCkt_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_dy);

    /* SignalConversion generated from: '<S2>/VeNVMB_Cnt_ThermSysEnbl_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_ThermSysEnbl_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_ThermSysEnbl_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB_Cnt_Ther);

#endif

    /* End of SignalConversion generated from: '<S2>/VeAPMR_b_EnblThrmlRelay' */

    /* SignalConversion generated from: '<S2>/VeDIOR_RadrFanCtrlDiagCmn_b_FailrPrsnt' incorporates:
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_Fan1CntrlCktHi'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_Fan1CntrlCktLo'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_Fan1CntrlCkt'
     *  SignalConversion generated from: '<S2>/VeNVMB_Cnt_RadrFanCtrlOC_MFOP'
     *  SignalConversion generated from: '<S2>/VeNVMB_Cnt_RadrFanCtrlSTB_MFOP'
     *  SignalConversion generated from: '<S2>/VeNVMB_Cnt_RadrFanCtrlSTG_MFOP'
     */
#if Rte_SysCon_Variant_COUB_RADFAN_Presence

    /* SignalConversion generated from: '<S2>/VeDIOR_RadrFanCtrlDiagCmn_b_FailrPrsnt' incorporates:
     *  Inport: '<Root>/VeDIOR_RadrFanCtrlDiagCmn_b_FailrPrsnt'
     */
    (void)Rte_Read_VeDIOR_RadrFanCtrlDiagCmn_b_FailrPrsnt
        (&rtb_TmpSignalConversionAtVeDIOR_RadrFanC);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_Fan1CntrlCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_Fan1CntrlCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_Fan1CntrlCkt_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_c);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_Fan1CntrlCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_Fan1CntrlCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_Fan1CntrlCktLo_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_h);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_Fan1CntrlCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_Fan1CntrlCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_Fan1CntrlCktHi_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_d);

    /* SignalConversion generated from: '<S2>/VeNVMB_Cnt_RadrFanCtrlOC_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_RadrFanCtrlOC_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_RadrFanCtrlOC_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB_Cnt_Radr);

    /* SignalConversion generated from: '<S2>/VeNVMB_Cnt_RadrFanCtrlSTG_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_RadrFanCtrlSTG_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_RadrFanCtrlSTG_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB_Cnt_Ra_m);

    /* SignalConversion generated from: '<S2>/VeNVMB_Cnt_RadrFanCtrlSTB_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_RadrFanCtrlSTB_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_RadrFanCtrlSTB_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB_Cnt_Ra_j);

#endif

    /* End of SignalConversion generated from: '<S2>/VeDIOR_RadrFanCtrlDiagCmn_b_FailrPrsnt' */

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Ckt' incorporates:
     *  SignalConversion generated from: '<S2>/VeNVMB_Cnt_ElecOilPmpOC_MFOP'
     */
#if Rte_SysCon_Variant_COUB_OILPUMP_Presence

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Ckt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Ckt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Ckt_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_ld);

    /* SignalConversion generated from: '<S2>/VeNVMB_Cnt_ElecOilPmpOC_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_ElecOilPmpOC_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_ElecOilPmpOC_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB_Cnt_Elec);

#endif

    /* End of SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Ckt' */

    /* SignalConversion generated from: '<S2>/VeDIOR_Spare4Lsd_PwmOutpDiagCmn_b_FailrPrsnt' incorporates:
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_PwrTrnsfrRlyCntrlCktHi'
     *  SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_PwrTrnsfrRlyCntrlCktLo'
     *  SignalConversion generated from: '<S2>/VeNVMB_Cnt_ACSwitchRelaySTB_MFOP'
     *  SignalConversion generated from: '<S2>/VeNVMB_Cnt_ACSwitchRelaySTG_MFOP'
     */
#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

    /* SignalConversion generated from: '<S2>/VeDIOR_Spare4Lsd_PwmOutpDiagCmn_b_FailrPrsnt' incorporates:
     *  Inport: '<Root>/VeDIOR_Spare4Lsd_PwmOutpDiagCmn_b_FailrPrsnt'
     */
    (void)Rte_Read_VeDIOR_Spare4Lsd_PwmOutpDiagCmn_b_FailrPrsnt
        (&rtb_TmpSignalConversionAtVeDIOR_Spare4Ls);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_PwrTrnsfrRlyCntrlCktLo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrTrnsfrRlyCntrlCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrTrnsfrRlyCntrlCktLo_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Sta_gf);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_PwrTrnsfrRlyCntrlCktHi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_PwrTrnsfrRlyCntrlCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_PwrTrnsfrRlyCntrlCktHi_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Stat_j);

    /* SignalConversion generated from: '<S2>/VeNVMB_Cnt_ACSwitchRelaySTG_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_ACSwitchRelaySTG_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_ACSwitchRelaySTG_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB_Cnt_ACSw);

    /* SignalConversion generated from: '<S2>/VeNVMB_Cnt_ACSwitchRelaySTB_MFOP' incorporates:
     *  Inport: '<Root>/VeNVMB_Cnt_ACSwitchRelaySTB_MFOP'
     */
    (void)Rte_Read_VeNVMB_Cnt_ACSwitchRelaySTB_MFOP_Value
        (&rtb_TmpSignalConversionAtVeNVMB_Cnt_AC_m);

#endif

    /* End of SignalConversion generated from: '<S2>/VeDIOR_Spare4Lsd_PwmOutpDiagCmn_b_FailrPrsnt' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/COUB_MedTEH_StartCheckpoint'
     */
    /* FunctionCaller: '<S74>/COUB_MedTEH_StartCheckpoint' */
    Rte_Call_COUB_MedTEH_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Subsystem'
     */
#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

    /* Outputs for Atomic SubSystem: '<S76>/AC Power Switch Relay' */
    /* Outputs for Atomic SubSystem: '<S77>/AC Power Switch Relay' */

    /* RelationalOperator: '<S97>/Relational Operator3' incorporates:
     *  Constant: '<S97>/Constant3'
     *  S-Function (sfix_bitop): '<S97>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_g = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_j) & 64U) == 0U);

    /* Logic: '<S97>/Logical1' incorporates:
     *  Constant: '<S95>/Calib'
     *  Constant: '<S96>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S97>/Constant1'
     *  Logic: '<S90>/Logical Operator'
     *  Logic: '<S97>/Logical Operator'
     *  Logic: '<S97>/Logical10'
     *  Logic: '<S97>/Logical12'
     *  RelationalOperator: '<S97>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S97>/Bitwise Operator3'
     */
    rtb_Logical1_gc = ((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
                        (KeCOUB_b_STBDiagEnbl_ACSwitchRelay)) &&
                       ((!KeCOUB_b_LtchEnblACSwitchRelaySTB) || (((((uint32)
                            rtb_TmpSignalConversionAtVeDMAB_y_Stat_j) & 1U) ==
                          0U) || (!rtb_RelationalOperator3_g))));

    /* Logic: '<S92>/NOT4' */
    rtb_NOT4_lj = (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
                   rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outputs for Atomic SubSystem: '<S97>/EdgeFalling1' */
    /* Logic: '<S99>/AND' incorporates:
     *  Logic: '<S99>/OR1'
     *  UnitDelay: '<S99>/Unit Delay'
     */
    rtb_AND_n = ((!rtb_RelationalOperator3_g) && (COUB_ac_DW.UnitDelay_DSTATE_lr));

    /* Update for UnitDelay: '<S99>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_lr = rtb_RelationalOperator3_g;

    /* End of Outputs for SubSystem: '<S97>/EdgeFalling1' */

    /* Logic: '<S97>/Logical5' */
    rtb_RelationalOperator3_g = (rtb_NOT4_lj || rtb_AND_n);

    /* Outputs for Atomic SubSystem: '<S98>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S98>/Counter Reset  Enabled ' */
    /* Switch: '<S105>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_Spare4Lsd_PwmOutpDiagFltCircDtctd_CircShoHi'
     *  Logic: '<S98>/Fail Counter Reset'
     *  Switch: '<S106>/Switch1'
     *  UnitDelay: '<S98>/Unit Delay'
     *  UnitDelay: '<S98>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3_g || (COUB_ac_DW.UnitDelay_DSTATE_do)) ||
            (COUB_ac_DW.UnitDelay1_DSTATE_pq))
    {
        /* Switch: '<S105>/Switch1' incorporates:
         *  Constant: '<S105>/Constant Value2'
         */
        VeCOUB_Cnt_STBFailLimACSwitchRelay = 0U;

        /* Switch: '<S106>/Switch1' incorporates:
         *  Constant: '<S106>/Constant Value2'
         */
        VeCOUB_Cnt_STBSmplLimACSwitchRelay = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_Spare4Lsd_PwmOutpDiagFltCircDtctd_CircShoHi
            (&tmpRead_a);

        /* Switch: '<S105>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_Spare4Lsd_PwmOutpDiagFltCircDtctd_CircShoHi'
         *  Logic: '<S90>/Logical Operator1'
         *  Logic: '<S98>/NOT6'
         */
        if (rtb_Logical1_gc && ((((sint32)tmpRead_a.CircShoHi) != 0) &&
                                rtb_TmpSignalConversionAtVeDIOR_Spare4Ls))
        {
            /* Switch: '<S105>/Switch1' incorporates:
             *  Constant: '<S105>/Constant Value1'
             *  Sum: '<S105>/Subtraction'
             *  Switch: '<S105>/Switch2'
             *  UnitDelay: '<S105>/Unit Delay'
             */
            VeCOUB_Cnt_STBFailLimACSwitchRelay = (uint16)(((uint32)
                VeCOUB_Cnt_STBFailLimACSwitchRelay) + 1U);
        }

        /* End of Switch: '<S105>/Switch2' */

        /* Switch: '<S106>/Switch2' */
        if (rtb_Logical1_gc)
        {
            /* Switch: '<S106>/Switch1' incorporates:
             *  Constant: '<S106>/Constant Value1'
             *  Sum: '<S106>/Subtraction'
             *  Switch: '<S106>/Switch2'
             *  UnitDelay: '<S106>/Unit Delay'
             */
            VeCOUB_Cnt_STBSmplLimACSwitchRelay = (uint16)(((uint32)
                VeCOUB_Cnt_STBSmplLimACSwitchRelay) + 1U);
        }

        /* End of Switch: '<S106>/Switch2' */
    }

    /* End of Switch: '<S105>/Switch1' */
    /* End of Outputs for SubSystem: '<S98>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S98>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S98>/Greater Than or Equal ' incorporates:
     *  Constant: '<S93>/Calib'
     */
    COUB_ac_DW.UnitDelay1_DSTATE_pq = (VeCOUB_Cnt_STBFailLimACSwitchRelay >=
        KeCOUB_Cnt_STBFailLimACSwitchRelay);

    /* Logic: '<S98>/NOT5' incorporates:
     *  Constant: '<S94>/Calib'
     *  Logic: '<S98>/NOT3'
     *  RelationalOperator: '<S98>/Less Than  or Equal'
     */
    rtb_Logical1_gc = ((VeCOUB_Cnt_STBSmplLimACSwitchRelay >=
                        KeCOUB_Cnt_STBSmplLimACSwitchRelay) &&
                       (!COUB_ac_DW.UnitDelay1_DSTATE_pq));

    /* Outputs for Enabled SubSystem: '<S97>/Fail' */
    COUB_ac_Fail(COUB_ac_DW.UnitDelay1_DSTATE_pq, &COUB_ac_B.Merge_p);

    /* End of Outputs for SubSystem: '<S97>/Fail' */

    /* Outputs for Enabled SubSystem: '<S97>/Init' */
    COUB_ac_Init_i(rtb_RelationalOperator3_g, &COUB_ac_B.Merge_p);

    /* End of Outputs for SubSystem: '<S97>/Init' */

    /* Outputs for Enabled SubSystem: '<S97>/Pass' */
    COUB_ac_Pass(rtb_Logical1_gc, &COUB_ac_B.Merge_p);

    /* End of Outputs for SubSystem: '<S97>/Pass' */

    /* RelationalOperator: '<S97>/Relational Operator' incorporates:
     *  Constant: '<S100>/Constant'
     *  Merge: '<S97>/Merge'
     */
    COUB_ac_B.RelationalOperator_k = (((uint32)COUB_ac_B.Merge_p) ==
        CeDFIB_e_Fail);

    /* Switch: '<S111>/Switch1' incorporates:
     *  Switch: '<S110>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        /* Outport: '<Root>/VeCOUB_Cnt_ACSwitchRelaySTB_MFOP' incorporates:
         *  Constant: '<S104>/Constant Value'
         */
        (void)Rte_Write_VeCOUB_Cnt_ACSwitchRelaySTB_MFOP_Value((uint16)0U);
    }
    else if (rtb_Logical1_gc)
    {
        /* MinMax: '<S104>/Minimum2' incorporates:
         *  Switch: '<S110>/Switch1'
         */
        if (VeCOUB_Cnt_STBFailLimACSwitchRelay >
                rtb_TmpSignalConversionAtVeNVMB_Cnt_AC_m)
        {
            /* Outport: '<Root>/VeCOUB_Cnt_ACSwitchRelaySTB_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_ACSwitchRelaySTB_MFOP_Value
                (VeCOUB_Cnt_STBFailLimACSwitchRelay);
        }
        else
        {
            /* Outport: '<Root>/VeCOUB_Cnt_ACSwitchRelaySTB_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_ACSwitchRelaySTB_MFOP_Value
                (rtb_TmpSignalConversionAtVeNVMB_Cnt_AC_m);
        }

        /* End of MinMax: '<S104>/Minimum2' */
    }
    else
    {
        /* Outport: '<Root>/VeCOUB_Cnt_ACSwitchRelaySTB_MFOP' incorporates:
         *  Switch: '<S110>/Switch1'
         */
        (void)Rte_Write_VeCOUB_Cnt_ACSwitchRelaySTB_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB_Cnt_AC_m);
    }

    /* End of Switch: '<S111>/Switch1' */

    /* RelationalOperator: '<S116>/Relational Operator3' incorporates:
     *  Constant: '<S116>/Constant3'
     *  S-Function (sfix_bitop): '<S116>/Bitwise Operator2'
     */
    rtb_AND_n = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Sta_gf) & 64U) ==
                 0U);

    /* Outputs for Atomic SubSystem: '<S116>/EdgeFalling1' */
    /* Logic: '<S116>/Logical Operator' incorporates:
     *  Logic: '<S118>/OR1'
     */
    rtb_AND_p = !rtb_AND_n;

    /* End of Outputs for SubSystem: '<S116>/EdgeFalling1' */

    /* Logic: '<S116>/Logical1' incorporates:
     *  Constant: '<S114>/Calib'
     *  Constant: '<S115>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S116>/Constant1'
     *  Logic: '<S116>/Logical Operator'
     *  Logic: '<S116>/Logical10'
     *  Logic: '<S116>/Logical12'
     *  Logic: '<S91>/Logical Operator'
     *  RelationalOperator: '<S116>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S116>/Bitwise Operator3'
     */
    rtb_RelationalOperator3_g = ((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
        (KeCOUB_b_STGDiagEnbl_ACSwitchRelay)) &&
        ((!KeCOUB_b_LtchEnblSTGACSwitchRelay) || (((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_gf) & 1U) == 0U) || rtb_AND_p)));

    /* Outputs for Atomic SubSystem: '<S116>/EdgeFalling1' */
    /* Logic: '<S118>/AND' incorporates:
     *  UnitDelay: '<S118>/Unit Delay'
     */
    rtb_AND_p = (rtb_AND_p && (COUB_ac_DW.UnitDelay_DSTATE_em));

    /* Update for UnitDelay: '<S118>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_em = rtb_AND_n;

    /* End of Outputs for SubSystem: '<S116>/EdgeFalling1' */

    /* Logic: '<S116>/Logical5' */
    rtb_NOT4_lj = (rtb_NOT4_lj || rtb_AND_p);

    /* UnitDelay: '<S117>/Unit Delay1' incorporates:
     *  UnitDelay: '<S98>/Unit Delay'
     */
    COUB_ac_DW.UnitDelay_DSTATE_do = COUB_ac_DW.UnitDelay1_DSTATE_hc;

    /* Outputs for Atomic SubSystem: '<S117>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S117>/Counter Reset  Enabled ' */
    /* Switch: '<S124>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_Spare4Lsd_PwmOutpDiagFltCircDtctd_CircShoLo'
     *  Logic: '<S117>/Fail Counter Reset'
     *  Switch: '<S125>/Switch1'
     *  UnitDelay: '<S117>/Unit Delay'
     *  UnitDelay: '<S98>/Unit Delay'
     */
    if ((rtb_NOT4_lj || (COUB_ac_DW.UnitDelay_DSTATE_be)) ||
            (COUB_ac_DW.UnitDelay_DSTATE_do))
    {
        /* Switch: '<S124>/Switch1' incorporates:
         *  Constant: '<S124>/Constant Value2'
         */
        VeCOUB_Cnt_STGFailLimACSwitchRelay = 0U;

        /* Switch: '<S125>/Switch1' incorporates:
         *  Constant: '<S125>/Constant Value2'
         */
        VeCOUB_Cnt_STGSmplLimACSwitchRelay = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_Spare4Lsd_PwmOutpDiagFltCircDtctd_CircShoLo
            (&tmpRead_9);

        /* Switch: '<S124>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_Spare4Lsd_PwmOutpDiagFltCircDtctd_CircShoLo'
         *  Logic: '<S117>/NOT6'
         *  Logic: '<S91>/Logical Operator1'
         */
        if (rtb_RelationalOperator3_g && ((((sint32)tmpRead_9.CircShoLo) != 0) &&
             rtb_TmpSignalConversionAtVeDIOR_Spare4Ls))
        {
            /* Switch: '<S124>/Switch1' incorporates:
             *  Constant: '<S124>/Constant Value1'
             *  Sum: '<S124>/Subtraction'
             *  Switch: '<S124>/Switch2'
             *  UnitDelay: '<S124>/Unit Delay'
             */
            VeCOUB_Cnt_STGFailLimACSwitchRelay = (uint16)(((uint32)
                VeCOUB_Cnt_STGFailLimACSwitchRelay) + 1U);
        }

        /* End of Switch: '<S124>/Switch2' */

        /* Switch: '<S125>/Switch2' */
        if (rtb_RelationalOperator3_g)
        {
            /* Switch: '<S125>/Switch1' incorporates:
             *  Constant: '<S125>/Constant Value1'
             *  Sum: '<S125>/Subtraction'
             *  Switch: '<S125>/Switch2'
             *  UnitDelay: '<S125>/Unit Delay'
             */
            VeCOUB_Cnt_STGSmplLimACSwitchRelay = (uint16)(((uint32)
                VeCOUB_Cnt_STGSmplLimACSwitchRelay) + 1U);
        }

        /* End of Switch: '<S125>/Switch2' */
    }

    /* End of Switch: '<S124>/Switch1' */
    /* End of Outputs for SubSystem: '<S117>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S117>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S117>/Greater Than or Equal ' incorporates:
     *  Constant: '<S112>/Calib'
     */
    COUB_ac_DW.UnitDelay1_DSTATE_hc = (VeCOUB_Cnt_STGFailLimACSwitchRelay >=
        KeCOUB_Cnt_STGFailLimACSwitchRelay);

    /* Logic: '<S117>/NOT5' incorporates:
     *  Constant: '<S113>/Calib'
     *  Logic: '<S117>/NOT3'
     *  RelationalOperator: '<S117>/Less Than  or Equal'
     */
    COUB_ac_DW.UnitDelay_DSTATE_be = ((VeCOUB_Cnt_STGSmplLimACSwitchRelay >=
        KeCOUB_Cnt_STGSmplLimACSwitchRelay) && (!COUB_ac_DW.UnitDelay1_DSTATE_hc));

    /* Outputs for Enabled SubSystem: '<S116>/Fail' */
    COUB_ac_Fail(COUB_ac_DW.UnitDelay1_DSTATE_hc, &COUB_ac_B.Merge_nn);

    /* End of Outputs for SubSystem: '<S116>/Fail' */

    /* Outputs for Enabled SubSystem: '<S116>/Init' */
    COUB_ac_Init_i(rtb_NOT4_lj, &COUB_ac_B.Merge_nn);

    /* End of Outputs for SubSystem: '<S116>/Init' */

    /* Outputs for Enabled SubSystem: '<S116>/Pass' */
    COUB_ac_Pass(COUB_ac_DW.UnitDelay_DSTATE_be, &COUB_ac_B.Merge_nn);

    /* End of Outputs for SubSystem: '<S116>/Pass' */

    /* RelationalOperator: '<S116>/Relational Operator' incorporates:
     *  Constant: '<S119>/Constant'
     *  Merge: '<S116>/Merge'
     */
    COUB_ac_B.RelationalOperator_le = (((uint32)COUB_ac_B.Merge_nn) ==
        CeDFIB_e_Fail);

    /* Switch: '<S130>/Switch1' incorporates:
     *  Switch: '<S129>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        /* Outport: '<Root>/VeCOUB_Cnt_ACSwitchRelaySTG_MFOP' incorporates:
         *  Constant: '<S123>/Constant Value'
         */
        (void)Rte_Write_VeCOUB_Cnt_ACSwitchRelaySTG_MFOP_Value((uint16)0U);
    }
    else if (COUB_ac_DW.UnitDelay_DSTATE_be)
    {
        /* MinMax: '<S123>/Minimum2' incorporates:
         *  Switch: '<S129>/Switch1'
         */
        if (VeCOUB_Cnt_STGFailLimACSwitchRelay >
                rtb_TmpSignalConversionAtVeNVMB_Cnt_ACSw)
        {
            /* Outport: '<Root>/VeCOUB_Cnt_ACSwitchRelaySTG_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_ACSwitchRelaySTG_MFOP_Value
                (VeCOUB_Cnt_STGFailLimACSwitchRelay);
        }
        else
        {
            /* Outport: '<Root>/VeCOUB_Cnt_ACSwitchRelaySTG_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_ACSwitchRelaySTG_MFOP_Value
                (rtb_TmpSignalConversionAtVeNVMB_Cnt_ACSw);
        }

        /* End of MinMax: '<S123>/Minimum2' */
    }
    else
    {
        /* Outport: '<Root>/VeCOUB_Cnt_ACSwitchRelaySTG_MFOP' incorporates:
         *  Switch: '<S129>/Switch1'
         */
        (void)Rte_Write_VeCOUB_Cnt_ACSwitchRelaySTG_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB_Cnt_ACSw);
    }

    /* End of Switch: '<S130>/Switch1' */

    /* Switch: '<S88>/Switch' incorporates:
     *  Constant: '<S132>/Calib'
     *  Inport: '<Root>/VeVTLR_b_ACSw_Cmd'
     */
    if (KeCOUB_b_AC_PwrSwRlyDCBypEnbl)
    {
        /* FunctionCaller: '<S86>/SetDIOR_e_Spare4Lsd_PwmOutpOps_SetDIOR_PWM_DC' */
        Rte_Call_SetDIOR_e_Spare4Lsd_PwmOutpOps_SetDIOR_PWM_DC
            (KeCOUB_Pct_AC_PwrSwRlyDCByp);
    }
    else
    {
        (void)Rte_Read_VeVTLR_b_ACSw_Cmd_Value(&rtb_RelationalOperator3_h);

        /* Switch: '<S89>/Switch' incorporates:
         *  Inport: '<Root>/VeVTLR_b_ACSw_Cmd'
         */
        if (rtb_RelationalOperator3_h)
        {
            /* FunctionCaller: '<S86>/SetDIOR_e_Spare4Lsd_PwmOutpOps_SetDIOR_PWM_DC' */
            Rte_Call_SetDIOR_e_Spare4Lsd_PwmOutpOps_SetDIOR_PWM_DC
                (KeCOUB_Pct_AC_PwrSwRlyDCFullPwm);
        }
        else
        {
            /* FunctionCaller: '<S86>/SetDIOR_e_Spare4Lsd_PwmOutpOps_SetDIOR_PWM_DC' */
            Rte_Call_SetDIOR_e_Spare4Lsd_PwmOutpOps_SetDIOR_PWM_DC
                (KeCOUB_Pct_AC_PwrSwRlyDCZeroPwm);
        }

        /* End of Switch: '<S89>/Switch' */
    }

    /* End of Switch: '<S88>/Switch' */

    /* Update for UnitDelay: '<S98>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_do = rtb_Logical1_gc;

    /* End of Outputs for SubSystem: '<S77>/AC Power Switch Relay' */
    /* End of Outputs for SubSystem: '<S76>/AC Power Switch Relay' */
#endif

#if Rte_SysCon_Variant_COUB_OILPUMP_Presence

    /* Outputs for Atomic SubSystem: '<S76>/ElecOilPmp' */
    /* Outputs for Atomic SubSystem: '<S78>/ElecOilPmp' */

    /* RelationalOperator: '<S144>/Relational Operator3' incorporates:
     *  Constant: '<S144>/Constant3'
     *  S-Function (sfix_bitop): '<S144>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_h = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_ld) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S144>/EdgeFalling1' */
    /* Logic: '<S144>/Logical Operator' incorporates:
     *  Logic: '<S146>/OR1'
     */
    rtb_NOT4_lj = !rtb_RelationalOperator3_h;

    /* End of Outputs for SubSystem: '<S144>/EdgeFalling1' */

    /* Logic: '<S144>/Logical1' incorporates:
     *  Constant: '<S142>/Calib'
     *  Constant: '<S143>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S144>/Constant1'
     *  Logic: '<S138>/Logical Operator'
     *  Logic: '<S144>/Logical Operator'
     *  Logic: '<S144>/Logical10'
     *  Logic: '<S144>/Logical12'
     *  RelationalOperator: '<S144>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S144>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeDIOR_Spare4Ls =
        ((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
          (KeCOUB_b_DiagEnbl_ElecOilPmpCmd)) &&
         ((!KeCOUB_b_LtchEnblElecOilPmpCmd) || (((((uint32)
              rtb_TmpSignalConversionAtVeDMAB_y_Sta_ld) & 1U) == 0U) ||
           rtb_NOT4_lj)));

    /* Outputs for Atomic SubSystem: '<S144>/EdgeFalling1' */
    /* Logic: '<S146>/AND' incorporates:
     *  UnitDelay: '<S146>/Unit Delay'
     */
    rtb_NOT4_lj = (rtb_NOT4_lj && (COUB_ac_DW.UnitDelay_DSTATE_in));

    /* Update for UnitDelay: '<S146>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_in = rtb_RelationalOperator3_h;

    /* End of Outputs for SubSystem: '<S144>/EdgeFalling1' */

    /* Logic: '<S144>/Logical5' incorporates:
     *  Logic: '<S139>/NOT4'
     */
    rtb_RelationalOperator3_h = ((rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
        rtb_TmpSignalConversionAtVeDFIR_b_PostCo) || rtb_NOT4_lj);

    /* Outputs for Atomic SubSystem: '<S145>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S145>/Counter Reset  Enabled ' */
    /* Switch: '<S152>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_Spare1Lsd_PwmOutpDiagCmn_b_FailrPrsnt'
     *  Logic: '<S145>/Fail Counter Reset'
     *  Switch: '<S153>/Switch1'
     *  UnitDelay: '<S145>/Unit Delay'
     *  UnitDelay: '<S145>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3_h || (COUB_ac_DW.UnitDelay_DSTATE_mk)) ||
            (COUB_ac_DW.UnitDelay1_DSTATE_o))
    {
        /* Switch: '<S152>/Switch1' incorporates:
         *  Constant: '<S152>/Constant Value2'
         */
        VeCOUB_Cnt_DiagFailLimElecOilPmpCmd = 0U;

        /* Switch: '<S153>/Switch1' incorporates:
         *  Constant: '<S153>/Constant Value2'
         */
        VeCOUB_Cnt_DiagSmplLimElecOilPmpCmd = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_Spare1Lsd_PwmOutpDiagCmn_b_FailrPrsnt(&rtb_NOT4_k);

        /* Switch: '<S152>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_Spare1Lsd_PwmOutpDiagCmn_b_FailrPrsnt'
         *  Logic: '<S145>/NOT6'
         */
        if (rtb_TmpSignalConversionAtVeDIOR_Spare4Ls && rtb_NOT4_k)
        {
            /* Switch: '<S152>/Switch1' incorporates:
             *  Constant: '<S152>/Constant Value1'
             *  Sum: '<S152>/Subtraction'
             *  Switch: '<S152>/Switch2'
             *  UnitDelay: '<S152>/Unit Delay'
             */
            VeCOUB_Cnt_DiagFailLimElecOilPmpCmd = (uint16)(((uint32)
                VeCOUB_Cnt_DiagFailLimElecOilPmpCmd) + 1U);
        }

        /* End of Switch: '<S152>/Switch2' */

        /* Switch: '<S153>/Switch2' */
        if (rtb_TmpSignalConversionAtVeDIOR_Spare4Ls)
        {
            /* Switch: '<S153>/Switch1' incorporates:
             *  Constant: '<S153>/Constant Value1'
             *  Sum: '<S153>/Subtraction'
             *  Switch: '<S153>/Switch2'
             *  UnitDelay: '<S153>/Unit Delay'
             */
            VeCOUB_Cnt_DiagSmplLimElecOilPmpCmd = (uint16)(((uint32)
                VeCOUB_Cnt_DiagSmplLimElecOilPmpCmd) + 1U);
        }

        /* End of Switch: '<S153>/Switch2' */
    }

    /* End of Switch: '<S152>/Switch1' */
    /* End of Outputs for SubSystem: '<S145>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S145>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S145>/Greater Than or Equal ' incorporates:
     *  Constant: '<S140>/Calib'
     */
    COUB_ac_DW.UnitDelay1_DSTATE_o = (VeCOUB_Cnt_DiagFailLimElecOilPmpCmd >=
        KeCOUB_Cnt_DiagFailLimElecOilPmpCmd);

    /* Logic: '<S145>/NOT5' incorporates:
     *  Constant: '<S141>/Calib'
     *  Logic: '<S145>/NOT3'
     *  RelationalOperator: '<S145>/Less Than  or Equal'
     */
    COUB_ac_DW.UnitDelay_DSTATE_mk = ((VeCOUB_Cnt_DiagSmplLimElecOilPmpCmd >=
        KeCOUB_Cnt_DiagSmplLimElecOilPmpCmd) && (!COUB_ac_DW.UnitDelay1_DSTATE_o));

    /* Outputs for Enabled SubSystem: '<S144>/Fail' */
    COUB_ac_Fail(COUB_ac_DW.UnitDelay1_DSTATE_o, &COUB_ac_B.Merge_j);

    /* End of Outputs for SubSystem: '<S144>/Fail' */

    /* Outputs for Enabled SubSystem: '<S144>/Init' */
    COUB_ac_Init_i(rtb_RelationalOperator3_h, &COUB_ac_B.Merge_j);

    /* End of Outputs for SubSystem: '<S144>/Init' */

    /* Outputs for Enabled SubSystem: '<S144>/Pass' */
    COUB_ac_Pass(COUB_ac_DW.UnitDelay_DSTATE_mk, &COUB_ac_B.Merge_j);

    /* End of Outputs for SubSystem: '<S144>/Pass' */

    /* RelationalOperator: '<S144>/Relational Operator' incorporates:
     *  Constant: '<S147>/Constant'
     *  Merge: '<S144>/Merge'
     */
    COUB_ac_B.RelationalOperator_l = (((uint32)COUB_ac_B.Merge_j) ==
        CeDFIB_e_Fail);

    /* Switch: '<S158>/Switch1' incorporates:
     *  Switch: '<S157>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        /* Outport: '<Root>/VeCOUB_Cnt_ElecOilPmpOC_MFOP' incorporates:
         *  Constant: '<S151>/Constant Value'
         */
        (void)Rte_Write_VeCOUB_Cnt_ElecOilPmpOC_MFOP_Value((uint16)0U);
    }
    else if (COUB_ac_DW.UnitDelay_DSTATE_mk)
    {
        /* MinMax: '<S151>/Minimum2' incorporates:
         *  Switch: '<S157>/Switch1'
         */
        if (VeCOUB_Cnt_DiagFailLimElecOilPmpCmd >
                rtb_TmpSignalConversionAtVeNVMB_Cnt_Elec)
        {
            /* Outport: '<Root>/VeCOUB_Cnt_ElecOilPmpOC_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_ElecOilPmpOC_MFOP_Value
                (VeCOUB_Cnt_DiagFailLimElecOilPmpCmd);
        }
        else
        {
            /* Outport: '<Root>/VeCOUB_Cnt_ElecOilPmpOC_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_ElecOilPmpOC_MFOP_Value
                (rtb_TmpSignalConversionAtVeNVMB_Cnt_Elec);
        }

        /* End of MinMax: '<S151>/Minimum2' */
    }
    else
    {
        /* Outport: '<Root>/VeCOUB_Cnt_ElecOilPmpOC_MFOP' incorporates:
         *  Switch: '<S157>/Switch1'
         */
        (void)Rte_Write_VeCOUB_Cnt_ElecOilPmpOC_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB_Cnt_Elec);
    }

    /* End of Switch: '<S158>/Switch1' */
    /* End of Outputs for SubSystem: '<S78>/ElecOilPmp' */

    /* Inport: '<Root>/VeTAPR_Pct_ElecOilPmp_Cmd' */
    (void)Rte_Read_VeTAPR_Pct_ElecOilPmp_Cmd_Value(&tmpRead_2);

    /* Outputs for Atomic SubSystem: '<S78>/ElecOilPmp' */
    /* Switch: '<S137>/Switch' incorporates:
     *  Constant: '<S160>/Calib'
     */
    if (KeCOUB_b_ElecOilPmpDCBypEnbl)
    {
        /* FunctionCaller: '<S135>/SetDIOR_e_Spare1Lsd_PwmOutpOps_SetDIOR_PWM_DC' */
        Rte_Call_SetDIOR_e_Spare1Lsd_PwmOutpOps_SetDIOR_PWM_DC
            (KeCOUB_Pct_ElecOilPmpDCByp);
    }
    else
    {
        /* FunctionCaller: '<S135>/SetDIOR_e_Spare1Lsd_PwmOutpOps_SetDIOR_PWM_DC' */
        Rte_Call_SetDIOR_e_Spare1Lsd_PwmOutpOps_SetDIOR_PWM_DC(tmpRead_2);
    }

    /* End of Switch: '<S137>/Switch' */

    /* End of Outputs for SubSystem: '<S78>/ElecOilPmp' */
    /* End of Outputs for SubSystem: '<S76>/ElecOilPmp' */
#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

    /* Outputs for Atomic SubSystem: '<S76>/RadFan' */
    /* Outputs for Atomic SubSystem: '<S83>/RadFan' */

    /* RelationalOperator: '<S198>/Relational Operator3' incorporates:
     *  Constant: '<S198>/Constant3'
     *  S-Function (sfix_bitop): '<S198>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_h = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_d) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S198>/EdgeFalling1' */
    /* Logic: '<S198>/Logical Operator' incorporates:
     *  Logic: '<S200>/OR1'
     */
    rtb_NOT4_lj = !rtb_RelationalOperator3_h;

    /* End of Outputs for SubSystem: '<S198>/EdgeFalling1' */

    /* Logic: '<S198>/Logical1' incorporates:
     *  Constant: '<S196>/Calib'
     *  Constant: '<S197>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S198>/Constant1'
     *  Logic: '<S190>/Logical Operator'
     *  Logic: '<S198>/Logical Operator'
     *  Logic: '<S198>/Logical10'
     *  Logic: '<S198>/Logical12'
     *  RelationalOperator: '<S198>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S198>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeDIOR_Spare4Ls =
        ((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
          (KeCOUB_b_STBDiagEnbl_RadrFanCtrl)) &&
         ((!KeCOUB_b_LtchEnblSTBRadrFanCtrl) || (((((uint32)
              rtb_TmpSignalConversionAtVeDMAB_y_Stat_d) & 1U) == 0U) ||
           rtb_NOT4_lj)));

    /* Logic: '<S193>/NOT4' */
    rtb_NOT4_k = (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
                  rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outputs for Atomic SubSystem: '<S198>/EdgeFalling1' */
    /* Logic: '<S200>/AND' incorporates:
     *  UnitDelay: '<S200>/Unit Delay'
     */
    rtb_NOT4_lj = (rtb_NOT4_lj && (COUB_ac_DW.UnitDelay_DSTATE_j1));

    /* Update for UnitDelay: '<S200>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_j1 = rtb_RelationalOperator3_h;

    /* End of Outputs for SubSystem: '<S198>/EdgeFalling1' */

    /* Logic: '<S198>/Logical5' */
    rtb_RelationalOperator3_h = (rtb_NOT4_k || rtb_NOT4_lj);

    /* Outputs for Atomic SubSystem: '<S199>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S199>/Counter Reset  Enabled ' */
    /* Switch: '<S206>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_RadrFanCtrlFltCircDtctd_CircShoHi'
     *  Logic: '<S199>/Fail Counter Reset'
     *  Switch: '<S207>/Switch1'
     *  UnitDelay: '<S199>/Unit Delay'
     *  UnitDelay: '<S199>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3_h || (COUB_ac_DW.UnitDelay_DSTATE_nd)) ||
            (COUB_ac_DW.UnitDelay1_DSTATE_d))
    {
        /* Switch: '<S206>/Switch1' incorporates:
         *  Constant: '<S206>/Constant Value2'
         */
        VeCOUB_Cnt_STBFailLimRadrFanCtrl = 0U;

        /* Switch: '<S207>/Switch1' incorporates:
         *  Constant: '<S207>/Constant Value2'
         */
        VeCOUB_Cnt_STBSmplLimRadrFanCtrl = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_RadrFanCtrlFltCircDtctd_CircShoHi(&tmpRead_7);

        /* Switch: '<S206>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_RadrFanCtrlFltCircDtctd_CircShoHi'
         *  Logic: '<S190>/Logical Operator1'
         *  Logic: '<S199>/NOT6'
         */
        if (rtb_TmpSignalConversionAtVeDIOR_Spare4Ls && ((((sint32)
                tmpRead_7.CircShoHi) != 0) &&
                rtb_TmpSignalConversionAtVeDIOR_RadrFanC))
        {
            /* Switch: '<S206>/Switch1' incorporates:
             *  Constant: '<S206>/Constant Value1'
             *  Sum: '<S206>/Subtraction'
             *  Switch: '<S206>/Switch2'
             *  UnitDelay: '<S206>/Unit Delay'
             */
            VeCOUB_Cnt_STBFailLimRadrFanCtrl = (uint16)(((uint32)
                VeCOUB_Cnt_STBFailLimRadrFanCtrl) + 1U);
        }

        /* End of Switch: '<S206>/Switch2' */

        /* Switch: '<S207>/Switch2' */
        if (rtb_TmpSignalConversionAtVeDIOR_Spare4Ls)
        {
            /* Switch: '<S207>/Switch1' incorporates:
             *  Constant: '<S207>/Constant Value1'
             *  Sum: '<S207>/Subtraction'
             *  Switch: '<S207>/Switch2'
             *  UnitDelay: '<S207>/Unit Delay'
             */
            VeCOUB_Cnt_STBSmplLimRadrFanCtrl = (uint16)(((uint32)
                VeCOUB_Cnt_STBSmplLimRadrFanCtrl) + 1U);
        }

        /* End of Switch: '<S207>/Switch2' */
    }

    /* End of Switch: '<S206>/Switch1' */
    /* End of Outputs for SubSystem: '<S199>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S199>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S199>/Greater Than or Equal ' incorporates:
     *  Constant: '<S194>/Calib'
     */
    COUB_ac_DW.UnitDelay1_DSTATE_d = (VeCOUB_Cnt_STBFailLimRadrFanCtrl >=
        KeCOUB_Cnt_STBFailLimRadrFanCtrl);

    /* Logic: '<S199>/NOT5' incorporates:
     *  Constant: '<S195>/Calib'
     *  Logic: '<S199>/NOT3'
     *  RelationalOperator: '<S199>/Less Than  or Equal'
     */
    rtb_TmpSignalConversionAtVeDIOR_Spare4Ls =
        ((VeCOUB_Cnt_STBSmplLimRadrFanCtrl >= KeCOUB_Cnt_STBSmplLimRadrFanCtrl) &&
         (!COUB_ac_DW.UnitDelay1_DSTATE_d));

    /* Outputs for Enabled SubSystem: '<S198>/Fail' */
    COUB_ac_Fail(COUB_ac_DW.UnitDelay1_DSTATE_d, &COUB_ac_B.Merge_i);

    /* End of Outputs for SubSystem: '<S198>/Fail' */

    /* Outputs for Enabled SubSystem: '<S198>/Init' */
    COUB_ac_Init_i(rtb_RelationalOperator3_h, &COUB_ac_B.Merge_i);

    /* End of Outputs for SubSystem: '<S198>/Init' */

    /* Outputs for Enabled SubSystem: '<S198>/Pass' */
    COUB_ac_Pass(rtb_TmpSignalConversionAtVeDIOR_Spare4Ls, &COUB_ac_B.Merge_i);

    /* End of Outputs for SubSystem: '<S198>/Pass' */

    /* RelationalOperator: '<S198>/Relational Operator' incorporates:
     *  Constant: '<S201>/Constant'
     *  Merge: '<S198>/Merge'
     */
    COUB_ac_B.RelationalOperator_c = (((uint32)COUB_ac_B.Merge_i) ==
        CeDFIB_e_Fail);

    /* Switch: '<S212>/Switch1' incorporates:
     *  Switch: '<S211>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        /* Outport: '<Root>/VeCOUB_Cnt_RadrFanCtrlSTB_MFOP' incorporates:
         *  Constant: '<S205>/Constant Value'
         */
        (void)Rte_Write_VeCOUB_Cnt_RadrFanCtrlSTB_MFOP_Value((uint16)0U);
    }
    else if (rtb_TmpSignalConversionAtVeDIOR_Spare4Ls)
    {
        /* MinMax: '<S205>/Minimum2' incorporates:
         *  Switch: '<S211>/Switch1'
         */
        if (VeCOUB_Cnt_STBFailLimRadrFanCtrl >
                rtb_TmpSignalConversionAtVeNVMB_Cnt_Ra_j)
        {
            /* Outport: '<Root>/VeCOUB_Cnt_RadrFanCtrlSTB_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_RadrFanCtrlSTB_MFOP_Value
                (VeCOUB_Cnt_STBFailLimRadrFanCtrl);
        }
        else
        {
            /* Outport: '<Root>/VeCOUB_Cnt_RadrFanCtrlSTB_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_RadrFanCtrlSTB_MFOP_Value
                (rtb_TmpSignalConversionAtVeNVMB_Cnt_Ra_j);
        }

        /* End of MinMax: '<S205>/Minimum2' */
    }
    else
    {
        /* Outport: '<Root>/VeCOUB_Cnt_RadrFanCtrlSTB_MFOP' incorporates:
         *  Switch: '<S211>/Switch1'
         */
        (void)Rte_Write_VeCOUB_Cnt_RadrFanCtrlSTB_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB_Cnt_Ra_j);
    }

    /* End of Switch: '<S212>/Switch1' */

    /* RelationalOperator: '<S217>/Relational Operator3' incorporates:
     *  Constant: '<S217>/Constant3'
     *  S-Function (sfix_bitop): '<S217>/Bitwise Operator2'
     */
    rtb_NOT4_lj = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Stat_h) & 64U) ==
                   0U);

    /* Outputs for Atomic SubSystem: '<S217>/EdgeFalling1' */
    /* Logic: '<S217>/Logical Operator' incorporates:
     *  Logic: '<S219>/OR1'
     */
    rtb_Logical1_gc = !rtb_NOT4_lj;

    /* End of Outputs for SubSystem: '<S217>/EdgeFalling1' */

    /* Logic: '<S217>/Logical1' incorporates:
     *  Constant: '<S215>/Calib'
     *  Constant: '<S216>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S217>/Constant1'
     *  Logic: '<S191>/Logical Operator'
     *  Logic: '<S217>/Logical Operator'
     *  Logic: '<S217>/Logical10'
     *  Logic: '<S217>/Logical12'
     *  RelationalOperator: '<S217>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S217>/Bitwise Operator3'
     */
    rtb_RelationalOperator3_h = ((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
        (KeCOUB_b_STGDiagEnbl_RadrFanCtrl)) &&
        ((!KeCOUB_b_LtchEnblSTGRadrFanCtrl) || (((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_h) & 1U) == 0U) ||
        rtb_Logical1_gc)));

    /* Outputs for Atomic SubSystem: '<S217>/EdgeFalling1' */
    /* Logic: '<S219>/AND' incorporates:
     *  UnitDelay: '<S219>/Unit Delay'
     */
    rtb_Logical1_gc = (rtb_Logical1_gc && (COUB_ac_DW.UnitDelay_DSTATE_av));

    /* Update for UnitDelay: '<S219>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_av = rtb_NOT4_lj;

    /* End of Outputs for SubSystem: '<S217>/EdgeFalling1' */

    /* Logic: '<S217>/Logical5' */
    rtb_NOT4_lj = (rtb_NOT4_k || rtb_Logical1_gc);

    /* UnitDelay: '<S218>/Unit Delay1' incorporates:
     *  UnitDelay: '<S199>/Unit Delay'
     */
    COUB_ac_DW.UnitDelay_DSTATE_nd = COUB_ac_DW.UnitDelay1_DSTATE_c;

    /* Outputs for Atomic SubSystem: '<S218>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S218>/Counter Reset  Enabled ' */
    /* Switch: '<S225>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_RadrFanCtrlFltCircDtctd_CircShoLo'
     *  Logic: '<S218>/Fail Counter Reset'
     *  Switch: '<S226>/Switch1'
     *  UnitDelay: '<S199>/Unit Delay'
     *  UnitDelay: '<S218>/Unit Delay'
     */
    if ((rtb_NOT4_lj || (COUB_ac_DW.UnitDelay_DSTATE_mb)) ||
            (COUB_ac_DW.UnitDelay_DSTATE_nd))
    {
        /* Switch: '<S225>/Switch1' incorporates:
         *  Constant: '<S225>/Constant Value2'
         */
        VeCOUB_Cnt_STGFailLimRadrFanCtrl = 0U;

        /* Switch: '<S226>/Switch1' incorporates:
         *  Constant: '<S226>/Constant Value2'
         */
        VeCOUB_Cnt_STGSmplLimRadrFanCtrl = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_RadrFanCtrlFltCircDtctd_CircShoLo(&tmpRead_6);

        /* Switch: '<S225>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_RadrFanCtrlFltCircDtctd_CircShoLo'
         *  Logic: '<S191>/Logical Operator1'
         *  Logic: '<S218>/NOT6'
         */
        if (rtb_RelationalOperator3_h && ((((sint32)tmpRead_6.CircShoLo) != 0) &&
             rtb_TmpSignalConversionAtVeDIOR_RadrFanC))
        {
            /* Switch: '<S225>/Switch1' incorporates:
             *  Constant: '<S225>/Constant Value1'
             *  Sum: '<S225>/Subtraction'
             *  Switch: '<S225>/Switch2'
             *  UnitDelay: '<S225>/Unit Delay'
             */
            VeCOUB_Cnt_STGFailLimRadrFanCtrl = (uint16)(((uint32)
                VeCOUB_Cnt_STGFailLimRadrFanCtrl) + 1U);
        }

        /* End of Switch: '<S225>/Switch2' */

        /* Switch: '<S226>/Switch2' */
        if (rtb_RelationalOperator3_h)
        {
            /* Switch: '<S226>/Switch1' incorporates:
             *  Constant: '<S226>/Constant Value1'
             *  Sum: '<S226>/Subtraction'
             *  Switch: '<S226>/Switch2'
             *  UnitDelay: '<S226>/Unit Delay'
             */
            VeCOUB_Cnt_STGSmplLimRadrFanCtrl = (uint16)(((uint32)
                VeCOUB_Cnt_STGSmplLimRadrFanCtrl) + 1U);
        }

        /* End of Switch: '<S226>/Switch2' */
    }

    /* End of Switch: '<S225>/Switch1' */
    /* End of Outputs for SubSystem: '<S218>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S218>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S218>/Greater Than or Equal ' incorporates:
     *  Constant: '<S213>/Calib'
     */
    COUB_ac_DW.UnitDelay1_DSTATE_c = (VeCOUB_Cnt_STGFailLimRadrFanCtrl >=
        KeCOUB_Cnt_STGFailLimRadrFanCtrl);

    /* Logic: '<S218>/NOT5' incorporates:
     *  Constant: '<S214>/Calib'
     *  Logic: '<S218>/NOT3'
     *  RelationalOperator: '<S218>/Less Than  or Equal'
     */
    COUB_ac_DW.UnitDelay_DSTATE_mb = ((VeCOUB_Cnt_STGSmplLimRadrFanCtrl >=
        KeCOUB_Cnt_STGSmplLimRadrFanCtrl) && (!COUB_ac_DW.UnitDelay1_DSTATE_c));

    /* Outputs for Enabled SubSystem: '<S217>/Fail' */
    COUB_ac_Fail(COUB_ac_DW.UnitDelay1_DSTATE_c, &COUB_ac_B.Merge_et);

    /* End of Outputs for SubSystem: '<S217>/Fail' */

    /* Outputs for Enabled SubSystem: '<S217>/Init' */
    COUB_ac_Init_i(rtb_NOT4_lj, &COUB_ac_B.Merge_et);

    /* End of Outputs for SubSystem: '<S217>/Init' */

    /* Outputs for Enabled SubSystem: '<S217>/Pass' */
    COUB_ac_Pass(COUB_ac_DW.UnitDelay_DSTATE_mb, &COUB_ac_B.Merge_et);

    /* End of Outputs for SubSystem: '<S217>/Pass' */

    /* RelationalOperator: '<S217>/Relational Operator' incorporates:
     *  Constant: '<S220>/Constant'
     *  Merge: '<S217>/Merge'
     */
    COUB_ac_B.RelationalOperator_p = (((uint32)COUB_ac_B.Merge_et) ==
        CeDFIB_e_Fail);

    /* Switch: '<S231>/Switch1' incorporates:
     *  Switch: '<S230>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        /* Outport: '<Root>/VeCOUB_Cnt_RadrFanCtrlSTG_MFOP' incorporates:
         *  Constant: '<S224>/Constant Value'
         */
        (void)Rte_Write_VeCOUB_Cnt_RadrFanCtrlSTG_MFOP_Value((uint16)0U);
    }
    else if (COUB_ac_DW.UnitDelay_DSTATE_mb)
    {
        /* MinMax: '<S224>/Minimum2' incorporates:
         *  Switch: '<S230>/Switch1'
         */
        if (VeCOUB_Cnt_STGFailLimRadrFanCtrl >
                rtb_TmpSignalConversionAtVeNVMB_Cnt_Ra_m)
        {
            /* Outport: '<Root>/VeCOUB_Cnt_RadrFanCtrlSTG_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_RadrFanCtrlSTG_MFOP_Value
                (VeCOUB_Cnt_STGFailLimRadrFanCtrl);
        }
        else
        {
            /* Outport: '<Root>/VeCOUB_Cnt_RadrFanCtrlSTG_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_RadrFanCtrlSTG_MFOP_Value
                (rtb_TmpSignalConversionAtVeNVMB_Cnt_Ra_m);
        }

        /* End of MinMax: '<S224>/Minimum2' */
    }
    else
    {
        /* Outport: '<Root>/VeCOUB_Cnt_RadrFanCtrlSTG_MFOP' incorporates:
         *  Switch: '<S230>/Switch1'
         */
        (void)Rte_Write_VeCOUB_Cnt_RadrFanCtrlSTG_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB_Cnt_Ra_m);
    }

    /* End of Switch: '<S231>/Switch1' */

    /* RelationalOperator: '<S236>/Relational Operator3' incorporates:
     *  Constant: '<S236>/Constant3'
     *  S-Function (sfix_bitop): '<S236>/Bitwise Operator2'
     */
    rtb_NOT4_lj = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Stat_c) & 64U) ==
                   0U);

    /* Outputs for Atomic SubSystem: '<S236>/EdgeFalling1' */
    /* Logic: '<S236>/Logical Operator' incorporates:
     *  Logic: '<S238>/OR1'
     */
    rtb_Logical1_gc = !rtb_NOT4_lj;

    /* End of Outputs for SubSystem: '<S236>/EdgeFalling1' */

    /* Logic: '<S236>/Logical1' incorporates:
     *  Constant: '<S234>/Calib'
     *  Constant: '<S235>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S236>/Constant1'
     *  Logic: '<S192>/Logical Operator'
     *  Logic: '<S236>/Logical Operator'
     *  Logic: '<S236>/Logical10'
     *  Logic: '<S236>/Logical12'
     *  RelationalOperator: '<S236>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S236>/Bitwise Operator3'
     */
    rtb_RelationalOperator3_h = ((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
        (KeCOUB_b_OCDiagEnbl_RadrFanCtrl)) && ((!KeCOUB_b_LtchEnblOCRadrFanCtrl)
        || (((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Stat_c) & 1U) == 0U) ||
            rtb_Logical1_gc)));

    /* Outputs for Atomic SubSystem: '<S236>/EdgeFalling1' */
    /* Logic: '<S238>/AND' incorporates:
     *  UnitDelay: '<S238>/Unit Delay'
     */
    rtb_Logical1_gc = (rtb_Logical1_gc && (COUB_ac_DW.UnitDelay_DSTATE_ji));

    /* Update for UnitDelay: '<S238>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_ji = rtb_NOT4_lj;

    /* End of Outputs for SubSystem: '<S236>/EdgeFalling1' */

    /* Logic: '<S236>/Logical5' */
    rtb_NOT4_k = (rtb_NOT4_k || rtb_Logical1_gc);

    /* UnitDelay: '<S237>/Unit Delay1' incorporates:
     *  UnitDelay: '<S199>/Unit Delay'
     */
    COUB_ac_DW.UnitDelay_DSTATE_nd = COUB_ac_DW.UnitDelay1_DSTATE_h;

    /* Outputs for Atomic SubSystem: '<S237>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S237>/Counter Reset  Enabled ' */
    /* Switch: '<S244>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_RadrFanCtrlFltCircDtctd_CircOpen'
     *  Logic: '<S237>/Fail Counter Reset'
     *  Switch: '<S245>/Switch1'
     *  UnitDelay: '<S199>/Unit Delay'
     *  UnitDelay: '<S237>/Unit Delay'
     */
    if ((rtb_NOT4_k || (COUB_ac_DW.UnitDelay_DSTATE_gml)) ||
            (COUB_ac_DW.UnitDelay_DSTATE_nd))
    {
        /* Switch: '<S244>/Switch1' incorporates:
         *  Constant: '<S244>/Constant Value2'
         */
        VeCOUB_Cnt_OCFailLimRadrFanCtrl = 0U;

        /* Switch: '<S245>/Switch1' incorporates:
         *  Constant: '<S245>/Constant Value2'
         */
        VeCOUB_Cnt_OCSmplLimRadrFanCtrl = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_RadrFanCtrlFltCircDtctd_CircOpen(&tmpRead_8);

        /* Switch: '<S244>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_RadrFanCtrlFltCircDtctd_CircOpen'
         *  Logic: '<S192>/Logical Operator1'
         *  Logic: '<S237>/NOT6'
         */
        if (rtb_RelationalOperator3_h && ((((sint32)tmpRead_8.CircOpen) != 0) &&
             rtb_TmpSignalConversionAtVeDIOR_RadrFanC))
        {
            /* Switch: '<S244>/Switch1' incorporates:
             *  Constant: '<S244>/Constant Value1'
             *  Sum: '<S244>/Subtraction'
             *  Switch: '<S244>/Switch2'
             *  UnitDelay: '<S244>/Unit Delay'
             */
            VeCOUB_Cnt_OCFailLimRadrFanCtrl = (uint16)(((uint32)
                VeCOUB_Cnt_OCFailLimRadrFanCtrl) + 1U);
        }

        /* End of Switch: '<S244>/Switch2' */

        /* Switch: '<S245>/Switch2' */
        if (rtb_RelationalOperator3_h)
        {
            /* Switch: '<S245>/Switch1' incorporates:
             *  Constant: '<S245>/Constant Value1'
             *  Sum: '<S245>/Subtraction'
             *  Switch: '<S245>/Switch2'
             *  UnitDelay: '<S245>/Unit Delay'
             */
            VeCOUB_Cnt_OCSmplLimRadrFanCtrl = (uint16)(((uint32)
                VeCOUB_Cnt_OCSmplLimRadrFanCtrl) + 1U);
        }

        /* End of Switch: '<S245>/Switch2' */
    }

    /* End of Switch: '<S244>/Switch1' */
    /* End of Outputs for SubSystem: '<S237>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S237>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S237>/Greater Than or Equal ' incorporates:
     *  Constant: '<S232>/Calib'
     */
    COUB_ac_DW.UnitDelay1_DSTATE_h = (VeCOUB_Cnt_OCFailLimRadrFanCtrl >=
        KeCOUB_Cnt_OCFailLimRadrFanCtrl);

    /* Logic: '<S237>/NOT5' incorporates:
     *  Constant: '<S233>/Calib'
     *  Logic: '<S237>/NOT3'
     *  RelationalOperator: '<S237>/Less Than  or Equal'
     */
    COUB_ac_DW.UnitDelay_DSTATE_gml = ((VeCOUB_Cnt_OCSmplLimRadrFanCtrl >=
        KeCOUB_Cnt_OCSmplLimRadrFanCtrl) && (!COUB_ac_DW.UnitDelay1_DSTATE_h));

    /* Outputs for Enabled SubSystem: '<S236>/Fail' */
    COUB_ac_Fail(COUB_ac_DW.UnitDelay1_DSTATE_h, &COUB_ac_B.Merge_eg);

    /* End of Outputs for SubSystem: '<S236>/Fail' */

    /* Outputs for Enabled SubSystem: '<S236>/Init' */
    COUB_ac_Init_i(rtb_NOT4_k, &COUB_ac_B.Merge_eg);

    /* End of Outputs for SubSystem: '<S236>/Init' */

    /* Outputs for Enabled SubSystem: '<S236>/Pass' */
    COUB_ac_Pass(COUB_ac_DW.UnitDelay_DSTATE_gml, &COUB_ac_B.Merge_eg);

    /* End of Outputs for SubSystem: '<S236>/Pass' */

    /* RelationalOperator: '<S236>/Relational Operator' incorporates:
     *  Constant: '<S239>/Constant'
     *  Merge: '<S236>/Merge'
     */
    COUB_ac_B.RelationalOperator_pb = (((uint32)COUB_ac_B.Merge_eg) ==
        CeDFIB_e_Fail);

    /* Switch: '<S250>/Switch1' incorporates:
     *  Switch: '<S249>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        /* Outport: '<Root>/VeCOUB_Cnt_RadrFanCtrlOC_MFOP' incorporates:
         *  Constant: '<S243>/Constant Value'
         */
        (void)Rte_Write_VeCOUB_Cnt_RadrFanCtrlOC_MFOP_Value((uint16)0U);
    }
    else if (COUB_ac_DW.UnitDelay_DSTATE_gml)
    {
        /* MinMax: '<S243>/Minimum2' incorporates:
         *  Switch: '<S249>/Switch1'
         */
        if (VeCOUB_Cnt_OCFailLimRadrFanCtrl >
                rtb_TmpSignalConversionAtVeNVMB_Cnt_Radr)
        {
            /* Outport: '<Root>/VeCOUB_Cnt_RadrFanCtrlOC_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_RadrFanCtrlOC_MFOP_Value
                (VeCOUB_Cnt_OCFailLimRadrFanCtrl);
        }
        else
        {
            /* Outport: '<Root>/VeCOUB_Cnt_RadrFanCtrlOC_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_RadrFanCtrlOC_MFOP_Value
                (rtb_TmpSignalConversionAtVeNVMB_Cnt_Radr);
        }

        /* End of MinMax: '<S243>/Minimum2' */
    }
    else
    {
        /* Outport: '<Root>/VeCOUB_Cnt_RadrFanCtrlOC_MFOP' incorporates:
         *  Switch: '<S249>/Switch1'
         */
        (void)Rte_Write_VeCOUB_Cnt_RadrFanCtrlOC_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB_Cnt_Radr);
    }

    /* End of Switch: '<S250>/Switch1' */
    /* End of Outputs for SubSystem: '<S83>/RadFan' */

    /* Inport: '<Root>/VeFSCR_Pct_RadFanCmd' */
    (void)Rte_Read_VeFSCR_Pct_RadFanCmd_Value(&tmpRead);

    /* Outputs for Atomic SubSystem: '<S83>/RadFan' */
    /* Switch: '<S189>/Switch' incorporates:
     *  Constant: '<S252>/Calib'
     */
    if (KeCOUB_b_RadFanDCBypEnbl)
    {
        /* FunctionCaller: '<S187>/SetDIOR_e_RadrFanCtrl_SetDIOR_PWM_DC' */
        Rte_Call_SetDIOR_e_RadrFanCtrl_SetDIOR_PWM_DC(KeCOUB_Pct_RadFanDCByp);
    }
    else
    {
        /* FunctionCaller: '<S187>/SetDIOR_e_RadrFanCtrl_SetDIOR_PWM_DC' */
        Rte_Call_SetDIOR_e_RadrFanCtrl_SetDIOR_PWM_DC(tmpRead);
    }

    /* End of Switch: '<S189>/Switch' */

    /* Update for UnitDelay: '<S199>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_nd = rtb_TmpSignalConversionAtVeDIOR_Spare4Ls;

    /* End of Outputs for SubSystem: '<S83>/RadFan' */
    /* End of Outputs for SubSystem: '<S76>/RadFan' */
#endif

#if Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

    /* Outputs for Atomic SubSystem: '<S76>/ThermSysEnbl' */
    /* Outputs for Atomic SubSystem: '<S84>/ThermSysEnbl' */

    /* RelationalOperator: '<S263>/Relational Operator3' incorporates:
     *  Constant: '<S263>/Constant3'
     *  S-Function (sfix_bitop): '<S263>/Bitwise Operator2'
     */
    rtb_NOT4_k = ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Sta_dy) & 64U) ==
                  0U);

    /* Outputs for Atomic SubSystem: '<S263>/EdgeFalling1' */
    /* Logic: '<S263>/Logical Operator' incorporates:
     *  Logic: '<S265>/OR1'
     */
    rtb_TmpSignalConversionAtVeDIOR_Spare4Ls = !rtb_NOT4_k;

    /* End of Outputs for SubSystem: '<S263>/EdgeFalling1' */

    /* Logic: '<S263>/Logical1' incorporates:
     *  Constant: '<S261>/Calib'
     *  Constant: '<S262>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S263>/Constant1'
     *  Logic: '<S257>/Logical Operator'
     *  Logic: '<S263>/Logical Operator'
     *  Logic: '<S263>/Logical10'
     *  Logic: '<S263>/Logical12'
     *  RelationalOperator: '<S263>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S263>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeDIOR_RadrFanC =
        ((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
          (KeCOUB_b_FltDtctnDiagEnblThermSysEnbl)) &&
         ((!KeCOUB_b_LtchEnblThermSysEnbl) || (((((uint32)
              rtb_TmpSignalConversionAtVeDMAB_y_Sta_dy) & 1U) == 0U) ||
           rtb_TmpSignalConversionAtVeDIOR_Spare4Ls)));

    /* Outputs for Atomic SubSystem: '<S263>/EdgeFalling1' */
    /* Logic: '<S265>/AND' incorporates:
     *  UnitDelay: '<S265>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDIOR_Spare4Ls =
        (rtb_TmpSignalConversionAtVeDIOR_Spare4Ls &&
         (COUB_ac_DW.UnitDelay_DSTATE_h04));

    /* Update for UnitDelay: '<S265>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_h04 = rtb_NOT4_k;

    /* End of Outputs for SubSystem: '<S263>/EdgeFalling1' */

    /* Logic: '<S263>/Logical5' incorporates:
     *  Logic: '<S258>/NOT4'
     */
    rtb_NOT4_k = ((rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
                   rtb_TmpSignalConversionAtVeDFIR_b_PostCo) ||
                  rtb_TmpSignalConversionAtVeDIOR_Spare4Ls);

    /* Outputs for Atomic SubSystem: '<S264>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S264>/Counter Reset  Enabled ' */
    /* Switch: '<S271>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_ThermSysEnblDiagCmn_b_FailrPrsnt'
     *  Logic: '<S264>/Fail Counter Reset'
     *  Switch: '<S272>/Switch1'
     *  UnitDelay: '<S264>/Unit Delay'
     *  UnitDelay: '<S264>/Unit Delay1'
     */
    if ((rtb_NOT4_k || (COUB_ac_DW.UnitDelay_DSTATE_gm)) ||
            (COUB_ac_DW.UnitDelay1_DSTATE_p))
    {
        /* Switch: '<S271>/Switch1' incorporates:
         *  Constant: '<S271>/Constant Value2'
         */
        VeCOUB_Cnt_FltDtctnFailLimThermSysEnbl = 0U;

        /* Switch: '<S272>/Switch1' incorporates:
         *  Constant: '<S272>/Constant Value2'
         */
        VeCOUB_Cnt_FltDtctnSmplLimThermSysEnbl = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_ThermSysEnblDiagCmn_b_FailrPrsnt
            (&rtb_RelationalOperator3);

        /* Switch: '<S271>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_ThermSysEnblDiagCmn_b_FailrPrsnt'
         *  Logic: '<S264>/NOT6'
         */
        if (rtb_TmpSignalConversionAtVeDIOR_RadrFanC && rtb_RelationalOperator3)
        {
            /* Switch: '<S271>/Switch1' incorporates:
             *  Constant: '<S271>/Constant Value1'
             *  Sum: '<S271>/Subtraction'
             *  Switch: '<S271>/Switch2'
             *  UnitDelay: '<S271>/Unit Delay'
             */
            VeCOUB_Cnt_FltDtctnFailLimThermSysEnbl = (uint16)(((uint32)
                VeCOUB_Cnt_FltDtctnFailLimThermSysEnbl) + 1U);
        }

        /* End of Switch: '<S271>/Switch2' */

        /* Switch: '<S272>/Switch2' */
        if (rtb_TmpSignalConversionAtVeDIOR_RadrFanC)
        {
            /* Switch: '<S272>/Switch1' incorporates:
             *  Constant: '<S272>/Constant Value1'
             *  Sum: '<S272>/Subtraction'
             *  Switch: '<S272>/Switch2'
             *  UnitDelay: '<S272>/Unit Delay'
             */
            VeCOUB_Cnt_FltDtctnSmplLimThermSysEnbl = (uint16)(((uint32)
                VeCOUB_Cnt_FltDtctnSmplLimThermSysEnbl) + 1U);
        }

        /* End of Switch: '<S272>/Switch2' */
    }

    /* End of Switch: '<S271>/Switch1' */
    /* End of Outputs for SubSystem: '<S264>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S264>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S264>/Greater Than or Equal ' incorporates:
     *  Constant: '<S259>/Calib'
     */
    COUB_ac_DW.UnitDelay1_DSTATE_p = (VeCOUB_Cnt_FltDtctnFailLimThermSysEnbl >=
        KeCOUB_Cnt_FltDtctnSmplLimThermSysEnbl);

    /* Logic: '<S264>/NOT5' incorporates:
     *  Constant: '<S260>/Calib'
     *  Logic: '<S264>/NOT3'
     *  RelationalOperator: '<S264>/Less Than  or Equal'
     */
    COUB_ac_DW.UnitDelay_DSTATE_gm = ((VeCOUB_Cnt_FltDtctnSmplLimThermSysEnbl >=
        KeCOUB_Cnt_FltDtctnFailLimThermSysEnbl) &&
        (!COUB_ac_DW.UnitDelay1_DSTATE_p));

    /* Outputs for Enabled SubSystem: '<S263>/Fail' */
    COUB_ac_Fail(COUB_ac_DW.UnitDelay1_DSTATE_p, &COUB_ac_B.Merge_d);

    /* End of Outputs for SubSystem: '<S263>/Fail' */

    /* Outputs for Enabled SubSystem: '<S263>/Init' */
    COUB_ac_Init_i(rtb_NOT4_k, &COUB_ac_B.Merge_d);

    /* End of Outputs for SubSystem: '<S263>/Init' */

    /* Outputs for Enabled SubSystem: '<S263>/Pass' */
    COUB_ac_Pass(COUB_ac_DW.UnitDelay_DSTATE_gm, &COUB_ac_B.Merge_d);

    /* End of Outputs for SubSystem: '<S263>/Pass' */

    /* RelationalOperator: '<S263>/Relational Operator' incorporates:
     *  Constant: '<S266>/Constant'
     *  Merge: '<S263>/Merge'
     */
    COUB_ac_B.RelationalOperator_hw = (((uint32)COUB_ac_B.Merge_d) ==
        CeDFIB_e_Fail);

    /* Switch: '<S277>/Switch1' incorporates:
     *  Switch: '<S276>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        /* Outport: '<Root>/VeCOUB_Cnt_ThermSysEnbl_MFOP' incorporates:
         *  Constant: '<S270>/Constant Value'
         */
        (void)Rte_Write_VeCOUB_Cnt_ThermSysEnbl_MFOP_Value((uint16)0U);
    }
    else if (COUB_ac_DW.UnitDelay_DSTATE_gm)
    {
        /* MinMax: '<S270>/Minimum2' incorporates:
         *  Switch: '<S276>/Switch1'
         */
        if (VeCOUB_Cnt_FltDtctnFailLimThermSysEnbl >
                rtb_TmpSignalConversionAtVeNVMB_Cnt_Ther)
        {
            /* Outport: '<Root>/VeCOUB_Cnt_ThermSysEnbl_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_ThermSysEnbl_MFOP_Value
                (VeCOUB_Cnt_FltDtctnFailLimThermSysEnbl);
        }
        else
        {
            /* Outport: '<Root>/VeCOUB_Cnt_ThermSysEnbl_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_ThermSysEnbl_MFOP_Value
                (rtb_TmpSignalConversionAtVeNVMB_Cnt_Ther);
        }

        /* End of MinMax: '<S270>/Minimum2' */
    }
    else
    {
        /* Outport: '<Root>/VeCOUB_Cnt_ThermSysEnbl_MFOP' incorporates:
         *  Switch: '<S276>/Switch1'
         */
        (void)Rte_Write_VeCOUB_Cnt_ThermSysEnbl_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB_Cnt_Ther);
    }

    /* End of Switch: '<S277>/Switch1' */

    /* Switch: '<S255>/Switch' incorporates:
     *  Constant: '<S279>/Calib'
     *  Constant: '<S280>/Calib'
     *  Switch: '<S281>/Switch'
     */
    if (KeCOUB_b_ThermSysEnblBypEnbl)
    {
        /* FunctionCaller: '<S253>/SetDIOR_b_ThermSysEnbl_St' */
        Rte_Call_SetDIOR_b_ThermSysEnbl_St(KeCOUB_b_ThermSysEnblByp);
    }
    else
    {
        if (KeCOUB_b_ThermSysEnblPolarInvEnb)
        {
            /* Switch: '<S281>/Switch' incorporates:
             *  Logic: '<S256>/Logical Operator'
             */
            rtb_TmpSignalConversionAtVeAPMR_b_EnblTh =
                !rtb_TmpSignalConversionAtVeAPMR_b_EnblTh;
        }

        /* FunctionCaller: '<S253>/SetDIOR_b_ThermSysEnbl_St' */
        Rte_Call_SetDIOR_b_ThermSysEnbl_St
            (rtb_TmpSignalConversionAtVeAPMR_b_EnblTh);
    }

    /* End of Switch: '<S255>/Switch' */

    /* End of Outputs for SubSystem: '<S84>/ThermSysEnbl' */
    /* End of Outputs for SubSystem: '<S76>/ThermSysEnbl' */
#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

    /* Outputs for Atomic SubSystem: '<S76>/ePTWakeUpEnbl' */
    /* Outputs for Atomic SubSystem: '<S85>/ePTWakeUpEnbl' */

    /* RelationalOperator: '<S294>/Relational Operator3' incorporates:
     *  Constant: '<S294>/Constant3'
     *  S-Function (sfix_bitop): '<S294>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Sta_dz) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S294>/EdgeFalling1' */
    /* Logic: '<S294>/Logical Operator' incorporates:
     *  Logic: '<S296>/OR1'
     */
    rtb_TmpSignalConversionAtVeDIOR_RadrFanC = !rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S294>/EdgeFalling1' */

    /* Logic: '<S294>/Logical1' incorporates:
     *  Constant: '<S292>/Calib'
     *  Constant: '<S293>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S294>/Constant1'
     *  Logic: '<S286>/Logical Operator'
     *  Logic: '<S294>/Logical Operator'
     *  Logic: '<S294>/Logical10'
     *  Logic: '<S294>/Logical12'
     *  RelationalOperator: '<S294>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S294>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeAPMR_b_EnblTh =
        ((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
          (KeCOUB_b_STBDiagEnbl_ePTWakeUpEnbl)) &&
         ((!KeCOUB_b_LtchEnblSTBePTWakeUpEnbl) || (((((uint32)
              rtb_TmpSignalConversionAtVeDMAB_y_Sta_dz) & 1U) == 0U) ||
           rtb_TmpSignalConversionAtVeDIOR_RadrFanC)));

    /* Logic: '<S289>/NOT4' */
    rtb_TmpSignalConversionAtVeDFIR_b_DsblDi =
        (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
         rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Outputs for Atomic SubSystem: '<S294>/EdgeFalling1' */
    /* Logic: '<S296>/AND' incorporates:
     *  UnitDelay: '<S296>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDIOR_RadrFanC =
        (rtb_TmpSignalConversionAtVeDIOR_RadrFanC &&
         (COUB_ac_DW.UnitDelay_DSTATE_mi));

    /* Update for UnitDelay: '<S296>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_mi = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S294>/EdgeFalling1' */

    /* Logic: '<S294>/Logical5' */
    rtb_RelationalOperator3 = (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
        rtb_TmpSignalConversionAtVeDIOR_RadrFanC);

    /* Outputs for Atomic SubSystem: '<S295>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S295>/Counter Reset  Enabled ' */
    /* Switch: '<S302>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_ePTWUpEnblFltCircDtctd_CircShoHi'
     *  Logic: '<S295>/Fail Counter Reset'
     *  Switch: '<S303>/Switch1'
     *  UnitDelay: '<S295>/Unit Delay'
     *  UnitDelay: '<S295>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3 || (COUB_ac_DW.UnitDelay_DSTATE_go)) ||
            (COUB_ac_DW.UnitDelay1_DSTATE))
    {
        /* Switch: '<S302>/Switch1' incorporates:
         *  Constant: '<S302>/Constant Value2'
         */
        VeCOUB_Cnt_STBFailLimePTWakeUpEnbl = 0U;

        /* Switch: '<S303>/Switch1' incorporates:
         *  Constant: '<S303>/Constant Value2'
         */
        VeCOUB_Cnt_STBSmplLimePTWakeUpEnbl = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_ePTWUpEnblFltCircDtctd_CircShoHi(&tmpRead_4);

        /* Switch: '<S302>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_ePTWUpEnblFltCircDtctd_CircShoHi'
         *  Logic: '<S286>/Logical Operator1'
         *  Logic: '<S295>/NOT6'
         */
        if (rtb_TmpSignalConversionAtVeAPMR_b_EnblTh && ((((sint32)
                tmpRead_4.CircShoHi) != 0) &&
                rtb_TmpSignalConversionAtVeDIOR_ePTWakeU))
        {
            /* Switch: '<S302>/Switch1' incorporates:
             *  Constant: '<S302>/Constant Value1'
             *  Sum: '<S302>/Subtraction'
             *  Switch: '<S302>/Switch2'
             *  UnitDelay: '<S302>/Unit Delay'
             */
            VeCOUB_Cnt_STBFailLimePTWakeUpEnbl = (uint16)(((uint32)
                VeCOUB_Cnt_STBFailLimePTWakeUpEnbl) + 1U);
        }

        /* End of Switch: '<S302>/Switch2' */

        /* Switch: '<S303>/Switch2' */
        if (rtb_TmpSignalConversionAtVeAPMR_b_EnblTh)
        {
            /* Switch: '<S303>/Switch1' incorporates:
             *  Constant: '<S303>/Constant Value1'
             *  Sum: '<S303>/Subtraction'
             *  Switch: '<S303>/Switch2'
             *  UnitDelay: '<S303>/Unit Delay'
             */
            VeCOUB_Cnt_STBSmplLimePTWakeUpEnbl = (uint16)(((uint32)
                VeCOUB_Cnt_STBSmplLimePTWakeUpEnbl) + 1U);
        }

        /* End of Switch: '<S303>/Switch2' */
    }

    /* End of Switch: '<S302>/Switch1' */
    /* End of Outputs for SubSystem: '<S295>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S295>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S295>/Greater Than or Equal ' incorporates:
     *  Constant: '<S290>/Calib'
     */
    COUB_ac_DW.UnitDelay1_DSTATE = (VeCOUB_Cnt_STBFailLimePTWakeUpEnbl >=
        KeCOUB_Cnt_STBFailLimePTWakeUpEnbl);

    /* Logic: '<S295>/NOT5' incorporates:
     *  Constant: '<S291>/Calib'
     *  Logic: '<S295>/NOT3'
     *  RelationalOperator: '<S295>/Less Than  or Equal'
     */
    rtb_TmpSignalConversionAtVeAPMR_b_EnblTh =
        ((VeCOUB_Cnt_STBSmplLimePTWakeUpEnbl >=
          KeCOUB_Cnt_STBSmplLimePTWakeUpEnbl) && (!COUB_ac_DW.UnitDelay1_DSTATE));

    /* Outputs for Enabled SubSystem: '<S294>/Fail' */
    COUB_ac_Fail(COUB_ac_DW.UnitDelay1_DSTATE, &COUB_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S294>/Fail' */

    /* Outputs for Enabled SubSystem: '<S294>/Init' */
    COUB_ac_Init_i(rtb_RelationalOperator3, &COUB_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S294>/Init' */

    /* Outputs for Enabled SubSystem: '<S294>/Pass' */
    COUB_ac_Pass(rtb_TmpSignalConversionAtVeAPMR_b_EnblTh, &COUB_ac_B.Merge_n);

    /* End of Outputs for SubSystem: '<S294>/Pass' */

    /* RelationalOperator: '<S294>/Relational Operator' incorporates:
     *  Constant: '<S297>/Constant'
     *  Merge: '<S294>/Merge'
     */
    COUB_ac_B.RelationalOperator = (((uint32)COUB_ac_B.Merge_n) == CeDFIB_e_Fail);

    /* Switch: '<S308>/Switch1' incorporates:
     *  Switch: '<S307>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        /* Outport: '<Root>/VeCOUB_Cnt_ePTWakeUpEnblSTB_MFOP' incorporates:
         *  Constant: '<S301>/Constant Value'
         */
        (void)Rte_Write_VeCOUB_Cnt_ePTWakeUpEnblSTB_MFOP_Value((uint16)0U);
    }
    else if (rtb_TmpSignalConversionAtVeAPMR_b_EnblTh)
    {
        /* MinMax: '<S301>/Minimum2' incorporates:
         *  Switch: '<S307>/Switch1'
         */
        if (VeCOUB_Cnt_STBFailLimePTWakeUpEnbl >
                rtb_TmpSignalConversionAtVeNVMB_Cnt_eP_b)
        {
            /* Outport: '<Root>/VeCOUB_Cnt_ePTWakeUpEnblSTB_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_ePTWakeUpEnblSTB_MFOP_Value
                (VeCOUB_Cnt_STBFailLimePTWakeUpEnbl);
        }
        else
        {
            /* Outport: '<Root>/VeCOUB_Cnt_ePTWakeUpEnblSTB_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_ePTWakeUpEnblSTB_MFOP_Value
                (rtb_TmpSignalConversionAtVeNVMB_Cnt_eP_b);
        }

        /* End of MinMax: '<S301>/Minimum2' */
    }
    else
    {
        /* Outport: '<Root>/VeCOUB_Cnt_ePTWakeUpEnblSTB_MFOP' incorporates:
         *  Switch: '<S307>/Switch1'
         */
        (void)Rte_Write_VeCOUB_Cnt_ePTWakeUpEnblSTB_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB_Cnt_eP_b);
    }

    /* End of Switch: '<S308>/Switch1' */

    /* RelationalOperator: '<S313>/Relational Operator3' incorporates:
     *  Constant: '<S313>/Constant3'
     *  S-Function (sfix_bitop): '<S313>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeDIOR_RadrFanC = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_m) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S313>/EdgeFalling1' */
    /* Logic: '<S313>/Logical Operator' incorporates:
     *  Logic: '<S315>/OR1'
     */
    rtb_NOT4_k = !rtb_TmpSignalConversionAtVeDIOR_RadrFanC;

    /* End of Outputs for SubSystem: '<S313>/EdgeFalling1' */

    /* Logic: '<S313>/Logical1' incorporates:
     *  Constant: '<S311>/Calib'
     *  Constant: '<S312>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S313>/Constant1'
     *  Logic: '<S287>/Logical Operator'
     *  Logic: '<S313>/Logical Operator'
     *  Logic: '<S313>/Logical10'
     *  Logic: '<S313>/Logical12'
     *  RelationalOperator: '<S313>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S313>/Bitwise Operator3'
     */
    rtb_RelationalOperator3 = ((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
        (KeCOUB_b_STGDiagEnbl_ePTWakeUpEnbl)) &&
        ((!KeCOUB_b_LtchEnblSTGePTWakeUpEnbl) || (((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Stat_m) & 1U) == 0U) || rtb_NOT4_k)));

    /* Outputs for Atomic SubSystem: '<S313>/EdgeFalling1' */
    /* Logic: '<S315>/AND' incorporates:
     *  UnitDelay: '<S315>/Unit Delay'
     */
    rtb_NOT4_k = (rtb_NOT4_k && (COUB_ac_DW.UnitDelay_DSTATE_h0));

    /* Update for UnitDelay: '<S315>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_h0 = rtb_TmpSignalConversionAtVeDIOR_RadrFanC;

    /* End of Outputs for SubSystem: '<S313>/EdgeFalling1' */

    /* Logic: '<S313>/Logical5' */
    rtb_TmpSignalConversionAtVeDIOR_RadrFanC =
        (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi || rtb_NOT4_k);

    /* UnitDelay: '<S314>/Unit Delay1' incorporates:
     *  UnitDelay: '<S295>/Unit Delay'
     */
    COUB_ac_DW.UnitDelay_DSTATE_go = COUB_ac_DW.UnitDelay1_DSTATE_g;

    /* Outputs for Atomic SubSystem: '<S314>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S314>/Counter Reset  Enabled ' */
    /* Switch: '<S321>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_ePTWUpEnblFltCircDtctd_CircShoLo'
     *  Logic: '<S314>/Fail Counter Reset'
     *  Switch: '<S322>/Switch1'
     *  UnitDelay: '<S295>/Unit Delay'
     *  UnitDelay: '<S314>/Unit Delay'
     */
    if ((rtb_TmpSignalConversionAtVeDIOR_RadrFanC ||
            (COUB_ac_DW.UnitDelay_DSTATE_f3)) || (COUB_ac_DW.UnitDelay_DSTATE_go))
    {
        /* Switch: '<S321>/Switch1' incorporates:
         *  Constant: '<S321>/Constant Value2'
         */
        VeCOUB_Cnt_STGFailLimePTWakeUpEnbl = 0U;

        /* Switch: '<S322>/Switch1' incorporates:
         *  Constant: '<S322>/Constant Value2'
         */
        VeCOUB_Cnt_STGSmplLimePTWakeUpEnbl = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_ePTWUpEnblFltCircDtctd_CircShoLo(&tmpRead_3);

        /* Switch: '<S321>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_ePTWUpEnblFltCircDtctd_CircShoLo'
         *  Logic: '<S287>/Logical Operator1'
         *  Logic: '<S314>/NOT6'
         */
        if (rtb_RelationalOperator3 && ((((sint32)tmpRead_3.CircShoLo) != 0) &&
                rtb_TmpSignalConversionAtVeDIOR_ePTWakeU))
        {
            /* Switch: '<S321>/Switch1' incorporates:
             *  Constant: '<S321>/Constant Value1'
             *  Sum: '<S321>/Subtraction'
             *  Switch: '<S321>/Switch2'
             *  UnitDelay: '<S321>/Unit Delay'
             */
            VeCOUB_Cnt_STGFailLimePTWakeUpEnbl = (uint16)(((uint32)
                VeCOUB_Cnt_STGFailLimePTWakeUpEnbl) + 1U);
        }

        /* End of Switch: '<S321>/Switch2' */

        /* Switch: '<S322>/Switch2' */
        if (rtb_RelationalOperator3)
        {
            /* Switch: '<S322>/Switch1' incorporates:
             *  Constant: '<S322>/Constant Value1'
             *  Sum: '<S322>/Subtraction'
             *  Switch: '<S322>/Switch2'
             *  UnitDelay: '<S322>/Unit Delay'
             */
            VeCOUB_Cnt_STGSmplLimePTWakeUpEnbl = (uint16)(((uint32)
                VeCOUB_Cnt_STGSmplLimePTWakeUpEnbl) + 1U);
        }

        /* End of Switch: '<S322>/Switch2' */
    }

    /* End of Switch: '<S321>/Switch1' */
    /* End of Outputs for SubSystem: '<S314>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S314>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S314>/Greater Than or Equal ' incorporates:
     *  Constant: '<S309>/Calib'
     */
    COUB_ac_DW.UnitDelay1_DSTATE_g = (VeCOUB_Cnt_STGFailLimePTWakeUpEnbl >=
        KeCOUB_Cnt_STGFailLimePTWakeUpEnbl);

    /* Logic: '<S314>/NOT5' incorporates:
     *  Constant: '<S310>/Calib'
     *  Logic: '<S314>/NOT3'
     *  RelationalOperator: '<S314>/Less Than  or Equal'
     */
    COUB_ac_DW.UnitDelay_DSTATE_f3 = ((VeCOUB_Cnt_STGSmplLimePTWakeUpEnbl >=
        KeCOUB_Cnt_STGSmplLimePTWakeUpEnbl) && (!COUB_ac_DW.UnitDelay1_DSTATE_g));

    /* Outputs for Enabled SubSystem: '<S313>/Fail' */
    COUB_ac_Fail(COUB_ac_DW.UnitDelay1_DSTATE_g, &COUB_ac_B.Merge_c);

    /* End of Outputs for SubSystem: '<S313>/Fail' */

    /* Outputs for Enabled SubSystem: '<S313>/Init' */
    COUB_ac_Init_i(rtb_TmpSignalConversionAtVeDIOR_RadrFanC, &COUB_ac_B.Merge_c);

    /* End of Outputs for SubSystem: '<S313>/Init' */

    /* Outputs for Enabled SubSystem: '<S313>/Pass' */
    COUB_ac_Pass(COUB_ac_DW.UnitDelay_DSTATE_f3, &COUB_ac_B.Merge_c);

    /* End of Outputs for SubSystem: '<S313>/Pass' */

    /* RelationalOperator: '<S313>/Relational Operator' incorporates:
     *  Constant: '<S316>/Constant'
     *  Merge: '<S313>/Merge'
     */
    COUB_ac_B.RelationalOperator_h = (((uint32)COUB_ac_B.Merge_c) ==
        CeDFIB_e_Fail);

    /* Switch: '<S327>/Switch1' incorporates:
     *  Switch: '<S326>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        /* Outport: '<Root>/VeCOUB_Cnt_ePTWakeUpEnblSTG_MFOP' incorporates:
         *  Constant: '<S320>/Constant Value'
         */
        (void)Rte_Write_VeCOUB_Cnt_ePTWakeUpEnblSTG_MFOP_Value((uint16)0U);
    }
    else if (COUB_ac_DW.UnitDelay_DSTATE_f3)
    {
        /* MinMax: '<S320>/Minimum2' incorporates:
         *  Switch: '<S326>/Switch1'
         */
        if (VeCOUB_Cnt_STGFailLimePTWakeUpEnbl >
                rtb_TmpSignalConversionAtVeNVMB_Cnt_eP_d)
        {
            /* Outport: '<Root>/VeCOUB_Cnt_ePTWakeUpEnblSTG_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_ePTWakeUpEnblSTG_MFOP_Value
                (VeCOUB_Cnt_STGFailLimePTWakeUpEnbl);
        }
        else
        {
            /* Outport: '<Root>/VeCOUB_Cnt_ePTWakeUpEnblSTG_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_ePTWakeUpEnblSTG_MFOP_Value
                (rtb_TmpSignalConversionAtVeNVMB_Cnt_eP_d);
        }

        /* End of MinMax: '<S320>/Minimum2' */
    }
    else
    {
        /* Outport: '<Root>/VeCOUB_Cnt_ePTWakeUpEnblSTG_MFOP' incorporates:
         *  Switch: '<S326>/Switch1'
         */
        (void)Rte_Write_VeCOUB_Cnt_ePTWakeUpEnblSTG_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB_Cnt_eP_d);
    }

    /* End of Switch: '<S327>/Switch1' */

    /* RelationalOperator: '<S332>/Relational Operator3' incorporates:
     *  Constant: '<S332>/Constant3'
     *  S-Function (sfix_bitop): '<S332>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S332>/EdgeFalling1' */
    /* Logic: '<S332>/Logical Operator' incorporates:
     *  Logic: '<S334>/OR1'
     */
    rtb_TmpSignalConversionAtVeDIOR_RadrFanC = !rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S332>/EdgeFalling1' */

    /* Logic: '<S332>/Logical1' incorporates:
     *  Constant: '<S330>/Calib'
     *  Constant: '<S331>/KeADIB_Cnt_STGSmplLimWED_Pwm_PosnSns1'
     *  Constant: '<S332>/Constant1'
     *  Logic: '<S288>/Logical Operator'
     *  Logic: '<S332>/Logical Operator'
     *  Logic: '<S332>/Logical10'
     *  Logic: '<S332>/Logical12'
     *  RelationalOperator: '<S332>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S332>/Bitwise Operator3'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_IsDiag =
        ((rtb_TmpSignalConversionAtVeDFIR_b_IsDiag &&
          (KeCOUB_b_OCDiagEnbl_ePTWakeUpEnbl)) &&
         ((!KeCOUB_b_LtchEnblOCePTWakeUpEnbl) || (((((uint32)
              rtb_TmpSignalConversionAtVeDMAB_y_Status) & 1U) == 0U) ||
           rtb_TmpSignalConversionAtVeDIOR_RadrFanC)));

    /* Outputs for Atomic SubSystem: '<S332>/EdgeFalling1' */
    /* Logic: '<S334>/AND' incorporates:
     *  UnitDelay: '<S334>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeDIOR_RadrFanC =
        (rtb_TmpSignalConversionAtVeDIOR_RadrFanC &&
         (COUB_ac_DW.UnitDelay_DSTATE_md));

    /* Update for UnitDelay: '<S334>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_md = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S332>/EdgeFalling1' */

    /* Logic: '<S332>/Logical5' */
    rtb_TmpSignalConversionAtVeDFIR_b_DsblDi =
        (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
         rtb_TmpSignalConversionAtVeDIOR_RadrFanC);

    /* UnitDelay: '<S333>/Unit Delay1' incorporates:
     *  UnitDelay: '<S295>/Unit Delay'
     */
    COUB_ac_DW.UnitDelay_DSTATE_go = COUB_ac_DW.UnitDelay1_DSTATE_l;

    /* Outputs for Atomic SubSystem: '<S333>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S333>/Counter Reset  Enabled ' */
    /* Switch: '<S340>/Switch1' incorporates:
     *  Inport: '<Root>/VeDIOR_ePTWUpEnblFltCircDtctd_CircOpen'
     *  Logic: '<S333>/Fail Counter Reset'
     *  Switch: '<S341>/Switch1'
     *  UnitDelay: '<S295>/Unit Delay'
     *  UnitDelay: '<S333>/Unit Delay'
     */
    if ((rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
            (COUB_ac_DW.UnitDelay_DSTATE_cb)) || (COUB_ac_DW.UnitDelay_DSTATE_go))
    {
        /* Switch: '<S340>/Switch1' incorporates:
         *  Constant: '<S340>/Constant Value2'
         */
        VeCOUB_Cnt_OCFailLimePTWakeUpEnbl = 0U;

        /* Switch: '<S341>/Switch1' incorporates:
         *  Constant: '<S341>/Constant Value2'
         */
        VeCOUB_Cnt_OCSmplLimePTWakeUpEnbl = 0U;
    }
    else
    {
        (void)Rte_Read_VeDIOR_ePTWUpEnblFltCircDtctd_CircOpen(&tmpRead_5);

        /* Switch: '<S340>/Switch2' incorporates:
         *  Inport: '<Root>/VeDIOR_ePTWUpEnblFltCircDtctd_CircOpen'
         *  Logic: '<S288>/Logical Operator1'
         *  Logic: '<S333>/NOT6'
         */
        if (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag && ((((sint32)
                tmpRead_5.CircOpen) != 0) &&
                rtb_TmpSignalConversionAtVeDIOR_ePTWakeU))
        {
            /* Switch: '<S340>/Switch1' incorporates:
             *  Constant: '<S340>/Constant Value1'
             *  Sum: '<S340>/Subtraction'
             *  Switch: '<S340>/Switch2'
             *  UnitDelay: '<S340>/Unit Delay'
             */
            VeCOUB_Cnt_OCFailLimePTWakeUpEnbl = (uint16)(((uint32)
                VeCOUB_Cnt_OCFailLimePTWakeUpEnbl) + 1U);
        }

        /* End of Switch: '<S340>/Switch2' */

        /* Switch: '<S341>/Switch2' */
        if (rtb_TmpSignalConversionAtVeDFIR_b_IsDiag)
        {
            /* Switch: '<S341>/Switch1' incorporates:
             *  Constant: '<S341>/Constant Value1'
             *  Sum: '<S341>/Subtraction'
             *  Switch: '<S341>/Switch2'
             *  UnitDelay: '<S341>/Unit Delay'
             */
            VeCOUB_Cnt_OCSmplLimePTWakeUpEnbl = (uint16)(((uint32)
                VeCOUB_Cnt_OCSmplLimePTWakeUpEnbl) + 1U);
        }

        /* End of Switch: '<S341>/Switch2' */
    }

    /* End of Switch: '<S340>/Switch1' */
    /* End of Outputs for SubSystem: '<S333>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S333>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S333>/Greater Than or Equal ' incorporates:
     *  Constant: '<S328>/Calib'
     */
    COUB_ac_DW.UnitDelay1_DSTATE_l = (VeCOUB_Cnt_OCFailLimePTWakeUpEnbl >=
        KeCOUB_Cnt_OCFailLimePTWakeUpEnbl);

    /* Logic: '<S333>/NOT5' incorporates:
     *  Constant: '<S329>/Calib'
     *  Logic: '<S333>/NOT3'
     *  RelationalOperator: '<S333>/Less Than  or Equal'
     */
    COUB_ac_DW.UnitDelay_DSTATE_cb = ((VeCOUB_Cnt_OCSmplLimePTWakeUpEnbl >=
        KeCOUB_Cnt_OCSmplLimePTWakeUpEnbl) && (!COUB_ac_DW.UnitDelay1_DSTATE_l));

    /* Outputs for Enabled SubSystem: '<S332>/Fail' */
    COUB_ac_Fail(COUB_ac_DW.UnitDelay1_DSTATE_l, &COUB_ac_B.Merge_e);

    /* End of Outputs for SubSystem: '<S332>/Fail' */

    /* Outputs for Enabled SubSystem: '<S332>/Init' */
    COUB_ac_Init_i(rtb_TmpSignalConversionAtVeDFIR_b_DsblDi, &COUB_ac_B.Merge_e);

    /* End of Outputs for SubSystem: '<S332>/Init' */

    /* Outputs for Enabled SubSystem: '<S332>/Pass' */
    COUB_ac_Pass(COUB_ac_DW.UnitDelay_DSTATE_cb, &COUB_ac_B.Merge_e);

    /* End of Outputs for SubSystem: '<S332>/Pass' */

    /* RelationalOperator: '<S332>/Relational Operator' incorporates:
     *  Constant: '<S335>/Constant'
     *  Merge: '<S332>/Merge'
     */
    COUB_ac_B.RelationalOperator_j = (((uint32)COUB_ac_B.Merge_e) ==
        CeDFIB_e_Fail);

    /* Switch: '<S346>/Switch1' incorporates:
     *  Switch: '<S345>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        /* Outport: '<Root>/VeCOUB_Cnt_ePTWakeUpEnblOC_MFOP' incorporates:
         *  Constant: '<S339>/Constant Value'
         */
        (void)Rte_Write_VeCOUB_Cnt_ePTWakeUpEnblOC_MFOP_Value((uint16)0U);
    }
    else if (COUB_ac_DW.UnitDelay_DSTATE_cb)
    {
        /* MinMax: '<S339>/Minimum2' incorporates:
         *  Switch: '<S345>/Switch1'
         */
        if (VeCOUB_Cnt_OCFailLimePTWakeUpEnbl >
                rtb_TmpSignalConversionAtVeNVMB_Cnt_ePTW)
        {
            /* Outport: '<Root>/VeCOUB_Cnt_ePTWakeUpEnblOC_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_ePTWakeUpEnblOC_MFOP_Value
                (VeCOUB_Cnt_OCFailLimePTWakeUpEnbl);
        }
        else
        {
            /* Outport: '<Root>/VeCOUB_Cnt_ePTWakeUpEnblOC_MFOP' */
            (void)Rte_Write_VeCOUB_Cnt_ePTWakeUpEnblOC_MFOP_Value
                (rtb_TmpSignalConversionAtVeNVMB_Cnt_ePTW);
        }

        /* End of MinMax: '<S339>/Minimum2' */
    }
    else
    {
        /* Outport: '<Root>/VeCOUB_Cnt_ePTWakeUpEnblOC_MFOP' incorporates:
         *  Switch: '<S345>/Switch1'
         */
        (void)Rte_Write_VeCOUB_Cnt_ePTWakeUpEnblOC_MFOP_Value
            (rtb_TmpSignalConversionAtVeNVMB_Cnt_ePTW);
    }

    /* End of Switch: '<S346>/Switch1' */

    /* Switch: '<S284>/Switch' incorporates:
     *  Constant: '<S348>/Calib'
     */
    if (KeCOUB_b_ePTWakeUpEnblBypEnbl)
    {
        /* FunctionCaller: '<S282>/SetDIOR_b_ePTWakeUpEnbl_St' */
        Rte_Call_SetDIOR_b_ePTWakeUpEnbl_St(KeCOUB_b_ePTWakeUpEnblByp);
    }
    else
    {
        /* FunctionCaller: '<S282>/SetDIOR_b_ePTWakeUpEnbl_St' */
        Rte_Call_SetDIOR_b_ePTWakeUpEnbl_St(KeCOUB_b_ePTWakeUpEnblPolarInvEnb);
    }

    /* End of Switch: '<S284>/Switch' */

    /* Update for UnitDelay: '<S295>/Unit Delay' */
    COUB_ac_DW.UnitDelay_DSTATE_go = rtb_TmpSignalConversionAtVeAPMR_b_EnblTh;

    /* End of Outputs for SubSystem: '<S85>/ePTWakeUpEnbl' */
    /* End of Outputs for SubSystem: '<S76>/ePTWakeUpEnbl' */
#endif

#if Rte_SysCon_Variant_COUB_OILPUMPRLY_Presence

    /* Outputs for Atomic SubSystem: '<S76>/ElecOilPmpRly' */
    /* Inport: '<Root>/VeTAPR_f_ElecOilPmp_RlyFreq' */
    (void)Rte_Read_VeTAPR_f_ElecOilPmp_RlyFreq_Value(&tmpRead_1);

    /* Inport: '<Root>/VeTAPR_Pct_ElecOilPmp_RlyCmd' */
    (void)Rte_Read_VeTAPR_Pct_ElecOilPmp_RlyCmd_Value(&tmpRead_0);

    /* Outputs for Atomic SubSystem: '<S79>/ElecOilPmpRly' */
    /* Switch: '<S163>/Switch' incorporates:
     *  Constant: '<S167>/Calib'
     */
    if (KeCOUB_b_ElecOilPmpRlyDCBypEnbl)
    {
        /* FunctionCaller: '<S161>/SetDIOR_e_ElecOilPmpRlyCtrl_SetDIOR_PWM_DC' */
        Rte_Call_SetDIOR_e_ElecOilPmpRlyCtrl_SetDIOR_PWM_DC
            (KeCOUB_Pct_ElecOilPmpRlyDCByp);
    }
    else
    {
        /* FunctionCaller: '<S161>/SetDIOR_e_ElecOilPmpRlyCtrl_SetDIOR_PWM_DC' */
        Rte_Call_SetDIOR_e_ElecOilPmpRlyCtrl_SetDIOR_PWM_DC(tmpRead_0);
    }

    /* End of Switch: '<S163>/Switch' */

    /* Switch: '<S162>/Switch' incorporates:
     *  Constant: '<S164>/Calib'
     */
    if (KeCOUB_b_ElecOilPmpRlyPrdBypEnbl)
    {
        /* FunctionCaller: '<S161>/SetDIOR_e_ElecOilPmpRlyCtrl_SetDIOR_PWM_Prd' */
        Rte_Call_SetDIOR_e_ElecOilPmpRlyCtrl_SetDIOR_PWM_Prd
            (KeCOUB_t_ElecOilPmpRlyPrdByp);
    }
    else
    {
        /* FunctionCaller: '<S161>/SetDIOR_e_ElecOilPmpRlyCtrl_SetDIOR_PWM_Prd' */
        Rte_Call_SetDIOR_e_ElecOilPmpRlyCtrl_SetDIOR_PWM_Prd(tmpRead_1);
    }

    /* End of Switch: '<S162>/Switch' */
    /* End of Outputs for SubSystem: '<S79>/ElecOilPmpRly' */
    /* End of Outputs for SubSystem: '<S76>/ElecOilPmpRly' */
#endif

#if Rte_SysCon_Variant_COUB_POWERPANELBOX_Presence

    /* Outputs for Atomic SubSystem: '<S76>/Power Panel Switch Relay Control' */
    /* Outputs for Atomic SubSystem: '<S82>/Power Panel Switch Relay Control' */
    /* Switch: '<S181>/Switch' incorporates:
     *  Constant: '<S184>/Calib'
     */
    if (KeCOUB_b_PowerPanelBoxCtrlDCBypEnbl)
    {
        /* FunctionCaller: '<S180>/SetDIOR_e_PowerPanelBoxCtrl_SetDIOR_PWM_DC' */
        Rte_Call_SetDIOR_e_PowerPanelBoxCtrl_SetDIOR_PWM_DC
            (KeCOUB_Pct_PowerPanelBoxCtrlDCByp);
    }
    else
    {
        /* FunctionCaller: '<S180>/SetDIOR_e_PowerPanelBoxCtrl_SetDIOR_PWM_DC' */
        Rte_Call_SetDIOR_e_PowerPanelBoxCtrl_SetDIOR_PWM_DC
            (KeCOUB_Pct_PowerPanelBoxCmdRlyDCZeroPwm);
    }

    /* End of Switch: '<S181>/Switch' */
    /* End of Outputs for SubSystem: '<S82>/Power Panel Switch Relay Control' */
    /* End of Outputs for SubSystem: '<S76>/Power Panel Switch Relay Control' */
#endif

#if Rte_SysCon_Variant_COUB_POWERPANELLED_Presence

    /* Outputs for Atomic SubSystem: '<S76>/Power Panel LED' */
    /* Outputs for Atomic SubSystem: '<S81>/Power Panel LED' */
    /* Switch: '<S177>/Switch' incorporates:
     *  Constant: '<S178>/Calib'
     *  Constant: '<S179>/Calib'
     */
    if (KeCOUB_b_PowerPanelLEDDCBypEnbl)
    {
        tmpRead_2 = KeCOUB_Pct_PowerPanelLEDDCByp;
    }
    else
    {
        tmpRead_2 = 0.0F;
    }

    /* End of Switch: '<S177>/Switch' */

    /* FunctionCaller: '<S176>/SetDIOR_e_PowerPanelLed_SetDIOR_PWM_DC' */
    Rte_Call_SetDIOR_e_PowerPanelLed_SetDIOR_PWM_DC(tmpRead_2);

    /* End of Outputs for SubSystem: '<S81>/Power Panel LED' */
    /* End of Outputs for SubSystem: '<S76>/Power Panel LED' */
#endif

#if Rte_SysCon_Variant_COUB_PCURLYCNTRL_Presence

    /* Outputs for Atomic SubSystem: '<S76>/PCU_Power_Up_Relay_Control' */
    /* Outputs for Atomic SubSystem: '<S80>/PCU_Power_Up_Relay_Control' */
    /* Switch: '<S170>/Switch1' incorporates:
     *  Constant: '<S173>/Calib'
     *  Inport: '<Root>/VeAPMR_b_PCUPwrUpRelay'
     */
    if (KeCOUB_b_PCURlyCmdBypEnbl)
    {
        /* FunctionCaller: '<S169>/SetDIOR_e_PcuPpwerUpRelayControl_PwmOutpOps_SetDIOR_PWM_DC' */
        Rte_Call_SetDIOR_e_PcuPpwerUpRelayControl_PwmOutpOps_SetDIOR_PWM_DC
            (KeCOUB_Pct_PCURlyCmdByp);
    }
    else
    {
        (void)Rte_Read_VeAPMR_b_PCUPwrUpRelay_Value(&tmpRead_b);

        /* Switch: '<S171>/Switch' incorporates:
         *  Inport: '<Root>/VeAPMR_b_PCUPwrUpRelay'
         */
        if (tmpRead_b)
        {
            /* FunctionCaller: '<S169>/SetDIOR_e_PcuPpwerUpRelayControl_PwmOutpOps_SetDIOR_PWM_DC' */
            Rte_Call_SetDIOR_e_PcuPpwerUpRelayControl_PwmOutpOps_SetDIOR_PWM_DC
                (KeCOUB_Pct_PCUCmdRlyDCFullPwm);
        }
        else
        {
            /* FunctionCaller: '<S169>/SetDIOR_e_PcuPpwerUpRelayControl_PwmOutpOps_SetDIOR_PWM_DC' */
            Rte_Call_SetDIOR_e_PcuPpwerUpRelayControl_PwmOutpOps_SetDIOR_PWM_DC
                (KeCOUB_Pct_PCUCmdRlyDCZeroPwm);
        }

        /* End of Switch: '<S171>/Switch' */
    }

    /* End of Switch: '<S170>/Switch1' */
    /* End of Outputs for SubSystem: '<S80>/PCU_Power_Up_Relay_Control' */
    /* End of Outputs for SubSystem: '<S76>/PCU_Power_Up_Relay_Control' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* SignalConversion generated from: '<S2>/VeCOUB_b_ACSwitchRelaySTB_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeCOUB_b_ACSwitchRelaySTG_FA'
     */
#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

    /* Outport: '<Root>/VeCOUB_b_STBDiagFA_ACSwitchRelay' */
    (void)Rte_Write_VeCOUB_b_STBDiagFA_ACSwitchRelay_Value
        (COUB_ac_B.RelationalOperator_k);

    /* Outport: '<Root>/VeCOUB_b_STGDiagFA_ACSwitchRelay' */
    (void)Rte_Write_VeCOUB_b_STGDiagFA_ACSwitchRelay_Value
        (COUB_ac_B.RelationalOperator_le);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCOUB_b_ACSwitchRelaySTB_FA' */

    /* SignalConversion generated from: '<S2>/VeCOUB_b_ElecOilPmpOC_FA' */
#if Rte_SysCon_Variant_COUB_OILPUMP_Presence

    /* Outport: '<Root>/VeCOUB_b_OCDiagFA_ElecOilPmp' */
    (void)Rte_Write_VeCOUB_b_OCDiagFA_ElecOilPmp_Value
        (COUB_ac_B.RelationalOperator_l);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCOUB_b_ElecOilPmpOC_FA' */

    /* SignalConversion generated from: '<S2>/VeCOUB_b_RadrFanCtrlOC_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeCOUB_b_RadrFanCtrlSTB_FA'
     *  SignalConversion generated from: '<S2>/VeCOUB_b_RadrFanCtrlSTG_FA'
     */
#if Rte_SysCon_Variant_COUB_RADFAN_Presence

    /* Outport: '<Root>/VeCOUB_b_OCDiagFA_RadFanCmd' */
    (void)Rte_Write_VeCOUB_b_OCDiagFA_RadFanCmd_Value
        (COUB_ac_B.RelationalOperator_pb);

    /* Outport: '<Root>/VeCOUB_b_STBDiagFA_RadFanCmd' */
    (void)Rte_Write_VeCOUB_b_STBDiagFA_RadFanCmd_Value
        (COUB_ac_B.RelationalOperator_c);

    /* Outport: '<Root>/VeCOUB_b_STGDiagFA_RadFanCmd' */
    (void)Rte_Write_VeCOUB_b_STGDiagFA_RadFanCmd_Value
        (COUB_ac_B.RelationalOperator_p);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCOUB_b_RadrFanCtrlOC_FA' */

    /* SignalConversion generated from: '<S2>/VeCOUB_b_ThermSysEnbl_FA' */
#if Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

    /* Outport: '<Root>/VeCOUB_b_DiagFA_WakeupThermalCtrl' */
    (void)Rte_Write_VeCOUB_b_DiagFA_WakeupThermalCtrl_Value
        (COUB_ac_B.RelationalOperator_hw);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCOUB_b_ThermSysEnbl_FA' */

    /* SignalConversion generated from: '<S2>/VeCOUB_b_ePTWakeUpEnblOC_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeCOUB_b_ePTWakeUpEnblSTB_FA'
     *  SignalConversion generated from: '<S2>/VeCOUB_b_ePTWakeUpEnblSTG_FA'
     */
#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

    /* Outport: '<Root>/VeCOUB_b_OCDiagFA_EptWakeupCtrl' */
    (void)Rte_Write_VeCOUB_b_OCDiagFA_EptWakeupCtrl_Value
        (COUB_ac_B.RelationalOperator_j);

    /* Outport: '<Root>/VeCOUB_b_STBDiagFA_EptWakeupCtrl' */
    (void)Rte_Write_VeCOUB_b_STBDiagFA_EptWakeupCtrl_Value
        (COUB_ac_B.RelationalOperator);

    /* Outport: '<Root>/VeCOUB_b_STGDiagFA_EptWakeupCtrl' */
    (void)Rte_Write_VeCOUB_b_STGDiagFA_EptWakeupCtrl_Value
        (COUB_ac_B.RelationalOperator_h);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCOUB_b_ePTWakeUpEnblOC_FA' */

    /* SignalConversion generated from: '<S2>/VeCOUB_e_ACSwitchRelaySTB_PassFail' incorporates:
     *  SignalConversion generated from: '<S2>/VeCOUB_e_ACSwitchRelaySTG_PassFail'
     */
#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

    /* Outport: '<Root>/VeCOUB_e_FaultSts_PwrTrnsfrRlyCntrlCktHi' incorporates:
     *  Merge: '<S97>/Merge'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_PwrTrnsfrRlyCntrlCktHi_Value
        (COUB_ac_B.Merge_p);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_PwrTrnsfrRlyCntrlCktLo' incorporates:
     *  Merge: '<S116>/Merge'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_PwrTrnsfrRlyCntrlCktLo_Value
        (COUB_ac_B.Merge_nn);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCOUB_e_ACSwitchRelaySTB_PassFail' */

    /* SignalConversion generated from: '<S2>/VeCOUB_e_ElecOilPmpOC_PassFail' */
#if Rte_SysCon_Variant_COUB_OILPUMP_Presence

    /* Outport: '<Root>/VeCOUB_e_FaultSts_Aux_TF_Pmp_CM_Ckt' incorporates:
     *  Merge: '<S144>/Merge'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_Aux_TF_Pmp_CM_Ckt_Value(COUB_ac_B.Merge_j);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCOUB_e_ElecOilPmpOC_PassFail' */

    /* SignalConversion generated from: '<S2>/VeCOUB_e_RadrFanCtrlOC_PassFail' incorporates:
     *  SignalConversion generated from: '<S2>/VeCOUB_e_RadrFanCtrlSTB_PassFail'
     *  SignalConversion generated from: '<S2>/VeCOUB_e_RadrFanCtrlSTG_PassFail'
     */
#if Rte_SysCon_Variant_COUB_RADFAN_Presence

    /* Outport: '<Root>/VeCOUB_e_FaultSts_Fan1CntrlCkt' incorporates:
     *  Merge: '<S236>/Merge'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_Fan1CntrlCkt_Value(COUB_ac_B.Merge_eg);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_Fan1CntrlCktHi' incorporates:
     *  Merge: '<S198>/Merge'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_Fan1CntrlCktHi_Value(COUB_ac_B.Merge_i);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_Fan1CntrlCktLo' incorporates:
     *  Merge: '<S217>/Merge'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_Fan1CntrlCktLo_Value(COUB_ac_B.Merge_et);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCOUB_e_RadrFanCtrlOC_PassFail' */

    /* SignalConversion generated from: '<S2>/VeCOUB_e_ThermSysEnbl_PassFail' */
#if Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

    /* Outport: '<Root>/VeCOUB_e_FaultSts_ThrmlRlyCtrlCkt' incorporates:
     *  Merge: '<S263>/Merge'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_ThrmlRlyCtrlCkt_Value(COUB_ac_B.Merge_d);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCOUB_e_ThermSysEnbl_PassFail' */

    /* SignalConversion generated from: '<S2>/VeCOUB_e_ePTWakeUpEnblOC_PassFail' incorporates:
     *  SignalConversion generated from: '<S2>/VeCOUB_e_ePTWakeUpEnblSTB_PassFail'
     *  SignalConversion generated from: '<S2>/VeCOUB_e_ePTWakeUpEnblSTG_PassFail'
     */
#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

    /* Outport: '<Root>/VeCOUB_e_FaultSts_EVWakeup1CktOpen' incorporates:
     *  Merge: '<S332>/Merge'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_EVWakeup1CktOpen_Value(COUB_ac_B.Merge_e);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_EVWakeup1CktShortBatt' incorporates:
     *  Merge: '<S294>/Merge'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_EVWakeup1CktShortBatt_Value
        (COUB_ac_B.Merge_n);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_EVWakeup1CktShortGrnd' incorporates:
     *  Merge: '<S313>/Merge'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_EVWakeup1CktShortGrnd_Value
        (COUB_ac_B.Merge_c);

#endif

    /* End of SignalConversion generated from: '<S2>/VeCOUB_e_ePTWakeUpEnblOC_PassFail' */

    /* Outputs for Atomic SubSystem: '<S2>/COUB_MedTEH_StopCheckpoint' */
    /* FunctionCaller: '<S75>/COUB_MedTEH_StopCheckpoint' */
    Rte_Call_COUB_MedTEH_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S2>/COUB_MedTEH_StopCheckpoint' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Model initialize function */
FUNC(void, COUB_CODE) COUB_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/SigMngt20ms'
     */
    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Subsystem'
     */
#if Rte_SysCon_Variant_COUB_CSOV_Presence
#endif

#if Rte_SysCon_Variant_COUB_FRSOV_Presence
#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence
#endif

    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/SigMngt100ms'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Subsystem'
     */
#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence
#endif

#if Rte_SysCon_Variant_COUB_OILPUMP_Presence
#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence
#endif

#if Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence
#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence
#endif

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Outputs for Atomic SubSystem: '<Root>/Init' */
#if Rte_SysCon_Variant_COUB_FRSOV_Presence

    /* Outputs for Atomic SubSystem: '<S1>/FtRfgtShtoff' */
    /* Outputs for Atomic SubSystem: '<S9>/FtRfgtShtoff' */
    /* Outport: '<Root>/VeCOUB_e_FaultSts_EvapRefriShutoffCtrlCktFlt' incorporates:
     *  Constant: '<S39>/Constant'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_EvapRefriShutoffCtrlCktFlt_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_EvapRefrishutoffCtrlShrtGndFlt' incorporates:
     *  Constant: '<S37>/Constant'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_EvapRefrishutoffCtrlShrtGndFlt_Value
        (CeDFIB_e_Init);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_EvapRefriShutoffCtrlshrtBattFlt' incorporates:
     *  Constant: '<S38>/Constant'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_EvapRefriShutoffCtrlshrtBattFlt_Value
        (CeDFIB_e_Init);

    /* FunctionCaller: '<S36>/SetDIOR_b_FtRfgtShtoff_St' */
    Rte_Call_SetDIOR_b_FrntRefrigShtOffVlv_St(KeCOUB_b_FtRfgtShtoffInit);

    /* End of Outputs for SubSystem: '<S9>/FtRfgtShtoff' */
    /* End of Outputs for SubSystem: '<S1>/FtRfgtShtoff' */
#endif

#if Rte_SysCon_Variant_COUB_CSOV_Presence

    /* Outputs for Atomic SubSystem: '<S1>/ChillrShtOffVlv' */
    /* Outputs for Atomic SubSystem: '<S6>/ChillrShtOffVlv' */
    /* Outport: '<Root>/VeCOUB_e_FaultSts_CoolCtrlVlv1Ckt' incorporates:
     *  Constant: '<S26>/Constant'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_CoolCtrlVlv1Ckt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_CoolCtrlVlv1CktLo' incorporates:
     *  Constant: '<S24>/Constant'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_CoolCtrlVlv1CktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_CoolCtrlVlv1CktHi' incorporates:
     *  Constant: '<S25>/Constant'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_CoolCtrlVlv1CktHi_Value(CeDFIB_e_Init);

    /* FunctionCaller: '<S23>/SetDIOR_b_ChillrShtOffVlv_St' */
    Rte_Call_SetDIOR_b_ChillrShtOffVlv_St(KeCOUB_b_ChillrShtOffVlvInit);

    /* End of Outputs for SubSystem: '<S6>/ChillrShtOffVlv' */
    /* End of Outputs for SubSystem: '<S1>/ChillrShtOffVlv' */
#endif

#if Rte_SysCon_Variant_COUB_HTSOV_Presence

    /* Outputs for Atomic SubSystem: '<S1>/HiTempShtOffVlv' */
    /* Outputs for Atomic SubSystem: '<S10>/HiTempShtOffVlv' */
    /* Outport: '<Root>/VeCOUB_e_FaultSts_CoolantVlvB_Ckt' incorporates:
     *  Constant: '<S44>/Constant'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_CoolantVlvB_Ckt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_CoolantVlvB_CktLo' incorporates:
     *  Constant: '<S42>/Constant'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_CoolantVlvB_CktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_CoolantVlvB_CktHi' incorporates:
     *  Constant: '<S43>/Constant'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_CoolantVlvB_CktHi_Value(CeDFIB_e_Init);

    /* FunctionCaller: '<S41>/SetDIOR_b_HiTempShtOffVlv_St' */
    Rte_Call_SetDIOR_b_SpareHsd3OutpSt_St(KeCOUB_b_HiTempShtOffVlvInit);

    /* End of Outputs for SubSystem: '<S10>/HiTempShtOffVlv' */
    /* End of Outputs for SubSystem: '<S1>/HiTempShtOffVlv' */
#endif

#if Rte_SysCon_Variant_COUB_EPTWUP_Presence

    /* Outputs for Atomic SubSystem: '<S1>/ePTWakeUpEnbl' */
    /* Outputs for Atomic SubSystem: '<S16>/ePTWakeUpEnbl' */
    /* Outport: '<Root>/VeCOUB_e_FaultSts_EVWakeup1CktOpen' incorporates:
     *  Constant: '<S72>/Constant'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_EVWakeup1CktOpen_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_EVWakeup1CktShortGrnd' incorporates:
     *  Constant: '<S70>/Constant'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_EVWakeup1CktShortGrnd_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_EVWakeup1CktShortBatt' incorporates:
     *  Constant: '<S71>/Constant'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_EVWakeup1CktShortBatt_Value(CeDFIB_e_Init);

    /* FunctionCaller: '<S69>/SetDIOR_b_ePTWakeUpEnbl_St' */
    Rte_Call_SetDIOR_b_ePTWakeUpEnbl_St(KeCOUB_b_ePTWakeUpEnblInit);

    /* End of Outputs for SubSystem: '<S16>/ePTWakeUpEnbl' */
    /* End of Outputs for SubSystem: '<S1>/ePTWakeUpEnbl' */
#endif

#if Rte_SysCon_Variant_COUB_THRMLSYSEN_Presence

    /* Outputs for Atomic SubSystem: '<S1>/ThermSysEnbl' */
    /* Outputs for Atomic SubSystem: '<S15>/ThermSysEnbl' */
    /* Outport: '<Root>/VeCOUB_e_FaultSts_ThrmlRlyCtrlCkt' incorporates:
     *  Constant: '<S67>/Constant'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_ThrmlRlyCtrlCkt_Value(CeDFIB_e_Init);

    /* FunctionCaller: '<S66>/SetDIOR_b_ThermSysEnbl_St' */
    Rte_Call_SetDIOR_b_ThermSysEnbl_St(KeCOUB_b_ThermSysEnblInit);

    /* End of Outputs for SubSystem: '<S15>/ThermSysEnbl' */
    /* End of Outputs for SubSystem: '<S1>/ThermSysEnbl' */
#endif

#if Rte_SysCon_Variant_COUB_RADFAN_Presence

    /* Outputs for Atomic SubSystem: '<S1>/RadFan' */
    /* Outputs for Atomic SubSystem: '<S14>/RadFan' */
    /* Outport: '<Root>/VeCOUB_e_FaultSts_Fan1CntrlCkt' incorporates:
     *  Constant: '<S62>/Constant'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_Fan1CntrlCkt_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_Fan1CntrlCktLo' incorporates:
     *  Constant: '<S60>/Constant'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_Fan1CntrlCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_Fan1CntrlCktHi' incorporates:
     *  Constant: '<S61>/Constant'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_Fan1CntrlCktHi_Value(CeDFIB_e_Init);

    /* FunctionCaller: '<S59>/SetDIOR_e_RadrFanCtrl_SetEnblSt1' */
    Rte_Call_SetDIOR_e_RadrFanCtrl_SetEnblSt(KeCOUB_b_RadFanEnblSt);

    /* FunctionCaller: '<S59>/SetDIOR_e_RadrFanCtrl_SetDIOR_PWM_Pol' */
    Rte_Call_SetDIOR_e_RadrFanCtrl_SetDIOR_PWM_Pol(KeCOUB_b_RadFanPolarity);

    /* FunctionCaller: '<S59>/SetDIOR_e_RadrFanCtrl_SetDIOR_PWM_Prd' */
    Rte_Call_SetDIOR_e_RadrFanCtrl_SetDIOR_PWM_Prd(KeCOUB_t_RadFanPrd);

    /* End of Outputs for SubSystem: '<S14>/RadFan' */
    /* End of Outputs for SubSystem: '<S1>/RadFan' */
#endif

#if Rte_SysCon_Variant_COUB_ACPWRSWRLY_Presence

    /* Outputs for Atomic SubSystem: '<S1>/AC Power Switch Relay' */
    /* Outputs for Atomic SubSystem: '<S5>/AC Power Switch Relay' */
    /* Outport: '<Root>/VeCOUB_e_FaultSts_PwrTrnsfrRlyCntrlCktLo' incorporates:
     *  Constant: '<S18>/Constant'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_PwrTrnsfrRlyCntrlCktLo_Value(CeDFIB_e_Init);

    /* Outport: '<Root>/VeCOUB_e_FaultSts_PwrTrnsfrRlyCntrlCktHi' incorporates:
     *  Constant: '<S19>/Constant'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_PwrTrnsfrRlyCntrlCktHi_Value(CeDFIB_e_Init);

    /* FunctionCaller: '<S17>/SetDIOR_e_RadrFanCtrl_SetEnblSt1' */
    Rte_Call_SetDIOR_e_Spare4Lsd_PwmOutpOps_SetEnblSt
        (KeCOUB_b_PowerPanelBoxEnblSt);

    /* FunctionCaller: '<S17>/SetDIOR_e_RadrFanCtrl_SetDIOR_PWM_Pol' */
    Rte_Call_SetDIOR_e_Spare4Lsd_PwmOutpOps_SetDIOR_PWM_Pol
        (KeCOUB_b_PowerPanelBoxPolarity);

    /* FunctionCaller: '<S17>/SetDIOR_e_RadrFanCtrl_SetDIOR_PWM_Prd' */
    Rte_Call_SetDIOR_e_Spare4Lsd_PwmOutpOps_SetDIOR_PWM_Prd
        (KeCOUB_t_PowerPanelBoxPrd);

    /* End of Outputs for SubSystem: '<S5>/AC Power Switch Relay' */
    /* End of Outputs for SubSystem: '<S1>/AC Power Switch Relay' */
#endif

#if Rte_SysCon_Variant_COUB_OILPUMP_Presence

    /* Outputs for Atomic SubSystem: '<S1>/ElecOilPmp' */
    /* Outputs for Atomic SubSystem: '<S8>/ElecOilPmp' */
    /* Outport: '<Root>/VeCOUB_e_FaultSts_Aux_TF_Pmp_CM_Ckt' incorporates:
     *  Constant: '<S32>/Constant'
     */
    (void)Rte_Write_VeCOUB_e_FaultSts_Aux_TF_Pmp_CM_Ckt_Value(CeDFIB_e_Init);

    /* FunctionCaller: '<S31>/SetDIOR_e_Spare1Lsd_PwmOutpOps_SetEnblSt' */
    Rte_Call_SetDIOR_e_Spare1Lsd_PwmOutpOps_SetEnblSt
        (KeCOUB_b_ElecOilPmpCmdEnblSt);

    /* FunctionCaller: '<S31>/SetDIOR_e_Spare1Lsd_PwmOutpOps_SetDIOR_PWM_Pol' */
    Rte_Call_SetDIOR_e_Spare1Lsd_PwmOutpOps_SetDIOR_PWM_Pol
        (KeCOUB_b_ElecOilPmpCmdPolarity);

    /* FunctionCaller: '<S31>/SetDIOR_e_Spare1Lsd_PwmOutpOps_SetDIOR_PWM_Prd' */
    Rte_Call_SetDIOR_e_Spare1Lsd_PwmOutpOps_SetDIOR_PWM_Prd
        (KeCOUB_t_ElecOilPmpCmdPrd);

    /* End of Outputs for SubSystem: '<S8>/ElecOilPmp' */
    /* End of Outputs for SubSystem: '<S1>/ElecOilPmp' */
#endif

#if Rte_SysCon_Variant_COUB_CNTCTRCMD_Presence

    /* Outputs for Atomic SubSystem: '<S1>/CntctrCmdBidrnl' */
    /* Outputs for Atomic SubSystem: '<S7>/CntctrCmdBidrnl' */
    /* FunctionCaller: '<S28>/SetDIOR_e_RadrFanCtrl_SetDIOR_PWM_Prd' incorporates:
     *  Constant: '<S28>/Constant'
     */
    Rte_Call_SetDIOR_e_CntctrCmdBidrnlCtrl_SetDIOR_PWM_Prd(0.0F);

    /* FunctionCaller: '<S28>/SetDIOR_e_RadrFanCtrl_SetDIOR_PWM_DC' incorporates:
     *  Constant: '<S28>/Constant1'
     */
    Rte_Call_SetDIOR_e_CntctrCmdBidrnlCtrl_SetDIOR_PWM_DC(0.0F);

    /* FunctionCaller: '<S28>/SetDIOR_e_RadrFanCtrl_SetEnblSt1' */
    Rte_Call_SetDIOR_e_CntctrCmdBidrnlCtrl_SetEnblSt
        (KeCOUB_b_CntctrCmdBidrnlEnblSt);

    /* FunctionCaller: '<S28>/SetDIOR_e_RadrFanCtrl_SetDIOR_PWM_Pol' */
    Rte_Call_SetDIOR_e_CntctrCmdBidrnlCtrl_SetDIOR_PWM_Pol
        (KeCOUB_b_CntctrCmdBidrnlPolarity);

    /* End of Outputs for SubSystem: '<S7>/CntctrCmdBidrnl' */
    /* End of Outputs for SubSystem: '<S1>/CntctrCmdBidrnl' */
#endif

#if Rte_SysCon_Variant_COUB_PCURLYCNTRL_Presence

    /* Outputs for Atomic SubSystem: '<S1>/PCU Power Up Relay Control' */
    /* Outputs for Atomic SubSystem: '<S11>/PCU Power Up Relay Control' */
    /* FunctionCaller: '<S46>/SetDIOR_e_PcuPpwerUpRelayControl_PwmOutpOps_SetDIOR_PWM_DC' */
    Rte_Call_SetDIOR_e_PcuPpwerUpRelayControl_PwmOutpOps_SetDIOR_PWM_DC
        (KeCOUB_Pct_PCURlyCntrlPWMDCInit);

    /* FunctionCaller: '<S46>/SetDIOR_e_PcuPpwerUpRelayControl_PwmOutpOps_SetDIOR_PWM_Pol' */
    Rte_Call_SetDIOR_e_PcuPpwerUpRelayControl_PwmOutpOps_SetDIOR_PWM_Pol
        (KeCOUB_b_PCURlyCntrlPolInit);

    /* FunctionCaller: '<S46>/SetDIOR_e_PcuPpwerUpRelayControl_PwmOutpOps_SetEnblSt' */
    Rte_Call_SetDIOR_e_PcuPpwerUpRelayControl_PwmOutpOps_SetEnblSt
        (KeCOUB_b_PCURlyCntrlSetEnblStInit);

    /* FunctionCaller: '<S46>/SetDIOR_e_PcuPpwerUpRelayControl_PwmOutpOps_SetDIOR_PWM_Prd' */
    Rte_Call_SetDIOR_e_PcuPpwerUpRelayControl_PwmOutpOps_SetDIOR_PWM_Prd
        (KeCOUB_t_PCURlyCntrlPrdInit);

    /* End of Outputs for SubSystem: '<S11>/PCU Power Up Relay Control' */
    /* End of Outputs for SubSystem: '<S1>/PCU Power Up Relay Control' */
#endif

#if Rte_SysCon_Variant_COUB_POWERPANELLED_Presence

    /* Outputs for Atomic SubSystem: '<S1>/Power Panel LED' */
    /* Outputs for Atomic SubSystem: '<S12>/Power Panel LED' */
    /* FunctionCaller: '<S51>/SetDIOR_e_RadrFanCtrl_SetEnblSt1' */
    Rte_Call_SetDIOR_e_PowerPanelLed_SetEnblSt(KeCOUB_b_PowerPanelLEDEnblSt);

    /* FunctionCaller: '<S51>/SetDIOR_e_RadrFanCtrl_SetDIOR_PWM_Pol' */
    Rte_Call_SetDIOR_e_PowerPanelLed_SetDIOR_PWM_Pol
        (KeCOUB_b_PowerPanelLEDPolarity);

    /* FunctionCaller: '<S51>/SetDIOR_e_RadrFanCtrl_SetDIOR_PWM_Prd' */
    Rte_Call_SetDIOR_e_PowerPanelLed_SetDIOR_PWM_Prd(KeCOUB_t_PowerPanelLEDPrd);

    /* End of Outputs for SubSystem: '<S12>/Power Panel LED' */
    /* End of Outputs for SubSystem: '<S1>/Power Panel LED' */
#endif

#if Rte_SysCon_Variant_COUB_POWERPANELBOX_Presence

    /* Outputs for Atomic SubSystem: '<S1>/Power Panel Switch Relay Control' */
    /* Outputs for Atomic SubSystem: '<S13>/Power Panel Switch Relay Control' */
    /* FunctionCaller: '<S55>/SetDIOR_e_RadrFanCtrl_SetEnblSt1' */
    Rte_Call_SetDIOR_e_PowerPanelSwitchRelayBoxControl_SetEnblSt
        (KeCOUB_b_PowerPanelBoxEnblSt);

    /* FunctionCaller: '<S55>/SetDIOR_e_RadrFanCtrl_SetDIOR_PWM_Pol' */
    Rte_Call_SetDIOR_e_PowerPanelSwitchRelayBoxControl_SetDIOR_PWM_Pol
        (KeCOUB_b_PowerPanelBoxPolarity);

    /* FunctionCaller: '<S55>/SetDIOR_e_RadrFanCtrl_SetDIOR_PWM_Prd' */
    Rte_Call_SetDIOR_e_PowerPanelSwitchRelayBoxControl_SetDIOR_PWM_Prd
        (KeCOUB_t_PowerPanelBoxPrd);

    /* End of Outputs for SubSystem: '<S13>/Power Panel Switch Relay Control' */
    /* End of Outputs for SubSystem: '<S1>/Power Panel Switch Relay Control' */
    /* End of Outputs for SubSystem: '<Root>/Init' */
#endif

}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
