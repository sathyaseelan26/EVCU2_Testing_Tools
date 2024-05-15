/*
 * File: VDVR_ac.c
 *
 * Code generated for Simulink model 'VDVR_ac'.
 *
 * Model version                  : 9.1186
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:57:52 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "VDVR_ac.h"

/* Named constants for Chart: '<S155>/ChrgPortLock_V2V' */
#if Rte_SysCon_Variant_VDVR_1
#define VDVR_ac_IN_Init_State          ((uint8)1U)
#endif

#if Rte_SysCon_Variant_VDVR_1
#define VDVR_ac_IN_Lock                ((uint8)2U)
#endif

#if Rte_SysCon_Variant_VDVR_1
#define VDVR_ac_IN_UnLock              ((uint8)3U)
#endif

/* Named constants for Chart: '<S153>/Discharging_SF' */
#if Rte_SysCon_Variant_VDVR_1
#define VDVR_ac_IN_BPCM_Ready          ((uint8)1U)
#endif

#if Rte_SysCon_Variant_VDVR_1
#define VDVR_ac_IN_ChargePortLockReq   ((uint8)2U)
#endif

#if Rte_SysCon_Variant_VDVR_1
#define VDVR_ac_IN_Discharging         ((uint8)3U)
#endif

#if Rte_SysCon_Variant_VDVR_1
#define VDVR_ac_IN_Discharging_Complete ((uint8)4U)
#endif

#if Rte_SysCon_Variant_VDVR_1
#define VDVR_ac_IN_Discharging_Mode_Req ((uint8)5U)
#endif

#if Rte_SysCon_Variant_VDVR_1
#define VDVR_ac_IN_Discharging_S2_Close ((uint8)6U)
#endif

#if Rte_SysCon_Variant_VDVR_1
#define VDVR_ac_IN_E_Stop              ((uint8)7U)
#endif

#if Rte_SysCon_Variant_VDVR_1
#define VDVR_ac_IN_Initial_State       ((uint8)8U)
#endif

#if Rte_SysCon_Variant_VDVR_1
#define VDVR_ac_IN_Shut_Down           ((uint8)9U)
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
#define START_SEC_CALIB_UNSPECIFIED_VDVR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) HeVDVR_t_ExecutionRate = 0.02F;/* Referenced by:
                                                                      * '<S155>/ChrgPortLock_V2V'
                                                                      * '<S166>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) HeVDVR_t_dT = 0.02F;
                                    /* Referenced by: '<S153>/Discharging_SF' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(uint16, VDVR_VAR_INIT) KaVDVR_K_NbrRetries[9] =
{
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 0U
} ;                                    /* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(uint16, VDVR_VAR_INIT) KeVDVR_Cnt_ACCurrentCheck_Dbnc = 3U;/* Referenced by: '<S199>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(uint16, VDVR_VAR_INIT) KeVDVR_Cnt_ProxIn_Dbnc = 4U;/* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(uint16, VDVR_VAR_INIT) KeVDVR_Cnt_ProxOutDbnc = 4U;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(uint16, VDVR_VAR_INIT) KeVDVR_Cnt_PwrLtCond_Dbnc = 10U;/* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(uint16, VDVR_VAR_INIT) KeVDVR_Cnt_RTC_StrtUpdt_Dly = 2U;/* Referenced by: '<S200>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(uint16, VDVR_VAR_INIT) KeVDVR_Cnt_SOCCheck_Dbnc = 10U;/* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(uint16, VDVR_VAR_INIT) KeVDVR_Cnt_SampleDelayRTC = 10U;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(uint16, VDVR_VAR_INIT) KeVDVR_Cnt_SecureConnV2X_Dbnc = 4U;/* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(uint16, VDVR_VAR_INIT) KeVDVR_Cnt_StartUpdateRTC = 200U;/* Referenced by: '<S201>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(uint16, VDVR_VAR_INIT) KeVDVR_Cnt_V2V_Auth_Dbnc = 10U;/* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(uint16, VDVR_VAR_INIT) KeVDVR_Cnt_WUDelay_RTC = 4U;/* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_I_ACOutCurrDflt = 0.0F;/* Referenced by:
                                                                      * '<S86>/Calib'
                                                                      * '<S116>/Calib'
                                                                      * '<S150>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_I_CurrentLimV2V = 0.1F;/* Referenced by: '<S202>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_I_DschgCurrLim = 25.0F;/* Referenced by: '<S157>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT)
    KeVDVR_I_V2LDualOut_MaxAllwdACOutCurr = 24.0F;/* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_I_V2LSgl_MaxAllwdACOutCurr =
    12.0F;                             /* Referenced by:
                                        * '<S88>/Calib'
                                        * '<S117>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_I_V2V_MaxAllwdACOutCurr =
    32.0F;                             /* Referenced by:
                                        * '<S89>/Calib'
                                        * '<S118>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_K_DayRemain = 24.0F;/* Referenced by:
                                                                      * '<S180>/Calib'
                                                                      * '<S181>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_K_Hr2Day = 24.0F;/* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_K_HrRemain = 60.0F;/* Referenced by:
                                                                      * '<S183>/Calib'
                                                                      * '<S184>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_K_Min2Hr = 60.0F;/* Referenced by: '<S185>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_K_W2Min = 60.0F;/* Referenced by: '<S186>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_P_BattLTMaxLim_Val = 0.0F;/* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_P_DschrgPwrOffset = 0.02F;/* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_P_HVAccPwr_Val = 0.0F;/* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_Pct_SOCLimitOffset = 0.0F;/* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_U_ACOutVoltDflt = 0.0F;/* Referenced by:
                                                                      * '<S90>/Calib'
                                                                      * '<S119>/Calib'
                                                                      * '<S151>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_U_V2LDualOutlt_ProxVoltMax =
    3.96F;                             /* Referenced by:
                                        * '<S91>/Calib'
                                        * '<S133>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_U_V2LDualOutlt_ProxVoltMin =
    3.31F;                             /* Referenced by:
                                        * '<S92>/Calib'
                                        * '<S134>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_U_V2LSnglOutlt_ProxVoltMax =
    1.223F;                            /* Referenced by:
                                        * '<S93>/Calib'
                                        * '<S135>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_U_V2LSnglOutlt_ProxVoltMin =
    0.803F;                            /* Referenced by:
                                        * '<S94>/Calib'
                                        * '<S136>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_U_V2L_MaxAllwdACOutVolt =
    120.0F;                            /* Referenced by:
                                        * '<S95>/Calib'
                                        * '<S120>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_U_V2V_MaxAllwdACOutVolt =
    240.0F;                            /* Referenced by:
                                        * '<S96>/Calib'
                                        * '<S121>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_U_V2V_ProxVoltMax = 2.38F;/* Referenced by:
                                                                      * '<S97>/Calib'
                                                                      * '<S137>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_U_V2V_ProxVoltMin = 1.85F;/* Referenced by:
                                                                      * '<S98>/Calib'
                                                                      * '<S138>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(boolean, VDVR_VAR_INIT) KeVDVR_b_BPCMRdy_Ovrd = 0;/* Referenced by: '<S233>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(boolean, VDVR_VAR_INIT) KeVDVR_b_BPCMRdy_Val = 0;/* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(boolean, VDVR_VAR_INIT) KeVDVR_b_BattLTMaxLim_Ovrd = 0;/* Referenced by: '<S235>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(boolean, VDVR_VAR_INIT) KeVDVR_b_DrvDrUnlcking_Ovrd = 0;/* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(boolean, VDVR_VAR_INIT) KeVDVR_b_DrvDrUnlcking_Val = 0;/* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(boolean, VDVR_VAR_INIT) KeVDVR_b_EVSE_PilotStat_Ovrd = 0;/* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(boolean, VDVR_VAR_INIT) KeVDVR_b_EnblDschrg_Ovrd = 0;/* Referenced by: '<S239>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(boolean, VDVR_VAR_INIT) KeVDVR_b_EnblDschrg_Val = 0;/* Referenced by: '<S240>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(boolean, VDVR_VAR_INIT) KeVDVR_b_HVAccPwr_Ovrd = 0;/* Referenced by: '<S241>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(boolean, VDVR_VAR_INIT) KeVDVR_b_HoodAjarOvrd = 0;/* Referenced by: '<S242>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(boolean, VDVR_VAR_INIT) KeVDVR_b_HoodAjarVal = 0;/* Referenced by: '<S243>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(boolean, VDVR_VAR_INIT) KeVDVR_b_J1772S2Sts_Ovrd = 0;/* Referenced by: '<S244>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(boolean, VDVR_VAR_INIT) KeVDVR_b_J1772S2Sts_Val = 0;/* Referenced by: '<S245>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(boolean, VDVR_VAR_INIT) KeVDVR_b_ManualRel_Actv = 0;/* Referenced by: '<S172>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(boolean, VDVR_VAR_INIT) KeVDVR_b_OBCMd_Ovrd = 0;/* Referenced by: '<S246>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(boolean, VDVR_VAR_INIT) KeVDVR_b_PMMPwrMd_Ovrd = 0;/* Referenced by: '<S247>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(boolean, VDVR_VAR_INIT) KeVDVR_b_Prox_Ovrd = 0;/* Referenced by: '<S248>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(boolean, VDVR_VAR_INIT) KeVDVR_b_TurtleMdSts_Ovrd = 0;/* Referenced by: '<S249>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(boolean, VDVR_VAR_INIT) KeVDVR_b_V2VEnable_Ovrd = 1;/* Referenced by: '<S7>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(TeOBCR_e_EVSE_PilotStat_OBCM, VDVR_VAR_INIT)
    KeVDVR_e_EVSE_PilotStat_Val = CeOBCR_e_NO_EVSE_OBCM;/* Referenced by: '<S250>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(TeOBCR_e_ChrgrModeStat_OBCM, VDVR_VAR_INIT)
    KeVDVR_e_OBCMd_Val = CeOBCR_e_Idle_OBCM;/* Referenced by: '<S251>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(TePMDR_e_PowerMode, VDVR_VAR_INIT) KeVDVR_e_PMMPwrMd_Val =
    CePMDR_e_PowerMode_Off;            /* Referenced by: '<S252>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(TeOBCR_e_ProxStat_OBCM, VDVR_VAR_INIT) KeVDVR_e_Prox_Val =
    CeOBCR_e_ProxOut_OBCM;             /* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(TeDMDR_e_TurtleMdSts, VDVR_VAR_INIT)
    KeVDVR_e_TurtleMdSts_Val = CeDMDR_e_No_Turtle_Mode;/* Referenced by: '<S254>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_f_V2LFreqHi = 126.0F;/* Referenced by:
                                                                      * '<S122>/Calib'
                                                                      * '<S139>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_f_V2LFreqLo = 124.0F;/* Referenced by:
                                                                      * '<S123>/Calib'
                                                                      * '<S140>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_f_V2VFreqHi = 167.0F;/* Referenced by:
                                                                      * '<S124>/Calib'
                                                                      * '<S141>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_f_V2VFreqLo = 165.0F;/* Referenced by:
                                                                      * '<S125>/Calib'
                                                                      * '<S142>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_k_Dschrg_FiltCoef = 0.01F;/* Referenced by: '<S187>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_t_BPCMRdy_Tmot = 3.0F;
                                    /* Referenced by: '<S153>/Discharging_SF' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_t_CPLReq_Tmot = 1.0F;
                                    /* Referenced by: '<S153>/Discharging_SF' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_t_DschrgMdOBCM_Tmot = 2.0F;
                                    /* Referenced by: '<S153>/Discharging_SF' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_t_DschrgS2Cls_Tmot = 2.0F;
                                    /* Referenced by: '<S153>/Discharging_SF' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_t_InitSts_Tmot = 300.0F;
                                    /* Referenced by: '<S153>/Discharging_SF' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_t_NoLoad_Tmot = 10.0F;
                                    /* Referenced by: '<S153>/Discharging_SF' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_t_OneHourAuth = 60.0F;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(uint32, VDVR_VAR_INIT) KeVDVR_t_RTC_Diff_LowerVal = 0U;/* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(uint32, VDVR_VAR_INIT) KeVDVR_t_RTC_Diff_UpperVal = 2U;/* Referenced by: '<S204>/Calib' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_t_TrsfrCmpltShutdwn_Tmot =
    2.0F;                           /* Referenced by: '<S153>/Discharging_SF' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_t_V2VLockDly = 1.0F;
                                  /* Referenced by: '<S155>/ChrgPortLock_V2V' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static volatile CONST(float32, VDVR_VAR_INIT) KeVDVR_t_V2V_LockDly = 1.0F;
                                  /* Referenced by: '<S155>/ChrgPortLock_V2V' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_VDVR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VDVR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_VDVR_1

static VAR(boolean, VDVR_VAR_INIT) EeVDVR_b_V2V_PlugInAuth;/* '<Root>/DSM_1' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(uint16, VDVR_VAR_INIT) VeVDVR_Cnt_EStopCount;/* '<S212>/Switch1' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(float32, VDVR_VAR_INIT) VeVDVR_P_BattLTMaxLim;/* '<S5>/Switch9' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(float32, VDVR_VAR_INIT) VeVDVR_P_HV_AccPwr;/* '<S5>/Switch7' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(float32, VDVR_VAR_INIT) VeVDVR_P_InstantPower_V2V;/* '<S176>/Divide' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(boolean, VDVR_VAR_INIT) VeVDVR_b_ACCurrentChck;/* '<S209>/AND' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(boolean, VDVR_VAR_INIT) VeVDVR_b_BPCMRdy;/* '<S5>/Switch13' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(boolean, VDVR_VAR_INIT) VeVDVR_b_DrvDrUnlcking;/* '<S5>/Switch14' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(boolean, VDVR_VAR_INIT) VeVDVR_b_DschrgRdy4ShtDwn;/* '<S153>/Discharging_SF' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(boolean, VDVR_VAR_INIT) VeVDVR_b_Dschrg_S2Cmd;/* '<S153>/Discharging_SF' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(boolean, VDVR_VAR_INIT) VeVDVR_b_Enable_Discharge;/* '<S38>/Logical' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(boolean, VDVR_VAR_INIT) VeVDVR_b_EnblDschrg;/* '<S5>/Switch3' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(boolean, VDVR_VAR_INIT) VeVDVR_b_GiveUpDschrg;/* '<S154>/NotEqual1' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(boolean, VDVR_VAR_INIT) VeVDVR_b_HoodAjar;/* '<S5>/Switch5' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(boolean, VDVR_VAR_INIT) VeVDVR_b_J1772_S2_Sts;/* '<S5>/Switch11' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(boolean, VDVR_VAR_INIT) VeVDVR_b_NoTurtleMd;/* '<S221>/Comparison6' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(boolean, VDVR_VAR_INIT) VeVDVR_b_PwrLtChk;/* '<S226>/AND' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(boolean, VDVR_VAR_INIT) VeVDVR_b_RstDschrg;/* '<S154>/Logical3' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(boolean, VDVR_VAR_INIT) VeVDVR_b_SOCChk;/* '<S227>/AND' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(boolean, VDVR_VAR_INIT) VeVDVR_b_V2X_HwBasedControlDet;/* '<S66>/Logical9' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(boolean, VDVR_VAR_INIT) VeVDVR_b_V2X_SwBasedControlDet;/* '<S66>/Logical1' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(TeVTLR_e_DschrgSysSts, VDVR_VAR_INIT) VeVDVR_e_DisChrgSysSts;/* '<S153>/Discharging_SF' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(TeVDVR_e_DischrgSt, VDVR_VAR_INIT) VeVDVR_e_DschrgSt;/* '<S153>/Discharging_SF' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(TeOBCR_e_EVSE_PilotStat_OBCM, VDVR_VAR_INIT)
    VeVDVR_e_EVSE_PilotStat_In;        /* '<S5>/Switch58' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(TeOBCR_e_ChrgrModeStat_OBCM, VDVR_VAR_INIT) VeVDVR_e_OBCMd;/* '<S5>/Switch10' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(TeOBCR_e_ChrgrModeCmd_OBCM, VDVR_VAR_INIT) VeVDVR_e_OBC_MdRq;/* '<S153>/Discharging_SF' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(TePMDR_e_PowerMode, VDVR_VAR_INIT) VeVDVR_e_PMM_PowerMode;/* '<S5>/Switch1' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(TeOBCR_e_ProxStat_OBCM, VDVR_VAR_INIT) VeVDVR_e_ProxStat;/* '<S5>/Switch2' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(TeVDVR_e_Secure_Conn_VtoX, VDVR_VAR_INIT) VeVDVR_e_Secure_V2X_Conn;/* '<S147>/Switch1' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(TeDMDR_e_TurtleMdSts, VDVR_VAR_INIT) VeVDVR_e_TurtleMdSts;/* '<S5>/Switch4' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(uint16, VDVR_VAR_INIT) VeVDVR_k_NDCR;/* '<S153>/Discharging_SF' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(float32, VDVR_VAR_INIT) VeVDVR_t_Discharge_Day_Remaining;/* '<S175>/RoundingFunction1' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(float32, VDVR_VAR_INIT) VeVDVR_t_Discharge_Hr_Remaining;/* '<S175>/Sum1' */

#endif

#if Rte_SysCon_Variant_VDVR_1

static VAR(float32, VDVR_VAR_INIT) VeVDVR_t_Discharge_Minute_Remaining;/* '<S175>/Sum2' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VDVR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VDVR
#include "MemMap.h"

VAR(B_VDVR_ac_T, VDVR_VAR_INIT) VDVR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VDVR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VDVR
#include "MemMap.h"

VAR(DW_VDVR_ac_T, VDVR_VAR_INIT) VDVR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VDVR
#include "MemMap.h"
#if Rte_SysCon_Variant_VDVR_1

static FUNC(void, VDVR_CODE_LOCAL) VDVR_ac_ClosedInterval1(VAR(float32,
    AUTOMATIC) rtu_u, VAR(float32, AUTOMATIC) rtu_MN, VAR(float32, AUTOMATIC)
    rtu_MX, P2VAR(B_ClosedInterval1_VDVR_ac_T, AUTOMATIC, VDVR_VAR_INIT) localB);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_VDVR_1

static void VDVR_ac_Discharging(void);

#endif

/*
 * Output and update for atomic system:
 *    '<S64>/ClosedInterval1'
 *    '<S64>/ClosedInterval3'
 *    '<S64>/ClosedInterval2'
 *    '<S65>/ClosedInterval1'
 *    '<S65>/ClosedInterval2'
 *    '<S66>/ClosedInterval1'
 *    '<S66>/ClosedInterval2'
 *    '<S66>/ClosedInterval3'
 *    '<S66>/ClosedInterval4'
 *    '<S66>/ClosedInterval5'
 */
#if Rte_SysCon_Variant_VDVR_1

static FUNC(void, VDVR_CODE_LOCAL) VDVR_ac_ClosedInterval1(VAR(float32,
    AUTOMATIC) rtu_u, VAR(float32, AUTOMATIC) rtu_MN, VAR(float32, AUTOMATIC)
    rtu_MX, P2VAR(B_ClosedInterval1_VDVR_ac_T, AUTOMATIC, VDVR_VAR_INIT) localB)
{
    /* Logic: '<S68>/LogicalOperator' incorporates:
     *  RelationalOperator: '<S68>/RelatonalOperator'
     *  RelationalOperator: '<S68>/RelatonalOperator1'
     */
    localB->LogicalOperator = ((rtu_u >= rtu_MN) && (rtu_u <= rtu_MX));
}

#endif

/* Function for Chart: '<S153>/Discharging_SF' */
#if Rte_SysCon_Variant_VDVR_1

static void VDVR_ac_Discharging(void)
{
    boolean guard1 = false;
    VeVDVR_e_DschrgSt = CeVDVR_e_DschrgActvSt;
    VeVDVR_e_DisChrgSysSts = CeVTLR_e_DschrgActv;

    /* During 'Discharging': '<S194>:12' */
    guard1 = false;
    if (!VDVR_ac_B.TmpSignalConversionAtVeCITR_b_V2VReqOutp)
    {
        /* Transition: '<S194>:382' */
        VeVDVR_k_NDCR = 8U;
        guard1 = true;
    }
    else if ((!VeVDVR_b_ACCurrentChck) && (VDVR_ac_DW.VeVDVR_t_DschrgStTmr >
              KeVDVR_t_NoLoad_Tmot))
    {
        /* Transition: '<S194>:402' */
        VeVDVR_k_NDCR = 7U;

        /* Transition: '<S194>:403' */
        /* Transition: '<S194>:354' */
        /* Transition: '<S194>:263' */
        /* Transition: '<S194>:276' */
        /* Transition: '<S194>:352' */
        /* Transition: '<S194>:384' */
        guard1 = true;
    }
    else if (VDVR_ac_B.TmpSignalConversionAtVeHMIR_Pct_HVBatSOC ==
             VDVR_ac_B.TmpSignalConversionAtVeCITR_Pct_V2VRsrvB)
    {
        /* Transition: '<S194>:332' */
        VDVR_ac_DW.is_c3_VDVR_ac = VDVR_ac_IN_Discharging_Complete;

        /* Entry 'Discharging_Complete': '<S194>:331' */
        VeVDVR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
        VeVDVR_b_Dschrg_S2Cmd = false;
        VeVDVR_e_DschrgSt = CeVDVR_e_DschrgCmplt;
        VeVDVR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
        VDVR_ac_DW.VeVDVR_t_DschrgStTmr = 0.0F;
        VDVR_ac_B.VeVDVR_e_VtoVStatus = CeVDVR_e_TrnsfrCmplt;
    }
    else if ((((uint32)VeVDVR_e_OBCMd) != CeOBCR_e_Dischrg_OBCM) &&
             (VDVR_ac_DW.VeVDVR_t_DschrgStTmr >= KeVDVR_t_DschrgMdOBCM_Tmot))
    {
        /* Transition: '<S194>:351' */
        VeVDVR_k_NDCR = 6U;

        /* Transition: '<S194>:354' */
        /* Transition: '<S194>:263' */
        /* Transition: '<S194>:276' */
        /* Transition: '<S194>:352' */
        /* Transition: '<S194>:384' */
        guard1 = true;
    }
    else if ((!VDVR_ac_B.TmpSignalConversionAtVeCITR_b_ChrgPortLo) &&
             (VDVR_ac_DW.VeVDVR_t_DschrgStTmr > KeVDVR_t_CPLReq_Tmot))
    {
        /* Transition: '<S194>:373' */
        VeVDVR_k_NDCR = 4U;

        /* Transition: '<S194>:352' */
        /* Transition: '<S194>:384' */
        guard1 = true;
    }
    else if (!VeVDVR_b_Enable_Discharge)
    {
        /* Transition: '<S194>:344' */
        VeVDVR_k_NDCR = 2U;

        /* Transition: '<S194>:263' */
        /* Transition: '<S194>:276' */
        /* Transition: '<S194>:352' */
        /* Transition: '<S194>:384' */
        guard1 = true;
    }
    else if ((!VeVDVR_b_J1772_S2_Sts) && (VDVR_ac_DW.VeVDVR_t_DschrgStTmr >=
              KeVDVR_t_DschrgS2Cls_Tmot))
    {
        /* Transition: '<S194>:277' */
        VeVDVR_k_NDCR = 5U;

        /* Transition: '<S194>:384' */
        guard1 = true;
    }
    else if ((!VeVDVR_b_BPCMRdy) && (VDVR_ac_DW.VeVDVR_t_DschrgStTmr >
              KeVDVR_t_BPCMRdy_Tmot))
    {
        /* Transition: '<S194>:134' */
        VeVDVR_k_NDCR = 3U;

        /* Transition: '<S194>:276' */
        /* Transition: '<S194>:352' */
        /* Transition: '<S194>:384' */
        guard1 = true;
    }
    else
    {
        VDVR_ac_DW.VeVDVR_t_DschrgStTmr += HeVDVR_t_dT;
    }

    if (guard1)
    {
        /* Transition: '<S194>:154' */
        VDVR_ac_B.VeVDVR_e_VtoVStatus = CeVDVR_e_TrnsfrIntrpt;
        VDVR_ac_DW.is_c3_VDVR_ac = VDVR_ac_IN_E_Stop;

        /* Entry 'E_Stop': '<S194>:44' */
        VeVDVR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
        VeVDVR_b_Dschrg_S2Cmd = false;
        VDVR_ac_DW.VeVDVR_t_DschrgStTmr = 0.0F;
        VeVDVR_e_DschrgSt = CeVDVR_e_DschrgEStp;
        VeVDVR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
    }
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_VDVR_1

FUNC(void, VDVR_CODE) VDVR_MedTED(void) /* Explicit Task: MedTED */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_VDVR_1

    float32 rtb_TmpSignalConversionAtVeIDCR_f_V2X_Fr;

#endif

#if Rte_SysCon_Variant_VDVR_1

    float32 rtb_TmpSignalConversionAtVeIDCR_U_OBC_Pr;

#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean rtb_Merge_9;

#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean rtb_Merge_2;

#endif

#if Rte_SysCon_Variant_VDVR_1

    uint32 rtb_TmpSignalConversionAtVePLTR_t_RTC_Cu;

#endif

#if Rte_SysCon_Variant_VDVR_1

    float32 rtb_TmpSignalConversionAtVeIDCR_I_ACOutC;

#endif

#if Rte_SysCon_Variant_VDVR_1

    uint32 rtb_Sum;

#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean rtb_OR1_om;

#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean rtb_AND_dp;

#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean rtb_AND_iq;

#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean rtb_TmpSignalConversionAtVeHPMR_b_Cntrlr;

#endif

#if Rte_SysCon_Variant_VDVR_1

    TeOBCR_e_ChrgPort_Req rtb_ChrgPort_Req;

#endif

#if Rte_SysCon_Variant_VDVR_1

    float32 Merge_6;

#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean Merge_7;

#endif

#if Rte_SysCon_Variant_VDVR_1

    float32 Merge_16;

#endif

#if Rte_SysCon_Variant_VDVR_1

    float32 Merge_19_j;

#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean Merge_11_p;

#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean Merge_4_n;

#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean Merge_18_f;

#endif

#if Rte_SysCon_Variant_VDVR_1

    float32 Merge_13_b;

#endif

#if Rte_SysCon_Variant_VDVR_1

    float32 Merge_14_n;

#endif

#if Rte_SysCon_Variant_VDVR_1

    float32 Merge_15_p;

#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean tmp;

#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean guard1 = false;

#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean guard2 = false;

#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean guard3 = false;

#endif

#if Rte_SysCon_Variant_VDVR_1

    boolean guard4 = false;

#endif

#if Rte_SysCon_Variant_VDVR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* Inport: '<Root>/VeIDCR_e_EVSE_PilotStat_OBCM' */
    (void)Rte_Read_VeIDCR_e_EVSE_PilotStat_OBCM_Value
        ((&(VeVDVR_e_EVSE_PilotStat_In)));

    /* Inport: '<Root>/VeHSWR_b_HoodOpen' */
    (void)Rte_Read_VeHSWR_b_HoodOpen_Value((&(VeVDVR_b_HoodAjar)));

    /* Inport: '<Root>/VeOBCR_b_BPCM_Rdy' */
    (void)Rte_Read_VeOBCR_b_BPCM_Rdy_Value((&(VeVDVR_b_BPCMRdy)));

    /* Inport: '<Root>/VeCITR_b_Drv_Dr_Unlocking' */
    (void)Rte_Read_VeCITR_b_Drv_Dr_Unlocking_Value((&(VeVDVR_b_DrvDrUnlcking)));

    /* Inport: '<Root>/VeIDCR_b_J1772_S2_Status' */
    (void)Rte_Read_VeIDCR_b_J1772_S2_Status_Value((&(VeVDVR_b_J1772_S2_Sts)));

    /* Inport: '<Root>/VeIDCR_e_ChrgrModeStat_OBCM' */
    (void)Rte_Read_VeIDCR_e_ChrgrModeStat_OBCM_Value((&(VeVDVR_e_OBCMd)));

    /* Inport: '<Root>/VeESMR_P_BattLTMaxLim' */
    (void)Rte_Read_VeESMR_P_BattLTMaxLim_Value((&(VeVDVR_P_BattLTMaxLim)));

    /* Inport: '<Root>/VeHVTR_P_HV_AccPwr' */
    (void)Rte_Read_VeHVTR_P_HV_AccPwr_Value((&(VeVDVR_P_HV_AccPwr)));

    /* Inport: '<Root>/VeDMDR_e_TurtleMdSts' */
    (void)Rte_Read_VeDMDR_e_TurtleMdSts_Value((&(VeVDVR_e_TurtleMdSts)));

    /* Inport: '<Root>/VeOBCR_b_EnablePowerTransfer' */
    (void)Rte_Read_VeOBCR_b_EnablePowerTransfer_Value((&(VeVDVR_b_EnblDschrg)));

    /* Inport: '<Root>/VeIDCR_e_ProxStat' */
    (void)Rte_Read_VeIDCR_e_ProxStat_Value((&(VeVDVR_e_ProxStat)));

    /* Inport: '<Root>/VePMDR_e_PMM_PowerMode' */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value((&(VeVDVR_e_PMM_PowerMode)));

    /* Outputs for Function Call SubSystem: '<Root>/VDVR_MedTED' */
    /* SignalConversion generated from: '<S1>/VeCITR_b_V2VReq' incorporates:
     *  Inport: '<Root>/VeCITR_b_V2VReq'
     */
    (void)Rte_Read_VeCITR_b_V2VReq_Value
        (&VDVR_ac_B.TmpSignalConversionAtVeCITR_b_V2VReqOutp);

    /* SignalConversion generated from: '<S1>/VeHMIR_Pct_HVBatSOC_HCP' incorporates:
     *  Inport: '<Root>/VeHMIR_Pct_HVBatSOC_HCP'
     */
    (void)Rte_Read_VeHMIR_Pct_HVBatSOC_HCP_Value
        (&VDVR_ac_B.TmpSignalConversionAtVeHMIR_Pct_HVBatSOC);

    /* SignalConversion generated from: '<S1>/VeCITR_b_ChrgPortLockSts' incorporates:
     *  Inport: '<Root>/VeCITR_b_ChrgPortLockSts'
     */
    (void)Rte_Read_VeCITR_b_ChrgPortLockSts_Value
        (&VDVR_ac_B.TmpSignalConversionAtVeCITR_b_ChrgPortLo);

    /* SignalConversion generated from: '<S1>/VeCITR_Pct_V2VRsrvBatt' incorporates:
     *  Inport: '<Root>/VeCITR_Pct_V2VRsrvBatt'
     */
    (void)Rte_Read_VeCITR_Pct_V2VRsrvBatt_Value
        (&VDVR_ac_B.TmpSignalConversionAtVeCITR_Pct_V2VRsrvB);

    /* SignalConversion generated from: '<S1>/VeIDCR_I_ACOutCurrent1' incorporates:
     *  Inport: '<Root>/VeIDCR_I_ACOutCurrent1'
     */
    (void)Rte_Read_VeIDCR_I_ACOutCurrent1_Value
        (&rtb_TmpSignalConversionAtVeIDCR_I_ACOutC);

    /* SignalConversion generated from: '<S1>/VePLTR_t_RTC_CurrentTime' incorporates:
     *  Inport: '<Root>/VePLTR_t_RTC_CurrentTime'
     */
    (void)Rte_Read_VePLTR_t_RTC_CurrentTime_Value
        (&rtb_TmpSignalConversionAtVePLTR_t_RTC_Cu);

    /* SignalConversion generated from: '<S1>/VeIDCR_f_V2X_Frequency' incorporates:
     *  Inport: '<Root>/VeIDCR_f_V2X_Frequency'
     */
    (void)Rte_Read_VeIDCR_f_V2X_Frequency_Value
        (&rtb_TmpSignalConversionAtVeIDCR_f_V2X_Fr);

    /* SignalConversion generated from: '<S1>/VeIDCR_U_OBC_Prox' incorporates:
     *  Inport: '<Root>/VeIDCR_U_OBC_Prox'
     */
    (void)Rte_Read_VeIDCR_U_OBC_Prox_Value
        (&rtb_TmpSignalConversionAtVeIDCR_U_OBC_Pr);

    /* SignalConversion generated from: '<S1>/VeHPMR_b_CntrlrPwrHold' incorporates:
     *  Inport: '<Root>/VeHPMR_b_CntrlrPwrHold'
     */
    (void)Rte_Read_VeHPMR_b_CntrlrPwrHold_Value
        (&rtb_TmpSignalConversionAtVeHPMR_b_Cntrlr);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VDVI'
     */
    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S247>/Calib'
     */
    if (KeVDVR_b_PMMPwrMd_Ovrd)
    {
        /* Switch: '<S5>/Switch1' incorporates:
         *  Constant: '<S252>/Calib'
         *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
         */
        VeVDVR_e_PMM_PowerMode = KeVDVR_e_PMMPwrMd_Val;
    }

    /* End of Switch: '<S5>/Switch1' */

    /* Switch: '<S5>/Switch2' incorporates:
     *  Constant: '<S248>/Calib'
     */
    if (KeVDVR_b_Prox_Ovrd)
    {
        /* Switch: '<S5>/Switch2' incorporates:
         *  Constant: '<S253>/Calib'
         *  Inport: '<Root>/VeIDCR_e_ProxStat'
         */
        VeVDVR_e_ProxStat = KeVDVR_e_Prox_Val;
    }

    /* End of Switch: '<S5>/Switch2' */

    /* Switch: '<S5>/Switch3' incorporates:
     *  Constant: '<S239>/Calib'
     */
    if (KeVDVR_b_EnblDschrg_Ovrd)
    {
        /* Switch: '<S5>/Switch3' incorporates:
         *  Constant: '<S240>/Calib'
         *  Inport: '<Root>/VeOBCR_b_EnablePowerTransfer'
         */
        VeVDVR_b_EnblDschrg = KeVDVR_b_EnblDschrg_Val;
    }

    /* End of Switch: '<S5>/Switch3' */

    /* Switch: '<S5>/Switch4' incorporates:
     *  Constant: '<S249>/Calib'
     */
    if (KeVDVR_b_TurtleMdSts_Ovrd)
    {
        /* Switch: '<S5>/Switch4' incorporates:
         *  Constant: '<S254>/Calib'
         *  Inport: '<Root>/VeDMDR_e_TurtleMdSts'
         */
        VeVDVR_e_TurtleMdSts = KeVDVR_e_TurtleMdSts_Val;
    }

    /* End of Switch: '<S5>/Switch4' */

    /* Switch: '<S5>/Switch7' incorporates:
     *  Constant: '<S241>/Calib'
     */
    if (KeVDVR_b_HVAccPwr_Ovrd)
    {
        /* Switch: '<S5>/Switch7' incorporates:
         *  Constant: '<S232>/Calib'
         *  Inport: '<Root>/VeHVTR_P_HV_AccPwr'
         */
        VeVDVR_P_HV_AccPwr = KeVDVR_P_HVAccPwr_Val;
    }

    /* End of Switch: '<S5>/Switch7' */

    /* Switch: '<S5>/Switch9' incorporates:
     *  Constant: '<S235>/Calib'
     */
    if (KeVDVR_b_BattLTMaxLim_Ovrd)
    {
        /* Switch: '<S5>/Switch9' incorporates:
         *  Constant: '<S231>/Calib'
         *  Inport: '<Root>/VeESMR_P_BattLTMaxLim'
         */
        VeVDVR_P_BattLTMaxLim = KeVDVR_P_BattLTMaxLim_Val;
    }

    /* End of Switch: '<S5>/Switch9' */

    /* Switch: '<S5>/Switch10' incorporates:
     *  Constant: '<S246>/Calib'
     */
    if (KeVDVR_b_OBCMd_Ovrd)
    {
        /* Switch: '<S5>/Switch10' incorporates:
         *  Constant: '<S251>/Calib'
         *  Inport: '<Root>/VeIDCR_e_ChrgrModeStat_OBCM'
         */
        VeVDVR_e_OBCMd = KeVDVR_e_OBCMd_Val;
    }

    /* End of Switch: '<S5>/Switch10' */

    /* Switch: '<S5>/Switch11' incorporates:
     *  Constant: '<S244>/Calib'
     */
    if (KeVDVR_b_J1772S2Sts_Ovrd)
    {
        /* Switch: '<S5>/Switch11' incorporates:
         *  Constant: '<S245>/Calib'
         *  Inport: '<Root>/VeIDCR_b_J1772_S2_Status'
         */
        VeVDVR_b_J1772_S2_Sts = KeVDVR_b_J1772S2Sts_Val;
    }

    /* End of Switch: '<S5>/Switch11' */

    /* Switch: '<S5>/Switch14' incorporates:
     *  Constant: '<S236>/Calib'
     */
    if (KeVDVR_b_DrvDrUnlcking_Ovrd)
    {
        /* Switch: '<S5>/Switch14' incorporates:
         *  Constant: '<S237>/Calib'
         *  Inport: '<Root>/VeCITR_b_Drv_Dr_Unlocking'
         */
        VeVDVR_b_DrvDrUnlcking = KeVDVR_b_DrvDrUnlcking_Val;
    }

    /* End of Switch: '<S5>/Switch14' */

    /* Switch: '<S5>/Switch13' incorporates:
     *  Constant: '<S233>/Calib'
     */
    if (KeVDVR_b_BPCMRdy_Ovrd)
    {
        /* Switch: '<S5>/Switch13' incorporates:
         *  Constant: '<S234>/Calib'
         *  Inport: '<Root>/VeOBCR_b_BPCM_Rdy'
         */
        VeVDVR_b_BPCMRdy = KeVDVR_b_BPCMRdy_Val;
    }

    /* End of Switch: '<S5>/Switch13' */

    /* Switch: '<S5>/Switch5' incorporates:
     *  Constant: '<S242>/Calib'
     */
    if (KeVDVR_b_HoodAjarOvrd)
    {
        /* Switch: '<S5>/Switch5' incorporates:
         *  Constant: '<S243>/Calib'
         *  Inport: '<Root>/VeHSWR_b_HoodOpen'
         */
        VeVDVR_b_HoodAjar = KeVDVR_b_HoodAjarVal;
    }

    /* End of Switch: '<S5>/Switch5' */

    /* Switch: '<S5>/Switch58' incorporates:
     *  Constant: '<S238>/Calib'
     */
    if (KeVDVR_b_EVSE_PilotStat_Ovrd)
    {
        /* Switch: '<S5>/Switch58' incorporates:
         *  Constant: '<S250>/Calib'
         *  Inport: '<Root>/VeIDCR_e_EVSE_PilotStat_OBCM'
         */
        VeVDVR_e_EVSE_PilotStat_In = KeVDVR_e_EVSE_PilotStat_Val;
    }

    /* End of Switch: '<S5>/Switch58' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VDVC'
     */
    /* If: '<S4>/If' incorporates:
     *  Constant: '<S122>/Calib'
     *  Constant: '<S123>/Calib'
     *  Constant: '<S133>/Calib'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S135>/Calib'
     *  Constant: '<S136>/Calib'
     *  Constant: '<S137>/Calib'
     *  Constant: '<S138>/Calib'
     *  Constant: '<S139>/Calib'
     *  Constant: '<S140>/Calib'
     *  Constant: '<S141>/Calib'
     *  Constant: '<S142>/Calib'
     *  Constant: '<S7>/Calib'
     *  Constant: '<S93>/Calib'
     *  Constant: '<S94>/Calib'
     *  Inport: '<Root>/VeCITR_b_ChrgPortLockSts_FA'
     *  Inport: '<Root>/VeSSDR_b_DsblHVBattDischrg'
     */
    if (KeVDVR_b_V2VEnable_Ovrd)
    {
        /* Outputs for IfAction SubSystem: '<S4>/VDVC' incorporates:
         *  ActionPort: '<S11>/ActionPort'
         */
        /* Sum: '<S35>/Subtraction' incorporates:
         *  Constant: '<S51>/Calib'
         */
        Merge_16 = ((float32)rtb_TmpSignalConversionAtVePLTR_t_RTC_Cu) +
            KeVDVR_t_OneHourAuth;

        /* RelationalOperator: '<S220>/Comparison2' incorporates:
         *  Constant: '<S224>/Calib'
         *  Sum: '<S220>/Sum'
         */
        Merge_7 = (VeVDVR_P_BattLTMaxLim > (VeVDVR_P_HV_AccPwr +
                    KeVDVR_P_DschrgPwrOffset));

        /* Outputs for Atomic SubSystem: '<S220>/TurnOffDelaySampleModified' */
        /* Outputs for Atomic SubSystem: '<S226>/EdgeFalling1' */
        /* Logic: '<S228>/AND' incorporates:
         *  Logic: '<S228>/OR1'
         *  UnitDelay: '<S228>/UnitDelay'
         */
        rtb_AND_iq = ((!Merge_7) && (VDVR_ac_DW.UnitDelay_DSTATE_hg));

        /* Update for UnitDelay: '<S228>/UnitDelay' */
        VDVR_ac_DW.UnitDelay_DSTATE_hg = Merge_7;

        /* End of Outputs for SubSystem: '<S226>/EdgeFalling1' */

        /* Switch: '<S226>/Switch' incorporates:
         *  MinMax: '<S226>/Minimum1'
         *  UnitDelay: '<S226>/UnitDelay'
         */
        if (rtb_AND_iq)
        {
            /* MinMax: '<S226>/Minimum1' incorporates:
             *  Constant: '<S222>/Calib'
             *  UnitDelay: '<S226>/UnitDelay'
             */
            VDVR_ac_DW.UnitDelay_DSTATE_c = KeVDVR_Cnt_PwrLtCond_Dbnc;
        }
        else
        {
            if (((sint32)VDVR_ac_DW.UnitDelay_DSTATE_c) <= 1)
            {
                /* MinMax: '<S226>/Minimum1' */
                VDVR_ac_DW.UnitDelay_DSTATE_c = 1U;
            }

            /* MinMax: '<S226>/Minimum1' incorporates:
             *  Constant: '<S226>/ConstantValue'
             *  Sum: '<S226>/Summation'
             *  UnitDelay: '<S226>/UnitDelay'
             */
            VDVR_ac_DW.UnitDelay_DSTATE_c = (uint16)((sint32)(((sint32)
                VDVR_ac_DW.UnitDelay_DSTATE_c) - 1));
        }

        /* End of Switch: '<S226>/Switch' */

        /* Logic: '<S226>/AND' incorporates:
         *  Constant: '<S226>/ConstantValue2'
         *  RelationalOperator: '<S226>/GreaterThan'
         *  UnitDelay: '<S226>/UnitDelay'
         */
        VeVDVR_b_PwrLtChk = (Merge_7 || (((sint32)VDVR_ac_DW.UnitDelay_DSTATE_c)
                              > 0));

        /* End of Outputs for SubSystem: '<S220>/TurnOffDelaySampleModified' */

        /* RelationalOperator: '<S220>/Comparison1' incorporates:
         *  Constant: '<S225>/Calib'
         *  Sum: '<S220>/Sum1'
         */
        Merge_7 = (VDVR_ac_B.TmpSignalConversionAtVeHMIR_Pct_HVBatSOC >
                   (VDVR_ac_B.TmpSignalConversionAtVeCITR_Pct_V2VRsrvB +
                    KeVDVR_Pct_SOCLimitOffset));

        /* Outputs for Atomic SubSystem: '<S220>/TurnOffDelaySampleModified1' */
        /* Outputs for Atomic SubSystem: '<S227>/EdgeFalling1' */
        /* Logic: '<S229>/AND' incorporates:
         *  Logic: '<S229>/OR1'
         *  UnitDelay: '<S229>/UnitDelay'
         */
        rtb_AND_iq = ((!Merge_7) && (VDVR_ac_DW.UnitDelay_DSTATE_h5));

        /* Update for UnitDelay: '<S229>/UnitDelay' */
        VDVR_ac_DW.UnitDelay_DSTATE_h5 = Merge_7;

        /* End of Outputs for SubSystem: '<S227>/EdgeFalling1' */

        /* Switch: '<S227>/Switch' incorporates:
         *  MinMax: '<S227>/Minimum1'
         *  UnitDelay: '<S227>/UnitDelay'
         */
        if (rtb_AND_iq)
        {
            /* MinMax: '<S227>/Minimum1' incorporates:
             *  Constant: '<S223>/Calib'
             *  UnitDelay: '<S227>/UnitDelay'
             */
            VDVR_ac_DW.UnitDelay_DSTATE_a = KeVDVR_Cnt_SOCCheck_Dbnc;
        }
        else
        {
            if (((sint32)VDVR_ac_DW.UnitDelay_DSTATE_a) <= 1)
            {
                /* MinMax: '<S227>/Minimum1' */
                VDVR_ac_DW.UnitDelay_DSTATE_a = 1U;
            }

            /* MinMax: '<S227>/Minimum1' incorporates:
             *  Constant: '<S227>/ConstantValue'
             *  Sum: '<S227>/Summation'
             *  UnitDelay: '<S227>/UnitDelay'
             */
            VDVR_ac_DW.UnitDelay_DSTATE_a = (uint16)((sint32)(((sint32)
                VDVR_ac_DW.UnitDelay_DSTATE_a) - 1));
        }

        /* End of Switch: '<S227>/Switch' */
        /* End of Outputs for SubSystem: '<S220>/TurnOffDelaySampleModified1' */
        /* End of Outputs for SubSystem: '<S4>/VDVC' */
        (void)Rte_Read_VeSSDR_b_DsblHVBattDischrg_Value(&rtb_Merge_2);

        /* Outputs for IfAction SubSystem: '<S4>/VDVC' incorporates:
         *  ActionPort: '<S11>/ActionPort'
         */
        /* Outputs for Atomic SubSystem: '<S220>/TurnOffDelaySampleModified1' */
        /* Logic: '<S227>/AND' incorporates:
         *  Constant: '<S227>/ConstantValue2'
         *  Inport: '<Root>/VeSSDR_b_DsblHVBattDischrg'
         *  RelationalOperator: '<S227>/GreaterThan'
         *  UnitDelay: '<S227>/UnitDelay'
         */
        VeVDVR_b_SOCChk = (Merge_7 || (((sint32)VDVR_ac_DW.UnitDelay_DSTATE_a) >
                            0));

        /* End of Outputs for SubSystem: '<S220>/TurnOffDelaySampleModified1' */

        /* RelationalOperator: '<S221>/Comparison6' incorporates:
         *  Constant: '<S230>/Constant'
         *  Switch: '<S5>/Switch4'
         */
        VeVDVR_b_NoTurtleMd = (((uint32)VeVDVR_e_TurtleMdSts) ==
                               CeDMDR_e_No_Turtle_Mode);

        /* Logic: '<S38>/Logical' incorporates:
         *  Logic: '<S220>/Logical'
         *  Logic: '<S38>/Logical26'
         */
        VeVDVR_b_Enable_Discharge = ((((VeVDVR_b_EnblDschrg) &&
            ((VeVDVR_b_PwrLtChk) && (VeVDVR_b_SOCChk))) && (VeVDVR_b_NoTurtleMd))
            && (!rtb_Merge_2));

        /* DataStoreRead: '<S35>/DataStoreRead2' */
        rtb_Merge_2 = EeVDVR_b_V2V_PlugInAuth;

        /* Outputs for Atomic SubSystem: '<S154>/EdgeRising2' */
        /* Logic: '<S215>/AND' incorporates:
         *  Logic: '<S215>/OR1'
         *  UnitDelay: '<S215>/UnitDelay'
         */
        Merge_7 = ((VeVDVR_b_Enable_Discharge) &&
                   (!VDVR_ac_DW.UnitDelay_DSTATE_ex));

        /* Update for UnitDelay: '<S215>/UnitDelay' */
        VDVR_ac_DW.UnitDelay_DSTATE_ex = VeVDVR_b_Enable_Discharge;

        /* End of Outputs for SubSystem: '<S154>/EdgeRising2' */

        /* Outputs for Atomic SubSystem: '<S66>/ClosedInterval4' */
        VDVR_ac_ClosedInterval1(rtb_TmpSignalConversionAtVeIDCR_f_V2X_Fr,
                                KeVDVR_f_V2LFreqLo, KeVDVR_f_V2LFreqHi,
                                &VDVR_ac_B.ClosedInterval4);

        /* End of Outputs for SubSystem: '<S66>/ClosedInterval4' */

        /* Outputs for Atomic SubSystem: '<S66>/ClosedInterval5' */
        VDVR_ac_ClosedInterval1(rtb_TmpSignalConversionAtVeIDCR_f_V2X_Fr,
                                KeVDVR_f_V2VFreqLo, KeVDVR_f_V2VFreqHi,
                                &VDVR_ac_B.ClosedInterval5);

        /* End of Outputs for SubSystem: '<S66>/ClosedInterval5' */

        /* Logic: '<S66>/Logical1' incorporates:
         *  Constant: '<S139>/Calib'
         *  Constant: '<S140>/Calib'
         *  Constant: '<S141>/Calib'
         *  Constant: '<S142>/Calib'
         */
        VeVDVR_b_V2X_SwBasedControlDet =
            ((VDVR_ac_B.ClosedInterval4.LogicalOperator) ||
             (VDVR_ac_B.ClosedInterval5.LogicalOperator));

        /* Outputs for Enabled SubSystem: '<S36>/SWBasedControl' incorporates:
         *  EnablePort: '<S65>/Enable'
         */
        if (VeVDVR_b_V2X_SwBasedControlDet)
        {
            /* Outputs for Atomic SubSystem: '<S65>/ClosedInterval1' */
            VDVR_ac_ClosedInterval1(rtb_TmpSignalConversionAtVeIDCR_f_V2X_Fr,
                                    KeVDVR_f_V2LFreqLo, KeVDVR_f_V2LFreqHi,
                                    &VDVR_ac_B.ClosedInterval1_n);

            /* End of Outputs for SubSystem: '<S65>/ClosedInterval1' */

            /* Logic: '<S65>/Logical5' incorporates:
             *  Constant: '<S105>/Constant'
             *  Constant: '<S106>/Constant'
             *  Constant: '<S122>/Calib'
             *  Constant: '<S123>/Calib'
             *  RelationalOperator: '<S65>/Comparison1'
             *  RelationalOperator: '<S65>/Comparison5'
             *  Switch: '<S5>/Switch2'
             *  Switch: '<S5>/Switch58'
             */
            rtb_AND_iq = ((((uint32)VeVDVR_e_EVSE_PilotStat_In) ==
                           CeOBCR_e_CP_DET_EVSE_OBCM) && (((uint32)
                            VeVDVR_e_ProxStat) == CeOBCR_e_ProxIn_OBCM));

            /* Outputs for Atomic SubSystem: '<S65>/TurnOnDelaySample' */
            /* Outputs for Atomic SubSystem: '<S126>/EdgeRising' */
            /* Logic: '<S127>/AND' incorporates:
             *  Logic: '<S127>/OR1'
             *  UnitDelay: '<S127>/UnitDelay'
             */
            Merge_18_f = (rtb_AND_iq && (!VDVR_ac_DW.UnitDelay_DSTATE_g));

            /* Update for UnitDelay: '<S127>/UnitDelay' */
            VDVR_ac_DW.UnitDelay_DSTATE_g = rtb_AND_iq;

            /* End of Outputs for SubSystem: '<S126>/EdgeRising' */

            /* Switch: '<S126>/Switch1' incorporates:
             *  Constant: '<S115>/Calib'
             *  Constant: '<S126>/ConstantValue'
             *  Constant: '<S126>/ConstantValue1'
             *  Logic: '<S126>/OR'
             *  Logic: '<S126>/OR1'
             *  MinMax: '<S126>/Minimum'
             *  Sum: '<S126>/Summation'
             *  UnitDelay: '<S126>/UnitDelay'
             */
            if ((!rtb_AND_iq) || Merge_18_f)
            {
                VDVR_ac_DW.UnitDelay_DSTATE_m = 0U;
            }
            else if (KeVDVR_Cnt_SecureConnV2X_Dbnc < ((uint16)(((uint32)
                        VDVR_ac_DW.UnitDelay_DSTATE_m) + 1U)))
            {
                /* MinMax: '<S126>/Minimum' incorporates:
                 *  Constant: '<S115>/Calib'
                 */
                VDVR_ac_DW.UnitDelay_DSTATE_m = KeVDVR_Cnt_SecureConnV2X_Dbnc;
            }
            else
            {
                /* MinMax: '<S126>/Minimum' incorporates:
                 *  Constant: '<S126>/ConstantValue'
                 *  Sum: '<S126>/Summation'
                 *  UnitDelay: '<S126>/UnitDelay'
                 */
                VDVR_ac_DW.UnitDelay_DSTATE_m = (uint16)(((uint32)
                    VDVR_ac_DW.UnitDelay_DSTATE_m) + 1U);
            }

            /* End of Switch: '<S126>/Switch1' */

            /* Logic: '<S126>/AND' incorporates:
             *  Constant: '<S115>/Calib'
             *  RelationalOperator: '<S126>/GreaterThan'
             *  UnitDelay: '<S126>/UnitDelay'
             */
            rtb_AND_iq = (rtb_AND_iq && (VDVR_ac_DW.UnitDelay_DSTATE_m >=
                           KeVDVR_Cnt_SecureConnV2X_Dbnc));

            /* End of Outputs for SubSystem: '<S65>/TurnOnDelaySample' */

            /* Switch: '<S112>/Switch1' incorporates:
             *  Constant: '<S124>/Calib'
             *  Constant: '<S125>/Calib'
             *  Logic: '<S65>/Logical1'
             */
            if ((VDVR_ac_B.ClosedInterval1_n.LogicalOperator) && rtb_AND_iq)
            {
                /* Switch: '<S112>/Switch1' incorporates:
                 *  Constant: '<S103>/Constant'
                 */
                VDVR_ac_B.Switch1_k = CeVDVR_e_VtoL_SnglOtlt_Connected;
            }
            else
            {
                /* Outputs for Atomic SubSystem: '<S65>/ClosedInterval2' */
                VDVR_ac_ClosedInterval1(rtb_TmpSignalConversionAtVeIDCR_f_V2X_Fr,
                                        KeVDVR_f_V2VFreqLo, KeVDVR_f_V2VFreqHi,
                                        &VDVR_ac_B.ClosedInterval2_p);

                /* End of Outputs for SubSystem: '<S65>/ClosedInterval2' */

                /* Switch: '<S112>/Switch2' incorporates:
                 *  Constant: '<S124>/Calib'
                 *  Constant: '<S125>/Calib'
                 *  Logic: '<S65>/Logical2'
                 */
                if ((VDVR_ac_B.ClosedInterval2_p.LogicalOperator) && rtb_AND_iq)
                {
                    /* Switch: '<S112>/Switch1' incorporates:
                     *  Constant: '<S104>/Constant'
                     */
                    VDVR_ac_B.Switch1_k = CeVDVR_e_VtoV_Connected;
                }
                else
                {
                    /* Switch: '<S112>/Switch1' incorporates:
                     *  Constant: '<S107>/Constant'
                     */
                    VDVR_ac_B.Switch1_k = CeVDVR_e_NoConn;
                }

                /* End of Switch: '<S112>/Switch2' */
            }

            /* End of Switch: '<S112>/Switch1' */

            /* RelationalOperator: '<S67>/Comparison1' incorporates:
             *  RelationalOperator: '<S65>/Comparison2'
             *  RelationalOperator: '<S65>/Comparison3'
             *  RelationalOperator: '<S65>/Comparison4'
             *  RelationalOperator: '<S65>/Comparison6'
             *  Switch: '<S112>/Switch1'
             *  Switch: '<S113>/Switch1'
             *  Switch: '<S114>/Switch1'
             */
            VeVDVR_e_Secure_V2X_Conn = VDVR_ac_B.Switch1_k;

            /* Switch: '<S113>/Switch1' incorporates:
             *  Constant: '<S108>/Constant'
             *  Constant: '<S109>/Constant'
             *  RelationalOperator: '<S65>/Comparison2'
             *  RelationalOperator: '<S65>/Comparison3'
             *  Switch: '<S113>/Switch2'
             *  Switch: '<S114>/Switch1'
             */
            if (((uint32)VeVDVR_e_Secure_V2X_Conn) ==
                    CeVDVR_e_VtoL_SnglOtlt_Connected)
            {
                /* Switch: '<S113>/Switch1' incorporates:
                 *  Constant: '<S117>/Calib'
                 */
                VDVR_ac_B.Switch1 = KeVDVR_I_V2LSgl_MaxAllwdACOutCurr;

                /* Switch: '<S114>/Switch1' incorporates:
                 *  Constant: '<S120>/Calib'
                 */
                VDVR_ac_B.Switch1_l = KeVDVR_U_V2L_MaxAllwdACOutVolt;
            }
            else
            {
                if (((uint32)VeVDVR_e_Secure_V2X_Conn) ==
                        CeVDVR_e_VtoV_Connected)
                {
                    /* Switch: '<S113>/Switch2' incorporates:
                     *  Constant: '<S118>/Calib'
                     *  Switch: '<S113>/Switch1'
                     */
                    VDVR_ac_B.Switch1 = KeVDVR_I_V2V_MaxAllwdACOutCurr;
                }
                else
                {
                    /* Switch: '<S113>/Switch1' incorporates:
                     *  Constant: '<S116>/Calib'
                     *  Switch: '<S113>/Switch2'
                     */
                    VDVR_ac_B.Switch1 = KeVDVR_I_ACOutCurrDflt;
                }

                /* Switch: '<S114>/Switch2' incorporates:
                 *  Constant: '<S111>/Constant'
                 *  RelationalOperator: '<S65>/Comparison6'
                 */
                if (((uint32)VeVDVR_e_Secure_V2X_Conn) ==
                        CeVDVR_e_VtoV_Connected)
                {
                    /* Switch: '<S114>/Switch1' incorporates:
                     *  Constant: '<S121>/Calib'
                     */
                    VDVR_ac_B.Switch1_l = KeVDVR_U_V2V_MaxAllwdACOutVolt;
                }
                else
                {
                    /* Switch: '<S114>/Switch1' incorporates:
                     *  Constant: '<S119>/Calib'
                     */
                    VDVR_ac_B.Switch1_l = KeVDVR_U_ACOutVoltDflt;
                }

                /* End of Switch: '<S114>/Switch2' */
            }
        }

        /* End of Outputs for SubSystem: '<S36>/SWBasedControl' */

        /* Outputs for Atomic SubSystem: '<S66>/ClosedInterval1' */
        VDVR_ac_ClosedInterval1(rtb_TmpSignalConversionAtVeIDCR_U_OBC_Pr,
                                KeVDVR_U_V2LSnglOutlt_ProxVoltMin,
                                KeVDVR_U_V2LSnglOutlt_ProxVoltMax,
                                &VDVR_ac_B.ClosedInterval1);

        /* End of Outputs for SubSystem: '<S66>/ClosedInterval1' */

        /* Outputs for Atomic SubSystem: '<S66>/ClosedInterval3' */
        VDVR_ac_ClosedInterval1(rtb_TmpSignalConversionAtVeIDCR_U_OBC_Pr,
                                KeVDVR_U_V2LDualOutlt_ProxVoltMin,
                                KeVDVR_U_V2LDualOutlt_ProxVoltMax,
                                &VDVR_ac_B.ClosedInterval3);

        /* End of Outputs for SubSystem: '<S66>/ClosedInterval3' */

        /* Outputs for Atomic SubSystem: '<S66>/ClosedInterval2' */
        VDVR_ac_ClosedInterval1(rtb_TmpSignalConversionAtVeIDCR_U_OBC_Pr,
                                KeVDVR_U_V2V_ProxVoltMin,
                                KeVDVR_U_V2V_ProxVoltMax,
                                &VDVR_ac_B.ClosedInterval2);

        /* End of Outputs for SubSystem: '<S66>/ClosedInterval2' */

        /* Logic: '<S66>/Logical9' incorporates:
         *  Constant: '<S122>/Calib'
         *  Constant: '<S123>/Calib'
         *  Constant: '<S133>/Calib'
         *  Constant: '<S134>/Calib'
         *  Constant: '<S135>/Calib'
         *  Constant: '<S136>/Calib'
         *  Constant: '<S137>/Calib'
         *  Constant: '<S138>/Calib'
         */
        VeVDVR_b_V2X_HwBasedControlDet =
            (((VDVR_ac_B.ClosedInterval1.LogicalOperator) ||
              (VDVR_ac_B.ClosedInterval3.LogicalOperator)) ||
             (VDVR_ac_B.ClosedInterval2.LogicalOperator));

        /* Outputs for Enabled SubSystem: '<S36>/HWBasedControl' incorporates:
         *  EnablePort: '<S64>/Enable'
         */
        if (VeVDVR_b_V2X_HwBasedControlDet)
        {
            /* Outputs for Atomic SubSystem: '<S64>/ClosedInterval1' */
            VDVR_ac_ClosedInterval1(rtb_TmpSignalConversionAtVeIDCR_U_OBC_Pr,
                                    KeVDVR_U_V2LSnglOutlt_ProxVoltMin,
                                    KeVDVR_U_V2LSnglOutlt_ProxVoltMax,
                                    &VDVR_ac_B.ClosedInterval1_l);

            /* End of Outputs for SubSystem: '<S64>/ClosedInterval1' */

            /* RelationalOperator: '<S64>/Comparison5' incorporates:
             *  Constant: '<S77>/Constant'
             *  Constant: '<S93>/Calib'
             *  Constant: '<S94>/Calib'
             *  Switch: '<S5>/Switch2'
             */
            rtb_AND_iq = (((uint32)VeVDVR_e_ProxStat) == CeOBCR_e_ProxIn_OBCM);

            /* Outputs for Atomic SubSystem: '<S64>/TurnOnDelaySample' */
            /* Outputs for Atomic SubSystem: '<S99>/EdgeRising' */
            /* Logic: '<S100>/AND' incorporates:
             *  Logic: '<S100>/OR1'
             *  UnitDelay: '<S100>/UnitDelay'
             */
            Merge_18_f = (rtb_AND_iq && (!VDVR_ac_DW.UnitDelay_DSTATE_ac));

            /* Update for UnitDelay: '<S100>/UnitDelay' */
            VDVR_ac_DW.UnitDelay_DSTATE_ac = rtb_AND_iq;

            /* End of Outputs for SubSystem: '<S99>/EdgeRising' */

            /* Switch: '<S99>/Switch1' incorporates:
             *  Constant: '<S85>/Calib'
             *  Constant: '<S99>/ConstantValue'
             *  Constant: '<S99>/ConstantValue1'
             *  Logic: '<S99>/OR'
             *  Logic: '<S99>/OR1'
             *  MinMax: '<S99>/Minimum'
             *  Sum: '<S99>/Summation'
             *  UnitDelay: '<S99>/UnitDelay'
             */
            if ((!rtb_AND_iq) || Merge_18_f)
            {
                VDVR_ac_DW.UnitDelay_DSTATE_oy = 0U;
            }
            else if (KeVDVR_Cnt_ProxIn_Dbnc < ((uint16)(((uint32)
                        VDVR_ac_DW.UnitDelay_DSTATE_oy) + 1U)))
            {
                /* MinMax: '<S99>/Minimum' incorporates:
                 *  Constant: '<S85>/Calib'
                 */
                VDVR_ac_DW.UnitDelay_DSTATE_oy = KeVDVR_Cnt_ProxIn_Dbnc;
            }
            else
            {
                /* MinMax: '<S99>/Minimum' incorporates:
                 *  Constant: '<S99>/ConstantValue'
                 *  Sum: '<S99>/Summation'
                 *  UnitDelay: '<S99>/UnitDelay'
                 */
                VDVR_ac_DW.UnitDelay_DSTATE_oy = (uint16)(((uint32)
                    VDVR_ac_DW.UnitDelay_DSTATE_oy) + 1U);
            }

            /* End of Switch: '<S99>/Switch1' */

            /* Logic: '<S99>/AND' incorporates:
             *  Constant: '<S85>/Calib'
             *  RelationalOperator: '<S99>/GreaterThan'
             *  UnitDelay: '<S99>/UnitDelay'
             */
            rtb_AND_iq = (rtb_AND_iq && (VDVR_ac_DW.UnitDelay_DSTATE_oy >=
                           KeVDVR_Cnt_ProxIn_Dbnc));

            /* End of Outputs for SubSystem: '<S64>/TurnOnDelaySample' */

            /* Switch: '<S82>/Switch1' incorporates:
             *  Constant: '<S91>/Calib'
             *  Constant: '<S92>/Calib'
             *  Logic: '<S64>/Logical1'
             */
            if ((VDVR_ac_B.ClosedInterval1_l.LogicalOperator) && rtb_AND_iq)
            {
                /* Switch: '<S82>/Switch1' incorporates:
                 *  Constant: '<S71>/Constant'
                 */
                VDVR_ac_B.Switch1_a = CeVDVR_e_VtoL_SnglOtlt_Connected;
            }
            else
            {
                /* Outputs for Atomic SubSystem: '<S64>/ClosedInterval3' */
                VDVR_ac_ClosedInterval1(rtb_TmpSignalConversionAtVeIDCR_U_OBC_Pr,
                                        KeVDVR_U_V2LDualOutlt_ProxVoltMin,
                                        KeVDVR_U_V2LDualOutlt_ProxVoltMax,
                                        &VDVR_ac_B.ClosedInterval3_o);

                /* End of Outputs for SubSystem: '<S64>/ClosedInterval3' */

                /* Switch: '<S82>/Switch2' incorporates:
                 *  Constant: '<S91>/Calib'
                 *  Constant: '<S92>/Calib'
                 *  Constant: '<S97>/Calib'
                 *  Constant: '<S98>/Calib'
                 *  Logic: '<S64>/Logical3'
                 */
                if ((VDVR_ac_B.ClosedInterval3_o.LogicalOperator) && rtb_AND_iq)
                {
                    /* Switch: '<S82>/Switch1' incorporates:
                     *  Constant: '<S76>/Constant'
                     *  Switch: '<S82>/Switch2'
                     */
                    VDVR_ac_B.Switch1_a = CeVDVR_e_VtoL_DualOtlt_Connected;
                }
                else
                {
                    /* Outputs for Atomic SubSystem: '<S64>/ClosedInterval2' */
                    VDVR_ac_ClosedInterval1
                        (rtb_TmpSignalConversionAtVeIDCR_U_OBC_Pr,
                         KeVDVR_U_V2V_ProxVoltMin, KeVDVR_U_V2V_ProxVoltMax,
                         &VDVR_ac_B.ClosedInterval2_b);

                    /* End of Outputs for SubSystem: '<S64>/ClosedInterval2' */

                    /* Switch: '<S82>/Switch3' incorporates:
                     *  Constant: '<S97>/Calib'
                     *  Constant: '<S98>/Calib'
                     *  Logic: '<S64>/Logical2'
                     */
                    if ((VDVR_ac_B.ClosedInterval2_b.LogicalOperator) &&
                            rtb_AND_iq)
                    {
                        /* Switch: '<S82>/Switch1' incorporates:
                         *  Constant: '<S75>/Constant'
                         *  Switch: '<S82>/Switch2'
                         */
                        VDVR_ac_B.Switch1_a = CeVDVR_e_VtoV_Connected;
                    }
                    else
                    {
                        /* Switch: '<S82>/Switch1' incorporates:
                         *  Constant: '<S78>/Constant'
                         *  Switch: '<S82>/Switch2'
                         */
                        VDVR_ac_B.Switch1_a = CeVDVR_e_NoConn;
                    }

                    /* End of Switch: '<S82>/Switch3' */
                }

                /* End of Switch: '<S82>/Switch2' */
            }

            /* End of Switch: '<S82>/Switch1' */

            /* RelationalOperator: '<S67>/Comparison1' incorporates:
             *  RelationalOperator: '<S64>/Comparison1'
             *  RelationalOperator: '<S64>/Comparison2'
             *  Switch: '<S82>/Switch1'
             *  Switch: '<S83>/Switch1'
             */
            VeVDVR_e_Secure_V2X_Conn = VDVR_ac_B.Switch1_a;

            /* Switch: '<S83>/Switch1' incorporates:
             *  Constant: '<S73>/Constant'
             *  Constant: '<S79>/Constant'
             *  Constant: '<S80>/Constant'
             *  RelationalOperator: '<S64>/Comparison1'
             *  RelationalOperator: '<S64>/Comparison2'
             *  RelationalOperator: '<S64>/Comparison3'
             *  Switch: '<S82>/Switch1'
             *  Switch: '<S83>/Switch2'
             *  Switch: '<S83>/Switch3'
             */
            if (((uint32)VeVDVR_e_Secure_V2X_Conn) ==
                    CeVDVR_e_VtoL_SnglOtlt_Connected)
            {
                /* Switch: '<S83>/Switch1' incorporates:
                 *  Constant: '<S88>/Calib'
                 */
                VDVR_ac_B.Switch1_lj = KeVDVR_I_V2LSgl_MaxAllwdACOutCurr;
            }
            else if (((uint32)VeVDVR_e_Secure_V2X_Conn) ==
                     CeVDVR_e_VtoL_DualOtlt_Connected)
            {
                /* Switch: '<S83>/Switch2' incorporates:
                 *  Constant: '<S87>/Calib'
                 *  Switch: '<S83>/Switch1'
                 */
                VDVR_ac_B.Switch1_lj = KeVDVR_I_V2LDualOut_MaxAllwdACOutCurr;
            }
            else if (((uint32)VDVR_ac_B.Switch1_a) == CeVDVR_e_VtoV_Connected)
            {
                /* Switch: '<S83>/Switch3' incorporates:
                 *  Constant: '<S89>/Calib'
                 *  Switch: '<S83>/Switch1'
                 *  Switch: '<S83>/Switch2'
                 */
                VDVR_ac_B.Switch1_lj = KeVDVR_I_V2V_MaxAllwdACOutCurr;
            }
            else
            {
                /* Switch: '<S83>/Switch1' incorporates:
                 *  Constant: '<S86>/Calib'
                 *  Switch: '<S83>/Switch2'
                 *  Switch: '<S83>/Switch3'
                 */
                VDVR_ac_B.Switch1_lj = KeVDVR_I_ACOutCurrDflt;
            }

            /* Switch: '<S84>/Switch1' incorporates:
             *  Constant: '<S72>/Constant'
             *  Constant: '<S74>/Constant'
             *  Constant: '<S81>/Constant'
             *  Logic: '<S64>/Logical5'
             *  RelationalOperator: '<S64>/Comparison4'
             *  RelationalOperator: '<S64>/Comparison6'
             *  RelationalOperator: '<S64>/Comparison7'
             *  Switch: '<S84>/Switch2'
             */
            if ((((uint32)VeVDVR_e_Secure_V2X_Conn) ==
                    CeVDVR_e_VtoL_SnglOtlt_Connected) || (((uint32)
                    VeVDVR_e_Secure_V2X_Conn) ==
                    CeVDVR_e_VtoL_DualOtlt_Connected))
            {
                /* Switch: '<S84>/Switch1' incorporates:
                 *  Constant: '<S95>/Calib'
                 */
                VDVR_ac_B.Switch1_g = KeVDVR_U_V2L_MaxAllwdACOutVolt;
            }
            else if (((uint32)VeVDVR_e_Secure_V2X_Conn) ==
                     CeVDVR_e_VtoV_Connected)
            {
                /* Switch: '<S84>/Switch2' incorporates:
                 *  Constant: '<S96>/Calib'
                 *  Switch: '<S84>/Switch1'
                 */
                VDVR_ac_B.Switch1_g = KeVDVR_U_V2V_MaxAllwdACOutVolt;
            }
            else
            {
                /* Switch: '<S84>/Switch1' incorporates:
                 *  Constant: '<S90>/Calib'
                 *  Switch: '<S84>/Switch2'
                 */
                VDVR_ac_B.Switch1_g = KeVDVR_U_ACOutVoltDflt;
            }

            /* End of Switch: '<S84>/Switch1' */
        }

        /* End of Outputs for SubSystem: '<S36>/HWBasedControl' */

        /* Switch: '<S147>/Switch1' incorporates:
         *  Constant: '<S93>/Calib'
         *  Constant: '<S94>/Calib'
         *  Switch: '<S147>/Switch2'
         */
        if (VeVDVR_b_V2X_SwBasedControlDet)
        {
            /* RelationalOperator: '<S67>/Comparison1' incorporates:
             *  Switch: '<S112>/Switch1'
             *  Switch: '<S147>/Switch1'
             */
            VeVDVR_e_Secure_V2X_Conn = VDVR_ac_B.Switch1_k;
        }
        else if (VeVDVR_b_V2X_HwBasedControlDet)
        {
            /* RelationalOperator: '<S67>/Comparison1' incorporates:
             *  Switch: '<S147>/Switch1'
             *  Switch: '<S147>/Switch2'
             *  Switch: '<S82>/Switch1'
             */
            VeVDVR_e_Secure_V2X_Conn = VDVR_ac_B.Switch1_a;
        }
        else
        {
            /* RelationalOperator: '<S67>/Comparison1' incorporates:
             *  Constant: '<S146>/Constant'
             *  Switch: '<S147>/Switch1'
             *  Switch: '<S147>/Switch2'
             */
            VeVDVR_e_Secure_V2X_Conn = CeVDVR_e_NoConn;
        }

        /* End of Switch: '<S147>/Switch1' */

        /* RelationalOperator: '<S67>/Comparison1' incorporates:
         *  Constant: '<S144>/Constant'
         */
        rtb_AND_iq = (((uint32)VeVDVR_e_Secure_V2X_Conn) ==
                      CeVDVR_e_VtoV_Connected);

        /* Outputs for Atomic SubSystem: '<S154>/EdgeRising4' */
        /* Logic: '<S216>/OR1' incorporates:
         *  UnitDelay: '<S216>/UnitDelay'
         */
        Merge_18_f = !VDVR_ac_DW.UnitDelay_DSTATE_fd;

        /* Update for UnitDelay: '<S216>/UnitDelay' */
        VDVR_ac_DW.UnitDelay_DSTATE_fd = rtb_AND_iq;

        /* End of Outputs for SubSystem: '<S154>/EdgeRising4' */

        /* Outputs for Atomic SubSystem: '<S154>/EdgeRising6' */
        /* Logic: '<S217>/OR1' incorporates:
         *  UnitDelay: '<S217>/UnitDelay'
         */
        rtb_Merge_9 = !VDVR_ac_DW.UnitDelay_DSTATE_cw;

        /* Update for UnitDelay: '<S217>/UnitDelay' */
        VDVR_ac_DW.UnitDelay_DSTATE_cw =
            VDVR_ac_B.TmpSignalConversionAtVeCITR_b_V2VReqOutp;

        /* Outputs for Atomic SubSystem: '<S154>/EdgeRising4' */
        /* Logic: '<S154>/Logical3' incorporates:
         *  Logic: '<S216>/AND'
         *  Logic: '<S217>/AND'
         *  RelationalOperator: '<S154>/NotEqual2'
         *  UnitDelay: '<S154>/UnitDelay'
         */
        VeVDVR_b_RstDschrg = ((((VDVR_ac_DW.UnitDelay_DSTATE_om !=
            VeVDVR_e_PMM_PowerMode) || Merge_7) || (rtb_AND_iq && Merge_18_f)) ||
                              ((VDVR_ac_B.TmpSignalConversionAtVeCITR_b_V2VReqOutp)
                               && rtb_Merge_9));

        /* End of Outputs for SubSystem: '<S154>/EdgeRising4' */
        /* End of Outputs for SubSystem: '<S154>/EdgeRising6' */

        /* RelationalOperator: '<S153>/Comparison1' incorporates:
         *  Constant: '<S202>/Calib'
         */
        Merge_18_f = (rtb_TmpSignalConversionAtVeIDCR_I_ACOutC >
                      KeVDVR_I_CurrentLimV2V);

        /* Outputs for Atomic SubSystem: '<S153>/TurnOnDelaySample' */
        /* Outputs for Atomic SubSystem: '<S209>/EdgeRising' */
        /* Logic: '<S211>/AND' incorporates:
         *  Logic: '<S211>/OR1'
         *  UnitDelay: '<S211>/Unit Delay'
         */
        rtb_Merge_9 = (Merge_18_f && (!VDVR_ac_DW.UnitDelay_DSTATE_pq));

        /* Update for UnitDelay: '<S211>/Unit Delay' */
        VDVR_ac_DW.UnitDelay_DSTATE_pq = Merge_18_f;

        /* End of Outputs for SubSystem: '<S209>/EdgeRising' */

        /* Switch: '<S209>/Switch1' incorporates:
         *  Constant: '<S199>/Calib'
         *  Constant: '<S209>/Constant Value'
         *  Constant: '<S209>/Constant Value1'
         *  Logic: '<S209>/OR'
         *  Logic: '<S209>/OR1'
         *  MinMax: '<S209>/Minimum'
         *  Sum: '<S209>/Summation'
         *  UnitDelay: '<S209>/Unit Delay'
         */
        if ((!Merge_18_f) || rtb_Merge_9)
        {
            VDVR_ac_DW.UnitDelay_DSTATE_n = 0U;
        }
        else if (KeVDVR_Cnt_ACCurrentCheck_Dbnc < ((uint16)(((uint32)
                    VDVR_ac_DW.UnitDelay_DSTATE_n) + 1U)))
        {
            /* MinMax: '<S209>/Minimum' incorporates:
             *  Constant: '<S199>/Calib'
             */
            VDVR_ac_DW.UnitDelay_DSTATE_n = KeVDVR_Cnt_ACCurrentCheck_Dbnc;
        }
        else
        {
            /* MinMax: '<S209>/Minimum' incorporates:
             *  Constant: '<S209>/Constant Value'
             *  Sum: '<S209>/Summation'
             *  UnitDelay: '<S209>/Unit Delay'
             */
            VDVR_ac_DW.UnitDelay_DSTATE_n = (uint16)(((uint32)
                VDVR_ac_DW.UnitDelay_DSTATE_n) + 1U);
        }

        /* End of Switch: '<S209>/Switch1' */

        /* Logic: '<S209>/AND' incorporates:
         *  Constant: '<S199>/Calib'
         *  RelationalOperator: '<S209>/Greater  Than'
         *  UnitDelay: '<S209>/Unit Delay'
         */
        VeVDVR_b_ACCurrentChck = (Merge_18_f && (VDVR_ac_DW.UnitDelay_DSTATE_n >=
            KeVDVR_Cnt_ACCurrentCheck_Dbnc));

        /* End of Outputs for SubSystem: '<S153>/TurnOnDelaySample' */

        /* Sum: '<S153>/Sum' incorporates:
         *  UnitDelay: '<S153>/Unit Delay1'
         */
        rtb_Sum = rtb_TmpSignalConversionAtVePLTR_t_RTC_Cu -
            VDVR_ac_DW.UnitDelay1_DSTATE;

        /* Outputs for Atomic SubSystem: '<S153>/Count Down Reset Enabled' */
        /* Switch: '<S193>/Switch1' incorporates:
         *  Constant: '<S201>/Calib'
         *  UnitDelay: '<S193>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVeHPMR_b_Cntrlr)
        {
            VDVR_ac_DW.UnitDelay_DSTATE_d = KeVDVR_Cnt_StartUpdateRTC;
        }

        /* End of Switch: '<S193>/Switch1' */

        /* Logic: '<S153>/Logical Operator1' incorporates:
         *  Constant: '<S193>/Constant Value2'
         *  Constant: '<S203>/Calib'
         *  Constant: '<S204>/Calib'
         *  Logic: '<S153>/Logical Operator'
         *  Logic: '<S153>/Logical Operator2'
         *  RelationalOperator: '<S153>/Relational Operator'
         *  RelationalOperator: '<S153>/Relational Operator1'
         *  RelationalOperator: '<S193>/Greater  Than1'
         *  UnitDelay: '<S193>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHPMR_b_Cntrlr = (((rtb_Sum <
            KeVDVR_t_RTC_Diff_UpperVal) && (rtb_Sum > KeVDVR_t_RTC_Diff_LowerVal))
            || (((sint32)VDVR_ac_DW.UnitDelay_DSTATE_d) <= 0));

        /* End of Outputs for SubSystem: '<S153>/Count Down Reset Enabled' */

        /* Outputs for Atomic SubSystem: '<S153>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S208>/EdgeRising' */
        /* Logic: '<S210>/AND' incorporates:
         *  Logic: '<S210>/OR1'
         *  UnitDelay: '<S210>/Unit Delay'
         */
        Merge_18_f = (rtb_TmpSignalConversionAtVeHPMR_b_Cntrlr &&
                      (!VDVR_ac_DW.UnitDelay_DSTATE_j));

        /* Update for UnitDelay: '<S210>/Unit Delay' */
        VDVR_ac_DW.UnitDelay_DSTATE_j = rtb_TmpSignalConversionAtVeHPMR_b_Cntrlr;

        /* End of Outputs for SubSystem: '<S208>/EdgeRising' */

        /* Switch: '<S208>/Switch1' incorporates:
         *  Constant: '<S200>/Calib'
         *  Constant: '<S208>/Constant Value'
         *  Constant: '<S208>/Constant Value1'
         *  Logic: '<S208>/OR'
         *  Logic: '<S208>/OR1'
         *  MinMax: '<S208>/Minimum'
         *  Sum: '<S208>/Summation'
         *  UnitDelay: '<S208>/Unit Delay'
         */
        if ((!rtb_TmpSignalConversionAtVeHPMR_b_Cntrlr) || Merge_18_f)
        {
            VDVR_ac_DW.UnitDelay_DSTATE_f = 0U;
        }
        else if (KeVDVR_Cnt_RTC_StrtUpdt_Dly < ((uint16)(((uint32)
                    VDVR_ac_DW.UnitDelay_DSTATE_f) + 1U)))
        {
            /* MinMax: '<S208>/Minimum' incorporates:
             *  Constant: '<S200>/Calib'
             */
            VDVR_ac_DW.UnitDelay_DSTATE_f = KeVDVR_Cnt_RTC_StrtUpdt_Dly;
        }
        else
        {
            /* MinMax: '<S208>/Minimum' incorporates:
             *  Constant: '<S208>/Constant Value'
             *  Sum: '<S208>/Summation'
             *  UnitDelay: '<S208>/Unit Delay'
             */
            VDVR_ac_DW.UnitDelay_DSTATE_f = (uint16)(((uint32)
                VDVR_ac_DW.UnitDelay_DSTATE_f) + 1U);
        }

        /* End of Switch: '<S208>/Switch1' */
        /* End of Outputs for SubSystem: '<S153>/Turn On Delay Sample' */

        /* Chart: '<S153>/Discharging_SF' incorporates:
         *  Constant: '<S200>/Calib'
         *  DataStoreRead: '<S35>/DataStoreRead2'
         *  Logic: '<S208>/AND'
         *  RelationalOperator: '<S208>/Greater  Than'
         *  Switch: '<S5>/Switch10'
         *  UnitDelay: '<S208>/Unit Delay'
         */
        /* Gateway: VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/Discharging_SF */
        /* During: VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/Discharging_SF */
        if (((uint32)VDVR_ac_DW.is_active_c3_VDVR_ac) == 0U)
        {
            /* Entry: VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/Discharging_SF */
            VDVR_ac_DW.is_active_c3_VDVR_ac = 1U;

            /* Entry Internal: VDVR_MedTED/VDVC/VDVC/Discharging/DschrgSF/Discharging_SF */
            /* Transition: '<S194>:7' */
            VeVDVR_k_NDCR = 0U;
            VDVR_ac_DW.is_c3_VDVR_ac = VDVR_ac_IN_Initial_State;

            /* Entry 'Initial_State': '<S194>:1' */
            VeVDVR_e_DschrgSt = CeVDVR_e_DschrgInit;
            VeVDVR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
            VDVR_ac_DW.VeVDVR_t_DschrgStTmr = 0.0F;
            VeVDVR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
            VDVR_ac_B.VeVDVR_e_VtoVStatus = CeVDVR_e_Inctv;
            VeVDVR_b_Dschrg_S2Cmd = false;
            VeVDVR_b_DschrgRdy4ShtDwn = false;
        }
        else
        {
            guard1 = false;
            guard2 = false;
            guard3 = false;
            guard4 = false;
            switch (VDVR_ac_DW.is_c3_VDVR_ac)
            {
              case VDVR_ac_IN_BPCM_Ready:
                VeVDVR_e_DschrgSt = CeVDVR_e_DschrgBPCMChk;

                /* During 'BPCM_Ready': '<S194>:99' */
                if (VeVDVR_b_BPCMRdy)
                {
                    /* Transition: '<S194>:100' */
                    VDVR_ac_DW.is_c3_VDVR_ac = VDVR_ac_IN_ChargePortLockReq;

                    /* Entry 'ChargePortLockReq': '<S194>:289' */
                    VDVR_ac_DW.VeVDVR_t_DschrgStTmr = 0.0F;
                    VeVDVR_e_DschrgSt = CeVDVR_e_DschrgCPLockFdbkWait;
                }
                else if ((!VeVDVR_b_BPCMRdy) && (VDVR_ac_DW.VeVDVR_t_DschrgStTmr
                          > KeVDVR_t_BPCMRdy_Tmot))
                {
                    /* Transition: '<S194>:103' */
                    VeVDVR_k_NDCR = 3U;

                    /* Transition: '<S194>:108' */
                    guard1 = true;
                }
                else if (!VeVDVR_b_Enable_Discharge)
                {
                    /* Transition: '<S194>:106' */
                    VeVDVR_k_NDCR = 2U;
                    guard1 = true;
                }
                else
                {
                    VDVR_ac_DW.VeVDVR_t_DschrgStTmr += HeVDVR_t_dT;
                }
                break;

              case VDVR_ac_IN_ChargePortLockReq:
                VeVDVR_e_DschrgSt = CeVDVR_e_DschrgCPLockFdbkWait;

                /* During 'ChargePortLockReq': '<S194>:289' */
                if (VDVR_ac_B.TmpSignalConversionAtVeCITR_b_ChrgPortLo)
                {
                    /* Transition: '<S194>:310' */
                    VDVR_ac_DW.is_c3_VDVR_ac = VDVR_ac_IN_Discharging_S2_Close;

                    /* Entry 'Discharging_S2_Close': '<S194>:21' */
                    VeVDVR_b_Dschrg_S2Cmd = true;
                    VDVR_ac_DW.VeVDVR_t_DschrgStTmr = 0.0F;
                    VeVDVR_e_DschrgSt = CeVDVR_e_DschrgClsS2;
                }
                else if ((!VDVR_ac_B.TmpSignalConversionAtVeCITR_b_ChrgPortLo) &&
                         (VDVR_ac_DW.VeVDVR_t_DschrgStTmr > KeVDVR_t_CPLReq_Tmot))
                {
                    /* Transition: '<S194>:304' */
                    VeVDVR_k_NDCR = 4U;

                    /* Transition: '<S194>:324' */
                    /* Transition: '<S194>:348' */
                    guard2 = true;
                }
                else if ((!VeVDVR_b_BPCMRdy) && (VDVR_ac_DW.VeVDVR_t_DschrgStTmr
                          > KeVDVR_t_BPCMRdy_Tmot))
                {
                    /* Transition: '<S194>:346' */
                    VeVDVR_k_NDCR = 3U;
                    guard2 = true;
                }
                else if (!VeVDVR_b_Enable_Discharge)
                {
                    /* Transition: '<S194>:320' */
                    VeVDVR_k_NDCR = 2U;

                    /* Transition: '<S194>:348' */
                    guard2 = true;
                }
                else
                {
                    VDVR_ac_DW.VeVDVR_t_DschrgStTmr += HeVDVR_t_dT;
                }
                break;

              case VDVR_ac_IN_Discharging:
                VDVR_ac_Discharging();
                break;

              case VDVR_ac_IN_Discharging_Complete:
                VeVDVR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
                VeVDVR_b_Dschrg_S2Cmd = false;
                VeVDVR_e_DschrgSt = CeVDVR_e_DschrgCmplt;
                VeVDVR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;

                /* During 'Discharging_Complete': '<S194>:331' */
                if (VDVR_ac_DW.VeVDVR_t_DschrgStTmr >
                        KeVDVR_t_TrsfrCmpltShutdwn_Tmot)
                {
                    /* Transition: '<S194>:338' */
                    VDVR_ac_DW.is_c3_VDVR_ac = VDVR_ac_IN_Shut_Down;

                    /* Entry 'Shut_Down': '<S194>:76' */
                    VDVR_ac_DW.VeVDVR_t_DschrgStTmr = 0.0F;
                    VeVDVR_b_DschrgRdy4ShtDwn = true;
                    VeVDVR_e_DschrgSt = CeVDVR_e_DschrgShtDwn;
                }
                else
                {
                    VDVR_ac_DW.VeVDVR_t_DschrgStTmr += HeVDVR_t_dT;
                }
                break;

              case VDVR_ac_IN_Discharging_Mode_Req:
                VeVDVR_e_OBC_MdRq = CeOBCR_e_Dischrg_OBCMdRq;
                VeVDVR_e_DschrgSt = CeVDVR_e_DschrgOBCMd;

                /* During 'Discharging_Mode_Req': '<S194>:90' */
                if ((((uint32)VeVDVR_e_OBCMd) == CeOBCR_e_Dischrg_OBCM) &&
                        (VeVDVR_b_ACCurrentChck))
                {
                    /* Transition: '<S194>:93' */
                    VDVR_ac_DW.is_c3_VDVR_ac = VDVR_ac_IN_Discharging;

                    /* Entry 'Discharging': '<S194>:12' */
                    VeVDVR_e_DschrgSt = CeVDVR_e_DschrgActvSt;
                    VeVDVR_e_DisChrgSysSts = CeVTLR_e_DschrgActv;
                    VDVR_ac_DW.VeVDVR_t_DschrgStTmr = 0.0F;
                    VDVR_ac_B.VeVDVR_e_VtoVStatus = CeVDVR_e_PwrTrnsfr;
                }
                else if (VDVR_ac_DW.VeVDVR_t_DschrgStTmr >=
                         KeVDVR_t_DschrgMdOBCM_Tmot)
                {
                    /* Transition: '<S194>:96' */
                    VeVDVR_k_NDCR = 1U;

                    /* Transition: '<S194>:149' */
                    /* Transition: '<S194>:150' */
                    /* Transition: '<S194>:372' */
                    /* Transition: '<S194>:128' */
                    guard3 = true;
                }
                else if ((!VDVR_ac_B.TmpSignalConversionAtVeCITR_b_ChrgPortLo) &&
                         (VDVR_ac_DW.VeVDVR_t_DschrgStTmr > KeVDVR_t_CPLReq_Tmot))
                {
                    /* Transition: '<S194>:370' */
                    VeVDVR_k_NDCR = 4U;

                    /* Transition: '<S194>:128' */
                    guard3 = true;
                }
                else if ((!VeVDVR_b_J1772_S2_Sts) &&
                         (VDVR_ac_DW.VeVDVR_t_DschrgStTmr >=
                          KeVDVR_t_DschrgS2Cls_Tmot))
                {
                    /* Transition: '<S194>:129' */
                    VeVDVR_k_NDCR = 5U;
                    guard3 = true;
                }
                else if (!VeVDVR_b_Enable_Discharge)
                {
                    /* Transition: '<S194>:119' */
                    VeVDVR_k_NDCR = 2U;

                    /* Transition: '<S194>:150' */
                    /* Transition: '<S194>:372' */
                    /* Transition: '<S194>:128' */
                    guard3 = true;
                }
                else if ((!VeVDVR_b_BPCMRdy) && (VDVR_ac_DW.VeVDVR_t_DschrgStTmr
                          > KeVDVR_t_BPCMRdy_Tmot))
                {
                    /* Transition: '<S194>:121' */
                    VeVDVR_k_NDCR = 3U;

                    /* Transition: '<S194>:372' */
                    /* Transition: '<S194>:128' */
                    guard3 = true;
                }
                else
                {
                    VDVR_ac_DW.VeVDVR_t_DschrgStTmr += HeVDVR_t_dT;
                }
                break;

              case VDVR_ac_IN_Discharging_S2_Close:
                VeVDVR_b_Dschrg_S2Cmd = true;
                VeVDVR_e_DschrgSt = CeVDVR_e_DschrgClsS2;

                /* During 'Discharging_S2_Close': '<S194>:21' */
                if (VeVDVR_b_J1772_S2_Sts)
                {
                    /* Transition: '<S194>:92' */
                    VDVR_ac_DW.is_c3_VDVR_ac = VDVR_ac_IN_Discharging_Mode_Req;

                    /* Entry 'Discharging_Mode_Req': '<S194>:90' */
                    VeVDVR_e_OBC_MdRq = CeOBCR_e_Dischrg_OBCMdRq;
                    VDVR_ac_DW.VeVDVR_t_DschrgStTmr = 0.0F;
                    VeVDVR_e_DschrgSt = CeVDVR_e_DschrgOBCMd;
                    VDVR_ac_B.VeVDVR_e_VtoVStatus = CeVDVR_e_ActvNRdy;
                }
                else if ((!VeVDVR_b_J1772_S2_Sts) &&
                         (VDVR_ac_DW.VeVDVR_t_DschrgStTmr >=
                          KeVDVR_t_DschrgS2Cls_Tmot))
                {
                    /* Transition: '<S194>:365' */
                    VeVDVR_k_NDCR = 5U;

                    /* Transition: '<S194>:147' */
                    /* Transition: '<S194>:148' */
                    /* Transition: '<S194>:369' */
                    guard4 = true;
                }
                else if ((!VDVR_ac_B.TmpSignalConversionAtVeCITR_b_ChrgPortLo) &&
                         (VDVR_ac_DW.VeVDVR_t_DschrgStTmr > KeVDVR_t_CPLReq_Tmot))
                {
                    /* Transition: '<S194>:367' */
                    VeVDVR_k_NDCR = 4U;
                    guard4 = true;
                }
                else if (!VeVDVR_b_Enable_Discharge)
                {
                    /* Transition: '<S194>:115' */
                    VeVDVR_k_NDCR = 2U;

                    /* Transition: '<S194>:148' */
                    /* Transition: '<S194>:369' */
                    guard4 = true;
                }
                else if ((!VeVDVR_b_BPCMRdy) && (VDVR_ac_DW.VeVDVR_t_DschrgStTmr
                          > KeVDVR_t_BPCMRdy_Tmot))
                {
                    /* Transition: '<S194>:113' */
                    VeVDVR_k_NDCR = 3U;

                    /* Transition: '<S194>:369' */
                    guard4 = true;
                }
                else
                {
                    VDVR_ac_DW.VeVDVR_t_DschrgStTmr += HeVDVR_t_dT;
                }
                break;

              case VDVR_ac_IN_E_Stop:
                VeVDVR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
                VeVDVR_b_Dschrg_S2Cmd = false;
                VeVDVR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;

                /* During 'E_Stop': '<S194>:44' */
                if (VeVDVR_b_GiveUpDschrg)
                {
                    /* Transition: '<S194>:78' */
                    VDVR_ac_DW.is_c3_VDVR_ac = VDVR_ac_IN_Shut_Down;

                    /* Entry 'Shut_Down': '<S194>:76' */
                    VDVR_ac_DW.VeVDVR_t_DschrgStTmr = 0.0F;
                    VeVDVR_b_DschrgRdy4ShtDwn = true;
                    VeVDVR_e_DschrgSt = CeVDVR_e_DschrgShtDwn;
                }
                else
                {
                    /* Transition: '<S194>:145' */
                    /* Transition: '<S194>:146' */
                    /* Transition: '<S194>:178' */
                    /* Transition: '<S194>:47' */
                    /* Transition: '<S194>:75' */
                    VDVR_ac_DW.is_c3_VDVR_ac = VDVR_ac_IN_Initial_State;

                    /* Entry 'Initial_State': '<S194>:1' */
                    VeVDVR_e_DschrgSt = CeVDVR_e_DschrgInit;
                    VeVDVR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
                    VDVR_ac_DW.VeVDVR_t_DschrgStTmr = 0.0F;
                    VeVDVR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
                    VDVR_ac_B.VeVDVR_e_VtoVStatus = CeVDVR_e_Inctv;
                    VeVDVR_b_Dschrg_S2Cmd = false;
                    VeVDVR_b_DschrgRdy4ShtDwn = false;
                }
                break;

              case VDVR_ac_IN_Initial_State:
                VeVDVR_e_DschrgSt = CeVDVR_e_DschrgInit;
                VeVDVR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
                VeVDVR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
                VeVDVR_b_Dschrg_S2Cmd = false;
                VeVDVR_b_DschrgRdy4ShtDwn = false;

                /* Outputs for Atomic SubSystem: '<S153>/Turn On Delay Sample' */
                /* During 'Initial_State': '<S194>:1' */
                if ((((rtb_TmpSignalConversionAtVeHPMR_b_Cntrlr &&
                        (VDVR_ac_DW.UnitDelay_DSTATE_f >=
                         KeVDVR_Cnt_RTC_StrtUpdt_Dly)) &&
                        (VeVDVR_b_Enable_Discharge)) && (EeVDVR_b_V2V_PlugInAuth))
                    && (((uint32)VeVDVR_e_OBCMd) == CeOBCR_e_Idle_OBCM))
                {
                    /* Transition: '<S194>:22' */
                    VDVR_ac_DW.is_c3_VDVR_ac = VDVR_ac_IN_BPCM_Ready;

                    /* Entry 'BPCM_Ready': '<S194>:99' */
                    VDVR_ac_DW.VeVDVR_t_DschrgStTmr = 0.0F;
                    VeVDVR_e_DschrgSt = CeVDVR_e_DschrgBPCMChk;
                    VDVR_ac_B.VeVDVR_e_VtoVStatus = CeVDVR_e_Actv;
                }
                else if (VDVR_ac_DW.VeVDVR_t_DschrgStTmr >=
                         KeVDVR_t_InitSts_Tmot)
                {
                    /* Transition: '<S194>:70' */
                    VeVDVR_k_NDCR = 1U;

                    /* Transition: '<S194>:102' */
                    /* Transition: '<S194>:108' */
                    /* Transition: '<S194>:308' */
                    /* Transition: '<S194>:324' */
                    /* Transition: '<S194>:348' */
                    /* Transition: '<S194>:104' */
                    /* Transition: '<S194>:147' */
                    /* Transition: '<S194>:148' */
                    /* Transition: '<S194>:369' */
                    /* Transition: '<S194>:95' */
                    /* Transition: '<S194>:149' */
                    /* Transition: '<S194>:150' */
                    /* Transition: '<S194>:372' */
                    /* Transition: '<S194>:128' */
                    /* Transition: '<S194>:136' */
                    VDVR_ac_B.VeVDVR_e_VtoVStatus = CeVDVR_e_Inctv;
                    VDVR_ac_DW.is_c3_VDVR_ac = VDVR_ac_IN_E_Stop;

                    /* Entry 'E_Stop': '<S194>:44' */
                    VeVDVR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
                    VeVDVR_b_Dschrg_S2Cmd = false;
                    VDVR_ac_DW.VeVDVR_t_DschrgStTmr = 0.0F;
                    VeVDVR_e_DschrgSt = CeVDVR_e_DschrgEStp;
                    VeVDVR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
                }
                else
                {
                    VDVR_ac_DW.VeVDVR_t_DschrgStTmr += HeVDVR_t_dT;
                }

                /* End of Outputs for SubSystem: '<S153>/Turn On Delay Sample' */
                break;

              default:
                VeVDVR_b_DschrgRdy4ShtDwn = true;
                VeVDVR_e_DschrgSt = CeVDVR_e_DschrgShtDwn;

                /* During 'Shut_Down': '<S194>:76' */
                if (VeVDVR_b_RstDschrg)
                {
                    /* Transition: '<S194>:79' */
                    /* Transition: '<S194>:178' */
                    /* Transition: '<S194>:47' */
                    /* Transition: '<S194>:75' */
                    VDVR_ac_DW.is_c3_VDVR_ac = VDVR_ac_IN_Initial_State;

                    /* Entry 'Initial_State': '<S194>:1' */
                    VeVDVR_e_DschrgSt = CeVDVR_e_DschrgInit;
                    VeVDVR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
                    VDVR_ac_DW.VeVDVR_t_DschrgStTmr = 0.0F;
                    VeVDVR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
                    VDVR_ac_B.VeVDVR_e_VtoVStatus = CeVDVR_e_Inctv;
                    VeVDVR_b_Dschrg_S2Cmd = false;
                    VeVDVR_b_DschrgRdy4ShtDwn = false;
                }
                else
                {
                    VDVR_ac_DW.VeVDVR_t_DschrgStTmr += HeVDVR_t_dT;
                }
                break;
            }

            if (guard4)
            {
                /* Transition: '<S194>:95' */
                /* Transition: '<S194>:149' */
                /* Transition: '<S194>:150' */
                /* Transition: '<S194>:372' */
                /* Transition: '<S194>:128' */
                /* Transition: '<S194>:136' */
                VDVR_ac_B.VeVDVR_e_VtoVStatus = CeVDVR_e_Inctv;
                VDVR_ac_DW.is_c3_VDVR_ac = VDVR_ac_IN_E_Stop;

                /* Entry 'E_Stop': '<S194>:44' */
                VeVDVR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
                VeVDVR_b_Dschrg_S2Cmd = false;
                VDVR_ac_DW.VeVDVR_t_DschrgStTmr = 0.0F;
                VeVDVR_e_DschrgSt = CeVDVR_e_DschrgEStp;
                VeVDVR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
            }

            if (guard3)
            {
                /* Transition: '<S194>:136' */
                VDVR_ac_B.VeVDVR_e_VtoVStatus = CeVDVR_e_Inctv;
                VDVR_ac_DW.is_c3_VDVR_ac = VDVR_ac_IN_E_Stop;

                /* Entry 'E_Stop': '<S194>:44' */
                VeVDVR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
                VeVDVR_b_Dschrg_S2Cmd = false;
                VDVR_ac_DW.VeVDVR_t_DschrgStTmr = 0.0F;
                VeVDVR_e_DschrgSt = CeVDVR_e_DschrgEStp;
                VeVDVR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
            }

            if (guard2)
            {
                /* Transition: '<S194>:104' */
                /* Transition: '<S194>:147' */
                /* Transition: '<S194>:148' */
                /* Transition: '<S194>:369' */
                /* Transition: '<S194>:95' */
                /* Transition: '<S194>:149' */
                /* Transition: '<S194>:150' */
                /* Transition: '<S194>:372' */
                /* Transition: '<S194>:128' */
                /* Transition: '<S194>:136' */
                VDVR_ac_B.VeVDVR_e_VtoVStatus = CeVDVR_e_Inctv;
                VDVR_ac_DW.is_c3_VDVR_ac = VDVR_ac_IN_E_Stop;

                /* Entry 'E_Stop': '<S194>:44' */
                VeVDVR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
                VeVDVR_b_Dschrg_S2Cmd = false;
                VDVR_ac_DW.VeVDVR_t_DschrgStTmr = 0.0F;
                VeVDVR_e_DschrgSt = CeVDVR_e_DschrgEStp;
                VeVDVR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
            }

            if (guard1)
            {
                /* Transition: '<S194>:308' */
                /* Transition: '<S194>:324' */
                /* Transition: '<S194>:348' */
                /* Transition: '<S194>:104' */
                /* Transition: '<S194>:147' */
                /* Transition: '<S194>:148' */
                /* Transition: '<S194>:369' */
                /* Transition: '<S194>:95' */
                /* Transition: '<S194>:149' */
                /* Transition: '<S194>:150' */
                /* Transition: '<S194>:372' */
                /* Transition: '<S194>:128' */
                /* Transition: '<S194>:136' */
                VDVR_ac_B.VeVDVR_e_VtoVStatus = CeVDVR_e_Inctv;
                VDVR_ac_DW.is_c3_VDVR_ac = VDVR_ac_IN_E_Stop;

                /* Entry 'E_Stop': '<S194>:44' */
                VeVDVR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
                VeVDVR_b_Dschrg_S2Cmd = false;
                VDVR_ac_DW.VeVDVR_t_DschrgStTmr = 0.0F;
                VeVDVR_e_DschrgSt = CeVDVR_e_DschrgEStp;
                VeVDVR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
            }
        }

        /* End of Chart: '<S153>/Discharging_SF' */

        /* Logic: '<S35>/Logical11' incorporates:
         *  Constant: '<S46>/Constant'
         *  DataStoreRead: '<S35>/DataStoreRead'
         *  RelationalOperator: '<S35>/Comparison11'
         */
        Merge_18_f = ((((uint32)VeVDVR_e_DisChrgSysSts) == CeVTLR_e_DschrgInactv)
                      && (EeVDVR_b_V2V_PlugInAuth));

        /* Outputs for Atomic SubSystem: '<S35>/EdgeRising1' */
        /* Logic: '<S43>/OR1' incorporates:
         *  UnitDelay: '<S43>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHPMR_b_Cntrlr =
            !VDVR_ac_DW.UnitDelay_DSTATE_l;

        /* Update for UnitDelay: '<S43>/Unit Delay' */
        VDVR_ac_DW.UnitDelay_DSTATE_l = Merge_18_f;

        /* Outputs for Atomic SubSystem: '<S52>/TurnOnDelaySample1' */
        /* Outputs for Atomic SubSystem: '<S59>/SignalLatchOnWithReset' */
        /* Logic: '<S60>/OR1' incorporates:
         *  Logic: '<S43>/AND'
         *  Logic: '<S60>/NOT'
         *  Logic: '<S60>/OR'
         *  UnitDelay: '<S59>/UnitDelay1'
         *  UnitDelay: '<S60>/UnitDelay'
         */
        VDVR_ac_DW.UnitDelay_DSTATE_frd = ((Merge_18_f &&
            rtb_TmpSignalConversionAtVeHPMR_b_Cntrlr) ||
            ((!VDVR_ac_DW.UnitDelay1_DSTATE_n) &&
             (VDVR_ac_DW.UnitDelay_DSTATE_frd)));

        /* End of Outputs for SubSystem: '<S59>/SignalLatchOnWithReset' */
        /* End of Outputs for SubSystem: '<S35>/EdgeRising1' */

        /* Switch: '<S59>/Switch1' incorporates:
         *  Constant: '<S48>/Calib'
         *  Constant: '<S59>/ConstantValue'
         *  Constant: '<S59>/ConstantValue1'
         *  Logic: '<S59>/LogicalOperator'
         *  MinMax: '<S59>/Minimum'
         *  Sum: '<S59>/Summation'
         *  UnitDelay: '<S59>/UnitDelay'
         */
        if (!VDVR_ac_DW.UnitDelay_DSTATE_frd)
        {
            VDVR_ac_DW.UnitDelay_DSTATE_a3 = 0U;
        }
        else if (KeVDVR_Cnt_SampleDelayRTC < ((uint16)(((uint32)
                    VDVR_ac_DW.UnitDelay_DSTATE_a3) + 1U)))
        {
            /* MinMax: '<S59>/Minimum' incorporates:
             *  Constant: '<S48>/Calib'
             */
            VDVR_ac_DW.UnitDelay_DSTATE_a3 = KeVDVR_Cnt_SampleDelayRTC;
        }
        else
        {
            /* MinMax: '<S59>/Minimum' incorporates:
             *  Constant: '<S59>/ConstantValue'
             *  Sum: '<S59>/Summation'
             *  UnitDelay: '<S59>/UnitDelay'
             */
            VDVR_ac_DW.UnitDelay_DSTATE_a3 = (uint16)(((uint32)
                VDVR_ac_DW.UnitDelay_DSTATE_a3) + 1U);
        }

        /* End of Switch: '<S59>/Switch1' */

        /* RelationalOperator: '<S59>/GreaterThan' incorporates:
         *  Constant: '<S48>/Calib'
         *  UnitDelay: '<S59>/UnitDelay'
         *  UnitDelay: '<S59>/UnitDelay1'
         */
        VDVR_ac_DW.UnitDelay1_DSTATE_n = (VDVR_ac_DW.UnitDelay_DSTATE_a3 >=
            KeVDVR_Cnt_SampleDelayRTC);

        /* Switch: '<S52>/Switch' incorporates:
         *  DataStoreWrite: '<S52>/DataStoreWrite1'
         *  Logic: '<S59>/AND'
         *  UnitDelay: '<S59>/UnitDelay1'
         */
        if ((VDVR_ac_DW.UnitDelay_DSTATE_frd) && (VDVR_ac_DW.UnitDelay1_DSTATE_n))
        {
            VDVR_ac_DW.EeVDVR_g_ChrgNowMaxTimetoPlugin = (uint32)Merge_16;
        }

        /* End of Switch: '<S52>/Switch' */
        /* End of Outputs for SubSystem: '<S52>/TurnOnDelaySample1' */

        /* Logic: '<S35>/Logical4' */
        rtb_TmpSignalConversionAtVeHPMR_b_Cntrlr = (rtb_AND_iq &&
            (VDVR_ac_B.TmpSignalConversionAtVeCITR_b_V2VReqOutp));

        /* Logic: '<S35>/Logical' incorporates:
         *  Constant: '<S44>/Constant'
         *  RelationalOperator: '<S35>/Comparison3'
         */
        rtb_Merge_9 = ((((uint32)VeVDVR_e_PMM_PowerMode) !=
                        CePMDR_e_PowerMode_Off) &&
                       rtb_TmpSignalConversionAtVeHPMR_b_Cntrlr);

        /* Outputs for Atomic SubSystem: '<S35>/EdgeRising' */
        /* Logic: '<S42>/OR1' incorporates:
         *  UnitDelay: '<S42>/UnitDelay'
         */
        rtb_OR1_om = !VDVR_ac_DW.UnitDelay_DSTATE_lp;

        /* Update for UnitDelay: '<S42>/UnitDelay' */
        VDVR_ac_DW.UnitDelay_DSTATE_lp = rtb_Merge_9;

        /* Outputs for IfAction SubSystem: '<S35>/set_auth' incorporates:
         *  ActionPort: '<S58>/ActionPort'
         */
        /* If: '<S35>/If1' incorporates:
         *  DataStoreWrite: '<S58>/DataStoreWrite'
         *  Logic: '<S42>/AND'
         */
        EeVDVR_b_V2V_PlugInAuth = ((rtb_Merge_9 && rtb_OR1_om) ||
            (EeVDVR_b_V2V_PlugInAuth));

        /* End of Outputs for SubSystem: '<S35>/set_auth' */
        /* End of Outputs for SubSystem: '<S35>/EdgeRising' */

        /* RelationalOperator: '<S35>/Comparison4' incorporates:
         *  Constant: '<S45>/Constant'
         *  Switch: '<S5>/Switch2'
         */
        rtb_Merge_9 = (((uint32)VeVDVR_e_ProxStat) == CeOBCR_e_ProxOut_OBCM);

        /* Outputs for Atomic SubSystem: '<S35>/TurnOnDelaySample' */
        /* Outputs for Atomic SubSystem: '<S54>/EdgeRising' */
        /* Logic: '<S61>/AND' incorporates:
         *  Logic: '<S61>/OR1'
         *  UnitDelay: '<S61>/UnitDelay'
         */
        rtb_OR1_om = (rtb_Merge_9 && (!VDVR_ac_DW.UnitDelay_DSTATE_cm));

        /* Update for UnitDelay: '<S61>/UnitDelay' */
        VDVR_ac_DW.UnitDelay_DSTATE_cm = rtb_Merge_9;

        /* End of Outputs for SubSystem: '<S54>/EdgeRising' */

        /* Logic: '<S54>/OR1' incorporates:
         *  Logic: '<S54>/AND'
         */
        rtb_Merge_9 = !rtb_Merge_9;

        /* Switch: '<S54>/Switch1' incorporates:
         *  Constant: '<S47>/Calib'
         *  Constant: '<S54>/ConstantValue'
         *  Constant: '<S54>/ConstantValue1'
         *  Logic: '<S54>/OR'
         *  Logic: '<S54>/OR1'
         *  MinMax: '<S54>/Minimum'
         *  Sum: '<S54>/Summation'
         *  UnitDelay: '<S54>/UnitDelay'
         */
        if (rtb_Merge_9 || rtb_OR1_om)
        {
            VDVR_ac_DW.UnitDelay_DSTATE_e = 0U;
        }
        else if (KeVDVR_Cnt_ProxOutDbnc < ((uint16)(((uint32)
                    VDVR_ac_DW.UnitDelay_DSTATE_e) + 1U)))
        {
            /* MinMax: '<S54>/Minimum' incorporates:
             *  Constant: '<S47>/Calib'
             */
            VDVR_ac_DW.UnitDelay_DSTATE_e = KeVDVR_Cnt_ProxOutDbnc;
        }
        else
        {
            /* MinMax: '<S54>/Minimum' incorporates:
             *  Constant: '<S54>/ConstantValue'
             *  Sum: '<S54>/Summation'
             *  UnitDelay: '<S54>/UnitDelay'
             */
            VDVR_ac_DW.UnitDelay_DSTATE_e = (uint16)(((uint32)
                VDVR_ac_DW.UnitDelay_DSTATE_e) + 1U);
        }

        /* End of Switch: '<S54>/Switch1' */
        /* End of Outputs for SubSystem: '<S35>/TurnOnDelaySample' */

        /* Switch: '<S52>/Switch1' incorporates:
         *  Constant: '<S52>/ConstantValue'
         *  Constant: '<S52>/ConstantValue1'
         *  DataStoreWrite: '<S52>/DataStoreWrite1'
         *  RelationalOperator: '<S52>/Comparison1'
         *  Sum: '<S52>/Subtraction'
         */
        if (VDVR_ac_DW.EeVDVR_g_ChrgNowMaxTimetoPlugin == 0U)
        {
            Merge_16--;
        }
        else
        {
            Merge_16 = (float32)VDVR_ac_DW.EeVDVR_g_ChrgNowMaxTimetoPlugin;
        }

        /* End of Switch: '<S52>/Switch1' */

        /* RelationalOperator: '<S35>/Comparison2' */
        rtb_OR1_om = (((float32)rtb_TmpSignalConversionAtVePLTR_t_RTC_Cu) <
                      Merge_16);

        /* Outputs for Atomic SubSystem: '<S35>/TurnOnDelaySample1' */
        /* Outputs for Atomic SubSystem: '<S55>/EdgeRising' */
        /* Logic: '<S62>/AND' incorporates:
         *  Logic: '<S62>/OR1'
         *  UnitDelay: '<S62>/UnitDelay'
         */
        rtb_AND_dp = (rtb_OR1_om && (!VDVR_ac_DW.UnitDelay_DSTATE_i));

        /* Update for UnitDelay: '<S62>/UnitDelay' */
        VDVR_ac_DW.UnitDelay_DSTATE_i = rtb_OR1_om;

        /* End of Outputs for SubSystem: '<S55>/EdgeRising' */

        /* Switch: '<S55>/Switch1' incorporates:
         *  Constant: '<S50>/Calib'
         *  Constant: '<S55>/ConstantValue'
         *  Constant: '<S55>/ConstantValue1'
         *  Logic: '<S55>/OR'
         *  Logic: '<S55>/OR1'
         *  MinMax: '<S55>/Minimum'
         *  Sum: '<S55>/Summation'
         *  UnitDelay: '<S55>/UnitDelay'
         */
        if ((!rtb_OR1_om) || rtb_AND_dp)
        {
            VDVR_ac_DW.UnitDelay_DSTATE_cd = 0U;
        }
        else if (KeVDVR_Cnt_WUDelay_RTC < ((uint16)(((uint32)
                    VDVR_ac_DW.UnitDelay_DSTATE_cd) + 1U)))
        {
            /* MinMax: '<S55>/Minimum' incorporates:
             *  Constant: '<S50>/Calib'
             */
            VDVR_ac_DW.UnitDelay_DSTATE_cd = KeVDVR_Cnt_WUDelay_RTC;
        }
        else
        {
            /* MinMax: '<S55>/Minimum' incorporates:
             *  Constant: '<S55>/ConstantValue'
             *  Sum: '<S55>/Summation'
             *  UnitDelay: '<S55>/UnitDelay'
             */
            VDVR_ac_DW.UnitDelay_DSTATE_cd = (uint16)(((uint32)
                VDVR_ac_DW.UnitDelay_DSTATE_cd) + 1U);
        }

        /* End of Switch: '<S55>/Switch1' */
        /* End of Outputs for SubSystem: '<S35>/TurnOnDelaySample1' */

        /* Outputs for Atomic SubSystem: '<S35>/TurnOnDelaySample2' */
        /* Outputs for Atomic SubSystem: '<S56>/EdgeRising' */
        /* Logic: '<S63>/AND' incorporates:
         *  DataStoreRead: '<S35>/DataStoreRead1'
         *  Logic: '<S63>/OR1'
         *  UnitDelay: '<S63>/UnitDelay'
         */
        rtb_AND_dp = ((EeVDVR_b_V2V_PlugInAuth) &&
                      (!VDVR_ac_DW.UnitDelay_DSTATE_du));

        /* Update for UnitDelay: '<S63>/UnitDelay' incorporates:
         *  DataStoreRead: '<S35>/DataStoreRead1'
         */
        VDVR_ac_DW.UnitDelay_DSTATE_du = EeVDVR_b_V2V_PlugInAuth;

        /* End of Outputs for SubSystem: '<S56>/EdgeRising' */

        /* Logic: '<S56>/OR1' incorporates:
         *  DataStoreRead: '<S35>/DataStoreRead1'
         *  Logic: '<S56>/AND'
         */
        tmp = !EeVDVR_b_V2V_PlugInAuth;

        /* Switch: '<S56>/Switch1' incorporates:
         *  Constant: '<S49>/Calib'
         *  Constant: '<S56>/ConstantValue'
         *  Constant: '<S56>/ConstantValue1'
         *  Logic: '<S56>/OR'
         *  Logic: '<S56>/OR1'
         *  MinMax: '<S56>/Minimum'
         *  Sum: '<S56>/Summation'
         *  UnitDelay: '<S56>/UnitDelay'
         */
        if (tmp || rtb_AND_dp)
        {
            VDVR_ac_DW.UnitDelay_DSTATE_h = 0U;
        }
        else if (KeVDVR_Cnt_V2V_Auth_Dbnc < ((uint16)(((uint32)
                    VDVR_ac_DW.UnitDelay_DSTATE_h) + 1U)))
        {
            /* MinMax: '<S56>/Minimum' incorporates:
             *  Constant: '<S49>/Calib'
             */
            VDVR_ac_DW.UnitDelay_DSTATE_h = KeVDVR_Cnt_V2V_Auth_Dbnc;
        }
        else
        {
            /* MinMax: '<S56>/Minimum' incorporates:
             *  Constant: '<S56>/ConstantValue'
             *  Sum: '<S56>/Summation'
             *  UnitDelay: '<S56>/UnitDelay'
             */
            VDVR_ac_DW.UnitDelay_DSTATE_h = (uint16)(((uint32)
                VDVR_ac_DW.UnitDelay_DSTATE_h) + 1U);
        }

        /* End of Switch: '<S56>/Switch1' */

        /* Outputs for IfAction SubSystem: '<S35>/clear_auth' incorporates:
         *  ActionPort: '<S57>/ActionPort'
         */
        /* Outputs for Atomic SubSystem: '<S35>/TurnOnDelaySample' */
        /* Outputs for Atomic SubSystem: '<S35>/TurnOnDelaySample1' */
        /* If: '<S35>/If' incorporates:
         *  Constant: '<S47>/Calib'
         *  Constant: '<S49>/Calib'
         *  Constant: '<S50>/Calib'
         *  DataStoreWrite: '<S57>/DataStoreWrite1'
         *  Logic: '<S35>/Logical1'
         *  Logic: '<S35>/Logical2'
         *  Logic: '<S35>/Logical3'
         *  Logic: '<S35>/Logical9'
         *  Logic: '<S54>/AND'
         *  Logic: '<S55>/AND'
         *  Logic: '<S56>/AND'
         *  RelationalOperator: '<S54>/GreaterThan'
         *  RelationalOperator: '<S55>/GreaterThan'
         *  RelationalOperator: '<S56>/GreaterThan'
         *  UnitDelay: '<S54>/UnitDelay'
         *  UnitDelay: '<S55>/UnitDelay'
         *  UnitDelay: '<S56>/UnitDelay'
         */
        EeVDVR_b_V2V_PlugInAuth = (((rtb_Merge_9 ||
            (VDVR_ac_DW.UnitDelay_DSTATE_e < KeVDVR_Cnt_ProxOutDbnc)) &&
            (((rtb_OR1_om && (VDVR_ac_DW.UnitDelay_DSTATE_cd >=
                              KeVDVR_Cnt_WUDelay_RTC)) || (tmp ||
            (VDVR_ac_DW.UnitDelay_DSTATE_h < KeVDVR_Cnt_V2V_Auth_Dbnc))) ||
             (!Merge_18_f))) && (EeVDVR_b_V2V_PlugInAuth));

        /* End of Outputs for SubSystem: '<S35>/TurnOnDelaySample1' */
        /* End of Outputs for SubSystem: '<S35>/TurnOnDelaySample' */
        /* End of Outputs for SubSystem: '<S35>/clear_auth' */
        /* End of Outputs for SubSystem: '<S35>/TurnOnDelaySample2' */

        /* Switch: '<S148>/Switch1' incorporates:
         *  Switch: '<S148>/Switch2'
         *  Switch: '<S149>/Switch1'
         *  Switch: '<S149>/Switch2'
         */
        if (VeVDVR_b_V2X_SwBasedControlDet)
        {
            /* Merge: '<S4>/Merge_16' */
            Merge_16 = VDVR_ac_B.Switch1;

            /* Merge: '<S4>/Merge_19' */
            Merge_19_j = VDVR_ac_B.Switch1_l;
        }
        else if (VeVDVR_b_V2X_HwBasedControlDet)
        {
            /* Switch: '<S148>/Switch2' incorporates:
             *  Merge: '<S4>/Merge_16'
             */
            Merge_16 = VDVR_ac_B.Switch1_lj;

            /* Switch: '<S149>/Switch2' incorporates:
             *  Merge: '<S4>/Merge_19'
             */
            Merge_19_j = VDVR_ac_B.Switch1_g;
        }
        else
        {
            /* Merge: '<S4>/Merge_16' incorporates:
             *  Constant: '<S150>/Calib'
             *  Switch: '<S148>/Switch2'
             */
            Merge_16 = KeVDVR_I_ACOutCurrDflt;

            /* Merge: '<S4>/Merge_19' incorporates:
             *  Constant: '<S151>/Calib'
             *  Switch: '<S149>/Switch2'
             */
            Merge_19_j = KeVDVR_U_ACOutVoltDflt;
        }

        /* End of Switch: '<S148>/Switch1' */

        /* Merge: '<S4>/Merge_18' incorporates:
         *  Constant: '<S143>/Constant'
         *  Constant: '<S145>/Constant'
         *  Logic: '<S67>/Logical9'
         *  RelationalOperator: '<S67>/Comparison2'
         *  RelationalOperator: '<S67>/Comparison3'
         */
        Merge_18_f = ((((uint32)VeVDVR_e_Secure_V2X_Conn) ==
                       CeVDVR_e_VtoL_SnglOtlt_Connected) || (((uint32)
                        VeVDVR_e_Secure_V2X_Conn) ==
                       CeVDVR_e_VtoL_DualOtlt_Connected));

        /* If: '<S156>/If' incorporates:
         *  Constant: '<S174>/Constant'
         *  If: '<S156>/If1'
         *  Inport: '<Root>/VeERER_E_WhRemaining_V2V'
         *  Inport: '<Root>/VeIDCR_U_ACOutVoltage1'
         *  RelationalOperator: '<S156>/RelationalOperator3'
         */
        if (((uint32)VeVDVR_e_DisChrgSysSts) != CeVTLR_e_DschrgActv)
        {
            /* Outputs for IfAction SubSystem: '<S156>/V2V_NoInstantPower' incorporates:
             *  ActionPort: '<S177>/ActionPort'
             */
            /* Merge: '<S4>/Merge_12' incorporates:
             *  Constant: '<S177>/ConstantValue'
             *  Merge: '<S156>/Merge'
             *  SignalConversion generated from: '<S177>/InstantPower_DfltVal'
             */
            rtb_TmpSignalConversionAtVeIDCR_I_ACOutC = 0.0F;

            /* End of Outputs for SubSystem: '<S156>/V2V_NoInstantPower' */

            /* Outputs for IfAction SubSystem: '<S156>/V2V_NotActive' incorporates:
             *  ActionPort: '<S178>/ActionPort'
             */
            /* Merge: '<S4>/Merge_13' incorporates:
             *  Constant: '<S178>/ConstantValue'
             *  SignalConversion generated from: '<S178>/Discharge_Day_Remaining'
             */
            Merge_13_b = 0.0F;

            /* Merge: '<S4>/Merge_14' incorporates:
             *  Constant: '<S178>/ConstantValue1'
             *  SignalConversion generated from: '<S178>/Discharge_Hr_Remaining'
             */
            Merge_14_n = 0.0F;

            /* Merge: '<S4>/Merge_15' incorporates:
             *  Constant: '<S178>/ConstantValue2'
             *  SignalConversion generated from: '<S178>/Discharge_Minute_Remaining'
             */
            Merge_15_p = 0.0F;

            /* End of Outputs for SubSystem: '<S156>/V2V_NotActive' */
        }
        else
        {
            (void)Rte_Read_VeIDCR_U_ACOutVoltage1_Value(&Merge_14_n);

            /* Outputs for IfAction SubSystem: '<S156>/V2V_InstantPower' incorporates:
             *  ActionPort: '<S176>/ActionPort'
             */
            /* Product: '<S176>/Divide' incorporates:
             *  Constant: '<S176>/Constant'
             *  Inport: '<Root>/VeIDCR_U_ACOutVoltage1'
             *  Product: '<S176>/Product'
             */
            VeVDVR_P_InstantPower_V2V =
                (rtb_TmpSignalConversionAtVeIDCR_I_ACOutC * Merge_14_n) /
                1000.0F;

            /* Merge: '<S4>/Merge_12' incorporates:
             *  Gain: '<S192>/Gain'
             *  Merge: '<S156>/Merge'
             */
            rtb_TmpSignalConversionAtVeIDCR_I_ACOutC = VeVDVR_P_InstantPower_V2V;

            /* End of Outputs for SubSystem: '<S156>/V2V_InstantPower' */
            (void)Rte_Read_VeERER_E_WhRemaining_V2V_Value(&Merge_13_b);

            /* Outputs for IfAction SubSystem: '<S156>/V2V_Active' incorporates:
             *  ActionPort: '<S175>/ActionPort'
             */
            /* Product: '<S175>/Product' incorporates:
             *  Constant: '<S186>/Calib'
             *  Inport: '<Root>/VeERER_E_WhRemaining_V2V'
             */
            Merge_13_b *= KeVDVR_K_W2Min;

            /* Outputs for Atomic SubSystem: '<S175>/ProtectedDivision' */
            /* Outputs for IfAction SubSystem: '<S156>/V2V_InstantPower' incorporates:
             *  ActionPort: '<S176>/ActionPort'
             */
            /* Switch: '<S188>/Switch1' incorporates:
             *  Constant: '<S188>/Constant Value'
             *  Constant: '<S188>/Constant Value1'
             *  Constant: '<S188>/Constant Value2'
             *  Constant: '<S188>/Constant Value3'
             *  Gain: '<S192>/Gain'
             *  Logic: '<S188>/AND'
             *  RelationalOperator: '<S188>/Greater Than or Equal '
             *  RelationalOperator: '<S188>/Greater Than or Equal 1'
             *  RelationalOperator: '<S188>/Not Equal'
             *  RelationalOperator: '<S188>/Not Equal1'
             *  Switch: '<S188>/Switch2'
             *  Switch: '<S188>/Switch3'
             */
            if ((Merge_13_b != 0.0F) && (VeVDVR_P_InstantPower_V2V != 0.0F))
            {
                /* Switch: '<S188>/Switch1' incorporates:
                 *  Product: '<S188>/Division'
                 */
                Merge_13_b /= VeVDVR_P_InstantPower_V2V;
            }
            else if (Merge_13_b > 0.0F)
            {
                /* Switch: '<S188>/Switch2' incorporates:
                 *  Constant: '<S188>/MAXFLOAT'
                 *  Switch: '<S188>/Switch1'
                 */
                Merge_13_b = 3.402823466E+38F;
            }
            else if (Merge_13_b < 0.0F)
            {
                /* Switch: '<S188>/Switch3' incorporates:
                 *  Constant: '<S188>/MINFLOAT'
                 *  Switch: '<S188>/Switch1'
                 *  Switch: '<S188>/Switch2'
                 */
                Merge_13_b = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S188>/Switch1' incorporates:
                 *  Constant: '<S188>/Constant Value4'
                 *  Switch: '<S188>/Switch2'
                 *  Switch: '<S188>/Switch3'
                 */
                Merge_13_b = 0.0F;
            }

            /* End of Switch: '<S188>/Switch1' */
            /* End of Outputs for SubSystem: '<S156>/V2V_InstantPower' */
            /* End of Outputs for SubSystem: '<S175>/ProtectedDivision' */

            /* Outputs for Atomic SubSystem: '<S175>/DigitalLowpassResetEnabled' */
            /* Switch: '<S179>/Switch1' incorporates:
             *  Constant: '<S187>/Calib'
             *  Product: '<S179>/Multiplication'
             *  Sum: '<S179>/Subtraction'
             *  Sum: '<S179>/Summation'
             *  UnitDelay: '<S179>/Unit Delay'
             */
            VDVR_ac_DW.UnitDelay_DSTATE += (Merge_13_b -
                VDVR_ac_DW.UnitDelay_DSTATE) * KeVDVR_k_Dschrg_FiltCoef;

            /* End of Outputs for SubSystem: '<S175>/DigitalLowpassResetEnabled' */

            /* Product: '<S175>/Divide' incorporates:
             *  Constant: '<S185>/Calib'
             *  UnitDelay: '<S179>/Unit Delay'
             */
            Merge_13_b = VDVR_ac_DW.UnitDelay_DSTATE / KeVDVR_K_Min2Hr;

            /* Rounding: '<S175>/RoundingFunction1' incorporates:
             *  Constant: '<S182>/Calib'
             *  Product: '<S175>/Divide1'
             */
            VeVDVR_t_Discharge_Day_Remaining = floorf(Merge_13_b /
                KeVDVR_K_Hr2Day);

            /* Product: '<S175>/Product1' incorporates:
             *  Constant: '<S180>/Calib'
             *  Product: '<S175>/Product3'
             */
            Merge_6 = VeVDVR_t_Discharge_Day_Remaining * KeVDVR_K_DayRemain;

            /* Sum: '<S175>/Sum1' incorporates:
             *  Product: '<S175>/Product1'
             *  Rounding: '<S175>/RoundingFunction2'
             */
            VeVDVR_t_Discharge_Hr_Remaining = floorf(Merge_13_b) - Merge_6;

            /* Merge: '<S4>/Merge_13' incorporates:
             *  Gain: '<S189>/Gain'
             */
            Merge_13_b = VeVDVR_t_Discharge_Day_Remaining;

            /* Merge: '<S4>/Merge_14' incorporates:
             *  Gain: '<S190>/Gain'
             */
            Merge_14_n = VeVDVR_t_Discharge_Hr_Remaining;

            /* Sum: '<S175>/Sum2' incorporates:
             *  Constant: '<S183>/Calib'
             *  Constant: '<S184>/Calib'
             *  Product: '<S175>/Product2'
             *  Product: '<S175>/Product4'
             *  Rounding: '<S175>/RoundingFunction3'
             *  UnitDelay: '<S179>/Unit Delay'
             */
            VeVDVR_t_Discharge_Minute_Remaining = (floorf
                (VDVR_ac_DW.UnitDelay_DSTATE) - (VeVDVR_t_Discharge_Hr_Remaining
                * KeVDVR_K_HrRemain)) - (Merge_6 * KeVDVR_K_HrRemain);

            /* Merge: '<S4>/Merge_15' incorporates:
             *  Gain: '<S191>/Gain'
             */
            Merge_15_p = VeVDVR_t_Discharge_Minute_Remaining;

            /* End of Outputs for SubSystem: '<S156>/V2V_Active' */
        }

        /* End of If: '<S156>/If' */

        /* Chart: '<S155>/ChrgPortLock_V2V' incorporates:
         *  Inport: '<Root>/VeCITR_b_ChrgPortButton_Sts'
         *  UnitDelay: '<S155>/UnitDelay'
         */
        /* Gateway: VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy/ChrgPortLock_V2V */
        /* During: VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy/ChrgPortLock_V2V */
        if (((uint32)VDVR_ac_DW.is_active_c1_VDVR_ac) == 0U)
        {
            /* Entry: VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy/ChrgPortLock_V2V */
            VDVR_ac_DW.is_active_c1_VDVR_ac = 1U;

            /* Entry Internal: VDVR_MedTED/VDVC/VDVC/Discharging/ChargePortLock_DischgTimeEstimation/ChargePortLock_Strategy/ChrgPortLock_V2V */
            /* Transition: '<S158>:33' */
            VDVR_ac_DW.is_c1_VDVR_ac = VDVR_ac_IN_Init_State;

            /* Entry 'Init_State': '<S158>:48' */
            rtb_ChrgPort_Req = CeOBCR_e_PortNoRequest;
            VDVR_ac_DW.Flag = true;
            VDVR_ac_DW.Flag1 = true;
            VDVR_ac_B.FlagStpDisch = true;
            VDVR_ac_B.VeVDVR_t_StateTimerCP = 0.0F;
        }
        else
        {
            (void)Rte_Read_VeCITR_b_ChrgPortButton_Sts_Value(&Merge_11_p);
            guard1 = false;
            guard2 = false;
            switch (VDVR_ac_DW.is_c1_VDVR_ac)
            {
              case VDVR_ac_IN_Init_State:
                rtb_ChrgPort_Req = CeOBCR_e_PortNoRequest;
                VDVR_ac_B.FlagStpDisch = true;

                /* During 'Init_State': '<S158>:48' */
                if (VDVR_ac_B.VeVDVR_t_StateTimerCP > KeVDVR_t_V2VLockDly)
                {
                    /* Transition: '<S158>:144' */
                    if ((rtb_TmpSignalConversionAtVeHPMR_b_Cntrlr &&
                            (!VDVR_ac_DW.UnitDelay_DSTATE_fr)) &&
                            (!VeVDVR_b_HoodAjar))
                    {
                        /* Transition: '<S158>:148' */
                        VDVR_ac_DW.is_c1_VDVR_ac = VDVR_ac_IN_Lock;

                        /* Entry 'Lock': '<S158>:6' */
                        rtb_ChrgPort_Req = CeOBCR_e_LockInlet;
                        VDVR_ac_B.VeVDVR_t_StateTimerCP = 0.0F;
                    }
                    else
                    {
                        /* Transition: '<S158>:171' */
                        VDVR_ac_DW.is_c1_VDVR_ac = VDVR_ac_IN_UnLock;

                        /* Entry 'UnLock': '<S158>:1' */
                        rtb_ChrgPort_Req = CeOBCR_e_UnlockInlet;
                        VDVR_ac_B.VeVDVR_t_StateTimerCP = 0.0F;
                        VDVR_ac_DW.Flag = true;
                        VDVR_ac_DW.Flag1 = true;
                        VDVR_ac_B.FlagStpDisch = false;
                    }
                }
                else
                {
                    VDVR_ac_B.VeVDVR_t_StateTimerCP += HeVDVR_t_ExecutionRate;
                }
                break;

              case VDVR_ac_IN_Lock:
                rtb_ChrgPort_Req = CeOBCR_e_LockInlet;

                /* During 'Lock': '<S158>:6' */
                rtb_Merge_9 =
                    !VDVR_ac_B.TmpSignalConversionAtVeCITR_b_V2VReqOutp;
                if ((((Merge_11_p && (((uint32)VeVDVR_e_PMM_PowerMode) !=
                                      CePMDR_e_PowerMode_Off)) || rtb_Merge_9) &&
                     (!VDVR_ac_DW.Flag)) || (((VeVDVR_b_DschrgRdy4ShtDwn) ||
                        (VDVR_ac_DW.UnitDelay_DSTATE_fr)) || (VeVDVR_b_HoodAjar)))
                {
                    /* Transition: '<S158>:107' */
                    /* Transition: '<S158>:141' */
                    guard1 = true;
                }
                else if (VeVDVR_b_DrvDrUnlcking)
                {
                    /* Transition: '<S158>:163' */
                    VDVR_ac_DW.Flag = false;
                    guard2 = true;
                }
                else if (Merge_11_p && (((uint32)VeVDVR_e_PMM_PowerMode) !=
                                        CePMDR_e_PowerMode_Off))
                {
                    /* Transition: '<S158>:165' */
                    VDVR_ac_DW.Flag1 = false;
                    guard2 = true;
                }
                else if (((!VDVR_ac_DW.Flag1) || rtb_Merge_9) &&
                         (VeVDVR_b_DrvDrUnlcking))
                {
                    /* Transition: '<S158>:166' */
                    guard1 = true;
                }
                else
                {
                    VDVR_ac_B.VeVDVR_t_StateTimerCP += HeVDVR_t_ExecutionRate;
                }
                break;

              default:
                rtb_ChrgPort_Req = CeOBCR_e_UnlockInlet;
                VDVR_ac_B.FlagStpDisch = false;

                /* During 'UnLock': '<S158>:1' */
                if (((rtb_TmpSignalConversionAtVeHPMR_b_Cntrlr &&
                        (!VeVDVR_b_HoodAjar)) &&
                        (!VDVR_ac_DW.UnitDelay_DSTATE_fr)) &&
                        (VDVR_ac_B.VeVDVR_t_StateTimerCP > KeVDVR_t_V2V_LockDly))
                {
                    /* Transition: '<S158>:127' */
                    VDVR_ac_DW.is_c1_VDVR_ac = VDVR_ac_IN_Lock;

                    /* Entry 'Lock': '<S158>:6' */
                    rtb_ChrgPort_Req = CeOBCR_e_LockInlet;
                    VDVR_ac_B.VeVDVR_t_StateTimerCP = 0.0F;
                }
                else
                {
                    VDVR_ac_B.VeVDVR_t_StateTimerCP += HeVDVR_t_ExecutionRate;
                }
                break;
            }

            if (guard2)
            {
                VDVR_ac_DW.is_c1_VDVR_ac = VDVR_ac_IN_Lock;

                /* Entry 'Lock': '<S158>:6' */
                VDVR_ac_B.VeVDVR_t_StateTimerCP = 0.0F;
            }

            if (guard1)
            {
                VDVR_ac_DW.is_c1_VDVR_ac = VDVR_ac_IN_UnLock;

                /* Entry 'UnLock': '<S158>:1' */
                rtb_ChrgPort_Req = CeOBCR_e_UnlockInlet;
                VDVR_ac_B.VeVDVR_t_StateTimerCP = 0.0F;
                VDVR_ac_DW.Flag = true;
                VDVR_ac_DW.Flag1 = true;
                VDVR_ac_B.FlagStpDisch = false;
            }
        }

        /* End of Chart: '<S155>/ChrgPortLock_V2V' */

        /* Merge: '<S4>/Merge_11' incorporates:
         *  Gain: '<S167>/Gain'
         */
        Merge_11_p = VDVR_ac_B.FlagStpDisch;

        /* Switch: '<S155>/Switch1' incorporates:
         *  Constant: '<S160>/Constant'
         *  Constant: '<S163>/Constant'
         *  Constant: '<S164>/Constant'
         *  Constant: '<S165>/Constant'
         *  Logic: '<S155>/Logical1'
         *  Logic: '<S155>/Logical5'
         *  RelationalOperator: '<S155>/Comparison1'
         *  RelationalOperator: '<S155>/Comparison11'
         *  RelationalOperator: '<S155>/Comparison2'
         *  Switch: '<S155>/Switch'
         *  Switch: '<S155>/Switch2'
         *  UnitDelay: '<S155>/UnitDelay1'
         */
        if (((uint32)rtb_ChrgPort_Req) == CeOBCR_e_PortNoRequest)
        {
            VDVR_ac_DW.UnitDelay1_DSTATE_e = CeOBCR_e_PortNoRequest;
        }
        else if (((uint32)rtb_ChrgPort_Req) == CeOBCR_e_LockInlet)
        {
            /* Switch: '<S155>/Switch' incorporates:
             *  Constant: '<S161>/Constant'
             *  Switch: '<S155>/Switch1'
             *  UnitDelay: '<S155>/UnitDelay1'
             */
            VDVR_ac_DW.UnitDelay1_DSTATE_e = CeOBCR_e_LockInlet;
        }
        else
        {
            if ((((uint32)rtb_ChrgPort_Req) == CeOBCR_e_UnlockInlet) &&
                    (!VeVDVR_b_J1772_S2_Sts))
            {
                /* Switch: '<S155>/Switch2' incorporates:
                 *  Constant: '<S162>/Constant'
                 *  Switch: '<S155>/Switch'
                 *  Switch: '<S155>/Switch1'
                 *  UnitDelay: '<S155>/UnitDelay1'
                 */
                VDVR_ac_DW.UnitDelay1_DSTATE_e = CeOBCR_e_UnlockInlet;
            }
        }

        /* End of Switch: '<S155>/Switch1' */
        /* End of Outputs for SubSystem: '<S4>/VDVC' */
        (void)Rte_Read_VeCITR_b_ChrgPortLockSts_FA_Value(&Merge_4_n);

        /* Outputs for IfAction SubSystem: '<S4>/VDVC' incorporates:
         *  ActionPort: '<S11>/ActionPort'
         */
        /* Outputs for Atomic SubSystem: '<S169>/EdgeFalling' */
        /* UnitDelay: '<S214>/UnitDelay' incorporates:
         *  Inport: '<Root>/VeCITR_b_ChrgPortLockSts_FA'
         *  UnitDelay: '<S170>/UnitDelay'
         */
        rtb_Merge_9 = VDVR_ac_DW.UnitDelay_DSTATE_el;

        /* Update for UnitDelay: '<S170>/UnitDelay' */
        VDVR_ac_DW.UnitDelay_DSTATE_el =
            VDVR_ac_B.TmpSignalConversionAtVeCITR_b_ChrgPortLo;

        /* Logic: '<S169>/Logical5' incorporates:
         *  Constant: '<S171>/Constant'
         *  Constant: '<S172>/Calib'
         *  Logic: '<S169>/Logical1'
         *  Logic: '<S170>/AND'
         *  Logic: '<S170>/OR1'
         *  RelationalOperator: '<S169>/Comparison5'
         *  Switch: '<S155>/Switch1'
         *  UnitDelay: '<S155>/UnitDelay'
         *  UnitDelay: '<S155>/UnitDelay1'
         */
        VDVR_ac_DW.UnitDelay_DSTATE_fr = ((((((uint32)
            VDVR_ac_DW.UnitDelay1_DSTATE_e) == CeOBCR_e_LockInlet) &&
            ((!VDVR_ac_B.TmpSignalConversionAtVeCITR_b_ChrgPortLo) &&
             rtb_Merge_9)) && (!Merge_4_n)) && (KeVDVR_b_ManualRel_Actv));

        /* End of Outputs for SubSystem: '<S169>/EdgeFalling' */

        /* SignalConversion generated from: '<S1>/OBCM_Mode_Req' incorporates:
         *  DataTypeConversion: '<S197>/DataTypeConversion'
         *  Merge: '<S4>/Merge_3'
         *  Outport: '<Root>/VeVDVR_e_DschrgOBCMdRq'
         */
        (void)Rte_Write_VeVDVR_e_DschrgOBCMdRq_Value(VeVDVR_e_OBC_MdRq);

        /* SignalConversion generated from: '<S1>/V2V_Status' incorporates:
         *  DataTypeConversion: '<S198>/DataTypeConversion'
         *  Merge: '<S4>/Merge_10'
         *  Outport: '<Root>/VeVDVR_e_V2V_Status'
         */
        (void)Rte_Write_VeVDVR_e_V2V_Status_Value(VDVR_ac_B.VeVDVR_e_VtoVStatus);

        /* Merge: '<S4>/Merge_4' incorporates:
         *  Gain: '<S205>/Gain'
         */
        Merge_4_n = VeVDVR_b_Dschrg_S2Cmd;

        /* RelationalOperator: '<S154>/NotEqual' incorporates:
         *  Constant: '<S218>/Constant'
         */
        rtb_Merge_9 = (((uint32)VeVDVR_e_DschrgSt) == CeVDVR_e_DschrgEStp);

        /* Outputs for Atomic SubSystem: '<S154>/EdgeRising' */
        /* Logic: '<S213>/OR1' incorporates:
         *  UnitDelay: '<S213>/UnitDelay'
         */
        rtb_OR1_om = !VDVR_ac_DW.UnitDelay_DSTATE_ce;

        /* Update for UnitDelay: '<S213>/UnitDelay' */
        VDVR_ac_DW.UnitDelay_DSTATE_ce = rtb_Merge_9;

        /* End of Outputs for SubSystem: '<S154>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S154>/EdgeRising1' */
        /* Logic: '<S214>/AND' incorporates:
         *  Logic: '<S214>/OR1'
         *  UnitDelay: '<S214>/UnitDelay'
         */
        rtb_AND_dp = !VDVR_ac_DW.UnitDelay_DSTATE_dy;

        /* Update for UnitDelay: '<S214>/UnitDelay' incorporates:
         *  Constant: '<S154>/TRUEConstant'
         */
        VDVR_ac_DW.UnitDelay_DSTATE_dy = true;

        /* End of Outputs for SubSystem: '<S154>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S154>/CounterResetEnabled' */
        /* Switch: '<S212>/Switch1' incorporates:
         *  Logic: '<S154>/Logical1'
         *  Logic: '<S213>/AND'
         *  Switch: '<S212>/Switch2'
         */
        if (rtb_AND_dp || Merge_7)
        {
            /* Switch: '<S212>/Switch1' incorporates:
             *  Constant: '<S212>/ConstantValue2'
             */
            VeVDVR_Cnt_EStopCount = 0U;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S154>/EdgeRising' */
            if (rtb_Merge_9 && rtb_OR1_om)
            {
                /* Switch: '<S212>/Switch1' incorporates:
                 *  Constant: '<S212>/ConstantValue1'
                 *  Sum: '<S212>/Subtraction'
                 *  Switch: '<S212>/Switch2'
                 *  UnitDelay: '<S212>/UnitDelay'
                 */
                VeVDVR_Cnt_EStopCount = (uint16)(((uint32)VeVDVR_Cnt_EStopCount)
                    + 1U);
            }

            /* End of Outputs for SubSystem: '<S154>/EdgeRising' */
        }

        /* End of Switch: '<S212>/Switch1' */
        /* End of Outputs for SubSystem: '<S154>/CounterResetEnabled' */

        /* RelationalOperator: '<S154>/NotEqual1' incorporates:
         *  Constant: '<S219>/Calib'
         *  Selector: '<S154>/Selector'
         */
        VeVDVR_b_GiveUpDschrg = (VeVDVR_Cnt_EStopCount > KaVDVR_K_NbrRetries
            [(VeVDVR_k_NDCR)]);

        /* DataTypeConversion: '<S6>/DataTypeConversion' incorporates:
         *  DataTypeConversion: '<S39>/DataTypeConversion'
         *  Merge: '<S4>/Merge_5'
         *  Outport: '<Root>/VeVDVR_e_DschrgSysSts'
         *  SignalConversion generated from: '<S1>/DisChrgSysSts'
         */
        (void)Rte_Write_VeVDVR_e_DschrgSysSts_Value(VeVDVR_e_DisChrgSysSts);

        /* SignalConversion generated from: '<S1>/ChrgPortReq_V2V' incorporates:
         *  Merge: '<S4>/Merge_8'
         *  Outport: '<Root>/VeVDVR_e_ChrgPortReq_V2V'
         *  SignalConversion generated from: '<S11>/ChrgPortReq_V2V'
         *  Switch: '<S155>/Switch1'
         *  UnitDelay: '<S155>/UnitDelay1'
         */
        (void)Rte_Write_VeVDVR_e_ChrgPortReq_V2V_Value
            (VDVR_ac_DW.UnitDelay1_DSTATE_e);

        /* Merge: '<S4>/Merge_6' incorporates:
         *  Constant: '<S157>/Calib'
         *  SignalConversion generated from: '<S11>/DschgCurrLim'
         */
        Merge_6 = KeVDVR_I_DschgCurrLim;

        /* Merge: '<S4>/Merge_7' incorporates:
         *  Gain: '<S207>/Gain'
         *  SignalConversion generated from: '<S11>/DschrgRdy4ShtDwn'
         */
        Merge_7 = VeVDVR_b_DschrgRdy4ShtDwn;

        /* Merge: '<S4>/Merge_9' incorporates:
         *  Gain: '<S40>/Gain'
         *  Gain: '<S53>/Gain'
         *  Logic: '<S35>/Logical5'
         */
        rtb_Merge_9 = (rtb_Merge_2 || rtb_AND_iq);

        /* Merge: '<S4>/Merge_2' incorporates:
         *  Gain: '<S41>/Gain'
         */
        rtb_Merge_2 = VeVDVR_b_Enable_Discharge;

        /* Update for UnitDelay: '<S154>/UnitDelay' incorporates:
         *  Switch: '<S5>/Switch1'
         */
        VDVR_ac_DW.UnitDelay_DSTATE_om = VeVDVR_e_PMM_PowerMode;

        /* Update for UnitDelay: '<S153>/Unit Delay1' */
        VDVR_ac_DW.UnitDelay1_DSTATE = rtb_TmpSignalConversionAtVePLTR_t_RTC_Cu;

        /* End of Outputs for SubSystem: '<S4>/VDVC' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S4>/Subsystem' incorporates:
         *  ActionPort: '<S10>/ActionPort'
         */
        /* Merge: '<S4>/Merge_6' incorporates:
         *  Constant: '<S10>/ConstantValue2'
         *  Gain: '<S30>/Gain'
         */
        Merge_6 = 0.0F;

        /* SignalConversion generated from: '<S1>/OBCM_Mode_Req' incorporates:
         *  Constant: '<S17>/Constant'
         *  DataTypeConversion: '<S13>/DataTypeConversion'
         *  Merge: '<S4>/Merge_3'
         *  Outport: '<Root>/VeVDVR_e_DschrgOBCMdRq'
         */
        (void)Rte_Write_VeVDVR_e_DschrgOBCMdRq_Value(CeOBCR_e_Idle_OBCMdRq);

        /* Merge: '<S4>/Merge_4' incorporates:
         *  Constant: '<S10>/ConstantValue1'
         *  Gain: '<S29>/Gain'
         */
        Merge_4_n = false;

        /* DataTypeConversion: '<S6>/DataTypeConversion' incorporates:
         *  Constant: '<S19>/Constant'
         *  DataTypeConversion: '<S14>/DataTypeConversion'
         *  Merge: '<S4>/Merge_5'
         *  Outport: '<Root>/VeVDVR_e_DschrgSysSts'
         *  SignalConversion generated from: '<S1>/DisChrgSysSts'
         */
        (void)Rte_Write_VeVDVR_e_DschrgSysSts_Value(CeVTLR_e_DschrgInactv);

        /* Merge: '<S4>/Merge_7' incorporates:
         *  Constant: '<S10>/ConstantValue3'
         *  Gain: '<S31>/Gain'
         */
        Merge_7 = false;

        /* SignalConversion generated from: '<S1>/ChrgPortReq_V2V' incorporates:
         *  Constant: '<S16>/Constant'
         *  DataTypeConversion: '<S12>/DataTypeConversion'
         *  Merge: '<S4>/Merge_8'
         *  Outport: '<Root>/VeVDVR_e_ChrgPortReq_V2V'
         */
        (void)Rte_Write_VeVDVR_e_ChrgPortReq_V2V_Value(CeOBCR_e_UnlockInlet);

        /* Merge: '<S4>/Merge_2' incorporates:
         *  Constant: '<S10>/ConstantValue5'
         *  Gain: '<S32>/Gain'
         */
        rtb_Merge_2 = false;

        /* SignalConversion generated from: '<S1>/V2V_Status' incorporates:
         *  Constant: '<S18>/Constant'
         *  DataTypeConversion: '<S15>/DataTypeConversion'
         *  Merge: '<S4>/Merge_10'
         *  Outport: '<Root>/VeVDVR_e_V2V_Status'
         */
        (void)Rte_Write_VeVDVR_e_V2V_Status_Value(CeVDVR_e_Inctv);

        /* Merge: '<S4>/Merge_1' incorporates:
         *  Constant: '<S10>/ConstantValue6'
         *  Gain: '<S20>/Gain'
         */
        rtb_TmpSignalConversionAtVeHPMR_b_Cntrlr = false;

        /* Merge: '<S4>/Merge_9' incorporates:
         *  Constant: '<S10>/ConstantValue7'
         *  Gain: '<S28>/Gain'
         */
        rtb_Merge_9 = false;

        /* Merge: '<S4>/Merge_11' incorporates:
         *  Constant: '<S10>/ConstantValue4'
         *  Gain: '<S27>/Gain'
         */
        Merge_11_p = false;

        /* Merge: '<S4>/Merge_12' incorporates:
         *  Constant: '<S10>/ConstantValue10'
         *  Gain: '<S22>/Gain'
         */
        rtb_TmpSignalConversionAtVeIDCR_I_ACOutC = 0.0F;

        /* Merge: '<S4>/Merge_13' incorporates:
         *  Constant: '<S10>/ConstantValue'
         *  Gain: '<S33>/Gain'
         */
        Merge_13_b = 0.0F;

        /* Merge: '<S4>/Merge_14' incorporates:
         *  Constant: '<S10>/ConstantValue8'
         *  Gain: '<S34>/Gain'
         */
        Merge_14_n = 0.0F;

        /* Merge: '<S4>/Merge_15' incorporates:
         *  Constant: '<S10>/ConstantValue9'
         *  Gain: '<S21>/Gain'
         */
        Merge_15_p = 0.0F;

        /* Merge: '<S4>/Merge_17' incorporates:
         *  Constant: '<S10>/ConstantValue11'
         *  Gain: '<S23>/Gain'
         */
        rtb_AND_iq = false;

        /* Merge: '<S4>/Merge_18' incorporates:
         *  Constant: '<S10>/ConstantValue12'
         *  Gain: '<S24>/Gain'
         */
        Merge_18_f = false;

        /* Merge: '<S4>/Merge_16' incorporates:
         *  Constant: '<S10>/ConstantValue13'
         *  Gain: '<S25>/Gain'
         */
        Merge_16 = 0.0F;

        /* Merge: '<S4>/Merge_19' incorporates:
         *  Constant: '<S10>/ConstantValue14'
         *  Gain: '<S26>/Gain'
         */
        Merge_19_j = 0.0F;

        /* End of Outputs for SubSystem: '<S4>/Subsystem' */
    }

    /* End of If: '<S4>/If' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeVDVR_I_DschrgCrntLmt' incorporates:
     *  SignalConversion generated from: '<S1>/DschgCurrLim'
     */
    (void)Rte_Write_VeVDVR_I_DschrgCrntLmt_Value(Merge_6);

    /* Outport: '<Root>/VeVDVR_b_Rdy4ShtDwn' incorporates:
     *  SignalConversion generated from: '<S1>/DschrgRdy4ShtDwn'
     */
    (void)Rte_Write_VeVDVR_b_Rdy4ShtDwn_Value(Merge_7);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VDVC'
     */
    /* Outport: '<Root>/VeVDVR_b_EnableDischarge' incorporates:
     *  Gain: '<S9>/Gain'
     *  SignalConversion generated from: '<S1>/Enable_Discharge'
     */
    (void)Rte_Write_VeVDVR_b_EnableDischarge_Value(rtb_Merge_2);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeVDVR_I_MaxAlwdACOutCurr' incorporates:
     *  SignalConversion generated from: '<S1>/MaxAlwdACOutCurr'
     */
    (void)Rte_Write_VeVDVR_I_MaxAlwdACOutCurr_Value(Merge_16);

    /* Outport: '<Root>/VeVDVR_U_MaxAlwdACOutVolt' incorporates:
     *  SignalConversion generated from: '<S1>/MaxAlwdACOutVolt'
     */
    (void)Rte_Write_VeVDVR_U_MaxAlwdACOutVolt_Value(Merge_19_j);

    /* Outport: '<Root>/VeVDVR_b_V2VChrgPortReq' incorporates:
     *  SignalConversion generated from: '<S1>/PortReq_V2V'
     */
    (void)Rte_Write_VeVDVR_b_V2VChrgPortReq_Value(Merge_11_p);

    /* Outport: '<Root>/VeVDVR_b_DschrgS2Cmd' incorporates:
     *  SignalConversion generated from: '<S1>/S2_Cmd'
     */
    (void)Rte_Write_VeVDVR_b_DschrgS2Cmd_Value(Merge_4_n);

    /* Outport: '<Root>/VeVDVR_b_Secure_V2LConnected' incorporates:
     *  SignalConversion generated from: '<S1>/Secure_V2LConnected'
     */
    (void)Rte_Write_VeVDVR_b_Secure_V2LConnected_Value(Merge_18_f);

    /* Outport: '<Root>/VeVDVR_b_Secure_V2VConnected' incorporates:
     *  SignalConversion generated from: '<S1>/Secure_V2VConnected'
     */
    (void)Rte_Write_VeVDVR_b_Secure_V2VConnected_Value(rtb_AND_iq);

    /* Outport: '<Root>/VeVDVR_b_V2V_Detected' incorporates:
     *  SignalConversion generated from: '<S1>/V2V_Detected'
     */
    (void)Rte_Write_VeVDVR_b_V2V_Detected_Value
        (rtb_TmpSignalConversionAtVeHPMR_b_Cntrlr);

    /* Outport: '<Root>/VeVDVR_t_V2V_TotalPwrTimeDay' incorporates:
     *  SignalConversion generated from: '<S1>/V2V_Discharge_Days'
     */
    (void)Rte_Write_VeVDVR_t_V2V_TotalPwrTimeDay_Value(Merge_13_b);

    /* Outport: '<Root>/VeVDVR_t_V2V_TotalPwrTimeHs' incorporates:
     *  SignalConversion generated from: '<S1>/V2V_Discharge_Hours'
     */
    (void)Rte_Write_VeVDVR_t_V2V_TotalPwrTimeHs_Value(Merge_14_n);

    /* Outport: '<Root>/VeVDVR_t_V2V_TotalPwrTimeMin' incorporates:
     *  SignalConversion generated from: '<S1>/V2V_Discharge_Minutes'
     */
    (void)Rte_Write_VeVDVR_t_V2V_TotalPwrTimeMin_Value(Merge_15_p);

    /* Outport: '<Root>/VeVDVR_P_V2V_InstPwrDraw' incorporates:
     *  SignalConversion generated from: '<S1>/V2V_InstantPower'
     */
    (void)Rte_Write_VeVDVR_P_V2V_InstPwrDraw_Value
        (rtb_TmpSignalConversionAtVeIDCR_I_ACOutC);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VDVC'
     */
    /* Outport: '<Root>/VeVDVR_b_V2VPlugIn_Auth' incorporates:
     *  Gain: '<S8>/Gain'
     *  SignalConversion generated from: '<S1>/V2V_PlugIn_Auth'
     */
    (void)Rte_Write_VeVDVR_b_V2VPlugIn_Auth_Value(rtb_Merge_9);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/VDVR_MedTED' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_VDVR_1

FUNC(void, VDVR_CODE) VDVR_PwrOff(void)
{

#if Rte_SysCon_Variant_VDVR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
    /* Outputs for Function Call SubSystem: '<Root>/VDVR_PwrOff' */
    /* Outport: '<Root>/EeVDVR_b_V2V_PlugInAuth_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeVTLR_b_V2L_PlugInAuth'
     */
    (void)Rte_Write_EeVDVR_b_V2V_PlugInAuth_EeVDVR_b_V2V_PlugInAuth
        (EeVDVR_b_V2V_PlugInAuth);

    /* End of Outputs for SubSystem: '<Root>/VDVR_PwrOff' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
#endif

}

#endif

/* Output function */
FUNC(void, VDVR_CODE) VDVR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/VDVR_PwrOn'
     */
    /* Outputs for Atomic SubSystem: '<S3>/VariantSubsystem' */
#if Rte_SysCon_Variant_VDVR_1

    /* Outputs for Atomic SubSystem: '<S255>/VDVO_FUNC' */
    /* Outputs for Atomic SubSystem: '<S256>/DSM_Init' */
    /* DataStoreWrite: '<S258>/EeVTLR_b_V2L_PlugInAuth' incorporates:
     *  Inport: '<Root>/EeVDVR_b_V2V_PlugInAuth_PM_In'
     */
    (void)Rte_Read_EeVDVR_b_V2V_PlugInAuth_Rx_EeVDVR_b_V2V_PlugInAuth
        ((&(EeVDVR_b_V2V_PlugInAuth)));

    /* End of Outputs for SubSystem: '<S256>/DSM_Init' */

    /* Outport: '<Root>/VeVDVR_b_V2VPlugIn_Auth' incorporates:
     *  Constant: '<S256>/ConstantValue'
     */
    (void)Rte_Write_VeVDVR_b_V2VPlugIn_Auth_Value(false);

    /* Outport: '<Root>/VeVDVR_I_DschrgCrntLmt' incorporates:
     *  Constant: '<S256>/ConstantValue2'
     */
    (void)Rte_Write_VeVDVR_I_DschrgCrntLmt_Value(0.0F);

    /* Outport: '<Root>/VeVDVR_e_DschrgOBCMdRq' incorporates:
     *  Constant: '<S260>/Constant'
     */
    (void)Rte_Write_VeVDVR_e_DschrgOBCMdRq_Value(CeOBCR_e_Idle_OBCMdRq);

    /* Outport: '<Root>/VeVDVR_b_DschrgS2Cmd' incorporates:
     *  Constant: '<S256>/ConstantValue1'
     */
    (void)Rte_Write_VeVDVR_b_DschrgS2Cmd_Value(false);

    /* Outport: '<Root>/VeVDVR_e_DschrgSysSts' incorporates:
     *  Constant: '<S261>/Constant'
     */
    (void)Rte_Write_VeVDVR_e_DschrgSysSts_Value(CeVTLR_e_DschrgInactv);

    /* Outport: '<Root>/VeVDVR_b_Rdy4ShtDwn' incorporates:
     *  Constant: '<S256>/ConstantValue3'
     */
    (void)Rte_Write_VeVDVR_b_Rdy4ShtDwn_Value(false);

    /* Outport: '<Root>/VeVDVR_e_ChrgPortReq_V2V' incorporates:
     *  Constant: '<S259>/Constant'
     */
    (void)Rte_Write_VeVDVR_e_ChrgPortReq_V2V_Value(CeOBCR_e_UnlockInlet);

    /* Outport: '<Root>/VeVDVR_b_EnableDischarge' incorporates:
     *  Constant: '<S256>/ConstantValue5'
     */
    (void)Rte_Write_VeVDVR_b_EnableDischarge_Value(false);

    /* Outport: '<Root>/VeVDVR_b_V2V_Detected' incorporates:
     *  Constant: '<S256>/ConstantValue6'
     */
    (void)Rte_Write_VeVDVR_b_V2V_Detected_Value(false);

    /* Outport: '<Root>/VeVDVR_e_V2V_Status' incorporates:
     *  Constant: '<S262>/Constant'
     */
    (void)Rte_Write_VeVDVR_e_V2V_Status_Value(CeVDVR_e_Inctv);

    /* Outport: '<Root>/VeVDVR_b_V2VChrgPortReq' incorporates:
     *  Constant: '<S256>/ConstantValue4'
     */
    (void)Rte_Write_VeVDVR_b_V2VChrgPortReq_Value(false);

    /* Outport: '<Root>/VeVDVR_P_V2V_InstPwrDraw' incorporates:
     *  Constant: '<S256>/ConstantValue7'
     */
    (void)Rte_Write_VeVDVR_P_V2V_InstPwrDraw_Value(0.0F);

    /* Outport: '<Root>/VeVDVR_t_V2V_TotalPwrTimeDay' incorporates:
     *  Constant: '<S256>/ConstantValue8'
     */
    (void)Rte_Write_VeVDVR_t_V2V_TotalPwrTimeDay_Value(0.0F);

    /* Outport: '<Root>/VeVDVR_t_V2V_TotalPwrTimeHs' incorporates:
     *  Constant: '<S256>/ConstantValue9'
     */
    (void)Rte_Write_VeVDVR_t_V2V_TotalPwrTimeHs_Value(0.0F);

    /* Outport: '<Root>/VeVDVR_t_V2V_TotalPwrTimeMin' incorporates:
     *  Constant: '<S256>/ConstantValue10'
     */
    (void)Rte_Write_VeVDVR_t_V2V_TotalPwrTimeMin_Value(0.0F);

    /* Outport: '<Root>/VeVDVR_b_Secure_V2VConnected' incorporates:
     *  Constant: '<S256>/ConstantValue11'
     */
    (void)Rte_Write_VeVDVR_b_Secure_V2VConnected_Value(false);

    /* Outport: '<Root>/VeVDVR_b_Secure_V2LConnected' incorporates:
     *  Constant: '<S256>/ConstantValue12'
     */
    (void)Rte_Write_VeVDVR_b_Secure_V2LConnected_Value(false);

    /* Outport: '<Root>/VeVDVR_I_MaxAlwdACOutCurr' incorporates:
     *  Constant: '<S256>/ConstantValue13'
     */
    (void)Rte_Write_VeVDVR_I_MaxAlwdACOutCurr_Value(0.0F);

    /* Outport: '<Root>/VeVDVR_U_MaxAlwdACOutVolt' incorporates:
     *  Constant: '<S256>/ConstantValue14'
     */
    (void)Rte_Write_VeVDVR_U_MaxAlwdACOutVolt_Value(0.0F);

    /* End of Outputs for SubSystem: '<S255>/VDVO_FUNC' */
#else

    /* Outputs for Atomic SubSystem: '<S255>/VDVO_NF' */
    /* Outport: '<Root>/VeVDVR_b_V2VPlugIn_Auth' incorporates:
     *  Constant: '<S257>/Constant Value'
     *  Gain: '<S272>/Gain'
     */
    (void)Rte_Write_VeVDVR_b_V2VPlugIn_Auth_Value(false);

    /* Outport: '<Root>/VeVDVR_I_DschrgCrntLmt' incorporates:
     *  Constant: '<S257>/Constant Value2'
     *  Gain: '<S280>/Gain'
     */
    (void)Rte_Write_VeVDVR_I_DschrgCrntLmt_Value(0.0F);

    /* Outport: '<Root>/VeVDVR_e_DschrgOBCMdRq' incorporates:
     *  Constant: '<S268>/Constant'
     *  DataTypeConversion: '<S263>/DataTypeConversion'
     */
    (void)Rte_Write_VeVDVR_e_DschrgOBCMdRq_Value(CeOBCR_e_Idle_OBCMdRq);

    /* Outport: '<Root>/VeVDVR_b_DschrgS2Cmd' incorporates:
     *  Constant: '<S257>/Constant Value1'
     *  Gain: '<S279>/Gain'
     */
    (void)Rte_Write_VeVDVR_b_DschrgS2Cmd_Value(false);

    /* Outport: '<Root>/VeVDVR_e_DschrgSysSts' incorporates:
     *  Constant: '<S269>/Constant'
     *  DataTypeConversion: '<S264>/DataTypeConversion'
     */
    (void)Rte_Write_VeVDVR_e_DschrgSysSts_Value(CeVTLR_e_DschrgInactv);

    /* Outport: '<Root>/VeVDVR_b_Rdy4ShtDwn' incorporates:
     *  Constant: '<S257>/Constant Value3'
     *  Gain: '<S281>/Gain'
     */
    (void)Rte_Write_VeVDVR_b_Rdy4ShtDwn_Value(false);

    /* Outport: '<Root>/VeVDVR_e_ChrgPortReq_V2V' incorporates:
     *  Constant: '<S267>/Constant'
     *  DataTypeConversion: '<S266>/DataTypeConversion'
     */
    (void)Rte_Write_VeVDVR_e_ChrgPortReq_V2V_Value(CeOBCR_e_UnlockInlet);

    /* Outport: '<Root>/VeVDVR_b_EnableDischarge' incorporates:
     *  Constant: '<S257>/Constant Value5'
     *  Gain: '<S271>/Gain'
     */
    (void)Rte_Write_VeVDVR_b_EnableDischarge_Value(false);

    /* Outport: '<Root>/VeVDVR_b_V2V_Detected' incorporates:
     *  Constant: '<S257>/Constant Value6'
     *  Gain: '<S283>/Gain'
     */
    (void)Rte_Write_VeVDVR_b_V2V_Detected_Value(false);

    /* Outport: '<Root>/VeVDVR_e_V2V_Status' incorporates:
     *  Constant: '<S270>/Constant'
     *  DataTypeConversion: '<S265>/DataTypeConversion'
     */
    (void)Rte_Write_VeVDVR_e_V2V_Status_Value(CeVDVR_e_Inctv);

    /* Outport: '<Root>/VeVDVR_b_V2VChrgPortReq' incorporates:
     *  Constant: '<S257>/Constant Value4'
     *  Gain: '<S282>/Gain'
     */
    (void)Rte_Write_VeVDVR_b_V2VChrgPortReq_Value(false);

    /* Outport: '<Root>/VeVDVR_P_V2V_InstPwrDraw' incorporates:
     *  Constant: '<S257>/Constant Value10'
     *  Gain: '<S274>/Gain'
     */
    (void)Rte_Write_VeVDVR_P_V2V_InstPwrDraw_Value(0.0F);

    /* Outport: '<Root>/VeVDVR_t_V2V_TotalPwrTimeDay' incorporates:
     *  Constant: '<S257>/Constant Value7'
     *  Gain: '<S284>/Gain'
     */
    (void)Rte_Write_VeVDVR_t_V2V_TotalPwrTimeDay_Value(0.0F);

    /* Outport: '<Root>/VeVDVR_t_V2V_TotalPwrTimeHs' incorporates:
     *  Constant: '<S257>/Constant Value8'
     *  Gain: '<S285>/Gain'
     */
    (void)Rte_Write_VeVDVR_t_V2V_TotalPwrTimeHs_Value(0.0F);

    /* Outport: '<Root>/VeVDVR_t_V2V_TotalPwrTimeMin' incorporates:
     *  Constant: '<S257>/Constant Value9'
     *  Gain: '<S273>/Gain'
     */
    (void)Rte_Write_VeVDVR_t_V2V_TotalPwrTimeMin_Value(0.0F);

    /* Outport: '<Root>/VeVDVR_b_Secure_V2VConnected' incorporates:
     *  Constant: '<S257>/Constant Value11'
     *  Gain: '<S275>/Gain'
     */
    (void)Rte_Write_VeVDVR_b_Secure_V2VConnected_Value(false);

    /* Outport: '<Root>/VeVDVR_b_Secure_V2LConnected' incorporates:
     *  Constant: '<S257>/Constant Value12'
     *  Gain: '<S276>/Gain'
     */
    (void)Rte_Write_VeVDVR_b_Secure_V2LConnected_Value(false);

    /* Outport: '<Root>/VeVDVR_I_MaxAlwdACOutCurr' incorporates:
     *  Constant: '<S257>/Constant Value13'
     *  Gain: '<S277>/Gain'
     */
    (void)Rte_Write_VeVDVR_I_MaxAlwdACOutCurr_Value(0.0F);

    /* Outport: '<Root>/VeVDVR_U_MaxAlwdACOutVolt' incorporates:
     *  Constant: '<S257>/Constant Value14'
     *  Gain: '<S278>/Gain'
     */
    (void)Rte_Write_VeVDVR_U_MaxAlwdACOutVolt_Value(0.0F);

    /* End of Outputs for SubSystem: '<S255>/VDVO_NF' */
#endif

    /* End of Outputs for SubSystem: '<S3>/VariantSubsystem' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, VDVR_CODE) VDVR_ac_Init(void)
{
    /* SystemInitialize for Outport: '<Root>/VeVDVR_e_DschrgOBCMdRq' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    (void)Rte_Write_VeVDVR_e_DschrgOBCMdRq_Value(CeOBCR_e_Idle_OBCMdRq);

    /* SystemInitialize for Outport: '<Root>/VeVDVR_e_DschrgSysSts' incorporates:
     *  Merge: '<Root>/Merge_5'
     */
    (void)Rte_Write_VeVDVR_e_DschrgSysSts_Value(CeVTLR_e_DschrgInactv);

    /* SystemInitialize for Outport: '<Root>/VeVDVR_e_ChrgPortReq_V2V' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    (void)Rte_Write_VeVDVR_e_ChrgPortReq_V2V_Value(CeOBCR_e_PortNoRequest);

    /* SystemInitialize for Outport: '<Root>/VeVDVR_e_V2V_Status' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    (void)Rte_Write_VeVDVR_e_V2V_Status_Value(CeVDVR_e_Inctv);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
