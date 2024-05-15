/*
 * File: TAPR_ac.c
 *
 * Code generated for Simulink model 'TAPR_ac'.
 *
 * Model version                  : 9.87
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:26:06 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TAPR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_TAPR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_K_AuxPump2VolPerRev = 5.5F;/* Referenced by:
                                                                      * '<S213>/Calib'
                                                                      * '<S281>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_K_AuxPumpVolPerRev = 5.5F;/* Referenced by:
                                                                      * '<S214>/Calib'
                                                                      * '<S262>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_K_EOP_Kd = 0.0F;/* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_K_EOP_Ki = 0.005F;/* Referenced by: '<S235>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_K_EOP_Kp = 0.005F;/* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_K_MechOilPumpVolPerRev =
    0.00156F;                          /* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_K_PumpSpdRatio = 1.0F;/* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_Pct_AuxPumpSpdDsrd_Dial =
    0.0F;                              /* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_Pct_AuxPumpSpdThresh =
    0.85F;                             /* Referenced by: '<S355>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_Pct_EOPFault_Off = 43.0F;/* Referenced by: '<S249>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_Pct_EOP_Intgrl_IV = 0.0F;/* Referenced by: '<S240>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_Pct_EOP_MN_Intgrl = -10.0F;/* Referenced by: '<S241>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_Pct_EOP_MX_Intgrl = 10.0F;/* Referenced by: '<S242>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_Pct_EOP_Max_PWM = 85.0F;/* Referenced by: '<S243>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_Pct_EOP_Min_PWM = 43.0F;/* Referenced by: '<S247>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_Pct_EOP_Off = 0.0F;/* Referenced by: '<S248>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_2

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_Pct_ElecOilPmp_Cmd_NF =
    0.0F;                              /* Referenced by: '<S426>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_2

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_Pct_ElecOilPmp_RlyCmd_NF =
    0.0F;                              /* Referenced by: '<S427>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_Pct_RelayCommand = 0.0F;/* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_Pct_RelayCommandDefault =
    0.0F;                              /* Referenced by: '<S226>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_Pct_RelayZeroCommand = 0.0F;/* Referenced by: '<S227>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_T_LowerLim = -40.0F;/* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_T_OAT_PT_Est_Dial = 25.0F;/* Referenced by: '<S81>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_T_TurnOffThresh = 3.0F;/* Referenced by: '<S191>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_T_TurnOnThresh = 0.0F;/* Referenced by: '<S192>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_T_UpperLim = 120.0F;/* Referenced by: '<S193>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT)
    KeTAPR_U_AuxPumpLowVoltDetect_HighVolt = 12.0F;/* Referenced by: '<S201>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT)
    KeTAPR_U_AuxPumpLowVoltDetect_LowVolt = 11.5F;/* Referenced by: '<S202>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_U_IgnRunCrnk_Dial = 0.0F;/* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_AuxPmp_GenFltInfoEnbl = 0;/* Referenced by: '<S160>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_AuxPump2SpdCmd_SD = 0;/* Referenced by: '<S302>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_AuxPumpRunning_Dial = 0;/* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_2

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_AuxPumpRunning_NF = 0;/* Referenced by: '<S428>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_AuxPumpRunning_SelDial =
    0;                                 /* Referenced by: '<S29>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_AuxPumpSpdDsrd_SelDial =
    0;                                 /* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_AuxPumpSpdFilterEnable =
    1;                                 /* Referenced by: '<S381>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_AuxPumpSpdFltrd_SelDial =
    0;                                 /* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_AuxPumpSpd_CmdRPM_SelDial
    = 0;                               /* Referenced by: '<S346>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT)
    KeTAPR_b_AuxPumpSpd_CmndRaw_SelDial = 0;/* Referenced by: '<S289>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT)
    KeTAPR_b_AuxPumpSpd_DsrdRPM_SelDial = 0;/* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_CAN_CommBusOff_FADial = 0;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_DesiredRPMSelector = 0;/* Referenced by: '<S271>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT)
    KeTAPR_b_Disable_AuxPumpLowVoltDetect = 1;/* Referenced by: '<S199>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_DsblDTC_CmCkt_Kmhev = 0;/* Referenced by: '<S244>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_DsblDTC_CmFdbck_Kmhev = 0;/* Referenced by: '<S246>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_DsblDTC_SigRan_Kmhev = 0;/* Referenced by: '<S245>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_DsblSTRRKeyStrtEng = 1;/* Referenced by: '<S206>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_EOPA_DryRunSampling = 0;/* Referenced by: '<S347>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_EOPB_DryRunSampling = 0;/* Referenced by: '<S303>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_EngOnReq_Dial = 0;/* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_EngOnReq_SelDial = 0;/* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_EngStartStopSt_SelDial =
    0;                                 /* Referenced by: '<S83>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_HCCRAuxPumpSpeed = 0;/* Referenced by: '<S263>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_IgnRunCrnk_SelDial = 0;/* Referenced by: '<S74>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_IgnrallEOPFaults_Kmhev =
    0;                                 /* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_InputSpeed_SelDial = 0;/* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_LimCheck_Com_Issue_Dial =
    0;                                 /* Referenced by:
                                        * '<S114>/Calib'
                                        * '<S141>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_LimCheck_Com_Issue_Slct =
    1;                                 /* Referenced by:
                                        * '<S115>/Calib'
                                        * '<S142>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT)
    KeTAPR_b_LimCheck_EngStartStopSt_Dial = 0;/* Referenced by:
                                               * '<S116>/Calib'
                                               * '<S143>/Calib'
                                               */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT)
    KeTAPR_b_LimCheck_EngStartStopSt_Slct = 1;/* Referenced by:
                                               * '<S117>/Calib'
                                               * '<S144>/Calib'
                                               */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_LimCheck_MtrAB_Spd_Dial =
    0;                                 /* Referenced by:
                                        * '<S118>/Calib'
                                        * '<S145>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_LimCheck_MtrAB_Spd_Slct =
    1;                                 /* Referenced by:
                                        * '<S119>/Calib'
                                        * '<S146>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_LimCheck_OutSpd_Dial = 0;/* Referenced by:
                                                                      * '<S120>/Calib'
                                                                      * '<S147>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_LimCheck_OutSpd_Slct = 1;/* Referenced by:
                                                                      * '<S121>/Calib'
                                                                      * '<S148>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_LimCheck_RunCrnkActv_Dial
    = 0;                               /* Referenced by:
                                        * '<S122>/Calib'
                                        * '<S149>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_LimCheck_RunCrnkActv_Slct
    = 1;                               /* Referenced by:
                                        * '<S123>/Calib'
                                        * '<S150>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_LimCheckingStatus_Dial =
    0;                                 /* Referenced by: '<S153>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_LimCheckingStatus_SelDial
    = 0;                               /* Referenced by: '<S154>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_LostCommECM_FADial = 0;/* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_LostCommTrans_FADial = 0;/* Referenced by: '<S53>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_2

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_MotorAFlowEstimationFA_NF
    = 0;                               /* Referenced by: '<S433>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_2

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_MotorBFlowEstimationFA_NF
    = 0;                               /* Referenced by: '<S435>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_MtrA_SpdFA_Dial = 0;/* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_MtrA_SpdFA_SelDial = 0;/* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_MtrA_Spd_SelDial = 0;/* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_MtrB_SpdFA_Dial = 0;/* Referenced by: '<S66>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_MtrB_SpdFA_SelDial = 0;/* Referenced by: '<S67>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_MtrB_Spd_SelDial = 0;/* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_OAT_PT_Est_SelDial = 0;/* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT)
    KeTAPR_b_PumpSpdCmnd_RPM_AllComb_SelDial = 0;/* Referenced by: '<S272>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_RelaySelect = 0;/* Referenced by: '<S228>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_RunCrankActive_Dial = 0;/* Referenced by: '<S71>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_RunCrankActive_SelDial =
    0;                                 /* Referenced by: '<S72>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_StrtCntrlStOn_Dial = 0;/* Referenced by: '<S75>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_StrtCntrlStOn_SelDial = 0;/* Referenced by: '<S76>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_TransAuxPmp_RelySts_Dial =
    0;                                 /* Referenced by: '<S10>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_2

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_TransAuxPmp_RelySts_NF =
    0;                                 /* Referenced by: '<S429>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_TransAuxPump_NotFlty_Dial
    = 0;                               /* Referenced by: '<S211>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_2

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_TransAuxPump_NotFlty_NF =
    0;                                 /* Referenced by: '<S430>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT)
    KeTAPR_b_TransAuxPump_NotFlty_SelDial = 0;/* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_TransFldPmpCmd_SelDial =
    0;                                 /* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_TransMnPressCmd_SelDial =
    0;                                 /* Referenced by: '<S45>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT)
    KeTAPR_b_TransOutputSpdSgndFltrd_SelDial = 0;/* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(boolean, TAPR_VAR_INIT) KeTAPR_b_UseRunCrnkForBoundChk = 0;/* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_2

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_dV_GenFlowEst_NF = 0.0F;/* Referenced by: '<S432>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_dV_MinFlowRequired = 0.05F;/* Referenced by: '<S250>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_2

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_dV_MotorAFlowEstimation_NF =
    0.0F;                              /* Referenced by: '<S431>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_2

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_dV_MotorBFlowEstimation_NF =
    0.0F;                              /* Referenced by: '<S434>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(TeTAPR_e_TransAuxPmp_PostRunCmd, TAPR_VAR_INIT)
    KeTAPR_e_AuxPump2PostRunCmd = CeTAPR_e_TAP_PostRunCmd_NoPostRun;/* Referenced by: '<S304>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(TeESSR_e_EngStartStopSt, TAPR_VAR_INIT)
    KeTAPR_e_EngStartStopSt_Dial = CeESSR_e_EngOff;/* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_2

static volatile CONST(TeTAPR_e_TransAuxPmp_PostRunCmd, TAPR_VAR_INIT)
    KeTAPR_e_TransAuxPmp2_PostRunCmd_NF = CeTAPR_e_TAP_PostRunCmd_NoPostRun;/* Referenced by: '<S437>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(TeTAPR_e_TransAuxPmp_PostRunCmd, TAPR_VAR_INIT)
    KeTAPR_e_TransAuxPmp_PostRunCmd_Dial = CeTAPR_e_TAP_PostRunCmd_NoPostRun;/* Referenced by: '<S11>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_2

static volatile CONST(TeTAPR_e_TransAuxPmp_PostRunCmd, TAPR_VAR_INIT)
    KeTAPR_e_TransAuxPmp_PostRunCmd_NF = CeTAPR_e_TAP_PostRunCmd_NoPostRun;/* Referenced by: '<S438>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(TeESSR_e_TransFldPumpSel, TAPR_VAR_INIT)
    KeTAPR_e_TransFldPmpCmd_Dial = CeESSR_e_On;/* Referenced by: '<S86>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_2

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_f_ElecOilPmp_RlyFreq_NF =
    0.0F;                              /* Referenced by: '<S439>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_f_RelayFrequency = 1000.0F;/* Referenced by: '<S229>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_AuxPump2SpdCmd_D =
    3000.0F;                           /* Referenced by: '<S305>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_AuxPump2SpdMin = 0.0F;/* Referenced by: '<S282>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_AuxPumpConstSpdDsrd =
    3500.0F;                           /* Referenced by: '<S273>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_AuxPumpMaxThrsh = 600.0F;/* Referenced by: '<S383>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_AuxPumpMinThrsh = 300.0F;/* Referenced by: '<S384>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_AuxPumpOffSpdCmnd = 0.0F;/* Referenced by:
                                                                      * '<S290>/Calib'
                                                                      * '<S274>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_AuxPumpRPMMinAllowed =
    800.0F;                            /* Referenced by: '<S277>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_AuxPumpSpdCmndMin =
    800.0F;                            /* Referenced by: '<S278>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_AuxPumpSpdDsrd_Dial =
    0.0F;                              /* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_AuxPumpSpdFltrd_Dial =
    0.0F;                              /* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_2

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_AuxPumpSpdFltrd_NF = 0.0F;/* Referenced by: '<S440>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_AuxPumpSpdMin = 0.0F;/* Referenced by: '<S264>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_AuxPumpSpd_Cmd_Dial =
    0.0F;                              /* Referenced by: '<S348>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_AuxPumpSpd_CmndRaw_Dial =
    0.0F;                              /* Referenced by: '<S291>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_EOPA_DryRunMin = 800.0F;/* Referenced by: '<S349>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_EOPB_DryRunMin = 800.0F;/* Referenced by: '<S306>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_EOPFault_Off = 0.0F;/* Referenced by: '<S239>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_EOP_A_EmergencyRunCommand
    = 6000.0F;                         /* Referenced by: '<S314>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_EOP_B_EmergencyRunCommand
    = 6000.0F;                         /* Referenced by: '<S330>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_2

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_EOP_DesiredSpd_NF = 0.0F;/* Referenced by: '<S436>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_EOP_Off = 0.0F;/* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_InputSpdLim = 3000.0F;/* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_InputSpeed_Dial = 0.0F;/* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT)
    KeTAPR_n_LowerSpdThreshforAuxCmdSpd = 15.0F;/* Referenced by: '<S389>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_MaxAuxPumpSpd = 2000.0F;/* Referenced by: '<S269>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_MtrA_Spd_Dial = 0.0F;/* Referenced by: '<S59>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_MtrB_Spd_Dial = 0.0F;/* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_MtrSpdZero = 5.0F;/* Referenced by:
                                                                      * '<S125>/Calib'
                                                                      * '<S152>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT)
    KeTAPR_n_PumpSpdCmnd_RPM_AllComb_Dial = 0.0F;/* Referenced by: '<S275>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_PumpSpdPrime_Req = 0.0F;/* Referenced by: '<S292>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_TAP2DownLim = 0.0F;/* Referenced by: '<S331>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_TAP2Incrs_High = 1000.0F;/* Referenced by: '<S332>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_TAP2Incrs_Low = -1000.0F;/* Referenced by: '<S333>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_TAP2MinSpdCmd = 0.0F;/* Referenced by: '<S334>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_TAP2UpLim = 6400.0F;/* Referenced by: '<S335>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_TAPDownLim = 0.0F;/* Referenced by: '<S315>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_TAPIncrs_High = 1000.0F;/* Referenced by: '<S316>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_TAPIncrs_Low = -1000.0F;/* Referenced by: '<S317>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_TAPMinSpdCmd = 0.0F;/* Referenced by: '<S318>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_TAPUpLim = 6400.0F;/* Referenced by: '<S319>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_2

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_TransAuxPmp2_SpdCmd_NF =
    0.0F;                              /* Referenced by: '<S441>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_2

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_n_TransAuxPmp_Cmd_NF = 0.0F;/* Referenced by: '<S442>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT)
    KeTAPR_n_TransOutputSpdSgndFltrd_Dial = 0.0F;/* Referenced by: '<S90>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_p_MnLnPresToTurnOff =
    1100.0F;                           /* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_p_MnLnPresToTurnOn = 900.0F;/* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_p_TransMnPressCmd_Dial =
    0.0F;                              /* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT)
    KeTAPR_t_AuxPumpLowVoltDetectTimeOff = 0.25F;/* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_t_AuxPumpMaxTmThrsh = 0.15F;/* Referenced by: '<S385>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_t_AuxPumpRunningHold =
    0.35F;                             /* Referenced by:
                                        * '<S408>/Calib'
                                        * '<S400>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_t_AuxPumpRunning_TrueCrank =
    1.2F;                              /* Referenced by: '<S421>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(uint16, TAPR_VAR_INIT) KeTAPR_t_EOPA_StartUpTimer = 5U;/* Referenced by: '<S350>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(uint16, TAPR_VAR_INIT) KeTAPR_t_EOPA_SteadyStateSampler =
    5U;                                /* Referenced by: '<S351>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(uint16, TAPR_VAR_INIT) KeTAPR_t_EOPB_StartUpTimer = 5U;/* Referenced by: '<S307>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(uint16, TAPR_VAR_INIT) KeTAPR_t_EOPB_SteadyStateSampler =
    5U;                                /* Referenced by: '<S308>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_t_STRRKeyStrtEng_Pulse =
    0.5F;                              /* Referenced by: '<S207>/Calib' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KeTAPR_t_dT = 0.0125F;/* Referenced by:
                                                                     * '<S208>/Calib'
                                                                     * '<S409>/Calib'
                                                                     * '<S422>/Calib'
                                                                     * '<S204>/Calib'
                                                                     * '<S375>/Calib'
                                                                     * '<S386>/Calib'
                                                                     * '<S401>/Calib'
                                                                     */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KtTAPR_K_AuxPump2VolumetricEff[25]
    =
{
    0.88F, 0.89F, 0.895F, 0.9F, 0.91F, 0.87F, 0.88F, 0.885F, 0.89F, 0.9F, 0.85F,
    0.86F, 0.865F, 0.875F, 0.88F, 0.84F, 0.85F, 0.855F, 0.86F, 0.87F, 0.83F,
    0.84F, 0.845F, 0.85F, 0.86F
} ;                                    /* Referenced by:
                                        * '<S217>/Vector'
                                        * '<S283>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KtTAPR_K_AuxPumpVolumetricEff[25] =
{
    0.88F, 0.89F, 0.895F, 0.9F, 0.91F, 0.87F, 0.88F, 0.885F, 0.89F, 0.9F, 0.85F,
    0.86F, 0.865F, 0.875F, 0.88F, 0.84F, 0.85F, 0.855F, 0.86F, 0.87F, 0.83F,
    0.84F, 0.845F, 0.85F, 0.86F
} ;                                    /* Referenced by:
                                        * '<S218>/Vector'
                                        * '<S265>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KtTAPR_K_MechOilPumpVolEff[15] =
{
    0.824175775F, 0.897435F, 0.769230723F, 0.961538374F, 0.993589699F, 0.977564F,
    0.869963288F, 0.929487109F, 0.945512772F, 0.732600689F, 0.833333313F,
    0.897436F, 0.59523809F, 0.641025603F, 0.801282108F
} ;                                    /* Referenced by: '<S219>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KtTAPR_Pct_AuxSpdMod[20] =
{
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F
} ;                                    /* Referenced by: '<S293>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KtTAPR_Pct_AuxSpdModCurr[10] =
{
    0.0F, 19.8F, 31.25F, 38.75F, 46.25F, 53.75F, 61.25F, 68.75F, 76.25F, 83.75F
} ;                                    /* Referenced by: '<S294>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KtTAPR_Pct_EOP_Spd_2_PWM[32] =
{
    43.0F, 43.0F, 43.0F, 43.0F, 60.1F, 43.0F, 43.0F, 43.0F, 85.0F, 43.0F, 43.0F,
    43.0F, 85.0F, 43.6F, 43.0F, 43.0F, 85.0F, 55.8F, 52.2F, 49.3F, 85.0F, 64.4F,
    59.3F, 55.9F, 85.0F, 74.0F, 67.9F, 63.7F, 85.0F, 85.0F, 85.0F, 85.0F
} ;                                    /* Referenced by: '<S257>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KtTAPR_dn_AuxPumpLU[20] =
{
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F, 100.0F,
    100.0F, 100.0F
} ;                                    /* Referenced by: '<S295>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KtTAPR_n_AuxPump2SpdMax[10] =
{
    1816.0F, 2600.0F, 3384.0F, 3744.0F, 4104.0F, 4344.0F, 4512.0F, 4776.0F,
    4968.0F, 4500.0F
} ;                                    /* Referenced by: '<S284>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KtTAPR_n_AuxPumpSpdCmndMax[10] =
{
    1816.0F, 2600.0F, 3384.0F, 3744.0F, 4104.0F, 4344.0F, 4512.0F, 4776.0F,
    4968.0F, 4500.0F
} ;                                    /* Referenced by: '<S279>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KtTAPR_n_AuxPumpSpdMax[6] =
{
    500.0F, 800.0F, 2200.0F, 3000.0F, 3500.0F, 3500.0F
} ;                                    /* Referenced by: '<S266>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KtTAPR_n_AuxSpdCmnd[10] =
{
    0.0F, 2000.0F, 2000.0F, 2000.0F, 2000.0F, 2000.0F, 2000.0F, 2000.0F, 2000.0F,
    2000.0F
} ;                                    /* Referenced by: '<S296>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KtTAPR_n_EOP_Flw_2_Spd[32] =
{
    1216.0F, 2158.0F, 2322.0F, 2528.0F, 1582.0F, 2158.0F, 2322.0F, 2528.0F,
    1860.0F, 2225.0F, 2322.0F, 2528.0F, 1860.0F, 2780.0F, 2923.0F, 3079.0F,
    1860.0F, 3320.0F, 3521.0F, 3716.0F, 1860.0F, 3920.0F, 4137.0F, 4374.0F,
    1860.0F, 4496.0F, 4757.0F, 5034.0F, 1860.0F, 4577.0F, 4961.0F, 5205.0F
} ;                                    /* Referenced by: '<S258>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KtTAPR_t_AuxPumpRunningDelay[20] =
{
    5.0F, 3.0F, 2.0F, 1.0F, 4.0F, 2.0F, 1.0F, 0.75F, 2.0F, 1.0F, 0.5F, 0.5F,
    1.0F, 0.5F, 0.15F, 0.15F, 0.15F, 0.15F, 0.15F, 0.15F
} ;                                    /* Referenced by: '<S376>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KxTAPR_K_AuxPump2VolumetricEff[5] =
{
    -40.0F, 0.0F, 32.0F, 74.0F, 130.0F
} ;                                    /* Referenced by:
                                        * '<S217>/Vector'
                                        * '<S283>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KxTAPR_K_AuxPumpVolumetricEff[5] =
{
    -40.0F, 0.0F, 32.0F, 74.0F, 130.0F
} ;                                    /* Referenced by:
                                        * '<S218>/Vector'
                                        * '<S265>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KxTAPR_K_MechOilPumpVolEff[3] =
{
    1400.0F, 2000.0F, 4000.0F
} ;                                    /* Referenced by: '<S219>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KxTAPR_Pct_AuxSpdMod[4] =
{
    20.0F, 39.0F, 61.0F, 80.0F
} ;                                    /* Referenced by: '<S293>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KxTAPR_Pct_AuxSpdModCurr[10] =
{
    0.0F, 0.1F, 0.2F, 0.3F, 0.5F, 0.8F, 1.5F, 2.5F, 4.0F, 5.0F
} ;                                    /* Referenced by: '<S294>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KxTAPR_Pct_EOP_Spd_2_PWM[4] =
{
    -11.0F, 40.0F, 80.0F, 120.0F
} ;                                    /* Referenced by: '<S257>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KxTAPR_dn_AuxPumpLU[4] =
{
    20.0F, 39.0F, 61.0F, 80.0F
} ;                                    /* Referenced by: '<S295>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KxTAPR_n_AuxPump2SpdMax[10] =
{
    -40.0F, -20.0F, 0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F, 125.0F, 140.0F
} ;                                    /* Referenced by: '<S284>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KxTAPR_n_AuxPumpSpdCmndMax[10] =
{
    -40.0F, -20.0F, 0.0F, 20.0F, 40.0F, 60.0F, 80.0F, 100.0F, 125.0F, 140.0F
} ;                                    /* Referenced by: '<S279>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KxTAPR_n_AuxPumpSpdMax[6] =
{
    -40.0F, 0.1F, 32.0F, 74.0F, 130.0F, 150.0F
} ;                                    /* Referenced by: '<S266>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KxTAPR_n_AuxSpdCmnd[10] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 100.0F
} ;                                    /* Referenced by: '<S296>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KxTAPR_n_EOP_Flw_2_Spd[4] =
{
    -11.0F, 40.0F, 80.0F, 120.0F
} ;                                    /* Referenced by: '<S258>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KxTAPR_t_AuxPumpRunningDelay[4] =
{
    0.0F, 20.0F, 39.0F, 61.0F
} ;                                    /* Referenced by: '<S376>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KyTAPR_K_AuxPump2VolumetricEff[5] =
{
    500.0F, 1000.0F, 1500.0F, 2500.0F, 3500.0F
} ;                                    /* Referenced by:
                                        * '<S217>/Vector'
                                        * '<S283>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KyTAPR_K_AuxPumpVolumetricEff[5] =
{
    500.0F, 1000.0F, 1500.0F, 2500.0F, 3500.0F
} ;                                    /* Referenced by:
                                        * '<S218>/Vector'
                                        * '<S265>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KyTAPR_K_MechOilPumpVolEff[5] =
{
    0.0F, 10.0F, 40.0F, 80.0F, 130.0F
} ;                                    /* Referenced by: '<S219>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KyTAPR_Pct_AuxSpdMod[5] =
{
    20.0F, 50.0F, 60.0F, 70.0F, 80.0F
} ;                                    /* Referenced by: '<S293>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KyTAPR_Pct_EOP_Spd_2_PWM[8] =
{
    1216.0F, 1700.0F, 1900.0F, 2200.0F, 3000.0F, 3500.0F, 4000.0F, 5205.0F
} ;                                    /* Referenced by: '<S257>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KyTAPR_dn_AuxPumpLU[5] =
{
    300.0F, 1000.0F, 1500.0F, 2500.0F, 3500.0F
} ;                                    /* Referenced by: '<S295>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KyTAPR_n_EOP_Flw_2_Spd[8] =
{
    0.0333333313F, 0.05F, 0.0666666701F, 0.0833333358F, 0.1F, 0.116666667F,
    0.13333334F, 0.138833329F
} ;                                    /* Referenced by: '<S258>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static volatile CONST(float32, TAPR_VAR_INIT) KyTAPR_t_AuxPumpRunningDelay[5] =
{
    -17.0F, -10.0F, -7.0F, 0.0F, 20.0F
} ;                                    /* Referenced by: '<S376>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_TAPR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TAPR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(float32, TAPR_VAR_INIT) VeTAPR_Pct_ClsdLp_PWM_Raw;/* '<S252>/Switch1' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(float32, TAPR_VAR_INIT) VeTAPR_Pct_EOP_OpLp_PWM;/* '<S257>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(boolean, TAPR_VAR_INIT) VeTAPR_b_AuxPumpAvail_OBCM;/* '<S156>/Comparison2' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(boolean, TAPR_VAR_INIT) VeTAPR_b_AuxPumpAvail_Voltage;/* '<S196>/Logical3' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(boolean, TAPR_VAR_INIT) VeTAPR_b_AuxPumpRunning_B4Dial;/* '<S161>/Gain' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(boolean, TAPR_VAR_INIT) VeTAPR_b_BoundChkPass;/* '<S155>/Logical3' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(boolean, TAPR_VAR_INIT) VeTAPR_b_ChkPmpDVC_Limits_AM2;/* '<S91>/Merge' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(boolean, TAPR_VAR_INIT) VeTAPR_b_KeyStrtEngAvailFlag;/* '<S175>/Logical2' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(boolean, TAPR_VAR_INIT) VeTAPR_b_LimChck_Com_Issue_AD;/* '<S103>/Switch' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(boolean, TAPR_VAR_INIT) VeTAPR_b_LimChck_EngStartStopSt_AD;/* '<S104>/Switch' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(boolean, TAPR_VAR_INIT) VeTAPR_b_LimChck_MtrAB_Spd_AD;/* '<S106>/Switch' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(boolean, TAPR_VAR_INIT) VeTAPR_b_LimChck_OutSpd_AD;/* '<S107>/Switch' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(boolean, TAPR_VAR_INIT) VeTAPR_b_LimChck_RunCrnkActv_AD;/* '<S108>/Switch' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(boolean, TAPR_VAR_INIT) VeTAPR_b_LimCheckingStatus_AD;/* '<S92>/Switch' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(boolean, TAPR_VAR_INIT) VeTAPR_b_TransAuxPump_NotFlty_AD;/* '<S157>/Switch' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(float32, TAPR_VAR_INIT) VeTAPR_dV_GenOilFlowEst;/* '<S158>/Product3' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(float32, TAPR_VAR_INIT) VeTAPR_n_AuxPumpFltrd_B4Dial;/* '<S354>/Merge' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(float32, TAPR_VAR_INIT) VeTAPR_n_AuxPumpSpdCmndLtd;/* '<S280>/Switch' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(float32, TAPR_VAR_INIT) VeTAPR_n_AuxPumpSpdCmndMax;/* '<S279>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(float32, TAPR_VAR_INIT) VeTAPR_n_AuxPumpSpdCmnd_AllComb;/* '<S260>/Switch' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(float32, TAPR_VAR_INIT) VeTAPR_n_AuxPumpSpd_Cmnd_Raw;/* '<S163>/Switch' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(float32, TAPR_VAR_INIT) VeTAPR_n_AuxPumpSpd_NoLim;/* '<S259>/Product2' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(float32, TAPR_VAR_INIT) VeTAPR_n_EOP_DsrdSpd;/* '<S258>/Vector' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(float32, TAPR_VAR_INIT) VeTAPR_n_HCCR_AuxPumpSpdDsrd_convrtd;/* '<S268>/Multiplication' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(float32, TAPR_VAR_INIT) VeTAPR_n_TAP2ActualCmd_BG;/* '<S336>/Switch' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(float32, TAPR_VAR_INIT) VeTAPR_n_TAP_AuxPump2SpdCmd;/* '<S164>/Switch2' */

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static VAR(float32, TAPR_VAR_INIT) VeTAPR_n_TAP_AuxPumpSpdCmd;/* '<S167>/Switch2' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TAPR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TAPR
#include "MemMap.h"

CONST(ConstP_TAPR_ac_T, TAPR_VAR_INIT) TAPR_ac_ConstP =
{

#if Rte_SysCon_Variant_TAPR_FUNC_1

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S219>/Vector'
     */
    {
        2U, 4U
    },

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S217>/Vector'
     *   '<S218>/Vector'
     *   '<S265>/Vector'
     *   '<S283>/Vector'
     */
    {
        4U, 4U
    },

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S257>/Vector'
     *   '<S258>/Vector'
     */
    {
        3U, 7U
    },

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S293>/Vector'
     *   '<S295>/Vector'
     *   '<S376>/Vector'
     */
    {
        3U, 4U
    },

#endif

#ifndef CONSTP_TAPR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_TAPR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TAPR
#include "MemMap.h"

VAR(B_TAPR_ac_T, TAPR_VAR_INIT) TAPR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TAPR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TAPR
#include "MemMap.h"

VAR(DW_TAPR_ac_T, TAPR_VAR_INIT) TAPR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TAPR
#include "MemMap.h"
#if Rte_SysCon_Variant_TAPR_FUNC_1

static FUNC(void, TAPR_CODE_LOCAL) TAPR_ac_CheckDVCLimits1(P2VAR(boolean,
    AUTOMATIC, TAPR_VAR_INIT) rty_True);

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static FUNC(void, TAPR_CODE_LOCAL) TAPR_ac_CheckDVCLimits1_e(P2VAR(boolean,
    AUTOMATIC, TAPR_VAR_INIT) rty_False);

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static FUNC(void, TAPR_CODE_LOCAL) TAPR_ac_PassThrough(VAR(float32, AUTOMATIC)
    rtu_In1, P2VAR(float32, AUTOMATIC, TAPR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

static FUNC(void, TAPR_CODE_LOCAL) TAPR_ac_Entry_Subsystem(P2VAR(boolean,
    AUTOMATIC, TAPR_VAR_INIT) rty_AuxpumpRunning);

#endif

/*
 * Output and update for action system:
 *    '<S95>/CheckDVCLimits1'
 *    '<S96>/CheckDVCLimits1'
 */
#if Rte_SysCon_Variant_TAPR_FUNC_1

static FUNC(void, TAPR_CODE_LOCAL) TAPR_ac_CheckDVCLimits1(P2VAR(boolean,
    AUTOMATIC, TAPR_VAR_INIT) rty_True)
{
    /* SignalConversion generated from: '<S99>/True' incorporates:
     *  Constant: '<S99>/TRUEConstant'
     */
    *rty_True = true;
}

#endif

/*
 * Output and update for action system:
 *    '<S91>/CheckDVCLimits1'
 *    '<S91>/CheckDVCLimits2'
 */
#if Rte_SysCon_Variant_TAPR_FUNC_1

static FUNC(void, TAPR_CODE_LOCAL) TAPR_ac_CheckDVCLimits1_e(P2VAR(boolean,
    AUTOMATIC, TAPR_VAR_INIT) rty_False)
{
    /* SignalConversion generated from: '<S93>/False' incorporates:
     *  Constant: '<S93>/Constant12'
     */
    *rty_False = false;
}

#endif

/*
 * Output and update for action system:
 *    '<S354>/PassThrough'
 *    '<S354>/AuxPump_NOTfltrd'
 */
#if Rte_SysCon_Variant_TAPR_FUNC_1

static FUNC(void, TAPR_CODE_LOCAL) TAPR_ac_PassThrough(VAR(float32, AUTOMATIC)
    rtu_In1, P2VAR(float32, AUTOMATIC, TAPR_VAR_INIT) rty_Out1)
{
    /* Inport: '<S382>/In1' */
    *rty_Out1 = rtu_In1;
}

#endif

/*
 * Output and update for action system:
 *    '<S357>/Entry_Subsystem'
 *    '<S357>/Else_Condition'
 *    '<S168>/TAPNotRunning'
 */
#if Rte_SysCon_Variant_TAPR_FUNC_1

static FUNC(void, TAPR_CODE_LOCAL) TAPR_ac_Entry_Subsystem(P2VAR(boolean,
    AUTOMATIC, TAPR_VAR_INIT) rty_AuxpumpRunning)
{
    /* SignalConversion generated from: '<S393>/AuxpumpRunning' incorporates:
     *  Constant: '<S393>/FALSEConstant'
     */
    *rty_AuxpumpRunning = false;
}

#endif

/* Model step function for TID1 */
FUNC(void, TAPR_CODE) TAPR_MedTED(void) /* Explicit Task: MedTED */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 rtb_TmpSignalConversionAtVePMIR_n_AuxPum;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    TeOBCR_e_ChargingLevel tmpRead_0;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    TeESSR_e_TransFldPumpSel tmpRead_1;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    TeTAIR_e_IO_CntrlSt tmpRead_2;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 tmpRead_4;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    TeTAPR_e_TransAuxPmp_StallEvnt tmpRead_5;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    TeTAPR_e_TransAuxPmp_FalseTrueSNA tmpRead_6;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    TeTHMR_e_OilPumpEmrgCoolState tmpRead_7;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    TeTHMR_e_OilPumpEmrgCoolState tmpRead_8;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    TeTAIR_e_IO_CntrlSt tmpRead_9;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 tmpRead_a;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    TeTAIR_e_IO_CntrlSt tmpRead_b;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 tmpRead_c;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    boolean rtb_Logical4;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 rtb_TmpSignalConversionAtVeTHMR_dV_MtrB_;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    boolean rtb_LessThan3;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    boolean rtb_LessThan3_n;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    boolean rtb_Logical8;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 rtb_Switch_e4;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    boolean rtb_Switch_oh;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 rtb_Switch_a2;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    boolean rtb_Switch_aw;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 rtb_Switch_a4;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 rtb_TmpSignalConversionAtVeTFTR_T_TransO;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    boolean rtb_AND_i3;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 rtb_TmpSignalConversionAtVePMIR_T_TransA;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    boolean rtb_NotEqual;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 rtb_Switch1;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    boolean rtb_OR1_lm;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    boolean rtb_OR1_ld;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 rtb_Vector_l;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    boolean rtb_OR1_do;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 rtb_Vector_h;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 rtb_TmpSignalConversionAtVePMIR_T_Tran_f;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 rtb_TmpSignalConversionAtVePMIR_n_TransA;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    TePMDR_e_PowerMode rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    TePMTR_e_ThrmlDevisEnbl rtb_TmpSignalConversionAtVePMTR_e_ThrmlD;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 Switch;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    boolean Switch_mw;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 Switch_g;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 Switch_gi;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    float32 Switch_gs;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    TeESSR_e_EngStartStopSt Switch_p;

#endif

#if Rte_SysCon_Variant_TAPR_FUNC_1

    boolean tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/TAPR_FUNC_MedTED'
     */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolLvlLow2' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Fdbck_SigRan'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Fdbck_SigRan_Value
        (&TAPR_ac_DW.StatusByte_Aux_TF_Pmp_CM_Fdbck_SigRan);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolLvlLow1' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Fdbck'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Fdbck_Value
        (&TAPR_ac_DW.StatusByte_Aux_TF_Pmp_CM_Ckt);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_BattCoolLvlLow' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Ckt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_Aux_TF_Pmp_CM_Ckt_Value
        (&TAPR_ac_DW.StatusByte_Aux_TF_Pmp_CM_Fdbck);

    /* SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp' incorporates:
     *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
     *  Inport: '<Root>/VeBSWR_b_LimCheckingStatus'
     *  Inport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd'
     *  Inport: '<Root>/VeESPR_n_EngineSpeed'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  Inport: '<Root>/VeESSR_e_TransFldPmpCmd'
     *  Inport: '<Root>/VeHCCR_Pct_AuxPumpSpdDsrd'
     *  Inport: '<Root>/VeHCCR_n_AuxPumpSpdDsrd'
     *  Inport: '<Root>/VeHCCR_p_TransMnPressCmd'
     *  Inport: '<Root>/VeMSPR_b_MtrA_SpdFA'
     *  Inport: '<Root>/VeMSPR_b_MtrB_SpdFA'
     *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
     *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     *  Inport: '<Root>/VePMDR_U_IgnRunCrnk'
     *  Inport: '<Root>/VePMDR_b_RunCrankActive'
     *  Inport: '<Root>/VePMDR_b_StrtCntrlStOn'
     *  Inport: '<Root>/VePMIR_I_TransAuxPumpCurrent'
     *  Inport: '<Root>/VePMIR_Pct_PWM_EOP_IOCtrlSpd'
     *  Inport: '<Root>/VePMIR_T_TransAuxPumpTemp'
     *  Inport: '<Root>/VePMIR_e_PWM_EOP_IOCtrlMode'
     *  Inport: '<Root>/VePMIR_e_TAP2_SpdDsrd_IO_CntrlSt'
     *  Inport: '<Root>/VePMIR_e_TAP_SpdDsrd_IO_CntrlSt'
     *  Inport: '<Root>/VePMIR_n_EOP_SpeedFdbk'
     *  Inport: '<Root>/VeSTRR_b_EngOnReq'
     *  Inport: '<Root>/VeTHMR_dV_MtrA_CoolFlwCmd'
     *  Inport: '<Root>/VeTHMR_e_EOP_A_EmrgCoolState'
     *  Inport: '<Root>/VeTHMR_e_EOP_B_EmrgCoolState'
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     *  SignalConversion generated from: '<S1>/AuxPumpRunning_AftDial'
     *  SignalConversion generated from: '<S1>/AuxPumpSpdFltrd_AftDial'
     *  SignalConversion generated from: '<S1>/AuxPumpSpd_CmndRPM_AftDial'
     *  SignalConversion generated from: '<S1>/GenOilFlw'
     *  SignalConversion generated from: '<S1>/TransAuxPmp2_PostRunCmd'
     *  SignalConversion generated from: '<S1>/TransAuxPmp2_SpdCmd'
     *  SignalConversion generated from: '<S1>/TransAuxPmp_PostRunCmd_AD'
     *  SignalConversion generated from: '<S1>/TransAuxPmp_RelySts'
     *  SignalConversion generated from: '<S1>/TransAuxPump_NotFlty'
     *  SignalConversion generated from: '<S1>/VeTAPR_Pct_ElecOilPmp_Cmd'
     *  SignalConversion generated from: '<S1>/VeTAPR_Pct_ElecOilPmp_RlyCmd'
     *  SignalConversion generated from: '<S1>/VeTAPR_b_MtrA_OilFlwActFA'
     *  SignalConversion generated from: '<S1>/VeTAPR_b_MtrB_OilFlwActFA'
     *  SignalConversion generated from: '<S1>/VeTAPR_dV_MtrA_OilFlwAct'
     *  SignalConversion generated from: '<S1>/VeTAPR_dV_MtrB_OilFlwAct'
     *  SignalConversion generated from: '<S1>/VeTAPR_f_ElecOilPmp_RlyFreq'
     *  SignalConversion generated from: '<S1>/VeTAPR_n_KMHEVDesiredSpeed'
     *  SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode'
     *  SignalConversion generated from: '<S1>/VePMIR_T_TransAuxPump2OilTemp'
     *  SignalConversion generated from: '<S1>/VePMIR_T_TransAuxPumpOilTemp'
     *  SignalConversion generated from: '<S1>/VePMIR_n_AuxPumpSpdAct'
     *  SignalConversion generated from: '<S1>/VePMIR_n_TransAuxPump2SpdAct'
     *  SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl'
     *  SignalConversion generated from: '<S1>/VeTHMR_dV_MtrB_CoolFlwCmd'
     */
#if Rte_SysCon_Variant_TAPR_FUNC_1

    /* S-Function (fcgen): '<S1>/FcnCallGen' */
    /* SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp' incorporates:
     *  Inport: '<Root>/VeTFTR_T_TransOilTemp'
     */
    (void)Rte_Read_VeTFTR_T_TransOilTemp_Value
        (&rtb_TmpSignalConversionAtVeTFTR_T_TransO);

    /* SignalConversion generated from: '<S1>/VePMIR_n_AuxPumpSpdAct' incorporates:
     *  Inport: '<Root>/VePMIR_n_AuxPumpSpdAct'
     */
    (void)Rte_Read_VePMIR_n_AuxPumpSpdAct_Value
        (&rtb_TmpSignalConversionAtVePMIR_n_AuxPum);

    /* SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode' incorporates:
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value
        (&rtb_TmpSignalConversionAtVePMDR_e_PMM_Po);

    /* SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl' incorporates:
     *  Inport: '<Root>/VePMTR_e_ThrmlDevEnbl'
     */
    (void)Rte_Read_VePMTR_e_ThrmlDevEnbl_Value
        (&rtb_TmpSignalConversionAtVePMTR_e_ThrmlD);

    /* SignalConversion generated from: '<S1>/VeTHMR_dV_MtrB_CoolFlwCmd' incorporates:
     *  Inport: '<Root>/VeTHMR_dV_MtrB_CoolFlwCmd'
     */
    (void)Rte_Read_VeTHMR_dV_MtrB_CoolFlwCmd_Value
        (&rtb_TmpSignalConversionAtVeTHMR_dV_MtrB_);

    /* SignalConversion generated from: '<S1>/VePMIR_T_TransAuxPumpOilTemp' incorporates:
     *  Inport: '<Root>/VePMIR_T_TransAuxPumpOilTemp'
     */
    (void)Rte_Read_VePMIR_T_TransAuxPumpOilTemp_Value
        (&rtb_TmpSignalConversionAtVePMIR_T_TransA);

    /* SignalConversion generated from: '<S1>/VePMIR_T_TransAuxPump2OilTemp' incorporates:
     *  Inport: '<Root>/VePMIR_T_TransAuxPump2OilTemp'
     */
    (void)Rte_Read_VePMIR_T_TransAuxPump2OilTemp_Value
        (&rtb_TmpSignalConversionAtVePMIR_T_Tran_f);

    /* SignalConversion generated from: '<S1>/VePMIR_n_TransAuxPump2SpdAct' incorporates:
     *  Inport: '<Root>/VePMIR_n_TransAuxPump2SpdAct'
     */
    (void)Rte_Read_VePMIR_n_TransAuxPump2SpdAct_Value
        (&rtb_TmpSignalConversionAtVePMIR_n_TransA);
    (void)Rte_Read_VePMIR_e_TAP_SpdDsrd_IO_CntrlSt_Value(&tmpRead_2);
    (void)Rte_Read_VeBSWR_b_LimCheckingStatus_Value
        ((&(VeTAPR_b_LimCheckingStatus_AD)));
    (void)Rte_Read_VeESSR_e_TransFldPmpCmd_Value(&tmpRead_1);
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value(&Switch_p);
    (void)Rte_Read_VeCSVR_n_TransOutSpdSgndFltrd_Value(&rtb_Switch_a4);
    (void)Rte_Read_VePMDR_b_StrtCntrlStOn_Value(&rtb_Logical4);
    (void)Rte_Read_VePMDR_U_IgnRunCrnk_Value(&Switch_g);
    (void)Rte_Read_VePMDR_b_RunCrankActive_Value(&Switch_mw);
    (void)Rte_Read_VeMSPR_b_MtrB_SpdFA_Value(&rtb_Switch_aw);
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value(&rtb_Switch_a2);
    (void)Rte_Read_VeMSPR_b_MtrA_SpdFA_Value(&rtb_Switch_oh);
    (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value(&rtb_Switch_e4);
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value(&Switch);
    (void)Rte_Read_VeSTRR_b_EngOnReq_Value(&rtb_AND_i3);

    /* Outputs for Function Call SubSystem: '<S1>/Subsystem8' */
    /* Switch: '<S78>/Switch' incorporates:
     *  Constant: '<S82>/Calib'
     *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
     *  Inport: '<Root>/VeBSWR_b_LimCheckingStatus'
     *  Inport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  Inport: '<Root>/VeESSR_e_TransFldPmpCmd'
     *  Inport: '<Root>/VeMSPR_b_MtrA_SpdFA'
     *  Inport: '<Root>/VeMSPR_b_MtrB_SpdFA'
     *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
     *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
     *  Inport: '<Root>/VePMDR_U_IgnRunCrnk'
     *  Inport: '<Root>/VePMDR_b_RunCrankActive'
     *  Inport: '<Root>/VePMDR_b_StrtCntrlStOn'
     *  Inport: '<Root>/VePMIR_e_TAP_SpdDsrd_IO_CntrlSt'
     *  Inport: '<Root>/VeSTRR_b_EngOnReq'
     */
    if (KeTAPR_b_OAT_PT_Est_SelDial)
    {
        /* Switch: '<S78>/Switch' incorporates:
         *  Constant: '<S81>/Calib'
         */
        Switch = KeTAPR_T_OAT_PT_Est_Dial;
    }

    /* End of Switch: '<S78>/Switch' */

    /* Switch: '<S56>/Switch' incorporates:
     *  Constant: '<S58>/Calib'
     */
    if (KeTAPR_b_MtrA_Spd_SelDial)
    {
        /* Switch: '<S56>/Switch' incorporates:
         *  Constant: '<S59>/Calib'
         */
        rtb_Switch_e4 = KeTAPR_n_MtrA_Spd_Dial;
    }

    /* End of Switch: '<S56>/Switch' */

    /* Switch: '<S57>/Switch' incorporates:
     *  Constant: '<S61>/Calib'
     */
    if (KeTAPR_b_MtrA_SpdFA_SelDial)
    {
        /* Switch: '<S57>/Switch' incorporates:
         *  Constant: '<S60>/Calib'
         */
        rtb_Switch_oh = KeTAPR_b_MtrA_SpdFA_Dial;
    }

    /* End of Switch: '<S57>/Switch' */

    /* Switch: '<S62>/Switch' incorporates:
     *  Constant: '<S64>/Calib'
     */
    if (KeTAPR_b_MtrB_Spd_SelDial)
    {
        /* Switch: '<S62>/Switch' incorporates:
         *  Constant: '<S65>/Calib'
         */
        rtb_Switch_a2 = KeTAPR_n_MtrB_Spd_Dial;
    }

    /* End of Switch: '<S62>/Switch' */

    /* Switch: '<S63>/Switch' incorporates:
     *  Constant: '<S67>/Calib'
     */
    if (KeTAPR_b_MtrB_SpdFA_SelDial)
    {
        /* Switch: '<S63>/Switch' incorporates:
         *  Constant: '<S66>/Calib'
         */
        rtb_Switch_aw = KeTAPR_b_MtrB_SpdFA_Dial;
    }

    /* End of Switch: '<S63>/Switch' */

    /* Switch: '<S68>/Switch' incorporates:
     *  Constant: '<S72>/Calib'
     */
    if (KeTAPR_b_RunCrankActive_SelDial)
    {
        /* Switch: '<S68>/Switch' incorporates:
         *  Constant: '<S71>/Calib'
         */
        Switch_mw = KeTAPR_b_RunCrankActive_Dial;
    }

    /* End of Switch: '<S68>/Switch' */

    /* Switch: '<S69>/Switch' incorporates:
     *  Constant: '<S74>/Calib'
     */
    if (KeTAPR_b_IgnRunCrnk_SelDial)
    {
        /* Switch: '<S69>/Switch' incorporates:
         *  Constant: '<S73>/Calib'
         */
        Switch_g = KeTAPR_U_IgnRunCrnk_Dial;
    }

    /* End of Switch: '<S69>/Switch' */

    /* Switch: '<S38>/Switch' incorporates:
     *  Constant: '<S83>/Calib'
     */
    if (KeTAPR_b_EngStartStopSt_SelDial)
    {
        /* Switch: '<S38>/Switch' incorporates:
         *  Constant: '<S85>/Calib'
         */
        Switch_p = KeTAPR_e_EngStartStopSt_Dial;
    }

    /* End of Switch: '<S38>/Switch' */

    /* Switch: '<S40>/Switch' incorporates:
     *  Constant: '<S89>/Calib'
     */
    if (KeTAPR_b_TransOutputSpdSgndFltrd_SelDial)
    {
        /* Switch: '<S40>/Switch' incorporates:
         *  Constant: '<S90>/Calib'
         */
        rtb_Switch_a4 = KeTAPR_n_TransOutputSpdSgndFltrd_Dial;
    }

    /* End of Switch: '<S40>/Switch' */

    /* Switch: '<S92>/Switch' incorporates:
     *  Constant: '<S154>/Calib'
     */
    if (KeTAPR_b_LimCheckingStatus_SelDial)
    {
        /* Switch: '<S92>/Switch' incorporates:
         *  Constant: '<S153>/Calib'
         *  Inport: '<Root>/VeBSWR_b_LimCheckingStatus'
         */
        VeTAPR_b_LimCheckingStatus_AD = KeTAPR_b_LimCheckingStatus_Dial;
    }

    /* End of Switch: '<S92>/Switch' */

    /* If: '<S91>/If' incorporates:
     *  Constant: '<S97>/Constant'
     *  Inport: '<Root>/VePMIR_e_TAP_SpdDsrd_IO_CntrlSt'
     *  RelationalOperator: '<S91>/LessThan2'
     */
    if (((uint32)tmpRead_2) == CeTAIR_e_Short_Term_Adjustment)
    {
        /* Outputs for IfAction SubSystem: '<S91>/ChkPmpDVC_Limits' incorporates:
         *  ActionPort: '<S95>/ActionPort'
         */
        /* If: '<S95>/If' */
        if (VeTAPR_b_LimCheckingStatus_AD)
        {
            /* Outputs for IfAction SubSystem: '<S95>/ChkPmpLimits' incorporates:
             *  ActionPort: '<S100>/ActionPort'
             */
            /* Switch: '<S103>/Switch' incorporates:
             *  Constant: '<S115>/Calib'
             */
            if (KeTAPR_b_LimCheck_Com_Issue_Slct)
            {
                /* Switch: '<S103>/Switch' incorporates:
                 *  Constant: '<S114>/Calib'
                 */
                VeTAPR_b_LimChck_Com_Issue_AD = KeTAPR_b_LimCheck_Com_Issue_Dial;
            }
            else
            {
                /* Switch: '<S103>/Switch' incorporates:
                 *  Constant: '<S51>/Calib'
                 *  Constant: '<S52>/Calib'
                 *  Constant: '<S53>/Calib'
                 *  Logic: '<S113>/Logical4'
                 */
                VeTAPR_b_LimChck_Com_Issue_AD = (((((KeTAPR_b_LostCommECM_FADial)
                    || (KeTAPR_b_LostCommTrans_FADial)) ||
                    (KeTAPR_b_CAN_CommBusOff_FADial)) || rtb_Switch_oh) ||
                    rtb_Switch_aw);
            }

            /* End of Switch: '<S103>/Switch' */

            /* Switch: '<S104>/Switch' incorporates:
             *  Constant: '<S117>/Calib'
             */
            if (KeTAPR_b_LimCheck_EngStartStopSt_Slct)
            {
                /* Switch: '<S104>/Switch' incorporates:
                 *  Constant: '<S116>/Calib'
                 */
                VeTAPR_b_LimChck_EngStartStopSt_AD =
                    KeTAPR_b_LimCheck_EngStartStopSt_Dial;
            }
            else
            {
                /* Switch: '<S104>/Switch' incorporates:
                 *  Constant: '<S124>/Constant'
                 *  RelationalOperator: '<S109>/Comparison3'
                 *  Switch: '<S38>/Switch'
                 */
                VeTAPR_b_LimChck_EngStartStopSt_AD = (((uint32)Switch_p) ==
                    CeESSR_e_EngRunning);
            }

            /* End of Switch: '<S104>/Switch' */

            /* Switch: '<S107>/Switch' incorporates:
             *  Constant: '<S121>/Calib'
             */
            if (KeTAPR_b_LimCheck_OutSpd_Slct)
            {
                /* Switch: '<S107>/Switch' incorporates:
                 *  Constant: '<S120>/Calib'
                 */
                VeTAPR_b_LimChck_OutSpd_AD = KeTAPR_b_LimCheck_OutSpd_Dial;
            }
            else
            {
                /* Switch: '<S107>/Switch' incorporates:
                 *  Constant: '<S110>/ConstantValue3'
                 *  RelationalOperator: '<S110>/Comparison2'
                 */
                VeTAPR_b_LimChck_OutSpd_AD = (rtb_Switch_a4 != 0.0F);
            }

            /* End of Switch: '<S107>/Switch' */

            /* Switch: '<S106>/Switch' incorporates:
             *  Constant: '<S119>/Calib'
             */
            if (KeTAPR_b_LimCheck_MtrAB_Spd_Slct)
            {
                /* Switch: '<S106>/Switch' incorporates:
                 *  Constant: '<S118>/Calib'
                 */
                VeTAPR_b_LimChck_MtrAB_Spd_AD = KeTAPR_b_LimCheck_MtrAB_Spd_Dial;
            }
            else
            {
                /* Switch: '<S106>/Switch' incorporates:
                 *  Abs: '<S111>/Abs'
                 *  Abs: '<S111>/Abs1'
                 *  Constant: '<S125>/Calib'
                 *  Logic: '<S111>/Logical1'
                 *  RelationalOperator: '<S111>/Comparison'
                 *  RelationalOperator: '<S111>/Comparison1'
                 */
                VeTAPR_b_LimChck_MtrAB_Spd_AD = ((fabsf(rtb_Switch_e4) >
                    KeTAPR_n_MtrSpdZero) || (fabsf(rtb_Switch_a2) >
                    KeTAPR_n_MtrSpdZero));
            }

            /* End of Switch: '<S106>/Switch' */

            /* Switch: '<S108>/Switch' incorporates:
             *  Constant: '<S123>/Calib'
             */
            if (KeTAPR_b_LimCheck_RunCrnkActv_Slct)
            {
                /* Switch: '<S108>/Switch' incorporates:
                 *  Constant: '<S122>/Calib'
                 */
                VeTAPR_b_LimChck_RunCrnkActv_AD =
                    KeTAPR_b_LimCheck_RunCrnkActv_Dial;
            }
            else
            {
                /* Switch: '<S108>/Switch' incorporates:
                 *  Logic: '<S112>/Logical2'
                 */
                VeTAPR_b_LimChck_RunCrnkActv_AD = !Switch_mw;
            }

            /* End of Switch: '<S108>/Switch' */

            /* Merge: '<S91>/Merge' incorporates:
             *  Logic: '<S100>/Logical3'
             *  Merge: '<S95>/Merge'
             */
            VeTAPR_b_ChkPmpDVC_Limits_AM2 =
                (((((!VeTAPR_b_LimChck_EngStartStopSt_AD) &&
                    (!VeTAPR_b_LimChck_OutSpd_AD)) &&
                   (!VeTAPR_b_LimChck_MtrAB_Spd_AD)) &&
                  (!VeTAPR_b_LimChck_RunCrnkActv_AD)) &&
                 (!VeTAPR_b_LimChck_Com_Issue_AD));

            /* End of Outputs for SubSystem: '<S95>/ChkPmpLimits' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S95>/CheckDVCLimits1' incorporates:
             *  ActionPort: '<S99>/ActionPort'
             */
            /* Merge: '<S91>/Merge' */
            TAPR_ac_CheckDVCLimits1((&(VeTAPR_b_ChkPmpDVC_Limits_AM2)));

            /* End of Outputs for SubSystem: '<S95>/CheckDVCLimits1' */
        }

        /* End of If: '<S95>/If' */
        /* End of Outputs for SubSystem: '<S91>/ChkPmpDVC_Limits' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S91>/CheckDVCLimits1' incorporates:
         *  ActionPort: '<S93>/ActionPort'
         */
        TAPR_ac_CheckDVCLimits1_e((&(VeTAPR_b_ChkPmpDVC_Limits_AM2)));

        /* End of Outputs for SubSystem: '<S91>/CheckDVCLimits1' */
    }

    /* End of If: '<S91>/If' */
    /* End of Outputs for SubSystem: '<S1>/Subsystem8' */
    (void)Rte_Read_VePMIR_e_TAP2_SpdDsrd_IO_CntrlSt_Value(&tmpRead_9);

    /* Outputs for Function Call SubSystem: '<S1>/Subsystem8' */
    /* If: '<S91>/If1' incorporates:
     *  Constant: '<S98>/Constant'
     *  Inport: '<Root>/VePMIR_e_TAP2_SpdDsrd_IO_CntrlSt'
     *  RelationalOperator: '<S91>/LessThan1'
     */
    if (((uint32)tmpRead_9) == CeTAIR_e_Short_Term_Adjustment)
    {
        /* Outputs for IfAction SubSystem: '<S91>/ChkPmpDVC_Limits1' incorporates:
         *  ActionPort: '<S96>/ActionPort'
         */
        /* If: '<S96>/If' */
        if (VeTAPR_b_LimCheckingStatus_AD)
        {
            /* Outputs for IfAction SubSystem: '<S96>/ChkPmpLimits' incorporates:
             *  ActionPort: '<S127>/ActionPort'
             */
            /* Switch: '<S131>/Switch' incorporates:
             *  Constant: '<S143>/Calib'
             *  Constant: '<S144>/Calib'
             *  Constant: '<S151>/Constant'
             *  RelationalOperator: '<S136>/Comparison3'
             *  Switch: '<S38>/Switch'
             */
            if (KeTAPR_b_LimCheck_EngStartStopSt_Slct)
            {
                rtb_Logical8 = KeTAPR_b_LimCheck_EngStartStopSt_Dial;
            }
            else
            {
                rtb_Logical8 = (((uint32)Switch_p) == CeESSR_e_EngRunning);
            }

            /* End of Switch: '<S131>/Switch' */

            /* Switch: '<S134>/Switch' incorporates:
             *  Constant: '<S137>/ConstantValue3'
             *  Constant: '<S147>/Calib'
             *  Constant: '<S148>/Calib'
             *  RelationalOperator: '<S137>/Comparison2'
             */
            if (KeTAPR_b_LimCheck_OutSpd_Slct)
            {
                rtb_OR1_lm = KeTAPR_b_LimCheck_OutSpd_Dial;
            }
            else
            {
                rtb_OR1_lm = (rtb_Switch_a4 != 0.0F);
            }

            /* End of Switch: '<S134>/Switch' */

            /* Switch: '<S133>/Switch' incorporates:
             *  Abs: '<S138>/Abs'
             *  Abs: '<S138>/Abs1'
             *  Constant: '<S145>/Calib'
             *  Constant: '<S146>/Calib'
             *  Constant: '<S152>/Calib'
             *  Logic: '<S138>/Logical1'
             *  RelationalOperator: '<S138>/Comparison'
             *  RelationalOperator: '<S138>/Comparison1'
             */
            if (KeTAPR_b_LimCheck_MtrAB_Spd_Slct)
            {
                rtb_OR1_ld = KeTAPR_b_LimCheck_MtrAB_Spd_Dial;
            }
            else
            {
                rtb_OR1_ld = ((fabsf(rtb_Switch_e4) > KeTAPR_n_MtrSpdZero) ||
                              (fabsf(rtb_Switch_a2) > KeTAPR_n_MtrSpdZero));
            }

            /* End of Switch: '<S133>/Switch' */

            /* Switch: '<S135>/Switch' incorporates:
             *  Constant: '<S149>/Calib'
             *  Constant: '<S150>/Calib'
             *  Logic: '<S139>/Logical2'
             */
            if (KeTAPR_b_LimCheck_RunCrnkActv_Slct)
            {
                tmp = KeTAPR_b_LimCheck_RunCrnkActv_Dial;
            }
            else
            {
                tmp = !Switch_mw;
            }

            /* End of Switch: '<S135>/Switch' */

            /* Switch: '<S130>/Switch' incorporates:
             *  Constant: '<S141>/Calib'
             *  Constant: '<S142>/Calib'
             *  Constant: '<S51>/Calib'
             *  Constant: '<S52>/Calib'
             *  Constant: '<S53>/Calib'
             *  Logic: '<S140>/Logical4'
             */
            if (KeTAPR_b_LimCheck_Com_Issue_Slct)
            {
                rtb_Switch_oh = KeTAPR_b_LimCheck_Com_Issue_Dial;
            }
            else
            {
                rtb_Switch_oh = (((((KeTAPR_b_LostCommECM_FADial) ||
                                    (KeTAPR_b_LostCommTrans_FADial)) ||
                                   (KeTAPR_b_CAN_CommBusOff_FADial)) ||
                                  rtb_Switch_oh) || rtb_Switch_aw);
            }

            /* End of Switch: '<S130>/Switch' */

            /* Merge: '<S91>/Merge1' incorporates:
             *  Logic: '<S127>/Logical3'
             *  Merge: '<S96>/Merge'
             */
            TAPR_ac_B.Merge1 = (((((!rtb_Logical8) && (!rtb_OR1_lm)) &&
                                  (!rtb_OR1_ld)) && (!tmp)) && (!rtb_Switch_oh));

            /* End of Outputs for SubSystem: '<S96>/ChkPmpLimits' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S96>/CheckDVCLimits1' incorporates:
             *  ActionPort: '<S126>/ActionPort'
             */
            /* Merge: '<S91>/Merge1' */
            TAPR_ac_CheckDVCLimits1(&TAPR_ac_B.Merge1);

            /* End of Outputs for SubSystem: '<S96>/CheckDVCLimits1' */
        }

        /* End of If: '<S96>/If' */
        /* End of Outputs for SubSystem: '<S91>/ChkPmpDVC_Limits1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S91>/CheckDVCLimits2' incorporates:
         *  ActionPort: '<S94>/ActionPort'
         */
        TAPR_ac_CheckDVCLimits1_e(&TAPR_ac_B.Merge1);

        /* End of Outputs for SubSystem: '<S91>/CheckDVCLimits2' */
    }

    /* End of If: '<S91>/If1' */
    /* End of Outputs for SubSystem: '<S1>/Subsystem8' */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value(&Switch_gs);
    (void)Rte_Read_VeHCCR_n_AuxPumpSpdDsrd_Value(&rtb_Vector_h);
    (void)Rte_Read_VeHCCR_Pct_AuxPumpSpdDsrd_Value(&tmpRead);
    (void)Rte_Read_VeHCCR_p_TransMnPressCmd_Value(&Switch_gi);

    /* Outputs for Function Call SubSystem: '<S1>/Subsystem8' */
    /* Switch: '<S42>/Switch' incorporates:
     *  Constant: '<S45>/Calib'
     *  Inport: '<Root>/VeHCCR_Pct_AuxPumpSpdDsrd'
     *  Inport: '<Root>/VeHCCR_n_AuxPumpSpdDsrd'
     *  Inport: '<Root>/VeHCCR_p_TransMnPressCmd'
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     */
    if (KeTAPR_b_TransMnPressCmd_SelDial)
    {
        /* Switch: '<S42>/Switch' incorporates:
         *  Constant: '<S46>/Calib'
         */
        Switch_gi = KeTAPR_p_TransMnPressCmd_Dial;
    }

    /* End of Switch: '<S42>/Switch' */

    /* Switch: '<S39>/Switch' incorporates:
     *  Constant: '<S87>/Calib'
     */
    if (KeTAPR_b_InputSpeed_SelDial)
    {
        /* Switch: '<S39>/Switch' incorporates:
         *  Constant: '<S88>/Calib'
         */
        Switch_gs = KeTAPR_n_InputSpeed_Dial;
    }

    /* End of Switch: '<S39>/Switch' */
    /* End of Outputs for SubSystem: '<S1>/Subsystem8' */

    /* Outputs for Function Call SubSystem: '<S1>/TAPC' */
    /* Outputs for Atomic SubSystem: '<S173>/Hysteresis' */
    /* Switch: '<S188>/Switch1' incorporates:
     *  Constant: '<S188>/ConstantValue'
     *  Constant: '<S190>/Calib'
     *  Constant: '<S191>/Calib'
     *  Constant: '<S192>/Calib'
     *  RelationalOperator: '<S188>/GreaterThan'
     *  RelationalOperator: '<S188>/GreaterThan1'
     *  Sum: '<S173>/Sum'
     *  Sum: '<S173>/Sum1'
     *  UnitDelay: '<S188>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeTFTR_T_TransO > (KeTAPR_T_LowerLim +
            KeTAPR_T_TurnOnThresh))
    {
        TAPR_ac_DW.UnitDelay_DSTATE_d3 = true;
    }
    else
    {
        TAPR_ac_DW.UnitDelay_DSTATE_d3 =
            ((rtb_TmpSignalConversionAtVeTFTR_T_TransO >= (KeTAPR_T_LowerLim -
               KeTAPR_T_TurnOffThresh)) && (TAPR_ac_DW.UnitDelay_DSTATE_d3));
    }

    /* End of Switch: '<S188>/Switch1' */
    /* End of Outputs for SubSystem: '<S173>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S173>/Hysteresis1' */
    /* Switch: '<S189>/Switch1' incorporates:
     *  Constant: '<S189>/ConstantValue'
     *  Constant: '<S191>/Calib'
     *  Constant: '<S192>/Calib'
     *  Constant: '<S193>/Calib'
     *  RelationalOperator: '<S189>/GreaterThan'
     *  RelationalOperator: '<S189>/GreaterThan1'
     *  Sum: '<S173>/Sum2'
     *  Sum: '<S173>/Sum3'
     *  UnitDelay: '<S189>/UnitDelay'
     */
    if (rtb_TmpSignalConversionAtVeTFTR_T_TransO > (KeTAPR_T_UpperLim +
            KeTAPR_T_TurnOffThresh))
    {
        TAPR_ac_DW.UnitDelay_DSTATE_dn = true;
    }
    else
    {
        TAPR_ac_DW.UnitDelay_DSTATE_dn =
            ((rtb_TmpSignalConversionAtVeTFTR_T_TransO >= (KeTAPR_T_UpperLim -
               KeTAPR_T_TurnOnThresh)) && (TAPR_ac_DW.UnitDelay_DSTATE_dn));
    }

    /* End of Switch: '<S189>/Switch1' */
    /* End of Outputs for SubSystem: '<S173>/Hysteresis1' */

    /* Outputs for Atomic SubSystem: '<S197>/Hysteresis' */
    /* Switch: '<S200>/Switch1' incorporates:
     *  Constant: '<S200>/ConstantValue'
     *  Constant: '<S201>/Calib'
     *  Constant: '<S202>/Calib'
     *  RelationalOperator: '<S200>/GreaterThan'
     *  RelationalOperator: '<S200>/GreaterThan1'
     *  UnitDelay: '<S200>/UnitDelay'
     */
    if (Switch_g > KeTAPR_U_AuxPumpLowVoltDetect_HighVolt)
    {
        TAPR_ac_DW.UnitDelay_DSTATE_np = true;
    }
    else
    {
        TAPR_ac_DW.UnitDelay_DSTATE_np = ((Switch_g >=
            KeTAPR_U_AuxPumpLowVoltDetect_LowVolt) &&
            (TAPR_ac_DW.UnitDelay_DSTATE_np));
    }

    /* End of Switch: '<S200>/Switch1' */
    /* End of Outputs for SubSystem: '<S197>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S174>/TimerClearCounter' */
    /* Switch: '<S198>/Switch3' incorporates:
     *  Constant: '<S198>/ConstantValue1'
     *  Logic: '<S197>/Logical2'
     *  Logic: '<S197>/Logical4'
     *  Switch: '<S198>/Switch1'
     *  UnitDelay: '<S198>/UnitDelay'
     *  UnitDelay: '<S200>/UnitDelay'
     */
    if (!Switch_mw)
    {
        TAPR_ac_DW.UnitDelay_DSTATE_d1 = 0.0F;
    }
    else if (!TAPR_ac_DW.UnitDelay_DSTATE_np)
    {
        /* Switch: '<S198>/Switch1' incorporates:
         *  Constant: '<S203>/Calib'
         *  UnitDelay: '<S198>/UnitDelay'
         */
        TAPR_ac_DW.UnitDelay_DSTATE_d1 = KeTAPR_t_AuxPumpLowVoltDetectTimeOff;
    }
    else
    {
        /* UnitDelay: '<S198>/UnitDelay' incorporates:
         *  Constant: '<S198>/ConstantValue4'
         *  Constant: '<S204>/Calib'
         *  MinMax: '<S198>/Maximum'
         *  Sum: '<S198>/Subtraction'
         *  Switch: '<S198>/Switch1'
         */
        TAPR_ac_DW.UnitDelay_DSTATE_d1 = fmaxf(TAPR_ac_DW.UnitDelay_DSTATE_d1 -
            KeTAPR_t_dT, 0.0F);
    }

    /* End of Switch: '<S198>/Switch3' */

    /* Logic: '<S196>/Logical3' incorporates:
     *  Constant: '<S198>/ConstantValue2'
     *  Constant: '<S199>/Calib'
     *  Logic: '<S196>/Logical1'
     *  RelationalOperator: '<S198>/GreaterThan1'
     *  UnitDelay: '<S198>/UnitDelay'
     */
    VeTAPR_b_AuxPumpAvail_Voltage = ((TAPR_ac_DW.UnitDelay_DSTATE_d1 <= 0.0F) ||
        (KeTAPR_b_Disable_AuxPumpLowVoltDetect));

    /* End of Outputs for SubSystem: '<S174>/TimerClearCounter' */
    /* End of Outputs for SubSystem: '<S1>/TAPC' */

    /* Outputs for Function Call SubSystem: '<S1>/Subsystem8' */
    /* Switch: '<S70>/Switch' incorporates:
     *  Constant: '<S75>/Calib'
     *  Constant: '<S76>/Calib'
     */
    if (KeTAPR_b_StrtCntrlStOn_SelDial)
    {
        rtb_Logical4 = KeTAPR_b_StrtCntrlStOn_Dial;
    }

    /* End of Switch: '<S70>/Switch' */

    /* Switch: '<S77>/Switch' incorporates:
     *  Constant: '<S79>/Calib'
     *  Constant: '<S80>/Calib'
     */
    if (KeTAPR_b_EngOnReq_SelDial)
    {
        rtb_AND_i3 = KeTAPR_b_EngOnReq_Dial;
    }

    /* End of Switch: '<S77>/Switch' */
    /* End of Outputs for SubSystem: '<S1>/Subsystem8' */

    /* Outputs for Function Call SubSystem: '<S1>/TAPC' */
    /* Logic: '<S175>/Logical4' */
    rtb_Logical4 = (rtb_Logical4 && rtb_AND_i3);

    /* Outputs for Atomic SubSystem: '<S175>/EdgeRising1' */
    /* Logic: '<S205>/AND' incorporates:
     *  Logic: '<S205>/OR1'
     *  UnitDelay: '<S205>/Unit Delay'
     */
    rtb_AND_i3 = (rtb_Logical4 && (!TAPR_ac_DW.UnitDelay_DSTATE_gu));

    /* Update for UnitDelay: '<S205>/Unit Delay' */
    TAPR_ac_DW.UnitDelay_DSTATE_gu = rtb_Logical4;

    /* End of Outputs for SubSystem: '<S175>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S175>/TimerResetEnabled' */
    /* Switch: '<S209>/Switch1' incorporates:
     *  Constant: '<S207>/Calib'
     *  Constant: '<S208>/Calib'
     *  Constant: '<S209>/Constant Value3'
     *  Constant: '<S209>/Constant Value4'
     *  Logic: '<S209>/AND1'
     *  MinMax: '<S209>/Maximum'
     *  RelationalOperator: '<S209>/Greater  Than2'
     *  Sum: '<S209>/Subtraction'
     *  UnitDelay: '<S209>/Unit Delay'
     */
    if (rtb_AND_i3 && (TAPR_ac_DW.UnitDelay_DSTATE_h <= 0.0F))
    {
        TAPR_ac_DW.UnitDelay_DSTATE_h = KeTAPR_t_STRRKeyStrtEng_Pulse;
    }
    else
    {
        TAPR_ac_DW.UnitDelay_DSTATE_h = fmaxf(TAPR_ac_DW.UnitDelay_DSTATE_h -
            KeTAPR_t_dT, 0.0F);
    }

    /* End of Switch: '<S209>/Switch1' */

    /* Logic: '<S175>/Logical2' incorporates:
     *  Constant: '<S206>/Calib'
     *  Constant: '<S209>/Constant Value2'
     *  Logic: '<S175>/Logical3'
     *  RelationalOperator: '<S209>/Greater  Than1'
     *  UnitDelay: '<S209>/Unit Delay'
     */
    VeTAPR_b_KeyStrtEngAvailFlag = ((TAPR_ac_DW.UnitDelay_DSTATE_h <= 0.0F) ||
        (KeTAPR_b_DsblSTRRKeyStrtEng));

    /* End of Outputs for SubSystem: '<S175>/TimerResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S177>/Hysteresis1' */
    /* Switch: '<S180>/Switch1' incorporates:
     *  Constant: '<S180>/ConstantValue'
     *  Constant: '<S181>/Calib'
     *  Constant: '<S182>/Calib'
     *  RelationalOperator: '<S180>/GreaterThan'
     *  RelationalOperator: '<S180>/GreaterThan1'
     *  UnitDelay: '<S180>/UnitDelay'
     */
    if (Switch_gi > KeTAPR_p_MnLnPresToTurnOff)
    {
        TAPR_ac_DW.UnitDelay_DSTATE_pv = true;
    }
    else
    {
        TAPR_ac_DW.UnitDelay_DSTATE_pv = ((Switch_gi >=
            KeTAPR_p_MnLnPresToTurnOn) && (TAPR_ac_DW.UnitDelay_DSTATE_pv));
    }

    /* End of Switch: '<S180>/Switch1' */
    /* End of Outputs for SubSystem: '<S177>/Hysteresis1' */
    /* End of Outputs for SubSystem: '<S1>/TAPC' */
    (void)Rte_Read_VeOBCR_e_ChargingLevel_Value(&tmpRead_0);

    /* Outputs for Function Call SubSystem: '<S1>/TAPC' */
    /* Switch: '<S179>/Switch' incorporates:
     *  Constant: '<S179>/TRUEConstant'
     *  Constant: '<S183>/Constant'
     *  Constant: '<S184>/Constant'
     *  Constant: '<S185>/Constant'
     *  Constant: '<S186>/Constant'
     *  Constant: '<S187>/Constant'
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     *  Logic: '<S178>/Logical1'
     *  Logic: '<S179>/Logical2'
     *  RelationalOperator: '<S178>/Comparison2'
     *  RelationalOperator: '<S178>/Comparison3'
     *  RelationalOperator: '<S178>/Comparison4'
     *  RelationalOperator: '<S178>/Comparison5'
     *  RelationalOperator: '<S178>/Comparison6'
     *  UnitDelay: '<S180>/UnitDelay'
     */
    if (((((((uint32)Switch_p) == CeESSR_e_EngRunning) || (((uint32)Switch_p) ==
            CeESSR_e_AchEngIdleSt)) || (((uint32)Switch_p) ==
            CeESSR_e_PrepForStopSt)) || (((uint32)Switch_p) ==
            CeESSR_e_DisableFuelSt)) || (((uint32)Switch_p) ==
            CeESSR_e_ImmedStopSt))
    {
        rtb_Logical4 = !TAPR_ac_DW.UnitDelay_DSTATE_pv;
    }
    else
    {
        rtb_Logical4 = true;
    }

    /* End of Switch: '<S179>/Switch' */

    /* Logic: '<S155>/Logical3' incorporates:
     *  Constant: '<S169>/Calib'
     *  Constant: '<S170>/Calib'
     *  Logic: '<S155>/AND'
     *  Logic: '<S173>/AND1'
     *  Logic: '<S173>/AND2'
     *  RelationalOperator: '<S155>/GreaterThan'
     *  Switch: '<S155>/Switch1'
     *  UnitDelay: '<S188>/UnitDelay'
     *  UnitDelay: '<S189>/UnitDelay'
     */
    VeTAPR_b_BoundChkPass = (((((((!KeTAPR_b_UseRunCrnkForBoundChk) || Switch_mw)
        && ((TAPR_ac_DW.UnitDelay_DSTATE_d3) && (!TAPR_ac_DW.UnitDelay_DSTATE_dn)))
        && (Switch_gs < KeTAPR_n_InputSpdLim)) && (VeTAPR_b_AuxPumpAvail_Voltage))
        && (VeTAPR_b_KeyStrtEngAvailFlag)) && rtb_Logical4);

    /* RelationalOperator: '<S156>/Comparison2' */
    VeTAPR_b_AuxPumpAvail_OBCM = true;

    /* Switch: '<S157>/Switch' incorporates:
     *  Constant: '<S212>/Calib'
     *  Inport: '<Root>/VeCPDR_b_AuxPumpPerf_FltDtct'
     */
    if (KeTAPR_b_TransAuxPump_NotFlty_SelDial)
    {
        /* Switch: '<S157>/Switch' incorporates:
         *  Constant: '<S211>/Calib'
         */
        VeTAPR_b_TransAuxPump_NotFlty_AD = KeTAPR_b_TransAuxPump_NotFlty_Dial;
    }
    else
    {
        (void)Rte_Read_VeCPDR_b_AuxPumpPerf_FltDtct_Value(&rtb_NotEqual);

        /* Switch: '<S157>/Switch' incorporates:
         *  Constant: '<S160>/Calib'
         *  Inport: '<Root>/VeCPDR_b_AuxPumpPerf_FltDtct'
         *  Logic: '<S5>/AND10'
         *  Logic: '<S5>/OR5'
         */
        VeTAPR_b_TransAuxPump_NotFlty_AD = ((((!rtb_NotEqual) &&
            (!KeTAPR_b_AuxPmp_GenFltInfoEnbl)) && (VeTAPR_b_BoundChkPass)) &&
            (VeTAPR_b_AuxPumpAvail_OBCM));
    }

    /* End of Switch: '<S157>/Switch' */
    /* End of Outputs for SubSystem: '<S1>/TAPC' */
    (void)Rte_Read_VeESPR_n_EngineSpeed_Value(&tmpRead_a);

    /* Outputs for Function Call SubSystem: '<S1>/TAPC' */
    /* Lookup_n-D: '<S293>/Vector' incorporates:
     *  Constant: '<S216>/Calib'
     *  Inport: '<Root>/VeESPR_n_EngineSpeed'
     *  Product: '<S158>/Product1'
     */
    rtb_Switch_e4 = tmpRead_a / KeTAPR_K_PumpSpdRatio;

    /* Product: '<S158>/Product3' incorporates:
     *  Constant: '<S215>/Calib'
     *  Constant: '<S5>/ConstantValue3'
     *  Lookup_n-D: '<S219>/Vector'
     *  Lookup_n-D: '<S293>/Vector'
     *  Product: '<S158>/Product2'
     */
    VeTAPR_dV_GenOilFlowEst = (rtb_Switch_e4 * KeTAPR_K_MechOilPumpVolPerRev) *
        look2_iflf_binlca_16a(rtb_Switch_e4, 0.0F, ((const float32 *)
        &(KxTAPR_K_MechOilPumpVolEff[0])), ((const float32 *)
        &(KyTAPR_K_MechOilPumpVolEff[0])), ((const float32 *)
        &(KtTAPR_K_MechOilPumpVolEff[0])), TAPR_ac_ConstP.Vector_maxIndex, 3U);

    /* Switch: '<S223>/Switch1' incorporates:
     *  Constant: '<S228>/Calib'
     *  Inport: '<Root>/VePMTR_b_ThrmlSystRly_EnblCmnd'
     */
    if (KeTAPR_b_RelaySelect)
    {
        /* Outputs for Function Call SubSystem: '<S1>/FUNC_Outputs' */
        /* Gain: '<S19>/Gain' incorporates:
         *  Constant: '<S226>/Calib'
         *  Outport: '<Root>/VeTAPR_Pct_ElecOilPmp_RlyCmd'
         */
        (void)Rte_Write_VeTAPR_Pct_ElecOilPmp_RlyCmd_Value
            (KeTAPR_Pct_RelayCommandDefault);

        /* End of Outputs for SubSystem: '<S1>/FUNC_Outputs' */
    }
    else
    {
        (void)Rte_Read_VePMTR_b_ThrmlSystRly_EnblCmnd_Value(&rtb_LessThan3);

        /* Switch: '<S222>/Switch1' incorporates:
         *  Inport: '<Root>/VePMTR_b_ThrmlSystRly_EnblCmnd'
         */
        if (rtb_LessThan3)
        {
            /* Outputs for Function Call SubSystem: '<S1>/FUNC_Outputs' */
            /* Gain: '<S19>/Gain' incorporates:
             *  Constant: '<S225>/Calib'
             *  Outport: '<Root>/VeTAPR_Pct_ElecOilPmp_RlyCmd'
             */
            (void)Rte_Write_VeTAPR_Pct_ElecOilPmp_RlyCmd_Value
                (KeTAPR_Pct_RelayCommand);

            /* End of Outputs for SubSystem: '<S1>/FUNC_Outputs' */
        }
        else
        {
            /* Outputs for Function Call SubSystem: '<S1>/FUNC_Outputs' */
            /* Gain: '<S19>/Gain' incorporates:
             *  Constant: '<S227>/Calib'
             *  Outport: '<Root>/VeTAPR_Pct_ElecOilPmp_RlyCmd'
             */
            (void)Rte_Write_VeTAPR_Pct_ElecOilPmp_RlyCmd_Value
                (KeTAPR_Pct_RelayZeroCommand);

            /* End of Outputs for SubSystem: '<S1>/FUNC_Outputs' */
        }

        /* End of Switch: '<S222>/Switch1' */
    }

    /* End of Switch: '<S223>/Switch1' */

    /* RelationalOperator: '<S220>/LessThan3' incorporates:
     *  Constant: '<S250>/Calib'
     */
    rtb_LessThan3 = (rtb_TmpSignalConversionAtVeTHMR_dV_MtrB_ >
                     KeTAPR_dV_MinFlowRequired);

    /* Outputs for Atomic SubSystem: '<S220>/EdgeBi' */
    /* RelationalOperator: '<S231>/Not Equal' incorporates:
     *  UnitDelay: '<S231>/Unit Delay'
     */
    rtb_NotEqual = (rtb_LessThan3 != TAPR_ac_DW.UnitDelay_DSTATE_gj);

    /* Update for UnitDelay: '<S231>/Unit Delay' */
    TAPR_ac_DW.UnitDelay_DSTATE_gj = rtb_LessThan3;

    /* End of Outputs for SubSystem: '<S220>/EdgeBi' */

    /* Lookup_n-D: '<S258>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
     *  SignalConversion generated from: '<S1>/VeTHMR_dV_MtrB_CoolFlwCmd'
     */
    VeTAPR_n_EOP_DsrdSpd = look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTFTR_T_TransO,
         rtb_TmpSignalConversionAtVeTHMR_dV_MtrB_, ((const float32 *)
          &(KxTAPR_n_EOP_Flw_2_Spd[0])), ((const float32 *)
          &(KyTAPR_n_EOP_Flw_2_Spd[0])), ((const float32 *)
          &(KtTAPR_n_EOP_Flw_2_Spd[0])), TAPR_ac_ConstP.pooled4, 4U);

    /* Merge: '<S168>/Merge' incorporates:
     *  Constant: '<S238>/Calib'
     *  Constant: '<S244>/Calib'
     *  Constant: '<S245>/Calib'
     *  Constant: '<S246>/Calib'
     *  Constant: '<S253>/Constant1'
     *  Constant: '<S253>/Constant2'
     *  Constant: '<S254>/Constant1'
     *  Constant: '<S254>/Constant2'
     *  Constant: '<S255>/Constant1'
     *  Constant: '<S255>/Constant2'
     *  DataStoreRead: '<S253>/StatusByte_Aux_TF_Pmp_CM_Fdbck'
     *  DataStoreRead: '<S254>/StatusByte_Aux_TF_Pmp_CM_Ckt'
     *  DataStoreRead: '<S255>/StatusByte_Aux_TF_Pmp_CM_Fdbck_SigRan'
     *  Logic: '<S220>/OR1'
     *  Logic: '<S220>/OR2'
     *  Logic: '<S220>/OR3'
     *  Logic: '<S220>/OR4'
     *  Logic: '<S220>/OR5'
     *  Logic: '<S220>/OR6'
     *  Logic: '<S253>/Logical Operator'
     *  Logic: '<S254>/Logical Operator'
     *  Logic: '<S255>/Logical Operator'
     *  RelationalOperator: '<S253>/Relational Operator1'
     *  RelationalOperator: '<S253>/Relational Operator2'
     *  RelationalOperator: '<S254>/Relational Operator1'
     *  RelationalOperator: '<S254>/Relational Operator2'
     *  RelationalOperator: '<S255>/Relational Operator1'
     *  RelationalOperator: '<S255>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S253>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S253>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S254>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S254>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S255>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S255>/Bitwise Operator2'
     */
    rtb_Logical4 = ((KeTAPR_b_IgnrallEOPFaults_Kmhev) || ((((((((uint32)
                           TAPR_ac_DW.StatusByte_Aux_TF_Pmp_CM_Fdbck) & 1U) ==
                         0U) || ((((uint32)
                           TAPR_ac_DW.StatusByte_Aux_TF_Pmp_CM_Fdbck) & 64U) !=
                         0U)) || (!KeTAPR_b_DsblDTC_CmCkt_Kmhev)) &&
                      ((((((uint32)TAPR_ac_DW.StatusByte_Aux_TF_Pmp_CM_Ckt) & 1U)
                         == 0U) || ((((uint32)
                           TAPR_ac_DW.StatusByte_Aux_TF_Pmp_CM_Ckt) & 64U) != 0U))
                       || (!KeTAPR_b_DsblDTC_CmFdbck_Kmhev))) && ((((((uint32)
                          TAPR_ac_DW.StatusByte_Aux_TF_Pmp_CM_Fdbck_SigRan) & 1U)
                        == 0U) || ((((uint32)
                          TAPR_ac_DW.StatusByte_Aux_TF_Pmp_CM_Fdbck_SigRan) &
                         64U) != 0U)) || (!KeTAPR_b_DsblDTC_SigRan_Kmhev))));

    /* Switch: '<S233>/Switch1' */
    if (rtb_Logical4)
    {
        /* Switch: '<S220>/Switch2' */
        if (rtb_LessThan3)
        {
            /* Switch: '<S233>/Switch1' */
            rtb_Switch_e4 = VeTAPR_n_EOP_DsrdSpd;
        }
        else
        {
            /* Switch: '<S233>/Switch1' incorporates:
             *  Constant: '<S237>/Calib'
             */
            rtb_Switch_e4 = KeTAPR_n_EOP_Off;
        }

        /* End of Switch: '<S220>/Switch2' */
    }
    else
    {
        /* Switch: '<S233>/Switch1' incorporates:
         *  Constant: '<S239>/Calib'
         */
        rtb_Switch_e4 = KeTAPR_n_EOPFault_Off;
    }

    /* End of Switch: '<S233>/Switch1' */
    /* End of Outputs for SubSystem: '<S1>/TAPC' */
    (void)Rte_Read_VePMIR_n_EOP_SpeedFdbk_Value(&rtb_Switch1);

    /* Outputs for Function Call SubSystem: '<S1>/TAPC' */
    /* Sum: '<S220>/Sum1' incorporates:
     *  Inport: '<Root>/VePMIR_n_EOP_SpeedFdbk'
     */
    rtb_Switch_a2 = rtb_Switch_e4 - rtb_Switch1;

    /* Outputs for Atomic SubSystem: '<S220>/PIDControl' */
    /* Switch: '<S252>/Switch' */
    if (rtb_NotEqual)
    {
        /* Switch: '<S252>/Switch' incorporates:
         *  Constant: '<S240>/Calib'
         */
        rtb_Switch1 = KeTAPR_Pct_EOP_Intgrl_IV;
    }
    else
    {
        /* Switch: '<S252>/Switch' incorporates:
         *  Constant: '<S220>/ConstantValue'
         *  Constant: '<S235>/Calib'
         *  Product: '<S252>/Multiplication1'
         *  Sum: '<S252>/Sum_Sub'
         *  UnitDelay: '<S252>/UnitDelay'
         */
        rtb_Switch1 = ((rtb_Switch_a2 * KeTAPR_K_EOP_Ki) * 0.025F) +
            TAPR_ac_DW.UnitDelay_DSTATE_f;
    }

    /* End of Switch: '<S252>/Switch' */

    /* Outputs for Atomic SubSystem: '<S252>/integral_term' */
    /* Switch: '<S256>/Switch1' incorporates:
     *  Constant: '<S242>/Calib'
     *  RelationalOperator: '<S256>/RelationalOperator'
     */
    if (KeTAPR_Pct_EOP_MX_Intgrl < rtb_Switch1)
    {
        /* Switch: '<S341>/Switch1' */
        rtb_Switch1 = KeTAPR_Pct_EOP_MX_Intgrl;
    }

    /* End of Switch: '<S256>/Switch1' */

    /* Switch: '<S256>/Switch' incorporates:
     *  Constant: '<S241>/Calib'
     *  RelationalOperator: '<S256>/RelationalOperator1'
     *  UnitDelay: '<S252>/UnitDelay'
     */
    if (rtb_Switch1 > KeTAPR_Pct_EOP_MN_Intgrl)
    {
        TAPR_ac_DW.UnitDelay_DSTATE_f = rtb_Switch1;
    }
    else
    {
        TAPR_ac_DW.UnitDelay_DSTATE_f = KeTAPR_Pct_EOP_MN_Intgrl;
    }

    /* End of Switch: '<S256>/Switch' */
    /* End of Outputs for SubSystem: '<S252>/integral_term' */

    /* Switch: '<S252>/Switch1' */
    if (rtb_LessThan3)
    {
        /* Switch: '<S252>/Switch1' incorporates:
         *  Constant: '<S220>/ConstantValue'
         *  Constant: '<S234>/Calib'
         *  Constant: '<S236>/Calib'
         *  Product: '<S252>/Multiplication2'
         *  Product: '<S252>/derivative_term'
         *  Product: '<S252>/proportional_term'
         *  Sum: '<S252>/Sum_Sub1'
         *  Sum: '<S252>/Sum_Sub2'
         *  UnitDelay: '<S252>/UnitDelay'
         *  UnitDelay: '<S252>/UnitDelay1'
         */
        VeTAPR_Pct_ClsdLp_PWM_Raw = (((rtb_Switch_a2 -
            TAPR_ac_DW.UnitDelay1_DSTATE) * KeTAPR_K_EOP_Kd) / 0.025F) +
            ((rtb_Switch_a2 * KeTAPR_K_EOP_Kp) + TAPR_ac_DW.UnitDelay_DSTATE_f);
    }

    /* End of Switch: '<S252>/Switch1' */

    /* Update for UnitDelay: '<S252>/UnitDelay1' */
    TAPR_ac_DW.UnitDelay1_DSTATE = rtb_Switch_a2;

    /* End of Outputs for SubSystem: '<S220>/PIDControl' */

    /* Lookup_n-D: '<S257>/Vector' incorporates:
     *  Lookup_n-D: '<S258>/Vector'
     *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
     */
    VeTAPR_Pct_EOP_OpLp_PWM = look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTFTR_T_TransO, VeTAPR_n_EOP_DsrdSpd, ((const
           float32 *)&(KxTAPR_Pct_EOP_Spd_2_PWM[0])), ((const float32 *)
          &(KyTAPR_Pct_EOP_Spd_2_PWM[0])), ((const float32 *)
          &(KtTAPR_Pct_EOP_Spd_2_PWM[0])), TAPR_ac_ConstP.pooled4, 4U);

    /* Switch: '<S232>/Switch1' */
    if (rtb_Logical4)
    {
        /* Switch: '<S220>/Switch' */
        if (rtb_LessThan3)
        {
            /* Sum: '<S220>/Sum2' */
            rtb_Switch_a2 = VeTAPR_Pct_ClsdLp_PWM_Raw + VeTAPR_Pct_EOP_OpLp_PWM;

            /* Outputs for Atomic SubSystem: '<S220>/Limiter' */
            /* Switch: '<S251>/Switch1' incorporates:
             *  Constant: '<S243>/Calib'
             *  RelationalOperator: '<S251>/RelationalOperator'
             */
            if (KeTAPR_Pct_EOP_Max_PWM < rtb_Switch_a2)
            {
                /* Switch: '<S251>/Switch1' */
                rtb_Switch_a2 = KeTAPR_Pct_EOP_Max_PWM;
            }

            /* End of Switch: '<S251>/Switch1' */

            /* Switch: '<S251>/Switch' incorporates:
             *  Constant: '<S247>/Calib'
             *  RelationalOperator: '<S251>/RelationalOperator1'
             */
            if (rtb_Switch_a2 <= KeTAPR_Pct_EOP_Min_PWM)
            {
                /* Switch: '<S340>/Switch1' incorporates:
                 *  Switch: '<S220>/Switch'
                 */
                rtb_Switch_a2 = KeTAPR_Pct_EOP_Min_PWM;
            }

            /* End of Switch: '<S251>/Switch' */
            /* End of Outputs for SubSystem: '<S220>/Limiter' */
        }
        else
        {
            /* Switch: '<S340>/Switch1' incorporates:
             *  Constant: '<S248>/Calib'
             *  Switch: '<S220>/Switch'
             */
            rtb_Switch_a2 = KeTAPR_Pct_EOP_Off;
        }

        /* End of Switch: '<S220>/Switch' */
    }
    else
    {
        /* Switch: '<S340>/Switch1' incorporates:
         *  Constant: '<S249>/Calib'
         */
        rtb_Switch_a2 = KeTAPR_Pct_EOPFault_Off;
    }

    /* End of Switch: '<S232>/Switch1' */
    /* End of Outputs for SubSystem: '<S1>/TAPC' */
    (void)Rte_Read_VePMIR_e_PWM_EOP_IOCtrlMode_Value(&tmpRead_b);

    /* Outputs for Function Call SubSystem: '<S1>/TAPC' */
    /* SignalConversion generated from: '<S159>/VariantSource' incorporates:
     *  Inport: '<Root>/VePMIR_e_PWM_EOP_IOCtrlMode'
     */
#if !Rte_SysCon_Variant_TAPR_FUNC_3

    /* Switch: '<S340>/Switch1' incorporates:
     *  Constant: '<S159>/ConstantValue'
     */
    rtb_Switch_a2 = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S159>/VariantSource' */
    /* End of Outputs for SubSystem: '<S1>/TAPC' */
    (void)Rte_Read_VePMIR_Pct_PWM_EOP_IOCtrlSpd_Value(&tmpRead_c);

    /* Outputs for Function Call SubSystem: '<S1>/TAPC' */
    /* Switch: '<S224>/Switch1' incorporates:
     *  Constant: '<S221>/Constant'
     *  Inport: '<Root>/VePMIR_Pct_PWM_EOP_IOCtrlSpd'
     *  Inport: '<Root>/VePMIR_e_PWM_EOP_IOCtrlMode'
     *  RelationalOperator: '<S159>/Comparison1'
     */
    if (((uint32)tmpRead_b) == CeTAIR_e_Short_Term_Adjustment)
    {
        /* Outputs for Function Call SubSystem: '<S1>/FUNC_Outputs' */
        /* Gain: '<S21>/Gain' incorporates:
         *  Outport: '<Root>/VeTAPR_Pct_ElecOilPmp_Cmd'
         */
        (void)Rte_Write_VeTAPR_Pct_ElecOilPmp_Cmd_Value(tmpRead_c);

        /* End of Outputs for SubSystem: '<S1>/FUNC_Outputs' */
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/FUNC_Outputs' */
        /* Gain: '<S21>/Gain' incorporates:
         *  Outport: '<Root>/VeTAPR_Pct_ElecOilPmp_Cmd'
         */
        (void)Rte_Write_VeTAPR_Pct_ElecOilPmp_Cmd_Value(rtb_Switch_a2);

        /* End of Outputs for SubSystem: '<S1>/FUNC_Outputs' */
    }

    /* End of Switch: '<S224>/Switch1' */

    /* SignalConversion generated from: '<S5>/AuxPump2PostRunCmd' incorporates:
     *  Constant: '<S304>/Calib'
     */
    TAPR_ac_B.OutportBufferForAuxPump2PostRunCmd = KeTAPR_e_AuxPump2PostRunCmd;

    /* SignalConversion generated from: '<S5>/RelayFrequency' incorporates:
     *  Constant: '<S229>/Calib'
     */
    TAPR_ac_B.OutportBufferForRelayFrequency = KeTAPR_f_RelayFrequency;

    /* Logic: '<S360>/Logical1' incorporates:
     *  Constant: '<S417>/Constant'
     *  Constant: '<S418>/Constant'
     *  RelationalOperator: '<S360>/Comparison1'
     *  RelationalOperator: '<S360>/Comparison2'
     *  UnitDelay: '<S360>/UnitDelay6'
     */
    rtb_Logical4 = ((((uint32)rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) ==
                     CePMDR_e_PowerMode_Run) && (((uint32)
                      TAPR_ac_DW.UnitDelay6_DSTATE_j) == CePMDR_e_PowerMode_Acc));

    /* Outputs for Atomic SubSystem: '<S360>/EdgeRising1' */
    /* Logic: '<S414>/OR1' incorporates:
     *  UnitDelay: '<S414>/Unit Delay'
     */
    rtb_AND_i3 = !TAPR_ac_DW.UnitDelay_DSTATE_jj;

    /* Update for UnitDelay: '<S414>/Unit Delay' */
    TAPR_ac_DW.UnitDelay_DSTATE_jj = rtb_Logical4;

    /* End of Outputs for SubSystem: '<S360>/EdgeRising1' */

    /* Logic: '<S360>/Logical2' incorporates:
     *  Constant: '<S416>/Constant'
     *  Constant: '<S419>/Constant'
     *  RelationalOperator: '<S360>/Comparison3'
     *  RelationalOperator: '<S360>/Comparison4'
     */
    rtb_NotEqual = ((((uint32)Switch_p) == CeESSR_e_EngRunning) || (((uint32)
                      rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) ==
                     CePMDR_e_PowerMode_Off));

    /* Outputs for Atomic SubSystem: '<S360>/EdgeRising2' */
    /* Logic: '<S415>/AND' incorporates:
     *  Logic: '<S415>/OR1'
     *  UnitDelay: '<S415>/Unit Delay'
     */
    rtb_LessThan3 = (rtb_NotEqual && (!TAPR_ac_DW.UnitDelay_DSTATE_ld));

    /* Update for UnitDelay: '<S415>/Unit Delay' */
    TAPR_ac_DW.UnitDelay_DSTATE_ld = rtb_NotEqual;

    /* End of Outputs for SubSystem: '<S360>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S360>/TimerRetriggerResetEnabled' */
    /* Outputs for Atomic SubSystem: '<S360>/SignalLatchOnWithReset1' */
    /* Logic: '<S423>/NOT' incorporates:
     *  Logic: '<S360>/Logical7'
     *  Switch: '<S424>/Switch1'
     */
    rtb_NotEqual = !rtb_LessThan3;

    /* End of Outputs for SubSystem: '<S360>/TimerRetriggerResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S360>/EdgeRising1' */
    /* Logic: '<S423>/OR1' incorporates:
     *  Logic: '<S414>/AND'
     *  Logic: '<S423>/NOT'
     *  Logic: '<S423>/OR'
     *  UnitDelay: '<S423>/Unit Delay'
     */
    TAPR_ac_DW.UnitDelay_DSTATE_o = ((rtb_Logical4 && rtb_AND_i3) ||
        (rtb_NotEqual && (TAPR_ac_DW.UnitDelay_DSTATE_o)));

    /* End of Outputs for SubSystem: '<S360>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S360>/SignalLatchOnWithReset1' */

    /* Outputs for Atomic SubSystem: '<S354>/AuxPump_fltrd' */
    /* RelationalOperator: '<S380>/Equal1' incorporates:
     *  Constant: '<S384>/Calib'
     */
    rtb_Logical4 = (rtb_TmpSignalConversionAtVePMIR_n_AuxPum <=
                    KeTAPR_n_AuxPumpMinThrsh);

    /* Outputs for Atomic SubSystem: '<S380>/Timer_Reset_Trigger_Enabled' */
    /* Outputs for Atomic SubSystem: '<S387>/EdgeRising_F2T' */
    /* Logic: '<S388>/AND' incorporates:
     *  Logic: '<S388>/OR1'
     *  UnitDelay: '<S388>/Unit Delay'
     */
    rtb_AND_i3 = (rtb_Logical4 && (!TAPR_ac_DW.UnitDelay_DSTATE_ht));

    /* Update for UnitDelay: '<S388>/Unit Delay' */
    TAPR_ac_DW.UnitDelay_DSTATE_ht = rtb_Logical4;

    /* End of Outputs for SubSystem: '<S387>/EdgeRising_F2T' */

    /* Switch: '<S387>/Switch1' incorporates:
     *  Constant: '<S383>/Calib'
     *  Constant: '<S385>/Calib'
     *  Constant: '<S387>/Constant Value3'
     *  Logic: '<S387>/AND1'
     *  RelationalOperator: '<S380>/Equal3'
     *  RelationalOperator: '<S387>/Greater  Than2'
     *  Switch: '<S387>/Switch2'
     *  UnitDelay: '<S387>/Unit Delay'
     */
    if (rtb_AND_i3 && (TAPR_ac_DW.UnitDelay_DSTATE_ps <= 0.0F))
    {
        TAPR_ac_DW.UnitDelay_DSTATE_ps = KeTAPR_t_AuxPumpMaxTmThrsh;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVePMIR_n_AuxPum >= KeTAPR_n_AuxPumpMaxThrsh)
        {
            /* Switch: '<S387>/Switch2' incorporates:
             *  Constant: '<S386>/Calib'
             *  Constant: '<S387>/Constant Value4'
             *  MinMax: '<S387>/Maximum'
             *  Sum: '<S387>/Subtraction'
             */
            TAPR_ac_DW.UnitDelay_DSTATE_ps = fmaxf
                (TAPR_ac_DW.UnitDelay_DSTATE_ps - KeTAPR_t_dT, 0.0F);
        }
    }

    /* End of Switch: '<S387>/Switch1' */
    /* End of Outputs for SubSystem: '<S380>/Timer_Reset_Trigger_Enabled' */
    /* End of Outputs for SubSystem: '<S354>/AuxPump_fltrd' */

    /* If: '<S354>/FilteringTrigger' incorporates:
     *  Constant: '<S381>/Calib'
     */
    if (KeTAPR_b_AuxPumpSpdFilterEnable)
    {
        /* Outputs for Atomic SubSystem: '<S354>/AuxPump_fltrd' */
        /* Outputs for Atomic SubSystem: '<S380>/Timer_Reset_Trigger_Enabled' */
        /* Switch: '<S380>/Switch2' incorporates:
         *  Constant: '<S380>/Constant'
         *  Constant: '<S387>/Constant Value2'
         *  Logic: '<S380>/LogicalOperator'
         *  RelationalOperator: '<S387>/Greater  Than1'
         *  UnitDelay: '<S387>/Unit Delay'
         */
        if (TAPR_ac_DW.UnitDelay_DSTATE_ps <= 0.0F)
        {
            rtb_Switch1 = rtb_TmpSignalConversionAtVePMIR_n_AuxPum;
        }
        else
        {
            rtb_Switch1 = 0.0F;
        }

        /* End of Switch: '<S380>/Switch2' */
        /* End of Outputs for SubSystem: '<S380>/Timer_Reset_Trigger_Enabled' */
        /* End of Outputs for SubSystem: '<S354>/AuxPump_fltrd' */

        /* Outputs for IfAction SubSystem: '<S354>/PassThrough' incorporates:
         *  ActionPort: '<S382>/Else'
         */
        TAPR_ac_PassThrough(rtb_Switch1, (&(VeTAPR_n_AuxPumpFltrd_B4Dial)));

        /* End of Outputs for SubSystem: '<S354>/PassThrough' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S354>/AuxPump_NOTfltrd' incorporates:
         *  ActionPort: '<S379>/Else'
         */
        TAPR_ac_PassThrough(rtb_TmpSignalConversionAtVePMIR_n_AuxPum,
                            (&(VeTAPR_n_AuxPumpFltrd_B4Dial)));

        /* End of Outputs for SubSystem: '<S354>/AuxPump_NOTfltrd' */
    }

    /* End of If: '<S354>/FilteringTrigger' */
    /* End of Outputs for SubSystem: '<S1>/TAPC' */
    (void)Rte_Read_VeTHMR_dV_MtrA_CoolFlwCmd_Value(&rtb_Vector_l);
    (void)Rte_Read_VeTHMR_e_EOP_A_EmrgCoolState_Value(&tmpRead_7);
    (void)Rte_Read_VePMIR_T_TransAuxPumpTemp_Value(&tmpRead_3);

    /* Outputs for Function Call SubSystem: '<S1>/TAPC' */
    /* Lookup_n-D: '<S279>/Vector' incorporates:
     *  Inport: '<Root>/VePMIR_T_TransAuxPumpTemp'
     *  Inport: '<Root>/VeTHMR_dV_MtrA_CoolFlwCmd'
     *  Inport: '<Root>/VeTHMR_e_EOP_A_EmrgCoolState'
     */
    VeTAPR_n_AuxPumpSpdCmndMax = look1_iflf_binlca_16a(tmpRead_3, ((const
        float32 *)&(KxTAPR_n_AuxPumpSpdCmndMax[0])), ((const float32 *)
        &(KtTAPR_n_AuxPumpSpdCmndMax[0])), 9U);

    /* Lookup_n-D: '<S284>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VePMIR_n_TransAuxPump2SpdAct'
     */
    rtb_Switch1 = look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVePMIR_n_TransA,
        ((const float32 *)&(KxTAPR_n_AuxPump2SpdMax[0])), ((const float32 *)
        &(KtTAPR_n_AuxPump2SpdMax[0])), 9U);

    /* Product: '<S261>/Product2' incorporates:
     *  Constant: '<S281>/Calib'
     *  Lookup_n-D: '<S283>/Vector'
     *  Product: '<S261>/Product1'
     *  SignalConversion generated from: '<S1>/VePMIR_n_TransAuxPump2SpdAct'
     *  UnitDelay: '<S261>/UnitDelay'
     */
    TAPR_ac_DW.UnitDelay_DSTATE = (rtb_TmpSignalConversionAtVeTHMR_dV_MtrB_ /
        KeTAPR_K_AuxPump2VolPerRev) / look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVePMIR_n_TransA, TAPR_ac_DW.UnitDelay_DSTATE,
         ((const float32 *)&(KxTAPR_K_AuxPump2VolumetricEff[0])), ((const
           float32 *)&(KyTAPR_K_AuxPump2VolumetricEff[0])), ((const float32 *)
          &(KtTAPR_K_AuxPump2VolumetricEff[0])), TAPR_ac_ConstP.pooled3, 5U);

    /* Outputs for Atomic SubSystem: '<S261>/Limiter' */
    /* Switch: '<S285>/Switch1' incorporates:
     *  RelationalOperator: '<S285>/RelationalOperator'
     *  UnitDelay: '<S261>/UnitDelay'
     */
    if (rtb_Switch1 >= TAPR_ac_DW.UnitDelay_DSTATE)
    {
        /* Switch: '<S341>/Switch1' */
        rtb_Switch1 = TAPR_ac_DW.UnitDelay_DSTATE;
    }

    /* End of Switch: '<S285>/Switch1' */

    /* Switch: '<S285>/Switch' incorporates:
     *  Constant: '<S282>/Calib'
     *  RelationalOperator: '<S285>/RelationalOperator1'
     */
    if (rtb_Switch1 > KeTAPR_n_AuxPump2SpdMin)
    {
        /* Switch: '<S285>/Switch' */
        rtb_TmpSignalConversionAtVeTHMR_dV_MtrB_ = rtb_Switch1;
    }
    else
    {
        /* Switch: '<S285>/Switch' */
        rtb_TmpSignalConversionAtVeTHMR_dV_MtrB_ = KeTAPR_n_AuxPump2SpdMin;
    }

    /* End of Switch: '<S285>/Switch' */
    /* End of Outputs for SubSystem: '<S261>/Limiter' */
    /* End of Outputs for SubSystem: '<S1>/TAPC' */

    /* Outputs for Function Call SubSystem: '<S1>/Subsystem8' */
    /* Switch: '<S43>/Switch' incorporates:
     *  Constant: '<S47>/Calib'
     *  Constant: '<S48>/Calib'
     */
    if (KeTAPR_b_AuxPumpSpdDsrd_SelDial)
    {
        tmpRead = KeTAPR_Pct_AuxPumpSpdDsrd_Dial;
    }

    /* End of Switch: '<S43>/Switch' */
    /* End of Outputs for SubSystem: '<S1>/Subsystem8' */

    /* Outputs for Function Call SubSystem: '<S1>/TAPC' */
    /* Product: '<S268>/Multiplication' incorporates:
     *  Constant: '<S268>/ConstantValue'
     *  Constant: '<S269>/Calib'
     */
    VeTAPR_n_HCCR_AuxPumpSpdDsrd_convrtd = (KeTAPR_n_MaxAuxPumpSpd * 0.01F) *
        tmpRead;

    /* Product: '<S259>/Product2' incorporates:
     *  Constant: '<S262>/Calib'
     *  Lookup_n-D: '<S265>/Vector'
     *  Product: '<S259>/Product1'
     *  SignalConversion generated from: '<S1>/VePMIR_T_TransAuxPump2OilTemp'
     *  UnitDelay: '<S259>/UnitDelay'
     */
    VeTAPR_n_AuxPumpSpd_NoLim = (rtb_Vector_l / KeTAPR_K_AuxPumpVolPerRev) /
        look2_iflf_binlca_16a(rtb_TmpSignalConversionAtVePMIR_T_Tran_f,
        TAPR_ac_DW.UnitDelay_DSTATE_d, ((const float32 *)
        &(KxTAPR_K_AuxPumpVolumetricEff[0])), ((const float32 *)
        &(KyTAPR_K_AuxPumpVolumetricEff[0])), ((const float32 *)
        &(KtTAPR_K_AuxPumpVolumetricEff[0])), TAPR_ac_ConstP.pooled3, 5U);

    /* Switch: '<S260>/Switch3' incorporates:
     *  Constant: '<S263>/Calib'
     *  Constant: '<S271>/Calib'
     *  Inport: '<Root>/VePMIR_b_PWM_TAP_Sel'
     *  Switch: '<S259>/Switch1'
     */
    if (KeTAPR_b_DesiredRPMSelector)
    {
        /* Switch: '<S260>/Switch3' */
        rtb_Vector_h = rtb_TmpSignalConversionAtVeTHMR_dV_MtrB_;
    }
    else if (KeTAPR_b_HCCRAuxPumpSpeed)
    {
        (void)Rte_Read_VePMIR_b_PWM_TAP_Sel_Value(&rtb_LessThan3_n);

        /* Switch: '<S259>/Switch' incorporates:
         *  Constant: '<S49>/Calib'
         *  Inport: '<Root>/VePMIR_b_PWM_TAP_Sel'
         *  Switch: '<S259>/Switch1'
         *  Switch: '<S44>/Switch'
         */
        if (rtb_LessThan3_n)
        {
            /* Switch: '<S260>/Switch3' incorporates:
             *  Switch: '<S259>/Switch1'
             */
            rtb_Vector_h = VeTAPR_n_HCCR_AuxPumpSpdDsrd_convrtd;
        }
        else
        {
            /* Outputs for Function Call SubSystem: '<S1>/Subsystem8' */
            if (KeTAPR_b_AuxPumpSpd_DsrdRPM_SelDial)
            {
                /* Switch: '<S44>/Switch' incorporates:
                 *  Constant: '<S50>/Calib'
                 *  Switch: '<S259>/Switch1'
                 *  Switch: '<S260>/Switch3'
                 */
                rtb_Vector_h = KeTAPR_n_AuxPumpSpdDsrd_Dial;
            }

            /* End of Outputs for SubSystem: '<S1>/Subsystem8' */
        }

        /* End of Switch: '<S259>/Switch' */
    }
    else
    {
        /* Lookup_n-D: '<S266>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VePMIR_T_TransAuxPump2OilTemp'
         *  Switch: '<S259>/Switch1'
         */
        rtb_Vector_h = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVePMIR_T_Tran_f, ((const float32 *)
              &(KxTAPR_n_AuxPumpSpdMax[0])), ((const float32 *)
              &(KtTAPR_n_AuxPumpSpdMax[0])), 5U);

        /* Outputs for Atomic SubSystem: '<S259>/Limiter' */
        /* Switch: '<S267>/Switch1' incorporates:
         *  RelationalOperator: '<S267>/RelationalOperator'
         *  Switch: '<S259>/Switch1'
         */
        if (rtb_Vector_h >= VeTAPR_n_AuxPumpSpd_NoLim)
        {
            /* Switch: '<S267>/Switch1' */
            rtb_Vector_h = VeTAPR_n_AuxPumpSpd_NoLim;
        }

        /* End of Switch: '<S267>/Switch1' */

        /* Switch: '<S267>/Switch' incorporates:
         *  Constant: '<S264>/Calib'
         *  RelationalOperator: '<S267>/RelationalOperator1'
         *  Switch: '<S259>/Switch1'
         */
        if (rtb_Vector_h <= KeTAPR_n_AuxPumpSpdMin)
        {
            /* Switch: '<S260>/Switch3' incorporates:
             *  Switch: '<S259>/Switch1'
             */
            rtb_Vector_h = KeTAPR_n_AuxPumpSpdMin;
        }

        /* End of Switch: '<S267>/Switch' */
        /* End of Outputs for SubSystem: '<S259>/Limiter' */
    }

    /* End of Switch: '<S260>/Switch3' */
    /* End of Outputs for SubSystem: '<S1>/TAPC' */
    (void)Rte_Read_VePMIR_I_TransAuxPumpCurrent_Value(&tmpRead_4);

    /* Outputs for Function Call SubSystem: '<S1>/TAPC' */
    /* Outputs for Atomic SubSystem: '<S276>/Limiter' */
    /* Switch: '<S280>/Switch1' incorporates:
     *  Inport: '<Root>/VePMIR_I_TransAuxPumpCurrent'
     *  RelationalOperator: '<S280>/RelationalOperator'
     */
    if (VeTAPR_n_AuxPumpSpdCmndMax < rtb_Vector_h)
    {
        /* Switch: '<S341>/Switch1' */
        rtb_Switch1 = VeTAPR_n_AuxPumpSpdCmndMax;
    }
    else
    {
        /* Switch: '<S341>/Switch1' */
        rtb_Switch1 = rtb_Vector_h;
    }

    /* End of Switch: '<S280>/Switch1' */

    /* Switch: '<S280>/Switch' incorporates:
     *  Constant: '<S278>/Calib'
     *  RelationalOperator: '<S280>/RelationalOperator1'
     */
    if (rtb_Switch1 > KeTAPR_n_AuxPumpSpdCmndMin)
    {
        /* Switch: '<S280>/Switch' */
        VeTAPR_n_AuxPumpSpdCmndLtd = rtb_Switch1;
    }
    else
    {
        /* Switch: '<S280>/Switch' */
        VeTAPR_n_AuxPumpSpdCmndLtd = KeTAPR_n_AuxPumpSpdCmndMin;
    }

    /* End of Switch: '<S280>/Switch' */
    /* End of Outputs for SubSystem: '<S276>/Limiter' */

    /* Lookup_n-D: '<S295>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VePMIR_n_AuxPumpSpdAct'
     *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
     */
    rtb_Vector_l = look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeTFTR_T_TransO,
         rtb_TmpSignalConversionAtVePMIR_n_AuxPum, ((const float32 *)
          &(KxTAPR_dn_AuxPumpLU[0])), ((const float32 *)&(KyTAPR_dn_AuxPumpLU[0])),
         ((const float32 *)&(KtTAPR_dn_AuxPumpLU[0])), TAPR_ac_ConstP.pooled5,
         4U);

    /* Outputs for Atomic SubSystem: '<S163>/GradientLimiter1' */
    /* Sum: '<S288>/Sum2' incorporates:
     *  Inport: '<Root>/VePMIR_I_TransAuxPumpCurrent'
     *  Lookup_n-D: '<S293>/Vector'
     *  Lookup_n-D: '<S294>/Vector'
     *  Lookup_n-D: '<S296>/Vector'
     *  Product: '<S163>/Division3'
     *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
     *  Switch: '<S39>/Switch'
     *  UnitDelay: '<S288>/UnitDelay'
     */
    rtb_Switch_a2 = ((look1_iflf_binlca_16a
                      (rtb_TmpSignalConversionAtVeTFTR_T_TransO, ((const float32
                         *)&(KxTAPR_n_AuxSpdCmnd[0])), ((const float32 *)
                        &(KtTAPR_n_AuxSpdCmnd[0])), 9U) * look2_iflf_binlca_16a
                      (rtb_TmpSignalConversionAtVeTFTR_T_TransO, Switch_gs, ((
                         const float32 *)&(KxTAPR_Pct_AuxSpdMod[0])), ((const
                         float32 *)&(KyTAPR_Pct_AuxSpdMod[0])), ((const float32 *)
                        &(KtTAPR_Pct_AuxSpdMod[0])), TAPR_ac_ConstP.pooled5, 4U))
                     * look1_iflf_binlca_16a(tmpRead_4, ((const float32 *)
                       &(KxTAPR_Pct_AuxSpdModCurr[0])), ((const float32 *)
                       &(KtTAPR_Pct_AuxSpdModCurr[0])), 9U)) -
        TAPR_ac_DW.UnitDelay_DSTATE_df;

    /* Outputs for Atomic SubSystem: '<S288>/Limiter' */
    /* Switch: '<S297>/Switch1' incorporates:
     *  RelationalOperator: '<S297>/RelationalOperator'
     */
    if (rtb_Vector_l < rtb_Switch_a2)
    {
        /* Switch: '<S340>/Switch1' */
        rtb_Switch_a2 = rtb_Vector_l;
    }

    /* End of Switch: '<S297>/Switch1' */

    /* Switch: '<S297>/Switch' incorporates:
     *  Constant: '<S163>/ConstantValue2'
     *  RelationalOperator: '<S297>/RelationalOperator1'
     */
    if (rtb_Switch_a2 <= -999999.0F)
    {
        rtb_Switch_a2 = -999999.0F;
    }

    /* End of Switch: '<S297>/Switch' */
    /* End of Outputs for SubSystem: '<S288>/Limiter' */

    /* Sum: '<S288>/Sum3' incorporates:
     *  UnitDelay: '<S288>/UnitDelay'
     */
    TAPR_ac_DW.UnitDelay_DSTATE_df += rtb_Switch_a2;

    /* End of Outputs for SubSystem: '<S163>/GradientLimiter1' */

    /* Switch: '<S163>/Switch' incorporates:
     *  Constant: '<S289>/Calib'
     *  Inport: '<Root>/VePMIR_e_TransAuxPumpStallEvent'
     */
    if (KeTAPR_b_AuxPumpSpd_CmndRaw_SelDial)
    {
        /* Switch: '<S163>/Switch' incorporates:
         *  Constant: '<S291>/Calib'
         */
        VeTAPR_n_AuxPumpSpd_Cmnd_Raw = KeTAPR_n_AuxPumpSpd_CmndRaw_Dial;
    }
    else
    {
        (void)Rte_Read_VePMIR_e_TransAuxPumpStallEvent_Value(&tmpRead_5);

        /* Switch: '<S163>/Switch1' incorporates:
         *  Constant: '<S286>/Constant'
         *  Inport: '<Root>/VePMIR_b_TransAuxPumpTCMReq'
         *  Inport: '<Root>/VePMIR_e_TransAuxPumpStallEvent'
         *  RelationalOperator: '<S163>/LessThan3'
         */
        if (((uint32)tmpRead_5) == CeTAPR_e_TEP_STALL)
        {
            /* Switch: '<S163>/Switch' incorporates:
             *  Constant: '<S292>/Calib'
             *  Switch: '<S163>/Switch1'
             */
            VeTAPR_n_AuxPumpSpd_Cmnd_Raw = KeTAPR_n_PumpSpdPrime_Req;
        }
        else
        {
            (void)Rte_Read_VePMIR_b_TransAuxPumpTCMReq_Value(&rtb_OR1_do);

            /* Outputs for Function Call SubSystem: '<S1>/Subsystem8' */
            /* Switch: '<S38>/Switch1' incorporates:
             *  Constant: '<S84>/Calib'
             *  Constant: '<S86>/Calib'
             *  Inport: '<Root>/VePMIR_b_TransAuxPumpTCMReq'
             */
            if (KeTAPR_b_TransFldPmpCmd_SelDial)
            {
                tmpRead_1 = KeTAPR_e_TransFldPmpCmd_Dial;
            }

            /* End of Switch: '<S38>/Switch1' */
            /* End of Outputs for SubSystem: '<S1>/Subsystem8' */

            /* Switch: '<S163>/Switch2' incorporates:
             *  Constant: '<S287>/Constant'
             *  Logic: '<S163>/OR1'
             *  RelationalOperator: '<S163>/LessThan1'
             *  RelationalOperator: '<S163>/LessThan2'
             */
            if ((!rtb_OR1_do) && (((uint32)tmpRead_1) == CeESSR_e_On))
            {
                /* Switch: '<S163>/Switch' incorporates:
                 *  Switch: '<S163>/Switch1'
                 *  UnitDelay: '<S288>/UnitDelay'
                 */
                VeTAPR_n_AuxPumpSpd_Cmnd_Raw = TAPR_ac_DW.UnitDelay_DSTATE_df;
            }
            else
            {
                /* Switch: '<S163>/Switch' incorporates:
                 *  Constant: '<S290>/Calib'
                 *  Switch: '<S163>/Switch1'
                 */
                VeTAPR_n_AuxPumpSpd_Cmnd_Raw = KeTAPR_n_AuxPumpOffSpdCmnd;
            }

            /* End of Switch: '<S163>/Switch2' */
        }

        /* End of Switch: '<S163>/Switch1' */
    }

    /* End of Switch: '<S163>/Switch' */

    /* Switch: '<S260>/Switch' incorporates:
     *  Constant: '<S272>/Calib'
     *  Inport: '<Root>/VePMIR_e_TAP_ColdBiasSts'
     */
    if (KeTAPR_b_PumpSpdCmnd_RPM_AllComb_SelDial)
    {
        /* Switch: '<S260>/Switch' incorporates:
         *  Constant: '<S275>/Calib'
         */
        VeTAPR_n_AuxPumpSpdCmnd_AllComb = KeTAPR_n_PumpSpdCmnd_RPM_AllComb_Dial;
    }
    else
    {
        (void)Rte_Read_VePMIR_e_TAP_ColdBiasSts_Value(&tmpRead_6);

        /* Switch: '<S260>/Switch1' incorporates:
         *  Constant: '<S270>/Constant'
         *  Inport: '<Root>/VePMIR_e_TAP_ColdBiasSts'
         *  Logic: '<S260>/OR1'
         *  RelationalOperator: '<S260>/LessThan1'
         *  RelationalOperator: '<S260>/LessThan2'
         *  RelationalOperator: '<S260>/LessThan3'
         */
        if (((VeTAPR_b_TransAuxPump_NotFlty_AD) && Switch_mw) && (((uint32)
                tmpRead_6) == CeTAPR_e_TAP_FalseTrueSNA_False))
        {
            /* Switch: '<S276>/Switch1' incorporates:
             *  Constant: '<S276>/ConstantValue2'
             *  Constant: '<S277>/Calib'
             *  RelationalOperator: '<S276>/LessThan1'
             */
            if (rtb_Vector_h > KeTAPR_n_AuxPumpRPMMinAllowed)
            {
                rtb_Vector_h = VeTAPR_n_AuxPumpSpdCmndLtd;
            }
            else
            {
                rtb_Vector_h = 0.0F;
            }

            /* End of Switch: '<S276>/Switch1' */

            /* Switch: '<S260>/Switch' incorporates:
             *  Constant: '<S273>/Calib'
             *  MinMax: '<S260>/MinMax2'
             *  Switch: '<S260>/Switch1'
             */
            VeTAPR_n_AuxPumpSpdCmnd_AllComb = fmaxf(fmaxf
                (KeTAPR_n_AuxPumpConstSpdDsrd, rtb_Vector_h),
                VeTAPR_n_AuxPumpSpd_Cmnd_Raw);
        }
        else
        {
            /* Switch: '<S260>/Switch' incorporates:
             *  Constant: '<S274>/Calib'
             *  Switch: '<S260>/Switch1'
             */
            VeTAPR_n_AuxPumpSpdCmnd_AllComb = KeTAPR_n_AuxPumpOffSpdCmnd;
        }

        /* End of Switch: '<S260>/Switch1' */
    }

    /* End of Switch: '<S260>/Switch' */

    /* Switch: '<S313>/Switch1' incorporates:
     *  Constant: '<S311>/Constant'
     *  Inport: '<Root>/VeTHMR_e_EOP_A_EmrgCoolState'
     *  RelationalOperator: '<S165>/Comparison1'
     */
    if (((uint32)tmpRead_7) == CeTHMR_e_OilPumpEmrgCool_ON)
    {
        /* Switch: '<S313>/Switch1' incorporates:
         *  Constant: '<S314>/Calib'
         */
        rtb_Switch1 = KeTAPR_n_EOP_A_EmergencyRunCommand;
    }
    else
    {
        /* Switch: '<S313>/Switch1' */
        rtb_Switch1 = VeTAPR_n_AuxPumpSpdCmnd_AllComb;
    }

    /* End of Switch: '<S313>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S165>/Limiter' */
    /* Switch: '<S320>/Switch1' incorporates:
     *  Constant: '<S319>/Calib'
     *  RelationalOperator: '<S320>/RelationalOperator'
     */
    if (KeTAPR_n_TAPUpLim < rtb_Switch1)
    {
        /* Switch: '<S341>/Switch1' */
        rtb_Switch1 = KeTAPR_n_TAPUpLim;
    }

    /* End of Switch: '<S320>/Switch1' */

    /* Switch: '<S320>/Switch' incorporates:
     *  Constant: '<S315>/Calib'
     *  RelationalOperator: '<S320>/RelationalOperator1'
     */
    if (rtb_Switch1 > KeTAPR_n_TAPDownLim)
    {
        /* Switch: '<S320>/Switch' */
        rtb_Vector_h = rtb_Switch1;
    }
    else
    {
        /* Switch: '<S320>/Switch' */
        rtb_Vector_h = KeTAPR_n_TAPDownLim;
    }

    /* End of Switch: '<S320>/Switch' */
    /* End of Outputs for SubSystem: '<S165>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S321>/EdgeRising' */
    /* Logic: '<S322>/AND' incorporates:
     *  Logic: '<S322>/OR1'
     *  UnitDelay: '<S322>/Unit Delay'
     */
    Switch_mw = !TAPR_ac_DW.UnitDelay_DSTATE_dz;

    /* Update for UnitDelay: '<S322>/Unit Delay' incorporates:
     *  Constant: '<S321>/TRUEConstant'
     */
    TAPR_ac_DW.UnitDelay_DSTATE_dz = true;

    /* End of Outputs for SubSystem: '<S321>/EdgeRising' */

    /* Switch: '<S324>/Switch1' */
    if (Switch_mw)
    {
        /* Switch: '<S341>/Switch1' incorporates:
         *  Constant: '<S315>/Calib'
         */
        rtb_Switch1 = KeTAPR_n_TAPDownLim;
    }
    else
    {
        /* Switch: '<S341>/Switch1' incorporates:
         *  UnitDelay: '<S324>/Unit Delay'
         */
        rtb_Switch1 = TAPR_ac_DW.UnitDelay_DSTATE_j;
    }

    /* End of Switch: '<S324>/Switch1' */

    /* Sum: '<S321>/Sum1' */
    rtb_Switch_a2 = rtb_Vector_h - rtb_Switch1;

    /* Outputs for Atomic SubSystem: '<S321>/Limiter1' */
    /* Switch: '<S323>/Switch1' incorporates:
     *  Constant: '<S316>/Calib'
     *  RelationalOperator: '<S323>/RelationalOperator'
     */
    if (KeTAPR_n_TAPIncrs_High < rtb_Switch_a2)
    {
        /* Switch: '<S340>/Switch1' */
        rtb_Switch_a2 = KeTAPR_n_TAPIncrs_High;
    }

    /* End of Switch: '<S323>/Switch1' */

    /* Switch: '<S323>/Switch' incorporates:
     *  Constant: '<S317>/Calib'
     *  RelationalOperator: '<S323>/RelationalOperator1'
     */
    if (rtb_Switch_a2 <= KeTAPR_n_TAPIncrs_Low)
    {
        rtb_Switch_a2 = KeTAPR_n_TAPIncrs_Low;
    }

    /* End of Switch: '<S323>/Switch' */
    /* End of Outputs for SubSystem: '<S321>/Limiter1' */

    /* Sum: '<S321>/Sum' */
    TAPR_ac_DW.UnitDelay_DSTATE_j = rtb_Switch_a2 + rtb_Switch1;

    /* Switch: '<S167>/Switch' incorporates:
     *  Constant: '<S310>/Constant'
     *  Constant: '<S346>/Calib'
     *  Inport: '<Root>/VePMIR_n_DVC_AuxPumpSpdDsrd'
     *  RelationalOperator: '<S165>/Comparison4'
     *  SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl'
     *  Switch: '<S312>/Switch1'
     */
    if (KeTAPR_b_AuxPumpSpd_CmdRPM_SelDial)
    {
        /* Switch: '<S167>/Switch' incorporates:
         *  Constant: '<S348>/Calib'
         *  Inport: '<Root>/VePMIR_n_DVC_AuxPumpSpdDsrd'
         */
        VeTAPR_n_TAP_AuxPumpSpdCmd = KeTAPR_n_AuxPumpSpd_Cmd_Dial;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVePMTR_e_ThrmlD) ==
             CePMTR_e_DISBL_All_Thrml)
    {
        /* Switch: '<S167>/Switch' incorporates:
         *  Constant: '<S318>/Calib'
         *  Inport: '<Root>/VePMIR_n_DVC_AuxPumpSpdDsrd'
         *  Switch: '<S312>/Switch1'
         */
        VeTAPR_n_TAP_AuxPumpSpdCmd = KeTAPR_n_TAPMinSpdCmd;
    }
    else
    {
        (void)Rte_Read_VePMIR_n_DVC_AuxPumpSpdDsrd_Value
            ((&(VeTAPR_n_TAP_AuxPumpSpdCmd)));

        /* Switch: '<S165>/Switch2' incorporates:
         *  Inport: '<Root>/VePMIR_n_DVC_AuxPumpSpdDsrd'
         *  Switch: '<S312>/Switch1'
         */
        if (!VeTAPR_b_ChkPmpDVC_Limits_AM2)
        {
            /* Switch: '<S167>/Switch' incorporates:
             *  Switch: '<S312>/Switch1'
             */
            VeTAPR_n_TAP_AuxPumpSpdCmd = TAPR_ac_DW.UnitDelay_DSTATE_j;
        }

        /* End of Switch: '<S165>/Switch2' */
    }

    /* End of Switch: '<S167>/Switch' */

    /* RelationalOperator: '<S167>/LessThan3' incorporates:
     *  Constant: '<S349>/Calib'
     */
    rtb_LessThan3_n = (VeTAPR_n_TAP_AuxPumpSpdCmd > KeTAPR_n_EOPA_DryRunMin);

    /* Outputs for Atomic SubSystem: '<S167>/CountDownResetTriggerEnabled' */
    /* Outputs for Atomic SubSystem: '<S343>/EdgeRising_F2T' */
    /* Logic: '<S352>/OR1' incorporates:
     *  UnitDelay: '<S352>/Unit Delay'
     */
    rtb_OR1_do = !TAPR_ac_DW.UnitDelay_DSTATE_eo;

    /* Update for UnitDelay: '<S352>/Unit Delay' */
    TAPR_ac_DW.UnitDelay_DSTATE_eo = rtb_LessThan3_n;

    /* Switch: '<S343>/Switch1' incorporates:
     *  Constant: '<S343>/Constant Value'
     *  Constant: '<S350>/Calib'
     *  Logic: '<S352>/AND'
     *  RelationalOperator: '<S343>/Greater  Than'
     *  Switch: '<S343>/Switch2'
     *  UnitDelay: '<S343>/Unit Delay'
     */
    if (rtb_LessThan3_n && rtb_OR1_do)
    {
        TAPR_ac_DW.UnitDelay_DSTATE_fz = KeTAPR_t_EOPA_StartUpTimer;
    }
    else
    {
        if (((sint32)TAPR_ac_DW.UnitDelay_DSTATE_fz) > 0)
        {
            /* UnitDelay: '<S343>/Unit Delay' incorporates:
             *  Constant: '<S343>/Constant Value1'
             *  Sum: '<S343>/Subtraction'
             *  Switch: '<S343>/Switch2'
             */
            TAPR_ac_DW.UnitDelay_DSTATE_fz = (uint16)((sint32)(((sint32)
                TAPR_ac_DW.UnitDelay_DSTATE_fz) - 1));
        }
    }

    /* End of Switch: '<S343>/Switch1' */
    /* End of Outputs for SubSystem: '<S343>/EdgeRising_F2T' */
    /* End of Outputs for SubSystem: '<S167>/CountDownResetTriggerEnabled' */

    /* Outputs for Atomic SubSystem: '<S167>/EdgeFalling' */
    /* Logic: '<S344>/AND' incorporates:
     *  Logic: '<S344>/OR1'
     *  UnitDelay: '<S167>/UnitDelay1'
     *  UnitDelay: '<S344>/Unit Delay'
     */
    rtb_LessThan3_n = ((!TAPR_ac_DW.UnitDelay1_DSTATE_e) &&
                       (TAPR_ac_DW.UnitDelay_DSTATE_aa));

    /* Update for UnitDelay: '<S344>/Unit Delay' incorporates:
     *  UnitDelay: '<S167>/UnitDelay1'
     */
    TAPR_ac_DW.UnitDelay_DSTATE_aa = TAPR_ac_DW.UnitDelay1_DSTATE_e;

    /* End of Outputs for SubSystem: '<S167>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S167>/EdgeRising' */
    /* Logic: '<S345>/AND' incorporates:
     *  Logic: '<S345>/OR1'
     *  UnitDelay: '<S345>/Unit Delay'
     */
    rtb_OR1_do = !TAPR_ac_DW.UnitDelay_DSTATE_hd;

    /* Update for UnitDelay: '<S345>/Unit Delay' incorporates:
     *  Constant: '<S167>/TRUEConstant1'
     */
    TAPR_ac_DW.UnitDelay_DSTATE_hd = true;

    /* End of Outputs for SubSystem: '<S167>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S167>/CountDownResetEnabled' */
    /* Switch: '<S342>/Switch1' incorporates:
     *  Constant: '<S342>/Constant Value'
     *  Constant: '<S351>/Calib'
     *  Logic: '<S167>/OR1'
     *  RelationalOperator: '<S342>/Greater  Than'
     *  Switch: '<S342>/Switch2'
     *  UnitDelay: '<S342>/Unit Delay'
     */
    if (rtb_LessThan3_n || rtb_OR1_do)
    {
        TAPR_ac_DW.UnitDelay_DSTATE_l = KeTAPR_t_EOPA_SteadyStateSampler;
    }
    else
    {
        if (((sint32)TAPR_ac_DW.UnitDelay_DSTATE_l) > 0)
        {
            /* UnitDelay: '<S342>/Unit Delay' incorporates:
             *  Constant: '<S342>/Constant Value1'
             *  Sum: '<S342>/Subtraction'
             *  Switch: '<S342>/Switch2'
             */
            TAPR_ac_DW.UnitDelay_DSTATE_l = (uint16)((sint32)(((sint32)
                TAPR_ac_DW.UnitDelay_DSTATE_l) - 1));
        }
    }

    /* End of Switch: '<S342>/Switch1' */

    /* RelationalOperator: '<S342>/Greater  Than1' incorporates:
     *  Constant: '<S342>/Constant Value2'
     *  UnitDelay: '<S167>/UnitDelay1'
     *  UnitDelay: '<S342>/Unit Delay'
     */
    TAPR_ac_DW.UnitDelay1_DSTATE_e = (((sint32)TAPR_ac_DW.UnitDelay_DSTATE_l) >
        0);

    /* End of Outputs for SubSystem: '<S167>/CountDownResetEnabled' */

    /* Switch: '<S167>/Switch3' incorporates:
     *  Logic: '<S167>/OR2'
     *  UnitDelay: '<S167>/UnitDelay1'
     *  UnitDelay: '<S167>/UnitDelay2'
     */
    if (!TAPR_ac_DW.UnitDelay1_DSTATE_e)
    {
        TAPR_ac_DW.UnitDelay2_DSTATE = VeTAPR_n_TAP_AuxPumpSpdCmd;
    }

    /* End of Switch: '<S167>/Switch3' */

    /* Switch: '<S167>/Switch2' incorporates:
     *  Constant: '<S347>/Calib'
     */
    if (KeTAPR_b_EOPA_DryRunSampling)
    {
        /* Outputs for Atomic SubSystem: '<S167>/CountDownResetTriggerEnabled' */
        /* Switch: '<S167>/Switch1' incorporates:
         *  Constant: '<S343>/Constant Value2'
         *  RelationalOperator: '<S343>/Greater  Than1'
         *  UnitDelay: '<S343>/Unit Delay'
         */
        if (((sint32)TAPR_ac_DW.UnitDelay_DSTATE_fz) <= 0)
        {
            /* Switch: '<S167>/Switch2' incorporates:
             *  Inport: '<Root>/VePMIR_n_DVC_AuxPumpSpdDsrd'
             *  UnitDelay: '<S167>/UnitDelay2'
             */
            VeTAPR_n_TAP_AuxPumpSpdCmd = TAPR_ac_DW.UnitDelay2_DSTATE;
        }

        /* End of Switch: '<S167>/Switch1' */
        /* End of Outputs for SubSystem: '<S167>/CountDownResetTriggerEnabled' */
    }

    /* End of Switch: '<S167>/Switch2' */

    /* Switch: '<S356>/Switch' incorporates:
     *  Constant: '<S389>/Calib'
     *  RelationalOperator: '<S356>/Comparison1'
     */
    if (VeTAPR_n_TAP_AuxPumpSpdCmd >= KeTAPR_n_LowerSpdThreshforAuxCmdSpd)
    {
        /* Switch: '<S356>/Switch' incorporates:
         *  Constant: '<S355>/Calib'
         *  Product: '<S356>/Product'
         *  RelationalOperator: '<S356>/Comparison3'
         */
        rtb_LessThan3_n = (VeTAPR_n_AuxPumpFltrd_B4Dial >=
                           (VeTAPR_n_TAP_AuxPumpSpdCmd *
                            KeTAPR_Pct_AuxPumpSpdThresh));
    }
    else
    {
        /* Switch: '<S356>/Switch' incorporates:
         *  Constant: '<S356>/FALSEConstant'
         */
        rtb_LessThan3_n = false;
    }

    /* End of Switch: '<S356>/Switch' */

    /* Merge: '<S168>/Merge' incorporates:
     *  Constant: '<S363>/Constant'
     *  Constant: '<S364>/Constant'
     *  Constant: '<S365>/Constant'
     *  Constant: '<S366>/Constant'
     *  Constant: '<S367>/Constant'
     *  Constant: '<S368>/Constant'
     *  Logic: '<S361>/Logical3'
     *  RelationalOperator: '<S361>/Comparison1'
     *  RelationalOperator: '<S361>/Comparison10'
     *  RelationalOperator: '<S361>/Comparison11'
     *  RelationalOperator: '<S361>/Comparison12'
     *  RelationalOperator: '<S361>/Comparison13'
     *  RelationalOperator: '<S361>/Comparison9'
     */
    rtb_Logical4 = ((((((((uint32)Switch_p) == CeESSR_e_PrepForStopSt) ||
                        (((uint32)Switch_p) == CeESSR_e_DisableFuelSt)) ||
                       (((uint32)Switch_p) == CeESSR_e_RampDownSt)) || (((uint32)
                        Switch_p) == CeESSR_e_FinishStopSt)) || (((uint32)
                       Switch_p) == CeESSR_e_ImmedStopSt)) || (((uint32)Switch_p)
                     == CeESSR_e_EngOff));

    /* Logic: '<S362>/Logical5' incorporates:
     *  Constant: '<S373>/Constant'
     *  RelationalOperator: '<S362>/Comparison1'
     *  RelationalOperator: '<S362>/Comparison10'
     *  RelationalOperator: '<S362>/Comparison4'
     */
    rtb_OR1_do = (((rtb_LessThan3_n && rtb_Logical4) &&
                   (VeTAPR_b_TransAuxPump_NotFlty_AD)) && (((uint32)
                    rtb_TmpSignalConversionAtVePMDR_e_PMM_Po) !=
                   CePMDR_e_PowerMode_Off));

    /* Outputs for Atomic SubSystem: '<S362>/EdgeRising7' */
    /* Logic: '<S372>/OR1' incorporates:
     *  UnitDelay: '<S372>/Unit Delay'
     */
    rtb_AND_i3 = !TAPR_ac_DW.UnitDelay_DSTATE_e;

    /* Update for UnitDelay: '<S372>/Unit Delay' */
    TAPR_ac_DW.UnitDelay_DSTATE_e = rtb_OR1_do;

    /* End of Outputs for SubSystem: '<S362>/EdgeRising7' */

    /* Logic: '<S362>/Logical8' */
    rtb_Logical8 = !rtb_Logical4;

    /* Merge: '<S168>/Merge' incorporates:
     *  RelationalOperator: '<S362>/Comparison9'
     */
    rtb_Logical4 = !rtb_LessThan3_n;

    /* Logic: '<S362>/Logical9' */
    rtb_Logical8 = (rtb_Logical8 && rtb_Logical4);

    /* Outputs for Atomic SubSystem: '<S362>/EdgeRising5' */
    /* Logic: '<S370>/OR1' incorporates:
     *  UnitDelay: '<S370>/Unit Delay'
     */
    rtb_OR1_lm = !TAPR_ac_DW.UnitDelay_DSTATE_i;

    /* Update for UnitDelay: '<S370>/Unit Delay' */
    TAPR_ac_DW.UnitDelay_DSTATE_i = rtb_Logical8;

    /* End of Outputs for SubSystem: '<S362>/EdgeRising5' */

    /* Logic: '<S362>/Logical7' incorporates:
     *  RelationalOperator: '<S362>/Comparison11'
     *  UnitDelay: '<S168>/UnitDelay2'
     *  UnitDelay: '<S362>/UnitDelay2'
     *  UnitDelay: '<S362>/UnitDelay3'
     */
    rtb_Logical4 = (((rtb_Logical4 && (TAPR_ac_DW.UnitDelay2_DSTATE_m)) &&
                     (VeTAPR_n_TAP_AuxPumpSpdCmd ==
                      TAPR_ac_DW.UnitDelay2_DSTATE_o)) &&
                    (TAPR_ac_DW.UnitDelay3_DSTATE));

    /* Outputs for Atomic SubSystem: '<S362>/EdgeRising6' */
    /* Logic: '<S371>/OR1' incorporates:
     *  UnitDelay: '<S371>/Unit Delay'
     */
    rtb_OR1_ld = !TAPR_ac_DW.UnitDelay_DSTATE_mi;

    /* Update for UnitDelay: '<S371>/Unit Delay' */
    TAPR_ac_DW.UnitDelay_DSTATE_mi = rtb_Logical4;

    /* Outputs for Atomic SubSystem: '<S362>/EdgeRising5' */
    /* Logic: '<S362>/Logical6' incorporates:
     *  Logic: '<S370>/AND'
     *  Logic: '<S371>/AND'
     */
    rtb_Logical4 = ((rtb_Logical8 && rtb_OR1_lm) || (rtb_Logical4 && rtb_OR1_ld));

    /* End of Outputs for SubSystem: '<S362>/EdgeRising5' */
    /* End of Outputs for SubSystem: '<S362>/EdgeRising6' */

    /* Outputs for Atomic SubSystem: '<S362>/TimerRetriggerResetEnabled' */
    /* Outputs for Atomic SubSystem: '<S362>/SignalLatchOnWithReset2' */
    /* Logic: '<S377>/NOT' incorporates:
     *  Logic: '<S362>/Logical12'
     *  Switch: '<S378>/Switch1'
     */
    rtb_Logical8 = !rtb_Logical4;

    /* End of Outputs for SubSystem: '<S362>/TimerRetriggerResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S362>/EdgeRising7' */
    /* Logic: '<S377>/OR1' incorporates:
     *  Logic: '<S372>/AND'
     *  Logic: '<S377>/NOT'
     *  Logic: '<S377>/OR'
     *  UnitDelay: '<S377>/Unit Delay'
     */
    TAPR_ac_DW.UnitDelay_DSTATE_fu = ((rtb_OR1_do && rtb_AND_i3) ||
        (rtb_Logical8 && (TAPR_ac_DW.UnitDelay_DSTATE_fu)));

    /* End of Outputs for SubSystem: '<S362>/EdgeRising7' */
    /* End of Outputs for SubSystem: '<S362>/SignalLatchOnWithReset2' */

    /* Outputs for Atomic SubSystem: '<S360>/EdgeRising' */
    /* Gain: '<S161>/Gain' incorporates:
     *  Merge: '<S168>/Merge'
     *  UnitDelay: '<S413>/Unit Delay'
     */
    VeTAPR_b_AuxPumpRunning_B4Dial = TAPR_ac_DW.UnitDelay_DSTATE_hk;

    /* Logic: '<S413>/AND' incorporates:
     *  Logic: '<S413>/OR1'
     *  UnitDelay: '<S413>/Unit Delay'
     */
    rtb_OR1_do = !TAPR_ac_DW.UnitDelay_DSTATE_hk;

    /* Update for UnitDelay: '<S413>/Unit Delay' incorporates:
     *  Constant: '<S360>/TRUEConstant'
     */
    TAPR_ac_DW.UnitDelay_DSTATE_hk = true;

    /* End of Outputs for SubSystem: '<S360>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S360>/TimerRetriggerResetEnabled' */
    /* Switch: '<S424>/Switch1' incorporates:
     *  Logic: '<S360>/Logical6'
     *  Switch: '<S424>/Switch2'
     *  UnitDelay: '<S423>/Unit Delay'
     */
    if (rtb_LessThan3 || rtb_OR1_do)
    {
        /* Switch: '<S420>/Switch1' incorporates:
         *  Logic: '<S360>/Logical5'
         *  UnitDelay: '<S423>/Unit Delay'
         */
        if (((TAPR_ac_DW.UnitDelay_DSTATE_o) && rtb_NotEqual) && rtb_OR1_do)
        {
            /* UnitDelay: '<S424>/Unit Delay' incorporates:
             *  Constant: '<S421>/Calib'
             *  Constant: '<S422>/Calib'
             *  Sum: '<S360>/Subtract'
             *  Switch: '<S420>/Switch1'
             */
            TAPR_ac_DW.UnitDelay_DSTATE_a = KeTAPR_t_AuxPumpRunning_TrueCrank -
                KeTAPR_t_dT;
        }
        else
        {
            /* UnitDelay: '<S424>/Unit Delay' incorporates:
             *  Constant: '<S421>/Calib'
             *  Switch: '<S420>/Switch1'
             */
            TAPR_ac_DW.UnitDelay_DSTATE_a = KeTAPR_t_AuxPumpRunning_TrueCrank;
        }

        /* End of Switch: '<S420>/Switch1' */
    }
    else
    {
        if (TAPR_ac_DW.UnitDelay_DSTATE_o)
        {
            /* UnitDelay: '<S424>/Unit Delay' incorporates:
             *  Constant: '<S422>/Calib'
             *  Constant: '<S424>/Constant Value4'
             *  MinMax: '<S424>/Maximum'
             *  Sum: '<S424>/Subtraction'
             *  Switch: '<S424>/Switch2'
             */
            TAPR_ac_DW.UnitDelay_DSTATE_a = fmaxf(TAPR_ac_DW.UnitDelay_DSTATE_a
                - KeTAPR_t_dT, 0.0F);
        }
    }

    /* RelationalOperator: '<S424>/Greater  Than1' incorporates:
     *  Constant: '<S424>/Constant Value2'
     *  UnitDelay: '<S424>/Unit Delay'
     */
    rtb_LessThan3 = (TAPR_ac_DW.UnitDelay_DSTATE_a > 0.0F);

    /* End of Outputs for SubSystem: '<S360>/TimerRetriggerResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S362>/EdgeRising3' */
    /* Logic: '<S369>/AND' incorporates:
     *  Logic: '<S369>/OR1'
     *  UnitDelay: '<S369>/Unit Delay'
     */
    rtb_NotEqual = !TAPR_ac_DW.UnitDelay_DSTATE_gp;

    /* Update for UnitDelay: '<S369>/Unit Delay' incorporates:
     *  Constant: '<S362>/TRUEConstant3'
     */
    TAPR_ac_DW.UnitDelay_DSTATE_gp = true;

    /* End of Outputs for SubSystem: '<S362>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S362>/TimerRetriggerResetEnabled' */
    /* Switch: '<S378>/Switch1' incorporates:
     *  Logic: '<S362>/Logical11'
     *  Switch: '<S378>/Switch2'
     *  UnitDelay: '<S377>/Unit Delay'
     */
    if (rtb_NotEqual || rtb_Logical4)
    {
        /* Switch: '<S374>/Switch1' incorporates:
         *  Logic: '<S362>/Logical10'
         *  UnitDelay: '<S377>/Unit Delay'
         */
        if (((TAPR_ac_DW.UnitDelay_DSTATE_fu) && rtb_Logical8) && rtb_NotEqual)
        {
            /* UnitDelay: '<S378>/Unit Delay' incorporates:
             *  Constant: '<S375>/Calib'
             *  Lookup_n-D: '<S376>/Vector'
             *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
             *  Sum: '<S362>/Subtract'
             *  Switch: '<S374>/Switch1'
             *  Switch: '<S78>/Switch'
             */
            TAPR_ac_DW.UnitDelay_DSTATE_cx = look2_iflf_binlca_16a
                (rtb_TmpSignalConversionAtVeTFTR_T_TransO, Switch, ((const
                   float32 *)&(KxTAPR_t_AuxPumpRunningDelay[0])), ((const
                   float32 *)&(KyTAPR_t_AuxPumpRunningDelay[0])), ((const
                   float32 *)&(KtTAPR_t_AuxPumpRunningDelay[0])),
                 TAPR_ac_ConstP.pooled5, 4U) - KeTAPR_t_dT;
        }
        else
        {
            /* UnitDelay: '<S378>/Unit Delay' incorporates:
             *  Lookup_n-D: '<S376>/Vector'
             *  SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp'
             *  Switch: '<S374>/Switch1'
             *  Switch: '<S78>/Switch'
             */
            TAPR_ac_DW.UnitDelay_DSTATE_cx = look2_iflf_binlca_16a
                (rtb_TmpSignalConversionAtVeTFTR_T_TransO, Switch, ((const
                   float32 *)&(KxTAPR_t_AuxPumpRunningDelay[0])), ((const
                   float32 *)&(KyTAPR_t_AuxPumpRunningDelay[0])), ((const
                   float32 *)&(KtTAPR_t_AuxPumpRunningDelay[0])),
                 TAPR_ac_ConstP.pooled5, 4U);
        }

        /* End of Switch: '<S374>/Switch1' */
    }
    else
    {
        if (TAPR_ac_DW.UnitDelay_DSTATE_fu)
        {
            /* UnitDelay: '<S378>/Unit Delay' incorporates:
             *  Constant: '<S375>/Calib'
             *  Constant: '<S378>/Constant Value4'
             *  MinMax: '<S378>/Maximum'
             *  Sum: '<S378>/Subtraction'
             *  Switch: '<S378>/Switch2'
             */
            TAPR_ac_DW.UnitDelay_DSTATE_cx = fmaxf
                (TAPR_ac_DW.UnitDelay_DSTATE_cx - KeTAPR_t_dT, 0.0F);
        }
    }

    /* RelationalOperator: '<S378>/Greater  Than1' incorporates:
     *  Constant: '<S378>/Constant Value2'
     *  UnitDelay: '<S362>/UnitDelay3'
     *  UnitDelay: '<S378>/Unit Delay'
     */
    TAPR_ac_DW.UnitDelay3_DSTATE = (TAPR_ac_DW.UnitDelay_DSTATE_cx > 0.0F);

    /* End of Outputs for SubSystem: '<S362>/TimerRetriggerResetEnabled' */

    /* If: '<S168>/If' incorporates:
     *  UnitDelay: '<S377>/Unit Delay'
     *  UnitDelay: '<S423>/Unit Delay'
     */
    if (TAPR_ac_DW.UnitDelay_DSTATE_o)
    {
        /* Outputs for IfAction SubSystem: '<S168>/TAP_Silent_Start' incorporates:
         *  ActionPort: '<S359>/ActionPort'
         */
        /* RelationalOperator: '<S359>/Comparison4' incorporates:
         *  UnitDelay: '<S168>/UnitDelay6'
         */
        rtb_NotEqual = (VeTAPR_n_TAP_AuxPumpSpdCmd !=
                        TAPR_ac_DW.UnitDelay6_DSTATE);

        /* Outputs for Atomic SubSystem: '<S359>/EdgeRising3' */
        /* Logic: '<S404>/AND' incorporates:
         *  Logic: '<S404>/OR1'
         *  UnitDelay: '<S404>/Unit Delay'
         */
        rtb_OR1_do = !TAPR_ac_DW.UnitDelay_DSTATE_lj;

        /* Update for UnitDelay: '<S404>/Unit Delay' incorporates:
         *  Constant: '<S359>/TRUEConstant'
         */
        TAPR_ac_DW.UnitDelay_DSTATE_lj = true;

        /* End of Outputs for SubSystem: '<S359>/EdgeRising3' */

        /* Outputs for Atomic SubSystem: '<S359>/EdgeRising4' */
        /* Logic: '<S405>/OR1' incorporates:
         *  UnitDelay: '<S405>/Unit Delay'
         */
        rtb_Logical4 = !TAPR_ac_DW.UnitDelay_DSTATE_n5;

        /* Update for UnitDelay: '<S405>/Unit Delay' */
        TAPR_ac_DW.UnitDelay_DSTATE_n5 = rtb_NotEqual;

        /* End of Outputs for SubSystem: '<S359>/EdgeRising4' */

        /* Outputs for Atomic SubSystem: '<S359>/EdgeRising5' */
        /* Logic: '<S406>/AND' incorporates:
         *  Logic: '<S406>/OR1'
         *  UnitDelay: '<S406>/Unit Delay'
         */
        rtb_AND_i3 = (rtb_LessThan3 && (!TAPR_ac_DW.UnitDelay_DSTATE_fm));

        /* Update for UnitDelay: '<S406>/Unit Delay' */
        TAPR_ac_DW.UnitDelay_DSTATE_fm = rtb_LessThan3;

        /* End of Outputs for SubSystem: '<S359>/EdgeRising5' */

        /* Outputs for Atomic SubSystem: '<S359>/TimerRetriggerResetEnabled' */
        /* Outputs for Atomic SubSystem: '<S359>/SignalLatchOnWithReset2' */
        /* Logic: '<S411>/NOT' incorporates:
         *  Logic: '<S359>/Logical14'
         *  Switch: '<S412>/Switch1'
         */
        rtb_Logical8 = !rtb_AND_i3;

        /* End of Outputs for SubSystem: '<S359>/TimerRetriggerResetEnabled' */

        /* Outputs for Atomic SubSystem: '<S359>/EdgeRising4' */
        /* Logic: '<S411>/OR1' incorporates:
         *  Logic: '<S405>/AND'
         *  Logic: '<S411>/NOT'
         *  Logic: '<S411>/OR'
         *  UnitDelay: '<S411>/Unit Delay'
         */
        TAPR_ac_DW.UnitDelay_DSTATE_g = ((rtb_NotEqual && rtb_Logical4) ||
            (rtb_Logical8 && (TAPR_ac_DW.UnitDelay_DSTATE_g)));

        /* End of Outputs for SubSystem: '<S359>/EdgeRising4' */
        /* End of Outputs for SubSystem: '<S359>/SignalLatchOnWithReset2' */

        /* Outputs for Atomic SubSystem: '<S359>/TimerRetriggerResetEnabled' */
        /* Switch: '<S412>/Switch1' incorporates:
         *  Logic: '<S359>/Logical1'
         *  Switch: '<S412>/Switch2'
         */
        if (rtb_AND_i3 || rtb_OR1_do)
        {
            /* Switch: '<S407>/Switch1' incorporates:
             *  Logic: '<S359>/Logical8'
             */
            if ((rtb_OR1_do && (TAPR_ac_DW.UnitDelay_DSTATE_g)) && rtb_Logical8)
            {
                /* UnitDelay: '<S412>/Unit Delay' incorporates:
                 *  Constant: '<S408>/Calib'
                 *  Constant: '<S409>/Calib'
                 *  Sum: '<S359>/Subtract'
                 *  Switch: '<S407>/Switch1'
                 */
                TAPR_ac_DW.UnitDelay_DSTATE_k = KeTAPR_t_AuxPumpRunningHold -
                    KeTAPR_t_dT;
            }
            else
            {
                /* UnitDelay: '<S412>/Unit Delay' incorporates:
                 *  Constant: '<S408>/Calib'
                 *  Switch: '<S407>/Switch1'
                 */
                TAPR_ac_DW.UnitDelay_DSTATE_k = KeTAPR_t_AuxPumpRunningHold;
            }

            /* End of Switch: '<S407>/Switch1' */
        }
        else
        {
            if (TAPR_ac_DW.UnitDelay_DSTATE_g)
            {
                /* UnitDelay: '<S412>/Unit Delay' incorporates:
                 *  Constant: '<S409>/Calib'
                 *  Constant: '<S412>/Constant Value4'
                 *  MinMax: '<S412>/Maximum'
                 *  Sum: '<S412>/Subtraction'
                 *  Switch: '<S412>/Switch2'
                 */
                TAPR_ac_DW.UnitDelay_DSTATE_k = fmaxf
                    (TAPR_ac_DW.UnitDelay_DSTATE_k - KeTAPR_t_dT, 0.0F);
            }
        }

        /* End of Outputs for SubSystem: '<S359>/TimerRetriggerResetEnabled' */

        /* Switch: '<S359>/Switch1' incorporates:
         *  Constant: '<S359>/ConstantValue1'
         *  Logic: '<S359>/Logical10'
         *  Logic: '<S359>/Logical11'
         *  Logic: '<S359>/Logical13'
         *  Logic: '<S359>/Logical2'
         *  RelationalOperator: '<S359>/Comparison3'
         *  Switch: '<S359>/Switch4'
         */
        if ((!rtb_LessThan3) && (VeTAPR_n_TAP_AuxPumpSpdCmd > 0.0F))
        {
            /* Gain: '<S161>/Gain' incorporates:
             *  Constant: '<S359>/TRUEConstant6'
             *  Gain: '<S410>/Gain'
             *  Merge: '<S168>/Merge'
             */
            VeTAPR_b_AuxPumpRunning_B4Dial = true;
        }
        else if (rtb_LessThan3_n && (!TAPR_ac_DW.UnitDelay_DSTATE_g))
        {
            /* Gain: '<S161>/Gain' incorporates:
             *  Constant: '<S359>/TRUEConstant4'
             *  Gain: '<S410>/Gain'
             *  Merge: '<S168>/Merge'
             *  Switch: '<S359>/Switch4'
             */
            VeTAPR_b_AuxPumpRunning_B4Dial = true;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S359>/TimerRetriggerResetEnabled' */
            /* Gain: '<S161>/Gain' incorporates:
             *  Constant: '<S412>/Constant Value2'
             *  Gain: '<S410>/Gain'
             *  Logic: '<S359>/Logical12'
             *  Logic: '<S359>/Logical15'
             *  Logic: '<S359>/Logical16'
             *  Merge: '<S168>/Merge'
             *  RelationalOperator: '<S412>/Greater  Than1'
             *  Switch: '<S359>/Switch4'
             *  UnitDelay: '<S412>/Unit Delay'
             */
            VeTAPR_b_AuxPumpRunning_B4Dial = ((TAPR_ac_DW.UnitDelay_DSTATE_g) &&
                ((TAPR_ac_DW.UnitDelay_DSTATE_k <= 0.0F) || rtb_LessThan3_n));

            /* End of Outputs for SubSystem: '<S359>/TimerRetriggerResetEnabled' */
        }

        /* End of Switch: '<S359>/Switch1' */
        /* End of Outputs for SubSystem: '<S168>/TAP_Silent_Start' */
    }
    else if (TAPR_ac_DW.UnitDelay_DSTATE_fu)
    {
        /* Outputs for IfAction SubSystem: '<S168>/TAPCheckEngstop' incorporates:
         *  ActionPort: '<S357>/ActionPort'
         */
        /* Logic: '<S395>/Logical9' incorporates:
         *  Constant: '<S395>/Constant2'
         *  RelationalOperator: '<S395>/Comparison1'
         *  RelationalOperator: '<S395>/Comparison5'
         *  UnitDelay: '<S168>/UnitDelay6'
         *  UnitDelay: '<S362>/UnitDelay3'
         */
        rtb_OR1_do = (((TAPR_ac_DW.UnitDelay3_DSTATE) &&
                       (VeTAPR_n_TAP_AuxPumpSpdCmd !=
                        TAPR_ac_DW.UnitDelay6_DSTATE)) &&
                      (TAPR_ac_DW.UnitDelay6_DSTATE != 0.0F));

        /* Outputs for Atomic SubSystem: '<S395>/EdgeRising2' */
        /* Logic: '<S398>/OR1' incorporates:
         *  UnitDelay: '<S398>/Unit Delay'
         */
        rtb_Logical4 = !TAPR_ac_DW.UnitDelay_DSTATE_n;

        /* Update for UnitDelay: '<S398>/Unit Delay' */
        TAPR_ac_DW.UnitDelay_DSTATE_n = rtb_OR1_do;

        /* End of Outputs for SubSystem: '<S395>/EdgeRising2' */

        /* Logic: '<S395>/Logical10' incorporates:
         *  UnitDelay: '<S362>/UnitDelay3'
         */
        rtb_LessThan3 = !TAPR_ac_DW.UnitDelay3_DSTATE;

        /* Outputs for Atomic SubSystem: '<S395>/TimerRetriggerResetEnabled' */
        /* Outputs for Atomic SubSystem: '<S395>/SignalLatchOnWithReset1' */
        /* Logic: '<S402>/NOT' incorporates:
         *  Logic: '<S395>/Logical7'
         *  Switch: '<S403>/Switch1'
         */
        rtb_NotEqual = !rtb_LessThan3;

        /* End of Outputs for SubSystem: '<S395>/TimerRetriggerResetEnabled' */

        /* Outputs for Atomic SubSystem: '<S395>/EdgeRising2' */
        /* Logic: '<S402>/OR1' incorporates:
         *  Logic: '<S398>/AND'
         *  Logic: '<S402>/NOT'
         *  Logic: '<S402>/OR'
         *  UnitDelay: '<S402>/Unit Delay'
         */
        TAPR_ac_DW.UnitDelay_DSTATE_kb = ((rtb_OR1_do && rtb_Logical4) ||
            (rtb_NotEqual && (TAPR_ac_DW.UnitDelay_DSTATE_kb)));

        /* End of Outputs for SubSystem: '<S395>/EdgeRising2' */
        /* End of Outputs for SubSystem: '<S395>/SignalLatchOnWithReset1' */

        /* Outputs for Atomic SubSystem: '<S395>/EdgeRising' */
        /* Logic: '<S397>/AND' incorporates:
         *  Logic: '<S397>/OR1'
         *  UnitDelay: '<S397>/Unit Delay'
         */
        rtb_OR1_do = !TAPR_ac_DW.UnitDelay_DSTATE_jz;

        /* Update for UnitDelay: '<S397>/Unit Delay' incorporates:
         *  Constant: '<S395>/TRUEConstant'
         */
        TAPR_ac_DW.UnitDelay_DSTATE_jz = true;

        /* End of Outputs for SubSystem: '<S395>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S395>/TimerRetriggerResetEnabled' */
        /* Switch: '<S403>/Switch1' incorporates:
         *  Logic: '<S395>/Logical6'
         *  Switch: '<S403>/Switch2'
         */
        if (rtb_LessThan3 || rtb_OR1_do)
        {
            /* Switch: '<S399>/Switch1' incorporates:
             *  Logic: '<S395>/Logical5'
             */
            if (((TAPR_ac_DW.UnitDelay_DSTATE_kb) && rtb_NotEqual) && rtb_OR1_do)
            {
                /* UnitDelay: '<S403>/Unit Delay' incorporates:
                 *  Constant: '<S400>/Calib'
                 *  Constant: '<S401>/Calib'
                 *  Sum: '<S395>/Subtract'
                 *  Switch: '<S399>/Switch1'
                 */
                TAPR_ac_DW.UnitDelay_DSTATE_c = KeTAPR_t_AuxPumpRunningHold -
                    KeTAPR_t_dT;
            }
            else
            {
                /* UnitDelay: '<S403>/Unit Delay' incorporates:
                 *  Constant: '<S400>/Calib'
                 *  Switch: '<S399>/Switch1'
                 */
                TAPR_ac_DW.UnitDelay_DSTATE_c = KeTAPR_t_AuxPumpRunningHold;
            }

            /* End of Switch: '<S399>/Switch1' */
        }
        else
        {
            if (TAPR_ac_DW.UnitDelay_DSTATE_kb)
            {
                /* UnitDelay: '<S403>/Unit Delay' incorporates:
                 *  Constant: '<S401>/Calib'
                 *  Constant: '<S403>/Constant Value4'
                 *  MinMax: '<S403>/Maximum'
                 *  Sum: '<S403>/Subtraction'
                 *  Switch: '<S403>/Switch2'
                 */
                TAPR_ac_DW.UnitDelay_DSTATE_c = fmaxf
                    (TAPR_ac_DW.UnitDelay_DSTATE_c - KeTAPR_t_dT, 0.0F);
            }
        }

        /* Merge: '<S357>/Merge' incorporates:
         *  Constant: '<S403>/Constant Value2'
         *  RelationalOperator: '<S395>/Comparison4'
         *  RelationalOperator: '<S403>/Greater  Than1'
         *  UnitDelay: '<S403>/Unit Delay'
         */
        VeTAPR_b_AuxPumpRunning_B4Dial = (TAPR_ac_DW.UnitDelay_DSTATE_c <= 0.0F);

        /* End of Outputs for SubSystem: '<S395>/TimerRetriggerResetEnabled' */

        /* Logic: '<S395>/Logical2' incorporates:
         *  Logic: '<S395>/Logical1'
         *  UnitDelay: '<S168>/UnitDelay2'
         */
        TAPR_ac_DW.UnitDelay2_DSTATE_m = ((!TAPR_ac_DW.UnitDelay_DSTATE_kb) &&
            (VeTAPR_b_AuxPumpRunning_B4Dial));

        /* If: '<S357>/If' incorporates:
         *  Logic: '<S357>/Logical10'
         *  Logic: '<S357>/Logical2'
         *  RelationalOperator: '<S357>/Comparison1'
         *  UnitDelay: '<S168>/UnitDelay2'
         *  UnitDelay: '<S168>/UnitDelay6'
         *  UnitDelay: '<S362>/UnitDelay3'
         */
        if (!TAPR_ac_DW.UnitDelay3_DSTATE)
        {
            /* Outputs for IfAction SubSystem: '<S357>/Entry_Subsystem' incorporates:
             *  ActionPort: '<S393>/ActionPort'
             */
            TAPR_ac_Entry_Subsystem((&(VeTAPR_b_AuxPumpRunning_B4Dial)));

            /* End of Outputs for SubSystem: '<S357>/Entry_Subsystem' */
        }
        else if (TAPR_ac_DW.UnitDelay_DSTATE_kb)
        {
            /* Outputs for IfAction SubSystem: '<S357>/DelayRunning' incorporates:
             *  ActionPort: '<S391>/ActionPort'
             */
            /* Merge: '<S357>/Merge' incorporates:
             *  Constant: '<S391>/TRUEConstant3'
             *  SignalConversion generated from: '<S391>/AuxpumpRunning'
             */
            VeTAPR_b_AuxPumpRunning_B4Dial = true;

            /* End of Outputs for SubSystem: '<S357>/DelayRunning' */
        }
        else if (((TAPR_ac_DW.UnitDelay2_DSTATE_m) &&
                  (TAPR_ac_DW.UnitDelay3_DSTATE)) &&
                 (TAPR_ac_DW.UnitDelay6_DSTATE == VeTAPR_n_TAP_AuxPumpSpdCmd))
        {
            /* Outputs for IfAction SubSystem: '<S357>/DelayNotRunning' incorporates:
             *  ActionPort: '<S390>/ActionPort'
             */
            /* Merge: '<S357>/Merge' incorporates:
             *  Gain: '<S396>/Gain'
             *  Switch: '<S390>/Switch2'
             */
            VeTAPR_b_AuxPumpRunning_B4Dial = rtb_LessThan3_n;

            /* End of Outputs for SubSystem: '<S357>/DelayNotRunning' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S357>/Else_Condition' incorporates:
             *  ActionPort: '<S392>/ActionPort'
             */
            TAPR_ac_Entry_Subsystem((&(VeTAPR_b_AuxPumpRunning_B4Dial)));

            /* End of Outputs for SubSystem: '<S357>/Else_Condition' */
        }

        /* End of If: '<S357>/If' */
        /* End of Outputs for SubSystem: '<S168>/TAPCheckEngstop' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S168>/TAPNotRunning' incorporates:
         *  ActionPort: '<S358>/ActionPort'
         */
        /* Gain: '<S161>/Gain' */
        TAPR_ac_Entry_Subsystem((&(VeTAPR_b_AuxPumpRunning_B4Dial)));

        /* End of Outputs for SubSystem: '<S168>/TAPNotRunning' */
    }

    /* End of If: '<S168>/If' */

    /* Outputs for Atomic SubSystem: '<S164>/EdgeFalling' */
    /* Logic: '<S300>/AND' incorporates:
     *  Logic: '<S300>/OR1'
     *  UnitDelay: '<S164>/UnitDelay1'
     *  UnitDelay: '<S300>/Unit Delay'
     */
    rtb_LessThan3 = ((!TAPR_ac_DW.UnitDelay1_DSTATE_a) &&
                     (TAPR_ac_DW.UnitDelay_DSTATE_gv));

    /* Update for UnitDelay: '<S300>/Unit Delay' incorporates:
     *  UnitDelay: '<S164>/UnitDelay1'
     */
    TAPR_ac_DW.UnitDelay_DSTATE_gv = TAPR_ac_DW.UnitDelay1_DSTATE_a;

    /* End of Outputs for SubSystem: '<S164>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S164>/EdgeRising' */
    /* Logic: '<S301>/AND' incorporates:
     *  Logic: '<S301>/OR1'
     *  UnitDelay: '<S301>/Unit Delay'
     */
    rtb_LessThan3_n = !TAPR_ac_DW.UnitDelay_DSTATE_am;

    /* Update for UnitDelay: '<S301>/Unit Delay' incorporates:
     *  Constant: '<S164>/TRUEConstant1'
     */
    TAPR_ac_DW.UnitDelay_DSTATE_am = true;

    /* End of Outputs for SubSystem: '<S164>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S164>/CountDownResetEnabled' */
    /* Switch: '<S298>/Switch1' incorporates:
     *  Constant: '<S298>/Constant Value'
     *  Constant: '<S308>/Calib'
     *  Logic: '<S164>/OR1'
     *  RelationalOperator: '<S298>/Greater  Than'
     *  Switch: '<S298>/Switch2'
     *  UnitDelay: '<S298>/Unit Delay'
     */
    if (rtb_LessThan3 || rtb_LessThan3_n)
    {
        TAPR_ac_DW.UnitDelay_DSTATE_m = KeTAPR_t_EOPB_SteadyStateSampler;
    }
    else
    {
        if (((sint32)TAPR_ac_DW.UnitDelay_DSTATE_m) > 0)
        {
            /* UnitDelay: '<S298>/Unit Delay' incorporates:
             *  Constant: '<S298>/Constant Value1'
             *  Sum: '<S298>/Subtraction'
             *  Switch: '<S298>/Switch2'
             */
            TAPR_ac_DW.UnitDelay_DSTATE_m = (uint16)((sint32)(((sint32)
                TAPR_ac_DW.UnitDelay_DSTATE_m) - 1));
        }
    }

    /* End of Switch: '<S298>/Switch1' */
    /* End of Outputs for SubSystem: '<S164>/CountDownResetEnabled' */
    /* End of Outputs for SubSystem: '<S1>/TAPC' */
    (void)Rte_Read_VeTHMR_e_EOP_B_EmrgCoolState_Value(&tmpRead_8);

    /* Outputs for Function Call SubSystem: '<S1>/TAPC' */
    /* Outputs for Atomic SubSystem: '<S164>/CountDownResetEnabled' */
    /* RelationalOperator: '<S298>/Greater  Than1' incorporates:
     *  Constant: '<S298>/Constant Value2'
     *  Inport: '<Root>/VeTHMR_e_EOP_B_EmrgCoolState'
     *  UnitDelay: '<S164>/UnitDelay1'
     *  UnitDelay: '<S298>/Unit Delay'
     */
    TAPR_ac_DW.UnitDelay1_DSTATE_a = (((sint32)TAPR_ac_DW.UnitDelay_DSTATE_m) >
        0);

    /* End of Outputs for SubSystem: '<S164>/CountDownResetEnabled' */

    /* Switch: '<S328>/Switch1' incorporates:
     *  Constant: '<S326>/Constant'
     *  Inport: '<Root>/VeTHMR_e_EOP_B_EmrgCoolState'
     *  RelationalOperator: '<S166>/Comparison1'
     */
    if (((uint32)tmpRead_8) == CeTHMR_e_OilPumpEmrgCool_ON)
    {
        /* Switch: '<S328>/Switch1' incorporates:
         *  Constant: '<S330>/Calib'
         */
        rtb_TmpSignalConversionAtVeTHMR_dV_MtrB_ =
            KeTAPR_n_EOP_B_EmergencyRunCommand;
    }

    /* End of Switch: '<S328>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S166>/Limiter' */
    /* Switch: '<S336>/Switch1' incorporates:
     *  Constant: '<S335>/Calib'
     *  RelationalOperator: '<S336>/RelationalOperator'
     */
    if (KeTAPR_n_TAP2UpLim < rtb_TmpSignalConversionAtVeTHMR_dV_MtrB_)
    {
        /* Switch: '<S341>/Switch1' */
        rtb_Switch1 = KeTAPR_n_TAP2UpLim;
    }
    else
    {
        /* Switch: '<S341>/Switch1' */
        rtb_Switch1 = rtb_TmpSignalConversionAtVeTHMR_dV_MtrB_;
    }

    /* End of Switch: '<S336>/Switch1' */

    /* Switch: '<S336>/Switch' incorporates:
     *  Constant: '<S331>/Calib'
     *  RelationalOperator: '<S336>/RelationalOperator1'
     */
    if (rtb_Switch1 > KeTAPR_n_TAP2DownLim)
    {
        /* Switch: '<S336>/Switch' */
        VeTAPR_n_TAP2ActualCmd_BG = rtb_Switch1;
    }
    else
    {
        /* Switch: '<S336>/Switch' */
        VeTAPR_n_TAP2ActualCmd_BG = KeTAPR_n_TAP2DownLim;
    }

    /* End of Switch: '<S336>/Switch' */
    /* End of Outputs for SubSystem: '<S166>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S338>/EdgeRising' */
    /* Logic: '<S339>/AND' incorporates:
     *  Logic: '<S339>/OR1'
     *  UnitDelay: '<S339>/Unit Delay'
     */
    rtb_LessThan3 = !TAPR_ac_DW.UnitDelay_DSTATE_b;

    /* Update for UnitDelay: '<S339>/Unit Delay' incorporates:
     *  Constant: '<S338>/TRUEConstant'
     */
    TAPR_ac_DW.UnitDelay_DSTATE_b = true;

    /* End of Outputs for SubSystem: '<S338>/EdgeRising' */

    /* Switch: '<S341>/Switch1' */
    if (rtb_LessThan3)
    {
        /* Switch: '<S341>/Switch1' incorporates:
         *  Constant: '<S331>/Calib'
         */
        rtb_Switch1 = KeTAPR_n_TAP2DownLim;
    }
    else
    {
        /* Switch: '<S341>/Switch1' incorporates:
         *  UnitDelay: '<S341>/Unit Delay'
         */
        rtb_Switch1 = TAPR_ac_DW.UnitDelay_DSTATE_p;
    }

    /* End of Switch: '<S341>/Switch1' */

    /* Sum: '<S338>/Sum1' */
    rtb_Switch_a2 = VeTAPR_n_TAP2ActualCmd_BG - rtb_Switch1;

    /* Outputs for Atomic SubSystem: '<S338>/Limiter1' */
    /* Switch: '<S340>/Switch1' incorporates:
     *  Constant: '<S332>/Calib'
     *  RelationalOperator: '<S340>/RelationalOperator'
     */
    if (KeTAPR_n_TAP2Incrs_High < rtb_Switch_a2)
    {
        /* Switch: '<S340>/Switch1' */
        rtb_Switch_a2 = KeTAPR_n_TAP2Incrs_High;
    }

    /* End of Switch: '<S340>/Switch1' */

    /* Switch: '<S340>/Switch' incorporates:
     *  Constant: '<S333>/Calib'
     *  RelationalOperator: '<S340>/RelationalOperator1'
     */
    if (rtb_Switch_a2 <= KeTAPR_n_TAP2Incrs_Low)
    {
        rtb_Switch_a2 = KeTAPR_n_TAP2Incrs_Low;
    }

    /* End of Switch: '<S340>/Switch' */
    /* End of Outputs for SubSystem: '<S338>/Limiter1' */

    /* Sum: '<S338>/Sum' */
    TAPR_ac_DW.UnitDelay_DSTATE_p = rtb_Switch_a2 + rtb_Switch1;

    /* Switch: '<S164>/Switch' incorporates:
     *  Constant: '<S302>/Calib'
     *  Constant: '<S325>/Constant'
     *  Inport: '<Root>/VePMIR_n_DVC_AuxPump2SpdDsrd'
     *  RelationalOperator: '<S166>/Comparison4'
     *  SignalConversion generated from: '<S1>/VePMTR_e_ThrmlDevEnbl'
     *  Switch: '<S327>/Switch1'
     */
    if (KeTAPR_b_AuxPump2SpdCmd_SD)
    {
        /* Switch: '<S164>/Switch' incorporates:
         *  Constant: '<S305>/Calib'
         *  Inport: '<Root>/VePMIR_n_DVC_AuxPump2SpdDsrd'
         */
        VeTAPR_n_TAP_AuxPump2SpdCmd = KeTAPR_n_AuxPump2SpdCmd_D;
    }
    else if (((uint32)rtb_TmpSignalConversionAtVePMTR_e_ThrmlD) ==
             CePMTR_e_DISBL_All_Thrml)
    {
        /* Switch: '<S164>/Switch' incorporates:
         *  Constant: '<S334>/Calib'
         *  Inport: '<Root>/VePMIR_n_DVC_AuxPump2SpdDsrd'
         *  Switch: '<S327>/Switch1'
         */
        VeTAPR_n_TAP_AuxPump2SpdCmd = KeTAPR_n_TAP2MinSpdCmd;
    }
    else
    {
        (void)Rte_Read_VePMIR_n_DVC_AuxPump2SpdDsrd_Value
            ((&(VeTAPR_n_TAP_AuxPump2SpdCmd)));

        /* Switch: '<S329>/Switch1' incorporates:
         *  Inport: '<Root>/VePMIR_n_DVC_AuxPump2SpdDsrd'
         *  Switch: '<S327>/Switch1'
         */
        if (!TAPR_ac_B.Merge1)
        {
            /* Switch: '<S164>/Switch' incorporates:
             *  Switch: '<S327>/Switch1'
             */
            VeTAPR_n_TAP_AuxPump2SpdCmd = TAPR_ac_DW.UnitDelay_DSTATE_p;
        }

        /* End of Switch: '<S329>/Switch1' */
    }

    /* End of Switch: '<S164>/Switch' */

    /* RelationalOperator: '<S164>/LessThan3' incorporates:
     *  Constant: '<S306>/Calib'
     */
    rtb_LessThan3_n = (VeTAPR_n_TAP_AuxPump2SpdCmd > KeTAPR_n_EOPB_DryRunMin);

    /* Outputs for Atomic SubSystem: '<S164>/CountDownResetTriggerEnabled' */
    /* Outputs for Atomic SubSystem: '<S299>/EdgeRising_F2T' */
    /* Logic: '<S309>/OR1' incorporates:
     *  UnitDelay: '<S309>/Unit Delay'
     */
    rtb_NotEqual = !TAPR_ac_DW.UnitDelay_DSTATE_co;

    /* Update for UnitDelay: '<S309>/Unit Delay' */
    TAPR_ac_DW.UnitDelay_DSTATE_co = rtb_LessThan3_n;

    /* Switch: '<S299>/Switch1' incorporates:
     *  Constant: '<S299>/Constant Value'
     *  Constant: '<S307>/Calib'
     *  Logic: '<S309>/AND'
     *  RelationalOperator: '<S299>/Greater  Than'
     *  Switch: '<S299>/Switch2'
     *  UnitDelay: '<S299>/Unit Delay'
     */
    if (rtb_LessThan3_n && rtb_NotEqual)
    {
        TAPR_ac_DW.UnitDelay_DSTATE_l4 = KeTAPR_t_EOPB_StartUpTimer;
    }
    else
    {
        if (((sint32)TAPR_ac_DW.UnitDelay_DSTATE_l4) > 0)
        {
            /* UnitDelay: '<S299>/Unit Delay' incorporates:
             *  Constant: '<S299>/Constant Value1'
             *  Sum: '<S299>/Subtraction'
             *  Switch: '<S299>/Switch2'
             */
            TAPR_ac_DW.UnitDelay_DSTATE_l4 = (uint16)((sint32)(((sint32)
                TAPR_ac_DW.UnitDelay_DSTATE_l4) - 1));
        }
    }

    /* End of Switch: '<S299>/Switch1' */
    /* End of Outputs for SubSystem: '<S299>/EdgeRising_F2T' */
    /* End of Outputs for SubSystem: '<S164>/CountDownResetTriggerEnabled' */

    /* Switch: '<S164>/Switch3' incorporates:
     *  Logic: '<S164>/OR2'
     *  UnitDelay: '<S164>/UnitDelay1'
     *  UnitDelay: '<S164>/UnitDelay2'
     */
    if (!TAPR_ac_DW.UnitDelay1_DSTATE_a)
    {
        TAPR_ac_DW.UnitDelay2_DSTATE_j = VeTAPR_n_TAP_AuxPump2SpdCmd;
    }

    /* End of Switch: '<S164>/Switch3' */

    /* Switch: '<S164>/Switch2' incorporates:
     *  Constant: '<S303>/Calib'
     */
    if (KeTAPR_b_EOPB_DryRunSampling)
    {
        /* Outputs for Atomic SubSystem: '<S164>/CountDownResetTriggerEnabled' */
        /* Switch: '<S164>/Switch1' incorporates:
         *  Constant: '<S299>/Constant Value2'
         *  RelationalOperator: '<S299>/Greater  Than1'
         *  UnitDelay: '<S299>/Unit Delay'
         */
        if (((sint32)TAPR_ac_DW.UnitDelay_DSTATE_l4) <= 0)
        {
            /* Switch: '<S164>/Switch2' incorporates:
             *  Inport: '<Root>/VePMIR_n_DVC_AuxPump2SpdDsrd'
             *  UnitDelay: '<S164>/UnitDelay2'
             */
            VeTAPR_n_TAP_AuxPump2SpdCmd = TAPR_ac_DW.UnitDelay2_DSTATE_j;
        }

        /* End of Switch: '<S164>/Switch1' */
        /* End of Outputs for SubSystem: '<S164>/CountDownResetTriggerEnabled' */
    }

    /* End of Switch: '<S164>/Switch2' */

    /* Switch: '<S324>/Switch3' incorporates:
     *  Constant: '<S315>/Calib'
     *  UnitDelay: '<S324>/Unit Delay'
     */
    if (Switch_mw)
    {
        TAPR_ac_DW.UnitDelay_DSTATE_j = KeTAPR_n_TAPDownLim;
    }

    /* End of Switch: '<S324>/Switch3' */

    /* Switch: '<S341>/Switch3' incorporates:
     *  Constant: '<S331>/Calib'
     *  UnitDelay: '<S341>/Unit Delay'
     */
    if (rtb_LessThan3)
    {
        TAPR_ac_DW.UnitDelay_DSTATE_p = KeTAPR_n_TAP2DownLim;
    }

    /* End of Switch: '<S341>/Switch3' */

    /* Update for UnitDelay: '<S360>/UnitDelay6' incorporates:
     *  SignalConversion generated from: '<S1>/VePMDR_e_PMM_PowerMode'
     */
    TAPR_ac_DW.UnitDelay6_DSTATE_j = rtb_TmpSignalConversionAtVePMDR_e_PMM_Po;

    /* Update for UnitDelay: '<S259>/UnitDelay' */
    TAPR_ac_DW.UnitDelay_DSTATE_d = VeTAPR_n_AuxPumpSpd_NoLim;

    /* Update for UnitDelay: '<S362>/UnitDelay2' */
    TAPR_ac_DW.UnitDelay2_DSTATE_o = VeTAPR_n_TAP_AuxPumpSpdCmd;

    /* Update for UnitDelay: '<S168>/UnitDelay6' */
    TAPR_ac_DW.UnitDelay6_DSTATE = VeTAPR_n_TAP_AuxPumpSpdCmd;

    /* End of Outputs for SubSystem: '<S1>/TAPC' */

    /* Outputs for Function Call SubSystem: '<S1>/FUNC_Outputs' */
    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S29>/Calib'
     */
    if (KeTAPR_b_AuxPumpRunning_SelDial)
    {
        /* Outport: '<Root>/VeTAPR_b_AuxPumpRunning' incorporates:
         *  Constant: '<S28>/Calib'
         */
        (void)Rte_Write_VeTAPR_b_AuxPumpRunning_Value
            (KeTAPR_b_AuxPumpRunning_Dial);
    }
    else
    {
        /* Outport: '<Root>/VeTAPR_b_AuxPumpRunning' */
        (void)Rte_Write_VeTAPR_b_AuxPumpRunning_Value
            (VeTAPR_b_AuxPumpRunning_B4Dial);
    }

    /* End of Switch: '<S7>/Switch' */

    /* Switch: '<S6>/Switch' incorporates:
     *  Constant: '<S25>/Calib'
     */
    if (KeTAPR_b_AuxPumpSpdFltrd_SelDial)
    {
        /* Outport: '<Root>/VeTAPR_n_AuxPumpSpdFltrd' incorporates:
         *  Constant: '<S26>/Calib'
         */
        (void)Rte_Write_VeTAPR_n_AuxPumpSpdFltrd_Value
            (KeTAPR_n_AuxPumpSpdFltrd_Dial);
    }
    else
    {
        /* Outport: '<Root>/VeTAPR_n_AuxPumpSpdFltrd' */
        (void)Rte_Write_VeTAPR_n_AuxPumpSpdFltrd_Value
            (VeTAPR_n_AuxPumpFltrd_B4Dial);
    }

    /* End of Switch: '<S6>/Switch' */

    /* Outport: '<Root>/VeTAPR_n_TransAuxPmp_Cmd' incorporates:
     *  Gain: '<S16>/Gain'
     */
    (void)Rte_Write_VeTAPR_n_TransAuxPmp_Cmd_Value(VeTAPR_n_TAP_AuxPumpSpdCmd);

    /* Outport: '<Root>/VeTAPR_dV_GenOilFlw' incorporates:
     *  Gain: '<S22>/Gain'
     */
    (void)Rte_Write_VeTAPR_dV_GenOilFlw_Value(VeTAPR_dV_GenOilFlowEst);

    /* Outport: '<Root>/VeTAPR_e_TransAuxPmp2_PostRunCmd' incorporates:
     *  DataTypeConversion: '<S9>/DataTypeConversion'
     *  SignalConversion generated from: '<S5>/AuxPump2PostRunCmd'
     */
    (void)Rte_Write_VeTAPR_e_TransAuxPmp2_PostRunCmd_Value
        (TAPR_ac_B.OutportBufferForAuxPump2PostRunCmd);

    /* Outport: '<Root>/VeTAPR_n_TransAuxPmp2_Cmd' incorporates:
     *  Gain: '<S18>/Gain'
     */
    (void)Rte_Write_VeTAPR_n_TransAuxPmp2_Cmd_Value(VeTAPR_n_TAP_AuxPump2SpdCmd);

    /* Outport: '<Root>/VeTAPR_e_TransAuxPmp_PostRunCmd' incorporates:
     *  Constant: '<S11>/Calib'
     *  DataTypeConversion: '<S8>/DataTypeConversion'
     */
    (void)Rte_Write_VeTAPR_e_TransAuxPmp_PostRunCmd_Value
        (KeTAPR_e_TransAuxPmp_PostRunCmd_Dial);

    /* Outport: '<Root>/VeTAPR_b_TransAuxPmp_RelySts' incorporates:
     *  Constant: '<S10>/Calib'
     *  Gain: '<S17>/Gain'
     */
    (void)Rte_Write_VeTAPR_b_TransAuxPmp_RelySts_Value
        (KeTAPR_b_TransAuxPmp_RelySts_Dial);

    /* Outport: '<Root>/VeTAPR_b_TransAuxPump_NotFlty' incorporates:
     *  Gain: '<S12>/Gain'
     */
    (void)Rte_Write_VeTAPR_b_TransAuxPump_NotFlty_Value
        (VeTAPR_b_TransAuxPump_NotFlty_AD);

    /* End of Outputs for SubSystem: '<S1>/FUNC_Outputs' */

    /* Outport: '<Root>/VeTAPR_b_MtrA_OilFlwActFA' */
    (void)Rte_Write_VeTAPR_b_MtrA_OilFlwActFA_Value(false);

    /* Outport: '<Root>/VeTAPR_b_MtrB_OilFlwActFA' */
    (void)Rte_Write_VeTAPR_b_MtrB_OilFlwActFA_Value(false);

    /* Outputs for Function Call SubSystem: '<S1>/TAPC' */
    /* Outport: '<Root>/VeTAPR_dV_MtrA_OilFlwAct' incorporates:
     *  Constant: '<S214>/Calib'
     *  Lookup_n-D: '<S218>/Vector'
     *  Product: '<S158>/Product4'
     *  Product: '<S158>/Product5'
     *  SignalConversion generated from: '<S1>/VePMIR_T_TransAuxPump2OilTemp'
     *  SignalConversion generated from: '<S1>/VePMIR_n_AuxPumpSpdAct'
     */
    (void)Rte_Write_VeTAPR_dV_MtrA_OilFlwAct_Value
        ((rtb_TmpSignalConversionAtVePMIR_n_AuxPum * KeTAPR_K_AuxPumpVolPerRev) *
         look2_iflf_binlca_16a(rtb_TmpSignalConversionAtVePMIR_n_AuxPum,
          rtb_TmpSignalConversionAtVePMIR_T_Tran_f, ((const float32 *)
           &(KxTAPR_K_AuxPumpVolumetricEff[0])), ((const float32 *)
           &(KyTAPR_K_AuxPumpVolumetricEff[0])), ((const float32 *)
           &(KtTAPR_K_AuxPumpVolumetricEff[0])), TAPR_ac_ConstP.pooled3, 5U));

    /* Outport: '<Root>/VeTAPR_dV_MtrB_OilFlwAct' incorporates:
     *  Constant: '<S213>/Calib'
     *  Lookup_n-D: '<S217>/Vector'
     *  Product: '<S158>/Product6'
     *  Product: '<S158>/Product7'
     *  SignalConversion generated from: '<S1>/VePMIR_T_TransAuxPumpOilTemp'
     *  SignalConversion generated from: '<S1>/VePMIR_n_TransAuxPump2SpdAct'
     */
    (void)Rte_Write_VeTAPR_dV_MtrB_OilFlwAct_Value
        ((rtb_TmpSignalConversionAtVePMIR_T_TransA * KeTAPR_K_AuxPump2VolPerRev)
         * look2_iflf_binlca_16a(rtb_TmpSignalConversionAtVePMIR_T_TransA,
          rtb_TmpSignalConversionAtVePMIR_n_TransA, ((const float32 *)
           &(KxTAPR_K_AuxPump2VolumetricEff[0])), ((const float32 *)
           &(KyTAPR_K_AuxPump2VolumetricEff[0])), ((const float32 *)
           &(KtTAPR_K_AuxPump2VolumetricEff[0])), TAPR_ac_ConstP.pooled3, 5U));

    /* End of Outputs for SubSystem: '<S1>/TAPC' */

    /* Outputs for Function Call SubSystem: '<S1>/FUNC_Outputs' */
    /* Outport: '<Root>/VeTAPR_f_ElecOilPmp_RlyFreq' incorporates:
     *  Gain: '<S20>/Gain'
     */
    (void)Rte_Write_VeTAPR_f_ElecOilPmp_RlyFreq_Value
        (TAPR_ac_B.OutportBufferForRelayFrequency);

    /* Outport: '<Root>/VeTAPR_n_KMHEVDesiredSpeed' incorporates:
     *  Gain: '<S15>/Gain'
     */
    (void)Rte_Write_VeTAPR_n_KMHEVDesiredSpeed_Value(rtb_Switch_e4);

    /* End of Outputs for SubSystem: '<S1>/FUNC_Outputs' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S1>/VeTFTR_T_TransOilTemp' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, TAPR_CODE) TAPR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TAPR_FUNC_PwrOn'
     */
    /* SignalConversion generated from: '<S2>/AuxPumpRunning' incorporates:
     *  SignalConversion generated from: '<S2>/AuxPumpSpdFltrd'
     *  SignalConversion generated from: '<S2>/ElecOilPmp_Cmd'
     *  SignalConversion generated from: '<S2>/ElecOilPmp_RlyCmd'
     *  SignalConversion generated from: '<S2>/ElecOilPmp_RlyFreq'
     *  SignalConversion generated from: '<S2>/GenFlowEst'
     *  SignalConversion generated from: '<S2>/KMHEVDesiredSpeed'
     *  SignalConversion generated from: '<S2>/MotorAFlowEstimation'
     *  SignalConversion generated from: '<S2>/MotorAFlowEstimationFA'
     *  SignalConversion generated from: '<S2>/MotorBFlowEstimation'
     *  SignalConversion generated from: '<S2>/MotorBFlowEstimationFA'
     *  SignalConversion generated from: '<S2>/TransAuxPmp2_PostRunCmd'
     *  SignalConversion generated from: '<S2>/TransAuxPmp2_SpdCmd'
     *  SignalConversion generated from: '<S2>/TransAuxPmp_PostRunCmd'
     *  SignalConversion generated from: '<S2>/TransAuxPmp_RelySts'
     *  SignalConversion generated from: '<S2>/TransAuxPmp_SpdCmd'
     *  SignalConversion generated from: '<S2>/TransAuxPump_NotFlty'
     */
#if Rte_SysCon_Variant_TAPR_FUNC_2

    /* S-Function (fcgen): '<S2>/FcnCallGen' */
    /* Outputs for Function Call SubSystem: '<S2>/NF_Outputs' */
    /* SignalConversion generated from: '<S425>/TransAuxPmp_SpdCmd' incorporates:
     *  Constant: '<S442>/Calib'
     */
    TAPR_ac_B.OutportBufferForTransAuxPmp_SpdCmd = KeTAPR_n_TransAuxPmp_Cmd_NF;

    /* SignalConversion generated from: '<S425>/TransAuxPump_NotFlty' incorporates:
     *  Constant: '<S430>/Calib'
     */
    TAPR_ac_B.OutportBufferForTransAuxPump_NotFlty =
        KeTAPR_b_TransAuxPump_NotFlty_NF;

    /* SignalConversion generated from: '<S425>/AuxPumpRunning' incorporates:
     *  Constant: '<S428>/Calib'
     */
    TAPR_ac_B.OutportBufferForAuxPumpRunning = KeTAPR_b_AuxPumpRunning_NF;

    /* SignalConversion generated from: '<S425>/AuxPumpSpdFltrd' incorporates:
     *  Constant: '<S440>/Calib'
     */
    TAPR_ac_B.OutportBufferForAuxPumpSpdFltrd = KeTAPR_n_AuxPumpSpdFltrd_NF;

    /* SignalConversion generated from: '<S425>/TransAuxPmp_PostRunCmd' incorporates:
     *  Constant: '<S438>/Calib'
     */
    TAPR_ac_B.OutportBufferForTransAuxPmp_PostRunCmd =
        KeTAPR_e_TransAuxPmp_PostRunCmd_NF;

    /* SignalConversion generated from: '<S425>/TransAuxPmp_RelySts' incorporates:
     *  Constant: '<S429>/Calib'
     */
    TAPR_ac_B.OutportBufferForTransAuxPmp_RelySts =
        KeTAPR_b_TransAuxPmp_RelySts_NF;

    /* SignalConversion generated from: '<S425>/TransAuxPmp2_SpdCmd' incorporates:
     *  Constant: '<S441>/Calib'
     */
    TAPR_ac_B.OutportBufferForTransAuxPmp2_SpdCmd =
        KeTAPR_n_TransAuxPmp2_SpdCmd_NF;

    /* SignalConversion generated from: '<S425>/TransAuxPmp2_PostRunCmd' incorporates:
     *  Constant: '<S437>/Calib'
     */
    TAPR_ac_B.OutportBufferForTransAuxPmp2_PostRunCmd =
        KeTAPR_e_TransAuxPmp2_PostRunCmd_NF;

    /* SignalConversion generated from: '<S425>/ElecOilPmp_RlyCmd' incorporates:
     *  Constant: '<S427>/Calib'
     */
    TAPR_ac_B.OutportBufferForElecOilPmp_RlyCmd =
        KeTAPR_Pct_ElecOilPmp_RlyCmd_NF;

    /* SignalConversion generated from: '<S425>/ElecOilPmp_RlyFreq' incorporates:
     *  Constant: '<S439>/Calib'
     */
    TAPR_ac_B.OutportBufferForElecOilPmp_RlyFreq =
        KeTAPR_f_ElecOilPmp_RlyFreq_NF;

    /* SignalConversion generated from: '<S425>/ElecOilPmp_Cmd' incorporates:
     *  Constant: '<S426>/Calib'
     */
    TAPR_ac_B.OutportBufferForElecOilPmp_Cmd = KeTAPR_Pct_ElecOilPmp_Cmd_NF;

    /* SignalConversion generated from: '<S425>/GenFlowEst' incorporates:
     *  Constant: '<S432>/Calib'
     */
    TAPR_ac_B.OutportBufferForGenFlowEst = KeTAPR_dV_GenFlowEst_NF;

    /* SignalConversion generated from: '<S425>/MotorAFlowEstimation' incorporates:
     *  Constant: '<S431>/Calib'
     */
    TAPR_ac_B.OutportBufferForMotorAFlowEstimation =
        KeTAPR_dV_MotorAFlowEstimation_NF;

    /* SignalConversion generated from: '<S425>/MotorAFlowEstimationFA' incorporates:
     *  Constant: '<S433>/Calib'
     */
    TAPR_ac_B.OutportBufferForMotorAFlowEstimationFA =
        KeTAPR_b_MotorAFlowEstimationFA_NF;

    /* SignalConversion generated from: '<S425>/MotorBFlowEstimation' incorporates:
     *  Constant: '<S434>/Calib'
     */
    TAPR_ac_B.OutportBufferForMotorBFlowEstimation =
        KeTAPR_dV_MotorBFlowEstimation_NF;

    /* SignalConversion generated from: '<S425>/MotorBFlowEstimationFA' incorporates:
     *  Constant: '<S435>/Calib'
     */
    TAPR_ac_B.OutportBufferForMotorBFlowEstimationFA =
        KeTAPR_b_MotorBFlowEstimationFA_NF;

    /* SignalConversion generated from: '<S425>/KMHEVDesiredSpeed' incorporates:
     *  Constant: '<S436>/Calib'
     */
    TAPR_ac_B.OutportBufferForKMHEVDesiredSpeed = KeTAPR_n_EOP_DesiredSpd_NF;

    /* End of Outputs for SubSystem: '<S2>/NF_Outputs' */

    /* Outport: '<Root>/VeTAPR_b_AuxPumpRunning' */
    (void)Rte_Write_VeTAPR_b_AuxPumpRunning_Value
        (TAPR_ac_B.OutportBufferForAuxPumpRunning);

    /* Outport: '<Root>/VeTAPR_n_AuxPumpSpdFltrd' */
    (void)Rte_Write_VeTAPR_n_AuxPumpSpdFltrd_Value
        (TAPR_ac_B.OutportBufferForAuxPumpSpdFltrd);

    /* Outport: '<Root>/VeTAPR_Pct_ElecOilPmp_Cmd' */
    (void)Rte_Write_VeTAPR_Pct_ElecOilPmp_Cmd_Value
        (TAPR_ac_B.OutportBufferForElecOilPmp_Cmd);

    /* Outport: '<Root>/VeTAPR_Pct_ElecOilPmp_RlyCmd' */
    (void)Rte_Write_VeTAPR_Pct_ElecOilPmp_RlyCmd_Value
        (TAPR_ac_B.OutportBufferForElecOilPmp_RlyCmd);

    /* Outport: '<Root>/VeTAPR_f_ElecOilPmp_RlyFreq' */
    (void)Rte_Write_VeTAPR_f_ElecOilPmp_RlyFreq_Value
        (TAPR_ac_B.OutportBufferForElecOilPmp_RlyFreq);

    /* Outport: '<Root>/VeTAPR_dV_GenOilFlw' */
    (void)Rte_Write_VeTAPR_dV_GenOilFlw_Value
        (TAPR_ac_B.OutportBufferForGenFlowEst);

    /* Outport: '<Root>/VeTAPR_n_KMHEVDesiredSpeed' */
    (void)Rte_Write_VeTAPR_n_KMHEVDesiredSpeed_Value
        (TAPR_ac_B.OutportBufferForKMHEVDesiredSpeed);

    /* Outport: '<Root>/VeTAPR_dV_MtrA_OilFlwAct' */
    (void)Rte_Write_VeTAPR_dV_MtrA_OilFlwAct_Value
        (TAPR_ac_B.OutportBufferForMotorAFlowEstimation);

    /* Outport: '<Root>/VeTAPR_b_MtrA_OilFlwActFA' */
    (void)Rte_Write_VeTAPR_b_MtrA_OilFlwActFA_Value
        (TAPR_ac_B.OutportBufferForMotorAFlowEstimationFA);

    /* Outport: '<Root>/VeTAPR_dV_MtrB_OilFlwAct' */
    (void)Rte_Write_VeTAPR_dV_MtrB_OilFlwAct_Value
        (TAPR_ac_B.OutportBufferForMotorBFlowEstimation);

    /* Outport: '<Root>/VeTAPR_b_MtrB_OilFlwActFA' */
    (void)Rte_Write_VeTAPR_b_MtrB_OilFlwActFA_Value
        (TAPR_ac_B.OutportBufferForMotorBFlowEstimationFA);

    /* Outport: '<Root>/VeTAPR_e_TransAuxPmp2_PostRunCmd' incorporates:
     *  SignalConversion generated from: '<S425>/TransAuxPmp2_PostRunCmd'
     */
    (void)Rte_Write_VeTAPR_e_TransAuxPmp2_PostRunCmd_Value
        (TAPR_ac_B.OutportBufferForTransAuxPmp2_PostRunCmd);

    /* Outport: '<Root>/VeTAPR_n_TransAuxPmp2_Cmd' */
    (void)Rte_Write_VeTAPR_n_TransAuxPmp2_Cmd_Value
        (TAPR_ac_B.OutportBufferForTransAuxPmp2_SpdCmd);

    /* Outport: '<Root>/VeTAPR_e_TransAuxPmp_PostRunCmd' incorporates:
     *  SignalConversion generated from: '<S425>/TransAuxPmp_PostRunCmd'
     */
    (void)Rte_Write_VeTAPR_e_TransAuxPmp_PostRunCmd_Value
        (TAPR_ac_B.OutportBufferForTransAuxPmp_PostRunCmd);

    /* Outport: '<Root>/VeTAPR_b_TransAuxPmp_RelySts' */
    (void)Rte_Write_VeTAPR_b_TransAuxPmp_RelySts_Value
        (TAPR_ac_B.OutportBufferForTransAuxPmp_RelySts);

    /* Outport: '<Root>/VeTAPR_n_TransAuxPmp_Cmd' */
    (void)Rte_Write_VeTAPR_n_TransAuxPmp_Cmd_Value
        (TAPR_ac_B.OutportBufferForTransAuxPmp_SpdCmd);

    /* Outport: '<Root>/VeTAPR_b_TransAuxPump_NotFlty' */
    (void)Rte_Write_VeTAPR_b_TransAuxPump_NotFlty_Value
        (TAPR_ac_B.OutportBufferForTransAuxPump_NotFlty);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S2>/AuxPumpRunning' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, TAPR_CODE) TAPR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/TAPR_FUNC_MedTED'
     */
#if Rte_SysCon_Variant_TAPR_FUNC_1

    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* SystemInitialize for Function Call SubSystem: '<S1>/TAPC' */
    /* SystemInitialize for SignalConversion generated from: '<S5>/AuxPump2PostRunCmd' incorporates:
     *  Constant: '<S304>/Calib'
     */
    TAPR_ac_B.OutportBufferForAuxPump2PostRunCmd = KeTAPR_e_AuxPump2PostRunCmd;

    /* SystemInitialize for SignalConversion generated from: '<S5>/RelayFrequency' incorporates:
     *  Constant: '<S229>/Calib'
     */
    TAPR_ac_B.OutportBufferForRelayFrequency = KeTAPR_f_RelayFrequency;

    /* End of SystemInitialize for SubSystem: '<S1>/TAPC' */
    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TAPR_FUNC_PwrOn'
     */
#if Rte_SysCon_Variant_TAPR_FUNC_2

    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* SystemInitialize for Function Call SubSystem: '<S2>/NF_Outputs' */
    /* SystemInitialize for SignalConversion generated from: '<S425>/TransAuxPmp_SpdCmd' incorporates:
     *  Constant: '<S442>/Calib'
     */
    TAPR_ac_B.OutportBufferForTransAuxPmp_SpdCmd = KeTAPR_n_TransAuxPmp_Cmd_NF;

    /* SystemInitialize for SignalConversion generated from: '<S425>/TransAuxPump_NotFlty' incorporates:
     *  Constant: '<S430>/Calib'
     */
    TAPR_ac_B.OutportBufferForTransAuxPump_NotFlty =
        KeTAPR_b_TransAuxPump_NotFlty_NF;

    /* SystemInitialize for SignalConversion generated from: '<S425>/AuxPumpRunning' incorporates:
     *  Constant: '<S428>/Calib'
     */
    TAPR_ac_B.OutportBufferForAuxPumpRunning = KeTAPR_b_AuxPumpRunning_NF;

    /* SystemInitialize for SignalConversion generated from: '<S425>/AuxPumpSpdFltrd' incorporates:
     *  Constant: '<S440>/Calib'
     */
    TAPR_ac_B.OutportBufferForAuxPumpSpdFltrd = KeTAPR_n_AuxPumpSpdFltrd_NF;

    /* SystemInitialize for SignalConversion generated from: '<S425>/TransAuxPmp_PostRunCmd' incorporates:
     *  Constant: '<S438>/Calib'
     */
    TAPR_ac_B.OutportBufferForTransAuxPmp_PostRunCmd =
        KeTAPR_e_TransAuxPmp_PostRunCmd_NF;

    /* SystemInitialize for SignalConversion generated from: '<S425>/TransAuxPmp_RelySts' incorporates:
     *  Constant: '<S429>/Calib'
     */
    TAPR_ac_B.OutportBufferForTransAuxPmp_RelySts =
        KeTAPR_b_TransAuxPmp_RelySts_NF;

    /* SystemInitialize for SignalConversion generated from: '<S425>/TransAuxPmp2_SpdCmd' incorporates:
     *  Constant: '<S441>/Calib'
     */
    TAPR_ac_B.OutportBufferForTransAuxPmp2_SpdCmd =
        KeTAPR_n_TransAuxPmp2_SpdCmd_NF;

    /* SystemInitialize for SignalConversion generated from: '<S425>/TransAuxPmp2_PostRunCmd' incorporates:
     *  Constant: '<S437>/Calib'
     */
    TAPR_ac_B.OutportBufferForTransAuxPmp2_PostRunCmd =
        KeTAPR_e_TransAuxPmp2_PostRunCmd_NF;

    /* SystemInitialize for SignalConversion generated from: '<S425>/ElecOilPmp_RlyCmd' incorporates:
     *  Constant: '<S427>/Calib'
     */
    TAPR_ac_B.OutportBufferForElecOilPmp_RlyCmd =
        KeTAPR_Pct_ElecOilPmp_RlyCmd_NF;

    /* SystemInitialize for SignalConversion generated from: '<S425>/ElecOilPmp_RlyFreq' incorporates:
     *  Constant: '<S439>/Calib'
     */
    TAPR_ac_B.OutportBufferForElecOilPmp_RlyFreq =
        KeTAPR_f_ElecOilPmp_RlyFreq_NF;

    /* SystemInitialize for SignalConversion generated from: '<S425>/ElecOilPmp_Cmd' incorporates:
     *  Constant: '<S426>/Calib'
     */
    TAPR_ac_B.OutportBufferForElecOilPmp_Cmd = KeTAPR_Pct_ElecOilPmp_Cmd_NF;

    /* SystemInitialize for SignalConversion generated from: '<S425>/GenFlowEst' incorporates:
     *  Constant: '<S432>/Calib'
     */
    TAPR_ac_B.OutportBufferForGenFlowEst = KeTAPR_dV_GenFlowEst_NF;

    /* SystemInitialize for SignalConversion generated from: '<S425>/MotorAFlowEstimation' incorporates:
     *  Constant: '<S431>/Calib'
     */
    TAPR_ac_B.OutportBufferForMotorAFlowEstimation =
        KeTAPR_dV_MotorAFlowEstimation_NF;

    /* SystemInitialize for SignalConversion generated from: '<S425>/MotorAFlowEstimationFA' incorporates:
     *  Constant: '<S433>/Calib'
     */
    TAPR_ac_B.OutportBufferForMotorAFlowEstimationFA =
        KeTAPR_b_MotorAFlowEstimationFA_NF;

    /* SystemInitialize for SignalConversion generated from: '<S425>/MotorBFlowEstimation' incorporates:
     *  Constant: '<S434>/Calib'
     */
    TAPR_ac_B.OutportBufferForMotorBFlowEstimation =
        KeTAPR_dV_MotorBFlowEstimation_NF;

    /* SystemInitialize for SignalConversion generated from: '<S425>/MotorBFlowEstimationFA' incorporates:
     *  Constant: '<S435>/Calib'
     */
    TAPR_ac_B.OutportBufferForMotorBFlowEstimationFA =
        KeTAPR_b_MotorBFlowEstimationFA_NF;

    /* SystemInitialize for SignalConversion generated from: '<S425>/KMHEVDesiredSpeed' incorporates:
     *  Constant: '<S436>/Calib'
     */
    TAPR_ac_B.OutportBufferForKMHEVDesiredSpeed = KeTAPR_n_EOP_DesiredSpd_NF;

    /* End of SystemInitialize for SubSystem: '<S2>/NF_Outputs' */
    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Merge: '<Root>/Merge_3' incorporates:
     *  Merge: '<Root>/Merge_1'
     *  Merge: '<Root>/Merge_10'
     *  Merge: '<Root>/Merge_11'
     *  Merge: '<Root>/Merge_12'
     *  Merge: '<Root>/Merge_13'
     *  Merge: '<Root>/Merge_14'
     *  Merge: '<Root>/Merge_15'
     *  Merge: '<Root>/Merge_16'
     *  Merge: '<Root>/Merge_17'
     *  Merge: '<Root>/Merge_2'
     *  Merge: '<Root>/Merge_4'
     *  Merge: '<Root>/Merge_5'
     *  Merge: '<Root>/Merge_6'
     *  Merge: '<Root>/Merge_7'
     *  Merge: '<Root>/Merge_8'
     *  Merge: '<Root>/Merge_9'
     */
#if Rte_SysCon_Variant_TAPR_FUNC_1 || Rte_SysCon_Variant_TAPR_FUNC_2

    /* SystemInitialize for Outport: '<Root>/VeTAPR_e_TransAuxPmp_PostRunCmd' */
    (void)Rte_Write_VeTAPR_e_TransAuxPmp_PostRunCmd_Value
        (CeTAPR_e_TAP_PostRunCmd_NoPostRun);

    /* SystemInitialize for Outport: '<Root>/VeTAPR_e_TransAuxPmp2_PostRunCmd' */
    (void)Rte_Write_VeTAPR_e_TransAuxPmp2_PostRunCmd_Value
        (CeTAPR_e_TAP_PostRunCmd_NoPostRun);

#endif

    /* End of SystemInitialize for Merge: '<Root>/Merge_3' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
