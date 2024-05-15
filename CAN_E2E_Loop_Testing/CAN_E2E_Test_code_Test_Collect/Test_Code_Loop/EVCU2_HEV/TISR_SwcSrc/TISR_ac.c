/*
 * File: TISR_ac.c
 *
 * Code generated for Simulink model 'TISR_ac'.
 *
 * Model version                  : 9.82
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:42:54 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TISR_ac.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_TISR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(sint16, TISR_VAR_INIT) KaTISR_e_InputSpeedSrcPriority[4] =
{
    0, 3, 1, 4
} ;                                    /* Referenced by: '<S132>/Calib' */

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(uint16, TISR_VAR_INIT) KeTISD_Cnt_DrpoutSgnlDly_BfCk = 96U;/* Referenced by: '<S86>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(uint16, TISR_VAR_INIT) KeTISD_Cnt_DrpoutSgnlDly_CAN = 96U;/* Referenced by: '<S68>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(uint16, TISR_VAR_INIT) KeTISD_Cnt_DrpoutSgnlDly_Mtr = 96U;/* Referenced by: '<S77>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(uint16, TISR_VAR_INIT) KeTISD_Cnt_DrpoutSgnlDly_Snsr = 96U;/* Referenced by: '<S95>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_Cnt_NumOfEngSpdSources =
    3.0F;                              /* Referenced by: '<S56>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(uint16, TISR_VAR_INIT) KeTISD_Cnt_SpdRatlFlt_FailCnt = 25U;/* Referenced by: '<S57>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(uint16, TISR_VAR_INIT) KeTISD_Cnt_SpdRatlFlt_SmpCnt = 32U;/* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(boolean, TISR_VAR_INIT) KeTISD_b_CANEngSpdOvrdEnbl = 0;/* Referenced by: '<S29>/Calib' */

#endif

static volatile CONST(boolean, TISR_VAR_INIT) KeTISD_b_EngSpdBfCkFAOvrdEnbl = 0;/* Referenced by: '<S30>/Calib' */
static volatile CONST(boolean, TISR_VAR_INIT) KeTISD_b_EngSpdBfCkFAOvrdVal = 0;/* Referenced by: '<S31>/Calib' */

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(boolean, TISR_VAR_INIT) KeTISD_b_EngSpdBfCkOvrdEnbl = 0;/* Referenced by: '<S32>/Calib' */

#endif

static volatile CONST(boolean, TISR_VAR_INIT) KeTISD_b_EngSpdCANFAOvrdEnbl = 0;/* Referenced by: '<S33>/Calib' */
static volatile CONST(boolean, TISR_VAR_INIT) KeTISD_b_EngSpdCANFAOvrdVal = 0;/* Referenced by: '<S34>/Calib' */
static volatile CONST(boolean, TISR_VAR_INIT) KeTISD_b_EngSpdMSPRFAOvrdEnbl = 0;/* Referenced by: '<S35>/Calib' */
static volatile CONST(boolean, TISR_VAR_INIT) KeTISD_b_EngSpdMSPRFAOvrdVal = 0;/* Referenced by: '<S36>/Calib' */

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(boolean, TISR_VAR_INIT) KeTISD_b_EngSpdMSPROvrdEnbl = 0;/* Referenced by: '<S37>/Calib' */

#endif

static volatile CONST(boolean, TISR_VAR_INIT) KeTISD_b_EngSpdSensorFAOvrdEnbl =
    0;                                 /* Referenced by: '<S38>/Calib' */
static volatile CONST(boolean, TISR_VAR_INIT) KeTISD_b_EngSpdSensorFAOvrdVal = 0;/* Referenced by: '<S39>/Calib' */

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(boolean, TISR_VAR_INIT) KeTISD_b_EngSpdSensorOvrdEnbl = 0;/* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(boolean, TISR_VAR_INIT) KeTISD_b_SpdRatlFlt_LtchEnbl = 0;/* Referenced by: '<S59>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(boolean, TISR_VAR_INIT) KeTISD_b_TransInSpdOvrdEnbl = 0;/* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_AboveSwtchOvrTolerance =
    200.0F;                            /* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_BelowSwtchOvrTolerance =
    700.0F;                            /* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_CANEngSpdOvrdVal = 0.0F;/* Referenced by: '<S42>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_EngSpdBfCkOvrdVal = 0.0F;/* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_EngSpdMSPROvrdVal = 0.0F;/* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_EngSpdSensorOvrdVal =
    0.0F;                              /* Referenced by: '<S45>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_HiLoSwtchOver = 1000.0F;/* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_SpdRatlDsblHigh_BfCk =
    300.0F;                            /* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_SpdRatlDsblHigh_CAN =
    300.0F;                            /* Referenced by: '<S69>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_SpdRatlDsblHigh_Mtr =
    300.0F;                            /* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_SpdRatlDsblHigh_Snsr =
    300.0F;                            /* Referenced by: '<S96>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_SpdRatlDsblLow_BfCk =
    5.0F;                              /* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_SpdRatlDsblLow_CAN = 5.0F;/* Referenced by: '<S70>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_SpdRatlDsblLow_Mtr = 5.0F;/* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_SpdRatlDsblLow_Snsr =
    5.0F;                              /* Referenced by: '<S97>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_SpdRatlDsblNiDecl_BfCk =
    8.75F;                             /* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_SpdRatlDsblNiDecl_CAN =
    8.75F;                             /* Referenced by: '<S71>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_SpdRatlDsblNiDecl_Mtr =
    8.75F;                             /* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_SpdRatlDsblNiDecl_Snsr =
    8.75F;                             /* Referenced by: '<S98>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_TransInSpdMin = 0.0F;/* Referenced by: '<S63>/Calib' */

#endif

#if Rte_SysCon_Variant_TISR_1

static volatile CONST(float32, TISR_VAR_INIT) KeTISD_n_TransInSpdOvrdVal = 0.0F;/* Referenced by: '<S46>/Calib' */

#endif

static volatile CONST(float32, TISR_VAR_INIT) KeTISR_K_InputAccelFilterConst =
    0.2F;                              /* Referenced by: '<S133>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_K_InputSpeedFilterConst =
    0.2F;                              /* Referenced by: '<S134>/Calib' */
static volatile CONST(boolean, TISR_VAR_INIT) KeTISR_b_NiAlwaysConnectedToMotor =
    0;                                 /* Referenced by: '<S182>/Calib' */
static volatile CONST(boolean, TISR_VAR_INIT) KeTISR_b_NiSensorFA_InitVal = 1;/* Referenced by: '<S225>/Calib' */
static volatile CONST(boolean, TISR_VAR_INIT)
    KeTISR_b_TransInAng720EstErr_InitVal = 1;/* Referenced by: '<S226>/Calib' */
static volatile CONST(boolean, TISR_VAR_INIT) KeTISR_b_UseTransMinInputSpdPHEV =
    0;                                 /* Referenced by: '<S214>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_dn_DefaultInputAccel = 0.0F;/* Referenced by: '<S140>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_dn_DefaultNiDotfromMSPR =
    0.0F;                              /* Referenced by: '<S201>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_dn_NiDotMaxSensLim =
    12000.0F;                          /* Referenced by: '<S171>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_dn_NiDotMinSensLim =
    -12000.0F;                         /* Referenced by: '<S172>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_k_TransMinInputSpdGain =
    1.0F;                              /* Referenced by: '<S215>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_n_DefaultInputSpeed = 0.0F;/* Referenced by: '<S141>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_n_DefaultNifromMSPR = 0.0F;/* Referenced by: '<S202>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_n_DfltTransMinInputSpd =
    0.0F;                              /* Referenced by:
                                        * '<S1>/FsftTISR_n_TransMinInputSpdChrt'
                                        * '<S5>/PokeTISR_n_TransMinInputSpdChrt'
                                        * '<S227>/Calib'
                                        */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_n_DfltTransMinInputSpdPHEV =
    0.0F;                              /* Referenced by:
                                        * '<S2>/FsftTISR_n_TransMinInputSpdPHEVChrt'
                                        * '<S6>/PokeTISR_n_TransMinInputSpdPHEVChrt'
                                        * '<S228>/Calib'
                                        */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_n_DirSwtchMaxSpeed = 150.0F;/* Referenced by: '<S162>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_n_DirectionSign_InitVal =
    1.0F;                              /* Referenced by: '<S229>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_n_MinDelt4NiMax = 150.0F;/* Referenced by: '<S207>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_n_MinDelt4NiMin = -150.0F;/* Referenced by: '<S208>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_n_TransMinInputSpdMaxLim =
    1500.0F;                           /* Referenced by: '<S216>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_n_TransMinInputSpdMinLim =
    0.0F;                              /* Referenced by: '<S217>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_n_TransMinInputSpdOffset1 =
    0.0F;                              /* Referenced by: '<S218>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_n_TransMinInputSpdOffset2 =
    0.0F;                              /* Referenced by: '<S219>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_phi_TransInAng720Est_Dflt =
    0.0F;          /* Referenced by: '<S7>/PokeTISR_phi_TransInAng720EstChrt' */
static volatile CONST(float32, TISR_VAR_INIT)
    KeTISR_phi_TransInAng720Est_InitVal = 0.0F;/* Referenced by: '<S230>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_r_All_NiFromNa_NCnDep =
    0.48837F;                          /* Referenced by: '<S199>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_r_All_NiFromNb_NCnDep =
    0.51163F;                          /* Referenced by: '<S200>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_r_M1_NiFromNa_NCnDep =
    0.361111F;                         /* Referenced by: '<S193>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_r_M1_NiFromNb_NCnDep =
    -0.475678F;                        /* Referenced by: '<S194>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_r_M2_NiFromNb_NCnDep =
    -0.317119F;                        /* Referenced by: '<S188>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_scl_NiMaxScaleDelt = 0.2F;/* Referenced by: '<S209>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_scl_NiMinScaleDelt = -0.2F;/* Referenced by: '<S210>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_t_DirRampTime = 0.05F;/* Referenced by: '<S163>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_t_NiDotSnsrTimePeriod =
    0.00625F;                          /* Referenced by: '<S173>/Calib' */
static volatile CONST(float32, TISR_VAR_INIT) KeTISR_t_dT = 0.00625F;/* Referenced by:
                                                                      * '<S164>/Calib'
                                                                      * '<S174>/Calib'
                                                                      */

#define STOP_SEC_CALIB_UNSPECIFIED_TISR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TISR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(boolean, TISR_VAR_INIT) VeTISC_b_InputSpeedFA_Actual;/* '<S19>/Logical' */
static VAR(boolean, TISR_VAR_INIT) VeTISC_b_MtrA_MtrB_FA;/* '<S123>/Merge1' */
static VAR(boolean, TISR_VAR_INIT) VeTISC_b_NiSensorFltAct;/* '<S124>/Logical1' */
static VAR(float32, TISR_VAR_INIT) VeTISC_dn_InputAcceltn_Actual;/* '<S137>/Gain' */
static VAR(float32, TISR_VAR_INIT) VeTISC_n_InputSpeedRaw_Actual;/* '<S136>/Gain' */
static VAR(float32, TISR_VAR_INIT) VeTISC_n_InputSpeed_Actual;/* '<S135>/Gain' */
static VAR(float32, TISR_VAR_INIT) VeTISC_n_NiFromSensor;/* '<S158>/Sum2' */
static VAR(float32, TISR_VAR_INIT) VeTISC_n_NifromMSPR;/* '<S123>/Merge' */

#if Rte_SysCon_Variant_TISR_1

static VAR(uint16, TISR_VAR_INIT) VeTISD_Cnt_InputSpdRatlFlt_FailCnt;/* '<S109>/Switch1' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(uint16, TISR_VAR_INIT) VeTISD_Cnt_InputSpdRatlFlt_SmpCnt;/* '<S110>/Switch1' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(boolean, TISR_VAR_INIT) VeTISD_b_EngSpdAbvSwtchOvr;/* '<S50>/Comparison4' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(boolean, TISR_VAR_INIT) VeTISD_b_EngSpdBfCkAbvSwtchOvr;/* '<S50>/Comparison2' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(boolean, TISR_VAR_INIT) VeTISD_b_EngSpdBfCkDecayLatch;/* '<S91>/AND' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(boolean, TISR_VAR_INIT) VeTISD_b_EngSpdBfCkDiagEnbl;/* '<S54>/NOT2' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(boolean, TISR_VAR_INIT) VeTISD_b_EngSpdBfCkRatlFail;/* '<S50>/Comparison1' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(boolean, TISR_VAR_INIT) VeTISD_b_EngSpdDecayLatch;/* '<S73>/AND' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(boolean, TISR_VAR_INIT) VeTISD_b_EngSpdDiagEnbl;/* '<S52>/NOT5' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(boolean, TISR_VAR_INIT) VeTISD_b_EngSpdMSPRAbvSwtchOvr;/* '<S50>/Comparison10' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(boolean, TISR_VAR_INIT) VeTISD_b_EngSpdMSPRDecayLatch;/* '<S82>/AND' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(boolean, TISR_VAR_INIT) VeTISD_b_EngSpdMSPRDiagEnbl;/* '<S53>/NOT2' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(boolean, TISR_VAR_INIT) VeTISD_b_EngSpdMSPRRatlFail;/* '<S50>/Comparison9' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(boolean, TISR_VAR_INIT) VeTISD_b_EngSpdRatlFail;/* '<S50>/Comparison3' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(boolean, TISR_VAR_INIT) VeTISD_b_EngSpdSnsrAbvSwtchOvr;/* '<S50>/Comparison8' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(boolean, TISR_VAR_INIT) VeTISD_b_EngSpdSnsrDecayLatch;/* '<S100>/AND' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(boolean, TISR_VAR_INIT) VeTISD_b_EngSpdSnsrDiagEnbl;/* '<S55>/NOT2' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(boolean, TISR_VAR_INIT) VeTISD_b_EngSpdSnsrRatlFail;/* '<S50>/Comparison7' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(boolean, TISR_VAR_INIT) VeTISD_b_SpdRatlFltEnbl;/* '<S50>/Logical4' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(boolean, TISR_VAR_INIT) VeTISD_b_SpdRatlFltSmplFail;/* '<S50>/Logical15' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(float32, TISR_VAR_INIT) VeTISD_n_EngSpdBCTransDiff;/* '<S50>/Abs' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(float32, TISR_VAR_INIT) VeTISD_n_EngSpdBfCk_RawDecel;/* '<S85>/Sum//Sub' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(float32, TISR_VAR_INIT) VeTISD_n_EngSpdMSPRTransDiff;/* '<S50>/Abs3' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(float32, TISR_VAR_INIT) VeTISD_n_EngSpdMSPR_RawDecel;/* '<S76>/Sum//Sub' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(float32, TISR_VAR_INIT) VeTISD_n_EngSpdRawDecel;/* '<S67>/Sum//Sub' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(float32, TISR_VAR_INIT) VeTISD_n_EngSpdSnsrTransDiff;/* '<S50>/Abs2' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(float32, TISR_VAR_INIT) VeTISD_n_EngSpdSnsr_RawDecel;/* '<S94>/Sum//Sub' */

#endif

#if Rte_SysCon_Variant_TISR_1

static VAR(float32, TISR_VAR_INIT) VeTISD_n_EngSpdTransDiff;/* '<S50>/Abs1' */

#endif

static VAR(float32, TISR_VAR_INIT) VeTISR_dn_NiDotFromMSPR;/* '<S123>/Merge2' */
static VAR(float32, TISR_VAR_INIT) VeTISR_dn_NiDotFromSensor;/* '<S170>/Multiplication2' */
static VAR(float32, TISR_VAR_INIT) VeTISR_n_DirectionAfterRamp;/* '<S167>/Switch' */
static VAR(float32, TISR_VAR_INIT) VeTISR_n_DirectionTarget;/* '<S156>/Merge' */
static VAR(float32, TISR_VAR_INIT) VeTISR_n_EngSpdChkSource;/* '<S124>/Merge' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TISR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TISR
#include "MemMap.h"

CONST(ConstB_TISR_ac_T, TISR_VAR_INIT) TISR_ac_ConstB =
{
    CeTISR_e_EngSpeedFromCAN,          /* '<S223>/Const2' */
    CeDFIB_e_Init                      /* '<S231>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_TISR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TISR
#include "MemMap.h"

VAR(B_TISR_ac_T, TISR_VAR_INIT) TISR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TISR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TISR
#include "MemMap.h"

VAR(DW_TISR_ac_T, TISR_VAR_INIT) TISR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TISR
#include "MemMap.h"

static FUNC(void, TISR_CODE_LOCAL) TISR_ac_IfActionSubsystem(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, TISR_VAR_INIT) rty_Out1);
static FUNC(void, TISR_CODE_LOCAL) TISR_ac_TISC_DtrmnInSpd_Init(void);
static FUNC(void, TISR_CODE_LOCAL) TISR_ac_TISC_DtrmnInSpd_Update(void);
static FUNC(void, TISR_CODE_LOCAL) TISR_ac_TISC_DtrmnInSpd(void);

/*
 * Output and update for action system:
 *    '<S156>/If Action Subsystem'
 *    '<S156>/If Action Subsystem1'
 *    '<S124>/If Action Subsystem'
 *    '<S124>/If Action Subsystem1'
 *    '<S124>/If Action Subsystem3'
 *    '<S124>/If Action Subsystem2'
 */
static FUNC(void, TISR_CODE_LOCAL) TISR_ac_IfActionSubsystem(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, TISR_VAR_INIT) rty_Out1)
{
    /* Inport: '<S160>/In1' */
    *rty_Out1 = rtu_In1;
}

/* System initialize for atomic system: '<S20>/TISC_DtrmnInSpd' */
static FUNC(void, TISR_CODE_LOCAL) TISR_ac_TISC_DtrmnInSpd_Init(void)
{
    /* InitializeConditions for UnitDelay: '<S156>/Unit Delay' */
    TISR_ac_DW.UnitDelay_DSTATE_h = 1.0F;

    /* InitializeConditions for UnitDelay: '<S156>/Unit Delay1' */
    TISR_ac_DW.UnitDelay1_DSTATE = 1.0F;
}

/* Outputs for atomic system: '<S20>/TISC_DtrmnInSpd' */
static FUNC(void, TISR_CODE_LOCAL) TISR_ac_TISC_DtrmnInSpd(void)
{
    sint32 exitg1;
    float32 rtb_Abs;
    float32 rtb_Merge6;
    float32 rtb_Product;
    float32 rtb_Product1;
    float32 rtb_Switch1;
    sint16 b_index;
    boolean rtb_TmpSignalConversionAtSFunctionInport[4];
    boolean rtb_OR1;
    boolean tmp;

    /* If: '<S123>/If' incorporates:
     *  Constant: '<S176>/Constant'
     *  Constant: '<S177>/Constant'
     *  Constant: '<S182>/Calib'
     *  RelationalOperator: '<S123>/Comparison1'
     *  RelationalOperator: '<S123>/Comparison4'
     */
    if (KeTISR_b_NiAlwaysConnectedToMotor)
    {
        /* Outputs for IfAction SubSystem: '<S123>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S180>/Action Port'
         */
        /* Switch: '<S197>/Switch1' incorporates:
         *  Constant: '<S180>/Constant Value'
         *  Constant: '<S180>/FALSE Constant'
         *  Constant: '<S196>/Constant'
         *  Constant: '<S199>/Calib'
         *  Logic: '<S180>/Logical1'
         *  RelationalOperator: '<S180>/Comparison1'
         *  RelationalOperator: '<S180>/Comparison3'
         *  VariantMerge generated from: '<S21>/VS7'
         */
        if (KeTISR_r_All_NiFromNa_NCnDep == 0.0F)
        {
            rtb_OR1 = false;
        }
        else
        {
            rtb_OR1 = ((((uint32)TISR_ac_B.VariantMerge_For_Variant_Source_VS7)
                        != CeMSPR_e_MtrSpSrc_MCP) ||
                       (TISR_ac_B.VariantMerge_For_Variant_Source_VS3));
        }

        /* End of Switch: '<S197>/Switch1' */

        /* Switch: '<S198>/Switch1' incorporates:
         *  Constant: '<S180>/Constant Value1'
         *  Constant: '<S180>/FALSE Constant1'
         *  Constant: '<S195>/Constant'
         *  Constant: '<S200>/Calib'
         *  Logic: '<S180>/Logical2'
         *  RelationalOperator: '<S180>/Comparison2'
         *  RelationalOperator: '<S180>/Comparison4'
         *  VariantMerge generated from: '<S21>/VS8'
         */
        if (KeTISR_r_All_NiFromNb_NCnDep == 0.0F)
        {
            tmp = false;
        }
        else
        {
            tmp = ((((uint32)TISR_ac_B.VariantMerge_For_Variant_Source_VS8) !=
                    CeMSPR_e_MtrSpSrc_MCP) ||
                   (TISR_ac_B.VariantMerge_For_Variant_Source_VS4));
        }

        /* End of Switch: '<S198>/Switch1' */

        /* Merge: '<S123>/Merge1' incorporates:
         *  Logic: '<S180>/Logical9'
         */
        VeTISC_b_MtrA_MtrB_FA = (rtb_OR1 || tmp);

        /* Merge: '<S123>/Merge' incorporates:
         *  Constant: '<S199>/Calib'
         *  Constant: '<S200>/Calib'
         *  Product: '<S180>/Multiplication1'
         *  Product: '<S180>/Multiplication2'
         *  Sum: '<S180>/Summation'
         */
        VeTISC_n_NifromMSPR = (TISR_ac_B.VariantMerge_For_Variant_Source_VS1 *
                               KeTISR_r_All_NiFromNa_NCnDep) +
            (TISR_ac_B.VariantMerge_For_Variant_Source_VS2 *
             KeTISR_r_All_NiFromNb_NCnDep);

        /* Merge: '<S123>/Merge2' incorporates:
         *  Constant: '<S199>/Calib'
         *  Constant: '<S200>/Calib'
         *  Product: '<S180>/Multiplication3'
         *  Product: '<S180>/Multiplication4'
         *  Sum: '<S180>/Summation1'
         */
        VeTISR_dn_NiDotFromMSPR = (TISR_ac_B.VariantMerge_For_Variant_Source_VS5
            * KeTISR_r_All_NiFromNa_NCnDep) +
            (TISR_ac_B.VariantMerge_For_Variant_Source_VS6 *
             KeTISR_r_All_NiFromNb_NCnDep);

        /* End of Outputs for SubSystem: '<S123>/If Action Subsystem2' */
    }
    else if (((uint32)TISR_ac_B.TmpSignalConversionAtVeHSER_e_HTDR_State) ==
             CeHSER_e_M2_State)
    {
        /* Outputs for IfAction SubSystem: '<S123>/If Action Subsystem' incorporates:
         *  ActionPort: '<S178>/Action Port'
         */
        /* Switch: '<S185>/Switch1' incorporates:
         *  Constant: '<S178>/Constant Value'
         *  Constant: '<S178>/FALSE Constant'
         *  Constant: '<S184>/Constant'
         *  Constant: '<S187>/Calib'
         *  Logic: '<S178>/Logical3'
         *  RelationalOperator: '<S178>/Comparison1'
         *  RelationalOperator: '<S178>/Comparison3'
         *  VariantMerge generated from: '<S21>/VS7'
         */
        if (((float32)
                Rte_Prm_KeTISR_r_M2_NiFromNa_NCnDep_KeTISR_r_M2_NiFromNa_NCnDep())
            == 0.0F)
        {
            rtb_OR1 = false;
        }
        else
        {
            rtb_OR1 = ((((uint32)TISR_ac_B.VariantMerge_For_Variant_Source_VS7)
                        != CeMSPR_e_MtrSpSrc_MCP) ||
                       (TISR_ac_B.VariantMerge_For_Variant_Source_VS3));
        }

        /* End of Switch: '<S185>/Switch1' */

        /* Switch: '<S186>/Switch1' incorporates:
         *  Constant: '<S178>/Constant Value1'
         *  Constant: '<S178>/FALSE Constant1'
         *  Constant: '<S183>/Constant'
         *  Constant: '<S188>/Calib'
         *  Logic: '<S178>/Logical1'
         *  RelationalOperator: '<S178>/Comparison2'
         *  RelationalOperator: '<S178>/Comparison4'
         *  VariantMerge generated from: '<S21>/VS8'
         */
        if (KeTISR_r_M2_NiFromNb_NCnDep == 0.0F)
        {
            tmp = false;
        }
        else
        {
            tmp = ((((uint32)TISR_ac_B.VariantMerge_For_Variant_Source_VS8) !=
                    CeMSPR_e_MtrSpSrc_MCP) ||
                   (TISR_ac_B.VariantMerge_For_Variant_Source_VS4));
        }

        /* End of Switch: '<S186>/Switch1' */

        /* Merge: '<S123>/Merge1' incorporates:
         *  Logic: '<S178>/Logical9'
         */
        VeTISC_b_MtrA_MtrB_FA = (rtb_OR1 || tmp);

        /* Merge: '<S123>/Merge' incorporates:
         *  Constant: '<S187>/Calib'
         *  Constant: '<S188>/Calib'
         *  Product: '<S178>/Multiplication1'
         *  Product: '<S178>/Multiplication2'
         *  Sum: '<S178>/Summation'
         */
        VeTISC_n_NifromMSPR = (TISR_ac_B.VariantMerge_For_Variant_Source_VS1 *
                               ((float32)
                                Rte_Prm_KeTISR_r_M2_NiFromNa_NCnDep_KeTISR_r_M2_NiFromNa_NCnDep
                                ())) +
            (TISR_ac_B.VariantMerge_For_Variant_Source_VS2 *
             KeTISR_r_M2_NiFromNb_NCnDep);

        /* Merge: '<S123>/Merge2' incorporates:
         *  Constant: '<S187>/Calib'
         *  Constant: '<S188>/Calib'
         *  Product: '<S178>/Multiplication3'
         *  Product: '<S178>/Multiplication4'
         *  Sum: '<S178>/Summation1'
         */
        VeTISR_dn_NiDotFromMSPR = (TISR_ac_B.VariantMerge_For_Variant_Source_VS5
            * ((float32)
               Rte_Prm_KeTISR_r_M2_NiFromNa_NCnDep_KeTISR_r_M2_NiFromNa_NCnDep()))
            + (TISR_ac_B.VariantMerge_For_Variant_Source_VS6 *
               KeTISR_r_M2_NiFromNb_NCnDep);

        /* End of Outputs for SubSystem: '<S123>/If Action Subsystem' */
    }
    else if (((uint32)TISR_ac_B.TmpSignalConversionAtVeHSER_e_HTDR_State) ==
             CeHSER_e_M1_State)
    {
        /* Outputs for IfAction SubSystem: '<S123>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S179>/Action Port'
         */
        /* Switch: '<S191>/Switch1' incorporates:
         *  Constant: '<S179>/Constant Value'
         *  Constant: '<S179>/FALSE Constant'
         *  Constant: '<S190>/Constant'
         *  Constant: '<S193>/Calib'
         *  Logic: '<S179>/Logical2'
         *  RelationalOperator: '<S179>/Comparison1'
         *  RelationalOperator: '<S179>/Comparison3'
         *  VariantMerge generated from: '<S21>/VS7'
         */
        if (KeTISR_r_M1_NiFromNa_NCnDep == 0.0F)
        {
            rtb_OR1 = false;
        }
        else
        {
            rtb_OR1 = ((((uint32)TISR_ac_B.VariantMerge_For_Variant_Source_VS7)
                        != CeMSPR_e_MtrSpSrc_MCP) ||
                       (TISR_ac_B.VariantMerge_For_Variant_Source_VS3));
        }

        /* End of Switch: '<S191>/Switch1' */

        /* Switch: '<S192>/Switch1' incorporates:
         *  Constant: '<S179>/Constant Value1'
         *  Constant: '<S179>/FALSE Constant1'
         *  Constant: '<S189>/Constant'
         *  Constant: '<S194>/Calib'
         *  Logic: '<S179>/Logical1'
         *  RelationalOperator: '<S179>/Comparison2'
         *  RelationalOperator: '<S179>/Comparison4'
         *  VariantMerge generated from: '<S21>/VS8'
         */
        if (KeTISR_r_M1_NiFromNb_NCnDep == 0.0F)
        {
            tmp = false;
        }
        else
        {
            tmp = ((((uint32)TISR_ac_B.VariantMerge_For_Variant_Source_VS8) !=
                    CeMSPR_e_MtrSpSrc_MCP) ||
                   (TISR_ac_B.VariantMerge_For_Variant_Source_VS4));
        }

        /* End of Switch: '<S192>/Switch1' */

        /* Merge: '<S123>/Merge1' incorporates:
         *  Logic: '<S179>/Logical9'
         */
        VeTISC_b_MtrA_MtrB_FA = (rtb_OR1 || tmp);

        /* Merge: '<S123>/Merge' incorporates:
         *  Constant: '<S193>/Calib'
         *  Constant: '<S194>/Calib'
         *  Product: '<S179>/Multiplication1'
         *  Product: '<S179>/Multiplication2'
         *  Sum: '<S179>/Summation'
         */
        VeTISC_n_NifromMSPR = (TISR_ac_B.VariantMerge_For_Variant_Source_VS1 *
                               KeTISR_r_M1_NiFromNa_NCnDep) +
            (TISR_ac_B.VariantMerge_For_Variant_Source_VS2 *
             KeTISR_r_M1_NiFromNb_NCnDep);

        /* Merge: '<S123>/Merge2' incorporates:
         *  Constant: '<S193>/Calib'
         *  Constant: '<S194>/Calib'
         *  Product: '<S179>/Multiplication3'
         *  Product: '<S179>/Multiplication4'
         *  Sum: '<S179>/Summation1'
         */
        VeTISR_dn_NiDotFromMSPR = (TISR_ac_B.VariantMerge_For_Variant_Source_VS5
            * KeTISR_r_M1_NiFromNa_NCnDep) +
            (TISR_ac_B.VariantMerge_For_Variant_Source_VS6 *
             KeTISR_r_M1_NiFromNb_NCnDep);

        /* End of Outputs for SubSystem: '<S123>/If Action Subsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S123>/If Action Subsystem5' incorporates:
         *  ActionPort: '<S181>/Action Port'
         */
        /* Merge: '<S123>/Merge' incorporates:
         *  Constant: '<S202>/Calib'
         *  SignalConversion generated from: '<S181>/LeTISR_n_DefaultNifromMSPR'
         */
        VeTISC_n_NifromMSPR = KeTISR_n_DefaultNifromMSPR;

        /* Merge: '<S123>/Merge2' incorporates:
         *  Constant: '<S201>/Calib'
         *  SignalConversion generated from: '<S181>/LeTISR_dn_DefaultNiDotfromMSPR'
         */
        VeTISR_dn_NiDotFromMSPR = KeTISR_dn_DefaultNiDotfromMSPR;

        /* Merge: '<S123>/Merge1' incorporates:
         *  Constant: '<S181>/TRUE Constant'
         *  SignalConversion generated from: '<S181>/MSPR_FA'
         */
        VeTISC_b_MtrA_MtrB_FA = true;

        /* End of Outputs for SubSystem: '<S123>/If Action Subsystem5' */
    }

    /* End of If: '<S123>/If' */

    /* Product: '<S158>/Product' incorporates:
     *  Constant: '<S171>/Calib'
     *  Constant: '<S174>/Calib'
     */
    rtb_Product = KeTISR_dn_NiDotMaxSensLim * KeTISR_t_dT;

    /* Product: '<S158>/Product1' incorporates:
     *  Constant: '<S172>/Calib'
     *  Constant: '<S174>/Calib'
     */
    rtb_Product1 = KeTISR_t_dT * KeTISR_dn_NiDotMinSensLim;

    /* Outputs for Atomic SubSystem: '<S165>/Protected Division' */
    /* Switch: '<S168>/Switch1' incorporates:
     *  Constant: '<S163>/Calib'
     *  Constant: '<S168>/Constant Value1'
     *  RelationalOperator: '<S168>/Not Equal1'
     */
    if (KeTISR_t_DirRampTime != 0.0F)
    {
        /* Switch: '<S168>/Switch1' incorporates:
         *  Product: '<S168>/Division'
         */
        rtb_Switch1 = 2.0F / KeTISR_t_DirRampTime;
    }
    else
    {
        /* Switch: '<S168>/Switch1' */
        rtb_Switch1 = 3.402823466E+38F;
    }

    /* End of Switch: '<S168>/Switch1' */
    /* End of Outputs for SubSystem: '<S165>/Protected Division' */

    /* Abs: '<S165>/Abs' incorporates:
     *  Constant: '<S164>/Calib'
     *  Product: '<S165>/Multiplication'
     */
    rtb_Abs = fabsf(rtb_Switch1 * KeTISR_t_dT);

    /* Outputs for Atomic SubSystem: '<S157>/EdgeRising' */
    /* Logic: '<S169>/OR1' incorporates:
     *  UnitDelay: '<S169>/Unit Delay'
     */
    rtb_OR1 = !TISR_ac_DW.UnitDelay_DSTATE_i;

    /* Update for UnitDelay: '<S169>/Unit Delay' incorporates:
     *  Constant: '<S157>/TRUE Constant1'
     */
    TISR_ac_DW.UnitDelay_DSTATE_i = true;

    /* Switch: '<S157>/Switch' incorporates:
     *  Logic: '<S169>/AND'
     */
    if (rtb_OR1)
    {
        /* Switch: '<S157>/Switch' incorporates:
         *  Constant: '<S157>/Constant Value5'
         */
        rtb_Switch1 = 1.0F;
    }
    else
    {
        /* Switch: '<S157>/Switch' */
        rtb_Switch1 = TISR_ac_B.TmpSignalConversionAtVeTISR_n_DirectionS;
    }

    /* End of Switch: '<S157>/Switch' */
    /* End of Outputs for SubSystem: '<S157>/EdgeRising' */

    /* If: '<S156>/If' incorporates:
     *  Constant: '<S156>/Constant Value2'
     *  Constant: '<S162>/Calib'
     *  Logic: '<S156>/Logical'
     *  RelationalOperator: '<S156>/Comparison3'
     *  RelationalOperator: '<S156>/Comparison4'
     *  UnitDelay: '<S156>/Unit Delay'
     */
    if ((TISR_ac_B.TmpSignalConversionAtVeTISR_n_InputSpdSn >=
            KeTISR_n_DirSwtchMaxSpeed) || (rtb_Switch1 == 0.0F))
    {
        /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem' incorporates:
         *  ActionPort: '<S160>/Action Port'
         */
        TISR_ac_IfActionSubsystem(TISR_ac_DW.UnitDelay_DSTATE_h,
            (&(VeTISR_n_DirectionTarget)));

        /* End of Outputs for SubSystem: '<S156>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S156>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S161>/Action Port'
         */
        TISR_ac_IfActionSubsystem(rtb_Switch1, (&(VeTISR_n_DirectionTarget)));

        /* End of Outputs for SubSystem: '<S156>/If Action Subsystem1' */
    }

    /* End of If: '<S156>/If' */

    /* Sum: '<S165>/Sum2' incorporates:
     *  UnitDelay: '<S156>/Unit Delay1'
     */
    rtb_Switch1 = VeTISR_n_DirectionTarget - TISR_ac_DW.UnitDelay1_DSTATE;

    /* Outputs for Atomic SubSystem: '<S165>/Limiter1' */
    /* Switch: '<S166>/Switch1' incorporates:
     *  RelationalOperator: '<S166>/Relational Operator'
     */
    if (rtb_Abs < rtb_Switch1)
    {
        /* Switch: '<S126>/Switch2' */
        rtb_Switch1 = rtb_Abs;
    }

    /* End of Switch: '<S166>/Switch1' */

    /* Switch: '<S166>/Switch' incorporates:
     *  Gain: '<S165>/Gain'
     *  RelationalOperator: '<S166>/Relational Operator1'
     */
    if (rtb_Switch1 <= (-rtb_Abs))
    {
        rtb_Switch1 = -rtb_Abs;
    }

    /* End of Switch: '<S166>/Switch' */
    /* End of Outputs for SubSystem: '<S165>/Limiter1' */

    /* Sum: '<S165>/Sum3' incorporates:
     *  UnitDelay: '<S156>/Unit Delay1'
     */
    rtb_Switch1 += TISR_ac_DW.UnitDelay1_DSTATE;

    /* Outputs for Atomic SubSystem: '<S165>/Limiter2' */
    /* Switch: '<S167>/Switch1' incorporates:
     *  Constant: '<S156>/Constant Value'
     *  RelationalOperator: '<S167>/Relational Operator'
     */
    if (1.0F < rtb_Switch1)
    {
        /* Switch: '<S126>/Switch2' */
        rtb_Switch1 = 1.0F;
    }

    /* End of Switch: '<S167>/Switch1' */

    /* Switch: '<S167>/Switch' incorporates:
     *  Constant: '<S156>/Constant Value1'
     *  RelationalOperator: '<S167>/Relational Operator1'
     */
    if (rtb_Switch1 > -1.0F)
    {
        /* Switch: '<S167>/Switch' */
        VeTISR_n_DirectionAfterRamp = rtb_Switch1;
    }
    else
    {
        /* Switch: '<S167>/Switch' */
        VeTISR_n_DirectionAfterRamp = -1.0F;
    }

    /* End of Switch: '<S167>/Switch' */
    /* End of Outputs for SubSystem: '<S165>/Limiter2' */

    /* Sum: '<S158>/Sum1' incorporates:
     *  Product: '<S122>/Product'
     *  UnitDelay: '<S158>/Unit Delay'
     */
    rtb_Switch1 = (TISR_ac_B.TmpSignalConversionAtVeTISR_n_InputSpdSn *
                   VeTISR_n_DirectionAfterRamp) - VeTISC_n_NiFromSensor;

    /* Outputs for Atomic SubSystem: '<S158>/Limiter' */
    /* Switch: '<S175>/Switch1' incorporates:
     *  RelationalOperator: '<S175>/Relational Operator'
     */
    if (rtb_Product < rtb_Switch1)
    {
        /* Switch: '<S126>/Switch2' */
        rtb_Switch1 = rtb_Product;
    }

    /* End of Switch: '<S175>/Switch1' */

    /* Switch: '<S175>/Switch' incorporates:
     *  RelationalOperator: '<S175>/Relational Operator1'
     */
    if (rtb_Switch1 > rtb_Product1)
    {
        rtb_Product1 = rtb_Switch1;
    }

    /* End of Switch: '<S175>/Switch' */
    /* End of Outputs for SubSystem: '<S158>/Limiter' */

    /* Sum: '<S158>/Sum2' incorporates:
     *  UnitDelay: '<S158>/Unit Delay'
     */
    VeTISC_n_NiFromSensor = rtb_Product1 + VeTISC_n_NiFromSensor;

    /* If: '<S124>/If' */
    if (!TISR_ac_B.TmpSignalConversionAtVeESPR_b_CrnkSnsrFA)
    {
        /* Outputs for IfAction SubSystem: '<S124>/If Action Subsystem' incorporates:
         *  ActionPort: '<S203>/Action Port'
         */
        TISR_ac_IfActionSubsystem
            (TISR_ac_B.TmpSignalConversionAtVeESPR_n_EngineSpee,
             (&(VeTISR_n_EngSpdChkSource)));

        /* End of Outputs for SubSystem: '<S124>/If Action Subsystem' */
    }
    else if (!TISR_ac_B.TmpSignalConversionAtVeESPR_b_EngineSpee)
    {
        /* Outputs for IfAction SubSystem: '<S124>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S204>/Action Port'
         */
        TISR_ac_IfActionSubsystem
            (TISR_ac_B.TmpSignalConversionAtVeESPR_n_EngineSp_n,
             (&(VeTISR_n_EngSpdChkSource)));

        /* End of Outputs for SubSystem: '<S124>/If Action Subsystem1' */
    }
    else if (!VeTISC_b_MtrA_MtrB_FA)
    {
        /* Outputs for IfAction SubSystem: '<S124>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S206>/Action Port'
         */
        TISR_ac_IfActionSubsystem(VeTISC_n_NifromMSPR,
            (&(VeTISR_n_EngSpdChkSource)));

        /* End of Outputs for SubSystem: '<S124>/If Action Subsystem3' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S124>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S205>/Action Port'
         */
        TISR_ac_IfActionSubsystem(VeTISC_n_NiFromSensor,
            (&(VeTISR_n_EngSpdChkSource)));

        /* End of Outputs for SubSystem: '<S124>/If Action Subsystem2' */
    }

    /* End of If: '<S124>/If' */

    /* Logic: '<S124>/Logical1' incorporates:
     *  Constant: '<S207>/Calib'
     *  Constant: '<S208>/Calib'
     *  Constant: '<S209>/Calib'
     *  Constant: '<S210>/Calib'
     *  Logic: '<S124>/Logical'
     *  MinMax: '<S124>/MinMax'
     *  MinMax: '<S124>/MinMax1'
     *  Product: '<S124>/Product'
     *  Product: '<S124>/Product1'
     *  RelationalOperator: '<S124>/Comparison1'
     *  RelationalOperator: '<S124>/Comparison2'
     *  Sum: '<S124>/Sum'
     *  Sum: '<S124>/Sum1'
     */
    VeTISC_b_NiSensorFltAct = ((((fmaxf(KeTISR_n_MinDelt4NiMax,
        VeTISR_n_EngSpdChkSource * KeTISR_scl_NiMaxScaleDelt) +
        VeTISR_n_EngSpdChkSource) < VeTISC_n_NiFromSensor) ||
        (VeTISC_n_NiFromSensor < (fminf(VeTISR_n_EngSpdChkSource *
        KeTISR_scl_NiMinScaleDelt, KeTISR_n_MinDelt4NiMin) +
        VeTISR_n_EngSpdChkSource))) ||
        (TISR_ac_B.TmpSignalConversionAtVeTISR_b_SnsrInputS));

    /* SignalConversion generated from: '<S138>/ SFunction ' incorporates:
     *  Chart: '<S121>/SourcePrioritization'
     */
    rtb_TmpSignalConversionAtSFunctionInport[0] =
        TISR_ac_B.TmpSignalConversionAtVeESPR_b_CrnkSnsrFA;
    rtb_TmpSignalConversionAtSFunctionInport[1] = VeTISC_b_MtrA_MtrB_FA;
    rtb_TmpSignalConversionAtSFunctionInport[2] = VeTISC_b_NiSensorFltAct;
    rtb_TmpSignalConversionAtSFunctionInport[3] =
        TISR_ac_B.TmpSignalConversionAtVeESPR_b_EngineSpee;

    /* Chart: '<S121>/SourcePrioritization' */
    /* Gateway: TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/SourcePrioritization */
    /* During: TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/SourcePrioritization */
    /* Entry Internal: TISR_FastTEF/TISC_InSpd/TISC_DtrmnInSpd/TISC_DetermineInputSpeed/SourcePrioritization */
    /* Transition: '<S138>:1' */
    /* Priority Based Source Selection */
    /* Transition: '<S138>:11' */
    b_index = 0;
    do
    {
        exitg1 = 0;
        if (b_index < 4)
        {
            /* Transition: '<S138>:15' */
            /* Transition: '<S138>:18' */
            if (KaTISR_e_InputSpeedSrcPriority[(b_index)] != 4)
            {
                /* Transition: '<S138>:20' */
                /* Transition: '<S138>:23' */
                if (rtb_TmpSignalConversionAtSFunctionInport[KaTISR_e_InputSpeedSrcPriority
                        [(b_index)]])
                {
                    /* Transition: '<S138>:25' */
                    /* Transition: '<S138>:27' */
                    b_index++;

                    /* Transition: '<S138>:31' */
                    /* Transition: '<S138>:32' */
                    /* Transition: '<S138>:29' */
                }
                else
                {
                    /* Transition: '<S138>:35' */
                    b_index = KaTISR_e_InputSpeedSrcPriority[(b_index)];

                    /* Transition: '<S138>:36' */
                    /* Transition: '<S138>:40' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S138>:38' */
                b_index = 4;

                /* Unknown Source */
                /* Transition: '<S138>:40' */
                exitg1 = 1;
            }
        }
        else
        {
            /* Transition: '<S138>:41' */
            b_index = 4;

            /* Unknown Source */
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);

    /* Switch: '<S126>/Switch2' incorporates:
     *  Constant: '<S170>/Constant Value1'
     *  Constant: '<S174>/Calib'
     *  Product: '<S170>/Multiplication3'
     */
    rtb_Switch1 = KeTISR_t_dT / 2.0F;

    /* Product: '<S170>/Multiplication2' incorporates:
     *  Constant: '<S173>/Calib'
     *  Product: '<S170>/Multiplication4'
     *  Sum: '<S170>/Summation'
     *  Sum: '<S170>/Summation1'
     *  Sum: '<S170>/Summation2'
     *  UnitDelay: '<S170>/Unit Delay'
     *  UnitDelay: '<S170>/Unit Delay1'
     */
    VeTISR_dn_NiDotFromSensor = ((VeTISC_n_NiFromSensor - ((rtb_Switch1 -
        KeTISR_t_NiDotSnsrTimePeriod) * TISR_ac_DW.UnitDelay1_DSTATE_o)) -
        TISR_ac_DW.UnitDelay_DSTATE_f2) / (rtb_Switch1 +
        KeTISR_t_NiDotSnsrTimePeriod);

    /* SwitchCase: '<S121>/Switch Ca' */
    switch (b_index)
    {
      case 2:
        /* Outputs for IfAction SubSystem: '<S121>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S130>/Action Port'
         */
        /* Merge: '<S121>/Merge4' incorporates:
         *  Gain: '<S151>/Gain'
         */
        VeTISC_n_InputSpeedRaw_Actual = VeTISC_n_NiFromSensor;

        /* Merge: '<S121>/Merge5' incorporates:
         *  Constant: '<S150>/Constant'
         *  SignalConversion generated from: '<S130>/Out2'
         */
        TISR_ac_B.Merge5 = CeTISR_e_EngSpeedFromSensor;

        /* Merge: '<S121>/Merge6' incorporates:
         *  Gain: '<S152>/Gain'
         */
        rtb_Merge6 = VeTISR_dn_NiDotFromSensor;

        /* End of Outputs for SubSystem: '<S121>/If Action Subsystem4' */
        break;

      case 0:
        /* Merge: '<S121>/Merge6' incorporates:
         *  Inport: '<Root>/VeESPR_dn_EngineAccel'
         */
        (void)Rte_Read_VeESPR_dn_EngineAccel_Value(&rtb_Merge6);

        /* Outputs for IfAction SubSystem: '<S121>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S128>/Action Port'
         */
        /* Merge: '<S121>/Merge4' incorporates:
         *  Gain: '<S145>/Gain'
         */
        VeTISC_n_InputSpeedRaw_Actual =
            TISR_ac_B.TmpSignalConversionAtVeESPR_n_EngineSpee;

        /* Merge: '<S121>/Merge5' incorporates:
         *  Constant: '<S144>/Constant'
         *  SignalConversion generated from: '<S128>/Out2'
         */
        TISR_ac_B.Merge5 = CeTISR_e_EngSpeedFromCAN;

        /* End of Outputs for SubSystem: '<S121>/If Action Subsystem2' */
        break;

      case 3:
        /* Merge: '<S121>/Merge6' incorporates:
         *  Inport: '<Root>/VeESPR_dn_EngineAccel_MCP'
         */
        (void)Rte_Read_VeESPR_dn_EngineAccel_MCP_Value(&rtb_Merge6);

        /* Outputs for IfAction SubSystem: '<S121>/If Action Subsystem6' incorporates:
         *  ActionPort: '<S131>/Action Port'
         */
        /* Merge: '<S121>/Merge4' incorporates:
         *  Gain: '<S154>/Gain'
         */
        VeTISC_n_InputSpeedRaw_Actual =
            TISR_ac_B.TmpSignalConversionAtVeESPR_n_EngineSp_n;

        /* Merge: '<S121>/Merge5' incorporates:
         *  Constant: '<S153>/Constant'
         *  SignalConversion generated from: '<S131>/Out2'
         */
        TISR_ac_B.Merge5 = CeTISR_e_EngSpeedFromMCP;

        /* End of Outputs for SubSystem: '<S121>/If Action Subsystem6' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S121>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S129>/Action Port'
         */
        /* Merge: '<S121>/Merge4' incorporates:
         *  Gain: '<S148>/Gain'
         */
        VeTISC_n_InputSpeedRaw_Actual = VeTISC_n_NifromMSPR;

        /* Merge: '<S121>/Merge5' incorporates:
         *  Constant: '<S147>/Constant'
         *  SignalConversion generated from: '<S129>/Out2'
         */
        TISR_ac_B.Merge5 = CeTISR_e_EngSpeedFromMSPR;

        /* Merge: '<S121>/Merge6' incorporates:
         *  Gain: '<S149>/Gain'
         */
        rtb_Merge6 = VeTISR_dn_NiDotFromMSPR;

        /* End of Outputs for SubSystem: '<S121>/If Action Subsystem3' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S121>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S127>/Action Port'
         */
        /* Merge: '<S121>/Merge4' incorporates:
         *  Constant: '<S141>/Calib'
         *  Gain: '<S142>/Gain'
         */
        VeTISC_n_InputSpeedRaw_Actual = KeTISR_n_DefaultInputSpeed;

        /* Merge: '<S121>/Merge5' incorporates:
         *  Constant: '<S139>/Constant'
         *  SignalConversion generated from: '<S127>/Out2'
         */
        TISR_ac_B.Merge5 = CeTISR_e_EngSpeedFault;

        /* Merge: '<S121>/Merge6' incorporates:
         *  Constant: '<S140>/Calib'
         *  Gain: '<S143>/Gain'
         */
        rtb_Merge6 = KeTISR_dn_DefaultInputAccel;

        /* End of Outputs for SubSystem: '<S121>/If Action Subsystem1' */
        break;
    }

    /* End of SwitchCase: '<S121>/Switch Ca' */

    /* Outputs for Atomic SubSystem: '<S121>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S125>/Switch1' incorporates:
     *  Constant: '<S134>/Calib'
     *  Product: '<S125>/Multiplication'
     *  Sum: '<S125>/Subtraction'
     *  Sum: '<S125>/Summation'
     *  UnitDelay: '<S125>/Unit Delay'
     */
    TISR_ac_DW.UnitDelay_DSTATE_jq += (VeTISC_n_InputSpeedRaw_Actual -
        TISR_ac_DW.UnitDelay_DSTATE_jq) * KeTISR_K_InputSpeedFilterConst;

    /* End of Outputs for SubSystem: '<S121>/Digital Lowpass Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S121>/Digital Lowpass Reset Enabled1' */
    /* Switch: '<S126>/Switch1' incorporates:
     *  Constant: '<S133>/Calib'
     *  Product: '<S126>/Multiplication'
     *  Sum: '<S126>/Subtraction'
     *  Sum: '<S126>/Summation'
     *  UnitDelay: '<S126>/Unit Delay'
     */
    TISR_ac_DW.UnitDelay_DSTATE_hc += (rtb_Merge6 -
        TISR_ac_DW.UnitDelay_DSTATE_hc) * KeTISR_K_InputAccelFilterConst;

    /* End of Outputs for SubSystem: '<S121>/Digital Lowpass Reset Enabled1' */

    /* Gain: '<S135>/Gain' incorporates:
     *  UnitDelay: '<S125>/Unit Delay'
     */
    VeTISC_n_InputSpeed_Actual = TISR_ac_DW.UnitDelay_DSTATE_jq;

    /* Gain: '<S137>/Gain' incorporates:
     *  UnitDelay: '<S126>/Unit Delay'
     */
    VeTISC_dn_InputAcceltn_Actual = TISR_ac_DW.UnitDelay_DSTATE_hc;
}

/* Update for atomic system: '<S20>/TISC_DtrmnInSpd' */
static FUNC(void, TISR_CODE_LOCAL) TISR_ac_TISC_DtrmnInSpd_Update(void)
{
    /* Update for UnitDelay: '<S156>/Unit Delay' */
    TISR_ac_DW.UnitDelay_DSTATE_h = VeTISR_n_DirectionTarget;

    /* Update for UnitDelay: '<S156>/Unit Delay1' */
    TISR_ac_DW.UnitDelay1_DSTATE = VeTISR_n_DirectionAfterRamp;

    /* Update for UnitDelay: '<S170>/Unit Delay1' */
    TISR_ac_DW.UnitDelay1_DSTATE_o = VeTISR_dn_NiDotFromSensor;

    /* Update for UnitDelay: '<S170>/Unit Delay' */
    TISR_ac_DW.UnitDelay_DSTATE_f2 = VeTISC_n_NiFromSensor;
}

/* Model step function for TID1 */
FUNC(void, TISR_CODE) TISR_FastTEF(void) /* Explicit Task: FastTEF */
{
    float32 rtb_TmpSignalConversionAtVeTISR_n_Tran_k;
    float32 rtb_TmpSignalConversionAtVeTISR_n_TransM;
    float32 tmpRead;
    float32 tmpRead_0;
    float32 tmpRead_3;
    float32 tmpRead_4;
    float32 tmpRead_8;
    float32 tmpRead_9;
    TeMSPR_e_MotorSpeedSrc tmpRead_5;
    TeMSPR_e_MotorSpeedSrc tmpRead_6;
    TeMSPR_e_MotorSpeedSrc tmpRead_7;
    boolean rtb_Switch6;
    boolean rtb_Switch7_f;
    boolean rtb_Switch8;
    boolean rtb_Switch9;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_a;

#if Rte_SysCon_Variant_TISR_1

    boolean rtb_TmpSignalConversionAtVeDFIR_b_PostCo;

#endif

#if Rte_SysCon_Variant_TISR_1

    float32 rtb_Switch2_o;

#endif

#if Rte_SysCon_Variant_TISR_1

    float32 rtb_Switch16;

#endif

#if Rte_SysCon_Variant_TISR_1

    float32 rtb_Switch3;

#endif

#if Rte_SysCon_Variant_TISR_1

    float32 rtb_Switch4;

#endif

#if Rte_SysCon_Variant_TISR_1

    float32 rtb_Switch5;

#endif

#if Rte_SysCon_Variant_TISR_1

    boolean rtb_Comparison2_dc;

#endif

#if Rte_SysCon_Variant_TISR_1

    boolean rtb_RelationalOperator3;

#endif

#if Rte_SysCon_Variant_TISR_1

    boolean rtb_Logical5_b;

#endif

#if Rte_SysCon_Variant_TISR_1

    uint8 rtb_TmpSignalConversionAtVeDMAB_y_Status;

#endif

#if Rte_SysCon_Variant_TISR_1

    boolean rtb_AND_b;

#endif

#if Rte_SysCon_Variant_TISR_1

    sint32 tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/TISR_FastTEF'
     */
    /* SignalConversion generated from: '<S8>/VeTISR_n_TransMinInputSpd_read' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    rtb_TmpSignalConversionAtVeTISR_n_TransM =
        Rte_IrvRead_TISR_FastTEF_VeTISR_n_TransMinInputSpd_write_IRV();

    /* SignalConversion generated from: '<S8>/VeTISR_n_TransMinInputSpdPHEV_read' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    rtb_TmpSignalConversionAtVeTISR_n_Tran_k =
        Rte_IrvRead_TISR_FastTEF_VeTISR_n_TransMinInputSpdPHEV_write_IRV();

    /* SignalConversion generated from: '<S8>/VeHSER_e_HTDR_State' incorporates:
     *  Inport: '<Root>/VeHSER_e_HTDR_State'
     */
    (void)Rte_Read_VeHSER_e_HTDR_State_Value
        (&TISR_ac_B.TmpSignalConversionAtVeHSER_e_HTDR_State);

    /* SignalConversion generated from: '<S8>/VeESPR_n_EngineSpeed' incorporates:
     *  Inport: '<Root>/VeESPR_n_EngineSpeed'
     */
    (void)Rte_Read_VeESPR_n_EngineSpeed_Value
        (&TISR_ac_B.TmpSignalConversionAtVeESPR_n_EngineSpee);

    /* SignalConversion generated from: '<S8>/VeESPR_n_EngineSpeed_MCP' incorporates:
     *  Inport: '<Root>/VeESPR_n_EngineSpeed_MCP'
     */
    (void)Rte_Read_VeESPR_n_EngineSpeed_MCP_Value
        (&TISR_ac_B.TmpSignalConversionAtVeESPR_n_EngineSp_n);

    /* SignalConversion generated from: '<S8>/VeESPR_b_CrnkSnsrFA' incorporates:
     *  Inport: '<Root>/VeESPR_b_CrnkSnsrFA'
     */
    (void)Rte_Read_VeESPR_b_CrnkSnsrFA_Value
        (&TISR_ac_B.TmpSignalConversionAtVeESPR_b_CrnkSnsrFA);

    /* SignalConversion generated from: '<S8>/VeESPR_b_EngineSpeed_MCPFA' incorporates:
     *  Inport: '<Root>/VeESPR_b_EngineSpeed_MCPFA'
     */
    (void)Rte_Read_VeESPR_b_EngineSpeed_MCPFA_Value
        (&TISR_ac_B.TmpSignalConversionAtVeESPR_b_EngineSpee);

    /* SignalConversion generated from: '<S8>/VeTISR_n_InputSpdSnsdRaw_read' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    TISR_ac_B.TmpSignalConversionAtVeTISR_n_InputSpdSn =
        Rte_IrvRead_TISR_FastTEF_VeTISR_n_InputSpdSnsdRaw_write_IRV();

    /* SignalConversion generated from: '<S8>/VeTISR_n_DirectionSign_read' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    TISR_ac_B.TmpSignalConversionAtVeTISR_n_DirectionS =
        Rte_IrvRead_TISR_FastTEF_VeTISR_n_DirectionSign_write_IRV();

    /* SignalConversion generated from: '<S8>/VeTISR_b_SnsrInputSpdRawFA_read' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    TISR_ac_B.TmpSignalConversionAtVeTISR_b_SnsrInputS =
        Rte_IrvRead_TISR_FastTEF_VeTISR_b_SnsrInputSpdRawFA_write_IRV();

    /* SignalConversion generated from: '<S8>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  SignalConversion generated from: '<S8>/VeDMAB_y_StatusByte_CM_DM_GenEngSpdPerf'
     */
#if Rte_SysCon_Variant_TISR_1

    /* SignalConversion generated from: '<S8>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR_b_PostCo);

    /* SignalConversion generated from: '<S8>/VeDMAB_y_StatusByte_CM_DM_GenEngSpdPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_CM_DM_GenEngSpdPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_CM_DM_GenEngSpdPerf_Value
        (&rtb_TmpSignalConversionAtVeDMAB_y_Status);

#endif

    /* End of SignalConversion generated from: '<S8>/VeDFIR_b_PostCodeClrDiagDsbl' */

    /* S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/TISC_InSpd'
     */
    /* Outputs for Atomic SubSystem: '<S20>/TISC_DtrmnInSpd' */
    TISR_ac_TISC_DtrmnInSpd();

    /* End of Outputs for SubSystem: '<S20>/TISC_DtrmnInSpd' */

    /* Update for Atomic SubSystem: '<S20>/TISC_DtrmnInSpd' */
    TISR_ac_TISC_DtrmnInSpd_Update();

    /* End of Update for SubSystem: '<S20>/TISC_DtrmnInSpd' */

    /* S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/Speed Rationality'
     */

    /* Switch: '<S19>/Switch6' incorporates:
     *  Constant: '<S30>/Calib'
     */
    if (KeTISD_b_EngSpdBfCkFAOvrdEnbl)
    {
        /* Switch: '<S19>/Switch6' incorporates:
         *  Constant: '<S31>/Calib'
         */
        rtb_Switch6 = KeTISD_b_EngSpdBfCkFAOvrdVal;
    }
    else
    {
        /* Switch: '<S19>/Switch6' */
        rtb_Switch6 = TISR_ac_B.TmpSignalConversionAtVeESPR_b_EngineSpee;
    }

    /* End of Switch: '<S19>/Switch6' */

    /* Switch: '<S19>/Switch9' incorporates:
     *  Constant: '<S33>/Calib'
     */
    if (KeTISD_b_EngSpdCANFAOvrdEnbl)
    {
        /* Switch: '<S19>/Switch9' incorporates:
         *  Constant: '<S34>/Calib'
         */
        rtb_Switch9 = KeTISD_b_EngSpdCANFAOvrdVal;
    }
    else
    {
        /* Switch: '<S19>/Switch9' */
        rtb_Switch9 = TISR_ac_B.TmpSignalConversionAtVeESPR_b_CrnkSnsrFA;
    }

    /* End of Switch: '<S19>/Switch9' */

    /* Switch: '<S19>/Switch8' incorporates:
     *  Constant: '<S38>/Calib'
     */
    if (KeTISD_b_EngSpdSensorFAOvrdEnbl)
    {
        /* Switch: '<S19>/Switch8' incorporates:
         *  Constant: '<S39>/Calib'
         */
        rtb_Switch8 = KeTISD_b_EngSpdSensorFAOvrdVal;
    }
    else
    {
        /* Switch: '<S19>/Switch8' */
        rtb_Switch8 = VeTISC_b_NiSensorFltAct;
    }

    /* End of Switch: '<S19>/Switch8' */

    /* Switch: '<S19>/Switch7' incorporates:
     *  Constant: '<S35>/Calib'
     */
    if (KeTISD_b_EngSpdMSPRFAOvrdEnbl)
    {
        /* Switch: '<S19>/Switch7' incorporates:
         *  Constant: '<S36>/Calib'
         */
        rtb_Switch7_f = KeTISD_b_EngSpdMSPRFAOvrdVal;
    }
    else
    {
        /* Switch: '<S19>/Switch7' */
        rtb_Switch7_f = VeTISC_b_MtrA_MtrB_FA;
    }

    /* End of Switch: '<S19>/Switch7' */

    /* Logic: '<S19>/Logical' */
    VeTISC_b_InputSpeedFA_Actual = (((rtb_Switch6 && rtb_Switch9) && rtb_Switch8)
        && rtb_Switch7_f);

    /* Outputs for Atomic SubSystem: '<S19>/SpeedRationalityCheck' */
    /* Logic: '<S48>/NOT4' incorporates:
     *  Constant: '<S29>/Calib'
     *  Constant: '<S32>/Calib'
     *  Constant: '<S37>/Calib'
     *  Constant: '<S40>/Calib'
     *  Constant: '<S41>/Calib'
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     *  Switch: '<S19>/Switch16'
     *  Switch: '<S19>/Switch2'
     *  Switch: '<S19>/Switch3'
     *  Switch: '<S19>/Switch4'
     *  Switch: '<S19>/Switch5'
     */
#if Rte_SysCon_Variant_TISR_1

    /* Outputs for Atomic SubSystem: '<S49>/SpeedRationalityCheck' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&rtb_Logical5_b);
    if (KeTISD_b_EngSpdBfCkOvrdEnbl)
    {
        /* Switch: '<S19>/Switch2' incorporates:
         *  Constant: '<S43>/Calib'
         */
        rtb_Switch2_o = KeTISD_n_EngSpdBfCkOvrdVal;
    }
    else
    {
        /* Switch: '<S19>/Switch2' */
        rtb_Switch2_o = TISR_ac_B.TmpSignalConversionAtVeESPR_n_EngineSp_n;
    }

    if (KeTISD_b_CANEngSpdOvrdEnbl)
    {
        /* Switch: '<S19>/Switch16' incorporates:
         *  Constant: '<S42>/Calib'
         */
        rtb_Switch16 = KeTISD_n_CANEngSpdOvrdVal;
    }
    else
    {
        /* Switch: '<S19>/Switch16' */
        rtb_Switch16 = TISR_ac_B.TmpSignalConversionAtVeESPR_n_EngineSpee;
    }

    if (KeTISD_b_TransInSpdOvrdEnbl)
    {
        /* Switch: '<S19>/Switch3' incorporates:
         *  Constant: '<S46>/Calib'
         */
        rtb_Switch3 = KeTISD_n_TransInSpdOvrdVal;
    }
    else
    {
        /* Switch: '<S19>/Switch3' */
        rtb_Switch3 = VeTISC_n_InputSpeed_Actual;
    }

    if (KeTISD_b_EngSpdSensorOvrdEnbl)
    {
        /* Switch: '<S19>/Switch4' incorporates:
         *  Constant: '<S45>/Calib'
         */
        rtb_Switch4 = KeTISD_n_EngSpdSensorOvrdVal;
    }
    else
    {
        /* Switch: '<S19>/Switch4' */
        rtb_Switch4 = VeTISC_n_NiFromSensor;
    }

    if (KeTISD_b_EngSpdMSPROvrdEnbl)
    {
        /* Switch: '<S19>/Switch5' incorporates:
         *  Constant: '<S44>/Calib'
         */
        rtb_Switch5 = KeTISD_n_EngSpdMSPROvrdVal;
    }
    else
    {
        /* Switch: '<S19>/Switch5' */
        rtb_Switch5 = VeTISC_n_NifromMSPR;
    }

    /* Outputs for Atomic SubSystem: '<S54>/DeltaOneStep' */
    /* Sum: '<S85>/Sum//Sub' incorporates:
     *  Constant: '<S29>/Calib'
     *  Constant: '<S32>/Calib'
     *  Constant: '<S37>/Calib'
     *  Constant: '<S40>/Calib'
     *  Constant: '<S41>/Calib'
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  UnitDelay: '<S85>/Unit Delay'
     */
    VeTISD_n_EngSpdBfCk_RawDecel = rtb_Switch2_o - TISR_ac_DW.UnitDelay_DSTATE_k;

    /* Update for UnitDelay: '<S85>/Unit Delay' */
    TISR_ac_DW.UnitDelay_DSTATE_k = rtb_Switch2_o;

    /* End of Outputs for SubSystem: '<S54>/DeltaOneStep' */

    /* RelationalOperator: '<S54>/Comparison2' incorporates:
     *  Abs: '<S54>/Abs'
     *  Constant: '<S89>/Calib'
     */
    rtb_Comparison2_dc = (fabsf(VeTISD_n_EngSpdBfCk_RawDecel) >
                          KeTISD_n_SpdRatlDsblNiDecl_BfCk);

    /* Outputs for Atomic SubSystem: '<S54>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S91>/EdgeFalling1' */
    /* Logic: '<S92>/AND' incorporates:
     *  Logic: '<S92>/OR1'
     *  UnitDelay: '<S92>/Unit Delay'
     */
    rtb_AND_b = ((!rtb_Comparison2_dc) && (TISR_ac_DW.UnitDelay_DSTATE_n));

    /* Update for UnitDelay: '<S92>/Unit Delay' */
    TISR_ac_DW.UnitDelay_DSTATE_n = rtb_Comparison2_dc;

    /* End of Outputs for SubSystem: '<S91>/EdgeFalling1' */

    /* Switch: '<S91>/Switch' incorporates:
     *  Constant: '<S86>/Calib'
     *  Sum: '<S91>/Summation'
     *  UnitDelay: '<S91>/Unit Delay'
     */
    if (rtb_AND_b)
    {
        TISR_ac_DW.UnitDelay_DSTATE_b1 = KeTISD_Cnt_DrpoutSgnlDly_BfCk;
    }
    else
    {
        /* Sum: '<S91>/Summation' incorporates:
         *  Constant: '<S91>/Constant Value'
         *  UnitDelay: '<S91>/Unit Delay'
         */
        tmp = ((sint32)TISR_ac_DW.UnitDelay_DSTATE_b1) - 1;
        if ((((sint32)TISR_ac_DW.UnitDelay_DSTATE_b1) - 1) < 0)
        {
            tmp = 0;
        }

        TISR_ac_DW.UnitDelay_DSTATE_b1 = (uint16)tmp;
    }

    /* End of Switch: '<S91>/Switch' */

    /* Logic: '<S91>/AND' incorporates:
     *  Constant: '<S91>/Constant Value2'
     *  RelationalOperator: '<S91>/Greater  Than'
     *  UnitDelay: '<S91>/Unit Delay'
     */
    VeTISD_b_EngSpdBfCkDecayLatch = (rtb_Comparison2_dc || (((sint32)
        TISR_ac_DW.UnitDelay_DSTATE_b1) > 0));

    /* End of Outputs for SubSystem: '<S54>/Turn Off Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S54>/ClosedInterval' */
    /* Logic: '<S54>/NOT2' incorporates:
     *  Constant: '<S87>/Calib'
     *  Constant: '<S88>/Calib'
     *  Logic: '<S54>/NOT4'
     *  Logic: '<S84>/Logical Operator'
     *  RelationalOperator: '<S84>/Relatonal Operator'
     *  RelationalOperator: '<S84>/Relatonal Operator1'
     */
    VeTISD_b_EngSpdBfCkDiagEnbl = ((!VeTISD_b_EngSpdBfCkDecayLatch) &&
        ((rtb_Switch2_o < KeTISD_n_SpdRatlDsblLow_BfCk) || (rtb_Switch2_o >
        KeTISD_n_SpdRatlDsblHigh_BfCk)));

    /* End of Outputs for SubSystem: '<S54>/ClosedInterval' */

    /* Outputs for Atomic SubSystem: '<S52>/DeltaOneStep1' */
    /* Sum: '<S67>/Sum//Sub' incorporates:
     *  UnitDelay: '<S67>/Unit Delay'
     */
    VeTISD_n_EngSpdRawDecel = rtb_Switch16 - TISR_ac_DW.UnitDelay_DSTATE_j;

    /* Update for UnitDelay: '<S67>/Unit Delay' */
    TISR_ac_DW.UnitDelay_DSTATE_j = rtb_Switch16;

    /* End of Outputs for SubSystem: '<S52>/DeltaOneStep1' */

    /* RelationalOperator: '<S52>/Comparison3' incorporates:
     *  Abs: '<S52>/Abs2'
     *  Constant: '<S71>/Calib'
     */
    rtb_Comparison2_dc = (fabsf(VeTISD_n_EngSpdRawDecel) >
                          KeTISD_n_SpdRatlDsblNiDecl_CAN);

    /* Outputs for Atomic SubSystem: '<S52>/Turn Off Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S73>/EdgeFalling1' */
    /* Logic: '<S74>/AND' incorporates:
     *  Logic: '<S74>/OR1'
     *  UnitDelay: '<S74>/Unit Delay'
     */
    rtb_AND_b = ((!rtb_Comparison2_dc) && (TISR_ac_DW.UnitDelay_DSTATE_e));

    /* Update for UnitDelay: '<S74>/Unit Delay' */
    TISR_ac_DW.UnitDelay_DSTATE_e = rtb_Comparison2_dc;

    /* End of Outputs for SubSystem: '<S73>/EdgeFalling1' */

    /* Switch: '<S73>/Switch' incorporates:
     *  Constant: '<S68>/Calib'
     *  Sum: '<S73>/Summation'
     *  UnitDelay: '<S73>/Unit Delay'
     */
    if (rtb_AND_b)
    {
        TISR_ac_DW.UnitDelay_DSTATE_h1 = KeTISD_Cnt_DrpoutSgnlDly_CAN;
    }
    else
    {
        /* Sum: '<S73>/Summation' incorporates:
         *  Constant: '<S73>/Constant Value'
         *  UnitDelay: '<S73>/Unit Delay'
         */
        tmp = ((sint32)TISR_ac_DW.UnitDelay_DSTATE_h1) - 1;
        if ((((sint32)TISR_ac_DW.UnitDelay_DSTATE_h1) - 1) < 0)
        {
            tmp = 0;
        }

        TISR_ac_DW.UnitDelay_DSTATE_h1 = (uint16)tmp;
    }

    /* End of Switch: '<S73>/Switch' */

    /* Logic: '<S73>/AND' incorporates:
     *  Constant: '<S73>/Constant Value2'
     *  RelationalOperator: '<S73>/Greater  Than'
     *  UnitDelay: '<S73>/Unit Delay'
     */
    VeTISD_b_EngSpdDecayLatch = (rtb_Comparison2_dc || (((sint32)
        TISR_ac_DW.UnitDelay_DSTATE_h1) > 0));

    /* End of Outputs for SubSystem: '<S52>/Turn Off Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S52>/ClosedInterval' */
    /* Logic: '<S52>/NOT5' incorporates:
     *  Constant: '<S69>/Calib'
     *  Constant: '<S70>/Calib'
     *  Logic: '<S52>/NOT6'
     *  Logic: '<S66>/Logical Operator'
     *  RelationalOperator: '<S66>/Relatonal Operator'
     *  RelationalOperator: '<S66>/Relatonal Operator1'
     */
    VeTISD_b_EngSpdDiagEnbl = ((!VeTISD_b_EngSpdDecayLatch) && ((rtb_Switch16 <
        KeTISD_n_SpdRatlDsblLow_CAN) || (rtb_Switch16 >
        KeTISD_n_SpdRatlDsblHigh_CAN)));

    /* End of Outputs for SubSystem: '<S52>/ClosedInterval' */

    /* Outputs for Atomic SubSystem: '<S55>/DeltaOneStep' */
    /* Sum: '<S94>/Sum//Sub' incorporates:
     *  UnitDelay: '<S94>/Unit Delay'
     */
    VeTISD_n_EngSpdSnsr_RawDecel = rtb_Switch4 - TISR_ac_DW.UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S94>/Unit Delay' */
    TISR_ac_DW.UnitDelay_DSTATE = rtb_Switch4;

    /* End of Outputs for SubSystem: '<S55>/DeltaOneStep' */

    /* RelationalOperator: '<S55>/Comparison2' incorporates:
     *  Abs: '<S55>/Abs'
     *  Constant: '<S98>/Calib'
     */
    rtb_Comparison2_dc = (fabsf(VeTISD_n_EngSpdSnsr_RawDecel) >
                          KeTISD_n_SpdRatlDsblNiDecl_Snsr);

    /* Outputs for Atomic SubSystem: '<S55>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S100>/EdgeFalling1' */
    /* Logic: '<S101>/AND' incorporates:
     *  Logic: '<S101>/OR1'
     *  UnitDelay: '<S101>/Unit Delay'
     */
    rtb_AND_b = ((!rtb_Comparison2_dc) && (TISR_ac_DW.UnitDelay_DSTATE_kw));

    /* Update for UnitDelay: '<S101>/Unit Delay' */
    TISR_ac_DW.UnitDelay_DSTATE_kw = rtb_Comparison2_dc;

    /* End of Outputs for SubSystem: '<S100>/EdgeFalling1' */

    /* Switch: '<S100>/Switch' incorporates:
     *  Constant: '<S95>/Calib'
     *  Sum: '<S100>/Summation'
     *  UnitDelay: '<S100>/Unit Delay'
     */
    if (rtb_AND_b)
    {
        TISR_ac_DW.UnitDelay_DSTATE_b = KeTISD_Cnt_DrpoutSgnlDly_Snsr;
    }
    else
    {
        /* Sum: '<S100>/Summation' incorporates:
         *  Constant: '<S100>/Constant Value'
         *  UnitDelay: '<S100>/Unit Delay'
         */
        tmp = ((sint32)TISR_ac_DW.UnitDelay_DSTATE_b) - 1;
        if ((((sint32)TISR_ac_DW.UnitDelay_DSTATE_b) - 1) < 0)
        {
            tmp = 0;
        }

        TISR_ac_DW.UnitDelay_DSTATE_b = (uint16)tmp;
    }

    /* End of Switch: '<S100>/Switch' */

    /* Logic: '<S100>/AND' incorporates:
     *  Constant: '<S100>/Constant Value2'
     *  RelationalOperator: '<S100>/Greater  Than'
     *  UnitDelay: '<S100>/Unit Delay'
     */
    VeTISD_b_EngSpdSnsrDecayLatch = (rtb_Comparison2_dc || (((sint32)
        TISR_ac_DW.UnitDelay_DSTATE_b) > 0));

    /* End of Outputs for SubSystem: '<S55>/Turn Off Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S55>/ClosedInterval' */
    /* Logic: '<S55>/NOT2' incorporates:
     *  Constant: '<S96>/Calib'
     *  Constant: '<S97>/Calib'
     *  Logic: '<S55>/NOT4'
     *  Logic: '<S93>/Logical Operator'
     *  RelationalOperator: '<S93>/Relatonal Operator'
     *  RelationalOperator: '<S93>/Relatonal Operator1'
     */
    VeTISD_b_EngSpdSnsrDiagEnbl = ((!VeTISD_b_EngSpdSnsrDecayLatch) &&
        ((rtb_Switch4 < KeTISD_n_SpdRatlDsblLow_Snsr) || (rtb_Switch4 >
        KeTISD_n_SpdRatlDsblHigh_Snsr)));

    /* End of Outputs for SubSystem: '<S55>/ClosedInterval' */

    /* Outputs for Atomic SubSystem: '<S53>/DeltaOneStep' */
    /* Sum: '<S76>/Sum//Sub' incorporates:
     *  UnitDelay: '<S76>/Unit Delay'
     */
    VeTISD_n_EngSpdMSPR_RawDecel = rtb_Switch5 - TISR_ac_DW.UnitDelay_DSTATE_f;

    /* Update for UnitDelay: '<S76>/Unit Delay' */
    TISR_ac_DW.UnitDelay_DSTATE_f = rtb_Switch5;

    /* End of Outputs for SubSystem: '<S53>/DeltaOneStep' */

    /* RelationalOperator: '<S53>/Comparison2' incorporates:
     *  Abs: '<S53>/Abs'
     *  Constant: '<S80>/Calib'
     */
    rtb_Comparison2_dc = (fabsf(VeTISD_n_EngSpdMSPR_RawDecel) >
                          KeTISD_n_SpdRatlDsblNiDecl_Mtr);

    /* Outputs for Atomic SubSystem: '<S53>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S82>/EdgeFalling1' */
    /* Logic: '<S83>/AND' incorporates:
     *  Logic: '<S83>/OR1'
     *  UnitDelay: '<S83>/Unit Delay'
     */
    rtb_AND_b = ((!rtb_Comparison2_dc) && (TISR_ac_DW.UnitDelay_DSTATE_fe));

    /* Update for UnitDelay: '<S83>/Unit Delay' */
    TISR_ac_DW.UnitDelay_DSTATE_fe = rtb_Comparison2_dc;

    /* End of Outputs for SubSystem: '<S82>/EdgeFalling1' */

    /* Switch: '<S82>/Switch' incorporates:
     *  Constant: '<S77>/Calib'
     *  Sum: '<S82>/Summation'
     *  UnitDelay: '<S82>/Unit Delay'
     */
    if (rtb_AND_b)
    {
        TISR_ac_DW.UnitDelay_DSTATE_g = KeTISD_Cnt_DrpoutSgnlDly_Mtr;
    }
    else
    {
        /* Sum: '<S82>/Summation' incorporates:
         *  Constant: '<S82>/Constant Value'
         *  UnitDelay: '<S82>/Unit Delay'
         */
        tmp = ((sint32)TISR_ac_DW.UnitDelay_DSTATE_g) - 1;
        if ((((sint32)TISR_ac_DW.UnitDelay_DSTATE_g) - 1) < 0)
        {
            tmp = 0;
        }

        TISR_ac_DW.UnitDelay_DSTATE_g = (uint16)tmp;
    }

    /* End of Switch: '<S82>/Switch' */
    /* End of Outputs for SubSystem: '<S53>/Turn Off Delay Sample' */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_RelationalOperator3);

    /* Outputs for Atomic SubSystem: '<S53>/Turn Off Delay Sample' */
    /* Logic: '<S82>/AND' incorporates:
     *  Constant: '<S82>/Constant Value2'
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     *  RelationalOperator: '<S82>/Greater  Than'
     *  UnitDelay: '<S82>/Unit Delay'
     */
    VeTISD_b_EngSpdMSPRDecayLatch = (rtb_Comparison2_dc || (((sint32)
        TISR_ac_DW.UnitDelay_DSTATE_g) > 0));

    /* End of Outputs for SubSystem: '<S53>/Turn Off Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S53>/ClosedInterval' */
    /* Logic: '<S53>/NOT2' incorporates:
     *  Constant: '<S78>/Calib'
     *  Constant: '<S79>/Calib'
     *  Logic: '<S53>/NOT4'
     *  Logic: '<S75>/Logical Operator'
     *  RelationalOperator: '<S75>/Relatonal Operator'
     *  RelationalOperator: '<S75>/Relatonal Operator1'
     */
    VeTISD_b_EngSpdMSPRDiagEnbl = ((!VeTISD_b_EngSpdMSPRDecayLatch) &&
        ((rtb_Switch5 < KeTISD_n_SpdRatlDsblLow_Mtr) || (rtb_Switch5 >
        KeTISD_n_SpdRatlDsblHigh_Mtr)));

    /* End of Outputs for SubSystem: '<S53>/ClosedInterval' */

    /* Logic: '<S50>/Logical9' incorporates:
     *  Switch: '<S50>/Switch7'
     */
    rtb_Switch6 = !rtb_Switch6;

    /* Logic: '<S50>/Logical10' incorporates:
     *  Switch: '<S50>/Switch5'
     */
    rtb_Switch9 = !rtb_Switch9;

    /* Logic: '<S50>/Logical11' incorporates:
     *  Switch: '<S50>/Switch4'
     */
    rtb_Switch8 = !rtb_Switch8;

    /* Logic: '<S50>/Logical13' incorporates:
     *  Switch: '<S50>/Switch6'
     */
    rtb_Comparison2_dc = !rtb_Switch7_f;

    /* Logic: '<S50>/Logical4' incorporates:
     *  Constant: '<S56>/Calib'
     *  Constant: '<S63>/Calib'
     *  Logic: '<S50>/Logical5'
     *  RelationalOperator: '<S50>/Comparison5'
     *  RelationalOperator: '<S50>/Comparison6'
     *  Sum: '<S50>/Sum3'
     */
    VeTISD_b_SpdRatlFltEnbl = (((((((((((((float32)(rtb_Switch6 ? 1.0F : 0.0F))
        + ((float32)(rtb_Switch9 ? 1.0F : 0.0F))) + ((float32)(rtb_Switch8 ?
        1.0F : 0.0F))) + ((float32)(rtb_Comparison2_dc ? 1.0F : 0.0F))) >=
        KeTISD_Cnt_NumOfEngSpdSources) && (!VeTISC_b_InputSpeedFA_Actual)) &&
        rtb_RelationalOperator3) && (rtb_Switch3 > KeTISD_n_TransInSpdMin)) &&
        (VeTISD_b_EngSpdBfCkDiagEnbl)) && (VeTISD_b_EngSpdDiagEnbl)) &&
        (VeTISD_b_EngSpdSnsrDiagEnbl)) && (VeTISD_b_EngSpdMSPRDiagEnbl));

    /* RelationalOperator: '<S65>/Relational Operator3' incorporates:
     *  Constant: '<S65>/Constant3'
     *  S-Function (sfix_bitop): '<S65>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB_y_Status) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S65>/EdgeFalling1' */
    /* Logic: '<S65>/Logical Operator' incorporates:
     *  Logic: '<S103>/OR1'
     */
    rtb_AND_b = !rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S65>/EdgeFalling1' */

    /* Logic: '<S65>/Logical1' incorporates:
     *  Constant: '<S59>/Calib'
     *  Constant: '<S65>/Constant1'
     *  Logic: '<S65>/Logical Operator'
     *  Logic: '<S65>/Logical10'
     *  Logic: '<S65>/Logical12'
     *  RelationalOperator: '<S65>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S65>/Bitwise Operator3'
     */
    rtb_Switch7_f = ((VeTISD_b_SpdRatlFltEnbl) &&
                     ((!KeTISD_b_SpdRatlFlt_LtchEnbl) || (((((uint32)
                          rtb_TmpSignalConversionAtVeDMAB_y_Status) & 1U) == 0U)
                       || rtb_AND_b)));

    /* Abs: '<S50>/Abs' incorporates:
     *  Sum: '<S50>/Sum1'
     */
    VeTISD_n_EngSpdBCTransDiff = fabsf(rtb_Switch2_o - rtb_Switch3);

    /* RelationalOperator: '<S50>/Comparison2' incorporates:
     *  Constant: '<S62>/Calib'
     */
    VeTISD_b_EngSpdBfCkAbvSwtchOvr = (rtb_Switch2_o > KeTISD_n_HiLoSwtchOver);

    /* Switch: '<S50>/Switch' incorporates:
     *  Constant: '<S60>/Calib'
     *  Constant: '<S61>/Calib'
     */
    if (VeTISD_b_EngSpdBfCkAbvSwtchOvr)
    {
        rtb_Switch2_o = KeTISD_n_AboveSwtchOvrTolerance;
    }
    else
    {
        rtb_Switch2_o = KeTISD_n_BelowSwtchOvrTolerance;
    }

    /* End of Switch: '<S50>/Switch' */

    /* RelationalOperator: '<S50>/Comparison1' */
    VeTISD_b_EngSpdBfCkRatlFail = (VeTISD_n_EngSpdBCTransDiff >= rtb_Switch2_o);

    /* Abs: '<S50>/Abs1' incorporates:
     *  Sum: '<S50>/Sum2'
     */
    VeTISD_n_EngSpdTransDiff = fabsf(rtb_Switch16 - rtb_Switch3);

    /* RelationalOperator: '<S50>/Comparison4' incorporates:
     *  Constant: '<S62>/Calib'
     */
    VeTISD_b_EngSpdAbvSwtchOvr = (rtb_Switch16 > KeTISD_n_HiLoSwtchOver);

    /* Switch: '<S50>/Switch1' incorporates:
     *  Constant: '<S60>/Calib'
     *  Constant: '<S61>/Calib'
     */
    if (VeTISD_b_EngSpdAbvSwtchOvr)
    {
        rtb_Switch2_o = KeTISD_n_AboveSwtchOvrTolerance;
    }
    else
    {
        rtb_Switch2_o = KeTISD_n_BelowSwtchOvrTolerance;
    }

    /* End of Switch: '<S50>/Switch1' */

    /* RelationalOperator: '<S50>/Comparison3' */
    VeTISD_b_EngSpdRatlFail = (VeTISD_n_EngSpdTransDiff >= rtb_Switch2_o);

    /* Abs: '<S50>/Abs2' incorporates:
     *  Sum: '<S50>/Sum4'
     */
    VeTISD_n_EngSpdSnsrTransDiff = fabsf(rtb_Switch4 - rtb_Switch3);

    /* RelationalOperator: '<S50>/Comparison8' incorporates:
     *  Constant: '<S62>/Calib'
     */
    VeTISD_b_EngSpdSnsrAbvSwtchOvr = (rtb_Switch4 > KeTISD_n_HiLoSwtchOver);

    /* Switch: '<S50>/Switch2' incorporates:
     *  Constant: '<S60>/Calib'
     *  Constant: '<S61>/Calib'
     */
    if (VeTISD_b_EngSpdSnsrAbvSwtchOvr)
    {
        rtb_Switch2_o = KeTISD_n_AboveSwtchOvrTolerance;
    }
    else
    {
        rtb_Switch2_o = KeTISD_n_BelowSwtchOvrTolerance;
    }

    /* End of Switch: '<S50>/Switch2' */

    /* RelationalOperator: '<S50>/Comparison7' */
    VeTISD_b_EngSpdSnsrRatlFail = (VeTISD_n_EngSpdSnsrTransDiff >= rtb_Switch2_o);

    /* Abs: '<S50>/Abs3' incorporates:
     *  Sum: '<S50>/Sum5'
     */
    VeTISD_n_EngSpdMSPRTransDiff = fabsf(rtb_Switch5 - rtb_Switch3);

    /* RelationalOperator: '<S50>/Comparison10' incorporates:
     *  Constant: '<S62>/Calib'
     */
    VeTISD_b_EngSpdMSPRAbvSwtchOvr = (rtb_Switch5 > KeTISD_n_HiLoSwtchOver);

    /* Switch: '<S50>/Switch3' incorporates:
     *  Constant: '<S60>/Calib'
     *  Constant: '<S61>/Calib'
     */
    if (VeTISD_b_EngSpdMSPRAbvSwtchOvr)
    {
        rtb_Switch2_o = KeTISD_n_AboveSwtchOvrTolerance;
    }
    else
    {
        rtb_Switch2_o = KeTISD_n_BelowSwtchOvrTolerance;
    }

    /* End of Switch: '<S50>/Switch3' */

    /* RelationalOperator: '<S50>/Comparison9' */
    VeTISD_b_EngSpdMSPRRatlFail = (VeTISD_n_EngSpdMSPRTransDiff >= rtb_Switch2_o);

    /* Logic: '<S50>/Logical15' incorporates:
     *  Logic: '<S50>/Logical12'
     *  Logic: '<S50>/Logical14'
     *  Logic: '<S50>/Logical3'
     *  Logic: '<S50>/Logical8'
     */
    VeTISD_b_SpdRatlFltSmplFail = ((((rtb_Switch6 &&
        (VeTISD_b_EngSpdBfCkRatlFail)) || (rtb_Switch9 &&
        (VeTISD_b_EngSpdRatlFail))) || (rtb_Switch8 &&
        (VeTISD_b_EngSpdSnsrRatlFail))) || (rtb_Comparison2_dc &&
        (VeTISD_b_EngSpdMSPRRatlFail)));

    /* Outputs for Atomic SubSystem: '<S65>/EdgeFalling1' */
    /* Logic: '<S103>/AND' incorporates:
     *  UnitDelay: '<S103>/Unit Delay'
     */
    rtb_Switch8 = (rtb_AND_b && (TISR_ac_DW.UnitDelay_DSTATE_o));

    /* Update for UnitDelay: '<S103>/Unit Delay' */
    TISR_ac_DW.UnitDelay_DSTATE_o = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S65>/EdgeFalling1' */

    /* Logic: '<S65>/Logical5' */
    rtb_Logical5_b = ((rtb_Logical5_b ||
                       rtb_TmpSignalConversionAtVeDFIR_b_PostCo) || rtb_Switch8);

    /* Outputs for Atomic SubSystem: '<S102>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S102>/Counter Reset  Enabled ' */
    /* Switch: '<S109>/Switch1' incorporates:
     *  Logic: '<S102>/Fail Counter Reset'
     *  Logic: '<S102>/NOT6'
     *  Switch: '<S109>/Switch2'
     *  Switch: '<S110>/Switch1'
     *  UnitDelay: '<S102>/Unit Delay'
     *  UnitDelay: '<S102>/Unit Delay1'
     */
    if ((rtb_Logical5_b || (TISR_ac_DW.UnitDelay_DSTATE_l)) ||
            (TISR_ac_DW.UnitDelay1_DSTATE_a))
    {
        /* Switch: '<S109>/Switch1' incorporates:
         *  Constant: '<S109>/Constant Value2'
         */
        VeTISD_Cnt_InputSpdRatlFlt_FailCnt = 0U;

        /* Switch: '<S110>/Switch1' incorporates:
         *  Constant: '<S110>/Constant Value2'
         */
        VeTISD_Cnt_InputSpdRatlFlt_SmpCnt = 0U;
    }
    else
    {
        if (rtb_Switch7_f && (VeTISD_b_SpdRatlFltSmplFail))
        {
            /* Switch: '<S109>/Switch1' incorporates:
             *  Constant: '<S109>/Constant Value1'
             *  Sum: '<S109>/Subtraction'
             *  Switch: '<S109>/Switch2'
             *  UnitDelay: '<S109>/Unit Delay'
             */
            VeTISD_Cnt_InputSpdRatlFlt_FailCnt = (uint16)(((uint32)
                VeTISD_Cnt_InputSpdRatlFlt_FailCnt) + 1U);
        }

        /* Switch: '<S110>/Switch2' */
        if (rtb_Switch7_f)
        {
            /* Switch: '<S110>/Switch1' incorporates:
             *  Constant: '<S110>/Constant Value1'
             *  Sum: '<S110>/Subtraction'
             *  Switch: '<S110>/Switch2'
             *  UnitDelay: '<S110>/Unit Delay'
             */
            VeTISD_Cnt_InputSpdRatlFlt_SmpCnt = (uint16)(((uint32)
                VeTISD_Cnt_InputSpdRatlFlt_SmpCnt) + 1U);
        }

        /* End of Switch: '<S110>/Switch2' */
    }

    /* End of Switch: '<S109>/Switch1' */
    /* End of Outputs for SubSystem: '<S102>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S102>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S102>/Greater Than or Equal ' incorporates:
     *  Constant: '<S57>/Calib'
     */
    TISR_ac_DW.UnitDelay1_DSTATE_a = (VeTISD_Cnt_InputSpdRatlFlt_FailCnt >=
        KeTISD_Cnt_SpdRatlFlt_FailCnt);

    /* Logic: '<S102>/NOT5' incorporates:
     *  Constant: '<S58>/Calib'
     *  Logic: '<S102>/NOT3'
     *  RelationalOperator: '<S102>/Less Than  or Equal'
     */
    TISR_ac_DW.UnitDelay_DSTATE_l = ((VeTISD_Cnt_InputSpdRatlFlt_SmpCnt >=
        KeTISD_Cnt_SpdRatlFlt_SmpCnt) && (!TISR_ac_DW.UnitDelay1_DSTATE_a));

    /* Switch: '<S115>/Switch1' incorporates:
     *  Constant: '<S108>/Constant Value'
     *  DataStoreWrite: '<S50>/Data Store Write3'
     *  Switch: '<S114>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR_b_PostCo)
    {
        TISR_ac_DW.NeTISD_Cnt_SpdRatlFlt_MFOP = 0U;
    }
    else
    {
        if (TISR_ac_DW.UnitDelay_DSTATE_l)
        {
            /* MinMax: '<S108>/Minimum2' incorporates:
             *  DataStoreRead: '<S50>/Data Store Read1'
             *  Switch: '<S114>/Switch1'
             */
            if (VeTISD_Cnt_InputSpdRatlFlt_FailCnt >
                    TISR_ac_DW.NeTISD_Cnt_SpdRatlFlt_MFOP)
            {
                /* DataStoreWrite: '<S50>/Data Store Write3' incorporates:
                 *  Switch: '<S114>/Switch1'
                 */
                TISR_ac_DW.NeTISD_Cnt_SpdRatlFlt_MFOP =
                    VeTISD_Cnt_InputSpdRatlFlt_FailCnt;
            }

            /* End of MinMax: '<S108>/Minimum2' */
        }
    }

    /* End of Switch: '<S115>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S65>/Fail' incorporates:
     *  EnablePort: '<S105>/Enable'
     */
    if (TISR_ac_DW.UnitDelay1_DSTATE_a)
    {
        /* VariantMerge generated from: '<S49>/VeTISR_e_FaultSts_CM_DM_GenEngSpdPerf' incorporates:
         *  Constant: '<S111>/Constant'
         *  SignalConversion generated from: '<S105>/FaultSts'
         */
        TISR_ac_B.VariantMergeForOutportVeTISR_e_FaultSts_ = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S65>/Fail' */

    /* Outputs for Enabled SubSystem: '<S65>/Init' incorporates:
     *  EnablePort: '<S106>/Enable'
     */
    if (rtb_Logical5_b)
    {
        /* VariantMerge generated from: '<S49>/VeTISR_e_FaultSts_CM_DM_GenEngSpdPerf' incorporates:
         *  Constant: '<S112>/Constant'
         *  SignalConversion generated from: '<S106>/FaultSts'
         */
        TISR_ac_B.VariantMergeForOutportVeTISR_e_FaultSts_ = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S65>/Init' */

    /* Outputs for Enabled SubSystem: '<S65>/Pass' incorporates:
     *  EnablePort: '<S107>/Enable'
     */
    if (TISR_ac_DW.UnitDelay_DSTATE_l)
    {
        /* VariantMerge generated from: '<S49>/VeTISR_e_FaultSts_CM_DM_GenEngSpdPerf' incorporates:
         *  Constant: '<S113>/Constant'
         *  SignalConversion generated from: '<S107>/FaultSts'
         */
        TISR_ac_B.VariantMergeForOutportVeTISR_e_FaultSts_ = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S65>/Pass' */

    /* VariantMerge generated from: '<S49>/VeTISR_b_InputSpdRatlFlt_FltDtct' incorporates:
     *  Constant: '<S104>/Constant'
     *  RelationalOperator: '<S65>/Relational Operator'
     *  VariantMerge generated from: '<S49>/VeTISR_e_FaultSts_CM_DM_GenEngSpdPerf'
     */
    TISR_ac_B.VariantMergeForOutportVeTISR_b_InputSpdR = (((uint32)
        TISR_ac_B.VariantMergeForOutportVeTISR_e_FaultSts_) == CeDFIB_e_Fail);

    /* End of Outputs for SubSystem: '<S49>/SpeedRationalityCheck' */
#else

    /* Outputs for Atomic SubSystem: '<S49>/SpeedRationalityCheckStub' */
    /* VariantMerge generated from: '<S49>/VeTISR_b_InputSpdRatlFlt_FltDtct' incorporates:
     *  Constant: '<S51>/FALSEConstant'
     */
    TISR_ac_B.VariantMergeForOutportVeTISR_b_InputSpdR = false;

    /* VariantMerge generated from: '<S49>/VeTISR_e_FaultSts_CM_DM_GenEngSpdPerf' incorporates:
     *  Constant: '<S116>/Constant'
     */
    TISR_ac_B.VariantMergeForOutportVeTISR_e_FaultSts_ = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S49>/SpeedRationalityCheckStub' */
#endif

    /* End of Logic: '<S48>/NOT4' */
    /* End of Outputs for SubSystem: '<S19>/SpeedRationalityCheck' */

    /* S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/TISI_PreProcessing'
     */
    /* Switch: '<S213>/Switch26' incorporates:
     *  Constant: '<S214>/Calib'
     */
    if (!KeTISR_b_UseTransMinInputSpdPHEV)
    {
        /* Switch: '<S213>/Switch26' incorporates:
         *  Constant: '<S215>/Calib'
         *  Constant: '<S218>/Calib'
         *  Constant: '<S219>/Calib'
         *  Product: '<S213>/Product'
         *  Sum: '<S213>/Sum'
         *  Sum: '<S213>/Sum1'
         */
        rtb_TmpSignalConversionAtVeTISR_n_Tran_k =
            ((KeTISR_n_TransMinInputSpdOffset1 +
              rtb_TmpSignalConversionAtVeTISR_n_TransM) *
             KeTISR_k_TransMinInputSpdGain) + KeTISR_n_TransMinInputSpdOffset2;
    }

    /* End of Switch: '<S213>/Switch26' */
    /* End of Outputs for S-Function (fcgen): '<S8>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeMSPR_b_MtrC_SpdFA' */
    (void)Rte_Read_VeMSPR_b_MtrC_SpdFA_Value(&tmpRead_a);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/TISR_FastTEF'
     */
    /* S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/TISI_PreProcessing'
     */
    /* Outputs for Atomic SubSystem: '<S213>/Limiter' */
    /* Switch: '<S220>/Switch1' incorporates:
     *  Constant: '<S216>/Calib'
     *  Inport: '<S21>/VeMSPR_dn_MtrB_AccelRaw'
     *  RelationalOperator: '<S220>/Relational Operator'
     */
    if (KeTISR_n_TransMinInputSpdMaxLim <
            rtb_TmpSignalConversionAtVeTISR_n_Tran_k)
    {
        rtb_TmpSignalConversionAtVeTISR_n_Tran_k =
            KeTISR_n_TransMinInputSpdMaxLim;
    }

    /* End of Switch: '<S220>/Switch1' */
    /* End of Outputs for SubSystem: '<S213>/Limiter' */
    /* End of Outputs for S-Function (fcgen): '<S8>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeMSPR_b_MtrA_SpdFA' */
    (void)Rte_Read_VeMSPR_b_MtrA_SpdFA_Value(&tmpRead_1);

    /* Inport: '<Root>/VeMSPR_dn_MtrC_AccelRaw' */
    (void)Rte_Read_VeMSPR_dn_MtrC_AccelRaw_Value(&tmpRead_8);

    /* Inport: '<Root>/VeMSPR_dn_MtrA_AccelRaw' */
    (void)Rte_Read_VeMSPR_dn_MtrA_AccelRaw_Value(&tmpRead_3);

    /* Inport: '<Root>/VeMSPR_e_MtrCSpd_Src' */
    (void)Rte_Read_VeMSPR_e_MtrCSpd_Src_Value(&tmpRead_7);

    /* Inport: '<Root>/VeMSPR_e_MtrASpd_Src' */
    (void)Rte_Read_VeMSPR_e_MtrASpd_Src_Value(&tmpRead_5);

    /* Inport: '<Root>/VeMSPR_n_MtrA_SpdRaw' */
    (void)Rte_Read_VeMSPR_n_MtrA_SpdRaw_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/TISR_FastTEF'
     */
    /* S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/TISI_PreProcessing'
     */
    /* SignalConversion generated from: '<S21>/VS1' incorporates:
     *  Inport: '<S21>/VeMSPR_n_MtrA_SpdRaw'
     */
#if Rte_SysCon_Variant_TISR_3

    TISR_ac_B.VariantMerge_For_Variant_Source_VS1 = tmpRead;

#endif

    /* End of SignalConversion generated from: '<S21>/VS1' */
    /* End of Outputs for S-Function (fcgen): '<S8>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeMSPR_n_MtrC_SpdRaw' */
    (void)Rte_Read_VeMSPR_n_MtrC_SpdRaw_Value(&tmpRead_9);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/TISR_FastTEF'
     */
    /* S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/TISI_PreProcessing'
     */
    /* SignalConversion generated from: '<S21>/VS1' incorporates:
     *  Inport: '<S21>/VeMSPR_n_MtrC_SpdRaw'
     */
#if !Rte_SysCon_Variant_TISR_3

    TISR_ac_B.VariantMerge_For_Variant_Source_VS1 = tmpRead_9;

#endif

    /* End of SignalConversion generated from: '<S21>/VS1' */
    /* End of Outputs for S-Function (fcgen): '<S8>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeMSPR_n_MtrB_SpdRaw' */
    (void)Rte_Read_VeMSPR_n_MtrB_SpdRaw_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/TISR_FastTEF'
     */
    /* S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/TISI_PreProcessing'
     */
    /* SignalConversion generated from: '<S21>/VS2' incorporates:
     *  Inport: '<S21>/VeMSPR_b_MtrA_SpdFA'
     *  Inport: '<S21>/VeMSPR_n_MtrB_SpdRaw'
     *  SignalConversion generated from: '<S21>/VS3'
     * */
#if Rte_SysCon_Variant_TISR_3

    TISR_ac_B.VariantMerge_For_Variant_Source_VS2 = tmpRead_0;
    TISR_ac_B.VariantMerge_For_Variant_Source_VS3 = tmpRead_1;

#else

    /* SignalConversion generated from: '<S21>/VS2' incorporates:
     *  Inport: '<S21>/VeMSPR_n_MtrB_SpdRaw'
     */
    TISR_ac_B.VariantMerge_For_Variant_Source_VS2 = tmpRead_0;

    /* SignalConversion generated from: '<S21>/VS3' incorporates:
     *  Inport: '<S21>/VeMSPR_b_MtrC_SpdFA'
     */
    TISR_ac_B.VariantMerge_For_Variant_Source_VS3 = tmpRead_a;

#endif

    /* End of SignalConversion generated from: '<S21>/VS2' */
    /* End of Outputs for S-Function (fcgen): '<S8>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeMSPR_b_MtrB_SpdFA' */
    (void)Rte_Read_VeMSPR_b_MtrB_SpdFA_Value(&tmpRead_2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/TISR_FastTEF'
     */
    /* S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/TISI_PreProcessing'
     */
    /* SignalConversion generated from: '<S21>/VS4' incorporates:
     *  Inport: '<S21>/VeMSPR_b_MtrB_SpdFA'
     *  Inport: '<S21>/VeMSPR_dn_MtrA_AccelRaw'
     *  SignalConversion generated from: '<S21>/VS5'
     * */
#if Rte_SysCon_Variant_TISR_3

    TISR_ac_B.VariantMerge_For_Variant_Source_VS4 = tmpRead_2;
    TISR_ac_B.VariantMerge_For_Variant_Source_VS5 = tmpRead_3;

#else

    /* SignalConversion generated from: '<S21>/VS4' incorporates:
     *  Inport: '<S21>/VeMSPR_b_MtrB_SpdFA'
     */
    TISR_ac_B.VariantMerge_For_Variant_Source_VS4 = tmpRead_2;

    /* SignalConversion generated from: '<S21>/VS5' incorporates:
     *  Inport: '<S21>/VeMSPR_dn_MtrC_AccelRaw'
     */
    TISR_ac_B.VariantMerge_For_Variant_Source_VS5 = tmpRead_8;

#endif

    /* End of SignalConversion generated from: '<S21>/VS4' */
    /* End of Outputs for S-Function (fcgen): '<S8>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeMSPR_dn_MtrB_AccelRaw' */
    (void)Rte_Read_VeMSPR_dn_MtrB_AccelRaw_Value(&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/TISR_FastTEF'
     */
    /* S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/TISI_PreProcessing'
     */
    /* SignalConversion generated from: '<S21>/VS6' incorporates:
     *  Inport: '<Root>/VeMSPR_e_MtrASpd_Src'
     *  Inport: '<S21>/VeMSPR_dn_MtrB_AccelRaw'
     *  Inport: '<S21>/VeMSPR_e_MtrASpd_Src'
     *  SignalConversion generated from: '<S21>/VS7'
     *  VariantMerge generated from: '<S21>/VS7'
     * */
#if Rte_SysCon_Variant_TISR_3

    TISR_ac_B.VariantMerge_For_Variant_Source_VS6 = tmpRead_4;
    TISR_ac_B.VariantMerge_For_Variant_Source_VS7 = tmpRead_5;

#else

    /* SignalConversion generated from: '<S21>/VS6' incorporates:
     *  Inport: '<S21>/VeMSPR_dn_MtrB_AccelRaw'
     */
    TISR_ac_B.VariantMerge_For_Variant_Source_VS6 = tmpRead_4;

    /* SignalConversion generated from: '<S21>/VS7' incorporates:
     *  Inport: '<Root>/VeMSPR_e_MtrCSpd_Src'
     *  Inport: '<S21>/VeMSPR_e_MtrCSpd_Src'
     *  VariantMerge generated from: '<S21>/VS7'
     */
    TISR_ac_B.VariantMerge_For_Variant_Source_VS7 = tmpRead_7;

#endif

    /* End of SignalConversion generated from: '<S21>/VS6' */
    /* End of Outputs for S-Function (fcgen): '<S8>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeMSPR_e_MtrBSpd_Src' */
    (void)Rte_Read_VeMSPR_e_MtrBSpd_Src_Value(&tmpRead_6);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/TISR_FastTEF'
     */
    /* S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/TISI_PreProcessing'
     */
    /* SignalConversion generated from: '<S21>/VS8' incorporates:
     *  Inport: '<Root>/VeMSPR_e_MtrBSpd_Src'
     *  Inport: '<S21>/VeMSPR_e_MtrBSpd_Src'
     *  VariantMerge generated from: '<S21>/VS8'
     */
#if Rte_SysCon_Variant_TISR_3

    TISR_ac_B.VariantMerge_For_Variant_Source_VS8 = tmpRead_6;

#else

    /* SignalConversion generated from: '<S21>/VS8' incorporates:
     *  Inport: '<Root>/VeMSPR_e_MtrBSpd_Src'
     *  Inport: '<S21>/VeMSPR_e_MtrBSpd_Src'
     *  VariantMerge generated from: '<S21>/VS8'
     */
    TISR_ac_B.VariantMerge_For_Variant_Source_VS8 = tmpRead_6;

#endif

    /* End of SignalConversion generated from: '<S21>/VS8' */

    /* S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/Process_Output'
     */
    /* Outport: '<Root>/VeTISR_b_IUMPR_P0C2FFail' incorporates:
     *  Constant: '<S18>/FALSEConstant'
     *  Logic: '<S22>/AND'
     *  SignalConversion generated from: '<S8>/VeTISR_b_IUMPR_P0C2FFail'
     */
    (void)Rte_Write_VeTISR_b_IUMPR_P0C2FFail_Value(false);

    /* End of Outputs for S-Function (fcgen): '<S8>/FcnCallGen' */

    /* Outport: '<Root>/VeTISR_b_InputSpdRatlFlt_FltDtct' incorporates:
     *  SignalConversion generated from: '<S8>/VeTISR_b_InputSpdRatlFlt_FltDtct'
     */
    (void)Rte_Write_VeTISR_b_InputSpdRatlFlt_FltDtct_Value
        (TISR_ac_B.VariantMergeForOutportVeTISR_b_InputSpdR);

    /* S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/Process_Output'
     */
    /* Outport: '<Root>/VeTISR_b_InputSpeedFA' incorporates:
     *  Gain: '<S26>/Gain'
     *  SignalConversion generated from: '<S8>/VeTISR_b_InputSpeedFA'
     */
    (void)Rte_Write_VeTISR_b_InputSpeedFA_Value(VeTISC_b_InputSpeedFA_Actual);

    /* Outport: '<Root>/VeTISR_b_NiFromMtrFA' incorporates:
     *  Gain: '<S28>/Gain'
     *  SignalConversion generated from: '<S8>/VeTISR_b_NiFromMtrFA'
     */
    (void)Rte_Write_VeTISR_b_NiFromMtrFA_Value(VeTISC_b_MtrA_MtrB_FA);

    /* Outport: '<Root>/VeTISR_dn_InputAcceltn' incorporates:
     *  Gain: '<S24>/Gain'
     *  SignalConversion generated from: '<S8>/VeTISR_dn_InputAcceltn'
     */
    (void)Rte_Write_VeTISR_dn_InputAcceltn_Value(VeTISC_dn_InputAcceltn_Actual);

    /* End of Outputs for S-Function (fcgen): '<S8>/FcnCallGen' */

    /* Outport: '<Root>/VeTISR_e_FaultSts_CM_DM_GenEngSpdPerf' incorporates:
     *  SignalConversion generated from: '<S8>/VeTISR_e_FaultSts_CM_DM_GenEngSpdPerf'
     *  VariantMerge generated from: '<S49>/VeTISR_e_FaultSts_CM_DM_GenEngSpdPerf'
     */
    (void)Rte_Write_VeTISR_e_FaultSts_CM_DM_GenEngSpdPerf_Value
        (TISR_ac_B.VariantMergeForOutportVeTISR_e_FaultSts_);

    /* Outport: '<Root>/VeTISR_e_InpSpdSource' incorporates:
     *  Merge: '<S121>/Merge5'
     *  SignalConversion generated from: '<S8>/VeTISR_e_InpSpdSource'
     */
    (void)Rte_Write_VeTISR_e_InpSpdSource_Value(TISR_ac_B.Merge5);

    /* S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/Process_Output'
     */
    /* Outport: '<Root>/VeTISR_n_InputSpeedRaw' incorporates:
     *  Gain: '<S25>/Gain'
     *  SignalConversion generated from: '<S8>/VeTISR_n_InputSpeedRaw'
     */
    (void)Rte_Write_VeTISR_n_InputSpeedRaw_Value(VeTISC_n_InputSpeedRaw_Actual);

    /* Outport: '<Root>/VeTISR_n_NiFromMtr' incorporates:
     *  Gain: '<S27>/Gain'
     *  SignalConversion generated from: '<S8>/VeTISR_n_NiFromMtr'
     */
    (void)Rte_Write_VeTISR_n_NiFromMtr_Value(VeTISC_n_NifromMSPR);

    /* Outport: '<Root>/VeTISR_n_InputSpeed' incorporates:
     *  Gain: '<S23>/Gain'
     *  SignalConversion generated from: '<S8>/VeTISR_n_TransInSpd'
     */
    (void)Rte_Write_VeTISR_n_InputSpeed_Value(VeTISC_n_InputSpeed_Actual);

    /* S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/TISI_PreProcessing'
     */
    /* Outputs for Atomic SubSystem: '<S213>/Limiter' */
    /* Switch: '<S220>/Switch' incorporates:
     *  Constant: '<S217>/Calib'
     *  RelationalOperator: '<S220>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeTISR_n_Tran_k >
            KeTISR_n_TransMinInputSpdMinLim)
    {
        /* Outport: '<Root>/VeTISR_n_TransMinInputSpd' incorporates:
         *  SignalConversion generated from: '<S8>/VeTISR_n_TransMinInputSpd_out'
         */
        (void)Rte_Write_VeTISR_n_TransMinInputSpd_Value
            (rtb_TmpSignalConversionAtVeTISR_n_Tran_k);
    }
    else
    {
        /* Outport: '<Root>/VeTISR_n_TransMinInputSpd' incorporates:
         *  SignalConversion generated from: '<S8>/VeTISR_n_TransMinInputSpd_out'
         */
        (void)Rte_Write_VeTISR_n_TransMinInputSpd_Value
            (KeTISR_n_TransMinInputSpdMinLim);
    }

    /* End of Switch: '<S220>/Switch' */
    /* End of Outputs for SubSystem: '<S213>/Limiter' */
    /* End of Outputs for S-Function (fcgen): '<S8>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Output function */
FUNC(void, TISR_CODE) FsftTISR_n_TransMinInputSpd(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTISR_n_TransMinInputSpd' */
    /* Merge: '<Root>/Merge_6' incorporates:
     *  Chart: '<S1>/FsftTISR_n_TransMinInputSpdChrt'
     *  SignalConversion generated from: '<S1>/VeTISR_n_TransMinInputSpd_write'
     */
    /* Gateway: FsftTISR_n_TransMinInputSpd/FsftTISR_n_TransMinInputSpdChrt */
    /* During: FsftTISR_n_TransMinInputSpd/FsftTISR_n_TransMinInputSpdChrt */
    /* Entry Internal: FsftTISR_n_TransMinInputSpd/FsftTISR_n_TransMinInputSpdChrt */
    /* Transition: '<S11>:2' */
    Rte_IrvWrite_FsftTISR_n_TransMinInputSpd_VeTISR_n_TransMinInputSpd_write_IRV
        (KeTISR_n_DfltTransMinInputSpd);

    /* End of Outputs for SubSystem: '<Root>/FsftTISR_n_TransMinInputSpd' */
}

/* Output function */
FUNC(void, TISR_CODE) FsftTISR_n_TransMinInputSpdPHEV(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTISR_n_TransMinInputSpdPHEV' */
    /* Merge: '<Root>/Merge_7' incorporates:
     *  Chart: '<S2>/FsftTISR_n_TransMinInputSpdPHEVChrt'
     *  SignalConversion generated from: '<S2>/VeTISR_n_TransMinInputSpdPHEV_write'
     */
    /* Gateway: FsftTISR_n_TransMinInputSpdPHEV/FsftTISR_n_TransMinInputSpdPHEVChrt */
    /* During: FsftTISR_n_TransMinInputSpdPHEV/FsftTISR_n_TransMinInputSpdPHEVChrt */
    /* Entry Internal: FsftTISR_n_TransMinInputSpdPHEV/FsftTISR_n_TransMinInputSpdPHEVChrt */
    /* Transition: '<S12>:2' */
    Rte_IrvWrite_FsftTISR_n_TransMinInputSpdPHEV_VeTISR_n_TransMinInputSpdPHEV_write_IRV
        (KeTISR_n_DfltTransMinInputSpdPHEV);

    /* End of Outputs for SubSystem: '<Root>/FsftTISR_n_TransMinInputSpdPHEV' */
}

/* Output function */
FUNC(void, TISR_CODE) PokeTISR_n_DirectionSign(VAR(float32, AUTOMATIC)
    LeTISR_n_DirectionSign)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTISR_n_DirectionSign' */
    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S3>/LeTISR_n_DirectionSign'
     *  SignalConversion generated from: '<S3>/VeTISR_n_DirectionSign_write'
     */
    /* Gateway: PokeTISR_n_DirectionSign/PokeTISR_n_DirectionSignChrt */
    /* During: PokeTISR_n_DirectionSign/PokeTISR_n_DirectionSignChrt */
    /* Entry Internal: PokeTISR_n_DirectionSign/PokeTISR_n_DirectionSignChrt */
    /* Transition: '<S13>:2' */
    Rte_IrvWrite_PokeTISR_n_DirectionSign_VeTISR_n_DirectionSign_write_IRV
        (LeTISR_n_DirectionSign);

    /* End of Outputs for SubSystem: '<Root>/PokeTISR_n_DirectionSign' */
}

/* Output function */
FUNC(void, TISR_CODE) PokeTISR_n_InputSpdSnsdRaw(VAR(float32, AUTOMATIC)
    LeTISR_n_InputSpdSnsdRaw, VAR(boolean, AUTOMATIC) LeTISR_b_SnsrInputSpdRawFA)
{
    boolean rtb_LeTISR_b_SnsrInputSpdRawFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTISR_n_InputSpdSnsdRaw' */
    /* Chart: '<S4>/PokeTISR_n_InputSpdSnsdRawChrt' incorporates:
     *  SignalConversion generated from: '<S4>/LeTISR_b_SnsrInputSpdRawFA'
     */
    /* Gateway: PokeTISR_n_InputSpdSnsdRaw/PokeTISR_n_InputSpdSnsdRawChrt */
    /* During: PokeTISR_n_InputSpdSnsdRaw/PokeTISR_n_InputSpdSnsdRawChrt */
    /* Entry Internal: PokeTISR_n_InputSpdSnsdRaw/PokeTISR_n_InputSpdSnsdRawChrt */
    /* Transition: '<S14>:2' */
    if (!LeTISR_b_SnsrInputSpdRawFA)
    {
        /* SignalConversion generated from: '<S4>/VeTISR_n_InputSpdSnsdRaw_write' incorporates:
         *  Merge: '<Root>/Merge_1'
         *  SignalConversion generated from: '<S4>/LeTISR_n_InputSpdSnsdRaw'
         */
        /* Transition: '<S14>:3' */
        /* Transition: '<S14>:15' */
        Rte_IrvWrite_PokeTISR_n_InputSpdSnsdRaw_VeTISR_n_InputSpdSnsdRaw_write_IRV
            (LeTISR_n_InputSpdSnsdRaw);
        rtb_LeTISR_b_SnsrInputSpdRawFA_out = false;

        /* Transition: '<S14>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S4>/VeTISR_n_InputSpdSnsdRaw_write' incorporates:
         *  Merge: '<Root>/Merge_1'
         *  SignalConversion generated from: '<S4>/LeTISR_n_InputSpdSnsdRaw'
         */
        /* Transition: '<S14>:4' */
        Rte_IrvWrite_PokeTISR_n_InputSpdSnsdRaw_VeTISR_n_InputSpdSnsdRaw_write_IRV
            (LeTISR_n_InputSpdSnsdRaw);
        rtb_LeTISR_b_SnsrInputSpdRawFA_out = true;
    }

    /* End of Chart: '<S4>/PokeTISR_n_InputSpdSnsdRawChrt' */

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S4>/VeTISR_b_SnsrInputSpdRawFA_write'
     * */
    Rte_IrvWrite_PokeTISR_n_InputSpdSnsdRaw_VeTISR_b_SnsrInputSpdRawFA_write_IRV
        (rtb_LeTISR_b_SnsrInputSpdRawFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTISR_n_InputSpdSnsdRaw' */
}

/* Output function */
FUNC(void, TISR_CODE) PokeTISR_n_TransMinInputSpd(VAR(float32, AUTOMATIC)
    LeTISR_n_TransMinInputSpd, VAR(boolean, AUTOMATIC)
    LeTISR_b_TransMinInputSpdFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTISR_n_TransMinInputSpd' */
    /* Chart: '<S5>/PokeTISR_n_TransMinInputSpdChrt' incorporates:
     *  SignalConversion generated from: '<S5>/LeTISR_b_TransMinInputSpdFA'
     */
    /* Gateway: PokeTISR_n_TransMinInputSpd/PokeTISR_n_TransMinInputSpdChrt */
    /* During: PokeTISR_n_TransMinInputSpd/PokeTISR_n_TransMinInputSpdChrt */
    /* Entry Internal: PokeTISR_n_TransMinInputSpd/PokeTISR_n_TransMinInputSpdChrt */
    /* Transition: '<S15>:2' */
    if (!LeTISR_b_TransMinInputSpdFA)
    {
        /* SignalConversion generated from: '<S5>/VeTISR_n_TransMinInputSpd_write' incorporates:
         *  Merge: '<Root>/Merge_6'
         *  SignalConversion generated from: '<S5>/LeTISR_n_TransMinInputSpd'
         */
        /* Transition: '<S15>:3' */
        /* Transition: '<S15>:15' */
        Rte_IrvWrite_PokeTISR_n_TransMinInputSpd_VeTISR_n_TransMinInputSpd_write_IRV
            (LeTISR_n_TransMinInputSpd);

        /* Transition: '<S15>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S5>/VeTISR_n_TransMinInputSpd_write' incorporates:
         *  Merge: '<Root>/Merge_6'
         */
        /* Transition: '<S15>:4' */
        Rte_IrvWrite_PokeTISR_n_TransMinInputSpd_VeTISR_n_TransMinInputSpd_write_IRV
            (KeTISR_n_DfltTransMinInputSpd);
    }

    /* End of Chart: '<S5>/PokeTISR_n_TransMinInputSpdChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTISR_n_TransMinInputSpd' */
}

/* Output function */
FUNC(void, TISR_CODE) PokeTISR_n_TransMinInputSpdPHEV(VAR(float32, AUTOMATIC)
    LeTISR_n_TransMinInputSpdPHEV, VAR(boolean, AUTOMATIC)
    LeTISR_b_TransMinInputSpdPHEVFA)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTISR_n_TransMinInputSpdPHEV' */
    /* Chart: '<S6>/PokeTISR_n_TransMinInputSpdPHEVChrt' incorporates:
     *  SignalConversion generated from: '<S6>/LeTISR_b_TransMinInputSpdPHEVFA'
     */
    /* Gateway: PokeTISR_n_TransMinInputSpdPHEV/PokeTISR_n_TransMinInputSpdPHEVChrt */
    /* During: PokeTISR_n_TransMinInputSpdPHEV/PokeTISR_n_TransMinInputSpdPHEVChrt */
    /* Entry Internal: PokeTISR_n_TransMinInputSpdPHEV/PokeTISR_n_TransMinInputSpdPHEVChrt */
    /* Transition: '<S16>:2' */
    if (!LeTISR_b_TransMinInputSpdPHEVFA)
    {
        /* SignalConversion generated from: '<S6>/VeTISR_n_TransMinInputSpdPHEV_write' incorporates:
         *  Merge: '<Root>/Merge_7'
         *  SignalConversion generated from: '<S6>/LeTISR_n_TransMinInputSpdPHEV'
         */
        /* Transition: '<S16>:3' */
        /* Transition: '<S16>:15' */
        Rte_IrvWrite_PokeTISR_n_TransMinInputSpdPHEV_VeTISR_n_TransMinInputSpdPHEV_write_IRV
            (LeTISR_n_TransMinInputSpdPHEV);

        /* Transition: '<S16>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S6>/VeTISR_n_TransMinInputSpdPHEV_write' incorporates:
         *  Merge: '<Root>/Merge_7'
         */
        /* Transition: '<S16>:4' */
        Rte_IrvWrite_PokeTISR_n_TransMinInputSpdPHEV_VeTISR_n_TransMinInputSpdPHEV_write_IRV
            (KeTISR_n_DfltTransMinInputSpdPHEV);
    }

    /* End of Chart: '<S6>/PokeTISR_n_TransMinInputSpdPHEVChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTISR_n_TransMinInputSpdPHEV' */
}

/* Output function */
FUNC(void, TISR_CODE) PokeTISR_phi_TransInAng720Est(VAR(float32, AUTOMATIC)
    LeTISR_phi_TransInAng720Est, VAR(boolean, AUTOMATIC)
    LeTISR_b_TransInAng720EstFA)
{
    boolean rtb_LeTISR_b_TransInAng720EstFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTISR_phi_TransInAng720Est' */
    /* Chart: '<S7>/PokeTISR_phi_TransInAng720EstChrt' incorporates:
     *  SignalConversion generated from: '<S7>/LeTISR_b_TransInAng720EstFA'
     */
    /* Gateway: PokeTISR_phi_TransInAng720Est/PokeTISR_phi_TransInAng720EstChrt */
    /* During: PokeTISR_phi_TransInAng720Est/PokeTISR_phi_TransInAng720EstChrt */
    /* Entry Internal: PokeTISR_phi_TransInAng720Est/PokeTISR_phi_TransInAng720EstChrt */
    /* Transition: '<S17>:2' */
    if (!LeTISR_b_TransInAng720EstFA)
    {
        /* SignalConversion generated from: '<S7>/VeTISR_phi_TransInAng720Est' incorporates:
         *  Outport: '<Root>/VeTISR_phi_TransInAng720Est'
         *  SignalConversion generated from: '<S7>/LeTISR_phi_TransInAng720Est'
         */
        /* Transition: '<S17>:3' */
        /* Transition: '<S17>:15' */
        (void)Rte_Write_VeTISR_phi_TransInAng720Est_Value
            (LeTISR_phi_TransInAng720Est);
        rtb_LeTISR_b_TransInAng720EstFA_out = false;

        /* Transition: '<S17>:18' */
    }
    else
    {
        /* SignalConversion generated from: '<S7>/VeTISR_phi_TransInAng720Est' incorporates:
         *  Outport: '<Root>/VeTISR_phi_TransInAng720Est'
         */
        /* Transition: '<S17>:4' */
        (void)Rte_Write_VeTISR_phi_TransInAng720Est_Value
            (KeTISR_phi_TransInAng720Est_Dflt);
        rtb_LeTISR_b_TransInAng720EstFA_out = true;
    }

    /* End of Chart: '<S7>/PokeTISR_phi_TransInAng720EstChrt' */

    /* Outport: '<Root>/VeTISR_b_TransInAng720EstErr' incorporates:
     *  SignalConversion generated from: '<S7>/VeTISR_b_TransInAng720EstFA'
     */
    (void)Rte_Write_VeTISR_b_TransInAng720EstErr_Value
        (rtb_LeTISR_b_TransInAng720EstFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTISR_phi_TransInAng720Est' */
}

/* Output function */
FUNC(void, TISR_CODE) TISR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/TISR_PwrOff'
     */
    /* Outport: '<Root>/NeTISD_Cnt_SpdRatlFlt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S9>/NeTISD_Cnt_SpdRatlFlt_MFOP'
     */
    (void)Rte_Write_NeTISD_Cnt_SpdRatlFlt_MFOP_NeTISD_Cnt_SpdRatlFlt_MFOP
        (TISR_ac_DW.NeTISD_Cnt_SpdRatlFlt_MFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, TISR_CODE) TISR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TISR_PwrOn'
     */
    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/DSM_Init'
     */
    /* DataStoreWrite: '<S221>/NeTISD_Cnt_SpdRatlFlt_MFOP' incorporates:
     *  Inport: '<Root>/NeTISD_Cnt_SpdRatlFlt_MFOP_PM_In'
     */
    (void)Rte_Read_NeTISD_Cnt_SpdRatlFlt_MFOP_Rx_NeTISD_Cnt_SpdRatlFlt_MFOP
        (&TISR_ac_DW.NeTISD_Cnt_SpdRatlFlt_MFOP);

    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/InitTISIOutput'
     */
    /* SignalConversion generated from: '<S222>/RawSnsdOutput_Init' */
    TISR_ac_B.OutportBufferForRawSnsdOutput_Init = 0.0F;

    /* SignalConversion generated from: '<S222>/SnsrInputSpdRawFA' incorporates:
     *  Constant: '<S225>/Calib'
     */
    TISR_ac_B.OutportBufferForSnsrInputSpdRawFA = KeTISR_b_NiSensorFA_InitVal;

    /* SignalConversion generated from: '<S222>/Le_TISR_n_DirectionSign_Init' incorporates:
     *  Constant: '<S229>/Calib'
     */
    TISR_ac_B.OutportBufferForLe_TISR_n_DirectionSign_ =
        KeTISR_n_DirectionSign_InitVal;

    /* SignalConversion generated from: '<S222>/LeTISR_phi_TransInAng720Est_InitVal' incorporates:
     *  Constant: '<S230>/Calib'
     */
    TISR_ac_B.OutportBufferForLeTISR_phi_TransInAng720 =
        KeTISR_phi_TransInAng720Est_InitVal;

    /* SignalConversion generated from: '<S222>/LeTISR_b_TransInAng720EstErr_InitVal' incorporates:
     *  Constant: '<S226>/Calib'
     */
    TISR_ac_B.OutportBufferForLeTISR_b_TransInAng720Es =
        KeTISR_b_TransInAng720EstErr_InitVal;

    /* SignalConversion generated from: '<S222>/VeTISR_n_TransMinInputSpd_InitVal' incorporates:
     *  Constant: '<S227>/Calib'
     */
    TISR_ac_B.OutportBufferForVeTISR_n_TransMinInput_h =
        KeTISR_n_DfltTransMinInputSpd;

    /* SignalConversion generated from: '<S222>/VeTISR_n_TransMinInputSpdPHEV_InitVal' incorporates:
     *  Constant: '<S228>/Calib'
     */
    TISR_ac_B.OutportBufferForVeTISR_n_TransMinInput_j =
        KeTISR_n_DfltTransMinInputSpdPHEV;

    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/TISC_InitInSpd'
     */

    /* S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S223>/VeTISR_b_InputSpdRatlFlt_FltDtct_Out_Init' */
    TISR_ac_B.OutportBufferForVeTISR_b_InputSpdRatlFlt = false;

    /* SignalConversion generated from: '<S223>/VeTISR_e_InpSpdSource_Out_Init' incorporates:
     *  Constant: '<S223>/Const2'
     */
    TISR_ac_B.OutportBufferForVeTISR_e_InpSpdSource_Ou = TISR_ac_ConstB.Const2;

    /* SignalConversion generated from: '<S223>/VeTISR_b_IUMPR_P0C2FFail_Out_Init' */
    TISR_ac_B.OutportBufferForVeTISR_b_IUMPR_P0C2FFail = false;

    /* SignalConversion generated from: '<S223>/VeTISR_n_TransMinInputSpd_Out_Init' */
    TISR_ac_B.OutportBufferForVeTISR_n_TransMinInputSp = 0.0F;

    /* SignalConversion generated from: '<S223>/VeTISR_e_FaultSts_CM_DM_GenEngSpdPerf' incorporates:
     *  Constant: '<S231>/Constant'
     */
    TISR_ac_B.OutportBufferForVeTISR_e_FaultSts_CM_DM_ = TISR_ac_ConstB.Constant;

    /* End of Outputs for S-Function (fcgen): '<S10>/FcnCallGen' */

    /* Outport: '<Root>/VeTISR_b_TransInAng720EstErr' incorporates:
     *  SignalConversion generated from: '<S10>/LeTISR_b_TransInAng720EstErr_InitVal'
     */
    (void)Rte_Write_VeTISR_b_TransInAng720EstErr_Value
        (TISR_ac_B.OutportBufferForLeTISR_b_TransInAng720Es);

    /* Outport: '<Root>/VeTISR_phi_TransInAng720Est' incorporates:
     *  SignalConversion generated from: '<S10>/LeTISR_phi_TransInAng720Est_InitVal'
     */
    (void)Rte_Write_VeTISR_phi_TransInAng720Est_Value
        (TISR_ac_B.OutportBufferForLeTISR_phi_TransInAng720);

    /* Outport: '<Root>/VeTISR_e_FaultSts_CM_DM_GenEngSpdPerf' incorporates:
     *  SignalConversion generated from: '<S10>/R_VeTISR_e_FaultSts_CM_DM_GenEngSpdPerf'
     *  SignalConversion generated from: '<S223>/VeTISR_e_FaultSts_CM_DM_GenEngSpdPerf'
     */
    (void)Rte_Write_VeTISR_e_FaultSts_CM_DM_GenEngSpdPerf_Value
        (TISR_ac_B.OutportBufferForVeTISR_e_FaultSts_CM_DM_);

    /* Outport: '<Root>/VeTISR_b_IUMPR_P0C2FFail' incorporates:
     *  SignalConversion generated from: '<S10>/VeTISR_b_IUMPR_P0C2FFail_Out_Init'
     */
    (void)Rte_Write_VeTISR_b_IUMPR_P0C2FFail_Value
        (TISR_ac_B.OutportBufferForVeTISR_b_IUMPR_P0C2FFail);

    /* Outport: '<Root>/VeTISR_b_InputSpdRatlFlt_FltDtct' incorporates:
     *  SignalConversion generated from: '<S10>/VeTISR_b_InputSpdRatlFlt_FltDtct_Out_Init'
     */
    (void)Rte_Write_VeTISR_b_InputSpdRatlFlt_FltDtct_Value
        (TISR_ac_B.OutportBufferForVeTISR_b_InputSpdRatlFlt);

    /* Outport: '<Root>/VeTISR_b_InputSpeedFA' incorporates:
     *  SignalConversion generated from: '<S10>/VeTISR_b_InputSpeedFA_Init'
     */
    (void)Rte_Write_VeTISR_b_InputSpeedFA_Value(false);

    /* Outport: '<Root>/VeTISR_b_NiFromMtrFA' incorporates:
     *  SignalConversion generated from: '<S10>/VeTISR_b_NiFromMtrFA_init'
     */
    (void)Rte_Write_VeTISR_b_NiFromMtrFA_Value(false);

    /* Outport: '<Root>/VeTISR_dn_InputAcceltn' incorporates:
     *  SignalConversion generated from: '<S10>/VeTISR_dn_InputAcceltn_Init'
     */
    (void)Rte_Write_VeTISR_dn_InputAcceltn_Value(0.0F);

    /* Outport: '<Root>/VeTISR_e_InpSpdSource' incorporates:
     *  SignalConversion generated from: '<S10>/VeTISR_e_InpSpdSource_Out_Init'
     *  SignalConversion generated from: '<S223>/VeTISR_e_InpSpdSource_Out_Init'
     */
    (void)Rte_Write_VeTISR_e_InpSpdSource_Value
        (TISR_ac_B.OutportBufferForVeTISR_e_InpSpdSource_Ou);

    /* Outport: '<Root>/VeTISR_n_InputSpeedRaw' incorporates:
     *  SignalConversion generated from: '<S10>/VeTISR_n_InputSpeedRaw_Init'
     */
    (void)Rte_Write_VeTISR_n_InputSpeedRaw_Value(0.0F);

    /* Outport: '<Root>/VeTISR_n_NiFromMtr' incorporates:
     *  SignalConversion generated from: '<S10>/VeTISR_n_NiFromMtr_init'
     */
    (void)Rte_Write_VeTISR_n_NiFromMtr_Value(0.0F);

    /* Outport: '<Root>/VeTISR_n_InputSpeed' incorporates:
     *  SignalConversion generated from: '<S10>/VeTISR_n_TransInSpd_Init'
     */
    (void)Rte_Write_VeTISR_n_InputSpeed_Value(0.0F);

    /* Outport: '<Root>/VeTISR_n_TransMinInputSpd' incorporates:
     *  SignalConversion generated from: '<S10>/VeTISR_n_TransMinInputSpd_Out_Init'
     */
    (void)Rte_Write_VeTISR_n_TransMinInputSpd_Value
        (TISR_ac_B.OutportBufferForVeTISR_n_TransMinInputSp);

    /* Merge: '<Root>/Merge_2' incorporates:
     *  SignalConversion generated from: '<S10>/Le_TISR_n_DirectionSign_Init_write'
     * */
    Rte_IrvWrite_TISR_PwrOn_VeTISR_n_DirectionSign_write_IRV
        (TISR_ac_B.OutportBufferForLe_TISR_n_DirectionSign_);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S10>/RawSnsdOutput_Init_write'
     * */
    Rte_IrvWrite_TISR_PwrOn_VeTISR_n_InputSpdSnsdRaw_write_IRV
        (TISR_ac_B.OutportBufferForRawSnsdOutput_Init);

    /* Merge: '<Root>/Merge_3' incorporates:
     *  SignalConversion generated from: '<S10>/SnsrInputSpdRawFA_write'
     * */
    Rte_IrvWrite_TISR_PwrOn_VeTISR_b_SnsrInputSpdRawFA_write_IRV
        (TISR_ac_B.OutportBufferForSnsrInputSpdRawFA);

    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S10>/VeTISR_n_TransMinInputSpdPHEV_InitVal_write'
     * */
    Rte_IrvWrite_TISR_PwrOn_VeTISR_n_TransMinInputSpdPHEV_write_IRV
        (TISR_ac_B.OutportBufferForVeTISR_n_TransMinInput_j);

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S10>/VeTISR_n_TransMinInputSpd_InitVal_write'
     * */
    Rte_IrvWrite_TISR_PwrOn_VeTISR_n_TransMinInputSpd_write_IRV
        (TISR_ac_B.OutportBufferForVeTISR_n_TransMinInput_h);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, TISR_CODE) TISR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TISR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/InitTISIOutput'
     */
    /* SystemInitialize for SignalConversion generated from: '<S222>/SnsrInputSpdRawFA' incorporates:
     *  Constant: '<S225>/Calib'
     */
    TISR_ac_B.OutportBufferForSnsrInputSpdRawFA = KeTISR_b_NiSensorFA_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S222>/Le_TISR_n_DirectionSign_Init' incorporates:
     *  Constant: '<S229>/Calib'
     */
    TISR_ac_B.OutportBufferForLe_TISR_n_DirectionSign_ =
        KeTISR_n_DirectionSign_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S222>/LeTISR_phi_TransInAng720Est_InitVal' incorporates:
     *  Constant: '<S230>/Calib'
     */
    TISR_ac_B.OutportBufferForLeTISR_phi_TransInAng720 =
        KeTISR_phi_TransInAng720Est_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S222>/LeTISR_b_TransInAng720EstErr_InitVal' incorporates:
     *  Constant: '<S226>/Calib'
     */
    TISR_ac_B.OutportBufferForLeTISR_b_TransInAng720Es =
        KeTISR_b_TransInAng720EstErr_InitVal;

    /* SystemInitialize for SignalConversion generated from: '<S222>/VeTISR_n_TransMinInputSpd_InitVal' incorporates:
     *  Constant: '<S227>/Calib'
     */
    TISR_ac_B.OutportBufferForVeTISR_n_TransMinInput_h =
        KeTISR_n_DfltTransMinInputSpd;

    /* SystemInitialize for SignalConversion generated from: '<S222>/VeTISR_n_TransMinInputSpdPHEV_InitVal' incorporates:
     *  Constant: '<S228>/Calib'
     */
    TISR_ac_B.OutportBufferForVeTISR_n_TransMinInput_j =
        KeTISR_n_DfltTransMinInputSpdPHEV;

    /* SystemInitialize for S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/TISC_InitInSpd'
     */

    /* SystemInitialize for S-Function (fcgen): '<S10>/FcnCallGen' incorporates:
     *  SubSystem: '<S10>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S223>/VeTISR_e_InpSpdSource_Out_Init' incorporates:
     *  Constant: '<S223>/Const2'
     */
    TISR_ac_B.OutportBufferForVeTISR_e_InpSpdSource_Ou = TISR_ac_ConstB.Const2;

    /* SystemInitialize for SignalConversion generated from: '<S223>/VeTISR_e_FaultSts_CM_DM_GenEngSpdPerf' incorporates:
     *  Constant: '<S231>/Constant'
     */
    TISR_ac_B.OutportBufferForVeTISR_e_FaultSts_CM_DM_ = TISR_ac_ConstB.Constant;

    /* End of SystemInitialize for S-Function (fcgen): '<S10>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/TISR_FastTEF'
     */
    /* SystemInitialize for S-Function (fcgen): '<S8>/FcnCallGen' incorporates:
     *  SubSystem: '<S8>/TISC_InSpd'
     */
    /* SystemInitialize for Atomic SubSystem: '<S20>/TISC_DtrmnInSpd' */
    TISR_ac_TISC_DtrmnInSpd_Init();

    /* End of SystemInitialize for SubSystem: '<S20>/TISC_DtrmnInSpd' */

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* SystemInitialize for Outport: '<Root>/VeTISR_e_InpSpdSource' incorporates:
     *  Merge: '<Root>/Merge_Outport_8'
     */
    (void)Rte_Write_VeTISR_e_InpSpdSource_Value(CeTISR_e_EngSpeedFromCAN);

    /* SystemInitialize for Outport: '<Root>/VeTISR_e_FaultSts_CM_DM_GenEngSpdPerf' incorporates:
     *  Merge: '<Root>/M_VeTISR_e_FaultSts_CM_DM_GenEngSpdPerf'
     */
    (void)Rte_Write_VeTISR_e_FaultSts_CM_DM_GenEngSpdPerf_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
