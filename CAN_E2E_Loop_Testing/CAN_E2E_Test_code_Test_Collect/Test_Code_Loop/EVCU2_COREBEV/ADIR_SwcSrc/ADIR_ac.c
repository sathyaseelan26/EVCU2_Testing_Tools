/*
 * File: ADIR_ac.c
 *
 * Code generated for Simulink model 'ADIR_ac'.
 *
 * Model version                  : 9.241
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:04:54 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ADIR_ac.h"

/* Named constants for Chart: '<S53>/MechFailureCheck' */
#if Rte_SysCon_Variant_ADIR_1
#define ADIR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#endif

#if Rte_SysCon_Variant_ADIR_1
#define ADIR_ac_IN_WEDBrokenCLOSEDDiag ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ADIR_1
#define ADIR_ac_IN_WEDBrokenCLOSEDDiag_ACTIVE ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ADIR_1
#define ADIR_ac_IN_WEDBrokenCLOSEDDiag_STANDBY ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ADIR_1
#define ADIR_ac_IN_WEDBrokenCLOSEDDiag_WAIT ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ADIR_1
#define ADIR_ac_IN_WEDBrokenDiag_INIT  ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ADIR_1
#define ADIR_ac_IN_WEDBrokenOPENDiag   ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ADIR_1
#define ADIR_ac_IN_WEDBrokenOPENDiag_ACTIVE ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ADIR_1
#define ADIR_ac_IN_WEDBrokenOPENDiag_STANDBY ((uint8)2U)
#endif

/* Named constants for Chart: '<S120>/LftWEDRetryCheck' */
#if Rte_SysCon_Variant_ADIR_1
#define ADIR_ac_IN_DiagActive          ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ADIR_1
#define ADIR_ac_IN_TestFailedFallingEdge ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ADIR_1
#define ADIR_ac_IN_TestFailedRisingEdge ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ADIR_1
#define ADIR_ac_IN_TestPassedFallingEdge ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ADIR_1
#define ADIR_ac_IN_TestPassedRisingEdge ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ADIR_1
#define ADIR_ac_IN_WEDShiftDetection   ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ADIR_1
#define ADIR_ac_IN_WaitForSSClosed     ((uint8)4U)
#endif

#if Rte_SysCon_Variant_ADIR_1
#define ADIR_ac_IN_WaitForSSOpen       ((uint8)5U)
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
#define START_SEC_CALIB_UNSPECIFIED_ADIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(TeADCR_e_AWDReq, ADIR_VAR_INIT)
    KaADIR_e_BSM_WEDModeReqMap[4] =
{
    CeADCR_e_ReqOpt, CeADCR_e_ForceClosed, CeADCR_e_ForceOpen, CeADCR_e_ReqOpt
};                                     /* Referenced by: '<S168>/Calib' */

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(uint8, ADIR_VAR_INIT) KeADIR_Cnt_MaxClsngAttemptsThrshld =
    3U;                                /* Referenced by: '<S132>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(uint8, ADIR_VAR_INIT) KeADIR_Cnt_MaxOpngAttemptsThrshld =
    3U;                                /* Referenced by: '<S133>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(uint16, ADIR_VAR_INIT) KeADIR_Cnt_WEDMechFailure_FailCnt =
    80U;                               /* Referenced by: '<S97>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(uint16, ADIR_VAR_INIT) KeADIR_Cnt_WEDMechFailure_SmpCnt =
    100U;                              /* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(float32, ADIR_VAR_INIT) KeADIR_a_AbsLatAccelMaxTh = 2.5F;/* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(float32, ADIR_VAR_INIT) KeADIR_a_AbsLongAccelMaxTh = 4.0F;/* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_ABSActive_OV = 0;/* Referenced by: '<S66>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_ASRActive_OV = 0;/* Referenced by: '<S67>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_BSM_WEDModeReqFAInit = 0;/* Referenced by: '<S158>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_BSM_WEDModeReqFA_D = 0;/* Referenced by: '<S10>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_BSM_WEDModeReqFA_SD = 0;/* Referenced by: '<S11>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_BSM_WEDModeReq_SD = 0;/* Referenced by: '<S12>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_ESCActive_OV = 0;/* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT)
    KeADIR_b_IsDiagGlobalConditionsValid_OV = 0;/* Referenced by: '<S37>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_LatAccelOutOfRange_OV = 0;/* Referenced by: '<S69>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_LftWEDClosingFail_D = 0;/* Referenced by: '<S16>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_LftWEDClosingFail_SD = 0;/* Referenced by: '<S17>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_LftWEDElecFailCheck_OV =
    0;                                 /* Referenced by: '<S38>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_LftWEDOpeningFail_D = 0;/* Referenced by: '<S18>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_LftWEDOpeningFail_SD = 0;/* Referenced by: '<S19>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_LongAccelOutOfRange_OV =
    0;                                 /* Referenced by: '<S70>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_MtrA_SpdFA_OV = 0;/* Referenced by: '<S71>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_RtWEDClosingFail_D = 0;/* Referenced by: '<S20>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_RtWEDClosingFail_SD = 0;/* Referenced by: '<S21>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_RtWEDElecFailCheck_OV = 0;/* Referenced by: '<S39>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_RtWEDOpeningFail_D = 0;/* Referenced by: '<S22>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_RtWEDOpeningFail_SD = 0;/* Referenced by: '<S23>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_SteerAngleOutOfRange_OV =
    0;                                 /* Referenced by: '<S72>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_VehSpdOutOfRange_OV = 0;/* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_WEDBrokenDiagEn = 1;/* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_WEDExtToolCmd_SD = 0;/* Referenced by: '<S24>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_WEDFailuresTARoutine_D =
    0;                                 /* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_WEDFailuresTARoutine_SD =
    0;                                 /* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_WEDMechFailure_Sts_SD = 0;/* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_WEDOverrideDiagEn = 1;/* Referenced by: '<S144>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_WEDRetryDiagEn = 1;/* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_WEDSystemFailure_D = 0;/* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_WEDSystemFailure_SD = 0;/* Referenced by: '<S29>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_WhlSpdLHF_FA_OV = 0;/* Referenced by: '<S74>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(boolean, ADIR_VAR_INIT) KeADIR_b_WhlSpdRHF_FA_OV = 0;/* Referenced by: '<S75>/Calib' */

#endif

static volatile CONST(TeADCR_e_AWDReq, ADIR_VAR_INIT)
    KeADIR_e_BSM_WEDModeReqDflt = CeADCR_e_ForceClosed;/* Referenced by:
                                                        * '<S167>/Calib'
                                                        * '<S169>/Calib'
                                                        */

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(TeADCR_e_AWDReq, ADIR_VAR_INIT)
    KeADIR_e_BSM_WEDModeReqInit = CeADCR_e_ReqOpt;/* Referenced by: '<S159>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(TeADCR_e_AWDReq, ADIR_VAR_INIT) KeADIR_e_BSM_WEDModeReq_D =
    CeADCR_e_ReqOpt;                   /* Referenced by: '<S13>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(TeADIR_e_WEDExtToolCmd, ADIR_VAR_INIT)
    KeADIR_e_WEDExtToolCmd_D = CeADIR_e_ECUNormalControl;/* Referenced by: '<S30>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(TeADIR_e_WEDFailureSts, ADIR_VAR_INIT)
    KeADIR_e_WEDMechFailure_Sts_D = CeADIR_e_BreakageNotTested;/* Referenced by: '<S31>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(float32, ADIR_VAR_INIT) KeADIR_n_MtrANeutralZone = 3.0F;/* Referenced by: '<S76>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(float32, ADIR_VAR_INIT) KeADIR_n_WEDBrokenOpenTh = 50.0F;/* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(float32, ADIR_VAR_INIT) KeADIR_phi_AbsSteerAngleMaxTh =
    90.0F;                             /* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(float32, ADIR_VAR_INIT) KeADIR_r_FinalDriveRatio = 11.0F;/* Referenced by: '<S77>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(float32, ADIR_VAR_INIT) KeADIR_t_MedTED = 0.02F;/* Referenced by: '<S81>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(float32, ADIR_VAR_INIT) KeADIR_t_MtrABrkngTmLmt = 3.0F;/* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(float32, ADIR_VAR_INIT) KeADIR_v_VehSpdSignedMaxTh =
    250.0F;                            /* Referenced by: '<S117>/Calib' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static volatile CONST(float32, ADIR_VAR_INIT) KeADIR_v_VehSpdSignedMinTh = 15.0F;/* Referenced by: '<S118>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_ADIR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADIR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(TeADIR_e_WEDExtToolCmd, ADIR_VAR_INIT) AeADIR_e_WEDExtToolCmd;/* '<Root>/DSM_23' */

#if Rte_SysCon_Variant_ADIR_1

static VAR(uint16, ADIR_VAR_INIT) VeADIR_Cnt_WEDMechFailure_FailCnt;/* '<S107>/Switch1' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(uint16, ADIR_VAR_INIT) VeADIR_Cnt_WEDMechFailure_SmpCnt;/* '<S108>/Switch1' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_LatAccelOutOfRange;/* '<S55>/Comparison5' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_LftWEDClsngAttExcdd;/* '<S121>/Comparison3' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_LftWEDOpngAttExcdd;/* '<S121>/Comparison2' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_LftWEDShiftTestFailed;/* '<S120>/LftWEDRetryCheck' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_LftWEDShiftTestPassed;/* '<S120>/LftWEDRetryCheck' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_LongAccelOutOfRange;/* '<S55>/Comparison4' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_MtrAZeroSpd;/* '<S52>/Comparison2' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_RtWEDClsngAttExcdd;/* '<S121>/Comparison4' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_RtWEDOpngAttExcdd;/* '<S121>/Comparison1' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_RtWEDShiftTestFailed;/* '<S122>/RtWEDRetryCheck' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_RtWEDShiftTestPassed;/* '<S122>/RtWEDRetryCheck' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_SteerAngleOutOfRange;/* '<S55>/Comparison3' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_VehSpdOutOfRange;/* '<S55>/Logical6' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_WEDClsngFail_EnblCnds;/* '<S51>/AND2' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_WEDClsngFail_RstCnds;/* '<S51>/Logical1' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_WEDFailureDiag_CntRst;/* '<S53>/MechFailureCheck' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_WEDFailureDiag_Enbl;/* '<S53>/MechFailureCheck' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_WEDFailureDiag_Fail;/* '<S53>/MechFailureCheck' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_WEDMechFailure_Confirmed;/* '<S43>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_WEDMechFailure_FltDtct;/* '<S99>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(boolean, ADIR_VAR_INIT) VeADIR_b_WEDOpngFail_EnblCnds;/* '<S51>/Logical14' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(TeADIR_e_WEDRetryDiagState, ADIR_VAR_INIT)
    VeADIR_e_LftWEDRetryDiagState;     /* '<S120>/LftWEDRetryCheck' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(TeADIR_e_WEDRetryDiagState, ADIR_VAR_INIT)
    VeADIR_e_RtWEDRetryDiagState;      /* '<S122>/RtWEDRetryCheck' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(TeADIR_e_WEDFailureDiagState, ADIR_VAR_INIT)
    VeADIR_e_WEDFailureDiagState;      /* '<S53>/MechFailureCheck' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(float32, ADIR_VAR_INIT) VeADIR_n_MtrAWhlsSlipSpd;/* '<S52>/Abs' */

#endif

#if Rte_SysCon_Variant_ADIR_1

static VAR(float32, ADIR_VAR_INIT) VeADIR_t_MtrABrkngTmr;/* '<S53>/MechFailureCheck' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADIR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ADIR
#include "MemMap.h"

CONST(ConstB_ADIR_ac_T, ADIR_VAR_INIT) ADIR_ac_ConstB =
{
    CeDFIB_e_Init,                     /* '<S162>/Constant' */
    CeDFIB_e_Init,                     /* '<S163>/Constant' */
    CeDFIB_e_Init,                     /* '<S164>/Constant' */
    CeDFIB_e_Init,                     /* '<S160>/Constant' */
    CeADIR_e_BreakageNotTested,        /* '<S165>/Constant' */
    CeADCR_e_ReqOpt                    /* '<S161>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_ADIR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADIR
#include "MemMap.h"

VAR(B_ADIR_ac_T, ADIR_VAR_INIT) ADIR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADIR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADIR
#include "MemMap.h"

VAR(DW_ADIR_ac_T, ADIR_VAR_INIT) ADIR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADIR
#include "MemMap.h"
#if Rte_SysCon_Variant_ADIR_1

static FUNC(void, ADIR_CODE_LOCAL) ADIR_ac_Init_f(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, ADIR_VAR_INIT) rty_e_FaultStsInit);

#endif

#if Rte_SysCon_Variant_ADIR_1

static FUNC(void, ADIR_CODE_LOCAL) ADIR_ac_Pass(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, ADIR_VAR_INIT) rty_e_FaultStsPass);

#endif

#if Rte_SysCon_Variant_ADIR_1

static FUNC(void, ADIR_CODE_LOCAL) ADIR_ac_Fail(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, ADIR_VAR_INIT) rty_e_FaultStsFail);

#endif

/*
 * Output and update for action system:
 *    '<S124>/Init'
 *    '<S135>/Init'
 *    '<S147>/Init'
 */
#if Rte_SysCon_Variant_ADIR_1

static FUNC(void, ADIR_CODE_LOCAL) ADIR_ac_Init_f(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, ADIR_VAR_INIT) rty_e_FaultStsInit)
{
    /* SignalConversion generated from: '<S127>/e_FaultStsInit' incorporates:
     *  Constant: '<S130>/Constant'
     */
    *rty_e_FaultStsInit = CeDFIB_e_Init;
}

#endif

/*
 * Output and update for action system:
 *    '<S124>/Pass'
 *    '<S135>/Pass'
 *    '<S147>/Pass'
 */
#if Rte_SysCon_Variant_ADIR_1

static FUNC(void, ADIR_CODE_LOCAL) ADIR_ac_Pass(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, ADIR_VAR_INIT) rty_e_FaultStsPass)
{
    /* SignalConversion generated from: '<S128>/e_FaultStsPass' incorporates:
     *  Constant: '<S131>/Constant'
     */
    *rty_e_FaultStsPass = CeDFIB_e_Pass;
}

#endif

/*
 * Output and update for action system:
 *    '<S124>/Fail'
 *    '<S135>/Fail'
 *    '<S147>/Fail'
 */
#if Rte_SysCon_Variant_ADIR_1

static FUNC(void, ADIR_CODE_LOCAL) ADIR_ac_Fail(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, ADIR_VAR_INIT) rty_e_FaultStsFail)
{
    /* SignalConversion generated from: '<S126>/e_FaultStsFail' incorporates:
     *  Constant: '<S129>/Constant'
     */
    *rty_e_FaultStsFail = CeDFIB_e_Fail;
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_ADIR_1

FUNC(void, ADIR_CODE) ADIR_FastTEF(void) /* Explicit Task: FastTEF */
{

#if Rte_SysCon_Variant_ADIR_1

    boolean tmp;

#endif

#if Rte_SysCon_Variant_ADIR_1

    TeADCR_e_AWDReq tmp_0;

#endif

#if Rte_SysCon_Variant_ADIR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
    /* Outputs for Function Call SubSystem: '<Root>/ADIR_FastTEF' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Input_Override'
     */
    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S10>/Calib'
     *  Constant: '<S11>/Calib'
     *  Merge: '<Root>/Merge_Outport_25'
     *  SignalConversion generated from: '<S1>/VeADIR_b_BSM_WEDModeReqFA_write'
     */
    if (KeADIR_b_BSM_WEDModeReqFA_SD)
    {
        tmp = KeADIR_b_BSM_WEDModeReqFA_D;
    }
    else
    {
        tmp = Rte_IrvRead_ADIR_FastTEF_BSM_WEDModeReqFA_Init_IRV_IRV();
    }

    /* End of Switch: '<S9>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeADIR_b_BSM_WEDModeReqFA' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIR_b_BSM_WEDModeReqFA'
     */
    (void)Rte_Write_VeADIR_b_BSM_WEDModeReqFA_Value(tmp);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Input_Override'
     */
    /* Switch: '<S9>/Switch7' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S13>/Calib'
     *  Merge: '<Root>/Merge_Outport_1'
     *  SignalConversion generated from: '<S1>/VeADIR_e_BSM_WEDModeReq_write'
     */
    if (KeADIR_b_BSM_WEDModeReq_SD)
    {
        tmp_0 = KeADIR_e_BSM_WEDModeReq_D;
    }
    else
    {
        tmp_0 = Rte_IrvRead_ADIR_FastTEF_BSM_WEDModeReq_Init_IRV_IRV();
    }

    /* Outport: '<Root>/VeADIR_e_BSM_WEDModeReq' incorporates:
     *  SignalConversion generated from: '<S1>/VeADIR_e_BSM_WEDModeReq'
     *  Switch: '<S9>/Switch7'
     */
    (void)Rte_Write_VeADIR_e_BSM_WEDModeReq_Value(tmp_0);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/ADIR_FastTEF' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
#endif

}

#endif

/* Model step function for TID2 */
#if Rte_SysCon_Variant_ADIR_1

FUNC(void, ADIR_CODE) ADIR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_ADIR_1

    TeADCR_e_WEDCmndState tmpRead;

#endif

#if Rte_SysCon_Variant_ADIR_1

    TeADCR_e_WEDCmndState tmpRead_0;

#endif

#if Rte_SysCon_Variant_ADIR_1

    float32 tmpRead_1;

#endif

#if Rte_SysCon_Variant_ADIR_1

    float32 tmpRead_2;

#endif

#if Rte_SysCon_Variant_ADIR_1

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean tmpRead_4;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean tmpRead_5;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean tmpRead_6;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean tmpRead_7;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean tmpRead_8;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean tmpRead_9;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean tmpRead_a;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean tmpRead_b;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean tmpRead_c;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean tmpRead_d;

#endif

#if Rte_SysCon_Variant_ADIR_1

    float32 tmpRead_e;

#endif

#if Rte_SysCon_Variant_ADIR_1

    float32 tmpRead_f;

#endif

#if Rte_SysCon_Variant_ADIR_1

    TeOHSR_e_RngSel tmpRead_g;

#endif

#if Rte_SysCon_Variant_ADIR_1

    TeADAR_e_ActuationStatus tmpRead_h;

#endif

#if Rte_SysCon_Variant_ADIR_1

    TeADAR_e_ActuationStatus tmpRead_i;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_LogicalOperator1_e;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_LogicalOperator_m;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_LogicalOperator_hs;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_LogicalOperator_hn;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_LogicalOperator2_o;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_LogicalOperator_c;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_LogicalOperator_p;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_LogicalOperator_l;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_LogicalOperator3;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_Logical16;

#endif

#if Rte_SysCon_Variant_ADIR_1

    float32 rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_LogicalOperator_k;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_LogicalOperator_j;

#endif

#if Rte_SysCon_Variant_ADIR_1

    float32 rtb_TmpSignalConversionAtVeMSPR_n_MtrA_S;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_TmpSignalConversionAtVeDFIR_b_DsblDi;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_TmpSignalConversionAtVeDFIR_b_PostCo;

#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 rtb_TmpSignalConversionAtVeADCR_Cnt_LftW;

#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 rtb_TmpSignalConversionAtVeADCR_Cnt_Lf_b;

#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 rtb_TmpSignalConversionAtVeADCR_Cnt_RtWE;

#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 rtb_TmpSignalConversionAtVeADCR_Cnt_Rt_p;

#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 rtb_TmpSignalConversionAtStatusByte_LF_W;

#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 rtb_TmpSignalConversionAtStatusByte_LF_b;

#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 rtb_TmpSignalConversionAtStatusByte_LF_a;

#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 rtb_TmpSignalConversionAtStatusByte_RF_W;

#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 rtb_TmpSignalConversionAtStatusByte_RF_k;

#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 rtb_TmpSignalConversionAtStatusByte_RF_l;

#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 rtb_TmpSignalConversionAtStatusByte_LF_m;

#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 rtb_TmpSignalConversionAtStatusByte_RF_g;

#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 rtb_TmpSignalConversionAtStatusByte_WHL_;

#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 rtb_TmpSignalConversionAtStatusByte_WH_e;

#endif

#if Rte_SysCon_Variant_ADIR_1

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;

#endif

#if Rte_SysCon_Variant_ADIR_1

    TeADIR_e_WEDExtToolCmd rtb_TmpSignalConversionAtVeADIR_e_WEDExt;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_Switch2_c_idx_0;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_Switch2_a_idx_0;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_Switch2_k_idx_0;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_Switch2_n_idx_0;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_Switch2_na_idx_0;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean rtb_Switch2_g_idx_0;

#endif

#if Rte_SysCon_Variant_ADIR_1

    TeADIR_e_WEDFailureSts tmp;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean VeADIR_b_WEDClsngFail_EnblCnds_tmp;

#endif

#if Rte_SysCon_Variant_ADIR_1

    boolean VeADIR_b_WEDClsngFail_EnblCnds_tmp_0;

#endif

#if Rte_SysCon_Variant_ADIR_1

    uint32 VeADIR_b_WEDMechFailure_Confirmed_tmp;

#endif

#if Rte_SysCon_Variant_ADIR_1

    uint32 rtb_LogicalOperator_f_tmp;

#endif

#if Rte_SysCon_Variant_ADIR_1

    uint32 rtb_LogicalOperator_b_tmp;

#endif

#if Rte_SysCon_Variant_ADIR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* Inport: '<Root>/VeCSVR_n_WhlSpdRHF' */
    (void)Rte_Read_VeCSVR_n_WhlSpdRHF_Value(&tmpRead_f);

    /* Inport: '<Root>/VeCSVR_n_WhlSpdLHF' */
    (void)Rte_Read_VeCSVR_n_WhlSpdLHF_Value(&tmpRead_e);

    /* Inport: '<Root>/VeMSPR_b_MtrA_SpdFA' */
    (void)Rte_Read_VeMSPR_b_MtrA_SpdFA_Value(&tmpRead_d);

    /* Inport: '<Root>/VeCSVR_b_WhlSpdRHF_FA' */
    (void)Rte_Read_VeCSVR_b_WhlSpdRHF_FA_Value(&tmpRead_c);

    /* Inport: '<Root>/VeCSVR_b_WhlSpdLHF_FA' */
    (void)Rte_Read_VeCSVR_b_WhlSpdLHF_FA_Value(&tmpRead_b);

    /* Inport: '<Root>/VeBRKR_b_ESCActiveFA' */
    (void)Rte_Read_VeBRKR_b_ESCActiveFA_Value(&tmpRead_a);

    /* Inport: '<Root>/VeBRKR_b_ESCActive' */
    (void)Rte_Read_VeBRKR_b_ESCActive_Value(&rtb_LogicalOperator_k);

    /* Inport: '<Root>/VeBRKR_b_ASRActive_FA' */
    (void)Rte_Read_VeBRKR_b_ASRActive_FA_Value(&tmpRead_9);

    /* Inport: '<Root>/VeBRKR_b_ASRActive' */
    (void)Rte_Read_VeBRKR_b_ASRActive_Value(&rtb_LogicalOperator_j);

    /* Inport: '<Root>/VeBRKR_b_ABSActiveFA' */
    (void)Rte_Read_VeBRKR_b_ABSActiveFA_Value(&tmpRead_8);

    /* Inport: '<Root>/VeBRKR_b_ABSActive' */
    (void)Rte_Read_VeBRKR_b_ABSActive_Value(&rtb_Switch2_n_idx_0);

    /* Inport: '<Root>/VePLTR_b_LatAccelFA' */
    (void)Rte_Read_VePLTR_b_LatAccelFA_Value(&tmpRead_7);

    /* Inport: '<Root>/VePLTR_b_LongAccelFA' */
    (void)Rte_Read_VePLTR_b_LongAccelFA_Value(&tmpRead_6);

    /* Inport: '<Root>/VePLTR_b_LwsAngleFA' */
    (void)Rte_Read_VePLTR_b_LwsAngleFA_Value(&tmpRead_5);

    /* Inport: '<Root>/VeCSVR_b_VehSpdFA' */
    (void)Rte_Read_VeCSVR_b_VehSpdFA_Value(&tmpRead_4);

    /* Inport: '<Root>/VePLTR_a_LatAccel' */
    (void)Rte_Read_VePLTR_a_LatAccel_Value(&tmpRead_3);

    /* Inport: '<Root>/VePLTR_a_LongAccel' */
    (void)Rte_Read_VePLTR_a_LongAccel_Value(&tmpRead_2);

    /* Inport: '<Root>/VePLTR_phi_LwsAngle' */
    (void)Rte_Read_VePLTR_phi_LwsAngle_Value(&tmpRead_1);

    /* Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid' */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_LogicalOperator3);

    /* Outputs for Function Call SubSystem: '<Root>/ADIR_MedTED' */
    /* SignalConversion generated from: '<S2>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* Logic: '<S32>/Logical Operator1' incorporates:
     *  Constant: '<S37>/Calib'
     */
    rtb_LogicalOperator1_e = (rtb_LogicalOperator3 ||
        (KeADIR_b_IsDiagGlobalConditionsValid_OV));

    /* SignalConversion generated from: '<S2>/StatusByte_LF_WHL_HubDisConActCntrl' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LF_WHL_HubDisConActCntrl'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LF_WHL_HubDisConActCntrl_Value
        (&rtb_TmpSignalConversionAtStatusByte_LF_W);

    /* Logic: '<S44>/Logical Operator' incorporates:
     *  Constant: '<S44>/Constant1'
     *  Constant: '<S44>/Constant2'
     *  RelationalOperator: '<S44>/Relational Operator1'
     *  RelationalOperator: '<S44>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S44>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S44>/Bitwise Operator2'
     */
    rtb_LogicalOperator_m = (((((uint32)rtb_TmpSignalConversionAtStatusByte_LF_W)
        & 1U) != 0U) && ((((uint32)rtb_TmpSignalConversionAtStatusByte_LF_W) &
                          64U) == 0U));

    /* SignalConversion generated from: '<S2>/StatusByte_LF_WHL_HubDisConActPosSnsr' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsr'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsr_Value
        (&rtb_TmpSignalConversionAtStatusByte_LF_b);

    /* Logic: '<S46>/Logical Operator' incorporates:
     *  Constant: '<S46>/Constant1'
     *  Constant: '<S46>/Constant2'
     *  RelationalOperator: '<S46>/Relational Operator1'
     *  RelationalOperator: '<S46>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S46>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S46>/Bitwise Operator2'
     */
    rtb_LogicalOperator_hs = (((((uint32)
        rtb_TmpSignalConversionAtStatusByte_LF_b) & 1U) != 0U) && ((((uint32)
        rtb_TmpSignalConversionAtStatusByte_LF_b) & 64U) == 0U));

    /* SignalConversion generated from: '<S2>/StatusByte_LF_WHL_HubDisConActPosSnsrCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsrCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsrCktPerf_Value
        (&rtb_TmpSignalConversionAtStatusByte_LF_a);

    /* Logic: '<S48>/Logical Operator' incorporates:
     *  Constant: '<S48>/Constant1'
     *  Constant: '<S48>/Constant2'
     *  RelationalOperator: '<S48>/Relational Operator1'
     *  RelationalOperator: '<S48>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S48>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S48>/Bitwise Operator2'
     */
    rtb_LogicalOperator_hn = (((((uint32)
        rtb_TmpSignalConversionAtStatusByte_LF_a) & 1U) != 0U) && ((((uint32)
        rtb_TmpSignalConversionAtStatusByte_LF_a) & 64U) == 0U));

    /* Logic: '<S32>/Logical Operator2' incorporates:
     *  Constant: '<S38>/Calib'
     *  Logic: '<S32>/Logical Operator'
     *  Logic: '<S32>/Logical Operator4'
     *  Logic: '<S32>/Logical Operator5'
     *  Logic: '<S32>/Logical Operator6'
     */
    rtb_LogicalOperator2_o = ((((!rtb_LogicalOperator_m) &&
        (!rtb_LogicalOperator_hs)) && (!rtb_LogicalOperator_hn)) ||
        (KeADIR_b_LftWEDElecFailCheck_OV));

    /* SignalConversion generated from: '<S2>/StatusByte_RF_WHL_HubDisConActCntrl' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RF_WHL_HubDisConActCntrl'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RF_WHL_HubDisConActCntrl_Value
        (&rtb_TmpSignalConversionAtStatusByte_RF_W);

    /* Logic: '<S45>/Logical Operator' incorporates:
     *  Constant: '<S45>/Constant1'
     *  Constant: '<S45>/Constant2'
     *  RelationalOperator: '<S45>/Relational Operator1'
     *  RelationalOperator: '<S45>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S45>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S45>/Bitwise Operator2'
     */
    rtb_LogicalOperator_c = (((((uint32)rtb_TmpSignalConversionAtStatusByte_RF_W)
        & 1U) != 0U) && ((((uint32)rtb_TmpSignalConversionAtStatusByte_RF_W) &
                          64U) == 0U));

    /* SignalConversion generated from: '<S2>/StatusByte_RF_WHL_HubDisConActPosSnsr' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsr'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsr_Value
        (&rtb_TmpSignalConversionAtStatusByte_RF_k);

    /* Logic: '<S47>/Logical Operator' incorporates:
     *  Constant: '<S47>/Constant1'
     *  Constant: '<S47>/Constant2'
     *  RelationalOperator: '<S47>/Relational Operator1'
     *  RelationalOperator: '<S47>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S47>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S47>/Bitwise Operator2'
     */
    rtb_LogicalOperator_p = (((((uint32)rtb_TmpSignalConversionAtStatusByte_RF_k)
        & 1U) != 0U) && ((((uint32)rtb_TmpSignalConversionAtStatusByte_RF_k) &
                          64U) == 0U));

    /* SignalConversion generated from: '<S2>/StatusByte_RF_WHL_HubDisConActPosSnsrCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsrCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsrCktPerf_Value
        (&rtb_TmpSignalConversionAtStatusByte_RF_l);

    /* Logic: '<S49>/Logical Operator' incorporates:
     *  Constant: '<S49>/Constant1'
     *  Constant: '<S49>/Constant2'
     *  RelationalOperator: '<S49>/Relational Operator1'
     *  RelationalOperator: '<S49>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S49>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S49>/Bitwise Operator2'
     */
    rtb_LogicalOperator_l = (((((uint32)rtb_TmpSignalConversionAtStatusByte_RF_l)
        & 1U) != 0U) && ((((uint32)rtb_TmpSignalConversionAtStatusByte_RF_l) &
                          64U) == 0U));

    /* Logic: '<S32>/Logical Operator3' incorporates:
     *  Constant: '<S39>/Calib'
     *  Logic: '<S32>/Logical Operator10'
     *  Logic: '<S32>/Logical Operator7'
     *  Logic: '<S32>/Logical Operator8'
     *  Logic: '<S32>/Logical Operator9'
     */
    rtb_LogicalOperator3 = ((((!rtb_LogicalOperator_c) &&
        (!rtb_LogicalOperator_p)) && (!rtb_LogicalOperator_l)) ||
                            (KeADIR_b_RtWEDElecFailCheck_OV));

    /* Logic: '<S54>/Logical16' */
    rtb_Logical16 = ((rtb_LogicalOperator1_e && rtb_LogicalOperator2_o) &&
                     rtb_LogicalOperator3);

    /* SignalConversion generated from: '<S2>/VeCSVR_v_VehSpdSigned' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
     */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value
        (&rtb_TmpSignalConversionAtVeCSVR_v_VehSpd);

    /* Logic: '<S55>/Logical6' incorporates:
     *  Constant: '<S117>/Calib'
     *  Constant: '<S118>/Calib'
     *  RelationalOperator: '<S55>/Comparison1'
     *  RelationalOperator: '<S55>/Comparison2'
     */
    VeADIR_b_VehSpdOutOfRange = ((rtb_TmpSignalConversionAtVeCSVR_v_VehSpd >
        KeADIR_v_VehSpdSignedMaxTh) || (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd
        < KeADIR_v_VehSpdSignedMinTh));

    /* RelationalOperator: '<S55>/Comparison3' incorporates:
     *  Abs: '<S55>/Abs'
     *  Constant: '<S116>/Calib'
     */
    VeADIR_b_SteerAngleOutOfRange = (fabsf(tmpRead_1) >
        KeADIR_phi_AbsSteerAngleMaxTh);

    /* Switch: '<S62>/Switch2' incorporates:
     *  Constant: '<S72>/Calib'
     */
    rtb_Switch2_c_idx_0 = ((!KeADIR_b_SteerAngleOutOfRange_OV) &&
                           (VeADIR_b_SteerAngleOutOfRange));

    /* RelationalOperator: '<S55>/Comparison4' incorporates:
     *  Abs: '<S55>/Abs1'
     *  Constant: '<S115>/Calib'
     */
    VeADIR_b_LongAccelOutOfRange = (fabsf(tmpRead_2) >
        KeADIR_a_AbsLongAccelMaxTh);

    /* Switch: '<S60>/Switch2' incorporates:
     *  Constant: '<S70>/Calib'
     */
    rtb_Switch2_a_idx_0 = ((!KeADIR_b_LongAccelOutOfRange_OV) &&
                           (VeADIR_b_LongAccelOutOfRange));

    /* RelationalOperator: '<S55>/Comparison5' incorporates:
     *  Abs: '<S55>/Abs2'
     *  Constant: '<S114>/Calib'
     */
    VeADIR_b_LatAccelOutOfRange = (fabsf(tmpRead_3) > KeADIR_a_AbsLatAccelMaxTh);

    /* Switch: '<S59>/Switch2' incorporates:
     *  Constant: '<S69>/Calib'
     */
    rtb_Switch2_k_idx_0 = ((!KeADIR_b_LatAccelOutOfRange_OV) &&
                           (VeADIR_b_LatAccelOutOfRange));

    /* Switch: '<S56>/Switch2' incorporates:
     *  Constant: '<S66>/Calib'
     */
    rtb_Switch2_n_idx_0 = ((!KeADIR_b_ABSActive_OV) && rtb_Switch2_n_idx_0);

    /* Switch: '<S57>/Switch2' incorporates:
     *  Constant: '<S67>/Calib'
     */
    rtb_Switch2_na_idx_0 = ((!KeADIR_b_ASRActive_OV) && rtb_LogicalOperator_j);

    /* Switch: '<S58>/Switch2' incorporates:
     *  Constant: '<S68>/Calib'
     */
    rtb_Switch2_g_idx_0 = ((!KeADIR_b_ESCActive_OV) && rtb_LogicalOperator_k);

    /* SignalConversion generated from: '<S2>/StatusByte_LF_WHL_HubDisConActPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LF_WHL_HubDisConActPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LF_WHL_HubDisConActPerf_Value
        (&rtb_TmpSignalConversionAtStatusByte_LF_m);

    /* Outputs for Enabled SubSystem: '<S35>/LeftWEDRetryDiag' incorporates:
     *  EnablePort: '<S120>/Enable'
     */
    /* S-Function (sfix_bitop): '<S40>/Bitwise Operator1' incorporates:
     *  S-Function (sfix_bitop): '<S124>/Bitwise Operator2'
     */
    rtb_LogicalOperator_f_tmp = ((uint32)
        rtb_TmpSignalConversionAtStatusByte_LF_m) & 64U;

    /* End of Outputs for SubSystem: '<S35>/LeftWEDRetryDiag' */

    /* Logic: '<S40>/Logical Operator' incorporates:
     *  Constant: '<S40>/Constant1'
     *  Constant: '<S40>/Constant2'
     *  RelationalOperator: '<S40>/Relational Operator1'
     *  RelationalOperator: '<S40>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S40>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S40>/Bitwise Operator2'
     */
    rtb_LogicalOperator_k = (((((uint32)rtb_TmpSignalConversionAtStatusByte_LF_m)
        & 1U) != 0U) && (rtb_LogicalOperator_f_tmp == 0U));

    /* SignalConversion generated from: '<S2>/StatusByte_RF_WHL_HubDisConActPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RF_WHL_HubDisConActPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RF_WHL_HubDisConActPerf_Value
        (&rtb_TmpSignalConversionAtStatusByte_RF_g);

    /* Outputs for Enabled SubSystem: '<S35>/RightWEDRetryDiag' incorporates:
     *  EnablePort: '<S122>/Enable'
     */
    /* S-Function (sfix_bitop): '<S41>/Bitwise Operator1' incorporates:
     *  S-Function (sfix_bitop): '<S135>/Bitwise Operator2'
     */
    rtb_LogicalOperator_b_tmp = ((uint32)
        rtb_TmpSignalConversionAtStatusByte_RF_g) & 64U;

    /* End of Outputs for SubSystem: '<S35>/RightWEDRetryDiag' */

    /* Logic: '<S41>/Logical Operator' incorporates:
     *  Constant: '<S41>/Constant1'
     *  Constant: '<S41>/Constant2'
     *  RelationalOperator: '<S41>/Relational Operator1'
     *  RelationalOperator: '<S41>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S41>/Bitwise Operator2'
     */
    rtb_LogicalOperator_j = (((((uint32)rtb_TmpSignalConversionAtStatusByte_RF_g)
        & 1U) != 0U) && (rtb_LogicalOperator_b_tmp == 0U));

    /* Logic: '<S51>/Logical15' incorporates:
     *  Constant: '<S71>/Calib'
     *  Logic: '<S51>/AND19'
     *  Logic: '<S51>/AND20'
     *  Logic: '<S51>/AND21'
     *  Switch: '<S61>/Switch22'
     */
    tmpRead_d = ((KeADIR_b_MtrA_SpdFA_OV) || (!tmpRead_d));
    VeADIR_b_WEDClsngFail_EnblCnds_tmp = !rtb_LogicalOperator_k;
    VeADIR_b_WEDClsngFail_EnblCnds_tmp_0 = !rtb_LogicalOperator_j;

    /* Logic: '<S51>/AND2' incorporates:
     *  Constant: '<S66>/Calib'
     *  Constant: '<S67>/Calib'
     *  Constant: '<S68>/Calib'
     *  Constant: '<S69>/Calib'
     *  Constant: '<S70>/Calib'
     *  Constant: '<S72>/Calib'
     *  Constant: '<S73>/Calib'
     *  Constant: '<S74>/Calib'
     *  Constant: '<S75>/Calib'
     *  Logic: '<S51>/AND1'
     *  Logic: '<S51>/Logical15'
     *  Switch: '<S56>/Switch2'
     *  Switch: '<S57>/Switch2'
     *  Switch: '<S58>/Switch2'
     *  Switch: '<S59>/Switch2'
     *  Switch: '<S60>/Switch2'
     *  Switch: '<S62>/Switch2'
     *  Switch: '<S63>/Switch2'
     *  Switch: '<S64>/Switch22'
     *  Switch: '<S65>/Switch22'
     */
    VeADIR_b_WEDClsngFail_EnblCnds = (((((((((((((((((((rtb_Logical16 &&
        ((KeADIR_b_VehSpdOutOfRange_OV) || (!VeADIR_b_VehSpdOutOfRange))) &&
        ((KeADIR_b_VehSpdOutOfRange_OV) || (!tmpRead_4))) &&
        (!rtb_Switch2_c_idx_0)) && ((KeADIR_b_SteerAngleOutOfRange_OV) ||
        (!tmpRead_5))) && (!rtb_Switch2_a_idx_0)) &&
        ((KeADIR_b_LongAccelOutOfRange_OV) || (!tmpRead_6))) &&
        (!rtb_Switch2_k_idx_0)) && ((KeADIR_b_LatAccelOutOfRange_OV) ||
        (!tmpRead_7))) && (!rtb_Switch2_n_idx_0)) && ((KeADIR_b_ABSActive_OV) ||
        (!tmpRead_8))) && (!rtb_Switch2_na_idx_0)) && ((KeADIR_b_ASRActive_OV) ||
        (!tmpRead_9))) && (!rtb_Switch2_g_idx_0)) && ((KeADIR_b_ESCActive_OV) ||
        (!tmpRead_a))) && ((KeADIR_b_WhlSpdLHF_FA_OV) || (!tmpRead_b))) &&
        ((KeADIR_b_WhlSpdRHF_FA_OV) || (!tmpRead_c))) && tmpRead_d) &&
        VeADIR_b_WEDClsngFail_EnblCnds_tmp) &&
        VeADIR_b_WEDClsngFail_EnblCnds_tmp_0);

    /* Logic: '<S51>/Logical14' */
    VeADIR_b_WEDOpngFail_EnblCnds = (((rtb_Logical16 && tmpRead_d) &&
        VeADIR_b_WEDClsngFail_EnblCnds_tmp) &&
        VeADIR_b_WEDClsngFail_EnblCnds_tmp_0);

    /* Logic: '<S51>/Logical1' */
    VeADIR_b_WEDClsngFail_RstCnds = (((((rtb_Switch2_c_idx_0 ||
        rtb_Switch2_a_idx_0) || rtb_Switch2_k_idx_0) || rtb_Switch2_n_idx_0) ||
        rtb_Switch2_na_idx_0) || rtb_Switch2_g_idx_0);

    /* SignalConversion generated from: '<S2>/VeMSPR_n_MtrA_Spd' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
     */
    (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value
        (&rtb_TmpSignalConversionAtVeMSPR_n_MtrA_S);

    /* Abs: '<S52>/Abs' incorporates:
     *  Constant: '<S52>/Constant Value1'
     *  Constant: '<S77>/Calib'
     *  Product: '<S52>/Product1'
     *  Product: '<S52>/Product2'
     *  Sum: '<S52>/Sum'
     *  Sum: '<S52>/Sum1'
     */
    VeADIR_n_MtrAWhlsSlipSpd = fabsf(((tmpRead_e + tmpRead_f) / 2.0F) -
        (rtb_TmpSignalConversionAtVeMSPR_n_MtrA_S / KeADIR_r_FinalDriveRatio));

    /* RelationalOperator: '<S52>/Comparison2' incorporates:
     *  Abs: '<S52>/Abs1'
     *  Constant: '<S76>/Calib'
     */
    VeADIR_b_MtrAZeroSpd = (fabsf(rtb_TmpSignalConversionAtVeMSPR_n_MtrA_S) <
                            KeADIR_n_MtrANeutralZone);

    /* SignalConversion generated from: '<S2>/StatusByte_WHL_HubDisConSysPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_WHL_HubDisConSysPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_WHL_HubDisConSysPerf_Value
        (&rtb_TmpSignalConversionAtStatusByte_WHL_);

    /* S-Function (sfix_bitop): '<S43>/Bitwise Operator1' incorporates:
     *  S-Function (sfix_bitop): '<S99>/Bitwise Operator2'
     */
    VeADIR_b_WEDMechFailure_Confirmed_tmp = ((uint32)
        rtb_TmpSignalConversionAtStatusByte_WHL_) & 64U;

    /* Logic: '<S43>/Logical Operator' incorporates:
     *  Constant: '<S43>/Constant1'
     *  Constant: '<S43>/Constant2'
     *  RelationalOperator: '<S43>/Relational Operator1'
     *  RelationalOperator: '<S43>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S43>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S43>/Bitwise Operator2'
     */
    VeADIR_b_WEDMechFailure_Confirmed = (((((uint32)
        rtb_TmpSignalConversionAtStatusByte_WHL_) & 1U) != 0U) &&
        (VeADIR_b_WEDMechFailure_Confirmed_tmp == 0U));

    /* Chart: '<S53>/MechFailureCheck' incorporates:
     *  Constant: '<S79>/Calib'
     *  Constant: '<S80>/Calib'
     *  Constant: '<S81>/Calib'
     *  Constant: '<S82>/Calib'
     *  Inport: '<Root>/VeADAR_e_LeftActuationStatus'
     *  Inport: '<Root>/VeADAR_e_RightActuationStatus'
     *  Inport: '<Root>/VeOHSR_e_RngDsrd'
     */
    /* Gateway: ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailureCheck */
    /* During: ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailureCheck */
    if (((uint32)ADIR_ac_DW.is_active_c14_ADIR_ac) == 0U)
    {
        /* Entry: ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailureCheck */
        ADIR_ac_DW.is_active_c14_ADIR_ac = 1U;

        /* Entry Internal: ADIR_MedTED/WED_Diagnostics/WEDMechFailureDiag/MechFailureDiag/MechFailureCheck */
        /* Transition: '<S84>:321' */
        ADIR_ac_DW.is_c14_ADIR_ac = ADIR_ac_IN_WEDBrokenDiag_INIT;

        /* RelationalOperator: '<S78>/Comparison2' */
        /* Entry 'WEDBrokenDiag_INIT': '<S84>:103' */
        /*  Current state */
        VeADIR_e_WEDFailureDiagState = CeADIR_e_BrkgDiag_Init;

        /*  XoY Enable and Fail flags OFF */
        VeADIR_b_WEDFailureDiag_Enbl = false;
        VeADIR_b_WEDFailureDiag_Fail = false;

        /*  Reset MtrA deadzone timer */
        VeADIR_t_MtrABrkngTmr = 0.0F;

        /*  XoY Counters Reset ON */
        VeADIR_b_WEDFailureDiag_CntRst = true;
    }
    else
    {
        (void)Rte_Read_VeOHSR_e_RngDsrd_Value(&tmpRead_g);
        (void)Rte_Read_VeADAR_e_LeftActuationStatus_Value(&tmpRead_h);
        (void)Rte_Read_VeADAR_e_RightActuationStatus_Value(&tmpRead_i);
        switch (ADIR_ac_DW.is_c14_ADIR_ac)
        {
          case ADIR_ac_IN_WEDBrokenCLOSEDDiag:
            /* During 'WEDBrokenCLOSEDDiag': '<S84>:378' */
            rtb_Switch2_c_idx_0 = !VeADIR_b_WEDMechFailure_Confirmed;
            if ((((uint32)tmpRead_g) != CeOHSR_e_RngSel_N) &&
                    rtb_Switch2_c_idx_0)
            {
                /* Transition: '<S84>:391' */
                /* Transition: '<S84>:390' */
                /* Transition: '<S84>:388' */
                /* Transition: '<S84>:389' */
                /* Exit Internal 'WEDBrokenCLOSEDDiag': '<S84>:378' */
                if (((sint32)ADIR_ac_DW.is_WEDBrokenCLOSEDDiag) == 3)
                {
                    /* Exit 'WEDBrokenCLOSEDDiag_WAIT': '<S84>:359' */
                    /*  Reset MtrA deadzone timer */
                    ADIR_ac_DW.is_WEDBrokenCLOSEDDiag =
                        ADIR_ac_IN_NO_ACTIVE_CHILD;
                }
                else
                {
                    ADIR_ac_DW.is_WEDBrokenCLOSEDDiag =
                        ADIR_ac_IN_NO_ACTIVE_CHILD;
                }

                ADIR_ac_DW.is_c14_ADIR_ac = ADIR_ac_IN_WEDBrokenDiag_INIT;

                /* RelationalOperator: '<S78>/Comparison2' */
                /* Entry 'WEDBrokenDiag_INIT': '<S84>:103' */
                /*  Current state */
                VeADIR_e_WEDFailureDiagState = CeADIR_e_BrkgDiag_Init;

                /*  XoY Enable and Fail flags OFF */
                VeADIR_b_WEDFailureDiag_Enbl = false;
                VeADIR_b_WEDFailureDiag_Fail = false;

                /*  Reset MtrA deadzone timer */
                VeADIR_t_MtrABrkngTmr = 0.0F;

                /*  XoY Counters Reset ON */
                VeADIR_b_WEDFailureDiag_CntRst = true;
            }
            else
            {
                switch (ADIR_ac_DW.is_WEDBrokenCLOSEDDiag)
                {
                  case ADIR_ac_IN_WEDBrokenCLOSEDDiag_ACTIVE:
                    /* RelationalOperator: '<S78>/Comparison2' */
                    VeADIR_e_WEDFailureDiagState = CeADIR_e_BrknClsdDiag_Active;
                    VeADIR_b_WEDFailureDiag_CntRst = false;
                    VeADIR_b_WEDFailureDiag_Enbl = true;

                    /* During 'WEDBrokenCLOSEDDiag_ACTIVE': '<S84>:377' */
                    if ((!VeADIR_b_WEDOpngFail_EnblCnds) ||
                            (VeADIR_b_WEDMechFailure_Confirmed))
                    {
                        /* Transition: '<S84>:374' */
                        /* Transition: '<S84>:370' */
                        ADIR_ac_DW.is_WEDBrokenCLOSEDDiag =
                            ADIR_ac_IN_WEDBrokenCLOSEDDiag_STANDBY;

                        /* RelationalOperator: '<S78>/Comparison2' */
                        /* Entry 'WEDBrokenCLOSEDDiag_STANDBY': '<S84>:375' */
                        /*  Current state */
                        VeADIR_e_WEDFailureDiagState =
                            CeADIR_e_BrknClsdDiag_Standby;

                        /*  XoY Enable and Fault checks OFF */
                        VeADIR_b_WEDFailureDiag_Enbl = false;
                        VeADIR_b_WEDFailureDiag_Fail = false;
                    }
                    else
                    {
                        /*  Check for Broken-Closed WED */
                        VeADIR_b_WEDFailureDiag_Fail = !VeADIR_b_MtrAZeroSpd;
                    }
                    break;

                  case ADIR_ac_IN_WEDBrokenCLOSEDDiag_STANDBY:
                    /* RelationalOperator: '<S78>/Comparison2' */
                    VeADIR_e_WEDFailureDiagState = CeADIR_e_BrknClsdDiag_Standby;
                    VeADIR_b_WEDFailureDiag_Enbl = false;

                    /* During 'WEDBrokenCLOSEDDiag_STANDBY': '<S84>:375' */
                    if ((VeADIR_b_WEDOpngFail_EnblCnds) && rtb_Switch2_c_idx_0)
                    {
                        /* Transition: '<S84>:376' */
                        /* Transition: '<S84>:369' */
                        ADIR_ac_DW.is_WEDBrokenCLOSEDDiag =
                            ADIR_ac_IN_WEDBrokenCLOSEDDiag_ACTIVE;

                        /* RelationalOperator: '<S78>/Comparison2' */
                        /* Entry 'WEDBrokenCLOSEDDiag_ACTIVE': '<S84>:377' */
                        /*  Current state */
                        VeADIR_e_WEDFailureDiagState =
                            CeADIR_e_BrknClsdDiag_Active;

                        /*  XoY Counters Reset OFF */
                        VeADIR_b_WEDFailureDiag_CntRst = false;

                        /*  XoY Enable flag ON */
                        VeADIR_b_WEDFailureDiag_Enbl = true;
                    }
                    break;

                  default:
                    /* RelationalOperator: '<S78>/Comparison2' */
                    VeADIR_e_WEDFailureDiagState = CeADIR_e_BrknClsdDiag_Wait;

                    /* During 'WEDBrokenCLOSEDDiag_WAIT': '<S84>:359' */
                    if (VeADIR_t_MtrABrkngTmr >= KeADIR_t_MtrABrkngTmLmt)
                    {
                        /* Transition: '<S84>:372' */
                        /* Exit 'WEDBrokenCLOSEDDiag_WAIT': '<S84>:359' */
                        /*  Reset MtrA deadzone timer */
                        VeADIR_t_MtrABrkngTmr = 0.0F;
                        ADIR_ac_DW.is_WEDBrokenCLOSEDDiag =
                            ADIR_ac_IN_WEDBrokenCLOSEDDiag_ACTIVE;

                        /* RelationalOperator: '<S78>/Comparison2' */
                        /* Entry 'WEDBrokenCLOSEDDiag_ACTIVE': '<S84>:377' */
                        /*  Current state */
                        VeADIR_e_WEDFailureDiagState =
                            CeADIR_e_BrknClsdDiag_Active;

                        /*  XoY Counters Reset OFF */
                        VeADIR_b_WEDFailureDiag_CntRst = false;

                        /*  XoY Enable flag ON */
                        VeADIR_b_WEDFailureDiag_Enbl = true;
                    }
                    else
                    {
                        /*  Waiting for the front motor to slow down after WED's opening */
                        VeADIR_t_MtrABrkngTmr = VeADIR_t_MtrABrkngTmr +
                            KeADIR_t_MedTED;
                    }
                    break;
                }
            }
            break;

          case ADIR_ac_IN_WEDBrokenDiag_INIT:
            /* RelationalOperator: '<S78>/Comparison2' */
            VeADIR_e_WEDFailureDiagState = CeADIR_e_BrkgDiag_Init;
            VeADIR_b_WEDFailureDiag_Enbl = false;
            VeADIR_b_WEDFailureDiag_CntRst = true;

            /* During 'WEDBrokenDiag_INIT': '<S84>:103' */
            if (KeADIR_b_WEDBrokenDiagEn)
            {
                /* Transition: '<S84>:355' */
                if (((VeADIR_b_WEDClsngFail_EnblCnds) && (((uint32)tmpRead_h) ==
                      CeADAR_e_SS_Closed)) && (((uint32)tmpRead_i) ==
                        CeADAR_e_SS_Closed))
                {
                    /* Transition: '<S84>:361' */
                    ADIR_ac_DW.is_c14_ADIR_ac = ADIR_ac_IN_WEDBrokenOPENDiag;

                    /* Entry Internal 'WEDBrokenOPENDiag': '<S84>:325' */
                    /* Transition: '<S84>:337' */
                    ADIR_ac_DW.is_WEDBrokenOPENDiag =
                        ADIR_ac_IN_WEDBrokenOPENDiag_ACTIVE;

                    /* RelationalOperator: '<S78>/Comparison2' */
                    /* Entry 'WEDBrokenOPENDiag_ACTIVE': '<S84>:345' */
                    /*  Current state */
                    VeADIR_e_WEDFailureDiagState = CeADIR_e_BrknOpnDiag_Active;

                    /*  XoY Counters Reset OFF */
                    VeADIR_b_WEDFailureDiag_CntRst = false;

                    /*  XoY Enable flag ON */
                    VeADIR_b_WEDFailureDiag_Enbl = true;
                }
                else
                {
                    /* Transition: '<S84>:381' */
                    if ((((VeADIR_b_WEDOpngFail_EnblCnds) && (((uint32)tmpRead_g)
                           == CeOHSR_e_RngSel_N)) && (((uint32)tmpRead_h) ==
                            CeADAR_e_SS_Open)) && (((uint32)tmpRead_i) ==
                            CeADAR_e_SS_Open))
                    {
                        /* Transition: '<S84>:382' */
                        ADIR_ac_DW.is_c14_ADIR_ac =
                            ADIR_ac_IN_WEDBrokenCLOSEDDiag;

                        /* Entry Internal 'WEDBrokenCLOSEDDiag': '<S84>:378' */
                        /* Transition: '<S84>:393' */
                        ADIR_ac_DW.is_WEDBrokenCLOSEDDiag =
                            ADIR_ac_IN_WEDBrokenCLOSEDDiag_WAIT;

                        /* RelationalOperator: '<S78>/Comparison2' */
                        /* Entry 'WEDBrokenCLOSEDDiag_WAIT': '<S84>:359' */
                        /*  Current state */
                        VeADIR_e_WEDFailureDiagState =
                            CeADIR_e_BrknClsdDiag_Wait;
                    }
                }
            }
            break;

          default:
            /* During 'WEDBrokenOPENDiag': '<S84>:325' */
            rtb_Switch2_c_idx_0 = !VeADIR_b_WEDMechFailure_Confirmed;
            if (((VeADIR_b_WEDClsngFail_RstCnds) || ((((uint32)tmpRead_h) ==
                    CeADAR_e_SS_Open) && (((uint32)tmpRead_i) ==
                    CeADAR_e_SS_Open))) && rtb_Switch2_c_idx_0)
            {
                /* Transition: '<S84>:392' */
                /* Transition: '<S84>:388' */
                /* Transition: '<S84>:389' */
                /* Exit Internal 'WEDBrokenOPENDiag': '<S84>:325' */
                ADIR_ac_DW.is_WEDBrokenOPENDiag = ADIR_ac_IN_NO_ACTIVE_CHILD;
                ADIR_ac_DW.is_c14_ADIR_ac = ADIR_ac_IN_WEDBrokenDiag_INIT;

                /* RelationalOperator: '<S78>/Comparison2' */
                /* Entry 'WEDBrokenDiag_INIT': '<S84>:103' */
                /*  Current state */
                VeADIR_e_WEDFailureDiagState = CeADIR_e_BrkgDiag_Init;

                /*  XoY Enable and Fail flags OFF */
                VeADIR_b_WEDFailureDiag_Enbl = false;
                VeADIR_b_WEDFailureDiag_Fail = false;

                /*  Reset MtrA deadzone timer */
                VeADIR_t_MtrABrkngTmr = 0.0F;

                /*  XoY Counters Reset ON */
                VeADIR_b_WEDFailureDiag_CntRst = true;
            }
            else if (((sint32)ADIR_ac_DW.is_WEDBrokenOPENDiag) == 1)
            {
                /* RelationalOperator: '<S78>/Comparison2' */
                VeADIR_e_WEDFailureDiagState = CeADIR_e_BrknOpnDiag_Active;
                VeADIR_b_WEDFailureDiag_CntRst = false;
                VeADIR_b_WEDFailureDiag_Enbl = true;

                /* During 'WEDBrokenOPENDiag_ACTIVE': '<S84>:345' */
                if ((((!VeADIR_b_WEDClsngFail_EnblCnds) || (((uint32)tmpRead_h)
                        != CeADAR_e_SS_Closed)) || (((uint32)tmpRead_i) !=
                        CeADAR_e_SS_Closed)) ||
                        (VeADIR_b_WEDMechFailure_Confirmed))
                {
                    /* Transition: '<S84>:366' */
                    /* Transition: '<S84>:363' */
                    ADIR_ac_DW.is_WEDBrokenOPENDiag =
                        ADIR_ac_IN_WEDBrokenOPENDiag_STANDBY;

                    /* RelationalOperator: '<S78>/Comparison2' */
                    /* Entry 'WEDBrokenOPENDiag_STANDBY': '<S84>:346' */
                    /*  Current state */
                    VeADIR_e_WEDFailureDiagState = CeADIR_e_BrknOpnDiag_Standby;

                    /*  XoY Enable and Fault checks OFF */
                    VeADIR_b_WEDFailureDiag_Enbl = false;
                    VeADIR_b_WEDFailureDiag_Fail = false;
                }
                else
                {
                    /*  Check for Broken-Open WED */
                    VeADIR_b_WEDFailureDiag_Fail = (VeADIR_n_MtrAWhlsSlipSpd >
                        KeADIR_n_WEDBrokenOpenTh);
                }
            }
            else
            {
                /* RelationalOperator: '<S78>/Comparison2' */
                VeADIR_e_WEDFailureDiagState = CeADIR_e_BrknOpnDiag_Standby;
                VeADIR_b_WEDFailureDiag_Enbl = false;

                /* During 'WEDBrokenOPENDiag_STANDBY': '<S84>:346' */
                if ((((VeADIR_b_WEDClsngFail_EnblCnds) && (((uint32)tmpRead_h) ==
                       CeADAR_e_SS_Closed)) && (((uint32)tmpRead_i) ==
                        CeADAR_e_SS_Closed)) && rtb_Switch2_c_idx_0)
                {
                    /* Transition: '<S84>:368' */
                    /* Transition: '<S84>:364' */
                    ADIR_ac_DW.is_WEDBrokenOPENDiag =
                        ADIR_ac_IN_WEDBrokenOPENDiag_ACTIVE;

                    /* RelationalOperator: '<S78>/Comparison2' */
                    /* Entry 'WEDBrokenOPENDiag_ACTIVE': '<S84>:345' */
                    /*  Current state */
                    VeADIR_e_WEDFailureDiagState = CeADIR_e_BrknOpnDiag_Active;

                    /*  XoY Counters Reset OFF */
                    VeADIR_b_WEDFailureDiag_CntRst = false;

                    /*  XoY Enable flag ON */
                    VeADIR_b_WEDFailureDiag_Enbl = true;
                }
            }
            break;
        }
    }

    /* End of Chart: '<S53>/MechFailureCheck' */

    /* RelationalOperator: '<S99>/Relational Operator3' incorporates:
     *  Constant: '<S99>/Constant3'
     */
    rtb_Switch2_a_idx_0 = (VeADIR_b_WEDMechFailure_Confirmed_tmp == 0U);

    /* SignalConversion generated from: '<S2>/VeDFIR_b_DsblDiagFailSafe' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_DsblDi);

    /* Outputs for Atomic SubSystem: '<S99>/EdgeFalling1' */
    /* Logic: '<S101>/AND' incorporates:
     *  Logic: '<S101>/OR1'
     *  UnitDelay: '<S101>/Unit Delay'
     */
    rtb_Switch2_c_idx_0 = ((!rtb_Switch2_a_idx_0) &&
                           (ADIR_ac_DW.UnitDelay_DSTATE_m));

    /* Update for UnitDelay: '<S101>/Unit Delay' */
    ADIR_ac_DW.UnitDelay_DSTATE_m = rtb_Switch2_a_idx_0;

    /* End of Outputs for SubSystem: '<S99>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S15>/WEDServiceEoLDiag' */
    /* Outputs for Enabled SubSystem: '<S36>/WEDBypassDiag' incorporates:
     *  EnablePort: '<S145>/Enable'
     */
    /* Logic: '<S83>/NOT4' incorporates:
     *  Logic: '<S145>/Logical2'
     *  Logic: '<S35>/Logical2'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_DsblDi =
        (rtb_TmpSignalConversionAtVeDFIR_b_DsblDi ||
         rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* End of Outputs for SubSystem: '<S36>/WEDBypassDiag' */
    /* End of Outputs for SubSystem: '<S15>/WEDServiceEoLDiag' */

    /* Logic: '<S99>/Logical5' incorporates:
     *  Logic: '<S83>/NOT4'
     *  Logic: '<S85>/Logical'
     */
    rtb_Switch2_c_idx_0 = (((VeADIR_b_WEDFailureDiag_CntRst) ||
                            rtb_TmpSignalConversionAtVeDFIR_b_DsblDi) ||
                           rtb_Switch2_c_idx_0);

    /* Outputs for Atomic SubSystem: '<S100>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S100>/Counter Reset  Enabled ' */
    /* Switch: '<S107>/Switch1' incorporates:
     *  Logic: '<S100>/Fail Counter Reset'
     *  Logic: '<S100>/NOT6'
     *  Logic: '<S99>/Logical1'
     *  Switch: '<S107>/Switch2'
     *  Switch: '<S108>/Switch1'
     *  UnitDelay: '<S100>/Unit Delay'
     *  UnitDelay: '<S100>/Unit Delay1'
     */
    if ((rtb_Switch2_c_idx_0 || (ADIR_ac_DW.UnitDelay_DSTATE_e)) ||
            (ADIR_ac_DW.UnitDelay1_DSTATE))
    {
        /* Switch: '<S107>/Switch1' incorporates:
         *  Constant: '<S107>/Constant Value2'
         */
        VeADIR_Cnt_WEDMechFailure_FailCnt = 0U;

        /* Switch: '<S108>/Switch1' incorporates:
         *  Constant: '<S108>/Constant Value2'
         */
        VeADIR_Cnt_WEDMechFailure_SmpCnt = 0U;
    }
    else
    {
        if ((VeADIR_b_WEDFailureDiag_Enbl) && (VeADIR_b_WEDFailureDiag_Fail))
        {
            /* Switch: '<S107>/Switch1' incorporates:
             *  Constant: '<S107>/Constant Value1'
             *  Sum: '<S107>/Subtraction'
             *  Switch: '<S107>/Switch2'
             *  UnitDelay: '<S107>/Unit Delay'
             */
            VeADIR_Cnt_WEDMechFailure_FailCnt = (uint16)(((uint32)
                VeADIR_Cnt_WEDMechFailure_FailCnt) + 1U);
        }

        /* Switch: '<S108>/Switch2' incorporates:
         *  Logic: '<S99>/Logical1'
         */
        if (VeADIR_b_WEDFailureDiag_Enbl)
        {
            /* Switch: '<S108>/Switch1' incorporates:
             *  Constant: '<S108>/Constant Value1'
             *  Sum: '<S108>/Subtraction'
             *  Switch: '<S108>/Switch2'
             *  UnitDelay: '<S108>/Unit Delay'
             */
            VeADIR_Cnt_WEDMechFailure_SmpCnt = (uint16)(((uint32)
                VeADIR_Cnt_WEDMechFailure_SmpCnt) + 1U);
        }

        /* End of Switch: '<S108>/Switch2' */
    }

    /* End of Switch: '<S107>/Switch1' */
    /* End of Outputs for SubSystem: '<S100>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S100>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S100>/Greater Than or Equal ' incorporates:
     *  Constant: '<S97>/Calib'
     */
    ADIR_ac_DW.UnitDelay1_DSTATE = (VeADIR_Cnt_WEDMechFailure_FailCnt >=
        KeADIR_Cnt_WEDMechFailure_FailCnt);

    /* Logic: '<S100>/NOT5' incorporates:
     *  Constant: '<S98>/Calib'
     *  Logic: '<S100>/NOT3'
     *  RelationalOperator: '<S100>/Less Than  or Equal'
     */
    ADIR_ac_DW.UnitDelay_DSTATE_e = ((VeADIR_Cnt_WEDMechFailure_SmpCnt >=
        KeADIR_Cnt_WEDMechFailure_SmpCnt) && (!ADIR_ac_DW.UnitDelay1_DSTATE));

    /* Switch: '<S113>/Switch1' incorporates:
     *  Constant: '<S106>/Constant Value'
     *  DataStoreWrite: '<S85>/Data Store Write3'
     *  Switch: '<S112>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        ADIR_ac_DW.NeADIR_Cnt_WEDMechFailure_MFOP = 0U;
    }
    else
    {
        if (ADIR_ac_DW.UnitDelay_DSTATE_e)
        {
            /* MinMax: '<S106>/Minimum2' incorporates:
             *  DataStoreRead: '<S85>/Data Store Read1'
             *  Switch: '<S112>/Switch1'
             */
            if (VeADIR_Cnt_WEDMechFailure_FailCnt >
                    ADIR_ac_DW.NeADIR_Cnt_WEDMechFailure_MFOP)
            {
                /* DataStoreWrite: '<S85>/Data Store Write3' incorporates:
                 *  Switch: '<S112>/Switch1'
                 */
                ADIR_ac_DW.NeADIR_Cnt_WEDMechFailure_MFOP =
                    VeADIR_Cnt_WEDMechFailure_FailCnt;
            }

            /* End of MinMax: '<S106>/Minimum2' */
        }
    }

    /* End of Switch: '<S113>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S99>/Fail' incorporates:
     *  EnablePort: '<S103>/Enable'
     */
    if (ADIR_ac_DW.UnitDelay1_DSTATE)
    {
        /* RelationalOperator: '<S99>/Relational Operator' incorporates:
         *  Constant: '<S109>/Constant'
         *  Merge: '<S99>/Merge'
         *  SignalConversion generated from: '<S103>/FaultSts'
         */
        ADIR_ac_B.Merge = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S99>/Fail' */

    /* Outputs for Enabled SubSystem: '<S99>/Init' incorporates:
     *  EnablePort: '<S104>/Enable'
     */
    if (rtb_Switch2_c_idx_0)
    {
        /* RelationalOperator: '<S99>/Relational Operator' incorporates:
         *  Constant: '<S110>/Constant'
         *  Merge: '<S99>/Merge'
         *  SignalConversion generated from: '<S104>/FaultSts'
         */
        ADIR_ac_B.Merge = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S99>/Init' */

    /* Outputs for Enabled SubSystem: '<S99>/Pass' incorporates:
     *  EnablePort: '<S105>/Enable'
     */
    if (ADIR_ac_DW.UnitDelay_DSTATE_e)
    {
        /* RelationalOperator: '<S99>/Relational Operator' incorporates:
         *  Constant: '<S111>/Constant'
         *  Merge: '<S99>/Merge'
         *  SignalConversion generated from: '<S105>/FaultSts'
         */
        ADIR_ac_B.Merge = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S99>/Pass' */

    /* RelationalOperator: '<S99>/Relational Operator' incorporates:
     *  Constant: '<S102>/Constant'
     */
    VeADIR_b_WEDMechFailure_FltDtct = (((uint32)ADIR_ac_B.Merge) ==
        CeDFIB_e_Fail);

    /* If: '<S78>/If' incorporates:
     *  Constant: '<S86>/Constant'
     *  Constant: '<S87>/Constant'
     *  Constant: '<S88>/Constant'
     *  Constant: '<S89>/Constant'
     *  Constant: '<S90>/Constant'
     *  Logic: '<S78>/NOT1'
     *  Logic: '<S78>/NOT2'
     *  RelationalOperator: '<S78>/Comparison1'
     *  RelationalOperator: '<S78>/Comparison2'
     *  RelationalOperator: '<S78>/Comparison3'
     *  RelationalOperator: '<S78>/Comparison4'
     *  RelationalOperator: '<S78>/Comparison5'
     */
    if (((uint32)ADIR_ac_B.Merge) == CeDFIB_e_Pass)
    {
        /* Outputs for IfAction SubSystem: '<S78>/WEDStsNoBreakages' incorporates:
         *  ActionPort: '<S93>/Action Port'
         */
        /* Merge: '<S78>/Merge' incorporates:
         *  Constant: '<S96>/Constant'
         *  SignalConversion generated from: '<S93>/WEDStsNoBreakages'
         */
        ADIR_ac_B.Merge_h = CeADIR_e_NoBreakage;

        /* End of Outputs for SubSystem: '<S78>/WEDStsNoBreakages' */
    }
    else if ((((uint32)ADIR_ac_B.Merge) == CeDFIB_e_Fail) && (((uint32)
               VeADIR_e_WEDFailureDiagState) == CeADIR_e_BrknOpnDiag_Active))
    {
        /* Outputs for IfAction SubSystem: '<S78>/WEDStsBrokenOpen' incorporates:
         *  ActionPort: '<S92>/Action Port'
         */
        /* Merge: '<S78>/Merge' incorporates:
         *  Constant: '<S95>/Constant'
         *  SignalConversion generated from: '<S92>/WEDStsBrokenOpen'
         */
        ADIR_ac_B.Merge_h = CeADIR_e_BrokenOpen;

        /* End of Outputs for SubSystem: '<S78>/WEDStsBrokenOpen' */
    }
    else
    {
        if ((((uint32)ADIR_ac_B.Merge) == CeDFIB_e_Fail) && (((uint32)
                VeADIR_e_WEDFailureDiagState) == CeADIR_e_BrknClsdDiag_Active))
        {
            /* Outputs for IfAction SubSystem: '<S78>/WEDStsBrokenClosed' incorporates:
             *  ActionPort: '<S91>/Action Port'
             */
            /* Merge: '<S78>/Merge' incorporates:
             *  Constant: '<S94>/Constant'
             *  SignalConversion generated from: '<S91>/WEDStsBrokenClosed'
             */
            ADIR_ac_B.Merge_h = CeADIR_e_BrokenClosed;

            /* End of Outputs for SubSystem: '<S78>/WEDStsBrokenClosed' */
        }
    }

    /* End of If: '<S78>/If' */

    /* SignalConversion generated from: '<S2>/StatusByte_WHL_HubDisConOvrrideActv' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_WHL_HubDisConOvrrideActv'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_WHL_HubDisConOvrrideActv_Value
        (&rtb_TmpSignalConversionAtStatusByte_WH_e);

    /* Outputs for Atomic SubSystem: '<S15>/WEDServiceEoLDiag' */
    /* Outputs for Enabled SubSystem: '<S36>/WEDBypassDiag' incorporates:
     *  EnablePort: '<S145>/Enable'
     */
    /* S-Function (sfix_bitop): '<S50>/Bitwise Operator1' incorporates:
     *  S-Function (sfix_bitop): '<S147>/Bitwise Operator2'
     */
    VeADIR_b_WEDMechFailure_Confirmed_tmp = ((uint32)
        rtb_TmpSignalConversionAtStatusByte_WH_e) & 64U;

    /* End of Outputs for SubSystem: '<S36>/WEDBypassDiag' */
    /* End of Outputs for SubSystem: '<S15>/WEDServiceEoLDiag' */

    /* Logic: '<S33>/Logical Operator2' incorporates:
     *  Constant: '<S50>/Constant1'
     *  Constant: '<S50>/Constant2'
     *  Logic: '<S50>/Logical Operator'
     *  RelationalOperator: '<S50>/Relational Operator1'
     *  RelationalOperator: '<S50>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S50>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S50>/Bitwise Operator2'
     */
    rtb_TmpSignalConversionAtVeDFIR_b_PostCo = (((((((((rtb_LogicalOperator_k ||
        rtb_LogicalOperator_j) || (VeADIR_b_WEDMechFailure_Confirmed)) ||
        rtb_LogicalOperator_m) || rtb_LogicalOperator_c) ||
        rtb_LogicalOperator_hs) || rtb_LogicalOperator_p) ||
        rtb_LogicalOperator_hn) || rtb_LogicalOperator_l) || (((((uint32)
        rtb_TmpSignalConversionAtStatusByte_WH_e) & 1U) != 0U) &&
        (VeADIR_b_WEDMechFailure_Confirmed_tmp == 0U)));

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_WHL_HubDisConMissCal' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_WHL_HubDisConMissCal'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_WHL_HubDisConMissCal_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

    /* SignalConversion generated from: '<S2>/VeADCR_Cnt_LftWEDClsngAttempts' incorporates:
     *  Inport: '<Root>/VeADCR_Cnt_LftWEDClsngAttempts'
     */
    (void)Rte_Read_VeADCR_Cnt_LftWEDClsngAttempts_Value
        (&rtb_TmpSignalConversionAtVeADCR_Cnt_LftW);

    /* SignalConversion generated from: '<S2>/VeADCR_Cnt_LftWEDOpngAttempts' incorporates:
     *  Inport: '<Root>/VeADCR_Cnt_LftWEDOpngAttempts'
     */
    (void)Rte_Read_VeADCR_Cnt_LftWEDOpngAttempts_Value
        (&rtb_TmpSignalConversionAtVeADCR_Cnt_Lf_b);

    /* RelationalOperator: '<S121>/Comparison3' incorporates:
     *  Constant: '<S132>/Calib'
     */
    VeADIR_b_LftWEDClsngAttExcdd = (rtb_TmpSignalConversionAtVeADCR_Cnt_LftW >=
        KeADIR_Cnt_MaxClsngAttemptsThrshld);

    /* RelationalOperator: '<S121>/Comparison2' incorporates:
     *  Constant: '<S133>/Calib'
     */
    VeADIR_b_LftWEDOpngAttExcdd = (rtb_TmpSignalConversionAtVeADCR_Cnt_Lf_b >=
        KeADIR_Cnt_MaxOpngAttemptsThrshld);

    /* Logic: '<S35>/Logical3' incorporates:
     *  Constant: '<S119>/Calib'
     *  Logic: '<S35>/Logical1'
     */
    rtb_Switch2_c_idx_0 = ((KeADIR_b_WEDRetryDiagEn) && rtb_LogicalOperator1_e);

    /* Outputs for Enabled SubSystem: '<S35>/LeftWEDRetryDiag' incorporates:
     *  EnablePort: '<S120>/Enable'
     */
    if (rtb_Switch2_c_idx_0 && rtb_LogicalOperator2_o)
    {
        /* Chart: '<S120>/LftWEDRetryCheck' incorporates:
         *  Inport: '<Root>/VeADCR_e_WEDLeftCmndMgrSt'
         */
        /* Gateway: ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/LeftWEDRetryDiag/LftWEDRetryCheck */
        /* During: ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/LeftWEDRetryDiag/LftWEDRetryCheck */
        if (((uint32)ADIR_ac_DW.is_active_c1_ADIR_ac) == 0U)
        {
            /* Entry: ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/LeftWEDRetryDiag/LftWEDRetryCheck */
            ADIR_ac_DW.is_active_c1_ADIR_ac = 1U;

            /* Entry Internal: ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/LeftWEDRetryDiag/LftWEDRetryCheck */
            /* Transition: '<S123>:357' */
            ADIR_ac_DW.is_c1_ADIR_ac = ADIR_ac_IN_WEDShiftDetection;

            /* Entry Internal 'WEDShiftDetection': '<S123>:294' */
            /* Transition: '<S123>:298' */
            ADIR_ac_DW.is_WEDShiftDetection_l = ADIR_ac_IN_DiagActive;

            /* Entry 'DiagActive': '<S123>:297' */
            VeADIR_e_LftWEDRetryDiagState = CeADIR_e_DiagActive;
        }
        else
        {
            switch (ADIR_ac_DW.is_c1_ADIR_ac)
            {
              case ADIR_ac_IN_TestFailedFallingEdge:
                VeADIR_b_LftWEDShiftTestFailed = false;

                /* During 'TestFailedFallingEdge': '<S123>:290' */
                if ((((sint32)rtb_TmpSignalConversionAtVeADCR_Cnt_LftW) == 0) &&
                    (((sint32)rtb_TmpSignalConversionAtVeADCR_Cnt_Lf_b) == 0))
                {
                    /* Transition: '<S123>:374' */
                    /* Transition: '<S123>:364' */
                    /* Transition: '<S123>:365' */
                    ADIR_ac_DW.is_c1_ADIR_ac = ADIR_ac_IN_WEDShiftDetection;

                    /* Entry Internal 'WEDShiftDetection': '<S123>:294' */
                    /* Transition: '<S123>:298' */
                    ADIR_ac_DW.is_WEDShiftDetection_l = ADIR_ac_IN_DiagActive;

                    /* Entry 'DiagActive': '<S123>:297' */
                    VeADIR_e_LftWEDRetryDiagState = CeADIR_e_DiagActive;
                }
                break;

              case ADIR_ac_IN_TestFailedRisingEdge:
                VeADIR_e_LftWEDRetryDiagState = CeADIR_e_TestFailed;

                /* During 'TestFailedRisingEdge': '<S123>:287' */
                /* Transition: '<S123>:285' */
                ADIR_ac_DW.is_c1_ADIR_ac = ADIR_ac_IN_TestFailedFallingEdge;

                /* Entry 'TestFailedFallingEdge': '<S123>:290' */
                VeADIR_b_LftWEDShiftTestFailed = false;
                break;

              default:
                /* During 'WEDShiftDetection': '<S123>:294' */
                if ((VeADIR_b_LftWEDClsngAttExcdd) ||
                        (VeADIR_b_LftWEDOpngAttExcdd))
                {
                    /* Transition: '<S123>:372' */
                    /* Exit Internal 'WEDShiftDetection': '<S123>:294' */
                    ADIR_ac_DW.is_WEDShiftDetection_l =
                        ADIR_ac_IN_NO_ACTIVE_CHILD;
                    ADIR_ac_DW.is_c1_ADIR_ac = ADIR_ac_IN_TestFailedRisingEdge;

                    /* Entry 'TestFailedRisingEdge': '<S123>:287' */
                    VeADIR_b_LftWEDShiftTestFailed = true;
                    VeADIR_e_LftWEDRetryDiagState = CeADIR_e_TestFailed;
                }
                else
                {
                    (void)Rte_Read_VeADCR_e_WEDLeftCmndMgrSt_Value(&tmpRead);
                    switch (ADIR_ac_DW.is_WEDShiftDetection_l)
                    {
                      case ADIR_ac_IN_DiagActive:
                        VeADIR_e_LftWEDRetryDiagState = CeADIR_e_DiagActive;

                        /* During 'DiagActive': '<S123>:297' */
                        /* Transition: '<S123>:312' */
                        switch (tmpRead)
                        {
                          case CeADCR_e_ActuateClosed:
                            /* Transition: '<S123>:306' */
                            ADIR_ac_DW.is_WEDShiftDetection_l =
                                ADIR_ac_IN_WaitForSSClosed;

                            /* Entry 'WaitForSSClosed': '<S123>:318' */
                            VeADIR_e_LftWEDRetryDiagState =
                                CeADIR_e_WaitForSSClosed;
                            break;

                          case CeADCR_e_ActuateOpen:
                            /* Transition: '<S123>:315' */
                            ADIR_ac_DW.is_WEDShiftDetection_l =
                                ADIR_ac_IN_WaitForSSOpen;

                            /* Entry 'WaitForSSOpen': '<S123>:319' */
                            VeADIR_e_LftWEDRetryDiagState =
                                CeADIR_e_WaitForSSOpen;
                            break;

                          default:
                            /* no actions */
                            break;
                        }
                        break;

                      case ADIR_ac_IN_TestPassedFallingEdge:
                        VeADIR_b_LftWEDShiftTestPassed = false;

                        /* During 'TestPassedFallingEdge': '<S123>:301' */
                        /* Transition: '<S123>:337' */
                        /* Transition: '<S123>:344' */
                        /* Transition: '<S123>:346' */
                        /* Transition: '<S123>:347' */
                        ADIR_ac_DW.is_WEDShiftDetection_l =
                            ADIR_ac_IN_DiagActive;

                        /* Entry 'DiagActive': '<S123>:297' */
                        VeADIR_e_LftWEDRetryDiagState = CeADIR_e_DiagActive;
                        break;

                      case ADIR_ac_IN_TestPassedRisingEdge:
                        VeADIR_e_LftWEDRetryDiagState = CeADIR_e_TestPassed;

                        /* During 'TestPassedRisingEdge': '<S123>:302' */
                        /* Transition: '<S123>:300' */
                        ADIR_ac_DW.is_WEDShiftDetection_l =
                            ADIR_ac_IN_TestPassedFallingEdge;

                        /* Entry 'TestPassedFallingEdge': '<S123>:301' */
                        VeADIR_b_LftWEDShiftTestPassed = false;
                        break;

                      case ADIR_ac_IN_WaitForSSClosed:
                        VeADIR_e_LftWEDRetryDiagState = CeADIR_e_WaitForSSClosed;

                        /* During 'WaitForSSClosed': '<S123>:318' */
                        /* Transition: '<S123>:341' */
                        if (((uint32)tmpRead) == CeADCR_e_SSClosed)
                        {
                            /* Transition: '<S123>:321' */
                            /* Transition: '<S123>:332' */
                            ADIR_ac_DW.is_WEDShiftDetection_l =
                                ADIR_ac_IN_TestPassedRisingEdge;

                            /* Entry 'TestPassedRisingEdge': '<S123>:302' */
                            VeADIR_b_LftWEDShiftTestPassed = true;
                            VeADIR_e_LftWEDRetryDiagState = CeADIR_e_TestPassed;
                        }
                        else
                        {
                            if (((uint32)tmpRead) != CeADCR_e_ActuateClosed)
                            {
                                /* Transition: '<S123>:343' */
                                /* Transition: '<S123>:346' */
                                /* Transition: '<S123>:347' */
                                ADIR_ac_DW.is_WEDShiftDetection_l =
                                    ADIR_ac_IN_DiagActive;

                                /* Entry 'DiagActive': '<S123>:297' */
                                VeADIR_e_LftWEDRetryDiagState =
                                    CeADIR_e_DiagActive;
                            }
                        }
                        break;

                      default:
                        VeADIR_e_LftWEDRetryDiagState = CeADIR_e_WaitForSSOpen;

                        /* During 'WaitForSSOpen': '<S123>:319' */
                        /* Transition: '<S123>:351' */
                        if (((uint32)tmpRead) == CeADCR_e_SSOpen)
                        {
                            /* Transition: '<S123>:326' */
                            /* Transition: '<S123>:332' */
                            ADIR_ac_DW.is_WEDShiftDetection_l =
                                ADIR_ac_IN_TestPassedRisingEdge;

                            /* Entry 'TestPassedRisingEdge': '<S123>:302' */
                            VeADIR_b_LftWEDShiftTestPassed = true;
                            VeADIR_e_LftWEDRetryDiagState = CeADIR_e_TestPassed;
                        }
                        else
                        {
                            if ((((uint32)tmpRead) != CeADCR_e_ActuateOpen) &&
                                    (((uint32)tmpRead) !=
                                     CeADCR_e_WgglActuateOpen))
                            {
                                /* Transition: '<S123>:353' */
                                /* Transition: '<S123>:355' */
                                /* Transition: '<S123>:356' */
                                ADIR_ac_DW.is_WEDShiftDetection_l =
                                    ADIR_ac_IN_DiagActive;

                                /* Entry 'DiagActive': '<S123>:297' */
                                VeADIR_e_LftWEDRetryDiagState =
                                    CeADIR_e_DiagActive;
                            }
                        }
                        break;
                    }
                }
                break;
            }
        }

        /* End of Chart: '<S120>/LftWEDRetryCheck' */

        /* RelationalOperator: '<S124>/Relational Operator3' incorporates:
         *  Constant: '<S124>/Constant3'
         */
        rtb_LogicalOperator1_e = (rtb_LogicalOperator_f_tmp == 0U);

        /* Outputs for Atomic SubSystem: '<S124>/EdgeFalling1' */
        /* Logic: '<S125>/AND' incorporates:
         *  Logic: '<S125>/OR1'
         *  UnitDelay: '<S125>/Unit Delay'
         */
        rtb_LogicalOperator2_o = ((!rtb_LogicalOperator1_e) &&
            (ADIR_ac_DW.UnitDelay_DSTATE_j));

        /* Update for UnitDelay: '<S125>/Unit Delay' */
        ADIR_ac_DW.UnitDelay_DSTATE_j = rtb_LogicalOperator1_e;

        /* End of Outputs for SubSystem: '<S124>/EdgeFalling1' */

        /* If: '<S124>/If' incorporates:
         *  Logic: '<S124>/Logical5'
         */
        if (rtb_LogicalOperator2_o || rtb_TmpSignalConversionAtVeDFIR_b_DsblDi)
        {
            /* Outputs for IfAction SubSystem: '<S124>/Init' incorporates:
             *  ActionPort: '<S127>/Action Port'
             */
            ADIR_ac_Init_f(&ADIR_ac_B.Merge_a);

            /* End of Outputs for SubSystem: '<S124>/Init' */
        }
        else if (VeADIR_b_LftWEDShiftTestPassed)
        {
            /* Outputs for IfAction SubSystem: '<S124>/Pass' incorporates:
             *  ActionPort: '<S128>/Action Port'
             */
            ADIR_ac_Pass(&ADIR_ac_B.Merge_a);

            /* End of Outputs for SubSystem: '<S124>/Pass' */
        }
        else
        {
            if (VeADIR_b_LftWEDShiftTestFailed)
            {
                /* Outputs for IfAction SubSystem: '<S124>/Fail' incorporates:
                 *  ActionPort: '<S126>/Action Port'
                 */
                ADIR_ac_Fail(&ADIR_ac_B.Merge_a);

                /* End of Outputs for SubSystem: '<S124>/Fail' */
            }
        }

        /* End of If: '<S124>/If' */
    }

    /* End of Logic: '<S35>/Logical3' */
    /* End of Outputs for SubSystem: '<S35>/LeftWEDRetryDiag' */

    /* SignalConversion generated from: '<S2>/VeADCR_Cnt_RtWEDOpngAttempts' incorporates:
     *  Inport: '<Root>/VeADCR_Cnt_RtWEDOpngAttempts'
     */
    (void)Rte_Read_VeADCR_Cnt_RtWEDOpngAttempts_Value
        (&rtb_TmpSignalConversionAtVeADCR_Cnt_RtWE);

    /* RelationalOperator: '<S121>/Comparison1' incorporates:
     *  Constant: '<S133>/Calib'
     */
    VeADIR_b_RtWEDOpngAttExcdd = (rtb_TmpSignalConversionAtVeADCR_Cnt_RtWE >=
        KeADIR_Cnt_MaxOpngAttemptsThrshld);

    /* SignalConversion generated from: '<S2>/VeADCR_Cnt_RtWEDClsngAttempts' incorporates:
     *  Inport: '<Root>/VeADCR_Cnt_RtWEDClsngAttempts'
     */
    (void)Rte_Read_VeADCR_Cnt_RtWEDClsngAttempts_Value
        (&rtb_TmpSignalConversionAtVeADCR_Cnt_Rt_p);

    /* RelationalOperator: '<S121>/Comparison4' incorporates:
     *  Constant: '<S132>/Calib'
     */
    VeADIR_b_RtWEDClsngAttExcdd = (rtb_TmpSignalConversionAtVeADCR_Cnt_Rt_p >=
        KeADIR_Cnt_MaxClsngAttemptsThrshld);

    /* Outputs for Enabled SubSystem: '<S35>/RightWEDRetryDiag' incorporates:
     *  EnablePort: '<S122>/Enable'
     */
    /* Logic: '<S35>/Logical1' */
    if (rtb_Switch2_c_idx_0 && rtb_LogicalOperator3)
    {
        /* Chart: '<S122>/RtWEDRetryCheck' incorporates:
         *  Inport: '<Root>/VeADCR_e_WEDRightCmndMgrSt'
         */
        /* Gateway: ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/RightWEDRetryDiag/RtWEDRetryCheck */
        /* During: ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/RightWEDRetryDiag/RtWEDRetryCheck */
        if (((uint32)ADIR_ac_DW.is_active_c2_ADIR_ac) == 0U)
        {
            /* Entry: ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/RightWEDRetryDiag/RtWEDRetryCheck */
            ADIR_ac_DW.is_active_c2_ADIR_ac = 1U;

            /* Entry Internal: ADIR_MedTED/WED_Diagnostics/WEDRetryDiag/RightWEDRetryDiag/RtWEDRetryCheck */
            /* Transition: '<S134>:357' */
            ADIR_ac_DW.is_c2_ADIR_ac = ADIR_ac_IN_WEDShiftDetection;

            /* Entry Internal 'WEDShiftDetection': '<S134>:294' */
            /* Transition: '<S134>:298' */
            ADIR_ac_DW.is_WEDShiftDetection = ADIR_ac_IN_DiagActive;

            /* Entry 'DiagActive': '<S134>:297' */
            VeADIR_e_RtWEDRetryDiagState = CeADIR_e_DiagActive;
        }
        else
        {
            switch (ADIR_ac_DW.is_c2_ADIR_ac)
            {
              case ADIR_ac_IN_TestFailedFallingEdge:
                VeADIR_b_RtWEDShiftTestFailed = false;

                /* During 'TestFailedFallingEdge': '<S134>:290' */
                if ((((sint32)rtb_TmpSignalConversionAtVeADCR_Cnt_Rt_p) == 0) &&
                    (((sint32)rtb_TmpSignalConversionAtVeADCR_Cnt_RtWE) == 0))
                {
                    /* Transition: '<S134>:374' */
                    /* Transition: '<S134>:364' */
                    /* Transition: '<S134>:365' */
                    ADIR_ac_DW.is_c2_ADIR_ac = ADIR_ac_IN_WEDShiftDetection;

                    /* Entry Internal 'WEDShiftDetection': '<S134>:294' */
                    /* Transition: '<S134>:298' */
                    ADIR_ac_DW.is_WEDShiftDetection = ADIR_ac_IN_DiagActive;

                    /* Entry 'DiagActive': '<S134>:297' */
                    VeADIR_e_RtWEDRetryDiagState = CeADIR_e_DiagActive;
                }
                break;

              case ADIR_ac_IN_TestFailedRisingEdge:
                VeADIR_e_RtWEDRetryDiagState = CeADIR_e_TestFailed;

                /* During 'TestFailedRisingEdge': '<S134>:287' */
                /* Transition: '<S134>:285' */
                ADIR_ac_DW.is_c2_ADIR_ac = ADIR_ac_IN_TestFailedFallingEdge;

                /* Entry 'TestFailedFallingEdge': '<S134>:290' */
                VeADIR_b_RtWEDShiftTestFailed = false;
                break;

              default:
                /* During 'WEDShiftDetection': '<S134>:294' */
                if ((VeADIR_b_RtWEDClsngAttExcdd) || (VeADIR_b_RtWEDOpngAttExcdd))
                {
                    /* Transition: '<S134>:372' */
                    /* Exit Internal 'WEDShiftDetection': '<S134>:294' */
                    ADIR_ac_DW.is_WEDShiftDetection = ADIR_ac_IN_NO_ACTIVE_CHILD;
                    ADIR_ac_DW.is_c2_ADIR_ac = ADIR_ac_IN_TestFailedRisingEdge;

                    /* Entry 'TestFailedRisingEdge': '<S134>:287' */
                    VeADIR_b_RtWEDShiftTestFailed = true;
                    VeADIR_e_RtWEDRetryDiagState = CeADIR_e_TestFailed;
                }
                else
                {
                    (void)Rte_Read_VeADCR_e_WEDRightCmndMgrSt_Value(&tmpRead_0);
                    switch (ADIR_ac_DW.is_WEDShiftDetection)
                    {
                      case ADIR_ac_IN_DiagActive:
                        VeADIR_e_RtWEDRetryDiagState = CeADIR_e_DiagActive;

                        /* During 'DiagActive': '<S134>:297' */
                        /* Transition: '<S134>:312' */
                        switch (tmpRead_0)
                        {
                          case CeADCR_e_ActuateClosed:
                            /* Transition: '<S134>:306' */
                            ADIR_ac_DW.is_WEDShiftDetection =
                                ADIR_ac_IN_WaitForSSClosed;

                            /* Entry 'WaitForSSClosed': '<S134>:318' */
                            VeADIR_e_RtWEDRetryDiagState =
                                CeADIR_e_WaitForSSClosed;
                            break;

                          case CeADCR_e_ActuateOpen:
                            /* Transition: '<S134>:315' */
                            ADIR_ac_DW.is_WEDShiftDetection =
                                ADIR_ac_IN_WaitForSSOpen;

                            /* Entry 'WaitForSSOpen': '<S134>:319' */
                            VeADIR_e_RtWEDRetryDiagState =
                                CeADIR_e_WaitForSSOpen;
                            break;

                          default:
                            /* no actions */
                            break;
                        }
                        break;

                      case ADIR_ac_IN_TestPassedFallingEdge:
                        VeADIR_b_RtWEDShiftTestPassed = false;

                        /* During 'TestPassedFallingEdge': '<S134>:301' */
                        /* Transition: '<S134>:337' */
                        /* Transition: '<S134>:344' */
                        /* Transition: '<S134>:346' */
                        /* Transition: '<S134>:347' */
                        ADIR_ac_DW.is_WEDShiftDetection = ADIR_ac_IN_DiagActive;

                        /* Entry 'DiagActive': '<S134>:297' */
                        VeADIR_e_RtWEDRetryDiagState = CeADIR_e_DiagActive;
                        break;

                      case ADIR_ac_IN_TestPassedRisingEdge:
                        VeADIR_e_RtWEDRetryDiagState = CeADIR_e_TestPassed;

                        /* During 'TestPassedRisingEdge': '<S134>:302' */
                        /* Transition: '<S134>:300' */
                        ADIR_ac_DW.is_WEDShiftDetection =
                            ADIR_ac_IN_TestPassedFallingEdge;

                        /* Entry 'TestPassedFallingEdge': '<S134>:301' */
                        VeADIR_b_RtWEDShiftTestPassed = false;
                        break;

                      case ADIR_ac_IN_WaitForSSClosed:
                        VeADIR_e_RtWEDRetryDiagState = CeADIR_e_WaitForSSClosed;

                        /* During 'WaitForSSClosed': '<S134>:318' */
                        /* Transition: '<S134>:341' */
                        if (((uint32)tmpRead_0) == CeADCR_e_SSClosed)
                        {
                            /* Transition: '<S134>:321' */
                            /* Transition: '<S134>:332' */
                            ADIR_ac_DW.is_WEDShiftDetection =
                                ADIR_ac_IN_TestPassedRisingEdge;

                            /* Entry 'TestPassedRisingEdge': '<S134>:302' */
                            VeADIR_b_RtWEDShiftTestPassed = true;
                            VeADIR_e_RtWEDRetryDiagState = CeADIR_e_TestPassed;
                        }
                        else
                        {
                            if (((uint32)tmpRead_0) != CeADCR_e_ActuateClosed)
                            {
                                /* Transition: '<S134>:343' */
                                /* Transition: '<S134>:346' */
                                /* Transition: '<S134>:347' */
                                ADIR_ac_DW.is_WEDShiftDetection =
                                    ADIR_ac_IN_DiagActive;

                                /* Entry 'DiagActive': '<S134>:297' */
                                VeADIR_e_RtWEDRetryDiagState =
                                    CeADIR_e_DiagActive;
                            }
                        }
                        break;

                      default:
                        VeADIR_e_RtWEDRetryDiagState = CeADIR_e_WaitForSSOpen;

                        /* During 'WaitForSSOpen': '<S134>:319' */
                        /* Transition: '<S134>:351' */
                        if (((uint32)tmpRead_0) == CeADCR_e_SSOpen)
                        {
                            /* Transition: '<S134>:326' */
                            /* Transition: '<S134>:332' */
                            ADIR_ac_DW.is_WEDShiftDetection =
                                ADIR_ac_IN_TestPassedRisingEdge;

                            /* Entry 'TestPassedRisingEdge': '<S134>:302' */
                            VeADIR_b_RtWEDShiftTestPassed = true;
                            VeADIR_e_RtWEDRetryDiagState = CeADIR_e_TestPassed;
                        }
                        else
                        {
                            if ((((uint32)tmpRead_0) != CeADCR_e_ActuateOpen) &&
                                (((uint32)tmpRead_0) != CeADCR_e_WgglActuateOpen))
                            {
                                /* Transition: '<S134>:353' */
                                /* Transition: '<S134>:355' */
                                /* Transition: '<S134>:356' */
                                ADIR_ac_DW.is_WEDShiftDetection =
                                    ADIR_ac_IN_DiagActive;

                                /* Entry 'DiagActive': '<S134>:297' */
                                VeADIR_e_RtWEDRetryDiagState =
                                    CeADIR_e_DiagActive;
                            }
                        }
                        break;
                    }
                }
                break;
            }
        }

        /* End of Chart: '<S122>/RtWEDRetryCheck' */

        /* RelationalOperator: '<S135>/Relational Operator3' incorporates:
         *  Constant: '<S135>/Constant3'
         */
        rtb_LogicalOperator3 = (rtb_LogicalOperator_b_tmp == 0U);

        /* Outputs for Atomic SubSystem: '<S135>/EdgeFalling1' */
        /* Logic: '<S136>/AND' incorporates:
         *  Logic: '<S136>/OR1'
         *  UnitDelay: '<S136>/Unit Delay'
         */
        rtb_LogicalOperator1_e = ((!rtb_LogicalOperator3) &&
            (ADIR_ac_DW.UnitDelay_DSTATE_h));

        /* Update for UnitDelay: '<S136>/Unit Delay' */
        ADIR_ac_DW.UnitDelay_DSTATE_h = rtb_LogicalOperator3;

        /* End of Outputs for SubSystem: '<S135>/EdgeFalling1' */

        /* If: '<S135>/If' incorporates:
         *  Logic: '<S135>/Logical5'
         */
        if (rtb_LogicalOperator1_e || rtb_TmpSignalConversionAtVeDFIR_b_DsblDi)
        {
            /* Outputs for IfAction SubSystem: '<S135>/Init' incorporates:
             *  ActionPort: '<S138>/Action Port'
             */
            ADIR_ac_Init_f(&ADIR_ac_B.Merge_c);

            /* End of Outputs for SubSystem: '<S135>/Init' */
        }
        else if (VeADIR_b_RtWEDShiftTestPassed)
        {
            /* Outputs for IfAction SubSystem: '<S135>/Pass' incorporates:
             *  ActionPort: '<S139>/Action Port'
             */
            ADIR_ac_Pass(&ADIR_ac_B.Merge_c);

            /* End of Outputs for SubSystem: '<S135>/Pass' */
        }
        else
        {
            if (VeADIR_b_RtWEDShiftTestFailed)
            {
                /* Outputs for IfAction SubSystem: '<S135>/Fail' incorporates:
                 *  ActionPort: '<S137>/Action Port'
                 */
                ADIR_ac_Fail(&ADIR_ac_B.Merge_c);

                /* End of Outputs for SubSystem: '<S135>/Fail' */
            }
        }

        /* End of If: '<S135>/If' */
    }

    /* End of Outputs for SubSystem: '<S35>/RightWEDRetryDiag' */

    /* SignalConversion generated from: '<S2>/VeADIR_e_WEDExtToolCmd_read' incorporates:
     *  Merge: '<Root>/Merge_Outport_4'
     */
    rtb_TmpSignalConversionAtVeADIR_e_WEDExt =
        Rte_IrvRead_ADIR_MedTED_WEDExtToolCmd_Init_IRV_IRV();

    /* Outputs for Atomic SubSystem: '<S15>/WEDServiceEoLDiag' */
    /* Outputs for Enabled SubSystem: '<S36>/EEpromWrite' incorporates:
     *  EnablePort: '<S143>/Enable'
     */
    /* RelationalOperator: '<S36>/Relational Operator' incorporates:
     *  DataTypeConversion: '<S36>/Data Type Conversion'
     *  UnitDelay: '<S36>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeADIR_e_WEDExt != ((TeADIR_e_WEDExtToolCmd)
            ADIR_ac_DW.UnitDelay_DSTATE_b))
    {
        /* Outport: '<Root>/AeADIR_e_WEDExtToolCmd_Strimm_Out' incorporates:
         *  Inport: '<S143>/WEDExtToolCmd'
         *  Inport: '<S36>/VeADIR_e_WEDExtToolCmd_read'
         *  SignalConversion generated from: '<S2>/VeADIR_e_WEDExtToolCmd_read'
         */
        (void)Rte_Write_AeADIR_e_WEDExtToolCmd_AeADIR_e_WEDExtToolCmd
            (rtb_TmpSignalConversionAtVeADIR_e_WEDExt);
    }

    /* End of RelationalOperator: '<S36>/Relational Operator' */
    /* End of Outputs for SubSystem: '<S36>/EEpromWrite' */

    /* Outputs for Enabled SubSystem: '<S36>/WEDBypassDiag' incorporates:
     *  EnablePort: '<S145>/Enable'
     */
    /* Constant: '<S144>/Calib' */
    if (KeADIR_b_WEDOverrideDiagEn)
    {
        /* RelationalOperator: '<S147>/Relational Operator3' incorporates:
         *  Constant: '<S147>/Constant3'
         */
        rtb_LogicalOperator3 = (VeADIR_b_WEDMechFailure_Confirmed_tmp == 0U);

        /* Outputs for Atomic SubSystem: '<S147>/EdgeFalling1' */
        /* Logic: '<S148>/AND' incorporates:
         *  Logic: '<S148>/OR1'
         *  UnitDelay: '<S148>/Unit Delay'
         */
        rtb_LogicalOperator1_e = ((!rtb_LogicalOperator3) &&
            (ADIR_ac_DW.UnitDelay_DSTATE_bg));

        /* Update for UnitDelay: '<S148>/Unit Delay' */
        ADIR_ac_DW.UnitDelay_DSTATE_bg = rtb_LogicalOperator3;

        /* End of Outputs for SubSystem: '<S147>/EdgeFalling1' */

        /* If: '<S147>/If' incorporates:
         *  Constant: '<S146>/Constant'
         *  Logic: '<S145>/AND27'
         *  Logic: '<S147>/Logical5'
         *  RelationalOperator: '<S145>/Comparison5'
         */
        if (rtb_LogicalOperator1_e || rtb_TmpSignalConversionAtVeDFIR_b_DsblDi)
        {
            /* Outputs for IfAction SubSystem: '<S147>/Init' incorporates:
             *  ActionPort: '<S150>/Action Port'
             */
            ADIR_ac_Init_f(&ADIR_ac_B.Merge_j);

            /* End of Outputs for SubSystem: '<S147>/Init' */
        }
        else if (((uint32)rtb_TmpSignalConversionAtVeADIR_e_WEDExt) ==
                 CeADIR_e_ECUNormalControl)
        {
            /* Outputs for IfAction SubSystem: '<S147>/Pass' incorporates:
             *  ActionPort: '<S151>/Action Port'
             */
            ADIR_ac_Pass(&ADIR_ac_B.Merge_j);

            /* End of Outputs for SubSystem: '<S147>/Pass' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S147>/Fail' incorporates:
             *  ActionPort: '<S149>/Action Port'
             */
            ADIR_ac_Fail(&ADIR_ac_B.Merge_j);

            /* End of Outputs for SubSystem: '<S147>/Fail' */
        }

        /* End of If: '<S147>/If' */
    }

    /* End of Constant: '<S144>/Calib' */
    /* End of Outputs for SubSystem: '<S36>/WEDBypassDiag' */

    /* Update for UnitDelay: '<S36>/Unit Delay' incorporates:
     *  DataTypeConversion: '<S36>/Data Type Conversion'
     */
    ADIR_ac_DW.UnitDelay_DSTATE_b = (uint8)
        rtb_TmpSignalConversionAtVeADIR_e_WEDExt;

    /* End of Outputs for SubSystem: '<S15>/WEDServiceEoLDiag' */

    /* Outport: '<Root>/VeADIR_e_FaultSts_LF_WHL_HubDisConActPerf' incorporates:
     *  Merge: '<S124>/Merge'
     *  SignalConversion generated from: '<S2>/VeADIR_e_FaultSts_LF_WHL_HubDisConActPerf'
     */
    (void)Rte_Write_VeADIR_e_FaultSts_LF_WHL_HubDisConActPerf_Value
        (ADIR_ac_B.Merge_a);

    /* Outport: '<Root>/VeADIR_e_FaultSts_RF_WHL_HubDisConActPerf' incorporates:
     *  Merge: '<S135>/Merge'
     *  SignalConversion generated from: '<S2>/VeADIR_e_FaultSts_RF_WHL_HubDisConActPerf'
     */
    (void)Rte_Write_VeADIR_e_FaultSts_RF_WHL_HubDisConActPerf_Value
        (ADIR_ac_B.Merge_c);

    /* Outport: '<Root>/VeADIR_e_FaultSts_WHL_HubDisConOvrrideActv' incorporates:
     *  Merge: '<S147>/Merge'
     *  SignalConversion generated from: '<S2>/VeADIR_e_FaultSts_WHL_HubDisConOvrrideActv'
     */
    (void)Rte_Write_VeADIR_e_FaultSts_WHL_HubDisConOvrrideActv_Value
        (ADIR_ac_B.Merge_j);

    /* Outport: '<Root>/VeADIR_e_FaultSts_WHL_HubDisConSysPerf' incorporates:
     *  Merge: '<S99>/Merge'
     *  SignalConversion generated from: '<S2>/VeADIR_e_FaultSts_WHL_HubDisConSysPerf'
     */
    (void)Rte_Write_VeADIR_e_FaultSts_WHL_HubDisConSysPerf_Value(ADIR_ac_B.Merge);

    /* Switch: '<S14>/Switch2' incorporates:
     *  Constant: '<S17>/Calib'
     */
    if (KeADIR_b_LftWEDClosingFail_SD)
    {
        /* Outport: '<Root>/VeADIR_b_LftWEDClosingFail' incorporates:
         *  Constant: '<S16>/Calib'
         */
        (void)Rte_Write_VeADIR_b_LftWEDClosingFail_Value
            (KeADIR_b_LftWEDClosingFail_D);
    }
    else
    {
        /* Outport: '<Root>/VeADIR_b_LftWEDClosingFail' incorporates:
         *  Logic: '<S121>/Logical3'
         */
        (void)Rte_Write_VeADIR_b_LftWEDClosingFail_Value
            ((VeADIR_b_LftWEDClsngAttExcdd) && rtb_LogicalOperator_k);
    }

    /* End of Switch: '<S14>/Switch2' */

    /* Switch: '<S14>/Switch1' incorporates:
     *  Constant: '<S19>/Calib'
     */
    if (KeADIR_b_LftWEDOpeningFail_SD)
    {
        /* Outport: '<Root>/VeADIR_b_LftWEDOpeningFail' incorporates:
         *  Constant: '<S18>/Calib'
         */
        (void)Rte_Write_VeADIR_b_LftWEDOpeningFail_Value
            (KeADIR_b_LftWEDOpeningFail_D);
    }
    else
    {
        /* Outport: '<Root>/VeADIR_b_LftWEDOpeningFail' incorporates:
         *  Logic: '<S121>/Logical7'
         */
        (void)Rte_Write_VeADIR_b_LftWEDOpeningFail_Value
            ((VeADIR_b_LftWEDOpngAttExcdd) && rtb_LogicalOperator_k);
    }

    /* End of Switch: '<S14>/Switch1' */

    /* Switch: '<S14>/Switch3' incorporates:
     *  Constant: '<S21>/Calib'
     */
    if (KeADIR_b_RtWEDClosingFail_SD)
    {
        /* Outport: '<Root>/VeADIR_b_RtWEDClosingFail' incorporates:
         *  Constant: '<S20>/Calib'
         */
        (void)Rte_Write_VeADIR_b_RtWEDClosingFail_Value
            (KeADIR_b_RtWEDClosingFail_D);
    }
    else
    {
        /* Outport: '<Root>/VeADIR_b_RtWEDClosingFail' incorporates:
         *  Logic: '<S121>/Logical5'
         */
        (void)Rte_Write_VeADIR_b_RtWEDClosingFail_Value
            ((VeADIR_b_RtWEDClsngAttExcdd) && rtb_LogicalOperator_j);
    }

    /* End of Switch: '<S14>/Switch3' */

    /* Switch: '<S14>/Switch4' incorporates:
     *  Constant: '<S23>/Calib'
     */
    if (KeADIR_b_RtWEDOpeningFail_SD)
    {
        /* Outport: '<Root>/VeADIR_b_RtWEDOpeningFail' incorporates:
         *  Constant: '<S22>/Calib'
         */
        (void)Rte_Write_VeADIR_b_RtWEDOpeningFail_Value
            (KeADIR_b_RtWEDOpeningFail_D);
    }
    else
    {
        /* Outport: '<Root>/VeADIR_b_RtWEDOpeningFail' incorporates:
         *  Logic: '<S121>/Logical8'
         */
        (void)Rte_Write_VeADIR_b_RtWEDOpeningFail_Value
            ((VeADIR_b_RtWEDOpngAttExcdd) && rtb_LogicalOperator_j);
    }

    /* End of Switch: '<S14>/Switch4' */

    /* Switch: '<S14>/Switch5' incorporates:
     *  Constant: '<S27>/Calib'
     *  Constant: '<S31>/Calib'
     *  Merge: '<S78>/Merge'
     */
    if (KeADIR_b_WEDMechFailure_Sts_SD)
    {
        tmp = KeADIR_e_WEDMechFailure_Sts_D;
    }
    else
    {
        tmp = ADIR_ac_B.Merge_h;
    }

    /* Outport: '<Root>/VeADIR_e_WEDMechFailure_Sts' incorporates:
     *  Switch: '<S14>/Switch5'
     */
    (void)Rte_Write_VeADIR_e_WEDMechFailure_Sts_Value(tmp);

    /* Switch: '<S14>/Switch6' incorporates:
     *  Constant: '<S24>/Calib'
     *  Constant: '<S30>/Calib'
     */
    if (KeADIR_b_WEDExtToolCmd_SD)
    {
        rtb_TmpSignalConversionAtVeADIR_e_WEDExt = KeADIR_e_WEDExtToolCmd_D;
    }

    /* Outport: '<Root>/VeADIR_e_WEDExtToolCmd' incorporates:
     *  Switch: '<S14>/Switch6'
     */
    (void)Rte_Write_VeADIR_e_WEDExtToolCmd_Value
        (rtb_TmpSignalConversionAtVeADIR_e_WEDExt);

    /* Switch: '<S14>/Switch7' incorporates:
     *  Constant: '<S26>/Calib'
     */
    if (KeADIR_b_WEDFailuresTARoutine_SD)
    {
        /* Outport: '<Root>/VeADIR_b_WEDFailuresTARoutine' incorporates:
         *  Constant: '<S25>/Calib'
         */
        (void)Rte_Write_VeADIR_b_WEDFailuresTARoutine_Value
            (KeADIR_b_WEDFailuresTARoutine_D);
    }
    else
    {
        /* Outport: '<Root>/VeADIR_b_WEDFailuresTARoutine' */
        (void)Rte_Write_VeADIR_b_WEDFailuresTARoutine_Value
            (rtb_TmpSignalConversionAtVeDFIR_b_PostCo);
    }

    /* End of Switch: '<S14>/Switch7' */

    /* Switch: '<S14>/Switch8' incorporates:
     *  Constant: '<S29>/Calib'
     */
    if (KeADIR_b_WEDSystemFailure_SD)
    {
        /* Outport: '<Root>/VeADIR_b_WEDSystemFailure' incorporates:
         *  Constant: '<S28>/Calib'
         */
        (void)Rte_Write_VeADIR_b_WEDSystemFailure_Value
            (KeADIR_b_WEDSystemFailure_D);
    }
    else
    {
        /* Outport: '<Root>/VeADIR_b_WEDSystemFailure' incorporates:
         *  Constant: '<S42>/Constant1'
         *  Constant: '<S42>/Constant2'
         *  Logic: '<S33>/Logical Operator1'
         *  Logic: '<S42>/Logical Operator'
         *  RelationalOperator: '<S42>/Relational Operator1'
         *  RelationalOperator: '<S42>/Relational Operator2'
         *  S-Function (sfix_bitop): '<S42>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S42>/Bitwise Operator2'
         */
        (void)Rte_Write_VeADIR_b_WEDSystemFailure_Value
            (rtb_TmpSignalConversionAtVeDFIR_b_PostCo || (((((uint32)
                 rtb_TmpSignalConversionAtVeDMAB_y_Status) & 1U) != 0U) &&
              ((((uint32)rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U)));
    }

    /* End of Switch: '<S14>/Switch8' */
    /* End of Outputs for SubSystem: '<Root>/ADIR_MedTED' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_ADIR_1

FUNC(void, ADIR_CODE) DidWrite_RWDB652_WEDExtToolCmd(void)
{

#if Rte_SysCon_Variant_ADIR_1

    TeADIR_e_WEDExtToolCmd tmpRead;

#endif

#if Rte_SysCon_Variant_ADIR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/DidWrite_RWDB652_WEDExtToolCmd' */
    /* Inport: '<Root>/VeDCAB_e_RWDB652_WEDExtToolCmd' */
    (void)Rte_Read_VeDCAB_e_RWDB652_WEDExtToolCmd_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/RWDB652_WEDExtToolCmd' */
    /* Merge: '<Root>/Merge_Outport_4' incorporates:
     *  Inport: '<Root>/VeDCAB_e_RWDB652_WEDExtToolCmd'
     *  SignalConversion generated from: '<S7>/VeDCAB_e_RWDB652_WEDExtToolCmd'
     *  SignalConversion generated from: '<S7>/WEDExtToolCmd'
     */
    Rte_IrvWrite_DidWrite_RWDB652_WEDExtToolCmd_WEDExtToolCmd_Init_IRV_IRV
        (tmpRead);

    /* End of Outputs for SubSystem: '<Root>/RWDB652_WEDExtToolCmd' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/DidWrite_RWDB652_WEDExtToolCmd' */
#endif

}

#endif

/* Output function */
FUNC(void, ADIR_CODE) FsftADIR_b_BSM_WEDModeReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftADIR_b_BSM_WEDModeReq' */
    /* SignalConversion generated from: '<S5>/FsftADIR_b_BSM_WEDModeReqChrt' incorporates:
     *  SignalConversion generated from: '<S5>/VeADIR_b_BSM_WEDModeReqFA_write'
     *  SignalConversion generated from: '<S5>/VeADIR_e_BSM_WEDModeReq_write'
     */
    /* Gateway: FsftADIR_b_BSM_WEDModeReq/FsftADIR_b_BSM_WEDModeReqChrt */
    /* During: FsftADIR_b_BSM_WEDModeReq/FsftADIR_b_BSM_WEDModeReqChrt */
    /* Entry Internal: FsftADIR_b_BSM_WEDModeReq/FsftADIR_b_BSM_WEDModeReqChrt */
    /* Transition: '<S166>:2' */
#if Rte_SysCon_Variant_ADIR_1

    /* Merge: '<Root>/Merge_Outport_25' incorporates:
     *  Chart: '<S5>/FsftADIR_b_BSM_WEDModeReqChrt'
     */
    Rte_IrvWrite_FsftADIR_b_BSM_WEDModeReq_BSM_WEDModeReqFA_Init_IRV_IRV(true);

    /* Merge: '<Root>/Merge_Outport_1' incorporates:
     *  Chart: '<S5>/FsftADIR_b_BSM_WEDModeReqChrt'
     *  Constant: '<S167>/Calib'
     */
    Rte_IrvWrite_FsftADIR_b_BSM_WEDModeReq_BSM_WEDModeReq_Init_IRV_IRV
        (KeADIR_e_BSM_WEDModeReqDflt);

#endif

    /* End of SignalConversion generated from: '<S5>/FsftADIR_b_BSM_WEDModeReqChrt' */
    /* End of Outputs for SubSystem: '<Root>/FsftADIR_b_BSM_WEDModeReq' */
}

/* Output function */
FUNC(void, ADIR_CODE) PokeADIR_e_BSM_WEDModeReq(VAR(uint8, AUTOMATIC)
    LeADIR_e_BSM_WEDModeReq, VAR(boolean, AUTOMATIC) LeADIR_b_BSM_WEDModeReqFA)
{
    TeADCR_e_AWDReq rtb_LeADIR_e_BSM_WEDModeReq_out_p;
    boolean rtb_LeADIR_b_BSM_WEDModeReqFA_out_f;

    /* Outputs for Function Call SubSystem: '<Root>/PokeADIR_e_BSM_WEDModeReq' */
    /* Chart: '<S6>/PokeADIR_e_BSM_WEDModeReqChrt' incorporates:
     *  Constant: '<S168>/Calib'
     *  Constant: '<S169>/Calib'
     *  SignalConversion generated from: '<S6>/LeADIR_b_BSM_WEDModeReqFA'
     *  SignalConversion generated from: '<S6>/LeADIR_e_BSM_WEDModeReq'
     */
    /* Gateway: PokeADIR_e_BSM_WEDModeReq/PokeADIR_e_BSM_WEDModeReqChrt */
    /* During: PokeADIR_e_BSM_WEDModeReq/PokeADIR_e_BSM_WEDModeReqChrt */
    /* Entry Internal: PokeADIR_e_BSM_WEDModeReq/PokeADIR_e_BSM_WEDModeReqChrt */
    /* Transition: '<S170>:2' */
    if (!LeADIR_b_BSM_WEDModeReqFA)
    {
        /* Transition: '<S170>:3' */
        /* Transition: '<S170>:15' */
        rtb_LeADIR_e_BSM_WEDModeReq_out_p = KaADIR_e_BSM_WEDModeReqMap
            [(LeADIR_e_BSM_WEDModeReq)];
        rtb_LeADIR_b_BSM_WEDModeReqFA_out_f = false;

        /* Transition: '<S170>:18' */
    }
    else
    {
        /* Transition: '<S170>:4' */
        rtb_LeADIR_e_BSM_WEDModeReq_out_p = KeADIR_e_BSM_WEDModeReqDflt;
        rtb_LeADIR_b_BSM_WEDModeReqFA_out_f = true;
    }

    /* End of Chart: '<S6>/PokeADIR_e_BSM_WEDModeReqChrt' */

    /* SignalConversion generated from: '<S6>/PokeADIR_e_BSM_WEDModeReqChrt' incorporates:
     *  SignalConversion generated from: '<S6>/VeADIR_b_BSM_WEDModeReqFA_write'
     *  SignalConversion generated from: '<S6>/VeADIR_e_BSM_WEDModeReq_write'
     */
#if Rte_SysCon_Variant_ADIR_1

    /* Merge: '<Root>/Merge_Outport_25' */
    Rte_IrvWrite_PokeADIR_e_BSM_WEDModeReq_BSM_WEDModeReqFA_Init_IRV_IRV
        (rtb_LeADIR_b_BSM_WEDModeReqFA_out_f);

    /* Merge: '<Root>/Merge_Outport_1' */
    Rte_IrvWrite_PokeADIR_e_BSM_WEDModeReq_BSM_WEDModeReq_Init_IRV_IRV
        (rtb_LeADIR_e_BSM_WEDModeReq_out_p);

#endif

    /* End of SignalConversion generated from: '<S6>/PokeADIR_e_BSM_WEDModeReqChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeADIR_e_BSM_WEDModeReq' */
}

/* Output function */
FUNC(void, ADIR_CODE) ADIR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/ADIR_PwrOff'
     */
    /* Outport: '<Root>/NeADIR_Cnt_WEDMechFailure_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/Data Store Read1'
     */
    (void)
        Rte_Write_NeADIR_Cnt_WEDMechFailure_MFOP_NeADIR_Cnt_WEDMechFailure_MFOP
        (ADIR_ac_DW.NeADIR_Cnt_WEDMechFailure_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, ADIR_CODE) ADIR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ADIR_PwrOn'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/DSM_Init'
     */
    /* DataStoreWrite: '<S155>/Data Store Write' incorporates:
     *  Inport: '<Root>/AeADIR_e_WEDExtToolCmd_Strimm_In'
     */
    (void)Rte_Read_AeADIR_e_WEDExtToolCmd_Rx_AeADIR_e_WEDExtToolCmd
        ((&(AeADIR_e_WEDExtToolCmd)));

    /* DataStoreWrite: '<S155>/Data Store Write3' incorporates:
     *  Inport: '<Root>/NeADIR_Cnt_WEDMechFailure_MFOP_PM_In'
     */
    (void)
        Rte_Read_NeADIR_Cnt_WEDMechFailure_MFOP_Rx_NeADIR_Cnt_WEDMechFailure_MFOP
        (&ADIR_ac_DW.NeADIR_Cnt_WEDMechFailure_MFOP);

    /* SignalConversion generated from: '<S4>/BSM_WEDModeReqFA_Init_IRV' incorporates:
     *  SignalConversion generated from: '<S4>/BSM_WEDModeReq_Init_IRV'
     */
#if Rte_SysCon_Variant_ADIR_1

    /* Outputs for Function Call SubSystem: '<S4>/IRV_Init' */
    /* SignalConversion generated from: '<S156>/BSM_WEDModeReq_Init_IRV' incorporates:
     *  Constant: '<S159>/Calib'
     */
    ADIR_ac_B.OutportBufferForBSM_WEDModeReq_Init_IRV =
        KeADIR_e_BSM_WEDModeReqInit;

    /* SignalConversion generated from: '<S156>/BSM_WEDModeReqFA_Init_IRV' incorporates:
     *  Constant: '<S158>/Calib'
     */
    ADIR_ac_B.OutportBufferForBSM_WEDModeReqFA_Init_IR =
        KeADIR_b_BSM_WEDModeReqFAInit;

    /* DataStoreRead: '<S156>/Data Store Read' */
    ADIR_ac_B.DataStoreRead_j = AeADIR_e_WEDExtToolCmd;

    /* End of Outputs for SubSystem: '<S4>/IRV_Init' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S4>/BSM_WEDModeReqFA_Init_IRV' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Out_Init'
     */
    /* SignalConversion generated from: '<S157>/VeADIR_b_LftWEDClosingFail_Out_Init' */
    ADIR_ac_B.OutportBufferForVeADIR_b_LftWEDClosingFa = false;

    /* SignalConversion generated from: '<S157>/VeADIR_b_LftWEDOpeningFail_Out_Init' */
    ADIR_ac_B.OutportBufferForVeADIR_b_LftWEDOpeningFa = false;

    /* SignalConversion generated from: '<S157>/VeADIR_b_RtWEDClosingFail_Out_Init' */
    ADIR_ac_B.OutportBufferForVeADIR_b_RtWEDClosingFai = false;

    /* SignalConversion generated from: '<S157>/VeADIR_b_RtWEDOpeningFail_Out_Init' */
    ADIR_ac_B.OutportBufferForVeADIR_b_RtWEDOpeningFai = false;

    /* SignalConversion generated from: '<S157>/VeADIR_e_WEDMechFailure_Sts_Out_Init' incorporates:
     *  Constant: '<S165>/Constant'
     */
    ADIR_ac_B.OutportBufferForVeADIR_e_WEDMechFailure_ =
        ADIR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S157>/VeADIR_e_BSM_WEDModeReq_Out_Init' incorporates:
     *  Constant: '<S161>/Constant'
     */
    ADIR_ac_B.OutportBufferForVeADIR_e_BSM_WEDModeReq_ =
        ADIR_ac_ConstB.Constant_i;

    /* SignalConversion generated from: '<S157>/VeADIR_b_BSM_WEDModeReqFA_Out_Init' */
    ADIR_ac_B.OutportBufferForVeADIR_b_BSM_WEDModeReqF = false;

    /* SignalConversion generated from: '<S157>/VeADIR_b_WEDFailuresTARoutine_Out_Init' */
    ADIR_ac_B.OutportBufferForVeADIR_b_WEDFailuresTARo = false;

    /* SignalConversion generated from: '<S157>/VeADIR_b_WEDSystemFailure_Out_Init' */
    ADIR_ac_B.OutportBufferForVeADIR_b_WEDSystemFailur = false;

    /* SignalConversion generated from: '<S157>/VeADIR_e_FaultSts_LF_WHL_HubDisConActPerf' incorporates:
     *  Constant: '<S162>/Constant'
     */
    ADIR_ac_B.OutportBufferForVeADIR_e_FaultSts_LF_WHL = ADIR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S157>/VeADIR_e_FaultSts_RF_WHL_HubDisConActPerf' incorporates:
     *  Constant: '<S163>/Constant'
     */
    ADIR_ac_B.OutportBufferForVeADIR_e_FaultSts_RF_WHL =
        ADIR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S157>/VeADIR_e_FaultSts_WHL_HubDisConSysPerf' incorporates:
     *  Constant: '<S164>/Constant'
     */
    ADIR_ac_B.OutportBufferForVeADIR_e_FaultSts_WHL_Hu =
        ADIR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S157>/VeADIR_e_FaultSts_WHL_HubDisConOvrrideActv' incorporates:
     *  Constant: '<S160>/Constant'
     */
    ADIR_ac_B.OutportBufferForVeADIR_e_FaultSts_WHL__p =
        ADIR_ac_ConstB.Constant_j;

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeADIR_b_BSM_WEDModeReqFA' incorporates:
     *  SignalConversion generated from: '<S4>/VeADIR_b_BSM_WEDModeReqFA_Out_Init'
     */
    (void)Rte_Write_VeADIR_b_BSM_WEDModeReqFA_Value
        (ADIR_ac_B.OutportBufferForVeADIR_b_BSM_WEDModeReqF);

    /* Outport: '<Root>/VeADIR_b_LftWEDClosingFail' incorporates:
     *  SignalConversion generated from: '<S4>/VeADIR_b_LftWEDClosingFail_Out_Init'
     */
    (void)Rte_Write_VeADIR_b_LftWEDClosingFail_Value
        (ADIR_ac_B.OutportBufferForVeADIR_b_LftWEDClosingFa);

    /* Outport: '<Root>/VeADIR_b_LftWEDOpeningFail' incorporates:
     *  SignalConversion generated from: '<S4>/VeADIR_b_LftWEDOpeningFail_Out_Init'
     */
    (void)Rte_Write_VeADIR_b_LftWEDOpeningFail_Value
        (ADIR_ac_B.OutportBufferForVeADIR_b_LftWEDOpeningFa);

    /* Outport: '<Root>/VeADIR_b_RtWEDClosingFail' incorporates:
     *  SignalConversion generated from: '<S4>/VeADIR_b_RtWEDClosingFail_Out_Init'
     */
    (void)Rte_Write_VeADIR_b_RtWEDClosingFail_Value
        (ADIR_ac_B.OutportBufferForVeADIR_b_RtWEDClosingFai);

    /* Outport: '<Root>/VeADIR_b_RtWEDOpeningFail' incorporates:
     *  SignalConversion generated from: '<S4>/VeADIR_b_RtWEDOpeningFail_Out_Init'
     */
    (void)Rte_Write_VeADIR_b_RtWEDOpeningFail_Value
        (ADIR_ac_B.OutportBufferForVeADIR_b_RtWEDOpeningFai);

    /* Outport: '<Root>/VeADIR_b_WEDFailuresTARoutine' incorporates:
     *  SignalConversion generated from: '<S4>/VeADIR_b_WEDFailuresTARoutine_Out_Init'
     */
    (void)Rte_Write_VeADIR_b_WEDFailuresTARoutine_Value
        (ADIR_ac_B.OutportBufferForVeADIR_b_WEDFailuresTARo);

    /* Outport: '<Root>/VeADIR_b_WEDSystemFailure' incorporates:
     *  SignalConversion generated from: '<S4>/VeADIR_b_WEDSystemFailure_Out_Init'
     */
    (void)Rte_Write_VeADIR_b_WEDSystemFailure_Value
        (ADIR_ac_B.OutportBufferForVeADIR_b_WEDSystemFailur);

    /* Outport: '<Root>/VeADIR_e_BSM_WEDModeReq' incorporates:
     *  SignalConversion generated from: '<S157>/VeADIR_e_BSM_WEDModeReq_Out_Init'
     *  SignalConversion generated from: '<S4>/VeADIR_e_BSM_WEDModeReq_Out_Init'
     */
    (void)Rte_Write_VeADIR_e_BSM_WEDModeReq_Value
        (ADIR_ac_B.OutportBufferForVeADIR_e_BSM_WEDModeReq_);

    /* Outport: '<Root>/VeADIR_e_FaultSts_LF_WHL_HubDisConActPerf' incorporates:
     *  SignalConversion generated from: '<S157>/VeADIR_e_FaultSts_LF_WHL_HubDisConActPerf'
     *  SignalConversion generated from: '<S4>/VeADIR_e_FaultSts_LF_WHL_HubDisConActPerf'
     */
    (void)Rte_Write_VeADIR_e_FaultSts_LF_WHL_HubDisConActPerf_Value
        (ADIR_ac_B.OutportBufferForVeADIR_e_FaultSts_LF_WHL);

    /* Outport: '<Root>/VeADIR_e_FaultSts_RF_WHL_HubDisConActPerf' incorporates:
     *  SignalConversion generated from: '<S157>/VeADIR_e_FaultSts_RF_WHL_HubDisConActPerf'
     *  SignalConversion generated from: '<S4>/VeADIR_e_FaultSts_RF_WHL_HubDisConActPerf'
     */
    (void)Rte_Write_VeADIR_e_FaultSts_RF_WHL_HubDisConActPerf_Value
        (ADIR_ac_B.OutportBufferForVeADIR_e_FaultSts_RF_WHL);

    /* Outport: '<Root>/VeADIR_e_FaultSts_WHL_HubDisConOvrrideActv' incorporates:
     *  SignalConversion generated from: '<S157>/VeADIR_e_FaultSts_WHL_HubDisConOvrrideActv'
     *  SignalConversion generated from: '<S4>/VeADIR_e_FaultSts_WHL_HubDisConOvrrideActv'
     */
    (void)Rte_Write_VeADIR_e_FaultSts_WHL_HubDisConOvrrideActv_Value
        (ADIR_ac_B.OutportBufferForVeADIR_e_FaultSts_WHL__p);

    /* Outport: '<Root>/VeADIR_e_FaultSts_WHL_HubDisConSysPerf' incorporates:
     *  SignalConversion generated from: '<S157>/VeADIR_e_FaultSts_WHL_HubDisConSysPerf'
     *  SignalConversion generated from: '<S4>/VeADIR_e_FaultSts_WHL_HubDisConSysPerf'
     */
    (void)Rte_Write_VeADIR_e_FaultSts_WHL_HubDisConSysPerf_Value
        (ADIR_ac_B.OutportBufferForVeADIR_e_FaultSts_WHL_Hu);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Out_Init'
     */
    /* Outport: '<Root>/VeADIR_e_WEDExtToolCmd' incorporates:
     *  DataStoreRead: '<S157>/Data Store Read'
     *  SignalConversion generated from: '<S4>/VeADIR_e_WEDExtToolCmd_Out_Init'
     */
    (void)Rte_Write_VeADIR_e_WEDExtToolCmd_Value(AeADIR_e_WEDExtToolCmd);

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeADIR_e_WEDMechFailure_Sts' incorporates:
     *  SignalConversion generated from: '<S157>/VeADIR_e_WEDMechFailure_Sts_Out_Init'
     *  SignalConversion generated from: '<S4>/VeADIR_e_WEDMechFailure_Sts_Out_Init'
     */
    (void)Rte_Write_VeADIR_e_WEDMechFailure_Sts_Value
        (ADIR_ac_B.OutportBufferForVeADIR_e_WEDMechFailure_);

    /* SignalConversion generated from: '<S4>/WEDExtToolCmd_Init_IRV' incorporates:
     *  SignalConversion generated from: '<S4>/BSM_WEDModeReqFA_Init_IRV'
     *  SignalConversion generated from: '<S4>/BSM_WEDModeReq_Init_IRV'
     */
#if Rte_SysCon_Variant_ADIR_1

    /* Merge: '<Root>/Merge_Outport_25' */
    Rte_IrvWrite_ADIR_PwrOn_BSM_WEDModeReqFA_Init_IRV_IRV
        (ADIR_ac_B.OutportBufferForBSM_WEDModeReqFA_Init_IR);

    /* Merge: '<Root>/Merge_Outport_1' incorporates:
     *  SignalConversion generated from: '<S4>/BSM_WEDModeReq_Init_IRV'
     */
    Rte_IrvWrite_ADIR_PwrOn_BSM_WEDModeReq_Init_IRV_IRV
        (ADIR_ac_B.OutportBufferForBSM_WEDModeReq_Init_IRV);

    /* Merge: '<Root>/Merge_Outport_4' incorporates:
     *  DataStoreRead: '<S156>/Data Store Read'
     */
    Rte_IrvWrite_ADIR_PwrOn_WEDExtToolCmd_Init_IRV_IRV(ADIR_ac_B.DataStoreRead_j);

#endif

    /* End of SignalConversion generated from: '<S4>/WEDExtToolCmd_Init_IRV' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, ADIR_CODE) ADIR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ADIR_PwrOn'
     */
#if Rte_SysCon_Variant_ADIR_1

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* SystemInitialize for Function Call SubSystem: '<S4>/IRV_Init' */
    /* SystemInitialize for SignalConversion generated from: '<S156>/BSM_WEDModeReq_Init_IRV' incorporates:
     *  Constant: '<S159>/Calib'
     */
    ADIR_ac_B.OutportBufferForBSM_WEDModeReq_Init_IRV =
        KeADIR_e_BSM_WEDModeReqInit;

    /* SystemInitialize for SignalConversion generated from: '<S156>/BSM_WEDModeReqFA_Init_IRV' incorporates:
     *  Constant: '<S158>/Calib'
     */
    ADIR_ac_B.OutportBufferForBSM_WEDModeReqFA_Init_IR =
        KeADIR_b_BSM_WEDModeReqFAInit;

    /* End of SystemInitialize for SubSystem: '<S4>/IRV_Init' */
    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
#endif

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S157>/VeADIR_e_WEDMechFailure_Sts_Out_Init' incorporates:
     *  Constant: '<S165>/Constant'
     */
    ADIR_ac_B.OutportBufferForVeADIR_e_WEDMechFailure_ =
        ADIR_ac_ConstB.Constant_d;

    /* SystemInitialize for SignalConversion generated from: '<S157>/VeADIR_e_BSM_WEDModeReq_Out_Init' incorporates:
     *  Constant: '<S161>/Constant'
     */
    ADIR_ac_B.OutportBufferForVeADIR_e_BSM_WEDModeReq_ =
        ADIR_ac_ConstB.Constant_i;

    /* SystemInitialize for SignalConversion generated from: '<S157>/VeADIR_e_FaultSts_LF_WHL_HubDisConActPerf' incorporates:
     *  Constant: '<S162>/Constant'
     */
    ADIR_ac_B.OutportBufferForVeADIR_e_FaultSts_LF_WHL = ADIR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S157>/VeADIR_e_FaultSts_RF_WHL_HubDisConActPerf' incorporates:
     *  Constant: '<S163>/Constant'
     */
    ADIR_ac_B.OutportBufferForVeADIR_e_FaultSts_RF_WHL =
        ADIR_ac_ConstB.Constant_l;

    /* SystemInitialize for SignalConversion generated from: '<S157>/VeADIR_e_FaultSts_WHL_HubDisConSysPerf' incorporates:
     *  Constant: '<S164>/Constant'
     */
    ADIR_ac_B.OutportBufferForVeADIR_e_FaultSts_WHL_Hu =
        ADIR_ac_ConstB.Constant_o;

    /* SystemInitialize for SignalConversion generated from: '<S157>/VeADIR_e_FaultSts_WHL_HubDisConOvrrideActv' incorporates:
     *  Constant: '<S160>/Constant'
     */
    ADIR_ac_B.OutportBufferForVeADIR_e_FaultSts_WHL__p =
        ADIR_ac_ConstB.Constant_j;

    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeADIR_e_BSM_WEDModeReq' incorporates:
     *  Merge: '<Root>/Merge_Outport_30'
     */
    (void)Rte_Write_VeADIR_e_BSM_WEDModeReq_Value(CeADCR_e_ReqOpt);

    /* SystemInitialize for Outport: '<Root>/VeADIR_e_WEDMechFailure_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_23'
     */
    (void)Rte_Write_VeADIR_e_WEDMechFailure_Sts_Value(CeADIR_e_BreakageNotTested);

    /* SystemInitialize for Outport: '<Root>/VeADIR_e_WEDExtToolCmd' incorporates:
     *  Merge: '<Root>/Merge_Outport_3'
     */
    (void)Rte_Write_VeADIR_e_WEDExtToolCmd_Value(CeADIR_e_ECUNormalControl);

    /* SystemInitialize for Outport: '<Root>/VeADIR_e_FaultSts_LF_WHL_HubDisConActPerf' incorporates:
     *  Merge: '<Root>/Merge_Outport_20'
     */
    (void)Rte_Write_VeADIR_e_FaultSts_LF_WHL_HubDisConActPerf_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeADIR_e_FaultSts_RF_WHL_HubDisConActPerf' incorporates:
     *  Merge: '<Root>/Merge_Outport_21'
     */
    (void)Rte_Write_VeADIR_e_FaultSts_RF_WHL_HubDisConActPerf_Value
        (CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeADIR_e_FaultSts_WHL_HubDisConSysPerf' incorporates:
     *  Merge: '<Root>/Merge_Outport_22'
     */
    (void)Rte_Write_VeADIR_e_FaultSts_WHL_HubDisConSysPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeADIR_e_FaultSts_WHL_HubDisConOvrrideActv' incorporates:
     *  Merge: '<Root>/Merge_Outport_5'
     */
    (void)Rte_Write_VeADIR_e_FaultSts_WHL_HubDisConOvrrideActv_Value
        (CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
