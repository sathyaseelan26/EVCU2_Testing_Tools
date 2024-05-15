/*
 * File: VTLR_ac.c
 *
 * Code generated for Simulink model 'VTLR_ac'.
 *
 * Model version                  : 9.374
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 20:07:24 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "VTLR_ac.h"

/* Named constants for Chart: '<S24>/PP1Detection' */
#if Rte_SysCon_Variant_VTLR_1
#define VTLR_ac_IN_OFF                 ((uint8)1U)
#endif

#if Rte_SysCon_Variant_VTLR_1
#define VTLR_ac_IN_ON                  ((uint8)2U)
#endif

/* Named constants for Chart: '<S136>/Discharging_SF1' */
#if Rte_SysCon_Variant_VTLR_1
#define VTLR_ac_IN_BPCM_Ready          ((uint8)1U)
#endif

#if Rte_SysCon_Variant_VTLR_1
#define VTLR_ac_IN_Discharging         ((uint8)2U)
#endif

#if Rte_SysCon_Variant_VTLR_1
#define VTLR_ac_IN_Discharging_Mode_Req ((uint8)3U)
#endif

#if Rte_SysCon_Variant_VTLR_1
#define VTLR_ac_IN_Discharging_S2_Close ((uint8)4U)
#endif

#if Rte_SysCon_Variant_VTLR_1
#define VTLR_ac_IN_E_Stop              ((uint8)5U)
#endif

#if Rte_SysCon_Variant_VTLR_1
#define VTLR_ac_IN_Initial_State       ((uint8)6U)
#endif

#if Rte_SysCon_Variant_VTLR_1
#define VTLR_ac_IN_Shut_Down           ((uint8)7U)
#endif

/* Named constants for Chart: '<S275>/Discharging_SF_OB_IDCM' */
#if Rte_SysCon_Variant_VTLR_1
#define VTLR__IN_Discharging_Mode_Req_d ((uint8)4U)
#endif

#if Rte_SysCon_Variant_VTLR_1
#define VTLR_ac_IN_AC_Switch_Close     ((uint8)1U)
#endif

#if Rte_SysCon_Variant_VTLR_1
#define VTLR_ac_IN_AC_Switch_Open      ((uint8)2U)
#endif

#if Rte_SysCon_Variant_VTLR_1
#define VTLR_ac_IN_Discharging_h       ((uint8)3U)
#endif

#if Rte_SysCon_Variant_VTLR_1
#define VTLR_ac_IN_PowerUp_State       ((uint8)7U)
#endif

#if Rte_SysCon_Variant_VTLR_1
#define VTLR_ac_IN_Shut_Down_d         ((uint8)8U)
#endif

/* Named constants for Chart: '<S330>/Discharging_SF_OB_PPIM' */
#if Rte_SysCon_Variant_VTLR_1
#define VTLR__IN_Discharging_Mode_Req_e ((uint8)2U)
#endif

#if Rte_SysCon_Variant_VTLR_1
#define VTLR_ac_IN_Discharging_hi      ((uint8)1U)
#endif

#if Rte_SysCon_Variant_VTLR_1
#define VTLR_ac_IN_E_Stop_c            ((uint8)3U)
#endif

#if Rte_SysCon_Variant_VTLR_1
#define VTLR_ac_IN_Initial_State_m     ((uint8)4U)
#endif

#if Rte_SysCon_Variant_VTLR_1
#define VTLR_ac_IN_Shut_Down_e         ((uint8)5U)
#endif

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_VTLR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) HeVTLR_t_dT = 0.02F;/* Referenced by:
                                                                   * '<S136>/Discharging_SF1'
                                                                   * '<S275>/Discharging_SF_OB_IDCM'
                                                                   * '<S330>/Discharging_SF_OB_PPIM'
                                                                   * '<S179>/Calib'
                                                                   * '<S226>/Calib'
                                                                   * '<S227>/Calib'
                                                                   */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint16, VTLR_VAR_INIT) KaVTLR_K_NbrRetries[6] =
{
    5U, 5U, 5U, 5U, 5U, 5U
} ;                                    /* Referenced by: '<S171>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint16, VTLR_VAR_INIT) KaVTLR_K_NbrRetries_IDCM[7] =
{
    5U, 5U, 5U, 5U, 5U, 2U, 5U
} ;                                    /* Referenced by: '<S329>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint16, VTLR_VAR_INIT) KaVTLR_K_NbrRetries_PPIM[5] =
{
    5U, 5U, 5U, 5U, 5U
} ;                                    /* Referenced by: '<S397>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint16, VTLR_VAR_INIT) KeVTLR_Cnt_ACOutputVolt_Dbnc = 4U;/* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint16, VTLR_VAR_INIT) KeVTLR_Cnt_AC_Sw_RetryLim = 2U;
                            /* Referenced by: '<S275>/Discharging_SF_OB_IDCM' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint16, VTLR_VAR_INIT) KeVTLR_Cnt_Dbnc_DoorLockSts = 4U;/* Referenced by: '<S144>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint16, VTLR_VAR_INIT) KeVTLR_Cnt_FrunkPP_L1CurLimDbnc =
    4U;                                /* Referenced by: '<S251>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint16, VTLR_VAR_INIT) KeVTLR_Cnt_FrunkPP_L2CurLimDbnc =
    4U;                                /* Referenced by: '<S252>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint16, VTLR_VAR_INIT) KeVTLR_Cnt_LongPress = 250U;/* Referenced by:
                                                                      * '<S58>/Calib'
                                                                      * '<S83>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint16, VTLR_VAR_INIT) KeVTLR_Cnt_ProxOutDbnc = 4U;/* Referenced by: '<S31>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint16, VTLR_VAR_INIT) KeVTLR_Cnt_PwrLtCond_Dbnc = 10U;/* Referenced by:
                                                                      * '<S187>/Calib'
                                                                      * '<S239>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint16, VTLR_VAR_INIT) KeVTLR_Cnt_RTC_StrtUpdt_Dly = 2U;/* Referenced by: '<S152>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint16, VTLR_VAR_INIT) KeVTLR_Cnt_SampleDelayRTC = 1U;/* Referenced by:
                                                                      * '<S32>/Calib'
                                                                      * '<S59>/Calib'
                                                                      * '<S84>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint16, VTLR_VAR_INIT) KeVTLR_Cnt_StartUpdateRTC = 200U;/* Referenced by: '<S153>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint16, VTLR_VAR_INIT) KeVTLR_Cnt_TrunkPP_L1CurLimDbnc =
    4U;                                /* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint16, VTLR_VAR_INIT) KeVTLR_Cnt_TrunkPP_L2CurLimDbnc =
    4U;                                /* Referenced by: '<S254>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint16, VTLR_VAR_INIT) KeVTLR_Cnt_V2L_Auth_Dbnc = 4U;/* Referenced by: '<S33>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint16, VTLR_VAR_INIT) KeVTLR_Cnt_V2L_IDCM_Auth_Dbnc = 4U;/* Referenced by:
                                                                      * '<S60>/Calib'
                                                                      * '<S85>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint16, VTLR_VAR_INIT) KeVTLR_Cnt_WUDelay_RTC = 4U;/* Referenced by:
                                                                      * '<S34>/Calib'
                                                                      * '<S61>/Calib'
                                                                      * '<S86>/Calib'
                                                                      * '<S295>/Calib'
                                                                      * '<S350>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_I_BattSideCurr_Val = 0.0F;/* Referenced by: '<S504>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_I_CurrLimIDCM = 15.0F;/* Referenced by:
                                                                      * '<S260>/Calib'
                                                                      * '<S261>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_I_CurrLimPPIM = 20.0F;/* Referenced by:
                                                                      * '<S265>/Calib'
                                                                      * '<S266>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_I_CurrentLimIDCM240 = 30.0F;/* Referenced by: '<S262>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_I_CurrentLimPPIM240 = 15.0F;/* Referenced by: '<S267>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_I_DschgCurrLim = 25.0F;/* Referenced by: '<S138>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_I_MaxACCurrAlwdIDCM = 15.0F;/* Referenced by: '<S9>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_I_NoLoadCurrLimIDCM = 0.3F;/* Referenced by: '<S263>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_I_NoLoadCurrLimPPIM = 0.3F;/* Referenced by: '<S268>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_K_DayRemain = 24.0F;/* Referenced by:
                                                                      * '<S121>/Calib'
                                                                      * '<S122>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_K_Hr2Day = 24.0F;/* Referenced by: '<S123>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_K_HrRemain = 60.0F;/* Referenced by:
                                                                      * '<S124>/Calib'
                                                                      * '<S125>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_K_Min2Hr = 60.0F;/* Referenced by:
                                                                      * '<S126>/Calib'
                                                                      * '<S127>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_P_BattLTMaxLim_Val = 0.0F;/* Referenced by: '<S505>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_P_DschrgPwrOffset = 0.5F;/* Referenced by:
                                                                      * '<S188>/Calib'
                                                                      * '<S240>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_P_HVAccPwr_Val = 0.0F;/* Referenced by: '<S506>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_P_MinPwrLoadConn = 10.0F;/* Referenced by: '<S180>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_P_MinPwrNoLoadIDCM = 0.01F;/* Referenced by: '<S228>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_P_MinPwrNoLoadPPIM = 0.01F;/* Referenced by: '<S229>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_Pct_HVBatSOC_Val = 0.0F;/* Referenced by: '<S507>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_Pct_PwrLt2RstDschrg_LSP =
    7.8F;                              /* Referenced by: '<S172>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_Pct_PwrLt2RstDschrg_RSP =
    8.0F;                              /* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_Pct_SOC2RstDschrg_LSP =
    13.8F;                             /* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_Pct_SOC2RstDschrg_RSP =
    14.1F;                             /* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_Pct_StpDschrgSOCElcMd_LSP =
    13.0F;                             /* Referenced by:
                                        * '<S189>/Calib'
                                        * '<S241>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_Pct_StpDschrgSOCElcMd_RSP =
    13.8F;                             /* Referenced by:
                                        * '<S190>/Calib'
                                        * '<S242>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_Pct_StpDschrgSOC_LSP =
    13.0F;                             /* Referenced by:
                                        * '<S191>/Calib'
                                        * '<S243>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_Pct_StpDschrgSOC_RSP =
    13.8F;                             /* Referenced by:
                                        * '<S192>/Calib'
                                        * '<S244>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_U_ACOutputVolt = 30.0F;/* Referenced by: '<S217>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_U_BattSideVolt_Val = 0.0F;/* Referenced by: '<S508>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_U_MaxACVoltAlwdIDCM =
    120.0F;                            /* Referenced by: '<S10>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_240Ovrd = 0;/* Referenced by: '<S269>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_ACFreqCmd = 1;/* Referenced by: '<S11>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_BPCMRdy_Ovrd = 0;/* Referenced by: '<S509>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_BPCMRdy_Val = 0;/* Referenced by: '<S510>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_BattLTMaxLim_Ovrd = 0;/* Referenced by: '<S511>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_BattSideCurr_Ovrd = 0;/* Referenced by: '<S512>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_BattSideVolt_Ovrd = 0;/* Referenced by: '<S513>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_CntctrOpenPndg_Ovrd = 0;/* Referenced by: '<S514>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_CntctrOpenPndg_Val = 0;/* Referenced by: '<S515>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_CntctrStatus_Ovrd = 0;/* Referenced by: '<S516>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_DoorLckStsRcvd_Ovrd = 0;/* Referenced by: '<S517>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_DoorLckStsRcvd_Val = 0;/* Referenced by: '<S518>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_DoorLockSts_Ovrd = 0;/* Referenced by: '<S519>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_DrvDrUnlcking_Ovrd = 0;/* Referenced by: '<S520>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_DrvDrUnlcking_Val = 0;/* Referenced by: '<S521>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_DrvMdArb_Ovrd = 0;/* Referenced by: '<S522>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_EVSEPilotSts_Ovrd = 0;/* Referenced by: '<S523>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_EnableHdCnd_PPUsage = 1;/* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_Enable_V2LOffboard = 0;/* Referenced by: '<S12>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_Enable_V2LOnboard = 1;/* Referenced by: '<S13>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_EnblDschrg_Ovrd = 0;/* Referenced by: '<S524>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_EnblDschrg_Val = 0;/* Referenced by: '<S525>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_FOTA_Install_Status_Ovrd =
    0;                                 /* Referenced by: '<S526>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_FOTA_Install_Type_Ovrd =
    0;                                 /* Referenced by: '<S527>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_HVAccPwr_Ovrd = 0;/* Referenced by: '<S528>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_HVBatSOC_Ovrd = 0;/* Referenced by: '<S529>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_HoodAjar_Ovrd = 0;/* Referenced by: '<S530>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_HoodAjar_Val = 0;/* Referenced by: '<S531>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_InternalLightSts_Ovrd = 0;/* Referenced by: '<S532>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_InternalLightSts_Val = 0;/* Referenced by: '<S533>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_J1772S2Sts_Ovrd = 0;/* Referenced by: '<S534>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_J1772S2Sts_Val = 0;/* Referenced by: '<S535>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_LV_SysVoltage_Low_Ovrd =
    0;                                 /* Referenced by: '<S536>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_LV_SysVoltage_Low_Val = 0;/* Referenced by: '<S537>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_OBCMd_Ovrd = 0;/* Referenced by: '<S538>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_OvrdPSACond_PPMd = 1;/* Referenced by:
                                                                      * '<S193>/Calib'
                                                                      * '<S245>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_PMMPwrMd_Ovrd = 0;/* Referenced by: '<S539>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_PPIM_Ovrd = 1;/* Referenced by: '<S130>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_PluggedIn_Ovrd = 0;/* Referenced by: '<S540>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_PluggedIn_Val = 0;/* Referenced by: '<S541>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_Prox_Ovrd = 0;/* Referenced by: '<S542>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_PwrSrcSwap = 0;/* Referenced by:
                                                                      * '<S454>/Calib'
                                                                      * '<S481>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_PwrSrcSwapCAN = 1;/* Referenced by:
                                                                      * '<S455>/Calib'
                                                                      * '<S482>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_RemoteStart_Ovrd = 0;/* Referenced by: '<S543>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_RemoteStart_Val = 0;/* Referenced by: '<S544>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_SRARFault_Ovrd = 0;/* Referenced by: '<S545>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_SRARFault_Val = 0;/* Referenced by: '<S546>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_SecureConnV2L_Ovrd = 0;/* Referenced by: '<S547>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_SecureConnV2L_Val = 0;/* Referenced by: '<S548>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_SlctElecPPMd = 1;/* Referenced by: '<S246>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_SlctPP_PwrSrc = 1;/* Referenced by:
                                                                      * '<S439>/Calib'
                                                                      * '<S460>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_VehSpeedFA_Ovrd = 0;/* Referenced by: '<S549>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_VehSpeedFA_Val = 0;/* Referenced by: '<S550>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(boolean, VTLR_VAR_INIT) KeVTLR_b_VehSpeed_Ovrd = 0;/* Referenced by: '<S551>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(TeHVTR_e_HV_BatCntctrStat, VTLR_VAR_INIT)
    KeVTLR_e_CntctrStatus_Val = CeHVTR_e_Closed;/* Referenced by: '<S552>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(TeOBCR_e_DoorLockSts, VTLR_VAR_INIT)
    KeVTLR_e_DoorLockSts_Val = CeOBCR_e_LKD;/* Referenced by: '<S553>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(TeDMDR_e_DrvMd, VTLR_VAR_INIT) KeVTLR_e_DrvMdArb_Val =
    CeDMDR_e_NoDrvMd;                  /* Referenced by: '<S554>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(TeOBCR_e_EVSE_PilotStat_OBCM, VTLR_VAR_INIT)
    KeVTLR_e_EVSEPilotSts_Val = CeOBCR_e_NO_EVSE_OBCM;/* Referenced by: '<S555>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(TeCITR_e_FOTA_Install_Status, VTLR_VAR_INIT)
    KeVTLR_e_FOTA_Install_Status_Val = CeCITR_e_Installation_Default;/* Referenced by: '<S556>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(TeCITR_e_FOTA_Install_Type, VTLR_VAR_INIT)
    KeVTLR_e_FOTA_Install_Type_Val = CeCITR_e_NoFOTA;/* Referenced by: '<S557>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(TeOBCR_e_ChrgrModeStat_OBCM, VTLR_VAR_INIT)
    KeVTLR_e_OBCMd_Val = CeOBCR_e_Idle_OBCM;/* Referenced by: '<S558>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(TePMDR_e_PowerMode, VTLR_VAR_INIT) KeVTLR_e_PMMPwrMd_Val =
    CePMDR_e_PowerMode_Off;            /* Referenced by: '<S559>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(TeOBCR_e_ProxStat_OBCM, VTLR_VAR_INIT) KeVTLR_e_Prox_Val =
    CeOBCR_e_ProxOut_OBCM;             /* Referenced by: '<S560>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_k_DschrgOnboard_FiltCoef =
    5.0F;                              /* Referenced by:
                                        * '<S128>/Calib'
                                        * '<S117>/Calib'
                                        * '<S119>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_t_ACSw_Response_Timer =
    0.1F;                   /* Referenced by: '<S275>/Discharging_SF_OB_IDCM' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_t_ACSw_Response_Tmout =
    0.04F;                  /* Referenced by: '<S275>/Discharging_SF_OB_IDCM' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_t_AC_Sw_Tmot = 1.0F;
                            /* Referenced by: '<S275>/Discharging_SF_OB_IDCM' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_t_BPCMRdy_Tmot = 3.0F;
                                   /* Referenced by: '<S136>/Discharging_SF1' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_t_DschrgMdOBCM_Tmot = 2.0F;/* Referenced by:
                                                                      * '<S136>/Discharging_SF1'
                                                                      * '<S275>/Discharging_SF_OB_IDCM'
                                                                      * '<S330>/Discharging_SF_OB_PPIM'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_t_DschrgS2Cls_Tmot = 2.0F;
                                   /* Referenced by: '<S136>/Discharging_SF1' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_t_InitSts_Tmot = 300.0F;/* Referenced by:
                                                                      * '<S136>/Discharging_SF1'
                                                                      * '<S275>/Discharging_SF_OB_IDCM'
                                                                      * '<S330>/Discharging_SF_OB_PPIM'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_t_NoLoadConn_Dly = 3.0F;/* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_t_NoLoadPP1_Dly = 3.0F;/* Referenced by: '<S230>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_t_NoLoadPP2_Dly = 3.0F;/* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_t_NoLoad_Tmot = 1800.0F;/* Referenced by:
                                                                      * '<S136>/Discharging_SF1'
                                                                      * '<S275>/Discharging_SF_OB_IDCM'
                                                                      * '<S330>/Discharging_SF_OB_PPIM'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint32, VTLR_VAR_INIT) KeVTLR_t_OneHourAuth = 60U;/* Referenced by:
                                                                      * '<S35>/Calib'
                                                                      * '<S62>/Calib'
                                                                      * '<S87>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_t_PowerUp_Tmout = 0.0F;
                            /* Referenced by: '<S275>/Discharging_SF_OB_IDCM' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint32, VTLR_VAR_INIT) KeVTLR_t_RTC_Diff_LowerVal = 0U;/* Referenced by: '<S154>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(uint32, VTLR_VAR_INIT) KeVTLR_t_RTC_Diff_UpperVal = 2U;/* Referenced by: '<S155>/Calib' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_t_WaitForIdle_Tmot = 1.0F;
                            /* Referenced by: '<S275>/Discharging_SF_OB_IDCM' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static volatile CONST(float32, VTLR_VAR_INIT) KeVTLR_v_VehSpeed_Val = 0.0F;/* Referenced by: '<S561>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_VTLR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VTLR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_VTLR_1

static VAR(uint16, VTLR_VAR_INIT) EeVTLR_Cnt_AuthTmr;/* '<Root>/DSM_2' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) EeVTLR_b_V2L_OB_IDCM_Auth;/* '<Root>/DSM_3' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) EeVTLR_b_V2L_OB_PPIM_Auth;/* '<Root>/DSM_4' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) EeVTLR_b_V2L_PlugInAuth;/* '<Root>/DSM_1' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(uint16, VTLR_VAR_INIT) VeVTLR_Cnt_EStopCount;/* '<S161>/Switch1' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(uint16, VTLR_VAR_INIT) VeVTLR_Cnt_EStopCount_IDCM;/* '<S324>/Switch1' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(uint16, VTLR_VAR_INIT) VeVTLR_Cnt_EStopCount_PPIM;/* '<S392>/Switch1' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(float32, VTLR_VAR_INIT) VeVTLR_I_BattSide_Curr;/* '<S5>/Switch5' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(float32, VTLR_VAR_INIT) VeVTLR_P_BattLTMaxLim;/* '<S5>/Switch9' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(float32, VTLR_VAR_INIT) VeVTLR_P_HV_AccPwr;/* '<S5>/Switch7' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(float32, VTLR_VAR_INIT) VeVTLR_P_V2LPwrConsumption;/* '<S176>/Product' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(float32, VTLR_VAR_INIT) VeVTLR_Pct_HVBatSOC;/* '<S5>/Switch8' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(float32, VTLR_VAR_INIT) VeVTLR_U_BattSideVolt;/* '<S5>/Switch6' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_ACSwitchSts;/* '<S275>/Discharging_SF_OB_IDCM' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_BPCMRdy;/* '<S5>/Switch13' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_BattCntctrOpenPndg;/* '<S5>/Switch30' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_DoorLckSts_Rcvd;/* '<S5>/Switch16' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_DrvDrUnlcking;/* '<S5>/Switch14' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_DschrgRdy4ShtDwn;/* '<S136>/Discharging_SF1' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_DschrgRdy4ShtDwn_OB_IDCM;/* '<S275>/Discharging_SF_OB_IDCM' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_DschrgRdy4ShtDwn_OB_PPIM;/* '<S330>/Discharging_SF_OB_PPIM' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_Dschrg_S2Cmd;/* '<S136>/Discharging_SF1' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_Enable_Discharge;/* '<S132>/Logical' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_EnblDschrg;/* '<S5>/Switch3' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_GiveUpDschrg;/* '<S137>/Not Equal1' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_GiveUpDschrg_IDCM;/* '<S277>/Not Equal1' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_GiveUpDschrg_PPIM;/* '<S332>/Not Equal1' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_HVFuncRejHdAjar;/* '<S5>/Switch24' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_InternalLightSts;/* '<S5>/Switch33' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_J1772_S2_Sts;/* '<S5>/Switch11' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_LV_SysVoltage_Low;/* '<S5>/Switch17' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_NoTurtleMd;/* '<S178>/Comparison6' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_NoTurtleMd_OB;/* '<S212>/Comparison6' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_PluggedIn;/* '<S5>/Switch32' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_PwrLtChk;/* '<S194>/AND' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_PwrLtChk_Onboard;/* '<S248>/AND' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_PwrLtRstDschrg;/* '<S167>/AND' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_RangeExtendMode;/* '<S212>/Comparison1' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_RmtVehStartReq;/* '<S5>/Switch31' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_RstDschrg;/* '<S137>/Logical3' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_RstDschrg_IDCM;/* '<S277>/Logical3' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_RstDschrg_PPIM;/* '<S332>/Logical3' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_SOCChk;/* '<S185>/Switch1' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_SOCRstDschrg;/* '<S165>/AND' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_SecureConnV2L;/* '<S5>/Switch' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_StpCharging;/* '<S5>/Switch18' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_SwitchRelayBoxCmd;/* '<S275>/Discharging_SF_OB_IDCM' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(boolean, VTLR_VAR_INIT) VeVTLR_b_VehSpdFA;/* '<S5>/Switch29' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(TeVTLR_e_DschrgSysSts, VTLR_VAR_INIT) VeVTLR_e_DisChrgSysSts;/* '<S136>/Discharging_SF1' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(TeVTLR_e_DschrgSysSts, VTLR_VAR_INIT) VeVTLR_e_DisChrgSysSts_IDCM;/* '<S275>/Discharging_SF_OB_IDCM' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(TeVTLR_e_DschrgSysSts, VTLR_VAR_INIT) VeVTLR_e_DisChrgSysSts_PPIM;/* '<S330>/Discharging_SF_OB_PPIM' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(TeOBCR_e_DoorLockSts, VTLR_VAR_INIT) VeVTLR_e_DoorLockSts;/* '<S5>/Switch12' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(TeDMDR_e_DrvMd, VTLR_VAR_INIT) VeVTLR_e_DrvMdArb;/* '<S5>/Switch4' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(TeVTLR_e_DischrgSt, VTLR_VAR_INIT) VeVTLR_e_DschrgSt;/* '<S136>/Discharging_SF1' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(TeVTLR_e_DischrgSt, VTLR_VAR_INIT) VeVTLR_e_DschrgSt_IDCM;/* '<S275>/Discharging_SF_OB_IDCM' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(TeOBCR_e_EVSE_PilotStat_OBCM, VTLR_VAR_INIT) VeVTLR_e_EVSEPilotSts;/* '<S5>/Switch15' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(TeCITR_e_FOTA_Install_Status, VTLR_VAR_INIT)
    VeVTLR_e_FOTA_Install_Status;      /* '<S5>/Switch23' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(TeCITR_e_FOTA_Install_Type, VTLR_VAR_INIT) VeVTLR_e_FOTA_Install_Type;/* '<S5>/Switch22' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(TeVTLR_e_V2L_FrunkSts, VTLR_VAR_INIT) VeVTLR_e_Frunk_Status;/* '<S330>/Discharging_SF_OB_PPIM' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(TeHVTR_e_HV_BatCntctrStat, VTLR_VAR_INIT) VeVTLR_e_HV_BatCntctrStat;/* '<S5>/Switch25' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(TeOBCR_e_ChrgrModeStat_OBCM, VTLR_VAR_INIT) VeVTLR_e_OBCMd;/* '<S5>/Switch10' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(TeOBCR_e_ChrgrModeCmd_OBCM, VTLR_VAR_INIT) VeVTLR_e_OBC_MdRq;/* '<S136>/Discharging_SF1' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(TeOBCR_e_ChrgrModeCmd_OBCM, VTLR_VAR_INIT) VeVTLR_e_OBC_MdRq_IDCM;/* '<S275>/Discharging_SF_OB_IDCM' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(TePMDR_e_PowerMode, VTLR_VAR_INIT) VeVTLR_e_PMM_PowerMode;/* '<S5>/Switch1' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(TeVTLR_e_PPIM_MdRq, VTLR_VAR_INIT) VeVTLR_e_PPI_MdRq;/* '<S330>/Discharging_SF_OB_PPIM' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(TeOBCR_e_ProxStat_OBCM, VTLR_VAR_INIT) VeVTLR_e_ProxStat;/* '<S5>/Switch2' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(TeVTLR_e_V2L_TrunkSts, VTLR_VAR_INIT) VeVTLR_e_Trunk_Status;/* '<S275>/Discharging_SF_OB_IDCM' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(uint16, VTLR_VAR_INIT) VeVTLR_k_NDCR;/* '<S136>/Discharging_SF1' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(uint16, VTLR_VAR_INIT) VeVTLR_k_NDCR_IDCM;/* '<S275>/Discharging_SF_OB_IDCM' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(uint16, VTLR_VAR_INIT) VeVTLR_k_NDCR_PPIM;/* '<S330>/Discharging_SF_OB_PPIM' */

#endif

#if Rte_SysCon_Variant_VTLR_1

static VAR(float32, VTLR_VAR_INIT) VeVTLR_v_VehSpdSigned;/* '<S5>/Switch28' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VTLR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VTLR
#include "MemMap.h"

VAR(B_VTLR_ac_T, VTLR_VAR_INIT) VTLR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VTLR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_VTLR
#include "MemMap.h"

VAR(DW_VTLR_ac_T, VTLR_VAR_INIT) VTLR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_VTLR
#include "MemMap.h"

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_VTLR_1

static void VTLR_ac_Initial_State(const boolean *LogicalOperator2);

#endif

/* Function for Chart: '<S275>/Discharging_SF_OB_IDCM' */
#if Rte_SysCon_Variant_VTLR_1

static void VTLR_ac_Initial_State(const boolean *LogicalOperator2)
{
    boolean tmp;
    VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgInit;
    VeVTLR_e_OBC_MdRq_IDCM = CeOBCR_e_Idle_OBCMdRq;
    VeVTLR_e_DisChrgSysSts_IDCM = CeVTLR_e_DschrgInactv;
    VeVTLR_e_Trunk_Status = CeVTLR_e_Inactive;
    VeVTLR_b_DschrgRdy4ShtDwn_OB_IDCM = false;

    /* During 'Initial_State': '<S278>:525' */
    tmp = !VTLR_ac_B.NoLoad_Flag_i;

    /* Switch: '<S5>/Switch10' */
    if ((((*LogicalOperator2) && (((uint32)VeVTLR_e_OBCMd) == CeOBCR_e_Idle_OBCM))
         && (((VTLR_ac_DW.AC_Sw_Faulted) && (VTLR_ac_DW.ACSW_Cnt <
            KeVTLR_Cnt_AC_Sw_RetryLim)) || (VTLR_ac_DW.PowerUpFlag))) && tmp)
    {
        /* Transition: '<S278>:554' */
        VTLR_ac_DW.is_c1_VTLR_ac = VTLR_ac_IN_AC_Switch_Close;

        /* Entry 'AC_Switch_Close': '<S278>:526' */
        VeVTLR_b_SwitchRelayBoxCmd = true;
        VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_AC_Sw_Close;
        VeVTLR_b_ACSwitchSts = true;
        VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b = 0.0F;
        VTLR_ac_DW.PowerUpFlag = false;
    }
    else if (((VeVTLR_b_PluggedIn) || ((VTLR_ac_DW.AC_Sw_Faulted) &&
               (VTLR_ac_DW.AC_Sw_RetryCnt > KeVTLR_Cnt_AC_Sw_RetryLim))) ||
             (VTLR_ac_B.NoLoad_Flag_i))
    {
        /* Transition: '<S278>:522' */
        /* Transition: '<S278>:527' */
        /* Transition: '<S278>:569' */
        VTLR_ac_DW.is_c1_VTLR_ac = VTLR_ac_IN_Shut_Down_d;

        /* Entry 'Shut_Down': '<S278>:508' */
        VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b = 0.0F;
        VeVTLR_b_DschrgRdy4ShtDwn_OB_IDCM = true;
        VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgShtDwn;
        VeVTLR_b_SwitchRelayBoxCmd = false;
        VeVTLR_b_ACSwitchSts = false;
    }
    else if ((VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b >= KeVTLR_t_InitSts_Tmot) || tmp)
    {
        /* Transition: '<S278>:561' */
        VeVTLR_k_NDCR_IDCM = 1U;

        /* Transition: '<S278>:558' */
        /* Transition: '<S278>:540' */
        /* Transition: '<S278>:546' */
        /* Transition: '<S278>:548' */
        /* Transition: '<S278>:547' */
        /* Transition: '<S278>:549' */
        /* Transition: '<S278>:565' */
        /* Transition: '<S278>:577' */
        /* Transition: '<S278>:567' */
        VTLR_ac_DW.is_c1_VTLR_ac = VTLR_ac_IN_E_Stop;

        /* Entry 'E_Stop': '<S278>:513' */
        VeVTLR_e_OBC_MdRq_IDCM = CeOBCR_e_Idle_OBCMdRq;
        VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b = 0.0F;
        VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgEStp;
        VeVTLR_e_DisChrgSysSts_IDCM = CeVTLR_e_DschrgInactv;
        VeVTLR_e_Trunk_Status = CeVTLR_e_Inactive;
        VTLR_ac_B.BlinkFlag_o = true;
    }
    else if ((((*LogicalOperator2) && (((uint32)VeVTLR_e_OBCMd) ==
                CeOBCR_e_Idle_OBCM)) && (!VTLR_ac_DW.AC_Sw_Faulted)) && tmp)
    {
        /* Transition: '<S278>:578' */
        VTLR_ac_DW.is_c1_VTLR_ac = VTLR__IN_Discharging_Mode_Req_d;

        /* Entry 'Discharging_Mode_Req': '<S278>:523' */
        VeVTLR_e_OBC_MdRq_IDCM = CeOBCR_e_Dischrg_OBCMdRq;
        VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b = 0.0F;
        VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgOBCMd;
    }
    else
    {
        VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b += HeVTLR_t_dT;
    }

    /* End of Switch: '<S5>/Switch10' */
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_VTLR_1

FUNC(void, VTLR_CODE) VTLR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_VTLR_1

    boolean tmpRead;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TePMDR_e_PowerMode tmpRead_0;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeOBCR_e_ProxStat_OBCM tmpRead_1;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean tmpRead_2;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeDMDR_e_DrvMd tmpRead_3;

#endif

#if Rte_SysCon_Variant_VTLR_1

    float32 tmpRead_4;

#endif

#if Rte_SysCon_Variant_VTLR_1

    float32 tmpRead_5;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeOBCR_e_ChrgrModeStat_OBCM tmpRead_6;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeOBCR_e_EVSE_PilotStat_OBCM tmpRead_7;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeOBCR_e_DoorLockSts tmpRead_8;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeIDCR_e_V2X_ModeFeedback tmpRead_9;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_DschrgSysSts tmpRead_a;

#endif

#if Rte_SysCon_Variant_VTLR_1

    float32 tmpRead_b;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeCITR_e_FOTA_Install_Type tmpRead_c;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeCITR_e_FOTA_Install_Status tmpRead_d;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeHVTR_e_HV_BatCntctrStat tmpRead_e;

#endif

#if Rte_SysCon_Variant_VTLR_1

    uint32 rtb_TmpSignalConversionAtVePLTR;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_DataStoreRead2;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_TmpSignalConversionAtVeC_lz;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_TmpSignalConversionAtVeC_ly;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_Merge_7;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_TmpSignalConversionAtVeHPMR;

#endif

#if Rte_SysCon_Variant_VTLR_1

    uint32 rtb_Sum;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_AND_ab;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_AND_le;

#endif

#if Rte_SysCon_Variant_VTLR_1

    uint16 rtb_Switch1_ml;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_TmpSignalConversionAtVeC_mq;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_TmpSignalConversionAtVeC_ng;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_TmpSignalConversionAtVeC_jx;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_TmpSignalConversionAtVeC_mv;

#endif

#if Rte_SysCon_Variant_VTLR_1

    float32 rtb_TmpSignalConversionAtVeC_kf;

#endif

#if Rte_SysCon_Variant_VTLR_1

    float32 rtb_TmpSignalConversionAtVeCI_k;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_TmpSignalConversionAtVeC_ai;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_TmpSignalConversionAtVeC_oh;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_TmpSignalConversionAtVeCI_n;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_TmpSignalConversionAtVeCI_o;

#endif

#if Rte_SysCon_Variant_VTLR_1

    float32 rtb_TmpSignalConversionAtVeC_go;

#endif

#if Rte_SysCon_Variant_VTLR_1

    float32 rtb_TmpSignalConversionAtVeC_jh;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_TmpSignalConversionAtVeCI_h;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_TmpSignalConversionAtVeCI_g;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_TmpSignalConversionAtVeC_fy;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_TmpSignalConversionAtVeCI_j;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_TmpSignalConversionAtVeC_nm;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_TmpSignalConversionAtVeCI_b;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_Merge16;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_OR1_had;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_AND_cw;

#endif

#if Rte_SysCon_Variant_VTLR_1

    float32 rtb_Merge10;

#endif

#if Rte_SysCon_Variant_VTLR_1

    float32 rtb_Switch1_pz;

#endif

#if Rte_SysCon_Variant_VTLR_1

    float32 rtb_Merge11;

#endif

#if Rte_SysCon_Variant_VTLR_1

    float32 rtb_TmpSignalConversionAtVeIDCR;

#endif

#if Rte_SysCon_Variant_VTLR_1

    float32 rtb_TmpSignalConversionAtVeID_o;

#endif

#if Rte_SysCon_Variant_VTLR_1

    float32 rtb_Gain;

#endif

#if Rte_SysCon_Variant_VTLR_1

    uint16 rtb_Switch1_p5;

#endif

#if Rte_SysCon_Variant_VTLR_1

    uint16 rtb_Switch_av;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_AND_amk;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_OR1_kq;

#endif

#if Rte_SysCon_Variant_VTLR_1

    float32 rtb_TmpSignalConversionAtVeCITR;

#endif

#if Rte_SysCon_Variant_VTLR_1

    float32 rtb_TmpSignalConversionAtVeCI_i;

#endif

#if Rte_SysCon_Variant_VTLR_1

    float32 rtb_Merge4;

#endif

#if Rte_SysCon_Variant_VTLR_1

    float32 rtb_TmpSignalConversionAtVeID_c;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_AND_hb;

#endif

#if Rte_SysCon_Variant_VTLR_1

    float32 rtb_TmpSignalConversionAtVeID_m;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean rtb_TmpSignalConversionAtVeHP_b;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_DschrgSysSts rtb_Merge_4_g;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeDMDR_e_TurtleMdSts rtb_TmpSignalConversionAtVeDMDR;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTXR_e_PowerPanelMd rtb_TmpSignalConversionAtVeVTXR;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_PowerPanel1_Fault rtb_TmpSignalConversionAtVeCI_a;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_PowerPanel2_Fault rtb_TmpSignalConversionAtVeCI_c;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_PowerPanel1_Fault rtb_Merge6;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_V2L_TrunkSts rtb_Merge_15;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_V2L_FrunkSts rtb_Merge_20;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_DschrgSysSts rtb_Switch1_ns;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_LED_Color_Command rtb_Merge_11;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_LED_Color_Command rtb_Merge_29;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_LED_Color_Command rtb_Merge_30;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_LED_Color_Command rtb_Merge_31;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_LED_Color_Command rtb_Merge_33;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_DisChrgFailSts rtb_TmpSignalConversionAtVeID_h;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTRGR;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_DischrgSt_PPIM rtb_VeVTLR_e_PPIM_DschrgSt;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_Led_Command rtb_Switch7;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_Led_Command rtb_Switch1_m;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_Led_Command rtb_Switch8;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_Led_Command rtb_Switch1_na;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_Led_Command rtb_Switch1_f4;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_Led_Command rtb_Switch1_hq;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_Led_Command rtb_Switch1_ny;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean Merge_14;

#endif

#if Rte_SysCon_Variant_VTLR_1

    float32 Merge_2_j;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean Merge_5;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean Merge_13;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean Merge_6_o;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_V2L_TrunkSts Merge_h;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_LED_Color_Command Merge10;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_LED_Color_Command Merge7;

#endif

#if Rte_SysCon_Variant_VTLR_1

    uint32 rtb_Subtraction_tmp;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean tmp;

#endif

#if Rte_SysCon_Variant_VTLR_1

    TeVTLR_e_DschrgSysSts rtb_AND_cq_tmp;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean guard1 = false;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean guard2 = false;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean guard3 = false;

#endif

#if Rte_SysCon_Variant_VTLR_1

    boolean guard4 = false;

#endif

#if Rte_SysCon_Variant_VTLR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* Inport: '<Root>/VePLTR_b_InternalLightSts' */
    (void)Rte_Read_VePLTR_b_InternalLightSts_Value(&rtb_DataStoreRead2);

    /* Inport: '<Root>/VeOBCR_b_PluggedIn' */
    (void)Rte_Read_VeOBCR_b_PluggedIn_Value(&Merge_6_o);

    /* Inport: '<Root>/VePLTR_b_RmtVehStartReq' */
    (void)Rte_Read_VePLTR_b_RmtVehStartReq_Value(&Merge_5);

    /* Inport: '<Root>/VeHPMR_b_BattCntctrOpenPndg' */
    (void)Rte_Read_VeHPMR_b_BattCntctrOpenPndg_Value(&rtb_Merge_7);

    /* Inport: '<Root>/VeCSVR_b_VehSpdFA' */
    (void)Rte_Read_VeCSVR_b_VehSpdFA_Value(&rtb_AND_amk);

    /* Inport: '<Root>/VeCSVR_v_VehSpdSigned' */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value(&Merge_2_j);

    /* Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat' */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value(&tmpRead_e);

    /* Inport: '<Root>/VeFSCR_b_HVFuncRejHdAjar' */
    (void)Rte_Read_VeFSCR_b_HVFuncRejHdAjar_Value(&rtb_OR1_kq);

    /* Inport: '<Root>/VeCITR_e_FOTA_Install_Status' */
    (void)Rte_Read_VeCITR_e_FOTA_Install_Status_Value(&tmpRead_d);

    /* Inport: '<Root>/VeCITR_e_FOTA_Install_Type' */
    (void)Rte_Read_VeCITR_e_FOTA_Install_Type_Value(&tmpRead_c);

    /* Inport: '<Root>/VeGENR_b_LV_SysVoltage_Low' */
    (void)Rte_Read_VeGENR_b_LV_SysVoltage_Low_Value(&rtb_AND_ab);

    /* Inport: '<Root>/VeSRAR_b_StpCharging' */
    (void)Rte_Read_VeSRAR_b_StpCharging_Value(&rtb_AND_le);

    /* Inport: '<Root>/VeCITR_b_DoorLockLastElSts_Rcvd' */
    (void)Rte_Read_VeCITR_b_DoorLockLastElSts_Rcvd_Value(&rtb_Merge16);

    /* Inport: '<Root>/VeOBCR_b_BPCM_Rdy' */
    (void)Rte_Read_VeOBCR_b_BPCM_Rdy_Value(&rtb_OR1_had);

    /* Inport: '<Root>/VeCITR_e_DoorLockLastElSts' */
    (void)Rte_Read_VeCITR_e_DoorLockLastElSts_Value(&tmpRead_8);

    /* Inport: '<Root>/VeIDCR_e_EVSE_PilotStat_OBCM' */
    (void)Rte_Read_VeIDCR_e_EVSE_PilotStat_OBCM_Value(&tmpRead_7);

    /* Inport: '<Root>/VeCITR_b_Drv_Dr_Unlocking' */
    (void)Rte_Read_VeCITR_b_Drv_Dr_Unlocking_Value(&rtb_AND_cw);

    /* Inport: '<Root>/VeIDCR_b_J1772_S2_Status' */
    (void)Rte_Read_VeIDCR_b_J1772_S2_Status_Value(&rtb_AND_hb);

    /* Inport: '<Root>/VeIDCR_e_ChrgrModeStat_OBCM' */
    (void)Rte_Read_VeIDCR_e_ChrgrModeStat_OBCM_Value(&tmpRead_6);

    /* Inport: '<Root>/VeESMR_P_BattLTMaxLim' */
    (void)Rte_Read_VeESMR_P_BattLTMaxLim_Value(&rtb_Merge4);

    /* Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb' */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value(&rtb_Merge10);

    /* Inport: '<Root>/VeHVTR_P_HV_AccPwr' */
    (void)Rte_Read_VeHVTR_P_HV_AccPwr_Value(&rtb_Merge11);

    /* Inport: '<Root>/VeIDCR_U_BattSideVolt' */
    (void)Rte_Read_VeIDCR_U_BattSideVolt_Value(&tmpRead_5);

    /* Inport: '<Root>/VeIDCR_I_BattSide_Curr' */
    (void)Rte_Read_VeIDCR_I_BattSide_Curr_Value(&tmpRead_4);

    /* Inport: '<Root>/VeDMDR_e_DrvMdArb' */
    (void)Rte_Read_VeDMDR_e_DrvMdArb_Value(&tmpRead_3);

    /* Inport: '<Root>/VeOBCR_b_EnablePowerTransfer' */
    (void)Rte_Read_VeOBCR_b_EnablePowerTransfer_Value(&tmpRead_2);

    /* Inport: '<Root>/VeIDCR_e_ProxStat' */
    (void)Rte_Read_VeIDCR_e_ProxStat_Value(&tmpRead_1);

    /* Inport: '<Root>/VePMDR_e_PMM_PowerMode' */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value(&tmpRead_0);

    /* Inport: '<Root>/VeOBCR_b_SecureConnV2L' */
    (void)Rte_Read_VeOBCR_b_SecureConnV2L_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/VTLR_MedTED' */
    /* SignalConversion generated from: '<S1>/VeCITR_b_PPButtonSts' incorporates:
     *  Inport: '<Root>/VeCITR_b_PPButtonSts'
     */
    (void)Rte_Read_VeCITR_b_PPButtonSts_Value(&rtb_TmpSignalConversionAtVeC_mq);

    /* SignalConversion generated from: '<S1>/VeCITR_b_V2LTrunkReq' incorporates:
     *  Inport: '<Root>/VeCITR_b_V2LTrunkReq'
     */
    (void)Rte_Read_VeCITR_b_V2LTrunkReq_Value(&rtb_TmpSignalConversionAtVeC_jx);

    /* SignalConversion generated from: '<S1>/VeCITR_b_PP2ButtonSts' incorporates:
     *  Inport: '<Root>/VeCITR_b_PP2ButtonSts'
     */
    (void)Rte_Read_VeCITR_b_PP2ButtonSts_Value(&rtb_TmpSignalConversionAtVeC_ng);

    /* SignalConversion generated from: '<S1>/VeCITR_b_V2L_FrunkReq' incorporates:
     *  Inport: '<Root>/VeCITR_b_V2L_FrunkReq'
     */
    (void)Rte_Read_VeCITR_b_V2L_FrunkReq_Value(&rtb_TmpSignalConversionAtVeC_mv);

    /* SignalConversion generated from: '<S1>/VeCITR_b_V2L_AllReq' incorporates:
     *  Inport: '<Root>/VeCITR_b_V2L_AllReq'
     */
    (void)Rte_Read_VeCITR_b_V2L_AllReq_Value(&rtb_TmpSignalConversionAtVeC_lz);

    /* SignalConversion generated from: '<S1>/VeCITR_e_PP2Fault' incorporates:
     *  Inport: '<Root>/VeCITR_e_PP2Fault'
     */
    (void)Rte_Read_VeCITR_e_PP2Fault_Value(&rtb_TmpSignalConversionAtVeCI_c);

    /* SignalConversion generated from: '<S1>/VeCITR_e_PPFault' incorporates:
     *  Inport: '<Root>/VeCITR_e_PPFault'
     */
    (void)Rte_Read_VeCITR_e_PPFault_Value(&rtb_TmpSignalConversionAtVeCI_a);

    /* SignalConversion generated from: '<S1>/VeCITR_I_PPCurrentDrawSens1' incorporates:
     *  Inport: '<Root>/VeCITR_I_PPCurrentDrawSens1'
     */
    (void)Rte_Read_VeCITR_I_PPCurrentDrawSens1_Value
        (&rtb_TmpSignalConversionAtVeCITR);

    /* SignalConversion generated from: '<S1>/VeCITR_I_PPCurrentDrawSens2' incorporates:
     *  Inport: '<Root>/VeCITR_I_PPCurrentDrawSens2'
     */
    (void)Rte_Read_VeCITR_I_PPCurrentDrawSens2_Value
        (&rtb_TmpSignalConversionAtVeCI_i);

    /* SignalConversion generated from: '<S1>/VeCITR_I_PP2CurrentDrawSens1' incorporates:
     *  Inport: '<Root>/VeCITR_I_PP2CurrentDrawSens1'
     */
    (void)Rte_Read_VeCITR_I_PP2CurrentDrawSens1_Value
        (&rtb_TmpSignalConversionAtVeC_go);

    /* SignalConversion generated from: '<S1>/VeCITR_I_PP2CurrentDrawSens2' incorporates:
     *  Inport: '<Root>/VeCITR_I_PP2CurrentDrawSens2'
     */
    (void)Rte_Read_VeCITR_I_PP2CurrentDrawSens2_Value
        (&rtb_TmpSignalConversionAtVeC_jh);

    /* SignalConversion generated from: '<S1>/VeCITR_b_PPACPresentSens1' incorporates:
     *  Inport: '<Root>/VeCITR_b_PPACPresentSens1'
     */
    (void)Rte_Read_VeCITR_b_PPACPresentSens1_Value
        (&rtb_TmpSignalConversionAtVeC_ai);

    /* SignalConversion generated from: '<S1>/VeCITR_b_PPACPresentSens2' incorporates:
     *  Inport: '<Root>/VeCITR_b_PPACPresentSens2'
     */
    (void)Rte_Read_VeCITR_b_PPACPresentSens2_Value
        (&rtb_TmpSignalConversionAtVeCI_n);

    /* SignalConversion generated from: '<S1>/VeCITR_b_PP2ACPresentSens1' incorporates:
     *  Inport: '<Root>/VeCITR_b_PP2ACPresentSens1'
     */
    (void)Rte_Read_VeCITR_b_PP2ACPresentSens1_Value
        (&rtb_TmpSignalConversionAtVeC_oh);

    /* SignalConversion generated from: '<S1>/VeCITR_b_PP2ACPresentSens2' incorporates:
     *  Inport: '<Root>/VeCITR_b_PP2ACPresentSens2'
     */
    (void)Rte_Read_VeCITR_b_PP2ACPresentSens2_Value
        (&rtb_TmpSignalConversionAtVeCI_o);

    /* SignalConversion generated from: '<S1>/VeIDCR_e_DschrgFaultSts' incorporates:
     *  Inport: '<Root>/VeIDCR_e_DschrgFaultSts'
     */
    (void)Rte_Read_VeIDCR_e_DschrgFaultSts_Value
        (&rtb_TmpSignalConversionAtVeID_h);

    /* SignalConversion generated from: '<S1>/VeCITR_b_PPLidSwitchSts120A' incorporates:
     *  Inport: '<Root>/VeCITR_b_PPLidSwitchSts120A'
     */
    (void)Rte_Read_VeCITR_b_PPLidSwitchSts120A_Value
        (&rtb_TmpSignalConversionAtVeCI_h);

    /* SignalConversion generated from: '<S1>/VeCITR_b_PPLidSwitchSts120B' incorporates:
     *  Inport: '<Root>/VeCITR_b_PPLidSwitchSts120B'
     */
    (void)Rte_Read_VeCITR_b_PPLidSwitchSts120B_Value
        (&rtb_TmpSignalConversionAtVeC_fy);

    /* SignalConversion generated from: '<S1>/VeCITR_b_PPLidSwitchSts240' incorporates:
     *  Inport: '<Root>/VeCITR_b_PPLidSwitchSts240'
     */
    (void)Rte_Read_VeCITR_b_PPLidSwitchSts240_Value
        (&rtb_TmpSignalConversionAtVeC_nm);

    /* SignalConversion generated from: '<S1>/VeCITR_b_PP2LidSwitchSts120A' incorporates:
     *  Inport: '<Root>/VeCITR_b_PP2LidSwitchSts120A'
     */
    (void)Rte_Read_VeCITR_b_PP2LidSwitchSts120A_Value
        (&rtb_TmpSignalConversionAtVeCI_g);

    /* SignalConversion generated from: '<S1>/VeCITR_b_PP2LidSwitchSts120B' incorporates:
     *  Inport: '<Root>/VeCITR_b_PP2LidSwitchSts120B'
     */
    (void)Rte_Read_VeCITR_b_PP2LidSwitchSts120B_Value
        (&rtb_TmpSignalConversionAtVeCI_j);

    /* SignalConversion generated from: '<S1>/VeCITR_b_PP2LidSwitchSts240' incorporates:
     *  Inport: '<Root>/VeCITR_b_PP2LidSwitchSts240'
     */
    (void)Rte_Read_VeCITR_b_PP2LidSwitchSts240_Value
        (&rtb_TmpSignalConversionAtVeCI_b);

    /* SignalConversion generated from: '<S1>/VeIDCR_U_DCInVoltage' incorporates:
     *  Inport: '<Root>/VeIDCR_U_DCInputVoltage'
     */
    (void)Rte_Read_VeIDCR_U_DCInputVoltage_Value
        (&rtb_TmpSignalConversionAtVeIDCR);

    /* SignalConversion generated from: '<S1>/VeCITR_P_PPRatedPower' incorporates:
     *  Inport: '<Root>/VeCITR_P_PPRatedPower'
     */
    (void)Rte_Read_VeCITR_P_PPRatedPower_Value(&rtb_TmpSignalConversionAtVeCI_k);

    /* SignalConversion generated from: '<S1>/VeCITR_P_PP2RatedPower' incorporates:
     *  Inport: '<Root>/VeCITR_P_PP2RatedPower'
     */
    (void)Rte_Read_VeCITR_P_PP2RatedPower_Value(&rtb_TmpSignalConversionAtVeC_kf);

    /* SignalConversion generated from: '<S1>/VeIDCR_U_V2XInVoltage' incorporates:
     *  Inport: '<Root>/VeIDCR_U_V2X_InputVoltage'
     */
    (void)Rte_Read_VeIDCR_U_V2X_InputVoltage_Value
        (&rtb_TmpSignalConversionAtVeID_o);

    /* SignalConversion generated from: '<S1>/VePLTR_t_RTC_CurrentTime' incorporates:
     *  Inport: '<Root>/VePLTR_t_RTC_CurrentTime'
     */
    (void)Rte_Read_VePLTR_t_RTC_CurrentTime_Value
        (&rtb_TmpSignalConversionAtVePLTR);

    /* SignalConversion generated from: '<S1>/VeVTXR_e_PowerPanelMd' incorporates:
     *  Inport: '<Root>/VeVTXR_e_PowerPanelMd'
     */
    (void)Rte_Read_VeVTXR_e_PowerPanelMd_Value(&rtb_TmpSignalConversionAtVeVTXR);

    /* SignalConversion generated from: '<S1>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value(&rtb_TmpSignalConversionAtVeHPMR);

    /* SignalConversion generated from: '<S1>/VeCITR_b_V2LSubmit' incorporates:
     *  Inport: '<Root>/VeCITR_b_V2LSubmit'
     */
    (void)Rte_Read_VeCITR_b_V2LSubmit_Value(&rtb_TmpSignalConversionAtVeC_ly);

    /* SignalConversion generated from: '<S1>/VeDMDR_e_TurtleMdSts' incorporates:
     *  Inport: '<Root>/VeDMDR_e_TurtleMdSts'
     */
    (void)Rte_Read_VeDMDR_e_TurtleMdSts_Value(&rtb_TmpSignalConversionAtVeDMDR);

    /* SignalConversion generated from: '<S1>/VeHPMR_b_CntrlrPwrHold' incorporates:
     *  Inport: '<Root>/VeHPMR_b_CntrlrPwrHold'
     */
    (void)Rte_Read_VeHPMR_b_CntrlrPwrHold_Value(&rtb_TmpSignalConversionAtVeHP_b);

    /* SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTRGR);

    /* SignalConversion generated from: '<S1>/VeIDCR_I_DCInputCurrent' incorporates:
     *  Inport: '<Root>/VeIDCR_I_DCInputCurrent'
     */
    (void)Rte_Read_VeIDCR_I_DCInputCurrent_Value
        (&rtb_TmpSignalConversionAtVeID_c);

    /* SignalConversion generated from: '<S1>/VeIDCR_I_V2X_InputCurrent' incorporates:
     *  Inport: '<Root>/VeIDCR_I_V2X_InputCurrent'
     */
    (void)Rte_Read_VeIDCR_I_V2X_InputCurrent_Value
        (&rtb_TmpSignalConversionAtVeID_m);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VTLI'
     */
    /* Switch: '<S5>/Switch' incorporates:
     *  Constant: '<S547>/Calib'
     */
    if (KeVTLR_b_SecureConnV2L_Ovrd)
    {
        /* Switch: '<S5>/Switch' incorporates:
         *  Constant: '<S548>/Calib'
         */
        VeVTLR_b_SecureConnV2L = KeVTLR_b_SecureConnV2L_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch' */
        VeVTLR_b_SecureConnV2L = tmpRead;
    }

    /* End of Switch: '<S5>/Switch' */

    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S539>/Calib'
     */
    if (KeVTLR_b_PMMPwrMd_Ovrd)
    {
        /* Switch: '<S5>/Switch1' incorporates:
         *  Constant: '<S559>/Calib'
         */
        VeVTLR_e_PMM_PowerMode = KeVTLR_e_PMMPwrMd_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch1' incorporates:
         *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
         */
        VeVTLR_e_PMM_PowerMode = tmpRead_0;
    }

    /* End of Switch: '<S5>/Switch1' */

    /* Switch: '<S5>/Switch2' incorporates:
     *  Constant: '<S542>/Calib'
     */
    if (KeVTLR_b_Prox_Ovrd)
    {
        /* Switch: '<S5>/Switch2' incorporates:
         *  Constant: '<S560>/Calib'
         */
        VeVTLR_e_ProxStat = KeVTLR_e_Prox_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch2' incorporates:
         *  Inport: '<Root>/VeIDCR_e_ProxStat'
         */
        VeVTLR_e_ProxStat = tmpRead_1;
    }

    /* End of Switch: '<S5>/Switch2' */

    /* Switch: '<S5>/Switch3' incorporates:
     *  Constant: '<S524>/Calib'
     */
    if (KeVTLR_b_EnblDschrg_Ovrd)
    {
        /* Switch: '<S5>/Switch3' incorporates:
         *  Constant: '<S525>/Calib'
         */
        VeVTLR_b_EnblDschrg = KeVTLR_b_EnblDschrg_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch3' */
        VeVTLR_b_EnblDschrg = tmpRead_2;
    }

    /* End of Switch: '<S5>/Switch3' */

    /* Switch: '<S5>/Switch4' incorporates:
     *  Constant: '<S522>/Calib'
     */
    if (KeVTLR_b_DrvMdArb_Ovrd)
    {
        /* Switch: '<S5>/Switch4' incorporates:
         *  Constant: '<S554>/Calib'
         */
        VeVTLR_e_DrvMdArb = KeVTLR_e_DrvMdArb_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch4' incorporates:
         *  Inport: '<Root>/VeDMDR_e_DrvMdArb'
         */
        VeVTLR_e_DrvMdArb = tmpRead_3;
    }

    /* End of Switch: '<S5>/Switch4' */

    /* Switch: '<S5>/Switch5' incorporates:
     *  Constant: '<S512>/Calib'
     */
    if (KeVTLR_b_BattSideCurr_Ovrd)
    {
        /* Switch: '<S5>/Switch5' incorporates:
         *  Constant: '<S504>/Calib'
         */
        VeVTLR_I_BattSide_Curr = KeVTLR_I_BattSideCurr_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch5' */
        VeVTLR_I_BattSide_Curr = tmpRead_4;
    }

    /* End of Switch: '<S5>/Switch5' */

    /* Switch: '<S5>/Switch6' incorporates:
     *  Constant: '<S513>/Calib'
     */
    if (KeVTLR_b_BattSideVolt_Ovrd)
    {
        /* Switch: '<S5>/Switch6' incorporates:
         *  Constant: '<S508>/Calib'
         */
        VeVTLR_U_BattSideVolt = KeVTLR_U_BattSideVolt_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch6' */
        VeVTLR_U_BattSideVolt = tmpRead_5;
    }

    /* End of Switch: '<S5>/Switch6' */

    /* Switch: '<S5>/Switch7' incorporates:
     *  Constant: '<S528>/Calib'
     */
    if (KeVTLR_b_HVAccPwr_Ovrd)
    {
        /* Switch: '<S5>/Switch7' incorporates:
         *  Constant: '<S506>/Calib'
         */
        VeVTLR_P_HV_AccPwr = KeVTLR_P_HVAccPwr_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch7' */
        VeVTLR_P_HV_AccPwr = rtb_Merge11;
    }

    /* End of Switch: '<S5>/Switch7' */

    /* Switch: '<S5>/Switch8' incorporates:
     *  Constant: '<S529>/Calib'
     */
    if (KeVTLR_b_HVBatSOC_Ovrd)
    {
        /* Switch: '<S5>/Switch8' incorporates:
         *  Constant: '<S507>/Calib'
         */
        VeVTLR_Pct_HVBatSOC = KeVTLR_Pct_HVBatSOC_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch8' */
        VeVTLR_Pct_HVBatSOC = rtb_Merge10;
    }

    /* End of Switch: '<S5>/Switch8' */

    /* Switch: '<S5>/Switch9' incorporates:
     *  Constant: '<S511>/Calib'
     */
    if (KeVTLR_b_BattLTMaxLim_Ovrd)
    {
        /* Switch: '<S5>/Switch9' incorporates:
         *  Constant: '<S505>/Calib'
         */
        VeVTLR_P_BattLTMaxLim = KeVTLR_P_BattLTMaxLim_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch9' */
        VeVTLR_P_BattLTMaxLim = rtb_Merge4;
    }

    /* End of Switch: '<S5>/Switch9' */

    /* Switch: '<S5>/Switch10' incorporates:
     *  Constant: '<S538>/Calib'
     */
    if (KeVTLR_b_OBCMd_Ovrd)
    {
        /* Switch: '<S5>/Switch10' incorporates:
         *  Constant: '<S558>/Calib'
         */
        VeVTLR_e_OBCMd = KeVTLR_e_OBCMd_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch10' incorporates:
         *  Inport: '<Root>/VeIDCR_e_ChrgrModeStat_OBCM'
         */
        VeVTLR_e_OBCMd = tmpRead_6;
    }

    /* End of Switch: '<S5>/Switch10' */

    /* Switch: '<S5>/Switch11' incorporates:
     *  Constant: '<S534>/Calib'
     */
    if (KeVTLR_b_J1772S2Sts_Ovrd)
    {
        /* Switch: '<S5>/Switch11' incorporates:
         *  Constant: '<S535>/Calib'
         */
        VeVTLR_b_J1772_S2_Sts = KeVTLR_b_J1772S2Sts_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch11' */
        VeVTLR_b_J1772_S2_Sts = rtb_AND_hb;
    }

    /* End of Switch: '<S5>/Switch11' */

    /* Switch: '<S5>/Switch14' incorporates:
     *  Constant: '<S520>/Calib'
     */
    if (KeVTLR_b_DrvDrUnlcking_Ovrd)
    {
        /* Switch: '<S5>/Switch14' incorporates:
         *  Constant: '<S521>/Calib'
         */
        VeVTLR_b_DrvDrUnlcking = KeVTLR_b_DrvDrUnlcking_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch14' */
        VeVTLR_b_DrvDrUnlcking = rtb_AND_cw;
    }

    /* End of Switch: '<S5>/Switch14' */

    /* Switch: '<S5>/Switch15' incorporates:
     *  Constant: '<S523>/Calib'
     */
    if (KeVTLR_b_EVSEPilotSts_Ovrd)
    {
        /* Switch: '<S5>/Switch15' incorporates:
         *  Constant: '<S555>/Calib'
         */
        VeVTLR_e_EVSEPilotSts = KeVTLR_e_EVSEPilotSts_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch15' incorporates:
         *  Inport: '<Root>/VeIDCR_e_EVSE_PilotStat_OBCM'
         */
        VeVTLR_e_EVSEPilotSts = tmpRead_7;
    }

    /* End of Switch: '<S5>/Switch15' */

    /* Switch: '<S5>/Switch12' incorporates:
     *  Constant: '<S519>/Calib'
     */
    if (KeVTLR_b_DoorLockSts_Ovrd)
    {
        /* Switch: '<S5>/Switch12' incorporates:
         *  Constant: '<S553>/Calib'
         */
        VeVTLR_e_DoorLockSts = KeVTLR_e_DoorLockSts_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch12' incorporates:
         *  Inport: '<Root>/VeCITR_e_DoorLockLastElSts'
         */
        VeVTLR_e_DoorLockSts = tmpRead_8;
    }

    /* End of Switch: '<S5>/Switch12' */

    /* Switch: '<S5>/Switch13' incorporates:
     *  Constant: '<S509>/Calib'
     */
    if (KeVTLR_b_BPCMRdy_Ovrd)
    {
        /* Switch: '<S5>/Switch13' incorporates:
         *  Constant: '<S510>/Calib'
         */
        VeVTLR_b_BPCMRdy = KeVTLR_b_BPCMRdy_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch13' */
        VeVTLR_b_BPCMRdy = rtb_OR1_had;
    }

    /* End of Switch: '<S5>/Switch13' */

    /* Switch: '<S5>/Switch16' incorporates:
     *  Constant: '<S517>/Calib'
     */
    if (KeVTLR_b_DoorLckStsRcvd_Ovrd)
    {
        /* Switch: '<S5>/Switch16' incorporates:
         *  Constant: '<S518>/Calib'
         */
        VeVTLR_b_DoorLckSts_Rcvd = KeVTLR_b_DoorLckStsRcvd_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch16' */
        VeVTLR_b_DoorLckSts_Rcvd = rtb_Merge16;
    }

    /* End of Switch: '<S5>/Switch16' */

    /* Switch: '<S5>/Switch18' incorporates:
     *  Constant: '<S545>/Calib'
     */
    if (KeVTLR_b_SRARFault_Ovrd)
    {
        /* Switch: '<S5>/Switch18' incorporates:
         *  Constant: '<S546>/Calib'
         */
        VeVTLR_b_StpCharging = KeVTLR_b_SRARFault_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch18' */
        VeVTLR_b_StpCharging = rtb_AND_le;
    }

    /* End of Switch: '<S5>/Switch18' */

    /* Switch: '<S5>/Switch17' incorporates:
     *  Constant: '<S536>/Calib'
     */
    if (KeVTLR_b_LV_SysVoltage_Low_Ovrd)
    {
        /* Switch: '<S5>/Switch17' incorporates:
         *  Constant: '<S537>/Calib'
         */
        VeVTLR_b_LV_SysVoltage_Low = KeVTLR_b_LV_SysVoltage_Low_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch17' */
        VeVTLR_b_LV_SysVoltage_Low = rtb_AND_ab;
    }

    /* End of Switch: '<S5>/Switch17' */

    /* Switch: '<S5>/Switch22' incorporates:
     *  Constant: '<S527>/Calib'
     */
    if (KeVTLR_b_FOTA_Install_Type_Ovrd)
    {
        /* Switch: '<S5>/Switch22' incorporates:
         *  Constant: '<S557>/Calib'
         */
        VeVTLR_e_FOTA_Install_Type = KeVTLR_e_FOTA_Install_Type_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch22' incorporates:
         *  Inport: '<Root>/VeCITR_e_FOTA_Install_Type'
         */
        VeVTLR_e_FOTA_Install_Type = tmpRead_c;
    }

    /* End of Switch: '<S5>/Switch22' */

    /* Switch: '<S5>/Switch23' incorporates:
     *  Constant: '<S526>/Calib'
     */
    if (KeVTLR_b_FOTA_Install_Status_Ovrd)
    {
        /* Switch: '<S5>/Switch23' incorporates:
         *  Constant: '<S556>/Calib'
         */
        VeVTLR_e_FOTA_Install_Status = KeVTLR_e_FOTA_Install_Status_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch23' incorporates:
         *  Inport: '<Root>/VeCITR_e_FOTA_Install_Status'
         */
        VeVTLR_e_FOTA_Install_Status = tmpRead_d;
    }

    /* End of Switch: '<S5>/Switch23' */

    /* Switch: '<S5>/Switch24' incorporates:
     *  Constant: '<S530>/Calib'
     */
    if (KeVTLR_b_HoodAjar_Ovrd)
    {
        /* Switch: '<S5>/Switch24' incorporates:
         *  Constant: '<S531>/Calib'
         */
        VeVTLR_b_HVFuncRejHdAjar = KeVTLR_b_HoodAjar_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch24' */
        VeVTLR_b_HVFuncRejHdAjar = rtb_OR1_kq;
    }

    /* End of Switch: '<S5>/Switch24' */

    /* Switch: '<S5>/Switch25' incorporates:
     *  Constant: '<S516>/Calib'
     */
    if (KeVTLR_b_CntctrStatus_Ovrd)
    {
        /* Switch: '<S5>/Switch25' incorporates:
         *  Constant: '<S552>/Calib'
         */
        VeVTLR_e_HV_BatCntctrStat = KeVTLR_e_CntctrStatus_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch25' incorporates:
         *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
         */
        VeVTLR_e_HV_BatCntctrStat = tmpRead_e;
    }

    /* End of Switch: '<S5>/Switch25' */

    /* Switch: '<S5>/Switch28' incorporates:
     *  Constant: '<S551>/Calib'
     */
    if (KeVTLR_b_VehSpeed_Ovrd)
    {
        /* Switch: '<S5>/Switch28' incorporates:
         *  Constant: '<S561>/Calib'
         */
        VeVTLR_v_VehSpdSigned = KeVTLR_v_VehSpeed_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch28' */
        VeVTLR_v_VehSpdSigned = Merge_2_j;
    }

    /* End of Switch: '<S5>/Switch28' */

    /* Switch: '<S5>/Switch29' incorporates:
     *  Constant: '<S549>/Calib'
     */
    if (KeVTLR_b_VehSpeedFA_Ovrd)
    {
        /* Switch: '<S5>/Switch29' incorporates:
         *  Constant: '<S550>/Calib'
         */
        VeVTLR_b_VehSpdFA = KeVTLR_b_VehSpeedFA_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch29' */
        VeVTLR_b_VehSpdFA = rtb_AND_amk;
    }

    /* End of Switch: '<S5>/Switch29' */

    /* Switch: '<S5>/Switch30' incorporates:
     *  Constant: '<S514>/Calib'
     */
    if (KeVTLR_b_CntctrOpenPndg_Ovrd)
    {
        /* Switch: '<S5>/Switch30' incorporates:
         *  Constant: '<S515>/Calib'
         */
        VeVTLR_b_BattCntctrOpenPndg = KeVTLR_b_CntctrOpenPndg_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch30' */
        VeVTLR_b_BattCntctrOpenPndg = rtb_Merge_7;
    }

    /* End of Switch: '<S5>/Switch30' */

    /* Switch: '<S5>/Switch31' incorporates:
     *  Constant: '<S543>/Calib'
     */
    if (KeVTLR_b_RemoteStart_Ovrd)
    {
        /* Switch: '<S5>/Switch31' incorporates:
         *  Constant: '<S544>/Calib'
         */
        VeVTLR_b_RmtVehStartReq = KeVTLR_b_RemoteStart_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch31' */
        VeVTLR_b_RmtVehStartReq = Merge_5;
    }

    /* End of Switch: '<S5>/Switch31' */

    /* Switch: '<S5>/Switch32' incorporates:
     *  Constant: '<S540>/Calib'
     */
    if (KeVTLR_b_PluggedIn_Ovrd)
    {
        /* Switch: '<S5>/Switch32' incorporates:
         *  Constant: '<S541>/Calib'
         */
        VeVTLR_b_PluggedIn = KeVTLR_b_PluggedIn_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch32' */
        VeVTLR_b_PluggedIn = Merge_6_o;
    }

    /* End of Switch: '<S5>/Switch32' */

    /* Switch: '<S5>/Switch33' incorporates:
     *  Constant: '<S532>/Calib'
     */
    if (KeVTLR_b_InternalLightSts_Ovrd)
    {
        /* Switch: '<S5>/Switch33' incorporates:
         *  Constant: '<S533>/Calib'
         */
        VeVTLR_b_InternalLightSts = KeVTLR_b_InternalLightSts_Val;
    }
    else
    {
        /* Switch: '<S5>/Switch33' */
        VeVTLR_b_InternalLightSts = rtb_DataStoreRead2;
    }

    /* End of Switch: '<S5>/Switch33' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VTLC'
     */
    /* Sum: '<S23>/Subtraction' incorporates:
     *  Constant: '<S35>/Calib'
     *  Sum: '<S24>/Subtraction'
     *  Sum: '<S25>/Subtraction'
     */
    rtb_Subtraction_tmp = rtb_TmpSignalConversionAtVePLTR + KeVTLR_t_OneHourAuth;

    /* DataStoreRead: '<S23>/Data Store Read2' */
    rtb_DataStoreRead2 = EeVTLR_b_V2L_PlugInAuth;

    /* If: '<S4>/If' incorporates:
     *  Constant: '<S12>/Calib'
     */
    if (KeVTLR_b_Enable_V2LOffboard)
    {
        /* Outputs for IfAction SubSystem: '<S4>/V2L_Offboard' incorporates:
         *  ActionPort: '<S17>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S139>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S145>/EdgeRising' */
        /* UnitDelay: '<S163>/Unit Delay' incorporates:
         *  UnitDelay: '<S146>/Unit Delay'
         */
        Merge_6_o = VTLR_ac_DW.UnitDelay_DSTATE_ce;

        /* Update for UnitDelay: '<S146>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_ce = VeVTLR_b_DoorLckSts_Rcvd;

        /* Switch: '<S145>/Switch1' incorporates:
         *  Constant: '<S144>/Calib'
         *  Constant: '<S145>/Constant Value'
         *  Logic: '<S145>/OR'
         *  Logic: '<S145>/OR1'
         *  Logic: '<S146>/AND'
         *  Logic: '<S146>/OR1'
         *  MinMax: '<S145>/Minimum'
         *  Sum: '<S145>/Summation'
         *  UnitDelay: '<S145>/Unit Delay'
         */
        if ((!VeVTLR_b_DoorLckSts_Rcvd) || ((VeVTLR_b_DoorLckSts_Rcvd) &&
                (!Merge_6_o)))
        {
            /* Switch: '<S145>/Switch1' incorporates:
             *  Constant: '<S145>/Constant Value1'
             */
            rtb_Switch1_p5 = 0U;
        }
        else if (KeVTLR_Cnt_Dbnc_DoorLockSts < ((uint16)(((uint32)
                    VTLR_ac_DW.UnitDelay_DSTATE_c) + 1U)))
        {
            /* MinMax: '<S145>/Minimum' incorporates:
             *  Constant: '<S144>/Calib'
             *  Switch: '<S145>/Switch1'
             */
            rtb_Switch1_p5 = KeVTLR_Cnt_Dbnc_DoorLockSts;
        }
        else
        {
            /* Switch: '<S145>/Switch1' incorporates:
             *  Constant: '<S145>/Constant Value'
             *  MinMax: '<S145>/Minimum'
             *  Sum: '<S145>/Summation'
             *  UnitDelay: '<S145>/Unit Delay'
             */
            rtb_Switch1_p5 = (uint16)(((uint32)VTLR_ac_DW.UnitDelay_DSTATE_c) +
                1U);
        }

        /* End of Switch: '<S145>/Switch1' */
        /* End of Outputs for SubSystem: '<S145>/EdgeRising' */

        /* Update for UnitDelay: '<S145>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_c = rtb_Switch1_p5;

        /* Switch: '<S139>/Switch' incorporates:
         *  Constant: '<S144>/Calib'
         *  DataStoreWrite: '<S139>/Data Store Write1'
         *  Logic: '<S145>/AND'
         *  RelationalOperator: '<S145>/Greater  Than'
         *  Switch: '<S5>/Switch12'
         */
        if ((VeVTLR_b_DoorLckSts_Rcvd) && (rtb_Switch1_p5 >=
                KeVTLR_Cnt_Dbnc_DoorLockSts))
        {
            VTLR_ac_DW.NeVTLR_e_DoorLastSts = VeVTLR_e_DoorLockSts;
        }

        /* End of Switch: '<S139>/Switch' */
        /* End of Outputs for SubSystem: '<S139>/Turn On Delay Sample' */

        /* RelationalOperator: '<S139>/Not Equal2' incorporates:
         *  DataStoreWrite: '<S139>/Data Store Write1'
         *  RelationalOperator: '<S139>/Not Equal3'
         *  Switch: '<S139>/Switch'
         */
        tmpRead_8 = VTLR_ac_DW.NeVTLR_e_DoorLastSts;

        /* Merge: '<S4>/Merge_6' incorporates:
         *  Constant: '<S140>/Constant'
         *  Constant: '<S141>/Constant'
         *  Constant: '<S142>/Constant'
         *  Constant: '<S143>/Constant'
         *  Logic: '<S139>/Logical1'
         *  Logic: '<S139>/Logical2'
         *  Logic: '<S139>/Logical3'
         *  Logic: '<S139>/Logical4'
         *  RelationalOperator: '<S139>/Not Equal'
         *  RelationalOperator: '<S139>/Not Equal1'
         *  RelationalOperator: '<S139>/Not Equal2'
         *  RelationalOperator: '<S139>/Not Equal3'
         *  Switch: '<S5>/Switch15'
         *  UnitDelay: '<S139>/Unit Delay'
         */
        Merge_6_o = ((((uint32)VeVTLR_e_EVSEPilotSts) == CeOBCR_e_NO_EVSE_OBCM) &&
                     (((((uint32)VTLR_ac_DW.UnitDelay_DSTATE_p4) == CeOBCR_e_LKD)
                       && ((((uint32)tmpRead_8) == CeOBCR_e_Drv_Dr_Unlkd) ||
                           (((uint32)tmpRead_8) == CeOBCR_e_All_Dr_Unlkd))) ||
                      (VeVTLR_b_DrvDrUnlcking)));

        /* Outputs for Atomic SubSystem: '<S136>/Count Down Reset Enabled' */
        /* Switch: '<S147>/Switch1' */
        if (rtb_TmpSignalConversionAtVeHP_b)
        {
            /* Switch: '<S147>/Switch1' incorporates:
             *  Constant: '<S153>/Calib'
             */
            rtb_Switch1_p5 = KeVTLR_Cnt_StartUpdateRTC;
        }
        else
        {
            /* Switch: '<S147>/Switch1' incorporates:
             *  Switch: '<S147>/Switch2'
             *  UnitDelay: '<S147>/Unit Delay'
             */
            rtb_Switch1_p5 = VTLR_ac_DW.UnitDelay_DSTATE_p0;
        }

        /* End of Switch: '<S147>/Switch1' */

        /* Update for UnitDelay: '<S147>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_p0 = rtb_Switch1_p5;

        /* End of Outputs for SubSystem: '<S136>/Count Down Reset Enabled' */

        /* RelationalOperator: '<S178>/Comparison6' incorporates:
         *  Constant: '<S196>/Constant'
         *  SignalConversion generated from: '<S1>/VeDMDR_e_TurtleMdSts'
         */
        VeVTLR_b_NoTurtleMd = (((uint32)rtb_TmpSignalConversionAtVeDMDR) ==
                               CeDMDR_e_No_Turtle_Mode);

        /* RelationalOperator: '<S177>/Comparison2' incorporates:
         *  Constant: '<S188>/Calib'
         *  Sum: '<S177>/Sum'
         */
        rtb_TmpSignalConversionAtVeHP_b = (VeVTLR_P_BattLTMaxLim >
            (VeVTLR_P_HV_AccPwr + KeVTLR_P_DschrgPwrOffset));

        /* Outputs for Atomic SubSystem: '<S177>/Turn Off Delay Sample Modified' */
        /* Outputs for Atomic SubSystem: '<S194>/EdgeFalling1' */
        /* Logic: '<S195>/AND' incorporates:
         *  Logic: '<S195>/OR1'
         *  UnitDelay: '<S195>/Unit Delay'
         */
        Merge_5 = ((!rtb_TmpSignalConversionAtVeHP_b) &&
                   (VTLR_ac_DW.UnitDelay_DSTATE_o3));

        /* Update for UnitDelay: '<S195>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_o3 = rtb_TmpSignalConversionAtVeHP_b;

        /* End of Outputs for SubSystem: '<S194>/EdgeFalling1' */

        /* Switch: '<S194>/Switch' incorporates:
         *  MinMax: '<S194>/Minimum1'
         *  UnitDelay: '<S194>/Unit Delay'
         */
        if (Merge_5)
        {
            /* Switch: '<S194>/Switch' incorporates:
             *  Constant: '<S187>/Calib'
             */
            rtb_Switch_av = KeVTLR_Cnt_PwrLtCond_Dbnc;
        }
        else
        {
            if (((sint32)VTLR_ac_DW.UnitDelay_DSTATE_e3) > 1)
            {
                /* MinMax: '<S194>/Minimum1' incorporates:
                 *  UnitDelay: '<S194>/Unit Delay'
                 */
                rtb_Switch_av = VTLR_ac_DW.UnitDelay_DSTATE_e3;
            }
            else
            {
                /* MinMax: '<S194>/Minimum1' */
                rtb_Switch_av = 1U;
            }

            /* Switch: '<S194>/Switch' incorporates:
             *  Constant: '<S194>/Constant Value'
             *  Sum: '<S194>/Summation'
             */
            rtb_Switch_av = (uint16)((sint32)(((sint32)rtb_Switch_av) - 1));
        }

        /* End of Switch: '<S194>/Switch' */

        /* Logic: '<S194>/AND' incorporates:
         *  Constant: '<S194>/Constant Value2'
         *  RelationalOperator: '<S194>/Greater  Than'
         */
        VeVTLR_b_PwrLtChk = (rtb_TmpSignalConversionAtVeHP_b || (((sint32)
                               rtb_Switch_av) > 0));

        /* Update for UnitDelay: '<S194>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_e3 = rtb_Switch_av;

        /* End of Outputs for SubSystem: '<S177>/Turn Off Delay Sample Modified' */

        /* Outputs for Atomic SubSystem: '<S177>/Hysteresis1' */
        /* Switch: '<S186>/Switch1' incorporates:
         *  Constant: '<S190>/Calib'
         *  RelationalOperator: '<S186>/Greater  Than'
         */
        if (VeVTLR_Pct_HVBatSOC > KeVTLR_Pct_StpDschrgSOCElcMd_RSP)
        {
            /* Switch: '<S186>/Switch1' incorporates:
             *  Constant: '<S186>/Constant Value'
             */
            rtb_TmpSignalConversionAtVeHP_b = true;
        }
        else
        {
            /* Switch: '<S186>/Switch1' incorporates:
             *  Constant: '<S189>/Calib'
             *  RelationalOperator: '<S186>/Greater  Than1'
             *  UnitDelay: '<S186>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeHP_b = ((VeVTLR_Pct_HVBatSOC >=
                KeVTLR_Pct_StpDschrgSOCElcMd_LSP) &&
                (VTLR_ac_DW.UnitDelay_DSTATE_dj));
        }

        /* End of Switch: '<S186>/Switch1' */

        /* Update for UnitDelay: '<S186>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_dj = rtb_TmpSignalConversionAtVeHP_b;

        /* End of Outputs for SubSystem: '<S177>/Hysteresis1' */

        /* Outputs for Atomic SubSystem: '<S177>/Hysteresis' */
        /* Switch: '<S185>/Switch1' incorporates:
         *  Constant: '<S192>/Calib'
         *  RelationalOperator: '<S185>/Greater  Than'
         */
        if (VeVTLR_Pct_HVBatSOC > KeVTLR_Pct_StpDschrgSOC_RSP)
        {
            /* Switch: '<S185>/Switch1' incorporates:
             *  Constant: '<S185>/Constant Value'
             */
            VeVTLR_b_SOCChk = true;
        }
        else
        {
            /* Switch: '<S185>/Switch1' incorporates:
             *  Constant: '<S191>/Calib'
             *  RelationalOperator: '<S185>/Greater  Than1'
             *  UnitDelay: '<S185>/Unit Delay'
             */
            VeVTLR_b_SOCChk = ((VeVTLR_Pct_HVBatSOC >=
                                KeVTLR_Pct_StpDschrgSOC_LSP) &&
                               (VTLR_ac_DW.UnitDelay_DSTATE_ir));
        }

        /* End of Switch: '<S185>/Switch1' */

        /* Update for UnitDelay: '<S185>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_ir = VeVTLR_b_SOCChk;

        /* End of Outputs for SubSystem: '<S177>/Hysteresis' */

        /* Switch: '<S177>/Switch2' incorporates:
         *  Constant: '<S184>/Constant'
         *  Constant: '<S193>/Calib'
         *  Logic: '<S177>/Logical1'
         *  Logic: '<S177>/Logical2'
         *  Logic: '<S177>/Logical5'
         *  RelationalOperator: '<S177>/Relational Operator2'
         *  SignalConversion generated from: '<S1>/VeVTXR_e_PowerPanelMd'
         */
        if ((((uint32)rtb_TmpSignalConversionAtVeVTXR) != CeVTXR_e_ElectricMd) &&
            (rtb_TmpSignalConversionAtVeHPMR || (!KeVTLR_b_OvrdPSACond_PPMd)))
        {
            rtb_TmpSignalConversionAtVeHP_b = VeVTLR_b_SOCChk;
        }

        /* End of Switch: '<S177>/Switch2' */

        /* Logic: '<S132>/Logical' incorporates:
         *  Logic: '<S177>/Logical'
         */
        VeVTLR_b_Enable_Discharge = (((VeVTLR_b_EnblDschrg) &&
            (VeVTLR_b_NoTurtleMd)) && ((VeVTLR_b_PwrLtChk) &&
            rtb_TmpSignalConversionAtVeHP_b));

        /* Outputs for Atomic SubSystem: '<S137>/EdgeRising2' */
        /* Logic: '<S164>/AND' incorporates:
         *  Logic: '<S164>/OR1'
         *  UnitDelay: '<S164>/Unit Delay'
         */
        rtb_Merge_7 = ((VeVTLR_b_Enable_Discharge) &&
                       (!VTLR_ac_DW.UnitDelay_DSTATE_hx));

        /* Update for UnitDelay: '<S164>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_hx = VeVTLR_b_Enable_Discharge;

        /* End of Outputs for SubSystem: '<S137>/EdgeRising2' */

        /* Outputs for Atomic SubSystem: '<S137>/EdgeRising4' */
        /* Logic: '<S166>/OR1' incorporates:
         *  UnitDelay: '<S166>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeHP_b = !VTLR_ac_DW.UnitDelay_DSTATE_gv;

        /* Update for UnitDelay: '<S166>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_gv = VeVTLR_b_SecureConnV2L;

        /* End of Outputs for SubSystem: '<S137>/EdgeRising4' */

        /* Outputs for Atomic SubSystem: '<S137>/Hysteresis' */
        /* Switch: '<S169>/Switch1' incorporates:
         *  Constant: '<S175>/Calib'
         *  RelationalOperator: '<S169>/Greater  Than'
         */
        if (VeVTLR_Pct_HVBatSOC > KeVTLR_Pct_SOC2RstDschrg_RSP)
        {
            /* Switch: '<S169>/Switch1' incorporates:
             *  Constant: '<S169>/Constant Value'
             */
            Merge_5 = true;
        }
        else
        {
            /* Switch: '<S169>/Switch1' incorporates:
             *  Constant: '<S174>/Calib'
             *  RelationalOperator: '<S169>/Greater  Than1'
             *  UnitDelay: '<S169>/Unit Delay'
             */
            Merge_5 = ((VeVTLR_Pct_HVBatSOC >= KeVTLR_Pct_SOC2RstDschrg_LSP) &&
                       (VTLR_ac_DW.UnitDelay_DSTATE_o1));
        }

        /* End of Switch: '<S169>/Switch1' */

        /* Update for UnitDelay: '<S169>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_o1 = Merge_5;

        /* End of Outputs for SubSystem: '<S137>/Hysteresis' */

        /* Outputs for Atomic SubSystem: '<S137>/EdgeRising3' */
        /* Logic: '<S165>/AND' incorporates:
         *  Logic: '<S165>/OR1'
         *  UnitDelay: '<S165>/Unit Delay'
         */
        VeVTLR_b_SOCRstDschrg = (Merge_5 && (!VTLR_ac_DW.UnitDelay_DSTATE_hw));

        /* Update for UnitDelay: '<S165>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_hw = Merge_5;

        /* End of Outputs for SubSystem: '<S137>/EdgeRising3' */

        /* Outputs for Atomic SubSystem: '<S137>/Hysteresis1' */
        /* Switch: '<S170>/Switch1' incorporates:
         *  Constant: '<S173>/Calib'
         *  RelationalOperator: '<S170>/Greater  Than'
         */
        if (VeVTLR_P_BattLTMaxLim > KeVTLR_Pct_PwrLt2RstDschrg_RSP)
        {
            /* Switch: '<S170>/Switch1' incorporates:
             *  Constant: '<S170>/Constant Value'
             */
            Merge_5 = true;
        }
        else
        {
            /* Switch: '<S170>/Switch1' incorporates:
             *  Constant: '<S172>/Calib'
             *  RelationalOperator: '<S170>/Greater  Than1'
             *  UnitDelay: '<S170>/Unit Delay'
             */
            Merge_5 = ((VeVTLR_P_BattLTMaxLim >= KeVTLR_Pct_PwrLt2RstDschrg_LSP)
                       && (VTLR_ac_DW.UnitDelay_DSTATE_ld));
        }

        /* End of Switch: '<S170>/Switch1' */

        /* Update for UnitDelay: '<S170>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_ld = Merge_5;

        /* End of Outputs for SubSystem: '<S137>/Hysteresis1' */

        /* Outputs for Atomic SubSystem: '<S137>/EdgeRising5' */
        /* Logic: '<S167>/AND' incorporates:
         *  Logic: '<S167>/OR1'
         *  UnitDelay: '<S167>/Unit Delay'
         */
        VeVTLR_b_PwrLtRstDschrg = (Merge_5 && (!VTLR_ac_DW.UnitDelay_DSTATE_gd));

        /* Update for UnitDelay: '<S167>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_gd = Merge_5;

        /* End of Outputs for SubSystem: '<S137>/EdgeRising5' */

        /* Outputs for Atomic SubSystem: '<S137>/EdgeRising4' */
        /* Logic: '<S137>/Logical3' incorporates:
         *  Logic: '<S166>/AND'
         *  RelationalOperator: '<S137>/Not Equal2'
         *  Switch: '<S5>/Switch1'
         *  UnitDelay: '<S137>/Unit Delay'
         */
        VeVTLR_b_RstDschrg = (((((VTLR_ac_DW.UnitDelay_DSTATE_mj !=
            VeVTLR_e_PMM_PowerMode) || rtb_Merge_7) || ((VeVTLR_b_SecureConnV2L)
            && rtb_TmpSignalConversionAtVeHP_b)) || (VeVTLR_b_SOCRstDschrg)) ||
                              (VeVTLR_b_PwrLtRstDschrg));

        /* End of Outputs for SubSystem: '<S137>/EdgeRising4' */

        /* Product: '<S176>/Product' */
        VeVTLR_P_V2LPwrConsumption = VeVTLR_I_BattSide_Curr *
            VeVTLR_U_BattSideVolt;

        /* RelationalOperator: '<S176>/Comparison2' incorporates:
         *  Constant: '<S180>/Calib'
         */
        rtb_TmpSignalConversionAtVeHP_b = (VeVTLR_P_V2LPwrConsumption >
            KeVTLR_P_MinPwrLoadConn);

        /* Outputs for Atomic SubSystem: '<S176>/Turn On Delay Time' */
        /* Outputs for Atomic SubSystem: '<S182>/EdgeRising' */
        /* Logic: '<S183>/AND' incorporates:
         *  Logic: '<S183>/OR1'
         *  UnitDelay: '<S183>/Unit Delay'
         */
        Merge_5 = (rtb_TmpSignalConversionAtVeHP_b &&
                   (!VTLR_ac_DW.UnitDelay_DSTATE_co));

        /* Update for UnitDelay: '<S183>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_co = rtb_TmpSignalConversionAtVeHP_b;

        /* End of Outputs for SubSystem: '<S182>/EdgeRising' */

        /* Logic: '<S182>/OR1' incorporates:
         *  Logic: '<S182>/AND'
         */
        tmpRead_2 = !rtb_TmpSignalConversionAtVeHP_b;

        /* Switch: '<S182>/Switch1' incorporates:
         *  Logic: '<S182>/OR'
         *  Logic: '<S182>/OR1'
         */
        if (tmpRead_2 || Merge_5)
        {
            /* Switch: '<S182>/Switch1' incorporates:
             *  Constant: '<S182>/Constant Value1'
             */
            Merge_2_j = 0.0F;
        }
        else
        {
            /* Switch: '<S182>/Switch1' incorporates:
             *  Constant: '<S179>/Calib'
             *  Constant: '<S181>/Calib'
             *  MinMax: '<S182>/Minimum'
             *  Sum: '<S182>/Summation'
             *  UnitDelay: '<S182>/Unit Delay'
             */
            Merge_2_j = fminf(KeVTLR_t_NoLoadConn_Dly, HeVTLR_t_dT +
                              VTLR_ac_DW.UnitDelay_DSTATE_k);
        }

        /* End of Switch: '<S182>/Switch1' */

        /* Update for UnitDelay: '<S182>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_k = Merge_2_j;

        /* Logic: '<S176>/Logical1' incorporates:
         *  Constant: '<S181>/Calib'
         *  Logic: '<S182>/AND'
         *  RelationalOperator: '<S182>/Greater  Than'
         */
        rtb_TmpSignalConversionAtVeHP_b = (tmpRead_2 || (Merge_2_j <
            KeVTLR_t_NoLoadConn_Dly));

        /* End of Outputs for SubSystem: '<S176>/Turn On Delay Time' */

        /* Sum: '<S136>/Sum' incorporates:
         *  UnitDelay: '<S136>/Unit Delay1'
         */
        rtb_Sum = rtb_TmpSignalConversionAtVePLTR - VTLR_ac_DW.UnitDelay1_DSTATE;

        /* Outputs for Atomic SubSystem: '<S136>/Count Down Reset Enabled' */
        /* Logic: '<S136>/Logical Operator1' incorporates:
         *  Constant: '<S147>/Constant Value2'
         *  Constant: '<S154>/Calib'
         *  Constant: '<S155>/Calib'
         *  Logic: '<S136>/Logical Operator'
         *  Logic: '<S136>/Logical Operator2'
         *  RelationalOperator: '<S136>/Relational Operator'
         *  RelationalOperator: '<S136>/Relational Operator1'
         *  RelationalOperator: '<S147>/Greater  Than1'
         */
        Merge_5 = (((rtb_Sum < KeVTLR_t_RTC_Diff_UpperVal) && (rtb_Sum >
                     KeVTLR_t_RTC_Diff_LowerVal)) || (((sint32)rtb_Switch1_p5) <=
                    0));

        /* End of Outputs for SubSystem: '<S136>/Count Down Reset Enabled' */

        /* Outputs for Atomic SubSystem: '<S136>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S159>/EdgeRising' */
        /* Logic: '<S160>/AND' incorporates:
         *  Logic: '<S160>/OR1'
         *  UnitDelay: '<S160>/Unit Delay'
         */
        rtb_AND_amk = (Merge_5 && (!VTLR_ac_DW.UnitDelay_DSTATE_fw));

        /* Update for UnitDelay: '<S160>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_fw = Merge_5;

        /* End of Outputs for SubSystem: '<S159>/EdgeRising' */

        /* Switch: '<S159>/Switch1' incorporates:
         *  Constant: '<S152>/Calib'
         *  Constant: '<S159>/Constant Value'
         *  Logic: '<S159>/OR'
         *  Logic: '<S159>/OR1'
         *  MinMax: '<S159>/Minimum'
         *  Sum: '<S159>/Summation'
         *  UnitDelay: '<S159>/Unit Delay'
         */
        if ((!Merge_5) || rtb_AND_amk)
        {
            /* Switch: '<S159>/Switch1' incorporates:
             *  Constant: '<S159>/Constant Value1'
             */
            rtb_Switch1_p5 = 0U;
        }
        else if (KeVTLR_Cnt_RTC_StrtUpdt_Dly < ((uint16)(((uint32)
                    VTLR_ac_DW.UnitDelay_DSTATE_j5) + 1U)))
        {
            /* MinMax: '<S159>/Minimum' incorporates:
             *  Constant: '<S152>/Calib'
             *  Switch: '<S159>/Switch1'
             */
            rtb_Switch1_p5 = KeVTLR_Cnt_RTC_StrtUpdt_Dly;
        }
        else
        {
            /* Switch: '<S159>/Switch1' incorporates:
             *  Constant: '<S159>/Constant Value'
             *  MinMax: '<S159>/Minimum'
             *  Sum: '<S159>/Summation'
             *  UnitDelay: '<S159>/Unit Delay'
             */
            rtb_Switch1_p5 = (uint16)(((uint32)VTLR_ac_DW.UnitDelay_DSTATE_j5) +
                1U);
        }

        /* End of Switch: '<S159>/Switch1' */

        /* Update for UnitDelay: '<S159>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_j5 = rtb_Switch1_p5;

        /* End of Outputs for SubSystem: '<S136>/Turn On Delay Sample' */

        /* Chart: '<S136>/Discharging_SF1' incorporates:
         *  Constant: '<S152>/Calib'
         *  DataStoreRead: '<S23>/Data Store Read2'
         *  Logic: '<S159>/AND'
         *  RelationalOperator: '<S159>/Greater  Than'
         *  Switch: '<S5>/Switch10'
         *  UnitDelay: '<S136>/Unit Delay'
         */
        /* Gateway: VTLR_MedTED/VTLC/V2L_Offboard/Discharging/DschrgSF/Discharging_SF1 */
        VTLR_ac_DW.VeVTLR_b_NoLoadConn_prev_f =
            VTLR_ac_DW.VeVTLR_b_NoLoadConn_start_p;
        VTLR_ac_DW.VeVTLR_b_NoLoadConn_start_p = rtb_TmpSignalConversionAtVeHP_b;

        /* During: VTLR_MedTED/VTLC/V2L_Offboard/Discharging/DschrgSF/Discharging_SF1 */
        if (((uint32)VTLR_ac_DW.is_active_c2_VTLR_ac) == 0U)
        {
            VTLR_ac_DW.VeVTLR_b_NoLoadConn_prev_f =
                rtb_TmpSignalConversionAtVeHP_b;

            /* Entry: VTLR_MedTED/VTLC/V2L_Offboard/Discharging/DschrgSF/Discharging_SF1 */
            VTLR_ac_DW.is_active_c2_VTLR_ac = 1U;

            /* Entry Internal: VTLR_MedTED/VTLC/V2L_Offboard/Discharging/DschrgSF/Discharging_SF1 */
            /* Transition: '<S148>:7' */
            VeVTLR_k_NDCR = 0U;
            VTLR_ac_DW.is_c2_VTLR_ac = VTLR_ac_IN_Initial_State;

            /* Entry 'Initial_State': '<S148>:1' */
            VeVTLR_e_DschrgSt = CeVTLR_e_DschrgInit;
            VeVTLR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
            VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k = 0.0F;
            VeVTLR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
            VeVTLR_b_Dschrg_S2Cmd = false;
            VeVTLR_b_DschrgRdy4ShtDwn = false;
        }
        else
        {
            guard1 = false;
            guard2 = false;
            guard3 = false;
            guard4 = false;
            switch (VTLR_ac_DW.is_c2_VTLR_ac)
            {
              case VTLR_ac_IN_BPCM_Ready:
                VeVTLR_e_DschrgSt = CeVTLR_e_DschrgBPCMChk;

                /* During 'BPCM_Ready': '<S148>:99' */
                /* Transition: '<S148>:191' */
                if (VeVTLR_b_BPCMRdy)
                {
                    /* Transition: '<S148>:100' */
                    VTLR_ac_DW.is_c2_VTLR_ac = VTLR_ac_IN_Discharging_S2_Close;

                    /* Entry 'Discharging_S2_Close': '<S148>:21' */
                    VeVTLR_b_Dschrg_S2Cmd = true;
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k = 0.0F;
                    VeVTLR_e_DschrgSt = CeVTLR_e_DschrgClsS2;
                }
                else
                {
                    /* Transition: '<S148>:193' */
                    if ((!VeVTLR_b_BPCMRdy) &&
                            (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k >
                             KeVTLR_t_BPCMRdy_Tmot))
                    {
                        /* Transition: '<S148>:103' */
                        VeVTLR_k_NDCR = 2U;

                        /* Transition: '<S148>:108' */
                        guard1 = true;
                    }
                    else
                    {
                        /* Transition: '<S148>:197' */
                        if (!VeVTLR_b_Enable_Discharge)
                        {
                            /* Transition: '<S148>:106' */
                            VeVTLR_k_NDCR = 1U;
                            guard1 = true;
                        }
                        else
                        {
                            /* Transition: '<S148>:221' */
                            VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k += HeVTLR_t_dT;
                        }
                    }
                }
                break;

              case VTLR_ac_IN_Discharging:
                VeVTLR_e_DschrgSt = CeVTLR_e_DschrgActvSt;
                VeVTLR_e_DisChrgSysSts = CeVTLR_e_DschrgActv;

                /* During 'Discharging': '<S148>:12' */
                /* Transition: '<S148>:242' */
                if (!VeVTLR_b_Enable_Discharge)
                {
                    /* Transition: '<S148>:254' */
                    /* Transition: '<S148>:253' */
                    VeVTLR_k_NDCR = 1U;

                    /* Transition: '<S148>:263' */
                    /* Transition: '<S148>:276' */
                    /* Transition: '<S148>:280' */
                    /* Transition: '<S148>:153' */
                    guard2 = true;
                }
                else
                {
                    /* Transition: '<S148>:261' */
                    if ((!VeVTLR_b_BPCMRdy) &&
                            (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k >
                             KeVTLR_t_BPCMRdy_Tmot))
                    {
                        /* Transition: '<S148>:134' */
                        VeVTLR_k_NDCR = 2U;

                        /* Transition: '<S148>:276' */
                        /* Transition: '<S148>:280' */
                        /* Transition: '<S148>:153' */
                        guard2 = true;
                    }
                    else
                    {
                        /* Transition: '<S148>:274' */
                        if ((!VeVTLR_b_J1772_S2_Sts) &&
                                (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k >=
                                 KeVTLR_t_DschrgS2Cls_Tmot))
                        {
                            /* Transition: '<S148>:277' */
                            VeVTLR_k_NDCR = 3U;

                            /* Transition: '<S148>:280' */
                            /* Transition: '<S148>:153' */
                            guard2 = true;
                        }
                        else
                        {
                            /* Transition: '<S148>:278' */
                            if ((((uint32)VeVTLR_e_OBCMd) !=
                                    CeOBCR_e_Dischrg_OBCM) &&
                                    (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k >=
                                     KeVTLR_t_DschrgMdOBCM_Tmot))
                            {
                                /* Transition: '<S148>:279' */
                                VeVTLR_k_NDCR = 4U;

                                /* Transition: '<S148>:153' */
                                guard2 = true;
                            }
                            else
                            {
                                /* Transition: '<S148>:281' */
                                if ((VTLR_ac_DW.VeVTLR_b_NoLoadConn_prev_f !=
                                        VTLR_ac_DW.VeVTLR_b_NoLoadConn_start_p) &&
                                    (!VTLR_ac_DW.VeVTLR_b_NoLoadConn_prev_f))
                                {
                                    /* Transition: '<S148>:173' */
                                    VTLR_ac_DW.is_c2_VTLR_ac =
                                        VTLR_ac_IN_Discharging;

                                    /* Entry 'Discharging': '<S148>:12' */
                                    VeVTLR_e_DschrgSt = CeVTLR_e_DschrgActvSt;
                                    VeVTLR_e_DisChrgSysSts = CeVTLR_e_DschrgActv;
                                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k = 0.0F;
                                }
                                else
                                {
                                    /* Transition: '<S148>:283' */
                                    if (rtb_TmpSignalConversionAtVeHP_b &&
                                            (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k >
                                             KeVTLR_t_NoLoad_Tmot))
                                    {
                                        /* Transition: '<S148>:287' */
                                        /* Transition: '<S148>:288' */
                                        VeVTLR_k_NDCR = 5U;
                                        guard2 = true;
                                    }
                                    else
                                    {
                                        VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k +=
                                            HeVTLR_t_dT;
                                    }
                                }
                            }
                        }
                    }
                }
                break;

              case VTLR_ac_IN_Discharging_Mode_Req:
                VeVTLR_e_OBC_MdRq = CeOBCR_e_Dischrg_OBCMdRq;
                VeVTLR_e_DschrgSt = CeVTLR_e_DschrgOBCMd;

                /* During 'Discharging_Mode_Req': '<S148>:90' */
                /* Transition: '<S148>:208' */
                if (((uint32)VeVTLR_e_OBCMd) == CeOBCR_e_Dischrg_OBCM)
                {
                    /* Transition: '<S148>:93' */
                    VTLR_ac_DW.is_c2_VTLR_ac = VTLR_ac_IN_Discharging;

                    /* Entry 'Discharging': '<S148>:12' */
                    VeVTLR_e_DschrgSt = CeVTLR_e_DschrgActvSt;
                    VeVTLR_e_DisChrgSysSts = CeVTLR_e_DschrgActv;
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k = 0.0F;
                }
                else
                {
                    /* Transition: '<S148>:211' */
                    if (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k >=
                            KeVTLR_t_DschrgMdOBCM_Tmot)
                    {
                        /* Transition: '<S148>:96' */
                        VeVTLR_k_NDCR = 4U;

                        /* Transition: '<S148>:149' */
                        /* Transition: '<S148>:150' */
                        /* Transition: '<S148>:128' */
                        guard3 = true;
                    }
                    else
                    {
                        /* Transition: '<S148>:227' */
                        if (!VeVTLR_b_Enable_Discharge)
                        {
                            /* Transition: '<S148>:119' */
                            VeVTLR_k_NDCR = 1U;

                            /* Transition: '<S148>:150' */
                            /* Transition: '<S148>:128' */
                            guard3 = true;
                        }
                        else
                        {
                            /* Transition: '<S148>:228' */
                            if ((!VeVTLR_b_BPCMRdy) &&
                                    (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k >
                                     KeVTLR_t_BPCMRdy_Tmot))
                            {
                                /* Transition: '<S148>:121' */
                                VeVTLR_k_NDCR = 2U;

                                /* Transition: '<S148>:128' */
                                guard3 = true;
                            }
                            else
                            {
                                /* Transition: '<S148>:126' */
                                if ((!VeVTLR_b_J1772_S2_Sts) &&
                                        (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k >=
                                         KeVTLR_t_DschrgS2Cls_Tmot))
                                {
                                    /* Transition: '<S148>:129' */
                                    VeVTLR_k_NDCR = 3U;
                                    guard3 = true;
                                }
                                else
                                {
                                    /* Transition: '<S148>:230' */
                                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k +=
                                        HeVTLR_t_dT;
                                }
                            }
                        }
                    }
                }
                break;

              case VTLR_ac_IN_Discharging_S2_Close:
                VeVTLR_b_Dschrg_S2Cmd = true;
                VeVTLR_e_DschrgSt = CeVTLR_e_DschrgClsS2;

                /* During 'Discharging_S2_Close': '<S148>:21' */
                /* Transition: '<S148>:201' */
                if (VeVTLR_b_J1772_S2_Sts)
                {
                    /* Transition: '<S148>:92' */
                    VTLR_ac_DW.is_c2_VTLR_ac = VTLR_ac_IN_Discharging_Mode_Req;

                    /* Entry 'Discharging_Mode_Req': '<S148>:90' */
                    VeVTLR_e_OBC_MdRq = CeOBCR_e_Dischrg_OBCMdRq;
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k = 0.0F;
                    VeVTLR_e_DschrgSt = CeVTLR_e_DschrgOBCMd;
                }
                else
                {
                    /* Transition: '<S148>:203' */
                    if ((!VeVTLR_b_J1772_S2_Sts) &&
                            (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k >=
                             KeVTLR_t_DschrgS2Cls_Tmot))
                    {
                        /* Transition: '<S148>:71' */
                        VeVTLR_k_NDCR = 3U;

                        /* Transition: '<S148>:147' */
                        /* Transition: '<S148>:148' */
                        guard4 = true;
                    }
                    else
                    {
                        /* Transition: '<S148>:224' */
                        if (!VeVTLR_b_Enable_Discharge)
                        {
                            /* Transition: '<S148>:115' */
                            VeVTLR_k_NDCR = 1U;

                            /* Transition: '<S148>:148' */
                            guard4 = true;
                        }
                        else
                        {
                            /* Transition: '<S148>:225' */
                            if ((!VeVTLR_b_BPCMRdy) &&
                                    (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k >
                                     KeVTLR_t_BPCMRdy_Tmot))
                            {
                                /* Transition: '<S148>:113' */
                                VeVTLR_k_NDCR = 2U;
                                guard4 = true;
                            }
                            else
                            {
                                /* Transition: '<S148>:205' */
                                VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k += HeVTLR_t_dT;
                            }
                        }
                    }
                }
                break;

              case VTLR_ac_IN_E_Stop:
                VeVTLR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
                VeVTLR_b_Dschrg_S2Cmd = false;
                VeVTLR_e_DschrgSt = CeVTLR_e_DschrgEStp;
                VeVTLR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;

                /* During 'E_Stop': '<S148>:44' */
                /* Transition: '<S148>:35' */
                if (VTLR_ac_DW.UnitDelay_DSTATE_pk)
                {
                    /* Transition: '<S148>:78' */
                    VTLR_ac_DW.is_c2_VTLR_ac = VTLR_ac_IN_Shut_Down;

                    /* Entry 'Shut_Down': '<S148>:76' */
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k = 0.0F;
                    VeVTLR_b_DschrgRdy4ShtDwn = true;
                    VeVTLR_e_DschrgSt = CeVTLR_e_DschrgShtDwn;
                }
                else
                {
                    /* Transition: '<S148>:145' */
                    /* Transition: '<S148>:146' */
                    if (VeVTLR_b_RstDschrg)
                    {
                        /* Transition: '<S148>:178' */
                        /* Transition: '<S148>:80' */
                        /* Transition: '<S148>:47' */
                        /* Transition: '<S148>:75' */
                        VTLR_ac_DW.is_c2_VTLR_ac = VTLR_ac_IN_Initial_State;

                        /* Entry 'Initial_State': '<S148>:1' */
                        VeVTLR_e_DschrgSt = CeVTLR_e_DschrgInit;
                        VeVTLR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
                        VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k = 0.0F;
                        VeVTLR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
                        VeVTLR_b_Dschrg_S2Cmd = false;
                        VeVTLR_b_DschrgRdy4ShtDwn = false;
                    }
                    else
                    {
                        /* Transition: '<S148>:182' */
                        VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k += HeVTLR_t_dT;
                    }
                }
                break;

              case VTLR_ac_IN_Initial_State:
                VeVTLR_e_DschrgSt = CeVTLR_e_DschrgInit;
                VeVTLR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
                VeVTLR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
                VeVTLR_b_Dschrg_S2Cmd = false;
                VeVTLR_b_DschrgRdy4ShtDwn = false;

                /* Outputs for Atomic SubSystem: '<S136>/Turn On Delay Sample' */
                /* During 'Initial_State': '<S148>:1' */
                /* Transition: '<S148>:184' */
                if ((((Merge_5 && (rtb_Switch1_p5 >= KeVTLR_Cnt_RTC_StrtUpdt_Dly))
                      && (VeVTLR_b_Enable_Discharge)) &&
                        (EeVTLR_b_V2L_PlugInAuth)) && (((uint32)VeVTLR_e_OBCMd) ==
                     CeOBCR_e_Idle_OBCM))
                {
                    /* Transition: '<S148>:22' */
                    VTLR_ac_DW.is_c2_VTLR_ac = VTLR_ac_IN_BPCM_Ready;

                    /* Entry 'BPCM_Ready': '<S148>:99' */
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k = 0.0F;
                    VeVTLR_e_DschrgSt = CeVTLR_e_DschrgBPCMChk;
                }
                else
                {
                    /* Transition: '<S148>:186' */
                    if (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k >=
                            KeVTLR_t_InitSts_Tmot)
                    {
                        /* Transition: '<S148>:70' */
                        VeVTLR_k_NDCR = 1U;

                        /* Transition: '<S148>:102' */
                        /* Transition: '<S148>:108' */
                        /* Transition: '<S148>:104' */
                        /* Transition: '<S148>:147' */
                        /* Transition: '<S148>:148' */
                        /* Transition: '<S148>:95' */
                        /* Transition: '<S148>:149' */
                        /* Transition: '<S148>:150' */
                        /* Transition: '<S148>:128' */
                        /* Transition: '<S148>:136' */
                        /* Transition: '<S148>:263' */
                        /* Transition: '<S148>:276' */
                        /* Transition: '<S148>:280' */
                        /* Transition: '<S148>:153' */
                        /* Transition: '<S148>:154' */
                        VTLR_ac_DW.is_c2_VTLR_ac = VTLR_ac_IN_E_Stop;

                        /* Entry 'E_Stop': '<S148>:44' */
                        VeVTLR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
                        VeVTLR_b_Dschrg_S2Cmd = false;
                        VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k = 0.0F;
                        VeVTLR_e_DschrgSt = CeVTLR_e_DschrgEStp;
                        VeVTLR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
                    }
                    else
                    {
                        /* Transition: '<S148>:189' */
                        VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k += HeVTLR_t_dT;
                    }
                }

                /* End of Outputs for SubSystem: '<S136>/Turn On Delay Sample' */
                break;

              default:
                VeVTLR_b_DschrgRdy4ShtDwn = true;
                VeVTLR_e_DschrgSt = CeVTLR_e_DschrgShtDwn;

                /* During 'Shut_Down': '<S148>:76' */
                /* Transition: '<S148>:79' */
                if (VeVTLR_b_RstDschrg)
                {
                    /* Transition: '<S148>:178' */
                    /* Transition: '<S148>:80' */
                    /* Transition: '<S148>:47' */
                    /* Transition: '<S148>:75' */
                    VTLR_ac_DW.is_c2_VTLR_ac = VTLR_ac_IN_Initial_State;

                    /* Entry 'Initial_State': '<S148>:1' */
                    VeVTLR_e_DschrgSt = CeVTLR_e_DschrgInit;
                    VeVTLR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k = 0.0F;
                    VeVTLR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
                    VeVTLR_b_Dschrg_S2Cmd = false;
                    VeVTLR_b_DschrgRdy4ShtDwn = false;
                }
                else
                {
                    /* Transition: '<S148>:182' */
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k += HeVTLR_t_dT;
                }
                break;
            }

            if (guard4)
            {
                /* Transition: '<S148>:95' */
                /* Transition: '<S148>:149' */
                /* Transition: '<S148>:150' */
                /* Transition: '<S148>:128' */
                /* Transition: '<S148>:136' */
                /* Transition: '<S148>:263' */
                /* Transition: '<S148>:276' */
                /* Transition: '<S148>:280' */
                /* Transition: '<S148>:153' */
                /* Transition: '<S148>:154' */
                VTLR_ac_DW.is_c2_VTLR_ac = VTLR_ac_IN_E_Stop;

                /* Entry 'E_Stop': '<S148>:44' */
                VeVTLR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
                VeVTLR_b_Dschrg_S2Cmd = false;
                VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k = 0.0F;
                VeVTLR_e_DschrgSt = CeVTLR_e_DschrgEStp;
                VeVTLR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
            }

            if (guard3)
            {
                /* Transition: '<S148>:136' */
                /* Transition: '<S148>:263' */
                /* Transition: '<S148>:276' */
                /* Transition: '<S148>:280' */
                /* Transition: '<S148>:153' */
                /* Transition: '<S148>:154' */
                VTLR_ac_DW.is_c2_VTLR_ac = VTLR_ac_IN_E_Stop;

                /* Entry 'E_Stop': '<S148>:44' */
                VeVTLR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
                VeVTLR_b_Dschrg_S2Cmd = false;
                VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k = 0.0F;
                VeVTLR_e_DschrgSt = CeVTLR_e_DschrgEStp;
                VeVTLR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
            }

            if (guard2)
            {
                /* Transition: '<S148>:154' */
                VTLR_ac_DW.is_c2_VTLR_ac = VTLR_ac_IN_E_Stop;

                /* Entry 'E_Stop': '<S148>:44' */
                VeVTLR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
                VeVTLR_b_Dschrg_S2Cmd = false;
                VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k = 0.0F;
                VeVTLR_e_DschrgSt = CeVTLR_e_DschrgEStp;
                VeVTLR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
            }

            if (guard1)
            {
                /* Transition: '<S148>:104' */
                /* Transition: '<S148>:147' */
                /* Transition: '<S148>:148' */
                /* Transition: '<S148>:95' */
                /* Transition: '<S148>:149' */
                /* Transition: '<S148>:150' */
                /* Transition: '<S148>:128' */
                /* Transition: '<S148>:136' */
                /* Transition: '<S148>:263' */
                /* Transition: '<S148>:276' */
                /* Transition: '<S148>:280' */
                /* Transition: '<S148>:153' */
                /* Transition: '<S148>:154' */
                VTLR_ac_DW.is_c2_VTLR_ac = VTLR_ac_IN_E_Stop;

                /* Entry 'E_Stop': '<S148>:44' */
                VeVTLR_e_OBC_MdRq = CeOBCR_e_Idle_OBCMdRq;
                VeVTLR_b_Dschrg_S2Cmd = false;
                VTLR_ac_DW.VeVTLR_t_DschrgStTmr_k = 0.0F;
                VeVTLR_e_DschrgSt = CeVTLR_e_DschrgEStp;
                VeVTLR_e_DisChrgSysSts = CeVTLR_e_DschrgInactv;
            }
        }

        /* End of Chart: '<S136>/Discharging_SF1' */

        /* SignalConversion generated from: '<S1>/OBCM_Mode_Req' incorporates:
         *  DataTypeConversion: '<S151>/DataTypeConversion'
         *  Merge: '<S4>/Merge_1'
         *  Outport: '<Root>/VeVTLR_e_DschrgOBCMdRq'
         */
        (void)Rte_Write_VeVTLR_e_DschrgOBCMdRq_Value(VeVTLR_e_OBC_MdRq);

        /* Merge: '<S4>/Merge_3' incorporates:
         *  Gain: '<S156>/Gain'
         */
        rtb_TmpSignalConversionAtVeHP_b = VeVTLR_b_Dschrg_S2Cmd;

        /* Merge: '<S4>/Merge_5' incorporates:
         *  Gain: '<S158>/Gain'
         */
        Merge_5 = VeVTLR_b_DschrgRdy4ShtDwn;

        /* RelationalOperator: '<S137>/Not Equal' incorporates:
         *  Constant: '<S168>/Constant'
         */
        rtb_AND_amk = (((uint32)VeVTLR_e_DschrgSt) == CeVTLR_e_DschrgEStp);

        /* Outputs for Atomic SubSystem: '<S137>/EdgeRising' */
        /* Logic: '<S162>/OR1' incorporates:
         *  UnitDelay: '<S162>/Unit Delay'
         */
        rtb_OR1_kq = !VTLR_ac_DW.UnitDelay_DSTATE_d4;

        /* Update for UnitDelay: '<S162>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_d4 = rtb_AND_amk;

        /* End of Outputs for SubSystem: '<S137>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S137>/EdgeRising1' */
        /* Logic: '<S163>/AND' incorporates:
         *  Logic: '<S163>/OR1'
         *  UnitDelay: '<S163>/Unit Delay'
         */
        rtb_AND_ab = !VTLR_ac_DW.UnitDelay_DSTATE_mk;

        /* Update for UnitDelay: '<S163>/Unit Delay' incorporates:
         *  Constant: '<S137>/TRUE Constant'
         */
        VTLR_ac_DW.UnitDelay_DSTATE_mk = true;

        /* End of Outputs for SubSystem: '<S137>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S137>/Counter Reset  Enabled ' */
        /* Switch: '<S161>/Switch1' incorporates:
         *  Logic: '<S137>/Logical1'
         *  Logic: '<S162>/AND'
         *  Switch: '<S161>/Switch2'
         */
        if (rtb_AND_ab || rtb_Merge_7)
        {
            /* Switch: '<S161>/Switch1' incorporates:
             *  Constant: '<S161>/Constant Value2'
             */
            VeVTLR_Cnt_EStopCount = 0U;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S137>/EdgeRising' */
            if (rtb_AND_amk && rtb_OR1_kq)
            {
                /* Switch: '<S161>/Switch2' incorporates:
                 *  Constant: '<S161>/Constant Value1'
                 *  Sum: '<S161>/Subtraction'
                 *  Switch: '<S161>/Switch1'
                 *  UnitDelay: '<S161>/Unit Delay'
                 */
                VeVTLR_Cnt_EStopCount = (uint16)(((uint32)
                    VTLR_ac_DW.UnitDelay_DSTATE_pj) + 1U);
            }
            else
            {
                /* Switch: '<S161>/Switch1' incorporates:
                 *  Switch: '<S161>/Switch2'
                 *  UnitDelay: '<S161>/Unit Delay'
                 */
                VeVTLR_Cnt_EStopCount = VTLR_ac_DW.UnitDelay_DSTATE_pj;
            }

            /* End of Outputs for SubSystem: '<S137>/EdgeRising' */
        }

        /* End of Switch: '<S161>/Switch1' */

        /* Update for UnitDelay: '<S161>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_pj = VeVTLR_Cnt_EStopCount;

        /* End of Outputs for SubSystem: '<S137>/Counter Reset  Enabled ' */

        /* RelationalOperator: '<S137>/Not Equal1' incorporates:
         *  Constant: '<S171>/Calib'
         *  Selector: '<S137>/Selector'
         */
        VeVTLR_b_GiveUpDschrg = (VeVTLR_Cnt_EStopCount > KaVTLR_K_NbrRetries
            [(VeVTLR_k_NDCR)]);

        /* Merge: '<S4>/Merge_4' incorporates:
         *  DataTypeConversion: '<S133>/DataTypeConversion'
         */
        rtb_Merge_4_g = VeVTLR_e_DisChrgSysSts;

        /* Merge: '<S4>/Merge_2' incorporates:
         *  Constant: '<S138>/Calib'
         *  SignalConversion generated from: '<S17>/DschgCurrLim'
         */
        Merge_2_j = KeVTLR_I_DschgCurrLim;

        /* Merge: '<S4>/Merge_7' incorporates:
         *  Gain: '<S134>/Gain'
         */
        rtb_Merge_7 = VeVTLR_b_Enable_Discharge;

        /* Update for UnitDelay: '<S139>/Unit Delay' incorporates:
         *  DataStoreWrite: '<S139>/Data Store Write1'
         *  Switch: '<S139>/Switch'
         */
        VTLR_ac_DW.UnitDelay_DSTATE_p4 = VTLR_ac_DW.NeVTLR_e_DoorLastSts;

        /* Update for UnitDelay: '<S136>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_pk = VeVTLR_b_GiveUpDschrg;

        /* Update for UnitDelay: '<S137>/Unit Delay' incorporates:
         *  Switch: '<S5>/Switch1'
         */
        VTLR_ac_DW.UnitDelay_DSTATE_mj = VeVTLR_e_PMM_PowerMode;

        /* Update for UnitDelay: '<S136>/Unit Delay1' */
        VTLR_ac_DW.UnitDelay1_DSTATE = rtb_TmpSignalConversionAtVePLTR;

        /* End of Outputs for SubSystem: '<S4>/V2L_Offboard' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S4>/V2L_Offboard_Default' incorporates:
         *  ActionPort: '<S18>/Action Port'
         */
        /* Merge: '<S4>/Merge_2' incorporates:
         *  Constant: '<S18>/Constant Value2'
         *  Gain: '<S204>/Gain'
         */
        Merge_2_j = 0.0F;

        /* SignalConversion generated from: '<S1>/OBCM_Mode_Req' incorporates:
         *  Constant: '<S199>/Constant'
         *  DataTypeConversion: '<S197>/DataTypeConversion'
         *  Merge: '<S4>/Merge_1'
         *  Outport: '<Root>/VeVTLR_e_DschrgOBCMdRq'
         */
        (void)Rte_Write_VeVTLR_e_DschrgOBCMdRq_Value(CeOBCR_e_Idle_OBCMdRq);

        /* Merge: '<S4>/Merge_3' incorporates:
         *  Constant: '<S18>/Constant Value1'
         *  Gain: '<S203>/Gain'
         */
        rtb_TmpSignalConversionAtVeHP_b = false;

        /* Merge: '<S4>/Merge_4' incorporates:
         *  Constant: '<S200>/Constant'
         *  DataTypeConversion: '<S198>/DataTypeConversion'
         */
        rtb_Merge_4_g = CeVTLR_e_DschrgInactv;

        /* Merge: '<S4>/Merge_5' incorporates:
         *  Constant: '<S18>/Constant Value3'
         *  Gain: '<S205>/Gain'
         */
        Merge_5 = false;

        /* Merge: '<S4>/Merge_6' incorporates:
         *  Constant: '<S18>/Constant Value4'
         *  Gain: '<S206>/Gain'
         */
        Merge_6_o = false;

        /* Merge: '<S4>/Merge_7' incorporates:
         *  Constant: '<S18>/Constant Value5'
         *  Gain: '<S202>/Gain'
         */
        rtb_Merge_7 = false;

        /* End of Outputs for SubSystem: '<S4>/V2L_Offboard_Default' */
    }

    /* End of If: '<S4>/If' */

    /* RelationalOperator: '<S23>/Comparison11' incorporates:
     *  Merge: '<S4>/Merge_4'
     *  RelationalOperator: '<S7>/Relational Operator2'
     */
    rtb_AND_cq_tmp = rtb_Merge_4_g;

    /* Logic: '<S23>/Logical11' incorporates:
     *  Constant: '<S30>/Constant'
     *  DataStoreRead: '<S23>/Data Store Read'
     *  Merge: '<S4>/Merge_4'
     *  RelationalOperator: '<S23>/Comparison11'
     */
    rtb_AND_amk = ((((uint32)rtb_Merge_4_g) == CeVTLR_e_DschrgInactv) &&
                   (EeVTLR_b_V2L_PlugInAuth));

    /* Outputs for Atomic SubSystem: '<S23>/EdgeRising1' */
    /* Logic: '<S27>/OR1' incorporates:
     *  UnitDelay: '<S27>/Unit Delay'
     */
    rtb_OR1_kq = !VTLR_ac_DW.UnitDelay_DSTATE_am;

    /* Update for UnitDelay: '<S27>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_am = rtb_AND_amk;

    /* Outputs for Atomic SubSystem: '<S36>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S43>/Signal Latch On With Reset' */
    /* Logic: '<S44>/OR1' incorporates:
     *  Logic: '<S27>/AND'
     *  Logic: '<S44>/NOT'
     *  Logic: '<S44>/OR'
     *  UnitDelay: '<S43>/Unit Delay1'
     *  UnitDelay: '<S44>/Unit Delay'
     */
    rtb_OR1_kq = ((rtb_AND_amk && rtb_OR1_kq) ||
                  ((!VTLR_ac_DW.UnitDelay1_DSTATE_m) &&
                   (VTLR_ac_DW.UnitDelay_DSTATE_pw)));

    /* End of Outputs for SubSystem: '<S23>/EdgeRising1' */

    /* Update for UnitDelay: '<S44>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_pw = rtb_OR1_kq;

    /* End of Outputs for SubSystem: '<S43>/Signal Latch On With Reset' */

    /* Switch: '<S43>/Switch1' incorporates:
     *  Constant: '<S32>/Calib'
     *  Constant: '<S43>/Constant Value'
     *  Logic: '<S43>/Logical Operator'
     *  MinMax: '<S43>/Minimum'
     *  Sum: '<S43>/Summation'
     *  UnitDelay: '<S43>/Unit Delay'
     */
    if (!rtb_OR1_kq)
    {
        /* Switch: '<S43>/Switch1' incorporates:
         *  Constant: '<S43>/Constant Value1'
         */
        rtb_Switch1_p5 = 0U;
    }
    else if (KeVTLR_Cnt_SampleDelayRTC < ((uint16)(((uint32)
                VTLR_ac_DW.UnitDelay_DSTATE_ff) + 1U)))
    {
        /* MinMax: '<S43>/Minimum' incorporates:
         *  Constant: '<S32>/Calib'
         *  Switch: '<S43>/Switch1'
         */
        rtb_Switch1_p5 = KeVTLR_Cnt_SampleDelayRTC;
    }
    else
    {
        /* Switch: '<S43>/Switch1' incorporates:
         *  Constant: '<S43>/Constant Value'
         *  MinMax: '<S43>/Minimum'
         *  Sum: '<S43>/Summation'
         *  UnitDelay: '<S43>/Unit Delay'
         */
        rtb_Switch1_p5 = (uint16)(((uint32)VTLR_ac_DW.UnitDelay_DSTATE_ff) + 1U);
    }

    /* End of Switch: '<S43>/Switch1' */

    /* RelationalOperator: '<S43>/Greater  Than' incorporates:
     *  Constant: '<S32>/Calib'
     */
    rtb_AND_ab = (rtb_Switch1_p5 >= KeVTLR_Cnt_SampleDelayRTC);

    /* Update for UnitDelay: '<S43>/Unit Delay1' */
    VTLR_ac_DW.UnitDelay1_DSTATE_m = rtb_AND_ab;

    /* Update for UnitDelay: '<S43>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_ff = rtb_Switch1_p5;

    /* Switch: '<S36>/Switch' incorporates:
     *  DataStoreWrite: '<S36>/Data Store Write1'
     *  Logic: '<S43>/AND'
     *  Sum: '<S23>/Subtraction'
     */
    if (rtb_OR1_kq && rtb_AND_ab)
    {
        VTLR_ac_DW.EeVTLR_g_ChrgNowMaxTimetoPlugin = rtb_Subtraction_tmp;
    }

    /* End of Switch: '<S36>/Switch' */
    /* End of Outputs for SubSystem: '<S36>/Turn On Delay Sample' */

    /* Switch: '<S36>/Switch1' incorporates:
     *  Constant: '<S36>/Constant Value'
     *  DataStoreWrite: '<S36>/Data Store Write1'
     *  RelationalOperator: '<S36>/Comparison1'
     */
    if (VTLR_ac_DW.EeVTLR_g_ChrgNowMaxTimetoPlugin == 0U)
    {
        /* Switch: '<S89>/Switch1' incorporates:
         *  Constant: '<S36>/Constant Value1'
         *  Sum: '<S23>/Subtraction'
         *  Sum: '<S36>/Subtraction'
         */
        rtb_Sum = rtb_Subtraction_tmp - 1U;
    }
    else
    {
        /* Switch: '<S89>/Switch1' */
        rtb_Sum = VTLR_ac_DW.EeVTLR_g_ChrgNowMaxTimetoPlugin;
    }

    /* End of Switch: '<S36>/Switch1' */

    /* Logic: '<S23>/Logical' incorporates:
     *  Constant: '<S28>/Constant'
     *  RelationalOperator: '<S23>/Comparison3'
     *  Switch: '<S5>/Switch1'
     */
    rtb_OR1_kq = ((VeVTLR_b_SecureConnV2L) && (((uint32)VeVTLR_e_PMM_PowerMode)
                   != CePMDR_e_PowerMode_Off));

    /* Outputs for Atomic SubSystem: '<S23>/EdgeRising' */
    /* Logic: '<S26>/OR1' incorporates:
     *  UnitDelay: '<S26>/Unit Delay'
     */
    rtb_AND_ab = !VTLR_ac_DW.UnitDelay_DSTATE_at;

    /* Update for UnitDelay: '<S26>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_at = rtb_OR1_kq;

    /* Outputs for IfAction SubSystem: '<S23>/set_auth' incorporates:
     *  ActionPort: '<S42>/Action Port'
     */
    /* If: '<S23>/If1' incorporates:
     *  DataStoreWrite: '<S42>/Data Store Write'
     *  Logic: '<S26>/AND'
     */
    EeVTLR_b_V2L_PlugInAuth = ((rtb_OR1_kq && rtb_AND_ab) ||
        (EeVTLR_b_V2L_PlugInAuth));

    /* End of Outputs for SubSystem: '<S23>/set_auth' */
    /* End of Outputs for SubSystem: '<S23>/EdgeRising' */

    /* RelationalOperator: '<S23>/Comparison4' incorporates:
     *  Constant: '<S29>/Constant'
     *  Switch: '<S5>/Switch2'
     */
    rtb_OR1_kq = (((uint32)VeVTLR_e_ProxStat) == CeOBCR_e_ProxOut_OBCM);

    /* Outputs for Atomic SubSystem: '<S23>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S38>/EdgeRising' */
    /* Logic: '<S45>/AND' incorporates:
     *  Logic: '<S45>/OR1'
     *  UnitDelay: '<S45>/Unit Delay'
     */
    rtb_AND_ab = (rtb_OR1_kq && (!VTLR_ac_DW.UnitDelay_DSTATE_ov));

    /* Update for UnitDelay: '<S45>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_ov = rtb_OR1_kq;

    /* End of Outputs for SubSystem: '<S38>/EdgeRising' */

    /* Logic: '<S38>/OR1' incorporates:
     *  Logic: '<S38>/AND'
     */
    tmpRead_2 = !rtb_OR1_kq;

    /* Switch: '<S38>/Switch1' incorporates:
     *  Constant: '<S31>/Calib'
     *  Constant: '<S38>/Constant Value'
     *  Logic: '<S38>/OR'
     *  Logic: '<S38>/OR1'
     *  MinMax: '<S38>/Minimum'
     *  Sum: '<S38>/Summation'
     *  UnitDelay: '<S38>/Unit Delay'
     */
    if (tmpRead_2 || rtb_AND_ab)
    {
        /* Switch: '<S38>/Switch1' incorporates:
         *  Constant: '<S38>/Constant Value1'
         */
        rtb_Switch1_p5 = 0U;
    }
    else if (KeVTLR_Cnt_ProxOutDbnc < ((uint16)(((uint32)
                VTLR_ac_DW.UnitDelay_DSTATE_c2) + 1U)))
    {
        /* MinMax: '<S38>/Minimum' incorporates:
         *  Constant: '<S31>/Calib'
         *  Switch: '<S38>/Switch1'
         */
        rtb_Switch1_p5 = KeVTLR_Cnt_ProxOutDbnc;
    }
    else
    {
        /* Switch: '<S38>/Switch1' incorporates:
         *  Constant: '<S38>/Constant Value'
         *  MinMax: '<S38>/Minimum'
         *  Sum: '<S38>/Summation'
         *  UnitDelay: '<S38>/Unit Delay'
         */
        rtb_Switch1_p5 = (uint16)(((uint32)VTLR_ac_DW.UnitDelay_DSTATE_c2) + 1U);
    }

    /* End of Switch: '<S38>/Switch1' */

    /* Update for UnitDelay: '<S38>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_c2 = rtb_Switch1_p5;

    /* End of Outputs for SubSystem: '<S23>/Turn On Delay Sample' */

    /* RelationalOperator: '<S23>/Comparison1' */
    rtb_AND_ab = (rtb_TmpSignalConversionAtVePLTR < rtb_Sum);

    /* Outputs for Atomic SubSystem: '<S23>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S39>/EdgeRising' */
    /* Logic: '<S46>/AND' incorporates:
     *  Logic: '<S46>/OR1'
     *  UnitDelay: '<S46>/Unit Delay'
     */
    rtb_AND_le = (rtb_AND_ab && (!VTLR_ac_DW.UnitDelay_DSTATE_hs));

    /* Update for UnitDelay: '<S46>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_hs = rtb_AND_ab;

    /* End of Outputs for SubSystem: '<S39>/EdgeRising' */

    /* Switch: '<S39>/Switch1' incorporates:
     *  Constant: '<S34>/Calib'
     *  Constant: '<S39>/Constant Value'
     *  Logic: '<S39>/OR'
     *  Logic: '<S39>/OR1'
     *  MinMax: '<S39>/Minimum'
     *  Sum: '<S39>/Summation'
     *  UnitDelay: '<S39>/Unit Delay'
     */
    if ((!rtb_AND_ab) || rtb_AND_le)
    {
        /* Switch: '<S39>/Switch1' incorporates:
         *  Constant: '<S39>/Constant Value1'
         */
        rtb_Switch_av = 0U;
    }
    else if (KeVTLR_Cnt_WUDelay_RTC < ((uint16)(((uint32)
                VTLR_ac_DW.UnitDelay_DSTATE_ps) + 1U)))
    {
        /* MinMax: '<S39>/Minimum' incorporates:
         *  Constant: '<S34>/Calib'
         *  Switch: '<S39>/Switch1'
         */
        rtb_Switch_av = KeVTLR_Cnt_WUDelay_RTC;
    }
    else
    {
        /* Switch: '<S39>/Switch1' incorporates:
         *  Constant: '<S39>/Constant Value'
         *  MinMax: '<S39>/Minimum'
         *  Sum: '<S39>/Summation'
         *  UnitDelay: '<S39>/Unit Delay'
         */
        rtb_Switch_av = (uint16)(((uint32)VTLR_ac_DW.UnitDelay_DSTATE_ps) + 1U);
    }

    /* End of Switch: '<S39>/Switch1' */

    /* Update for UnitDelay: '<S39>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_ps = rtb_Switch_av;

    /* End of Outputs for SubSystem: '<S23>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S23>/Turn On Delay Sample3' */
    /* Outputs for Atomic SubSystem: '<S40>/EdgeRising' */
    /* Logic: '<S47>/AND' incorporates:
     *  DataStoreRead: '<S23>/Data Store Read3'
     *  Logic: '<S47>/OR1'
     *  UnitDelay: '<S47>/Unit Delay'
     */
    rtb_AND_le = ((EeVTLR_b_V2L_PlugInAuth) && (!VTLR_ac_DW.UnitDelay_DSTATE_g3));

    /* Update for UnitDelay: '<S47>/Unit Delay' incorporates:
     *  DataStoreRead: '<S23>/Data Store Read3'
     */
    VTLR_ac_DW.UnitDelay_DSTATE_g3 = EeVTLR_b_V2L_PlugInAuth;

    /* End of Outputs for SubSystem: '<S40>/EdgeRising' */

    /* Logic: '<S40>/OR1' incorporates:
     *  DataStoreRead: '<S23>/Data Store Read3'
     *  Logic: '<S40>/AND'
     */
    tmpRead = !EeVTLR_b_V2L_PlugInAuth;

    /* Switch: '<S40>/Switch1' incorporates:
     *  Constant: '<S33>/Calib'
     *  Constant: '<S40>/Constant Value'
     *  Logic: '<S40>/OR'
     *  Logic: '<S40>/OR1'
     *  MinMax: '<S40>/Minimum'
     *  Sum: '<S40>/Summation'
     *  UnitDelay: '<S40>/Unit Delay'
     */
    if (tmpRead || rtb_AND_le)
    {
        /* Switch: '<S40>/Switch1' incorporates:
         *  Constant: '<S40>/Constant Value1'
         */
        rtb_Switch1_ml = 0U;
    }
    else if (KeVTLR_Cnt_V2L_Auth_Dbnc < ((uint16)(((uint32)
                VTLR_ac_DW.UnitDelay_DSTATE_ix) + 1U)))
    {
        /* MinMax: '<S40>/Minimum' incorporates:
         *  Constant: '<S33>/Calib'
         *  Switch: '<S40>/Switch1'
         */
        rtb_Switch1_ml = KeVTLR_Cnt_V2L_Auth_Dbnc;
    }
    else
    {
        /* Switch: '<S40>/Switch1' incorporates:
         *  Constant: '<S40>/Constant Value'
         *  MinMax: '<S40>/Minimum'
         *  Sum: '<S40>/Summation'
         *  UnitDelay: '<S40>/Unit Delay'
         */
        rtb_Switch1_ml = (uint16)(((uint32)VTLR_ac_DW.UnitDelay_DSTATE_ix) + 1U);
    }

    /* End of Switch: '<S40>/Switch1' */

    /* Update for UnitDelay: '<S40>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_ix = rtb_Switch1_ml;

    /* Outputs for IfAction SubSystem: '<S23>/clear_auth' incorporates:
     *  ActionPort: '<S41>/Action Port'
     */
    /* Outputs for Atomic SubSystem: '<S23>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S23>/Turn On Delay Sample1' */
    /* If: '<S23>/If2' incorporates:
     *  Constant: '<S31>/Calib'
     *  Constant: '<S33>/Calib'
     *  Constant: '<S34>/Calib'
     *  DataStoreWrite: '<S41>/Data Store Write'
     *  Logic: '<S23>/Logical2'
     *  Logic: '<S23>/Logical3'
     *  Logic: '<S23>/Logical5'
     *  Logic: '<S23>/Logical9'
     *  Logic: '<S38>/AND'
     *  Logic: '<S39>/AND'
     *  Logic: '<S40>/AND'
     *  RelationalOperator: '<S38>/Greater  Than'
     *  RelationalOperator: '<S39>/Greater  Than'
     *  RelationalOperator: '<S40>/Greater  Than'
     */
    EeVTLR_b_V2L_PlugInAuth = (((tmpRead_2 || (rtb_Switch1_p5 <
        KeVTLR_Cnt_ProxOutDbnc)) && (((rtb_AND_ab && (rtb_Switch_av >=
        KeVTLR_Cnt_WUDelay_RTC)) || (tmpRead || (rtb_Switch1_ml <
        KeVTLR_Cnt_V2L_Auth_Dbnc))) || (!rtb_AND_amk))) &&
        (EeVTLR_b_V2L_PlugInAuth));

    /* End of Outputs for SubSystem: '<S23>/Turn On Delay Sample1' */
    /* End of Outputs for SubSystem: '<S23>/Turn On Delay Sample' */
    /* End of Outputs for SubSystem: '<S23>/clear_auth' */
    /* End of Outputs for SubSystem: '<S23>/Turn On Delay Sample3' */

    /* SignalConversion generated from: '<S1>/V2L_OB_PP1_Auth' incorporates:
     *  DataStoreRead: '<S24>/Data Store Read2'
     *  Outport: '<Root>/VeVTLR_b_Trunk_Auth'
     */
    (void)Rte_Write_VeVTLR_b_Trunk_Auth_Value(EeVTLR_b_V2L_OB_IDCM_Auth);

    /* SignalConversion generated from: '<S1>/V2L_OB_PP2_Auth' incorporates:
     *  DataStoreRead: '<S25>/Data Store Read2'
     *  Outport: '<Root>/VeVTLR_b_Frunk_Auth'
     */
    (void)Rte_Write_VeVTLR_b_Frunk_Auth_Value(EeVTLR_b_V2L_OB_PPIM_Auth);

    /* If: '<S21>/If1' incorporates:
     *  Constant: '<S439>/Calib'
     *  Constant: '<S454>/Calib'
     *  Switch: '<S440>/Switch1'
     *  Switch: '<S440>/Switch10'
     *  Switch: '<S440>/Switch11'
     *  Switch: '<S440>/Switch12'
     *  Switch: '<S440>/Switch13'
     *  Switch: '<S440>/Switch14'
     *  Switch: '<S440>/Switch15'
     *  Switch: '<S440>/Switch16'
     *  Switch: '<S440>/Switch17'
     *  Switch: '<S440>/Switch18'
     *  Switch: '<S440>/Switch19'
     *  Switch: '<S440>/Switch2'
     *  Switch: '<S440>/Switch20'
     *  Switch: '<S440>/Switch5'
     *  Switch: '<S440>/Switch6'
     *  Switch: '<S440>/Switch7'
     *  Switch: '<S440>/Switch8'
     *  Switch: '<S440>/Switch9'
     */
    if (KeVTLR_b_SlctPP_PwrSrc)
    {
        /* Outputs for IfAction SubSystem: '<S21>/PP_with_SamePwrSource' incorporates:
         *  ActionPort: '<S441>/Action Port'
         */
        /* Logic: '<S441>/Logical' incorporates:
         *  Logic: '<S441>/Logical1'
         */
        rtb_AND_ab = (rtb_TmpSignalConversionAtVeC_mq ||
                      rtb_TmpSignalConversionAtVeC_ng);

        /* Merge: '<S21>/Merge1' incorporates:
         *  Logic: '<S441>/Logical1'
         */
        rtb_TmpSignalConversionAtVeC_mq = rtb_AND_ab;

        /* UnitDelay: '<S95>/Unit Delay' incorporates:
         *  Logic: '<S441>/Logical2'
         */
        rtb_TmpSignalConversionAtVeC_ng = (rtb_TmpSignalConversionAtVeC_jx ||
            rtb_TmpSignalConversionAtVeC_lz);

        /* UnitDelay: '<S79>/Unit Delay' incorporates:
         *  Logic: '<S441>/Logical3'
         */
        rtb_TmpSignalConversionAtVeC_mv = (rtb_TmpSignalConversionAtVeC_lz ||
            rtb_TmpSignalConversionAtVeC_mv);

        /* Merge: '<S21>/Merge4' incorporates:
         *  Inport: '<S441>/PP2_RatedPower'
         *  Sum: '<S441>/Sum2'
         */
        rtb_Merge4 = rtb_TmpSignalConversionAtVeCI_k +
            rtb_TmpSignalConversionAtVeC_kf;

        /* Switch: '<S459>/Switch1' incorporates:
         *  Constant: '<S457>/Constant'
         *  Constant: '<S458>/Constant'
         *  Inport: '<S441>/PowerPanel2_Fault'
         *  Logic: '<S441>/Logical4'
         *  RelationalOperator: '<S441>/Relational Operator1'
         *  RelationalOperator: '<S441>/Relational Operator2'
         *  SignalConversion generated from: '<S1>/VeCITR_e_PP2Fault'
         */
        if ((((uint32)rtb_TmpSignalConversionAtVeCI_a) ==
                CeVTLR_e_Flt_Discharging_Disable) || (((uint32)
                rtb_TmpSignalConversionAtVeCI_c) ==
                CeVTLR_e_Flt_Discharging_DisablePP2))
        {
            /* Merge: '<S21>/Merge6' incorporates:
             *  Constant: '<S456>/Constant'
             */
            rtb_Merge6 = CeVTLR_e_Flt_Discharging_Disable;
        }
        else
        {
            /* Merge: '<S21>/Merge6' */
            rtb_Merge6 = rtb_TmpSignalConversionAtVeCI_a;
        }

        /* End of Switch: '<S459>/Switch1' */

        /* Merge: '<S21>/Merge8' incorporates:
         *  Logic: '<S441>/Logical6'
         */
        rtb_TmpSignalConversionAtVeC_ai = (rtb_TmpSignalConversionAtVeC_ai ||
            rtb_TmpSignalConversionAtVeC_oh);

        /* Merge: '<S21>/Merge9' incorporates:
         *  Logic: '<S441>/Logical5'
         */
        rtb_AND_le = (rtb_TmpSignalConversionAtVeCI_n ||
                      rtb_TmpSignalConversionAtVeCI_o);

        /* Merge: '<S21>/Merge10' incorporates:
         *  Inport: '<S441>/L1_Curr_Draw_PP2'
         *  MinMax: '<S441>/MinMax'
         */
        rtb_Merge10 = fmaxf(rtb_TmpSignalConversionAtVeCITR,
                            rtb_TmpSignalConversionAtVeC_go);

        /* Merge: '<S21>/Merge11' incorporates:
         *  Inport: '<S441>/L2_Curr_Draw_PP2'
         *  MinMax: '<S441>/MinMax1'
         */
        rtb_Merge11 = fmaxf(rtb_TmpSignalConversionAtVeCI_i,
                            rtb_TmpSignalConversionAtVeC_jh);

        /* Merge: '<S21>/Merge14' incorporates:
         *  Logic: '<S441>/Logical7'
         */
        rtb_OR1_kq = (rtb_TmpSignalConversionAtVeCI_h ||
                      rtb_TmpSignalConversionAtVeCI_g);

        /* Merge: '<S21>/Merge15' incorporates:
         *  Logic: '<S441>/Logical8'
         */
        rtb_TmpSignalConversionAtVeCI_n = (rtb_TmpSignalConversionAtVeC_fy ||
            rtb_TmpSignalConversionAtVeCI_j);

        /* Merge: '<S21>/Merge16' incorporates:
         *  Logic: '<S441>/Logical9'
         */
        rtb_Merge16 = (rtb_TmpSignalConversionAtVeC_nm ||
                       rtb_TmpSignalConversionAtVeCI_b);

        /* Merge: '<S21>/Merge17' incorporates:
         *  Constant: '<S441>/Constant'
         *  SignalConversion generated from: '<S441>/PP2_LidSw_Sts_120A_SameSrc'
         */
        rtb_TmpSignalConversionAtVeCI_o = false;

        /* Merge: '<S21>/Merge18' incorporates:
         *  Constant: '<S441>/Constant1'
         *  SignalConversion generated from: '<S441>/PP2_LidSw_Sts_120B_SameSrc'
         */
        rtb_AND_amk = false;

        /* Merge: '<S21>/Merge19' incorporates:
         *  Constant: '<S441>/Constant2'
         *  SignalConversion generated from: '<S441>/PP2_LidSw_Sts_240_SameSrc'
         */
        rtb_TmpSignalConversionAtVeC_nm = false;

        /* End of Outputs for SubSystem: '<S21>/PP_with_SamePwrSource' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S21>/PP_with_DiffPwrSource' incorporates:
         *  ActionPort: '<S440>/Action Port'
         */
        if (KeVTLR_b_PwrSrcSwap)
        {
            /* Switch: '<S440>/Switch1' incorporates:
             *  Merge: '<S21>/Merge'
             */
            rtb_AND_ab = rtb_TmpSignalConversionAtVeC_ng;

            /* Switch: '<S440>/Switch10' incorporates:
             *  Merge: '<S21>/Merge9'
             */
            rtb_AND_le = rtb_TmpSignalConversionAtVeCI_o;

            /* Switch: '<S440>/Switch11' incorporates:
             *  Merge: '<S21>/Merge10'
             */
            rtb_Merge10 = rtb_TmpSignalConversionAtVeC_go;

            /* Switch: '<S440>/Switch12' incorporates:
             *  Merge: '<S21>/Merge11'
             */
            rtb_Merge11 = rtb_TmpSignalConversionAtVeC_jh;

            /* Switch: '<S440>/Switch13' incorporates:
             *  Merge: '<S21>/Merge12'
             */
            rtb_TmpSignalConversionAtVeC_go = rtb_TmpSignalConversionAtVeCITR;

            /* Switch: '<S440>/Switch14' incorporates:
             *  Merge: '<S21>/Merge13'
             */
            rtb_TmpSignalConversionAtVeC_jh = rtb_TmpSignalConversionAtVeCI_i;

            /* Switch: '<S440>/Switch15' incorporates:
             *  Merge: '<S21>/Merge14'
             */
            rtb_OR1_kq = rtb_TmpSignalConversionAtVeCI_g;

            /* Switch: '<S440>/Switch16' incorporates:
             *  Merge: '<S21>/Merge15'
             */
            rtb_TmpSignalConversionAtVeCI_n = rtb_TmpSignalConversionAtVeCI_j;

            /* Switch: '<S440>/Switch17' incorporates:
             *  Merge: '<S21>/Merge16'
             */
            rtb_Merge16 = rtb_TmpSignalConversionAtVeCI_b;

            /* Switch: '<S440>/Switch18' incorporates:
             *  Merge: '<S21>/Merge17'
             */
            rtb_TmpSignalConversionAtVeCI_o = rtb_TmpSignalConversionAtVeCI_h;

            /* Switch: '<S440>/Switch19' incorporates:
             *  Merge: '<S21>/Merge18'
             */
            rtb_AND_amk = rtb_TmpSignalConversionAtVeC_fy;

            /* Switch: '<S440>/Switch5' incorporates:
             *  Merge: '<S21>/Merge4'
             */
            rtb_Merge4 = rtb_TmpSignalConversionAtVeC_kf;

            /* Switch: '<S440>/Switch6' incorporates:
             *  Merge: '<S21>/Merge5'
             */
            rtb_TmpSignalConversionAtVeC_kf = rtb_TmpSignalConversionAtVeCI_k;

            /* Switch: '<S452>/Switch1' incorporates:
             *  Constant: '<S442>/Constant'
             *  Constant: '<S445>/Constant'
             *  RelationalOperator: '<S440>/Relational Operator1'
             *  RelationalOperator: '<S440>/Relational Operator3'
             *  Switch: '<S440>/Switch7'
             *  Switch: '<S452>/Switch2'
             */
            if (((uint32)rtb_TmpSignalConversionAtVeCI_c) ==
                    CeVTLR_e_Flt_Discharging_DisablePP2)
            {
                /* Merge: '<S21>/Merge6' incorporates:
                 *  Constant: '<S444>/Constant'
                 *  Switch: '<S452>/Switch1'
                 */
                rtb_Merge6 = CeVTLR_e_Flt_Discharging_Disable;
            }
            else if (((uint32)rtb_TmpSignalConversionAtVeCI_c) ==
                     CeVTLR_e_Flt_Discharging_AllowedPP2)
            {
                /* Switch: '<S452>/Switch2' incorporates:
                 *  Constant: '<S446>/Constant'
                 *  Merge: '<S21>/Merge6'
                 *  Switch: '<S452>/Switch1'
                 */
                rtb_Merge6 = CeVTLR_e_Flt_Discharging_Allowed;
            }
            else
            {
                /* Merge: '<S21>/Merge6' incorporates:
                 *  Constant: '<S447>/Constant'
                 *  Switch: '<S452>/Switch1'
                 *  Switch: '<S452>/Switch2'
                 */
                rtb_Merge6 = CeVTLR_e_NoFault;
            }

            /* End of Switch: '<S452>/Switch1' */

            /* Switch: '<S453>/Switch1' incorporates:
             *  Constant: '<S448>/Constant'
             *  Constant: '<S450>/Constant'
             *  RelationalOperator: '<S440>/Relational Operator2'
             *  RelationalOperator: '<S440>/Relational Operator4'
             *  Switch: '<S440>/Switch8'
             *  Switch: '<S453>/Switch2'
             */
            if (((uint32)rtb_TmpSignalConversionAtVeCI_a) ==
                    CeVTLR_e_Flt_Discharging_Disable)
            {
                /* Merge: '<S21>/Merge7' incorporates:
                 *  Constant: '<S449>/Constant'
                 *  Switch: '<S453>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeCI_c =
                    CeVTLR_e_Flt_Discharging_DisablePP2;
            }
            else if (((uint32)rtb_TmpSignalConversionAtVeCI_a) ==
                     CeVTLR_e_Flt_Discharging_Allowed)
            {
                /* Switch: '<S453>/Switch2' incorporates:
                 *  Constant: '<S451>/Constant'
                 *  Merge: '<S21>/Merge7'
                 *  Switch: '<S453>/Switch1'
                 */
                rtb_TmpSignalConversionAtVeCI_c =
                    CeVTLR_e_Flt_Discharging_AllowedPP2;
            }
            else
            {
                /* Merge: '<S21>/Merge7' incorporates:
                 *  Constant: '<S443>/Constant'
                 *  Switch: '<S453>/Switch1'
                 *  Switch: '<S453>/Switch2'
                 */
                rtb_TmpSignalConversionAtVeCI_c = CeVTLR_e_NoFaultPP2;
            }

            /* End of Switch: '<S453>/Switch1' */

            /* Switch: '<S440>/Switch9' incorporates:
             *  Merge: '<S21>/Merge8'
             */
            rtb_TmpSignalConversionAtVeC_ai = rtb_TmpSignalConversionAtVeC_oh;
        }
        else
        {
            /* Merge: '<S21>/Merge' incorporates:
             *  Switch: '<S440>/Switch1'
             */
            rtb_AND_ab = rtb_TmpSignalConversionAtVeC_mq;

            /* Merge: '<S21>/Merge9' incorporates:
             *  Switch: '<S440>/Switch10'
             */
            rtb_AND_le = rtb_TmpSignalConversionAtVeCI_n;

            /* Merge: '<S21>/Merge10' incorporates:
             *  Switch: '<S440>/Switch11'
             */
            rtb_Merge10 = rtb_TmpSignalConversionAtVeCITR;

            /* Merge: '<S21>/Merge11' incorporates:
             *  Switch: '<S440>/Switch12'
             */
            rtb_Merge11 = rtb_TmpSignalConversionAtVeCI_i;

            /* Merge: '<S21>/Merge14' incorporates:
             *  Switch: '<S440>/Switch15'
             */
            rtb_OR1_kq = rtb_TmpSignalConversionAtVeCI_h;

            /* Merge: '<S21>/Merge15' incorporates:
             *  Switch: '<S440>/Switch16'
             */
            rtb_TmpSignalConversionAtVeCI_n = rtb_TmpSignalConversionAtVeC_fy;

            /* Merge: '<S21>/Merge16' incorporates:
             *  Switch: '<S440>/Switch17'
             */
            rtb_Merge16 = rtb_TmpSignalConversionAtVeC_nm;

            /* Merge: '<S21>/Merge17' incorporates:
             *  Switch: '<S440>/Switch18'
             */
            rtb_TmpSignalConversionAtVeCI_o = rtb_TmpSignalConversionAtVeCI_g;

            /* Merge: '<S21>/Merge18' incorporates:
             *  Switch: '<S440>/Switch19'
             */
            rtb_AND_amk = rtb_TmpSignalConversionAtVeCI_j;

            /* Merge: '<S21>/Merge1' incorporates:
             *  Switch: '<S440>/Switch2'
             */
            rtb_TmpSignalConversionAtVeC_mq = rtb_TmpSignalConversionAtVeC_ng;

            /* Merge: '<S21>/Merge19' incorporates:
             *  Switch: '<S440>/Switch20'
             */
            rtb_TmpSignalConversionAtVeC_nm = rtb_TmpSignalConversionAtVeCI_b;

            /* Merge: '<S21>/Merge4' incorporates:
             *  Switch: '<S440>/Switch5'
             */
            rtb_Merge4 = rtb_TmpSignalConversionAtVeCI_k;

            /* Merge: '<S21>/Merge6' incorporates:
             *  SignalConversion generated from: '<S1>/VeCITR_e_PPFault'
             *  Switch: '<S440>/Switch7'
             */
            rtb_Merge6 = rtb_TmpSignalConversionAtVeCI_a;
        }

        /* Switch: '<S440>/Switch3' incorporates:
         *  Constant: '<S455>/Calib'
         *  Switch: '<S440>/Switch4'
         */
        if (KeVTLR_b_PwrSrcSwapCAN)
        {
            /* UnitDelay: '<S95>/Unit Delay' */
            rtb_TmpSignalConversionAtVeC_ng = rtb_TmpSignalConversionAtVeC_mv;

            /* UnitDelay: '<S79>/Unit Delay' */
            rtb_TmpSignalConversionAtVeC_mv = rtb_TmpSignalConversionAtVeC_jx;
        }
        else
        {
            /* UnitDelay: '<S95>/Unit Delay' */
            rtb_TmpSignalConversionAtVeC_ng = rtb_TmpSignalConversionAtVeC_jx;
        }

        /* End of Switch: '<S440>/Switch3' */
        /* End of Outputs for SubSystem: '<S21>/PP_with_DiffPwrSource' */
    }

    /* End of If: '<S21>/If1' */

    /* Outputs for Atomic SubSystem: '<S24>/EdgeRising2' */
    /* Logic: '<S52>/AND' incorporates:
     *  Logic: '<S52>/OR1'
     *  UnitDelay: '<S52>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeC_oh = (rtb_AND_ab &&
        (!VTLR_ac_DW.UnitDelay_DSTATE_m4));

    /* Update for UnitDelay: '<S52>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_m4 = rtb_AND_ab;

    /* End of Outputs for SubSystem: '<S24>/EdgeRising2' */

    /* Logic: '<S24>/Logical8' */
    rtb_TmpSignalConversionAtVeCI_b = (rtb_TmpSignalConversionAtVeC_ng ||
        rtb_TmpSignalConversionAtVeC_lz);

    /* Outputs for Atomic SubSystem: '<S24>/EdgeRising3' */
    /* Logic: '<S53>/OR1' incorporates:
     *  UnitDelay: '<S53>/Unit Delay'
     */
    rtb_OR1_had = !VTLR_ac_DW.UnitDelay_DSTATE_lw;

    /* Update for UnitDelay: '<S53>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_lw = rtb_TmpSignalConversionAtVeCI_b;

    /* End of Outputs for SubSystem: '<S24>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S24>/EdgeFalling1' */
    /* Logic: '<S49>/AND' incorporates:
     *  Logic: '<S49>/OR1'
     *  UnitDelay: '<S49>/Unit Delay'
     */
    rtb_AND_cw = ((!rtb_TmpSignalConversionAtVeCI_b) &&
                  (VTLR_ac_DW.UnitDelay_DSTATE_ao));

    /* Update for UnitDelay: '<S49>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_ao = rtb_TmpSignalConversionAtVeCI_b;

    /* End of Outputs for SubSystem: '<S24>/EdgeFalling1' */

    /* Chart: '<S24>/PP1Detection' incorporates:
     *  Logic: '<S53>/AND'
     */
    /* Gateway: VTLR_MedTED/VTLC/Authentication/V2L_Onboard_IDCM_Auth/PP1Detection */
    /* During: VTLR_MedTED/VTLC/Authentication/V2L_Onboard_IDCM_Auth/PP1Detection */
    if (((uint32)VTLR_ac_DW.is_active_c4_VTLR_ac) == 0U)
    {
        /* Entry: VTLR_MedTED/VTLC/Authentication/V2L_Onboard_IDCM_Auth/PP1Detection */
        VTLR_ac_DW.is_active_c4_VTLR_ac = 1U;

        /* Entry Internal: VTLR_MedTED/VTLC/Authentication/V2L_Onboard_IDCM_Auth/PP1Detection */
        /* Transition: '<S63>:2' */
        VTLR_ac_DW.is_c4_VTLR_ac = VTLR_ac_IN_OFF;

        /* Entry 'OFF': '<S63>:1' */
        rtb_TmpSignalConversionAtVeC_jx = false;
    }
    else if (((sint32)VTLR_ac_DW.is_c4_VTLR_ac) == 1)
    {
        rtb_TmpSignalConversionAtVeC_jx = false;

        /* Outputs for Atomic SubSystem: '<S24>/EdgeRising3' */
        /* During 'OFF': '<S63>:1' */
        if ((rtb_TmpSignalConversionAtVeCI_b && rtb_OR1_had) ||
                rtb_TmpSignalConversionAtVeC_oh)
        {
            /* Transition: '<S63>:16' */
            /* Transition: '<S63>:13' */
            VTLR_ac_DW.is_c4_VTLR_ac = VTLR_ac_IN_ON;

            /* Entry 'ON': '<S63>:3' */
            rtb_TmpSignalConversionAtVeC_jx = true;
        }

        /* End of Outputs for SubSystem: '<S24>/EdgeRising3' */
    }
    else
    {
        rtb_TmpSignalConversionAtVeC_jx = true;

        /* During 'ON': '<S63>:3' */
        if (rtb_AND_cw || rtb_TmpSignalConversionAtVeC_oh)
        {
            /* Transition: '<S63>:15' */
            /* Transition: '<S63>:14' */
            VTLR_ac_DW.is_c4_VTLR_ac = VTLR_ac_IN_OFF;

            /* Entry 'OFF': '<S63>:1' */
            rtb_TmpSignalConversionAtVeC_jx = false;
        }
    }

    /* End of Chart: '<S24>/PP1Detection' */

    /* Outputs for Atomic SubSystem: '<S25>/EdgeRising3' */
    /* Logic: '<S78>/AND' incorporates:
     *  Logic: '<S78>/OR1'
     *  UnitDelay: '<S78>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeC_oh = (rtb_TmpSignalConversionAtVeC_mq &&
        (!VTLR_ac_DW.UnitDelay_DSTATE_hws));

    /* Update for UnitDelay: '<S78>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_hws = rtb_TmpSignalConversionAtVeC_mq;

    /* End of Outputs for SubSystem: '<S25>/EdgeRising3' */

    /* Logic: '<S25>/Logical8' */
    rtb_TmpSignalConversionAtVeCI_b = (rtb_TmpSignalConversionAtVeC_mv ||
        rtb_TmpSignalConversionAtVeC_lz);

    /* Outputs for Atomic SubSystem: '<S25>/EdgeRising2' */
    /* Logic: '<S77>/OR1' incorporates:
     *  UnitDelay: '<S77>/Unit Delay'
     */
    rtb_OR1_had = !VTLR_ac_DW.UnitDelay_DSTATE_b2;

    /* Update for UnitDelay: '<S77>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_b2 = rtb_TmpSignalConversionAtVeCI_b;

    /* End of Outputs for SubSystem: '<S25>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S25>/EdgeFalling1' */
    /* Logic: '<S74>/AND' incorporates:
     *  Logic: '<S74>/OR1'
     *  UnitDelay: '<S74>/Unit Delay'
     */
    rtb_AND_cw = ((!rtb_TmpSignalConversionAtVeCI_b) &&
                  (VTLR_ac_DW.UnitDelay_DSTATE_na));

    /* Update for UnitDelay: '<S74>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_na = rtb_TmpSignalConversionAtVeCI_b;

    /* End of Outputs for SubSystem: '<S25>/EdgeFalling1' */

    /* Chart: '<S25>/PP2Detection' incorporates:
     *  Logic: '<S77>/AND'
     */
    /* Gateway: VTLR_MedTED/VTLC/Authentication/V2L_Onboard_PPIM_Auth/PP2Detection */
    /* During: VTLR_MedTED/VTLC/Authentication/V2L_Onboard_PPIM_Auth/PP2Detection */
    if (((uint32)VTLR_ac_DW.is_active_c5_VTLR_ac) == 0U)
    {
        /* Entry: VTLR_MedTED/VTLC/Authentication/V2L_Onboard_PPIM_Auth/PP2Detection */
        VTLR_ac_DW.is_active_c5_VTLR_ac = 1U;

        /* Entry Internal: VTLR_MedTED/VTLC/Authentication/V2L_Onboard_PPIM_Auth/PP2Detection */
        /* Transition: '<S88>:2' */
        VTLR_ac_DW.is_c5_VTLR_ac = VTLR_ac_IN_OFF;

        /* Entry 'OFF': '<S88>:1' */
        rtb_TmpSignalConversionAtVeC_lz = false;
    }
    else if (((sint32)VTLR_ac_DW.is_c5_VTLR_ac) == 1)
    {
        rtb_TmpSignalConversionAtVeC_lz = false;

        /* Outputs for Atomic SubSystem: '<S25>/EdgeRising2' */
        /* During 'OFF': '<S88>:1' */
        if ((rtb_TmpSignalConversionAtVeCI_b && rtb_OR1_had) ||
                rtb_TmpSignalConversionAtVeC_oh)
        {
            /* Transition: '<S88>:16' */
            /* Transition: '<S88>:13' */
            VTLR_ac_DW.is_c5_VTLR_ac = VTLR_ac_IN_ON;

            /* Entry 'ON': '<S88>:3' */
            rtb_TmpSignalConversionAtVeC_lz = true;
        }

        /* End of Outputs for SubSystem: '<S25>/EdgeRising2' */
    }
    else
    {
        rtb_TmpSignalConversionAtVeC_lz = true;

        /* During 'ON': '<S88>:3' */
        if (rtb_AND_cw || rtb_TmpSignalConversionAtVeC_oh)
        {
            /* Transition: '<S88>:15' */
            /* Transition: '<S88>:14' */
            VTLR_ac_DW.is_c5_VTLR_ac = VTLR_ac_IN_OFF;

            /* Entry 'OFF': '<S88>:1' */
            rtb_TmpSignalConversionAtVeC_lz = false;
        }
    }

    /* End of Chart: '<S25>/PP2Detection' */

    /* If: '<S4>/If1' incorporates:
     *  Constant: '<S13>/Calib'
     *  Inport: '<Root>/VeIDCR_U_ACOutVoltage1'
     *  Inport: '<Root>/VeIDCR_b_V2X_FailSts'
     *  Inport: '<Root>/VeSSDR_b_DsblHVBattDischrg'
     */
    if (KeVTLR_b_Enable_V2LOnboard)
    {
        (void)Rte_Read_VeSSDR_b_DsblHVBattDischrg_Value(&Merge_14);

        /* Outputs for IfAction SubSystem: '<S4>/V2L_Onboard' incorporates:
         *  ActionPort: '<S19>/Action Port'
         */
        /* RelationalOperator: '<S212>/Comparison6' incorporates:
         *  Constant: '<S223>/Constant'
         *  Inport: '<Root>/VeSSDR_b_DsblHVBattDischrg'
         *  SignalConversion generated from: '<S1>/VeDMDR_e_TurtleMdSts'
         */
        VeVTLR_b_NoTurtleMd_OB = (((uint32)rtb_TmpSignalConversionAtVeDMDR) ==
            CeDMDR_e_No_Turtle_Mode);

        /* RelationalOperator: '<S212>/Comparison1' incorporates:
         *  Constant: '<S220>/Constant'
         *  Switch: '<S5>/Switch4'
         */
        VeVTLR_b_RangeExtendMode = (((uint32)VeVTLR_e_DrvMdArb) !=
            CeDMDR_e_Range_Mode);

        /* RelationalOperator: '<S215>/Comparison2' incorporates:
         *  Constant: '<S240>/Calib'
         *  Sum: '<S215>/Sum'
         */
        rtb_TmpSignalConversionAtVeC_oh = (VeVTLR_P_BattLTMaxLim >
            (VeVTLR_P_HV_AccPwr + KeVTLR_P_DschrgPwrOffset));

        /* Outputs for Atomic SubSystem: '<S215>/Turn Off Delay Sample Modified' */
        /* Outputs for Atomic SubSystem: '<S248>/EdgeFalling1' */
        /* Logic: '<S274>/AND' incorporates:
         *  Logic: '<S274>/OR1'
         *  UnitDelay: '<S274>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeCI_b = ((!rtb_TmpSignalConversionAtVeC_oh) &&
            (VTLR_ac_DW.UnitDelay_DSTATE_or));

        /* Update for UnitDelay: '<S274>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_or = rtb_TmpSignalConversionAtVeC_oh;

        /* End of Outputs for SubSystem: '<S248>/EdgeFalling1' */

        /* Switch: '<S248>/Switch' incorporates:
         *  MinMax: '<S248>/Minimum1'
         *  UnitDelay: '<S248>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVeCI_b)
        {
            /* Switch: '<S248>/Switch' incorporates:
             *  Constant: '<S239>/Calib'
             */
            rtb_Switch1_p5 = KeVTLR_Cnt_PwrLtCond_Dbnc;
        }
        else
        {
            if (((sint32)VTLR_ac_DW.UnitDelay_DSTATE_n) > 1)
            {
                /* MinMax: '<S248>/Minimum1' incorporates:
                 *  UnitDelay: '<S248>/Unit Delay'
                 */
                rtb_Switch_av = VTLR_ac_DW.UnitDelay_DSTATE_n;
            }
            else
            {
                /* MinMax: '<S248>/Minimum1' */
                rtb_Switch_av = 1U;
            }

            /* Switch: '<S248>/Switch' incorporates:
             *  Constant: '<S248>/Constant Value'
             *  Sum: '<S248>/Summation'
             */
            rtb_Switch1_p5 = (uint16)((sint32)(((sint32)rtb_Switch_av) - 1));
        }

        /* End of Switch: '<S248>/Switch' */

        /* Logic: '<S248>/AND' incorporates:
         *  Constant: '<S248>/Constant Value2'
         *  RelationalOperator: '<S248>/Greater  Than'
         */
        VeVTLR_b_PwrLtChk_Onboard = (rtb_TmpSignalConversionAtVeC_oh ||
            (((sint32)rtb_Switch1_p5) > 0));

        /* Update for UnitDelay: '<S248>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_n = rtb_Switch1_p5;

        /* End of Outputs for SubSystem: '<S215>/Turn Off Delay Sample Modified' */

        /* Outputs for Atomic SubSystem: '<S215>/Hysteresis1' */
        /* Switch: '<S238>/Switch1' incorporates:
         *  Constant: '<S242>/Calib'
         *  RelationalOperator: '<S238>/Greater  Than'
         */
        if (VeVTLR_Pct_HVBatSOC > KeVTLR_Pct_StpDschrgSOCElcMd_RSP)
        {
            /* Switch: '<S238>/Switch1' incorporates:
             *  Constant: '<S238>/Constant Value'
             */
            rtb_TmpSignalConversionAtVeC_oh = true;
        }
        else
        {
            /* Switch: '<S238>/Switch1' incorporates:
             *  Constant: '<S241>/Calib'
             *  RelationalOperator: '<S238>/Greater  Than1'
             *  UnitDelay: '<S238>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeC_oh = ((VeVTLR_Pct_HVBatSOC >=
                KeVTLR_Pct_StpDschrgSOCElcMd_LSP) &&
                (VTLR_ac_DW.UnitDelay_DSTATE_fg));
        }

        /* End of Switch: '<S238>/Switch1' */

        /* Update for UnitDelay: '<S238>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_fg = rtb_TmpSignalConversionAtVeC_oh;

        /* End of Outputs for SubSystem: '<S215>/Hysteresis1' */

        /* RelationalOperator: '<S215>/Relational Operator2' incorporates:
         *  Constant: '<S236>/Constant'
         *  SignalConversion generated from: '<S1>/VeVTXR_e_PowerPanelMd'
         */
        rtb_TmpSignalConversionAtVeCI_b = (((uint32)
            rtb_TmpSignalConversionAtVeVTXR) == CeVTXR_e_ElectricMd);

        /* Outputs for Atomic SubSystem: '<S215>/Hysteresis' */
        /* Switch: '<S237>/Switch1' incorporates:
         *  Constant: '<S244>/Calib'
         *  RelationalOperator: '<S237>/Greater  Than'
         */
        if (VeVTLR_Pct_HVBatSOC > KeVTLR_Pct_StpDschrgSOC_RSP)
        {
            /* Switch: '<S237>/Switch1' incorporates:
             *  Constant: '<S237>/Constant Value'
             */
            rtb_OR1_had = true;
        }
        else
        {
            /* Switch: '<S237>/Switch1' incorporates:
             *  Constant: '<S243>/Calib'
             *  RelationalOperator: '<S237>/Greater  Than1'
             *  UnitDelay: '<S237>/Unit Delay'
             */
            rtb_OR1_had = ((VeVTLR_Pct_HVBatSOC >= KeVTLR_Pct_StpDschrgSOC_LSP) &&
                           (VTLR_ac_DW.UnitDelay_DSTATE_mm));
        }

        /* End of Switch: '<S237>/Switch1' */

        /* Update for UnitDelay: '<S237>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_mm = rtb_OR1_had;

        /* End of Outputs for SubSystem: '<S215>/Hysteresis' */

        /* Switch: '<S215>/Switch2' incorporates:
         *  Constant: '<S245>/Calib'
         *  Constant: '<S246>/Calib'
         *  Logic: '<S215>/Logical1'
         *  Logic: '<S215>/Logical5'
         */
        if ((rtb_TmpSignalConversionAtVeCI_b || (rtb_TmpSignalConversionAtVeHPMR
              && (KeVTLR_b_OvrdPSACond_PPMd))) || (KeVTLR_b_SlctElecPPMd))
        {
            rtb_OR1_had = rtb_TmpSignalConversionAtVeC_oh;
        }

        /* End of Switch: '<S215>/Switch2' */

        /* UnitDelay: '<S394>/Unit Delay' incorporates:
         *  Constant: '<S211>/Constant'
         *  Constant: '<S213>/Calib'
         *  Logic: '<S207>/Logical'
         *  Logic: '<S207>/Logical Operator'
         *  Logic: '<S207>/Logical Operator10'
         *  Logic: '<S207>/Logical Operator14'
         *  Logic: '<S207>/Logical Operator6'
         *  Logic: '<S207>/Logical1'
         *  Logic: '<S207>/Logical26'
         *  Logic: '<S207>/Logical3'
         *  Logic: '<S215>/Logical'
         *  RelationalOperator: '<S207>/Relational Operator2'
         *  Switch: '<S5>/Switch25'
         */
        Merge_14 = ((((((((!Merge_14) && (!VeVTLR_b_LV_SysVoltage_Low)) &&
                         ((((uint32)VeVTLR_e_HV_BatCntctrStat) ==
                           CeHVTR_e_Closed) && (!VeVTLR_b_BattCntctrOpenPndg))) &&
                        (VeVTLR_b_NoTurtleMd_OB)) && (VeVTLR_b_RangeExtendMode))
                      && ((VeVTLR_b_PwrLtChk_Onboard) && rtb_OR1_had)) &&
                     (!VeVTLR_b_RmtVehStartReq)) && ((!VeVTLR_b_HVFuncRejHdAjar)
                     || (KeVTLR_b_EnableHdCnd_PPUsage)));

        /* Logic: '<S249>/Logical1' incorporates:
         *  Logic: '<S214>/Logical Operator4'
         */
        tmpRead_2 = !rtb_OR1_kq;

        /* Logic: '<S249>/Logical2' incorporates:
         *  Logic: '<S214>/Logical Operator4'
         */
        tmpRead = !rtb_TmpSignalConversionAtVeCI_n;

        /* Switch: '<S259>/Switch1' incorporates:
         *  Logic: '<S249>/Logical1'
         *  Logic: '<S249>/Logical2'
         *  Logic: '<S249>/Logical5'
         */
        if ((rtb_Merge16 && tmpRead_2) && tmpRead)
        {
            /* Product: '<S215>/Divide1' incorporates:
             *  Constant: '<S262>/Calib'
             */
            rtb_TmpSignalConversionAtVeCITR = KeVTLR_I_CurrentLimIDCM240;
        }
        else
        {
            /* Logic: '<S249>/Logical4' incorporates:
             *  Logic: '<S249>/Logical8'
             *  Switch: '<S259>/Switch2'
             */
            tmp = (rtb_OR1_kq || rtb_TmpSignalConversionAtVeCI_n);

            /* Switch: '<S259>/Switch2' incorporates:
             *  Logic: '<S249>/Logical3'
             *  Logic: '<S249>/Logical4'
             *  Logic: '<S249>/Logical6'
             *  Logic: '<S249>/Logical7'
             *  Switch: '<S259>/Switch3'
             */
            if (tmp && (!rtb_Merge16))
            {
                /* Product: '<S215>/Divide1' incorporates:
                 *  Constant: '<S260>/Calib'
                 *  Switch: '<S259>/Switch2'
                 */
                rtb_TmpSignalConversionAtVeCITR = KeVTLR_I_CurrLimIDCM;
            }
            else if (tmp && rtb_Merge16)
            {
                /* Switch: '<S259>/Switch3' incorporates:
                 *  Constant: '<S261>/Calib'
                 *  Product: '<S215>/Divide1'
                 *  Switch: '<S259>/Switch2'
                 */
                rtb_TmpSignalConversionAtVeCITR = KeVTLR_I_CurrLimIDCM;
            }
            else
            {
                /* Product: '<S215>/Divide1' incorporates:
                 *  Constant: '<S263>/Calib'
                 *  Switch: '<S259>/Switch2'
                 *  Switch: '<S259>/Switch3'
                 */
                rtb_TmpSignalConversionAtVeCITR = KeVTLR_I_NoLoadCurrLimIDCM;
            }
        }

        /* End of Switch: '<S259>/Switch1' */

        /* RelationalOperator: '<S247>/Relational Operator' incorporates:
         *  Abs: '<S247>/Abs'
         */
        rtb_TmpSignalConversionAtVeHPMR = (fabsf(rtb_Merge10) >
            rtb_TmpSignalConversionAtVeCITR);

        /* Outputs for Atomic SubSystem: '<S247>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S255>/EdgeRising' */
        /* Logic: '<S270>/AND' incorporates:
         *  Logic: '<S270>/OR1'
         *  UnitDelay: '<S270>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeC_oh = (rtb_TmpSignalConversionAtVeHPMR &&
            (!VTLR_ac_DW.UnitDelay_DSTATE_c4));

        /* Update for UnitDelay: '<S270>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_c4 = rtb_TmpSignalConversionAtVeHPMR;

        /* End of Outputs for SubSystem: '<S255>/EdgeRising' */

        /* Logic: '<S255>/OR1' incorporates:
         *  Logic: '<S255>/AND'
         */
        tmp = !rtb_TmpSignalConversionAtVeHPMR;

        /* Switch: '<S255>/Switch1' incorporates:
         *  Constant: '<S253>/Calib'
         *  Constant: '<S255>/Constant Value'
         *  Logic: '<S255>/OR'
         *  Logic: '<S255>/OR1'
         *  MinMax: '<S255>/Minimum'
         *  Sum: '<S255>/Summation'
         *  UnitDelay: '<S255>/Unit Delay'
         */
        if (tmp || rtb_TmpSignalConversionAtVeC_oh)
        {
            /* Switch: '<S255>/Switch1' incorporates:
             *  Constant: '<S255>/Constant Value1'
             */
            rtb_Switch1_p5 = 0U;
        }
        else if (KeVTLR_Cnt_TrunkPP_L1CurLimDbnc < ((uint16)(((uint32)
                    VTLR_ac_DW.UnitDelay_DSTATE_lj) + 1U)))
        {
            /* MinMax: '<S255>/Minimum' incorporates:
             *  Constant: '<S253>/Calib'
             *  Switch: '<S255>/Switch1'
             */
            rtb_Switch1_p5 = KeVTLR_Cnt_TrunkPP_L1CurLimDbnc;
        }
        else
        {
            /* Switch: '<S255>/Switch1' incorporates:
             *  Constant: '<S255>/Constant Value'
             *  MinMax: '<S255>/Minimum'
             *  Sum: '<S255>/Summation'
             *  UnitDelay: '<S255>/Unit Delay'
             */
            rtb_Switch1_p5 = (uint16)(((uint32)VTLR_ac_DW.UnitDelay_DSTATE_lj) +
                1U);
        }

        /* End of Switch: '<S255>/Switch1' */

        /* Update for UnitDelay: '<S255>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_lj = rtb_Switch1_p5;

        /* End of Outputs for SubSystem: '<S247>/Turn On Delay Sample' */

        /* RelationalOperator: '<S247>/Relational Operator1' incorporates:
         *  Abs: '<S247>/Abs1'
         */
        rtb_TmpSignalConversionAtVeC_oh = (fabsf(rtb_Merge11) >
            rtb_TmpSignalConversionAtVeCITR);

        /* Outputs for Atomic SubSystem: '<S247>/Turn On Delay Sample1' */
        /* Outputs for Atomic SubSystem: '<S256>/EdgeRising' */
        /* Logic: '<S271>/AND' incorporates:
         *  Logic: '<S271>/OR1'
         *  UnitDelay: '<S271>/Unit Delay'
         */
        rtb_OR1_had = (rtb_TmpSignalConversionAtVeC_oh &&
                       (!VTLR_ac_DW.UnitDelay_DSTATE_gq));

        /* Update for UnitDelay: '<S271>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_gq = rtb_TmpSignalConversionAtVeC_oh;

        /* End of Outputs for SubSystem: '<S256>/EdgeRising' */

        /* Logic: '<S256>/OR1' incorporates:
         *  Logic: '<S256>/AND'
         */
        rtb_TmpSignalConversionAtVeC_oh = !rtb_TmpSignalConversionAtVeC_oh;

        /* Switch: '<S256>/Switch1' incorporates:
         *  Constant: '<S254>/Calib'
         *  Constant: '<S256>/Constant Value'
         *  Logic: '<S256>/OR'
         *  Logic: '<S256>/OR1'
         *  MinMax: '<S256>/Minimum'
         *  Sum: '<S256>/Summation'
         *  UnitDelay: '<S256>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVeC_oh || rtb_OR1_had)
        {
            /* Switch: '<S256>/Switch1' incorporates:
             *  Constant: '<S256>/Constant Value1'
             */
            rtb_Switch_av = 0U;
        }
        else if (KeVTLR_Cnt_TrunkPP_L2CurLimDbnc < ((uint16)(((uint32)
                    VTLR_ac_DW.UnitDelay_DSTATE_m) + 1U)))
        {
            /* MinMax: '<S256>/Minimum' incorporates:
             *  Constant: '<S254>/Calib'
             *  Switch: '<S256>/Switch1'
             */
            rtb_Switch_av = KeVTLR_Cnt_TrunkPP_L2CurLimDbnc;
        }
        else
        {
            /* Switch: '<S256>/Switch1' incorporates:
             *  Constant: '<S256>/Constant Value'
             *  MinMax: '<S256>/Minimum'
             *  Sum: '<S256>/Summation'
             *  UnitDelay: '<S256>/Unit Delay'
             */
            rtb_Switch_av = (uint16)(((uint32)VTLR_ac_DW.UnitDelay_DSTATE_m) +
                1U);
        }

        /* End of Switch: '<S256>/Switch1' */

        /* Update for UnitDelay: '<S256>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_m = rtb_Switch_av;

        /* Outputs for Atomic SubSystem: '<S247>/Turn On Delay Sample' */
        /* Logic: '<S207>/Logical Operator2' incorporates:
         *  Constant: '<S221>/Constant'
         *  Constant: '<S222>/Constant'
         *  Constant: '<S224>/Constant'
         *  Constant: '<S253>/Calib'
         *  Constant: '<S254>/Calib'
         *  DataStoreRead: '<S24>/Data Store Read2'
         *  Logic: '<S207>/Logical Operator1'
         *  Logic: '<S207>/Logical Operator11'
         *  Logic: '<S207>/Logical Operator7'
         *  Logic: '<S212>/Logical'
         *  Logic: '<S255>/AND'
         *  Logic: '<S256>/AND'
         *  Merge: '<S21>/Merge6'
         *  RelationalOperator: '<S212>/Relational Operator'
         *  RelationalOperator: '<S212>/Relational Operator1'
         *  RelationalOperator: '<S212>/Relational Operator2'
         *  RelationalOperator: '<S255>/Greater  Than'
         *  RelationalOperator: '<S256>/Greater  Than'
         */
        rtb_TmpSignalConversionAtVeC_oh = (((((Merge_14 &&
            (EeVTLR_b_V2L_OB_IDCM_Auth)) && (!VeVTLR_b_PluggedIn)) &&
            (((((uint32)rtb_Merge6) != CeVTLR_e_Flt_Discharging_Disable) &&
              (((uint32)rtb_TmpSignalConversionAtVeID_h) !=
               CeVTLR_e_Discharge_Inhibited)) && (((uint32)
            rtb_TmpSignalConversionAtVeID_h) != CeVTLR_e_Discharge_Terminated)))
            && ((tmp || (rtb_Switch1_p5 < KeVTLR_Cnt_TrunkPP_L1CurLimDbnc)) &&
                (rtb_TmpSignalConversionAtVeC_oh || (rtb_Switch_av <
            KeVTLR_Cnt_TrunkPP_L2CurLimDbnc)))) &&
            rtb_TmpSignalConversionAtVeC_jx);

        /* End of Outputs for SubSystem: '<S247>/Turn On Delay Sample' */
        /* End of Outputs for SubSystem: '<S247>/Turn On Delay Sample1' */

        /* UnitDelay: '<S275>/Unit Delay' */
        rtb_AND_cw = VTLR_ac_DW.UnitDelay_DSTATE_gn;

        /* Outputs for Atomic SubSystem: '<S277>/EdgeRising2' */
        /* Logic: '<S327>/AND' incorporates:
         *  Logic: '<S327>/OR1'
         *  UnitDelay: '<S327>/Unit Delay'
         */
        rtb_OR1_had = (rtb_TmpSignalConversionAtVeC_jx &&
                       (!VTLR_ac_DW.UnitDelay_DSTATE_k0));

        /* Update for UnitDelay: '<S327>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_k0 = rtb_TmpSignalConversionAtVeC_jx;

        /* End of Outputs for SubSystem: '<S277>/EdgeRising2' */

        /* Logic: '<S277>/Logical3' incorporates:
         *  RelationalOperator: '<S23>/Comparison3'
         *  RelationalOperator: '<S277>/Not Equal2'
         *  Switch: '<S5>/Switch1'
         *  UnitDelay: '<S277>/Unit Delay'
         */
        VeVTLR_b_RstDschrg_IDCM = ((VTLR_ac_DW.UnitDelay_DSTATE_ns !=
            VeVTLR_e_PMM_PowerMode) || rtb_OR1_had);

        /* RelationalOperator: '<S214>/Comparison2' incorporates:
         *  Constant: '<S228>/Calib'
         *  Product: '<S214>/Product1'
         */
        rtb_TmpSignalConversionAtVeHPMR = ((rtb_TmpSignalConversionAtVeID_c *
            rtb_TmpSignalConversionAtVeIDCR) > KeVTLR_P_MinPwrNoLoadIDCM);

        /* Outputs for Atomic SubSystem: '<S214>/Turn On Delay Time' */
        /* Outputs for Atomic SubSystem: '<S232>/EdgeRising' */
        /* Logic: '<S234>/AND' incorporates:
         *  Logic: '<S234>/OR1'
         *  UnitDelay: '<S234>/Unit Delay'
         */
        rtb_AND_hb = (rtb_TmpSignalConversionAtVeHPMR &&
                      (!VTLR_ac_DW.UnitDelay_DSTATE_jx));

        /* Update for UnitDelay: '<S234>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_jx = rtb_TmpSignalConversionAtVeHPMR;

        /* End of Outputs for SubSystem: '<S232>/EdgeRising' */

        /* Logic: '<S232>/OR1' incorporates:
         *  Logic: '<S232>/AND'
         */
        tmp = !rtb_TmpSignalConversionAtVeHPMR;

        /* Switch: '<S232>/Switch1' incorporates:
         *  Logic: '<S232>/OR'
         *  Logic: '<S232>/OR1'
         */
        if (tmp || rtb_AND_hb)
        {
            /* Switch: '<S232>/Switch1' incorporates:
             *  Constant: '<S232>/Constant Value1'
             */
            rtb_TmpSignalConversionAtVeCITR = 0.0F;
        }
        else
        {
            /* Switch: '<S232>/Switch1' incorporates:
             *  Constant: '<S226>/Calib'
             *  Constant: '<S230>/Calib'
             *  MinMax: '<S232>/Minimum'
             *  Sum: '<S232>/Summation'
             *  UnitDelay: '<S232>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeCITR = fminf(KeVTLR_t_NoLoadPP1_Dly,
                HeVTLR_t_dT + VTLR_ac_DW.UnitDelay_DSTATE_o);
        }

        /* End of Switch: '<S232>/Switch1' */
        /* End of Outputs for SubSystem: '<S214>/Turn On Delay Time' */
        /* End of Outputs for SubSystem: '<S4>/V2L_Onboard' */
        (void)Rte_Read_VeIDCR_U_ACOutVoltage1_Value(&rtb_Switch1_pz);

        /* Outputs for IfAction SubSystem: '<S4>/V2L_Onboard' incorporates:
         *  ActionPort: '<S19>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S214>/Turn On Delay Time' */
        /* Update for UnitDelay: '<S232>/Unit Delay' incorporates:
         *  Inport: '<Root>/VeIDCR_U_ACOutVoltage1'
         */
        VTLR_ac_DW.UnitDelay_DSTATE_o = rtb_TmpSignalConversionAtVeCITR;

        /* Logic: '<S214>/Logical1' incorporates:
         *  Constant: '<S230>/Calib'
         *  Logic: '<S214>/Logical Operator1'
         *  Logic: '<S214>/Logical Operator4'
         *  Logic: '<S232>/AND'
         *  RelationalOperator: '<S232>/Greater  Than'
         */
        rtb_TmpSignalConversionAtVeHPMR = ((tmp ||
            (rtb_TmpSignalConversionAtVeCITR < KeVTLR_t_NoLoadPP1_Dly)) &&
            ((tmpRead_2 && tmpRead) && (!rtb_Merge16)));

        /* End of Outputs for SubSystem: '<S214>/Turn On Delay Time' */

        /* Logic: '<S210>/Logical6' incorporates:
         *  Constant: '<S217>/Calib'
         *  Logic: '<S210>/Logical5'
         *  RelationalOperator: '<S210>/Relational Operator2'
         */
        rtb_TmpSignalConversionAtVeC_ai = ((rtb_TmpSignalConversionAtVeC_ai ||
            rtb_AND_le) && (rtb_Switch1_pz > KeVTLR_U_ACOutputVolt));

        /* Outputs for Atomic SubSystem: '<S210>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S218>/EdgeRising' */
        /* Logic: '<S219>/AND' incorporates:
         *  Logic: '<S219>/OR1'
         *  UnitDelay: '<S219>/Unit Delay'
         */
        rtb_AND_le = (rtb_TmpSignalConversionAtVeC_ai &&
                      (!VTLR_ac_DW.UnitDelay_DSTATE_af));

        /* Update for UnitDelay: '<S219>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_af = rtb_TmpSignalConversionAtVeC_ai;

        /* End of Outputs for SubSystem: '<S218>/EdgeRising' */

        /* Switch: '<S218>/Switch1' incorporates:
         *  Constant: '<S216>/Calib'
         *  Constant: '<S218>/Constant Value'
         *  Logic: '<S218>/OR'
         *  Logic: '<S218>/OR1'
         *  MinMax: '<S218>/Minimum'
         *  Sum: '<S218>/Summation'
         *  UnitDelay: '<S218>/Unit Delay'
         */
        if ((!rtb_TmpSignalConversionAtVeC_ai) || rtb_AND_le)
        {
            /* Switch: '<S218>/Switch1' incorporates:
             *  Constant: '<S218>/Constant Value1'
             */
            rtb_Switch1_p5 = 0U;
        }
        else if (KeVTLR_Cnt_ACOutputVolt_Dbnc < ((uint16)(((uint32)
                    VTLR_ac_DW.UnitDelay_DSTATE_oa) + 1U)))
        {
            /* MinMax: '<S218>/Minimum' incorporates:
             *  Constant: '<S216>/Calib'
             *  Switch: '<S218>/Switch1'
             */
            rtb_Switch1_p5 = KeVTLR_Cnt_ACOutputVolt_Dbnc;
        }
        else
        {
            /* Switch: '<S218>/Switch1' incorporates:
             *  Constant: '<S218>/Constant Value'
             *  MinMax: '<S218>/Minimum'
             *  Sum: '<S218>/Summation'
             *  UnitDelay: '<S218>/Unit Delay'
             */
            rtb_Switch1_p5 = (uint16)(((uint32)VTLR_ac_DW.UnitDelay_DSTATE_oa) +
                1U);
        }

        /* End of Switch: '<S218>/Switch1' */

        /* Logic: '<S218>/AND' incorporates:
         *  Constant: '<S216>/Calib'
         *  RelationalOperator: '<S218>/Greater  Than'
         */
        rtb_TmpSignalConversionAtVeC_ai = (rtb_TmpSignalConversionAtVeC_ai &&
            (rtb_Switch1_p5 >= KeVTLR_Cnt_ACOutputVolt_Dbnc));

        /* Update for UnitDelay: '<S218>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_oa = rtb_Switch1_p5;

        /* End of Outputs for SubSystem: '<S210>/Turn On Delay Sample' */

        /* Chart: '<S275>/Discharging_SF_OB_IDCM' incorporates:
         *  Switch: '<S5>/Switch10'
         */
        /* Gateway: VTLR_MedTED/VTLC/V2L_Onboard/V2L_Onboard_IDCM/DschrgSF/Discharging_SF_OB_IDCM */
        VTLR_ac_DW.VeVTLR_b_NoLoadConn_prev_h =
            VTLR_ac_DW.VeVTLR_b_NoLoadConn_start_m;
        VTLR_ac_DW.VeVTLR_b_NoLoadConn_start_m = rtb_TmpSignalConversionAtVeHPMR;

        /* During: VTLR_MedTED/VTLC/V2L_Onboard/V2L_Onboard_IDCM/DschrgSF/Discharging_SF_OB_IDCM */
        if (((uint32)VTLR_ac_DW.is_active_c1_VTLR_ac) == 0U)
        {
            VTLR_ac_DW.VeVTLR_b_NoLoadConn_prev_h =
                rtb_TmpSignalConversionAtVeHPMR;

            /* Entry: VTLR_MedTED/VTLC/V2L_Onboard/V2L_Onboard_IDCM/DschrgSF/Discharging_SF_OB_IDCM */
            VTLR_ac_DW.is_active_c1_VTLR_ac = 1U;

            /* Entry Internal: VTLR_MedTED/VTLC/V2L_Onboard/V2L_Onboard_IDCM/DschrgSF/Discharging_SF_OB_IDCM */
            /* Transition: '<S278>:516' */
            VTLR_ac_DW.is_c1_VTLR_ac = VTLR_ac_IN_PowerUp_State;

            /* Entry 'PowerUp_State': '<S278>:600' */
            VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_PowerUp;
            VeVTLR_k_NDCR_IDCM = 0U;
            VTLR_ac_DW.AC_Sw_Faulted = false;
            VeVTLR_b_ACSwitchSts = false;
            VTLR_ac_DW.PowerUpFlag = true;
            VTLR_ac_DW.AC_Sw_RetryCnt = 0U;
            VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b = 0.0F;
            VTLR_ac_B.BlinkFlag_o = false;
            VTLR_ac_B.NoLoad_Flag_i = false;
        }
        else
        {
            guard1 = false;
            guard2 = false;
            switch (VTLR_ac_DW.is_c1_VTLR_ac)
            {
              case VTLR_ac_IN_AC_Switch_Close:
                VeVTLR_b_SwitchRelayBoxCmd = true;
                VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_AC_Sw_Close;

                /* During 'AC_Switch_Close': '<S278>:526' */
                if (!rtb_TmpSignalConversionAtVeC_oh)
                {
                    /* Transition: '<S278>:555' */
                    VeVTLR_k_NDCR_IDCM = 2U;

                    /* Transition: '<S278>:540' */
                    /* Transition: '<S278>:546' */
                    /* Transition: '<S278>:548' */
                    /* Transition: '<S278>:547' */
                    /* Transition: '<S278>:549' */
                    /* Transition: '<S278>:565' */
                    /* Transition: '<S278>:577' */
                    /* Transition: '<S278>:567' */
                    VTLR_ac_DW.is_c1_VTLR_ac = VTLR_ac_IN_E_Stop;

                    /* Entry 'E_Stop': '<S278>:513' */
                    VeVTLR_e_OBC_MdRq_IDCM = CeOBCR_e_Idle_OBCMdRq;
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b = 0.0F;
                    VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgEStp;
                    VeVTLR_e_DisChrgSysSts_IDCM = CeVTLR_e_DschrgInactv;
                    VeVTLR_e_Trunk_Status = CeVTLR_e_Inactive;
                    VTLR_ac_B.BlinkFlag_o = true;
                }
                else if (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b >
                         KeVTLR_t_ACSw_Response_Tmout)
                {
                    /* Transition: '<S278>:556' */
                    VTLR_ac_DW.is_c1_VTLR_ac = VTLR__IN_Discharging_Mode_Req_d;

                    /* Entry 'Discharging_Mode_Req': '<S278>:523' */
                    VeVTLR_e_OBC_MdRq_IDCM = CeOBCR_e_Dischrg_OBCMdRq;
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b = 0.0F;
                    VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgOBCMd;
                }
                else
                {
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b += HeVTLR_t_dT;
                }
                break;

              case VTLR_ac_IN_AC_Switch_Open:
                VeVTLR_b_SwitchRelayBoxCmd = false;
                VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgACSwitchOpen;

                /* During 'AC_Switch_Open': '<S278>:531' */
                if (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b >
                        KeVTLR_t_ACSw_Response_Timer)
                {
                    /* Transition: '<S278>:575' */
                    VeVTLR_b_ACSwitchSts = false;

                    /* Transition: '<S278>:596' */
                    /* Transition: '<S278>:571' */
                    /* Transition: '<S278>:570' */
                    /* Transition: '<S278>:539' */
                    /* Transition: '<S278>:528' */
                    VTLR_ac_DW.is_c1_VTLR_ac = VTLR_ac_IN_Initial_State;

                    /* Entry 'Initial_State': '<S278>:525' */
                    VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgInit;
                    VeVTLR_e_OBC_MdRq_IDCM = CeOBCR_e_Idle_OBCMdRq;
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b = 0.0F;
                    VeVTLR_e_DisChrgSysSts_IDCM = CeVTLR_e_DschrgInactv;
                    VeVTLR_e_Trunk_Status = CeVTLR_e_Inactive;
                    VeVTLR_b_DschrgRdy4ShtDwn_OB_IDCM = false;
                }
                else
                {
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b += HeVTLR_t_dT;
                }
                break;

              case VTLR_ac_IN_Discharging_h:
                VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgActvSt;
                VeVTLR_e_DisChrgSysSts_IDCM = CeVTLR_e_DschrgActv;
                VeVTLR_e_Trunk_Status = CeVTLR_e_Active;

                /* During 'Discharging': '<S278>:537' */
                if ((VTLR_ac_DW.VeVTLR_b_NoLoadConn_prev_h !=
                        VTLR_ac_DW.VeVTLR_b_NoLoadConn_start_m) &&
                        (!VTLR_ac_DW.VeVTLR_b_NoLoadConn_prev_h))
                {
                    /* Transition: '<S278>:550' */
                    VTLR_ac_DW.is_c1_VTLR_ac = VTLR_ac_IN_Discharging_h;

                    /* Entry 'Discharging': '<S278>:537' */
                    VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgActvSt;
                    VeVTLR_e_DisChrgSysSts_IDCM = CeVTLR_e_DschrgActv;
                    VeVTLR_e_Trunk_Status = CeVTLR_e_Active;
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b = 0.0F;
                    VTLR_ac_DW.AC_Sw_Faulted = false;
                    VTLR_ac_DW.AC_Sw_RetryCnt = 0U;
                    VTLR_ac_B.BlinkFlag_o = false;
                }
                else if ((!rtb_TmpSignalConversionAtVeC_ai) &&
                         (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b >
                          KeVTLR_t_AC_Sw_Tmot))
                {
                    /* Transition: '<S278>:552' */
                    VeVTLR_k_NDCR_IDCM = 5U;
                    VTLR_ac_DW.AC_Sw_Faulted = true;

                    /* Transition: '<S278>:565' */
                    /* Transition: '<S278>:577' */
                    guard1 = true;
                }
                else if (!rtb_TmpSignalConversionAtVeC_oh)
                {
                    /* Transition: '<S278>:543' */
                    VeVTLR_k_NDCR_IDCM = 2U;

                    /* Transition: '<S278>:549' */
                    /* Transition: '<S278>:565' */
                    /* Transition: '<S278>:577' */
                    guard1 = true;
                }
                else if ((((uint32)VeVTLR_e_OBCMd) != CeOBCR_e_Dischrg_OBCM) &&
                         (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b >=
                          KeVTLR_t_DschrgMdOBCM_Tmot))
                {
                    /* Transition: '<S278>:566' */
                    VeVTLR_k_NDCR_IDCM = 4U;

                    /* Transition: '<S278>:577' */
                    guard1 = true;
                }
                else if (rtb_TmpSignalConversionAtVeHPMR &&
                         (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b >
                          KeVTLR_t_NoLoad_Tmot))
                {
                    /* Transition: '<S278>:572' */
                    /* Transition: '<S278>:573' */
                    VeVTLR_k_NDCR_IDCM = 6U;
                    VTLR_ac_B.NoLoad_Flag_i = true;
                    guard1 = true;
                }
                else
                {
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b += HeVTLR_t_dT;
                }
                break;

              case VTLR__IN_Discharging_Mode_Req_d:
                VeVTLR_e_OBC_MdRq_IDCM = CeOBCR_e_Dischrg_OBCMdRq;
                VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgOBCMd;

                /* During 'Discharging_Mode_Req': '<S278>:523' */
                if ((((uint32)VeVTLR_e_OBCMd) == CeOBCR_e_Dischrg_OBCM) &&
                        rtb_TmpSignalConversionAtVeC_ai)
                {
                    /* Transition: '<S278>:542' */
                    VTLR_ac_DW.is_c1_VTLR_ac = VTLR_ac_IN_Discharging_h;

                    /* Entry 'Discharging': '<S278>:537' */
                    VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgActvSt;
                    VeVTLR_e_DisChrgSysSts_IDCM = CeVTLR_e_DschrgActv;
                    VeVTLR_e_Trunk_Status = CeVTLR_e_Active;
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b = 0.0F;
                    VTLR_ac_DW.AC_Sw_Faulted = false;
                    VTLR_ac_DW.AC_Sw_RetryCnt = 0U;
                    VTLR_ac_B.BlinkFlag_o = false;
                }
                else if ((!rtb_TmpSignalConversionAtVeC_ai) &&
                         (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b >
                          KeVTLR_t_AC_Sw_Tmot))
                {
                    /* Transition: '<S278>:560' */
                    VeVTLR_k_NDCR_IDCM = 5U;
                    VTLR_ac_DW.AC_Sw_Faulted = true;
                    guard2 = true;
                }
                else if (!rtb_TmpSignalConversionAtVeC_oh)
                {
                    /* Transition: '<S278>:551' */
                    VeVTLR_k_NDCR_IDCM = 2U;

                    /* Transition: '<S278>:548' */
                    guard2 = true;
                }
                else if (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b >=
                         KeVTLR_t_DschrgMdOBCM_Tmot)
                {
                    /* Transition: '<S278>:563' */
                    VeVTLR_k_NDCR_IDCM = 1U;

                    /* Transition: '<S278>:546' */
                    /* Transition: '<S278>:548' */
                    guard2 = true;
                }
                else
                {
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b += HeVTLR_t_dT;
                }
                break;

              case VTLR_ac_IN_E_Stop:
                VeVTLR_e_OBC_MdRq_IDCM = CeOBCR_e_Idle_OBCMdRq;
                VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgEStp;
                VeVTLR_e_DisChrgSysSts_IDCM = CeVTLR_e_DschrgInactv;
                VeVTLR_e_Trunk_Status = CeVTLR_e_Inactive;

                /* During 'E_Stop': '<S278>:513' */
                if ((rtb_AND_cw && (((uint32)VeVTLR_e_OBCMd) ==
                                    CeOBCR_e_Idle_OBCM)) ||
                        (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b >
                         KeVTLR_t_WaitForIdle_Tmot))
                {
                    /* Transition: '<S278>:589' */
                    /* Transition: '<S278>:568' */
                    VTLR_ac_DW.is_c1_VTLR_ac = VTLR_ac_IN_Shut_Down_d;

                    /* Entry 'Shut_Down': '<S278>:508' */
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b = 0.0F;
                    VeVTLR_b_DschrgRdy4ShtDwn_OB_IDCM = true;
                    VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgShtDwn;
                    VeVTLR_b_SwitchRelayBoxCmd = false;
                    VeVTLR_b_ACSwitchSts = false;
                }
                else if (((!rtb_AND_cw) && ((((uint32)VeVTLR_e_OBCMd) ==
                            CeOBCR_e_Idle_OBCM) && (VTLR_ac_DW.AC_Sw_Faulted))) ||
                         (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b >
                          KeVTLR_t_WaitForIdle_Tmot))
                {
                    /* Transition: '<S278>:574' */
                    VTLR_ac_DW.is_c1_VTLR_ac = VTLR_ac_IN_AC_Switch_Open;

                    /* Entry 'AC_Switch_Open': '<S278>:531' */
                    VeVTLR_b_SwitchRelayBoxCmd = false;
                    VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgACSwitchOpen;
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b = 0.0F;
                    VTLR_ac_DW.AC_Sw_RetryCnt = (uint16)((sint32)(((sint32)
                        VTLR_ac_DW.AC_Sw_RetryCnt) + 1));
                }
                else if (!rtb_AND_cw)
                {
                    /* Transition: '<S278>:586' */
                    /* Transition: '<S278>:571' */
                    /* Transition: '<S278>:570' */
                    /* Transition: '<S278>:539' */
                    /* Transition: '<S278>:528' */
                    VTLR_ac_DW.is_c1_VTLR_ac = VTLR_ac_IN_Initial_State;

                    /* Entry 'Initial_State': '<S278>:525' */
                    VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgInit;
                    VeVTLR_e_OBC_MdRq_IDCM = CeOBCR_e_Idle_OBCMdRq;
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b = 0.0F;
                    VeVTLR_e_DisChrgSysSts_IDCM = CeVTLR_e_DschrgInactv;
                    VeVTLR_e_Trunk_Status = CeVTLR_e_Inactive;
                    VeVTLR_b_DschrgRdy4ShtDwn_OB_IDCM = false;
                }
                else
                {
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b += HeVTLR_t_dT;
                }
                break;

              case VTLR_ac_IN_Initial_State:
                VTLR_ac_Initial_State(&rtb_TmpSignalConversionAtVeC_oh);
                break;

              case VTLR_ac_IN_PowerUp_State:
                VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_PowerUp;

                /* During 'PowerUp_State': '<S278>:600' */
                if (VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b > KeVTLR_t_PowerUp_Tmout)
                {
                    /* Transition: '<S278>:601' */
                    VTLR_ac_DW.is_c1_VTLR_ac = VTLR_ac_IN_Initial_State;

                    /* Entry 'Initial_State': '<S278>:525' */
                    VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgInit;
                    VeVTLR_e_OBC_MdRq_IDCM = CeOBCR_e_Idle_OBCMdRq;
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b = 0.0F;
                    VeVTLR_e_DisChrgSysSts_IDCM = CeVTLR_e_DschrgInactv;
                    VeVTLR_e_Trunk_Status = CeVTLR_e_Inactive;
                    VeVTLR_b_DschrgRdy4ShtDwn_OB_IDCM = false;
                }
                else
                {
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b += HeVTLR_t_dT;
                }
                break;

              default:
                VeVTLR_b_DschrgRdy4ShtDwn_OB_IDCM = true;
                VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgShtDwn;
                VeVTLR_b_SwitchRelayBoxCmd = false;

                /* During 'Shut_Down': '<S278>:508' */
                if (VeVTLR_b_RstDschrg_IDCM)
                {
                    /* Transition: '<S278>:576' */
                    /* Transition: '<S278>:570' */
                    /* Transition: '<S278>:539' */
                    /* Transition: '<S278>:528' */
                    /* Exit 'Shut_Down': '<S278>:508' */
                    VTLR_ac_DW.AC_Sw_Faulted = false;
                    VTLR_ac_DW.PowerUpFlag = true;
                    VTLR_ac_DW.AC_Sw_RetryCnt = 0U;
                    VTLR_ac_B.NoLoad_Flag_i = false;
                    VTLR_ac_B.BlinkFlag_o = false;
                    VTLR_ac_DW.is_c1_VTLR_ac = VTLR_ac_IN_Initial_State;

                    /* Entry 'Initial_State': '<S278>:525' */
                    VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgInit;
                    VeVTLR_e_OBC_MdRq_IDCM = CeOBCR_e_Idle_OBCMdRq;
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b = 0.0F;
                    VeVTLR_e_DisChrgSysSts_IDCM = CeVTLR_e_DschrgInactv;
                    VeVTLR_e_Trunk_Status = CeVTLR_e_Inactive;
                    VeVTLR_b_DschrgRdy4ShtDwn_OB_IDCM = false;
                }
                else
                {
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b += HeVTLR_t_dT;
                }
                break;
            }

            if (guard2)
            {
                /* Transition: '<S278>:547' */
                /* Transition: '<S278>:549' */
                /* Transition: '<S278>:565' */
                /* Transition: '<S278>:577' */
                /* Transition: '<S278>:567' */
                VTLR_ac_DW.is_c1_VTLR_ac = VTLR_ac_IN_E_Stop;

                /* Entry 'E_Stop': '<S278>:513' */
                VeVTLR_e_OBC_MdRq_IDCM = CeOBCR_e_Idle_OBCMdRq;
                VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b = 0.0F;
                VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgEStp;
                VeVTLR_e_DisChrgSysSts_IDCM = CeVTLR_e_DschrgInactv;
                VeVTLR_e_Trunk_Status = CeVTLR_e_Inactive;
                VTLR_ac_B.BlinkFlag_o = true;
            }

            if (guard1)
            {
                /* Transition: '<S278>:567' */
                VTLR_ac_DW.is_c1_VTLR_ac = VTLR_ac_IN_E_Stop;

                /* Entry 'E_Stop': '<S278>:513' */
                VeVTLR_e_OBC_MdRq_IDCM = CeOBCR_e_Idle_OBCMdRq;
                VTLR_ac_DW.VeVTLR_t_DschrgStTmr_b = 0.0F;
                VeVTLR_e_DschrgSt_IDCM = CeVTLR_e_DschrgEStp;
                VeVTLR_e_DisChrgSysSts_IDCM = CeVTLR_e_DschrgInactv;
                VeVTLR_e_Trunk_Status = CeVTLR_e_Inactive;
                VTLR_ac_B.BlinkFlag_o = true;
            }
        }

        /* End of Chart: '<S275>/Discharging_SF_OB_IDCM' */

        /* Merge: '<S4>/Merge_25' incorporates:
         *  DataTypeConversion: '<S19>/Data Type Conversion2'
         */
        rtb_Merge_4_g = VeVTLR_e_DisChrgSysSts_IDCM;

        /* Logic: '<S250>/Logical6' incorporates:
         *  Logic: '<S214>/Logical Operator3'
         */
        tmpRead_2 = !rtb_TmpSignalConversionAtVeCI_o;

        /* Logic: '<S250>/Logical7' incorporates:
         *  Logic: '<S214>/Logical Operator3'
         */
        tmpRead = !rtb_AND_amk;

        /* Switch: '<S264>/Switch1' incorporates:
         *  Constant: '<S269>/Calib'
         *  Logic: '<S250>/Logical10'
         *  Logic: '<S250>/Logical11'
         *  Logic: '<S250>/Logical2'
         *  Logic: '<S250>/Logical3'
         *  Logic: '<S250>/Logical6'
         *  Logic: '<S250>/Logical7'
         *  Logic: '<S250>/Logical8'
         *  Logic: '<S250>/Logical9'
         *  Switch: '<S264>/Switch2'
         *  Switch: '<S264>/Switch3'
         */
        if (((rtb_TmpSignalConversionAtVeC_nm && tmpRead_2) && tmpRead) &&
                (KeVTLR_b_240Ovrd))
        {
            /* Switch: '<S264>/Switch1' incorporates:
             *  Constant: '<S267>/Calib'
             */
            rtb_Switch1_pz = KeVTLR_I_CurrentLimPPIM240;
        }
        else if ((rtb_TmpSignalConversionAtVeCI_o || rtb_AND_amk) &&
                 (!rtb_TmpSignalConversionAtVeC_nm))
        {
            /* Switch: '<S264>/Switch2' incorporates:
             *  Constant: '<S265>/Calib'
             *  Switch: '<S264>/Switch1'
             */
            rtb_Switch1_pz = KeVTLR_I_CurrLimPPIM;
        }
        else if ((rtb_TmpSignalConversionAtVeCI_o && rtb_AND_amk) &&
                 rtb_TmpSignalConversionAtVeC_nm)
        {
            /* Switch: '<S264>/Switch3' incorporates:
             *  Constant: '<S266>/Calib'
             *  Switch: '<S264>/Switch1'
             *  Switch: '<S264>/Switch2'
             */
            rtb_Switch1_pz = KeVTLR_I_CurrLimPPIM;
        }
        else
        {
            /* Switch: '<S264>/Switch1' incorporates:
             *  Constant: '<S268>/Calib'
             *  Switch: '<S264>/Switch2'
             *  Switch: '<S264>/Switch3'
             */
            rtb_Switch1_pz = KeVTLR_I_NoLoadCurrLimPPIM;
        }

        /* End of Switch: '<S264>/Switch1' */

        /* RelationalOperator: '<S247>/Relational Operator2' incorporates:
         *  Abs: '<S247>/Abs2'
         */
        rtb_TmpSignalConversionAtVeC_ai = (fabsf(rtb_TmpSignalConversionAtVeC_go)
            > rtb_Switch1_pz);

        /* Outputs for Atomic SubSystem: '<S247>/Turn On Delay Sample2' */
        /* Outputs for Atomic SubSystem: '<S257>/EdgeRising' */
        /* Logic: '<S272>/AND' incorporates:
         *  Logic: '<S272>/OR1'
         *  UnitDelay: '<S272>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeC_oh = (rtb_TmpSignalConversionAtVeC_ai &&
            (!VTLR_ac_DW.UnitDelay_DSTATE_fn));

        /* Update for UnitDelay: '<S272>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_fn = rtb_TmpSignalConversionAtVeC_ai;

        /* End of Outputs for SubSystem: '<S257>/EdgeRising' */

        /* Logic: '<S257>/OR1' incorporates:
         *  Logic: '<S257>/AND'
         */
        tmp = !rtb_TmpSignalConversionAtVeC_ai;

        /* Switch: '<S257>/Switch1' incorporates:
         *  Constant: '<S251>/Calib'
         *  Constant: '<S257>/Constant Value'
         *  Logic: '<S257>/OR'
         *  Logic: '<S257>/OR1'
         *  MinMax: '<S257>/Minimum'
         *  Sum: '<S257>/Summation'
         *  UnitDelay: '<S257>/Unit Delay'
         */
        if (tmp || rtb_TmpSignalConversionAtVeC_oh)
        {
            /* Switch: '<S257>/Switch1' incorporates:
             *  Constant: '<S257>/Constant Value1'
             */
            rtb_Switch1_p5 = 0U;
        }
        else if (KeVTLR_Cnt_FrunkPP_L1CurLimDbnc < ((uint16)(((uint32)
                    VTLR_ac_DW.UnitDelay_DSTATE_g) + 1U)))
        {
            /* MinMax: '<S257>/Minimum' incorporates:
             *  Constant: '<S251>/Calib'
             *  Switch: '<S257>/Switch1'
             */
            rtb_Switch1_p5 = KeVTLR_Cnt_FrunkPP_L1CurLimDbnc;
        }
        else
        {
            /* Switch: '<S257>/Switch1' incorporates:
             *  Constant: '<S257>/Constant Value'
             *  MinMax: '<S257>/Minimum'
             *  Sum: '<S257>/Summation'
             *  UnitDelay: '<S257>/Unit Delay'
             */
            rtb_Switch1_p5 = (uint16)(((uint32)VTLR_ac_DW.UnitDelay_DSTATE_g) +
                1U);
        }

        /* End of Switch: '<S257>/Switch1' */

        /* Update for UnitDelay: '<S257>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_g = rtb_Switch1_p5;

        /* End of Outputs for SubSystem: '<S247>/Turn On Delay Sample2' */

        /* RelationalOperator: '<S247>/Relational Operator3' incorporates:
         *  Abs: '<S247>/Abs3'
         */
        rtb_TmpSignalConversionAtVeC_oh = (fabsf(rtb_TmpSignalConversionAtVeC_jh)
            > rtb_Switch1_pz);

        /* Outputs for Atomic SubSystem: '<S247>/Turn On Delay Sample3' */
        /* Outputs for Atomic SubSystem: '<S258>/EdgeRising' */
        /* Logic: '<S273>/AND' incorporates:
         *  Logic: '<S273>/OR1'
         *  UnitDelay: '<S273>/Unit Delay'
         */
        rtb_AND_le = (rtb_TmpSignalConversionAtVeC_oh &&
                      (!VTLR_ac_DW.UnitDelay_DSTATE_cq));

        /* Update for UnitDelay: '<S273>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_cq = rtb_TmpSignalConversionAtVeC_oh;

        /* End of Outputs for SubSystem: '<S258>/EdgeRising' */

        /* Logic: '<S258>/OR1' incorporates:
         *  Logic: '<S258>/AND'
         */
        rtb_TmpSignalConversionAtVeC_oh = !rtb_TmpSignalConversionAtVeC_oh;

        /* Switch: '<S258>/Switch1' incorporates:
         *  Constant: '<S252>/Calib'
         *  Constant: '<S258>/Constant Value'
         *  Logic: '<S258>/OR'
         *  Logic: '<S258>/OR1'
         *  MinMax: '<S258>/Minimum'
         *  Sum: '<S258>/Summation'
         *  UnitDelay: '<S258>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVeC_oh || rtb_AND_le)
        {
            /* Switch: '<S258>/Switch1' incorporates:
             *  Constant: '<S258>/Constant Value1'
             */
            rtb_Switch_av = 0U;
        }
        else if (KeVTLR_Cnt_FrunkPP_L2CurLimDbnc < ((uint16)(((uint32)
                    VTLR_ac_DW.UnitDelay_DSTATE_nz) + 1U)))
        {
            /* MinMax: '<S258>/Minimum' incorporates:
             *  Constant: '<S252>/Calib'
             *  Switch: '<S258>/Switch1'
             */
            rtb_Switch_av = KeVTLR_Cnt_FrunkPP_L2CurLimDbnc;
        }
        else
        {
            /* Switch: '<S258>/Switch1' incorporates:
             *  Constant: '<S258>/Constant Value'
             *  MinMax: '<S258>/Minimum'
             *  Sum: '<S258>/Summation'
             *  UnitDelay: '<S258>/Unit Delay'
             */
            rtb_Switch_av = (uint16)(((uint32)VTLR_ac_DW.UnitDelay_DSTATE_nz) +
                1U);
        }

        /* End of Switch: '<S258>/Switch1' */
        /* End of Outputs for SubSystem: '<S247>/Turn On Delay Sample3' */
        /* End of Outputs for SubSystem: '<S4>/V2L_Onboard' */
        (void)Rte_Read_VeIDCR_b_V2X_FailSts_Value(&Merge_13);

        /* Outputs for IfAction SubSystem: '<S4>/V2L_Onboard' incorporates:
         *  ActionPort: '<S19>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S247>/Turn On Delay Sample3' */
        /* Update for UnitDelay: '<S258>/Unit Delay' incorporates:
         *  Inport: '<Root>/VeIDCR_b_V2X_FailSts'
         */
        VTLR_ac_DW.UnitDelay_DSTATE_nz = rtb_Switch_av;

        /* Outputs for Atomic SubSystem: '<S247>/Turn On Delay Sample2' */
        /* Logic: '<S207>/Logical Operator4' incorporates:
         *  Constant: '<S225>/Constant'
         *  Constant: '<S251>/Calib'
         *  Constant: '<S252>/Calib'
         *  DataStoreRead: '<S25>/Data Store Read2'
         *  Logic: '<S207>/Logical Operator5'
         *  Logic: '<S207>/Logical Operator9'
         *  Logic: '<S212>/Logical1'
         *  Logic: '<S257>/AND'
         *  Logic: '<S258>/AND'
         *  Merge: '<S21>/Merge7'
         *  RelationalOperator: '<S212>/Relational Operator3'
         *  RelationalOperator: '<S257>/Greater  Than'
         *  RelationalOperator: '<S258>/Greater  Than'
         */
        Merge_13 = ((((Merge_14 && (EeVTLR_b_V2L_OB_PPIM_Auth)) && ((tmp ||
                        (rtb_Switch1_p5 < KeVTLR_Cnt_FrunkPP_L1CurLimDbnc)) &&
                       (rtb_TmpSignalConversionAtVeC_oh || (rtb_Switch_av <
                         KeVTLR_Cnt_FrunkPP_L2CurLimDbnc)))) && ((((uint32)
                        rtb_TmpSignalConversionAtVeCI_c) !=
                       CeVTLR_e_Flt_Discharging_DisablePP2) && (!Merge_13))) &&
                    rtb_TmpSignalConversionAtVeC_lz);

        /* End of Outputs for SubSystem: '<S247>/Turn On Delay Sample2' */
        /* End of Outputs for SubSystem: '<S247>/Turn On Delay Sample3' */

        /* Outputs for Atomic SubSystem: '<S332>/EdgeRising2' */
        /* Logic: '<S395>/AND' incorporates:
         *  Logic: '<S395>/OR1'
         *  UnitDelay: '<S395>/Unit Delay'
         */
        rtb_AND_le = (rtb_TmpSignalConversionAtVeC_lz &&
                      (!VTLR_ac_DW.UnitDelay_DSTATE_n4));

        /* Update for UnitDelay: '<S395>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_n4 = rtb_TmpSignalConversionAtVeC_lz;

        /* End of Outputs for SubSystem: '<S332>/EdgeRising2' */

        /* Logic: '<S332>/Logical3' incorporates:
         *  RelationalOperator: '<S23>/Comparison3'
         *  RelationalOperator: '<S332>/Not Equal2'
         *  Switch: '<S5>/Switch1'
         *  UnitDelay: '<S332>/Unit Delay'
         */
        VeVTLR_b_RstDschrg_PPIM = ((VTLR_ac_DW.UnitDelay_DSTATE_cl !=
            VeVTLR_e_PMM_PowerMode) || rtb_AND_le);

        /* RelationalOperator: '<S214>/Comparison1' incorporates:
         *  Constant: '<S229>/Calib'
         *  Product: '<S214>/Product2'
         */
        Merge_14 = ((rtb_TmpSignalConversionAtVeID_m *
                     rtb_TmpSignalConversionAtVeID_o) >
                    KeVTLR_P_MinPwrNoLoadPPIM);

        /* Outputs for Atomic SubSystem: '<S214>/Turn On Delay Time1' */
        /* Outputs for Atomic SubSystem: '<S233>/EdgeRising' */
        /* Logic: '<S235>/AND' incorporates:
         *  Logic: '<S235>/OR1'
         *  UnitDelay: '<S235>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeC_ai = (Merge_14 &&
            (!VTLR_ac_DW.UnitDelay_DSTATE_eo));

        /* Update for UnitDelay: '<S235>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_eo = Merge_14;

        /* End of Outputs for SubSystem: '<S233>/EdgeRising' */

        /* Logic: '<S233>/OR1' incorporates:
         *  Logic: '<S233>/AND'
         */
        tmp = !Merge_14;

        /* Switch: '<S233>/Switch1' incorporates:
         *  Logic: '<S233>/OR'
         *  Logic: '<S233>/OR1'
         */
        if (tmp || rtb_TmpSignalConversionAtVeC_ai)
        {
            /* Switch: '<S233>/Switch1' incorporates:
             *  Constant: '<S233>/Constant Value1'
             */
            rtb_TmpSignalConversionAtVeC_go = 0.0F;
        }
        else
        {
            /* Switch: '<S233>/Switch1' incorporates:
             *  Constant: '<S227>/Calib'
             *  Constant: '<S231>/Calib'
             *  MinMax: '<S233>/Minimum'
             *  Sum: '<S233>/Summation'
             *  UnitDelay: '<S233>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeC_go = fminf(KeVTLR_t_NoLoadPP2_Dly,
                HeVTLR_t_dT + VTLR_ac_DW.UnitDelay_DSTATE);
        }

        /* End of Switch: '<S233>/Switch1' */

        /* Update for UnitDelay: '<S233>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE = rtb_TmpSignalConversionAtVeC_go;

        /* Logic: '<S214>/Logical2' incorporates:
         *  Constant: '<S231>/Calib'
         *  Logic: '<S214>/Logical Operator2'
         *  Logic: '<S214>/Logical Operator3'
         *  Logic: '<S233>/AND'
         *  RelationalOperator: '<S233>/Greater  Than'
         */
        rtb_TmpSignalConversionAtVeC_oh = ((tmp ||
            (rtb_TmpSignalConversionAtVeC_go < KeVTLR_t_NoLoadPP2_Dly)) &&
            ((tmpRead_2 && tmpRead) && (!rtb_TmpSignalConversionAtVeC_nm)));

        /* End of Outputs for SubSystem: '<S214>/Turn On Delay Time1' */

        /* Chart: '<S330>/Discharging_SF_OB_PPIM' incorporates:
         *  Inport: '<Root>/VeIDCR_e_V2X_ModeFeedback'
         *  UnitDelay: '<S330>/Unit Delay'
         */
        /* Gateway: VTLR_MedTED/VTLC/V2L_Onboard/V2L_Onboard_PPIM/DschrgSF/Discharging_SF_OB_PPIM */
        VTLR_ac_DW.VeVTLR_b_NoLoadConn_prev =
            VTLR_ac_DW.VeVTLR_b_NoLoadConn_start;
        VTLR_ac_DW.VeVTLR_b_NoLoadConn_start = rtb_TmpSignalConversionAtVeC_oh;

        /* During: VTLR_MedTED/VTLC/V2L_Onboard/V2L_Onboard_PPIM/DschrgSF/Discharging_SF_OB_PPIM */
        if (((uint32)VTLR_ac_DW.is_active_c3_VTLR_ac) == 0U)
        {
            VTLR_ac_DW.VeVTLR_b_NoLoadConn_prev =
                rtb_TmpSignalConversionAtVeC_oh;

            /* Entry: VTLR_MedTED/VTLC/V2L_Onboard/V2L_Onboard_PPIM/DschrgSF/Discharging_SF_OB_PPIM */
            VTLR_ac_DW.is_active_c3_VTLR_ac = 1U;

            /* Entry Internal: VTLR_MedTED/VTLC/V2L_Onboard/V2L_Onboard_PPIM/DschrgSF/Discharging_SF_OB_PPIM */
            /* Transition: '<S333>:316' */
            VeVTLR_k_NDCR_PPIM = 0U;
            VTLR_ac_B.NoLoad_Flag = false;
            VTLR_ac_B.BlinkFlag = false;
            VTLR_ac_DW.is_c3_VTLR_ac = VTLR_ac_IN_Initial_State_m;

            /* Entry 'Initial_State': '<S333>:333' */
            rtb_VeVTLR_e_PPIM_DschrgSt = CeVTLR_e_DschrgInit_PPIM;
            VeVTLR_e_DisChrgSysSts_PPIM = CeVTLR_e_DschrgInactv;
            VeVTLR_e_Frunk_Status = CeVTLR_e_Inactive_Frunk;
            VeVTLR_e_PPI_MdRq = CeVTLR_e_Idle;
            VTLR_ac_DW.VeVTLR_t_DschrgStTmr = 0.0F;
            VeVTLR_b_DschrgRdy4ShtDwn_OB_PPIM = false;
        }
        else
        {
            (void)Rte_Read_VeIDCR_e_V2X_ModeFeedback_Value(&tmpRead_9);
            guard1 = false;
            guard2 = false;
            switch (VTLR_ac_DW.is_c3_VTLR_ac)
            {
              case VTLR_ac_IN_Discharging_hi:
                rtb_VeVTLR_e_PPIM_DschrgSt = CeVTLR_e_DschrgActvSt_PPIM;
                VeVTLR_e_DisChrgSysSts_PPIM = CeVTLR_e_DschrgActv;
                VeVTLR_e_Frunk_Status = CeVTLR_e_Active_Frunk;

                /* During 'Discharging': '<S333>:354' */
                if ((VTLR_ac_DW.VeVTLR_b_NoLoadConn_prev !=
                        VTLR_ac_DW.VeVTLR_b_NoLoadConn_start) &&
                        (!VTLR_ac_DW.VeVTLR_b_NoLoadConn_prev))
                {
                    /* Transition: '<S333>:301' */
                    VTLR_ac_DW.is_c3_VTLR_ac = VTLR_ac_IN_Discharging_hi;

                    /* Entry 'Discharging': '<S333>:354' */
                    VeVTLR_e_DisChrgSysSts_PPIM = CeVTLR_e_DschrgActv;
                    VeVTLR_e_Frunk_Status = CeVTLR_e_Active_Frunk;
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr = 0.0F;
                    VTLR_ac_B.BlinkFlag = false;
                }
                else if (rtb_TmpSignalConversionAtVeC_oh &&
                         (VTLR_ac_DW.VeVTLR_t_DschrgStTmr > KeVTLR_t_NoLoad_Tmot))
                {
                    /* Transition: '<S333>:360' */
                    /* Transition: '<S333>:368' */
                    VeVTLR_k_NDCR_PPIM = 4U;
                    VTLR_ac_B.NoLoad_Flag = true;
                    guard1 = true;
                }
                else if (!Merge_13)
                {
                    /* Transition: '<S333>:299' */
                    VeVTLR_k_NDCR_PPIM = 2U;

                    /* Transition: '<S333>:369' */
                    /* Transition: '<S333>:361' */
                    guard1 = true;
                }
                else if ((((uint32)tmpRead_9) != CeVTLR_e_Discharge) &&
                         (VTLR_ac_DW.VeVTLR_t_DschrgStTmr >=
                          KeVTLR_t_DschrgMdOBCM_Tmot))
                {
                    /* Transition: '<S333>:363' */
                    VeVTLR_k_NDCR_PPIM = 3U;

                    /* Transition: '<S333>:361' */
                    guard1 = true;
                }
                else
                {
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr += HeVTLR_t_dT;
                }
                break;

              case VTLR__IN_Discharging_Mode_Req_e:
                VeVTLR_e_PPI_MdRq = CeVTLR_e_Discharge;
                rtb_VeVTLR_e_PPIM_DschrgSt = CeVTLR_e_DschrgPPIMd_PPIM;

                /* During 'Discharging_Mode_Req': '<S333>:314' */
                if (((uint32)tmpRead_9) == CeVTLR_e_Discharge)
                {
                    /* Transition: '<S333>:356' */
                    VTLR_ac_DW.is_c3_VTLR_ac = VTLR_ac_IN_Discharging_hi;

                    /* Entry 'Discharging': '<S333>:354' */
                    rtb_VeVTLR_e_PPIM_DschrgSt = CeVTLR_e_DschrgActvSt_PPIM;
                    VeVTLR_e_DisChrgSysSts_PPIM = CeVTLR_e_DschrgActv;
                    VeVTLR_e_Frunk_Status = CeVTLR_e_Active_Frunk;
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr = 0.0F;
                    VTLR_ac_B.BlinkFlag = false;
                }
                else if (VTLR_ac_DW.VeVTLR_t_DschrgStTmr >=
                         KeVTLR_t_DschrgMdOBCM_Tmot)
                {
                    /* Transition: '<S333>:349' */
                    VeVTLR_k_NDCR_PPIM = 1U;

                    /* Transition: '<S333>:320' */
                    guard2 = true;
                }
                else if (!Merge_13)
                {
                    /* Transition: '<S333>:351' */
                    VeVTLR_k_NDCR_PPIM = 2U;
                    guard2 = true;
                }
                else
                {
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr += HeVTLR_t_dT;
                }
                break;

              case VTLR_ac_IN_E_Stop_c:
                VeVTLR_e_PPI_MdRq = CeVTLR_e_Idle;
                VeVTLR_e_DisChrgSysSts_PPIM = CeVTLR_e_DschrgInactv;
                VeVTLR_e_Frunk_Status = CeVTLR_e_Inactive_Frunk;

                /* During 'E_Stop': '<S333>:300' */
                if (VTLR_ac_DW.UnitDelay_DSTATE_b)
                {
                    /* Transition: '<S333>:373' */
                    VTLR_ac_DW.is_c3_VTLR_ac = VTLR_ac_IN_Shut_Down_e;

                    /* Entry 'Shut_Down': '<S333>:318' */
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr = 0.0F;
                    VeVTLR_b_DschrgRdy4ShtDwn_OB_PPIM = true;
                    rtb_VeVTLR_e_PPIM_DschrgSt = CeVTLR_e_DschrgShtDwn_PPIM;
                }
                else
                {
                    /* Transition: '<S333>:375' */
                    /* Transition: '<S333>:364' */
                    /* Transition: '<S333>:370' */
                    /* Transition: '<S333>:335' */
                    /* Transition: '<S333>:332' */
                    VTLR_ac_DW.is_c3_VTLR_ac = VTLR_ac_IN_Initial_State_m;

                    /* Entry 'Initial_State': '<S333>:333' */
                    rtb_VeVTLR_e_PPIM_DschrgSt = CeVTLR_e_DschrgInit_PPIM;
                    VeVTLR_e_DisChrgSysSts_PPIM = CeVTLR_e_DschrgInactv;
                    VeVTLR_e_Frunk_Status = CeVTLR_e_Inactive_Frunk;
                    VeVTLR_e_PPI_MdRq = CeVTLR_e_Idle;
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr = 0.0F;
                    VeVTLR_b_DschrgRdy4ShtDwn_OB_PPIM = false;
                }
                break;

              case VTLR_ac_IN_Initial_State_m:
                rtb_VeVTLR_e_PPIM_DschrgSt = CeVTLR_e_DschrgInit_PPIM;
                VeVTLR_e_DisChrgSysSts_PPIM = CeVTLR_e_DschrgInactv;
                VeVTLR_e_Frunk_Status = CeVTLR_e_Inactive_Frunk;
                VeVTLR_e_PPI_MdRq = CeVTLR_e_Idle;
                VeVTLR_b_DschrgRdy4ShtDwn_OB_PPIM = false;

                /* During 'Initial_State': '<S333>:333' */
                tmpRead_2 = !VTLR_ac_B.NoLoad_Flag;
                if ((Merge_13 && (((uint32)tmpRead_9) == CeVTLR_e_Idle)) &&
                        tmpRead_2)
                {
                    /* Transition: '<S333>:319' */
                    VTLR_ac_DW.is_c3_VTLR_ac = VTLR__IN_Discharging_Mode_Req_e;

                    /* Entry 'Discharging_Mode_Req': '<S333>:314' */
                    VeVTLR_e_PPI_MdRq = CeVTLR_e_Discharge;
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr = 0.0F;
                    rtb_VeVTLR_e_PPIM_DschrgSt = CeVTLR_e_DschrgPPIMd_PPIM;
                }
                else if (VTLR_ac_B.NoLoad_Flag)
                {
                    /* Transition: '<S333>:379' */
                    /* Transition: '<S333>:382' */
                    /* Transition: '<S333>:381' */
                    VTLR_ac_DW.is_c3_VTLR_ac = VTLR_ac_IN_Shut_Down_e;

                    /* Entry 'Shut_Down': '<S333>:318' */
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr = 0.0F;
                    VeVTLR_b_DschrgRdy4ShtDwn_OB_PPIM = true;
                    rtb_VeVTLR_e_PPIM_DschrgSt = CeVTLR_e_DschrgShtDwn_PPIM;
                }
                else if ((VTLR_ac_DW.VeVTLR_t_DschrgStTmr >=
                          KeVTLR_t_InitSts_Tmot) || tmpRead_2)
                {
                    /* Transition: '<S333>:339' */
                    VeVTLR_k_NDCR_PPIM = 1U;

                    /* Transition: '<S333>:311' */
                    /* Transition: '<S333>:320' */
                    /* Transition: '<S333>:355' */
                    /* Transition: '<S333>:369' */
                    /* Transition: '<S333>:361' */
                    /* Transition: '<S333>:358' */
                    VTLR_ac_DW.is_c3_VTLR_ac = VTLR_ac_IN_E_Stop_c;

                    /* Entry 'E_Stop': '<S333>:300' */
                    VeVTLR_e_PPI_MdRq = CeVTLR_e_Idle;
                    VeVTLR_e_DisChrgSysSts_PPIM = CeVTLR_e_DschrgInactv;
                    VeVTLR_e_Frunk_Status = CeVTLR_e_Inactive_Frunk;
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr = 0.0F;
                    rtb_VeVTLR_e_PPIM_DschrgSt = CeVTLR_e_DschrgEStp_PPIM;
                    VTLR_ac_B.BlinkFlag = true;
                }
                else
                {
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr += HeVTLR_t_dT;
                }
                break;

              default:
                VeVTLR_b_DschrgRdy4ShtDwn_OB_PPIM = true;
                rtb_VeVTLR_e_PPIM_DschrgSt = CeVTLR_e_DschrgShtDwn_PPIM;

                /* During 'Shut_Down': '<S333>:318' */
                if (VeVTLR_b_RstDschrg_PPIM)
                {
                    /* Transition: '<S333>:359' */
                    VTLR_ac_B.NoLoad_Flag = false;
                    VTLR_ac_B.BlinkFlag = false;

                    /* Transition: '<S333>:370' */
                    /* Transition: '<S333>:335' */
                    /* Transition: '<S333>:332' */
                    VTLR_ac_DW.is_c3_VTLR_ac = VTLR_ac_IN_Initial_State_m;

                    /* Entry 'Initial_State': '<S333>:333' */
                    rtb_VeVTLR_e_PPIM_DschrgSt = CeVTLR_e_DschrgInit_PPIM;
                    VeVTLR_e_DisChrgSysSts_PPIM = CeVTLR_e_DschrgInactv;
                    VeVTLR_e_Frunk_Status = CeVTLR_e_Inactive_Frunk;
                    VeVTLR_e_PPI_MdRq = CeVTLR_e_Idle;
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr = 0.0F;
                    VeVTLR_b_DschrgRdy4ShtDwn_OB_PPIM = false;
                }
                else
                {
                    VTLR_ac_DW.VeVTLR_t_DschrgStTmr += HeVTLR_t_dT;
                }
                break;
            }

            if (guard2)
            {
                /* Transition: '<S333>:355' */
                /* Transition: '<S333>:369' */
                /* Transition: '<S333>:361' */
                /* Transition: '<S333>:358' */
                VTLR_ac_DW.is_c3_VTLR_ac = VTLR_ac_IN_E_Stop_c;

                /* Entry 'E_Stop': '<S333>:300' */
                VeVTLR_e_PPI_MdRq = CeVTLR_e_Idle;
                VeVTLR_e_DisChrgSysSts_PPIM = CeVTLR_e_DschrgInactv;
                VeVTLR_e_Frunk_Status = CeVTLR_e_Inactive_Frunk;
                VTLR_ac_DW.VeVTLR_t_DschrgStTmr = 0.0F;
                rtb_VeVTLR_e_PPIM_DschrgSt = CeVTLR_e_DschrgEStp_PPIM;
                VTLR_ac_B.BlinkFlag = true;
            }

            if (guard1)
            {
                /* Transition: '<S333>:358' */
                VTLR_ac_DW.is_c3_VTLR_ac = VTLR_ac_IN_E_Stop_c;

                /* Entry 'E_Stop': '<S333>:300' */
                VeVTLR_e_PPI_MdRq = CeVTLR_e_Idle;
                VeVTLR_e_DisChrgSysSts_PPIM = CeVTLR_e_DschrgInactv;
                VeVTLR_e_Frunk_Status = CeVTLR_e_Inactive_Frunk;
                VTLR_ac_DW.VeVTLR_t_DschrgStTmr = 0.0F;
                rtb_VeVTLR_e_PPIM_DschrgSt = CeVTLR_e_DschrgEStp_PPIM;
                VTLR_ac_B.BlinkFlag = true;
            }
        }

        /* End of Chart: '<S330>/Discharging_SF_OB_PPIM' */

        /* Switch: '<S105>/Switch1' incorporates:
         *  DataTypeConversion: '<S19>/Data Type Conversion3'
         */
        rtb_Switch1_ns = VeVTLR_e_DisChrgSysSts_PPIM;

        /* Switch: '<S215>/Switch' */
        if (rtb_TmpSignalConversionAtVeCI_b)
        {
            /* Merge: '<S4>/Merge_28' incorporates:
             *  Constant: '<S242>/Calib'
             */
            rtb_TmpSignalConversionAtVeC_go = KeVTLR_Pct_StpDschrgSOCElcMd_RSP;
        }
        else
        {
            /* Merge: '<S4>/Merge_28' incorporates:
             *  Constant: '<S244>/Calib'
             */
            rtb_TmpSignalConversionAtVeC_go = KeVTLR_Pct_StpDschrgSOC_RSP;
        }

        /* End of Switch: '<S215>/Switch' */

        /* Saturate: '<S215>/Saturation2' */
        if (rtb_TmpSignalConversionAtVeIDCR > 999.1F)
        {
            rtb_TmpSignalConversionAtVeC_jh = 999.1F;
        }
        else if (rtb_TmpSignalConversionAtVeIDCR < 180.0F)
        {
            rtb_TmpSignalConversionAtVeC_jh = 180.0F;
        }
        else
        {
            rtb_TmpSignalConversionAtVeC_jh = rtb_TmpSignalConversionAtVeIDCR;
        }

        /* End of Saturate: '<S215>/Saturation2' */

        /* Product: '<S215>/Divide' */
        rtb_TmpSignalConversionAtVeC_jh = rtb_Merge4 /
            rtb_TmpSignalConversionAtVeC_jh;

        /* Saturate: '<S215>/Saturation' */
        if (rtb_TmpSignalConversionAtVeC_jh > 63.0F)
        {
            /* Merge: '<S4>/Merge_23' */
            rtb_TmpSignalConversionAtVeC_jh = 63.0F;
        }
        else
        {
            if (rtb_TmpSignalConversionAtVeC_jh < 0.0F)
            {
                /* Merge: '<S4>/Merge_23' */
                rtb_TmpSignalConversionAtVeC_jh = 0.0F;
            }
        }

        /* End of Saturate: '<S215>/Saturation' */

        /* Saturate: '<S215>/Saturation3' */
        if (rtb_TmpSignalConversionAtVeID_o > 1023.0F)
        {
            rtb_Merge4 = 1023.0F;
        }
        else if (rtb_TmpSignalConversionAtVeID_o < 1.0F)
        {
            rtb_Merge4 = 1.0F;
        }
        else
        {
            rtb_Merge4 = rtb_TmpSignalConversionAtVeID_o;
        }

        /* End of Saturate: '<S215>/Saturation3' */

        /* Product: '<S215>/Divide1' */
        rtb_TmpSignalConversionAtVeC_kf /= rtb_Merge4;

        /* Saturate: '<S215>/Saturation1' */
        if (rtb_TmpSignalConversionAtVeC_kf > 63.0F)
        {
            /* Merge: '<S4>/Merge_24' */
            rtb_TmpSignalConversionAtVeC_kf = 63.0F;
        }
        else
        {
            if (rtb_TmpSignalConversionAtVeC_kf < 0.0F)
            {
                /* Merge: '<S4>/Merge_24' */
                rtb_TmpSignalConversionAtVeC_kf = 0.0F;
            }
        }

        /* End of Saturate: '<S215>/Saturation1' */

        /* SignalConversion generated from: '<S1>/OBCM_Mode_Req_IDCM' incorporates:
         *  DataTypeConversion: '<S281>/DataTypeConversion'
         *  Merge: '<S4>/Merge_12'
         *  Outport: '<Root>/VeVTLR_e_DschrgOBCMdRq_Onboard'
         */
        (void)Rte_Write_VeVTLR_e_DschrgOBCMdRq_Onboard_Value
            (VeVTLR_e_OBC_MdRq_IDCM);

        /* Merge: '<S4>/Merge_15' incorporates:
         *  DataTypeConversion: '<S282>/DataTypeConversion'
         */
        rtb_Merge_15 = VeVTLR_e_Trunk_Status;

        /* Merge: '<S4>/Merge_13' incorporates:
         *  Gain: '<S284>/Gain'
         */
        Merge_13 = VeVTLR_b_DschrgRdy4ShtDwn_OB_IDCM;

        /* Merge: '<S4>/Merge_14' incorporates:
         *  Gain: '<S285>/Gain'
         */
        Merge_14 = VeVTLR_b_SwitchRelayBoxCmd;

        /* Merge: '<S4>/Merge_27' incorporates:
         *  Gain: '<S286>/Gain'
         */
        rtb_TmpSignalConversionAtVeC_ai = VeVTLR_b_ACSwitchSts;

        /* Outputs for Atomic SubSystem: '<S276>/Count Down Reset Trigger Enabled' */
        /* Outputs for Atomic SubSystem: '<S289>/EdgeRising_F2T' */
        /* Logic: '<S297>/OR1' incorporates:
         *  UnitDelay: '<S297>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeCI_b = !VTLR_ac_DW.UnitDelay_DSTATE_dc;

        /* Update for UnitDelay: '<S297>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_dc = rtb_TmpSignalConversionAtVeC_jx;

        /* Switch: '<S289>/Switch1' incorporates:
         *  Constant: '<S289>/Constant Value'
         *  Logic: '<S289>/AND'
         *  Logic: '<S297>/AND'
         *  RelationalOperator: '<S289>/Greater  Than'
         *  Switch: '<S289>/Switch2'
         *  UnitDelay: '<S289>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVeC_jx && rtb_TmpSignalConversionAtVeCI_b)
        {
            /* Switch: '<S289>/Switch1' incorporates:
             *  Constant: '<S295>/Calib'
             */
            rtb_Switch1_p5 = KeVTLR_Cnt_WUDelay_RTC;
        }
        else if (rtb_TmpSignalConversionAtVeC_jx && (((sint32)
                   VTLR_ac_DW.UnitDelay_DSTATE_e) > 0))
        {
            /* Switch: '<S289>/Switch2' incorporates:
             *  Constant: '<S289>/Constant Value1'
             *  Sum: '<S289>/Subtraction'
             *  Switch: '<S289>/Switch1'
             *  UnitDelay: '<S289>/Unit Delay'
             */
            rtb_Switch1_p5 = (uint16)((sint32)(((sint32)
                VTLR_ac_DW.UnitDelay_DSTATE_e) - 1));
        }
        else
        {
            /* Switch: '<S289>/Switch1' incorporates:
             *  Switch: '<S289>/Switch2'
             *  UnitDelay: '<S289>/Unit Delay'
             */
            rtb_Switch1_p5 = VTLR_ac_DW.UnitDelay_DSTATE_e;
        }

        /* End of Switch: '<S289>/Switch1' */
        /* End of Outputs for SubSystem: '<S289>/EdgeRising_F2T' */

        /* Update for UnitDelay: '<S289>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_e = rtb_Switch1_p5;

        /* If: '<S276>/If1' incorporates:
         *  Constant: '<S289>/Constant Value2'
         *  Constant: '<S312>/Constant'
         *  Gain: '<S287>/Gain'
         *  Gain: '<S288>/Gain'
         *  Logic: '<S296>/Logical Operator1'
         *  Logic: '<S296>/Logical Operator4'
         *  RelationalOperator: '<S289>/Greater  Than1'
         *  RelationalOperator: '<S296>/Relational Operator5'
         *  Switch: '<S296>/Switch1'
         *  Switch: '<S296>/Switch2'
         *  Switch: '<S320>/Switch1'
         *  Switch: '<S320>/Switch2'
         *  Switch: '<S321>/Switch1'
         *  Switch: '<S321>/Switch2'
         */
        if (((sint32)rtb_Switch1_p5) > 0)
        {
            /* Outputs for IfAction SubSystem: '<S276>/Init_LEDs' incorporates:
             *  ActionPort: '<S294>/Action Port'
             */
            /* Merge: '<S4>/Merge_16' incorporates:
             *  Constant: '<S301>/Constant'
             *  Merge: '<S331>/Merge_1'
             *  SignalConversion generated from: '<S294>/Init_LEDA'
             */
            rtb_Switch1_m = CeVTLR_e_Led_Blink;

            /* Merge: '<S4>/Merge_17' incorporates:
             *  Constant: '<S298>/Constant'
             *  Merge: '<S331>/Merge_9'
             *  SignalConversion generated from: '<S294>/Init_LEDB'
             */
            rtb_Switch1_na = CeVTLR_e_Led_Blink;

            /* Merge: '<S4>/Merge_11' incorporates:
             *  Constant: '<S299>/Constant'
             *  Merge: '<S331>/Merge_2'
             *  SignalConversion generated from: '<S294>/Init_LEDA_Color'
             */
            rtb_Merge_11 = CeVTLR_e_Green;

            /* Merge: '<S4>/Merge_29' incorporates:
             *  Constant: '<S300>/Constant'
             *  Merge: '<S331>/Merge_3'
             *  SignalConversion generated from: '<S294>/Init_LEDB_Color'
             */
            rtb_Merge_29 = CeVTLR_e_Green;

            /* End of Outputs for SubSystem: '<S276>/Init_LEDs' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S276>/PP1_LED' incorporates:
             *  ActionPort: '<S296>/Action Port'
             */
            if ((!rtb_TmpSignalConversionAtVeC_jx) || (VTLR_ac_B.NoLoad_Flag_i))
            {
                /* Switch: '<S320>/Switch1' incorporates:
                 *  Constant: '<S317>/Constant'
                 */
                rtb_Switch1_m = CeVTLR_e_Led_Off;

                /* Switch: '<S321>/Switch1' incorporates:
                 *  Constant: '<S318>/Constant'
                 */
                rtb_Switch1_na = CeVTLR_e_Led_Off;
            }
            else if (((uint32)VeVTLR_e_DisChrgSysSts_IDCM) ==
                     CeVTLR_e_DschrgActv)
            {
                /* Switch: '<S320>/Switch1' incorporates:
                 *  Constant: '<S315>/Constant'
                 *  Switch: '<S320>/Switch2'
                 */
                rtb_Switch1_m = CeVTLR_e_Led_On;

                /* Switch: '<S321>/Switch1' incorporates:
                 *  Constant: '<S313>/Constant'
                 *  Switch: '<S321>/Switch2'
                 */
                rtb_Switch1_na = CeVTLR_e_Led_On;
            }
            else if (VTLR_ac_B.BlinkFlag_o)
            {
                /* Switch: '<S296>/Switch2' incorporates:
                 *  Constant: '<S316>/Constant'
                 *  Switch: '<S320>/Switch1'
                 *  Switch: '<S320>/Switch2'
                 */
                rtb_Switch1_m = CeVTLR_e_Led_Blink;

                /* Switch: '<S296>/Switch1' incorporates:
                 *  Constant: '<S314>/Constant'
                 *  Switch: '<S321>/Switch1'
                 *  Switch: '<S321>/Switch2'
                 */
                rtb_Switch1_na = CeVTLR_e_Led_Blink;
            }
            else
            {
                /* Switch: '<S320>/Switch1' incorporates:
                 *  Switch: '<S320>/Switch2'
                 *  UnitDelay: '<S296>/Unit Delay'
                 */
                rtb_Switch1_m = VTLR_ac_DW.UnitDelay_DSTATE_gne;

                /* Switch: '<S321>/Switch1' incorporates:
                 *  Switch: '<S321>/Switch2'
                 *  UnitDelay: '<S296>/Unit Delay1'
                 */
                rtb_Switch1_na = VTLR_ac_DW.UnitDelay1_DSTATE_g;
            }

            /* Switch: '<S322>/Switch1' incorporates:
             *  Constant: '<S304>/Constant'
             *  Constant: '<S312>/Constant'
             *  Constant: '<S319>/Constant'
             *  Gain: '<S288>/Gain'
             *  RelationalOperator: '<S296>/Relational Operator2'
             *  RelationalOperator: '<S296>/Relational Operator3'
             *  RelationalOperator: '<S296>/Relational Operator5'
             *  Switch: '<S296>/Switch1'
             *  Switch: '<S296>/Switch2'
             *  Switch: '<S320>/Switch1'
             *  Switch: '<S320>/Switch2'
             *  Switch: '<S321>/Switch1'
             *  Switch: '<S321>/Switch2'
             *  Switch: '<S322>/Switch2'
             */
            if (((uint32)rtb_Switch1_m) == CeVTLR_e_Led_On)
            {
                /* Merge: '<S4>/Merge_11' incorporates:
                 *  Constant: '<S303>/Constant'
                 *  Merge: '<S331>/Merge_2'
                 */
                rtb_Merge_11 = CeVTLR_e_Green;
            }
            else if (((uint32)rtb_Switch1_m) == CeVTLR_e_Led_Blink)
            {
                /* Switch: '<S322>/Switch2' incorporates:
                 *  Constant: '<S305>/Constant'
                 *  Merge: '<S331>/Merge_2'
                 *  Merge: '<S4>/Merge_11'
                 */
                rtb_Merge_11 = CeVTLR_e_Red;
            }
            else
            {
                /* Merge: '<S4>/Merge_11' incorporates:
                 *  Constant: '<S306>/Constant'
                 *  Merge: '<S331>/Merge_2'
                 *  Switch: '<S322>/Switch2'
                 */
                rtb_Merge_11 = CeVTLR_e_Init;
            }

            /* End of Switch: '<S322>/Switch1' */

            /* Switch: '<S323>/Switch1' incorporates:
             *  Constant: '<S308>/Constant'
             *  Constant: '<S311>/Constant'
             *  RelationalOperator: '<S296>/Relational Operator4'
             *  RelationalOperator: '<S296>/Relational Operator6'
             *  Switch: '<S321>/Switch1'
             *  Switch: '<S323>/Switch2'
             */
            if (((uint32)rtb_Switch1_na) == CeVTLR_e_Led_On)
            {
                /* Merge: '<S4>/Merge_29' incorporates:
                 *  Constant: '<S307>/Constant'
                 *  Merge: '<S331>/Merge_3'
                 */
                rtb_Merge_29 = CeVTLR_e_Green;
            }
            else if (((uint32)rtb_Switch1_na) == CeVTLR_e_Led_Blink)
            {
                /* Switch: '<S323>/Switch2' incorporates:
                 *  Constant: '<S309>/Constant'
                 *  Merge: '<S331>/Merge_3'
                 *  Merge: '<S4>/Merge_29'
                 */
                rtb_Merge_29 = CeVTLR_e_Red;
            }
            else
            {
                /* Merge: '<S4>/Merge_29' incorporates:
                 *  Constant: '<S310>/Constant'
                 *  Merge: '<S331>/Merge_3'
                 *  Switch: '<S323>/Switch2'
                 */
                rtb_Merge_29 = CeVTLR_e_Init;
            }

            /* End of Switch: '<S323>/Switch1' */

            /* Update for UnitDelay: '<S296>/Unit Delay' incorporates:
             *  Switch: '<S320>/Switch1'
             */
            VTLR_ac_DW.UnitDelay_DSTATE_gne = rtb_Switch1_m;

            /* Update for UnitDelay: '<S296>/Unit Delay1' incorporates:
             *  Switch: '<S321>/Switch1'
             */
            VTLR_ac_DW.UnitDelay1_DSTATE_g = rtb_Switch1_na;

            /* End of Outputs for SubSystem: '<S276>/PP1_LED' */
        }

        /* End of If: '<S276>/If1' */
        /* End of Outputs for SubSystem: '<S276>/Count Down Reset Trigger Enabled' */

        /* RelationalOperator: '<S277>/Not Equal' incorporates:
         *  Constant: '<S328>/Constant'
         */
        rtb_TmpSignalConversionAtVeC_nm = (((uint32)VeVTLR_e_DschrgSt_IDCM) ==
            CeVTLR_e_DschrgEStp);

        /* Outputs for Atomic SubSystem: '<S277>/EdgeRising' */
        /* Logic: '<S325>/OR1' incorporates:
         *  UnitDelay: '<S325>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeCI_b = !VTLR_ac_DW.UnitDelay_DSTATE_ih;

        /* Update for UnitDelay: '<S325>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_ih = rtb_TmpSignalConversionAtVeC_nm;

        /* End of Outputs for SubSystem: '<S277>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S277>/EdgeRising1' */
        /* Logic: '<S326>/AND' incorporates:
         *  Logic: '<S326>/OR1'
         *  UnitDelay: '<S326>/Unit Delay'
         */
        rtb_Merge16 = !VTLR_ac_DW.UnitDelay_DSTATE_lg;

        /* Update for UnitDelay: '<S326>/Unit Delay' incorporates:
         *  Constant: '<S277>/TRUE Constant'
         */
        VTLR_ac_DW.UnitDelay_DSTATE_lg = true;

        /* End of Outputs for SubSystem: '<S277>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S277>/Counter Reset  Enabled ' */
        /* Switch: '<S324>/Switch1' incorporates:
         *  Logic: '<S277>/Logical1'
         *  Logic: '<S325>/AND'
         *  Switch: '<S324>/Switch2'
         */
        if (rtb_Merge16 || rtb_OR1_had)
        {
            /* Switch: '<S324>/Switch1' incorporates:
             *  Constant: '<S324>/Constant Value2'
             */
            VeVTLR_Cnt_EStopCount_IDCM = 0U;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S277>/EdgeRising' */
            if (rtb_TmpSignalConversionAtVeC_nm &&
                    rtb_TmpSignalConversionAtVeCI_b)
            {
                /* Switch: '<S324>/Switch2' incorporates:
                 *  Constant: '<S324>/Constant Value1'
                 *  Sum: '<S324>/Subtraction'
                 *  Switch: '<S324>/Switch1'
                 *  UnitDelay: '<S324>/Unit Delay'
                 */
                VeVTLR_Cnt_EStopCount_IDCM = (uint16)(((uint32)
                    VTLR_ac_DW.UnitDelay_DSTATE_d) + 1U);
            }
            else
            {
                /* Switch: '<S324>/Switch1' incorporates:
                 *  Switch: '<S324>/Switch2'
                 *  UnitDelay: '<S324>/Unit Delay'
                 */
                VeVTLR_Cnt_EStopCount_IDCM = VTLR_ac_DW.UnitDelay_DSTATE_d;
            }

            /* End of Outputs for SubSystem: '<S277>/EdgeRising' */
        }

        /* End of Switch: '<S324>/Switch1' */

        /* Update for UnitDelay: '<S324>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_d = VeVTLR_Cnt_EStopCount_IDCM;

        /* End of Outputs for SubSystem: '<S277>/Counter Reset  Enabled ' */

        /* RelationalOperator: '<S277>/Not Equal1' incorporates:
         *  Constant: '<S329>/Calib'
         *  Selector: '<S277>/Selector'
         */
        VeVTLR_b_GiveUpDschrg_IDCM = (VeVTLR_Cnt_EStopCount_IDCM >
            KaVTLR_K_NbrRetries_IDCM[(VeVTLR_k_NDCR_IDCM)]);

        /* SignalConversion generated from: '<S1>/PPIM_MdRq' incorporates:
         *  DataTypeConversion: '<S336>/DataTypeConversion'
         *  Merge: '<S4>/Merge_18'
         *  Outport: '<Root>/VeVTLR_e_PPIM_MdRq'
         */
        (void)Rte_Write_VeVTLR_e_PPIM_MdRq_Value(VeVTLR_e_PPI_MdRq);

        /* Merge: '<S4>/Merge_20' incorporates:
         *  DataTypeConversion: '<S337>/DataTypeConversion'
         */
        rtb_Merge_20 = VeVTLR_e_Frunk_Status;

        /* Merge: '<S4>/Merge_19' incorporates:
         *  Gain: '<S339>/Gain'
         */
        rtb_TmpSignalConversionAtVeC_nm = VeVTLR_b_DschrgRdy4ShtDwn_OB_PPIM;

        /* Outputs for Atomic SubSystem: '<S331>/Count Down Reset Trigger Enabled' */
        /* Outputs for Atomic SubSystem: '<S342>/EdgeRising_F2T' */
        /* Logic: '<S352>/OR1' incorporates:
         *  UnitDelay: '<S352>/Unit Delay'
         */
        rtb_OR1_had = !VTLR_ac_DW.UnitDelay_DSTATE_po;

        /* Update for UnitDelay: '<S352>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_po = rtb_TmpSignalConversionAtVeC_lz;

        /* Switch: '<S342>/Switch1' incorporates:
         *  Constant: '<S342>/Constant Value'
         *  Logic: '<S342>/AND'
         *  Logic: '<S352>/AND'
         *  RelationalOperator: '<S342>/Greater  Than'
         *  Switch: '<S342>/Switch2'
         *  UnitDelay: '<S342>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVeC_lz && rtb_OR1_had)
        {
            /* Switch: '<S342>/Switch1' incorporates:
             *  Constant: '<S350>/Calib'
             */
            rtb_Switch1_p5 = KeVTLR_Cnt_WUDelay_RTC;
        }
        else if (rtb_TmpSignalConversionAtVeC_lz && (((sint32)
                   VTLR_ac_DW.UnitDelay_DSTATE_j) > 0))
        {
            /* Switch: '<S342>/Switch2' incorporates:
             *  Constant: '<S342>/Constant Value1'
             *  Sum: '<S342>/Subtraction'
             *  Switch: '<S342>/Switch1'
             *  UnitDelay: '<S342>/Unit Delay'
             */
            rtb_Switch1_p5 = (uint16)((sint32)(((sint32)
                VTLR_ac_DW.UnitDelay_DSTATE_j) - 1));
        }
        else
        {
            /* Switch: '<S342>/Switch1' incorporates:
             *  Switch: '<S342>/Switch2'
             *  UnitDelay: '<S342>/Unit Delay'
             */
            rtb_Switch1_p5 = VTLR_ac_DW.UnitDelay_DSTATE_j;
        }

        /* End of Switch: '<S342>/Switch1' */
        /* End of Outputs for SubSystem: '<S342>/EdgeRising_F2T' */

        /* Update for UnitDelay: '<S342>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_j = rtb_Switch1_p5;

        /* If: '<S331>/If1' incorporates:
         *  Constant: '<S342>/Constant Value2'
         *  RelationalOperator: '<S342>/Greater  Than1'
         */
        if (((sint32)rtb_Switch1_p5) > 0)
        {
            /* Outputs for IfAction SubSystem: '<S331>/Init_LEDs' incorporates:
             *  ActionPort: '<S349>/Action Port'
             */
            /* Merge: '<S4>/Merge_21' incorporates:
             *  Constant: '<S358>/Constant'
             *  Merge: '<S331>/Merge_9'
             *  SignalConversion generated from: '<S349>/Init_LEDA'
             */
            rtb_Switch1_f4 = CeVTLR_e_Led_Blink;

            /* Merge: '<S4>/Merge_22' incorporates:
             *  Constant: '<S353>/Constant'
             *  Merge: '<S331>/Merge_1'
             *  SignalConversion generated from: '<S349>/Init_LEDB'
             */
            rtb_Switch1_hq = CeVTLR_e_Led_Blink;

            /* Merge: '<S4>/Merge_32' incorporates:
             *  Constant: '<S356>/Constant'
             *  Merge: '<S331>/Merge_4'
             *  SignalConversion generated from: '<S349>/Init_LEDC'
             */
            rtb_Switch1_ny = CeVTLR_e_Led_Blink;

            /* Merge: '<S4>/Merge_30' incorporates:
             *  Constant: '<S354>/Constant'
             *  Merge: '<S331>/Merge_3'
             *  SignalConversion generated from: '<S349>/Init_LEDA_Color'
             */
            rtb_Merge_30 = CeVTLR_e_Green;

            /* Merge: '<S4>/Merge_31' incorporates:
             *  Constant: '<S355>/Constant'
             *  Merge: '<S331>/Merge_2'
             *  SignalConversion generated from: '<S349>/Init_LEDB_Color'
             */
            rtb_Merge_31 = CeVTLR_e_Green;

            /* Merge: '<S4>/Merge_33' incorporates:
             *  Constant: '<S357>/Constant'
             *  Merge: '<S331>/Merge_5'
             *  SignalConversion generated from: '<S349>/Init_LEDC_Color'
             */
            rtb_Merge_33 = CeVTLR_e_Green;

            /* End of Outputs for SubSystem: '<S331>/Init_LEDs' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S331>/PP2_LED' incorporates:
             *  ActionPort: '<S351>/Action Port'
             */
            /* Logic: '<S351>/Logical Operator9' incorporates:
             *  Logic: '<S351>/Logical Operator2'
             */
            tmpRead_2 = !rtb_TmpSignalConversionAtVeC_lz;

            /* Switch: '<S386>/Switch1' incorporates:
             *  Constant: '<S370>/Constant'
             *  Gain: '<S340>/Gain'
             *  Gain: '<S341>/Gain'
             *  Logic: '<S351>/Logical Operator1'
             *  Logic: '<S351>/Logical Operator9'
             *  RelationalOperator: '<S351>/Relational Operator5'
             *  Switch: '<S351>/Switch1'
             *  Switch: '<S351>/Switch2'
             *  Switch: '<S386>/Switch2'
             *  Switch: '<S387>/Switch1'
             *  Switch: '<S387>/Switch2'
             */
            if (tmpRead_2 || (VTLR_ac_B.NoLoad_Flag))
            {
                /* Switch: '<S386>/Switch1' incorporates:
                 *  Constant: '<S383>/Constant'
                 */
                rtb_Switch1_f4 = CeVTLR_e_Led_Off;

                /* Switch: '<S387>/Switch1' incorporates:
                 *  Constant: '<S384>/Constant'
                 */
                rtb_Switch1_hq = CeVTLR_e_Led_Off;
            }
            else if (((uint32)VeVTLR_e_DisChrgSysSts_PPIM) ==
                     CeVTLR_e_DschrgActv)
            {
                /* Switch: '<S386>/Switch1' incorporates:
                 *  Constant: '<S381>/Constant'
                 *  Switch: '<S386>/Switch2'
                 */
                rtb_Switch1_f4 = CeVTLR_e_Led_On;

                /* Switch: '<S387>/Switch1' incorporates:
                 *  Constant: '<S379>/Constant'
                 *  Switch: '<S387>/Switch2'
                 */
                rtb_Switch1_hq = CeVTLR_e_Led_On;
            }
            else if (VTLR_ac_B.BlinkFlag)
            {
                /* Switch: '<S351>/Switch2' incorporates:
                 *  Constant: '<S382>/Constant'
                 *  Switch: '<S386>/Switch1'
                 *  Switch: '<S386>/Switch2'
                 */
                rtb_Switch1_f4 = CeVTLR_e_Led_Blink;

                /* Switch: '<S351>/Switch1' incorporates:
                 *  Constant: '<S380>/Constant'
                 *  Switch: '<S387>/Switch1'
                 *  Switch: '<S387>/Switch2'
                 */
                rtb_Switch1_hq = CeVTLR_e_Led_Blink;
            }
            else
            {
                /* Switch: '<S386>/Switch1' incorporates:
                 *  Switch: '<S386>/Switch2'
                 *  UnitDelay: '<S351>/Unit Delay'
                 */
                rtb_Switch1_f4 = VTLR_ac_DW.UnitDelay_DSTATE_d0;

                /* Switch: '<S387>/Switch1' incorporates:
                 *  Switch: '<S387>/Switch2'
                 *  UnitDelay: '<S351>/Unit Delay1'
                 */
                rtb_Switch1_hq = VTLR_ac_DW.UnitDelay1_DSTATE_n;
            }

            /* End of Switch: '<S386>/Switch1' */

            /* Switch: '<S388>/Switch1' incorporates:
             *  Constant: '<S361>/Constant'
             *  Constant: '<S385>/Constant'
             *  RelationalOperator: '<S351>/Relational Operator2'
             *  RelationalOperator: '<S351>/Relational Operator3'
             *  Switch: '<S386>/Switch1'
             *  Switch: '<S388>/Switch2'
             */
            if (((uint32)rtb_Switch1_f4) == CeVTLR_e_Led_On)
            {
                /* Merge: '<S4>/Merge_30' incorporates:
                 *  Constant: '<S360>/Constant'
                 *  Merge: '<S331>/Merge_3'
                 */
                rtb_Merge_30 = CeVTLR_e_Green;
            }
            else if (((uint32)rtb_Switch1_f4) == CeVTLR_e_Led_Blink)
            {
                /* Switch: '<S388>/Switch2' incorporates:
                 *  Constant: '<S362>/Constant'
                 *  Merge: '<S331>/Merge_3'
                 *  Merge: '<S4>/Merge_30'
                 */
                rtb_Merge_30 = CeVTLR_e_Red;
            }
            else
            {
                /* Merge: '<S4>/Merge_30' incorporates:
                 *  Constant: '<S363>/Constant'
                 *  Merge: '<S331>/Merge_3'
                 *  Switch: '<S388>/Switch2'
                 */
                rtb_Merge_30 = CeVTLR_e_Init;
            }

            /* End of Switch: '<S388>/Switch1' */

            /* Switch: '<S389>/Switch1' incorporates:
             *  Constant: '<S365>/Constant'
             *  Constant: '<S368>/Constant'
             *  RelationalOperator: '<S351>/Relational Operator4'
             *  RelationalOperator: '<S351>/Relational Operator6'
             *  Switch: '<S387>/Switch1'
             *  Switch: '<S389>/Switch2'
             */
            if (((uint32)rtb_Switch1_hq) == CeVTLR_e_Led_On)
            {
                /* Merge: '<S4>/Merge_31' incorporates:
                 *  Constant: '<S364>/Constant'
                 *  Merge: '<S331>/Merge_2'
                 */
                rtb_Merge_31 = CeVTLR_e_Green;
            }
            else if (((uint32)rtb_Switch1_hq) == CeVTLR_e_Led_Blink)
            {
                /* Switch: '<S389>/Switch2' incorporates:
                 *  Constant: '<S366>/Constant'
                 *  Merge: '<S331>/Merge_2'
                 *  Merge: '<S4>/Merge_31'
                 */
                rtb_Merge_31 = CeVTLR_e_Red;
            }
            else
            {
                /* Merge: '<S4>/Merge_31' incorporates:
                 *  Constant: '<S367>/Constant'
                 *  Merge: '<S331>/Merge_2'
                 *  Switch: '<S389>/Switch2'
                 */
                rtb_Merge_31 = CeVTLR_e_Init;
            }

            /* End of Switch: '<S389>/Switch1' */

            /* Switch: '<S390>/Switch1' incorporates:
             *  Constant: '<S369>/Constant'
             *  Gain: '<S340>/Gain'
             *  Gain: '<S341>/Gain'
             *  Logic: '<S351>/Logical Operator6'
             *  RelationalOperator: '<S351>/Relational Operator7'
             *  Switch: '<S351>/Switch3'
             *  Switch: '<S390>/Switch2'
             */
            if (tmpRead_2 || (VTLR_ac_B.NoLoad_Flag))
            {
                /* Switch: '<S390>/Switch1' incorporates:
                 *  Constant: '<S373>/Constant'
                 */
                rtb_Switch1_ny = CeVTLR_e_Led_Off;
            }
            else if (((uint32)VeVTLR_e_DisChrgSysSts_PPIM) ==
                     CeVTLR_e_DschrgActv)
            {
                /* Switch: '<S390>/Switch2' incorporates:
                 *  Constant: '<S371>/Constant'
                 *  Switch: '<S390>/Switch1'
                 */
                rtb_Switch1_ny = CeVTLR_e_Led_On;
            }
            else if (VTLR_ac_B.BlinkFlag)
            {
                /* Switch: '<S351>/Switch3' incorporates:
                 *  Constant: '<S372>/Constant'
                 *  Switch: '<S390>/Switch1'
                 *  Switch: '<S390>/Switch2'
                 */
                rtb_Switch1_ny = CeVTLR_e_Led_Blink;
            }
            else
            {
                /* Switch: '<S390>/Switch1' incorporates:
                 *  Switch: '<S390>/Switch2'
                 *  UnitDelay: '<S351>/Unit Delay2'
                 */
                rtb_Switch1_ny = VTLR_ac_DW.UnitDelay2_DSTATE;
            }

            /* End of Switch: '<S390>/Switch1' */

            /* Switch: '<S391>/Switch1' incorporates:
             *  Constant: '<S375>/Constant'
             *  Constant: '<S378>/Constant'
             *  RelationalOperator: '<S351>/Relational Operator8'
             *  RelationalOperator: '<S351>/Relational Operator9'
             *  Switch: '<S390>/Switch1'
             *  Switch: '<S391>/Switch2'
             */
            if (((uint32)rtb_Switch1_ny) == CeVTLR_e_Led_On)
            {
                /* Merge: '<S4>/Merge_33' incorporates:
                 *  Constant: '<S374>/Constant'
                 *  Merge: '<S331>/Merge_5'
                 */
                rtb_Merge_33 = CeVTLR_e_Green;
            }
            else if (((uint32)rtb_Switch1_ny) == CeVTLR_e_Led_Blink)
            {
                /* Switch: '<S391>/Switch2' incorporates:
                 *  Constant: '<S376>/Constant'
                 *  Merge: '<S331>/Merge_5'
                 *  Merge: '<S4>/Merge_33'
                 */
                rtb_Merge_33 = CeVTLR_e_Red;
            }
            else
            {
                /* Merge: '<S4>/Merge_33' incorporates:
                 *  Constant: '<S377>/Constant'
                 *  Merge: '<S331>/Merge_5'
                 *  Switch: '<S391>/Switch2'
                 */
                rtb_Merge_33 = CeVTLR_e_Init;
            }

            /* End of Switch: '<S391>/Switch1' */

            /* Update for UnitDelay: '<S351>/Unit Delay' incorporates:
             *  Switch: '<S386>/Switch1'
             */
            VTLR_ac_DW.UnitDelay_DSTATE_d0 = rtb_Switch1_f4;

            /* Update for UnitDelay: '<S351>/Unit Delay1' incorporates:
             *  Switch: '<S387>/Switch1'
             */
            VTLR_ac_DW.UnitDelay1_DSTATE_n = rtb_Switch1_hq;

            /* Update for UnitDelay: '<S351>/Unit Delay2' incorporates:
             *  Switch: '<S390>/Switch1'
             */
            VTLR_ac_DW.UnitDelay2_DSTATE = rtb_Switch1_ny;

            /* End of Outputs for SubSystem: '<S331>/PP2_LED' */
        }

        /* End of If: '<S331>/If1' */
        /* End of Outputs for SubSystem: '<S331>/Count Down Reset Trigger Enabled' */

        /* RelationalOperator: '<S332>/Not Equal' incorporates:
         *  Constant: '<S396>/Constant'
         */
        rtb_TmpSignalConversionAtVeCI_b = (((uint32)rtb_VeVTLR_e_PPIM_DschrgSt) ==
            CeVTLR_e_DschrgEStp_PPIM);

        /* Outputs for Atomic SubSystem: '<S332>/EdgeRising' */
        /* Logic: '<S393>/OR1' incorporates:
         *  UnitDelay: '<S393>/Unit Delay'
         */
        rtb_Merge16 = !VTLR_ac_DW.UnitDelay_DSTATE_ls;

        /* Update for UnitDelay: '<S393>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_ls = rtb_TmpSignalConversionAtVeCI_b;

        /* End of Outputs for SubSystem: '<S332>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S332>/EdgeRising1' */
        /* Logic: '<S394>/AND' incorporates:
         *  Logic: '<S394>/OR1'
         *  UnitDelay: '<S394>/Unit Delay'
         */
        rtb_OR1_had = !VTLR_ac_DW.UnitDelay_DSTATE_bt;

        /* Update for UnitDelay: '<S394>/Unit Delay' incorporates:
         *  Constant: '<S332>/TRUE Constant'
         */
        VTLR_ac_DW.UnitDelay_DSTATE_bt = true;

        /* End of Outputs for SubSystem: '<S332>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S332>/Counter Reset  Enabled ' */
        /* Switch: '<S392>/Switch1' incorporates:
         *  Logic: '<S332>/Logical1'
         *  Logic: '<S393>/AND'
         *  Switch: '<S392>/Switch2'
         */
        if (rtb_OR1_had || rtb_AND_le)
        {
            /* Switch: '<S392>/Switch1' incorporates:
             *  Constant: '<S392>/Constant Value2'
             */
            VeVTLR_Cnt_EStopCount_PPIM = 0U;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S332>/EdgeRising' */
            if (rtb_TmpSignalConversionAtVeCI_b && rtb_Merge16)
            {
                /* Switch: '<S392>/Switch2' incorporates:
                 *  Constant: '<S392>/Constant Value1'
                 *  Sum: '<S392>/Subtraction'
                 *  Switch: '<S392>/Switch1'
                 *  UnitDelay: '<S392>/Unit Delay'
                 */
                VeVTLR_Cnt_EStopCount_PPIM = (uint16)(((uint32)
                    VTLR_ac_DW.UnitDelay_DSTATE_l) + 1U);
            }
            else
            {
                /* Switch: '<S392>/Switch1' incorporates:
                 *  Switch: '<S392>/Switch2'
                 *  UnitDelay: '<S392>/Unit Delay'
                 */
                VeVTLR_Cnt_EStopCount_PPIM = VTLR_ac_DW.UnitDelay_DSTATE_l;
            }

            /* End of Outputs for SubSystem: '<S332>/EdgeRising' */
        }

        /* End of Switch: '<S392>/Switch1' */

        /* Update for UnitDelay: '<S392>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_l = VeVTLR_Cnt_EStopCount_PPIM;

        /* End of Outputs for SubSystem: '<S332>/Counter Reset  Enabled ' */

        /* RelationalOperator: '<S332>/Not Equal1' incorporates:
         *  Constant: '<S397>/Calib'
         *  Selector: '<S332>/Selector'
         */
        VeVTLR_b_GiveUpDschrg_PPIM = (VeVTLR_Cnt_EStopCount_PPIM >
            KaVTLR_K_NbrRetries_PPIM[(VeVTLR_k_NDCR_PPIM)]);

        /* Update for UnitDelay: '<S275>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_gn = VeVTLR_b_GiveUpDschrg_IDCM;

        /* Update for UnitDelay: '<S277>/Unit Delay' incorporates:
         *  Switch: '<S5>/Switch1'
         */
        VTLR_ac_DW.UnitDelay_DSTATE_ns = VeVTLR_e_PMM_PowerMode;

        /* Update for UnitDelay: '<S330>/Unit Delay' */
        VTLR_ac_DW.UnitDelay_DSTATE_b = VeVTLR_b_GiveUpDschrg_PPIM;

        /* Update for UnitDelay: '<S332>/Unit Delay' incorporates:
         *  Switch: '<S5>/Switch1'
         */
        VTLR_ac_DW.UnitDelay_DSTATE_cl = VeVTLR_e_PMM_PowerMode;

        /* End of Outputs for SubSystem: '<S4>/V2L_Onboard' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S4>/V2L_Onboard_Default' incorporates:
         *  ActionPort: '<S20>/Action Port'
         */
        /* Merge: '<S4>/Merge_9' incorporates:
         *  Constant: '<S20>/Constant Value7'
         *  Gain: '<S430>/Gain'
         */
        rtb_TmpSignalConversionAtVeHPMR = false;

        /* Merge: '<S4>/Merge_10' incorporates:
         *  Constant: '<S20>/Constant Value1'
         *  Gain: '<S434>/Gain'
         */
        rtb_TmpSignalConversionAtVeC_oh = false;

        /* SignalConversion generated from: '<S1>/OBCM_Mode_Req_IDCM' incorporates:
         *  Constant: '<S414>/Constant'
         *  DataTypeConversion: '<S406>/DataTypeConversion'
         *  Merge: '<S4>/Merge_12'
         *  Outport: '<Root>/VeVTLR_e_DschrgOBCMdRq_Onboard'
         */
        (void)Rte_Write_VeVTLR_e_DschrgOBCMdRq_Onboard_Value
            (CeOBCR_e_Idle_OBCMdRq);

        /* Merge: '<S4>/Merge_13' incorporates:
         *  Constant: '<S20>/Constant Value4'
         *  Gain: '<S436>/Gain'
         */
        Merge_13 = false;

        /* Merge: '<S4>/Merge_14' incorporates:
         *  Constant: '<S20>/Constant Value5'
         *  Gain: '<S437>/Gain'
         */
        Merge_14 = false;

        /* Merge: '<S4>/Merge_15' incorporates:
         *  Constant: '<S422>/Constant'
         *  DataTypeConversion: '<S408>/DataTypeConversion'
         */
        rtb_Merge_15 = CeVTLR_e_Inactive;

        /* Merge: '<S4>/Merge_16' incorporates:
         *  Constant: '<S423>/Constant'
         *  DataTypeConversion: '<S409>/DataTypeConversion'
         */
        rtb_Switch1_m = CeVTLR_e_Led_Off;

        /* Merge: '<S4>/Merge_17' incorporates:
         *  Constant: '<S424>/Constant'
         *  DataTypeConversion: '<S410>/DataTypeConversion'
         */
        rtb_Switch1_na = CeVTLR_e_Led_Off;

        /* SignalConversion generated from: '<S1>/PPIM_MdRq' incorporates:
         *  Constant: '<S425>/Constant'
         *  DataTypeConversion: '<S411>/DataTypeConversion'
         *  Merge: '<S4>/Merge_18'
         *  Outport: '<Root>/VeVTLR_e_PPIM_MdRq'
         */
        (void)Rte_Write_VeVTLR_e_PPIM_MdRq_Value(CeVTLR_e_Idle);

        /* Merge: '<S4>/Merge_19' incorporates:
         *  Constant: '<S20>/Constant Value11'
         *  Gain: '<S431>/Gain'
         */
        rtb_TmpSignalConversionAtVeC_nm = false;

        /* Merge: '<S4>/Merge_20' incorporates:
         *  Constant: '<S427>/Constant'
         *  DataTypeConversion: '<S412>/DataTypeConversion'
         */
        rtb_Merge_20 = CeVTLR_e_Inactive_Frunk;

        /* Merge: '<S4>/Merge_21' incorporates:
         *  Constant: '<S428>/Constant'
         *  DataTypeConversion: '<S413>/DataTypeConversion'
         */
        rtb_Switch1_f4 = CeVTLR_e_Led_Off;

        /* Merge: '<S4>/Merge_22' incorporates:
         *  Constant: '<S429>/Constant'
         *  DataTypeConversion: '<S399>/DataTypeConversion'
         */
        rtb_Switch1_hq = CeVTLR_e_Led_Off;

        /* Merge: '<S4>/Merge_23' incorporates:
         *  Constant: '<S20>/Constant Value14'
         *  Gain: '<S432>/Gain'
         */
        rtb_TmpSignalConversionAtVeC_jh = 0.0F;

        /* Merge: '<S4>/Merge_24' incorporates:
         *  Constant: '<S20>/Constant Value3'
         *  Gain: '<S433>/Gain'
         */
        rtb_TmpSignalConversionAtVeC_kf = 0.0F;

        /* Merge: '<S4>/Merge_25' incorporates:
         *  Constant: '<S426>/Constant'
         *  DataTypeConversion: '<S398>/DataTypeConversion'
         */
        rtb_Merge_4_g = CeVTLR_e_DschrgInactv;

        /* Switch: '<S105>/Switch1' incorporates:
         *  Constant: '<S415>/Constant'
         *  DataTypeConversion: '<S407>/DataTypeConversion'
         */
        rtb_Switch1_ns = CeVTLR_e_DschrgInactv;

        /* Merge: '<S4>/Merge_27' incorporates:
         *  Constant: '<S20>/Constant Value6'
         *  Gain: '<S435>/Gain'
         */
        rtb_TmpSignalConversionAtVeC_ai = false;

        /* Merge: '<S4>/Merge_28' incorporates:
         *  Constant: '<S20>/Constant Value8'
         *  Gain: '<S438>/Gain'
         */
        rtb_TmpSignalConversionAtVeC_go = 0.0F;

        /* Merge: '<S4>/Merge_11' incorporates:
         *  Constant: '<S419>/Constant'
         *  DataTypeConversion: '<S401>/DataTypeConversion'
         */
        rtb_Merge_11 = CeVTLR_e_Init;

        /* Merge: '<S4>/Merge_29' incorporates:
         *  Constant: '<S418>/Constant'
         *  DataTypeConversion: '<S400>/DataTypeConversion'
         */
        rtb_Merge_29 = CeVTLR_e_Init;

        /* Merge: '<S4>/Merge_30' incorporates:
         *  Constant: '<S417>/Constant'
         *  DataTypeConversion: '<S403>/DataTypeConversion'
         */
        rtb_Merge_30 = CeVTLR_e_Init;

        /* Merge: '<S4>/Merge_31' incorporates:
         *  Constant: '<S416>/Constant'
         *  DataTypeConversion: '<S402>/DataTypeConversion'
         */
        rtb_Merge_31 = CeVTLR_e_Init;

        /* Merge: '<S4>/Merge_32' incorporates:
         *  Constant: '<S420>/Constant'
         *  DataTypeConversion: '<S404>/DataTypeConversion'
         */
        rtb_Switch1_ny = CeVTLR_e_Led_Off;

        /* Merge: '<S4>/Merge_33' incorporates:
         *  Constant: '<S421>/Constant'
         *  DataTypeConversion: '<S405>/DataTypeConversion'
         */
        rtb_Merge_33 = CeVTLR_e_Init;

        /* End of Outputs for SubSystem: '<S4>/V2L_Onboard_Default' */
    }

    /* End of If: '<S4>/If1' */

    /* Logic: '<S24>/Logical11' incorporates:
     *  DataStoreRead: '<S24>/Data Store Read'
     */
    rtb_TmpSignalConversionAtVeCI_b = (rtb_TmpSignalConversionAtVeHPMR &&
        (EeVTLR_b_V2L_OB_IDCM_Auth));

    /* Outputs for Atomic SubSystem: '<S24>/EdgeRising1' */
    /* Logic: '<S51>/OR1' incorporates:
     *  UnitDelay: '<S51>/Unit Delay'
     */
    rtb_AND_le = !VTLR_ac_DW.UnitDelay_DSTATE_ay;

    /* Update for UnitDelay: '<S51>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_ay = rtb_TmpSignalConversionAtVeCI_b;

    /* Outputs for Atomic SubSystem: '<S64>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S69>/Signal Latch On With Reset' */
    /* Logic: '<S70>/OR1' incorporates:
     *  Logic: '<S51>/AND'
     *  Logic: '<S70>/NOT'
     *  Logic: '<S70>/OR'
     *  UnitDelay: '<S69>/Unit Delay1'
     *  UnitDelay: '<S70>/Unit Delay'
     */
    rtb_AND_le = ((rtb_TmpSignalConversionAtVeCI_b && rtb_AND_le) ||
                  ((!VTLR_ac_DW.UnitDelay1_DSTATE_d) &&
                   (VTLR_ac_DW.UnitDelay_DSTATE_br)));

    /* End of Outputs for SubSystem: '<S24>/EdgeRising1' */

    /* Update for UnitDelay: '<S70>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_br = rtb_AND_le;

    /* End of Outputs for SubSystem: '<S69>/Signal Latch On With Reset' */

    /* Switch: '<S69>/Switch1' incorporates:
     *  Constant: '<S59>/Calib'
     *  Constant: '<S69>/Constant Value'
     *  Logic: '<S69>/Logical Operator'
     *  MinMax: '<S69>/Minimum'
     *  Sum: '<S69>/Summation'
     *  UnitDelay: '<S69>/Unit Delay'
     */
    if (!rtb_AND_le)
    {
        /* Switch: '<S69>/Switch1' incorporates:
         *  Constant: '<S69>/Constant Value1'
         */
        rtb_Switch1_p5 = 0U;
    }
    else if (KeVTLR_Cnt_SampleDelayRTC < ((uint16)(((uint32)
                VTLR_ac_DW.UnitDelay_DSTATE_db) + 1U)))
    {
        /* MinMax: '<S69>/Minimum' incorporates:
         *  Constant: '<S59>/Calib'
         *  Switch: '<S69>/Switch1'
         */
        rtb_Switch1_p5 = KeVTLR_Cnt_SampleDelayRTC;
    }
    else
    {
        /* Switch: '<S69>/Switch1' incorporates:
         *  Constant: '<S69>/Constant Value'
         *  MinMax: '<S69>/Minimum'
         *  Sum: '<S69>/Summation'
         *  UnitDelay: '<S69>/Unit Delay'
         */
        rtb_Switch1_p5 = (uint16)(((uint32)VTLR_ac_DW.UnitDelay_DSTATE_db) + 1U);
    }

    /* End of Switch: '<S69>/Switch1' */

    /* RelationalOperator: '<S69>/Greater  Than' incorporates:
     *  Constant: '<S59>/Calib'
     */
    rtb_Merge16 = (rtb_Switch1_p5 >= KeVTLR_Cnt_SampleDelayRTC);

    /* Update for UnitDelay: '<S69>/Unit Delay1' */
    VTLR_ac_DW.UnitDelay1_DSTATE_d = rtb_Merge16;

    /* Update for UnitDelay: '<S69>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_db = rtb_Switch1_p5;

    /* Switch: '<S64>/Switch' incorporates:
     *  DataStoreWrite: '<S64>/Data Store Write1'
     *  Logic: '<S69>/AND'
     */
    if (rtb_AND_le && rtb_Merge16)
    {
        VTLR_ac_DW.EeVTLR_g_ChrgNowMaxTimetoPlug_i = rtb_Subtraction_tmp;
    }

    /* End of Switch: '<S64>/Switch' */
    /* End of Outputs for SubSystem: '<S64>/Turn On Delay Sample' */

    /* Switch: '<S64>/Switch1' incorporates:
     *  Constant: '<S64>/Constant Value'
     *  DataStoreWrite: '<S64>/Data Store Write1'
     *  RelationalOperator: '<S64>/Comparison1'
     */
    if (VTLR_ac_DW.EeVTLR_g_ChrgNowMaxTimetoPlug_i == 0U)
    {
        /* Switch: '<S89>/Switch1' incorporates:
         *  Constant: '<S64>/Constant Value1'
         *  Sum: '<S64>/Subtraction'
         */
        rtb_Sum = rtb_Subtraction_tmp - 1U;
    }
    else
    {
        /* Switch: '<S89>/Switch1' */
        rtb_Sum = VTLR_ac_DW.EeVTLR_g_ChrgNowMaxTimetoPlug_i;
    }

    /* End of Switch: '<S64>/Switch1' */

    /* RelationalOperator: '<S24>/Comparison1' */
    rtb_AND_le = (rtb_TmpSignalConversionAtVePLTR < rtb_Sum);

    /* Outputs for Atomic SubSystem: '<S24>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S66>/EdgeRising' */
    /* Logic: '<S72>/AND' incorporates:
     *  Logic: '<S72>/OR1'
     *  UnitDelay: '<S72>/Unit Delay'
     */
    rtb_Merge16 = (rtb_AND_le && (!VTLR_ac_DW.UnitDelay_DSTATE_kl));

    /* Update for UnitDelay: '<S72>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_kl = rtb_AND_le;

    /* End of Outputs for SubSystem: '<S66>/EdgeRising' */

    /* Switch: '<S66>/Switch1' incorporates:
     *  Constant: '<S61>/Calib'
     *  Constant: '<S66>/Constant Value'
     *  Logic: '<S66>/OR'
     *  Logic: '<S66>/OR1'
     *  MinMax: '<S66>/Minimum'
     *  Sum: '<S66>/Summation'
     *  UnitDelay: '<S66>/Unit Delay'
     */
    if ((!rtb_AND_le) || rtb_Merge16)
    {
        /* Switch: '<S66>/Switch1' incorporates:
         *  Constant: '<S66>/Constant Value1'
         */
        rtb_Switch1_p5 = 0U;
    }
    else if (KeVTLR_Cnt_WUDelay_RTC < ((uint16)(((uint32)
                VTLR_ac_DW.UnitDelay_DSTATE_e5) + 1U)))
    {
        /* MinMax: '<S66>/Minimum' incorporates:
         *  Constant: '<S61>/Calib'
         *  Switch: '<S66>/Switch1'
         */
        rtb_Switch1_p5 = KeVTLR_Cnt_WUDelay_RTC;
    }
    else
    {
        /* Switch: '<S66>/Switch1' incorporates:
         *  Constant: '<S66>/Constant Value'
         *  MinMax: '<S66>/Minimum'
         *  Sum: '<S66>/Summation'
         *  UnitDelay: '<S66>/Unit Delay'
         */
        rtb_Switch1_p5 = (uint16)(((uint32)VTLR_ac_DW.UnitDelay_DSTATE_e5) + 1U);
    }

    /* End of Switch: '<S66>/Switch1' */

    /* Update for UnitDelay: '<S66>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_e5 = rtb_Switch1_p5;

    /* End of Outputs for SubSystem: '<S24>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S24>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S65>/EdgeRising' */
    /* Logic: '<S71>/AND' incorporates:
     *  DataStoreRead: '<S24>/Data Store Read1'
     *  Logic: '<S71>/OR1'
     *  UnitDelay: '<S71>/Unit Delay'
     */
    rtb_Merge16 = ((EeVTLR_b_V2L_OB_IDCM_Auth) &&
                   (!VTLR_ac_DW.UnitDelay_DSTATE_cb));

    /* Update for UnitDelay: '<S71>/Unit Delay' incorporates:
     *  DataStoreRead: '<S24>/Data Store Read1'
     */
    VTLR_ac_DW.UnitDelay_DSTATE_cb = EeVTLR_b_V2L_OB_IDCM_Auth;

    /* End of Outputs for SubSystem: '<S65>/EdgeRising' */

    /* Logic: '<S65>/OR1' incorporates:
     *  DataStoreRead: '<S24>/Data Store Read1'
     *  Logic: '<S65>/AND'
     */
    tmpRead_2 = !EeVTLR_b_V2L_OB_IDCM_Auth;

    /* Switch: '<S65>/Switch1' incorporates:
     *  Constant: '<S60>/Calib'
     *  Constant: '<S65>/Constant Value'
     *  Logic: '<S65>/OR'
     *  Logic: '<S65>/OR1'
     *  MinMax: '<S65>/Minimum'
     *  Sum: '<S65>/Summation'
     *  UnitDelay: '<S65>/Unit Delay'
     */
    if (tmpRead_2 || rtb_Merge16)
    {
        /* Switch: '<S65>/Switch1' incorporates:
         *  Constant: '<S65>/Constant Value1'
         */
        rtb_Switch_av = 0U;
    }
    else if (KeVTLR_Cnt_V2L_IDCM_Auth_Dbnc < ((uint16)(((uint32)
                VTLR_ac_DW.UnitDelay_DSTATE_h) + 1U)))
    {
        /* MinMax: '<S65>/Minimum' incorporates:
         *  Constant: '<S60>/Calib'
         *  Switch: '<S65>/Switch1'
         */
        rtb_Switch_av = KeVTLR_Cnt_V2L_IDCM_Auth_Dbnc;
    }
    else
    {
        /* Switch: '<S65>/Switch1' incorporates:
         *  Constant: '<S65>/Constant Value'
         *  MinMax: '<S65>/Minimum'
         *  Sum: '<S65>/Summation'
         *  UnitDelay: '<S65>/Unit Delay'
         */
        rtb_Switch_av = (uint16)(((uint32)VTLR_ac_DW.UnitDelay_DSTATE_h) + 1U);
    }

    /* End of Switch: '<S65>/Switch1' */

    /* Update for UnitDelay: '<S65>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_h = rtb_Switch_av;

    /* End of Outputs for SubSystem: '<S24>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S24>/EdgeFalling2' */
    /* Logic: '<S50>/AND' incorporates:
     *  Logic: '<S50>/OR1'
     *  UnitDelay: '<S50>/Unit Delay'
     */
    rtb_Merge16 = ((!rtb_AND_ab) && (VTLR_ac_DW.UnitDelay_DSTATE_or5));

    /* Update for UnitDelay: '<S50>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_or5 = rtb_AND_ab;

    /* End of Outputs for SubSystem: '<S24>/EdgeFalling2' */

    /* Outputs for Atomic SubSystem: '<S24>/EdgeRising5' */
    /* Logic: '<S55>/AND' incorporates:
     *  Logic: '<S55>/OR1'
     *  UnitDelay: '<S55>/Unit Delay'
     */
    rtb_OR1_had = !VTLR_ac_DW.UnitDelay_DSTATE_fc;

    /* Update for UnitDelay: '<S55>/Unit Delay' incorporates:
     *  Constant: '<S24>/TRUE Constant'
     */
    VTLR_ac_DW.UnitDelay_DSTATE_fc = true;

    /* End of Outputs for SubSystem: '<S24>/EdgeRising5' */

    /* Outputs for Atomic SubSystem: '<S24>/Count Down Reset Enabled' */
    /* Switch: '<S48>/Switch1' incorporates:
     *  Constant: '<S48>/Constant Value'
     *  Logic: '<S24>/Logical6'
     *  Logic: '<S48>/AND'
     *  RelationalOperator: '<S48>/Greater  Than'
     *  Switch: '<S48>/Switch2'
     *  UnitDelay: '<S48>/Unit Delay'
     */
    if (rtb_Merge16 || rtb_OR1_had)
    {
        /* Switch: '<S48>/Switch1' incorporates:
         *  Constant: '<S58>/Calib'
         */
        rtb_Switch1_ml = KeVTLR_Cnt_LongPress;
    }
    else if (rtb_AND_ab && (((sint32)VTLR_ac_DW.UnitDelay_DSTATE_i) > 0))
    {
        /* Switch: '<S48>/Switch2' incorporates:
         *  Constant: '<S48>/Constant Value1'
         *  Sum: '<S48>/Subtraction'
         *  Switch: '<S48>/Switch1'
         *  UnitDelay: '<S48>/Unit Delay'
         */
        rtb_Switch1_ml = (uint16)((sint32)(((sint32)
            VTLR_ac_DW.UnitDelay_DSTATE_i) - 1));
    }
    else
    {
        /* Switch: '<S48>/Switch1' incorporates:
         *  Switch: '<S48>/Switch2'
         *  UnitDelay: '<S48>/Unit Delay'
         */
        rtb_Switch1_ml = VTLR_ac_DW.UnitDelay_DSTATE_i;
    }

    /* End of Switch: '<S48>/Switch1' */

    /* Update for UnitDelay: '<S48>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_i = rtb_Switch1_ml;

    /* End of Outputs for SubSystem: '<S24>/Count Down Reset Enabled' */

    /* Logic: '<S24>/Logical4' incorporates:
     *  Logic: '<S25>/Logical4'
     */
    rtb_TmpSignalConversionAtVeC_ly = !rtb_TmpSignalConversionAtVeC_ly;

    /* Outputs for IfAction SubSystem: '<S24>/clear_auth' incorporates:
     *  ActionPort: '<S67>/Action Port'
     */
    /* Outputs for Atomic SubSystem: '<S24>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S24>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S24>/Count Down Reset Enabled' */
    /* If: '<S24>/If' incorporates:
     *  Constant: '<S48>/Constant Value2'
     *  Constant: '<S60>/Calib'
     *  Constant: '<S61>/Calib'
     *  DataStoreWrite: '<S67>/Data Store Write1'
     *  Logic: '<S24>/Logical1'
     *  Logic: '<S24>/Logical2'
     *  Logic: '<S24>/Logical3'
     *  Logic: '<S24>/Logical4'
     *  Logic: '<S24>/Logical5'
     *  Logic: '<S24>/Logical7'
     *  Logic: '<S24>/Logical9'
     *  Logic: '<S65>/AND'
     *  Logic: '<S66>/AND'
     *  RelationalOperator: '<S48>/Greater  Than1'
     *  RelationalOperator: '<S65>/Greater  Than'
     *  RelationalOperator: '<S66>/Greater  Than'
     */
    EeVTLR_b_V2L_OB_IDCM_Auth = ((((rtb_TmpSignalConversionAtVeC_ng ||
        rtb_TmpSignalConversionAtVeC_ly) && (((rtb_AND_le && (rtb_Switch1_p5 >=
        KeVTLR_Cnt_WUDelay_RTC)) || (tmpRead_2 || (rtb_Switch_av <
        KeVTLR_Cnt_V2L_IDCM_Auth_Dbnc))) || (!rtb_TmpSignalConversionAtVeCI_b)))
        && (((sint32)rtb_Switch1_ml) > 0)) && (EeVTLR_b_V2L_OB_IDCM_Auth));

    /* End of Outputs for SubSystem: '<S24>/Count Down Reset Enabled' */
    /* End of Outputs for SubSystem: '<S24>/Turn On Delay Sample' */
    /* End of Outputs for SubSystem: '<S24>/Turn On Delay Sample1' */
    /* End of Outputs for SubSystem: '<S24>/clear_auth' */

    /* Logic: '<S24>/Logical' incorporates:
     *  Constant: '<S56>/Constant'
     *  Constant: '<S57>/Constant'
     *  RelationalOperator: '<S23>/Comparison3'
     *  RelationalOperator: '<S24>/Comparison2'
     *  RelationalOperator: '<S24>/Comparison3'
     *  Switch: '<S5>/Switch1'
     */
    rtb_AND_ab = ((rtb_TmpSignalConversionAtVeC_jx && (((uint32)
                     VeVTLR_e_PMM_PowerMode) != CePMDR_e_PowerMode_Off)) &&
                  (((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                   CeTRGR_e_TransRangePark));

    /* Outputs for Atomic SubSystem: '<S24>/EdgeRising4' */
    /* Logic: '<S54>/OR1' incorporates:
     *  UnitDelay: '<S54>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeC_ng = !VTLR_ac_DW.UnitDelay_DSTATE_mq;

    /* Update for UnitDelay: '<S54>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_mq = rtb_AND_ab;

    /* Outputs for IfAction SubSystem: '<S24>/set_auth' incorporates:
     *  ActionPort: '<S68>/Action Port'
     */
    /* If: '<S24>/If1' incorporates:
     *  DataStoreWrite: '<S68>/Data Store Write'
     *  Logic: '<S54>/AND'
     */
    EeVTLR_b_V2L_OB_IDCM_Auth = ((rtb_AND_ab && rtb_TmpSignalConversionAtVeC_ng)
        || (EeVTLR_b_V2L_OB_IDCM_Auth));

    /* End of Outputs for SubSystem: '<S24>/set_auth' */
    /* End of Outputs for SubSystem: '<S24>/EdgeRising4' */

    /* Logic: '<S25>/Logical11' incorporates:
     *  DataStoreRead: '<S25>/Data Store Read'
     */
    rtb_AND_ab = (rtb_TmpSignalConversionAtVeC_oh && (EeVTLR_b_V2L_OB_PPIM_Auth));

    /* Outputs for Atomic SubSystem: '<S25>/EdgeRising1' */
    /* Logic: '<S76>/OR1' incorporates:
     *  UnitDelay: '<S76>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeC_ng = !VTLR_ac_DW.UnitDelay_DSTATE_i0;

    /* Update for UnitDelay: '<S76>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_i0 = rtb_AND_ab;

    /* Outputs for Atomic SubSystem: '<S89>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S94>/Signal Latch On With Reset' */
    /* Logic: '<S95>/OR1' incorporates:
     *  Logic: '<S76>/AND'
     *  Logic: '<S95>/NOT'
     *  Logic: '<S95>/OR'
     *  UnitDelay: '<S94>/Unit Delay1'
     *  UnitDelay: '<S95>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeC_ng = ((rtb_AND_ab &&
        rtb_TmpSignalConversionAtVeC_ng) || ((!VTLR_ac_DW.UnitDelay1_DSTATE_e) &&
        (VTLR_ac_DW.UnitDelay_DSTATE_me)));

    /* End of Outputs for SubSystem: '<S25>/EdgeRising1' */

    /* Update for UnitDelay: '<S95>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_me = rtb_TmpSignalConversionAtVeC_ng;

    /* End of Outputs for SubSystem: '<S94>/Signal Latch On With Reset' */

    /* Switch: '<S94>/Switch1' incorporates:
     *  Constant: '<S84>/Calib'
     *  Constant: '<S94>/Constant Value'
     *  Logic: '<S94>/Logical Operator'
     *  MinMax: '<S94>/Minimum'
     *  Sum: '<S94>/Summation'
     *  UnitDelay: '<S94>/Unit Delay'
     */
    if (!rtb_TmpSignalConversionAtVeC_ng)
    {
        /* Switch: '<S94>/Switch1' incorporates:
         *  Constant: '<S94>/Constant Value1'
         */
        rtb_Switch1_p5 = 0U;
    }
    else if (KeVTLR_Cnt_SampleDelayRTC < ((uint16)(((uint32)
                VTLR_ac_DW.UnitDelay_DSTATE_n5) + 1U)))
    {
        /* MinMax: '<S94>/Minimum' incorporates:
         *  Constant: '<S84>/Calib'
         *  Switch: '<S94>/Switch1'
         */
        rtb_Switch1_p5 = KeVTLR_Cnt_SampleDelayRTC;
    }
    else
    {
        /* Switch: '<S94>/Switch1' incorporates:
         *  Constant: '<S94>/Constant Value'
         *  MinMax: '<S94>/Minimum'
         *  Sum: '<S94>/Summation'
         *  UnitDelay: '<S94>/Unit Delay'
         */
        rtb_Switch1_p5 = (uint16)(((uint32)VTLR_ac_DW.UnitDelay_DSTATE_n5) + 1U);
    }

    /* End of Switch: '<S94>/Switch1' */

    /* RelationalOperator: '<S94>/Greater  Than' incorporates:
     *  Constant: '<S84>/Calib'
     */
    rtb_TmpSignalConversionAtVeCI_b = (rtb_Switch1_p5 >=
        KeVTLR_Cnt_SampleDelayRTC);

    /* Update for UnitDelay: '<S94>/Unit Delay1' */
    VTLR_ac_DW.UnitDelay1_DSTATE_e = rtb_TmpSignalConversionAtVeCI_b;

    /* Update for UnitDelay: '<S94>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_n5 = rtb_Switch1_p5;

    /* Switch: '<S89>/Switch' incorporates:
     *  DataStoreWrite: '<S89>/Data Store Write1'
     *  Logic: '<S94>/AND'
     */
    if (rtb_TmpSignalConversionAtVeC_ng && rtb_TmpSignalConversionAtVeCI_b)
    {
        VTLR_ac_DW.EeVTLR_g_ChrgNowMaxTimetoPlug_a = rtb_Subtraction_tmp;
    }

    /* End of Switch: '<S89>/Switch' */
    /* End of Outputs for SubSystem: '<S89>/Turn On Delay Sample' */

    /* Switch: '<S89>/Switch1' incorporates:
     *  Constant: '<S89>/Constant Value'
     *  DataStoreWrite: '<S89>/Data Store Write1'
     *  RelationalOperator: '<S89>/Comparison1'
     */
    if (VTLR_ac_DW.EeVTLR_g_ChrgNowMaxTimetoPlug_a == 0U)
    {
        /* Switch: '<S89>/Switch1' incorporates:
         *  Constant: '<S89>/Constant Value1'
         *  Sum: '<S89>/Subtraction'
         */
        rtb_Sum = rtb_Subtraction_tmp - 1U;
    }
    else
    {
        /* Switch: '<S89>/Switch1' */
        rtb_Sum = VTLR_ac_DW.EeVTLR_g_ChrgNowMaxTimetoPlug_a;
    }

    /* End of Switch: '<S89>/Switch1' */

    /* RelationalOperator: '<S25>/Comparison1' */
    rtb_TmpSignalConversionAtVeC_ng = (rtb_TmpSignalConversionAtVePLTR < rtb_Sum);

    /* Outputs for Atomic SubSystem: '<S25>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S91>/EdgeRising' */
    /* Logic: '<S97>/AND' incorporates:
     *  Logic: '<S97>/OR1'
     *  UnitDelay: '<S97>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCI_b = (rtb_TmpSignalConversionAtVeC_ng &&
        (!VTLR_ac_DW.UnitDelay_DSTATE_aa));

    /* Update for UnitDelay: '<S97>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_aa = rtb_TmpSignalConversionAtVeC_ng;

    /* End of Outputs for SubSystem: '<S91>/EdgeRising' */

    /* Switch: '<S91>/Switch1' incorporates:
     *  Constant: '<S86>/Calib'
     *  Constant: '<S91>/Constant Value'
     *  Logic: '<S91>/OR'
     *  Logic: '<S91>/OR1'
     *  MinMax: '<S91>/Minimum'
     *  Sum: '<S91>/Summation'
     *  UnitDelay: '<S91>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeC_ng) || rtb_TmpSignalConversionAtVeCI_b)
    {
        /* Switch: '<S91>/Switch1' incorporates:
         *  Constant: '<S91>/Constant Value1'
         */
        rtb_Switch1_p5 = 0U;
    }
    else if (KeVTLR_Cnt_WUDelay_RTC < ((uint16)(((uint32)
                VTLR_ac_DW.UnitDelay_DSTATE_mr) + 1U)))
    {
        /* MinMax: '<S91>/Minimum' incorporates:
         *  Constant: '<S86>/Calib'
         *  Switch: '<S91>/Switch1'
         */
        rtb_Switch1_p5 = KeVTLR_Cnt_WUDelay_RTC;
    }
    else
    {
        /* Switch: '<S91>/Switch1' incorporates:
         *  Constant: '<S91>/Constant Value'
         *  MinMax: '<S91>/Minimum'
         *  Sum: '<S91>/Summation'
         *  UnitDelay: '<S91>/Unit Delay'
         */
        rtb_Switch1_p5 = (uint16)(((uint32)VTLR_ac_DW.UnitDelay_DSTATE_mr) + 1U);
    }

    /* End of Switch: '<S91>/Switch1' */

    /* Update for UnitDelay: '<S91>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_mr = rtb_Switch1_p5;

    /* End of Outputs for SubSystem: '<S25>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S25>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S90>/EdgeRising' */
    /* Logic: '<S96>/AND' incorporates:
     *  DataStoreRead: '<S25>/Data Store Read1'
     *  Logic: '<S96>/OR1'
     *  UnitDelay: '<S96>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCI_b = ((EeVTLR_b_V2L_OB_IDCM_Auth) &&
        (!VTLR_ac_DW.UnitDelay_DSTATE_bc));

    /* Update for UnitDelay: '<S96>/Unit Delay' incorporates:
     *  DataStoreRead: '<S25>/Data Store Read1'
     */
    VTLR_ac_DW.UnitDelay_DSTATE_bc = EeVTLR_b_V2L_OB_IDCM_Auth;

    /* End of Outputs for SubSystem: '<S90>/EdgeRising' */

    /* Logic: '<S90>/OR1' incorporates:
     *  DataStoreRead: '<S25>/Data Store Read1'
     *  Logic: '<S90>/AND'
     */
    tmpRead_2 = !EeVTLR_b_V2L_OB_IDCM_Auth;

    /* Switch: '<S90>/Switch1' incorporates:
     *  Constant: '<S85>/Calib'
     *  Constant: '<S90>/Constant Value'
     *  Logic: '<S90>/OR'
     *  Logic: '<S90>/OR1'
     *  MinMax: '<S90>/Minimum'
     *  Sum: '<S90>/Summation'
     *  UnitDelay: '<S90>/Unit Delay'
     */
    if (tmpRead_2 || rtb_TmpSignalConversionAtVeCI_b)
    {
        /* Switch: '<S90>/Switch1' incorporates:
         *  Constant: '<S90>/Constant Value1'
         */
        rtb_Switch_av = 0U;
    }
    else if (KeVTLR_Cnt_V2L_IDCM_Auth_Dbnc < ((uint16)(((uint32)
                VTLR_ac_DW.UnitDelay_DSTATE_f) + 1U)))
    {
        /* MinMax: '<S90>/Minimum' incorporates:
         *  Constant: '<S85>/Calib'
         *  Switch: '<S90>/Switch1'
         */
        rtb_Switch_av = KeVTLR_Cnt_V2L_IDCM_Auth_Dbnc;
    }
    else
    {
        /* Switch: '<S90>/Switch1' incorporates:
         *  Constant: '<S90>/Constant Value'
         *  MinMax: '<S90>/Minimum'
         *  Sum: '<S90>/Summation'
         *  UnitDelay: '<S90>/Unit Delay'
         */
        rtb_Switch_av = (uint16)(((uint32)VTLR_ac_DW.UnitDelay_DSTATE_f) + 1U);
    }

    /* End of Switch: '<S90>/Switch1' */

    /* Update for UnitDelay: '<S90>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_f = rtb_Switch_av;

    /* End of Outputs for SubSystem: '<S25>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S25>/EdgeFalling2' */
    /* Logic: '<S75>/AND' incorporates:
     *  Logic: '<S75>/OR1'
     *  UnitDelay: '<S75>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCI_b = ((!rtb_TmpSignalConversionAtVeC_mq) &&
        (VTLR_ac_DW.UnitDelay_DSTATE_i4));

    /* Update for UnitDelay: '<S75>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_i4 = rtb_TmpSignalConversionAtVeC_mq;

    /* End of Outputs for SubSystem: '<S25>/EdgeFalling2' */

    /* Outputs for Atomic SubSystem: '<S25>/EdgeRising5' */
    /* Logic: '<S80>/AND' incorporates:
     *  Logic: '<S80>/OR1'
     *  UnitDelay: '<S80>/Unit Delay'
     */
    rtb_AND_le = !VTLR_ac_DW.UnitDelay_DSTATE_jd;

    /* Update for UnitDelay: '<S80>/Unit Delay' incorporates:
     *  Constant: '<S25>/TRUE Constant'
     */
    VTLR_ac_DW.UnitDelay_DSTATE_jd = true;

    /* End of Outputs for SubSystem: '<S25>/EdgeRising5' */

    /* Outputs for Atomic SubSystem: '<S25>/Count Down Reset Enabled' */
    /* Switch: '<S73>/Switch1' incorporates:
     *  Constant: '<S73>/Constant Value'
     *  Logic: '<S25>/Logical6'
     *  Logic: '<S73>/AND'
     *  RelationalOperator: '<S73>/Greater  Than'
     *  Switch: '<S73>/Switch2'
     *  UnitDelay: '<S73>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeCI_b || rtb_AND_le)
    {
        /* Switch: '<S73>/Switch1' incorporates:
         *  Constant: '<S83>/Calib'
         */
        rtb_Switch1_ml = KeVTLR_Cnt_LongPress;
    }
    else if (rtb_TmpSignalConversionAtVeC_mq && (((sint32)
               VTLR_ac_DW.UnitDelay_DSTATE_j1) > 0))
    {
        /* Switch: '<S73>/Switch2' incorporates:
         *  Constant: '<S73>/Constant Value1'
         *  Sum: '<S73>/Subtraction'
         *  Switch: '<S73>/Switch1'
         *  UnitDelay: '<S73>/Unit Delay'
         */
        rtb_Switch1_ml = (uint16)((sint32)(((sint32)
            VTLR_ac_DW.UnitDelay_DSTATE_j1) - 1));
    }
    else
    {
        /* Switch: '<S73>/Switch1' incorporates:
         *  Switch: '<S73>/Switch2'
         *  UnitDelay: '<S73>/Unit Delay'
         */
        rtb_Switch1_ml = VTLR_ac_DW.UnitDelay_DSTATE_j1;
    }

    /* End of Switch: '<S73>/Switch1' */

    /* Update for UnitDelay: '<S73>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_j1 = rtb_Switch1_ml;

    /* Outputs for IfAction SubSystem: '<S25>/clear_auth' incorporates:
     *  ActionPort: '<S92>/Action Port'
     */
    /* Outputs for Atomic SubSystem: '<S25>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S25>/Turn On Delay Sample' */
    /* If: '<S25>/If' incorporates:
     *  Constant: '<S73>/Constant Value2'
     *  Constant: '<S85>/Calib'
     *  Constant: '<S86>/Calib'
     *  DataStoreWrite: '<S92>/Data Store Write1'
     *  Logic: '<S25>/Logical1'
     *  Logic: '<S25>/Logical2'
     *  Logic: '<S25>/Logical3'
     *  Logic: '<S25>/Logical4'
     *  Logic: '<S25>/Logical5'
     *  Logic: '<S25>/Logical7'
     *  Logic: '<S25>/Logical9'
     *  Logic: '<S90>/AND'
     *  Logic: '<S91>/AND'
     *  RelationalOperator: '<S73>/Greater  Than1'
     *  RelationalOperator: '<S90>/Greater  Than'
     *  RelationalOperator: '<S91>/Greater  Than'
     */
    EeVTLR_b_V2L_OB_PPIM_Auth = ((((rtb_TmpSignalConversionAtVeC_mv ||
        rtb_TmpSignalConversionAtVeC_ly) && (((rtb_TmpSignalConversionAtVeC_ng &&
        (rtb_Switch1_p5 >= KeVTLR_Cnt_WUDelay_RTC)) || (tmpRead_2 ||
        (rtb_Switch_av < KeVTLR_Cnt_V2L_IDCM_Auth_Dbnc))) || (!rtb_AND_ab))) &&
        (((sint32)rtb_Switch1_ml) > 0)) && (EeVTLR_b_V2L_OB_PPIM_Auth));

    /* End of Outputs for SubSystem: '<S25>/Turn On Delay Sample' */
    /* End of Outputs for SubSystem: '<S25>/Turn On Delay Sample1' */
    /* End of Outputs for SubSystem: '<S25>/clear_auth' */
    /* End of Outputs for SubSystem: '<S25>/Count Down Reset Enabled' */

    /* Logic: '<S25>/Logical' incorporates:
     *  Constant: '<S81>/Constant'
     *  Constant: '<S82>/Constant'
     *  RelationalOperator: '<S23>/Comparison3'
     *  RelationalOperator: '<S25>/Comparison2'
     *  RelationalOperator: '<S25>/Comparison3'
     *  Switch: '<S5>/Switch1'
     */
    rtb_TmpSignalConversionAtVeC_ly = ((rtb_TmpSignalConversionAtVeC_lz &&
        (((uint32)VeVTLR_e_PMM_PowerMode) != CePMDR_e_PowerMode_Off)) &&
        (((uint32)rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangePark));

    /* Outputs for Atomic SubSystem: '<S25>/EdgeRising4' */
    /* Logic: '<S79>/OR1' incorporates:
     *  UnitDelay: '<S79>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeC_mq = !VTLR_ac_DW.UnitDelay_DSTATE_fwz;

    /* Update for UnitDelay: '<S79>/Unit Delay' */
    VTLR_ac_DW.UnitDelay_DSTATE_fwz = rtb_TmpSignalConversionAtVeC_ly;

    /* Outputs for IfAction SubSystem: '<S25>/set_auth' incorporates:
     *  ActionPort: '<S93>/Action Port'
     */
    /* If: '<S25>/If1' incorporates:
     *  DataStoreWrite: '<S93>/Data Store Write'
     *  Logic: '<S79>/AND'
     */
    EeVTLR_b_V2L_OB_PPIM_Auth = ((rtb_TmpSignalConversionAtVeC_ly &&
        rtb_TmpSignalConversionAtVeC_mq) || (EeVTLR_b_V2L_OB_PPIM_Auth));

    /* End of Outputs for SubSystem: '<S25>/set_auth' */
    /* End of Outputs for SubSystem: '<S25>/EdgeRising4' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/VTLR_MedTED' */

    /* Inport: '<Root>/VeVDVR_e_DschrgSysSts' */
    (void)Rte_Read_VeVDVR_e_DschrgSysSts_Value(&tmpRead_a);

    /* Outputs for Function Call SubSystem: '<Root>/VTLR_MedTED' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VTLC'
     */
    /* Switch: '<S105>/Switch1' incorporates:
     *  Constant: '<S100>/Constant'
     *  Constant: '<S101>/Constant'
     *  Constant: '<S102>/Constant'
     *  Constant: '<S103>/Constant'
     *  Constant: '<S104>/Constant'
     *  Constant: '<S99>/Constant'
     *  Inport: '<Root>/VeVDVR_e_DschrgSysSts'
     *  Logic: '<S7>/Logical Operator6'
     *  Merge: '<S4>/Merge_25'
     *  RelationalOperator: '<S7>/Relational Operator1'
     *  RelationalOperator: '<S7>/Relational Operator2'
     *  RelationalOperator: '<S7>/Relational Operator3'
     *  RelationalOperator: '<S7>/Relational Operator7'
     */
    if ((((((uint32)rtb_Merge_4_g) == CeVTLR_e_DschrgActv) || (((uint32)
            rtb_Switch1_ns) == CeVTLR_e_DschrgActv)) || (((uint32)rtb_AND_cq_tmp)
          == CeVTLR_e_DschrgActv)) || (((uint32)tmpRead_a) ==
            CeVTLR_e_DschrgActv))
    {
        rtb_Switch1_ns = CeVTLR_e_DschrgActv;
    }
    else
    {
        rtb_Switch1_ns = CeVTLR_e_DschrgInactv;
    }

    /* End of Switch: '<S105>/Switch1' */

    /* If: '<S107>/If1' incorporates:
     *  Constant: '<S111>/Constant'
     *  DataTypeConversion: '<S98>/DataTypeConversion'
     *  Logic: '<S107>/Logical1'
     *  Logic: '<S107>/Logical3'
     *  RelationalOperator: '<S107>/Relational Operator3'
     *  Switch: '<S105>/Switch1'
     */
    if ((((uint32)rtb_Switch1_ns) != CeVTLR_e_DschrgActv) ||
            rtb_TmpSignalConversionAtVeHPMR)
    {
        /* Outputs for IfAction SubSystem: '<S107>/IDCM_NoLoadInstantPower' incorporates:
         *  ActionPort: '<S113>/Action Port'
         */
        /* Merge: '<S107>/Merge' incorporates:
         *  Constant: '<S113>/Constant Value'
         *  SignalConversion generated from: '<S113>/InstantPower_IDCM'
         */
        rtb_TmpSignalConversionAtVeIDCR = 0.0F;

        /* End of Outputs for SubSystem: '<S107>/IDCM_NoLoadInstantPower' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S107>/IDCM_InstantPower' incorporates:
         *  ActionPort: '<S112>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S112>/Digital Lowpass Reset Enabled' */
        /* Sum: '<S116>/Summation' incorporates:
         *  Constant: '<S112>/Constant'
         *  Constant: '<S117>/Calib'
         *  Product: '<S112>/Divide'
         *  Product: '<S112>/Product'
         *  Product: '<S116>/Multiplication'
         *  Sum: '<S116>/Subtraction'
         *  UnitDelay: '<S116>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeIDCR = ((((rtb_TmpSignalConversionAtVeID_c *
            rtb_TmpSignalConversionAtVeIDCR) / 1000.0F) -
            VTLR_ac_DW.UnitDelay_DSTATE_p) * KeVTLR_k_DschrgOnboard_FiltCoef) +
            VTLR_ac_DW.UnitDelay_DSTATE_p;

        /* Update for UnitDelay: '<S116>/Unit Delay' incorporates:
         *  Switch: '<S116>/Switch2'
         */
        VTLR_ac_DW.UnitDelay_DSTATE_p = rtb_TmpSignalConversionAtVeIDCR;

        /* End of Outputs for SubSystem: '<S112>/Digital Lowpass Reset Enabled' */
        /* End of Outputs for SubSystem: '<S107>/IDCM_InstantPower' */
    }

    /* End of If: '<S107>/If1' */

    /* If: '<S107>/If' incorporates:
     *  Constant: '<S110>/Constant'
     *  DataTypeConversion: '<S98>/DataTypeConversion'
     *  Logic: '<S107>/Logical2'
     *  Logic: '<S107>/Logical4'
     *  RelationalOperator: '<S107>/Relational Operator1'
     *  Switch: '<S105>/Switch1'
     */
    if ((((uint32)rtb_Switch1_ns) != CeVTLR_e_DschrgActv) ||
            rtb_TmpSignalConversionAtVeC_oh)
    {
        /* Outputs for IfAction SubSystem: '<S107>/PPIM_NoLoadInstantPower' incorporates:
         *  ActionPort: '<S115>/Action Port'
         */
        /* Merge: '<S107>/Merge1' incorporates:
         *  Constant: '<S115>/Constant Value'
         *  SignalConversion generated from: '<S115>/InstantPower_PPIM'
         */
        rtb_TmpSignalConversionAtVeID_o = 0.0F;

        /* End of Outputs for SubSystem: '<S107>/PPIM_NoLoadInstantPower' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S107>/PPIM_InstantPower' incorporates:
         *  ActionPort: '<S114>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S114>/Digital Lowpass Reset Enabled' */
        /* Sum: '<S118>/Summation' incorporates:
         *  Constant: '<S114>/Constant1'
         *  Constant: '<S119>/Calib'
         *  Product: '<S114>/Divide1'
         *  Product: '<S114>/Product2'
         *  Product: '<S118>/Multiplication'
         *  Sum: '<S118>/Subtraction'
         *  UnitDelay: '<S118>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeID_o = ((((rtb_TmpSignalConversionAtVeID_m *
            rtb_TmpSignalConversionAtVeID_o) / 1000.0F) -
            VTLR_ac_DW.UnitDelay_DSTATE_a) * KeVTLR_k_DschrgOnboard_FiltCoef) +
            VTLR_ac_DW.UnitDelay_DSTATE_a;

        /* Update for UnitDelay: '<S118>/Unit Delay' incorporates:
         *  Switch: '<S118>/Switch2'
         */
        VTLR_ac_DW.UnitDelay_DSTATE_a = rtb_TmpSignalConversionAtVeID_o;

        /* End of Outputs for SubSystem: '<S114>/Digital Lowpass Reset Enabled' */
        /* End of Outputs for SubSystem: '<S107>/PPIM_InstantPower' */
    }

    /* End of If: '<S107>/If' */

    /* If: '<S8>/If1' incorporates:
     *  Constant: '<S106>/Constant'
     *  DataTypeConversion: '<S98>/DataTypeConversion'
     *  Inport: '<Root>/VeERER_E_WhRemaining_V2L'
     *  Logic: '<S8>/Logical2'
     *  Logic: '<S8>/Logical3'
     *  RelationalOperator: '<S8>/Relational Operator3'
     *  Switch: '<S105>/Switch1'
     */
    if ((((uint32)rtb_Switch1_ns) != CeVTLR_e_DschrgActv) &&
            (rtb_TmpSignalConversionAtVeHPMR && rtb_TmpSignalConversionAtVeC_oh))
    {
        /* Outputs for IfAction SubSystem: '<S8>/V2L_NotActive' incorporates:
         *  ActionPort: '<S109>/Action Port'
         */
        /* SignalConversion generated from: '<S1>/V2L_Discharge_Days' incorporates:
         *  Constant: '<S109>/Constant Value'
         *  Outport: '<Root>/VeVTLR_t_DschrgDays'
         *  SignalConversion generated from: '<S109>/Discharge_Day_Remaining'
         */
        (void)Rte_Write_VeVTLR_t_DschrgDays_Value(0.0F);

        /* SignalConversion generated from: '<S1>/V2L_Discharge_Hours' incorporates:
         *  Constant: '<S109>/Constant Value1'
         *  Outport: '<Root>/VeVTLR_t_DschrgHrs'
         *  SignalConversion generated from: '<S109>/Discharge_Hr_Remaining'
         */
        (void)Rte_Write_VeVTLR_t_DschrgHrs_Value(0.0F);

        /* Merge: '<S8>/Merge_2' incorporates:
         *  Constant: '<S109>/Constant Value2'
         *  SignalConversion generated from: '<S109>/Discharge_Minute_Remaining'
         */
        rtb_Gain = 0.0F;

        /* End of Outputs for SubSystem: '<S8>/V2L_NotActive' */
    }
    else
    {
        (void)Rte_Read_VeERER_E_WhRemaining_V2L_Value(&rtb_Gain);

        /* Outputs for IfAction SubSystem: '<S8>/V2L_Active' incorporates:
         *  ActionPort: '<S108>/Action Port'
         */
        /* Gain: '<S108>/Gain' incorporates:
         *  Inport: '<Root>/VeERER_E_WhRemaining_V2L'
         */
        rtb_Gain *= 60.0F;

        /* Sum: '<S108>/Sum' */
        rtb_TmpSignalConversionAtVeID_m = rtb_TmpSignalConversionAtVeIDCR +
            rtb_TmpSignalConversionAtVeID_o;

        /* Outputs for Atomic SubSystem: '<S108>/Protected Division' */
        /* Switch: '<S129>/Switch1' incorporates:
         *  Constant: '<S129>/Constant Value'
         *  Constant: '<S129>/Constant Value1'
         *  Constant: '<S129>/Constant Value2'
         *  Constant: '<S129>/Constant Value3'
         *  Logic: '<S129>/AND'
         *  RelationalOperator: '<S129>/Greater Than or Equal '
         *  RelationalOperator: '<S129>/Greater Than or Equal 1'
         *  RelationalOperator: '<S129>/Not Equal'
         *  RelationalOperator: '<S129>/Not Equal1'
         *  Switch: '<S129>/Switch2'
         *  Switch: '<S129>/Switch3'
         */
        if ((rtb_Gain != 0.0F) && (rtb_TmpSignalConversionAtVeID_m != 0.0F))
        {
            /* Switch: '<S129>/Switch1' incorporates:
             *  Product: '<S129>/Division'
             */
            rtb_Gain /= rtb_TmpSignalConversionAtVeID_m;
        }
        else if (rtb_Gain > 0.0F)
        {
            /* Switch: '<S129>/Switch2' incorporates:
             *  Constant: '<S129>/MAXFLOAT'
             *  Switch: '<S129>/Switch1'
             */
            rtb_Gain = 3.402823466E+38F;
        }
        else if (rtb_Gain < 0.0F)
        {
            /* Switch: '<S129>/Switch3' incorporates:
             *  Constant: '<S129>/MINFLOAT'
             *  Switch: '<S129>/Switch1'
             *  Switch: '<S129>/Switch2'
             */
            rtb_Gain = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S129>/Switch1' incorporates:
             *  Constant: '<S129>/Constant Value4'
             *  Switch: '<S129>/Switch2'
             *  Switch: '<S129>/Switch3'
             */
            rtb_Gain = 0.0F;
        }

        /* End of Switch: '<S129>/Switch1' */
        /* End of Outputs for SubSystem: '<S108>/Protected Division' */

        /* Outputs for Atomic SubSystem: '<S108>/Digital Lowpass Reset Enabled' */
        /* Sum: '<S120>/Summation' incorporates:
         *  Constant: '<S128>/Calib'
         *  Product: '<S120>/Multiplication'
         *  Sum: '<S120>/Subtraction'
         *  UnitDelay: '<S120>/Unit Delay'
         */
        rtb_Gain = ((rtb_Gain - VTLR_ac_DW.UnitDelay_DSTATE_ka) *
                    KeVTLR_k_DschrgOnboard_FiltCoef) +
            VTLR_ac_DW.UnitDelay_DSTATE_ka;

        /* Update for UnitDelay: '<S120>/Unit Delay' incorporates:
         *  Switch: '<S120>/Switch2'
         */
        VTLR_ac_DW.UnitDelay_DSTATE_ka = rtb_Gain;

        /* Product: '<S108>/Divide' incorporates:
         *  Constant: '<S126>/Calib'
         *  Product: '<S108>/Divide2'
         *  Switch: '<S120>/Switch2'
         */
        rtb_TmpSignalConversionAtVeID_c = rtb_Gain / KeVTLR_K_Min2Hr;

        /* End of Outputs for SubSystem: '<S108>/Digital Lowpass Reset Enabled' */

        /* Rounding: '<S108>/Rounding Function4' incorporates:
         *  Constant: '<S123>/Calib'
         *  Product: '<S108>/Divide'
         *  Product: '<S108>/Divide1'
         */
        rtb_TmpSignalConversionAtVeID_m = floorf(rtb_TmpSignalConversionAtVeID_c
            / KeVTLR_K_Hr2Day);

        /* SignalConversion generated from: '<S1>/V2L_Discharge_Days' incorporates:
         *  Outport: '<Root>/VeVTLR_t_DschrgDays'
         *  SignalConversion generated from: '<S108>/Discharge_Day_Remaining'
         */
        (void)Rte_Write_VeVTLR_t_DschrgDays_Value
            (rtb_TmpSignalConversionAtVeID_m);

        /* Product: '<S108>/Product1' incorporates:
         *  Constant: '<S121>/Calib'
         *  Product: '<S108>/Product3'
         */
        rtb_TmpSignalConversionAtVeID_m *= KeVTLR_K_DayRemain;

        /* Sum: '<S108>/Sum1' incorporates:
         *  Product: '<S108>/Product1'
         *  Rounding: '<S108>/Rounding Function2'
         */
        rtb_TmpSignalConversionAtVeID_c = floorf(rtb_TmpSignalConversionAtVeID_c)
            - rtb_TmpSignalConversionAtVeID_m;

        /* SignalConversion generated from: '<S1>/V2L_Discharge_Hours' incorporates:
         *  Outport: '<Root>/VeVTLR_t_DschrgHrs'
         *  SignalConversion generated from: '<S108>/Discharge_Hr_Remaining'
         */
        (void)Rte_Write_VeVTLR_t_DschrgHrs_Value(rtb_TmpSignalConversionAtVeID_c);

        /* Outputs for Atomic SubSystem: '<S108>/Digital Lowpass Reset Enabled' */
        /* Merge: '<S8>/Merge_2' incorporates:
         *  Constant: '<S124>/Calib'
         *  Constant: '<S125>/Calib'
         *  Product: '<S108>/Product2'
         *  Product: '<S108>/Product4'
         *  Rounding: '<S108>/Rounding Function3'
         *  Sum: '<S108>/Sum2'
         *  Switch: '<S120>/Switch2'
         */
        rtb_Gain = (floorf(rtb_Gain) - (rtb_TmpSignalConversionAtVeID_c *
                     KeVTLR_K_HrRemain)) - (rtb_TmpSignalConversionAtVeID_m *
            KeVTLR_K_HrRemain);

        /* End of Outputs for SubSystem: '<S108>/Digital Lowpass Reset Enabled' */
        /* End of Outputs for SubSystem: '<S8>/V2L_Active' */
    }

    /* End of If: '<S8>/If1' */

    /* Switch: '<S14>/Switch1' incorporates:
     *  Inport: '<Root>/VeVDVR_I_DschrgCrntLmt'
     */
    if (VeVTLR_b_SecureConnV2L)
    {
        (void)Rte_Read_VeVDVR_I_DschrgCrntLmt_Value(&tmpRead_b);

        /* Switch: '<S14>/Switch3' incorporates:
         *  Constant: '<S130>/Calib'
         *  Inport: '<Root>/VeVDVR_I_DschrgCrntLmt'
         */
        if (KeVTLR_b_PPIM_Ovrd)
        {
            /* Switch: '<S14>/Switch1' */
            rtb_TmpSignalConversionAtVeC_jh = tmpRead_b;
        }
        else
        {
            /* Switch: '<S14>/Switch1' */
            rtb_TmpSignalConversionAtVeC_jh = Merge_2_j;
        }

        /* End of Switch: '<S14>/Switch3' */
    }

    /* End of Switch: '<S14>/Switch1' */

    /* If: '<S22>/If1' incorporates:
     *  Constant: '<S460>/Calib'
     *  Constant: '<S482>/Calib'
     *  Switch: '<S461>/Switch2'
     *  Switch: '<S461>/Switch3'
     */
    if (KeVTLR_b_SlctPP_PwrSrc)
    {
        /* Outputs for IfAction SubSystem: '<S22>/PPWith_SameSource' incorporates:
         *  ActionPort: '<S462>/Action Port'
         */
        /* Merge: '<S22>/Merge' incorporates:
         *  Inport: '<S462>/V2L_Trunk_Status'
         *  Merge: '<S4>/Merge_15'
         *  SignalConversion generated from: '<S462>/V2L_Trunk_Status_SameSrc'
         */
        Merge_h = rtb_Merge_15;

        /* Switch: '<S462>/Switch9' incorporates:
         *  Constant: '<S483>/Constant'
         *  Inport: '<S462>/V2L_Trunk_Status'
         *  Merge: '<S4>/Merge_15'
         *  RelationalOperator: '<S462>/Relational Operator1'
         */
        if (((uint32)rtb_Merge_15) == CeVTLR_e_Active)
        {
            /* Merge: '<S22>/Merge1' incorporates:
             *  Constant: '<S494>/Constant'
             */
            rtb_Merge_20 = CeVTLR_e_Active_Frunk;
        }
        else
        {
            /* Merge: '<S22>/Merge1' incorporates:
             *  Constant: '<S497>/Constant'
             */
            rtb_Merge_20 = CeVTLR_e_Inactive_Frunk;
        }

        /* End of Switch: '<S462>/Switch9' */

        /* Logic: '<S462>/Logical11' incorporates:
         *  Logic: '<S462>/Logical15'
         */
        tmpRead_2 = !rtb_TmpSignalConversionAtVeCI_g;

        /* Switch: '<S462>/Switch1' incorporates:
         *  Constant: '<S498>/Constant'
         *  Logic: '<S462>/Logical11'
         *  Logic: '<S462>/Logical3'
         *  Merge: '<S4>/Merge_16'
         *  RelationalOperator: '<S462>/Relational Operator2'
         */
        if (tmpRead_2 && (((uint32)rtb_Switch1_m) != CeVTLR_e_Led_Blink))
        {
            /* Merge: '<S22>/Merge4' incorporates:
             *  Constant: '<S499>/Constant'
             */
            rtb_Switch1_f4 = CeVTLR_e_Led_Off;
        }
        else
        {
            /* Merge: '<S22>/Merge4' */
            rtb_Switch1_f4 = rtb_Switch1_m;
        }

        /* End of Switch: '<S462>/Switch1' */

        /* Logic: '<S462>/Logical12' incorporates:
         *  Logic: '<S462>/Logical14'
         */
        tmpRead = !rtb_TmpSignalConversionAtVeCI_j;

        /* Switch: '<S462>/Switch2' incorporates:
         *  Constant: '<S500>/Constant'
         *  Logic: '<S462>/Logical1'
         *  Logic: '<S462>/Logical12'
         *  Merge: '<S4>/Merge_16'
         *  RelationalOperator: '<S462>/Relational Operator2'
         *  RelationalOperator: '<S462>/Relational Operator3'
         */
        if (tmpRead && (((uint32)rtb_Switch1_m) != CeVTLR_e_Led_Blink))
        {
            /* Merge: '<S22>/Merge5' incorporates:
             *  Constant: '<S501>/Constant'
             */
            rtb_Switch7 = CeVTLR_e_Led_Off;
        }
        else
        {
            /* Merge: '<S22>/Merge5' incorporates:
             *  Merge: '<S4>/Merge_17'
             */
            rtb_Switch7 = rtb_Switch1_na;
        }

        /* End of Switch: '<S462>/Switch2' */

        /* Logic: '<S462>/Logical13' incorporates:
         *  Logic: '<S462>/Logical16'
         */
        tmp = !rtb_TmpSignalConversionAtVeCI_h;

        /* Switch: '<S462>/Switch3' incorporates:
         *  Constant: '<S503>/Constant'
         *  Logic: '<S462>/Logical13'
         *  Logic: '<S462>/Logical2'
         *  Merge: '<S4>/Merge_16'
         *  RelationalOperator: '<S462>/Relational Operator2'
         *  RelationalOperator: '<S462>/Relational Operator4'
         */
        if (tmp && (((uint32)rtb_Switch1_m) != CeVTLR_e_Led_Blink))
        {
            /* Merge: '<S22>/Merge2' incorporates:
             *  Constant: '<S485>/Constant'
             */
            rtb_Switch8 = CeVTLR_e_Led_Off;
        }
        else
        {
            /* Merge: '<S22>/Merge2' */
            rtb_Switch8 = rtb_Switch1_m;
        }

        /* End of Switch: '<S462>/Switch3' */

        /* Logic: '<S462>/Logical9' incorporates:
         *  Logic: '<S462>/Logical17'
         */
        rtb_TmpSignalConversionAtVeC_oh = !rtb_TmpSignalConversionAtVeC_fy;

        /* Switch: '<S462>/Switch4' incorporates:
         *  Constant: '<S484>/Constant'
         *  Logic: '<S462>/Logical4'
         *  Logic: '<S462>/Logical9'
         *  Merge: '<S4>/Merge_17'
         *  RelationalOperator: '<S462>/Relational Operator5'
         */
        if (rtb_TmpSignalConversionAtVeC_oh && (((uint32)rtb_Switch1_na) !=
                CeVTLR_e_Led_Blink))
        {
            /* Merge: '<S22>/Merge3' incorporates:
             *  Constant: '<S502>/Constant'
             */
            rtb_Switch1_hq = CeVTLR_e_Led_Off;
        }
        else
        {
            /* Merge: '<S22>/Merge3' */
            rtb_Switch1_hq = rtb_Switch1_na;
        }

        /* End of Switch: '<S462>/Switch4' */

        /* Switch: '<S462>/Switch5' incorporates:
         *  Constant: '<S486>/Constant'
         *  Logic: '<S462>/Logical7'
         *  Merge: '<S4>/Merge_16'
         *  RelationalOperator: '<S462>/Relational Operator12'
         *  RelationalOperator: '<S462>/Relational Operator2'
         */
        if (tmpRead_2 && (((uint32)rtb_Switch1_m) != CeVTLR_e_Led_Blink))
        {
            /* Merge: '<S22>/Merge7' incorporates:
             *  Constant: '<S489>/Constant'
             */
            Merge7 = CeVTLR_e_Init;
        }
        else
        {
            /* Merge: '<S22>/Merge7' incorporates:
             *  Merge: '<S4>/Merge_11'
             */
            Merge7 = rtb_Merge_11;
        }

        /* End of Switch: '<S462>/Switch5' */

        /* Switch: '<S462>/Switch6' incorporates:
         *  Constant: '<S488>/Constant'
         *  Logic: '<S462>/Logical5'
         *  Merge: '<S4>/Merge_16'
         *  RelationalOperator: '<S462>/Relational Operator2'
         *  RelationalOperator: '<S462>/Relational Operator6'
         */
        if (tmpRead && (((uint32)rtb_Switch1_m) != CeVTLR_e_Led_Blink))
        {
            /* Merge: '<S22>/Merge8' incorporates:
             *  Constant: '<S491>/Constant'
             */
            rtb_Merge_31 = CeVTLR_e_Init;
        }
        else
        {
            /* Merge: '<S22>/Merge8' incorporates:
             *  Merge: '<S4>/Merge_29'
             */
            rtb_Merge_31 = rtb_Merge_29;
        }

        /* End of Switch: '<S462>/Switch6' */

        /* Switch: '<S462>/Switch7' incorporates:
         *  Constant: '<S490>/Constant'
         *  Logic: '<S462>/Logical6'
         *  Merge: '<S4>/Merge_16'
         *  RelationalOperator: '<S462>/Relational Operator2'
         *  RelationalOperator: '<S462>/Relational Operator7'
         */
        if (tmp && (((uint32)rtb_Switch1_m) != CeVTLR_e_Led_Blink))
        {
            /* Merge: '<S22>/Merge9' incorporates:
             *  Constant: '<S487>/Constant'
             */
            rtb_Merge_11 = CeVTLR_e_Init;
        }

        /* End of Switch: '<S462>/Switch7' */

        /* Switch: '<S462>/Switch8' incorporates:
         *  Constant: '<S493>/Constant'
         *  Logic: '<S462>/Logical8'
         *  Merge: '<S4>/Merge_17'
         *  RelationalOperator: '<S462>/Relational Operator5'
         *  RelationalOperator: '<S462>/Relational Operator8'
         */
        if (rtb_TmpSignalConversionAtVeC_oh && (((uint32)rtb_Switch1_na) !=
                CeVTLR_e_Led_Blink))
        {
            /* Merge: '<S22>/Merge10' incorporates:
             *  Constant: '<S492>/Constant'
             */
            Merge10 = CeVTLR_e_Init;
        }
        else
        {
            /* Merge: '<S22>/Merge10' incorporates:
             *  Merge: '<S4>/Merge_29'
             */
            Merge10 = rtb_Merge_29;
        }

        /* End of Switch: '<S462>/Switch8' */

        /* SignalConversion generated from: '<S1>/DschrgRdy4ShtDwn_PP2' incorporates:
         *  Inport: '<S462>/DschrgRdy4ShtDwn_IDCM'
         *  Outport: '<Root>/VeVTLR_b_Rdy4ShtDwn_OnboardPP2'
         */
        (void)Rte_Write_VeVTLR_b_Rdy4ShtDwn_OnboardPP2_Value(Merge_13);

        /* SignalConversion generated from: '<S1>/PP_LEDC_Command' incorporates:
         *  Constant: '<S495>/Constant'
         *  Merge: '<S22>/Merge11'
         *  Outport: '<Root>/VeVTLR_e_PP_LEDC_Cmd'
         *  SignalConversion generated from: '<S462>/PP2_LEDC_Command_SameSrc'
         */
        (void)Rte_Write_VeVTLR_e_PP_LEDC_Cmd_Value(CeVTLR_e_Led_Off);

        /* SignalConversion generated from: '<S1>/PP_LEDC_Color_Command' incorporates:
         *  Constant: '<S496>/Constant'
         *  Merge: '<S22>/Merge12'
         *  Outport: '<Root>/VeVTLR_e_PP_LEDC_ColorCmd'
         *  SignalConversion generated from: '<S462>/PP2_LEDC_Color_Command_SameSrc'
         */
        (void)Rte_Write_VeVTLR_e_PP_LEDC_ColorCmd_Value(CeVTLR_e_Init);

        /* End of Outputs for SubSystem: '<S22>/PPWith_SameSource' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S22>/PPWith_DiffSource' incorporates:
         *  ActionPort: '<S461>/Action Port'
         */
        if (KeVTLR_b_PwrSrcSwapCAN)
        {
            /* Switch: '<S461>/Switch1' incorporates:
             *  Constant: '<S477>/Constant'
             *  Merge: '<S4>/Merge_20'
             *  RelationalOperator: '<S461>/Relational Operator2'
             *  Switch: '<S461>/Switch2'
             */
            if (((uint32)rtb_Merge_20) == CeVTLR_e_Active_Frunk)
            {
                /* Merge: '<S22>/Merge' incorporates:
                 *  Constant: '<S478>/Constant'
                 */
                Merge_h = CeVTLR_e_Active;
            }
            else
            {
                /* Merge: '<S22>/Merge' incorporates:
                 *  Constant: '<S479>/Constant'
                 */
                Merge_h = CeVTLR_e_Inactive;
            }

            /* End of Switch: '<S461>/Switch1' */

            /* Switch: '<S461>/Switch9' incorporates:
             *  Constant: '<S463>/Constant'
             *  Merge: '<S4>/Merge_15'
             *  RelationalOperator: '<S461>/Relational Operator1'
             *  Switch: '<S461>/Switch3'
             */
            if (((uint32)rtb_Merge_15) == CeVTLR_e_Active)
            {
                /* Merge: '<S22>/Merge1' incorporates:
                 *  Constant: '<S472>/Constant'
                 */
                rtb_Merge_20 = CeVTLR_e_Active_Frunk;
            }
            else
            {
                /* Merge: '<S22>/Merge1' incorporates:
                 *  Constant: '<S476>/Constant'
                 */
                rtb_Merge_20 = CeVTLR_e_Inactive_Frunk;
            }

            /* End of Switch: '<S461>/Switch9' */
        }
        else
        {
            /* Merge: '<S22>/Merge' incorporates:
             *  Merge: '<S4>/Merge_15'
             *  Switch: '<S461>/Switch2'
             */
            Merge_h = rtb_Merge_15;
        }

        /* Switch: '<S461>/Switch7' incorporates:
         *  Constant: '<S481>/Calib'
         *  Switch: '<S461>/Switch8'
         */
        if (KeVTLR_b_PwrSrcSwap)
        {
            /* Switch: '<S461>/Switch7' incorporates:
             *  Merge: '<S4>/Merge_17'
             */
            rtb_Switch7 = rtb_Switch1_na;

            /* Switch: '<S461>/Switch8' incorporates:
             *  Merge: '<S4>/Merge_21'
             */
            rtb_Switch8 = rtb_Switch1_f4;
        }
        else
        {
            /* Switch: '<S461>/Switch7' incorporates:
             *  Merge: '<S4>/Merge_22'
             */
            rtb_Switch7 = rtb_Switch1_hq;

            /* Switch: '<S461>/Switch8' incorporates:
             *  Merge: '<S4>/Merge_16'
             */
            rtb_Switch8 = rtb_Switch1_m;
        }

        /* End of Switch: '<S461>/Switch7' */

        /* RelationalOperator: '<S461>/Relational Operator8' incorporates:
         *  Constant: '<S470>/Constant'
         *  Switch: '<S461>/Switch7'
         */
        rtb_TmpSignalConversionAtVeCI_h = (((uint32)rtb_Switch7) !=
            CeVTLR_e_Led_Blink);

        /* Logic: '<S461>/Logical14' incorporates:
         *  Constant: '<S474>/Constant'
         *  Logic: '<S461>/Logical13'
         *  Logic: '<S461>/Logical16'
         *  RelationalOperator: '<S461>/Relational Operator10'
         *  Switch: '<S461>/Switch8'
         */
        rtb_OR1_kq = ((!rtb_OR1_kq) && (((uint32)rtb_Switch8) !=
                       CeVTLR_e_Led_Blink));

        /* Switch: '<S461>/Switch5' incorporates:
         *  Constant: '<S481>/Calib'
         *  Switch: '<S461>/Switch6'
         */
        if (KeVTLR_b_PwrSrcSwap)
        {
            /* Switch: '<S461>/Switch6' incorporates:
             *  Merge: '<S4>/Merge_22'
             */
            rtb_Switch1_na = rtb_Switch1_hq;
        }
        else
        {
            /* Switch: '<S461>/Switch5' incorporates:
             *  Merge: '<S4>/Merge_21'
             */
            rtb_Switch1_m = rtb_Switch1_f4;
        }

        /* End of Switch: '<S461>/Switch5' */

        /* RelationalOperator: '<S461>/Relational Operator7' incorporates:
         *  Constant: '<S468>/Constant'
         */
        rtb_TmpSignalConversionAtVeC_fy = (((uint32)rtb_Switch1_m) !=
            CeVTLR_e_Led_Blink);

        /* RelationalOperator: '<S461>/Relational Operator6' incorporates:
         *  Constant: '<S466>/Constant'
         */
        rtb_TmpSignalConversionAtVeC_ly = (((uint32)rtb_Switch1_na) !=
            CeVTLR_e_Led_Blink);

        /* Logic: '<S461>/Logical11' incorporates:
         *  Logic: '<S461>/Logical6'
         */
        tmpRead_2 = !rtb_TmpSignalConversionAtVeCI_n;

        /* Switch: '<S461>/Switch13' incorporates:
         *  Constant: '<S481>/Calib'
         *  Logic: '<S461>/Logical11'
         *  Logic: '<S461>/Logical3'
         *  Switch: '<S461>/Switch11'
         */
        if (tmpRead_2 && rtb_TmpSignalConversionAtVeC_ly)
        {
            /* Merge: '<S22>/Merge10' incorporates:
             *  Constant: '<S480>/Constant'
             */
            Merge10 = CeVTLR_e_Init;
        }
        else if (KeVTLR_b_PwrSrcSwap)
        {
            /* Switch: '<S461>/Switch11' incorporates:
             *  Merge: '<S22>/Merge10'
             *  Merge: '<S4>/Merge_31'
             */
            Merge10 = rtb_Merge_31;
        }
        else
        {
            /* Merge: '<S22>/Merge10' incorporates:
             *  Merge: '<S4>/Merge_29'
             *  Switch: '<S461>/Switch11'
             */
            Merge10 = rtb_Merge_29;
        }

        /* End of Switch: '<S461>/Switch13' */

        /* Logic: '<S461>/Logical1' incorporates:
         *  Logic: '<S461>/Logical8'
         */
        tmpRead = !rtb_TmpSignalConversionAtVeCI_o;

        /* Switch: '<S461>/Switch14' incorporates:
         *  Constant: '<S481>/Calib'
         *  Logic: '<S461>/Logical1'
         *  Logic: '<S461>/Logical2'
         *  Switch: '<S461>/Switch10'
         */
        if (tmpRead && rtb_TmpSignalConversionAtVeC_fy)
        {
            /* Merge: '<S22>/Merge7' incorporates:
             *  Constant: '<S464>/Constant'
             */
            Merge7 = CeVTLR_e_Init;
        }
        else if (KeVTLR_b_PwrSrcSwap)
        {
            /* Switch: '<S461>/Switch10' incorporates:
             *  Merge: '<S22>/Merge7'
             *  Merge: '<S4>/Merge_11'
             */
            Merge7 = rtb_Merge_11;
        }
        else
        {
            /* Merge: '<S22>/Merge7' incorporates:
             *  Merge: '<S4>/Merge_30'
             *  Switch: '<S461>/Switch10'
             */
            Merge7 = rtb_Merge_30;
        }

        /* End of Switch: '<S461>/Switch14' */

        /* Logic: '<S461>/Logical4' incorporates:
         *  Logic: '<S461>/Logical10'
         */
        tmp = !rtb_AND_amk;

        /* Switch: '<S461>/Switch15' incorporates:
         *  Constant: '<S481>/Calib'
         *  Logic: '<S461>/Logical4'
         *  Logic: '<S461>/Logical5'
         *  Switch: '<S461>/Switch12'
         */
        if (tmp && rtb_TmpSignalConversionAtVeCI_h)
        {
            /* Merge: '<S22>/Merge8' incorporates:
             *  Constant: '<S465>/Constant'
             */
            rtb_Merge_31 = CeVTLR_e_Init;
        }
        else
        {
            if (KeVTLR_b_PwrSrcSwap)
            {
                /* Switch: '<S461>/Switch12' incorporates:
                 *  Merge: '<S22>/Merge8'
                 *  Merge: '<S4>/Merge_29'
                 */
                rtb_Merge_31 = rtb_Merge_29;
            }
        }

        /* End of Switch: '<S461>/Switch15' */

        /* Switch: '<S461>/Switch16' incorporates:
         *  Logic: '<S461>/Logical7'
         */
        if (tmpRead_2 && rtb_TmpSignalConversionAtVeC_ly)
        {
            /* Merge: '<S22>/Merge3' incorporates:
             *  Constant: '<S467>/Constant'
             */
            rtb_Switch1_hq = CeVTLR_e_Led_Off;
        }
        else
        {
            /* Merge: '<S22>/Merge3' */
            rtb_Switch1_hq = rtb_Switch1_na;
        }

        /* End of Switch: '<S461>/Switch16' */

        /* Switch: '<S461>/Switch17' incorporates:
         *  Logic: '<S461>/Logical9'
         */
        if (tmpRead && rtb_TmpSignalConversionAtVeC_fy)
        {
            /* Merge: '<S22>/Merge4' incorporates:
             *  Constant: '<S469>/Constant'
             */
            rtb_Switch1_f4 = CeVTLR_e_Led_Off;
        }
        else
        {
            /* Merge: '<S22>/Merge4' */
            rtb_Switch1_f4 = rtb_Switch1_m;
        }

        /* End of Switch: '<S461>/Switch17' */

        /* Switch: '<S461>/Switch18' incorporates:
         *  Logic: '<S461>/Logical12'
         */
        if (tmp && rtb_TmpSignalConversionAtVeCI_h)
        {
            /* Merge: '<S22>/Merge5' incorporates:
             *  Constant: '<S471>/Constant'
             */
            rtb_Switch7 = CeVTLR_e_Led_Off;
        }

        /* End of Switch: '<S461>/Switch18' */

        /* Switch: '<S461>/Switch19' incorporates:
         *  Constant: '<S481>/Calib'
         *  Logic: '<S461>/Logical14'
         *  Switch: '<S461>/Switch20'
         *  Switch: '<S461>/Switch4'
         */
        if (rtb_OR1_kq)
        {
            /* Merge: '<S22>/Merge9' incorporates:
             *  Constant: '<S473>/Constant'
             */
            rtb_Merge_11 = CeVTLR_e_Init;

            /* Merge: '<S22>/Merge2' incorporates:
             *  Constant: '<S475>/Constant'
             */
            rtb_Switch8 = CeVTLR_e_Led_Off;
        }
        else
        {
            if (KeVTLR_b_PwrSrcSwap)
            {
                /* Switch: '<S461>/Switch4' incorporates:
                 *  Merge: '<S22>/Merge9'
                 *  Merge: '<S4>/Merge_30'
                 */
                rtb_Merge_11 = rtb_Merge_30;
            }
        }

        /* End of Switch: '<S461>/Switch19' */

        /* SignalConversion generated from: '<S1>/DschrgRdy4ShtDwn_PP2' incorporates:
         *  Inport: '<S461>/DschrgRdy4ShtDwn_PPIM'
         *  Outport: '<Root>/VeVTLR_b_Rdy4ShtDwn_OnboardPP2'
         */
        (void)Rte_Write_VeVTLR_b_Rdy4ShtDwn_OnboardPP2_Value
            (rtb_TmpSignalConversionAtVeC_nm);

        /* SignalConversion generated from: '<S1>/PP_LEDC_Command' incorporates:
         *  Inport: '<S461>/PP2_LEDC_Command'
         *  Merge: '<S22>/Merge11'
         *  Merge: '<S4>/Merge_32'
         *  Outport: '<Root>/VeVTLR_e_PP_LEDC_Cmd'
         */
        (void)Rte_Write_VeVTLR_e_PP_LEDC_Cmd_Value(rtb_Switch1_ny);

        /* SignalConversion generated from: '<S1>/PP_LEDC_Color_Command' incorporates:
         *  Inport: '<S461>/PP2_LEDC_Color_Command'
         *  Merge: '<S22>/Merge12'
         *  Merge: '<S4>/Merge_33'
         *  Outport: '<Root>/VeVTLR_e_PP_LEDC_ColorCmd'
         */
        (void)Rte_Write_VeVTLR_e_PP_LEDC_ColorCmd_Value(rtb_Merge_33);

        /* End of Outputs for SubSystem: '<S22>/PPWith_DiffSource' */
    }

    /* End of If: '<S22>/If1' */

    /* SignalConversion generated from: '<S4>/MaxACVoltAlwdIDCM' incorporates:
     *  Constant: '<S10>/Calib'
     */
    VTLR_ac_B.OutportBufferForMaxACVoltAlwdID = KeVTLR_U_MaxACVoltAlwdIDCM;

    /* SignalConversion generated from: '<S4>/MaxACCurrAlwdIDCM' incorporates:
     *  Constant: '<S9>/Calib'
     */
    VTLR_ac_B.OutportBufferForMaxACCurrAlwdID = KeVTLR_I_MaxACCurrAlwdIDCM;

    /* SignalConversion generated from: '<S4>/ACFreqCmd' incorporates:
     *  Constant: '<S11>/Calib'
     */
    VTLR_ac_B.OutportBufferForACFreqCmd = KeVTLR_b_ACFreqCmd;

    /* SignalConversion generated from: '<S4>/PP_LEDA_ColorCmd_FA' */
    VTLR_ac_B.OutportBufferForPP_LEDA_ColorCm = false;

    /* SignalConversion generated from: '<S4>/PP_LEDB_ColorCmd_FA' */
    VTLR_ac_B.OutportBufferForPP_LEDB_ColorCm = false;

    /* SignalConversion generated from: '<S4>/PP_LEDC_ColorCmd_FA' */
    VTLR_ac_B.OutportBufferForPP_LEDC_ColorCm = false;

    /* SignalConversion generated from: '<S4>/PP2_LEDA_ColorCmd_FA' */
    VTLR_ac_B.OutportBufferForPP2_LEDA_ColorC = false;

    /* SignalConversion generated from: '<S4>/PP2_LEDB_ColorCmd_FA' */
    VTLR_ac_B.OutportBufferForPP2_LEDB_ColorC = false;

    /* SignalConversion generated from: '<S4>/PP_LEDC_Cmd_FA' */
    VTLR_ac_B.OutportBufferForPP_LEDC_Cmd_FA = false;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeVTLR_b_ACFreqCmd' incorporates:
     *  SignalConversion generated from: '<S1>/ACFreqCmd'
     */
    (void)Rte_Write_VeVTLR_b_ACFreqCmd_Value(VTLR_ac_B.OutportBufferForACFreqCmd);

    /* Outport: '<Root>/VeVTLR_b_ACSwSts' incorporates:
     *  SignalConversion generated from: '<S1>/ACSwitchSts'
     */
    (void)Rte_Write_VeVTLR_b_ACSwSts_Value(rtb_TmpSignalConversionAtVeC_ai);

    /* Outport: '<Root>/VeVTLR_b_ACSw_Cmd' incorporates:
     *  SignalConversion generated from: '<S1>/AC_Sw_Cmd'
     */
    (void)Rte_Write_VeVTLR_b_ACSw_Cmd_Value(Merge_14);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VTLC'
     */
    /* Outport: '<Root>/VeVTLR_b_PP1_DayLightMd' incorporates:
     *  Inport: '<S4>/DayLightIDCM'
     *  SignalConversion generated from: '<S1>/Day_LightMode_IDCM'
     */
    (void)Rte_Write_VeVTLR_b_PP1_DayLightMd_Value(VeVTLR_b_InternalLightSts);

    /* Outport: '<Root>/VeVTLR_b_PP2_DayLightMd' incorporates:
     *  Inport: '<S4>/DayLightPPIM'
     *  SignalConversion generated from: '<S1>/Day_LightMode_PPIM'
     */
    (void)Rte_Write_VeVTLR_b_PP2_DayLightMd_Value(VeVTLR_b_InternalLightSts);

    /* Outport: '<Root>/VeVTLR_e_DschrgSysSts' incorporates:
     *  DataTypeConversion: '<S98>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/DisChrgSysSts'
     *  Switch: '<S105>/Switch1'
     */
    (void)Rte_Write_VeVTLR_e_DschrgSysSts_Value(rtb_Switch1_ns);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeVTLR_I_DschrgCrntLmt' incorporates:
     *  SignalConversion generated from: '<S1>/DschgCurrLim'
     */
    (void)Rte_Write_VeVTLR_I_DschrgCrntLmt_Value(Merge_2_j);

    /* Outport: '<Root>/VeVTLR_b_Rdy4ShtDwn' incorporates:
     *  SignalConversion generated from: '<S1>/DschrgRdy4ShtDwn_Offboard'
     */
    (void)Rte_Write_VeVTLR_b_Rdy4ShtDwn_Value(Merge_5);

    /* Outport: '<Root>/VeVTLR_b_Rdy4ShtDwn_OnboardPP1' incorporates:
     *  SignalConversion generated from: '<S1>/DschrgRdy4ShtDwn_PP1'
     */
    (void)Rte_Write_VeVTLR_b_Rdy4ShtDwn_OnboardPP1_Value(Merge_13);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VTLC'
     */
    /* Outport: '<Root>/VeVTLR_b_EnableDischarge' incorporates:
     *  Gain: '<S16>/Gain'
     *  SignalConversion generated from: '<S1>/Enable_Discharge'
     */
    (void)Rte_Write_VeVTLR_b_EnableDischarge_Value(rtb_Merge_7);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeVTLR_P_InstantPwr_IDCM' incorporates:
     *  SignalConversion generated from: '<S1>/InstantPower_IDCM'
     */
    (void)Rte_Write_VeVTLR_P_InstantPwr_IDCM_Value
        (rtb_TmpSignalConversionAtVeIDCR);

    /* Outport: '<Root>/VeVTLR_P_InstantPwr_PPIM' incorporates:
     *  SignalConversion generated from: '<S1>/InstantPower_PPIM'
     */
    (void)Rte_Write_VeVTLR_P_InstantPwr_PPIM_Value
        (rtb_TmpSignalConversionAtVeID_o);

    /* Outport: '<Root>/VeVTLR_I_MaxACCurrAlwdIDCM' incorporates:
     *  SignalConversion generated from: '<S1>/MaxACCurrAlwdIDCM'
     */
    (void)Rte_Write_VeVTLR_I_MaxACCurrAlwdIDCM_Value
        (VTLR_ac_B.OutportBufferForMaxACCurrAlwdID);

    /* Outport: '<Root>/VeVTLR_U_MaxACVoltAlwdIDCM' incorporates:
     *  SignalConversion generated from: '<S1>/MaxACVoltAlwdIDCM'
     */
    (void)Rte_Write_VeVTLR_U_MaxACVoltAlwdIDCM_Value
        (VTLR_ac_B.OutportBufferForMaxACVoltAlwdID);

    /* Outport: '<Root>/VeVTLR_I_MaxCurrAlwd_IDCM' incorporates:
     *  SignalConversion generated from: '<S1>/MaxCurrAlwd_IDCM'
     */
    (void)Rte_Write_VeVTLR_I_MaxCurrAlwd_IDCM_Value
        (rtb_TmpSignalConversionAtVeC_jh);

    /* Outport: '<Root>/VeVTLR_I_MaxCurrAlwd_PPIM' incorporates:
     *  SignalConversion generated from: '<S1>/MaxCurrAlwd_PPIM'
     */
    (void)Rte_Write_VeVTLR_I_MaxCurrAlwd_PPIM_Value
        (rtb_TmpSignalConversionAtVeC_kf);

    /* Outport: '<Root>/VeVTLR_e_PP_LEDA_ColorCmd' incorporates:
     *  Merge: '<S22>/Merge9'
     *  SignalConversion generated from: '<S1>/PP1_LEDA_Color_Command'
     */
    (void)Rte_Write_VeVTLR_e_PP_LEDA_ColorCmd_Value(rtb_Merge_11);

    /* Outport: '<Root>/VeVTLR_e_PP1_LEDA_Cmd' incorporates:
     *  Merge: '<S22>/Merge2'
     *  SignalConversion generated from: '<S1>/PP1_LEDA_Command'
     */
    (void)Rte_Write_VeVTLR_e_PP1_LEDA_Cmd_Value(rtb_Switch8);

    /* Outport: '<Root>/VeVTLR_e_PP_LEDB_ColorCmd' incorporates:
     *  Merge: '<S22>/Merge10'
     *  SignalConversion generated from: '<S1>/PP1_LEDB_Color_Command'
     */
    (void)Rte_Write_VeVTLR_e_PP_LEDB_ColorCmd_Value(Merge10);

    /* Outport: '<Root>/VeVTLR_e_PP1_LEDB_Cmd' incorporates:
     *  Merge: '<S22>/Merge3'
     *  SignalConversion generated from: '<S1>/PP1_LEDB_Command'
     */
    (void)Rte_Write_VeVTLR_e_PP1_LEDB_Cmd_Value(rtb_Switch1_hq);

    /* Outport: '<Root>/VeVTLR_b_PP2_LEDA_ColorCmd_FA' incorporates:
     *  SignalConversion generated from: '<S1>/PP2_LEDA_ColorCmd_FA'
     */
    (void)Rte_Write_VeVTLR_b_PP2_LEDA_ColorCmd_FA_Value
        (VTLR_ac_B.OutportBufferForPP2_LEDA_ColorC);

    /* Outport: '<Root>/VeVTLR_e_PP2_LEDA_ColorCmd' incorporates:
     *  Merge: '<S22>/Merge7'
     *  SignalConversion generated from: '<S1>/PP2_LEDA_Color_Command'
     */
    (void)Rte_Write_VeVTLR_e_PP2_LEDA_ColorCmd_Value(Merge7);

    /* Outport: '<Root>/VeVTLR_e_PP2_LEDA_Cmd' incorporates:
     *  Merge: '<S22>/Merge4'
     *  SignalConversion generated from: '<S1>/PP2_LEDA_Command'
     */
    (void)Rte_Write_VeVTLR_e_PP2_LEDA_Cmd_Value(rtb_Switch1_f4);

    /* Outport: '<Root>/VeVTLR_b_PP2_LEDB_ColorCmd_FA' incorporates:
     *  SignalConversion generated from: '<S1>/PP2_LEDB_ColorCmd_FA'
     */
    (void)Rte_Write_VeVTLR_b_PP2_LEDB_ColorCmd_FA_Value
        (VTLR_ac_B.OutportBufferForPP2_LEDB_ColorC);

    /* Outport: '<Root>/VeVTLR_e_PP2_LEDB_ColorCmd' incorporates:
     *  Merge: '<S22>/Merge8'
     *  SignalConversion generated from: '<S1>/PP2_LEDB_Color_Command'
     */
    (void)Rte_Write_VeVTLR_e_PP2_LEDB_ColorCmd_Value(rtb_Merge_31);

    /* Outport: '<Root>/VeVTLR_e_PP2_LEDB_Cmd' incorporates:
     *  Merge: '<S22>/Merge5'
     *  SignalConversion generated from: '<S1>/PP2_LEDB_Command'
     */
    (void)Rte_Write_VeVTLR_e_PP2_LEDB_Cmd_Value(rtb_Switch7);

    /* Outport: '<Root>/VeVTLR_b_PP_LEDA_ColorCmd_FA' incorporates:
     *  SignalConversion generated from: '<S1>/PP_LEDA_ColorCmd_FA'
     */
    (void)Rte_Write_VeVTLR_b_PP_LEDA_ColorCmd_FA_Value
        (VTLR_ac_B.OutportBufferForPP_LEDA_ColorCm);

    /* Outport: '<Root>/VeVTLR_b_PP_LEDB_ColorCmd_FA' incorporates:
     *  SignalConversion generated from: '<S1>/PP_LEDB_ColorCmd_FA'
     */
    (void)Rte_Write_VeVTLR_b_PP_LEDB_ColorCmd_FA_Value
        (VTLR_ac_B.OutportBufferForPP_LEDB_ColorCm);

    /* Outport: '<Root>/VeVTLR_b_PP_LEDC_Cmd_FA' incorporates:
     *  SignalConversion generated from: '<S1>/PP_LEDC_Cmd_FA'
     */
    (void)Rte_Write_VeVTLR_b_PP_LEDC_Cmd_FA_Value
        (VTLR_ac_B.OutportBufferForPP_LEDC_Cmd_FA);

    /* Outport: '<Root>/VeVTLR_b_PP_LEDC_ColorCmd_FA' incorporates:
     *  SignalConversion generated from: '<S1>/PP_LEDC_ColorCmd_FA'
     */
    (void)Rte_Write_VeVTLR_b_PP_LEDC_ColorCmd_FA_Value
        (VTLR_ac_B.OutportBufferForPP_LEDC_ColorCm);

    /* Outport: '<Root>/VeVTLR_b_DschrgS2Cmd' incorporates:
     *  SignalConversion generated from: '<S1>/S2_Cmd'
     */
    (void)Rte_Write_VeVTLR_b_DschrgS2Cmd_Value(rtb_TmpSignalConversionAtVeHP_b);

    /* Outport: '<Root>/VeVTLR_t_DschrgMins' incorporates:
     *  SignalConversion generated from: '<S1>/V2L_Discharge_Minutes'
     */
    (void)Rte_Write_VeVTLR_t_DschrgMins_Value(rtb_Gain);

    /* Outport: '<Root>/VeVTLR_e_FrunkSts' incorporates:
     *  Merge: '<S22>/Merge1'
     *  SignalConversion generated from: '<S1>/V2L_Frunk_Status'
     */
    (void)Rte_Write_VeVTLR_e_FrunkSts_Value(rtb_Merge_20);

    /* Outport: '<Root>/VeVTLR_Pct_V2L_OB_RsrvBatt' incorporates:
     *  SignalConversion generated from: '<S1>/V2L_OB_BattSOC'
     */
    (void)Rte_Write_VeVTLR_Pct_V2L_OB_RsrvBatt_Value
        (rtb_TmpSignalConversionAtVeC_go);

    /* Outport: '<Root>/VeVTLR_b_OnboardPP1_Dtctd' incorporates:
     *  SignalConversion generated from: '<S1>/V2L_OB_IDCM_Detected'
     */
    (void)Rte_Write_VeVTLR_b_OnboardPP1_Dtctd_Value
        (rtb_TmpSignalConversionAtVeC_jx);

    /* Outport: '<Root>/VeVTLR_b_OnboardPP2_Dtctd' incorporates:
     *  SignalConversion generated from: '<S1>/V2L_OB_PPIM_Detected'
     */
    (void)Rte_Write_VeVTLR_b_OnboardPP2_Dtctd_Value
        (rtb_TmpSignalConversionAtVeC_lz);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VTLC'
     */
    /* Outport: '<Root>/VeVTLR_b_V2LPlugIn_Auth' incorporates:
     *  Gain: '<S37>/Gain'
     *  Logic: '<S23>/Logical4'
     *  SignalConversion generated from: '<S1>/V2L_PlugIn_Auth'
     */
    (void)Rte_Write_VeVTLR_b_V2LPlugIn_Auth_Value(rtb_DataStoreRead2 ||
        (VeVTLR_b_SecureConnV2L));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeVTLR_e_TrunkSts' incorporates:
     *  Merge: '<S22>/Merge'
     *  SignalConversion generated from: '<S1>/V2L_Trunk_Status'
     */
    (void)Rte_Write_VeVTLR_e_TrunkSts_Value(Merge_h);

    /* Outport: '<Root>/VeVTLR_b_DschrgUnlckInlet' incorporates:
     *  SignalConversion generated from: '<S1>/VTLR_UnlockInlet'
     */
    (void)Rte_Write_VeVTLR_b_DschrgUnlckInlet_Value(Merge_6_o);

    /* End of Outputs for SubSystem: '<Root>/VTLR_MedTED' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_VTLR_1

FUNC(void, VTLR_CODE) VTLR_PwrOff(void)
{

#if Rte_SysCon_Variant_VTLR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
    /* Outputs for Function Call SubSystem: '<Root>/VTLR_PwrOff' */
    /* Outport: '<Root>/EeVTLR_b_V2L_PlugInAuth_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeVTLR_b_V2L_PlugInAuth'
     */
    (void)Rte_Write_EeVTLR_b_V2L_PlugInAuth_EeVTLR_b_V2L_PlugInAuth
        (EeVTLR_b_V2L_PlugInAuth);

    /* Outport: '<Root>/EeVTLR_Cnt_AuthTmr_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeVTLR_Cnt_AuthTmr'
     */
    (void)Rte_Write_EeVTLR_Cnt_AuthTmr_EeVTLR_Cnt_AuthTmr(EeVTLR_Cnt_AuthTmr);

    /* Outport: '<Root>/NeVTLR_e_DoorLastSts_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeVTLR_e_DoorLastSts'
     */
    (void)Rte_Write_NeVTLR_e_DoorLastSts_NeVTLR_e_DoorLastSts
        (VTLR_ac_DW.NeVTLR_e_DoorLastSts);

    /* Outport: '<Root>/EeVTLR_b_V2L_OB_IDCM_Auth_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeVTLR_b_V2L_PlugInAuth1'
     */
    (void)Rte_Write_EeVTLR_b_V2L_OB_IDCM_Auth_EeVTLR_b_V2L_OB_IDCM_Auth
        (EeVTLR_b_V2L_OB_IDCM_Auth);

    /* Outport: '<Root>/EeVTLR_b_V2L_OB_PPIM_Auth_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeVTLR_b_V2L_PlugInAuth2'
     */
    (void)Rte_Write_EeVTLR_b_V2L_OB_PPIM_Auth_EeVTLR_b_V2L_OB_PPIM_Auth
        (EeVTLR_b_V2L_OB_PPIM_Auth);

    /* End of Outputs for SubSystem: '<Root>/VTLR_PwrOff' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
#endif

}

#endif

/* Output function */
FUNC(void, VTLR_CODE) VTLR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/VTLR_PwrOn'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Variant Subsystem' */
#if Rte_SysCon_Variant_VTLR_1

    /* Outputs for Atomic SubSystem: '<S562>/VTLO_FUNC' */
    /* Outputs for Atomic SubSystem: '<S563>/DSM_Init' */
    /* DataStoreWrite: '<S565>/EeVTLR_b_V2L_PlugInAuth2' incorporates:
     *  Inport: '<Root>/EeVTLR_b_V2L_OB_PPIM_Auth_PM_In'
     */
    (void)Rte_Read_EeVTLR_b_V2L_OB_PPIM_Auth_Rx_EeVTLR_b_V2L_OB_PPIM_Auth
        ((&(EeVTLR_b_V2L_OB_PPIM_Auth)));

    /* DataStoreWrite: '<S565>/EeVTLR_b_V2L_PlugInAuth1' incorporates:
     *  Inport: '<Root>/EeVTLR_b_V2L_OB_IDCM_Auth_PM_In'
     */
    (void)Rte_Read_EeVTLR_b_V2L_OB_IDCM_Auth_Rx_EeVTLR_b_V2L_OB_IDCM_Auth
        ((&(EeVTLR_b_V2L_OB_IDCM_Auth)));

    /* DataStoreWrite: '<S565>/NeVTLR_e_DoorLastSts' incorporates:
     *  Inport: '<Root>/NeVTLR_e_DoorLastSts_PM_In'
     */
    (void)Rte_Read_NeVTLR_e_DoorLastSts_Rx_NeVTLR_e_DoorLastSts
        (&VTLR_ac_DW.NeVTLR_e_DoorLastSts);

    /* DataStoreWrite: '<S565>/EeVTLR_Cnt_AuthTmr' incorporates:
     *  Inport: '<Root>/EeVTLR_Cnt_AuthTmr_PM_In'
     */
    (void)Rte_Read_EeVTLR_Cnt_AuthTmr_Rx_EeVTLR_Cnt_AuthTmr
        ((&(EeVTLR_Cnt_AuthTmr)));

    /* DataStoreWrite: '<S565>/EeVTLR_b_V2L_PlugInAuth' incorporates:
     *  Inport: '<Root>/EeVTLR_b_V2L_PlugInAuth_PM_In'
     */
    (void)Rte_Read_EeVTLR_b_V2L_PlugInAuth_Rx_EeVTLR_b_V2L_PlugInAuth
        ((&(EeVTLR_b_V2L_PlugInAuth)));

    /* End of Outputs for SubSystem: '<S563>/DSM_Init' */

    /* Outport: '<Root>/VeVTLR_b_V2LPlugIn_Auth' incorporates:
     *  Constant: '<S563>/Constant Value'
     */
    (void)Rte_Write_VeVTLR_b_V2LPlugIn_Auth_Value(false);

    /* Outport: '<Root>/VeVTLR_I_DschrgCrntLmt' incorporates:
     *  Constant: '<S563>/Constant Value2'
     */
    (void)Rte_Write_VeVTLR_I_DschrgCrntLmt_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_e_DschrgOBCMdRq' incorporates:
     *  Constant: '<S580>/Constant'
     */
    (void)Rte_Write_VeVTLR_e_DschrgOBCMdRq_Value(CeOBCR_e_Idle_OBCMdRq);

    /* Outport: '<Root>/VeVTLR_b_DschrgS2Cmd' incorporates:
     *  Constant: '<S563>/Constant Value1'
     */
    (void)Rte_Write_VeVTLR_b_DschrgS2Cmd_Value(false);

    /* Outport: '<Root>/VeVTLR_e_DschrgSysSts' incorporates:
     *  Constant: '<S581>/Constant'
     */
    (void)Rte_Write_VeVTLR_e_DschrgSysSts_Value(CeVTLR_e_DschrgInactv);

    /* Outport: '<Root>/VeVTLR_b_Rdy4ShtDwn' incorporates:
     *  Constant: '<S563>/Constant Value3'
     */
    (void)Rte_Write_VeVTLR_b_Rdy4ShtDwn_Value(false);

    /* Outport: '<Root>/VeVTLR_b_DschrgUnlckInlet' incorporates:
     *  Constant: '<S563>/Constant Value4'
     */
    (void)Rte_Write_VeVTLR_b_DschrgUnlckInlet_Value(false);

    /* Outport: '<Root>/VeVTLR_b_EnableDischarge' incorporates:
     *  Constant: '<S563>/Constant Value5'
     */
    (void)Rte_Write_VeVTLR_b_EnableDischarge_Value(false);

    /* Outport: '<Root>/VeVTLR_e_DschrgOBCMdRq_Onboard' incorporates:
     *  Constant: '<S588>/Constant'
     *  DataTypeConversion: '<S574>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_DschrgOBCMdRq_Onboard_Value(CeOBCR_e_Idle_OBCMdRq);

    /* Outport: '<Root>/VeVTLR_b_Rdy4ShtDwn_OnboardPP1' incorporates:
     *  Constant: '<S563>/Constant Value7'
     *  Gain: '<S620>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_Rdy4ShtDwn_OnboardPP1_Value(false);

    /* Outport: '<Root>/VeVTLR_b_Rdy4ShtDwn_OnboardPP2' incorporates:
     *  Constant: '<S563>/Constant Value9'
     *  Gain: '<S607>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_Rdy4ShtDwn_OnboardPP2_Value(false);

    /* Outport: '<Root>/VeVTLR_b_ACSw_Cmd' incorporates:
     *  Constant: '<S563>/Constant Value8'
     *  Gain: '<S621>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_ACSw_Cmd_Value(false);

    /* Outport: '<Root>/VeVTLR_e_TrunkSts' incorporates:
     *  Constant: '<S590>/Constant'
     *  DataTypeConversion: '<S567>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_TrunkSts_Value(CeVTLR_e_Inactive);

    /* Outport: '<Root>/VeVTLR_e_PP1_LEDA_Cmd' incorporates:
     *  Constant: '<S591>/Constant'
     *  DataTypeConversion: '<S568>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP1_LEDA_Cmd_Value(CeVTLR_e_Led_Off);

    /* Outport: '<Root>/VeVTLR_e_PP1_LEDB_Cmd' incorporates:
     *  Constant: '<S592>/Constant'
     *  DataTypeConversion: '<S569>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP1_LEDB_Cmd_Value(CeVTLR_e_Led_Off);

    /* Outport: '<Root>/VeVTLR_e_PPIM_MdRq' incorporates:
     *  Constant: '<S593>/Constant'
     *  DataTypeConversion: '<S570>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PPIM_MdRq_Value(CeVTLR_e_Idle);

    /* Outport: '<Root>/VeVTLR_e_FrunkSts' incorporates:
     *  Constant: '<S594>/Constant'
     *  DataTypeConversion: '<S571>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_FrunkSts_Value(CeVTLR_e_Inactive_Frunk);

    /* Outport: '<Root>/VeVTLR_e_PP2_LEDA_Cmd' incorporates:
     *  Constant: '<S595>/Constant'
     *  DataTypeConversion: '<S572>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP2_LEDA_Cmd_Value(CeVTLR_e_Led_Off);

    /* Outport: '<Root>/VeVTLR_e_PP2_LEDB_Cmd' incorporates:
     *  Constant: '<S589>/Constant'
     *  DataTypeConversion: '<S566>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP2_LEDB_Cmd_Value(CeVTLR_e_Led_Off);

    /* Outport: '<Root>/VeVTLR_P_InstantPwr_IDCM' incorporates:
     *  Constant: '<S563>/Constant Value10'
     *  Gain: '<S597>/Gain'
     */
    (void)Rte_Write_VeVTLR_P_InstantPwr_IDCM_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_P_InstantPwr_PPIM' incorporates:
     *  Constant: '<S563>/Constant Value11'
     *  Gain: '<S598>/Gain'
     */
    (void)Rte_Write_VeVTLR_P_InstantPwr_PPIM_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_I_MaxCurrAlwd_IDCM' incorporates:
     *  Constant: '<S563>/Constant Value12'
     *  Gain: '<S599>/Gain'
     */
    (void)Rte_Write_VeVTLR_I_MaxCurrAlwd_IDCM_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_I_MaxCurrAlwd_PPIM' incorporates:
     *  Constant: '<S563>/Constant Value13'
     *  Gain: '<S600>/Gain'
     */
    (void)Rte_Write_VeVTLR_I_MaxCurrAlwd_PPIM_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_b_PP1_DayLightMd' incorporates:
     *  Constant: '<S563>/Constant Value14'
     *  Gain: '<S601>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_PP1_DayLightMd_Value(false);

    /* Outport: '<Root>/VeVTLR_b_PP2_DayLightMd' incorporates:
     *  Constant: '<S563>/Constant Value15'
     *  Gain: '<S602>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_PP2_DayLightMd_Value(false);

    /* Outport: '<Root>/VeVTLR_t_DschrgDays' incorporates:
     *  Constant: '<S563>/Constant Value16'
     *  Gain: '<S603>/Gain'
     */
    (void)Rte_Write_VeVTLR_t_DschrgDays_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_t_DschrgHrs' incorporates:
     *  Constant: '<S563>/Constant Value17'
     *  Gain: '<S604>/Gain'
     */
    (void)Rte_Write_VeVTLR_t_DschrgHrs_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_t_DschrgMins' incorporates:
     *  Constant: '<S563>/Constant Value18'
     *  Gain: '<S605>/Gain'
     */
    (void)Rte_Write_VeVTLR_t_DschrgMins_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_b_ACSwSts' incorporates:
     *  Constant: '<S563>/Constant Value19'
     *  Gain: '<S596>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_ACSwSts_Value(false);

    /* Outport: '<Root>/VeVTLR_b_OnboardPP1_Dtctd' incorporates:
     *  Constant: '<S563>/Constant Value20'
     *  Gain: '<S616>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_OnboardPP1_Dtctd_Value(false);

    /* Outport: '<Root>/VeVTLR_b_OnboardPP2_Dtctd' incorporates:
     *  Constant: '<S563>/Constant Value21'
     *  Gain: '<S617>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_OnboardPP2_Dtctd_Value(false);

    /* Outport: '<Root>/VeVTLR_b_Trunk_Auth' incorporates:
     *  Constant: '<S563>/Constant Value22'
     *  Gain: '<S618>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_Trunk_Auth_Value(false);

    /* Outport: '<Root>/VeVTLR_b_Frunk_Auth' incorporates:
     *  Constant: '<S563>/Constant Value23'
     *  Gain: '<S622>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_Frunk_Auth_Value(false);

    /* Outport: '<Root>/VeVTLR_Pct_V2L_OB_RsrvBatt' incorporates:
     *  Constant: '<S563>/Constant Value24'
     *  Gain: '<S606>/Gain'
     */
    (void)Rte_Write_VeVTLR_Pct_V2L_OB_RsrvBatt_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_e_PP_LEDA_ColorCmd' incorporates:
     *  Constant: '<S582>/Constant'
     *  DataTypeConversion: '<S573>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP_LEDA_ColorCmd_Value(CeVTLR_e_Init);

    /* Outport: '<Root>/VeVTLR_e_PP_LEDB_ColorCmd' incorporates:
     *  Constant: '<S583>/Constant'
     *  DataTypeConversion: '<S575>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP_LEDB_ColorCmd_Value(CeVTLR_e_Init);

    /* Outport: '<Root>/VeVTLR_e_PP2_LEDA_ColorCmd' incorporates:
     *  Constant: '<S584>/Constant'
     *  DataTypeConversion: '<S576>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP2_LEDA_ColorCmd_Value(CeVTLR_e_Init);

    /* Outport: '<Root>/VeVTLR_e_PP2_LEDB_ColorCmd' incorporates:
     *  Constant: '<S585>/Constant'
     *  DataTypeConversion: '<S577>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP2_LEDB_ColorCmd_Value(CeVTLR_e_Init);

    /* Outport: '<Root>/VeVTLR_e_PP_LEDC_Cmd' incorporates:
     *  Constant: '<S586>/Constant'
     *  DataTypeConversion: '<S578>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP_LEDC_Cmd_Value(CeVTLR_e_Led_Off);

    /* Outport: '<Root>/VeVTLR_e_PP_LEDC_ColorCmd' incorporates:
     *  Constant: '<S587>/Constant'
     *  DataTypeConversion: '<S579>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP_LEDC_ColorCmd_Value(CeVTLR_e_Init);

    /* Outport: '<Root>/VeVTLR_U_MaxACVoltAlwdIDCM' incorporates:
     *  Constant: '<S563>/Constant Value27'
     *  Gain: '<S608>/Gain'
     */
    (void)Rte_Write_VeVTLR_U_MaxACVoltAlwdIDCM_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_I_MaxACCurrAlwdIDCM' incorporates:
     *  Constant: '<S563>/Constant Value25'
     *  Gain: '<S609>/Gain'
     */
    (void)Rte_Write_VeVTLR_I_MaxACCurrAlwdIDCM_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_b_ACFreqCmd' incorporates:
     *  Constant: '<S563>/Constant Value6'
     *  Gain: '<S619>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_ACFreqCmd_Value(false);

    /* Outport: '<Root>/VeVTLR_b_PP_LEDA_ColorCmd_FA' incorporates:
     *  Constant: '<S563>/Constant Value26'
     *  Gain: '<S610>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_PP_LEDA_ColorCmd_FA_Value(false);

    /* Outport: '<Root>/VeVTLR_b_PP_LEDB_ColorCmd_FA' incorporates:
     *  Constant: '<S563>/Constant Value28'
     *  Gain: '<S611>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_PP_LEDB_ColorCmd_FA_Value(false);

    /* Outport: '<Root>/VeVTLR_b_PP_LEDC_Cmd_FA' incorporates:
     *  Constant: '<S563>/Constant Value29'
     *  Gain: '<S612>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_PP_LEDC_Cmd_FA_Value(false);

    /* Outport: '<Root>/VeVTLR_b_PP_LEDC_ColorCmd_FA' incorporates:
     *  Constant: '<S563>/Constant Value30'
     *  Gain: '<S613>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_PP_LEDC_ColorCmd_FA_Value(false);

    /* Outport: '<Root>/VeVTLR_b_PP2_LEDA_ColorCmd_FA' incorporates:
     *  Constant: '<S563>/Constant Value31'
     *  Gain: '<S614>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_PP2_LEDA_ColorCmd_FA_Value(false);

    /* Outport: '<Root>/VeVTLR_b_PP2_LEDB_ColorCmd_FA' incorporates:
     *  Constant: '<S563>/Constant Value32'
     *  Gain: '<S615>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_PP2_LEDB_ColorCmd_FA_Value(false);

    /* End of Outputs for SubSystem: '<S562>/VTLO_FUNC' */
#else

    /* Outputs for Atomic SubSystem: '<S562>/VTLO_NF' */
    /* Outport: '<Root>/VeVTLR_b_V2LPlugIn_Auth' incorporates:
     *  Constant: '<S564>/Constant Value'
     *  Gain: '<S656>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_V2LPlugIn_Auth_Value(false);

    /* Outport: '<Root>/VeVTLR_I_DschrgCrntLmt' incorporates:
     *  Constant: '<S564>/Constant Value2'
     *  Gain: '<S678>/Gain'
     */
    (void)Rte_Write_VeVTLR_I_DschrgCrntLmt_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_e_DschrgOBCMdRq' incorporates:
     *  Constant: '<S639>/Constant'
     *  DataTypeConversion: '<S623>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_DschrgOBCMdRq_Value(CeOBCR_e_Idle_OBCMdRq);

    /* Outport: '<Root>/VeVTLR_b_DschrgS2Cmd' incorporates:
     *  Constant: '<S564>/Constant Value1'
     *  Gain: '<S667>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_DschrgS2Cmd_Value(false);

    /* Outport: '<Root>/VeVTLR_e_DschrgSysSts' incorporates:
     *  Constant: '<S640>/Constant'
     *  DataTypeConversion: '<S624>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_DschrgSysSts_Value(CeVTLR_e_DschrgInactv);

    /* Outport: '<Root>/VeVTLR_b_Rdy4ShtDwn' incorporates:
     *  Constant: '<S564>/Constant Value3'
     *  Gain: '<S682>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_Rdy4ShtDwn_Value(false);

    /* Outport: '<Root>/VeVTLR_b_DschrgUnlckInlet' incorporates:
     *  Constant: '<S564>/Constant Value4'
     *  Gain: '<S683>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_DschrgUnlckInlet_Value(false);

    /* Outport: '<Root>/VeVTLR_b_EnableDischarge' incorporates:
     *  Constant: '<S564>/Constant Value5'
     *  Gain: '<S655>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_EnableDischarge_Value(false);

    /* Outport: '<Root>/VeVTLR_e_DschrgOBCMdRq_Onboard' incorporates:
     *  Constant: '<S647>/Constant'
     *  DataTypeConversion: '<S631>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_DschrgOBCMdRq_Onboard_Value(CeOBCR_e_Idle_OBCMdRq);

    /* Outport: '<Root>/VeVTLR_b_Rdy4ShtDwn_OnboardPP1' incorporates:
     *  Constant: '<S564>/Constant Value7'
     *  Gain: '<S685>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_Rdy4ShtDwn_OnboardPP1_Value(false);

    /* Outport: '<Root>/VeVTLR_b_Rdy4ShtDwn_OnboardPP2' incorporates:
     *  Constant: '<S564>/Constant Value23'
     *  Gain: '<S671>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_Rdy4ShtDwn_OnboardPP2_Value(false);

    /* Outport: '<Root>/VeVTLR_b_ACSw_Cmd' incorporates:
     *  Constant: '<S564>/Constant Value8'
     *  Gain: '<S686>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_ACSw_Cmd_Value(false);

    /* Outport: '<Root>/VeVTLR_e_TrunkSts' incorporates:
     *  Constant: '<S649>/Constant'
     *  DataTypeConversion: '<S633>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_TrunkSts_Value(CeVTLR_e_Inactive);

    /* Outport: '<Root>/VeVTLR_e_PP1_LEDA_Cmd' incorporates:
     *  Constant: '<S650>/Constant'
     *  DataTypeConversion: '<S634>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP1_LEDA_Cmd_Value(CeVTLR_e_Led_Off);

    /* Outport: '<Root>/VeVTLR_e_PP1_LEDB_Cmd' incorporates:
     *  Constant: '<S648>/Constant'
     *  DataTypeConversion: '<S635>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP1_LEDB_Cmd_Value(CeVTLR_e_Led_Off);

    /* Outport: '<Root>/VeVTLR_e_PPIM_MdRq' incorporates:
     *  Constant: '<S652>/Constant'
     *  DataTypeConversion: '<S636>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PPIM_MdRq_Value(CeVTLR_e_Idle);

    /* Outport: '<Root>/VeVTLR_e_FrunkSts' incorporates:
     *  Constant: '<S653>/Constant'
     *  DataTypeConversion: '<S637>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_FrunkSts_Value(CeVTLR_e_Inactive_Frunk);

    /* Outport: '<Root>/VeVTLR_e_PP2_LEDA_Cmd' incorporates:
     *  Constant: '<S651>/Constant'
     *  DataTypeConversion: '<S638>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP2_LEDA_Cmd_Value(CeVTLR_e_Led_Off);

    /* Outport: '<Root>/VeVTLR_e_PP2_LEDB_Cmd' incorporates:
     *  Constant: '<S654>/Constant'
     *  DataTypeConversion: '<S625>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP2_LEDB_Cmd_Value(CeVTLR_e_Led_Off);

    /* Outport: '<Root>/VeVTLR_P_InstantPwr_IDCM' incorporates:
     *  Constant: '<S564>/Constant Value10'
     *  Gain: '<S657>/Gain'
     */
    (void)Rte_Write_VeVTLR_P_InstantPwr_IDCM_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_P_InstantPwr_PPIM' incorporates:
     *  Constant: '<S564>/Constant Value11'
     *  Gain: '<S658>/Gain'
     */
    (void)Rte_Write_VeVTLR_P_InstantPwr_PPIM_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_I_MaxCurrAlwd_IDCM' incorporates:
     *  Constant: '<S564>/Constant Value12'
     *  Gain: '<S659>/Gain'
     */
    (void)Rte_Write_VeVTLR_I_MaxCurrAlwd_IDCM_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_I_MaxCurrAlwd_PPIM' incorporates:
     *  Constant: '<S564>/Constant Value13'
     *  Gain: '<S660>/Gain'
     */
    (void)Rte_Write_VeVTLR_I_MaxCurrAlwd_PPIM_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_b_PP1_DayLightMd' incorporates:
     *  Constant: '<S564>/Constant Value14'
     *  Gain: '<S661>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_PP1_DayLightMd_Value(false);

    /* Outport: '<Root>/VeVTLR_b_PP2_DayLightMd' incorporates:
     *  Constant: '<S564>/Constant Value15'
     *  Gain: '<S662>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_PP2_DayLightMd_Value(false);

    /* Outport: '<Root>/VeVTLR_t_DschrgDays' incorporates:
     *  Constant: '<S564>/Constant Value16'
     *  Gain: '<S663>/Gain'
     */
    (void)Rte_Write_VeVTLR_t_DschrgDays_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_t_DschrgHrs' incorporates:
     *  Constant: '<S564>/Constant Value17'
     *  Gain: '<S664>/Gain'
     */
    (void)Rte_Write_VeVTLR_t_DschrgHrs_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_t_DschrgMins' incorporates:
     *  Constant: '<S564>/Constant Value18'
     *  Gain: '<S665>/Gain'
     */
    (void)Rte_Write_VeVTLR_t_DschrgMins_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_b_ACSwSts' incorporates:
     *  Constant: '<S564>/Constant Value19'
     *  Gain: '<S666>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_ACSwSts_Value(false);

    /* Outport: '<Root>/VeVTLR_b_OnboardPP1_Dtctd' incorporates:
     *  Constant: '<S564>/Constant Value9'
     *  Gain: '<S687>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_OnboardPP1_Dtctd_Value(false);

    /* Outport: '<Root>/VeVTLR_b_OnboardPP2_Dtctd' incorporates:
     *  Constant: '<S564>/Constant Value20'
     *  Gain: '<S668>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_OnboardPP2_Dtctd_Value(false);

    /* Outport: '<Root>/VeVTLR_b_Trunk_Auth' incorporates:
     *  Constant: '<S564>/Constant Value22'
     *  Gain: '<S670>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_Trunk_Auth_Value(false);

    /* Outport: '<Root>/VeVTLR_b_Frunk_Auth' incorporates:
     *  Constant: '<S564>/Constant Value21'
     *  Gain: '<S669>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_Frunk_Auth_Value(false);

    /* Outport: '<Root>/VeVTLR_Pct_V2L_OB_RsrvBatt' incorporates:
     *  Constant: '<S564>/Constant Value24'
     *  Gain: '<S672>/Gain'
     */
    (void)Rte_Write_VeVTLR_Pct_V2L_OB_RsrvBatt_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_e_PP_LEDA_ColorCmd' incorporates:
     *  Constant: '<S641>/Constant'
     *  DataTypeConversion: '<S632>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP_LEDA_ColorCmd_Value(CeVTLR_e_Init);

    /* Outport: '<Root>/VeVTLR_e_PP_LEDB_ColorCmd' incorporates:
     *  Constant: '<S642>/Constant'
     *  DataTypeConversion: '<S626>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP_LEDB_ColorCmd_Value(CeVTLR_e_Init);

    /* Outport: '<Root>/VeVTLR_e_PP2_LEDA_ColorCmd' incorporates:
     *  Constant: '<S643>/Constant'
     *  DataTypeConversion: '<S627>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP2_LEDA_ColorCmd_Value(CeVTLR_e_Init);

    /* Outport: '<Root>/VeVTLR_e_PP2_LEDB_ColorCmd' incorporates:
     *  Constant: '<S644>/Constant'
     *  DataTypeConversion: '<S628>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP2_LEDB_ColorCmd_Value(CeVTLR_e_Init);

    /* Outport: '<Root>/VeVTLR_e_PP_LEDC_Cmd' incorporates:
     *  Constant: '<S645>/Constant'
     *  DataTypeConversion: '<S629>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP_LEDC_Cmd_Value(CeVTLR_e_Led_Off);

    /* Outport: '<Root>/VeVTLR_e_PP_LEDC_ColorCmd' incorporates:
     *  Constant: '<S646>/Constant'
     *  DataTypeConversion: '<S630>/DataTypeConversion'
     */
    (void)Rte_Write_VeVTLR_e_PP_LEDC_ColorCmd_Value(CeVTLR_e_Init);

    /* Outport: '<Root>/VeVTLR_U_MaxACVoltAlwdIDCM' incorporates:
     *  Constant: '<S564>/Constant Value27'
     *  Gain: '<S684>/Gain'
     */
    (void)Rte_Write_VeVTLR_U_MaxACVoltAlwdIDCM_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_I_MaxACCurrAlwdIDCM' incorporates:
     *  Constant: '<S564>/Constant Value25'
     *  Gain: '<S673>/Gain'
     */
    (void)Rte_Write_VeVTLR_I_MaxACCurrAlwdIDCM_Value(0.0F);

    /* Outport: '<Root>/VeVTLR_b_ACFreqCmd' incorporates:
     *  Constant: '<S564>/Constant Value6'
     *  Gain: '<S674>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_ACFreqCmd_Value(false);

    /* Outport: '<Root>/VeVTLR_b_PP_LEDA_ColorCmd_FA' incorporates:
     *  Constant: '<S564>/Constant Value26'
     *  Gain: '<S675>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_PP_LEDA_ColorCmd_FA_Value(false);

    /* Outport: '<Root>/VeVTLR_b_PP_LEDB_ColorCmd_FA' incorporates:
     *  Constant: '<S564>/Constant Value28'
     *  Gain: '<S676>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_PP_LEDB_ColorCmd_FA_Value(false);

    /* Outport: '<Root>/VeVTLR_b_PP_LEDC_Cmd_FA' incorporates:
     *  Constant: '<S564>/Constant Value29'
     *  Gain: '<S677>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_PP_LEDC_Cmd_FA_Value(false);

    /* Outport: '<Root>/VeVTLR_b_PP_LEDC_ColorCmd_FA' incorporates:
     *  Constant: '<S564>/Constant Value30'
     *  Gain: '<S679>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_PP_LEDC_ColorCmd_FA_Value(false);

    /* Outport: '<Root>/VeVTLR_b_PP2_LEDA_ColorCmd_FA' incorporates:
     *  Constant: '<S564>/Constant Value31'
     *  Gain: '<S680>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_PP2_LEDA_ColorCmd_FA_Value(false);

    /* Outport: '<Root>/VeVTLR_b_PP2_LEDB_ColorCmd_FA' incorporates:
     *  Constant: '<S564>/Constant Value32'
     *  Gain: '<S681>/Gain'
     */
    (void)Rte_Write_VeVTLR_b_PP2_LEDB_ColorCmd_FA_Value(false);

    /* End of Outputs for SubSystem: '<S562>/VTLO_NF' */
#endif

    /* End of Outputs for SubSystem: '<S3>/Variant Subsystem' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, VTLR_CODE) VTLR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */

    /* custom signals */
#if Rte_SysCon_Variant_VTLR_1

    VeVTLR_e_PPI_MdRq = CeVTLR_e_Idle;

#endif

#if Rte_SysCon_Variant_VTLR_1

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/VTLR_MedTED' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/VTLC'
     */
    /* SystemInitialize for IfAction SubSystem: '<S4>/V2L_Onboard' */
    /* SystemInitialize for Chart: '<S330>/Discharging_SF_OB_PPIM' */
    VeVTLR_e_PPI_MdRq = CeVTLR_e_Idle;

    /* End of SystemInitialize for SubSystem: '<S4>/V2L_Onboard' */

    /* SystemInitialize for SignalConversion generated from: '<S4>/MaxACVoltAlwdIDCM' incorporates:
     *  Constant: '<S10>/Calib'
     */
    VTLR_ac_B.OutportBufferForMaxACVoltAlwdID = KeVTLR_U_MaxACVoltAlwdIDCM;

    /* SystemInitialize for SignalConversion generated from: '<S4>/MaxACCurrAlwdIDCM' incorporates:
     *  Constant: '<S9>/Calib'
     */
    VTLR_ac_B.OutportBufferForMaxACCurrAlwdID = KeVTLR_I_MaxACCurrAlwdIDCM;

    /* SystemInitialize for SignalConversion generated from: '<S4>/ACFreqCmd' incorporates:
     *  Constant: '<S11>/Calib'
     */
    VTLR_ac_B.OutportBufferForACFreqCmd = KeVTLR_b_ACFreqCmd;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/VTLR_MedTED' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

    /* SystemInitialize for Outport: '<Root>/VeVTLR_e_DschrgOBCMdRq' incorporates:
     *  Merge: '<Root>/Merge_3'
     */
    (void)Rte_Write_VeVTLR_e_DschrgOBCMdRq_Value(CeOBCR_e_Idle_OBCMdRq);

    /* SystemInitialize for Outport: '<Root>/VeVTLR_e_DschrgSysSts' incorporates:
     *  Merge: '<Root>/Merge_5'
     */
    (void)Rte_Write_VeVTLR_e_DschrgSysSts_Value(CeVTLR_e_DschrgInactv);

    /* SystemInitialize for Outport: '<Root>/VeVTLR_e_DschrgOBCMdRq_Onboard' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    (void)Rte_Write_VeVTLR_e_DschrgOBCMdRq_Onboard_Value(CeOBCR_e_Idle_OBCMdRq);

    /* SystemInitialize for Outport: '<Root>/VeVTLR_e_TrunkSts' incorporates:
     *  Merge: '<Root>/Merge_13'
     */
    (void)Rte_Write_VeVTLR_e_TrunkSts_Value(CeVTLR_e_Inactive);

    /* SystemInitialize for Outport: '<Root>/VeVTLR_e_PP1_LEDA_Cmd' incorporates:
     *  Merge: '<Root>/Merge_14'
     */
    (void)Rte_Write_VeVTLR_e_PP1_LEDA_Cmd_Value(CeVTLR_e_Led_Off);

    /* SystemInitialize for Outport: '<Root>/VeVTLR_e_PP1_LEDB_Cmd' incorporates:
     *  Merge: '<Root>/Merge_15'
     */
    (void)Rte_Write_VeVTLR_e_PP1_LEDB_Cmd_Value(CeVTLR_e_Led_Off);

    /* SystemInitialize for Outport: '<Root>/VeVTLR_e_PPIM_MdRq' incorporates:
     *  Merge: '<Root>/Merge_16'
     */
    (void)Rte_Write_VeVTLR_e_PPIM_MdRq_Value(CeVTLR_e_Idle);

    /* SystemInitialize for Outport: '<Root>/VeVTLR_e_FrunkSts' incorporates:
     *  Merge: '<Root>/Merge_17'
     */
    (void)Rte_Write_VeVTLR_e_FrunkSts_Value(CeVTLR_e_Inactive_Frunk);

    /* SystemInitialize for Outport: '<Root>/VeVTLR_e_PP2_LEDA_Cmd' incorporates:
     *  Merge: '<Root>/Merge_18'
     */
    (void)Rte_Write_VeVTLR_e_PP2_LEDA_Cmd_Value(CeVTLR_e_Led_Off);

    /* SystemInitialize for Outport: '<Root>/VeVTLR_e_PP2_LEDB_Cmd' incorporates:
     *  Merge: '<Root>/Merge_19'
     */
    (void)Rte_Write_VeVTLR_e_PP2_LEDB_Cmd_Value(CeVTLR_e_Led_Off);

    /* SystemInitialize for Outport: '<Root>/VeVTLR_e_PP_LEDA_ColorCmd' incorporates:
     *  Merge: '<Root>/Merge_9'
     */
    (void)Rte_Write_VeVTLR_e_PP_LEDA_ColorCmd_Value(CeVTLR_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVTLR_e_PP_LEDB_ColorCmd' incorporates:
     *  Merge: '<Root>/Merge_36'
     */
    (void)Rte_Write_VeVTLR_e_PP_LEDB_ColorCmd_Value(CeVTLR_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVTLR_e_PP2_LEDA_ColorCmd' incorporates:
     *  Merge: '<Root>/Merge_37'
     */
    (void)Rte_Write_VeVTLR_e_PP2_LEDA_ColorCmd_Value(CeVTLR_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVTLR_e_PP2_LEDB_ColorCmd' incorporates:
     *  Merge: '<Root>/Merge_38'
     */
    (void)Rte_Write_VeVTLR_e_PP2_LEDB_ColorCmd_Value(CeVTLR_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeVTLR_e_PP_LEDC_Cmd' incorporates:
     *  Merge: '<Root>/Merge_39'
     */
    (void)Rte_Write_VeVTLR_e_PP_LEDC_Cmd_Value(CeVTLR_e_Led_Off);

    /* SystemInitialize for Outport: '<Root>/VeVTLR_e_PP_LEDC_ColorCmd' incorporates:
     *  Merge: '<Root>/Merge_43'
     */
    (void)Rte_Write_VeVTLR_e_PP_LEDC_ColorCmd_Value(CeVTLR_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
